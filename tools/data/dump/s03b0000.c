//==== 003b0198  ns=mobyupdate_unsorted  size=0x1168
// sig: undefined UpdateMoby_545(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000ffb70 mobyutil::GetGroundZ; 00106150 mobyutil::MB_RegisterLameShadow; 0010de78 mobyutil::MB_WrapRot; 0015d12c sound::PlayMobySound; 0038a248 FUN_0038a248; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize

/* Moby 545 */

void mobyupdate_unsorted::UpdateMoby_545(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  f32 fVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  float *pfVar26;
  longlong lVar25;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  float fVar37;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x180;
  puVar15 = (ulonglong *)lVar23;
  *puVar15 = uVar21;
  puVar15[0x32] = in_LR;
  puVar15[0x2f] = in_f31;
  puVar15[0x2e] = unaff_r31;
  puVar15[0x2d] = unaff_r30;
  puVar15[0x2c] = unaff_r29;
  puVar15[0x2b] = unaff_r28;
  puVar15[0x2a] = unaff_r27;
  puVar15[0x29] = unaff_r26;
  puVar15[0x28] = unaff_r25;
  puVar15[0x27] = unaff_r24;
  if ((moby != (MobyInstance *)0x0) && (pfVar7 = (float *)moby->pVar, pfVar7 != (float *)0x0)) {
    fastfunc::FastDecTimerS32(pfVar7 + 8);
    fVar37 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    *(float *)(puVar15 + 0xe) = fVar37;
    fVar4 = (moby->pos).z;
    *(float *)((int)puVar15 + 0x74) = fVar3;
    fVar5 = (moby->pos).w;
    bVar2 = moby->state;
    *(float *)(puVar15 + 0xf) = fVar4;
    *(f32 *)((int)puVar15 + 0x7c) = fVar5;
    if (bVar2 == 0) {
      moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
      fVar37 = fVar37 + *pfVar7;
      (moby->pos).x = fVar37;
      fVar3 = fVar3 + pfVar7[1];
      (moby->pos).y = fVar3;
      fVar4 = fVar4 + pfVar7[2];
      (moby->pos).z = fVar4;
      fVar6 = *pfVar7;
      dVar36 = 0.0;
      fVar16 = SQRT(pfVar7[2] * pfVar7[2] + fVar6 * fVar6 + pfVar7[1] * pfVar7[1]);
      if (fVar16 == 0.0) {
        *(float *)(puVar15 + 0x10) = fVar6;
        *(float *)((int)puVar15 + 0x84) = pfVar7[1];
        *(float *)(puVar15 + 0x11) = pfVar7[2];
        fVar6 = pfVar7[3];
        dVar32 = dVar36;
        dVar35 = dVar36;
        dVar33 = dVar36;
      }
      else {
        fVar16 = 0.2 / fVar16;
        dVar32 = (double)(fVar6 * fVar16);
        *(float *)(puVar15 + 0x10) = fVar6 * fVar16;
        dVar35 = (double)(pfVar7[1] * fVar16);
        *(float *)((int)puVar15 + 0x84) = pfVar7[1] * fVar16;
        dVar33 = (double)(pfVar7[2] * fVar16);
        *(float *)(puVar15 + 0x11) = pfVar7[2] * fVar16;
        fVar6 = pfVar7[3];
      }
      *(float *)((int)puVar15 + 0x8c) = fVar6;
      pfVar8 = moby->collisionMesh;
      puVar9 = moby->collision;
      *(float *)(puVar15 + 0x10) = (float)(dVar32 + (double)fVar37);
      *(float *)((int)puVar15 + 0x84) = (float)(dVar35 + (double)fVar3);
      *(float *)(puVar15 + 0x11) = (float)(dVar33 + (double)fVar4);
      uVar10 = *(undefined4 *)((int)pfVar7[4] + 0x98);
      uVar11 = *(undefined4 *)((int)pfVar7[4] + 0x94);
      moby->collisionMesh = (float *)0xffffffff;
      *(undefined4 *)((int)pfVar7[4] + 0x98) = 0xffffffff;
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pfVar7[4] + 0x94) = 0;
      iVar24 = collproc::CollLine(uVar21 - 0x110,uVar21 - 0x100,4,lVar22,0);
      fVar37 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      if (iVar24 != 0) {
        fVar16 = CollOutput.ip.y - *(float *)((int)puVar15 + 0x84);
        fVar17 = CollOutput.ip.x - *(float *)(puVar15 + 0x10);
        fVar18 = CollOutput.ip.z - *(float *)(puVar15 + 0x11);
        *(float *)(puVar15 + 0x10) = fVar17;
        *(float *)((int)puVar15 + 0x84) = fVar16;
        fVar6 = CollOutput.ip.w;
        *(float *)(puVar15 + 0x11) = fVar18;
        *(float *)((int)puVar15 + 0x8c) = fVar6;
        pMVar20 = CollOutput.pMoby;
        bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
        dVar35 = (double)SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
        fVar6 = (float)(0.2150000035762787 / dVar35);
        dVar32 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar32 = (double)(fVar17 * fVar6);
        }
        dVar33 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar33 = (double)(fVar16 * fVar6);
        }
        dVar31 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar31 = (double)(fVar18 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar32 = (double)(fVar17 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar33 = (double)(fVar16 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar31 = (double)(fVar18 * fVar6);
        }
        *(float *)(puVar15 + 0x10) = (float)dVar32;
        *(float *)((int)puVar15 + 0x84) = (float)dVar33;
        *(float *)(puVar15 + 0x11) = (float)dVar31;
        (moby->pos).x = (float)((double)fVar37 + dVar32);
        (moby->pos).y = (float)((double)fVar3 + dVar33);
        (moby->pos).z = (float)((double)fVar4 + dVar31);
        if (bVar1) {
          fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
          fVar3 = CollOutput.normal.z;
          dVar35 = ABS((double)CollOutput.normal.z);
          fVar37 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                        CollOutput.normal.y * CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x15) = fVar37;
          *(float *)((int)puVar15 + 0xac) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0xac) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x15));
          if ((double)*(float *)((int)puVar15 + 0xac) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          dVar35 = dVar36;
          if (dVar36 < dVar32) {
            lVar25 = uVar21 - 0x170;
            lVar30 = uVar21 - 0x60;
            lVar28 = uVar21 - 0x70;
            lVar29 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0x11c) = fVar4;
            *(float *)((int)puVar15 + 0x114) = fVar4;
            *(float *)(puVar15 + 0x23) = fVar4;
            *(float *)(puVar15 + 0x22) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0x114) = *(float *)((int)puVar15 + 0x114) * fVar6;
            *(float *)(puVar15 + 0x23) = *(float *)(puVar15 + 0x23) * fVar4;
            *(float *)((int)puVar15 + 0x11c) = *(float *)((int)puVar15 + 0x11c) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar25 + 0x110) = *(float *)((int)lVar25 + 0x100) * fVar4 * fVar4;
              iVar24 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar30 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar30 = lVar30 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar30 = uVar21 - 0x70;
            pfVar26 = (float *)&DAT_007358e0;
            lVar25 = lVar23;
            lVar28 = lVar30;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar25 + 0x110) = *(float *)((int)lVar25 + 0x110) * fVar4;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            lVar25 = lVar23;
            dVar32 = dVar36;
            do {
              iVar24 = (int)lVar25;
              iVar19 = (int)lVar30;
              lVar25 = lVar25 + 0x10;
              lVar30 = lVar30 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x110)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar35 = (double)((float)(dVar32 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar35 < 0.6981316804885864) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
            fVar37 = pfVar7[1] * 0.5;
            fVar3 = *pfVar7 * 0.5;
            fVar4 = pfVar7[2] * 0.5;
            *pfVar7 = fVar3;
            pfVar7[1] = fVar37;
            pfVar7[2] = fVar4;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar37 * fVar37) < 0.025) {
              moby->state = '\x01';
            }
          }
        }
        else if (pMVar20->oClass == BOMB_0221) {
          dVar32 = (double)mobyutil::MB_randRangeFloat(0.9,1.1);
          pfVar7[2] = (float)((double)pfVar7[2] * dVar32);
        }
        else {
          fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
          fVar3 = CollOutput.normal.z;
          dVar35 = ABS((double)CollOutput.normal.z);
          fVar37 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                        CollOutput.normal.y * CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x14) = fVar37;
          *(float *)((int)puVar15 + 0xa4) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0xa4) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x14));
          if ((double)*(float *)((int)puVar15 + 0xa4) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          dVar35 = dVar36;
          if (dVar36 < dVar32) {
            lVar25 = uVar21 - 0x170;
            lVar30 = uVar21 - 0x80;
            lVar28 = uVar21 - 0x90;
            lVar29 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xfc) = fVar4;
            *(float *)((int)puVar15 + 0xf4) = fVar4;
            *(float *)(puVar15 + 0x1f) = fVar4;
            *(float *)(puVar15 + 0x1e) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar6;
            *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar4;
            *(float *)((int)puVar15 + 0xfc) = *(float *)((int)puVar15 + 0xfc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar25 + 0xf0) = *(float *)((int)lVar25 + 0xe0) * fVar4 * fVar4;
              iVar24 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar30 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar30 = lVar30 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar30 = uVar21 - 0x90;
            pfVar26 = (float *)&DAT_007358e0;
            lVar25 = lVar23;
            lVar28 = lVar30;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar25 + 0xf0) = *(float *)((int)lVar25 + 0xf0) * fVar4;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            lVar25 = lVar23;
            dVar32 = dVar36;
            do {
              iVar24 = (int)lVar25;
              iVar19 = (int)lVar30;
              lVar25 = lVar25 + 0x10;
              lVar30 = lVar30 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0xf0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar35 = (double)((float)(dVar32 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar35 < 0.6981316804885864) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
            *pfVar7 = *pfVar7 * 1.2;
            pfVar7[1] = pfVar7[1] * 1.2;
            pfVar7[2] = pfVar7[2] * 1.2;
          }
        }
        if (pfVar7[8] == 0.0) {
          sound::PlayMobySound(0,0,moby);
          pfVar7[8] = 1.68156e-44;
        }
      }
      iVar24 = collproc::CollSphere(0x3fc99999a0000000,lVar22 + 0x10,&DAT_003b0140,4,lVar22);
      pMVar20 = MobyUpdateChainStart;
      if (iVar24 != 0) {
        fVar4 = CollOutput.ip.y - CollOutput.push.y;
        dVar35 = (double)CollOutput.push.x;
        fVar3 = (float)((double)CollOutput.ip.x - dVar35);
        fVar6 = CollOutput.ip.z - CollOutput.push.z;
        *(float *)(puVar15 + 0x10) = fVar3;
        *(float *)((int)puVar15 + 0x84) = fVar4;
        fVar37 = CollOutput.ip.w;
        *(float *)(puVar15 + 0x11) = fVar6;
        *(float *)((int)puVar15 + 0x8c) = fVar37;
        pMVar20 = CollOutput.pMoby;
        dVar33 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
        bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
        fVar37 = (float)(0.014999999664723873 / dVar33);
        dVar32 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar32 = (double)(fVar3 * fVar37);
        }
        dVar31 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        dVar34 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar34 = (double)(fVar6 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar32 = (double)(fVar3 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar34 = (double)(fVar6 * fVar37);
        }
        *(float *)(puVar15 + 0x10) = (float)dVar32;
        *(float *)((int)puVar15 + 0x84) = (float)dVar31;
        *(float *)(puVar15 + 0x11) = (float)dVar34;
        (moby->pos).x = (float)(dVar35 + dVar32);
        (moby->pos).y = (float)((double)CollOutput.push.y + dVar31);
        (moby->pos).z = (float)((double)CollOutput.push.z + dVar34);
        (moby->pos).w = CollOutput.push.w;
        if (bVar1) {
          fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
          fVar3 = CollOutput.normal.z;
          dVar35 = ABS((double)CollOutput.normal.z);
          fVar37 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                        CollOutput.normal.y * CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x13) = fVar37;
          *(float *)((int)puVar15 + 0x9c) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x9c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x13) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0x9c) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x13));
          if ((double)*(float *)((int)puVar15 + 0x9c) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          if (dVar36 < dVar32) {
            lVar22 = uVar21 - 0x170;
            lVar28 = uVar21 - 0xa0;
            lVar25 = uVar21 - 0xb0;
            lVar30 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xdc) = fVar4;
            *(float *)((int)puVar15 + 0xd4) = fVar4;
            *(float *)(puVar15 + 0x1b) = fVar4;
            *(float *)(puVar15 + 0x1a) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar6;
            *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar4;
            *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xc0) * fVar4 * fVar4;
              iVar24 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar28 = uVar21 - 0xb0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar25 = lVar28;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xd0) * fVar4;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar19 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0xd0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar36 < 0.6981316804885864) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
            fVar37 = pfVar7[1] * 0.5;
            fVar3 = *pfVar7 * 0.5;
            fVar4 = pfVar7[2] * 0.5;
            *pfVar7 = fVar3;
            pfVar7[1] = fVar37;
            pfVar7[2] = fVar4;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar37 * fVar37) < 0.025) {
              moby->state = '\x01';
            }
          }
        }
        else if (pMVar20->oClass == BOMB_0221) {
          dVar36 = (double)mobyutil::MB_randRangeFloat(0.9,1.1);
          pfVar7[2] = (float)((double)pfVar7[2] * dVar36);
        }
        else {
          fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
          fVar3 = CollOutput.normal.z;
          dVar35 = ABS((double)CollOutput.normal.z);
          fVar37 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                        CollOutput.normal.y * CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x12) = fVar37;
          *(float *)((int)puVar15 + 0x94) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x12) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0x94) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x12));
          if ((double)*(float *)((int)puVar15 + 0x94) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          if (dVar36 < dVar32) {
            lVar22 = uVar21 - 0x170;
            lVar28 = uVar21 - 0xc0;
            lVar25 = uVar21 - 0xd0;
            lVar30 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xbc) = fVar4;
            *(float *)((int)puVar15 + 0xb4) = fVar4;
            *(float *)(puVar15 + 0x17) = fVar4;
            *(float *)(puVar15 + 0x16) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar6;
            *(float *)(puVar15 + 0x17) = *(float *)(puVar15 + 0x17) * fVar4;
            *(float *)((int)puVar15 + 0xbc) = *(float *)((int)puVar15 + 0xbc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar22 + 0xb0) = *(float *)((int)lVar22 + 0xa0) * fVar4 * fVar4;
              iVar24 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar28 = uVar21 - 0xd0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar25 = lVar28;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar22 + 0xb0) = *(float *)((int)lVar22 + 0xb0) * fVar4;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar19 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0xb0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar36 < 0.6981316804885864) && (iVar24 = collproc::CollHotspot(), iVar24 == -1)) {
            *pfVar7 = *pfVar7 * 1.2;
            pfVar7[1] = pfVar7[1] * 1.2;
            pfVar7[2] = pfVar7[2] * 1.2;
          }
        }
        pMVar20 = MobyUpdateChainStart;
        if (pfVar7[8] == 0.0) {
          sound::PlayMobySound(0,0,moby);
          pfVar7[8] = 1.68156e-44;
          pMVar20 = MobyUpdateChainStart;
        }
      }
      for (; pMVar20 != (MobyInstance *)0x0; pMVar20 = (MobyInstance *)pMVar20->pChain) {
        if ((pMVar20 != moby) && (pMVar20->state != 0xfd && pMVar20->state != 0xfe)) {
          fVar37 = (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar4 = fVar37 - (pMVar20->pos).y;
          fVar6 = fVar3 - (pMVar20->pos).x;
          fVar16 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
          if (fVar16 < 1.8) {
            fVar16 = (1.8 - fVar16) * (DAT_0071f408 * -0.5 + 1.0);
            (moby->pos).x = fVar6 * fVar16 + fVar3;
            (moby->pos).y = fVar4 * fVar16 + fVar37;
          }
        }
      }
      iVar24 = fastfunc::FastDecTimerS16(pfVar7 + 5);
      if (iVar24 != 0) {
        moby->state = '\x02';
      }
      fVar37 = mobyutil::MB_WrapRot(*pfVar7);
      (moby->rotation).x = fVar37;
      fVar37 = mobyutil::MB_WrapRot(pfVar7[1]);
      (moby->rotation).y = fVar37;
      moby->collisionMesh = pfVar8;
      *(undefined4 *)((int)pfVar7[4] + 0x98) = uVar10;
      moby->collision = puVar9;
      *(undefined4 *)((int)pfVar7[4] + 0x94) = uVar11;
      pfVar7[2] = -(DAT_0071f418 * 9.8 - pfVar7[2]);
      (moby->rotation).x = DAT_0071f408 * 0.01 + (moby->rotation).x;
      (moby->rotation).y = DAT_0071f408 * 0.02 + (moby->rotation).y;
    }
    else if (bVar2 < 2) {
      dVar36 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      (moby->pos).z = (float)(dVar36 + 0.20000000298023224);
      (moby->pos).w = 0.0;
      fVar37 = pfVar7[4];
      *(f32 *)(puVar15 + 8) = (moby->pos).x;
      fVar5 = (moby->pos).y;
      *(float *)(puVar15 + 9) = (float)(dVar36 + 0.20000000298023224);
      *(f32 *)((int)puVar15 + 0x44) = fVar5;
      *(undefined4 *)((int)puVar15 + 0x4c) = 0;
      fVar37 = (float)FUN_0038a248(fVar37);
      pfVar7[6] = fVar37;
      moby->state = '\x02';
    }
    else if (bVar2 < 3) {
      fVar37 = -(DAT_0071f408 * 0.05 * moby->scale - moby->scale);
      moby->scale = fVar37;
      fVar3 = pfVar7[6];
      if ((fVar3 != 0.0) && (((uint)pfVar7[7] & 4) != 0)) {
        *(float *)((int)fVar3 + 0x2c) =
             DAT_0071f408 * 0.05 *
             (*(float *)(*(int *)((int)fVar3 + 0x24) + 0x24) - *(float *)((int)fVar3 + 0x2c)) +
             *(float *)((int)fVar3 + 0x2c);
        fVar37 = moby->scale;
      }
      if (fVar37 < DAT_0071f408 * 0.05 * moby->pClass->gScale) {
        moby->scale = 0.0001;
        fVar37 = pfVar7[6];
        if ((((fVar37 == 0.0) ||
             (*(char *)((int)fVar37 + 0x20) == -3 || *(char *)((int)fVar37 + 0x20) == -2)) ||
            (((uint)pfVar7[7] & 4) == 0)) ||
           (*(float *)(*(int *)((int)fVar37 + 0x24) + 0x24) - 0.01 <= *(float *)((int)fVar37 + 0x2c)
           )) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    mobyutil::MB_RegisterLameShadow((moby->scale * 0.3) / moby->pClass->gScale,moby);
    fVar5 = (moby->pos).z;
    fVar12 = (moby->pos).y;
    uVar13 = (int)fVar5 >> 0x1f;
    fVar37 = 5.0;
    uVar14 = (int)fVar12 >> 0x1f;
    iVar24 = (uVar13 >> 1 ^ (uint)fVar5) - uVar13;
    if ((iVar24 < 0x40a00000) || (0x43fa0000 < iVar24)) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      fVar5 = (moby->pos).x;
      uVar13 = (int)fVar5 >> 0x1f;
      fVar3 = (moby->pos).x;
      if ((int)((uVar13 >> 1 ^ (uint)fVar5) - uVar13) < 0x40a00000) {
        (moby->pos).x = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).x = 1018.0;
      }
      fVar3 = (moby->pos).y;
      if ((int)((uVar14 >> 1 ^ (uint)fVar12) - uVar14) < 0x40a00000) {
        (moby->pos).y = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).y = 1018.0;
      }
      fVar3 = (moby->pos).z;
      if (iVar24 < 0x40a00000) {
        (moby->pos).z = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).z = 1018.0;
      }
    }
  }
  return;
}



//==== 003b1338  ns=mobyupdate_unsorted  size=0x474
// sig: undefined UpdateMoby_546(MobyInstance * moby)
// callers(0): 
// callees(7): 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 0015d12c sound::PlayMobySound; 00267300 FUN_00267300; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 546 */

void mobyupdate_unsorted::UpdateMoby_546(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  uVar12 = ZEXT48(pvVar3);
  if (bVar1 == 0) {
    dVar13 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar3 + 0x68) = (float)dVar13;
    *(undefined4 *)((int)pvVar3 + 0x30) = 0x3a83126f;
    if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) && (*(int *)((int)pvVar3 + 100) == -1)
       ) {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
      if (*(int *)((int)pvVar3 + 0x60) != -1) {
        FUN_00267300(MobyInstance + *(int *)((int)pvVar3 + 0x60),0);
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    dVar14 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar3 + 0x68),mobyutil::g_FrameTime * 6.2831855);
    dVar13 = (double)(float)(3.141592502593994 - dVar14);
    if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
      dVar13 = dVar14;
    }
    dVar15 = (double)(float)(-3.141592502593994 - dVar14);
    if ((double)(float)(-3.141592502593994 - dVar14) - dVar13 < 0.0) {
      dVar15 = dVar13;
    }
    dVar13 = (double)(float)(dVar15 * dVar15);
    dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar15));
    *(float *)((int)pvVar3 + 0x68) = (float)dVar14;
    dVar14 = (double)(float)(dVar13 * dVar16);
    lVar9 = fastfunc::FastDoubleToInt
                      ((double)((((float)(dVar13 * dVar14) * 2.601887e-06 +
                                 (float)(dVar14 * -0.0001980741071747616 +
                                        (double)(float)(dVar16 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar13 * 
                                                  dVar15) * -0.16666656732559204 + dVar15)))) * 4.0
                                - 3.0) * 128.0));
    lVar10 = lVar9 + (lVar9 + -0x20 >> 0x3f & 0x20U - lVar9);
    uVar8 = lVar10 + (0x80 - lVar9 >> 0x3f & 0x80U - lVar10);
    moby->field60_0x90 =
         (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 | (uint)((uVar8 & 0xffffffff) << 0x10) |
         0x80000000;
    iVar11 = mobyutil::MB_damage(moby,0x330000,0);
    if (iVar11 != 0) {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
      moby->field60_0x90 = 0x80208020;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0x3fc90fdb;
      sound::PlayMobySound(0,0,moby);
      if (*(int *)((int)pvVar3 + 0x60) != -1) {
        FUN_00267300(MobyInstance + *(int *)((int)pvVar3 + 0x60),0);
      }
      auVar17 = loadVectorLeftIndexed(100,uVar12);
      auVar18 = loadVectorRightIndexed(0x74,uVar12);
      if (0 < *(int *)((int)pvVar3 + 100)) {
        auVar18 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
        auVar17 = ZEXT416(0xffffffff);
        auVar19 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = loadVectorLeftIndexed(0x28,0x3b1300);
        auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorAddFloatingPoint
                            (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
        auVar18 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar17,auVar18);
        auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x6c,uVar12
                          );
        *(undefined4 *)((int)pvVar3 + 0x6cU & 0xfffffffc) = uVar4;
      }
    }
  }
  else if (bVar1 < 3) {
    fVar2 = *(float *)((int)pvVar3 + 0x68);
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = fVar6 * fVar6;
    fVar5 = fVar2 * fVar2 * fVar6;
    fVar7 = fVar2 * fVar5;
    lVar9 = fastfunc::FastDoubleToInt
                      ((double)(((fVar2 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) * 0.5 +
                                0.5) * 128.0));
    lVar10 = lVar9 + (lVar9 + -0x20 >> 0x3f & 0x20U - lVar9);
    moby->field60_0x90 =
         (uint)((lVar10 + (0x80 - lVar9 >> 0x3f & 0x80U - lVar10) & 0xffffffff) << 8) | 0x80200020;
    if (0 < *(int *)((int)pvVar3 + 100)) {
      iVar11 = fastfunc::FastDecTimerS32(uVar12 + 0x6c);
      if (iVar11 == 0) {
        if (*(int *)((int)pvVar3 + 0x6c) < (int)(animationSpeed * 90.5)) {
          dVar13 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar3 + 0x68),
                                      mobyutil::g_FrameTime * 25.132742);
          *(float *)((int)pvVar3 + 0x68) = (float)dVar13;
        }
      }
      else {
        moby->state = '\x01';
        moby->setByGroup = '\0';
        *(undefined4 *)((int)pvVar3 + 0x68) = 0x3fc90fdb;
        if (*(int *)((int)pvVar3 + 0x60) != -1) {
          FUN_00267300(MobyInstance + *(int *)((int)pvVar3 + 0x60),1);
        }
      }
    }
  }
  moby->damage = -1;
  return;
}



//==== 003b17ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M546_003b17ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M546_003b17ac(void)

{
  DAT_0084571c = 0x10000;
  return;
}



//==== 003b17e8  ns=mobyupdate_unsorted  size=0x408
// sig: undefined UpdateMoby_55(MobyInstance * moby)
// callers(0): 
// callees(3): 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 55 */

double mobyupdate_unsorted::UpdateMoby_55(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  Cuboid *pCVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  
  piVar4 = (int *)moby->pVar;
  if (g_gameMode == GAME_MODE_SPACE) {
    if (piVar4[4] == 0) {
      piVar4[4] = 0;
      if (DAT_00964590 == 8) {
        piVar4[5] = 0;
        piVar4[4] = 1;
        piVar4[6] = 0x3eb2b8c2;
      }
      else if (DAT_00964590 == 3) {
        piVar4[4] = 1;
        piVar4[6] = 0;
        piVar4[5] = 0x3eb2b8c2;
      }
    }
  }
  else {
    piVar4[4] = 0;
  }
  if (piVar4[6] != piVar4[5]) {
    mobyutil::OrganicDeltAng
              ((float)piVar4[5],DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
               mobyutil::g_FrameTime * 1.5707964,(float *)(piVar4 + 6),0x720000,
               (float *)(piVar4 + 2));
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    fVar2 = (moby->pos).y - Cuboids[*piVar4].pos.y;
    fVar3 = (moby->pos).x - Cuboids[*piVar4].pos.x;
    piVar4[3] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar2 = (moby->rotation).z;
    dVar7 = (double)fVar2;
    piVar4[1] = (int)fVar2;
    moby->state = ((byte)((LZCOUNT(-(int)(moby->rotation).y) << 0x3a) >> 0x3f) & 1) + 1;
  }
  else {
    dVar16 = -0.16666656732559204;
    dVar7 = -1.5707950592041016;
    dVar13 = 1.570796251296997;
    dVar17 = 0.008333025500178337;
    dVar14 = 3.141592502593994;
    dVar18 = -0.0001980741071747616;
    dVar15 = -3.141592502593994;
    dVar19 = 2.601886990305502e-06;
    if (bVar1 < 2) {
      dVar12 = (double)(moby->pos).z;
      dVar8 = (double)fastfunc::FastWrapRot((float)piVar4[6],-1.570795);
      pCVar6 = Cuboids;
      dVar13 = (double)(float)(dVar8 + dVar13);
      dVar7 = (double)(float)(dVar14 - dVar8);
      if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar13);
      if (dVar13 - (double)(float)(dVar14 - dVar13) < 0.0) {
        dVar9 = dVar13;
      }
      dVar14 = (double)(float)(dVar15 - dVar8);
      if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
        dVar14 = dVar7;
      }
      dVar7 = (double)(float)(dVar15 - dVar13);
      if ((double)(float)(dVar15 - dVar13) - dVar9 < 0.0) {
        dVar7 = dVar9;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      iVar5 = *piVar4;
      dVar15 = (double)(float)(dVar7 * dVar7);
      dVar10 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar7));
      dVar9 = (double)(float)(dVar13 * dVar10);
      dVar11 = (double)(float)(dVar15 * dVar8);
      fVar3 = (float)((double)(float)(dVar15 * dVar11) * dVar19 +
                     (double)(float)(dVar11 * dVar18 +
                                    (double)(float)(dVar8 * dVar17 +
                                                   (double)(float)((double)(float)(dVar15 * dVar7) *
                                                                   dVar16 + dVar7)))) *
              (float)piVar4[3];
      (moby->pos).x = fVar3;
      fVar2 = (float)piVar4[3];
      (moby->pos).z = 0.0;
      fVar2 = (float)((double)(float)(dVar13 * dVar9) * dVar19 +
                     (double)(float)(dVar9 * dVar18 +
                                    (double)(float)(dVar10 * dVar17 +
                                                   (double)(float)((double)(float)(dVar13 * dVar14)
                                                                   * dVar16 + dVar14)))) * fVar2;
      (moby->pos).y = fVar2;
      (moby->pos).x = fVar3 + pCVar6[iVar5].pos.x;
      fVar3 = pCVar6[iVar5].pos.y;
      (moby->pos).z = (float)dVar12;
      (moby->pos).y = fVar2 + fVar3;
      dVar7 = (double)fastfunc::FastWrapRot((float)piVar4[1],(float)piVar4[6]);
      (moby->rotation).z = (float)dVar7;
    }
    else if (bVar1 < 3) {
      dVar12 = (double)(moby->pos).z;
      dVar8 = (double)fastfunc::FastDiffRots(0xbff921fa00000000,(double)(float)piVar4[6]);
      pCVar6 = Cuboids;
      dVar13 = (double)(float)(dVar8 + dVar13);
      dVar7 = (double)(float)(dVar14 - dVar8);
      if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar13);
      if (dVar13 - (double)(float)(dVar14 - dVar13) < 0.0) {
        dVar9 = dVar13;
      }
      dVar14 = (double)(float)(dVar15 - dVar8);
      if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
        dVar14 = dVar7;
      }
      dVar7 = (double)(float)(dVar15 - dVar13);
      if ((double)(float)(dVar15 - dVar13) - dVar9 < 0.0) {
        dVar7 = dVar9;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      iVar5 = *piVar4;
      dVar15 = (double)(float)(dVar7 * dVar7);
      dVar10 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar7));
      dVar9 = (double)(float)(dVar13 * dVar10);
      dVar11 = (double)(float)(dVar15 * dVar8);
      fVar3 = (float)((double)(float)(dVar15 * dVar11) * dVar19 +
                     (double)(float)(dVar11 * dVar18 +
                                    (double)(float)(dVar8 * dVar17 +
                                                   (double)(float)((double)(float)(dVar15 * dVar7) *
                                                                   dVar16 + dVar7)))) *
              (float)piVar4[3];
      (moby->pos).x = fVar3;
      fVar2 = (float)piVar4[3];
      (moby->pos).z = 0.0;
      fVar2 = (float)((double)(float)(dVar13 * dVar9) * dVar19 +
                     (double)(float)(dVar9 * dVar18 +
                                    (double)(float)(dVar10 * dVar17 +
                                                   (double)(float)((double)(float)(dVar13 * dVar14)
                                                                   * dVar16 + dVar14)))) * fVar2;
      (moby->pos).y = fVar2;
      (moby->pos).x = fVar3 + pCVar6[iVar5].pos.x;
      fVar3 = pCVar6[iVar5].pos.y;
      (moby->pos).z = (float)dVar12;
      (moby->pos).y = fVar2 + fVar3;
      dVar7 = (double)fastfunc::FastDiffRots((double)(float)piVar4[1],(double)(float)piVar4[6]);
      (moby->rotation).z = (float)dVar7;
    }
  }
  return dVar7;
}



//==== 003b1bf0  ns=mobyupdate_helpers  size=0x78
// sig: undefined M552_003b1bf0(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M552_003b1bf0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].oClass == WALL_BUTTON) &&
         (MobyInstance[*puVar2 & 0x7fff].setByGroup != '\0')) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}



//==== 003b1c70  ns=mobyupdate_helpers  size=0x9c
// sig: undefined M552_003b1c70(void)
// callers(0): 
// callees(0): 

MobyInstance * mobyupdate_helpers::M552_003b1c70(MobyInstance *param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar2 = MobyInstance + (*puVar3 & 0x7fff);
      if (((pMVar2->oClass == 0x228) && (param_1 != pMVar2)) &&
         (ABS((pMVar2->pos).z - (param_1->pos).z) < 0.1)) {
        return pMVar2;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 003b1d10  ns=mobyupdate_helpers  size=0x114
// sig: undefined M552_003b1d10(void)
// callers(1): 003b1e24 mobyupdate_unsorted::UpdateMoby_552
// callees(0): 

void mobyupdate_helpers::M552_003b1d10(MobyInstance *param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  MobyInstance *pMVar6;
  
  puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
  pMVar4 = MobyInstance;
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar6 = pMVar4 + (*puVar3 & 0x7fff);
      if (pMVar6->oClass == 0x228) {
        if (param_1 != pMVar6) {
          pMVar6->modeBits = pMVar6->modeBits | NO_UPDATE;
          pMVar4 = MobyInstance;
        }
        puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)pMVar6->group];
        if (puVar5 == (ushort *)0x0) {
          pMVar2 = (MobyInstance *)0x0;
        }
        else {
          do {
            pMVar2 = pMVar4 + (*puVar5 & 0x7fff);
            if ((pMVar2->oClass == 0x228 && pMVar6 != pMVar2) &&
               (ABS((pMVar2->pos).z - (pMVar6->pos).z) < 0.1)) goto LAB_003b1e00;
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
          } while (-1 < (short)uVar1);
          pMVar2 = (MobyInstance *)0x0;
        }
LAB_003b1e00:
        *(MobyInstance **)pMVar6->pVar = pMVar2;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003b1e24  ns=mobyupdate_unsorted  size=0x1ac
// sig: undefined UpdateMoby_552(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d720 RegisterFuncForMoby; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003b1d10 mobyupdate_helpers::M552_003b1d10

/* Moby 552 */

void mobyupdate_unsorted::UpdateMoby_552(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  
  piVar2 = (int *)moby->pVar;
  if ((moby->modeBits & NO_UPDATE) == NONE) {
    if (moby->state == 0) {
      if (*piVar2 == 0) {
        mobyupdate_helpers::M552_003b1d10(moby);
        moby->state = '\x01';
      }
    }
    else if (moby->state < 2) {
      puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      if (puVar4 != (ushort *)0x0) {
        do {
          if ((MobyInstance[*puVar4 & 0x7fff].oClass == WALL_BUTTON) &&
             (MobyInstance[*puVar4 & 0x7fff].setByGroup != '\0')) {
            if (piVar2[2] == 0) {
              return;
            }
            iVar3 = piVar2[3];
            piVar2[2] = 0;
            if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar3].state != '\0')) {
              sound::sound_Kill(iVar3);
            }
            piVar2[3] = -1;
            return;
          }
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (-1 < (short)uVar1);
      }
      piVar2[2] = 1;
      RegisterFuncForMoby(&PTR_M554_003b21f0_0070d190,moby);
      iVar3 = sound::IsMobyPlayingSound(moby,piVar2[3]);
      if (iVar3 == 0) {
        iVar3 = sound::PlayMobySound(0,4,moby);
        piVar2[3] = iVar3;
      }
    }
  }
  return;
}



//==== 003b1fd0  ns=mobyupdate_helpers  size=0x220
// sig: undefined M554_003b1fd0(void)
// callers(1): 003b21f0 mobyupdate_helpers::M554_003b21f0
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M554_003b1fd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar18 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(param_2 + 0x14) - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x10) - fVar2;
  fVar4 = *(float *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar7 + 0x11) = 0;
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)((int)puVar7 + 0x7c) = uVar5;
  *(float *)((int)puVar7 + 0x74) = fVar9;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(float *)((int)puVar7 + 0x84) = fVar10;
  *(float *)(puVar7 + 0xe) = fVar10;
  *(undefined4 *)((int)puVar7 + 0x94) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  *(float *)(puVar7 + 0xf) = fVar3 - fVar4;
  *(float *)(puVar7 + 0x10) = -fVar9;
  fVar3 = DAT_008457b0;
  *(undefined4 *)(puVar7 + 0x13) = 0x3f800000;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar7 + 0x14) = fVar2;
  *(float *)(puVar7 + 0x15) = fVar4;
  *(float *)((int)puVar7 + 0xa4) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xac) = uVar5;
  uVar5 = DAT_008457b8;
  *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
  puVar7[0x29] = unaff_r31;
  puVar7[0x28] = unaff_r30;
  *(float *)(puVar7 + 0x15) = fVar4 + fVar3;
  uVar12 = draw::GetEffectTex(uVar5);
  puVar7[0x25] = uVar12;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010c9f44,DAT_00845740,DAT_010c9f48,DAT_00845744,0x80);
  puVar7[0x27] = uVar12;
  lVar21 = 4;
  puVar16 = &DAT_00845794;
  puVar17 = &DAT_00845790;
  lVar14 = uVar11 - 0xa0;
  puVar13 = &DAT_00845750;
  lVar19 = lVar18;
  do {
    uVar5 = *puVar17;
    uVar6 = *puVar16;
    puVar17 = puVar17 + 2;
    *(undefined4 *)((int)lVar19 + 0x100) = uVar5;
    uVar5 = DAT_008457bc;
    puVar16 = puVar16 + 2;
    *(undefined4 *)((int)lVar19 + 0x104) = uVar6;
    *(undefined4 *)((int)lVar18 + 0xf0) = uVar5;
    lVar19 = lVar19 + 8;
    lVar18 = lVar18 + 4;
    puVar15 = (undefined4 *)lVar14;
    *puVar15 = *puVar13;
    puVar15[1] = puVar13[1];
    puVar15[2] = puVar13[2];
    puVar8 = puVar13 + 3;
    puVar13 = puVar13 + 4;
    puVar15[3] = *puVar8;
    lVar14 = lVar14 + 0x10;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar20 = 0;
  do {
    draw::FastDrawQuad(uVar11 - 0xa0,uVar11 - 0xe0,0,EffectTexHeaders,9);
    iVar20 = iVar20 + 1;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) + DAT_008457b4;
  } while (iVar20 < 4);
  return;
}



//==== 003b21f0  ns=mobyupdate_helpers  size=0xbc
// sig: undefined M554_003b21f0(void)
// callers(0): 
// callees(1): 003b1fd0 mobyupdate_helpers::M554_003b1fd0

void mobyupdate_helpers::M554_003b21f0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  
  puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar7 != (ushort *)0x0) {
    do {
      iVar5 = worldUpdateTime;
      pMVar6 = MobyInstance + (*puVar7 & 0x7fff);
      if (pMVar6->oClass == 0x228) {
        piVar2 = (int *)pMVar6->pVar;
        if (piVar2[1] != worldUpdateTime) {
          iVar3 = *piVar2;
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + 0x78);
            piVar2[1] = worldUpdateTime;
            *(int *)(iVar4 + 4) = iVar5;
            M554_003b1fd0(pMVar6,iVar3);
          }
        }
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003b22ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M554_003b22ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M554_003b22ac(void)

{
  DAT_0084580c = 0x10000;
  return;
}



//==== 003b22e0  ns=mobyupdate_helpers  size=0x580
// sig: undefined M554_003b22e0(void)
// callers(1): 003b2868 mobyupdate_helpers::M554_003b2868
// callees(4): 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot

undefined8 mobyupdate_helpers::M554_003b22e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  Vec4 *pVVar14;
  ulonglong uVar15;
  longlong lVar16;
  int32_t iVar17;
  ulonglong uVar18;
  longlong lVar19;
  short sVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined8 uVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar16 = uVar15 - 0xf0;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar15;
  puVar10[0x20] = in_LR;
  puVar10[0x1b] = in_f29;
  puVar10[0x1c] = in_f30;
  puVar10[0x1d] = in_f31;
  puVar10[0x16] = unaff_r27;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar10[0x17] = unaff_r28;
  sVar20 = *(short *)(iVar8 + 0xba);
  fVar4 = *(float *)(param_1 + 0x14);
  iVar12 = (int)((longlong)sVar20 << 4);
  pSVar9 = Splines[*(int *)(iVar8 + 0xac)];
  fVar5 = *(float *)(param_1 + 0x10);
  dVar31 = (double)*(float *)((int)&pSVar9->points[0].y + iVar12);
  dVar30 = (double)*(float *)((int)&pSVar9->points[0].x + iVar12);
  fVar1 = (float)(dVar31 - (double)fVar4);
  fVar2 = (float)(dVar30 - (double)fVar5);
  dVar32 = (double)*(float *)((int)&pSVar9->points[0].z + iVar12);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)(dVar32 - (double)fVar6);
  fVar7 = *(float *)(iVar8 + 0xa8);
  puVar10[0x15] = unaff_r26;
  puVar10[0x1a] = unaff_r31;
  fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar27 = 0.0;
  iVar12 = (int)((longlong)sVar20 << 4);
  puVar10[0x18] = unaff_r29;
  uVar24 = 0;
  puVar10[0x19] = unaff_r30;
  fVar7 = fVar7 / fVar11;
  dVar26 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar26 = (double)(fVar3 * fVar7);
  }
  dVar28 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  dVar29 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  fVar1 = (float)((double)fVar4 + dVar28);
  fVar2 = (float)((double)fVar5 + dVar29);
  *(float *)(param_1 + 0x18) = (float)((double)fVar6 + dVar26);
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = *(float *)((int)&pSVar9->points[0].x + iVar12) - fVar2;
  fVar1 = *(float *)((int)&pSVar9->points[0].y + iVar12) - fVar1;
  fVar4 = ABS(fVar2);
  fVar3 = ABS(fVar1);
  *(float *)(puVar10 + 0xf) = fVar2;
  *(float *)((int)puVar10 + 0x7c) = fVar1;
  *(float *)(puVar10 + 0x10) = fVar4 - fVar3;
  fVar1 = *(float *)(iVar8 + 0xbc);
  uVar18 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar10 + 0xf));
  if (*(float *)(puVar10 + 0x10) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar6 = ABS(*(float *)((int)puVar10 + 0x7c));
  if (*(float *)(puVar10 + 0x10) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar22 = uVar15 - 0xe0;
    lVar19 = uVar15 - 0x5c;
    lVar21 = uVar15 - 0x6c;
    lVar25 = 2;
    fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar10 + 0x12) = fVar2;
    *(float *)(puVar10 + 0x11) = fVar2;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    *(float *)((int)puVar10 + 0x84) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar4;
    *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar2;
    *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar22 + 0x84) = *(float *)((int)lVar22 + 0x74) * fVar2 * fVar2;
      iVar12 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar22 = uVar15 - 0x6c;
    lVar25 = 4;
    pfVar23 = (float *)&DAT_007358e0;
    lVar19 = lVar22;
    lVar21 = lVar16;
    do {
      fVar2 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar21 + 0x84) = *(float *)((int)lVar21 + 0x84) * fVar2;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar19 = 2;
    do {
      iVar12 = (int)lVar16;
      iVar13 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x84)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
  }
  dVar26 = (double)fastfunc::FastWrapRot((float)dVar27,fVar1);
  mobyutil::OrganicDeltAng
            ((float)dVar26,DAT_0071f418 * 2.0943952,DAT_0071f418 * 2.0943952,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),0x720000,
             (float *)(iVar8 + 0xa4));
  if (*(short *)(iVar8 + 0xb8) < 1) {
    fVar1 = (float)(dVar31 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar32 - (double)*(float *)(param_1 + 0x18));
    if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar8 + 0xa8) * 2.0) &&
       (sVar20 = *(short *)(iVar8 + 0xba) + -1, *(short *)(iVar8 + 0xba) = sVar20, sVar20 == -1)) {
      uVar24 = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - pSVar9->points[0].y;
    fVar4 = *(float *)(param_1 + 0x10) - pSVar9->points[0].x;
    fVar1 = pSVar9->points[0].z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar10 + 0x74) = 0;
    fVar2 = fVar2 - fVar1;
    mobyutil::OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,mobyutil::g_FrameTime * 10.0,(float *)((int)puVar10 + 0x74),
               0x720000,(float *)(iVar8 + 0xa8));
  }
  else {
    fVar1 = (float)(dVar31 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar32 - (double)*(float *)(param_1 + 0x18));
    iVar17 = pSVar9->cnt;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar8 + 0xa8) * 2.0) {
      iVar17 = pSVar9->cnt;
      sVar20 = *(short *)(iVar8 + 0xba) + 1;
      *(short *)(iVar8 + 0xba) = sVar20;
      if (sVar20 == iVar17) {
        uVar24 = 1;
      }
    }
    pVVar14 = pSVar9->points + iVar17 + -1;
    fVar3 = *(float *)(param_1 + 0x14) - pVVar14->y;
    fVar4 = *(float *)(param_1 + 0x10) - pVVar14->x;
    fVar1 = pVVar14->z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(puVar10 + 0xe) = 0;
    fVar2 = fVar2 - fVar1;
    mobyutil::OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,mobyutil::g_FrameTime * 10.0,(float *)(puVar10 + 0xe),0x720000,
               (float *)(iVar8 + 0xa8));
  }
  if (*(int *)((int)&pSVar9->points[0].w + (int)((longlong)*(short *)(iVar8 + 0xba) << 4)) ==
      0x42280000) {
    *(undefined4 *)(iVar8 + 0xbc) = 0;
  }
  dVar26 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0xc0),*(float *)(iVar8 + 0xa8));
  *(float *)(iVar8 + 0xc0) = (float)dVar26;
  fastfunc::FastQuaternionToEuler(iVar8 + 0x70,0);
  return uVar24;
}



//==== 003b2868  ns=mobyupdate_helpers  size=0x9c4
// sig: undefined M554_003b2868(MobyInstance * moby)
// callers(0): 
// callees(7): 000f0ea8 mobyfunc::AttachManipulator; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003b22e0 mobyupdate_helpers::M554_003b22e0

/* Moby 553 */

void mobyupdate_helpers::M554_003b2868(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  void *pvVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  Vec4 *pVVar19;
  int iVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  short sVar21;
  float *pfVar23;
  longlong lVar22;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x140;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x2a] = in_LR;
  puVar12[0x26] = unaff_r30;
  pvVar10 = moby->pVar;
  puVar12[0x25] = unaff_r29;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  puVar12[0x27] = unaff_r31;
  iVar20 = *(int *)((int)pvVar10 + 0xac);
  fVar5 = (moby->pos).w;
  fVar6 = (moby->rotation).x;
  puVar12[0x24] = unaff_r28;
  *(f32 *)((int)puVar12 + 0x7c) = fVar5;
  fVar5 = (moby->rotation).y;
  pSVar11 = Splines[iVar20];
  *(float *)(puVar12 + 0xe) = -fVar2;
  *(float *)((int)puVar12 + 0x74) = -fVar3;
  *(f32 *)(puVar12 + 0x10) = fVar6;
  *(float *)(puVar12 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).z;
  *(f32 *)((int)puVar12 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  *(f32 *)(puVar12 + 0x11) = fVar6;
  *(f32 *)((int)puVar12 + 0x8c) = fVar5;
  if (pvVar10 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar10 + 0xc4) = 0xffffffff;
      if (*(int *)((int)pvVar10 + 0xa0) != 0) {
        mobyfunc::AttachManipulator(moby,0,(int)pvVar10 + 0x60);
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0xac)];
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          *(undefined2 *)((int)pvVar10 + 0xb8) = 0xffff;
          *(short *)((int)pvVar10 + 0xba) = (short)pSVar11->cnt + -2;
          pVVar19 = pSVar11->points + pSVar11->cnt + -1;
          fVar2 = pVVar19->x;
          fVar3 = pVVar19->y;
          fVar4 = pVVar19->z;
          fVar7 = pVVar19->w;
        }
        else {
          *(undefined2 *)((int)pvVar10 + 0xb8) = 1;
          *(undefined2 *)((int)pvVar10 + 0xba) = 1;
          fVar2 = pSVar11->points[0].x;
          fVar3 = pSVar11->points[0].y;
          fVar4 = pSVar11->points[0].z;
          fVar7 = pSVar11->points[0].w;
        }
        sVar9 = *(short *)((int)pvVar10 + 0xba);
        (moby->pos).x = fVar2;
        (moby->pos).y = fVar3;
        (moby->pos).z = fVar4;
        iVar20 = (int)((longlong)sVar9 << 4);
        (moby->pos).w = fVar7;
        fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
        fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar12 + 0x15) = fVar2;
        *(float *)((int)puVar12 + 0xac) = fVar3;
        *(float *)(puVar12 + 0x16) = fVar4 - fVar7;
        fVar2 = 0.0;
        uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar12 + 0x15));
        if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar12 + 0xac));
        if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        if (0.0 < fVar3) {
          lVar17 = uVar15 - 0x130;
          lVar22 = uVar15 - 0x4c;
          lVar24 = uVar15 - 0x3c;
          lVar25 = 2;
          fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x20) = fVar3;
          *(float *)(puVar12 + 0x1f) = fVar3;
          *(float *)((int)puVar12 + 0xfc) = fVar3;
          *(float *)((int)puVar12 + 0xf4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar4;
          *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar3;
          *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xe4) * fVar3 * fVar3;
            iVar20 = (int)lVar22;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar15 - 0x4c;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar4 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xf4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            iVar14 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
        }
        (moby->rotation).z = fVar2;
      }
    }
    else {
      if (((*(short *)((int)pvVar10 + 0xb8) < 1) || (*(int *)((int)pvVar10 + 0xb4) == -1)) ||
         (iVar20 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0xb4)), iVar20 == 0)
         ) {
        if (((*(short *)((int)pvVar10 + 0xb8) < 0) && (*(int *)((int)pvVar10 + 0xb0) != -1)) &&
           (iVar20 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0xb0)),
           iVar20 != 0)) {
          *(undefined2 *)((int)pvVar10 + 0xba) = 1;
          fVar2 = pSVar11->points[0].x;
          (moby->pos).x = fVar2;
          fVar3 = pSVar11->points[0].y;
          (moby->pos).y = fVar3;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          *(undefined2 *)((int)pvVar10 + 0xb8) = 1;
          iVar20 = (int)((longlong)*(short *)((int)pvVar10 + 0xba) << 4);
          fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
          fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
          fVar4 = ABS(fVar2);
          fVar7 = ABS(fVar3);
          *(float *)(puVar12 + 0x12) = fVar2;
          *(float *)((int)puVar12 + 0x94) = fVar3;
          *(float *)(puVar12 + 0x13) = fVar4 - fVar7;
          fVar2 = 0.0;
          uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar12 + 0x12));
          if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
            fVar3 = fVar7;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
          if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
            fVar13 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar17 = uVar15 - 0x130;
            lVar24 = uVar15 - 0x7c;
            lVar22 = uVar15 - 0x8c;
            lVar25 = 2;
            fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x18) = fVar3;
            *(float *)(puVar12 + 0x17) = fVar3;
            *(float *)((int)puVar12 + 0xbc) = fVar3;
            *(float *)((int)puVar12 + 0xb4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4;
            *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
            *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar24 = uVar15 - 0x8c;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar24;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar17 = 2;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar20 + 0xb4) + *(float *)(iVar14 + 4) +
                      *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
          }
          (moby->rotation).z = fVar2;
        }
      }
      else {
        iVar20 = pSVar11->cnt;
        *(undefined2 *)((int)pvVar10 + 0xb8) = 0xffff;
        pVVar19 = pSVar11->points + iVar20 + -1;
        *(short *)((int)pvVar10 + 0xba) = (short)iVar20 + -2;
        fVar2 = pVVar19->x;
        (moby->pos).x = fVar2;
        fVar3 = pVVar19->y;
        (moby->pos).y = fVar3;
        (moby->pos).z = pVVar19->z;
        (moby->pos).w = pVVar19->w;
        iVar20 = (int)((longlong)*(short *)((int)pvVar10 + 0xba) << 4);
        fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
        fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)(puVar12 + 0x14) = fVar3;
        *(float *)((int)puVar12 + 0xa4) = fVar4 - fVar7;
        fVar2 = 0.0;
        uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar12 + 0x9c));
        if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)(puVar12 + 0x14));
        if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        if (0.0 < fVar3) {
          lVar17 = uVar15 - 0x130;
          lVar24 = uVar15 - 0x5c;
          lVar22 = uVar15 - 0x6c;
          lVar25 = 2;
          fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x1c) = fVar3;
          *(float *)(puVar12 + 0x1b) = fVar3;
          *(float *)((int)puVar12 + 0xdc) = fVar3;
          *(float *)((int)puVar12 + 0xd4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar4;
          *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar3;
          *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar3 * fVar3;
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar15 - 0x6c;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar4 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar14 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
        }
        (moby->rotation).z = fVar2;
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        moby->state = '\x03';
      }
    }
    goto LAB_003b31c4;
  }
  if (bVar1 < 3) {
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
    goto LAB_003b31c4;
  }
  if (3 < bVar1) goto LAB_003b31c4;
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar20 = *(int *)((int)pvVar10 + 0xc4);
    if (iVar20 != -1) {
      iVar20 = sound::IsMobyPlayingSound(moby,iVar20);
      if (iVar20 != 0) goto LAB_003b3120;
      iVar20 = *(int *)((int)pvVar10 + 0xc4);
    }
    if (iVar20 == -1) {
      iVar20 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0xc4) = iVar20;
    }
  }
LAB_003b3120:
  iVar20 = M554_003b22e0((longlong)(int)moby);
  if (iVar20 != 0) {
    iVar20 = *(int *)((int)pvVar10 + 0xc4);
    if (((iVar20 != -1) && (sound::g_SoundChannels[iVar20].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar20].state != '\0')) {
      sound::sound_Kill(iVar20);
    }
    *(undefined4 *)((int)pvVar10 + 0xc4) = 0xffffffff;
    moby->state = '\x02';
    sVar21 = 0;
    sVar9 = *(short *)((int)pvVar10 + 0xb8);
    *(undefined4 *)((int)pvVar10 + 0xbc) = 0x40490fdb;
    *(short *)((int)pvVar10 + 0xb8) = -sVar9;
    if (-1 < sVar9) {
      sVar21 = (short)pSVar11->cnt + -1;
    }
    *(short *)((int)pvVar10 + 0xba) = sVar21;
  }
LAB_003b31c4:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar12 + 0xe) = *(float *)(puVar12 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar12 + 0x74) = *(float *)((int)puVar12 + 0x74) + fVar2;
  *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) + fVar3;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar12 + 0xe),uVar15 - 0xc0,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 003b322c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M554_003b322c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M554_003b322c(void)

{
  DAT_0084587c = 0x10000;
  return;
}



//==== 003b3248  ns=mobyupdate_unsorted  size=0x11c
// sig: undefined UpdateMoby_554(MobyInstance * moby)
// callers(0): 
// callees(2): 0031d8e0 FUN_0031d8e0; 004fff60 fastfunc::FastDecTimerS32

/* Moby 554 */

void mobyupdate_unsorted::UpdateMoby_554(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  piVar1 = (int *)moby->pVar;
  iVar7 = fastfunc::FastDecTimerS32(ZEXT48(piVar1) + 4);
  if (iVar7 != 0) {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if (14.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(4,0x3b3240);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = *piVar1;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,ZEXT48(piVar1))
      ;
      *(undefined4 *)((uint)(piVar1 + 1) & 0xfffffffc) = uVar2;
      if (Splines[iVar7] != (Spline *)0x0) {
        uVar5._0_4_ = (moby->pos).x;
        uVar5._4_4_ = (moby->pos).y;
        uVar6._0_4_ = (moby->pos).z;
        uVar6._4_4_ = (moby->pos).w;
        FUN_0031d8e0(Splines[iVar7],4,uVar5,uVar6);
      }
    }
  }
  return;
}



//==== 003b3364  ns=mobyupdate_helpers  size=0x14
// sig: undefined M556_003b3364(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M556_003b3364(void)

{
  DAT_008458ec = 0x10000;
  return;
}



//==== 003b3378  ns=mobyupdate_helpers  size=0x38
// sig: undefined M556_003b3378(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M556_003b3378(int param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x2c0) + (int)(param_2 << 4);
  *param_3 = *(undefined4 *)(iVar1 + 0x10);
  param_3[1] = *(undefined4 *)(iVar1 + 0x14);
  param_3[2] = *(undefined4 *)(iVar1 + 0x18);
  param_3[3] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}



//==== 003b33c8  ns=mobyupdate_helpers  size=0x5c4
// sig: undefined M556_003b33c8(void)
// callers(1): 003b4740 mobyupdate_unsorted::UpdateMoby_556
// callees(5): 000fc620 mobyutil::MB_randInt; 0010cd94 mobyutil::MB_PathStepIndex; 001367d0 path::PathFindClosestPnt; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M556_003b33c8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  uint uVar8;
  Spline *spline;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  short sVar16;
  int iVar15;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x110;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x24] = in_LR;
  puVar10[0x1f] = in_f29;
  puVar10[0x20] = in_f30;
  puVar10[0x21] = in_f31;
  puVar10[0x1c] = unaff_r29;
  puVar10[0x1e] = unaff_r31;
  puVar10[0x1d] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x10);
  uVar14 = (uint)*(ushort *)(iVar6 + 0x2f4);
  fVar3 = *(float *)(param_1 + 0x14);
  iVar15 = *(int *)(iVar6 + 0x2c0) + (int)((longlong)(short)*(ushort *)(iVar6 + 0x2f4) << 4);
  puVar10[0x1a] = unaff_r27;
  fVar2 = *(float *)(iVar15 + 0x10) - fVar2;
  fVar3 = *(float *)(iVar15 + 0x14) - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  *(float *)((int)puVar10 + 0x84) = fVar4 - fVar5;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar27 = 0.7853981852531433;
  puVar10[0x1b] = unaff_r28;
  dVar23 = dVar25;
  iVar15 = iVar6;
  if (0.0 < fVar2) {
    lVar17 = uVar13 - 0x100;
    lVar18 = uVar13 - 0x68;
    lVar21 = uVar13 - 0x58;
    lVar22 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar10 + 0x15) = fVar2;
    *(float *)((int)puVar10 + 0xac) = fVar2;
    *(float *)(puVar10 + 0x16) = fVar2;
    *(float *)((int)puVar10 + 0xb4) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
    *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar2;
    *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar2 * fVar2;
      iVar12 = (int)lVar18;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar21 = uVar13 - 0x68;
    pfVar19 = (float *)&DAT_007358e0;
    lVar17 = lVar1;
    lVar18 = lVar21;
    do {
      fVar2 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar18 = 2;
    lVar17 = lVar1;
    do {
      iVar12 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar11 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
  }
  while( true ) {
    iVar15 = *(int *)(iVar15 + 0x2c0) + (int)((longlong)(short)uVar14 << 4);
    fVar2 = *(float *)(iVar15 + 0x14) - *(float *)(iVar6 + 0x264);
    fVar3 = *(float *)(iVar15 + 0x10) - *(float *)(iVar6 + 0x260);
    dVar26 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    dVar23 = (double)fastfunc::FastSubRots((float)dVar23,*(float *)(param_1 + 0x48));
    if (((dVar23 < 1.5707963705062866) || (4.0 < dVar26)) && (2.0 < dVar26)) break;
    pSVar7 = *(Spline **)(iVar6 + 0x2c0);
    iVar15 = *(short *)(iVar6 + 0x2f4) + 1;
    uVar14 = iVar15 - (iVar15 / pSVar7->cnt) * pSVar7->cnt;
    sVar16 = (short)uVar14;
    *(short *)(iVar6 + 0x2f4) = sVar16;
    spline = Splines[*(int *)(iVar6 + 0x290)];
    if (pSVar7 == spline) {
      uVar8 = *(uint *)((int)&pSVar7->points[0].w + (int)((longlong)sVar16 << 4));
      uVar9 = (int)uVar8 >> 0x1f;
      if (0x41200000 < (int)((uVar9 >> 1 ^ uVar8) - uVar9)) {
        iVar15 = mobyutil::MB_randInt(100);
        uVar14 = (uint)*(ushort *)(iVar6 + 0x2f4);
        if (0x1e < iVar15) {
          iVar15 = fastfunc::FastDoubleToInt
                             ((double)*(float *)(*(int *)(iVar6 + 0x2c0) +
                                                 (int)((longlong)(short)*(ushort *)(iVar6 + 0x2f4)
                                                      << 4) + 0x1c));
          uVar14 = 0;
          iVar15 = *(int *)(iVar6 + (iVar15 + -0xb) * 4 + 0x294);
          *(undefined2 *)(iVar6 + 0x2f4) = 0;
          *(Spline **)(iVar6 + 0x2c0) = Splines[iVar15];
        }
      }
    }
    else if ((int)sVar16 == pSVar7->cnt + -1) {
      *(Spline **)(iVar6 + 0x2c0) = spline;
      iVar15 = path::PathFindClosestPnt((float)dVar25,(Vec4 *)(iVar6 + 0x260),spline);
      *(short *)(iVar6 + 0x2f4) = (short)iVar15;
      uVar14 = mobyutil::MB_PathStepIndex(*(int **)(iVar6 + 0x2c0),(int)(short)iVar15,5,1);
      *(short *)(iVar6 + 0x2f4) = (short)uVar14;
    }
    iVar15 = *(int *)(param_1 + 0x78);
    iVar12 = *(int *)(iVar15 + 0x2c0) + (int)((longlong)(short)uVar14 << 4);
    fVar2 = *(float *)(iVar12 + 0x10) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(iVar12 + 0x14) - *(float *)(param_1 + 0x14);
    dVar23 = ABS((double)fVar2);
    dVar24 = ABS((double)fVar3);
    *(float *)(puVar10 + 0xe) = fVar2;
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)(puVar10 + 0xf) = (float)(dVar23 - dVar24);
    uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
    if ((double)*(float *)(puVar10 + 0xf) - dVar25 < 0.0) {
      dVar26 = dVar24;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar24 = ABS((double)*(float *)((int)puVar10 + 0x74));
    if ((double)*(float *)(puVar10 + 0xf) - dVar25 < 0.0) {
      dVar24 = dVar23;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar23 = dVar25;
    if (dVar25 < dVar26) {
      lVar17 = uVar13 - 0x100;
      lVar21 = uVar13 - 0x78;
      lVar18 = uVar13 - 0x88;
      lVar22 = 2;
      fVar5 = (float)(dVar24 - dVar26) / (float)(dVar24 + dVar26);
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x11) = fVar5;
      *(float *)((int)puVar10 + 0x8c) = fVar5;
      *(float *)(puVar10 + 0x12) = fVar5;
      *(float *)((int)puVar10 + 0x94) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar4;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar5;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar5 * fVar5;
        iVar12 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x88;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar1;
      lVar18 = lVar21;
      do {
        fVar5 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar17 = lVar1;
      do {
        iVar12 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x88)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar23 = (double)((float)(dVar23 + dVar27) * fVar2 + fVar3);
    }
  }
  return;
}



//==== 003b39b0  ns=mobyupdate_helpers  size=0x4c0
// sig: undefined M556_003b39b0(void)
// callers(1): 003b4740 mobyupdate_unsorted::UpdateMoby_556
// callees(5): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 004fff60 fastfunc::FastDecTimerS32; 00500af8 fastfunc::FastMtx4Identity; 005010c0 fastfunc::FastNormalizeRMtx4

MobyInstance * mobyupdate_helpers::M556_003b39b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  MobyInstance *group;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_120;
  float local_11c;
  float local_118;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  MobyInstance *local_a0;
  MobyInstance *local_9c;
  longlong local_98;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  local_98 = (longlong)(int)(animationSpeed * 180.5);
  group = g_RaceTime;
  if ((int)(animationSpeed * 180.5) <= (int)g_RaceTime) {
    group = (MobyInstance *)fastfunc::FastDecTimerS32(uVar5 + 0x2dc);
    if ((group != (MobyInstance *)0x0) && (hero::g_heroBoardMoby != 0)) {
      iVar2 = *(int *)(hero::g_heroBoardMoby + 0x78);
      group = *(MobyInstance **)(iVar2 + 0x44);
      if (group != (MobyInstance *)0xffffffff) {
        mobyutil::MB_GetFirstMobyInGroup(&local_a0,(int)group,'\0','\0');
        group = local_a0;
        if (local_a0 != (MobyInstance *)0x0) {
          dVar7 = 0.800000011920929;
          dVar8 = 8.0;
          dVar9 = 0.5;
          dVar10 = 2.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x3b398c);
          auVar22 = loadVectorLeftIndexed(0x18,0x3b398c);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_a0->oClass == HOVERBOARD_RING) {
              dVar12 = (double)((local_a0->pos).y - *(float *)(uVar1 + 0x264));
              dVar11 = (double)((local_a0->pos).x - *(float *)(uVar1 + 0x260));
              dVar13 = (double)((local_a0->pos).z -
                               (float)((double)*(float *)(uVar1 + 0x268) + dVar7));
              dVar6 = (double)(local_a0->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar8) {
                fastfunc::FastMtx4Identity(&local_120);
                fastfunc::FastNormalizeRMtx4(&local_120,&local_a0->transform);
                if (((ABS((double)(float)((double)local_f0 * dVar6 +
                                         (double)(float)((double)local_100 * dVar13 +
                                                        (double)(float)((double)local_120 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_110 * dVar12))))) < dVar9) &&
                    (ABS((double)(float)((double)local_ec * dVar6 +
                                        (double)(float)((double)local_fc * dVar13 +
                                                       (double)(float)((double)local_11c * dVar11 +
                                                                      (double)(float)((double)
                                                  local_10c * dVar12))))) < dVar10)) &&
                   (ABS((double)(float)((double)local_e8 * dVar6 +
                                       (double)(float)((double)local_f8 * dVar13 +
                                                      (double)(float)((double)local_118 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_108 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar19 = loadVectorLeftIndexed(0x2f6,uVar5);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar14);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorRightIndexed(0x306,uVar5);
                  auVar18 = vectorShiftRightWord
                                      (auVar19 | auVar17,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar16._0_4_ = auVar18._0_4_ + auVar22._0_4_;
                  auVar16._8_8_ = auVar22._8_8_;
                  auVar16._4_4_ = auVar18._4_4_ + auVar22._4_4_;
                  auVar17._0_8_ = auVar16._0_8_;
                  auVar17._12_4_ = auVar22._12_4_;
                  auVar17._8_4_ = auVar18._8_4_ + auVar22._8_4_;
                  auVar14._0_12_ = auVar17._0_12_;
                  auVar14._12_4_ = auVar18._12_4_ + auVar17._12_4_;
                  auVar22 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar14,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x2f6,uVar5);
                  *(undefined2 *)(uVar1 + 0x2f6) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x2dc,uVar5);
                  *(undefined4 *)(uVar1 + 0x2dc & 0xfffffffc) = uVar4;
                }
              }
            }
            mobyutil::MB_GetNextMobyInGroup(&local_a0,local_a0,'\0','\0');
            group = local_a0;
          } while (local_a0 != (MobyInstance *)0x0);
        }
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 != -1) {
        group = (MobyInstance *)mobyutil::MB_GetFirstMobyInGroup(&local_9c,iVar2,'\0','\0');
        if (local_9c != (MobyInstance *)0x0) {
          dVar7 = 8.0;
          dVar8 = 2.799999952316284;
          dVar9 = 1.399999976158142;
          dVar10 = 0.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x3b398c);
          auVar22 = loadVectorLeftIndexed(0x18,0x3b398c);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_9c->oClass == HOVERBOARD_BOOST_PAD) {
              dVar12 = (double)((local_9c->pos).y - *(float *)(uVar1 + 0x264));
              dVar11 = (double)((local_9c->pos).x - *(float *)(uVar1 + 0x260));
              dVar13 = (double)((local_9c->pos).z - *(float *)(uVar1 + 0x268));
              dVar6 = (double)(local_9c->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar7) {
                fastfunc::FastMtx4Identity(&local_e0);
                fastfunc::FastNormalizeRMtx4(&local_e0,&local_9c->transform);
                if (((ABS((double)(float)((double)local_b0 * dVar6 +
                                         (double)(float)((double)local_c0 * dVar13 +
                                                        (double)(float)((double)local_e0 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_d0 * dVar12))))) < dVar8) &&
                    (ABS((double)(float)((double)local_ac * dVar6 +
                                        (double)(float)((double)local_bc * dVar13 +
                                                       (double)(float)((double)local_dc * dVar11 +
                                                                      (double)(float)((double)
                                                  local_cc * dVar12))))) < dVar9)) &&
                   (ABS((double)(float)((double)local_a8 * dVar6 +
                                       (double)(float)((double)local_b8 * dVar13 +
                                                      (double)(float)((double)local_d8 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_c8 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorLeftIndexed(0x2f6,uVar5);
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar19 = loadVectorRightIndexed(0x306,uVar5);
                  auVar17 = vectorShiftRightWord
                                      (auVar17 | auVar19,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar15._0_4_ = auVar17._0_4_ + auVar22._0_4_;
                  auVar15._8_8_ = auVar22._8_8_;
                  auVar15._4_4_ = auVar17._4_4_ + auVar22._4_4_;
                  auVar18._0_8_ = auVar15._0_8_;
                  auVar18._12_4_ = auVar22._12_4_;
                  auVar18._8_4_ = auVar17._8_4_ + auVar22._8_4_;
                  auVar19._0_12_ = auVar18._0_12_;
                  auVar19._12_4_ = auVar17._12_4_ + auVar18._12_4_;
                  auVar22 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar19,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x2f6,uVar5);
                  *(undefined2 *)(uVar1 + 0x2f6) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x2dc,uVar5);
                  *(undefined4 *)(uVar1 + 0x2dc & 0xfffffffc) = uVar4;
                }
              }
            }
            group = (MobyInstance *)mobyutil::MB_GetNextMobyInGroup(&local_9c,local_9c,'\0','\0');
          } while (local_9c != (MobyInstance *)0x0);
        }
      }
    }
  }
  return group;
}



//==== 003b3e70  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M556_003b3e70(void)
// callers(0): 
// callees(1): 0010cd94 mobyutil::MB_PathStepIndex

void mobyupdate_helpers::M556_003b3e70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *path;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar2 + 0x2c8) < 1) {
    path = *(int **)(iVar2 + 0x2c0);
    lVar4 = (longlong)*(short *)(iVar2 + 0x2f4);
    if (*(int *)((int)path + (int)(lVar4 << 4) + 0x1c) == 0x3f800000) {
      do {
        iVar3 = mobyutil::MB_PathStepIndex(path,(int)lVar4,1,1);
        lVar4 = (longlong)iVar3;
        path = *(int **)(iVar2 + 0x2c0);
      } while (*(int *)((int)path + (int)(lVar4 << 4) + 0x1c) != 0x40000000);
      *(short *)(iVar2 + 0x2f0) = (short)iVar3;
      iVar3 = (int)((longlong)(short)iVar3 << 4);
      *(undefined4 *)(iVar2 + 0x270) = *(undefined4 *)((int)path + iVar3 + 0x10);
      *(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)((int)path + iVar3 + 0x14);
      *(undefined4 *)(iVar2 + 0x278) = *(undefined4 *)((int)path + iVar3 + 0x18);
      uVar1 = *(undefined4 *)((int)path + iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x2e4) = 1;
      *(undefined4 *)(iVar2 + 0x27c) = uVar1;
    }
  }
  return;
}



//==== 003b3f64  ns=mobyupdate_helpers  size=0x24
// sig: undefined M556_003b3f64(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M556_003b3f64(void)

{
  mobyutil::MB_SetAnimation();
  return;
}



//==== 003b3fd0  ns=mobyupdate_helpers  size=0x698
// sig: undefined M556_003b3fd0(void)
// callers(1): 003b4740 mobyupdate_unsorted::UpdateMoby_556
// callees(7): 000efe40 mobyfunc::BlendAnimFrame; 000fcb40 mobyutil::MB_SolveQuad; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0010a050 mobyutil::AccelDeltAng; 0010cd94 mobyutil::MB_PathStepIndex; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M556_003b3fd0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  longlong lVar10;
  longlong lVar11;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1b] = in_f27;
  puVar7[0x1c] = in_f28;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  puVar7[0x19] = unaff_r30;
  puVar7[0x1a] = unaff_r31;
  pvVar5 = param_1->pVar;
  dVar24 = 0.0;
  iVar12 = *(int *)((int)pvVar5 + 0x2e4);
  puVar7[0x18] = unaff_r29;
  dVar19 = dVar24;
  if (iVar12 == 0) {
    iVar12 = mobyutil::MB_PathStepIndex
                       (*(int **)((int)pvVar5 + 0x2c0),(int)*(short *)((int)pvVar5 + 0x2f4),1,1);
    iVar12 = *(int *)((int)pvVar5 + 0x2c0) + (int)((longlong)iVar12 << 4);
    iVar8 = *(int *)((int)pvVar5 + 0x2c0) + (int)((longlong)*(short *)((int)pvVar5 + 0x2f4) << 4);
    fVar4 = *(float *)(iVar8 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar1 = *(float *)(iVar8 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x18) - *(float *)(iVar8 + 0x18);
    fVar4 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
    *(float *)((int)puVar7 + 0x7c) = fVar2;
    dVar22 = ABS((double)fVar2);
    dVar21 = ABS((double)fVar4);
    *(float *)(puVar7 + 0xf) = fVar4;
    *(float *)(puVar7 + 0x10) = (float)(dVar21 - dVar22);
    uVar14 = (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar7 + 0xf));
    if ((double)*(float *)(puVar7 + 0x10) - dVar19 < 0.0) {
      dVar23 = dVar22;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x7c));
    if ((double)*(float *)(puVar7 + 0x10) - dVar19 < 0.0) {
      dVar22 = dVar21;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (dVar19 < dVar23) {
      lVar10 = uVar9 - 0xf0;
      lVar15 = uVar9 - 0x7c;
      lVar17 = uVar9 - 0x6c;
      lVar18 = 2;
      fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x12) = fVar2;
      *(float *)(puVar7 + 0x11) = fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar2;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3;
      *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar2;
      *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar10 + 0x84) = *(float *)((int)lVar10 + 0x74) * fVar2 * fVar2;
        iVar12 = (int)lVar15;
        lVar10 = lVar10 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x7c;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar10 = lVar11;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar10 + 0x84) = *(float *)((int)lVar10 + 0x84) * fVar2;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar10 = 2;
      do {
        iVar12 = (int)lVar11;
        iVar8 = (int)lVar17;
        lVar11 = lVar11 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar12 + 0x84)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  dVar23 = 0.30000001192092896;
  mobyutil::AccelDeltAng
            (dVar19,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),
             (double)(mobyutil::g_FrameTime * 3.1415927),&(param_1->rotation).y,&DAT_003b3f88,
             (int)pvVar5 + 0x2f8);
  fVar4 = animationSpeed;
  iVar12 = *(int *)((int)pvVar5 + 0x2e4);
  if (iVar12 == 0) {
    param_1->unk58 = 1.0;
    if (((param_1->field43_0x70 & 2U) != 0) && (param_1->animationId != '\0')) {
      puVar7[0x15] = (longlong)(int)(animationSpeed * 8.5);
      mobyutil::MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar7 + 0xac));
    }
  }
  else {
    if ((param_1->animationId != '\x05') &&
       (puVar7[0x15] = (longlong)(int)(animationSpeed * 3.5), iVar12 < *(int *)((int)puVar7 + 0xac))
       ) {
      puVar7[0x15] = (longlong)(int)(fVar4 * 5.5);
      mobyutil::MB_SetAnimation(param_1,5,4,*(undefined4 *)((int)puVar7 + 0xac));
      *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
    }
    dVar19 = (double)(DAT_0071f418 * 21.0 * -0.5);
    iVar12 = mobyutil::MB_SolveQuad
                       (dVar19,(double)(float)((double)*(float *)((int)pvVar5 + 0x2c8) - dVar19),
                        (double)(*(float *)((int)pvVar5 + 0x268) - *(float *)((int)pvVar5 + 0x278)))
    ;
    dVar21 = 30.0;
    dVar19 = dVar21;
    if ((0 < iVar12) &&
       (uVar6 = (int)*(uint *)(puVar7 + 0xe) >> 0x1f,
       0 < (int)((uVar6 >> 1 ^ *(uint *)(puVar7 + 0xe)) - uVar6))) {
      iVar12 = fastfunc::FastDoubleToInt((double)*(float *)(puVar7 + 0xe));
      puVar7[0x15] = (longlong)iVar12;
      dVar19 = (double)(longlong)puVar7[0x15];
    }
    fVar4 = animationSpeed;
    dVar22 = 7.5;
    iVar12 = *(int *)((int)pvVar5 + 0x2e4);
    puVar7[0x15] = (longlong)(int)(animationSpeed * 7.5);
    if ((((*(int *)((int)puVar7 + 0xac) < iVar12) &&
         (puVar7[0x15] = (longlong)(int)(fVar4 * 11.5), iVar12 < *(int *)((int)puVar7 + 0xac))) &&
        (param_1->animationId == '\x05')) && ((double)(longlong)(fVar4 * 27.5) < dVar19)) {
      sVar13 = mobyutil::MB_randRange(0,3);
      dVar20 = (double)animationSpeed;
      *(short *)((int)pvVar5 + 0x2fe) = sVar13 + 1;
      puVar7[0x15] = (longlong)(int)(dVar20 * dVar22);
      mobyutil::MB_SetAnimation(param_1,sVar13 + 1,3,*(undefined4 *)((int)puVar7 + 0xac));
    }
    if (((*(short *)((int)pvVar5 + 0x2fe) != -1) && (param_1->updateId == param_1->animationId)) &&
       ((dVar20 = (double)mobyfunc::BlendAnimFrame(param_1), 7.0 < dVar20 &&
        (dVar20 < 20.0 && dVar19 != dVar24)))) {
      dVar20 = (double)(float)(dVar21 / dVar19);
      if (1.7000000476837158 - (double)(float)(dVar21 / dVar19) < 0.0) {
        dVar20 = 1.7000000476837158;
      }
      if (dVar20 - dVar23 < 0.0) {
        dVar20 = dVar23;
      }
      param_1->unk58 = (float)dVar20;
    }
    if (*(short *)((int)pvVar5 + 0x2fe) != -1) {
      dVar23 = (double)animationSpeed * 5.5;
      if ((double)(longlong)dVar23 <= dVar19) {
        if ((param_1->field43_0x70 & 2U) != 0) {
          puVar7[0x15] = (longlong)(int)((double)animationSpeed * dVar22);
          mobyutil::MB_SetAnimation(param_1,5,0x1c,*(undefined4 *)((int)puVar7 + 0xac));
          *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
        }
      }
      else {
        puVar7[0x15] = (longlong)(int)dVar23;
        mobyutil::MB_SetAnimation(param_1,5,0x33,*(undefined4 *)((int)puVar7 + 0xac));
        *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
      }
    }
    if ((param_1->updateId == param_1->animationId) &&
       (param_1->animationId == '\x05' && dVar19 != dVar24)) {
      dVar24 = (double)mobyfunc::BlendAnimFrame(param_1);
      param_1->unk58 = (float)((double)(float)(50.0 - dVar24) / dVar19);
    }
  }
  return;
}



//==== 003b4740  ns=mobyupdate_unsorted  size=0x15a0
// sig: undefined UpdateMoby_556(MobyInstance * moby)
// callers(0): 
// callees(23): 0005e598 collproc::CollMobySphere; 000f1114 mobyfunc::GetBonePosition; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010a050 mobyutil::AccelDeltAng; 0010af88 mobyutil::MB_isCrate; 0010cd94 mobyutil::MB_PathStepIndex; 0010e030 mobyutil::MB_genericExplosion; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0011aa78 mobyutil::MB_SpawnDebris; 00121740 partupd::SpawnPart_4; 001268f8 partupd::SpawnPart_21; 003b33c8 mobyupdate_helpers::M556_003b33c8; 003b39b0 mobyupdate_helpers::M556_003b39b0; 003b3fd0 mobyupdate_helpers::M556_003b3fd0; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* Moby 556 */

void mobyupdate_unsorted::UpdateMoby_556(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint uVar10;
  u16 *puVar11;
  void *pvVar12;
  Spline *pSVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  bool bVar25;
  longlong lVar26;
  float *pfVar27;
  short sVar28;
  int *path;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong unaff_r24;
  undefined4 *puVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar32;
  ulonglong unaff_r29;
  int iVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar40;
  ulonglong in_f24;
  double dVar41;
  ulonglong in_f25;
  double dVar42;
  ulonglong in_f26;
  double dVar43;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar44;
  double in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  double dVar47;
  ulonglong in_f31;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x260;
  puVar16 = (ulonglong *)lVar21;
  *puVar16 = uVar19;
  puVar16[0x4e] = in_LR;
  puVar16[0x40] = in_f20;
  puVar16[0x41] = in_f21;
  puVar16[0x42] = in_f22;
  puVar16[0x43] = in_f23;
  puVar16[0x44] = in_f24;
  puVar16[0x45] = in_f25;
  puVar16[0x46] = in_f26;
  puVar16[0x47] = in_f27;
  puVar16[0x48] = in_f28;
  puVar16[0x49] = (ulonglong)in_f29;
  puVar16[0x4a] = in_f30;
  puVar16[0x4b] = in_f31;
  puVar16[0x3f] = unaff_r31;
  puVar16[0x3c] = unaff_r28;
  puVar16[0x3b] = unaff_r27;
  pvVar9 = moby->pVar;
  uVar32 = ZEXT48(pvVar9);
  uVar48 = 0x4004000000000000;
  puVar16[0x3e] = unaff_r30;
  puVar16[0x3d] = unaff_r29;
  puVar16[0x3a] = unaff_r26;
  puVar16[0x39] = unaff_r25;
  puVar16[0x38] = unaff_r24;
  mobyutil::MB_SetScaleCheat(0x4004000000000000,uVar32 + 0x1e0);
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = '\x18';
      pSVar13 = Splines[*(int *)((int)pvVar9 + 0x2b0)];
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      *(Spline **)((int)pvVar9 + 0x2c0) = pSVar13;
      iVar22 = *(int *)((int)moby->pVar + 0x2c0);
      fVar2 = *(f32 *)(iVar22 + 0x10);
      fVar3 = *(f32 *)(iVar22 + 0x18);
      fVar4 = *(f32 *)(iVar22 + 0x1c);
      (moby->pos).y = *(f32 *)(iVar22 + 0x14);
      (moby->pos).z = fVar3;
      (moby->pos).w = fVar4;
      (moby->pos).x = fVar2;
      *(f32 *)((int)pvVar9 + 0x260) = fVar2;
      *(f32 *)((int)pvVar9 + 0x264) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x268) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x26c) = (moby->pos).w;
      fVar7 = 0.0;
      (moby->rotation).x = 0.0;
      (moby->rotation).y = 0.0;
      fVar60 = pSVar13->points[1].x - pSVar13->points[0].x;
      fVar5 = pSVar13->points[1].y - pSVar13->points[0].y;
      fVar6 = ABS(fVar60);
      fVar8 = ABS(fVar5);
      *(float *)(puVar16 + 0x27) = fVar60;
      *(float *)((int)puVar16 + 0x13c) = fVar5;
      *(float *)(puVar16 + 0x28) = fVar6 - fVar8;
      uVar29 = (ulonglong)(*(uint *)(puVar16 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x13c) >> 0x1d) & 4;
      fVar60 = ABS(*(float *)(puVar16 + 0x27));
      if (*(float *)(puVar16 + 0x28) - 0.0 < 0.0) {
        fVar60 = fVar8;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar16 + 0x13c));
      if (*(float *)(puVar16 + 0x28) - 0.0 < 0.0) {
        fVar17 = fVar6;
      }
      if (0.0 < fVar60) {
        lVar20 = uVar19 - 0x250;
        lVar30 = uVar19 - 0xcc;
        lVar26 = uVar19 - 0xdc;
        lVar34 = 2;
        fVar60 = (fVar17 - fVar60) / (fVar17 + fVar60);
        fVar6 = fVar60 * fVar60;
        *(float *)(puVar16 + 0x32) = fVar60;
        *(float *)(puVar16 + 0x31) = fVar60;
        *(float *)((int)puVar16 + 0x18c) = fVar60;
        *(float *)((int)puVar16 + 0x184) = fVar60;
        fVar60 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x31) = *(float *)(puVar16 + 0x31) * fVar6;
        *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar60;
        *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar60 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x184) = *(float *)((int)lVar20 + 0x174) * fVar60 * fVar60;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar60 * fVar60;
          lVar30 = lVar30 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar30 = uVar19 - 0xdc;
        pfVar27 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar26 = lVar30;
        do {
          fVar60 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar20 + 0x184) = *(float *)((int)lVar20 + 0x184) * fVar60;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar33 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar22 + 0x184) + *(float *)(iVar33 + 4) +
                  *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar7 = (fVar7 + 0.7853982) * fVar8 + fVar5;
      }
      (moby->rotation).z = fVar7;
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      *(undefined1 *)((int)pvVar9 + 0x2b) = 1;
      auVar52 = loadVectorLeftIndexed(0x2cc,uVar32);
      auVar53 = loadVectorRightIndexed(0x2dc,uVar32);
      auVar56 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
      auVar51 = ZEXT416(0xffffffff);
      auVar54 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = loadVectorLeftIndexed(0x10,0x3b4668);
      auVar52 = vectorConvertFromSignedFixedPointWord(auVar52 | auVar53,0);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar53 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar56 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = loadVectorLeftIndexed(0xc,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = vectorMultiplyAddFloatingPoint(auVar56,auVar52,auVar53);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b4,uVar32
                         );
      *(undefined4 *)((int)pvVar9 + 0x2b4U & 0xfffffffc) = uVar15;
      auVar51 = loadVectorLeftIndexed(0x14,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b8,uVar32
                         );
      *(undefined4 *)((int)pvVar9 + 0x2b8U & 0xfffffffc) = uVar15;
      if (UnlockableItems.hologuise == '\0') {
        auVar51 = ZEXT416(5);
        auVar53 = ZEXT416(0xffffffff);
        auVar59 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar53 = loadVectorLeftIndexed(0x54c,0xa10000);
        auVar53 = vectorSubtractUnsignedWordModulo
                            (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60);
        auVar51 = ZEXT416(0);
        auVar55 = vectorConvertFromSignedFixedPointWord(auVar53,0);
        auVar53 = loadVectorLeftIndexed(0x18,0x3b4668);
        auVar54 = loadVectorLeftIndexed(0x1c,0x3b4668);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar57 = loadVectorLeftIndexed(0x20,0x3b4668);
        auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar58 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        auVar51 = vectorCompareGreaterThanFloatingPoint
                            (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,auVar55);
        auVar51 = vectorLogicalAndWithComplement(auVar55,auVar51);
        auVar57 = vectorShiftLeftIntegerWord(auVar59,auVar59);
        auVar53 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar51,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60);
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = vectorCompareGreaterThanFloatingPoint(auVar58,auVar53);
        auVar53 = vectorConditionalSelect(auVar53,auVar58,auVar51);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar52,auVar53,auVar57);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar56,auVar53,auVar54);
        auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b4,
                            uVar32);
        *(undefined4 *)((int)pvVar9 + 0x2b4U & 0xfffffffc) = uVar15;
        uVar15 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x2b8,
                            uVar32);
        *(undefined4 *)((int)pvVar9 + 0x2b8U & 0xfffffffc) = uVar15;
      }
      dVar36 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar9 + 0x2e8) = (float)dVar36;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      moby->state = '\x01';
    }
    else if (hero::g_heroStateType == 0x16) {
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      moby->updateDistance = -1;
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      moby->collision = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      *(undefined2 *)((int)pvVar9 + 0x2f4) = 0;
      auVar51 = loadVectorLeftIndexed(0x24,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      uVar10 = *(uint *)((int)pvVar9 + 0x2cc);
      auVar51 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
      auVar51 = vectorSplatHalfWord(auVar51,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar51,0x2f6,uVar32);
      *(undefined2 *)((int)pvVar9 + 0x2f6) = uVar14;
      *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2c4) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2dc) = 0;
      *(undefined4 *)((int)pvVar9 + 700) = 0;
      if (uVar10 + (((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * -2 == 1) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      moby->damage = -1;
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if (hero::g_heroStateType == 0x16) {
      iVar22 = mobyutil::MB_damage(lVar20,0x30000,0);
      if (iVar22 == 0) {
        moby->damage = -1;
        mobyupdate_helpers::M556_003b33c8(lVar20);
        dVar36 = (double)mobyupdate_helpers::M556_003b39b0(lVar20);
        pvVar12 = moby->pVar;
        dVar44 = 0.0;
        if (*(int *)((int)pvVar12 + 0x2c8) < 1) {
          path = *(int **)((int)pvVar12 + 0x2c0);
          lVar26 = (longlong)*(short *)((int)pvVar12 + 0x2f4);
          if (*(int *)((int)path + (int)(lVar26 << 4) + 0x1c) == 0x3f800000) {
            do {
              iVar22 = mobyutil::MB_PathStepIndex(path,(int)lVar26,1,1);
              lVar26 = (longlong)iVar22;
              path = *(int **)((int)pvVar12 + 0x2c0);
            } while (*(int *)((int)path + (int)(lVar26 << 4) + 0x1c) != 0x40000000);
            *(short *)((int)pvVar12 + 0x2f0) = (short)iVar22;
            iVar22 = (int)((longlong)(short)iVar22 << 4);
            *(undefined4 *)((int)pvVar12 + 0x270) = *(undefined4 *)((int)path + iVar22 + 0x10);
            *(undefined4 *)((int)pvVar12 + 0x274) = *(undefined4 *)((int)path + iVar22 + 0x14);
            *(undefined4 *)((int)pvVar12 + 0x278) = *(undefined4 *)((int)path + iVar22 + 0x18);
            fVar60 = *(float *)((int)path + iVar22 + 0x1c);
            dVar36 = (double)fVar60;
            *(undefined4 *)((int)pvVar12 + 0x2e4) = 1;
            *(float *)((int)pvVar12 + 0x27c) = fVar60;
          }
        }
        if (*(int *)((int)pvVar9 + 0x2e4) != 0) {
          iVar22 = *(int *)((int)pvVar9 + 0x2e4) + 1;
          *(int *)((int)pvVar9 + 0x2e4) = iVar22;
          dVar36 = (double)(longlong)(int)(animationSpeed * 17.5);
          puVar16[0x35] = (ulonglong)dVar36;
          if (iVar22 < *(int *)((int)puVar16 + 0x1ac)) {
            sVar28 = *(short *)((int)pvVar9 + 0x2f4);
            sVar24 = *(short *)((int)pvVar9 + 0x2f0);
            lVar26 = (longlong)sVar28;
            dVar36 = dVar44;
            if (sVar28 < sVar24) {
              do {
                iVar23 = mobyutil::MB_PathStepIndex(*(int **)((int)pvVar9 + 0x2c0),(int)lVar26,1,1);
                iVar22 = *(int *)((int)pvVar9 + 0x2c0) + (int)(lVar26 << 4);
                iVar33 = *(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)iVar23 << 4);
                fVar60 = *(float *)(iVar22 + 0x14) - *(float *)(iVar33 + 0x14);
                fVar5 = *(float *)(iVar22 + 0x10) - *(float *)(iVar33 + 0x10);
                sVar24 = *(short *)((int)pvVar9 + 0x2f0);
                dVar36 = (double)(float)(dVar36 + (double)SQRT(fVar5 * fVar5 + fVar60 * fVar60));
                lVar26 = (longlong)iVar23;
              } while (iVar23 < sVar24);
              sVar28 = *(short *)((int)pvVar9 + 0x2f4);
            }
            fVar8 = DAT_0071f418;
            fVar60 = (float)(dVar36 / (double)*(float *)((int)pvVar9 + 700));
            fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)sVar28 << 4) + 0x18);
            fVar7 = *(float *)(*(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)sVar24 << 4) + 0x18);
            fVar6 = DAT_0071f418 * 21.0;
            if (*(int *)((int)pvVar9 + 0x2c8) < 0) {
              *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
            }
            fVar60 = mobyutil::Delt(fVar6 * fVar60 * 0.5 + (fVar7 - fVar5) / fVar60,fVar8 * 110.0,
                                    (float *)((int)pvVar9 + 0x2c8));
            dVar36 = (double)fVar60;
          }
        }
        mobyupdate_helpers::M556_003b3fd0(dVar36,lVar20);
        iVar22 = *(int *)((int)moby->pVar + 0x2c0) +
                 (int)((longlong)*(short *)((int)pvVar9 + 0x2f4) << 4);
        fVar60 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
        fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
        dVar49 = (double)*(float *)(iVar22 + 0x18);
        dVar39 = ABS((double)fVar60);
        dVar38 = ABS((double)fVar5);
        *(float *)(puVar16 + 0x24) = fVar60;
        *(float *)((int)puVar16 + 0x124) = fVar5;
        *(float *)(puVar16 + 0x25) = (float)(dVar39 - dVar38);
        uVar29 = (ulonglong)(*(uint *)(puVar16 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar16 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x124) >> 0x1d) & 4;
        dVar36 = ABS((double)*(float *)(puVar16 + 0x24));
        if ((double)*(float *)(puVar16 + 0x25) - dVar44 < 0.0) {
          dVar36 = dVar38;
        }
        fVar60 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
        dVar38 = ABS((double)*(float *)((int)puVar16 + 0x124));
        if ((double)*(float *)(puVar16 + 0x25) - dVar44 < 0.0) {
          dVar38 = dVar39;
        }
        fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
        dVar39 = dVar44;
        if (dVar44 < dVar36) {
          lVar26 = uVar19 - 0x250;
          lVar34 = uVar19 - 0x10c;
          lVar30 = uVar19 - 0x11c;
          lVar35 = 2;
          fVar7 = (float)(dVar38 - dVar36) / (float)(dVar38 + dVar36);
          fVar6 = fVar7 * fVar7;
          *(float *)(puVar16 + 0x2a) = fVar7;
          *(float *)(puVar16 + 0x29) = fVar7;
          *(float *)((int)puVar16 + 0x14c) = fVar7;
          *(float *)((int)puVar16 + 0x144) = fVar7;
          fVar7 = fVar6 * fVar6;
          *(float *)(puVar16 + 0x29) = *(float *)(puVar16 + 0x29) * fVar6;
          *(float *)((int)puVar16 + 0x14c) = *(float *)((int)puVar16 + 0x14c) * fVar7;
          *(float *)(puVar16 + 0x2a) = *(float *)(puVar16 + 0x2a) * fVar7 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x134) * fVar7 * fVar7;
            iVar22 = (int)lVar30;
            lVar30 = lVar30 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
            lVar34 = lVar34 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar35 = 4;
          lVar34 = uVar19 - 0x11c;
          pfVar27 = (float *)&DAT_007358e0;
          lVar26 = lVar21;
          lVar30 = lVar34;
          do {
            fVar7 = *pfVar27;
            fVar6 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x144) * fVar7;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
            lVar30 = lVar30 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar26 = 2;
          dVar36 = dVar44;
          do {
            iVar22 = (int)lVar21;
            iVar33 = (int)lVar34;
            lVar21 = lVar21 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar22 + 0x144)) +
                              *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8) +
                             *(float *)(iVar33 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar39 = (double)((float)(dVar36 + 0.7853981852531433) * fVar60 + fVar5);
        }
        dVar38 = 0.30000001192092896;
        mobyutil::AccelDeltAng
                  (dVar39,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                   (double)(mobyutil::g_FrameTime * 6.981317),lVar20 + 0x48,&DAT_00720000,
                   uVar32 + 0x2c4);
        dVar36 = (double)*(float *)((int)pvVar9 + 0x268);
        if ((double)*(float *)((int)pvVar9 + 0x268) < (double)(float)(dVar49 - 5.0)) {
          *(float *)((int)pvVar9 + 0x268) = (float)dVar49;
          dVar36 = dVar49;
        }
        fVar60 = (moby->rotation).z;
        dVar43 = 3.141592502593994;
        fVar7 = fVar60 + 1.5707963;
        dVar42 = -3.141592502593994;
        dVar41 = -0.16666656732559204;
        dVar40 = 0.008333025500178337;
        dVar49 = -0.0001980741071747616;
        dVar39 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar5 = fVar7;
        }
        fVar6 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar5 = 3.1415925 - fVar60;
        if (fVar60 - (3.1415925 - fVar60) < 0.0) {
          fVar5 = fVar60;
        }
        fVar7 = fVar6 * fVar6;
        fVar8 = -3.1415925 - fVar60;
        if ((-3.1415925 - fVar60) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar60 = fVar7 * fVar7 * fVar6;
        fVar5 = fVar7 * fVar60;
        dVar50 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar60 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
                         *(float *)((int)pvVar9 + 700));
        fVar7 = fVar8 * fVar8;
        *(float *)((int)pvVar9 + 0x268) = (float)dVar36;
        *(float *)((int)pvVar9 + 0x260) = (float)((double)*(float *)((int)pvVar9 + 0x260) + dVar50);
        fVar60 = fVar7 * fVar7 * fVar8;
        fVar5 = fVar7 * fVar60;
        dVar46 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar60 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8) *
                         *(float *)((int)pvVar9 + 700));
        *(float *)((int)pvVar9 + 0x264) = (float)((double)*(float *)((int)pvVar9 + 0x264) + dVar46);
        dVar36 = 3.0;
        *(undefined4 *)(puVar16 + 0x1d) = 0;
        *(float *)((int)puVar16 + 0xec) = (float)in_f29;
        *(float *)(puVar16 + 0x1c) = (float)(dVar50 * 3.0);
        *(float *)((int)puVar16 + 0xe4) = (float)(dVar46 * 3.0);
        *(float *)(puVar16 + 0x1c) = (float)(dVar50 * 3.0) + *(float *)((int)pvVar9 + 0x260);
        *(float *)((int)puVar16 + 0xe4) = (float)(dVar46 * 3.0) + *(float *)((int)pvVar9 + 0x264);
        *(float *)(puVar16 + 0x1d) = *(float *)((int)pvVar9 + 0x268) + 0.7;
        lVar21 = lVar20;
        iVar22 = collproc::CollMobySphere(uVar19 - 0x180,&DAT_003b4668,0,lVar20,0);
        if (iVar22 != 0) {
          *(float *)((int)puVar16 + 0xfc) = (float)in_f29;
          *(undefined4 *)(puVar16 + 0x1f) = 0;
          *(float *)(puVar16 + 0x1e) = (float)(dVar50 * 7.0);
          *(float *)((int)puVar16 + 0xf4) = (float)(dVar46 * 7.0);
          if (0 < iVar22) {
            puVar31 = &DAT_00a14a00;
            iVar33 = 0;
            dVar46 = 1.0;
            do {
              bVar25 = mobyutil::MB_isCrate(*puVar31);
              if (bVar25) {
                mobyutil::CollDamageMobyDirect
                          ((float)dVar46,(MobyInstance *)*puVar31,moby,0x30000,(int)lVar21,
                           (float *)((int)pvVar9 + 0x260),(float *)(puVar16 + 0x1e));
              }
              iVar33 = iVar33 + 1;
              puVar31 = puVar31 + 1;
            } while (iVar33 < iVar22);
          }
        }
        dVar47 = 0.5;
        dVar50 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar32 + 0x260,0);
        dVar46 = (double)*(float *)((int)pvVar9 + 0x268);
        dVar45 = (double)(float)(dVar46 - dVar50);
        if ((dVar44 < dVar45) || (0 < *(int *)((int)pvVar9 + 0x2c8))) {
          dVar37 = -(double)(DAT_0071f418 * 21.0 - *(float *)((int)pvVar9 + 0x2c8));
          *(float *)((int)pvVar9 + 0x2c8) = (float)dVar37;
        }
        else {
          dVar37 = (double)*(float *)((int)pvVar9 + 0x2c8);
          if (ABS(dVar45) < dVar47) {
            *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
            *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
            dVar46 = dVar50;
            dVar37 = dVar44;
          }
        }
        *(float *)((int)pvVar9 + 0x268) = (float)(dVar46 + dVar37);
        iVar23 = fastfunc::FastDecTimerS16(uVar32 + 0x2f6);
        iVar33 = DAT_0096a5a0;
        iVar22 = g_RaceTime;
        if (iVar23 == 0) {
          mobyutil::Delt(*(float *)((int)pvVar9 + 0x2b8),DAT_0071f418 * 20.0,
                         (float *)((int)pvVar9 + 700));
        }
        else {
          dVar44 = (double)mobyutil::g_FrameTime;
          fVar60 = *(float *)((int)pvVar9 + 0x2b4);
          if (dVar50 - (double)*(float *)((int)pvVar9 + 0x268) < 0.0) {
            fVar60 = (float)(dVar44 * 19.0);
          }
          dVar46 = (double)fVar60;
          puVar16[0x35] = (longlong)(int)(animationSpeed * 700.5);
          if (iVar22 < *(int *)((int)puVar16 + 0x1ac)) {
            dVar46 = (double)(float)(dVar44 * dVar36 + dVar46);
          }
          dVar36 = dVar44 + dVar46;
          if ((short)(&DAT_0096a4a0)[*(int *)((int)pvVar9 + 0x2cc)] < iVar33) {
            dVar36 = dVar46 - dVar44;
          }
          fVar60 = (float)dVar36;
          if (*(float *)((int)pvVar9 + 700) <= fVar60) {
            mobyutil::Delt(fVar60,DAT_0071f418 * 15.0,(float *)((int)pvVar9 + 700));
          }
          else {
            mobyutil::Delt(fVar60,DAT_0071f418 * 7.0,(float *)((int)pvVar9 + 700));
          }
        }
        if ((dVar45 < 0.20000000298023224) && (*(int *)((int)pvVar9 + 0x2c8) < 0)) {
          *(float *)((int)pvVar9 + 0x268) = (float)dVar50;
          *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
        }
        fVar60 = *(float *)((int)pvVar9 + 0x2c4);
        fVar5 = mobyutil::g_FrameTime * 2.6179938;
        if ((fVar60 <= fVar5) && (fVar5 = fVar60, fVar60 < mobyutil::g_FrameTime * -2.6179938)) {
          fVar5 = mobyutil::g_FrameTime * -2.6179938;
        }
        if ((moby->modeBits & MIRROR) != NONE) {
          fVar5 = -fVar5;
        }
        *(float *)((int)pvVar9 + 0x248) = fVar5 * 30.0;
        *(float *)((int)pvVar9 + 200) = fVar5 * 20.0;
        *(float *)((int)pvVar9 + 0x1c8) = fVar5 * 50.0;
        *(float *)((int)pvVar9 + 0x144) = fVar5 * 40.0;
        dVar36 = 0.019999999552965164;
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * 0.019999999552965164),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x1e0,3);
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar36),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x60,0);
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar36),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x160,1);
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * 0.014999999664723873),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0xe0,2);
        (moby->pos).x = *(f32 *)((int)pvVar9 + 0x260);
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x264);
        fVar60 = *(float *)((int)pvVar9 + 0x268);
        (moby->pos).z = fVar60;
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x26c);
        (moby->pos).z = fVar60 + 0.25;
        dVar44 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar9 + 0x2e8),mobyutil::g_FrameTime * 6.108652
                                   );
        *(float *)((int)pvVar9 + 0x2e8) = (float)dVar44;
        dVar36 = (double)(float)(dVar43 - dVar44);
        if (dVar44 - (double)(float)(dVar43 - dVar44) < 0.0) {
          dVar36 = dVar44;
        }
        dVar38 = (double)(float)(dVar42 - dVar44);
        if ((double)(float)(dVar42 - dVar44) - dVar36 < 0.0) {
          dVar38 = dVar36;
        }
        fVar60 = (moby->pos).x;
        fVar5 = (moby->pos).y;
        dVar43 = (double)(moby->pos).w;
        uVar10 = worldUpdateTime & 1;
        dVar36 = (double)(float)(dVar38 * dVar38);
        dVar42 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar38));
        dVar44 = (double)(float)(dVar36 * dVar42);
        fVar6 = (float)((double)(float)(dVar36 * dVar44) * dVar39 +
                       (double)(float)(dVar44 * dVar49 +
                                      (double)(float)(dVar42 * dVar40 +
                                                     (double)(float)((double)(float)(dVar36 * dVar38
                                                                                    ) * dVar41 +
                                                                    dVar38)))) * 0.08 +
                (moby->pos).z;
        (moby->pos).z = fVar6;
        fVar7 = *(float *)((int)pvVar9 + 0x280);
        *(float *)((int)pvVar9 + 0x280) = fVar60;
        dVar36 = (double)(fVar60 - fVar7);
        dVar38 = (double)(fVar5 - *(float *)((int)pvVar9 + 0x284));
        dVar44 = (double)(fVar6 - *(float *)((int)pvVar9 + 0x288));
        *(f32 *)((int)pvVar9 + 0x284) = (moby->pos).y;
        *(f32 *)((int)pvVar9 + 0x288) = (moby->pos).z;
        *(f32 *)((int)pvVar9 + 0x28c) = (moby->pos).w;
        mobyfunc::GetBonePosition(lVar20,uVar10 + 4,uVar19 - 0x1a0);
        mobyutil::MB_randRot();
        *(float *)(puVar16 + 0x20) = (float)dVar36;
        *(float *)((int)puVar16 + 0x104) = (float)dVar38;
        *(float *)(puVar16 + 0x21) = (float)dVar44;
        *(undefined4 *)((int)puVar16 + 0x10c) = 0x47ea6000;
        uVar18 = DAT_00845914;
        uVar15 = DAT_00845910;
        fVar60 = animationSpeed;
        if (*(short *)((int)pvVar9 + 0x2f6) == 0) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
          puVar16[0x35] = (longlong)(int)(fVar60 * 13.5);
          uVar48 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar16 + 0x1ac),
                              *(undefined4 *)((int)puVar16 + 0x1ac));
          partupd::SpawnPart_4(uVar19 - 0x1a0,uVar19 - 0x160,uVar15,uVar18,uVar48,0xf,0xf,1);
        }
        else {
          *(float *)((int)puVar16 + 0x11c) = (float)dVar43;
          fVar60 = animationSpeed;
          *(float *)(puVar16 + 0x22) = (float)(dVar36 * 0.9200000166893005);
          *(float *)((int)puVar16 + 0x114) = (float)(dVar38 * 0.9200000166893005);
          *(float *)(puVar16 + 0x23) = (float)(dVar44 * 0.9200000166893005);
          uVar15 = DAT_00845914;
          puVar16[0x35] = (longlong)(int)(fVar60 * 15.5);
          puVar16[0x35] = (longlong)(int)(fVar60 * 18.5);
          uVar48 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar16 + 0x1ac),
                              *(undefined4 *)((int)puVar16 + 0x1ac));
          partupd::SpawnPart_4(uVar19 - 0x1a0,uVar19 - 0x150,0x5032f0d2,uVar15,uVar48,0x1e,0x14,1);
          uVar18 = DAT_00845914;
          uVar15 = DAT_00845910;
          dVar36 = (double)animationSpeed;
          uVar48 = 0x40cd4c0000000000;
          puVar16[0x35] = (longlong)(int)(dVar36 * 8.5);
          puVar16[0x35] = (longlong)(int)(dVar36 * 17.5);
          mobyutil::MB_randRange
                    ((longlong)(int)(dVar36 * 17.5),dVar36,0x40cd4c0000000000,
                     *(undefined4 *)((int)puVar16 + 0x1ac),*(undefined4 *)((int)puVar16 + 0x1ac));
          partupd::SpawnPart_21(uVar48,uVar19 - 0x1a0,uVar19 - 0x160,uVar15,uVar18);
        }
      }
      else {
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar16 + 0x1a) = (moby->pos).x;
        fVar3 = (moby->pos).w;
        *(f32 *)((int)puVar16 + 0xd4) = fVar2;
        *(f32 *)((int)puVar16 + 0xdc) = fVar3;
        fVar60 = (moby->pos).z;
        puVar16[0x14] = 0;
        puVar16[0x12] = 0xffffffffffffffff;
        puVar16[0x15] = 9;
        puVar16[0x16] = 0xffffffffffffffff;
        *(float *)(puVar16 + 0x1b) = fVar60 + 0.5;
        puVar16[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,uVar48,0x3ff8000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,lVar20,&DAT_00a15d30,uVar19 - 400,&DAT_003b4668,9,5,0xf,0x19);
        mobyutil::MB_SpawnDebris(lVar20,0x655,1,0x656,2,2,0);
        mobyutil::MB_SpawnDebris(lVar20,0x6fa,1,0x6fb,1,1,0);
        *(undefined2 *)((int)pvVar9 + 0x2f2) = 0;
        g_RaceScore = g_RaceScore + 0xfa;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        moby->state = '\x03';
      }
    }
    else {
      moby->state = '\0';
    }
  }
  else if (bVar1 < 4) {
    if (hero::g_heroStateType == 0x16) {
      sVar28 = *(short *)((int)pvVar9 + 0x2f2) + 1;
      *(short *)((int)pvVar9 + 0x2f2) = sVar28;
      puVar16[0x35] = (longlong)(int)(animationSpeed * 240.5);
      if (*(int *)((int)puVar16 + 0x1ac) < (int)sVar28) {
        fVar60 = (moby->pos).x - GameCamera.posX;
        fVar5 = (moby->pos).y - GameCamera.posY;
        fVar7 = ABS(fVar60);
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar16 + 300) = fVar60;
        *(float *)(puVar16 + 0x26) = fVar5;
        *(float *)((int)puVar16 + 0x134) = fVar7 - fVar6;
        fVar60 = 0.0;
        uVar32 = (ulonglong)(*(uint *)((int)puVar16 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar16 + 0x26) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar16 + 300));
        if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
        fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar16 + 0x26));
        if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar20 = uVar19 - 0x250;
          lVar30 = uVar19 - 0xec;
          lVar26 = uVar19 - 0xfc;
          lVar34 = 2;
          fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)(puVar16 + 0x2e) = fVar5;
          *(float *)(puVar16 + 0x2d) = fVar5;
          *(float *)((int)puVar16 + 0x16c) = fVar5;
          *(float *)((int)puVar16 + 0x164) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)(puVar16 + 0x2d) = *(float *)(puVar16 + 0x2d) * fVar7;
          *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar5;
          *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar20 + 0x164) = *(float *)((int)lVar20 + 0x154) * fVar5 * fVar5;
            iVar22 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar30 = lVar30 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar34 = 4;
          lVar30 = uVar19 - 0xfc;
          pfVar27 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar26 = lVar30;
          do {
            fVar5 = *pfVar27;
            fVar7 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar20 + 0x164) = *(float *)((int)lVar20 + 0x164) * fVar5;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
            lVar26 = lVar26 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar20 = 2;
          do {
            iVar22 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar33 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            fVar60 = fVar60 + *(float *)(iVar22 + 0x164) + *(float *)(iVar33 + 4) +
                     *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar60 = (fVar60 + 0.7853982) * fVar8 + fVar6;
        }
        dVar36 = (double)fastfunc::FastSubRots(fVar60,GameCamera.rot.radius);
        if (1.5707963705062866 < dVar36) {
          puVar11 = moby->pClass->collision;
          moby->damage = -1;
          moby->collision = puVar11;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->state = '\x02';
        }
      }
    }
    else {
      moby->state = '\0';
    }
  }
  return;
}



//==== 003b5ce0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M557_003b5ce0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M557_003b5ce0(void)

{
  DAT_00845964 = 0x10000;
  return;
}



//==== 003b5d10  ns=mobyupdate_unsorted  size=0x750
// sig: undefined UpdateMoby_557_Hoverboat(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 00656a90: '*Error: Moby 557(hoverboat) with no target. UID: %d - RAR\n'

/* Moby 557 */

void mobyupdate_unsorted::UpdateMoby_557_Hoverboat(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  undefined2 uVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  longlong local_40;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar5 = moby->pVar;
  uVar13 = ZEXT48(pvVar5);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if ((-1 < *(int *)((int)pvVar5 + 0x21c)) &&
     (iVar12 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x21c)),
     iVar12 != 0)) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pMVar8 = MobyInstance;
    iVar12 = *(int *)((int)pvVar5 + 0x150);
    if (iVar12 < 0) {
      return;
    }
    pMVar9 = MobyInstance + iVar12;
    MobyInstance[iVar12].collision = (ushort *)0x0;
    pMVar8[iVar12].modeBits =
         pMVar9->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  if (moby->collision == (ushort *)0x0) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = moby->pClass->collision;
    pMVar8 = MobyInstance;
    iVar12 = *(int *)((int)pvVar5 + 0x150);
    if (-1 < iVar12) {
      pMVar9 = MobyInstance + iVar12;
      MobyInstance[iVar12].collision = (MobyInstance[iVar12].pClass)->collision;
      pMVar8[iVar12].modeBits =
           pMVar9->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  dVar15 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar17 = (double)(moby->pos).z;
  if (moby->state == '\0') {
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x74)];
    (moby->pos).x = pSVar6->points[0].x;
    (moby->pos).y = pSVar6->points[0].y;
    (moby->pos).z = pSVar6->points[0].z;
    (moby->pos).w = pSVar6->points[0].w;
    *(undefined4 *)((int)pvVar5 + 0x15c) = 0xffffffff;
    *(undefined4 *)((int)pvVar5 + 0x200) = 0;
    *(undefined2 *)((int)pvVar5 + 0x206) = 0;
    mobyfunc::AttachManipulator(moby,0,(int)pvVar5 + 0x1c0);
    if (*(int *)((int)pvVar5 + 0x150) == -1) {
      libc::printf("*Error: Moby 557(hoverboat) with no target. UID: %d - RAR\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(undefined2 *)((int)pvVar5 + 0x204) = 0;
    *(undefined4 *)((int)pvVar5 + 0x214) = *(undefined4 *)((int)pvVar5 + 0xfc);
  }
  UpdateMoby_a_lot_10(moby);
  pMVar8 = MobyInstance + *(int *)((int)pvVar5 + 0x150);
  if (*(int *)((int)pvVar5 + 0x158) == 0x3039) {
    if (*(int *)((int)pvVar5 + 0x154) == -1) {
      local_90 = (moby->pos).x;
      local_8c = (moby->pos).y;
      local_88 = (moby->pos).z;
      local_84 = (moby->pos).w;
    }
    else {
      mobyfunc::GetBonePosition(lVar11,*(int *)((int)pvVar5 + 0x154),uVar10 - 0x90);
    }
    fastfunc::FastEulerToMtx1(uVar10 - 0x80,lVar11 + 0x40);
    fVar1 = *(float *)((int)pvVar5 + 0x164);
    fVar2 = *(float *)((int)pvVar5 + 0x160);
    fVar3 = *(float *)((int)pvVar5 + 0x168);
    fVar4 = *(float *)((int)pvVar5 + 0x16c);
    (pMVar8->pos).x =
         local_90 + local_50 * fVar4 + local_60 * fVar3 + local_80 * fVar2 + local_70 * fVar1;
    (pMVar8->pos).y =
         local_8c + local_4c * fVar4 + local_5c * fVar3 + local_7c * fVar2 + local_6c * fVar1;
    (pMVar8->pos).z =
         local_88 + local_48 * fVar4 + local_58 * fVar3 + local_78 * fVar2 + local_68 * fVar1;
    (pMVar8->pos).w = local_84;
  }
  iVar12 = *(int *)((int)pvVar5 + 0x15c);
  if (iVar12 != -1) {
    iVar12 = sound::IsMobyPlayingSound(moby,iVar12);
    if (iVar12 != 0) goto LAB_003b6074;
    iVar12 = *(int *)((int)pvVar5 + 0x15c);
  }
  if (iVar12 == -1) {
    iVar12 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar5 + 0x15c) = iVar12;
  }
LAB_003b6074:
  dVar14 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar5 + 0x200),0.17453292);
  *(float *)((int)pvVar5 + 0x200) = (float)dVar14;
  fastfunc::FastQuaternionToEuler(uVar13 + 0x1d0,0);
  local_a0.x = (float)((double)(moby->pos).x - dVar15);
  local_a0.y = (float)((double)(moby->pos).y - dVar16);
  local_a0.w = (moby->pos).w;
  local_a0.z = (float)((double)(moby->pos).z - dVar17);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x180),&local_a0,uVar10 - 0xb0,lVar11 + 0x40);
  if ((hero::g_heroStateType == 0xd) && (DAT_0096a644 == pMVar8)) {
    if (*(short *)((int)pvVar5 + 0x204) == 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      *(undefined2 *)((int)pvVar5 + 0x204) = 1;
      auVar18 = loadVectorLeftIndexed(0x5a04,0x840000);
      auVar19 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = loadVectorLeftIndexed(4,0x3b5cf8);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar18 = vectorAddFloatingPoint
                          (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar19);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      iVar12 = (int)(animationSpeed * ((float)(longlong)DAT_00845a04 + 0.5));
      local_40 = (longlong)iVar12;
      auVar18 = vectorSplatHalfWord(auVar18,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar18,0x20c,uVar13);
      *(undefined2 *)((int)pvVar5 + 0x20c) = uVar7;
      dVar15 = (double)fastfunc::FastIntToDouble((short)iVar12);
      *(float *)((int)pvVar5 + 0x210) = (float)(1.0 / dVar15);
    }
    fastfunc::FastDecTimerS16(uVar13 + 0x20c);
    dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
    *(float *)((int)pvVar5 + 0xfc) =
         (*(float *)((int)pvVar5 + 0x214) - 0.005) *
         (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) + 0.005;
  }
  else {
    if (*(short *)((int)pvVar5 + 0x204) == 1) {
      if ((g_framesNotGrounded == 0) || (g_heroPosition.z <= (moby->pos).z - 3.0)) {
        auVar18 = ZEXT416(0xffffffff);
        auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        *(undefined2 *)((int)pvVar5 + 0x204) = 0;
        auVar18 = loadVectorLeftIndexed(0x5a08,0x840000);
        auVar19 = vectorConvertFromSignedFixedPointWord(auVar18,0);
        auVar18 = loadVectorLeftIndexed(4,0x3b5cf8);
        auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar18 = vectorAddFloatingPoint
                            (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
        auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar19);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        iVar12 = (int)(animationSpeed * ((float)(longlong)DAT_00845a08 + 0.5));
        local_40 = (longlong)iVar12;
        uVar7 = storeVectorElementHalfWordIndexed(auVar18,0x20c,uVar13);
        *(undefined2 *)((int)pvVar5 + 0x20c) = uVar7;
        dVar15 = (double)fastfunc::FastIntToDouble((short)iVar12);
        *(undefined4 *)((int)pvVar5 + 0x218) = *(undefined4 *)((int)pvVar5 + 0xfc);
        *(float *)((int)pvVar5 + 0x210) = (float)(1.0 / dVar15);
      }
      else {
        local_a0.x = (pMVar8->pos).x - g_heroPosition.x;
        local_a0.y = (pMVar8->pos).y - g_heroPosition.y;
        fVar1 = SQRT(local_a0.x * local_a0.x + local_a0.y * local_a0.y);
        DAT_00969ddc = (pMVar8->pos).w;
        local_a0.z = 0.0;
        fVar2 = fVar1;
        if (mobyutil::g_FrameTime * DAT_00845a00 - fVar1 < 0.0) {
          fVar2 = mobyutil::g_FrameTime * DAT_00845a00;
        }
        local_a0.w = DAT_00969ddc;
        if (fVar1 == 0.0) {
          DAT_00969dd8 = 0.0;
          DAT_00969dd4 = 0.0;
          DAT_00969dd0 = 0.0;
        }
        else {
          fVar2 = fVar2 / fVar1;
          DAT_00969dd0 = local_a0.x * fVar2;
          DAT_00969dd4 = local_a0.y * fVar2;
          DAT_00969dd8 = fVar2 * 0.0;
        }
      }
    }
    if (*(short *)((int)pvVar5 + 0x204) == 0) {
      fastfunc::FastDecTimerS16(uVar13 + 0x20c);
      dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
      *(float *)((int)pvVar5 + 0xfc) =
           (*(float *)((int)pvVar5 + 0x218) - *(float *)((int)pvVar5 + 0x214)) *
           (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) +
           *(float *)((int)pvVar5 + 0x214);
    }
    else {
      fastfunc::FastDecTimerS16(uVar13 + 0x20c);
      dVar15 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
      *(float *)((int)pvVar5 + 0xfc) =
           (*(float *)((int)pvVar5 + 0x214) - 0.005) *
           (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) + 0.005;
    }
  }
  return;
}



//==== 003b6460  ns=mobyupdate_helpers  size=0x14
// sig: undefined M558_003b6460(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M558_003b6460(void)

{
  DAT_00845a58 = 0x10000;
  return;
}



//==== 003b6480  ns=mobyupdate_unsorted  size=0x234
// sig: undefined UpdateMoby_558(MobyInstance * moby)
// callers(0): 
// callees(2): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a1000c: 'None'

/* Moby 558 */

void mobyupdate_unsorted::UpdateMoby_558(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  MobyInstance *pMVar4;
  
  moby->updateDistance = -1;
  piVar1 = (int *)moby->pVar;
  if ((help::g_HelpState == 0) && (help::g_HelpCurId == -1)) {
    if (((hero::g_heroStateType < 2) || (hero::g_heroStateType == 9)) &&
       (g_gameMode == GAME_MODE_NORMAL)) {
      if (((((piVar1[1] == -1) || (pMVar4 = MobyInstance + piVar1[1], pMVar4 == (MobyInstance *)0x0)
            ) || (pMVar4->oClass != FORCEFIELD_TOWER)) ||
          ((pMVar4->state == 0xfe || (pMVar4->state == 0xfd)))) &&
         ((UnlockableItems.devastator != '\0' || (UnlockableItems.visibombGun != '\0')))) {
        if (CHAR_ARRAY_00a1000c._888_2_ != -1) {
          CHAR_ARRAY_00a1000c._888_2_ = CHAR_ARRAY_00a1000c._888_2_ + 1;
        }
        iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._890_2_ < iVar3 / 600) {
          sVar2 = (short)(iVar3 >> 0x1f);
          CHAR_ARRAY_00a1000c._890_2_ =
               ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._892_4_ = CHAR_ARRAY_00a1000c._892_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
        if ((iVar3 != 0) && ((CHAR_ARRAY_00a1000c._892_4_ & 0x80000000) == 0)) {
          help::Help_QueueMessage(STR_THOSE_PULSING_TOWERS_CONTROL_0x32C8,0x6f);
        }
      }
    }
  }
  iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[2]);
  DAT_0096bfab = (char)((ulonglong)(LZCOUNT(iVar3) << 0x20) >> 0x25);
  return;
}



//==== 003b66b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M562_003b66b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M562_003b66b4(void)

{
  DAT_00845acc = 0x10000;
  return;
}



//==== 003b6708  ns=mobyupdate_helpers  size=0x548
// sig: undefined M562_003b6708(void)
// callers(1): 003b6ca8 mobyupdate_helpers::M562_003b6ca8
// callees(2): 00108180 mobyutil::MB_computeLobVelocity; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M562_003b6708
               (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xe0;
  puVar8 = (ulonglong *)lVar19;
  *puVar8 = uVar16;
  puVar8[0x1e] = in_LR;
  puVar8[0x19] = in_f29;
  puVar8[0x1a] = in_f30;
  puVar8[0x1b] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  if ((double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= param_3
     ) {
    fVar7 = param_5[3];
  }
  else {
    fVar2 = fVar2 - fVar1;
    fVar10 = fVar4 - fVar3;
    fVar11 = fVar6 - fVar5;
    fVar4 = 0.0;
    fVar7 = param_5[3];
    fVar13 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
    fVar12 = (float)(param_3 - 0.009999999776482582) / fVar13;
    fVar6 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    fVar9 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar9 + fVar1;
    fVar4 = fVar4 + fVar3;
  }
  *(float *)((int)puVar8 + 0x7c) = fVar7;
  fVar7 = ABS(fVar4 - fVar3);
  fVar5 = ABS(fVar2 - fVar1);
  *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
  *(float *)(puVar8 + 0xe) = fVar4;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(float *)((int)puVar8 + 0x84) = fVar2 - fVar1;
  *(float *)(puVar8 + 0x11) = fVar7 - fVar5;
  dVar29 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  dVar24 = dVar29;
  if (0.0 < fVar1) {
    lVar18 = uVar16 - 0xd0;
    lVar20 = uVar16 - 0x54;
    lVar22 = uVar16 - 0x44;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x13) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar1 * fVar1;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x54;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar19;
      iVar15 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar25 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar24);
  dVar26 = (double)g_heroRotation.z;
  fVar1 = *param_4;
  if ((0.8726646304130554 < dVar25) ||
     (fVar3 = param_4[1] - *(float *)((int)puVar8 + 0x74), fVar2 = fVar1 - *(float *)(puVar8 + 0xe),
     SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.5)) {
    fVar2 = (float)(dVar26 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar24 = dVar26;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar24 < 0.0) {
      dVar25 = dVar24;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = (double)(float)(dVar25 * dVar25);
    fVar5 = fVar4 * fVar4;
    dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
    fVar2 = fVar5 * fVar5 * fVar4;
    dVar27 = (double)(float)(dVar28 * dVar24);
    fVar3 = fVar5 * fVar2;
    *(float *)((int)puVar8 + 0x74) =
         ((float)(dVar28 * dVar27) * 2.601887e-06 +
         (float)(dVar27 * -0.0001980741071747616 +
                (double)(float)(dVar24 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar28 * dVar25) *
                                               -0.16666656732559204 + dVar25)))) * 1.5 + param_4[1];
    *(float *)(puVar8 + 0xe) =
         (fVar5 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 1.5 +
         fVar1;
    dVar24 = dVar26;
  }
  fVar1 = (float)(dVar24 + 1.570796251296997);
  dVar25 = (double)(float)(3.141592502593994 - dVar24);
  if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
    dVar25 = dVar24;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar24);
  if ((double)(float)(-3.141592502593994 - dVar24) - dVar25 < 0.0) {
    dVar26 = dVar25;
  }
  dVar24 = (double)(mobyutil::g_FrameTime * 8.5);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar25 = (double)(float)(dVar26 * dVar26);
  fVar4 = fVar3 * fVar3;
  dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
  param_6[2] = 0.0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar27 = (double)(float)(dVar25 * dVar28);
  fVar2 = fVar4 * fVar1;
  param_6[1] = (float)((double)((float)(dVar25 * dVar27) * 2.601887e-06 +
                               (float)(dVar27 * -0.0001980741071747616 +
                                      (double)(float)(dVar28 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar25 * dVar26
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar26))
                                      )) * dVar24);
  *param_6 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                             fVar2 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar24);
  dVar25 = (double)mobyutil::MB_computeLobVelocity(dVar24,-param_1,param_4,uVar16 - 0x70);
  param_6[2] = (float)dVar25;
  if ((g_downButtons & (L1|L2)) != 0) {
    dVar29 = 1.0;
  }
  fVar1 = (float)(param_1 * (double)(float)((double)(float)(dVar29 + 2.5) / dVar24)) * 0.5;
  if ((double)fVar1 < dVar25) {
    param_6[2] = fVar1;
  }
  return;
}



//==== 003b6ca8  ns=mobyupdate_helpers  size=0xf88
// sig: undefined M562_003b6ca8(void)
// callers(1): 003b7c48 mobyupdate_unsorted::UpdateMoby_562
// callees(7): 00057820 collproc::CollLine; 000fe610 mobyutil::MB_SphericalToVector; 003b6708 mobyupdate_helpers::M562_003b6708; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M562_003b6ca8
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  char acVar17 [4];
  CONTROLLER_INPUT CVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  int iVar22;
  longlong lVar21;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f16;
  double dVar34;
  ulonglong in_f17;
  double dVar35;
  ulonglong in_f18;
  double dVar36;
  ulonglong in_f19;
  double dVar37;
  ulonglong in_f20;
  double dVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  double dVar43;
  ulonglong in_f26;
  double dVar44;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  float fStack00000040;
  float fStack00000044;
  undefined8 uStack00000048;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x2d0;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar20;
  puVar15[0x5c] = in_LR;
  puVar15[0x4a] = in_f16;
  puVar15[0x4b] = in_f17;
  puVar15[0x4c] = in_f18;
  puVar15[0x4d] = in_f19;
  puVar15[0x4e] = in_f20;
  puVar15[0x4f] = in_f21;
  puVar15[0x50] = in_f22;
  puVar15[0x51] = in_f23;
  puVar15[0x52] = in_f24;
  puVar15[0x53] = in_f25;
  puVar15[0x54] = in_f26;
  puVar15[0x55] = in_f27;
  puVar15[0x56] = in_f28;
  puVar15[0x57] = in_f29;
  puVar15[0x58] = in_f30;
  puVar15[0x59] = in_f31;
  puVar15[0x47] = unaff_r29;
  puVar15[0x46] = unaff_r28;
  puVar15[0x48] = unaff_r30;
  puVar15[0x42] = unaff_r24;
  puVar15[0x45] = unaff_r27;
  puVar15[0x49] = unaff_r31;
  puVar15[0x44] = unaff_r26;
  puVar15[0x43] = unaff_r25;
  _fStack00000040 = param_3;
  uStack00000048 = param_4;
  fastfunc::FastApplyTransform((Vec4 *)(uVar20 - 0x230),(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(uVar20 - 0x200,uVar20 - 0x230);
  fVar10 = DAT_0096a350;
  if (*(int *)(param_2 + 0x50) != 0) {
    fVar9 = ABS(DAT_0096a350);
    dVar45 = 1.0;
    fVar3 = ABS(DAT_0096a354);
    uVar12 = *(uint *)(*(int *)(param_2 + 0x50) + 0x78);
    dVar44 = 0.0;
    dVar43 = -0.3619680106639862;
    dVar49 = (double)DAT_0096a320;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)((int)puVar15 + 0x124) = fVar9 - fVar3;
    dVar48 = (double)DAT_0096a324;
    dVar47 = (double)DAT_0096a328;
    dVar46 = (double)DAT_0096a32c;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x124) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar6 = fVar9;
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    dVar29 = dVar44;
    if (0.0 < fVar6) {
      lVar25 = uVar20 - 0x2c0;
      lVar27 = uVar20 - 0xd8;
      lVar26 = uVar20 - 0xe8;
      lVar28 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 500) = fVar6;
      *(float *)((int)puVar15 + 0x1ec) = fVar6;
      *(float *)(puVar15 + 0x3e) = fVar6;
      *(float *)(puVar15 + 0x3d) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar15 + 0x1ec) = *(float *)((int)puVar15 + 0x1ec) * fVar3;
      *(float *)(puVar15 + 0x3e) = *(float *)(puVar15 + 0x3e) * fVar6;
      *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1d8) * fVar6 * fVar6;
        iVar22 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe8;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar6 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1e8) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar3;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      do {
        iVar22 = (int)lVar25;
        iVar16 = (int)lVar27;
        lVar25 = lVar25 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1e8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar10 + fVar2);
    }
    dVar29 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar29);
    fVar3 = DAT_0096a350;
    dVar42 = 1.570796251296997;
    dVar41 = 3.141592502593994;
    fVar10 = (float)(dVar29 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar31 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar29 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    fVar6 = 3.1415925 - fVar10;
    if (fVar10 - (3.1415925 - fVar10) < 0.0) {
      fVar6 = fVar10;
    }
    *(float *)(puVar15 + 0x24) = (float)(dVar31 - dVar29);
    fVar9 = -3.1415925 - fVar10;
    if ((-3.1415925 - fVar10) - fVar6 < 0.0) {
      fVar9 = fVar6;
    }
    fVar2 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x24) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = fVar2 * fVar2 * fVar9;
    fVar6 = fVar2 * fVar10;
    dVar32 = dVar31;
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar32 = dVar29;
    }
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar29 = dVar31;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar31 = dVar44;
    if (dVar44 < dVar32) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x108;
      lVar27 = uVar20 - 0xf8;
      lVar28 = 2;
      fVar4 = (float)(dVar29 - dVar32) / (float)(dVar29 + dVar32);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = fVar4;
      *(float *)((int)puVar15 + 0x1cc) = fVar4;
      *(float *)(puVar15 + 0x3a) = fVar4;
      *(float *)(puVar15 + 0x39) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar15 + 0x1cc) = *(float *)((int)puVar15 + 0x1cc) * fVar5;
      *(float *)(puVar15 + 0x3a) = *(float *)(puVar15 + 0x3a) * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = *(float *)((int)puVar15 + 0x1d4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1b8) * fVar4 * fVar4;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0x108;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar4 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1c8) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      dVar29 = dVar44;
      do {
        iVar22 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar16 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1c8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar31 = (double)((float)(dVar29 + dVar34) * fVar11 + fVar3);
    }
    fStack00000040 =
         (fVar2 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar43,(float)dVar31);
    dVar32 = ABS(dVar49);
    dVar29 = ABS(dVar48);
    dVar43 = (double)(float)(dVar41 - dVar31);
    if (dVar31 - (double)(float)(dVar41 - dVar31) < 0.0) {
      dVar43 = dVar31;
    }
    fStack00000040 = fStack00000040 + g_heroPosition.x;
    dVar33 = dVar32;
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar33 = dVar29;
    }
    uVar13 = *(uint *)(puVar15 + 0x1e);
    dVar30 = (double)(float)(dVar40 - dVar31);
    if ((double)(float)(dVar40 - dVar31) - dVar43 < 0.0) {
      dVar30 = dVar43;
    }
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar29 = dVar32;
    }
    dVar43 = (double)(float)(dVar30 * dVar30);
    dVar32 = (double)(float)(dVar43 * (double)(float)(dVar43 * dVar30));
    dVar31 = (double)(float)(dVar43 * dVar32);
    fVar10 = *(float *)(puVar15 + 0x1e);
    uVar14 = *(uint *)((int)puVar15 + 0xf4);
    fVar6 = *(float *)((int)puVar15 + 0xf4);
    uVar7 = *(undefined4 *)(puVar15 + 0x1f);
    uVar8 = *(undefined4 *)((int)puVar15 + 0xfc);
    fStack00000044 =
         (float)((double)(float)((double)(float)(dVar43 * dVar31) * dVar36 +
                                (double)(float)(dVar31 * dVar37 +
                                               (double)(float)(dVar32 * dVar38 +
                                                              (double)(float)((double)(float)(dVar43
                                                                                             * 
                                                  dVar30) * dVar39 + dVar30)))) * dVar35) +
         g_heroPosition.y;
    fVar3 = g_heroPosition.z + 0.39082;
    uStack00000048 = CONCAT44(fVar3,(int)uStack00000048);
    if (dVar44 < dVar33) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x128;
      lVar27 = uVar20 - 0x118;
      lVar28 = 2;
      fVar9 = (float)(dVar29 - dVar33) / (float)(dVar29 + dVar33);
      fVar2 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = fVar9;
      *(float *)((int)puVar15 + 0x1ac) = fVar9;
      *(float *)(puVar15 + 0x36) = fVar9;
      *(float *)(puVar15 + 0x35) = fVar9;
      fVar9 = fVar2 * fVar2;
      *(float *)((int)puVar15 + 0x1ac) = *(float *)((int)puVar15 + 0x1ac) * fVar2;
      *(float *)(puVar15 + 0x36) = *(float *)(puVar15 + 0x36) * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = *(float *)((int)puVar15 + 0x1b4) * fVar9 * fVar2;
      do {
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x198) * fVar9 * fVar9;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      pfVar23 = (float *)&DAT_007358e0;
      lVar26 = uVar20 - 0x128;
      lVar27 = 4;
      lVar25 = lVar21;
      do {
        fVar9 = *pfVar23;
        fVar2 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x1a8) * fVar9;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    bVar1 = (g_downButtons & (L1|L2)) == 0;
    dVar43 = dVar44;
    if (!bVar1) {
      dVar43 = dVar45;
    }
    dVar29 = 2.5;
    *(float *)((int)puVar15 + 0x7c) = (float)dVar46;
    dVar43 = (double)(float)(dVar43 + 2.5);
    *(float *)(puVar15 + 0xe) = (float)(dVar49 * dVar43 + (double)fStack00000040);
    *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * dVar43 + (double)fStack00000044);
    *(float *)(puVar15 + 0xf) = (float)(dVar47 * dVar43 + (double)fVar3);
    pMVar19 = g_heroMobyPtr;
    if ((bVar1) || (DAT_0096bd8c != '\0')) {
      DAT_0096a730 = 0;
    }
    else {
      dVar47 = ABS((double)fVar10);
      dVar43 = ABS((double)fVar6);
      *(float *)(puVar15 + 0x10) = fVar10;
      *(float *)((int)puVar15 + 0x84) = fVar6;
      *(undefined4 *)(puVar15 + 0x11) = uVar7;
      *(undefined4 *)((int)puVar15 + 0x8c) = uVar8;
      fVar10 = (pMVar19->rotation).z;
      *(float *)((int)puVar15 + 0x11c) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(uVar13 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x11c) >> 0x1e) & 2 |
               (ulonglong)(uVar14 >> 0x1d) & 4;
      dVar46 = dVar47;
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x138;
        lVar26 = uVar20 - 0x148;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x194) = fVar9;
        *(float *)((int)puVar15 + 0x18c) = fVar9;
        *(float *)(puVar15 + 0x32) = fVar9;
        *(float *)(puVar15 + 0x31) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x18c) = *(float *)((int)puVar15 + 0x18c) * fVar2;
        *(float *)(puVar15 + 0x32) = *(float *)(puVar15 + 0x32) * fVar9;
        *(float *)((int)puVar15 + 0x194) = *(float *)((int)puVar15 + 0x194) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x148;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x188)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      fastfunc::FastDiffRots((double)fVar10,dVar47);
      dVar47 = (double)*(float *)(puVar15 + 0x10);
      dVar48 = (double)*(float *)((int)puVar15 + 0x84);
      dVar49 = ABS(dVar47);
      dVar43 = ABS(dVar48);
      uVar13 = *(uint *)(puVar15 + 0x11);
      *(float *)(puVar15 + 0x23) = (float)(dVar49 - dVar43);
      CVar18 = g_downButtons;
      fVar10 = *(float *)(puVar15 + 0x11);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x23) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x84) >> 0x1d) & 4;
      dVar46 = dVar49;
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar43 = dVar49;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar49 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x158;
        lVar26 = uVar20 - 0x168;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x174) = fVar9;
        *(float *)((int)puVar15 + 0x16c) = fVar9;
        *(float *)(puVar15 + 0x2e) = fVar9;
        *(float *)(puVar15 + 0x2d) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x16c) = *(float *)((int)puVar15 + 0x16c) * fVar2;
        *(float *)(puVar15 + 0x2e) = *(float *)(puVar15 + 0x2e) * fVar9;
        *(float *)((int)puVar15 + 0x174) = *(float *)((int)puVar15 + 0x174) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x158) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x168;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x168) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x168)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar49 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      dVar43 = ABS((double)fVar10);
      fVar10 = SQRT((float)(dVar47 * dVar47 + (double)(float)(dVar48 * dVar48)));
      dVar47 = ABS((double)fVar10);
      *(float *)(puVar15 + 0x22) = fVar10;
      *(float *)((int)puVar15 + 0x114) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x22) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x114) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      dVar46 = ABS((double)*(float *)(puVar15 + 0x22));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x178;
        lVar26 = uVar20 - 0x188;
        lVar28 = 2;
        fVar3 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar9 = fVar3 * fVar3;
        *(float *)((int)puVar15 + 0x154) = fVar3;
        *(float *)((int)puVar15 + 0x14c) = fVar3;
        *(float *)(puVar15 + 0x2a) = fVar3;
        *(float *)(puVar15 + 0x29) = fVar3;
        fVar3 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar9;
        *(float *)(puVar15 + 0x2a) = *(float *)(puVar15 + 0x2a) * fVar3;
        *(float *)((int)puVar15 + 0x154) = *(float *)((int)puVar15 + 0x154) * fVar3 * fVar9;
        do {
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x138) * fVar3 * fVar3;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x188;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar3 = *pfVar23;
          fVar9 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x148) * fVar3;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x148)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar10 + fVar6);
      }
      if (0.593411922454834 - dVar47 < 0.0) {
        dVar47 = 0.593411922454834;
      }
      if (dVar47 - -1.3962633609771729 < 0.0) {
        dVar47 = -1.3962633609771729;
      }
      dVar34 = dVar44;
      if ((CVar18 & (L1|L2)) != 0) {
        dVar34 = dVar45;
      }
      mobyutil::MB_SphericalToVector
                ((float)(dVar34 + dVar29),(float)dVar49,(float)dVar47,(float *)(puVar15 + 0x10));
      dVar43 = (double)SQRT(*(float *)(puVar15 + 0x10) * *(float *)(puVar15 + 0x10) +
                            *(float *)((int)puVar15 + 0x84) * *(float *)((int)puVar15 + 0x84));
      dVar34 = 0.009999999776482582;
      if (dVar44 - dVar43 < 0.0) {
        dVar34 = dVar43;
      }
      if (dVar43 - dVar44 < 0.0) {
        dVar34 = dVar43;
      }
      dVar43 = dVar44;
      if ((g_downButtons & (L1|L2)) != 0) {
        dVar43 = dVar45;
      }
      fVar10 = SQRT(DAT_0071f418 * 9.0 * (float)(dVar43 + dVar29) * 0.5);
      dVar43 = (double)((fVar10 * 2.0 * fVar10 *
                        (float)(dVar45 - (double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34
                                                        ))) / (DAT_0071f418 * 9.0));
      fVar10 = (float)((double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34) * dVar43);
      dVar34 = (double)fVar10;
      if (dVar44 < dVar43) {
        dVar47 = (double)(float)(dVar49 + dVar42);
        dVar46 = (double)(float)(dVar41 - dVar49);
        if (dVar49 - (double)(float)(dVar41 - dVar49) < 0.0) {
          dVar46 = dVar49;
        }
        dVar48 = (double)(float)(dVar41 - dVar47);
        if (dVar47 - (double)(float)(dVar41 - dVar47) < 0.0) {
          dVar48 = dVar47;
        }
        dVar31 = (double)(float)(dVar40 - dVar49);
        if ((double)(float)(dVar40 - dVar49) - dVar46 < 0.0) {
          dVar31 = dVar46;
        }
        dVar46 = (double)(float)(dVar40 - dVar47);
        if ((double)(float)(dVar40 - dVar47) - dVar48 < 0.0) {
          dVar46 = dVar48;
        }
        dVar48 = (double)(float)(dVar31 * dVar31);
        dVar35 = (double)(float)(dVar46 * dVar46);
        dVar32 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar31));
        dVar40 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar46));
        dVar42 = (double)(float)(dVar48 * dVar32);
        dVar33 = (double)(float)(dVar35 * dVar40);
        dVar47 = (double)GameCamera.posX;
        dVar49 = (double)GameCamera.posY;
        dVar41 = (double)GameCamera.posZ;
        *(float *)(puVar15 + 0x11) = fVar10;
        acVar17 = GameCamera.field8_0x14c;
        fVar10 = (float)((double)(float)((double)(float)(dVar48 * dVar42) * dVar36 +
                                        (double)(float)(dVar42 * dVar37 +
                                                       (double)(float)(dVar32 * dVar38 +
                                                                      (double)(float)((double)(float
                                                  )(dVar48 * dVar31) * dVar39 + dVar31)))) * dVar43)
        ;
        dVar48 = (double)fVar10;
        fVar6 = (float)((double)(float)((double)(float)(dVar35 * dVar33) * dVar36 +
                                       (double)(float)(dVar33 * dVar37 +
                                                      (double)(float)(dVar40 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar35 * dVar46) * dVar39 + dVar46)))) * dVar43);
        dVar43 = (double)fVar6;
        *(float *)((int)puVar15 + 0x84) = fVar10;
        *(float *)(puVar15 + 0x13) = (float)(dVar41 + dVar34);
        *(char (*) [4])((int)puVar15 + 0x9c) = acVar17;
        *(float *)(puVar15 + 0x10) = fVar6;
        *(float *)((int)puVar15 + 0x94) = (float)(dVar49 + dVar48);
        *(float *)(puVar15 + 0x12) = (float)(dVar47 + dVar43);
        iVar22 = collproc::CollLine(0x951500,uVar20 - 0x240,2,param_1,0);
        fVar10 = CollOutput.ip.y;
        if ((iVar22 == 0) || (CollOutput.pMoby == g_heroMobyPtr)) {
          fVar10 = (float)(dVar43 * 5.0) + GameCamera.posX;
          fVar6 = (float)(dVar48 * 5.0) + GameCamera.posY;
          fVar3 = (float)(dVar34 * 5.0) + GameCamera.posZ;
          *(float *)(puVar15 + 0xe) = (float)(dVar43 * 5.0);
          *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * 5.0);
          *(float *)(puVar15 + 0xf) = (float)(dVar34 * 5.0);
          *(float *)(puVar15 + 0xe) = fVar10;
          *(float *)((int)puVar15 + 0x74) = fVar6;
          *(float *)(puVar15 + 0xf) = fVar3;
        }
        else {
          fVar6 = CollOutput.ip.x - fStack00000040;
          fVar3 = CollOutput.ip.y - fStack00000044;
          *(float *)(puVar15 + 0xe) = CollOutput.ip.x;
          fVar9 = CollOutput.ip.z;
          *(float *)((int)puVar15 + 0x74) = fVar10;
          fVar10 = CollOutput.ip.w;
          *(float *)(puVar15 + 0xf) = fVar9;
          *(float *)((int)puVar15 + 0x7c) = fVar10;
          dVar46 = ABS((double)fVar6);
          dVar34 = ABS((double)fVar3);
          dVar43 = dVar46;
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar43 = dVar34;
          }
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar34 = dVar46;
          }
          if (dVar44 < dVar43) {
            lVar25 = uVar20 - 0x2c0;
            lVar27 = uVar20 - 0x198;
            lVar26 = uVar20 - 0x1a8;
            lVar28 = 2;
            fVar10 = (float)(dVar34 - dVar43) / (float)(dVar34 + dVar43);
            fVar6 = fVar10 * fVar10;
            *(float *)((int)puVar15 + 0x134) = fVar10;
            *(float *)((int)puVar15 + 300) = fVar10;
            *(float *)(puVar15 + 0x26) = fVar10;
            *(float *)(puVar15 + 0x25) = fVar10;
            fVar10 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar6;
            *(float *)(puVar15 + 0x26) = *(float *)(puVar15 + 0x26) * fVar10;
            *(float *)((int)puVar15 + 0x134) = *(float *)((int)puVar15 + 0x134) * fVar10 * fVar6;
            do {
              *(float *)((int)lVar25 + 0x128) = *(float *)((int)lVar25 + 0x118) * fVar10 * fVar10;
              iVar22 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            pfVar23 = (float *)&DAT_007358e0;
            lVar25 = uVar20 - 0x1a8;
            lVar26 = 4;
            do {
              fVar10 = *pfVar23;
              fVar6 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x128) * fVar10;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
      }
    }
    if ((g_downButtons & (L1|L2)) != 0) {
      dVar44 = dVar45;
    }
    M562_003b6708((double)(DAT_0071f418 * 9.0),0x3ee4f8b580000000,(double)(float)(dVar44 + dVar29),
                  uVar20 + 0x40 & 0xffffffff,uVar20 - 0x260,(ulonglong)uVar12 + 0x10);
  }
  return;
}



//==== 003b7c48  ns=mobyupdate_unsorted  size=0x59c
// sig: undefined UpdateMoby_562(MobyInstance * moby)
// callers(0): 
// callees(13): 000816ec hero::Hero_PlaySound; 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 0015d12c sound::PlayMobySound; 002e7140 FUN_002e7140; 002e74a8 FUN_002e74a8; 003b6ca8 mobyupdate_helpers::M562_003b6ca8; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a0fdc4: 'None'

/* Moby 562 */

void mobyupdate_unsorted::UpdateMoby_562(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  void *pvVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  dVar8 = -0.1899999976158142;
  dVar9 = -0.10999999940395355;
  mobyfunc::GetBonePosition(moby,0,&local_b0);
  mobyfunc::GetBoneTransformations(moby,0,auStack_80);
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  *(float *)((int)pvVar3 + 0x40) =
       (float)((double)local_60 * dVar9 +
              (double)(float)((double)local_70 * dVar8 + (double)local_b0));
  *(float *)((int)pvVar3 + 0x44) =
       (float)((double)local_5c * dVar9 +
              (double)(float)((double)local_6c * dVar8 + (double)local_ac));
  *(float *)((int)pvVar3 + 0x48) =
       (float)((double)local_58 * dVar9 +
              (double)(float)((double)local_68 * dVar8 + (double)local_a8));
  *(undefined4 *)((int)pvVar3 + 0x4c) = local_a4;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x98) = 1;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    if ((g_goldWeaponsArray.decoyGlove != '\0') && (*(short *)(iVar5 + 0xa6) != 0x76c)) {
      mobyutil::MB_DeleteMobyFromDynamicGroup(*(MobyInstance **)((int)pvVar3 + 0x50),&DAT_00a51f68);
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x50));
      iVar5 = FUN_002e7140(moby,uVar7 + 0x40,auStack_a0);
      *(int *)((int)pvVar3 + 0x50) = iVar5;
    }
  }
  if (((iVar5 == 0) || (*(char *)(iVar5 + 0x20) == -2)) || (*(char *)(iVar5 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar3 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  iVar5 = fastfunc::FastDecTimerS32(uVar7 + 0x54);
  if (((iVar5 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' && (DAT_00969e9c == (int)(animationSpeed * 17.5))) ||
       ((g_heroState == WEAPON_FIRST_PERSON_VIEW && (g_buttonsPressedThisFrame & DAT_0096ad80) != 0
        && (iVar5 = hero::Hero_GetWeaponAmmo(-1), iVar5 != 0)))) ||
      ((g_heroState == THROWING_ITEM && (hero::g_heroStateTimer == (int)(animationSpeed * 16.5))))))
     ) {
    hero::Hero_PlaySound(0x1a,0);
    hero::hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  mobyupdate_helpers::M562_003b6ca8
            (moby,uVar7,*(undefined8 *)((int)pvVar3 + 0x40),*(undefined8 *)((int)pvVar3 + 0x48));
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    return;
  }
  if (uVar1 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (*(int *)((int)pvVar3 + 0x50) == 0) {
      sound::PlayMobySound(0,0,moby);
    }
    else {
      if (CHAR_ARRAY_00a0fdc4._40_2_ != -1) {
        CHAR_ARRAY_00a0fdc4._40_2_ = CHAR_ARRAY_00a0fdc4._40_2_ + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4._42_2_ < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a0fdc4._42_2_ =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4._44_4_ = CHAR_ARRAY_00a0fdc4._44_4_ | 1 << (Level & 0x3f) | 0x80000000;
      FUN_002e74a8(uVar7 + 0x40,*(int *)((int)pvVar3 + 0x50),
                   (ulonglong)*(uint *)(*(int *)((int)pvVar3 + 0x50) + 0x78) + 0x10);
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    moby->state = '\x04';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x14,0x3b7c30);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x54,uVar7);
    *(undefined4 *)((int)pvVar3 + 0x54U & 0xfffffffc) = uVar6;
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      bVar2 = moby->field43_0x70;
    }
    else {
      if (uVar1 != '\0') goto LAB_003b8124;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      bVar2 = moby->field43_0x70;
      moby->state = (char)((LZCOUNT(-(bVar2 & 2)) << 0x3a) >> 0x3f) + '\x02';
    }
    if ((bVar2 & 2) != 0) {
      moby->state = '\x02';
    }
  }
LAB_003b8124:
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  if (iVar5 == 0) {
    iVar5 = hero::Hero_GetWeaponAmmo(-1);
    if (iVar5 == 0) {
      if (DAT_0096bd88 != '\0') {
        uVar6 = FUN_002e7140(moby,uVar7 + 0x40,auStack_90);
        *(undefined4 *)((int)pvVar3 + 0x50) = uVar6;
      }
    }
    else {
      uVar6 = FUN_002e7140(moby,uVar7 + 0x40,auStack_90);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar6;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x40);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((int)pvVar3 + 0x44);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x48);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)((int)pvVar3 + 0x4c);
  }
  return;
}



//==== 003b81e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M563_003b81e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M563_003b81e4(void)

{
  DAT_00845b3c = 0x10000;
  return;
}



//==== 003b8208  ns=mobyupdate_helpers  size=0x218
// sig: undefined M563_003b8208(MobyInstance * param_1)
// callers(1): 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(2): 00175644 walk::walk_SetupTwistVals; 00175688 walk::walk_init2LegAnim

void mobyupdate_helpers::M563_003b8208(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  
  pvVar1 = param_1->pVar;
  *(undefined4 *)((int)pvVar1 + 0x1d0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1d4) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1d8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1dc) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e4) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1ec) =
       *(undefined4 *)(*(int *)&param_1->pClass[1].pakcet_cnt_0 + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1f0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 500) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1f8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1fc) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x200) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  walk::walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x160));
  fVar2 = DAT_0071f418;
  *(float *)((int)pvVar1 + 0x23c) = DAT_0071f418 * 9.8;
  *(float *)((int)pvVar1 + 0x22c) = fVar2 * 3.1415927;
  *(float *)((int)pvVar1 + 0x230) = fVar2 * 6.2831855;
  *(float *)((int)pvVar1 + 0x234) = mobyutil::g_FrameTime * 6.2831855;
  *(undefined1 *)((int)pvVar1 + 0x210) = 0;
  *(undefined1 *)((int)pvVar1 + 0x211) = 0;
  *(undefined1 *)((int)pvVar1 + 0x212) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0x213) = 0x10;
  *(undefined1 *)((int)pvVar1 + 0x214) = 7;
  *(undefined1 *)((int)pvVar1 + 0x215) = 7;
  *(undefined1 *)((int)pvVar1 + 0x250) = 10;
  *(undefined1 *)((int)pvVar1 + 0x251) = 8;
  *(undefined1 *)((int)pvVar1 + 0x253) = 0xc;
  *(undefined1 *)((int)pvVar1 + 0x252) = 0xe;
  *(undefined1 *)((int)pvVar1 + 0x300) = 0xb;
  *(undefined1 *)((int)pvVar1 + 0x301) = 9;
  *(undefined1 *)((int)pvVar1 + 0x303) = 0xd;
  *(undefined1 *)((int)pvVar1 + 0x302) = 0xf;
  *(undefined4 *)((int)pvVar1 + 0x240) = 0x3f000000;
  *(float *)((int)pvVar1 + 0x224) = fVar2 * 10.0;
  walk::walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x160));
  return;
}



//==== 003b8438  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M563_003b8438(void)
// callers(1): 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0010e030 mobyutil::MB_genericExplosion

void mobyupdate_helpers::M563_003b8438(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined1 local_40 [24];
  
  uVar1 = 0;
  mobyfunc::GetBonePosition(0,param_1,0xc,auStack_50);
  mobyutil::MB_genericExplosion
            (uVar1,uVar1,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff0000000000000
             ,0x402e000000000000,param_1,local_40,auStack_50,1,0xffffffffffffffff,10,3,4);
  return;
}



//==== 003b85b8  ns=mobyupdate_unsorted  size=0x2144
// sig: undefined UpdateMoby_563(void * this, MobyInstance * moby)
// callers(0): 
// callees(52): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 00176618 walk::Walk_ApplyLegQuatToEuler; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState; 00291320 FUN_00291320; 003b8208 mobyupdate_helpers::M563_003b8208; 003b8438 mobyupdate_helpers::M563_003b8438; 004fffb4 fastfunc::FastDecTimerS16; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots
// strings: 003b856c: '?333A(' (raw)

/* WARNING: Type propagation algorithm not settling */
/* Moby 563 */

void __thiscall mobyupdate_unsorted::UpdateMoby_563(void *this,MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  undefined4 uVar7;
  float fVar8;
  longlong lVar9;
  int iVar12;
  int iVar13;
  undefined8 uVar10;
  undefined2 uVar16;
  int iVar14;
  ulonglong uVar11;
  uint uVar15;
  byte bVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 auStack_250 [16];
  Vec4 local_240;
  Vec4 local_230;
  Vec4 VStack_220;
  float afStack_210 [4];
  undefined1 local_200 [16];
  undefined1 auStack_1f0 [48];
  Vec4 local_1c0 [5];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [4];
  float local_10c;
  float local_108 [20];
  longlong local_b8;
  
  lVar9 = (longlong)(int)this;
  uVar5 = *(uint *)((int)this + 0x78);
  uVar22 = (ulonglong)uVar5;
  iVar14 = 0;
  if ((*(int *)(uVar5 + 0x38) == 0) && (*(short *)(uVar5 + 0x3c6) == 0)) {
    fVar2 = *(float *)(uVar5 + 1000);
  }
  else {
    iVar14 = 1;
    fVar2 = *(float *)(uVar5 + 1000) * 2.0;
  }
  mobyutil::MB_getTarget((double)fVar2,lVar9,moby,local_1c0);
  mobyfunc::DoManipulator(0x4004000000000000,(MobyInstance *)this,6,(Manipulator *)(uVar5 + 0x120));
  if ((*(char *)((int)this + 0x31) != '\0') &&
     (dVar23 = (double)FUN_005e8548(lVar9 + 0x10,0x951500), dVar23 < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar9);
    *(undefined1 *)((int)this + 0x7f) = 0x15;
  }
  dVar30 = (double)*(float *)((int)this + 0x48);
  dVar23 = (double)FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this + 0x10)),
                                (double)(local_1c0[0].y - *(float *)((int)this + 0x14)));
  dVar23 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar23);
  lVar20 = lVar9 + 0x10;
  dVar30 = (double)FUN_005e8588(lVar20,local_1c0);
  dVar24 = (double)mobyfunc::BlendAnimFrame((MobyInstance *)this);
  FUN_005e7e98(auStack_2d0,lVar20);
  FUN_005e7e98(auStack_2c0,lVar20);
  fastfunc::FastDecTimerS16(uVar22 + 0x3c4);
  if ((*(char *)((int)this + 0x20) != '\v') && (*(char *)((int)this + 0x20) != '\0')) {
    dVar27 = 0.0;
    local_10c = 0.0;
    iVar12 = mobyutil::MB_damage(lVar9,CHAR_ARRAY_00a0feec + 0x114,0);
    iVar13 = mobyutil::MB_HandleDamage
                       ((MobyInstance *)this,iVar12,uVar22 + 0x20,0,auStack_110,&local_10c,0,4);
    *(undefined4 *)(uVar5 + 0xe0) = 0x15e;
    *(undefined4 *)(uVar5 + 0xe8) = 0x3eb33333;
    if ((iVar12 != 0) &&
       (((local_10c != 0.0 && (*(char *)((int)this + 0x20) != '\0')) &&
        (*(short *)(uVar5 + 0x3c4) == 0)))) {
      local_108[1] = 1.0;
      pMVar6 = *(MobyInstance **)(iVar12 + 0x20);
      if (pMVar6 == (MobyInstance *)0x0) {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - g_heroPosition.x),
                                      (double)(*(float *)((int)this + 0x14) - g_heroPosition.y));
      }
      else if (pMVar6 == g_currentWeaponMoby) {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - g_heroPosition.x),
                                      (double)(*(float *)((int)this + 0x14) - g_heroPosition.y));
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - (pMVar6->pos).x),
                                      (double)(*(float *)((int)this + 0x14) - (pMVar6->pos).y));
      }
      fVar8 = DAT_0071f418;
      local_108[0] = (float)dVar25;
      *(float *)(uVar5 + 0xd0) = DAT_0071f418 * 30.0;
      *(float *)(uVar5 + 0xd4) = fVar8 * 10.0;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined1 *)(uVar5 + 0xfd) = 0;
      *(undefined4 *)(uVar5 + 0xe4) = 9;
      *(float *)(uVar5 + 0xd8) = fVar3 * 5.5;
      fVar2 = *(float *)(uVar5 + 0x20) - local_10c;
      *(float *)(uVar5 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar27) {
LAB_003b8924:
        *(float *)(uVar5 + 0xd4) = fVar8 * 17.0;
        *(float *)(uVar5 + 0xd8) = fVar3 * 7.0;
        *(float *)(uVar5 + 0xdc) = fVar3 * 13.0;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                   uVar22 + 0xd8,uVar22 + 0xdc);
        mobyutil::MB_StartKick((double)local_108[0],lVar9,uVar22 + 0xc0);
        *(undefined4 *)(uVar5 + 0x110) = 0x41600000;
        *(undefined4 *)(uVar5 + 0x114) = 0x41c00000;
        *(undefined1 *)((int)this + 0x20) = 0xb;
        mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
        *(undefined1 *)(uVar5 + 0xb7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
        *(float *)(uVar5 + 0x3e4) = (2.0 / (animationSpeed * 15.0)) * 2.0;
      }
      else if (iVar13 < 4) {
        if (0 < iVar13) {
          if (iVar13 < 3) goto LAB_003b8924;
LAB_003b8a0c:
          *(undefined4 *)(uVar5 + 0x3c8) = 0xbf060a92;
          if (((*(char *)((int)this + 0x52) != '\x04') || (dVar24 < 16.0)) || (27.0 < dVar24)) {
            *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 5;
            uVar10 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar9,5,0,uVar10);
            walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
            *(undefined1 *)((int)this + 0x20) = 9;
            sVar4 = *(short *)(*(int *)(iVar12 + 0x20) + 0xa6);
            if ((sVar4 == 0x131) || (sVar4 == 0xb0)) {
              fVar2 = (2.0 / (animationSpeed * 15.0)) * 0.5;
            }
            else {
              fVar2 = 2.0 / (animationSpeed * 15.0);
            }
            *(float *)(uVar5 + 0x3e4) = fVar2;
            mobyutil::MB_VecAtan2Angles
                      (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                       uVar22 + 0x3e4,local_108 + 1);
            *(undefined1 *)(uVar5 + 0xb7) = 0x78;
            mobyutil::MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
            uVar16 = idol::GetAnimDuration(0xf);
            *(undefined2 *)(uVar5 + 0x3c4) = uVar16;
            uVar16 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
          }
        }
      }
      else if (iVar13 < 7) {
        if (5 < iVar13) goto LAB_003b8a0c;
        uVar10 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar9,6,0,uVar10);
        walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this + 0x20) = 1;
        *(float *)(uVar5 + 0x3e4) = 2.0 / (animationSpeed * 15.0);
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                   uVar22 + 0x3e4,local_108 + 1);
        dVar27 = (double)fastfunc::FastWrapRot(3.1415927,local_108[0]);
        *(float *)((int)this + 0x48) = (float)dVar27;
        *(undefined1 *)(uVar5 + 0xb7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
        uVar16 = idol::GetAnimDuration(0x1e);
        *(undefined2 *)(uVar5 + 0x3c4) = uVar16;
        uVar16 = idol::GetAnimDuration(0xb4);
        *(undefined2 *)(uVar5 + 0x3c2) = uVar16;
        uVar16 = idol::GetAnimDuration(0xf0);
        *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
      }
    }
  }
  *(undefined1 *)((int)this + 0xa4) = 0xff;
  if (*(int *)(uVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
  }
  *(undefined4 *)(uVar5 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar22 + 0x3c6);
  if ((((*(char *)((int)this + 0x20) == '\b') && (*(char *)((int)this + 0x52) == '\x04')) &&
      (16.0 < dVar24)) && (dVar24 < 27.0)) {
    local_108[7] = 0.0;
    local_108[8] = 2.8026e-45;
    local_108[9] = 1.4013e-45;
    local_108[10] = 4.2039e-45;
    local_108[0xb] = 5.60519e-45;
    local_108[0xc] = 7.00649e-45;
    FUN_005e81f0(auStack_1f0,&g_heroPosition,lVar20);
    FUN_005e7f98((double)(mobyutil::g_FrameTime * 5.0),auStack_1f0,auStack_1f0);
    mobyfunc::GetMobyJointsWorldPos(lVar9,6,local_108 + 7,auStack_170);
    iVar12 = 0;
    puVar19 = auStack_170;
    puVar18 = auStack_160;
    do {
      collproc::CollLine(puVar19,puVar18,9,lVar9,auStack_1f0);
      iVar12 = iVar12 + 1;
      puVar19 = puVar19 + 0x10;
      puVar18 = puVar18 + 0x10;
    } while (iVar12 < 5);
    FUN_005e7f54(auStack_2a0,auStack_170,auStack_130);
    dVar25 = 0.5;
    FUN_005e822c(0x3fe0000000000000,auStack_2a0,auStack_2a0);
    dVar27 = (double)FUN_005e8548(auStack_170,auStack_130);
    collproc::CollMobySphere((double)(float)(dVar27 * dVar25),auStack_2a0);
    mobyfunc::GetBonePosition(lVar9,0x11,auStack_2a0);
    collproc::CollMobySphere(dVar25,auStack_2a0);
  }
  fastfunc::FastDecTimerS16(uVar22 + 0x3c2);
  bVar17 = *(byte *)((int)this + 0x20);
  fVar2 = *(float *)((int)this + 0x10);
  dVar27 = (double)*(float *)((int)this + 0x48);
  fVar3 = *(float *)((int)this + 0x14);
  if (5 < bVar17) {
    if (bVar17 == 0xb) {
      uVar15 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar5 + 0xc0));
      if (((uVar15 & 0x40) != 0) ||
         (uVar15 = (int)*(uint *)((int)this + 0x18) >> 0x1f,
         (int)((uVar15 >> 1 ^ *(uint *)((int)this + 0x18)) - uVar15) < 0x3f800000)) {
        mobyupdate_helpers::M563_003b8438(lVar9);
        uVar10 = 0;
        lVar21 = lVar9 + 0x40;
        mobyutil::MB_SpawnDebrisMoby(0,lVar9,0x6cb,lVar20,lVar21,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6cc,lVar20,lVar21,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6cd,lVar20,lVar21,0,0);
        mobyfunc::DeleteMoby((MobyInstance *)this);
        return;
      }
    }
    else if (bVar17 == 10) {
      if ((*(char *)((int)this + 0x52) == '\x10') && ((*(byte *)((int)this + 0x70) & 2) != 0)) {
        if (((*(byte *)((int)this + 0xbc) & 0x10) == 0) &&
           (iVar14 = mobyutil::PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 != 0)) {
          *(undefined1 *)((int)this + 0x20) = 5;
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        }
        else {
          *(undefined1 *)((int)this + 0x20) = 6;
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        }
        *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) & 0xef | 8;
      }
      else {
        if ((*(byte *)((int)this + 0xbc) & 0x10) == 0) {
          uVar10 = FUN_005e8338((double)(local_1c0[0].x - fVar2),(double)(local_1c0[0].y - fVar3));
          dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar27,uVar10,0x3f9eb851e0000000,0x3fd3333340000000,
                                      (double)(mobyutil::g_FrameTime * 6.4577184));
        }
        else {
          uVar10 = FUN_005e8338((double)(*(float *)(uVar5 + 0x3b0) - fVar2),
                                (double)(*(float *)(uVar5 + 0x3b4) - fVar3));
          dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar27,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                      (double)(DAT_0071f418 * 6.2831855),
                                      (double)(mobyutil::g_FrameTime * 4.1887903),&DAT_00720000,
                                      &DAT_00720000,uVar22 + 0x3d0);
        }
        *(float *)((int)this + 0x48) = (float)dVar23;
      }
    }
    else if (bVar17 == 9) {
      if ((*(char *)((int)this + 0x53) != '\x05') ||
         ((*(char *)((int)this + 0x52) == '\x05' && ((*(byte *)((int)this + 0x70) & 2) != 0)))) {
        if ((*(byte *)((int)this + 0xbc) & 4) == 0) {
          if ((28.0 <= dVar24) || (*(char *)((int)this + 0x52) != '\x10')) {
            if (*(int *)(uVar5 + 0x3d8) < 1) {
              *(undefined1 *)((int)this + 0x20) = 1;
              *(undefined2 *)(uVar5 + 0x3c2) = 0;
            }
            else {
              fVar2 = -(DAT_0071f418 * 200.0 - *(float *)(uVar5 + 0x3d8));
              *(float *)(uVar5 + 0x3d8) = fVar2;
              mobyutil::MB_SphericalToVector
                        (fVar2,*(float *)(uVar5 + 0x3d4),*(float *)((int)this + 0x44),afStack_210);
              FUN_005e7f54(lVar20,lVar20,afStack_210);
              dVar23 = (double)*(float *)((int)this + 0x48);
              uVar10 = FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this + 0x10)),
                                    (double)(local_1c0[0].y - *(float *)((int)this + 0x14)));
              dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                         (dVar23,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                          (double)(DAT_0071f418 * 6.2831855),
                                          (double)(mobyutil::g_FrameTime * 4.1887903));
              *(float *)((int)this + 0x48) = (float)dVar23;
            }
          }
          else {
            fVar2 = DAT_0071f408 * 0.11111111;
            if (*(float *)(uVar5 + 0x3d8) < fVar2) {
              fVar2 = DAT_0071f418 * 20.0 + *(float *)(uVar5 + 0x3d8);
            }
            *(float *)(uVar5 + 0x3d8) = fVar2;
            mobyutil::MB_SphericalToVector
                      (fVar2,*(float *)(uVar5 + 0x3d4),*(float *)((int)this + 0x44),afStack_210);
            FUN_005e7f54(lVar20,lVar20,afStack_210);
            dVar23 = (double)*(float *)((int)this + 0x48);
            uVar10 = FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this + 0x10)),
                                  (double)(local_1c0[0].y - *(float *)((int)this + 0x14)));
            dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                       (dVar23,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                        (double)(DAT_0071f418 * 6.2831855),
                                        (double)(mobyutil::g_FrameTime * 4.1887903),&DAT_00720000,
                                        &DAT_00720000,uVar22 + 0x3d0);
            *(float *)((int)this + 0x48) = (float)dVar23;
          }
        }
        else {
          *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) & 0xfb;
          if (*(int *)(uVar5 + 0x3dc) == -1) {
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
            *(undefined1 *)((int)this + 0x20) = 1;
            *(undefined2 *)(uVar5 + 0x3c2) = 0;
          }
          else {
            local_108[2] = 0.5235988;
            local_108[5] = 1.0471976;
            local_108[3] = 0.7853982;
            uVar15 = 0;
            local_108[4] = 0.2617994;
            local_108[6] = 0.0;
            dVar25 = 1.0;
            dVar27 = 6.0;
            dVar24 = dVar25;
            do {
              if ((uVar15 & 1) == 0) {
                uVar11 = mobyutil::MB_randInt(100);
                dVar24 = dVar25;
                if ((uVar11 & 1) != 0) {
                  dVar24 = -1.0;
                }
              }
              else {
                dVar24 = -dVar24;
              }
              dVar29 = (double)(float)(dVar24 * (double)local_108[((int)uVar15 >> 1) + 2]);
              dVar28 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - g_heroPosition.x
                                                    ),
                                            (double)(*(float *)((int)this + 0x14) - g_heroPosition.y
                                                    ));
              dVar28 = (double)fastfunc::FastWrapRot((float)dVar29,(float)dVar28);
              mobyutil::MB_SphericalToVector
                        ((float)dVar27,(float)dVar28,*(float *)((int)this + 0x44),&VStack_220.x);
              FUN_005e7f54(&VStack_220,&VStack_220,lVar20);
              iVar14 = mobyutil::PointInsideComplexPoly
                                 (&VStack_220,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 != 0) {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
                *(float *)(uVar5 + 0x3d4) = (float)dVar28;
                *(undefined4 *)(uVar5 + 0x3d8) = 0;
                goto LAB_003ba494;
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < 9);
            if (*(char *)((int)this + 0x52) == '\x05') {
              if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
                *(undefined1 *)((int)this + 0x20) = 1;
              }
              else {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
                *(undefined1 *)((int)this + 0x20) = 8;
              }
            }
            else {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
              *(undefined1 *)((int)this + 0x20) = 1;
              *(undefined2 *)(uVar5 + 0x3c2) = 0;
            }
          }
        }
      }
    }
    else if (bVar17 == 8) {
      if ((*(char *)((int)this + 0x52) == '\x04') && ((*(byte *)((int)this + 0x70) & 2) != 0)) {
        *(undefined2 *)(uVar5 + 0x3c2) = 0;
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        *(undefined1 *)((int)this + 0x20) = 1;
      }
    }
    else if (bVar17 == 7) {
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        walk::walk_Update(0,dVar27,(double)(DAT_0071f418 * 20.0),lVar9,uVar22 + 0x160);
        if (*(char *)(uVar5 + 0x217) == '\0') {
          *(byte *)((int)this + 0x20) = ((byte)((LZCOUNT(-iVar14) << 0x3a) >> 0x3f) & 0xfd) + 4;
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this + 0x20) = 8;
      }
    }
    else if (bVar17 == 6) {
      bVar17 = *(byte *)((int)this + 0xbc);
      if ((bVar17 & 8) != 0) {
        *(byte *)((int)this + 0xbc) = bVar17 & 0xf7;
        walk::Walk_ResetLegState(this,(w_2legData *)(uVar5 + 0x160));
        bVar17 = *(byte *)((int)this + 0xbc);
      }
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        if ((bVar17 & 8) != 0) {
          *(byte *)((int)this + 0xbc) = bVar17 & 0xf7;
          walk::Walk_ResetLegState(this,(w_2legData *)(uVar5 + 0x160));
        }
        dVar23 = (double)FUN_005e8588(lVar20,uVar22 + 0x3b0);
        if (2.0 <= dVar23) {
          dVar23 = (double)(float)((double)mobyutil::g_FrameTime * 4.0);
          uVar10 = FUN_005e8338((double)(*(float *)(uVar5 + 0x3b0) - *(float *)((int)this + 0x10)),
                                (double)(*(float *)(uVar5 + 0x3b4) - *(float *)((int)this + 0x14)),
                                (double)mobyutil::g_FrameTime,0x4010000000000000);
          walk::walk_Update(dVar23,uVar10,(double)(DAT_0071f418 * 20.0),lVar9,uVar22 + 0x160);
          if (*(int *)(uVar5 + 0x3dc) != -1) {
            mathfunc::cosf(*(float *)((int)this + 0x48));
            FUN_005e8128((double)*(float *)((int)this + 0x48));
            FUN_005e7f54(&local_230,&local_230,lVar20);
            iVar14 = mobyutil::PointInsideComplexPoly
                               (&local_230,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
            if (iVar14 == 0) {
              *(undefined4 *)(uVar5 + 0x3d0) = 0;
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
              walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
              *(undefined1 *)((int)this + 0x20) = 10;
              *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 0x10;
            }
            else {
              iVar14 = mobyutil::PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 != 0) {
                *(undefined1 *)((int)this + 0x20) = 7;
              }
            }
          }
        }
        else {
          *(undefined1 *)((int)this + 0x20) = 7;
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this + 0x20) = 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 5) {
    if ((*(byte *)((int)this + 0xbc) & 8) != 0) {
      *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) & 0xf7;
      walk::Walk_ResetLegState(this,(w_2legData *)(uVar5 + 0x160));
      fVar2 = *(float *)((int)this + 0x10);
      fVar3 = *(float *)((int)this + 0x14);
    }
    lVar21 = uVar22 + 0x160;
    dVar24 = (double)(float)((double)mobyutil::g_FrameTime * 4.0);
    uVar10 = FUN_005e8338((double)(local_1c0[0].x - fVar2),(double)(local_1c0[0].y - fVar3),
                          0x4010000000000000,(double)mobyutil::g_FrameTime);
    walk::walk_Update(dVar24,uVar10,(double)(DAT_0071f418 * 20.0),lVar9,lVar21);
    if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
      if (*(int *)(uVar5 + 0x3dc) != -1) {
        mathfunc::cosf(*(float *)((int)this + 0x48));
        FUN_005e8128((double)*(float *)((int)this + 0x48));
        FUN_005e7f54(&local_240,&local_240,lVar20);
        iVar12 = mobyutil::PointInsideComplexPoly
                           (&local_240,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                            Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
        if (iVar12 == 0) {
          if ((iVar14 == 0) ||
             (iVar12 = mobyutil::PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar12 != 0)) {
            iVar12 = mobyutil::PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
            if (iVar12 != 0) {
              *(undefined4 *)(uVar5 + 0x3d0) = 0;
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
              walk::Walk_ApplyLegQuatToEuler(lVar21);
              *(undefined1 *)((int)this + 0x20) = 10;
            }
          }
          else {
            *(undefined1 *)((int)this + 0x20) = 7;
          }
        }
        if ((iVar14 == 0) &&
           (iVar14 = mobyutil::PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)) {
          *(undefined1 *)((int)this + 0x20) = 6;
        }
      }
    }
    else {
      local_b8 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
      walk::Walk_ApplyLegQuatToEuler(lVar21);
      *(undefined1 *)((int)this + 0x20) = 8;
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 4) {
    if (iVar14 == 0) {
      *(undefined1 *)((int)this + 0x20) = 1;
    }
    else if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
      if ((*(int *)(uVar5 + 0x3dc) == -1) ||
         (iVar14 = mobyutil::PointInsideComplexPoly
                             (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                              Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 != 0)) {
        *(undefined1 *)((int)this + 0x20) = 5;
        *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 8;
      }
      else if (1.5707963705062866 < dVar23) {
        *(undefined4 *)(uVar5 + 0x3d0) = 0;
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
        walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this + 0x20) = 10;
      }
    }
    else {
      local_b8 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
      walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
      *(undefined1 *)((int)this + 0x20) = 8;
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 3) {
    if ((*(char *)((int)this + 0x52) != '\0') && ((*(byte *)((int)this + 0x70) & 2) != 0)) {
      uVar10 = idol::GetAnimDuration(10);
      mobyutil::MB_SetAnimation(lVar9,0xc,0,uVar10);
      dVar24 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
      *(float *)((int)this + 0x58) = (float)dVar24;
    }
    iVar12 = mobyutil::MB_MayaFrameTrigger(36.0,(MobyInstance *)this);
    if (iVar12 != 0) {
      dVar29 = -1.0;
      iVar12 = 0;
      dVar28 = 1.0;
      dVar25 = 5.0;
      dVar27 = 10.0;
      dVar24 = 3.0;
      uVar26 = 0x3fd6666660000000;
      uVar10 = 0x3fe6666660000000;
      do {
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
        mobyfunc::GetBonePosition(lVar9,0,auStack_290);
        mathfunc::cosf(*(float *)((int)this + 0x48));
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar27);
        FUN_005e8128((double)*(float *)((int)this + 0x48));
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar27);
        FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar24),local_270,local_270);
        fastfunc::FastVecAddSelf(auStack_250,local_280,local_270);
        mobyutil::MB_randRot();
        mobyutil::MB_randRot();
        mobyutil::MB_randRot();
        FUN_00291320(uVar26,uVar10,lVar9,local_280,auStack_290,local_260,0x5ec);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
    }
    if (*(short *)(uVar5 + 0x3c2) == 0) {
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        if (iVar14 == 0) {
          fVar2 = *(float *)(uVar5 + 1000);
        }
        else {
          fVar2 = *(float *)(uVar5 + 1000) * 2.0;
        }
        if (dVar30 < (double)fVar2) {
          bVar17 = *(byte *)((int)this + 0xbc);
          if ((bVar17 & 1) == 0) {
            *(undefined4 *)(uVar5 + 0x3d0) = 0;
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
            walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
            *(undefined1 *)((int)this + 0x20) = 10;
            *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 1;
          }
          else {
            if ((iVar14 == 0) && (*(int *)(uVar5 + 0x3dc) != -1)) {
              iVar14 = mobyutil::PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 == 0) goto LAB_003ba494;
              bVar17 = *(byte *)((int)this + 0xbc);
            }
            *(undefined1 *)((int)this + 0x20) = 5;
            *(byte *)((int)this + 0xbc) = bVar17 | 8;
          }
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        *(undefined1 *)((int)this + 0x20) = 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 2) {
    if ((*(char *)((int)this + 0x52) == '\x02') && ((*(byte *)((int)this + 0x70) & 2) != 0)) {
      if ((iVar14 == 0) &&
         ((*(int *)(uVar5 + 0x3dc) != -1 &&
          (iVar14 = mobyutil::PointInsideComplexPoly
                              (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                               Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)))) {
        uVar10 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
        *(undefined1 *)((int)this + 0x20) = 1;
      }
      else {
        *(undefined1 *)((int)this + 0x20) = 5;
        *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 != 1) {
    if (bVar17 == 0) {
      *(undefined4 *)(uVar5 + 0x20) = 0x40000000;
      *(undefined2 *)(uVar5 + 0x24) = 2;
      *(undefined1 *)(uVar5 + 0x28) = 1;
      *(undefined4 *)(uVar5 + 0x30) = 0x3f800000;
      *(undefined1 *)(uVar5 + 0x29) = 0;
      *(undefined1 *)((int)this + 0xbc) = 0;
      *(undefined4 *)(uVar5 + 0x3e0) = 0;
      *(undefined2 *)(uVar5 + 0x3c6) = 0;
      *(undefined1 *)(uVar5 + 0x58) = 8;
      *(undefined1 *)(uVar5 + 0x5a) = 8;
      FUN_005e7e98(uVar22 + 0x3b0,lVar20);
      if (*(char *)(uVar5 + 0x121) == '\0') {
        mobyfunc::AttachManipulator((MobyInstance *)this,6,(Manipulator *)(uVar5 + 0x120));
      }
      mobyupdate_helpers::M563_003b8208((MobyInstance *)this);
      if (*(char *)(uVar5 + 0x3c0) == '\0') {
        *(undefined1 *)((int)this + 0x20) = 1;
      }
      else {
        *(undefined1 *)((int)this + 0x20) = 3;
        uVar10 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar9,0xb,0,uVar10);
      }
    }
    goto LAB_003ba494;
  }
  if ((*(byte *)((int)this + 0x70) & 2) != 0) {
    if (iVar14 == 0) {
      fVar2 = *(float *)(uVar5 + 1000);
    }
    else {
      fVar2 = *(float *)(uVar5 + 1000) * 2.0;
    }
    if (dVar30 <= (double)fVar2) {
      uVar10 = idol::GetAnimDuration(0x14);
      mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
    }
    else {
      local_108[0xd] = 0.0;
      local_108[0xe] = 0.0;
      local_108[0xf] = 0.0;
      local_108[0x10] = 0.0;
      local_108[0x11] = 0.0;
      local_108[0x12] = 1.4013e-45;
      lVar21 = mobyutil::MB_randInt(6);
      uVar7 = *(undefined4 *)((int)local_108 + (int)(lVar21 << 2) + 0x34U);
      uVar10 = idol::GetAnimDuration(0x14);
      mobyutil::MB_SetAnimation(lVar9,uVar7,0,uVar10);
    }
  }
  if (*(short *)(uVar5 + 0x3c2) != 0) goto LAB_003ba494;
  if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
    if (iVar14 == 0) {
      fVar2 = *(float *)(uVar5 + 1000);
    }
    else {
      fVar2 = *(float *)(uVar5 + 1000) * 2.0;
    }
    if (dVar30 < (double)fVar2) {
      bVar17 = *(byte *)((int)this + 0xbc);
      if ((bVar17 & 1) == 0) {
        *(undefined4 *)(uVar5 + 0x3d0) = 0;
        uVar10 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar9,0x10,0,uVar10);
        walk::Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this + 0x20) = 10;
        *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 1;
      }
      else {
        if ((iVar14 == 0) && (*(int *)(uVar5 + 0x3dc) != -1)) {
          iVar12 = mobyutil::PointInsideComplexPoly
                             (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                              Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
          if (iVar12 == 0) goto LAB_003b916c;
          bVar17 = *(byte *)((int)this + 0xbc);
        }
        *(undefined1 *)((int)this + 0x20) = 5;
        *(byte *)((int)this + 0xbc) = bVar17 | 8;
      }
    }
  }
  else {
    uVar10 = idol::GetAnimDuration(10);
    mobyutil::MB_SetAnimation(lVar9,4,0,uVar10);
    *(undefined1 *)((int)this + 0x20) = 8;
  }
LAB_003b916c:
  if (((iVar14 == 0) && (dVar23 = (double)FUN_005e8588(lVar20,uVar22 + 0x3b0), 2.0 < dVar23)) &&
     (((double)*(float *)(uVar5 + 1000) < dVar30 ||
      ((*(int *)(uVar5 + 0x3dc) != -1 &&
       (iVar14 = mobyutil::PointInsideComplexPoly
                           (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                            Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)))))) {
    *(undefined1 *)((int)this + 0x20) = 6;
    *(byte *)((int)this + 0xbc) = *(byte *)((int)this + 0xbc) | 8;
  }
LAB_003ba494:
  mobyutil::MB_ColorDyingMoby(lVar9,uVar22 + 0xb0);
  uVar10 = 0;
  if (0 < *(int *)(uVar5 + 0x3e4)) {
    dVar23 = (double)FUN_005e8338((double)(*(float *)((int)this + 0x10) - g_heroPosition.x),
                                  (double)(*(float *)((int)this + 0x14) - g_heroPosition.y));
    mathfunc::cosf((float)dVar23);
    FUN_005e8338((double)(*(float *)((int)this + 0x10) - g_heroPosition.x),
                 (double)(*(float *)((int)this + 0x14) - g_heroPosition.y));
    FUN_005e8128();
    FUN_005e7f54(local_200,local_200,lVar20);
    *(float *)(uVar5 + 0x3e4) =
         *(float *)(uVar5 + 0x3e4) + -2.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
    mobyutil::CollMovingSphere
              (0x3fd0000000000000,0x3ff0000000000000,0x3fe8000000000000,0x3febecde60000000,lVar9,
               lVar20,local_200);
  }
  *(float *)(uVar5 + 0x3c8) = *(float *)(uVar5 + 0x3c8) * 0.96;
  fastfunc::FastQuaternionToEuler(auStack_2b0,1);
  lVar21 = uVar22 + 0x130;
  fastfunc::FastQuaternionToEuler(uVar10,lVar21,2);
  fastfunc::FastQuaternionMult(lVar21,lVar21,auStack_2b0);
  cVar1 = *(char *)((int)this + 0x20);
  if (cVar1 != '\t') {
    *(char *)(uVar5 + 0x3c1) = cVar1;
    cVar1 = *(char *)((int)this + 0x20);
  }
  if ((cVar1 != '\x05') && (*(char *)((int)this + 0xbc) != '\x06')) {
    fVar2 = DAT_0071f418 * 9.8 + *(float *)(uVar5 + 0x3e0);
    *(float *)(uVar5 + 0x3e0) = fVar2;
    dVar24 = 2.0;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) - (fVar2 - 2.0);
    dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
    fVar2 = (float)((double)*(float *)((int)this + 0x18) - dVar24);
    dVar30 = (double)fVar2;
    *(float *)((int)this + 0x18) = fVar2;
    if (dVar30 < dVar23) {
      *(float *)((int)this + 0x18) = (float)dVar23;
      *(undefined4 *)(uVar5 + 0x3e0) = 0;
      dVar30 = (double)*(float *)((int)this + 0x18);
    }
    if (dVar30 < dVar24) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby((MobyInstance *)this);
    }
  }
  return;
}



//==== 003ba6fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M564_003ba6fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M564_003ba6fc(void)

{
  DAT_00845bac = 0x10000;
  return;
}



//==== 003ba730  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M564_003ba730(void)
// callers(1): 003baaf0 mobyupdate_unsorted::UpdateMoby_564
// callees(2): 00105870 mobyutil::DamageSphereAtPos; 0010e030 mobyutil::MB_genericExplosion

void mobyupdate_helpers::M564_003ba730
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x78) + 0x38);
  fVar1 = 0.75;
  bVar4 = (uVar3 & 1) != 0;
  if (bVar4) {
    fVar1 = 2.0;
  }
  uVar7 = 0x4000000000000000;
  uVar8 = uVar7;
  if (bVar4) {
    uVar8 = 0x4010000000000000;
  }
  uVar5 = 0x3ff0000000000000;
  uVar6 = uVar5;
  if (bVar4) {
    uVar6 = uVar7;
  }
  fVar2 = 1.5;
  if ((uVar3 & 4) != 0) {
    fVar2 = 0.0;
  }
  dVar9 = (double)fVar2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  mobyutil::MB_genericExplosion
            (dVar9,0x3ff0000000000000,uVar8,uVar6,0x4022000000000000,(double)fVar1,
             0x4014000000000000,param_1,&stack0x00000040,param_1 + 0x10,1,0,0x14,6,0x20);
  if ((dVar9 != 0.0) && (g_heroType == '\x02')) {
    mobyutil::DamageSphereAtPos(uVar7,(double)DAT_00845bdc,uVar5,param_1,param_1 + 0x10,0,2);
  }
  return;
}



//==== 003ba908  ns=mobyupdate_helpers  size=0x1d4
// sig: undefined M564_003ba908(void)
// callers(1): 003baaf0 mobyupdate_unsorted::UpdateMoby_564
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44

void mobyupdate_helpers::M564_003ba908(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [40];
  
  mobyutil::MB_randSphere
            ((double)(mobyutil::g_FrameTime * 0.1),(double)(mobyutil::g_FrameTime * 0.2),auStack_80)
  ;
  uVar4 = 0;
  uVar3 = 0x3ff0000000000000;
  mobyutil::MB_randRangeFloat(0.0,1.0);
  dVar5 = 20.5;
  iVar2 = partupd::SpawnPart_44
                    (0x40e3880000000000,0x408f400000000000,uVar3,0xbf2a36e2e0000000,uVar4,local_70,
                     auStack_80,(int)(animationSpeed * 20.5),0x7f,FUN_00606060,3);
  if (iVar2 != 0) {
    uVar1 = *DAT_00a52860;
    *(undefined1 *)(iVar2 + 3) = 0x44;
    *(undefined1 *)(iVar2 + 2) = uVar1;
  }
  partupd::SpawnPart_21
            (0x40d3880000000000,local_70,local_60,0x4f007fff,0x1fffffff,0x4f000000,
             (int)((double)animationSpeed * dVar5),1);
  return;
}



//==== 003baaf0  ns=mobyupdate_unsorted  size=0x9ac
// sig: undefined UpdateMoby_564(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 003ba730 mobyupdate_helpers::M564_003ba730; 003ba908 mobyupdate_helpers::M564_003ba908; 00500b64 fastfunc::FastEulerToMtx; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 564 */

undefined ** mobyupdate_unsorted::UpdateMoby_564(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  PlayerState PVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined **ppuVar23;
  longlong lVar21;
  longlong lVar22;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  MobyInstance *pMVar28;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x220;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar19;
  puVar14[0x46] = in_LR;
  puVar14[0x3d] = in_f25;
  puVar14[0x3e] = in_f26;
  puVar14[0x3f] = in_f27;
  puVar14[0x40] = in_f28;
  puVar14[0x41] = in_f29;
  puVar14[0x42] = in_f30;
  puVar14[0x43] = in_f31;
  puVar14[0x3c] = unaff_r31;
  puVar14[0x3b] = unaff_r30;
  PVar18 = g_heroState;
  pfVar9 = (float *)moby->pVar;
  uVar30 = ZEXT48(pfVar9);
  puVar14[0x3a] = unaff_r29;
  puVar14[0x39] = unaff_r28;
  puVar14[0x38] = unaff_r27;
  if ((PVar18 == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
    ppuVar23 = (undefined **)mobyfunc::DeleteMoby(moby);
  }
  else {
    ppuVar23 = (undefined **)(uint)moby->state;
    if (moby->state == 0) {
      fVar2 = (moby->pos).y;
      *(f32 *)(puVar14 + 0x12) = (moby->pos).x;
      fVar3 = (moby->pos).z;
      *(f32 *)((int)puVar14 + 0x94) = fVar2;
      fVar2 = (moby->pos).w;
      *(f32 *)(puVar14 + 0x13) = fVar3;
      fVar10 = pfVar9[0xb];
      *(f32 *)((int)puVar14 + 0x9c) = fVar2;
      dVar32 = (double)fastfunc::FastIntToDouble(fVar10);
      dVar33 = (double)fastfunc::FastIntToDouble(pfVar9[0xc]);
      dVar35 = 1.0;
      dVar36 = (double)pfVar9[7];
      dVar39 = (double)(pfVar9[4] - (moby->pos).x);
      dVar38 = (double)(pfVar9[5] - (moby->pos).y);
      dVar37 = (double)(pfVar9[6] - (moby->pos).z);
      dVar34 = (double)(float)(dVar32 / dVar33);
      if (1.0 - (double)(float)(dVar32 / dVar33) < 0.0) {
        dVar34 = dVar35;
      }
      dVar32 = (double)fastfunc::FastIntToDouble((int)pfVar9[0xd] - (int)pfVar9[0xb]);
      dVar32 = (double)(float)(dVar35 / dVar32);
      dVar33 = 0.0;
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      dVar41 = (double)(float)(dVar39 * dVar32);
      dVar40 = (double)(float)(dVar38 * dVar32);
      dVar37 = (double)(float)(dVar37 * dVar32);
      *(float *)((int)puVar14 + 0x14c) = (float)(dVar39 * dVar32);
      *(float *)(puVar14 + 0x2a) = (float)(dVar38 * dVar32);
      *(float *)((int)puVar14 + 0x154) = (float)(ABS(dVar41) - ABS(dVar40));
      dVar35 = 0.7853981852531433;
      uVar25 = (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)((int)puVar14 + 0x14c));
      if (*(float *)((int)puVar14 + 0x154) - 0.0 < 0.0) {
        dVar32 = ABS(dVar40);
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar10 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar38 = ABS((double)*(float *)(puVar14 + 0x2a));
      if (*(float *)((int)puVar14 + 0x154) - 0.0 < 0.0) {
        dVar38 = ABS(dVar41);
      }
      dVar39 = dVar33;
      if (0.0 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 0x88;
        lVar29 = uVar19 - 0x78;
        lVar31 = 2;
        fVar1 = (float)(dVar38 - dVar32) / (float)(dVar38 + dVar32);
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x1a4) = fVar1;
        *(float *)((int)puVar14 + 0x19c) = fVar1;
        *(float *)(puVar14 + 0x34) = fVar1;
        *(float *)(puVar14 + 0x33) = fVar1;
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar4;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar1;
        *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar1 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x198) = *(float *)((int)lVar21 + 0x188) * fVar1 * fVar1;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0x88;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar1 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x198) = *(float *)((int)lVar21 + 0x198) * fVar1;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar21 = lVar22;
        dVar32 = dVar33;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar15 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x198)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar39 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar10);
      }
      *(float *)(puVar14 + 0x11) = (float)dVar39;
      fastfunc::FastEulerToMtx(uVar19 - 0x180,uVar19 - 0x1a0);
      fastfunc::FastNormalizeRMtx4(uVar19 - 0x120,uVar19 - 0x180);
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      *(undefined4 *)(puVar14 + 0x11) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      *(float *)(puVar14 + 0x11) = pfVar9[9];
      *(float *)((int)puVar14 + 0x84) = pfVar9[10];
      fastfunc::FastEulerToMtx(uVar19 - 0x150,uVar19 - 0x1a0);
      fVar10 = (float)((double)*(float *)((int)puVar14 + 0x124) * dVar37 +
                      (double)(float)((double)*(float *)((int)puVar14 + 0x104) * dVar41 +
                                     (double)(float)((double)*(float *)((int)puVar14 + 0x114) *
                                                    dVar40)));
      fVar7 = (float)((double)*(float *)(puVar14 + 0x24) * dVar37 +
                     (double)(float)((double)*(float *)(puVar14 + 0x20) * dVar41 +
                                    (double)(float)((double)*(float *)(puVar14 + 0x22) * dVar40)));
      fVar1 = (float)((double)*(float *)(puVar14 + 0x25) * dVar37 +
                     (double)(float)((double)*(float *)(puVar14 + 0x21) * dVar41 +
                                    (double)(float)((double)*(float *)(puVar14 + 0x23) * dVar40)));
      fVar17 = *(float *)((int)puVar14 + 0xf4) * fVar1 +
               *(float *)((int)puVar14 + 0xd4) * fVar7 + *(float *)((int)puVar14 + 0xe4) * fVar10;
      fVar16 = *(float *)(puVar14 + 0x1e) * fVar1 +
               *(float *)(puVar14 + 0x1a) * fVar7 + *(float *)(puVar14 + 0x1c) * fVar10;
      fVar6 = *(float *)(puVar14 + 0x1f) * fVar1 +
              *(float *)(puVar14 + 0x1b) * fVar7 + *(float *)(puVar14 + 0x1d) * fVar10;
      fVar4 = pfVar9[1];
      fVar5 = pfVar9[2];
      *(float *)(puVar14 + 0xe) =
           (float)((double)(float)((double)(*(float *)(puVar14 + 0x18) * fVar6 +
                                           *(float *)(puVar14 + 0x14) * fVar16 +
                                           *(float *)(puVar14 + 0x16) * fVar17) - (double)*pfVar9) *
                   dVar34 + (double)*pfVar9);
      *(float *)((int)puVar14 + 0x74) =
           (float)((double)((*(float *)((int)puVar14 + 0xc4) * fVar6 +
                            *(float *)((int)puVar14 + 0xa4) * fVar16 +
                            *(float *)((int)puVar14 + 0xb4) * fVar17) - fVar4) * dVar34 +
                  (double)pfVar9[1]);
      fVar4 = pfVar9[2];
      *(float *)((int)puVar14 + 0x7c) =
           *(float *)((int)puVar14 + 0xbc) * fVar17 +
           *(float *)((int)puVar14 + 0xcc) * fVar6 +
           *(float *)((int)puVar14 + 0xac) * fVar16 +
           *(float *)((int)puVar14 + 0xec) * fVar10 +
           *(float *)((int)puVar14 + 0xfc) * fVar1 +
           *(float *)((int)puVar14 + 0xdc) * fVar7 +
           (float)((double)*(float *)((int)puVar14 + 0x11c) * dVar40 +
                  (double)(float)((double)*(float *)((int)puVar14 + 300) * dVar37 +
                                 (double)(float)((double)*(float *)((int)puVar14 + 0x10c) * dVar41 +
                                                dVar36)));
      *(float *)(puVar14 + 0xf) =
           (float)((double)((*(float *)(puVar14 + 0x19) * fVar6 +
                            *(float *)(puVar14 + 0x15) * fVar16 +
                            *(float *)(puVar14 + 0x17) * fVar17) - fVar5) * dVar34 + (double)fVar4);
      mobyupdate_helpers::M564_003ba908(lVar20,uVar19 - 0x1b0);
      uVar11 = *(uint *)(puVar14 + 0xe);
      dVar36 = (double)*(float *)(puVar14 + 0xe);
      uVar12 = *(uint *)((int)puVar14 + 0x74);
      dVar37 = (double)*(float *)((int)puVar14 + 0x74);
      dVar38 = ABS(dVar36);
      dVar34 = ABS(dVar37);
      fVar10 = (moby->pos).y;
      fVar7 = (moby->pos).z;
      uVar13 = *(uint *)(puVar14 + 0xf);
      fVar1 = *(float *)(puVar14 + 0xf);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar36);
      *(float *)(puVar14 + 0x29) = (float)(dVar38 - dVar34);
      (moby->pos).y = (float)((double)fVar10 + dVar37);
      (moby->pos).z = (float)((double)fVar7 + (double)fVar1);
      fVar10 = (moby->rotation).x;
      uVar25 = (ulonglong)(uVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1e) & 2 | (ulonglong)(uVar12 >> 0x1d) & 4;
      dVar32 = dVar38;
      if ((double)*(float *)(puVar14 + 0x29) - dVar33 < 0.0) {
        dVar32 = dVar34;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar14 + 0x29) - dVar33 < 0.0) {
        dVar34 = dVar38;
      }
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar38 = dVar33;
      if (dVar33 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 0xa8;
        lVar29 = uVar19 - 0x98;
        lVar31 = 2;
        fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x184) = fVar5;
        *(float *)((int)puVar14 + 0x17c) = fVar5;
        *(float *)(puVar14 + 0x30) = fVar5;
        *(float *)(puVar14 + 0x2f) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
        *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5;
        *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar21 + 0x178) = *(float *)((int)lVar21 + 0x168) * fVar5 * fVar5;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0xa8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x178) = *(float *)((int)lVar21 + 0x178) * fVar5;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar21 = lVar22;
        dVar34 = dVar33;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar15 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar38 = (double)((float)(dVar34 + dVar35) * fVar7 + fVar4);
      }
      (moby->rotation).z = (float)dVar38;
      dVar34 = ABS((double)fVar1);
      fVar7 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar37 * dVar37)));
      dVar36 = ABS((double)fVar7);
      *(float *)(puVar14 + 0x28) = fVar7;
      *(float *)((int)puVar14 + 0x144) = (float)(dVar36 - dVar34);
      uVar25 = (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar32 = ABS((double)*(float *)(puVar14 + 0x28));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar33 < 0.0) {
        dVar32 = dVar34;
      }
      fVar1 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar33 < 0.0) {
        dVar34 = dVar36;
      }
      if (dVar33 < dVar32) {
        lVar21 = uVar19 - 0x210;
        lVar26 = uVar19 - 200;
        lVar29 = uVar19 - 0xb8;
        lVar31 = 2;
        fVar4 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x164) = fVar4;
        *(float *)((int)puVar14 + 0x15c) = fVar4;
        *(float *)(puVar14 + 0x2c) = fVar4;
        *(float *)(puVar14 + 0x2b) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar5;
        *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar4;
        *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar21 + 0x158) = *(float *)((int)lVar21 + 0x148) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 200;
        pfVar27 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar26 = lVar29;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar21 + 0x158) = *(float *)((int)lVar21 + 0x158) * fVar4;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        do {
          iVar24 = (int)lVar22;
          iVar15 = (int)lVar29;
          lVar22 = lVar22 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar24 + 0x158)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar33 = (double)((float)(dVar33 + dVar35) * fVar7 + fVar1);
      }
      (moby->rotation).y = (float)-dVar33;
      dVar34 = (double)fastfunc::FastWrapRot(fVar10,mobyutil::g_FrameTime * 18.849556);
      fVar10 = pfVar9[0xb];
      (moby->rotation).x = (float)dVar34;
      pfVar9[0xb] = (float)((int)fVar10 + 1);
      iVar24 = collproc::CollLine(uVar19 - 400,lVar20 + 0x10,0,lVar20,0);
      auVar43 = loadVectorLeftIndexed(0x2c,uVar30);
      auVar42 = loadVectorLeftIndexed(0x34,uVar30);
      auVar44 = loadVectorRightIndexed(0x3c,uVar30);
      auVar45 = loadVectorRightIndexed(0x44,uVar30);
      pMVar28 = (MobyInstance *)0x2c;
      if ((iVar24 != 0) && (pMVar28 = CollOutput.pMoby, CollOutput.pMoby != (MobyInstance *)0x0)) {
        MVar8 = (CollOutput.pMoby)->oClass;
        pMVar28 = (MobyInstance *)(uint)MVar8;
        if (MVar8 == DRONE) {
          pMVar28 = (MobyInstance *)((uint)pfVar9[0xe] & 4);
          pfVar9[0xe] = (float)pMVar28;
        }
        else if (MVar8 != GIANT_CLANK) {
          iVar24 = 0;
        }
      }
      if ((pfVar9[0xb] == pfVar9[0xd]) || (iVar24 != 0)) {
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar14 + 0xe);
        *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(puVar14 + 0xf);
        *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)((int)puVar14 + 0x74);
        *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)((int)puVar14 + 0x7c);
        mobyupdate_helpers::M564_003ba730(lVar20,pMVar28,puVar14[8],puVar14[9],0x3c,0x44);
        ppuVar23 = (undefined **)mobyfunc::DeleteMoby(moby);
      }
      else {
        ppuVar23 = (undefined **)((uint)pfVar9[0xe] & 2);
        if (ppuVar23 != (undefined **)0x0) {
          auVar43 = vectorSubtractUnsignedWordModulo(auVar42 | auVar45,auVar43 | auVar44);
          ppuVar23 = &PTR_DAT_00840000;
          auVar42 = ZEXT416(0xffffffff);
          auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar43,0);
          auVar43 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar44 = loadVectorLeftIndexed(0x5bd4,0x840000);
          auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar43 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar43);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                     auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            ppuVar23 = (undefined **)RegisterFuncForMoby(&PTR_M566_003bb988_0070d2e0,moby);
          }
        }
      }
    }
  }
  return ppuVar23;
}



//==== 003bb4a8  ns=Global  size=0x4b8
// sig: undefined FUN_003bb4a8(void)
// callers(2): 00269420 mobyupdate_helpers::M1392_00269420; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 0015d12c sound::PlayMobySound

MobyInstance *
FUN_003bb4a8(double param_1,double param_2,f32 *param_3,float *param_4,float *param_5,
            undefined8 param_6,undefined8 param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMoby;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1a] = unaff_r26;
  puVar6[0x19] = unaff_r25;
  pMoby = mobyfunc::CreateMoby(ROCKET_0234);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    mobyfunc::SetColorOfMoby(pMoby,0xc0,0xc0,0xc0);
    pfVar15 = (float *)pMoby->pVar;
    pMoby->scale = pMoby->scale * DAT_00845bd0;
    (pMoby->pos).x = *param_3;
    (pMoby->pos).y = param_3[1];
    (pMoby->pos).z = param_3[2];
    (pMoby->pos).w = param_3[3];
    *pfVar15 = *param_4;
    pfVar15[1] = param_4[1];
    pfVar15[2] = param_4[2];
    pfVar15[3] = param_4[3];
    pfVar15[4] = *param_5;
    pfVar15[5] = param_5[1];
    pfVar15[6] = param_5[2];
    fVar1 = param_5[3];
    pfVar15[0xb] = 0.0;
    pfVar15[7] = fVar1;
    pfVar15[0xd] = param_8;
    pfVar15[0xc] = (float)((int)param_8 >> 1);
    pfVar15[9] = (float)param_1;
    pfVar15[10] = (float)param_2;
    pfVar15[0xe] = param_9;
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
    *(float *)(puVar6 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar7 = fVar1;
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0x100;
      lVar16 = uVar10 - 100;
      lVar14 = uVar10 - 0x74;
      lVar17 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)(puVar6 + 0x14) = fVar4;
      *(float *)((int)puVar6 + 0xa4) = fVar4;
      *(float *)((int)puVar6 + 0x9c) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar4;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar4 * fVar4;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x74;
      pfVar15 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar14 = lVar16;
      do {
        fVar4 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar14 = 2;
      lVar11 = lVar12;
      fVar4 = fVar1;
      do {
        iVar8 = (int)lVar11;
        iVar9 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar8 + 0x9c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar7 = (fVar4 + 0.7853982) * fVar5 + fVar2;
    }
    (pMoby->rotation).z = fVar7;
    fVar4 = param_4[2];
    fVar5 = ABS(param_4[2]);
    fVar3 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar2 = ABS(fVar3);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2 - fVar5;
    uVar13 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)((int)puVar6 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)((int)puVar6 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0x100;
      lVar16 = uVar10 - 0x84;
      lVar14 = uVar10 - 0x94;
      lVar17 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x11) = fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)((int)puVar6 + 0x84) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar4;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar4 * fVar4;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x94;
      pfVar15 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar14 = lVar16;
      do {
        fVar4 = *pfVar15;
        fVar5 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    (pMoby->rotation).y = -fVar1;
    sound::PlayMobySound(0,0,pMoby);
  }
  return pMoby;
}



//==== 003bb988  ns=mobyupdate_helpers  size=0x250
// sig: undefined M566_003bb988(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502648 fastfunc::FastAddRots; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M566_003bb988(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar14 = uVar6 - 0x120;
  puVar4 = (ulonglong *)lVar14;
  *puVar4 = uVar6;
  puVar4[0x26] = in_LR;
  puVar4[0x22] = unaff_r30;
  iVar3 = *(int *)(param_1 + 0x78);
  puVar4[0x23] = unaff_r31;
  puVar4[0x20] = (longlong)(int)(*(uint *)(iVar3 + 0x2c) & 0xf);
  dVar18 = (double)fastfunc::FastAddRots((float)(longlong)puVar4[0x20] * 0.0625 * 6.28318);
  dVar20 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar20 = dVar18;
  }
  dVar19 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar20 < 0.0) {
    dVar19 = dVar20;
  }
  dVar20 = (double)(float)(dVar19 * dVar19);
  dVar21 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
  dVar18 = (double)(float)(dVar20 * dVar21);
  uVar8 = fastfunc::FastLerpColor
                    ((double)(((float)(dVar20 * dVar18) * 2.601887e-06 +
                               (float)(dVar18 * -0.0001980741071747616 +
                                      (double)(float)(dVar21 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar20 * dVar19
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar19))
                                      ) + 1.0) * 0.5),DAT_00845c48,DAT_00845c4c);
  uVar7 = draw::GetEffectTex(0xd);
  puVar4[0x1d] = uVar7;
  uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x1e] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x1c] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_010c9f4c,DAT_00845c40,DAT_010c9f50,DAT_00845c44,0x80);
  puVar4[0x1f] = uVar7;
  lVar10 = uVar6 - 0xb0;
  pfVar9 = (float *)&DAT_00845be0;
  puVar13 = &DAT_00845c20;
  puVar12 = &DAT_00845c24;
  lVar17 = 4;
  lVar15 = lVar14;
  lVar16 = lVar14;
  do {
    pfVar11 = (float *)lVar10;
    *pfVar11 = *pfVar9 + *(float *)(iVar3 + 0x10);
    pfVar11[1] = pfVar9[1] + *(float *)(iVar3 + 0x14);
    pfVar11[2] = pfVar9[2] + *(float *)(iVar3 + 0x18);
    pfVar5 = pfVar9 + 3;
    pfVar9 = pfVar9 + 4;
    pfVar11[3] = *pfVar5;
    uVar1 = *puVar13;
    lVar10 = lVar10 + 0x10;
    *(undefined4 *)((int)lVar16 + 0x7c) = 0x3f800000;
    puVar13 = puVar13 + 2;
    *(undefined4 *)((int)lVar15 + 0xb0) = uVar8;
    lVar16 = lVar16 + 0x10;
    uVar2 = *puVar12;
    lVar15 = lVar15 + 4;
    *(undefined4 *)((int)lVar14 + 0xc0) = uVar1;
    puVar12 = puVar12 + 2;
    *(undefined4 *)((int)lVar14 + 0xc4) = uVar2;
    lVar14 = lVar14 + 8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  draw::FastDrawQuad(uVar6 - 0xb0,0,0,EffectTexHeaders,9);
  return;
}



//==== 003bbbd8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M566_003bbbd8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M566_003bbbd8(void)

{
  DAT_00845c9c = 0x10000;
  return;
}



//==== 003bbbf0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_566(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 566 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_566(MobyInstance *moby)

{
  return moby;
}



//==== 003bbc08  ns=Global  size=0x14c
// sig: undefined FUN_003bbc08(void)
// callers(2): 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 00438d20 mobyupdate_unsorted::UpdateMoby_738
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_003bbc08(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  MobyInstance *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar3 = 0x70;
  auVar6._0_4_ = param_5;
  auVar6._4_4_ = param_5;
  auVar6._8_4_ = param_5;
  auVar6._12_4_ = param_5;
  pMVar4 = mobyfunc::CreateMoby(ROCKET_0237);
  if (pMVar4 != (MobyInstance *)0x0) {
    auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = ZEXT416(0xffffffff);
    auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\x01';
    puVar1 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_3;
    (pMVar4->pos).y = param_3[1];
    (pMVar4->pos).z = param_3[2];
    (pMVar4->pos).w = param_3[3];
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    auVar6 = loadVectorLeftIndexed(uVar3,0x3bbc00);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar5,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar5 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar5);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x14,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 5) & 0xfffffffc) = uVar2;
    puVar1[4] = param_4;
    puVar1[6] = (float)param_1;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 003bbde8  ns=mobyupdate_unsorted  size=0x6ac
// sig: undefined UpdateMoby_567(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 567 */

void mobyupdate_unsorted::UpdateMoby_567(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  int iVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
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
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x2a] = in_LR;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x25] = unaff_r31;
  bVar2 = moby->state;
  puVar11[0x24] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  puVar11[0x21] = unaff_r27;
  puVar11[0x20] = unaff_r26;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      *(float *)(puVar11 + 0xe) = fVar3;
      fVar5 = (moby->pos).z;
      *(float *)((int)puVar11 + 0x74) = fVar4;
      fVar6 = (moby->pos).w;
      *(float *)(puVar11 + 0xf) = fVar5;
      *(f32 *)((int)puVar11 + 0x7c) = fVar6;
      (moby->pos).x = fVar3 + *pfVar8;
      (moby->pos).y = fVar4 + pfVar8[1];
      (moby->pos).z = fVar5 + pfVar8[2];
      fVar3 = *pfVar8;
      fVar4 = pfVar8[1];
      fVar7 = ABS(*pfVar8);
      fVar5 = ABS(pfVar8[1]);
      *(float *)(puVar11 + 0x18) = fVar7 - fVar5;
      dVar27 = 0.0;
      uVar18 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar4 >> 0x1d) & 4;
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = fVar7;
      if (*(float *)(puVar11 + 0x18) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      if (*(float *)(puVar11 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      fVar7 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar26 = dVar27;
      if (0.0 < fVar4) {
        lVar20 = uVar14 - 0x130;
        lVar22 = uVar14 - 0x6c;
        lVar19 = uVar14 - 0x7c;
        lVar23 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x1a) = fVar4;
        *(float *)(puVar11 + 0x19) = fVar4;
        *(float *)((int)puVar11 + 0xcc) = fVar4;
        *(float *)((int)puVar11 + 0xc4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x19) * fVar5;
        *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar4;
        *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xb4) * fVar4 * fVar4;
          iVar17 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar20 = uVar14 - 0x7c;
        lVar23 = 4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar22 = lVar20;
        lVar19 = lVar1;
        do {
          fVar4 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar19 = 2;
        lVar22 = lVar1;
        do {
          iVar17 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar12 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xc4)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar7);
      }
      (moby->rotation).z = (float)dVar26;
      lVar22 = lVar15 + 0x10;
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      iVar17 = mobyutil::MB_randRange(0xf,0x16);
      puVar11[0x1d] = (longlong)iVar17;
      dVar26 = 0.5;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + 0.5));
      uVar9 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar16 = mobyutil::MB_randRange(0x14,0x23);
      partupd::SpawnPart_4(lVar22,uVar14 - 0xc0,0x6f00afff,0xff,uVar9,0x28,uVar16,1);
      iVar17 = mobyutil::MB_randRange(0x1e,0x3c);
      puVar11[0x1d] = (longlong)iVar17;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + dVar26));
      uVar9 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar16 = mobyutil::MB_randRange(0x32,0x4b);
      partupd::SpawnPart_4(lVar22,uVar14 - 0xc0,0x1fffffff,0x4f4f4f,uVar9,0x28,uVar16,0);
      dVar24 = (double)mobyutil::GetGroundZ(dVar26,lVar22,0);
      dVar25 = (double)(moby->pos).z;
      fVar3 = pfVar8[6];
      dVar26 = dVar27;
      if (fVar3 <= (float)(dVar25 - dVar24)) {
        if ((double)(DAT_00969f88 + fVar3) <= dVar25) {
          dVar26 = -(double)(DAT_0071f418 * 10.8 - pfVar8[2]);
        }
      }
      else {
        (moby->pos).z = (float)(dVar25 + (double)(fVar3 - (float)(dVar25 - dVar24)));
      }
      pfVar8[2] = (float)dVar26;
      iVar17 = collproc::CollLine(lVar22,uVar14 - 0xd0,0,pfVar8[4],0);
      if (iVar17 != 0) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::SetCollDamIn
                    (0x3ff0000000000000,uVar14 - 0xb0,lVar15,0x10001,&DAT_003bbd60,pfVar8);
          pMVar13 = CollOutput.pMoby;
          auVar38 = ZEXT416(0xffffffff);
          auVar28 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = ZEXT416(0xfffffff0);
          auVar29 = ZEXT416(0);
          auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar32 = loadVectorLeftIndexed(0x94,lVar1);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar29);
          auVar31 = loadVectorLeftIndexed(0x90,lVar1);
          auVar29 = loadVectorLeftIndexed(0xa6,lVar15);
          auVar29 = vectorShiftRightWord
                              (auVar29,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar28 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar28);
          auVar38 = auVar33;
          if ((double)SQRT(*(float *)(puVar11 + 0x12) * *(float *)(puVar11 + 0x12) +
                           *(float *)((int)puVar11 + 0x94) * *(float *)((int)puVar11 + 0x94)) !=
              dVar27) {
            auVar30 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar28);
            auVar38 = ZEXT416(0xffffffff);
            auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar34 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(8,0x3bbd60);
            auVar34 = loadVectorLeftIndexed(0x10,0x3bbd60);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar37 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar34 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar33);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar35);
            auVar38 = ZEXT416(0xffffffff);
            auVar41 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar38 = ZEXT416(0xffffffff);
            auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar30,auVar37);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar30);
            auVar34 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            auVar38 = ZEXT416(0xffffffff);
            auVar35 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar41 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar39);
            auVar39 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar40);
            auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar30,auVar37);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar30);
            auVar30 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar38,auVar34);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar35);
            auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar38,auVar37);
            auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar33,auVar38);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar32,auVar28,auVar41);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar28,auVar30);
          }
          auVar28 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar9 = storeVectorElementWordIndexed
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x90,
                             lVar1);
          *(undefined4 *)(puVar11 + 0x12) = uVar9;
          uVar9 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x94,
                             lVar1);
          *(undefined4 *)((int)puVar11 + 0x94) = uVar9;
          *(undefined4 *)(puVar11 + 0x13) = 0x3f800000;
          auVar28 = vectorSplatHalfWord(auVar29,1);
          *(undefined4 *)((int)puVar11 + 0x9c) = 0x45afdf66;
          *(undefined1 *)(puVar11 + 0x15) = 0;
          *(undefined1 *)((int)puVar11 + 0xa9) = 1;
          uVar10 = storeVectorElementHalfWordIndexed(auVar28,0xaa,lVar1);
          *(undefined2 *)((int)puVar11 + 0xaa) = uVar10;
          auVar31 = loadVectorLeftIndexed(0x50,0x3bbd60);
          auVar28 = vectorPermute(auVar33,auVar38,_DAT_003bbd90);
          auVar38 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar28 = vectorPermute(auVar28,_DAT_003bbd80,_DAT_003bbda0);
          auVar38 = vectorPermute(auVar29,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                          auVar38 << 0x60,_DAT_003bbdc0);
          auVar38 = vectorPermute(auVar38,*(undefined1 (*) [16])(puVar11 + 0x14),_DAT_003bbdd0);
          *(undefined1 (*) [16])(puVar11 + 8) = auVar28;
          *(undefined4 *)((int)puVar11 + 0x6c) = *(undefined4 *)((int)puVar11 + 0xbc);
          *(undefined4 *)(puVar11 + 0xd) = *(undefined4 *)(puVar11 + 0x17);
          *(undefined4 *)((int)puVar11 + 100) = *(undefined4 *)((int)puVar11 + 0xb4);
          *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(puVar11 + 0x16);
          *(undefined1 (*) [16])(puVar11 + 10) = auVar38;
          mobyutil::CollDamageMobyDirect
                    (pMVar13,0xb0,puVar11[8],puVar11[9],puVar11[10],puVar11[0xb],puVar11[0xc],
                     puVar11[0xd]);
        }
        moby->state = '\x02';
      }
      iVar17 = fastfunc::FastDecTimerS32(pfVar8 + 5);
      if (iVar17 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_003bbd60,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003bc494  ns=mobyupdate_helpers  size=0x14
// sig: undefined M568_003bc494(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M568_003bc494(void)

{
  DAT_00845d10 = 0x10000;
  return;
}



//==== 003bc4d0  ns=mobyupdate_helpers  size=0x250
// sig: undefined M568_003bc4d0(void)
// callers(1): 003bc760 mobyupdate_unsorted::UpdateMoby_568
// callees(3): 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M568_003bc4d0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x78);
  if ((cVar1 != '\0' && cVar1 != '\x05') && (cVar1 != '\x04')) {
    if ((g_heroState != MOVEMENT_LOCKED) || (cVar1 == '\x04')) {
      iVar4 = mobyutil::MB_damage(param_1,0x330000,0);
      *(undefined1 *)(param_1 + 0xa4) = 0xff;
      if (((DAT_00969f1c == param_1) || (DAT_00969f20 == param_1)) || (*(int *)(iVar5 + 0x19c) != 0)
         ) {
        mobyutil::MB_genericExplosion
                  (0x3ff8000000000000,0x3ff0000000000000,0x4008000000000000,0x3ff8000000000000,
                   0x4022000000000000,0x3ff8000000000000,0,param_1,&DAT_00a15d30,0,1,
                   0xffffffffffffffff,0x14,6,0x20);
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined1 *)(param_1 + 0x20) = 5;
        *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
      }
      else {
        iVar5 = fastfunc::FastDecTimerS32(iVar5 + 0x194);
        if (((iVar5 != 0) || (iVar4 != 0)) ||
           ((*(char *)(param_1 + 0x20) == '\x01' &&
            (fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y,
            fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x,
            SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)))) {
          mobyutil::MB_genericExplosion
                    (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000
                     ,0,param_1,&DAT_00a15d30,0,1,0xffffffffffffffff,5,2,8);
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined1 *)(param_1 + 0x20) = 5;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0x20) = 5;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
    }
  }
  return;
}



//==== 003bc760  ns=mobyupdate_unsorted  size=0x5cc
// sig: undefined UpdateMoby_568(MobyInstance * moby)
// callers(0): 
// callees(6): 000fddc0 mobyutil::MB_SetAnimation; 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 001118d8 mobyutil::MB_getTarget; 003bc4d0 mobyupdate_helpers::M568_003bc4d0; 0048c188 FUN_0048c188

/* Moby 568 */

void mobyupdate_unsorted::UpdateMoby_568(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  f32 fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_a0 [64];
  MobyInstance *local_60;
  
  pvVar6 = moby->pVar;
  mobyupdate_helpers::M568_003bc4d0();
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar16 = FUN_0048c188(moby,(int)pvVar6 + 0x110);
    if (iVar16 != 0) {
      moby->state = '\x03';
      *(undefined2 *)((int)pvVar6 + 200) = 0;
    }
  }
  else if (uVar2 == '\x03') {
    if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 12.5));
    }
    if (moby->enabled != '\0') {
      dVar21 = 6.0;
      iVar16 = mobyutil::MB_getTarget(0x4018000000000000,moby,&DAT_003bc720,auStack_a0);
      if ((iVar16 != 2) && (local_60 != (MobyInstance *)0x0)) {
        dVar19 = (double)(moby->pos).y;
        dVar18 = (double)(local_60->pos).y;
        dVar20 = (double)(moby->pos).x;
        fVar3 = (float)(dVar19 - dVar18);
        dVar17 = (double)(local_60->pos).x;
        fVar4 = (float)(dVar20 - dVar17);
        if ((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < dVar21) {
          fVar4 = (float)(dVar18 - dVar19);
          fVar1 = (float)(dVar17 - dVar20);
          dVar17 = (double)DAT_0071f418;
          dVar18 = (double)(moby->pos).z;
          fVar3 = (float)(dVar17 * dVar21);
          dVar21 = (double)(mobyutil::g_FrameTime * 3.0);
          fVar22 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
          fVar10 = fVar4;
          fVar11 = fVar1;
          if ((fVar3 < fVar22) && (fVar10 = 0.0, fVar11 = fVar10, fVar22 != 0.0)) {
            fVar3 = fVar3 / fVar22;
            fVar10 = fVar4 * fVar3;
            fVar11 = fVar1 * fVar3;
          }
          fVar10 = *(float *)((int)pvVar6 + 0x44) + fVar10;
          fVar11 = *(float *)((int)pvVar6 + 0x40) + fVar11;
          *(float *)((int)pvVar6 + 0x40) = fVar11;
          *(float *)((int)pvVar6 + 0x44) = fVar10;
          *(float *)((int)pvVar6 + 0x48) =
               (float)(dVar17 * -10.0 + (double)*(float *)((int)pvVar6 + 0x48));
          dVar17 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10);
          if (dVar21 < dVar17) {
            fVar11 = fVar11 * (float)(dVar21 / dVar17);
            fVar10 = fVar10 * (float)(dVar21 / dVar17);
            fVar3 = 0.0;
            if (0.0 - dVar17 < 0.0) {
              fVar3 = fVar11;
            }
            fVar4 = 0.0;
            if (0.0 - dVar17 < 0.0) {
              fVar4 = fVar10;
            }
            if (dVar17 - 0.0 < 0.0) {
              fVar3 = fVar11;
            }
            if (dVar17 - 0.0 < 0.0) {
              fVar4 = fVar10;
            }
            *(float *)((int)pvVar6 + 0x40) = fVar3;
            *(float *)((int)pvVar6 + 0x44) = fVar4;
          }
          dVar17 = 0.0;
          mobyutil::MB_MoveAndCollide(0,0x3fe0000000000000,0,moby,(int)pvVar6 + 0x40);
          *(float *)((int)pvVar6 + 0x40) = (float)((double)(moby->pos).x - dVar20);
          *(float *)((int)pvVar6 + 0x44) = (float)((double)(moby->pos).y - dVar19);
          fVar3 = (float)((double)(moby->pos).z - dVar18);
          dVar18 = (double)fVar3;
          *(float *)((int)pvVar6 + 0x48) = fVar3;
          *(f32 *)((int)pvVar6 + 0x4c) = (moby->pos).w;
          if (dVar18 <= dVar17) {
            if (dVar18 < -dVar21) {
              *(float *)((int)pvVar6 + 0x48) = (float)-dVar21;
            }
          }
          else {
            *(undefined4 *)((int)pvVar6 + 0x48) = 0;
          }
          if ((local_60 != g_heroMobyPtr) &&
             (fVar3 = (local_60->pos).y - (moby->pos).y, fVar4 = (local_60->pos).x - (moby->pos).x,
             fVar1 = (local_60->pos).z - (moby->pos).z,
             SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) < 2.0)) {
            *(undefined4 *)((int)pvVar6 + 0x19c) = 1;
          }
        }
      }
    }
  }
  else if (uVar2 == '\x02') {
    fVar22 = mobyutil::Delt(0.0,DAT_00845d40 * 2.0 * DAT_0071f418,(float *)((int)pvVar6 + 0x188));
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar1 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar1 = fVar3;
    }
    fVar10 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar10 = fVar4;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar1 < 0.0) {
      fVar11 = fVar1;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
      fVar3 = fVar10;
    }
    fVar1 = fVar11 * fVar11;
    fVar10 = fVar3 * fVar3;
    fVar14 = fVar1 * fVar1 * fVar11;
    fVar4 = (moby->pos).x;
    uVar2 = moby->animationId;
    (moby->rotation).y = (moby->rotation).y + fVar22;
    fVar12 = fVar10 * fVar10 * fVar3;
    fVar15 = fVar1 * fVar14;
    fVar13 = fVar10 * fVar12;
    (moby->pos).y =
         (fVar1 * fVar15 * 2.601887e-06 +
         fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11) *
         fVar22 + (moby->pos).y;
    (moby->pos).x =
         (fVar10 * fVar13 * 2.601887e-06 +
         fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar3 * -0.16666657 + fVar3) *
         fVar22 + fVar4;
    if (*(int *)((int)pvVar6 + 0x188) == 0) {
      if (uVar2 != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 12.5));
      }
      moby->state = '\x03';
      moby->damage = -1;
    }
  }
  else if (uVar2 == '\x01') {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x180);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x184);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x188);
    uVar8 = (int)*(uint *)((int)pvVar6 + 0x178) >> 0x1f;
    *(float *)((int)pvVar6 + 0x188) = -(DAT_0071f418 * 10.0 - *(float *)((int)pvVar6 + 0x188));
    fVar7 = (moby->pos).z;
    uVar9 = (int)fVar7 >> 0x1f;
    if ((int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9) <
        (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0x178)) - uVar8)) {
      (moby->pos).z = *(f32 *)((int)pvVar6 + 0x178);
      moby->state = '\x02';
      *(float *)((int)pvVar6 + 0x188) = -(DAT_00845d40 * 2.0 * mobyutil::g_FrameTime);
    }
  }
  else if (uVar2 == '\0') {
    MVar5 = moby->modeBits;
    moby->collision = (ushort *)0x0;
    *(undefined **)((int)pvVar6 + 0xd0) = &DAT_00845d34;
    *(undefined4 *)((int)pvVar6 + 0x30) = 0x3d4ccccd;
    moby->modeBits =
         MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    moby->state = '\x05';
  }
  return;
}



//==== 003bcd40  ns=Global  size=0x4ac
// sig: undefined FUN_003bcd40(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(3): 000fddc0 mobyutil::MB_SetAnimation; 00108180 mobyutil::MB_computeLobVelocity; 0015d12c sound::PlayMobySound

MobyInstance *
FUN_003bcd40(double param_1,undefined4 param_2,longlong param_3,float *param_4,float *param_5,
            undefined8 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ushort uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  ulonglong uVar17;
  ushort *puVar20;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  MobyInstance *pMVar25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMoby;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar17;
  puVar12[0x1e] = in_LR;
  puVar12[0x1b] = in_f31;
  puVar12[0x16] = unaff_r27;
  puVar12[0x1a] = unaff_r31;
  puVar12[0x19] = unaff_r30;
  puVar12[0x18] = unaff_r29;
  puVar12[0x17] = unaff_r28;
  puVar20 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_3 << 2));
  puVar12[0x15] = unaff_r26;
  if (puVar20 == (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
  }
  else {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar25 = MobyInstance + (*puVar20 & 0x7fff);
      if ((pMVar25->oClass == MINE_0238) && (pMVar25->state == '\x05')) {
        pMoby = pMVar25;
      }
      uVar8 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar8);
    if (pMoby != (MobyInstance *)0x0) {
      pMoby->updateDistance = -1;
      pMoby->drawDistance = 0xff;
      pMoby->enabled = '\x01';
      pMoby->state = '\x01';
      pMoby->setByGroup = '\0';
      pMoby->modeBits =
           pMoby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      pMoby->collision = pMoby->pClass->collision;
      if (pMoby->animationId != '\0') {
        mobyutil::MB_SetAnimation(pMoby,0,0,1);
      }
      (pMoby->pos).x = *param_4;
      (pMoby->pos).y = param_4[1];
      (pMoby->pos).z = param_4[2];
      (pMoby->pos).w = param_4[3];
      dVar27 = 0.0;
      (pMoby->rotation).x = 0.0;
      (pMoby->rotation).y = -DAT_00845d40;
      fVar3 = param_4[1];
      fVar1 = (float)((double)param_5[1] - (double)fVar3);
      fVar4 = *param_4;
      fVar2 = (float)((double)*param_5 - (double)fVar4);
      fVar5 = param_5[2];
      param_5[2] = fVar5 + 0.75;
      fVar16 = DAT_00845d40;
      fVar6 = param_4[2];
      *(float *)((int)puVar12 + 0x74) = fVar1;
      *(float *)(puVar12 + 0xe) = fVar2;
      fVar13 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      *(float *)((int)puVar12 + 0x7c) = param_5[3];
      fVar5 = (fVar5 + 0.75) - fVar6;
      *(float *)(puVar12 + 0xf) = fVar5;
      *(float *)(puVar12 + 0xf) = fVar5 + fVar6;
      fVar5 = (fVar13 - fVar16) / fVar13;
      dVar32 = (double)(fVar1 * fVar5);
      dVar28 = (double)(fVar2 * fVar5);
      dVar30 = dVar27;
      if (0.0 - fVar13 < 0.0) {
        dVar30 = dVar32;
      }
      dVar31 = dVar27;
      if (0.0 - fVar13 < 0.0) {
        dVar31 = dVar28;
      }
      if (fVar13 - 0.0 < 0.0) {
        dVar30 = dVar32;
      }
      if (fVar13 - 0.0 < 0.0) {
        dVar31 = dVar28;
      }
      fVar1 = (float)(dVar31 + (double)fVar4);
      *(float *)((int)puVar12 + 0x74) = (float)(dVar30 + (double)fVar3);
      *(float *)(puVar12 + 0xe) = fVar1;
      pvVar9 = pMoby->pVar;
      *(float *)((int)pvVar9 + 0x170) = fVar1;
      *(undefined4 *)((int)pvVar9 + 0x174) = *(undefined4 *)((int)puVar12 + 0x74);
      *(undefined4 *)((int)pvVar9 + 0x178) = *(undefined4 *)(puVar12 + 0xf);
      *(undefined4 *)((int)pvVar9 + 0x17c) = *(undefined4 *)((int)puVar12 + 0x7c);
      fVar1 = *(float *)(puVar12 + 0xe) - *param_4;
      *(float *)((int)pvVar9 + 0x180) = fVar1;
      fVar2 = *(float *)((int)puVar12 + 0x74) - param_4[1];
      *(float *)((int)pvVar9 + 0x184) = fVar2;
      dVar31 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      *(float *)((int)pvVar9 + 0x188) = *(float *)(puVar12 + 0xf) - param_4[2];
      uVar7 = *(undefined4 *)((int)puVar12 + 0x7c);
      *(undefined4 *)((int)pvVar9 + 0x188) = 0;
      *(undefined2 *)((int)pvVar9 + 200) = 0;
      dVar28 = (double)(fVar1 * (float)(param_1 / dVar31));
      dVar32 = (double)(fVar2 * (float)(param_1 / dVar31));
      dVar30 = dVar27;
      if (0.0 - dVar31 < 0.0) {
        dVar30 = dVar28;
      }
      dVar29 = dVar27;
      if (0.0 - dVar31 < 0.0) {
        dVar29 = dVar32;
      }
      if (dVar31 - 0.0 < 0.0) {
        dVar30 = dVar28;
      }
      if (dVar31 - 0.0 < 0.0) {
        dVar29 = dVar32;
      }
      *(float *)((int)pvVar9 + 0x180) = (float)dVar30;
      *(float *)((int)pvVar9 + 0x184) = (float)dVar29;
      fVar1 = DAT_0071f418;
      *(undefined4 *)((int)pvVar9 + 0x18c) = uVar7;
      dVar28 = (double)mobyutil::MB_computeLobVelocity
                                 (param_1,(double)(fVar1 * -10.0),param_4,uVar17 - 0x70,
                                  &DAT_003bcd2c,&DAT_00720000,0);
      uVar10 = *(uint *)((int)pvVar9 + 0x180);
      uVar11 = *(uint *)((int)pvVar9 + 0x184);
      dVar32 = ABS((double)*(float *)((int)pvVar9 + 0x180));
      dVar30 = ABS((double)*(float *)((int)pvVar9 + 0x184));
      *(float *)((int)pvVar9 + 0x188) = (float)dVar28;
      *(float *)(puVar12 + 0x10) = (float)(dVar32 - dVar30);
      uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      dVar28 = dVar32;
      if ((double)*(float *)(puVar12 + 0x10) - dVar27 < 0.0) {
        dVar28 = dVar30;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      if ((double)*(float *)(puVar12 + 0x10) - dVar27 < 0.0) {
        dVar30 = dVar32;
      }
      fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      if (dVar27 < dVar28) {
        lVar18 = uVar17 - 0xd0;
        lVar22 = uVar17 - 0x5c;
        lVar24 = uVar17 - 0x4c;
        lVar26 = 2;
        fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x12) = fVar3;
        *(float *)(puVar12 + 0x11) = fVar3;
        *(float *)((int)puVar12 + 0x8c) = fVar3;
        *(float *)((int)puVar12 + 0x84) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar4;
        *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3;
        *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x12) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar3 * fVar3;
          iVar14 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar24 = uVar17 - 0x5c;
        pfVar23 = (float *)&DAT_007358e0;
        lVar26 = 4;
        lVar18 = lVar19;
        lVar22 = lVar24;
        do {
          fVar3 = *pfVar23;
          fVar4 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar3;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar18 = 2;
        do {
          iVar14 = (int)lVar19;
          iVar15 = (int)lVar24;
          lVar19 = lVar19 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar14 + 0x84)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
      }
      (pMoby->rotation).z = (float)dVar27;
      *(undefined4 *)((int)pvVar9 + 0x194) = param_7;
      *(undefined4 *)((int)pvVar9 + 0x198) = param_2;
      *(undefined4 *)((int)pvVar9 + 0x19c) = 0;
      sound::PlayMobySound(0,0,pMoby);
    }
  }
  return pMoby;
}



//==== 003bd1ec  ns=mobyupdate_helpers  size=0x90
// sig: undefined M570_003bd1ec(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M570_003bd1ec(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = param_1->pVar;
  uVar3 = M849_MB_Sucking(param_1);
  if ((int)uVar3 == 0) {
    if (param_1->state == '\x04') {
      param_1->state = param_1->setByGroup;
    }
  }
  else {
    uVar1 = param_1->state;
    if ((uVar1 == '\x03') || (uVar1 == '\x04')) {
      if (uVar1 != '\x04') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x04';
      }
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      *(undefined2 *)((int)pvVar2 + 200) = 0;
    }
  }
  return uVar3;
}



//==== 003bd27c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M570_003bd27c(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M570_003bd27c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x04') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return;
}



//==== 003bd2d4  ns=mobyupdate_helpers  size=0x58
// sig: undefined M570_003bd2d4(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M570_003bd2d4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x04') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return;
}



//==== 003bd32c  ns=mobyupdate_helpers  size=0x24
// sig: undefined M570_003bd32c(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M570_003bd32c(void)

{
  M849_0048afe8();
  return;
}



//==== 003bd350  ns=mobyupdate_helpers  size=0x40
// sig: undefined M570_003bd350(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M570_003bd350(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 003bd398  ns=mobyupdate_helpers  size=0x94
// sig: undefined M570_003bd398(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M570_003bd398(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 5;
  if (*(char *)(param_1 + 0x53) != '\0') {
    mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}



//==== 003bd42c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M570_003bd42c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M570_003bd42c(void)

{
  DAT_00845d90 = 0x10000;
  return;
}



//==== 003bd440  ns=Global  size=0xdc
// sig: undefined FUN_003bd440(void)
// callers(1): 002f20a0 mobyupdate_unsorted::UpdateMoby_217
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_003bd440(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  short sVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = mobyfunc::CreateMoby(AXE);
  if (pMVar3 != (MobyInstance *)0x0) {
    sVar2 = *(short *)(param_1 + 0x32);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = sVar2;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 003bd51c  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_570(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 570 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_570(MobyInstance *moby)

{
  return moby;
}



//==== 003bd530  ns=mobyupdate_unsorted  size=0x148
// sig: undefined UpdateMoby_571(MobyInstance * moby)
// callers(0): 
// callees(2): 00109af0 mobyutil::Delt; 00502578 fastfunc::FastWrapRot

/* Moby 571 */

void mobyupdate_unsorted::UpdateMoby_571(MobyInstance *moby)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  puVar1 = (undefined4 *)moby->pVar;
  if (moby->state == 0) {
    if (((g_CurrentWeapon == 0x1a) &&
        (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
        SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) && (g_currentWeaponMoby->setByGroup != '\0')) {
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    dVar4 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar4;
    mobyutil::Delt(0.0,moby->pClass->gScale / (float)(longlong)(animationSpeed * 120.5),&moby->scale
                  );
    if (moby->scale == 0.0) {
      moby->state = '\x02';
      *puVar1 = 0x3f800000;
    }
  }
  return;
}



//==== 003bd678  ns=mobyupdate_helpers  size=0x14
// sig: undefined M866_003bd678(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M866_003bd678(void)

{
  DAT_00845e00 = 0x10000;
  return;
}



//==== 003bd6c0  ns=mobyupdate_helpers  size=0x4ec
// sig: undefined M866_003bd6c0(void)
// callers(2): 003be2b8 mobyupdate_helpers::M866_003be2b8; 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110950 mobyutil::MB_RandomizeVector; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M866_003bd6c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  longlong local_b0;
  
  iVar12 = 0;
  iVar3 = *(int *)(param_1 + 0x78);
  if (0 < DAT_00845e78) {
    do {
      local_e0 = *(float *)(param_1 + 0x10);
      local_dc = *(undefined4 *)(param_1 + 0x14);
      local_d8 = *(float *)(param_1 + 0x18);
      local_d4 = *(undefined4 *)(param_1 + 0x1c);
      mobyutil::MB_RandomizeVector(DAT_00845e80 * *(float *)(iVar3 + 0x250),&local_e0);
      dVar20 = 1.0;
      local_d8 = local_d8 + 1.0;
      dVar14 = (double)mobyutil::MB_randRot();
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_00845e8c,DAT_00845e90);
      dVar16 = (double)mobyutil::MB_randRangeFloat(DAT_00845e94,DAT_00845e98);
      dVar21 = 0.0;
      dVar17 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_010c9f54);
      dVar18 = (double)mobyutil::g_FrameTime;
      fVar2 = (float)(dVar17 * dVar18);
      local_c4 = param_2[3];
      fVar1 = (float)(dVar14 + 1.570796251296997);
      local_c8 = (float)(dVar18 * dVar16 + (double)(param_2[2] * fVar2));
      dVar16 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar16 = dVar14;
      }
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar16 < 0.0) {
        dVar17 = dVar16;
      }
      local_b0 = (longlong)DAT_00845ebc;
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar16 = (double)(float)(dVar17 * dVar17);
      fVar6 = fVar5 * fVar5;
      dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
      fVar1 = fVar6 * fVar6 * fVar5;
      dVar14 = (double)(float)(dVar16 * dVar19);
      fVar4 = fVar6 * fVar1;
      local_cc = (float)(dVar18 * dVar15) *
                 ((float)(dVar16 * dVar14) * 2.601887e-06 +
                 (float)(dVar14 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar16 * dVar17) *
                                                       -0.16666656732559204 + dVar17)))) +
                 param_2[1] * fVar2;
      local_d0 = (float)(dVar18 * dVar15) *
                 (fVar6 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5)
                 + *param_2 * fVar2;
      dVar16 = 0.5;
      iVar13 = 0;
      local_b8 = -(DAT_00845e9c * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_b0 + 0.5)) - local_c8);
      local_c0 = local_d0;
      local_bc = local_cc;
      local_b4 = local_c4;
      if (0 < DAT_00845e7c) {
        dVar14 = 1.5;
        dVar15 = 2.5;
        do {
          dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar14);
          local_c4 = (float)((double)DAT_00845ea0 * dVar17);
          local_b4 = (float)((double)DAT_00845ea4 * dVar17);
          mobyutil::MB_RandomizeVector(DAT_00845e84,&local_e0);
          mobyutil::MB_RandomizeVector(DAT_00845e88 * mobyutil::g_FrameTime,&local_c0);
          uVar8 = DAT_00845eb0;
          uVar7 = DAT_00845ea8;
          mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
          uVar9 = fastfunc::FastLerpColor(uVar7,uVar8);
          uVar8 = DAT_00845eb4;
          uVar7 = DAT_00845eac;
          mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
          uVar10 = fastfunc::FastLerpColor(uVar7,uVar8);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00845eb8 + dVar16);
          local_b0 = (longlong)DAT_00845ec0;
          fVar2 = animationSpeed * (float)((double)(longlong)DAT_00845ebc + dVar16);
          dVar17 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)local_b0 * dVar16),
                                      (float)((double)local_b0 * dVar15));
          uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          partupd::SpawnPart_2
                    (&local_e0,&local_d0,&local_c0,uVar9,uVar10,(int)fVar1,(int)fVar2,uVar11);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_00845e7c);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < DAT_00845e78);
  }
  return;
}



//==== 003bdbd0  ns=mobyupdate_helpers  size=0x46c
// sig: undefined M866_003bdbd0(void)
// callers(1): 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0012f6b0 partupd::SpawnPart_52; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M866_003bdbd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_r7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_b0 [16];
  undefined1 local_a0 [32];
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar1 = mobyutil::MB_randInt(DAT_00845e6c + -1);
    dVar5 = 0.5;
    dVar6 = 0.0;
    if (iVar1 == 0) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar6,DAT_00845e74);
      dVar3 = (double)mobyutil::MB_randRangeFloat((float)dVar6,DAT_00845e44);
      dVar4 = (double)(float)(dVar3 * (double)*(float *)(iVar2 + 0x250));
      dVar3 = (double)mobyutil::MB_randRangeFloat(DAT_00845e44,DAT_00845e48);
      dVar3 = (double)(float)(dVar3 * (double)*(float *)(iVar2 + 0x250));
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_00845e4c,(float)(longlong)DAT_00845e50);
      iVar1 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_52
                (dVar4,dVar3,local_b0,DAT_00845e3c,DAT_00845e40,local_b0,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
    iVar1 = mobyutil::MB_randInt(DAT_00845e70 + -1);
    if (iVar1 == 0) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar6,DAT_00845e74);
      dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar6,DAT_00845e5c);
      dVar3 = (double)(float)(dVar6 * (double)*(float *)(iVar2 + 0x250));
      dVar6 = (double)mobyutil::MB_randRangeFloat(DAT_00845e5c,DAT_00845e60);
      dVar6 = (double)(float)(dVar6 * (double)*(float *)(iVar2 + 0x250));
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_00845e64,(float)(longlong)DAT_00845e68);
      iVar2 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_52
                (dVar3,dVar6,local_a0,DAT_00845e54,DAT_00845e58,local_a0,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar2 + dVar5)));
    }
  }
  return;
}



//==== 003be040  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M866_003be040(void)
// callers(1): 003be2b8 mobyupdate_helpers::M866_003be2b8
// callees(0): 

MobyInstance * mobyupdate_helpers::M866_003be040(int param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 120.0;
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if (((((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pMVar7->oClass == EXTERMIBOT))
          && (pMVar7->state < 0x7f)) &&
         (fVar3 = (pMVar7->pos).y - *(float *)(param_1 + 0x14),
         fVar4 = (pMVar7->pos).x - *(float *)(param_1 + 0x10),
         fVar5 = (pMVar7->pos).z - *(float *)(param_1 + 0x18),
         fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), fVar3 < fVar1)) {
        fVar1 = fVar3;
        pMVar8 = pMVar7;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}



//==== 003be118  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M866_003be118(void)
// callers(1): 003be2b8 mobyupdate_helpers::M866_003be2b8
// callees(1): 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M866_003be118(int param_1)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  MOBY_OCLASSES MVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  MVar5 = ~RATCHET;
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(short *)(param_1 + 0xa6) == 0x23c) {
    MVar5 = MEDIUM_SLIME;
  }
  else if (*(short *)(param_1 + 0xa6) == 0x361) {
    MVar5 = SMALL_SLIME;
  }
  puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if ((pMVar7->state == '\f') && (pMVar7->oClass == MVar5)) {
        pMVar7->updateDistance = *(char *)(param_1 + 0x30);
        pMVar7->drawDistance = *(short *)(param_1 + 0x32);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        pMVar7->enabled = '\x01';
        pMVar7->color = (int)((ulonglong)uVar4 >> 0x20);
        pMVar7->light = (int)uVar4;
        pMVar7->collision = pMVar7->pClass->collision;
        pMVar7->modeBits = *(MobyModeBit *)(param_1 + 0x34);
        (pMVar7->pos).x = *(f32 *)(param_1 + 0x10);
        pvVar3 = pMVar7->pVar;
        (pMVar7->pos).y = *(f32 *)(param_1 + 0x14);
        (pMVar7->pos).z = *(f32 *)(param_1 + 0x18);
        (pMVar7->pos).w = *(f32 *)(param_1 + 0x1c);
        (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
        (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
        (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
        (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
        *(undefined4 *)((int)pvVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)((int)pvVar3 + 0x224) = *(undefined4 *)(iVar2 + 0x224);
        mobyfunc::UpdateMobyTransform(pMVar7);
        return pMVar7;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 003be2b8  ns=mobyupdate_helpers  size=0x8dc
// sig: undefined M866_003be2b8(void)
// callers(1): 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}
// callees(17): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 00111ba0 mobyutil::MB_getTargetInArea; 0015d12c sound::PlayMobySound; 003bd6c0 mobyupdate_helpers::M866_003bd6c0; 003be040 mobyupdate_helpers::M866_003be040; 003be118 mobyupdate_helpers::M866_003be118; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M866_003be2b8(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  f32 fVar6;
  int iVar7;
  uint uVar8;
  Spline *pSVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  
  pvVar4 = param_1->pVar;
  uVar20 = ZEXT48(pvVar4);
  local_4c = 0;
  pfVar16 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
  if (pfVar16 != (float *)0x0) {
    fVar2 = (param_1->pos).x;
    fVar3 = (param_1->pos).y;
    fVar11 = (param_1->pos).z + 0.5;
    fVar5 = pfVar16[8];
    if (fVar5 == 0.0) {
      fVar12 = *pfVar16;
      fVar13 = pfVar16[1];
      fVar14 = pfVar16[2];
    }
    else {
      fVar12 = hero::g_heroCGPos;
      fVar13 = DAT_00969db4;
      fVar14 = DAT_00969db8;
      if ((*(short *)((int)fVar5 + 0xa6) != 0x47) &&
         (((fVar12 = fVar2, fVar13 = fVar3, fVar14 = fVar11, *(int *)((int)fVar5 + 0x24) == 0 ||
           (*(short *)(*(int *)((int)fVar5 + 0x24) + 0x46) != 5)) &&
          (*(short *)((int)fVar5 + 0xa6) != 0xba)))) {
        fVar12 = *(float *)((int)fVar5 + 0x10);
        fVar13 = *(float *)((int)fVar5 + 0x14);
        fVar14 = *(float *)((int)fVar5 + 0x18);
      }
    }
    if ((SQRT((fVar11 - fVar14) * (fVar11 - fVar14) +
              (fVar2 - fVar12) * (fVar2 - fVar12) + (fVar3 - fVar13) * (fVar3 - fVar13)) < 24.0) &&
       (iVar17 = collproc::CollLine(local_80,local_70,2,param_1,0), iVar17 != 0)) {
      pfVar16 = (float *)0x0;
    }
  }
  mobyutil::MB_HandleDamage(param_1,pfVar16,uVar20 + 0x20,0,&local_50,&local_4c,0,4);
  fVar6 = (param_1->pos).z;
  uVar19 = (int)fVar6 >> 0x1f;
  if ((local_50 != 1) && (local_4c != 0)) {
    uVar1 = param_1->state;
    if ((uVar1 != '\n' && uVar1 != '\v') && (uVar1 != '\b')) {
      sound::PlayMobySound(0,0,param_1);
      *(undefined4 *)((int)pvVar4 + 0x70) = 0x3c03126f;
      *(undefined1 *)((int)pvVar4 + 0x9d) = 0;
      *(undefined4 *)((int)pvVar4 + 0x84) = 8;
      *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - 1.0;
      dVar23 = 0.800000011920929;
      dVar24 = 1024.0;
      uVar18 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar4 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)((int)pvVar4 + 0x80) = uVar18;
      *(float *)((int)pvVar4 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
      M866_003bd6c0(param_1,pfVar16 + 4);
      if (0 < *(int *)((int)pvVar4 + 0x20)) {
        iVar17 = M866_003be118(param_1);
        if (iVar17 != 0) {
          iVar7 = *(int *)(iVar17 + 0x78);
          *(undefined4 *)(iVar7 + 0x70) = 0x3c03126f;
          *(undefined1 *)(iVar7 + 0x9d) = 3;
          *(undefined4 *)(iVar7 + 0x84) = 8;
          uVar18 = fastfunc::FastDoubleToInt
                             ((double)(float)((double)(float)((double)*(float *)((int)pvVar4 + 0x250
                                                                                ) * dVar23) * dVar24
                                             ));
          *(undefined4 *)(iVar7 + 0x80) = uVar18;
          *(float *)(iVar7 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
          fVar2 = mobyutil::g_FrameTime;
          *(float *)(iVar7 + 0x78) = DAT_00845e2c * mobyutil::g_FrameTime;
          fVar3 = DAT_00845e30;
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          *(undefined4 *)(iVar7 + 0xb0) = 0x40e00000;
          *(undefined4 *)(iVar7 + 0xb4) = 0x41500000;
          *(float *)(iVar7 + 0x7c) = fVar3 * fVar2;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(pfVar16 + 4),*(undefined8 *)(pfVar16 + 6),&local_48,
                     iVar7 + 0x78,iVar7 + 0x7c);
          dVar21 = (double)fastfunc::FastDiffRots((double)local_48,0x3fe921fb60000000);
          local_48 = (float)dVar21;
          mobyutil::MB_StartKick(iVar17,iVar7 + 0x60);
          *(undefined1 *)(iVar17 + 0x20) = 8;
          *(undefined4 *)(iVar17 + 0x58) = 0x3f800000;
        }
        iVar17 = M866_003be118(param_1);
        if (iVar17 != 0) {
          iVar7 = *(int *)(iVar17 + 0x78);
          *(undefined4 *)(iVar7 + 0x70) = 0x3c03126f;
          *(undefined1 *)(iVar7 + 0x9d) = 3;
          *(undefined4 *)(iVar7 + 0x84) = 8;
          uVar18 = fastfunc::FastDoubleToInt
                             ((double)(float)((double)(float)((double)*(float *)((int)pvVar4 + 0x250
                                                                                ) * dVar23) * dVar24
                                             ));
          *(undefined4 *)(iVar7 + 0x80) = uVar18;
          *(float *)(iVar7 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
          fVar2 = mobyutil::g_FrameTime;
          *(float *)(iVar7 + 0x78) = DAT_00845e2c * mobyutil::g_FrameTime;
          fVar3 = DAT_00845e30;
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          *(undefined4 *)(iVar7 + 0xb0) = 0x40e00000;
          *(undefined4 *)(iVar7 + 0xb4) = 0x41500000;
          *(float *)(iVar7 + 0x7c) = fVar3 * fVar2;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(pfVar16 + 4),*(undefined8 *)(pfVar16 + 6),&local_44,
                     iVar7 + 0x78,iVar7 + 0x7c);
          dVar23 = (double)fastfunc::FastWrapRot(local_44,0.7853982);
          local_44 = (float)dVar23;
          mobyutil::MB_StartKick(iVar17,iVar7 + 0x60);
          *(undefined1 *)(iVar17 + 0x20) = 8;
          *(undefined4 *)(iVar17 + 0x58) = 0x3f800000;
        }
        if (((pfVar16[8] == 0.0) || (iVar17 = *(int *)((int)pfVar16[8] + 0x24), iVar17 == 0)) ||
           (*(short *)(iVar17 + 0x46) != 5)) {
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0x800,0xffffffffffffffff);
        }
        mobyfunc::DeleteMoby(param_1);
        return;
      }
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      mobyfunc::DeleteMoby(param_1);
      return;
    }
  }
  param_1->damage = -1;
  if (((*(int *)((int)pvVar4 + 600) == 0) || (param_1->state == '\0')) ||
     (uVar8 = *(uint *)((int)WaterTiles + *(int *)((int)pvVar4 + 600) * 0x11a0 + 8),
     uVar10 = (int)uVar8 >> 0x1f,
     (int)((uVar10 >> 1 ^ uVar8) - uVar10) <= (int)((uVar19 >> 1 ^ (uint)fVar6) - uVar19))) {
    if (*(int *)((int)pvVar4 + 0x38) != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(0x18,0x3be274);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x22c,uVar20
                         );
      *(undefined4 *)((int)pvVar4 + 0x22cU & 0xfffffffc) = uVar18;
      *(undefined4 *)((int)pvVar4 + 0x38) = 0;
    }
    iVar17 = fastfunc::FastDecTimerS32(uVar20 + 0x22c);
    if (iVar17 == 0) {
      fVar2 = *(float *)((int)pvVar4 + 0x224) + 20.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x224);
    }
    *(float *)((int)pvVar4 + 0x228) = fVar2;
    if ((*(int *)((int)pvVar4 + 0x260) < 1) ||
       (MobyInstance[*(int *)((int)pvVar4 + 0x260)].setByGroup != '\0')) {
      pSVar9 = Splines[*(int *)((int)pvVar4 + 0x24c)];
      iVar17 = mobyutil::MB_getTargetInArea
                         (param_1,uVar20 + 0x1c0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
      if ((iVar17 != 2) &&
         ((fVar2 = *(float *)((int)pvVar4 + 0x214) - *(float *)((int)pvVar4 + 0x1c4),
          fVar3 = *(float *)((int)pvVar4 + 0x210) - *(float *)((int)pvVar4 + 0x1c0),
          *(float *)((int)pvVar4 + 0x228) < SQRT(fVar3 * fVar3 + fVar2 * fVar2) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x1c8)))))) {
        *(undefined4 *)((int)pvVar4 + 0x204) = 2;
      }
    }
    if ((-1 < *(int *)((int)pvVar4 + 0x248)) &&
       (iVar17 = M866_003be040(param_1,*(int *)((int)pvVar4 + 0x248)), iVar17 != 0)) {
      fVar2 = (param_1->pos).y;
      fVar3 = (param_1->pos).x;
      fVar5 = fVar2 - *(float *)(iVar17 + 0x14);
      fVar11 = fVar3 - *(float *)(iVar17 + 0x10);
      fVar5 = SQRT(fVar11 * fVar11 + fVar5 * fVar5);
      if ((fVar5 < *(float *)((int)pvVar4 + 0x228)) &&
         ((*(int *)((int)pvVar4 + 0x204) == 2 ||
          (fVar2 = fVar2 - *(float *)(*(int *)((int)pvVar4 + 0x200) + 0x14),
          fVar3 = fVar3 - *(float *)(*(int *)((int)pvVar4 + 0x200) + 0x10),
          fVar5 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))))) {
        *(int *)((int)pvVar4 + 0x200) = iVar17;
        *(undefined4 *)((int)pvVar4 + 0x204) = 1;
      }
    }
    if (*(int *)((int)pvVar4 + 0x200) == 0) {
      *(MobyInstance **)((int)pvVar4 + 0x200) = g_heroMobyPtr;
    }
    dVar24 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar4 + 0x254),mobyutil::g_FrameTime * 9.424778);
    uVar15 = DAT_00845e28;
    uVar18 = DAT_00845e24;
    dVar23 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar23 = dVar24;
    }
    dVar21 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar23 < 0.0) {
      dVar21 = dVar23;
    }
    *(float *)((int)pvVar4 + 0x254) = (float)dVar24;
    dVar23 = (double)(float)(dVar21 * dVar21);
    dVar22 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar21));
    dVar24 = (double)(float)(dVar23 * dVar22);
    uVar19 = fastfunc::FastLerpColor
                       ((double)(((float)(dVar23 * dVar24) * 2.601887e-06 +
                                  (float)(dVar24 * -0.0001980741071747616 +
                                         (double)(float)(dVar22 * 0.008333025500178337 +
                                                        (double)(float)((double)(float)(dVar23 * 
                                                  dVar21) * -0.16666656732559204 + dVar21))) + 1.0)
                                * 0.5),uVar18,uVar15);
    param_1->field60_0x90 = uVar19;
  }
  else {
    M866_003bd6c0(param_1,local_60);
    mobyfunc::DeleteMoby(param_1);
  }
  return;
}



//==== 003bec28  ns=mobyupdate_unsorted  size=0x16ec
// sig: undefined UpdateMoby_{572_865_866}(MobyInstance * moby)
// callers(0): 
// callees(26): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110b70 mobyutil::MB_IsPntInCuboid; 00113e88 mobyutil::MB_MayaFrameTrigger; 00114d58 mobyutil::MB_SplineFindRouteNode; 00119a18 mobyfunc::DoManipulator; 0015d12c sound::PlayMobySound; 003bd6c0 mobyupdate_helpers::M866_003bd6c0; 003bdbd0 mobyupdate_helpers::M866_003bdbd0; 003be2b8 mobyupdate_helpers::M866_003be2b8; 0048c188 FUN_0048c188; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 572
   Moby 865
   Moby 866 */

void mobyupdate_unsorted::UpdateMoby__572_865_866_(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  MOBY_OCLASSES MVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  MobyInstance *victim;
  MobyClass *pMVar7;
  u16 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  undefined1 uVar20;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  double dVar24;
  undefined8 uVar25;
  undefined1 auStack_110 [16];
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [16];
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  f32 local_80;
  f32 local_7c;
  float local_78;
  f32 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  undefined1 auStack_50 [16];
  longlong local_40;
  
  lVar16 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  if (moby->state == '\f') {
    moby->modeBits = moby->modeBits | DISABLED;
    return;
  }
  uVar21 = ZEXT48(&DAT_003beb98);
  mobyfunc::DoManipulator(0x4007333340000000,moby,0,(Manipulator *)((int)pvVar6 + 0x270));
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar9 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x16';
  }
  mobyupdate_helpers::M866_003be2b8(lVar16);
  bVar1 = moby->state;
  victim = *(MobyInstance **)((int)pvVar6 + 0x200);
  if (6 < bVar1) {
    if (bVar1 == 0x10) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (*(int *)((int)pvVar6 + 0x22c) != 0) {
        return;
      }
      moby->state = '\x05';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 20.5));
      return;
    }
    if (bVar1 == 0xf) {
      dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 1.0471976,DAT_0071f418 * 1.0471976,
                 mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x220));
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_d8 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_dc = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_e0 = fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_e0,
                 (int)pvVar6 + 0x40);
      iVar18 = mobyutil::MB_SplineIntersect
                         (*(undefined4 *)((int)pvVar6 + 0x240),lVar16 + 0x10,&victim->pos,&local_d0)
      ;
      bVar15 = false;
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((iVar18 != 0) &&
         (local_cc = fVar3 - local_cc, local_d0 = fVar2 - local_d0,
         local_c8 = (moby->pos).z - local_c8,
         SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) < 1.5)) {
        bVar15 = true;
      }
      if (*(int *)((int)pvVar6 + 0x22c) == 0) {
        moby->state = '\x05';
        return;
      }
      if (bVar15) {
        moby->state = '\x10';
        if (moby->animationId == '\0') {
          return;
        }
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        return;
      }
      fVar3 = fVar3 - (victim->pos).y;
      fVar2 = fVar2 - (victim->pos).x;
      if (2.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
        return;
      }
      moby->state = '\x06';
      if (moby->animationId == '\x02') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar16,2,5,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar1 == 0xe) {
      iVar18 = FUN_0048c188(lVar16,ZEXT48(pvVar6) + 0x60);
      if (iVar18 == 0) {
        return;
      }
      moby->state = '\x01';
      *(undefined2 *)((int)pvVar6 + 0x128) = 0;
      return;
    }
    if (bVar1 == 0xd) {
      iVar18 = *(int *)((int)pvVar6 + 0x25c);
      moby->modeBits = moby->modeBits | DISABLED;
      iVar18 = mobyutil::MB_IsPntInCuboid((Vec4 *)&hero::g_heroCGPos,(longlong)iVar18);
      if (iVar18 == 0) {
        return;
      }
      moby->state = '\x01';
      moby->unk58 = 1.0;
      MVar5 = moby->modeBits;
      pMVar7 = moby->pClass;
      (moby->pos).z = (moby->pos).z + 20.0;
      puVar8 = pMVar7->collision;
      moby->modeBits =
           MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      moby->collision = puVar8;
      moby->enabled = '\x01';
      return;
    }
    if (bVar1 == 9) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x48) = 0;
      *(undefined4 *)((int)pvVar6 + 0x44) = 0;
      *(undefined4 *)((int)pvVar6 + 0x40) = 0;
      dVar24 = (double)mobyutil::MB_randRangeFloat(-0.34906584,0.34906584);
      *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * mobyutil::g_FrameTime;
      return;
    }
    if (bVar1 != 8) {
      if (bVar1 != 7) {
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      return;
    }
    uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x60));
    if ((uVar19 & 1) == 0) {
      if ((uVar19 & 0x120) == 0) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar18 = mobyutil::MB_SplineFindRouteNode
                       (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                        (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,
                        (int)pvVar6 + 0x210,auStack_50);
    if (iVar18 != 0) {
      sound::PlayMobySound(4,0,moby);
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * mobyutil::g_FrameTime;
      moby->state = '\t';
      if (moby->animationId != '\x05') {
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar16,5,4,(int)(animationSpeed * 10.5));
      }
      *(f32 *)((int)pvVar6 + 0x210) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x214) = (moby->pos).y;
      *(f32 *)((int)pvVar6 + 0x218) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x21c) = (moby->pos).w;
      return;
    }
    mobyupdate_helpers::M866_003bd6c0(lVar16,&DAT_00a15d30);
    mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (bVar1 == 6) {
    dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                  (double)((victim->pos).y - (moby->pos).y));
    mobyutil::OrganicDeltAng
              ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x220));
    dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
    if (((moby->updateId == moby->animationId) && (10.0 <= dVar24)) && (dVar24 <= 16.0)) {
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_98 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_9c = (fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
      local_a0 = (fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * 2.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_a0,
                 (int)pvVar6 + 0x40);
    }
    iVar18 = mobyutil::MB_MayaFrameTrigger(15.5,moby);
    if (((iVar18 != 0) &&
        (fVar2 = (moby->pos).y - (victim->pos).y, fVar3 = (moby->pos).x - (victim->pos).x,
        SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) &&
       (ABS((victim->pos).z - (moby->pos).z) < *(float *)((int)pvVar6 + 0x250) * 2.0)) {
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      local_88 = 0;
      local_84 = 0x45afdf66;
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_8c = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_90 = fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      local_80 = (victim->pos).x;
      local_7c = (victim->pos).y;
      local_74 = (victim->pos).w;
      local_78 = (victim->pos).z + 0.75;
      mobyutil::CollDamageMobyDirect(1.0,victim,moby,0x10001,0x3beb98,&local_80,&local_90);
      return;
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    moby->state = '\a';
    if (moby->animationId != '\x03') {
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 10.5));
    }
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * mobyutil::g_FrameTime;
    return;
  }
  if (bVar1 == 5) {
    fVar2 = (moby->pos).y - *(float *)((int)pvVar6 + 0x214);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x210);
    uVar25 = 0x3ff0000000000000;
    if (1.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      iVar23 = (int)pvVar6 + 0x210;
      iVar18 = mobyutil::MB_SplineFindRouteNode
                         (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240U,1,
                          (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,iVar23,&local_60
                         );
      if ((iVar18 != 0) ||
         (iVar18 = mobyutil::MB_SplineFindRouteNode
                             (0.0,(int)pvVar6 + 0x240U,1,(longlong)*(int *)((int)pvVar6 + 0x244),
                              uVar21,iVar23,iVar23,&local_60), iVar18 != 0)) {
        dVar24 = (double)FUN_005e8338((double)(local_60 - (moby->pos).x),
                                      (double)(local_5c - (moby->pos).y));
        dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,*(float *)((int)pvVar6 + 0x234));
        mobyutil::OrganicDeltAng
                  ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x220));
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar9 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar9 = fVar2;
        }
        fVar11 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar11 = fVar3;
        }
        fVar10 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
          fVar10 = fVar9;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
          fVar2 = fVar11;
        }
        fVar3 = fVar10 * fVar10;
        fVar9 = fVar2 * fVar2;
        fVar13 = fVar3 * fVar3 * fVar10;
        local_68 = 0;
        fVar11 = fVar9 * fVar9 * fVar2;
        fVar14 = fVar3 * fVar13;
        fVar12 = fVar9 * fVar11;
        local_6c = (fVar3 * fVar14 * 2.601887e-06 +
                   fVar14 * -0.0001980741 +
                   fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
        local_70 = (fVar9 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * 2.0;
        mobyutil::MB_UpdateNavMove
                  (uVar25,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_70,(int)pvVar6 + 0x40);
      }
    }
    else {
      moby->state = '\x01';
    }
    if ((*(int *)((int)pvVar6 + 0x204) != 2) && (moby->state = '\x04', moby->animationId != '\x01'))
    {
      local_40 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 3.5));
    }
    mobyupdate_helpers::M866_003bdbd0(lVar16);
    return;
  }
  if (bVar1 != 4) {
    if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar1 == 2) {
      dVar24 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x210) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x214) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 1.0471976,DAT_0071f418 * 1.0471976,
                 mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x220));
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      lVar22 = ZEXT48(pvVar6) + 0x40;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_f8 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_fc = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_100 = fVar9 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_100,
                 (int)lVar22);
      if ((*(int *)((int)pvVar6 + 0x204) != 2) && (iVar18 = mobyutil::MB_randInt(4), iVar18 == 0)) {
        iVar18 = mobyutil::MB_SplineFindRouteNode
                           (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                            (longlong)*(int *)((int)pvVar6 + 0x244),lVar22,&moby->pos,&victim->pos,
                            auStack_f0);
        if (iVar18 == 0) {
          *(undefined4 *)((int)pvVar6 + 0x204) = 2;
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_40 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
          }
          *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
          *(undefined4 *)((int)pvVar6 + 0x48) = 0;
          *(undefined4 *)((int)pvVar6 + 0x44) = 0;
          *(undefined4 *)((int)pvVar6 + 0x40) = 0;
          dVar24 = (double)mobyutil::MB_randRangeFloat(-0.34906584,0.34906584);
          *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
          *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * mobyutil::g_FrameTime;
        }
      }
      if (((*(int *)((int)pvVar6 + 0x22c) != 0) && (*(int *)((int)pvVar6 + 0x204) == 2)) &&
         (moby->state = '\x0f', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(lVar16,1,0,5);
      }
      mobyupdate_helpers::M866_003bdbd0(lVar16);
      return;
    }
    if (bVar1 != 1) {
      if (bVar1 != 0) {
        return;
      }
      *(f32 *)((int)pvVar6 + 0x210) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x214) = (moby->pos).y;
      MVar4 = moby->oClass;
      *(f32 *)((int)pvVar6 + 0x218) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x21c) = (moby->pos).w;
      if ((short)MVar4 < 0x361) {
        if (MVar4 == SLIME_PARENT) {
          uVar20 = fastfunc::FastDoubleToInt(0x402c000000000000);
          *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
          uVar20 = fastfunc::FastDoubleToInt(0x4024ccccc0000000);
          *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
          *(undefined4 *)((int)pvVar6 + 0x250) = 0x3f800000;
        }
      }
      else if ((short)MVar4 < 0x362) {
        uVar20 = fastfunc::FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
        uVar20 = fastfunc::FastDoubleToInt(0x4016666660000000);
        *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
        *(undefined4 *)((int)pvVar6 + 0x250) = 0x3f333333;
      }
      else if ((short)MVar4 < 0x363) {
        uVar20 = fastfunc::FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
        uVar20 = fastfunc::FastDoubleToInt(0x4010000000000000);
        *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
        *(undefined4 *)((int)pvVar6 + 0x250) = 0x3efae148;
      }
      *(undefined4 *)((int)pvVar6 + 0x30) = *(undefined4 *)((int)pvVar6 + 0x250);
      dVar24 = (double)mobyutil::MB_randRot();
      MVar4 = moby->oClass;
      *(float *)((int)pvVar6 + 0x254) = (float)dVar24;
      *(undefined1 *)((int)pvVar6 + 0x29) = 1;
      *(uint *)((int)pvVar6 + 0x130) =
           (int)&PTR_DAT_00845ec4 + ((uint)((LZCOUNT(0x362 - (uint)MVar4) << 0x3a) >> 0x3f) & 0xc);
      uVar17 = 0x40400000;
      if (*(int *)((int)pvVar6 + 600) != 0) {
        uVar17 = 0x3f800000;
        *(undefined4 *)((int)pvVar6 + 0x230) = 1;
      }
      *(undefined4 *)((int)pvVar6 + 0x20) = uVar17;
      if (*(int *)((int)pvVar6 + 0x224) == 0) {
        *(undefined4 *)((int)pvVar6 + 0x224) = 0x41700000;
      }
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0x170));
      *(undefined4 *)((int)pvVar6 + 0x17c) = 0x40000000;
      *(undefined4 *)((int)pvVar6 + 0x178) = 0x40000000;
      uVar17 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar6 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)((int)pvVar6 + 0x170) = uVar17;
      MVar5 = moby->modeBits;
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * mobyutil::g_FrameTime;
      fVar2 = (moby->pos).z;
      if (*(int *)((int)pvVar6 + 0x230) != 0) {
        moby->state = '\x01';
        moby->modeBits = MVar5 | CAN_BE_AUTO_TARGETED;
        return;
      }
      moby->state = (char)((LZCOUNT(-1 - *(int *)((int)pvVar6 + 0x25c)) << 0x3a) >> 0x3f) + '\r';
      moby->unk58 = 0.0;
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      (moby->pos).z = fVar2 - 20.0;
      return;
    }
    if ((*(int *)((int)pvVar6 + 0x204) != 2) && (iVar18 = mobyutil::MB_randInt(4), iVar18 == 0)) {
      iVar18 = mobyutil::MB_SplineFindRouteNode
                         (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                          (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,&victim->pos,
                          auStack_110);
      if (iVar18 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x204) = 2;
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x01') {
          local_40 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
        }
        *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar6 + 0x48) = 0;
        *(undefined4 *)((int)pvVar6 + 0x44) = 0;
        *(undefined4 *)((int)pvVar6 + 0x40) = 0;
        dVar24 = (double)mobyutil::MB_randRangeFloat(-0.34906584,0.34906584);
        *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
      }
    }
    if ((*(int *)((int)pvVar6 + 0x22c) != 0) && (*(int *)((int)pvVar6 + 0x204) == 2)) {
      moby->state = '\x0f';
      if (moby->animationId == '\x01') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar16,1,0,5);
      return;
    }
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * 0.5 * mobyutil::g_FrameTime;
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(lVar16,1,0,5);
    }
    moby->state = '\x02';
    return;
  }
  fVar2 = (moby->pos).y - (victim->pos).y;
  fVar3 = (moby->pos).x - (victim->pos).x;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < DAT_00845e38) {
    moby->state = '\x06';
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * 2.0 * mobyutil::g_FrameTime;
    if (moby->animationId == '\x02') {
      return;
    }
    local_40 = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(lVar16,2,0,(int)(animationSpeed * 10.5));
    return;
  }
  iVar18 = mobyutil::MB_SplineFindRouteNode
                     (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240U,1,
                      (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,&victim->pos,
                      &local_b0);
  if ((iVar18 == 0) &&
     (iVar18 = mobyutil::MB_SplineFindRouteNode
                         (0.0,(int)pvVar6 + 0x240U,1,(longlong)*(int *)((int)pvVar6 + 0x244),uVar21,
                          &moby->pos,&victim->pos,&local_b0), iVar18 == 0)) {
    *(undefined4 *)((int)pvVar6 + 0x204) = 2;
  }
  else {
    dVar24 = (double)FUN_005e8338((double)(local_b0 - (moby->pos).x),
                                  (double)(local_ac - (moby->pos).y));
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,*(float *)((int)pvVar6 + 0x234));
    mobyutil::OrganicDeltAng
              ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x220));
    fVar2 = (moby->rotation).z;
    fVar3 = fVar2 + 1.5707963;
    fVar9 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar9 = fVar2;
    }
    fVar11 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar11 = fVar3;
    }
    fVar10 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
      fVar10 = fVar9;
    }
    fVar2 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
      fVar2 = fVar11;
    }
    fVar3 = fVar10 * fVar10;
    fVar9 = fVar2 * fVar2;
    fVar13 = fVar3 * fVar3 * fVar10;
    local_b8 = 0;
    fVar11 = fVar9 * fVar9 * fVar2;
    fVar14 = fVar3 * fVar13;
    fVar12 = fVar9 * fVar11;
    local_bc = (fVar3 * fVar14 * 2.601887e-06 +
               fVar14 * -0.0001980741 +
               fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_c0 = (fVar9 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2)
               * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_c0,
               (int)pvVar6 + 0x40);
    if (*(int *)((int)pvVar6 + 0x204) != 2) goto LAB_003bf9f0;
  }
  moby->state = '\x05';
LAB_003bf9f0:
  mobyupdate_helpers::M866_003bdbd0(lVar16);
  return;
}



