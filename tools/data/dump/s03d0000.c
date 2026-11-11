//==== 003d0b20  ns=Global  size=0x278
// sig: undefined FUN_003d0b20(void)
// callers(1): 0040a4d8 mobyupdate_unsorted::UpdateMoby_668
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation

void FUN_003d0b20(MobyInstance *param_1,f32 *param_2,float *param_3)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x1a] = in_LR;
  puVar9[0x15] = unaff_r29;
  MVar5 = param_1->modeBits;
  puVar9[0x14] = unaff_r28;
  pvVar6 = param_1->pVar;
  puVar9[0x17] = unaff_r31;
  uVar1 = param_1->animationId;
  puVar9[0x16] = unaff_r30;
  param_1->modeBits =
       MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  param_1->state = '\x1b';
  if (uVar1 != '\v') {
    mobyutil::MB_SetAnimation(param_1,0xb,0,1);
  }
  (param_1->pos).x = *param_2;
  (param_1->pos).y = param_2[1];
  (param_1->pos).z = param_2[2];
  (param_1->pos).w = param_2[3];
  *(float *)((int)pvVar6 + 0x40) = *param_3;
  *(float *)((int)pvVar6 + 0x44) = param_3[1];
  *(float *)((int)pvVar6 + 0x48) = param_3[2];
  *(float *)((int)pvVar6 + 0x4c) = param_3[3];
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar3 = ABS(*param_3);
  fVar10 = ABS(param_3[1]);
  *(float *)(puVar9 + 0xe) = fVar3 - fVar10;
  fVar2 = 0.0;
  uVar15 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar8 >> 0x1d) & 4;
  fVar7 = fVar3;
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar7 = fVar10;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar8 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar10 = fVar3;
  }
  if (0.0 < fVar7) {
    lVar18 = uVar13 - 0xb0;
    lVar16 = uVar13 - 0x3c;
    lVar17 = uVar13 - 0x4c;
    lVar20 = 2;
    fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar9 + 0x10) = fVar7;
    *(float *)(puVar9 + 0xf) = fVar7;
    *(float *)((int)puVar9 + 0x7c) = fVar7;
    *(float *)((int)puVar9 + 0x74) = fVar7;
    fVar7 = fVar3 * fVar3;
    *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar3;
    *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar7;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar7 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar7 * fVar7;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x4c;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar7 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 0x74) * fVar7;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar11 = (int)lVar14;
      iVar12 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar2 = fVar2 + *(float *)(iVar11 + 0x74) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
              *(float *)(iVar12 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar8;
  }
  (param_1->rotation).z = fVar2;
  mobyfunc::UpdateMobyTransform(param_1);
  return;
}



//==== 003d0d98  ns=mobyupdate_helpers  size=0x58
// sig: undefined M582_003d0d98(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M582_003d0d98(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}



//==== 003d0df0  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M582_003d0df0(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M582_003d0df0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x288);
    if (-1 < iVar1) {
      *(int *)((int)MobyInstance[iVar1].pVar + 0x14c) =
           *(int *)((int)MobyInstance[iVar1].pVar + 0x14c) + -1;
    }
  }
  return;
}



//==== 003d0e7c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M582_003d0e7c(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M582_003d0e7c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 003d0ed4  ns=mobyupdate_helpers  size=0x38
// sig: undefined M582_003d0ed4(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M582_003d0ed4(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}



//==== 003d0f0c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M582_003d0f0c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M582_003d0f0c(int param_1)

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



//==== 003d0f50  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M582_003d0f50(void)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 003cd150 mobyupdate_helpers::M580_003cd150

void mobyupdate_helpers::M582_003d0f50(MobyInstance *param_1)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pvVar3 = param_1->pVar;
  if (param_1->group == 0xff) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
    do {
      uVar4 = *puVar6 & 0x7fff;
      if (((MobyInstance[uVar4].oClass == SANDSHARK_SPAWNER) && (MobyInstance[uVar4].state < 0x7f))
         && ((pMVar7 == (MobyInstance *)0x0 ||
             (uVar5 = mobyutil::MB_randInt(0xff), (uVar5 & 1) != 0)))) {
        pMVar7 = MobyInstance + uVar4;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  *(MobyInstance **)((int)pvVar3 + 0x27c) = pMVar7;
  if (pMVar7 == (MobyInstance *)0x0) {
    M580_003cd150(param_1,0,1,DAT_0084643c);
    M580_003cd150(param_1,2,3,DAT_00846438);
    M580_003cd150(param_1,4,5,DAT_00846440);
    M580_003cd150(param_1,6,7,DAT_00846440);
    M580_003cd150(param_1,8,9,DAT_00846444);
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    param_1->state = '\x1a';
    param_1->unk58 = 0.0;
    (param_1->pos).x = *(f32 *)((int)pvVar3 + 0x220);
    (param_1->pos).y = *(f32 *)((int)pvVar3 + 0x224);
    fVar1 = *(float *)((int)pvVar3 + 0x228);
    (param_1->pos).z = fVar1;
    (param_1->pos).w = *(f32 *)((int)pvVar3 + 0x22c);
    param_1->collision = (ushort *)0x0;
    (param_1->pos).z = fVar1 - 10.0;
  }
  return;
}



//==== 003d1128  ns=mobyupdate_helpers  size=0x50
// sig: undefined M582_003d1128(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M582_003d1128(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x3d1120);
  auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  DAT_00846494 = 0x10000;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010c9f80 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffff9f80,0x10d0000);
  return;
}



//==== 003d1180  ns=mobyupdate_unsorted  size=0x358
// sig: undefined UpdateMoby_582(MobyInstance * moby)
// callers(0): 
// callees(1): 0046615c FUN_0046615c

/* Moby 582 */

void mobyupdate_unsorted::UpdateMoby_582(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  
  piVar19 = (int *)moby->pVar;
  if (moby->state == 0) {
    iVar10 = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    iVar9 = DAT_00a1a860;
    do {
      iVar11 = 0;
      if (0 < iVar9) {
        iVar18 = iVar10 * 8;
        iVar16 = 0;
        piVar15 = piVar19 + iVar10 * 2 + 8;
        piVar14 = piVar19 + iVar10 * 2 + 1;
        piVar13 = piVar19 + iVar10 * 2 + 9;
        iVar17 = iVar9;
        do {
          iVar7 = DAT_00a1a85c;
          iVar2 = DAT_00a1a85c + iVar16;
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)((int)piVar19 + iVar18) = iVar2;
            iVar20 = 0;
            *piVar15 = *(int *)(iVar2 + 0xc);
            iVar12 = iVar7;
            if (0 < iVar17) {
              do {
                if (*(int *)(iVar12 + 0xc) != 0) {
                  iVar1 = *(int *)(iVar2 + 0x10);
                  pfVar5 = (float *)(*(int **)(iVar12 + 0x10) + **(int **)(iVar12 + 0x10) * 4);
                  fVar3 = *(float *)(iVar1 + 0x14) - pfVar5[1];
                  fVar4 = *(float *)(iVar1 + 0x10) - *pfVar5;
                  fVar6 = *(float *)(iVar1 + 0x18) - pfVar5[2];
                  if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
                    piVar15 = piVar15 + 2;
                    iVar7 = iVar7 + iVar20 * 0x20;
                    iVar18 = iVar18 + 8;
                    iVar10 = iVar10 + 1;
                    *piVar14 = iVar7;
                    piVar14 = piVar14 + 2;
                    *piVar13 = *(int *)(iVar7 + 0xc);
                    *(undefined4 *)(iVar7 + 0xc) = 0;
                    piVar13 = piVar13 + 2;
                    *(undefined4 *)(DAT_00a1a85c + iVar16 + 0xc) = 0;
                    iVar9 = DAT_00a1a860;
                    iVar17 = DAT_00a1a860;
                    break;
                  }
                }
                iVar20 = iVar20 + 1;
                iVar12 = iVar12 + 0x20;
              } while (iVar20 < iVar17);
            }
          }
          iVar11 = iVar11 + 1;
          iVar16 = iVar16 + 0x20;
        } while (iVar11 < iVar17);
      }
    } while (iVar10 < 4);
    iVar9 = 0;
    do {
      FUN_0046615c(&Cuboids[piVar19[0x10]].pos);
      iVar9 = iVar9 + 1;
      piVar19 = piVar19 + 1;
    } while (iVar9 < 2);
  }
  else if (moby->state < 2) {
    iVar9 = 0;
    DAT_00969eaa = 5;
    do {
      if ((hero::g_heroStateType != 0xf) ||
         ((DAT_0096a240 != *(int *)(*piVar19 + 0x10) &&
          (DAT_0096a240 != *(int *)(piVar19[1] + 0x10))))) {
        iVar10 = *piVar19;
        fVar3 = g_heroPosition.y - *(float *)(*(int *)(iVar10 + 0x10) + 0x14);
        fVar4 = g_heroPosition.y - *(float *)(*(int *)(piVar19[1] + 0x10) + 0x14);
        fVar6 = g_heroPosition.x - *(float *)(*(int *)(iVar10 + 0x10) + 0x10);
        fVar8 = g_heroPosition.x - *(float *)(*(int *)(piVar19[1] + 0x10) + 0x10);
        if (SQRT(fVar8 * fVar8 + fVar4 * fVar4) <= SQRT(fVar6 * fVar6 + fVar3 * fVar3)) {
          *(undefined4 *)(iVar10 + 0xc) = 0;
          *(int *)(piVar19[1] + 0xc) = piVar19[9];
        }
        else {
          *(int *)(iVar10 + 0xc) = piVar19[8];
          *(undefined4 *)(piVar19[1] + 0xc) = 0;
        }
      }
      iVar9 = iVar9 + 1;
      piVar19 = piVar19 + 2;
    } while (iVar9 < 4);
  }
  return;
}



//==== 003d14d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M583_003d14d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M583_003d14d8(void)

{
  DAT_0084650c = 0x10000;
  return;
}



//==== 003d1510  ns=mobyupdate_unsorted  size=0x7f8
// sig: undefined UpdateMoby_583(MobyInstance * moby)
// callers(0): 
// callees(8): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000ffb70 mobyutil::GetGroundZ; 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 583 */

void mobyupdate_unsorted::UpdateMoby_583(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  int iVar10;
  float *speed;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pfVar6 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_00846530;
  if (moby->state == 0) {
    moby->collision = (ushort *)0x0;
    (moby->pos).z = (moby->pos).z + 1.0;
    dVar11 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0);
    (moby->pos).z = (float)dVar11;
    *pfVar6 = (moby->pos).x;
    pfVar6[1] = (moby->pos).y;
    bVar1 = CollOutput.pMoby != (MobyInstance *)0x0;
    pfVar6[2] = (moby->pos).z;
    pfVar6[3] = (moby->pos).w;
    if (bVar1) {
      pfVar6[0xe] = 1.4013e-45;
    }
    pMVar9 = mobyfunc::CreateMoby(0x6eb);
    pMVar9->updateDistance = '@';
    pMVar9->drawDistance = 0x56;
    pMVar9->enabled = '\x01';
    pMVar9->scale = pMVar9->pClass->gScale * DAT_00846530;
    (pMVar9->pos).x = *pfVar6;
    (pMVar9->pos).y = pfVar6[1];
    (pMVar9->pos).z = pfVar6[2];
    (pMVar9->pos).w = pfVar6[3];
    (pMVar9->rotation).x = (moby->rotation).x;
    (pMVar9->rotation).y = (moby->rotation).y;
    (pMVar9->rotation).z = (moby->rotation).z;
    (pMVar9->rotation).w = (moby->rotation).w;
    mobyfunc::UpdateMobyTransform(pMVar9);
    pfVar6[7] = (float)pMVar9;
    pMVar9 = mobyfunc::CreateMoby(GREEN_LIGHT_0680|EXPLOSION_0070);
    pfVar6[5] = (float)pMVar9;
    pMVar9->updateDistance = '@';
    *(undefined2 *)((int)pfVar6[5] + 0x32) = 0x56;
    *(undefined1 *)((int)pfVar6[5] + 0x31) = 1;
    *(float *)((int)pfVar6[5] + 0x2c) =
         *(float *)(*(int *)((int)pfVar6[5] + 0x24) + 0x24) * DAT_00846530;
    fVar7 = pfVar6[5];
    *(f32 *)((int)fVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)((int)fVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)((int)fVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)((int)fVar7 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar6[5]);
    pMVar9 = mobyfunc::CreateMoby(GREEN_LIGHT_0680|EXPLOSION_0070);
    pfVar6[6] = (float)pMVar9;
    pMVar9->updateDistance = '@';
    *(undefined2 *)((int)pfVar6[6] + 0x32) = 0x40;
    *(undefined1 *)((int)pfVar6[6] + 0x31) = 1;
    *(float *)((int)pfVar6[6] + 0x2c) =
         *(float *)(*(int *)((int)pfVar6[6] + 0x24) + 0x24) * DAT_00846530;
    fVar7 = pfVar6[6];
    *(f32 *)((int)fVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)((int)fVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)((int)fVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)((int)fVar7 + 0x4c) = (moby->rotation).w;
    dVar11 = (double)fastfunc::FastWrapRot(*(float *)((int)pfVar6[6] + 0x48),3.14159);
    *(float *)((int)pfVar6[6] + 0x48) = (float)dVar11;
    mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar6[6]);
    fVar7 = (moby->pos).z;
    moby->state = '\x01';
    pfVar6[4] = fVar7;
    pfVar6[0xd] = DAT_00846538;
    moby->collision = moby->pClass->collision;
    return;
  }
  if (1 < moby->state) {
    return;
  }
  if (((g_gameMode == GAME_MODE_SCENE) && (pfVar6[0xe] != 0.0)) && (update::g_SceneId == 3)) {
    if ((MobyInstance *)pfVar6[5] != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby((MobyInstance *)pfVar6[5]);
    }
    if ((MobyInstance *)pfVar6[6] != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby((MobyInstance *)pfVar6[6]);
    }
    if ((MobyInstance *)pfVar6[7] != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby((MobyInstance *)pfVar6[7]);
    }
    mobyfunc::DeleteMoby(moby);
  }
  dVar11 = (double)pfVar6[9];
  dVar15 = 0.0;
  if (pfVar6[9] == 0.0) goto LAB_003d18f8;
  if (pfVar6[0xc] == 0.0) {
    iVar10 = fastfunc::FastDecTimerS32(pfVar6 + 0xb);
    if (iVar10 != 2) {
      dVar11 = (double)pfVar6[9];
      goto LAB_003d1864;
    }
LAB_003d1890:
    dVar11 = dVar15;
    sound::PlayMobySound(0,0,moby);
    pfVar6[9] = 0.0;
    dVar15 = dVar11;
  }
  else {
LAB_003d1864:
    if ((g_gameMode == GAME_MODE_SCENE) && (3 < update::g_SceneId)) goto LAB_003d1890;
  }
  if ((g_framesNotGrounded == 0) && (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
    dVar11 = dVar15;
    sound::PlayMobySound(0,0,moby);
    pfVar6[9] = 0.0;
    dVar15 = dVar11;
  }
LAB_003d18f8:
  speed = pfVar6 + 10;
  if (dVar11 == dVar15) {
    if (pfVar6[0xd] == DAT_00846538) {
      mobyutil::OrganicDelt
                ((float)dVar11,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 pfVar6 + 8,0x720000,speed);
    }
    else {
      mobyutil::OrganicDelt
                (DAT_00846538,DAT_0071f418 * 16.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 8.0,
                 pfVar6 + 0xd,0x720000,speed);
    }
  }
  else if ((double)pfVar6[8] == dVar11) {
    mobyutil::OrganicDelt
              (DAT_00846534,DAT_0071f418 * 16.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 8.0,
               pfVar6 + 0xd,0x840000,speed);
  }
  else {
    mobyutil::OrganicDelt
              ((float)dVar11,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
               pfVar6 + 8,0x720000,speed);
  }
  fVar7 = pfVar6[5];
  if (fVar7 != 0.0) {
    fVar2 = *(float *)((int)fVar7 + 0xd4);
    fVar3 = *(float *)((int)fVar7 + 0xd0);
    fVar4 = *(float *)((int)fVar7 + 0xd8);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar11 == dVar15) {
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar11 = dVar15;
      dVar13 = dVar15;
      dVar14 = dVar15;
    }
    else {
      fVar8 = (float)(-(double)pfVar6[8] / dVar11);
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar14 = (double)(fVar3 * fVar8);
      dVar13 = (double)(fVar2 * fVar8);
      dVar11 = (double)(fVar4 * fVar8);
    }
    *(float *)((int)fVar7 + 0x10) = (float)dVar14;
    *(float *)((int)fVar7 + 0x14) = (float)dVar13;
    *(float *)((int)fVar7 + 0x18) = (float)dVar11;
    *(undefined4 *)((int)fVar7 + 0x1c) = uVar5;
    fVar8 = pfVar6[5];
    fVar2 = *(float *)((int)fVar8 + 0xe4);
    fVar3 = *(float *)((int)fVar8 + 0xe0);
    fVar4 = *(float *)((int)fVar8 + 0xe8);
    dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = (float)((double)(pfVar6[8] * -0.2) / dVar13);
    dVar11 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar14 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    dVar12 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)fVar8 + 0x18) = (float)((double)*(float *)((int)fVar8 + 0x18) + dVar11);
    *(float *)((int)fVar8 + 0x14) = (float)((double)*(float *)((int)fVar8 + 0x14) + dVar14);
    *(float *)((int)fVar8 + 0x10) = (float)((double)*(float *)((int)fVar8 + 0x10) + dVar12);
    fVar7 = pfVar6[5];
    *(float *)((int)fVar7 + 0x10) = *(float *)((int)fVar7 + 0x10) + *pfVar6;
    *(float *)((int)fVar7 + 0x14) = *(float *)((int)fVar7 + 0x14) + pfVar6[1];
    *(float *)((int)fVar7 + 0x18) = *(float *)((int)fVar7 + 0x18) + pfVar6[2];
    mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar6[5]);
  }
  fVar7 = pfVar6[6];
  if (fVar7 != 0.0) {
    fVar2 = *(float *)((int)fVar7 + 0xd4);
    fVar3 = *(float *)((int)fVar7 + 0xd0);
    fVar4 = *(float *)((int)fVar7 + 0xd8);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar11 == dVar15) {
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar11 = dVar15;
      dVar13 = dVar15;
      dVar14 = dVar15;
    }
    else {
      fVar8 = (float)(-(double)pfVar6[8] / dVar11);
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar14 = (double)(fVar3 * fVar8);
      dVar13 = (double)(fVar2 * fVar8);
      dVar11 = (double)(fVar4 * fVar8);
    }
    *(float *)((int)fVar7 + 0x10) = (float)dVar14;
    *(float *)((int)fVar7 + 0x14) = (float)dVar13;
    *(float *)((int)fVar7 + 0x18) = (float)dVar11;
    *(undefined4 *)((int)fVar7 + 0x1c) = uVar5;
    fVar8 = pfVar6[6];
    fVar2 = *(float *)((int)fVar8 + 0xe4);
    fVar3 = *(float *)((int)fVar8 + 0xe0);
    fVar4 = *(float *)((int)fVar8 + 0xe8);
    dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = (float)((double)(pfVar6[8] * -0.2) / dVar13);
    dVar11 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar14 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    dVar12 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)fVar8 + 0x18) = (float)((double)*(float *)((int)fVar8 + 0x18) + dVar11);
    *(float *)((int)fVar8 + 0x14) = (float)((double)*(float *)((int)fVar8 + 0x14) + dVar14);
    *(float *)((int)fVar8 + 0x10) = (float)((double)*(float *)((int)fVar8 + 0x10) + dVar12);
    fVar7 = pfVar6[6];
    *(float *)((int)fVar7 + 0x10) = *(float *)((int)fVar7 + 0x10) + *pfVar6;
    *(float *)((int)fVar7 + 0x14) = *(float *)((int)fVar7 + 0x14) + pfVar6[1];
    *(float *)((int)fVar7 + 0x18) = *(float *)((int)fVar7 + 0x18) + pfVar6[2];
    mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar6[6]);
  }
  (moby->pos).z = pfVar6[4] + pfVar6[0xd];
  return;
}



//==== 003d1d10  ns=Global  size=0x460
// sig: undefined FUN_003d1d10(void)
// callers(2): 00275240 mobyupdate_helpers::M1422_00275240; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 005026a0 fastfunc::FastSubRots

MobyInstance * FUN_003d1d10(float *param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar20;
  ulonglong unaff_r29;
  MobyInstance *pMVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x100;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar14;
  puVar9[0x22] = in_LR;
  puVar9[0x1e] = in_f30;
  puVar9[0x1f] = in_f31;
  puVar9[0x1d] = unaff_r31;
  puVar9[0x1c] = unaff_r30;
  puVar9[0x1a] = unaff_r28;
  dVar27 = 0.0;
  puVar20 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_3 << 2));
  puVar9[0x1b] = unaff_r29;
  puVar9[0x19] = unaff_r27;
  if (puVar20 == (ushort *)0x0) {
    pMVar21 = (MobyInstance *)0x0;
  }
  else {
    pMVar21 = (MobyInstance *)0x0;
    dVar28 = dVar27;
    do {
      pMVar13 = MobyInstance;
      uVar12 = *puVar20 & 0x7fff;
      if (MobyInstance[uVar12].oClass == THRUSTER_PACK_LOCK_GREEN) {
        fVar2 = *param_1;
        fVar3 = param_1[1];
        fVar7 = fVar2 - *param_2;
        fVar4 = fVar3 - param_2[1];
        dVar24 = ABS((double)fVar7);
        dVar25 = ABS((double)fVar4);
        *(float *)((int)puVar9 + 0x7c) = fVar7;
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar24 = dVar27;
        if (dVar27 < dVar23) {
          lVar15 = uVar14 - 0xf0;
          lVar17 = uVar14 - 0x48;
          lVar16 = uVar14 - 0x58;
          lVar22 = 2;
          fVar5 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0xb4) = fVar5;
          *(float *)((int)puVar9 + 0xac) = fVar5;
          *(float *)(puVar9 + 0x16) = fVar5;
          *(float *)(puVar9 + 0x15) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar6;
          *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar5 * fVar5;
            iVar10 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar17 = uVar14 - 0x58;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar1;
          lVar16 = lVar17;
          do {
            fVar5 = *pfVar18;
            fVar6 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar5;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
            lVar16 = lVar16 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar16 = 2;
          lVar15 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar15;
            iVar11 = (int)lVar17;
            lVar15 = lVar15 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar7 + fVar4);
        }
        fVar2 = fVar2 - pMVar13[uVar12].pos.x;
        fVar3 = fVar3 - pMVar13[uVar12].pos.y;
        dVar26 = ABS((double)fVar2);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xe) = fVar2;
        *(float *)((int)puVar9 + 0x74) = fVar3;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar26 = dVar27;
        if (dVar27 < dVar23) {
          lVar15 = uVar14 - 0xf0;
          lVar16 = uVar14 - 0x78;
          lVar17 = uVar14 - 0x68;
          lVar22 = 2;
          fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x94) = fVar7;
          *(float *)((int)puVar9 + 0x8c) = fVar7;
          *(float *)(puVar9 + 0x12) = fVar7;
          *(float *)(puVar9 + 0x11) = fVar7;
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar7;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar7 * fVar4;
          do {
            *(float *)((int)lVar15 + 0x88) = *(float *)((int)lVar15 + 0x78) * fVar7 * fVar7;
            iVar10 = (int)lVar16;
            lVar15 = lVar15 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar7 * fVar7;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = uVar14 - 0x78;
          pfVar18 = (float *)&DAT_007358e0;
          lVar22 = 4;
          lVar15 = lVar1;
          lVar16 = lVar17;
          do {
            fVar7 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x88) = *(float *)((int)lVar15 + 0x88) * fVar7;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
            lVar16 = lVar16 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar16 = 2;
          lVar15 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar15;
            lVar15 = lVar15 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x88)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar26 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar23 = (double)fastfunc::FastSubRots((float)dVar24,(float)dVar26);
        if (dVar28 < dVar23) {
          pMVar21 = MobyInstance + uVar12;
          dVar28 = dVar23;
        }
      }
      uVar8 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar8);
  }
  return pMVar21;
}



//==== 003d2178  ns=Global  size=0xbc
// sig: undefined FUN_003d2178(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

MobyInstance * FUN_003d2178(float *param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 255.0;
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if ((pMVar7->oClass == THRUSTER_PACK_LOCK_GREEN) &&
         (fVar3 = param_1[1] - (pMVar7->pos).y, fVar4 = *param_1 - (pMVar7->pos).x,
         fVar5 = param_1[2] - (pMVar7->pos).z,
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



//==== 003d2234  ns=Global  size=0x6c
// sig: undefined FUN_003d2234(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void FUN_003d2234(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  pMVar3 = MobyInstance;
  puVar4 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      if (pMVar3[*puVar4 & 0x7fff].oClass == THRUSTER_PACK_LOCK_GREEN) {
        pvVar2 = pMVar3[*puVar4 & 0x7fff].pVar;
        *(undefined4 *)((int)pvVar2 + 0x30) = 1;
        *(undefined4 *)((int)pvVar2 + 0x24) = 0x3fc00000;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003d22a0  ns=Global  size=0x18
// sig: undefined FUN_003d22a0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void FUN_003d22a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x2c) = 5;
  *(undefined4 *)(iVar1 + 0x24) = 0x3fc00000;
  return;
}



//==== 003d22b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M584_003d22b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M584_003d22b8(void)

{
  DAT_00846588 = 0x10000;
  return;
}



//==== 003d22d0  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M584_003d22d0(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M584_003d22d0
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  MobyInstance *pMVar3;
  undefined8 uVar2;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = mobyfunc::CreateMoby(YELLOW_PLATFORM);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
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



//==== 003d23a8  ns=mobyupdate_unsorted  size=0xe0
// sig: undefined UpdateMoby_584(MobyInstance * moby)
// callers(0): 
// callees(2): 0010c000 mobyutil::MB_CopyHeroLights; 00112900 mobyutil::MB_GetOrientation

/* Moby 584 */

void mobyupdate_unsorted::UpdateMoby_584(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  Vec4 local_20;
  
  lVar2 = (longlong)(int)moby + 0x40;
  pvVar1 = moby->pVar;
  local_20.x = (moby->pos).x - *(float *)((int)pvVar1 + 0xa0);
  local_20.y = (moby->pos).y - *(float *)((int)pvVar1 + 0xa4);
  local_20.z = (moby->pos).z - *(float *)((int)pvVar1 + 0xa8);
  local_20.w = (moby->pos).w;
  mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar1 + 0x60),&local_20,lVar2,lVar2);
  *(f32 *)((int)pvVar1 + 0xa0) = (moby->pos).x;
  *(f32 *)((int)pvVar1 + 0xa4) = (moby->pos).y;
  *(f32 *)((int)pvVar1 + 0xa8) = (moby->pos).z;
  *(f32 *)((int)pvVar1 + 0xac) = (moby->pos).w;
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined2 *)((int)pvVar1 + 0x24) = 0;
    *(undefined1 *)((int)pvVar1 + 0x28) = 4;
    *(undefined2 *)((int)pvVar1 + 0x3e) = 0xd;
    mobyutil::MB_CopyHeroLights((longlong)(int)moby);
    moby->state = '\x01';
  }
  return;
}



//==== 003d24a8  ns=mobyupdate_helpers  size=0x690
// sig: undefined M585_003d24a8(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M585_003d24a8(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_170 [176];
  
  iVar3 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(DAT_008465c0);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_010c9f90,DAT_008465b0,DAT_010c9f94,DAT_008465b4,DAT_008465b8);
  dVar11 = 0.0;
  dVar7 = 1.0;
  fVar4 = *(float *)(iVar3 + 0x24) + mobyutil::g_FrameTime;
  dVar5 = (double)fVar4;
  *(float *)(iVar3 + 0x24) = fVar4;
  if (1.0 < dVar5) {
    dVar9 = dVar5 - 1.0;
    dVar5 = (double)(float)dVar9;
    *(float *)(iVar3 + 0x24) = (float)dVar9;
  }
  if ((double)*(float *)(iVar3 + 0x28) < dVar5) {
    *(float *)(iVar3 + 0x28) = (float)dVar5;
  }
  if ((double)(float)(dVar5 - 1.0) < dVar5) {
    dVar8 = 0.10000000149011612;
    dVar6 = -0.8999999761581421;
    dVar9 = dVar5;
    dVar10 = dVar5;
    do {
      if (dVar10 <= (double)*(float *)(iVar3 + 0x28)) {
        fastfunc::FastDoubleToInt((double)((float)(dVar7 - dVar10) * 255.0));
        draw::FastDrawQuad(local_170,0,1,EffectTexHeaders,9);
        dVar5 = (double)*(float *)(iVar3 + 0x24);
      }
      dVar9 = (double)(float)(dVar9 - dVar8);
      dVar1 = dVar10 - dVar8;
      dVar2 = dVar10 - dVar6;
      dVar10 = (double)(float)dVar1;
      if ((double)(float)dVar1 - dVar11 < 0.0) {
        dVar10 = (double)(float)dVar2;
      }
    } while ((double)(float)(dVar5 - dVar7) < dVar9);
  }
  return;
}



//==== 003d2b38  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M585_003d2b38(void)
// callers(1): 003d2c48 mobyupdate_unsorted::UpdateMoby_585
// callees(0): 

void mobyupdate_helpers::M585_003d2b38(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)Level < 0x14) {
    iVar2 = Level * 0x10;
    uVar4 = *(byte *)(param_1 + 0xbc) - 1;
    if ((uVar4 & 1) == 0) {
      iVar5 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      bVar1 = (&DAT_00a0cbc4)[iVar2 + iVar5];
      lVar6 = (((ulonglong)bVar1 << 0x20) >> 0x24) + 1;
      (&DAT_00a0cbc4)[iVar2 + iVar5] =
           (byte)((lVar6 + (0xf - lVar6 >> 0x3f & 0xfU - lVar6) & 0xffffffff) << 4) | bVar1 & 0xf;
    }
    else {
      iVar5 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      bVar1 = (&DAT_00a0cbc4)[iVar2 + iVar5];
      lVar6 = ((ulonglong)bVar1 & 0xf) + 1;
      cVar3 = (char)lVar6;
      (&DAT_00a0cbc4)[iVar2 + iVar5] =
           cVar3 + ((byte)(0xf - lVar6 >> 0x3f) & 0xfU - cVar3) | bVar1 & 0xf0;
    }
  }
  return;
}



//==== 003d2c48  ns=mobyupdate_unsorted  size=0x10a4
// sig: undefined UpdateMoby_585(MobyInstance * moby)
// callers(0): 
// callees(23): 00065468 stub::STUB_00065468; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106078 mobyutil::MB_EulerToQuat; 0010bcf0 mobyutil::MB_MtxToQuat; 00110950 mobyutil::MB_RandomizeVector; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d734 sound::sound_SetPitch; 00242738 MB_SpawnBolts; 003d2b38 mobyupdate_helpers::M585_003d2b38; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul; 00501848 fastfunc::FastSlerp; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 585 */

void mobyupdate_unsorted::UpdateMoby_585(MobyInstance *moby)

{
  bool bVar1;
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
  int *piVar12;
  void *pvVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar23;
  int iVar24;
  ulonglong uVar22;
  vec4 *v;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar21 = uVar22 - 0x2c0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar22;
  puVar14[0x5a] = in_LR;
  puVar14[0x53] = in_f27;
  puVar14[0x54] = in_f28;
  puVar14[0x55] = in_f29;
  puVar14[0x56] = in_f30;
  puVar14[0x57] = in_f31;
  puVar14[0x52] = unaff_r31;
  puVar14[0x51] = unaff_r30;
  puVar14[0x50] = unaff_r29;
  puVar14[0x4f] = unaff_r28;
  puVar14[0x4e] = unaff_r27;
  if ((moby != (MobyInstance *)0x0) && (piVar12 = (int *)moby->pVar, piVar12 != (int *)0x0)) {
    mobyfunc::GetBonePosition(moby,0,piVar12 + 4);
    if (moby->state == 0) {
      DAT_0096bd24 = 100000.0;
      DAT_0096bd20 = (MobyInstance *)0x0;
      *piVar12 = -1;
      piVar12[1] = -1;
      piVar12[3] = -1;
      piVar12[2] = 0x7fff;
      *(undefined1 *)(piVar12 + 8) = DAT_00964ac9;
      piVar12[9] = 0;
      piVar12[10] = 0;
      uRam010c9fac = 0;
      uRam010c9fa8 = 0;
      uRam010c9fa4 = 0;
      _DAT_010c9fa0 = 0;
      mobyfunc::AttachManipulator(moby,3,&DAT_010c9fa0);
      moby->state = '\x01';
    }
    else if (moby->state < 3) {
      dVar33 = 0.0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      *(undefined4 *)((int)puVar14 + 0x84) = 0;
      pMVar19 = DAT_0096bd20;
      dVar36 = 1.0;
      *(undefined4 *)(puVar14 + 0x11) = 0x3f800000;
      *(undefined4 *)((int)puVar14 + 0x8c) = 0;
      dVar31 = (double)g_heroRotation.z;
      if (((pMVar19 == (MobyInstance *)0x0) || (pMVar19->oClass != METAL_DETECTOR_SPOT_MESHLESS)) ||
         (pMVar19->state == 0xfd || pMVar19->state == 0xfe)) {
        *(undefined4 *)(puVar14 + 0x14) = 0;
        *(undefined4 *)((int)puVar14 + 0xa4) = 0;
        *(undefined4 *)(puVar14 + 0x15) = 0;
        *(undefined4 *)((int)puVar14 + 0xac) = 0;
        mobyutil::MB_EulerToQuat((float *)(puVar14 + 0xe),(Vec3 *)(puVar14 + 0x14));
      }
      else {
        fVar3 = (float)piVar12[5];
        fVar4 = (pMVar19->pos).y;
        fVar5 = (float)piVar12[4];
        fVar11 = fVar3 - fVar4;
        fVar6 = (pMVar19->pos).x;
        fVar8 = fVar5 - fVar6;
        fVar9 = (pMVar19->pos).z - (float)piVar12[6];
        fVar11 = SQRT(fVar8 * fVar8 + fVar11 * fVar11);
        *(float *)(puVar14 + 0x42) = fVar9;
        fVar9 = ABS(fVar9);
        fVar7 = ABS(fVar11);
        *(float *)((int)puVar14 + 0x20c) = fVar11;
        *(float *)((int)puVar14 + 0x214) = fVar7 - fVar9;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x20c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x214) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x42) >> 0x1d) & 4;
        fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar8 = ABS(*(float *)((int)puVar14 + 0x20c));
        if (*(float *)((int)puVar14 + 0x214) - 0.0 < 0.0) {
          fVar8 = fVar9;
        }
        fVar9 = ABS(*(float *)(puVar14 + 0x42));
        if (*(float *)((int)puVar14 + 0x214) - 0.0 < 0.0) {
          fVar9 = fVar7;
        }
        fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar30 = dVar33;
        if (0.0 < fVar8) {
          lVar20 = uVar22 - 0x2b0;
          lVar27 = uVar22 - 0x78;
          lVar25 = uVar22 - 0x88;
          lVar29 = 2;
          fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0x244) = fVar8;
          *(float *)((int)puVar14 + 0x23c) = fVar8;
          *(float *)(puVar14 + 0x48) = fVar8;
          *(float *)(puVar14 + 0x47) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0x23c) = *(float *)((int)puVar14 + 0x23c) * fVar9;
          *(float *)(puVar14 + 0x48) = *(float *)(puVar14 + 0x48) * fVar8;
          *(float *)((int)puVar14 + 0x244) = *(float *)((int)puVar14 + 0x244) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar20 + 0x238) = *(float *)((int)lVar20 + 0x228) * fVar8 * fVar8;
            iVar24 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar8 * fVar8;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar22 - 0x88;
          pfVar28 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar8 = *pfVar28;
            fVar9 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar20 + 0x238) = *(float *)((int)lVar20 + 0x238) * fVar8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          do {
            iVar24 = (int)lVar20;
            iVar23 = (int)lVar27;
            lVar20 = lVar20 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar24 + 0x238)) +
                              *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                             *(float *)(iVar23 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar11 + fVar7);
        }
        fVar6 = fVar6 - fVar5;
        fVar4 = fVar4 - fVar3;
        fVar11 = ABS(fVar6);
        fVar5 = ABS(fVar4);
        *(float *)(puVar14 + 0x40) = fVar6;
        *(float *)((int)puVar14 + 0x204) = fVar4;
        *(float *)(puVar14 + 0x41) = fVar11 - fVar5;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x40) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x41) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x204) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar14 + 0x40));
        if (*(float *)(puVar14 + 0x41) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = ABS(*(float *)((int)puVar14 + 0x204));
        if (*(float *)(puVar14 + 0x41) - 0.0 < 0.0) {
          fVar5 = fVar11;
        }
        fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar34 = dVar33;
        if (0.0 < fVar3) {
          lVar20 = uVar22 - 0x2b0;
          lVar25 = uVar22 - 0xa8;
          lVar27 = uVar22 - 0x98;
          lVar29 = 2;
          fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x224) = fVar3;
          *(float *)((int)puVar14 + 0x21c) = fVar3;
          *(float *)(puVar14 + 0x44) = fVar3;
          *(float *)(puVar14 + 0x43) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x21c) = *(float *)((int)puVar14 + 0x21c) * fVar5;
          *(float *)(puVar14 + 0x44) = *(float *)(puVar14 + 0x44) * fVar3;
          *(float *)((int)puVar14 + 0x224) = *(float *)((int)puVar14 + 0x224) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar20 + 0x218) = *(float *)((int)lVar20 + 0x208) * fVar3 * fVar3;
            iVar24 = (int)lVar25;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar22 - 0xa8;
          pfVar28 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar28;
            fVar5 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar20 + 0x218) = *(float *)((int)lVar20 + 0x218) * fVar3;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar20 = 2;
          do {
            iVar24 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar23 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x218)) +
                              *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                             *(float *)(iVar23 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar6);
        }
        dVar31 = (double)fastfunc::FastDiffRots(dVar34,dVar31);
        dVar34 = -1.5707963705062866;
        dVar30 = (double)fastfunc::FastDiffRots(dVar30,0xbff921fb60000000);
        if ((double)(DAT_008465f0 * 0.017453292) - ABS(dVar31) < 0.0) {
          dVar31 = (double)(float)((double)(DAT_008465f0 * 0.017453292) *
                                  (double)(float)(dVar31 / ABS(dVar31)));
        }
        if ((double)(DAT_008465f4 * 0.017453292) - ABS(dVar30) < 0.0) {
          dVar30 = (double)(float)((double)(DAT_008465f4 * 0.017453292) *
                                  (double)(float)(dVar30 / ABS(dVar30)));
        }
        dVar31 = (double)fastfunc::FastWrapRot((float)dVar31,g_heroRotation.z);
        dVar30 = (double)fastfunc::FastWrapRot((float)dVar30,(float)dVar34);
        mobyutil::MB_SphericalToVector(-3.0,(float)dVar31,(float)dVar30,(float *)(puVar14 + 0x10));
        *(float *)(puVar14 + 0x12) = (float)piVar12[4] + *(float *)(puVar14 + 0x10);
        *(float *)((int)puVar14 + 0x94) = (float)piVar12[5] + *(float *)((int)puVar14 + 0x84);
        *(float *)(puVar14 + 0x13) = (float)piVar12[6] + *(float *)(puVar14 + 0x11);
        *(int *)((int)puVar14 + 0x9c) = piVar12[7];
        stub::STUB_00065468(piVar12 + 4,uVar22 - 0x230);
        fVar4 = *(float *)((int)puVar14 + 0x84);
        fVar5 = *(float *)(puVar14 + 0x10);
        fVar6 = *(float *)(puVar14 + 0x11);
        puVar14[0x4b] = (longlong)DAT_008465d0;
        iVar23 = DAT_010c9fe0;
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        uVar26 = puVar14[0x4b];
        iVar24 = DAT_010c9fe0 * 2;
        *(undefined4 *)((int)puVar14 + DAT_010c9fe0 * 0x10 + 0xcc) =
             *(undefined4 *)((int)puVar14 + 0x8c);
        fVar3 = (float)((double)(longlong)uVar26 / dVar30);
        dVar31 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        dVar35 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        *(float *)(puVar14 + iVar24 + 0x18) = (float)dVar31;
        *(float *)((int)puVar14 + iVar23 * 0x10 + 0xc4) = (float)dVar34;
        *(float *)(puVar14 + iVar23 * 2 + 0x19) = (float)dVar35;
        fVar4 = (float)((double)DAT_008465e8 * dVar31 -
                       (double)(float)((double)DAT_008465e0 * dVar35));
        fVar5 = (float)((double)DAT_008465e4 * dVar35 -
                       (double)(float)((double)DAT_008465e8 * dVar34));
        fVar6 = (float)((double)DAT_008465e0 * dVar34 -
                       (double)(float)((double)DAT_008465e4 * dVar31));
        puVar14[0x4b] = (longlong)DAT_008465d4;
        iVar18 = DAT_008465c8;
        uVar26 = puVar14[0x4b];
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        iVar17 = DAT_008465c8 * 2;
        *(undefined4 *)((int)puVar14 + DAT_008465c8 * 0x10 + 0xcc) = 0;
        fVar3 = (float)((double)(longlong)uVar26 / dVar30);
        dVar31 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        dVar35 = dVar33;
        if (dVar33 - dVar30 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar34 = (double)(fVar4 * fVar3);
        }
        if (dVar30 - dVar33 < 0.0) {
          dVar35 = (double)(fVar6 * fVar3);
        }
        *(float *)(puVar14 + iVar17 + 0x18) = (float)dVar31;
        *(float *)((int)puVar14 + iVar18 * 0x10 + 0xc4) = (float)dVar34;
        *(float *)(puVar14 + iVar18 * 2 + 0x19) = (float)dVar35;
        iVar17 = DAT_008465c4;
        dVar30 = (double)*(float *)((int)puVar14 + iVar23 * 0x10 + 0xc4);
        fVar3 = *(float *)(puVar14 + iVar23 * 2 + 0x19);
        dVar32 = (double)*(float *)(puVar14 + iVar24 + 0x18);
        iVar24 = DAT_008465c4 * 2;
        *(undefined4 *)((int)puVar14 + DAT_008465c4 * 0x10 + 0xcc) = 0;
        *(float *)(puVar14 + iVar24 + 0x18) =
             (float)(dVar30 * dVar35 - (double)(float)((double)fVar3 * dVar34));
        *(float *)((int)puVar14 + iVar17 * 0x10 + 0xc4) =
             (float)((double)fVar3 * dVar31 - (double)(float)(dVar32 * dVar35));
        *(float *)(puVar14 + iVar17 * 2 + 0x19) =
             (float)(dVar32 * dVar34 - (double)(float)(dVar30 * dVar31));
        *(undefined4 *)(puVar14 + 0x1f) = 0;
        *(undefined4 *)((int)puVar14 + 0xf4) = 0;
        *(undefined4 *)(puVar14 + 0x1e) = 0;
        *(undefined4 *)((int)puVar14 + 0xfc) = 0x3f800000;
        mobyfunc::GetBoneTransformations(moby,2,uVar22 - 0x1c0);
        fVar3 = *(float *)((int)puVar14 + 0x104);
        fVar4 = *(float *)(puVar14 + 0x20);
        fVar5 = *(float *)(puVar14 + 0x21);
        fVar6 = *(float *)(puVar14 + 0x22);
        fVar11 = *(float *)((int)puVar14 + 0x114);
        fVar8 = *(float *)(puVar14 + 0x23);
        fVar9 = *(float *)(puVar14 + 0x24);
        fVar7 = *(float *)((int)puVar14 + 0x124);
        fVar10 = *(float *)(puVar14 + 0x25);
        dVar35 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        dVar31 = dVar33;
        dVar30 = dVar33;
        dVar34 = dVar33;
        if ((double)(float)SQRT(dVar35) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar35);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar2 = (float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar34 = (double)(fVar4 * fVar2);
          dVar30 = (double)(fVar3 * fVar2);
          dVar31 = (double)(fVar5 * fVar2);
        }
        *(float *)(puVar14 + 0x21) = (float)dVar31;
        *(float *)(puVar14 + 0x20) = (float)dVar34;
        *(float *)((int)puVar14 + 0x104) = (float)dVar30;
        dVar35 = (double)(fVar8 * fVar8 + fVar6 * fVar6 + fVar11 * fVar11);
        dVar31 = dVar33;
        dVar30 = dVar33;
        dVar34 = dVar33;
        if ((double)(float)SQRT(dVar35) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar35);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar3 = (float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar34 = (double)(fVar6 * fVar3);
          dVar30 = (double)(fVar11 * fVar3);
          dVar31 = (double)(fVar8 * fVar3);
        }
        *(float *)(puVar14 + 0x23) = (float)dVar31;
        *(float *)((int)puVar14 + 0x114) = (float)dVar30;
        *(float *)(puVar14 + 0x22) = (float)dVar34;
        dVar34 = (double)(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7);
        dVar31 = dVar33;
        dVar30 = dVar33;
        if ((double)(float)SQRT(dVar34) != dVar33) {
          dVar31 = 1.0 / SQRT(dVar34);
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 -
                                                   dVar36) * (double)(float)(dVar31 * 0.5) + dVar31)
          ;
          fVar3 = (float)(-(double)(float)((double)(float)(dVar34 * dVar31) * dVar31 - dVar36) *
                          (double)(float)(dVar31 * 0.5) + dVar31);
          dVar31 = (double)(fVar9 * fVar3);
          dVar33 = (double)(fVar7 * fVar3);
          dVar30 = (double)(fVar10 * fVar3);
        }
        *(float *)(puVar14 + 0x24) = (float)dVar31;
        *(float *)((int)puVar14 + 0x124) = (float)dVar33;
        *(float *)(puVar14 + 0x25) = (float)dVar30;
        fastfunc::FastNormalizeRMtx4(uVar22 - 0x180,uVar22 - 0x1c0);
        *(undefined4 *)(puVar14 + 0x2f) = 0;
        *(undefined4 *)((int)puVar14 + 0x174) = 0;
        *(undefined4 *)(puVar14 + 0x2e) = 0;
        *(undefined4 *)((int)puVar14 + 0x17c) = 0x3f800000;
        fastfunc::FastVecMtx4Mul(uVar22 - 0x140,uVar22 - 0x180,uVar22 - 0x200);
        mobyutil::MB_MtxToQuat((float *)(puVar14 + 0xe),(float *)(uVar22 - 0x140));
      }
      piVar12[0xc] = *(int *)(puVar14 + 0x10);
      piVar12[0xd] = *(int *)((int)puVar14 + 0x84);
      piVar12[0xe] = *(int *)(puVar14 + 0x11);
      piVar12[0xf] = *(int *)((int)puVar14 + 0x8c);
      dVar31 = 0.10000000149011612;
      fastfunc::FastSlerp(0x3fb99999a0000000,&DAT_010c9fb0,&DAT_010c9fb0,uVar22 - 0x250);
      mobyfunc::GetBoneTransformations(moby,3,uVar22 - 0x100);
      piVar12[0xc] = *(int *)(puVar14 + 0x38);
      piVar12[0xd] = *(int *)((int)puVar14 + 0x1c4);
      piVar12[0xe] = *(int *)(puVar14 + 0x39);
      piVar12[0xf] = *(int *)((int)puVar14 + 0x1cc);
      if ((g_buttonsPressedThisFrame & CIRCLE) != 0) {
        piVar12[9] = 0;
        piVar12[10] = 0;
      }
      iVar24 = DAT_0096ad90;
      if (((g_downButtons & CIRCLE) == 0) ||
         (puVar14[0x4b] = (longlong)(int)(animationSpeed * 15.5),
         iVar24 <= *(int *)((int)puVar14 + 0x25c))) {
        moby->field60_0x90 = 0x80808080;
        iVar24 = *piVar12;
        if ((iVar24 != -1) &&
           ((sound::g_SoundChannels[iVar24].pMoby == moby &&
            (sound::g_SoundChannels[iVar24].state != '\0')))) {
          sound::sound_Kill(iVar24);
        }
        iVar24 = piVar12[1];
        *piVar12 = -1;
        if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar24].state != '\0')) {
          sound::sound_Kill(iVar24);
        }
        iVar24 = piVar12[3];
        piVar12[1] = -1;
        if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar24].state != '\0')) {
          sound::sound_Kill(iVar24);
        }
        piVar12[3] = -1;
      }
      else {
        dVar33 = 10.0;
        if ((int)(((uint)((int)DAT_0096bd24 >> 0x1f) >> 1 ^ (uint)DAT_0096bd24) -
                 ((int)DAT_0096bd24 >> 0x1f)) < 0x41200000) {
          iVar23 = sound::IsMobyPlayingSound(moby,piVar12[3]);
          iVar24 = piVar12[3];
          if ((iVar23 == 0) && (iVar24 == -1)) {
            iVar24 = sound::PlayMobySound(1,4,moby);
            piVar12[3] = iVar24;
          }
          if (iVar24 != -1) {
            iVar23 = fastfunc::FastDoubleToInt
                               ((double)(-(float)((double)DAT_0096bd24 * 2.0 - dVar33) * 0.016666668
                                        ));
            puVar14[0x4b] = (longlong)iVar23;
            puVar14[0x4b] = (longlong)(int)((float)(longlong)puVar14[0x4b] - 0.25);
            sound::sound_SetPitch(iVar24,*(int *)((int)puVar14 + 0x25c));
          }
          uVar22 = fastfunc::FastDoubleToInt
                             ((double)(float)((double)(DAT_0096bd24 * 255.0) * dVar31));
          pMVar19 = DAT_0096bd20;
          bVar1 = DAT_0096bd20 != (MobyInstance *)0x0;
          moby->field60_0x90 =
               (uint)((uVar22 & 0xffffffff) << 0x10) | 0xff000000 |
               (uint)((uVar22 & 0xffffffff) << 8) | 0xff;
          if ((((bVar1) && (pMVar19->oClass == METAL_DETECTOR_SPOT_MESHLESS)) &&
              (pMVar19->state != 0xfd && pMVar19->state != 0xfe)) &&
             ((int)(((uint)((int)DAT_0096bd24 >> 0x1f) >> 1 ^ (uint)DAT_0096bd24) -
                   ((int)DAT_0096bd24 >> 0x1f)) < 0x3f800000)) {
            pvVar13 = pMVar19->pVar;
            if (0 < *(int *)((int)pvVar13 + 0x18)) {
              dVar34 = -10.0;
              dVar30 = 12.0;
              dVar31 = 0.20000000298023224;
              do {
                dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar33);
                *(float *)(puVar14 + 0x16) = (float)(dVar35 * (double)mobyutil::g_FrameTime);
                dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
                *(float *)((int)puVar14 + 0xb4) = (float)(dVar35 * (double)mobyutil::g_FrameTime);
                dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar30);
                fVar3 = (float)(dVar35 * (double)mobyutil::g_FrameTime);
                fVar4 = *(float *)((int)puVar14 + 0xb4);
                fVar5 = *(float *)(puVar14 + 0x16);
                *(float *)(puVar14 + 0x17) = fVar3;
                pMVar19 = DAT_0096bd20;
                fVar9 = DAT_00969cfc * fVar4;
                fVar7 = DAT_00969cf4 * fVar4;
                fVar10 = DAT_00969cf8 * fVar4;
                fVar2 = DAT_00969cec * fVar5;
                fVar15 = DAT_00969ce4 * fVar5;
                fVar16 = DAT_00969ce8 * fVar5;
                v = &DAT_0096bd20->pos;
                fVar6 = DAT_00969d0c * fVar3;
                fVar11 = DAT_00969d04 * fVar3;
                fVar8 = DAT_00969d08 * fVar3;
                *(float *)(puVar14 + 0x16) =
                     DAT_00969d00 * fVar3 + hero::g_heroMtx * fVar5 + DAT_00969cf0 * fVar4;
                *(float *)((int)puVar14 + 0xb4) = fVar11 + fVar15 + fVar7;
                *(float *)(puVar14 + 0x17) = fVar8 + fVar16 + fVar10;
                *(float *)((int)puVar14 + 0xbc) =
                     fVar6 + fVar2 + fVar9 + *(float *)((int)puVar14 + 0xbc);
                (pMVar19->pos).x = (f32)piVar12[4];
                (pMVar19->pos).y = (f32)piVar12[5];
                (pMVar19->pos).z = (f32)piVar12[6];
                (pMVar19->pos).w = (f32)piVar12[7];
                mobyutil::MB_RandomizeVector((float)dVar31,&v->x);
                MB_SpawnBolts(DAT_0096bd20,(Vec4 *)&DAT_0096bd20->pos,puVar14 + 0x16,0x13,5,0);
                pMVar19 = DAT_0096bd20;
                (DAT_0096bd20->pos).x = (f32)piVar12[4];
                (pMVar19->pos).y = (f32)piVar12[5];
                (pMVar19->pos).z = (f32)piVar12[6];
                (pMVar19->pos).w = (f32)piVar12[7];
                if (pvVar13 == (void *)0x0) {
                  mobyupdate_helpers::M585_003d2b38();
                }
                else if (*(int *)((int)pvVar13 + 0x18) < 1) {
                  mobyupdate_helpers::M585_003d2b38();
                }
                else {
                  *(int *)((int)pvVar13 + 0x18) = *(int *)((int)pvVar13 + 0x18) + -5;
                  mobyupdate_helpers::M585_003d2b38(DAT_0096bd20);
                }
              } while (0 < *(int *)((int)pvVar13 + 0x18));
            }
            mobyfunc::DeleteMoby(DAT_0096bd20);
            DAT_0096bd20 = (MobyInstance *)0x0;
            DAT_0096bd24 = 100000.0;
            piVar12[2] = 0x7fff;
            sound::PlayMobySound(3,0,moby);
            iVar24 = piVar12[3];
            if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar24].state != '\0')) {
              sound::sound_Kill(iVar24);
            }
            piVar12[3] = -1;
          }
        }
        else {
          moby->field60_0x90 = 0x80808080;
          iVar24 = *piVar12;
          if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar24].state != '\0')) {
            sound::sound_Kill(iVar24);
          }
          iVar24 = piVar12[1];
          *piVar12 = -1;
          if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar24].state != '\0')) {
            sound::sound_Kill(iVar24);
          }
          iVar24 = piVar12[3];
          piVar12[1] = -1;
          if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar24].state != '\0')) {
            sound::sound_Kill(iVar24);
          }
          piVar12[3] = -1;
        }
        RegisterFuncForMoby(&PTR_M585_003d24a8_0070d758,moby);
      }
    }
  }
  return;
}



//==== 003d3cec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M586_003d3cec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M586_003d3cec(void)

{
  DAT_00846644 = 0x10000;
  return;
}



//==== 003d3d30  ns=mobyupdate_unsorted  size=0x4f8
// sig: undefined UpdateMoby_586(MobyInstance * moby)
// callers(0): 
// callees(7): 0006d720 RegisterFuncForMoby; 0007b310 help::Help_QueueMessage; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a1000c: 'None'

/* Moby 586 */

void mobyupdate_unsorted::UpdateMoby_586(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  
  uVar1 = moby->state;
  pvVar2 = moby->pVar;
  if (uVar1 == '\x05') {
    fVar7 = mobyutil::Delt(*(float *)((int)pvVar2 + 100) - 1.5,0.15,&(moby->pos).z);
    if (fVar7 == 0.0) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    if (((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) &&
       (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
      moby->setByGroup = '\x01';
      fVar7 = (moby->pos).z;
      moby->state = '\x05';
      (moby->pos).z = fVar7 - 1.5;
      if (Level == Veldin2) {
        MiscLevelFlags.field127_0x7f = 1;
      }
    }
    fVar7 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar4 * fVar4 + fVar7 * fVar7) < 2.5) &&
       (uVar3 = 1 << (Level & 0x3f), (DAT_00a25818 & uVar3) == 0)) {
      if (CHAR_ARRAY_00a1000c._904_2_ == 0) {
        CHAR_ARRAY_00a1000c[0x388] = '\0';
        CHAR_ARRAY_00a1000c[0x389] = '\x01';
        iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a1000c._906_2_ =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._908_4_ = CHAR_ARRAY_00a1000c._908_4_ | uVar3 | 0x80000000;
      }
      else {
        iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar6 + (uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ * 600 == 0)) {
          help::Help_QueueMessage(STR_WITH_THE_THRUSTER_PACK_YOU_0x2B01,0x71);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a1000c._906_2_ =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
    }
  }
  else {
    if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        mobyutil::OrganicDelt
                  (*(float *)((int)pvVar2 + 100) + DAT_00846674,DAT_0071f418 * 5.0,
                   DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,&(moby->pos).z,0x840000,
                   (float *)((int)pvVar2 + 0x68));
        if (((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) &&
           (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
          moby->state = '\x03';
          sound::PlayMobySound(0,0,moby);
          iVar6 = *(int *)((int)pvVar2 + 0x70);
          if (((iVar6 != -1) && (sound::g_SoundChannels[iVar6].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar6].state != '\0')) {
            sound::sound_Kill(iVar6);
          }
          *(undefined4 *)((int)pvVar2 + 0x70) = 0xffffffff;
          return;
        }
        if (g_heroState == MOVEMENT_LOCKED) {
          return;
        }
        RegisterFuncForMoby(&PTR_M587_003d43c8_0070d798,moby);
        iVar6 = fastfunc::FastDecTimerS32((int)pvVar2 + 0x6c);
        if (iVar6 == 0) {
          return;
        }
        g_playDrekButtonCutscene = 1;
        return;
      }
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        *(f32 *)((int)pvVar2 + 100) = (moby->pos).z;
        *(ushort *)((int)pvVar2 + 0x3e) = *(ushort *)((int)pvVar2 + 0x3e) | 8;
        if (*(int *)((int)pvVar2 + 0x60) != 0) {
          moby->state = '\x01';
          moby->scale = moby->pClass->gScale * DAT_00846670;
          return;
        }
        moby->state = '\x04';
        return;
      }
    }
    mobyutil::OrganicDelt
              (*(float *)((int)pvVar2 + 100) + DAT_00846678,DAT_0071f418 * 20.0,DAT_0071f418 * 40.0,
               mobyutil::g_FrameTime * 20.0,&(moby->pos).z,0x840000,(float *)((int)pvVar2 + 0x68));
  }
  return;
}



//==== 003d4228  ns=Global  size=0x80
// sig: undefined FUN_003d4228(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(2): 0015cc7c sound::IsMobyPlayingSound; 0015d380 sound::sound_LevelPlay

void FUN_003d4228(MobyInstance *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1->pVar;
  if (param_1->state != '\x02') {
    param_1->state = '\x02';
    *(undefined4 *)((int)pvVar1 + 0x6c) = param_2;
  }
  iVar2 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 0x70));
  if (iVar2 == 0) {
    iVar2 = sound::sound_LevelPlay(0x12,0,param_1);
    *(int *)((int)pvVar1 + 0x70) = iVar2;
  }
  return;
}



//==== 003d42a8  ns=Global  size=0x98
// sig: undefined FUN_003d42a8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 0015cdb0 sound::sound_Kill

void FUN_003d42a8(MobyInstance *param_1)

{
  void *pvVar1;
  int handle;
  
  pvVar1 = param_1->pVar;
  if (param_1->state == '\x02') {
    param_1->state = '\x03';
    handle = *(int *)((int)pvVar1 + 0x70);
    if (((handle != -1) && (sound::g_SoundChannels[handle].pMoby == param_1)) &&
       (sound::g_SoundChannels[handle].state != '\0')) {
      sound::sound_Kill(handle);
    }
    *(undefined4 *)((int)pvVar1 + 0x70) = 0xffffffff;
  }
  return;
}



//==== 003d4340  ns=mobyupdate_helpers  size=0x44
// sig: undefined M587_003d4340(void)
// callers(1): 00275240 mobyupdate_helpers::M1422_00275240
// callees(0): 

undefined8 mobyupdate_helpers::M587_003d4340(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = 1;
  }
  else if ((*(char *)(param_1 + 0x20) == '\x02') && (*(int *)(*(int *)(param_1 + 0x78) + 0x6c) == 0)
          ) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 003d43c8  ns=mobyupdate_helpers  size=0x308
// sig: undefined M587_003d43c8(void)
// callers(0): 
// callees(6): 0006a718 draw::DrawRoundedRect; 00070998 draw::FontPrintLargeCenter; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M587_003d43c8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 local_30 [32];
  
  draw::DrawRoundedRect
            (DAT_00846680 + DAT_0084668c,DAT_00846690 + DAT_00846680,DAT_0084667c + DAT_00846694,
             DAT_0084667c + DAT_00846698,DAT_0084669c);
  dVar7 = (double)fastfunc::FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = fastfunc::FastLerpColor(dVar7,DAT_00846684,DAT_00846688);
  iVar6 = mobyutil::MB_randInt(10);
  fastfunc::FastDoubleToInt((double)(longlong)iVar6);
  draw::FontPrintLargeCenter(DAT_0084667c,DAT_00846680,uVar5,local_30,8);
  return;
}



//==== 003d46d0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M587_003d46d0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M587_003d46d0(void)

{
  DAT_008466ec = 0x10000;
  return;
}



//==== 003d4720  ns=mobyupdate_helpers  size=0x1ec
// sig: undefined M587_003d4720(void)
// callers(1): 003d4f28 mobyupdate_unsorted::UpdateMoby_587
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M587_003d4720(int param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x44),*(float *)(iVar1 + 0x6c));
  *(float *)(param_1 + 0x44) = (float)dVar3;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    if (dVar3 <= 0.5235987901687622) {
      if (dVar3 < -0.5235987901687622) {
        *(undefined4 *)(param_1 + 0x44) = 0xbf060a92;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x3f060a92;
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x04') {
    if (dVar3 <= 0.0872664600610733) {
      if (dVar3 < -0.0872664600610733) {
        *(undefined4 *)(param_1 + 0x44) = 0xbdb2b8c2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x3db2b8c2;
    }
  }
  else if (dVar3 <= 0.03490658476948738) {
    if (dVar3 < -0.03490658476948738) {
      *(undefined4 *)(param_1 + 0x44) = 0xbd0efa35;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3d0efa35;
  }
  dVar4 = (double)fastfunc::FastWrapRot
                            (*(float *)(iVar1 + 0x74),
                             DAT_0084671c * 0.017453292 * mobyutil::g_FrameTime);
  fVar2 = DAT_00846718;
  dVar3 = (double)(float)(3.141592502593994 - dVar4);
  if (dVar4 - (double)(float)(3.141592502593994 - dVar4) < 0.0) {
    dVar3 = dVar4;
  }
  dVar5 = (double)(float)(-3.141592502593994 - dVar4);
  if ((double)(float)(-3.141592502593994 - dVar4) - dVar3 < 0.0) {
    dVar5 = dVar3;
  }
  dVar3 = (double)(float)(dVar5 * dVar5);
  dVar6 = (double)(float)(dVar3 * (double)(float)(dVar3 * dVar5));
  *(float *)(iVar1 + 0x74) = (float)dVar4;
  dVar4 = (double)(float)(dVar3 * dVar6);
  *(float *)(param_1 + 0x18) =
       fVar2 * ((float)(dVar3 * dVar4) * 2.601887e-06 +
               (float)(dVar4 * -0.0001980741071747616 +
                      (double)(float)(dVar6 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar3 * dVar5) *
                                                     -0.16666656732559204 + dVar5)))) +
       *(float *)(iVar1 + 100);
  return;
}



//==== 003d4938  ns=mobyupdate_helpers  size=0x5d0
// sig: undefined M587_003d4938(void)
// callers(1): 003d4f28 mobyupdate_unsorted::UpdateMoby_587
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M587_003d4938(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [8];
  
  iVar8 = mobyutil::MB_randInt(5);
  dVar12 = 1.0;
  mobyutil::MB_randRangeFloat(1.0,2.5);
  mobyutil::MB_randRot();
  dVar11 = 0.0;
  iVar9 = 0;
  if (0 < iVar8 + 5) {
    do {
      mobyutil::MB_randSphere(dVar11,(double)(DAT_00846748 * mobyutil::g_FrameTime),local_f0);
      mobyutil::MB_randRangeFloat(-DAT_00846744,DAT_00846744);
      mobyutil::MB_randRangeFloat(-DAT_00846744,DAT_00846744);
      mobyutil::MB_randRangeFloat(DAT_0084675c,DAT_00846760);
      mobyutil::MB_randRangeFloat(DAT_00846764,DAT_00846768);
      uVar2 = DAT_00846770;
      uVar1 = DAT_0084676c;
      mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
      uVar2 = DAT_00846778;
      uVar1 = DAT_00846774;
      mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
      dVar10 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar5 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)((double)(longlong)DAT_0084674c * dVar10 + dVar12)));
      dVar13 = (double)(longlong)DAT_00846750;
      dVar10 = (double)mobyutil::MB_randRangeFloat(-DAT_00846758,DAT_00846758);
      uVar6 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar13 * (double)(float)(dVar10 + dVar12))));
      dVar13 = (double)(longlong)DAT_00846754;
      dVar10 = (double)mobyutil::MB_randRangeFloat(-DAT_00846758,DAT_00846758);
      uVar7 = fastfunc::FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar13 * (double)(float)(dVar10 + dVar12))));
      partupd::SpawnPart_2(local_120,local_110,local_100,uVar3,uVar4,uVar5,uVar6,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8 + 5);
  }
  return;
}



//==== 003d4f28  ns=mobyupdate_unsorted  size=0x5f0
// sig: undefined UpdateMoby_587(MobyInstance * moby)
// callers(0): 
// callees(10): 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound; 003d4720 mobyupdate_helpers::M587_003d4720; 003d4938 mobyupdate_helpers::M587_003d4938; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble

/* Moby 587 */

void mobyupdate_unsorted::UpdateMoby_587(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  longlong local_30;
  
  lVar8 = (longlong)(int)moby;
  local_50.x = -(moby->pos).x;
  fVar2 = (moby->pos).z;
  local_50.y = -(moby->pos).y;
  local_50.z = -fVar2;
  pvVar5 = moby->pVar;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(float *)((int)pvVar5 + 0x60) = fVar2;
      fVar3 = (moby->pos).z;
      *(undefined4 *)((int)pvVar5 + 0x70) = 0;
      *(f32 *)((int)pvVar5 + 100) = fVar3;
      *(undefined4 *)((int)pvVar5 + 0x68) = 0;
      *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
      dVar10 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar5 + 0x74) = (float)dVar10;
      *(uint *)((int)pvVar5 + 0x5c) = *(uint *)((int)pvVar5 + 0x5c) | 1;
      moby->state = (char)((LZCOUNT(-*(int *)((int)pvVar5 + 0x88)) << 0x3a) >> 0x3f) + '\x02';
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      iVar9 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x7c);
      if (iVar9 != 0) {
        dVar10 = (double)fastfunc::FastIntToDouble(DAT_00facc7c);
        fVar4 = (float)(dVar10 - (double)DAT_00846730) /
                (float)((double)DAT_00846734 - (double)DAT_00846730);
        fVar2 = 1.0;
        if ((fVar4 <= 1.0) && (fVar2 = fVar4, fVar4 < 0.0)) {
          fVar2 = 0.0;
        }
        fVar4 = DAT_00846728;
        if (*(int *)((int)pvVar5 + 0x84) != 0) {
          fVar4 = DAT_00846720;
        }
        *(float *)((int)pvVar5 + 0x6c) =
             fVar4 * -(fVar2 * 0.333 - 1.0) * 0.017453292 * mobyutil::g_FrameTime;
        moby->state = '\x04';
      }
    }
    else {
      if ((moby->enabled != '\0') &&
         (iVar9 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x8c), iVar9 != 0)) {
        mobyupdate_helpers::M587_003d4938(lVar8);
        iVar9 = mobyutil::MB_randRange(0x5a,0x78);
        local_30 = (longlong)iVar9;
        *(int *)((int)pvVar5 + 0x8c) = (int)(animationSpeed * ((float)local_30 + 0.5));
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
        moby->state = '\x05';
        iVar9 = sound::PlayMobySound(1,0,moby);
        *(short *)((int)pvVar5 + 0x92) = (short)iVar9;
      }
      if ((*(int *)((int)pvVar5 + 0x80) != 0) &&
         (fVar2 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar4 * fVar4 + fVar2 * fVar2) < DAT_0084672c)) {
        moby->state = '\x05';
        iVar9 = sound::PlayMobySound(1,0,moby);
        *(short *)((int)pvVar5 + 0x92) = (short)iVar9;
      }
    }
  }
  else if (bVar1 < 6) {
    if ((moby->enabled != '\0') &&
       (iVar9 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x8c), iVar9 != 0)) {
      mobyupdate_helpers::M587_003d4938(lVar8);
      iVar9 = mobyutil::MB_randRange(0xf,0x1e);
      local_30 = (longlong)iVar9;
      *(int *)((int)pvVar5 + 0x8c) = (int)(animationSpeed * ((float)local_30 + 0.5));
    }
    dVar10 = (double)fastfunc::FastIntToDouble(DAT_00facc7c);
    fVar2 = 1.0;
    fVar4 = (float)(dVar10 - (double)DAT_00846730) /
            (float)((double)DAT_00846734 - (double)DAT_00846730);
    if ((fVar4 <= 1.0) && (fVar2 = fVar4, fVar4 < 0.0)) {
      fVar2 = 0.0;
    }
    if ((*(int *)((int)pvVar5 + 0x80) == 0) &&
       ((*(int *)((int)pvVar5 + 0x88) == 0 || (*(int *)((int)pvVar5 + 0x84) != 0)))) {
      if (*(int *)((int)pvVar5 + 0x84) == 0) {
        fVar4 = *(float *)((int)pvVar5 + 0x70);
        fVar7 = DAT_00846714;
      }
      else {
        fVar4 = *(float *)((int)pvVar5 + 0x70);
        fVar7 = DAT_00846710;
      }
      fVar7 = fVar7 * -(fVar2 * 0.333 - 1.0);
      fVar2 = DAT_0071f418;
    }
    else {
      fVar4 = *(float *)((int)pvVar5 + 0x70);
      fVar2 = 15.0;
      fVar7 = DAT_0071f418;
    }
    fVar2 = -(fVar7 * fVar2 - fVar4);
    *(float *)((int)pvVar5 + 0x70) = fVar2;
    *(float *)((int)pvVar5 + 100) = *(float *)((int)pvVar5 + 100) + fVar2;
    if ((moby->pos).z < *(float *)((int)pvVar5 + 0x60) - 10.0) {
      if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
          ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                ((int)g_heroPosition.z >> 0x1f)) <
           (int)(((uint)((int)HeroDeathHeight >> 0x1f) >> 1 ^ HeroDeathHeight) -
                ((int)HeroDeathHeight >> 0x1f)))) && (g_heroState != DEATH_FALLING)) {
        hero::TransitionMovement(0x77,1);
        fVar2 = *(float *)((int)pvVar5 + 0x70);
      }
      *(float *)((int)pvVar5 + 0x70) = -(DAT_0071f418 * 13.7 - fVar2);
      fVar3 = (moby->pos).z;
      uVar6 = (int)fVar3 >> 0x1f;
      if ((int)((uVar6 >> 1 ^ (uint)fVar3) - uVar6) < 0x41700000) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  mobyupdate_helpers::M587_003d4720(lVar8);
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x20),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             lVar8 + 0x40);
  return;
}



//==== 003d5518  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M587_003d5518(void)
// callers(2): 00269420 mobyupdate_helpers::M1392_00269420; 00274fd0 mobyupdate_helpers::M1422_00274fd0
// callees(0): 

undefined8 mobyupdate_helpers::M587_003d5518(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x20) == '\x02') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
    uVar1 = 0;
  }
  return uVar1;
}



//==== 003d5544  ns=mobyupdate_helpers  size=0x30
// sig: undefined M587_003d5544(void)
// callers(2): 00269420 mobyupdate_helpers::M1392_00269420; 00274fd0 mobyupdate_helpers::M1422_00274fd0
// callees(0): 

bool mobyupdate_helpers::M587_003d5544(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = *(char *)(param_1 + 0x20) == '\x01';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x20) = 3;
    *(undefined4 *)(iVar2 + 0x7c) = param_2;
    *(undefined4 *)(iVar2 + 0x78) = param_3;
  }
  return bVar1;
}



//==== 003d5574  ns=mobyupdate_helpers  size=0x14
// sig: undefined M587_003d5574(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M587_003d5574(void)

{
  DAT_008467d4 = 0x10000;
  return;
}



//==== 003d5588  ns=mobyupdate_unsorted  size=0x4c0
// sig: undefined UpdateMoby_6(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 001042ec mobyutil::MB_SetStateByGroup; 00110b70 mobyutil::MB_IsPntInCuboid; 005cd098 libc::printf
// strings: 00656bc4: 'No trigger for moby 6 instance %d. Deleting\n'

/* Moby 6 */

void mobyupdate_unsorted::UpdateMoby_6(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  if (*piVar1 == -1) {
    libc::printf("No trigger for moby 6 instance %d. Deleting\n",moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
    if (iVar3 == 0) {
      if (*(char *)(piVar1 + 0xe) == '\x01') {
        if (piVar1[1] != -1) {
          pMVar2 = MobyInstance + piVar1[1];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)(piVar1 + 10) != 0xff)) {
            pMVar2->state = *(u8 *)(piVar1 + 10);
          }
        }
        if ((piVar1[5] != -1) && (*(char *)(piVar1 + 0xc) != -1)) {
          mobyutil::MB_SetStateByGroup(piVar1[5]);
        }
        if (piVar1[2] != -1) {
          pMVar2 = MobyInstance + piVar1[2];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x29) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x29);
          }
        }
        if ((piVar1[6] != -1) && (*(char *)((int)piVar1 + 0x31) != -1)) {
          mobyutil::MB_SetStateByGroup(piVar1[6]);
        }
        if (piVar1[3] != -1) {
          pMVar2 = MobyInstance + piVar1[3];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x2a) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x2a);
          }
        }
        if ((piVar1[7] != -1) && (*(char *)((int)piVar1 + 0x32) != -1)) {
          mobyutil::MB_SetStateByGroup(piVar1[7]);
        }
        if (piVar1[4] != -1) {
          pMVar2 = MobyInstance + piVar1[4];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x2b) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x2b);
          }
        }
        if ((piVar1[8] != -1) && (*(char *)((int)piVar1 + 0x33) != -1)) {
          mobyutil::MB_SetStateByGroup(piVar1[8]);
        }
        if (*(u8 *)((int)piVar1 + 0x35) != 0xff) {
          moby->state = *(u8 *)((int)piVar1 + 0x35);
        }
        if (*(char *)((int)piVar1 + 0x37) != -1) {
          moby->setByGroup = *(char *)((int)piVar1 + 0x37);
        }
        *(undefined1 *)(piVar1 + 0xe) = 0;
      }
    }
    else if (*(char *)(piVar1 + 0xe) == '\0') {
      if (piVar1[1] != -1) {
        pMVar2 = MobyInstance + piVar1[1];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)(piVar1 + 9) != 0xff)) {
          pMVar2->state = *(u8 *)(piVar1 + 9);
        }
      }
      if ((piVar1[5] != -1) && (*(char *)(piVar1 + 0xb) != -1)) {
        mobyutil::MB_SetStateByGroup(piVar1[5]);
      }
      if (piVar1[2] != -1) {
        pMVar2 = MobyInstance + piVar1[2];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x25) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x25);
        }
      }
      if ((piVar1[6] != -1) && (*(char *)((int)piVar1 + 0x2d) != -1)) {
        mobyutil::MB_SetStateByGroup(piVar1[6]);
      }
      if (piVar1[3] != -1) {
        pMVar2 = MobyInstance + piVar1[3];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x26) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x26);
        }
      }
      if ((piVar1[7] != -1) && (*(char *)((int)piVar1 + 0x2e) != -1)) {
        mobyutil::MB_SetStateByGroup(piVar1[7]);
      }
      if (piVar1[4] != -1) {
        pMVar2 = MobyInstance + piVar1[4];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x27) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x27);
        }
      }
      if ((piVar1[8] != -1) && (*(char *)((int)piVar1 + 0x2f) != -1)) {
        mobyutil::MB_SetStateByGroup(piVar1[8]);
      }
      if (*(u8 *)(piVar1 + 0xd) != 0xff) {
        moby->state = *(u8 *)(piVar1 + 0xd);
      }
      if (*(char *)((int)piVar1 + 0x36) != -1) {
        moby->setByGroup = *(char *)((int)piVar1 + 0x36);
      }
      *(undefined1 *)(piVar1 + 0xe) = 1;
    }
  }
  return;
}



//==== 003d5a48  ns=mobyupdate_helpers  size=0x14
// sig: undefined M600_003d5a48(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M600_003d5a48(void)

{
  DAT_00846844 = 0x10000;
  return;
}



//==== 003d5a60  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M600_003d5a60(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M600_003d5a60(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00853554;
  ppuVar4 = &PTR_DAT_00853520;
  puVar3 = &DAT_0084db68;
  ppuVar5 = &PTR_DAT_008535bc;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010c9ff8 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xd);
  return;
}



//==== 003d5b50  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M600_003d5b50(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M600_003d5b50(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_0084dae4;
  ppuVar4 = &PTR_DAT_0084dab8;
  puVar3 = &DAT_008492b8;
  ppuVar5 = &PTR_DAT_0084db3c;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010ca010 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xb);
  return;
}



//==== 003d5c40  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M600_003d5c40(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M600_003d5c40(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00849258;
  ppuVar4 = &PTR_DAT_00849238;
  puVar3 = &DAT_008468c8;
  ppuVar5 = &PTR_DAT_00849298;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010ca020 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 8);
  return;
}



//==== 003d5d30  ns=mobyupdate_helpers  size=0x608
// sig: undefined M600_003d5d30(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M600_003d5d30(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  stub::STUB_00071170();
  uVar1 = draw::GetEffectTex(0x3a);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,DAT_00846880);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar2 = &PTR_DAT_00853520;
  ppuVar3 = &PTR_DAT_00853554;
  puVar7 = &DAT_0084db68;
  ppuVar4 = &PTR_DAT_008535bc;
  iVar9 = 0;
  ppuVar10 = ppuVar3;
  ppuVar6 = ppuVar2;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010c9ff8);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xd);
  uVar1 = draw::GetEffectTex(0x3b);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_00846884 * (uint)DAT_010c9ff0) >> 8);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar10 = ppuVar3;
  ppuVar6 = ppuVar2;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010ca000);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xd);
  uVar1 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_00846888 * (uint)DAT_010c9ff0) >> 8);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar3,*puVar7,&DAT_010ca008);
    draw::DrawMeshSet(*puVar7,*ppuVar2,*ppuVar4,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar7 = puVar7 + 1;
    ppuVar2 = ppuVar2 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (iVar11 < 0xd);
  uVar1 = draw::GetEffectTex(0x3c);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468b4);
  vuchain::SetGSReg(3,uVar1);
  ppuVar2 = &PTR_DAT_0084dae4;
  ppuVar4 = &PTR_DAT_0084dab8;
  puVar7 = &DAT_008492b8;
  ppuVar3 = &PTR_DAT_0084db3c;
  iVar11 = 0;
  ppuVar10 = ppuVar2;
  ppuVar6 = ppuVar4;
  ppuVar5 = ppuVar3;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010ca010);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xb);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468b8);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar7,&DAT_010ca018);
    draw::DrawMeshSet(*puVar7,*ppuVar4,*ppuVar3,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar7 = puVar7 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (iVar11 < 0xb);
  uVar1 = draw::GetEffectTex(0x3d);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468c4);
  vuchain::SetGSReg(3,uVar1);
  ppuVar10 = &PTR_DAT_00849298;
  ppuVar5 = &PTR_DAT_00849258;
  puVar8 = &DAT_008468c8;
  ppuVar6 = &PTR_DAT_00849238;
  do {
    mesh::AddUVOffsets(&DAT_010ca030,*ppuVar5,*puVar8,&DAT_010ca020);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar10,&DAT_010ca030,9);
    iVar9 = iVar9 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
  } while (iVar9 < 8);
  return;
}



//==== 003d6340  ns=mobyupdate_helpers  size=0x220
// sig: undefined M600_003d6340(void)
// callers(1): 003d6950 mobyupdate_unsorted::UpdateMoby_600
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M600_003d6340
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)fastfunc::FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)fastfunc::FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = fastfunc::FastDoubleToInt(dVar14);
          uVar3 = fastfunc::FastDoubleToInt(dVar13);
          uVar4 = fastfunc::FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}



//==== 003d6588  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M600_003d6588(void)
// callers(1): 003d6950 mobyupdate_unsorted::UpdateMoby_600
// callees(0): 

void mobyupdate_helpers::M600_003d6588
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
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
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
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
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}



//==== 003d66e0  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M600_003d66e0(void)
// callers(1): 003d6950 mobyupdate_unsorted::UpdateMoby_600
// callees(0): 

void mobyupdate_helpers::M600_003d66e0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_0084688c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010c9ff8 + iVar1);
  *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_00846890 + iVar1) * fVar3 + *(float *)((int)&DAT_010c9ffc + iVar1);
  *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 003d67a0  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M600_003d67a0(void)
// callers(1): 003d6950 mobyupdate_unsorted::UpdateMoby_600
// callees(0): 

void mobyupdate_helpers::M600_003d67a0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_008468a4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010ca010 + iVar1);
  *(float *)((int)&DAT_010ca010 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca010 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca010 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_008468a8 + iVar1) * fVar3 + *(float *)((int)&DAT_010ca014 + iVar1);
  *(float *)((int)&DAT_010ca014 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca014 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca014 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 003d6860  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M600_003d6860(void)
// callers(1): 003d6950 mobyupdate_unsorted::UpdateMoby_600
// callees(0): 

void mobyupdate_helpers::M600_003d6860(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_008468bc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010ca020 + iVar1);
  *(float *)((int)&DAT_010ca020 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca020 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca020 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_008468c0 + iVar1) * fVar3 + *(float *)((int)&DAT_010ca024 + iVar1);
  *(float *)((int)&DAT_010ca024 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca024 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca024 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 003d6950  ns=mobyupdate_unsorted  size=0x330
// sig: undefined UpdateMoby_600(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d720 RegisterFuncForMoby; 003d6340 mobyupdate_helpers::M600_003d6340; 003d6588 mobyupdate_helpers::M600_003d6588; 003d66e0 mobyupdate_helpers::M600_003d66e0; 003d67a0 mobyupdate_helpers::M600_003d67a0; 003d6860 mobyupdate_helpers::M600_003d6860; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView
// strings: 003d6918: '?&ff?' (raw)

/* Moby 600 */

void mobyupdate_unsorted::UpdateMoby_600(MobyInstance *moby)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_30 [16];
  
  if (moby->state == 0) {
    if (DAT_010c9ff4 == 0) {
      uVar8 = 0x3fe0000000000000;
      mobyupdate_helpers::M600_003d6340
                (0x3fe0000000000000,0x3fe0000000000000,0x3fe4ccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_008535bc,0xd,&DAT_0084db68);
      uVar6 = 0x3ff0000000000000;
      mobyupdate_helpers::M600_003d6340
                (uVar8,uVar8,uVar8,0x3ff0000000000000,&PTR_DAT_00849298,8,&DAT_008468c8);
      mobyupdate_helpers::M600_003d6340
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_DAT_0084db3c,
                 0xb,&DAT_008492b8);
      DAT_010c9ff4 = 1;
    }
    auVar12 = ZEXT416(0);
    auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    moby->state = '\x01';
    DAT_010c9ff8 = 0;
    DAT_010ca028 = 0;
    DAT_010c9ffc = 0;
    DAT_010ca000 = 0;
    DAT_010ca004 = 0;
    DAT_010ca008 = 0;
    DAT_010ca00c = 0;
    DAT_010ca02c = 0;
    auVar12 = loadVectorLeftIndexed(0x10,0x3d6918);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    DAT_010ca010 = 0;
    DAT_010ca014 = storeVectorElementWordIndexed(auVar10,0xffffffffffffa014,0x10d0000);
    DAT_010ca018 = 0;
    iVar2 = 0;
    puVar4 = &DAT_010ca020;
    uVar5 = ZEXT48(&DAT_010ca024);
    DAT_010ca01c = storeVectorElementWordIndexed(auVar12,0,0x10ca01c);
    do {
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar15 = ZEXT416(0xffffffff);
      auVar14 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      iVar2 = iVar2 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      auVar15._0_4_ = auVar10._0_4_ + 1;
      auVar15._8_8_ = auVar10._8_8_;
      auVar15._4_4_ = auVar10._4_4_ + 1;
      auVar11._0_8_ = auVar15._0_8_;
      auVar11._12_4_ = auVar10._12_4_;
      auVar11._8_4_ = auVar10._8_4_ + 1;
      auVar10._0_12_ = auVar11._0_12_;
      auVar10._12_4_ = auVar11._12_4_ + 1;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar15);
      uVar1 = storeVectorElementWordIndexed(auVar15,0,uVar5);
      *(undefined4 *)uVar5 = uVar1;
      uVar5 = uVar5 + 8;
    } while (iVar2 < 1);
  }
  else if ((moby->state < 2) &&
          (iVar2 = fastfunc::FastCheckBsphereInView(0x408f400000000000,local_30), -1 < iVar2)) {
    dVar9 = 84.0;
    dVar7 = (double)SQRT((GameCamera.posZ - DAT_00846878) * (GameCamera.posZ - DAT_00846878) +
                         (GameCamera.posX - DAT_00846870) * (GameCamera.posX - DAT_00846870) +
                         (GameCamera.posY - DAT_00846874) * (GameCamera.posY - DAT_00846874));
    uVar3 = DAT_010c9ff0;
    if (dVar7 <= 84.0) {
      mobyupdate_helpers::M600_003d66e0(0);
      mobyupdate_helpers::M600_003d6588
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010ca000);
      mobyupdate_helpers::M600_003d66e0(2);
      uVar3 = 0xff;
      if ((20.0 <= dVar7) && (uVar3 = 0, dVar7 < dVar9)) {
        uVar3 = fastfunc::FastDoubleToInt
                          ((double)(-((float)(dVar7 - 20.0) * 0.015625 - 1.0) * 255.0));
      }
    }
    DAT_010c9ff0 = uVar3;
    mobyupdate_helpers::M600_003d6860(0);
    mobyupdate_helpers::M600_003d67a0(0);
    mobyupdate_helpers::M600_003d67a0(1);
    RegisterFuncForMoby(&PTR_M600_003d5d30_0070d800,moby);
  }
  return;
}



//==== 003d6c80  ns=mobyupdate_helpers  size=0x14
// sig: undefined M602_003d6c80(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M602_003d6c80(void)

{
  DAT_0085363c = 0x10000;
  return;
}



//==== 003d6c98  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M602_003d6c98(void)
// callers(0): 
// callees(1): 000fc620 mobyutil::MB_randInt

MobyInstance * mobyupdate_helpers::M602_003d6c98(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = (MobyInstance *)0x0;
    puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      uVar1 = *puVar4;
      if ((MobyInstance[uVar1 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
         ((pMVar3 == (MobyInstance *)0x0 || (uVar2 = mobyutil::MB_randInt(0xff), (uVar2 & 1) != 0)))
         ) {
        pMVar3 = MobyInstance + (uVar1 & 0x7fff);
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar3;
}



//==== 003d6d70  ns=mobyupdate_helpers  size=0x46c
// sig: undefined M602_003d6d70(void)
// callers(1): 003d7240 mobyupdate_unsorted::UpdateMoby_602
// callees(8): 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 004fffb4 fastfunc::FastDecTimerS16

void mobyupdate_helpers::M602_003d6d70(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  float *pfVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  undefined4 uVar14;
  longlong lVar12;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x1b0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x38] = in_LR;
  puVar9[0x35] = in_f31;
  puVar9[0x33] = unaff_r30;
  pfVar7 = (float *)param_1->pVar;
  uVar21 = ZEXT48(pfVar7);
  puVar9[0x34] = unaff_r31;
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x164) = 0;
  if (pfVar7[6] != 0.0) {
    auVar27 = ZEXT416(0xffffffff);
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    pfVar7[6] = 0.0;
    auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar27 = loadVectorLeftIndexed(4,0x3d6d60);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                         auVar28);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
    auVar27 = vectorSplatHalfWord(auVar27,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar27,500,uVar21);
    *(undefined2 *)(pfVar7 + 0x7d) = uVar8;
  }
  iVar13 = fastfunc::FastDecTimerS16(uVar21 + 500);
  if (iVar13 == 0) {
    fVar2 = pfVar7[0x77] + 6.0;
  }
  else {
    fVar2 = pfVar7[0x77];
  }
  pfVar7[0x78] = fVar2;
  uVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar14,uVar21,0,puVar9 + 0x2c,(int)puVar9 + 0x164,0,4);
  if ((*(int *)(puVar9 + 0x2c) != 1) && (param_1->state != '\n')) {
    fVar2 = *pfVar7 - *(float *)((int)puVar9 + 0x164);
    *pfVar7 = fVar2;
    if ((double)fVar2 <= dVar26) {
      pfVar7[0x44] = 0.008;
      pfVar7[0x45] = 0.0005;
      fVar2 = mobyutil::g_FrameTime;
      pfVar7[0x46] = DAT_00853664 * mobyutil::g_FrameTime;
      fVar3 = DAT_00853660;
      *(undefined1 *)((int)pfVar7 + 0x13d) = 0;
      pfVar7[0x49] = 1.26117e-44;
      pfVar7[0x47] = fVar3 * fVar2;
      fVar2 = (param_1->pos).x - g_heroPosition.x;
      fVar3 = (param_1->pos).y - g_heroPosition.y;
      dVar25 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)(puVar9 + 0x2d) = fVar2;
      *(float *)((int)puVar9 + 0x16c) = fVar3;
      *(float *)(puVar9 + 0x2e) = (float)(dVar25 - dVar23);
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x2d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x2e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x16c) >> 0x1d) & 4;
      uVar15 = uVar17 << 2 | 0x735900;
      dVar24 = ABS((double)*(float *)(puVar9 + 0x2d));
      if ((double)*(float *)(puVar9 + 0x2e) - dVar26 < 0.0) {
        dVar24 = dVar23;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0x16c));
      if ((double)*(float *)(puVar9 + 0x2e) - dVar26 < 0.0) {
        dVar23 = dVar25;
      }
      fVar3 = *(float *)((int)uVar15 + 4);
      if (dVar26 < dVar24) {
        lVar19 = uVar11 - 0x1a0;
        lVar16 = uVar11 - 0x2c;
        lVar18 = uVar11 - 0x3c;
        lVar22 = 2;
        fVar4 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x30) = fVar4;
        *(float *)(puVar9 + 0x2f) = fVar4;
        *(float *)((int)puVar9 + 0x17c) = fVar4;
        *(float *)((int)puVar9 + 0x174) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar5;
        *(float *)((int)puVar9 + 0x17c) = *(float *)((int)puVar9 + 0x17c) * fVar4;
        *(float *)(puVar9 + 0x30) = *(float *)(puVar9 + 0x30) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x164) * fVar4 * fVar4;
          iVar13 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
          lVar16 = lVar16 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        uVar15 = uVar11 - 0x3c;
        lVar18 = 4;
        pfVar20 = (float *)&DAT_007358e0;
        uVar17 = uVar15;
        lVar16 = lVar12;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x174) = *(float *)((int)lVar16 + 0x174) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)uVar17 + 4) = *(float *)((int)uVar17 + 4) * fVar5;
          uVar17 = uVar17 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar16 = 2;
        do {
          iVar13 = (int)lVar12;
          iVar10 = (int)uVar15;
          lVar12 = lVar12 + 0x10;
          uVar15 = uVar15 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x174)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      mobyutil::MB_StartKick(dVar26,param_1,uVar21 + 0x100,uVar15,8,1,0);
      MVar6 = param_1->modeBits;
      pfVar7[0x54] = 8.0;
      pfVar7[0x55] = 15.0;
      param_1->modeBits =
           MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pfVar7 + 0xf7) = 0xfa;
      param_1->state = '\n';
      if (param_1->animationId != '\b') {
        mobyutil::MB_SetAnimation(param_1,8,0,6);
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar21 + 0xf0);
  }
  uVar1 = param_1->state;
  param_1->damage = -1;
  if (uVar1 == '\n' || uVar1 == '\r') {
    mobyutil::MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0xa0);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x2a);
  }
  else if (pfVar7[0x7e] == 0.0) {
    mobyutil::MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0xf0);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x20);
  }
  else {
    mobyutil::MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0x140);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x16);
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar21 + 0xf0);
  return;
}



//==== 003d7240  ns=mobyupdate_unsorted  size=0x18b0
// sig: undefined UpdateMoby_602(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105c08 mobyutil::CollDamageMobyDirect; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00110c60 mobyutil::MB_IsPntInCylinder; 003d6d70 mobyupdate_helpers::M602_003d6d70; 00502578 fastfunc::FastWrapRot; 005c8318 rand

/* Moby 602 */

void mobyupdate_unsorted::UpdateMoby_602(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  undefined4 *puVar10;
  f32 fVar11;
  uint uVar12;
  undefined1 uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar23;
  int iVar24;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar28;
  ulonglong unaff_r29;
  MobyInstance *pMVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar21 = uVar22 - 0x1d0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar22;
  puVar14[0x3c] = in_LR;
  puVar14[0x32] = in_f24;
  puVar14[0x33] = in_f25;
  puVar14[0x34] = in_f26;
  puVar14[0x35] = in_f27;
  puVar14[0x36] = in_f28;
  puVar14[0x37] = in_f29;
  puVar14[0x38] = in_f30;
  puVar14[0x39] = in_f31;
  puVar14[0x31] = unaff_r31;
  puVar14[0x30] = unaff_r30;
  puVar14[0x2f] = unaff_r29;
  puVar14[0x2e] = unaff_r28;
  puVar14[0x2d] = unaff_r27;
  puVar10 = (undefined4 *)moby->pVar;
  mobyupdate_helpers::M602_003d6d70();
  bVar2 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00853674;
  if (bVar2 < 8) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        puVar10[0x6c] = (moby->pos).x;
        puVar10[0x6d] = (moby->pos).y;
        puVar10[0x6e] = (moby->pos).z;
        puVar10[0x6f] = (moby->pos).w;
        puVar10[0x70] = (moby->pos).x;
        puVar10[0x71] = (moby->pos).y;
        puVar10[0x72] = (moby->pos).z;
        puVar10[0x73] = (moby->pos).w;
        moby->state = '\x01';
        *puVar10 = 0x3f800000;
        *(undefined2 *)(puVar10 + 1) = 1;
        *(undefined2 *)(puVar10 + 0x7d) = 0;
        mobyutil::MB_InitDefaultParams((float *)(puVar10 + 0x58));
        puVar10[0x67] = 0x3cf5c28f;
        puVar10[0x68] = 0x3e99999a;
        puVar10[0x69] = 0x3e800000;
        puVar10[0x5b] = 0x40000000;
        puVar10[0x5a] = 0x40000000;
        fVar1 = mobyutil::g_FrameTime;
        puVar10[0x58] = 0x38d;
        puVar10[0x61] = (float)puVar10[0x79] * fVar1;
        uVar23 = rand();
        if ((uVar23 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        puVar10[0x2c] = &DAT_0085367c;
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,0);
        }
      }
      else if ((moby->field43_0x70 & 2U) == 0) {
        if ((int)puVar10[0x7a] < 0) {
          iVar24 = puVar10[0x7e];
          fVar1 = *(float *)(iVar24 + 0x14) - (float)puVar10[0x6d];
          fVar5 = *(float *)(iVar24 + 0x10) - (float)puVar10[0x6c];
          fVar8 = *(float *)(iVar24 + 0x18) - (float)puVar10[0x6e];
          if ((SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1) < (float)puVar10[0x78]) &&
             (ABS(*(float *)(iVar24 + 0x18) - (moby->pos).z) < 4.0)) {
            if (bVar2 == 1) {
              moby->state = '\x05';
              dVar31 = (double)mobyutil::MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              if (moby->animationId != '\x06') {
                puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
              }
            }
            else if (bVar2 == 2) {
              moby->state = '\x05';
              dVar31 = (double)mobyutil::MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              moby->state = '\x06';
            }
          }
        }
        else {
          iVar24 = mobyutil::MB_IsPntInCylinder
                             ((Vec4 *)(puVar10[0x7e] + 0x10),(longlong)(int)puVar10[0x7a]);
          if (iVar24 != 0) {
            if (moby->state == '\x01') {
              moby->state = '\x05';
              dVar31 = (double)mobyutil::MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              if (moby->animationId != '\x06') {
                puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
              }
            }
            else if (moby->state == '\x02') {
              moby->state = '\x05';
              dVar31 = (double)mobyutil::MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              moby->state = '\x06';
            }
          }
        }
      }
      else if (bVar2 == 1) {
        moby->setByGroup = '\x02';
        moby->state = '\x04';
        if (moby->animationId != '\x04') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
      else {
        dVar32 = (double)mobyutil::MB_randRot();
        dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,2.0);
        fVar1 = (float)(dVar32 + 1.570796251296997);
        dVar31 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar31 = dVar32;
        }
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        dVar38 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar31 < 0.0) {
          dVar38 = dVar31;
        }
        fVar8 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        dVar37 = (double)(float)(dVar38 * dVar38);
        fVar6 = fVar8 * fVar8;
        dVar31 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar38));
        fVar1 = fVar6 * fVar6 * fVar8;
        dVar32 = (double)(float)(dVar37 * dVar31);
        puVar10[0x73] = puVar10[0x6f];
        puVar10[0x72] = puVar10[0x6e];
        fVar5 = fVar6 * fVar1;
        puVar10[0x71] =
             (float)((double)((float)(dVar37 * dVar32) * 2.601887e-06 +
                             (float)(dVar32 * -0.0001980741071747616 +
                                    (double)(float)(dVar31 * 0.008333025500178337 +
                                                   (double)(float)((double)(float)(dVar37 * dVar38)
                                                                   * -0.16666656732559204 + dVar38))
                                    )) * dVar33 + (double)(float)puVar10[0x6d]);
        puVar10[0x70] =
             (float)((double)(fVar6 * fVar5 * 2.601887e-06 +
                             fVar5 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * dVar33 +
                    (double)(float)puVar10[0x6c]);
        moby->state = '\a';
      }
    }
    else if (bVar2 < 5) {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar3 = moby->setByGroup;
        moby->state = uVar3;
        if (uVar3 == '\b') {
          if (moby->animationId != '\x01') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if (uVar3 == '\x05') {
          if (moby->animationId != '\x06') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if (uVar3 == '\x02') {
          if (moby->animationId != '\x01') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if ((uVar3 == '\x01') && (moby->animationId != '\x03')) {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else if (bVar2 < 7) {
      fVar1 = *(float *)(puVar10[0x7e] + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(puVar10[0x7e] + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar1);
      fVar8 = ABS(fVar5);
      *(float *)((int)puVar14 + 0xc4) = fVar1;
      *(float *)(puVar14 + 0x19) = fVar5;
      *(float *)((int)puVar14 + 0xcc) = fVar6 - fVar8;
      dVar31 = 0.0;
      uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar14 + 0xc4));
      if (*(float *)((int)puVar14 + 0xcc) - 0.0 < 0.0) {
        fVar1 = fVar8;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)(puVar14 + 0x19));
      if (*(float *)((int)puVar14 + 0xcc) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar32 = dVar31;
      if (0.0 < fVar1) {
        lVar20 = uVar22 - 0x1c0;
        lVar25 = uVar22 - 0xa0;
        lVar27 = uVar22 - 0x90;
        lVar30 = 2;
        fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x13c) = fVar1;
        *(float *)((int)puVar14 + 0x134) = fVar1;
        *(float *)(puVar14 + 0x27) = fVar1;
        *(float *)(puVar14 + 0x26) = fVar1;
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar6;
        *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar1;
        *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar1 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x120) * fVar1 * fVar1;
          iVar24 = (int)lVar25;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar27 = uVar22 - 0xa0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar25 = lVar27;
        do {
          fVar1 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x130) * fVar1;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar25 = 2;
        lVar20 = lVar21;
        do {
          iVar24 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x130)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar32 = (double)fastfunc::FastWrapRot((float)dVar32,(float)puVar10[0x75]);
      dVar41 = 3.141592502593994;
      fVar1 = (float)(dVar32 + 1.570796251296997);
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar37 = 0.008333025500178337;
      dVar38 = -0.0001980741071747616;
      dVar33 = 2.601886990305502e-06;
      dVar32 = 2.0;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar8 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      iVar24 = puVar10[0x7e];
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar16 = fVar7 * fVar7;
      fVar1 = fVar16 * fVar16 * fVar7;
      fVar5 = fVar16 * fVar1;
      *(float *)(puVar14 + 0xe) =
           (fVar16 * fVar5 * 2.601887e-06 +
           fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar16 * fVar7 * -0.16666657 + fVar7) *
           2.0;
      fVar8 = *(float *)(iVar24 + 0x10) - fVar8;
      fVar6 = *(float *)(iVar24 + 0x14) - fVar6;
      dVar35 = ABS((double)fVar8);
      dVar36 = ABS((double)fVar6);
      *(float *)(puVar14 + 0x17) = fVar8;
      *(float *)((int)puVar14 + 0xbc) = fVar6;
      *(float *)(puVar14 + 0x18) = (float)(dVar35 - dVar36);
      fVar1 = (float)puVar10[0x75];
      uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar14 + 0x17));
      if ((double)*(float *)(puVar14 + 0x18) - dVar31 < 0.0) {
        dVar34 = dVar36;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar36 = ABS((double)*(float *)((int)puVar14 + 0xbc));
      if ((double)*(float *)(puVar14 + 0x18) - dVar31 < 0.0) {
        dVar36 = dVar35;
      }
      if (dVar31 < dVar34) {
        lVar20 = uVar22 - 0x1c0;
        lVar27 = uVar22 - 0xb0;
        lVar25 = uVar22 - 0xc0;
        lVar30 = 2;
        fVar6 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar6;
        *(float *)((int)puVar14 + 0x114) = fVar6;
        *(float *)(puVar14 + 0x23) = fVar6;
        *(float *)(puVar14 + 0x22) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7;
        *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar6;
        *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x100) * fVar6 * fVar6;
          iVar24 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar27 = uVar22 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar25 = lVar27;
        do {
          fVar6 = *pfVar26;
          fVar7 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x110) * fVar6;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar20 = 2;
        do {
          iVar24 = (int)lVar21;
          iVar15 = (int)lVar27;
          lVar21 = lVar21 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x110)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar34 = (double)fastfunc::FastWrapRot((float)dVar31,fVar1);
      dVar31 = (double)(float)(dVar41 - dVar34);
      if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
        dVar31 = dVar34;
      }
      dVar41 = (double)(float)(dVar40 - dVar34);
      if ((double)(float)(dVar40 - dVar34) - dVar31 < 0.0) {
        dVar41 = dVar31;
      }
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      *(f32 *)(puVar14 + 0xf) = (moby->pos).z;
      dVar40 = (double)(float)(dVar41 * dVar41);
      *(float *)(puVar14 + 0xe) = *(float *)(puVar14 + 0xe) + fVar1;
      dVar34 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar41));
      dVar31 = (double)(float)(dVar40 * dVar34);
      *(float *)((int)puVar14 + 0x74) =
           (float)((double)(float)((double)(float)(dVar40 * dVar31) * dVar33 +
                                  (double)(float)(dVar31 * dVar38 +
                                                 (double)(float)(dVar34 * dVar37 +
                                                                (double)(float)((double)(float)(
                                                  dVar40 * dVar41) * dVar39 + dVar41)))) * dVar32 +
                  (double)fVar5);
      mobyutil::MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,uVar22 - 0x160,puVar10 + 8);
      uVar3 = moby->state;
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar8 = (moby->pos).z;
      uVar4 = moby->animationId;
      if ((uVar3 != '\x05') ||
         (iVar24 = puVar10[0x7e], fVar7 = fVar5 - *(float *)(iVar24 + 0x14),
         fVar6 = fVar1 - *(float *)(iVar24 + 0x10), fVar16 = fVar8 - *(float *)(iVar24 + 0x18),
         DAT_00853678 <= SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar7 * fVar7))) {
        if ((uVar3 != '\x06') ||
           (iVar24 = puVar10[0x7e], fVar5 = fVar5 - *(float *)(iVar24 + 0x14),
           fVar1 = fVar1 - *(float *)(iVar24 + 0x10), fVar8 = fVar8 - *(float *)(iVar24 + 0x18),
           8.0 <= SQRT(fVar8 * fVar8 + fVar1 * fVar1 + fVar5 * fVar5))) {
          if ((int)puVar10[0x7a] < 0) {
            iVar24 = puVar10[0x7e];
            fVar1 = (float)puVar10[0x6d] - *(float *)(iVar24 + 0x14);
            fVar5 = (float)puVar10[0x6c] - *(float *)(iVar24 + 0x10);
            fVar8 = (float)puVar10[0x6e] - *(float *)(iVar24 + 0x18);
            if ((float)puVar10[0x78] < SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1)) {
              if (uVar3 == '\x05') {
                moby->state = '\x04';
                moby->setByGroup = '\b';
                if (uVar4 != '\x04') {
                  puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
                  mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
                }
              }
              else {
                moby->state = '\b';
              }
            }
          }
          else {
            iVar24 = mobyutil::MB_IsPntInCylinder
                               ((Vec4 *)(puVar10[0x7e] + 0x10),(longlong)(int)puVar10[0x7a]);
            if (iVar24 == 0) {
              if (moby->state == '\x05') {
                moby->state = '\x04';
                moby->setByGroup = '\b';
                if (moby->animationId != '\x04') {
                  puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
                  mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
                }
              }
              else {
                moby->state = '\b';
              }
            }
          }
        }
        else {
          moby->state = '\x03';
          moby->setByGroup = '\x05';
          if (uVar4 != '\x02') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
      }
      else {
        moby->state = '\t';
        if (uVar4 != '\a') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      uVar22 = mobyutil::MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,puVar10 + 0x70,puVar10 + 8);
      if ((uVar22 & 6) != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 == 0xd) {
    uVar23 = puVar10[0x7e];
    if (*(byte *)(uVar23 + 0x20) < 0x80) {
      if (*(char *)(uVar23 + 0xbc) == '\0') {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x60,0x3d71dc);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xff;
        uVar13 = storeVectorElementByteIndexed
                           (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 |
                            auVar42 << 0x20 | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 |
                            auVar42 << 0x40 | auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 |
                            auVar42 << 0x60 | auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,
                            0xbc,(ulonglong)uVar23);
        *(undefined1 *)(uVar23 + 0xbc) = uVar13;
        iVar24 = puVar10[0x7e];
        (moby->pos).x = *(f32 *)(iVar24 + 0x10);
        (moby->pos).y = *(f32 *)(iVar24 + 0x14);
        fVar1 = *(float *)(iVar24 + 0x18);
        (moby->pos).z = fVar1;
        (moby->pos).w = *(f32 *)(iVar24 + 0x1c);
        pfVar26 = (float *)&mobyutil::g_atanQuadrantTable;
        (moby->pos).z = fVar1 + 2.0;
        fVar1 = mobyutil::g_FrameTime;
        puVar10[0x46] = DAT_00853668 * mobyutil::g_FrameTime;
        puVar10[0x47] = DAT_0085366c * fVar1;
        fVar1 = (float)puVar10[0x6c] - (moby->pos).x;
        fVar5 = (float)puVar10[0x6d] - (moby->pos).y;
        fVar6 = ABS(fVar1);
        fVar8 = ABS(fVar5);
        *(float *)(puVar14 + 0x14) = fVar1;
        *(float *)((int)puVar14 + 0xa4) = fVar5;
        *(float *)(puVar14 + 0x15) = fVar6 - fVar8;
        dVar31 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x14));
        if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
          fVar1 = fVar8;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar8 = ABS(*(float *)((int)puVar14 + 0xa4));
        if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
          fVar8 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (0.0 < fVar1) {
          lVar20 = uVar22 - 0x1c0;
          lVar27 = uVar22 - 0xf0;
          lVar25 = uVar22 - 0x100;
          lVar30 = 2;
          fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
          fVar8 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xdc) = fVar1;
          *(float *)((int)puVar14 + 0xd4) = fVar1;
          *(float *)(puVar14 + 0x1b) = fVar1;
          *(float *)(puVar14 + 0x1a) = fVar1;
          fVar1 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar8;
          *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar1;
          *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar1 * fVar8;
          do {
            *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xc0) * fVar1 * fVar1;
            iVar24 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar27 = uVar22 - 0x100;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar1 = *pfVar26;
            fVar8 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xd0) * fVar1;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar20 = 2;
          do {
            iVar24 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar15 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0xd0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar6);
        }
        mobyutil::MB_StartKick(dVar31,moby,puVar10 + 0x40,pfVar26,4,1,0);
        moby->state = '\f';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar2 == 0xc) {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x40));
    uVar3 = moby->animationId;
    if ((uVar23 & 0x40) == 0) {
      fVar11 = (moby->pos).z;
      uVar12 = (int)fVar11 >> 0x1f;
      if (((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x40a00000) || ((uVar23 & 0x20) != 0)) {
        (moby->pos).x = (f32)puVar10[0x6c];
        (moby->pos).y = (f32)puVar10[0x6d];
        (moby->pos).z = (f32)puVar10[0x6e];
        fVar11 = (f32)puVar10[0x6f];
        moby->state = '\x02';
        (moby->pos).w = fVar11;
        if (uVar3 != '\x01') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      moby->state = '\x02';
      if (uVar3 != '\x01') {
        puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
        mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
      }
    }
  }
  else if (bVar2 == 10) {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x40));
    bVar2 = moby->group;
    if ((uVar23 & 0x40) == 0) {
      fVar11 = (moby->pos).z;
      uVar12 = (int)fVar11 >> 0x1f;
      if (((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x40a00000) || ((uVar23 & 0x20) != 0)) {
        if (bVar2 == 0xff) {
          pMVar29 = (MobyInstance *)0x0;
        }
        else {
          pMVar29 = (MobyInstance *)0x0;
          puVar28 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
          do {
            uVar9 = *puVar28;
            if ((MobyInstance[uVar9 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
               ((pMVar29 == (MobyInstance *)0x0 ||
                (uVar22 = mobyutil::MB_randInt(0xff), (uVar22 & 1) != 0)))) {
              pMVar29 = MobyInstance + (uVar9 & 0x7fff);
            }
            uVar9 = *puVar28;
            puVar28 = puVar28 + 1;
          } while (-1 < (short)uVar9);
        }
        puVar10[0x7e] = pMVar29;
        if (pMVar29 == (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(moby);
        }
        else {
          moby->state = '\r';
          (moby->pos).z = (moby->pos).z - 10.0;
        }
      }
    }
    else {
      if (bVar2 == 0xff) {
        pMVar29 = (MobyInstance *)0x0;
      }
      else {
        pMVar29 = (MobyInstance *)0x0;
        puVar28 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
        do {
          uVar9 = *puVar28;
          if ((MobyInstance[uVar9 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
             ((pMVar29 == (MobyInstance *)0x0 ||
              (uVar22 = mobyutil::MB_randInt(0xff), (uVar22 & 1) != 0)))) {
            pMVar29 = MobyInstance + (uVar9 & 0x7fff);
          }
          uVar9 = *puVar28;
          puVar28 = puVar28 + 1;
        } while (-1 < (short)uVar9);
      }
      puVar10[0x7e] = pMVar29;
      if (pMVar29 == (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        moby->state = '\r';
        (moby->pos).z = (moby->pos).z - 10.0;
      }
    }
  }
  else if (bVar2 == 9) {
    fVar1 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    pfVar26 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar6 = ABS(fVar1);
    fVar8 = ABS(fVar5);
    *(float *)((int)puVar14 + 0xac) = fVar1;
    *(float *)(puVar14 + 0x16) = fVar5;
    *(float *)((int)puVar14 + 0xb4) = fVar6 - fVar8;
    dVar31 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar14 + 0xac));
    if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
      fVar1 = fVar8;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar14 + 0x16));
    if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar20 = uVar22 - 0x1c0;
      lVar25 = uVar22 - 0xe0;
      lVar27 = uVar22 - 0xd0;
      lVar30 = 2;
      fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
      fVar6 = fVar1 * fVar1;
      *(float *)((int)puVar14 + 0xfc) = fVar1;
      *(float *)((int)puVar14 + 0xf4) = fVar1;
      *(float *)(puVar14 + 0x1f) = fVar1;
      *(float *)(puVar14 + 0x1e) = fVar1;
      fVar1 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar6;
      *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar1;
      *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar1 * fVar6;
      do {
        *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xe0) * fVar1 * fVar1;
        iVar24 = (int)lVar25;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar27 = uVar22 - 0xe0;
      pfVar26 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar25 = lVar27;
      do {
        fVar1 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xf0) * fVar1;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar20 = 2;
      do {
        iVar24 = (int)lVar21;
        iVar15 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0xf0)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar5);
    }
    dVar32 = 0.20000000298023224;
    mobyutil::OrganicDeltAngSpeed
              (dVar31,0x3f9eb851e0000000,0x3fd3333340000000,0x3fc99999a0000000,moby,pfVar26,
               puVar10 + 0x74);
    dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
    pMVar29 = g_heroMobyPtr;
    if (((dVar31 != 13.0) ||
        (fVar1 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        DAT_00853678 <= SQRT(fVar5 * fVar5 + fVar1 * fVar1))) ||
       (2.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        moby->setByGroup = '\b';
        if (moby->animationId != '\x04') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      fVar1 = (moby->rotation).z;
      fVar5 = fVar1 + 1.5707963;
      fVar8 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar8 = fVar1;
      }
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
        fVar7 = fVar8;
      }
      *(undefined4 *)(puVar14 + 0x11) = 0;
      fVar1 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar1 = fVar6;
      }
      fVar5 = fVar7 * fVar7;
      fVar8 = fVar1 * fVar1;
      fVar17 = fVar5 * fVar5 * fVar7;
      fVar6 = fVar8 * fVar8 * fVar1;
      fVar18 = fVar5 * fVar17;
      fVar16 = fVar8 * fVar6;
      *(float *)((int)puVar14 + 0x84) =
           (float)((double)(fVar5 * fVar18 * 2.601887e-06 +
                           fVar18 * -0.0001980741 +
                           fVar17 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * dVar32);
      *(float *)(puVar14 + 0x10) =
           (float)((double)(fVar8 * fVar16 * 2.601887e-06 +
                           fVar16 * -0.0001980741 +
                           fVar6 * 0.0083330255 + fVar8 * fVar1 * -0.16666657 + fVar1) * dVar32);
      *(f32 *)(puVar14 + 0x12) = (pMVar29->pos).x;
      *(f32 *)((int)puVar14 + 0x94) = (pMVar29->pos).y;
      fVar1 = (pMVar29->pos).z;
      *(float *)(puVar14 + 0x13) = fVar1;
      *(f32 *)((int)puVar14 + 0x9c) = (pMVar29->pos).w;
      *(float *)(puVar14 + 0x13) = fVar1 + 0.75;
      mobyutil::CollDamageMobyDirect
                (1.0,pMVar29,moby,1,0x3d71dc,(float *)(puVar14 + 0x12),(float *)(puVar14 + 0x10));
    }
  }
  else if (((bVar2 == 8) &&
           (mobyutil::MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,puVar10 + 0x6c,puVar10 + 8),
           fVar1 = (moby->pos).y - (float)puVar10[0x6d],
           fVar5 = (moby->pos).x - (float)puVar10[0x6c],
           fVar8 = (moby->pos).z - (float)puVar10[0x6e],
           SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1) < 0.5)) &&
          (moby->state = '\x02', moby->animationId != '\x01')) {
    puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
  }
  return;
}



//==== 003d8af0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M604_003d8af0(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M604_003d8af0(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\v') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\v';
  }
  return;
}



//==== 003d8b48  ns=mobyupdate_helpers  size=0x58
// sig: undefined M604_003d8b48(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M604_003d8b48(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\v') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xb;
  }
  return;
}



//==== 003d8ba0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M604_003d8ba0(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M604_003d8ba0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\v') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xb;
  }
  return;
}



//==== 003d8bf8  ns=mobyupdate_helpers  size=0x38
// sig: undefined M604_003d8bf8(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M604_003d8bf8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xb;
  return;
}



//==== 003d8c30  ns=mobyupdate_helpers  size=0x40
// sig: undefined M604_003d8c30(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M604_003d8c30(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 003d8c70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M604_003d8c70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M604_003d8c70(void)

{
  DAT_008536d4 = 0x10000;
  return;
}



//==== 003d8ca0  ns=mobyupdate_unsorted  size=0x4fc
// sig: undefined UpdateMoby_604(MobyInstance * moby)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed

/* Moby 604 */

void mobyupdate_unsorted::UpdateMoby_604(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  double dVar5;
  
  if (moby != (MobyInstance *)0x0) {
    pfVar4 = (float *)moby->pVar;
    if ((((pfVar4 != (float *)0x0) && (moby->state != '\0')) &&
        (UnlockableItems.sonicSummoner != '\0')) && (DAT_0096ae38 == 5)) {
      dVar5 = (double)mobyutil::MB_DeltAngSpeed
                                ((double)(moby->rotation).z,(double)*pfVar4,
                                 (double)(DAT_0071f418 * 6.2831855),
                                 (double)(DAT_0071f418 * 5.7595863),0,&DAT_003d8c88,&DAT_00720000,
                                 pfVar4 + 1);
      (moby->rotation).z = (float)dVar5;
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x06') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->setByGroup == '\a') || (moby->setByGroup == '\x01')) {
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(moby,6,0,(int)(animationSpeed * 3.5));
          }
          moby->state = '\a';
        }
        else {
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 3.5));
          }
          moby->state = '\x03';
        }
      }
    }
    else if (uVar1 == '\x05') {
      cVar2 = moby->setByGroup;
      if (((cVar2 == '\x06' || cVar2 == '\x03') || (cVar2 == '\a')) || (cVar2 == '\x01')) {
        if (moby->animationId != '\x05') {
          mobyutil::MB_SetAnimation(moby,5,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      cVar2 = moby->setByGroup;
      if ((cVar2 == '\x04') || (cVar2 == '\x05')) {
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x04';
      }
      else if ((cVar2 == '\a') || (cVar2 == '\x01')) {
        if (moby->animationId != '\x06') {
          mobyutil::MB_SetAnimation(moby,6,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\a';
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      cVar2 = moby->setByGroup;
      if ((cVar2 == '\x04' || cVar2 == '\x03') || (cVar2 == '\x05')) {
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 0.5));
      }
      fVar3 = (moby->rotation).z;
      moby->state = '\x01';
      *pfVar4 = fVar3;
    }
  }
  return;
}



//==== 003d919c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M605_003d919c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M605_003d919c(void)

{
  DAT_00853744 = 0x10000;
  return;
}



//==== 003d91b8  ns=mobyupdate_unsorted  size=0x298
// sig: undefined UpdateMoby_605_MetalDetectorSpot(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 605 */

void mobyupdate_unsorted::UpdateMoby_605_MetalDetectorSpot(MobyInstance *moby)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  MobyModeBit MVar4;
  f32 *pfVar5;
  void *pvVar6;
  float fVar7;
  uint uVar8;
  f32 fVar9;
  int iVar10;
  Vec4 local_30;
  
  pfVar5 = (f32 *)moby->pVar;
  if (moby->state == '\0') {
    if (pfVar5 == (f32 *)0x0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar9 = (moby->pos).x;
    moby->updateDistance = -1;
    *pfVar5 = fVar9;
    pfVar5[1] = (moby->pos).y;
    MVar4 = moby->modeBits;
    pfVar5[2] = (moby->pos).z;
    pfVar5[3] = (moby->pos).w;
    moby->state = '\x01';
    moby->modeBits = MVar4 | (UNK_40|DISABLED);
    if ((moby->setByGroup == '\0') && ((int)Level < 0x14)) {
      bVar1 = (int)DAT_010cafd0 < 0;
      uVar2 = DAT_010cafd0 & 1;
      iVar10 = (int)DAT_010cafd0 >> 1;
      uVar8 = DAT_010cafd0 & 1;
      DAT_010cafd0 = DAT_010cafd0 + 1;
      bVar3 = (&DAT_00a0cbc4)[Level * 0x10 + iVar10 + (uint)(bVar1 && uVar2 != 0)];
      uVar2 = bVar3 & 0xf;
      moby->setByGroup = (char)DAT_010cafd0;
      fVar9 = (f32)((int)pfVar5[6] +
                   (uVar2 + ((uint)((LZCOUNT(-uVar8) << 0x3a) >> 0x3f) & (bVar3 >> 4) - uVar2)) * -5
                   );
      pfVar5[6] = fVar9;
      if ((int)fVar9 < 1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  else {
    DAT_010cafd0 = 0;
  }
  if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1b)) {
    local_30.x = g_heroPosition.x;
    local_30.y = g_heroPosition.y;
    local_30.z = g_heroPosition.z;
    local_30.w = g_heroPosition.w;
  }
  else {
    pvVar6 = g_currentWeaponMoby->pVar;
    local_30.x = *(float *)((int)pvVar6 + 0x10);
    local_30.y = *(float *)((int)pvVar6 + 0x14);
    local_30.z = *(float *)((int)pvVar6 + 0x18);
    local_30.w = *(float *)((int)pvVar6 + 0x1c);
  }
  if (((((pfVar5[4] != -NAN) &&
        (iVar10 = mobyutil::PointInsideComplexPoly
                            (&local_30,(Vec4 *)Splines[(int)pfVar5[4]]->points,
                             Splines[(int)pfVar5[4]]->cnt), iVar10 != 0)) ||
       ((pfVar5[5] != -NAN &&
        (iVar10 = mobyutil::MB_IsPntInCuboid(&local_30,(longlong)(int)pfVar5[5]), iVar10 != 0)))) ||
      ((pfVar5[4] == -NAN && (pfVar5[5] == -NAN)))) &&
     ((local_30.y = (moby->pos).y - local_30.y, local_30.x = (moby->pos).x - local_30.x,
      fVar7 = SQRT(local_30.x * local_30.x + local_30.y * local_30.y), fVar7 < DAT_0096bd24 &&
      (DAT_0096bd20 = moby, DAT_0096bd24 = fVar7, fVar7 < 20.0)))) {
    g_MetalDetectorSpotIsClose = 1;
  }
  return;
}



//==== 003d9450  ns=mobyupdate_helpers  size=0x14
// sig: undefined M607_003d9450(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M607_003d9450(void)

{
  DAT_008537b4 = 0x10000;
  return;
}



//==== 003d9470  ns=mobyupdate_unsorted  size=0x74
// sig: undefined UpdateMoby_607(MobyInstance * moby)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

/* Moby 607 */

void mobyupdate_unsorted::UpdateMoby_607(MobyInstance *moby)

{
  if ((g_heroState == FALLING) && (moby->animationId != '\x06')) {
    mobyutil::MB_SetAnimation(moby,6,0,(int)(animationSpeed * 10.5));
  }
  return;
}



//==== 003d94e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M610_003d94e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M610_003d94e4(void)

{
  DAT_00853824 = 0x10000;
  return;
}



//==== 003d9508  ns=mobyupdate_helpers  size=0x228
// sig: undefined M610_003d9508(void)
// callers(2): 003d9760 mobyupdate_helpers::M610_003d9760; 003d9bb8 mobyupdate_unsorted::UpdateMoby_610_WindControl
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M610_003d9508(int param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Cuboid *pCVar5;
  int iVar6;
  undefined2 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  
  pCVar5 = Cuboids;
  iVar3 = *(int *)(param_1 + 0x78);
  dVar14 = (double)*param_3;
  iVar4 = iVar3 + (int)(param_2 << 4);
  uVar12 = 0;
  dVar13 = (double)param_3[1];
  iVar6 = *(int *)(iVar3 + 0x504);
  dVar11 = (double)param_3[2];
  fVar1 = Cuboids[iVar6].pos.y;
  *(float *)(iVar4 + 0x20) = Cuboids[iVar6].pos.x;
  fVar2 = pCVar5[iVar6].pos.z;
  *(float *)(iVar4 + 0x24) = fVar1;
  fVar1 = pCVar5[iVar6].pos.w;
  *(float *)(iVar4 + 0x28) = fVar2;
  *(float *)(iVar4 + 0x2c) = fVar1;
  dVar10 = (double)*(float *)(iVar3 + 0x14);
  dVar8 = (double)mobyutil::MB_randRangeSigned(0,(double)*(float *)(iVar3 + 0x18));
  dVar9 = (double)mobyutil::MB_randRangeSigned(uVar12,(double)*(float *)(iVar3 + 0x1c));
  *(float *)(iVar4 + 0x20) =
       *(float *)(iVar4 + 0x20) + -(float)(dVar10 * dVar14) + -(float)(dVar13 * dVar8);
  *(float *)(iVar4 + 0x24) =
       (float)(dVar14 * dVar8 + (double)(*(float *)(iVar4 + 0x24) + -(float)(dVar10 * dVar13)));
  *(float *)(iVar4 + 0x28) =
       (float)((double)(*(float *)(iVar4 + 0x28) + -(float)(dVar10 * dVar11)) + dVar9);
  dVar8 = (double)mobyutil::MB_randRangeFloat(DAT_008538ec,DAT_008538f0);
  *(float *)(iVar4 + 0x2c) = (float)dVar8;
  dVar8 = (double)mobyutil::MB_randRangeFloat
                            ((float)(longlong)DAT_008538e4,(float)(longlong)DAT_008538e8);
  dVar9 = (double)mobyutil::g_FrameTime;
  fVar1 = *(float *)(iVar3 + 0x14);
  *(float *)(iVar3 + (int)(param_2 << 2) + 0x440) = (float)(dVar8 * dVar9);
  iVar6 = fastfunc::FastDoubleToInt((double)((fVar1 * 2.0) / (float)(dVar8 * dVar9)));
  iVar3 = iVar3 + (int)(param_2 << 1);
  fVar1 = animationSpeed * ((float)(longlong)iVar6 + 0.5);
  *(undefined2 *)(iVar3 + 0x3e0) = 0;
  uVar7 = (undefined2)(int)fVar1;
  *(undefined2 *)(iVar3 + 800) = uVar7;
  *(undefined2 *)(iVar3 + 0x380) = uVar7;
  return;
}



//==== 003d9760  ns=mobyupdate_helpers  size=0x428
// sig: undefined M610_003d9760(void)
// callers(1): 003d9bb8 mobyupdate_unsorted::UpdateMoby_610_WindControl
// callees(7): 0006d7e0 draw::RegisterPostDraw; 00110b70 mobyutil::MB_IsPntInCuboid; 003d9508 mobyupdate_helpers::M610_003d9508; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M610_003d9760(void *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  short *psVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  short *psVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_d0 [16];
  Vec4 local_c0;
  longlong local_b0;
  
  fVar1 = *(float *)((int)param_1 + 0x48);
  fVar6 = fVar1 + 1.5707963;
  uVar22 = 0;
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  fVar9 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar9 = fVar6;
  }
  fVar8 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar8 = fVar7;
  }
  uVar5 = *(uint *)((int)param_1 + 0x78);
  fVar1 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
    fVar1 = fVar9;
  }
  fVar6 = fVar8 * fVar8;
  fVar7 = fVar1 * fVar1;
  fVar11 = fVar6 * fVar6 * fVar8;
  fVar9 = fVar7 * fVar7 * fVar1;
  fVar12 = fVar6 * fVar11;
  fVar10 = fVar7 * fVar9;
  local_c0.x = g_heroPosition.x;
  local_c0.y = g_heroPosition.y;
  local_c0.w = g_heroPosition.w;
  local_c0.z = g_heroPosition.z + 1.0;
  iVar17 = mobyutil::MB_IsPntInCuboid(&local_c0,(longlong)*(int *)(uVar5 + 0x504));
  dVar29 = 8.0;
  dVar30 = 2.356194496154785;
  auVar34 = loadVectorLeftIndexed(0x28,0x3d9730);
  dVar31 = 20.5;
  auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  do {
    lVar21 = (uVar22 & 0x7fffffff) * 2;
    uVar24 = lVar21 + (ulonglong)uVar5 + 800;
    uVar16 = uVar24 & 0xffffffff;
    iVar18 = fastfunc::FastDecTimerS16(uVar16);
    iVar23 = (int)uVar22;
    if (iVar18 == 0) {
      iVar18 = (int)lVar21;
      psVar14 = (short *)(iVar18 + uVar5 + 0x380);
      puVar15 = (undefined2 *)(iVar18 + uVar5 + 0x3e0);
      local_b0 = (longlong)DAT_008538c4;
      psVar25 = (short *)uVar24;
      sVar3 = *psVar25;
      sVar4 = *psVar14;
      dVar28 = (double)local_b0;
      if (sVar4 - DAT_008538e0 < (int)sVar3) {
        dVar26 = (double)fastfunc::FastIntToDouble((longlong)sVar4 - (longlong)sVar3);
        dVar27 = (double)fastfunc::FastIntToDouble(DAT_008538e0);
        uVar19 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar28 * (double)(float)(dVar26 / dVar27)));
        *puVar15 = uVar19;
      }
      else {
        dVar26 = (double)fastfunc::FastIntToDouble(local_b0,(longlong)sVar3);
        dVar27 = (double)fastfunc::FastIntToDouble(*psVar14 - DAT_008538e0);
        uVar19 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar28 * (double)(float)(dVar26 / dVar27)));
        *puVar15 = uVar19;
      }
      pfVar20 = (float *)(iVar23 * 0x10 + uVar5 + 0x20);
      fVar2 = *(float *)((int)((uVar22 & 0xffffffff) << 2) + uVar5 + 0x440);
      fVar13 = (fVar7 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar1 * -0.16666657 + fVar1)
               * fVar2 + *pfVar20;
      *pfVar20 = fVar13;
      pfVar20[1] = (fVar6 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * fVar2 + pfVar20[1]
      ;
      pfVar20[2] = fVar2 * 0.0 + pfVar20[2];
      if (((iVar17 != 0) && (ABS((double)(fVar13 - GameCamera.posX)) < dVar29)) &&
         (ABS((double)(*(float *)(iVar23 * 0x10 + uVar5 + 0x24) - GameCamera.posY)) < dVar29)) {
        dVar28 = (double)fastfunc::FastSubRots
                                   (*(float *)((int)param_1 + 0x48),GameCamera.rot.radius);
        if (dVar30 < dVar28) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
          local_b0 = (longlong)(int)((double)animationSpeed * dVar31);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          if ((int)((double)animationSpeed * dVar31) < (int)*psVar25) {
            auVar32 = vectorSplatHalfWord(auVar32,1);
            sVar3 = storeVectorElementHalfWordIndexed(auVar32,0,uVar16);
            *psVar25 = sVar3;
          }
        }
      }
    }
    else if ((iVar17 == 0) || (iVar23 < 0x18)) {
      M610_003d9508(param_1,uVar22,local_d0);
    }
    uVar22 = (ulonglong)(iVar23 + 1);
  } while (iVar23 + 1 < 0x30);
  draw::RegisterPostDraw(&PTR_M611_003da478_0070d8d0,param_1);
  return;
}



//==== 003d9bb8  ns=mobyupdate_unsorted  size=0x8b4
// sig: undefined UpdateMoby_610_WindControl(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 003d9508 mobyupdate_helpers::M610_003d9508; 003d9760 mobyupdate_helpers::M610_003d9760; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 00656c24: '*Error: Moby 610 (wind-control) with no cuboid index (wind pushing hero area). UID: %d - RAR\n' | 00656c84: '*Error: Moby 610 (wind-control) with no fxArea cuboid (fx drawing area). UID: %d - RAR\n' | 00656cdc: '*Error: Moby 610 (wind-control) with no fxAct cuboid (fx activation area). UID: %d - RAR\n'

/* Moby 610 */

void mobyupdate_unsorted::UpdateMoby_610_WindControl(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  Cuboid *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 in_LR;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_80 [32];
  
  piVar4 = (int *)moby->pVar;
  uVar15 = ZEXT48(piVar4);
  if (moby->state == '\0') {
    moby->state = '\x01';
    pCVar7 = Cuboids;
    if (*piVar4 < 0) {
      libc::printf("*Error: Moby 610 (wind-control) with no cuboid index (wind pushing hero area). UID: %d - RAR\n"
                   ,moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (piVar4[0x141] < 0) {
      libc::printf("*Error: Moby 610 (wind-control) with no fxArea cuboid (fx drawing area). UID: %d - RAR\n"
                   ,moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (piVar4[0x140] < 0) {
      libc::printf("*Error: Moby 610 (wind-control) with no fxAct cuboid (fx activation area). UID: %d - RAR\n"
                   ,moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar14 = 0;
    *(undefined2 *)((int)piVar4 + 0xe) = 0;
    pCVar7 = pCVar7 + piVar4[0x141];
    fVar1 = (pCVar7->matrix).v0.y;
    fVar2 = (pCVar7->matrix).v0.x;
    fVar3 = (pCVar7->matrix).v0.z;
    auVar29 = ZEXT416(0xfffffff0);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    piVar4[5] = (int)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 2.0);
    fVar1 = (pCVar7->matrix).v1.y;
    fVar2 = (pCVar7->matrix).v1.x;
    fVar3 = (pCVar7->matrix).v1.z;
    auVar30 = loadVectorLeftIndexed(0x508,uVar15);
    auVar32 = loadVectorRightIndexed(0x518,uVar15);
    auVar29 = vectorShiftRightAlgebraicWord
                        (auVar30 | auVar32,
                         auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar30 = vectorConvertFromSignedFixedPointWord(auVar29,0);
    piVar4[6] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = (pCVar7->matrix).v2.y;
    fVar2 = (pCVar7->matrix).v2.x;
    fVar3 = (pCVar7->matrix).v2.z;
    piVar4[7] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    auVar29 = loadVectorLeftIndexed(4,0x3d9b88);
    auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = vectorAddFloatingPoint
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar31);
    fVar1 = animationSpeed * ((float)(longlong)(int)*(short *)(piVar4 + 0x142) + 0.5);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = vectorSplatHalfWord(auVar29,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar29,0x50a,uVar15);
    *(undefined2 *)((int)piVar4 + 0x50a) = uVar5;
    dVar16 = (double)fastfunc::FastIntToDouble((short)(int)fVar1);
    piVar4[0x143] = (int)(float)(1.0 / dVar16);
    do {
      mobyupdate_helpers::M610_003d9508(moby,iVar14,local_80);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x30);
  }
  iVar14 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[0x140]);
  if (iVar14 != 0) {
    dVar16 = 1.570796251296997;
    dVar22 = 3.141592502593994;
    fVar1 = (moby->rotation).z + 1.5707963;
    dVar23 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar25 = 0.008333025500178337;
    dVar26 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar9 = fVar3 * fVar3;
    fVar1 = fVar9 * fVar9 * fVar3;
    fVar2 = fVar9 * fVar1;
    DAT_00fa4360 = mobyutil::g_FrameTime * DAT_00853854 *
                   (fVar9 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3);
    fVar1 = (moby->rotation).z;
    DAT_00fa4368 = 0;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar9 = fVar3 * fVar3;
    fVar1 = fVar9 * fVar9 * fVar3;
    fVar2 = fVar9 * fVar1;
    DAT_00fa4364 = mobyutil::g_FrameTime * DAT_00853854 *
                   (fVar9 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3);
    dVar28 = 1.0;
    DAT_00fa4370 = 0x3f800000;
    mobyupdate_helpers::M610_003d9760(moby);
    if ((((g_onMagnerail == 0) && (hero::g_HeroRequestedCamType != 0xd)) &&
        ((DAT_0096afc2 != '\0' || (DAT_00969fec != 0)))) &&
       (iVar14 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar4), iVar14 != 0)) {
      fastfunc::FastDecTimerS16(uVar15 + 0x50a);
      dVar17 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)piVar4 + 0x50a));
      iVar14 = DAT_00853850;
      dVar18 = (double)(moby->rotation).z;
      dVar19 = (double)(float)(dVar18 + dVar16);
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      dVar16 = (double)(float)(dVar22 - dVar18);
      if (dVar18 - (double)(float)(dVar22 - dVar18) < 0.0) {
        dVar16 = dVar18;
      }
      dVar20 = (double)(float)(dVar22 - dVar19);
      if (dVar19 - (double)(float)(dVar22 - dVar19) < 0.0) {
        dVar20 = dVar19;
      }
      dVar22 = (double)(float)(dVar23 - dVar18);
      if ((double)(float)(dVar23 - dVar18) - dVar16 < 0.0) {
        dVar22 = dVar16;
      }
      dVar16 = (double)(float)(dVar23 - dVar19);
      if ((double)(float)(dVar23 - dVar19) - dVar20 < 0.0) {
        dVar16 = dVar20;
      }
      dVar18 = (double)(float)(dVar22 * dVar22);
      fVar1 = (float)piVar4[2] * mobyutil::g_FrameTime *
              -(float)(dVar17 * (double)(float)piVar4[0x143] - dVar28);
      dVar23 = (double)(float)(dVar16 * dVar16);
      *(undefined2 *)((int)piVar4 + 0xe) = 1;
      dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar22));
      auVar30 = loadVectorLeftIndexed(0x3850,0x850000);
      auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
      dVar17 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar16));
      dVar19 = (double)(float)(dVar18 * dVar20);
      dVar21 = (double)(float)(dVar23 * dVar17);
      DAT_00969dd4 = (float)((double)(float)(dVar18 * dVar19) * dVar27 +
                            (double)(float)(dVar19 * dVar26 +
                                           (double)(float)(dVar20 * dVar25 +
                                                          (double)(float)((double)(float)(dVar18 * 
                                                  dVar22) * dVar24 + dVar22)))) * fVar1 +
                     DAT_00969dd4;
      DAT_00969dd0 = (float)((double)(float)(dVar23 * dVar21) * dVar27 +
                            (double)(float)(dVar21 * dVar26 +
                                           (double)(float)(dVar17 * dVar25 +
                                                          (double)(float)((double)(float)(dVar23 * 
                                                  dVar16) * dVar24 + dVar16)))) * fVar1 +
                     DAT_00969dd0;
      auVar30 = loadVectorLeftIndexed(4,0x3d9b88);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = vectorAddFloatingPoint
                          (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar29);
      fVar1 = animationSpeed * ((float)(longlong)iVar14 + 0.5);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = vectorSplatHalfWord(auVar29,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar29,0xc,uVar15);
      *(undefined2 *)(piVar4 + 3) = uVar5;
      dVar16 = (double)fastfunc::FastIntToDouble((short)(int)fVar1);
      piVar4[4] = (int)(float)(dVar28 / dVar16);
      return;
    }
  }
  if ((*(short *)((int)piVar4 + 0xe) != 0) && (*(short *)(piVar4 + 3) != 0)) {
    iVar14 = fastfunc::FastDecTimerS16(uVar15 + 0xc);
    if (iVar14 != 0) {
      auVar29 = ZEXT416(0xffffffff);
      auVar32 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = loadVectorLeftIndexed(0x508,uVar15);
      auVar31 = loadVectorRightIndexed(0x518,uVar15);
      *(undefined2 *)((int)piVar4 + 0xe) = 0;
      auVar29 = ZEXT416(0xfffffff0);
      auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar29 = vectorShiftRightAlgebraicWord
                          (auVar30 | auVar31,
                           auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar31 = loadVectorLeftIndexed(4,0x3d9b88);
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar29,0);
      auVar29 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = vectorAddFloatingPoint
                          (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar32);
      fVar1 = animationSpeed * ((float)(longlong)(int)*(short *)(piVar4 + 0x142) + 0.5);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = vectorSplatHalfWord(auVar29,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar29,0x50a,uVar15);
      *(undefined2 *)((int)piVar4 + 0x50a) = uVar5;
      dVar16 = (double)fastfunc::FastIntToDouble((short)(int)fVar1);
      piVar4[0x143] = (int)(float)(1.0 / dVar16);
    }
    if ((g_onMagnerail != 0) || (DAT_0096afc2 == '\0')) {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(0x28,0x3d9b88);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                           auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      if ((int)(animationSpeed * 15.5) < (int)*(short *)(piVar4 + 3)) {
        auVar30 = ZEXT416(0xfffffff0);
        auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar32 = vectorSplatHalfWord(auVar29,1);
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar31);
        auVar29 = ZEXT416(0xffffffff);
        auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        uVar5 = storeVectorElementHalfWordIndexed(auVar32,0xc,uVar15);
        *(undefined2 *)(piVar4 + 3) = uVar5;
        auVar30 = vectorShiftRightAlgebraicWord(auVar30,auVar31);
        auVar31 = loadVectorLeftIndexed(in_LR,0x3d9b88);
        auVar29 = ZEXT416(0xffffffff);
        auVar32 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar29 = ZEXT416(0xffffffff);
        auVar35 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = vectorReciprocalEstimateFloatingPoint(auVar30);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar30,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar33,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar30,auVar31);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar29,auVar32,auVar34);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar30,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar33);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x10,uVar15
                          );
        *(undefined4 *)((uint)(piVar4 + 4) & 0xfffffffc) = uVar6;
      }
    }
    dVar16 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(piVar4 + 3));
    fVar1 = (moby->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar9 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar9 = fVar2;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar8 = fVar3;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
      fVar1 = fVar9;
    }
    fVar2 = fVar8 * fVar8;
    fVar13 = (float)piVar4[2] * mobyutil::g_FrameTime * (float)(dVar16 * (double)(float)piVar4[4]);
    fVar3 = fVar1 * fVar1;
    fVar11 = fVar2 * fVar2 * fVar8;
    fVar9 = fVar3 * fVar3 * fVar1;
    fVar12 = fVar2 * fVar11;
    fVar10 = fVar3 * fVar9;
    DAT_00969dd4 = (fVar2 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar13 +
                   DAT_00969dd4;
    DAT_00969dd0 = (fVar3 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * fVar13 +
                   DAT_00969dd0;
  }
  return;
}



//==== 003da478  ns=mobyupdate_helpers  size=0x3b8
// sig: undefined M611_003da478(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M611_003da478(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float local_f0 [36];
  
  iVar9 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(0x30);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar10 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar10);
  uVar10 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar10);
  dVar26 = 1.0;
  iVar16 = 0;
  iVar13 = 0;
  dVar25 = 0.0;
  iVar15 = iVar9;
  iVar14 = iVar9;
  do {
    if (*(short *)(iVar15 + 800) != 0) {
      fVar5 = *(float *)(iVar14 + 0x24);
      fVar6 = *(float *)(iVar14 + 0x20);
      fVar2 = (float)((double)fVar5 - (double)GameCamera.posY);
      fVar7 = *(float *)(iVar14 + 0x28);
      fVar3 = (float)((double)fVar6 - (double)GameCamera.posX);
      fVar4 = (float)((double)fVar7 - (double)GameCamera.posZ);
      fVar8 = *(float *)(iVar14 + 0x2c);
      dVar18 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar20 = dVar25;
      dVar21 = dVar25;
      dVar22 = dVar25;
      if ((double)(float)SQRT(dVar18) != dVar25) {
        dVar20 = 1.0 / SQRT(dVar18);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26) *
                        (double)(float)(dVar20 * 0.5) + dVar20);
        dVar22 = (double)(fVar3 * fVar1);
        dVar21 = (double)(fVar2 * fVar1);
        dVar20 = (double)(fVar4 * fVar1);
      }
      dVar23 = (double)(float)(dVar22 * dVar22 + --(double)(float)(dVar21 * dVar21));
      dVar18 = dVar25;
      dVar19 = dVar25;
      if ((double)(float)SQRT(dVar23) != dVar25) {
        dVar18 = 1.0 / SQRT(dVar23);
        dVar18 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar18 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar18 = (double)(float)(dVar22 * dVar19);
        dVar19 = -(double)(float)(dVar21 * dVar19);
      }
      lVar17 = 4;
      pfVar12 = (float *)&DAT_00853880;
      pfVar11 = local_f0;
      do {
        fVar2 = *(float *)(iVar13 + iVar9 + 0x2c);
        fVar3 = pfVar12[1];
        dVar24 = (double)(*pfVar12 * fVar2);
        fVar4 = pfVar12[2] * fVar2;
        dVar23 = (double)pfVar12[3];
        pfVar12 = pfVar12 + 4;
        pfVar11[3] = (float)(dVar23 * (double)fVar8 + (double)(float)(dVar24 * (double)fVar8));
        pfVar11[2] = (float)(dVar23 * (double)fVar7 +
                            (double)((float)(dVar22 * dVar18 - (double)(float)(dVar21 * dVar19)) *
                                     fVar4 + (float)(dVar24 * dVar20 + dVar25)));
        *pfVar11 = (float)(dVar23 * (double)fVar6 +
                          (double)((float)(dVar21 * dVar25 - (double)(float)(dVar20 * dVar18)) *
                                   fVar4 + (float)(dVar24 * dVar22 +
                                                  (double)(float)((double)(fVar3 * fVar2) * dVar19))
                                  ));
        pfVar11[1] = (float)(dVar23 * (double)fVar5 +
                            (double)((float)(dVar20 * dVar19 - dVar25) * fVar4 +
                                    (float)(dVar24 * dVar21 +
                                           (double)(float)((double)(fVar3 * fVar2) * dVar18))));
        pfVar11 = pfVar11 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      draw::FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
    }
    iVar16 = iVar16 + 1;
    iVar13 = iVar13 + 0x10;
    iVar15 = iVar15 + 2;
    iVar14 = iVar14 + 0x10;
  } while (iVar16 < 0x30);
  return;
}



//==== 003da830  ns=mobyupdate_helpers  size=0x14
// sig: undefined M611_003da830(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M611_003da830(void)

{
  DAT_00853940 = 0x10000;
  return;
}



//==== 003da868  ns=mobyupdate_unsorted  size=0x608
// sig: undefined UpdateMoby_611(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000f25f4 mobyproc::UpdateMobyGrids; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c000 mobyutil::MB_CopyHeroLights; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 00656d40: 'pDam HP:%f damageroClass:%d\n' | 00656d60: 'reaction type:%d damagetype:%d\n' | 00656d80: 'HP:%f\n' | 00656d88: 'group: pVar=%d moby=%d count:%d\n' | 003da850: '?333A' (raw)

/* Moby 611 */

void mobyupdate_unsorted::UpdateMoby_611(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 reactionType;
  ulonglong uVar8;
  undefined8 in_LR;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_50 [4];
  int damageType;
  MobyInstance *local_3c;
  MobyInstance *local_38 [4];
  
  if (moby != (MobyInstance *)0x0) {
    pfVar3 = (float *)moby->pVar;
    uVar8 = ZEXT48(pfVar3);
    if (pfVar3 != (float *)0x0) {
      iVar7 = mobyutil::MB_damage(moby,0xc30000,0);
      if (iVar7 != 0) {
        libc::printf("pDam HP:%f damageroClass:%d\n",(double)*(float *)(iVar7 + 0x2c),
                     *(undefined2 *)(*(int *)(iVar7 + 0x20) + 0xa6));
      }
      reactionType = mobyutil::MB_HandleDamage(moby,iVar7,uVar8,0,&damageType,0,0,4);
      if (iVar7 != 0) {
        libc::printf("reaction type:%d damagetype:%d\n",reactionType,damageType);
      }
      if (1 < damageType) {
        fVar5 = *pfVar3 - *(float *)(iVar7 + 0x2c);
        *pfVar3 = fVar5;
        libc::printf("HP:%f\n",(double)fVar5);
        if ((int)*pfVar3 < 1) {
          moby->state = '\x04';
          *(undefined1 *)((int)pfVar3 + 0x47) = 0x78;
          mobyutil::MB_UpdateLightsTransition(moby,uVar8 + 0x40);
        }
        else {
          *(undefined1 *)((int)pfVar3 + 0x47) = 0x5a;
          mobyutil::MB_UpdateLightsTransition(moby,uVar8 + 0x40);
        }
      }
      moby->damage = -1;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      bVar1 = moby->state;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      dVar9 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          local_3c = (MobyInstance *)0x0;
          pfVar3[0x1a] = 0.0;
          pfVar3[0x19] = 0.0;
          libc::printf("group: pVar=%d moby=%d count:%d\n",pfVar3[0x15],(ulonglong)(byte)moby->group
                       ,mobyutil::g_NumMobyGroups);
          iVar7 = mobyutil::MB_GetFirstMobyInGroup(&local_3c,(int)pfVar3[0x15],'\x01','\0');
          while (iVar7 == 0) {
            if (((local_3c != (MobyInstance *)0x0) &&
                (local_3c->state != 0xfd && local_3c->state != 0xfe)) && (local_3c != moby)) {
              mobyfunc::DeleteMoby(local_3c);
            }
            if (local_3c != moby) {
              pfVar3[0x1a] = (float)((int)pfVar3[0x1a] + 1);
            }
            iVar7 = mobyutil::MB_GetNextMobyInGroup(&local_3c,local_3c,'\0','\0');
          }
          auVar10 = ZEXT416(0xffffffff);
          auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          moby->state = '\x01';
          auVar10 = loadVectorLeftIndexed(0x58,uVar8);
          auVar11 = loadVectorRightIndexed(0x68,uVar8);
          auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar11 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar11,0);
          auVar10 = loadVectorLeftIndexed(in_LR,0x3da848);
          auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar10 = vectorAddFloatingPoint
                              (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60
                              );
          auVar10 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar12);
          auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
          auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x60,
                             uVar8);
          *(undefined4 *)((uint)(pfVar3 + 0x18) & 0xfffffffc) = uVar4;
          pfVar3[0x19] = 0.0;
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        }
        else {
          iVar7 = fastfunc::FastDecTimerS32(uVar8 + 0x60);
          if ((iVar7 != 0) && (dVar9 < (double)pfVar3[0x14])) {
            local_38[0] = (MobyInstance *)0x0;
            mobyutil::MB_GetFirstMobyInGroup(local_38,(int)pfVar3[0x15],'\x01','\x01');
            if (local_38[0] == moby) {
              mobyutil::MB_GetNextMobyInGroup(local_38,local_38[0],'\x01','\x01');
            }
            if (local_38[0] != (MobyInstance *)0x0) {
              pfVar3[0x19] = (float)((int)pfVar3[0x19] + 1);
              local_38[0]->state = '\0';
              local_38[0]->setByGroup = '\0';
              local_38[0]->modeBits = *(MobyModeBit *)&local_38[0]->pClass->mode_bits;
              local_38[0]->scale = local_38[0]->pClass->gScale;
              local_38[0]->updateDistance = -1;
              local_38[0]->drawDistance = 0xff;
              local_38[0]->enabled = '\x01';
              mobyproc::UpdateMobyGrids(local_38[0],0x80807f7f);
              local_38[0]->occlIndex = 0x7f80;
              local_38[0]->field45_0x72 = -1;
              local_38[0]->damage = -1;
              local_38[0]->field44_0x71 = -1;
              local_38[0]->collision = local_38[0]->pClass->collision;
              mobyutil::MB_CopyHeroLights(local_38[0]);
              mobyfunc::UpdateMobyTransform(local_38[0]);
              reactionType = mobyutil::MB_GetPvarsIfMobyHasThem(local_38[0]);
              uVar2 = moby->state;
              if ((uint)reactionType != 0) {
                auVar10 = ZEXT416(0xfffffff0);
                auVar11 = loadVectorLeftIndexed(4,reactionType);
                auVar12 = loadVectorRightIndexed(0x14,reactionType);
                auVar10 = vectorShiftRightAlgebraicWord
                                    (auVar11 | auVar12,
                                     auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
                auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
                auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar4 = storeVectorElementWordIndexed
                                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,
                                   reactionType);
                *(undefined4 *)((uint)reactionType & 0xfffffffc) = uVar4;
              }
              if (uVar2 == '\x01') {
                auVar10 = loadVectorLeftIndexed(0x58,uVar8);
                auVar11 = loadVectorRightIndexed(0x68,uVar8);
                auVar10 = auVar10 | auVar11;
                auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              else {
                auVar10 = loadVectorLeftIndexed(0x5c,uVar8);
                auVar11 = loadVectorRightIndexed(0x6c,uVar8);
                auVar10 = auVar10 | auVar11;
                auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              auVar12 = vectorConvertFromSignedFixedPointWord(auVar10,0);
              auVar10 = ZEXT416(0xffffffff);
              auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
              auVar10 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
              auVar11 = loadVectorLeftIndexed(in_LR,0x3da848);
              auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar11 = vectorAddFloatingPoint
                                  (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 |
                                           auVar11 << 0x60);
              auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar10 = vectorMultiplyAddFloatingPoint
                                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                   auVar13);
              auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
              uVar4 = storeVectorElementWordIndexed(auVar10,0x60,uVar8);
              *(undefined4 *)((uint)(pfVar3 + 0x18) & 0xfffffffc) = uVar4;
            }
          }
          if ((int)pfVar3[0x1a] <= (int)pfVar3[0x19]) {
            moby->state = '\x02';
          }
        }
      }
      else if (bVar1 < 5) {
        if (3 < bVar1) {
          reactionType = 0;
          mobyutil::MB_RandomizeVector(DAT_0071f408 * 0.5,local_50);
          mobyutil::MB_genericExplosion
                    (reactionType,reactionType,0x4020000000000000,0x4010000000000000,
                     0x4032000000000000,0x3ff0000000000000,0x402e000000000000,moby,local_50,0,1,
                     0xffffffffffffffff,0x1e,8,0x14);
          moby->state = '\x05';
        }
      }
      else if (bVar1 < 6) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 003dae70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M612_003dae70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M612_003dae70(void)

{
  DAT_008539bc = 0x10000;
  return;
}



//==== 003dae98  ns=mobyupdate_helpers  size=0x6f8
// sig: undefined M612_003dae98(void)
// callers(1): 003db608 mobyupdate_unsorted::UpdateMoby_612
// callees(7): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M612_003dae98(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  short sVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 400;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar11;
  puVar8[0x34] = in_LR;
  puVar8[0x31] = in_f31;
  puVar8[0x30] = unaff_r31;
  puVar8[0x2f] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar21 = ZEXT48(pvVar6);
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar8 + 0x114) = 0;
  iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
  if ((iVar12 != 0) && (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) == 0x264)) {
    iVar12 = 0;
  }
  mobyutil::MB_HandleDamage(param_1,iVar12,uVar21 + 0x20,0,puVar8 + 0x22,(int)puVar8 + 0x114,0,4);
  if ((*(int *)(puVar8 + 0x22) != 1) && (param_1->state != '\x11')) {
    *(float *)((int)pvVar6 + 0x20) =
         *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x114);
    uVar13 = fastfunc::FastDoubleToInt(0x4083333340000000);
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar13;
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f19999a;
    fVar3 = DAT_0071f418;
    if (*(int *)((int)pvVar6 + 0x20) < 1) {
      *(float *)((int)pvVar6 + 0x80) = DAT_00853a00 * DAT_0071f418;
      *(float *)((int)pvVar6 + 0x84) = DAT_008539f0 * fVar3;
      fVar3 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar6 + 0x88) = DAT_008539e0 * mobyutil::g_FrameTime;
      fVar1 = DAT_008539e4;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar3;
      fVar1 = DAT_00853a18;
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(float *)((int)pvVar6 + 0xbc) = fVar1 * fVar3;
      fVar3 = (param_1->pos).x - g_heroPosition.x;
      fVar1 = (param_1->pos).y - g_heroPosition.y;
      dVar23 = ABS((double)fVar3);
      dVar24 = ABS((double)fVar1);
      *(float *)(puVar8 + 0x23) = fVar3;
      *(float *)((int)puVar8 + 0x11c) = fVar1;
      *(float *)(puVar8 + 0x24) = (float)(dVar23 - dVar24);
      uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x11c) >> 0x1d) & 4;
      uVar16 = uVar19 << 2 | 0x735900;
      dVar25 = ABS((double)*(float *)(puVar8 + 0x23));
      if ((double)*(float *)(puVar8 + 0x24) - dVar26 < 0.0) {
        dVar25 = dVar24;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar24 = ABS((double)*(float *)((int)puVar8 + 0x11c));
      if ((double)*(float *)(puVar8 + 0x24) - dVar26 < 0.0) {
        dVar24 = dVar23;
      }
      fVar1 = *(float *)((int)uVar16 + 4);
      if (dVar26 < dVar25) {
        lVar14 = uVar11 - 0x180;
        lVar20 = uVar11 - 0x50;
        lVar17 = uVar11 - 0x60;
        lVar22 = 2;
        fVar2 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar8 + 0x13c) = fVar2;
        *(float *)((int)puVar8 + 0x134) = fVar2;
        *(float *)(puVar8 + 0x27) = fVar2;
        *(float *)(puVar8 + 0x26) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar8 + 0x134) = *(float *)((int)puVar8 + 0x134) * fVar9;
        *(float *)(puVar8 + 0x27) = *(float *)(puVar8 + 0x27) * fVar2;
        *(float *)((int)puVar8 + 0x13c) = *(float *)((int)puVar8 + 0x13c) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar14 + 0x130) = *(float *)((int)lVar14 + 0x120) * fVar2 * fVar2;
          iVar12 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar11 - 0x60;
        uVar16 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar17 = lVar20;
        do {
          pfVar18 = (float *)uVar16;
          fVar2 = pfVar18[1];
          uVar16 = uVar16 + 8;
          *(float *)((int)lVar14 + 0x130) = *(float *)((int)lVar14 + 0x130) * *pfVar18;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar14 = 2;
        do {
          iVar12 = (int)lVar15;
          iVar10 = (int)lVar20;
          lVar15 = lVar15 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar12 + 0x130)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar1);
      }
      mobyutil::MB_StartKick(dVar26,param_1,uVar21 + 0x70,uVar16,0xe,1,0);
      MVar4 = param_1->modeBits;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40d00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41500000;
      param_1->modeBits =
           MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      param_1->state = '\x11';
    }
    else {
      uVar7 = (int)*(uint *)((int)puVar8 + 0x114) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)puVar8 + 0x114)) - uVar7) < 0x3f800000) {
        *(undefined1 *)((int)pvVar6 + 0x67) = 100;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
        fVar3 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x80) = DAT_00853a00 * DAT_0071f418;
        *(float *)((int)pvVar6 + 0x84) = DAT_008539f4 * fVar3;
        fVar3 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008539e8 * mobyutil::g_FrameTime;
        fVar1 = DAT_008539ec;
        *(undefined4 *)((int)pvVar6 + 0x94) = 0x19;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar3;
        fVar1 = DAT_00853a18;
        *(undefined4 *)((int)pvVar6 + 0xa0) = 0x3f000000;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(float *)((int)pvVar6 + 0xbc) = fVar1 * fVar3;
        fVar3 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar23 = ABS((double)fVar3);
        dVar24 = ABS((double)fVar1);
        *(float *)((int)puVar8 + 0x124) = fVar3;
        *(float *)(puVar8 + 0x25) = fVar1;
        *(float *)((int)puVar8 + 300) = (float)(dVar23 - dVar24);
        uVar19 = (ulonglong)(*(uint *)((int)puVar8 + 0x124) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 300) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x25) >> 0x1d) & 4;
        uVar16 = uVar19 << 2 | 0x735900;
        dVar25 = ABS((double)*(float *)((int)puVar8 + 0x124));
        if ((double)*(float *)((int)puVar8 + 300) - dVar26 < 0.0) {
          dVar25 = dVar24;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar24 = ABS((double)*(float *)(puVar8 + 0x25));
        if ((double)*(float *)((int)puVar8 + 300) - dVar26 < 0.0) {
          dVar24 = dVar23;
        }
        fVar1 = *(float *)((int)uVar16 + 4);
        if (dVar26 < dVar25) {
          lVar14 = uVar11 - 0x180;
          lVar20 = uVar11 - 0x30;
          lVar17 = uVar11 - 0x40;
          lVar22 = 2;
          fVar2 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
          fVar9 = fVar2 * fVar2;
          *(float *)((int)puVar8 + 0x15c) = fVar2;
          *(float *)((int)puVar8 + 0x154) = fVar2;
          *(float *)(puVar8 + 0x2b) = fVar2;
          *(float *)(puVar8 + 0x2a) = fVar2;
          fVar2 = fVar9 * fVar9;
          *(float *)((int)puVar8 + 0x154) = *(float *)((int)puVar8 + 0x154) * fVar9;
          *(float *)(puVar8 + 0x2b) = *(float *)(puVar8 + 0x2b) * fVar2;
          *(float *)((int)puVar8 + 0x15c) = *(float *)((int)puVar8 + 0x15c) * fVar2 * fVar9;
          do {
            *(float *)((int)lVar14 + 0x150) = *(float *)((int)lVar14 + 0x140) * fVar2 * fVar2;
            iVar12 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar11 - 0x40;
          uVar16 = ZEXT48(&DAT_007358e0);
          lVar14 = lVar15;
          lVar17 = lVar20;
          do {
            pfVar18 = (float *)uVar16;
            fVar2 = pfVar18[1];
            uVar16 = uVar16 + 8;
            *(float *)((int)lVar14 + 0x150) = *(float *)((int)lVar14 + 0x150) * *pfVar18;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar14 = 2;
          do {
            iVar12 = (int)lVar15;
            iVar10 = (int)lVar20;
            lVar15 = lVar15 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar12 + 0x150)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar1);
        }
        mobyutil::MB_StartKick(dVar26,param_1,uVar21 + 0x70,uVar16,0xb,1,0);
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40d00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        param_1->state = '\x10';
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  iVar12 = *(int *)((int)pvVar6 + 0x220);
  if (iVar12 == 0) {
    mobyutil::MB_getTarget(0x402c000000000000,param_1,&DAT_003dae88,uVar11 - 0xd0);
    iVar12 = *(int *)(puVar8 + 0x20);
    *(int *)((int)pvVar6 + 0x220) = iVar12;
  }
  else {
    if (*(byte *)(iVar12 + 0x20) < 0x80) {
      sVar5 = *(short *)(iVar12 + 0xa6);
      if (((sVar5 == 0xcb || sVar5 == 0x10e) || (sVar5 == 0)) && (param_1->state == '\f'))
      goto LAB_003db54c;
    }
    mobyutil::MB_getTarget(0x402c000000000000,param_1,&DAT_003dae88,uVar11 - 0x120);
    iVar12 = *(int *)(puVar8 + 0x16);
    *(int *)((int)pvVar6 + 0x220) = iVar12;
  }
LAB_003db54c:
  if (iVar12 == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x220) = g_heroMobyPtr;
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}



//==== 003db608  ns=mobyupdate_unsorted  size=0x1d24
// sig: undefined UpdateMoby_612(MobyInstance * moby)
// callers(0): 
// callees(34): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010581c mobyutil::SetCollDamIn; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00110488 mobyutil::ClampVec3Magnitude; 00110b70 mobyutil::MB_IsPntInCuboid; 00119a18 mobyfunc::DoManipulator; 00119ae8 mobyutil::MB_InitDebrisList; 00119b38 mobyutil::MB_UpdateDebris; 0011a018 mobyutil::MB_DebrisCollide; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001268f8 partupd::SpawnPart_21; 003dae98 mobyupdate_helpers::M612_003dae98; 005026a0 fastfunc::FastSubRots; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e70 FUN_005e7e70; 005e7f54 FUN_005e7f54; 005e81f0 FUN_005e81f0; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548

/* Moby 612 */

void mobyupdate_unsorted::UpdateMoby_612(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  f32 fVar10;
  float fVar11;
  float fVar12;
  MOBY_OCLASSES MVar13;
  void *pvVar14;
  int iVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  Cuboid *pCVar20;
  longlong lVar21;
  uint uVar24;
  int iVar25;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar26;
  float *pfVar27;
  MobyModeBit MVar29;
  longlong lVar28;
  ulonglong unaff_r26;
  longlong lVar30;
  ulonglong unaff_r27;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  undefined8 uVar45;
  
  lVar21 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar30 = uVar22 - 0x2c0;
  puVar16 = (ulonglong *)lVar30;
  *puVar16 = uVar22;
  puVar16[0x5a] = in_LR;
  puVar16[0x4e] = in_f22;
  puVar16[0x4f] = in_f23;
  puVar16[0x50] = in_f24;
  puVar16[0x51] = in_f25;
  puVar16[0x52] = in_f26;
  puVar16[0x53] = in_f27;
  puVar16[0x54] = in_f28;
  puVar16[0x55] = in_f29;
  puVar16[0x56] = in_f30;
  puVar16[0x57] = in_f31;
  puVar16[0x4d] = unaff_r31;
  puVar16[0x4c] = unaff_r30;
  pvVar14 = moby->pVar;
  puVar16[0x4b] = unaff_r29;
  puVar16[0x4a] = unaff_r28;
  puVar16[0x49] = unaff_r27;
  puVar16[0x48] = unaff_r26;
  mobyfunc::DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar14 + 0x1a0));
  if ((moby->enabled != '\0') &&
     (dVar33 = (double)FUN_005e8548(lVar21 + 0x10,0x951500), dVar33 < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar21);
    moby->shadow = '\x18';
  }
  mobyupdate_helpers::M612_003dae98(lVar21);
  bVar1 = moby->state;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      dVar33 = (double)FUN_005e8548((ulonglong)*(uint *)((int)pvVar14 + 0x220) + 0x10,
                                    &Cuboids[*(int *)((int)pvVar14 + 0x188)].pos);
      if (dVar33 < (double)*(float *)((int)pvVar14 + 0x180)) {
        iVar25 = *(int *)((int)pvVar14 + 0x220);
        fVar3 = (moby->pos).z;
        if (ABS(*(float *)(iVar25 + 0x18) - fVar3) < 4.0) {
          iVar15 = *(int *)((int)pvVar14 + 0x188);
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar6 = fVar4 - Cuboids[iVar15].pos.y;
          fVar12 = fVar5 - Cuboids[iVar15].pos.x;
          fVar3 = fVar3 - Cuboids[iVar15].pos.z;
          if (1.0 <= SQRT(fVar3 * fVar3 + fVar12 * fVar12 + fVar6 * fVar6)) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
            }
          }
          else {
            fVar5 = *(float *)(iVar25 + 0x10) - fVar5;
            fVar4 = *(float *)(iVar25 + 0x14) - fVar4;
            pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
            fVar12 = ABS(fVar5);
            fVar6 = ABS(fVar4);
            *(float *)(puVar16 + 0x30) = fVar5;
            *(float *)((int)puVar16 + 0x184) = fVar4;
            *(float *)(puVar16 + 0x31) = fVar12 - fVar6;
            dVar33 = 0.0;
            uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x30) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar16 + 0x31) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar16 + 0x184) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)(puVar16 + 0x30));
            if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
              fVar3 = fVar6;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar6 = ABS(*(float *)((int)puVar16 + 0x184));
            if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
              fVar6 = fVar12;
            }
            if (0.0 < fVar3) {
              lVar31 = uVar22 - 0x2b0;
              lVar28 = uVar22 - 0xa4;
              lVar26 = uVar22 - 0xb4;
              lVar32 = 2;
              fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
              fVar6 = fVar3 * fVar3;
              *(float *)(puVar16 + 0x43) = fVar3;
              *(float *)(puVar16 + 0x42) = fVar3;
              *(float *)((int)puVar16 + 0x214) = fVar3;
              *(float *)((int)puVar16 + 0x20c) = fVar3;
              fVar3 = fVar6 * fVar6;
              *(float *)(puVar16 + 0x42) = *(float *)(puVar16 + 0x42) * fVar6;
              *(float *)((int)puVar16 + 0x214) = *(float *)((int)puVar16 + 0x214) * fVar3;
              *(float *)(puVar16 + 0x43) = *(float *)(puVar16 + 0x43) * fVar3 * fVar6;
              do {
                *(float *)((int)lVar31 + 0x20c) = *(float *)((int)lVar31 + 0x1fc) * fVar3 * fVar3;
                iVar25 = (int)lVar26;
                lVar26 = lVar26 + 8;
                lVar31 = lVar31 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
                lVar28 = lVar28 + 8;
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              lVar32 = 4;
              lVar28 = uVar22 - 0xb4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar31 = lVar30;
              lVar26 = lVar28;
              do {
                fVar3 = *pfVar27;
                fVar6 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar31 + 0x20c) = *(float *)((int)lVar31 + 0x20c) * fVar3;
                lVar31 = lVar31 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
                lVar26 = lVar26 + 8;
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              lVar31 = 2;
              do {
                iVar25 = (int)lVar30;
                lVar30 = lVar30 + 0x10;
                iVar15 = (int)lVar28;
                lVar28 = lVar28 + 0x10;
                dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x20c)) +
                                  *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                                 *(float *)(iVar15 + 0xc));
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
            }
            mobyutil::OrganicDeltAngSpeed
                      (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                       pfVar27,(int)pvVar14 + 0x214);
            dVar33 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar33);
            if ((dVar33 < 0.0872664600610733) && (moby->state = '\v', moby->animationId != '\b')) {
              puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
              mobyutil::MB_SetAnimation(lVar21,8,0,*(undefined4 *)((int)puVar16 + 0x234));
            }
          }
          goto LAB_003dd2d0;
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        dVar33 = (double)mobyutil::MB_randRot();
        dVar44 = 3.141592502593994;
        dVar43 = -3.141592502593994;
        fVar3 = (float)(dVar33 + 1.570796251296997);
        dVar42 = -0.16666656732559204;
        dVar41 = 0.008333025500178337;
        dVar40 = -0.0001980741071747616;
        dVar39 = 2.601886990305502e-06;
        dVar38 = 1.0;
        dVar37 = 2.0;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = fVar5 * fVar5;
        fVar3 = fVar6 * fVar6 * fVar5;
        fVar4 = fVar6 * fVar3;
        dVar36 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                         fVar4 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
        dVar35 = (double)mobyutil::MB_randRangeFloat(1.0,2.0);
        *(float *)((int)pvVar14 + 0x1e0) = (float)(dVar36 * dVar35);
        dVar35 = (double)(float)(dVar44 - dVar33);
        if (dVar33 - (double)(float)(dVar44 - dVar33) < 0.0) {
          dVar35 = dVar33;
        }
        dVar44 = (double)(float)(dVar43 - dVar33);
        if ((double)(float)(dVar43 - dVar33) - dVar35 < 0.0) {
          dVar44 = dVar35;
        }
        dVar33 = (double)(float)(dVar44 * dVar44);
        dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar44));
        dVar43 = (double)(float)(dVar33 * dVar35);
        dVar39 = (double)(float)((double)(float)(dVar33 * dVar43) * dVar39 +
                                (double)(float)(dVar43 * dVar40 +
                                               (double)(float)(dVar35 * dVar41 +
                                                              (double)(float)((double)(float)(dVar33
                                                                                             * 
                                                  dVar44) * dVar42 + dVar44))));
        dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar37);
        pCVar20 = Cuboids;
        iVar25 = *(int *)((int)pvVar14 + 0x188);
        *(undefined4 *)((int)pvVar14 + 0x1e8) = 0;
        *(float *)((int)pvVar14 + 0x1e4) = (float)(dVar39 * dVar33);
        *(float *)((int)pvVar14 + 0x1e0) = *(float *)((int)pvVar14 + 0x1e0) + pCVar20[iVar25].pos.x;
        *(float *)((int)pvVar14 + 0x1e4) = (float)(dVar39 * dVar33) + pCVar20[iVar25].pos.y;
        *(float *)((int)pvVar14 + 0x1e8) = pCVar20[iVar25].pos.z;
        moby->state = '\x06';
        if (moby->animationId != '\x06') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else if (bVar1 == 6) {
      uVar22 = mobyutil::MB_UpdateNavMoveTurning
                         (lVar21,(int)pvVar14 + 0xd0,(int)pvVar14 + 0x1e0,(int)pvVar14 + 0x40);
      if ((uVar22 & 6) == 0) {
        dVar33 = (double)FUN_005e8548((ulonglong)*(uint *)((int)pvVar14 + 0x220) + 0x10,
                                      &Cuboids[*(int *)((int)pvVar14 + 0x188)].pos);
        if (((dVar33 < (double)*(float *)((int)pvVar14 + 0x180)) &&
            (ABS(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x18) - (moby->pos).z) < 4.0)) &&
           (moby->state = '\x05', moby->animationId != '\x06')) {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
      else {
        if (moby->animationId != '\0') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      iVar25 = mobyutil::MB_UpdateNavMoveTurning
                         (lVar21,(int)pvVar14 + 0xd0,&Cuboids[*(int *)((int)pvVar14 + 0x188)].pos,
                          (int)pvVar14 + 0x40);
      if (iVar25 == 4) {
        if (moby->animationId != '\0') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 30.5);
          mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 4) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x06')) {
        uVar34 = idol::GetAnimDuration(6);
        mobyutil::MB_SetAnimation(lVar21,6,0,uVar34);
      }
    }
    else if (bVar1 == 3) {
      uVar34 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x10) -
                                    (moby->pos).x),
                            (double)(*(float *)(*(int *)((int)pvVar14 + 0x220) + 0x14) -
                                    (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar34,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 1.5707964),lVar21);
      lVar31 = uVar22 - 0x200;
      lVar30 = lVar21 + 0x10;
      FUN_005e81f0(lVar31,&Cuboids[*(int *)((int)pvVar14 + 0x188)].pos,lVar30);
      fVar3 = mobyutil::g_FrameTime;
      *(undefined4 *)(puVar16 + 0x19) = 0;
      mobyutil::ClampVec3Magnitude((double)(fVar3 * 6.0),(Vec4 *)lVar31);
      FUN_005e7f54(lVar30,lVar30,lVar31);
      dVar33 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar30,0);
      mobyutil::Delt(mobyutil::g_FrameTime * 40.0,DAT_00853a00 * DAT_0071f418,
                     (float *)((int)pvVar14 + 0x48));
      mobyutil::Delt((float)dVar33,*(float *)((int)pvVar14 + 0x48),&(moby->pos).z);
      if (((double)(moby->pos).z == dVar33) && (moby->state = '\x04', moby->animationId != '\x05'))
      {
        uVar34 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar21,5,4,uVar34);
      }
    }
    else if (bVar1 == 2) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x04')) {
        mobyutil::MB_SetAnimation(lVar21,4,0,0);
      }
    }
    else if (bVar1 == 0) {
      uVar24 = rand();
      MVar29 = moby->modeBits | MIRROR;
      moby->modeBits =
           MVar29 + ((ushort)((LZCOUNT(-(uVar24 & 1)) << 0x3a) >> 0x3f) & moby->modeBits - MVar29) |
           CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar14 + 0x5a) = 8;
      *(undefined1 *)((int)pvVar14 + 0x5c) = 1;
      *(undefined1 *)((int)pvVar14 + 0x29) = 0;
      *(undefined1 *)((int)pvVar14 + 0x58) = 0xf;
      *(undefined4 *)((int)pvVar14 + 0x30) = 0x3f800000;
      uVar24 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar24;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar14 + 0xd0));
      *(undefined4 *)((int)pvVar14 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar14 + 0x110) = 0x3e99999a;
      *(undefined4 *)((int)pvVar14 + 0x114) = 0x3e800000;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar14 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar14 + 0xd8) = 0x40000000;
      *(undefined4 *)((int)pvVar14 + 0x20) = 0x40400000;
      *(undefined1 *)((int)pvVar14 + 0x28) = 2;
      *(float *)((int)pvVar14 + 0xf4) = fVar3 * 4.0;
      FUN_005e7e70((int)pvVar14 + 0x40);
      mobyutil::MB_InitDebrisList((int)pvVar14 + 0x1f0);
      iVar25 = *(int *)((int)pvVar14 + 0x194);
      uVar2 = moby->animationId;
      if (iVar25 < 2) {
        if (0 < iVar25) {
          if (uVar2 != '\0') {
            mobyutil::MB_SetAnimation(lVar21,0,0,0);
          }
          moby->state = '\n';
          goto LAB_003dd2d0;
        }
      }
      else {
        if (iVar25 < 3) {
          if (uVar2 != '\x02') {
            mobyutil::MB_SetAnimation(lVar21,2,0,0);
          }
          moby->state = '\b';
          goto LAB_003dd2d0;
        }
        if (iVar25 < 4) {
          if (uVar2 != '\x0f') {
            mobyutil::MB_SetAnimation(lVar21,0xf,0,0);
          }
          moby->state = '\t';
          goto LAB_003dd2d0;
        }
      }
      if (uVar2 != '\0') {
        mobyutil::MB_SetAnimation(lVar21,0,0,0);
      }
      moby->state = '\a';
    }
  }
  else if (bVar1 < 0xd) {
    if (bVar1 < 0xb) {
      if (((bVar1 < 10) &&
          (worldUpdateTime ==
           (((int)worldUpdateTime >> 2) +
           (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4)) &&
         (moby->enabled != '\0')) {
        dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_00853a14);
        dVar38 = (double)(float)(dVar33 * (double)mobyutil::g_FrameTime);
        dVar37 = (double)mobyutil::MB_randRot();
        fVar3 = (float)(dVar37 + 1.570796251296997);
        dVar33 = (double)(float)(3.141592502593994 - dVar37);
        if (dVar37 - (double)(float)(3.141592502593994 - dVar37) < 0.0) {
          dVar33 = dVar37;
        }
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        dVar39 = (double)(float)(-3.141592502593994 - dVar37);
        if ((double)(float)(-3.141592502593994 - dVar37) - dVar33 < 0.0) {
          dVar39 = dVar33;
        }
        *(undefined4 *)(puVar16 + 0x1d) = 0;
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        dVar37 = (double)(float)(dVar39 * dVar39);
        fVar6 = fVar5 * fVar5;
        dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar39));
        fVar3 = fVar6 * fVar6 * fVar5;
        dVar33 = (double)(float)(dVar37 * dVar40);
        fVar4 = fVar6 * fVar3;
        *(float *)((int)puVar16 + 0xe4) =
             (float)((double)((float)(dVar37 * dVar33) * 2.601887e-06 +
                             (float)(dVar33 * -0.0001980741071747616 +
                                    (double)(float)(dVar40 * 0.008333025500178337 +
                                                   (double)(float)((double)(float)(dVar37 * dVar39)
                                                                   * -0.16666656732559204 + dVar39))
                                    )) * dVar38);
        *(float *)(puVar16 + 0x1c) =
             (float)((double)(fVar6 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * dVar38);
        mobyfunc::GetBonePosition(lVar21,0,uVar22 - 0x1f0);
        uVar34 = 0x40e3880000000000;
        puVar16[0x46] = (longlong)DAT_00853a0c;
        fVar3 = animationSpeed;
        uVar23 = (ulonglong)DAT_00853a10;
        puVar16[0x46] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x46] + 0.5));
        puVar16[0x46] = uVar23;
        uVar19 = DAT_00853a04;
        puVar16[0x46] = (longlong)(int)(fVar3 * ((float)(longlong)puVar16[0x46] + 0.5));
        mobyutil::MB_randRange
                  (*(undefined4 *)((int)puVar16 + 0x234),*(undefined4 *)((int)puVar16 + 0x234));
        partupd::SpawnPart_21(uVar34,uVar22 - 0x1f0,uVar22 - 0x1e0,uVar19,uVar19);
      }
      if (*(int *)((int)pvVar14 + 0x18c) < 0) {
        iVar25 = *(int *)((int)pvVar14 + 0x188);
        fVar3 = g_heroPosition.y - Cuboids[iVar25].pos.y;
        fVar4 = g_heroPosition.x - Cuboids[iVar25].pos.x;
        fVar5 = g_heroPosition.z - Cuboids[iVar25].pos.z;
        if (*(float *)((int)pvVar14 + 0x184) <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))
        goto LAB_003dd2d0;
      }
      else {
        iVar25 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&hero::g_heroGroundPoint,
                            (longlong)*(int *)((int)pvVar14 + 0x18c));
        if (iVar25 == 0) goto LAB_003dd2d0;
      }
      if (moby->state == '\b') {
        if (moby->animationId != '\x04') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,4,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\x02';
      }
      else if (moby->state == '\t') {
        if (moby->animationId != '\x10') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,0x10,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
        moby->state = '\x02';
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x06') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else if (bVar1 < 0xc) {
      iVar25 = *(int *)((int)pvVar14 + 0x220);
      moby->unk58 = 2.0;
      fVar3 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar16 + 0x174) = fVar3;
      *(float *)(puVar16 + 0x2f) = fVar4;
      *(float *)((int)puVar16 + 0x17c) = fVar6 - fVar5;
      dVar33 = 0.0;
      uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x174) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x17c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2f) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar16 + 0x174));
      if (*(float *)((int)puVar16 + 0x17c) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)(puVar16 + 0x2f));
      if (*(float *)((int)puVar16 + 0x17c) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar3) {
        lVar31 = uVar22 - 0x2b0;
        lVar28 = uVar22 - 0xc4;
        lVar26 = uVar22 - 0xd4;
        lVar32 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x3f) = fVar3;
        *(float *)(puVar16 + 0x3e) = fVar3;
        *(float *)((int)puVar16 + 500) = fVar3;
        *(float *)((int)puVar16 + 0x1ec) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x3e) = *(float *)(puVar16 + 0x3e) * fVar6;
        *(float *)((int)puVar16 + 500) = *(float *)((int)puVar16 + 500) * fVar3;
        *(float *)(puVar16 + 0x3f) = *(float *)(puVar16 + 0x3f) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar31 + 0x1ec) = *(float *)((int)lVar31 + 0x1dc) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0xd4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1ec) = *(float *)((int)lVar31 + 0x1ec) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x1ec)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                 &DAT_003db590,(int)pvVar14 + 0x214);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        moby->state = '\f';
        if (moby->animationId != '\t') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(lVar21,9,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
    else {
      moby->unk58 = 0.5;
      mobyfunc::GetBonePosition(lVar21,0,uVar22 - 0x1d0);
      fVar3 = *(float *)(puVar16 + 0x1e) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar16 + 0xf4) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar18 = ABS(fVar4);
      *(float *)(puVar16 + 0x2d) = fVar3;
      *(float *)((int)puVar16 + 0x16c) = fVar4;
      *(float *)(puVar16 + 0x2e) = fVar6 - fVar18;
      fVar5 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x16c) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)(puVar16 + 0x2d));
      if (*(float *)(puVar16 + 0x2e) - 0.0 < 0.0) {
        fVar12 = fVar18;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar16 + 0x16c));
      if (*(float *)(puVar16 + 0x2e) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      fVar17 = fVar5;
      if (0.0 < fVar12) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0xf4;
        lVar28 = uVar22 - 0xe4;
        lVar32 = 2;
        fVar12 = (fVar8 - fVar12) / (fVar8 + fVar12);
        fVar8 = fVar12 * fVar12;
        *(float *)(puVar16 + 0x3b) = fVar12;
        *(float *)(puVar16 + 0x3a) = fVar12;
        *(float *)((int)puVar16 + 0x1d4) = fVar12;
        *(float *)((int)puVar16 + 0x1cc) = fVar12;
        fVar12 = fVar8 * fVar8;
        *(float *)(puVar16 + 0x3a) = *(float *)(puVar16 + 0x3a) * fVar8;
        *(float *)((int)puVar16 + 0x1d4) = *(float *)((int)puVar16 + 0x1d4) * fVar12;
        *(float *)(puVar16 + 0x3b) = *(float *)(puVar16 + 0x3b) * fVar12 * fVar8;
        do {
          *(float *)((int)lVar31 + 0x1cc) = *(float *)((int)lVar31 + 0x1bc) * fVar12 * fVar12;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar12 * fVar12;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0xf4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar12 = *pfVar27;
          fVar8 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1cc) = *(float *)((int)lVar31 + 0x1cc) * fVar12;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar26 = 2;
        lVar31 = lVar30;
        fVar12 = fVar5;
        do {
          iVar25 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar12 = fVar12 + *(float *)(iVar25 + 0x1cc) + *(float *)(iVar15 + 4) +
                   *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar17 = (fVar12 + 0.7853982) * fVar11 + fVar7;
      }
      fVar17 = fVar17 + 1.5707963;
      *(float *)((int)puVar16 + 0x15c) = fVar3;
      *(float *)((int)puVar16 + 0x164) = fVar6 - fVar18;
      *(float *)(puVar16 + 0x2c) = fVar4;
      fVar3 = 3.1415925 - fVar17;
      if (fVar17 - (3.1415925 - fVar17) < 0.0) {
        fVar3 = fVar17;
      }
      uVar23 = (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x164) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar16 + 0x15c));
      if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
        fVar4 = fVar18;
      }
      fVar12 = -3.1415925 - fVar17;
      if ((-3.1415925 - fVar17) - fVar3 < 0.0) {
        fVar12 = fVar3;
      }
      fVar18 = fVar12 * fVar12;
      fVar7 = fVar18 * fVar18 * fVar12;
      fVar11 = fVar18 * fVar7;
      fVar3 = ABS(*(float *)(puVar16 + 0x2c));
      if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      *(float *)(puVar16 + 0x20) =
           fVar18 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar7 * 0.0083330255 + fVar18 * fVar12 * -0.16666657 + fVar12;
      fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0x114;
        lVar28 = uVar22 - 0x104;
        lVar32 = 2;
        fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x37) = fVar3;
        *(float *)(puVar16 + 0x36) = fVar3;
        *(float *)((int)puVar16 + 0x1b4) = fVar3;
        *(float *)((int)puVar16 + 0x1ac) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar16 + 0x36) = *(float *)(puVar16 + 0x36) * fVar4;
        *(float *)((int)puVar16 + 0x1b4) = *(float *)((int)puVar16 + 0x1b4) * fVar3;
        *(float *)(puVar16 + 0x37) = *(float *)(puVar16 + 0x37) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar31 + 0x1ac) = *(float *)((int)lVar31 + 0x19c) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0x114;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x1ac) = *(float *)((int)lVar31 + 0x1ac) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 0x10;
          lVar28 = lVar28 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar25 + 0x1ac) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar12 + fVar6;
      }
      dVar33 = (double)DAT_008539fc;
      *(undefined4 *)(puVar16 + 0x21) = 0xbdcccccd;
      fVar3 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar3 = fVar5;
      }
      fVar4 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = fVar4 * fVar4;
      fVar5 = fVar3 * fVar3 * fVar4;
      fVar6 = fVar3 * fVar5;
      *(float *)((int)puVar16 + 0x104) =
           fVar3 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4;
      mobyutil::MB_UpdateDebris(dVar33,(int)pvVar14 + 0x1f0,uVar22 - 0x1d0,uVar22 - 0x1c0);
      *(undefined4 *)(puVar16 + 0x21) = 0x3f800000;
      *(undefined4 *)((int)puVar16 + 0x10c) = 0x45afdf66;
      mobyutil::SetCollDamIn
                (0x3ff0000000000000,uVar22 - 0x1a0,lVar21,0x10001,0x45afdf66,uVar22 - 0x1c0);
      MVar13 = moby->oClass;
      *(undefined1 *)(puVar16 + 0x27) = 5;
      *(undefined1 *)((int)puVar16 + 0x139) = 1;
      *(MOBY_OCLASSES *)((int)puVar16 + 0x13a) = MVar13;
      mobyutil::MB_DebrisCollide((int)pvVar14 + 0x1f0,lVar21,uVar22 - 0x1a0);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        moby->state = '\r';
        uVar22 = mobyutil::MB_randInt(0xff);
        if ((uVar22 & 1) == 0) {
          if (moby->animationId != '\b') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(lVar21,8,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
        else if (moby->animationId != '\n') {
          puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(lVar21,10,0,*(undefined4 *)((int)puVar16 + 0x234));
        }
      }
    }
  }
  else if (bVar1 < 0x10) {
    if (bVar1 < 0xe) {
      fVar3 = *(float *)(*(int *)((int)pvVar14 + 0x220) + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(*(int *)((int)pvVar14 + 0x220) + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar16 + 0x2a) = fVar3;
      *(float *)((int)puVar16 + 0x154) = fVar4;
      *(float *)(puVar16 + 0x2b) = fVar6 - fVar5;
      dVar33 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar16 + 0x2a));
      if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar16 + 0x154));
      if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar3) {
        lVar31 = uVar22 - 0x2b0;
        lVar26 = uVar22 - 0x134;
        lVar28 = uVar22 - 0x124;
        lVar32 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar16 + 0x33) = fVar3;
        *(float *)(puVar16 + 0x32) = fVar3;
        *(float *)((int)puVar16 + 0x194) = fVar3;
        *(float *)((int)puVar16 + 0x18c) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar6;
        *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar3;
        *(float *)(puVar16 + 0x33) = *(float *)(puVar16 + 0x33) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar31 + 0x18c) = *(float *)((int)lVar31 + 0x17c) * fVar3 * fVar3;
          iVar25 = (int)lVar26;
          lVar31 = lVar31 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar28 = uVar22 - 0x134;
        pfVar27 = (float *)&DAT_007358e0;
        lVar31 = lVar30;
        lVar26 = lVar28;
        do {
          fVar3 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar31 + 0x18c) = *(float *)((int)lVar31 + 0x18c) * fVar3;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar31 = 2;
        do {
          iVar25 = (int)lVar30;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x18c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar21,
                 &DAT_003db590,(int)pvVar14 + 0x214);
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar25 = *(int *)((int)pvVar14 + 0x220);
        fVar3 = (moby->pos).y - *(float *)(iVar25 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar25 + 0x10);
        if ((*(float *)((int)pvVar14 + 0x180) + 1.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
           (3.0 <= ABS(*(float *)(iVar25 + 0x18) - (moby->pos).z))) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
        else {
          moby->state = '\f';
          if (moby->animationId != '\t') {
            puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(lVar21,9,0,*(undefined4 *)((int)puVar16 + 0x234));
          }
        }
      }
    }
  }
  else if (bVar1 < 0x11) {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70));
    if (((uVar24 & 0x40) != 0) && (moby->state = '\a', moby->animationId != '\0')) {
      puVar16[0x46] = (longlong)(int)(animationSpeed * 6.5);
      mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar16 + 0x234));
    }
  }
  else if ((bVar1 < 0x12) &&
          (uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70)),
          (uVar24 & 0x140) != 0)) {
    fVar9 = (moby->pos).y;
    *(f32 *)(puVar16 + 0x22) = (moby->pos).x;
    fVar10 = (moby->pos).w;
    *(f32 *)((int)puVar16 + 0x114) = fVar9;
    *(f32 *)((int)puVar16 + 0x11c) = fVar10;
    uVar45 = 0x3ff0000000000000;
    *(float *)(puVar16 + 0x23) = (moby->pos).z + 1.0;
    mobyutil::MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
    uVar34 = 0;
    puVar16[0x12] = 0xffffffffffffffff;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,uVar45,0x4022000000000000,uVar45,0x402e000000000000,lVar21,
               (int)pvVar14 + 0x40,uVar22 - 0x1b0,1,0xffffffffffffffff,5,2,4);
    lVar31 = lVar21 + 0x10;
    lVar30 = lVar21 + 0x40;
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar34,lVar21,0x6d7,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar34,lVar21,0x6d8,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar34,lVar21,0x6d9,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar34,lVar21,0x6e9,lVar31,lVar30,0,0);
    puVar16[0xe] = ZEXT48(&DAT_00a15d30);
    puVar16[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar34,lVar21,0x782,lVar31,lVar30,0,0);
    mobyfunc::DeleteMoby(moby);
    return;
  }
LAB_003dd2d0:
  mobyutil::MB_SetZBoundsFromGround(lVar21);
  return;
}



//==== 003dd32c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M613_003dd32c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M613_003dd32c(void)

{
  DAT_00853a68 = 0x10000;
  return;
}



//==== 003dd370  ns=mobyupdate_unsorted  size=0x63c
// sig: undefined UpdateMoby_613(MobyInstance * moby)
// callers(0): 
// callees(2): 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos

/* Moby 613 */

void mobyupdate_unsorted::UpdateMoby_613(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  Spline *pSVar6;
  short sVar7;
  int iVar8;
  Spline *pSVar9;
  undefined8 in_r8;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [20];
  
  pfVar5 = (float *)moby->pVar;
  if ((pfVar5 != (float *)0x0) && (pfVar5[8] != -NAN)) {
    pSVar6 = Splines[(int)pfVar5[8]];
    if (*(short *)((int)pfVar5 + 0x2e) == 0) {
      iVar8 = 0;
      *(undefined2 *)((int)pfVar5 + 0x2e) = 1;
      pSVar9 = pSVar6;
      if (0 < pSVar6->cnt + -1) {
        do {
          fVar1 = pSVar9->points[0].y - pSVar9->points[1].y;
          fVar2 = pSVar9->points[0].x - pSVar9->points[1].x;
          fVar3 = pSVar9->points[0].z - pSVar9->points[1].z;
          iVar8 = iVar8 + 1;
          pSVar9->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar8 < pSVar6->cnt + -1);
      }
      fVar1 = pSVar6->points[iVar8].y - pSVar6->points[0].y;
      fVar2 = pSVar6->points[iVar8].x - pSVar6->points[0].x;
      fVar3 = pSVar6->points[iVar8].z - pSVar6->points[0].z;
      pSVar6->points[iVar8].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      moby->updateDistance = -1;
    }
    if ((((hero::g_heroStateType == 0x12 || hero::g_heroStateType == 0x11) ||
         (DAT_0096bd74 == 0x12 || DAT_0096bd74 == 0x11)) || (g_heroState == WATER_JUMP)) ||
       (DAT_0096bd70 == 0x12)) {
      dVar16 = 0.0;
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar6,&g_heroPosition,&local_70,auStack_50
                 ,auStack_4c,in_r8,0);
      iVar8 = mobyutil::MB_PathMoveDist(0x4000000000000000,pSVar6,&local_60,auStack_50,auStack_4c);
      sVar7 = DAT_00969eb8;
      fVar1 = SQRT((g_heroPosition.x - local_70) * (g_heroPosition.x - local_70) +
                   (g_heroPosition.y - local_6c) * (g_heroPosition.y - local_6c));
      if (fVar1 <= pfVar5[10]) {
        if ((hero::g_heroStateType == 0x11) || (hero::g_heroStateType == 0x12)) {
          if (fVar1 <= DAT_0096bf98) {
            DAT_0096bf98 = fVar1;
            if (iVar8 == 0) {
              fVar2 = local_5c - local_6c;
              fVar3 = local_60 - local_70;
              dVar11 = (double)SQRT((local_58 - local_68) * (local_58 - local_68) +
                                    fVar3 * fVar3 + fVar2 * fVar2);
              fVar1 = (float)((double)(DAT_0071f418 * 7.0) / dVar11);
              pfVar5[2] = 0.0;
              dVar10 = (double)(fVar2 * fVar1);
              dVar13 = (double)(fVar3 * fVar1);
              dVar14 = dVar16;
              if (dVar16 - dVar11 < 0.0) {
                dVar14 = dVar10;
              }
              dVar12 = dVar16;
              if (dVar16 - dVar11 < 0.0) {
                dVar12 = dVar13;
              }
              if (dVar11 - dVar16 < 0.0) {
                dVar14 = dVar10;
              }
              if (dVar11 - dVar16 < 0.0) {
                dVar12 = dVar13;
              }
              dVar11 = (double)(float)((double)pfVar5[1] + dVar14);
              dVar10 = (double)(float)((double)*pfVar5 + dVar12);
              *pfVar5 = (float)((double)*pfVar5 + dVar12);
              pfVar5[1] = (float)((double)pfVar5[1] + dVar14);
              dVar14 = (double)SQRT((float)(dVar10 * dVar10 + (double)(float)(dVar11 * dVar11)));
              if ((double)pfVar5[9] < dVar14) {
                dVar12 = (double)(float)((double)pfVar5[9] / dVar14);
                pfVar5[2] = 0.0;
                dVar13 = (double)(float)(dVar10 * dVar12);
                dVar11 = (double)(float)(dVar11 * dVar12);
                dVar10 = dVar16;
                if (dVar16 - dVar14 < 0.0) {
                  dVar10 = dVar13;
                }
                dVar12 = dVar16;
                if (dVar16 - dVar14 < 0.0) {
                  dVar12 = dVar11;
                }
                if (dVar14 - dVar16 < 0.0) {
                  dVar10 = dVar13;
                }
                if (dVar14 - dVar16 < 0.0) {
                  dVar12 = dVar11;
                }
                *pfVar5 = (float)dVar10;
                pfVar5[1] = (float)dVar12;
              }
              DAT_00969dd0 = (float)dVar10;
              DAT_00969dd4 = pfVar5[1];
              DAT_00969dd8 = pfVar5[2];
              DAT_00969ddc = pfVar5[3];
              if (*(short *)(pfVar5 + 0xb) != 0) {
                dVar12 = (double)(local_6c - g_heroPosition.y);
                dVar15 = (double)(local_70 - g_heroPosition.x);
                dVar13 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar12 * dVar12)));
                dVar14 = dVar12;
                dVar11 = dVar15;
                if (((double)(pfVar5[9] * 0.4) < dVar13) &&
                   (dVar14 = dVar16, dVar11 = dVar16, dVar13 != dVar16)) {
                  dVar16 = (double)(float)((double)(pfVar5[9] * 0.4) / dVar13);
                  dVar14 = (double)(float)(dVar16 * dVar12);
                  dVar11 = (double)(float)(dVar16 * dVar15);
                }
                DAT_00969dd0 = (float)(dVar10 + dVar11);
                DAT_00969dd4 = (float)((double)DAT_00969dd4 + dVar14);
              }
            }
            else {
              fVar2 = pfVar5[1];
              fVar3 = *pfVar5;
              fVar4 = pfVar5[2];
              dVar10 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
              fVar1 = (float)((double)(float)(dVar10 * (double)(DAT_0071f408 * -0.004999995 + 1.0))
                             / dVar10);
              dVar14 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar14 = (double)(fVar2 * fVar1);
              }
              dVar11 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar11 = (double)(fVar4 * fVar1);
              }
              dVar13 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar13 = (double)(fVar3 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar14 = (double)(fVar2 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar11 = (double)(fVar4 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar13 = (double)(fVar3 * fVar1);
              }
              pfVar5[1] = (float)dVar14;
              pfVar5[2] = (float)dVar11;
              *pfVar5 = (float)dVar13;
              DAT_00969dd0 = (float)dVar13;
              DAT_00969dd4 = pfVar5[1];
              DAT_00969dd8 = pfVar5[2];
              DAT_00969ddc = pfVar5[3];
            }
            if (((hero::g_heroStateType == 0x12) && (DAT_0096bd70 == 0x12)) &&
               (hero::g_heroStateTimer < (int)(animationSpeed * 3.5))) {
              if (mobyutil::g_FrameTime * 1.5 < g_storedNeutralSpeed) {
                g_storedNeutralSpeed = mobyutil::g_FrameTime * 1.5;
              }
              DAT_00969e3c = 0;
              DAT_00969e38 = 0;
              DAT_00969e34 = 0;
              hero::g_heroExternalMomentum = 0;
            }
          }
        }
        else if (((DAT_0096bd74 == 0x12) || (DAT_0096bd80 == 0x12)) &&
                ((hero::g_heroStateType == 4 || (hero::g_heroStateType == 5)))) {
          fVar2 = pfVar5[1];
          fVar3 = *pfVar5;
          fVar4 = pfVar5[2];
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          dVar10 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          fVar1 = (float)((double)(float)(dVar10 * (double)(DAT_0071f408 * -0.014999986 + 1.0)) /
                         dVar10);
          dVar14 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar14 = (double)(fVar2 * fVar1);
          }
          dVar11 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar11 = (double)(fVar4 * fVar1);
          }
          dVar13 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar13 = (double)(fVar3 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar14 = (double)(fVar2 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar11 = (double)(fVar4 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar13 = (double)(fVar3 * fVar1);
          }
          pfVar5[1] = (float)dVar14;
          pfVar5[2] = (float)dVar11;
          *pfVar5 = (float)dVar13;
          DAT_00969dd0 = (float)dVar13;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          DAT_00969dd4 = pfVar5[1];
          DAT_00969dd8 = pfVar5[2];
          DAT_00969ddc = pfVar5[3];
          auVar19 = loadVectorLeftIndexed(0x2c,0x3dd340);
          auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60
                               ,auVar17);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          if ((int)sVar7 < (int)(animationSpeed * 35.5)) {
            auVar17 = vectorSplatHalfWord(auVar17,1);
            DAT_00969eb8 = storeVectorElementHalfWordIndexed(auVar17,0x1d8,0x969ce0);
          }
        }
      }
    }
  }
  return;
}



//==== 003dd9ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M615_003dd9ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M615_003dd9ac(void)

{
  DAT_00853ad8 = 0x10000;
  return;
}



//==== 003dda00  ns=mobyupdate_helpers  size=0x430
// sig: undefined M615_003dda00(void)
// callers(1): 003ddfd0 mobyupdate_unsorted::UpdateMoby_615
// callees(2): 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M615_003dda00(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Cuboid *pCVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x19] = in_f27;
  puVar7[0x1a] = in_f28;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  puVar7[0x17] = unaff_r30;
  puVar7[0x16] = unaff_r29;
  iVar5 = *(int *)(param_3 + 0x78);
  puVar7[0x18] = unaff_r31;
  iVar6 = *(int *)(iVar5 + 0xe8);
  puVar7[0x15] = unaff_r28;
  pCVar11 = Cuboids;
  if (iVar6 == -1) {
    dVar20 = (double)fastfunc::FastWrapRot(*(float *)(param_3 + 0x48),1.5707964);
    dVar21 = (double)fastfunc::FastWrapRot(*(float *)(param_3 + 0x48),-1.5707964);
    fVar2 = GameCamera.posX - *(float *)(param_3 + 0x10);
    fVar4 = GameCamera.posY - *(float *)(param_3 + 0x14);
    fVar1 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar7 + 0xe) = fVar2;
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar1 - fVar3;
    dVar23 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar17 = uVar12 - 0xe0;
      lVar16 = uVar12 - 0x74;
      lVar14 = uVar12 - 100;
      lVar19 = 2;
      fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x11) = fVar2;
      *(float *)(puVar7 + 0x10) = fVar2;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      *(float *)((int)puVar7 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar2;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
        iVar5 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar12 - 0x74;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar14 = lVar17;
      lVar16 = lVar13;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar14 = 2;
      do {
        iVar5 = (int)lVar13;
        iVar6 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar5 + 0x7c)) + *(float *)(iVar6 + 4)
                          + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar1);
    }
    dVar22 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar20);
    dVar23 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar21);
    fVar2 = g_heroPosition.w;
    if (dVar22 - dVar23 < 0.0) {
      dVar21 = dVar20;
    }
    fVar4 = (float)(dVar21 + 1.570796251296997);
    dVar20 = (double)(float)(3.141592502593994 - dVar21);
    if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
      dVar20 = dVar21;
    }
    fVar3 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar3 = fVar4;
    }
    dVar23 = (double)(float)(-3.141592502593994 - dVar21);
    if ((double)(float)(-3.141592502593994 - dVar21) - dVar20 < 0.0) {
      dVar23 = dVar20;
    }
    dVar20 = (double)(float)(dVar23 * dVar23);
    fVar1 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
      fVar1 = fVar3;
    }
    fVar10 = fVar1 * fVar1;
    fVar4 = g_heroPosition.x + *(float *)(param_3 + 0x10);
    dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
    dVar22 = (double)(float)(dVar20 * dVar24);
    fVar9 = fVar10 * fVar10 * fVar1;
    fVar3 = g_heroPosition.z + *(float *)(param_3 + 0x18);
    fVar8 = fVar10 * fVar9;
    param_1[1] = (g_heroPosition.y + *(float *)(param_3 + 0x14)) * 0.5 +
                 ((float)(dVar20 * dVar22) * 2.601887e-06 +
                 (float)(dVar22 * -0.0001980741071747616 +
                        (double)(float)(dVar24 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar20 * dVar23) *
                                                       -0.16666656732559204 + dVar23)))) * 2.0;
    param_1[3] = fVar2;
    param_2[1] = 0.0;
    *param_1 = fVar4 * 0.5 +
               (fVar10 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar9 * 0.0083330255 + fVar10 * fVar1 * -0.16666657 + fVar1)
               * 2.0;
    *param_2 = 0.0;
    param_1[2] = fVar3 * 0.5 + 1.0;
    dVar21 = (double)fastfunc::FastWrapRot((float)dVar21,3.1415927);
    param_2[2] = (float)dVar21;
  }
  else {
    *param_1 = Cuboids[iVar6].pos.x;
    param_1[1] = pCVar11[iVar6].pos.y;
    param_1[2] = pCVar11[iVar6].pos.z;
    param_1[3] = pCVar11[iVar6].pos.w;
    iVar5 = *(int *)(iVar5 + 0xe8);
    *param_2 = pCVar11[iVar5].rot.x;
    param_2[1] = pCVar11[iVar5].rot.y;
    param_2[2] = pCVar11[iVar5].rot.z;
    param_2[3] = pCVar11[iVar5].rot.w;
  }
  return;
}



//==== 003dde40  ns=mobyupdate_helpers  size=0x160
// sig: undefined M615_003dde40(void)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 00110488 mobyutil::ClampVec3Magnitude; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M615_003dde40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  Vec4 local_40;
  
  mobyfunc::GetBonePosition(param_1,0,&local_40);
  fVar1 = local_40.x - g_heroPosition.x;
  fVar2 = local_40.y - g_heroPosition.y;
  fVar3 = local_40.z - g_heroPosition.z;
  mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 4.0),&local_40);
  g_heroPosition.x = g_heroPosition.x + fVar1;
  g_heroPosition.y = g_heroPosition.y + fVar2;
  g_heroPosition.z = g_heroPosition.z + fVar3;
  uVar4 = fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),3.14159);
  dVar5 = (double)fastfunc::FastDiffRots(uVar4,(double)g_heroRotation.z);
  dVar6 = (double)(mobyutil::g_FrameTime * 6.2831855);
  if ((dVar5 <= dVar6) && (dVar6 = dVar5, dVar5 < (double)(mobyutil::g_FrameTime * -6.2831855))) {
    dVar6 = (double)(mobyutil::g_FrameTime * -6.2831855);
  }
  dVar6 = (double)fastfunc::FastWrapRot((float)dVar6,g_heroRotation.z);
  g_heroRotation.z = (float)dVar6;
  return;
}



//==== 003ddfd0  ns=mobyupdate_unsorted  size=0xb4c
// sig: undefined UpdateMoby_615(MobyInstance * moby)
// callers(0): 
// callees(19): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006d720 RegisterFuncForMoby; 00085300 hero::Hero_TransAnim; 000a2560 hero::Hero_TransitionToDefault; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 00109c30 mobyutil::OrganicDelt; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110488 mobyutil::ClampVec3Magnitude; 0011afac mobyutil::MB_RequestHelpMessage; 0015d12c sound::PlayMobySound; 003dda00 mobyupdate_helpers::M615_003dda00; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* Moby 615 */

void mobyupdate_unsorted::UpdateMoby_615(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 in_LR;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_80 [4];
  float fStack_70;
  float local_6c;
  float local_68;
  Vec4 local_60;
  
  uVar12 = DAT_00853b08;
  pvVar3 = moby->pVar;
  uVar14 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)((int)pvVar3 + 0x12) = 0;
      moby->state = '\x01';
      DAT_00853b70 = *(undefined4 *)((int)pvVar3 + 0xec);
      DAT_010caff0 = 0x41880000;
      DAT_010caff4 = 0x41880000;
      DAT_010cb000 = 0x41880000;
      DAT_010cb004 = 0xc1880000;
      DAT_010cb010 = 0xc1880000;
      DAT_010cb014 = 0x41880000;
      DAT_010cb020 = 0xc1880000;
      DAT_010cb024 = 0xc1880000;
      if ((moby->levelFlagIdx != -1) &&
         ((uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] != '\0' ||
          ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) != 0)))) {
        moby->state = '\x04';
      }
    }
    else if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      if (*(short *)((int)pvVar3 + 0x12) == 0) {
        *(undefined2 *)((int)pvVar3 + 0x12) = 1;
        sound::PlayMobySound(3,0,moby);
      }
      pMVar9 = g_currentWeaponMoby;
      if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1a)) {
        bVar8 = false;
        uVar12 = DAT_00853b04;
      }
      else {
        bVar8 = true;
        uVar12 = DAT_00853b00;
      }
      moby->field60_0x90 = uVar12;
      if ((bVar8) && (pMVar9->setByGroup != '\0')) {
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = loadVectorLeftIndexed(in_LR,0x3ddfa0);
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint
                            (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                             auVar20);
        auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
        auVar19 = vectorSplatHalfWord(auVar19,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
        *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
        *(undefined2 *)((int)pvVar3 + 0x11c) = 0;
        *(undefined2 *)((int)pvVar3 + 0x11e) = 0;
        hero::TransitionMovement(0x72,0);
        hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x57,0);
        camera::SetCameraPosition(0x951500,0x951510,1,0,0);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        moby->state = '\x02';
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = loadVectorLeftIndexed(8,0x3ddfa0);
        auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint
                            (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                             auVar20);
        auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
        auVar19 = vectorSplatHalfWord(auVar19,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
        *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
        *(undefined4 *)((int)pvVar3 + 0x110) = 0;
        *(float *)((int)pvVar3 + 0xf0) = GameCamera.posX;
        *(float *)((int)pvVar3 + 0xf4) = GameCamera.posY;
        *(float *)((int)pvVar3 + 0xf8) = GameCamera.posZ;
        *(char (*) [4])((int)pvVar3 + 0xfc) = GameCamera.field8_0x14c;
        *(float *)((int)pvVar3 + 0x100) = GameCamera.rot.azimuth;
        *(float *)((int)pvVar3 + 0x104) = GameCamera.rot.elevation;
        *(float *)((int)pvVar3 + 0x108) = GameCamera.rot.radius;
        *(char (*) [4])((int)pvVar3 + 0x10c) = GameCamera.field10_0x15c;
      }
    }
    else {
      *(undefined2 *)((int)pvVar3 + 0x12) = 0;
      moby->field60_0x90 = uVar12;
    }
  }
  else if (bVar1 < 3) {
    mobyfunc::GetBonePosition(moby,0,&local_60);
    fVar5 = local_60.x - g_heroPosition.x;
    fVar6 = local_60.y - g_heroPosition.y;
    fVar7 = local_60.z - g_heroPosition.z;
    mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 4.0),&local_60);
    g_heroPosition.x = g_heroPosition.x + fVar5;
    g_heroPosition.y = g_heroPosition.y + fVar6;
    g_heroPosition.z = g_heroPosition.z + fVar7;
    uVar15 = fastfunc::FastWrapRot((moby->rotation).z,3.14159);
    dVar16 = (double)fastfunc::FastDiffRots(uVar15,(double)g_heroRotation.z);
    dVar18 = 6.2831854820251465;
    dVar17 = (double)(mobyutil::g_FrameTime * 6.2831855);
    if ((dVar16 <= dVar17) &&
       (dVar17 = dVar16, dVar16 < (double)(mobyutil::g_FrameTime * -6.2831855))) {
      dVar17 = (double)(mobyutil::g_FrameTime * -6.2831855);
    }
    dVar17 = (double)fastfunc::FastWrapRot((float)dVar17,g_heroRotation.z);
    g_heroRotation.z = (float)dVar17;
    mobyupdate_helpers::M615_003dda00(local_80,&fStack_70,moby);
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 2.0,
               (float *)((int)pvVar3 + 0x110),0x720000,(float *)((int)pvVar3 + 0x114));
    dVar17 = (double)fastfunc::FastDiffRots
                               ((double)local_68,(double)*(float *)((int)pvVar3 + 0x108));
    dVar17 = (double)fastfunc::FastWrapRot
                               ((float)(dVar17 * (double)*(float *)((int)pvVar3 + 0x110)),
                                *(float *)((int)pvVar3 + 0x108));
    dVar16 = (double)fastfunc::FastDiffRots
                               ((double)local_6c,(double)*(float *)((int)pvVar3 + 0x104));
    fastfunc::FastWrapRot
              ((float)(dVar16 * (double)*(float *)((int)pvVar3 + 0x110)),
               *(float *)((int)pvVar3 + 0x104));
    camera::camera5::Camera_SetMobyDrivenTargetPos(local_80);
    camera::camera5::Camera_SetMobyDrivenTargetRot(&fStack_70);
    DAT_00a1bfe8 = 1;
    mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      camera::SetCameraPosition(0x951500,0x951510,1,0,0);
    }
    iVar13 = 0;
    uVar12 = (int)*(uint *)((int)pvVar3 + 0x110) >> 0x1f;
    if (((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar3 + 0x110)) - uVar12) < 0x3f7d70a4) ||
       (dVar17 = (double)fastfunc::FastSubRots(GameCamera.rot.radius,(float)dVar17),
       0.01745329238474369 <= dVar17)) {
      if ((DAT_0096a778 & 2) != 0) {
        hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x58,0);
      }
    }
    else {
      RegisterFuncForMoby(&PTR_M617_003dfa30_0070d980,moby);
      uVar10 = uVar14;
      do {
        if (*(int *)((int)uVar10 + 0xb0) == 1) break;
        iVar13 = iVar13 + 1;
        uVar10 = uVar10 + 4;
      } while (iVar13 < 0xc);
      if (*(int *)((int)pvVar3 + 0xe4) < 1) {
        if (*(int *)((int)pvVar3 + 0xe4) < 0) {
          dVar17 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar3 + 0xe4),
                                      (float)((double)mobyutil::g_FrameTime * -6.2831854820251465));
          *(float *)((int)pvVar3 + 0xe4) = (float)dVar17;
          if (dVar17 < -0.5235987901687622) {
            *(undefined4 *)((int)pvVar3 + 0xe4) = 0;
            if (*(int *)((int)pvVar3 + 0xe0) == 1) {
              *(int *)((int)pvVar3 + 0x14) = (*(int *)((int)pvVar3 + 0x14) + 0xd) % 0xc;
            }
            else if (*(int *)((int)pvVar3 + 0xe0) == 2) {
              *(int *)((int)pvVar3 + 0x18) = (*(int *)((int)pvVar3 + 0x18) + 0xd) % 0xc;
            }
            else {
              *(int *)((int)pvVar3 + 0x1c) = (*(int *)((int)pvVar3 + 0x1c) + 0xd) % 0xc;
            }
          }
        }
        else if (iVar13 == 0xc) {
          iVar11 = fastfunc::FastDecTimerS16(uVar14 + 0x10);
          if (iVar11 != 0) {
            moby->state = '\x03';
          }
        }
        else if (((pad_pressedButton & 0x8000) == 0) && ((pad_pressedButton & 0x2000) == 0)) {
          if ((g_buttonsPressedThisFrame & UP) == 0) {
            if ((g_buttonsPressedThisFrame & DOWN) != 0) {
              iVar11 = *(int *)((int)pvVar3 + 0xe0) + 1;
              *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 2;
              if (iVar11 == 4) {
                *(undefined4 *)((int)pvVar3 + 0xe0) = 3;
              }
              else {
                *(int *)((int)pvVar3 + 0xe0) = iVar11;
                sound::PlayMobySound(1,0,moby);
              }
            }
          }
          else {
            iVar11 = *(int *)((int)pvVar3 + 0xe0) + -1;
            *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 2;
            if (iVar11 == 0) {
              *(undefined4 *)((int)pvVar3 + 0xe0) = 1;
            }
            else {
              *(int *)((int)pvVar3 + 0xe0) = iVar11;
              sound::PlayMobySound(1,0,moby);
            }
          }
        }
        else {
          *(ushort *)((int)pvVar3 + 0x11e) = *(ushort *)((int)pvVar3 + 0x11e) | 1;
          sound::PlayMobySound(0,0,moby);
          if ((pad_pressedButton & 0x8000) != 0) {
            dVar18 = -6.2831854820251465;
          }
          *(float *)((int)pvVar3 + 0xe4) = (float)((double)mobyutil::g_FrameTime * dVar18);
        }
      }
      else {
        dVar17 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar3 + 0xe4),
                                    (float)((double)mobyutil::g_FrameTime * dVar18));
        *(float *)((int)pvVar3 + 0xe4) = (float)dVar17;
        if (0.5235987901687622 < dVar17) {
          *(undefined4 *)((int)pvVar3 + 0xe4) = 0;
          if (*(int *)((int)pvVar3 + 0xe0) == 1) {
            *(int *)((int)pvVar3 + 0x14) = (*(int *)((int)pvVar3 + 0x14) + 0xb) % 0xc;
          }
          else if (*(int *)((int)pvVar3 + 0xe0) == 2) {
            *(int *)((int)pvVar3 + 0x18) = (*(int *)((int)pvVar3 + 0x18) + 0xb) % 0xc;
          }
          else {
            *(int *)((int)pvVar3 + 0x1c) = (*(int *)((int)pvVar3 + 0x1c) + 0xb) % 0xc;
          }
        }
      }
      if (iVar13 == 0xc) goto LAB_003dead8;
    }
    if (((((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (help::g_HelpState == 0)) &&
        (help::g_HelpCurId == -1)) ||
       ((g_heroState != MOVEMENT_LOCKED || (g_CurrentWeapon != 0x1a)))) {
      moby->state = '\x01';
      camera::camera5::Camera_DeactivateMobyDrivenCam(1);
      hero::Hero_TransitionToDefault();
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = loadVectorLeftIndexed(8,0x3ddfa0);
      auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar19 = vectorMultiplyAddFloatingPoint
                          (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                           auVar20);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      auVar19 = vectorSplatHalfWord(auVar19,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar19,0x10,uVar14);
      *(undefined2 *)((int)pvVar3 + 0x10) = uVar4;
    }
  }
  else if ((bVar1 < 4) && ((DAT_0096a778 & 2) != 0)) {
    if (moby->levelFlagIdx != -1) {
      uVar2 = moby->uid;
      iVar11 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      iVar13 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar12 = *(uint *)(&DAT_00a54dd0 + iVar13);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar11) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar11) | 1 << (uVar2 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar13) = uVar12 | 1 << (uVar2 & 0x1f);
    }
    camera::camera5::Camera_DeactivateMobyDrivenCam(1);
    hero::TransitionMovement(0,1);
    moby->state = '\x04';
    moby->setByGroup = '\x01';
  }
LAB_003dead8:
  mobyutil::MB_ColorDyingMoby(moby,uVar14);
  return;
}



//==== 003deb50  ns=mobyupdate_helpers  size=0x400
// sig: undefined M617_003deb50(void)
// callers(1): 003dfa30 mobyupdate_helpers::M617_003dfa30
// callees(4): 0006ecf8 draw::DrawTexturedQuadHud; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M617_003deb50
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined8 in_r7;
  int iVar1;
  double dVar2;
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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_100 [32];
  undefined1 local_e0 [16];
  undefined1 local_d0 [40];
  
  dVar2 = (double)fastfunc::FastDiffRots(param_2,param_1);
  dVar2 = (double)(float)(dVar2 * 0.20000000298023224);
  iVar1 = 0;
  dVar9 = 1.570796251296997;
  dVar10 = 3.141592502593994;
  dVar16 = (double)(float)(param_3 * 16.0);
  dVar11 = -3.141592502593994;
  dVar17 = (double)(float)(param_4 * 16.0);
  dVar12 = -0.16666656732559204;
  dVar13 = 0.008333025500178337;
  dVar14 = -0.0001980741071747616;
  dVar15 = 2.601886990305502e-06;
  do {
    dVar3 = (double)fastfunc::FastWrapRot((float)param_1,(float)((double)(longlong)iVar1 * dVar2));
    iVar1 = iVar1 + 1;
    dVar4 = (double)fastfunc::FastWrapRot((float)param_1,(float)((double)(longlong)iVar1 * dVar2));
    dVar6 = (double)(float)(dVar3 + dVar9);
    dVar5 = (double)(float)(dVar10 - dVar6);
    if (dVar6 - (double)(float)(dVar10 - dVar6) < 0.0) {
      dVar5 = dVar6;
    }
    dVar8 = (double)(float)(dVar11 - dVar6);
    if ((double)(float)(dVar11 - dVar6) - dVar5 < 0.0) {
      dVar8 = dVar5;
    }
    dVar5 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar8));
    dVar6 = (double)(float)(dVar5 * dVar7);
    dVar6 = (double)(float)((double)(float)(dVar5 * dVar6) * dVar15 +
                           (double)(float)(dVar6 * dVar14 +
                                          (double)(float)(dVar7 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar8) * dVar12 + dVar8))));
    fastfunc::FastDoubleToInt((double)(float)(dVar6 * dVar16));
    dVar5 = (double)(float)(dVar10 - dVar3);
    if (dVar3 - (double)(float)(dVar10 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar8 = (double)(float)(dVar11 - dVar3);
    if ((double)(float)(dVar11 - dVar3) - dVar5 < 0.0) {
      dVar8 = dVar5;
    }
    dVar5 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar8));
    dVar3 = (double)(float)(dVar5 * dVar7);
    dVar5 = (double)(float)((double)(float)(dVar5 * dVar3) * dVar15 +
                           (double)(float)(dVar3 * dVar14 +
                                          (double)(float)(dVar7 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar8) * dVar12 + dVar8))));
    fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar16));
    fastfunc::FastDoubleToInt((double)(float)(dVar6 * dVar17));
    fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar17));
    dVar3 = (double)(float)(dVar4 + dVar9);
    dVar5 = (double)(float)(dVar10 - dVar3);
    if (dVar3 - (double)(float)(dVar10 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar6 = (double)(float)(dVar11 - dVar3);
    if ((double)(float)(dVar11 - dVar3) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar8 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar3 = (double)(float)(dVar5 * dVar8);
    dVar3 = (double)(float)((double)(float)(dVar5 * dVar3) * dVar15 +
                           (double)(float)(dVar3 * dVar14 +
                                          (double)(float)(dVar8 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar6) * dVar12 + dVar6))));
    fastfunc::FastDoubleToInt((double)(float)(dVar3 * dVar16));
    dVar5 = (double)(float)(dVar10 - dVar4);
    if (dVar4 - (double)(float)(dVar10 - dVar4) < 0.0) {
      dVar5 = dVar4;
    }
    dVar6 = (double)(float)(dVar11 - dVar4);
    if ((double)(float)(dVar11 - dVar4) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar8 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar4 = (double)(float)(dVar5 * dVar8);
    dVar5 = (double)(float)((double)(float)(dVar5 * dVar4) * dVar15 +
                           (double)(float)(dVar4 * dVar14 +
                                          (double)(float)(dVar8 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar6) * dVar12 + dVar6))));
    fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar16));
    fastfunc::FastDoubleToInt((double)(float)(dVar3 * dVar17));
    fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar17));
    draw::DrawTexturedQuadHud(local_100,local_d0,local_e0,in_r7,1);
  } while (iVar1 < 5);
  return;
}



//==== 003def78  ns=mobyupdate_helpers  size=0x3f0
// sig: undefined M617_003def78(void)
// callers(1): 003dfa30 mobyupdate_helpers::M617_003dfa30
// callees(5): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M617_003def78(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  
  dVar14 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar13 = -3.141592502593994;
  dVar12 = -0.16666656732559204;
  dVar11 = 0.008333025500178337;
  dVar10 = -0.0001980741071747616;
  dVar9 = 2.601886990305502e-06;
  dVar8 = 16.0;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  fastfunc::FastDoubleToInt
            ((double)((float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                                      fVar2 * -0.0001980741 +
                                      fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
                             param_2) * 16.0));
  dVar6 = (double)(float)(dVar14 - param_1);
  if (param_1 - (double)(float)(dVar14 - param_1) < 0.0) {
    dVar6 = param_1;
  }
  dVar14 = (double)(float)(dVar13 - param_1);
  if ((double)(float)(dVar13 - param_1) - dVar6 < 0.0) {
    dVar14 = dVar6;
  }
  dVar13 = (double)(float)(dVar14 * dVar14);
  dVar7 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
  dVar6 = (double)(float)(dVar13 * dVar7);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar13 * dVar6) * dVar9
                                                            + (double)(float)(dVar6 * dVar10 +
                                                                             (double)(float)(dVar7 *
                                                                                             dVar11 
                                                  + (double)(float)((double)(float)(dVar13 * dVar14)
                                                                    * dVar12 + dVar14)))) * param_2)
                            * dVar8));
  fastfunc::FastEulerToMtx1(&local_f0,local_100);
  fastfunc::FastVecMtx4Mul(&local_f0,&local_f0,&DAT_010caff0);
  fastfunc::FastDoubleToInt((double)(float)((double)local_f0 * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_ec * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_e0 * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_dc * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_d0 * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_cc * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_c0 * dVar8));
  fastfunc::FastDoubleToInt((double)(float)((double)local_bc * dVar8));
  uVar5 = draw::GetEffectTex(DAT_00853b70 + 0x29);
  draw::DrawTexturedQuadHud(local_b0,local_80,local_90,uVar5,1);
  draw::DrawTexturedQuadHud(local_b0,local_80,local_90,uVar5,1);
  return;
}



//==== 003df398  ns=mobyupdate_helpers  size=0x544
// sig: undefined M617_003df398(void)
// callers(1): 003dfa30 mobyupdate_helpers::M617_003dfa30
// callees(3): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M617_003df398(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_f0 [32];
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  
  fastfunc::FastDoubleToInt((double)((float)(longlong)worldUpdateTime * DAT_00853bb4));
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar7 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar7 = param_1;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar6 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar7 < 0.0) {
    dVar6 = dVar7;
  }
  dVar7 = (double)(float)(dVar6 * dVar6);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  dVar8 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
  dVar9 = (double)(float)(dVar7 * dVar8);
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar1 = fVar4 * fVar2;
  dVar15 = (double)((float)(dVar7 * dVar9) * 2.601887e-06 +
                   (float)(dVar9 * -0.0001980741071747616 +
                          (double)(float)(dVar8 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar7 * dVar6) *
                                                         -0.16666656732559204 + dVar6))));
  dVar14 = (double)(fVar4 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  dVar7 = (double)(float)(dVar15 * 2.0);
  dVar6 = (double)(float)(dVar14 * 2.0);
  dVar13 = (double)(float)(dVar14 * param_2 + dVar7);
  dVar12 = (double)(float)(dVar14 * param_3 - dVar7);
  dVar11 = (double)(float)(dVar14 * param_3 + dVar7);
  dVar10 = (double)(float)(dVar15 * param_2 + dVar6);
  dVar9 = (double)(float)(dVar15 * param_2 - dVar6);
  dVar8 = (double)(float)(dVar15 * param_3 + dVar6);
  dVar6 = (double)(float)(dVar15 * param_3 - dVar6);
  fastfunc::FastDoubleToInt((double)(float)(dVar14 * param_2 - dVar7));
  fastfunc::FastDoubleToInt(dVar10);
  fastfunc::FastDoubleToInt(dVar13);
  fastfunc::FastDoubleToInt(dVar9);
  fastfunc::FastDoubleToInt(dVar12);
  fastfunc::FastDoubleToInt(dVar8);
  fastfunc::FastDoubleToInt(dVar11);
  fastfunc::FastDoubleToInt(dVar6);
  uVar5 = draw::GetEffectTex(DAT_00853bb8);
  draw::DrawTexturedQuadHud(local_f0,local_c0,local_d0,uVar5,0);
  dVar7 = (double)(float)(dVar14 * 5.0);
  dVar6 = (double)(float)(dVar15 * 5.0);
  dVar10 = (double)(float)(dVar15 * param_2 + dVar7);
  dVar9 = (double)(float)(dVar15 * param_2 - dVar7);
  dVar8 = (double)(float)(dVar15 * param_3 + dVar7);
  dVar12 = (double)(float)(dVar15 * param_3 - dVar7);
  dVar7 = (double)(float)(dVar14 * param_3 - dVar6);
  dVar11 = (double)(float)(dVar14 * param_2 + dVar6);
  dVar13 = (double)(float)(dVar14 * param_3 + dVar6);
  fastfunc::FastDoubleToInt((double)(float)(dVar14 * param_2 - dVar6));
  fastfunc::FastDoubleToInt(dVar10);
  fastfunc::FastDoubleToInt(dVar11);
  fastfunc::FastDoubleToInt(dVar9);
  fastfunc::FastDoubleToInt(dVar7);
  fastfunc::FastDoubleToInt(dVar8);
  fastfunc::FastDoubleToInt(dVar13);
  fastfunc::FastDoubleToInt(dVar12);
  draw::DrawTexturedQuadHud(local_f0,local_c0,local_d0,uVar5,0);
  return;
}



//==== 003df8dc  ns=mobyupdate_helpers  size=0x114
// sig: undefined M617_003df8dc(void)
// callers(0): 
// callees(2): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud

void mobyupdate_helpers::M617_003df8dc(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  iVar2 = 0;
  do {
    uVar1 = draw::GetEffectTex(DAT_00853b70 + 0x28);
    draw::DrawTexturedQuadHud(local_70,local_40,local_50,uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



//==== 003dfa30  ns=mobyupdate_helpers  size=0x1854
// sig: undefined M617_003dfa30(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00174f80 vuchain::SetGSReg; 003deb50 mobyupdate_helpers::M617_003deb50; 003def78 mobyupdate_helpers::M617_003def78; 003df398 mobyupdate_helpers::M617_003df398; 004d5fe4 idol_draw::DrawDepth; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor; 00502f7c idol_draw::Blend

void mobyupdate_helpers::M617_003dfa30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  RenderingStep *pRVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 local_140 [32];
  undefined1 local_120 [16];
  undefined1 local_110 [40];
  
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar5->command[1] = 1;
  pRVar5->command = pRVar5->command + 2;
  idol_draw::DrawDepth(HUD_Pass,0x44);
  iVar23 = *(int *)(param_1 + 0x78);
  uVar6 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar6);
  uVar6 = draw::GetEffectTex(0x10);
  iVar9 = 0;
  iVar18 = 0;
  do {
    uVar7 = draw::GetEffectTex(DAT_00853b70 + 0x28);
    draw::DrawTexturedQuadHud(local_140,local_110,local_120,uVar7,1);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar8 = 0;
  iVar9 = iVar23;
  do {
    if (*(int *)(iVar9 + 0xb0) != 0) {
      *(undefined4 *)(iVar9 + 0xb0) = 1;
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 4;
  } while (iVar8 < 0xc);
  iVar22 = 0;
  iVar21 = 0;
  dVar33 = 0.3141592741012573;
  uVar1 = (int)*(uint *)(iVar23 + 0xe4) >> 0x1f;
  iVar8 = 0;
  iVar9 = (uVar1 >> 1 ^ *(uint *)(iVar23 + 0xe4)) - uVar1;
  if (iVar9 < 0x3ea0d97d) {
    if (iVar9 < -0x3ea0d97c) {
      if (*(int *)(iVar23 + 0xe0) == 1) {
        iVar22 = -1;
      }
      else if (*(int *)(iVar23 + 0xe0) == 2) {
        iVar21 = -1;
      }
      else {
        iVar8 = -1;
      }
    }
  }
  else if (*(int *)(iVar23 + 0xe0) == 1) {
    iVar22 = 1;
  }
  else if (*(int *)(iVar23 + 0xe0) == 2) {
    iVar21 = 1;
  }
  else {
    iVar8 = 1;
  }
  iVar20 = 0;
  dVar37 = 0.01745329238474369;
  iVar15 = iVar23 + 0x80;
  iVar19 = 0;
  iVar14 = iVar23 + 0xb0;
  iVar17 = iVar23 + 0x20;
  iVar16 = iVar23 + 0x50;
  iVar9 = iVar22;
  do {
    dVar38 = -0.3141592741012573;
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 1) {
      dVar24 = (double)fastfunc::FastWrapRot(-0.31415927,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x14);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar17);
    if (*piVar2 == 2) {
      iVar13 = (iVar20 + *(int *)(iVar23 + 0x18) + iVar22) - iVar21;
      if (*(int *)((iVar13 % 0xc) * 4 + iVar16) == 0) {
        iVar12 = (iVar20 + *(int *)(iVar23 + 0x1c) + iVar22) - iVar8;
        if (*(int *)((iVar12 % 0xc) * 4 + iVar15) == 0) {
          if (*(int *)(((iVar12 + 6) % 0xc) * 4 + iVar15) == 0) {
            if (*(int *)(((iVar13 + 6) % 0xc) * 4 + iVar16) == 0) {
              if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar17) == 0) {
                bVar4 = false;
                piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
                dVar35 = (double)(longlong)-DAT_00853bb0;
                if (*piVar3 != 0) {
                  *piVar2 = 3;
                  *piVar3 = 2;
                }
              }
              else {
                bVar4 = true;
                dVar35 = (double)(longlong)-DAT_00853ba4;
              }
            }
            else {
              bVar4 = true;
              dVar35 = (double)(longlong)-DAT_00853b98;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853b8c;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)DAT_00853b8c;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)DAT_00853b98;
      }
      uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853ba4,dVar35);
      if (bVar4) {
        uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853ba4);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  iVar20 = 0;
  iVar19 = 0;
  iVar9 = iVar21;
  do {
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 2) {
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar38,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x18);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar16);
    if (*piVar2 == 2) {
      iVar13 = (iVar20 + *(int *)(iVar23 + 0x1c) + iVar21) - iVar8;
      if (*(int *)((iVar13 % 0xc) * 4 + iVar15) == 0) {
        if (*(int *)(((iVar13 + 6) % 0xc) * 4 + iVar15) == 0) {
          if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar16) == 0) {
            if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x14) + iVar21) - iVar22) + 6) % 0xc) * 4 +
                        iVar17) == 0) {
              bVar4 = false;
              piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
              dVar35 = (double)(longlong)-DAT_00853bb0;
              if (*piVar3 != 0) {
                *piVar2 = 3;
                *piVar3 = 2;
              }
            }
            else {
              bVar4 = true;
              dVar35 = (double)(longlong)-DAT_00853ba4;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853b98;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)-DAT_00853b8c;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)DAT_00853b8c;
      }
      uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853b98,dVar35);
      if (bVar4) {
        uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853b98);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  iVar20 = 0;
  iVar19 = 0;
  iVar9 = iVar8;
  do {
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 3) {
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar38,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x1c);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar15);
    if (*piVar2 == 2) {
      if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar15) == 0) {
        if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x18) + iVar8) - iVar21) + 6) % 0xc) * 4 +
                    iVar16) == 0) {
          if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x14) + iVar8) - iVar22) + 6) % 0xc) * 4 +
                      iVar17) == 0) {
            bVar4 = false;
            piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
            dVar35 = (double)(longlong)-DAT_00853bb0;
            if (*piVar3 != 0) {
              *piVar2 = 3;
              *piVar3 = 2;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853ba4;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)-DAT_00853b98;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)-DAT_00853b8c;
      }
      uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853b8c,dVar35);
      if (bVar4) {
        uVar7 = fastfunc::FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853b8c);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  dVar36 = 3.141592502593994;
  dVar34 = -3.141592502593994;
  iVar8 = 0;
  dVar32 = -0.16666656732559204;
  dVar31 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  iVar9 = 0;
  dVar35 = 2.601886990305502e-06;
  dVar38 = 0.5;
  dVar24 = 0.5235987901687622;
  dVar33 = 0.2617993950843811;
  do {
    dVar39 = -0.2617993950843811;
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 1) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      fastfunc::FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853ba0,(double)(longlong)DAT_00853b9c);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x14)) % 0xc) * 4 + iVar17);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x14)) % 0xc) * 4 + iVar17) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  iVar9 = 0;
  do {
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 2) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      fastfunc::FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853b94,(double)(longlong)DAT_00853b90);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x18)) % 0xc) * 4 + iVar16);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x18)) % 0xc) * 4 + iVar16) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  iVar9 = 0;
  do {
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 3) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      fastfunc::FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853b88,(double)(longlong)DAT_00853b84);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x1c)) % 0xc) * 4 + iVar15);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = fastfunc::FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x1c)) % 0xc) * 4 + iVar15) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  dVar24 = -0.0872664600610733;
  iVar9 = 0;
  dVar33 = 0.1745329201221466;
  do {
    dVar38 = (double)fastfunc::FastWrapRot((float)dVar24,(float)((double)(longlong)iVar9 * dVar37));
    uVar6 = fastfunc::FastWrapRot((float)dVar38,(float)dVar33);
    if (*(int *)(iVar23 + 0xb0) != 0) {
      uVar10 = DAT_00853cb0;
      if ((*(int *)(iVar23 + 0xb0) != 2) && (uVar10 = DAT_00853ca8, (worldUpdateTime & 0x20) != 0))
      {
        uVar10 = DAT_00853cac;
      }
      M617_003deb50(dVar38,uVar6,(double)(longlong)DAT_00853bac,(double)(longlong)DAT_00853ba8,
                    uVar10);
    }
    iVar18 = iVar18 + 1;
    iVar9 = iVar9 + 0x1e;
    iVar23 = iVar23 + 4;
  } while (iVar18 < 0xc);
  uVar6 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar6);
  return;
}



