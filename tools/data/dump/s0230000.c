//==== 002300f4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1393_002300f4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1393_002300f4(void)

{
  DAT_00775278 = 0x10000;
  return;
}



//==== 00230110  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1393_00230110(void)
// callers(1): 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}
// callees(0): 

void mobyupdate_helpers::M1393_00230110(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00775300;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00775304;
  (&DAT_0077530c)[iVar5] = 0xff;
  (&DAT_0077530e)[iVar5] = 0xff;
  (&DAT_0077530d)[iVar5] = 0xff;
  (&DAT_0077530f)[iVar5] = 0xff;
  (&DAT_00775310)[iVar5] = 0xff;
  (&DAT_00775311)[iVar5] = 0xff;
  (&DAT_00775312)[iVar5] = 0xff;
  (&DAT_00775313)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00775300)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00775304)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00775310)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00775312)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00775311)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00775313)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_0077530d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_0077530f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_0077530c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_0077530e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x16);
  return;
}



//==== 00230308  ns=mobyupdate_unsorted  size=0x84c
// sig: undefined UpdateMoby_{1263_1393}(MobyInstance * moby)
// callers(0): 
// callees(12): 0006d7e0 draw::RegisterPostDraw; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 0017c3b0 water::WaterTile_PutDrop_Thunk; 00230110 mobyupdate_helpers::M1393_00230110; 00502578 fastfunc::FastWrapRot

/* Moby 1263
   Moby 1393 */

void mobyupdate_unsorted::UpdateMoby__1263_1393_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  undefined2 uVar19;
  longlong lVar20;
  ulonglong unaff_r24;
  int iVar21;
  ulonglong unaff_r25;
  BSphere *bounds;
  WaterTile *pWVar22;
  ulonglong unaff_r26;
  WaterTile *tile;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  undefined8 uVar29;
  ulonglong in_f29;
  undefined8 uVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x100;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar13;
  puVar7[0x22] = in_LR;
  puVar7[0x1b] = in_f27;
  puVar7[0x1c] = in_f28;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  puVar7[0x1a] = unaff_r31;
  iVar24 = hero::g_heroStateType;
  iVar21 = DAT_0096b2d0;
  puVar7[0x19] = unaff_r30;
  puVar7[0x18] = unaff_r29;
  puVar7[0x17] = unaff_r28;
  puVar7[0x16] = unaff_r27;
  puVar7[0x15] = unaff_r26;
  puVar7[0x14] = unaff_r25;
  puVar7[0x13] = unaff_r24;
  if (((((iVar21 == 0) || (*(short *)(iVar21 + 0xa6) != 0x45)) ||
       (*(char *)(iVar21 + 0x20) == -3 || *(char *)(iVar21 + 0x20) == -2)) ||
      (g_heroState != TURRET_PLANE_UI)) && (pfVar6 = (float *)moby->pVar, pfVar6 != (float *)0x0)) {
    if (moby->state == 0) {
      moby->modeBits = moby->modeBits | DISABLED;
      pfVar6[2] = pfVar6[2] * 0.017453292;
      pfVar6[3] = pfVar6[3] * 0.017453292 * mobyutil::g_FrameTime;
      if (pfVar6[4] == 0.0) {
        pWVar22 = (WaterTile *)&DAT_00775300;
        water::WaterTile_InitAll((WaterTile *)&DAT_00775300,0x16);
        water::WaterWave_ScaleTable(1.0);
        moby->updateDistance = -1;
        fVar4 = DirectionalLights[0].direction1.x;
        fVar2 = ABS(DirectionalLights[0].direction1.x);
        fVar3 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        uVar11 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
        fVar1 = 0.0;
        uVar14 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
        fVar4 = fVar2;
        if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
          fVar3 = fVar2;
        }
        fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar15 = uVar13 - 0xf0;
          lVar17 = uVar13 - 0x8c;
          lVar20 = uVar13 - 0x7c;
          lVar26 = 2;
          fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar7 + 0x10) = fVar3;
          *(float *)(puVar7 + 0xf) = fVar3;
          *(float *)((int)puVar7 + 0x7c) = fVar3;
          *(float *)((int)puVar7 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar4;
          *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar3;
          *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 100) * fVar3 * fVar3;
            iVar21 = (int)lVar17;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar20 = uVar13 - 0x8c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar15 = 2;
          do {
            iVar21 = (int)lVar16;
            iVar24 = (int)lVar20;
            lVar16 = lVar16 + 0x10;
            lVar20 = lVar20 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar21 + 0x74) + *(float *)(iVar24 + 4) +
                    *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
        }
        fVar2 = fVar1 + 1.5707963;
        iVar21 = 0;
        bounds = (BSphere *)&DAT_00f15400;
        fVar3 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar3 = fVar1;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
          fVar5 = fVar3;
        }
        fVar1 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar1 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x2d;
        fVar3 = fVar1 * fVar1;
        WaterTileConsts.tex1 = 0x2e;
        WaterTileConsts.alpha0 = 0x60;
        WaterTileConsts.alpha1 = 0x40;
        fVar9 = fVar2 * fVar2 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar1;
        fVar10 = fVar2 * fVar9;
        fVar8 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar2 * fVar10 * 2.601887e-06 +
             fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
             0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00775300;
        WaterTileBoxes = (WaterTileBox *)&DAT_00f15400;
        WaterTileCnt = 0x16;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        iVar24 = 0;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
        tile = pWVar22;
        do {
          water::WaterTile_CalcGridBSphere(tile,bounds);
          iVar24 = iVar24 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_0077531e + (int)pfVar6[4] * 0x11a0) =
               *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2);
        } while (iVar24 < 0x16);
        iVar25 = 0;
        iVar24 = 0;
        dVar33 = -6.0;
        dVar31 = 6.0;
        uVar30 = 0x4000000000000000;
        uVar29 = 0x3fc99999a0000000;
        do {
          iVar23 = 0;
          do {
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar31);
            dVar28 = (double)(float)((double)*(float *)((int)&DAT_00775300 + iVar24) + dVar27);
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar31);
            water::WaterTile_PutDrop_Thunk
                      (dVar28,(double)(float)((double)(pWVar22->tilePos).y + dVar27),uVar30,uVar29,
                       &DAT_00775300,0x16);
            iVar23 = iVar23 + 1;
          } while (iVar23 < 2);
          iVar25 = iVar25 + 1;
          pWVar22 = (WaterTile *)&pWVar22[1].ovlTex;
          iVar24 = iVar24 + 0x11a0;
        } while (iVar25 < 0x16);
        do {
          mobyupdate_helpers::M1393_00230110(iVar21);
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x16);
      }
      moby->drawDistance = 0;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      dVar33 = (double)(pfVar6[2] + 1.5707963);
      dVar31 = (double)(float)(3.141592502593994 - dVar33);
      if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
        dVar31 = dVar33;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar33);
      if ((double)(float)(-3.141592502593994 - dVar33) - dVar31 < 0.0) {
        dVar27 = dVar31;
      }
      dVar34 = 1.0;
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar33 = (double)(float)(dVar28 * dVar27);
      dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar33));
      (moby->pos).z =
           ((float)(dVar28 * dVar31) * 2.601887e-06 +
            (float)(dVar31 * -0.0001980741071747616 +
                   (double)(float)((double)(float)(dVar28 * dVar33) * 0.008333025500178337 +
                                  (double)(float)(dVar33 * -0.16666656732559204 + dVar27))) + 1.0) *
           (*pfVar6 - pfVar6[1]) * 0.5 + pfVar6[1];
      if (((iVar24 != 0x14) && (iVar24 != 0x19)) &&
         ((g_heroState != DEATH_MUD && g_heroState != DYING_GROUNDED && (g_heroState != DEATH_LAVA))
         )) {
        dVar31 = (double)fastfunc::FastWrapRot(pfVar6[2],pfVar6[3]);
        pfVar6[2] = (float)dVar31;
      }
      bVar12 = WaterTileConsts.alpha1;
      (&DAT_0077531c)[(int)pfVar6[4] * 0x11a0] = WaterTileConsts.alpha0;
      (&DAT_0077531d)[(int)pfVar6[4] * 0x11a0] = bVar12;
      iVar21 = mobyutil::MB_randInt(200);
      if (iVar21 == 0) {
        dVar32 = -4.0;
        dVar27 = 4.0;
        dVar31 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar28 = (double)(float)((double)(float)(&DAT_00775300)[(int)pfVar6[4] * 0x468] + dVar31);
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar27);
        water::WaterTile_PutDrop
                  ((float)dVar28,
                   (float)((double)(float)(&DAT_00775304)[(int)pfVar6[4] * 0x468] + dVar31),
                   (float)dVar34,-0.05,(WaterTile *)(&DAT_00775300 + (int)pfVar6[4] * 0x468),1,
                   (float)dVar33);
      }
    }
    if (-1 < (int)pfVar6[4]) {
      dVar33 = 0.0;
      *(f32 *)(&DAT_00775308 + (int)pfVar6[4] * 0x11a0) = (moby->pos).z;
      dVar31 = dVar33;
      iVar21 = mobyutil::MB_ScaledVecWrapper(0x4048000000000000,moby);
      if (iVar21 != -1) {
        dVar31 = 1.0;
      }
      uVar19 = 0;
      if (dVar31 != dVar33) {
        uVar19 = *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2);
      }
      *(undefined2 *)(&DAT_0077531e + (int)pfVar6[4] * 0x11a0) = uVar19;
      fVar1 = pfVar6[4];
      if (fVar1 == 0.0) {
        water::WaterTile_UpdateWaves((WaterTile *)&DAT_00775300,0x16);
        draw::RegisterPostDraw(&PTR_M1393_00230b54_00709a08,moby);
        fVar1 = pfVar6[4];
      }
      if (fVar1 == DAT_007752c0) {
        uVar19 = (undefined2)DAT_007752c4;
        *(undefined2 *)(&DAT_0077531e + (int)fVar1 * 0x11a0) = uVar19;
        *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2) = uVar19;
      }
    }
  }
  return;
}



//==== 00230b54  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1393_00230b54(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M1393_00230b54(void)

{
  water::WaterTile_DrawAll(&DAT_00775300,0x16);
  return;
}



//==== 00230b84  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1393_00230b84(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1393_00230b84(void)

{
  DAT_0078d738 = 0x10000;
  return;
}



//==== 00230bb8  ns=mobyupdate_helpers  size=0x53c
// sig: undefined M1264_00230bb8(void)
// callers(1): 002326a8 mobyupdate_unsorted::UpdateMoby_1264
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 00232fa0 mobyupdate_helpers::M1266_00232fa0
// strings: 00a1000c: 'None'

void mobyupdate_helpers::M1264_00230bb8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  vec4 *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  vec4 *pvVar14;
  ulonglong uVar15;
  byte in_cr6;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar23 [16];
  float fVar24;
  float local_80;
  
  lVar4 = ZEXT48(&stack0x00000000) - 0x60;
  puVar5 = (undefined4 *)lVar4;
  puVar5[3] = in_vr31_32_3;
  puVar5[2] = in_vr31_32_2;
  puVar5[1] = in_vr31_32_1;
  *puVar5 = in_vr31_32_0;
  pvVar1 = param_1->pVar;
  uVar15 = ZEXT48(pvVar1);
  auVar23 = ZEXT416(0);
  auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  lVar11 = -1;
  lVar7 = 0;
  dVar17 = 0.0;
  dVar16 = dVar17;
  if (0 < *(int *)((int)pvVar1 + 100)) {
    auVar23 = ZEXT416(0);
    auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    uVar9 = uVar15;
    do {
      auVar23 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      uVar6 = mobyutil::MB_damage(*(undefined4 *)((int)uVar9 + 0x70),0xffffffffffffffff,0);
      if ((int)uVar6 != 0) {
        auVar23 = loadVectorLeftIndexed(0x2c,uVar6);
        auVar19 = loadVectorRightIndexed(0x3c,uVar6);
        *(undefined1 *)(*(int *)((int)uVar9 + 0x70) + 0xa4) = 0xff;
        auVar18 = vectorAddFloatingPoint(auVar18,auVar23 | auVar19);
        lVar11 = lVar7;
      }
      lVar7 = lVar7 + 1;
      uVar9 = uVar9 + 4;
    } while ((int)lVar7 < *(int *)((int)pvVar1 + 100));
    lVar4 = 0x90;
    auVar23 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    local_80 = auVar18._0_4_;
    dVar17 = (double)local_80;
  }
  fVar24 = mobyutil::Delt((float)dVar16,(float)dVar17,(float *)((int)pvVar1 + 0xe0));
  auVar18 = ZEXT416(0);
  vectorCompareEqualToFloatingPoint
            (auVar23,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    auVar23 = ZEXT416(0xffffffff);
    auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar22 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar19 = loadVectorLeftIndexed(0xe0,uVar15);
    auVar20 = loadVectorRightIndexed(0xf0,uVar15);
    auVar23 = loadVectorLeftIndexed(4,0x230b98);
    auVar21 = loadVectorLeftIndexed(100,uVar15);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar19 | auVar20,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar18);
    auVar23 = loadVectorLeftIndexed(8,0x230b98);
    auVar20 = loadVectorRightIndexed(0x74,uVar15);
    auVar18 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = ZEXT416(1);
    auVar20 = vectorSubtractUnsignedWordModulo
                        (auVar21 | auVar20,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                         auVar22);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
               auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      iVar12 = *(int *)((int)pvVar1 + 100) + -1;
      CHAR_ARRAY_00a1000c[0x2b0] = -1;
      CHAR_ARRAY_00a1000c[0x2b1] = -1;
      *(int *)((int)pvVar1 + 100) = iVar12;
      M1266_00232fa0((double)fVar24,*(undefined4 *)((int)pvVar1 + iVar12 * 4 + 0x70));
      uVar10 = uVar15 + lVar11 * 4;
      uVar9 = uVar10 & 0xffffffff;
      iVar3 = (int)uVar10;
      iVar12 = *(int *)(iVar3 + 0x70);
      iVar13 = *(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70);
      *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar12 + 0x10);
      *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar12 + 0x14);
      *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(iVar12 + 0x18);
      *(undefined4 *)(iVar13 + 0x1c) = *(undefined4 *)(iVar12 + 0x1c);
      iVar12 = *(int *)(iVar3 + 0x70);
      iVar13 = *(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70);
      *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(iVar12 + 0x40);
      *(undefined4 *)(iVar13 + 0x44) = *(undefined4 *)(iVar12 + 0x44);
      *(undefined4 *)(iVar13 + 0x48) = *(undefined4 *)(iVar12 + 0x48);
      *(undefined4 *)(iVar13 + 0x4c) = *(undefined4 *)(iVar12 + 0x4c);
      sound::PlayMobySound
                (1,0,*(MobyInstance **)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70));
      iVar12 = (int)lVar11;
      if (iVar12 < *(int *)((int)pvVar1 + 100)) {
        auVar23 = ZEXT416(0xfffffff0);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        uVar10 = uVar15 + lVar11 * 2 & 0xffffffff;
        auVar18 = loadVectorLeftIndexed(0x90,uVar10);
        auVar19 = loadVectorLeftIndexed(0x92,uVar10);
        auVar20 = loadVectorRightIndexed(0xa0,uVar10);
        auVar21 = loadVectorRightIndexed(0xa2,uVar10);
        auVar18 = vectorShiftRightAlgebraicWord(auVar18 | auVar20,auVar23);
        auVar23 = vectorShiftRightAlgebraicWord(auVar19 | auVar21,auVar23);
        auVar23 = vectorSubtractUnsignedWordModulo(auVar18,auVar23);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        if (iVar12 < *(int *)((int)pvVar1 + 100)) {
          uVar10 = uVar15 + lVar11 * 4 & 0xffffffff;
          lVar7 = lVar11;
          do {
            lVar7 = lVar7 + 1;
            iVar13 = *(int *)((int)pvVar1 + 100);
            *(undefined4 *)((int)uVar10 + 0xc0) = *(undefined4 *)((int)uVar10 + 0xc4);
            uVar10 = uVar10 + 4;
          } while ((int)lVar7 < iVar13);
        }
        auVar18 = loadVectorLeftIndexed(0xc0,uVar9);
        auVar19 = loadVectorRightIndexed(0xd0,uVar9);
        auVar19 = vectorAddFloatingPoint(auVar18 | auVar19,auVar23);
        auVar23 = ZEXT416(0);
        auVar18 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar18,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
        uVar2 = storeVectorElementWordIndexed(auVar18,0xc0,uVar9);
        *(undefined4 *)(iVar3 + 0xc0U & 0xfffffffc) = uVar2;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar23 = loadVectorLeftIndexed(lVar4,(ulonglong)*(uint *)((int)pvVar1 + 0xf0));
          auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
          auVar23 = vectorAddFloatingPoint(auVar19,auVar23);
          auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0xc0,
                             uVar9);
          *(undefined4 *)(iVar3 + 0xc0U & 0xfffffffc) = uVar2;
        }
      }
      iVar13 = *(int *)((int)pvVar1 + 100);
      if (iVar12 < iVar13) {
        uVar15 = uVar15 + lVar11 * 2 & 0xffffffff;
        do {
          lVar11 = lVar11 + 1;
          iVar13 = *(int *)((int)pvVar1 + 100);
          *(undefined2 *)((int)uVar15 + 0x90) = *(undefined2 *)((int)uVar15 + 0x92);
          uVar15 = uVar15 + 2;
        } while ((int)lVar11 < iVar13);
      }
      if (iVar13 == 0) {
        sound::PlayMobySound(2,0,param_1);
        pvVar14 = &param_1->pos;
        mobyutil::MB_SpawnExplosionSparks(0x4008000000000000,0x402a000000000000,param_1,pvVar14);
        dVar17 = 90.5;
        pvVar8 = &param_1->rotation;
        dVar16 = 12.0;
        mobyutil::MB_SpawnDebrisMoby
                  ((double)(DAT_0071f418 * 12.0),param_1,0x602,pvVar14,pvVar8,
                   (int)(animationSpeed * 90.5),0);
        mobyutil::MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar16),param_1,0x603,pvVar14,pvVar8,
                   (int)((double)animationSpeed * dVar17),0);
        mobyutil::MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar16),param_1,0x784,pvVar14,pvVar8,
                   (int)((double)animationSpeed * dVar17),0);
        mobyfunc::DeleteMoby(param_1);
      }
    }
  }
  return;
}



//==== 00231108  ns=mobyupdate_helpers  size=0xc30
// sig: undefined M1264_00231108(void)
// callers(1): 002326a8 mobyupdate_unsorted::UpdateMoby_1264
// callees(5): 000f31a8 mobyfunc::UpdateMobyTransform; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1264_00231108(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  ulonglong uVar20;
  int iVar22;
  ulonglong uVar21;
  float *pfVar23;
  float *pfVar24;
  ulonglong unaff_r22;
  int iVar25;
  ulonglong unaff_r23;
  int iVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  longlong lVar28;
  longlong lVar29;
  ulonglong unaff_r28;
  longlong lVar30;
  ulonglong unaff_r29;
  int iVar31;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar20;
  puVar13[0x38] = in_LR;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  fVar19 = DAT_0078d788;
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar4 = *(float *)(param_1 + 200);
  dVar40 = 0.0;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  puVar13[0x30] = unaff_r31;
  fVar7 = *(float *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x78);
  puVar13[0x2f] = unaff_r30;
  fVar14 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  puVar9 = *(uint **)(iVar8 + 0xf0);
  iVar26 = *(int *)(iVar8 + 100);
  fVar19 = fVar19 / fVar14;
  dVar41 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar41 = (double)(fVar4 * fVar19);
  }
  dVar35 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar35 = (double)(fVar2 * fVar19);
  }
  dVar33 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar33 = (double)(fVar3 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar41 = (double)(fVar4 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar35 = (double)(fVar2 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar19);
  }
  dVar41 = dVar41 + (double)fVar7;
  dVar35 = dVar35 + (double)fVar6;
  puVar13[0x2e] = unaff_r29;
  puVar13[0x2d] = unaff_r28;
  puVar13[0x2c] = unaff_r27;
  puVar13[0x2b] = unaff_r26;
  puVar13[0x2a] = unaff_r25;
  puVar13[0x29] = unaff_r24;
  puVar13[0x28] = unaff_r23;
  puVar13[0x27] = unaff_r22;
  dVar33 = dVar33 + (double)fVar5;
  if (0 < iVar26) {
    iVar31 = 0;
    iVar26 = iVar8;
    iVar25 = iVar8;
    do {
      fVar4 = (float)dVar33;
      fVar3 = (float)dVar35;
      fVar2 = (float)dVar41;
      uVar10 = *puVar9;
      lVar30 = (longlong)*(short *)(iVar26 + 0x90);
      lVar28 = (lVar30 + 1) - (longlong)((int)(lVar30 + 1) / (int)uVar10) * (longlong)(int)uVar10;
      pfVar23 = (float *)(puVar9 + (int)lVar28 * 4 + 4);
      pfVar24 = (float *)((int)puVar9 + (int)(lVar30 << 4) + 0x10);
      dVar35 = (double)DAT_0078d784;
      lVar27 = (lVar30 + 2) - (longlong)((int)(lVar30 + 2) / (int)uVar10) * (longlong)(int)uVar10;
      fVar5 = (pfVar23[2] - fVar2) * (pfVar23[2] - fVar2) +
              (*pfVar23 - fVar4) * (*pfVar23 - fVar4) + (pfVar23[1] - fVar3) * (pfVar23[1] - fVar3);
      dVar41 = (double)SQRT((pfVar24[2] - fVar2) * (pfVar24[2] - fVar2) +
                            (*pfVar24 - fVar4) * (*pfVar24 - fVar4) +
                            (pfVar24[1] - fVar3) * (pfVar24[1] - fVar3));
      while (dVar33 = (double)SQRT(fVar5), dVar35 < dVar33) {
        lVar30 = (longlong)((int)(lVar28 + 1) / (int)uVar10) * (longlong)(int)uVar10;
        lVar29 = (lVar28 + 1) - lVar30;
        pfVar23 = (float *)(puVar9 + (int)lVar29 * 4 + 4);
        lVar27 = (lVar28 - (lVar30 + (longlong)((((int)lVar28 - (int)lVar30) + 2) / (int)uVar10) *
                                     (longlong)(int)uVar10)) + 2;
        lVar30 = lVar28;
        lVar28 = lVar29;
        dVar41 = dVar33;
        fVar5 = (pfVar23[2] - fVar2) * (pfVar23[2] - fVar2) +
                (*pfVar23 - fVar4) * (*pfVar23 - fVar4) +
                (pfVar23[1] - fVar3) * (pfVar23[1] - fVar3);
      }
      if (*(int *)((int)puVar9 + (int)(lVar30 << 4) + 0x1c) == 0x42280000) {
        pvVar11 = (*(MobyInstance **)(iVar25 + 0x70))->pVar;
        if (*(int *)((int)pvVar11 + 0x28) == 0) {
          if (g_gameMode == GAME_MODE_NORMAL) {
            sound::PlayMobySound(2,0,*(MobyInstance **)(iVar25 + 0x70));
            dVar35 = (double)DAT_0078d784;
          }
          auVar44 = ZEXT416(0xffffffff);
          auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
          auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar44 = loadVectorLeftIndexed(0xffffffffffffd78c,0x790000);
          auVar43 = vectorConvertFromSignedFixedPointWord(auVar44,0);
          auVar44 = loadVectorLeftIndexed(4,0x2310f4);
          auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar44 = vectorAddFloatingPoint
                              (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60
                              );
          auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar45);
          auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
          auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x28,
                              ZEXT48(pvVar11));
          *(undefined4 *)((int)pvVar11 + 0x28U & 0xfffffffc) = uVar12;
        }
      }
      *(short *)(iVar26 + 0x90) = (short)lVar30;
      dVar42 = dVar40;
      if (dVar35 - dVar41 < 0.0) {
        dVar42 = (double)((float)(dVar41 - dVar35) / (float)(dVar41 - dVar33));
      }
      *(float *)(iVar25 + 0xa0) = (float)dVar42;
      if (*(int *)(iVar25 + 0xc0) != 0) {
        dVar41 = (double)(float)(dVar42 - (double)*(float *)(iVar25 + 0xc0));
        lVar29 = fastfunc::FastDoubleToInt(dVar41);
        iVar22 = fastfunc::FastDoubleToInt(dVar41);
        puVar13[0x24] = (longlong)iVar22;
        uVar10 = *puVar9;
        uVar21 = (ulonglong)uVar10;
        dVar42 = (double)(float)(dVar41 - (double)(longlong)puVar13[0x24]);
        if (dVar42 < dVar40) {
          lVar29 = lVar29 + -1;
          dVar42 = (double)(float)(dVar42 + 1.0);
        }
        lVar30 = lVar29 + lVar30 + uVar21;
        lVar28 = lVar28 + lVar29 + uVar21;
        lVar27 = lVar27 + lVar29 + uVar21;
        lVar30 = lVar30 - (longlong)((int)lVar30 / (int)uVar10) * (longlong)(int)uVar10;
        lVar27 = lVar27 - (longlong)((int)lVar27 / (int)uVar10) * (longlong)(int)uVar10;
        lVar28 = lVar28 - (longlong)((int)lVar28 / (int)uVar10) * (longlong)(int)uVar10;
      }
      iVar22 = *(int *)(iVar25 + 0x70);
      iVar17 = (int)(lVar30 << 4);
      pfVar23 = (float *)((int)puVar9 + iVar17 + 0x10);
      iVar18 = (int)(lVar28 << 4);
      pfVar24 = (float *)((int)puVar9 + iVar18 + 0x10);
      dVar41 = (double)*pfVar23;
      dVar35 = (double)*pfVar24;
      fVar2 = pfVar24[1];
      fVar3 = pfVar23[1];
      dVar33 = (double)(float)(dVar35 - dVar41);
      fVar4 = pfVar24[2];
      fVar5 = pfVar23[2];
      dVar34 = (double)(float)((double)fVar2 - (double)fVar3);
      *(float *)(iVar22 + 0x1c) = pfVar24[3];
      dVar37 = ABS((double)(float)(dVar41 - dVar35));
      *(float *)(iVar22 + 0x10) = (float)(dVar42 * dVar33 + dVar41);
      *(float *)(iVar22 + 0x14) = (float)(dVar42 * dVar34 + (double)fVar3);
      *(float *)(iVar22 + 0x18) =
           (float)(dVar42 * (double)(float)((double)fVar4 - (double)fVar5) + (double)fVar5);
      fVar3 = *(float *)((int)puVar9 + iVar17 + 0x14);
      fVar4 = *(float *)((int)puVar9 + iVar18 + 0x14);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 - dVar35);
      fVar3 = fVar3 - fVar4;
      dVar36 = ABS((double)fVar3);
      *(float *)(puVar13 + 0x13) = fVar3;
      *(float *)((int)puVar13 + 0x9c) = (float)(dVar37 - dVar36);
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1d) & 4;
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar41 = ABS((double)*(float *)((int)puVar13 + 0x94));
      if ((double)*(float *)((int)puVar13 + 0x9c) - dVar40 < 0.0) {
        dVar41 = dVar36;
      }
      dVar36 = ABS((double)*(float *)(puVar13 + 0x13));
      if ((double)*(float *)((int)puVar13 + 0x9c) - dVar40 < 0.0) {
        dVar36 = dVar37;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar37 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar29 = uVar20 - 0xa0;
        lVar28 = uVar20 - 0xb0;
        lVar32 = 2;
        fVar6 = (float)(dVar36 - dVar41) / (float)(dVar36 + dVar41);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x10c) = fVar6;
        *(float *)((int)puVar13 + 0x104) = fVar6;
        *(float *)(puVar13 + 0x21) = fVar6;
        *(float *)(puVar13 + 0x20) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar7;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar6;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar30 + 0x100) = *(float *)((int)lVar30 + 0xf0) * fVar6 * fVar6;
          iVar22 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar29 = uVar20 - 0xb0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar29;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar30 + 0x100) = *(float *)((int)lVar30 + 0x100) * fVar6;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar22 = (int)lVar30;
          iVar15 = (int)lVar29;
          lVar30 = lVar30 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar22 + 0x100)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar37 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar5);
      }
      iVar22 = (int)(lVar27 << 4);
      pfVar23 = (float *)((int)puVar9 + iVar22 + 0x10);
      dVar36 = (double)*pfVar23;
      fVar3 = (float)(dVar35 - dVar36);
      fVar4 = fVar4 - *(float *)((int)puVar9 + iVar22 + 0x14);
      dVar39 = ABS((double)fVar3);
      dVar38 = ABS((double)fVar4);
      *(float *)(puVar13 + 0x11) = fVar3;
      *(float *)((int)puVar13 + 0x8c) = fVar4;
      *(float *)(puVar13 + 0x12) = (float)(dVar39 - dVar38);
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)(puVar13 + 0x11));
      if ((double)*(float *)(puVar13 + 0x12) - dVar40 < 0.0) {
        dVar41 = dVar38;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar38 = ABS((double)*(float *)((int)puVar13 + 0x8c));
      if ((double)*(float *)(puVar13 + 0x12) - dVar40 < 0.0) {
        dVar38 = dVar39;
      }
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar39 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar28 = uVar20 - 0xd0;
        lVar27 = uVar20 - 0xc0;
        lVar29 = 2;
        fVar5 = (float)(dVar38 - dVar41) / (float)(dVar38 + dVar41);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xec) = fVar5;
        *(float *)((int)puVar13 + 0xe4) = fVar5;
        *(float *)(puVar13 + 0x1d) = fVar5;
        *(float *)(puVar13 + 0x1c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar5;
        *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar30 + 0xe0) = *(float *)((int)lVar30 + 0xd0) * fVar5 * fVar5;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xd0;
        pfVar24 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar5 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar30 + 0xe0) = *(float *)((int)lVar30 + 0xe0) * fVar5;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar15 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar16 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar15 + 0xe0)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar4);
      }
      fVar3 = *(float *)((int)puVar9 + iVar18 + 0x18);
      fVar5 = *(float *)((int)puVar9 + iVar17 + 0x18) - fVar3;
      fVar4 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar34 * dVar34)));
      *(float *)(puVar13 + 0x10) = fVar5;
      dVar34 = ABS((double)fVar5);
      dVar33 = ABS((double)fVar4);
      *(float *)((int)puVar13 + 0x7c) = fVar4;
      *(float *)((int)puVar13 + 0x84) = (float)(dVar33 - dVar34);
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)((int)puVar13 + 0x7c));
      if ((double)*(float *)((int)puVar13 + 0x84) - dVar40 < 0.0) {
        dVar41 = dVar34;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar34 = ABS((double)*(float *)(puVar13 + 0x10));
      if ((double)*(float *)((int)puVar13 + 0x84) - dVar40 < 0.0) {
        dVar34 = dVar33;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar27 = uVar20 - 0xe0;
        lVar28 = uVar20 - 0xf0;
        lVar29 = 2;
        fVar6 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0xcc) = fVar6;
        *(float *)((int)puVar13 + 0xc4) = fVar6;
        *(float *)(puVar13 + 0x19) = fVar6;
        *(float *)(puVar13 + 0x18) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar7;
        *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar6;
        *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar30 + 0xc0) = *(float *)((int)lVar30 + 0xb0) * fVar6 * fVar6;
          iVar17 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xf0;
        pfVar24 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar30 + 0xc0) = *(float *)((int)lVar30 + 0xc0) * fVar6;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar17 = (int)lVar30;
          iVar18 = (int)lVar27;
          lVar30 = lVar30 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar17 + 0xc0)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar33 = (double)((float)(dVar41 + 0.7853981852531433) * fVar4 + fVar5);
      }
      fVar4 = (float)(dVar36 - dVar35);
      fVar2 = (float)((double)pfVar23[1] - (double)fVar2);
      fVar3 = fVar3 - *(float *)((int)puVar9 + iVar22 + 0x18);
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
      *(float *)((int)puVar13 + 0x74) = fVar3;
      dVar34 = ABS((double)fVar3);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar13 + 0xe) = fVar2;
      *(float *)(puVar13 + 0xf) = (float)(dVar35 - dVar34);
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)(puVar13 + 0xe));
      if ((double)*(float *)(puVar13 + 0xf) - dVar40 < 0.0) {
        dVar41 = dVar34;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar34 = ABS((double)*(float *)((int)puVar13 + 0x74));
      if ((double)*(float *)(puVar13 + 0xf) - dVar40 < 0.0) {
        dVar34 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar35 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar28 = uVar20 - 0x110;
        lVar27 = uVar20 - 0x100;
        lVar29 = 2;
        fVar4 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0xac) = fVar4;
        *(float *)((int)puVar13 + 0xa4) = fVar4;
        *(float *)(puVar13 + 0x15) = fVar4;
        *(float *)(puVar13 + 0x14) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar4;
        *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar30 + 0xa0) = *(float *)((int)lVar30 + 0x90) * fVar4 * fVar4;
          iVar22 = (int)lVar28;
          lVar30 = lVar30 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar4 = *pfVar23;
          fVar5 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar30 + 0xa0) = *(float *)((int)lVar30 + 0xa0) * fVar4;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar5;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar22 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar17 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar22 + 0xa0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar35 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar33 = -dVar33;
      dVar41 = (double)fastfunc::FastDiffRots(-dVar35,dVar33);
      dVar41 = (double)fastfunc::FastWrapRot((float)(dVar41 * dVar42),(float)dVar33);
      *(float *)(*(int *)(iVar25 + 0x70) + 0x44) = (float)dVar41;
      dVar41 = (double)fastfunc::FastDiffRots(dVar39,dVar37);
      dVar41 = (double)fastfunc::FastWrapRot((float)(dVar41 * dVar42),(float)dVar37);
      *(float *)(*(int *)(iVar25 + 0x70) + 0x48) = (float)dVar41;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar25 + 0x70));
      iVar22 = *(int *)(iVar25 + 0x70);
      fVar3 = *(float *)(iVar22 + 0xc4);
      fVar4 = *(float *)(iVar22 + 0xc0);
      fVar5 = *(float *)(iVar22 + 200);
      iVar31 = iVar31 + 1;
      iVar26 = iVar26 + 2;
      iVar25 = iVar25 + 4;
      dVar42 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)DAT_0078d788 / dVar42);
      dVar41 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar41 = (double)(fVar5 * fVar2);
      }
      dVar35 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar35 = (double)(fVar3 * fVar2);
      }
      dVar33 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar33 = (double)(fVar4 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar41 = (double)(fVar5 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar35 = (double)(fVar3 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar33 = (double)(fVar4 * fVar2);
      }
      dVar41 = dVar41 + (double)*(float *)(iVar22 + 0x18);
      dVar35 = dVar35 + (double)*(float *)(iVar22 + 0x14);
      dVar33 = dVar33 + (double)*(float *)(iVar22 + 0x10);
    } while (iVar31 < *(int *)(iVar8 + 100));
  }
  return;
}



//==== 00231d40  ns=mobyupdate_helpers  size=0x810
// sig: undefined M1264_00231d40(void)
// callers(1): 002326a8 mobyupdate_unsorted::UpdateMoby_1264
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1264_00231d40(int param_1)

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
  int iVar11;
  int *piVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar19;
  longlong lVar18;
  int iVar21;
  longlong lVar20;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  ulonglong in_f25;
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
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x180;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar15;
  puVar14[0x32] = in_LR;
  puVar14[0x26] = in_f22;
  puVar14[0x27] = in_f23;
  puVar14[0x28] = in_f24;
  puVar14[0x29] = in_f25;
  puVar14[0x2a] = in_f26;
  puVar14[0x2b] = in_f27;
  puVar14[0x2c] = in_f28;
  puVar14[0x2d] = in_f29;
  puVar14[0x2e] = in_f30;
  puVar14[0x2f] = in_f31;
  puVar14[0x25] = unaff_r31;
  puVar14[0x24] = unaff_r30;
  iVar11 = *(int *)(param_1 + 0x78);
  piVar12 = *(int **)(iVar11 + 0xf0);
  iVar13 = *(int *)(iVar11 + 0x68);
  iVar19 = *piVar12;
  iVar21 = (iVar13 + 1) - ((iVar13 + 1) / iVar19) * iVar19;
  dVar37 = (double)(float)piVar12[iVar13 * 4 + 4];
  dVar36 = (double)(float)piVar12[iVar13 * 4 + 5];
  iVar19 = (iVar13 + 2) - ((iVar13 + 2) / iVar19) * iVar19;
  dVar34 = (double)(float)piVar12[iVar21 * 4 + 4];
  dVar33 = (double)(float)piVar12[iVar21 * 4 + 5];
  fVar1 = (float)(dVar37 - dVar34);
  fVar2 = (float)(dVar36 - dVar33);
  dVar35 = (double)(float)piVar12[iVar13 * 4 + 6];
  fVar3 = (float)piVar12[iVar21 * 4 + 6];
  dVar32 = (double)(float)piVar12[iVar21 * 4 + 7];
  fVar4 = (float)piVar12[iVar19 * 4 + 4];
  fVar5 = (float)piVar12[iVar19 * 4 + 5];
  fVar6 = (float)piVar12[iVar19 * 4 + 6];
  *(float *)((int)puVar14 + 0x94) = fVar1;
  *(float *)(puVar14 + 0x13) = fVar2;
  *(float *)((int)puVar14 + 0x9c) = ABS(fVar1) - ABS(fVar2);
  dVar25 = 0.0;
  uVar23 = (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1d) & 4;
  fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar10 = ABS(*(float *)((int)puVar14 + 0x94));
  if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
    fVar10 = ABS(fVar2);
  }
  fVar8 = ABS(*(float *)(puVar14 + 0x13));
  if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar1);
  }
  fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar26 = dVar25;
  if (0.0 < fVar10) {
    lVar16 = uVar15 - 0x170;
    lVar18 = uVar15 - 0x80;
    lVar20 = uVar15 - 0x70;
    lVar24 = 2;
    fVar10 = (fVar8 - fVar10) / (fVar8 + fVar10);
    fVar8 = fVar10 * fVar10;
    *(float *)(puVar14 + 0x20) = fVar10;
    *(float *)((int)puVar14 + 0x104) = fVar10;
    *(float *)(puVar14 + 0x21) = fVar10;
    *(float *)((int)puVar14 + 0x10c) = fVar10;
    fVar10 = fVar8 * fVar8;
    *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar8;
    *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar10;
    *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar10 * fVar8;
    do {
      *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar10 * fVar10;
      iVar13 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar10 * fVar10;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0x80;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar10 = *pfVar22;
      fVar8 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar10;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x100)) +
                        *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar9 + fVar7);
  }
  fVar4 = (float)(dVar34 - (double)fVar4);
  fVar5 = (float)(dVar33 - (double)fVar5);
  *(float *)(puVar14 + 0x11) = fVar4;
  *(float *)((int)puVar14 + 0x8c) = fVar5;
  *(float *)(puVar14 + 0x12) = ABS(fVar4) - ABS(fVar5);
  uVar23 = (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1d) & 4;
  fVar9 = ABS(*(float *)(puVar14 + 0x11));
  if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
    fVar9 = ABS(fVar5);
  }
  fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar8 = ABS(*(float *)((int)puVar14 + 0x8c));
  if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
    fVar8 = ABS(fVar4);
  }
  fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar27 = dVar25;
  if (0.0 < fVar9) {
    lVar16 = uVar15 - 0x170;
    lVar18 = uVar15 - 0xa0;
    lVar20 = uVar15 - 0x90;
    lVar24 = 2;
    fVar9 = (fVar8 - fVar9) / (fVar8 + fVar9);
    fVar8 = fVar9 * fVar9;
    *(float *)(puVar14 + 0x1c) = fVar9;
    *(float *)((int)puVar14 + 0xe4) = fVar9;
    *(float *)(puVar14 + 0x1d) = fVar9;
    *(float *)((int)puVar14 + 0xec) = fVar9;
    fVar9 = fVar8 * fVar8;
    *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar8;
    *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar9;
    *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar9 * fVar8;
    do {
      *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xd0) * fVar9 * fVar9;
      iVar13 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xa0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar9 = *pfVar22;
      fVar8 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xe0) * fVar9;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar13 + 0xe0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar10 + fVar7);
  }
  fVar9 = (float)((double)fVar3 - dVar35);
  dVar30 = (double)fVar9;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)(puVar14 + 0x10) = fVar9;
  dVar28 = ABS((double)fVar1);
  *(float *)((int)puVar14 + 0x7c) = fVar1;
  *(float *)((int)puVar14 + 0x84) = (float)(dVar28 - ABS(dVar30));
  uVar23 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar14 + 0x7c));
  if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar30);
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  dVar29 = ABS((double)*(float *)(puVar14 + 0x10));
  if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
    dVar29 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar28 = dVar25;
  if (0.0 < dVar31) {
    lVar16 = uVar15 - 0x170;
    lVar20 = uVar15 - 0xb0;
    lVar18 = uVar15 - 0xc0;
    lVar24 = 2;
    fVar9 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
    fVar10 = fVar9 * fVar9;
    *(float *)(puVar14 + 0x18) = fVar9;
    *(float *)((int)puVar14 + 0xc4) = fVar9;
    *(float *)(puVar14 + 0x19) = fVar9;
    *(float *)((int)puVar14 + 0xcc) = fVar9;
    fVar9 = fVar10 * fVar10;
    *(float *)((int)puVar14 + 0xc4) = *(float *)((int)puVar14 + 0xc4) * fVar10;
    *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar9;
    *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar9 * fVar10;
    do {
      *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xb0) * fVar9 * fVar9;
      iVar13 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xc0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar9 = *pfVar22;
      fVar10 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xc0) * fVar9;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar10;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    dVar31 = dVar25;
    do {
      iVar13 = (int)lVar16;
      iVar19 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0xc0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar28 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar1 = (float)((double)fVar6 - (double)fVar3);
  fVar2 = ABS(fVar1);
  *(float *)((int)puVar14 + 0x74) = fVar1;
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar3 = ABS(fVar1);
  *(float *)(puVar14 + 0xe) = fVar1;
  *(float *)(puVar14 + 0xf) = fVar3 - fVar2;
  uVar23 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar14 + 0xe));
  if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar4 = ABS(*(float *)((int)puVar14 + 0x74));
  if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar24 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar14 + 0x14) = fVar1;
    *(float *)((int)puVar14 + 0xa4) = fVar1;
    *(float *)(puVar14 + 0x15) = fVar1;
    *(float *)((int)puVar14 + 0xac) = fVar1;
    lVar18 = uVar15 - 0x170;
    fVar1 = fVar4 * fVar4;
    lVar16 = uVar15 - 0xe0;
    lVar20 = uVar15 - 0xd0;
    *(float *)((int)puVar14 + 0xa4) = *(float *)((int)puVar14 + 0xa4) * fVar4;
    *(float *)(puVar14 + 0x15) = *(float *)(puVar14 + 0x15) * fVar1;
    *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0x90) * fVar1 * fVar1;
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xe0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar1 = *pfVar22;
      fVar4 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar13 + 0xa0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar25 = (double)fastfunc::FastDiffRots(dVar25,dVar28);
  dVar25 = (double)fastfunc::FastWrapRot
                             ((float)(dVar25 * (double)*(float *)(iVar11 + 0x6c)),(float)dVar28);
  *(float *)(param_1 + 0x44) = (float)dVar25;
  dVar25 = (double)fastfunc::FastDiffRots(dVar27,dVar26);
  dVar25 = (double)fastfunc::FastWrapRot
                             ((float)(dVar25 * (double)*(float *)(iVar11 + 0x6c)),(float)dVar26);
  *(float *)(param_1 + 0x48) = (float)dVar25;
  dVar25 = (double)*(float *)(iVar11 + 0x6c);
  *(float *)(param_1 + 0x1c) = (float)dVar32;
  *(float *)(param_1 + 0x18) = (float)(dVar25 * dVar30 + dVar35);
  *(float *)(param_1 + 0x10) = (float)(dVar25 * (double)(float)(dVar34 - dVar37) + dVar37);
  *(float *)(param_1 + 0x14) = (float)(dVar25 * (double)(float)(dVar33 - dVar36) + dVar36);
  return;
}



//==== 00232550  ns=mobyupdate_helpers  size=0x148
// sig: undefined M1264_00232550(void)
// callers(1): 002326a8 mobyupdate_unsorted::UpdateMoby_1264
// callees(0): 

void mobyupdate_helpers::M1264_00232550(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  Spline *pSVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  MobyInstance *pMVar9;
  longlong lVar10;
  
  lVar8 = 0;
  iVar2 = (int)((longlong)(short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe4) << 2);
  puVar7 = *(ushort **)((int)&mobyutil::g_MobyGroups + iVar2);
  if (puVar7 != (ushort *)0x0) {
    lVar10 = 0;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + ((LZCOUNT(0x527 - (uint)MobyInstance[uVar1 & 0x7fff].oClass) << 0x3a) >>
                         0x3f & (short)((short)lVar10 + 1) - lVar10);
    } while (-1 < (short)uVar1);
    pSVar4 = Splines[param_2];
    puVar7 = *(ushort **)((int)&mobyutil::g_MobyGroups + iVar2);
    iVar2 = pSVar4->cnt;
    pMVar9 = MobyInstance;
    do {
      uVar5 = *puVar7 & 0x7fff;
      if (pMVar9[uVar5].oClass == BLARG_SHIP_0527) {
        iVar6 = (int)(lVar8 << 4);
        pvVar3 = pMVar9[uVar5].pVar;
        pMVar9[uVar5].pos.x = *(f32 *)((int)&pSVar4->points[0].x + iVar6);
        pMVar9[uVar5].pos.y = *(f32 *)((int)&pSVar4->points[0].y + iVar6);
        pMVar9[uVar5].pos.z = *(f32 *)((int)&pSVar4->points[0].z + iVar6);
        pMVar9[uVar5].pos.w = *(f32 *)((int)&pSVar4->points[0].w + iVar6);
        *(int *)((int)pvVar3 + 0x60) = param_2;
        *(int *)((int)pvVar3 + 100) = (int)lVar8;
        *(undefined4 *)((int)pvVar3 + 0x68) = 0;
        lVar8 = (longlong)(short)((short)lVar8 + (short)(iVar2 / (int)lVar10));
        pMVar9 = MobyInstance;
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 002326a8  ns=mobyupdate_unsorted  size=0x3d8
// sig: undefined UpdateMoby_1264(MobyInstance * moby)
// callers(0): 
// callees(9): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 00109af0 mobyutil::Delt; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00230bb8 mobyupdate_helpers::M1264_00230bb8; 00231108 mobyupdate_helpers::M1264_00231108; 00231d40 mobyupdate_helpers::M1264_00231d40; 00232550 mobyupdate_helpers::M1264_00232550

/* Moby 1264 */

void mobyupdate_unsorted::UpdateMoby_1264(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  Spline *pSVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  double dVar11;
  double dVar12;
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    mobyupdate_helpers::M1264_00232550(moby,*(undefined4 *)((int)pvVar3 + 0x60));
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      moby->updateDistance = -1;
      iVar7 = *(int *)((int)pvVar3 + 0xec);
      iVar8 = 0;
      moby->drawDistance = 0x200;
      pSVar5 = Splines[iVar7];
      *(Spline **)((int)pvVar3 + 0xf0) = pSVar5;
      (moby->pos).x = pSVar5->points[0].x;
      (moby->pos).y = pSVar5->points[0].y;
      (moby->pos).z = pSVar5->points[0].z;
      fVar2 = pSVar5->points[0].w;
      *(undefined4 *)((int)pvVar3 + 100) = 8;
      (moby->pos).w = fVar2;
      *(undefined4 *)((int)pvVar3 + 0xe0) = 0x42a00000;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0;
      *(undefined4 *)((int)pvVar3 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar3 + 0xf4) = 0xffffffff;
      moby->state = '\x01';
      dVar11 = 2.0;
      pvVar10 = pvVar3;
      pvVar9 = pvVar3;
      do {
        pMVar6 = mobyfunc::CreateMoby(OIL_TANKER_PART);
        *(MobyInstance **)((int)pvVar10 + 0x70) = pMVar6;
        pMVar6->drawDistance = 0x200;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(*(int *)((int)pvVar10 + 0x70) + 0x30) = 0xff;
        *(undefined1 *)(*(int *)((int)pvVar10 + 0x70) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar10 + 0x70) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x70) + 0x34) =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)(*(int *)((int)pvVar10 + 0x70) + 0x2c) =
             (float)((double)*(float *)(*(int *)(*(int *)((int)pvVar10 + 0x70) + 0x24) + 0x24) *
                    dVar11);
        iVar7 = *(int *)((int)pvVar10 + 0x70);
        *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
        iVar7 = *(int *)((int)pvVar10 + 0x70);
        *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
        uVar4 = **(undefined4 **)((int)pvVar3 + 0xf0);
        *(undefined4 *)((int)pvVar10 + 0xc0) = 0;
        pvVar10 = (void *)((int)pvVar10 + 4);
        *(short *)((int)pvVar9 + 0x90) = (short)uVar4 + -100;
        pvVar9 = (void *)((int)pvVar9 + 2);
      } while (iVar8 < 8);
    }
  }
  else {
    if (bVar1 < 2) {
      if (g_heroState == TURRET_PLANE_UI) {
        iVar7 = 0;
        moby->state = '\x02';
        pSVar5 = Splines[*(int *)((int)pvVar3 + 0x60)];
        *(undefined4 *)((int)pvVar3 + 0x68) = 0;
        *(Spline **)((int)pvVar3 + 0xf0) = pSVar5;
        pvVar10 = pvVar3;
        pvVar9 = pvVar3;
        do {
          iVar7 = iVar7 + 1;
          uVar4 = **(undefined4 **)((int)pvVar3 + 0xf0);
          *(undefined4 *)((int)pvVar10 + 0xc0) = 0;
          pvVar10 = (void *)((int)pvVar10 + 4);
          *(short *)((int)pvVar9 + 0x90) = (short)uVar4 + -100;
          pvVar9 = (void *)((int)pvVar9 + 2);
        } while (iVar7 < 8);
      }
    }
    else if (2 < bVar1) {
      return;
    }
    fVar2 = *(float *)((int)pvVar3 + 0x6c) + DAT_0078d780;
    *(float *)((int)pvVar3 + 0x6c) = fVar2;
    if (1.0 < fVar2) {
      iVar7 = *(int *)((int)pvVar3 + 0x68) + 1;
      *(float *)((int)pvVar3 + 0x6c) = fVar2 - 1.0;
      *(int *)((int)pvVar3 + 0x68) =
           iVar7 - (iVar7 / **(int **)((int)pvVar3 + 0xf0)) * **(int **)((int)pvVar3 + 0xf0);
    }
    iVar7 = 0;
    dVar11 = 0.0;
    dVar12 = 5.0;
    pvVar10 = pvVar3;
    do {
      iVar8 = *(int *)((int)pvVar10 + 0xc0);
      mobyutil::Delt((float)dVar11,(float)((double)mobyutil::g_FrameTime * dVar12),
                     (float *)((int)pvVar10 + 0xc0));
      if (((iVar8 != 0) && (*(int *)((int)pvVar10 + 0xc0) == 0)) &&
         (*(MobyInstance **)((int)pvVar10 + 0x70) != (MobyInstance *)0x0)) {
        sound::PlayMobySound(0,0,*(MobyInstance **)((int)pvVar10 + 0x70));
      }
      iVar7 = iVar7 + 1;
      pvVar10 = (void *)((int)pvVar10 + 4);
    } while (iVar7 < 8);
    mobyupdate_helpers::M1264_00231d40(moby);
    mobyupdate_helpers::M1264_00231108(moby);
    if (moby->state == '\x02') {
      mobyupdate_helpers::M1264_00230bb8(moby);
    }
    iVar7 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0xf4));
    if (iVar7 == 0) {
      iVar7 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0xf4) = iVar7;
    }
  }
  return;
}



//==== 00232a80  ns=mobyupdate_helpers  size=0x50
// sig: undefined M1266_00232a80(MobyInstance * param_1, undefined4 param_2)
// callers(2): 0021e410 mobyupd::update1242::M1242_0021e410; 0021e750 mobyupd::update1242::M1242_Hud_Draw
// callees(0): 

int mobyupdate_helpers::M1266_00232a80(MobyInstance *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1->pVar;
  iVar1 = *(int *)((int)pvVar2 + 100);
  *param_2 = param_1;
  iVar3 = iVar1 + 1;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    param_2[1] = *(undefined4 *)((int)pvVar2 + 0x70);
    pvVar2 = (void *)((int)pvVar2 + 4);
    param_2 = param_2 + 1;
  }
  return iVar3;
}



//==== 00232ad0  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1266_00232ad0(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M1266_00232ad0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)
            ((int)&mobyutil::g_MobyGroups +
            (int)((longlong)(short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe4) << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar2 & 0x7fff].oClass == BLARG_SHIP_0527) {
        mobyfunc::DeleteMoby(MobyInstance + (*puVar2 & 0x7fff));
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00232b58  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1266_00232b58(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1266_00232b58(void)

{
  DAT_0078d7e0 = 0x10000;
  return;
}



//==== 00232b90  ns=mobyupdate_helpers  size=0x400
// sig: undefined M1266_00232b90(MobyInstance * moby)
// callers(0): 
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0011a560 mobyutil::MB_SpawnDebrisMoby; 00292c60 mobyupdate_helpers::M1524_00292c60; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1265 */

void mobyupdate_helpers::M1266_00232b90(MobyInstance *moby)

{
  f32 *pfVar1;
  longlong lVar2;
  int iVar3;
  undefined8 in_r5;
  undefined8 in_r9;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  lVar2 = (longlong)(int)moby;
  pfVar1 = (f32 *)moby->pVar;
  if (moby->state == 0) {
    iVar3 = fastfunc::FastDecTimerS32(pfVar1 + 10);
    if ((((iVar3 == 0) && (iVar3 = mobyutil::MB_randInt(DAT_0078d810), iVar3 == 0)) &&
        (moby->enabled != '\0')) && (0x46 < numSpawnableMobys)) {
      mobyutil::MB_randSphere(0,(double)(DAT_0078d838 * mobyutil::g_FrameTime),local_80);
      mobyutil::MB_randRangeFloat(DAT_0078d830,DAT_0078d834);
      M1524_00292c60(local_a0,local_90,&DAT_00ef1a90);
    }
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    pfVar1[3] = (moby->pos).w;
  }
  else if (moby->state < 2) {
    lVar5 = lVar2 + 0x10;
    mobyutil::MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar2,lVar5,in_r5,0xffffffffffffffff);
    lVar4 = lVar2 + 0x40;
    dVar7 = 90.5;
    dVar6 = 12.0;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(DAT_0071f418 * 12.0),lVar2,0x785,lVar5,lVar4,(int)(animationSpeed * 90.5),0,
               in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar6),lVar2,0x786,lVar5,lVar4,
               (int)((double)animationSpeed * dVar7),0,in_r9,local_70);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar6),lVar2,0x787,lVar5,lVar4,
               (int)((double)animationSpeed * dVar7),0,in_r9,local_70);
    moby->state = '\x02';
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 00232fa0  ns=mobyupdate_helpers  size=0xe8
// sig: undefined M1266_00232fa0(void)
// callers(1): 00230bb8 mobyupdate_helpers::M1264_00230bb8
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M1266_00232fa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pfVar4 = *(float **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 1;
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  *(undefined4 *)(param_1 + 0x94) = 0;
  pfVar4[4] = *(float *)(param_1 + 0x10) - fVar1;
  pfVar4[5] = *(float *)(param_1 + 0x14) - fVar2;
  pfVar4[6] = *(float *)(param_1 + 0x18) - fVar3;
  pfVar4[7] = *(float *)(param_1 + 0x1c);
  dVar8 = 20.0;
  dVar7 = 60.0;
  dVar5 = (double)mobyutil::MB_randRangeFloat(20.0,60.0);
  dVar6 = 0.01745329238474369;
  pfVar4[8] = (float)(dVar5 * 0.01745329238474369) * mobyutil::g_FrameTime;
  dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
  pfVar4[9] = (float)(dVar5 * dVar6) * mobyutil::g_FrameTime;
  return;
}



//==== 00233088  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1266_00233088(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1266_00233088(void)

{
  DAT_0078d88c = 0x10000;
  return;
}



//==== 002330a0  ns=mobyupdate_helpers  size=0x50
// sig: undefined M1266_002330a0(void)
// callers(1): 00233180 mobyupdate_unsorted::UpdateMoby_1266
// callees(0): 

longlong mobyupdate_helpers::M1266_002330a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  param_2 = param_2 + -1;
  while( true ) {
    lVar2 = (longlong)param_2;
    if (param_2 < 0) {
      return lVar2;
    }
    iVar1 = (int)(lVar2 << 2);
    if (*(int *)(param_1 + iVar1) < worldUpdateTime) break;
    param_2 = param_2 + -1;
  }
  *(int *)(param_1 + iVar1) = param_3 + worldUpdateTime;
  return lVar2;
}



//==== 00233180  ns=mobyupdate_unsorted  size=0x23b0
// sig: undefined UpdateMoby_1266(MobyInstance * moby)
// callers(0): 
// callees(49): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 001118d8 mobyutil::MB_getTarget; 001367d0 path::PathFindClosestPnt; 001385d0 path::Path_PickNextNode; 002330a0 mobyupdate_helpers::M1266_002330a0; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e70 FUN_005e7e70; 005e7e98 FUN_005e7e98

/* Moby 1266 */

void mobyupdate_unsorted::UpdateMoby_1266(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  undefined2 uVar16;
  int iVar13;
  short sVar17;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar12;
  int unused;
  longlong lVar18;
  vec4 *pvVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  f32 local_240;
  f32 local_23c;
  undefined1 auStack_230 [16];
  undefined1 local_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  Vec4 local_1b0;
  undefined1 auStack_1a0 [16];
  float local_190;
  float local_18c;
  undefined4 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  Vec4 local_160;
  undefined1 auStack_150 [16];
  float local_140;
  float local_13c;
  undefined4 local_138;
  Vec4 local_130;
  undefined1 auStack_120 [16];
  float local_110;
  float local_10c;
  undefined4 local_108;
  f32 local_100;
  f32 local_fc;
  float local_f8;
  f32 local_f4;
  Vec4 local_f0 [4];
  MobyInstance *local_b0;
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  float local_98 [2];
  longlong local_90;
  
  lVar11 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar21 = ZEXT48(pvVar5);
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  moby->collision = moby->pClass->collision;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  dVar26 = 4.0;
  mobyutil::MB_getTarget
            ((double)(*(float *)((int)pvVar5 + 0x1fc) + 4.0),lVar11,&DAT_002330f0,local_f0);
  lVar18 = lVar11 + 0x10;
  FUN_005e7e98(&local_240,lVar18);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar5 + 0x214) = uVar16;
  }
  *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar21 + 0x208);
  iVar13 = fastfunc::FastDecTimerS16(uVar21 + 0x214);
  uVar15 = 0x42000000;
  if (iVar13 != 0) {
    uVar15 = 0x41800000;
  }
  *(undefined4 *)((int)pvVar5 + 0x1fc) = uVar15;
  dVar29 = 0.0;
  local_9c = 0;
  iVar13 = mobyutil::MB_damage(lVar11,0x330000,0);
  unused = 0;
  mobyutil::MB_HandleDamage(moby,iVar13,uVar21 + 0x20,0,auStack_a0,&local_9c,0,4);
  fastfunc::FastDecTimerS16(uVar21 + 0x26);
  sVar4 = *(short *)((int)pvVar5 + 0x26);
  sVar17 = idol::GetAnimDuration(0x2d);
  if (((sVar4 < sVar17) && (iVar13 != 0)) && (moby->state != 'c')) {
    sVar4 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6);
    if (((sVar4 == 0xb0) || (sVar4 == 0xb1)) && (*(short *)((int)pvVar5 + 0x26) != 0)) {
      *(undefined4 *)(iVar13 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar13 + 0x2c) != 0) {
      dVar22 = (double)FUN_005e8338((double)((moby->pos).x - local_f0[0].x),
                                    (double)((moby->pos).y - local_f0[0].y));
      local_98[0] = (float)dVar22;
      fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar13 + 0x2c);
      *(undefined1 *)((int)pvVar5 + 0x5a) = 2;
      *(undefined1 *)((int)pvVar5 + 0x58) = 10;
      *(undefined4 *)((int)pvVar5 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar5 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar5 + 0x20) = fVar3;
      fVar10 = mobyutil::g_FrameTime;
      fVar9 = DAT_0078d8b4 * mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar5 + 0x144) = 9;
      *(float *)((int)pvVar5 + 0x138) = fVar9;
      fVar9 = DAT_0078d8b0;
      *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
      *(float *)((int)pvVar5 + 0x13c) = fVar9 * fVar10;
      if (dVar29 < (double)fVar3) {
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_98,
                   uVar21 + 0x138,uVar21 + 0x13c);
        mobyutil::MB_StartKick((double)local_98[0],lVar11,uVar21 + 0x120);
        unused = 6;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\x06';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0xfa;
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar5 + 0x26) = uVar16;
        mobyutil::MB_UpdateLightsTransition(lVar11,uVar21 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = mobyutil::g_FrameTime * 8.0;
        *(float *)((int)pvVar5 + 0x13c) = fVar3 * 10.0;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_98,
                   uVar21 + 0x138,uVar21 + 0x13c);
        mobyutil::MB_StartKick((double)local_98[0],lVar11,uVar21 + 0x120);
        unused = 99;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41900000;
        moby->state = 'c';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar11,uVar21 + 0x110);
        mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar21 + 0x1d0,lVar18);
        if (*(short *)((int)pvVar5 + 0x20a) == 0) {
          fVar3 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar3 + 6.0;
          if (uVar2 != '\0') {
            mobyutil::MB_SetAnimation(lVar11,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar11,4,0,0);
          }
        }
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar5 + 0x24) = 1;
        *(undefined2 *)((int)pvVar5 + 0x214) = 0;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        *(undefined1 *)((int)pvVar5 + 0x58) = 8;
        *(undefined1 *)((int)pvVar5 + 0x5a) = 4;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar5 + 0x180));
        *(undefined4 *)((int)pvVar5 + 0x18c) = 0x40000000;
        *(undefined4 *)((int)pvVar5 + 0x188) = 0x40000000;
        fVar3 = *(float *)((int)pvVar5 + 0x204) * mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0x180) = 0x38d;
        *(uint *)((int)pvVar5 + 0x1b8) = *(uint *)((int)pvVar5 + 0x1b8) | 0x30;
        *(float *)((int)pvVar5 + 0x1a4) = fVar3;
        uVar14 = rand();
        if ((uVar14 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar5 + 0xd0) = &DAT_0078d8c0;
        if (*(int *)((int)pvVar5 + 0x228) != -1) {
          iVar13 = path::PathFindClosestPnt
                             ((float)dVar29,(Vec4 *)lVar18,Splines[*(int *)((int)pvVar5 + 0x228)]);
          *(int *)((int)pvVar5 + 0x22c) = iVar13;
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_200,local_f0,lVar18);
        dVar29 = (double)FUN_005e8030(auStack_200);
        if ((((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar29) ||
            (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
           (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
            uVar12 = mobyutil::MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_90 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar25 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,2,0,uVar25);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_200);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar25 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,0,0,uVar25);
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            uVar25 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,5,0,uVar25);
          }
        }
      }
      else if (bVar1 < 3) {
        uVar25 = FUN_005e8338((double)((moby->pos).x - local_f0[0].x),
                              (double)((moby->pos).y - local_f0[0].y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar25,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11,
                   &DAT_002330f0,uVar21 + 0x1f0);
        FUN_005e81f0(auStack_1d0,local_f0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1d0);
        if ((((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
           (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
            uVar12 = mobyutil::MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_90 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar25 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,2,0,uVar25);
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar12 = mobyutil::MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_90 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar25 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,2,0,uVar25);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          uVar25 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,4,0,uVar25);
        }
      }
      else {
        dVar22 = ABS((double)((moby->pos).z - local_f0[0].z));
        dVar29 = (double)FUN_005e8588(lVar18,local_f0);
        dVar29 = (double)(float)(dVar22 / dVar29);
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          FUN_005e7e98(&local_1b0,local_f0);
        }
        else {
          path::Path_PickNextNode(moby,Splines[*(int *)((int)pvVar5 + 0x21c)],local_f0,&local_1b0);
        }
        dVar22 = (double)FUN_005e8338((double)(local_1b0.x - (moby->pos).x),
                                      (double)(local_1b0.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar22 + (double)*(float *)((int)pvVar5 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        dVar22 = (double)mathfunc::cosf((moby->rotation).z);
        dVar27 = 2.0;
        local_1c0 = (float)(dVar22 * 2.0);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1bc = (float)(dVar22 * dVar27);
        local_1b8 = 0;
        dVar22 = 1.0;
        uVar12 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_1c0
                            ,&local_1b0);
        iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x210);
        if (iVar13 != 0) {
          dVar27 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          fVar3 = animationSpeed;
          *(float *)((int)pvVar5 + 500) = -*(float *)((int)pvVar5 + 500);
          *(int *)((int)pvVar5 + 0x210) = (int)(fVar3 * ((float)(longlong)dVar27 + 0.5));
        }
        FUN_005e81f0(auStack_1a0,local_f0,uVar21 + 0x1d0);
        dVar27 = (double)FUN_005e8588(lVar18,local_f0);
        if ((1.5 <= dVar27) || ((uVar12 & 2) != 0)) {
          if ((dVar22 < dVar29) || ((uVar12 & 2) != 0)) {
            (moby->pos).x = local_240;
            (moby->pos).y = local_23c;
          }
          else {
            dVar29 = (double)FUN_005e8030(auStack_1a0);
            if (((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar29) ||
               (8.0 <= ABS((moby->pos).z - local_f0[0].z))) {
              if (moby->setByGroup != '\x01') {
                moby->state = '\x05';
              }
            }
            else if (moby->group != -1) {
              mobyutil::MB_SetGroupField(moby->group,1);
            }
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x03') {
            local_90 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar11,3,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar25 = FUN_005e8338((double)(local_f0[0].x - (moby->pos).x),
                              (double)(local_f0[0].y - (moby->pos).y));
        dVar26 = 0.20000000298023224;
        mobyutil::OrganicDeltAngSpeed
                  (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                   &DAT_002330f0,uVar21 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar29 = (double)mobyfunc::BlendAnimFrame(moby), dVar29 == 13.0)) &&
           ((ABS((moby->pos).z - local_f0[0].z) < 0.5 &&
            (dVar29 = (double)FUN_005e8588(lVar18,local_f0), dVar29 < 2.0)))) {
          dVar29 = (double)FUN_005e8338((double)(local_f0[0].x - (moby->pos).x),
                                        (double)(local_f0[0].y - (moby->pos).y));
          dVar29 = (double)fastfunc::FastSubRots((float)dVar29,(moby->rotation).z);
          if (dVar29 < 0.2617993950843811) {
            dVar29 = (double)mathfunc::cosf((moby->rotation).z);
            local_190 = (float)(dVar29 * dVar26);
            dVar29 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_18c = (float)(dVar29 * dVar26);
            local_188 = 0;
            local_180 = local_f0[0].x;
            local_17c = local_f0[0].y;
            local_174 = local_f0[0].w;
            local_178 = local_f0[0].z + 0.75;
            if (local_b0 != (MobyInstance *)0x0) {
              mobyutil::CollDamageMobyDirect(1.0,local_b0,moby,1,unused,&local_180,&local_190);
            }
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar26 = (double)FUN_005e8588(lVar18,local_f0), 1.5 < dVar26)) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
        }
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
        *(float *)((int)pvVar5 + 0x198) = fVar3;
        fVar3 = (moby->pos).z + fVar3;
        (moby->pos).z = fVar3;
        if ((double)fVar3 < dVar26) {
          *(undefined4 *)((int)pvVar5 + 0x198) = 0;
          (moby->pos).z = (float)dVar26;
        }
      }
      else if (bVar1 < 6) {
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          local_160.x = *(float *)((int)pvVar5 + 0x1d0);
          local_160.y = *(float *)((int)pvVar5 + 0x1d4);
          local_160.z = *(float *)((int)pvVar5 + 0x1d8);
          local_160.w = *(float *)((int)pvVar5 + 0x1dc);
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                     &local_160);
        }
        uVar25 = FUN_005e8338((double)(local_160.x - (moby->pos).x),
                              (double)(local_160.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar25,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11);
        dVar26 = (double)mathfunc::cosf((moby->rotation).z);
        dVar29 = 2.0;
        local_170 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_16c = (float)(dVar26 * dVar29);
        local_168 = 0;
        uVar12 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_170
                            ,&local_160);
        dVar26 = (double)FUN_005e8588(lVar18,uVar21 + 0x1d0);
        if ((dVar26 < dVar29) && (moby->state = '\x01', moby->animationId != '\x04')) {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 3.5));
        }
        FUN_005e81f0(auStack_150,local_f0,uVar21 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_150);
        if ((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              local_90 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
            }
          }
          else if ((uVar12 & 2) != 0) {
            (moby->pos).x = local_240;
            uVar2 = moby->animationId;
            (moby->pos).y = local_23c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_90 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            local_90 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
      else {
        uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
        if ((uVar14 & 1) != 0) {
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
          return;
        }
        fVar6 = (moby->pos).z;
        uVar14 = (int)fVar6 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar13 = FUN_0048c188(lVar11,uVar21 + 0x120);
      if (iVar13 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar11,0,0,0);
        }
        *(undefined2 *)((int)pvVar5 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_1f0,local_f0,lVar18);
      dVar29 = (double)FUN_005e8030(auStack_1f0);
      if (((dVar29 < (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) - dVar26)) &&
          (ABS((moby->pos).z - local_f0[0].z) < 8.0)) &&
         (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
        fVar3 = (moby->pos).z;
        moby->state = '\x02';
        uVar2 = moby->animationId;
        (moby->pos).z = fVar3 + 1.0;
        if (uVar2 != '\x05') {
          uVar25 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,5,0,uVar25);
        }
      }
    }
    goto LAB_002354d4;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar25 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar5 + 0x1e4) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        lVar20 = uVar21 + 0x40;
        FUN_005e81f0(lVar20,uVar21 + 0x1e0,lVar18);
        mobyutil::ClampVec3Magnitude
                  ((double)(float)((double)mobyutil::g_FrameTime * dVar26),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_210,lVar20,lVar18);
        iVar13 = collproc::CollSphere(0x4079000000000000,auStack_210);
        if (iVar13 == 0) {
          FUN_005e7e98(lVar18,auStack_210);
        }
        else {
          FUN_005e7e70(lVar20);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar20);
        if (dVar26 == dVar29) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        mobyutil::Delt(mobyutil::g_FrameTime * 8.0,DAT_0071f418 * 10.8,(float *)((int)pvVar5 + 0x48)
                      );
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        (moby->pos).z = fVar3;
        if ((float)(dVar26 + 6.0) <= fVar3) {
          (moby->pos).z = (float)(dVar26 + 6.0);
          moby->state = '\x0e';
          FUN_005e7e70(uVar21 + 0x40);
        }
      }
      else {
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        mobyutil::Delt(mobyutil::g_FrameTime * -8.0,DAT_0071f418 * 10.8,
                       (float *)((int)pvVar5 + 0x48));
        uVar2 = moby->animationId;
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        dVar29 = (double)fVar3;
        (moby->pos).z = fVar3;
        if (((uVar2 != '\x01') &&
            ((float)(dVar29 - dVar26) <= mobyutil::g_FrameTime * 8.0 * animationSpeed * 45.0)) &&
           (uVar2 != '\x01')) {
          uVar25 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar11,1,0,uVar25);
          dVar29 = (double)(moby->pos).z;
        }
        if (dVar29 <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar12 = mobyutil::MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_90 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          FUN_005e7e70(uVar21 + 0x40);
          if (moby->animationId != '\x02') {
            uVar25 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,2,0,uVar25);
          }
        }
      }
    }
    else if (bVar1 == 99) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 0x140) != 0) {
        iVar13 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
        local_90 = (longlong)iVar13;
        iVar13 = mobyupdate_helpers::M1266_002330a0(&DAT_00f15584,3,iVar13);
        if (-1 < iVar13) {
          mobyutil::MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar11,lVar18,&DAT_002330f0,4);
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002354d4;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar25 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar5 + 0x1d4) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                 &DAT_002330f0,uVar21 + 0x1f0);
      FUN_005e81f0(auStack_1e0,local_f0,uVar21 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_1e0);
      if (((dVar26 < (double)*(float *)((int)pvVar5 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar5 + 0x1d8) - local_f0[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\x06') {
          uVar25 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,6,0,uVar25);
        }
        fVar3 = DAT_0078d8bc;
        dVar26 = (double)DAT_0078d8bc;
        *(undefined4 *)((int)pvVar5 + 0x134) = 0;
        *(float *)((int)pvVar5 + 0x130) = fVar3;
        fVar3 = DAT_0078d8b8 * mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        dVar26 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar18,uVar21 + 0x1d0);
        *(float *)((int)pvVar5 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar5 + 0x144) = 0xd;
        mobyutil::MB_StartKick((double)fVar3,lVar11,uVar21 + 0x120,0xd,6,1,0);
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\v';
      }
    }
    else {
      uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 1) != 0) {
        moby->state = '\x03';
        uVar21 = mobyutil::MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar21 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_90 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        if (moby->animationId == '\x02') {
          return;
        }
        uVar25 = idol::GetAnimDuration(3);
        mobyutil::MB_SetAnimation(lVar11,2,8,uVar25);
        return;
      }
      fVar6 = (moby->pos).z;
      uVar14 = (int)fVar6 >> 0x1f;
      if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
        mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002354d4;
  }
  if (bVar1 < 0xd) {
    dVar29 = ABS((double)((moby->pos).z - local_f0[0].z));
    dVar26 = (double)FUN_005e8588(lVar18,local_f0);
    dVar26 = (double)(float)(dVar29 / dVar26);
    if (*(int *)((int)pvVar5 + 0x21c) == -1) {
      local_130.x = *(float *)((int)pvVar5 + 0x1d0);
      local_130.y = *(float *)((int)pvVar5 + 0x1d4);
      local_130.z = *(float *)((int)pvVar5 + 0x1d8);
      local_130.w = *(float *)((int)pvVar5 + 0x1dc);
    }
    else {
      path::Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                 &local_130);
    }
    uVar25 = FUN_005e8338((double)(local_130.x - (moby->pos).x),
                          (double)(local_130.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
    dVar29 = (double)mathfunc::cosf((moby->rotation).z);
    dVar22 = 2.0;
    local_140 = (float)(dVar29 * 2.0);
    dVar29 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_13c = (float)(dVar29 * dVar22);
    local_138 = 0;
    dVar22 = 1.0;
    uVar12 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_140,
                        &local_130);
    FUN_005e81f0(auStack_120,local_f0,uVar21 + 0x1d0);
    dVar29 = (double)FUN_005e8588(lVar18,local_f0);
    if ((1.5 <= dVar29) || (dVar22 < dVar26)) {
      if ((dVar22 < dVar26) || ((uVar12 & 2) != 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          mobyutil::MB_randInt(4);
          iVar13 = mobyutil::MB_randInt(4);
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation
                    (lVar11,((LZCOUNT(-iVar13) << 0x3a) >> 0x3f & 1U) + 4,0,
                     (int)(animationSpeed * 3.5));
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x02') {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x03') {
        local_90 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar11,3,0,(int)(animationSpeed * 3.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002354d4;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_230,local_f0,lVar18);
    uVar25 = 0x3fe0000000000000;
    dVar22 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0x120);
    dVar27 = 1.0;
    if ((((dVar22 <= 1.0) ||
         (dVar23 = (double)FUN_005e8030(auStack_230),
         (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar23)) ||
        (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
       (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
      if (((dVar22 <= dVar27) || (moby->setByGroup != '\x01')) ||
         (iVar13 = mobyutil::MB_randInt(4), iVar13 != 0)) {
        if (*(int *)((int)pvVar5 + 0x228) == -1) {
          iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x20c);
          if (iVar13 != 0) {
            uVar15 = idol::GetAnimDuration(0x78);
            *(undefined4 *)((int)pvVar5 + 0x20c) = uVar15;
            iVar13 = 0;
            dVar23 = 3.0;
            dVar22 = 5.0;
            dVar26 = 7.0;
            do {
              mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar23);
              dVar24 = (double)mobyutil::MB_randRot();
              mathfunc::cosf((float)dVar24);
              FUN_005e8128(dVar24);
              mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar26);
              FUN_005e7f54(uVar21 + 0x1e0,local_220,uVar21 + 0x1d0);
              dVar24 = (double)mobyutil::GetGroundZ(uVar25,uVar21 + 0x1e0,0x120);
              if (dVar27 < dVar24) break;
              iVar13 = iVar13 + 1;
            } while (iVar13 < 10);
            moby->state = '\x0f';
          }
        }
        else {
          pSVar8 = Splines[*(int *)((int)pvVar5 + 0x228)];
          dVar26 = (double)FUN_005e8548(lVar18,pSVar8->points + *(int *)((int)pvVar5 + 0x22c));
          iVar13 = *(int *)((int)pvVar5 + 0x22c);
          if (dVar26 < 0.25) {
            iVar13 = iVar13 + 1;
            *(int *)((int)pvVar5 + 0x22c) = iVar13;
            if (pSVar8->cnt <= iVar13) {
              iVar13 = 0;
              *(undefined4 *)((int)pvVar5 + 0x22c) = 0;
            }
          }
          FUN_005e7e98(uVar21 + 0x1e0,pSVar8->points + iVar13);
          moby->state = '\x0f';
        }
      }
      else {
        uVar12 = mobyutil::MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar12 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_90 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        moby->state = '\x11';
        FUN_005e7e70(uVar21 + 0x40);
        moby->setByGroup = '\0';
      }
    }
    else {
      moby->state = '\x11';
    }
    goto LAB_002354d4;
  }
  if ((moby->updateId != '\x02') && (moby->animationId != '\x02')) {
    local_90 = (longlong)(int)(animationSpeed * 3.5);
    mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)mathfunc::cosf((moby->rotation).z);
  local_110 = (float)((double)(*(float *)((int)pvVar5 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_108 = 0;
  local_10c = (float)((double)(*(float *)((int)pvVar5 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  FUN_005e7f54(&local_100,lVar18,&local_110);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar27 = 2.0;
    dVar22 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar7 = MobyUpdateChainStart;
    do {
      if (((pMVar7 != moby) && (pMVar7->state < 0x80)) &&
         ((pMVar7->oClass == RATCHET || (pMVar7->oClass == 0x4f2)))) {
        pvVar19 = &pMVar7->pos;
        dVar23 = (double)FUN_005e8588(&local_100,pvVar19);
        if (dVar23 < dVar27) {
          dVar23 = (double)(moby->rotation).z;
          dVar28 = (double)(moby->pos).z;
          uVar25 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          dVar24 = (double)fastfunc::FastDiffRots(dVar23,uVar25);
          dVar23 = dVar26;
          if (dVar29 < dVar24) {
            dVar23 = dVar22;
          }
          dVar23 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)mobyutil::g_FrameTime * dVar23));
          (moby->rotation).z = (float)dVar23;
          FUN_005e81f0(&local_100,lVar18,pvVar19);
          FUN_005e7f98(dVar27,&local_100,&local_100);
          FUN_005e7f54(&local_100,&local_100,pvVar19);
          local_f8 = (float)dVar28;
        }
      }
      pMVar7 = (MobyInstance *)pMVar7->pChain;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_100;
  (moby->pos).y = local_fc;
  (moby->pos).z = local_f8;
  (moby->pos).w = local_f4;
  dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0x120);
  fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
  *(float *)((int)pvVar5 + 0x198) = fVar3;
  fVar3 = (moby->pos).z + fVar3;
  (moby->pos).z = fVar3;
  if ((double)fVar3 < dVar26) {
    *(undefined4 *)((int)pvVar5 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar5 + 0x218) == 0) {
LAB_00235480:
    moby->state = '\x05';
    if (moby->animationId != '\x02') {
      local_90 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar18,(ulonglong)*(uint *)((int)pvVar5 + 0x218) + 0x10);
    dVar29 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x216));
    if (dVar29 < dVar26) goto LAB_00235480;
  }
  moby->setByGroup = '\0';
LAB_002354d4:
  mobyutil::MB_ColorDyingMoby(lVar11,uVar21 + 0x110);
  return;
}



//==== 00235530  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1268_00235530(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M1268_00235530(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}



//==== 00235588  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1268_00235588(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M1268_00235588(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 002355e0  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1268_002355e0(void)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8
mobyupdate_helpers::M1268_002355e0
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00486828();
  uVar1 = M849_0048acb8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_2->state == '\a') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\a';
  }
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x68) == 6)) {
    sound::PlayMobySound(2,0,param_2);
  }
  return uVar1;
}



//==== 002356b0  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1268_002356b0(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1268_002356b0(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 002356e8  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1268_002356e8(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1268_002356e8(int param_1)

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



//==== 00235728  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1268_00235728(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1268_00235728(void)

{
  DAT_0078d918 = 0x10000;
  return;
}



//==== 00235740  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1268_00235740(void)
// callers(1): 002357f8 mobyupdate_unsorted::UpdateMoby_1268
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M1268_00235740(undefined8 param_1,int param_2)

{
  if (param_2 < 3) {
    if (0 < param_2) {
      if (1 < param_2) {
        mobyutil::MB_ShowPersistentMessage(0xb,0x2b0d);
        return;
      }
      mobyutil::MB_ShowPersistentMessage(0xb,0x2b0d);
      return;
    }
  }
  else {
    if (param_2 < 4) {
      mobyutil::MB_ShowPersistentMessage(0xb,0x2b0d);
      return;
    }
    if (param_2 < 5) {
      mobyutil::MB_ShowPersistentMessage(0xb,0x2b0b);
      return;
    }
  }
  mobyutil::MB_ShowPersistentMessage(0xb,0x2b0c);
  return;
}



//==== 002357f8  ns=mobyupdate_unsorted  size=0x210
// sig: undefined UpdateMoby_1268(MobyInstance * moby)
// callers(0): 
// callees(3): 000a0c38 hero::Hero_Warp; 000fddc0 mobyutil::MB_SetAnimation; 00235740 mobyupdate_helpers::M1268_00235740

/* Moby 1268 */

void mobyupdate_unsorted::UpdateMoby_1268(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = (int *)moby->pVar;
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_0078d93c;
  if (bVar1 == 0) {
    if ((piVar2[2] == -1) || (g_LevelFlags[Level][piVar2[2]] == -1)) {
      moby->state = '\x01';
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->state = '\x02';
      moby->modeBits = moby->modeBits | DISABLED;
    }
    if (moby->animationId != '\x02') {
      mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 < 2) {
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (mobyupdate_helpers::M1268_00235740(moby,*(undefined2 *)(piVar2 + 1)),
        (g_buttonsPressedThisFrame & TRIANGLE) != 0)) && (mobyutil::g_HelpMsgOwner == 0xb)) {
      if (*(short *)(piVar2 + 1) == 1) {
        MiscLevelFlags.field85_0x55 = 1;
      }
      hero::Hero_Warp(&Cuboids[*piVar2].pos.x,&Cuboids[*piVar2].rot.x,0,1);
    }
  }
  else if ((bVar1 < 3) && (g_LevelFlags[Level][piVar2[2]] == -1)) {
    moby->collision = moby->pClass->collision;
    moby->state = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 00235a08  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1269_00235a08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1269_00235a08(void)

{
  DAT_0078d98c = 0x10000;
  return;
}



//==== 00235aa0  ns=mobyupdate_unsorted  size=0xbe4
// sig: undefined UpdateMoby_1269(MobyInstance * moby)
// callers(0): 
// callees(14): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109b40 mobyutil::AccelDelt; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 00502578 fastfunc::FastWrapRot

/* Moby 1269 */

void mobyupdate_unsorted::UpdateMoby_1269(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  f32 fVar12;
  float fVar13;
  MobyModeBit MVar14;
  void *pvVar15;
  MobyInstance *pMVar16;
  undefined4 uVar17;
  ulonglong *puVar18;
  int iVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  longlong lVar23;
  longlong lVar24;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar24 = uVar21 - 0x220;
  puVar18 = (ulonglong *)lVar24;
  *puVar18 = uVar21;
  puVar18[0x46] = in_LR;
  puVar18[0x3a] = in_f22;
  puVar18[0x3b] = in_f23;
  puVar18[0x3c] = in_f24;
  puVar18[0x3d] = in_f25;
  puVar18[0x3e] = in_f26;
  puVar18[0x3f] = in_f27;
  puVar18[0x40] = in_f28;
  puVar18[0x41] = in_f29;
  puVar18[0x42] = in_f30;
  puVar18[0x43] = in_f31;
  puVar18[0x39] = unaff_r31;
  puVar18[0x36] = unaff_r28;
  puVar18[0x38] = unaff_r30;
  pvVar15 = moby->pVar;
  uVar29 = ZEXT48(pvVar15);
  puVar18[0x37] = unaff_r29;
  puVar18[0x35] = unaff_r27;
  mobyutil::MB_getTarget(0x4020000000000000,lVar22,0x230000,uVar21 - 0x110);
  iVar25 = mobyutil::MB_damage(lVar22,0x230000,0);
  mobyutil::MB_HandleDamage(moby,iVar25,uVar29 + 0x20,0,puVar18 + 0x2c,0,0,4);
  fVar7 = animationSpeed;
  fVar3 = (moby->pos).x;
  fVar5 = (moby->pos).y - *(float *)((int)puVar18 + 0x114);
  fVar6 = fVar3 - *(float *)(puVar18 + 0x22);
  bVar1 = moby->state;
  MVar14 = moby->modeBits;
  if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 0.25) ||
     (((1 < *(int *)(puVar18 + 0x2c) && (iVar25 != 0)) &&
      (*(short *)(*(int *)(iVar25 + 0x20) + 0xa6) != 0x4f5)))) {
    puVar18[0x12] = 2;
    puVar18[0x14] = 0;
    puVar18[0x15] = 0;
    puVar18[0x16] = 0xffffffffffffffff;
    puVar18[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4010000000000000,0x3fe6666660000000,
               0x401c000000000000,lVar22,&DAT_00a15d30,0,2,0,3,3,5);
    mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (bVar1 == 0) {
      *(float *)((int)pvVar15 + 0x60) = fVar3;
      fVar4 = (moby->pos).y;
      moby->modeBits = MVar14 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar15 + 100) = fVar4;
      *(f32 *)((int)pvVar15 + 0x68) = (moby->pos).z;
      pMVar16 = moby->field80_0xb8;
      *(f32 *)((int)pvVar15 + 0x6c) = (moby->pos).w;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar15 + 0x80) = 0x3f32b8c2;
      if ((pMVar16 != (MobyInstance *)0x0) && (pMVar16->setByGroup != '\0')) {
        *(undefined4 *)((int)pvVar15 + 0x80) = 0xbf32b8c2;
      }
      *(undefined4 *)((int)pvVar15 + 0x84) = 0;
    }
    else if (bVar1 < 2) {
      auVar46 = ZEXT416(1);
      auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = loadVectorLeftIndexed(0x84,uVar29);
      auVar46 = loadVectorRightIndexed(0x94,uVar29);
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      auVar45 = auVar45 | auVar46;
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar47._0_4_ = auVar45._0_4_ + auVar44._0_4_;
      auVar47._4_4_ = auVar45._4_4_ + auVar44._4_4_;
      auVar47._12_4_ = auVar44._12_4_;
      auVar47._8_4_ = auVar45._8_4_ + auVar44._8_4_;
      auVar44._0_12_ = auVar47._0_12_;
      auVar44._12_4_ = auVar45._12_4_ + auVar47._12_4_;
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46._0_4_ = 0;
      auVar46._4_12_ = auVar44._0_12_ >> 0x40;
      auVar46 = auVar46 & (undefined1  [16])0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x84,uVar29)
      ;
      *(undefined4 *)((int)pvVar15 + 0x84U & 0xfffffffc) = uVar17;
      dVar43 = 30.5;
      iVar25 = iVar25 + 1;
      auVar46 = loadVectorLeftIndexed(0x20,0x235a20);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      puVar18[0x32] = (longlong)(int)(fVar7 * 30.5);
      if (iVar25 < *(int *)((int)puVar18 + 0x194)) {
        auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar46 = ZEXT416(0xffffffff);
        auVar45 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar44,0);
        auVar46 = ZEXT416(0xffffffff);
        auVar52 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = ZEXT416(0xffffffff);
        auVar51 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar46 = loadVectorLeftIndexed(0x28,0x235a20);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar52 = vectorConvertFromSignedFixedPointWord(auVar47,0);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar46 = loadVectorLeftIndexed(0x24,0x235a20);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = ZEXT416(0xffffffff);
        auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = vectorReciprocalEstimateFloatingPoint(auVar52);
        auVar53 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar52,auVar48);
        auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar49);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x2c,0x235a20);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar50 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar52,auVar48);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar51);
        auVar46 = loadVectorLeftIndexed(0x30,0x235a20);
        auVar47 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar52 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar52,auVar48);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar51,auVar52,auVar50);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar45,auVar53);
        auVar48 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = ZEXT416(0xffffffff);
        auVar51 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = loadVectorLeftIndexed(0x34,0x235a20);
        auVar45 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = vectorSubtractFloatingPoint
                            (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar52);
        auVar47 = vectorSubtractFloatingPoint
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,auVar52);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = vectorCompareGreaterThanFloatingPoint(auVar44,auVar52);
        auVar46 = vectorConditionalSelect(auVar44,auVar52,auVar46);
        auVar44 = vectorCompareGreaterThanFloatingPoint(auVar46,auVar47);
        auVar47 = vectorConditionalSelect(auVar47,auVar46,auVar44);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar53 = loadVectorLeftIndexed(0x18,lVar22);
        auVar49 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar49);
        auVar44 = loadVectorLeftIndexed(0x38,0x235a20);
        auVar50 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0x3c,0x235a20);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar47,auVar48);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar49,auVar52,auVar51);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar52,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar47);
        auVar47 = loadVectorLeftIndexed(0x40,0x235a20);
        auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar51,auVar50);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = loadVectorLeftIndexed(0x44,0x235a20);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar54);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar52,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                             auVar44);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar53);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar17 = storeVectorElementWordIndexed
                           (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x18,
                            lVar22);
        *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar17;
        iVar25 = *(int *)((int)pvVar15 + 0x84);
        fVar7 = animationSpeed;
      }
      puVar18[0x32] = (longlong)(int)(fVar7 * 15.5);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        *(float *)((int)pvVar15 + 0x70) = DAT_0071f418 * 30.0 + *(float *)((int)pvVar15 + 0x70);
      }
      puVar18[0x32] = (longlong)(int)(fVar7 * 30.5);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        uVar2 = moby->animationId;
        if (uVar2 == '\0') {
          mobyutil::MB_SetAnimation(lVar22,1,0,2);
          uVar2 = moby->animationId;
        }
        if ((uVar2 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
          mobyutil::MB_SetAnimation(lVar22,2,0,2);
        }
      }
      fVar5 = mobyutil::g_FrameTime * 5.75;
      fVar3 = *(float *)((int)pvVar15 + 0x70);
      if (fVar5 < *(float *)((int)pvVar15 + 0x70)) {
        *(float *)((int)pvVar15 + 0x70) = fVar5;
        fVar3 = fVar5;
      }
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      fVar7 = *(float *)(puVar18 + 0x22);
      fVar8 = *(float *)((int)puVar18 + 0x114);
      fVar10 = fVar7 - fVar5;
      fVar9 = fVar8 - fVar6;
      fVar11 = ABS(fVar10);
      fVar13 = ABS(fVar9);
      *(float *)((int)puVar18 + 0x164) = fVar10;
      *(float *)(puVar18 + 0x2d) = fVar9;
      *(float *)((int)puVar18 + 0x16c) = fVar11 - fVar13;
      dVar33 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar18 + 0x2d) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)((int)puVar18 + 0x164));
      if (*(float *)((int)puVar18 + 0x16c) - 0.0 < 0.0) {
        fVar10 = fVar13;
      }
      fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar9 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar20 = ABS(*(float *)(puVar18 + 0x2d));
      if (*(float *)((int)puVar18 + 0x16c) - 0.0 < 0.0) {
        fVar20 = fVar11;
      }
      if (0.0 < fVar10) {
        lVar23 = uVar21 - 0x210;
        lVar26 = uVar21 - 0xb0;
        lVar28 = uVar21 - 0xa0;
        lVar30 = 2;
        fVar10 = (fVar20 - fVar10) / (fVar20 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar18 + 0x17c) = fVar10;
        *(float *)((int)puVar18 + 0x174) = fVar10;
        *(float *)(puVar18 + 0x2f) = fVar10;
        *(float *)(puVar18 + 0x2e) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar18 + 0x174) = *(float *)((int)puVar18 + 0x174) * fVar11;
        *(float *)(puVar18 + 0x2f) = *(float *)(puVar18 + 0x2f) * fVar10;
        *(float *)((int)puVar18 + 0x17c) = *(float *)((int)puVar18 + 0x17c) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar23 + 0x170) = *(float *)((int)lVar23 + 0x160) * fVar10 * fVar10;
          iVar25 = (int)lVar26;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar10 * fVar10;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar28 = uVar21 - 0xb0;
        pfVar27 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar26 = lVar28;
        do {
          fVar10 = *pfVar27;
          fVar11 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar23 + 0x170) = *(float *)((int)lVar23 + 0x170) * fVar10;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar11;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        do {
          iVar25 = (int)lVar24;
          iVar19 = (int)lVar28;
          lVar24 = lVar24 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x170)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar13 + fVar9);
      }
      fVar8 = fVar6 - fVar8;
      fVar7 = fVar5 - fVar7;
      dVar32 = dVar33;
      if (SQRT(fVar7 * fVar7 + fVar8 * fVar8) < 7.0) {
        dVar33 = (double)fastfunc::FastWrapRot((float)dVar33,*(float *)((int)pvVar15 + 0x80));
        fVar3 = *(float *)((int)pvVar15 + 0x70);
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
      }
      dVar42 = 1.570796251296997;
      dVar41 = 3.141592502593994;
      fVar7 = (float)(dVar33 + 1.570796251296997);
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar38 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar34 = (double)(float)(3.141592502593994 - dVar33);
      if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
        dVar34 = dVar33;
      }
      fVar8 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      dVar31 = (double)(float)(-3.141592502593994 - dVar33);
      if ((double)(float)(-3.141592502593994 - dVar33) - dVar34 < 0.0) {
        dVar31 = dVar34;
      }
      fVar10 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
        fVar10 = fVar8;
      }
      dVar33 = (double)(float)(dVar31 * dVar31);
      fVar9 = fVar10 * fVar10;
      dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar31));
      fVar7 = fVar9 * fVar9 * fVar10;
      dVar34 = (double)(float)(dVar33 * dVar35);
      fVar8 = fVar9 * fVar7;
      (moby->pos).y =
           ((float)(dVar33 * dVar34) * 2.601887e-06 +
           (float)(dVar34 * -0.0001980741071747616 +
                  (double)(float)(dVar35 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar33 * dVar31) *
                                                 -0.16666656732559204 + dVar31)))) * fVar3 + fVar6;
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      (moby->pos).x =
           (fVar9 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar9 * fVar10 * -0.16666657 + fVar10) *
           fVar3 + fVar5;
      dVar33 = (double)animationSpeed;
      puVar18[0x32] = (longlong)(int)(dVar33 * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar33 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar15 + 0x78),
                                    mobyutil::g_FrameTime * 5.2359877);
        *(float *)((int)pvVar15 + 0x78) = (float)dVar33;
        (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar15 + 0x74);
        dVar34 = (double)*(float *)((int)pvVar15 + 0x78);
        dVar33 = (double)(float)(dVar41 - dVar34);
        if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
          dVar33 = dVar34;
        }
        dVar31 = (double)(float)(dVar40 - dVar34);
        if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
          dVar31 = dVar33;
        }
        dVar33 = (double)(float)(dVar31 * dVar31);
        dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar31));
        dVar34 = (double)(float)(dVar33 * dVar35);
        fVar3 = (float)((double)(float)(dVar33 * dVar34) * dVar36 +
                       (double)(float)(dVar34 * dVar37 +
                                      (double)(float)(dVar35 * dVar38 +
                                                     (double)(float)((double)(float)(dVar33 * dVar31
                                                                                    ) * dVar39 +
                                                                    dVar31)))) * 0.1;
        *(float *)((int)pvVar15 + 0x74) = fVar3;
        (moby->pos).z = (moby->pos).z + fVar3;
        iVar25 = *(int *)((int)pvVar15 + 0x84);
        dVar33 = (double)animationSpeed;
      }
      puVar18[0x32] = (longlong)(int)(dVar33 * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar34 = 0.5;
        dVar33 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
        if (dVar33 - (double)hero::g_heroGroundZ < 0.0) {
          dVar33 = (double)hero::g_heroGroundZ;
        }
        dVar31 = (double)(float)(dVar33 - (double)(moby->pos).z);
        if ((dVar31 < dVar34) && (-3.0 < dVar31)) {
          mobyutil::AccelDelt((float)(dVar33 + 0.5799999833106995),DAT_0071f40c * 0.02,
                              DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 4.0,&(moby->pos).z,0x235a20
                              ,(float *)((int)pvVar15 + 0x7c));
        }
      }
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      puVar18[0x32] = (longlong)(int)((double)animationSpeed * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar33 = (double)(float)(dVar32 + dVar42);
        dVar43 = (double)(float)(dVar41 - dVar32);
        if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
          dVar43 = dVar32;
        }
        dVar34 = (double)(float)(dVar41 - dVar33);
        if (dVar33 - (double)(float)(dVar41 - dVar33) < 0.0) {
          dVar34 = dVar33;
        }
        dVar41 = (double)(float)(dVar40 - dVar32);
        if ((double)(float)(dVar40 - dVar32) - dVar43 < 0.0) {
          dVar41 = dVar43;
        }
        dVar43 = (double)(float)(dVar40 - dVar33);
        if ((double)(float)(dVar40 - dVar33) - dVar34 < 0.0) {
          dVar43 = dVar34;
        }
        dVar33 = (double)(float)(dVar41 * dVar41);
        dVar32 = (double)(float)(dVar43 * dVar43);
        dVar40 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar41));
        *(undefined4 *)((int)puVar18 + 0xcc) = 0x45afdf66;
        *(undefined4 *)(puVar18 + 0x19) = 0x3f99999a;
        dVar31 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar43));
        dVar34 = (double)(float)(dVar33 * dVar40);
        dVar42 = (double)(float)(dVar32 * dVar31);
        *(float *)((int)puVar18 + 0xc4) =
             (float)((double)(float)(dVar33 * dVar34) * dVar36 +
                    (double)(float)(dVar34 * dVar37 +
                                   (double)(float)(dVar40 * dVar38 +
                                                  (double)(float)((double)(float)(dVar33 * dVar41) *
                                                                  dVar39 + dVar41)))) * 0.3;
        *(float *)(puVar18 + 0x18) =
             (float)((double)(float)(dVar32 * dVar42) * dVar36 +
                    (double)(float)(dVar42 * dVar37 +
                                   (double)(float)(dVar31 * dVar38 +
                                                  (double)(float)((double)(float)(dVar32 * dVar43) *
                                                                  dVar39 + dVar43)))) * 0.3;
        mobyutil::SetCollDamIn(0x3ff0000000000000,uVar21 - 0x140,lVar22,0x10001);
        fVar4 = (moby->pos).y;
        *(f32 *)(puVar18 + 0x1a) = (moby->pos).x;
        fVar12 = (moby->pos).w;
        *(f32 *)((int)puVar18 + 0xd4) = fVar4;
        *(f32 *)((int)puVar18 + 0xdc) = fVar12;
        *(float *)(puVar18 + 0x1b) = (moby->pos).z + 0.4;
        iVar25 = collproc::CollMobySphere(uVar21 - 0x150);
        fVar4 = (moby->pos).y;
        fVar3 = (moby->pos).z;
        fVar12 = (moby->pos).w;
        if ((((iVar25 == 0) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
            ((CollOutput.pMoby)->oClass == MINE_04F5)) || (CollOutput.pMoby == moby->field80_0xb8))
        {
          *(f32 *)(puVar18 + 0x1a) = (moby->pos).x;
          *(f32 *)((int)puVar18 + 0xd4) = fVar4;
          *(f32 *)((int)puVar18 + 0xdc) = fVar12;
          *(float *)(puVar18 + 0x1b) = fVar3 + 0.35;
          iVar25 = collproc::CollSphere(uVar21 - 0x150);
          if (iVar25 != 0) {
            moby->state = '\x02';
          }
        }
        else {
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      puVar18[0x12] = 2;
      puVar18[0x14] = 0;
      puVar18[0x15] = 9;
      puVar18[0x16] = 0xffffffffffffffff;
      puVar18[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                 0x401c000000000000,lVar22,&DAT_00a15d30,0,2,0,5,0xf,0x19);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyutil::MB_RegisterLameShadow(1.0,moby);
  }
  return;
}



//==== 00236684  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1270_00236684(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1270_00236684(void)

{
  DAT_0078d9fc = 0x10000;
  return;
}



//==== 00236698  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1270_00236698(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1270_00236698(int param_1)

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
  int iVar16;
  Spline *pSVar17;
  float *pfVar18;
  Spline *pSVar19;
  longlong lVar20;
  
  iVar16 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0xc0);
  lVar20 = 8;
  fVar2 = *(float *)(param_1 + 0xd0);
  pfVar18 = (float *)&DAT_0078da20;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xd4);
  pSVar17 = Splines[*(int *)(iVar16 + 0x80)];
  fVar6 = *(float *)(param_1 + 0xe4);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar9 = *(float *)(param_1 + 0xe8);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  pSVar19 = pSVar17;
  do {
    fVar13 = *pfVar18;
    fVar14 = pfVar18[2];
    fVar15 = pfVar18[1];
    pSVar19->points[0].w = 1.0;
    pfVar18 = pfVar18 + 4;
    pSVar19->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
    pSVar19->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
    pSVar19->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
    pSVar19 = (Spline *)pSVar19->points;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  pSVar17->cnt = 7;
  DAT_0096bfba = (short)*(undefined4 *)(iVar16 + 0x80);
  return;
}



//==== 002367c0  ns=mobyupdate_helpers  size=0x388
// sig: undefined M1270_002367c0(void)
// callers(1): 00236ba0 mobyupdate_unsorted::UpdateMoby_1270
// callees(0): 

void mobyupdate_helpers::M1270_002367c0(int param_1,float *param_2,float *param_3)

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
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x60;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar16;
  fVar1 = 0.0;
  param_3[3] = 0.0;
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  fVar2 = *(float *)(param_1 + 0x44);
  if (((*(byte *)(param_1 + 0xbc) < 2) || ((*(byte *)(param_1 + 0xbc) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x20) < 2 || ((*(byte *)(param_1 + 0x20) & 1) == 0)))) {
    fVar2 = -fVar2;
    fVar3 = 1.5707964;
  }
  else {
    fVar3 = -1.5707964;
  }
  *param_3 = fVar2;
  fVar2 = fVar3 + 1.5707963;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar6 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar6 = fVar4;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar2 = fVar6 * fVar6;
  fVar4 = fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar3;
  fVar9 = fVar2 * fVar8;
  fVar7 = fVar4 * fVar5;
  fVar12 = (fVar2 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
           2.25;
  fVar13 = (fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
           2.25;
  param_2[1] = fVar12;
  param_2[2] = 1.5;
  *param_2 = fVar13;
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar3 = *(float *)(param_1 + 0xd8);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xcc);
  fVar6 = *(float *)(param_1 + 200);
  fVar7 = *(float *)(param_1 + 0xe4);
  fVar8 = *(float *)(param_1 + 0xe8);
  fVar9 = *(float *)(param_1 + 0xec);
  fVar10 = *(float *)(param_1 + 0xdc);
  *param_2 = *(float *)(param_1 + 0xe0) * 1.5 +
             *(float *)(param_1 + 0xc0) * fVar13 + *(float *)(param_1 + 0xd0) * fVar12;
  param_2[1] = fVar7 * 1.5 + fVar4 * fVar13 + fVar2 * fVar12;
  param_2[2] = fVar8 * 1.5 + fVar6 * fVar13 + fVar3 * fVar12;
  param_2[3] = fVar10 * fVar12 + fVar9 * 1.5 + fVar5 * fVar13 + param_2[3];
  fVar2 = *param_2 + *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar5 = param_2[1] + *(float *)(param_1 + 0x14);
  param_2[1] = fVar5;
  param_2[2] = param_2[2] + *(float *)(param_1 + 0x18);
  fVar2 = hero::g_heroCGPos - fVar2;
  fVar5 = DAT_00969db4 - fVar5;
  fVar3 = ABS(fVar2);
  fVar4 = ABS(fVar5);
  *(float *)(puVar11 + 6) = fVar2;
  *(float *)((int)puVar11 + 0x34) = fVar5;
  *(float *)(puVar11 + 7) = fVar3 - fVar4;
  uVar19 = (ulonglong)(*(uint *)(puVar11 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar11 + 6));
  if (*(float *)(puVar11 + 7) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar6 = ABS(*(float *)((int)puVar11 + 0x34));
  if (*(float *)(puVar11 + 7) - 0.0 < 0.0) {
    fVar6 = fVar3;
  }
  if (0.0 < fVar2) {
    lVar21 = uVar16 - 0x50;
    lVar18 = uVar16 - 0x14;
    lVar20 = uVar16 - 0x24;
    lVar23 = 2;
    fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar11 + 9) = fVar2;
    *(float *)(puVar11 + 8) = fVar2;
    *(float *)((int)puVar11 + 0x44) = fVar2;
    *(float *)((int)puVar11 + 0x3c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar11 + 8) = *(float *)(puVar11 + 8) * fVar3;
    *(float *)((int)puVar11 + 0x44) = *(float *)((int)puVar11 + 0x44) * fVar2;
    *(float *)(puVar11 + 9) = *(float *)(puVar11 + 9) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar21 + 0x3c) = *(float *)((int)lVar21 + 0x2c) * fVar2 * fVar2;
      iVar14 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar21 = uVar16 - 0x24;
    lVar23 = 4;
    pfVar22 = (float *)&DAT_007358e0;
    lVar18 = lVar21;
    lVar20 = lVar17;
    do {
      fVar2 = *pfVar22;
      fVar3 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar20 + 0x3c) = *(float *)((int)lVar20 + 0x3c) * fVar2;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar17;
      iVar15 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar14 + 0x3c) + *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
              *(float *)(iVar15 + 0xc);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
  }
  param_3[2] = fVar1;
  return;
}



//==== 00236ba0  ns=mobyupdate_unsorted  size=0x810
// sig: undefined UpdateMoby_1270(MobyInstance * moby)
// callers(0): 
// callees(16): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement; 000fcc68 mobyutil::MB_randRot; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002367c0 mobyupdate_helpers::M1270_002367c0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 1270 */

void mobyupdate_unsorted::UpdateMoby_1270(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  local_a0.x = -(moby->pos).x;
  fVar4 = (moby->pos).z;
  local_a0.y = -(moby->pos).y;
  pvVar6 = moby->pVar;
  local_a0.z = -fVar4;
  local_a0.w = (moby->pos).w;
  local_90 = (moby->rotation).x;
  local_8c = (moby->rotation).y;
  local_88 = (moby->rotation).z;
  local_84 = (moby->rotation).w;
  dVar19 = 1.0;
  dVar16 = (double)fastfunc::FastWrapRot
                             ((1.0 - (fVar4 - *(float *)((int)pvVar6 + 100)) /
                                     (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100)
                                     )) * 3.1415927,*(float *)((int)pvVar6 + 0x7c) * 0.017453292);
  bVar2 = moby->state;
  (moby->rotation).y = (float)dVar16;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      dVar16 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar6 + 0x78) = (float)dVar16;
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      *(undefined4 *)((int)pvVar6 + 0x84) = 0;
      moby->state = '\x04';
    }
    else {
      dVar16 = (double)*(float *)((int)pvVar6 + 0x70);
      mobyutil::OrganicDelt
                ((float)dVar19,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 (float *)((int)pvVar6 + 0x70),0x720000,(float *)((int)pvVar6 + 0x74));
      uVar7 = (int)*(uint *)((int)pvVar6 + 0x70) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x70)) - uVar7) < 0x3f800000) {
        dVar19 = (double)((float)(dVar19 - (double)*(float *)((int)pvVar6 + 0x70)) /
                         (float)(dVar19 - dVar16));
        mobyupdate_helpers::M1270_002367c0(lVar11,uVar10 - 0x80,uVar10 - 0x70);
        local_80 = (float)(dVar19 * (double)(float)((double)GameCamera.posX - (double)local_80) +
                          (double)local_80);
        local_7c = (float)(dVar19 * (double)(float)((double)GameCamera.posY - (double)local_7c) +
                          (double)local_7c);
        local_78 = (float)(dVar19 * (double)(float)((double)GameCamera.posZ - (double)local_78) +
                          (double)local_78);
        dVar16 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.elevation,(double)local_6c);
        dVar16 = (double)fastfunc::FastWrapRot((float)(dVar19 * dVar16),local_6c);
        local_6c = (float)dVar16;
        dVar16 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.radius,(double)local_68);
        dVar16 = (double)fastfunc::FastWrapRot((float)(dVar19 * dVar16),local_68);
        local_68 = (float)dVar16;
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar10 - 0x80));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar10 - 0x70));
      }
      else {
        uVar3 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar3;
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 < 4) {
      iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
      if (iVar13 == 0) {
        iVar13 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0x6c) = iVar13;
      }
      if (moby->setByGroup != '\0') {
        mobyupdate_helpers::M1270_002367c0(lVar11,uVar10 - 0x60,uVar10 - 0x50);
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar10 - 0x60));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar10 - 0x50));
      }
      if (moby->state == '\x02') {
        fVar4 = *(float *)((int)pvVar6 + 0x60);
      }
      else {
        fVar4 = *(float *)((int)pvVar6 + 100);
      }
      dVar16 = (double)fVar4;
      mobyutil::OrganicDelt
                (fVar4,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,mobyutil::g_FrameTime * 40.0,
                 &(moby->pos).z,0x720000,(float *)((int)pvVar6 + 0x68));
      if (ABS((float)((double)(moby->pos).z - dVar16)) == 0.0) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0x1c,0x236b48);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x84,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x84U & 0xfffffffc) = uVar8;
        moby->state = (char)((LZCOUNT(2 - (uint)moby->state) << 0x3a) >> 0x3f) + '\a';
        if (moby->setByGroup != '\0') {
          camera::camera5::Camera_DeactivateMobyDrivenCam(2);
        }
      }
    }
    else {
      dVar19 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar6 + 0x78),mobyutil::g_FrameTime * 6.2831855);
      dVar16 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar16 = dVar19;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar16 < 0.0) {
        dVar17 = dVar16;
      }
      dVar16 = (double)(float)(dVar17 * dVar17);
      dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
      *(float *)((int)pvVar6 + 0x78) = (float)dVar19;
      dVar19 = (double)(float)(dVar16 * dVar18);
      lVar12 = fastfunc::FastDoubleToInt
                         ((double)((((float)(dVar16 * dVar19) * 2.601887e-06 +
                                    (float)(dVar19 * -0.0001980741071747616 +
                                           (double)(float)(dVar18 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar16 * 
                                                  dVar17) * -0.16666656732559204 + dVar17)))) * 4.0
                                   - 3.0) * 128.0));
      fVar9 = hero::g_heroGroundZ;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      lVar14 = lVar12 + (lVar12 + -0x20 >> 0x3f & 0x20U - lVar12);
      bVar2 = moby->state;
      uVar15 = lVar14 + (0x80 - lVar12 >> 0x3f & 0x80U - lVar14);
      bVar1 = g_standingOnMoby != moby;
      moby->field60_0x90 =
           (uint)((uVar15 & 0xffffffff) << 8) | (uint)uVar15 | (uint)((uVar15 & 0xffffffff) << 0x10)
           | 0x80000000;
      if (((bVar1) || (g_framesNotGrounded != 0)) ||
         (0.5 <= SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                      (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
        if (bVar2 == 4) {
          fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                       (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
          if (((ABS(fVar9 - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
             (5.0 < fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = '\0';
            *(float *)((int)pvVar6 + 0x68) = mobyutil::g_FrameTime * -5.0;
          }
        }
        else if (((bVar2 == 5) &&
                 (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                               (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
                 ABS(fVar9 - *(float *)((int)pvVar6 + 0x60)) < 2.0)) &&
                ((fVar4 < 32.0 && (5.0 < fVar4)))) {
          moby->state = '\x02';
          moby->setByGroup = '\0';
          *(float *)((int)pvVar6 + 0x68) = mobyutil::g_FrameTime * 5.0;
        }
      }
      else {
        moby->field60_0x90 = 0x80208020;
        moby->state = '\x01';
        moby->setByGroup = (char)((LZCOUNT(5 - (uint)bVar2) << 0x3a) >> 0x3f) + '\x03';
        hero::TransitionMovement(0x72,1);
        camera::SetCameraPosition(0x951500,0x951510,1,0,0);
        *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      }
    }
  }
  else if (bVar2 < 8) {
    if ((*(int *)((int)pvVar6 + 0x84) != 0) &&
       (iVar13 = fastfunc::FastDecTimerS32(ZEXT48(pvVar6) + 0x84), iVar13 != 0)) {
      hero::TransitionMovement(0,0);
    }
    iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar13 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar6 + 0x6c));
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
    }
    if (g_standingOnMoby != moby) {
      moby->state = ((byte)((LZCOUNT(7 - (uint)moby->state) << 0x3a) >> 0x3f) & 1) + 4;
    }
  }
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar10 - 0x90,lVar11 + 0x40);
  return;
}



//==== 002373b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1271_002373b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1271_002373b0(void)

{
  DAT_0078daec = 0x10000;
  return;
}



//==== 002373c8  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M1271_002373c8(void)
// callers(0): 
// callees(1): 00486828 FUN_00486828

int mobyupdate_helpers::M1271_002373c8(longlong param_1,uint param_2)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 == (ushort *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    pMVar2 = MobyInstance;
    do {
      uVar1 = *puVar5;
      if (((pMVar2[uVar1 & 0x7fff].state < 0x80) &&
          ((iVar3 = FUN_00486828(pMVar2 + (uVar1 & 0x7fff)), pMVar2 = MobyInstance, iVar3 == 0 ||
           (*(short *)(iVar3 + 0x68) < 4)))) &&
         ((param_2 == 0xffffffff || (MobyInstance[uVar1 & 0x7fff].state != param_2)))) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return iVar4;
}



//==== 002374c0  ns=mobyupdate_unsorted  size=0x174
// sig: undefined UpdateMoby_1271(MobyInstance * moby)
// callers(0): 
// callees(2): 00110b70 mobyutil::MB_IsPntInCuboid; 00486828 FUN_00486828

/* Moby 1271 */

void mobyupdate_unsorted::UpdateMoby_1271(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  
  iVar4 = 0;
  piVar2 = (int *)moby->pVar;
  piVar7 = piVar2;
  do {
    if (*piVar7 != -1) {
      puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar7];
      if (puVar6 != (ushort *)0x0) {
        iVar5 = 0;
        do {
          if ((MobyInstance[*puVar6 & 0x7fff].state < 0x80) &&
             ((iVar3 = FUN_00486828(), iVar3 == 0 || (*(short *)(iVar3 + 0x68) < 4)))) {
            iVar5 = iVar5 + 1;
          }
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (-1 < (short)uVar1);
        if (iVar5 != 0) {
          return;
        }
      }
      piVar7 = piVar7 + 1;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      if (((DAT_0096b2d0 == 0) || (g_heroState != TURRET_PLANE_UI)) &&
         ((piVar2[10] == -1 ||
          (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[10]), iVar4 != 0))))
      {
        if (piVar2[8] != -1) {
          moby->state = (u8)piVar2[8];
        }
        if (piVar2[9] != -1) {
          moby->setByGroup = (char)piVar2[9];
        }
      }
      return;
    }
  } while( true );
}



//==== 00237634  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1278_00237634(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1278_00237634(void)

{
  DAT_0078db5c = 0x10000;
  return;
}



//==== 00237648  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1278(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1278 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1278(MobyInstance *moby)

{
  return moby;
}



//==== 0023764c  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1280(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1280 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1280(MobyInstance *moby)

{
  return moby;
}



//==== 00237660  ns=mobyupdate_helpers  size=0x198
// sig: undefined M1281_00237660(void)
// callers(1): 00237960 mobyupdate_unsorted::UpdateMoby_1281
// callees(4): 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00128438 partupd::SpawnPart_28

void mobyupdate_helpers::M1281_00237660(MobyInstance *param_1)

{
  f32 fVar1;
  float fVar2;
  f32 fVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  undefined4 uVar6;
  MobyInstance *moby;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar10 = 0;
  fVar1 = (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  fVar3 = (param_1->pos).w;
  moby = MobyInstance +
         *(int *)((int)param_1->pVar + *(int *)((int)param_1->pVar + 0xf0) * 4 + 0xc0);
  (moby->pos).x = (param_1->pos).x;
  (moby->pos).y = fVar1;
  (moby->pos).z = fVar2;
  (moby->pos).w = fVar3;
  pMVar4 = moby->pClass;
  moby->state = '\0';
  moby->setByGroup = '\0';
  uVar7 = param_1->color;
  uVar8 = param_1->light;
  (moby->pos).z = fVar2 - 0.35;
  moby->modeBits = *(MobyModeBit *)&pMVar4->mode_bits;
  fVar2 = pMVar4->gScale;
  moby->updateDistance = -1;
  moby->scale = fVar2;
  moby->drawDistance = 0xff;
  moby->enabled = '\x01';
  moby->occlIndex = 0x7f80;
  moby->field44_0x71 = -1;
  moby->field45_0x72 = -1;
  moby->damage = -1;
  puVar5 = pMVar4->collision;
  moby->color = uVar7;
  moby->light = uVar8;
  moby->collision = puVar5;
  mobyfunc::UpdateMobyTransform(moby);
  moby->field80_0xb8 = param_1;
  dVar11 = 3.0;
  dVar12 = 5.0;
  do {
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar11),
               (float)((double)mobyutil::g_FrameTime * dVar12));
    partupd::SpawnPart_28(&param_1->pos,0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xe);
  uVar9 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
  if ((uint)uVar9 != 0) {
    auVar13 = ZEXT416(0xfffffff0);
    auVar14 = loadVectorLeftIndexed(4,uVar9);
    auVar15 = loadVectorRightIndexed(0x14,uVar9);
    auVar13 = vectorShiftRightAlgebraicWord
                        (auVar14 | auVar15,
                         auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0,uVar9);
    *(undefined4 *)((uint)uVar9 & 0xfffffffc) = uVar6;
  }
  return;
}



//==== 00237808  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M1281_00237808(void)
// callers(1): 00237960 mobyupdate_unsorted::UpdateMoby_1281
// callees(2): 001118d8 mobyutil::MB_getTarget; 004fffb4 fastfunc::FastDecTimerS16

void mobyupdate_helpers::M1281_00237808(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined8 in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(uVar2 + 0x38) != 0) {
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_LR,0x2377f8);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = vectorSplatHalfWord(auVar6,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar6,0xfe,(ulonglong)uVar2);
      *(undefined2 *)(uVar2 + 0xfe) = uVar3;
    }
    *(undefined4 *)(uVar2 + 0x38) = 0;
    iVar5 = fastfunc::FastDecTimerS16((ulonglong)uVar2 + 0xfe);
    if (iVar5 == 0) {
      fVar1 = *(float *)(uVar2 + 0xf4) + 5.0;
    }
    else {
      fVar1 = *(float *)(uVar2 + 0xf4);
    }
    *(float *)(uVar2 + 0xf8) = fVar1;
    iVar5 = mobyutil::MB_getTarget(param_1);
    if ((iVar5 != 2) && (3.0 < ABS(*(float *)(param_1 + 0x18) - *(float *)(uVar2 + 0x78)))) {
      *(undefined4 *)(uVar2 + 0xb4) = 2;
    }
    pMVar4 = g_heroMobyPtr;
    if (*(int *)(uVar2 + 0xb0) == 0) {
      *(float *)(uVar2 + 0x70) = g_heroPosition.x;
      fVar1 = g_heroPosition.y;
      *(MobyInstance **)(uVar2 + 0xb0) = pMVar4;
      *(float *)(uVar2 + 0x74) = fVar1;
      *(float *)(uVar2 + 0x78) = g_heroPosition.z;
      *(float *)(uVar2 + 0x7c) = g_heroPosition.w;
    }
  }
  return;
}



//==== 00237960  ns=mobyupdate_unsorted  size=0x344
// sig: undefined UpdateMoby_1281(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00237660 mobyupdate_helpers::M1281_00237660; 00237808 mobyupdate_helpers::M1281_00237808; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 1281 */

void mobyupdate_unsorted::UpdateMoby_1281(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  MobyInstance *moby_00;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  mobyupdate_helpers::M1281_00237808();
  uVar1 = moby->state;
  if (uVar1 != '\x05') {
    if (uVar1 == '\x04') {
      uVar1 = moby->animationId;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      if (uVar1 != '\x03') {
        mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 2.5));
        uVar1 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (uVar1 != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 2.5));
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      iVar6 = fastfunc::FastDecTimerS16(uVar8 + 0xfc);
      iVar7 = *(int *)((int)pvVar2 + 0xf0);
      if (iVar6 != 0) {
        if (*(int *)((int)pvVar2 + iVar7 * 4 + 0xc0) != -1) {
          mobyupdate_helpers::M1281_00237660(moby);
          auVar9 = ZEXT416(0xffffffff);
          auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
          moby->setByGroup =
               (char)((ulonglong)(LZCOUNT((uint)(byte)moby->setByGroup) << 0x20) >> 0x25);
          auVar9 = loadVectorLeftIndexed(4,0x237954);
          auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar7 = *(int *)((int)pvVar2 + 0xf0);
          auVar9 = vectorMultiplyAddFloatingPoint
                             (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                              auVar10);
          auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
          auVar9 = vectorSplatHalfWord(auVar9,1);
          uVar3 = storeVectorElementHalfWordIndexed(auVar9,0xfc,uVar8);
          *(undefined2 *)((int)pvVar2 + 0xfc) = uVar3;
        }
        iVar7 = iVar7 + 1;
        *(int *)((int)pvVar2 + 0xf0) = iVar7;
      }
      if ((iVar7 == 0xc) || (*(int *)((int)pvVar2 + iVar7 * 4 + 0xc0) == -1)) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      uVar1 = moby->animationId;
      if (uVar1 != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 2.5));
        uVar1 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (uVar1 != '\x02') {
          mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 2.5));
        }
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if ((*(int *)((int)pvVar2 + 0xb4) != 2) &&
         (fVar4 = (moby->pos).y - *(float *)((int)pvVar2 + 0x74),
         fVar5 = (moby->pos).x - *(float *)((int)pvVar2 + 0x70),
         SQRT(fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar2 + 0xf8))) {
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      iVar7 = 0;
      do {
        iVar6 = *(int *)((int)uVar8 + 0xc0);
        if ((iVar6 != -1) && (moby_00 = MobyInstance + iVar6, moby_00 != (MobyInstance *)0x0)) {
          if (moby_00->state != 0xfd && moby_00->state != 0xfe) {
            mobyfunc::DeleteMoby(moby_00);
          }
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 + 4;
      } while (iVar7 < 0xc);
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00237ca4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1283_00237ca4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1283_00237ca4(void)

{
  DAT_0078dbcc = 0x10000;
  return;
}



//==== 00237cb8  ns=mobyupdate_helpers  size=0x188
// sig: undefined M1283_00237cb8(void)
// callers(1): 00237e98 mobyupdate_unsorted::UpdateMoby_1283
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1283_00237cb8(int param_1)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar4 = &DAT_0095cd50;
    if ((update::g_SceneId == 6 && 0x26b < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < 0x2cc)) {
      DAT_0071fbd8 = 0x3f800000;
      DAT_00a15f30 = 0xbe4ccccd;
    }
    if (((update::g_SceneId == 6) && (0x47d < boot::g_SpaceSceneFrame)) &&
       (boot::g_SpaceSceneFrame < 0x5f1)) {
      DAT_0071fbd8 = 0x3f800000;
      DAT_00a15f30 = 0x3f000000;
    }
    if (((update::g_SceneId == 6) && (0x5f9 < boot::g_SpaceSceneFrame)) &&
       (boot::g_SpaceSceneFrame < 0x6ae)) {
      DAT_0071fbd8 = 0x3f800000;
      DAT_00a15f30 = 0xbdcccccd;
    }
    iVar3 = 0;
    sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == *(MOBY_OCLASSES *)(param_1 + 0xa6)) || (MVar1 == PLUMBER_0306)) &&
           (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_0078dbf0;
          DAT_00a1bfa4 = DAT_0078dbf0;
          DAT_00a1bfa8 = DAT_0078dbf0;
          sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}



//==== 00237e98  ns=mobyupdate_unsorted  size=0xa94
// sig: undefined UpdateMoby_1283(MobyInstance * moby)
// callers(0): 
// callees(20): 00083950 hero::HandleHeroDeath; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 00168f7c update::PlayHelpMovie; 00237cb8 mobyupdate_helpers::M1283_00237cb8; 00384148 FUN_00384148; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 006552e0: 'Water Worker' | 0096c074: 'None'

/* Moby 1283 */

void mobyupdate_unsorted::UpdateMoby_1283(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x140;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar13;
  puVar10[0x2a] = in_LR;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x22] = unaff_r31;
  puVar10[0x21] = unaff_r30;
  puVar10[0x20] = unaff_r29;
  puVar10[0x1f] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar22 = ZEXT48(pvVar9);
  mobyupdate_helpers::M1283_00237cb8();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    mobyfunc::SetLevelFlag(moby->levelFlagIdx);
    mobyutil::MB_UnlockItem(0x1b,1);
    memcard::memcard_Save(0,-1);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      iVar17 = FUN_004d3870(moby,uVar22);
      if (iVar17 != 0) {
        mobyutil::MB_SetPointAheadOfMoby(0x40059999a0000000,moby);
      }
      if (*(short *)((int)pvVar9 + 0x36) == 2) {
        respawn::SetSpawnPoint
                  ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].pos,
                   (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].rot);
        moby->state = '\x02';
        FUN_00384148(MobyInstance + *(int *)((int)pvVar9 + 0x50));
      }
      sVar8 = *(short *)((int)pvVar9 + 4);
      if (sVar8 == 3) {
        update::PlayHelpMovie(1);
        moby->state = '\x05';
        sVar8 = *(short *)((int)pvVar9 + 4);
      }
      if (sVar8 == 4) {
        hero::HandleHeroDeath();
        *(undefined2 *)((int)pvVar9 + 4) = 0xffff;
      }
    }
    else if (uVar1 == '\0') {
      moby->updateDistance = -1;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(char **)((int)pvVar9 + 0x20) = "Water Worker";
      moby->state = '\x01';
      FUN_004d3720(moby,uVar22);
    }
  }
  dVar31 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00238890;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0023833c:
    if (*(int *)((int)pvVar9 + 0x174) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x174) = 0;
      *(float *)((int)pvVar9 + 0x160) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x16c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar10 + 0x11) = fVar3;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x5c;
      lVar19 = uVar13 - 0x6c;
      lVar23 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1c) = fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)((int)puVar10 + 0xdc) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x6c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar24 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar24) goto LAB_0023833c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar22 + 0x174);
    }
    else {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x1c,0x237e40);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x174,uVar22
                         );
      *(undefined4 *)((int)pvVar9 + 0x174U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar22 + 0x178);
  if (iVar17 != 0) {
    dVar24 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x178) = uVar18;
    dVar29 = (double)(moby->rotation).z;
    dVar24 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar27 = 0.01745329238474369;
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar29,(float)(dVar24 * 0.01745329238474369));
    dVar29 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar24,(float)(dVar29 * dVar27),(float *)((int)pvVar9 + 0x160));
    *(float *)((int)pvVar9 + 0x160) = *(float *)((int)pvVar9 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x164) = *(float *)((int)pvVar9 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x168) = *(float *)((int)pvVar9 + 0x168) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x174) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x160);
    fVar3 = *(float *)((int)pvVar9 + 0x164);
    fVar5 = *(float *)((int)pvVar9 + 0x168);
  }
  else {
    dVar31 = 0.029999999329447746;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar30 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar28 = (double)fVar3;
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar27 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar30) - ABS(dVar28));
  dVar29 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar24 = ABS(dVar28);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar26 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar25 = dVar29;
  if (0.0 < dVar24) {
    lVar15 = uVar13 - 0x130;
    lVar19 = uVar13 - 0x8c;
    lVar21 = uVar13 - 0x7c;
    lVar23 = 2;
    fVar5 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)(puVar10 + 0x17) = fVar5;
    *(float *)((int)puVar10 + 0xbc) = fVar5;
    *(float *)((int)puVar10 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar13 - 0x8c;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar21;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar15 = lVar16;
    dVar24 = dVar29;
    do {
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar12 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar24 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar26 = (double)fastfunc::FastDiffRots(dVar25,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar27;
  fVar2 = SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar28 * dVar28)));
  dVar28 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar28 - ABS(dVar27));
  uVar14 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar29 < 0.0) {
    dVar24 = ABS(dVar27);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar29 < 0.0) {
    dVar27 = dVar28;
  }
  if (dVar29 < dVar24) {
    lVar15 = uVar13 - 0x130;
    lVar21 = uVar13 - 0x9c;
    lVar19 = uVar13 - 0xac;
    lVar23 = 2;
    fVar5 = (float)(dVar27 - dVar24) / (float)(dVar27 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x14) = fVar5;
    *(float *)(puVar10 + 0x13) = fVar5;
    *(float *)((int)puVar10 + 0x9c) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar13 - 0xac;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar21;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar12 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar29 = -dVar29;
  dVar24 = 1.5707963705062866;
  if ((dVar26 <= 1.5707963705062866) && (dVar24 = dVar26, dVar26 < -1.5707963705062866)) {
    dVar24 = -1.5707963705062866;
  }
  dVar27 = 0.5235987901687622;
  if ((dVar29 <= 0.5235987901687622) && (dVar27 = dVar29, dVar29 < -0.5235987901687622)) {
    dVar27 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 200) = (float)(dVar24 * 0.699999988079071);
  *(float *)((int)pvVar9 + 0xc4) = (float)dVar27;
  *(float *)((int)pvVar9 + 0x148) = (float)(dVar24 * 0.30000001192092896);
LAB_00238890:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xd0) = 0x40300000;
  }
  dVar24 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar22 + 0x60,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * dVar24),moby,uVar22 + 0xe0,1);
  return;
}



//==== 0023892c  ns=Global  size=0x80
// sig: undefined FUN_0023892c(void)
// callers(1): 00382358 mobyupdate_unsorted::UpdateMoby_440
// callees(1): 00083950 hero::HandleHeroDeath

void FUN_0023892c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (param_2 < 0) {
    if (-2 < param_2) {
      hero::HandleHeroDeath();
    }
  }
  else if (param_2 < 1) {
    *(undefined2 *)(iVar1 + 0x36) = 4;
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  else if (param_2 < 2) {
    *(undefined2 *)(iVar1 + 0x36) = 3;
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}



//==== 002389ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1284_002389ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1284_002389ac(void)

{
  DAT_0078dc40 = 0x10000;
  return;
}



//==== 002389c8  ns=mobyupdate_helpers  size=0x474
// sig: undefined M1284_002389c8(void)
// callers(1): 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 0024ec68 FUN_0024ec68

void mobyupdate_helpers::M1284_002389c8(int param_1,int param_2)

{
  MobyInstance *moby;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  uVar9 = 0;
  uVar8 = param_1 + 0xc0;
  dVar14 = 2.0;
  dVar13 = 1021.0;
  do {
    iVar10 = *(int *)((int)((uVar9 & 0xffffffff) << 2) + param_2 + 0x80);
    if (iVar10 != 0) {
      mobyfunc::GetBonePosition(param_1,uVar9,iVar10 + 0x10);
      uVar1 = (int)*(uint *)(iVar10 + 0x10) >> 0x1f;
      uVar2 = (int)*(uint *)(iVar10 + 0x14) >> 0x1f;
      uVar3 = (int)*(uint *)(iVar10 + 0x18) >> 0x1f;
      dVar12 = (double)*(float *)(iVar10 + 0x10);
      if ((int)((uVar1 >> 1 ^ *(uint *)(iVar10 + 0x10)) - uVar1) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x10) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x10) = 0x447f4000;
      }
      dVar12 = (double)*(float *)(iVar10 + 0x14);
      if ((int)((uVar2 >> 1 ^ *(uint *)(iVar10 + 0x14)) - uVar2) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x14) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x14) = 0x447f4000;
      }
      dVar12 = (double)*(float *)(iVar10 + 0x18);
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar10 + 0x18)) - uVar3) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x18) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x18) = 0x447f4000;
      }
      *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
      uVar17 = puVar4[2];
      uVar16 = puVar4[1];
      uVar15 = *puVar4;
      puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
      uVar21 = puVar5[3];
      uVar20 = puVar5[2];
      uVar19 = puVar5[1];
      uVar18 = *puVar5;
      puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      uVar25 = puVar5[3];
      uVar24 = puVar5[2];
      uVar23 = puVar5[1];
      uVar22 = *puVar5;
      puVar5 = (undefined4 *)(iVar10 + 0xc0U & 0xfffffff0);
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar17;
      puVar5[1] = uVar16;
      *puVar5 = uVar15;
      puVar4 = (undefined4 *)(iVar10 + 0xd0U & 0xfffffff0);
      puVar4[3] = uVar21;
      puVar4[2] = uVar20;
      puVar4[1] = uVar19;
      *puVar4 = uVar18;
      puVar4 = (undefined4 *)(iVar10 + 0xe0U & 0xfffffff0);
      puVar4[3] = uVar25;
      puVar4[2] = uVar24;
      puVar4[1] = uVar23;
      *puVar4 = uVar22;
    }
    iVar10 = (int)uVar9 + 1;
    uVar9 = (ulonglong)iVar10;
  } while (iVar10 < 7);
  iVar11 = 0;
  puVar7 = &DAT_0078dcb0;
  iVar10 = param_2;
  do {
    if (*(int *)(puVar7 + (uint)*(byte *)(param_1 + 0xbc) * 8) == -1) {
      moby = *(MobyInstance **)(iVar10 + 0xf8);
      if ((moby != (MobyInstance *)0x0) && (moby->state != 0xfd && moby->state != 0xfe)) {
        mobyfunc::DeleteMoby(moby);
        *(undefined4 *)(iVar10 + 0xf8) = 0;
      }
    }
    else {
      iVar6 = *(int *)(iVar10 + 0xf8);
      uVar15 = *(undefined4 *)
                (&DAT_0078dc94 + *(int *)(puVar7 + (uint)*(byte *)(param_1 + 0xbc) * 8) * 4);
      if (((iVar6 == 0) || (*(char *)(iVar6 + 0x20) == -2)) || (*(char *)(iVar6 + 0x20) == -3)) {
        iVar6 = FUN_0024ec68(param_1,uVar15,0x71);
        *(int *)(iVar10 + 0xf8) = iVar6;
      }
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) {
          mobyfunc::GetBonePosition(param_1,uVar15,iVar6 + 0x10);
          uVar1 = (int)*(uint *)(iVar6 + 0x10) >> 0x1f;
          uVar2 = (int)*(uint *)(iVar6 + 0x14) >> 0x1f;
          uVar3 = (int)*(uint *)(iVar6 + 0x18) >> 0x1f;
          dVar12 = (double)*(float *)(iVar6 + 0x10);
          if ((int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x10)) - uVar1) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x10) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x10) = 0x447f4000;
          }
          dVar12 = (double)*(float *)(iVar6 + 0x14);
          if ((int)((uVar2 >> 1 ^ *(uint *)(iVar6 + 0x14)) - uVar2) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x14) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x14) = 0x447f4000;
          }
          dVar12 = (double)*(float *)(iVar6 + 0x18);
          if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x18)) - uVar3) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x18) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x18) = 0x447f4000;
          }
          *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(param_1 + 0x48);
          *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
          puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
          uVar17 = puVar4[2];
          uVar16 = puVar4[1];
          uVar15 = *puVar4;
          puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
          uVar21 = puVar5[3];
          uVar20 = puVar5[2];
          uVar19 = puVar5[1];
          uVar18 = *puVar5;
          puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
          uVar25 = puVar5[3];
          uVar24 = puVar5[2];
          uVar23 = puVar5[1];
          uVar22 = *puVar5;
          puVar5 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
          puVar5[3] = puVar4[3];
          puVar5[2] = uVar17;
          puVar5[1] = uVar16;
          *puVar5 = uVar15;
          puVar4 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
          puVar4[3] = uVar21;
          puVar4[2] = uVar20;
          puVar4[1] = uVar19;
          *puVar4 = uVar18;
          puVar4 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
          puVar4[3] = uVar25;
          puVar4[2] = uVar24;
          puVar4[1] = uVar23;
          *puVar4 = uVar22;
        }
      }
    }
    iVar11 = iVar11 + 1;
    puVar7 = puVar7 + 4;
    iVar10 = iVar10 + 4;
  } while (iVar11 < 2);
  iVar10 = *(int *)(param_2 + 0x108);
  if (iVar10 != 0) {
    *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
    uVar17 = puVar4[2];
    uVar16 = puVar4[1];
    uVar15 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar21 = puVar5[3];
    uVar20 = puVar5[2];
    uVar19 = puVar5[1];
    uVar18 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar25 = puVar5[3];
    uVar24 = puVar5[2];
    uVar23 = puVar5[1];
    uVar22 = *puVar5;
    puVar5 = (undefined4 *)(iVar10 + 0xc0U & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar17;
    puVar5[1] = uVar16;
    *puVar5 = uVar15;
    puVar4 = (undefined4 *)(iVar10 + 0xd0U & 0xfffffff0);
    puVar4[3] = uVar21;
    puVar4[2] = uVar20;
    puVar4[1] = uVar19;
    *puVar4 = uVar18;
    puVar4 = (undefined4 *)(iVar10 + 0xe0U & 0xfffffff0);
    puVar4[3] = uVar25;
    puVar4[2] = uVar24;
    puVar4[1] = uVar23;
    *puVar4 = uVar22;
  }
  return;
}



//==== 00238e58  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1284_00238e58(void)
// callers(1): 00238f88 mobyupdate_helpers::M1284_00238f88
// callees(3): 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010de78 mobyutil::MB_WrapRot

double mobyupdate_helpers::M1284_00238e58
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 3.1415927410125732;
  dVar1 = 6.2831854820251465;
  mobyutil::OrganicDeltAngSpeed
            (param_1,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
             (double)(mobyutil::g_FrameTime * 6.2831855),param_3,param_4,param_4 + 0xb8);
  dVar1 = (double)mobyutil::MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)DAT_0071f418 * dVar2),
                             (double)(float)((double)DAT_0071f418 * dVar1),
                             (double)(float)((double)mobyutil::g_FrameTime * dVar1));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_4 + 0xb8) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975 *
          -0.5 + *(float *)(param_3 + 0x40);
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.985;
  fVar3 = mobyutil::MB_WrapRot(fVar3 * 0.985);
  return (double)fVar3;
}



//==== 00238f88  ns=mobyupdate_helpers  size=0x998
// sig: undefined M1284_00238f88(void)
// callers(2): 00239940 mobyupdate_helpers::M1284_00239940; 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(1): 00238e58 mobyupdate_helpers::M1284_00238e58

bool mobyupdate_helpers::M1284_00238f88(int param_1,int param_2,longlong param_3,char param_4)

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
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar18;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong unaff_r31;
  bool bVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
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
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x180;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x32] = in_LR;
  puVar12[0x26] = in_f22;
  puVar12[0x27] = in_f23;
  puVar12[0x28] = in_f24;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  iVar10 = (int)((longlong)*(short *)(param_2 + 0xae) << 4);
  sVar18 = *(short *)(param_2 + 0xac);
  pSVar11 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0x70)];
  dVar30 = (double)*(float *)(param_1 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x10);
  iVar22 = (int)((longlong)sVar18 << 4);
  dVar26 = (double)*(float *)((int)&pSVar11->points[0].y + iVar10);
  dVar27 = (double)*(float *)((int)&pSVar11->points[0].x + iVar10);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].z + iVar10);
  fVar1 = (float)(dVar26 - dVar30);
  fVar2 = (float)(dVar27 - dVar29);
  fVar3 = (float)(dVar26 - (double)*(float *)((int)&pSVar11->points[0].y + iVar22));
  fVar4 = (float)(dVar27 - (double)*(float *)((int)&pSVar11->points[0].x + iVar22));
  dVar26 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar32 - dVar26);
  fVar6 = (float)(dVar32 - (double)*(float *)((int)&pSVar11->points[0].z + iVar22));
  dVar27 = 0.0;
  puVar12[0x25] = unaff_r31;
  bVar23 = false;
  fVar2 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = *(float *)(param_2 + 0xbc);
  fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar4 = fVar3 - fVar2;
  if (fVar1 <= fVar4 || fVar4 < 0.0) {
    dVar32 = (double)(fVar2 / fVar3);
  }
  else {
    *(short *)(param_2 + 0xae) = sVar18;
    iVar10 = pSVar11->cnt;
    sVar18 = sVar18 + *(char *)(param_2 + 0x100);
    iVar22 = (int)sVar18;
    *(short *)(param_2 + 0xac) = sVar18;
    if (iVar10 <= iVar22) {
      sVar18 = 0;
      *(undefined2 *)(param_2 + 0xac) = 0;
    }
    bVar23 = sVar18 < 0;
    if (bVar23) {
      sVar18 = (short)iVar10 + -1;
      *(short *)(param_2 + 0xac) = sVar18;
    }
    bVar23 = bVar23 || iVar10 <= iVar22;
    dVar32 = dVar27;
  }
  iVar10 = (int)((longlong)sVar18 << 4);
  fVar2 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar10) - dVar30);
  fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar10) - dVar29);
  fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar10) - dVar26);
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar32 - 0.05000000074505806 < 0.0) {
    dVar32 = 0.05000000074505806;
  }
  if (1.0 - dVar32 < 0.0) {
    dVar32 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar32);
  fVar9 = fVar1 / fVar5;
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  dVar31 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  fVar2 = (float)(dVar25 * dVar32);
  fVar3 = (float)(dVar28 * dVar32);
  fVar4 = (float)(dVar31 * dVar32);
  fVar7 = *(float *)(param_2 + 0xc4) * fVar6 + fVar2;
  fVar9 = *(float *)(param_2 + 0xc0) * fVar6 + fVar3;
  fVar6 = *(float *)(param_2 + 200) * fVar6 + fVar4;
  *(float *)((int)puVar12 + 0x94) = fVar3;
  *(float *)(puVar12 + 0x13) = fVar2;
  *(float *)((int)puVar12 + 0x9c) = ABS(fVar3) - ABS(fVar2);
  fVar5 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar1 = fVar1 / fVar5;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
  fVar8 = ABS(*(float *)(puVar12 + 0x13));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar2);
  }
  dVar32 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  fVar1 = (float)(dVar29 + dVar32);
  fVar5 = (float)(dVar30 + dVar25);
  *(float *)(param_2 + 0xc0) = (float)dVar32;
  *(float *)(param_2 + 0xc4) = (float)dVar25;
  *(float *)(param_2 + 200) = (float)dVar28;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar5;
  *(float *)(param_1 + 0x18) = (float)(dVar26 + dVar28);
  fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar29 = dVar27;
  if (0.0 < fVar13) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0x80;
    lVar19 = uVar14 - 0x70;
    lVar24 = 2;
    fVar8 = (fVar8 - fVar13) / (fVar8 + fVar13);
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar12 + 0x20) = fVar8;
    *(float *)((int)puVar12 + 0x104) = fVar8;
    *(float *)(puVar12 + 0x21) = fVar8;
    *(float *)((int)puVar12 + 0x10c) = fVar8;
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar7;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar8;
    *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar8 * fVar7;
    do {
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0xf0) * fVar8 * fVar8;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar8 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0x100) * fVar8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0x100)) +
                        *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar6);
  }
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = ABS(fVar2);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)(puVar12 + 0x12) = fVar3 - ABS(fVar4);
  uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = ABS(fVar4);
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  dVar30 = dVar27;
  if (0.0 < fVar2) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0xa0;
    lVar19 = uVar14 - 0x90;
    lVar24 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x1c) = fVar2;
    *(float *)((int)puVar12 + 0xe4) = fVar2;
    *(float *)(puVar12 + 0x1d) = fVar2;
    *(float *)((int)puVar12 + 0xec) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar3;
    *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar2;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xd0) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xe0) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar10 + 0xe0)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
  }
  fVar3 = g_heroPosition.y;
  fVar2 = g_heroPosition.x;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    fVar4 = g_heroPosition.y - fVar5;
    fVar9 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar12 + 0x10) = fVar4;
    *(float *)((int)puVar12 + 0x84) = fVar9 - fVar6;
    uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = dVar27;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x170;
      lVar17 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0xb0;
      lVar24 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar8 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x18) = fVar4;
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      *(float *)(puVar12 + 0x19) = fVar4;
      *(float *)((int)puVar12 + 0xcc) = fVar4;
      fVar4 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar8;
      *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar4 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xb0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xc0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xc0) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar9);
    }
    fVar4 = g_heroPosition.z - (float)(dVar26 + dVar28);
    fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3));
    *(float *)((int)puVar12 + 0x74) = fVar4;
    fVar4 = ABS(fVar4);
    fVar2 = ABS(fVar1);
    *(float *)(puVar12 + 0xe) = fVar1;
    *(float *)(puVar12 + 0xf) = fVar2 - fVar4;
    uVar21 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    dVar30 = dVar27;
    if (0.0 < fVar1) {
      lVar24 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar12 + 0x14) = fVar1;
      *(float *)((int)puVar12 + 0xa4) = fVar1;
      *(float *)(puVar12 + 0x15) = fVar1;
      *(float *)((int)puVar12 + 0xac) = fVar1;
      lVar19 = uVar14 - 0x170;
      fVar1 = fVar2 * fVar2;
      lVar15 = uVar14 - 0xe0;
      lVar17 = uVar14 - 0xd0;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar1;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0xa0) = *(float *)((int)lVar19 + 0x90) * fVar1 * fVar1;
        iVar10 = (int)lVar15;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xe0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xa0) = *(float *)((int)lVar15 + 0xa0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar22 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar30 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar3);
    }
  }
  if (param_4 != '\0') {
    M1284_00238e58(dVar29,-dVar30);
  }
  return bVar23;
}



//==== 00239940  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M1284_00239940(void)
// callers(1): 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(1): 00238f88 mobyupdate_helpers::M1284_00238f88

longlong mobyupdate_helpers::M1284_00239940
                   (int param_1,int param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  short sVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar10 = 0;
  pSVar3 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0x70)];
  if (pSVar3 != (Spline *)0x0) {
    sVar2 = *(short *)(param_2 + 0xac);
    uVar10 = (longlong)sVar2 + 1;
    lVar12 = (longlong)sVar2 + -1;
    iVar11 = (int)(((longlong)(uVar10 - (longlong)pSVar3->cnt) >> 0x3f & uVar10) << 4);
    iVar9 = (int)lVar12;
    iVar9 = iVar9 + ((uint)(lVar12 >> 0x3f) & (pSVar3->cnt + -1) - iVar9);
    fVar1 = *(float *)((int)&pSVar3->points[0].y + iVar11) - g_heroPosition.y;
    fVar7 = *(float *)((int)&pSVar3->points[0].x + iVar11) - g_heroPosition.x;
    fVar5 = *(float *)((int)&pSVar3->points[0].z + iVar11) - g_heroPosition.z;
    fVar4 = pSVar3->points[iVar9].y - g_heroPosition.y;
    fVar8 = pSVar3->points[iVar9].x - g_heroPosition.x;
    fVar6 = pSVar3->points[iVar9].z - g_heroPosition.z;
    iVar11 = -1;
    fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar1 * fVar1);
    fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
    if ((fVar4 <= fVar1) && (iVar11 = 1, fVar1 <= fVar4)) {
      iVar11 = ((uint)((LZCOUNT(1 - (uint)*(byte *)(param_2 + 0x100)) << 0x3a) >> 0x3f) & 2) - 1;
    }
    if (iVar11 == *(char *)(param_2 + 0x100)) {
      fVar4 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar6 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      fVar5 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
      fVar1 = 1.0;
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        fVar1 = 3.0;
      }
      fVar1 = DAT_0071f408 * 0.12 *
              ((fVar1 * 30.0) / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) -
              *(float *)(param_2 + 0xbc)) + *(float *)(param_2 + 0xbc);
      *(float *)(param_2 + 0xbc) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_2 + 0xbc) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0xbc) * (DAT_0071f408 * -0.100000024 + 1.0);
      *(float *)(param_2 + 0xbc) = fVar1;
      if (fVar1 < DAT_0071f408 * 0.15) {
        *(char *)(param_2 + 0x100) = (char)iVar11;
        *(undefined2 *)(param_2 + 0xac) = *(undefined2 *)(param_2 + 0xae);
        *(short *)(param_2 + 0xae) = sVar2;
      }
    }
    uVar10 = M1284_00238f88(param_1,param_2,param_3,param_4);
  }
  return uVar10 + (-(longlong)
                    *(int *)((int)&pSVar3->points[0].w +
                            (int)((longlong)*(short *)(param_2 + 0xac) << 4)) >> 0x3f &
                  (uVar10 | 2) - uVar10);
}



//==== 00239c18  ns=mobyupdate_helpers  size=0x168
// sig: undefined M1284_00239c18(void)
// callers(1): 00239d98 mobyupdate_helpers::M1284_00239d98
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M1284_00239c18(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar4 = param_2 + (int)(param_3 << 2);
  iVar1 = *(int *)(iVar4 + 0x80);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x78);
    *(float *)(iVar2 + 0x10) = *(float *)(param_2 + 0xc0) * 0.7;
    *(float *)(iVar2 + 0x14) = *(float *)(param_2 + 0xc4) * 0.7;
    fVar3 = *(float *)(param_2 + 200) * 0.7;
    *(float *)(iVar2 + 0x18) = fVar3;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xcc);
    *(float *)(iVar2 + 0x18) = mobyutil::g_FrameTime * 20.0 + fVar3;
    *(undefined1 *)(iVar1 + 0x20) = 3;
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + *(float *)(iVar2 + 0x10);
    *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x14);
    *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + *(float *)(iVar2 + 0x18);
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -0.34906584,
                               mobyutil::g_FrameTime * 0.34906584);
    *(float *)(iVar2 + 0x30) = (float)dVar5;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -3.1415927,mobyutil::g_FrameTime * 3.1415927)
    ;
    *(float *)(iVar2 + 0x34) = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar7),
                               (float)((double)mobyutil::g_FrameTime * dVar6));
    *(float *)(iVar2 + 0x38) = (float)dVar5;
    *(undefined1 *)(iVar1 + 0xa4) = 0xff;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    *(undefined8 *)(iVar1 + 0x38) = 0x40404000000000;
  }
  return;
}



//==== 00239d98  ns=mobyupdate_helpers  size=0x678
// sig: undefined M1284_00239d98(void)
// callers(1): 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(9): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001367d0 path::PathFindClosestPnt; 00239c18 mobyupdate_helpers::M1284_00239c18; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1284_00239d98(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  MobyModeBit MVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short sVar11;
  int iVar10;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int local_c0 [2];
  longlong local_b8;
  
  if (param_1->state < 6) {
    iVar8 = (int)param_2;
    local_b8 = (longlong)(int)*(short *)(iVar8 + 0x24);
    dVar19 = (double)((float)local_b8 * 0.16666667);
    dVar17 = (double)fastfunc::FastIntToDouble(param_1->setByGroup);
    dVar18 = 0.0;
    iVar15 = 0;
    auVar22 = loadVectorLeftIndexed(0xc,0x239d80);
    auVar21 = loadVectorLeftIndexed(0x10,0x239d80);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    lVar13 = param_2 + 0x60;
    iVar16 = iVar8 + 0x70;
    dVar17 = (double)(float)((double)(float)(6.0 - dVar17) * dVar19);
    lVar14 = param_2;
    do {
      iVar10 = (int)lVar14;
      if (*(int *)(iVar10 + 0xf8) != 0) {
        iVar9 = mobyutil::MB_damage(*(int *)(iVar10 + 0xf8),0x230000,0);
        mobyutil::MB_HandleDamage(param_1,iVar9,param_2 + 0x20,0,local_c0,0,0,4);
        uVar4 = (int)*(uint *)(iVar8 + 0x20) >> 0x1f;
        MVar3 = param_1->modeBits;
        if (((iVar9 == 0) || (*(int *)(iVar9 + 0x20) == 0)) ||
           ((sVar11 = *(short *)(*(int *)(iVar9 + 0x20) + 0xa6), sVar11 != 0x52 && (sVar11 != 0x53))
           )) {
          if (1 < local_c0[0]) {
            fVar1 = *(float *)(iVar9 + 0x2c);
            uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
            if ((int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5) <
                (int)((uVar4 >> 1 ^ *(uint *)(iVar8 + 0x20)) - uVar4)) {
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              *(undefined1 *)(iVar8 + 0x67) = 0xfa;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - fVar1;
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar22,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = vectorSplatHalfWord(auVar21,1);
              uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,param_2);
              *(undefined2 *)(iVar8 + 0x26) = uVar6;
              mobyutil::MB_UpdateLightsTransition(param_1,lVar13);
              *(undefined1 *)(*(int *)(iVar10 + 0xf8) + 0xa4) = 0xff;
            }
            else {
              *(undefined4 *)(iVar8 + 0x20) = 0;
              param_1->modeBits =
                   MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                            HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
              mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
              *(undefined1 *)(iVar8 + 0x67) = 0x78;
              mobyutil::MB_UpdateLightsTransition(param_1,lVar13);
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              param_1->state = '\a';
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              iVar10 = *(int *)(iVar10 + 0xf8);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar23,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                                 param_2);
              *(undefined4 *)(iVar8 + 0xe4U & 0xfffffffc) = uVar7;
              *(undefined1 *)(iVar10 + 0xa4) = 0xff;
            }
            if (((double)*(float *)(iVar8 + 0x20) < dVar17) || (param_1->state == '\a')) {
              M1284_00239c18(param_1,param_2,
                             *(undefined4 *)(&DAT_0078dc90 + (uint)(byte)param_1->setByGroup * 4));
              if (param_1->state == '\x05') {
                param_1->state = '\x04';
              }
              iVar10 = (byte)param_1->setByGroup + 1;
              param_1->setByGroup = (char)iVar10;
              iVar10 = path::PathFindClosestPnt
                                 ((float)dVar18,(Vec4 *)&param_1->pos,
                                  Splines[*(int *)(*(int *)(&DAT_0078dc64 + (iVar10 * 4 & 0x3fc)) *
                                                   4 + iVar16)]);
              *(short *)(iVar8 + 0xac) = (short)iVar10;
              sVar11 = mobyutil::MB_randRange(3,7);
              sVar11 = *(short *)(iVar8 + 0xac) + sVar11;
              *(short *)(iVar8 + 0xac) = sVar11;
              iVar10 = (uint)(byte)param_1->setByGroup * 4;
              sVar11 = sVar11 - (short)((int)sVar11 /
                                       Splines[*(int *)(*(int *)(&DAT_0078dc64 + iVar10) * 4 +
                                                       iVar16)]->cnt) *
                                (short)Splines[*(int *)(*(int *)(&DAT_0078dc64 +
                                                                (uint)(byte)param_1->setByGroup * 4)
                                                        * 4 + iVar16)]->cnt;
              sVar12 = sVar11 + -1;
              *(short *)(iVar8 + 0xac) = sVar11;
              *(short *)(iVar8 + 0xae) = sVar12;
              if (sVar12 < 0) {
                *(short *)(iVar8 + 0xae) =
                     (short)Splines[*(int *)(*(int *)(&DAT_0078dc64 + iVar10) * 4 + iVar16)]->cnt +
                     -1;
              }
            }
          }
        }
        else {
          *(undefined1 *)(*(int *)(iVar10 + 0xf8) + 0xa4) = 0xff;
        }
      }
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 4;
    } while (iVar15 < 2);
    iVar16 = 0;
    lVar14 = param_2;
    do {
      iVar15 = (int)lVar14;
      if (*(int *)(iVar15 + 0x80) != 0) {
        iVar10 = mobyutil::MB_damage(*(int *)(iVar15 + 0x80),0x230000,0);
        mobyutil::MB_HandleDamage(param_1,iVar10,param_2 + 0x20,0,local_c0,0,0,4);
        MVar3 = param_1->modeBits;
        fVar1 = *(float *)(iVar8 + 0x20);
        if (((iVar10 == 0) || (*(int *)(iVar10 + 0x20) == 0)) ||
           ((sVar11 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6), sVar11 != 0x52 && (sVar11 != 0x53)
            ))) {
          if (1 < local_c0[0]) {
            fVar2 = *(float *)(iVar10 + 0x2c);
            if ((0 < *(int *)(iVar10 + 0x2c)) && (*(short *)(iVar10 + 0x2a) == 0x3f1)) {
              *(undefined4 *)(iVar10 + 0x2c) = 0x3e4ccccd;
              fVar2 = 0.2;
            }
            if (fVar2 < fVar1) {
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              *(undefined1 *)(iVar8 + 0x67) = 0xfa;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              *(float *)(iVar8 + 0x20) = fVar1 - fVar2;
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar22,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = vectorSplatHalfWord(auVar21,1);
              uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,param_2);
              *(undefined2 *)(iVar8 + 0x26) = uVar6;
              mobyutil::MB_UpdateLightsTransition(param_1,lVar13);
              *(undefined1 *)(*(int *)(iVar15 + 0x80) + 0xa4) = 0xff;
            }
            else {
              *(undefined4 *)(iVar8 + 0x20) = 0;
              param_1->modeBits =
                   MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                            HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
              mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
              *(undefined1 *)(iVar8 + 0x67) = 0x78;
              mobyutil::MB_UpdateLightsTransition(param_1,lVar13);
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              param_1->state = '\a';
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              iVar15 = *(int *)(iVar15 + 0x80);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar23,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                                 param_2);
              *(undefined4 *)(iVar8 + 0xe4U & 0xfffffffc) = uVar7;
              *(undefined1 *)(iVar15 + 0xa4) = 0xff;
            }
            if (((double)*(float *)(iVar8 + 0x20) < dVar17) || (param_1->state == '\a')) {
              M1284_00239c18(param_1,param_2,
                             *(undefined4 *)(&DAT_0078dc90 + (uint)(byte)param_1->setByGroup * 4));
              if (param_1->state == '\x05') {
                param_1->state = '\x04';
              }
              param_1->setByGroup = param_1->setByGroup + '\x01';
            }
          }
        }
        else {
          *(undefined1 *)(*(int *)(iVar15 + 0x80) + 0xa4) = 0xff;
        }
      }
      iVar16 = iVar16 + 1;
      lVar14 = lVar14 + 4;
    } while (iVar16 < 8);
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 0023a410  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1284_0023a410(void)
// callers(2): 0023a538 mobyupdate_helpers::M1284_0023a538; 0023aea0 mobyupdate_helpers::M1284_0023aea0
// callees(2): 000fe610 mobyutil::MB_SphericalToVector; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1284_0023a410(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = *(int *)(DAT_0096b2d0 + 0x78);
  dVar5 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar3 + 0x90));
  dVar6 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar3 + 0x94));
  fVar1 = param_3[1] - *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *param_3 - *(float *)(DAT_0096b2d0 + 0x10);
  fVar4 = param_3[2] - *(float *)(DAT_0096b2d0 + 0x18);
  mobyutil::MB_SphericalToVector
            ((float)((double)(SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1) /
                             (float)((double)*(float *)(iVar3 + 100) + param_1)) *
                    (double)*(float *)(iVar3 + 100)),(float)dVar5,(float)-dVar6,param_2);
  fVar1 = *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *(float *)(DAT_0096b2d0 + 0x18);
  *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  return;
}



//==== 0023a538  ns=mobyupdate_helpers  size=0x7dc
// sig: undefined M1284_0023a538(void)
// callers(1): 0023ad28 mobyupdate_helpers::M1284_0023ad28
// callees(1): 0023a410 mobyupdate_helpers::M1284_0023a410

void mobyupdate_helpers::M1284_0023a538
               (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5)

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
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x29] = in_f31;
  puVar10[0x28] = unaff_r31;
  puVar10[0x27] = unaff_r30;
  puVar10[0x26] = unaff_r29;
  iVar11 = DAT_0096b2d0;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = g_heroPosition.x - fVar4;
    fVar6 = g_heroPosition.y - fVar5;
    fVar8 = ABS(fVar9);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar10 + 0x8c) = fVar9;
    *(float *)(puVar10 + 0x12) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar8 - fVar7;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
    fVar9 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar13 = fVar8;
    }
    dVar24 = dVar26;
    if (0.0 < fVar9) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x80;
      lVar19 = uVar14 - 0x70;
      lVar21 = 2;
      fVar9 = (fVar13 - fVar9) / (fVar13 + fVar9);
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar10 + 0xdc) = fVar9;
      *(float *)((int)puVar10 + 0xd4) = fVar9;
      *(float *)(puVar10 + 0x1b) = fVar9;
      *(float *)(puVar10 + 0x1a) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar8;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar9;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xc0) * fVar9 * fVar9;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x80;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar9 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xd0) * fVar9;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0xd0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    fVar2 = ABS(fVar3 - param_2[2]);
    *(float *)((int)puVar10 + 0x84) = fVar3 - param_2[2];
    fVar3 = ABS(fVar1);
    *(float *)(puVar10 + 0x10) = fVar1;
    *(float *)(puVar10 + 0x11) = fVar3 - fVar2;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar10 + 0x84));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x90;
      lVar17 = uVar14 - 0xa0;
      lVar21 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0xbc) = fVar1;
      *(float *)((int)puVar10 + 0xb4) = fVar1;
      *(float *)(puVar10 + 0x17) = fVar1;
      *(float *)(puVar10 + 0x16) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3;
      *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar1;
      *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar1 * fVar1;
        iVar11 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0xa0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar2);
    }
  }
  else {
    dVar26 = 0.0;
    if (param_1 <= 0.0) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x10);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = *(float *)(iVar11 + 0x14);
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = *(float *)(iVar11 + 0x18);
      *(float *)(puVar10 + 0xf) = fVar3;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x1c);
    }
    else {
      M1284_0023a410(param_1,uVar14 - 0xe0,param_2);
      fVar1 = *(float *)(puVar10 + 0xe);
      fVar2 = *(float *)((int)puVar10 + 0x74);
      fVar3 = *(float *)(puVar10 + 0xf);
    }
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = fVar1 - fVar4;
    fVar6 = fVar2 - fVar5;
    dVar24 = ABS((double)fVar9);
    dVar25 = ABS((double)fVar6);
    *(float *)((int)puVar10 + 0xa4) = fVar9;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = (float)(dVar24 - dVar25);
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar10 + 0xa4));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar23 = dVar25;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar25 = ABS((double)*(float *)(puVar10 + 0x15));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar25 = dVar24;
    }
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x40;
      lVar19 = uVar14 - 0x30;
      lVar21 = 2;
      fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x11c) = fVar7;
      *(float *)((int)puVar10 + 0x114) = fVar7;
      *(float *)(puVar10 + 0x23) = fVar7;
      *(float *)(puVar10 + 0x22) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar8;
      *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar7;
      *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x100) * fVar7 * fVar7;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x40;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x110) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0x110)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = param_2[2];
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    *(float *)((int)puVar10 + 0x9c) = fVar3 - fVar1;
    dVar22 = ABS((double)(fVar3 - fVar1));
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar10 + 0x13) = fVar2;
    *(float *)(puVar10 + 0x14) = (float)(dVar25 - dVar22);
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar10 + 0x13));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar10 + 0x9c));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar22 = dVar25;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x60;
      lVar19 = uVar14 - 0x50;
      lVar21 = 2;
      fVar3 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xfc) = fVar3;
      *(float *)((int)puVar10 + 0xf4) = fVar3;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)(puVar10 + 0x1e) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
      *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar3;
      *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xe0) * fVar3 * fVar3;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x60;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xf0) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xf0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)dVar24;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)-dVar26;
  }
  return;
}



//==== 0023ad28  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M1284_0023ad28(void)
// callers(1): 0023b710 mobyupdate_helpers::M1284_0023b710
// callees(3): 000f1114 mobyfunc::GetBonePosition; 0023a538 mobyupdate_helpers::M1284_0023a538; 00471930 mobyupdate_helpers::M819_00471930

void mobyupdate_helpers::M1284_0023ad28(int param_1,int param_2)

{
  byte bVar1;
  undefined1 auStack_40 [16];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [24];
  
  bVar1 = *(byte *)(param_2 + 0xe8);
  *(byte *)(param_2 + 0xe8) = bVar1 ^ 1;
  mobyfunc::GetBonePosition(param_1,((LZCOUNT(-(bVar1 & 1)) << 0x3a) >> 0x3f) + 8,auStack_40);
  if (*(char *)(param_1 + 0x20) == '\x05') {
    M1284_0023a538(0xbff0000000000000,auStack_40,&DAT_0023ad14,local_2c,local_28);
  }
  else {
    M1284_0023a538((double)(mobyutil::g_FrameTime * 15.0),auStack_40,&DAT_00720000,local_2c,local_28
                  );
  }
  M819_00471930((double)(mobyutil::g_FrameTime * 20.0 + *(float *)(param_2 + 0xbc)),
                (double)(mobyutil::g_FrameTime * 15.0),param_1,auStack_40,DAT_0096b2d0,local_30,
                &DAT_0023ad14,(int)(animationSpeed * 300.5));
  return;
}



//==== 0023aea0  ns=mobyupdate_helpers  size=0x374
// sig: undefined M1284_0023aea0(void)
// callers(1): 0023b710 mobyupdate_helpers::M1284_0023b710
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0023a410 mobyupdate_helpers::M1284_0023a410; 0047df40 mobyupdate_helpers::M829_0047df40

void mobyupdate_helpers::M1284_0023aea0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  undefined4 local_90 [4];
  undefined1 local_80 [16];
  undefined4 local_70 [6];
  
  mobyfunc::GetBonePosition(param_1,9,local_90);
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    mobyutil::MB_randSphere
              ((double)(mobyutil::g_FrameTime * 20.0),(double)(mobyutil::g_FrameTime * 40.0),
               local_80);
  }
  else {
    M1284_0023a410((double)(mobyutil::g_FrameTime * 20.0),local_70,local_90);
    dVar2 = -50.0;
    dVar1 = 50.0;
    mobyutil::MB_randRangeFloat(mobyutil::g_FrameTime * -50.0,mobyutil::g_FrameTime * 50.0);
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar2),
               (float)((double)mobyutil::g_FrameTime * dVar1));
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * 5.0),
               (float)((double)mobyutil::g_FrameTime * dVar1));
  }
  M829_0047df40(param_1,local_90,local_80);
  return;
}



//==== 0023b238  ns=mobyupdate_helpers  size=0x4bc
// sig: undefined M1284_0023b238(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1284_0023b238(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_140 [152];
  
  iVar1 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(DAT_0078dd10);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00f15590,DAT_0078dd00,DAT_00f15594,DAT_0078dd04,DAT_0078dd08);
  dVar8 = 0.0;
  fVar2 = *(float *)(iVar1 + 0xd4) - *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(iVar1 + 0xd0) - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(iVar1 + 0xd8) - *(float *)(param_1 + 0x18);
  fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar5 = 200.0 / fVar6;
  if (200.0 - fVar6 < 0.0) {
    fVar2 = fVar2 * fVar5;
  }
  if (200.0 - fVar6 < 0.0) {
    fVar4 = fVar4 * fVar5;
  }
  if (200.0 - fVar6 < 0.0) {
    fVar3 = fVar3 * fVar5;
  }
  dVar7 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  dVar12 = (double)(float)(dVar7 * 0.004999999888241291);
  if ((double)(float)(dVar7 * 0.004999999888241291) - 1.0 < 0.0) {
    dVar12 = 1.0;
  }
  if (0.0 < dVar7) {
    dVar9 = 10.0;
    dVar11 = 6.400000095367432;
    dVar10 = (double)(float)(dVar7 - 10.0);
    do {
      if ((dVar9 < dVar7) && (dVar10 < dVar8)) {
        fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar7 - dVar8) * dVar11));
      }
      draw::FastDrawQuad(local_140,0,1,EffectTexHeaders,9);
      dVar8 = (double)(float)(dVar8 + dVar12);
    } while (dVar8 < dVar7);
  }
  return;
}



//==== 0023b710  ns=mobyupdate_helpers  size=0x6c8
// sig: undefined M1284_0023b710(void)
// callers(1): 0023be70 mobyupdate_unsorted::UpdateMoby_1284
// callees(5): 000fe484 mobyutil::MB_randRange; 0023ad28 mobyupdate_helpers::M1284_0023ad28; 0023aea0 mobyupdate_helpers::M1284_0023aea0; 004fff60 fastfunc::FastDecTimerS32; 005000b4 fastfunc::FastDecTimerU8

void mobyupdate_helpers::M1284_0023b710(int param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar11;
  int iVar10;
  undefined1 uVar12;
  undefined8 in_LR;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  cVar1 = *(char *)(param_1 + 0xbc);
  iVar10 = (int)param_2;
  if (cVar1 == '\x06') {
LAB_0023bbf0:
    iVar9 = fastfunc::FastDecTimerS32(param_2 + 0xe4);
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 0xbc) == '\x02') {
        iVar9 = fastfunc::FastDecTimerU8(param_2 + 0xe9);
        if (iVar9 == 0) {
          if (*(char *)(iVar10 + 0xea) == '\0') {
            M1284_0023ad28(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
          else {
            M1284_0023aea0(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
        }
        else {
          bVar11 = *(byte *)(iVar10 + 0xea) ^ 1;
          *(byte *)(iVar10 + 0xea) = bVar11;
          if (bVar11 == 0) {
            uVar12 = mobyutil::MB_randRange(4,6);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 4;
          }
          else {
            uVar12 = mobyutil::MB_randRange(0x14,0x32);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 3;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x20) = 3;
        M1284_0023aea0(param_1,param_2);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
      }
    }
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        *(undefined1 *)(param_1 + 0x20) = 3;
        if (*(char *)(iVar10 + 0x102) != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0xbc) = 5;
        return;
      }
      if (cVar1 != '\x03') {
        if (cVar1 != '\x02') {
          if (cVar1 != '\x01') {
            return;
          }
          if (*(char *)(param_1 + 0x20) != '\x04') {
            iVar10 = fastfunc::FastDecTimerS32(param_2 + 0xe4);
            if (iVar10 == 0) {
              return;
            }
            *(undefined1 *)(param_1 + 0x20) = 4;
            return;
          }
          iVar9 = fastfunc::FastDecTimerS32(param_2 + 0xe4);
          if (iVar9 == 0) {
            return;
          }
          M1284_0023ad28(param_1,param_2);
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          bVar11 = *(char *)(iVar10 + 0xe9) + 1;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          *(byte *)(iVar10 + 0xe9) = bVar11;
          if (bVar11 < 0xb) {
            return;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          *(undefined1 *)(iVar10 + 0xe9) = 0;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          *(undefined1 *)(param_1 + 0x20) = 3;
          auVar13 = loadVectorLeftIndexed(4,0x23b6f4);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          return;
        }
        goto LAB_0023bbf0;
      }
    }
    fastfunc::FastDecTimerS32(param_2 + 0xec);
    fastfunc::FastDecTimerS32(param_2 + 0xe4);
    if (*(char *)(param_1 + 0x20) == '\x05') {
      iVar9 = *(int *)(iVar10 + 0xe4);
      if (*(int *)(iVar10 + 0xec) == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x10,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xec,
                           param_2);
        *(undefined4 *)(iVar10 + 0xecU & 0xfffffffc) = uVar5;
        auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar15);
        iVar9 = (int)(animationSpeed * 60.5);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        *(undefined1 *)(param_1 + 0x20) = 4;
      }
      if (*(char *)(iVar10 + 0xeb) == '\x01' && iVar9 == 0) {
        M1284_0023ad28(param_1,param_2);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar6 = fVar2 - g_heroPosition.y;
      fVar7 = fVar3 - g_heroPosition.x;
      fVar4 = *(float *)(param_1 + 0x18);
      fVar8 = fVar4 - g_heroPosition.z;
      fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if (((*(int *)(iVar10 + 0xec) == 0) && (fVar6 < 200.0)) && (60.0 < fVar6)) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x10,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xec,
                           param_2);
        *(undefined4 *)(iVar10 + 0xecU & 0xfffffffc) = uVar5;
        *(float *)(iVar10 + 0xd0) = fVar3;
        *(float *)(iVar10 + 0xd4) = fVar2;
        *(float *)(iVar10 + 0xd8) = fVar4;
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined1 *)(iVar10 + 0xeb) = 0;
        *(undefined4 *)(iVar10 + 0xdc) = uVar5;
        *(undefined1 *)(param_1 + 0x20) = 5;
        return;
      }
      if (*(char *)(param_1 + 0xbc) == '\x03') {
        *(undefined1 *)(param_1 + 0x20) = 4;
        if (*(int *)(iVar10 + 0xe4) == 0) {
          M1284_0023ad28(param_1,param_2);
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
      else if (*(int *)(iVar10 + 0xe4) == 0) {
        iVar9 = fastfunc::FastDecTimerU8(param_2 + 0xe9);
        if (iVar9 == 0) {
          if (*(char *)(iVar10 + 0xea) == '\0') {
            M1284_0023ad28(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
          else {
            M1284_0023aea0(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
        }
        else {
          bVar11 = *(byte *)(iVar10 + 0xea) ^ 1;
          *(byte *)(iVar10 + 0xea) = bVar11;
          if (bVar11 == 0) {
            uVar12 = mobyutil::MB_randRange(4,6);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 4;
          }
          else {
            uVar12 = mobyutil::MB_randRange(0x14,0x32);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 3;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
    }
  }
  return;
}



//==== 0023be70  ns=mobyupdate_unsorted  size=0x14c8
// sig: undefined UpdateMoby_1284(MobyInstance * moby)
// callers(0): 
// callees(24): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010de78 mobyutil::MB_WrapRot; 001367d0 path::PathFindClosestPnt; 002389c8 mobyupdate_helpers::M1284_002389c8; 00238f88 mobyupdate_helpers::M1284_00238f88; 00239940 mobyupdate_helpers::M1284_00239940; 00239d98 mobyupdate_helpers::M1284_00239d98; 0023b710 mobyupdate_helpers::M1284_0023b710; 0024ec68 FUN_0024ec68; 00354160 mobyupd::update352::Spawn_Moby352; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 1284 */

void mobyupdate_unsorted::UpdateMoby_1284(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  f32 fVar9;
  Spline *pSVar10;
  ulonglong uVar11;
  uint uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  short sVar27;
  int iVar28;
  int iVar29;
  short sVar30;
  void *pvVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 local_90 [32];
  
  pvVar8 = moby->pVar;
  dVar37 = 16.0;
  uVar23 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar8 + 0x20) * 16.0));
  *(uint *)((int)pvVar8 + 0xf4) = uVar23 & 0xfff0;
  dVar39 = 0.5;
  iVar24 = fastfunc::FastDoubleToInt
                     ((double)(float)((double)(float)((double)(longlong)
                                                              (int)*(short *)((int)pvVar8 + 0x24) -
                                                     0.5) * dVar37));
  uVar12 = (int)*(uint *)((int)pvVar8 + 0x20) >> 0x1f;
  if (iVar24 <= (int)(uVar23 & 0xfff0)) {
    *(uint *)((int)pvVar8 + 0xf4) = *(uint *)((int)pvVar8 + 0xf4) | 0xf;
  }
  iVar24 = 0;
  if (0x3f000000 < (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0x20)) - uVar12)) {
    iVar25 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar8 + 0x20));
    iVar28 = (int)*(short *)((int)pvVar8 + 0x24);
    iVar24 = iVar28 >> 0x1f;
    iVar29 = (int)*(short *)((int)pvVar8 + 0x24);
    iVar24 = ((iVar25 - (iVar25 / ((iVar28 / 6 + iVar24) - (iVar28 / 6 + iVar24 >> 0x1f))) *
                        ((iVar28 / 6 + iVar24) - (iVar28 / 6 + iVar24 >> 0x1f))) * 0x10) /
             ((iVar29 / 6 + (iVar29 >> 0x1f)) - (iVar29 / 6 + (iVar29 >> 0x1f) >> 0x1f));
    iVar24 = *(int *)((int)pvVar8 + 0xf4) + (iVar24 + (iVar24 >> 0x1f & -iVar24) & 0xfU);
  }
  *(int *)((int)pvVar8 + 0xf4) = iVar24;
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      uVar32 = 0;
      moby->scale = moby->scale * 15.0;
      do {
        uVar26 = FUN_0024ec68(moby,uVar32,(int)uVar32 + 0x534);
        uVar11 = uVar32 & 0xffffffff;
        iVar24 = (int)uVar32 + 1;
        uVar32 = (ulonglong)iVar24;
        *(undefined4 *)((int)pvVar8 + (int)(uVar11 << 2) + 0x80) = uVar26;
      } while (iVar24 < 7);
      iVar24 = 0;
      *(MobyInstance **)((int)pvVar8 + 0x9c) = moby;
      pvVar31 = pvVar8;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar31 + 0x70)];
        pVVar13 = pSVar10->points + pSVar10->cnt + -1;
        fVar3 = pSVar10->points[0].y - pVVar13->y;
        fVar2 = pSVar10->points[0].x - pVVar13->x;
        fVar4 = pSVar10->points[0].z - pVVar13->z;
        if ((double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) < dVar39) {
          pSVar10->cnt = pSVar10->cnt + -1;
        }
        iVar24 = iVar24 + 1;
        pvVar31 = (void *)((int)pvVar31 + 4);
      } while (iVar24 < 4);
      fVar3 = mobyutil::g_FrameTime * 42.0 * 0.1;
      *(float *)((int)pvVar8 + 0xbc) = fVar3;
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      fVar4 = fVar2 * fVar2 * fVar5;
      fVar6 = fVar2 * fVar4;
      *(float *)((int)pvVar8 + 0xc0) =
           (fVar2 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
           fVar3;
      fVar2 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar8 + 200) = 0;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x70)];
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      fVar4 = fVar2 * fVar2 * fVar5;
      fVar6 = fVar2 * fVar4;
      *(float *)((int)pvVar8 + 0xc4) =
           (fVar2 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
           fVar3;
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      fVar3 = pSVar10->points[0].w;
      *(undefined2 *)((int)pvVar8 + 0xac) = 1;
      (moby->pos).w = fVar3;
      *(undefined2 *)((int)pvVar8 + 0xae) = 0;
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined1 *)((int)pvVar8 + 0xea) = 0;
      *(undefined1 *)((int)pvVar8 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0xffffffff;
      *(undefined1 *)((int)pvVar8 + 0x100) = 1;
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar8 + 0x102) = 8;
      *(undefined4 *)((int)pvVar8 + 0x108) = 0;
    }
    else if (bVar1 < 2) {
      if (g_heroState == TURRET_PLANE_UI) {
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      if (*(int *)((int)pvVar8 + 0xf0) == -1) {
        iVar24 = hud::RegisterHUDCallback
                           (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                            &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868
                            ,(int *)((int)pvVar8 + 0xf4),
                            (int)((longlong)*(short *)((int)pvVar8 + 0x24) << 4) + 0xf);
        *(int *)((int)pvVar8 + 0xf0) = iVar24;
      }
      *(float *)((int)pvVar8 + 0xbc) =
           (mobyutil::g_FrameTime * 42.0 - *(float *)((int)pvVar8 + 0xbc)) * 0.1 +
           *(float *)((int)pvVar8 + 0xbc);
      iVar24 = mobyupdate_helpers::M1284_00238f88(moby,pvVar8,0,1);
      if (iVar24 != 0) {
        moby->setByGroup = '\x01';
        *(undefined4 *)((int)pvVar8 + 0x104) = DAT_0078dc68;
        moby->state = '\x04';
        iVar24 = path::PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70)
                                   ]);
        *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
        sVar27 = mobyutil::MB_randRange(3,7);
        sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
        iVar24 = *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70);
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        sVar27 = sVar27 - (short)((int)sVar27 / Splines[iVar24]->cnt) * (short)Splines[iVar24]->cnt;
        sVar30 = sVar27 + -1;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        *(short *)((int)pvVar8 + 0xae) = sVar30;
        if (sVar30 < 0) {
          *(short *)((int)pvVar8 + 0xae) =
               (short)Splines[*(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70)]->cnt
               + -1;
        }
      }
    }
    else {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      mobyupdate_helpers::M1284_0023b710(moby,pvVar8);
      uVar32 = mobyupdate_helpers::M1284_00239940
                         (moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),1);
      if (((uVar32 & 2) != 0) &&
         (*(int *)((int)pvVar8 + 0x104) !=
          *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4))) {
        *(undefined4 *)((int)pvVar8 + 0x104) =
             *(undefined4 *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4);
        iVar24 = path::PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar8 +
                                            *(int *)(&DAT_0078dc64 +
                                                    (uint)(byte)moby->setByGroup * 4) * 4 + 0x70)]);
        *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
        sVar27 = mobyutil::MB_randRange(3,7);
        sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        sVar27 = sVar27 - (short)((int)sVar27 /
                                 Splines[*(int *)((int)pvVar8 +
                                                 *(int *)(&DAT_0078dc64 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0x70)]->cnt) *
                          (short)Splines[*(int *)((int)pvVar8 +
                                                 *(int *)(&DAT_0078dc64 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0x70)]->cnt;
        sVar30 = sVar27 + -1;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        *(short *)((int)pvVar8 + 0xae) = sVar30;
        if (sVar30 < 0) {
          *(short *)((int)pvVar8 + 0xae) =
               (short)Splines[*(int *)((int)pvVar8 +
                                      *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4) * 4
                                      + 0x70)]->cnt + -1;
        }
      }
      if (moby->setByGroup == '\x04') {
        mobyutil::MB_ColorDyingMoby(moby,(int)pvVar8 + 0x60);
      }
      else {
        mobyupdate_helpers::M1284_00239d98(moby,pvVar8);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 6) {
      mobyupdate_helpers::M1284_0023b710(moby,pvVar8);
      fVar3 = *(float *)((int)pvVar8 + 0xd4) - g_heroPosition.y;
      fVar2 = *(float *)((int)pvVar8 + 0xd0) - g_heroPosition.x;
      fVar4 = *(float *)((int)pvVar8 + 0xd8) - g_heroPosition.z;
      if (*(char *)((int)pvVar8 + 0xeb) == '\0') {
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
        }
        fVar5 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar8 + 0xbc) =
             (mobyutil::g_FrameTime * 30.0 - *(float *)((int)pvVar8 + 0xbc)) * 0.1 +
             *(float *)((int)pvVar8 + 0xbc);
        if (SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= fVar5 * 40.0) {
          *(undefined4 *)((int)pvVar8 + 0xe4) = 0;
          *(undefined1 *)((int)pvVar8 + 0xeb) = 1;
        }
        else {
          fVar7 = g_heroPosition.y - *(float *)((int)pvVar8 + 0xd4);
          fVar6 = g_heroPosition.x - *(float *)((int)pvVar8 + 0xd0);
          fVar14 = g_heroPosition.z - *(float *)((int)pvVar8 + 0xd8);
          fVar4 = 0.0;
          fVar3 = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar7 * fVar7);
          fVar2 = (fVar5 * 40.0) / fVar3;
          fVar5 = fVar4;
          if (0.0 - fVar3 < 0.0) {
            fVar5 = fVar14 * fVar2;
          }
          fVar15 = fVar4;
          if (0.0 - fVar3 < 0.0) {
            fVar15 = fVar7 * fVar2;
          }
          if (0.0 - fVar3 < 0.0) {
            fVar4 = fVar6 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar5 = fVar14 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar15 = fVar7 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar4 = fVar6 * fVar2;
          }
          *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 0xd8) + fVar5;
          *(float *)((int)pvVar8 + 0xd4) = *(float *)((int)pvVar8 + 0xd4) + fVar15;
          *(float *)((int)pvVar8 + 0xd0) = *(float *)((int)pvVar8 + 0xd0) + fVar4;
        }
        uVar32 = mobyupdate_helpers::M1284_00238f88
                           (moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),1);
        if (((uVar32 & 2) != 0) &&
           (*(int *)((int)pvVar8 + 0x104) !=
            *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4))) {
          *(undefined4 *)((int)pvVar8 + 0x104) =
               *(undefined4 *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4);
          iVar24 = path::PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,
                              Splines[*(int *)((int)pvVar8 +
                                              *(int *)(&DAT_0078dc64 +
                                                      (uint)(byte)moby->setByGroup * 4) * 4 + 0x70)]
                             );
          *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
          sVar27 = mobyutil::MB_randRange(3,7);
          sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
          *(short *)((int)pvVar8 + 0xac) = sVar27;
          sVar27 = sVar27 - (short)((int)sVar27 /
                                   Splines[*(int *)((int)pvVar8 +
                                                   *(int *)(&DAT_0078dc64 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0x70)]->cnt) *
                            (short)Splines[*(int *)((int)pvVar8 +
                                                   *(int *)(&DAT_0078dc64 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0x70)]->cnt;
          sVar30 = sVar27 + -1;
          *(short *)((int)pvVar8 + 0xac) = sVar27;
          *(short *)((int)pvVar8 + 0xae) = sVar30;
          if (sVar30 < 0) {
            *(short *)((int)pvVar8 + 0xae) =
                 (short)Splines[*(int *)((int)pvVar8 +
                                        *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4) *
                                        4 + 0x70)]->cnt + -1;
          }
        }
        iVar24 = collproc::CollLine(local_90,(int)pvVar8 + 0xd0,0,moby,0);
        if ((iVar24 != 0) &&
           ((CollOutput.pMoby == (MobyInstance *)0x0 ||
            ((CollOutput.pMoby)->oClass == ASTEROID_00D4)))) {
          *(undefined4 *)((int)pvVar8 + 0xec) = 0;
        }
      }
      else {
        uVar33 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar2 = (moby->pos).x - g_heroPosition.x;
        dVar37 = (double)FUN_005e8338((double)SQRT(fVar2 * fVar2 + fVar3 * fVar3),
                                      (double)(g_heroPosition.z - (moby->pos).z));
        dVar36 = 3.1415927410125732;
        dVar39 = 6.2831854820251465;
        dVar37 = -dVar37;
        mobyutil::OrganicDeltAngSpeed
                  (uVar33,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
                   (double)(mobyutil::g_FrameTime * 6.2831855),moby);
        dVar37 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar37,
                                    (double)(float)((double)DAT_0071f418 * dVar36),
                                    (double)(float)((double)DAT_0071f418 * dVar39),
                                    (double)(float)((double)mobyutil::g_FrameTime * dVar39));
        (moby->rotation).y = (float)dVar37;
        fVar3 = (moby->rotation).x;
        fVar3 = *(float *)((int)pvVar8 + 0xb8) * (1.5707964 - ABS(fVar3)) * 0.63661975 * -0.5 +
                fVar3;
        if (1.5707964 - fVar3 < 0.0) {
          fVar3 = 1.5707964;
        }
        if (fVar3 - -1.5707964 < 0.0) {
          fVar3 = -1.5707964;
        }
        (moby->rotation).x = fVar3 * 0.985;
        mobyutil::MB_WrapRot(fVar3 * 0.985);
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 1;
        }
        fVar3 = *(float *)((int)pvVar8 + 0xd0);
        fVar2 = *(float *)((int)pvVar8 + 0xd4);
        fVar4 = *(float *)((int)pvVar8 + 0xd8);
        *(float *)((int)pvVar8 + 0xbc) = *(float *)((int)pvVar8 + 0xbc) * 0.8;
        fVar5 = (moby->pos).y;
        fVar6 = (moby->pos).x;
        fVar20 = fVar2 - fVar5;
        fVar15 = fVar3 - fVar6;
        fVar7 = (moby->pos).z;
        fVar21 = fVar4 - fVar7;
        fVar14 = SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar20 * fVar20);
        fVar17 = 0.0;
        fVar22 = 30.0 / fVar14;
        fVar18 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar18 = fVar20 * fVar22;
        }
        fVar16 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar16 = fVar15 * fVar22;
        }
        fVar19 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar19 = fVar21 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar18 = fVar20 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar16 = fVar15 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar19 = fVar21 * fVar22;
        }
        fVar18 = fVar18 + fVar5;
        fVar16 = fVar16 + fVar6;
        fVar19 = fVar19 + fVar7;
        fVar5 = fVar18 - g_heroPosition.y;
        fVar7 = fVar16 - g_heroPosition.x;
        fVar6 = fVar19 - g_heroPosition.z;
        fVar16 = fVar16 - fVar3;
        fVar18 = fVar18 - fVar2;
        fVar19 = fVar19 - fVar4;
        fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
        if (fVar5 != 30.0) {
          fVar6 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18);
          if (mobyutil::g_FrameTime * 15.0 - fVar5 < 0.0) {
            fVar5 = mobyutil::g_FrameTime * 15.0;
          }
          fVar5 = fVar5 / fVar6;
          fVar7 = fVar17;
          if (0.0 - fVar6 < 0.0) {
            fVar7 = fVar19 * fVar5;
          }
          fVar14 = fVar17;
          if (0.0 - fVar6 < 0.0) {
            fVar14 = fVar18 * fVar5;
          }
          if (0.0 - fVar6 < 0.0) {
            fVar17 = fVar16 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar7 = fVar19 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar14 = fVar18 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar17 = fVar16 * fVar5;
          }
          fVar3 = fVar3 + fVar17;
          *(float *)((int)pvVar8 + 0xd8) = fVar4 + fVar7;
          *(float *)((int)pvVar8 + 0xd4) = fVar2 + fVar14;
          *(float *)((int)pvVar8 + 0xd0) = fVar3;
        }
        iVar24 = DAT_0096b2d0;
        if (DAT_0096b2d0 != 0) {
          *(float *)(DAT_0096b2d0 + 0x10) = fVar3;
          fVar2 = *(float *)((int)pvVar8 + 0xd4);
          *(float *)(iVar24 + 0x14) = fVar2;
          iVar25 = *(int *)(iVar24 + 0x78);
          *(undefined4 *)(iVar24 + 0x18) = *(undefined4 *)((int)pvVar8 + 0xd8);
          *(undefined4 *)(iVar24 + 0x1c) = *(undefined4 *)((int)pvVar8 + 0xdc);
          uVar33 = FUN_005e8338((double)((moby->pos).x - fVar3),(double)((moby->pos).y - fVar2));
          dVar37 = (double)fastfunc::FastDiffRots(uVar33,(double)*(float *)(iVar25 + 0x38));
          fVar3 = *(float *)(DAT_0096b2d0 + 0x14) - (moby->pos).y;
          fVar2 = *(float *)(DAT_0096b2d0 + 0x10) - (moby->pos).x;
          dVar38 = ABS(dVar37);
          dVar39 = (double)FUN_005e8338((double)SQRT(fVar2 * fVar2 + fVar3 * fVar3),
                                        (double)((moby->pos).z - *(float *)(DAT_0096b2d0 + 0x18)));
          dVar39 = (double)fastfunc::FastDiffRots(-dVar39,(double)*(float *)(iVar25 + 0x34));
          dVar34 = 0.8726646304130554;
          dVar36 = 5.729578018188477;
          dVar35 = ABS(dVar39);
          if (0.8726646304130554 < dVar38) {
            dVar37 = (double)fastfunc::FastWrapRot
                                       (*(float *)(iVar25 + 0x38),
                                        (float)((double)((float)(dVar38 - 0.8726646304130554) *
                                                        5.729578) * dVar37));
            *(float *)(iVar25 + 0x38) = (float)dVar37;
          }
          if (dVar34 < dVar35) {
            dVar37 = (double)fastfunc::FastWrapRot
                                       (*(float *)(iVar25 + 0x34),
                                        (float)((double)(float)((double)(float)(dVar35 - dVar34) *
                                                               dVar36) * dVar39));
            *(float *)(iVar25 + 0x34) = (float)dVar37;
          }
        }
      }
      if (moby->setByGroup == '\x04') {
        mobyutil::MB_ColorDyingMoby(moby,(int)pvVar8 + 0x60);
      }
      else {
        mobyupdate_helpers::M1284_00239d98(moby,pvVar8);
      }
      RegisterFuncForMoby(&PTR_M1284_0023b238_00709c10,moby);
    }
    else if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
  }
  else if (bVar1 < 8) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    mobyupdate_helpers::M1284_00238f88(moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),0);
    dVar39 = 3.1415927410125732;
    dVar37 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 3.1415927);
    (moby->rotation).x = (float)dVar37;
    iVar24 = fastfunc::FastDecTimerS32((int)pvVar8 + 0xe4);
    if (iVar24 != 0) {
      iVar24 = *(int *)((int)pvVar8 + 0x98);
      if (iVar24 != 0) {
        iVar25 = *(int *)(iVar24 + 0x78);
        *(float *)(iVar25 + 0x10) = *(float *)((int)pvVar8 + 0xc0) * 0.7;
        *(float *)(iVar25 + 0x14) = *(float *)((int)pvVar8 + 0xc4) * 0.7;
        fVar3 = *(float *)((int)pvVar8 + 200) * 0.7;
        *(float *)(iVar25 + 0x18) = fVar3;
        *(undefined4 *)(iVar25 + 0x1c) = *(undefined4 *)((int)pvVar8 + 0xcc);
        *(float *)(iVar25 + 0x18) = mobyutil::g_FrameTime * 20.0 + fVar3;
        *(undefined1 *)(iVar24 + 0x20) = 3;
        *(float *)(iVar24 + 0x10) = *(float *)(iVar24 + 0x10) + *(float *)(iVar25 + 0x10);
        *(float *)(iVar24 + 0x14) = *(float *)(iVar24 + 0x14) + *(float *)(iVar25 + 0x14);
        *(float *)(iVar24 + 0x18) = *(float *)(iVar24 + 0x18) + *(float *)(iVar25 + 0x18);
        dVar37 = (double)mobyutil::MB_randRangeFloat
                                   (mobyutil::g_FrameTime * -0.34906584,
                                    mobyutil::g_FrameTime * 0.34906584);
        *(float *)(iVar25 + 0x30) = (float)dVar37;
        dVar36 = -3.1415927410125732;
        dVar37 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * -3.1415927410125732),
                                    (float)((double)mobyutil::g_FrameTime * dVar39));
        *(float *)(iVar25 + 0x34) = (float)dVar37;
        dVar37 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar36),
                                    (float)((double)mobyutil::g_FrameTime * dVar39));
        *(float *)(iVar25 + 0x38) = (float)dVar37;
        *(undefined1 *)(iVar24 + 0xa4) = 0xff;
        *(undefined8 *)(iVar24 + 0x38) = 0x40404000000000;
        *(undefined4 *)((int)pvVar8 + 0x98) = 0;
      }
      moby->state = '\b';
    }
  }
  else if (bVar1 < 9) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    fVar3 = *(float *)((int)pvVar8 + 0xc0) * 1.025;
    *(float *)((int)pvVar8 + 0xc0) = fVar3;
    *(float *)((int)pvVar8 + 0xc4) = *(float *)((int)pvVar8 + 0xc4) * 1.025;
    *(float *)((int)pvVar8 + 200) = *(float *)((int)pvVar8 + 200) * 1.025 + DAT_0071f418 * 15.0;
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xc4);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 200);
    uVar33 = FUN_005e8338((double)*(float *)((int)pvVar8 + 0xc0),
                          (double)*(float *)((int)pvVar8 + 0xc4));
    dVar37 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar8 + 0xc0) *
                                               *(float *)((int)pvVar8 + 0xc0) +
                                               *(float *)((int)pvVar8 + 0xc4) *
                                               *(float *)((int)pvVar8 + 0xc4)),
                                  (double)*(float *)((int)pvVar8 + 200));
    dVar36 = 3.1415927410125732;
    dVar39 = 6.2831854820251465;
    dVar37 = -dVar37;
    mobyutil::OrganicDeltAngSpeed
              (uVar33,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
               (double)(mobyutil::g_FrameTime * 6.2831855),moby);
    dVar37 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar37,
                                (double)(float)((double)DAT_0071f418 * dVar36),
                                (double)(float)((double)DAT_0071f418 * dVar39),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar39));
    (moby->rotation).y = (float)dVar37;
    fVar3 = (moby->rotation).x;
    fVar3 = *(float *)((int)pvVar8 + 0xb8) * (1.5707964 - ABS(fVar3)) * 0.63661975 * -0.5 + fVar3;
    if (1.5707964 - fVar3 < 0.0) {
      fVar3 = 1.5707964;
    }
    if (fVar3 - -1.5707964 < 0.0) {
      fVar3 = -1.5707964;
    }
    (moby->rotation).x = fVar3 * 0.985;
    mobyutil::MB_WrapRot(fVar3 * 0.985);
    fVar9 = (moby->pos).x;
    uVar12 = (int)fVar9 >> 0x1f;
    iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12;
    if ((((iVar24 < 0x40000000) || (0x447f4000 < iVar24)) ||
        (fVar9 = (moby->pos).y, uVar12 = (int)fVar9 >> 0x1f,
        iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12, 0x447f4000 < iVar24 || iVar24 < 0x40000000))
       || ((fVar9 = (moby->pos).z, uVar12 = (int)fVar9 >> 0x1f,
           iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12, iVar24 < 0x40000000 ||
           (0x447f4000 < iVar24)))) {
      if (*(int *)((int)pvVar8 + 0xf0) != -1) {
        hud::Hud_SetEntryValueById(*(int *)((int)pvVar8 + 0xf0),0);
        *(undefined4 *)((int)pvVar8 + 0xf0) = 0xffffffff;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  fVar9 = (moby->pos).x;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar2 = 12.0;
  fVar3 = (moby->pos).x;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).x = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).x = 1011.0;
  }
  fVar9 = (moby->pos).y;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).y;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).y = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).y = 1011.0;
  }
  fVar9 = (moby->pos).z;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).z;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).z = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).z = 1011.0;
  }
  if (moby->setByGroup == '\x04') {
    iVar24 = *(int *)((int)pvVar8 + 0x108);
    if (iVar24 == 0) {
      uVar26 = mobyupd::update352::Spawn_Moby352(moby);
      *(undefined4 *)((int)pvVar8 + 0x108) = uVar26;
    }
    else if (2 < *(byte *)(iVar24 + 0x20)) {
      *(undefined1 *)(iVar24 + 0x20) = 1;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar8 + 0x108);
    if (iVar24 != 0) {
      if (*(short *)(iVar24 + 0xa6) == 0x160) {
        bVar1 = *(byte *)(iVar24 + 0x20);
        if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) {
          if (bVar1 < 3) {
            *(undefined1 *)(iVar24 + 0x20) = 3;
          }
          goto LAB_0023d2e0;
        }
      }
      *(undefined4 *)((int)pvVar8 + 0x108) = 0;
    }
  }
LAB_0023d2e0:
  mobyupdate_helpers::M1284_002389c8(moby,pvVar8);
  *(undefined1 *)((int)pvVar8 + 0x103) = 0;
  return;
}



//==== 0023d33c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1288_0023d33c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1288_0023d33c(void)

{
  DAT_0078dd60 = 0x10000;
  return;
}



//==== 0023d358  ns=mobyupdate_helpers  size=0x118
// sig: undefined M1288_0023d358(void)
// callers(1): 0023d4d8 mobyupdate_unsorted::UpdateMoby_{1285_1286_1287_1288}
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

longlong mobyupdate_helpers::M1288_0023d358(int param_1,MOBY_OCLASSES param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_LR;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(param_2);
  lVar2 = (longlong)(int)pMVar3;
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    auVar4 = loadVectorLeftIndexed(in_LR,0x23d350);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xff;
    cVar1 = storeVectorElementByteIndexed
                      (auVar4 | auVar4 << 8 | auVar4 << 0x10 | auVar4 << 0x18 | auVar4 << 0x20 |
                       auVar4 << 0x28 | auVar4 << 0x30 | auVar4 << 0x38 | auVar4 << 0x40 |
                       auVar4 << 0x48 | auVar4 << 0x50 | auVar4 << 0x58 | auVar4 << 0x60 |
                       auVar4 << 0x68 | auVar4 << 0x70 | auVar4 << 0x78,0xbc,lVar2);
    pMVar3->setByGroup = cVar1;
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(lVar2);
    pMVar3->scale = *(float *)(param_1 + 0x2c);
    pMVar3->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    *(undefined4 *)pMVar3->pVar = **(undefined4 **)(param_1 + 0x78);
  }
  return lVar2;
}



//==== 0023d4d8  ns=mobyupdate_unsorted  size=0x7d8
// sig: undefined UpdateMoby_{1285_1286_1287_1288}(MobyInstance * moby)
// callers(0): 
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015d12c sound::PlayMobySound; 0023d358 mobyupdate_helpers::M1288_0023d358; 00341590 FUN_00341590; 00500060 fastfunc::FastDecTimerS8; 00502730 fastfunc::FastIntToDouble

/* Moby 1285
   Moby 1286
   Moby 1287
   Moby 1288 */

void mobyupdate_unsorted::UpdateMoby__1285_1286_1287_1288_(MobyInstance *moby)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  MOBY_OCLASSES MVar8;
  undefined8 in_LR;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [24];
  double local_148;
  double local_140;
  
  lVar4 = (longlong)(int)moby;
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    if (*piVar1 != -1) {
      (&MiscLevelFlags.field67_0x43)[*piVar1] = 0;
    }
    moby->state = '\x01';
  }
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    bVar3 = false;
    iVar5 = mobyutil::MB_damage(lVar4,0x40000,0);
    iVar6 = fastfunc::FastDecTimerS8(lVar4 + 0xbc);
    if ((iVar6 != 0) && (iVar5 != 0)) {
      if (((short)moby->oClass < 0x508) &&
         (iVar6 = mobyupdate_helpers::M1288_0023d358(lVar4,(longlong)(short)moby->oClass + 1),
         iVar6 != 0)) {
        bVar3 = true;
      }
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = loadVectorLeftIndexed(in_LR,0x23d470);
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0xbc,
                         lVar4);
      moby->setByGroup = cVar2;
      if ((short)moby->oClass < 0x508) {
        sound::PlayMobySound(0,0,moby);
      }
      else {
        sound::PlayMobySound(0,0,moby);
      }
      iVar6 = 0x28;
      moby->damage = -1;
      if ((0x3f59999a <
           (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) -
                ((int)DAT_00a10714 >> 0x1f))) ||
         (0x3f59999a <
          (int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
               ((int)DAT_00a10718 >> 0x1f)))) {
        iVar6 = 0x1e;
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        uVar12 = 0;
        dVar10 = 0.30000001192092896;
        local_140 = -0.4000000059604645;
        local_148 = 0.4000000059604645;
        dVar11 = 8.0;
        do {
          dVar13 = local_140;
          dVar14 = local_148;
          mobyutil::MB_randRangeFloat(-0.4,0.4);
          mobyutil::MB_randRangeFloat(-0.6,0.6);
          mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
          mobyutil::MB_randRangeFloat((float)dVar10,2.6);
          mobyutil::MB_randRangeFloat(5.0,(float)dVar11);
          if (moby->oClass == BARRIER_0508) {
            mobyutil::MB_randRangeFloat(1.0,1.3);
            FUN_00341590(lVar4);
          }
          if (iVar7 % 3 == 0) {
            uVar9 = mobyutil::MB_randRangeFloat((float)dVar10,0.6);
            mobyutil::MB_SpawnExplosionSparks(uVar9,uVar12,lVar4,local_160);
          }
          iVar7 = iVar7 + 1;
          fastfunc::FastIntToDouble(iVar6);
        } while (iVar7 < iVar6);
      }
      mobyutil::MB_genericExplosion
                (0,0,0x4008000000000000,0x4000000000000000,0x3ff0000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar4,iVar5 + 0x10,local_170,1,0xffffffffffffffff,10,3,0x10);
      MVar8 = moby->oClass;
      if ((MVar8 == BARRIER_0508) && (*piVar1 != -1)) {
        (&MiscLevelFlags.field67_0x43)[*piVar1] = 1;
        MVar8 = moby->oClass;
      }
      if ((MVar8 == BARRIER_0508) || (bVar3)) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else {
    if (*piVar1 != -1) {
      (&MiscLevelFlags.field67_0x43)[*piVar1] = 1;
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0023dcb0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1289_0023dcb0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1289_0023dcb0(void)

{
  DAT_0078ddd0 = 0x10000;
  return;
}



//==== 0023dcc8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1289(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1289 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1289(MobyInstance *moby)

{
  return moby;
}



//==== 0023dccc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1290_0023dccc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1290_0023dccc(void)

{
  DAT_0078de40 = 0x10000;
  return;
}



//==== 0023dcf8  ns=mobyupdate_helpers  size=0x308
// sig: undefined M1290_0023dcf8(void)
// callers(1): 0023e140 mobyupdate_unsorted::UpdateMoby_1290
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1290_0023dcf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  undefined8 in_r9;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_90 [56];
  
  dVar12 = 0.0;
  iVar8 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  lVar10 = uVar9 + 0x30;
  dVar13 = 255.0;
  auVar18 = loadVectorLeftIndexed(0x10,0x23dce0);
  dVar14 = 255.5;
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  dVar15 = 0.5;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
    dVar11 = (double)fVar4;
    *(float *)(iVar3 + 0x10) = fVar4;
    if (dVar11 < dVar13) {
      if (dVar11 <= dVar12) {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar13);
      }
    }
    else {
      *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar13);
    }
    iVar6 = fastfunc::FastDecTimerS32(uVar9 + 0x30);
    iVar1 = *(int *)(iVar3 + 0x30);
    dVar11 = (double)animationSpeed;
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar6 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar17);
      iVar1 = (int)(dVar11 * dVar14);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar11 = (double)fastfunc::FastIntToDouble((int)(dVar11 * dVar14) - iVar1);
    uVar5 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar15 - (double)(float)(dVar11 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    uVar7 = fastfunc::FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
    partupd::SpawnPart_59((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}



//==== 0023e010  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1290_0023e010(void)
// callers(1): 0023e140 mobyupdate_unsorted::UpdateMoby_1290
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1290_0023e010(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = mobyutil::MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)((int)uVar5 + 0x10) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x24) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x28) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x2c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x23e000);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x23e000);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x23e000);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7._0_4_ = iVar4 + auVar9._0_4_;
    auVar7._8_8_ = in_vs39._8_8_;
    auVar7._4_4_ = iVar10 + auVar9._4_4_;
    auVar16._0_8_ = auVar7._0_8_;
    auVar16._8_4_ = iVar11 + auVar9._8_4_;
    auVar16._12_4_ = iVar12 + auVar9._12_4_;
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8._0_4_;
    iVar10 = iVar10 + auVar8._4_4_;
    iVar11 = iVar11 + auVar8._8_4_;
    iVar12 = iVar12 + auVar8._12_4_;
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x40) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x44) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x48) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x4c) = 0x40200000;
  return;
}



//==== 0023e140  ns=mobyupdate_unsorted  size=0x370
// sig: undefined UpdateMoby_1290(MobyInstance * moby)
// callers(0): 
// callees(11): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 00167e60 update::mode_sceneInit; 0023dcf8 mobyupdate_helpers::M1290_0023dcf8; 0023e010 mobyupdate_helpers::M1290_0023e010; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 00655310: 'Moby 1290 %d needs a cut scene!\n' | 00655338: 'Already got pilot helmet... deleting.\n' | 00655360: 'Get Pilot Hat!\n' | 00a1000c: 'None' | 00655370: 'Moby 1290 %d has no segment switch!\n'

/* Moby 1290 */

void mobyupdate_unsorted::UpdateMoby_1290(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  MobyInstance *pMVar6;
  double dVar7;
  
  piVar3 = (int *)moby->pVar;
  dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964);
  bVar1 = moby->state;
  (moby->rotation).z = (float)dVar7;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      mobyupdate_helpers::M1290_0023e010(moby);
      if (*piVar3 == -1) {
        libc::printf("Moby 1290 %d needs a cut scene!\n",moby->uid);
      }
      if (UnlockableItems.pilotsHelmet == '\0') {
        fVar2 = (moby->pos).z;
        moby->state = '\x01';
        (moby->pos).z = fVar2 + 1.0;
      }
      else {
        libc::printf("Already got pilot helmet... deleting.\n");
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyupdate_helpers::M1290_0023dcf8(moby);
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (((SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 3.0) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroHealth != 0)) {
        iVar4 = *piVar3;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (iVar4 == -1) {
          libc::printf("Moby 1290 %d needs a cut scene!\n",moby->uid);
        }
        else {
          update::mode_sceneInit(iVar4);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode != GAME_MODE_SCENE) {
      libc::printf("Get Pilot Hat!\n");
      mobyutil::MB_ToastMessage(0x232a,0xffffffffffffffff);
      g_toastMsgTimer = 0xb4;
      mobyutil::MB_UnlockItem(7,1);
      if (CHAR_ARRAY_00a1000c._416_2_ == 0) {
        help::Help_QueueMessage(STR_YOU_HAVE_ACQUIRED_A_0x2328,0x34);
      }
      pMVar6 = MobyInstance;
      iVar4 = piVar3[1];
      if (iVar4 == -1) {
        libc::printf("Moby 1290 %d has no segment switch!\n",moby->uid);
      }
      else {
        (&DAT_00a53964)[(short)MobyInstance[iVar4].uid] = MobyInstance[iVar4].levelFlagIdx + '\x02';
        bVar1 = pMVar6[piVar3[1]].levelFlagIdx;
        if ((bVar1 == 0xff) ||
           (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
          (&DAT_00a545c4)[(short)pMVar6[piVar3[1]].uid] = bVar1 + 2;
        }
      }
      if (moby->levelFlagIdx != -1) {
        mobyfunc::SetLevelFlag();
      }
      DAT_0096bda0 = 7;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    memcard::memcard_Save(0,-1);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0023e4b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1291_0023e4b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1291_0023e4b0(void)

{
  DAT_0078deb0 = 0x10000;
  return;
}



//==== 0023e4d0  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1291_0023e4d0(void)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

bool mobyupdate_helpers::M1291_0023e4d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::Delt(0.0,mobyutil::g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  boot::SceneScreenFade = *(float *)(iVar1 + 0x104);
  return *(int *)(iVar1 + 0x104) < 1;
}



//==== 0023e550  ns=mobyupdate_helpers  size=0x90
// sig: undefined M1291_0023e550(void)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

bool mobyupdate_helpers::M1291_0023e550(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::Delt(1.0,mobyutil::g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  boot::SceneScreenFade = *(float *)(iVar1 + 0x104);
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2);
}



//==== 0023e5e8  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1291_0023e5e8(void)
// callers(0): 
// callees(1): 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1291_0023e5e8(int param_1)

{
  float fVar1;
  int iVar2;
  Spline *pSVar3;
  float fVar4;
  
  fVar4 = DAT_0078ded4;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(float *)(param_1 + 0x2c) = fVar1 * fVar4;
  *(undefined4 *)(iVar2 + 0xf8) = 0x437f0000;
  pSVar3 = Splines[*(int *)(iVar2 + 0xc0)];
  mobyutil::MB_getTargetInArea
            (0x406fe00000000000,param_1,iVar2 + 0x70,pSVar3,0,0,pSVar3->points,pSVar3->cnt);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    *(MobyInstance **)(iVar2 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 0023e698  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_1291(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 1291 */

void mobyupdate_unsorted::UpdateMoby_1291(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0023e6bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1292_0023e6bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1292_0023e6bc(void)

{
  DAT_0078df28 = 0x10000;
  return;
}



//==== 0023e6e0  ns=Global  size=0x494
// sig: undefined FUN_0023e6e0(void)
// callers(1): 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_0023e6e0(float *param_1,f32 *param_2,float param_3,float param_4,undefined4 param_5,
            float param_6)

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
  undefined8 uVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  longlong lVar13;
  longlong lVar14;
  longlong lVar16;
  float *pfVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x21] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x18) = param_5;
  uVar11 = 0xc0;
  *(undefined4 *)((int)puVar8 + 0xc4) = param_5;
  puVar8[0x1d] = unaff_r27;
  *(undefined4 *)(puVar8 + 0x19) = param_5;
  puVar8[0x1f] = unaff_r29;
  puVar8[0x1e] = unaff_r28;
  *(undefined4 *)((int)puVar8 + 0xcc) = param_5;
  puVar8[0x20] = unaff_r30;
  puVar8[0x1c] = unaff_r26;
  auVar24 = *(undefined1 (*) [16])(puVar8 + 0x18);
  pMVar15 = mobyfunc::CreateMoby(0x50c);
  if (pMVar15 != (MobyInstance *)0x0) {
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0x7e;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x01';
    pfVar17 = (float *)pMVar15->pVar;
    (pMVar15->pos).x = *param_2;
    (pMVar15->pos).y = param_2[1];
    auVar24 = ZEXT416(0xffffffff);
    auVar23 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    (pMVar15->pos).z = param_2[2];
    (pMVar15->pos).w = param_2[3];
    fVar5 = *param_1;
    fVar1 = *param_1;
    *pfVar17 = fVar1;
    fVar6 = param_1[1];
    fVar2 = param_1[1];
    fVar1 = ABS(fVar1);
    pfVar17[1] = fVar2;
    pfVar17[2] = param_1[2];
    pfVar17[3] = param_1[3];
    auVar24 = loadVectorLeftIndexed(uVar11,0x23e6d0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar2 = ABS(fVar2);
    auVar24 = vectorAddFloatingPoint
                        (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x18,
                       ZEXT48(pfVar17));
    *(undefined4 *)((uint)(pfVar17 + 6) & 0xfffffffc) = uVar7;
    pfVar17[4] = param_3;
    pfVar17[5] = param_4;
    fVar3 = 0.0;
    pfVar17[10] = 0.0;
    pfVar17[0xb] = param_6;
    *(float *)(puVar8 + 0xf) = fVar1 - fVar2;
    uVar20 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = fVar1;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar4 = fVar3;
    if (0.0 < fVar6) {
      lVar13 = uVar12 - 0x100;
      lVar16 = uVar12 - 0x74;
      lVar18 = uVar12 - 100;
      lVar21 = 2;
      fVar2 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar2 = fVar3;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar4 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar15->rotation).z = fVar4;
    fVar1 = pfVar17[2];
    fVar5 = ABS(pfVar17[2]);
    fVar2 = SQRT(*pfVar17 * *pfVar17 + pfVar17[1] * pfVar17[1]);
    fVar6 = ABS(fVar2);
    *(float *)(puVar8 + 0xe) = fVar2;
    *(float *)((int)puVar8 + 0x74) = fVar6 - fVar5;
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x100;
      lVar16 = uVar12 - 0x94;
      lVar18 = uVar12 - 0x84;
      lVar21 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = fVar2;
      *(float *)((int)puVar8 + 0x7c) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x94;
      pfVar17 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar1 + fVar4;
    }
    (pMVar15->rotation).y = -fVar3;
    mobyfunc::UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}



//==== 0023eb98  ns=mobyupdate_unsorted  size=0x42c
// sig: undefined UpdateMoby_1292(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00105c08 mobyutil::CollDamageMobyDirect; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1292 */

void mobyupdate_unsorted::UpdateMoby_1292(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *impact;
  float fVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 auStack_50 [32];
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  impact = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      if (((impact[5] == 0.0) || (cVar2 = *(char *)((int)impact[5] + 0x20), cVar2 == -2)) ||
         (cVar2 == -3)) {
        moby->state = '\x02';
      }
      if (((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
                ((int)DAT_00a10718 >> 0x1f)) < 0x3f666666) &&
         ((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) -
               ((int)DAT_00a10714 >> 0x1f)) < 0x3f666666)) {
        mobyutil::MB_randRangeFloat(0.95,0.985);
        fastfunc::FastVecAddSelf(auStack_50,local_60,lVar7 + 0x10);
        iVar8 = mobyutil::MB_randRange(0xf,0x14);
        dVar9 = 0.5;
        fVar3 = animationSpeed * (float)((double)(longlong)iVar8 + 0.5);
        iVar8 = mobyutil::MB_randRange(7,10);
        partupd::SpawnPart_4
                  (local_60,local_70,0x6f00afff,0xff,(int)fVar3,0x28,
                   (int)(animationSpeed * (float)((double)(longlong)iVar8 + dVar9)),1);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
      }
      fVar6 = impact[4];
      (moby->pos).x = fVar3 + *impact;
      (moby->pos).y = fVar4 + impact[1];
      (moby->pos).z = fVar5 + impact[2];
      iVar8 = collproc::CollLine(lVar7 + 0x10,local_80,0x10,fVar6,0);
      if ((iVar8 != 0) && (CollOutput.pMoby != (MobyInstance *)impact[4])) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::CollDamageMobyDirect
                    (1.0,CollOutput.pMoby,moby,0x10001,0x10000,&CollOutput.ip.x,impact);
        }
        moby->state = '\x02';
      }
      iVar8 = fastfunc::FastDecTimerS32(impact + 6);
      if (iVar8 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if ((((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
               ((int)DAT_00a10718 >> 0x1f)) < 0x3f59999a) &&
        ((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)
              ) < 0x3f59999a)) || (impact[0xb] == 1.4013e-45)) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar7,lVar7 + 0x10,&DAT_0023eb74,
                 0xffffffffffffffff);
    }
    else {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fd0000000000000,0,lVar7,lVar7 + 0x10,&DAT_0023eb74,0xffffffffffffffff);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0023efc4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1320_0023efc4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1320_0023efc4(void)

{
  DAT_0078dfa4 = 0x10000;
  return;
}



//==== 0023f010  ns=mobyupdate_unsorted  size=0x810
// sig: undefined UpdateMoby_{1293_1320}(MobyInstance * moby)
// callers(0): 
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 0010a050 mobyutil::AccelDeltAng; 001120d4 mobyutil::MB_TransformBetweenFrames; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 006553b0: 'Floating ship piece UID:%d oclass:%d missing trigger moby! Will just float there.\n'

/* Moby 1293
   Moby 1320 */

void mobyupdate_unsorted::UpdateMoby__1293_1320_(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  Vec4 local_d0;
  f32 local_c0;
  f32 local_bc;
  f32 local_b8;
  f32 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  longlong local_90;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  local_d0.x = -(moby->pos).x;
  dVar17 = (double)(moby->pos).z;
  local_d0.y = -(moby->pos).y;
  local_d0.w = (moby->pos).w;
  pvVar5 = moby->pVar;
  uVar13 = ZEXT48(pvVar5);
  local_c0 = (moby->rotation).x;
  local_bc = (moby->rotation).y;
  local_b8 = (moby->rotation).z;
  local_b4 = (moby->rotation).w;
  local_d0.z = (float)-dVar17;
  bVar1 = moby->state;
  dVar16 = (double)(*(float *)((int)pvVar5 + 0x84) - 0.3);
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar5 + 0x60) = (moby->rotation).x;
    fVar3 = (moby->rotation).y;
    *(undefined4 *)((int)pvVar5 + 0x80) = 1;
    *(f32 *)((int)pvVar5 + 100) = fVar3;
    *(f32 *)((int)pvVar5 + 0x68) = (moby->rotation).z;
    fVar3 = (moby->rotation).w;
    *(undefined1 *)((int)pvVar5 + 0x70) = 0;
    *(f32 *)((int)pvVar5 + 0x6c) = fVar3;
    *(undefined1 *)((int)pvVar5 + 0x71) = 0;
    *(undefined1 *)((int)pvVar5 + 0x72) = 0;
    *(undefined1 *)((int)pvVar5 + 0x73) = 0;
    *(undefined1 *)((int)pvVar5 + 0x74) = 0;
    *(undefined1 *)((int)pvVar5 + 0x75) = 0;
    *(undefined1 *)((int)pvVar5 + 0x76) = 0;
    *(undefined1 *)((int)pvVar5 + 0x77) = 0;
    *(undefined1 *)((int)pvVar5 + 0x78) = 0;
    *(undefined1 *)((int)pvVar5 + 0x79) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7a) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7b) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7d) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7e) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7f) = 0;
    fVar4 = (moby->pos).z;
    *(float *)((int)pvVar5 + 0x84) = fVar4;
    if (*(int *)((int)pvVar5 + 0x8c) == -1) {
      libc::printf("Floating ship piece UID:%d oclass:%d missing trigger moby! Will just float there.\n"
                   ,moby->uid,moby->oClass);
      moby->state = '\x02';
    }
    else {
      (moby->pos).z = fVar4 - 5.0;
      dVar18 = -1.5707963705062866;
      dVar16 = 1.5707963705062866;
      dVar17 = (double)mobyutil::MB_randRangeFloat(-1.5707964,1.5707964);
      (moby->rotation).x = (float)dVar17;
      dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar16);
      (moby->rotation).y = (float)dVar17;
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (((MobyInstance + *(int *)((int)pvVar5 + 0x8c) == (MobyInstance *)0x0) ||
        (uVar2 = MobyInstance[*(int *)((int)pvVar5 + 0x8c)].state, uVar2 == 0xfe)) ||
       (uVar2 == 0xfd)) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      iVar12 = *(int *)((int)pvVar5 + 0x88);
      if (iVar12 == 0) {
        sound::PlayMobySound(0,0,moby);
        iVar12 = *(int *)((int)pvVar5 + 0x88);
      }
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0x10,0x23efd8);
      auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      local_90 = (longlong)(int)(animationSpeed * 30.5);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      if (iVar12 < (int)(animationSpeed * 30.5)) {
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,uVar13
                          );
        *(undefined4 *)((int)pvVar5 + 0x88U & 0xfffffffc) = uVar8;
      }
    }
    if (*(int *)((int)pvVar5 + 0x88) == 0) {
      fVar4 = (moby->pos).z;
      fVar4 = DAT_0078dfd0 * mobyutil::g_FrameTime * (*(float *)((int)pvVar5 + 0x84) - fVar4) +
              fVar4;
      (moby->pos).z = fVar4;
      uVar15 = 0;
      if (*(float *)((int)pvVar5 + 0x84) - 2.0 <= fVar4) {
        dVar18 = 0.01745329238474369;
        mobyutil::AccelDeltAng
                  (0,(double)(DAT_0078dfe4 * 0.017453292 * DAT_0071f418),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)(DAT_0078dfec * 0.017453292 * mobyutil::g_FrameTime),uVar13 + 0x60,
                   &DAT_00720000,uVar13 + 0x70);
        mobyutil::AccelDeltAng
                  (uVar15,(double)((float)((double)DAT_0078dfe4 * dVar18) * DAT_0071f418),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)((float)((double)DAT_0078dfec * dVar18) * mobyutil::g_FrameTime),
                   uVar13 + 100);
      }
      else {
        (moby->pos).z = DAT_0078dfd0 * mobyutil::g_FrameTime + fVar4;
        dVar19 = 0.01745329238474369;
        dVar14 = 3.0;
        dVar18 = 1.5707963705062866;
        mobyutil::AccelDeltAng
                  (0,(double)(DAT_0078dfe4 * 0.017453292 * DAT_0071f418 * 3.0),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),(double)(mobyutil::g_FrameTime * 1.5707964)
                   ,uVar13 + 0x60,&DAT_0023efd8,uVar13 + 0x70);
        mobyutil::AccelDeltAng
                  (uVar15,(double)(float)((double)((float)((double)DAT_0078dfe4 * dVar19) *
                                                  DAT_0071f418) * dVar14),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)(float)((double)mobyutil::g_FrameTime * dVar18),uVar13 + 100);
      }
      fVar3 = (moby->pos).z;
      uVar6 = (int)fVar3 >> 0x1f;
      uVar7 = (int)*(uint *)((int)pvVar5 + 0x84) >> 0x1f;
      fVar4 = *(float *)((int)pvVar5 + 0x84);
      fVar9 = (moby->pos).z;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x84)) - uVar7) <
          (int)((uVar6 >> 1 ^ (uint)fVar3) - uVar6)) {
        (moby->pos).z = fVar4;
        fVar9 = fVar4;
      }
      if (dVar17 < dVar16 && dVar16 <= (double)fVar9) {
        sound::PlayMobySound(2,0,moby);
      }
    }
    else {
      fastfunc::FastDecTimerS32(uVar13 + 0x88);
      fVar4 = g_heroPosition.y - (moby->pos).y;
      fVar9 = g_heroPosition.x - (moby->pos).x;
      dVar19 = (double)(moby->pos).z;
      local_b0 = *(undefined4 *)((int)pvVar5 + 0x60);
      local_ac = *(undefined4 *)((int)pvVar5 + 100);
      local_a8 = *(undefined4 *)((int)pvVar5 + 0x68);
      local_a4 = *(undefined4 *)((int)pvVar5 + 0x6c);
      dVar14 = 0.01745329238474369;
      dVar18 = (double)(DAT_0078dfc8 *
                       ((float)((double)g_heroPosition.z - dVar19) * (moby->transform).v0.z +
                       fVar9 * (moby->transform).v0.x + fVar4 * (moby->transform).v0.y));
      mobyutil::AccelDeltAng
                (-(double)(DAT_0078dfc8 *
                          ((float)((double)g_heroPosition.z - dVar19) * (moby->transform).v1.z +
                          fVar9 * (moby->transform).v1.x + fVar4 * (moby->transform).v1.y)),
                 (double)(DAT_0078dfd8 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_0078dfdc * DAT_0071f40c),
                 (double)(DAT_0078dfe0 * 0.017453292 * mobyutil::g_FrameTime),uVar13 + 0x60,0x790000
                 ,uVar13 + 0x70);
      mobyutil::AccelDeltAng
                (dVar18,(double)((float)((double)DAT_0078dfd8 * dVar14) * DAT_0071f418),
                 (double)(DAT_0078dfdc * DAT_0071f40c),
                 (double)((float)((double)DAT_0078dfe0 * dVar14) * mobyutil::g_FrameTime),
                 uVar13 + 100);
      dVar18 = -(double)(DAT_0078dfcc * mobyutil::g_FrameTime - (moby->pos).z);
      (moby->pos).z = (float)dVar18;
      if ((dVar16 < dVar17) && (dVar18 <= dVar16)) {
        sound::PlayMobySound(1,0,moby);
      }
      mobyutil::MB_TransformBetweenFrames
                (&g_heroPosition,uVar10 - 0xa0,lVar11 + 0x10,uVar10 - 0xb0,uVar13 + 0x60);
      DAT_00969dd0 = local_a0 - g_heroPosition.x;
      DAT_00969dd4 = local_9c - g_heroPosition.y;
      DAT_00969ddc = local_94;
      DAT_00969dd8 = (local_98 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar19);
    }
    mobyutil::MB_BobMotion
              (0.14,mobyutil::g_FrameTime * 0.5235988,moby,(float *)((int)pvVar5 + 0x98),
               (float *)((int)pvVar5 + 0x9c));
    mobyutil::MB_SwingMotion
              (0x3fb6571840000000,(double)(mobyutil::g_FrameTime * 0.43633232),
               (double)(mobyutil::g_FrameTime * 0.54105204),lVar11,uVar13 + 0x90,uVar13 + 0x94);
    dVar17 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar5 + 0x60),(moby->rotation).x);
    (moby->rotation).x = (float)dVar17;
    dVar17 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar5 + 100),(moby->rotation).y);
    local_d0.x = local_d0.x + (moby->pos).x;
    local_d0.y = local_d0.y + (moby->pos).y;
    fVar4 = (moby->pos).z;
    (moby->rotation).y = (float)dVar17;
    local_d0.z = local_d0.z + fVar4;
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar5 + 0x20),&local_d0,uVar10 - 0xc0,lVar11 + 0x40);
  }
  return;
}



//==== 0023f820  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1320_0023f820(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1320_0023f820(void)

{
  DAT_0078e03c = 0x10000;
  return;
}



//==== 0023f840  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1320_0023f840(void)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1320_0023f840(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  
  mobyutil::MB_randSphere
            ((double)(DAT_0078e08c * mobyutil::g_FrameTime),
             (double)(DAT_0078e090 * mobyutil::g_FrameTime),auStack_70);
  mobyutil::MB_randSphere
            ((double)(DAT_0078e08c * mobyutil::g_FrameTime),
             (double)(DAT_0078e090 * mobyutil::g_FrameTime),auStack_60);
  uVar2 = DAT_0078e0a0;
  uVar1 = DAT_0078e09c;
  dVar6 = 0.0;
  dVar5 = 1.0;
  mobyutil::MB_randRangeFloat(0.0,1.0);
  uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_0078e0a0;
  uVar1 = DAT_0078e09c;
  mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar5);
  uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
  partupd::SpawnPart_2
            (param_1 + 0x10,auStack_70,auStack_60,uVar3,uVar4,DAT_0078e0a4,DAT_0078e0a8,DAT_0078e0ac
            );
  return;
}



//==== 0023f9f8  ns=mobyupdate_helpers  size=0x270
// sig: undefined M1297_0023f9f8(void)
// callers(1): 0023fc90 mobyupdate_unsorted::UpdateMoby_1297
// callees(4): 00130ed0 partupd::SpawnPart_59; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1297_0023f9f8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 in_r9;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_70 [32];
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  dVar8 = 0.3330000042915344;
  dVar9 = 0.02500000037252903;
  iVar6 = iVar1;
  do {
    uVar2 = fastfunc::FastLerpColor
                      ((double)(float)((double)(longlong)iVar5 * dVar8),DAT_0078e060,DAT_0078e064);
    bVar4 = *(char *)(iVar6 + 0x10) + *(char *)(iVar6 + 0x14);
    *(byte *)(iVar6 + 0x10) = bVar4;
    uVar3 = fastfunc::FastDoubleToInt((double)bVar4);
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar6 + 0x18));
    partupd::SpawnPart_59
              ((double)(float)((double)(float)((double)*(float *)(iVar1 + 0x1c) * dVar7) * dVar9),
               local_70,uVar2,uVar3,0x35,1,2,in_r9,0);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar5 < 4);
  return;
}



//==== 0023fc90  ns=mobyupdate_unsorted  size=0x398
// sig: undefined UpdateMoby_1297(MobyInstance * moby)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 001206e8 partupd::SpawnPart_2; 0023f9f8 mobyupdate_helpers::M1297_0023f9f8; 004fff60 fastfunc::FastDecTimerS32; 005027bc fastfunc::FastLerpColor

/* Moby 1297 */

void mobyupdate_unsorted::UpdateMoby_1297(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar8;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 local_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  lVar5 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  mobyupdate_helpers::M1297_0023f9f8();
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      iVar8 = fastfunc::FastDecTimerS32(pfVar2 + 8);
      dVar10 = extraout_f1;
      if (iVar8 != 0) {
        dVar10 = 20.5;
        fVar12 = moby->pClass->gScale;
        mobyutil::Delt(fVar12,fVar12 / (float)(longlong)(animationSpeed * 20.5),&moby->scale);
        fVar12 = mobyutil::Delt(DAT_0078e068,
                                DAT_0078e068 / (float)(longlong)((double)animationSpeed * dVar10),
                                pfVar2 + 7);
        dVar10 = (double)fVar12;
      }
      iVar8 = fastfunc::FastDecTimerS32(dVar10,pfVar2 + 10);
      if (iVar8 != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (bVar1 < 3) {
    mobyutil::MB_randSphere
              ((double)(DAT_0078e08c * mobyutil::g_FrameTime),
               (double)(DAT_0078e090 * mobyutil::g_FrameTime),auStack_70);
    mobyutil::MB_randSphere
              ((double)(DAT_0078e08c * mobyutil::g_FrameTime),
               (double)(DAT_0078e090 * mobyutil::g_FrameTime),auStack_60);
    uVar4 = DAT_0078e0a0;
    uVar3 = DAT_0078e09c;
    dVar10 = 0.0;
    dVar11 = 1.0;
    mobyutil::MB_randRangeFloat(0.0,1.0);
    uVar6 = fastfunc::FastLerpColor(uVar3,uVar4);
    uVar4 = DAT_0078e0a0;
    uVar3 = DAT_0078e09c;
    mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
    uVar7 = fastfunc::FastLerpColor(uVar3,uVar4);
    lVar9 = lVar5 + 0x10;
    partupd::SpawnPart_2
              (lVar9,auStack_70,auStack_60,uVar6,uVar7,DAT_0078e0a4,DAT_0078e0a8,DAT_0078e0ac);
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    iVar8 = fastfunc::FastDecTimerS32(pfVar2 + 8);
    if (((iVar8 != 0) || (iVar8 = collproc::CollLine(local_80,lVar9,0,lVar5,0), iVar8 != 0)) ||
       (iVar8 = collproc::CollMobySphere(0x3fd54fdf40000000,lVar9,&DAT_0023fc68,0,pfVar2[9],0),
       iVar8 != 0)) {
      mobyutil::MB_genericExplosion
                (0x3ff8000000000000,0x4000000000000000,0x4010000000000000,0x4000000000000000,
                 0x4022000000000000,dVar11,0x402e000000000000,lVar5,pfVar2,lVar9,1,
                 0xffffffffffffffff,10,3,0x10);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



