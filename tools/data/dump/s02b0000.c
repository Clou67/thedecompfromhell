//==== 002b06a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M174_002b06a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M174_002b06a4(void)

{
  DAT_007b743c = 0x10000;
  return;
}



//==== 002b06b8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_174(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 174 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_174(MobyInstance *moby)

{
  return moby;
}



//==== 002b06bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M175_002b06bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M175_002b06bc(void)

{
  DAT_007b74ac = 0x10000;
  return;
}



//==== 002b06f0  ns=mobyupdate_helpers  size=0x980
// sig: undefined M175_002b06f0(void)
// callers(1): 002b1300 mobyupdate_unsorted::UpdateMoby_175
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe484 mobyutil::MB_randRange; 00105c08 mobyutil::CollDamageMobyDirect; 005026a0 fastfunc::FastSubRots

int mobyupdate_helpers::M175_002b06f0(double param_1,undefined8 param_2,MobyInstance *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  MobyInstance *moby;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  ulonglong uVar14;
  int iVar17;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  uint unused;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x2b] = unaff_r30;
  iVar23 = 0;
  pvVar9 = param_3->pVar;
  dVar32 = (double)(param_3->pos).x;
  dVar31 = (double)(param_3->pos).y;
  lVar20 = (longlong)*(int *)((int)pvVar9 + 0x14);
  puVar10[0x29] = unaff_r28;
  puVar10[0x28] = unaff_r27;
  puVar10[0x27] = unaff_r26;
  puVar10[0x26] = unaff_r25;
  puVar10[0x25] = unaff_r24;
  puVar10[0x24] = unaff_r23;
  iVar15 = mobyutil::MB_randInt(lVar20 + (lVar20 + -1 >> 0x3f & 1U - lVar20));
  *(undefined4 *)((int)pvVar9 + 0x14) = 0;
  if (DAT_00a49344 != (MobyInstance *)0x0) {
    iVar22 = 0;
    moby = DAT_00a49344;
    do {
      iVar16 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
      if (iVar16 != 0) {
        dVar26 = (double)(moby->pos).y;
        dVar25 = (double)(moby->pos).x;
        fVar2 = (float)(dVar31 - dVar26);
        fVar3 = (float)(dVar32 - dVar25);
        dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        if (dVar30 < 12.0) {
          MVar8 = moby->oClass;
          if (((MVar8 == NANOTECH_CRATE || MVar8 == BOLT_CRATE) || (MVar8 == EXPLOSIVE_CRATE)) ||
             (MVar8 == AMMO_CRATE)) {
            fVar2 = (float)(dVar25 - (double)g_heroPosition.x);
            fVar3 = (float)(dVar26 - (double)g_heroPosition.y);
            fVar5 = ABS(fVar2);
            fVar4 = ABS(fVar3);
            *(float *)(puVar10 + 0x13) = fVar2;
            *(float *)((int)puVar10 + 0x9c) = fVar3;
            fVar3 = g_heroRotation.z;
            *(float *)(puVar10 + 0x14) = fVar5 - fVar4;
            dVar25 = 0.0;
            unused = *(uint *)(puVar10 + 0x14);
            uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
                     (ulonglong)(unused >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
            fVar2 = ABS(*(float *)(puVar10 + 0x13));
            if (*(float *)(puVar10 + 0x14) - 0.0 < 0.0) {
              fVar2 = fVar4;
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
            fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
            fVar7 = ABS(*(float *)((int)puVar10 + 0x9c));
            if (*(float *)(puVar10 + 0x14) - 0.0 < 0.0) {
              fVar7 = fVar5;
            }
            dVar26 = dVar25;
            if (0.0 < fVar2) {
              lVar20 = uVar13 - 0x180;
              unused = 2;
              lVar18 = uVar13 - 0xac;
              lVar21 = uVar13 - 0x9c;
              lVar24 = 2;
              fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
              fVar5 = fVar2 * fVar2;
              *(float *)(puVar10 + 0x1e) = fVar2;
              *(float *)(puVar10 + 0x1d) = fVar2;
              *(float *)((int)puVar10 + 0xec) = fVar2;
              *(float *)((int)puVar10 + 0xe4) = fVar2;
              fVar2 = fVar5 * fVar5;
              *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar5;
              *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar2;
              *(float *)(puVar10 + 0x1e) = *(float *)(puVar10 + 0x1e) * fVar2 * fVar5;
              do {
                *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xd4) * fVar2 * fVar2;
                iVar17 = (int)lVar18;
                lVar20 = lVar20 + 8;
                lVar18 = lVar18 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
                lVar21 = lVar21 + 8;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              lVar24 = 4;
              lVar21 = uVar13 - 0xac;
              pfVar19 = (float *)&DAT_007358e0;
              lVar20 = lVar1;
              lVar18 = lVar21;
              do {
                fVar2 = *pfVar19;
                fVar5 = pfVar19[1];
                pfVar19 = pfVar19 + 2;
                *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xe4) * fVar2;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
                lVar18 = lVar18 + 8;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              lVar18 = 2;
              lVar20 = lVar1;
              do {
                iVar17 = (int)lVar20;
                lVar20 = lVar20 + 0x10;
                iVar11 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xe4)) +
                                  *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                                 *(float *)(iVar11 + 0xc));
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar4);
            }
            dVar26 = (double)fastfunc::FastSubRots(fVar3,(float)dVar26);
            if (dVar26 < 0.9599310755729675) {
              iVar17 = *(int *)((int)pvVar9 + 0x14);
              if (iVar17 == iVar15) {
                fVar5 = (moby->pos).x - (param_3->pos).x;
                fVar3 = (param_3->pos).y;
                fVar4 = (param_3->pos).z;
                *(float *)(puVar10 + 0xe) = fVar5;
                fVar3 = (moby->pos).y - fVar3;
                *(float *)((int)puVar10 + 0x74) = fVar3;
                fVar4 = (moby->pos).z - fVar4;
                *(float *)(puVar10 + 0xf) = fVar4;
                *(f32 *)((int)puVar10 + 0x7c) = (moby->pos).w;
                dVar29 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
                fVar2 = (float)(1.5 / dVar29);
                dVar26 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar26 = (double)(fVar5 * fVar2);
                }
                dVar27 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar27 = (double)(fVar3 * fVar2);
                }
                dVar28 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar28 = (double)(fVar4 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar26 = (double)(fVar5 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar27 = (double)(fVar3 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar28 = (double)(fVar4 * fVar2);
                }
                *(float *)(puVar10 + 0xe) = (float)dVar26;
                *(float *)((int)puVar10 + 0x74) = (float)dVar27;
                *(float *)(puVar10 + 0xf) = (float)dVar28;
                mobyutil::CollDamageMobyDirect
                          (1.0,moby,param_3,0x10000,unused,&g_heroPosition.x,
                           (float *)(puVar10 + 0xe));
                iVar17 = mobyutil::MB_randRange(5,0x2d);
                puVar10[0x21] = (longlong)iVar17;
                iVar17 = *(int *)((int)pvVar9 + 0x14);
                *(int *)((int)pvVar9 + 0x10) =
                     (int)(animationSpeed * ((float)(longlong)puVar10[0x21] + 0.5));
              }
              *(int *)((int)pvVar9 + 0x14) = iVar17 + 1;
            }
          }
        }
        if (dVar30 < param_1) {
          fVar2 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = ABS(fVar2);
          fVar5 = ABS(fVar3);
          *(float *)((int)puVar10 + 0x8c) = fVar2;
          *(float *)(puVar10 + 0x12) = fVar3;
          fVar6 = g_heroRotation.z;
          *(float *)((int)puVar10 + 0x94) = fVar4 - fVar5;
          fVar2 = 0.0;
          uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar10 + 0x8c));
          if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
          fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)(puVar10 + 0x12));
          if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
            fVar12 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar20 = uVar13 - 0x180;
            lVar21 = uVar13 - 0xbc;
            lVar18 = uVar13 - 0xcc;
            lVar24 = 2;
            fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x1a) = fVar3;
            *(float *)(puVar10 + 0x19) = fVar3;
            *(float *)((int)puVar10 + 0xcc) = fVar3;
            *(float *)((int)puVar10 + 0xc4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar4;
            *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar3;
            *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xb4) * fVar3 * fVar3;
              iVar17 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0xcc;
            pfVar19 = (float *)&DAT_007358e0;
            lVar20 = lVar1;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xc4) * fVar3;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar20 = lVar1;
            do {
              iVar17 = (int)lVar20;
              lVar20 = lVar20 + 0x10;
              iVar11 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar17 + 0xc4) + *(float *)(iVar11 + 4) +
                      *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
          }
          dVar25 = (double)fastfunc::FastSubRots(fVar6,fVar2);
          if (dVar25 < 0.9599310755729675) {
            iVar17 = *(int *)(iVar16 + 0x18);
            if (iVar17 == 0) {
              *(MobyInstance **)(iVar16 + 0x18) = param_3;
              iVar23 = iVar23 + 1;
            }
            else {
              fVar2 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
              fVar3 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
              if (dVar30 < (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
                *(MobyInstance **)(iVar16 + 0x18) = param_3;
                iVar23 = iVar23 + 1;
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar22);
      iVar22 = iVar22 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  iVar15 = 1;
  if (0 < DAT_00a51ee8) {
    iVar22 = 2;
    do {
      iVar16 = (int)&(MobyInstance->bSphere).x +
               (int)((longlong)*(short *)((int)&DAT_00a51ee8 + iVar22) << 8);
      if ((iVar16 != 0) && (*(byte *)(iVar16 + 0x20) < 0x80)) {
        fVar2 = (float)(dVar31 - (double)*(float *)(iVar16 + 0x14));
        fVar3 = (float)(dVar32 - (double)*(float *)(iVar16 + 0x10));
        iVar17 = *(int *)(iVar16 + 0x78);
        if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2) < param_1) {
          fVar2 = (float)((double)*(float *)(iVar16 + 0x10) - (double)g_heroPosition.x);
          fVar3 = (float)((double)*(float *)(iVar16 + 0x14) - (double)g_heroPosition.y);
          fVar4 = ABS(fVar2);
          fVar5 = ABS(fVar3);
          *(float *)(puVar10 + 0x10) = fVar2;
          *(float *)((int)puVar10 + 0x84) = fVar3;
          fVar6 = g_heroRotation.z;
          *(float *)(puVar10 + 0x11) = fVar4 - fVar5;
          fVar2 = 0.0;
          uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar10 + 0x10));
          if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
          fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar10 + 0x84));
          if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
            fVar12 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar20 = uVar13 - 0x180;
            lVar24 = 2;
            lVar18 = uVar13 - 0xec;
            lVar21 = uVar13 - 0xdc;
            fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x16) = fVar3;
            *(float *)(puVar10 + 0x15) = fVar3;
            *(float *)((int)puVar10 + 0xac) = fVar3;
            *(float *)((int)puVar10 + 0xa4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar4;
            *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar3;
            *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xa4) = *(float *)((int)lVar20 + 0x94) * fVar3 * fVar3;
              iVar16 = (int)lVar18;
              lVar20 = lVar20 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0xec;
            pfVar19 = (float *)&DAT_007358e0;
            lVar20 = lVar1;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar20 + 0xa4) = *(float *)((int)lVar20 + 0xa4) * fVar3;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar20 = lVar1;
            do {
              iVar16 = (int)lVar20;
              iVar11 = (int)lVar21;
              lVar20 = lVar20 + 0x10;
              lVar21 = lVar21 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar16 + 0xa4) + *(float *)(iVar11 + 4) +
                      *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
          }
          dVar25 = (double)fastfunc::FastSubRots(fVar6,fVar2);
          if (dVar25 < 0.9599310755729675) {
            iVar23 = iVar23 + 1;
            *(MobyInstance **)(iVar17 + 0x78) = param_3;
          }
        }
      }
      iVar15 = iVar15 + 1;
      iVar22 = iVar22 + 2;
    } while (iVar15 <= DAT_00a51ee8);
  }
  return iVar23;
}



//==== 002b1078  ns=mobyupdate_helpers  size=0x270
// sig: undefined M175_002b1078(void)
// callers(1): 002b1300 mobyupdate_unsorted::UpdateMoby_175
// callees(6): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M175_002b1078(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (DAT_00fb0190 != 0) {
    puVar3 = &DAT_00fb019c;
    lVar8 = 5;
    do {
      *puVar3 = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 0xc;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    DAT_00fb0190 = 0;
    DAT_00fb020c = 0;
    DAT_00fb0214 = fastfunc::FastDoubleToInt
                             ((double)(DAT_007b74d4 / (mobyutil::g_FrameTime * DAT_007b74d8)));
    dVar9 = (double)fastfunc::FastIntToDouble();
    DAT_00fb0218 = (float)(1.0 / dVar9);
  }
  if ((DAT_00fb0210 == 0) &&
     (iVar4 = fastfunc::FastDecTimerS32(&DAT_00fb020c), uVar2 = DAT_00fb0214, uVar1 = DAT_007b74dc,
     iVar4 != 0)) {
    iVar4 = 0;
    psVar6 = &DAT_00fb019c;
    do {
      if (*psVar6 == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(0x74d0,0x7b0000);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar11,0);
        auVar11 = loadVectorLeftIndexed(4,0x2b1070);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        DAT_00fb020c = storeVectorElementWordIndexed
                                 (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                  0x20c,0xfb0000);
        (&DAT_00fb019c)[iVar4 * 6] = 1;
        (&DAT_00fb0198)[iVar4 * 6] = (short)uVar2;
        (&DAT_00fb0194)[iVar4 * 3] = 0;
        *(short *)(&DAT_00fb019a + iVar4 * 0xc) = (short)uVar1;
        break;
      }
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 6;
    } while (iVar4 < 10);
  }
  iVar4 = 0;
  pfVar7 = (float *)&DAT_00fb0194;
  psVar6 = &DAT_00fb019c;
  puVar3 = &DAT_00fb0198;
  do {
    if (*psVar6 != 0) {
      iVar5 = fastfunc::FastDecTimerS16(puVar3);
      if (iVar5 == 0) {
        *pfVar7 = mobyutil::g_FrameTime * DAT_007b74d8 + *pfVar7;
      }
      else {
        *psVar6 = 0;
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 6;
    psVar6 = psVar6 + 6;
    pfVar7 = pfVar7 + 3;
  } while (iVar4 < 10);
  mobyfunc::GetBonePosition(param_1,0,&DAT_00fb0220);
  RegisterFuncForMoby(&PTR_M1750_002b1950_0070ae30,(MobyInstance *)param_1);
  return;
}



//==== 002b1300  ns=mobyupdate_unsorted  size=0x640
// sig: undefined UpdateMoby_175(MobyInstance * moby)
// callers(0): 
// callees(8): 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002b06f0 mobyupdate_helpers::M175_002b06f0; 002b1078 mobyupdate_helpers::M175_002b1078; 00502758 fastfunc::FastDoubleToInt

/* Moby 175 */

void mobyupdate_unsorted::UpdateMoby_175(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar5;
  longlong lVar6;
  int iVar10;
  double dVar11;
  
  if ((moby != (MobyInstance *)0x0) && (puVar3 = (uint *)moby->pVar, puVar3 != (uint *)0x0)) {
    if (puVar3[2] == 0) {
      puVar3[2] = 0x41f00000;
    }
    if (moby->animationId == '\x02') {
      moby->state = '\x03';
    }
    DAT_00fb0210 = 1;
    uVar2 = moby->state;
    if (uVar2 == '\0') {
      puVar3[1] = 0xffffffff;
      moby->state = moby->state + '\x01';
      DAT_00fb0190 = 1;
      uVar2 = moby->state;
    }
    if (uVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
        puVar3[3] = 0;
      }
    }
    else if (uVar2 == '\x02') {
      if ((moby->animationId == '\x03') && (DAT_0096bd8c == '\0')) {
        DAT_00fb0210 = 0;
        uVar7 = puVar3[6] + 1;
      }
      else {
        uVar7 = 0;
      }
      puVar3[6] = uVar7;
      iVar8 = sound::IsMobyPlayingSound(moby,puVar3[1]);
      if (iVar8 == 0) {
        bVar1 = (g_buttonsPressedThisFrame & DAT_0096ad80) == 0;
        if (((bVar1) && (((g_downButtons & DAT_0096ad80) == 0 || ((int)puVar3[3] < 0x11)))) ||
           (DAT_0096bd8c != '\0')) {
          uVar7 = puVar3[1];
          if ((int)uVar7 < 0) {
            uVar7 = 0;
            if (((g_downButtons & DAT_0096ad80) != 0) && (uVar7 = 0, DAT_0096bd8c == '\0')) {
              uVar7 = puVar3[3] + 1;
            }
            puVar3[3] = uVar7;
            if (moby->animationId != '\x01') {
              mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
            }
          }
          else {
            if (moby->animationId != '\x01') {
              mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
              uVar7 = puVar3[1];
            }
            if (((uVar7 != 0xffffffff) && (sound::g_SoundChannels[uVar7].pMoby == moby)) &&
               (sound::g_SoundChannels[uVar7].state != '\0')) {
              sound::sound_Kill(uVar7);
            }
            puVar3[1] = 0xffffffff;
            puVar3[3] = 0;
          }
        }
        else {
          if (!bVar1) {
            iVar8 = mobyutil::MB_randRange(0xf,0x2d);
            puVar3[4] = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
          }
          if (DAT_00a0fd94 != -1) {
            DAT_00a0fd94 = DAT_00a0fd94 + 1;
          }
          iVar8 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)DAT_00a0fd96 < iVar8 / 600) {
            sVar4 = (short)(iVar8 >> 0x1f);
            DAT_00a0fd96 = ((short)(iVar8 / 600) + sVar4) -
                           ((short)((short)(iVar8 / 0x2580000) + sVar4) >> 0xf);
          }
          DAT_00a0fd98 = DAT_00a0fd98 | 1 << (Level & 0x3f) | 0x80000000;
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 3.5));
          }
          uVar9 = sound::PlayMobySound(*puVar3,1,moby);
          uVar7 = *puVar3;
          puVar3[1] = uVar9;
          *puVar3 = uVar7 + 1;
          iVar10 = (int)(((ulonglong)(uVar7 + 1) & 0x7ffffff) << 5);
          dVar11 = 10.0;
          iVar8 = fastfunc::FastDoubleToInt
                            ((double)(*(float *)((int)moby->pClass->SoundDefs + iVar10) * 10.0));
          uVar5 = fastfunc::FastDoubleToInt
                            ((double)(float)((double)*(float *)((int)moby->pClass->SoundDefs +
                                                               iVar10 + 4) * dVar11));
          if ((((int)(uint)moby->pClass->sound_cnt <= (int)*puVar3) || (iVar8 != 0x1e)) ||
             ((int)uVar5 != 0x1e)) {
            uVar5 = 0;
            *puVar3 = 0;
          }
          mobyupdate_helpers::M175_002b06f0((double)(float)puVar3[2],uVar5,moby);
          puVar3[3] = 0;
        }
      }
      else {
        puVar3[3] = puVar3[3] + 1;
        if ((((g_downButtons & DAT_0096ad80) == 0) &&
            ((int)(animationSpeed * 30.5) < (int)puVar3[6])) || (DAT_0096bd8c != '\0')) {
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
          }
          uVar7 = puVar3[1];
          if (((uVar7 != 0xffffffff) && (sound::g_SoundChannels[uVar7].pMoby == moby)) &&
             (sound::g_SoundChannels[uVar7].state != '\0')) {
            sound::sound_Kill(uVar7);
          }
          puVar3[1] = 0xffffffff;
          puVar3[3] = 0;
        }
        else {
          lVar6 = (ulonglong)worldUpdateTime +
                  ((longlong)((int)worldUpdateTime >> 2) +
                  (ulonglong)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * -4;
          if ((int)lVar6 == 0) {
            mobyupdate_helpers::M175_002b06f0((double)(float)puVar3[2],lVar6,moby);
          }
        }
      }
    }
    if (DAT_0096ad94 != 3) {
      mobyupdate_helpers::M175_002b1078(moby);
    }
  }
  return;
}



//==== 002b1950  ns=mobyupdate_helpers  size=0x434
// sig: undefined M1750_002b1950(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1750_002b1950(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
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
  float local_140 [38];
  
  draw::GetEffectTex(8);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar20 = 0.0;
  dVar19 = 1.0;
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar3 = *(float *)(param_1 + 0xd0);
  fVar4 = *(float *)(param_1 + 0xd8);
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar1 == 0.0) {
    fVar5 = *(float *)(param_1 + 0xdc);
    dVar28 = dVar20;
    dVar29 = dVar20;
    dVar30 = dVar20;
  }
  else {
    fVar1 = -1.0 / fVar1;
    fVar5 = *(float *)(param_1 + 0xdc);
    dVar30 = (double)(fVar3 * fVar1);
    dVar29 = (double)(fVar2 * fVar1);
    dVar28 = (double)(fVar4 * fVar1);
  }
  dVar27 = (double)fVar5;
  iVar8 = 0;
  iVar9 = 0;
  do {
    if (*(short *)((int)&DAT_00fb019c + iVar8) != 0) {
      dVar25 = (double)*(float *)((int)&DAT_00fb0194 + iVar8);
      fVar2 = -(float)((double)DAT_00969f78 * dVar30) -
              -(float)((double)hero::g_heroGravityDir * dVar28);
      fVar3 = -(float)((double)hero::g_heroGravityDir * dVar29) -
              -(float)((double)DAT_00969f74 * dVar30);
      fVar4 = -(float)((double)DAT_00969f74 * dVar28) - -(float)((double)DAT_00969f78 * dVar29);
      dVar24 = (double)DAT_00fb0220;
      dVar23 = (double)DAT_00fb0224;
      dVar22 = (double)DAT_00fb0228;
      dVar21 = (double)DAT_00fb022c;
      dVar11 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      dVar13 = dVar20;
      dVar17 = dVar20;
      dVar18 = dVar20;
      if ((double)(float)SQRT(dVar11) != dVar20) {
        dVar13 = 1.0 / SQRT(dVar11);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19
                                                 ) * (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19
                                                 ) * (double)(float)(dVar13 * 0.5) + dVar13);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19) *
                        (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(fVar4 * fVar1);
        dVar17 = (double)(fVar2 * fVar1);
        dVar18 = (double)(fVar3 * fVar1);
      }
      dVar16 = (double)(float)(dVar17 * dVar28);
      dVar15 = (double)(float)(dVar18 * dVar30);
      dVar14 = (double)(float)(dVar13 * dVar29);
      dVar12 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)&DAT_00fb0198 + iVar8));
      dVar11 = (double)(float)(dVar12 * (double)DAT_00fb0218);
      if (dVar19 - (double)(float)(dVar12 * (double)DAT_00fb0218) < 0.0) {
        dVar11 = dVar19;
      }
      dVar26 = (double)(float)((double)(float)((double)DAT_007b7530 - (double)DAT_007b7534) * dVar11
                              + (double)DAT_007b7534);
      dVar12 = (double)fastfunc::FastIntToDouble(DAT_007b74dc);
      fastfunc::FastDoubleToInt((double)(float)(dVar12 * dVar11));
      pfVar7 = local_140;
      lVar10 = 4;
      pfVar6 = (float *)&DAT_007b74f0;
      dVar19 = (double)(float)dVar19;
      do {
        fVar3 = *pfVar6;
        fVar4 = pfVar6[1];
        dVar11 = (double)(float)((double)fVar3 * dVar26);
        dVar12 = (double)pfVar6[3];
        fVar2 = (float)((double)pfVar6[2] * dVar26);
        pfVar6 = pfVar6 + 4;
        pfVar7[3] = (float)(dVar12 * dVar21 +
                           (double)(float)((double)fVar3 * (double)(float)(dVar26 * dVar27)));
        *pfVar7 = (float)((double)(float)(dVar25 * dVar30 + dVar24) * dVar12 +
                         (double)((float)(dVar18 * dVar29 - dVar16) * fVar2 +
                                 (float)(dVar11 * dVar30 +
                                        (double)(fVar4 * (float)(dVar26 * dVar13)))));
        pfVar7[1] = (float)((double)(float)(dVar25 * dVar29 + dVar23) * dVar12 +
                           (double)((float)(dVar13 * dVar28 - dVar15) * fVar2 +
                                   (float)(dVar11 * dVar29 +
                                          (double)(fVar4 * (float)(dVar26 * dVar17)))));
        pfVar7[2] = (float)((double)(float)(dVar25 * dVar28 + dVar22) * dVar12 +
                           (double)((float)(dVar17 * dVar30 - dVar14) * fVar2 +
                                   (float)(dVar11 * dVar28 +
                                          (double)(fVar4 * (float)(dVar26 * dVar18)))));
        pfVar7 = pfVar7 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0xc;
  } while (iVar9 < 10);
  return;
}



//==== 002b1d84  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1750_002b1d84(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1750_002b1d84(void)

{
  DAT_007b7584 = 0x10000;
  return;
}



//==== 002b1d98  ns=mobyupdate_unsorted  size=0x2c
// sig: undefined UpdateMoby_1750(MobyInstance * moby)
// callers(0): 
// callees(1): 0013ea48 pause::MakeWholeSaveWithMode

/* Moby 1750 */

void mobyupdate_unsorted::UpdateMoby_1750(MobyInstance *moby)

{
  pause::MakeWholeSaveWithMode(&DAT_00fb0230);
  return;
}



//==== 002b1de0  ns=mobyupdate_helpers  size=0x494
// sig: undefined M176_002b1de0(void)
// callers(1): 002b2590 mobyupdate_unsorted::UpdateMoby_176
// callees(9): 0005e598 collproc::CollMobySphere; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010581c mobyutil::SetCollDamIn; 0010a668 mobyutil::ReorderRGB; 001206e8 partupd::SpawnPart_2; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M176_002b1de0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [72];
  
  iVar9 = 0;
  iVar10 = *(int *)(param_1 + 0x78);
  do {
    pcVar1 = *(char **)(iVar10 + 4);
    if (pcVar1 != (char *)0x0) {
      if ((*pcVar1 == '\f') && ((byte)pcVar1[1] < 0x80)) {
        dVar14 = 0.0;
        dVar13 = (double)(*(float *)(pcVar1 + 0xc) * 4.7619046e-06 * 0.5);
        dVar12 = 1.0;
        dVar11 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.pyrocitor);
        mobyutil::SetCollDamIn((double)(float)(dVar11 + dVar12),auStack_d0,param_1,0x10000);
        collproc::CollMobySphere(dVar13,pcVar1 + 0x10,5,0,param_1,auStack_d0);
        if (*(short *)(pcVar1 + 10) == 10) {
          iVar8 = 0;
          if (0 < DAT_007b761c) {
            dVar11 = (double)(float)(dVar13 * 2.0);
            do {
              mobyutil::MB_randSphere
                        (dVar14,(double)(DAT_007b75f8 * mobyutil::g_FrameTime),auStack_f0);
              uVar3 = DAT_007b7608;
              uVar2 = DAT_007b7604;
              mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar12);
              uVar4 = fastfunc::FastLerpColor(uVar2,uVar3);
              mobyutil::ReorderRGB((int)uVar4,(uint)g_goldWeaponsArray.pyrocitor);
              uVar3 = DAT_007b7610;
              uVar2 = DAT_007b760c;
              mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar12);
              uVar5 = fastfunc::FastLerpColor(uVar2,uVar3);
              mobyutil::ReorderRGB((int)uVar5,(uint)g_goldWeaponsArray.pyrocitor);
              dVar13 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_007b7614,
                                          (float)(longlong)DAT_007b7618);
              uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
              dVar13 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_007b7614,
                                          (float)(longlong)DAT_007b7618);
              uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
              mobyutil::MB_randSphere(dVar14,dVar11,local_e0);
              partupd::SpawnPart_2(local_e0,local_100,auStack_f0,uVar4,uVar5,10,uVar6,uVar7);
              iVar8 = iVar8 + 1;
            } while (iVar8 < DAT_007b761c);
          }
        }
        else if (*(short *)(pcVar1 + 10) < 2) {
          *(undefined4 *)(iVar10 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 4) = 0;
      }
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 0xf);
  return;
}



//==== 002b2274  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1750_002b2274(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1750_002b2274(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  do {
    if (*(int *)(iVar1 + 4) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar2 * 4 + 4) = param_2;
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0xf);
  return;
}



//==== 002b22c0  ns=mobyupdate_helpers  size=0x268
// sig: undefined M176_002b22c0(void)
// callers(1): 002b2590 mobyupdate_unsorted::UpdateMoby_176
// callees(4): 0007b310 help::Help_QueueMessage; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 0015cdb0 sound::sound_Kill
// strings: 00a1000c: 'None'

undefined4 * mobyupdate_helpers::M176_002b22c0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_002b22b4;
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x53) == '\x02') {
    *(undefined1 *)(param_1 + 0x20) = 4;
    if ((MobyInstance *)*puVar2 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby((MobyInstance *)*puVar2);
    }
    if (*(short *)(puVar2 + 0x11) != -1) {
      lights::DeletePointLight();
      *(undefined2 *)(puVar2 + 0x11) = 0xffff;
    }
    sVar1 = *(short *)((int)puVar2 + 0x4a);
    if (((sVar1 != -1) &&
        (iVar3 = (int)((longlong)sVar1 << 7) - (int)((longlong)sVar1 << 4),
        *(int *)((int)sound::g_SoundChannels + iVar3 + 0x18) == param_1)) &&
       (*(char *)((int)sound::g_SoundChannels + iVar3 + 4) != '\0')) {
      sound::sound_Kill((int)sVar1);
    }
    puVar4 = (undefined4 *)0xffffffff;
    *(undefined2 *)((int)puVar2 + 0x4a) = 0xffff;
  }
  else if ((CHAR_ARRAY_00a1000c._624_2_ == 0) && (CHAR_ARRAY_00a0feec._80_2_ == 0)) {
    if (*(char *)(param_1 + 0x20) == '\x03') {
      puVar4 = (undefined4 *)(*(ushort *)(puVar2 + 0x14) + 1);
      *(short *)(puVar2 + 0x14) = (short)puVar4;
    }
    else {
      sVar1 = *(short *)(puVar2 + 0x14);
      if (sVar1 != 0) {
        if ((int)(animationSpeed * 120.5) < (int)sVar1) {
          CHAR_ARRAY_00a0feec[0x50] = '\0';
          CHAR_ARRAY_00a0feec[0x51] = '\x01';
          iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._82_2_ < iVar3 / 600) {
            sVar1 = (short)(iVar3 >> 0x1f);
            CHAR_ARRAY_00a0feec._82_2_ =
                 ((short)(iVar3 / 600) + sVar1) -
                 ((short)((short)(iVar3 / 0x2580000) + sVar1) >> 0xf);
          }
          CHAR_ARRAY_00a0feec._84_4_ = CHAR_ARRAY_00a0feec._84_4_ | 1 << (Level & 0x3f) | 0x80000000
          ;
        }
        else if ((int)sVar1 < (int)(animationSpeed * 30.5)) {
          DAT_0096bd94 = DAT_0096bd94 + 1;
        }
        *(undefined2 *)(puVar2 + 0x14) = 0;
        puVar4 = (undefined4 *)(uint)DAT_0096bd94;
        if (2 < DAT_0096bd94) {
          puVar4 = (undefined4 *)help::Help_QueueMessage(STR_TO_USE_THE_PYROCITOR_0x4E24,0x4e);
        }
      }
    }
  }
  return puVar4;
}



//==== 002b2590  ns=mobyupdate_unsorted  size=0xecc
// sig: undefined UpdateMoby_176(MobyInstance * moby)
// callers(0): 
// callees(28): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000855b8 hero::Hero_EndFiringAnim; 0008e0f4 hero::Hero_GetWeaponAmmo; 00099ea8 hero::Hero_PlayFiringAnim; 000aa258 hero::hero_ConsumeAmmo; 000da308 lights::CreatePointLight3; 000da9e8 lights::DeletePointLight; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fea60 mobyutil::MB_randSphere; 00109c30 mobyutil::OrganicDelt; 00123ec8 partupd::SpawnPart_12; 00127918 partupd::SpawnPart_25; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002b1de0 mobyupdate_helpers::M176_002b1de0; 002b22c0 mobyupdate_helpers::M176_002b22c0; 002b9870 FUN_002b9870; 004fffb4 fastfunc::FastDecTimerS16; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 176 */

void mobyupdate_unsorted::UpdateMoby_176(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  int iVar24;
  void *pvVar25;
  ulonglong uVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [48];
  float local_c0;
  float local_bc;
  longlong local_b8;
  
  lVar17 = (longlong)(int)moby;
  puVar8 = (uint *)moby->pVar;
  uVar26 = ZEXT48(puVar8);
  mobyupdate_helpers::M176_002b22c0();
  mobyfunc::GetBonePosition(lVar17,0,&local_170);
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined2 *)(puVar8 + 0x11) = 0xffff;
      *(undefined2 *)((int)puVar8 + 0x4a) = 0xffff;
      moby->state = '\x01';
    }
    else {
      if (moby->updateId == '\x01') {
        moby->state = '\x02';
      }
      if (((moby->updateId == '\0') &&
          (dVar28 = (double)mobyfunc::BlendAnimFrame(moby), 10.0 < dVar28)) &&
         (((g_downButtons & DAT_0096ad80) != 0 && (moby->animationId != '\x01')))) {
        local_b8 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar17,1,0,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar2 < 3) {
    if (*puVar8 == 0) {
      uVar18 = FUN_002b9870(lVar17);
      *puVar8 = uVar18;
      if (uVar18 != 0) {
        *(ushort *)(uVar18 + 0x34) = *(ushort *)(uVar18 + 0x34) | 0x100;
        *(undefined4 *)(*(int *)(*puVar8 + 0x78) + 0xc) = DAT_007b75d0;
      }
    }
    if (*(short *)(puVar8 + 0x11) != -1) {
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      pfVar19 = (float *)((int)&PointLights[0].color.x + iVar20);
      fVar4 = *pfVar19;
      fVar5 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar9 = DAT_00a15d30 - fVar4;
      fVar3 = *(float *)((int)&PointLights[0].color.z + iVar20);
      fVar6 = DAT_00a15d34 - fVar5;
      fVar15 = DAT_00a15d38 - fVar3;
      *(undefined4 *)((int)&PointLights[0].color.w + iVar20) = DAT_00a15d3c;
      *pfVar19 = fVar9 * 0.1 + fVar4;
      *(float *)((int)&PointLights[0].color.y + iVar20) = fVar6 * 0.1 + fVar5;
      *(float *)((int)&PointLights[0].color.z + iVar20) = fVar15 * 0.1 + fVar3;
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      fVar4 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar5 = *(float *)((int)&PointLights[0].color.x + iVar20);
      fVar3 = *(float *)((int)&PointLights[0].color.z + iVar20);
      if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < 0.001) {
        lights::DeletePointLight();
        *(undefined2 *)(puVar8 + 0x11) = 0xffff;
      }
    }
    if ((((g_downButtons & DAT_0096ad80) == 0) || (DAT_0096bd8c != '\0')) ||
       (iVar20 = hero::Hero_GetWeaponAmmo(-1), iVar20 == 0)) {
      if (((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) &&
         (iVar20 = hero::Hero_GetWeaponAmmo(-1), iVar20 == 0)) {
        sound::PlayMobySound(0,0,moby);
      }
    }
    else {
      moby->state = '\x03';
      hero::Hero_PlayFiringAnim();
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x10,0x2b2528);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar23 = storeVectorElementHalfWordIndexed(auVar36,0x4c,uVar26);
      *(undefined2 *)(puVar8 + 0x13) = uVar23;
      if (*(short *)(puVar8 + 0x11) == -1) {
        uVar23 = lights::CreatePointLight3
                           (0x401e000000000000,0,(Vec4 *)&moby->pos,ZEXT48(&DAT_002b2528),0x10,0);
        *(undefined2 *)(puVar8 + 0x11) = uVar23;
      }
    }
  }
  else if (bVar2 < 4) {
    iVar20 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)puVar8 + 0x4a));
    if (iVar20 == 0) {
      iVar20 = sound::PlayMobySound(1,4,moby);
      *(short *)((int)puVar8 + 0x4a) = (short)iVar20;
    }
    if ((*(short *)(puVar8 + 0x11) != -1) && (moby->state == '\x03')) {
      iVar20 = (int)((longlong)*(short *)(puVar8 + 0x11) << 5);
      fVar4 = DAT_0096a324 * 2.0;
      fVar5 = DAT_0096a328 * 2.0;
      fVar3 = DAT_0096a344 * 2.0;
      fVar9 = DAT_0096a348 * 2.0;
      *(float *)((int)&PointLights[0].pos.x + iVar20) =
           g_heroPosition.x + DAT_0096a340 * 2.0 + DAT_0096a320 * 2.0;
      *(float *)((int)&PointLights[0].pos.y + iVar20) = g_heroPosition.y + fVar3 + fVar4;
      *(float *)((int)&PointLights[0].pos.z + iVar20) = g_heroPosition.z + fVar9 + fVar5;
      *(float *)((int)&PointLights[0].pos.w + iVar20) = g_heroPosition.w;
      sVar7 = *(short *)(puVar8 + 0x11);
      local_b8 = (longlong)((int)worldUpdateTime % 0x78);
      *(undefined4 *)((int)&PointLights[0].pos.w + (int)((longlong)sVar7 << 5)) = 0x40f00000;
      fVar15 = DAT_007b75b8;
      fVar9 = DAT_007b75b4;
      fVar3 = DAT_007b75b0;
      fVar4 = (float)local_b8 * 0.008333334 * 6.28318 - 3.14159;
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = fVar6 * fVar6;
      fVar10 = fVar5 * fVar5 * fVar6;
      fVar12 = DAT_007b75c0 - DAT_007b75b0;
      iVar20 = (int)((longlong)sVar7 << 5);
      pfVar19 = (float *)((int)&PointLights[0].color.x + iVar20);
      fVar11 = fVar5 * fVar10;
      fVar14 = DAT_007b75c4 - DAT_007b75b4;
      fVar13 = DAT_007b75c8 - DAT_007b75b8;
      fVar4 = *pfVar19;
      fVar10 = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar5 * fVar6 * -0.16666657 + fVar6)
               * 0.5 + 0.5;
      fVar5 = *(float *)((int)&PointLights[0].color.y + iVar20);
      fVar6 = *(float *)((int)&PointLights[0].color.z + iVar20);
      *(undefined4 *)((int)&PointLights[0].color.w + iVar20) = DAT_007b75cc;
      *pfVar19 = ((fVar10 * fVar12 + fVar3) - fVar4) * 0.1 + fVar4;
      *(float *)((int)&PointLights[0].color.y + iVar20) =
           ((fVar10 * fVar14 + fVar9) - fVar5) * 0.1 + fVar5;
      *(float *)((int)&PointLights[0].color.z + iVar20) =
           ((fVar10 * fVar13 + fVar15) - fVar6) * 0.1 + fVar6;
    }
    dVar32 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
    dVar28 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.pyrocitor);
    uVar16 = worldUpdateTime;
    dVar31 = 4.0;
    bVar1 = (int)worldUpdateTime < 0;
    uVar18 = worldUpdateTime & 3;
    iVar20 = (int)worldUpdateTime >> 2;
    if ((g_heroState == FIRST_PERSON_VIEW) && ((moby->modeBits & DISABLED) != NONE)) {
      dVar29 = (double)SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                            GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                            GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
      dVar34 = dVar32;
      dVar33 = dVar32;
      dVar30 = dVar32;
      if (dVar29 != dVar32) {
        fVar4 = (float)(-1.0 / dVar29);
        dVar34 = (double)(GameCamera.orientMtx.up.x * fVar4);
        dVar33 = (double)(GameCamera.orientMtx.up.y * fVar4);
        dVar30 = (double)(GameCamera.orientMtx.up.z * fVar4);
      }
      local_160 = (float)(dVar34 + (double)GameCamera.posX);
      local_15c = (float)(dVar33 + (double)GameCamera.posY);
      local_158 = (float)(dVar30 + (double)GameCamera.posZ);
    }
    else {
      local_160 = local_170;
      local_15c = local_16c;
      local_158 = local_168;
    }
    dVar33 = 0.75;
    iVar21 = collproc::CollLine(&hero::g_heroCGPos,&local_160,2,0,0);
    dVar34 = dVar32;
    if (iVar21 == 0) {
      iVar21 = collproc::CollLine(&local_160,local_150,2,0,0);
      if (iVar21 == 0) {
        dVar34 = (double)(float)(dVar28 * dVar31 + (double)DAT_007b75e0);
      }
      else {
        dVar34 = (double)(float)((double)SQRT((local_158 - CollOutput.ip.z) *
                                              (local_158 - CollOutput.ip.z) +
                                              (local_160 - CollOutput.ip.x) *
                                              (local_160 - CollOutput.ip.x) +
                                              (local_15c - CollOutput.ip.y) *
                                              (local_15c - CollOutput.ip.y)) - dVar33);
        if (dVar34 < dVar32) {
          dVar34 = dVar32;
        }
      }
    }
    dVar33 = 1.0;
    mobyutil::OrganicDelt
              ((float)dVar34,1.0,DAT_0071f418 * DAT_00729704,DAT_007b75d4 * mobyutil::g_FrameTime,
               &local_bc,0x7b0000,&local_c0);
    if ((dVar34 < dVar31) || (iVar21 = DAT_007b75d8, (moby->modeBits & DISABLED) != NONE)) {
      iVar21 = 1;
    }
    iVar21 = DAT_007b75dc + iVar21;
    iVar27 = 0;
    if (0 < iVar21) {
      do {
        mobyutil::MB_randSphere
                  (dVar32,(double)(mobyutil::g_FrameTime *
                                  ((DAT_007b75e4 - DAT_007b75e8) *
                                   (float)(dVar34 / (double)(float)(dVar28 * dVar31 +
                                                                   (double)DAT_007b75e0)) +
                                  DAT_007b75e8)),local_130);
        mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar33);
        uVar22 = partupd::SpawnPart_12(dVar34,local_140,local_130);
        if ((iVar27 == 2) && (uVar16 == (iVar20 + (uint)(bVar1 && uVar18 != 0)) * 4)) {
          iVar24 = 0;
          pvVar25 = moby->pVar;
          do {
            if (*(int *)((int)pvVar25 + 4) == 0) {
              *(undefined4 *)((int)moby->pVar + iVar24 * 4 + 4) = uVar22;
              break;
            }
            iVar24 = iVar24 + 1;
            pvVar25 = (void *)((int)pvVar25 + 4);
          } while (iVar24 < 0xf);
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < iVar21);
    }
    fastfunc::FastIntToDouble(g_goldWeaponsArray.pyrocitor);
    uVar35 = 0x3fdae147a0000000;
    collproc::CollMobySphere(0x3fdae147a0000000,local_120,1,5,g_heroMobyPtr,local_f0);
    collproc::CollMobySphere(uVar35,local_120);
    iVar20 = fastfunc::FastDecTimerS16(uVar26 + 0x4e);
    if (iVar20 != 0) {
      dVar28 = (double)mobyutil::MB_randRangeFloat(10.0,30.0);
      uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
      *(undefined2 *)((int)puVar8 + 0x4e) = uVar23;
      mobyutil::MB_randSphere(dVar32,(double)(mobyutil::g_FrameTime * 2.0),local_100);
      mobyutil::MB_randRangeFloat(0.5,0.1);
      partupd::SpawnPart_25(&local_160,local_110,g_goldWeaponsArray.pyrocitor);
    }
    iVar20 = (int)(animationSpeed * ((float)(longlong)DAT_007b75f0 + 0.5));
    local_b8 = (longlong)iVar20;
    if (worldUpdateTime == ((int)worldUpdateTime / iVar20) * iVar20) {
      hero::hero_ConsumeAmmo(-1,1);
    }
    iVar20 = hero::Hero_GetWeaponAmmo(-1);
    iVar21 = fastfunc::FastDecTimerS16(uVar26 + 0x4c);
    if ((iVar21 != 0) &&
       ((((g_downButtons & DAT_0096ad80) == 0 || (DAT_0096bd8c != '\0')) || (iVar20 == 0)))) {
      moby->state = '\x02';
      hero::Hero_EndFiringAnim();
      sVar7 = *(short *)((int)puVar8 + 0x4a);
      if (((sVar7 != -1) &&
          (iVar21 = (int)((longlong)sVar7 << 7) - (int)((longlong)sVar7 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar21 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar21 + 4) != '\0')) {
        sound::sound_Kill((int)sVar7);
      }
      *(undefined2 *)((int)puVar8 + 0x4a) = 0xffff;
      if (iVar20 == 0) {
        sound::PlayMobySound(0,0,moby);
      }
    }
  }
  uVar18 = *puVar8;
  if (uVar18 != 0) {
    fastfunc::FastEulerToMtx((ulonglong)uVar18 + 0xc0,(ulonglong)uVar18 + 0x40);
    fastfunc::FastVecMtx4MultBatch3
              ((ulonglong)*puVar8 + 0xc0,lVar17 + 0xc0,(ulonglong)*puVar8 + 0xc0);
    uVar18 = *puVar8;
    *(float *)(uVar18 + 0x10) = local_170;
    *(float *)(uVar18 + 0x14) = local_16c;
    *(float *)(uVar18 + 0x18) = local_168;
    *(undefined4 *)(uVar18 + 0x1c) = local_164;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar8);
  }
  mobyupdate_helpers::M176_002b1de0(lVar17);
  return;
}



//==== 002b3468  ns=mobyupdate_helpers  size=0x264
// sig: undefined M1766_002b3468(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 0010a668 mobyutil::ReorderRGB; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1766_002b3468(void)

{
  float fVar1;
  int rgb;
  ulonglong *puVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong unaff_r22;
  int iVar8;
  ulonglong unaff_r23;
  longlong lVar9;
  ulonglong unaff_r24;
  longlong lVar10;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  float *pfVar11;
  ulonglong unaff_r27;
  undefined4 *puVar12;
  ulonglong unaff_r28;
  int *piVar13;
  ulonglong unaff_r29;
  undefined4 *puVar15;
  longlong lVar14;
  ulonglong unaff_r30;
  undefined4 *puVar16;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  double dVar18;
  ulonglong in_f31;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar9 = uVar5 - 0x1a0;
  puVar2 = (ulonglong *)lVar9;
  *puVar2 = uVar5;
  puVar2[0x36] = in_LR;
  puVar2[0x33] = in_f31;
  puVar2[0x32] = unaff_r31;
  uVar3 = DAT_007b7620;
  puVar2[0x31] = unaff_r30;
  puVar2[0x30] = unaff_r29;
  puVar2[0x2f] = unaff_r28;
  puVar2[0x2e] = unaff_r27;
  puVar2[0x2d] = unaff_r26;
  puVar2[0x2c] = unaff_r25;
  puVar2[0x2b] = unaff_r24;
  puVar2[0x2a] = unaff_r23;
  puVar2[0x29] = unaff_r22;
  uVar6 = draw::GetEffectTex(uVar3);
  puVar2[0x25] = uVar6;
  uVar6 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar6;
  uVar6 = FUN_00502f08(0,0,0,0,0,0);
  puVar2[0x24] = uVar6;
  uVar6 = idol_draw::PackCmd(DAT_010a0230,DAT_007b7624,DAT_010a0234,DAT_007b7628,0x80);
  puVar2[0x27] = uVar6;
  dVar18 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
  lVar17 = uVar5 - 0xf0;
  iVar8 = 0;
  pfVar11 = (float *)&DAT_007b76c0;
  puVar12 = &DAT_007b76c4;
  piVar13 = &DAT_007b76b0;
  puVar16 = &DAT_007b7630;
  lVar10 = lVar9;
  lVar14 = lVar17;
  do {
    fVar1 = *pfVar11;
    rgb = *piVar13;
    *(undefined4 *)((int)lVar9 + 0x104) = *puVar12;
    bVar4 = g_goldWeaponsArray.pyrocitor;
    *(int *)((int)lVar10 + 0xf0) = rgb;
    *(float *)((int)lVar9 + 0x100) = (float)((double)fVar1 + dVar18);
    mobyutil::ReorderRGB(rgb,(uint)bVar4);
    iVar8 = iVar8 + 1;
    pfVar11 = pfVar11 + 2;
    puVar15 = (undefined4 *)lVar14;
    *puVar15 = *puVar16;
    puVar12 = puVar12 + 2;
    puVar15[1] = puVar16[1];
    piVar13 = piVar13 + 1;
    lVar9 = lVar9 + 8;
    puVar15[2] = puVar16[2];
    puVar7 = puVar16 + 3;
    lVar10 = lVar10 + 4;
    puVar16 = puVar16 + 4;
    puVar15[3] = *puVar7;
    lVar14 = lVar14 + 0x10;
  } while (iVar8 < 4);
  draw::FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  uVar3 = EffectTexHeaders;
  puVar12 = &DAT_007b7670;
  lVar9 = 4;
  do {
    puVar7 = (undefined4 *)lVar17;
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar7[2] = puVar12[2];
    puVar16 = puVar12 + 3;
    puVar12 = puVar12 + 4;
    puVar7[3] = *puVar16;
    lVar17 = lVar17 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  draw::FastDrawQuad(uVar5 - 0xf0,0,0,uVar3,9);
  return;
}



//==== 002b36cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1766_002b36cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1766_002b36cc(void)

{
  DAT_007b772c = 0x10000;
  return;
}



//==== 002b36e0  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1766_002b36e0(void)
// callers(0): 
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1766_002b36e0
               (double param_1,undefined8 param_2,double param_3,float *param_4)

{
  double dVar1;
  
  dVar1 = (double)fastfunc::FastDiffRots(param_2,param_1);
  *param_4 = (float)(dVar1 * param_3);
  dVar1 = (double)fastfunc::FastWrapRot((float)(dVar1 * param_3),(float)param_1);
  *param_4 = (float)dVar1;
  return;
}



//==== 002b3778  ns=mobyupdate_helpers  size=0x720
// sig: undefined M1766_002b3778(void)
// callers(1): 002b3ec8 mobyupdate_unsorted::UpdateMoby_1766
// callees(7): 000fc620 mobyutil::MB_randInt; 00109c30 mobyutil::OrganicDelt; 00110950 mobyutil::MB_RandomizeVector; 0012aee8 partupd::SpawnPart_45; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

undefined8 mobyupdate_helpers::M1766_002b3778(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  Vec4 *pVVar15;
  ulonglong uVar16;
  longlong lVar17;
  int32_t iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  short sVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined8 uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  undefined8 uVar28;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x120;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar16;
  puVar12[0x26] = in_LR;
  puVar12[0x1d] = in_f25;
  puVar12[0x1e] = in_f26;
  puVar12[0x1f] = in_f27;
  puVar12[0x20] = in_f28;
  puVar12[0x21] = in_f29;
  puVar12[0x22] = in_f30;
  puVar12[0x23] = in_f31;
  puVar12[0x18] = unaff_r27;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar12[0x19] = unaff_r28;
  pSVar11 = Splines[*(int *)(iVar10 + 0xac)];
  iVar19 = (int)((longlong)*(short *)(iVar10 + 0xba) << 4);
  fVar4 = *(float *)(iVar10 + 0xa8);
  *(float *)(iVar10 + 0xcc) = *(float *)(iVar10 + 0xcc) * -0.005 + *(float *)(iVar10 + 0xcc);
  dVar33 = (double)*(float *)((int)&pSVar11->points[0].y + iVar19);
  fVar5 = *(float *)(param_1 + 0x14);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].x + iVar19);
  fVar1 = (float)(dVar33 - (double)fVar5);
  fVar6 = *(float *)(param_1 + 0x10);
  dVar34 = (double)(fVar4 * DAT_007b775c + *(float *)((int)&pSVar11->points[0].z + iVar19));
  fVar7 = *(float *)(param_1 + 0x18);
  fVar2 = (float)(dVar32 - (double)fVar6);
  dVar35 = 0.0;
  fVar3 = (float)(dVar34 - (double)fVar7);
  dVar36 = (double)*(float *)(param_1 + 0x48);
  iVar19 = (int)((longlong)*(short *)(iVar10 + 0xba) << 4);
  puVar12[0x1c] = unaff_r31;
  fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  puVar12[0x1a] = unaff_r29;
  uVar26 = 0;
  puVar12[0x1b] = unaff_r30;
  fVar4 = fVar4 / fVar13;
  dVar29 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar29 = (double)(fVar3 * fVar4);
  }
  dVar30 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar30 = (double)(fVar1 * fVar4);
  }
  dVar31 = dVar35;
  if (0.0 - fVar13 < 0.0) {
    dVar31 = (double)(fVar2 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar29 = (double)(fVar3 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar30 = (double)(fVar1 * fVar4);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar31 = (double)(fVar2 * fVar4);
  }
  fVar1 = (float)((double)fVar5 + dVar30);
  fVar2 = (float)((double)fVar6 + dVar31);
  *(float *)(param_1 + 0x18) = (float)((double)fVar7 + dVar29);
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar19) - fVar2;
  fVar1 = *(float *)((int)&pSVar11->points[0].y + iVar19) - fVar1;
  fVar4 = ABS(fVar2);
  fVar3 = ABS(fVar1);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)((int)puVar12 + 0x8c) = fVar1;
  *(float *)(puVar12 + 0x12) = fVar4 - fVar3;
  fVar1 = *(float *)(iVar10 + 0xbc);
  uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar35;
  if (0.0 < fVar2) {
    lVar24 = uVar16 - 0x110;
    lVar21 = uVar16 - 0x7c;
    lVar22 = uVar16 - 0x8c;
    lVar27 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)((int)puVar12 + 0x94) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar5;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar24 + 0x94) = *(float *)((int)lVar24 + 0x84) * fVar2 * fVar2;
      iVar19 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar24 = uVar16 - 0x8c;
    lVar27 = 4;
    pfVar25 = (float *)&DAT_007358e0;
    lVar21 = lVar24;
    lVar22 = lVar17;
    do {
      fVar2 = *pfVar25;
      fVar5 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar22 + 0x94) = *(float *)((int)lVar22 + 0x94) * fVar2;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    do {
      iVar19 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar14 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
  }
  uVar28 = fastfunc::FastWrapRot((float)dVar29,fVar1);
  dVar31 = 0.019999999552965164;
  dVar30 = (double)((1.0 - *(float *)(iVar10 + 0xcc)) * 0.02);
  dVar29 = (double)fastfunc::FastDiffRots(uVar28,dVar36);
  *(float *)(param_1 + 0x48) = (float)(dVar29 * dVar30);
  dVar29 = (double)fastfunc::FastWrapRot((float)(dVar29 * dVar30),(float)dVar36);
  *(float *)(param_1 + 0x48) = (float)dVar29;
  dVar36 = (double)*(float *)(param_1 + 0x40);
  dVar29 = (double)fastfunc::FastDiffRots(dVar35,dVar36);
  *(float *)(param_1 + 0x40) = (float)(dVar29 * dVar31);
  dVar29 = (double)fastfunc::FastWrapRot((float)(dVar29 * dVar31),(float)dVar36);
  *(float *)(param_1 + 0x40) = (float)dVar29;
  dVar36 = (double)*(float *)(param_1 + 0x44);
  dVar29 = (double)fastfunc::FastDiffRots(dVar35,dVar36);
  *(float *)(param_1 + 0x44) = (float)(dVar29 * dVar31);
  dVar29 = (double)fastfunc::FastWrapRot((float)(dVar29 * dVar31),(float)dVar36);
  sVar23 = *(short *)(iVar10 + 0xb8);
  *(float *)(param_1 + 0x44) = (float)dVar29;
  if (sVar23 < 1) {
    fVar1 = (float)(dVar33 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar32 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar34 - (double)*(float *)(param_1 + 0x18));
    if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar10 + 0xa8) * 2.0) &&
       (sVar23 = *(short *)(iVar10 + 0xba) + -1, *(short *)(iVar10 + 0xba) = sVar23, sVar23 == -1))
    {
      uVar26 = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - pSVar11->points[0].y;
    fVar4 = *(float *)(param_1 + 0x10) - pSVar11->points[0].x;
    fVar1 = pSVar11->points[0].z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar12 + 0x84) = 0;
    fVar2 = fVar2 - fVar1;
    mobyutil::OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,mobyutil::g_FrameTime * 10.0,(float *)((int)puVar12 + 0x84),
               0x720000,(float *)(iVar10 + 0xa8));
  }
  else {
    fVar1 = (float)(dVar33 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar32 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar34 - (double)*(float *)(param_1 + 0x18));
    iVar18 = pSVar11->cnt;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar10 + 0xa8) * 2.0) {
      sVar23 = *(short *)(iVar10 + 0xba) + 1;
      iVar18 = pSVar11->cnt;
      *(short *)(iVar10 + 0xba) = sVar23;
      if (sVar23 == iVar18) {
        uVar26 = 1;
      }
    }
    pVVar15 = pSVar11->points + iVar18 + -1;
    fVar3 = *(float *)(param_1 + 0x14) - pVVar15->y;
    fVar4 = *(float *)(param_1 + 0x10) - pVVar15->x;
    fVar1 = pVVar15->z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(puVar12 + 0x10) = 0;
    fVar2 = fVar2 - fVar1;
    mobyutil::OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,mobyutil::g_FrameTime * 10.0,(float *)(puVar12 + 0x10),0x720000,
               (float *)(iVar10 + 0xa8));
  }
  if (*(int *)((int)&pSVar11->points[0].w + (int)((longlong)*(short *)(iVar10 + 0xba) << 4)) ==
      0x42280000) {
    *(undefined4 *)(iVar10 + 0xbc) = 0;
  }
  dVar29 = (double)fastfunc::FastWrapRot(*(float *)(iVar10 + 0xc0),*(float *)(iVar10 + 0xa8));
  *(float *)(iVar10 + 0xc0) = (float)dVar29;
  fastfunc::FastQuaternionToEuler(iVar10 + 0x70,0);
  fVar1 = *(float *)(param_1 + 0x14) - pSVar11->points[pSVar11->cnt + -1].y;
  fVar2 = *(float *)(param_1 + 0x10) - pSVar11->points[pSVar11->cnt + -1].x;
  if (((8.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) &&
      (fVar1 = *(float *)(param_1 + 0x14) - pSVar11->points[0].y,
      fVar2 = *(float *)(param_1 + 0x10) - pSVar11->points[0].x,
      8.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) && (iVar19 = mobyutil::MB_randInt(7), iVar19 == 0)
     ) {
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar12 + 0x74) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar12 + 0xf) = uVar9;
    *(undefined4 *)((int)puVar12 + 0x7c) = uVar8;
    mobyutil::MB_RandomizeVector(0.5,(float *)(uVar16 - 0xb0));
    *(undefined4 *)(puVar12 + 0xf) = 0x41c8147b;
    partupd::SpawnPart_45
              ((double)((*(float *)(iVar10 + 0xa8) * 3.0) / (mobyutil::g_FrameTime * 10.0)),
               0x40c89c0000000000,uVar16 - 0xb0,&DAT_00720000,0,0x40103080);
  }
  return uVar26;
}



//==== 002b3ec8  ns=mobyupdate_unsorted  size=0x8b8
// sig: undefined UpdateMoby_1766(MobyInstance * moby)
// callers(0): 
// callees(10): 000f0ea8 mobyfunc::AttachManipulator; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002b3778 mobyupdate_helpers::M1766_002b3778; 00502578 fastfunc::FastWrapRot

/* Moby 1766 */

void mobyupdate_unsorted::UpdateMoby_1766(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  Vec4 *pVVar17;
  longlong lVar15;
  longlong lVar16;
  int iVar18;
  short sVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0xf0;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar13;
  puVar11[0x20] = in_LR;
  puVar11[0x1c] = in_f30;
  puVar11[0x1d] = in_f31;
  puVar11[0x1a] = unaff_r30;
  pvVar9 = moby->pVar;
  puVar11[0x19] = unaff_r29;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  puVar11[0x1b] = unaff_r31;
  iVar18 = *(int *)((int)pvVar9 + 0xac);
  fVar5 = (moby->pos).w;
  fVar6 = (moby->rotation).x;
  puVar11[0x18] = unaff_r28;
  *(f32 *)((int)puVar11 + 0x7c) = fVar5;
  fVar5 = (moby->rotation).y;
  pSVar10 = Splines[iVar18];
  *(float *)(puVar11 + 0xe) = -fVar2;
  *(float *)((int)puVar11 + 0x74) = -fVar3;
  *(f32 *)(puVar11 + 0x10) = fVar6;
  *(float *)(puVar11 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).z;
  *(f32 *)((int)puVar11 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  *(f32 *)(puVar11 + 0x11) = fVar6;
  *(f32 *)((int)puVar11 + 0x8c) = fVar5;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
      *(undefined4 *)((int)pvVar9 + 200) = 0;
      dVar29 = 0.0;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
      dVar28 = 3.1415927410125732;
      *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      dVar25 = (double)(moby->rotation).z;
      if (*(int *)((int)pvVar9 + 0xa0) != 0) {
        mobyfunc::AttachManipulator(moby,0,(int)pvVar9 + 0x60);
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0xac)];
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          *(undefined2 *)((int)pvVar9 + 0xb8) = 0xffff;
          *(short *)((int)pvVar9 + 0xba) = (short)pSVar10->cnt + -2;
          pVVar17 = pSVar10->points + pSVar10->cnt + -1;
          fVar2 = pVVar17->x;
          fVar3 = pVVar17->y;
          fVar4 = pVVar17->z;
          fVar7 = pVVar17->w;
        }
        else {
          *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
          *(undefined2 *)((int)pvVar9 + 0xba) = 1;
          fVar2 = pSVar10->points[0].x;
          fVar3 = pSVar10->points[0].y;
          fVar4 = pSVar10->points[0].z;
          fVar7 = pSVar10->points[0].w;
        }
        sVar8 = *(short *)((int)pvVar9 + 0xba);
        (moby->pos).x = fVar2;
        (moby->pos).y = fVar3;
        iVar18 = (int)((longlong)sVar8 << 4);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar7;
        fVar2 = *(float *)((int)&pSVar10->points[0].x + iVar18) - fVar2;
        fVar3 = *(float *)((int)&pSVar10->points[0].y + iVar18) - fVar3;
        dVar25 = ABS((double)fVar2);
        dVar26 = ABS((double)fVar3);
        *(float *)(puVar11 + 0x12) = fVar2;
        *(float *)((int)puVar11 + 0x94) = fVar3;
        *(float *)(puVar11 + 0x13) = (float)(dVar25 - dVar26);
        uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)(puVar11 + 0x12));
        if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar11 + 0x94));
        if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
          dVar26 = dVar25;
        }
        fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar25 = dVar29;
        if (dVar29 < dVar27) {
          lVar15 = uVar13 - 0xe0;
          lVar20 = uVar13 - 0x54;
          lVar23 = uVar13 - 0x44;
          lVar24 = 2;
          fVar4 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar7 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x15) = fVar4;
          *(float *)(puVar11 + 0x14) = fVar4;
          *(float *)((int)puVar11 + 0xa4) = fVar4;
          *(float *)((int)puVar11 + 0x9c) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar7;
          *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar4;
          *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar23 = uVar13 - 0x54;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar4 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar4;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar12 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0x9c)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar25 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
        }
        (moby->rotation).z = (float)dVar25;
      }
      dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar28);
      (moby->rotation).z = (float)dVar25;
    }
    else {
      fVar2 = (1.0 - *(float *)((int)pvVar9 + 0xcc)) * 0.01 + *(float *)((int)pvVar9 + 0xcc);
      *(float *)((int)pvVar9 + 0xcc) = fVar2;
      mobyutil::MB_BobMotion
                (fVar2 * 0.14,mobyutil::g_FrameTime * 0.5235988,moby,(float *)((int)pvVar9 + 0xd8),
                 (float *)((int)pvVar9 + 0xdc));
      mobyutil::MB_SwingMotion
                ((double)(*(float *)((int)pvVar9 + 0xcc) * 0.08726646),
                 (double)(mobyutil::g_FrameTime * 0.31415927),
                 (double)(mobyutil::g_FrameTime * 0.4886922),lVar14,(int)pvVar9 + 0xd0,
                 (int)pvVar9 + 0xd4);
      if (*(int *)((int)pvVar9 + 200) != 0) {
        if (((*(short *)((int)pvVar9 + 0xb8) < 1) || (*(int *)((int)pvVar9 + 0xb4) == -1)) ||
           (iVar18 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb4)), iVar18 == 0
           )) {
          if (((*(short *)((int)pvVar9 + 0xb8) < 0) && (*(int *)((int)pvVar9 + 0xb0) != -1)) &&
             (iVar18 = mobyutil::MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb0)),
             iVar18 != 0)) {
            moby->state = '\x03';
          }
        }
        else {
          moby->state = '\x03';
        }
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        *(undefined4 *)((int)pvVar9 + 200) = 1;
        moby->state = '\x03';
      }
    }
    goto LAB_002b4710;
  }
  if (bVar1 < 3) {
    fVar2 = (1.0 - *(float *)((int)pvVar9 + 0xcc)) * 0.01 + *(float *)((int)pvVar9 + 0xcc);
    *(float *)((int)pvVar9 + 0xcc) = fVar2;
    mobyutil::MB_BobMotion
              (fVar2 * 0.14,mobyutil::g_FrameTime * 0.5235988,moby,(float *)((int)pvVar9 + 0xd8),
               (float *)((int)pvVar9 + 0xdc));
    mobyutil::MB_SwingMotion
              ((double)(*(float *)((int)pvVar9 + 0xcc) * 0.08726646),
               (double)(mobyutil::g_FrameTime * 0.31415927),
               (double)(mobyutil::g_FrameTime * 0.4886922),lVar14,(int)pvVar9 + 0xd0,
               (int)pvVar9 + 0xd4);
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
    goto LAB_002b4710;
  }
  if (3 < bVar1) goto LAB_002b4710;
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar18 = *(int *)((int)pvVar9 + 0xc4);
    if (iVar18 != -1) {
      iVar18 = sound::IsMobyPlayingSound(moby,iVar18);
      if (iVar18 != 0) goto LAB_002b44cc;
      iVar18 = *(int *)((int)pvVar9 + 0xc4);
    }
    if (iVar18 == -1) {
      iVar18 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar9 + 0xc4) = iVar18;
    }
  }
LAB_002b44cc:
  if (*(int *)((int)pvVar9 + 0xbc) == 0) {
    if (((*(short *)((int)pvVar9 + 0xb8) < 0) && (*(int *)((int)pvVar9 + 0xb4) != -1)) &&
       (iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb4)),
       iVar18 != 0)) {
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar2 - pSVar10->points[pSVar10->cnt + -1].y;
      fVar7 = fVar3 - pSVar10->points[pSVar10->cnt + -1].x;
      if ((8.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4)) &&
         (fVar2 = fVar2 - pSVar10->points[0].y, fVar3 = fVar3 - pSVar10->points[0].x,
         8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
        *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
        *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      }
    }
    else if (((0 < *(short *)((int)pvVar9 + 0xb8)) && (*(int *)((int)pvVar9 + 0xb0) != -1)) &&
            (iVar18 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xb0)),
            iVar18 != 0)) {
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar2 - pSVar10->points[pSVar10->cnt + -1].y;
      fVar7 = fVar3 - pSVar10->points[pSVar10->cnt + -1].x;
      if ((8.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4)) &&
         (fVar2 = fVar2 - pSVar10->points[0].y, fVar3 = fVar3 - pSVar10->points[0].x,
         8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
        *(undefined2 *)((int)pvVar9 + 0xb8) = 0xffff;
        *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
      }
    }
  }
  iVar18 = mobyupdate_helpers::M1766_002b3778(lVar14);
  if (iVar18 != 0) {
    iVar18 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar18].state != '\0')) {
      sound::sound_Kill(iVar18);
    }
    sVar19 = 0;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
    *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
    *(undefined4 *)((int)pvVar9 + 0xdc) = 0;
    moby->state = '\x02';
    sVar8 = *(short *)((int)pvVar9 + 0xb8);
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40490fdb;
    *(short *)((int)pvVar9 + 0xb8) = -sVar8;
    if (-1 < sVar8) {
      sVar19 = (short)pSVar10->cnt + -1;
    }
    *(short *)((int)pvVar9 + 0xba) = sVar19;
  }
LAB_002b4710:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar2;
  *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar3;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x20),(Vec4 *)(puVar11 + 0xe),uVar13 - 0x70,
             lVar14 + 0x40);
  return;
}



//==== 002b4780  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1766_002b4780(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1766_002b4780(void)

{
  DAT_007b77ac = 0x10000;
  return;
}



//==== 002b4818  ns=mobyupdate_helpers  size=0x1b84
// sig: undefined M177_002b4818(void)
// callers(1): 002b6630 mobyupdate_unsorted::UpdateMoby_177
// callees(21): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001057cc mobyutil::MB_HasCollPrims; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010de78 mobyutil::MB_WrapRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0012f8c0 partupd::SpawnPart_53; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338
// strings: 007b7800: '=Vwp>VwP' (raw) | 007b7804: '>VwP' (raw)

void mobyupdate_helpers::M177_002b4818(ulonglong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  MOBY_OCLASSES MVar4;
  short sVar5;
  short sVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  MobyInstance *pMVar11;
  int iVar12;
  bool bVar13;
  ulonglong uVar14;
  int iVar17;
  int iVar18;
  ulonglong uVar15;
  int iVar19;
  longlong lVar16;
  undefined2 uVar20;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong uVar21;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar22;
  uint uVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  MobyInstance *pMVar28;
  MobyInstance *pMVar29;
  MobyInstance *pMVar30;
  float *pfVar31;
  float *pfVar32;
  ulonglong uVar27;
  ulonglong unaff_r31;
  MobyInstance *pMVar34;
  MobyInstance *pMVar35;
  longlong lVar33;
  float *pfVar36;
  ulonglong in_LR;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar52;
  ulonglong in_f19;
  ulonglong in_f20;
  double in_f21;
  double dVar53;
  double dVar54;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar55;
  ulonglong in_f24;
  double dVar56;
  ulonglong in_f25;
  double dVar57;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar58;
  double dVar59;
  ulonglong in_f28;
  double dVar60;
  ulonglong in_f29;
  double dVar61;
  ulonglong in_f30;
  double dVar62;
  ulonglong in_f31;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float local_500 [4];
  float local_4f0 [316];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x590;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0xb4] = in_LR;
  puVar10[0xa0] = in_f14;
  puVar10[0xa1] = in_f15;
  puVar10[0xa2] = in_f16;
  puVar10[0xa3] = in_f17;
  puVar10[0xa4] = in_f18;
  puVar10[0xa5] = in_f19;
  puVar10[0xa6] = in_f20;
  puVar10[0xa7] = (ulonglong)in_f21;
  puVar10[0xa8] = in_f22;
  puVar10[0xa9] = in_f23;
  puVar10[0xaa] = in_f24;
  puVar10[0xab] = in_f25;
  puVar10[0xac] = in_f26;
  puVar10[0xad] = in_f27;
  puVar10[0xae] = in_f28;
  puVar10[0xaf] = in_f29;
  puVar10[0xb0] = in_f30;
  puVar10[0xb1] = in_f31;
  puVar10[0x90] = unaff_r16;
  puVar10[0x96] = unaff_r22;
  puVar10[0x9c] = unaff_r28;
  puVar10[0x9f] = unaff_r31;
  puVar10[0x91] = unaff_r17;
  puVar10[0x97] = unaff_r23;
  fVar71 = DAT_010a06a4;
  bVar13 = g_goldWeaponsArray.teslaClaw;
  fVar70 = DAT_007b77ec;
  pMVar11 = (MobyInstance *)param_1;
  pfVar7 = (float *)pMVar11->pVar;
  uVar21 = ZEXT48(pfVar7);
  uVar22 = (ulonglong)g_goldWeaponsArray.teslaClaw;
  dVar63 = (double)DAT_007b77d4;
  puVar10[0x9e] = unaff_r30;
  puVar10[0x9d] = unaff_r29;
  puVar10[0x9b] = unaff_r27;
  puVar10[0x9a] = unaff_r26;
  puVar10[0x99] = unaff_r25;
  puVar10[0x98] = unaff_r24;
  puVar10[0x95] = unaff_r21;
  puVar10[0x94] = unaff_r20;
  puVar10[0x93] = unaff_r19;
  puVar10[0x92] = unaff_r18;
  puVar10[0x8f] = unaff_r15;
  puVar10[0x8e] = unaff_r14;
  puVar10[0x88] = 0x3fa99999a0000000;
  dVar37 = (double)fastfunc::FastWrapRot(fVar71,fVar70);
  DAT_010a06a4 = (float)dVar37;
  dVar37 = (double)fastfunc::FastDiffRots((double)DAT_010a06a8,(double)DAT_007b77f0);
  DAT_010a06a8 = (float)dVar37;
  dVar37 = (double)fastfunc::FastWrapRot(DAT_010a06ac,DAT_007b7800);
  DAT_010a06ac = (float)dVar37;
  dVar37 = 0.0;
  fVar70 = pfVar7[8];
  puVar10[0x83] = 0;
  uVar23 = (uint)bVar13;
  if ((fVar70 == 0.0) || ((uVar23 != 0 && (pfVar7[0xe] == 0.0)))) {
    if (pfVar7[0xe] == 0.0) {
      if (DAT_00a49344 != (MobyInstance *)0x0) {
        dVar58 = dVar37;
        dVar60 = dVar37;
        iVar18 = 0;
        pMVar30 = DAT_00a49344;
        pMVar28 = (MobyInstance *)0x0;
        pMVar34 = (MobyInstance *)0x0;
        do {
          dVar61 = dVar58;
          dVar52 = dVar60;
          pMVar35 = pMVar34;
          pMVar29 = pMVar28;
          if ((((pMVar30 != (MobyInstance *)pfVar7[8]) && (pMVar30 != (MobyInstance *)pfVar7[0xe]))
              && (pMVar30->pClass != (MobyClass *)0x0)) &&
             ((((short)pMVar30->pClass->mode_bits == 5 &&
               (pMVar30->state != 0xfd && pMVar30->state != 0xfe)) &&
              (iVar17 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar30), dVar61 = dVar58,
              dVar52 = dVar60, iVar17 != 0)))) {
            fVar70 = (pMVar30->pos).y;
            fVar71 = (pMVar30->pos).x;
            fVar2 = fVar70 - pfVar7[1];
            fVar8 = fVar71 - *pfVar7;
            dVar41 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2);
            if (dVar41 <= (double)DAT_007b77d4) {
              dVar52 = (double)GameCamera.rot.radius;
              dVar61 = (double)FUN_005e8338((double)(fVar71 - GameCamera.posX),
                                            (double)(fVar70 - GameCamera.posY));
              dVar44 = (double)fastfunc::FastSubRots((float)dVar52,(float)dVar61);
              dVar61 = dVar58;
              dVar52 = dVar60;
              if (dVar44 <= (double)DAT_007b77dc) {
                dVar61 = (double)FUN_005e8338((double)((pMVar30->pos).x - g_heroPosition.x),
                                              (double)((pMVar30->pos).y - g_heroPosition.y));
                dVar47 = (double)fastfunc::FastSubRots((float)dVar61,g_heroRotation.z);
                dVar61 = dVar58;
                dVar52 = dVar60;
                if (dVar47 <= (double)DAT_007b77d8) {
                  dVar41 = (double)(DAT_007b7858 *
                                    (float)((double)(float)((double)DAT_007b77dc - dVar44) /
                                           (double)DAT_007b77dc) +
                                   (float)((double)(float)((double)DAT_007b77d4 - dVar41) /
                                          (double)DAT_007b77d4));
                  dVar61 = dVar60;
                  dVar52 = dVar41;
                  pMVar35 = pMVar30;
                  pMVar29 = pMVar34;
                  if ((dVar41 <= dVar60) &&
                     (dVar61 = dVar58, dVar52 = dVar60, pMVar35 = pMVar34, pMVar29 = pMVar28,
                     dVar58 < dVar41)) {
                    dVar61 = dVar41;
                    pMVar29 = pMVar30;
                  }
                }
              }
            }
          }
          pMVar30 = *(MobyInstance **)((int)&DAT_00a49348 + iVar18);
          dVar58 = dVar61;
          dVar60 = dVar52;
          iVar18 = iVar18 + 4;
          pMVar28 = pMVar29;
          pMVar34 = pMVar35;
        } while (pMVar30 != (MobyInstance *)0x0);
        pMVar30 = pMVar29;
        if ((pMVar35 != (MobyInstance *)0x0) && (pMVar30 = pMVar35, pfVar7[8] == 0.0)) {
          uVar15 = puVar10[0x83];
          pfVar7[8] = (float)pMVar35;
          *(short *)(pfVar7 + 0x10) = (short)uVar15;
          sound::PlayMobySound(1,0,pMVar11);
          pMVar30 = pMVar29;
        }
        if ((pMVar30 != (MobyInstance *)0x0) && (uVar23 != 0)) {
          fVar70 = (pMVar35->pos).y;
          fVar8 = pfVar7[1] - fVar70;
          fVar71 = (pMVar35->pos).x;
          fVar9 = *pfVar7 - fVar71;
          fVar2 = (pMVar35->pos).z;
          fVar3 = pfVar7[2] - fVar2;
          fVar8 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar8 * fVar8);
          if ((fVar8 < DAT_007b77d4) &&
             (fVar70 = fVar70 - (pMVar30->pos).y, fVar71 = fVar71 - (pMVar30->pos).x,
             fVar2 = fVar2 - (pMVar30->pos).z,
             fVar8 + SQRT(fVar2 * fVar2 + fVar71 * fVar71 + fVar70 * fVar70) < DAT_007b77d4)) {
            uVar15 = puVar10[0x83];
            pfVar7[0xe] = (float)pMVar30;
            *(short *)((int)pfVar7 + 0x42) = (short)uVar15;
          }
        }
      }
    }
    else {
      pfVar7[8] = pfVar7[0xe];
      *(undefined2 *)(pfVar7 + 0x10) = *(undefined2 *)((int)pfVar7 + 0x42);
      pfVar7[0xe] = 0.0;
      *(undefined2 *)((int)pfVar7 + 0x42) = 0;
    }
  }
  dVar58 = in_f21;
  dVar60 = in_f21;
  dVar61 = dVar37;
  dVar52 = in_f21;
  if ((MobyInstance *)pfVar7[8] != (MobyInstance *)0x0) {
    iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[8]);
    fVar70 = pfVar7[8];
    dVar60 = (double)*(float *)((int)fVar70 + 0x14);
    in_f21 = (double)*(float *)((int)fVar70 + 0x10);
    dVar58 = (double)(*(float *)((int)fVar70 + 0x18) + *(float *)(iVar18 + 0x10));
    dVar61 = (double)SQRT((float)((double)pfVar7[2] - dVar58) * (float)((double)pfVar7[2] - dVar58)
                          + (float)((double)*pfVar7 - in_f21) * (float)((double)*pfVar7 - in_f21) +
                            (float)((double)pfVar7[1] - dVar60) *
                            (float)((double)pfVar7[1] - dVar60));
    dVar63 = dVar61;
  }
  pMVar30 = (MobyInstance *)pfVar7[0xe];
  *(float *)(puVar10 + 0x82) = (float)dVar58;
  *(float *)(puVar10 + 0x81) = (float)dVar60;
  *(float *)((int)puVar10 + 0x424) = (float)dVar52;
  *(float *)(puVar10 + 0x85) = (float)dVar52;
  *(float *)(puVar10 + 0x84) = (float)dVar52;
  if (pMVar30 != (MobyInstance *)0x0) {
    *(float *)(puVar10 + 0x82) = (float)dVar58;
    *(float *)(puVar10 + 0x81) = (float)dVar60;
    iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar30);
    fVar8 = pfVar7[0xe];
    fVar2 = *(float *)((int)fVar8 + 0x14);
    fVar70 = (float)(dVar60 - (double)fVar2);
    fVar71 = (float)(in_f21 - (double)*(float *)((int)fVar8 + 0x10));
    fVar9 = *(float *)((int)fVar8 + 0x18) + *(float *)(iVar18 + 0x10);
    *(float *)((int)puVar10 + 0x424) = *(float *)((int)fVar8 + 0x10);
    *(float *)(puVar10 + 0x84) = fVar2;
    fVar2 = (float)(dVar58 - (double)fVar9);
    *(float *)(puVar10 + 0x85) = fVar9;
    dVar63 = (double)(float)((double)SQRT(fVar2 * fVar2 + fVar71 * fVar71 + fVar70 * fVar70) +
                            dVar61);
  }
  puVar10[0x8a] = (longlong)(int)uVar23;
  puVar10[0x87] = param_1;
  puVar10[0x86] = uVar22;
  *(float *)((int)puVar10 + 0x8c) = (float)dVar37;
  *(float *)(puVar10 + 0x11) = (float)dVar37;
  PTR_DAT_007b7824 =
       (undefined *)(((uint)((LZCOUNT(-(uint)bVar13) << 0x3a) >> 0x3f) & 0x5ea100) + 0x207f20);
  *(float *)((int)puVar10 + 0x84) = (float)dVar37;
  *(float *)(puVar10 + 0x10) = (float)dVar37;
  dVar58 = (double)((float)(longlong)puVar10[0x8a] + 2.0);
  mobyutil::SetCollDamIn(dVar58,uVar14 - 0x490,param_1,0x210000,0x207f20,uVar14 - 0x510);
  MVar4 = pMVar11->oClass;
  *(undefined1 *)(puVar10 + 0x23) = 5;
  *(undefined1 *)((int)puVar10 + 0x119) = 1;
  *(MOBY_OCLASSES *)((int)puVar10 + 0x11a) = MVar4;
  *(undefined2 *)((int)pfVar7 + 0x3e) = 0x14;
  pMVar11 = g_heroMobyPtr;
  *(undefined4 *)((int)puVar10 + 0x44c) = 0x3e99999a;
  collproc::CollMobySphere(0x3fd3333340000000,uVar21,1,0x10,pMVar11,uVar14 - 0x490);
  fVar71 = pfVar7[4] - *pfVar7;
  *(float *)(puVar10 + 0x12) = fVar71;
  fVar8 = pfVar7[5] - pfVar7[1];
  *(float *)((int)puVar10 + 0x94) = fVar8;
  fVar9 = pfVar7[6] - pfVar7[2];
  fVar2 = fVar9 * fVar9 + fVar71 * fVar71 + fVar8 * fVar8;
  *(float *)(puVar10 + 0x13) = fVar9;
  fVar70 = pfVar7[7];
  *(float *)(puVar10 + 0x89) = (float)dVar58;
  *(float *)((int)puVar10 + 0x9c) = fVar70;
  dVar58 = dVar37;
  dVar60 = dVar37;
  dVar61 = dVar37;
  if ((double)SQRT(fVar2) != dVar37) {
    fVar70 = 1.0 / SQRT(fVar2);
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    fVar70 = -(fVar2 * fVar70 * fVar70 - 1.0) * fVar70 * 0.5 + fVar70;
    dVar61 = (double)(fVar71 * fVar70);
    dVar60 = (double)(fVar8 * fVar70);
    dVar58 = (double)(fVar9 * fVar70);
  }
  *(float *)(puVar10 + 0x12) = (float)dVar61;
  *(float *)((int)puVar10 + 0x94) = (float)dVar60;
  fVar70 = pfVar7[8];
  *(float *)(puVar10 + 0x13) = (float)dVar58;
  dVar41 = (double)DAT_00969f74;
  dVar44 = (double)DAT_00969f78;
  dVar47 = (double)hero::g_heroGravityDir;
  if ((fVar70 != 0.0) || (pfVar7[0xe] != 0.0)) {
    *(float *)((int)puVar10 + 0xbc) = (float)dVar37;
    *(float *)(puVar10 + 0x16) = (float)(dVar41 * dVar58 - (double)(float)(dVar44 * dVar60));
    *(float *)((int)puVar10 + 0xb4) = (float)(dVar44 * dVar61 - (double)(float)(dVar47 * dVar58));
    *(float *)(puVar10 + 0x17) = (float)(dVar47 * dVar60 - (double)(float)(dVar41 * dVar61));
    mobyutil::MB_RotateQuatAxisAngle(0.17453292,local_500,local_500);
    dVar61 = (double)*(float *)(puVar10 + 0x12);
    dVar60 = (double)*(float *)((int)puVar10 + 0x94);
    dVar58 = (double)*(float *)(puVar10 + 0x13);
  }
  DAT_010a0240 = *pfVar7;
  DAT_010a0244 = pfVar7[1];
  DAT_010a0248 = pfVar7[2];
  DAT_010a024c = pfVar7[3];
  DAT_010a0380 = *pfVar7;
  dVar63 = (double)(float)(dVar63 * (double)puVar10[0x88]);
  DAT_010a0384 = pfVar7[1];
  uVar22 = puVar10[0x83];
  DAT_010a0388 = pfVar7[2];
  *(float *)((int)puVar10 + 0x40c) = (float)in_f21;
  DAT_010a038c = pfVar7[3];
  dVar56 = (double)(float)(dVar60 * dVar63);
  dVar55 = (double)(float)(dVar61 * dVar63);
  dVar57 = (double)(float)(dVar58 * dVar63);
  dVar60 = 3.141592502593994;
  uVar26 = 1;
  dVar61 = -3.141592502593994;
  dVar41 = -0.16666656732559204;
  *(float *)((int)puVar10 + 0x404) = (float)dVar52;
  dVar52 = 0.008333025500178337;
  dVar44 = -0.0001980741071747616;
  dVar47 = 2.601886990305502e-06;
  dVar59 = 0.10000000149011612;
  puVar10[0x7f] = 0x3feb333340000000;
  auVar69 = loadVectorLeftIndexed(0x10,0x2b4798);
  *(undefined4 *)((int)puVar10 + 0x42c) = 0x3fc90fdb;
  dVar58 = 0.5;
  *(undefined4 *)(puVar10 + 0x80) = 0x3fc90fda;
  auVar69 = auVar69 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar69 = auVar69 | auVar69 << 0x20 | auVar69 << 0x40 | auVar69 << 0x60;
  puVar10[0x7e] = 0x3ff0000000000000;
  lVar16 = lVar1;
  uVar15 = uVar22;
  do {
    dVar38 = (double)fastfunc::FastIntToDouble(uVar26);
    iVar18 = (int)uVar26;
    puVar10[0x8a] = (longlong)iVar18;
    dVar62 = (double)((DAT_007b77e8 - DAT_007b77e4) * (float)(dVar38 * (double)puVar10[0x88]) +
                     DAT_007b77e4);
    dVar53 = (double)(longlong)puVar10[0x8a];
    fVar70 = mobyutil::MB_WrapRot((float)(dVar53 * (double)DAT_007b77e0 + (double)DAT_010a06a4));
    dVar39 = (double)fVar70;
    dVar38 = (double)(float)(dVar60 - dVar39);
    if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
      dVar38 = dVar39;
    }
    dVar64 = (double)(float)(dVar61 - dVar39);
    if ((double)(float)(dVar61 - dVar39) - dVar38 < 0.0) {
      dVar64 = dVar38;
    }
    dVar38 = (double)(float)(dVar64 * dVar64);
    dVar42 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar64));
    dVar39 = (double)(float)(dVar38 * dVar42);
    dVar39 = (double)(float)((double)(float)(dVar38 * dVar39) * dVar47 +
                            (double)(float)(dVar39 * dVar44 +
                                           (double)(float)(dVar42 * dVar52 +
                                                          (double)(float)((double)(float)(dVar38 * 
                                                  dVar64) * dVar41 + dVar64))));
    dVar38 = (double)mobyutil::MB_randRangeSigned((double)DAT_010a06b0,(double)DAT_007b7818);
    lVar33 = (uVar26 & 0xfffffff) * 0x10;
    iVar17 = (int)((uVar26 & 0xffffffff) << 2);
    fVar70 = (float)(dVar62 * dVar39 + dVar38);
    iVar19 = (int)lVar33;
    fVar2 = *(float *)(iVar17 + 0x10a04c0);
    fVar71 = *(float *)((int)&DAT_010a0248 + iVar19);
    *(float *)(iVar17 + 0x10a04c0) = fVar70;
    dVar39 = (double)puVar10[0x7f];
    *(float *)((int)&DAT_010a0248 + iVar19) = fVar71 - fVar2;
    pfVar31 = (float *)(ZEXT48(&DAT_010a0240) + lVar33);
    dVar38 = (double)pfVar31[-3];
    dVar64 = (double)pfVar31[-4];
    dVar62 = (double)pfVar31[-2];
    fVar71 = (float)((double)(float)(dVar56 - (double)(float)((double)pfVar31[1] - dVar38)) * dVar39
                    + (double)(float)((double)pfVar31[1] - dVar38));
    fVar2 = (float)((double)(float)(dVar55 - (double)(float)((double)*pfVar31 - dVar64)) * dVar39 +
                   (double)(float)((double)*pfVar31 - dVar64));
    fVar8 = (float)((double)(float)(dVar57 - (double)(float)((double)pfVar31[2] - dVar62)) * dVar39
                   + (double)(float)((double)pfVar31[2] - dVar62));
    dVar39 = (double)SQRT(fVar8 * fVar8 + fVar2 * fVar2 + fVar71 * fVar71);
    if (dVar39 == dVar37) {
      fVar3 = pfVar31[-1];
    }
    else {
      fVar9 = (float)(dVar63 / dVar39);
      fVar3 = pfVar31[-1];
      dVar55 = (double)(fVar9 * fVar2);
      dVar56 = (double)(fVar9 * fVar71);
      dVar57 = (double)(fVar9 * fVar8);
      dVar64 = (double)(float)(dVar64 + dVar55);
      dVar38 = (double)(float)(dVar38 + dVar56);
      dVar62 = (double)(float)(dVar62 + dVar57);
    }
    *pfVar31 = (float)dVar64;
    pfVar31[1] = (float)dVar38;
    pfVar31[2] = (float)dVar62;
    pfVar31[3] = fVar3;
    fVar9 = pfVar7[8];
    *(float *)((int)&DAT_010a0248 + iVar19) = *(float *)((int)&DAT_010a0248 + iVar19) + fVar70;
    fVar70 = pfVar31[-3];
    fVar71 = *pfVar31;
    fVar2 = pfVar31[1];
    fVar8 = pfVar31[2];
    puVar10[0x7d] = (ulonglong)(double)(fVar71 - pfVar31[-4]);
    puVar10[0x7c] = (ulonglong)(double)(fVar2 - fVar70);
    if (fVar9 != 0.0) {
      if (((int)puVar10[0x86] == 0) || (pfVar7[0xe] == 0.0)) {
        dVar39 = (double)(*(float *)(puVar10 + 0x81) - fVar2);
        dVar38 = (double)(*(float *)((int)puVar10 + 0x40c) - fVar71);
        dVar62 = (double)(*(float *)(puVar10 + 0x82) - fVar8);
        dVar64 = (double)SQRT((float)(dVar62 * dVar62 +
                                     (double)(float)(dVar38 * dVar38 +
                                                    (double)(float)(dVar39 * dVar39))));
        if (dVar64 != dVar37) {
          dVar42 = dVar58;
          dVar54 = dVar64;
          if ((iVar18 != 0x13) && (dVar42 = dVar59, dVar54 = dVar63, 0xf < iVar18)) {
            dVar63 = (double)fastfunc::FastIntToDouble(0x13 - iVar18);
            dVar42 = dVar58;
            dVar54 = (double)(float)(dVar64 / dVar63);
          }
          dVar63 = dVar54;
          dVar64 = (double)(float)(dVar63 / dVar64);
          dVar55 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar38 - dVar55) + dVar55);
          dVar56 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar39 - dVar56) + dVar56);
          dVar57 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar62 - dVar57) + dVar57);
        }
      }
      else {
        fVar9 = *(float *)(puVar10 + 0x82);
        fVar70 = *(float *)((int)puVar10 + 0x40c);
        fVar3 = *(float *)(puVar10 + 0x81);
        if (9 < iVar18) {
          fVar9 = *(float *)(puVar10 + 0x85);
          fVar70 = *(float *)((int)puVar10 + 0x424);
          fVar3 = *(float *)(puVar10 + 0x84);
        }
        dVar62 = (double)(fVar70 - fVar71);
        dVar38 = (double)(fVar9 - fVar8);
        dVar39 = (double)(fVar3 - fVar2);
        dVar64 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar62 * dVar62 +
                                                    (double)(float)(dVar39 * dVar39))));
        if (dVar64 != dVar37) {
          if ((iVar18 == 9) || (iVar18 == 0x13)) {
            dVar42 = 0.699999988079071;
            dVar63 = dVar64;
          }
          else if (iVar18 < 10 && 4 < iVar18) {
            dVar63 = (double)fastfunc::FastIntToDouble(9 - iVar18);
            dVar42 = 0.699999988079071;
            dVar63 = (double)(float)(dVar64 / dVar63);
          }
          else if (iVar18 < 0xf) {
            dVar42 = 0.20000000298023224;
          }
          else {
            dVar63 = (double)fastfunc::FastIntToDouble(0x13 - iVar18);
            dVar42 = 0.699999988079071;
            dVar63 = (double)(float)(dVar64 / dVar63);
          }
          dVar64 = (double)(float)(dVar63 / dVar64);
          dVar55 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar62 - dVar55) + dVar55);
          dVar56 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar39 - dVar56) + dVar56);
          dVar57 = (double)(float)(dVar42 * (double)(float)(dVar64 * dVar38 - dVar57) + dVar57);
        }
      }
    }
    if (iVar18 < 10) {
      dVar42 = (double)*(float *)((int)puVar10 + 0x42c);
      dVar64 = (double)*(float *)((int)puVar10 + 0x404);
      dVar62 = (double)*(float *)(puVar10 + 0x80);
      fVar70 = mobyutil::MB_WrapRot((float)(dVar53 * (double)DAT_007b77f4 + (double)DAT_010a06a8));
      dVar39 = (double)fVar70;
      fVar71 = mobyutil::MB_WrapRot((float)(dVar53 * (double)DAT_007b7804 + (double)DAT_010a06ac));
      fVar70 = DAT_007b77f8;
      dVar53 = (double)fVar71;
      dVar38 = (double)(float)(dVar60 - dVar53);
      if (dVar53 - (double)(float)(dVar60 - dVar53) < 0.0) {
        dVar38 = dVar53;
      }
      dVar54 = (double)(float)(dVar61 - dVar53);
      if ((double)(float)(dVar61 - dVar53) - dVar38 < 0.0) {
        dVar54 = dVar38;
      }
      pfVar31[0x50] = *pfVar31;
      pfVar31[0x51] = pfVar31[1];
      pfVar31[0x52] = pfVar31[2];
      dVar53 = (double)(float)(dVar54 * dVar54);
      pfVar31[0x53] = pfVar31[3];
      dVar38 = (double)(float)(dVar53 * (double)(float)(dVar53 * dVar54));
      dVar45 = (double)(float)(dVar53 * dVar38);
      dVar54 = (double)(fVar70 * (float)((double)(float)(dVar53 * dVar45) * dVar47 +
                                        (double)(float)(dVar45 * dVar44 +
                                                       (double)(float)(dVar38 * dVar52 +
                                                                      (double)(float)((double)(float
                                                  )(dVar53 * dVar54) * dVar41 + dVar54)))));
      dVar53 = (double)mobyutil::MB_randRangeSigned(dVar37,dVar59);
      dVar38 = (double)(float)(dVar60 - dVar39);
      if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
        dVar38 = dVar39;
      }
      dVar45 = (double)(float)(dVar61 - dVar39);
      if ((double)(float)(dVar61 - dVar39) - dVar38 < 0.0) {
        dVar45 = dVar38;
      }
      fVar71 = *(float *)((int)&DAT_010a0388 + iVar19);
      dVar38 = (double)(float)(dVar45 * dVar45);
      dVar43 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar45));
      uVar40 = puVar10[0x7c];
      uVar48 = puVar10[0x7d];
      dVar46 = (double)(float)(dVar38 * dVar43);
      fVar70 = (float)(dVar54 * (double)(float)((double)(float)(dVar38 * dVar46) * dVar47 +
                                               (double)(float)(dVar46 * dVar44 +
                                                              (double)(float)(dVar43 * dVar52 +
                                                                             (double)(float)((double
                                                  )(float)(dVar38 * dVar45) * dVar41 + dVar45)))) +
                      dVar53);
      *(float *)((int)&DAT_010a0650 + iVar17) = fVar70;
      *(float *)((int)&DAT_010a0388 + iVar19) = fVar71 + fVar70;
      dVar38 = (double)FUN_005e8338(uVar48,uVar40);
      dVar53 = (double)fastfunc::FastWrapRot((float)dVar38,(float)dVar42);
      fVar71 = DAT_007b77fc;
      dVar39 = (double)(float)(dVar39 + dVar62);
      dVar62 = (double)(float)(dVar53 + dVar62);
      dVar38 = (double)(float)(dVar60 - dVar53);
      if (dVar53 - (double)(float)(dVar60 - dVar53) < 0.0) {
        dVar38 = dVar53;
      }
      dVar42 = (double)(float)(dVar60 - dVar39);
      if (dVar39 - (double)(float)(dVar60 - dVar39) < 0.0) {
        dVar42 = dVar39;
      }
      dVar54 = (double)(float)(dVar60 - dVar62);
      if (dVar62 - (double)(float)(dVar60 - dVar62) < 0.0) {
        dVar54 = dVar62;
      }
      dVar45 = (double)(float)(dVar61 - dVar53);
      if ((double)(float)(dVar61 - dVar53) - dVar38 < 0.0) {
        dVar45 = dVar38;
      }
      dVar38 = (double)(float)(dVar61 - dVar39);
      if ((double)(float)(dVar61 - dVar39) - dVar42 < 0.0) {
        dVar38 = dVar42;
      }
      dVar53 = (double)(float)(dVar45 * dVar45);
      dVar39 = (double)(float)(dVar61 - dVar62);
      if ((double)(float)(dVar61 - dVar62) - dVar54 < 0.0) {
        dVar39 = dVar54;
      }
      dVar62 = (double)(float)(dVar38 * dVar38);
      dVar42 = (double)(float)(dVar39 * dVar39);
      dVar50 = (double)(float)(dVar53 * (double)(float)(dVar53 * dVar45));
      dVar54 = (double)(float)(dVar62 * (double)(float)(dVar62 * dVar38));
      dVar46 = (double)(float)(dVar42 * (double)(float)(dVar42 * dVar39));
      dVar49 = (double)(float)(dVar53 * dVar50);
      dVar51 = (double)(float)(dVar62 * dVar54);
      dVar43 = (double)(float)(dVar42 * dVar46);
      fVar2 = pfVar31[0x50];
      fVar8 = pfVar31[0x51];
      *(float *)(iVar19 + 0x10a0518) = (float)dVar37;
      *(float *)(iVar19 + 0x10a051c) = (float)dVar64;
      fVar71 = fVar71 * (float)((double)(float)(dVar62 * dVar51) * dVar47 +
                               (double)(float)(dVar51 * dVar44 +
                                              (double)(float)(dVar54 * dVar52 +
                                                             (double)(float)((double)(float)(dVar62 
                                                  * dVar38) * dVar41 + dVar38))));
      fVar70 = (float)((double)(float)(dVar42 * dVar43) * dVar47 +
                      (double)(float)(dVar43 * dVar44 +
                                     (double)(float)(dVar46 * dVar52 +
                                                    (double)(float)((double)(float)(dVar42 * dVar39)
                                                                    * dVar41 + dVar39)))) * fVar71;
      fVar71 = (float)((double)(float)(dVar53 * dVar49) * dVar47 +
                      (double)(float)(dVar49 * dVar44 +
                                     (double)(float)(dVar50 * dVar52 +
                                                    (double)(float)((double)(float)(dVar53 * dVar45)
                                                                    * dVar41 + dVar45)))) * fVar71;
      *(float *)(iVar19 + 0x10a0510) = fVar70;
      *(float *)(iVar19 + 0x10a0514) = fVar71;
    }
    else {
      pfVar31[0x52] = pfVar31[2];
      iVar17 = (int)(0x15 - uVar26);
      iVar12 = iVar17 * 0x10;
      pfVar31[0x50] = *pfVar31;
      pfVar31[0x51] = pfVar31[1];
      pfVar31[0x53] = pfVar31[3];
      *(float *)((int)&DAT_010a0388 + iVar19) =
           *(float *)((int)&DAT_010a0388 + iVar19) + (float)(&DAT_010a0650)[iVar17];
      fVar70 = *(float *)(iVar12 + 0x10a0510);
      fVar2 = pfVar31[0x50];
      fVar71 = *(float *)(iVar12 + 0x10a0514);
      fVar8 = pfVar31[0x51];
      pfVar31[0x52] = pfVar31[0x52] + *(float *)(iVar12 + 0x10a0518);
      *(undefined4 *)((int)puVar10 + 0x404) = *(undefined4 *)(iVar19 + 0x10a051c);
    }
    pfVar31[0x50] = fVar2 + fVar70;
    pfVar31[0x51] = fVar8 + fVar71;
    pMVar11 = g_heroMobyPtr;
    lVar24 = lVar16;
    if ((iVar18 == 0x13 || iVar18 == 1) ||
       (iVar18 == ((iVar18 >> 1) + (uint)(iVar18 < 0 && (uVar26 & 1) != 0)) * 2)) {
      if (iVar18 == 1) {
        dVar38 = (double)g_heroPosition.x;
        dVar39 = (double)g_heroPosition.y;
        dVar53 = (double)g_heroPosition.z;
        fVar70 = (g_heroMobyPtr->transform).v2.x;
        fVar71 = (g_heroMobyPtr->transform).v2.y;
        fVar2 = (g_heroMobyPtr->transform).v2.z;
        *(float *)((int)puVar10 + 0xcc) = g_heroPosition.w;
        *(float *)(puVar10 + 0x18) = (float)((double)fVar70 * dVar58 + dVar38);
        *(float *)((int)puVar10 + 0xc4) = (float)((double)fVar71 * dVar58 + dVar39);
        *(float *)(puVar10 + 0x19) = (float)((double)fVar2 * dVar58 + dVar53);
        uVar15 = collproc::CollLine(uVar14 - 0x4d0,uVar21,0x10,pMVar11,0);
      }
      else {
        uVar15 = collproc::CollLine(lVar33 + 0x10a0220U & 0xffffffff,
                                    ZEXT48(&DAT_010a0240) + lVar33 & 0xffffffff,0x10,puVar10[0x87],0
                                   );
      }
      fVar71 = GameCamera.posY;
      fVar70 = *pfVar31 - GameCamera.posX;
      iVar17 = (int)uVar15;
      *(float *)(puVar10 + 0x10) = fVar70;
      fVar71 = pfVar31[1] - fVar71;
      *(float *)((int)puVar10 + 0x84) = fVar71;
      dVar38 = (double)(float)(dVar37 * dVar37 + (double)(fVar70 * fVar70 + fVar71 * fVar71));
      if ((double)(float)SQRT(dVar38) != dVar37) {
        dVar39 = 1.0 / SQRT(dVar38);
        dVar53 = (double)puVar10[0x7e];
        dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53
                                                 ) * (double)(float)(dVar58 * dVar39) + dVar39);
        dVar39 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53
                                                 ) * (double)(float)(dVar58 * dVar39) + dVar39);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar38 * dVar39) * dVar39 - dVar53) *
                        (double)(float)(dVar58 * dVar39) + dVar39);
        fVar70 = fVar70 * fVar2;
        fVar71 = fVar71 * fVar2;
        *(float *)(puVar10 + 0x10) = fVar70;
        *(float *)((int)puVar10 + 0x84) = fVar71;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0x45afdf66;
      *(float *)(puVar10 + 0x20) = fVar70;
      *(float *)((int)puVar10 + 0x104) = fVar71;
      *(undefined4 *)(puVar10 + 0x21) = 0x3f800000;
      *(undefined4 *)((int)puVar10 + 0x10c) = 0x45afdf66;
      pMVar11 = CollOutput.pMoby;
      if (iVar17 != 0) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          iVar19 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
          if (iVar19 == 0) {
            *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x10c);
            *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x21);
            *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x104);
            *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x20);
            *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x11c);
            *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x23);
            *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x114);
            *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x22);
            *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 300);
            *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x25);
            *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x124);
            *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x24);
            mobyutil::CollDamageMobyDirect
                      (pMVar11,0x40,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                       puVar10[0xd]);
          }
          else {
            if ((pMVar11->pClass != (MobyClass *)0x0) && ((short)pMVar11->pClass->mode_bits == 5)) {
              uVar15 = puVar10[0x83];
              lVar24 = lVar16 + 4;
              uVar22 = uVar22 + 1;
              *(MobyInstance **)((int)lVar16 + 0x1e0) = pMVar11;
              pMVar11->collision = (ushort *)uVar15;
              goto LAB_002b5880;
            }
            *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x10c);
            *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x21);
            *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x104);
            *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x20);
            *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x11c);
            *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x23);
            *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x114);
            *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x22);
            *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 300);
            *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x25);
            *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x124);
            *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x24);
            mobyutil::CollDamageMobyDirect
                      (pMVar11,0x50,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                       puVar10[0xd]);
          }
        }
        *pfVar31 = CollOutput.ip.x;
        pfVar31[1] = CollOutput.ip.y;
        pfVar31[2] = CollOutput.ip.z;
        pfVar31[3] = CollOutput.ip.w;
        fVar70 = CollOutput.ip.x;
        *(short *)((int)pfVar7 + 0x3e) = (short)uVar26;
        pfVar7[4] = fVar70;
        pMVar11 = CollOutput.pMoby;
        pfVar7[5] = CollOutput.ip.y;
        pfVar7[6] = CollOutput.ip.z;
        pfVar7[7] = CollOutput.ip.w;
        if ((pMVar11 == (MobyInstance *)0x0) ||
           (iVar18 = mobyutil::MB_HasCollPrims(pMVar11), iVar18 != 0)) {
          uVar15 = puVar10[0x83];
          pfVar7[8] = (float)uVar15;
          *(short *)(pfVar7 + 0x10) = (short)uVar15;
        }
        goto LAB_002b5890;
      }
    }
LAB_002b5880:
    iVar17 = (int)uVar15;
    uVar26 = (ulonglong)(iVar18 + 1);
    lVar16 = lVar24;
    if (0x13 < iVar18 + 1) {
LAB_002b5890:
      iVar18 = (int)uVar22;
      lVar16 = lVar1;
      while (0 < iVar18) {
        iVar18 = *(int *)((int)lVar16 + 0x1e0);
        uVar22 = uVar22 - 1;
        lVar16 = lVar16 + 4;
        *(undefined4 *)(iVar18 + 0x94) = *(undefined4 *)(*(int *)(iVar18 + 0x24) + 0x10);
        iVar18 = (int)uVar22;
      }
      if (iVar17 == 0) {
        pfVar7[4] = DAT_010a0370;
        pfVar7[5] = DAT_010a0374;
        pfVar7[6] = DAT_010a0378;
        pfVar7[7] = DAT_010a037c;
      }
      fVar71 = GameCamera.posY;
      fVar70 = pfVar7[8];
      if (((fVar70 != 0.0) && (*(short *)(pfVar7 + 0x10) == 0)) && (*(short *)(pfVar7 + 0x11) == 0))
      {
        fVar2 = *(float *)((int)fVar70 + 0x10) - GameCamera.posX;
        *(float *)(puVar10 + 0x1a) = fVar2;
        fVar71 = *(float *)((int)fVar70 + 0x14) - fVar71;
        dVar61 = (double)(float)(dVar37 * dVar37 + (double)(fVar2 * fVar2 + fVar71 * fVar71));
        dVar63 = dVar37;
        dVar60 = dVar37;
        if ((double)(float)SQRT(dVar61) != dVar37) {
          dVar63 = 1.0 / SQRT(dVar61);
          dVar60 = (double)puVar10[0x7e];
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          fVar70 = (float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 - dVar60) *
                           (double)(float)(dVar58 * dVar63) + dVar63);
          dVar60 = (double)(fVar2 * fVar70);
          dVar63 = (double)(fVar71 * fVar70);
        }
        *(float *)(puVar10 + 0x1a) = (float)dVar60;
        *(float *)((int)puVar10 + 0xd4) = (float)dVar63;
        *(undefined4 *)(puVar10 + 0x1b) = 0x3f800000;
        uVar22 = puVar10[0x87];
        *(undefined4 *)((int)puVar10 + 0xdc) = 0x45afdf66;
        mobyutil::SetCollDamIn
                  ((double)*(float *)(puVar10 + 0x89),uVar14 - 0x460,uVar22,0x210000,0x45afdf66,
                   uVar14 - 0x4c0);
        *(undefined1 *)(puVar10 + 0x29) = 5;
        uVar20 = *(undefined2 *)((int)uVar22 + 0xa6);
        *(undefined1 *)((int)puVar10 + 0x149) = 3;
        *(undefined2 *)((int)puVar10 + 0x14a) = uVar20;
        fVar70 = pfVar7[8];
        *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x13c);
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x27);
        *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x134);
        *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x26);
        *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x14c);
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x29);
        *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x144);
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x28);
        *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 0x15c);
        *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x2b);
        *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x154);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x2a);
        mobyutil::CollDamageMobyDirect
                  (fVar70,fVar70,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                   puVar10[0xd]);
        iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[8]);
        auVar65 = ZEXT416(5);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        if (iVar18 != 0) {
          auVar65 = ZEXT416(5);
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          if (*(short *)(iVar18 + 4) == 1) {
            auVar65 = ZEXT416(1);
            auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          }
        }
        auVar66 = vectorConvertFromSignedFixedPointWord(auVar65,0);
        auVar65 = ZEXT416(0xffffffff);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        auVar67 = vectorShiftLeftIntegerWord(auVar65,auVar65);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar65 = vectorAddFloatingPoint(auVar66,auVar69);
        auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar65,auVar67);
        auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
        auVar65 = vectorSplatHalfWord(auVar65,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar65,0x44,uVar21);
        *(undefined2 *)(pfVar7 + 0x11) = uVar20;
      }
      fVar71 = GameCamera.posY;
      fVar70 = pfVar7[0xe];
      if (((fVar70 != 0.0) && (*(short *)((int)pfVar7 + 0x42) == 0)) &&
         (*(short *)((int)pfVar7 + 0x46) == 0)) {
        fVar2 = *(float *)((int)fVar70 + 0x10) - GameCamera.posX;
        *(float *)(puVar10 + 0x1c) = fVar2;
        fVar71 = *(float *)((int)fVar70 + 0x14) - fVar71;
        dVar61 = (double)(float)(dVar37 * dVar37 + (double)(fVar2 * fVar2 + fVar71 * fVar71));
        dVar63 = dVar37;
        dVar60 = dVar37;
        if ((double)(float)SQRT(dVar61) != dVar37) {
          dVar63 = 1.0 / SQRT(dVar61);
          dVar60 = (double)puVar10[0x7e];
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          dVar63 = (double)(float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 -
                                                   dVar60) * (double)(float)(dVar58 * dVar63) +
                                  dVar63);
          fVar70 = (float)(-(double)(float)((double)(float)(dVar61 * dVar63) * dVar63 - dVar60) *
                           (double)(float)(dVar58 * dVar63) + dVar63);
          dVar60 = (double)(fVar2 * fVar70);
          dVar63 = (double)(fVar71 * fVar70);
        }
        uVar22 = puVar10[0x87];
        *(float *)(puVar10 + 0x1c) = (float)dVar60;
        *(float *)((int)puVar10 + 0xe4) = (float)dVar63;
        *(undefined4 *)(puVar10 + 0x1d) = 0x3f800000;
        *(undefined4 *)((int)puVar10 + 0xec) = 0x45afdf66;
        mobyutil::SetCollDamIn
                  ((double)*(float *)(puVar10 + 0x89),uVar14 - 0x430,uVar22,0x210000,0x3f800000,
                   uVar14 - 0x4b0);
        *(undefined1 *)(puVar10 + 0x2f) = 5;
        uVar20 = *(undefined2 *)((int)uVar22 + 0xa6);
        *(undefined1 *)((int)puVar10 + 0x179) = 3;
        *(undefined2 *)((int)puVar10 + 0x17a) = uVar20;
        fVar70 = pfVar7[0xe];
        *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x16c);
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0x2d);
        *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x164);
        *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0x2c);
        *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x17c);
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x2f);
        *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x174);
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x2e);
        *(undefined4 *)((int)puVar10 + 0x6c) = *(undefined4 *)((int)puVar10 + 0x18c);
        *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x31);
        *(undefined4 *)((int)puVar10 + 100) = *(undefined4 *)((int)puVar10 + 0x184);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x30);
        mobyutil::CollDamageMobyDirect
                  (fVar70,fVar70,puVar10[8],puVar10[9],puVar10[10],puVar10[0xb],puVar10[0xc],
                   puVar10[0xd]);
        iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar7[0xe]);
        auVar65 = ZEXT416(5);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        if (iVar18 != 0) {
          auVar65 = ZEXT416(5);
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          if (*(short *)(iVar18 + 4) == 1) {
            auVar65 = ZEXT416(1);
            auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          }
        }
        auVar66 = vectorConvertFromSignedFixedPointWord(auVar65,0);
        auVar65 = ZEXT416(0xffffffff);
        auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
        auVar67 = vectorShiftLeftIntegerWord(auVar65,auVar65);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar65 = vectorAddFloatingPoint(auVar66,auVar69);
        auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar65,auVar67);
        auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
        auVar65 = vectorSplatHalfWord(auVar65,1);
        uVar20 = storeVectorElementHalfWordIndexed(auVar65,0x46,uVar21);
        *(undefined2 *)((int)pfVar7 + 0x46) = uVar20;
      }
      uVar26 = puVar10[0x83];
      uVar22 = uVar26;
      uVar15 = uVar26;
      do {
        if ((int)uVar26 < 2) {
          fVar8 = *pfVar7;
          fVar2 = pfVar7[1];
          fVar71 = pfVar7[2];
          fVar70 = pfVar7[3];
          dVar63 = 0.4000000059604645;
        }
        else {
          fVar8 = pfVar7[4];
          fVar2 = pfVar7[5];
          fVar71 = pfVar7[6];
          fVar70 = pfVar7[7];
          dVar63 = dVar58;
        }
        dVar41 = (double)fVar8;
        dVar60 = (double)fVar2;
        dVar52 = (double)fVar71;
        dVar61 = (double)fVar70;
        iVar19 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_010a0800) + uVar15 & 0xffffffff);
        iVar18 = (int)uVar15;
        iVar17 = (int)uVar22;
        if (iVar19 == 0) {
          lVar24 = uVar14 - 0x3f0;
          iVar19 = 1;
          uVar40 = ZEXT48(&DAT_010a06c0) + uVar22 & 0xffffffff;
          uVar48 = uVar22 + 0x10a06d0 & 0xffffffff;
          uVar25 = uVar40;
          lVar33 = lVar24;
          uVar27 = uVar48;
          lVar16 = lVar1;
          do {
            pfVar32 = (float *)uVar27;
            pfVar31 = (float *)uVar25;
            pfVar36 = (float *)lVar33;
            *pfVar36 = *pfVar32 - *pfVar31;
            pfVar36[1] = pfVar32[1] - pfVar31[1];
            pfVar36[2] = pfVar32[2] - pfVar31[2];
            pfVar36[3] = pfVar32[3];
            dVar63 = (double)mobyutil::MB_randRangeSigned(dVar37,dVar59);
            iVar12 = (int)lVar16;
            *(float *)(iVar12 + 0x1a0) = (float)((double)*(float *)(iVar12 + 0x1a0) + dVar63);
            dVar63 = (double)mobyutil::MB_randRangeSigned(dVar37,dVar59);
            *(float *)(iVar12 + 0x1a4) = (float)((double)*(float *)(iVar12 + 0x1a4) + dVar63);
            dVar63 = (double)mobyutil::MB_randRangeSigned(dVar37,dVar59);
            iVar19 = iVar19 + 1;
            lVar33 = lVar33 + 0x10;
            uVar27 = uVar27 + 0x10;
            uVar25 = uVar25 + 0x10;
            *(float *)(iVar12 + 0x1a8) = (float)((double)*(float *)(iVar12 + 0x1a8) + dVar63);
            lVar16 = lVar16 + 0x10;
          } while (iVar19 < 5);
          lVar16 = 4;
          *(float *)(&DAT_010a06c0 + iVar17) = (float)dVar41;
          *(float *)(iVar17 + 0x10a06c4) = (float)dVar60;
          *(float *)(iVar17 + 0x10a06c8) = (float)dVar52;
          *(float *)(iVar17 + 0x10a06cc) = (float)dVar61;
          sVar5 = *(short *)((int)&DAT_010a0800 + iVar18);
          do {
            pfVar31 = (float *)uVar40;
            pfVar32 = (float *)lVar24;
            pfVar36 = (float *)uVar48;
            *pfVar36 = *pfVar31 + *pfVar32;
            pfVar36[1] = pfVar31[1] + pfVar32[1];
            lVar24 = lVar24 + 0x10;
            pfVar36[2] = pfVar31[2] + pfVar32[2];
            uVar40 = uVar40 + 0x10;
            pfVar36[3] = pfVar31[3];
            uVar48 = uVar48 + 0x10;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar63 = 32.0;
          sVar6 = *(short *)((int)&DAT_010a0818 + iVar18);
          if (sVar6 < sVar5) {
            dVar60 = (double)fastfunc::FastIntToDouble((longlong)sVar5 - (longlong)sVar6);
            puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
            dVar61 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x454));
            uVar20 = fastfunc::FastDoubleToInt
                               ((double)(float)((double)(float)((double)puVar10[0x7e] -
                                                               (double)(float)(dVar60 / dVar61)) *
                                               dVar63));
            *(undefined2 *)((int)&DAT_010a0808 + iVar18) = uVar20;
          }
          else {
            dVar60 = (double)fastfunc::FastIntToDouble((longlong)sVar6 - (longlong)sVar5);
            puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
            dVar61 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x454));
            uVar20 = fastfunc::FastDoubleToInt
                               ((double)(float)((double)(float)((double)puVar10[0x7e] -
                                                               (double)(float)(dVar60 / dVar61)) *
                                               dVar63));
            *(undefined2 *)((int)&DAT_010a0808 + iVar18) = uVar20;
          }
        }
        else {
          auVar65 = ZEXT416(0xfffffff0);
          auVar66 = loadVectorLeftIndexed(uVar15,0x10a0810);
          auVar66 = vectorShiftRightAlgebraicWord
                              (auVar66,auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60
                              );
          auVar65 = ZEXT416(0xffffffff);
          auVar67 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = vectorConvertFromSignedFixedPointWord(auVar66,0);
          auVar66 = vectorShiftLeftIntegerWord(auVar67,auVar67);
          auVar67 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar40 = puVar10[0x83];
          auVar65 = vectorAddFloatingPoint(auVar65,auVar69);
          auVar65 = vectorMultiplyAddFloatingPoint(auVar67,auVar65,auVar66);
          auVar65 = vectorConvertToSignedFixedPointWordSaturate(auVar65,0);
          auVar65 = vectorSplatHalfWord(auVar65,1);
          uVar20 = storeVectorElementHalfWordIndexed(auVar65,uVar15,0x10a0800);
          *(undefined2 *)((int)&DAT_010a0800 + iVar18) = uVar20;
          *(short *)((int)&DAT_010a0808 + iVar18) = (short)uVar40;
          dVar44 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
          dVar55 = 0.1745329201221466;
          dVar47 = (double)mobyutil::MB_randRangeFloat(-1.0471976,0.17453292);
          *(undefined4 *)((int)puVar10 + 0xac) = *(undefined4 *)((int)puVar10 + 0x9c);
          *(float *)(puVar10 + 0x14) = (float)((double)*(float *)(puVar10 + 0x12) * dVar63);
          *(float *)((int)puVar10 + 0xa4) =
               (float)((double)*(float *)((int)puVar10 + 0x94) * dVar63);
          *(float *)(puVar10 + 0x15) = (float)((double)*(float *)(puVar10 + 0x13) * dVar63);
          mobyutil::MB_RotateQuatAxisAngle((float)dVar47,local_4f0,local_4f0);
          mobyutil::MB_RotateQuatAxisAngle((float)dVar44,local_4f0,local_4f0);
          iVar18 = 2;
          *(float *)(&DAT_010a06c0 + iVar17) = (float)dVar41;
          *(float *)(iVar17 + 0x10a06c4) = (float)dVar60;
          *(float *)(iVar17 + 0x10a06c8) = (float)dVar52;
          *(float *)(iVar17 + 0x10a06cc) = (float)dVar61;
          dVar44 = (double)puVar10[0x7e];
          uVar40 = uVar22 + 0x10a06d0 & 0xffffffff;
          uVar48 = uVar22 + 0x10a06e0 & 0xffffffff;
          *(float *)(iVar17 + 0x10a06d0) = (float)(dVar41 + (double)*(float *)(puVar10 + 0x14));
          *(float *)(iVar17 + 0x10a06d4) = (float)(dVar60 + (double)*(float *)((int)puVar10 + 0xa4))
          ;
          fVar70 = *(float *)(puVar10 + 0x15);
          *(float *)(iVar17 + 0x10a06dc) = (float)dVar61;
          *(float *)(iVar17 + 0x10a06d8) = (float)(dVar52 + (double)fVar70);
          dVar63 = 0.9599310755729675;
          do {
            fVar71 = GameCamera.posZ;
            fVar70 = GameCamera.posY;
            pfVar31 = (float *)uVar40;
            *(float *)(puVar10 + 0x1e) = *pfVar31 - GameCamera.posX;
            *(float *)((int)puVar10 + 0xf4) = pfVar31[1] - fVar70;
            *(float *)(puVar10 + 0x1f) = pfVar31[2] - fVar71;
            *(float *)((int)puVar10 + 0xfc) = pfVar31[3];
            dVar60 = (double)mobyutil::MB_randRangeFloat((float)dVar55,(float)dVar63);
            dVar60 = dVar60 * dVar44;
            dVar44 = -dVar44;
            mobyutil::MB_RotateQuatAxisAngle((float)dVar60,local_4f0,local_4f0);
            iVar18 = iVar18 + 1;
            pfVar36 = (float *)uVar48;
            *pfVar36 = *pfVar31 + *(float *)(puVar10 + 0x14);
            pfVar36[1] = pfVar31[1] + *(float *)((int)puVar10 + 0xa4);
            pfVar36[2] = pfVar31[2] + *(float *)(puVar10 + 0x15);
            uVar40 = uVar40 + 0x10;
            pfVar36[3] = pfVar31[3];
            uVar48 = uVar48 + 0x10;
          } while (iVar18 < 5);
        }
        uVar26 = uVar26 + 1;
        uVar15 = uVar15 + 2;
        uVar22 = uVar22 + 0x50;
      } while ((int)uVar26 < 4);
      dVar60 = 1.0471975803375244;
      dVar61 = (double)*(float *)((int)puVar10 + 0x44c);
      dVar63 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3ff0c15240000000);
      dVar60 = (double)mobyutil::MB_randRangeFloat(-0.5235988,(float)dVar60);
      fVar70 = DAT_0071f408 * DAT_007b7854;
      *(undefined4 *)((int)puVar10 + 0xac) = *(undefined4 *)((int)puVar10 + 0x9c);
      *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x12) * fVar70;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0x94) * fVar70;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x13) * fVar70;
      mobyutil::MB_RotateQuatAxisAngle((float)dVar60,local_4f0,local_4f0);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar63,local_4f0,local_4f0);
      mobyutil::MB_randRange(1,8);
      mobyutil::MB_randInt(2);
      dVar63 = (double)mobyutil::MB_randRangeFloat(0.2,0.6);
      dVar60 = 15.5;
      puVar10[0x8a] = (longlong)(int)(animationSpeed * 15.5);
      partupd::SpawnPart_53
                ((double)(float)(dVar63 * dVar61),dVar63,dVar37,uVar21,
                 *(undefined4 *)((int)puVar10 + 0x454));
      puVar10[0x8a] = (longlong)(int)((double)animationSpeed * dVar60);
      dVar60 = 0.15000000596046448;
      partupd::SpawnPart_53
                ((double)(float)(dVar63 * 0.15000000596046448),(double)(float)(dVar63 * dVar58),
                 dVar37,uVar21,*(undefined4 *)((int)puVar10 + 0x454));
      mobyutil::MB_randRange(1,8);
      mobyutil::MB_randInt(2);
      dVar63 = (double)mobyutil::MB_randRangeFloat((float)dVar60,3.0);
      puVar10[0x8a] = (longlong)(int)(animationSpeed * 12.5);
      partupd::SpawnPart_53
                ((double)(float)(dVar63 * dVar59),dVar63,dVar37,uVar21 + 0x10,
                 *(undefined4 *)((int)puVar10 + 0x454));
      return;
    }
  } while( true );
}



//==== 002b63a8  ns=mobyupdate_helpers  size=0x244
// sig: undefined M177_002b63a8(void)
// callers(1): 002b6630 mobyupdate_unsorted::UpdateMoby_177
// callees(0): 

void mobyupdate_helpers::M177_002b63a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined8 in_r0;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  pfVar12 = *(float **)(param_1 + 0x78);
  if (DAT_007b77d0 != 0) {
    fVar2 = pfVar12[5] - pfVar12[1];
    DAT_010a0240 = *pfVar12;
    fVar3 = pfVar12[4] - DAT_010a0240;
    auVar16 = loadVectorLeftIndexed(0x7850,0x7b0000);
    DAT_007b77d0 = 0;
    fVar4 = pfVar12[6] - pfVar12[2];
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    DAT_010a0824 = 0;
    auVar16 = loadVectorLeftIndexed(in_r0,0x2b639c);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar17 = vectorAddFloatingPoint
                        (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar16 = ZEXT416(0xffffffff);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar17,auVar16);
    fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    pfVar11 = &DAT_010a0240;
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010a0820 = storeVectorElementWordIndexed
                             (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x820,
                              0x10a0000);
    PTR_DAT_007b7824 = &DAT_007f2020;
    fVar1 = 0.0;
    DAT_010a0244 = pfVar12[1];
    DAT_010a0248 = pfVar12[2];
    DAT_010a024c = pfVar12[3];
    lVar15 = 0x13;
    puVar14 = &DAT_010a04c4;
    puVar13 = &DAT_010a0654;
    pfVar12 = (float *)&DAT_010a0250;
    fVar6 = (DAT_007b77d4 * 0.05) / fVar5;
    puVar10 = &DAT_010a0520;
    fVar8 = fVar1;
    if (0.0 - fVar5 < 0.0) {
      fVar8 = fVar4 * fVar6;
    }
    fVar7 = fVar1;
    if (0.0 - fVar5 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (0.0 - fVar5 < 0.0) {
      fVar1 = fVar3 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar8 = fVar4 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar1 = fVar3 * fVar6;
    }
    do {
      *pfVar12 = *pfVar11 + fVar1;
      pfVar12[1] = pfVar11[1] + fVar7;
      pfVar12[2] = pfVar11[2] + fVar8;
      pfVar9 = pfVar11 + 3;
      pfVar11 = pfVar11 + 4;
      pfVar12[3] = *pfVar9;
      *puVar14 = 0;
      puVar10[3] = 0;
      pfVar12 = pfVar12 + 4;
      puVar10[2] = 0;
      puVar14 = puVar14 + 1;
      puVar10[1] = 0;
      *puVar10 = 0;
      *puVar13 = 0;
      puVar10 = puVar10 + 4;
      puVar13 = puVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    DAT_010a0800 = 0xffff;
    DAT_010a0802 = 0xffff;
    DAT_010a0804 = 0xffff;
    DAT_010a0806 = 0xffff;
    DAT_010a0810 = 8;
    DAT_010a0818 = 4;
    DAT_010a0812 = 4;
    DAT_010a081a = 2;
    DAT_010a0814 = 8;
    DAT_010a081c = 4;
    DAT_010a0816 = 4;
    DAT_010a081e = 2;
    DAT_010a06a4 = 0;
    DAT_010a06a8 = 0;
    DAT_010a06ac = 0;
  }
  return;
}



//==== 002b6630  ns=mobyupdate_unsorted  size=0x1198
// sig: undefined UpdateMoby_177(MobyInstance * moby)
// callers(0): 
// callees(19): 0006d7e0 draw::RegisterPostDraw; 0007b310 help::Help_QueueMessage; 000855b8 hero::Hero_EndFiringAnim; 0008e0f4 hero::Hero_GetWeaponAmmo; 00099ea8 hero::Hero_PlayFiringAnim; 000aa258 hero::hero_ConsumeAmmo; 000da308 lights::CreatePointLight3; 000da9e8 lights::DeletePointLight; 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002b4818 mobyupdate_helpers::M177_002b4818; 002b63a8 mobyupdate_helpers::M177_002b63a8; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble
// strings: 00a1000c: 'None' | 002b6604: '?333?' (raw)

/* Moby 177 */

void mobyupdate_unsorted::UpdateMoby_177(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  Vec4 *pVVar10;
  MobyInstance *moby_00;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  ushort uVar17;
  ulonglong uVar18;
  CONTROLLER_INPUT CVar20;
  int iVar21;
  float fVar22;
  MobyInstance *moby_01;
  longlong lVar19;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar19 = uVar18 - 0x130;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar18;
  puVar13[0x28] = in_LR;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x1d] = unaff_r25;
  puVar13[0x21] = unaff_r29;
  puVar13[0x22] = unaff_r30;
  pVVar10 = (Vec4 *)moby->pVar;
  uVar29 = ZEXT48(pVVar10);
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar16 = DAT_0096ad94;
  CVar20 = g_buttonsPressedThisFrame & DAT_0096ad80;
  puVar13[0x1f] = unaff_r27;
  puVar13[0x1e] = unaff_r26;
  puVar13[0x1c] = unaff_r24;
  if ((CVar20 != 0) && (DAT_0096bd8c == '\0')) {
    pVVar10[2].y = 0.8;
  }
  uVar24 = ZEXT48(&hero::g_heroTweakers);
  bVar15 = false;
  DAT_0072240c = 0x3f666666;
  iVar21 = hero::Hero_GetWeaponAmmo(-1);
  if ((((CHAR_ARRAY_00a1000c._1032_2_ == 0) && (CHAR_ARRAY_00a0feec._208_2_ == 0)) &&
      (2 < DAT_0096bd95)) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
    help::Help_QueueMessage(STR_TO_USE_THE_TESLA_0x4E30,0x81);
  }
  if ((((g_downButtons & DAT_0096ad80) == 0) || (moby->state == '\0' || moby->state == '\x04')) ||
     ((DAT_0096bd8c != '\0' || (g_heroState == MOVEMENT_LOCKED)))) {
    pVVar10[2].x = 0.0;
    pVVar10[3].z = 0.0;
    *(undefined2 *)&pVVar10[4].x = 0;
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
  }
  else if (pVVar10[2].w == 0.0) {
    if (0 < iVar21) {
      iVar21 = fastfunc::FastDecTimerS16(uVar29 + 0x3c);
      if (iVar21 != 0) {
        fastfunc::FastDecTimerS16(uVar29 + 0x44);
        fastfunc::FastDecTimerS16(uVar29 + 0x46);
        hero::hero_ConsumeAmmo(-1,1);
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        uVar24 = 0xfffffffffffff410;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(in_LR,0x2b65ec);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = vectorSplatHalfWord(auVar34,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar34,0x3c,uVar29);
        *(undefined2 *)&pVVar10[3].w = uVar11;
      }
      if (pVVar10[3].x == -NAN) {
        fVar22 = (float)lights::CreatePointLight3
                                  (0x401e000000000000,0,(Vec4 *)&moby->pos,ZEXT48(&DAT_002b65ec),
                                   uVar24,0);
        pVVar10[3].x = fVar22;
      }
      else {
        fVar22 = pVVar10[3].y;
        puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
        if ((int)fVar22 < *(int *)((int)puVar13 + 0xcc)) {
          pVVar10[3].y = (float)((int)fVar22 + 1);
        }
      }
      fVar22 = pVVar10[2].x;
      bVar15 = true;
      if (fVar22 != 0.0) {
        fVar4 = *(float *)((int)fVar22 + 0x10) - g_heroPosition.x;
        fVar22 = *(float *)((int)fVar22 + 0x14) - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar3 = ABS(fVar22);
        *(float *)((int)puVar13 + 0x7c) = fVar4;
        *(float *)(puVar13 + 0x10) = fVar22;
        fVar6 = g_heroRotation.z;
        *(float *)((int)puVar13 + 0x84) = fVar5 - fVar3;
        fVar22 = 0.0;
        uVar24 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar13 + 0x7c));
        if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar13 + 0x10));
        if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar18 - 0x120;
          lVar27 = uVar18 - 0x88;
          lVar25 = uVar18 - 0x78;
          lVar30 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xb4) = fVar4;
          *(float *)((int)puVar13 + 0xac) = fVar4;
          *(float *)(puVar13 + 0x16) = fVar4;
          *(float *)(puVar13 + 0x15) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar5;
          *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar4;
          *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0xa8) = *(float *)((int)lVar26 + 0x98) * fVar4 * fVar4;
            iVar21 = (int)lVar27;
            lVar26 = lVar26 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar25 = uVar18 - 0x88;
          pfVar23 = (float *)&DAT_007358e0;
          lVar26 = lVar19;
          lVar27 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar26 + 0xa8) = *(float *)((int)lVar26 + 0xa8) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar27 = 2;
          lVar26 = lVar19;
          do {
            iVar21 = (int)lVar26;
            iVar28 = (int)lVar25;
            lVar26 = lVar26 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar22 = fVar22 + *(float *)(iVar21 + 0xa8) + *(float *)(iVar28 + 4) +
                     *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar22 = (fVar22 + 0.7853982) * fVar8 + fVar3;
        }
        dVar31 = (double)fastfunc::FastSubRots(fVar6,fVar22);
        if (((2.0943000316619873 < dVar31) ||
            (fVar22 = pVVar10[2].x, *(char *)((int)fVar22 + 0x31) == '\0')) ||
           (fVar4 = *(float *)((int)fVar22 + 0x14) - g_heroPosition.y,
           fVar5 = *(float *)((int)fVar22 + 0x10) - g_heroPosition.x,
           fVar22 = *(float *)((int)fVar22 + 0x18) - g_heroPosition.z,
           20.0 < SQRT(fVar22 * fVar22 + fVar5 * fVar5 + fVar4 * fVar4))) {
          pVVar10[2].x = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
        }
      }
      moby_01 = (MobyInstance *)pVVar10[3].z;
      if (moby_01 != (MobyInstance *)0x0) {
        fVar22 = (moby_01->pos).x - g_heroPosition.x;
        fVar4 = (moby_01->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar22);
        fVar3 = ABS(fVar4);
        *(float *)(puVar13 + 0xe) = fVar22;
        *(float *)((int)puVar13 + 0x74) = fVar4;
        fVar6 = g_heroRotation.z;
        *(float *)(puVar13 + 0xf) = fVar5 - fVar3;
        fVar22 = 0.0;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0xe));
        if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar13 + 0x74));
        if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar18 - 0x120;
          lVar25 = uVar18 - 0x98;
          lVar27 = uVar18 - 0xa8;
          lVar30 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x94) = fVar4;
          *(float *)((int)puVar13 + 0x8c) = fVar4;
          *(float *)(puVar13 + 0x12) = fVar4;
          *(float *)(puVar13 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar5;
          *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar4;
          *(float *)((int)puVar13 + 0x94) = *(float *)((int)puVar13 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0x88) = *(float *)((int)lVar26 + 0x78) * fVar4 * fVar4;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar25 = uVar18 - 0xa8;
          pfVar23 = (float *)&DAT_007358e0;
          lVar26 = lVar19;
          lVar27 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar26 + 0x88) = *(float *)((int)lVar26 + 0x88) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar26 = 2;
          do {
            iVar21 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            fVar22 = fVar22 + *(float *)(iVar21 + 0x88) + *(float *)(iVar28 + 4) +
                     *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          fVar22 = (fVar22 + 0.7853982) * fVar8 + fVar3;
        }
        dVar31 = (double)fastfunc::FastSubRots(fVar6,fVar22);
        if (((2.0943000316619873 < dVar31) ||
            (moby_01 = (MobyInstance *)pVVar10[3].z, moby_01->enabled == '\0')) ||
           (fVar22 = (moby_01->pos).y - g_heroPosition.y,
           fVar4 = (moby_01->pos).x - g_heroPosition.x, fVar5 = (moby_01->pos).z - g_heroPosition.z,
           20.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar22 * fVar22))) {
          moby_01 = (MobyInstance *)0x0;
          pVVar10[3].z = 0.0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        }
      }
      fVar22 = (moby->pos).x;
      pVVar10->x = fVar22;
      fVar4 = (moby->pos).y;
      pVVar10->y = fVar4;
      fVar5 = (moby->pos).z;
      pVVar10->z = fVar5;
      fVar3 = (moby->pos).w;
      pVVar10->w = fVar3;
      pVVar10[1].x = fVar22;
      fVar5 = fVar5 + 0.7;
      moby_00 = (MobyInstance *)pVVar10[2].x;
      pVVar10[1].y = fVar4;
      pVVar10[1].w = fVar3;
      pVVar10->z = fVar5;
      pVVar10[1].z = fVar5;
      if ((moby_00 == (MobyInstance *)0x0) || (*(short *)&pVVar10[4].x == 0)) {
        *(undefined2 *)&pVVar10[2].z = 0;
      }
      else {
        iVar28 = 0x32;
        *(short *)&pVVar10[2].z = *(short *)&pVVar10[2].z + 1;
        iVar21 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
        sVar9 = *(short *)&pVVar10[2].z;
        moby_01 = (MobyInstance *)pVVar10[3].z;
        if ((iVar21 != 0) && (*(short *)(iVar21 + 4) == 1)) {
          iVar28 = 5;
        }
        puVar13[0x19] = (longlong)iVar28;
        puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
        if (*(int *)((int)puVar13 + 0xcc) <= (int)sVar9) {
          pVVar10[2].x = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
        }
      }
      if ((moby_01 == (MobyInstance *)0x0) || (*(short *)((int)&pVVar10[4].x + 2) == 0)) {
        *(undefined2 *)((int)&pVVar10[2].z + 2) = 0;
      }
      else {
        iVar28 = 0x32;
        *(short *)((int)&pVVar10[2].z + 2) = *(short *)((int)&pVVar10[2].z + 2) + 1;
        iVar21 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_01);
        sVar9 = *(short *)((int)&pVVar10[2].z + 2);
        if ((iVar21 != 0) && (*(short *)(iVar21 + 4) == 1)) {
          iVar28 = 5;
        }
        puVar13[0x19] = (longlong)iVar28;
        puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
        if (*(int *)((int)puVar13 + 0xcc) <= (int)sVar9) {
          pVVar10[3].z = 0.0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        }
      }
      dVar33 = (double)pVVar10[2].y;
      dVar32 = (double)(DAT_0071f408 * 0.07);
      dVar31 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.teslaClaw);
      bVar1 = g_heroState == FIRST_PERSON_VIEW;
      fVar22 = (float)(dVar32 * (double)((float)(dVar31 * 6.0 + 12.0) - pVVar10[2].y) + dVar33);
      pVVar10[2].y = fVar22;
      fVar5 = GameCamera.orientMtx.forward.y;
      fVar4 = GameCamera.orientMtx.forward.x;
      if (bVar1) {
        fVar6 = GameCamera.orientMtx.forward.z * 1.2 + (moby->pos).z;
        pVVar10->z = fVar6;
        fVar3 = fVar4 * 1.2 + g_heroPosition.x;
        pVVar10->x = fVar3;
        fVar4 = fVar5 * 1.2 + g_heroPosition.y;
        pVVar10->y = fVar4;
        fVar7 = GameCamera.orientMtx.forward.z;
        fVar5 = GameCamera.orientMtx.forward.x * fVar22;
        fVar8 = GameCamera.orientMtx.forward.y * fVar22;
        pVVar10[1].w = pVVar10->w;
        pVVar10[1].x = fVar5 + fVar3;
        pVVar10[1].y = fVar8 + fVar4;
        pVVar10[1].z = fVar7 * fVar22 + fVar6;
      }
      else if (DAT_0096bfa8 == 1) {
        mobyfunc::GetBonePosition(moby,0,uVar29);
        fVar22 = pVVar10[2].y;
        fVar4 = (moby->transform).v1.x;
        fVar5 = (moby->transform).v1.y;
        fVar3 = (moby->transform).v1.z;
        fVar6 = pVVar10->x;
        fVar8 = pVVar10->y;
        fVar7 = pVVar10->z;
        pVVar10[1].w = pVVar10->w;
        pVVar10[1].x = fVar6 + -(fVar22 * fVar4);
        pVVar10[1].y = fVar8 + -(fVar22 * fVar5);
        pVVar10[1].z = fVar7 + -(fVar22 * fVar3);
      }
      else {
        mobyfunc::GetBonePosition(moby,0,uVar29);
        fVar7 = 0.0;
        fVar22 = pVVar10->x;
        fVar4 = pVVar10->y;
        fVar5 = pVVar10->z;
        fVar3 = pVVar10->w;
        fVar14 = SQRT(DAT_0096a328 * DAT_0096a328 +
                      DAT_0096a320 * DAT_0096a320 + DAT_0096a324 * DAT_0096a324);
        fVar6 = fVar7;
        fVar8 = fVar7;
        if (fVar14 != 0.0) {
          fVar7 = pVVar10[2].y / fVar14;
          fVar6 = DAT_0096a320 * fVar7;
          pVVar10[1].x = fVar6;
          fVar8 = DAT_0096a324 * fVar7;
          pVVar10[1].y = fVar8;
          fVar7 = DAT_0096a328 * fVar7;
        }
        pVVar10[1].w = fVar3;
        pVVar10[1].x = fVar22 + fVar6;
        pVVar10[1].y = fVar4 + fVar8;
        pVVar10[1].z = fVar5 + fVar7;
      }
      mobyupdate_helpers::M177_002b63a8(moby);
      mobyupdate_helpers::M177_002b4818(moby);
      draw::RegisterPostDraw(&PTR_M1772_002b8520_0070aec8,moby);
      iVar21 = sound::IsMobyPlayingSound(moby,(int)pVVar10[4].z);
      if (iVar21 == 0) {
        fVar22 = (float)sound::PlayMobySound(4,4,moby);
        pVVar10[4].z = fVar22;
      }
      goto LAB_002b71a4;
    }
    pVVar10[2].x = 0.0;
    pVVar10[3].z = 0.0;
    *(undefined2 *)&pVVar10[4].x = 0;
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
    *(undefined2 *)&pVVar10[4].y = 0;
    *(undefined2 *)((int)&pVVar10[4].y + 2) = 0;
  }
  DAT_007b77d0 = 1;
  if (0 < (int)pVVar10[3].y) {
    pVVar10[3].y = (float)((int)pVVar10[3].y + -1);
  }
  fVar22 = pVVar10[4].z;
  if (((fVar22 != -NAN) && (sound::g_SoundChannels[(int)fVar22].pMoby == moby)) &&
     (sound::g_SoundChannels[(int)fVar22].state != '\0')) {
    sound::sound_Kill((int)fVar22);
  }
  pVVar10[4].z = -NAN;
LAB_002b71a4:
  fVar22 = pVVar10[2].x;
  if (((fVar22 == 0.0) ||
      (*(char *)((int)fVar22 + 0x20) == -3 || *(char *)((int)fVar22 + 0x20) == -2)) ||
     ((*(ushort *)((int)fVar22 + 0x34) & 0x1000) == 0)) {
    *(undefined2 *)&pVVar10[4].x = 1;
  }
  fVar22 = pVVar10[3].z;
  if (((fVar22 == 0.0) ||
      (*(char *)((int)fVar22 + 0x20) == -3 || *(char *)((int)fVar22 + 0x20) == -2)) ||
     ((*(ushort *)((int)fVar22 + 0x34) & 0x1000) == 0)) {
    *(undefined2 *)((int)&pVVar10[4].x + 2) = 1;
  }
  iVar21 = DAT_00969e9c;
  fVar22 = animationSpeed;
  uVar2 = moby->state;
  if (uVar2 != '\x04') {
    if (uVar2 == '\x03') {
      if (((DAT_00964ae8 & DAT_0096ad80) != 0 || !bVar15) || (DAT_0096bd8c != '\0')) {
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = loadVectorLeftIndexed(0x1bc,0x969ce0);
        puVar13[0x19] = (longlong)(int)(animationSpeed * 70.5);
        if ((*(int *)((int)puVar13 + 0xcc) < iVar21) && (CHAR_ARRAY_00a0feec._208_2_ != -1)) {
          CHAR_ARRAY_00a0feec._208_2_ = CHAR_ARRAY_00a0feec._208_2_ + 1;
        }
        puVar13[0x19] = (longlong)update::g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0feec._210_2_;
        puVar13[0x19] = (longlong)(int)(fVar22 * ((float)(longlong)puVar13[0x19] + 0.5));
        iVar21 = *(int *)((int)puVar13 + 0xcc);
        if ((int)(uint)(ushort)uVar11 < iVar21 / 600) {
          sVar9 = (short)(iVar21 >> 0x1f);
          CHAR_ARRAY_00a0feec._210_2_ =
               ((short)(iVar21 / 600) + sVar9) -
               ((short)((short)(iVar21 / 0x2580000) + sVar9) >> 0xf);
        }
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        CHAR_ARRAY_00a0feec._212_4_ = CHAR_ARRAY_00a0feec._212_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
        auVar36 = loadVectorLeftIndexed(0x38,0x2b65ec);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar34 = ZEXT416(0xfffffff8);
        auVar37 = loadVectorLeftIndexed(0x20b5,0x969ce0);
        auVar34 = vectorShiftRightWord
                            (auVar37,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        auVar37._0_4_ = auVar34._0_4_ + 1;
        auVar37._8_8_ = auVar34._8_8_;
        auVar37._4_4_ = auVar34._4_4_ + 1;
        auVar39._0_8_ = auVar37._0_8_;
        auVar39._12_4_ = auVar34._12_4_;
        auVar39._8_4_ = auVar34._8_4_ + 1;
        auVar38._0_12_ = auVar39._0_12_;
        auVar38._12_4_ = auVar39._12_4_ + 1;
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar34 = vectorCompareGreaterThanSignedWord(auVar34,auVar35);
        auVar34 = vectorLogicalAnd(auVar38,auVar34);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xff;
        DAT_0096bd95 = storeVectorElementByteIndexed
                                 (auVar34 | auVar34 << 8 | auVar34 << 0x10 | auVar34 << 0x18 |
                                  auVar34 << 0x20 | auVar34 << 0x28 | auVar34 << 0x30 |
                                  auVar34 << 0x38 | auVar34 << 0x40 | auVar34 << 0x48 |
                                  auVar34 << 0x50 | auVar34 << 0x58 | auVar34 << 0x60 |
                                  auVar34 << 0x68 | auVar34 << 0x70 | auVar34 << 0x78,0x20b5,
                                  0x969ce0);
        pVVar10[2].x = 0.0;
        pVVar10[3].z = 0.0;
        *(undefined2 *)&pVVar10[4].x = 0;
        *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
        pVVar10[2].y = 0.0;
        hero::Hero_EndFiringAnim();
        moby->state = '\x01';
      }
    }
    else if (uVar2 == '\x01') {
      fastfunc::FastDecTimerS32(uVar29 + 0x2c);
      if (bVar15) {
        hero::Hero_PlayFiringAnim();
        moby->state = '\x03';
      }
      if (((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) {
        if (bVar15) {
          if (DAT_00a0fdbc != -1) {
            DAT_00a0fdbc = DAT_00a0fdbc + 1;
          }
          puVar13[0x19] = (longlong)update::g_GameFrameCount;
          uVar17 = DAT_00a0fdbe;
          puVar13[0x19] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x19] + 0.5));
          iVar21 = *(int *)((int)puVar13 + 0xcc);
          if ((int)(uint)uVar17 < iVar21 / 600) {
            sVar9 = (short)(iVar21 >> 0x1f);
            DAT_00a0fdbe = ((short)(iVar21 / 600) + sVar9) -
                           ((short)((short)(iVar21 / 0x2580000) + sVar9) >> 0xf);
          }
          DAT_00a0fdc0 = DAT_00a0fdc0 | 1 << (Level & 0x3f) | 0x80000000;
          hero::Hero_PlayFiringAnim();
          moby->state = '\x03';
        }
        else {
          pVVar10[2].x = 0.0;
          pVVar10[3].z = 0.0;
          *(undefined2 *)&pVVar10[4].x = 0;
          *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
          moby->state = '\x01';
          iVar21 = sound::PlayMobySound(0,0,moby);
          hero::Hero_EndFiringAnim(iVar21);
        }
      }
    }
    else if (uVar2 == '\0') {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x30,0x2b65ec);
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x2c,uVar29)
      ;
      *(undefined4 *)((uint)&pVVar10[2].w & 0xfffffffc) = uVar12;
      fVar22 = (float)lights::CreatePointLight3(0,0,pVVar10,0x2c,ZEXT48(&DAT_002b65ec),0);
      pVVar10[3].x = fVar22;
      DAT_007b77d0 = 1;
      moby->state = '\x01';
      pVVar10[3].z = 0.0;
      pVVar10[2].x = 0.0;
      *(undefined2 *)&pVVar10[4].x = 0;
      *(undefined2 *)((int)&pVVar10[4].x + 2) = 0;
      *(undefined2 *)((int)&pVVar10[3].w + 2) = 0x14;
      pVVar10[4].z = -NAN;
      *(undefined2 *)((int)&pVVar10[4].y + 2) = 0;
      *(undefined2 *)&pVVar10[4].y = 0;
    }
  }
  if (pVVar10[3].x != -NAN) {
    auVar34 = ZEXT416(0xffffffff);
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = ZEXT416(0xffffffff);
    auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = ZEXT416(0xffffffff);
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar34 = loadVectorLeftIndexed(0x3c,0x2b65ec);
    auVar35 = loadVectorLeftIndexed(0x640,0x969ce0);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = loadVectorLeftIndexed(0x644,0x969ce0);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar36);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
    auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar36 = loadVectorLeftIndexed(0x648,0x969ce0);
    auVar39 = loadVectorLeftIndexed(0x660,0x969ce0);
    auVar40 = loadVectorLeftIndexed(0x664,0x969ce0);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar38);
    auVar38 = loadVectorLeftIndexed(0x668,0x969ce0);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar35);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar34,auVar37);
    auVar39 = loadVectorLeftIndexed(0x80,0x969ce0);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar36);
    auVar36 = loadVectorLeftIndexed(0x84,0x969ce0);
    auVar38 = loadVectorLeftIndexed(0x88,0x969ce0);
    auVar35 = vectorAddFloatingPoint(auVar39,auVar35);
    auVar37 = vectorAddFloatingPoint(auVar36,auVar37);
    fVar22 = pVVar10[3].x;
    lVar19 = ZEXT48(PointLights) + (longlong)((int)pVVar10[3].x << 5);
    auVar36 = vectorAddFloatingPoint(auVar38,auVar34);
    lVar26 = ZEXT48(PointLights) + (longlong)((int)fVar22 << 5);
    lVar27 = ZEXT48(PointLights) + (longlong)((int)fVar22 << 5);
    auVar34 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x10,lVar19);
    *(undefined4 *)((int)lVar19 + 0x10) = uVar12;
    auVar34 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,lVar26);
    *(undefined4 *)((int)lVar26 + 0x14) = uVar12;
    fVar4 = pVVar10[3].y;
    uVar12 = storeVectorElementWordIndexed
                       (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x18,lVar27);
    *(undefined4 *)((int)lVar27 + 0x18) = uVar12;
    PointLights[(int)fVar22].pos.w = 7.5;
    dVar31 = (double)fastfunc::FastIntToDouble(fVar4);
    fVar4 = pVVar10[3].x;
    fVar22 = (float)(dVar31 / (double)(longlong)(animationSpeed * 10.5));
    PointLights[(int)fVar4].color.z = fVar22;
    PointLights[(int)fVar4].color.y = fVar22 * 0.7;
    PointLights[(int)fVar4].color.x = PointLights[(int)fVar4].color.y;
    if (iVar16 != 3) {
      return;
    }
    if (pVVar10[3].x != -NAN) {
      lights::DeletePointLight(pVVar10[3].x);
      pVVar10[3].x = -NAN;
    }
  }
  if ((iVar16 == 3) && (pVVar10[3].x == -NAN)) {
    moby->state = '\x04';
  }
  return;
}



//==== 002b77e8  ns=mobyupdate_helpers  size=0x538
// sig: undefined M1772_002b77e8(void)
// callers(1): 002b8520 mobyupdate_helpers::M1772_002b8520
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fe4f0 mobyutil::MB_randRangeSigned; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1772_002b77e8(int param_1)

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
  puVar10[0x24] = unaff_r30;
  pfVar26 = *(float **)(param_1 + 0x78);
  puVar10[0x25] = unaff_r31;
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
  fVar4 = pfVar26[1];
  fVar5 = *pfVar26;
  dVar30 = (double)GameCamera.posY;
  dVar28 = (double)GameCamera.posX;
  fVar1 = (float)(dVar30 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar5);
  dVar31 = (double)GameCamera.posZ;
  fVar6 = pfVar26[2];
  fVar3 = (float)(dVar31 - (double)fVar6);
  puVar10[0x1c] = uVar15;
  uVar7 = DAT_007b78d0;
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
  *(undefined4 *)((int)puVar10 + 0xbc) = DAT_007b78d0;
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
  puVar18 = &DAT_007b78b0;
  lVar25 = uVar14 - 0x130;
  dVar29 = (double)(float)((double)DAT_007b78d8 + dVar29);
  pfVar24 = (float *)&DAT_007b7870;
  puVar23 = &DAT_007b78b4;
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
  puVar13 = PTR_DAT_007b7824;
  *(undefined **)((int)puVar10 + 0xbc) = PTR_DAT_007b7824;
  *(undefined **)(puVar10 + 0x17) = puVar13;
  *(undefined **)((int)puVar10 + 0xb4) = puVar13;
  *(undefined **)(puVar10 + 0x16) = puVar13;
  dVar39 = (double)mobyutil::MB_randRangeSigned(dVar39,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar16 = 4;
  dVar39 = (double)(float)((double)DAT_007b78dc + dVar39);
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



//==== 002b7d30  ns=mobyupdate_helpers  size=0x7e4
// sig: undefined M1772_002b7d30(void)
// callers(1): 002b8520 mobyupdate_helpers::M1772_002b8520
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1772_002b7d30(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  undefined1 local_1d0 [144];
  undefined1 local_140 [152];
  
  draw::GetEffectTex(DAT_007b7864);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(DAT_007b7868);
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



//==== 002b8520  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M1772_002b8520(void)
// callers(0): 
// callees(2): 002b77e8 mobyupdate_helpers::M1772_002b77e8; 002b7d30 mobyupdate_helpers::M1772_002b7d30

void mobyupdate_helpers::M1772_002b8520(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010a06b4 = -(DAT_0071f408 * DAT_007b781c - DAT_010a06b4);
  if (DAT_010a06b4 <= -8.0) {
    DAT_010a06b4 = DAT_010a06b4 + 8.0;
  }
  M1772_002b7d30((double)DAT_007b7828,(double)DAT_007b782c,(double)DAT_007b785c,&DAT_010a0240,
                 DAT_007b7808,DAT_007b7810);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,(double)DAT_007b7860,&DAT_010a0380,
                 DAT_007b7830,DAT_007b7834);
  uVar1 = 0x3fc99999a0000000;
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,0x3fc99999a0000000,&DAT_010a06c0,
                 DAT_010a0808,DAT_010a0808);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a0710,DAT_010a080a,
                 DAT_010a080a);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a0760,DAT_010a080c,
                 DAT_010a080c);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a07b0,DAT_010a080e,
                 DAT_010a080e);
  M1772_002b77e8(param_1);
  return;
}



//==== 002b86fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1772_002b86fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1772_002b86fc(void)

{
  DAT_007b792c = 0x10000;
  return;
}



//==== 002b8748  ns=mobyupdate_helpers  size=0x954
// sig: undefined M1772_002b8748(void)
// callers(0): 
// callees(11): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor; 00502a64 fastfunc::FastVecSub; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1772_002b8748(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
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
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 uVar22;
  float *pfVar23;
  float *pfVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  undefined4 *puVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar29;
  ulonglong unaff_r28;
  float *pfVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar31;
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
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  double dVar46;
  ulonglong in_f21;
  double dVar47;
  ulonglong in_f22;
  double dVar48;
  ulonglong in_f23;
  double dVar49;
  ulonglong in_f24;
  double dVar50;
  ulonglong in_f25;
  double dVar51;
  ulonglong in_f26;
  double dVar52;
  ulonglong in_f27;
  double dVar53;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  double dVar55;
  ulonglong in_f30;
  double dVar56;
  ulonglong in_f31;
  double dVar57;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x220;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar18;
  puVar7[0x46] = in_LR;
  puVar7[0x37] = in_f19;
  puVar7[0x38] = in_f20;
  puVar7[0x39] = in_f21;
  puVar7[0x3a] = in_f22;
  puVar7[0x3b] = in_f23;
  puVar7[0x3c] = in_f24;
  puVar7[0x3d] = in_f25;
  puVar7[0x3e] = in_f26;
  puVar7[0x3f] = in_f27;
  puVar7[0x40] = in_f28;
  puVar7[0x41] = in_f29;
  puVar7[0x42] = in_f30;
  puVar7[0x43] = in_f31;
  puVar7[0x36] = unaff_r31;
  puVar7[0x35] = unaff_r30;
  pfVar6 = *(float **)(param_1 + 0x78);
  puVar7[0x34] = unaff_r29;
  puVar7[0x33] = unaff_r28;
  puVar7[0x32] = unaff_r27;
  puVar7[0x31] = unaff_r26;
  puVar7[0x30] = unaff_r25;
  puVar7[0x2f] = unaff_r24;
  puVar7[0x2e] = unaff_r23;
  puVar7[0x2d] = unaff_r22;
  uVar19 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar19);
  iVar29 = 0;
  ViewContext.farClip = 8.192e+06;
  iVar31 = 0;
  pfVar6[5] = -8000.0;
  do {
    fVar15 = GameCamera.posZ;
    fVar14 = GameCamera.posY;
    fVar4 = GameCamera.posX;
    fVar5 = *pfVar6 - GameCamera.posX;
    fVar3 = *pfVar6 - pfVar6[4];
    fVar8 = pfVar6[1] - pfVar6[5];
    fVar13 = pfVar6[2] - pfVar6[6];
    *(float *)(puVar7 + 0xe) = fVar5;
    fVar9 = pfVar6[1] - fVar14;
    *(float *)((int)puVar7 + 0x74) = fVar9;
    fVar11 = fVar3 * fVar9 - fVar8 * fVar5;
    fVar10 = pfVar6[2] - fVar15;
    fVar12 = fVar8 * fVar10 - fVar13 * fVar9;
    *(float *)(puVar7 + 0xf) = fVar10;
    *(float *)((int)puVar7 + 0x7c) = pfVar6[3];
    fVar9 = fVar13 * fVar5 - fVar3 * fVar10;
    fVar4 = pfVar6[4] - fVar4;
    *(float *)(puVar7 + 0x10) = fVar4;
    fVar14 = pfVar6[5] - fVar14;
    *(float *)((int)puVar7 + 0x84) = fVar14;
    fVar17 = 0.0;
    fVar15 = pfVar6[6] - fVar15;
    *(undefined4 *)((int)puVar7 + 0x7c) = 0;
    fVar5 = *(float *)((int)&DAT_007b7a18 + iVar31);
    fVar16 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9);
    *(undefined4 *)((int)puVar7 + 0x8c) = 0;
    fVar10 = fVar3 * fVar14 - fVar8 * fVar4;
    fVar8 = fVar8 * fVar15 - fVar13 * fVar14;
    fVar3 = fVar13 * fVar4 - fVar3 * fVar15;
    *(float *)(puVar7 + 0x10) = fVar8;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar10;
    fVar5 = fVar5 / fVar16;
    fVar4 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar3 * fVar3);
    fVar13 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar13 = fVar12 * fVar5;
    }
    fVar14 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar14 = fVar9 * fVar5;
    }
    fVar15 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar15 = fVar11 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar13 = fVar12 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar14 = fVar9 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar15 = fVar11 * fVar5;
    }
    *(float *)(puVar7 + 0xe) = fVar13;
    *(float *)((int)puVar7 + 0x74) = fVar14;
    *(float *)(puVar7 + 0xf) = fVar15;
    fVar9 = pfVar6[10] / fVar4;
    fVar5 = fVar17;
    if (0.0 - fVar4 < 0.0) {
      fVar5 = fVar8 * fVar9;
    }
    fVar11 = fVar17;
    if (0.0 - fVar4 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar17 = fVar10 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar5 = fVar8 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar17 = fVar10 * fVar9;
    }
    *(float *)(puVar7 + 0x10) = fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar11;
    *(float *)(puVar7 + 0x11) = fVar17;
    uVar20 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    puVar7[0x2a] = uVar20;
    uVar20 = FUN_00502f08(0,0,0,0,0,0);
    puVar7[0x28] = uVar20;
    uVar20 = idol_draw::PackCmd(0,2,0,1,0x80);
    puVar7[0x2b] = uVar20;
    uVar2 = DAT_007b7950;
    pfVar23 = (float *)&DAT_00655a64;
    *(undefined4 *)((int)puVar7 + 0x11c) = DAT_007b7950;
    *(undefined4 *)(puVar7 + 0x23) = uVar2;
    puVar28 = &DAT_00655a68;
    *(undefined4 *)((int)puVar7 + 0x114) = uVar2;
    *(undefined4 *)(puVar7 + 0x22) = uVar2;
    lVar26 = uVar18 - 0x100;
    lVar27 = uVar18 - 0xfc;
    lVar32 = 2;
    lVar21 = lVar1;
    puVar25 = puVar28;
    pfVar24 = pfVar23;
    do {
      uVar2 = *puVar25;
      *(float *)((int)lVar21 + 0x120) = *pfVar24;
      fVar5 = pfVar24[2];
      *(undefined4 *)((int)lVar21 + 0x124) = uVar2;
      uVar2 = puVar25[2];
      pfVar24 = pfVar24 + 4;
      *(float *)((int)lVar26 + 8) = fVar5;
      puVar25 = puVar25 + 4;
      *(undefined4 *)((int)lVar27 + 8) = uVar2;
      lVar26 = lVar26 + 0x10;
      lVar27 = lVar27 + 0x10;
      lVar21 = lVar21 + 0x10;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    fastfunc::FastVecSub(uVar18 - 400,pfVar6,uVar18 - 0x1b0);
    *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)(puVar7 + 0x12);
    *(undefined4 *)((int)puVar7 + 0xd4) = *(undefined4 *)((int)puVar7 + 0x94);
    *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(puVar7 + 0x13);
    *(undefined4 *)((int)puVar7 + 0xdc) = *(undefined4 *)((int)puVar7 + 0x9c);
    fastfunc::FastVecAdd(uVar18 - 0x180,pfVar6,uVar18 - 0x1b0);
    *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(puVar7 + 0x14);
    *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)((int)puVar7 + 0xa4);
    *(undefined4 *)(puVar7 + 0x1d) = *(undefined4 *)(puVar7 + 0x15);
    *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)((int)puVar7 + 0xac);
    fastfunc::FastVecSub(uVar18 - 0x170,pfVar6 + 4,uVar18 - 0x1a0);
    *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)((int)puVar7 + 0xb4);
    *(undefined4 *)(puVar7 + 0x1f) = *(undefined4 *)(puVar7 + 0x17);
    *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)((int)puVar7 + 0xbc);
    fastfunc::FastVecAdd(uVar18 - 0x160,pfVar6 + 4,uVar18 - 0x1a0);
    *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(puVar7 + 0x18);
    *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)((int)puVar7 + 0xc4);
    *(undefined4 *)(puVar7 + 0x21) = *(undefined4 *)(puVar7 + 0x19);
    *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)((int)puVar7 + 0xcc);
    uVar20 = draw::GetEffectTex(*(undefined4 *)((int)&DAT_007b79e0 + iVar31));
    puVar7[0x29] = uVar20;
    lVar26 = 4;
    fVar5 = *(float *)((int)&DAT_007b79f4 + iVar31);
    lVar21 = lVar1;
    do {
      fVar3 = *pfVar23;
      uVar2 = *puVar28;
      pfVar23 = pfVar23 + 2;
      puVar28 = puVar28 + 2;
      *(undefined4 *)((int)lVar21 + 0x124) = uVar2;
      *(float *)((int)lVar21 + 0x120) = fVar3 + fVar5;
      uVar2 = EffectTexHeaders;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    *(float *)((int)&DAT_007b79f4 + iVar31) =
         *(float *)((int)&DAT_007b7a08 + iVar31) * DAT_0071f424 + fVar5;
    draw::FastDrawQuad(uVar18 - 0x150,0,0,uVar2,9);
    iVar29 = iVar29 + 1;
    iVar31 = iVar31 + 4;
  } while (iVar29 < 2);
  uVar20 = draw::GetEffectTex(0x2f);
  puVar7[0x29] = uVar20;
  iVar31 = 0;
  dVar57 = 0.5;
  dVar56 = 1000.0;
  dVar55 = 4.71238899230957;
  pfVar30 = (float *)&DAT_007b7968;
  dVar54 = 3.141592502593994;
  dVar53 = -3.141592502593994;
  dVar52 = -0.16666656732559204;
  dVar51 = 0.008333025500178337;
  pfVar23 = (float *)&DAT_010a0830;
  dVar50 = -0.0001980741071747616;
  puVar25 = &DAT_007b7990;
  dVar49 = 2.601886990305502e-06;
  pfVar24 = (float *)&DAT_007b79a4;
  dVar48 = 1.570796251296997;
  dVar47 = 3.1415927410125732;
  dVar46 = 1.5707963705062866;
  puVar28 = &DAT_007b797c;
  do {
    dVar34 = (double)*pfVar30;
    fVar4 = *pfVar23;
    dVar45 = (double)fVar4;
    dVar36 = -(double)(float)(dVar34 * dVar57 - (double)pfVar6[4]);
    *(float *)(puVar7 + 0x1a) = (float)dVar36;
    fVar5 = (float)((double)pfVar6[5] + dVar56);
    *(float *)((int)puVar7 + 0xd4) = fVar5;
    fVar3 = pfVar6[6];
    *(undefined4 *)((int)puVar7 + 0xdc) = 0x3f800000;
    fVar3 = (float)(dVar34 * dVar57 + (double)fVar3);
    *(float *)((int)puVar7 + 0x104) = fVar5;
    *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
    *(float *)((int)puVar7 + 0xf4) = fVar5;
    *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
    *(float *)(puVar7 + 0x1c) = (float)dVar36;
    *(float *)((int)puVar7 + 0xe4) = fVar5;
    *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
    *(float *)(puVar7 + 0x1b) = fVar3;
    *(float *)(puVar7 + 0x1f) = fVar3;
    *(float *)(puVar7 + 0x1e) = (float)(dVar36 + dVar34);
    *(float *)(puVar7 + 0x20) = (float)(dVar36 + dVar34);
    *(float *)(puVar7 + 0x1d) = (float)((double)fVar3 + -dVar34);
    *(float *)(puVar7 + 0x21) = (float)((double)fVar3 + -dVar34);
    dVar36 = (double)fastfunc::FastWrapRot(fVar4,(float)dVar55);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x24) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar55);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)((int)puVar7 + 0x124) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar47);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x25) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar47);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar35 = (double)(float)(dVar45 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar45);
    if (dVar45 - (double)(float)(dVar54 - dVar45) < 0.0) {
      dVar34 = dVar45;
    }
    dVar37 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar37 = dVar36;
    }
    dVar38 = (double)(float)(dVar54 - dVar35);
    if (dVar35 - (double)(float)(dVar54 - dVar35) < 0.0) {
      dVar38 = dVar35;
    }
    dVar33 = (double)(float)(dVar53 - dVar45);
    if ((double)(float)(dVar53 - dVar45) - dVar34 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar37 < 0.0) {
      dVar34 = dVar37;
    }
    dVar37 = (double)(float)(dVar33 * dVar33);
    dVar36 = (double)(float)(dVar53 - dVar35);
    if ((double)(float)(dVar53 - dVar35) - dVar38 < 0.0) {
      dVar36 = dVar38;
    }
    dVar35 = (double)(float)(dVar34 * dVar34);
    dVar39 = (double)(float)(dVar36 * dVar36);
    dVar41 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar33));
    dVar43 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar34));
    dVar40 = (double)(float)(dVar37 * dVar41);
    dVar44 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar36));
    dVar38 = (double)(float)(dVar35 * dVar43);
    dVar42 = (double)(float)(dVar39 * dVar44);
    *(float *)(puVar7 + 0x26) =
         (float)((double)(float)((double)(float)(dVar37 * dVar40) * dVar49 +
                                (double)(float)(dVar40 * dVar50 +
                                               (double)(float)(dVar41 * dVar51 +
                                                              (double)(float)((double)(float)(dVar37
                                                                                             * 
                                                  dVar33) * dVar52 + dVar33)))) * dVar57 + dVar57);
    *(float *)((int)puVar7 + 300) =
         (float)((double)(float)((double)(float)(dVar35 * dVar38) * dVar49 +
                                (double)(float)(dVar38 * dVar50 +
                                               (double)(float)(dVar43 * dVar51 +
                                                              (double)(float)((double)(float)(dVar35
                                                                                             * 
                                                  dVar34) * dVar52 + dVar34)))) * dVar57 + dVar57);
    *(float *)((int)puVar7 + 0x134) =
         (float)((double)(float)((double)(float)(dVar39 * dVar42) * dVar49 +
                                (double)(float)(dVar42 * dVar50 +
                                               (double)(float)(dVar44 * dVar51 +
                                                              (double)(float)((double)(float)(dVar39
                                                                                             * 
                                                  dVar36) * dVar52 + dVar36)))) * dVar57 + dVar57);
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar46);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x27) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar46);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar45 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar45 = dVar34;
    }
    fVar5 = *pfVar24;
    uVar2 = *puVar28;
    uVar22 = *puVar25;
    dVar36 = (double)(float)(dVar45 * dVar45);
    dVar35 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar45));
    dVar34 = (double)(float)(dVar36 * dVar35);
    *(float *)((int)puVar7 + 0x13c) =
         (float)((double)(float)((double)(float)(dVar36 * dVar34) * dVar49 +
                                (double)(float)(dVar34 * dVar50 +
                                               (double)(float)(dVar35 * dVar51 +
                                                              (double)(float)((double)(float)(dVar36
                                                                                             * 
                                                  dVar45) * dVar52 + dVar45)))) * dVar57 + dVar57);
    uVar22 = fastfunc::FastLerpColor((double)fVar5,uVar2,uVar22);
    *(undefined4 *)((int)puVar7 + 0x11c) = uVar22;
    *(undefined4 *)(puVar7 + 0x23) = uVar22;
    *(undefined4 *)((int)puVar7 + 0x114) = uVar22;
    uVar2 = EffectTexHeaders;
    *(undefined4 *)(puVar7 + 0x22) = uVar22;
    draw::FastDrawQuad(uVar18 - 0x150,0,0,uVar2,9);
    iVar31 = iVar31 + 1;
    pfVar30 = pfVar30 + 1;
    pfVar23 = pfVar23 + 1;
    puVar28 = puVar28 + 1;
    puVar25 = puVar25 + 1;
    pfVar24 = pfVar24 + 1;
  } while (iVar31 < 5);
  uVar19 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar19);
  return;
}



//==== 002b90b8  ns=mobyupdate_unsorted  size=0x3c4
// sig: undefined UpdateMoby_1772(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d720 RegisterFuncForMoby; 000fe610 mobyutil::MB_SphericalToVector; 00110b70 mobyutil::MB_IsPntInCuboid; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot

/* Moby 1772 */

void mobyupdate_unsorted::UpdateMoby_1772(MobyInstance *moby)

{
  f32 *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar6;
  ulonglong uVar5;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_90 [4];
  float afStack_80 [4];
  undefined1 local_70 [16];
  f32 local_60;
  f32 local_5c;
  f32 local_58;
  f32 local_54;
  
  pfVar1 = (f32 *)moby->pVar;
  if (pfVar1[0x13] != -NAN) {
    if (((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
       (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) {
      HeroDeathHeight = 0x41200000;
    }
    else {
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar1[0x13]);
      HeroDeathHeight = 0x41200000;
      if (iVar6 != 0) {
        HeroDeathHeight = 0x43160000;
      }
    }
  }
  if (moby->state == '\0') {
    auVar17 = ZEXT416(0);
    auVar15 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    moby->state = '\x01';
    uVar5 = ZEXT48(&DAT_010a0830);
    auVar17 = loadVectorLeftIndexed(8,0x2b909c);
    lVar10 = 5;
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    do {
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar15,0);
      auVar20 = ZEXT416(0xffffffff);
      auVar19 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20._0_4_ = auVar15._0_4_ + 1;
      auVar20._8_8_ = auVar15._8_8_;
      auVar20._4_4_ = auVar15._4_4_ + 1;
      auVar16._0_8_ = auVar20._0_8_;
      auVar16._12_4_ = auVar15._12_4_;
      auVar16._8_4_ = auVar15._8_4_ + 1;
      auVar15._0_12_ = auVar16._0_12_;
      auVar15._12_4_ = auVar16._12_4_ + 1;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar20);
      uVar2 = storeVectorElementWordIndexed(auVar20,0,uVar5);
      *(undefined4 *)uVar5 = uVar2;
      uVar5 = uVar5 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    pfVar1[3] = (moby->pos).w;
    dVar13 = 0.0;
    mobyutil::MB_SphericalToVector
              ((DAT_007b7a30 + DAT_007b7a2c) / DAT_007b7a34,(moby->rotation).z,0.0,local_90);
    mobyutil::MB_SphericalToVector
              (DAT_007b7a2c / DAT_007b7a34,pfVar1[0x11],(float)dVar13,afStack_80);
    fastfunc::FastVecAdd(local_70,local_90,afStack_80);
    fastfunc::FastVecAdd(&local_60,pfVar1,local_90);
    pfVar1[4] = local_60;
    pfVar1[5] = local_5c;
    pfVar1[6] = local_58;
    pfVar1[7] = local_54;
    moby->updateDistance = -1;
    pfVar1[4] = pfVar1[4] - 300.0;
  }
  else {
    iVar6 = 0;
    dVar13 = 1.0;
    dVar14 = 0.0;
    pfVar7 = (float *)&DAT_007b79a4;
    pfVar9 = (float *)&DAT_007b79b8;
    pfVar8 = (float *)&DAT_007b79cc;
    do {
      fVar3 = *pfVar8 * *pfVar9 * DAT_0071f424 + *pfVar7;
      dVar11 = (double)fVar3;
      *pfVar7 = fVar3;
      if (1.0 < dVar11) {
        *pfVar7 = 1.0;
        *pfVar9 = -1.0;
        dVar11 = dVar13;
      }
      if (dVar11 < 0.0) {
        *pfVar7 = 0.0;
        *pfVar9 = 1.0;
      }
      iVar6 = iVar6 + 1;
      pfVar8 = pfVar8 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 5);
    iVar6 = 0;
    pfVar9 = (float *)&DAT_007b7954;
    pfVar7 = (float *)&DAT_010a0830;
    dVar11 = 0.10000000149011612;
    do {
      dVar12 = (double)fastfunc::FastWrapRot
                                 (*pfVar7,(float)((double)*pfVar9 * dVar11) * DAT_0071f424);
      iVar6 = iVar6 + 1;
      *pfVar7 = (float)dVar12;
      fVar3 = DAT_0071f424;
      pfVar9 = pfVar9 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar6 < 5);
    pfVar9 = (float *)&DAT_007b79f4;
    pfVar7 = (float *)&DAT_007b7a08;
    iVar6 = 0;
    do {
      fVar4 = *pfVar7 * fVar3 + *pfVar9;
      dVar11 = (double)fVar4;
      *pfVar9 = fVar4;
      if (dVar13 <= dVar11) {
        dVar12 = dVar11 - dVar13;
        dVar11 = (double)(float)dVar12;
        *pfVar9 = (float)dVar12;
      }
      if (dVar11 < dVar14) {
        *pfVar9 = (float)(dVar11 + dVar13);
      }
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 2);
    RegisterFuncForMoby(&PTR_M1772_002b8748_0070aed8,moby);
  }
  return;
}



//==== 002b947c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1772_002b947c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1772_002b947c(void)

{
  DAT_007b7a8c = 0x10000;
  return;
}



//==== 002b9490  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_178(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 178 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_178(MobyInstance *moby)

{
  return moby;
}



//==== 002b9494  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1789_002b9494(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1789_002b9494(void)

{
  DAT_007b7afc = 0x10000;
  return;
}



//==== 002b94b0  ns=mobyupdate_unsorted  size=0x3c0
// sig: undefined UpdateMoby_1789(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0011a1a0 mobyutil::MB_SpawnSparksPair

/* Moby 1789 */

void mobyupdate_unsorted::UpdateMoby_1789(MobyInstance *moby)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 local_c0 [4];
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((update::g_SceneId == 1 || (update::g_SceneId == 2)))) {
    uVar2 = (LZCOUNT(1 - update::g_SceneId) << 0x3a) >> 0x3f & 3;
    uVar1 = *(undefined4 *)
             ((int)&DAT_0095cec8 +
             (int)((uVar2 + ((LZCOUNT(2 - update::g_SceneId) << 0x3a) >> 0x3f & 4 - uVar2) &
                   0xffffffff) << 2));
    mobyfunc::GetBonePosition(uVar1,0,local_c0);
    mobyfunc::GetBonePosition(uVar1,3,local_90);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_c0,local_c0,local_60);
    mobyfunc::GetBonePosition(uVar1,1,local_b0);
    mobyfunc::GetBonePosition(uVar1,4,local_80);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_b0,local_b0,local_50);
    mobyfunc::GetBonePosition(uVar1,2,local_a0);
    mobyfunc::GetBonePosition(uVar1,5,local_70);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_a0,local_a0,local_40);
  }
  return;
}



//==== 002b9870  ns=Global  size=0xd0
// sig: undefined FUN_002b9870(void)
// callers(5): 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 002ae5d8 FUN_002ae5d8; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 0036cab0 mobyupdate_unsorted::UpdateMoby_426
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_002b9870(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  MobyInstance *pMoby;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pMoby = mobyfunc::CreateMoby(0xb3);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    pMoby->modeBits = DRAW_TRANSPARENT_WEIRD|NO_POST_UPDATE;
    pMoby->alpha = 'P';
    *(int *)((int)pMoby->pVar + 8) = param_1;
    (pMoby->rotation).w = 0.0;
    (pMoby->rotation).z = 0.0;
    (pMoby->rotation).y = 0.0;
    (pMoby->rotation).x = 0.0;
    puVar1 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar5 = puVar1[2];
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    puVar2 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar9 = puVar2[3];
    uVar8 = puVar2[2];
    uVar7 = puVar2[1];
    uVar6 = *puVar2;
    puVar2 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    uVar11 = puVar2[1];
    uVar10 = *puVar2;
    puVar2 = (undefined4 *)((uint)&pMoby->transform & 0xfffffff0);
    puVar2[3] = puVar1[3];
    puVar2[2] = uVar5;
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    puVar1 = (undefined4 *)((uint)&(pMoby->transform).v1 & 0xfffffff0);
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar1[1] = uVar7;
    *puVar1 = uVar6;
    puVar1 = (undefined4 *)((uint)&(pMoby->transform).v2 & 0xfffffff0);
    puVar1[3] = uVar13;
    puVar1[2] = uVar12;
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    mobyfunc::PostUpdateMobyLockTransform(pMoby);
    mobyfunc::UpdateMobyTransform(pMoby);
  }
  return pMoby;
}



//==== 002b9950  ns=mobyupdate_unsorted  size=0x194
// sig: undefined UpdateMoby_179(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000f0838 mobyfunc::MB_AddShortPairOffset; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot

/* Moby 179 */

void mobyupdate_unsorted::UpdateMoby_179(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyModeBit MVar4;
  undefined8 uVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  pvVar1 = moby->pVar;
  iVar2 = *(int *)((int)pvVar1 + 8);
  if ((*(byte *)(iVar2 + 0x20) == 0) || ((*(byte *)(iVar2 + 0x20) & 0xf0) == 0xf0)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    MVar4 = moby->modeBits;
    if ((iVar2 != 0) && (((MVar4 ^ *(MobyModeBit *)(iVar2 + 0x34)) & DISABLED) != NONE)) {
      iVar2 = *(int *)((int)pvVar1 + 8);
      moby->modeBits =
           MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      MVar4 = MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                       HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
              *(MobyModeBit *)(iVar2 + 0x34) & DISABLED;
      moby->modeBits = MVar4;
    }
    if (DAT_0096ad90 < (int)(animationSpeed * 25.5)) {
      moby->modeBits = MVar4 | (UNK_40|DISABLED);
    }
    iVar2 = *(int *)((int)pvVar1 + 4);
    uVar3 = 0xffffffffffffff40;
    iVar5 = iVar2 + -0xc0;
    *(int *)((int)pvVar1 + 4) = iVar5;
    if (iVar5 < 0x1001) {
      if (iVar5 < 0) {
        uVar3 = 0xf40;
        *(int *)((int)pvVar1 + 4) = iVar2 + 0xf40;
      }
    }
    else {
      uVar3 = 0xffffffffffffef40;
      *(int *)((int)pvVar1 + 4) = iVar2 + -0x10c0;
    }
    mobyfunc::MB_AddShortPairOffset(moby->pClass,0,uVar3);
    dVar6 = (double)mobyutil::MB_randRangeFloat(0.5,1.0);
    dVar7 = (double)(moby->rotation).y;
    moby->scale = (float)((double)(moby->pClass->gScale * *(float *)((int)pvVar1 + 0xc)) * dVar6);
    fVar8 = mobyutil::MB_WrapRot(*(float *)((int)pvVar1 + 0xc));
    dVar6 = (double)fastfunc::FastWrapRot((float)dVar7,fVar8);
    (moby->rotation).y = (float)dVar6;
    mobyfunc::PostUpdateMobyLockTransform(moby);
  }
  return;
}



//==== 002b9ae4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1799_002b9ae4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1799_002b9ae4(void)

{
  DAT_007b7b74 = 0x10000;
  return;
}



//==== 002b9b00  ns=mobyupdate_unsorted  size=0x1e8
// sig: undefined UpdateMoby_1799(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0011a1a0 mobyutil::MB_SpawnSparksPair

/* Moby 1799 */

void mobyupdate_unsorted::UpdateMoby_1799(MobyInstance *moby)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined1 local_20 [16];
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          (((uint)update::g_SceneId < 2 || ((update::g_SceneId == 2 || (update::g_SceneId == 3))))))
  {
    lVar2 = 0;
    if ((update::g_SceneId == 0) || ((update::g_SceneId == 2 || (update::g_SceneId == 3)))) {
      lVar2 = 3;
    }
    uVar1 = *(undefined4 *)
             ((int)&DAT_0095cec8 +
             (int)((lVar2 + ((LZCOUNT(1 - update::g_SceneId) << 0x3a) >> 0x3f & 4U - lVar2) &
                   0xffffffff) << 2));
    mobyfunc::GetBonePosition(uVar1,8,local_40);
    mobyfunc::GetBonePosition(uVar1,9,local_30);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7b9c,(double)DAT_010a0848,local_40,local_40,local_20);
  }
  return;
}



//==== 002b9d00  ns=mobyupdate_helpers  size=0x314
// sig: undefined M18_002b9d00(void)
// callers(1): 002ba158 mobyupdate_unsorted::UpdateMoby_18
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M18_002b9d00(int param_1)

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
  
  dVar12 = 0.5;
  dVar13 = 0.0;
  iVar8 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.5) - 0.5;
  lVar10 = uVar9 + 0x30;
  dVar14 = 255.0;
  auVar18 = loadVectorLeftIndexed(0x14,0x2b9ce8);
  dVar15 = 255.5;
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
    dVar11 = (double)fVar4;
    *(float *)(iVar3 + 0x10) = fVar4;
    if (dVar11 < dVar14) {
      if (dVar11 <= dVar13) {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar14);
      }
    }
    else {
      *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar14);
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
      iVar1 = (int)(dVar11 * dVar15);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar11 = (double)fastfunc::FastIntToDouble((int)(dVar11 * dVar15) - iVar1);
    uVar5 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar12 - (double)(float)(dVar11 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar15)))),0x4040ffff,0x1040ffff)
    ;
    uVar7 = fastfunc::FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
    partupd::SpawnPart_59((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}



//==== 002ba020  ns=mobyupdate_helpers  size=0x120
// sig: undefined M18_002ba020(void)
// callers(1): 002ba158 mobyupdate_unsorted::UpdateMoby_18
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M18_002ba020(int param_1)

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
  auVar14 = loadVectorLeftIndexed(in_LR,0x2ba014);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x2ba014);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x2ba014);
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



//==== 002ba158  ns=mobyupdate_unsorted  size=0x240
// sig: undefined UpdateMoby_18(MobyInstance * moby)
// callers(0): 
// callees(10): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 00112e18 mobyutil::MB_UnlockItem; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit; 002b9d00 mobyupdate_helpers::M18_002b9d00; 002ba020 mobyupdate_helpers::M18_002ba020; 00502578 fastfunc::FastWrapRot
// strings: 0096c165: 'None'

/* Moby 18 */

void mobyupdate_unsorted::UpdateMoby_18(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  
  pvVar3 = moby->pVar;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964);
  bVar1 = moby->state;
  (moby->rotation).z = (float)dVar6;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      mobyupdate_helpers::M18_002ba020(moby);
      if (CHAR_ARRAY_0096c165[0x1c] == '\0') {
        fVar2 = moby->scale;
        (moby->pos).z = (moby->pos).z + 0.5;
        moby->state = '\x01';
        moby->scale = fVar2 * 0.667;
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyupdate_helpers::M18_002b9d00(moby);
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (((SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 5.0) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroHealth != 0)) {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        update::mode_sceneInit(2);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode != GAME_MODE_SCENE) {
      mobyutil::MB_ToastMessage(0x271b,0xffffffffffffffff);
      g_toastMsgTimer = 0xb4;
      mobyutil::MB_UnlockItem(0x1c,1);
      mobyutil::MB_UnlockTrophy(LOMBAX_MAGNETIC);
      iVar4 = *(int *)((int)pvVar3 + 4);
      if (iVar4 != -1) {
        respawn::SetSpawnPoint
                  ((Vec4 *)&MobyInstance[iVar4].pos,(Vec4 *)&MobyInstance[iVar4].rotation);
      }
      memcard::memcard_Save(0,-1);
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002ba398  ns=mobyupdate_helpers  size=0x14
// sig: undefined M180_002ba398(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M180_002ba398(void)

{
  DAT_007b7bec = 0x10000;
  return;
}



//==== 002ba3d8  ns=mobyupdate_unsorted  size=0x7a8
// sig: undefined UpdateMoby_180(MobyInstance * moby)
// callers(0): 
// callees(9): 0006d7e0 draw::RegisterPostDraw; 000efe40 mobyfunc::BlendAnimFrame; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe788 mobyutil::MB_randVector; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble

/* Moby 180 */

void mobyupdate_unsorted::UpdateMoby_180(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  ulonglong *puVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  int iVar10;
  short sVar12;
  float *pfVar11;
  undefined2 *puVar13;
  short *psVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  float *pfVar18;
  ulonglong unaff_r20;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  float *pfVar22;
  longlong lVar21;
  float *pfVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar25;
  ulonglong unaff_r29;
  int iVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  undefined8 uVar31;
  ulonglong in_f27;
  double dVar32;
  undefined8 uVar33;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float local_140 [80];
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar9 - 0x1b0);
  *puVar3 = uVar9;
  puVar3[0x38] = in_LR;
  puVar3[0x2f] = in_f25;
  puVar3[0x30] = in_f26;
  puVar3[0x31] = in_f27;
  puVar3[0x32] = in_f28;
  puVar3[0x33] = in_f29;
  puVar3[0x34] = in_f30;
  puVar3[0x35] = in_f31;
  puVar3[0x2e] = unaff_r31;
  puVar3[0x2a] = unaff_r27;
  puVar3[0x2d] = unaff_r30;
  bVar5 = false;
  puVar3[0x27] = unaff_r24;
  bVar1 = g_heroState == WALLOPER_SOMETHING;
  uVar2 = g_heroMobyPtr->animationId;
  puVar3[0x2c] = unaff_r29;
  puVar3[0x2b] = unaff_r28;
  puVar3[0x29] = unaff_r26;
  puVar3[0x28] = unaff_r25;
  puVar3[0x26] = unaff_r23;
  puVar3[0x25] = unaff_r22;
  puVar3[0x24] = unaff_r21;
  puVar3[0x23] = unaff_r20;
  puVar3[0x22] = unaff_r19;
  puVar3[0x21] = unaff_r18;
  puVar3[0x20] = unaff_r17;
  puVar3[0x1f] = unaff_r16;
  puVar3[0x1e] = unaff_r15;
  if (uVar2 != 0x82) {
    DAT_0072240c = 0x3dcccccd;
  }
  if (moby->state == '\0') {
    moby->state = '\x02';
    lVar27 = 5;
    auVar38 = loadVectorLeftIndexed(0x7c38,0x7b0000);
    puVar13 = &DAT_010a0b70;
    puVar16 = &DAT_010a0b98;
    puVar17 = &DAT_010a0bac;
    do {
      *puVar13 = 0;
      *puVar16 = 2;
      *puVar17 = 1;
      puVar13[1] = 0;
      puVar16[1] = 2;
      puVar13 = puVar13 + 2;
      puVar17[1] = 1;
      puVar16 = puVar16 + 2;
      puVar17 = puVar17 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    auVar39 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    auVar40 = loadVectorLeftIndexed(in_LR,0x2ba3b0);
    auVar38 = ZEXT416(0xffffffff);
    auVar41 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = ZEXT416(0xffffffff);
    auVar43 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar38 = loadVectorLeftIndexed(0x7c3c,0x7b0000);
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar38 = vectorAddFloatingPoint(auVar39,auVar40);
    auVar39 = vectorAddFloatingPoint(auVar41,auVar40);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar42);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar43);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010a0bc0 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xbc0,
                              0x10a0000);
    auVar38 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010a0bc4 = storeVectorElementWordIndexed
                             (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xbc4,
                              0x10a0000);
    fVar8 = DAT_010a0bc8;
  }
  else {
    fVar8 = DAT_010a0bc8;
    if (moby->state == '\x02') {
      if (bVar1) {
        dVar34 = (double)mobyfunc::BlendAnimFrame(moby);
        fVar8 = DAT_010a0bc8;
        if (6.0 <= dVar34) {
          bVar5 = true;
          iVar10 = fastfunc::FastDecTimerS32(&DAT_010a0bc0);
          if (iVar10 == 0) {
            dVar34 = (double)fastfunc::FastIntToDouble(DAT_010a0bc0);
            puVar3[0x1c] = (longlong)DAT_007b7c38;
            puVar3[0x1c] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar3[0x1c] + 0.5));
            dVar35 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar3 + 0xe4));
            fVar8 = 1.0 - (float)(dVar34 / dVar35);
          }
          else if (dVar34 < 12.0) {
            fVar8 = 1.0;
          }
          else {
            iVar10 = fastfunc::FastDecTimerS32(&DAT_010a0bc4);
            fVar8 = 0.0;
            if (iVar10 == 0) {
              dVar34 = (double)fastfunc::FastIntToDouble(DAT_010a0bc4);
              puVar3[0x1c] = (longlong)DAT_007b7c3c;
              puVar3[0x1c] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar3[0x1c] + 0.5))
              ;
              dVar35 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar3 + 0xe4));
              fVar8 = (float)(dVar34 / dVar35);
            }
          }
        }
      }
      else {
        auVar38 = ZEXT416(0xffffffff);
        auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar43 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar38 = loadVectorLeftIndexed(0x7c38,0x7b0000);
        auVar40 = loadVectorLeftIndexed(in_LR,0x2ba3b0);
        auVar41 = loadVectorLeftIndexed(0x7c3c,0x7b0000);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38,0);
        auVar38 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint(auVar39,auVar40);
        auVar39 = vectorAddFloatingPoint(auVar41,auVar40);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar42);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar43);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        DAT_010a0bc0 = storeVectorElementWordIndexed
                                 (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                                  0xbc0,0x10a0000);
        DAT_010a0bc4 = storeVectorElementWordIndexed
                                 (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                                  0xbc4,0x10a0000);
        puVar3[0x1c] = (longlong)(int)(animationSpeed * 12.5);
        mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar3 + 0xe4));
        fVar8 = DAT_010a0bc8;
      }
    }
  }
  DAT_010a0bc8 = fVar8;
  iVar10 = 0;
  psVar14 = &DAT_010a0b70;
  bVar6 = 0;
  dVar34 = (double)(moby->transform).v1.w;
  dVar37 = (double)((moby->transform).v1.x * -0.5 + (moby->pos).x);
  dVar36 = (double)((moby->transform).v1.y * -0.5 + (moby->pos).y);
  dVar35 = (double)((moby->transform).v1.z * -0.5 + (moby->pos).z);
  psVar15 = psVar14;
  do {
    if (*psVar15 != 0) {
      bVar6 = 1;
      break;
    }
    iVar10 = iVar10 + 1;
    psVar15 = psVar15 + 1;
  } while (iVar10 < 10);
  if ((bool)(bVar6 | bVar5)) {
    iVar26 = 0;
    iVar24 = 0;
    iVar10 = 0;
    do {
      sVar12 = *psVar14 + -1;
      *psVar14 = sVar12;
      if (sVar12 < 0) {
        sVar12 = 0;
        *psVar14 = 0;
      }
      if (sVar12 == 0 && bVar5) {
        *psVar14 = 2;
        *(undefined2 *)((int)&DAT_010a0b84 + iVar24) = 0x40;
        mobyutil::MB_randVector((double)DAT_007b7c34,(double)DAT_007b7c34,(Vec4 *)(puVar3 + 0xe));
        iVar25 = 1;
        pfVar23 = (float *)((int)&DAT_010a0850 + iVar10);
        pfVar22 = (float *)((int)&DAT_010a0860 + iVar10);
        *(float *)((int)&DAT_010a0850 + iVar10) = (float)dVar37;
        *(float *)((int)&DAT_010a0854 + iVar10) = (float)dVar36;
        *(float *)((int)&DAT_010a0858 + iVar10) = (float)dVar35;
        *(float *)((int)&DAT_010a085c + iVar10) = (float)dVar34;
        dVar32 = 1.0;
        dVar30 = 0.1745329201221466;
        dVar29 = 0.7853981852531433;
        do {
          fVar7 = GameCamera.posZ;
          fVar8 = GameCamera.posY;
          *(float *)(puVar3 + 0x10) = *pfVar23 - GameCamera.posX;
          *(float *)((int)puVar3 + 0x84) = pfVar23[1] - fVar8;
          *(float *)(puVar3 + 0x11) = pfVar23[2] - fVar7;
          *(float *)((int)puVar3 + 0x8c) = pfVar23[3];
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar29);
          dVar28 = dVar28 * dVar32;
          dVar32 = -dVar32;
          mobyutil::MB_RotateQuatAxisAngle((float)dVar28,local_140,local_140);
          iVar25 = iVar25 + 1;
          *pfVar22 = *pfVar23 + *(float *)(puVar3 + 0xe);
          pfVar22[1] = pfVar23[1] + *(float *)((int)puVar3 + 0x74);
          pfVar22[2] = pfVar23[2] + *(float *)(puVar3 + 0xf);
          pfVar11 = pfVar23 + 3;
          pfVar23 = pfVar23 + 4;
          pfVar22[3] = *pfVar11;
          pfVar22 = pfVar22 + 4;
        } while (iVar25 < 5);
      }
      else if (sVar12 != 0) {
        uVar33 = 0;
        lVar21 = uVar9 - 0x110;
        uVar31 = 0x3fb99999a0000000;
        pfVar11 = (float *)((int)&DAT_010a0850 + iVar10);
        iVar25 = 1;
        pfVar18 = (float *)((int)&DAT_010a0860 + iVar10);
        lVar19 = lVar21;
        lVar27 = uVar9 - 0x1b0;
        pfVar23 = pfVar18;
        pfVar22 = pfVar11;
        do {
          pfVar20 = (float *)lVar19;
          *pfVar20 = *pfVar23 - *pfVar22;
          pfVar20[1] = pfVar23[1] - pfVar22[1];
          pfVar20[2] = pfVar23[2] - pfVar22[2];
          pfVar20[3] = pfVar23[3];
          dVar29 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar31);
          iVar4 = (int)lVar27;
          *(float *)(iVar4 + 0xa0) = (float)((double)*(float *)(iVar4 + 0xa0) + dVar29);
          dVar29 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar31);
          *(float *)(iVar4 + 0xa4) = (float)((double)*(float *)(iVar4 + 0xa4) + dVar29);
          dVar29 = (double)mobyutil::MB_randRangeSigned(uVar33,uVar31);
          iVar25 = iVar25 + 1;
          lVar19 = lVar19 + 0x10;
          pfVar23 = pfVar23 + 4;
          pfVar22 = pfVar22 + 4;
          *(float *)(iVar4 + 0xa8) = (float)((double)*(float *)(iVar4 + 0xa8) + dVar29);
          lVar27 = lVar27 + 0x10;
        } while (iVar25 < 5);
        sVar12 = *psVar14;
        lVar27 = 4;
        *(float *)((int)&DAT_010a0850 + iVar10) = (float)dVar37;
        *(float *)((int)&DAT_010a0854 + iVar10) = (float)dVar36;
        *(float *)((int)&DAT_010a0858 + iVar10) = (float)dVar35;
        *(float *)((int)&DAT_010a085c + iVar10) = (float)dVar34;
        do {
          pfVar23 = (float *)lVar21;
          *pfVar18 = *pfVar11 + *pfVar23;
          pfVar18[1] = pfVar11[1] + pfVar23[1];
          lVar21 = lVar21 + 0x10;
          pfVar18[2] = pfVar11[2] + pfVar23[2];
          pfVar23 = pfVar11 + 3;
          pfVar11 = pfVar11 + 4;
          pfVar18[3] = *pfVar23;
          pfVar18 = pfVar18 + 4;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        *(ushort *)((int)&DAT_010a0b84 + iVar24) =
             ((ushort)((longlong)sVar12 + -1 >> 0x3f) & 0xffe0) + 0x20;
      }
      iVar26 = iVar26 + 1;
      psVar14 = psVar14 + 1;
      iVar10 = iVar10 + 0x50;
      iVar24 = iVar24 + 2;
    } while (iVar26 < 10);
    draw::RegisterPostDraw(&PTR_M1805_002bb718_0070af60,moby);
  }
  return;
}



//==== 002bab98  ns=mobyupdate_helpers  size=0x3a0
// sig: undefined M1805_002bab98(void)
// callers(1): 002bb718 mobyupdate_helpers::M1805_002bb718
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1805_002bab98(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
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
  double dVar23;
  float local_d0 [36];
  
  dVar23 = (double)*(float *)(param_1 + 0xdc);
  dVar18 = (double)(*(float *)(param_1 + 0xd0) * DAT_007b7c4c + *(float *)(param_1 + 0x10));
  dVar17 = (double)(*(float *)(param_1 + 0xd4) * DAT_007b7c4c + *(float *)(param_1 + 0x14));
  dVar16 = (double)(*(float *)(param_1 + 0xd8) * DAT_007b7c4c + *(float *)(param_1 + 0x18));
  draw::GetEffectTex(DAT_007b7c58);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar21 = 0.0;
  dVar19 = 1.0;
  iVar5 = mobyutil::MB_randInt(4);
  iVar8 = DAT_007b7c50;
  if (iVar5 == 0) {
    iVar8 = DAT_007b7c54;
  }
  dVar10 = (double)fastfunc::FastIntToDouble(iVar8 >> 0x18);
  fastfunc::FastDoubleToInt((double)(float)(dVar10 * (double)DAT_010a0bc8));
  fVar2 = (float)((double)GameCamera.posY - dVar17);
  fVar3 = (float)((double)GameCamera.posX - dVar18);
  fVar4 = (float)((double)GameCamera.posZ - dVar16);
  dVar11 = (double)(float)GameCamera.field8_0x14c;
  dVar14 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar10 = dVar21;
  dVar12 = dVar21;
  dVar13 = dVar21;
  if ((double)(float)SQRT(dVar14) != dVar21) {
    dVar10 = 1.0 / SQRT(dVar14);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                    (double)(float)(dVar10 * 0.5) + dVar10);
    dVar13 = (double)(fVar1 * fVar3);
    dVar12 = (double)(fVar1 * fVar2);
    dVar10 = (double)(fVar1 * fVar4);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar13 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar10));
  fVar4 = (float)((double)DAT_00969f74 * dVar10 - (double)(float)((double)DAT_00969f78 * dVar12));
  fVar1 = (float)((double)hero::g_heroGravityDir * dVar12 -
                 (double)(float)((double)DAT_00969f74 * dVar13));
  lVar9 = 4;
  pfVar6 = (float *)&DAT_007b7c60;
  pfVar7 = local_d0;
  dVar14 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (float)(-1.0 / dVar14);
  dVar19 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  dVar15 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar15 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar22 = (double)(fVar1 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar15 = (double)(fVar3 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar22 = (double)(fVar1 * fVar2);
  }
  do {
    dVar21 = (double)(pfVar6[1] * DAT_007b7c48);
    dVar20 = (double)(*pfVar6 * DAT_007b7c48);
    fVar2 = pfVar6[2] * DAT_007b7c48;
    dVar14 = (double)pfVar6[3];
    pfVar6 = pfVar6 + 4;
    pfVar7[3] = (float)(dVar14 * dVar23 + (double)(float)(dVar20 * dVar11));
    *pfVar7 = (float)((double)(float)(dVar13 * 0.20000000298023224 + dVar18) * dVar14 +
                     (double)((float)(dVar12 * dVar22 - (double)(float)(dVar10 * dVar15)) * fVar2 +
                             (float)(dVar20 * dVar13 + (double)(float)(dVar21 * dVar19))));
    pfVar7[1] = (float)((double)(float)(dVar12 * 0.20000000298023224 + dVar17) * dVar14 +
                       (double)((float)(dVar10 * dVar19 - (double)(float)(dVar13 * dVar22)) * fVar2
                               + (float)(dVar20 * dVar12 + (double)(float)(dVar21 * dVar15))));
    pfVar7[2] = (float)((double)(float)(dVar10 * 0.20000000298023224 + dVar16) * dVar14 +
                       (double)((float)(dVar13 * dVar15 - (double)(float)(dVar12 * dVar19)) * fVar2
                               + (float)(dVar20 * dVar10 + (double)(float)(dVar21 * dVar22))));
    pfVar7 = pfVar7 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  draw::FastDrawQuad(local_d0,0,0,EffectTexHeaders,9);
  return;
}



//==== 002baf48  ns=mobyupdate_helpers  size=0x7c8
// sig: undefined M1805_002baf48(void)
// callers(1): 002bb718 mobyupdate_helpers::M1805_002bb718
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1805_002baf48(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  undefined1 local_1d0 [144];
  undefined1 local_140 [152];
  
  draw::GetEffectTex(DAT_007b7c40);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(DAT_007b7c44);
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



//==== 002bb718  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1805_002bb718(void)
// callers(0): 
// callees(4): 002bab98 mobyupdate_helpers::M1805_002bab98; 002baf48 mobyupdate_helpers::M1805_002baf48; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1805_002bb718(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  undefined8 uVar7;
  
  psVar3 = &DAT_010a0b70;
  iVar2 = 0;
  puVar4 = &DAT_010a0b84;
  uVar7 = 0x3fc99999a0000000;
  puVar5 = &DAT_010a0850;
  do {
    if (*psVar3 != 0) {
      dVar6 = (double)fastfunc::FastIntToDouble(*puVar4);
      uVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar6 * (double)DAT_010a0bc8));
      M1805_002baf48((double)DAT_007b7c20,(double)DAT_007b7c24,uVar7,puVar5,uVar1,uVar1);
    }
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x14;
  } while (iVar2 < 10);
  M1805_002bab98(param_1);
  return;
}



//==== 002bb808  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1805_002bb808(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1805_002bb808(void)

{
  DAT_007b7cec = 0x10000;
  return;
}



//==== 002bb840  ns=mobyupdate_unsorted  size=0x3c0
// sig: undefined UpdateMoby_1805(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 00104214 mobyutil::MB_CountActiveMobysByGroup; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015d12c sound::PlayMobySound

/* Moby 1805 */

void mobyupdate_unsorted::UpdateMoby_1805(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined8 uVar13;
  float local_70 [4];
  undefined1 auStack_60 [16];
  
  lVar8 = (longlong)(int)moby;
  if ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2))
      & 1 << (moby->uid & 0x1f)) == 0) {
    pvVar4 = moby->pVar;
    uVar11 = ZEXT48(pvVar4);
    iVar9 = mobyutil::MB_damage(lVar8,0x10000,0);
    mobyutil::MB_HandleDamage(moby,iVar9,uVar11 + 0x20,0,auStack_60,0,0,4);
    bVar1 = moby->state;
    if (bVar1 == 0) {
      moby->state = '\x01';
    }
    else if (bVar1 < 2) {
      if (iVar9 != 0) {
        uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar9 + 0x2c);
        uVar6 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
        if ((int)((uVar6 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar6) <
            (int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5)) {
          moby->state = '\x02';
        }
        else {
          *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
          *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - fVar2;
          mobyutil::MB_UpdateLightsTransition(lVar8,uVar11 + 0x60);
        }
        moby->damage = -1;
      }
      mobyutil::MB_ColorDyingMoby(lVar8,uVar11 + 0x60);
    }
    else if (bVar1 < 3) {
      if ((moby->group != -1) &&
         (iVar9 = mobyutil::MB_CountActiveMobysByGroup(moby->group,0xffffffffffffffff), iVar9 == 1))
      {
        mobyutil::MB_UnlockSkillPoint(0x16);
      }
      sound::PlayMobySound(0,0,moby);
      mobyutil::MB_DistributeBoltsNearHero(lVar8);
      uVar3 = moby->uid;
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      iVar9 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar5 = *(uint *)(&DAT_00a54dd0 + iVar9);
      iVar10 = 0;
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar7) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar7) | 1 << (uVar3 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar9) = uVar5 | 1 << (uVar3 & 0x1f);
      dVar12 = 1.5;
      uVar13 = 0;
      do {
        iVar9 = 0x709;
        do {
          mobyutil::MB_RandomizeVector((float)dVar12,local_70);
          mobyutil::MB_SpawnDebrisMoby(uVar13,lVar8,iVar9,local_70,lVar8 + 0x40,0,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x70d);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 2);
      mobyutil::MB_genericExplosion
                (uVar13,uVar13,0x4018000000000000,0x4008000000000000,0x4022000000000000,
                 0x3ff19999a0000000,0x402e000000000000,lVar8,lVar8 + 0x10,0,&DAT_002bb820,3,10,3,
                 0x10);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002bbc00  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1805_002bbc00(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1805_002bbc00(void)

{
  DAT_007b7d5c = 0x10000;
  return;
}



//==== 002bbc28  ns=mobyupdate_helpers  size=0x130
// sig: undefined M181_002bbc28(MobyInstance * moby)
// callers(1): 002bbd68 mobyupdate_unsorted::UpdateMoby_181
// callees(2): 00175644 walk::walk_SetupTwistVals; 00175688 walk::walk_init2LegAnim

void mobyupdate_helpers::M181_002bbc28(MobyInstance *moby)

{
  w_2legData *pLD;
  float fVar1;
  float fVar2;
  
  pLD = (w_2legData *)moby->pVar;
  walk::walk_SetupTwistVals(moby,pLD);
  fVar2 = DAT_0071f418;
  pLD->grav = DAT_0071f418 * 9.8;
  fVar1 = DAT_0071f40c;
  pLD->angGain = DAT_0071f40c * 0.02;
  pLD->angDamp = fVar1 * 0.01;
  fVar1 = DAT_0071f408;
  pLD->acc = fVar2;
  pLD->idle = '\0';
  pLD->stand = '\0';
  pLD->jumpc = -1;
  pLD->rjumpc = '\0';
  pLD->moveJoint1 = '\b';
  pLD->moveJoint2 = '\b';
  pLD->legs[0].jiFoot = '\x04';
  pLD->legs[0].jiHeel = '\x05';
  pLD->legs[0].jiHip = '\a';
  pLD->legs[0].jiAnkle = '\x06';
  pLD->legs[1].jiFoot = '\0';
  pLD->legs[1].jiHeel = '\x01';
  pLD->legs[1].jiHip = '\x03';
  pLD->legs[1].jiAnkle = '\x02';
  pLD->stepHeight = 0.25;
  pLD->angLimit = fVar1 * 0.035;
  walk::walk_init2LegAnim(moby,pLD);
  return;
}



//==== 002bbd68  ns=mobyupdate_unsorted  size=0x470
// sig: undefined UpdateMoby_181(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00136724 path::InitFollower; 00136890 path::PathFollowUpdate; 0017aa48 walk::Walk_ResetLegState; 002bbc28 mobyupdate_helpers::M181_002bbc28

/* Moby 181 */

void mobyupdate_unsorted::UpdateMoby_181(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  w_2legData *pLD;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar10 = uVar16 - 0xb0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar16;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  puVar6[0x14] = unaff_r30;
  pLD = (w_2legData *)moby->pVar;
  iVar11 = mobyutil::MB_damage(moby,0x10000,0);
  if ((iVar11 != 0) && (moby->state != '\x04')) {
    pLD[1].fpos[5].m.y = 1.4013e-45;
    pLD[1].fpos[4].m.z = 0.1;
    pLD[1].fpos[4].m.x = 0.008;
    pLD[1].fpos[4].m.y = 0.0005;
    pLD[1].fpos[4].m.w = 0.1;
    *(undefined1 *)((int)&pLD[1].jumpPos.m.w + 1) = 0;
    moby->state = '\x04';
    fVar3 = (moby->pos).x - g_heroPosition.x;
    fVar2 = (moby->pos).y - g_heroPosition.y;
    uVar13 = ZEXT48(&mobyutil::g_atanQuadrantTable);
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar9 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
            (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
            (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar9 << 2));
    fVar2 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar17 = uVar16 - 0xa0;
      lVar15 = uVar16 - 0x34;
      lVar14 = uVar16 - 0x24;
      lVar19 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x11) = fVar3;
      *(float *)(puVar6 + 0x10) = fVar3;
      *(float *)((int)puVar6 + 0x84) = fVar3;
      *(float *)((int)puVar6 + 0x7c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
        iVar11 = (int)lVar15;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar13 = uVar16 - 0x34;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = 4;
      uVar16 = uVar13;
      lVar14 = lVar10;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)uVar16 + 4) = *(float *)((int)uVar16 + 4) * fVar4;
        uVar16 = uVar16 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar14 = 2;
      do {
        iVar11 = (int)lVar10;
        lVar10 = lVar10 + 0x10;
        iVar7 = (int)uVar13;
        uVar13 = uVar13 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar11 + 0x7c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::MB_StartKick(dVar20,moby,pLD[1].fpos + 3,uVar13,3,3,0);
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x04') {
    uVar12 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pLD[1].fpos + 3));
    if ((uVar12 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < (float)pLD[1].anims[8]) {
      moby->state = '\x01';
      mobyutil::MB_SetAnimation(moby,1,0,1);
    }
  }
  else if (uVar1 == '\x01') {
    if (pLD[1].fpos[1].m.y != -NAN) {
      path::PathFollowUpdate(mobyutil::g_FrameTime * 1.38,moby,(PathFollower *)(pLD + 1),pLD);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (128.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
      moby->state = '\x03';
      mobyutil::MB_SetAnimation(moby,0,0,1);
    }
  }
  else if ((uVar1 == '\0') &&
          (fVar3 = (g_heroMobyPtr->pos).y - (moby->pos).y,
          fVar2 = (g_heroMobyPtr->pos).x - (moby->pos).x,
          SQRT(fVar2 * fVar2 + fVar3 * fVar3) < (float)pLD[1].anims[8])) {
    if (pLD[1].fpos[1].m.y != -NAN) {
      path::InitFollower((PathFollower *)(pLD + 1));
    }
    mobyupdate_helpers::M181_002bbc28(moby);
    walk::Walk_ResetLegState(moby,pLD);
    mobyutil::MB_SetAnimation(moby,1,0,1);
    moby->state = '\x01';
  }
  return;
}



//==== 002bc1d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1811_002bc1d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1811_002bc1d8(void)

{
  DAT_007b7dcc = 0x10000;
  return;
}



//==== 002bc1f8  ns=mobyupdate_unsorted  size=0x2b0
// sig: undefined UpdateMoby_1811(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0011a1a0 mobyutil::MB_SpawnSparksPair

/* Moby 1811 */

void mobyupdate_unsorted::UpdateMoby_1811(MobyInstance *moby)

{
  undefined4 uVar1;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar1 = DAT_0095ced0;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (update::g_SceneId == 2)) {
    mobyfunc::GetBonePosition(DAT_0095ced0,2,local_90);
    mobyfunc::GetBonePosition(uVar1,4,local_70);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7df4,(double)DAT_007b7df8,local_90,local_90,local_50);
    mobyfunc::GetBonePosition(uVar1,1,local_80);
    mobyfunc::GetBonePosition(uVar1,3,local_60);
    mobyutil::MB_SpawnSparksPair
              ((double)DAT_007b7df4,(double)DAT_007b7df8,local_80,local_80,local_40);
  }
  return;
}



//==== 002bc4b8  ns=mobyupdate_unsorted  size=0x290
// sig: undefined UpdateMoby_1812(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0011a1a0 mobyutil::MB_SpawnSparksPair

/* Moby 1812 */

void mobyupdate_unsorted::UpdateMoby_1812(MobyInstance *moby)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar1 = DAT_0095ced4;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (update::g_SceneId == 0)) {
    mobyfunc::GetBonePosition(DAT_0095ced4,6,local_90);
    mobyfunc::GetBonePosition(uVar1,4,local_70);
    uVar3 = 0x40d3880000000000;
    uVar2 = 0x408f400000000000;
    mobyutil::MB_SpawnSparksPair(0x40d3880000000000,0x408f400000000000,local_90,local_90,local_50);
    mobyfunc::GetBonePosition(uVar1,7,local_80);
    mobyfunc::GetBonePosition(uVar1,5,local_60);
    mobyutil::MB_SpawnSparksPair(uVar3,uVar2,local_80,local_80,local_40);
  }
  return;
}



//==== 002bc750  ns=mobyupdate_unsorted  size=0x110
// sig: undefined UpdateMoby_1813(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1813 */

void mobyupdate_unsorted::UpdateMoby_1813(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = mobyutil::MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar2);
    mobyutil::MB_SpawnDebrisMoby(0,lVar2,0x717,lVar2 + 0x10,lVar2 + 0x40,0,0);
    mobyutil::MB_SpawnReplacementMoby(lVar2,0x718);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002bc860  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1816(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1816 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1816(MobyInstance *moby)

{
  return moby;
}



//==== 002bc878  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M1818_002bc878(void)
// callers(1): 002beb68 mobyupdate_unsorted::UpdateMoby_1818
// callees(0): 

void mobyupdate_helpers::M1818_002bc878(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar4 = 0.0;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar6) == 0.0) {
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar6);
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar2 = fVar2 * fVar4;
    fVar1 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *param_2 = fVar2 + g_heroPosition.x;
  param_2[1] = fVar1 + g_heroPosition.y;
  fVar1 = g_heroPosition.z;
  param_2[3] = fVar5;
  param_2[2] = fVar4 + fVar1;
  return;
}



//==== 002bc960  ns=mobyupdate_helpers  size=0x128
// sig: undefined M1818_002bc960(void)
// callers(1): 002beb68 mobyupdate_unsorted::UpdateMoby_1818
// callees(0): 

void mobyupdate_helpers::M1818_002bc960(undefined8 param_1,float *param_2)

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
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar4 = 0.0;
  fVar5 = (g_heroMobyPtr->transform).v2.x;
  fVar6 = (g_heroMobyPtr->transform).v2.y;
  fVar7 = (g_heroMobyPtr->transform).v2.z;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar9 == 0.0) {
    fVar8 = (g_heroMobyPtr->transform).v1.w;
    fVar3 = fVar4;
    fVar1 = fVar4;
    fVar2 = fVar4;
  }
  else {
    fVar9 = 1.1 / fVar9;
    fVar8 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar2 * fVar9;
    fVar1 = fVar1 * fVar9;
    fVar3 = fVar3 * fVar9;
  }
  fVar11 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar9 = fVar4;
  fVar10 = fVar4;
  if (SQRT(fVar11) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar11);
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar10 = fVar5 * fVar4;
    fVar9 = fVar6 * fVar4;
    fVar4 = fVar7 * fVar4;
  }
  param_2[3] = fVar8;
  *param_2 = fVar2 + fVar10;
  param_2[1] = fVar1 + fVar9;
  param_2[2] = fVar3 + fVar4;
  *param_2 = fVar2 + fVar10 + g_heroPosition.x;
  param_2[1] = fVar1 + fVar9 + g_heroPosition.y;
  param_2[2] = fVar3 + fVar4 + g_heroPosition.z + 1.0;
  return;
}



//==== 002bca98  ns=mobyupdate_helpers  size=0x654
// sig: undefined M1818_002bca98(void)
// callers(1): 002bd110 mobyupdate_helpers::M1818_002bd110
// callees(3): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 005026a0 fastfunc::FastSubRots
// strings: 002bca88: 'Nnk(' (raw)

MobyInstance *
mobyupdate_helpers::M1818_002bca98
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 param_7,float *param_8,int param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *moby;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  int *piVar12;
  longlong lVar11;
  int iVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r25;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f21;
  double dVar24;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  double dVar26;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x170;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  puVar7[0x30] = in_LR;
  puVar7[0x23] = in_f21;
  puVar7[0x24] = in_f22;
  puVar7[0x25] = in_f23;
  puVar7[0x26] = in_f24;
  puVar7[0x27] = in_f25;
  puVar7[0x28] = in_f26;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  puVar7[0x1f] = unaff_r28;
  pMVar19 = (MobyInstance *)0x0;
  puVar7[0x22] = unaff_r31;
  puVar7[0x1e] = unaff_r27;
  puVar7[0x21] = unaff_r30;
  moby = DAT_00a49344;
  puVar7[0x20] = unaff_r29;
  puVar7[0x1d] = unaff_r26;
  puVar7[0x1c] = unaff_r25;
  dVar27 = 1000000000.0;
  if (moby != (MobyInstance *)0x0) {
    iVar18 = 0;
    do {
      if (moby->drawDistance != 0) {
        piVar12 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
        if ((((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) &&
            (piVar12 != (int *)0x0)) && (dVar24 = 0.0, 0 < *piVar12)) {
          fVar2 = param_8[1];
          fVar5 = fVar2 - (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar4 = *param_8 - fVar3;
          fVar6 = param_8[2] - (moby->pos).z;
          dVar26 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
          if (dVar26 < param_3) {
            fVar5 = fVar3 - *param_8;
            *(float *)(puVar7 + 0xe) = fVar3;
            fVar3 = (moby->pos).y;
            fVar2 = fVar3 - fVar2;
            *(float *)((int)puVar7 + 0x74) = fVar3;
            fVar3 = (moby->pos).z;
            *(float *)(puVar7 + 0xf) = fVar3;
            *(f32 *)((int)puVar7 + 0x7c) = (moby->pos).w;
            fVar6 = ABS(fVar5);
            *(float *)((int)puVar7 + 0x8c) = fVar5;
            fVar4 = ABS(fVar2);
            *(float *)(puVar7 + 0x12) = fVar2;
            fVar2 = *(float *)(param_9 + 8);
            *(float *)((int)puVar7 + 0x94) = fVar6 - fVar4;
            *(float *)(puVar7 + 0xf) = fVar3 + 0.4;
            dVar25 = 0.7853981852531433;
            uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
            fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
            fVar5 = ABS(*(float *)((int)puVar7 + 0x8c));
            if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
              fVar5 = fVar4;
            }
            fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
            fVar9 = ABS(*(float *)(puVar7 + 0x12));
            if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
              fVar9 = fVar6;
            }
            dVar21 = dVar24;
            if (0.0 < fVar5) {
              lVar11 = uVar10 - 0x160;
              lVar14 = uVar10 - 0xb8;
              lVar17 = uVar10 - 0xa8;
              lVar20 = 2;
              fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar7 + 0xc4) = fVar5;
              *(float *)((int)puVar7 + 0xbc) = fVar5;
              *(float *)(puVar7 + 0x18) = fVar5;
              *(float *)(puVar7 + 0x17) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar6;
              *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar5;
              *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar5 * fVar5;
                iVar13 = (int)lVar14;
                lVar11 = lVar11 + 8;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar20 = 4;
              lVar17 = uVar10 - 0xb8;
              pfVar15 = (float *)&DAT_007358e0;
              lVar11 = lVar1;
              lVar14 = lVar17;
              do {
                fVar5 = *pfVar15;
                fVar6 = pfVar15[1];
                pfVar15 = pfVar15 + 2;
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar5;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
                lVar14 = lVar14 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar14 = 2;
              lVar11 = lVar1;
              do {
                iVar13 = (int)lVar11;
                lVar11 = lVar11 + 0x10;
                iVar8 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar13 + 0xb8)) +
                                  *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                                 *(float *)(iVar8 + 0xc));
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
            }
            dVar21 = (double)fastfunc::FastSubRots(fVar2,(float)dVar21);
            dVar21 = (double)(float)(dVar21 * dVar21);
            fVar2 = param_8[2];
            fVar3 = *(float *)(param_9 + 4);
            if ((dVar21 < (double)(float)(param_1 * param_1)) ||
               ((dVar26 < param_4 && (dVar21 < (double)(float)(param_5 * param_5))))) {
              *(float *)(puVar7 + 0x10) = (float)dVar26;
              dVar22 = ABS((double)(*(float *)(puVar7 + 0xf) - fVar2));
              *(float *)((int)puVar7 + 0x84) = *(float *)(puVar7 + 0xf) - fVar2;
              *(float *)(puVar7 + 0x11) = (float)(ABS(dVar26) - dVar22);
              uVar16 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
              dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
              if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
                dVar23 = dVar22;
              }
              fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
              dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
              if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
                dVar22 = ABS(dVar26);
              }
              fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              if (dVar24 < dVar23) {
                lVar11 = uVar10 - 0x160;
                lVar17 = uVar10 - 200;
                lVar14 = uVar10 - 0xd8;
                lVar20 = 2;
                fVar4 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar7 + 0xa4) = fVar4;
                *(float *)((int)puVar7 + 0x9c) = fVar4;
                *(float *)(puVar7 + 0x14) = fVar4;
                *(float *)(puVar7 + 0x13) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar6;
                *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
                *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar4 * fVar4;
                  iVar13 = (int)lVar14;
                  lVar14 = lVar14 + 8;
                  lVar11 = lVar11 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar20 = 4;
                lVar17 = uVar10 - 0xd8;
                pfVar15 = (float *)&DAT_007358e0;
                lVar11 = lVar1;
                lVar14 = lVar17;
                do {
                  fVar4 = *pfVar15;
                  fVar6 = pfVar15[1];
                  pfVar15 = pfVar15 + 2;
                  *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar4;
                  lVar11 = lVar11 + 8;
                  *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
                  lVar14 = lVar14 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar14 = 2;
                lVar11 = lVar1;
                do {
                  iVar13 = (int)lVar11;
                  iVar8 = (int)lVar17;
                  lVar11 = lVar11 + 0x10;
                  lVar17 = lVar17 + 0x10;
                  dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                                    *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                                   *(float *)(iVar8 + 0xc));
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
                dVar24 = (double)((float)(dVar24 + dVar25) * fVar2 + fVar5);
              }
              dVar24 = (double)fastfunc::FastSubRots(fVar3,(float)dVar24);
              dVar24 = (double)(float)(dVar24 * dVar24);
              if ((((dVar24 < (double)(float)(param_2 * param_2)) ||
                   ((dVar26 < param_4 && (dVar24 < (double)(float)(param_6 * param_6))))) &&
                  (fVar2 = param_8[1] - *(float *)((int)puVar7 + 0x74),
                  dVar24 = (double)((float)(dVar21 * dVar24) *
                                   SQRT(SQRT((param_8[2] - *(float *)(puVar7 + 0xf)) *
                                             (param_8[2] - *(float *)(puVar7 + 0xf)) +
                                             (*param_8 - *(float *)(puVar7 + 0xe)) *
                                             (*param_8 - *(float *)(puVar7 + 0xe)) + fVar2 * fVar2))
                                   ), dVar24 < dVar27)) &&
                 ((iVar13 = collproc::CollLine(param_8,uVar10 - 0x100,0,param_7,0), iVar13 == 0 ||
                  ((((CollOutput.pMoby != (MobyInstance *)0x0 && (CollOutput.pMoby != g_heroMobyPtr)
                     ) && ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
                   ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
                dVar27 = dVar24;
                pMVar19 = moby;
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar18);
      iVar18 = iVar18 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar19;
}



//==== 002bd110  ns=mobyupdate_helpers  size=0xb24
// sig: undefined M1818_002bd110(void)
// callers(1): 002beb68 mobyupdate_unsorted::UpdateMoby_1818
// callees(7): 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0015d12c sound::PlayMobySound; 002a5158 mobyupdate_helpers::M1633_002a5158; 002bca98 mobyupdate_helpers::M1818_002bca98; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M1818_002bd110(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar19;
  MobyInstance *moby;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
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
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
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
  undefined1 auVar41 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1f0;
  puVar14 = (ulonglong *)lVar18;
  *puVar14 = uVar16;
  puVar14[0x40] = in_LR;
  puVar14[0x33] = in_f21;
  puVar14[0x34] = in_f22;
  puVar14[0x35] = in_f23;
  puVar14[0x36] = in_f24;
  puVar14[0x37] = in_f25;
  puVar14[0x38] = in_f26;
  puVar14[0x39] = in_f27;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  puVar14[0x31] = unaff_r30;
  puVar14[0x32] = unaff_r31;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  iVar19 = fastfunc::FastDecTimerS16(param_2 + 0x54);
  if (iVar19 != 0) {
    iVar19 = (int)param_2;
    mobyfunc::GetBonePosition(param_1,(*(byte *)(iVar19 + 0x56) & 1) + 1,uVar16 - 0x170);
    *(byte *)(iVar19 + 0x56) = *(byte *)(iVar19 + 0x56) ^ 1;
    moby = (MobyInstance *)
           M1818_002bca98((double)(DAT_007b7e04 * 0.017453292),(double)(DAT_007b7e08 * 0.017453292),
                          (double)DAT_007b7e00,0x4000000000000000,0x400921fb60000000,
                          0x400921fb60000000,param_1,uVar16 - 0x170,&param_1->rotation);
    if (moby == (MobyInstance *)0x0) {
      *(undefined4 *)(iVar19 + 0x60) = 0;
    }
    else {
      *(MobyInstance **)(iVar19 + 0x60) = moby;
      if (g_heroPosition.z + 1.1 < (param_1->pos).z) {
        fVar5 = (moby->pos).x - (param_1->pos).x;
        fVar1 = (moby->pos).y - (param_1->pos).y;
        fVar6 = ABS(fVar5);
        fVar12 = ABS(fVar1);
        *(float *)(puVar14 + 0x18) = fVar5;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        fVar5 = (param_1->rotation).z;
        *(float *)(puVar14 + 0x19) = fVar6 - fVar12;
        dVar34 = 0.0;
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x18));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar1 = fVar12;
        }
        fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar2 = ABS(*(float *)((int)puVar14 + 0xc4));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar27 = dVar34;
        if (0.0 < fVar1) {
          lVar17 = uVar16 - 0x1e0;
          lVar25 = uVar16 - 0x94;
          lVar22 = uVar16 - 0xa4;
          lVar26 = 2;
          fVar1 = (fVar2 - fVar1) / (fVar2 + fVar1);
          fVar2 = fVar1 * fVar1;
          *(float *)(puVar14 + 0x2b) = fVar1;
          *(float *)(puVar14 + 0x2a) = fVar1;
          *(float *)((int)puVar14 + 0x154) = fVar1;
          *(float *)((int)puVar14 + 0x14c) = fVar1;
          fVar1 = fVar2 * fVar2;
          *(float *)(puVar14 + 0x2a) = *(float *)(puVar14 + 0x2a) * fVar2;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar1;
          *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar1 * fVar2;
          do {
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar1 * fVar1;
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar25 = uVar16 - 0xa4;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar25;
          do {
            fVar1 = *pfVar23;
            fVar2 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * fVar1;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar2;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar22 = 2;
          lVar17 = lVar18;
          do {
            iVar20 = (int)lVar17;
            iVar15 = (int)lVar25;
            lVar17 = lVar17 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x14c)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar12 + fVar6);
        }
        dVar27 = (double)fastfunc::FastSubRots(fVar5,(float)dVar27);
        if ((dVar27 < 0.5235987901687622) && (g_gameMode != GAME_MODE_SCENE)) {
          dVar37 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar27 = (double)(moby->pos).z;
          iVar20 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          uVar7 = *(undefined4 *)((int)puVar14 + 0x8c);
          if (iVar20 == 0) {
            dVar33 = (double)DAT_007b7e10;
            dVar28 = dVar27;
          }
          else {
            dVar28 = (double)*(float *)(iVar20 + 0x10);
            dVar33 = dVar27;
          }
          fVar1 = (float)(dVar36 - (double)*(float *)((int)puVar14 + 0x84));
          fVar12 = (float)(dVar37 - (double)*(float *)(puVar14 + 0x10));
          fVar6 = (float)((double)(float)(dVar33 + dVar28) - (double)*(float *)(puVar14 + 0x11));
          dVar30 = (double)SQRT(fVar6 * fVar6 + fVar12 * fVar12 + fVar1 * fVar1);
          fVar5 = (float)((double)DAT_007b7e0c / dVar30);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          dVar29 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar29 = (double)(fVar12 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar29 = (double)(fVar12 * fVar5);
          }
          fVar1 = (float)((double)*(float *)((int)puVar14 + 0x84) + dVar27);
          fVar12 = (float)((double)*(float *)(puVar14 + 0x10) + dVar29);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          fVar2 = (float)(dVar36 - (double)fVar1);
          fVar3 = (float)(dVar37 - (double)fVar12);
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar3);
          fVar5 = (float)((double)*(float *)(puVar14 + 0x11) + dVar27);
          *(float *)((int)puVar14 + 0xb4) = fVar3;
          *(float *)(puVar14 + 0x17) = fVar2;
          *(float *)(puVar14 + 0x10) = fVar12;
          *(float *)((int)puVar14 + 0x84) = fVar1;
          *(float *)((int)puVar14 + 0xbc) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x11) = fVar5;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0xb4));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar32 = ABS((double)*(float *)(puVar14 + 0x17));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar32 = dVar30;
          }
          fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar31 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0xc4;
            lVar25 = uVar16 - 0xb4;
            lVar26 = 2;
            fVar4 = (float)(dVar32 - dVar27) / (float)(dVar32 + dVar27);
            fVar9 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)(puVar14 + 0x26) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            *(float *)((int)puVar14 + 300) = fVar4;
            fVar4 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar9;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar4;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar4 * fVar9;
            do {
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar4 * fVar4;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xc4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar4 = *pfVar23;
              fVar9 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar4;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 300)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar31 = (double)((float)(dVar27 + dVar35) * fVar6 + fVar8);
          }
          fVar6 = (float)((double)fVar1 - dVar36);
          fVar8 = (float)((double)fVar12 - dVar37);
          fVar4 = (float)((double)(float)(dVar33 + dVar28) - (double)fVar5);
          *(float *)((int)puVar14 + 0xac) = fVar4;
          dVar37 = ABS((double)fVar4);
          fVar6 = SQRT(fVar8 * fVar8 + fVar6 * fVar6);
          dVar36 = ABS((double)fVar6);
          *(float *)(puVar14 + 0x15) = fVar6;
          *(float *)(puVar14 + 0x16) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)(puVar14 + 0x15));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar27 = dVar37;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar14 + 0xac));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar28 = dVar36;
          }
          fVar9 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar33 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0xd4;
            lVar22 = uVar16 - 0xe4;
            lVar26 = 2;
            fVar10 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar11 = fVar10 * fVar10;
            *(float *)(puVar14 + 0x23) = fVar10;
            *(float *)(puVar14 + 0x22) = fVar10;
            *(float *)((int)puVar14 + 0x114) = fVar10;
            *(float *)((int)puVar14 + 0x10c) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar11;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar10;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar10 * fVar10;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xe4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar10 = *pfVar23;
              fVar11 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar10;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar11;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              iVar15 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x10c)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar33 = (double)((float)(dVar27 + dVar35) * fVar8 + fVar9);
          }
          *(float *)((int)puVar14 + 0x9c) = fVar3;
          *(float *)((int)puVar14 + 0xa4) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x14) = fVar2;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x9c));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar28 = ABS((double)*(float *)(puVar14 + 0x14));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar28 = dVar30;
          }
          dVar30 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0x104;
            lVar25 = uVar16 - 0xf4;
            lVar26 = 2;
            fVar8 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar9 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1f) = fVar8;
            *(float *)(puVar14 + 0x1e) = fVar8;
            *(float *)((int)puVar14 + 0xf4) = fVar8;
            *(float *)((int)puVar14 + 0xec) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar9;
            *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar8;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar8 * fVar8;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar8 * fVar8;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x104;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar8 = *pfVar23;
              fVar9 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0xec)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar30 = (double)((float)(dVar27 + dVar35) * fVar3 + fVar2);
          }
          *(float *)((int)puVar14 + 0x94) = fVar4;
          *(float *)(puVar14 + 0x12) = fVar6;
          *(float *)(puVar14 + 0x13) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
          uVar21 = uVar24 << 2 | 0x735900;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x94));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar27 = dVar36;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar36 = ABS((double)*(float *)(puVar14 + 0x12));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar36 = dVar37;
          }
          fVar2 = *(float *)((int)uVar21 + 4);
          if (dVar34 < dVar36) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0x114;
            lVar22 = uVar16 - 0x124;
            lVar26 = 2;
            fVar3 = (float)(dVar27 - dVar36) / (float)(dVar27 + dVar36);
            fVar8 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x1b) = fVar3;
            *(float *)(puVar14 + 0x1a) = fVar3;
            *(float *)((int)puVar14 + 0xd4) = fVar3;
            *(float *)((int)puVar14 + 0xcc) = fVar3;
            fVar3 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar8;
            *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar3;
            *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar3 * fVar8;
            do {
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x124;
            uVar21 = ZEXT48(&DAT_007358e0);
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              pfVar23 = (float *)uVar21;
              fVar3 = pfVar23[1];
              uVar21 = uVar21 + 8;
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * *pfVar23;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar17 = 2;
            do {
              iVar20 = (int)lVar18;
              iVar15 = (int)lVar25;
              lVar18 = lVar18 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xcc)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar34 = (double)((float)(dVar34 + dVar35) * fVar6 + fVar2);
          }
          *(float *)(puVar14 + 8) = fVar12;
          *(float *)(puVar14 + 9) = fVar5;
          *(float *)((int)puVar14 + 0x44) = fVar1;
          *(undefined4 *)((int)puVar14 + 0x4c) = uVar7;
          M1633_002a5158(dVar31,-dVar33,dVar30,-dVar34,param_1,uVar21,puVar14[8],puVar14[9]);
          sound::PlayMobySound(0,0,param_1);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x7dfc,0x7b0000);
          auVar38 = vectorConvertFromSignedFixedPointWord(auVar39,0);
          auVar39 = loadVectorLeftIndexed(0x1c,0x2bd0ec);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x54,param_2);
          *(undefined2 *)(iVar19 + 0x54) = uVar13;
          *(int *)(iVar19 + 0x5c) = *(int *)(iVar19 + 0x5c) + 1;
        }
      }
    }
  }
  return;
}



//==== 002bdc98  ns=mobyupdate_helpers  size=0xc54
// sig: undefined M1818_002bdc98(void)
// callers(1): 002beb68 mobyupdate_unsorted::UpdateMoby_1818
// callees(3): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100ef8 mobyutil::MB_MoveAndCollide2; 0010de78 mobyutil::MB_WrapRot

void mobyupdate_helpers::M1818_002bdc98(int param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x170;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x30] = in_LR;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  fVar29 = *param_2;
  puVar9[0x27] = unaff_r30;
  fVar3 = *(float *)(param_1 + 0x10);
  puVar9[0x28] = unaff_r31;
  fVar4 = *(float *)(param_1 + 0x14);
  fVar29 = fVar29 - fVar3;
  dVar26 = (double)fVar29;
  cVar1 = *(char *)(param_1 + 0x20);
  cVar2 = *(char *)(param_1 + 0xbc);
  fVar7 = param_2[1] - fVar4;
  dVar25 = (double)fVar7;
  dVar28 = (double)(param_2[2] - *(float *)(param_1 + 0x18));
  puVar9[0x26] = unaff_r29;
  fVar5 = g_heroPosition.x;
  fVar6 = g_heroPosition.y;
  if (cVar1 == '\x06') {
    fVar5 = param_2[0xc];
    fVar6 = param_2[0xd];
  }
  dVar27 = 0.7853981852531433;
  dVar24 = (double)SQRT((fVar3 - fVar5) * (fVar3 - fVar5) + (fVar4 - fVar6) * (fVar4 - fVar6));
  if (cVar2 == '\0') {
    *(float *)((int)puVar9 + 0x94) = fVar29;
    *(float *)(puVar9 + 0x13) = fVar7;
    *(float *)((int)puVar9 + 0x9c) = (float)(ABS(dVar26) - ABS(dVar25));
    dVar27 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar28 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar28 = ABS(dVar25);
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar29 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar25 = ABS((double)*(float *)(puVar9 + 0x13));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar25 = ABS(dVar26);
    }
    if (0.0 < dVar28) {
      lVar13 = uVar12 - 0x160;
      lVar16 = uVar12 - 0x70;
      lVar19 = uVar12 - 0x60;
      lVar20 = 2;
      fVar4 = (float)(dVar25 - dVar28) / (float)(dVar25 + dVar28);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x10c) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar4;
      *(float *)(puVar9 + 0x21) = fVar4;
      *(float *)(puVar9 + 0x20) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar5;
      *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
      *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar4 * fVar4;
        iVar15 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 0x70;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar19;
      do {
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar10 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x100)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar29);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar27,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
               (double)(mobyutil::g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    if (1.2999999523162842 < dVar24) {
      *(undefined1 *)(param_1 + 0xbc) = 2;
    }
  }
  else if (cVar2 == '\x02') {
    fVar5 = param_2[0x18];
    if (fVar5 == 0.0) {
      *(float *)(puVar9 + 0x11) = fVar29;
      *(float *)((int)puVar9 + 0x8c) = fVar7;
      *(float *)(puVar9 + 0x12) = (float)(ABS(dVar26) - ABS(dVar25));
      dVar22 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)(puVar9 + 0x11));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        dVar23 = ABS(dVar25);
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar29 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar21 = ABS((double)*(float *)((int)puVar9 + 0x8c));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        dVar21 = ABS(dVar26);
      }
      if (0.0 < dVar23) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0x90;
        lVar19 = uVar12 - 0x80;
        lVar20 = 2;
        fVar4 = (float)(dVar21 - dVar23) / (float)(dVar21 + dVar23);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xec) = fVar4;
        *(float *)((int)puVar9 + 0xe4) = fVar4;
        *(float *)(puVar9 + 0x1d) = fVar4;
        *(float *)(puVar9 + 0x1c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar5;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar4;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar4 * fVar4;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0x90;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0xe0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar29);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar22,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                 (double)(mobyutil::g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    }
    else {
      fVar3 = *(float *)((int)fVar5 + 0x10) - fVar3;
      fVar4 = *(float *)((int)fVar5 + 0x14) - fVar4;
      fVar7 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar9 + 0x7c) = fVar3;
      *(float *)(puVar9 + 0x10) = fVar4;
      *(float *)((int)puVar9 + 0x84) = fVar7 - fVar5;
      dVar23 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      fVar29 = ABS(*(float *)((int)puVar9 + 0x7c));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar29 = fVar5;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar9 + 0x10));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      if (0.0 < fVar29) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0xb0;
        lVar19 = uVar12 - 0xa0;
        lVar20 = 2;
        fVar29 = (fVar5 - fVar29) / (fVar5 + fVar29);
        fVar5 = fVar29 * fVar29;
        *(float *)((int)puVar9 + 0xcc) = fVar29;
        *(float *)((int)puVar9 + 0xc4) = fVar29;
        *(float *)(puVar9 + 0x19) = fVar29;
        *(float *)(puVar9 + 0x18) = fVar29;
        fVar29 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar5;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar29;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar29 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xc0) = *(float *)((int)lVar13 + 0xb0) * fVar29 * fVar29;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar29 * fVar29;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0xb0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar29 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xc0) = *(float *)((int)lVar13 + 0xc0) * fVar29;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0xc0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar23,(double)(DAT_007b7e40 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_007b7e44 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_007b7e48 * 0.017453292 * mobyutil::g_FrameTime),param_1,0x10c0000,
                 &DAT_010c5168);
    }
    dVar23 = (double)(DAT_0071f408 * 0.04);
    if (dVar24 <= 1.2999999523162842) {
      fVar29 = 0.25;
    }
    else {
      fVar29 = 0.13;
    }
    dVar22 = (double)(DAT_0071f40c * fVar29);
    fVar29 = (float)((double)(float)(dVar26 * dVar23 - (double)param_2[4]) * dVar22 +
                    (double)param_2[4]);
    fVar3 = (float)((double)(float)(dVar25 * dVar23 - (double)param_2[5]) * dVar22 +
                   (double)param_2[5]);
    fVar4 = (float)((double)(float)((double)(float)(dVar28 * dVar23 - (double)param_2[6]) * dVar22)
                    * (double)(DAT_0071f408 * -0.100000024 + 1.0) + (double)param_2[6]);
    param_2[4] = fVar29;
    param_2[5] = fVar3;
    param_2[6] = fVar4;
    if (*(char *)(param_1 + 0x20) == '\x06') {
      fVar5 = SQRT(fVar4 * fVar4 + fVar29 * fVar29 + fVar3 * fVar3);
      if (mobyutil::g_FrameTime * 2.7 < fVar5) {
        fVar5 = (mobyutil::g_FrameTime * 2.7) / fVar5;
        param_2[4] = fVar29 * fVar5;
        param_2[5] = fVar3 * fVar5;
        param_2[6] = fVar4 * fVar5;
      }
    }
    iVar15 = mobyutil::MB_MoveAndCollide2
                       (0x3ff0000000000000,(double)DAT_010c5184,param_1,param_2 + 4,0x10c0000,
                        DAT_010c5154,&DAT_010c5154,0);
    fVar4 = animationSpeed;
    fVar29 = param_2[5];
    fVar3 = param_2[4];
    if (iVar15 == 0) {
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    else if (SQRT(param_2[6] * param_2[6] + fVar3 * fVar3 + fVar29 * fVar29) < 0.005) {
      sVar8 = *(short *)(param_2 + 0x14);
      *(short *)(param_2 + 0x14) = sVar8 + 1;
      puVar9[0x24] = (longlong)(int)(fVar4 * 20.5);
      if ((*(int *)((int)puVar9 + 0x124) < (int)(short)(sVar8 + 1)) &&
         (*(char *)(param_1 + 0x31) == '\0')) {
        *(float *)(param_1 + 0x10) = *param_2;
        *(float *)(param_1 + 0x14) = param_2[1];
        *(undefined2 *)(param_2 + 0x14) = 0;
        *(float *)(param_1 + 0x18) = param_2[2];
        *(float *)(param_1 + 0x1c) = param_2[3];
      }
    }
    if (dVar24 < 1.100000023841858) {
      fVar4 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      fVar5 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar6 = ABS(fVar4);
      fVar7 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar4;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar6 - fVar7;
      dVar25 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar11 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0xd0;
        lVar19 = uVar12 - 0xc0;
        lVar20 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar6;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar4;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xa0) = *(float *)((int)lVar13 + 0x90) * fVar4 * fVar4;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0xd0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xa0) = *(float *)((int)lVar13 + 0xa0) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar10 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xa0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + dVar27) * fVar7 + fVar5);
      }
      fVar4 = (float)(dVar25 + 1.570796251296997);
      dVar26 = (double)(float)(3.141592502593994 - dVar25);
      if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
        dVar26 = dVar25;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      dVar28 = (double)(float)(-3.141592502593994 - dVar25);
      if ((double)(float)(-3.141592502593994 - dVar25) - dVar26 < 0.0) {
        dVar28 = dVar26;
      }
      fVar7 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      dVar26 = (double)(float)(dVar28 * dVar28);
      fVar6 = fVar7 * fVar7;
      dVar25 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar28));
      fVar4 = fVar6 * fVar6 * fVar7;
      dVar27 = (double)(float)(dVar26 * dVar25);
      fVar5 = fVar6 * fVar4;
      param_2[4] = -((float)(1.100000023841858 - dVar24) *
                     (fVar6 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar4 * 0.0083330255 + fVar6 * fVar7 * -0.16666657 + fVar7) *
                     DAT_0071f40c * 0.1 - fVar3);
      param_2[5] = -((float)(1.100000023841858 - dVar24) *
                     ((float)(dVar26 * dVar27) * 2.601887e-06 +
                     (float)(dVar27 * -0.0001980741071747616 +
                            (double)(float)(dVar25 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar26 * dVar28) *
                                                           -0.16666656732559204 + dVar28)))) *
                     DAT_0071f40c * 0.1 - fVar29);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (1.2999999523162842 < dVar24) {
      *(undefined1 *)(param_1 + 0xbc) = 2;
    }
  }
  dVar25 = (double)*(float *)(param_1 + 0x40);
  fVar29 = mobyutil::MB_WrapRot(DAT_010c5168 * DAT_007b7e4c);
  *(float *)(param_1 + 0x40) =
       (float)((double)(fVar29 - *(float *)(param_1 + 0x40)) * (double)DAT_007b7e54 + dVar25);
  dVar25 = (double)*(float *)(param_1 + 0x44);
  fVar29 = mobyutil::MB_WrapRot
                     (DAT_007b7e50 *
                      SQRT(param_2[6] * param_2[6] +
                           param_2[4] * param_2[4] + param_2[5] * param_2[5]));
  *(float *)(param_1 + 0x44) =
       (float)((double)(fVar29 - *(float *)(param_1 + 0x44)) * (double)DAT_007b7e58 + dVar25);
  return;
}



//==== 002be8f8  ns=mobyupdate_helpers  size=0x100
// sig: undefined M1818_002be8f8(void)
// callers(0): 
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 001349f0 partupd::SpawnPart_74

void mobyupdate_helpers::M1818_002be8f8(int param_1)

{
  undefined1 auStack_40 [16];
  undefined1 local_30 [24];
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    mobyutil::MB_randRangeFloat(1.0,2.0);
    mobyfunc::GetBonePosition(param_1,0,auStack_40);
    partupd::SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e5c,1);
    partupd::SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e6c,1);
    partupd::SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e7c,1);
  }
  return;
}



//==== 002bea00  ns=mobyupdate_helpers  size=0x80
// sig: undefined M1818_002bea00(void)
// callers(0): 
// callees(1): 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1818_002bea00(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x78);
  iVar1 = 0;
  uVar3 = 0x3fb99999a0000000;
  uVar4 = 0x3fb47ae140000000;
  do {
    mobyutil::MB_DrawGlowFX(uVar3,uVar4,uVar2 + 0x70,0x2528aa28);
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 0x10;
  } while (iVar1 < 2);
  return;
}



//==== 002bea80  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M1818_002bea80(void)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M1818_002bea80(MobyInstance *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  uVar2 = ZEXT48(param_1->pVar);
  do {
    mobyfunc::GetBonePosition(param_1,iVar1 + 3,uVar2 + 0x70);
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 0x10;
  } while (iVar1 < 2);
  RegisterFuncForMoby(&PTR_M1818_002bea00_0070afe8,param_1);
  return;
}



//==== 002beb68  ns=mobyupdate_unsorted  size=0x1fcc
// sig: undefined UpdateMoby_1818(MobyInstance * moby)
// callers(0): 
// callees(30): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00106150 mobyutil::MB_RegisterLameShadow; 00110950 mobyutil::MB_RandomizeVector; 00110b70 mobyutil::MB_IsPntInCuboid; 0012f8c0 partupd::SpawnPart_53; 001349f0 partupd::SpawnPart_74; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002bc878 mobyupdate_helpers::M1818_002bc878; 002bc960 mobyupdate_helpers::M1818_002bc960; 002bd110 mobyupdate_helpers::M1818_002bd110; 002bdc98 mobyupdate_helpers::M1818_002bdc98; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005c8318 rand; 005cd098 libc::printf
// strings: 0096c074: 'None' | 00655ad4: 'mouse already completed\n' | 00655af4: 'no start house! killing mouse\n'

/* Moby 1818 */

void mobyupdate_unsorted::UpdateMoby_1818(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  ushort uVar9;
  short sVar10;
  float *pfVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar21;
  float fVar22;
  undefined8 uVar20;
  longlong lVar23;
  float *pfVar25;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  longlong lVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar26 = uVar18 - 0x210;
  puVar14 = (ulonglong *)lVar26;
  *puVar14 = uVar18;
  puVar14[0x44] = in_LR;
  puVar14[0x41] = in_f31;
  puVar14[0x40] = unaff_r31;
  puVar14[0x3f] = unaff_r30;
  puVar14[0x3e] = unaff_r29;
  puVar14[0x3d] = unaff_r28;
  puVar14[0x3c] = unaff_r27;
  puVar14[0x3b] = unaff_r26;
  puVar14[0x3a] = unaff_r25;
  if (moby != (MobyInstance *)0x0) {
    pfVar11 = (float *)moby->pVar;
    uVar27 = ZEXT48(pfVar11);
    if (pfVar11 != (float *)0x0) {
      fVar22 = pfVar11[0x12];
      if (fVar22 != -NAN) {
        if (moby->state < 5) {
          fVar2 = g_heroPosition.x - MobyInstance[(int)fVar22].pos.x;
          fVar4 = g_heroPosition.y - MobyInstance[(int)fVar22].pos.y;
          fVar5 = ABS(fVar2);
          fVar3 = ABS(fVar4);
          *(float *)((int)puVar14 + 0x104) = fVar2;
          *(float *)(puVar14 + 0x21) = fVar4;
          *(float *)((int)puVar14 + 0x10c) = fVar5 - fVar3;
          fVar2 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar14 + 0x104));
          if (*(float *)((int)puVar14 + 0x10c) - 0.0 < 0.0) {
            fVar4 = fVar3;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar14 + 0x21));
          if (*(float *)((int)puVar14 + 0x10c) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar28 = uVar18 - 0x200;
            lVar23 = uVar18 - 0x94;
            lVar24 = uVar18 - 0x84;
            lVar29 = 2;
            fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x31) = fVar4;
            *(float *)(puVar14 + 0x30) = fVar4;
            *(float *)((int)puVar14 + 0x184) = fVar4;
            *(float *)((int)puVar14 + 0x17c) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5;
            *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar4;
            *(float *)(puVar14 + 0x31) = *(float *)(puVar14 + 0x31) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x17c) = *(float *)((int)lVar28 + 0x16c) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar28 = lVar28 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0x94;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar4 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x17c) = *(float *)((int)lVar28 + 0x17c) * fVar4;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar23 = 2;
            lVar28 = lVar26;
            do {
              iVar21 = (int)lVar28;
              iVar16 = (int)lVar24;
              lVar28 = lVar28 + 0x10;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar21 + 0x17c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
          }
        }
        else {
          fVar2 = (moby->pos).x - MobyInstance[(int)fVar22].pos.x;
          fVar4 = (moby->pos).y - MobyInstance[(int)fVar22].pos.y;
          fVar5 = ABS(fVar2);
          fVar3 = ABS(fVar4);
          *(float *)(puVar14 + 0x22) = fVar2;
          *(float *)((int)puVar14 + 0x114) = fVar4;
          *(float *)(puVar14 + 0x23) = fVar5 - fVar3;
          fVar2 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar14 + 0x22));
          if (*(float *)(puVar14 + 0x23) - 0.0 < 0.0) {
            fVar4 = fVar3;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)((int)puVar14 + 0x114));
          if (*(float *)(puVar14 + 0x23) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar28 = uVar18 - 0x200;
            lVar24 = uVar18 - 100;
            lVar23 = uVar18 - 0x74;
            lVar29 = 2;
            fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x35) = fVar4;
            *(float *)(puVar14 + 0x34) = fVar4;
            *(float *)((int)puVar14 + 0x1a4) = fVar4;
            *(float *)((int)puVar14 + 0x19c) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar5;
            *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar4;
            *(float *)(puVar14 + 0x35) = *(float *)(puVar14 + 0x35) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x19c) = *(float *)((int)lVar28 + 0x18c) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0x74;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar4 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x19c) = *(float *)((int)lVar28 + 0x19c) * fVar4;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar23 = 2;
            lVar28 = lVar26;
            do {
              iVar21 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              iVar16 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar21 + 0x19c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
          }
        }
        *(float *)MobyInstance[(int)fVar22].pVar = fVar2;
        fVar22 = pfVar11[0x12];
      }
      if (fVar22 != -NAN) {
        MobyInstance[(int)fVar22].collision = (ushort *)0x0;
      }
      bVar1 = moby->state;
      if (2 < bVar1) {
        if (Cheats[0] == '\0') {
          if (*(char *)((int)pfVar11 + 0x91) != '\0') {
            mobyfunc::DetachManipulator(moby,pfVar11 + 0x24);
          }
        }
        else {
          if (*(char *)((int)pfVar11 + 0x91) == '\0') {
            mobyfunc::AttachManipulator(moby,5,pfVar11 + 0x24);
          }
          pfVar11[0x2c] = 2.1;
          pfVar11[0x2d] = 2.1;
          pfVar11[0x2e] = 2.1;
        }
        iVar21 = 0;
        uVar19 = ZEXT48(moby->pVar);
        do {
          mobyfunc::GetBonePosition(moby,iVar21 + 3,uVar19 + 0x70);
          iVar21 = iVar21 + 1;
          uVar19 = uVar19 + 0x10;
        } while (iVar21 < 2);
        RegisterFuncForMoby(&PTR_M1818_002bea00_0070afe8,moby);
        bVar1 = moby->state;
      }
      if (bVar1 == 7) {
        fVar22 = pfVar11[0x19];
        if (((fVar22 != -NAN) && (sound::g_SoundChannels[(int)fVar22].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar22].state != '\0')) {
          sound::sound_Kill((int)fVar22);
        }
        pfVar11[0x19] = -NAN;
        *(undefined1 *)(pfVar11 + 4) = 0;
        *(undefined1 *)((int)pfVar11 + 0x11) = 0;
        *(undefined1 *)((int)pfVar11 + 0x12) = 0;
        *(undefined1 *)((int)pfVar11 + 0x13) = 0;
        *(undefined1 *)(pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 0x15) = 0;
        *(undefined1 *)((int)pfVar11 + 0x16) = 0;
        *(undefined1 *)((int)pfVar11 + 0x17) = 0;
        *(undefined1 *)(pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 0x19) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
        *(undefined1 *)(pfVar11 + 7) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
        pMVar17 = MobyInstance;
        fVar22 = pfVar11[0x12];
        *pfVar11 = MobyInstance[(int)fVar22].pos.x;
        pfVar11[1] = pMVar17[(int)fVar22].pos.y;
        pfVar11[2] = pMVar17[(int)fVar22].pos.z;
        pfVar11[3] = pMVar17[(int)fVar22].pos.w;
        DAT_010c51a4 = (MobyInstance *)0x0;
        fVar22 = *pfVar11 - (moby->pos).x;
        fVar2 = pfVar11[1] - (moby->pos).y;
        fVar5 = ABS(fVar22);
        *(float *)(puVar14 + 0x1c) = fVar22;
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xe4) = fVar2;
        *(float *)(puVar14 + 0x1d) = fVar5 - fVar4;
        dVar31 = 0.0;
        uVar27 = (ulonglong)(*(uint *)(puVar14 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1d) & 4;
        fVar22 = ABS(*(float *)(puVar14 + 0x1c));
        if (*(float *)(puVar14 + 0x1d) - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
        fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)((int)puVar14 + 0xe4));
        if (*(float *)(puVar14 + 0x1d) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        if (0.0 < fVar22) {
          lVar28 = uVar18 - 0x200;
          lVar24 = uVar18 - 0xe4;
          lVar23 = uVar18 - 0xf4;
          lVar29 = 2;
          fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
          fVar5 = fVar22 * fVar22;
          *(float *)(puVar14 + 0x25) = fVar22;
          *(float *)(puVar14 + 0x24) = fVar22;
          *(float *)((int)puVar14 + 0x124) = fVar22;
          *(float *)((int)puVar14 + 0x11c) = fVar22;
          fVar22 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar5;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar22;
          *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar22 * fVar5;
          do {
            *(float *)((int)lVar28 + 0x11c) = *(float *)((int)lVar28 + 0x10c) * fVar22 * fVar22;
            iVar21 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar24 = uVar18 - 0xf4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar28 = lVar26;
          lVar23 = lVar24;
          do {
            fVar22 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar28 + 0x11c) = *(float *)((int)lVar28 + 0x11c) * fVar22;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
            lVar23 = lVar23 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar28 = 2;
          do {
            iVar21 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x11c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar31,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_010c5154,&DAT_010c5168);
        if (moby->animationId != '\0') {
          puVar14[0x38] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
        }
        MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x01';
        moby->drawDistance = 0;
        moby->state = '\x01';
      }
      else if (bVar1 == 6) {
        fVar22 = pfVar11[0x19];
        if (((fVar22 != -NAN) && (sound::g_SoundChannels[(int)fVar22].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar22].state != '\0')) {
          sound::sound_Kill((int)fVar22);
        }
        pfVar11[0x19] = -NAN;
        iVar21 = fastfunc::FastDecTimerS16(uVar27 + 0x52);
        if (iVar21 == 0) {
          *(undefined4 *)(puVar14 + 0x16) = 0;
          *(undefined4 *)((int)puVar14 + 0xb4) = 0;
          fVar6 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x17) = 0;
          *(undefined4 *)((int)puVar14 + 0xbc) = 0;
          fVar7 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x14) = fVar6;
          fVar6 = (moby->pos).z;
          *(f32 *)((int)puVar14 + 0xa4) = fVar7;
          fVar7 = (moby->pos).w;
          *(f32 *)(puVar14 + 0x15) = fVar6;
          *(f32 *)((int)puVar14 + 0xac) = fVar7;
          mobyutil::MB_RandomizeVector(DAT_007b7e2c,(float *)(uVar18 - 0x170));
          rand();
          rand();
          rand();
          rand();
          uVar20 = mobyutil::MB_randRange(DAT_007b7e24,DAT_007b7e28);
          uVar30 = mobyutil::MB_randRangeFloat(DAT_007b7e30,DAT_007b7e34);
          partupd::SpawnPart_53
                    (uVar30,0x3f50624de0000000,(double)(DAT_007b7e3c * DAT_0071f418),uVar18 - 0x170,
                     uVar20);
          iVar21 = 0x80 / DAT_007b7e20;
          moby->modeBits = moby->modeBits | DRAW_TRANSPARENT_WEIRD;
          moby->alpha = moby->alpha - (char)iVar21;
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,mobyutil::g_FrameTime * 25.132742);
          (moby->rotation).z = (float)dVar31;
        }
        else {
          moby->alpha = -0x80;
          (moby->pos).x = pfVar11[0xc];
          (moby->pos).y = pfVar11[0xd];
          (moby->pos).z = pfVar11[0xe];
          (moby->pos).w = pfVar11[0xf];
          *pfVar11 = pfVar11[0xc];
          pfVar11[1] = pfVar11[0xd];
          pfVar11[2] = pfVar11[0xe];
          pfVar11[3] = pfVar11[0xf];
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          moby->state = '\a';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
                NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
      }
      else if (bVar1 == 5) {
        if ((sound::g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (sound::g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)sound::PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        fVar22 = animationSpeed;
        sVar10 = *(short *)((int)pfVar11 + 0x52);
        puVar14[0x38] = (longlong)(int)(animationSpeed * 20.5);
        if (((int)sVar10 == *(int *)((int)puVar14 + 0x1c4)) ||
           (DAT_007b7e18 + -5 < (int)pfVar11[0x17])) {
          if (moby->animationId != '\x02') {
            puVar14[0x38] = (longlong)(int)(fVar22 * 5.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
        }
        else if ((*(int *)((int)puVar14 + 0x1c4) < (int)sVar10) && ((moby->field43_0x70 & 2U) != 0))
        {
          if (moby->animationId != '\x01') {
            iVar21 = mobyutil::MB_randRange(7,0xc);
            puVar14[0x38] = (longlong)iVar21;
            puVar14[0x38] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x38] + 0.5))
            ;
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          dVar31 = (double)mobyutil::MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar31;
        }
        if (((((DAT_0096ae10 == 0) || (DAT_0096ae38 != 5)) ||
             (hero::g_heroStateType == 0x14 || hero::g_heroStateType == 0x16)) ||
            ((g_heroType != '\0' || (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x14))))
           || ((iVar21 = fastfunc::FastDecTimerS32(uVar27 + 0x58), iVar21 != 0 ||
               (DAT_007b7e18 <= (int)pfVar11[0x17])))) {
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          fVar22 = pfVar11[0x19];
          *(short *)((int)pfVar11 + 0x52) = (short)DAT_007b7e20;
          if (((fVar22 != -NAN) && (sound::g_SoundChannels[(int)fVar22].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar22].state != '\0')) {
            sound::sound_Kill((int)fVar22);
          }
          pfVar11[0x19] = -NAN;
          sound::PlayMobySound(2,0,moby);
          moby->state = '\x06';
          if (pfVar11[0x12] != -NAN) {
            MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x05';
          }
        }
        else {
          mobyupdate_helpers::M1818_002bc960(moby,uVar27);
          mobyupdate_helpers::M1818_002bdc98(moby,uVar27);
        }
        mobyupdate_helpers::M1818_002bd110(moby,uVar27);
      }
      else if (bVar1 == 4) {
        if ((sound::g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (sound::g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)sound::PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        hero::TransitionMovement(0,1);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        fVar22 = pfVar11[0x12];
        if (fVar22 != -NAN) {
          MobyInstance[(int)fVar22].modeBits =
               MobyInstance[(int)fVar22].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x05';
      }
      else if (bVar1 == 3) {
        if ((sound::g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (sound::g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)sound::PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        fVar22 = (moby->pos).y - pfVar11[0xd];
        fVar2 = (moby->pos).x - pfVar11[0xc];
        if ((SQRT(fVar2 * fVar2 + fVar22 * fVar22) <= 0.6) || (*(short *)((int)pfVar11 + 0x52) != 0)
           ) {
          mobyupdate_helpers::M1818_002bc878(moby,uVar27);
          fVar22 = *pfVar11 - (moby->pos).x;
          fVar2 = pfVar11[1] - (moby->pos).y;
          fVar5 = ABS(fVar22);
          fVar4 = ABS(fVar2);
          *(float *)((int)puVar14 + 0xec) = fVar22;
          *(float *)(puVar14 + 0x1e) = fVar2;
          *(float *)((int)puVar14 + 0xf4) = fVar5 - fVar4;
          dVar31 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1d) & 4;
          fVar22 = ABS(*(float *)((int)puVar14 + 0xec));
          if (*(float *)((int)puVar14 + 0xf4) - 0.0 < 0.0) {
            fVar22 = fVar4;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar3 = ABS(*(float *)(puVar14 + 0x1e));
          if (*(float *)((int)puVar14 + 0xf4) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          if (0.0 < fVar22) {
            lVar28 = uVar18 - 0x200;
            lVar24 = uVar18 - 0xc4;
            lVar23 = uVar18 - 0xd4;
            lVar29 = 2;
            fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
            fVar5 = fVar22 * fVar22;
            *(float *)(puVar14 + 0x29) = fVar22;
            *(float *)(puVar14 + 0x28) = fVar22;
            *(float *)((int)puVar14 + 0x144) = fVar22;
            *(float *)((int)puVar14 + 0x13c) = fVar22;
            fVar22 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5;
            *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar22;
            *(float *)(puVar14 + 0x29) = *(float *)(puVar14 + 0x29) * fVar22 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x13c) = *(float *)((int)lVar28 + 300) * fVar22 * fVar22;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0xd4;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar22 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x13c) = *(float *)((int)lVar28 + 0x13c) * fVar22;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            do {
              iVar21 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              iVar16 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x13c)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
          }
          mobyutil::OrganicDeltAngSpeed
                    (dVar31,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                     (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
          pfVar11[6] = 0.0;
          uVar19 = mobyutil::MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
        }
        else {
          DAT_010c5158 = 0x3f333333;
          mobyupdate_helpers::M1818_002bc960(moby,uVar27);
          mobyupdate_helpers::M1818_002bdc98(moby,uVar27);
          uVar19 = 0;
          if (0x14 < *(short *)(pfVar11 + 0x14)) {
            uVar19 = 2;
          }
        }
        if (((uVar19 & 6) != 0) ||
           (fVar22 = (moby->pos).y - pfVar11[1], fVar2 = (moby->pos).x - *pfVar11,
           fVar4 = (moby->pos).z - pfVar11[2],
           SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar22 * fVar22) < 0.25)) {
          if (moby->animationId != '\x02') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          moby->state = '\x04';
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x44,0x2beafc);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar33,0x52,uVar27);
          *(undefined2 *)((int)pfVar11 + 0x52) = uVar12;
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x01') {
            iVar21 = mobyutil::MB_randRange(7,0xc);
            puVar14[0x38] = (longlong)iVar21;
            puVar14[0x38] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x38] + 0.5))
            ;
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          dVar31 = (double)mobyutil::MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar31;
        }
      }
      else if (bVar1 == 2) {
        if (pfVar11[0x12] == -NAN) {
          *(undefined2 *)((int)pfVar11 + 0x52) = 0;
          moby->drawDistance = 0xff;
          if (moby->animationId != '\0') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          if (pfVar11[0x19] == -NAN) {
            fVar22 = (float)sound::PlayMobySound(1,4,moby);
            pfVar11[0x19] = fVar22;
          }
          moby->state = '\x03';
        }
        else if (MobyInstance[(int)pfVar11[0x12]].state == '\x05') {
          if (moby->animationId != '\0') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          moby->state = '\x03';
          *(undefined2 *)((int)pfVar11 + 0x52) = 0;
          moby->drawDistance = 0xff;
        }
      }
      else if (bVar1 == 1) {
        if ((UnlockableItems.sonicSummoner != '\0') && (DAT_0096ae38 == 5)) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          pfVar11[0x17] = 0.0;
          fVar22 = animationSpeed;
          auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x7e14,0x7b0000);
          auVar34 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x2beafc);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar31 = 0.5;
          auVar33 = vectorAddFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar35);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x58,
                              uVar27);
          *(undefined4 *)((uint)(pfVar11 + 0x16) & 0xfffffffc) = uVar13;
          if ((moby->enabled != '\0') &&
             (((moby->field43_0x70 & 2U) != 0 && (moby->animationId != '\x02')))) {
            puVar14[0x38] = (longlong)(int)(fVar22 * 10.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          if (pfVar11[0x12] != -NAN) {
            iVar21 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar11[0x10]);
            MobyInstance[(int)pfVar11[0x12]].setByGroup =
                 ((byte)((LZCOUNT(-iVar21) << 0x3a) >> 0x3f) & 0xfe) + 3;
          }
          if ((DAT_0096ae10 != 0) && (DAT_0096ae38 == 5)) {
            fVar22 = g_heroPosition.x - (moby->pos).x;
            fVar2 = g_heroPosition.y - (moby->pos).y;
            fVar5 = ABS(fVar22);
            fVar4 = ABS(fVar2);
            *(float *)(puVar14 + 0x1f) = fVar22;
            *(float *)((int)puVar14 + 0xfc) = fVar2;
            *(float *)(puVar14 + 0x20) = fVar5 - fVar4;
            dVar32 = 0.0;
            uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
            fVar22 = ABS(*(float *)(puVar14 + 0x1f));
            if (*(float *)(puVar14 + 0x20) - 0.0 < 0.0) {
              fVar22 = fVar4;
            }
            fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar3 = ABS(*(float *)((int)puVar14 + 0xfc));
            if (*(float *)(puVar14 + 0x20) - 0.0 < 0.0) {
              fVar3 = fVar5;
            }
            if (0.0 < fVar22) {
              lVar28 = uVar18 - 0x200;
              lVar24 = uVar18 - 0xa4;
              lVar23 = uVar18 - 0xb4;
              lVar29 = 2;
              fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
              fVar5 = fVar22 * fVar22;
              *(float *)(puVar14 + 0x2d) = fVar22;
              *(float *)(puVar14 + 0x2c) = fVar22;
              *(float *)((int)puVar14 + 0x164) = fVar22;
              *(float *)((int)puVar14 + 0x15c) = fVar22;
              fVar22 = fVar5 * fVar5;
              *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar5;
              *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar22;
              *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar22 * fVar5;
              do {
                *(float *)((int)lVar28 + 0x15c) = *(float *)((int)lVar28 + 0x14c) * fVar22 * fVar22;
                iVar21 = (int)lVar23;
                lVar23 = lVar23 + 8;
                lVar28 = lVar28 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar29 = 4;
              lVar24 = uVar18 - 0xb4;
              pfVar25 = (float *)&DAT_007358e0;
              lVar28 = lVar26;
              lVar23 = lVar24;
              do {
                fVar22 = *pfVar25;
                fVar5 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar28 + 0x15c) = *(float *)((int)lVar28 + 0x15c) * fVar22;
                lVar28 = lVar28 + 8;
                *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
                lVar23 = lVar23 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar28 = 2;
              do {
                iVar21 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                iVar16 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar21 + 0x15c)) +
                                  *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                                 *(float *)(iVar16 + 0xc));
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar2);
            }
            mobyutil::OrganicDeltAngSpeed
                      (dVar32,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                       (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168)
            ;
            pMVar17 = MobyInstance;
            fVar4 = g_heroPosition.x;
            fVar2 = pfVar11[0x12];
            *(f32 *)(puVar14 + 0x10) = MobyInstance[(int)fVar2].pos.x;
            *(f32 *)((int)puVar14 + 0x84) = pMVar17[(int)fVar2].pos.y;
            fVar22 = pMVar17[(int)fVar2].pos.z;
            *(float *)(puVar14 + 0x11) = fVar22;
            fVar5 = g_heroPosition.y;
            *(f32 *)((int)puVar14 + 0x8c) = pMVar17[(int)fVar2].pos.w;
            *(float *)(puVar14 + 0x12) = fVar4;
            fVar2 = g_heroPosition.z;
            *(float *)((int)puVar14 + 0x94) = fVar5;
            fVar4 = g_heroPosition.w;
            *(float *)(puVar14 + 0x13) = fVar2;
            *(float *)((int)puVar14 + 0x9c) = fVar4;
            *(float *)(puVar14 + 0x11) = (float)((double)fVar22 + dVar31);
            *(float *)(puVar14 + 0x13) = fVar2 + 0.2;
            iVar21 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar11[0x10]);
            if ((iVar21 != 0) &&
               ((iVar21 = collproc::CollLine(uVar18 - 400,uVar18 - 0x180,0,moby,0), iVar21 == 0 ||
                (CollOutput.pMoby == g_heroMobyPtr)))) {
              mobyupdate_helpers::M1818_002bc878(moby,uVar27);
              if ((DAT_0096ae10 != 0) &&
                 ((*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1 &&
                  (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2))))
              {
                *(undefined1 *)(DAT_0096ae10 + 0x20) = 1;
              }
              DAT_010c51a4 = moby;
              hero::TransitionMovement(0x1f,0);
              hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0,0);
              if (pfVar11[0x12] == -NAN) {
                moby->drawDistance = 0xff;
                if (moby->animationId != '\0') {
                  puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
                }
                moby->state = '\x03';
              }
              else {
                MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x05';
                moby->state = '\x02';
              }
            }
          }
        }
      }
      else if (bVar1 == 0) {
        *(undefined1 *)pfVar11 = 0;
        *(undefined1 *)((int)pfVar11 + 1) = 0;
        *(undefined1 *)((int)pfVar11 + 2) = 0;
        *(undefined1 *)((int)pfVar11 + 3) = 0;
        *(undefined1 *)(pfVar11 + 1) = 0;
        *(undefined1 *)((int)pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 7) = 0;
        *(undefined1 *)(pfVar11 + 2) = 0;
        *(undefined1 *)((int)pfVar11 + 9) = 0;
        *(undefined1 *)((int)pfVar11 + 10) = 0;
        *(undefined1 *)((int)pfVar11 + 0xb) = 0;
        *(undefined1 *)(pfVar11 + 3) = 0;
        *(undefined1 *)((int)pfVar11 + 0xd) = 0;
        *(undefined1 *)((int)pfVar11 + 0xe) = 0;
        *(undefined1 *)((int)pfVar11 + 0xf) = 0;
        *(undefined1 *)(pfVar11 + 4) = 0;
        *(undefined1 *)((int)pfVar11 + 0x11) = 0;
        *(undefined1 *)((int)pfVar11 + 0x12) = 0;
        *(undefined1 *)((int)pfVar11 + 0x13) = 0;
        *(undefined1 *)(pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 0x15) = 0;
        *(undefined1 *)((int)pfVar11 + 0x16) = 0;
        *(undefined1 *)((int)pfVar11 + 0x17) = 0;
        *(undefined1 *)(pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 0x19) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
        *(undefined1 *)(pfVar11 + 7) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
        *(undefined2 *)(pfVar11 + 0x14) = 0;
        *(undefined2 *)((int)pfVar11 + 0x52) = 0;
        if (moby->animationId != '\0') {
          puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
        }
        moby->updateDistance = -1;
        moby->drawDistance = 0xff;
        pMVar17 = MobyInstance;
        fVar22 = pfVar11[0x12];
        if (fVar22 == -NAN) {
          libc::printf("no start house! killing mouse\n");
          mobyfunc::DeleteMoby(moby);
          return;
        }
        fVar2 = MobyInstance[(int)fVar22].pos.x;
        (moby->pos).x = fVar2;
        (moby->pos).y = pMVar17[(int)fVar22].pos.y;
        fVar4 = pMVar17[(int)fVar22].pos.z;
        (moby->pos).z = fVar4;
        (moby->pos).w = pMVar17[(int)fVar22].pos.w;
        uVar9 = moby->uid;
        (moby->pos).z = fVar4 + 0.02;
        if (((&DAT_00a545c4)[(short)uVar9] != '\0') ||
           ((*(uint *)(&DAT_00a0cd1c +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
            1 << (uVar9 & 0x1f)) != 0)) {
          libc::printf("mouse already completed\n");
          mobyfunc::DeleteMoby(moby);
          return;
        }
        pfVar11[8] = fVar2;
        pfVar11[9] = (moby->pos).y;
        pfVar11[10] = (moby->pos).z;
        pfVar11[0xb] = (moby->pos).w;
        pfVar11[0xc] = (moby->pos).x;
        pfVar11[0xd] = (moby->pos).y;
        pfVar11[0xe] = (moby->pos).z;
        pfVar11[0xf] = (moby->pos).w;
        mobyutil::MB_InitDefaultParams((float *)&DAT_010c5154);
        DAT_010c515c = 0x3e19999a;
        DAT_010c5160 = 0x3e19999a;
        DAT_010c5168 = DAT_0071f408 * 0.4;
        DAT_010c518c = DAT_010c518c | 8;
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        DAT_010c5164 = DAT_0071f408 * 0.01;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        DAT_010c5178 = mobyutil::g_FrameTime * 2.7;
        DAT_010c5154 = 500;
        DAT_010c5158 = 0x3e99999a;
        DAT_010c5184 = 0x3ba3d70a;
        DAT_010c5190 = DAT_0071f418 * 6.2831855;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        DAT_010c5194 = DAT_0071f418 * 3.1415927;
        DAT_010c5198 = mobyutil::g_FrameTime * 11.519173;
        auVar33 = loadVectorLeftIndexed(0x28,0x2beafc);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        DAT_010c519c = storeVectorElementWordIndexed
                                 (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48
                                  ,0x10c5154);
        DAT_010c517c = 0x40490fdb;
        DAT_010c5170 = DAT_010c5164;
        moby->state = '\x01';
        moby->drawDistance = 0;
      }
      if ((1 < moby->state) && (mobyutil::MB_RegisterLameShadow(0.3,moby), moby->enabled != '\0')) {
        *(undefined4 *)(puVar14 + 0x1a) = 0;
        *(undefined4 *)((int)puVar14 + 0xd4) = 0;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(undefined4 *)((int)puVar14 + 0xdc) = 0;
        dVar31 = (double)mobyutil::MB_randRangeFloat(1.0,2.0);
        lVar28 = uVar18 - 0x150;
        *(float *)(puVar14 + 0x1b) = -(float)(dVar31 * (double)mobyutil::g_FrameTime);
        mobyfunc::GetBonePosition(moby,0,lVar28);
        lVar26 = uVar18 - 0x140;
        partupd::SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e5c,1);
        partupd::SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e6c,1);
        partupd::SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e7c,1);
      }
      fVar22 = pfVar11[0x12];
      if (fVar22 != -NAN) {
        MobyInstance[(int)fVar22].collision = (MobyInstance[(int)fVar22].pClass)->collision;
      }
    }
  }
  return;
}



