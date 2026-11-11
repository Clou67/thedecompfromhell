//==== 004c0208  ns=Global  size=0x4ac
// sig: undefined FUN_004c0208(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00127ea8 partupd::SpawnPart_26

MobyInstance * FUN_004c0208(float param_1,float *param_2,f32 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar15;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x18] = unaff_r28;
  pMVar15 = mobyfunc::CreateMoby(0x3a6);
  if (pMVar15 != (MobyInstance *)0x0) {
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    uVar12 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar15->state = '\0';
    pMVar15->color = (int)((ulonglong)uVar12 >> 0x20);
    pMVar15->light = (int)uVar12;
    pfVar18 = (float *)pMVar15->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    pMVar15->scale = pMVar15->scale * 20.0;
    (pMVar15->pos).x = *param_3;
    (pMVar15->pos).y = param_3[1];
    (pMVar15->pos).z = param_3[2];
    (pMVar15->pos).w = param_3[3];
    *pfVar18 = *param_2 * 5.0;
    pfVar18[1] = param_2[1] * 5.0;
    pfVar18[2] = param_2[2] * 5.0;
    pfVar18[3] = param_2[3];
    auVar21 = loadVectorLeftIndexed(8,0x4c01f0);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x38,
                       ZEXT48(pfVar18));
    *(undefined4 *)((uint)(pfVar18 + 0xe) & 0xfffffffc) = uVar7;
    pfVar18[0xf] = param_1;
    pMVar15->alpha = '0';
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar3 = ABS(param_2[1]);
    pMVar15->modeBits = pMVar15->modeBits | DRAW_TRANSPARENT_WEIRD;
    *(float *)(puVar8 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar16 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = fVar1;
    if (0.0 < fVar5) {
      lVar13 = uVar11 - 0xd0;
      lVar17 = uVar11 - 0x44;
      lVar19 = uVar11 - 0x34;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar5 * fVar5;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 0x44;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar5 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      fVar5 = fVar1;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar5 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar15->rotation).z = fVar4;
    fVar5 = param_2[2];
    fVar2 = ABS(param_2[2]);
    fVar6 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar3 = ABS(fVar6);
    *(float *)(puVar8 + 0xe) = fVar6;
    *(float *)((int)puVar8 + 0x74) = fVar3 - fVar2;
    uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar5 >> 0x1d) & 4;
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    if (0.0 < fVar6) {
      lVar13 = uVar11 - 0xd0;
      lVar17 = uVar11 - 100;
      lVar19 = uVar11 - 0x54;
      lVar20 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x11) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)((int)puVar8 + 0x84) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar2;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar6;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar6 * fVar6;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar6;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
    }
    (pMVar15->rotation).y = -fVar1;
    mobyfunc::UpdateMobyTransform(pMVar15);
    partupd::SpawnPart_26
              (0x4104c08000000000,pMVar15,&DAT_004c01f0,0x600040ff,0x80,0xffffffffffffffff);
  }
  return pMVar15;
}



//==== 004c06d8  ns=mobyupdate_helpers  size=0x89c
// sig: undefined M935_004c06d8(void)
// callers(1): 004c0fd8 mobyupdate_unsorted::UpdateMoby_935
// callees(11): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M935_004c06d8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar10;
  puVar9[0x22] = in_LR;
  puVar9[0x1f] = in_f31;
  puVar9[0x1e] = unaff_r31;
  fVar4 = DAT_008f4b48;
  pMVar5 = param_1->pClass;
  puVar9[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  param_1->scale = pMVar5->gScale * fVar4;
  *(float *)((int)pvVar6 + 0xf4) = DAT_008f4b78 * mobyutil::g_FrameTime;
  param_1->unk58 = 1.0;
  dVar25 = 0.0;
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar14 = mobyutil::MB_HandleDamage
                     (param_1,iVar13,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\t')) {
    iVar7 = *(int *)(iVar13 + 0x20);
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    iVar14 = iVar14 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(iVar7 + 0xa6)) << 0x3a) >> 0x3f) &
                      3U - iVar14);
    if ((double)fVar4 <= dVar25) {
      iVar14 = 1;
    }
    uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f4b4c;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar14 < 3) {
      if ((-1 < iVar14) && (0 < iVar14)) {
        fVar4 = DAT_008f4b4c * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f4b5c * mobyutil::g_FrameTime;
        fVar1 = DAT_008f4b58;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x58;
          lVar16 = uVar10 - 0x68;
          lVar21 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xa4) = fVar3;
          *(float *)((int)puVar9 + 0x9c) = fVar3;
          *(float *)(puVar9 + 0x14) = fVar3;
          *(float *)(puVar9 + 0x13) = fVar3;
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar2;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar3 * fVar2;
          do {
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x68;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar3 = *pfVar17;
            fVar2 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x84,uVar20 + 0x88,uVar20 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar20 + 0x70);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 10) >> 0x3f) & 0xf9) + 0x10;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar14 < 0xb) {
      if (iVar14 < 9) {
        *(float *)((int)pvVar6 + 0x88) = DAT_008f4b54 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f4b50;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x38;
          lVar16 = uVar10 - 0x48;
          lVar21 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xc4) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar2;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar2;
          do {
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar3 * fVar3;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x48;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar3 = *pfVar17;
            fVar2 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar3;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x88,uVar20 + 0x88,uVar20 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar20 + 0x70);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 10) >> 0x3f) & 0xf9) + 0xf;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    dVar25 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x194) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar20 + 0x194);
  if (*(int *)((int)pvVar6 + 0x194) == 0) {
    fVar4 = *(float *)((int)pvVar6 + 0x18c);
  }
  else {
    fVar4 = *(float *)((int)pvVar6 + 0x18c) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x198) = fVar4;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x180)];
  iVar13 = mobyutil::MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if (iVar13 != 2) {
    if (param_1->state == '\x01') {
      pSVar8 = Splines[*(int *)((int)pvVar6 + 0x184)];
      fVar4 = pSVar8->points[1].x;
      fVar1 = pSVar8->points[1].y;
      fVar3 = pSVar8->points[1].z;
    }
    else {
      fVar4 = (param_1->pos).x;
      fVar1 = (param_1->pos).y;
      fVar3 = (param_1->pos).z;
    }
    fVar1 = fVar1 - *(float *)((int)pvVar6 + 0x124);
    fVar4 = fVar4 - *(float *)((int)pvVar6 + 0x120);
    if ((*(float *)((int)pvVar6 + 0x198) < SQRT(fVar4 * fVar4 + fVar1 * fVar1)) ||
       (3.0 < fVar3 - *(float *)((int)pvVar6 + 0x128))) {
      *(undefined4 *)((int)pvVar6 + 0x164) = 2;
    }
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004c0fd8  ns=mobyupdate_unsorted  size=0x19e8
// sig: undefined UpdateMoby_935(MobyInstance * moby)
// callers(0): 
// callees(24): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104e44 mobyutil::PointInsideComplexPoly; 00105870 mobyutil::DamageSphereAtPos; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00119a18 mobyfunc::DoManipulator; 004c06d8 mobyupdate_helpers::M935_004c06d8; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e81f0 FUN_005e81f0; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 935 */

void mobyupdate_unsorted::UpdateMoby_935(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  void *pvVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined1 local_190 [16];
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined1 auStack_170 [16];
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined1 auStack_140 [16];
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined1 auStack_120 [16];
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [16];
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [64];
  longlong local_50;
  
  lVar14 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  dVar26 = 1.0;
  moby->unk58 = 1.0;
  mobyupdate_helpers::M935_004c06d8();
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar6 + 0x1c0));
  pMVar19 = MobyInstance;
  bVar2 = moby->state;
  if (bVar2 < 9) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 2;
        *(undefined1 *)((int)pvVar6 + 0x28) = 1;
        *(undefined1 *)((int)pvVar6 + 0x29) = 1;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar15;
        *(undefined4 *)((int)pvVar6 + 0xd4) = 0x3f000000;
        *(uint *)((int)pvVar6 + 0x108) = *(uint *)((int)pvVar6 + 0x108) | 0x10;
        uVar16 = rand();
        if ((uVar16 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(int *)((int)pvVar6 + 0x1a4) < 0) {
          if (*(int *)((int)pvVar6 + 0x188) == 0) {
            moby->state = '\x02';
            if (moby->animationId != '\0') {
              mobyutil::MB_SetAnimation(lVar14,0,0,5);
            }
            *(f32 *)((int)pvVar6 + 0x170) = (moby->pos).x;
            *(f32 *)((int)pvVar6 + 0x174) = (moby->pos).y;
            *(f32 *)((int)pvVar6 + 0x178) = (moby->pos).z;
            *(f32 *)((int)pvVar6 + 0x17c) = (moby->pos).w;
          }
          else {
            moby->state = '\x01';
            iVar17 = *(int *)((int)pvVar6 + 0x184);
            pSVar8 = Splines[iVar17];
            (moby->pos).x = pSVar8->points[0].x;
            (moby->pos).y = pSVar8->points[0].y;
            fVar27 = pSVar8->points[0].z;
            pSVar9 = Splines[iVar17];
            (moby->pos).w = pSVar8->points[0].w;
            (moby->pos).z = (float)((double)fVar27 - dVar26);
            *(float *)((int)pvVar6 + 0x170) = pSVar9->points[1].x;
            *(float *)((int)pvVar6 + 0x174) = pSVar9->points[1].y;
            *(float *)((int)pvVar6 + 0x178) = pSVar9->points[1].z;
            *(float *)((int)pvVar6 + 0x17c) = pSVar9->points[1].w;
          }
        }
        else {
          moby->state = '\n';
          dVar26 = (double)mobyutil::MB_randRangeFloat(-3.0,3.0);
          *(float *)((int)pvVar6 + 0x1a8) = (float)dVar26;
        }
      }
      else if (bVar2 < 2) {
        dVar26 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar6 + 0x184)]->points[1].x -
                                              (moby->pos).x),
                                      (double)(Splines[*(int *)((int)pvVar6 + 0x184)]->points[1].y -
                                              (moby->pos).y));
        fVar27 = mobyutil::OrganicDeltAng
                           ((float)dVar26,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar6 + 0x1a0));
        if ((*(int *)((int)pvVar6 + 0x164) != 2) &&
           (iVar17 = mobyutil::MB_randInt((double)fVar27,9), iVar17 == 0)) {
          moby->state = '\x06';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar14,0,0,5);
          }
          FUN_005e81f0((int)pvVar6 + 0x40,ZEXT48(Splines[*(int *)((int)pvVar6 + 0x184)]) + 0x20,
                       lVar14 + 0x10);
          fVar10 = DAT_0071f418;
          fVar3 = *(float *)((int)pvVar6 + 0x44);
          fVar4 = *(float *)((int)pvVar6 + 0x40);
          dVar26 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
          fVar5 = DAT_008f4b68 * mobyutil::g_FrameTime;
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x184)];
          fVar27 = (float)((double)fVar5 / dVar26);
          fVar4 = fVar4 * fVar27;
          fVar3 = fVar3 * fVar27;
          fVar27 = 0.0;
          if (0.0 - dVar26 < 0.0) {
            fVar27 = fVar4;
          }
          fVar11 = 0.0;
          if (0.0 - dVar26 < 0.0) {
            fVar11 = fVar3;
          }
          if (dVar26 - 0.0 < 0.0) {
            fVar27 = fVar4;
          }
          if (dVar26 - 0.0 < 0.0) {
            fVar11 = fVar3;
          }
          *(float *)((int)pvVar6 + 0x40) = fVar27;
          *(float *)((int)pvVar6 + 0x44) = fVar11;
          dVar26 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)fVar5,-(double)(DAT_008f4b6c * fVar10),lVar14 + 0x10,
                                      ZEXT48(pSVar8) + 0x20);
          *(float *)((int)pvVar6 + 0x48) = (float)dVar26;
        }
      }
      else if (*(int *)((int)pvVar6 + 0x164) != 2) {
        dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
        *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x03';
        if (moby->animationId != '\x01') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 < 5) {
      if (bVar2 < 4) {
        dVar21 = 2.0;
        moby->unk58 = 2.0;
        fVar27 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar5 = fVar3 - *(float *)(iVar17 + 0x14), fVar4 = fVar27 - *(float *)(iVar17 + 0x10),
           DAT_008f4b60 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5))) {
          dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                        (double)(*(float *)(iVar17 + 0x14) - fVar3));
          dVar22 = (double)fastfunc::FastWrapRot((float)dVar22,*(float *)((int)pvVar6 + 0x19c));
          mobyutil::OrganicDeltAng
                    ((float)dVar22,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                     mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                     (float *)((int)pvVar6 + 0x1a0));
          dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
          if ((10.0 < dVar22) && (dVar22 < 30.0)) {
            *(float *)((int)pvVar6 + 0xf4) = DAT_008f4b78 * mobyutil::g_FrameTime;
            fVar27 = (moby->rotation).z;
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            local_178 = 0;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_17c = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                        fVar13 * -0.0001980741 +
                                        fVar12 * 0.0083330255 +
                                        fVar3 * fVar10 * -0.16666657 + fVar10) * dVar21);
            local_180 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                        fVar11 * -0.0001980741 +
                                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27
                                        ) * dVar21);
            mobyutil::MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_180,auStack_170);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x03') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          moby->state = '\x05';
        }
      }
      else {
        fVar27 = (moby->pos).x;
        dVar25 = 2.0;
        moby->unk58 = 2.0;
        dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                      (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
        mobyutil::OrganicDeltAng
                  ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x1a0));
        fVar27 = (moby->rotation).z;
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
           SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008f4b60)) {
          if ((dVar22 < 10.0) || (30.0 < dVar22)) {
            if (*(int *)((int)pvVar6 + 0x164) == 2) {
              moby->state = '\x05';
            }
          }
          else {
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_148 = 0;
            local_14c = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                        fVar13 * -0.0001980741 +
                                        fVar12 * 0.0083330255 +
                                        fVar3 * fVar10 * -0.16666657 + fVar10) * dVar25);
            local_150 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                        fVar11 * -0.0001980741 +
                                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27
                                        ) * dVar25);
            *(float *)((int)pvVar6 + 0xf4) = DAT_010e47cc * mobyutil::g_FrameTime;
            mobyutil::MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_150,auStack_140);
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
          }
        }
        local_160 = (moby->pos).x;
        local_15c = (moby->pos).y;
        local_154 = (moby->pos).w;
        local_158 = (moby->pos).z + 0.333;
        mobyutil::DamageSphereAtPos
                  ((double)(DAT_008f4b48 * 0.6),dVar26,dVar26,lVar14,&local_160,&DAT_004c0f74,1,
                   0x8f0000,0,0,1);
      }
    }
    else if (bVar2 < 6) {
      fVar27 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar27 - *(float *)((int)pvVar6 + 0x174);
      fVar5 = fVar3 - *(float *)((int)pvVar6 + 0x170);
      if (dVar26 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x170) - fVar3),
                                        (double)(*(float *)((int)pvVar6 + 0x174) - fVar27));
          mobyutil::OrganicDeltAng
                    ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                     mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x4c0f74,
                     (float *)((int)pvVar6 + 0x1a0));
          dVar21 = (double)mobyfunc::BlendAnimFrame(moby);
          if (((moby->animationId == '\x01') && (10.0 <= dVar21)) && (dVar21 <= 30.0)) {
            fVar27 = (moby->rotation).z;
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            local_128 = 0;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_12c = (fVar3 * fVar13 * 2.601887e-06 +
                        fVar13 * -0.0001980741 +
                        fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
            local_130 = (fVar4 * fVar11 * 2.601887e-06 +
                        fVar11 * -0.0001980741 +
                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) * 2.0;
            mobyutil::MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_130,auStack_120);
          }
        }
        else {
          dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
          *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        bVar1 = moby->animationId != '\x01';
        if (bVar1) {
          if (bVar1) {
            mobyutil::MB_SetAnimation(lVar14,1,0,5);
          }
        }
        else if (bVar1) {
          mobyutil::MB_SetAnimation(lVar14,1,0,5);
        }
      }
    }
    else if (bVar2 < 8) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x48);
      fVar27 = -(DAT_008f4b6c * DAT_0071f418 - *(float *)((int)pvVar6 + 0x48));
      *(float *)((int)pvVar6 + 0x48) = fVar27;
      if ((fVar27 < 0.0) &&
         (dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_190,0),
         (double)(moby->pos).z < dVar21)) {
        if (moby->state == '\x06') {
          (moby->pos).z = (float)dVar21;
          moby->state = '\x02';
        }
        else {
          moby->state = '\x01';
          (moby->pos).z = (float)(dVar21 - dVar26);
        }
      }
    }
    else {
      uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
      if ((uVar16 & 0x40) == 0) {
        if ((uVar16 & 0x120) == 0) {
          if (*(short *)((int)pvVar6 + 0xae) == 2) {
            moby->unk58 = DAT_008f4b74;
          }
        }
        else {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar2 == 0x10) {
    lVar20 = lVar14 + 0x10;
    mobyutil::MB_PlatformLocalToWorld
              (lVar14,MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar20,lVar14 + 0x40,lVar20,
               lVar14 + 0x40);
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar16 & 0x160) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar14,lVar20,&DAT_004c0f74,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar2 == 0xf) {
    lVar20 = lVar14 + 0x10;
    mobyutil::MB_PlatformLocalToWorld
              (lVar14,MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar20,lVar14 + 0x40,lVar20,
               lVar14 + 0x40);
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) == 0) {
        if (*(short *)((int)pvVar6 + 0xae) == 2) {
          moby->unk58 = DAT_008f4b74;
        }
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      iVar17 = mobyutil::PointInsideComplexPoly
                         ((Vec4 *)lVar20,(Vec4 *)Splines[*(int *)((int)pvVar6 + 0x180)]->points,
                          Splines[*(int *)((int)pvVar6 + 0x180)]->cnt);
      if (iVar17 == 0) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        moby->state = '\f';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar2 == 0xe) {
    dVar25 = 2.0;
    pMVar19 = MobyInstance + *(int *)((int)pvVar6 + 0x1a4);
    moby->unk58 = 2.0;
    mobyutil::MB_PlatformLocalToWorld
              (lVar14,pMVar19,lVar14 + 0x10,lVar14 + 0x40,lVar14 + 0x10,lVar14 + 0x40);
    dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
    mobyutil::OrganicDeltAng
              ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x1a0));
    fVar27 = (moby->rotation).z;
    if (((moby->field43_0x70 & 2U) == 0) ||
       (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
       SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008f4b60)) {
      if ((dVar22 < 10.0) || (30.0 < dVar22)) {
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          moby->state = '\x05';
        }
      }
      else {
        fVar3 = fVar27 + 1.5707963;
        fVar4 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar4 = fVar27;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar10 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
          fVar10 = fVar4;
        }
        fVar27 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar27 = fVar5;
        }
        fVar3 = fVar10 * fVar10;
        fVar4 = fVar27 * fVar27;
        fVar12 = fVar3 * fVar3 * fVar10;
        fVar5 = fVar4 * fVar4 * fVar27;
        fVar13 = fVar3 * fVar12;
        fVar11 = fVar4 * fVar5;
        local_a8 = 0;
        local_ac = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                   fVar13 * -0.0001980741 +
                                   fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) *
                          dVar25);
        local_b0 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                   fVar11 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) *
                          dVar25);
        *(float *)((int)pvVar6 + 0xf4) = DAT_010e47cc * mobyutil::g_FrameTime;
        mobyutil::MB_UpdateNavMove
                  (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_b0,auStack_a0);
      }
    }
    else {
      moby->state = '\r';
      if (moby->animationId != '\x01') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
      }
    }
    local_c0 = (moby->pos).x;
    local_bc = (moby->pos).y;
    local_b4 = (moby->pos).w;
    local_b8 = (moby->pos).z + 0.333;
    mobyutil::DamageSphereAtPos
              ((double)(DAT_008f4b48 * 0.6),dVar26,0,lVar14,&local_c0,&DAT_004c0f74,1);
  }
  else if (bVar2 == 0xd) {
    mobyutil::MB_PlatformLocalToWorld
              (lVar14,MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar14 + 0x10,lVar14 + 0x40,
               lVar14 + 0x10,lVar14 + 0x40);
    fVar27 = (moby->pos).x;
    dVar21 = 2.0;
    moby->unk58 = 2.0;
    fVar3 = (moby->pos).y;
    if (((moby->field43_0x70 & 2U) == 0) ||
       (fVar5 = fVar3 - *(float *)(iVar17 + 0x14), fVar4 = fVar27 - *(float *)(iVar17 + 0x10),
       DAT_008f4b60 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5))) {
      dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                    (double)(*(float *)(iVar17 + 0x14) - fVar3));
      dVar22 = (double)fastfunc::FastWrapRot((float)dVar22,*(float *)((int)pvVar6 + 0x19c));
      mobyutil::OrganicDeltAng
                ((float)dVar22,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x1a0));
      dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((10.0 < dVar22) && (dVar22 < 30.0)) {
        fVar27 = (moby->rotation).z;
        fVar3 = fVar27 + 1.5707963;
        fVar4 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar4 = fVar27;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar10 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
          fVar10 = fVar4;
        }
        fVar27 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar27 = fVar5;
        }
        fVar3 = fVar10 * fVar10;
        local_d8 = 0;
        fVar4 = fVar27 * fVar27;
        fVar12 = fVar3 * fVar3 * fVar10;
        fVar5 = fVar4 * fVar4 * fVar27;
        fVar13 = fVar3 * fVar12;
        fVar11 = fVar4 * fVar5;
        local_dc = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                   fVar13 * -0.0001980741 +
                                   fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) *
                          dVar21);
        local_e0 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                   fVar11 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) *
                          dVar21);
        mobyutil::MB_UpdateNavMove
                  (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_e0,auStack_d0);
      }
    }
    else {
      moby->state = '\x0e';
      if (moby->animationId != '\x03') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
      }
    }
    if (*(int *)((int)pvVar6 + 0x164) == 2) {
      moby->state = '\f';
    }
  }
  else if (bVar2 == 0xc) {
    mobyutil::MB_PlatformLocalToWorld
              (lVar14,MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar14 + 0x10,lVar14 + 0x40,
               lVar14 + 0x10,lVar14 + 0x40);
    if (*(int *)((int)pvVar6 + 0x164) != 2) {
      dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
      *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
      moby->state = '\r';
      if (moby->animationId != '\x01') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar2 == 0xb) {
    fVar27 = (moby->pos).x + *(float *)((int)pvVar6 + 0x40);
    pvVar7 = MobyInstance[*(int *)((int)pvVar6 + 0x1a4)].pVar;
    (moby->pos).x = fVar27;
    fVar3 = (moby->pos).y + *(float *)((int)pvVar6 + 0x44);
    (moby->pos).y = fVar3;
    fVar4 = (moby->pos).z + *(float *)((int)pvVar6 + 0x48);
    (moby->pos).z = fVar4;
    (moby->pos).x = fVar27 + *(float *)((int)pvVar7 + 0x70);
    (moby->pos).y = fVar3 + *(float *)((int)pvVar7 + 0x74);
    (moby->pos).z = fVar4 + *(float *)((int)pvVar7 + 0x78);
    fVar27 = -(DAT_008f4b6c * DAT_0071f418 - *(float *)((int)pvVar6 + 0x48));
    *(float *)((int)pvVar6 + 0x48) = fVar27;
    if (fVar27 < 0.0) {
      local_f0 = (moby->pos).x;
      local_e8 = (float)((double)(moby->pos).z + dVar26);
      local_ec = (moby->pos).y;
      local_e4 = (moby->pos).w;
      dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_f0,0);
      if ((double)(moby->pos).z < dVar26) {
        moby->state = '\f';
      }
    }
  }
  else if (bVar2 == 10) {
    if (*(int *)((int)pvVar6 + 0x164) != 2) {
      iVar17 = *(int *)((int)pvVar6 + 0x1a4);
      fastfunc::FastNormalizeRMtx4(auStack_90,&MobyInstance[iVar17].transform);
      local_110 = (moby->pos).x - pMVar19[iVar17].pos.x;
      local_104 = (moby->pos).w;
      local_10c = (moby->pos).y - pMVar19[iVar17].pos.y;
      local_108 = (moby->pos).z - pMVar19[iVar17].pos.z;
      FUN_005e825c(&local_110,&local_110,auStack_90);
      uVar16 = (int)*(uint *)((int)pvVar6 + 0x1a8) >> 0x1f;
      iVar18 = ((uint)((int)local_110 >> 0x1f) >> 1 ^ (uint)local_110) - ((int)local_110 >> 0x1f);
      if ((iVar18 < (int)((uVar16 >> 1 ^ *(uint *)((int)pvVar6 + 0x1a8)) - uVar16)) &&
         (-0x40466666 < iVar18)) {
        dVar26 = 0.0;
        fVar27 = -2.0;
        if (0.0 - local_10c < 0.0) {
          fVar27 = 2.0;
        }
        fVar3 = pMVar19[iVar17].transform.v1.z;
        fVar4 = pMVar19[iVar17].transform.v0.z;
        fVar5 = pMVar19[iVar17].transform.v2.z;
        local_f4 = pMVar19[iVar17].transform.v0.w * local_110 +
                   pMVar19[iVar17].transform.v1.w * fVar27 + pMVar19[iVar17].transform.v2.w +
                   local_f4;
        local_100 = pMVar19[iVar17].transform.v0.x * local_110 +
                    pMVar19[iVar17].transform.v1.x * fVar27 + pMVar19[iVar17].transform.v2.x +
                    pMVar19[iVar17].pos.x;
        local_fc = pMVar19[iVar17].transform.v0.y * local_110 +
                   pMVar19[iVar17].transform.v1.y * fVar27 + pMVar19[iVar17].transform.v2.y +
                   pMVar19[iVar17].pos.y;
        local_f8 = pMVar19[iVar17].pos.z;
        moby->state = '\v';
        local_f8 = fVar4 * local_110 + fVar3 * fVar27 + fVar5 + local_f8;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar14,0,0,5);
        }
        fVar5 = local_100 - (moby->pos).x;
        *(float *)((int)pvVar6 + 0x40) = fVar5;
        fVar3 = local_fc - (moby->pos).y;
        *(float *)((int)pvVar6 + 0x44) = fVar3;
        *(float *)((int)pvVar6 + 0x48) = local_f8 - (moby->pos).z;
        dVar24 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        *(float *)((int)pvVar6 + 0x4c) = local_f4;
        fVar4 = DAT_008f4b68 * mobyutil::g_FrameTime;
        fVar27 = (float)((double)fVar4 / dVar24);
        dVar22 = (double)(fVar5 * fVar27);
        dVar25 = (double)(fVar3 * fVar27);
        dVar21 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        dVar23 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar23 = dVar25;
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar21 = dVar22;
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar23 = dVar25;
        }
        *(float *)((int)pvVar6 + 0x40) = (float)dVar21;
        *(float *)((int)pvVar6 + 0x44) = (float)dVar23;
        dVar26 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar4,-(double)(DAT_008f4b6c * DAT_0071f418),
                                    lVar14 + 0x10,&local_100,0x8f0000,&DAT_00720000,0);
        *(float *)((int)pvVar6 + 0x48) = (float)dVar26;
      }
    }
  }
  else if ((bVar2 == 9) &&
          (uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70)),
          (uVar16 & 0x160) != 0)) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_004c0f74,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004c29c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M937_004c29c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M937_004c29c0(void)

{
  DAT_008f4bc8 = 0x10000;
  return;
}



//==== 004c29e0  ns=mobyupdate_unsorted  size=0x120
// sig: undefined UpdateMoby_937(MobyInstance * moby)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* Moby 937 */

void mobyupdate_unsorted::UpdateMoby_937(MobyInstance *moby)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *moby->pVar;
  if (iVar1 != -1) {
    if (iVar1 != -1) {
      if (MobyInstance[iVar1].state == '\x02') {
        if (*(int *)((int)MobyInstance[iVar1].pVar + 0x10) == 0) {
          fVar2 = DAT_008f4bec * 0.017453292 * mobyutil::g_FrameTime;
        }
        else {
          fVar2 = -(DAT_008f4bec * 0.017453292 * mobyutil::g_FrameTime);
        }
        dVar3 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar2);
        (moby->rotation).z = (float)dVar3;
      }
      else if (MobyInstance[iVar1].state == '\x04') {
        if (*(int *)((int)MobyInstance[iVar1].pVar + 0x10) == 0) {
          fVar2 = -(DAT_008f4bec * 0.017453292 * mobyutil::g_FrameTime);
        }
        else {
          fVar2 = DAT_008f4bec * 0.017453292 * mobyutil::g_FrameTime;
        }
        dVar3 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar2);
        (moby->rotation).z = (float)dVar3;
      }
    }
  }
  return;
}



//==== 004c2b00  ns=mobyupdate_helpers  size=0x14
// sig: undefined M938_004c2b00(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M938_004c2b00(void)

{
  DAT_008f4c3c = 0x10000;
  return;
}



//==== 004c2b28  ns=Global  size=0x17c
// sig: undefined FUN_004c2b28(void)
// callers(1): 004c4698 mobyupdate_unsorted::UpdateMoby_939
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_004c2b28(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pMVar4 = mobyfunc::CreateMoby(BOMB_03AA);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7f;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    *(undefined2 *)((int)puVar2 + 0x16) = 0;
    puVar2[4] = param_1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    fVar1 = param_2[2];
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_2[3];
    (pMVar4->pos).z = fVar1 + DAT_008f4c60;
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    dVar7 = 1.0471975803375244;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 1.0471976,mobyutil::g_FrameTime * 3.1415927);
    puVar2[6] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar7),
                               (float)((double)mobyutil::g_FrameTime * dVar6));
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    puVar2[7] = (float)dVar5;
    auVar10 = loadVectorLeftIndexed(8,0x4c2b18);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x14,ZEXT48(puVar2));
    *(undefined2 *)(puVar2 + 5) = uVar3;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 004c2ce8  ns=mobyupdate_helpers  size=0xcf8
// sig: undefined M938_004c2ce8(void)
// callers(1): 004c3a28 mobyupdate_unsorted::UpdateMoby_938
// callees(5): 00057820 collproc::CollLine; 000ffb70 mobyutil::GetGroundZ; 0015d12c sound::PlayMobySound; 004d04e0 FUN_004d04e0; 00500608 fastfunc::FastVecNormalize
// strings: 004c2cd0: '=VwP?' (raw)

undefined8
mobyupdate_helpers::M938_004c2ce8
          (MobyInstance *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  undefined8 uVar30;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar14;
  puVar8[0x30] = in_LR;
  puVar8[0x2a] = in_f28;
  puVar8[0x2b] = in_f29;
  puVar8[0x2c] = in_f30;
  puVar8[0x2d] = in_f31;
  puVar8[0x29] = unaff_r31;
  puVar8[0x28] = unaff_r30;
  sVar7 = *(short *)(param_2 + 5);
  puVar8[0x26] = unaff_r28;
  puVar8[0x27] = unaff_r29;
  puVar8[0x25] = unaff_r27;
  puVar8[0x24] = unaff_r26;
  if (sVar7 != 0) {
    return 0;
  }
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  iVar18 = collproc::CollLine(uVar14 + 0x40 & 0xffffffff,&param_1->pos,0x10,param_1,0);
  if (iVar18 != 0) {
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      fVar1 = (param_1->pos).x - ((CollOutput.pMoby)->pos).x;
      fVar6 = (param_1->pos).y - ((CollOutput.pMoby)->pos).y;
      dVar25 = (double)CollOutput.ip.x;
      fVar2 = (param_1->pos).z - ((CollOutput.pMoby)->pos).z;
      CollOutput.normal.w = (param_1->pos).w;
      CollOutput.normal.x = fVar1;
      CollOutput.normal.y = fVar6;
      CollOutput.normal.z = fVar2;
      (param_1->pos).x = CollOutput.ip.x;
      dVar26 = (double)CollOutput.ip.y;
      (param_1->pos).y = CollOutput.ip.y;
      dVar27 = (double)CollOutput.ip.z;
      fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6);
      (param_1->pos).z = CollOutput.ip.z;
      (param_1->pos).w = CollOutput.ip.w;
      dVar28 = 0.0;
      fVar5 = (DAT_0071f418 * 9.7) / fVar4;
      dVar24 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar24 = (double)(fVar2 * fVar5);
      }
      dVar29 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar29 = (double)(fVar6 * fVar5);
      }
      dVar23 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar23 = (double)(fVar1 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar24 = (double)(fVar2 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar29 = (double)(fVar6 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar23 = (double)(fVar1 * fVar5);
      }
      (param_1->pos).z = (float)(dVar27 + dVar24);
      (param_1->pos).y = (float)(dVar26 + dVar29);
      (param_1->pos).x = (float)(dVar25 + dVar23);
      fastfunc::FastVecNormalize(param_2,param_2,0xa10980);
      *param_2 = *param_2 * 0.35;
      param_2[1] = param_2[1] * 0.35;
      param_2[2] = param_2[2] * 0.35;
      fVar4 = CollOutput.normal.z;
      fVar1 = (param_1->rotation).z;
      fVar6 = fVar1 + 1.5707963;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar5 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar5 = fVar6;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar5 < 0.0) {
        fVar1 = fVar5;
      }
      fVar6 = fVar3 * fVar3;
      dVar25 = (double)CollOutput.normal.z;
      fVar2 = fVar1 * fVar1;
      fVar11 = fVar6 * fVar6 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar1;
      fVar12 = fVar6 * fVar11;
      fVar10 = fVar2 * fVar5;
      fVar6 = fVar6 * fVar12 * 2.601887e-06 +
              fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3;
      fVar1 = fVar2 * fVar10 * 2.601887e-06 +
              fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar1 * -0.16666657 + fVar1;
      dVar29 = (double)(CollOutput.normal.x * fVar1 + CollOutput.normal.y * fVar6);
      fVar6 = CollOutput.normal.y * fVar1 - CollOutput.normal.x * fVar6;
      fVar1 = (param_1->rotation).x;
      dVar26 = ABS((double)fVar6);
      *(float *)((int)puVar8 + 0x94) = fVar6;
      fVar6 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar25 * dVar25)));
      dVar27 = ABS((double)fVar6);
      *(float *)(puVar8 + 0x12) = fVar6;
      *(float *)(puVar8 + 0x13) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0x12));
      if ((double)*(float *)(puVar8 + 0x13) - dVar28 < 0.0) {
        dVar24 = dVar26;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar8 + 0x94));
      if ((double)*(float *)(puVar8 + 0x13) - dVar28 < 0.0) {
        dVar26 = dVar27;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar21 = uVar14 - 100;
        lVar19 = uVar14 - 0x74;
        lVar22 = 2;
        fVar5 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x21) = fVar5;
        *(float *)(puVar8 + 0x20) = fVar5;
        *(float *)((int)puVar8 + 0x104) = fVar5;
        *(float *)((int)puVar8 + 0xfc) = fVar5;
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
        *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar5;
        *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar5 * fVar3;
        do {
          *(float *)((int)lVar16 + 0xfc) = *(float *)((int)lVar16 + 0xec) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0x74;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar3 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xfc) = *(float *)((int)lVar16 + 0xfc) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar24 = dVar28;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xfc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      uVar30 = 0x3faaceea00000000;
      dVar24 = (double)FUN_004d04e0((double)fVar1,-dVar27,0x3faaceea00000000);
      dVar25 = ABS(dVar25);
      *(float *)(puVar8 + 0x11) = (float)dVar29;
      (param_1->rotation).x = (float)dVar24;
      fVar1 = (param_1->rotation).y;
      *(float *)((int)puVar8 + 0x8c) = (float)(dVar25 - ABS(dVar29));
      uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = dVar25;
      if ((double)*(float *)((int)puVar8 + 0x8c) - dVar28 < 0.0) {
        dVar24 = ABS(dVar29);
      }
      dVar26 = ABS((double)*(float *)(puVar8 + 0x11));
      if ((double)*(float *)((int)puVar8 + 0x8c) - dVar28 < 0.0) {
        dVar26 = dVar25;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0x94;
        lVar21 = uVar14 - 0x84;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x1d) = fVar4;
        *(float *)(puVar8 + 0x1c) = fVar4;
        *(float *)((int)puVar8 + 0xe4) = fVar4;
        *(float *)((int)puVar8 + 0xdc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar5;
        *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar4;
        *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xdc) = *(float *)((int)lVar16 + 0xcc) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0x94;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xdc) = *(float *)((int)lVar16 + 0xdc) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xdc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar24 = (double)FUN_004d04e0((double)fVar1,dVar28,uVar30);
      (param_1->rotation).y = (float)dVar24;
      sound::PlayMobySound(1,0,param_1);
      return 1;
    }
    if (0 < CollOutput.poly) {
      dVar25 = (double)CollOutput.ip.x;
      (param_1->pos).x = CollOutput.ip.x;
      dVar26 = (double)CollOutput.ip.y;
      (param_1->pos).y = CollOutput.ip.y;
      dVar27 = (double)CollOutput.ip.z;
      (param_1->pos).z = CollOutput.ip.z;
      (param_1->pos).w = CollOutput.ip.w;
      dVar28 = 0.0;
      fVar1 = SQRT(CollOutput.normal.z * CollOutput.normal.z +
                   CollOutput.normal.x * CollOutput.normal.x +
                   CollOutput.normal.y * CollOutput.normal.y);
      fVar6 = (DAT_0071f418 * 9.7) / fVar1;
      dVar24 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar24 = (double)(CollOutput.normal.z * fVar6);
      }
      dVar29 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar29 = (double)(CollOutput.normal.y * fVar6);
      }
      dVar23 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar23 = (double)(CollOutput.normal.x * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar24 = (double)(CollOutput.normal.z * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar29 = (double)(CollOutput.normal.y * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar23 = (double)(CollOutput.normal.x * fVar6);
      }
      (param_1->pos).z = (float)(dVar27 + dVar24);
      (param_1->pos).y = (float)(dVar26 + dVar29);
      (param_1->pos).x = (float)(dVar25 + dVar23);
      fastfunc::FastVecNormalize(param_2,param_2,0xa10980);
      *param_2 = *param_2 * 0.5;
      param_2[1] = param_2[1] * 0.5;
      param_2[2] = param_2[2] * 0.5;
      dVar25 = (double)CollOutput.normal.z;
      fVar1 = (float)(dVar25 * dVar25 +
                     (double)(CollOutput.normal.x * CollOutput.normal.x +
                             CollOutput.normal.y * CollOutput.normal.y));
      dVar24 = dVar28;
      if ((double)SQRT(fVar1) != dVar28) {
        fVar6 = 1.0 / SQRT(fVar1);
        fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        dVar24 = (double)(float)(dVar25 * (double)(-(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 +
                                                  fVar6));
      }
      fVar1 = CollOutput.normal.y;
      fVar6 = CollOutput.normal.x;
      if (0.7070000171661377 < dVar24) {
        dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
        fVar1 = CollOutput.normal.y;
        fVar6 = CollOutput.normal.x;
        fVar3 = param_2[2];
        fVar2 = param_2[2];
        dVar25 = (double)CollOutput.normal.z;
        fVar4 = *param_2;
        fVar5 = param_2[1];
        if ((double)(param_1->pos).z < dVar24) {
          (param_1->pos).z = (float)dVar24;
        }
        if ((int)fVar3 < 0) {
          fVar2 = fVar2 * -0.4;
          param_2[2] = fVar2;
        }
        if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5) < mobyutil::g_FrameTime) {
          param_2[3] = 0.0;
          param_2[2] = 0.0;
          param_2[1] = 0.0;
          *param_2 = 0.0;
          return 3;
        }
      }
      fVar2 = (param_1->rotation).z;
      fVar4 = fVar2 + 1.5707963;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar3 = fVar4;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar10 = fVar5;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
        fVar2 = fVar3;
      }
      fVar4 = fVar10 * fVar10;
      fVar5 = fVar2 * fVar2;
      fVar12 = fVar4 * fVar4 * fVar10;
      fVar3 = fVar5 * fVar5 * fVar2;
      fVar13 = fVar4 * fVar12;
      fVar11 = fVar5 * fVar3;
      fVar4 = fVar4 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10
      ;
      fVar2 = fVar5 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2;
      dVar29 = (double)(fVar6 * fVar2 + fVar1 * fVar4);
      fVar2 = fVar1 * fVar2 - fVar6 * fVar4;
      fVar6 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar25 * dVar25)));
      *(float *)(puVar8 + 0x10) = fVar2;
      fVar1 = (param_1->rotation).x;
      dVar26 = ABS((double)fVar2);
      dVar27 = ABS((double)fVar6);
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)((int)puVar8 + 0x84) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if ((double)*(float *)((int)puVar8 + 0x84) - dVar28 < 0.0) {
        dVar24 = dVar26;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)(puVar8 + 0x10));
      if ((double)*(float *)((int)puVar8 + 0x84) - dVar28 < 0.0) {
        dVar26 = dVar27;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar21 = uVar14 - 0xa4;
        lVar19 = uVar14 - 0xb4;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x19) = fVar4;
        *(float *)(puVar8 + 0x18) = fVar4;
        *(float *)((int)puVar8 + 0xc4) = fVar4;
        *(float *)((int)puVar8 + 0xbc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar5;
        *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar4;
        *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xbc) = *(float *)((int)lVar16 + 0xac) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xb4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xbc) = *(float *)((int)lVar16 + 0xbc) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar24 = dVar28;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xbc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      uVar30 = 0x3faaceea00000000;
      dVar24 = (double)FUN_004d04e0((double)fVar1,-dVar27,0x3faaceea00000000);
      *(float *)(puVar8 + 0xe) = (float)dVar25;
      *(float *)((int)puVar8 + 0x74) = (float)dVar29;
      (param_1->rotation).x = (float)dVar24;
      fVar1 = (param_1->rotation).y;
      *(float *)(puVar8 + 0xf) = (float)(ABS(dVar25) - ABS(dVar29));
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0xe));
      if ((double)*(float *)(puVar8 + 0xf) - dVar28 < 0.0) {
        dVar24 = ABS(dVar29);
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar8 + 0x74));
      if ((double)*(float *)(puVar8 + 0xf) - dVar28 < 0.0) {
        dVar26 = ABS(dVar25);
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0xd4;
        lVar21 = uVar14 - 0xc4;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x15) = fVar4;
        *(float *)(puVar8 + 0x14) = fVar4;
        *(float *)((int)puVar8 + 0xa4) = fVar4;
        *(float *)((int)puVar8 + 0x9c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar5;
        *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4;
        *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x8c) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xd4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x9c) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x9c)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar24 = (double)FUN_004d04e0((double)fVar1,dVar28,uVar30);
      (param_1->rotation).y = (float)dVar24;
      sound::PlayMobySound(1,0,param_1);
      return 2;
    }
  }
  return 0;
}



//==== 004c3a28  ns=mobyupdate_unsorted  size=0xc54
// sig: undefined UpdateMoby_938(MobyInstance * moby)
// callers(0): 
// callees(10): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f1ef0 mobyutil::MB_GetLights; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 00107de8 mobyutil::MB_VecAtan2Angles; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 004c2ce8 mobyupdate_helpers::M938_004c2ce8; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 938 */

void mobyupdate_unsorted::UpdateMoby_938(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  f32 fVar9;
  float *pfVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  int iVar22;
  undefined8 uVar21;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar27;
  longlong lVar26;
  longlong lVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar24 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar25 = uVar20 - 0x180;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar20;
  puVar13[0x32] = in_LR;
  puVar13[0x2a] = in_f26;
  puVar13[0x2b] = in_f27;
  puVar13[0x2c] = in_f28;
  puVar13[0x2d] = in_f29;
  puVar13[0x2e] = in_f30;
  puVar13[0x2f] = in_f31;
  puVar13[0x29] = unaff_r31;
  puVar13[0x28] = unaff_r30;
  fVar9 = (moby->pos).x;
  pfVar10 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar10);
  uVar11 = (int)fVar9 >> 0x1f;
  dVar34 = 1.0;
  dVar35 = (double)(moby->pos).x;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  puVar13[0x27] = unaff_r29;
  if (((iVar22 < 0x3f800000) || (dVar33 = 511.0, 0x43ff8000 < iVar22)) ||
     (fVar9 = (moby->pos).y, dVar32 = (double)(moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
     iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x43ff8000 < iVar22 || iVar22 < 0x3f800000)) {
LAB_004c3b14:
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fVar9 = (moby->pos).z;
  uVar11 = (int)fVar9 >> 0x1f;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  if ((iVar22 < 0x3f800000) || (0x43ff8000 < iVar22)) goto LAB_004c3b14;
  bVar1 = moby->state;
  fVar6 = (moby->pos).z - DAT_008f4c60;
  dVar37 = (double)fVar6;
  dVar36 = (double)(moby->pos).w;
  (moby->pos).z = fVar6;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (moby->pos).x = (float)(dVar35 + (double)*pfVar10);
      (moby->pos).y = (float)(dVar32 + (double)pfVar10[1]);
      (moby->pos).z = (float)(dVar37 + (double)pfVar10[2]);
      pfVar10[2] = -(DAT_0071f418 * 9.8 - pfVar10[2]);
      iVar22 = mobyutil::MB_damage(lVar24,&DAT_00830000,0);
      if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
         (*(MOBY_OCLASSES *)(*(int *)(iVar22 + 0x20) + 0xa6) != moby->oClass)) {
        if (*(char *)(iVar22 + 0x28) == '\0') {
          fVar6 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = ABS(fVar6);
          fVar2 = ABS(fVar3);
          *(float *)(puVar13 + 0x1a) = fVar6;
          *(float *)((int)puVar13 + 0xd4) = fVar3;
          *(float *)(puVar13 + 0x1b) = fVar4 - fVar2;
          fVar6 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar13 + 0x1a));
          if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
            fVar3 = fVar2;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar16 = ABS(*(float *)((int)puVar13 + 0xd4));
          if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
            fVar16 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar26 = uVar20 - 0x170;
            lVar28 = uVar20 - 0x84;
            lVar31 = uVar20 - 0x74;
            lVar30 = 2;
            fVar3 = (fVar16 - fVar3) / (fVar16 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x21) = fVar3;
            *(float *)(puVar13 + 0x20) = fVar3;
            *(float *)((int)puVar13 + 0x104) = fVar3;
            *(float *)((int)puVar13 + 0xfc) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar4;
            *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar3;
            *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar26 + 0xfc) = *(float *)((int)lVar26 + 0xec) * fVar3 * fVar3;
              iVar14 = (int)lVar28;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
              lVar31 = lVar31 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar31 = uVar20 - 0x84;
            pfVar27 = (float *)&DAT_007358e0;
            lVar26 = lVar25;
            lVar28 = lVar31;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar26 + 0xfc) = *(float *)((int)lVar26 + 0xfc) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            do {
              iVar14 = (int)lVar25;
              iVar15 = (int)lVar31;
              lVar25 = lVar25 + 0x10;
              lVar31 = lVar31 + 0x10;
              fVar6 = fVar6 + *(float *)(iVar14 + 0xfc) + *(float *)(iVar15 + 4) +
                      *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar2;
          }
          *(float *)((int)puVar13 + 0xac) = fVar6;
          fVar6 = mobyutil::g_FrameTime * 10.0;
          *(float *)(puVar13 + 0x16) = mobyutil::g_FrameTime * 10.0;
          *(float *)((int)puVar13 + 0xb4) = fVar6;
          uVar5 = *(undefined4 *)(iVar22 + 0x18);
          *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(iVar22 + 0x10);
          *(undefined4 *)(puVar13 + 7) = uVar5;
          uVar5 = *(undefined4 *)(iVar22 + 0x1c);
          *(undefined4 *)((int)puVar13 + 0x34) = *(undefined4 *)(iVar22 + 0x14);
          *(undefined4 *)((int)puVar13 + 0x3c) = uVar5;
          mobyutil::MB_VecAtan2Angles
                    (puVar13[6],puVar13[7],uVar20 - 0xd4,uVar20 - 0xd0,uVar20 - 0xcc);
          fVar6 = *(float *)((int)puVar13 + 0xac);
          fVar4 = fVar6 + 1.5707963;
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          fVar3 = 3.1415925 - fVar6;
          if (fVar6 - (3.1415925 - fVar6) < 0.0) {
            fVar3 = fVar6;
          }
          fVar2 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar2 = fVar4;
          }
          fVar7 = -3.1415925 - fVar6;
          if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = fVar7 * fVar7;
          fVar6 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
            fVar6 = fVar2;
          }
          fVar4 = *(float *)(puVar13 + 0x16);
          pfVar10[2] = *(float *)((int)puVar13 + 0xb4);
          fVar2 = fVar6 * fVar6;
          fVar16 = fVar3 * fVar3 * fVar7;
          fVar17 = fVar3 * fVar16;
          fVar18 = fVar2 * fVar2 * fVar6;
          fVar19 = fVar2 * fVar18;
          pfVar10[1] = (fVar3 * fVar17 * 2.601887e-06 +
                       fVar17 * -0.0001980741 +
                       fVar16 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) * fVar4;
          auVar40 = loadVectorLeftIndexed(0x34,0x4c39e0);
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
          *(undefined2 *)(pfVar10 + 5) = uVar12;
          *pfVar10 = (fVar2 * fVar19 * 2.601887e-06 +
                     fVar19 * -0.0001980741 +
                     fVar18 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) * fVar4;
          moby->state = '\x02';
        }
        else {
          moby->state = '\x03';
        }
      }
      moby->damage = -1;
      iVar22 = fastfunc::FastDecTimerS16(uVar29 + 0x14);
      if (iVar22 != 0) {
        *(float *)(puVar13 + 8) = (float)dVar35;
        *(float *)(puVar13 + 9) = (float)dVar37;
        *(float *)((int)puVar13 + 0x44) = (float)dVar32;
        *(float *)((int)puVar13 + 0x4c) = (float)dVar36;
        iVar22 = mobyupdate_helpers::M938_004c2ce8(lVar24,uVar29,puVar13[8],puVar13[9]);
        if (iVar22 == 3) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x38,0x4c39e0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
          *(undefined2 *)(pfVar10 + 5) = uVar12;
          moby->state = '\x01';
          goto LAB_004c45b4;
        }
      }
      fVar9 = (moby->pos).z;
      uVar11 = (int)fVar9 >> 0x1f;
      if ((int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) < 0x40000000) {
        moby->state = '\x03';
      }
    }
    else {
      mobyutil::MB_GetLights(lVar24,uVar20 - 0xe0,uVar20 - 0xdc,uVar20 - 0xd8);
      sVar8 = *(short *)(pfVar10 + 5);
      puVar13[0x24] = (longlong)(int)(animationSpeed * 240.5);
      mobyfunc::SetColorOfMoby
                (moby,(longlong)
                      (((*(int *)((int)puVar13 + 0x124) - (int)sVar8) * 0x7f) /
                      *(int *)((int)puVar13 + 0x124)),(longlong)*(int *)((int)puVar13 + 0xa4),
                 (longlong)*(int *)(puVar13 + 0x15));
      iVar22 = fastfunc::FastDecTimerS16(uVar29 + 0x14);
      if (iVar22 == 0) {
        iVar22 = mobyutil::MB_damage(lVar24,&DAT_00830000,0);
        if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
           (*(MOBY_OCLASSES *)(*(int *)(iVar22 + 0x20) + 0xa6) != moby->oClass)) {
          if (*(char *)(iVar22 + 0x28) == '\0') {
            fVar6 = (moby->pos).x - g_heroPosition.x;
            fVar3 = (moby->pos).y - g_heroPosition.y;
            fVar4 = ABS(fVar6);
            fVar2 = ABS(fVar3);
            *(float *)((int)puVar13 + 0xc4) = fVar6;
            *(float *)(puVar13 + 0x19) = fVar3;
            *(float *)((int)puVar13 + 0xcc) = fVar4 - fVar2;
            fVar6 = 0.0;
            uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xcc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar13 + 0xc4));
            if (*(float *)((int)puVar13 + 0xcc) - 0.0 < 0.0) {
              fVar3 = fVar2;
            }
            fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar16 = ABS(*(float *)(puVar13 + 0x19));
            if (*(float *)((int)puVar13 + 0xcc) - 0.0 < 0.0) {
              fVar16 = fVar4;
            }
            if (0.0 < fVar3) {
              lVar24 = uVar20 - 0x170;
              lVar26 = uVar20 - 0xa4;
              lVar28 = uVar20 - 0x94;
              lVar31 = 2;
              fVar3 = (fVar16 - fVar3) / (fVar16 + fVar3);
              fVar4 = fVar3 * fVar3;
              *(float *)(puVar13 + 0x1d) = fVar3;
              *(float *)(puVar13 + 0x1c) = fVar3;
              *(float *)((int)puVar13 + 0xe4) = fVar3;
              *(float *)((int)puVar13 + 0xdc) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar4;
              *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar3;
              *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar24 + 0xdc) = *(float *)((int)lVar24 + 0xcc) * fVar3 * fVar3;
                iVar14 = (int)lVar26;
                lVar24 = lVar24 + 8;
                lVar26 = lVar26 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar28 = lVar28 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar28 = uVar20 - 0xa4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar26 = lVar28;
              do {
                fVar3 = *pfVar27;
                fVar4 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar24 + 0xdc) = *(float *)((int)lVar24 + 0xdc) * fVar3;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
                lVar26 = lVar26 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar24 = 2;
              do {
                iVar14 = (int)lVar25;
                iVar15 = (int)lVar28;
                lVar25 = lVar25 + 0x10;
                lVar28 = lVar28 + 0x10;
                fVar6 = fVar6 + *(float *)(iVar14 + 0xdc) + *(float *)(iVar15 + 4) +
                        *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar2;
            }
            *(float *)(puVar13 + 0x17) = fVar6;
            fVar6 = mobyutil::g_FrameTime * 10.0;
            *(float *)((int)puVar13 + 0xbc) = mobyutil::g_FrameTime * 10.0;
            *(float *)(puVar13 + 0x18) = fVar6;
            uVar5 = *(undefined4 *)(iVar22 + 0x18);
            *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(iVar22 + 0x10);
            *(undefined4 *)(puVar13 + 7) = uVar5;
            uVar5 = *(undefined4 *)(iVar22 + 0x1c);
            *(undefined4 *)((int)puVar13 + 0x34) = *(undefined4 *)(iVar22 + 0x14);
            *(undefined4 *)((int)puVar13 + 0x3c) = uVar5;
            mobyutil::MB_VecAtan2Angles
                      (puVar13[6],puVar13[7],uVar20 - 200,uVar20 - 0xc4,uVar20 - 0xc0);
            fVar6 = *(float *)(puVar13 + 0x17);
            fVar4 = fVar6 + 1.5707963;
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            fVar3 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar3 = fVar6;
            }
            fVar2 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar2 = fVar4;
            }
            fVar7 = *(float *)((int)puVar13 + 0xbc);
            fVar16 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
              fVar16 = fVar3;
            }
            fVar3 = fVar16 * fVar16;
            fVar6 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
              fVar6 = fVar2;
            }
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            pfVar10[2] = *(float *)(puVar13 + 0x18);
            fVar4 = fVar6 * fVar6;
            fVar2 = fVar3 * fVar3 * fVar16;
            fVar17 = fVar3 * fVar2;
            fVar18 = fVar4 * fVar4 * fVar6;
            fVar19 = fVar4 * fVar18;
            pfVar10[1] = (fVar3 * fVar17 * 2.601887e-06 +
                         fVar17 * -0.0001980741 +
                         fVar2 * 0.0083330255 + fVar3 * fVar16 * -0.16666657 + fVar16) * fVar7;
            auVar40 = loadVectorLeftIndexed(0x34,0x4c39e0);
            auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 |
                                         auVar40 << 0x60,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = vectorSplatHalfWord(auVar39,1);
            uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
            *(undefined2 *)(pfVar10 + 5) = uVar12;
            *pfVar10 = (fVar4 * fVar19 * 2.601887e-06 +
                       fVar19 * -0.0001980741 +
                       fVar18 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * fVar7;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x03';
          }
        }
        moby->damage = -1;
      }
      else {
        moby->state = '\x03';
      }
    }
    goto LAB_004c45b4;
  }
  if (2 < bVar1) {
    if (bVar1 < 4) {
      uVar21 = collproc::CollMobySphere(0x3ff8000000000000,lVar24 + 0x10,0x3f800000,0x10,lVar24,0);
      fVar9 = (moby->pos).z;
      *(f32 *)(puVar13 + 8) = (moby->pos).x;
      *(f32 *)(puVar13 + 9) = fVar9;
      *(f32 *)((int)puVar13 + 0x44) = (moby->pos).y;
      *(f32 *)((int)puVar13 + 0x4c) = (moby->pos).w;
      puVar13[0xf] = 2;
      puVar13[0x10] = 1;
      mobyutil::MB_DamageMobyList
                (dVar34,dVar34,dVar34,lVar24,2,puVar13[8],puVar13[9],&DAT_00a14a00,uVar21,0,
                 &DAT_00810001);
      mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_004c45b4;
  }
  mobyutil::MB_GetLights(lVar24,uVar20 - 0xe0,uVar20 - 0xdc,uVar20 - 0xd8);
  mobyfunc::SetColorOfMoby
            (moby,0xff,(longlong)*(int *)((int)puVar13 + 0xa4),(longlong)*(int *)(puVar13 + 0x15));
  (moby->pos).x = (moby->pos).x + *pfVar10;
  (moby->pos).y = (moby->pos).y + pfVar10[1];
  (moby->pos).z = (moby->pos).z + pfVar10[2];
  pfVar10[2] = -(DAT_0071f418 * 9.8 - pfVar10[2]);
  iVar22 = fastfunc::FastDecTimerS16(uVar29 + 0x14);
  if (iVar22 == 0) {
LAB_004c44cc:
    fVar9 = (moby->pos).z;
    uVar11 = (int)fVar9 >> 0x1f;
    if (0x3fffffff < (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11)) goto LAB_004c45b4;
  }
  else {
    *(float *)(puVar13 + 8) = (float)dVar35;
    *(float *)(puVar13 + 9) = (float)dVar37;
    *(float *)((int)puVar13 + 0x44) = (float)dVar32;
    *(float *)((int)puVar13 + 0x4c) = (float)dVar36;
    iVar22 = mobyupdate_helpers::M938_004c2ce8(lVar24,uVar29,puVar13[8],puVar13[9]);
    if (iVar22 == 0) goto LAB_004c44cc;
  }
  moby->state = '\x03';
LAB_004c45b4:
  fVar9 = (moby->pos).x;
  fVar6 = (moby->pos).z + DAT_008f4c60;
  dVar35 = (double)fVar6;
  uVar11 = (int)fVar9 >> 0x1f;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  (moby->pos).z = fVar6;
  if (((iVar22 < 0x43ff8001 && 0x3f7fffff < iVar22) &&
      (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
      iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar22 < 0x43ff8001 && 0x3f7fffff < iVar22)) &&
     ((dVar34 <= dVar35 && (dVar35 <= dVar33)))) {
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 004c467c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M939_004c467c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M939_004c467c(void)

{
  DAT_008f4cb0 = 0x10000;
  return;
}



//==== 004c4698  ns=mobyupdate_unsorted  size=0x214
// sig: undefined UpdateMoby_939(MobyInstance * moby)
// callers(0): 
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 004c2b28 FUN_004c2b28; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 939 */

void mobyupdate_unsorted::UpdateMoby_939(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_60 [4];
  undefined1 local_50 [32];
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    iVar2 = mobyutil::MB_randRange(DAT_008f4cd4,DAT_008f4cd8);
    *piVar1 = (int)(animationSpeed * ((float)(longlong)iVar2 + 0.5));
    moby->state = '\x01';
  }
  iVar2 = fastfunc::FastDecTimerS32(piVar1);
  if (iVar2 != 0) {
    dVar5 = (double)(moby->rotation).z;
    dVar3 = (double)mobyutil::MB_randRangeFloat(-DAT_008f4cdc,DAT_008f4cdc);
    dVar4 = 0.01745329238474369;
    dVar3 = (double)fastfunc::FastWrapRot((float)dVar5,(float)(dVar3 * 0.01745329238474369));
    dVar5 = (double)mobyutil::MB_randRangeFloat(DAT_008f4ce0,DAT_008f4ce4);
    dVar4 = (double)(float)(dVar5 * dVar4);
    dVar5 = (double)mobyutil::MB_randRangeFloat(DAT_008f4ce8,DAT_008f4cec);
    mobyutil::MB_SphericalToVector
              ((float)(dVar5 * (double)mobyutil::g_FrameTime),(float)dVar3,(float)dVar4,local_60);
    FUN_004c2b28(moby,local_50,local_60);
    sound::PlayMobySound(0,0,moby);
    iVar2 = mobyutil::MB_randRange(DAT_008f4cd4,DAT_008f4cd8);
    *piVar1 = (int)(animationSpeed * ((float)(longlong)iVar2 + 0.5));
  }
  return;
}



//==== 004c48b8  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M939_004c48b8(void)
// callers(0): 
// callees(1): 004c82d0 FUN_004c82d0

void mobyupdate_helpers::M939_004c48b8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar4 = (ulonglong)uVar1;
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  *(undefined4 *)(uVar1 + 0x10) = 0xc0490fda;
  auVar5 = loadVectorLeftIndexed(in_LR,0x4c48b0);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar3 = 0;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x14,uVar4);
  *(undefined4 *)(uVar1 + 0x14 & 0xfffffffc) = uVar2;
  *(char *)(param_1 + 0xbc) =
       (char)((ulonglong)(LZCOUNT((uint)*(byte *)(param_1 + 0xbc)) << 0x20) >> 0x25);
  do {
    if (*(int *)uVar4 != -1) {
      FUN_004c82d0(MobyInstance + *(int *)uVar4);
    }
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 4;
  } while (iVar3 < 4);
  return;
}



//==== 004c49b0  ns=mobyupdate_unsorted  size=0x340
// sig: undefined UpdateMoby_94(MobyInstance * moby)
// callers(0): 
// callees(5): 000fcc68 mobyutil::MB_randRot; 004c82d0 FUN_004c82d0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 94 */

void mobyupdate_unsorted::UpdateMoby_94(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pvVar3 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar11 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar3 + 0x10) = (float)dVar11;
  }
  else if ((moby->state < 2) && (iVar8 = fastfunc::FastDecTimerS32((int)pvVar3 + 0x14), iVar8 != 0))
  {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar6 = fVar1 - g_heroPosition.y;
    fVar7 = fVar2 - g_heroPosition.x;
    if ((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 4.0) && (g_heroState == GRINDRAIL_USE)) {
      if (((DAT_0096a288 != -1) &&
          (fVar6 = ((moby->transform).v1.y * DAT_008f4cf4 +
                   (moby->transform).v2.y * DAT_008f4cf8 +
                   (moby->transform).v0.y * DAT_008f4cf0 + fVar1) - g_heroPosition.y,
          fVar1 = ((moby->transform).v1.x * DAT_008f4cf4 +
                  (moby->transform).v2.x * DAT_008f4cf8 +
                  (moby->transform).v0.x * DAT_008f4cf0 + fVar2) - g_heroPosition.x,
          fVar2 = ((moby->transform).v2.z * DAT_008f4cf8 +
                   (moby->transform).v0.z * DAT_008f4cf0 + (moby->transform).v1.z * DAT_008f4cf4 +
                  (moby->pos).z) - g_heroPosition.z,
          fVar7 = DAT_00969d40 * fVar2 + hero::g_heroGravityMtx * fVar1 + DAT_00969d30 * fVar6,
          ABS(DAT_00969d44 * fVar2 + DAT_00969d24 * fVar1 + DAT_00969d34 * fVar6) < 0.1)) &&
         (((0.0 < fVar7 && (DAT_0096a288 == 3)) || ((fVar7 < 0.0 && (DAT_0096a288 == 2)))))) {
        pvVar4 = moby->pVar;
        uVar10 = ZEXT48(pvVar4);
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        *(undefined4 *)((int)pvVar4 + 0x10) = 0xc0490fda;
        iVar8 = 0;
        auVar15 = loadVectorLeftIndexed(0xc,0x4c4978);
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorMultiplyAddFloatingPoint
                            (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                             auVar16);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x14,uVar10
                          );
        *(undefined4 *)((int)pvVar4 + 0x14U & 0xfffffffc) = uVar5;
        moby->setByGroup =
             (char)((ulonglong)(LZCOUNT((uint)(byte)moby->setByGroup) << 0x20) >> 0x25);
        do {
          if (*(int *)uVar10 != -1) {
            FUN_004c82d0(MobyInstance + *(int *)uVar10);
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 + 4;
        } while (iVar8 < 4);
      }
    }
  }
  dVar12 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar3 + 0x10),mobyutil::g_FrameTime * 12.566371);
  *(float *)((int)pvVar3 + 0x10) = (float)dVar12;
  dVar11 = (double)(float)(3.141592502593994 - dVar12);
  if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
    dVar11 = dVar12;
  }
  dVar13 = (double)(float)(-3.141592502593994 - dVar12);
  if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
    dVar13 = dVar11;
  }
  dVar11 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
  dVar12 = (double)(float)(dVar11 * dVar14);
  dVar11 = (double)(((float)(dVar11 * dVar12) * 2.601887e-06 +
                     (float)(dVar12 * -0.0001980741071747616 +
                            (double)(float)(dVar14 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar11 * dVar13) *
                                                           -0.16666656732559204 + dVar13))) + 1.0) *
                   0.5);
  if (moby->setByGroup == '\0') {
    uVar9 = fastfunc::FastLerpColor(dVar11,0xffffffff80202080,0xffffffff80202020);
  }
  else {
    uVar9 = fastfunc::FastLerpColor(dVar11,0xffffffff80208020,0xffffffff80202020);
  }
  moby->field60_0x90 = uVar9;
  return;
}



//==== 004c4cf0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M940_004c4cf0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M940_004c4cf0(void)

{
  DAT_008f4d4c = 0x10000;
  return;
}



//==== 004c4d08  ns=mobyupdate_helpers  size=0x3c
// sig: undefined M940_004c4d08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M940_004c4d08(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a4);
  if (*piVar1 == param_1) {
    *piVar1 = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a8);
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
  }
  return;
}



//==== 004c4d44  ns=mobyupdate_helpers  size=0x34
// sig: undefined M940_004c4d44(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M940_004c4d44(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a4);
  if (*piVar1 == 0) {
    *piVar1 = param_1;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a8);
    if (*piVar1 == 0) {
      *piVar1 = param_1;
    }
  }
  return;
}



//==== 004c4d78  ns=mobyupdate_helpers  size=0x64
// sig: undefined M940_004c4d78(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M940_004c4d78(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (LZCOUNT(-**(int **)(*(int *)(param_1 + 0x78) + 0x1a4)) << 0x3a) >> 0x3f;
  lVar2 = lVar1 + 2;
  return lVar2 + ((LZCOUNT(-**(int **)(*(int *)(param_1 + 0x78) + 0x1a8)) << 0x3a) >> 0x3f &
                 (lVar1 + 1) - lVar2);
}



//==== 004c4df8  ns=mobyupdate_helpers  size=0x7c8
// sig: undefined M940_004c4df8(void)
// callers(1): 004c5630 mobyupdate_unsorted::UpdateMoby_940
// callees(9): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M940_004c4df8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1d] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  puVar7[0x1b] = unaff_r28;
  fastfunc::FastDecTimerS32(uVar19 + 0x198);
  param_1->scale = param_1->pClass->gScale * DAT_008f4d84;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar13 = mobyutil::MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\a')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f4d70;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f4d70 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar5 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = DAT_008f4d80 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f4d7c;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)(puVar7 + 0x10) = fVar4;
        *(float *)((int)puVar7 + 0x84) = fVar1;
        *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x58;
          lVar15 = uVar9 - 0x68;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xa4) = fVar2;
          *(float *)((int)puVar7 + 0x9c) = fVar2;
          *(float *)(puVar7 + 0x14) = fVar2;
          *(float *)(puVar7 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
          *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
          *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x68;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x84,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        *(float *)((int)pvVar5 + 0x88) = DAT_008f4d78 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f4d74;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)((int)puVar7 + 0x8c) = fVar4;
        *(float *)(puVar7 + 0x12) = fVar1;
        *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x38;
          lVar15 = uVar9 - 0x48;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xc4) = fVar2;
          *(float *)((int)puVar7 + 0xbc) = fVar2;
          *(float *)(puVar7 + 0x18) = fVar2;
          *(float *)(puVar7 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x48;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar7 + 0xf) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x88,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        param_1->state = '\x06';
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
        auVar25 = loadVectorLeftIndexed(0xc,0x4c4ddc);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar26 = loadVectorLeftIndexed(0x198,uVar19);
        auVar27 = loadVectorRightIndexed(0x1a8,uVar19);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = ZEXT416((auVar26._0_4_ | auVar27._0_4_) + auVar25._0_4_) &
                  (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x198,
                            uVar19);
        *(undefined4 *)((int)pvVar5 + 0x198U & 0xfffffffc) = uVar14;
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  *(undefined4 *)((int)pvVar5 + 0x188) = 0x41c00000;
  pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
  iVar12 = mobyutil::MB_getTargetInArea
                     (0x4038000000000000,param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,
                      pSVar6->cnt);
  if ((iVar12 != 2) &&
     ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar5 + 0x124),
      fVar1 = (param_1->pos).x - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x188) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004c5630  ns=mobyupdate_unsorted  size=0x1520
// sig: undefined UpdateMoby_940(MobyInstance * moby)
// callers(0): 
// callees(14): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00119a18 mobyfunc::DoManipulator; 004c4df8 mobyupdate_helpers::M940_004c4df8; 00502758 fastfunc::FastDoubleToInt

/* Moby 940 */

void mobyupdate_unsorted::UpdateMoby_940(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *victim;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  Vec4 *pVVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 *unused;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar32;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar45;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar24 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x2d0;
  puVar14 = (ulonglong *)lVar25;
  *puVar14 = uVar19;
  puVar14[0x5c] = in_LR;
  puVar14[0x4c] = in_f18;
  puVar14[0x4d] = in_f19;
  puVar14[0x4e] = in_f20;
  puVar14[0x4f] = in_f21;
  puVar14[0x50] = in_f22;
  puVar14[0x51] = in_f23;
  puVar14[0x52] = in_f24;
  puVar14[0x53] = in_f25;
  puVar14[0x54] = in_f26;
  puVar14[0x55] = in_f27;
  puVar14[0x56] = in_f28;
  puVar14[0x57] = in_f29;
  puVar14[0x58] = in_f30;
  puVar14[0x59] = in_f31;
  puVar14[0x4b] = unaff_r31;
  puVar14[0x4a] = unaff_r30;
  puVar14[0x49] = unaff_r29;
  puVar14[0x48] = unaff_r28;
  puVar14[0x47] = unaff_r27;
  puVar14[0x46] = unaff_r26;
  puVar14[0x45] = unaff_r25;
  pvVar8 = moby->pVar;
  uVar32 = ZEXT48(pvVar8);
  mobyupdate_helpers::M940_004c4df8(lVar24);
  victim = *(MobyInstance **)((int)pvVar8 + 0x160);
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar8 + 0x280));
  uVar3 = moby->state;
  if (uVar3 == '\b') {
    *(undefined4 *)((int)puVar14 + 300) = 0;
    *(undefined4 *)(puVar14 + 0x25) = 0;
    *(undefined4 *)((int)puVar14 + 0x124) = 0;
    *(undefined4 *)(puVar14 + 0x24) = 0;
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar24,uVar19 - 0x1b0,
               lVar24 + 0x10,0,1,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar3 == '\a') {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar23 & 0x160) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10,&DAT_004c55c0,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar3 == '\x06') {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar23 & 0x41) == 0) {
      if ((uVar23 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\0') {
        puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
      }
      puVar14[0x42] = (longlong)Splines[*(int *)((int)pvVar8 + 400)]->cnt;
      dVar45 = (double)mobyutil::MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
      uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar45 - 1.0));
      *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
    }
  }
  else if (uVar3 == '\x05') {
    iVar31 = *(int *)((int)pvVar8 + 0x194);
    pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
    dVar45 = (double)pSVar13->points[iVar31].x;
    dVar47 = (double)pSVar13->points[iVar31].y;
    fVar1 = (float)(dVar45 - (double)(moby->pos).x);
    fVar2 = (float)(dVar47 - (double)(moby->pos).y);
    dVar35 = (double)pSVar13->points[iVar31].z;
    fVar4 = ABS(fVar1);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar14 + 0x154) = fVar1;
    *(float *)(puVar14 + 0x2b) = fVar2;
    *(float *)((int)puVar14 + 0x15c) = fVar4 - fVar5;
    dVar44 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar14 + 0x154));
    if (*(float *)((int)puVar14 + 0x15c) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar14 + 0x2b));
    if (*(float *)((int)puVar14 + 0x15c) - 0.0 < 0.0) {
      fVar7 = fVar4;
    }
    dVar40 = dVar44;
    if (0.0 < fVar1) {
      lVar27 = uVar19 - 0x2c0;
      lVar33 = uVar19 - 0xf4;
      lVar29 = uVar19 - 0x104;
      lVar34 = 2;
      fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar14 + 0x3b) = fVar1;
      *(float *)(puVar14 + 0x3a) = fVar1;
      *(float *)((int)puVar14 + 0x1d4) = fVar1;
      *(float *)((int)puVar14 + 0x1cc) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x3a) = *(float *)(puVar14 + 0x3a) * fVar4;
      *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar1;
      *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar27 + 0x1cc) = *(float *)((int)lVar27 + 0x1bc) * fVar1 * fVar1;
        iVar31 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar1 * fVar1;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar19 - 0x104;
      pfVar28 = (float *)&DAT_007358e0;
      lVar27 = lVar25;
      lVar29 = lVar33;
      do {
        fVar1 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar27 + 0x1cc) = *(float *)((int)lVar27 + 0x1cc) * fVar1;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
        lVar29 = lVar29 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      lVar27 = lVar25;
      do {
        iVar31 = (int)lVar27;
        iVar12 = (int)lVar33;
        lVar27 = lVar27 + 0x10;
        lVar33 = lVar33 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x1cc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar43 = 8.726646423339844;
    dVar42 = 12.566370964050293;
    mobyutil::OrganicDeltAng
              ((float)dVar40,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,(float *)((int)pvVar8 + 0x19c),0x4c55c0,
               (float *)((int)pvVar8 + 0x1a0));
    fVar1 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    dVar38 = ABS((double)fVar1);
    dVar39 = ABS((double)fVar2);
    *(float *)(puVar14 + 0x29) = fVar1;
    *(float *)((int)puVar14 + 0x14c) = fVar2;
    dVar36 = (double)mobyutil::g_FrameTime;
    *(float *)(puVar14 + 0x2a) = (float)(dVar38 - dVar39);
    dVar37 = (double)DAT_0071f418;
    uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1d) & 4;
    unused = (undefined4 *)((uint)(uVar26 << 2) | 0x735900);
    dVar40 = ABS((double)*(float *)(puVar14 + 0x29));
    if ((double)*(float *)(puVar14 + 0x2a) - dVar44 < 0.0) {
      dVar40 = dVar39;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar39 = ABS((double)*(float *)((int)puVar14 + 0x14c));
    if ((double)*(float *)(puVar14 + 0x2a) - dVar44 < 0.0) {
      dVar39 = dVar38;
    }
    fVar2 = (float)unused[1];
    dVar38 = dVar44;
    if (dVar44 < dVar40) {
      lVar27 = uVar19 - 0x2c0;
      lVar29 = uVar19 - 0x124;
      lVar33 = uVar19 - 0x114;
      lVar34 = 2;
      fVar5 = (float)(dVar39 - dVar40) / (float)(dVar39 + dVar40);
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x37) = fVar5;
      *(float *)(puVar14 + 0x36) = fVar5;
      *(float *)((int)puVar14 + 0x1b4) = fVar5;
      *(float *)((int)puVar14 + 0x1ac) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x36) = *(float *)(puVar14 + 0x36) * fVar4;
      *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar5;
      *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar27 + 0x1ac) = *(float *)((int)lVar27 + 0x19c) * fVar5 * fVar5;
        iVar31 = (int)lVar29;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar5 * fVar5;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar19 - 0x124;
      pfVar28 = (float *)&DAT_007358e0;
      lVar27 = lVar25;
      lVar29 = lVar33;
      do {
        fVar5 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar27 + 0x1ac) = *(float *)((int)lVar27 + 0x1ac) * fVar5;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
        lVar29 = lVar29 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      lVar27 = lVar25;
      dVar40 = dVar44;
      do {
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        iVar12 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x1ac)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      unused = &DAT_004c55c0;
      dVar38 = (double)((float)(dVar40 + 0.7853981852531433) * fVar1 + fVar2);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar38,(float)(dVar37 * dVar43),(float)(dVar37 * dVar43),
               (float)(dVar36 * dVar42),&(moby->rotation).z,(int)unused,
               (float *)((int)pvVar8 + 0x18c));
    fVar1 = *(float *)((int)pvVar8 + 0x19c);
    dVar48 = 3.141592502593994;
    dVar42 = 1.570796251296997;
    fVar5 = fVar1 + 1.5707963;
    dVar46 = -3.141592502593994;
    dVar43 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar37 = 2.601886990305502e-06;
    dVar36 = 2.0;
    dVar40 = (double)(moby->rotation).z;
    *(undefined4 *)(puVar14 + 0x1d) = 0;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar6 = fVar7 * fVar7;
    fVar18 = fVar2 * fVar2;
    fVar5 = fVar6 * fVar6 * fVar7;
    fVar15 = fVar18 * fVar18 * fVar2;
    fVar4 = fVar6 * fVar5;
    fVar16 = fVar18 * fVar15;
    *(float *)((int)puVar14 + 0xe4) =
         (fVar6 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar6 * fVar7 * -0.16666657 + fVar7) * 2.0;
    dVar41 = 1.0;
    (moby->rotation).z = fVar1;
    *(float *)(puVar14 + 0x1c) =
         (fVar18 * fVar16 * 2.601887e-06 +
         fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar18 * fVar2 * -0.16666657 + fVar2) *
         2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),puVar14 + 0x1c,
               puVar14 + 0x1e);
    fVar1 = (float)((double)(moby->pos).y - dVar47);
    fVar2 = (float)((double)(moby->pos).x - dVar45);
    fVar5 = (float)((double)(moby->pos).z - dVar35);
    (moby->rotation).z = (float)dVar40;
    if ((double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1) < dVar36) {
      puVar14[0x42] = (longlong)Splines[*(int *)((int)pvVar8 + 400)]->cnt;
      dVar45 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)(longlong)puVar14[0x42]);
      uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar45 - dVar41));
      *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
    }
    if (*(int *)((int)pvVar8 + 0x198) == 1) {
      auVar49 = ZEXT416(0xffffffff);
      auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
      fVar1 = (moby->pos).x;
      iVar31 = -0xbf0;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      fVar5 = (victim->pos).x - fVar1;
      auVar49 = loadVectorLeftIndexed(0x50,0x4c55c0);
      auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar2 = (moby->pos).y;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                           auVar50);
      fVar4 = (victim->pos).y - fVar2;
      dVar47 = ABS((double)fVar5);
      dVar35 = ABS((double)fVar4);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
      auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,uVar32
                         );
      *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
      *(float *)((int)puVar14 + 0x13c) = fVar5;
      *(float *)((int)puVar14 + 0x144) = (float)(dVar47 - dVar35);
      *(float *)(puVar14 + 0x28) = fVar4;
      uVar32 = (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1d) & 4;
      dVar45 = ABS((double)*(float *)((int)puVar14 + 0x13c));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar44 < 0.0) {
        dVar45 = dVar35;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
      dVar35 = ABS((double)*(float *)(puVar14 + 0x28));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar44 < 0.0) {
        dVar35 = dVar47;
      }
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar45) {
        lVar27 = uVar19 - 0x2c0;
        lVar29 = uVar19 - 0x144;
        lVar33 = uVar19 - 0x134;
        lVar34 = 2;
        fVar7 = (float)(dVar35 - dVar45) / (float)(dVar35 + dVar45);
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar14 + 0x33) = fVar7;
        *(float *)(puVar14 + 0x32) = fVar7;
        *(float *)((int)puVar14 + 0x194) = fVar7;
        *(float *)((int)puVar14 + 0x18c) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x32) = *(float *)(puVar14 + 0x32) * fVar6;
        *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar7;
        *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar27 + 0x18c) = *(float *)((int)lVar27 + 0x17c) * fVar7 * fVar7;
          iVar31 = (int)lVar29;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar7 * fVar7;
          lVar33 = lVar33 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar33 = uVar19 - 0x144;
        pfVar28 = (float *)&DAT_007358e0;
        lVar27 = lVar25;
        lVar29 = lVar33;
        do {
          fVar7 = *pfVar28;
          fVar6 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar27 + 0x18c) = *(float *)((int)lVar27 + 0x18c) * fVar7;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar29 = 2;
        lVar27 = lVar25;
        dVar45 = dVar44;
        do {
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar30 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          iVar31 = (int)lVar33;
          dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar12 + 0x18c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar47 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar47 = (double)(float)(dVar47 + dVar42);
      dVar45 = (double)(float)(dVar48 - dVar47);
      if (dVar47 - (double)(float)(dVar48 - dVar47) < 0.0) {
        dVar45 = dVar47;
      }
      dVar35 = (double)(float)(dVar46 - dVar47);
      if ((double)(float)(dVar46 - dVar47) - dVar45 < 0.0) {
        dVar35 = dVar45;
      }
      dVar45 = (double)(float)(dVar35 * dVar35);
      dVar40 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar35));
      dVar47 = (double)(float)(dVar45 * dVar40);
      *(float *)(puVar14 + 0x20) =
           (float)((double)(float)(dVar45 * dVar47) * dVar37 +
                  (double)(float)(dVar47 * dVar38 +
                                 (double)(float)(dVar40 * dVar39 +
                                                (double)(float)((double)(float)(dVar45 * dVar35) *
                                                                dVar43 + dVar35)))) * 0.2;
      fVar1 = (victim->pos).x - fVar1;
      fVar2 = (victim->pos).y - fVar2;
      dVar47 = ABS((double)fVar1);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar14 + 0x26) = fVar1;
      *(float *)((int)puVar14 + 0x134) = fVar2;
      *(float *)(puVar14 + 0x27) = (float)(dVar47 - dVar35);
      uVar32 = (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x134) >> 0x1d) & 4;
      dVar45 = ABS((double)*(float *)(puVar14 + 0x26));
      if ((double)*(float *)(puVar14 + 0x27) - dVar44 < 0.0) {
        dVar45 = dVar35;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar1 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar35 = ABS((double)*(float *)((int)puVar14 + 0x134));
      if ((double)*(float *)(puVar14 + 0x27) - dVar44 < 0.0) {
        dVar35 = dVar47;
      }
      if (dVar44 < dVar45) {
        lVar27 = uVar19 - 0x2c0;
        lVar33 = uVar19 - 0x154;
        lVar29 = uVar19 - 0x164;
        lVar34 = 2;
        fVar5 = (float)(dVar35 - dVar45) / (float)(dVar35 + dVar45);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x2f) = fVar5;
        *(float *)(puVar14 + 0x2e) = fVar5;
        *(float *)((int)puVar14 + 0x174) = fVar5;
        *(float *)((int)puVar14 + 0x16c) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x2e) = *(float *)(puVar14 + 0x2e) * fVar4;
        *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar5;
        *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar27 + 0x16c) = *(float *)((int)lVar27 + 0x15c) * fVar5 * fVar5;
          iVar31 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar5 * fVar5;
          lVar33 = lVar33 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar33 = uVar19 - 0x164;
        pfVar28 = (float *)&DAT_007358e0;
        lVar27 = lVar25;
        lVar29 = lVar33;
        do {
          fVar5 = *pfVar28;
          fVar4 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar27 + 0x16c) = *(float *)((int)lVar27 + 0x16c) * fVar5;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar27 = 2;
        do {
          iVar12 = (int)lVar25;
          iVar30 = (int)lVar33;
          lVar25 = lVar25 + 0x10;
          lVar33 = lVar33 + 0x10;
          iVar31 = (int)lVar33;
          dVar44 = (double)((float)(dVar44 + (double)*(float *)(iVar12 + 0x16c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar44 = (double)((float)(dVar44 + 0.7853981852531433) * fVar2 + fVar1);
      }
      *(undefined4 *)(puVar14 + 0x21) = 0;
      dVar45 = (double)(float)(dVar48 - dVar44);
      if (dVar44 - (double)(float)(dVar48 - dVar44) < 0.0) {
        dVar45 = dVar44;
      }
      dVar47 = (double)(float)(dVar46 - dVar44);
      if ((double)(float)(dVar46 - dVar44) - dVar45 < 0.0) {
        dVar47 = dVar45;
      }
      dVar45 = (double)(float)(dVar47 * dVar47);
      dVar44 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar47));
      dVar35 = (double)(float)(dVar45 * dVar44);
      *(float *)((int)puVar14 + 0x104) =
           (float)((double)(float)(dVar45 * dVar35) * dVar37 +
                  (double)(float)(dVar35 * dVar38 +
                                 (double)(float)(dVar44 * dVar39 +
                                                (double)(float)((double)(float)(dVar45 * dVar47) *
                                                                dVar43 + dVar47)))) * 0.2;
      *(f32 *)(puVar14 + 0x22) = (victim->pos).x;
      *(f32 *)((int)puVar14 + 0x114) = (victim->pos).y;
      fVar1 = (victim->pos).z;
      *(float *)(puVar14 + 0x23) = fVar1;
      *(f32 *)((int)puVar14 + 0x11c) = (victim->pos).w;
      *(float *)(puVar14 + 0x23) = fVar1 + 0.75;
      mobyutil::CollDamageMobyDirect
                ((float)dVar41,victim,moby,0x10001,iVar31,(float *)(puVar14 + 0x22),
                 (float *)(puVar14 + 0x20));
    }
    if ((*(int *)((int)pvVar8 + 0x164) == 2) && (moby->state = '\x04', moby->animationId != '\0')) {
      puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
    }
    RegisterFuncForMoby(&PTR_M945_004c6b80_0070f848,moby);
  }
  else if (uVar3 == '\x04') {
    if (*(int *)((int)pvVar8 + 0x164) == 2) {
      *(undefined4 *)((int)pvVar8 + 0x1ac) = 0;
      piVar10 = *(int **)((int)moby->pVar + 0x1a4);
      if ((MobyInstance *)*piVar10 == moby) {
        *piVar10 = 0;
      }
      else {
        piVar10 = *(int **)((int)moby->pVar + 0x1a8);
        if ((MobyInstance *)*piVar10 == moby) {
          *piVar10 = 0;
        }
      }
    }
    else {
      pvVar9 = moby->pVar;
      iVar22 = *(int *)((int)pvVar8 + 0x1ac) + 1;
      *(int *)((int)pvVar8 + 0x1ac) = iVar22;
      piVar10 = *(int **)((int)pvVar9 + 0x1a4);
      piVar11 = *(int **)((int)pvVar9 + 0x1a8);
      iVar31 = *piVar10;
      iVar12 = *piVar11;
      iVar17 = (int)((LZCOUNT(-iVar31) << 0x3a) >> 0x3f);
      iVar30 = iVar17 + 2;
      iVar30 = iVar30 + ((uint)((LZCOUNT(-iVar12) << 0x3a) >> 0x3f) & (iVar17 + 1) - iVar30);
      if (iVar30 == 0) {
        if (iVar31 != 0) {
          if (iVar12 == 0) {
            *piVar11 = (int)moby;
          }
        }
        else {
          *piVar10 = (int)moby;
        }
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar14 + 0x214));
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x48,0x4c55c0);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,
                            uVar32);
        *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
        puVar14[0x42] = (longlong)pSVar13->cnt;
        dVar45 = (double)mobyutil::MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
        uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar45 - 1.0));
        *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
      }
      else if ((iVar30 == 1) &&
              (puVar14[0x42] = (longlong)(int)(animationSpeed * 120.5),
              *(int *)((int)puVar14 + 0x214) <= iVar22)) {
        if (iVar31 != 0) {
          if (iVar12 == 0) {
            *piVar11 = (int)moby;
          }
        }
        else {
          *piVar10 = (int)moby;
        }
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar14 + 0x214));
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x48,0x4c55c0);
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,
                            uVar32);
        *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
        puVar14[0x42] = (longlong)pSVar13->cnt;
        dVar45 = (double)mobyutil::MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
        uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar45 - 1.0));
        *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
      }
    }
  }
  else if (uVar3 == '\x03') {
    pVVar21 = Splines[*(int *)((int)pvVar8 + 0x1b4)]->points +
              Splines[*(int *)((int)pvVar8 + 0x1b4)]->cnt + -1;
    dVar47 = (double)pVVar21->x;
    dVar45 = (double)pVVar21->y;
    fVar1 = (float)(dVar47 - (double)(moby->pos).x);
    fVar2 = (float)(dVar45 - (double)(moby->pos).y);
    fVar5 = ABS(fVar1);
    fVar4 = ABS(fVar2);
    *(float *)(puVar14 + 0x2c) = fVar1;
    *(float *)((int)puVar14 + 0x164) = fVar2;
    *(float *)(puVar14 + 0x2d) = fVar5 - fVar4;
    fVar1 = 0.0;
    uVar32 = (ulonglong)(*(uint *)(puVar14 + 0x2c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar14 + 0x2c));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar14 + 0x164));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    if (0.0 < fVar2) {
      lVar24 = uVar19 - 0x2c0;
      lVar29 = uVar19 - 0xd4;
      lVar27 = uVar19 - 0xe4;
      lVar33 = 2;
      fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar14 + 0x3f) = fVar2;
      *(float *)(puVar14 + 0x3e) = fVar2;
      *(float *)((int)puVar14 + 500) = fVar2;
      *(float *)((int)puVar14 + 0x1ec) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x3e) = *(float *)(puVar14 + 0x3e) * fVar5;
      *(float *)((int)puVar14 + 500) = *(float *)((int)puVar14 + 500) * fVar2;
      *(float *)(puVar14 + 0x3f) = *(float *)(puVar14 + 0x3f) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar24 + 0x1ec) = *(float *)((int)lVar24 + 0x1dc) * fVar2 * fVar2;
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar19 - 0xe4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar27 = lVar29;
      do {
        fVar2 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar24 + 0x1ec) = *(float *)((int)lVar24 + 0x1ec) * fVar2;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar24 = 2;
      do {
        iVar31 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar12 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar31 + 0x1ec) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar4;
    }
    mobyutil::OrganicDeltAng
              (fVar1,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar8 + 0x18c));
    fVar1 = (moby->rotation).z;
    fVar5 = fVar1 + 1.5707963;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    *(undefined4 *)(puVar14 + 0x19) = 0;
    fVar1 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
      fVar1 = fVar4;
    }
    fVar5 = fVar7 * fVar7;
    fVar2 = fVar1 * fVar1;
    fVar4 = fVar5 * fVar5 * fVar7;
    fVar6 = fVar5 * fVar4;
    fVar15 = fVar2 * fVar2 * fVar1;
    fVar16 = fVar2 * fVar15;
    *(float *)((int)puVar14 + 0xc4) =
         (fVar5 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 2.0;
    dVar35 = 1.0;
    *(float *)(puVar14 + 0x18) =
         (fVar2 * fVar16 * 2.601887e-06 +
         fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar2 * fVar1 * -0.16666657 + fVar1) * 2.0
    ;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),puVar14 + 0x18,
               puVar14 + 0x1a);
    fVar1 = (float)((double)(moby->pos).y - dVar45);
    fVar2 = (float)((double)(moby->pos).x - dVar47);
    if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) < dVar35) {
      *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 1.5;
      moby->state = '\x04';
    }
  }
  else if (uVar3 == '\x02') {
    if (*(int *)((int)pvVar8 + 0x164) != 2) {
      *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 4.0;
      moby->state = '\x03';
    }
  }
  else if (uVar3 == '\0') {
    *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
    *(undefined2 *)((int)pvVar8 + 0x24) = 1;
    *(undefined1 *)((int)pvVar8 + 0x28) = 0;
    *(undefined1 *)((int)pvVar8 + 0x29) = 1;
    mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
    *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
    *(undefined4 *)((int)pvVar8 + 0xd8) = 0x3f000000;
    uVar20 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar8 + 0xd0) = uVar20;
    *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 1.5;
    *(f32 *)((int)pvVar8 + 0x19c) = (moby->rotation).z;
    **(undefined4 **)((int)pvVar8 + 0x1a4) = 0;
    **(undefined4 **)((int)pvVar8 + 0x1a8) = 0;
    moby->state = '\x04';
    if (moby->animationId != '\0') {
      puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
    }
    if (*(int *)((int)pvVar8 + 0x1b0) != 0) {
      moby->state = '\x02';
      pSVar13 = Splines[*(int *)((int)pvVar8 + 0x1b4)];
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      (moby->pos).z = pSVar13->points[0].z;
      (moby->pos).w = pSVar13->points[0].w;
    }
  }
  return;
}



//==== 004c6b80  ns=mobyupdate_helpers  size=0x4dc
// sig: undefined M945_004c6b80(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 0012d0e8 partupd::SpawnPart_41; 00500af8 fastfunc::FastMtx4Identity; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M945_004c6b80(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  longlong lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar23 = uVar16 - 0x1b0;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar16;
  puVar14[0x38] = in_LR;
  puVar14[0x33] = in_f29;
  puVar14[0x34] = in_f30;
  puVar14[0x35] = in_f31;
  puVar14[0x32] = unaff_r31;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  puVar14[0x31] = unaff_r30;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar14[0x2e] = unaff_r27;
  puVar14[0x2d] = unaff_r26;
  puVar14[0x2c] = unaff_r25;
  iVar13 = *(int *)(iVar12 + 0x160);
  fastfunc::FastMtx4Identity((float *)(puVar14 + 0x10));
  uVar17 = draw::GetEffectTex(0xe);
  puVar14[0x27] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar14[0x28] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar14[0x26] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010e47d0,DAT_008f4d90,DAT_010e47d4,DAT_008f4d94,0x80);
  uVar19 = *(undefined4 *)(iVar12 + 0x198);
  puVar14[0x29] = uVar17;
  dVar26 = (double)fastfunc::FastIntToDouble(uVar19);
  dVar26 = (double)(float)(dVar26 / (double)(animationSpeed * 180.0));
  uVar19 = fastfunc::FastLerpColor(dVar26,DAT_008f4d88,DAT_008f4d8c);
  *(undefined4 *)((int)puVar14 + 0x10c) = uVar19;
  *(undefined4 *)(puVar14 + 0x21) = uVar19;
  *(undefined4 *)((int)puVar14 + 0x104) = uVar19;
  *(undefined4 *)(puVar14 + 0x20) = uVar19;
  uVar19 = *(undefined4 *)(param_1 + 0x10);
  puVar22 = &DAT_008f4da0;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar21 = &DAT_008f4da4;
  fVar2 = *(float *)(param_1 + 0x18);
  lVar20 = uVar16 - 0xa0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  lVar18 = uVar16 - 0x9c;
  uVar4 = *(undefined4 *)(iVar13 + 0x10);
  lVar25 = 2;
  uVar5 = *(undefined4 *)(iVar13 + 0x14);
  fVar6 = *(float *)(iVar13 + 0x18);
  uVar7 = *(undefined4 *)(iVar13 + 0x1c);
  do {
    uVar8 = *puVar21;
    *(undefined4 *)((int)lVar23 + 0x110) = *puVar22;
    uVar9 = puVar22[2];
    *(undefined4 *)((int)lVar23 + 0x114) = uVar8;
    uVar8 = puVar21[2];
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar9;
    puVar21 = puVar21 + 4;
    *(undefined4 *)((int)lVar18 + 8) = uVar8;
    lVar20 = lVar20 + 0x10;
    lVar18 = lVar18 + 0x10;
    lVar23 = lVar23 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  *(undefined4 *)(puVar14 + 0x18) = uVar19;
  *(undefined4 *)((int)puVar14 + 0xc4) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xcc) = uVar3;
  *(undefined4 *)(puVar14 + 0x1a) = uVar19;
  *(undefined4 *)((int)puVar14 + 0xd4) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xdc) = uVar3;
  *(float *)(puVar14 + 0x19) = fVar2 + 0.85;
  *(undefined4 *)(puVar14 + 0x1c) = uVar4;
  *(undefined4 *)((int)puVar14 + 0xe4) = uVar5;
  *(undefined4 *)((int)puVar14 + 0xec) = uVar7;
  *(float *)(puVar14 + 0x1b) = fVar2 + 1.1;
  dVar36 = 1.0;
  *(undefined4 *)(puVar14 + 0x1e) = uVar4;
  *(undefined4 *)((int)puVar14 + 0xf4) = uVar5;
  *(undefined4 *)((int)puVar14 + 0xfc) = uVar7;
  uVar19 = EffectTexHeaders;
  *(float *)(puVar14 + 0x1d) = fVar6 + 1.0;
  *(float *)(puVar14 + 0x1f) = fVar6 + 1.25;
  draw::FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,uVar19,9);
  dVar27 = (double)*(float *)(iVar13 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x14);
  dVar32 = (double)*(float *)(iVar13 + 0x10);
  fVar2 = (float)(dVar27 - dVar29);
  dVar33 = (double)*(float *)(param_1 + 0x10);
  fVar6 = (float)(dVar32 - dVar33);
  dVar35 = 0.0;
  fVar10 = *(float *)(iVar13 + 0x18);
  uVar19 = *(undefined4 *)(iVar13 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar14 + 0xcc) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xdc) = uVar1;
  fVar11 = fVar11 + 0.975;
  *(undefined4 *)((int)puVar14 + 0xec) = uVar19;
  uVar1 = EffectTexHeaders;
  *(float *)(puVar14 + 0x19) = fVar11;
  *(float *)(puVar14 + 0x1b) = fVar11;
  fVar11 = SQRT(fVar6 * fVar6 + --(fVar2 * fVar2));
  uVar24 = 9;
  dVar34 = (double)(fVar6 * (0.125 / fVar11));
  dVar30 = -(double)(fVar2 * (0.125 / fVar11));
  dVar28 = dVar35;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = dVar34;
  }
  dVar31 = dVar35;
  if (0.0 - fVar11 < 0.0) {
    dVar31 = dVar30;
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = dVar34;
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar31 = dVar30;
  }
  *(float *)((int)puVar14 + 0xc4) = (float)(dVar29 + dVar28);
  *(float *)((int)puVar14 + 0xd4) = (float)(dVar29 - dVar28);
  *(float *)(puVar14 + 0x18) = (float)(dVar33 + dVar31);
  *(float *)(puVar14 + 0x1a) = (float)(dVar33 - dVar31);
  *(float *)(puVar14 + 0x1c) = (float)(dVar32 + dVar31);
  *(float *)((int)puVar14 + 0xe4) = (float)(dVar27 + dVar28);
  *(undefined4 *)((int)puVar14 + 0xfc) = uVar19;
  *(float *)(puVar14 + 0x1e) = (float)(dVar32 - dVar31);
  *(float *)((int)puVar14 + 0xf4) = (float)(dVar27 - dVar28);
  fVar10 = fVar10 + 1.125;
  *(float *)(puVar14 + 0x1d) = fVar10;
  *(float *)(puVar14 + 0x1f) = fVar10;
  draw::FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,uVar1);
  fVar6 = (float)((double)*(float *)((int)puVar14 + 0xe4) - (double)*(float *)((int)puVar14 + 0xc4))
  ;
  fVar10 = (float)((double)*(float *)(puVar14 + 0x1c) - (double)*(float *)(puVar14 + 0x18));
  fVar11 = (float)((double)*(float *)(puVar14 + 0x1d) - (double)*(float *)(puVar14 + 0x19));
  *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)((int)puVar14 + 0xec);
  fVar15 = animationSpeed;
  iVar12 = *(int *)(iVar12 + 0x198);
  dVar27 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar6 * fVar6);
  fVar2 = (float)(1.5 / dVar27);
  dVar28 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar28 = (double)(fVar11 * fVar2);
  }
  dVar29 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar29 = (double)(fVar6 * fVar2);
  }
  dVar30 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar30 = (double)(fVar10 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar28 = (double)(fVar11 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar29 = (double)(fVar6 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar30 = (double)(fVar10 * fVar2);
  }
  *(float *)(puVar14 + 0xf) = (float)(dVar28 + (double)*(float *)(puVar14 + 0x19));
  *(float *)((int)puVar14 + 0x74) = (float)(dVar29 + (double)*(float *)((int)puVar14 + 0xc4));
  *(float *)(puVar14 + 0xe) = (float)(dVar30 + (double)*(float *)(puVar14 + 0x18));
  puVar14[0x2a] = (longlong)(int)(fVar15 * 30.5);
  if (iVar12 < *(int *)((int)puVar14 + 0x154)) {
    dVar28 = (double)fastfunc::FastIntToDouble(iVar12);
    fVar2 = (float)(dVar28 / (double)(animationSpeed * 30.0));
    *(float *)(puVar14 + 0xe) =
         fVar2 * (*(float *)(puVar14 + 0xe) - *(float *)(puVar14 + 0x1e)) +
         *(float *)(puVar14 + 0x1e);
    *(float *)((int)puVar14 + 0x74) =
         fVar2 * (*(float *)((int)puVar14 + 0x74) - *(float *)((int)puVar14 + 0xf4)) +
         *(float *)((int)puVar14 + 0xf4);
    *(float *)(puVar14 + 0xf) =
         fVar2 * (*(float *)(puVar14 + 0xf) - *(float *)(puVar14 + 0x1f)) +
         *(float *)(puVar14 + 0x1f);
  }
  partupd::SpawnPart_41
            ((float)(dVar36 - dVar26),puVar14 + 0xe,param_1,0,0x80000080,uVar24,0x7f,2,0xff);
  return;
}



//==== 004c705c  ns=mobyupdate_helpers  size=0x4
// sig: undefined M945_004c705c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M945_004c705c(void)

{
  return;
}



//==== 004c7060  ns=mobyupdate_helpers  size=0x3c
// sig: undefined M945_004c7060(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M945_004c7060(int param_1)

{
  undefined8 uVar1;
  
  if (**(int **)(*(int *)(param_1 + 0x78) + 0x1a4) == param_1) {
    uVar1 = 1;
  }
  else if (**(int **)(*(int *)(param_1 + 0x78) + 0x1a8) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 004c709c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M945_004c709c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M945_004c709c(void)

{
  DAT_008f4e0c = 0x10000;
  return;
}



//==== 004c70b0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_945(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 945 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_945(MobyInstance *moby)

{
  return moby;
}



//==== 004c70b4  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_946(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 946 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_946(MobyInstance *moby)

{
  return moby;
}



//==== 004c70d0  ns=mobyupdate_unsorted  size=0x3d4
// sig: undefined UpdateMoby_947(MobyInstance * moby)
// callers(0): 
// callees(11): 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 001150f8 mobyutil::MB_PathPosAtDist; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 001bc0b0 FUN_001bc0b0; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 00658d34: 'Moby947 maya instance %d HAS NO PATH!!!\n\n\nMoron.\nMobyDeleted\n'

/* Moby 947 */

void mobyupdate_unsorted::UpdateMoby_947(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  Vec4 local_50;
  int local_40;
  undefined1 auStack_3c [12];
  
  piVar2 = (int *)moby->pVar;
  if (*piVar2 == -1) {
    libc::printf("Moby947 maya instance %d HAS NO PATH!!!\n\n\nMoron.\nMobyDeleted\n",moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    pSVar3 = Splines[*piVar2];
    moby->updateDistance = -1;
    if (bVar1 == 0) {
      if (piVar2[3] != -1) {
        lights::DeletePointLight(piVar2[3]);
        piVar2[3] = -1;
      }
      iVar9 = piVar2[4];
      if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar9].state != '\0')) {
        sound::sound_Kill(iVar9);
      }
      piVar2[4] = -1;
      iVar9 = fastfunc::FastDecTimerS32(ZEXT48(piVar2) + 8);
      if (iVar9 != 0) {
        moby->state = '\x01';
        piVar2[1] = 0;
      }
    }
    else if (bVar1 < 2) {
      fVar5 = pSVar3->points[0].y - pSVar3->points[1].y;
      fVar6 = pSVar3->points[0].x - pSVar3->points[1].x;
      fVar7 = pSVar3->points[0].z - pSVar3->points[1].z;
      dVar11 = 5.0;
      fVar8 = mobyutil::g_FrameTime * 5.0 + (float)piVar2[1];
      dVar10 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      piVar2[1] = (int)fVar8;
      mobyutil::MB_PathPosAtDist
                ((double)fVar8,dVar10,&DAT_00720000,bVar1,pSVar3,&local_40,auStack_3c,&local_50);
      iVar9 = piVar2[3];
      if (iVar9 == -1) {
        iVar9 = lights::CreatePointLight2
                          (3.0,0,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,&local_50)
        ;
        piVar2[3] = iVar9;
      }
      else {
        PointLights[iVar9].pos.x = local_50.x;
        PointLights[iVar9].pos.y = local_50.y;
        PointLights[iVar9].pos.w = 3.0;
        PointLights[iVar9].pos.z = local_50.z;
        PointLights[iVar9].color.x = 1.0;
        PointLights[iVar9].color.y = 1.0;
        PointLights[iVar9].color.z = 0.5;
        PointLights[iVar9].color.w = 0.0;
      }
      iVar9 = mobyutil::MB_randInt(2);
      if (iVar9 == 0) {
        if ((worldUpdateTime & 1) != 0) {
          FUN_001bc0b0((double)(float)piVar2[1],
                       (double)(float)((double)mobyutil::g_FrameTime * dVar11),dVar10,moby,&local_50
                       ,pSVar3);
        }
        iVar9 = sound::IsMobyPlayingSound(moby,piVar2[4]);
        if (iVar9 == 0) {
          iVar9 = sound::sound_MobyPlay_oClass(0,0xc,moby,0x442);
          piVar2[4] = iVar9;
          if (iVar9 != -1) {
            iVar9 = (int)((longlong)iVar9 << 7) - (int)((longlong)iVar9 << 4);
            *(float *)((int)sound::g_SoundChannels + iVar9 + 0x20) = local_50.x;
            *(float *)((int)sound::g_SoundChannels + iVar9 + 0x24) = local_50.y;
            *(float *)((int)sound::g_SoundChannels + iVar9 + 0x28) = local_50.z;
            *(float *)((int)sound::g_SoundChannels + iVar9 + 0x2c) = local_50.w;
          }
        }
        else {
          iVar9 = piVar2[4];
          sound::g_SoundChannels[iVar9].pos[0] = local_50.x;
          sound::g_SoundChannels[iVar9].pos[1] = local_50.y;
          sound::g_SoundChannels[iVar9].pos[2] = local_50.z;
          sound::g_SoundChannels[iVar9].pos[3] = local_50.w;
        }
        if (local_40 == pSVar3->cnt + -1) {
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          moby->state = '\0';
          auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar12 = loadVectorLeftIndexed(0x14,0x4c70b8);
          auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorMultiplyAddFloatingPoint
                              (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60
                               ,auVar13);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,8,
                             ZEXT48(piVar2));
          *(undefined4 *)((uint)(piVar2 + 2) & 0xfffffffc) = uVar4;
        }
      }
    }
  }
  return;
}



//==== 004c74b0  ns=mobyupdate_unsorted  size=0x190
// sig: undefined UpdateMoby_978(MobyInstance * moby)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 000fe610 mobyutil::MB_SphericalToVector; 0012d2e0 partupd::SpawnPart_42; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 978 */

void mobyupdate_unsorted::UpdateMoby_978(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float afStack_20 [4];
  
  bVar1 = moby->state;
  pfVar2 = (float *)moby->pVar;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    fVar3 = (float)fastfunc::FastDoubleToInt((double)(animationSpeed * 60.0 * *pfVar2));
    pfVar2[3] = fVar3;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    iVar4 = fastfunc::FastDecTimerS32(pfVar2 + 3);
    if (iVar4 != 0) {
      fVar3 = (float)fastfunc::FastDoubleToInt((double)(animationSpeed * 60.0 * pfVar2[2]));
      pfVar2[3] = fVar3;
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    iVar4 = fastfunc::FastDecTimerS32(pfVar2 + 3);
    if (iVar4 == 0) {
      mobyutil::MB_SphericalToVector
                (mobyutil::g_FrameTime * 3.0,(moby->rotation).z,(moby->rotation).y,afStack_20);
      iVar4 = mobyutil::MB_randInt(1);
      if (iVar4 == 0) {
        partupd::SpawnPart_42((longlong)(int)moby + 0x10,afStack_20,0,(longlong)(int)moby);
      }
    }
    else {
      fVar3 = (float)fastfunc::FastDoubleToInt((double)(animationSpeed * 60.0 * pfVar2[1]));
      pfVar2[3] = fVar3;
      moby->state = '\x01';
    }
  }
  return;
}



//==== 004c76b8  ns=mobyupdate_unsorted  size=0x9a8
// sig: undefined UpdateMoby_979(MobyInstance * moby)
// callers(0): 
// callees(4): 0005e598 collproc::CollMobySphere; 00105ab4 mobyutil::CollDamageMobyDirect; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 979 */

void mobyupdate_unsorted::UpdateMoby_979(MobyInstance *moby)

{
  longlong lVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar14;
  puVar9[0x2a] = in_LR;
  puVar9[0x22] = unaff_r26;
  uVar2 = moby->state;
  puVar9[0x26] = unaff_r30;
  pvVar6 = moby->pVar;
  puVar9[0x1f] = unaff_r23;
  puVar9[0x27] = unaff_r31;
  puVar9[0x25] = unaff_r29;
  puVar9[0x24] = unaff_r28;
  puVar9[0x23] = unaff_r27;
  puVar9[0x21] = unaff_r25;
  puVar9[0x20] = unaff_r24;
  if (uVar2 == '\0') {
    fVar3 = (moby->pos).z;
    moby->state = '\x01';
    (moby->pos).z = fVar3 + 0.1;
  }
  if ((*(int *)((int)pvVar6 + 0x10) != -1) &&
     (MobyInstance[*(int *)((int)pvVar6 + 0x10)].state == '\x02')) {
    *(MobyInstance **)(puVar9 + 0x18) = moby;
    *(undefined **)((int)puVar9 + 0xc4) = &DAT_00810001;
    *(undefined4 *)((int)puVar9 + 0xcc) = 0x3f800000;
    *(undefined **)(puVar9 + 0x1a) = &DAT_00810001;
    *(undefined1 *)(puVar9 + 0x19) = 2;
    MVar5 = moby->oClass;
    *(undefined1 *)((int)puVar9 + 0xc9) = 1;
    *(MOBY_OCLASSES *)((int)puVar9 + 0xca) = MVar5;
    *(undefined1 *)((int)pvVar6 + 7) = 0xb4;
    mobyutil::MB_UpdateLightsTransition(lVar15,pvVar6);
    pMVar13 = g_heroMobyPtr;
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      fVar3 = (g_heroMobyPtr->pos).x - (moby->pos).x;
      fVar4 = (g_heroMobyPtr->pos).y - (moby->pos).y;
      fVar11 = ABS(fVar3);
      fVar12 = ABS(fVar4);
      *(float *)((int)puVar9 + 0xec) = fVar3;
      *(float *)(puVar9 + 0x1e) = fVar4;
      *(float *)((int)puVar9 + 0xf4) = fVar11 - fVar12;
      uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar9 + 0xec));
      if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
        fVar3 = fVar12;
      }
      auVar26 = loadVectorLeftIndexed(uVar20 << 2,0x735900);
      auVar27 = loadVectorLeftIndexed(4,uVar20 << 2 | 0x735900);
      fVar4 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
        fVar4 = fVar11;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 0x130;
        lVar24 = 2;
        lVar18 = uVar14 - 0xb0;
        lVar21 = uVar14 - 0xa0;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar9 + 0x12) = fVar3;
        *(float *)((int)puVar9 + 0x94) = fVar3;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)((int)puVar9 + 0x9c) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4;
        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar3;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar3 * fVar3;
          iVar16 = (int)lVar18;
          lVar17 = lVar17 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        pfVar19 = (float *)&DAT_007358e0;
        lVar18 = uVar14 - 0xb0;
        lVar21 = 4;
        lVar17 = lVar1;
        do {
          fVar3 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        auVar29 = ZEXT416(0);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        lVar18 = 4;
        lVar17 = uVar14 - 0xb0;
        do {
          auVar25 = loadVectorLeftIndexed(in_LR,lVar17);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          lVar21 = lVar17 + 4;
          auVar28 = loadVectorRightIndexed(0x10,lVar17);
          lVar17 = lVar17 + 8;
          auVar30 = loadVectorLeftIndexed(in_LR,lVar21);
          auVar31 = loadVectorRightIndexed(0x10,lVar21);
          auVar29 = vectorAddFloatingPoint
                              (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                               auVar25 | auVar28);
          auVar29 = vectorAddFloatingPoint(auVar29,auVar30 | auVar31);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        auVar25 = loadVectorLeftIndexed(8,0x4c7640);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = vectorAddFloatingPoint
                            (auVar29,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar27);
      }
      else {
        auVar26 = ZEXT416(0);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      }
      auVar27 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = ZEXT416(0xffffffff);
      auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = loadVectorLeftIndexed(0xc,0x4c7640);
      auVar29 = loadVectorLeftIndexed(0x10,0x4c7640);
      auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = loadVectorLeftIndexed(0x14,0x4c7640);
      auVar28 = vectorAddFloatingPoint
                          (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar27 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar33 = vectorSubtractFloatingPoint(auVar30,auVar26);
      auVar29 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar36 = vectorSubtractFloatingPoint(auVar32,auVar26);
      auVar27 = ZEXT416(0xffffffff);
      auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = ZEXT416(0xffffffff);
      auVar42 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar27 = vectorSubtractFloatingPoint(auVar30,auVar28);
      auVar35 = vectorSubtractFloatingPoint(auVar32,auVar28);
      auVar30 = vectorSubtractFloatingPoint(auVar30,auVar31);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar31);
      auVar25 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar28);
      auVar25 = vectorConditionalSelect(auVar27,auVar28,auVar25);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar31);
      auVar31 = vectorConditionalSelect(auVar30,auVar31,auVar27);
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar35);
      auVar38 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar30 = vectorConditionalSelect(auVar35,auVar25,auVar27);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar26);
      auVar27 = vectorConditionalSelect(auVar33,auVar26,auVar27);
      auVar26 = ZEXT416(0xffffffff);
      auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar33 = loadVectorLeftIndexed(0x18,0x4c7640);
      auVar26 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar36);
      auVar40 = loadVectorLeftIndexed(0x1c,0x4c7640);
      auVar35 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar28);
      auVar28 = vectorConditionalSelect(auVar36,auVar27,auVar26);
      auVar26 = ZEXT416(0xffffffff);
      auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
      auVar31 = vectorConditionalSelect(auVar32,auVar31,auVar26);
      auVar25 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar26 = ZEXT416(0xffffffff);
      auVar33 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = loadVectorLeftIndexed(0x20,0x4c7640);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar25);
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar34,auVar30,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar26 = ZEXT416(0xffffffff);
      auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar33);
      auVar43 = loadVectorLeftIndexed(0x24,0x4c7640);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar37,auVar35);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar30);
      auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar26 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar29);
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar32,auVar28,auVar37);
      auVar40 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar38);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar30);
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar31 = vectorMultiplyAddFloatingPoint(auVar27,auVar36,auVar31);
      auVar35 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar28);
      auVar26 = ZEXT416(0xffffffff);
      auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar37,auVar35);
      auVar26 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar38,auVar40);
      auVar36 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar40 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar25,auVar30);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar41);
      auVar26 = ZEXT416(0xffffffff);
      auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = ZEXT416(0xffffffff);
      auVar41 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar40);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar29);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar34,auVar37,auVar28);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar33,auVar30,auVar36);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar39,auVar31);
      auVar31 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar26);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar25,auVar27);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar33,auVar35,auVar31);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar35,auVar25,auVar28);
      auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = *(undefined1 (*) [16])(puVar9 + 0x16);
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb0,lVar1);
      *(undefined4 *)(puVar9 + 0x16) = uVar8;
      auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar37,auVar27);
      auVar29 = vectorPermute(auVar29,auVar28,_DAT_004c7670);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar31,auVar37,auVar25);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb4,lVar1);
      *(undefined4 *)((int)puVar9 + 0xb4) = uVar8;
      *(undefined4 *)(puVar9 + 0x17) = 0x3f800000;
      *(undefined4 *)((int)puVar9 + 0xbc) = 0x45afdf66;
      auVar26 = _DAT_004c76a0;
      auVar27 = vectorPermute(auVar27,_DAT_004c7680,_DAT_004c7690);
      *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0xcc);
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x19);
      *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0xc4);
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x18);
      *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0xdc);
      *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x1b);
      *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0xd4);
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x1a);
      auVar26 = vectorPermute(auVar27,auVar29,auVar26);
      *(undefined1 (*) [16])(puVar9 + 8) = auVar26;
      mobyutil::CollDamageMobyDirect
                (pMVar13,0x45afdf66,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],
                 puVar9[0xd]);
    }
    iVar16 = collproc::CollMobySphere(0x4008000000000000,lVar15 + 0x10);
    iVar23 = 0;
    if (0 < iVar16) {
      iVar22 = 0;
      do {
        iVar7 = *(int *)((int)&DAT_00a14a00 + iVar22);
        if ((*(short *)(iVar7 + 0xa6) == 0x359) &&
           (*(MobyInstance **)(*(int *)(iVar7 + 0x78) + 0x19c) == moby)) {
          fVar3 = *(float *)(iVar7 + 0x10) - (moby->pos).x;
          fVar4 = *(float *)(iVar7 + 0x14) - (moby->pos).y;
          fVar11 = ABS(fVar3);
          fVar12 = ABS(fVar4);
          *(float *)(puVar9 + 0x1c) = fVar3;
          *(float *)((int)puVar9 + 0xe4) = fVar4;
          *(float *)(puVar9 + 0x1d) = fVar11 - fVar12;
          uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar9 + 0x1c));
          if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
            fVar3 = fVar12;
          }
          auVar26 = loadVectorLeftIndexed(uVar20 << 2,0x735900);
          auVar27 = loadVectorLeftIndexed(4,uVar20 << 2 | 0x735900);
          fVar4 = ABS(*(float *)((int)puVar9 + 0xe4));
          if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
            fVar4 = fVar11;
          }
          if (0.0 < fVar3) {
            lVar17 = uVar14 - 0x130;
            lVar24 = 2;
            lVar18 = uVar14 - 0xd0;
            lVar21 = uVar14 - 0xc0;
            fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar9 + 0xe) = fVar3;
            *(float *)((int)puVar9 + 0x74) = fVar3;
            *(float *)(puVar9 + 0xf) = fVar3;
            *(float *)((int)puVar9 + 0x7c) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0x74) = *(float *)((int)puVar9 + 0x74) * fVar4;
            *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar3;
            *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x60) * fVar3 * fVar3;
              iVar10 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            pfVar19 = (float *)&DAT_007358e0;
            lVar18 = uVar14 - 0xd0;
            lVar21 = 4;
            lVar17 = lVar1;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x70) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            auVar29 = ZEXT416(0);
            auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
            lVar18 = 4;
            lVar17 = uVar14 - 0xd0;
            do {
              auVar25 = loadVectorLeftIndexed(in_LR,lVar17);
              lVar21 = lVar17 + 4;
              auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar28 = loadVectorRightIndexed(0x10,lVar17);
              lVar17 = lVar17 + 8;
              auVar30 = loadVectorLeftIndexed(in_LR,lVar21);
              auVar31 = loadVectorRightIndexed(0x10,lVar21);
              auVar29 = vectorAddFloatingPoint
                                  (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                                   auVar25 | auVar28);
              auVar29 = vectorAddFloatingPoint(auVar29,auVar30 | auVar31);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            auVar25 = loadVectorLeftIndexed(8,0x4c7640);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar29 = vectorAddFloatingPoint
                                (auVar29,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar27);
          }
          else {
            auVar26 = ZEXT416(0);
            auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          }
          auVar27 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = ZEXT416(0xffffffff);
          auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = ZEXT416(0xffffffff);
          auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = loadVectorLeftIndexed(0xc,0x4c7640);
          auVar29 = loadVectorLeftIndexed(0x10,0x4c7640);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar28 = vectorAddFloatingPoint
                              (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                              );
          auVar33 = vectorSubtractFloatingPoint(auVar29,auVar26);
          auVar35 = vectorSubtractFloatingPoint(auVar29,auVar31);
          auVar27 = loadVectorLeftIndexed(0x14,0x4c7640);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar40 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar25 = vectorSubtractFloatingPoint(auVar32,auVar26);
          auVar30 = vectorSubtractFloatingPoint(auVar29,auVar28);
          auVar34 = vectorSubtractFloatingPoint(auVar32,auVar28);
          auVar29 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar26);
          auVar32 = vectorSubtractFloatingPoint(auVar32,auVar31);
          auVar29 = vectorConditionalSelect(auVar33,auVar26,auVar29);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar31);
          auVar31 = vectorConditionalSelect(auVar35,auVar31,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar33 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar35 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar25);
          auVar26 = ZEXT416(0xffffffff);
          auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar25 = vectorConditionalSelect(auVar25,auVar29,auVar35);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar28);
          auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar29 = vectorConditionalSelect(auVar30,auVar28,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar28 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
          auVar26 = ZEXT416(0xffffffff);
          auVar35 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar33 = vectorMultiplyAddFloatingPoint(auVar25,auVar25,auVar33);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar34);
          auVar31 = vectorConditionalSelect(auVar32,auVar31,auVar28);
          auVar36 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar28 = vectorConditionalSelect(auVar34,auVar29,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xffffffff);
          auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xffffffff);
          auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = loadVectorLeftIndexed(0x18,0x4c7640);
          auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar29);
          auVar29 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar32);
          auVar41 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar39 = loadVectorLeftIndexed(0x1c,0x4c7640);
          auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar25,auVar29);
          auVar35 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = loadVectorLeftIndexed(0x20,0x4c7640);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar34);
          auVar42 = loadVectorLeftIndexed(0x24,0x4c7640);
          auVar40 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar40);
          auVar25 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar25);
          auVar36 = vectorMultiplyAddFloatingPoint(auVar30,auVar26,auVar36);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar26,auVar38,auVar28);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar25 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar25);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar36,auVar35);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar39,auVar28);
          auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar27);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar34);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar35,auVar29,auVar28);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar37);
          auVar26 = ZEXT416(0xffffffff);
          auVar34 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar40,auVar41);
          auVar31 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar31);
          auVar26 = ZEXT416(0xffffffff);
          auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar26 = ZEXT416(0xffffffff);
          auVar38 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar27,auVar28);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar34);
          auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar26);
          auVar31 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar31);
          auVar26 = vectorMultiplyAddFloatingPoint(auVar37,auVar29,auVar25);
          auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar36);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar31);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar26);
          auVar26 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = *(undefined1 (*) [16])(puVar9 + 0x16);
          uVar8 = storeVectorElementWordIndexed
                            (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb0,
                             lVar1);
          *(undefined4 *)(puVar9 + 0x16) = uVar8;
          auVar25 = vectorPermute(auVar28,auVar25,_DAT_004c7670);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar30);
          auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb4,
                             lVar1);
          *(undefined4 *)((int)puVar9 + 0xb4) = uVar8;
          *(undefined4 *)(puVar9 + 0x17) = 0x3f800000;
          *(undefined4 *)((int)puVar9 + 0xbc) = 0x45afdf66;
          auVar26 = vectorPermute(auVar27,_DAT_004c7680,_DAT_004c7690);
          auVar26 = vectorPermute(auVar26,auVar25,_DAT_004c76a0);
          *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0xcc);
          *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x19);
          *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0xc4);
          *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x18);
          *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0xdc);
          *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x1b);
          *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0xd4);
          *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x1a);
          *(undefined1 (*) [16])(puVar9 + 8) = auVar26;
          mobyutil::CollDamageMobyDirect
                    (iVar7,0x50,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],puVar9[0xd]);
        }
        iVar23 = iVar23 + 1;
        iVar22 = iVar22 + 4;
      } while (iVar23 < iVar16);
    }
  }
  mobyutil::MB_ColorDyingMoby(lVar15,pvVar6);
  return;
}



//==== 004c8060  ns=mobyupdate_helpers  size=0x14
// sig: undefined M979_004c8060(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M979_004c8060(void)

{
  DAT_008f4e7c = 0x10000;
  return;
}



//==== 004c8098  ns=mobyupdate_unsorted  size=0x238
// sig: undefined UpdateMoby_98(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 00109c30 mobyutil::OrganicDelt; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 005cd098 libc::printf
// strings: 00658d7c: 'Grindrail Blocker Moby (Moby #98) has no cuboid.\n'

/* Moby 98 */

void mobyupdate_unsorted::UpdateMoby_98(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    if (*piVar3 == -1) {
      libc::printf("Grindrail Blocker Moby (Moby #98) has no cuboid.\n");
      mobyfunc::DeleteMoby(moby);
    }
    else {
      piVar3[4] = (int)(moby->pos).x;
      piVar3[5] = (int)(moby->pos).y;
      piVar3[6] = (int)(moby->pos).z;
      piVar3[7] = (int)(moby->pos).w;
      piVar3[7] = (int)(moby->rotation).z;
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    fVar1 = 1.0;
    if (moby->setByGroup == '\0') {
      fVar1 = 0.0;
    }
    if ((float)piVar3[1] != fVar1) {
      mobyutil::OrganicDelt
                (fVar1,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 (float *)(piVar3 + 1),0x720000,(float *)(piVar3 + 2));
      iVar4 = *piVar3;
      fVar1 = (float)piVar3[1];
      dVar11 = 1.25;
      dVar10 = (double)(fVar1 * (Cuboids[iVar4].pos.x - (float)piVar3[4]) + (float)piVar3[4]);
      dVar9 = (double)(fVar1 * (Cuboids[iVar4].pos.y - (float)piVar3[5]) + (float)piVar3[5]);
      dVar8 = (double)(fVar1 * (Cuboids[iVar4].pos.z - (float)piVar3[6]) + (float)piVar3[6] + 1.25);
      dVar5 = (double)fastfunc::FastDiffRots((double)Cuboids[iVar4].rot.z,(double)(float)piVar3[7]);
      dVar5 = (double)fastfunc::FastWrapRot
                                ((float)(dVar5 * (double)(float)piVar3[1]),(float)piVar3[7]);
      (moby->rotation).z = (float)dVar5;
      dVar5 = (double)fastfunc::FastAddRots((float)piVar3[1] * 6.2831855);
      (moby->rotation).x = (float)dVar5;
      fastfunc::FastEulerToMtx((longlong)(int)moby + 0xc0,(longlong)(int)moby + 0x40);
      fVar1 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.z;
      dVar5 = (double)(moby->pos).x;
      dVar6 = (double)(moby->pos).y;
      dVar7 = (double)(moby->pos).z;
      (moby->pos).x =
           (float)(dVar5 + (double)(float)(dVar10 - (double)(float)((double)(moby->transform).v2.x *
                                                                    dVar11 + dVar5)));
      (moby->pos).y =
           (float)(dVar6 + (double)(float)(dVar9 - (double)(float)((double)fVar1 * dVar11 + dVar6)))
      ;
      (moby->pos).z =
           (float)(dVar7 + (double)(float)(dVar8 - (double)(float)((double)fVar2 * dVar11 + dVar7)))
      ;
    }
  }
  return;
}



//==== 004c82d0  ns=Global  size=0x14
// sig: undefined FUN_004c82d0(void)
// callers(2): 004c48b8 mobyupdate_helpers::M939_004c48b8; 004c49b0 mobyupdate_unsorted::UpdateMoby_94
// callees(0): 

void FUN_004c82d0(int param_1)

{
  *(char *)(param_1 + 0xbc) =
       (char)((ulonglong)(LZCOUNT((uint)*(byte *)(param_1 + 0xbc)) << 0x20) >> 0x25);
  return;
}



//==== 004c8310  ns=mobyupdate_unsorted  size=0x1a4
// sig: undefined UpdateMoby_982(MobyInstance * moby)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 982 */

void mobyupdate_unsorted::UpdateMoby_982(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (moby->state < 2) {
                    /* WARNING: Load size is inaccurate */
    iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*moby->pVar);
    if (iVar5 == 0) {
      WaterPlaneActive = 0;
    }
    else {
      DAT_00e5aa90 = g_heroPosition.x;
      WaterPlaneActive = 1;
      DAT_00e5aa94 = g_heroPosition.y;
      DAT_00e5aa9c = 0x42400000;
      DAT_00969ebe = 5;
      fVar1 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = fVar3 * fVar3;
      fVar2 = fVar1 * fVar1 * fVar3;
      fVar4 = fVar1 * fVar2;
      DAT_00e5aa98 = (fVar1 * fVar4 * 2.601887e-06 +
                     fVar4 * -0.0001980741 +
                     fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 0.25 + 59.5;
    }
  }
  return;
}



//==== 004c84b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M983_004c84b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M983_004c84b4(void)

{
  DAT_008f4eec = 0x10000;
  return;
}



//==== 004c8510  ns=mobyupdate_helpers  size=0x86c
// sig: undefined M983_004c8510(void)
// callers(1): 004ca718 mobyupdate_unsorted::UpdateMoby_983
// callees(11): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 0015d204 sound::sound_MobyPlay_oClass; 001d4d88 FUN_001d4d88; 002d1440 FUN_002d1440; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M983_004c8510(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_120 [4];
  undefined1 local_110 [16];
  float afStack_100 [4];
  undefined1 local_f0 [40];
  
  uVar3._0_4_ = (param_1->pos).x;
  uVar3._4_4_ = (param_1->pos).y;
  uVar4._0_4_ = (param_1->pos).z;
  uVar4._4_4_ = (param_1->pos).w;
  FUN_002d1440(uVar3,uVar4,(int)(animationSpeed * 30.5),0xffffffff80806060,&DAT_00801010);
  sound::sound_MobyPlay_oClass(0x10,0,param_1,0x58e);
  iVar7 = 0;
  if (0 < DAT_008f50c4) {
    dVar11 = -0.3490658402442932;
    dVar12 = 0.3490658402442932;
    dVar13 = 0.800000011920929;
    dVar14 = 1.2000000476837158;
    dVar15 = 0.5;
    do {
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      dVar9 = (double)mobyutil::MB_randRot();
      dVar10 = (double)mobyutil::MB_randRangeFloat(DAT_008f50c8,DAT_008f50cc);
      mobyutil::MB_SphericalToVector
                ((float)(dVar10 * (double)mobyutil::g_FrameTime),(float)dVar9,(float)dVar8,local_120
                );
      mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
      uVar2 = DAT_008f50d4;
      uVar1 = DAT_008f50d0;
      uVar3 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50d8 + dVar15)) *
                                        dVar8));
      uVar4 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50dc + dVar15)) *
                                        dVar8));
      uVar5 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)
                                                 (animationSpeed *
                                                 (float)((double)(longlong)DAT_008f50e0 + dVar15)) *
                                        dVar8));
      partupd::SpawnPart_2(&param_1->pos,local_120,local_110,uVar1,uVar2,uVar3,uVar4,uVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_008f50c4);
  }
  iVar7 = 0;
  if (0 < DAT_008f50f0) {
    dVar11 = 1.0471975803375244;
    dVar12 = 1.3962633609771729;
    dVar13 = 0.0;
    dVar14 = 400000.0;
    do {
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_008f50f4,DAT_008f50f8);
      dVar9 = (double)(float)(dVar15 * (double)mobyutil::g_FrameTime);
      dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      dVar8 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector((float)dVar9,(float)dVar8,(float)dVar15,afStack_100);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar13,DAT_008f5140);
      mobyutil::MB_randRangeFloat((float)dVar13,DAT_008f5140);
      lVar6 = mobyutil::MB_randInt(6);
      uVar1 = *(undefined4 *)(&DAT_008f50fc + (int)(lVar6 << 2));
      lVar6 = mobyutil::MB_randInt(6);
      uVar2 = *(undefined4 *)(&DAT_008f5114 + (int)(lVar6 << 2));
      dVar15 = (double)(float)((double)DAT_008f512c * dVar14);
      mobyutil::MB_randRange((double)DAT_008f512c,DAT_008f5130,DAT_008f5134);
      mobyutil::MB_randRange(DAT_008f5138,DAT_008f513c);
      partupd::SpawnPart_11(dVar15,dVar9,local_f0,afStack_100,uVar1,uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_008f50f0);
  }
  if (0 < (int)DAT_008f5144) {
    FUN_001d4d88((double)DAT_008f5144,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f514c >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5148 + 0.5)),DAT_008f514c & 0xff,
                 DAT_008f514c >> 8 & 0xff,DAT_008f514c >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f5150) {
    FUN_001d4d88((double)DAT_008f5150,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f5158 >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5154 + 0.5)),DAT_008f5158 & 0xff,
                 DAT_008f5158 >> 8 & 0xff,DAT_008f5158 >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f515c) {
    FUN_001d4d88((double)DAT_008f515c,param_1,&param_1->pos,&DAT_00a15d30,DAT_008f5164 >> 0x18,
                 (int)(animationSpeed * ((float)(longlong)DAT_008f5160 + 0.5)),DAT_008f5164 & 0xff,
                 DAT_008f5164 >> 8 & 0xff,DAT_008f5164 >> 0x10 & 0xff);
  }
  if (0 < (int)DAT_008f5168) {
    auVar16 = ZEXT416(0xffffffff);
    auVar18 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = loadVectorLeftIndexed(0x516c,0x8f0000);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    GameCamera.offset0.amp = DAT_008f5168;
    auVar16 = loadVectorLeftIndexed(0x14,0x4c84c8);
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = vectorAddFloatingPoint
                        (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar17 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar17);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x168,0x9513c0);
  }
  return;
}



//==== 004c8df0  ns=mobyupdate_helpers  size=0x1300
// sig: undefined M983_004c8df0(void)
// callers(1): 004ca718 mobyupdate_unsorted::UpdateMoby_983
// callees(14): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010de78 mobyutil::MB_WrapRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0012f8c0 partupd::SpawnPart_53; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 008f51a0: '=Vwp>VwP' (raw) | 008f51a4: '>VwP' (raw)

void mobyupdate_helpers::M983_004c8df0(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar14;
  undefined2 uVar15;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar16;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  float *pfVar20;
  ulonglong unaff_r29;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r30;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong unaff_r31;
  ulonglong uVar26;
  int iVar27;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar38;
  double dVar39;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar40;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  undefined8 uVar46;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float local_240 [8];
  float local_220 [136];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x2c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x5a] = in_LR;
  puVar9[0x46] = in_f14;
  puVar9[0x47] = in_f15;
  puVar9[0x48] = in_f16;
  puVar9[0x49] = in_f17;
  puVar9[0x4a] = in_f18;
  puVar9[0x4b] = in_f19;
  puVar9[0x4c] = in_f20;
  puVar9[0x4d] = in_f21;
  puVar9[0x4e] = in_f22;
  puVar9[0x4f] = in_f23;
  puVar9[0x50] = in_f24;
  puVar9[0x51] = in_f25;
  puVar9[0x52] = in_f26;
  puVar9[0x53] = in_f27;
  puVar9[0x54] = in_f28;
  puVar9[0x55] = in_f29;
  puVar9[0x56] = in_f30;
  puVar9[0x57] = in_f31;
  puVar9[0x3a] = unaff_r20;
  puVar9[0x35] = unaff_r15;
  puVar9[0x45] = unaff_r31;
  puVar9[0x36] = unaff_r16;
  fVar57 = DAT_010e4c54;
  dVar38 = 0.05000000074505806;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar9[0x44] = unaff_r30;
  bVar12 = g_goldWeaponsArray.teslaClaw;
  fVar58 = DAT_008f518c;
  puVar9[0x43] = unaff_r29;
  puVar9[0x42] = unaff_r28;
  puVar9[0x41] = unaff_r27;
  puVar9[0x40] = unaff_r26;
  puVar9[0x3f] = unaff_r25;
  puVar9[0x3e] = unaff_r24;
  puVar9[0x3d] = unaff_r23;
  puVar9[0x3c] = unaff_r22;
  puVar9[0x3b] = unaff_r21;
  puVar9[0x39] = unaff_r19;
  puVar9[0x38] = unaff_r18;
  puVar9[0x37] = unaff_r17;
  puVar9[0x34] = unaff_r14;
  puVar9[0x2d] = 0x3fa99999a0000000;
  dVar29 = (double)fastfunc::FastWrapRot(fVar57,fVar58);
  DAT_010e4c54 = (float)dVar29;
  dVar29 = (double)fastfunc::FastDiffRots((double)DAT_010e4c58,(double)DAT_008f5190);
  DAT_010e4c58 = (float)dVar29;
  dVar29 = (double)fastfunc::FastWrapRot(DAT_010e4c5c,DAT_008f51a0);
  DAT_010e4c5c = (float)dVar29;
  fVar5 = *(float *)(iVar8 + 0x10) - *(float *)(param_1 + 0x10);
  fVar58 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
  fVar2 = fVar58 - *(float *)(iVar8 + 0x14);
  fVar57 = *(float *)(param_1 + 0x18);
  fVar11 = fVar57 - *(float *)(iVar8 + 0x18);
  *(float *)(puVar9 + 0x10) = fVar5;
  fVar58 = *(float *)(iVar8 + 0x14) - fVar58;
  *(float *)((int)puVar9 + 0x84) = fVar58;
  PTR_DAT_008f51c4 =
       (undefined *)(((uint)((LZCOUNT(-(uint)bVar12) << 0x3a) >> 0x3f) & 0xffffffe0) + 0x7f2040);
  fVar57 = *(float *)(iVar8 + 0x18) - fVar57;
  *(float *)(puVar9 + 0x11) = fVar57;
  fVar10 = fVar57 * fVar57 + fVar5 * fVar5 + fVar58 * fVar58;
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(iVar8 + 0x1c);
  dVar52 = 0.0;
  dVar39 = (double)(float)((double)SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar2 * fVar2) * dVar38);
  dVar29 = dVar52;
  dVar38 = dVar52;
  dVar40 = dVar52;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar38 = (double)(fVar5 * fVar4);
    dVar29 = (double)(fVar58 * fVar4);
    dVar40 = (double)(fVar57 * fVar4);
  }
  dVar31 = (double)DAT_00969f74;
  dVar33 = (double)DAT_00969f78;
  dVar35 = (double)hero::g_heroGravityDir;
  *(float *)(puVar9 + 0x10) = (float)dVar38;
  *(float *)((int)puVar9 + 0x84) = (float)dVar29;
  *(float *)(puVar9 + 0x11) = (float)dVar40;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0;
  *(float *)(puVar9 + 0x1b) = (float)(dVar35 * dVar29 - (double)(float)(dVar31 * dVar38));
  *(float *)(puVar9 + 0x1a) = (float)(dVar31 * dVar40 - (double)(float)(dVar33 * dVar29));
  *(float *)((int)puVar9 + 0xd4) = (float)(dVar33 * dVar38 - (double)(float)(dVar35 * dVar40));
  dVar29 = 0.1745329201221466;
  mobyutil::MB_RotateQuatAxisAngle(0.17453292,local_240,local_240);
  DAT_010e47f0 = *(undefined4 *)(param_1 + 0x10);
  uVar26 = 1;
  dVar38 = (double)(float)((double)*(float *)(puVar9 + 0x10) * dVar39);
  DAT_010e47f4 = *(undefined4 *)(param_1 + 0x14);
  DAT_010e47f8 = *(undefined4 *)(param_1 + 0x18);
  DAT_010e47fc = *(undefined4 *)(param_1 + 0x1c);
  dVar40 = (double)(float)((double)*(float *)((int)puVar9 + 0x84) * dVar39);
  DAT_010e4930 = *(undefined4 *)(param_1 + 0x10);
  dVar31 = (double)(float)((double)*(float *)(puVar9 + 0x11) * dVar39);
  DAT_010e4934 = *(undefined4 *)(param_1 + 0x14);
  DAT_010e4938 = *(undefined4 *)(param_1 + 0x18);
  DAT_010e493c = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)puVar9 + 0x164) = DAT_010e493c;
  puVar9[0x2e] = 1;
  do {
    dVar33 = (double)fastfunc::FastIntToDouble(uVar26);
    iVar27 = (int)uVar26;
    puVar9[0x2f] = (longlong)iVar27;
    dVar50 = (double)((DAT_008f5188 - DAT_008f5184) * (float)(dVar33 * (double)puVar9[0x2d]) +
                     DAT_008f5184);
    dVar45 = (double)(longlong)puVar9[0x2f];
    fVar57 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_008f5180 + (double)DAT_010e4c54));
    dVar33 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar42 = 0.008333025500178337;
    dVar43 = -0.0001980741071747616;
    dVar44 = 2.601886990305502e-06;
    fVar58 = 3.1415925 - fVar57;
    if (fVar57 - (3.1415925 - fVar57) < 0.0) {
      fVar58 = fVar57;
    }
    fVar5 = -3.1415925 - fVar57;
    if ((-3.1415925 - fVar57) - fVar58 < 0.0) {
      fVar5 = fVar58;
    }
    fVar4 = fVar5 * fVar5;
    fVar58 = fVar4 * fVar4 * fVar5;
    fVar57 = fVar4 * fVar58;
    dVar48 = (double)(fVar4 * fVar57 * 2.601887e-06 +
                     fVar57 * -0.0001980741 +
                     fVar58 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5);
    dVar30 = (double)mobyutil::MB_randRangeSigned((double)DAT_010e4c60,(double)DAT_008f51b8);
    iVar23 = iVar27 * 0x10;
    fVar58 = (float)(dVar50 * dVar48 + dVar30);
    dVar48 = (double)fVar58;
    iVar16 = (int)((uVar26 & 0xffffffff) << 2);
    fVar5 = *(float *)(&DAT_010e4a70 + iVar16);
    fVar57 = (float)(&DAT_010e47f8)[iVar27 * 4];
    *(float *)(&DAT_010e4a70 + iVar16) = fVar58;
    (&DAT_010e47f8)[iVar27 * 4] = fVar57 - fVar5;
    dVar50 = (double)mobyutil::MB_randRot();
    dVar30 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector
              ((float)dVar39,(float)dVar50,(float)dVar30,(float *)(puVar9 + 0x12));
    dVar30 = 0.5;
    fVar5 = *(float *)(puVar9 + 0x13);
    dVar50 = (double)DAT_008f51fc;
    fVar58 = (float)(dVar50 * (double)(float)((double)*(float *)((int)puVar9 + 0x94) - dVar40) +
                    dVar40);
    fVar57 = (float)(dVar50 * (double)(float)((double)*(float *)(puVar9 + 0x12) - dVar38) + dVar38);
    pfVar19 = (float *)(&DAT_010e47f0 + iVar27 * 4);
    pfVar24 = (float *)(&DAT_010e47e0 + iVar27 * 4);
    *(float *)(puVar9 + 0x13) = fVar5 * 0.5;
    fVar5 = (float)(dVar50 * (double)(float)((double)(fVar5 * 0.5) - dVar31) + dVar31);
    dVar50 = (double)SQRT(fVar5 * fVar5 + fVar57 * fVar57 + fVar58 * fVar58);
    if (dVar50 == dVar52) {
      *pfVar19 = *pfVar24;
      (&DAT_010e47f4)[iVar27 * 4] = (&DAT_010e47e4)[iVar27 * 4];
      (&DAT_010e47f8)[iVar27 * 4] = *(undefined4 *)(iVar23 + 0x10e47e8);
      uVar3 = *(undefined4 *)(iVar23 + 0x10e47ec);
    }
    else {
      fVar4 = (float)(dVar39 / dVar50);
      dVar38 = (double)(fVar4 * fVar57);
      dVar40 = (double)(fVar4 * fVar58);
      dVar31 = (double)(fVar4 * fVar5);
      *pfVar19 = (float)((double)*pfVar24 + dVar38);
      (&DAT_010e47f4)[iVar27 * 4] = (float)((double)(float)(&DAT_010e47e4)[iVar27 * 4] + dVar40);
      (&DAT_010e47f8)[iVar27 * 4] = (float)((double)*(float *)(iVar23 + 0x10e47e8) + dVar31);
      uVar3 = *(undefined4 *)(iVar23 + 0x10e47ec);
    }
    (&DAT_010e47fc)[iVar27 * 4] = uVar3;
    (&DAT_010e47f8)[iVar27 * 4] = (float)((double)(float)(&DAT_010e47f8)[iVar27 * 4] + dVar48);
    *(float *)(puVar9 + 0x12) = *pfVar19 - *pfVar24;
    *(float *)((int)puVar9 + 0x94) =
         (float)(&DAT_010e47f4)[iVar27 * 4] - (float)(&DAT_010e47e4)[iVar27 * 4];
    *(float *)(puVar9 + 0x13) = (float)(&DAT_010e47f8)[iVar27 * 4] - *(float *)(iVar23 + 0x10e47e8);
    *(undefined4 *)((int)puVar9 + 0x9c) = (&DAT_010e47fc)[iVar27 * 4];
    dVar47 = (double)(*(float *)(iVar8 + 0x14) - (float)(&DAT_010e47f4)[iVar27 * 4]);
    dVar48 = (double)(*(float *)(iVar8 + 0x10) - *pfVar19);
    dVar49 = (double)(*(float *)(iVar8 + 0x18) - (float)(&DAT_010e47f8)[iVar27 * 4]);
    dVar51 = (double)SQRT((float)(dVar49 * dVar49 +
                                 (double)(float)(dVar48 * dVar48 + (double)(float)(dVar47 * dVar47))
                                 ));
    dVar50 = dVar39;
    if (dVar51 != dVar52) {
      dVar34 = dVar30;
      dVar50 = dVar51;
      if ((iVar27 != 0x13) && (dVar34 = 0.10000000149011612, dVar50 = dVar39, 0xf < iVar27)) {
        dVar39 = (double)fastfunc::FastIntToDouble(0x13 - iVar27);
        dVar34 = dVar30;
        dVar50 = (double)(float)(dVar51 / dVar39);
      }
      dVar39 = (double)(float)(dVar50 / dVar51);
      dVar38 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar48 - dVar38) + dVar38);
      dVar40 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar47 - dVar40) + dVar40);
      dVar31 = (double)(float)(dVar34 * (double)(float)(dVar39 * dVar49 - dVar31) + dVar31);
    }
    if (iVar27 < 10) {
      fVar58 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_008f5194 + (double)DAT_010e4c58));
      dVar48 = (double)fVar58;
      fVar57 = mobyutil::MB_WrapRot((float)(dVar45 * (double)DAT_008f51a4 + (double)DAT_010e4c5c));
      fVar58 = DAT_008f5198;
      dVar45 = (double)fVar57;
      pfVar24 = (float *)(&DAT_010e4930 + iVar27 * 4);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar47 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar47 = dVar39;
      }
      *pfVar24 = *pfVar19;
      (&DAT_010e4934)[iVar27 * 4] = (&DAT_010e47f4)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] = (&DAT_010e47f8)[iVar27 * 4];
      dVar39 = (double)(float)(dVar47 * dVar47);
      (&DAT_010e493c)[iVar27 * 4] = (&DAT_010e47fc)[iVar27 * 4];
      dVar49 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar47));
      dVar45 = (double)(float)(dVar39 * dVar49);
      dVar47 = (double)(fVar58 * (float)((double)(float)(dVar39 * dVar45) * dVar44 +
                                        (double)(float)(dVar45 * dVar43 +
                                                       (double)(float)(dVar49 * dVar42 +
                                                                      (double)(float)((double)(float
                                                  )(dVar39 * dVar47) * dVar41 + dVar47)))));
      dVar45 = (double)mobyutil::MB_randRangeSigned(dVar52,0x3fb99999a0000000);
      dVar39 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar39 = dVar48;
      }
      dVar34 = ABS((double)*(float *)(puVar9 + 0x12));
      dVar49 = ABS((double)*(float *)((int)puVar9 + 0x94));
      dVar51 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar39 < 0.0) {
        dVar51 = dVar39;
      }
      *(float *)(puVar9 + 0x28) = (float)(dVar34 - dVar49);
      fVar58 = (float)(&DAT_010e4938)[iVar27 * 4];
      dVar32 = (double)(float)(dVar51 * dVar51);
      uVar26 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
      dVar36 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar51));
      dVar37 = (double)(float)(dVar32 * dVar36);
      dVar39 = dVar34;
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar39 = dVar49;
      }
      fVar57 = (float)(dVar47 * (double)(float)((double)(float)(dVar32 * dVar37) * dVar44 +
                                               (double)(float)(dVar37 * dVar43 +
                                                              (double)(float)(dVar36 * dVar42 +
                                                                             (double)(float)((double
                                                  )(float)(dVar32 * dVar51) * dVar41 + dVar51)))) +
                      dVar45);
      if ((double)*(float *)(puVar9 + 0x28) - dVar52 < 0.0) {
        dVar49 = dVar34;
      }
      *(float *)((int)&DAT_010e4c00 + iVar16) = fVar57;
      (&DAT_010e4938)[iVar27 * 4] = fVar58 + fVar57;
      fVar57 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar58 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      dVar45 = dVar52;
      if (dVar52 < dVar39) {
        lVar17 = uVar13 - 0x2b0;
        lVar28 = uVar13 - 0x17c;
        lVar21 = uVar13 - 0x16c;
        lVar18 = 2;
        fVar5 = (float)(dVar49 - dVar39) / (float)(dVar49 + dVar39);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2a) = fVar5;
        *(float *)(puVar9 + 0x29) = fVar5;
        *(float *)((int)puVar9 + 0x14c) = fVar5;
        *(float *)((int)puVar9 + 0x144) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar4;
        *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar5;
        *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x134) * fVar5 * fVar5;
          iVar16 = (int)lVar28;
          lVar17 = lVar17 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar21 = uVar13 - 0x17c;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar28 = lVar21;
        do {
          fVar5 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x144) = *(float *)((int)lVar17 + 0x144) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
          lVar28 = lVar28 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar28 = 2;
        lVar17 = lVar1;
        dVar39 = dVar52;
        do {
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar16 + 0x144)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar45 = (double)((float)(dVar39 + 0.7853981852531433) * fVar57 + fVar58);
      }
      dVar45 = (double)fastfunc::FastWrapRot((float)dVar45,1.5707964);
      fVar58 = DAT_008f519c;
      dVar47 = (double)(float)(dVar48 + 1.570796251296997);
      dVar48 = (double)(float)(dVar45 + 1.570796251296997);
      dVar39 = (double)(float)(dVar33 - dVar45);
      if (dVar45 - (double)(float)(dVar33 - dVar45) < 0.0) {
        dVar39 = dVar45;
      }
      dVar49 = (double)(float)(dVar33 - dVar47);
      if (dVar47 - (double)(float)(dVar33 - dVar47) < 0.0) {
        dVar49 = dVar47;
      }
      dVar51 = (double)(float)(dVar33 - dVar48);
      if (dVar48 - (double)(float)(dVar33 - dVar48) < 0.0) {
        dVar51 = dVar48;
      }
      dVar33 = (double)(float)(dVar35 - dVar45);
      if ((double)(float)(dVar35 - dVar45) - dVar39 < 0.0) {
        dVar33 = dVar39;
      }
      dVar39 = (double)(float)(dVar35 - dVar47);
      if ((double)(float)(dVar35 - dVar47) - dVar49 < 0.0) {
        dVar39 = dVar49;
      }
      dVar47 = (double)(float)(dVar33 * dVar33);
      dVar45 = (double)(float)(dVar35 - dVar48);
      if ((double)(float)(dVar35 - dVar48) - dVar51 < 0.0) {
        dVar45 = dVar51;
      }
      dVar35 = (double)(float)(dVar39 * dVar39);
      dVar48 = (double)(float)(dVar45 * dVar45);
      dVar36 = (double)(float)(dVar47 * (double)(float)(dVar47 * dVar33));
      dVar37 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar39));
      dVar51 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar45));
      dVar49 = (double)(float)(dVar35 * dVar37);
      dVar32 = (double)(float)(dVar48 * dVar51);
      dVar34 = (double)(float)(dVar47 * dVar36);
      fVar57 = *pfVar24;
      fVar5 = (float)(&DAT_010e4934)[iVar27 * 4];
      uVar3 = *(undefined4 *)((int)puVar9 + 0x164);
      *(undefined4 *)(iVar23 + 0x10e4ac8) = 0;
      *(undefined4 *)(iVar23 + 0x10e4acc) = uVar3;
      fVar58 = fVar58 * (float)((double)(float)(dVar35 * dVar49) * dVar44 +
                               (double)(float)(dVar49 * dVar43 +
                                              (double)(float)(dVar37 * dVar42 +
                                                             (double)(float)((double)(float)(dVar35 
                                                  * dVar39) * dVar41 + dVar39))));
      fVar4 = (float)((double)(float)(dVar48 * dVar32) * dVar44 +
                     (double)(float)(dVar32 * dVar43 +
                                    (double)(float)(dVar51 * dVar42 +
                                                   (double)(float)((double)(float)(dVar48 * dVar45)
                                                                   * dVar41 + dVar45)))) * fVar58;
      fVar58 = (float)((double)(float)(dVar47 * dVar34) * dVar44 +
                      (double)(float)(dVar34 * dVar43 +
                                     (double)(float)(dVar36 * dVar42 +
                                                    (double)(float)((double)(float)(dVar47 * dVar33)
                                                                    * dVar41 + dVar33)))) * fVar58;
      *(float *)(iVar23 + 0x10e4ac0) = fVar4;
      *(float *)(iVar23 + 0x10e4ac4) = fVar58;
      *pfVar24 = fVar57 + fVar4;
      (&DAT_010e4934)[iVar27 * 4] = fVar5 + fVar58;
    }
    else {
      pfVar24 = (float *)(&DAT_010e4930 + iVar27 * 4);
      iVar16 = (int)(0x15 - uVar26);
      *pfVar24 = *pfVar19;
      iVar14 = iVar16 * 0x10;
      (&DAT_010e4934)[iVar27 * 4] = (&DAT_010e47f4)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] = (&DAT_010e47f8)[iVar27 * 4];
      (&DAT_010e493c)[iVar27 * 4] = (&DAT_010e47fc)[iVar27 * 4];
      (&DAT_010e4938)[iVar27 * 4] =
           (float)(&DAT_010e4938)[iVar27 * 4] + (float)(&DAT_010e4c00)[iVar16];
      *pfVar24 = *pfVar24 + *(float *)(iVar14 + 0x10e4ac0);
      (&DAT_010e4934)[iVar27 * 4] =
           (float)(&DAT_010e4934)[iVar27 * 4] + *(float *)(iVar14 + 0x10e4ac4);
      (&DAT_010e4938)[iVar27 * 4] =
           (float)(&DAT_010e4938)[iVar27 * 4] + *(float *)(iVar14 + 0x10e4ac8);
      *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)(iVar23 + 0x10e4acc);
    }
    uVar26 = (ulonglong)(iVar27 + 1);
    dVar39 = dVar50;
  } while (iVar27 + 1 < 0x14);
  fVar57 = DAT_00969f78 * *(float *)(puVar9 + 0x10) -
           hero::g_heroGravityDir * *(float *)(puVar9 + 0x11);
  fVar58 = DAT_00969f74 * *(float *)(puVar9 + 0x11) - DAT_00969f78 * *(float *)((int)puVar9 + 0x84);
  fVar5 = hero::g_heroGravityDir * *(float *)((int)puVar9 + 0x84) -
          DAT_00969f74 * *(float *)(puVar9 + 0x10);
  auVar56 = loadVectorLeftIndexed(8,0x4c8d7c);
  *(undefined4 *)((int)puVar9 + 0xbc) = 0;
  fVar4 = hero::g_heroGravityDir;
  auVar56 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
  dVar31 = (double)(fVar5 * fVar5 + fVar58 * fVar58 + fVar57 * fVar57);
  dVar38 = dVar52;
  dVar39 = dVar52;
  dVar40 = dVar52;
  if ((double)(float)SQRT(dVar31) != dVar52) {
    dVar38 = 1.0 / SQRT(dVar31);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                             (double)(float)(dVar30 * dVar38) + dVar38);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar38) * dVar38 - 1.0) *
                    (double)(float)(dVar30 * dVar38) + dVar38);
    dVar40 = (double)(fVar58 * fVar2);
    dVar39 = (double)(fVar57 * fVar2);
    dVar38 = (double)(fVar5 * fVar2);
  }
  fVar58 = DAT_00969f74 * DAT_00969f74;
  *(float *)(puVar9 + 0x17) = (float)dVar38;
  fVar5 = DAT_00969f78;
  *(float *)(puVar9 + 0x16) = (float)dVar40;
  *(float *)((int)puVar9 + 0xb4) = (float)dVar39;
  uVar3 = DAT_00969f7c;
  fVar57 = DAT_00969f74;
  dVar38 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar58);
  if ((double)(float)SQRT(dVar38) == dVar52) {
    *(float *)(puVar9 + 0x18) = fVar4;
    fVar58 = DAT_00969f78;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    uVar3 = DAT_00969f7c;
    *(float *)(puVar9 + 0x19) = fVar58;
    *(undefined4 *)(puVar9 + 0x19) = 0;
    *(undefined4 *)((int)puVar9 + 0xc4) = 0;
    *(undefined4 *)(puVar9 + 0x18) = 0;
  }
  else {
    dVar39 = 1.0 / SQRT(dVar38);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                             (double)(float)(dVar30 * dVar39) + dVar39);
    fVar58 = (float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - 1.0) *
                     (double)(float)(dVar30 * dVar39) + dVar39);
    fVar57 = DAT_00969f74 * fVar58;
    fVar5 = DAT_00969f78 * fVar58;
    *(float *)(puVar9 + 0x18) = fVar4 * fVar58;
    *(float *)((int)puVar9 + 0xc4) = fVar57;
    *(float *)(puVar9 + 0x19) = fVar5;
  }
  lVar17 = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = uVar3;
  iVar16 = 0;
  iVar27 = 0;
  do {
    if (iVar27 < 2) {
      fVar57 = *(float *)(param_1 + 0x10);
      fVar58 = *(float *)(param_1 + 0x14);
      fVar5 = *(float *)(param_1 + 0x18);
      fVar4 = *(float *)(param_1 + 0x1c);
      dVar38 = 0.4000000059604645;
    }
    else {
      fVar57 = *(float *)(iVar8 + 0x10);
      fVar58 = *(float *)(iVar8 + 0x14);
      fVar5 = *(float *)(iVar8 + 0x18);
      fVar4 = *(float *)(iVar8 + 0x1c);
      dVar38 = dVar30;
    }
    dVar35 = (double)fVar57;
    dVar33 = (double)fVar58;
    dVar31 = (double)fVar5;
    dVar40 = (double)fVar4;
    iVar14 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_010e4db0) + lVar17 & 0xffffffff);
    dVar39 = 15.5;
    iVar23 = (int)lVar17;
    if (iVar14 == 0) {
      uVar26 = puVar9[0x2e];
      lVar18 = uVar13 - 0x1c0;
      uVar46 = 0x3fb99999a0000000;
      pfVar20 = (float *)((int)&DAT_010e4c70 + iVar16);
      pfVar25 = (float *)((int)&DAT_010e4c80 + iVar16);
      lVar21 = lVar18;
      lVar28 = lVar1;
      pfVar19 = pfVar25;
      pfVar24 = pfVar20;
      do {
        pfVar22 = (float *)lVar21;
        *pfVar22 = *pfVar19 - *pfVar24;
        pfVar22[1] = pfVar19[1] - pfVar24[1];
        pfVar22[2] = pfVar19[2] - pfVar24[2];
        pfVar22[3] = pfVar19[3];
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        iVar14 = (int)lVar28;
        *(float *)(iVar14 + 0x100) = (float)((double)*(float *)(iVar14 + 0x100) + dVar38);
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        *(float *)(iVar14 + 0x104) = (float)((double)*(float *)(iVar14 + 0x104) + dVar38);
        dVar38 = (double)mobyutil::MB_randRangeSigned(dVar52,uVar46);
        uVar26 = uVar26 + 1;
        lVar21 = lVar21 + 0x10;
        pfVar19 = pfVar19 + 4;
        pfVar24 = pfVar24 + 4;
        *(float *)(iVar14 + 0x108) = (float)((double)*(float *)(iVar14 + 0x108) + dVar38);
        lVar28 = lVar28 + 0x10;
      } while ((int)uVar26 < 5);
      lVar28 = 4;
      *(float *)((int)&DAT_010e4c70 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010e4c74 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010e4c78 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010e4c7c + iVar16) = (float)dVar40;
      sVar6 = *(short *)((int)&DAT_010e4db0 + iVar23);
      do {
        pfVar19 = (float *)lVar18;
        *pfVar25 = *pfVar20 + *pfVar19;
        pfVar25[1] = pfVar20[1] + pfVar19[1];
        lVar18 = lVar18 + 0x10;
        pfVar25[2] = pfVar20[2] + pfVar19[2];
        pfVar19 = pfVar20 + 3;
        pfVar20 = pfVar20 + 4;
        pfVar25[3] = *pfVar19;
        pfVar25 = pfVar25 + 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar38 = 32.0;
      sVar7 = *(short *)((int)&DAT_010e4dc8 + iVar23);
      if (sVar7 < sVar6) {
        dVar40 = (double)fastfunc::FastIntToDouble((longlong)sVar6 - (longlong)sVar7);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = uVar15;
      }
      else {
        dVar40 = (double)fastfunc::FastIntToDouble((longlong)sVar7 - (longlong)sVar6);
        puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
        dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0x17c));
        uVar15 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(1.0 - (float)(dVar40 / dVar31)) * dVar38));
        *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = uVar15;
      }
    }
    else {
      auVar53 = ZEXT416(0xfffffff0);
      auVar54 = loadVectorLeftIndexed(lVar17,0x10e4dc0);
      auVar54 = vectorShiftRightAlgebraicWord
                          (auVar54,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
      auVar53 = ZEXT416(0xffffffff);
      auVar55 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      auVar53 = vectorConvertFromSignedFixedPointWord(auVar54,0);
      auVar54 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar53 = vectorAddFloatingPoint(auVar53,auVar56);
      auVar53 = vectorMultiplyAddFloatingPoint(auVar55,auVar53,auVar54);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      auVar53 = vectorSplatHalfWord(auVar53,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar53,lVar17,0x10e4db0);
      *(undefined2 *)((int)&DAT_010e4db0 + iVar23) = uVar15;
      *(undefined2 *)((int)&DAT_010e4db8 + iVar23) = 0;
      dVar41 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar42 = (double)mobyutil::MB_randRangeFloat(-1.0471976,(float)dVar29);
      *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(float *)(puVar9 + 0x14) = (float)((double)*(float *)(puVar9 + 0x10) * dVar38);
      *(float *)((int)puVar9 + 0xa4) = (float)((double)*(float *)((int)puVar9 + 0x84) * dVar38);
      *(float *)(puVar9 + 0x15) = (float)((double)*(float *)(puVar9 + 0x11) * dVar38);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar42,local_220,local_220);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar41,local_220,local_220);
      pfVar19 = (float *)((int)&DAT_010e4c80 + iVar16);
      *(float *)((int)&DAT_010e4c70 + iVar16) = (float)dVar35;
      *(float *)((int)&DAT_010e4c74 + iVar16) = (float)dVar33;
      *(float *)((int)&DAT_010e4c78 + iVar16) = (float)dVar31;
      *(float *)((int)&DAT_010e4c7c + iVar16) = (float)dVar40;
      pfVar24 = (float *)((int)&DAT_010e4c90 + iVar16);
      iVar23 = 2;
      *(float *)((int)&DAT_010e4c80 + iVar16) = (float)(dVar35 + (double)*(float *)(puVar9 + 0x14));
      *(float *)((int)&DAT_010e4c84 + iVar16) =
           (float)(dVar33 + (double)*(float *)((int)puVar9 + 0xa4));
      fVar58 = *(float *)(puVar9 + 0x15);
      *(float *)((int)&DAT_010e4c8c + iVar16) = (float)dVar40;
      *(float *)((int)&DAT_010e4c88 + iVar16) = (float)(dVar31 + (double)fVar58);
      dVar40 = 1.0;
      dVar38 = 0.9599310755729675;
      do {
        fVar57 = GameCamera.posZ;
        fVar58 = GameCamera.posY;
        *(float *)(puVar9 + 0x1c) = *pfVar19 - GameCamera.posX;
        *(float *)((int)puVar9 + 0xe4) = pfVar19[1] - fVar58;
        *(float *)(puVar9 + 0x1d) = pfVar19[2] - fVar57;
        *(float *)((int)puVar9 + 0xec) = pfVar19[3];
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar38);
        dVar31 = dVar31 * dVar40;
        dVar40 = -dVar40;
        mobyutil::MB_RotateQuatAxisAngle((float)dVar31,local_220,local_220);
        iVar23 = iVar23 + 1;
        *pfVar24 = *pfVar19 + *(float *)(puVar9 + 0x14);
        pfVar24[1] = pfVar19[1] + *(float *)((int)puVar9 + 0xa4);
        pfVar24[2] = pfVar19[2] + *(float *)(puVar9 + 0x15);
        pfVar25 = pfVar19 + 3;
        pfVar19 = pfVar19 + 4;
        pfVar24[3] = *pfVar25;
        pfVar24 = pfVar24 + 4;
      } while (iVar23 < 5);
    }
    iVar27 = iVar27 + 1;
    lVar17 = lVar17 + 2;
    iVar16 = iVar16 + 0x50;
  } while (iVar27 < 4);
  dVar38 = 1.0471975803375244;
  dVar29 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
  dVar38 = (double)mobyutil::MB_randRangeFloat(-0.5235988,(float)dVar38);
  fVar58 = DAT_0071f408 * DAT_008f51f4;
  *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x10) * fVar58;
  *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0x84) * fVar58;
  *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x11) * fVar58;
  mobyutil::MB_RotateQuatAxisAngle((float)dVar38,local_220,local_220);
  mobyutil::MB_RotateQuatAxisAngle((float)dVar29,local_220,local_220);
  mobyutil::MB_randRange(1,8);
  mobyutil::MB_randInt(2);
  dVar29 = (double)mobyutil::MB_randRangeFloat(0.2,0.6);
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.30000001192092896),dVar29,dVar52,param_1 + 0x10,
             *(undefined4 *)((int)puVar9 + 0x17c));
  puVar9[0x2f] = (longlong)(int)((double)animationSpeed * dVar39);
  dVar38 = 0.15000000596046448;
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.15000000596046448),(double)(float)(dVar29 * dVar30),dVar52,
             param_1 + 0x10,*(undefined4 *)((int)puVar9 + 0x17c));
  mobyutil::MB_randRange(1,8);
  mobyutil::MB_randInt(2);
  dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar38,3.0);
  puVar9[0x2f] = (longlong)(int)(animationSpeed * 12.5);
  partupd::SpawnPart_53
            ((double)(float)(dVar29 * 0.10000000149011612),dVar29,dVar52,iVar8 + 0x10,
             *(undefined4 *)((int)puVar9 + 0x17c));
  return;
}



//==== 004ca100  ns=mobyupdate_helpers  size=0x244
// sig: undefined M983_004ca100(void)
// callers(1): 004ca718 mobyupdate_unsorted::UpdateMoby_983
// callees(0): 

void mobyupdate_helpers::M983_004ca100(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined8 in_r0;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (DAT_008f5170 != 0) {
    fVar3 = *(float *)(iVar2 + 0x14) - *(float *)(param_1 + 0x14);
    DAT_010e47f0 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(iVar2 + 0x10) - DAT_010e47f0;
    auVar17 = loadVectorLeftIndexed(0x51f0,0x8f0000);
    DAT_008f5170 = 0;
    fVar5 = *(float *)(iVar2 + 0x18) - *(float *)(param_1 + 0x18);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    DAT_010e4dd4 = 0;
    auVar17 = loadVectorLeftIndexed(in_r0,0x4ca0f0);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorAddFloatingPoint
                        (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar17);
    fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    pfVar12 = &DAT_010e47f0;
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010e4dd0 = storeVectorElementWordIndexed
                             (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x4dd0,
                              0x10e0000);
    PTR_DAT_008f51c4 = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010e47f4 = *(undefined4 *)(param_1 + 0x14);
    DAT_010e47f8 = *(undefined4 *)(param_1 + 0x18);
    DAT_010e47fc = *(undefined4 *)(param_1 + 0x1c);
    lVar16 = 0x13;
    puVar15 = &DAT_010e4a74;
    puVar14 = &DAT_010e4c04;
    pfVar13 = (float *)&DAT_010e4800;
    fVar7 = (DAT_008f5174 * 0.05) / fVar6;
    puVar11 = &DAT_010e4ad0;
    fVar9 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    fVar8 = fVar1;
    if (0.0 - fVar6 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (0.0 - fVar6 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar9 = fVar5 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar7;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar7;
    }
    do {
      *pfVar13 = *pfVar12 + fVar1;
      pfVar13[1] = pfVar12[1] + fVar8;
      pfVar13[2] = pfVar12[2] + fVar9;
      pfVar10 = pfVar12 + 3;
      pfVar12 = pfVar12 + 4;
      pfVar13[3] = *pfVar10;
      *puVar15 = 0;
      puVar11[3] = 0;
      pfVar13 = pfVar13 + 4;
      puVar11[2] = 0;
      puVar15 = puVar15 + 1;
      puVar11[1] = 0;
      *puVar11 = 0;
      *puVar14 = 0;
      puVar11 = puVar11 + 4;
      puVar14 = puVar14 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    DAT_010e4db0 = 0xffff;
    DAT_010e4db2 = 0xffff;
    DAT_010e4db4 = 0xffff;
    DAT_010e4db6 = 0xffff;
    DAT_010e4dc0 = 8;
    DAT_010e4dc8 = 4;
    DAT_010e4dc2 = 4;
    DAT_010e4dca = 2;
    DAT_010e4dc4 = 8;
    DAT_010e4dcc = 4;
    DAT_010e4dc6 = 4;
    DAT_010e4dce = 2;
    DAT_010e4c54 = 0;
    DAT_010e4c58 = 0;
    DAT_010e4c5c = 0;
  }
  return;
}



//==== 004ca350  ns=mobyupdate_helpers  size=0x3ac
// sig: undefined M983_004ca350(void)
// callers(1): 004ca718 mobyupdate_unsorted::UpdateMoby_983
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M983_004ca350(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  
  dVar14 = 0.0;
  iVar8 = 0;
  dVar10 = (double)(DAT_008f50ac * mobyutil::g_FrameTime);
  dVar11 = (double)(DAT_008f50b0 * mobyutil::g_FrameTime);
  dVar15 = 1.0;
  dVar12 = (double)(DAT_008f50b8 * mobyutil::g_FrameTime);
  dVar13 = (double)(DAT_008f50bc * mobyutil::g_FrameTime);
  do {
    mobyutil::MB_randSphere(dVar10,dVar11,local_c0);
    mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
    dVar9 = (double)mobyutil::MB_randRangeFloat(DAT_008f5094,DAT_008f5098);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    dVar9 = (double)mobyutil::MB_randRangeFloat(DAT_008f509c,DAT_008f50a0);
    uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    dVar9 = (double)mobyutil::MB_randRangeFloat(DAT_008f50a4,DAT_008f50a8);
    uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
    mobyutil::MB_randRangeFloat(DAT_008f5084,DAT_008f5088);
    mobyutil::MB_randRangeFloat(DAT_008f508c,DAT_008f5090);
    mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar2 = DAT_008f5078;
    uVar1 = DAT_008f5074;
    mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar6 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_008f5080;
    uVar1 = DAT_008f507c;
    mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    uVar7 = fastfunc::FastLerpColor(uVar1,uVar2);
    partupd::SpawnPart_2(local_d0,local_c0,local_b0,uVar6,uVar7,uVar3,uVar4,uVar5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  return;
}



//==== 004ca718  ns=mobyupdate_unsorted  size=0x370
// sig: undefined UpdateMoby_983(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000fea60 mobyutil::MB_randSphere; 000ffb70 mobyutil::GetGroundZ; 00105870 mobyutil::DamageSphereAtPos; 00109af0 mobyutil::Delt; 004c8510 mobyupdate_helpers::M983_004c8510; 004c8df0 mobyupdate_helpers::M983_004c8df0; 004ca100 mobyupdate_helpers::M983_004ca100; 004ca350 mobyupdate_helpers::M983_004ca350; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 983 */

void mobyupdate_unsorted::UpdateMoby_983(MobyInstance *moby)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_60 [16];
  
  lVar2 = (longlong)(int)moby;
  dVar13 = 0.01745329238474369;
  pfVar1 = (float *)moby->pVar;
  dVar4 = (double)fastfunc::FastWrapRot
                            (pfVar1[0xb],DAT_008f4f10 * 0.017453292 * mobyutil::g_FrameTime);
  pfVar1[0xb] = (float)dVar4;
  dVar4 = (double)fastfunc::FastWrapRot
                            (pfVar1[0xc],
                             (float)((double)DAT_008f4f14 * dVar13) * mobyutil::g_FrameTime);
  pfVar1[0xc] = (float)dVar4;
  if (moby->state == 0) {
    iVar3 = fastfunc::FastDecTimerS32(pfVar1 + 10);
    if (iVar3 != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (moby->state < 2) {
    dVar11 = (double)(pfVar1[1] - (moby->pos).y);
    dVar9 = (double)(*pfVar1 - (moby->pos).x);
    dVar14 = (double)(pfVar1[2] - (moby->pos).z);
    dVar4 = (double)(DAT_008f4f20 * mobyutil::g_FrameTime);
    dVar13 = (double)SQRT((float)(dVar14 * dVar14 +
                                 (double)(float)(dVar9 * dVar9 + (double)(float)(dVar11 * dVar11))))
    ;
    mobyupdate_helpers::M983_004ca350(lVar2);
    mobyutil::MB_randSphere
              ((double)(DAT_008f4f18 * pfVar1[9]),(double)(DAT_008f4f18 * pfVar1[9]),pfVar1 + 4);
    pfVar1[4] = pfVar1[4] + (moby->pos).x;
    pfVar1[5] = pfVar1[5] + (moby->pos).y;
    pfVar1[6] = pfVar1[6] + (moby->pos).z;
    mobyupdate_helpers::M983_004ca100(lVar2);
    mobyupdate_helpers::M983_004c8df0(lVar2);
    draw::RegisterPostDraw(&PTR_M984_004cc120_0070f908,moby);
    if (dVar13 < dVar4) {
      mobyupdate_helpers::M983_004c8510(lVar2);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    dVar5 = (double)(float)(dVar4 / dVar13);
    dVar15 = 0.0;
    dVar4 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar4 = (double)(float)(dVar14 * dVar5);
    }
    dVar7 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar7 = (double)(float)(dVar11 * dVar5);
    }
    dVar6 = dVar15;
    if (0.0 - dVar13 < 0.0) {
      dVar6 = (double)(float)(dVar9 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar4 = (double)(float)(dVar14 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar7 = (double)(float)(dVar11 * dVar5);
    }
    if (dVar13 - 0.0 < 0.0) {
      dVar6 = (double)(float)(dVar9 * dVar5);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar4);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar7);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar6);
    mobyutil::GetGroundZ(0x3fe0000000000000,local_60,0);
    uVar12 = 0x4000000000000000;
    uVar10 = 0x4014000000000000;
    uVar8 = 0x3ff0000000000000;
    mobyutil::DamageSphereAtPos
              (0x4000000000000000,0x4014000000000000,0x3ff0000000000000,pfVar1[8],lVar2 + 0x10);
    mobyutil::DamageSphereAtPos(uVar12,uVar10,uVar8,pfVar1[8],local_60);
    iVar3 = fastfunc::FastDecTimerS32(pfVar1 + 0xd);
    if ((iVar3 != 0) && (mobyutil::Delt((float)dVar15,0.2,pfVar1 + 9), pfVar1[9] == 0.0)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  RegisterFuncForMoby(&PTR_M984_004cabd8_0070f8f0,moby);
  return;
}



//==== 004caa88  ns=Global  size=0x98
// sig: undefined FUN_004caa88(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_004caa88(undefined4 param_1,f32 *param_2,undefined4 param_3)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x3d7);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    (pMVar3->pos).x = *param_2;
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    *(undefined4 *)((int)pvVar2 + 0x28) = 5;
    (pMVar3->pos).w = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    *(undefined4 *)((int)pvVar2 + 0x34) = param_3;
    *(undefined4 *)((int)pvVar2 + 0x20) = param_1;
  }
  return;
}



//==== 004cab28  ns=Global  size=0xa8
// sig: undefined FUN_004cab28(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void FUN_004cab28(double param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  *(undefined4 *)(param_2 + 0x14) = param_3[1];
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  *(undefined4 *)(param_2 + 0x18) = param_3[2];
  *(undefined4 *)(param_2 + 0x1c) = param_3[3];
  auVar3 = loadVectorLeftIndexed(in_r0,0x4cab20);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar1 = *(undefined4 **)(param_2 + 0x78);
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x28,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 10) & 0xfffffffc) = uVar2;
  puVar1[9] = (float)param_1;
  if ((param_6 != 0) && (*(char *)(param_2 + 0x20) == '\0')) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    puVar1[10] = 0;
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
  }
  return;
}



//==== 004cabd8  ns=mobyupdate_helpers  size=0x7f4
// sig: undefined M984_004cabd8(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M984_004cabd8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  longlong lVar21;
  ulonglong unaff_r20;
  undefined4 *puVar22;
  ulonglong unaff_r21;
  undefined4 *puVar24;
  longlong lVar23;
  ulonglong unaff_r22;
  longlong lVar25;
  ulonglong unaff_r23;
  longlong lVar26;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  undefined4 *puVar28;
  ulonglong unaff_r26;
  int iVar29;
  ulonglong unaff_r27;
  int iVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar31;
  int iVar32;
  ulonglong unaff_r30;
  int iVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar21 = uVar16 - 0x490;
  puVar12 = (ulonglong *)lVar21;
  *puVar12 = uVar16;
  puVar12[0x94] = in_LR;
  puVar12[0x90] = unaff_r30;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  puVar12[0x84] = unaff_r18;
  fVar3 = GameCamera.posX - fVar1;
  fVar6 = GameCamera.posY - fVar2;
  fVar14 = 0.0;
  fVar4 = ABS(fVar3);
  fVar10 = ABS(fVar6);
  *(float *)((int)puVar12 + 0x3cc) = fVar3;
  puVar12[0x91] = unaff_r31;
  *(float *)(puVar12 + 0x7a) = fVar6;
  iVar11 = *(int *)(param_1 + 0x78);
  *(undefined4 *)((int)puVar12 + 0x7c) = 0;
  *(float *)((int)puVar12 + 0x3d4) = fVar4 - fVar10;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  fVar3 = *(float *)(param_1 + 0x18);
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x3cc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x3d4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x7a) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)((int)puVar12 + 0x3cc));
  if (*(float *)((int)puVar12 + 0x3d4) - 0.0 < 0.0) {
    fVar6 = fVar10;
  }
  fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar12 + 0x7a));
  if (*(float *)((int)puVar12 + 0x3d4) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  puVar12[0x8f] = unaff_r29;
  puVar12[0x8e] = unaff_r28;
  puVar12[0x8d] = unaff_r27;
  puVar12[0x8c] = unaff_r26;
  puVar12[0x8b] = unaff_r25;
  puVar12[0x8a] = unaff_r24;
  puVar12[0x89] = unaff_r23;
  puVar12[0x88] = unaff_r22;
  puVar12[0x87] = unaff_r21;
  puVar12[0x86] = unaff_r20;
  puVar12[0x85] = unaff_r19;
  puVar12[0x83] = unaff_r17;
  fVar15 = fVar14;
  if (0.0 < fVar6) {
    lVar31 = uVar16 - 0x480;
    lVar25 = uVar16 - 0x88;
    lVar23 = uVar16 - 0x98;
    lVar26 = 2;
    fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar12 + 0x404) = fVar6;
    *(float *)((int)puVar12 + 0x3fc) = fVar6;
    *(float *)(puVar12 + 0x80) = fVar6;
    *(float *)(puVar12 + 0x7f) = fVar6;
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0x3fc) = *(float *)((int)puVar12 + 0x3fc) * fVar5;
    *(float *)(puVar12 + 0x80) = *(float *)(puVar12 + 0x80) * fVar6;
    *(float *)((int)puVar12 + 0x404) = *(float *)((int)puVar12 + 0x404) * fVar6 * fVar5;
    do {
      *(float *)((int)lVar31 + 0x3f8) = *(float *)((int)lVar31 + 1000) * fVar6 * fVar6;
      iVar29 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar29 + 4) * fVar6 * fVar6;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0x98;
    pfVar19 = (float *)&DAT_007358e0;
    lVar31 = lVar21;
    lVar23 = lVar25;
    do {
      fVar6 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar31 + 0x3f8) = *(float *)((int)lVar31 + 0x3f8) * fVar6;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar23 = 2;
    lVar31 = lVar21;
    fVar6 = fVar14;
    do {
      iVar29 = (int)lVar31;
      iVar30 = (int)lVar25;
      lVar31 = lVar31 + 0x10;
      lVar25 = lVar25 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar29 + 0x3f8) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
              *(float *)(iVar30 + 0xc);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    fVar15 = (fVar6 + 0.7853982) * fVar10 + fVar4;
  }
  fVar6 = GameCamera.posZ;
  fVar2 = fVar2 - GameCamera.posY;
  fVar1 = fVar1 - GameCamera.posX;
  *(float *)(puVar12 + 0xf) = fVar15;
  fVar6 = fVar6 - fVar3;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar12 + 0x3c4) = fVar6;
  fVar6 = ABS(fVar6);
  fVar2 = ABS(fVar1);
  *(float *)(puVar12 + 0x78) = fVar1;
  *(float *)(puVar12 + 0x79) = fVar2 - fVar6;
  uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x78) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x79) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x3c4) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar12 + 0x78));
  if (*(float *)(puVar12 + 0x79) - 0.0 < 0.0) {
    fVar1 = fVar6;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar6 = ABS(*(float *)((int)puVar12 + 0x3c4));
  if (*(float *)(puVar12 + 0x79) - 0.0 < 0.0) {
    fVar6 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar31 = uVar16 - 0x480;
    lVar25 = uVar16 - 0xa8;
    lVar23 = uVar16 - 0xb8;
    lVar26 = 2;
    fVar1 = (fVar6 - fVar1) / (fVar6 + fVar1);
    fVar6 = fVar1 * fVar1;
    *(float *)((int)puVar12 + 0x3e4) = fVar1;
    *(float *)((int)puVar12 + 0x3dc) = fVar1;
    *(float *)(puVar12 + 0x7c) = fVar1;
    *(float *)(puVar12 + 0x7b) = fVar1;
    fVar1 = fVar6 * fVar6;
    *(float *)((int)puVar12 + 0x3dc) = *(float *)((int)puVar12 + 0x3dc) * fVar6;
    *(float *)(puVar12 + 0x7c) = *(float *)(puVar12 + 0x7c) * fVar1;
    *(float *)((int)puVar12 + 0x3e4) = *(float *)((int)puVar12 + 0x3e4) * fVar1 * fVar6;
    do {
      *(float *)((int)lVar31 + 0x3d8) = *(float *)((int)lVar31 + 0x3c8) * fVar1 * fVar1;
      iVar29 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar29 + 4) * fVar1 * fVar1;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0xb8;
    pfVar19 = (float *)&DAT_007358e0;
    lVar31 = lVar21;
    lVar23 = lVar25;
    do {
      fVar1 = *pfVar19;
      fVar6 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar31 + 0x3d8) = *(float *)((int)lVar31 + 0x3d8) * fVar1;
      lVar31 = lVar31 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar23 = 2;
    lVar31 = lVar21;
    do {
      iVar29 = (int)lVar31;
      lVar31 = lVar31 + 0x10;
      iVar30 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      fVar14 = fVar14 + *(float *)(iVar29 + 0x3d8) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8)
               + *(float *)(iVar30 + 0xc);
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    fVar14 = (fVar14 + 0.7853982) * fVar3 + fVar2;
  }
  lVar31 = uVar16 - 0x420;
  *(float *)((int)puVar12 + 0x74) = -fVar14;
  fastfunc::FastEulerToMtx1(uVar16 - 0x410,lVar31);
  fastfunc::FastEulerToMtx1(uVar16 - 0x3d0,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar1;
  *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar1;
  *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x16) = uVar18;
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0xb4) = uVar7;
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x17) = uVar8;
  *(undefined4 *)((int)puVar12 + 0xbc) = uVar9;
  *(undefined4 *)(puVar12 + 0x1e) = uVar18;
  *(undefined4 *)((int)puVar12 + 0xf4) = uVar7;
  *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar1;
  *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar1;
  *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar1;
  *(undefined4 *)(puVar12 + 0x1f) = uVar8;
  *(undefined4 *)((int)puVar12 + 0xfc) = uVar9;
  *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(iVar11 + 0x2c);
  fastfunc::FastEulerToMtx1(uVar16 - 0x390,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar1;
  *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar1;
  *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x26) = uVar18;
  uVar18 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0x134) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x27) = uVar18;
  *(undefined4 *)((int)puVar12 + 0x13c) = uVar7;
  *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar1;
  *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar1;
  *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar1;
  *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(iVar11 + 0x30);
  fastfunc::FastEulerToMtx1(uVar16 - 0x350,lVar31);
  fVar1 = *(float *)(iVar11 + 0x24);
  iVar30 = 0;
  iVar29 = 0;
  lVar31 = uVar16 - 0x310;
  uVar18 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar1;
  *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar1;
  *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar1;
  fVar1 = *(float *)(iVar11 + 0x24);
  *(undefined4 *)(puVar12 + 0x2e) = uVar18;
  uVar18 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar12 + 0x174) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar12 + 0x2f) = uVar18;
  iVar33 = 0;
  *(undefined4 *)((int)puVar12 + 0x17c) = uVar7;
  *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar1;
  *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar1;
  *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar1;
  do {
    uVar17 = draw::GetEffectTex(*(undefined4 *)((int)&DAT_008f4f3c + iVar30));
    iVar32 = (int)lVar21;
    *(undefined8 *)(iVar32 + 0x1f8) = uVar17;
    uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar32 + 0x200) = uVar17;
    uVar17 = FUN_00502f08(0,0,0,0,0,0);
    *(undefined8 *)(iVar32 + 0x1f0) = uVar17;
    uVar17 = idol_draw::PackCmd(DAT_010e47e0,DAT_008f4f24,DAT_010e47e4,DAT_008f4f28,0x80);
    *(undefined8 *)(iVar32 + 0x208) = uVar17;
    puVar22 = (undefined4 *)((int)&DAT_008f4f70 + iVar29);
    iVar32 = 0;
    puVar28 = &DAT_008f4f4c;
    puVar27 = &DAT_008f4f50;
    lVar23 = lVar31;
    lVar25 = lVar21;
    lVar26 = lVar21;
    do {
      uVar18 = *puVar27;
      *(undefined4 *)((int)lVar26 + 0x1d0) = *puVar28;
      *(undefined4 *)((int)lVar26 + 0x1d4) = uVar18;
      if (iVar33 == 0) {
        uVar18 = fastfunc::FastLerpColor
                           ((double)*(float *)(iVar11 + 0x24),
                            *(uint *)((int)&DAT_008f4f2c + iVar30) & 0xffffff,
                            *(uint *)((int)&DAT_008f4f2c + iVar30));
      }
      else {
        uVar18 = *(undefined4 *)((int)&DAT_008f4f2c + iVar30);
      }
      *(undefined4 *)((int)lVar25 + 0x1c0) = uVar18;
      iVar32 = iVar32 + 1;
      puVar28 = puVar28 + 2;
      puVar24 = (undefined4 *)lVar23;
      *puVar24 = *puVar22;
      lVar26 = lVar26 + 8;
      puVar27 = puVar27 + 2;
      puVar24[1] = puVar22[1];
      lVar25 = lVar25 + 4;
      puVar24[2] = puVar22[2];
      puVar13 = puVar22 + 3;
      puVar22 = puVar22 + 4;
      puVar24[3] = *puVar13;
      lVar23 = lVar23 + 0x10;
    } while (iVar32 < 4);
    iVar33 = iVar33 + 1;
    iVar30 = iVar30 + 4;
    iVar29 = iVar29 + 0x40;
    lVar31 = lVar31 + 0x90;
    lVar21 = lVar21 + 0x90;
  } while (iVar33 < 4);
  draw::FastDrawQuad(uVar16 - 0x310,uVar16 - 0x410,0,EffectTexHeaders,9);
  draw::FastDrawQuad(uVar16 - 0x280,uVar16 - 0x3d0,0,EffectTexHeaders,9);
  draw::FastDrawQuad(uVar16 - 0x1f0,uVar16 - 0x390,0,EffectTexHeaders,9);
  draw::FastDrawQuad(uVar16 - 0x160,uVar16 - 0x350,0,EffectTexHeaders,9);
  return;
}



//==== 004cb3e8  ns=mobyupdate_helpers  size=0x538
// sig: undefined M984_004cb3e8(void)
// callers(1): 004cc120 mobyupdate_helpers::M984_004cc120
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fe4f0 mobyutil::MB_randRangeSigned; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M984_004cb3e8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  undefined4 *puVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float *pfVar24;
  ulonglong unaff_r31;
  longlong lVar25;
  float *pfVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar38;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x1a0;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x36] = in_LR;
  puVar10[0x26] = in_f18;
  puVar10[0x27] = in_f19;
  puVar10[0x28] = in_f20;
  puVar10[0x29] = in_f21;
  puVar10[0x2a] = in_f22;
  puVar10[0x2b] = in_f23;
  puVar10[0x2c] = in_f24;
  puVar10[0x2d] = in_f25;
  puVar10[0x2e] = in_f26;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x25] = unaff_r31;
  puVar10[0x24] = unaff_r30;
  puVar10[0x23] = unaff_r29;
  puVar10[0x22] = unaff_r28;
  puVar10[0x21] = unaff_r27;
  puVar10[0x20] = unaff_r26;
  uVar15 = draw::GetEffectTex(0xb);
  puVar10[0x1d] = uVar15;
  uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1f] = uVar15;
  uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x1e] = uVar15;
  uVar15 = FUN_00502f08(0,0,0,0,0,0);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  dVar30 = (double)GameCamera.posY;
  dVar28 = (double)GameCamera.posX;
  fVar1 = (float)(dVar30 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar5);
  dVar31 = (double)GameCamera.posZ;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)(dVar31 - (double)fVar6);
  puVar10[0x1c] = uVar15;
  uVar7 = DAT_008f5270;
  dVar39 = 0.0;
  dVar40 = (double)(float)GameCamera.field8_0x14c;
  fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar12 = 0.3 / fVar11;
  dVar38 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  dVar44 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  dVar32 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  dVar45 = (double)(float)(dVar38 + (double)fVar4);
  dVar46 = (double)(float)(dVar44 + (double)fVar5);
  dVar44 = (double)(float)(dVar32 + (double)fVar6);
  fVar1 = (float)(dVar30 - dVar45);
  fVar2 = (float)(dVar28 - dVar46);
  fVar3 = (float)(dVar31 - dVar44);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar38 = dVar39;
  dVar28 = dVar39;
  dVar30 = dVar39;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar38 = (double)(fVar2 * fVar5);
    dVar28 = (double)(fVar1 * fVar5);
    dVar30 = (double)(fVar3 * fVar5);
  }
  fVar1 = (float)((double)DAT_00969f78 * dVar38 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar30));
  fVar2 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar28));
  fVar3 = (float)((double)hero::g_heroGravityDir * dVar28 -
                 (double)(float)((double)DAT_00969f74 * dVar38));
  *(undefined4 *)((int)puVar10 + 0xbc) = DAT_008f5270;
  *(undefined4 *)(puVar10 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar10 + 0xb4) = uVar7;
  *(undefined4 *)(puVar10 + 0x16) = uVar7;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar31 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  dVar32 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  dVar34 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  dVar41 = (double)(float)(dVar38 * dVar32 - (double)(float)(dVar28 * dVar31));
  dVar43 = (double)(float)(dVar28 * dVar34 - (double)(float)(dVar30 * dVar32));
  dVar42 = (double)(float)(dVar30 * dVar31 - (double)(float)(dVar38 * dVar34));
  dVar29 = (double)mobyutil::MB_randRangeSigned(0,0x3f999999a0000000);
  puVar18 = &DAT_008f5250;
  lVar25 = uVar14 - 0x130;
  dVar29 = (double)(float)((double)DAT_008f5278 + dVar29);
  pfVar24 = (float *)&DAT_008f5210;
  puVar23 = &DAT_008f5254;
  lVar27 = 4;
  lVar16 = lVar17;
  lVar21 = lVar25;
  puVar20 = puVar23;
  puVar19 = puVar18;
  pfVar26 = pfVar24;
  do {
    fVar2 = *pfVar26;
    fVar1 = (float)((double)fVar2 * dVar29);
    dVar33 = (double)fVar1;
    pfVar22 = (float *)lVar21;
    *pfVar22 = fVar1;
    dVar35 = (double)pfVar26[1];
    pfVar22[1] = (float)(dVar35 * dVar29);
    dVar36 = (double)(float)((double)pfVar26[2] * dVar29);
    pfVar22[2] = (float)((double)pfVar26[2] * dVar29);
    dVar37 = (double)pfVar26[3];
    pfVar26 = pfVar26 + 4;
    pfVar22[3] = (float)((double)fVar2 * (double)(float)(dVar29 * dVar40) + dVar37);
    *pfVar22 = (float)(dVar37 * dVar46 +
                      (double)(float)(dVar36 * dVar43 +
                                     (double)(float)(dVar33 * dVar38 +
                                                    (double)(float)(dVar35 * (double)(float)(dVar29 
                                                  * dVar31)))));
    pfVar22[1] = (float)(dVar37 * dVar45 +
                        (double)(float)(dVar36 * dVar42 +
                                       (double)(float)(dVar33 * dVar28 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar32)))));
    pfVar22[2] = (float)(dVar37 * dVar44 +
                        (double)(float)(dVar36 * dVar41 +
                                       (double)(float)(dVar33 * dVar30 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar34)))));
    uVar7 = *puVar19;
    lVar21 = lVar21 + 0x10;
    uVar8 = *puVar20;
    puVar19 = puVar19 + 2;
    *(undefined4 *)((int)lVar16 + 0xc0) = uVar7;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar16 + 0xc4) = uVar8;
    lVar16 = lVar16 + 8;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  draw::FastDrawQuad(uVar14 - 0x130,0,0,EffectTexHeaders,9);
  puVar13 = PTR_DAT_008f51c4;
  *(undefined **)((int)puVar10 + 0xbc) = PTR_DAT_008f51c4;
  *(undefined **)(puVar10 + 0x17) = puVar13;
  *(undefined **)((int)puVar10 + 0xb4) = puVar13;
  *(undefined **)(puVar10 + 0x16) = puVar13;
  dVar39 = (double)mobyutil::MB_randRangeSigned(dVar39,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar16 = 4;
  dVar39 = (double)(float)((double)DAT_008f527c + dVar39);
  do {
    fVar2 = *pfVar24;
    fVar1 = (float)((double)fVar2 * dVar39);
    dVar29 = (double)fVar1;
    pfVar26 = (float *)lVar25;
    *pfVar26 = fVar1;
    dVar33 = (double)pfVar24[1];
    pfVar26[1] = (float)(dVar33 * dVar39);
    dVar35 = (double)(float)((double)pfVar24[2] * dVar39);
    pfVar26[2] = (float)((double)pfVar24[2] * dVar39);
    dVar36 = (double)pfVar24[3];
    pfVar24 = pfVar24 + 4;
    pfVar26[3] = (float)((double)fVar2 * (double)(float)(dVar39 * dVar40) + dVar36);
    *pfVar26 = (float)(dVar36 * dVar46 +
                      (double)(float)(dVar35 * dVar43 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar33 * (double)(float)(dVar39 
                                                  * dVar31)))));
    pfVar26[1] = (float)(dVar36 * dVar45 +
                        (double)(float)(dVar35 * dVar42 +
                                       (double)(float)(dVar29 * dVar28 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar32)))));
    pfVar26[2] = (float)(dVar36 * dVar44 +
                        (double)(float)(dVar35 * dVar41 +
                                       (double)(float)(dVar29 * dVar30 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar34)))));
    uVar8 = *puVar18;
    lVar25 = lVar25 + 0x10;
    uVar9 = *puVar23;
    puVar18 = puVar18 + 2;
    *(undefined4 *)((int)lVar17 + 0xc0) = uVar8;
    puVar23 = puVar23 + 2;
    *(undefined4 *)((int)lVar17 + 0xc4) = uVar9;
    lVar17 = lVar17 + 8;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  draw::FastDrawQuad(uVar14 - 0x130,0,0,uVar7,9);
  return;
}



//==== 004cb930  ns=mobyupdate_helpers  size=0x7e4
// sig: undefined M984_004cb930(void)
// callers(1): 004cc120 mobyupdate_helpers::M984_004cc120
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M984_004cb930(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  undefined1 local_1d0 [144];
  undefined1 local_140 [152];
  
  draw::GetEffectTex(DAT_008f5208);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(DAT_008f520c);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      draw::FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  return;
}



//==== 004cc120  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M984_004cc120(void)
// callers(0): 
// callees(2): 004cb3e8 mobyupdate_helpers::M984_004cb3e8; 004cb930 mobyupdate_helpers::M984_004cb930

void mobyupdate_helpers::M984_004cc120(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010e4c64 = -(DAT_0071f408 * DAT_008f51bc - DAT_010e4c64);
  if (DAT_010e4c64 <= -8.0) {
    DAT_010e4c64 = DAT_010e4c64 + 8.0;
  }
  M984_004cb930((double)DAT_008f51c8,(double)DAT_008f51cc,(double)DAT_008f5200,&DAT_010e47f0,
                DAT_008f51a8,DAT_008f51b0);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,(double)DAT_008f5204,&DAT_010e4930,
                DAT_008f51d0,DAT_008f51d4);
  uVar1 = 0x3fc99999a0000000;
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,0x3fc99999a0000000,&DAT_010e4c70,
                DAT_010e4db8,DAT_010e4db8);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4cc0,DAT_010e4dba,
                DAT_010e4dba);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4d10,DAT_010e4dbc,
                DAT_010e4dbc);
  M984_004cb930((double)DAT_008f51d8,(double)DAT_008f51dc,uVar1,&DAT_010e4d60,DAT_010e4dbe,
                DAT_010e4dbe);
  M984_004cb3e8(param_1);
  return;
}



//==== 004cc2f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M984_004cc2f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M984_004cc2f0(void)

{
  DAT_008f52cc = 0x10000;
  return;
}



//==== 004cc328  ns=mobyupdate_unsorted  size=0x15c
// sig: undefined UpdateMoby_984(MobyInstance * moby)
// callers(0): 
// callees(2): 000fcc68 mobyutil::MB_randRot; 00502578 fastfunc::FastWrapRot

/* Moby 984 */

void mobyupdate_unsorted::UpdateMoby_984(MobyInstance *moby)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pfVar1 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_008f52f0;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar2 = (double)mobyutil::MB_randRot();
    *pfVar1 = (float)dVar2;
    pfVar1[1] = (moby->pos).z;
  }
  else if (moby->state < 2) {
    if (g_gameMode == GAME_MODE_SCENE) {
      moby->enabled = '\0';
      moby->modeBits = moby->modeBits | DISABLED;
    }
    else {
      moby->enabled = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    dVar3 = (double)fastfunc::FastWrapRot(*pfVar1,mobyutil::g_FrameTime * 0.87266463);
    dVar2 = (double)(float)(3.141592502593994 - dVar3);
    if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
      dVar2 = dVar3;
    }
    dVar4 = (double)(float)(-3.141592502593994 - dVar3);
    if ((double)(float)(-3.141592502593994 - dVar3) - dVar2 < 0.0) {
      dVar4 = dVar2;
    }
    *pfVar1 = (float)dVar3;
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar2 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar3 = (double)(float)(dVar5 * dVar2);
    (moby->pos).z =
         pfVar1[1] +
         (float)(dVar5 * dVar3) * 2.601887e-06 +
         (float)(dVar3 * -0.0001980741071747616 +
                (double)(float)(dVar2 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204
                                              + dVar4)));
  }
  return;
}



//==== 004cc4a8  ns=mobyupdate_helpers  size=0x83c
// sig: undefined M984_004cc4a8(void)
// callers(1): 004ccd48 mobyupdate_helpers::M984_004ccd48
// callees(11): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M984_004cc4a8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar10;
  puVar9[0x22] = in_LR;
  puVar9[0x1f] = in_f31;
  puVar9[0x1e] = unaff_r31;
  fVar4 = DAT_008f52f4;
  pMVar5 = param_1->pClass;
  puVar9[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  param_1->scale = pMVar5->gScale * fVar4;
  *(float *)((int)pvVar6 + 0xf4) = DAT_008f5324 * mobyutil::g_FrameTime;
  param_1->unk58 = 1.0;
  dVar25 = 0.0;
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar14 = mobyutil::MB_HandleDamage
                     (param_1,iVar13,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\x06')) {
    iVar7 = *(int *)(iVar13 + 0x20);
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    iVar14 = iVar14 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(iVar7 + 0xa6)) << 0x3a) >> 0x3f) &
                      3U - iVar14);
    if ((double)fVar4 <= dVar25) {
      iVar14 = 1;
    }
    uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f52f8;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar14 < 3) {
      if ((-1 < iVar14) && (0 < iVar14)) {
        fVar4 = DAT_008f52f8 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f5308 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f5304;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x58;
          lVar16 = uVar10 - 0x68;
          lVar21 = 2;
          fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xa4) = fVar2;
          *(float *)((int)puVar9 + 0x9c) = fVar2;
          *(float *)(puVar9 + 0x14) = fVar2;
          *(float *)(puVar9 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar2 * fVar2;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x68;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar2 = *pfVar17;
            fVar3 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar2;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x84,uVar20 + 0x88,uVar20 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar20 + 0x70);
        param_1->state = '\x06';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar14 < 0xb) {
      if (iVar14 < 9) {
        *(float *)((int)pvVar6 + 0x88) = DAT_008f5300 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f52fc;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x38;
          lVar16 = uVar10 - 0x48;
          lVar21 = 2;
          fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xc4) = fVar2;
          *(float *)((int)puVar9 + 0xbc) = fVar2;
          *(float *)(puVar9 + 0x18) = fVar2;
          *(float *)(puVar9 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar2;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar2 * fVar2;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x48;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar2 = *pfVar17;
            fVar3 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar2;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x88,uVar20 + 0x88,uVar20 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar20 + 0x70);
        param_1->state = '\x05';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    dVar25 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x188) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar20 + 0x188);
  if (*(int *)((int)pvVar6 + 0x188) == 0) {
    fVar4 = *(float *)((int)pvVar6 + 0x194);
  }
  else {
    fVar4 = *(float *)((int)pvVar6 + 0x194) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x18c) = fVar4;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x180)];
  iVar13 = mobyutil::MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar13 != 2) &&
     ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
      fVar1 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
      *(float *)((int)pvVar6 + 0x18c) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004ccd48  ns=mobyupdate_helpers  size=0xdf8
// sig: undefined M984_004ccd48(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00100ef8 mobyutil::MB_MoveAndCollide2; 00100f8c mobyutil::MB_InitDefaultParams; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00470690 FUN_00470690; 004cc4a8 mobyupdate_helpers::M984_004cc4a8; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Moby 986 */

void mobyupdate_helpers::M984_004ccd48(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x180;
  puVar11 = (ulonglong *)lVar22;
  *puVar11 = uVar18;
  puVar11[0x32] = in_LR;
  puVar11[0x2d] = in_f29;
  puVar11[0x2e] = in_f30;
  puVar11[0x2f] = in_f31;
  puVar11[0x2c] = unaff_r31;
  puVar11[0x2b] = unaff_r30;
  pvVar9 = moby->pVar;
  uVar30 = ZEXT48(pvVar9);
  dVar33 = 1.0;
  puVar11[0x2a] = unaff_r29;
  moby->unk58 = 1.0;
  M984_004cc4a8();
  uVar1 = moby->state;
  iVar25 = *(int *)((int)pvVar9 + 0x160);
  if (uVar1 == '\x06') {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar24 & 0x161) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_004ccce4,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x05') {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar24 & 0x40) == 0) {
      if ((uVar24 & 0x120) == 0) {
        if (*(short *)((int)pvVar9 + 0xae) == 2) {
          moby->unk58 = DAT_008f5320;
        }
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
      }
    }
  }
  else if (uVar1 == '\x04') {
    fVar38 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar38);
    fVar4 = ABS(fVar3);
    *(float *)(puVar11 + 0x16) = fVar38;
    *(float *)((int)puVar11 + 0xb4) = fVar3;
    *(float *)(puVar11 + 0x17) = fVar2 - fVar4;
    dVar33 = 0.0;
    uVar30 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
    fVar38 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar38 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
    fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar11 + 0xb4));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    dVar32 = dVar33;
    if (0.0 < fVar38) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0xac;
      lVar29 = uVar18 - 0x9c;
      lVar31 = 2;
      fVar38 = (fVar8 - fVar38) / (fVar8 + fVar38);
      fVar2 = fVar38 * fVar38;
      *(float *)(puVar11 + 0x1c) = fVar38;
      *(float *)(puVar11 + 0x1b) = fVar38;
      *(float *)((int)puVar11 + 0xdc) = fVar38;
      *(float *)((int)puVar11 + 0xd4) = fVar38;
      fVar38 = fVar2 * fVar2;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar2;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar38;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar38 * fVar2;
      do {
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xc4) * fVar38 * fVar38;
        iVar25 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar38 * fVar38;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0xac;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar38 = *pfVar28;
        fVar2 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xd4) * fVar38;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar2;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar25 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0xd4)) +
                          *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar3);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar32,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 400));
    dVar32 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((dVar32 <= 10.0) || (40.0 <= dVar32)) {
      if ((moby->field43_0x70 & 2U) != 0) {
        dVar33 = (double)mobyutil::MB_randRangeFloat(45.0,90.0);
        uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar9 + 0x1a0) = uVar23;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
        }
      }
    }
    else {
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
      fVar38 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      *(float *)(puVar11 + 0x14) = pSVar10->points[0].x - (moby->pos).x;
      fVar4 = mobyutil::g_FrameTime;
      *(float *)((int)puVar11 + 0xa4) = pSVar10->points[0].y - fVar38;
      *(float *)(puVar11 + 0x15) = pSVar10->points[0].z - fVar3;
      *(float *)((int)puVar11 + 0xac) = pSVar10->points[0].w;
      mobyutil::ClampVec3Magnitude((double)(fVar4 * 4.0),(Vec4 *)(uVar18 - 0xe0));
      mobyutil::MB_MoveAndCollide2
                ((double)DAT_008f5328,dVar33,lVar19,uVar18 - 0xe0,0x8f0000,DAT_008f532c);
    }
  }
  else if (uVar1 == '\x03') {
    iVar26 = fastfunc::FastDecTimerS32(uVar30 + 0x19c);
    if (iVar26 != 0) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x5330,0x8f0000);
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      auVar35 = loadVectorLeftIndexed(0x28,0x4ccce4);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar38 = *(float *)((int)pvVar9 + 0x198);
      auVar35 = vectorAddFloatingPoint
                          (auVar34,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x19c,uVar30
                         );
      *(undefined4 *)((int)pvVar9 + 0x19cU & 0xfffffffc) = uVar23;
      *(float *)((int)pvVar9 + 0x198) = fVar38 + DAT_008f5334;
      fVar8 = DAT_008f5338;
      fVar2 = mobyutil::g_FrameTime;
      fVar38 = (moby->rotation).z;
      fVar3 = fVar38 + 1.5707963;
      fVar4 = 3.1415925 - fVar38;
      if (fVar38 - (3.1415925 - fVar38) < 0.0) {
        fVar4 = fVar38;
      }
      fVar12 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar12 = fVar3;
      }
      fVar14 = -3.1415925 - fVar38;
      if ((-3.1415925 - fVar38) - fVar4 < 0.0) {
        fVar14 = fVar4;
      }
      fVar38 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
        fVar38 = fVar12;
      }
      fVar3 = fVar14 * fVar14;
      fVar4 = fVar38 * fVar38;
      fVar16 = fVar3 * fVar3 * fVar14;
      fVar5 = (moby->pos).x;
      fVar12 = fVar4 * fVar4 * fVar38;
      fVar17 = fVar3 * fVar16;
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).w;
      *(float *)(puVar11 + 0x11) = (float)((double)(moby->pos).z + dVar33);
      *(f32 *)((int)puVar11 + 0x8c) = fVar7;
      fVar15 = fVar4 * fVar12;
      *(f32 *)((int)puVar11 + 0x84) = fVar6;
      *(f32 *)(puVar11 + 0x10) = fVar5;
      *(undefined4 *)(puVar11 + 0x13) = 0;
      *(float *)((int)puVar11 + 0x94) =
           fVar8 * fVar2 *
           (fVar3 * fVar17 * 2.601887e-06 +
           fVar17 * -0.0001980741 + fVar16 * 0.0083330255 + fVar3 * fVar14 * -0.16666657 + fVar14);
      *(float *)(puVar11 + 0x12) =
           fVar8 * fVar2 *
           (fVar4 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar38 * -0.16666657 + fVar38);
      fVar38 = animationSpeed;
      *(float *)(puVar11 + 0x13) = fVar8 * fVar2 * (-1.0 / *(float *)((int)pvVar9 + 0x198));
      puVar11[0x27] = (longlong)(int)(fVar38 * 180.5);
      FUN_00470690(dVar33,uVar18 - 0xf0,uVar18 - 0x100,lVar19,iVar25,
                   *(undefined4 *)((int)puVar11 + 0x13c));
      uVar24 = (int)*(uint *)((int)pvVar9 + 0x198) >> 0x1f;
      if ((0x41a00000 < (int)((uVar24 >> 1 ^ *(uint *)((int)pvVar9 + 0x198)) - uVar24)) &&
         (moby->state = '\x04', moby->animationId != '\x01')) {
        puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar11 + 0x13c));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar38 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar38);
    fVar4 = ABS(fVar3);
    *(float *)((int)puVar11 + 0xbc) = fVar38;
    *(float *)(puVar11 + 0x18) = fVar3;
    *(float *)((int)puVar11 + 0xc4) = fVar2 - fVar4;
    dVar33 = 0.0;
    uVar30 = (ulonglong)(*(uint *)((int)puVar11 + 0xbc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1d) & 4;
    fVar38 = ABS(*(float *)((int)puVar11 + 0xbc));
    if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
      fVar38 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
    fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar11 + 0x18));
    if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    dVar32 = dVar33;
    if (0.0 < fVar38) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0x8c;
      lVar29 = uVar18 - 0x7c;
      lVar31 = 2;
      fVar38 = (fVar8 - fVar38) / (fVar8 + fVar38);
      fVar2 = fVar38 * fVar38;
      *(float *)(puVar11 + 0x20) = fVar38;
      *(float *)(puVar11 + 0x1f) = fVar38;
      *(float *)((int)puVar11 + 0xfc) = fVar38;
      *(float *)((int)puVar11 + 0xf4) = fVar38;
      fVar38 = fVar2 * fVar2;
      *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar2;
      *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar38;
      *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar38 * fVar2;
      do {
        *(float *)((int)lVar21 + 0xf4) = *(float *)((int)lVar21 + 0xe4) * fVar38 * fVar38;
        iVar25 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar38 * fVar38;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0x8c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar38 = *pfVar28;
        fVar2 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0xf4) = *(float *)((int)lVar21 + 0xf4) * fVar38;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar2;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar25 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0xf4)) +
                          *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar3);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar32,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 400));
    dVar32 = (double)mobyfunc::BlendAnimFrame(moby);
    if (((dVar32 <= 10.0) || (40.0 <= dVar32)) || (moby->animationBlend != 0.0)) {
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar9 + 0x198) = 0x3f800000;
        moby->state = '\x03';
        if (moby->animationId != '\0') {
          puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar11 + 0x13c));
        }
      }
    }
    else {
      fVar38 = (moby->pos).y;
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
      fVar3 = (moby->pos).z;
      *(float *)(puVar11 + 0xe) = pSVar10->points[1].x - (moby->pos).x;
      fVar4 = mobyutil::g_FrameTime;
      *(float *)((int)puVar11 + 0x74) = pSVar10->points[1].y - fVar38;
      *(float *)(puVar11 + 0xf) = pSVar10->points[1].z - fVar3;
      *(float *)((int)puVar11 + 0x7c) = pSVar10->points[1].w;
      mobyutil::ClampVec3Magnitude((double)(fVar4 * 8.0),(Vec4 *)(uVar18 - 0x110));
      mobyutil::MB_MoveAndCollide2
                ((double)DAT_008f5328,dVar33,lVar19,uVar18 - 0x110,0x8f0000,DAT_008f532c);
    }
  }
  else if (uVar1 == '\x01') {
    fVar38 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].x - (moby->pos).x;
    fVar3 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].y - (moby->pos).y;
    fVar4 = ABS(fVar38);
    fVar2 = ABS(fVar3);
    *(float *)(puVar11 + 0x19) = fVar38;
    *(float *)((int)puVar11 + 0xcc) = fVar3;
    *(float *)(puVar11 + 0x1a) = fVar4 - fVar2;
    fVar38 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x19));
    if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0xcc));
    if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
      fVar12 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar21 = uVar18 - 0x170;
      lVar27 = uVar18 - 0x6c;
      lVar29 = uVar18 - 0x5c;
      lVar31 = 2;
      fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x24) = fVar3;
      *(float *)(puVar11 + 0x23) = fVar3;
      *(float *)((int)puVar11 + 0x11c) = fVar3;
      *(float *)((int)puVar11 + 0x114) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar4;
      *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar3;
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar21 + 0x114) = *(float *)((int)lVar21 + 0x104) * fVar3 * fVar3;
        iVar26 = (int)lVar27;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar18 - 0x6c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar27 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x114) = *(float *)((int)lVar21 + 0x114) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar21 = 2;
      do {
        iVar26 = (int)lVar22;
        iVar13 = (int)lVar29;
        lVar22 = lVar22 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar38 = fVar38 + *(float *)(iVar26 + 0x114) + *(float *)(iVar13 + 4) +
                 *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar38 = (fVar38 + 0.7853982) * fVar8 + fVar2;
    }
    fVar38 = mobyutil::OrganicDeltAng
                       (fVar38,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                        mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar9 + 400));
    if (((iVar25 != 0) && (*(int *)((int)pvVar9 + 0x164) != 2)) &&
       ((iVar25 = fastfunc::FastDecTimerS32((double)fVar38,uVar30 + 0x1a0), iVar25 != 0 &&
        (moby->state = '\x02', moby->animationId != '\x01')))) {
      puVar11[0x27] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar11 + 0x13c));
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
    *(undefined2 *)((int)pvVar9 + 0x24) = 2;
    *(undefined1 *)((int)pvVar9 + 0x28) = 1;
    mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
    *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
    *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
    uVar23 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar9 + 0xd0) = uVar23;
    uVar24 = rand();
    if ((uVar24 & 1) != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
    (moby->pos).x = pSVar10->points[0].x;
    (moby->pos).y = pSVar10->points[0].y;
    (moby->pos).z = pSVar10->points[0].z;
    fVar38 = pSVar10->points[0].w;
    moby->state = '\x01';
    (moby->pos).w = fVar38;
  }
  return;
}



//==== 004cdb40  ns=mobyupdate_helpers  size=0x14
// sig: undefined M984_004cdb40(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M984_004cdb40(void)

{
  DAT_008f5388 = 0x10000;
  return;
}



//==== 004cdb60  ns=mobyupdate_helpers  size=0x110
// sig: undefined M984_004cdb60(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00502578 fastfunc::FastWrapRot

MobyInstance * mobyupdate_helpers::M984_004cdb60(int param_1)

{
  int iVar1;
  MobyInstance *pMVar2;
  undefined8 uVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  pMVar2 = mobyfunc::CreateMoby(99);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = *(char *)(param_1 + 0x30);
    pMVar2->drawDistance = *(short *)(param_1 + 0x32);
    pMVar2->enabled = *(char *)(param_1 + 0x31);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar2->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar2->rotation).w = *(f32 *)(param_1 + 0x4c);
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    iVar1 = *(int *)(iVar1 + 100);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      dVar4 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),3.1415927);
      (pMVar2->rotation).z = (float)dVar4;
    }
    else {
      dVar4 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x44),3.1415927);
      (pMVar2->rotation).y = (float)dVar4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    pMVar2->state = '\x03';
    pMVar2->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar2->light = (int)uVar3;
    mobyfunc::UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}



//==== 004cdcd0  ns=mobyupdate_unsorted  size=0xe78
// sig: undefined UpdateMoby_99(MobyInstance * moby)
// callers(0): 
// callees(14): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000efe40 mobyfunc::BlendAnimFrame; 000eff60 mobyfunc::MB_GetAnimSeqLength; 000efff8 mobyfunc::MB_GetAnimSeqTriggerLength; 000fcbe8 mobyutil::MB_randRangeFloat; 0010581c mobyutil::SetCollDamIn; 00110b70 mobyutil::MB_IsPntInCuboid; 00135c58 partupd::SpawnPart_79; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf
// strings: 004cdcb8: '?fffA ' (raw)

/* Moby 99 */

void mobyupdate_unsorted::UpdateMoby_99(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
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
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [32];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [56];
  
  lVar11 = (longlong)(int)moby;
  bVar2 = moby->state;
  if (bVar2 != 3) {
    pfVar6 = (float *)moby->pVar;
    bVar9 = false;
    if (bVar2 == 0) {
      fVar19 = mobyfunc::MB_GetAnimSeqLength((uint)moby->mClass,0);
      pfVar6[0x16] = fVar19;
      fVar20 = mobyfunc::MB_GetAnimSeqTriggerLength((uint)moby->mClass,0);
      fVar19 = pfVar6[0x11];
      pfVar6[0x17] = (fVar20 - pfVar6[0x16]) * 0.15915494;
      if (fVar19 == -NAN) {
        fVar19 = pfVar6[0x1a];
        if (fVar19 == -NAN) {
          moby->state = '\x01';
        }
        else {
          fVar20 = (moby->pos).x;
          *pfVar6 = fVar20;
          fVar3 = (moby->pos).y;
          pfVar6[1] = fVar3;
          fVar4 = (moby->pos).z;
          pfVar6[2] = fVar4;
          pfVar6[3] = (moby->pos).w;
          fVar3 = fVar3 - MobyInstance[(int)fVar19].pos.y;
          fVar20 = fVar20 - MobyInstance[(int)fVar19].pos.x;
          fVar4 = fVar4 - MobyInstance[(int)fVar19].pos.z;
          pfVar6[0x15] = (pfVar6[0x12] * mobyutil::g_FrameTime) /
                         SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
          moby->state = '\x02';
        }
      }
      else {
        fVar20 = (moby->pos).x;
        *pfVar6 = fVar20;
        fVar3 = (moby->pos).y;
        pfVar6[1] = fVar3;
        fVar4 = (moby->pos).z;
        pfVar6[2] = fVar4;
        pfVar6[3] = (moby->pos).w;
        fVar3 = fVar3 - Cuboids[(int)fVar19].pos.y;
        fVar20 = fVar20 - Cuboids[(int)fVar19].pos.x;
        fVar4 = fVar4 - Cuboids[(int)fVar19].pos.z;
        pfVar6[0x15] = (pfVar6[0x12] * mobyutil::g_FrameTime) /
                       SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
        moby->state = '\x02';
      }
      pfVar6[0x18] = 0.0;
      lVar13 = lVar11 + 0x10;
      pfVar6[0x13] = 0.1;
      fastfunc::FastVecAdd(local_190,lVar13,local_1a0);
      collproc::CollLine(lVar13,local_1b0,2,0,0);
      fastfunc::FastVecSub(&local_180,local_1b0,lVar13);
      pfVar6[0xc] = local_180;
      pfVar6[0xd] = local_17c;
      pfVar6[0xe] = local_178;
      pfVar6[0xf] = local_174;
    }
    else if (bVar2 < 2) {
      if ((pfVar6[0x10] == -NAN) ||
         (iVar12 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[0x10]),
         iVar12 != 0)) {
        bVar9 = true;
      }
    }
    else if (bVar2 < 3) {
      fVar19 = pfVar6[0x14] + pfVar6[0x15];
      fVar20 = -pfVar6[0x15];
      pfVar6[0x14] = fVar19;
      if (fVar19 <= 1.0) {
        if (fVar19 < 0.0) {
          pfVar6[0x14] = 0.0;
          pfVar6[0x15] = fVar20;
          fVar19 = 0.0;
        }
      }
      else {
        pfVar6[0x14] = 1.0;
        pfVar6[0x15] = fVar20;
        fVar19 = 1.0;
      }
      if (pfVar6[0x1a] == -NAN) {
        fVar8 = pfVar6[0x11];
        fVar5 = pfVar6[1];
        fVar1 = Cuboids[(int)fVar8].pos.y;
        fVar20 = Cuboids[(int)fVar8].pos.z;
        fVar3 = pfVar6[2];
        fVar4 = Cuboids[(int)fVar8].pos.w;
        (moby->pos).x = fVar19 * (Cuboids[(int)fVar8].pos.x - *pfVar6) + *pfVar6;
        (moby->pos).y = fVar19 * (fVar1 - fVar5) + pfVar6[1];
        fVar5 = pfVar6[2];
      }
      else {
        pfVar7 = (float *)MobyInstance[(int)pfVar6[0x1a]].pVar;
        fVar5 = pfVar6[1];
        fVar1 = pfVar7[1];
        fVar20 = pfVar7[2];
        fVar3 = pfVar6[2];
        fVar4 = pfVar7[3];
        (moby->pos).x = fVar19 * (*pfVar7 - *pfVar6) + *pfVar6;
        (moby->pos).y = fVar19 * (fVar1 - fVar5) + pfVar6[1];
        fVar5 = pfVar6[2];
      }
      (moby->pos).w = fVar4;
      (moby->pos).z = fVar19 * (fVar20 - fVar3) + fVar5;
      if ((pfVar6[0x10] == -NAN) ||
         (iVar12 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[0x10]),
         iVar12 != 0)) {
        lVar13 = lVar11 + 0x10;
        fastfunc::FastVecAdd(local_150,lVar13,local_160);
        collproc::CollLine(lVar13,local_170,2,0,0);
        fastfunc::FastVecSub(&local_140,local_170,lVar13);
        bVar9 = true;
        pfVar6[0xc] = local_140;
        pfVar6[0xd] = local_13c;
        pfVar6[0xe] = local_138;
        pfVar6[0xf] = local_134;
      }
    }
    lVar13 = lVar11 + 0x10;
    fVar20 = (moby->transform).v0.x * 12.0;
    fVar3 = (moby->transform).v0.y * 12.0;
    dVar18 = 0.0;
    fVar4 = (moby->transform).v0.z * 12.0;
    fVar5 = (moby->transform).v0.w * 12.0;
    fastfunc::FastVecAdd(&local_130,lVar13,pfVar6 + 0xc);
    fVar19 = pfVar6[0x18];
    if (fVar19 == 0.0) {
      pfVar6[8] = local_130;
      pfVar6[9] = local_12c;
      pfVar6[10] = local_128;
      pfVar6[0xb] = local_124;
    }
    else {
      dVar15 = (double)DAT_008f53ac;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        pfVar6[8] = fVar20;
        pfVar6[9] = fVar3;
        pfVar6[10] = fVar4;
        pfVar6[10] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6[8] = 0.0;
      }
      else {
        fVar1 = (float)((double)(float)(0.20000000298023224 - dVar15) / dVar14);
        pfVar6[8] = fVar20 * fVar1;
        pfVar6[9] = fVar3 * fVar1;
        pfVar6[10] = fVar4 * fVar1;
      }
      pfVar6[0xb] = fVar5;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        *(float *)((int)fVar19 + 0x10) = fVar20;
        *(float *)((int)fVar19 + 0x14) = fVar3;
        *(float *)((int)fVar19 + 0x18) = fVar4;
        *(undefined4 *)((int)fVar19 + 0x18) = 0;
        *(undefined4 *)((int)fVar19 + 0x14) = 0;
        *(undefined4 *)((int)fVar19 + 0x10) = 0;
      }
      else {
        fVar1 = (float)(-dVar15 / dVar14);
        *(float *)((int)fVar19 + 0x10) = fVar20 * fVar1;
        *(float *)((int)fVar19 + 0x14) = fVar3 * fVar1;
        *(float *)((int)fVar19 + 0x18) = fVar4 * fVar1;
      }
      *(float *)((int)fVar19 + 0x1c) = fVar5;
      fastfunc::FastVecAdd(&local_120,pfVar6 + 8,local_1d0);
      pfVar6[8] = local_120;
      pfVar6[9] = local_11c;
      pfVar6[10] = local_118;
      pfVar6[0xb] = local_114;
      fastfunc::FastVecAdd(&local_110,(ulonglong)(uint)pfVar6[0x18] + 0x10,local_1d0);
      fVar19 = pfVar6[0x18];
      *(undefined4 *)((int)fVar19 + 0x10) = local_110;
      *(undefined4 *)((int)fVar19 + 0x14) = local_10c;
      *(undefined4 *)((int)fVar19 + 0x18) = local_108;
      *(undefined4 *)((int)fVar19 + 0x1c) = local_104;
    }
    if (bVar9) {
      dVar14 = (double)mobyfunc::BlendAnimFrame(moby);
      dVar14 = (double)fastfunc::FastWrapRot
                                 (3.1415927,(float)(dVar14 - (double)pfVar6[0x16]) / pfVar6[0x17]);
      fVar19 = (float)(dVar14 + 1.570796251296997);
      fVar1 = 3.1415925 - fVar19;
      if (fVar19 - (3.1415925 - fVar19) < 0.0) {
        fVar1 = fVar19;
      }
      fVar8 = -3.1415925 - fVar19;
      if ((-3.1415925 - fVar19) - fVar1 < 0.0) {
        fVar8 = fVar1;
      }
      fVar19 = fVar8 * fVar8;
      fVar1 = fVar19 * fVar19 * fVar8;
      fVar10 = fVar19 * fVar1;
      pfVar6[0x13] = (fVar19 * fVar10 * 2.601887e-06 +
                     fVar10 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar19 * fVar8 * -0.16666657 + fVar8) * 0.02 + 0.09;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        pfVar6[4] = fVar20;
        pfVar6[5] = fVar3;
        pfVar6[6] = fVar4;
        pfVar6[6] = 0.0;
        pfVar6[5] = 0.0;
        pfVar6[4] = 0.0;
      }
      else {
        fVar19 = (float)(0.20000000298023224 / dVar14);
        pfVar6[4] = fVar20 * fVar19;
        pfVar6[5] = fVar3 * fVar19;
        pfVar6[6] = fVar4 * fVar19;
      }
      pfVar6[7] = fVar5;
      fastfunc::FastVecSub(&local_e0,lVar13,pfVar6 + 4);
      pfVar6[4] = local_e0;
      pfVar6[5] = local_dc;
      pfVar6[6] = local_d8;
      pfVar6[7] = local_d4;
      dVar14 = 0.5;
      iVar12 = fastfunc::FastCheckBsphereInView(0x4040000000000000,local_100);
      if (iVar12 != -1) {
        mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_a0,lVar11,0x10001);
        collproc::CollLine(lVar13,pfVar6 + 8,9,lVar11,auStack_a0);
        iVar12 = 0;
        dVar17 = 0.8999999761581421;
        dVar16 = 10.0;
        dVar15 = (double)(SQRT(pfVar6[0xe] * pfVar6[0xe] +
                               pfVar6[0xc] * pfVar6[0xc] + pfVar6[0xd] * pfVar6[0xd]) * 0.05);
        do {
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
          fastfunc::FastVecAddSelf(auStack_c0,local_1d0,local_d0);
          mobyutil::MB_randRangeFloat((float)((double)mobyutil::g_FrameTime * dVar16),(float)dVar15)
          ;
          partupd::SpawnPart_79(lVar11,local_1d0,local_1c0);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 7);
        if (iVar12 < 0xf) {
          dVar15 = -dVar15;
          do {
            mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
            fastfunc::FastVecSub(local_b0,local_d0,local_1d0);
            mobyutil::MB_randRangeFloat
                      ((float)((double)mobyutil::g_FrameTime * dVar16),(float)dVar15);
            partupd::SpawnPart_79(lVar11,local_1d0,local_1c0);
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0xf);
        }
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar14),mobyutil::g_FrameTime);
        dVar14 = -0.009999999776482582;
        dVar18 = 0.009999999776482582;
        mobyutil::MB_randRangeFloat(-0.01,0.01);
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar18);
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar18);
        partupd::SpawnPart_79(0,pfVar6 + 8,local_1c0);
      }
      RegisterFuncForMoby(&PTR_M994_004ceb50_0070f950,moby);
    }
  }
  return;
}



//==== 004ceb48  ns=mobyupdate_helpers  size=0x4
// sig: undefined M994_004ceb48(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M994_004ceb48(void)

{
  return;
}



//==== 004ceb50  ns=mobyupdate_helpers  size=0x3e8
// sig: undefined M994_004ceb50(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005023f0 fastfunc::FastVecAdd; 00502a64 fastfunc::FastVecSub; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M994_004ceb50(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  ulonglong in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 0x180;
  puVar5 = (ulonglong *)lVar24;
  *puVar5 = uVar18;
  puVar5[0x32] = in_LR;
  puVar5[0x2f] = in_f31;
  puVar5[0x2e] = unaff_r31;
  fVar15 = GameCamera.posZ;
  fVar14 = GameCamera.posY;
  fVar6 = GameCamera.posX;
  iVar4 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar4 + 0x10) - GameCamera.posX;
  fVar7 = *(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 0x20);
  fVar9 = *(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x24);
  fVar13 = *(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0x28);
  *(float *)(puVar5 + 0xe) = fVar2;
  fVar8 = *(float *)(iVar4 + 0x14) - fVar14;
  *(float *)((int)puVar5 + 0x74) = fVar8;
  fVar11 = fVar7 * fVar8 - fVar9 * fVar2;
  fVar10 = *(float *)(iVar4 + 0x18) - fVar15;
  fVar12 = fVar9 * fVar10 - fVar13 * fVar8;
  *(float *)(puVar5 + 0xf) = fVar10;
  *(undefined4 *)((int)puVar5 + 0x7c) = *(undefined4 *)(iVar4 + 0x1c);
  fVar8 = fVar13 * fVar2 - fVar7 * fVar10;
  fVar6 = *(float *)(iVar4 + 0x20) - fVar6;
  *(float *)(puVar5 + 0x10) = fVar6;
  fVar14 = *(float *)(iVar4 + 0x24) - fVar14;
  *(float *)((int)puVar5 + 0x84) = fVar14;
  fVar15 = *(float *)(iVar4 + 0x28) - fVar15;
  fVar16 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar8 * fVar8);
  *(float *)(puVar5 + 0x11) = fVar15;
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  *(float *)(puVar5 + 0xe) = fVar12;
  *(undefined4 *)((int)puVar5 + 0x8c) = uVar1;
  *(float *)((int)puVar5 + 0x74) = fVar8;
  *(float *)(puVar5 + 0xf) = fVar11;
  fVar17 = 0.0;
  *(undefined4 *)((int)puVar5 + 0x7c) = 0;
  fVar2 = *(float *)(iVar4 + 0x4c);
  fVar10 = fVar7 * fVar14 - fVar9 * fVar6;
  fVar9 = fVar9 * fVar15 - fVar13 * fVar14;
  fVar6 = fVar13 * fVar6 - fVar7 * fVar15;
  *(float *)(puVar5 + 0x10) = fVar9;
  *(float *)((int)puVar5 + 0x84) = fVar6;
  *(float *)(puVar5 + 0x11) = fVar10;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  fVar2 = fVar2 / fVar16;
  fVar7 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6);
  fVar13 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar13 = fVar12 * fVar2;
  }
  fVar14 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar14 = fVar8 * fVar2;
  }
  fVar15 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar15 = fVar11 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar13 = fVar12 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar14 = fVar8 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar15 = fVar11 * fVar2;
  }
  *(float *)(puVar5 + 0xe) = fVar13;
  *(float *)((int)puVar5 + 0x74) = fVar14;
  *(float *)(puVar5 + 0xf) = fVar15;
  fVar8 = *(float *)(iVar4 + 0x4c) / fVar7;
  fVar2 = fVar17;
  if (0.0 - fVar7 < 0.0) {
    fVar2 = fVar9 * fVar8;
  }
  fVar11 = fVar17;
  if (0.0 - fVar7 < 0.0) {
    fVar11 = fVar6 * fVar8;
  }
  if (0.0 - fVar7 < 0.0) {
    fVar17 = fVar10 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar2 = fVar9 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar11 = fVar6 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar17 = fVar10 * fVar8;
  }
  *(float *)(puVar5 + 0x10) = fVar2;
  *(float *)((int)puVar5 + 0x84) = fVar11;
  puVar5[0x2d] = unaff_r30;
  puVar5[0x2c] = unaff_r29;
  *(float *)(puVar5 + 0x11) = fVar17;
  uVar19 = draw::GetEffectTex(0xe);
  puVar5[0x29] = uVar19;
  uVar19 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar5[0x2a] = uVar19;
  uVar19 = FUN_00502f08(0,0,0,0,0,0);
  puVar5[0x28] = uVar19;
  uVar19 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar5[0x2b] = uVar19;
  *(undefined4 *)((int)puVar5 + 0x11c) = 0x80243278;
  lVar21 = uVar18 - 0x60;
  *(undefined4 *)(puVar5 + 0x23) = 0x80243278;
  lVar20 = uVar18 - 0x5c;
  *(undefined4 *)((int)puVar5 + 0x114) = 0x80243278;
  puVar23 = &DAT_00658dd8;
  *(undefined4 *)(puVar5 + 0x22) = 0x80243278;
  lVar25 = 2;
  puVar22 = &DAT_00658ddc;
  do {
    uVar1 = *puVar22;
    *(undefined4 *)((int)lVar24 + 0x120) = *puVar23;
    uVar3 = puVar23[2];
    *(undefined4 *)((int)lVar24 + 0x124) = uVar1;
    uVar1 = puVar22[2];
    puVar23 = puVar23 + 4;
    *(undefined4 *)((int)lVar21 + 8) = uVar3;
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar1;
    lVar21 = lVar21 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  fastfunc::FastVecSub(uVar18 - 0xf0,iVar4 + 0x10,uVar18 - 0x110);
  *(undefined4 *)(puVar5 + 0x1a) = *(undefined4 *)(puVar5 + 0x12);
  *(undefined4 *)((int)puVar5 + 0xd4) = *(undefined4 *)((int)puVar5 + 0x94);
  *(undefined4 *)(puVar5 + 0x1b) = *(undefined4 *)(puVar5 + 0x13);
  *(undefined4 *)((int)puVar5 + 0xdc) = *(undefined4 *)((int)puVar5 + 0x9c);
  fastfunc::FastVecAdd(uVar18 - 0xe0,iVar4 + 0x10,uVar18 - 0x110);
  *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(puVar5 + 0x14);
  *(undefined4 *)((int)puVar5 + 0xe4) = *(undefined4 *)((int)puVar5 + 0xa4);
  *(undefined4 *)(puVar5 + 0x1d) = *(undefined4 *)(puVar5 + 0x15);
  *(undefined4 *)((int)puVar5 + 0xec) = *(undefined4 *)((int)puVar5 + 0xac);
  fastfunc::FastVecSub(uVar18 - 0xd0,iVar4 + 0x20,uVar18 - 0x100);
  *(undefined4 *)(puVar5 + 0x1e) = *(undefined4 *)(puVar5 + 0x16);
  *(undefined4 *)((int)puVar5 + 0xf4) = *(undefined4 *)((int)puVar5 + 0xb4);
  *(undefined4 *)(puVar5 + 0x1f) = *(undefined4 *)(puVar5 + 0x17);
  *(undefined4 *)((int)puVar5 + 0xfc) = *(undefined4 *)((int)puVar5 + 0xbc);
  fastfunc::FastVecAdd(uVar18 - 0xc0,iVar4 + 0x20,uVar18 - 0x100);
  *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)(puVar5 + 0x18);
  *(undefined4 *)((int)puVar5 + 0x104) = *(undefined4 *)((int)puVar5 + 0xc4);
  *(undefined4 *)(puVar5 + 0x21) = *(undefined4 *)(puVar5 + 0x19);
  *(undefined4 *)((int)puVar5 + 0x10c) = *(undefined4 *)((int)puVar5 + 0xcc);
  draw::FastDrawQuad(uVar18 - 0xb0,0,0,EffectTexHeaders,9);
  return;
}



//==== 004cef38  ns=mobyupdate_helpers  size=0x14
// sig: undefined M994_004cef38(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M994_004cef38(void)

{
  DAT_008f53fc = 0x10000;
  return;
}



//==== 004cef50  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M994_004cef50(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M994_004cef50(void)

{
  water::SubmitZone((OceanPlane *)&DAT_008f9040);
  return;
}



//==== 004cef80  ns=mobyupdate_unsorted  size=0x94
// sig: undefined UpdateMoby_994(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 0017e31c water::OceanPlane_SetDepth

/* Moby 994 */

void mobyupdate_unsorted::UpdateMoby_994(MobyInstance *moby)

{
  if (moby->state == 0) {
    water::OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_008f9040,ZEXT48(&DAT_00900000),0x20);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M994_004cef50_0070f960,moby);
  }
  return;
}



//==== 004cf014  ns=mobyupdate_helpers  size=0x14
// sig: undefined M997_004cf014(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M997_004cf014(void)

{
  DAT_008f90cc = 0x10000;
  return;
}



//==== 004cf030  ns=mobyupdate_unsorted  size=0x114
// sig: undefined UpdateMoby_997(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 997 */

void mobyupdate_unsorted::UpdateMoby_997(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  f32 *pfVar3;
  float fVar4;
  
  bVar1 = moby->state;
  pfVar3 = (f32 *)moby->pVar;
  if (bVar1 == 0) {
    *pfVar3 = (moby->pos).x;
    pfVar3[1] = (moby->pos).y;
    pfVar3[2] = (moby->pos).z;
    pfVar3[3] = (moby->pos).w;
    uVar2 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar2] != '\0') ||
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) != 0)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).z + mobyutil::g_FrameTime;
    (moby->pos).z = fVar4;
    if (pfVar3[2] + 4.0 <= fVar4) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    (moby->pos).z = pfVar3[2] + 4.0;
  }
  return;
}



//==== 004cf144  ns=mobyupdate_helpers  size=0x14
// sig: undefined M998_004cf144(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M998_004cf144(void)

{
  DAT_008f914c = 0x10000;
  return;
}



//==== 004cf158  ns=mobyupdate_helpers  size=0x148
// sig: undefined M998_004cf158(void)
// callers(1): 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(0): 

void mobyupdate_helpers::M998_004cf158(int param_1)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  Spline *pSVar22;
  float *pfVar23;
  longlong lVar24;
  
  iVar20 = *(int *)(param_1 + 0x78);
  iVar21 = *(int *)(iVar20 + 0xdc);
  if (iVar21 != -1) {
    pSVar22 = Splines[iVar21];
    if (pSVar22->cnt == 7) {
      pfVar23 = (float *)&DAT_008f9190;
      fVar1 = *(float *)(param_1 + 0xc0);
      fVar2 = *(float *)(param_1 + 0xd0);
      lVar24 = 7;
      fVar3 = *(float *)(param_1 + 0xe0);
      fVar4 = *(float *)(param_1 + 0xc4);
      fVar5 = *(float *)(param_1 + 0xd4);
      fVar6 = *(float *)(param_1 + 0xe4);
      fVar7 = *(float *)(param_1 + 200);
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar10 = *(float *)(param_1 + 0xcc);
      fVar11 = *(float *)(param_1 + 0xdc);
      fVar12 = *(float *)(param_1 + 0xec);
      fVar13 = *(float *)(param_1 + 0x10);
      fVar14 = *(float *)(param_1 + 0x14);
      fVar15 = *(float *)(param_1 + 0x18);
      do {
        fVar16 = pfVar23[1];
        fVar17 = *pfVar23;
        fVar18 = pfVar23[2];
        fVar19 = pfVar23[3];
        pfVar23 = pfVar23 + 4;
        pSVar22->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
        pSVar22->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
        pSVar22->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
        pSVar22->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
        pSVar22 = (Spline *)pSVar22->points;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      DAT_0096bfba = (undefined2)*(undefined4 *)(iVar20 + 0xdc);
    }
  }
  return;
}



//==== 004cf2d8  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M998_004cf2d8(void)
// callers(1): 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M998_004cf2d8(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x7c);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 200),mobyutil::g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 200) = (float)dVar3;
  dVar13 = 3.141592502593994;
  dVar12 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar10 = 0.008333025500178337;
  dVar9 = -0.0001980741071747616;
  dVar8 = 2.601886990305502e-06;
  dVar5 = (double)(float)(3.141592502593994 - dVar3);
  if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(-3.141592502593994 - dVar3);
  if ((double)(float)(-3.141592502593994 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar6 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar3 = (double)(float)(dVar5 * dVar6);
  *(float *)(param_1 + 0x18) =
       ((float)(dVar5 * dVar3) * 2.601887e-06 +
       (float)(dVar3 * -0.0001980741071747616 +
              (double)(float)(dVar6 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204 +
                                            dVar4)))) * 0.25 + *(float *)(param_1 + 0x18);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xcc),mobyutil::g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xcc) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar7 = 0.0872664600610733;
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar3 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar6 = (double)(float)(dVar5 * dVar3);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x44),
                             (float)((double)(float)(dVar5 * dVar6) * dVar8 +
                                    (double)(float)(dVar6 * dVar9 +
                                                   (double)(float)(dVar3 * dVar10 +
                                                                  (double)(float)((double)(float)(
                                                  dVar5 * dVar4) * dVar11 + dVar4)))) * 0.08726646);
  *(float *)(param_1 + 0x44) = (float)dVar5;
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xd0),mobyutil::g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xd0) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar13 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar13 = dVar5;
  }
  dVar5 = (double)(float)(dVar13 * dVar13);
  dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar13));
  dVar3 = (double)(float)(dVar5 * dVar12);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x40),
                             (float)((double)(float)((double)(float)(dVar5 * dVar3) * dVar8 +
                                                    (double)(float)(dVar3 * dVar9 +
                                                                   (double)(float)(dVar12 * dVar10 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar5 * dVar13) * dVar11 + dVar13))
                                                  )) * dVar7));
  *(float *)(param_1 + 0x40) = (float)dVar5;
  uVar1 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x44)) - uVar1;
  if (dVar5 <= 0.1745329201221466) {
    if (dVar5 < -0.1745329201221466) {
      *(undefined4 *)(param_1 + 0x40) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3e32b8c2;
  }
  if (iVar2 < 0x3e32b8c3) {
    if (iVar2 < -0x3e32b8c2) {
      *(undefined4 *)(param_1 + 0x44) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3e32b8c2;
  }
  return;
}



//==== 004cf598  ns=mobyupdate_helpers  size=0x1ec
// sig: undefined M998_004cf598(void)
// callers(2): 004cf7f8 mobyupdate_helpers::M998_004cf7f8; 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(0): 

void mobyupdate_helpers::M998_004cf598(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  pCVar7 = Cuboids;
  iVar1 = *(int *)(param_1 + 0x78);
  iVar8 = -1;
  iVar11 = 0;
  *(undefined2 *)(iVar1 + 0xb4) = 0xffff;
  iVar10 = iVar1;
  do {
    iVar2 = *(int *)(iVar10 + 0x80);
    fVar4 = *(float *)(param_1 + 0x14) - pCVar7[iVar2].pos.y;
    fVar5 = *(float *)(param_1 + 0x10) - pCVar7[iVar2].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar2].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 1.0) {
      *(short *)(iVar1 + 0xb4) = (short)iVar11;
      iVar8 = iVar11;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar11 < 5);
  sVar9 = (short)iVar8;
  if (-1 < sVar9) {
    if (sVar9 < 3) {
      if (1 < sVar9) {
        if ((g_LevelFlags[Level][*(int *)(iVar1 + 0xb8)] == -1) ||
           (g_LevelFlags[Level][*(int *)(iVar1 + 0xbc)] == -1)) {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
          *(undefined1 *)(param_1 + 0x31) = 1;
          *(undefined4 *)(param_1 + 0x94) = uVar3;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined1 *)(param_1 + 0x31) = 0;
          *(undefined1 *)(param_1 + 0x20) = 6;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
        }
        goto LAB_004cf708;
      }
    }
    else if (4 < sVar9) goto LAB_004cf708;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
LAB_004cf708:
  pCVar7 = Cuboids;
  iVar8 = *(int *)(iVar1 + (int)((longlong)*(short *)(iVar1 + 0xb4) << 2) + 0x80);
  *(float *)(iVar1 + 0x60) = Cuboids[iVar8].pos.x;
  *(float *)(iVar1 + 100) = pCVar7[iVar8].pos.y;
  *(float *)(iVar1 + 0x68) = pCVar7[iVar8].pos.z;
  *(float *)(iVar1 + 0x6c) = pCVar7[iVar8].pos.w;
  *(float *)(iVar1 + 0x70) = pCVar7[iVar8].rot.x;
  *(float *)(iVar1 + 0x74) = pCVar7[iVar8].rot.y;
  *(float *)(iVar1 + 0x78) = pCVar7[iVar8].rot.z;
  *(float *)(iVar1 + 0x7c) = pCVar7[iVar8].rot.w;
  return;
}



//==== 004cf784  ns=mobyupdate_helpers  size=0x74
// sig: undefined M998_004cf784(void)
// callers(0): 
// callees(0): 

MobyInstance * mobyupdate_helpers::M998_004cf784(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if (*(short *)((int)MobyInstance[*puVar2 & 0x7fff].pVar + 0xb4) == param_2) {
        return MobyInstance + (*puVar2 & 0x7fff);
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 004cf7f8  ns=mobyupdate_helpers  size=0x140
// sig: undefined M998_004cf7f8(void)
// callers(1): 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(1): 004cf598 mobyupdate_helpers::M998_004cf598

void mobyupdate_helpers::M998_004cf7f8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Cuboid *pCVar4;
  short sVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pCVar4 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar5 = *(short *)(iVar2 + 0xb6);
  puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if (*(short *)((int)pMVar7->pVar + 0xb4) == sVar5) {
        if (pMVar7 != (MobyInstance *)0x0) {
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->pos).x = Cuboids[iVar3].pos.x;
          (pMVar7->pos).y = pCVar4[iVar3].pos.y;
          (pMVar7->pos).z = pCVar4[iVar3].pos.z;
          (pMVar7->pos).w = pCVar4[iVar3].pos.w;
          pCVar4 = Cuboids;
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->rotation).x = Cuboids[iVar3].rot.x;
          (pMVar7->rotation).y = pCVar4[iVar3].rot.y;
          (pMVar7->rotation).z = pCVar4[iVar3].rot.z;
          (pMVar7->rotation).w = pCVar4[iVar3].rot.w;
          M998_004cf598(pMVar7);
          sVar5 = *(short *)(iVar2 + 0xb6);
        }
        break;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  *(short *)(iVar2 + 0xb4) = sVar5;
  return;
}



//==== 004cf940  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M998_004cf940(void)
// callers(0): 
// callees(2): 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline

bool mobyupdate_helpers::M998_004cf940(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::OrganicDelt
            (1.0,*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd4),
             (float *)(iVar1 + 0xc0),0x4cf938,(float *)(iVar1 + 0xc4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xac) + -1);
  mobyutil::MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xc0) * (float)lVar3),*(int **)(iVar1 + 0xac),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xc0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xc0)) - uVar2);
}



//==== 004cfa04  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M998_004cfa04(void)
// callers(1): 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M998_004cfa04(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb6);
  if (sVar1 == 4) {
    mobyutil::MB_ShowPersistentMessage(8,0x1399);
  }
  else if (sVar1 == 3) {
    mobyutil::MB_ShowPersistentMessage(8,0x139c);
  }
  else if (sVar1 == 2) {
    mobyutil::MB_ShowPersistentMessage(8,0x139a);
  }
  else if (sVar1 == 1) {
    mobyutil::MB_ShowPersistentMessage(8,0x1398);
  }
  else if (sVar1 == 0) {
    mobyutil::MB_ShowPersistentMessage(8,0x13a5);
  }
  else {
    mobyutil::MB_ShowPersistentMessage(8,0x139b);
  }
  return;
}



//==== 004cfad8  ns=mobyupdate_helpers  size=0x1d8
// sig: undefined M998_004cfad8(void)
// callers(1): 004cfcc8 mobyupdate_unsorted::UpdateMoby_998
// callees(0): 

void mobyupdate_helpers::M998_004cfad8(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Spline *pSVar6;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xb4);
  if (sVar1 == 4) {
    *(undefined2 *)(iVar2 + 0xb6) = 2;
    pSVar6 = Splines[*(int *)(iVar2 + 0xa8)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else if (sVar1 == 3) {
    *(undefined2 *)(iVar2 + 0xb6) = 2;
    pSVar6 = Splines[*(int *)(iVar2 + 0xa0)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else if (sVar1 == 2) {
    if (g_LevelFlags[Level][*(int *)(iVar2 + 0xb8)] == -1) {
      *(undefined2 *)(iVar2 + 0xb6) = 4;
      pSVar6 = Splines[*(int *)(iVar2 + 0xa4)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
    else {
      *(undefined2 *)(iVar2 + 0xb6) = 3;
      pSVar6 = Splines[*(int *)(iVar2 + 0x9c)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
  }
  else if (sVar1 == 1) {
    *(undefined2 *)(iVar2 + 0xb6) = 0;
    pSVar6 = Splines[*(int *)(iVar2 + 0x98)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else {
    pSVar6 = *(Spline **)(iVar2 + 0xac);
    if (sVar1 == 0) {
      *(undefined2 *)(iVar2 + 0xb6) = 1;
      pSVar6 = Splines[*(int *)(iVar2 + 0x94)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
  }
  fVar3 = pSVar6->points[0].y - pSVar6->points[1].y;
  fVar4 = pSVar6->points[0].x - pSVar6->points[1].x;
  fVar5 = pSVar6->points[0].z - pSVar6->points[1].z;
  fVar3 = 1.0 / (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float)(longlong)pSVar6->cnt)
  ;
  *(float *)(iVar2 + 0xd4) = mobyutil::g_FrameTime * 20.0 * fVar3;
  fVar4 = DAT_0071f418;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(float *)(iVar2 + 0xd8) = fVar4 * 5.0 * fVar3;
  return;
}



//==== 004cfcc8  ns=mobyupdate_unsorted  size=0x7e4
// sig: undefined UpdateMoby_998(MobyInstance * moby)
// callers(0): 
// callees(16): 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 00117390 mobyutil::MB_PathEvalSpline; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004cf158 mobyupdate_helpers::M998_004cf158; 004cf2d8 mobyupdate_helpers::M998_004cf2d8; 004cf598 mobyupdate_helpers::M998_004cf598; 004cf7f8 mobyupdate_helpers::M998_004cf7f8; 004cfa04 mobyupdate_helpers::M998_004cfa04; 004cfad8 mobyupdate_helpers::M998_004cfad8; 004d407c FUN_004d407c; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 998 */

void mobyupdate_unsorted::UpdateMoby_998(MobyInstance *moby)

{
  u8 uVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  Cuboid *pCVar14;
  int iVar15;
  MobyInstance *pMVar16;
  ushort *puVar17;
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
  Vec4 local_110;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pvVar4 = moby->pVar;
  dVar25 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar27 = (double)(moby->pos).z;
  FUN_004d407c(lVar13,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if ((g_LevelFlags[Level][*(int *)((int)pvVar4 + 0xb8)] == -1) ||
       (g_LevelFlags[Level][*(int *)((int)pvVar4 + 0xbc)] == -1)) {
      puVar6 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar6;
      moby->enabled = '\x01';
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xc0),0x4cfcb0,(float *)((int)pvVar4 + 0xc4));
    local_80 = (longlong)**(int **)((int)pvVar4 + 0xac);
    pCVar14 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xb6) << 2) + 0x80);
    dVar24 = (double)(pCVar14->pos).x;
    dVar23 = (double)(pCVar14->pos).y;
    dVar22 = (double)(pCVar14->pos).z;
    dVar21 = (double)(pCVar14->pos).w;
    dVar20 = (double)(pCVar14->rot).y;
    dVar19 = (double)(pCVar14->rot).z;
    mobyutil::MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar4 + 0xac),pCVar14,0,uVar12 - 0xe0,uVar12 - 0xd0,
               0);
    dVar18 = (double)*(float *)((int)pvVar4 + 0xc0);
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar18 * (double)(float)(dVar24 - (double)local_e0) + (double)local_e0);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar18 * (double)(float)(dVar23 - (double)local_dc) + (double)local_dc);
    *(float *)((int)pvVar4 + 0x6c) = (float)dVar21;
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar18 * (double)(float)(dVar22 - (double)local_d8) + (double)local_d8);
    dVar18 = (double)fastfunc::FastDiffRots(dVar20,(double)local_cc);
    dVar18 = (double)fastfunc::FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),local_cc);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar18;
    dVar18 = (double)fastfunc::FastDiffRots(dVar19,(double)local_c8);
    dVar18 = (double)fastfunc::FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),local_c8);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar18;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x01';
      mobyupdate_helpers::M998_004cf7f8(lVar13);
    }
  }
  else if (uVar1 == '\x04') {
    pvVar5 = moby->pVar;
    mobyutil::OrganicDelt
              (1.0,*(float *)((int)pvVar5 + 0xd8),*(float *)((int)pvVar5 + 0xd8),
               *(float *)((int)pvVar5 + 0xd4),(float *)((int)pvVar5 + 0xc0),(int)moby->pClass,
               (float *)((int)pvVar5 + 0xc4));
    local_80 = (longlong)(**(int **)((int)pvVar5 + 0xac) + -1);
    mobyutil::MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar5 + 0xc0) * (float)local_80),
               *(int **)((int)pvVar5 + 0xac),local_80,0,(int)pvVar5 + 0x60,(int)pvVar5 + 0x70,0);
    uVar7 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xc0),0x720000,(float *)((int)pvVar4 + 0xc4));
    pCVar14 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xb4) << 2) + 0x80);
    dVar23 = (double)(pCVar14->pos).x;
    dVar22 = (double)(pCVar14->pos).y;
    dVar21 = (double)(pCVar14->pos).z;
    dVar20 = (double)(pCVar14->rot).y;
    dVar19 = (double)(pCVar14->rot).z;
    mobyutil::MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar4 + 0xac),pCVar14,0,uVar12 - 0x100,uVar12 - 0xf0,0);
    dVar18 = (double)*(float *)((int)pvVar4 + 0xc0);
    *(undefined4 *)((int)pvVar4 + 0x6c) = local_f4;
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar18 * (double)(float)((double)local_100 - dVar23) + dVar23);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar18 * (double)(float)((double)local_fc - dVar22) + dVar22);
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar18 * (double)(float)((double)local_f8 - dVar21) + dVar21);
    dVar18 = (double)fastfunc::FastDiffRots((double)local_ec,dVar20);
    dVar18 = (double)fastfunc::FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),
                                (float)dVar20);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar18;
    dVar18 = (double)fastfunc::FastDiffRots((double)local_e8,dVar19);
    dVar18 = (double)fastfunc::FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),
                                (float)dVar19);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar18;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        fastfunc::FastNormalizeRMtx4(uVar12 - 0xc0,lVar13 + 0xc0);
        fVar8 = g_heroPosition.y - (moby->pos).y;
        fVar9 = g_heroPosition.x - (moby->pos).x;
        fVar10 = g_heroPosition.z - (moby->pos).z;
        fVar11 = local_a0 * fVar10 + local_c0 * fVar9 + local_b0 * fVar8;
        if ((ABS(local_9c * fVar10 + local_bc * fVar9 + local_ac * fVar8) < 1.2) &&
           ((fVar11 < 1.0 && (-0.75 < fVar11)))) {
          mobyupdate_helpers::M998_004cfad8(lVar13);
          mobyupdate_helpers::M998_004cfa04(lVar13);
          if ((g_buttonsPressedThisFrame & TRIANGLE) != 0) {
            moby->state = '\x03';
            puVar17 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
            if (puVar17 != (ushort *)0x0) {
              do {
                pMVar16 = MobyInstance + (*puVar17 & 0x7fff);
                if (*(short *)((int)pMVar16->pVar + 0xb4) == *(short *)((int)pvVar4 + 0xb6)) {
                  if (pMVar16 != (MobyInstance *)0x0) {
                    pMVar16->collision = (ushort *)0x0;
                    pMVar16->enabled = '\0';
                    pMVar16->state = '\x02';
                    pMVar16->modeBits = pMVar16->modeBits | DISABLED;
                  }
                  break;
                }
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
              } while (-1 < (short)uVar2);
            }
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar4 + 0xb0) = 0xffff;
      *(undefined2 *)((int)pvVar4 + 0xb2) = 0xffff;
      mobyupdate_helpers::M998_004cf598(lVar13);
    }
  }
  mobyupdate_helpers::M998_004cf2d8(lVar13);
  uVar1 = moby->state;
  if (((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) {
    DAT_00969ed2 = 2;
    DAT_00969ed4 = 2;
    mobyupdate_helpers::M998_004cf158(lVar13);
    iVar15 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xb2));
    if (iVar15 == 0) {
      iVar15 = sound::PlayMobySound(0,4,moby);
      *(short *)((int)pvVar4 + 0xb2) = (short)iVar15;
    }
  }
  else {
    iVar15 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xb2));
    if (iVar15 != 0) {
      sVar3 = *(short *)((int)pvVar4 + 0xb2);
      if (((sVar3 != -1) &&
          (iVar15 = (int)((longlong)sVar3 << 7) - (int)((longlong)sVar3 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar15 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar15 + 4) != '\0')) {
        sound::sound_Kill((int)sVar3);
      }
      *(undefined2 *)((int)pvVar4 + 0xb2) = 0xffff;
    }
  }
  local_110.x = (float)((double)(moby->pos).x - dVar25);
  local_110.y = (float)((double)(moby->pos).y - dVar26);
  local_110.w = (moby->pos).w;
  local_110.z = (float)((double)(moby->pos).z - dVar27);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_110,uVar12 - 0x120,lVar13 + 0x40);
  return;
}



