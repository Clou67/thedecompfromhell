//==== 00120258  ns=partupd  size=0x25c
// sig: undefined UpdatePart_0(PartInstance * part)
// callers(0): 
// callees(2): 00118d60 mobyutil::MB_SampleByteGrid; 0011e6ec partproc::DeletePart

/* Part 0 */

void partupd::UpdatePart_0(PartInstance *part)

{
  float fVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  
  fVar5 = (part->pos).z;
  uVar8 = part->update[7] >> 0x1f;
  uVar9 = (int)fVar5 >> 0x1f;
  dVar16 = (double)(float)part->update[7];
  fVar1 = (part->pos).z;
  iVar2 = part->update[3];
  if ((int)((uVar8 >> 1 ^ part->update[7]) - uVar8) <= (int)((uVar9 >> 1 ^ (uint)fVar5) - uVar9)) {
    fVar6 = (part->pos).x;
    fVar5 = (part->pos).x;
    if (-1 < (int)fVar6) {
      fVar7 = (part->pos).y;
      fVar3 = (part->pos).y;
      if (((-1 < (int)fVar7) &&
          ((int)(((uint)((int)fVar6 >> 0x1f) >> 1 ^ (uint)fVar6) - ((int)fVar6 >> 0x1f)) <
           0x44000001)) &&
         ((int)(((uint)((int)fVar7 >> 0x1f) >> 1 ^ (uint)fVar7) - ((int)fVar7 >> 0x1f)) < 0x44000001
         )) {
        fVar6 = (float)part->update[0];
        fVar7 = (float)part->update[1];
        fVar11 = (float)part->update[4] + DAT_00a52b90;
        fVar12 = (float)part->update[5] + DAT_00a52b94;
        fVar15 = (float)part->update[6] + DAT_00a52b98;
        fVar10 = fVar6 + fVar11;
        fVar14 = fVar7 + fVar12;
        fVar13 = (float)part->update[2] + fVar15;
        sVar4 = part->timer;
        part->update[0] = (int)fVar10;
        (part->pos).x = fVar5 + fVar11;
        part->update[1] = (int)fVar14;
        part->update[2] = (int)fVar13;
        (part->pos).y = fVar3 + fVar12;
        (part->pos).z = fVar1 + fVar15;
        if ((sVar4 != 2) && (((int)fVar6 != (int)fVar10 || ((int)fVar7 != (int)fVar14)))) {
          dVar17 = (double)DAT_00a52ba0;
          dVar16 = (double)mobyutil::MB_SampleByteGrid
                                     (CONCAT44(fVar10,fVar14),CONCAT44(fVar13,iVar2));
          if (dVar17 <= dVar16) {
            dVar16 = (double)mobyutil::MB_SampleByteGrid
                                       (*(undefined8 *)part->update,
                                        *(undefined8 *)(part->update + 2));
          }
          else {
            dVar16 = (double)DAT_00a52ba0;
          }
          if ((double)(float)part->update[2] < dVar16) {
            partproc::DeletePart(part);
            return;
          }
        }
        part->update[6] = (int)-(DAT_0071f418 * 9.8 - (float)part->update[6]);
        part->update[7] = (int)(float)(dVar16 + (double)DAT_00a52b98);
        return;
      }
    }
  }
  partproc::DeletePart(part);
  return;
}



//==== 001204c0  ns=partupd  size=0x128
// sig: undefined SpawnPart_1(PartInstance * param_1, undefined8 param_2)
// callers(1): 00118e38 mobyutil::MB_SpawnGridParticles
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 1 */

void partupd::SpawnPart_1(PartInstance *param_1,undefined8 param_2)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  PartInstance *pPVar4;
  char cVar5;
  PartInstance *iVar6;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pPVar4 = partproc::CreatePart(1);
  if (pPVar4 != (PartInstance *)0x0) {
    *(float *)&param_1->rot = *(float *)&param_1->rot + 0.1;
    (pPVar4->pos).x = *(float *)param_1;
    (pPVar4->pos).y = (float)param_1->color;
    (pPVar4->pos).z = *(float *)&param_1->rot;
    fVar2 = param_1->scale;
    pPVar4->color = param_2._4_4_ << 0x18 | 0x907070;
    (pPVar4->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x4000000000000000);
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pPVar4->drawDist = cVar5 + '@';
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    pPVar4->gsAlpha = 0x48;
    pPVar4->type = 0;
    bVar1 = *DAT_00a52808;
    pPVar4->scale = 31500.002;
    pPVar4->tex = bVar1;
    pPVar4->rot = -0x60;
    auVar6 = loadVectorLeftIndexed(8,0x1204b4);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar6,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar3;
    pPVar4->update[0] = param_2._4_4_;
  }
  return;
}



//==== 001205f0  ns=partupd  size=0xe4
// sig: undefined UpdatePart_1(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 1 */

void partupd::UpdatePart_1(PartInstance *part)

{
  int iVar1;
  double dVar2;
  
  dVar2 = 27.5;
  part->color = ((int)part->timer * part->update[0]) / (int)(animationSpeed * 27.5) << 0x18 |
                part->color & 0xffffff;
  iVar1 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar1 == 0) {
    part->tex = *(byte *)(DAT_00a52808 +
                         (((int)((double)animationSpeed * dVar2) - (int)part->timer) * 9) /
                         (int)((double)animationSpeed * dVar2));
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 001206e8  ns=partupd  size=0x224
// sig: undefined SpawnPart_2(void)
// callers(56): 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 00161480 space::Space_SpawnShipParticles; 001aefb8 mobyupdate_helpers::M1068_001aefb8; 001ca968 mobyupdate_helpers::M1109_001ca968; 001caf98 mobyupdate_helpers::M1109_001caf98; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 001f4d90 mobyupdate_helpers::M1197_001f4d90; 001fade0 mobyupdate_helpers::M1202_001fade0; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00204cd8 mobyupdate_helpers::M1212_00204cd8; 002059f0 mobyupdate_helpers::M1973_002059f0; 00205d98 mobyupdate_helpers::M1973_00205d98; 0020d3e0 mobyupdate_helpers::M1224_0020d3e0; 0022ce50 mobyupdate_helpers::M1262_0022ce50; 0023f840 mobyupdate_helpers::M1320_0023f840; 0023fc90 mobyupdate_unsorted::UpdateMoby_1297; 00240058 mobyupdate_helpers::M1297_00240058; 00243a70 mobyupdate_unsorted::UpdateMoby_a_lot_9; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 0024b718 mobyupdate_helpers::M133_0024b718; 0028a9f0 mobyupdate_unsorted::UpdateMoby_1479; 0028bac0 mobyupdate_helpers::M1479_0028bac0; 0028f7d0 mobyupdate_unsorted::UpdateMoby_1512; 002925d0 mobyupdate_helpers::M1524_002925d0
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 001134c8 mobyutil::MB_compressVector; 001135f0 mobyutil::MB_decompressVector; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 2 */

PartInstance *
partupd::SpawnPart_2
          (float *param_1,float *param_2,float *param_3,uint param_4,int param_5,short param_6,
          undefined2 param_7,undefined2 param_8)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  undefined2 uVar3;
  double dVar5;
  double dVar6;
  uint in_stack_00000074;
  float afStack_90 [4];
  float afStack_80 [6];
  
  pPVar2 = partproc::CreatePart(2);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_1;
    (pPVar2->pos).y = param_1[1];
    (pPVar2->pos).z = param_1[2];
    fVar1 = param_1[3];
    pPVar2->color = param_4;
    (pPVar2->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 0;
    pPVar2->scale = 0.0;
    mobyutil::MB_randRangeFloat(0.0,255.0);
    cVar4 = fastfunc::FastDoubleToInt();
    pPVar2->rot = cVar4;
    if (in_stack_00000074 == 0xffffffff) {
      pPVar2->tex = *DAT_00a52860;
    }
    else {
      pPVar2->tex = *(byte *)(&partproc::g_PartTexFrames)[in_stack_00000074 & 0xffff];
      if ((in_stack_00000074 & 0x10000) != 0) {
        pPVar2->gsAlpha = 0x48;
      }
    }
    pPVar2->timer = param_6;
    dVar6 = 210000.0;
    dVar5 = 0.0010000000474974513;
    uVar3 = fastfunc::FastDoubleToInt((double)(param_2[3] * 210000.0 * 0.001));
    *(undefined2 *)((int)pPVar2->update + 0x16) = uVar3;
    uVar3 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(float)((double)param_3[3] * dVar6) * dVar5));
    *(undefined2 *)(pPVar2->update + 6) = uVar3;
    mobyutil::MB_compressVector(param_2,pPVar2->update);
    mobyutil::MB_compressVector(param_3,pPVar2->update + 1);
    mobyutil::MB_decompressVector(afStack_90,pPVar2->update);
    mobyutil::MB_decompressVector(afStack_80,pPVar2->update + 1);
    pPVar2->update[2] = param_4;
    pPVar2->update[3] = param_5;
    *(short *)(pPVar2->update + 4) = param_6;
    *(undefined2 *)((int)pPVar2->update + 0x12) = param_7;
    *(undefined2 *)(pPVar2->update + 5) = param_8;
  }
  return pPVar2;
}



//==== 00120918  ns=partupd  size=0x39c
// sig: undefined UpdatePart_2(PartInstance * part)
// callers(0): 
// callees(5): 001135f0 mobyutil::MB_decompressVector; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 2 */

void partupd::UpdatePart_2(PartInstance *part)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  longlong local_30;
  
  lVar6 = (longlong)(int)part;
  sVar2 = *(short *)(part->update + 4);
  if ((worldUpdateTime & 1) != 0) {
    part->rot = part->rot + '\x01';
  }
  if (sVar2 == 0) {
    if (*(short *)((int)part->update + 0x12) == 0) {
      mobyutil::MB_decompressVector(&local_60,part->update + 1);
      uVar7 = part->update[3];
      sVar2 = part->timer;
      (part->pos).x = (part->pos).x + local_60;
      (part->pos).y = (part->pos).y + local_5c;
      (part->pos).z = (part->pos).z + local_58;
      dVar9 = (double)fastfunc::FastIntToDouble(sVar2);
      dVar10 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 5));
      uVar7 = fastfunc::FastLerpColor((double)(float)(dVar9 / dVar10),uVar7 & 0xffffff,uVar7);
      part->color = uVar7;
      auVar11 = ZEXT416(0xfffffff0);
      auVar12 = loadVectorLeftIndexed(0x38,lVar6);
      auVar12 = vectorShiftRightAlgebraicWord
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = loadVectorLeftIndexed(4,0x12090c);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorMultiplyOddSignedHalfWord
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0xc,lVar6);
      *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar5;
      iVar8 = fastfunc::FastDecTimerS16(lVar6 + 10);
      if (iVar8 != 0) {
        partproc::DeletePart(lVar6);
      }
    }
    else {
      mobyutil::MB_decompressVector(&local_50,part->update);
      mobyutil::MB_decompressVector(&local_40,part->update + 1);
      dVar9 = (double)fastfunc::FastIntToDouble(part->timer);
      dVar10 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)part->update + 0x12));
      fVar1 = (float)(dVar9 / dVar10);
      sVar2 = *(short *)((int)part->update + 0x16);
      sVar3 = *(short *)(part->update + 6);
      local_30 = (longlong)(int)sVar3;
      local_54 = local_44;
      iVar8 = part->update[3];
      iVar4 = part->update[2];
      local_60 = fVar1 * (local_50 - local_40) + local_40;
      local_5c = fVar1 * (local_4c - local_3c) + local_3c;
      local_58 = fVar1 * (local_48 - local_38) + local_38;
      (part->pos).x = (part->pos).x + local_60;
      (part->pos).y = (part->pos).y + local_5c;
      (part->pos).z = (part->pos).z + local_58;
      part->scale = ((float)(longlong)((int)sVar2 - (int)sVar3) * fVar1 + (float)local_30) * 1000.0;
      uVar7 = fastfunc::FastLerpColor(iVar8,iVar4);
      part->color = uVar7;
      iVar8 = fastfunc::FastDecTimerS16(lVar6 + 10);
      if (iVar8 != 0) {
        *(undefined2 *)((int)part->update + 0x12) = 0;
        part->timer = *(short *)(part->update + 5);
      }
    }
  }
  else {
    *DAT_009271f8 = 0;
    mobyutil::MB_decompressVector(&local_60,part->update);
    sVar2 = part->timer;
    (part->pos).x = (part->pos).x + local_60;
    (part->pos).y = (part->pos).y + local_5c;
    (part->pos).z = (part->pos).z + local_58;
    dVar9 = (double)fastfunc::FastIntToDouble(sVar2);
    dVar10 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 4));
    uVar7 = fastfunc::FastLerpColor
                      ((double)(1.0 - (float)(dVar9 / dVar10)),part->update[2] & 0xffffff,
                       part->update[2]);
    part->color = uVar7;
    auVar11 = ZEXT416(0xfffffff0);
    auVar12 = loadVectorLeftIndexed(0x36,lVar6);
    auVar13 = loadVectorLeftIndexed(4,0x12090c);
    auVar12 = vectorShiftRightAlgebraicWord
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorMultiplyOddSignedHalfWord
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0xc,lVar6);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar5;
    iVar8 = fastfunc::FastDecTimerS16(lVar6 + 10);
    if (iVar8 != 0) {
      *(undefined2 *)(part->update + 4) = 0;
      part->timer = *(short *)((int)part->update + 0x12);
    }
  }
  return;
}



//==== 00120cc8  ns=partupd  size=0x22c
// sig: undefined SpawnPart_3(void)
// callers(0): 
// callees(6): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 3 */

undefined8
partupd::SpawnPart_3
          (float *param_1,undefined1 *param_2,uint param_3,ulonglong param_4,ulonglong param_5)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  int iVar5;
  PartInstance *pPVar6;
  char cVar7;
  longlong lVar4;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_50 [24];
  
  uVar2 = (int)param_1[2] >> 0x1f;
  uVar8 = 0x401ff5c280000000;
  if (((0x40ffae14 < (int)((uVar2 >> 1 ^ (uint)param_1[2]) - uVar2)) &&
      (iVar5 = collproc::CollLine(param_1,local_50,0x12,0,0), iVar5 == 0)) &&
     (iVar5 = collproc::CollSphere(uVar8,param_1), iVar5 == 0)) {
    pPVar6 = partproc::CreatePart(3);
    if (pPVar6 != (PartInstance *)0x0) {
      (pPVar6->pos).x = *param_1;
      (pPVar6->pos).y = param_1[1];
      (pPVar6->pos).z = param_1[2];
      fVar1 = param_1[3];
      pPVar6->color =
           (uint)((param_5 & 0xffffffff) << 0x10) | (uint)((param_4 & 0xffffffff) << 8) | param_3;
      (pPVar6->pos).w = fVar1;
      cVar7 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar6->drawDist = cVar7 + '@';
      lVar4 = mobyutil::MB_randInt(100);
      pPVar6->type = 0;
      pPVar6->gsAlpha = ((byte)(lVar4 + -0x14 >> 0x3f) & 0xfc) + 0x48;
      pPVar6->tex = *DAT_00a52810;
      iVar5 = rand();
      pPVar6->rot = (char)iVar5;
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      pPVar6->scale = 2.541e+06;
      auVar9 = loadVectorLeftIndexed(0xc,0x120cb4);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      sVar3 = storeVectorElementHalfWordIndexed(auVar9,10,(longlong)(int)pPVar6);
      pPVar6->timer = sVar3;
      pPVar6->update[4] = (int)param_2;
      *param_2 = 1;
      pPVar6->update[6] = 0;
      pPVar6->update[7] = 0;
      pPVar6->update[5] = 0;
      return 1;
    }
  }
  return 0;
}



//==== 00120f48  ns=partupd  size=0x7f0
// sig: undefined UpdatePart_3(PartInstance * part)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000fe484 mobyutil::MB_randRange; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 3 */

void partupd::UpdatePart_3(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  int iVar17;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  short sVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lVar13 = (longlong)(int)part;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar15 = uVar16 - 0x120;
  puVar5 = (ulonglong *)lVar15;
  *puVar5 = uVar16;
  puVar5[0x26] = in_LR;
  puVar5[0x1c] = in_f24;
  puVar5[0x1d] = in_f25;
  puVar5[0x1e] = in_f26;
  puVar5[0x1f] = in_f27;
  puVar5[0x20] = in_f28;
  puVar5[0x21] = in_f29;
  puVar5[0x22] = in_f30;
  puVar5[0x23] = in_f31;
  puVar5[0x1b] = unaff_r31;
  iVar17 = part->update[7];
  puVar5[0x1a] = unaff_r30;
  puVar5[0x19] = unaff_r29;
  if (iVar17 < 3) {
    if (-1 < iVar17) {
      iVar17 = iVar17 + 1;
      part->update[7] = iVar17;
    }
    if (iVar17 < 0) goto LAB_0012114c;
  }
  else {
    sVar18 = part->timer;
    puVar5[0x16] = (longlong)(int)(animationSpeed * 120.5);
    if ((*(int *)((int)puVar5 + 0xb4) < (int)sVar18) &&
       (iVar17 = collproc::CollSphere(0x401ff5c280000000,lVar13 + 0x10,&DAT_00120ef4,0x12,0),
       iVar17 != 0)) {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      part->update[5] = 1;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(in_LR,0x120ef4);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = vectorSplatHalfWord(auVar34,1);
      sVar18 = storeVectorElementHalfWordIndexed(auVar34,10,lVar13);
      part->timer = sVar18;
      part->update[7] = -1;
      goto LAB_0012114c;
    }
    part->update[7] = 0;
  }
  fVar2 = DAT_00e5aef4;
  fVar1 = DAT_00e5aee4 + 1.5707963;
  fVar4 = 3.1415925 - DAT_00e5aee4;
  if (DAT_00e5aee4 - (3.1415925 - DAT_00e5aee4) < 0.0) {
    fVar4 = DAT_00e5aee4;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar6 = -3.1415925 - DAT_00e5aee4;
  if ((-3.1415925 - DAT_00e5aee4) - fVar4 < 0.0) {
    fVar6 = fVar4;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar7 = fVar6 * fVar6;
  fVar8 = fVar4 * fVar4;
  fVar11 = fVar7 * fVar7 * fVar6;
  fVar9 = fVar8 * fVar8 * fVar4;
  fVar12 = fVar7 * fVar11;
  fVar10 = fVar8 * fVar9;
  fVar1 = (part->pos).x;
  fVar3 = (part->pos).y;
  part->update[2] = 0;
  fVar6 = (fVar7 * fVar12 * 2.601887e-06 +
          fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
          fVar2 * 0.4;
  fVar4 = (fVar8 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar4 * -0.16666657 + fVar4) *
          fVar2 * 0.4;
  part->update[1] = (int)fVar6;
  part->update[0] = (int)fVar4;
  (part->pos).y = fVar3 + fVar6;
  (part->pos).x = fVar1 + fVar4;
LAB_0012114c:
  fVar1 = (part->pos).x - GameCamera.posX;
  fVar4 = (part->pos).y - GameCamera.posY;
  *(float *)(puVar5 + 0x10) = fVar1;
  *(float *)((int)puVar5 + 0x84) = fVar4;
  fVar2 = (part->pos).z - GameCamera.posZ;
  *(float *)(puVar5 + 0x11) = ABS(fVar1) - ABS(fVar4);
  dVar32 = 0.0;
  uVar21 = (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x84) >> 0x1d) & 4;
  dVar33 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
  fVar2 = ABS(*(float *)(puVar5 + 0x10));
  if (*(float *)(puVar5 + 0x11) - 0.0 < 0.0) {
    fVar2 = ABS(fVar4);
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar3 = ABS(*(float *)((int)puVar5 + 0x84));
  if (*(float *)(puVar5 + 0x11) - 0.0 < 0.0) {
    fVar3 = ABS(fVar1);
  }
  fVar1 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar25 = dVar32;
  if (0.0 < fVar2) {
    lVar14 = uVar16 - 0x110;
    lVar22 = uVar16 - 0x84;
    lVar19 = uVar16 - 0x94;
    lVar24 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x13) = fVar2;
    *(float *)(puVar5 + 0x12) = fVar2;
    *(float *)((int)puVar5 + 0x94) = fVar2;
    *(float *)((int)puVar5 + 0x8c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar3;
    *(float *)((int)puVar5 + 0x94) = *(float *)((int)puVar5 + 0x94) * fVar2;
    *(float *)(puVar5 + 0x13) = *(float *)(puVar5 + 0x13) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x7c) * fVar2 * fVar2;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
      lVar22 = lVar22 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar22 = uVar16 - 0x94;
    pfVar20 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar19 = lVar22;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x8c) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar14 = 2;
    do {
      iVar17 = (int)lVar15;
      iVar23 = (int)lVar22;
      lVar15 = lVar15 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0x8c)) + *(float *)(iVar23 + 4)
                        + *(float *)(iVar23 + 8) + *(float *)(iVar23 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
  }
  dVar25 = (double)fastfunc::FastDiffRots(dVar25,(double)GameCamera.rot.radius);
  if (1.0471975803375244 < ABS(dVar25)) {
    iVar17 = part->update[6];
    part->update[6] = iVar17 + 1;
    if (5 < iVar17) {
      *(undefined1 *)part->update[4] = 0;
      partproc::DeletePart(lVar13);
      return;
    }
    dVar27 = 1.0471975803375244;
    if (dVar32 - dVar25 < 0.0) {
      dVar27 = -1.0471975803375244;
    }
    dVar32 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,(float)dVar27);
    fVar2 = GameCamera.rot.radius;
    dVar31 = 3.141592502593994;
    fVar1 = (float)(dVar32 + 1.570796251296997);
    dVar30 = -3.141592502593994;
    dVar29 = -0.16666656732559204;
    dVar28 = 0.008333025500178337;
    dVar25 = -0.0001980741071747616;
    dVar32 = 2.601886990305502e-06;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar3 = fVar4;
    }
    fVar6 = fVar3 * fVar3;
    fVar1 = fVar6 * fVar6 * fVar3;
    fVar4 = fVar6 * fVar1;
    *(float *)(puVar5 + 0xe) =
         (float)((double)(fVar6 * fVar4 * 2.601887e-06 +
                         fVar4 * -0.0001980741 +
                         fVar1 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3) * dVar33);
    dVar26 = (double)fastfunc::FastWrapRot(fVar2,(float)dVar27);
    dVar27 = (double)(float)(dVar31 - dVar26);
    if (dVar26 - (double)(float)(dVar31 - dVar26) < 0.0) {
      dVar27 = dVar26;
    }
    dVar31 = (double)(float)(dVar30 - dVar26);
    if ((double)(float)(dVar30 - dVar26) - dVar27 < 0.0) {
      dVar31 = dVar27;
    }
    fVar1 = *(float *)(puVar5 + 0xe) + GameCamera.posX;
    fVar2 = (part->pos).z - GameCamera.posZ;
    dVar27 = (double)(float)(dVar31 * dVar31);
    (part->pos).x = fVar1;
    fVar3 = GameCamera.posY;
    dVar26 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar31));
    dVar30 = (double)(float)(dVar27 * dVar26);
    fVar4 = *(float *)((int)puVar5 + 0x7c);
    *(float *)(puVar5 + 0xe) = fVar1;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *(float *)(puVar5 + 0xf) = fVar2;
    fVar1 = (float)((double)(float)((double)(float)(dVar27 * dVar30) * dVar32 +
                                   (double)(float)(dVar30 * dVar25 +
                                                  (double)(float)(dVar26 * dVar28 +
                                                                 (double)(float)((double)(float)(
                                                  dVar27 * dVar31) * dVar29 + dVar31)))) * dVar33);
    fVar3 = fVar1 + fVar3;
    *(float *)((int)puVar5 + 0x74) = fVar1;
    (part->pos).y = fVar3;
    fVar1 = GameCamera.posZ;
    (part->pos).w = fVar4;
    fVar2 = fVar2 + fVar1;
    *(float *)((int)puVar5 + 0x74) = fVar3;
    (part->pos).z = fVar2;
    *(float *)(puVar5 + 0xf) = fVar2 + 32.0;
    iVar17 = collproc::CollLine(lVar13 + 0x10,uVar16 - 0xb0,0x12,0,0);
    if (iVar17 != 0) {
      *(undefined1 *)part->update[4] = 0;
      partproc::DeletePart(lVar13);
      return;
    }
  }
  if ((worldUpdateTime & 3) == 0) {
    part->rot = part->rot + '\x01';
  }
  dVar32 = 120.5;
  sVar18 = part->timer;
  uVar16 = 0x14;
  puVar5[0x16] = (longlong)(int)(animationSpeed * 120.5);
  iVar17 = *(int *)((int)puVar5 + 0xb4);
  if (sVar18 <= iVar17) {
    if (part->update[5] == 0) {
      iVar23 = (iVar17 - sVar18) * 0x14;
    }
    else {
      iVar23 = (int)((longlong)sVar18 << 4) + (int)((longlong)sVar18 << 2);
    }
    uVar16 = (ulonglong)(iVar23 / iVar17);
  }
  dVar25 = 8.0;
  if ((dVar33 < 8.0) || (dVar27 = 96.0, 96.0 < dVar33)) {
    *(undefined1 *)part->update[4] = 0;
    partproc::DeletePart(lVar13);
  }
  else {
    if (16.0 <= dVar33) {
      if (80.0 < dVar33) {
        dVar25 = (double)fastfunc::FastIntToDouble();
        uVar16 = fastfunc::FastDoubleToInt
                           ((double)((float)(dVar25 * (double)(float)(dVar27 - dVar33)) * 0.0625));
      }
    }
    else {
      dVar27 = (double)fastfunc::FastIntToDouble();
      uVar16 = fastfunc::FastDoubleToInt
                         ((double)((float)(dVar27 * (double)(float)(dVar33 - dVar25)) * 0.125));
    }
    part->color = (uint)((uVar16 & 0xffffffff) << 0x18) | part->color & 0xffffff;
    iVar17 = fastfunc::FastDecTimerS16(lVar13 + 10);
    if (iVar17 != 0) {
      if (part->update[5] == 0) {
        dVar33 = (double)animationSpeed;
        part->update[5] = 1;
        puVar5[0x16] = (longlong)(int)(dVar33 * dVar32);
        sVar18 = mobyutil::MB_randRange
                           (*(int *)((int)puVar5 + 0xb4) * 3,*(int *)((int)puVar5 + 0xb4) * 9);
        part->timer = sVar18;
      }
      else {
        *(undefined1 *)part->update[4] = 0;
        partproc::DeletePart(lVar13);
      }
    }
  }
  return;
}



//==== 00121740  ns=partupd  size=0x18c
// sig: undefined SpawnPart_4(void)
// callers(30): 00018238 mobyupdate_helpers::M1274_00018238; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00097700 hero::Hero_SpawnLavaAssParticles; 000a1378 hero::Hero_SpawnLavaDeathParts; 0010aa50 mobyutil::MB_MistDeathEffect; 001856a0 mobyupdate_helpers::M101_001856a0; 001b6918 mobyupdate_unsorted::UpdateMoby_1077; 0020bd30 mobyupdate_unsorted::UpdateMoby_122; 0023eb98 mobyupdate_unsorted::UpdateMoby_1292; 003154d8 mobyupdate_unsorted::UpdateMoby_248; 0035b9b0 mobyupdate_helpers::M388_0035b9b0; 0035bcf0 mobyupdate_helpers::M388_0035bcf0; 00366f00 mobyupdate_unsorted::UpdateMoby_413; 00373720 mobyupdate_unsorted::UpdateMoby_435; 0037b090 mobyupdate_unsorted::UpdateMoby_439; 0038d2e8 mobyupdate_unsorted::UpdateMoby_457; 0039ef28 mobyupdate_unsorted::UpdateMoby_487; 003b4740 mobyupdate_unsorted::UpdateMoby_556; 003bbde8 mobyupdate_unsorted::UpdateMoby_567; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003f25b8 mobyupdate_unsorted::UpdateMoby_632; 00414c50 mobyupdate_unsorted::UpdateMoby_686; 0044de60 mobyupdate_unsorted::UpdateMoby_755; 0044e100 mobyupdate_helpers::M757_0044e100
// callees(3): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 4 */

void partupd::SpawnPart_4
               (float *param_1,int *param_2,uint param_3,int param_4,int param_5,undefined2 param_6,
               undefined2 param_7,int param_8)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  int iVar3;
  
  pPVar2 = partproc::CreatePart(4);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_1;
    (pPVar2->pos).y = param_1[1];
    (pPVar2->pos).z = param_1[2];
    fVar1 = param_1[3];
    pPVar2->color = param_3;
    (pPVar2->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + -0x60;
    pPVar2->gsAlpha = ((byte)((LZCOUNT(-param_8) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
    pPVar2->type = 0;
    pPVar2->tex = *DAT_00a52814;
    iVar3 = rand();
    pPVar2->rot = (char)iVar3;
    pPVar2->scale = 0.0;
    (pPVar2->pos).x = *param_1;
    (pPVar2->pos).y = param_1[1];
    (pPVar2->pos).z = param_1[2];
    (pPVar2->pos).w = param_1[3];
    pPVar2->update[0] = *param_2;
    pPVar2->update[1] = param_2[1];
    pPVar2->update[2] = param_2[2];
    iVar3 = param_2[3];
    pPVar2->timer = (short)param_5;
    pPVar2->update[3] = iVar3;
    pPVar2->update[7] = param_5;
    pPVar2->update[4] = param_3;
    pPVar2->update[5] = param_4;
    *(undefined2 *)(pPVar2->update + 6) = param_7;
    *(undefined2 *)((int)pPVar2->update + 0x1a) = param_6;
  }
  return;
}



//==== 001218d8  ns=partupd  size=0x160
// sig: undefined UpdatePart_4(PartInstance * part)
// callers(0): 
// callees(4): 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Part 4 */

void partupd::UpdatePart_4(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint color2;
  float fVar6;
  float fVar7;
  uint color1;
  int iVar8;
  double dVar9;
  
  dVar9 = (double)fastfunc::FastIntToDouble
                            (((int)*(short *)(part->update + 6) *
                             (part->update[7] - (int)part->timer)) / part->update[7] +
                             (int)*(short *)((int)part->update + 0x1a));
  fVar1 = (float)part->update[1];
  fVar2 = (float)part->update[2];
  fVar3 = (part->pos).x;
  fVar4 = (part->pos).y;
  fVar5 = (part->pos).z;
  part->scale = (float)(dVar9 * 1000.0);
  fVar7 = DAT_0071f408 * -0.01999998 + 1.0;
  color1 = part->update[5];
  color2 = part->update[4];
  part->rot = part->rot + '\x01';
  iVar8 = part->update[7];
  fVar6 = (float)part->update[0] * fVar7;
  fVar1 = fVar1 * fVar7;
  fVar2 = fVar2 * fVar7;
  part->update[0] = (int)fVar6;
  part->update[1] = (int)fVar1;
  part->update[2] = (int)fVar2;
  (part->pos).x = fVar3 + fVar6;
  (part->pos).y = fVar4 + fVar1;
  (part->pos).z = fVar5 + fVar2;
  dVar9 = (double)fastfunc::FastIntToDouble(iVar8);
  mobyutil::TweenColor((float)((double)(longlong)(int)part->timer / dVar9),color1,color2);
  part->color = color1;
  iVar8 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar8 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00121a40  ns=partupd  size=0x12c
// sig: undefined SpawnPart_5(void)
// callers(7): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 00139cf8 path::PosRing_DebugDraw; 002add88 mobyupdate_unsorted::UpdateMoby_170; 002e6f18 mobyupdate_helpers::M1900_002e6f18; 002fe0f0 mobyupdate_helpers::M230_002fe0f0; 00311558 mobyupdate_helpers::M245_00311558; 00320bf8 mobyupd::update270::SpawnMoby_270_Chicken
// callees(3): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 5 */

void partupd::SpawnPart_5
               (double param_1,double param_2,float *param_3,uint param_4,ulonglong param_5,
               ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  
  if ((int)param_8 != 0) {
    pPVar3 = partproc::CreatePart(5);
    if (pPVar3 != (PartInstance *)0x0) {
      (pPVar3->pos).x = *param_3;
      (pPVar3->pos).y = param_3[1];
      (pPVar3->pos).z = param_3[2];
      fVar2 = param_3[3];
      pPVar3->color =
           (uint)((param_6 & 0xffffffff) << 0x10) & 0xff0000 |
           (uint)((param_5 & 0xffffffff) << 8) & 0xff00 | param_4 & 0xff | 0x7f000000;
      (pPVar3->pos).w = fVar2;
      cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar3->drawDist = cVar4 + -0x60;
      pPVar3->gsAlpha = 0x48;
      pPVar3->type = 0;
      pPVar3->rot = '\0';
      pPVar3->scale = (float)param_2;
      bVar1 = *DAT_00a52818;
      pPVar3->update[0] = (int)param_8;
      pPVar3->tex = bVar1;
      dVar5 = (double)fastfunc::FastIntToDouble(param_8);
      pPVar3->update[1] = (int)(float)(param_1 / dVar5);
    }
  }
  return;
}



//==== 00121b70  ns=partupd  size=0xa8
// sig: undefined UpdatePart_5(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fff60 fastfunc::FastDecTimerS32

/* Part 5 */

void partupd::UpdatePart_5(PartInstance *part)

{
  int iVar1;
  
  iVar1 = fastfunc::FastDecTimerS32((longlong)(int)part + 0x20);
  if (iVar1 == 0) {
    part->scale = part->scale + (float)part->update[1];
    if (part->update[0] < (int)(animationSpeed * 6.5)) {
      part->color = (part->update[0] * 0x7f) / (int)(animationSpeed * 6.5) << 0x18 |
                    part->color & 0xffffff;
    }
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00121c28  ns=partupd  size=0x2d4
// sig: undefined SpawnPart_6(void)
// callers(1): 00320598 mobyupdate_unsorted::UpdateMoby_27
// callees(3): 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 6 */

void partupd::SpawnPart_6
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,double param_9,int param_10,
               undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  byte bVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar5;
  undefined1 uVar6;
  uint uVar4;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  uint in_stack_000000a4;
  uint in_stack_000000ac;
  byte in_stack_000000b7;
  
  auVar12 = loadVectorLeftIndexed(0x9c,ZEXT48(&stack0x00000000));
  auVar9._0_4_ = (float)param_5;
  auVar9._4_4_ = (float)param_5;
  auVar9._8_4_ = (float)param_5;
  auVar9._12_4_ = (float)param_5;
  if (param_10 != 0) {
    pPVar3 = partproc::CreatePart(6);
    if (pPVar3 != (PartInstance *)0x0) {
      fStack00000044 = (float)param_12;
      fStack0000004c = (float)param_13;
      (pPVar3->pos).y = fStack00000044;
      (pPVar3->pos).w = fStack0000004c;
      fStack00000040 = (float)((ulonglong)param_12 >> 0x20);
      fStack00000048 = (float)((ulonglong)param_13 >> 0x20);
      (pPVar3->pos).x = fStack00000040;
      (pPVar3->pos).z = fStack00000048;
      if (in_stack_000000b7 == 0xff) {
        cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
        pPVar3->drawDist = ((byte)(in_stack_000000a4 >> 1) & 0x70) + cVar5;
        pPVar3->gsAlpha =
             ((byte)((LZCOUNT(-(in_stack_000000a4 & 1)) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
      }
      else {
        pPVar3->drawDist = (char)in_stack_000000a4;
        pPVar3->gsAlpha = in_stack_000000b7;
      }
      pPVar3->type = 0;
      bVar1 = *(byte *)(&partproc::g_PartTexFrames)[in_stack_000000ac & 0xff];
      pPVar3->update[5] = (int)(float)param_5;
      pPVar3->tex = bVar1;
      pPVar3->update[0] = (int)(float)param_1;
      pPVar3->update[1] = (int)(float)param_2;
      pPVar3->update[2] = (int)(float)param_3;
      dVar7 = 65535.0;
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(param_6 * 65535.0));
      *(undefined1 *)(pPVar3->update + 6) = uVar6;
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(param_7 * dVar7));
      *(undefined1 *)((int)pPVar3->update + 0x19) = uVar6;
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(param_8 * dVar7));
      *(undefined1 *)((int)pPVar3->update + 0x1a) = uVar6;
      pPVar3->update[4] = (int)(float)param_9;
      auVar10 = ZEXT416(0xffffffff);
      auVar8 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      pPVar3->update[3] = param_10;
      auVar10 = ZEXT416(0xffffffff);
      auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = loadVectorLeftIndexed(8,0x121c18);
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar8);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar12,0);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xff;
      cVar5 = storeVectorElementByteIndexed
                        (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 | auVar9 << 0x20 |
                         auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 | auVar9 << 0x40 |
                         auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                         auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,8,(longlong)(int)pPVar3);
      pPVar3->rot = cVar5;
      pPVar3->scale = (float)param_4;
      auVar9 = loadVectorLeftIndexed(0xc,0x121c18);
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorAddFloatingPoint
                         (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar11);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      sVar2 = storeVectorElementHalfWordIndexed(auVar9,10,(longlong)(int)pPVar3);
      pPVar3->timer = sVar2;
      *(undefined1 *)((int)pPVar3->update + 0x1b) = 0;
      uVar4 = mobyutil::Float_To_RGBA((float)param_6,(float)param_7,(float)param_8,(float)param_9);
      pPVar3->color = uVar4;
    }
  }
  return;
}



//==== 00121f10  ns=partupd  size=0x8bc
// sig: undefined UpdatePart_6(PartInstance * part)
// callers(0): 
// callees(7): 00057820 collproc::CollLine; 0010a968 mobyutil::MB_RemoveVecComponent; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 6 */

void partupd::UpdatePart_6(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar18;
  undefined1 uVar20;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar19;
  byte bVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 local_c0 [12];
  float local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a0;
  int local_9c;
  int local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  longlong local_50;
  
  lVar14 = (longlong)(int)part;
  fVar2 = (part->pos).x + (float)part->update[0];
  pfVar7 = (float *)part->update[3];
  fVar1 = (part->pos).y + (float)part->update[1];
  fVar3 = (part->pos).z + (float)part->update[2];
  if (((uint)pfVar7[0x1c] & 1) == 0) {
    (part->pos).x = fVar2;
    (part->pos).y = fVar1;
    (part->pos).z = fVar3;
    (part->pos).w = local_b4;
  }
  else {
    iVar18 = collproc::CollLine(lVar14 + 0x10,local_c0,4,lVar14,0);
    if (iVar18 == 0) {
      (part->pos).x = fVar2;
      (part->pos).y = fVar1;
      (part->pos).z = fVar3;
      (part->pos).w = local_b4;
    }
    else {
      local_a0 = (float)part->update[0];
      local_9c = part->update[1];
      local_98 = part->update[2];
      mobyutil::MB_RemoveVecComponent(pfVar7[0xf],&local_b0,&local_a0,&CollOutput.normal.x);
      part->update[0] = (int)local_b0;
      part->update[1] = local_ac;
      part->update[2] = local_a8;
      fVar13 = CollOutput.normal.z;
      fVar12 = CollOutput.normal.y;
      fVar11 = CollOutput.normal.x;
      fVar10 = CollOutput.ip.z;
      fVar6 = CollOutput.ip.y;
      fVar5 = CollOutput.ip.x;
      fVar1 = CollOutput.normal.y * CollOutput.normal.y;
      fVar3 = CollOutput.normal.x * CollOutput.normal.x;
      fVar2 = 0.0;
      fVar4 = CollOutput.normal.z * CollOutput.normal.z;
      (part->pos).w = CollOutput.ip.w;
      fVar4 = SQRT(fVar4 + fVar3 + fVar1);
      fVar1 = 0.055 / fVar4;
      fVar3 = fVar2;
      if (0.0 - fVar4 < 0.0) {
        fVar3 = fVar13 * fVar1;
      }
      fVar9 = fVar2;
      if (0.0 - fVar4 < 0.0) {
        fVar9 = fVar12 * fVar1;
      }
      if (0.0 - fVar4 < 0.0) {
        fVar2 = fVar11 * fVar1;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar3 = fVar13 * fVar1;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar9 = fVar12 * fVar1;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar2 = fVar11 * fVar1;
      }
      (part->pos).z = fVar10 + fVar3;
      (part->pos).y = fVar6 + fVar9;
      (part->pos).x = fVar5 + fVar2;
    }
  }
  if (((uint)pfVar7[0x1c] & 2) == 0) {
    if (((uint)pfVar7[0x1c] & 4) != 0) {
      uVar19 = part->color;
      uVar15 = fastfunc::FastDoubleToInt((double)((float)part->update[4] * 255.0));
      part->color = (uint)((uVar15 & 0xffffffff) << 0x18) | uVar19 & 0xffffff;
    }
  }
  else {
    dVar25 = (double)fastfunc::FastIntToDouble
                               (((ulonglong)part->color & 0xff) << 8 |
                                (ulonglong)*(byte *)(part->update + 6));
    local_50 = (longlong)(int)(part->color & 0xff00 | (uint)*(byte *)((int)part->update + 0x19));
    dVar34 = 1.5259021893143654e-05;
    iVar18 = fastfunc::FastDoubleToInt((double)local_50);
    local_50 = (longlong)
               (int)((int)(part->color & 0xff0000) >> 8 | (uint)*(byte *)((int)part->update + 0x1a))
    ;
    dVar32 = (double)(longlong)iVar18;
    iVar18 = fastfunc::FastDoubleToInt((double)local_50);
    local_50 = (longlong)iVar18;
    bVar21 = *(byte *)((int)part->update + 0x1b);
    dVar31 = (double)pfVar7[0x19];
    dVar30 = (double)pfVar7[0x16];
    dVar29 = (double)pfVar7[0x1a];
    dVar28 = (double)pfVar7[0x17];
    dVar27 = (double)pfVar7[0x1b];
    dVar26 = (double)pfVar7[0x18];
    if ((bVar21 & 0x10) == 0) {
      dVar25 = dVar25 * dVar34 + (double)(pfVar7[0x13] * DAT_0071f408);
    }
    else {
      dVar25 = dVar25 * dVar34 - (double)(pfVar7[0x13] * DAT_0071f408);
    }
    if ((bVar21 & 0x20) == 0) {
      dVar32 = dVar32 * dVar34 + (double)(pfVar7[0x14] * DAT_0071f408);
    }
    else {
      dVar32 = dVar32 * dVar34 - (double)(pfVar7[0x14] * DAT_0071f408);
    }
    if ((bVar21 & 0x40) == 0) {
      dVar34 = (double)local_50 * dVar34 + (double)(pfVar7[0x15] * DAT_0071f408);
    }
    else {
      dVar34 = (double)local_50 * dVar34 - (double)(pfVar7[0x15] * DAT_0071f408);
    }
    dVar33 = (double)(float)dVar25;
    if ((dVar31 < (double)(float)dVar25) && (dVar33 = dVar31, ((uint)pfVar7[0x1c] & 0x100) != 0)) {
      bVar21 = bVar21 ^ 0x10;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    if ((dVar33 < dVar30) && (dVar33 = dVar30, ((uint)pfVar7[0x1c] & 0x10) != 0)) {
      bVar21 = bVar21 ^ 0x10;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    dVar25 = (double)(float)dVar32;
    if ((dVar29 < (double)(float)dVar32) && (dVar25 = dVar29, ((uint)pfVar7[0x1c] & 0x200) != 0)) {
      bVar21 = bVar21 ^ 0x20;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    if ((dVar25 < dVar28) && (dVar25 = dVar28, ((uint)pfVar7[0x1c] & 0x20) != 0)) {
      bVar21 = bVar21 ^ 0x20;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    dVar28 = (double)(float)dVar34;
    if ((dVar27 < (double)(float)dVar34) && (dVar28 = dVar27, ((uint)pfVar7[0x1c] & 0x400) != 0)) {
      bVar21 = bVar21 ^ 0x40;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    if ((dVar28 < dVar26) && (dVar28 = dVar26, ((uint)pfVar7[0x1c] & 0x40) != 0)) {
      *(byte *)((int)part->update + 0x1b) = bVar21 ^ 0x40;
    }
    dVar26 = 65535.0;
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * 65535.0));
    *(undefined1 *)(part->update + 6) = uVar20;
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * dVar26));
    *(undefined1 *)((int)part->update + 0x19) = uVar20;
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
    *(undefined1 *)((int)part->update + 0x1a) = uVar20;
    dVar26 = 255.0;
    uVar15 = fastfunc::FastDoubleToInt((double)((float)part->update[4] * 255.0));
    uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * dVar26));
    uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * dVar26));
    part->color = (uint)((uVar17 & 0xffffffff) << 0x10) & 0xff0000 |
                  (uint)((uVar15 & 0xffffffff) << 0x18) |
                  (uint)((uVar16 & 0xffffffff) << 8) & 0xff00 | uVar19 & 0xff;
  }
  fVar2 = pfVar7[0x1c];
  if (((uint)fVar2 & 4) != 0) {
    bVar21 = *(byte *)((int)part->update + 0x1b);
    if ((bVar21 & 0x80) == 0) {
      fVar1 = pfVar7[0xe] * DAT_0071f408 + (float)part->update[4];
    }
    else {
      fVar1 = -(pfVar7[0xe] * DAT_0071f408 - (float)part->update[4]);
    }
    part->update[4] = (int)fVar1;
    fVar3 = pfVar7[0x12];
    if ((fVar3 < fVar1) && (part->update[4] = (int)fVar3, fVar1 = fVar3, ((uint)fVar2 & 0x800) != 0)
       ) {
      bVar21 = bVar21 ^ 0x80;
      *(byte *)((int)part->update + 0x1b) = bVar21;
    }
    if ((fVar1 < pfVar7[0x11]) && (part->update[4] = (int)pfVar7[0x11], ((uint)fVar2 & 0x80) != 0))
    {
      *(byte *)((int)part->update + 0x1b) = bVar21 ^ 0x80;
    }
  }
  cVar22 = fastfunc::FastDoubleToInt((double)((float)part->update[5] * 255.0));
  part->rot = cVar22;
  if (((uint)pfVar7[0x1c] & 8) != 0) {
    dVar25 = (double)(float)part->update[0];
    dVar26 = (double)(float)part->update[1];
    dVar27 = (double)(float)part->update[2];
    if (((uint)pfVar7[0x1c] & 0x8000) == 0) {
      fVar2 = *pfVar7;
      fVar1 = pfVar7[1];
      fVar3 = pfVar7[2];
    }
    else {
      fastfunc::FastEulerToMtx1(&local_90,(ulonglong)(uint)pfVar7[0x1f] + 0x40);
      fVar3 = pfVar7[1];
      fVar4 = *pfVar7;
      fVar5 = pfVar7[2];
      fVar6 = pfVar7[3];
      fVar2 = local_60 * fVar6 + local_70 * fVar5 + local_90 * fVar4 + local_80 * fVar3;
      fVar1 = local_5c * fVar6 + local_6c * fVar5 + local_8c * fVar4 + local_7c * fVar3;
      fVar3 = local_58 * fVar6 + local_68 * fVar5 + local_88 * fVar4 + local_78 * fVar3;
    }
    fVar1 = (float)(dVar26 + (double)fVar1);
    fVar2 = (float)(dVar25 + (double)fVar2);
    fVar3 = (float)(dVar27 + (double)fVar3);
    fVar4 = pfVar7[0x10];
    fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar5 = fVar4 / fVar6;
    if (fVar4 - fVar6 < 0.0) {
      fVar3 = fVar5 * fVar3;
    }
    if (fVar4 - fVar6 < 0.0) {
      fVar1 = fVar5 * fVar1;
    }
    if (fVar4 - fVar6 < 0.0) {
      fVar2 = fVar5 * fVar2;
    }
    part->update[2] = (int)fVar3;
    part->update[1] = (int)fVar1;
    part->update[0] = (int)fVar2;
  }
  fVar1 = pfVar7[0xc] * DAT_0071f408 + part->scale;
  part->scale = fVar1;
  fVar2 = pfVar7[0x1d];
  if (fVar1 < fVar2) {
    part->scale = fVar2;
    fVar1 = fVar2;
  }
  if (pfVar7[0x1e] < fVar1) {
    part->scale = pfVar7[0x1e];
  }
  part->update[5] = (int)(pfVar7[0xd] * DAT_0071f408 + (float)part->update[5]);
  if (((((0 < part->update[4]) && (iVar18 = fastfunc::FastDecTimerS16(lVar14 + 10), iVar18 == 0)) &&
       (fVar2 = (part->pos).x, uVar19 = (int)fVar2 >> 0x1f, uVar8 = (int)pfVar7[4] >> 0x1f,
       iVar18 = (uVar19 >> 1 ^ (uint)fVar2) - uVar19,
       (int)((uVar8 >> 1 ^ (uint)pfVar7[4]) - uVar8) <= iVar18)) &&
      ((fVar2 = (part->pos).y, uVar19 = (int)fVar2 >> 0x1f, uVar8 = (int)pfVar7[5] >> 0x1f,
       iVar23 = (uVar19 >> 1 ^ (uint)fVar2) - uVar19,
       (int)((uVar8 >> 1 ^ (uint)pfVar7[5]) - uVar8) <= iVar23 &&
       (fVar2 = (part->pos).z, uVar19 = (int)fVar2 >> 0x1f, uVar8 = (int)pfVar7[6] >> 0x1f,
       iVar24 = (uVar19 >> 1 ^ (uint)fVar2) - uVar19,
       (int)((uVar8 >> 1 ^ (uint)pfVar7[6]) - uVar8) <= iVar24)))) &&
     ((uVar19 = (int)pfVar7[8] >> 0x1f, iVar18 <= (int)((uVar19 >> 1 ^ (uint)pfVar7[8]) - uVar19) &&
      ((uVar19 = (int)pfVar7[9] >> 0x1f, iVar23 <= (int)((uVar19 >> 1 ^ (uint)pfVar7[9]) - uVar19)
       && (uVar19 = (int)pfVar7[10] >> 0x1f,
          iVar24 <= (int)((uVar19 >> 1 ^ (uint)pfVar7[10]) - uVar19))))))) {
    return;
  }
  partproc::DeletePart(lVar14);
  return;
}



//==== 001227d0  ns=partupd  size=0x120
// sig: undefined SpawnPart_7(void)
// callers(0): 
// callees(3): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 7 */

void partupd::SpawnPart_7
               (double param_1,float *param_2,uint param_3,ulonglong param_4,ulonglong param_5,
               undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  
  if ((int)param_7 != 0) {
    pPVar3 = partproc::CreatePart(7);
    if (pPVar3 != (PartInstance *)0x0) {
      (pPVar3->pos).x = *param_2;
      (pPVar3->pos).y = param_2[1];
      (pPVar3->pos).z = param_2[2];
      fVar2 = param_2[3];
      pPVar3->color =
           (uint)((param_5 & 0xffffffff) << 0x10) & 0xff0000 |
           (uint)((param_4 & 0xffffffff) << 8) & 0xff00 | param_3 & 0xff | 0x7f000000;
      (pPVar3->pos).w = fVar2;
      cVar4 = fastfunc::FastDoubleToInt(0x4000000000000000);
      pPVar3->drawDist = cVar4 + '@';
      pPVar3->gsAlpha = 0x48;
      pPVar3->type = 0;
      pPVar3->rot = '\0';
      pPVar3->scale = 0.0;
      bVar1 = *DAT_00a52820;
      pPVar3->update[0] = (int)param_7;
      pPVar3->tex = bVar1;
      dVar5 = (double)fastfunc::FastIntToDouble(param_7);
      pPVar3->update[1] = (int)(float)(param_1 / dVar5);
    }
  }
  return;
}



//==== 001228f8  ns=partupd  size=0xa8
// sig: undefined UpdatePart_7(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fff60 fastfunc::FastDecTimerS32

/* Part 7 */

void partupd::UpdatePart_7(PartInstance *part)

{
  int iVar1;
  
  iVar1 = fastfunc::FastDecTimerS32((longlong)(int)part + 0x20);
  if (iVar1 == 0) {
    part->scale = part->scale + (float)part->update[1];
    if (part->update[0] < (int)(animationSpeed * 6.5)) {
      part->color = (part->update[0] * 0x7f) / (int)(animationSpeed * 6.5) << 0x18 |
                    part->color & 0xffffff;
    }
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 001229a8  ns=partupd  size=0x13c
// sig: undefined SpawnPart_8(void)
// callers(7): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 00366f00 mobyupdate_unsorted::UpdateMoby_413; 00374e80 mobyupdate_helpers::M436_00374e80; 00414c50 mobyupdate_unsorted::UpdateMoby_686; 004a1708 mobyupdate_unsorted::UpdateMoby_a_lot_22
// callees(3): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 8 */

void partupd::SpawnPart_8
               (double param_1,float *param_2,int *param_3,uint param_4,int param_5,
               undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  int iVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  
  if ((int)param_7 != 0) {
    pPVar3 = partproc::CreatePart(8);
    if (pPVar3 != (PartInstance *)0x0) {
      (pPVar3->pos).x = *param_2;
      (pPVar3->pos).y = param_2[1];
      fVar1 = param_2[2];
      pPVar3->color = param_4;
      (pPVar3->pos).z = fVar1;
      (pPVar3->pos).w = param_2[3];
      cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar3->drawDist = cVar4 + -0x60;
      pPVar3->gsAlpha = 0x48;
      pPVar3->type = 0;
      pPVar3->rot = '\0';
      pPVar3->scale = 0.0;
      pPVar3->tex = *DAT_00a52824;
      pPVar3->update[0] = *param_3;
      pPVar3->update[1] = param_3[1];
      iVar2 = param_3[2];
      pPVar3->timer = (short)param_7;
      pPVar3->update[2] = iVar2;
      iVar2 = param_3[3];
      pPVar3->update[6] = (int)param_7;
      pPVar3->update[3] = iVar2;
      dVar5 = (double)fastfunc::FastIntToDouble(param_7);
      pPVar3->update[4] = param_4;
      pPVar3->update[5] = param_5;
      pPVar3->update[7] = (int)(float)(param_1 / dVar5);
    }
  }
  return;
}



//==== 00122ae8  ns=partupd  size=0x170
// sig: undefined UpdatePart_8(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 8 */

void partupd::UpdatePart_8(PartInstance *part)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  
  fVar1 = (float)part->update[1];
  fVar2 = (float)part->update[2];
  (part->pos).x = (part->pos).x + (float)part->update[0];
  (part->pos).y = (part->pos).y + fVar1;
  (part->pos).z = (part->pos).z + fVar2;
  iVar6 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar6 == 0) {
    iVar6 = part->update[5];
    iVar4 = part->update[4];
    iVar5 = part->update[6];
    part->scale = part->scale + (float)part->update[7];
    dVar8 = (double)fastfunc::FastIntToDouble(iVar5);
    uVar7 = fastfunc::FastLerpColor
                      ((double)(float)((double)(longlong)(int)part->timer / dVar8),iVar6,iVar4);
    part->color = uVar7;
    sVar3 = part->timer;
    iVar6 = part->update[6];
    if ((int)sVar3 < (int)(animationSpeed * 6.5)) {
      part->color = (int)((int)sVar3 * (uVar7 >> 0x18)) / (int)(animationSpeed * 6.5) << 0x18 |
                    uVar7 & 0xffffff;
    }
    part->tex = *(byte *)(DAT_00a52824 + ((iVar6 - sVar3) * 10) / iVar6);
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00122c70  ns=partupd  size=0x244
// sig: undefined SpawnPart_9(void)
// callers(0): 
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 9 */

longlong partupd::SpawnPart_9
                   (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5,
                   int param_6,longlong param_7)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  PartInstance *pPVar5;
  char cVar8;
  longlong lVar4;
  int iVar6;
  uint uVar7;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pPVar5 = partproc::CreatePart(9);
  if (pPVar5 != (PartInstance *)0x0) {
    bVar1 = pPVar5->gsAlpha;
    (pPVar5->pos).x = *param_4;
    (pPVar5->pos).y = param_4[1];
    (pPVar5->pos).z = param_4[2];
    (pPVar5->pos).w = param_4[3];
    pPVar5->color =
         (uint)(&DAT_007f7f7f + ((uint)((LZCOUNT(0x48 - (uint)bVar1) << 0x3a) >> 0x3f) & 0xffcfcfd0)
               );
    cVar8 = fastfunc::FastDoubleToInt(0x4020000000000000);
    pPVar5->drawDist = cVar8 + -0x60;
    lVar4 = mobyutil::MB_randInt(100);
    pPVar5->type = 1;
    pPVar5->gsAlpha = ((byte)(lVar4 - param_7 >> 0x3f) & 4) + 0x44;
    pPVar5->tex = *DAT_00a52828;
    iVar6 = rand();
    pPVar5->rot = (char)iVar6;
    uVar7 = (int)pPVar5 - (int)PartInstances;
    dVar9 = (double)fastfunc::FastIntToDouble
                              (((int)uVar7 >> 6) + (uint)((int)uVar7 < 0 && (uVar7 & 0x3f) != 0));
    dVar10 = (double)fastfunc::FastIntToDouble(0x1000);
    fVar2 = (float)pPVar5->update[3];
    (pPVar5->pos).z = (float)(param_2 * (double)(float)(dVar9 / dVar10) + (double)(pPVar5->pos).z);
    pPVar5->update[2] = (int)(DAT_007296bc * 0.017453292 * mobyutil::g_FrameTime);
    pPVar5->scale = (float)(param_1 * 210000.0);
    cVar8 = fastfunc::FastDoubleToInt((double)(fVar2 * 256.0 * 0.31830987));
    pPVar5->rot = cVar8 + -0x80;
    dVar9 = (double)mobyutil::MB_randRot();
    pPVar5->update[3] = (int)(float)dVar9;
    pPVar5->update[4] = param_6;
    auVar11 = ZEXT416(0xffffffff);
    auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = loadVectorLeftIndexed(0xffffffffffff96c0,0x730000);
    auVar13 = loadVectorLeftIndexed(0x14,0x122c58);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar14,auVar11,auVar13);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x20,
                       (longlong)(int)pPVar5);
    *(undefined4 *)((uint)pPVar5->update & 0xfffffffc) = uVar3;
    pPVar5->update[1] = param_3;
  }
  return (longlong)(int)pPVar5;
}



//==== 00122ec0  ns=partupd  size=0x16c
// sig: undefined UpdatePart_9(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Part 9 */

void partupd::UpdatePart_9(PartInstance *part)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  double dVar6;
  
  iVar3 = fastfunc::FastDecTimerS32((longlong)(int)part + 0x20);
  if (iVar3 == 0) {
    dVar6 = (double)fastfunc::FastWrapRot((float)part->update[3],(float)part->update[2]);
    part->update[3] = (int)(float)dVar6;
    cVar4 = fastfunc::FastDoubleToInt((double)((float)(dVar6 * 128.0) * 0.31830987));
    part->rot = cVar4 + -0x80;
    iVar3 = part->update[0];
    uVar1 = (uint)(animationSpeed * ((float)(longlong)DAT_007296c0 + 0.5));
    uVar5 = uVar1 * 3;
    iVar2 = (int)uVar1 >> 2;
    if ((int)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) < iVar3) {
      iVar3 = (int)(part->update[4] * (uVar1 - iVar3)) /
              (int)(iVar2 + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0));
    }
    else if (iVar3 < (int)(iVar2 + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0))) {
      iVar3 = (part->update[4] * iVar3) / (int)(iVar2 + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0));
    }
    else {
      iVar3 = part->update[4];
    }
    part->color = iVar3 << 0x18 |
                  (uint)(&DAT_007f7f7f +
                        ((uint)((LZCOUNT(0x48 - (uint)part->gsAlpha) << 0x3a) >> 0x3f) & 0xffcfcfd0)
                        ) & 0xffffff;
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00123048  ns=partupd  size=0x168
// sig: undefined SpawnPart_10(void)
// callers(1): 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 10 */

void partupd::SpawnPart_10(float *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  PartInstance *pPVar3;
  uint uVar4;
  char cVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pPVar3 = partproc::CreatePart(10);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_1;
    (pPVar3->pos).y = param_1[1];
    (pPVar3->pos).z = param_1[2];
    (pPVar3->pos).w = param_1[3];
    uVar4 = mobyutil::Float_To_RGBA(0.425,0.425,0.225,1.0);
    pPVar3->color = uVar4;
    cVar5 = fastfunc::FastDoubleToInt(0x4020000000000000);
    pPVar3->drawDist = cVar5 + -0x60;
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    dVar6 = (double)mobyutil::MB_randRangeFloat(60900.0,90300.0);
    pPVar3->rot = '\0';
    pPVar3->scale = (float)dVar6;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    bVar1 = *DAT_00a52810;
    pPVar3->update[4] = 0x3ed9999a;
    pPVar3->tex = bVar1;
    pPVar3->update[5] = 0x3ed9999a;
    pPVar3->update[6] = 0x3e666666;
    pPVar3->update[7] = 0x3f800000;
    auVar7 = loadVectorLeftIndexed(0x18,0x12302c);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar7,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[0] = *param_2;
    pPVar3->update[1] = param_2[1];
    pPVar3->update[2] = param_2[2];
    pPVar3->update[3] = param_2[3];
  }
  return;
}



//==== 001231d0  ns=partupd  size=0x1a4
// sig: undefined UpdatePart_10(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 10 */

void partupd::UpdatePart_10(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar10;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar11;
  
  fVar1 = DAT_0071f408 * -0.04 + (float)part->update[7];
  part->update[7] = (int)fVar1;
  if ((fVar1 <= 0.0) || (iVar10 = fastfunc::FastDecTimerS16((longlong)(int)part + 10), iVar10 != 0))
  {
    partproc::DeletePart((longlong)(int)part);
  }
  else {
    uVar6 = part->update[6];
    uVar7 = (int)uVar6 >> 0x1f;
    fVar1 = (float)part->update[6];
    part->scale = DAT_0071f408 * 12000.0 + part->scale;
    if ((int)((uVar7 >> 1 ^ uVar6) - uVar7) < 0x3e666666) {
      fVar1 = DAT_0071f408 * 0.0484 + fVar1;
      part->update[6] = (int)fVar1;
    }
    dVar11 = 255.0;
    uVar8 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
    uVar9 = fastfunc::FastDoubleToInt((double)(float)((double)(float)part->update[7] * dVar11));
    fVar1 = (part->pos).x;
    fVar2 = (float)part->update[0];
    fVar3 = (float)part->update[1];
    fVar4 = (part->pos).z;
    fVar5 = (float)part->update[2];
    part->color = (uint)((uVar9 & 0xffffffff) << 0x18) |
                  (uint)((uVar8 & 0xffffffff) << 0x10) & 0xff0000 | part->color & 0xffff;
    (part->pos).x = fVar1 + fVar2;
    (part->pos).y = (part->pos).y + fVar3;
    (part->pos).z = fVar4 + fVar5;
    fVar1 = DAT_0071f408 * -0.100000024 + 1.0;
    part->rot = part->rot + -1;
    part->update[0] = (int)(fVar2 * fVar1);
    part->update[1] = (int)(fVar3 * fVar1);
    part->update[2] = (int)(fVar5 * fVar1);
  }
  return;
}



//==== 00123390  ns=partupd  size=0x388
// sig: undefined SpawnPart_11(void)
// callers(28): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00123768 partupd::UpdatePart_11; 001b6918 mobyupdate_unsorted::UpdateMoby_1077; 001ca968 mobyupdate_helpers::M1109_001ca968; 001d4048 mobyupdate_helpers::M1118_001d4048; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0022bb60 mobyupdate_helpers::M1261_0022bb60; 00243a70 mobyupdate_unsorted::UpdateMoby_a_lot_9; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a0108 mobyupdate_helpers::M158_002a0108; 002ad118 mobyupdate_helpers::M170_002ad118; 002aed78 mobyupdate_helpers::M172_002aed78; 0030f810 mobyupdate_unsorted::UpdateMoby_243; 0031eca8 mobyupdate_helpers::M267_0031eca8; 00374e80 mobyupdate_helpers::M436_00374e80; 003841e8 mobyupdate_unsorted::UpdateMoby_a_lot_7; 003a5468 mobyupdate_helpers::M511_003a5468; 003fac98 mobyupdate_helpers::M638_003fac98; 00414c50 mobyupdate_unsorted::UpdateMoby_686; 00434a88 mobyupdate_helpers::M722_00434a88
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 11 */

void partupd::SpawnPart_11
               (double param_1,double param_2,float *param_3,float *param_4,uint param_5,int param_6
               ,undefined8 param_7,int param_8,undefined1 param_9)

{
  float fVar1;
  int iVar3;
  PartInstance *pPVar4;
  char cVar5;
  longlong lVar2;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_stack_00000077;
  undefined1 in_stack_0000007f;
  
  if ((((param_8 != 0) &&
       ((((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ (uint)DAT_00a10714) -
               ((int)DAT_00a10714 >> 0x1f)) < 0x3f59999b &&
         ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
               ((int)DAT_00a10718 >> 0x1f)) < 0x3f59999b)) ||
        (iVar3 = mobyutil::MB_randInt(3), iVar3 != 0)))) &&
      (((DAT_00a10714 <= 0.9 &&
        ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) - ((int)DAT_00a10718 >> 0x1f)
              ) < 0x3f666667)) || (iVar3 = mobyutil::MB_randInt(2), iVar3 != 0)))) &&
     ((((dVar14 = 1.0, DAT_00a10714 <= 1.0 &&
        ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) - ((int)DAT_00a10718 >> 0x1f)
              ) < 0x3f800001)) || (iVar3 = mobyutil::MB_randInt(1), iVar3 != 0)) &&
      (pPVar4 = partproc::CreatePart(0xb), pPVar4 != (PartInstance *)0x0)))) {
    (pPVar4->pos).x = *param_3;
    (pPVar4->pos).y = param_3[1];
    (pPVar4->pos).z = param_3[2];
    fVar1 = param_3[3];
    pPVar4->color = param_5;
    (pPVar4->pos).w = fVar1;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->drawDist = cVar5 + -0x60;
    lVar2 = mobyutil::MB_randInt(100);
    pPVar4->type = 0;
    pPVar4->gsAlpha = ((byte)(lVar2 + -0x14 >> 0x3f) & 0xfc) + 0x48;
    dVar6 = 0.0;
    pPVar4->scale = 0.0;
    iVar3 = rand();
    pPVar4->rot = (char)iVar3;
    pPVar4->tex = *DAT_00a52830;
    dVar13 = -1.0;
    dVar7 = (double)mobyutil::MB_randRangeFloat(-1.0,(float)dVar14);
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    dVar10 = (double)SQRT((float)(dVar13 * dVar13 +
                                 (double)(float)(dVar7 * dVar7 + (double)(float)(dVar8 * dVar8))));
    dVar11 = (double)(float)(param_2 / dVar10);
    dVar14 = dVar6;
    if (dVar6 - dVar10 < 0.0) {
      dVar14 = (double)(float)(dVar7 * dVar11);
    }
    dVar12 = dVar6;
    if (dVar6 - dVar10 < 0.0) {
      dVar12 = (double)(float)(dVar8 * dVar11);
    }
    dVar9 = dVar6;
    if (dVar6 - dVar10 < 0.0) {
      dVar9 = (double)(float)(dVar13 * dVar11);
    }
    if (dVar10 - dVar6 < 0.0) {
      dVar14 = (double)(float)(dVar7 * dVar11);
    }
    if (dVar10 - dVar6 < 0.0) {
      dVar12 = (double)(float)(dVar8 * dVar11);
    }
    if (dVar10 - dVar6 < 0.0) {
      dVar9 = (double)(float)(dVar13 * dVar11);
    }
    pPVar4->update[0] = (int)(float)((double)*param_4 + dVar14);
    pPVar4->update[1] = (int)(float)((double)param_4[1] + dVar12);
    pPVar4->update[2] = (int)(float)((double)param_4[2] + dVar9);
    pPVar4->timer = (short)param_8;
    *(char *)((int)pPVar4->update + 0x1b) = (char)param_8;
    *(undefined1 *)(pPVar4->update + 6) = param_9;
    pPVar4->update[7] = (int)(float)param_1;
    pPVar4->update[4] = param_5;
    pPVar4->update[5] = param_6;
    *(undefined1 *)((int)pPVar4->update + 0x1a) = in_stack_00000077;
    *(undefined1 *)((int)pPVar4->update + 0x19) = in_stack_0000007f;
    pPVar4->update[3] = (int)(float)(param_2 * 0.75);
  }
  return;
}



//==== 00123768  ns=partupd  size=0x74c
// sig: undefined UpdatePart_11(PartInstance * part)
// callers(0): 
// callees(9): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0011e6ec partproc::DeletePart; 00123390 partupd::SpawnPart_11; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Part 11 */

void partupd::UpdatePart_11(PartInstance *part)

{
  undefined1 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar19;
  undefined8 uVar13;
  byte bVar20;
  uint uVar16;
  int iVar17;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar15 = (longlong)(int)part;
  bVar20 = *(byte *)((int)part->update + 0x19);
  sVar7 = part->timer;
  part->rot = part->rot + '\x01';
  if ((bVar20 & 1) == 0) {
    fVar3 = (float)part->update[2];
    fVar4 = (float)part->update[0];
    fVar5 = (float)part->update[1];
    (part->pos).x = (part->pos).x + fVar4;
    (part->pos).y = (part->pos).y + fVar5;
    (part->pos).z = (part->pos).z + fVar3;
    if ((bVar20 & 4) != 0) {
      fVar3 = DAT_0071f418 * 9.8 + fVar3;
    }
    fVar6 = 0.8;
    if ((bVar20 & 2) != 0) {
      fVar6 = 0.6;
    }
    bVar20 = *(byte *)((int)part->update + 0x1b);
    part->update[0] = (int)(fVar4 * fVar6);
    part->update[1] = (int)(fVar5 * fVar6);
    part->update[2] = (int)(fVar3 * fVar6);
    dVar26 = 0.8500000238418579;
    sVar19 = fastfunc::FastDoubleToInt((double)((float)bVar20 * 0.85));
    if (((sVar7 == sVar19) && (*(byte *)((int)part->update + 0x1a) < 2)) &&
       ((*(byte *)((int)part->update + 0x19) & 4) == 0)) {
      iVar17 = 0;
      dVar23 = 0.8999999761581421;
      dVar24 = 1.100000023841858;
      dVar25 = 1.0;
      do {
        iVar18 = part->update[4];
        iVar8 = part->update[5];
        dVar22 = (double)(float)part->update[7];
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
        uVar13 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)*(byte *)((int)part->update + 0x1b) * dVar21));
        uVar1 = *(undefined1 *)(part->update + 6);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar25);
        SpawnPart_11(dVar22,(double)(float)((double)(float)part->update[3] * dVar21),lVar15 + 0x10,
                     lVar15 + 0x20,iVar18,iVar8,(ulonglong)*(byte *)((int)part->update + 0x1a) + 1,
                     uVar13,uVar1);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 5);
    }
    bVar20 = *(byte *)((int)part->update + 0x19);
    if ((bVar20 & 4) == 0) {
      dVar23 = (double)(float)part->update[7];
      dVar26 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x1b));
      dVar25 = (double)((float)(dVar26 * 8.0 -
                               (double)(float)((double)(float)(dVar26 * 3.0) * dVar23)) /
                       (float)((double)(float)(dVar23 * 8.0) * dVar23 +
                              (double)(float)(dVar23 * 8.0)));
      dVar21 = (double)((float)((double)(float)(dVar25 * 8.0) * dVar23 +
                               (double)(float)(dVar26 * 3.0)) / (float)(dVar23 * -8.0));
      dVar24 = (double)(float)(dVar21 * 4.0);
      dVar23 = (double)fastfunc::FastIntToDouble(part->timer);
      fVar3 = (part->pos).y;
      fVar4 = (part->pos).x;
      fVar5 = (part->pos).z;
      bVar20 = *(byte *)((int)part->update + 0x19);
      dVar26 = (double)SQRT((float)(dVar25 * dVar25 -
                                   (double)(float)(dVar24 * (double)(float)(dVar26 - dVar23))));
      fVar6 = (float)(dVar26 - dVar25) / (float)(dVar21 * 2.0);
      fVar9 = (float)(-dVar25 - dVar26) / (float)(dVar21 * 2.0);
      if (fVar9 - fVar6 < 0.0) {
        fVar9 = fVar6;
      }
      part->scale = fVar9;
      fVar3 = fVar3 - GameCamera.posY;
      fVar4 = fVar4 - GameCamera.posX;
      fVar5 = fVar5 - GameCamera.posZ;
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar3 < 10.0) {
        part->scale = fVar9 * (fVar3 * 0.075 + 0.25);
      }
    }
    if ((bVar20 & 2) == 0) {
      uVar16 = fastfunc::FastLerpColor
                         ((double)((float)(longlong)(int)part->timer /
                                  (float)*(byte *)((int)part->update + 0x1b)),part->update[5],
                          part->update[4]);
    }
    else {
      uVar16 = fastfunc::FastLerpColor
                         ((double)((float)(longlong)(int)part->timer /
                                  (float)*(byte *)((int)part->update + 0x1b)),part->update[4],
                          0xfffffff);
    }
    part->color = uVar16;
    fastfunc::FastDecTimerU8(lVar15 + 0x38);
    iVar17 = fastfunc::FastDecTimerS16(lVar15 + 10);
    uVar14 = (ulonglong)*(byte *)((int)part->update + 0x1b);
    if (iVar17 != 0) {
      bVar20 = *(byte *)((int)part->update + 0x19);
      lVar15 = uVar14 * 3;
      if ((bVar20 & 2) == 0) {
        bVar2 = part->gsAlpha;
        part->update[4] = part->update[5];
        *(byte *)((int)part->update + 0x19) = bVar20 | 1;
        part->update[5] =
             ((uint)((LZCOUNT(0x48 - (uint)bVar2) << 0x3a) >> 0x3f) & 0xf0d0c0c1) + 0xf2f3f3f;
        iVar17 = mobyutil::MB_randRange(uVar14 << 1,lVar15);
        lVar15 = (longlong)iVar17 *
                 (longlong)
                 (int)(((uint)((LZCOUNT(-(*(byte *)((int)part->update + 0x19) & 8)) << 0x3a) >> 0x3f
                              ) & 0xfffffffc) + 5);
        *(char *)((int)part->update + 0x1b) = (char)lVar15;
        part->timer = (ushort)lVar15 & 0xff;
      }
      else {
        part->timer = (short)lVar15;
        *(char *)((int)part->update + 0x1b) = (char)lVar15;
        *(byte *)((int)part->update + 0x19) = bVar20 & 0xfd | 4;
        dVar26 = (double)mobyutil::MB_randRangeFloat(1.6,2.0);
        fVar3 = (float)part->update[1];
        fVar4 = (float)part->update[0];
        fVar5 = (float)part->update[2];
        fVar6 = 0.0;
        fVar12 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar9 = (float)((double)(float)part->update[3] * dVar26) / fVar12;
        fVar11 = fVar6;
        if (0.0 - fVar12 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        fVar10 = fVar6;
        if (0.0 - fVar12 < 0.0) {
          fVar10 = fVar3 * fVar9;
        }
        if (0.0 - fVar12 < 0.0) {
          fVar6 = fVar5 * fVar9;
        }
        if (fVar12 - 0.0 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (fVar12 - 0.0 < 0.0) {
          fVar10 = fVar3 * fVar9;
        }
        if (fVar12 - 0.0 < 0.0) {
          fVar6 = fVar5 * fVar9;
        }
        part->update[0] = (int)fVar11;
        part->update[1] = (int)fVar10;
        part->update[2] = (int)fVar6;
      }
    }
  }
  else {
    iVar17 = fastfunc::FastDoubleToInt((double)((float)*(byte *)((int)part->update + 0x1b) * 0.75));
    iVar17 = iVar17 + 1;
    iVar18 = fastfunc::FastDoubleToInt((double)((float)*(byte *)((int)part->update + 0x1b) * 0.25));
    fVar3 = (float)part->update[0];
    fVar5 = DAT_0071f418 * 3.0 + (float)part->update[2];
    fVar4 = (float)part->update[1];
    sVar7 = part->timer;
    (part->pos).x = (part->pos).x + fVar3;
    (part->pos).y = (part->pos).y + fVar4;
    (part->pos).z = (part->pos).z + fVar5;
    part->update[0] = (int)(fVar3 * 0.98);
    part->update[1] = (int)(fVar4 * 0.98);
    part->update[2] = (int)(fVar5 * 0.98);
    if (iVar17 < sVar7) {
      uVar16 = fastfunc::FastLerpColor
                         ((double)(float)((double)(longlong)(sVar7 - iVar17) /
                                         (double)(longlong)(iVar18 + 1)),part->update[5],
                          part->update[4]);
      part->color = uVar16;
    }
    else if (part->gsAlpha == 0x48) {
      part->timer = 0;
    }
    else {
      part->color = ((int)((longlong)sVar7 << 4) - (int)sVar7) / iVar17 << 0x18 |
                    part->color & 0xffffff;
    }
    if (0x3f800000 <
        (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f))
       ) {
      fastfunc::FastDecTimerS16(lVar15 + 10);
    }
    iVar17 = fastfunc::FastDecTimerS16(lVar15 + 10);
    if (iVar17 != 0) {
      partproc::DeletePart(lVar15);
    }
  }
  return;
}



//==== 00123ec8  ns=partupd  size=0x424
// sig: undefined SpawnPart_12(void)
// callers(2): 00119b38 mobyutil::MB_UpdateDebris; 002b2590 mobyupdate_unsorted::UpdateMoby_176
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0010a668 mobyutil::ReorderRGB; 0011e580 partproc::CreatePartEx; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

PartInstance *
partupd::SpawnPart_12(double param_1,float *param_2,int *param_3,undefined8 param_4,byte param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PartInstance *pPVar6;
  longlong lVar4;
  longlong lVar5;
  short sVar10;
  int iVar7;
  int iVar8;
  char cVar11;
  undefined1 uVar12;
  uint uVar9;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  
  pPVar6 = partproc::CreatePartEx(0xc,0);
  if (pPVar6 != (PartInstance *)0x0) {
    (pPVar6->pos).x = *param_2;
    (pPVar6->pos).y = param_2[1];
    (pPVar6->pos).z = param_2[2];
    (pPVar6->pos).w = param_2[3];
    pPVar6->update[0] = *param_3;
    pPVar6->update[1] = param_3[1];
    pPVar6->update[2] = param_3[2];
    pPVar6->update[3] = param_3[3];
    if ((param_5 & 1) == 0) {
      pPVar6->color = DAT_007296c4;
      lVar5 = (longlong)DAT_007296dc;
      lVar4 = (longlong)DAT_007296e0;
      pPVar6->scale = DAT_007296d4 * 210000.0;
      dVar14 = (double)mobyutil::MB_randRangeFloat((float)lVar5,(float)lVar4);
      sVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
      pPVar6->timer = sVar10;
      uVar2 = DAT_007296c8;
      uVar9 = DAT_007296c4;
      dVar15 = 0.0;
      dVar14 = 1.0;
      mobyutil::MB_randRangeFloat(0.0,1.0);
      iVar7 = fastfunc::FastLerpColor(uVar9,uVar2);
      pPVar6->update[5] = iVar7;
      uVar3 = DAT_007296d0;
      uVar2 = DAT_007296cc;
      mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
      iVar7 = fastfunc::FastLerpColor(uVar2,uVar3);
      pPVar6->update[6] = iVar7;
      iVar7 = DAT_00a52834;
      iVar13 = 0;
      if (((param_5 & 4) != 0) && (g_goldWeaponsArray.pyrocitor != '\0')) {
        iVar13 = 8;
      }
      iVar8 = mobyutil::MB_randInt(8);
      bVar1 = *(byte *)(iVar7 + iVar8 + iVar13);
      pPVar6->gsAlpha = 0x44;
      pPVar6->tex = bVar1;
    }
    else {
      pPVar6->color = DAT_007296e4;
      lVar4 = (longlong)DAT_007296fc;
      lVar5 = (longlong)DAT_00729700;
      pPVar6->scale = DAT_007296f4 * 210000.0;
      dVar14 = (double)mobyutil::MB_randRangeFloat((float)lVar4,(float)lVar5);
      sVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
      pPVar6->timer = sVar10;
      uVar2 = DAT_007296e8;
      uVar9 = DAT_007296e4;
      dVar15 = 0.0;
      dVar14 = 1.0;
      mobyutil::MB_randRangeFloat(0.0,1.0);
      iVar7 = fastfunc::FastLerpColor(uVar9,uVar2);
      pPVar6->update[5] = iVar7;
      uVar3 = DAT_007296f0;
      uVar2 = DAT_007296ec;
      mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
      iVar7 = fastfunc::FastLerpColor(uVar2,uVar3);
      pPVar6->update[6] = iVar7;
      bVar1 = *DAT_00a52864;
      pPVar6->gsAlpha = 0x48;
      pPVar6->tex = bVar1;
    }
    uVar16 = 0x4010000000000000;
    cVar11 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar6->drawDist = cVar11 + '@';
    pPVar6->type = 0;
    cVar11 = mobyutil::MB_randInt(0xff);
    pPVar6->rot = cVar11;
    mobyutil::MB_randRangeSigned(0x3ff0000000000000,uVar16);
    uVar12 = fastfunc::FastDoubleToInt();
    *(undefined1 *)((int)pPVar6->update + 0x1e) = uVar12;
    pPVar6->update[4] = (int)(float)param_1;
    *(byte *)((int)pPVar6->update + 0x1f) = param_5;
    if ((param_5 & 4) != 0) {
      uVar9 = (int)pPVar6->timer * (uint)g_goldWeaponsArray.pyrocitor +
              (int)((longlong)pPVar6->timer << 1);
      pPVar6->timer = (short)((int)uVar9 >> 1) + (ushort)((int)uVar9 < 0 && (uVar9 & 1) != 0);
      mobyutil::ReorderRGB(pPVar6->color,(uint)g_goldWeaponsArray.pyrocitor);
      mobyutil::ReorderRGB(pPVar6->update[5],(uint)g_goldWeaponsArray.pyrocitor);
      mobyutil::ReorderRGB(pPVar6->update[6],(uint)g_goldWeaponsArray.pyrocitor);
    }
    *(char *)((int)pPVar6->update + 0x1d) = (char)pPVar6->timer;
  }
  return pPVar6;
}



//==== 00124308  ns=partupd  size=0x3a4
// sig: undefined UpdatePart_12(PartInstance * part)
// callers(0): 
// callees(5): 00109c30 mobyutil::OrganicDelt; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 12 */

void partupd::UpdatePart_12(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_40 [2];
  longlong local_38;
  
  bVar1 = *(byte *)((int)part->update + 0x1f);
  part->rot = part->rot + *(char *)((int)part->update + 0x1e);
  dVar16 = 1.0;
  if ((bVar1 & 4) != 0) {
    dVar11 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.pyrocitor);
    dVar16 = (double)(float)(dVar11 * 0.5 + dVar16);
  }
  fVar2 = (float)part->update[1];
  fVar3 = (float)part->update[0];
  fVar4 = (float)part->update[2];
  (part->pos).x = (part->pos).x + fVar3;
  (part->pos).y = (part->pos).y + fVar2;
  (part->pos).z = (part->pos).z + fVar4;
  local_40[0] = -SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar15 = 0.0;
  mobyutil::OrganicDelt
            (0.0,0.0,DAT_0071f418 * DAT_00729704,local_40[0],(float *)(part->update + 4),0x720000,
             local_40);
  fVar3 = (float)part->update[1];
  fVar4 = (float)part->update[0];
  fVar5 = (float)part->update[2];
  fVar6 = (part->pos).z;
  sVar7 = part->timer;
  dVar13 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (float)(-(double)local_40[0] / dVar13);
  dVar11 = dVar15;
  if (dVar15 - dVar13 < 0.0) {
    dVar11 = (double)(fVar4 * fVar2);
  }
  dVar12 = dVar15;
  if (dVar15 - dVar13 < 0.0) {
    dVar12 = (double)(fVar3 * fVar2);
  }
  dVar14 = dVar15;
  if (dVar15 - dVar13 < 0.0) {
    dVar14 = (double)(fVar5 * fVar2);
  }
  if (dVar13 - dVar15 < 0.0) {
    dVar11 = (double)(fVar4 * fVar2);
  }
  if (dVar13 - dVar15 < 0.0) {
    dVar12 = (double)(fVar3 * fVar2);
  }
  if (dVar13 - dVar15 < 0.0) {
    dVar14 = (double)(fVar5 * fVar2);
  }
  part->update[0] = (int)(float)dVar11;
  part->update[1] = (int)(float)dVar12;
  part->update[2] = (int)(float)dVar14;
  (part->pos).z = mobyutil::g_FrameTime * DAT_00729708 + fVar6;
  dVar11 = (double)fastfunc::FastIntToDouble(sVar7);
  dVar13 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x1d));
  iVar10 = part->update[6];
  iVar8 = part->update[5];
  fVar3 = DAT_007296d4;
  fVar2 = DAT_007296d8;
  if ((*(byte *)((int)part->update + 0x1f) & 1) != 0) {
    fVar3 = DAT_007296f4;
    fVar2 = DAT_007296f8;
  }
  part->scale = (float)(-(double)(float)((double)fVar2 * dVar16 - (double)fVar3) *
                        (double)(float)(dVar11 / dVar13) + (double)(float)((double)fVar2 * dVar16))
                * 210000.0;
  uVar9 = fastfunc::FastLerpColor((double)(float)(dVar11 / dVar13),iVar10,iVar8);
  part->color = uVar9;
  local_38 = (longlong)(int)(animationSpeed * 15.5);
  if ((int)part->timer < (int)(animationSpeed * 15.5)) {
    dVar16 = (double)fastfunc::FastIntToDouble(part->timer);
    local_38 = (longlong)(int)(animationSpeed * 10.5);
    dVar11 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 10.5));
    uVar9 = fastfunc::FastLerpColor
                      ((double)(float)(dVar16 / dVar11),part->color & 0xffffff,part->color);
    part->color = uVar9;
  }
  fVar2 = (part->pos).x;
  uVar9 = (int)fVar2 >> 0x1f;
  iVar10 = (uVar9 >> 1 ^ (uint)fVar2) - uVar9;
  if ((((iVar10 < 0x40000000) || (0x447f4000 < iVar10)) ||
      (fVar2 = (part->pos).y, uVar9 = (int)fVar2 >> 0x1f,
      iVar10 = (uVar9 >> 1 ^ (uint)fVar2) - uVar9, 0x447f4000 < iVar10 || iVar10 < 0x40000000)) ||
     ((fVar2 = (part->pos).z, uVar9 = (int)fVar2 >> 0x1f,
      iVar10 = (uVar9 >> 1 ^ (uint)fVar2) - uVar9, 0x447f4000 < iVar10 || iVar10 < 0x40000000 ||
      (iVar10 = fastfunc::FastDecTimerS16((longlong)(int)part + 10), iVar10 != 0)))) {
    partproc::DeletePart((longlong)(int)part);
  }
  else {
    uVar9 = part->update[4] >> 0x1f;
    if ((int)((uVar9 >> 1 ^ part->update[4]) - uVar9) < 0x3c23d70a) {
      part->timer = part->timer + -1;
    }
  }
  return;
}



//==== 001246b8  ns=partupd  size=0x1f8
// sig: undefined SpawnPart_13(void)
// callers(7): 002a0108 mobyupdate_helpers::M158_002a0108; 002ad118 mobyupdate_helpers::M170_002ad118; 002aed78 mobyupdate_helpers::M172_002aed78; 00338568 mobyupdate_helpers::M303_00338568; 003a5468 mobyupdate_helpers::M511_003a5468; 003ab4e8 mobyupdate_helpers::M520_003ab4e8; 003ab940 mobyupdate_unsorted::UpdateMoby_520
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 13 */

longlong partupd::SpawnPart_13
                   (undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                   float *param_6)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  int in_r7;
  uint in_r10;
  double dVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pPVar3 = partproc::CreatePart(0xd);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_6;
    (pPVar3->pos).y = param_6[1];
    (pPVar3->pos).z = param_6[2];
    fVar1 = param_6[3];
    pPVar3->color = in_r10;
    (pPVar3->pos).w = fVar1;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->rot = '\0';
    pPVar3->scale = (float)param_5;
    pPVar3->tex = *DAT_00a52838;
    uVar7 = 0;
    dVar6 = (double)mobyutil::MB_randRangeSigned(0,param_1);
    (pPVar3->pos).x = (float)((double)(pPVar3->pos).x + dVar6);
    dVar6 = (double)mobyutil::MB_randRangeSigned(uVar7,param_1);
    (pPVar3->pos).y = (float)((double)(pPVar3->pos).y + dVar6);
    dVar6 = (double)mobyutil::MB_randRangeSigned(uVar7,param_1);
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    (pPVar3->pos).z = (float)((double)(pPVar3->pos).z + dVar6);
    auVar8 = loadVectorLeftIndexed(8,0x1246ac);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar8,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[1] = 0;
    iVar4 = mobyutil::MB_randInt(2);
    pPVar3->update[5] = in_r10 & 0xffffff;
    pPVar3->update[2] = in_r7 + ((uint)((LZCOUNT(-iVar4) << 0x3a) >> 0x3f) & in_r7 * -2);
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)param_2,(float)param_3);
    pPVar3->update[3] = (int)(float)dVar6;
    pPVar3->update[4] = (int)(float)param_4;
  }
  return (longlong)(int)pPVar3;
}



//==== 001248c0  ns=partupd  size=0x1d0
// sig: undefined UpdatePart_13(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 13 */

void partupd::UpdatePart_13(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  longlong lVar5;
  int iVar7;
  ulonglong uVar6;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar5 = (longlong)(int)part;
  fVar1 = (float)part->update[4];
  fVar2 = part->scale;
  fVar3 = (float)part->update[3];
  iVar7 = part->update[1];
  part->rot = part->rot + (char)part->update[2];
  (part->pos).z = (part->pos).z + fVar1;
  part->scale = fVar2 * fVar3;
  if (iVar7 == 0) {
    iVar7 = fastfunc::FastDecTimerS16(lVar5 + 10);
    if (iVar7 == 0) {
      uVar6 = fastfunc::FastDoubleToInt
                        ((double)((float)(longlong)((int)(animationSpeed * 10.5) - (int)part->timer)
                                 * (96.0 / (float)(longlong)(animationSpeed * 10.5))));
      part->color = (int)((uVar6 & 0xffffffff) << 0x18) + 0x20000000U | part->update[5];
    }
    else {
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      part->update[1] = 1;
      auVar8 = loadVectorLeftIndexed(in_LR,0x1248b0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = vectorSplatHalfWord(auVar8,1);
      sVar4 = storeVectorElementHalfWordIndexed(auVar8,10,lVar5);
      part->timer = sVar4;
      part->color = part->update[5] | 0x7f000000;
    }
  }
  else {
    iVar7 = fastfunc::FastDecTimerS16(lVar5 + 10);
    if (iVar7 == 0) {
      uVar6 = fastfunc::FastDoubleToInt
                        ((double)((float)(longlong)(int)part->timer *
                                 (127.0 / (float)(longlong)(animationSpeed * 30.5))));
      part->color = (uint)((uVar6 & 0xffffffff) << 0x18) | part->update[5];
    }
    else {
      partproc::DeletePart(lVar5);
    }
  }
  return;
}



//==== 00124aa0  ns=partupd  size=0x1d8
// sig: undefined SpawnPart_14(void)
// callers(2): 00299400 FUN_00299400; 00299958 mobyupdate_unsorted::UpdateMoby_156
// callees(4): 000fc620 mobyutil::MB_randInt; 000fe4f0 mobyutil::MB_randRangeSigned; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 14 */

longlong partupd::SpawnPart_14(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pPVar3 = partproc::CreatePart(0xe);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *(float *)(param_2 + 0x10);
    (pPVar3->pos).y = *(float *)(param_2 + 0x14);
    (pPVar3->pos).z = *(float *)(param_2 + 0x18);
    (pPVar3->pos).w = *(float *)(param_2 + 0x1c);
    uVar8 = 0;
    uVar7 = 0x3f9eb851e0000000;
    dVar6 = (double)mobyutil::MB_randRangeSigned(0,0x3f9eb851e0000000);
    (pPVar3->pos).x = (float)((double)(pPVar3->pos).x + dVar6);
    dVar6 = (double)mobyutil::MB_randRangeSigned(uVar8,uVar7);
    (pPVar3->pos).y = (float)((double)(pPVar3->pos).y + dVar6);
    dVar6 = (double)mobyutil::MB_randRangeSigned(uVar8,uVar7);
    fVar1 = (pPVar3->pos).z;
    pPVar3->color = 0xffffffff;
    (pPVar3->pos).z = (float)((double)fVar1 + dVar6);
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    iVar4 = 0;
    pPVar3->drawDist = cVar5 + -0x60;
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->scale = 29400.0;
    cVar5 = mobyutil::MB_randInt(0xff);
    pPVar3->rot = cVar5;
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    pPVar3->tex = *DAT_00a5283c;
    auVar9 = loadVectorLeftIndexed(0xc,0x124a90);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = vectorSplatHalfWord(auVar9,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar9,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[1] = 1;
    pPVar3->update[2] = param_2;
    if (param_1 != 0) {
      iVar4 = mobyutil::MB_randInt(2);
      iVar4 = param_1 + ((uint)((LZCOUNT(-iVar4) << 0x3a) >> 0x3f) & param_1 * -2);
    }
    pPVar3->update[0] = iVar4;
  }
  return (longlong)(int)pPVar3;
}



//==== 00124c88  ns=partupd  size=0x180
// sig: undefined UpdatePart_14(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 14 */

void partupd::UpdatePart_14(PartInstance *part)

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
  int iVar13;
  ulonglong uVar12;
  
  iVar13 = part->update[1];
  part->rot = part->rot + (char)part->update[0];
  if (iVar13 == 0) {
    iVar13 = part->update[2];
    fVar1 = *(float *)(iVar13 + 0x10);
    fVar2 = *(float *)(iVar13 + 0x14);
    fVar3 = *(float *)(iVar13 + 0x18);
    (part->pos).w = *(float *)(iVar13 + 0x1c);
    fVar7 = GameCamera.posY - fVar2;
    fVar5 = GameCamera.posX - fVar1;
    fVar9 = GameCamera.posZ - fVar3;
    fVar4 = 0.0;
    fVar11 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar10 = 0.01 / fVar11;
    fVar8 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar8 = fVar10 * fVar9;
    }
    fVar6 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar6 = fVar10 * fVar7;
    }
    if (0.0 - fVar11 < 0.0) {
      fVar4 = fVar10 * fVar5;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar8 = fVar10 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar6 = fVar10 * fVar7;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar5;
    }
    (part->pos).z = fVar3 + fVar8;
    (part->pos).y = fVar2 + fVar6;
    (part->pos).x = fVar1 + fVar4;
  }
  else {
    iVar13 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
    if (iVar13 == 0) {
      uVar12 = fastfunc::FastDoubleToInt
                         ((double)((float)(longlong)(int)part->timer *
                                  (127.0 / (float)(longlong)(animationSpeed * 6.5))));
      part->color = (uint)((uVar12 & 0xffffffff) << 0x18) | 0xffffff;
    }
    else {
      partproc::DeletePart((longlong)(int)part);
    }
  }
  return;
}



//==== 00124e10  ns=partupd  size=0x198
// sig: undefined SpawnPart_15(void)
// callers(9): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 00124fd0 partupd::UpdatePart_15; 00132090 partupd::UpdatePart_64; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 00414c50 mobyupdate_unsorted::UpdateMoby_686; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(3): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 15 */

PartInstance *
partupd::SpawnPart_15
          (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6,
          int param_7,undefined2 param_8,uint param_9)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar4;
  int iVar3;
  int in_stack_00000074;
  
  if (param_7 == 0) {
    pPVar2 = (PartInstance *)0x0;
  }
  else {
    pPVar2 = partproc::CreatePart(0xf);
    if (pPVar2 != (PartInstance *)0x0) {
      (pPVar2->pos).x = *param_2;
      (pPVar2->pos).y = param_2[1];
      fVar1 = param_2[2];
      pPVar2->color = param_4;
      (pPVar2->pos).z = fVar1;
      (pPVar2->pos).w = param_2[3];
      cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar2->drawDist = cVar4 + -0x60;
      pPVar2->scale = (float)param_1;
      pPVar2->type = 0;
      pPVar2->gsAlpha =
           (char)in_stack_00000074 +
           ((byte)((LZCOUNT(-1 - in_stack_00000074) << 0x3a) >> 0x3f) &
           0x48U - (char)in_stack_00000074);
      iVar3 = rand();
      pPVar2->rot = (char)iVar3;
      if (param_9 == 0xffffffff) {
        param_9 = (uint)*DAT_00a52840;
      }
      pPVar2->tex = (byte)param_9;
      pPVar2->update[7] = (int)(float)param_1;
      iVar3 = *param_3;
      pPVar2->timer = (short)param_7;
      pPVar2->update[0] = iVar3;
      iVar3 = param_3[1];
      *(short *)(pPVar2->update + 6) = (short)param_7;
      pPVar2->update[1] = iVar3;
      iVar3 = param_3[2];
      pPVar2->update[4] = param_4;
      pPVar2->update[5] = param_5;
      *(undefined2 *)((int)pPVar2->update + 0x1a) = param_8;
      pPVar2->update[2] = iVar3;
      pPVar2->update[3] = param_3[3];
    }
  }
  return pPVar2;
}



//==== 00124fd0  ns=partupd  size=0x36c
// sig: undefined UpdatePart_15(PartInstance * part)
// callers(0): 
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 00124e10 partupd::SpawnPart_15; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble
// strings: 00124fc4: '?s33?' (raw)

/* Part 15 */

void partupd::UpdatePart_15(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint color2;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 local_60 [32];
  
  lVar7 = (longlong)(int)part;
  iVar8 = fastfunc::FastDecTimerS16(lVar7 + 10);
  if (iVar8 == 0) {
    dVar11 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    dVar12 = (double)fastfunc::FastIntToDouble(part->timer);
    uVar9 = part->update[5];
    color2 = part->update[4];
    part->scale = (float)((double)(float)(dVar12 * (double)(float)part->update[7]) / dVar11);
    dVar11 = (double)fastfunc::FastIntToDouble(part->timer);
    dVar12 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    mobyutil::TweenColor((float)(dVar11 / dVar12),uVar9,color2);
    fVar1 = (part->pos).x;
    fVar2 = (float)part->update[0];
    fVar3 = (float)part->update[1];
    fVar4 = (part->pos).z;
    fVar5 = (float)part->update[2];
    part->color = uVar9;
    sVar6 = *(short *)((int)part->update + 0x1a);
    (part->pos).x = fVar1 + fVar2;
    (part->pos).y = (part->pos).y + fVar3;
    (part->pos).z = fVar4 + fVar5;
    uVar9 = worldUpdateTime;
    fVar1 = -(DAT_0071f418 * 14.6 - fVar5);
    if ((sVar6 == 0) || (part->update[2] = (int)fVar1, (uVar9 & 1) == 0)) {
      part->update[0] = (int)(fVar2 * 0.96);
      part->update[1] = (int)(fVar3 * 0.96);
      part->update[2] = (int)(fVar1 * 0.96);
    }
    else {
      dVar12 = -1.0;
      dVar11 = 1.0;
      mobyutil::MB_randRangeFloat(-1.0,1.0);
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar11);
      mobyutil::MB_randRangeFloat(0.15,0.25);
      mobyutil::MB_randRangeFloat(0.75,0.95);
      uVar9 = part->color;
      iVar8 = part->update[5];
      dVar11 = (double)part->scale;
      iVar10 = mobyutil::MB_randRange(0xf,0x1e);
      SpawnPart_15(dVar11,lVar7 + 0x10,local_60,uVar9,iVar8,part->gsAlpha,
                   (int)(animationSpeed * ((float)(longlong)iVar10 + 0.5)),0,part->tex);
    }
  }
  else {
    partproc::DeletePart(lVar7);
  }
  return;
}



//==== 00125350  ns=partupd  size=0x24c
// sig: undefined SpawnPart_16(void)
// callers(9): 001255d8 partupd::UpdatePart_16; 00132090 partupd::UpdatePart_64; 0028bf80 mobyupdate_unsorted::UpdateMoby_{148_255}; 002959f8 mobyupdate_unsorted::UpdateMoby_154; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0036a528 mobyupdate_unsorted::UpdateMoby_425; 003ead68 mobyupdate_unsorted::UpdateMoby_627; 00427ff0 mobyupdate_unsorted::UpdateMoby_700; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(4): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 16 */

PartInstance *
partupd::SpawnPart_16
          (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6,
          int param_7,int param_8)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  PartInstance *pPVar4;
  char cVar5;
  
  if (param_7 == 0) {
    pPVar4 = (PartInstance *)0x0;
  }
  else if (((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ (uint)DAT_00a10714) -
                 ((int)DAT_00a10714 >> 0x1f)) < 0x3f666667) ||
          (iVar3 = mobyutil::MB_randInt(3), iVar3 != 0)) {
    if ((DAT_00a10714 <= 0.95) || (iVar3 = mobyutil::MB_randInt(2), iVar3 != 0)) {
      if ((DAT_00a10714 <= 1.0) || (iVar3 = mobyutil::MB_randInt(1), iVar3 != 0)) {
        pPVar4 = partproc::CreatePart(0x10);
        if (pPVar4 != (PartInstance *)0x0) {
          (pPVar4->pos).x = *param_2;
          (pPVar4->pos).y = param_2[1];
          (pPVar4->pos).z = param_2[2];
          fVar2 = param_2[3];
          pPVar4->color = param_4;
          (pPVar4->pos).w = fVar2;
          cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
          pPVar4->scale = (float)param_1;
          pPVar4->drawDist = cVar5 + '@';
          pPVar4->gsAlpha = 0x44;
          pPVar4->type = 0;
          iVar3 = rand();
          pPVar4->rot = (char)iVar3;
          bVar1 = *(byte *)(DAT_00a52844 +
                           param_8 + ((uint)((LZCOUNT(3 - param_8) << 0x3a) >> 0x3f) & -param_8));
          pPVar4->timer = (short)param_7;
          pPVar4->tex = bVar1;
          *(short *)(pPVar4->update + 6) = (short)param_7;
          pPVar4->update[7] = (int)(float)param_1;
          pPVar4->update[4] = param_4;
          pPVar4->update[5] = param_5;
          *(short *)((int)pPVar4->update + 0x1a) = (short)param_8;
          pPVar4->update[0] = *param_3;
          pPVar4->update[1] = param_3[1];
          pPVar4->update[2] = param_3[2];
          pPVar4->update[3] = param_3[3];
          pPVar4->update[3] = (int)(param_2[2] - 0.5);
        }
      }
      else {
        pPVar4 = (PartInstance *)0x0;
      }
    }
    else {
      pPVar4 = (PartInstance *)0x0;
    }
  }
  else {
    pPVar4 = (PartInstance *)0x0;
  }
  return pPVar4;
}



//==== 001255d8  ns=partupd  size=0x3b4
// sig: undefined UpdatePart_16(PartInstance * part)
// callers(0): 
// callees(8): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 00125350 partupd::SpawnPart_16; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 16 */

void partupd::UpdatePart_16(PartInstance *part)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  uint color2;
  longlong lVar11;
  int iVar15;
  uint color1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar16;
  undefined8 in_r7;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  float local_60 [4];
  longlong local_50;
  
  lVar11 = (longlong)(int)part;
  local_60[0] = DAT_0071f418 * 4.8;
  local_60[1] = DAT_0071f418 * 24.5;
  local_60[2] = DAT_0071f418 * 9.8;
  local_60[3] = DAT_0071f418 * -0.24;
  if (*(short *)((int)part->update + 0x1a) == 3) {
    if (0x3f733333 <
        (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f))
       ) {
      fastfunc::FastDecTimerS16(lVar11 + 10);
    }
  }
  iVar15 = fastfunc::FastDecTimerS16(lVar11 + 10);
  if (iVar15 == 0) {
    color1 = part->update[5];
    color2 = part->update[4];
    dVar17 = (double)fastfunc::FastIntToDouble(part->timer);
    dVar18 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    mobyutil::TweenColor((float)(dVar17 / dVar18),color1,color2);
    fVar2 = (part->pos).y;
    part->color = color1;
    fVar3 = (part->pos).x;
    fVar4 = (part->pos).z;
    iVar15 = (int)color1 >> 0x18;
    iVar1 = (int)(animationSpeed * 6.5);
    local_50 = (longlong)iVar1;
    dVar17 = (double)SQRT((fVar4 - GameCamera.posZ) * (fVar4 - GameCamera.posZ) +
                          (fVar3 - GameCamera.posX) * (fVar3 - GameCamera.posX) +
                          (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY));
    if (part->timer < iVar1) {
      iVar15 = (iVar15 * part->timer) / iVar1;
    }
    uVar16 = (ulonglong)iVar15;
    dVar18 = 4.0;
    if (4.0 <= dVar17) {
      if (dVar17 < 8.0) {
        dVar19 = (double)fastfunc::FastIntToDouble(uVar16);
        uVar16 = fastfunc::FastDoubleToInt
                           ((double)((float)(dVar19 * (double)(float)(dVar17 - dVar18)) * 0.25));
        fVar3 = (part->pos).x;
        fVar2 = (part->pos).y;
        fVar4 = (part->pos).z;
        color1 = part->color;
      }
      sVar10 = *(short *)((int)part->update + 0x1a);
      fVar5 = (float)part->update[2];
      fVar6 = (float)part->update[0];
      fVar4 = fVar4 + fVar5;
      fVar7 = (float)part->update[1];
      fVar8 = (float)part->update[3];
      part->color = (uint)((uVar16 & 0xffffffff) << 0x18) | color1 & 0xffffff;
      fVar9 = *(float *)((int)local_60 + (int)((longlong)sVar10 << 2));
      (part->pos).z = fVar4;
      (part->pos).x = fVar3 + fVar6;
      (part->pos).y = fVar2 + fVar7;
      part->update[2] = (int)(fVar5 - fVar9);
      if (fVar8 <= fVar4) {
        part->rot = part->rot + '\x01';
      }
      else {
        if (sVar10 == 1) {
          dVar18 = 1.0;
          dVar17 = (double)mobyutil::MB_randRangeFloat(0.25,1.0);
          uVar12 = 0x7f000000;
          mobyutil::TweenColor((float)dVar17,0x7f000000,0x7f182030);
          dVar17 = (double)mobyutil::MB_randRangeFloat(0.5,(float)dVar18);
          uVar13 = 0;
          mobyutil::TweenColor((float)dVar17,0,0x5f5f5f);
          part->update[2] = 0;
          uVar20 = mobyutil::MB_randRangeFloat(200000.0,300000.0);
          local_50 = (longlong)(int)(animationSpeed * 150.5);
          uVar14 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 90.5),(int)(animationSpeed * 150.5));
          SpawnPart_16(uVar20,lVar11 + 0x10,lVar11 + 0x20,uVar12,uVar13,in_r7,uVar14,3);
        }
        partproc::DeletePart(lVar11);
      }
    }
    else {
      partproc::DeletePart(lVar11);
    }
  }
  else {
    partproc::DeletePart(lVar11);
  }
  return;
}



//==== 0012598c  ns=stub  size=0x4
// sig: undefined STUB_0012598c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0012598c(void)

{
  return;
}



//==== 00125990  ns=partupd  size=0x4
// sig: undefined UpdatePart_17(PartInstance * part)
// callers(0): 
// callees(0): 

/* Part 17 */

PartInstance * partupd::UpdatePart_17(PartInstance *part)

{
  return part;
}



//==== 001259b8  ns=partupd  size=0x270
// sig: undefined SpawnPart_18(void)
// callers(1): 0048c188 FUN_0048c188
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 18 */

void partupd::SpawnPart_18(float *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  PartInstance *pPVar4;
  char cVar6;
  int iVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_f4;
  double dVar10;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  pPVar4 = partproc::CreatePart(0x12);
  if (pPVar4 != (PartInstance *)0x0) {
    dVar22 = (double)*param_2;
    dVar21 = (double)param_2[1];
    dVar20 = (double)param_2[2];
    dVar19 = (double)param_2[3];
    dVar18 = (double)param_2[4];
    dVar17 = (double)param_2[5];
    dVar16 = (double)param_2[6];
    dVar15 = (double)param_2[7];
    dVar14 = (double)param_2[8];
    dVar13 = (double)param_2[9];
    dVar12 = (double)param_2[10];
    dVar11 = (double)param_2[0xb];
    dVar7 = (double)mobyutil::MB_randRangeFloat(-0.1,0.1);
    dVar10 = -0.30000001192092896;
    dVar9 = 0.30000001192092896;
    dVar8 = (double)mobyutil::MB_randRangeFloat(-0.3,0.3);
    dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar9);
    (pPVar4->pos).x =
         (float)(in_f4 * 0.0 +
                (double)(float)(dVar14 * dVar9 +
                               (double)(float)(dVar22 * dVar7 + (double)(float)(dVar18 * dVar8)))) +
         *param_1;
    fVar2 = param_1[1];
    pPVar4->color = (uint)&DAT_00806040;
    (pPVar4->pos).y =
         (float)(in_f4 * 0.0 +
                (double)(float)(dVar13 * dVar9 +
                               (double)(float)(dVar21 * dVar7 + (double)(float)(dVar17 * dVar8)))) +
         fVar2;
    fVar2 = param_1[2];
    (pPVar4->pos).w =
         (float)(in_f4 * 0.0 +
                (double)(float)(dVar11 * dVar9 +
                               (double)(float)(dVar19 * dVar7 + (double)(float)(dVar15 * dVar8))));
    (pPVar4->pos).z =
         (float)(in_f4 * 0.0 +
                (double)(float)(dVar12 * dVar9 +
                               (double)(float)(dVar20 * dVar7 + (double)(float)(dVar16 * dVar8)))) +
         fVar2;
    cVar6 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->drawDist = cVar6 + '@';
    pPVar4->gsAlpha = 0x48;
    pPVar4->type = 0;
    iVar5 = rand();
    pPVar4->rot = (char)iVar5;
    bVar1 = *DAT_00a5284c;
    pPVar4->update[1] = 0x3da3d70a;
    pPVar4->tex = bVar1;
    dVar7 = (double)mobyutil::MB_randRangeFloat(27993.002,49980.0);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    pPVar4->scale = (float)dVar7;
    auVar25 = loadVectorLeftIndexed(0x20,0x125994);
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar24);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = vectorSplatHalfWord(auVar23,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar23,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar3;
    pPVar4->update[3] = 0x3f800000;
  }
  return;
}



//==== 00125c48  ns=partupd  size=0x1bc
// sig: undefined UpdatePart_18(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 18 */

void partupd::UpdatePart_18(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  byte in_cr6;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar7 = (longlong)(int)part;
  dVar10 = 0.013000000268220901;
  fVar1 = DAT_0071f408 * 0.013 * (float)part->update[3] + (float)part->update[1];
  part->update[1] = (int)fVar1;
  if (0.0 < fVar1) {
    iVar9 = fastfunc::FastDecTimerS16(lVar7 + 10);
    fVar1 = part->scale;
    if (iVar9 == 0) {
      fVar2 = (float)part->update[1];
      uVar4 = part->update[1] >> 0x1f;
      if (0x3e6147ad < (int)((uVar4 >> 1 ^ part->update[1]) - uVar4)) {
        fVar3 = (float)part->update[3];
        part->update[3] = (int)-fVar3;
        fVar2 = fVar2 + -(fVar3 * (float)((double)DAT_0071f408 * dVar10));
        part->update[1] = (int)fVar2;
      }
      part->scale = DAT_0071f408 * 8190.0 + fVar1;
      uVar8 = fastfunc::FastDoubleToInt((double)(fVar2 * 255.0));
      part->color = (uint)((uVar8 & 0xffffffff) << 0x18) | part->color & 0xffffff;
      auVar11 = loadVectorLeftIndexed(0x10,0x125c28);
      auVar12 = loadVectorLeftIndexed(0x28,lVar7);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar12);
      auVar11 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      uVar6 = storeVectorElementWordIndexed(auVar13,0x28,lVar7);
      *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar6;
      auVar11 = loadVectorLeftIndexed(0x14,0x125c28);
      fVar1 = (part->pos).z;
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar13,auVar11);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar12 = vectorSubtractFloatingPoint(auVar12,auVar11);
        auVar11 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x28,lVar7)
        ;
        *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar6;
      }
      auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = loadVectorLeftIndexed(0xc,0x125c28);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar13);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xff;
      cVar5 = storeVectorElementByteIndexed
                        (auVar11 | auVar11 << 8 | auVar11 << 0x10 | auVar11 << 0x18 |
                         auVar11 << 0x20 | auVar11 << 0x28 | auVar11 << 0x30 | auVar11 << 0x38 |
                         auVar11 << 0x40 | auVar11 << 0x48 | auVar11 << 0x50 | auVar11 << 0x58 |
                         auVar11 << 0x60 | auVar11 << 0x68 | auVar11 << 0x70 | auVar11 << 0x78,8,
                         lVar7);
      part->rot = cVar5;
      (part->pos).z = fVar1 - 0.02;
      return;
    }
  }
  partproc::DeletePart(lVar7);
  return;
}



//==== 00125e08  ns=partupd  size=0x150
// sig: undefined SpawnPart_19(void)
// callers(3): 00298e30 mobyupdate_helpers::M156_00298e30; 0033c6e0 mobyupdate_helpers::M31_0033c6e0; 0042b640 mobyupdate_helpers::M71_0042b640
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 19 */

void partupd::SpawnPart_19(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  PartInstance *pPVar6;
  int iVar7;
  float fVar8;
  char cVar9;
  
  pPVar6 = partproc::CreatePart(0x13);
  if (pPVar6 != (PartInstance *)0x0) {
    iVar7 = mobyutil::MB_randInt(6);
    fVar8 = (float)(iVar7 * 6 + 0x40U | 0x78404000);
    pPVar6->color = (uint)fVar8;
    pPVar6->scale = fVar8;
    cVar9 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar6->drawDist = cVar9 + ' ';
    pPVar6->gsAlpha = 0x48;
    pPVar6->type = 3;
    pPVar6->tex = *DAT_00a52850;
    (pPVar6->pos).x = *param_1;
    (pPVar6->pos).y = param_1[1];
    (pPVar6->pos).z = param_1[2];
    (pPVar6->pos).w = param_1[3];
    fVar8 = *param_2;
    pPVar6->update[4] = (int)fVar8;
    fVar1 = param_2[1];
    pPVar6->update[5] = (int)fVar1;
    fVar2 = param_2[2];
    pPVar6->update[6] = (int)fVar2;
    pPVar6->update[7] = (int)param_2[3];
    fVar3 = *param_1;
    pPVar6->update[0] = (int)(fVar3 - fVar8);
    fVar4 = param_1[1];
    pPVar6->update[1] = (int)(fVar4 - fVar1);
    fVar5 = param_1[2];
    pPVar6->update[0] = (int)((fVar3 - fVar8) - fVar8);
    (pPVar6->pos).w = 0.09;
    pPVar6->update[3] = 0x3f000000;
    pPVar6->update[1] = (int)((fVar4 - fVar1) - fVar1);
    pPVar6->update[2] = (int)((fVar5 - fVar2) - fVar2);
  }
  return;
}



//==== 00125f58  ns=partupd  size=0xa4
// sig: undefined UpdatePart_19(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 19 */

void partupd::UpdatePart_19(PartInstance *part)

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
  
  fVar1 = (part->pos).x;
  fVar10 = (float)(part->color + 0xfa000000);
  fVar2 = (float)part->update[4];
  fVar3 = (part->pos).y;
  fVar4 = (float)part->update[5];
  part->color = (uint)fVar10;
  fVar5 = (part->pos).z;
  fVar6 = (float)part->update[6];
  fVar7 = (float)part->update[0];
  fVar8 = (float)part->update[1];
  fVar9 = (float)part->update[2];
  (part->pos).x = fVar1 + fVar2;
  part->scale = fVar10;
  (part->pos).y = fVar3 + fVar4;
  (part->pos).z = fVar5 + fVar6;
  part->update[0] = (int)(fVar7 + fVar2);
  part->update[1] = (int)(fVar8 + fVar4);
  part->update[2] = (int)(fVar9 + fVar6);
  if ((part->color & 0x80000000) != 0) {
    partproc::DeletePart(part);
  }
  return;
}



//==== 00126038  ns=partupd  size=0x320
// sig: undefined SpawnPart_20(void)
// callers(0): 
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 20 */

void partupd::SpawnPart_20
               (double param_1,double param_2,double param_3,double param_4,float *param_5,
               float *param_6)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  PartInstance *pPVar10;
  char cVar11;
  int in_r9;
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
  
  pPVar10 = partproc::CreatePart(0x14);
  if (pPVar10 != (PartInstance *)0x0) {
    dVar12 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    pPVar10->update[5] = (int)(float)dVar12;
    pPVar10->update[0] = (int)param_6;
    dVar28 = -0.0;
    dVar26 = 0.0;
    dVar27 = (double)*param_6;
    dVar25 = (double)param_6[1];
    dVar24 = (double)param_6[2];
    dVar23 = (double)param_6[3];
    dVar22 = (double)param_6[4];
    dVar21 = (double)param_6[5];
    dVar20 = (double)param_6[6];
    dVar19 = (double)param_6[7];
    dVar18 = (double)param_6[8];
    dVar17 = (double)param_6[9];
    dVar16 = (double)param_6[10];
    dVar15 = (double)param_6[0xb];
    dVar12 = (double)mobyutil::MB_randRangeFloat(-0.0,0.0);
    dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar26);
    dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar26);
    fVar2 = (float)pPVar10->update[5];
    fVar3 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = fVar5 * fVar5;
    fVar4 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar4 = fVar6;
    }
    fVar3 = fVar4 * fVar4;
    fVar8 = fVar2 * fVar2 * fVar5;
    fVar9 = fVar2 * fVar8;
    fVar6 = fVar3 * fVar3 * fVar4;
    fVar7 = fVar3 * fVar6;
    dVar14 = (double)(float)(dVar27 * dVar12 + (double)*param_5);
    dVar27 = (double)(float)((double)(fVar2 * fVar9 * 2.601887e-06 +
                                     fVar9 * -0.0001980741 +
                                     fVar8 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                             (double)(float)pPVar10->update[4] + dVar13);
    dVar13 = (double)(float)((double)(fVar3 * fVar7 * 2.601887e-06 +
                                     fVar7 * -0.0001980741 +
                                     fVar6 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) *
                             (double)(float)pPVar10->update[4] + dVar28);
    (pPVar10->pos).x =
         (float)(dVar22 * dVar27 +
                (double)(float)(dVar26 * dVar14 + (double)(float)(dVar18 * dVar13 + dVar14)));
    fVar2 = param_5[1];
    pPVar10->color = 0xffffff;
    (pPVar10->pos).y =
         (float)(dVar26 * dVar14 +
                (double)(float)(dVar17 * dVar13 +
                               (double)(float)(dVar25 * dVar12 + (double)(float)(dVar21 * dVar27))))
         + fVar2;
    fVar2 = param_5[2];
    (pPVar10->pos).w =
         (float)(dVar26 * dVar14 +
                (double)(float)(dVar15 * dVar13 +
                               (double)(float)(dVar23 * dVar12 + (double)(float)(dVar19 * dVar27))))
    ;
    (pPVar10->pos).z =
         (float)(dVar26 * dVar14 +
                (double)(float)(dVar16 * dVar13 +
                               (double)(float)(dVar24 * dVar12 + (double)(float)(dVar20 * dVar27))))
         + fVar2;
    cVar11 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar10->drawDist = cVar11 + '@';
    pPVar10->gsAlpha = 0x48;
    pPVar10->type = 0;
    pPVar10->rot = '\0';
    bVar1 = *DAT_00a52818;
    pPVar10->update[1] = (int)(float)param_1;
    pPVar10->tex = bVar1;
    dVar12 = (double)mobyutil::MB_randRangeFloat(69930.0,100800.0);
    pPVar10->scale = (float)dVar12;
    pPVar10->update[2] = 0;
    pPVar10->timer = 0xd2;
    pPVar10->update[3] = (int)(float)param_2;
    pPVar10->update[4] = (int)(float)param_3;
    pPVar10->update[7] = (int)(float)param_4;
    pPVar10->update[6] = in_r9;
  }
  return;
}



//==== 00126398  ns=partupd  size=0x558
// sig: undefined UpdatePart_20(PartInstance * part)
// callers(0): 
// callees(6): 000f1114 mobyfunc::GetBonePosition; 0010a83c mobyutil::???_MB_GetNormalizedMtxElem; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Part 20 */

void partupd::UpdatePart_20(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar14;
  ulonglong uVar13;
  byte in_cr6;
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_e0;
  float local_dc;
  float local_d8;
  
  lVar12 = (longlong)(int)part;
  dVar22 = 0.0;
  if (part->update[4] != 0) {
    fVar4 = (float)part->update[5];
    dVar35 = 3.141592502593994;
    dVar34 = 1.570796251296997;
    dVar33 = -3.141592502593994;
    fVar2 = fVar4 + 1.5707963;
    dVar32 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    dVar30 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    iVar14 = part->update[0];
    fVar1 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar1 = fVar4;
    }
    dVar28 = (double)*(float *)(iVar14 + 0x20);
    dVar27 = (double)*(float *)(iVar14 + 0x24);
    dVar26 = (double)*(float *)(iVar14 + 0x28);
    dVar25 = (double)*(float *)(iVar14 + 0x10);
    dVar24 = (double)*(float *)(iVar14 + 0x14);
    dVar23 = (double)*(float *)(iVar14 + 0x18);
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar5 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar1 < 0.0) {
      fVar5 = fVar1;
    }
    fVar4 = fVar5 * fVar5;
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar1 = fVar3;
    }
    fVar11 = fVar1 * fVar1;
    fVar2 = fVar4 * fVar4 * fVar5;
    fVar3 = fVar4 * fVar2;
    fVar9 = fVar11 * fVar11 * fVar1;
    fVar10 = fVar11 * fVar9;
    dVar15 = (double)((fVar4 * fVar3 * 2.601887e-06 +
                      fVar3 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
                     (float)part->update[4]);
    fVar4 = (float)part->update[7];
    iVar14 = part->update[6];
    dVar16 = (double)((fVar11 * fVar10 * 2.601887e-06 +
                      fVar10 * -0.0001980741 +
                      fVar9 * 0.0083330255 + fVar11 * fVar1 * -0.16666657 + fVar1) *
                     (float)part->update[4]);
    (part->pos).x = (part->pos).x - (float)(dVar15 * dVar25 + (double)(float)(dVar16 * dVar28));
    (part->pos).y = (part->pos).y - (float)(dVar15 * dVar24 + (double)(float)(dVar16 * dVar27));
    (part->pos).z = (part->pos).z - (float)(dVar15 * dVar23 + (double)(float)(dVar16 * dVar26));
    part->update[7] = (int)(DAT_0071f408 * 0.06001 + fVar4);
    mobyfunc::GetBonePosition(iVar14,0,&local_e0);
    dVar16 = (double)(part->pos).y;
    fVar1 = (float)((double)local_dc - dVar16);
    dVar19 = (double)(part->pos).x;
    dVar20 = (double)(part->pos).z;
    fVar2 = (float)((double)local_e0 - dVar19);
    fVar3 = (float)((double)local_d8 - dVar20);
    dVar21 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar5 = (float)part->update[5];
    fVar4 = (float)((double)(float)part->update[7] / dVar21);
    dVar15 = dVar22;
    if (dVar22 - dVar21 < 0.0) {
      dVar15 = (double)(fVar3 * fVar4);
    }
    dVar18 = dVar22;
    if (dVar22 - dVar21 < 0.0) {
      dVar18 = (double)(fVar1 * fVar4);
    }
    dVar17 = dVar22;
    if (dVar22 - dVar21 < 0.0) {
      dVar17 = (double)(fVar2 * fVar4);
    }
    if (dVar21 - dVar22 < 0.0) {
      dVar15 = (double)(fVar3 * fVar4);
    }
    if (dVar21 - dVar22 < 0.0) {
      dVar18 = (double)(fVar1 * fVar4);
    }
    if (dVar21 - dVar22 < 0.0) {
      dVar17 = (double)(fVar2 * fVar4);
    }
    (part->pos).z = (float)(dVar20 + dVar15);
    (part->pos).y = (float)(dVar16 + dVar18);
    (part->pos).x = (float)(dVar19 + dVar17);
    dVar15 = (double)fastfunc::FastWrapRot(fVar5,DAT_0071f408 * 0.5235988);
    part->update[5] = (int)(float)dVar15;
    dVar16 = (double)(float)(dVar15 + dVar34);
    dVar34 = (double)(float)(dVar35 - dVar15);
    if (dVar15 - (double)(float)(dVar35 - dVar15) < 0.0) {
      dVar34 = dVar15;
    }
    dVar19 = (double)(float)(dVar35 - dVar16);
    if (dVar16 - (double)(float)(dVar35 - dVar16) < 0.0) {
      dVar19 = dVar16;
    }
    dVar35 = (double)(float)(dVar33 - dVar15);
    if ((double)(float)(dVar33 - dVar15) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    fVar4 = (float)part->update[4] * (DAT_0071f408 * -0.100000024 + 1.0);
    dVar15 = (double)(float)(dVar35 * dVar35);
    dVar34 = (double)(float)(dVar33 - dVar16);
    if ((double)(float)(dVar33 - dVar16) - dVar19 < 0.0) {
      dVar34 = dVar19;
    }
    fVar1 = (part->pos).x;
    fVar2 = (part->pos).y;
    fVar3 = (part->pos).z;
    uVar6 = part->update[6];
    dVar19 = (double)(float)(dVar34 * dVar34);
    part->update[4] = (int)fVar4;
    dVar33 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar35));
    dVar21 = (double)(float)(dVar15 * dVar33);
    dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar34));
    dVar16 = (double)(float)(dVar19 * dVar20);
    dVar33 = (double)((float)((double)(float)(dVar15 * dVar21) * dVar29 +
                             (double)(float)(dVar21 * dVar30 +
                                            (double)(float)(dVar33 * dVar31 +
                                                           (double)(float)((double)(float)(dVar15 * 
                                                  dVar35) * dVar32 + dVar35)))) * fVar4);
    dVar29 = (double)((float)((double)(float)(dVar19 * dVar16) * dVar29 +
                             (double)(float)(dVar16 * dVar30 +
                                            (double)(float)(dVar20 * dVar31 +
                                                           (double)(float)((double)(float)(dVar19 * 
                                                  dVar34) * dVar32 + dVar34)))) * fVar4);
    (part->pos).x = (float)(dVar29 * dVar28 + (double)(float)(dVar33 * dVar25 + (double)fVar1));
    (part->pos).y = (float)(dVar29 * dVar27 + (double)(float)(dVar33 * dVar24 + (double)fVar2));
    (part->pos).z = (float)(dVar29 * dVar26 + (double)(float)(dVar33 * dVar23 + (double)fVar3));
    dVar29 = (double)mobyutil::____MB_GetNormalizedMtxElem
                               (&local_e0,(ulonglong)uVar6 + 0xc0,lVar12 + 0x10,1);
    if (dVar22 < dVar29) {
      partproc::DeletePart(lVar12);
      return;
    }
  }
  dVar29 = 0.010999999940395355;
  fVar4 = DAT_0071f408 * 0.011 * (float)part->update[3] + (float)part->update[1];
  part->update[1] = (int)fVar4;
  if (dVar22 < (double)fVar4) {
    iVar14 = fastfunc::FastDecTimerS16(lVar12 + 10);
    fVar4 = part->scale;
    if (iVar14 == 0) {
      fVar1 = (float)part->update[1];
      uVar6 = part->update[1] >> 0x1f;
      auVar39 = loadVectorLeftIndexed(0x2c,0x126358);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      if (0x3f7fffff < (int)((uVar6 >> 1 ^ part->update[1]) - uVar6)) {
        fVar2 = (float)part->update[3];
        part->update[3] = (int)-fVar2;
        fVar1 = fVar1 + -(fVar2 * (float)((double)DAT_0071f408 * dVar29));
        part->update[1] = (int)fVar1;
      }
      part->scale = DAT_0071f408 * -2940.0 + fVar4;
      uVar13 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
      part->color = (uint)((uVar13 & 0xffffffff) << 0x18) | part->color & 0xffffff;
      auVar36 = loadVectorLeftIndexed(0x3c,0x126358);
      auVar37 = loadVectorLeftIndexed(0x28,lVar12);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar36,auVar39);
      uVar8 = storeVectorElementWordIndexed(auVar36,0x28,lVar12);
      *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar8;
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar37 = vectorSubtractFloatingPoint(auVar37,auVar39);
        auVar39 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x28,lVar12
                          );
        *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar8;
      }
      auVar39 = ZEXT416(0xffffffff);
      auVar36 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x38,0x126358);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar37);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xff;
      cVar7 = storeVectorElementByteIndexed
                        (auVar39 | auVar39 << 8 | auVar39 << 0x10 | auVar39 << 0x18 |
                         auVar39 << 0x20 | auVar39 << 0x28 | auVar39 << 0x30 | auVar39 << 0x38 |
                         auVar39 << 0x40 | auVar39 << 0x48 | auVar39 << 0x50 | auVar39 << 0x58 |
                         auVar39 << 0x60 | auVar39 << 0x68 | auVar39 << 0x70 | auVar39 << 0x78,8,
                         lVar12);
      part->rot = cVar7;
      return;
    }
  }
  partproc::DeletePart(lVar12);
  return;
}



//==== 001268f8  ns=partupd  size=0x150
// sig: undefined SpawnPart_21(void)
// callers(31): 000200b0 mobyupdate_helpers::M458_SpawnRocket; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00126a70 partupd::UpdatePart_21; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 002746a8 mobyupdate_helpers::M1422_002746a8; 0028dfa8 mobyupdate_unsorted::UpdateMoby_1510; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 00298e30 mobyupdate_helpers::M156_00298e30; 0029e140 mobyupdate_helpers::M157_0029e140; 0029e578 mobyupdate_helpers::M157_0029e578; 002a9f18 mobyupdate_helpers::M167_002a9f18; 002f8c70 mobyupdate_unsorted::UpdateMoby_221; 0030b740 mobyupdate_helpers::M240_0030b740; 00334d40 mobyupdate_unsorted::UpdateMoby_295; 003421a8 mobyupdate_unsorted::UpdateMoby_325; 00345798 mobyupdate_helpers::M333_00345798; 00362e40 mobyupdate_helpers::M403_00362e40; 003658b0 mobyupdate_unsorted::UpdateMoby_41; 00366f00 mobyupdate_unsorted::UpdateMoby_413; 00367f78 mobyupdate_unsorted::UpdateMoby_421; 0036dac0 mobyupdate_helpers::M427_0036dac0; 0037b090 mobyupdate_unsorted::UpdateMoby_439; 003b4740 mobyupdate_unsorted::UpdateMoby_556
// callees(3): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 21 */

PartInstance *
partupd::SpawnPart_21
          (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6,
          int param_7,undefined2 param_8)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  
  if (param_7 == 0) {
    pPVar3 = (PartInstance *)0x0;
  }
  else {
    pPVar3 = partproc::CreatePart(0x15);
    if (pPVar3 != (PartInstance *)0x0) {
      (pPVar3->pos).x = *param_2;
      (pPVar3->pos).y = param_2[1];
      fVar2 = param_2[2];
      pPVar3->color = param_4;
      (pPVar3->pos).z = fVar2;
      (pPVar3->pos).w = param_2[3];
      cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar3->scale = (float)param_1;
      pPVar3->drawDist = cVar5 + -0x60;
      pPVar3->gsAlpha = 0x48;
      pPVar3->type = 0;
      iVar4 = rand();
      pPVar3->rot = (char)iVar4;
      bVar1 = *DAT_00a52858;
      pPVar3->update[7] = (int)(float)param_1;
      pPVar3->tex = bVar1;
      iVar4 = *param_3;
      pPVar3->timer = (short)param_7;
      pPVar3->update[0] = iVar4;
      iVar4 = param_3[1];
      *(short *)(pPVar3->update + 6) = (short)param_7;
      pPVar3->update[1] = iVar4;
      iVar4 = param_3[2];
      pPVar3->update[4] = param_4;
      pPVar3->update[5] = param_5;
      *(undefined2 *)((int)pPVar3->update + 0x1a) = param_8;
      pPVar3->update[2] = iVar4;
      pPVar3->update[3] = param_3[3];
    }
  }
  return pPVar3;
}



//==== 00126a70  ns=partupd  size=0x358
// sig: undefined UpdatePart_21(PartInstance * part)
// callers(0): 
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 001268f8 partupd::SpawnPart_21; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble
// strings: 00126a64: '?s33?' (raw)

/* Part 21 */

void partupd::UpdatePart_21(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint color2;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 in_r7;
  double dVar11;
  double dVar12;
  undefined1 local_60 [40];
  
  lVar7 = (longlong)(int)part;
  iVar8 = fastfunc::FastDecTimerS16(lVar7 + 10);
  if (iVar8 == 0) {
    dVar11 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    dVar12 = (double)fastfunc::FastIntToDouble(part->timer);
    uVar9 = part->update[5];
    color2 = part->update[4];
    part->scale = (float)((double)(float)(dVar12 * (double)(float)part->update[7]) / dVar11);
    dVar11 = (double)fastfunc::FastIntToDouble(part->timer);
    dVar12 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    mobyutil::TweenColor((float)(dVar11 / dVar12),uVar9,color2);
    fVar1 = (part->pos).x;
    fVar2 = (float)part->update[0];
    fVar3 = (float)part->update[1];
    fVar4 = (part->pos).z;
    fVar5 = (float)part->update[2];
    part->color = uVar9;
    sVar6 = *(short *)((int)part->update + 0x1a);
    (part->pos).x = fVar1 + fVar2;
    (part->pos).y = (part->pos).y + fVar3;
    (part->pos).z = fVar4 + fVar5;
    uVar9 = worldUpdateTime;
    fVar1 = -(DAT_0071f40c * 0.001 - fVar5);
    if ((sVar6 == 0) || (part->update[2] = (int)fVar1, (uVar9 & 1) == 0)) {
      part->update[0] = (int)(fVar2 * 0.96);
      part->update[1] = (int)(fVar3 * 0.96);
      part->update[2] = (int)(fVar1 * 0.96);
    }
    else {
      dVar12 = -1.0;
      dVar11 = 1.0;
      mobyutil::MB_randRangeFloat(-1.0,1.0);
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar11);
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar11);
      mobyutil::MB_randRangeFloat(0.21,0.25);
      mobyutil::MB_randRangeFloat(0.75,0.95);
      uVar9 = part->color;
      iVar8 = part->update[5];
      dVar11 = (double)part->scale;
      iVar10 = mobyutil::MB_randRange(0xf,0x14);
      SpawnPart_21(dVar11,lVar7 + 0x10,local_60,uVar9,iVar8,in_r7,
                   (int)(animationSpeed * ((float)(longlong)iVar10 + 0.5)),0);
    }
  }
  else {
    partproc::DeletePart(lVar7);
  }
  return;
}



//==== 00126dd8  ns=partupd  size=0x168
// sig: undefined SpawnPart_22(void)
// callers(18): 00018238 mobyupdate_helpers::M1274_00018238; 000d9ee8 initsky::UpdateSpaceSceneEffects; 00298178 mobyupdate_unsorted::UpdateMoby_1548; 002a8af0 mobyupdate_helpers::M1671_002a8af0; 00311740 mobyupdate_unsorted::UpdateMoby_245; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0038e978 mobyupdate_helpers::M459_0038e978; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 0040c3f0 mobyupdate_helpers::M671_0040c3f0; 00425808 mobyupdate_unsorted::UpdateMoby_a_lot_1; 004296b8 mobyupdate_unsorted::UpdateMoby_704; 00435b88 mobyupdate_unsorted::UpdateMoby_729; 00447b40 mobyupdate_helpers::M795_00447b40; 00450f20 mobyupdate_unsorted::UpdateMoby_762; 00459950 mobyupdate_unsorted::UpdateMoby_778; 00459d68 mobyupdate_unsorted::UpdateMoby_779; 004af4b0 mobyupdate_unsorted::UpdateMoby_914
// callees(4): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 22 */

void partupd::SpawnPart_22
               (double param_1,float *param_2,int *param_3,uint param_4,int param_5,
               undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  float fVar2;
  PartInstance *pPVar3;
  char cVar5;
  int iVar4;
  double dVar6;
  
  pPVar3 = partproc::CreatePart(0x16);
  if (pPVar3 != (PartInstance *)0x0) {
    pPVar3->color = param_4;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + 'p';
    pPVar3->gsAlpha = 0x44;
    pPVar3->type = 0;
    pPVar3->scale = (float)(param_1 * 0.20000000298023224);
    iVar4 = rand();
    pPVar3->rot = (char)iVar4;
    bVar1 = *DAT_00a5285c;
    pPVar3->timer = (short)param_7;
    pPVar3->tex = bVar1;
    *(short *)(pPVar3->update + 6) = (short)param_7;
    dVar6 = (double)fastfunc::FastIntToDouble(param_7);
    fVar2 = pPVar3->scale;
    pPVar3->update[4] = param_4;
    pPVar3->update[5] = param_5;
    pPVar3->update[7] = (int)(float)((double)(float)(param_1 - (double)fVar2) / dVar6);
    pPVar3->update[0] = *param_3;
    pPVar3->update[1] = param_3[1];
    pPVar3->update[2] = param_3[2];
    pPVar3->update[3] = param_3[3];
    (pPVar3->pos).x = *param_2;
    (pPVar3->pos).y = param_2[1];
    (pPVar3->pos).z = param_2[2];
    (pPVar3->pos).w = param_2[3];
    pPVar3->update[3] = (int)(DAT_0071f418 * 1.24);
  }
  return;
}



//==== 00126f50  ns=partupd  size=0x258
// sig: undefined SpawnPart_23(void)
// callers(32): 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 0011a1a0 mobyutil::MB_SpawnSparksPair; 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18; 001f1fc0 mobyupdate_unsorted::UpdateMoby_1193; 0026bc10 mobyupdate_helpers::M1401_0026bc10; 0028dfa8 mobyupdate_unsorted::UpdateMoby_1510; 0028eba8 mobyupdate_unsorted::UpdateMoby_1511; 002973c8 mobyupdate_unsorted::UpdateMoby_1545; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 00298678 mobyupdate_unsorted::UpdateMoby_1552; 0029a288 mobyupdate_helpers::M1563_0029a288; 0029a5a8 mobyupdate_unsorted::UpdateMoby_1563; 002a9f18 mobyupdate_helpers::M167_002a9f18; 0030b740 mobyupdate_helpers::M240_0030b740; 00339e00 mobyupdate_helpers::M305_00339e00; 0033c6e0 mobyupdate_helpers::M31_0033c6e0; 0033d2f8 mobyupdate_helpers::M31_0033d2f8; 003421a8 mobyupdate_unsorted::UpdateMoby_325; 00345798 mobyupdate_helpers::M333_00345798; 00362e40 mobyupdate_helpers::M403_00362e40; 0036dac0 mobyupdate_helpers::M427_0036dac0; 003ccea0 mobyupdate_helpers::M580_003ccea0; 00417370 mobyupdate_unsorted::UpdateMoby_689; 0044f670 mobyupdate_unsorted::UpdateMoby_760
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 23 */

longlong partupd::SpawnPart_23
                   (undefined8 param_1,double param_2,double param_3,double param_4,float *param_5)

{
  float fVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar6;
  int iVar4;
  undefined2 uVar5;
  int in_r7;
  int *in_r8;
  uint in_r10;
  double dVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pPVar3 = partproc::CreatePart(0x17);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_5;
    (pPVar3->pos).y = param_5[1];
    (pPVar3->pos).z = param_5[2];
    fVar1 = param_5[3];
    pPVar3->color = in_r10 | 0x20000000;
    (pPVar3->pos).w = fVar1;
    cVar6 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar6 + 'p';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->rot = '\0';
    pPVar3->scale = (float)param_4;
    pPVar3->tex = *DAT_00a52860;
    uVar8 = 0;
    dVar7 = (double)mobyutil::MB_randRangeSigned(0,param_1);
    (pPVar3->pos).x = (float)((double)(pPVar3->pos).x + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeSigned(uVar8,param_1);
    (pPVar3->pos).y = (float)((double)(pPVar3->pos).y + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeSigned(uVar8,param_1);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    (pPVar3->pos).z = (float)((double)(pPVar3->pos).z + dVar7);
    auVar9 = loadVectorLeftIndexed(8,0x126f40);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = vectorSplatHalfWord(auVar9,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar9,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[1] = 0;
    pPVar3->update[0] = in_r10;
    iVar4 = mobyutil::MB_randInt(2);
    if (iVar4 == 0) {
      uVar5 = fastfunc::FastDoubleToInt((double)((float)(longlong)-in_r7 * DAT_0071f408));
    }
    else {
      uVar5 = fastfunc::FastDoubleToInt((double)((float)(longlong)in_r7 * DAT_0071f408));
    }
    *(undefined2 *)(pPVar3->update + 2) = uVar5;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)param_2,(float)param_3);
    pPVar3->update[3] = (int)(float)dVar7;
    pPVar3->update[4] = *in_r8;
    pPVar3->update[5] = in_r8[1];
    pPVar3->update[6] = in_r8[2];
    pPVar3->update[7] = in_r8[3];
  }
  return (longlong)(int)pPVar3;
}



//==== 001271c0  ns=partupd  size=0x3ec
// sig: undefined UpdatePart_23(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 23 */

void partupd::UpdatePart_23(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  short sVar8;
  longlong lVar9;
  int iVar11;
  ulonglong uVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar9 = (longlong)(int)part;
  fVar2 = (part->pos).x;
  fVar3 = (float)part->update[4];
  fVar4 = (part->pos).y;
  fVar5 = (float)part->update[5];
  fVar6 = (float)part->update[6];
  part->rot = part->rot + (char)*(undefined2 *)(part->update + 2);
  (part->pos).x = fVar2 + fVar3;
  fVar2 = (float)part->update[3];
  (part->pos).y = fVar4 + fVar5;
  (part->pos).z = (part->pos).z + fVar6;
  dVar16 = 1.0;
  iVar11 = part->update[1];
  part->scale = part->scale * ((fVar2 - 1.0) * DAT_0071f408 + 1.0);
  if (iVar11 == 0) {
    iVar11 = fastfunc::FastDecTimerS16(lVar9 + 10);
    if (iVar11 == 0) {
      uVar10 = fastfunc::FastDoubleToInt
                         ((double)((float)(longlong)
                                          ((int)(animationSpeed * 10.5) - (int)part->timer) *
                                  (96.0 / (float)(longlong)(animationSpeed * 10.5))));
      part->color = (int)((uVar10 & 0xffffffff) << 0x18) + 0x20000000U | part->update[0];
    }
    else {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      part->update[1] = 1;
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(4,0x1271a8);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = vectorSplatHalfWord(auVar17,1);
      sVar8 = storeVectorElementHalfWordIndexed(auVar17,10,lVar9);
      part->timer = sVar8;
      part->color = part->update[0] | 0x7f000000;
    }
  }
  else if (iVar11 == 2) {
    iVar11 = fastfunc::FastDecTimerS16(lVar9 + 10);
    if (iVar11 == 0) {
      dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0xb));
      uVar10 = fastfunc::FastDoubleToInt
                         ((double)((float)*(byte *)((int)part->update + 10) *
                                  (float)((double)(longlong)(int)part->timer / dVar16)));
      part->color = (uint)((uVar10 & 0xffffffff) << 0x18) | part->update[0] & 0xffffffU;
    }
    else {
      partproc::DeletePart(lVar9);
    }
  }
  else if (iVar11 == 3) {
    fastfunc::FastDecTimerS16(lVar9 + 10);
    dVar12 = (double)fastfunc::FastIntToDouble
                               ((ulonglong)*(byte *)((int)part->update + 0xb) -
                                (longlong)part->timer);
    dVar15 = 30.5;
    auVar17 = loadVectorLeftIndexed(0x10,0x1271a8);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    dVar13 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 30.5));
    dVar14 = (double)(float)(dVar12 / dVar13);
    if (dVar16 - (double)(float)(dVar12 / dVar13) < 0.0) {
      dVar14 = dVar16;
    }
    uVar10 = fastfunc::FastDoubleToInt
                       ((double)(float)((double)*(byte *)((int)part->update + 10) * dVar14));
    dVar16 = (double)animationSpeed;
    auVar18 = ZEXT416(0xffffffff);
    auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar18 = ZEXT416(0xfffffff8);
    auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    bVar1 = *(byte *)((int)part->update + 0xb);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar17,auVar20);
    part->color = (uint)((uVar10 & 0xffffffff) << 0x18) | part->update[0] & 0xffffffU;
    auVar20 = loadVectorLeftIndexed(0x2b,lVar9);
    auVar18 = vectorShiftRightWord
                        (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    if ((int)(dVar16 * dVar15) <= (int)((uint)bVar1 - (int)part->timer)) {
      auVar17 = vectorSubtractUnsignedWordModulo(auVar18,auVar17);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xff;
      uVar7 = storeVectorElementByteIndexed
                        (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                         auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                         auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                         auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,0x2b,
                         lVar9);
      *(undefined1 *)((int)part->update + 0xb) = uVar7;
      part->update[1] = 2;
    }
  }
  else {
    iVar11 = fastfunc::FastDecTimerS16(lVar9 + 10);
    if (iVar11 == 0) {
      uVar10 = fastfunc::FastDoubleToInt
                         ((double)((float)(longlong)(int)part->timer *
                                  (127.0 / (float)(longlong)(animationSpeed * 20.5))));
      part->color = (uint)((uVar10 & 0xffffffff) << 0x18) | part->update[0];
    }
    else {
      partproc::DeletePart(lVar9);
    }
  }
  return;
}



//==== 001275b8  ns=partupd  size=0x1f0
// sig: undefined SpawnPart_24(void)
// callers(0): 
// callees(3): 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 24 */

PartInstance *
partupd::SpawnPart_24
          (double param_1,double param_2,double param_3,double param_4,double param_5,int param_6)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  PartInstance *pPVar5;
  char cVar7;
  int iVar6;
  ulonglong uVar4;
  uint in_r9;
  uint in_r10;
  double dVar8;
  byte in_stack_00000077;
  
  pPVar5 = partproc::CreatePart(0x18);
  if (pPVar5 != (PartInstance *)0x0) {
    pPVar5->update[0] = param_6;
    pPVar5->update[3] = (int)(float)param_3;
    pPVar5->update[4] = (int)(float)param_4;
    pPVar5->update[5] = (int)(float)param_5;
    pPVar5->update[2] = (int)(float)param_2;
    pPVar5->update[1] = (int)(float)param_1;
    fVar1 = *(float *)(param_6 + 0x14);
    (pPVar5->pos).x = *(float *)(param_6 + 0x10);
    fVar2 = *(float *)(param_6 + 0x18);
    (pPVar5->pos).y = fVar1;
    fVar1 = *(float *)(param_6 + 0x1c);
    (pPVar5->pos).z = fVar2;
    (pPVar5->pos).w = fVar1;
    cVar7 = *(char *)(param_6 + 8);
    pPVar5->color = in_r9;
    pPVar5->rot = cVar7;
    if (in_stack_00000077 == 0xff) {
      cVar7 = fastfunc::FastDoubleToInt(0x4010000000000000);
      param_1 = (double)(float)pPVar5->update[1];
      pPVar5->drawDist = ((byte)(in_r10 >> 1) & 0x70) + cVar7;
      param_2 = (double)(float)pPVar5->update[2];
      in_r9 = pPVar5->color;
      pPVar5->gsAlpha = ((byte)((LZCOUNT(-(in_r10 & 1)) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
      iVar6 = pPVar5->update[0];
    }
    else {
      pPVar5->drawDist = (char)in_r10;
      pPVar5->gsAlpha = in_stack_00000077;
      iVar6 = param_6;
    }
    fVar1 = *(float *)(param_6 + 0xc);
    pPVar5->type = 0;
    pbVar3 = DAT_00a52864;
    pPVar5->scale = (float)((double)fVar1 * param_1 + param_2);
    pPVar5->tex = *pbVar3;
    dVar8 = (double)fastfunc::FastIntToDouble(*(int *)(iVar6 + 4) >> 0x18 & 0xff);
    uVar4 = fastfunc::FastDoubleToInt
                      ((double)((float)((double)((float)pPVar5->update[4] * 0.00390625) * dVar8 +
                                       (double)(float)pPVar5->update[3]) * 256.0));
    pPVar5->color = (uint)((uVar4 & 0xffffffff) << 0x18) | in_r9 & 0xffffff;
  }
  return pPVar5;
}



//==== 001277b8  ns=partupd  size=0x144
// sig: undefined UpdatePart_24(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 24 */

void partupd::UpdatePart_24(PartInstance *part)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  double dVar6;
  
  if (part != (PartInstance *)0x0) {
    iVar2 = part->update[0];
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 1) & 0x80) != 0)) {
      partproc::DeletePart(part);
    }
    else {
      (part->pos).x = *(float *)(iVar2 + 0x10);
      (part->pos).y = *(float *)(iVar2 + 0x14);
      (part->pos).z = *(float *)(iVar2 + 0x18);
      (part->pos).w = *(float *)(iVar2 + 0x1c);
      fVar1 = (float)part->update[1];
      part->rot = *(char *)(iVar2 + 8);
      fVar4 = (float)part->update[3] + (float)part->update[5];
      part->scale = *(float *)(iVar2 + 0xc) * fVar1 + (float)part->update[2];
      part->update[3] = (int)fVar4;
      if (0.0 <= fVar4) {
        if (1.0 < fVar4) {
          part->update[3] = 0x3f800000;
        }
        uVar3 = part->color;
        dVar6 = (double)fastfunc::FastIntToDouble(*(int *)(iVar2 + 4) >> 0x18 & 0xff);
        uVar5 = fastfunc::FastDoubleToInt
                          ((double)((float)((double)((float)part->update[4] * 0.00390625) * dVar6 +
                                           (double)(float)part->update[3]) * 256.0));
        part->color = (uint)((uVar5 & 0xffffffff) << 0x18) | uVar3 & 0xffffff;
      }
      else {
        part->update[3] = 0;
      }
    }
  }
  return;
}



//==== 00127918  ns=partupd  size=0x1a8
// sig: undefined SpawnPart_25(void)
// callers(4): 00097700 hero::Hero_SpawnLavaAssParticles; 000aaec0 hero::HandleHeroMovement; 00119b38 mobyutil::MB_UpdateDebris; 002b2590 mobyupdate_unsorted::UpdateMoby_176
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 25 */

void partupd::SpawnPart_25(float *param_1,int *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  PartInstance *pPVar3;
  uint uVar4;
  char cVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pPVar3 = partproc::CreatePart(0x19);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_1;
    (pPVar3->pos).y = param_1[1];
    (pPVar3->pos).z = param_1[2];
    (pPVar3->pos).w = param_1[3];
    dVar6 = 1.0;
    if (param_3 == 0) {
      uVar4 = mobyutil::Float_To_RGBA(1.0,1.0,1.0,0.6);
    }
    else {
      uVar4 = mobyutil::Float_To_RGBA(1.0,1.0,1.0,0.6);
      dVar6 = -1.0;
    }
    pPVar3->color = uVar4;
    pPVar3->update[4] = (int)(float)dVar6;
    pPVar3->update[5] = (int)(float)dVar6;
    pPVar3->update[6] = (int)(float)dVar6;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar5 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    dVar6 = (double)mobyutil::MB_randRangeFloat(5000.0,30000.0);
    pPVar3->rot = '\0';
    pPVar3->scale = (float)dVar6;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    bVar1 = *DAT_00a52868;
    pPVar3->update[7] = 0x3f19999a;
    pPVar3->tex = bVar1;
    auVar7 = loadVectorLeftIndexed(0x18,0x1278fc);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar7,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[0] = *param_2;
    pPVar3->update[1] = param_2[1];
    pPVar3->update[2] = param_2[2];
    pPVar3->update[3] = param_2[3];
  }
  return;
}



//==== 00127ae0  ns=partupd  size=0x3b8
// sig: undefined UpdatePart_25(PartInstance * part)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 0010a550 mobyutil::Float_To_RGBA; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 25 */

void partupd::UpdatePart_25(PartInstance *part)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_50 [24];
  
  lVar8 = (longlong)(int)part;
  if (part != (PartInstance *)0x0) {
    bVar7 = false;
    dVar14 = (double)(float)part->update[4];
    dVar15 = (double)(float)part->update[5];
    dVar13 = (double)(float)part->update[6];
    dVar12 = 0.0;
    if ((part->update[5] < 0 || part->update[4] < 0) || (part->update[6] < 0)) {
      bVar7 = true;
      dVar14 = -dVar14;
      dVar15 = -dVar15;
      dVar13 = -dVar13;
    }
    fVar5 = (part->pos).x + (float)part->update[0];
    fVar2 = (part->pos).z;
    iVar9 = part->update[1];
    fVar6 = (part->pos).y + (float)part->update[1];
    fVar3 = (part->pos).w;
    part->scale = DAT_0071f408 * -100.0 + part->scale;
    fVar2 = fVar2 + (float)part->update[2];
    if ((part->update[0] != 0 || iVar9 != 0) || (part->update[2] != 0)) {
      iVar9 = collproc::CollLine(lVar8 + 0x10,local_50,2,g_heroMobyPtr,0);
      if (iVar9 == 0) {
        (part->pos).x = fVar5;
        iVar9 = part->update[3];
        (part->pos).y = fVar6;
        fVar4 = (float)part->update[3];
        (part->pos).z = fVar2;
        (part->pos).w = fVar3;
        if (iVar9 == 0) {
          fVar3 = (float)part->update[2];
          fVar4 = DAT_0071f40c * -0.0063;
        }
        else {
          fVar3 = (float)part->update[2];
        }
        part->update[2] = (int)(fVar3 + fVar4);
      }
      else {
        (part->pos).x = CollOutput.ip.x;
        (part->pos).y = CollOutput.ip.y;
        (part->pos).z = CollOutput.ip.z;
        fVar3 = CollOutput.ip.w;
        part->update[3] = 0;
        (part->pos).w = fVar3;
        part->update[2] = 0;
        part->update[1] = 0;
        part->update[0] = 0;
        part->scale = part->scale * 2.0;
      }
    }
    if (0 < part->update[7]) {
      iVar9 = fastfunc::FastDecTimerS16(lVar8 + 10);
      if ((((iVar9 == 0) && (-1 < (int)part->scale)) &&
          (0x3c23d709 <
           (int)(((uint)((int)fVar5 >> 0x1f) >> 1 ^ (uint)fVar5) - ((int)fVar5 >> 0x1f)))) &&
         ((0x3c23d709 <
           (int)(((uint)((int)fVar6 >> 0x1f) >> 1 ^ (uint)fVar6) - ((int)fVar6 >> 0x1f)) &&
          (0x3c23d709 <
           (int)(((uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2) - ((int)fVar2 >> 0x1f)))))) {
        if (bVar7) {
          dVar15 = (double)(float)((double)DAT_0071f408 * -0.009999999776482582 + dVar15);
          dVar14 = (double)(float)((double)DAT_0071f408 * -0.030009999871253967 + dVar14);
          if (dVar15 - dVar12 < 0.0) {
            dVar15 = dVar12;
          }
          if (dVar14 < dVar12) {
            dVar14 = dVar12;
          }
        }
        else {
          dVar14 = (double)(float)((double)DAT_0071f408 * -0.009999999776482582 + dVar14);
          dVar15 = (double)(float)((double)DAT_0071f408 * -0.030009999871253967 + dVar15);
          if (dVar14 - dVar12 < 0.0) {
            dVar14 = dVar12;
          }
          if (dVar15 < dVar12) {
            dVar15 = dVar12;
          }
        }
        dVar13 = (double)(float)((double)DAT_0071f408 * -0.05000000074505806 + dVar13);
        if (dVar13 - dVar12 < 0.0) {
          dVar13 = dVar12;
        }
        dVar11 = (double)(float)part->update[7];
        if (part->update[7] < 0) {
          part->update[7] = 0;
          dVar11 = dVar12;
        }
        uVar10 = mobyutil::Float_To_RGBA((float)dVar14,(float)dVar15,(float)dVar13,(float)dVar11);
        part->color = uVar10;
        cVar1 = part->rot;
        if (bVar7) {
          dVar14 = -dVar14;
          dVar15 = -dVar15;
          dVar13 = -dVar13;
        }
        part->update[4] = (int)(float)dVar14;
        part->update[5] = (int)(float)dVar15;
        part->update[6] = (int)(float)dVar13;
        part->rot = cVar1 + -1;
        return;
      }
    }
    partproc::DeletePart(lVar8);
  }
  return;
}



//==== 00127ea8  ns=partupd  size=0x1dc
// sig: undefined SpawnPart_26(void)
// callers(13): 0001b100 mobyupdate_helpers::M184_0001b100; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 001a1f28 mobyupdate_helpers::M1049_001a1f28; 001bc0b0 FUN_001bc0b0; 00229a90 FUN_00229a90; 00334aa8 mobyupdate_helpers::Spawn_Moby295; 0033a1d0 FUN_0033a1d0; 003487b8 FUN_003487b8; 00414688 mobyupdate_helpers::M686_00414688; 00434898 FUN_00434898; 00471930 mobyupdate_helpers::M819_00471930; 00492d98 mobyupdate_unsorted::UpdateMoby_857; 004c0208 FUN_004c0208
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 26 */

PartInstance *
partupd::SpawnPart_26
          (double param_1,int param_2,undefined8 param_3,uint param_4,int param_5,short param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  PartInstance *pPVar9;
  int iVar10;
  char cVar11;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  pPVar9 = partproc::CreatePart(0x1a);
  if (pPVar9 != (PartInstance *)0x0) {
    pPVar9->update[2] = param_5;
    *(short *)(pPVar9->update + 1) = (short)param_5;
    pPVar9->update[0] = param_2;
    pPVar9->update[3] = (int)param_4 >> 0x18;
    *(short *)((int)pPVar9->update + 6) = param_6;
    if (param_6 == -1) {
      (pPVar9->pos).x = *(float *)(param_2 + 0x10);
      (pPVar9->pos).y = *(float *)(param_2 + 0x14);
      (pPVar9->pos).z = *(float *)(param_2 + 0x18);
      local_34 = *(float *)(param_2 + 0x1c);
    }
    else {
      mobyfunc::GetBonePosition(param_2,param_6,&local_40);
      fVar2 = GameCamera.posY - local_3c;
      fVar3 = GameCamera.posX - local_40;
      fVar7 = GameCamera.posZ - local_38;
      fVar1 = 0.0;
      fVar8 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar6 = 0.4 / fVar8;
      fVar4 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar4 = fVar3 * fVar6;
      }
      fVar5 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar5 = fVar2 * fVar6;
      }
      if (0.0 - fVar8 < 0.0) {
        fVar1 = fVar7 * fVar6;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar4 = fVar3 * fVar6;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar5 = fVar2 * fVar6;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar1 = fVar7 * fVar6;
      }
      (pPVar9->pos).x = local_40 + fVar4;
      (pPVar9->pos).y = local_3c + fVar5;
      (pPVar9->pos).z = local_38 + fVar1;
    }
    (pPVar9->pos).w = local_34;
    iVar10 = rand();
    pPVar9->rot = (char)iVar10;
    pPVar9->color = param_4;
    cVar11 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar9->drawDist = cVar11 + 'p';
    pPVar9->gsAlpha = 0x48;
    pPVar9->type = 0;
    pPVar9->scale = (float)param_1;
    pPVar9->tex = *DAT_00a5286c;
  }
  return pPVar9;
}



//==== 00128090  ns=partupd  size=0x1b4
// sig: undefined UpdatePart_26(PartInstance * part)
// callers(0): 
// callees(3): 000f1114 mobyfunc::GetBonePosition; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 26 */

void partupd::UpdatePart_26(PartInstance *part)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (part != (PartInstance *)0x0) {
    iVar10 = fastfunc::FastDecTimerS16((longlong)(int)part + 0x24);
    if (((iVar10 == 0) && (iVar10 = part->update[0], iVar10 != 0)) &&
       (*(byte *)(iVar10 + 0x20) < 0x80)) {
      if ((int)*(short *)(part->update + 1) < part->update[2] / 5) {
        part->color = (part->update[3] * (int)*(short *)(part->update + 1)) / (part->update[2] / 3)
                      << 0x18 | part->color & 0xffffff;
      }
      sVar2 = *(short *)((int)part->update + 6);
      if (sVar2 == -1) {
        (part->pos).x = *(float *)(iVar10 + 0x10);
        (part->pos).y = *(float *)(iVar10 + 0x14);
        (part->pos).z = *(float *)(iVar10 + 0x18);
        (part->pos).w = *(float *)(iVar10 + 0x1c);
        return;
      }
      mobyfunc::GetBonePosition(iVar10,sVar2,&local_20);
      fVar3 = GameCamera.posY - local_1c;
      fVar5 = GameCamera.posX - local_20;
      fVar7 = GameCamera.posZ - local_18;
      fVar1 = 0.0;
      (part->pos).w = local_14;
      fVar9 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
      fVar8 = 0.4 / fVar9;
      fVar6 = fVar1;
      if (0.0 - fVar9 < 0.0) {
        fVar6 = fVar7 * fVar8;
      }
      fVar4 = fVar1;
      if (0.0 - fVar9 < 0.0) {
        fVar4 = fVar3 * fVar8;
      }
      if (0.0 - fVar9 < 0.0) {
        fVar1 = fVar5 * fVar8;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar6 = fVar7 * fVar8;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar4 = fVar3 * fVar8;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar1 = fVar5 * fVar8;
      }
      (part->pos).z = local_18 + fVar6;
      (part->pos).y = local_1c + fVar4;
      (part->pos).x = local_20 + fVar1;
      return;
    }
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00128248  ns=partupd  size=0x124
// sig: undefined SpawnPart_27(void)
// callers(23): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 00184c30 mobyupdate_unsorted::UpdateMoby_1009; 00188368 mobyupdate_unsorted::UpdateMoby_1017; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 00216c60 mobyupdate_unsorted::UpdateMoby_1233; 0021a5a0 mobyupdate_unsorted::UpdateMoby_1238; 0022a010 mobyupdate_unsorted::UpdateMoby_1258; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002d0c98 mobyupdate_unsorted::UpdateMoby_189; 00326338 mobyupdate_unsorted::UpdateMoby_279; 00339e00 mobyupdate_helpers::M305_00339e00; 0033a1d0 FUN_0033a1d0; 0033ac30 mobyupdate_unsorted::UpdateMoby_305; 0033f7c8 mobyupdate_unsorted::UpdateMoby_313; 003417c8 mobyupdate_unsorted::UpdateMoby_{320_321}; 003493d0 mobyupdate_unsorted::UpdateMoby_334; 003516d0 mobyupdate_unsorted::UpdateMoby_347; 00382358 mobyupdate_unsorted::UpdateMoby_440; 004109f8 mobyupdate_unsorted::UpdateMoby_681; 00484a18 mobyupdate_unsorted::UpdateMoby_848; 00495cd0 mobyupdate_unsorted::UpdateMoby_859; 004a0148 mobyupdate_unsorted::UpdateMoby_880
// callees(3): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 27 */

PartInstance *
partupd::SpawnPart_27(double param_1,float *param_2,int *param_3,uint param_4,int param_5)

{
  byte bVar1;
  PartInstance *pPVar2;
  int iVar3;
  char cVar4;
  
  pPVar2 = partproc::CreatePart(0x1b);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_2;
    (pPVar2->pos).y = param_2[1];
    (pPVar2->pos).z = param_2[2];
    (pPVar2->pos).w = param_2[3];
    iVar3 = rand();
    pPVar2->rot = (char)iVar3;
    pPVar2->color = param_4;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 0;
    pPVar2->scale = (float)param_1;
    bVar1 = *DAT_00a52870;
    pPVar2->update[6] = (int)pPVar2->color >> 0x18;
    pPVar2->tex = bVar1;
    pPVar2->update[0] = *param_3;
    pPVar2->update[1] = param_3[1];
    pPVar2->update[2] = param_3[2];
    iVar3 = param_3[3];
    pPVar2->update[4] = param_5;
    pPVar2->update[3] = iVar3;
    pPVar2->update[5] = param_5;
  }
  return pPVar2;
}



//==== 0012836c  ns=partupd  size=0x9c
// sig: undefined UpdatePart_27(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fff60 fastfunc::FastDecTimerS32

/* Part 27 */

void partupd::UpdatePart_27(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = part->update[6];
  iVar4 = part->update[4];
  iVar5 = part->update[5];
  fVar1 = (float)part->update[1];
  fVar2 = (part->pos).z;
  fVar3 = (float)part->update[2];
  uVar6 = part->color;
  (part->pos).x = (part->pos).x + (float)part->update[0];
  (part->pos).y = (part->pos).y + fVar1;
  part->color = (iVar7 * iVar4) / iVar5 << 0x18 | uVar6 & 0xffffff;
  (part->pos).z = fVar2 + fVar3;
  iVar7 = fastfunc::FastDecTimerS32((longlong)(int)part + 0x30);
  if (iVar7 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 00128438  ns=partupd  size=0x470
// sig: undefined SpawnPart_28(void)
// callers(3): 00094470 hero::???_Hero_UpdateTiltWobbleFx; 00237660 mobyupdate_helpers::M1281_00237660; 004403e8 mobyupdate_unsorted::UpdateMoby_740
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 28 */

void partupd::SpawnPart_28(double param_1,float *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  PartInstance *pPVar8;
  
  uVar6 = 0xb0;
  auVar21._0_4_ = (float)param_1;
  auVar21._4_4_ = (float)param_1;
  auVar21._8_4_ = (float)param_1;
  auVar21._12_4_ = (float)param_1;
  pPVar8 = partproc::CreatePart(0x1c);
  lVar7 = (longlong)(int)pPVar8;
  if (pPVar8 != (PartInstance *)0x0) {
    dVar18 = -0.029999999329447746;
    dVar16 = 0.029999999329447746;
    dVar14 = (double)mobyutil::MB_randRangeFloat(-0.03,0.03);
    dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar16);
    dVar17 = 0.0;
    dVar16 = dVar17;
    if ((int)param_3 == 0) {
      (pPVar8->pos).x = (float)(dVar14 + (double)*param_2);
      (pPVar8->pos).y = (float)(dVar15 + (double)param_2[1]);
      fVar3 = param_2[2];
    }
    else {
      fastfunc::FastMtxCopyNoTranslate(&local_c0,param_3);
      dVar1 = (double)local_90 * dVar18;
      dVar2 = (double)local_8c * dVar18;
      dVar17 = (double)(float)((double)local_88 * dVar18 +
                              (double)(float)((double)local_b8 * dVar14 +
                                             (double)(float)((double)local_a8 * dVar15)));
      dVar18 = (double)(float)((double)local_84 * dVar18 +
                              (double)(float)((double)local_b4 * dVar14 +
                                             (double)(float)((double)local_a4 * dVar15)));
      (pPVar8->pos).x =
           (float)(dVar1 + (double)(float)((double)local_c0 * dVar14 +
                                          (double)(float)((double)local_b0 * dVar15))) + *param_2;
      (pPVar8->pos).y =
           (float)(dVar2 + (double)(float)((double)local_bc * dVar14 +
                                          (double)(float)((double)local_ac * dVar15))) + param_2[1];
      fVar3 = param_2[2];
    }
    (pPVar8->pos).w = (float)dVar18;
    (pPVar8->pos).z = (float)(dVar17 + (double)fVar3) - 0.05;
    iVar9 = rand();
    iVar9 = iVar9 % 0x60;
    iVar9 = iVar9 + ((uint)((LZCOUNT(-iVar9) << 0x3a) >> 0x3f) & 1U - iVar9);
    iVar10 = rand();
    uVar11 = iVar10 - (iVar10 / iVar9) * iVar9;
    iVar10 = uVar11 + (((int)uVar11 >> 6) + (uint)((int)uVar11 < 0 && (uVar11 & 0x3f) != 0)) * -0x40
    ;
    iVar10 = iVar10 + ((uint)((LZCOUNT(-iVar10) << 0x3a) >> 0x3f) & 1U - iVar10);
    iVar12 = rand();
    pPVar8->color =
         iVar9 + 0x8fU | (iVar10 + 0x8f) * 0x100 |
         ((iVar12 - (iVar12 / iVar10) * iVar10) % 0x30 + 0x6f) * 0x10000;
    cVar13 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar8->drawDist = cVar13 + '@';
    pPVar8->gsAlpha = 0x48;
    pPVar8->type = 0;
    pPVar8->rot = '\0';
    pPVar8->tex = *DAT_00a52874;
    dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar16,0.0223456);
    pPVar8->update[1] = (int)(float)(dVar16 + 9.999999747378752e-06);
    dVar16 = (double)mobyutil::MB_randRangeFloat(10080.0,19950.0);
    pPVar8->scale = (float)dVar16;
    auVar19 = ZEXT416(0xffffffff);
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    pPVar8->update[2] = 0;
    auVar22 = loadVectorLeftIndexed(0x24,0x128408);
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar19 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                         auVar20);
    auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
    auVar19 = vectorSplatHalfWord(auVar19,1);
    sVar4 = storeVectorElementHalfWordIndexed(auVar19,10,lVar7);
    pPVar8->timer = sVar4;
    pPVar8->update[3] = 0x3f800000;
    if ((int)param_3 == 0) {
      dVar14 = -param_1;
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)param_1);
      pPVar8->update[4] = (int)(float)dVar16;
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)param_1);
      pPVar8->update[5] = (int)(float)dVar16;
      pPVar8->update[6] = -0x44dc28f6;
    }
    else {
      auVar19 = ZEXT416(0xffffffff);
      auVar20 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar19 = ZEXT416(0xffffffff);
      auVar22 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar23 = loadVectorLeftIndexed(uVar6,param_3);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar24 = loadVectorLeftIndexed(4,param_3);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar19);
      auVar19 = ZEXT416(0xffffffff);
      auVar23 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar21,auVar22);
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar25 = loadVectorLeftIndexed(0x28,0x128408);
      auVar26 = loadVectorLeftIndexed(0x20,param_3);
      auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar27 = loadVectorLeftIndexed(8,param_3);
      auVar24 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar23 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar23);
      auVar19 = loadVectorLeftIndexed(0xc,param_3);
      auVar27 = loadVectorLeftIndexed(0x24,param_3);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar19,auVar21,auVar24);
      auVar21 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar20);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar22);
      auVar20 = loadVectorLeftIndexed(0x28,param_3);
      auVar22 = loadVectorLeftIndexed(0x2c,param_3);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar25,auVar23);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar25,auVar24);
      auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x30,lVar7);
      *(undefined4 *)((uint)(pPVar8->update + 4) & 0xfffffffc) = uVar5;
      uVar5 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x34,lVar7);
      *(undefined4 *)((uint)(pPVar8->update + 5) & 0xfffffffc) = uVar5;
      auVar21 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x38,lVar7);
      *(undefined4 *)((uint)(pPVar8->update + 6) & 0xfffffffc) = uVar5;
      uVar5 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x3c,lVar7);
      *(undefined4 *)((uint)(pPVar8->update + 7) & 0xfffffffc) = uVar5;
    }
  }
  return;
}



//==== 001288c8  ns=partupd  size=0x26c
// sig: undefined UpdatePart_28(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 28 */

void partupd::UpdatePart_28(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar12;
  ulonglong uVar11;
  byte in_cr6;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar10 = (longlong)(int)part;
  fVar1 = (float)part->update[3];
  dVar13 = 0.007000000216066837;
  if (part->update[3] < 1) {
    uVar7 = part->update[1] >> 0x1f;
    if ((int)((uVar7 >> 1 ^ part->update[1]) - uVar7) < 0x3cf5c290) {
      fVar2 = part->scale;
      fVar1 = DAT_0071f408 * 0.007 * fVar1 * 0.2 + (float)part->update[1];
      part->update[1] = (int)fVar1;
      part->scale = DAT_0071f408 * 5460.0 + fVar2;
    }
    else {
      fVar1 = DAT_0071f408 * 0.007 * fVar1 + (float)part->update[1];
      part->update[1] = (int)fVar1;
    }
  }
  else {
    fVar1 = DAT_0071f408 * 0.007 * fVar1 + (float)part->update[1];
    part->update[1] = (int)fVar1;
  }
  if (0.0244 < fVar1) {
    iVar12 = fastfunc::FastDecTimerS16(lVar10 + 10);
    fVar1 = part->scale;
    if (iVar12 == 0) {
      fVar2 = (float)part->update[1];
      uVar7 = part->update[1] >> 0x1f;
      if (0x3df5c28e < (int)((uVar7 >> 1 ^ part->update[1]) - uVar7)) {
        fVar3 = (float)part->update[3];
        part->update[3] = (int)-fVar3;
        fVar2 = fVar2 + -(fVar3 * (float)((double)DAT_0071f408 * dVar13));
        part->update[1] = (int)fVar2;
      }
      part->scale = DAT_0071f408 * 5460.0 + fVar1;
      uVar11 = fastfunc::FastDoubleToInt((double)(fVar2 * 255.0));
      part->color = (uint)((uVar11 & 0xffffffff) << 0x18) | part->color & 0xffffff;
      auVar14 = loadVectorLeftIndexed(0x14,0x1288a8);
      auVar15 = loadVectorLeftIndexed(0x28,lVar10);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      fVar1 = (float)part->update[4];
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      fVar2 = (float)part->update[5];
      fVar3 = (float)part->update[6];
      auVar14 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      uVar9 = storeVectorElementWordIndexed(auVar16,0x28,lVar10);
      *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar9;
      auVar14 = loadVectorLeftIndexed(0x18,0x1288a8);
      fVar4 = (part->pos).x;
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      fVar5 = (part->pos).y;
      fVar6 = (part->pos).z;
      vectorCompareGreaterThanFloatingPoint(auVar16,auVar14);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar15 = vectorSubtractFloatingPoint(auVar15,auVar14);
        auVar14 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x28,lVar10
                          );
        *(undefined4 *)((uint)(part->update + 2) & 0xfffffffc) = uVar9;
      }
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x10,0x1288a8);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar16);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xff;
      cVar8 = storeVectorElementByteIndexed
                        (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                         auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                         auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                         auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,8,
                         lVar10);
      part->rot = cVar8;
      (part->pos).x = fVar4 + fVar1;
      (part->pos).y = fVar5 + fVar2;
      (part->pos).z = fVar6 + fVar3;
      return;
    }
  }
  partproc::DeletePart(lVar10);
  return;
}



//==== 00128b50  ns=partupd  size=0x248
// sig: undefined SpawnPart_29(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 29 */

longlong partupd::SpawnPart_29(double param_1,double param_2,int param_3,undefined2 param_4)

{
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  PartInstance *pPVar6;
  int iVar7;
  char cVar8;
  undefined8 in_LR;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  pPVar6 = partproc::CreatePart(0x1d);
  if (pPVar6 != (PartInstance *)0x0) {
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    pPVar6->update[0] = param_3;
    auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar14 = loadVectorLeftIndexed(in_LR,0x128b34);
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar14,10,(longlong)(int)pPVar6);
    pPVar6->timer = sVar3;
    dVar13 = 0.0;
    pPVar6->update[1] = 0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pPVar6->update[2] = (int)(float)dVar9;
    iVar7 = rand();
    pPVar6->update[5] = (int)(float)param_2;
    *(ushort *)(pPVar6->update + 3) = (ushort)iVar7 & 0xf;
    iVar7 = rand();
    pPVar6->rot = (char)iVar7;
    pPVar6->color = (uint)&DAT_007f7f7f;
    cVar8 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar6->type = 0;
    sVar3 = *(short *)(pPVar6->update + 3);
    pPVar6->drawDist = cVar8 + '@';
    pPVar6->gsAlpha = 0x48;
    pPVar6->scale = (float)param_1;
    pPVar6->tex = *(byte *)(DAT_00a52878 + sVar3);
    fVar1 = DAT_0071f408;
    *(undefined2 *)((int)pPVar6->update + 0xe) = param_4;
    pPVar6->update[4] = (int)(fVar1 * 0.015);
    cVar8 = fastfunc::FastDoubleToInt((double)((float)pPVar6->update[2] * 255.0));
    sVar3 = *(short *)((int)pPVar6->update + 0xe);
    pPVar6->rot = cVar8;
    if (sVar3 != -1) {
      mobyfunc::GetBonePosition(pPVar6->update[0],sVar3,&local_50);
      fVar4 = GameCamera.posY - local_4c;
      fVar2 = (float)((double)GameCamera.posX - (double)local_50);
      fVar5 = GameCamera.posZ - local_48;
      dVar12 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
      fVar1 = (float)((double)(float)pPVar6->update[5] / dVar12);
      dVar9 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar9 = (double)(fVar2 * fVar1);
      }
      dVar10 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar10 = (double)(fVar4 * fVar1);
      }
      dVar11 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar11 = (double)(fVar5 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar9 = (double)(fVar2 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar10 = (double)(fVar4 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar11 = (double)(fVar5 * fVar1);
      }
      (pPVar6->pos).x = (float)((double)local_50 + dVar9);
      (pPVar6->pos).y = (float)((double)local_4c + dVar10);
      (pPVar6->pos).z = (float)((double)local_48 + dVar11);
      (pPVar6->pos).w = local_44;
    }
  }
  return (longlong)(int)pPVar6;
}



//==== 00128dc8  ns=partupd  size=0x398
// sig: undefined UpdatePart_29(PartInstance * part)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 29 */

void partupd::UpdatePart_29(PartInstance *part)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar13;
  char cVar14;
  ulonglong uVar12;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  lVar11 = (longlong)(int)part;
  if (part != (PartInstance *)0x0) {
    iVar13 = fastfunc::FastDecTimerS16(lVar11 + 10);
    if (((iVar13 == 0) && (part->update[0] != 0)) && (*(byte *)(part->update[0] + 0x20) < 0x80)) {
      uVar4 = (int)part->scale >> 0x1f;
      *(ushort *)(part->update + 3) = *(short *)(part->update + 3) + 1U & 0xf;
      iVar13 = (uVar4 >> 1 ^ (uint)part->scale) - uVar4;
      if (iVar13 < 0x481bdc00) {
        fVar1 = DAT_0071f408 * 3989.9998 + part->scale;
        part->scale = fVar1;
        if (159600.0 < fVar1) {
          part->scale = 159600.0;
        }
      }
      else if ((0x481bdc00 < iVar13) &&
              (fVar1 = -(DAT_0071f408 * 15959.999 - part->scale), part->scale = fVar1,
              fVar1 < 159600.0)) {
        part->scale = 159600.0;
      }
      fVar1 = DAT_0071f408 * 0.001 + (float)part->update[2];
      part->update[2] = (int)fVar1;
      cVar14 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
      part->rot = cVar14;
      uVar4 = (int)part->scale >> 0x1f;
      fVar1 = (float)part->update[1];
      iVar13 = (uVar4 >> 1 ^ (uint)part->scale) - uVar4;
      part->tex = *(byte *)(DAT_00a52878 + *(short *)(part->update + 3));
      if ((iVar13 < 0x481bdc01) || (fVar2 = (float)part->update[4], 0 < part->update[4])) {
        fVar2 = (float)part->update[4];
        fVar1 = fVar1 + fVar2;
        part->update[1] = (int)fVar1;
      }
      if (iVar13 < 0x481bdc01) {
        if (fVar1 <= 0.3) {
          if (fVar1 < 0.0) {
            partproc::DeletePart(lVar11);
            return;
          }
        }
        else {
          fVar1 = fVar1 + -fVar2;
          part->update[4] = (int)-fVar2;
          part->update[1] = (int)fVar1;
        }
      }
      else if (fVar1 <= 0.15) {
        if (fVar1 < 0.0) {
          partproc::DeletePart(lVar11);
          return;
        }
      }
      else {
        fVar1 = fVar1 + -fVar2;
        part->update[4] = (int)-fVar2;
        part->update[1] = (int)fVar1;
      }
      uVar4 = part->color;
      uVar12 = fastfunc::FastDoubleToInt((double)(fVar1 * 256.0));
      fVar1 = (float)part->update[5];
      part->color = (uint)((uVar12 & 0xffffffff) << 0x18) | uVar4 & 0xffffff;
      sVar3 = *(short *)((int)part->update + 0xe);
      part->update[5] = (int)(DAT_0071f408 * 0.175 * (1.0 - fVar1) + fVar1);
      if (sVar3 != -1) {
        mobyfunc::GetBonePosition(part->update[0],sVar3,&local_30);
        fVar5 = GameCamera.posY - local_2c;
        fVar7 = GameCamera.posX - local_30;
        fVar9 = GameCamera.posZ - local_28;
        fVar1 = (float)part->update[5];
        fVar2 = 0.0;
        (part->pos).w = local_24;
        fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5);
        fVar1 = fVar1 / fVar10;
        fVar8 = fVar2;
        if (0.0 - fVar10 < 0.0) {
          fVar8 = fVar9 * fVar1;
        }
        fVar6 = fVar2;
        if (0.0 - fVar10 < 0.0) {
          fVar6 = fVar5 * fVar1;
        }
        if (0.0 - fVar10 < 0.0) {
          fVar2 = fVar7 * fVar1;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar8 = fVar9 * fVar1;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar6 = fVar5 * fVar1;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar2 = fVar7 * fVar1;
        }
        (part->pos).z = local_28 + fVar8;
        (part->pos).y = local_2c + fVar6;
        (part->pos).x = local_30 + fVar2;
      }
    }
    else {
      partproc::DeletePart(lVar11);
    }
  }
  return;
}



//==== 00129168  ns=partupd  size=0x14c
// sig: undefined SpawnPart_30(void)
// callers(0): 
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 30 */

PartInstance * partupd::SpawnPart_30(float *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  PartInstance *pPVar4;
  char cVar5;
  
  pPVar4 = partproc::CreatePart(0x1e);
  if (pPVar4 != (PartInstance *)0x0) {
    pPVar4->color = 0x80808080;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->drawDist = cVar5 + '@';
    pPVar4->rot = ' ';
    pPVar4->gsAlpha = 0x44;
    pPVar4->type = 0;
    pPVar4->scale = 39900.0;
    if (param_1 == (float *)0x0) {
      fVar2 = *(float *)(param_2 + 0x14);
      (pPVar4->pos).x = *(float *)(param_2 + 0x10);
      fVar3 = *(float *)(param_2 + 0x18);
      (pPVar4->pos).y = fVar2;
      (pPVar4->pos).z = fVar3;
      fVar2 = *(float *)(param_2 + 0x1c);
      *(undefined2 *)((int)pPVar4->update + 0x1e) = 0;
      (pPVar4->pos).z = fVar3 - 0.15;
    }
    else {
      (pPVar4->pos).x = *param_1;
      (pPVar4->pos).y = param_1[1];
      (pPVar4->pos).z = param_1[2];
      fVar2 = param_1[3];
      *(undefined2 *)((int)pPVar4->update + 0x1e) = 1;
    }
    (pPVar4->pos).w = fVar2;
    bVar1 = *DAT_00a5287c;
    pPVar4->tex = bVar1;
    if (param_2 != 0) {
      if (bVar1 == *(byte *)(param_2 + 2)) {
        pPVar4->tex = DAT_00a5287c[1];
      }
      pPVar4->update[4] = param_2;
      *(PartInstance **)(param_2 + 0x34) = pPVar4;
    }
  }
  return pPVar4;
}



//==== 001292f0  ns=partupd  size=0x804
// sig: undefined UpdatePart_30(PartInstance * part)
// callers(0): 
// callees(4): 00059e20 collproc::CollSphere; 0011e6ec partproc::DeletePart; 00500608 fastfunc::FastVecNormalize; 00502758 fastfunc::FastDoubleToInt

/* Part 30 */

void partupd::UpdatePart_30(PartInstance *part)

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
  ushort uVar11;
  short sVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar31;
  longlong lVar29;
  longlong lVar30;
  char cVar32;
  ulonglong uVar33;
  longlong lVar34;
  float *pfVar35;
  longlong lVar36;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar37;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar38;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x130;
  puVar14 = (ulonglong *)lVar30;
  *puVar14 = uVar27;
  puVar14[0x28] = in_LR;
  puVar14[0x19] = in_f19;
  puVar14[0x1a] = in_f20;
  puVar14[0x1b] = in_f21;
  puVar14[0x1c] = in_f22;
  puVar14[0x1d] = in_f23;
  puVar14[0x1e] = in_f24;
  puVar14[0x1f] = in_f25;
  puVar14[0x20] = in_f26;
  puVar14[0x21] = in_f27;
  puVar14[0x22] = in_f28;
  puVar14[0x23] = in_f29;
  puVar14[0x24] = in_f30;
  puVar14[0x25] = in_f31;
  uVar11 = *(ushort *)((int)part->update + 0x1e);
  puVar14[0x16] = unaff_r29;
  sVar12 = *(short *)(part->update + 7);
  fVar1 = (part->pos).x;
  uVar33 = (ulonglong)uVar11 & 1;
  puVar14[0x17] = unaff_r30;
  fVar2 = (part->pos).y;
  lVar37 = (longlong)(int)part + 0x20;
  fVar3 = (part->pos).z;
  fVar4 = (float)part->update[0];
  puVar14[0x18] = unaff_r31;
  fVar5 = (float)part->update[1];
  fVar6 = (float)part->update[2];
  fVar7 = (part->pos).w;
  if ((int)uVar33 == 0) {
    fVar8 = 0.0;
    uVar13 = part->update[5];
    uVar28 = (ulonglong)uVar13;
    fVar9 = 0.15;
    fVar10 = 2.0;
    uVar33 = uVar28 + 0x20 + ((LZCOUNT(-uVar13) << 0x3a) >> 0x3f & -(uVar28 + 0x20));
    fVar15 = fVar8;
    fVar18 = fVar8;
    fVar19 = fVar8;
    if ((sVar12 == 0) && (uVar13 != 0)) {
      while ((iVar31 = (int)uVar33, (*(ushort *)(iVar31 + 0x1e) & 1) == 0 &&
             (*(short *)(iVar31 + 0x1c) == 0))) {
        iVar22 = (int)uVar28;
        fVar16 = fVar10 * fVar10;
        fVar26 = *(float *)(iVar22 + 0x10) - fVar1;
        fVar10 = fVar10 + 1.0;
        *(float *)(puVar14 + 0xe) = fVar26;
        fVar24 = *(float *)(iVar22 + 0x14) - fVar2;
        fVar9 = fVar9 * 0.999;
        *(float *)((int)puVar14 + 0x74) = fVar24;
        fVar25 = *(float *)(iVar22 + 0x18) - fVar3;
        *(float *)(puVar14 + 0xf) = fVar25;
        *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)(iVar22 + 0x1c);
        fVar23 = SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar24 * fVar24);
        fVar21 = (0.2 / fVar16) / fVar23;
        fVar16 = fVar8;
        if (0.0 - fVar23 < 0.0) {
          fVar16 = fVar26 * fVar21;
        }
        fVar20 = fVar8;
        if (0.0 - fVar23 < 0.0) {
          fVar20 = fVar24 * fVar21;
        }
        fVar17 = fVar8;
        if (0.0 - fVar23 < 0.0) {
          fVar17 = fVar25 * fVar21;
        }
        if (fVar23 - 0.0 < 0.0) {
          fVar16 = fVar26 * fVar21;
        }
        if (fVar23 - 0.0 < 0.0) {
          fVar20 = fVar24 * fVar21;
        }
        if (fVar23 - 0.0 < 0.0) {
          fVar17 = fVar25 * fVar21;
        }
        fVar15 = fVar15 + fVar16;
        fVar19 = fVar19 + fVar20;
        *(float *)(puVar14 + 0xe) = fVar16;
        *(float *)((int)puVar14 + 0x74) = fVar20;
        fVar18 = fVar18 + fVar17;
        *(float *)(puVar14 + 0xf) = fVar17;
        uVar28 = (ulonglong)*(uint *)(iVar31 + 0x14);
        if (*(uint *)(iVar31 + 0x14) == 0) break;
        uVar33 = uVar28 + 0x20;
      }
    }
    if (((int)uVar33 == 0) || (*(short *)((int)uVar33 + 0x1c) == 0)) {
      fVar4 = fVar4 + fVar15;
      fVar5 = fVar5 + fVar19;
      fVar6 = fVar6 + fVar18;
    }
    else {
      fVar4 = fVar4 * 0.5;
      fVar5 = fVar5 * 0.5;
      fVar6 = fVar6 * 0.5;
    }
    fVar8 = 0.97;
    if (uVar13 != 0) {
      fVar8 = (0.15 - fVar9) + 1.07;
    }
    fVar2 = fVar2 + fVar5 * fVar8;
    part->update[2] = (int)(fVar6 * fVar8);
    fVar1 = fVar1 + fVar4 * fVar8;
    part->update[1] = (int)(fVar5 * fVar8);
    part->update[0] = (int)(fVar4 * fVar8);
    fVar4 = -(DAT_0071f40c * 0.02 - fVar6 * fVar8);
    fVar3 = fVar3 + fVar4;
    part->update[2] = (int)fVar4;
  }
  *(float *)(puVar14 + 0xe) = fVar1;
  *(float *)((int)puVar14 + 0x74) = fVar2;
  *(float *)(puVar14 + 0xf) = fVar3;
  *(float *)((int)puVar14 + 0x7c) = fVar7;
  iVar31 = part->update[4];
  if (iVar31 != 0) {
    fVar2 = fVar2 - *(float *)(iVar31 + 0x14);
    fVar1 = fVar1 - *(float *)(iVar31 + 0x10);
    fVar3 = fVar3 - *(float *)(iVar31 + 0x18);
    fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (0.1 < ABS(fVar4 - 0.15)) {
      fVar5 = 0.15 / fVar4;
      fVar6 = 0.0;
      fVar8 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar8 = fVar1 * fVar5;
      }
      fVar9 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar9 = fVar2 * fVar5;
      }
      if (0.0 - fVar4 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar8 = fVar1 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar9 = fVar2 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      *(float *)(puVar14 + 0xe) = fVar8 + *(float *)(iVar31 + 0x10);
      *(float *)((int)puVar14 + 0x74) = fVar9 + *(float *)(iVar31 + 0x14);
      fVar1 = *(float *)(iVar31 + 0x18);
      *(float *)((int)puVar14 + 0x7c) = fVar7;
      *(float *)(puVar14 + 0xf) = fVar6 + fVar1;
    }
    iVar31 = collproc::CollSphere(0x3fc3333340000000,uVar27 - 0xc0,uVar33,0,0);
    fVar2 = CollOutput.push.y;
    fVar1 = CollOutput.push.x;
    if (iVar31 == 0) {
      *(undefined2 *)(part->update + 7) = 0;
      fVar1 = *(float *)(puVar14 + 0xe);
      fVar2 = *(float *)((int)puVar14 + 0x74);
      fVar3 = *(float *)(puVar14 + 0xf);
      fVar4 = *(float *)((int)puVar14 + 0x7c);
    }
    else {
      if (*(short *)(part->update + 7) == 0) {
        *(float *)(puVar14 + 0xe) = CollOutput.push.x;
        fVar3 = CollOutput.push.z;
        *(float *)((int)puVar14 + 0x74) = fVar2;
        fVar4 = CollOutput.push.w;
        *(float *)(puVar14 + 0xf) = fVar3;
      }
      else {
        fVar1 = (part->pos).x;
        fVar2 = (part->pos).y;
        *(float *)(puVar14 + 0xe) = fVar1;
        fVar3 = (part->pos).z;
        *(float *)((int)puVar14 + 0x74) = fVar2;
        fVar4 = (part->pos).w;
        *(float *)(puVar14 + 0xf) = fVar3;
      }
      *(float *)((int)puVar14 + 0x7c) = fVar4;
      *(undefined2 *)(part->update + 7) = 1;
    }
    iVar31 = part->update[4];
    fVar2 = fVar2 - GameCamera.posY;
    fVar1 = fVar1 - GameCamera.posX;
    fVar7 = *(float *)(iVar31 + 0x14) - GameCamera.posY;
    fVar6 = *(float *)(iVar31 + 0x10) - GameCamera.posX;
    fVar3 = fVar3 - GameCamera.posZ;
    fVar8 = *(float *)(iVar31 + 0x18) - GameCamera.posZ;
    fVar5 = *(float *)(iVar31 + 0x1c);
    fVar9 = 1.0 / (GameCamera.mtx3.v3.w * fVar5 +
                  GameCamera.mtx3.v2.w * fVar8 +
                  GameCamera.mtx3.v0.w * fVar6 + GameCamera.mtx3.v1.w * fVar7);
    fVar10 = 1.0 / (GameCamera.mtx3.v3.w * fVar4 +
                   GameCamera.mtx3.v2.w * fVar3 +
                   GameCamera.mtx3.v0.w * fVar1 + GameCamera.mtx3.v1.w * fVar2);
    fVar15 = (GameCamera.mtx3.v3.x * fVar5 +
             GameCamera.mtx3.v2.x * fVar8 +
             GameCamera.mtx3.v0.x * fVar6 + GameCamera.mtx3.v1.x * fVar7) * fVar9 -
             (GameCamera.mtx3.v3.x * fVar4 +
             GameCamera.mtx3.v2.x * fVar3 +
             GameCamera.mtx3.v0.x * fVar1 + GameCamera.mtx3.v1.x * fVar2) * fVar10;
    fVar1 = (GameCamera.mtx3.v3.y * fVar5 +
            GameCamera.mtx3.v2.y * fVar8 +
            GameCamera.mtx3.v0.y * fVar6 + GameCamera.mtx3.v1.y * fVar7) * fVar9 -
            (GameCamera.mtx3.v3.y * fVar4 +
            GameCamera.mtx3.v2.y * fVar3 +
            GameCamera.mtx3.v0.y * fVar1 + GameCamera.mtx3.v1.y * fVar2) * fVar10;
    fVar2 = ABS(fVar15);
    fVar4 = ABS(fVar1);
    *(float *)(puVar14 + 0x10) = fVar15;
    *(float *)((int)puVar14 + 0x84) = fVar1;
    *(float *)(puVar14 + 0x11) = fVar2 - fVar4;
    fVar1 = 0.0;
    uVar33 = (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar14 + 0x10));
    if (*(float *)(puVar14 + 0x11) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar33 << 2));
    fVar5 = ABS(*(float *)((int)puVar14 + 0x84));
    if (*(float *)(puVar14 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar29 = uVar27 - 0x120;
      lVar36 = uVar27 - 0x94;
      lVar34 = uVar27 - 0xa4;
      lVar38 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar14 + 0x13) = fVar3;
      *(float *)(puVar14 + 0x12) = fVar3;
      *(float *)((int)puVar14 + 0x94) = fVar3;
      *(float *)((int)puVar14 + 0x8c) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * fVar5;
      *(float *)((int)puVar14 + 0x94) = *(float *)((int)puVar14 + 0x94) * fVar3;
      *(float *)(puVar14 + 0x13) = *(float *)(puVar14 + 0x13) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar29 + 0x8c) = *(float *)((int)lVar29 + 0x7c) * fVar3 * fVar3;
        iVar31 = (int)lVar34;
        lVar34 = lVar34 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar36 + 4) = *(float *)(iVar31 + 4) * fVar3 * fVar3;
        lVar36 = lVar36 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar38 = 4;
      lVar36 = uVar27 - 0xa4;
      pfVar35 = (float *)&DAT_007358e0;
      lVar29 = lVar30;
      lVar34 = lVar36;
      do {
        fVar3 = *pfVar35;
        fVar5 = pfVar35[1];
        pfVar35 = pfVar35 + 2;
        *(float *)((int)lVar29 + 0x8c) = *(float *)((int)lVar29 + 0x8c) * fVar3;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar5;
        lVar34 = lVar34 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar29 = 2;
      do {
        iVar31 = (int)lVar30;
        lVar30 = lVar30 + 0x10;
        iVar22 = (int)lVar36;
        lVar36 = lVar36 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar31 + 0x8c) + *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8)
                + *(float *)(iVar22 + 0xc);
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar2;
    }
    cVar32 = fastfunc::FastDoubleToInt((double)(fVar1 * 128.0 * 0.31830987));
    sVar12 = *(short *)(part->update + 7);
    part->rot = cVar32 + -0x20;
    if (sVar12 == 0) {
      fVar1 = *(float *)(puVar14 + 0xe);
      fVar8 = (part->pos).x;
      fVar2 = *(float *)((int)puVar14 + 0x74);
      fVar9 = (part->pos).y;
      fVar3 = *(float *)(puVar14 + 0xf);
      fVar10 = (part->pos).z;
      fVar5 = 0.5;
      fVar4 = (float)part->update[0] + (fVar1 - fVar8);
      fVar6 = (float)part->update[1] + (fVar2 - fVar9);
      fVar7 = (float)part->update[2] + (fVar3 - fVar10);
    }
    else {
      fastfunc::FastVecNormalize(lVar37,lVar37,0xa10980);
      fVar4 = (float)part->update[0];
      fVar5 = 0.95;
      fVar6 = (float)part->update[1];
      fVar7 = (float)part->update[2];
      fVar1 = *(float *)(puVar14 + 0xe);
      fVar2 = *(float *)((int)puVar14 + 0x74);
      fVar8 = (part->pos).x;
      fVar3 = *(float *)(puVar14 + 0xf);
      fVar9 = (part->pos).y;
      fVar10 = (part->pos).z;
    }
    part->update[0] = (int)((fVar4 * fVar5 + (fVar1 - fVar8)) * 0.5);
    part->update[1] = (int)((fVar6 * fVar5 + (fVar2 - fVar9)) * 0.5);
    part->update[2] = (int)((fVar7 * fVar5 + (fVar3 - fVar10)) * 0.5);
    fVar7 = *(float *)((int)puVar14 + 0x7c);
  }
  uVar11 = *(ushort *)((int)part->update + 0x1e);
  (part->pos).x = fVar1;
  (part->pos).y = fVar2;
  (part->pos).z = fVar3;
  (part->pos).w = fVar7;
  if ((uVar11 & 2) != 0) {
    uVar33 = ((ulonglong)(uint)((int)part->color >> 0x18) & 0xff) - 2;
    if ((int)uVar33 < 1) {
      if (part->update[5] == 0) {
        if (part->update[4] != 0) {
          *(undefined4 *)(part->update[4] + 0x34) = 0;
        }
        partproc::DeletePart((longlong)(int)part);
      }
    }
    else {
      part->color = (uint)((uVar33 & 0xffffffff) << 0x18) | part->color & 0xffffff;
    }
  }
  return;
}



//==== 00129b00  ns=partupd  size=0x1a8
// sig: undefined SpawnPart_31(void)
// callers(1): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball
// callees(4): 0011e6c8 partproc::CreatePart; 005023f0 fastfunc::FastVecAdd; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub

/* Spawns part 31 */

void partupd::SpawnPart_31
               (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  short sVar1;
  PartInstance *pPVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  _iStack00000040 = param_3;
  _iStack00000048 = param_4;
  pPVar2 = partproc::CreatePart(0x1f);
  if (pPVar2 != (PartInstance *)0x0) {
    fastfunc::FastVecSub(local_50,&stack0x00000040,param_5 + 0x10);
    fastfunc::FastVecAdd(&local_40,param_5 + 0x10,local_60);
    (pPVar2->pos).x = local_40;
    (pPVar2->pos).y = local_3c;
    (pPVar2->pos).z = local_38;
    (pPVar2->pos).w = local_34;
    pPVar2->update[0] = iStack00000040;
    pPVar2->update[1] = iStack00000044;
    pPVar2->color = param_1;
    pPVar2->update[2] = iStack00000048;
    pPVar2->scale = (float)(param_1 & 0xffffff);
    pPVar2->update[3] = iStack0000004c;
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pPVar2->drawDist = cVar3 + 'p';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 2;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar6 = loadVectorLeftIndexed(0xffffffffffff9714,0x730000);
    auVar5 = loadVectorLeftIndexed(8,0x129af4);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorAddFloatingPoint
                       (auVar4,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar5,auVar6,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar1 = storeVectorElementHalfWordIndexed(auVar6,10,(longlong)(int)pPVar2);
    pPVar2->timer = sVar1;
    pPVar2->update[4] = (int)param_5;
  }
  return;
}



//==== 00129cb0  ns=partupd  size=0x260
// sig: undefined UpdatePart_31(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 005023f0 fastfunc::FastVecAdd; 00502a64 fastfunc::FastVecSub

/* Part 31 */

void partupd::UpdatePart_31(PartInstance *part)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  
  lVar9 = (longlong)(int)part;
  if (((part->update[4] == 0) || (cVar1 = *(char *)(part->update[4] + 0x20), cVar1 == -2)) ||
     (cVar1 == -3)) {
    partproc::DeletePart(lVar9);
    return;
  }
  iVar10 = fastfunc::FastDecTimerS16(lVar9 + 10);
  if (iVar10 != 0) {
    partproc::DeletePart(lVar9);
    return;
  }
  fastfunc::FastVecSub(local_70,(ulonglong)(uint)part->update[4] + 0x10,lVar9 + 0x10);
  dVar11 = 1.0;
  fastfunc::FastVecAdd(&local_60,local_80,(ulonglong)(uint)part->update[4] + 0x10);
  (part->pos).x = local_60;
  (part->pos).y = local_5c;
  uVar5 = part->update[4];
  (part->pos).z = local_58;
  (part->pos).w = local_54;
  fastfunc::FastVecSub(local_50,(ulonglong)uVar5 + 0x10,lVar9 + 0x20);
  fastfunc::FastVecAdd(&local_40,local_80,(ulonglong)(uint)part->update[4] + 0x10);
  part->update[0] = (int)local_40;
  fVar2 = (part->pos).y;
  fVar3 = (part->pos).x;
  fVar7 = fVar2 - local_3c;
  part->update[1] = (int)local_3c;
  fVar6 = fVar3 - local_40;
  fVar4 = (part->pos).z;
  fVar8 = fVar4 - local_38;
  part->update[2] = (int)local_38;
  part->update[3] = local_34;
  if ((0.1 <= SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7)) &&
     (iVar10 = part->update[4], fVar2 = fVar2 - *(float *)(iVar10 + 0x14),
     fVar3 = fVar3 - *(float *)(iVar10 + 0x10), fVar4 = fVar4 - *(float *)(iVar10 + 0x18),
     dVar11 <= (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2))) {
    return;
  }
  partproc::DeletePart(lVar9);
  return;
}



//==== 00129f28  ns=partupd  size=0x150
// sig: undefined SpawnPart_32(void)
// callers(1): 002ff240 mobyupdate_unsorted::UpdateMoby_230
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 32 */

PartInstance * partupd::SpawnPart_32(int param_1)

{
  float alpha;
  PartInstance *pPVar1;
  uint uVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  
  pPVar1 = partproc::CreatePart(0x20);
  if (pPVar1 != (PartInstance *)0x0) {
    pPVar1->update[0] = param_1;
    pPVar1->update[1] = 0;
    pPVar1->update[2] = (int)(DAT_0071f408 * 0.016);
    dVar5 = 1.0;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pPVar1->update[3] = (int)(float)dVar4;
    alpha = (float)pPVar1->update[1];
    pPVar1->update[4] = 0x3f800000;
    pPVar1->update[5] = 0x3f800000;
    pPVar1->update[6] = 0x3f800000;
    (pPVar1->pos).x = *(float *)(param_1 + 0x10);
    (pPVar1->pos).y = *(float *)(param_1 + 0x14);
    (pPVar1->pos).z = *(float *)(param_1 + 0x18);
    (pPVar1->pos).w = *(float *)(param_1 + 0x1c);
    uVar2 = mobyutil::Float_To_RGBA((float)dVar5,(float)dVar5,(float)dVar5,alpha);
    pPVar1->color = uVar2;
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar1->type = 0;
    pPVar1->drawDist = cVar3 + '@';
    pPVar1->gsAlpha = 0x48;
    dVar4 = (double)mobyutil::MB_randRangeFloat(50000.0,50000.0);
    pPVar1->scale = (float)dVar4;
    cVar3 = fastfunc::FastDoubleToInt((double)((float)pPVar1->update[3] * 255.0));
    pPVar1->rot = cVar3;
    pPVar1->tex = *DAT_00a52824;
  }
  return pPVar1;
}



//==== 0012a0a8  ns=partupd  size=0x228
// sig: undefined UpdatePart_32(PartInstance * part)
// callers(0): 
// callees(3): 0010a550 mobyutil::Float_To_RGBA; 0011e6ec partproc::DeletePart; 00502758 fastfunc::FastDoubleToInt

/* Part 32 */

void partupd::UpdatePart_32(PartInstance *part)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float g;
  float b;
  float fVar4;
  uint uVar5;
  char cVar6;
  
  if (part != (PartInstance *)0x0) {
    iVar3 = part->update[0];
    if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x20) & 0xf0) == 0xf0)) {
      partproc::DeletePart(part);
    }
    else {
      fVar1 = (float)part->update[1];
      (part->pos).x = *(float *)(iVar3 + 0x10);
      fVar2 = (float)part->update[2];
      fVar1 = fVar1 + fVar2;
      (part->pos).y = *(float *)(iVar3 + 0x14);
      (part->pos).z = *(float *)(iVar3 + 0x18);
      (part->pos).w = *(float *)(iVar3 + 0x1c);
      part->update[1] = (int)fVar1;
      fVar4 = 0.0;
      if (0.0 <= fVar1) {
        if (0.6 < fVar1) {
          fVar2 = -fVar2;
          fVar1 = fVar1 + fVar2;
          part->update[2] = (int)fVar2;
          part->update[1] = (int)fVar1;
        }
        fVar2 = DAT_0071f408 * -0.0174 + (float)part->update[4];
        part->update[4] = (int)fVar2;
        if (fVar2 < 0.0) {
          part->update[4] = 0;
          fVar2 = fVar4;
        }
        g = DAT_0071f408 * -0.01446 + (float)part->update[5];
        part->update[5] = (int)g;
        if (g < 0.0) {
          part->update[5] = 0;
          g = fVar4;
        }
        b = DAT_0071f408 * -0.0015 + (float)part->update[6];
        part->update[6] = (int)b;
        if (b < 0.0) {
          part->update[6] = 0;
          b = fVar4;
        }
        uVar5 = mobyutil::Float_To_RGBA(fVar2,g,b,fVar1);
        part->color = uVar5;
        fVar1 = DAT_0071f408 * 0.0011 + (float)part->update[3];
        part->update[3] = (int)fVar1;
        if (1.0 < fVar1) {
          fVar1 = fVar1 - 1.0;
          part->update[3] = (int)fVar1;
        }
        cVar6 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
        part->rot = cVar6;
        part->scale = *(float *)(part->update[0] + 0x2c) * 100000.0 * 30.0 + 50000.0;
      }
      else {
        partproc::DeletePart(part);
      }
    }
  }
  return;
}



//==== 0012a2d8  ns=partupd  size=0xf0
// sig: undefined SpawnPart_33(void)
// callers(0): 
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 33 */

void partupd::SpawnPart_33(float *param_1,int *param_2,uint param_3,float param_4,short param_5)

{
  int iVar1;
  PartInstance *pPVar2;
  char cVar3;
  
  pPVar2 = partproc::CreatePart(0x21);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_1;
    (pPVar2->pos).y = param_1[1];
    (pPVar2->pos).z = param_1[2];
    (pPVar2->pos).w = param_1[3];
    pPVar2->update[0] = *param_2;
    pPVar2->update[1] = param_2[1];
    iVar1 = param_2[2];
    pPVar2->color = param_3;
    pPVar2->update[2] = iVar1;
    iVar1 = param_2[3];
    pPVar2->scale = param_4;
    pPVar2->update[3] = iVar1;
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->timer = param_5;
    pPVar2->drawDist = cVar3 + 'p';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 2;
  }
  return;
}



//==== 0012a3c8  ns=partupd  size=0x48
// sig: undefined UpdatePart_33(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 33 */

void partupd::UpdatePart_33(PartInstance *part)

{
  int iVar1;
  
  iVar1 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar1 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 0012a440  ns=partupd  size=0x220
// sig: undefined SpawnPart_34(undefined8 param_1, undefined8 param_2, Vec4 * param_3, undefined4 param_4)
// callers(10): 00097080 hero::Hero_SpawnWaterBubbles; 000aaec0 hero::HandleHeroMovement; 001b5398 mobyupdate_helpers::M1075_001b5398; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0027ab98 mobyupdate_unsorted::UpdateMoby_1425; 00292878 mobyupdate_unsorted::UpdateMoby_1524; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00481568 mobyupdate_unsorted::UpdateMoby_835
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 34 */

PartInstance * partupd::SpawnPart_34(double param_1,double param_2,Vec4 *param_3,int *param_4)

{
  PartInstance *pPVar1;
  char cVar3;
  short sVar2;
  double dVar4;
  
  pPVar1 = partproc::CreatePart(0x22);
  if (pPVar1 != (PartInstance *)0x0) {
    pPVar1->color = 0x88a0a0a0;
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar1->drawDist = cVar3 + '@';
    pPVar1->gsAlpha = 0x44;
    pPVar1->type = 0;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
    pPVar1->scale = 5250.0;
    pPVar1->update[3] = (int)(float)(dVar4 * param_1);
    cVar3 = mobyutil::MB_randRange(0xfffffffffffffff6,10);
    pPVar1->rot = cVar3 + -0x80;
    pPVar1->tex = *DAT_00a5288c;
    sVar2 = mobyutil::MB_randRange((int)(animationSpeed * 70.5),(int)(animationSpeed * 140.5));
    pPVar1->timer = sVar2;
    if (param_2 == -1.0) {
      if (g_heroState == WATER_SLIDING) {
        param_2 = (double)(g_heroPosition.z + 0.4);
      }
      else {
        param_2 = (double)hero::g_heroWaterZ;
      }
    }
    pPVar1->update[4] = (int)(float)param_2;
    dVar4 = (double)mobyutil::MB_randRot();
    pPVar1->update[5] = (int)(float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 1.7453293,mobyutil::g_FrameTime * 6.981317);
    pPVar1->update[6] = (int)(float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 0.5,mobyutil::g_FrameTime * 1.4);
    pPVar1->update[7] = (int)(float)dVar4;
    pPVar1->update[0] = *param_4;
    pPVar1->update[1] = param_4[1];
    pPVar1->update[2] = param_4[2];
    (pPVar1->pos).x = param_3->x;
    (pPVar1->pos).y = param_3->y;
    (pPVar1->pos).z = param_3->z;
    (pPVar1->pos).w = param_3->w;
  }
  return pPVar1;
}



//==== 0012a6a0  ns=partupd  size=0x450
// sig: undefined UpdatePart_34(PartInstance * part)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 00109af0 mobyutil::Delt; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

/* Part 34 */

void partupd::UpdatePart_34(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  undefined8 in_LR;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_38 [2];
  longlong local_30;
  
  lVar12 = (longlong)(int)part;
  iVar13 = fastfunc::FastDecTimerS16(lVar12 + 10);
  if (iVar13 == 0) {
    fVar3 = (part->pos).z;
    uVar4 = (int)fVar3 >> 0x1f;
    fVar1 = (part->pos).z;
    uVar5 = part->update[4] >> 0x1f;
    fVar2 = (float)part->update[4];
    if ((int)((uVar5 >> 1 ^ part->update[4]) - uVar5) < (int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4)) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      part->update[2] = 0;
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = loadVectorLeftIndexed(in_LR,0x12a660);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                           auVar19);
      auVar18 = ZEXT416(2);
      local_30 = (longlong)(int)(animationSpeed * 14.5);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar18 = vectorSubtractUnsignedWordModulo
                          (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      if ((int)(animationSpeed * 14.5) + -2 < (int)part->timer) {
        auVar18 = vectorSplatHalfWord(auVar18,1);
        sVar6 = storeVectorElementHalfWordIndexed(auVar18,10,lVar12);
        part->timer = sVar6;
      }
    }
    dVar17 = 1.2999999523162842;
    if ((fVar2 < mobyutil::g_FrameTime * 1.3 * 40.0 + fVar1) &&
       (iVar13 = mobyutil::MB_randInt(0x14), iVar13 == 0)) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = loadVectorLeftIndexed(in_LR,0x12a660);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                           auVar19);
      auVar18 = ZEXT416(2);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar18 = vectorSubtractUnsignedWordModulo
                          (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      if ((int)(animationSpeed * 14.5) + -2 < (int)part->timer) {
        auVar18 = vectorSplatHalfWord(auVar18,1);
        sVar6 = storeVectorElementHalfWordIndexed(auVar18,10,lVar12);
        part->timer = sVar6;
      }
    }
    iVar13 = (int)(animationSpeed * 14.5);
    local_30 = (longlong)iVar13;
    if (part->timer < iVar13) {
      part->color = (int)(((int)part->color >> 0x18 & 0xffU) * (int)part->timer) / iVar13 << 0x18 |
                    part->color & 0xffffff;
    }
    fVar1 = DAT_0071f408 * 840.00006 + part->scale;
    part->scale = fVar1;
    if ((float)part->update[3] < fVar1) {
      part->scale = (float)part->update[3];
    }
    fVar1 = (float)part->update[0];
    fVar2 = (float)part->update[1];
    local_38[0] = (float)part->update[2];
    fVar7 = DAT_0071f408 * -0.029999971;
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    (part->pos).z = (part->pos).z + local_38[0];
    fVar7 = (fVar3 * (fVar7 + 1.0)) / fVar3;
    fVar1 = fVar1 * fVar7;
    fVar2 = fVar2 * fVar7;
    fVar7 = 0.0;
    if (0.0 - fVar3 < 0.0) {
      fVar7 = fVar1;
    }
    fVar8 = 0.0;
    if (0.0 - fVar3 < 0.0) {
      fVar8 = fVar2;
    }
    if (fVar3 - 0.0 < 0.0) {
      fVar7 = fVar1;
    }
    if (fVar3 - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    (part->pos).x = (part->pos).x + fVar7;
    (part->pos).y = (part->pos).y + fVar8;
    mobyutil::Delt((float)((double)mobyutil::g_FrameTime * dVar17),DAT_0071f418 * 5.0,local_38);
    part->update[0] = (int)fVar7;
    part->update[1] = (int)fVar8;
    part->update[2] = (int)local_38[0];
    dVar17 = (double)fastfunc::FastWrapRot((float)part->update[5],(float)part->update[6]);
    part->update[5] = (int)(float)dVar17;
    dVar17 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,1.5707964);
    fVar2 = (float)part->update[5];
    fVar1 = (float)(dVar17 + 1.570796251296997);
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar15 = (double)(float)(3.141592502593994 - dVar17);
    if (dVar17 - (double)(float)(3.141592502593994 - dVar17) < 0.0) {
      dVar15 = dVar17;
    }
    fVar7 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar7 = fVar1;
    }
    fVar8 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar8 = fVar3;
    }
    dVar14 = (double)(float)(-3.141592502593994 - dVar17);
    if ((double)(float)(-3.141592502593994 - dVar17) - dVar15 < 0.0) {
      dVar14 = dVar15;
    }
    fVar2 = fVar8 * fVar8;
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
      fVar3 = fVar7;
    }
    dVar15 = (double)(float)(dVar14 * dVar14);
    fVar11 = fVar3 * fVar3;
    fVar1 = fVar2 * fVar2 * fVar8;
    fVar7 = fVar2 * fVar1;
    fVar9 = fVar11 * fVar11 * fVar3;
    dVar17 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
    fVar10 = fVar11 * fVar9;
    dVar16 = (double)(float)(dVar15 * dVar17);
    fVar1 = (fVar2 * fVar7 * 2.601887e-06 +
            fVar7 * -0.0001980741 + fVar1 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
            (float)part->update[7];
    (part->pos).x =
         (fVar11 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar11 * fVar3 * -0.16666657 + fVar3) *
         fVar1 + (part->pos).x;
    (part->pos).y =
         ((float)(dVar15 * dVar16) * 2.601887e-06 +
         (float)(dVar16 * -0.0001980741071747616 +
                (double)(float)(dVar17 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar15 * dVar14) *
                                               -0.16666656732559204 + dVar14)))) * fVar1 +
         (part->pos).y;
  }
  else {
    partproc::DeletePart(lVar12);
  }
  return;
}



//==== 0012ab08  ns=partupd  size=0x160
// sig: undefined SpawnPart_35(Vec4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
// callers(12): 00096d88 hero::Hero_SpawnWaterDrops; 00097370 hero::Hero_SpawnWaterSplash; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 002286e8 mobyupdate_helpers::M1251_002286e8; 00292250 mobyupdate_helpers::M1524_00292250; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 00314648 mobyupdate_helpers::M247_00314648; 00342db8 mobyupdate_unsorted::UpdateMoby_327_BataliaOcean; 00352e88 mobyupdate_helpers::M35_00352e88; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0045c680 mobyupdate_unsorted::UpdateMoby_787
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 35 */

void partupd::SpawnPart_35(Vec4 *param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  PartInstance *pPVar3;
  char cVar4;
  double dVar5;
  
  pPVar3 = partproc::CreatePart(0x23);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = param_1->x;
    (pPVar3->pos).y = param_1->y;
    (pPVar3->pos).z = param_1->z;
    fVar1 = param_1->w;
    pPVar3->color = 0x80808080;
    (pPVar3->pos).w = fVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar3->drawDist = cVar4 + '\x10';
    pPVar3->gsAlpha = 0x44;
    pPVar3->type = 0;
    dVar5 = (double)mobyutil::MB_randRangeFloat(10500.0,16800.0);
    pPVar3->scale = (float)dVar5;
    fVar1 = (pPVar3->pos).z;
    pPVar3->tex = *DAT_00a52890;
    pPVar3->update[0] = *param_2;
    pPVar3->update[1] = param_2[1];
    pPVar3->update[2] = param_2[2];
    iVar2 = param_2[3];
    pPVar3->update[4] = param_3;
    pPVar3->update[3] = iVar2;
    pPVar3->update[5] = param_4;
    pPVar3->update[6] = (int)fVar1;
    if (param_3 == 2) {
      pPVar3->update[6] = 0;
    }
    dVar5 = (double)mobyutil::MB_randRangeFloat(DAT_0071f418 * 10.5,DAT_0071f418 * 18.0);
    pPVar3->update[7] = (int)(float)dVar5;
  }
  return;
}



//==== 0012ac98  ns=partupd  size=0x224
// sig: undefined SpawnPart_66(void)
// callers(1): 0012b108 partupd::UpdatePart_35
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 66 */

PartInstance *
partupd::SpawnPart_66(double param_1,double param_2,float *param_3,undefined8 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PartInstance *pPVar6;
  ulonglong uVar5;
  char cVar8;
  int iVar7;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  pPVar6 = partproc::CreatePart(0x42);
  if (pPVar6 != (PartInstance *)0x0) {
    (pPVar6->pos).x = *param_3;
    (pPVar6->pos).y = param_3[1];
    (pPVar6->pos).z = param_3[2];
    (pPVar6->pos).w = param_3[3];
    if (param_5 == 0xffffffff) {
      uVar5 = mobyutil::MB_randInt(6);
      param_5 = (int)((uVar5 & 0xffffffff) << 0x18) + 0x14000000U | 0x808080;
    }
    pPVar6->color = param_5;
    cVar8 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar6->drawDist = cVar8 + ' ';
    pPVar6->gsAlpha = 0x48;
    pPVar6->type = 1;
    uVar5 = mobyutil::MB_randInt(0x100);
    if ((uVar5 & 1) == 0) {
      bVar9 = DAT_00a5290c[1];
    }
    else {
      bVar9 = *DAT_00a5290c;
    }
    pPVar6->tex = bVar9;
    iVar7 = rand();
    pPVar6->rot = (char)iVar7;
    pPVar6->timer = 4;
    pPVar6->scale = (float)(param_1 * 210000.0);
    dVar10 = (double)mobyutil::MB_randRot();
    dVar11 = (double)mobyutil::MB_randRangeFloat(0.0015,0.0025);
    fVar1 = (float)(dVar10 + 1.570796251296997);
    dVar13 = (double)(float)(3.141592502593994 - dVar10);
    if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
      dVar13 = dVar10;
    }
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    dVar12 = (double)(float)(-3.141592502593994 - dVar10);
    if ((double)(float)(-3.141592502593994 - dVar10) - dVar13 < 0.0) {
      dVar12 = dVar13;
    }
    pPVar6->update[4] = (int)(float)param_2;
    pPVar6->update[2] = 0;
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    dVar13 = (double)(float)(dVar12 * dVar12);
    fVar4 = fVar3 * fVar3;
    dVar14 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar12));
    fVar1 = fVar4 * fVar4 * fVar3;
    dVar10 = (double)(float)(dVar13 * dVar14);
    fVar2 = fVar4 * fVar1;
    pPVar6->update[1] =
         (int)(float)((double)((float)(dVar13 * dVar10) * 2.601887e-06 +
                              (float)(dVar10 * -0.0001980741071747616 +
                                     (double)(float)(dVar14 * 0.008333025500178337 +
                                                    (double)(float)((double)(float)(dVar13 * dVar12)
                                                                    * -0.16666656732559204 + dVar12)
                                                    ))) * dVar11);
    pPVar6->update[0] =
         (int)(float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                              fVar2 * -0.0001980741 +
                              fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar11);
  }
  return pPVar6;
}



//==== 0012aee8  ns=partupd  size=0x208
// sig: undefined SpawnPart_45(void)
// callers(8): 00096890 hero::Hero_SpawnWaterRings; 00097370 hero::Hero_SpawnWaterSplash; 0012b108 partupd::UpdatePart_35; 00132090 partupd::UpdatePart_64; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}; 002b3778 mobyupdate_helpers::M1766_002b3778
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 45 */

PartInstance *
partupd::SpawnPart_45
          (double param_1,double param_2,float *param_3,undefined8 param_4,int param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PartInstance *pPVar6;
  ulonglong uVar5;
  char cVar8;
  int iVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pPVar6 = partproc::CreatePart(0x2d);
  if (pPVar6 != (PartInstance *)0x0) {
    (pPVar6->pos).x = *param_3;
    (pPVar6->pos).y = param_3[1];
    (pPVar6->pos).z = param_3[2];
    (pPVar6->pos).w = param_3[3];
    if (param_6 == 0xffffffff) {
      uVar5 = mobyutil::MB_randInt(6);
      param_6 = (int)((uVar5 & 0xffffffff) << 0x18) + 0x14000000U | 0x808080;
    }
    pPVar6->color = param_6;
    cVar8 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar6->drawDist = cVar8 + ' ';
    pPVar6->gsAlpha = 0x48;
    pPVar6->type = 1;
    pPVar6->tex = *DAT_00a528b8;
    iVar7 = rand();
    pPVar6->rot = (char)iVar7;
    pPVar6->timer = 4;
    pPVar6->scale = (float)(param_1 * 210000.0);
    dVar9 = (double)mobyutil::MB_randRot();
    dVar10 = (double)mobyutil::MB_randRangeFloat(0.0015,0.0025);
    fVar1 = (float)(dVar9 + 1.570796251296997);
    dVar11 = (double)(float)(3.141592502593994 - dVar9);
    if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
      dVar11 = dVar9;
    }
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    dVar12 = (double)(float)(-3.141592502593994 - dVar9);
    if ((double)(float)(-3.141592502593994 - dVar9) - dVar11 < 0.0) {
      dVar12 = dVar11;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    dVar9 = (double)(float)(dVar12 * dVar12);
    pPVar6->update[4] = (int)(float)param_2;
    pPVar6->update[2] = 0;
    pPVar6->update[5] = param_5;
    fVar4 = fVar3 * fVar3;
    dVar13 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar12));
    fVar1 = fVar4 * fVar4 * fVar3;
    dVar11 = (double)(float)(dVar9 * dVar13);
    fVar2 = fVar4 * fVar1;
    pPVar6->update[1] =
         (int)(float)((double)((float)(dVar9 * dVar11) * 2.601887e-06 +
                              (float)(dVar11 * -0.0001980741071747616 +
                                     (double)(float)(dVar13 * 0.008333025500178337 +
                                                    (double)(float)((double)(float)(dVar9 * dVar12)
                                                                    * -0.16666656732559204 + dVar12)
                                                    ))) * dVar10);
    pPVar6->update[0] =
         (int)(float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                              fVar2 * -0.0001980741 +
                              fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar10);
  }
  return pPVar6;
}



//==== 0012b108  ns=partupd  size=0x2f4
// sig: undefined UpdatePart_35(PartInstance * part)
// callers(0): 
// callees(5): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0011e6ec partproc::DeletePart; 0012ac98 partupd::SpawnPart_66; 0012aee8 partupd::SpawnPart_45

/* Part 35 */

void partupd::UpdatePart_35(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  lVar7 = (longlong)(int)part;
  iVar8 = part->update[4];
  if (iVar8 == 0) {
    fVar1 = (float)part->update[1];
    fVar6 = (part->pos).z + (float)part->update[2];
    (part->pos).x = (part->pos).x + (float)part->update[0];
    (part->pos).y = (part->pos).y + fVar1;
    (part->pos).z = fVar6;
  }
  else if (iVar8 == 1) {
    fVar1 = (part->pos).x;
    fVar2 = (float)part->update[0];
    fVar3 = (part->pos).y;
    fVar4 = (part->pos).w;
    fVar5 = (float)part->update[1];
    fVar6 = (part->pos).z + (float)part->update[2];
    iVar8 = collproc::CollLine(lVar7 + 0x10,local_30,2,0,0);
    if (iVar8 != 0) {
      iVar8 = collproc::CollHotspot();
      if (iVar8 == 0) {
        SpawnPart_45(0x3fc99999a0000000,0x40b4820000000000,0xa10960,CHAR_ARRAY_00a0feec + 0x114,0,
                     0xffffffffffffffff);
      }
      partproc::DeletePart(lVar7);
      return;
    }
    (part->pos).x = fVar1 + fVar2;
    (part->pos).y = fVar3 + fVar5;
    (part->pos).z = fVar6;
    (part->pos).w = fVar4;
  }
  else if (iVar8 == 3) {
    fVar1 = (float)part->update[1];
    fVar6 = (part->pos).z + (float)part->update[2];
    (part->pos).x = (part->pos).x + (float)part->update[0];
    (part->pos).y = (part->pos).y + fVar1;
    (part->pos).z = fVar6;
    if (fVar6 < hero::g_heroWaterZ) {
      (part->pos).z = hero::g_heroWaterZ;
      SpawnPart_45(0x3fc99999a0000000,0x40b4820000000000,lVar7 + 0x10,&DAT_0012b0f0,0,
                   0xffffffffffffffff);
      partproc::DeletePart(lVar7);
      return;
    }
  }
  else {
    fVar1 = (part->pos).x;
    fVar2 = (float)part->update[0];
    fVar3 = (part->pos).y;
    fVar4 = (part->pos).w;
    fVar5 = (float)part->update[1];
    fVar6 = (part->pos).z + (float)part->update[2];
    iVar8 = collproc::CollLine(lVar7 + 0x10,local_20,2,0,0);
    if (iVar8 != 0) {
      iVar8 = collproc::CollHotspot();
      if (iVar8 != 0) {
        CollOutput.ip.z = CollOutput.ip.z + 0.05;
        SpawnPart_66(0x3fd0000000000000,0x40a89c0000000000,0xa10960,&CollOutput,0xffffffffffffffff);
      }
      partproc::DeletePart(lVar7);
      return;
    }
    (part->pos).x = fVar1 + fVar2;
    (part->pos).y = fVar3 + fVar5;
    (part->pos).z = fVar6;
    (part->pos).w = fVar4;
  }
  fVar1 = (float)part->update[7];
  iVar8 = part->update[5] + -1;
  part->rot = part->rot + '\x02';
  part->update[5] = iVar8;
  part->update[2] = (int)((float)part->update[2] - fVar1);
  if (((iVar8 < 1) || (fVar6 < (float)part->update[6])) &&
     (uVar9 = part->color + 0xf0000000, part->color = uVar9, (uVar9 & 0x80000000) != 0)) {
    partproc::DeletePart(lVar7);
  }
  return;
}



//==== 0012b408  ns=partupd  size=0x14c
// sig: undefined SpawnPart_36(void)
// callers(1): 0012b560 partupd::SpawnPart_36_Tinted
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 36 */

longlong partupd::SpawnPart_36(float *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  PartInstance *pPVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pPVar4 = partproc::CreatePart(0x24);
  if (pPVar4 != (PartInstance *)0x0) {
    (pPVar4->pos).x = *param_1;
    (pPVar4->pos).y = param_1[1];
    (pPVar4->pos).z = param_1[2];
    fVar2 = param_1[3];
    pPVar4->color = 0;
    (pPVar4->pos).w = fVar2;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->type = 0;
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pPVar4->drawDist = cVar5 + '@';
    pPVar4->gsAlpha = 0x44;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    bVar1 = *DAT_00a52894;
    pPVar4->scale = 139860.0;
    pPVar4->tex = bVar1;
    auVar6 = loadVectorLeftIndexed(4,0x12b3fc);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar6,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar3;
    pPVar4->update[4] = (int)*param_1;
    pPVar4->update[5] = (int)param_1[1];
    fVar2 = param_1[2];
    pPVar4->update[0] = param_2;
    pPVar4->update[6] = (int)fVar2;
    pPVar4->update[3] = 0x7f101080;
    pPVar4->update[1] = 0;
    pPVar4->update[7] = 0x3dd67750;
    pPVar4->update[2] = 0x3f400000;
  }
  return (longlong)(int)pPVar4;
}



//==== 0012b560  ns=partupd  size=0x264
// sig: undefined SpawnPart_36_Tinted(void)
// callers(0): 
// callees(1): 0012b408 partupd::SpawnPart_36

void partupd::SpawnPart_36_Tinted(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = SpawnPart_36();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0x7f407f7f;
    *(float *)(iVar2 + 0xc) = (float)((double)*(float *)(iVar2 + 0xc) * param_1);
  }
  iVar2 = SpawnPart_36(param_2,param_3);
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(DAT_00a52894 + 1);
    *(undefined4 *)(iVar2 + 4) = 0x7f40407f;
    *(undefined1 *)(iVar2 + 2) = uVar1;
    *(undefined1 *)(iVar2 + 3) = 0x48;
    *(undefined4 *)(iVar2 + 0x28) = 0xc0a00000;
    *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0xc) * (float)(param_1 * 0.6666666865348816);
  }
  iVar2 = SpawnPart_36(param_2,param_3);
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(DAT_00a52894 + 1);
    *(undefined4 *)(iVar2 + 4) = 0x404080;
    *(undefined1 *)(iVar2 + 2) = uVar1;
    *(float *)(iVar2 + 0xc) = (float)(param_1 * 2.0) * *(float *)(iVar2 + 0xc);
  }
  iVar2 = SpawnPart_36(param_2,param_3);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 3) = 0x48;
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(DAT_00a52894 + 1);
    *(float *)(iVar2 + 0xc) = (float)(param_1 * 2.0) * *(float *)(iVar2 + 0xc);
  }
  iVar2 = SpawnPart_36(param_2,param_3);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0x7f407f7f;
    *(undefined4 *)(iVar2 + 0x24) = 0xbfc90fdb;
    *(undefined4 *)(iVar2 + 0x28) = 0x3f666666;
    *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0xc) * (float)(param_1 * 0.800000011920929);
  }
  iVar3 = SpawnPart_36(param_2,param_3);
  iVar2 = DAT_00a52894;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x24) = 0xbfc90fdb;
    *(undefined4 *)(iVar3 + 0x28) = 0x3f666666;
    uVar1 = *(undefined1 *)(iVar2 + 1);
    *(undefined4 *)(iVar3 + 4) = 0x404080;
    *(undefined1 *)(iVar3 + 2) = uVar1;
    *(float *)(iVar3 + 0xc) = (float)((double)*(float *)(iVar3 + 0xc) * param_1);
  }
  iVar2 = SpawnPart_36(param_2,param_3);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 3) = 0x48;
    *(undefined4 *)(iVar2 + 0x24) = 0xbfc90fdb;
    iVar3 = DAT_00a52894;
    *(undefined4 *)(iVar2 + 0x28) = 0x3f666666;
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(iVar3 + 1);
    *(float *)(iVar2 + 0xc) = (float)((double)*(float *)(iVar2 + 0xc) * param_1);
  }
  return;
}



//==== 0012b7f0  ns=partupd  size=0x220
// sig: undefined UpdatePart_36(PartInstance * part)
// callers(0): 
// callees(4): 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

/* Part 36 */

void partupd::UpdatePart_36(PartInstance *part)

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
  int iVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  fVar1 = (float)part->update[5];
  fVar11 = GameCamera.posY - fVar1;
  fVar2 = (float)part->update[4];
  fVar8 = GameCamera.posX - fVar2;
  fVar3 = (float)part->update[6];
  fVar12 = GameCamera.posZ - fVar3;
  dVar19 = 1.0;
  fVar4 = (float)part->update[7];
  fVar5 = (float)part->update[1];
  fVar7 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11);
  if (fVar7 <= 1.0) {
    fVar6 = fVar8 * 0.25;
    fVar9 = fVar12 * 0.25;
    fVar10 = fVar11 * 0.25;
  }
  else {
    fVar6 = 0.0;
    fVar9 = fVar6;
    fVar10 = fVar6;
    if (fVar7 != 0.0) {
      fVar7 = 0.25 / fVar7;
      fVar6 = fVar8 * fVar7;
      fVar9 = fVar12 * fVar7;
      fVar10 = fVar11 * fVar7;
    }
  }
  (part->pos).w = fVar4;
  (part->pos).x = fVar2 + fVar6;
  (part->pos).y = fVar1 + fVar10;
  (part->pos).z = fVar3 + fVar9;
  dVar15 = (double)fastfunc::FastWrapRot(fVar5,fVar4);
  dVar17 = (double)(float)(3.141592502593994 - dVar15);
  if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
    dVar17 = dVar15;
  }
  dVar16 = (double)(float)(-3.141592502593994 - dVar15);
  if ((double)(float)(-3.141592502593994 - dVar15) - dVar17 < 0.0) {
    dVar16 = dVar17;
  }
  part->update[1] = (int)(float)dVar15;
  dVar18 = (double)(float)(dVar16 * dVar16);
  dVar15 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar16));
  dVar17 = (double)(float)(dVar18 * dVar15);
  dVar15 = (double)((float)(dVar18 * dVar17) * 2.601887e-06 +
                   (float)(dVar17 * -0.0001980741071747616 +
                          (double)(float)(dVar15 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar18 * dVar16) *
                                                         -0.16666656732559204 + dVar16))));
  iVar13 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  dVar17 = (double)(float)part->update[2];
  if (((iVar13 != 0) && ((dVar15 < dVar17 || (dVar15 < -0.8999999761581421)))) ||
     (*(int *)part->update[0] == 0)) {
    *(int *)part->update[0] = 0;
    partproc::DeletePart((longlong)(int)part);
  }
  else {
    uVar14 = 0;
    if (dVar17 < dVar15) {
      uVar14 = 0;
      mobyutil::TweenColor((float)(dVar15 - dVar17) / (float)(dVar19 - dVar17),0,part->update[3]);
    }
    part->color = uVar14;
  }
  return;
}



//==== 0012ba18  ns=partupd  size=0x150
// sig: undefined SpawnPart_37(void)
// callers(0): 
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 37 */

longlong partupd::SpawnPart_37(float *param_1)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  PartInstance *pPVar4;
  char cVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pPVar4 = partproc::CreatePart(0x25);
  if (pPVar4 != (PartInstance *)0x0) {
    (pPVar4->pos).x = *param_1;
    (pPVar4->pos).y = param_1[1];
    (pPVar4->pos).z = param_1[2];
    (pPVar4->pos).w = param_1[3];
    pPVar4->update[0] = (int)*param_1;
    pPVar4->update[1] = (int)param_1[1];
    pPVar4->update[2] = (int)param_1[2];
    fVar2 = param_1[3];
    pPVar4->color = 0;
    pPVar4->update[3] = (int)fVar2;
    pPVar4->update[4] = -1;
    cVar5 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar4->type = 0;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    pPVar4->drawDist = cVar5 + '@';
    pPVar4->gsAlpha = 0x44;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    bVar1 = *DAT_00a52898;
    pPVar4->scale = 559860.0;
    pPVar4->tex = bVar1;
    auVar7 = loadVectorLeftIndexed(4,0x12ba10);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar2 = animationSpeed * 30.5;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    sVar6 = (short)(int)fVar2;
    auVar7 = vectorSplatHalfWord(auVar7,1);
    sVar3 = storeVectorElementHalfWordIndexed(auVar7,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar3;
    pPVar4->update[5] = ((int)sVar6 >> 1) + (uint)(sVar6 < 0 && ((int)fVar2 & 1U) != 0);
  }
  return (longlong)(int)pPVar4;
}



//==== 0012bb78  ns=partupd  size=0x1a0
// sig: undefined UpdatePart_37(PartInstance * part)
// callers(0): 
// callees(3): 00106738 mobyutil::TweenColor; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 37 */

void partupd::UpdatePart_37(PartInstance *part)

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
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar10 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar10 == 0) {
    fVar1 = (float)part->update[1];
    fVar4 = GameCamera.posY - fVar1;
    fVar6 = GameCamera.posX - (float)part->update[0];
    fVar2 = (float)part->update[2];
    fVar8 = GameCamera.posZ - fVar2;
    fVar9 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4);
    if (fVar9 <= 5.0) {
      fVar3 = fVar4 * 0.25;
      fVar5 = fVar6 * 0.25;
      fVar7 = fVar8 * 0.25;
    }
    else {
      fVar3 = 0.0;
      fVar5 = fVar3;
      fVar7 = fVar3;
      if (fVar9 != 0.0) {
        fVar9 = 1.25 / fVar9;
        fVar3 = fVar4 * fVar9;
        fVar5 = fVar6 * fVar9;
        fVar7 = fVar8 * fVar9;
      }
    }
    iVar10 = part->update[5];
    iVar12 = part->timer - iVar10;
    fVar4 = (float)part->update[3];
    (part->pos).x = (float)part->update[0] + fVar5;
    (part->pos).y = fVar1 + fVar3;
    (part->pos).z = fVar2 + fVar7;
    (part->pos).w = fVar4;
    uVar11 = 0;
    mobyutil::TweenColor
              ((float)(longlong)(iVar10 - (iVar12 + (iVar12 >> 0x1f & iVar12 * -2))) /
               (float)(longlong)iVar10,0,part->update[4]);
    part->color = uVar11;
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 0012bd28  ns=partupd  size=0x14c
// sig: undefined SpawnPart_38(void)
// callers(2): 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00344328 mobyupdate_unsorted::UpdateMoby_329
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 38 */

longlong partupd::SpawnPart_38(double param_1,double param_2,float *param_3,int *param_4)

{
  int iVar1;
  short sVar2;
  PartInstance *pPVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pPVar3 = partproc::CreatePart(0x26);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_3;
    (pPVar3->pos).y = param_3[1];
    (pPVar3->pos).z = param_3[2];
    (pPVar3->pos).w = param_3[3];
    pPVar3->update[0] = *param_4;
    pPVar3->update[1] = param_4[1];
    pPVar3->update[2] = param_4[2];
    iVar1 = param_4[3];
    pPVar3->color = 0xffffffff;
    pPVar3->update[3] = iVar1;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    pPVar3->drawDist = cVar4 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    pPVar3->tex = *DAT_00a5289c;
    pPVar3->scale = (float)(param_1 * 210000.0);
    auVar5 = loadVectorLeftIndexed(8,0x12bd18);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = vectorSplatHalfWord(auVar5,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar5,10,(longlong)(int)pPVar3);
    pPVar3->timer = sVar2;
    pPVar3->update[4] = (int)(float)(param_2 * 210000.0);
    pPVar3->update[5] = 0x3e99999a;
  }
  return (longlong)(int)pPVar3;
}



//==== 0012be88  ns=partupd  size=0x140
// sig: undefined UpdatePart_38(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* Part 38 */

void partupd::UpdatePart_38(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  int iVar8;
  ulonglong uVar7;
  
  lVar6 = (longlong)(int)part;
  iVar8 = fastfunc::FastDecTimerS16(lVar6 + 10);
  if (iVar8 == 0) {
    fVar1 = (float)part->update[4];
    fVar2 = (float)part->update[5];
    part->rot = part->rot + '\x01';
    part->scale = part->scale + fVar1;
    fVar1 = -(DAT_0071f408 * 0.01 - fVar2);
    uVar5 = part->color & 0xffffff;
    part->color = uVar5;
    if (fVar1 - 0.0 < 0.0) {
      fVar1 = 0.0;
    }
    part->update[5] = (int)fVar1;
    uVar7 = fastfunc::FastDoubleToInt((double)(fVar1 * 255.0));
    iVar8 = part->update[5];
    part->color = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar5;
    if (iVar8 < 1) {
      partproc::DeletePart(lVar6);
    }
    else {
      fVar1 = (float)part->update[0];
      fVar2 = (float)part->update[1];
      fVar3 = (float)part->update[2];
      (part->pos).x = (part->pos).x + fVar1;
      (part->pos).y = (part->pos).y + fVar2;
      (part->pos).z = (part->pos).z + fVar3;
      fVar4 = DAT_0071f408 * -0.01999998 + 1.0;
      part->update[0] = (int)(fVar1 * fVar4);
      part->update[1] = (int)(fVar2 * fVar4);
      part->update[2] = (int)(fVar3 * fVar4);
    }
  }
  else {
    partproc::DeletePart(lVar6);
  }
  return;
}



//==== 0012bfd8  ns=partupd  size=0x198
// sig: undefined SpawnPart_39(void)
// callers(2): 00291828 mobyupdate_helpers::M1516_00291828; 00291970 mobyupdate_unsorted::UpdateMoby_152
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 39 */

longlong partupd::SpawnPart_39(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  PartInstance *pPVar13;
  char cVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pPVar13 = partproc::CreatePart(0x27);
  fVar12 = DAT_00a52ba4;
  if (pPVar13 != (PartInstance *)0x0) {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar6 = fVar1 - GameCamera.posY;
    fVar3 = *(float *)(param_1 + 0x18);
    fVar10 = fVar2 - GameCamera.posX;
    fVar11 = fVar3 - GameCamera.posZ;
    fVar8 = 0.0;
    (pPVar13->pos).w = *(float *)(param_1 + 0x1c);
    pPVar13->color = DAT_0072971c;
    fVar5 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar6 * fVar6);
    fVar12 = fVar12 / fVar5;
    fVar9 = fVar8;
    if (0.0 - fVar5 < 0.0) {
      fVar9 = fVar12 * fVar11;
    }
    fVar7 = fVar8;
    if (0.0 - fVar5 < 0.0) {
      fVar7 = fVar12 * fVar6;
    }
    if (0.0 - fVar5 < 0.0) {
      fVar8 = fVar12 * fVar10;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar9 = fVar12 * fVar11;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = fVar12 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar8 = fVar12 * fVar10;
    }
    (pPVar13->pos).z = fVar3 + fVar9;
    (pPVar13->pos).y = fVar1 + fVar7;
    (pPVar13->pos).x = fVar2 + fVar8;
    cVar14 = fastfunc::FastDoubleToInt(0x4010000000000000);
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    pPVar13->drawDist = cVar14 + '@';
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    pPVar13->gsAlpha = 0x48;
    pPVar13->type = 0;
    pPVar13->tex = *DAT_00a528a0;
    pPVar13->scale = DAT_00729718;
    auVar15 = loadVectorLeftIndexed(8,0x12bfc8);
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar16);
    auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
    auVar15 = vectorSplatHalfWord(auVar15,1);
    sVar4 = storeVectorElementHalfWordIndexed(auVar15,10,(longlong)(int)pPVar13);
    pPVar13->timer = sVar4;
    pPVar13->update[0] = 0x437f0000;
    pPVar13->update[1] = param_1;
    pPVar13->update[2] = 0;
  }
  return (longlong)(int)pPVar13;
}



//==== 0012c178  ns=partupd  size=0x180
// sig: undefined UpdatePart_39(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 00502758 fastfunc::FastDoubleToInt

/* Part 39 */

void partupd::UpdatePart_39(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  
  part->color = DAT_0072971c;
  iVar5 = part->update[1];
  cVar7 = (char)DAT_00729720;
  part->scale = DAT_00729718;
  part->rot = part->rot + cVar7;
  fVar15 = DAT_00a52ba4;
  fVar1 = *(float *)(iVar5 + 0x14);
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar9 = fVar1 - GameCamera.posY;
  fVar3 = *(float *)(iVar5 + 0x18);
  fVar13 = fVar2 - GameCamera.posX;
  fVar14 = fVar3 - GameCamera.posZ;
  fVar11 = 0.0;
  (part->pos).w = *(float *)(iVar5 + 0x1c);
  iVar5 = DAT_00a528a0;
  uVar6 = part->update[2];
  fVar8 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar9 * fVar9);
  fVar15 = fVar15 / fVar8;
  fVar12 = fVar11;
  if (0.0 - fVar8 < 0.0) {
    fVar12 = fVar15 * fVar14;
  }
  fVar10 = fVar11;
  if (0.0 - fVar8 < 0.0) {
    fVar10 = fVar15 * fVar9;
  }
  if (0.0 - fVar8 < 0.0) {
    fVar11 = fVar15 * fVar13;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar12 = fVar15 * fVar14;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar10 = fVar15 * fVar9;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar11 = fVar15 * fVar13;
  }
  (part->pos).z = fVar3 + fVar12;
  (part->pos).y = fVar1 + fVar10;
  (part->pos).x = fVar2 + fVar11;
  iVar16 = fastfunc::FastDoubleToInt
                     ((double)(longlong)
                              (int)(((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)))
  ;
  iVar17 = part->update[2] + 1;
  sVar4 = part->timer;
  part->tex = *(byte *)(iVar5 + iVar16);
  part->update[2] = iVar17;
  if (0x1e < iVar17) {
    part->update[2] = 0;
  }
  if (sVar4 == 0) {
    partproc::DeletePart(part);
  }
  return;
}



//==== 0012c320  ns=partupd  size=0x2ac
// sig: undefined SpawnPart_40(void)
// callers(2): 0012c638 partupd::UpdatePart_40; 00428f88 mobyupdate_unsorted::UpdateMoby_702
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 40 */

longlong partupd::SpawnPart_40(float *param_1,int *param_2,byte param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  PartInstance *pPVar5;
  uint uVar6;
  char cVar8;
  int iVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pPVar5 = partproc::CreatePart(0x28);
  if (pPVar5 != (PartInstance *)0x0) {
    (pPVar5->pos).x = *param_1;
    (pPVar5->pos).y = param_1[1];
    (pPVar5->pos).z = param_1[2];
    (pPVar5->pos).w = param_1[3];
    pPVar5->update[0] = *param_2;
    pPVar5->update[1] = param_2[1];
    pPVar5->update[2] = param_2[2];
    pPVar5->update[3] = param_2[3];
    uVar6 = mobyutil::Float_To_RGBA(0.7,0.7,0.7,0.08);
    pPVar5->color = uVar6;
    cVar8 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar5->drawDist = cVar8 + '@';
    pPVar5->gsAlpha = 0x44;
    pPVar5->type = 0;
    dVar9 = (double)mobyutil::MB_randRot();
    pPVar5->update[4] = (int)(float)dVar9;
    pPVar5->rot = (char)(int)(dVar9 * 256.0);
    iVar1 = DAT_00a52834;
    uVar6 = rand();
    bVar2 = *(byte *)(iVar1 + (uVar6 & 7));
    *(byte *)(pPVar5->update + 6) = param_3;
    pPVar5->tex = bVar2;
    *(undefined2 *)(pPVar5->update + 5) = 0;
    *(undefined2 *)((int)pPVar5->update + 0x16) = 0;
    dVar11 = 8.0;
    dVar9 = 0.4429999887943268;
    if (param_3 < 5) {
      dVar10 = (double)mobyutil::MB_randRangeFloat(7000.0,10000.0);
      pPVar5->scale = (float)dVar10;
      iVar7 = rand();
      iVar1 = (int)(dVar11 / (double)(float)((double)DAT_0071f408 * dVar9));
      iVar4 = iVar1 * 6;
      pPVar5->timer =
           (short)iVar1 -
           ((short)iVar7 -
           (short)(iVar7 / (iVar4 / 7)) *
           (((short)(iVar4 / 7) + (short)(iVar4 >> 0x1f)) -
           (short)((longlong)iVar4 * 0x92492493 >> 0x3f)));
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      pPVar5->scale = 10000.0;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x18,0x12c2f8);
      auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar14 = ZEXT416(0xffffffff);
      auVar18 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar12 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar15);
      auVar14 = ZEXT416(0xffffffff);
      auVar19 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar13 = loadVectorLeftIndexed(0x20,0x12c2f8);
      auVar14 = ZEXT416(0xffffffff);
      auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorReciprocalEstimateFloatingPoint(auVar12);
      auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
      auVar16 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar14 = loadVectorLeftIndexed(0x14,0x12c2f8);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar19,auVar17);
      auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar15,auVar12,auVar16);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar18);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = vectorSplatHalfWord(auVar14,1);
      sVar3 = storeVectorElementHalfWordIndexed(auVar14,10,(longlong)(int)pPVar5);
      pPVar5->timer = sVar3;
    }
    pPVar5->update[7] = param_4;
  }
  return (longlong)(int)pPVar5;
}



//==== 0012c638  ns=partupd  size=0xaa8
// sig: undefined UpdatePart_40(PartInstance * part)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6ec partproc::DeletePart; 0012c320 partupd::SpawnPart_40; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 40 */

void partupd::UpdatePart_40(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar15;
  undefined8 uVar13;
  ulonglong uVar14;
  byte in_cr6;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [72];
  
  lVar12 = (longlong)(int)part;
  if ((part->timer != 0) && (iVar15 = fastfunc::FastDecTimerS16(lVar12 + 10), iVar15 != 0)) {
    fVar2 = part->scale;
    *(byte *)(part->update + 6) = *(byte *)(part->update + 6) | 0x88;
    dVar17 = (double)(fVar2 * 1.1111111e-06);
    part->scale = fVar2 * 0.8;
    dVar18 = 0.5;
    dVar19 = 0.699999988079071;
    mobyutil::MB_randRangeFloat(0.5,0.7);
    dVar20 = -dVar17;
    mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    dVar21 = -0.20000000298023224;
    dVar22 = 0.20000000298023224;
    mobyutil::MB_randRangeFloat((float)part->update[0] * -0.2,(float)part->update[0] * 0.2);
    mobyutil::MB_randRangeFloat
              ((float)((double)(float)part->update[1] * dVar21),
               (float)((double)(float)part->update[1] * dVar22));
    dVar23 = 0.0;
    mobyutil::MB_randRangeFloat((float)((double)(float)part->update[2] * dVar21),0.0);
    uVar13 = SpawnPart_40(local_d0,local_e0,0x88,part->update[7]);
    iVar15 = (int)uVar13;
    if (iVar15 != 0) {
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(0x1c,0x12c5cc);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar27,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = vectorSplatHalfWord(auVar24,1);
      uVar10 = storeVectorElementHalfWordIndexed(auVar24,10,uVar13);
      *(undefined2 *)(iVar15 + 10) = uVar10;
      *(float *)(iVar15 + 0xc) = part->scale;
    }
    dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar19);
    fVar3 = (float)part->update[1];
    fVar2 = (float)((double)(float)part->update[0] * dVar18);
    dVar19 = (double)fVar2;
    fVar4 = (float)part->update[2];
    part->update[0] = (int)fVar2;
    part->update[1] = (int)(float)((double)fVar3 * dVar18);
    part->update[2] = (int)(float)((double)fVar4 * dVar18);
    dVar18 = (double)mobyutil::MB_randRangeFloat((float)(dVar19 * dVar21),(float)(dVar19 * dVar22));
    fVar2 = (float)part->update[1];
    part->update[0] = (int)(float)((double)(float)part->update[0] + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)fVar2 * dVar21),(float)((double)fVar2 * dVar22));
    part->update[1] = (int)(float)((double)(float)part->update[1] + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)(float)part->update[2] * dVar21),(float)dVar23);
    part->update[2] = (int)(float)((double)(float)part->update[2] + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    (part->pos).x = (float)((double)(part->pos).x + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    (part->pos).y = (float)((double)(part->pos).y + dVar18);
    dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar17);
    (part->pos).z = (float)((double)(part->pos).z + dVar17);
  }
  fVar2 = (part->pos).x;
  fVar3 = (float)part->update[0];
  fVar4 = (part->pos).y;
  fVar5 = (part->pos).z;
  fVar6 = (float)part->update[1];
  part->tex = DAT_00a52834
              [(uint)(ushort)part->timer + (uint)*(ushort *)((int)part->update + 0x16) +
               ((uint)part->tex - (uint)*DAT_00a52834) & 7];
  fVar7 = (part->pos).w;
  fVar8 = (float)part->update[2];
  if ((*(byte *)(part->update + 6) & 8) == 0) {
    iVar15 = collproc::CollLine(local_b0,local_c0,0,part->update[7],local_a0);
  }
  else {
    if ((part->color & 0xff000000) == 0) {
      partproc::DeletePart(lVar12);
      return;
    }
    *(byte *)(part->update + 6) = *(byte *)(part->update + 6) | 8;
    iVar15 = collproc::CollLine(local_b0,local_c0,4,part->update[7],0);
  }
  if (iVar15 == 0) {
    (part->pos).x = fVar2 + fVar3;
    (part->pos).y = fVar4 + fVar6;
    (part->pos).z = fVar5 + fVar8;
    (part->pos).w = fVar7;
  }
  else {
    dVar18 = 0.0;
    fastfunc::FastVecNormalize(lVar12 + 0x20,lVar12 + 0x20,0xa10980);
    fVar2 = (float)part->update[1];
    fVar3 = (float)part->update[2];
    part->update[0] = (int)((float)part->update[0] * 0.02);
    part->update[1] = (int)(fVar2 * 0.02);
    part->update[2] = (int)(fVar3 * 0.02);
    fVar7 = CollOutput.normal.z;
    fVar6 = CollOutput.normal.y;
    fVar5 = CollOutput.normal.x;
    dVar19 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                          CollOutput.normal.x * CollOutput.normal.x +
                          CollOutput.normal.y * CollOutput.normal.y);
    dVar20 = (double)CollOutput.ip.x;
    dVar21 = (double)CollOutput.ip.y;
    dVar22 = (double)CollOutput.ip.z;
    (part->pos).w = CollOutput.ip.w;
    fVar4 = part->scale;
    fVar3 = part->scale;
    uVar9 = (int)fVar4 >> 0x1f;
    bVar1 = *(byte *)(part->update + 6);
    fVar2 = (float)(0.054999999701976776 / dVar19);
    dVar17 = dVar18;
    if (dVar18 - dVar19 < 0.0) {
      dVar17 = (double)(fVar7 * fVar2);
    }
    dVar23 = dVar18;
    if (dVar18 - dVar19 < 0.0) {
      dVar23 = (double)(fVar6 * fVar2);
    }
    dVar16 = dVar18;
    if (dVar18 - dVar19 < 0.0) {
      dVar16 = (double)(fVar5 * fVar2);
    }
    if (dVar19 - dVar18 < 0.0) {
      dVar17 = (double)(fVar7 * fVar2);
    }
    if (dVar19 - dVar18 < 0.0) {
      dVar23 = (double)(fVar6 * fVar2);
    }
    if (dVar19 - dVar18 < 0.0) {
      dVar16 = (double)(fVar5 * fVar2);
    }
    (part->pos).z = (float)(dVar22 + dVar17);
    (part->pos).y = (float)(dVar21 + dVar23);
    (part->pos).x = (float)(dVar20 + dVar16);
    if (((int)((uVar9 >> 1 ^ (uint)fVar4) - uVar9) < 0x48435000) && ((bVar1 & 8) == 0)) {
      part->scale = fVar3 * 2.0;
    }
    *(byte *)(part->update + 6) = bVar1 | 8;
  }
  if ((part->update[6] & 0x8000000) == 0) {
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = loadVectorLeftIndexed(0x34,0x12c5cc);
    auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar24 = ZEXT416(0xffffffff);
    auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar27);
    auVar24 = loadVectorLeftIndexed(0x30,0x12c5cc);
    auVar28 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar32 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorReciprocalEstimateFloatingPoint(auVar27);
    auVar25 = loadVectorLeftIndexed(0x38,0x12c5cc);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar27,auVar26);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar30,auVar28);
    auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar27,auVar26);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar31);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar27,auVar26);
    auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar30);
    auVar24 = ZEXT416(0xffffffff);
    auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar30 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar32);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar32 = loadVectorLeftIndexed(0xc,lVar12);
    auVar25 = loadVectorLeftIndexed(0x3c,0x12c5cc);
    auVar33 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
    auVar27 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = vectorReciprocalEstimateFloatingPoint(auVar27);
    auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar27,auVar26);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar31,auVar28);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar27,auVar26);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar30);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar27,auVar26);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar33);
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar31);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar29,auVar32);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0xc,lVar12);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar11;
  }
  else {
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    *(short *)((int)part->update + 0x16) = *(short *)((int)part->update + 0x16) + 1;
    auVar24 = loadVectorLeftIndexed(0x34,0x12c5cc);
    auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar24 = ZEXT416(0xffffffff);
    auVar29 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar27);
    auVar24 = loadVectorLeftIndexed(0x30,0x12c5cc);
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar25 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar34 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar30 = vectorReciprocalEstimateFloatingPoint(auVar27);
    auVar24 = loadVectorLeftIndexed(0x38,0x12c5cc);
    auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = ZEXT416(0xffffffff);
    auVar36 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
    auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar24,auVar29);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar27,auVar28);
    auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar24,auVar32);
    auVar24 = ZEXT416(0xffffffff);
    auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar27,auVar28);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar29,auVar24,auVar34);
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar27 = loadVectorLeftIndexed(0x3c,0x12c5cc);
    auVar35 = loadVectorLeftIndexed(0xc,lVar12);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar31);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar37 = loadVectorLeftIndexed(0x40,0x12c5cc);
    auVar31 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar29 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = vectorReciprocalEstimateFloatingPoint(auVar29);
    auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar29,auVar28);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar30);
    auVar32 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar29,auVar28);
    auVar30 = vectorMultiplyAddFloatingPoint(auVar25,auVar24,auVar31);
    auVar25 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = ZEXT416(0);
    auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar29,auVar28);
    auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar33);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                         auVar32);
    auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar26,auVar34);
    auVar25 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar35);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    uVar11 = storeVectorElementWordIndexed(auVar25,0xc,lVar12);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar11;
    if ((bool)(in_cr6 >> 1 & 1)) {
      partproc::DeletePart(lVar12);
      return;
    }
  }
  dVar22 = 0.4429999887943268;
  dVar20 = 8.0;
  dVar18 = 0.07999999821186066;
  dVar19 = (double)((float)(0.07999999821186066 / (double)(longlong)(8.0 / (DAT_0071f408 * 0.443)))
                   * DAT_0071f408);
  dVar17 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 5));
  dVar21 = 0.0;
  uVar9 = part->color;
  dVar17 = (double)(float)(dVar19 * (double)(float)(dVar17 / (double)(longlong)
                                                                     (dVar20 / (double)(float)((
                                                  double)DAT_0071f408 * dVar22))) + dVar18);
  if (dVar17 - 0.0 < 0.0) {
    dVar17 = dVar21;
  }
  if (dVar18 - dVar17 < 0.0) {
    dVar17 = dVar18;
  }
  if ((part->update[6] & 0x8000000) != 0) {
    dVar17 = (double)(float)(dVar17 / (double)((float)(longlong)
                                                      (int)*(short *)((int)part->update + 0x16) *
                                               0.14285715 + 1.0));
  }
  dVar18 = 256.0;
  uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 256.0));
  fVar2 = (float)part->update[2];
  part->color = (uint)((uVar14 & 0xffffffff) << 0x18) | uVar9 & 0xffffff;
  fVar2 = DAT_0071f40c * 0.008 + fVar2;
  fVar3 = (float)part->update[0];
  fVar4 = (float)part->update[1];
  iVar15 = part->update[6];
  part->update[2] = (int)fVar2;
  if (((int)(animationSpeed * 25.5) < (int)*(short *)(part->update + 5)) ||
     ((iVar15 & 0x8000000) != 0)) {
    part->update[0] = (int)(fVar3 * 0.95);
    part->update[1] = (int)(fVar4 * 0.95);
  }
  fVar3 = -1.0;
  if ((iVar15 & 0x1000000) != 0) {
    fVar3 = 1.0;
  }
  dVar17 = (double)fVar3;
  dVar19 = -0.009999999776482582;
  if ((iVar15 & 0x8000000) == 0) {
    dVar20 = (double)(DAT_0071f408 * -0.01) * dVar17 + (double)(float)part->update[4];
  }
  else {
    dVar20 = (double)(float)part->update[4];
    part->update[2] = (int)(DAT_0071f40c * 0.008 + fVar2);
    dVar22 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)part->update + 0x16));
    dVar20 = dVar20 + (double)(float)((double)(float)((double)(float)((double)DAT_0071f408 * dVar19)
                                                     * dVar17) / dVar22);
  }
  dVar17 = (double)(float)dVar20;
  part->update[4] = (int)(float)dVar20;
  if (1.0 < dVar17) {
    dVar19 = dVar17 - 1.0;
    dVar17 = (double)(float)dVar19;
    part->update[4] = (int)(float)dVar19;
  }
  if (dVar17 < dVar21) {
    dVar19 = dVar17 + 1.0;
    dVar17 = (double)(float)dVar19;
    part->update[4] = (int)(float)dVar19;
  }
  part->rot = (char)(int)(dVar17 * dVar18);
  return;
}



//==== 0012d0e8  ns=partupd  size=0x174
// sig: undefined SpawnPart_41(float param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined2 param_8, undefined1 param_9)
// callers(11): 00136390 path::DrawPathDebug; 0013a440 path::Spline_CalcLen; 0018d608 mobyupdate_unsorted::UpdateMoby_{1024_1302}; 001ed7a8 mobyupdate_unsorted::UpdateMoby_1174; 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 0042fc90 mobyupdate_unsorted::UpdateMoby_713; 0046e420 mobyupdate_unsorted::UpdateMoby_816; 0048f650 mobyupdate_unsorted::UpdateMoby_856; 00490188 mobyupdate_helpers::M857_00490188; 004c6b80 mobyupdate_helpers::M945_004c6b80
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 41 */

PartInstance *
partupd::SpawnPart_41
          (float param_1,float *param_2,int param_3,int param_4,uint param_5,undefined8 param_6,
          uint param_7,short param_8,byte param_9)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar3;
  double dVar4;
  
  dVar4 = (double)param_1;
  pPVar2 = partproc::CreatePart(0x29);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_2;
    (pPVar2->pos).y = param_2[1];
    fVar1 = param_2[2];
    pPVar2->color = param_5;
    (pPVar2->pos).z = fVar1;
    (pPVar2->pos).w = param_2[3];
    if (param_9 == 0xff) {
      cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
      pPVar2->drawDist = ((byte)(param_7 >> 1) & 0x70) + cVar3;
      pPVar2->gsAlpha = ((byte)((LZCOUNT(-(param_7 & 1)) << 0x3a) >> 0x3f) & 0xfc) + 0x48;
    }
    else {
      pPVar2->drawDist = (char)param_7;
      pPVar2->gsAlpha = param_9;
    }
    pPVar2->type = 0;
    pPVar2->tex = *(byte *)(DAT_00a528a8 + param_4);
    pPVar2->timer = param_8;
    pPVar2->rot = -0x60;
    pPVar2->update[0] = param_3;
    pPVar2->scale = (float)(dVar4 * 210000.0);
  }
  return pPVar2;
}



//==== 0012d25c  ns=partupd  size=0x58
// sig: undefined UpdatePart_41(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 41 */

void partupd::UpdatePart_41(PartInstance *part)

{
  int iVar1;
  
  if (part->timer != -1) {
    iVar1 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
    if (iVar1 != 0) {
      partproc::DeletePart((longlong)(int)part);
    }
  }
  return;
}



//==== 0012d2e0  ns=partupd  size=0x2b4
// sig: undefined SpawnPart_42(void)
// callers(2): 0012d5f8 partupd::UpdatePart_42; 004c74b0 mobyupdate_unsorted::UpdateMoby_978
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 42 */

longlong partupd::SpawnPart_42(float *param_1,int *param_2,byte param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  PartInstance *pPVar5;
  uint uVar6;
  char cVar8;
  int iVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pPVar5 = partproc::CreatePart(0x2a);
  if (pPVar5 != (PartInstance *)0x0) {
    (pPVar5->pos).x = *param_1;
    (pPVar5->pos).y = param_1[1];
    (pPVar5->pos).z = param_1[2];
    (pPVar5->pos).w = param_1[3];
    pPVar5->update[0] = *param_2;
    pPVar5->update[1] = param_2[1];
    pPVar5->update[2] = param_2[2];
    pPVar5->update[3] = param_2[3];
    uVar6 = mobyutil::Float_To_RGBA(0.7,0.7,0.7,0.08);
    pPVar5->color = uVar6;
    cVar8 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar5->drawDist = cVar8 + '@';
    pPVar5->gsAlpha = 0x44;
    pPVar5->type = 0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pPVar5->update[4] = (int)(float)dVar9;
    pPVar5->rot = (char)(int)(dVar9 * 256.0);
    iVar1 = DAT_00a52834;
    uVar6 = rand();
    bVar2 = *(byte *)(iVar1 + (uVar6 & 7));
    *(byte *)(pPVar5->update + 6) = param_3;
    pPVar5->tex = bVar2;
    *(undefined2 *)(pPVar5->update + 5) = 0;
    *(undefined2 *)((int)pPVar5->update + 0x16) = 0;
    dVar9 = 0.4429999887943268;
    dVar11 = 8.0;
    if (param_3 < 5) {
      dVar10 = (double)mobyutil::MB_randRangeFloat(7000.0,10000.0);
      pPVar5->scale = (float)dVar10;
      iVar7 = rand();
      iVar1 = (int)(dVar11 / (double)(float)((double)DAT_0071f408 * dVar9));
      iVar4 = iVar1 * 6;
      pPVar5->timer =
           (short)iVar1 -
           ((short)iVar7 -
           (short)(iVar7 / (iVar4 / 7)) *
           (((short)(iVar4 / 7) + (short)(iVar4 >> 0x1f)) -
           (short)((longlong)iVar4 * 0x92492493 >> 0x3f)));
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      pPVar5->scale = 10000.0;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x1c,0x12d2b4);
      auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar14 = ZEXT416(0xffffffff);
      auVar18 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar12 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar15);
      auVar14 = ZEXT416(0xffffffff);
      auVar19 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar13 = loadVectorLeftIndexed(0x28,0x12d2b4);
      auVar14 = ZEXT416(0xffffffff);
      auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorReciprocalEstimateFloatingPoint(auVar12);
      auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
      auVar16 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar14 = loadVectorLeftIndexed(0x20,0x12d2b4);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar19,auVar17);
      auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar12,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar15,auVar12,auVar16);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar18);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = vectorSplatHalfWord(auVar14,1);
      sVar3 = storeVectorElementHalfWordIndexed(auVar14,10,(longlong)(int)pPVar5);
      pPVar5->timer = sVar3;
    }
    pPVar5->update[7] = param_4;
  }
  return (longlong)(int)pPVar5;
}



//==== 0012d5f8  ns=partupd  size=0x96c
// sig: undefined UpdatePart_42(PartInstance * part)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6ec partproc::DeletePart; 0012d2e0 partupd::SpawnPart_42; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 42 */

void partupd::UpdatePart_42(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar14;
  undefined8 uVar12;
  ulonglong uVar13;
  byte in_cr6;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [64];
  
  lVar11 = (longlong)(int)part;
  if ((part->timer != 0) && (iVar14 = fastfunc::FastDecTimerS16(lVar11 + 10), iVar14 != 0)) {
    fVar1 = part->scale;
    *(byte *)(part->update + 6) = *(byte *)(part->update + 6) | 0x88;
    dVar15 = (double)(fVar1 * 1.1111111e-06);
    part->scale = fVar1 * 0.8;
    dVar16 = 0.5;
    dVar17 = 0.699999988079071;
    mobyutil::MB_randRangeFloat(0.5,0.7);
    dVar18 = -dVar15;
    mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    dVar19 = -0.20000000298023224;
    dVar20 = 0.20000000298023224;
    mobyutil::MB_randRangeFloat((float)part->update[0] * -0.2,(float)part->update[0] * 0.2);
    mobyutil::MB_randRangeFloat
              ((float)((double)(float)part->update[1] * dVar19),
               (float)((double)(float)part->update[1] * dVar20));
    dVar21 = 0.0;
    mobyutil::MB_randRangeFloat((float)((double)(float)part->update[2] * dVar19),0.0);
    uVar12 = SpawnPart_42(local_c0,local_d0,0x88,part->update[7]);
    iVar14 = (int)uVar12;
    if (iVar14 != 0) {
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0x1c,0x12d594);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                           auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = vectorSplatHalfWord(auVar22,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar22,10,uVar12);
      *(undefined2 *)(iVar14 + 10) = uVar9;
      *(float *)(iVar14 + 0xc) = part->scale;
    }
    dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    fVar2 = (float)part->update[1];
    fVar1 = (float)((double)(float)part->update[0] * dVar16);
    dVar17 = (double)fVar1;
    fVar3 = (float)part->update[2];
    part->update[0] = (int)fVar1;
    part->update[1] = (int)(float)((double)fVar2 * dVar16);
    part->update[2] = (int)(float)((double)fVar3 * dVar16);
    dVar16 = (double)mobyutil::MB_randRangeFloat((float)(dVar17 * dVar19),(float)(dVar17 * dVar20));
    fVar1 = (float)part->update[1];
    part->update[0] = (int)(float)((double)(float)part->update[0] + dVar16);
    dVar16 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)fVar1 * dVar19),(float)((double)fVar1 * dVar20));
    part->update[1] = (int)(float)((double)(float)part->update[1] + dVar16);
    dVar16 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)(float)part->update[2] * dVar19),(float)dVar21);
    part->update[2] = (int)(float)((double)(float)part->update[2] + dVar16);
    dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    (part->pos).x = (float)((double)(part->pos).x + dVar16);
    dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    (part->pos).y = (float)((double)(part->pos).y + dVar16);
    dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
    (part->pos).z = (float)((double)(part->pos).z + dVar15);
  }
  fVar1 = (part->pos).x;
  fVar2 = (float)part->update[0];
  fVar3 = (part->pos).y;
  fVar4 = (part->pos).z;
  fVar5 = (float)part->update[1];
  part->tex = DAT_00a52834
              [(uint)(ushort)part->timer + (uint)*(ushort *)((int)part->update + 0x16) +
               ((uint)part->tex - (uint)*DAT_00a52834) & 7];
  fVar6 = (part->pos).w;
  fVar7 = (float)part->update[2];
  if ((*(byte *)(part->update + 6) & 8) == 0) {
    iVar14 = mobyutil::MB_randInt(3);
    if (iVar14 == 0) {
      iVar14 = collproc::CollLine(local_a0,local_b0,0,part->update[7],local_90);
      goto LAB_0012da88;
    }
  }
  else {
    if ((part->color & 0xff000000) == 0) {
      partproc::DeletePart(lVar11);
      return;
    }
    *(byte *)(part->update + 6) = *(byte *)(part->update + 6) | 8;
    iVar14 = mobyutil::MB_randInt(3);
    if (iVar14 == 0) {
      iVar14 = collproc::CollLine(local_a0,local_b0,0,part->update[7],0);
LAB_0012da88:
      if (iVar14 != 0) {
        *(byte *)(part->update + 6) = *(byte *)(part->update + 6) | 8;
        goto LAB_0012dac0;
      }
    }
  }
  (part->pos).x = fVar1 + fVar2;
  (part->pos).y = fVar3 + fVar5;
  (part->pos).z = fVar4 + fVar7;
  (part->pos).w = fVar6;
LAB_0012dac0:
  if ((part->update[6] & 0x8000000) == 0) {
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = loadVectorLeftIndexed(0x28,0x12d594);
    auVar23 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar22 = ZEXT416(0xffffffff);
    auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar26);
    auVar22 = loadVectorLeftIndexed(0x30,0x12d594);
    auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar28 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar31 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorReciprocalEstimateFloatingPoint(auVar24);
    auVar23 = loadVectorLeftIndexed(0x2c,0x12d594);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar24,auVar27);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar22,auVar30,auVar26);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar30 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar24,auVar27);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar26,auVar22,auVar28);
    auVar22 = ZEXT416(0xffffffff);
    auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar32 = loadVectorLeftIndexed(0xc,lVar11);
    auVar22 = loadVectorLeftIndexed(0x34,0x12d594);
    auVar26 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar27);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar22,auVar31);
    auVar28 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar30);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar30 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar22 = vectorReciprocalEstimateFloatingPoint(auVar23);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar23,auVar27);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar22,auVar24,auVar28);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar28 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar27);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar30);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar27);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar29);
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                         auVar28);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar25,auVar32);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar10 = storeVectorElementWordIndexed
                       (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0xc,lVar11);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar10;
  }
  else {
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    *(short *)((int)part->update + 0x16) = *(short *)((int)part->update + 0x16) + 1;
    auVar22 = loadVectorLeftIndexed(0x28,0x12d594);
    auVar23 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar22 = ZEXT416(0xffffffff);
    auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar26);
    auVar22 = loadVectorLeftIndexed(0x30,0x12d594);
    auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorReciprocalEstimateFloatingPoint(auVar24);
    auVar23 = loadVectorLeftIndexed(0x2c,0x12d594);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar24,auVar27);
    auVar26 = loadVectorLeftIndexed(0x34,0x12d594);
    auVar33 = loadVectorLeftIndexed(0xc,lVar11);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = vectorMultiplyAddFloatingPoint(auVar22,auVar30,auVar28);
    auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar27);
    auVar34 = loadVectorLeftIndexed(0x38,0x12d594);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar22,auVar29);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar27);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar22,auVar30);
    auVar22 = ZEXT416(0xffffffff);
    auVar28 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar30 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar32);
    auVar22 = ZEXT416(0xffffffff);
    auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar22 = vectorReciprocalEstimateFloatingPoint(auVar24);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar24,auVar27);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar22,auVar23,auVar28);
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar24,auVar27);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar23,auVar22,auVar30);
    auVar23 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar27);
    auVar22 = ZEXT416(0);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar32);
    auVar26 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                         auVar29);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar31);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar26,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar33);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    uVar10 = storeVectorElementWordIndexed(auVar23,0xc,lVar11);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar10;
    if ((bool)(in_cr6 >> 1 & 1)) {
      partproc::DeletePart(lVar11);
      return;
    }
  }
  dVar20 = 0.4429999887943268;
  dVar18 = 8.0;
  dVar16 = 0.07999999821186066;
  dVar17 = (double)((float)(0.07999999821186066 / (double)(longlong)(8.0 / (DAT_0071f408 * 0.443)))
                   * DAT_0071f408);
  dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 5));
  dVar19 = 0.0;
  uVar8 = part->color;
  dVar15 = (double)(float)(dVar17 * (double)(float)(dVar15 / (double)(longlong)
                                                                     (dVar18 / (double)(float)((
                                                  double)DAT_0071f408 * dVar20))) + dVar16);
  if (dVar15 - 0.0 < 0.0) {
    dVar15 = dVar19;
  }
  if (dVar16 - dVar15 < 0.0) {
    dVar15 = dVar16;
  }
  if ((part->update[6] & 0x8000000) != 0) {
    dVar15 = (double)(float)(dVar15 / (double)((float)(longlong)
                                                      (int)*(short *)((int)part->update + 0x16) *
                                               0.14285715 + 1.0));
  }
  dVar16 = 256.0;
  uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * 256.0));
  fVar1 = (float)part->update[2];
  part->color = (uint)((uVar13 & 0xffffffff) << 0x18) | uVar8 & 0xffffff;
  fVar1 = DAT_0071f40c * 0.008 + fVar1;
  fVar2 = (float)part->update[0];
  fVar3 = (float)part->update[1];
  iVar14 = part->update[6];
  part->update[2] = (int)fVar1;
  if (((int)(animationSpeed * 25.5) < (int)*(short *)(part->update + 5)) ||
     ((iVar14 & 0x8000000) != 0)) {
    part->update[0] = (int)(fVar2 * 0.95);
    part->update[1] = (int)(fVar3 * 0.95);
  }
  fVar2 = -1.0;
  if ((iVar14 & 0x1000000) != 0) {
    fVar2 = 1.0;
  }
  dVar15 = (double)fVar2;
  dVar17 = -0.009999999776482582;
  if ((iVar14 & 0x8000000) == 0) {
    dVar18 = (double)(DAT_0071f408 * -0.01) * dVar15 + (double)(float)part->update[4];
  }
  else {
    dVar18 = (double)(float)part->update[4];
    part->update[2] = (int)(DAT_0071f40c * 0.008 + fVar1);
    dVar20 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)part->update + 0x16));
    dVar18 = dVar18 + (double)(float)((double)(float)((double)(float)((double)DAT_0071f408 * dVar17)
                                                     * dVar15) / dVar20);
  }
  dVar15 = (double)(float)dVar18;
  part->update[4] = (int)(float)dVar18;
  if (1.0 < dVar15) {
    dVar17 = dVar15 - 1.0;
    dVar15 = (double)(float)dVar17;
    part->update[4] = (int)(float)dVar17;
  }
  if (dVar15 < dVar19) {
    dVar17 = dVar15 + 1.0;
    dVar15 = (double)(float)dVar17;
    part->update[4] = (int)(float)dVar17;
  }
  part->rot = (char)(int)(dVar15 * dVar16);
  return;
}



//==== 0012df70  ns=partupd  size=0x1e0
// sig: undefined SpawnPart_43(void)
// callers(1): 0040c3f0 mobyupdate_helpers::M671_0040c3f0
// callees(3): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 43 */

longlong partupd::SpawnPart_43
                   (double param_1,int param_2,float *param_3,int *param_4,undefined8 param_5,
                   undefined4 param_6,byte param_7,byte param_8,byte param_9)

{
  undefined2 uVar1;
  PartInstance *pPVar2;
  char cVar4;
  int iVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_stack_00000077;
  
  auVar7._0_4_ = param_6;
  auVar7._4_4_ = param_6;
  auVar7._8_4_ = param_6;
  auVar7._12_4_ = param_6;
  pPVar2 = partproc::CreatePart(0x2b);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    (pPVar2->pos).z = param_3[2];
    (pPVar2->pos).w = param_3[3];
    pPVar2->update[0] = *param_4;
    pPVar2->update[1] = param_4[1];
    pPVar2->update[2] = param_4[2];
    iVar3 = param_4[3];
    *(byte *)(pPVar2->update + 5) = param_7;
    pPVar2->update[3] = iVar3;
    *(byte *)((int)pPVar2->update + 0x15) = param_8;
    *(byte *)((int)pPVar2->update + 0x16) = param_9;
    *(undefined1 *)((int)pPVar2->update + 0x17) = in_stack_00000077;
    pPVar2->color = (uint)param_9 << 0x10 | (uint)param_8 << 8 | (uint)param_7;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 0;
    iVar3 = rand();
    auVar6 = ZEXT416(0xfffffff0);
    auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pPVar2->rot = (char)iVar3;
    auVar6 = ZEXT416(0xffffffff);
    auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar5);
    auVar7 = vectorShiftRightAlgebraicWord(auVar7,auVar5);
    auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
    pPVar2->tex = *DAT_00a528b0;
    pPVar2->timer = 0;
    pPVar2->scale = (float)param_1;
    auVar7 = loadVectorLeftIndexed(4,0x12df64);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorAddFloatingPoint
                       (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar6 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar6);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar1 = storeVectorElementHalfWordIndexed(auVar7,0x38,(longlong)(int)pPVar2);
    *(undefined2 *)(pPVar2->update + 6) = uVar1;
    pPVar2->update[4] = param_2;
  }
  return (longlong)(int)pPVar2;
}



//==== 0012e168  ns=partupd  size=0x274
// sig: undefined UpdatePart_43(PartInstance * part)
// callers(0): 
// callees(3): 0011e6ec partproc::DeletePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 43 */

void partupd::UpdatePart_43(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar10;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  sVar6 = *(short *)(part->update + 6);
  sVar11 = part->timer + 1;
  part->timer = sVar11;
  if (sVar6 < sVar11) {
    partproc::DeletePart(part);
  }
  else {
    dVar12 = (double)fastfunc::FastIntToDouble(sVar11);
    dVar13 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 6));
    dVar14 = 1.0;
    dVar15 = (double)(float)(1.0 - (double)(float)(dVar12 / dVar13));
    dVar12 = (double)fastfunc::FastIntToDouble
                               ((double)(float)(dVar12 / dVar13),*(undefined1 *)(part->update + 5));
    uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * -0.0010000000474974513 + dVar12));
    dVar12 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x15));
    uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * -0.0010999999940395355 + dVar12));
    dVar12 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x16));
    uVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * -0.0011099999537691474 + dVar12));
    dVar12 = 30.5;
    if ((int)part->timer < (int)(animationSpeed * 30.5)) {
      dVar13 = (double)fastfunc::FastIntToDouble();
      dVar12 = (double)fastfunc::FastIntToDouble((int)((double)animationSpeed * dVar12));
      dVar13 = (double)(float)(dVar13 / dVar12);
      dVar12 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)part->update + 0x17));
      uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * dVar13));
    }
    else {
      dVar13 = (double)fastfunc::FastIntToDouble((int)part->timer - (int)(animationSpeed * 30.5));
      dVar12 = (double)fastfunc::FastIntToDouble
                                 ((int)*(short *)(part->update + 6) -
                                  (int)((double)animationSpeed * dVar12));
      dVar14 = (double)(float)(dVar14 - (double)(float)(dVar13 / dVar12));
      dVar12 = (double)fastfunc::FastIntToDouble
                                 ((double)(float)(dVar13 / dVar12),
                                  *(undefined1 *)((int)part->update + 0x17));
      uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * dVar14));
    }
    fVar1 = (part->pos).x;
    fVar2 = (part->pos).y;
    fVar3 = (float)part->update[1];
    fVar4 = (part->pos).z;
    fVar5 = (float)part->update[2];
    part->color = (uint)((uVar9 & 0xffffffff) << 0x18) |
                  (uint)((uVar8 & 0xffffffff) << 0x10) & 0xff0000 |
                  (uint)((uVar7 & 0xffffffff) << 8) & 0xff00 | uVar10 & 0xff;
    part->rot = part->rot + '\x01';
    (part->pos).x = fVar1 + (float)part->update[0];
    (part->pos).y = fVar2 + fVar3;
    (part->pos).z = fVar4 + fVar5;
    part->update[2] = (int)(DAT_0071f40c * 0.0005 + fVar5);
  }
  return;
}



//==== 0012e3e8  ns=partupd  size=0x1d0
// sig: undefined SpawnPart_44(void)
// callers(14): 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 001ff4d0 mobyupdate_unsorted::UpdateMoby_1208; 00216c60 mobyupdate_unsorted::UpdateMoby_1233; 002746a8 mobyupdate_helpers::M1422_002746a8; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 0029e140 mobyupdate_helpers::M157_0029e140; 0029e578 mobyupdate_helpers::M157_0029e578; 00334d40 mobyupdate_unsorted::UpdateMoby_295; 003658b0 mobyupdate_unsorted::UpdateMoby_41; 003ba908 mobyupdate_helpers::M564_003ba908; 00471bd0 mobyupdate_unsorted::UpdateMoby_82
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 44 */

PartInstance *
partupd::SpawnPart_44
          (double param_1,double param_2,double param_3,double param_4,double param_5,float *param_6
          ,int *param_7,short param_8,ulonglong param_9,uint param_10,int param_11)

{
  float fVar1;
  int iVar2;
  PartInstance *pPVar3;
  char cVar4;
  undefined1 uVar5;
  
  pPVar3 = partproc::CreatePart(0x2c);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_6;
    (pPVar3->pos).y = param_6[1];
    fVar1 = param_6[2];
    (pPVar3->pos).w = (float)param_5;
    (pPVar3->pos).z = fVar1;
    pPVar3->color = (uint)((param_9 & 0xffffffff) << 0x18) | param_10;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar4 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->scale = (float)param_1;
    cVar4 = mobyutil::MB_randInt(0xff);
    pPVar3->rot = cVar4;
    pPVar3->tex = *DAT_00a528b4;
    iVar2 = *param_7;
    pPVar3->timer = param_8;
    pPVar3->update[0] = iVar2;
    pPVar3->update[1] = param_7[1];
    pPVar3->update[2] = param_7[2];
    uVar5 = fastfunc::FastDoubleToInt((double)((float)(longlong)param_11 * DAT_0071f408));
    *(undefined1 *)(pPVar3->update + 4) = uVar5;
    pPVar3->update[5] = (int)(float)((double)DAT_0071f408 * param_2);
    fVar1 = DAT_0071f408;
    *(char *)((int)pPVar3->update + 0x11) = (char)param_10;
    *(char *)((int)pPVar3->update + 0x12) = (char)(param_10 >> 8);
    *(char *)((int)pPVar3->update + 0x13) = (char)(param_10 >> 0x10);
    *(short *)(pPVar3->update + 7) = param_8;
    *(short *)((int)pPVar3->update + 0x1e) = (short)param_9;
    pPVar3->update[3] = (int)(float)param_4;
    pPVar3->update[6] = (int)((float)(param_3 - 1.0) * fVar1 + 1.0);
  }
  return pPVar3;
}



//==== 0012e5b8  ns=partupd  size=0x1c0
// sig: undefined UpdatePart_44(PartInstance * part)
// callers(0): 
// callees(6): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 00502bd0 fastfunc::FastVecScaleSelf

/* Part 44 */

void partupd::UpdatePart_44(PartInstance *part)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar5;
  ulonglong uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  lVar3 = (longlong)(int)part;
  iVar5 = fastfunc::FastDecTimerS16(lVar3 + 10);
  if (iVar5 == 0) {
    dVar6 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)part->update + 0x1e));
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(part->update + 7));
    uVar4 = fastfunc::FastDoubleToInt
                      ((double)(float)(dVar6 * (double)(float)((double)(longlong)(int)part->timer /
                                                              dVar7)));
    dVar12 = (double)(float)part->update[0];
    dVar11 = (double)(float)part->update[1];
    dVar10 = (double)(float)part->update[2];
    fVar1 = (part->pos).x;
    fVar2 = (part->pos).z;
    part->color = (uint)((uVar4 & 0xffffffff) << 0x18) |
                  (uint)*(byte *)((int)part->update + 0x13) << 0x10 |
                  (uint)CONCAT11(*(undefined1 *)((int)part->update + 0x12),
                                 *(undefined1 *)((int)part->update + 0x11));
    (part->pos).x = (float)((double)fVar1 + dVar12);
    (part->pos).y = (float)((double)(part->pos).y + dVar11);
    (part->pos).z = (float)((double)fVar2 + dVar10);
    fastfunc::FastVecScaleSelf((double)(part->pos).w,auStack_60,local_70);
    fastfunc::FastVecAddSelf(auStack_50,lVar3 + 0x10,local_70);
    dVar6 = (double)(float)part->update[3];
    dVar7 = (double)hero::g_heroGravityDir;
    dVar8 = (double)DAT_00969f74;
    dVar9 = (double)DAT_00969f78;
    fVar1 = (float)part->update[6];
    fVar2 = (float)part->update[5];
    part->rot = part->rot + *(char *)(part->update + 4);
    part->scale = part->scale + fVar2;
    part->update[0] = (int)(fVar1 * (float)(dVar7 * dVar6 + dVar12));
    part->update[1] = (int)(fVar1 * (float)(dVar8 * dVar6 + dVar11));
    part->update[2] = (int)(fVar1 * (float)(dVar9 * dVar6 + dVar10));
  }
  else {
    partproc::DeletePart(lVar3);
  }
  return;
}



//==== 0012e788  ns=partupd  size=0x130
// sig: undefined UpdatePart_45(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 45 */

void partupd::UpdatePart_45(PartInstance *part)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  
  fVar1 = (part->pos).x + (float)part->update[0];
  fVar4 = (part->pos).y + (float)part->update[1];
  uVar6 = part->color;
  fVar5 = (part->pos).z + (float)part->update[2];
  (part->pos).x = fVar1;
  (part->pos).y = fVar4;
  (part->pos).z = fVar5;
  sVar2 = part->timer;
  if (2.0 <= fVar1) {
    if ((((fVar1 <= 1021.0) && (2.0 <= fVar4)) && (fVar4 <= 1021.0)) &&
       ((2.0 <= fVar5 && (fVar5 <= 1021.0)))) {
      fVar1 = (float)part->update[4];
      pfVar3 = (float *)part->update[5];
      part->rot = part->rot + '\x01';
      part->scale = part->scale + fVar1;
      if ((pfVar3 != (float *)0x0) && (fVar1 = *pfVar3, ABS(fVar5 - fVar1) < 0.2)) {
        (part->pos).z = fVar1 + 0.02;
      }
      part->timer = sVar2 + -1;
      if (sVar2 == 1) {
        uVar6 = uVar6 - 0x1000000;
        part->timer = 4;
        part->color = uVar6;
      }
      if ((uVar6 & 0xff000000) != 0) {
        return;
      }
      partproc::DeletePart();
      return;
    }
  }
  partproc::DeletePart();
  return;
}



//==== 0012e8c8  ns=partupd  size=0x160
// sig: undefined SpawnPart_46(void)
// callers(7): 000969c0 hero::Hero_SpawnWaterWake; 00292250 mobyupdate_helpers::M1524_00292250; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 00342db8 mobyupdate_unsorted::UpdateMoby_327_BataliaOcean; 00352e88 mobyupdate_helpers::M35_00352e88; 003531d0 mobyupdate_helpers::M35_003531d0; 0048ecd0 mobyupdate_unsorted::UpdateMoby_855
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 46 */

PartInstance *
partupd::SpawnPart_46
          (double param_1,double param_2,float *param_3,int *param_4,undefined8 param_5,
          undefined8 param_6,int param_7)

{
  PartInstance *pPVar2;
  ulonglong uVar1;
  char cVar3;
  double dVar4;
  
  pPVar2 = partproc::CreatePart(0x2e);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    (pPVar2->pos).z = param_3[2];
    (pPVar2->pos).w = param_3[3];
    uVar1 = mobyutil::MB_randInt(10);
    pPVar2->color = (int)((uVar1 & 0xffffffff) << 0x18) + 0x26000000U | 0x808080;
    cVar3 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar2->drawDist = cVar3 + ' ';
    pPVar2->gsAlpha = 0x48;
    pPVar2->type = 1;
    pPVar2->tex = *DAT_00a528bc;
    pPVar2->timer = 5;
    pPVar2->scale = (float)(param_1 * 210000.0);
    pPVar2->update[0] = *param_4;
    pPVar2->update[1] = param_4[1];
    pPVar2->update[2] = param_4[2];
    pPVar2->update[3] = param_4[3];
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.0,256.0);
    pPVar2->update[4] = (int)(float)dVar4;
    cVar3 = fastfunc::FastDoubleToInt();
    pPVar2->rot = cVar3;
    pPVar2->update[5] = (int)(float)param_2;
    pPVar2->update[6] = param_7;
  }
  return pPVar2;
}



//==== 0012ea38  ns=partupd  size=0x128
// sig: undefined UpdatePart_46(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 00502758 fastfunc::FastDoubleToInt

/* Part 46 */

void partupd::UpdatePart_46(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  char cVar7;
  uint uVar6;
  
  fVar1 = (float)part->update[1];
  fVar2 = (float)part->update[2];
  fVar3 = part->scale;
  (part->pos).x = (part->pos).x + (float)part->update[0];
  (part->pos).y = (part->pos).y + fVar1;
  (part->pos).z = (part->pos).z + fVar2;
  fVar1 = (float)part->update[5];
  fVar2 = (float)part->update[4];
  part->scale = fVar3 + 5880.0;
  fVar1 = fVar1 * 0.98;
  part->update[5] = (int)fVar1;
  part->update[4] = (int)(fVar2 + fVar1);
  cVar7 = fastfunc::FastDoubleToInt();
  pfVar5 = (float *)part->update[6];
  part->rot = cVar7;
  uVar6 = part->color;
  sVar4 = part->timer;
  if ((pfVar5 != (float *)0x0) && (fVar1 = *pfVar5, ABS((part->pos).z - fVar1) < 0.2)) {
    (part->pos).z = fVar1 + 0.02;
  }
  part->timer = sVar4 + -1;
  if (sVar4 == 1) {
    uVar6 = uVar6 - 0x1000000;
    part->timer = 1;
    part->color = uVar6;
  }
  if ((uVar6 & 0xff000000) == 0) {
    partproc::DeletePart(part);
  }
  return;
}



//==== 0012eb68  ns=partupd  size=0x120
// sig: undefined SpawnPart_47(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 47 */

PartInstance * partupd::SpawnPart_47(double param_1,float *param_2,int *param_3)

{
  byte bVar1;
  PartInstance *pPVar3;
  ulonglong uVar2;
  char cVar4;
  
  pPVar3 = partproc::CreatePart(0x2f);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_2;
    (pPVar3->pos).y = param_2[1];
    (pPVar3->pos).z = param_2[2];
    (pPVar3->pos).w = param_2[3];
    uVar2 = mobyutil::MB_randInt(8);
    pPVar3->color = (int)((uVar2 & 0xffffffff) << 0x18) + 0x28000000U | 0x808080;
    cVar4 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar3->drawDist = cVar4 + ' ';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    bVar1 = *DAT_00a528c0;
    pPVar3->scale = (float)param_1;
    pPVar3->tex = bVar1;
    pPVar3->update[0] = *param_3;
    pPVar3->update[1] = param_3[1];
    pPVar3->update[2] = param_3[2];
    pPVar3->update[3] = param_3[3];
    cVar4 = mobyutil::MB_randInt(0x100);
    pPVar3->rot = cVar4;
  }
  return pPVar3;
}



//==== 0012ec90  ns=partupd  size=0xbc
// sig: undefined UpdatePart_47(PartInstance * part)
// callers(0): 
// callees(1): 0011e6ec partproc::DeletePart

/* Part 47 */

void partupd::UpdatePart_47(PartInstance *part)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  
  fVar7 = (float)part->update[0] * 0.975;
  fVar8 = (float)part->update[1] * 0.975;
  fVar2 = (part->pos).x;
  fVar9 = (float)part->update[2] * 0.975;
  fVar3 = (part->pos).y;
  fVar4 = (part->pos).z;
  fVar5 = part->scale;
  cVar1 = part->rot;
  part->update[0] = (int)fVar7;
  part->update[1] = (int)fVar8;
  part->update[2] = (int)fVar9;
  iVar6 = part->update[4];
  uVar10 = part->color + 0xfe000000;
  (part->pos).x = fVar2 + fVar7;
  (part->pos).y = fVar3 + fVar8;
  (part->pos).z = fVar4 + fVar9;
  part->rot = cVar1 + (char)iVar6;
  part->color = uVar10;
  part->scale = fVar5 + 14700.0;
  if ((uVar10 & 0x80000000) != 0) {
    partproc::DeletePart(part);
  }
  return;
}



//==== 0012ed58  ns=partupd  size=0x16c
// sig: undefined SpawnPart_48(void)
// callers(1): 00482c20 mobyupdate_helpers::M844_00482c20
// callees(4): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 48 */

PartInstance *
partupd::SpawnPart_48
          (double param_1,float *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
          undefined2 param_6,uint param_7)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  
  pPVar2 = partproc::CreatePart(0x30);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_2;
    (pPVar2->pos).y = param_2[1];
    (pPVar2->pos).z = param_2[2];
    fVar1 = param_2[3];
    pPVar2->color = param_7 & 0xffffff;
    (pPVar2->pos).w = fVar1;
    dVar5 = 2.0;
    cVar3 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar2->drawDist = cVar3 + '\x10';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 0;
    pPVar2->tex = *DAT_00a528c4;
    pPVar2->scale = (float)(param_1 * 210000.0);
    cVar3 = mobyutil::MB_randInt(0x100);
    pPVar2->rot = cVar3;
    pPVar2->update[0] = *param_3;
    pPVar2->update[1] = param_3[1];
    pPVar2->update[2] = param_3[2];
    pPVar2->update[3] = param_3[3];
    dVar4 = (double)fastfunc::FastIntToDouble(param_5);
    pPVar2->timer = (short)param_5;
    *(undefined2 *)(pPVar2->update + 7) = param_6;
    pPVar2->update[5] = param_7 & 0xffffff;
    pPVar2->update[6] = param_7;
    pPVar2->update[4] = (int)(float)(dVar5 / dVar4);
  }
  return pPVar2;
}



//==== 0012eec8  ns=partupd  size=0xd4
// sig: undefined UpdatePart_48(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 48 */

void partupd::UpdatePart_48(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  
  fVar1 = (part->pos).x;
  fVar2 = (part->pos).y;
  fVar3 = (float)part->update[1];
  fVar4 = (float)part->update[2];
  sVar5 = part->timer;
  part->rot = part->rot + (char)*(undefined2 *)(part->update + 7);
  (part->pos).x = fVar1 + (float)part->update[0];
  (part->pos).y = fVar2 + fVar3;
  (part->pos).z = (part->pos).z + fVar4;
  dVar8 = (double)fastfunc::FastIntToDouble(sVar5);
  uVar6 = fastfunc::FastLerpColor
                    (ABS((double)(float)(dVar8 * (double)(float)part->update[4] - 1.0)),
                     part->update[6],part->update[5]);
  part->color = uVar6;
  iVar7 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar7 != 0) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 0012efa0  ns=partupd  size=0x11c
// sig: undefined SpawnPart_49(void)
// callers(1): 00484a18 mobyupdate_unsorted::UpdateMoby_848
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 49 */

void partupd::SpawnPart_49(int param_1,int *param_2,float *param_3,int *param_4,short param_5)

{
  int iVar1;
  PartInstance *pPVar2;
  char cVar3;
  
  pPVar2 = partproc::CreatePart(0x31);
  if (pPVar2 != (PartInstance *)0x0) {
    pPVar2->color = 0x7fffffff;
    pPVar2->scale = 2.5243547e-29;
    cVar3 = fastfunc::FastDoubleToInt(0x4000000000000000);
    pPVar2->drawDist = cVar3 + 'p';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 2;
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    (pPVar2->pos).z = param_3[2];
    (pPVar2->pos).w = param_3[3];
    pPVar2->update[0] = *param_2;
    pPVar2->update[1] = param_2[1];
    pPVar2->update[2] = param_2[2];
    pPVar2->update[3] = param_2[3];
    pPVar2->update[4] = *param_4;
    iVar1 = param_4[1];
    pPVar2->timer = param_5;
    pPVar2->update[5] = iVar1;
    iVar1 = param_4[2];
    pPVar2->update[7] = param_1;
    pPVar2->update[6] = iVar1;
  }
  return;
}



//==== 0012f0bc  ns=partupd  size=0x100
// sig: undefined UpdatePart_49(PartInstance * part)
// callers(0): 
// callees(3): 00057820 collproc::CollLine; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 49 */

void partupd::UpdatePart_49(PartInstance *part)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = (longlong)(int)part;
  fVar1 = (float)part->update[4];
  fVar2 = (float)part->update[5];
  fVar3 = (float)part->update[6];
  fVar4 = (float)part->update[0];
  fVar5 = (float)part->update[1];
  fVar6 = (float)part->update[2];
  (part->pos).x = (part->pos).x + fVar1;
  (part->pos).y = (part->pos).y + fVar2;
  (part->pos).z = (part->pos).z + fVar3;
  part->update[0] = (int)(fVar4 + fVar1);
  part->update[1] = (int)(fVar5 + fVar2);
  part->update[2] = (int)(fVar6 + fVar3);
  iVar8 = fastfunc::FastDecTimerS16(lVar7 + 10);
  if (iVar8 == 0) {
    iVar8 = collproc::CollLine(lVar7 + 0x20,lVar7 + 0x10,0x10,part->update[7],0);
    if (iVar8 != 0) {
      (part->pos).x = CollOutput.ip.x;
      (part->pos).y = CollOutput.ip.y;
      (part->pos).z = CollOutput.ip.z;
      fVar1 = CollOutput.ip.w;
      part->timer = 0;
      (part->pos).w = fVar1;
    }
  }
  else {
    partproc::DeletePart(lVar7);
  }
  return;
}



//==== 0012f1f8  ns=partupd  size=0x1a4
// sig: undefined SpawnPart_50(void)
// callers(1): 0048ecd0 mobyupdate_unsorted::UpdateMoby_855
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 50 */

longlong partupd::SpawnPart_50
                   (double param_1,double param_2,double param_3,float *param_4,int *param_5,
                   undefined8 param_6,undefined8 param_7,uint param_8,int param_9)

{
  short sVar1;
  PartInstance *pPVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pPVar2 = partproc::CreatePart(0x32);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_4;
    (pPVar2->pos).y = param_4[1];
    (pPVar2->pos).z = param_4[2];
    (pPVar2->pos).w = param_4[3];
    cVar4 = fastfunc::FastDoubleToInt(0x3ff0000000000000);
    pPVar2->drawDist = cVar4 + '@';
    pPVar2->gsAlpha = 0x44;
    pPVar2->type = 0;
    pPVar2->tex = *(byte *)(DAT_00a528cc + param_9);
    pPVar2->color = param_8;
    pPVar2->scale = (float)(param_1 * 210000.0);
    dVar5 = (double)mobyutil::MB_randRangeFloat(0.0,255.0);
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    pPVar2->rot = (char)(longlong)dVar5;
    auVar6 = loadVectorLeftIndexed(0x28,0x12f1c0);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    iVar3 = *param_5;
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar1 = storeVectorElementHalfWordIndexed(auVar6,10,(longlong)(int)pPVar2);
    pPVar2->timer = sVar1;
    pPVar2->update[0] = iVar3;
    pPVar2->update[1] = param_5[1];
    pPVar2->update[2] = param_5[2];
    iVar3 = param_5[3];
    pPVar2->update[4] = (int)(float)param_2;
    pPVar2->update[3] = iVar3;
    mobyutil::MB_randRangeFloat(-3.0,3.0);
    iVar3 = fastfunc::FastDoubleToInt();
    pPVar2->update[5] = iVar3;
    pPVar2->update[6] = (int)(float)param_3;
  }
  return (longlong)(int)pPVar2;
}



//==== 0012f3a0  ns=partupd  size=0xe8
// sig: undefined UpdatePart_50(PartInstance * part)
// callers(0): 
// callees(2): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16

/* Part 50 */

void partupd::UpdatePart_50(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar10 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  fVar2 = (part->pos).x;
  fVar3 = (float)part->update[0];
  fVar4 = (part->pos).y;
  fVar5 = (float)part->update[1];
  fVar6 = (float)part->update[2];
  bVar1 = part->tex;
  fVar7 = part->scale;
  fVar8 = (float)part->update[4];
  if (iVar10 != 0) {
    fVar6 = fVar6 - (float)part->update[6];
    part->update[2] = (int)fVar6;
  }
  fVar6 = (part->pos).z + fVar6;
  part->rot = part->rot + (char)part->update[5];
  pbVar9 = DAT_00a528cc;
  (part->pos).x = fVar2 + fVar3;
  (part->pos).y = fVar4 + fVar5;
  (part->pos).z = fVar6;
  if (bVar1 == *pbVar9) {
    part->scale = DAT_00729724 * mobyutil::g_FrameTime * 210000.0 + fVar7;
  }
  if (fVar6 < fVar8) {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 0012f490  ns=partupd  size=0xfc
// sig: undefined SpawnPart_51(void)
// callers(4): 00216c60 mobyupdate_unsorted::UpdateMoby_1233; 0021a5a0 mobyupdate_unsorted::UpdateMoby_1238; 004109f8 mobyupdate_unsorted::UpdateMoby_681; 004a0148 mobyupdate_unsorted::UpdateMoby_880
// callees(2): 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 51 */

PartInstance * partupd::SpawnPart_51(float *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  PartInstance *pPVar3;
  char cVar4;
  
  pPVar3 = partproc::CreatePart(0x33);
  if (pPVar3 != (PartInstance *)0x0) {
    (pPVar3->pos).x = *param_1;
    (pPVar3->pos).y = param_1[1];
    (pPVar3->pos).z = param_1[2];
    (pPVar3->pos).w = param_1[3];
    pPVar3->update[0] = *param_2;
    pPVar3->update[1] = param_2[1];
    pPVar3->update[2] = param_2[2];
    iVar2 = param_2[3];
    pPVar3->color = 0x5e806040;
    pPVar3->update[3] = iVar2;
    cVar4 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar3->drawDist = cVar4 + '@';
    pPVar3->gsAlpha = 0x48;
    pPVar3->type = 0;
    pPVar3->rot = '\0';
    bVar1 = *DAT_00a528d0;
    pPVar3->timer = 0x78;
    pPVar3->tex = bVar1;
    pPVar3->scale = 6300.0;
  }
  return pPVar3;
}



//==== 0012f5a0  ns=partupd  size=0xfc
// sig: undefined UpdatePart_51(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502b08 fastfunc::FastVecAddSelf; 00502bd0 fastfunc::FastVecScaleSelf

/* Part 51 */

void partupd::UpdatePart_51(PartInstance *part)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  lVar2 = (longlong)(int)part;
  fastfunc::FastVecScaleSelf(0x3fee666660000000,auStack_40,lVar2 + 0x20);
  part->update[2] = (int)(DAT_0071f418 * 5.0 + (float)part->update[2]);
  fastfunc::FastVecAddSelf(auStack_30,lVar2 + 0x10,lVar2 + 0x20);
  uVar4 = part->color + 0xfe000000;
  uVar1 = uVar4 & 0xff000000;
  part->color = uVar4;
  if (((uVar1 == 0) || (0x5f000000 < uVar1)) ||
     (iVar3 = fastfunc::FastDecTimerS16(lVar2 + 10), iVar3 != 0)) {
    partproc::DeletePart(lVar2);
  }
  else {
    part->rot = part->rot + '\x01';
    part->scale = (210000.0 - part->scale) * 0.07 + part->scale;
  }
  return;
}



//==== 0012f6b0  ns=partupd  size=0x148
// sig: undefined SpawnPart_52(void)
// callers(6): 001fb2f0 mobyupdate_helpers::M1202_001fb2f0; 0022b928 mobyupdate_helpers::M1261_0022b928; 0024b2e8 mobyupdate_helpers::M133_0024b2e8; 002a5988 mobyupdate_helpers::M1634_002a5988; 00306680 mobyupdate_helpers::M238_00306680; 003bdbd0 mobyupdate_helpers::M866_003bdbd0
// callees(4): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 52 */

PartInstance *
partupd::SpawnPart_52
          (double param_1,double param_2,float *param_3,uint param_4,int param_5,undefined8 param_6,
          undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar3;
  double dVar4;
  
  pPVar2 = partproc::CreatePart(0x34);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_3;
    (pPVar2->pos).y = param_3[1];
    fVar1 = param_3[2];
    (pPVar2->pos).z = fVar1;
    (pPVar2->pos).w = param_3[3];
    pPVar2->color = param_4;
    pPVar2->gsAlpha = 0x44;
    (pPVar2->pos).z = fVar1 + 0.05;
    cVar3 = fastfunc::FastDoubleToInt(0x4010000000000000);
    pPVar2->drawDist = cVar3 + ' ';
    pPVar2->type = 1;
    pPVar2->tex = *DAT_00a528d4;
    pPVar2->timer = (short)param_8;
    pPVar2->scale = (float)(param_1 * 210000.0);
    cVar3 = mobyutil::MB_randInt(0xff);
    pPVar2->rot = cVar3;
    pPVar2->update[2] = param_4;
    pPVar2->update[3] = param_5;
    pPVar2->update[0] = (int)(float)param_1;
    pPVar2->update[1] = (int)(float)param_2;
    dVar4 = (double)fastfunc::FastIntToDouble(param_8);
    pPVar2->update[4] = (int)(float)(1.0 / dVar4);
  }
  return pPVar2;
}



//==== 0012f800  ns=partupd  size=0xb0
// sig: undefined UpdatePart_52(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

/* Part 52 */

void partupd::UpdatePart_52(PartInstance *part)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  iVar1 = fastfunc::FastDecTimerS16((longlong)(int)part + 10);
  if (iVar1 == 0) {
    dVar3 = (double)fastfunc::FastIntToDouble(part->timer);
    dVar3 = (double)(float)(dVar3 * (double)(float)part->update[4]);
    uVar2 = fastfunc::FastLerpColor(dVar3,part->update[3],part->update[2]);
    part->color = uVar2;
    part->scale = (float)((double)(float)((double)(float)part->update[0] -
                                         (double)(float)part->update[1]) * dVar3 +
                         (double)(float)part->update[1]) * 210000.0;
  }
  else {
    partproc::DeletePart((longlong)(int)part);
  }
  return;
}



//==== 0012f8c0  ns=partupd  size=0x1a4
// sig: undefined SpawnPart_53(void)
// callers(17): 000d9bf8 initsky::SpawnSceneShipParticles; 00240678 mobyupdate_helpers::M16_00240678; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}; 0028eba8 mobyupdate_unsorted::UpdateMoby_1511; 002b4818 mobyupdate_helpers::M177_002b4818; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002c5f88 mobyupdate_helpers::M185_002c5f88; 00378778 mobyupdate_unsorted::UpdateMoby_437; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 00403708 mobyupdate_helpers::M655_00403708; 00411198 mobyupdate_helpers::M684_00411198; 0042b390 mobyupdate_helpers::M711_0042b390; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 00484300 mobyupdate_unsorted::UpdateMoby_846; 00490fb0 mobyupdate_helpers::M857_00490fb0; 00492d98 mobyupdate_unsorted::UpdateMoby_857; 004c8df0 mobyupdate_helpers::M983_004c8df0
// callees(3): 000fc620 mobyutil::MB_randInt; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt

/* Spawns part 53 */

PartInstance *
partupd::SpawnPart_53
          (double param_1,double param_2,double param_3,float *param_4,short param_5,
          undefined8 param_6,undefined8 param_7,uint param_8,int param_9,undefined1 param_10,
          int *param_11)

{
  float fVar1;
  PartInstance *pPVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  
  pPVar2 = partproc::CreatePart(0x35);
  if (pPVar2 != (PartInstance *)0x0) {
    (pPVar2->pos).x = *param_4;
    (pPVar2->pos).y = param_4[1];
    fVar1 = param_4[2];
    (pPVar2->pos).z = fVar1;
    (pPVar2->pos).w = param_4[3];
    pPVar2->color = param_8;
    pPVar2->gsAlpha = 0x48;
    (pPVar2->pos).z = fVar1 + 0.05;
    cVar3 = fastfunc::FastDoubleToInt(0x3fd99999a0000000);
    cVar4 = '\0';
    pPVar2->drawDist = cVar3 + ' ';
    pPVar2->type = 0;
    pPVar2->tex = *DAT_00a528d8;
    dVar5 = 210000.0;
    pPVar2->timer = param_5;
    fVar1 = (float)(param_1 * 210000.0);
    pPVar2->scale = fVar1;
    if ((param_9 != 0) && (cVar4 = ' ', param_9 != 1)) {
      cVar4 = mobyutil::MB_randInt(0xff);
      fVar1 = pPVar2->scale;
    }
    pPVar2->rot = cVar4;
    pPVar2->update[0] = (int)fVar1;
    *(undefined1 *)((int)pPVar2->update + 10) = param_10;
    *(char *)((int)pPVar2->update + 0xb) = (char)(param_8 >> 0x18);
    pPVar2->update[6] = (int)(float)param_3;
    *(short *)(pPVar2->update + 2) = param_5;
    pPVar2->update[1] = (int)(float)(param_2 * dVar5);
    pPVar2->update[3] = *param_11;
    pPVar2->update[4] = param_11[1];
    pPVar2->update[5] = param_11[2];
  }
  return pPVar2;
}



//==== 0012fa78  ns=partupd  size=0x27c
// sig: undefined UpdatePart_53(PartInstance * part)
// callers(0): 
// callees(4): 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Part 53 */

void partupd::UpdatePart_53(PartInstance *part)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar10;
  ulonglong uVar9;
  undefined8 in_LR;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  lVar8 = (longlong)(int)part;
  auVar14 = ZEXT416(0xfffffff0);
  auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  auVar14 = loadVectorLeftIndexed(10,lVar8);
  auVar14 = vectorShiftRightAlgebraicWord(auVar14,auVar15);
  part->rot = part->rot + *(char *)((int)part->update + 10);
  auVar17 = loadVectorLeftIndexed(0x28,lVar8);
  dVar13 = 0.5;
  auVar15 = vectorShiftRightAlgebraicWord(auVar17,auVar15);
  iVar10 = (int)*(short *)(part->update + 2) - (int)part->timer;
  auVar14 = vectorSubtractUnsignedWordModulo(auVar15,auVar14);
  if (iVar10 < 6) {
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar14,0);
    auVar14 = ZEXT416(0xffffffff);
    auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = loadVectorLeftIndexed(0x20,lVar8);
    auVar19 = loadVectorLeftIndexed(0x24,lVar8);
    auVar18 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar16 = vectorAddFloatingPoint(auVar14,auVar19);
    auVar14 = loadVectorLeftIndexed(4,0x12fa64);
    auVar15 = loadVectorLeftIndexed(in_LR,0x12fa64);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = vectorMultiplyAddFloatingPoint
                        (auVar17,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar18);
    auVar14 = loadVectorLeftIndexed(8,0x12fa64);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar16,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar19);
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar15 ^ (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60),
                         auVar17,auVar19);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0xc,lVar8);
    *(undefined4 *)((uint)&part->scale & 0xfffffffc) = uVar4;
    bVar1 = *(byte *)((int)part->update + 0xb);
    uVar9 = fastfunc::FastDoubleToInt
                      ((double)((float)(longlong)(int)((uint)(bVar1 >> 1) - (uint)bVar1) *
                                (float)(longlong)iVar10 * 0.2 + (float)bVar1));
  }
  else {
    dVar11 = (double)fastfunc::FastIntToDouble((longlong)*(short *)(part->update + 2) + -6);
    dVar12 = (double)(float)part->update[0];
    bVar1 = *(byte *)((int)part->update + 0xb);
    dVar11 = (double)(float)((double)(longlong)(int)part->timer / dVar11);
    part->scale = (float)((double)(float)((double)(float)(dVar12 + (double)(float)part->update[1]) *
                                          dVar13 - dVar12) * dVar11 + dVar12);
    uVar9 = fastfunc::FastDoubleToInt((double)(float)((double)(bVar1 >> 1) * dVar11));
  }
  fVar2 = (float)part->update[5];
  fVar5 = (part->pos).x + (float)part->update[3];
  fVar6 = (part->pos).y + (float)part->update[4];
  fVar3 = (float)part->update[6];
  fVar7 = (part->pos).z + fVar2;
  part->color = (uint)((uVar9 & 0xffffffff) << 0x18) | part->color & 0xffffff;
  (part->pos).x = fVar5;
  (part->pos).y = fVar6;
  (part->pos).z = fVar7;
  part->update[5] = (int)(fVar2 - fVar3);
  if (2.0 <= fVar5) {
    if ((((fVar5 <= 1021.0) && (2.0 <= fVar6)) && (fVar6 <= 1021.0)) &&
       ((2.0 <= fVar7 && (fVar7 <= 1021.0)))) {
      iVar10 = fastfunc::FastDecTimerS16(lVar8 + 10);
      if (iVar10 == 0) {
        return;
      }
      partproc::DeletePart(lVar8);
      return;
    }
  }
  partproc::DeletePart(lVar8);
  return;
}



//==== 0012fd10  ns=partupd  size=0x198
// sig: undefined SpawnPart_54(void)
// callers(0): 
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a550 mobyutil::Float_To_RGBA; 0011e6c8 partproc::CreatePart; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Spawns part 54 */

longlong partupd::SpawnPart_54
                   (double param_1,double param_2,double param_3,int param_4,float *param_5,
                   int param_6)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  PartInstance *pPVar4;
  uint uVar5;
  char cVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pPVar4 = partproc::CreatePart(0x36);
  if (pPVar4 != (PartInstance *)0x0) {
    (pPVar4->pos).x = *param_5;
    (pPVar4->pos).y = param_5[1];
    (pPVar4->pos).z = param_5[2];
    (pPVar4->pos).w = param_5[3];
    uVar5 = mobyutil::Float_To_RGBA(0.7,0.7,0.7,0.08);
    pPVar4->color = uVar5;
    cVar6 = fastfunc::FastDoubleToInt(0x3fd99999a0000000);
    pPVar4->drawDist = cVar6 + '@';
    pPVar4->gsAlpha = 0x44;
    pPVar4->type = 0;
    dVar7 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pPVar4->update[4] = (int)(float)dVar7;
    pPVar4->rot = (char)(int)(dVar7 * 256.0);
    iVar3 = DAT_00a52834;
    uVar5 = rand();
    auVar8 = ZEXT416(0xffffffff);
    auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    bVar1 = *(byte *)(iVar3 + (uVar5 & 7));
    pPVar4->update[0] = param_6;
    pPVar4->tex = bVar1;
    pPVar4->update[1] = (int)(float)param_1;
    pPVar4->update[2] = (int)(float)param_2;
    pPVar4->update[3] = (int)(float)param_3;
    pPVar4->update[5] = param_4;
    pPVar4->scale = 52500.0;
    auVar8 = loadVectorLeftIndexed(0x18,0x12fcf4);
    auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    sVar2 = storeVectorElementHalfWordIndexed(auVar8,10,(longlong)(int)pPVar4);
    pPVar4->timer = sVar2;
  }
  return (longlong)(int)pPVar4;
}



//==== 0012fec8  ns=partupd  size=0x204
// sig: undefined UpdatePart_54(void * this, PartInstance * part)
// callers(0): 
// callees(7): 0005e598 collproc::CollMobySphere; 00107860 mobyutil::MB_DamageMobyList; 0010a550 mobyutil::Float_To_RGBA; 001150f8 mobyutil::MB_PathPosAtDist; 0011e6ec partproc::DeletePart; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Part 54 */

void __thiscall partupd::UpdatePart_54(void *this,PartInstance *part)

{
  float fVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  byte in_cr6;
  undefined8 in_LR;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  
  lVar2 = (longlong)(int)this;
  fVar1 = *(float *)((int)this + 0x24) + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x24) = fVar1;
  mobyutil::MB_PathPosAtDist
            ((double)fVar1,(double)*(float *)((int)this + 0x2c),lVar2,part,
             *(undefined4 *)((int)this + 0x20),auStack_40,auStack_3c,lVar2 + 0x10);
  iVar4 = fastfunc::FastDecTimerS16(lVar2 + 10);
  if (iVar4 == 0) {
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = ZEXT416(0xffffffff);
    auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(in_LR,0x12fea8);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = ZEXT416(0xfffffff0);
    auVar11 = loadVectorLeftIndexed(10,lVar2);
    auVar11 = vectorShiftRightAlgebraicWord
                        (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
    auVar9 = loadVectorLeftIndexed(4,0x12fea8);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    dVar7 = 30.5;
    dVar8 = 0.25;
    auVar10 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
               auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      dVar5 = 0.699999988079071;
      dVar6 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)this + 10),0x130000,4);
      iVar4 = mobyutil::Float_To_RGBA
                        ((float)dVar5,(float)dVar5,(float)dVar5,
                         (float)(dVar6 * 0.07999999821186066) /
                         (float)((double)(longlong)((double)animationSpeed * dVar7) * dVar8));
      *(int *)((int)this + 4) = iVar4;
    }
    uVar3 = collproc::CollMobySphere(0x3fc3333340000000,lVar2 + 0x10);
    mobyutil::MB_DamageMobyList
              (0x4000000000000000,0x3ff0000000000000,0x3ff0000000000000,
               *(undefined4 *)((int)this + 0x34),2,*(undefined8 *)((int)this + 0x10),
               *(undefined8 *)((int)this + 0x18),&DAT_00a14a00,uVar3,0,&DAT_00810001);
  }
  else {
    partproc::DeletePart(lVar2);
  }
  return;
}



