//==== 000f00a0  ns=mobyfunc  size=0x648
// sig: undefined MB_GetCollPrimWorld(void)
// callers(4): 00102168 mobyutil::MB_UpdateLegAnimState; 0010dc70 mobyutil::MB_CheckCollPill; 0017a230 walk::walk_Update; 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(2): 000f595c mobyfunc::Moby_BuildJointMatrices; 00500ca4 fastfunc::FastEulerToMtx1

undefined8
mobyfunc::MB_GetCollPrimWorld
          (int param_1,int param_2,uint *param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_920;
  float local_91c;
  float local_918;
  float local_914;
  float local_910;
  float local_90c;
  float local_908;
  float local_904;
  float local_900;
  float local_8fc;
  float local_8f8;
  float local_8f4;
  float local_8f0;
  float local_8ec;
  float local_8e8;
  float local_8e4;
  float afStack_8e0 [512];
  double local_e0;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar13 = 0;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x2c);
    puVar14 = (uint *)(*(int *)(param_1 + 0x94) + param_2 * 0x20 + 0x10);
    *param_3 = *puVar14 & 0xff;
    dVar20 = (double)(fVar5 * 0.0009765625);
    fastfunc::FastEulerToMtx1(&local_920,param_1 + 0x40);
    local_e0 = (double)local_920;
    uVar9 = *param_3;
    if (((uVar9 == 1) || (uVar9 == 0)) || (uVar9 == 3)) {
      fVar6 = (float)puVar14[4];
      fVar5 = (float)((double)(float)puVar14[5] * dVar20);
      dVar16 = (double)(float)((double)fVar6 * dVar20);
      fVar7 = (float)puVar14[7];
      fVar1 = (float)((double)(float)puVar14[6] * dVar20);
      param_4[3] = (float)puVar14[7];
      *param_4 = (float)((double)fVar6 * dVar20);
      param_4[1] = fVar5;
      param_4[2] = fVar1;
      *param_4 = local_8f0 * fVar7 +
                 local_900 * fVar1 + (float)(local_e0 * dVar16 + (double)(local_910 * fVar5));
      param_4[1] = local_8ec * fVar7 +
                   local_8fc * fVar1 +
                   (float)((double)local_91c * dVar16 + (double)(local_90c * fVar5));
      param_4[2] = local_8e8 * fVar7 +
                   local_8f8 * fVar1 +
                   (float)((double)local_918 * dVar16 + (double)(local_908 * fVar5));
      param_4[3] = local_8e4 * fVar7 +
                   local_8f4 * fVar1 +
                   (float)((double)local_914 * dVar16 + (double)(local_904 * fVar5));
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)param_4[3] * dVar20);
      if ((uVar9 == 1) || (uVar9 == 0)) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)((double)(float)puVar14[1] * dVar20);
      }
      uVar13 = 1;
      *param_6 = fVar5;
    }
    else if (uVar9 == 2) {
      dVar15 = 0.0;
      sVar8 = *(short *)(*(int *)(param_1 + 0x94) + 2);
      dVar16 = dVar15;
      dVar17 = dVar15;
      dVar18 = dVar15;
      dVar19 = dVar15;
      if (sVar8 != 0) {
        Moby_BuildJointMatrices(param_1,sVar8,afStack_8e0);
        uVar9 = puVar14[1];
        *param_4 = afStack_8e0[uVar9 * 4];
        param_4[1] = afStack_8e0[uVar9 * 4 + 1];
        param_4[2] = afStack_8e0[uVar9 * 4 + 2];
        param_4[3] = afStack_8e0[uVar9 * 4 + 3];
        dVar15 = (double)*param_4;
        dVar16 = (double)param_4[1];
        dVar17 = (double)param_4[2];
        dVar18 = (double)param_4[3];
      }
      fVar5 = (float)(dVar16 * dVar20);
      fVar1 = (float)(dVar15 * dVar20);
      fVar6 = (float)(dVar17 * dVar20);
      uVar13 = 1;
      *param_4 = fVar1;
      param_4[1] = fVar5;
      param_4[2] = fVar6;
      param_4[3] = (float)dVar18;
      *param_4 = (float)((double)local_8f0 * dVar18 +
                        (double)(local_900 * fVar6 + local_920 * fVar1 + local_910 * fVar5));
      param_4[1] = (float)((double)local_8ec * dVar18 +
                          (double)(local_8fc * fVar6 + local_91c * fVar1 + local_90c * fVar5));
      param_4[2] = (float)((double)local_8e8 * dVar18 +
                          (double)(local_8f8 * fVar6 + local_918 * fVar1 + local_908 * fVar5));
      param_4[3] = (float)((double)local_8e4 * dVar18 +
                          (double)(local_8f4 * fVar6 + local_914 * fVar1 + local_904 * fVar5));
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)(float)puVar14[3] * dVar20);
      *param_6 = (float)dVar19;
    }
    else if (uVar9 == 4) {
      sVar8 = *(short *)(*(int *)(param_1 + 0x94) + 2);
      if (sVar8 != 0) {
        Moby_BuildJointMatrices(param_1,sVar8,0);
      }
      iVar12 = (int)(((longlong)*(short *)(puVar14 + 1) & 0xffffffffU) << 4);
      iVar10 = (int)(((longlong)*(short *)((int)puVar14 + 6) & 0xfffffffU) << 4);
      fVar5 = (float)((double)*(float *)(iVar12 + 0x70000008) * dVar20);
      fVar1 = (float)((double)*(float *)(iVar10 + 0x70000008) * dVar20);
      fVar6 = (float)((double)*(float *)(iVar12 + 0x70000004) * dVar20);
      fVar7 = (float)((double)*(float *)(iVar10 + 0x70000004) * dVar20);
      fVar2 = (float)((double)*(float *)(iVar12 + 0x70000000) * dVar20);
      fVar3 = (float)((double)*(float *)(iVar10 + 0x70000000) * dVar20);
      uVar13 = 1;
      fVar11 = fVar7;
      if (fVar5 - fVar1 < 0.0) {
        fVar11 = fVar6;
      }
      fVar7 = fVar7 - fVar6;
      fVar6 = fVar3;
      if (fVar5 - fVar1 < 0.0) {
        fVar6 = fVar2;
      }
      fVar4 = *(float *)(iVar10 + 0x7000000c);
      if (fVar5 - fVar1 < 0.0) {
        fVar4 = *(float *)(iVar12 + 0x7000000c);
      }
      fVar3 = fVar3 - fVar2;
      fVar2 = fVar1;
      if (fVar5 - fVar1 < 0.0) {
        fVar2 = fVar5;
      }
      *param_4 = fVar6;
      fVar4 = (float)((double)fVar4 * dVar20);
      param_4[1] = fVar11;
      param_4[2] = fVar2;
      param_4[3] = fVar4;
      *param_4 = local_8f0 * fVar4 + local_900 * fVar2 + local_920 * fVar6 + local_910 * fVar11;
      param_4[1] = local_8ec * fVar4 + local_8fc * fVar2 + local_91c * fVar6 + local_90c * fVar11;
      param_4[2] = local_8e8 * fVar4 + local_8f8 * fVar2 + local_918 * fVar6 + local_908 * fVar11;
      param_4[3] = local_8e4 * fVar4 + local_8f4 * fVar2 + local_914 * fVar6 + local_904 * fVar11;
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)(float)puVar14[3] * dVar20);
      *param_6 = SQRT((fVar1 - fVar5) * (fVar1 - fVar5) + fVar3 * fVar3 + fVar7 * fVar7);
    }
    else {
      uVar13 = 0;
    }
  }
  return uVar13;
}



//==== 000f06f0  ns=mobyfunc  size=0x148
// sig: undefined MB_SetCollPrimFromWorld(void)
// callers(2): 0007d6d0 hero::Hero_MapToMoby; 00081e38 hero::Hero_MapToMobyNonRatchet
// callees(1): 005010c0 fastfunc::FastNormalizeRMtx4

void mobyfunc::MB_SetCollPrimFromWorld
               (double param_1,double param_2,int param_3,ulonglong param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  dVar6 = (double)(1024.0 / *(float *)(param_3 + 0x2c));
  iVar5 = *(int *)(param_3 + 0x94) + (int)((param_4 & 0xffffffff) << 3) * 4 + 0x10;
  fastfunc::FastNormalizeRMtx4(&local_70,param_3 + 0xc0);
  fVar2 = param_5[1] - *(float *)(param_3 + 0x14);
  fVar3 = *param_5 - *(float *)(param_3 + 0x10);
  fVar4 = param_5[2] - *(float *)(param_3 + 0x18);
  fVar1 = param_5[3];
  *(float *)(iVar5 + 4) = (float)(param_2 * dVar6);
  *(float *)(iVar5 + 0x1c) = (float)(param_1 * dVar6);
  *(float *)(iVar5 + 0x10) =
       (float)((double)(local_40 * fVar1 + local_50 * fVar4 + local_70 * fVar3 + local_60 * fVar2) *
              dVar6);
  *(float *)(iVar5 + 0x14) =
       (float)((double)(local_3c * fVar1 + local_4c * fVar4 + local_6c * fVar3 + local_5c * fVar2) *
              dVar6);
  *(float *)(iVar5 + 0x18) =
       (float)((double)(local_38 * fVar1 + local_48 * fVar4 + local_68 * fVar3 + local_58 * fVar2) *
              dVar6);
  return;
}



//==== 000f0838  ns=mobyfunc  size=0x1c
// sig: undefined MB_AddShortPairOffset(void)
// callers(5): 002b9950 mobyupdate_unsorted::UpdateMoby_179; 00304c98 mobyupdate_unsorted::UpdateMoby_236; 00354248 mobyupdate_unsorted::UpdateMoby_352; 00364408 mobyupdate_unsorted::UpdateMoby_{404_405}; 0040f2b0 mobyupdate_unsorted::UpdateMoby_{674_677_680}
// callees(0): 

void mobyfunc::MB_AddShortPairOffset(int param_1,short param_2,short param_3)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + param_2;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + param_3;
  return;
}



//==== 000f0854  ns=mobyfunc  size=0xac
// sig: undefined MB_AllocAnimLayer(void)
// callers(4): 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers; 00099d10 hero::Hero_RestartFiringAnimLayer; 00099ea8 hero::Hero_PlayFiringAnim
// callees(0): 

/* [p2_mobyutil] takes free slot of 6 in pool 0xa2c440 (0x40 each), joint buffer 0xa24640+i*0x1500,
   links into moby+0x60 */

short * mobyfunc::MB_AllocAnimLayer(int param_1,short param_2)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pcVar1 = &DAT_00a2c444;
  do {
    if (*pcVar1 == '\0') break;
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar3 < 6);
  iVar4 = iVar3 * 0x40;
  psVar2 = (short *)(&g_AnimLayerPool + iVar4);
  (&DAT_00a2c444)[iVar4] = 1;
  *psVar2 = param_2;
  *(undefined **)(iVar4 + 0xa2c450) = &g_AnimLayerJointBuf + iVar3 * 0x1500;
  *(undefined4 *)(iVar4 + 0xa2c454) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x1c) + (int)((longlong)param_2 << 2) + 4);
  *(ushort *)(iVar4 + 0xa2c442) = (ushort)*(byte *)(iVar3 + 3);
  *(uint *)(iVar4 + 0xa2c44c) = iVar3 + (uint)*(byte *)(iVar3 + 1) + 4;
  *(undefined4 *)(iVar4 + 0xa2c45c) = *(undefined4 *)(param_1 + 0x60);
  *(short **)(param_1 + 0x60) = psVar2;
  return psVar2;
}



//==== 000f0900  ns=mobyfunc  size=0x94
// sig: undefined MB_FreeAnimLayer(void)
// callers(4): 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers; 00099ea8 hero::Hero_PlayFiringAnim
// callees(1): 005001fc fastfunc::FastMemSet

void mobyfunc::MB_FreeAnimLayer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x60) == iVar1) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x1c);
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0x1c);
      } while (iVar2 != iVar1 && iVar2 != 0);
      if (iVar2 == iVar1) {
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
    fastfunc::FastMemSet(*param_2,0,0x40);
    *param_2 = 0;
  }
  return;
}



//==== 000f0994  ns=mobyfunc  size=0x194
// sig: undefined MB_InitAnimLayerBuffer(void)
// callers(1): 000f0b38 mobyfunc::MB_UpdateAnimLayer
// callees(3): 00500250 fastfunc::FastMemSetZero; 0050027c fastfunc::FastMemCopy32; 00503244 stub::FlushCache

void mobyfunc::MB_InitAnimLayerBuffer(int param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 uVar12;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 8);
  uVar11 = (uint)bVar1;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x14) + 8);
  iVar7 = (uint)bVar2 * 8;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + (int)(param_2 << 2) + 0x48) +
                   (int)(param_3 << 2) + 0x1c);
  fastfunc::FastMemSetZero(param_4,iVar7 + 0x18U & 0xfff0);
  sVar3 = *(short *)(iVar5 + 10);
  sVar4 = *(short *)(iVar5 + 0xe);
  *(short *)(param_4 + 8) = (short)iVar7;
  *(short *)(param_4 + 10) = sVar3;
  *(short *)(param_4 + 0xe) = sVar4;
  *(ushort *)(param_4 + 0xc) = ((ushort)bVar2 + sVar3) * 8;
  *(short *)(param_4 + 6) = (short)((int)((uint)bVar2 + (int)sVar3 + (int)sVar4 + 1) >> 1);
  iVar8 = *(short *)(iVar5 + 6) * 0x10 + uVar11 * -8;
  if (iVar8 != 0) {
    fastfunc::FastMemCopy32(param_4 + iVar7 + 0x10,iVar5 + uVar11 * 8 + 0x10,iVar8);
  }
  puVar9 = (undefined8 *)(iVar5 + 0x10);
  pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x18) + 0x1c) + 4);
  if (bVar1 != 0) {
    do {
      bVar1 = *pbVar10;
      uVar11 = uVar11 - 1;
      uVar12 = *puVar9;
      pbVar10 = pbVar10 + 1;
      puVar9 = puVar9 + 1;
      *(undefined8 *)(param_4 + (uint)bVar1 * 8 + 0x10) = uVar12;
    } while (0 < (int)uVar11);
  }
  plVar6 = (longlong *)(param_4 + *(short *)(param_4 + 6) * 0x10);
  if (*plVar6 == 0) {
    *plVar6 = 1;
  }
  stub::FlushCache(0);
  return;
}



//==== 000f0b38  ns=mobyfunc  size=0x258
// sig: undefined MB_UpdateAnimLayer(undefined8 param_1, MobyInstance * param_2)
// callers(5): 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers; 000f0d90 mobyfunc::MB_SyncAnimLayer; 000f0dd8 mobyfunc::MB_StartAnimLayer
// callees(2): 000f0994 mobyfunc::MB_InitAnimLayerBuffer; 000fbdac mobyfunc::MB_AnimLayerBlend

void mobyfunc::MB_UpdateAnimLayer(undefined8 param_1,MobyInstance *param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  f32 fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  MobyClass *pMVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  
  bVar12 = 0;
  pvVar3 = param_2->pChain;
  *(undefined1 *)((int)&(param_2->bSphere).y + 1) = 0;
  uVar9 = (ulonglong)(byte)param_2->group;
  cVar1 = *(char *)((int)&(param_2->bSphere).y + 3);
  bVar2 = param_2->alpha;
  fVar4 = (param_2->pos).y;
  if (pvVar3 != (void *)0x0) {
    fVar5 = param_2->scale;
    if (fVar5 != 0.0) {
      pMVar8 = (MobyClass *)((float)pvVar3 * fVar5 + (float)param_2->pClass);
      param_2->pClass = pMVar8;
      if (0 < (int)pvVar3) {
        if ((0.99 < (float)pMVar8) && ((float)pMVar8 < 1.01)) {
          param_2->pClass = (MobyClass *)0x3f800000;
          pMVar8 = (MobyClass *)0x3f800000;
        }
        if (1.0 <= (float)pMVar8) {
          uVar10 = uVar9;
          do {
            *(char *)((int)&(param_2->bSphere).y + 2) = cVar1;
            bVar12 = bVar12 | 1;
            *(byte *)((int)&(param_2->bSphere).y + 1) = bVar12;
            param_2->state = (u8)uVar10;
            if (cVar1 != '\0') {
              param_2->color = param_2->light;
            }
            uVar9 = uVar9 + 1;
            param_2->mClass = bVar2;
            uVar11 = uVar9 & 0xff;
            param_2->group = (s8)uVar9;
            iVar6 = *(int *)((uint)bVar2 * 4 + (int)fVar4 + 0x48);
            if ((uint)*(byte *)(iVar6 + 0x10) <= (uint)uVar11) {
              bVar12 = 3;
              param_2->group = '\0';
              uVar9 = 0;
              uVar11 = 0;
              *(undefined1 *)((int)&(param_2->bSphere).y + 1) = 3;
            }
            pMVar8 = (MobyClass *)(((float)pMVar8 - 1.0) / fVar5);
            pfVar7 = *(float **)(iVar6 + (int)(uVar10 << 2) + 0x1c);
            param_2->pClass = pMVar8;
            fVar5 = *pfVar7;
            pMVar8 = (MobyClass *)((float)pMVar8 * fVar5);
            param_2->scale = fVar5;
            param_2->pClass = pMVar8;
            uVar10 = uVar11;
          } while (1.0 <= (float)pMVar8);
        }
      }
    }
  }
  if (*(char *)((int)&(param_2->bSphere).y + 2) == '\0') {
    param_2->color =
         *(uint *)(*(int *)((int)fVar4 + (uint)param_2->mClass * 4 + 0x48) +
                   (uint)param_2->state * 4 + 0x1c);
  }
  else {
    MB_InitAnimLayerBuffer(param_2,param_2->mClass,param_2->state,param_2->color);
    fVar4 = (param_2->pos).y;
    cVar1 = *(char *)((int)&(param_2->bSphere).y + 3);
    uVar9 = (ulonglong)(byte)param_2->group;
    bVar2 = param_2->alpha;
  }
  if (cVar1 == '\0') {
    param_2->light =
         *(uint *)(*(int *)((int)fVar4 + (uint)bVar2 * 4 + 0x48) +
                   ((uint)((uVar9 & 0xffffffff) << 2) & 0x3fc) + 0x1c);
  }
  else {
    MB_InitAnimLayerBuffer(param_2,bVar2,uVar9 & 0xff,param_2->light);
  }
  MB_AnimLayerBlend(param_2);
  return;
}



//==== 000f0d90  ns=mobyfunc  size=0x40
// sig: undefined MB_SyncAnimLayer(MobyInstance * param_1, undefined4 param_2)
// callers(0): 
// callees(1): 000f0b38 mobyfunc::MB_UpdateAnimLayer

void mobyfunc::MB_SyncAnimLayer(MobyInstance *param_1,MobyInstance *param_2)

{
  param_2->state = param_1->previousAnimationFrame;
  param_2->group = param_1->animationFrame;
  param_2->pClass = (MobyClass *)param_1->animationBlend;
  MB_UpdateAnimLayer((longlong)(int)param_1,param_2);
  return;
}



//==== 000f0dd8  ns=mobyfunc  size=0xd0
// sig: undefined MB_StartAnimLayer(MobyInstance * param_1, undefined8 param_2, undefined1 param_3, undefined1 param_4, undefined4 param_5, undefined4 param_6)
// callers(4): 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 00099d10 hero::Hero_RestartFiringAnimLayer; 00099ea8 hero::Hero_PlayFiringAnim
// callees(1): 000f0b38 mobyfunc::MB_UpdateAnimLayer

void mobyfunc::MB_StartAnimLayer
               (MobyInstance *param_1,undefined8 param_2,s8 param_3,s8 param_4,undefined4 param_5,
               int param_6)

{
  u8 uVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar6 = ZEXT416(0xffffffff);
  auVar4 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6._0_4_ = param_5;
  auVar6._4_4_ = param_5;
  auVar6._8_4_ = param_5;
  auVar6._12_4_ = param_5;
  pMVar3 = (MobyInstance *)param_2;
  pMVar3->mClass = param_1->animationId;
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  uVar1 = param_1->animationFrame;
  pMVar3->pClass = (MobyClass *)0x0;
  pMVar3->state = uVar1;
  pMVar3->alpha = param_3;
  pMVar3->group = param_4;
  pMVar3->pChain = (void *)0x3f800000;
  auVar6 = loadVectorLeftIndexed(0x70,0xf0dd0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = vectorReciprocalEstimateFloatingPoint(auVar5);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar4);
  auVar4 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar9);
  auVar4 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar10);
  uVar2 = storeVectorElementWordIndexed(auVar6,0x2c,param_2);
  *(undefined4 *)((uint)&pMVar3->scale & 0xfffffffc) = uVar2;
  if (param_6 != 0) {
    MB_UpdateAnimLayer((longlong)(int)param_1,pMVar3);
  }
  return;
}



//==== 000f0ea8  ns=mobyfunc  size=0x74
// sig: undefined AttachManipulator(MobyInstance * moby, uint32_t animJoint, undefined4 manipulator)
// callers(106): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0007f608 hero::hero_SetManipulator; 0007fd70 hero::hero_SetEyeManipulator; 000802a0 hero::Hero_UpdateGlowAndBlink; 00090548 hero::???_Hero_UpdateManipulatorSpin; 00095aa8 hero::???_Hero_AddPulsingMobyGlow; 000aa5e0 hero::Hero_UpdateInScene; 00108ef8 mobyutil::MB_Update2LegIK; 00115bd8 mobyutil::MB_TurnHeads; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119a18 mobyfunc::DoManipulator; 0014f828 pause::MenuHero_Update; 00150660 pause::MenuHero_MobyUpdateA; 001509b8 pause::MenuHero_MobyUpdateC; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016bd58 vendor::Vendor_UpdateDude; 00175688 walk::walk_init2LegAnim; 0017aa48 walk::Walk_ResetLegState; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00196ae8 mobyupdate_helpers::Spawn_Moby1044; 001b5398 mobyupdate_helpers::M1075_001b5398; 001bd450 mobyupdate_unsorted::UpdateMoby_11; 001be3c8 mobyupdate_helpers::M1532_001be3c8; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c3370 mobyupdate_helpers::M1106_001c3370
// callees(0): 

void mobyfunc::AttachManipulator(MobyInstance *moby,uint32_t animJoint,Manipulator *manipulator)

{
  byte bVar1;
  int iVar2;
  MobyClass *pclass;
  
  if (manipulator->state == '\0') {
    manipulator->state = '\x01';
    manipulator->animation_bone = (char)animJoint;
    pclass = moby->pClass;
    (manipulator->rotation).w = 1.0;
    (manipulator->scale).x = 1.0;
    (manipulator->scale).y = 1.0;
    (manipulator->scale).z = 1.0;
    iVar2 = *(int *)((int)pclass->anim_joints + (animJoint & 0xff) * 4 + 4);
    bVar1 = *(byte *)(iVar2 + 4 + (uint)*(byte *)(iVar2 + 1));
    manipulator->pNext = moby->pManipulators;
    moby->pManipulators = manipulator;
    manipulator->bone_id = (uint)bVar1 * 0x40 + 0x70000000;
  }
  return;
}



//==== 000f0f1c  ns=mobyfunc  size=0x80
// sig: undefined DetachManipulator(MobyInstance * pMoby, undefined4 pManipulator)
// callers(18): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0007f608 hero::hero_SetManipulator; 0007fa30 hero::Hero_ResetTweakers; 0007fd70 hero::hero_SetEyeManipulator; 000802a0 hero::Hero_UpdateGlowAndBlink; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119a18 mobyfunc::DoManipulator; 0014f828 pause::MenuHero_Update; 00150660 pause::MenuHero_MobyUpdateA; 001509b8 pause::MenuHero_MobyUpdateC; 0016bd58 vendor::Vendor_UpdateDude; 0016da88 vendor::Vendor_PreUpdate; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 00344328 mobyupdate_unsorted::UpdateMoby_329; 00356628 mobyupdate_unsorted::UpdateMoby_375; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(1): 005001fc fastfunc::FastMemSet

void mobyfunc::DetachManipulator(MobyInstance *pMoby,Manipulator *pManipulator)

{
  Manipulator *pMVar1;
  Manipulator *pMVar2;
  
  if (pManipulator != (Manipulator *)0x0) {
    pMVar1 = pMoby->pManipulators;
    if (pMoby->pManipulators == pManipulator) {
      pMoby->pManipulators = pManipulator->pNext;
    }
    else {
      do {
        pMVar2 = pMVar1;
        pMVar1 = pMVar2->pNext;
        if (pMVar1 == (Manipulator *)0x0) break;
      } while (pMVar1 != pManipulator);
      if (pMVar1 == pManipulator) {
        pMVar2->pNext = pManipulator->pNext;
      }
    }
    fastfunc::FastMemSet(pManipulator,0,0x40);
  }
  return;
}



//==== 000f0f9c  ns=mobyfunc  size=0x4c
// sig: int AnimCache_Register(int p)
// callers(3): 00085300 hero::Hero_TransAnim; 000fddc0 mobyutil::MB_SetAnimation; 000fdf80 mobyutil::MB_SetAnimationFrame
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [p2_mobyutil] find/insert in AnimationCacheRegistry[16] */

int mobyfunc::AnimCache_Register(int p)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (((&AnimationCacheRegistry)[iVar1] == 0) || ((&AnimationCacheRegistry)[iVar1] == p)) break;
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return -1;
    }
  }
  (&AnimationCacheRegistry)[iVar1] = p;
  return iVar1;
}



//==== 000f0fe8  ns=mobyfunc  size=0x50
// sig: undefined CleanAnimationCache(void)
// callers(2): 0006bb78 draw::DefaultDraw; 0016114c space::TransitionDraw_Space
// callees(0): 

void mobyfunc::CleanAnimationCache(void)

{
  undefined4 *puVar1;
  int idx;
  MobyInstance *iVar1;
  
  idx = 0;
  puVar1 = &AnimationCacheRegistry;
  do {
    iVar1 = (MobyInstance *)*puVar1;
    if ((iVar1 != (MobyInstance *)0x0) &&
       (((iVar1->state & 0x80) != 0 || (iVar1->updateId != 0xff)))) {
      *puVar1 = 0;
    }
    idx = idx + 1;
    puVar1 = puVar1 + 1;
  } while (idx < 0x10);
  return;
}



//==== 000f1038  ns=mobyfunc  size=0xdc
// sig: undefined GetBoneTransformations(void)
// callers(48): 00080ee0 hero::Hero_AttachRatchetToHeroBone; 0008c3d0 hero::HeroUpdateNonRatchet; 000914e0 hero::Hero_UpdateGadgetMobys; 000aa8c8 hero::???_Hero_SnapMobyToBonePose; 000d9668 initsky::DrawSceneShipEffect; 000fe178 mobyutil::???_Unused_MB_GetBoneAngle; 00102168 mobyutil::MB_UpdateLegAnimState; 00108ef8 mobyutil::MB_Update2LegIK; 00117f38 mobyutil::MB_AttachMobyToJoint; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 001333d8 partupd::UpdatePart_68; 00150660 pause::MenuHero_MobyUpdateA; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC; 00150bf4 pause::MenuHero_MobyUpdateD; 00150d78 pause::MenuHero_MobyUpdateE; 0015fe00 space::ChooseLoadingScreen; 001607c0 space::Space_DrawShipEffects; 00175688 walk::walk_init2LegAnim; 001766d8 walk::Walk_UpdateLegRotations; 0017aa48 walk::Walk_ResetLegState; 0018a840 mobyupdate_helpers::M1023_0018a840; 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241; 00275240 mobyupdate_helpers::M1422_00275240; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(3): 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 00500f6c fastfunc::FastMtxCopyNoTranslate; 0050162c fastfunc::FastVecMtx4Mul

void mobyfunc::GetBoneTransformations(int param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  undefined1 auStack_70 [64];
  undefined1 local_30 [16];
  
  dVar1 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJoints(param_1,1,local_30,param_3);
  *(float *)(param_3 + 0x30) = (float)((double)*(float *)(param_3 + 0x30) * dVar1);
  *(float *)(param_3 + 0x34) = (float)((double)*(float *)(param_3 + 0x34) * dVar1);
  *(float *)(param_3 + 0x38) = (float)((double)*(float *)(param_3 + 0x38) * dVar1);
  fastfunc::FastMtxCopyNoTranslate(auStack_70,param_1 + 0xc0);
  fastfunc::FastVecMtx4Mul(param_3,auStack_70,param_3);
  *(float *)(param_3 + 0x30) = *(float *)(param_3 + 0x30) + *(float *)(param_1 + 0x10);
  *(float *)(param_3 + 0x34) = *(float *)(param_3 + 0x34) + *(float *)(param_1 + 0x14);
  *(float *)(param_3 + 0x38) = *(float *)(param_3 + 0x38) + *(float *)(param_1 + 0x18);
  return;
}



//==== 000f1114  ns=mobyfunc  size=0x124
// sig: undefined GetBonePosition(void)
// callers(270): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00080a08 hero::Hero_PlayFootStep; 0008c3d0 hero::HeroUpdateNonRatchet; 0008f538 hero::Hero_UpdateGadgetGlows; 00094470 hero::???_Hero_UpdateTiltWobbleFx; 00095aa8 hero::???_Hero_AddPulsingMobyGlow; 00097080 hero::Hero_SpawnWaterBubbles; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000aaec0 hero::HandleHeroMovement; 000d9bf8 initsky::SpawnSceneShipParticles; 000d9ee8 initsky::UpdateSpaceSceneEffects; 001059f0 mobyutil::DamageSphereAtBone; 001075b0 mobyutil::MB_AnimBoneCollLines; 00126398 partupd::UpdatePart_20; 00127ea8 partupd::SpawnPart_26; 00128090 partupd::UpdatePart_26; 00128b50 partupd::SpawnPart_29; 00128dc8 partupd::UpdatePart_29; 001300d0 partupd::SpawnPart_55; 00130208 partupd::UpdatePart_55; 001314c8 partupd::SpawnPart_61; 00131730 partupd::UpdatePart_61; 00133280 partupd::SpawnPart_68
// callees(1): 000f9d18 mobyfunc::MB_ComputeSelectedJoints

void mobyfunc::GetBonePosition(int param_1,undefined8 param_2,float *param_3)

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
  double dVar13;
  undefined1 auStack_60 [48];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [8];
  
  dVar13 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJoints(param_1,1,local_20,auStack_60);
  fVar1 = (float)((double)local_30 * dVar13);
  fVar2 = (float)((double)local_2c * dVar13);
  fVar3 = (float)((double)local_28 * dVar13);
  param_3[3] = local_24;
  *param_3 = fVar1;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  fVar4 = *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xd8);
  fVar6 = *(float *)(param_1 + 0xc4);
  fVar7 = *(float *)(param_1 + 0xcc);
  fVar8 = *(float *)(param_1 + 200);
  fVar9 = *(float *)(param_1 + 0xe4);
  fVar10 = *(float *)(param_1 + 0xe8);
  fVar11 = *(float *)(param_1 + 0xec);
  fVar12 = *(float *)(param_1 + 0xdc);
  *param_3 = *(float *)(param_1 + 0xe0) * fVar3 +
             *(float *)(param_1 + 0xc0) * fVar1 + *(float *)(param_1 + 0xd0) * fVar2;
  param_3[1] = fVar9 * fVar3 + fVar6 * fVar1 + fVar4 * fVar2;
  param_3[2] = fVar10 * fVar3 + fVar8 * fVar1 + fVar5 * fVar2;
  param_3[3] = fVar12 * fVar2 + fVar11 * fVar3 + fVar7 * fVar1 + local_24;
  *param_3 = *param_3 + *(float *)(param_1 + 0x10);
  param_3[1] = param_3[1] + *(float *)(param_1 + 0x14);
  param_3[2] = param_3[2] + *(float *)(param_1 + 0x18);
  return;
}



//==== 000f1238  ns=mobyfunc  size=0x12c
// sig: undefined GetMobyJointsWorldPos(void)
// callers(13): 00102168 mobyutil::MB_UpdateLegAnimState; 00108ef8 mobyutil::MB_Update2LegIK; 00172c40 vendor::Vendor_HudUpdate; 00173690 vendor::Vendor_DrawMobyHighlight; 00173b60 vendor::Vendor_DrawScreen; 00175688 walk::walk_init2LegAnim; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState; 001dbdb0 mobyupdate_unsorted::UpdateMoby_1138; 002a94c8 mobyupdate_helpers::M1671_002a94c8; 003516d0 mobyupdate_unsorted::UpdateMoby_347; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(1): 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos

void mobyfunc::GetMobyJointsWorldPos(int param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  dVar7 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJointPos();
  if (0 < param_2) {
    do {
      fVar1 = (float)((double)*param_4 * dVar7);
      fVar2 = (float)((double)param_4[1] * dVar7);
      fVar3 = (float)((double)param_4[2] * dVar7);
      param_2 = param_2 + -1;
      *param_4 = fVar1;
      param_4[1] = fVar2;
      param_4[2] = fVar3;
      fVar6 = *(float *)(param_1 + 0xe0) * fVar3 +
              *(float *)(param_1 + 0xc0) * fVar1 + *(float *)(param_1 + 0xd0) * fVar2;
      fVar5 = *(float *)(param_1 + 0xe4) * fVar3 +
              *(float *)(param_1 + 0xc4) * fVar1 + *(float *)(param_1 + 0xd4) * fVar2;
      fVar4 = *(float *)(param_1 + 0xe8) * fVar3 +
              *(float *)(param_1 + 200) * fVar1 + *(float *)(param_1 + 0xd8) * fVar2;
      fVar2 = *(float *)(param_1 + 0xdc) * fVar2 +
              *(float *)(param_1 + 0xec) * fVar3 + *(float *)(param_1 + 0xcc) * fVar1 + param_4[3];
      *param_4 = fVar6;
      param_4[1] = fVar5;
      param_4[2] = fVar4;
      param_4[3] = fVar2;
      *param_4 = fVar6 + *(float *)(param_1 + 0x10);
      param_4[1] = fVar5 + *(float *)(param_1 + 0x14);
      fVar1 = *(float *)(param_1 + 0x18);
      param_4[3] = fVar2;
      param_4[2] = fVar4 + fVar1;
      param_4 = param_4 + 4;
    } while (0 < param_2);
  }
  return;
}



//==== 000f1364  ns=mobyfunc  size=0xe0
// sig: undefined GetMobyJointsWorldMtx(void)
// callers(4): 00092958 hero::???_Hero_GetJoint9Mtx; 000954c8 hero::HeroUpdate; 000aa448 hero::Hero_UpdateGadgetsInScene; 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(3): 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 00500f6c fastfunc::FastMtxCopyNoTranslate; 0050162c fastfunc::FastVecMtx4Mul

/* [p2_mobyutil] world matrices of listed joints (rot by moby mtx, scale, +pos) */

void mobyfunc::GetMobyJointsWorldMtx(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_70 [72];
  
  dVar2 = (double)*(float *)(param_1 + 0x2c);
  fastfunc::FastMtxCopyNoTranslate(auStack_70,param_1 + 0xc0);
  MB_ComputeSelectedJoints(param_1,param_2,param_3,param_4);
  iVar1 = 0;
  if (0 < (int)param_2) {
    do {
      fastfunc::FastVecMtx4Mul(param_4,auStack_70,param_4);
      iVar1 = iVar1 + 1;
      *(float *)(param_4 + 0x30) =
           (float)((double)*(float *)(param_4 + 0x30) * dVar2 + (double)*(float *)(param_1 + 0x10));
      *(float *)(param_4 + 0x34) =
           (float)((double)*(float *)(param_4 + 0x34) * dVar2 + (double)*(float *)(param_1 + 0x14));
      *(float *)(param_4 + 0x38) =
           (float)((double)*(float *)(param_4 + 0x38) * dVar2 + (double)*(float *)(param_1 + 0x18));
      param_4 = param_4 + 0x40;
    } while (iVar1 < (int)param_2);
  }
  return;
}



//==== 000f1444  ns=stub  size=0x4
// sig: undefined STUB_000f1444(void)
// callers(0): 
// callees(0): 

void stub::STUB_000f1444(void)

{
  return;
}



//==== 000f1448  ns=stub  size=0x4
// sig: undefined STUB_000f1448(void)
// callers(3): 0013ca68 pause::DrawPauseMenu; 0016114c space::TransitionDraw_Space; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_000f1448(void)

{
  return;
}



//==== 000f1478  ns=mobyfunc  size=0x2a4
// sig: undefined UpdateHeroLightAngle(void)
// callers(3): 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene
// callees(1): 000f1f28 mobyfunc::MB_GetLightDirection

void mobyfunc::UpdateHeroLightAngle(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xb0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar12;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  MB_GetLightDirection(g_heroMobyPtr,uVar12 - 0x40);
  fVar2 = ABS(*(float *)(puVar6 + 0xe));
  fVar3 = ABS(*(float *)((int)puVar6 + 0x74));
  *(float *)(puVar6 + 0x10) = fVar2 - fVar3;
  fVar1 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar4 = fVar2;
  if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar4) {
    lVar17 = uVar12 - 0xa0;
    lVar16 = uVar12 - 0x2c;
    lVar15 = uVar12 - 0x1c;
    lVar19 = 2;
    fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x12) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    *(float *)((int)puVar6 + 0x8c) = fVar3;
    *(float *)((int)puVar6 + 0x84) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4;
    *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar3;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x74) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar17 = lVar17 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar17 = uVar12 - 0x2c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = 4;
    lVar15 = lVar17;
    lVar16 = lVar13;
    do {
      fVar3 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar16 + 0x84) = *(float *)((int)lVar16 + 0x84) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    do {
      iVar10 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x84) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
  }
  fVar2 = fVar1 + 1.5707963;
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
  fVar3 = fVar1 * fVar1;
  fVar8 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar9 = fVar2 * fVar8;
  DAT_00a4c4e8 = 0xbf7d70a4;
  fVar7 = fVar3 * fVar4;
  DAT_00a4c4e4 = (fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)
                 * 0.14;
  DAT_00a4c4e0 = (fVar3 * fVar7 * 2.601887e-06 +
                 fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1)
                 * 0.14;
  return;
}



//==== 000f171c  ns=mobyfunc  size=0x128
// sig: undefined DrawMobyShadows(void)
// callers(2): 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys
// callees(3): 0006562c stub::STUB_0006562c; 00152df8 draw::DrawScreenEffect_152df8; 001534fc stub::STUB_001534fc
// strings: 00652dc4: 'moby shadow'

void mobyfunc::DrawMobyShadows(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_00e5aa58;
  if (DAT_00a49f50 == 0) {
    *DAT_00a49f54 = 0;
    DAT_00a49f54[1] = 0;
    DAT_00a49f54[2] = 0;
    DAT_00a49f54[3] = 0;
  }
  else {
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    *DAT_00a49f54 = 0;
    DAT_00a49f54[1] = (char)DAT_00e5aa58;
    DAT_00a49f54[2] = 0;
    DAT_00a49f54[3] = 0;
    stub::STUB_001534fc();
    draw::DrawScreenEffect_152df8(&____oClassInstanceList);
    *DAT_00e5aa58 = 0;
    DAT_00e5aa58[1] = (char)DAT_00a49f54 + '\x10';
    DAT_00e5aa58[2] = 0;
    DAT_00e5aa58[3] = 0;
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    *puVar1 = 0;
    puVar2 = DAT_00e5aa58;
    puVar1[2] = 0;
    puVar1[1] = (char)puVar2;
    puVar1[3] = 0;
    stub::STUB_0006562c("moby shadow",8);
  }
  return;
}



//==== 000f1844  ns=stub  size=0x4
// sig: undefined STUB_000f1844(void)
// callers(2): 0013de20 pause::FrontEnd_DrawMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_000f1844(void)

{
  return;
}



//==== 000f1848  ns=stub  size=0x4
// sig: undefined STUB_000f1848(void)
// callers(2): 0013de20 pause::FrontEnd_DrawMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_000f1848(void)

{
  return;
}



//==== 000f184c  ns=stub  size=0x4
// sig: undefined STUB_000f184c(void)
// callers(3): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_000f184c(void)

{
  return;
}



//==== 000f1850  ns=mobyfunc  size=0xe4
// sig: undefined DrawMobyDepth(void)
// callers(3): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(4): 004d5fe4 idol_draw::DrawDepth; 004eda68 idol_draw::Insert_WaitCmd_Marker; 004fe098 idol::AllocateMemAlign; 00502ea8 idol_draw::PackCmd

void mobyfunc::DrawMobyDepth(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  
  idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,MobyDepth,3);
  pRVar1 = MobyPass;
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,uVar2);
  pRVar1 = HUD_Pass;
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,uVar2);
  g_MobyDrawListEnd = idol::AllocateMemAlign(FrameHeap,0x1e000,0x10);
  g_MobyDrawListStart = g_MobyDrawListEnd;
  DAT_00a49b44 = 0;
  return;
}



//==== 000f1934  ns=mobyfunc  size=0x40
// sig: undefined MB_AddToDrawList(void)
// callers(13): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001454d0 pause::MenuHero_Draw; 00145b8c pause::ItemView_Draw; 00146370 pause::WeaponView_Draw; 00146b14 pause::GoldBoltWidget_Update; 00147044 pause::Update_FoundGBsShipMenu; 00151cc8 pause::GameComplete_Draw; 0016fe20 vendor::DrawVendorDude; 00170490 vendor::DrawWeaponStrings; 001711a8 vendor::Vendor_DrawItemInfo; 00173b60 vendor::Vendor_DrawScreen; 001744f0 vendor::Vendor_PostUpdate
// callees(1): 000f7af0 mobyfunc::MB_BuildDrawEntry

/* [p2_mobyutil] g_MobyDrawListEnd = 0xf7af0(moby, g_MobyDrawListEnd, ...) */

void mobyfunc::MB_AddToDrawList(undefined4 param_1,undefined8 param_2)

{
  g_MobyDrawListEnd = MB_BuildDrawEntry(param_1,g_MobyDrawListEnd,param_2,0);
  return;
}



//==== 000f1974  ns=mobyfunc  size=0x104
// sig: undefined DrawMobyList(void)
// callers(3): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(6): 0006562c stub::STUB_0006562c; 00065630 stub::STUB_00065630; 000f171c mobyfunc::DrawMobyShadows; 000f5a7c stub::STUB_000f5a7c; 000f7a44 mobyfunc::MB_DrawEntryList; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00652dd0: 'moby draw' | 00652de0: 'moby skin'

/* [p2_mobyutil] 'moby draw'/'moby skin' passes: draws draw list g_MobyDrawListStart..End (0xb0
   entries), skinned mobys, writes Forward/Depth passes */

void mobyfunc::DrawMobyList(void)

{
  stub::STUB_00065630("moby draw",3);
  stub::STUB_0006562c("moby draw",5);
  if (debug::g_DebugEnables[10] != 0) {
    MB_DrawEntryList(g_MobyDrawListStart,(g_MobyDrawListEnd - g_MobyDrawListStart) / 0xb0);
    if (DAT_00a49b44 != 0) {
      stub::STUB_000f5a7c();
    }
  }
  stub::STUB_0006562c("moby skin",3);
  if ((debug::g_DebugEnables[10] != 0) && (DAT_00a49f54 != 0)) {
    DrawMobyShadows();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}



//==== 000f1a78  ns=mobyfunc  size=0x1f8
// sig: undefined DrawMobys(void)
// callers(2): 0006bb78 draw::DefaultDraw; 0016114c space::TransitionDraw_Space
// callees(11): 0006562c stub::STUB_0006562c; 00065630 stub::STUB_00065630; 000f171c mobyfunc::DrawMobyShadows; 000f5a7c stub::STUB_000f5a7c; 000f7a44 mobyfunc::MB_DrawEntryList; 000f7af0 mobyfunc::MB_BuildDrawEntry; 004d5fe4 idol_draw::DrawDepth; 004eda68 idol_draw::Insert_WaitCmd_Marker; 004fe098 idol::AllocateMemAlign; 00502ea8 idol_draw::PackCmd; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00652dd0: 'moby draw' | 00652de0: 'moby skin'

void mobyfunc::DrawMobys(void)

{
  RenderingStep *pRVar1;
  undefined8 CMD;
  
  idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,MobyDepth,3);
  pRVar1 = MobyPass;
  CMD = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,CMD);
  pRVar1 = HUD_Pass;
  CMD = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,CMD);
  CMD = idol::AllocateMemAlign(FrameHeap,0x1e000,0x10);
  g_MobyDrawListEnd = (int)CMD;
  DAT_00a49b44 = 0;
  g_MobyDrawListStart = g_MobyDrawListEnd;
  if (debug::g_DebugEnables[10] != 0) {
    g_MobyDrawListEnd = MB_BuildDrawEntry(MobyInstance,CMD,0xffffffffffffffff,1);
  }
  stub::STUB_00065630("moby draw",3);
  stub::STUB_0006562c("moby draw",5);
  if (debug::g_DebugEnables[10] != 0) {
    MB_DrawEntryList(g_MobyDrawListStart,(g_MobyDrawListEnd - g_MobyDrawListStart) / 0xb0);
    if (DAT_00a49b44 != 0) {
      stub::STUB_000f5a7c();
    }
  }
  stub::STUB_0006562c("moby skin",3);
  if ((debug::g_DebugEnables[10] != 0) && (DAT_00a49f54 != 0)) {
    DrawMobyShadows();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}



//==== 000f1c78  ns=mobyfunc  size=0x1d8
// sig: undefined MB_SetLightsFromEnvSample(MobyInstance * param_1)
// callers(1): 000a0c38 hero::Hero_Warp
// callees(2): 000f1ea0 mobyutil::MB_SetLights; 005cd098 libc::printf
// strings: 00652dec: 'TJB - No env sample point found!\n'

float * mobyfunc::MB_SetLightsFromEnvSample(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar5 = -1;
  fVar2 = 999999.0;
  if (0 < DAT_00a4daf4) {
    pfVar6 = DAT_00a4db00;
    do {
      fVar3 = (param_1->pos).y - pfVar6[1];
      fVar1 = (param_1->pos).x - *pfVar6;
      fVar4 = (param_1->pos).z - pfVar6[2];
      fVar1 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
      if (fVar1 < fVar2 && fVar1 <= 8.0) {
        fVar2 = fVar1;
        iVar5 = iVar8;
      }
      iVar8 = iVar8 + 1;
      pfVar6 = pfVar6 + 0xc;
    } while (iVar8 < DAT_00a4daf4);
    if (iVar5 != -1) {
      iVar8 = (int)DAT_00a4db00[iVar5 * 0xc + 6] * 0x10000 +
              (int)DAT_00a4db00[iVar5 * 0xc + 5] * 0x100 + (int)DAT_00a4db00[iVar5 * 0xc + 4];
      param_1->colorManipulator = iVar8;
      mobyutil::MB_SetLights(param_1,iVar8,0,0,0);
      param_1->light = (uint)DAT_00a4db00[iVar5 * 0xc + 7];
      pfVar7 = DAT_00a4db00 + iVar5 * 0xc;
      pfVar6 = pfVar7 + 10;
      if (*(char *)((int)pfVar7 + 0x27) != '\0') {
        DAT_009637c4 = pfVar7[8];
        DAT_009637c8 = *(undefined1 *)(pfVar7 + 9);
        DAT_009637c9 = *(undefined1 *)((int)pfVar7 + 0x25);
        DAT_009637cb = DAT_009637cb | 7;
        DAT_009637ca = *(byte *)((int)pfVar7 + 0x26);
        pfVar7 = (float *)(uint)DAT_009637ca;
      }
      if ((int)*pfVar6 < 0) {
        return pfVar7;
      }
      if (music::g_MusicPlaying.status != 0) {
        return (float *)&DAT_009636c8;
      }
      if (music::g_PendingTrack != -1) {
        return (float *)&DAT_009636c8;
      }
      if (music::g_TransitionState != 0) {
        return (float *)&DAT_009636c8;
      }
      music::g_MusicPlaying.track = SUB42(*pfVar6,0);
      return (float *)&DAT_009636c8;
    }
  }
  pfVar6 = (float *)libc::printf("TJB - No env sample point found!\n");
  return pfVar6;
}



//==== 000f1e50  ns=mobyfunc  size=0x34
// sig: undefined SetLevelFlag(undefined4 arg)
// callers(39): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0018d4ec mobyupdate_helpers::M1302_0018d4ec; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001dd210 mobyupdate_helpers::M1140_001dd210; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 00252140 mobyupdate_unsorted::UpdateMoby_1345; 002563b0 mobyupdate_unsorted::UpdateMoby_1354; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 0032cef0 mobyupdate_unsorted::UpdateMoby_282
// callees(0): 

void mobyfunc::SetLevelFlag(int arg)

{
  if (arg != 0xff) {
    g_LevelFlags[Level][arg] = -1;
  }
  return;
}



//==== 000f1e84  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBYPROC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBYPROC(void)

{
  DAT_0072910c = 0x10000;
  return;
}



//==== 000f1ea0  ns=mobyutil  size=0x28
// sig: undefined MB_SetLights(void)
// callers(17): 0008d7e8 hero::Hero_SetLightsFromMoby; 0008d970 hero::Hero_UpdateColorEffects; 000dcf58 loaders::NAVG_LoadFile; 000f1c78 mobyfunc::MB_SetLightsFromEnvSample; 0013b108 update::OpenPauseMenu; 0013d428 pause::FrontEnd_InitMenu; 0013ebb0 pause::LoadMenuRatchetModel; 00145880 pause::ItemView_Update; 00145d28 pause::WeaponView_Update; 00146984 pause::GoldBoltWidget_SpawnMoby; 0014f1f0 pause::SpawnHeroInMenu?; 0014f828 pause::MenuHero_Update; 001513e8 pause::Spawn_Moby1957_HelpdeskLady; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

/* [p2_mobyutil] packs r,g,b,a into moby+0x38 (DL 'lights' u64)
   [p2_mobyutil] packs light indices/values into moby+0x38 (DL MobyInstance.lights u64) */

void mobyutil::MB_SetLights
               (int param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  *(ulonglong *)(param_1 + 0x38) =
       (longlong)(int)(param_4 << 8) | param_3 | param_2 << 0x20 | (longlong)(int)(param_5 << 0x10);
  return;
}



//==== 000f1ec8  ns=mobyfunc  size=0x28
// sig: undefined SetColorOfMoby(MobyInstance * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// callers(60): 000200b0 mobyupdate_helpers::M458_SpawnRocket; 0008d970 hero::Hero_UpdateColorEffects; 000eb2a8 mobyattack::Spawn_Moby1427_GCShockwave; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0018137c mobyupdate_unsorted::UpdateMoby_100; 00182998 mobyupdate_unsorted::UpdateMoby_1004; 00184670 mobyupdate_helpers::M1009_00184670; 001907f0 mobyupdate_unsorted::UpdateMoby_1031; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 001ac058 mobyupdate_unsorted::UpdateMoby_1060; 001bc0b0 FUN_001bc0b0; 001d4d88 FUN_001d4d88; 001e91a0 mobyupdate_unsorted::UpdateMoby_1167; 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169; 001ffaf0 FUN_001ffaf0; 001fff88 mobyupdate_unsorted::UpdateMoby_1209; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 0020bb70 FUN_0020bb70; 00242738 MB_SpawnBolts; 0026e8f4 mobyupdate_unsorted::UpdateMoby_1405; 0026ee28 mobyupdate_unsorted::UpdateMoby_1406; 0026f358 mobyupdate_unsorted::UpdateMoby_1407; 0026f914 mobyupdate_unsorted::UpdateMoby_1408; 0026fe14 mobyupdate_unsorted::UpdateMoby_1409
// callees(0): 

void mobyfunc::SetColorOfMoby
               (MobyInstance *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1._0_4_ = param_1->color;
  uVar1._4_4_ = param_1->light;
  uVar1 = uVar1 & 0xffffffff | param_2 << 0x20 | param_3 << 0x28 | param_4 << 0x30;
  param_1->color = (int)(uVar1 >> 0x20);
  param_1->light = (int)uVar1;
  return;
}



//==== 000f1ef0  ns=mobyutil  size=0x2c
// sig: undefined MB_GetLights(void)
// callers(12): 0008d970 hero::Hero_UpdateColorEffects; 000b72b0 hero::TransitionMovement; 0010c808 mobyutil::MB_UpdateLightsTransition; 0026e3e0 mobyupdate_helpers::M1405_0026e3e0; 0026e9a0 mobyupdate_helpers::M1406_0026e9a0; 0026eed0 mobyupdate_helpers::M1407_0026eed0; 0026f400 mobyupdate_helpers::M1408_0026f400; 0026f9c0 mobyupdate_helpers::M1409_0026f9c0; 0027ac98 mobyupdate_helpers::M1426_0027ac98; 0029d610 mobyupdate_helpers::M1565_0029d610; 0029db20 mobyupdate_helpers::M1567_0029db20; 004c3a28 mobyupdate_unsorted::UpdateMoby_938
// callees(0): 

/* [p2_mobyutil] unpacks r,g,b from moby+0x38 */

void mobyutil::MB_GetLights(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = (ushort)((ulonglong)uVar2 >> 0x30) & 0xff;
  return;
}



//==== 000f1f28  ns=mobyfunc  size=0xe0
// sig: undefined MB_GetLightDirection(void)
// callers(4): 00081048 hero::Hero_UpdateShadow; 0008d7e8 hero::Hero_SetLightsFromMoby; 0008d970 hero::Hero_UpdateColorEffects; 000f1478 mobyfunc::UpdateHeroLightAngle
// callees(0): 

/* [p2_mobyutil] returns DirectionalLights[idx].direction1 (or blend) from moby lights */

void mobyfunc::MB_GetLightDirection(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x38);
  uVar5 = uVar6 >> 0x10 & 0xffff;
  uVar3 = (uint)(uVar6 >> 8) & 0xff;
  uVar4 = (uint)uVar6 & 0xff;
  if ((int)uVar5 == 0) {
    *param_2 = DirectionalLights[uVar4].direction1.x;
    param_2[1] = DirectionalLights[uVar4].direction1.y;
    param_2[2] = DirectionalLights[uVar4].direction1.z;
    param_2[3] = DirectionalLights[uVar4].direction1.w;
  }
  else {
    fVar1 = (float)uVar5 * 0.003921569;
    fVar2 = 1.0 - fVar1;
    *param_2 = DirectionalLights[uVar4].direction1.x * fVar2 +
               DirectionalLights[uVar3].direction1.x * fVar1;
    param_2[1] = DirectionalLights[uVar4].direction1.y * fVar2 +
                 DirectionalLights[uVar3].direction1.y * fVar1;
    param_2[2] = DirectionalLights[uVar4].direction1.z * fVar2 +
                 DirectionalLights[uVar3].direction1.z * fVar1;
  }
  return;
}



//==== 000f2010  ns=mobyfunc  size=0xdc
// sig: undefined MB_GetLightColor(void)
// callers(2): 0008d7e8 hero::Hero_SetLightsFromMoby; 0008d970 hero::Hero_UpdateColorEffects
// callees(0): 

void mobyfunc::MB_GetLightColor(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x38);
  uVar5 = uVar6 >> 0x10 & 0xffff;
  uVar3 = (uint)uVar6 & 0xff;
  uVar4 = (uint)(uVar6 >> 8) & 0xff;
  if ((int)uVar5 == 0) {
    *param_2 = DirectionalLights[uVar3].color1.x;
    param_2[1] = DirectionalLights[uVar3].color1.y;
    param_2[2] = DirectionalLights[uVar3].color1.z;
    param_2[3] = DirectionalLights[uVar3].color1.w;
  }
  else {
    fVar1 = (float)uVar5 * 0.003921569;
    fVar2 = 1.0 - fVar1;
    *param_2 = DirectionalLights[uVar3].color1.x * fVar2 + DirectionalLights[uVar4].color1.x * fVar1
    ;
    param_2[1] = DirectionalLights[uVar3].color1.y * fVar2 +
                 DirectionalLights[uVar4].color1.y * fVar1;
    param_2[2] = DirectionalLights[uVar3].color1.z * fVar2 +
                 DirectionalLights[uVar4].color1.z * fVar1;
  }
  return;
}



//==== 000f20f0  ns=mobyutil  size=0x60
// sig: undefined MB_BSphereGap(void)
// callers(8): 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002ea970 mobyupdate_unsorted::UpdateMoby_a_lot_5; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00349b38 mobyupdate_unsorted::UpdateMoby_{335_337_338}; 0036cab0 mobyupdate_unsorted::UpdateMoby_426; 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(0): 

/* [p2_mobyutil] (dist(a,b) - (ra+rb)) / 1024 between two bspheres */

double mobyutil::MB_BSphereGap(float *param_1,float *param_2)

{
  return (double)((SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                        (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                        (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])) -
                  (param_1[3] + param_2[3])) * 0.0009765625);
}



//==== 000f2150  ns=mobyfunc  size=0x68
// sig: void MobyGrid_Free(int start, int count)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyfunc::MobyGrid_Free(int start,int count)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = count + start;
  if (start < iVar2) {
    do {
      uVar3 = start + ((start >> 5) + (uint)(start < 0 && (start & 0x1fU) != 0)) * -0x20;
      puVar1 = (uint *)((int)&MobyGridAlloc + (int)((longlong)(start >> 5) << 2));
      start = start + 1;
      *puVar1 = (1 << (uVar3 & 0x3f) ^ 0xffffffffU) & *puVar1;
    } while (start < iVar2);
  }
  return;
}



//==== 000f21b8  ns=mobyfunc  size=0x6c
// sig: int MobyGrid_Alloc(int count)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mobyfunc::MobyGrid_Alloc(int count)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  puVar5 = &MobyGridAlloc;
  do {
    uVar1 = *puVar5;
    if (uVar1 != 0xffffffff) {
      for (uVar3 = 0; uVar2 = (1 << (count & 0x3fU)) + -1 << (uVar3 & 0x3f), (uVar1 & uVar2) != 0;
          uVar3 = count + uVar3) {
      }
      if (uVar3 != 0x20) {
        *puVar5 = uVar1 | uVar2;
        return iVar4 + uVar3;
      }
    }
    iVar4 = iVar4 + 0x20;
    puVar5 = puVar5 + 1;
  } while( true );
}



//==== 000f2224  ns=mobyproc  size=0x198
// sig: undefined FreeMobyGridLists(void)
// callers(1): 000f25f4 mobyproc::UpdateMobyGrids
// callees(0): 

void mobyproc::FreeMobyGridLists(short *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  short sVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  
  sVar9 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 3);
  puVar8 = &MobyGridAlloc;
  for (uVar10 = (uint)sVar9; (int)uVar10 < (int)((uint)bVar1 + (int)sVar9); uVar10 = uVar10 + 1) {
    puVar6 = (uint *)((int)&MobyGridAlloc + (int)((longlong)((int)uVar10 >> 5) << 2));
    *puVar6 = (1 << (uVar10 + (((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0))
                              * -0x20 & 0x3f) ^ 0xffffffffU) & *puVar6;
  }
  bVar1 = *(byte *)((int)param_1 + 3);
  uVar2 = *(undefined1 *)(param_1 + 1);
  uVar4 = ((ulonglong)bVar1 << 0x20) >> 0x21;
  uVar11 = (undefined1)uVar4;
  if (bVar1 >> 1 == 0) {
    sVar9 = *param_1;
    *param_1 = 0;
    *(undefined4 *)((int)&collproc::g_MobyGridLists + (int)((longlong)sVar9 << 5)) = 0;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *(undefined1 *)((int)param_1 + 3) = uVar11;
    return;
  }
  sVar9 = 0;
  do {
    uVar10 = *puVar8;
    if (uVar10 != 0xffffffff) {
      lVar14 = 0;
      while( true ) {
        uVar5 = (1 << (bVar1 >> 1 & 0x3f)) + -1 << ((uint)lVar14 & 0x3f);
        if ((uVar10 & uVar5) == 0) break;
        lVar14 = uVar4 + lVar14;
      }
      if ((uint)lVar14 != 0x20) {
        lVar12 = ((ulonglong)bVar1 & 0x1fe) << 2;
        *puVar8 = uVar10 | uVar5;
        sVar9 = sVar9 + (short)lVar14;
        puVar13 = &collproc::g_MobyGridLists + sVar9 * 8;
        puVar7 = &collproc::g_MobyGridLists + *param_1 * 8;
        if ((int)lVar12 != 0) {
          do {
            lVar12 = lVar12 + -1;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar13 = uVar3;
            puVar13 = puVar13 + 1;
          } while (0 < (int)lVar12);
        }
        *param_1 = sVar9;
        *(undefined1 *)(param_1 + 1) = uVar2;
        *(undefined1 *)((int)param_1 + 3) = uVar11;
        return;
      }
    }
    sVar9 = sVar9 + 0x20;
    puVar8 = puVar8 + 1;
  } while( true );
}



//==== 000f23bc  ns=mobyproc  size=0x18c
// sig: undefined AllocMobyGridLists(void)
// callers(1): 000f25f4 mobyproc::UpdateMobyGrids
// callees(0): 

void mobyproc::AllocMobyGridLists(short *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  short sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar5 = 1;
  if (1 < (uint)*(byte *)((int)param_1 + 3) << 1) {
    uVar5 = (ulonglong)*(byte *)((int)param_1 + 3) << 1;
  }
  puVar6 = &MobyGridAlloc;
  sVar7 = 0;
  do {
    uVar11 = *puVar6;
    if (uVar11 != 0xffffffff) {
      lVar10 = 0;
      while( true ) {
        uVar4 = (1 << ((uint)(uVar5 & 0xff) & 0x3f)) + -1 << ((uint)lVar10 & 0x3f);
        if ((uVar11 & uVar4) == 0) break;
        lVar10 = (uVar5 & 0xff) + lVar10;
      }
      if ((uint)lVar10 != 0x20) {
        *puVar6 = uVar11 | uVar4;
        bVar1 = *(byte *)((int)param_1 + 3);
        sVar7 = sVar7 + (short)lVar10;
        uVar2 = *(undefined1 *)(param_1 + 1);
        if (bVar1 == 0) {
          *param_1 = sVar7;
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(char *)((int)param_1 + 3) = (char)uVar5;
        }
        else {
          sVar3 = *param_1;
          for (uVar11 = (uint)sVar3; (int)uVar11 < (int)((uint)bVar1 + (int)sVar3);
              uVar11 = uVar11 + 1) {
            puVar6 = (uint *)((int)&MobyGridAlloc + (int)((longlong)((int)uVar11 >> 5) << 2));
            *puVar6 = (1 << (uVar11 + (((int)uVar11 >> 5) +
                                      (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) * -0x20 &
                            0x3f) ^ 0xffffffffU) & *puVar6;
          }
          lVar10 = (ulonglong)*(byte *)((int)param_1 + 3) << 3;
          puVar9 = &collproc::g_MobyGridLists + sVar7 * 8;
          puVar8 = &collproc::g_MobyGridLists + *param_1 * 8;
          if ((int)lVar10 != 0) {
            do {
              lVar10 = lVar10 + -1;
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (0 < (int)lVar10);
          }
          *param_1 = sVar7;
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(char *)((int)param_1 + 3) = (char)uVar5;
        }
        return;
      }
    }
    sVar7 = sVar7 + 0x20;
    puVar6 = puVar6 + 1;
  } while( true );
}



//==== 000f2548  ns=mobyfunc  size=0x34
// sig: undefined ByteSwap32(void)
// callers(0): 
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 mobyfunc::ByteSwap32(undefined8 param_1)

{
  undefined4 local_10;
  
  local_10 = CONCAT13((char)param_1,
                      CONCAT12((char)((ulonglong)param_1 >> 8),
                               CONCAT11((char)((ulonglong)param_1 >> 0x10),
                                        (char)((ulonglong)param_1 >> 0x18))));
  return local_10;
}



//==== 000f257c  ns=mobyfunc  size=0x78
// sig: undefined MB_PointInByteRect(void)
// callers(0): 
// callees(0): 

undefined8 mobyfunc::MB_PointInByteRect(char param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  uStack_f = (char)((uint)param_3 >> 0x10);
  uStack_e = (char)((uint)param_3 >> 8);
  uStack_d = (char)param_3;
  if (param_1 < local_10) {
    uVar1 = 0;
  }
  else if (uStack_e < param_1) {
    uVar1 = 0;
  }
  else if (param_2 < uStack_f) {
    uVar1 = 0;
  }
  else if (uStack_d < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000f25f4  ns=mobyproc  size=0x3bc
// sig: undefined UpdateMobyGrids(MobyInstance * moby, undefined4 deletion_stamp)
// callers(5): 000efb38 mobyfunc::DeleteMoby; 000f29b8 mobyproc::PostUpdateMobyBsphere; 003da868 mobyupdate_unsorted::UpdateMoby_611; 0049dc90 mobyupdate_helpers::M871_0049dc90; 0049dda0 mobyupdate_unsorted::UpdateMoby_871
// callees(2): 000f2224 mobyproc::FreeMobyGridLists; 000f23bc mobyproc::AllocMobyGridLists

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void mobyproc::UpdateMobyGrids(MobyInstance *moby,uint deletion_stamp)

{
  byte bVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  char local_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char local_48;
  char local_44;
  uint local_40;
  
  if (deletion_stamp == 0x80807f7f) {
    local_40 = 0x7f7f8080;
    deletion_stamp = local_40;
  }
  puVar13 = &moby->collCount;
  local_44 = (char)*puVar13;
  if ((-1 < local_44) &&
     (bVar1 = *(byte *)((int)&moby->collCount + 1), uVar11 = (uint)bVar1,
     (uint)bVar1 < (byte)moby->collCount + 1)) {
    do {
      uVar10 = (ulonglong)*(byte *)&moby->collCount;
      if ((uint)*(byte *)&moby->collCount < *(byte *)((int)&moby->collCount + 2) + 1) {
        lVar8 = uVar10 << 2;
        do {
          if ((int)uVar10 < (int)local_48) {
            bVar3 = false;
          }
          else if ((int)(char)(deletion_stamp >> 8) < (int)uVar10) {
            bVar3 = false;
          }
          else if ((int)uVar11 < (int)(char)(deletion_stamp >> 0x10)) {
            bVar3 = false;
          }
          else if ((int)(char)deletion_stamp < (int)uVar11) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            iVar4 = (int)lVar8;
            bVar1 = (&collproc::g_MobyGrid[uVar11 * 0x40].count)[iVar4];
            psVar5 = (short *)(&collproc::g_MobyGridLists +
                              *(short *)((int)&collproc::g_MobyGrid[uVar11 * 0x40].listStart + iVar4
                                        ) * 8);
            psVar2 = psVar5;
            do {
              psVar6 = psVar2;
              psVar2 = psVar6 + 1;
            } while ((int)*psVar6 != moby->field72_0xac);
            *psVar6 = psVar5[bVar1 - 1];
            psVar5[bVar1 - 1] = 0;
            bVar1 = (&collproc::g_MobyGrid[uVar11 * 0x40].blocks)[iVar4];
            bVar7 = (&collproc::g_MobyGrid[uVar11 * 0x40].count)[iVar4] - 1;
            (&collproc::g_MobyGrid[uVar11 * 0x40].count)[iVar4] = bVar7;
            if ((bVar7 == 0) || ((int)(uint)bVar7 < (int)((uint)bVar1 * 8 + -4) && bVar1 != 1)) {
              FreeMobyGridLists();
            }
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 4;
        } while ((int)uVar10 < (int)(*(byte *)((int)&moby->collCount + 2) + 1));
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)((byte)moby->collCount + 1));
  }
  uVar11 = *puVar13;
  *puVar13 = deletion_stamp;
  if ((-1 < (char)deletion_stamp) &&
     (bVar1 = *(byte *)((int)&moby->collCount + 1), uVar12 = (uint)bVar1,
     (uint)bVar1 < (byte)moby->collCount + 1)) {
    do {
      uVar10 = (ulonglong)*(byte *)&moby->collCount;
      if ((uint)*(byte *)&moby->collCount < *(byte *)((int)&moby->collCount + 2) + 1) {
        lVar8 = uVar10 << 2;
        do {
          cStack_4e = (char)(uVar11 >> 8);
          cStack_4f = (char)(uVar11 >> 0x10);
          cStack_4d = (char)uVar11;
          if ((int)uVar10 < (int)local_50) {
            bVar3 = false;
          }
          else if ((int)cStack_4e < (int)uVar10) {
            bVar3 = false;
          }
          else if ((int)uVar12 < (int)cStack_4f) {
            bVar3 = false;
          }
          else if ((int)cStack_4d < (int)uVar12) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            uVar9 = ZEXT48(collproc::g_MobyGrid) + lVar8 + ((ulonglong)uVar12 & 0xffffff) * 0x100;
            psVar2 = (short *)uVar9;
            if (((uint)*(byte *)((int)psVar2 + 3) << 4 <= (uint)*(byte *)(psVar2 + 1)) ||
               (*(byte *)((int)psVar2 + 3) == 0)) {
              AllocMobyGridLists(uVar9 & 0xffffffff);
            }
            *(short *)((int)&collproc::g_MobyGridLists +
                      (uint)*(byte *)(psVar2 + 1) * 2 + (int)((longlong)*psVar2 << 5)) =
                 (short)moby->field72_0xac;
            *(char *)(psVar2 + 1) = *(char *)(psVar2 + 1) + '\x01';
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 4;
        } while ((int)uVar10 < (int)(*(byte *)((int)&moby->collCount + 2) + 1));
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)((byte)moby->collCount + 1));
  }
  return;
}



//==== 000f29b8  ns=mobyproc  size=0x6e0
// sig: undefined PostUpdateMobyBsphere(undefined4 moby, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// callers(2): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform
// callees(1): 000f25f4 mobyproc::UpdateMobyGrids

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void mobyproc::PostUpdateMobyBsphere
               (MobyInstance *moby,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  float *pfVar10;
  int iVar11;
  ushort *puVar12;
  uint deletion_stamp;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000070;
  
  uVar20 = ZEXT48(&stack0x00000000);
  bVar1 = moby->updateId;
  if (bVar1 == moby->animationId) {
    if (bVar1 == moby->field44_0x71) {
      fVar2 = (moby->transform).v3.x;
      fVar3 = (moby->transform).v3.y;
      fVar4 = (moby->transform).v3.z;
      fVar5 = (moby->transform).v3.w;
    }
    else {
      moby->field44_0x71 = bVar1;
      pfVar10 = *(float **)(&moby->pClass->type + (uint)bVar1 * 4);
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar5 = pfVar10[3];
      (moby->transform).v3.x = fVar2;
      (moby->transform).v3.y = pfVar10[1];
      (moby->transform).v3.z = pfVar10[2];
      (moby->transform).v3.w = pfVar10[3];
    }
  }
  else {
    if (bVar1 == 0xff) {
      iVar11 = (uint)(byte)moby->previousAnimationFrame * 0x10;
      fVar2 = *(float *)(iVar11 + 0xa34600);
      fVar3 = *(float *)(iVar11 + 0xa34604);
      fVar4 = *(float *)(iVar11 + 0xa34608);
      fVar5 = *(float *)(iVar11 + 0xa3460c);
    }
    else {
      pfVar10 = *(float **)(&moby->pClass->type + (uint)bVar1 * 4);
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar5 = pfVar10[3];
    }
    fVar6 = moby->animationBlend;
    pfVar10 = *(float **)(&moby->pClass->type + (uint)moby->animationId * 4);
    fVar2 = (fVar6 * *pfVar10 + fVar2) - fVar6 * fVar2;
    fVar3 = (fVar6 * pfVar10[1] + fVar3) - fVar6 * fVar3;
    fVar4 = (fVar6 * pfVar10[2] + fVar4) - fVar6 * fVar4;
    fVar5 = (fVar6 * pfVar10[3] + fVar5) - fVar6 * fVar5;
  }
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fStack0000004c = (float)param_4;
  fVar6 = fStack0000004c;
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000054 = (float)param_5;
  fVar7 = fStack00000054;
  uVar18 = param_4;
  lVar19 = param_5;
  if ((moby->modeBits & MIRROR) != NONE) {
    _fStack00000048 = CONCAT44(-fStack00000048,-fStack0000004c);
    _fStack00000050 = (ulonglong)(uint)-fStack00000050 << 0x20;
    uVar18 = _fStack00000048;
    lVar19 = _fStack00000050;
  }
  _fStack00000050 = lVar19;
  _fStack00000048 = uVar18;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack0000003c = (float)param_2;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  (moby->transform).v0.x = fStack00000038;
  (moby->transform).v0.y = fStack0000003c;
  (moby->transform).v0.z = fStack00000040;
  (moby->transform).v0.w = fStack00000044;
  (moby->transform).v1.x = fStack00000048;
  (moby->transform).v1.y = fVar6;
  (moby->transform).v1.z = fStack00000050;
  (moby->transform).v1.w = fVar7;
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fStack0000005c = (float)param_6;
  fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
  fStack00000064 = (float)param_7;
  (moby->transform).v2.x = fStack00000058;
  (moby->transform).v2.y = fStack0000005c;
  (moby->transform).v2.z = fStack00000060;
  (moby->transform).v2.w = fStack00000064;
  fVar6 = moby->scale;
  fVar2 = fVar2 * fVar6;
  fVar3 = fVar3 * fVar6;
  fVar4 = fVar4 * fVar6;
  fVar7 = (moby->pos).x;
  fVar8 = (moby->pos).y;
  fStack00000068 = (float)((ulonglong)param_8 >> 0x20);
  fVar9 = (moby->pos).z;
  fStack0000006c = (float)param_8;
  (moby->bSphere).rad = fVar5 * fVar6;
  iVar11 = moby->field71_0xa8;
  (moby->bSphere).x =
       fStack00000038 * fVar2 + fStack00000048 * fVar3 + fStack00000058 * fVar4 + fStack00000068 +
       fVar7 * 1024.0;
  (moby->bSphere).y =
       fStack0000003c * fVar2 + fStack0000004c * fVar3 + fStack0000005c * fVar4 + fStack0000006c +
       fVar8 * 1024.0;
  puVar12 = moby->collision;
  (moby->bSphere).z =
       fStack00000040 * fVar2 + fStack00000050 * fVar3 + fStack00000060 * fVar4 + in_stack_00000070
       + fVar9 * 1024.0;
  moby->field71_0xa8 = iVar11 + 1;
  if (puVar12 != (ushort *)0x0) {
    auVar14 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar15 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
              (undefined1  [16])0xff;
    uVar13 = storeVectorElementByteIndexed
                       (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 | auVar14 << 0x20
                        | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 | auVar14 << 0x40 |
                        auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 | auVar14 << 0x60 |
                        auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0,uVar20 - 0x80);
    puVar21 = (uint *)(uVar20 - 0x80);
    *(undefined1 *)puVar21 = uVar13;
    auVar17 = (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar14 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
              (undefined1  [16])0xff;
    auVar15 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
              (undefined1  [16])0xff;
    auVar16 = (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60) >> 0x60 &
              (undefined1  [16])0xff;
    uVar13 = storeVectorElementByteIndexed
                       (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 | auVar14 << 0x20
                        | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 | auVar14 << 0x40 |
                        auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 | auVar14 << 0x60 |
                        auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0,uVar20 - 0x7f);
    *(undefined1 *)(uVar20 - 0x7f) = uVar13;
    uVar13 = storeVectorElementByteIndexed
                       (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 | auVar15 << 0x20
                        | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 | auVar15 << 0x40 |
                        auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 | auVar15 << 0x60 |
                        auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0,uVar20 - 0x7e);
    *(undefined1 *)(uVar20 - 0x7e) = uVar13;
    uVar13 = storeVectorElementByteIndexed
                       (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 | auVar16 << 0x20
                        | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 | auVar16 << 0x40 |
                        auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 | auVar16 << 0x60 |
                        auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,0,uVar20 - 0x7d);
    *(undefined1 *)(uVar20 - 0x7d) = uVar13;
    deletion_stamp = *puVar21;
    if ((moby->collCount != deletion_stamp) && ((deletion_stamp & 0xc0c00000) == 0)) {
      _fStack00000038 = param_2;
      _fStack00000040 = param_3;
      _fStack00000048 = param_4;
      _fStack00000050 = param_5;
      _fStack00000058 = param_6;
      _fStack00000060 = param_7;
      _fStack00000068 = param_8;
      UpdateMobyGrids(moby,deletion_stamp);
    }
  }
  return;
}



//==== 000f30a0  ns=mobyfunc  size=0xfc
// sig: undefined PostUpdateMobyLockTransform(MobyInstance * pMoby)
// callers(31): 000914e0 hero::Hero_UpdateGadgetMobys; 000aa8c8 hero::???_Hero_SnapMobyToBonePose; 00117f38 mobyutil::MB_AttachMobyToJoint; 00150660 pause::MenuHero_MobyUpdateA; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC; 00150bf4 pause::MenuHero_MobyUpdateD; 00150d78 pause::MenuHero_MobyUpdateE; 00150e88 pause::MenuHero_MobyUpdateF; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002a3ee0 mobyupdate_unsorted::UpdateMoby_161; 002aeb68 mobyupdate_helpers::M172_002aeb68; 002b9870 FUN_002b9870; 002b9950 mobyupdate_unsorted::UpdateMoby_179; 002ed298 mobyupdate_unsorted::UpdateMoby_209; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0032f620 mobyupdate_helpers::M291_0032f620; 0036cab0 mobyupdate_unsorted::UpdateMoby_426; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 003728b8 mobyupdate_unsorted::UpdateMoby_{432_1052}; 003968d8 mobyupdate_unsorted::UpdateMoby_a_lot_3; 0040dfd8 mobyupdate_unsorted::UpdateMoby_672
// callees(1): 000f29b8 mobyproc::PostUpdateMobyBsphere

void mobyfunc::PostUpdateMobyLockTransform(MobyInstance *pMoby)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (-1 < (char)pMoby->state) {
    uVar1._0_4_ = (pMoby->transform).v0.x;
    uVar1._4_4_ = (pMoby->transform).v0.y;
    uVar2._0_4_ = (pMoby->transform).v0.z;
    uVar2._4_4_ = (pMoby->transform).v0.w;
    uVar3._0_4_ = (pMoby->transform).v1.x;
    uVar3._4_4_ = (pMoby->transform).v1.y;
    uVar4._0_4_ = (pMoby->transform).v1.z;
    uVar4._4_4_ = (pMoby->transform).v1.w;
    uVar5._0_4_ = (pMoby->transform).v2.x;
    uVar5._4_4_ = (pMoby->transform).v2.y;
    uVar6._0_4_ = (pMoby->transform).v2.z;
    uVar6._4_4_ = (pMoby->transform).v2.w;
    mobyproc::PostUpdateMobyBsphere(pMoby,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  return;
}



//==== 000f31a8  ns=mobyfunc  size=0x340
// sig: undefined UpdateMobyTransform(MobyInstance * param_1)
// callers(261): 00011020 boot::FrontEnd_Update; 00017b78 mobyupdate_helpers::M1274_00017b78; 0001b100 mobyupdate_helpers::M184_0001b100; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001f240 mobyupdate_helpers::M409_0001f240; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00062590 debug::UpdateDebugCamera; 0007d6d0 hero::Hero_MapToMoby; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 00081e38 hero::Hero_MapToMobyNonRatchet; 00087a88 hero::Hero_UpdateTimers; 0008c3d0 hero::HeroUpdateNonRatchet; 000914e0 hero::Hero_UpdateGadgetMobys; 000aaec0 hero::HandleHeroMovement; 000dcf58 loaders::NAVG_LoadFile; 000ed3e0 mobyattack::Spawn_Moby256_Rocket; 000fc024 mobyfunc::UpdateMobysInitial; 000fc168 mobyfunc::UpdateMobys; 000fc238 mobyfunc::UpdateMobysDebug; 00115560 mobyutil::UpdateMotionBlur; 00116eb8 mobyutil::MB_UpdateChildMobys; 00117f38 mobyutil::MB_AttachMobyToJoint; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0013b108 update::OpenPauseMenu
// callees(2): 000f29b8 mobyproc::PostUpdateMobyBsphere; 005dd914 mathfunc::SinCos

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void mobyfunc::UpdateMobyTransform(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = param_1->state;
  if (-1 < (char)uVar1) {
    if ((param_1->modeBits & LOCK_ROTATION) == NONE) {
      dVar12 = (double)(param_1->rotation).x;
      dVar10 = (double)(param_1->rotation).y;
      dVar9 = (double)(param_1->rotation).z;
      uVar7 = mathfunc::SinCos(dVar12,uVar1,0);
      dVar8 = extraout_f1;
      uVar7 = mathfunc::SinCos(dVar12,uVar7,1);
      dVar13 = extraout_f1_00;
      uVar7 = mathfunc::SinCos(dVar10,uVar7,0);
      dVar12 = extraout_f1_01;
      uVar7 = mathfunc::SinCos(dVar10,uVar7,1);
      dVar11 = extraout_f1_02;
      uVar7 = mathfunc::SinCos(dVar9,uVar7,0);
      dVar10 = extraout_f1_03;
      dVar9 = (double)mathfunc::SinCos(dVar9,uVar7,1);
      mobyproc::PostUpdateMobyBsphere
                (param_1,CONCAT44((float)(dVar11 * dVar9),(float)(dVar11 * dVar10)),
                 (ulonglong)(uint)(float)-dVar12 << 0x20,
                 CONCAT44((float)(dVar8 * (double)(float)(dVar9 * dVar12)) -
                          (float)(dVar13 * dVar10),
                          (float)(dVar8 * (double)(float)(dVar12 * dVar10)) +
                          (float)(dVar13 * dVar9)),(ulonglong)(uint)(float)(dVar11 * dVar8) << 0x20,
                 CONCAT44((float)(dVar13 * (double)(float)(dVar9 * dVar12)) +
                          (float)(dVar8 * dVar10),
                          (float)(dVar13 * (double)(float)(dVar12 * dVar10)) -
                          (float)(dVar9 * dVar8)),(ulonglong)(uint)(float)(dVar13 * dVar11) << 0x20,
                 0);
    }
    else if (-1 < (char)uVar1) {
      uVar7._0_4_ = (param_1->transform).v0.x;
      uVar7._4_4_ = (param_1->transform).v0.y;
      uVar2._0_4_ = (param_1->transform).v0.z;
      uVar2._4_4_ = (param_1->transform).v0.w;
      uVar3._0_4_ = (param_1->transform).v1.x;
      uVar3._4_4_ = (param_1->transform).v1.y;
      uVar4._0_4_ = (param_1->transform).v1.z;
      uVar4._4_4_ = (param_1->transform).v1.w;
      uVar5._0_4_ = (param_1->transform).v2.x;
      uVar5._4_4_ = (param_1->transform).v2.y;
      uVar6._0_4_ = (param_1->transform).v2.z;
      uVar6._4_4_ = (param_1->transform).v2.w;
      mobyproc::PostUpdateMobyBsphere(param_1,uVar7,uVar2,uVar3,uVar4,uVar5,uVar6,0);
    }
  }
  return;
}



//==== 000f34e8  ns=mobyfunc  size=0x11c
// sig: undefined MB_TransformJointBatch(void)
// callers(4): 000f595c mobyfunc::Moby_BuildJointMatrices; 000f9c58 mobyfunc::MB_ProcessJoints; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos
// callees(2): 0050162c fastfunc::FastVecMtx4Mul; 00502238 fastfunc::FastVecMtx4MultBatch4VMX

undefined * mobyfunc::MB_TransformJointBatch(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = 0;
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      if (*param_3 != '\0') {
        fastfunc::FastVecMtx4MultBatch4VMX(param_1,param_1 + 0x10,param_1 + 0x20,&local_70);
        if (*(uint *)(param_1 + 0x2c) == 0) {
          *(undefined4 *)(iVar2 + 0xa4db4c) = uStack_64;
          *(undefined4 *)(iVar2 + 0xa4db48) = uStack_68;
          *(undefined4 *)(iVar2 + 0xa4db44) = uStack_6c;
          *(undefined4 *)(&DAT_00a4db40 + iVar2) = local_70;
          *(undefined4 *)(iVar2 + 0xa4db5c) = uStack_54;
          *(undefined4 *)(iVar2 + 0xa4db58) = uStack_58;
          *(undefined4 *)(iVar2 + 0xa4db54) = uStack_5c;
          *(undefined4 *)(&DAT_00a4db50 + iVar2) = local_60;
          *(undefined4 *)(iVar2 + 0xa4db6c) = uStack_44;
          *(undefined4 *)(iVar2 + 0xa4db68) = uStack_48;
          *(undefined4 *)(iVar2 + 0xa4db64) = uStack_4c;
          *(undefined4 *)(&DAT_00a4db60 + iVar2) = local_50;
          *(undefined4 *)(iVar2 + 0xa4db7c) = uStack_34;
          *(undefined4 *)(iVar2 + 0xa4db78) = uStack_38;
          *(undefined4 *)(iVar2 + 0xa4db74) = uStack_3c;
          *(undefined4 *)(&DAT_00a4db70 + iVar2) = local_40;
        }
        else {
          fastfunc::FastVecMtx4Mul
                    (&DAT_00a4db40 + iVar2,&DAT_00a4db40 + (*(uint *)(param_1 + 0x2c) & 0xfffffc0),
                     &local_70);
        }
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x40;
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < param_2);
  }
  return &DAT_00a4db40;
}



//==== 000f3618  ns=mobyfunc  size=0x508
// sig: undefined ProcessManipulators(Manipulator * param_1, undefined4 param_2)
// callers(8): 000f5824 mobyfunc::MB_ComputeAnimDirect; 000f58d8 mobyfunc::ComputeAnimation; 000f595c mobyfunc::Moby_BuildJointMatrices; 000f5b80 mobyfunc::MB_DrawEntries; 000f9c58 mobyfunc::MB_ProcessJoints; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos; 000fa940 mobyfunc::InterpolateAnimation
// callees(2): 005023bc fastfunc::FastVecScale; 005023f0 fastfunc::FastVecAdd

void mobyfunc::ProcessManipulators(Manipulator *param_1,int param_2)

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
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  if (param_1 != (Manipulator *)0x0) {
    do {
      pfVar9 = (float *)(param_2 + (param_1->bone_id & 0xfffffc0U));
      fVar1 = *pfVar9;
      fVar2 = pfVar9[1];
      fVar3 = pfVar9[2];
      fVar4 = pfVar9[3];
      dVar11 = (double)pfVar9[4];
      dVar12 = (double)pfVar9[5];
      dVar13 = (double)pfVar9[6];
      dVar14 = (double)pfVar9[8];
      dVar15 = (double)pfVar9[9];
      dVar16 = (double)pfVar9[10];
      fVar5 = (param_1->rotation).x;
      fVar6 = (param_1->rotation).y;
      fVar7 = (param_1->rotation).z;
      fVar8 = (param_1->rotation).w;
      dVar17 = (double)(param_1->scale).x;
      dVar18 = (double)(param_1->scale).y;
      dVar19 = (double)(param_1->scale).z;
      fastfunc::FastVecScale(0x3f50000000000000,&local_170,&param_1->translation);
      if (param_1->absolute == '\0') {
        pfVar9[4] = (float)(dVar11 * dVar17);
        pfVar9[5] = (float)(dVar12 * dVar18);
        pfVar9[6] = (float)(dVar13 * dVar19);
        pfVar9[8] = (float)(dVar14 + (double)local_170);
        pfVar9[9] = (float)(dVar15 + (double)local_16c);
        pfVar9[10] = (float)(dVar16 + (double)local_168);
        pfVar9[3] = fVar4 * fVar8 - (fVar1 * fVar5 + fVar2 * fVar6 + fVar3 * fVar7);
        *pfVar9 = fVar1 * fVar8 + fVar5 * fVar4 + (fVar6 * fVar3 - fVar2 * fVar7);
        pfVar9[1] = fVar2 * fVar8 + fVar6 * fVar4 + (fVar7 * fVar1 - fVar3 * fVar5);
        pfVar9[2] = fVar3 * fVar8 + fVar7 * fVar4 + (fVar5 * fVar2 - fVar1 * fVar6);
      }
      else {
        dVar20 = (double)param_1->animation_blend_t;
        dVar21 = 1.0;
        dVar23 = 0.0;
        dVar22 = (double)(float)(1.0 - dVar20);
        if (0.0 <= fVar5 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + fVar8 * fVar4) {
          fastfunc::FastVecScale(dVar20,local_c0,local_180);
          fastfunc::FastVecScale(dVar22,local_b0,local_190);
          fastfunc::FastVecAdd(&local_d0,local_f0,local_e0);
          local_160 = local_d0;
          local_15c = local_cc;
          local_158 = local_c8;
          local_154 = local_c4;
        }
        else {
          fastfunc::FastVecScale(0xbff0000000000000,auStack_130,local_190);
          fastfunc::FastVecScale(dVar20,local_110,local_180);
          fastfunc::FastVecScale(dVar22,local_100,auStack_130);
          fastfunc::FastVecAdd(&local_120,local_150,local_140);
          local_160 = local_120;
          local_15c = local_11c;
          local_158 = local_118;
          local_154 = local_114;
        }
        dVar10 = (double)(local_160 * local_160 + local_15c * local_15c + local_158 * local_158 +
                         local_154 * local_154);
        if (dVar10 <= dVar23) {
          *pfVar9 = local_160;
          pfVar9[1] = local_15c;
          pfVar9[2] = local_158;
          pfVar9[3] = local_154;
        }
        else {
          fastfunc::FastVecScale
                    ((double)(float)(dVar21 / (double)(float)SQRT(dVar10)),&local_a0,&local_160);
          *pfVar9 = local_a0;
          pfVar9[1] = local_9c;
          pfVar9[2] = local_98;
          pfVar9[3] = local_94;
        }
        pfVar9[4] = (float)(dVar20 * dVar17) + (float)(dVar22 * dVar11);
        pfVar9[5] = (float)(dVar20 * dVar18) + (float)(dVar22 * dVar12);
        pfVar9[6] = (float)(dVar20 * dVar19) + (float)(dVar22 * dVar13);
        pfVar9[8] = (float)((double)local_170 * dVar20) + (float)(dVar22 * dVar14);
        pfVar9[9] = (float)((double)local_16c * dVar20) + (float)(dVar22 * dVar15);
        pfVar9[10] = (float)((double)local_168 * dVar20) + (float)(dVar22 * dVar16);
      }
      param_1 = param_1->pNext;
    } while (param_1 != (Manipulator *)0x0);
  }
  return;
}



//==== 000f3b30  ns=mobyfunc  size=0x464
// sig: undefined ProcessAnimLayers(MobyAnimLayer * pAnimLayer, undefined4 param_2)
// callers(8): 000f5824 mobyfunc::MB_ComputeAnimDirect; 000f58d8 mobyfunc::ComputeAnimation; 000f595c mobyfunc::Moby_BuildJointMatrices; 000f5b80 mobyfunc::MB_DrawEntries; 000f9c58 mobyfunc::MB_ProcessJoints; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos; 000fa940 mobyfunc::InterpolateAnimation
// callees(2): 005023bc fastfunc::FastVecScale; 005023f0 fastfunc::FastVecAdd

void mobyfunc::ProcessAnimLayers(MobyAnimLayer *pAnimLayer,int param_2)

{
  float *pfVar1;
  uint uVar2;
  MobyAnimLayer *pMVar3;
  uint uVar4;
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  
  if (pAnimLayer != (MobyAnimLayer *)0x0) {
    do {
      uVar2 = 0;
      dVar20 = 1.0;
      pMVar3 = pAnimLayer->nextLayer;
      uVar4 = (uint)*(short *)((int)&pAnimLayer->animSeq + 2);
      dVar21 = (double)pAnimLayer->animSpeed;
      dVar19 = (double)(float)(1.0 - dVar21);
      if (uVar4 != 0) {
        do {
          pfVar1 = (float *)(param_2 + *(int *)&pMVar3[1].animIScale * 0x40);
          dVar18 = (double)(float)pMVar3->nextLayer;
          dVar17 = (double)*(float *)&pMVar3->animSeqId;
          dVar16 = (double)pMVar3->blendWeight;
          dVar15 = (double)(float)pMVar3[1].animSeq;
          dVar14 = (double)pMVar3[1].animSeqT;
          dVar13 = (double)pMVar3[1].animSpeed;
          dVar6 = 0.0;
          dVar12 = (double)pfVar1[4];
          dVar11 = (double)pfVar1[5];
          dVar10 = (double)pfVar1[6];
          dVar9 = (double)pfVar1[8];
          dVar8 = (double)pfVar1[9];
          dVar7 = (double)pfVar1[10];
          if (0.0 <= (float)pMVar3->animSeq * *pfVar1 + pMVar3->animSeqT * pfVar1[1] +
                     pMVar3->animSpeed * pfVar1[2] + *(float *)&pMVar3->animIScale * pfVar1[3]) {
            fastfunc::FastVecScale(dVar21,local_100,local_1c0);
            fastfunc::FastVecScale(dVar19,local_f0,local_1b0);
            fastfunc::FastVecAdd(&local_110,local_130,local_120);
            local_1a0 = local_110;
            local_19c = local_10c;
            local_198 = local_108;
            local_194 = local_104;
          }
          else {
            fastfunc::FastVecScale(0xbff0000000000000,auStack_170,local_1b0);
            fastfunc::FastVecScale(dVar21,local_150,local_1c0);
            fastfunc::FastVecScale(dVar19,local_140,auStack_170);
            fastfunc::FastVecAdd(&local_160,local_190,local_180);
            local_1a0 = local_160;
            local_19c = local_15c;
            local_198 = local_158;
            local_194 = local_154;
          }
          dVar5 = (double)(local_1a0 * local_1a0 + local_19c * local_19c + local_198 * local_198 +
                          local_194 * local_194);
          if (dVar5 <= dVar6) {
            *pfVar1 = local_1a0;
            pfVar1[1] = local_19c;
            pfVar1[2] = local_198;
            pfVar1[3] = local_194;
          }
          else {
            fastfunc::FastVecScale
                      ((double)(float)(dVar20 / (double)(float)SQRT(dVar5)),&local_e0,&local_1a0);
            *pfVar1 = local_e0;
            pfVar1[1] = local_dc;
            pfVar1[2] = local_d8;
            pfVar1[3] = local_d4;
          }
          pfVar1[4] = (float)(dVar18 * dVar21) + (float)(dVar19 * dVar12);
          pfVar1[5] = (float)(dVar17 * dVar21) + (float)(dVar19 * dVar11);
          pfVar1[6] = (float)(dVar16 * dVar21) + (float)(dVar19 * dVar10);
          pfVar1[8] = (float)(dVar15 * dVar21) + (float)(dVar19 * dVar9);
          pfVar1[9] = (float)(dVar14 * dVar21) + (float)(dVar19 * dVar8);
          pfVar1[10] = (float)(dVar13 * dVar21) + (float)(dVar19 * dVar7);
          if (pfVar1[7] != 0.0) {
            pfVar1[7] = pMVar3->blendFade;
          }
          uVar2 = uVar2 + 1;
          pMVar3 = (MobyAnimLayer *)&pMVar3[1].nextLayer;
        } while (uVar2 < uVar4);
      }
      pAnimLayer = (MobyAnimLayer *)pAnimLayer->blendFade;
    } while (pAnimLayer != (MobyAnimLayer *)0x0);
  }
  return;
}



//==== 000f3fe0  ns=mobyfunc  size=0x1844
// sig: undefined MB_BlendJointFrames(void)
// callers(8): 000f5824 mobyfunc::MB_ComputeAnimDirect; 000f58d8 mobyfunc::ComputeAnimation; 000f595c mobyfunc::Moby_BuildJointMatrices; 000f9c58 mobyfunc::MB_ProcessJoints; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000f9fc0 mobyfunc::MB_ComputeSelectedJointPos; 000fa940 mobyfunc::InterpolateAnimation; 000fbdac mobyfunc::MB_AnimLayerBlend
// callees(2): 005023bc fastfunc::FastVecScale; 005023f0 fastfunc::FastVecAdd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] core anim joint interpolation used by
   ComputeAnimation/BuildJointMatrices/InterpolateAnimation */

undefined4 *
mobyfunc::MB_BlendJointFrames
          (double param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar27;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar29;
  ulonglong uVar28;
  ulonglong unaff_r25;
  longlong lVar30;
  ushort *puVar31;
  ulonglong unaff_r26;
  int iVar32;
  short *psVar33;
  float *pfVar34;
  ulonglong unaff_r27;
  int iVar36;
  ulonglong uVar35;
  undefined4 *puVar37;
  ulonglong unaff_r28;
  int iVar38;
  short *psVar39;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int aiStack_10a4 [1065];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar30 = uVar16 - 0x1220;
  puVar8 = (ulonglong *)lVar30;
  *puVar8 = uVar16;
  puVar8[0x246] = in_LR;
  puVar8[0x240] = in_f28;
  puVar8[0x241] = in_f29;
  puVar8[0x242] = in_f30;
  puVar8[0x243] = in_f31;
  puVar8[0x23d] = unaff_r29;
  puVar8[0x23f] = unaff_r31;
  puVar8[0x23e] = unaff_r30;
  lVar17 = uVar16 - 0x10c0;
  puVar8[0x23c] = unaff_r28;
  puVar8[0x23b] = unaff_r27;
  puVar8[0x23a] = unaff_r26;
  puVar8[0x239] = unaff_r25;
  puVar8[0x238] = unaff_r24;
  puVar8[0x237] = unaff_r23;
  puVar8[0x236] = unaff_r22;
  puVar8[0x235] = unaff_r21;
  puVar8[0x234] = unaff_r20;
  pfVar34 = (float *)&DAT_00a4fb80;
  if (param_2 != 0) {
    dVar43 = 1.0;
    fVar1 = (float)(1.0 - param_1);
    dVar42 = (double)fVar1;
    uVar18 = 0;
    uVar20 = 0;
    *(float *)(puVar8 + 0x230) = fVar1;
    *(float *)((int)puVar8 + 0x1184) = fVar1;
    *(float *)(puVar8 + 0x231) = fVar1;
    *(float *)((int)puVar8 + 0x118c) = fVar1;
    auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    uVar22 = 0;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    uVar24 = 0;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    uVar23 = 0;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar47 = loadVectorLeftIndexed(0x1180,0xf3fa0);
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    *(float *)(puVar8 + 0x230) = (float)param_1;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    *(float *)((int)puVar8 + 0x1184) = (float)param_1;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    *(float *)(puVar8 + 0x231) = (float)param_1;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    *(float *)((int)puVar8 + 0x118c) = (float)param_1;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar46 = *(undefined1 (*) [16])(puVar8 + 0x230);
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar47 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = ZEXT416(0);
    auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar45 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    if (param_2 != 0) {
      iVar38 = 0;
      iVar36 = 0;
      iVar32 = 0;
      iVar29 = 0;
      do {
        iVar27 = iVar32 + 1;
        *(undefined1 (*) [16])((int)&DAT_00a4fb80 + iVar38) = auVar48;
        (&DAT_00a4fb8c)[iVar27 * 4] = 0;
        (&DAT_00a4fb88)[iVar27 * 4] = 0x3f800000;
        (&DAT_00a4fb84)[iVar27 * 4] = 0x3f800000;
        (&DAT_00a4fb80)[iVar27 * 4] = 0x3f800000;
        uVar23 = uVar23 + 1;
        auVar47 = *(undefined1 (*) [16])(iVar36 + param_4 & 0xfffffff0);
        *(undefined1 (*) [16])(&DAT_00a4fb80 + (iVar32 + 2) * 4) = auVar47;
        auVar47 = vectorConditionalSelect(auVar47,auVar44,_DAT_000f3fc0);
        iVar38 = iVar38 + 0x40;
        *(undefined1 (*) [16])((int)lVar30 + 0x160) = auVar48;
        iVar36 = iVar36 + 0x10;
        *(undefined1 (*) [16])(&DAT_00a4fb80 + (iVar32 + 3) * 4) = auVar47;
        iVar32 = iVar32 + 4;
        *(undefined1 (*) [16])(puVar8 + (iVar29 + 1) * 2 + 0x2c) = auVar48;
        lVar30 = lVar30 + 0x20;
        iVar29 = iVar29 + 2;
      } while (uVar23 < param_2);
    }
    uVar23 = 0;
    lVar30 = 0;
    puVar31 = (ushort *)(param_5 + (uint)*(ushort *)(param_5 + 8) + 0x10);
    uVar26 = uVar18;
    lVar25 = lVar30;
    if (*(short *)(param_5 + 10) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)((uint)*puVar31 << 3);
        uVar5 = puVar31[2];
        uVar18 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)((uint)puVar31[1] << 3);
        fVar1 = (float)(longlong)uVar18 * 3.0517578e-05;
        uVar18 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)((uint)uVar5 << 3);
        auVar47 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)uVar18 * 3.0517578e-05;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar18 = (ulonglong)*(byte *)(puVar31 + 3);
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar35 = ZEXT48(&DAT_00a4fb80) + uVar18 * 0x40;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        if (*(char *)((int)puVar31 + 7) < '\0') {
          puVar37 = (undefined4 *)uVar35;
          uVar19 = uVar35;
          if ((int)uVar22 != 0) {
            *(undefined4 **)((int)uVar20 + 0xc) = puVar37;
            uVar19 = uVar22;
          }
          auVar48 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,uVar35)
          ;
          *puVar37 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,4,uVar35)
          ;
          puVar37[1] = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar35)
          ;
          puVar37[2] = uVar7;
          puVar37[7] = 1;
          uVar18 = uVar26;
          uVar20 = uVar35;
          uVar22 = uVar19;
          lVar30 = lVar25;
        }
        else {
          lVar10 = uVar18 * 0x20;
          lVar30 = lVar17 + lVar10;
          uVar18 = lVar17 + uVar18 * 0x20 & 0xffffffff;
          if ((int)lVar25 != 0) {
            *(int *)((int)uVar26 + 0xc) = (int)lVar30;
            lVar30 = lVar25;
          }
          auVar48 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar26 = (uVar16 - 0x10bc) + lVar10;
          uVar35 = (uVar16 - 0x10b8) + lVar10;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,lVar10,
                             lVar17);
          *(undefined4 *)((int)lVar10 + (int)lVar17) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                             uVar26 & 0xffffffff);
          *(undefined4 *)uVar26 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0,
                             uVar35 & 0xffffffff);
          *(undefined4 *)uVar35 = uVar7;
        }
        uVar23 = uVar23 + 1;
        puVar31 = puVar31 + 4;
        uVar26 = uVar18;
        lVar25 = lVar30;
      } while (uVar23 < *(ushort *)(param_5 + 10));
    }
    iVar29 = (int)uVar18;
    iVar32 = (int)uVar20;
    uVar23 = 0;
    uVar26 = 0;
    psVar33 = (short *)(param_5 + (uint)*(ushort *)(param_5 + 0xc) + 0x10);
    uVar35 = uVar24;
    uVar19 = uVar26;
    if (*(short *)(param_5 + 0xe) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar33;
        sVar6 = psVar33[2];
        uVar24 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        uVar24 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)sVar6;
        auVar47 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 0.0009765625;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar24 = ZEXT48(&DAT_00a4fb80) + (longlong)*(char *)(psVar33 + 3) * 0x40;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar26 = uVar24 & 0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar36 = (int)uVar24;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x20) = uVar7;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x24,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x24) = uVar7;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x28,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x28) = uVar7;
        uVar24 = uVar26;
        if ((int)uVar35 != 0) {
          *(int *)((int)uVar19 + 0x3c) = iVar36;
          *(undefined4 *)(iVar36 + 0x3c) = 0;
          uVar24 = uVar35;
        }
        uVar23 = uVar23 + 1;
        psVar33 = psVar33 + 4;
        uVar35 = uVar24;
        uVar19 = uVar26;
      } while (uVar23 < *(ushort *)(param_5 + 0xe));
    }
    uVar23 = 0;
    puVar31 = (ushort *)(param_6 + (uint)*(ushort *)(param_6 + 8) + 0x10);
    uVar35 = uVar22;
    if (*(short *)(param_6 + 10) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)((uint)*puVar31 << 3);
        uVar5 = puVar31[2];
        uVar22 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)((uint)puVar31[1] << 3);
        fVar1 = (float)(longlong)uVar22 * 3.0517578e-05;
        uVar22 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)((uint)uVar5 << 3);
        auVar47 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)uVar22 * 3.0517578e-05;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        uVar19 = uVar18;
        uVar21 = uVar20;
        uVar22 = uVar35;
        lVar25 = lVar30;
        if (*(char *)((int)puVar31 + 7) < '\0') {
          auVar48 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar18 = ZEXT48(&DAT_00a4fb80) + (ulonglong)*(byte *)(puVar31 + 3) * 0x40;
          iVar29 = (int)uVar18;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0x10,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x10) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x14,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x14) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x18,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x18) = uVar7;
          *(undefined4 *)(iVar29 + 0x1c) = 1;
          if ((*(int *)(iVar29 + 0xc) == 0) && (uVar21 = uVar18, uVar22 = uVar18, (int)uVar35 != 0))
          {
            *(int *)((int)uVar20 + 0xc) = iVar29;
            uVar22 = uVar35;
          }
        }
        else {
          auVar48 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          lVar10 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
          auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar28 = (uVar16 - 0x10b0) + lVar10;
          lVar11 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
          uVar35 = (uVar16 - 0x10ac) + lVar11;
          uVar20 = (uVar16 - 0x10a8) + lVar10;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,
                             uVar28 & 0xffffffff);
          *(undefined4 *)uVar28 = uVar7;
          iVar29 = *(int *)((int)aiStack_10a4 + (int)lVar11);
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                             uVar35 & 0xffffffff);
          *(undefined4 *)uVar35 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0,
                             uVar20 & 0xffffffff);
          *(undefined4 *)uVar20 = uVar7;
          if (iVar29 == 0) {
            uVar19 = lVar17 + lVar11 & 0xffffffff;
            lVar25 = lVar17 + lVar10;
            if ((int)lVar30 != 0) {
              *(int *)((int)uVar18 + 0xc) = (int)(lVar17 + lVar10);
              lVar25 = lVar30;
            }
          }
        }
        iVar29 = (int)uVar19;
        iVar32 = (int)uVar21;
        uVar23 = uVar23 + 1;
        puVar31 = puVar31 + 4;
        uVar18 = uVar19;
        uVar20 = uVar21;
        uVar35 = uVar22;
        lVar30 = lVar25;
      } while (uVar23 < *(ushort *)(param_6 + 10));
    }
    if (iVar32 != 0) {
      *(undefined4 *)(iVar32 + 0xc) = 0;
    }
    if (iVar29 != 0) {
      *(undefined4 *)(iVar29 + 0xc) = 0;
    }
    uVar23 = 0;
    psVar33 = (short *)(param_6 + (uint)*(ushort *)(param_6 + 0xc) + 0x10);
    uVar18 = uVar24;
    if (*(short *)(param_6 + 0xe) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar33;
        sVar6 = psVar33[2];
        uVar24 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        uVar24 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)sVar6;
        auVar47 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 0.0009765625;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar24 = ZEXT48(&DAT_00a4fb80) + (longlong)*(char *)(psVar33 + 3) * 0x40;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar20 = uVar24 & 0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar29 = (int)uVar24;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x30,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x30) = uVar7;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar48 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x34,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x34) = uVar7;
        auVar47 = (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar47 = (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x38,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x38) = uVar7;
        uVar24 = uVar18;
        uVar35 = uVar26;
        if ((*(int *)(iVar29 + 0x3c) == 0) && (uVar24 = uVar20, uVar35 = uVar20, (int)uVar18 != 0))
        {
          *(int *)((int)uVar26 + 0x3c) = iVar29;
          *(undefined4 *)(iVar29 + 0x3c) = 0;
          uVar24 = uVar18;
        }
        uVar23 = uVar23 + 1;
        psVar33 = psVar33 + 4;
        uVar18 = uVar24;
        uVar26 = uVar35;
      } while (uVar23 < *(ushort *)(param_6 + 0xe));
    }
    uVar23 = (uint)uVar22;
    while (uVar23 != 0) {
      uVar9 = (uint)uVar22;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
      auVar48 = *(undefined1 (*) [16])(uVar9 + 0x10 & 0xfffffff0);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar9 & 0xfffffff0),auVar45,auVar44);
      uVar23 = *(uint *)(uVar9 + 0xc);
      uVar22 = (ulonglong)uVar23;
      auVar47 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar47);
      auVar47 = vectorConditionalSelect(auVar47,auVar48,_DAT_000f3fc0);
      *(undefined1 (*) [16])(uVar9 + 0x10 & 0xfffffff0) = auVar47;
    }
    uVar23 = (uint)uVar24;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
    while (uVar23 != 0) {
      iVar29 = (int)uVar24;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
      auVar47 = *(undefined1 (*) [16])(iVar29 + 0x20U & 0xfffffff0);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar44);
      uVar23 = *(uint *)(iVar29 + 0x3c);
      uVar24 = (ulonglong)uVar23;
      auVar48 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(iVar29 + 0x30U & 0xfffffff0),auVar46,auVar48);
      auVar47 = vectorConditionalSelect(auVar48,auVar47,_DAT_000f3fc0);
      *(undefined1 (*) [16])(iVar29 + 0x20U & 0xfffffff0) = auVar47;
    }
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
    uVar23 = 0;
    psVar39 = (short *)(param_5 + 0x10);
    psVar33 = (short *)(param_6 + 0x10);
    if (param_2 != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar39;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11b0);
        *(undefined4 *)(uVar16 - 0x11b0) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[1];
        fVar2 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar2;
        *(float *)((int)puVar8 + 0x1184) = fVar2;
        *(float *)(puVar8 + 0x231) = fVar2;
        *(float *)((int)puVar8 + 0x118c) = fVar2;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11ac);
        *(undefined4 *)(uVar16 - 0x11ac) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[2];
        fVar3 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar3;
        *(float *)((int)puVar8 + 0x1184) = fVar3;
        *(float *)(puVar8 + 0x231) = fVar3;
        *(float *)((int)puVar8 + 0x118c) = fVar3;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a8);
        *(undefined4 *)(uVar16 - 0x11a8) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[3];
        fVar4 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar4;
        *(float *)((int)puVar8 + 0x1184) = fVar4;
        *(float *)(puVar8 + 0x231) = fVar4;
        *(float *)((int)puVar8 + 0x118c) = fVar4;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a4);
        *(undefined4 *)(uVar16 - 0x11a4) = uVar7;
        puVar8[0x232] = (longlong)(int)*psVar33;
        fVar12 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar12;
        *(float *)((int)puVar8 + 0x1184) = fVar12;
        *(float *)(puVar8 + 0x231) = fVar12;
        *(float *)((int)puVar8 + 0x118c) = fVar12;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a0);
        *(undefined4 *)(uVar16 - 0x11a0) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar13 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar13;
        *(float *)((int)puVar8 + 0x1184) = fVar13;
        *(float *)(puVar8 + 0x231) = fVar13;
        *(float *)((int)puVar8 + 0x118c) = fVar13;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x119c);
        *(undefined4 *)(uVar16 - 0x119c) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[2];
        fVar14 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar14;
        *(float *)((int)puVar8 + 0x1184) = fVar14;
        *(float *)(puVar8 + 0x231) = fVar14;
        *(float *)((int)puVar8 + 0x118c) = fVar14;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x1198);
        *(undefined4 *)(uVar16 - 0x1198) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[3];
        fVar15 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar15;
        *(float *)((int)puVar8 + 0x1184) = fVar15;
        *(float *)(puVar8 + 0x231) = fVar15;
        *(float *)((int)puVar8 + 0x118c) = fVar15;
        auVar45 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar45 = (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x1194);
        *(undefined4 *)(uVar16 - 0x1194) = uVar7;
        dVar41 = 0.0;
        if (0.0 <= fVar1 * fVar12 + fVar2 * fVar13 + fVar3 * fVar14 + fVar4 * fVar15) {
          fastfunc::FastVecScale(dVar42,uVar16 - 0x10f0,uVar16 - 0x11b0);
          *(undefined4 *)(puVar8 + 0x20) = *(undefined4 *)(puVar8 + 0x26);
          *(undefined4 *)((int)puVar8 + 0x104) = *(undefined4 *)((int)puVar8 + 0x134);
          *(undefined4 *)(puVar8 + 0x21) = *(undefined4 *)(puVar8 + 0x27);
          *(undefined4 *)((int)puVar8 + 0x10c) = *(undefined4 *)((int)puVar8 + 0x13c);
          fastfunc::FastVecScale(param_1,uVar16 - 0x10e0,uVar16 - 0x11a0);
          *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(puVar8 + 0x28);
          *(undefined4 *)((int)puVar8 + 0x114) = *(undefined4 *)((int)puVar8 + 0x144);
          *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(puVar8 + 0x29);
          *(undefined4 *)((int)puVar8 + 0x11c) = *(undefined4 *)((int)puVar8 + 0x14c);
          fastfunc::FastVecAdd(uVar16 - 0x1100,uVar16 - 0x1120,uVar16 - 0x1110);
          *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar8 + 0x24);
          *(undefined4 *)((int)puVar8 + 0x94) = *(undefined4 *)((int)puVar8 + 0x124);
          *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(puVar8 + 0x25);
          *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)puVar8 + 300);
        }
        else {
          fastfunc::FastVecScale(0xbff0000000000000,uVar16 - 0x1160,uVar16 - 0x11a0);
          fastfunc::FastVecScale(dVar42,uVar16 - 0x1140,uVar16 - 0x11b0);
          *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar8 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0xa4) = *(undefined4 *)((int)puVar8 + 0xe4);
          *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)(puVar8 + 0x1d);
          *(undefined4 *)((int)puVar8 + 0xac) = *(undefined4 *)((int)puVar8 + 0xec);
          fastfunc::FastVecScale(param_1,uVar16 - 0x1130,uVar16 - 0x1160);
          *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar8 + 0x1e);
          *(undefined4 *)((int)puVar8 + 0xb4) = *(undefined4 *)((int)puVar8 + 0xf4);
          *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar8 + 0x1f);
          *(undefined4 *)((int)puVar8 + 0xbc) = *(undefined4 *)((int)puVar8 + 0xfc);
          fastfunc::FastVecAdd(uVar16 - 0x1150,uVar16 - 0x1180,uVar16 - 0x1170);
          *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar8 + 0x1a);
          *(undefined4 *)((int)puVar8 + 0x94) = *(undefined4 *)((int)puVar8 + 0xd4);
          *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(puVar8 + 0x1b);
          *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)puVar8 + 0xdc);
        }
        fVar1 = *(float *)(puVar8 + 0x12);
        fVar2 = *(float *)((int)puVar8 + 0x94);
        fVar3 = *(float *)(puVar8 + 0x13);
        fVar4 = *(float *)((int)puVar8 + 0x9c);
        dVar40 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
        if (dVar40 <= dVar41) {
          *pfVar34 = fVar1;
          pfVar34[1] = fVar2;
          pfVar34[2] = fVar3;
          pfVar34[3] = fVar4;
        }
        else {
          fastfunc::FastVecScale
                    ((double)(float)(dVar43 / (double)(float)SQRT(dVar40)),uVar16 - 0x10d0,
                     uVar16 - 0x1190);
          *pfVar34 = *(float *)(puVar8 + 0x2a);
          pfVar34[1] = *(float *)((int)puVar8 + 0x154);
          pfVar34[2] = *(float *)(puVar8 + 0x2b);
          pfVar34[3] = *(float *)((int)puVar8 + 0x15c);
        }
        uVar23 = uVar23 + 1;
        pfVar34 = pfVar34 + 0x10;
        psVar39 = psVar39 + 4;
        psVar33 = psVar33 + 4;
      } while (uVar23 < param_2);
    }
  }
  return &DAT_00a4fb80;
}



//==== 000f5824  ns=mobyfunc  size=0xb4
// sig: undefined MB_ComputeAnimDirect(MobyInstance * param_1, undefined1 param_2, undefined1 param_3)
// callers(0): 
// callees(3): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames

undefined8 mobyfunc::MB_ComputeAnimDirect(MobyInstance *param_1,char param_2,char param_3)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->pClass->joint_cnt;
  uVar2 = MB_BlendJointFrames((double)param_1->animationBlend,uVar1,uVar1,
                              param_1->pClass->common_trans,param_1->pPreviousAnimationData,
                              param_1->pCurrentAnimationData);
  if (((MobyAnimLayer *)param_1->pAnimationLayers != (MobyAnimLayer *)0x0) && (param_2 != '\0')) {
    ProcessAnimLayers((MobyAnimLayer *)param_1->pAnimationLayers,(int)uVar2);
  }
  if ((param_1->pManipulators != (Manipulator *)0x0) && (param_3 != '\0')) {
    ProcessManipulators(param_1->pManipulators,(int)uVar2);
  }
  return uVar2;
}



//==== 000f58d8  ns=mobyfunc  size=0x84
// sig: undefined ComputeAnimation(void)
// callers(1): 00091090 hero::Hero_BuildPoseFromJoints
// callees(3): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames

undefined8 mobyfunc::ComputeAnimation(int param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
  uVar2 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),uVar1,uVar1,
                              *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),
                              *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar2);
  }
  if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
    ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar2);
  }
  return uVar2;
}



//==== 000f595c  ns=mobyfunc  size=0x118
// sig: undefined Moby_BuildJointMatrices(void)
// callers(6): 00056a30 collproc::CollMoby_GetJointCache; 00059e20 collproc::CollSphere; 0005c710 collproc::CollPill; 0005e598 collproc::CollMobySphere; 000f00a0 mobyfunc::MB_GetCollPrimWorld; 00108240 mobyutil::MB_randPrimPoints
// callees(5): 000f34e8 mobyfunc::MB_TransformJointBatch; 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 005d0140 libc::memset

void mobyfunc::Moby_BuildJointMatrices(int param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_b0 [144];
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 8);
  uVar2 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),bVar1,param_2,
                              *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),
                              *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar2);
  }
  if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
    ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar2);
  }
  libc::memset(auStack_b0,1,0x81);
  iVar3 = MB_TransformJointBatch(uVar2,bVar1,auStack_b0);
  iVar6 = 0;
  if (bVar1 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + 1;
      puVar5 = (undefined4 *)(iVar3 + 0x30 + iVar4);
      iVar4 = iVar4 + 0x40;
      *param_3 = *puVar5;
      param_3[1] = puVar5[1];
      param_3[2] = puVar5[2];
      param_3[3] = puVar5[3];
      param_3 = param_3 + 4;
    } while (iVar6 < (int)(uint)bVar1);
  }
  return;
}



//==== 000f5a74  ns=stub  size=0x8
// sig: undefined STUB_000f5a74(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000f5a74(void)

{
  return 0;
}



//==== 000f5a7c  ns=stub  size=0x4
// sig: undefined STUB_000f5a7c(void)
// callers(2): 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys
// callees(0): 

void stub::STUB_000f5a7c(void)

{
  return;
}



//==== 000f5b80  ns=mobyfunc  size=0x1ec4
// sig: undefined MB_DrawEntries(void)
// callers(1): 000f7a44 mobyfunc::MB_DrawEntryList
// callees(4): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 005023bc fastfunc::FastVecScale; 005023f0 fastfunc::FastVecAdd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] processes draw entries (anim layers/manipulators/joint blend) */

void mobyfunc::MB_DrawEntries(int param_1,uint param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  uint uVar29;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar30;
  ushort *puVar31;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar32;
  float *pfVar33;
  ulonglong unaff_r26;
  int iVar34;
  short *psVar35;
  ulonglong unaff_r27;
  longlong lVar36;
  short *psVar37;
  ulonglong unaff_r28;
  int iVar39;
  ulonglong uVar38;
  uint uVar40;
  ulonglong unaff_r29;
  uint uVar41;
  ulonglong unaff_r30;
  longlong lVar42;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar43;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 local_3180;
  undefined4 uStack_317c;
  undefined4 uStack_3178;
  undefined4 uStack_3174;
  undefined4 local_3170;
  undefined4 uStack_316c;
  undefined4 uStack_3168;
  undefined4 uStack_3164;
  undefined4 local_3150;
  undefined4 uStack_314c;
  undefined4 uStack_3148;
  undefined4 uStack_3144;
  int aiStack_3124 [3145];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x32e0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar16;
  puVar9[0x65e] = in_LR;
  puVar9[0x658] = in_f28;
  puVar9[0x659] = in_f29;
  puVar9[0x65a] = in_f30;
  puVar9[0x65b] = in_f31;
  puVar9[0x64e] = unaff_r22;
  puVar9[0x655] = unaff_r29;
  puVar9[0x64d] = unaff_r21;
  puVar9[0x657] = unaff_r31;
  uVar41 = 0;
  puVar9[0x64f] = unaff_r23;
  puVar9[0x656] = unaff_r30;
  puVar9[0x654] = unaff_r28;
  puVar9[0x653] = unaff_r27;
  puVar9[0x652] = unaff_r26;
  puVar9[0x651] = unaff_r25;
  puVar9[0x650] = unaff_r24;
  puVar9[0x64c] = unaff_r20;
  puVar9[0x64b] = unaff_r19;
  puVar9[0x64a] = unaff_r18;
  lVar42 = uVar16 - 0x2120;
  if (param_2 != 0) {
    do {
      uVar21 = *(uint *)(param_1 + 0x68);
      if (uVar21 == 0) {
        uVar21 = *(uint *)(param_1 + 100);
        puVar26 = (undefined4 *)(uVar21 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[1] = 0;
        *puVar26 = 0x3f800000;
        puVar26 = (undefined4 *)(uVar21 + 0x10 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[1] = 0x3f800000;
        *puVar26 = 0;
        puVar26 = (undefined4 *)(uVar21 + 0x20 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0x3f800000;
        puVar26[1] = 0;
        *puVar26 = 0;
        puVar26 = (undefined4 *)(uVar21 + 0x30 & 0xfffffff0);
        puVar26[3] = 0x3f800000;
        puVar26[2] = 0;
        puVar26[1] = 0;
        *puVar26 = 0;
      }
      else {
        dVar47 = 1.0;
        fVar3 = *(float *)(param_1 + 0x78);
        dVar48 = (double)fVar3;
        fVar2 = (float)(1.0 - dVar48);
        dVar46 = (double)fVar2;
        uVar17 = 0;
        uVar18 = 0;
        uVar40 = uVar21 + 1 >> 1;
        uVar20 = 0;
        *(float *)(puVar9 + 0x640) = fVar2;
        *(float *)((int)puVar9 + 0x3204) = fVar2;
        *(float *)(puVar9 + 0x641) = fVar2;
        *(float *)((int)puVar9 + 0x320c) = fVar2;
        auVar67 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        *(float *)(puVar9 + 0x640) = fVar3;
        *(float *)((int)puVar9 + 0x3204) = fVar3;
        *(float *)(puVar9 + 0x641) = fVar3;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(float *)((int)puVar9 + 0x320c) = fVar3;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar22 = 0;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar29 = 0;
        auVar66 = loadVectorLeftIndexed(0x3200,0xf5a80);
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar66 = auVar66 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar66 = auVar66 | auVar66 << 0x20 | auVar66 << 0x40 | auVar66 << 0x60;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar19 = *(int *)(param_1 + 0x84);
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar68 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
        auVar67 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = (auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar67 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
        if (uVar21 != 0) {
          iVar24 = 0;
          iVar39 = 0;
          iVar34 = 0;
          lVar30 = lVar1;
          lVar36 = lVar1;
          do {
            iVar32 = iVar39 + 1;
            auVar50 = ZEXT416(0);
            *(undefined1 (*) [16])((int)lVar30 + 0x11c0) = auVar66;
            *(undefined4 *)((int)puVar9 + iVar32 * 0x10 + 0x11cc) = 0;
            *(undefined4 *)(puVar9 + iVar32 * 2 + 0x239) = 0x3f800000;
            *(undefined4 *)((int)puVar9 + iVar32 * 0x10 + 0x11c4) = 0x3f800000;
            *(undefined4 *)(puVar9 + iVar32 * 2 + 0x238) = 0x3f800000;
            iVar32 = iVar34 + 1;
            auVar49 = *(undefined1 (*) [16])(iVar24 + iVar19 & 0xfffffff0);
            *(undefined1 (*) [16])(puVar9 + (iVar39 + 2) * 2 + 0x238) = auVar49;
            uVar29 = uVar29 + 1;
            auVar50 = vectorConditionalSelect
                                (auVar49,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,_DAT_000f5ad0);
            *(undefined1 (*) [16])(puVar9 + (iVar39 + 3) * 2 + 0x238) = auVar50;
            iVar34 = iVar34 + 2;
            *(undefined1 (*) [16])((int)lVar36 + 0x1a0) = auVar66;
            lVar36 = lVar36 + 0x20;
            *(undefined1 (*) [16])(puVar9 + iVar32 * 2 + 0x34) = auVar66;
            iVar39 = iVar39 + 4;
            iVar24 = iVar24 + 0x10;
            lVar30 = lVar30 + 0x40;
          } while (uVar29 < uVar21);
        }
        iVar19 = *(int *)(param_1 + 0x8c);
        uVar21 = 0;
        uVar38 = 0;
        puVar31 = (ushort *)(iVar19 + (uint)*(ushort *)(iVar19 + 8) + 0x10);
        if (*(short *)(iVar19 + 10) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)((uint)*puVar31 << 3);
            uVar6 = puVar31[2];
            uVar43 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)((uint)puVar31[1] << 3);
            fVar2 = (float)(longlong)uVar43 * 3.0517578e-05;
            uVar43 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)((uint)uVar6 << 3);
            auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)uVar43 * 3.0517578e-05;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar27 = (ulonglong)*(byte *)(puVar31 + 3);
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar25 = lVar42 + uVar27 * 0x40;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar43 = uVar25 & 0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar51 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            if (*(char *)((int)puVar31 + 7) < '\0') {
              puVar26 = (undefined4 *)uVar25;
              uVar25 = uVar43;
              if ((int)uVar20 != 0) {
                *(undefined4 **)((int)uVar18 + 0xc) = puVar26;
                uVar25 = uVar20;
              }
              auVar49 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0,
                                 uVar43);
              *puVar26 = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,4,
                                 uVar43);
              puVar26[1] = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,8,
                                 uVar43);
              puVar26[2] = uVar8;
              puVar26[7] = 1;
              uVar18 = uVar43;
              uVar20 = uVar25;
            }
            else {
              uVar43 = (uVar16 - 0x3140) + uVar27 * 0x20;
              if ((int)uVar38 == 0) {
                uVar38 = uVar43 & 0xffffffff;
                uVar17 = (uVar16 - 0x3140) + uVar27 * 0x20;
              }
              else {
                *(int *)((int)uVar17 + 0xc) = (int)uVar43;
                uVar17 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              }
              uVar17 = uVar17 & 0xffffffff;
              auVar49 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                                 (ulonglong)*(byte *)(puVar31 + 3) << 5,uVar16 - 0x3140);
              *(undefined4 *)
               ((int)((ulonglong)*(byte *)(puVar31 + 3) << 5) + (int)(uVar16 - 0x3140)) = uVar8;
              auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar43 = (uVar16 - 0x313c) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,
                                 uVar43 & 0xffffffff);
              *(undefined4 *)uVar43 = uVar8;
              uVar43 = (uVar16 - 0x3138) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar43 & 0xffffffff);
              *(undefined4 *)uVar43 = uVar8;
            }
            uVar21 = uVar21 + 1;
            puVar31 = puVar31 + 4;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x8c) + 10));
        }
        iVar24 = (int)uVar17;
        iVar34 = (int)uVar18;
        iVar19 = *(int *)(param_1 + 0x8c);
        uVar21 = 0;
        uVar43 = 0;
        psVar35 = (short *)(iVar19 + (uint)*(ushort *)(iVar19 + 0xc) + 0x10);
        uVar25 = uVar22;
        uVar27 = uVar43;
        if (*(short *)(iVar19 + 0xe) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)*psVar35;
            sVar7 = psVar35[2];
            uVar22 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)psVar35[1];
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            uVar22 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)sVar7;
            auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 0.0009765625;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar22 = lVar42 + (longlong)*(char *)(psVar35 + 3) * 0x40;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar43 = uVar22 & 0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            iVar19 = (int)uVar22;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x20,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x20) = uVar8;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x24,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x24) = uVar8;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x28,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x28) = uVar8;
            uVar22 = uVar43;
            if ((int)uVar25 != 0) {
              *(int *)((int)uVar27 + 0x3c) = iVar19;
              *(undefined4 *)(iVar19 + 0x3c) = 0;
              uVar22 = uVar25;
            }
            uVar21 = uVar21 + 1;
            psVar35 = psVar35 + 4;
            uVar25 = uVar22;
            uVar27 = uVar43;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x8c) + 0xe));
        }
        iVar19 = *(int *)(param_1 + 0x90);
        uVar21 = 0;
        puVar31 = (ushort *)(iVar19 + (uint)*(ushort *)(iVar19 + 8) + 0x10);
        uVar25 = uVar20;
        if (*(short *)(iVar19 + 10) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)((uint)*puVar31 << 3);
            uVar6 = puVar31[2];
            uVar20 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)((uint)puVar31[1] << 3);
            fVar2 = (float)(longlong)uVar20 * 3.0517578e-05;
            uVar20 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)((uint)uVar6 << 3);
            auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)uVar20 * 3.0517578e-05;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar51 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            uVar27 = uVar18;
            uVar20 = uVar25;
            if (*(char *)((int)puVar31 + 7) < '\0') {
              auVar49 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar28 = lVar42 + (ulonglong)*(byte *)(puVar31 + 3) * 0x40;
              uVar11 = uVar28 & 0xffffffff;
              iVar19 = (int)uVar28;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x10,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x10) = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x14,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x14) = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x18,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x18) = uVar8;
              *(undefined4 *)(iVar19 + 0x1c) = 1;
              if ((*(int *)(iVar19 + 0xc) == 0) &&
                 (uVar27 = uVar11, uVar20 = uVar11, (int)uVar25 != 0)) {
                *(int *)((int)uVar18 + 0xc) = iVar19;
                uVar20 = uVar25;
              }
            }
            else {
              auVar49 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar18 = (uVar16 - 0x3130) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar18 = (uVar16 - 0x312c) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              uVar18 = (uVar16 - 0x3128) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              lVar30 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              if (*(int *)((int)aiStack_3124 + (int)lVar30) == 0) {
                uVar18 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
                if ((int)uVar38 == 0) {
                  uVar38 = uVar18 & 0xffffffff;
                  uVar17 = (uVar16 - 0x3140) + lVar30 & 0xffffffff;
                }
                else {
                  *(int *)((int)uVar17 + 0xc) = (int)uVar18;
                  uVar17 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20 & 0xffffffff
                  ;
                }
              }
            }
            iVar24 = (int)uVar17;
            iVar34 = (int)uVar27;
            uVar21 = uVar21 + 1;
            puVar31 = puVar31 + 4;
            uVar18 = uVar27;
            uVar25 = uVar20;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x90) + 10));
        }
        if (iVar34 != 0) {
          *(undefined4 *)(iVar34 + 0xc) = 0;
        }
        if (iVar24 != 0) {
          *(undefined4 *)(iVar24 + 0xc) = 0;
        }
        iVar19 = *(int *)(param_1 + 0x90);
        uVar21 = 0;
        psVar35 = (short *)(iVar19 + (uint)*(ushort *)(iVar19 + 0xc) + 0x10);
        uVar17 = uVar22;
        if (*(short *)(iVar19 + 0xe) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)*psVar35;
            sVar7 = psVar35[2];
            uVar22 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)psVar35[1];
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            uVar22 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)sVar7;
            auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 0.0009765625;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar22 = lVar42 + (longlong)*(char *)(psVar35 + 3) * 0x40;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar18 = uVar22 & 0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar52 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            iVar19 = (int)uVar22;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x30,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x30) = uVar8;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar49 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x34,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x34) = uVar8;
            auVar50 = (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x38,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x38) = uVar8;
            uVar22 = uVar17;
            uVar25 = uVar43;
            if ((*(int *)(iVar19 + 0x3c) == 0) &&
               (uVar22 = uVar18, uVar25 = uVar18, (int)uVar17 != 0)) {
              *(int *)((int)uVar43 + 0x3c) = iVar19;
              *(undefined4 *)(iVar19 + 0x3c) = 0;
              uVar22 = uVar17;
            }
            uVar21 = uVar21 + 1;
            psVar35 = psVar35 + 4;
            uVar17 = uVar22;
            uVar43 = uVar25;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x90) + 0xe));
        }
        uVar21 = (uint)uVar20;
        while (uVar21 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          uVar29 = (uint)uVar20;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar29 & 0xfffffff0),auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          auVar49 = *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0);
          uVar21 = *(uint *)(uVar29 + 0xc);
          uVar20 = (ulonglong)uVar21;
          auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar67,auVar50);
          auVar50 = vectorConditionalSelect(auVar50,auVar49,_DAT_000f5ad0);
          *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0) = auVar50;
        }
        uVar21 = (uint)uVar22;
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        while (uVar21 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          iVar19 = (int)uVar22;
          auVar49 = *(undefined1 (*) [16])(iVar19 + 0x20U & 0xfffffff0);
          auVar50 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          uVar21 = *(uint *)(iVar19 + 0x3c);
          uVar22 = (ulonglong)uVar21;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(iVar19 + 0x30U & 0xfffffff0),auVar67,auVar50);
          auVar50 = vectorConditionalSelect(auVar50,auVar49,_DAT_000f5ad0);
          *(undefined1 (*) [16])(iVar19 + 0x20U & 0xfffffff0) = auVar50;
        }
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        if (*(char *)(param_1 + 0x94) == '\0') {
          uVar21 = 0;
          psVar37 = (short *)(*(int *)(param_1 + 0x8c) + 0x10);
          psVar35 = (short *)(*(int *)(param_1 + 0x90) + 0x10);
          lVar30 = lVar42;
          if (*(int *)(param_1 + 0x68) != 0) {
            do {
              puVar9[0x642] = (longlong)(int)*psVar37;
              fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar2;
              *(float *)((int)puVar9 + 0x3204) = fVar2;
              *(float *)(puVar9 + 0x641) = fVar2;
              *(float *)((int)puVar9 + 0x320c) = fVar2;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3270);
              *(undefined4 *)(uVar16 - 0x3270) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[1];
              fVar3 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar3;
              *(float *)((int)puVar9 + 0x3204) = fVar3;
              *(float *)(puVar9 + 0x641) = fVar3;
              *(float *)((int)puVar9 + 0x320c) = fVar3;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x326c);
              *(undefined4 *)(uVar16 - 0x326c) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[2];
              fVar4 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar4;
              *(float *)((int)puVar9 + 0x3204) = fVar4;
              *(float *)(puVar9 + 0x641) = fVar4;
              *(float *)((int)puVar9 + 0x320c) = fVar4;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3268);
              *(undefined4 *)(uVar16 - 0x3268) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[3];
              fVar5 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar5;
              *(float *)((int)puVar9 + 0x3204) = fVar5;
              *(float *)(puVar9 + 0x641) = fVar5;
              *(float *)((int)puVar9 + 0x320c) = fVar5;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3264);
              *(undefined4 *)(uVar16 - 0x3264) = uVar8;
              puVar9[0x642] = (longlong)(int)*psVar35;
              fVar12 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar12;
              *(float *)((int)puVar9 + 0x3204) = fVar12;
              *(float *)(puVar9 + 0x641) = fVar12;
              *(float *)((int)puVar9 + 0x320c) = fVar12;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3260);
              *(undefined4 *)(uVar16 - 0x3260) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[1];
              fVar13 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar13;
              *(float *)((int)puVar9 + 0x3204) = fVar13;
              *(float *)(puVar9 + 0x641) = fVar13;
              *(float *)((int)puVar9 + 0x320c) = fVar13;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x325c);
              *(undefined4 *)(uVar16 - 0x325c) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[2];
              fVar14 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar14;
              *(float *)((int)puVar9 + 0x3204) = fVar14;
              *(float *)(puVar9 + 0x641) = fVar14;
              *(float *)((int)puVar9 + 0x320c) = fVar14;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3258);
              *(undefined4 *)(uVar16 - 0x3258) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[3];
              fVar15 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar15;
              *(float *)((int)puVar9 + 0x3204) = fVar15;
              *(float *)(puVar9 + 0x641) = fVar15;
              *(float *)((int)puVar9 + 0x320c) = fVar15;
              auVar50 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar50 = (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3254);
              *(undefined4 *)(uVar16 - 0x3254) = uVar8;
              dVar45 = 0.0;
              if (0.0 <= fVar2 * fVar12 + fVar3 * fVar13 + fVar4 * fVar14 + fVar5 * fVar15) {
                fastfunc::FastVecScale(dVar46,uVar16 - 0x31b0,uVar16 - 0x3270);
                *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(puVar9 + 0x26);
                *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)((int)puVar9 + 0x134);
                *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(puVar9 + 0x27);
                *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)((int)puVar9 + 0x13c);
                fastfunc::FastVecScale(dVar48,uVar16 - 0x31a0,uVar16 - 0x3260);
                *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(puVar9 + 0x28);
                *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)((int)puVar9 + 0x144);
                *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(puVar9 + 0x29);
                *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)((int)puVar9 + 0x14c);
                fastfunc::FastVecAdd(uVar16 - 0x31c0,uVar16 - 0x31e0,uVar16 - 0x31d0);
                *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x24);
                *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0x124);
                *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x25);
                *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 300);
              }
              else {
                fastfunc::FastVecScale(0xbff0000000000000,uVar16 - 0x3220,uVar16 - 0x3260);
                fastfunc::FastVecScale(dVar46,uVar16 - 0x3200,uVar16 - 0x3270);
                *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar9 + 0x1c);
                *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)((int)puVar9 + 0xe4);
                *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(puVar9 + 0x1d);
                *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0xec);
                fastfunc::FastVecScale(dVar48,uVar16 - 0x31f0,uVar16 - 0x3220);
                *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(puVar9 + 0x1e);
                *(undefined4 *)((int)puVar9 + 0xb4) = *(undefined4 *)((int)puVar9 + 0xf4);
                *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)(puVar9 + 0x1f);
                *(undefined4 *)((int)puVar9 + 0xbc) = *(undefined4 *)((int)puVar9 + 0xfc);
                fastfunc::FastVecAdd(uVar16 - 0x3210,uVar16 - 0x3240,uVar16 - 0x3230);
                *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x1a);
                *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xd4);
                *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x1b);
                *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 0xdc);
              }
              fVar2 = *(float *)(puVar9 + 0x12);
              fVar3 = *(float *)((int)puVar9 + 0x94);
              fVar4 = *(float *)(puVar9 + 0x13);
              fVar5 = *(float *)((int)puVar9 + 0x9c);
              dVar44 = (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
              pfVar33 = (float *)lVar30;
              if (dVar44 <= dVar45) {
                *pfVar33 = fVar2;
                pfVar33[1] = fVar3;
                pfVar33[2] = fVar4;
                pfVar33[3] = fVar5;
              }
              else {
                fastfunc::FastVecScale
                          ((double)(float)(dVar47 / (double)(float)SQRT(dVar44)),uVar16 - 0x3190,
                           uVar16 - 0x3250);
                *pfVar33 = *(float *)(puVar9 + 0x2a);
                pfVar33[1] = *(float *)((int)puVar9 + 0x154);
                pfVar33[2] = *(float *)(puVar9 + 0x2b);
                pfVar33[3] = *(float *)((int)puVar9 + 0x15c);
              }
              uVar21 = uVar21 + 1;
              psVar35 = psVar35 + 4;
              psVar37 = psVar37 + 4;
              lVar30 = lVar30 + 0x40;
            } while (uVar21 < *(uint *)(param_1 + 0x68));
          }
        }
        else {
          uVar23 = 0;
          uVar21 = *(uint *)(param_1 + 0x8c);
          uVar29 = *(uint *)(param_1 + 0x90);
          lVar30 = lVar42;
          if (uVar40 != 0) {
            do {
              uVar29 = uVar29 + 0x10;
              uVar21 = uVar21 + 0x10;
              auVar52 = vectorUnpackHighSignedHalfWord(*(undefined1 (*) [16])(uVar21 & 0xfffffff0));
              auVar49 = vectorUnpackLowSignedHalfWord(*(undefined1 (*) [16])(uVar21 & 0xfffffff0));
              uVar23 = uVar23 + 1;
              auVar50 = ZEXT416(0);
              auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
              auVar55 = vectorUnpackHighSignedHalfWord(*(undefined1 (*) [16])(uVar29 & 0xfffffff0));
              auVar52 = vectorConvertFromSignedFixedPointWord(auVar52,0xf);
              auVar51 = vectorUnpackLowSignedHalfWord(*(undefined1 (*) [16])(uVar29 & 0xfffffff0));
              auVar49 = vectorConvertFromSignedFixedPointWord(auVar49,0xf);
              auVar55 = vectorConvertFromSignedFixedPointWord(auVar55,0xf);
              auVar51 = vectorConvertFromSignedFixedPointWord(auVar51,0xf);
              auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar68,auVar50);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar68,auVar50);
              auVar49 = vectorMultiplyAddFloatingPoint(auVar55,auVar67,auVar52);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar51,auVar67,auVar50);
              *(undefined1 (*) [16])lVar30 = auVar49;
              ((undefined1 (*) [16])lVar30)[4] = auVar50;
              lVar30 = lVar30 + 0x80;
            } while (uVar23 < uVar40);
          }
        }
        iVar19 = (int)lVar42;
        if (*(MobyAnimLayer **)(param_1 + 0x7c) != (MobyAnimLayer *)0x0) {
          ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x7c),iVar19);
        }
        if (*(Manipulator **)(param_1 + 0x80) != (Manipulator *)0x0) {
          ProcessManipulators(*(Manipulator **)(param_1 + 0x80),iVar19);
        }
        uVar40 = 0;
        uVar21 = *(uint *)(param_1 + 100);
        if (*(int *)(param_1 + 0x68) != 0) {
          iVar24 = 0;
          lVar30 = lVar42;
          uVar29 = uVar21;
          do {
            auVar50 = ZEXT416(0);
            auVar56 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            pauVar10 = (undefined1 (*) [16])lVar30;
            auVar52 = *pauVar10;
            auVar51 = vectorConditionalSelect(pauVar10[2],auVar66,_DAT_000f5ad0);
            auVar49 = vectorAddFloatingPoint(auVar52,auVar52);
            auVar50 = auVar52 & (undefined1  [16])0xffffffff;
            auVar55 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar58 = vectorPermute(auVar52,auVar52,_DAT_000f5b10);
            auVar52 = vectorPermute(auVar52,auVar52,_DAT_000f5b20);
            auVar50 = vectorPermute(auVar49,auVar49,_DAT_000f5b10);
            auVar60 = vectorMultiplyAddFloatingPoint(auVar58,auVar49,auVar56);
            auVar59 = vectorPermute(auVar49,auVar49,_DAT_000f5b20);
            auVar62 = vectorMultiplyAddFloatingPoint(auVar50,auVar55,auVar56);
            auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar58,auVar50,auVar66);
            auVar55 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar55,auVar60);
            auVar49 = vectorMultiplyAddFloatingPoint(auVar52,auVar49,auVar62);
            auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar52,auVar59,auVar50);
            auVar52 = vectorConditionalSelect(auVar55,auVar49,_DAT_000f5af0);
            auVar59 = vectorConditionalSelect(auVar49,auVar50,_DAT_000f5af0);
            auVar58 = vectorConditionalSelect(auVar50,auVar55,_DAT_000f5af0);
            auVar50 = vectorConditionalSelect(auVar52,auVar50,_DAT_000f5b00);
            auVar52 = vectorConditionalSelect(auVar59,auVar55,_DAT_000f5b00);
            auVar49 = vectorConditionalSelect(auVar58,auVar49,_DAT_000f5b00);
            auVar55 = vectorMergeHighWord(auVar52,auVar50);
            auVar50 = vectorMergeLowWord(auVar52,auVar50);
            auVar58 = vectorMergeHighWord(auVar55,auVar49);
            auVar59 = vectorPermute(auVar55,auVar49,_DAT_000f5b30);
            auVar52 = vectorPermute(auVar50,auVar49,_DAT_000f5b40);
            auVar49 = pauVar10[1];
            auVar50 = vectorPermute(auVar49,auVar56,_DAT_000f5b50);
            auVar60 = vectorPermute(auVar49,auVar56,_DAT_000f5b60);
            auVar55 = vectorPermute(auVar49,auVar56,_DAT_000f5b70);
            auVar50 = vectorMultiplyAddFloatingPoint(auVar58,auVar50,auVar56);
            uVar23 = *(uint *)(iVar19 + (iVar24 + 0xb) * 4);
            auVar49 = vectorMultiplyAddFloatingPoint(auVar59,auVar60,auVar56);
            auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar55,auVar56);
            if (uVar23 == 0) {
              uStack_3174 = auVar50._12_4_;
              uStack_3178 = auVar50._8_4_;
              uStack_317c = auVar50._4_4_;
              local_3180 = auVar50._0_4_;
              uStack_3164 = auVar49._12_4_;
              uStack_3168 = auVar49._8_4_;
              uStack_316c = auVar49._4_4_;
              local_3170 = auVar49._0_4_;
              puVar26 = (undefined4 *)(uVar29 & 0xfffffff0);
              puVar26[3] = uStack_3174;
              puVar26[2] = uStack_3178;
              puVar26[1] = uStack_317c;
              *puVar26 = local_3180;
              puVar26 = (undefined4 *)(uVar29 + 0x10 & 0xfffffff0);
              puVar26[3] = uStack_3164;
              puVar26[2] = uStack_3168;
              puVar26[1] = uStack_316c;
              *puVar26 = local_3170;
              uStack_3144 = auVar51._12_4_;
              uStack_3148 = auVar51._8_4_;
              uStack_314c = auVar51._4_4_;
              local_3150 = auVar51._0_4_;
              *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0) = auVar52;
              puVar26 = (undefined4 *)(uVar29 + 0x30 & 0xfffffff0);
              puVar26[3] = uStack_3144;
              puVar26[2] = uStack_3148;
              puVar26[1] = uStack_314c;
              *puVar26 = local_3150;
            }
            else {
              auVar55 = ZEXT416(0);
              auVar54 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
              uVar23 = uVar21 + (uVar23 & 0xfffffc0);
              auVar55 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar58 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar59 = auVar50 >> 0x40 & (undefined1  [16])0xffffffff;
              auVar60 = auVar52 >> 0x40 & (undefined1  [16])0xffffffff;
              auVar56 = auVar50 >> 0x20 & (undefined1  [16])0xffffffff;
              auVar57 = *(undefined1 (*) [16])(uVar23 & 0xfffffff0);
              auVar64 = *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0);
              auVar62 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar54);
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar54);
              auVar55 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar62 | auVar62 << 0x20 | auVar62 << 0x40 |
                                           auVar62 << 0x60,auVar54);
              auVar58 = auVar49 >> 0x40 & (undefined1  [16])0xffffffff;
              auVar65 = *(undefined1 (*) [16])(uVar23 + 0x20 & 0xfffffff0);
              auVar50 = auVar50 & (undefined1  [16])0xffffffff;
              auVar54 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar54);
              auVar55 = auVar49 >> 0x20 & (undefined1  [16])0xffffffff;
              auVar49 = auVar49 & (undefined1  [16])0xffffffff;
              auVar62 = *(undefined1 (*) [16])(uVar23 + 0x30 & 0xfffffff0);
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar53);
              auVar59 = auVar51 >> 0x40 & (undefined1  [16])0xffffffff;
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar63);
              auVar60 = auVar51 >> 0x20 & (undefined1  [16])0xffffffff;
              auVar57 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar61);
              auVar58 = auVar52 >> 0x20 & (undefined1  [16])0xffffffff;
              auVar52 = auVar52 & (undefined1  [16])0xffffffff;
              auVar54 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar54);
              auVar51 = auVar51 & (undefined1  [16])0xffffffff;
              auVar59 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar56 | auVar56 << 0x20 | auVar56 << 0x40 |
                                           auVar56 << 0x60,auVar53);
              auVar56 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar57);
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar63);
              auVar58 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar54);
              auVar55 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                           auVar50 << 0x60,auVar59);
              auVar49 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 |
                                           auVar49 << 0x60,auVar56);
              auVar50 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                           auVar52 << 0x60,auVar53);
              auVar52 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                           auVar51 << 0x60,auVar58);
              *(undefined1 (*) [16])(uVar29 & 0xfffffff0) = auVar55;
              *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0) = auVar49;
              *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0) = auVar50;
              *(undefined1 (*) [16])(uVar29 + 0x30 & 0xfffffff0) = auVar52;
            }
            uVar40 = uVar40 + 1;
            uVar29 = uVar29 + 0x40;
            iVar24 = iVar24 + 0x10;
            lVar30 = lVar30 + 0x40;
          } while (uVar40 < *(uint *)(param_1 + 0x68));
        }
        uVar40 = (uint)uVar38;
        while (uVar40 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          uVar40 = (uint)uVar38;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar40 & 0xfffffff0),auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          uVar38 = uVar38 - (uVar16 - 0x3140);
          auVar52 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar40 + 0x10 & 0xfffffff0),auVar67,auVar50);
          auVar50 = vectorPermute(auVar52,auVar66,_DAT_000f5b50);
          auVar49 = vectorPermute(auVar52,auVar66,_DAT_000f5b60);
          auVar52 = vectorPermute(auVar52,auVar66,_DAT_000f5b70);
          if ((uVar38 << 0x20) >> 0x25 < (ulonglong)*(uint *)(param_1 + 0x68)) {
            uVar29 = (uint)((uVar38 & 0xffffffff) << 1) & 0xffffffc0;
            auVar51 = ZEXT416(0);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            uVar23 = (uint)uVar38 >> 3 & 0x1ffffffc;
            iVar19 = (uVar23 + 1) * 0x10;
            iVar24 = (uVar23 + 2) * 0x10;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(uVar29 + uVar21 & 0xfffffff0),auVar50,
                                 auVar51);
            *(undefined1 (*) [16])(uVar29 + uVar21 & 0xfffffff0) = auVar50;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(iVar19 + uVar21 & 0xfffffff0),auVar49,
                                 auVar51);
            *(undefined1 (*) [16])(iVar19 + uVar21 & 0xfffffff0) = auVar50;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(iVar24 + uVar21 & 0xfffffff0),auVar52,
                                 auVar51);
            *(undefined1 (*) [16])(iVar24 + uVar21 & 0xfffffff0) = auVar50;
          }
          uVar40 = *(uint *)(uVar40 + 0xc);
          uVar38 = (ulonglong)uVar40;
        }
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        uVar40 = *(uint *)(param_1 + 0x88);
        uVar29 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
          do {
            auVar68 = *(undefined1 (*) [16])(uVar40 & 0xfffffff0);
            auVar49 = *(undefined1 (*) [16])(uVar21 & 0xfffffff0);
            auVar50 = auVar68 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar67 = ZEXT416(0);
            auVar51 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
            auVar55 = *(undefined1 (*) [16])(uVar40 + 0x10 & 0xfffffff0);
            auVar60 = *(undefined1 (*) [16])(uVar40 + 0x20 & 0xfffffff0);
            auVar67 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar56 = *(undefined1 (*) [16])(uVar21 + 0x10 & 0xfffffff0);
            auVar66 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar51);
            auVar53 = *(undefined1 (*) [16])(uVar40 + 0x30 & 0xfffffff0);
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar51);
            auVar67 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar58 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar66 | auVar66 << 0x20 | auVar66 << 0x40 |
                                         auVar66 << 0x60,auVar51);
            auVar50 = auVar68 >> 0x40 & (undefined1  [16])0xffffffff;
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,
                                 *(undefined1 (*) [16])(uVar21 + 0x30 & 0xfffffff0));
            auVar67 = auVar55 >> 0x40 & (undefined1  [16])0xffffffff;
            auVar66 = auVar60 >> 0x40 & (undefined1  [16])0xffffffff;
            uVar29 = uVar29 + 1;
            auVar68 = auVar68 >> 0x20 & (undefined1  [16])0xffffffff;
            uVar40 = uVar40 + 0x40;
            auVar49 = auVar55 >> 0x20 & (undefined1  [16])0xffffffff;
            auVar62 = *(undefined1 (*) [16])(uVar21 + 0x20 & 0xfffffff0);
            auVar55 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar52);
            auVar50 = auVar60 >> 0x20 & (undefined1  [16])0xffffffff;
            auVar52 = auVar53 >> 0x40 & (undefined1  [16])0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar59);
            auVar67 = auVar53 >> 0x20 & (undefined1  [16])0xffffffff;
            auVar58 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar66 | auVar66 << 0x20 | auVar66 << 0x40 |
                                         auVar66 << 0x60,auVar58);
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                         auVar52 << 0x60,auVar51);
            auVar66 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar68 | auVar68 << 0x20 | auVar68 << 0x40 |
                                         auVar68 << 0x60,auVar55);
            auVar68 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 |
                                         auVar49 << 0x60,auVar59);
            auVar50 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar58);
            auVar67 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar52);
            *(undefined1 (*) [16])(uVar21 & 0xfffffff0) = auVar66;
            *(undefined1 (*) [16])(uVar21 + 0x10 & 0xfffffff0) = auVar68;
            *(undefined1 (*) [16])(uVar21 + 0x20 & 0xfffffff0) = auVar50;
            *(undefined1 (*) [16])(uVar21 + 0x30 & 0xfffffff0) = auVar67;
            uVar21 = uVar21 + 0x40;
          } while (uVar29 < *(uint *)(param_1 + 0x68));
        }
      }
      uVar41 = uVar41 + 1;
      param_1 = param_1 + 0xb0;
    } while (uVar41 < param_2);
  }
  return;
}



//==== 000f7a44  ns=mobyfunc  size=0x50
// sig: undefined MB_DrawEntryList(void)
// callers(2): 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys
// callees(2): 000f5b80 mobyfunc::MB_DrawEntries; 004ed52c FUN_004ed52c

void mobyfunc::MB_DrawEntryList(undefined8 param_1,undefined4 param_2)

{
  MB_DrawEntries();
  FUN_004ed52c(&DAT_01111700,param_1,param_2);
  return;
}



//==== 000f7af0  ns=mobyfunc  size=0x1aac
// sig: undefined MB_BuildDrawEntry(void)
// callers(2): 000f1934 mobyfunc::MB_AddToDrawList; 000f1a78 mobyfunc::DrawMobys
// callees(28): 004d676c FUN_004d676c; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004dfe70 FUN_004dfe70; 004e1b80 FUN_004e1b80; 004fe098 idol::AllocateMemAlign; 005d0140 libc::memset; 005e85b4 FUN_005e85b4; 005e85f0 FUN_005e85f0; 005e8610 FUN_005e8610; 005e8638 FUN_005e8638; 005e868c FUN_005e868c; 005e86a8 FUN_005e86a8; 005e86d8 FUN_005e86d8; 005e87d8 FUN_005e87d8; 005e87e8 FUN_005e87e8; 005e8848 FUN_005e8848; 005e885c FUN_005e885c; 005e88f0 FUN_005e88f0; 005e8940 FUN_005e8940; 005e8970 FUN_005e8970; 005e899c FUN_005e899c; 005e89c4 FUN_005e89c4; 005e89f4 FUN_005e89f4; 005e8a94 FUN_005e8a94; 005e8b10 FUN_005e8b10; 005e8b20 FUN_005e8b20; 005e8b5c FUN_005e8b5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [p2_mobyutil] builds 0xb0-byte draw entry + RSX programs for one moby; returns new list end */

ulonglong mobyfunc::MB_BuildDrawEntry(float *param_1,ulonglong param_2,longlong param_3)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  RenderingStep *pRVar9;
  RenderingStep *pRVar10;
  gameMode_t gVar11;
  ulonglong uVar12;
  longlong lVar13;
  RsxCmd *pRVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar19;
  undefined8 uVar18;
  undefined4 *puVar20;
  ulonglong unaff_r14;
  float *pfVar21;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar23;
  ulonglong unaff_r25;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  RsxCmd RVar26;
  undefined4 *puVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  RenderingStep *pRVar29;
  ulonglong unaff_r31;
  uint uVar30;
  RenderingStep *pRVar31;
  ulonglong in_LR;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 in_vs34 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 local_200 [16];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_158;
  undefined4 uStack_154;
  RenderingStep *iVar16;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar28 = uVar12 - 0x2b0;
  puVar5 = (ulonglong *)lVar28;
  *puVar5 = uVar12;
  puVar5[0x58] = in_LR;
  puVar5[0x51] = in_f27;
  puVar5[0x52] = in_f28;
  puVar5[0x53] = in_f29;
  puVar5[0x54] = in_f30;
  puVar5[0x55] = in_f31;
  puVar5[0x43] = unaff_r18;
  puVar5[0x45] = unaff_r20;
  puVar5[0x41] = unaff_r16;
  puVar5[0x3f] = unaff_r14;
  gVar11 = g_gameMode;
  puVar5[0x48] = unaff_r23;
  iVar17 = g_viewMtxPtr;
  puVar5[0x50] = unaff_r31;
  puVar5[0x4f] = unaff_r30;
  puVar5[0x4e] = unaff_r29;
  puVar5[0x4d] = unaff_r28;
  puVar5[0x4c] = unaff_r27;
  puVar5[0x4b] = unaff_r26;
  puVar5[0x4a] = unaff_r25;
  puVar5[0x49] = unaff_r24;
  puVar5[0x47] = unaff_r22;
  puVar5[0x46] = unaff_r21;
  puVar5[0x44] = unaff_r19;
  puVar5[0x42] = unaff_r17;
  puVar5[0x40] = unaff_r15;
  iVar15 = DAT_00a15f64;
  if ((gVar11 == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    *(undefined4 *)((int)puVar5 + 0x8c) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined4 *)((int)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(DAT_00a15f64 + 0x10);
    *(undefined4 *)((int)puVar5 + 0x84) = *(undefined4 *)(iVar15 + 0x14);
    *(undefined4 *)(puVar5 + 0x11) = *(undefined4 *)(iVar15 + 0x18);
    *(undefined4 *)((int)puVar5 + 0x8c) = *(undefined4 *)(iVar15 + 0x1c);
  }
  pRVar31 = M_Depth;
  *(RenderingStep **)(puVar5 + 0x34) = M_Pass;
  pRVar9 = DL_Pass;
  pRVar29 = MobyPass;
  *(RenderingStep **)((int)puVar5 + 0x1ac) = pRVar31;
  *(RenderingStep **)((int)puVar5 + 0x1a4) = pRVar29;
  *(RenderingStep **)(puVar5 + 0x35) = pRVar9;
  pRVar31 = DL_DepthPass;
  iVar15 = *(int *)(iVar17 + 0x22d8);
  *(RenderingStep **)(puVar5 + 0x36) = MobyDepth;
  *(RenderingStep **)((int)puVar5 + 0x1b4) = pRVar31;
  pRVar31 = HUD_Pass;
  if (iVar15 == 0) {
    uVar30 = 0;
    lVar13 = lVar28;
    do {
      iVar16 = *(RenderingStep **)((int)lVar13 + 0x1a0);
      iVar15 = *(int *)((int)lVar13 + 0x1ac);
      FUN_005e8610(iVar16,0);
      FUN_005e8610(iVar16,1);
      FUN_005e8610(iVar16,3);
      FUN_005e8610(iVar15,0);
      FUN_005e8610(iVar15,1);
      FUN_005e8610(iVar15,2);
      FUN_005e8610(iVar15,3);
      *iVar16->command = NV4097_SET_BLEND_EQUATION_x1;
      iVar16->command[1] = 0x80068006;
      pRVar14 = iVar16->command;
      iVar16->command = pRVar14 + 2;
      pRVar14[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      iVar19 = 4;
      lVar25 = uVar12 - 0x230;
      iVar16->command[1] = 0x3020302;
      iVar16->command[2] = 0x3030303;
      pRVar14 = iVar16->command;
      iVar16->command = pRVar14 + 3;
      pRVar14[3] = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
      iVar16->command[1] = 0x14;
      iVar16->command = iVar16->command + 2;
      do {
        iVar19 = iVar19 + -1;
        pRVar14 = (RsxCmd *)lVar25;
        lVar25 = lVar25 + 4;
        *iVar16->command = *pRVar14;
        iVar16->command = iVar16->command + 1;
      } while (iVar19 != 0);
      idol_draw::BindVertexProgram(iVar17,iVar16,5);
      idol_draw::BindFragmentProgram(iVar17,iVar16,8);
      FUN_005e85b4(iVar16,0,2,3,0x1c,0);
      FUN_005e85b4(iVar16,1,2,2,0x1c,0);
      FUN_005e85b4(iVar16,3,4,4,0x1c,0);
      if (iVar15 != 0) {
        FUN_005e85b4(iVar15,0,2,3,0x1c,0);
        FUN_005e85b4(iVar15,1,2,2,0x1c,0);
        FUN_005e85b4(iVar15,3,4,4,0x1c,0);
      }
      **(undefined4 **)(iVar15 + 8) = 0x80308;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 0x206;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 8) = 0xff;
      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 0xc;
      FUN_005e85f0(iVar15,1);
      *iVar16->command = NV4097_SET_ALPHA_FUNC_x2;
      iVar16->command[1] = 0x206;
      iVar16->command[2] = 1;
      iVar16->command = iVar16->command + 3;
      FUN_005e85f0(iVar15,1);
      uVar30 = uVar30 + 1;
      lVar13 = lVar13 + 4;
    } while (uVar30 < 3);
  }
  else {
    *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
    pRVar31->command[1] = 0x80068006;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar31->command[1] = 0x3020302;
    pRVar31->command[2] = 0x3030303;
    pRVar31->command = pRVar31->command + 3;
    pRVar31 = HUD_Pass;
    lVar13 = uVar12 - 0x230;
    iVar15 = 4;
    *HUD_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar31->command[1] = 0x14;
    pRVar31->command = pRVar31->command + 2;
    do {
      pRVar14 = (RsxCmd *)lVar13;
      iVar15 = iVar15 + -1;
      lVar13 = lVar13 + 4;
      *pRVar31->command = *pRVar14;
      pRVar31->command = pRVar31->command + 1;
    } while (iVar15 != 0);
    idol_draw::BindVertexProgram(iVar17,HUD_Pass,5);
    idol_draw::BindFragmentProgram(iVar17,HUD_Pass,8);
    FUN_005e85b4(HUD_Pass,0,2,3,0x1c,0);
    FUN_005e85b4(HUD_Pass,1,2,2,0x1c,0);
    FUN_005e85b4(HUD_Pass,3,4,4,0x1c,0);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 1;
    pRVar31->command = pRVar31->command + 3;
    FUN_005e85f0(HUD_Pass,1);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar31->command[1] = 1;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar31->command[1] = 1;
    pRVar31->command = pRVar31->command + 2;
  }
  dVar36 = 0.0;
  pfVar21 = (float *)((int)param_1 + (int)(param_3 << 8));
  dVar37 = dVar36;
  if (param_1 != pfVar21) {
    do {
      pRVar31 = MobyPass;
      pRVar29 = MobyDepth;
      bVar7 = false;
      if (*(int *)(iVar17 + 0x22d8) == 0) {
        if ((*(char *)((int)param_1 + 0x7f) == '\0') || ((double)param_1[0x21] == dVar37)) {
          uVar22 = 0;
          bVar6 = false;
          do {
            if (param_1 ==
                *(float **)((int)&g_currentWeaponMoby + (int)(uVar22 << 6) + (int)(uVar22 << 4))) {
              bVar6 = true;
              break;
            }
            uVar22 = uVar22 + 1;
          } while ((uVar22 & 0xffffffff) < 7);
          if (bVar6) {
            bVar7 = true;
            unaff_r17 = (ulonglong)(byte)g_heroMobyPtr->field82_0xbd;
            dVar36 = (double)(float)g_heroMobyPtr->unk84;
          }
        }
        else {
          bVar7 = true;
          unaff_r17 = (ulonglong)*(byte *)((int)param_1 + 0xbd);
          dVar36 = (double)param_1[0x21];
        }
      }
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      if (*(char *)(param_1 + 8) == -1) break;
      if ((((-1 < *(char *)(param_1 + 8)) && (((uint)param_1[0xd] & 0x810000) == 0)) &&
          (piVar2 = (int *)param_1[9], piVar2 != (int *)0x0)) &&
         (iVar15 = FUN_005e8638(iVar17,*(undefined2 *)((int)param_1 + 0x36)), iVar15 == 0)) {
        dVar33 = 0.0009765625;
        dVar35 = (double)(param_1[3] * 0.0009765625);
        FUN_005e868c(uVar12 - 0xf8,param_1);
        FUN_005e86a8(0x4090000000000000,uVar12 - 0xec,uVar12 - 0xf8);
        puVar5[0x3c] = (longlong)(int)*(short *)((int)param_1 + 0x32);
        *(undefined4 *)(puVar5 + 6) = *(undefined4 *)((int)puVar5 + 0x1c4);
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((int)puVar5 + 0x1cc);
        *(undefined4 *)((int)puVar5 + 0x34) = *(undefined4 *)(puVar5 + 0x39);
        iVar15 = FUN_005e86d8(dVar35,(double)(longlong)puVar5[0x3c],puVar5[6],puVar5[7]);
        if (iVar15 != 0) {
          FUN_005e87d8((double)(float)((double)*param_1 * dVar33),
                       (double)(float)((double)param_1[1] * dVar33),
                       (double)(float)((double)param_1[2] * dVar33),uVar12 - 0x200);
          if (!bVar7) {
            pRVar29 = M_Depth;
            pRVar31 = M_Pass;
          }
          puVar5[0x3c] = (ulonglong)*(byte *)((int)param_1 + 0x23);
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)((int)puVar5 + 0x1c4);
          uVar16 = DAT_00a24608;
          *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((int)puVar5 + 0x1cc);
          *(undefined4 *)(puVar5 + 8) = uVar16;
          *(undefined4 *)(puVar5 + 9) = DAT_00a24610;
          uVar16 = DAT_00a2460c;
          *(undefined4 *)((int)puVar5 + 0x34) = *(undefined4 *)(puVar5 + 0x39);
          *(undefined4 *)((int)puVar5 + 0x44) = uVar16;
          dVar34 = (double)(longlong)puVar5[0x3c];
          dVar32 = (double)FUN_005e87e8(puVar5[6],puVar5[7],puVar5[8],puVar5[9]);
          bVar6 = false;
          puVar5[0x3c] = (longlong)(int)*(short *)((int)param_1 + 0x32);
          pRVar10 = DL_Pass;
          pRVar9 = DL_DepthPass;
          if ((float)(longlong)puVar5[0x3c] - 8.0 < (float)(dVar32 - dVar35)) {
            dVar32 = (double)(((float)(longlong)puVar5[0x3c] - (float)(dVar32 - dVar35)) * 0.125);
            if (dVar32 < dVar37) {
              dVar32 = dVar37;
            }
            if (1.0 < dVar32) {
              dVar32 = 1.0;
            }
            dVar34 = (double)(float)(dVar34 * dVar32);
            bVar7 = false;
            bVar6 = true;
            *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
            pRVar9->command[1] = 0x206;
            pRVar9->command[2] = 4;
            pRVar9->command = pRVar9->command + 3;
            pRVar29 = pRVar9;
            pRVar31 = pRVar10;
          }
          if ((*(int *)(iVar17 + 0x22d8) == 0) && (((uint)param_1[0xd] & 0x8000000) != 0)) {
            pRVar31 = DL_Pass;
            pRVar29 = DL_DepthPass;
          }
          if (bVar7) {
            FUN_005e85b4(ShadowPass,0,2,3,0x1c,0);
            FUN_005e85b4(ShadowPass,1,2,2,0x1c,0);
            FUN_005e85b4(ShadowPass,3,4,4,0x1c,0);
            in_vs34 = local_200;
            FUN_004dfe70(dVar35,iVar17,unaff_r17,
                         ZEXT48(&DAT_00a4c4e0) + unaff_r17 * 0x10 & 0xffffffff);
          }
          *(undefined1 *)((int)param_1 + 0x31) = 1;
          puVar3 = (uint *)*piVar2;
          uVar30 = (uint)param_2;
          if (*(byte *)(piVar2 + 2) == 0) {
            uVar16 = idol::AllocateMemAlign(FrameHeap,0x40,0x10);
            *(undefined4 *)(uVar30 + 100) = uVar16;
          }
          else {
            uVar16 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(byte *)(piVar2 + 2) << 6,0x10);
            *(undefined4 *)(uVar30 + 100) = uVar16;
          }
          uVar22 = uVar12 - 0x220;
          *(uint *)(uVar30 + 0x68) = (uint)*(byte *)(piVar2 + 2);
          FUN_005e8848((double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[3],
                       uVar22);
          FUN_005e885c(dVar33,uVar22);
          uVar23 = 0;
          *(undefined1 (*) [16])(puVar5 + 0xe) = in_vs34;
          uStack_1d4 = in_vs34._12_4_;
          uStack_1d8 = in_vs34._8_4_;
          uStack_1dc = in_vs34._4_4_;
          local_1e0 = in_vs34._0_4_;
          puVar20 = (undefined4 *)(uVar30 + 0x40 & 0xfffffff0);
          puVar20[3] = uStack_1d4;
          puVar20[2] = uStack_1d8;
          puVar20[1] = uStack_1dc;
          *puVar20 = local_1e0;
          uVar24 = (ulonglong)*(uint *)(uVar30 + 100);
          if (*(char *)(piVar2 + 2) != '\0') {
            do {
              puVar5[0x3e] = uVar22;
              FUN_005e88f0(uVar12 - 0x150);
              FUN_005e8940(uVar24,uVar12 - 0x150);
              uVar23 = uVar23 + 1;
              uVar22 = puVar5[0x3e];
              uVar24 = uVar24 + 0x40;
            } while (uVar23 < *(byte *)(piVar2 + 2));
          }
          *(uint *)(uVar30 + 0x5c) = *(int *)(iVar17 + 0x4a8) + puVar3[4];
          uVar1 = *(ushort *)(puVar3 + 6);
          *(ushort *)(uVar30 + 0x50) = uVar1;
          iVar15 = idol::AllocateMemAlign
                             (FrameHeap,
                              ((ulonglong)uVar1 + (ulonglong)*(ushort *)((int)puVar3 + 0x1a)) * 0x1c
                              ,0x10);
          *(int *)(uVar30 + 0x60) = iVar15;
          *(undefined2 *)(uVar30 + 0x52) = *(undefined2 *)((int)puVar3 + 0x1a);
          *(undefined2 *)(uVar30 + 0x54) = *(undefined2 *)(puVar3 + 7);
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          *(int *)(uVar30 + 0x6c) = (int)uVar18;
          *(int *)(uVar30 + 0x70) = (int)((ulonglong)uVar18 >> 0x20);
          fVar4 = param_1[0x24];
          *(short *)(uVar30 + 0x96) = (short)unaff_r17;
          *(float *)(uVar30 + 0x74) = fVar4;
          *(float *)(uVar30 + 0x7c) = param_1[0x18];
          *(int *)(uVar30 + 0x84) = piVar2[6];
          *(float *)(uVar30 + 0x8c) = param_1[0x1a];
          *(float *)(uVar30 + 0x90) = param_1[0x1b];
          *(float *)(uVar30 + 0x78) = param_1[0x15];
          *(float *)(uVar30 + 0x80) = param_1[0x19];
          *(char *)(uVar30 + 0x94) =
               (char)((ulonglong)
                      (LZCOUNT((*(byte *)(param_1 + 0x14) + 1) -
                               (uint)*(byte *)((int)param_1 + 0x51)) << 0x20) >> 0x25);
          *(int *)(uVar30 + 0x88) = piVar2[5];
          puVar5[0x3c] = (longlong)dVar34;
          *(char *)(uVar30 + 0x95) = (char)*(undefined4 *)((int)puVar5 + 0x1e4);
          puVar5[0x3c] = (longlong)(int)*(short *)(piVar2 + 1);
          fVar4 = (float)(longlong)puVar5[0x3c] * 0.00024414062;
          *(float *)(puVar5 + 0x3a) = fVar4;
          *(float *)((int)puVar5 + 0x1d4) = fVar4;
          *(float *)(puVar5 + 0x3b) = fVar4;
          *(float *)((int)puVar5 + 0x1dc) = fVar4;
          uVar16 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar5 + 0x3a),0x98,param_2)
          ;
          *(undefined4 *)(uVar30 + 0x98 & 0xfffffffc) = uVar16;
          puVar5[0x3c] = (longlong)(int)*(short *)((int)piVar2 + 6);
          fVar4 = (float)(longlong)puVar5[0x3c] * 0.00024414062;
          *(float *)(puVar5 + 0x3a) = fVar4;
          *(float *)((int)puVar5 + 0x1d4) = fVar4;
          *(float *)(puVar5 + 0x3b) = fVar4;
          *(float *)((int)puVar5 + 0x1dc) = fVar4;
          uVar16 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar5 + 0x3a),0x9c,param_2)
          ;
          *(undefined4 *)(uVar30 + 0x9c & 0xfffffffc) = uVar16;
          *(float **)(uVar30 + 0xa0) = param_1;
          RVar26 = iVar15 - *(int *)(iVar17 + 0x4a8);
          uVar24 = (ulonglong)RVar26;
          lVar13 = uVar24 + 0x18;
          lVar25 = uVar24 + 0xc;
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            FUN_005e8970(pRVar31,0,uVar24);
            FUN_005e8970(pRVar31,1,lVar25);
            FUN_005e8970(pRVar31,3,lVar13);
            FUN_005e899c(pRVar31,puVar3[5]);
            if (pRVar29 != (RenderingStep *)0x0) {
              FUN_005e8970(pRVar29,0,uVar24);
              FUN_005e8970(pRVar29,1,lVar25);
              FUN_005e8970(pRVar29,3,lVar13);
              FUN_005e899c(pRVar29,puVar3[5]);
            }
            pRVar9 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
              pRVar9->command[1] = RVar26 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              *ShadowPass->command = 0x41684;
              pRVar9->command[1] = (RsxCmd)lVar25 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              *ShadowPass->command = 0x4168c;
              pRVar9->command[1] = (RsxCmd)lVar13 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              RVar26 = puVar3[5];
              *ShadowPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
              pRVar9->command[1] = RVar26;
              pRVar9->command[2] = 0x11;
              pRVar9->command = pRVar9->command + 3;
            }
          }
          else {
            FUN_005e8970(HUD_Pass,0,uVar24);
            FUN_005e8970(HUD_Pass,1,lVar25);
            FUN_005e8970(HUD_Pass,3,lVar13);
            FUN_005e899c(HUD_Pass,puVar3[5]);
          }
          lVar13 = uVar12 - 400;
          FUN_005e89c4(lVar13,param_1 + 0x30);
          FUN_005e89f4((double)param_1[0xb],lVar13);
          FUN_005e8848((double)param_1[4],(double)param_1[5],(double)param_1[6],0x3ff0000000000000,
                       uVar22);
          puVar20 = (undefined4 *)((uint)uVar22 & 0xfffffff0);
          uVar18 = *(undefined8 *)(puVar20 + 2);
          uVar38 = puVar20[1];
          uVar16 = *puVar20;
          puVar27 = (undefined4 *)lVar13;
          uVar41 = puVar27[2];
          uVar40 = puVar27[1];
          uVar39 = *puVar27;
          puVar20 = (undefined4 *)(uVar30 & 0xfffffff0);
          puVar20[3] = puVar27[3];
          puVar20[2] = uVar41;
          puVar20[1] = uVar40;
          *puVar20 = uVar39;
          puVar20 = (undefined4 *)(uVar30 + 0x10 & 0xfffffff0);
          puVar20[3] = uStack_174;
          puVar20[2] = uStack_178;
          puVar20[1] = uStack_17c;
          *puVar20 = local_180;
          puVar20 = (undefined4 *)(uVar30 + 0x20 & 0xfffffff0);
          puVar20[3] = uStack_164;
          puVar20[2] = uStack_168;
          puVar20[1] = uStack_16c;
          *puVar20 = local_170;
          uStack_154 = (undefined4)uVar18;
          uStack_158 = (undefined4)((ulonglong)uVar18 >> 0x20);
          puVar20 = (undefined4 *)(uVar30 + 0x30 & 0xfffffff0);
          puVar20[3] = uStack_154;
          puVar20[2] = uStack_158;
          puVar20[1] = uVar38;
          *puVar20 = uVar16;
          *(float *)(uVar30 + 0x58) = param_1[0xb];
          FUN_005e8a94(uVar12 - 0x1d0,lVar13);
          puVar20 = (undefined4 *)(uVar12 - 0x1d0);
          uVar39 = puVar20[2];
          uVar38 = puVar20[1];
          uVar16 = *puVar20;
          puVar27[3] = puVar20[3];
          puVar27[2] = uVar39;
          puVar27[1] = uVar38;
          *puVar27 = uVar16;
          uStack_164 = uStack_1a4;
          uStack_168 = uStack_1a8;
          uStack_16c = uStack_1ac;
          local_170 = local_1b0;
          uStack_174 = uStack_1b4;
          uStack_178 = uStack_1b8;
          uStack_17c = uStack_1bc;
          local_180 = local_1c0;
          auVar8._0_4_ = local_1a0;
          auVar8._4_4_ = uStack_19c;
          auVar8._8_4_ = uStack_198;
          auVar8._12_4_ = uStack_194;
          FUN_005e8b10(dVar37,dVar37,dVar37,uVar12 - 0x210);
          pRVar9 = HUD_Pass;
          in_vs34 = vectorConditionalSelect
                              (*(undefined1 (*) [16])(uVar12 - 0x210),auVar8,_DAT_000f7ae0);
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            iVar15 = 0x10;
            *pRVar31->command = 0x441efc;
            pRVar31->command[1] = 4;
            pRVar31->command = pRVar31->command + 2;
            lVar25 = lVar13;
            do {
              pRVar14 = (RsxCmd *)lVar25;
              iVar15 = iVar15 + -1;
              lVar25 = lVar25 + 4;
              *pRVar31->command = *pRVar14;
              pRVar31->command = pRVar31->command + 1;
            } while (iVar15 != 0);
            if (pRVar29 != (RenderingStep *)0x0) {
              iVar15 = 0x10;
              *pRVar29->command = 0x441efc;
              pRVar29->command[1] = 4;
              pRVar29->command = pRVar29->command + 2;
              lVar25 = lVar13;
              do {
                iVar15 = iVar15 + -1;
                pRVar14 = (RsxCmd *)lVar25;
                lVar25 = lVar25 + 4;
                *pRVar29->command = *pRVar14;
                pRVar29->command = pRVar29->command + 1;
              } while (iVar15 != 0);
            }
            pRVar9 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = 0x441efc;
              iVar15 = 0x10;
              pRVar9->command[1] = 4;
              pRVar9->command = pRVar9->command + 2;
              do {
                iVar15 = iVar15 + -1;
                pRVar14 = (RsxCmd *)lVar13;
                lVar13 = lVar13 + 4;
                *pRVar9->command = *pRVar14;
                pRVar9->command = pRVar9->command + 1;
              } while (iVar15 != 0);
            }
          }
          else {
            uVar30 = 0;
            *HUD_Pass->command = 0x441efc;
            pRVar9->command[1] = 4;
            pRVar9->command = pRVar9->command + 2;
            do {
              uVar30 = uVar30 + 1;
              pRVar14 = (RsxCmd *)lVar13;
              lVar13 = lVar13 + 4;
              *pRVar9->command = *pRVar14;
              pRVar9->command = pRVar9->command + 1;
            } while (uVar30 < 0x10);
          }
          param_2 = param_2 + 0xb0 & 0xffffffff;
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            puVar20 = (undefined4 *)puVar3[2];
            uVar30 = 0;
            if (*puVar3 != 0) {
              do {
                FUN_004d676c(pRVar31,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                             ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                FUN_005e8b20(pRVar31,5);
                FUN_005e8b5c(pRVar31,puVar20[1],puVar20[2]);
                *pRVar31->command = NV4097_SET_BEGIN_END_x1;
                pRVar31->command[1] = 0;
                pRVar31->command = pRVar31->command + 2;
                if (pRVar29 != (RenderingStep *)0x0) {
                  FUN_004d676c(pRVar29,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                               ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                  FUN_005e8b20(pRVar29,5);
                  FUN_005e8b5c(pRVar29,puVar20[1],puVar20[2]);
                  *pRVar29->command = NV4097_SET_BEGIN_END_x1;
                  pRVar29->command[1] = 0;
                  pRVar29->command = pRVar29->command + 2;
                }
                if (bVar7) {
                  FUN_004d676c(ShadowPass,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                               ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                  FUN_005e8b20(ShadowPass,5);
                  FUN_005e8b5c(ShadowPass,puVar20[1],puVar20[2]);
                  pRVar9 = ShadowPass;
                  *ShadowPass->command = NV4097_SET_BEGIN_END_x1;
                  pRVar9->command[1] = 0;
                  pRVar9->command = pRVar9->command + 2;
                }
                uVar30 = uVar30 + 1;
                puVar20 = puVar20 + 4;
              } while (uVar30 < *puVar3);
            }
            if (puVar3[1] != 0) {
              uVar30 = 0;
              *pRVar31->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x10001;
              pRVar31->command = pRVar31->command + 3;
              puVar20 = (undefined4 *)puVar3[3];
              if (puVar3[1] != 0) {
                do {
                  FUN_004d676c(pRVar31,0,*puVar20,3,3);
                  FUN_005e8b20(pRVar31,5);
                  FUN_005e8b5c(pRVar31,puVar20[1],puVar20[2]);
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 4;
                  *pRVar31->command = NV4097_SET_BEGIN_END_x1;
                  pRVar31->command[1] = 0;
                  pRVar31->command = pRVar31->command + 2;
                } while (uVar30 < puVar3[1]);
              }
              *pRVar31->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x3030303;
              pRVar31->command = pRVar31->command + 3;
            }
            if (bVar6) {
              *pRVar29->command = NV4097_SET_ALPHA_FUNC_x2;
              pRVar29->command[1] = 0x206;
              pRVar29->command[2] = 0xff;
              pRVar29->command = pRVar29->command + 3;
            }
            pRVar31 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x41744;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x41748;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x4174c;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              in_vs34 = local_200;
              FUN_004e1b80(dVar35,dVar36,iVar17,unaff_r17,
                           ZEXT48(&DAT_00a4c4e0) + unaff_r17 * 0x10 & 0xffffffff);
            }
          }
          else {
            puVar20 = (undefined4 *)puVar3[2];
            uVar30 = 0;
            if (*puVar3 != 0) {
              do {
                FUN_004d676c(HUD_Pass,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                             ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                FUN_005e8b20(HUD_Pass,5);
                FUN_005e8b5c(HUD_Pass,puVar20[1],puVar20[2]);
                pRVar31 = HUD_Pass;
                uVar30 = uVar30 + 1;
                puVar20 = puVar20 + 4;
                *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
                pRVar31->command[1] = 0;
                pRVar31->command = pRVar31->command + 2;
              } while (uVar30 < *puVar3);
            }
            pRVar31 = HUD_Pass;
            if (puVar3[1] != 0) {
              uVar30 = 0;
              *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x10001;
              pRVar31->command = pRVar31->command + 3;
              puVar20 = (undefined4 *)puVar3[3];
              if (puVar3[1] != 0) {
                do {
                  FUN_004d676c(HUD_Pass,0,*puVar20,3,3);
                  FUN_005e8b20(HUD_Pass,5);
                  FUN_005e8b5c(HUD_Pass,puVar20[1],puVar20[2]);
                  pRVar31 = HUD_Pass;
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 4;
                  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
                  pRVar31->command[1] = 0;
                  pRVar31->command = pRVar31->command + 2;
                } while (uVar30 < puVar3[1]);
              }
              pRVar31 = HUD_Pass;
              *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x3030303;
              pRVar31->command = pRVar31->command + 3;
            }
          }
        }
      }
      param_1 = param_1 + 0x40;
    } while (param_1 != pfVar21);
  }
  pRVar29 = HUD_Pass;
  pRVar31 = DL_DepthPass;
  if (*(int *)(iVar17 + 0x22d8) == 0) {
    *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    iVar17 = 3;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 1;
    pRVar31->command = pRVar31->command + 3;
    do {
      iVar15 = *(int *)((int)lVar28 + 0x1a0);
      iVar19 = *(int *)((int)lVar28 + 0x1ac);
      **(undefined4 **)(iVar15 + 8) = 0x41740;
      iVar17 = iVar17 + -1;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x41744;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      lVar28 = lVar28 + 4;
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x41748;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x4174c;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 8;
      **(undefined4 **)(iVar19 + 8) = 0x41740;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar19 + 8) + 8);
      *(undefined4 **)(iVar19 + 8) = puVar20;
      *puVar20 = 0x41744;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar19 + 8) + 8);
      *(undefined4 **)(iVar19 + 8) = puVar20;
      *puVar20 = 0x4174c;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      *(int *)(iVar19 + 8) = *(int *)(iVar19 + 8) + 8;
    } while (iVar17 != 0);
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar29->command[1] = 2;
    pRVar29->command = pRVar29->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x41744;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x41748;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x4174c;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    libc::memset(HUD_Pass + 1,0,0x90);
    libc::memset(&pRVar31[8].command,0xff,0x48);
    pRVar31[9].field7_0x10 = 0;
    pRVar31[9].callback = (undefined *)0x0;
    idol_draw::BindVertexProgram(iVar17,HUD_Pass,0xc);
    idol_draw::BindFragmentProgram(iVar17,HUD_Pass,0xc);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 0;
    pRVar31->command = pRVar31->command + 3;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
    pRVar31->command[1] = 0x80068006;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar31->command[1] = 0x3020302;
    pRVar31->command[2] = 0x3030303;
    pRVar31->command = pRVar31->command + 3;
  }
  return param_2;
}



//==== 000f959c  ns=mobyfunc  size=0x324
// sig: undefined FindMobysCloseToUpdate(void)
// callers(2): 000fc168 mobyfunc::UpdateMobys; 000fc238 mobyfunc::UpdateMobysDebug
// callees(2): 00502a64 fastfunc::FastVecSub; 005d0140 libc::memset

int mobyfunc::FindMobysCloseToUpdate(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar13;
  ulonglong unaff_r30;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar7 = uVar6 - 0x820;
  puVar4 = (ulonglong *)lVar7;
  *puVar4 = uVar6;
  puVar4[0x106] = in_LR;
  puVar4[0x102] = unaff_r30;
  puVar4[0x103] = unaff_r31;
  puVar15 = &DAT_00a49344;
  puVar4[0x101] = unaff_r29;
  puVar4[0x100] = unaff_r28;
  libc::memset(uVar6 - 0x7a0,0,0x700);
  libc::memset(uVar6 - 0xa0,0,0x70);
  for (pMVar13 = MobyInstance; pMVar13->state != 0xff; pMVar13 = pMVar13 + 1) {
    if ((-1 < (char)pMVar13->state) && ((pMVar13->modeBits & NO_UPDATE) == NONE)) {
      bVar1 = pMVar13->enabled != '\0';
      if ((pMVar13->drawDistance == 0xff) || (pMVar13->updateDistance == -1)) {
        bVar1 = true;
      }
      else {
        fastfunc::FastVecSub(uVar6 - 0x7b0,&pMVar13->pos,0x951500);
        puVar4[0xfe] = (ulonglong)(byte)pMVar13->updateDistance;
        if (*(float *)(puVar4 + 0xe) * *(float *)(puVar4 + 0xe) +
            *(float *)((int)puVar4 + 0x74) * *(float *)((int)puVar4 + 0x74) +
            *(float *)(puVar4 + 0xf) * *(float *)(puVar4 + 0xf) <
            (float)(longlong)puVar4[0xfe] * (float)(longlong)puVar4[0xfe]) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        if (pMVar13->group < '\0') {
          puVar14 = puVar15;
          if ((pMVar13->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
            puVar14 = puVar15 + 1;
            *puVar15 = pMVar13;
          }
          bVar2 = pMVar13->mClass;
          puVar15 = puVar14;
          if (*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) == 0) {
            *(MobyInstance **)((int)puVar4 + (uint)bVar2 * 8 + 0x84) = pMVar13;
            *(MobyInstance **)(puVar4 + pMVar13->mClass + 0x10) = pMVar13;
          }
          else {
            *(MobyInstance **)(*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) + 0x28) = pMVar13;
            *(MobyInstance **)((int)puVar4 + (uint)pMVar13->mClass * 8 + 0x84) = pMVar13;
          }
        }
        else {
          *(undefined1 *)((int)puVar4 + (byte)pMVar13->group + 0x780) = 1;
        }
      }
    }
  }
  iVar12 = 0;
  iVar8 = 0;
  lVar9 = lVar7;
  do {
    if (*(char *)((int)lVar9 + 0x780) != '\0') {
      puVar11 = *(ushort **)((int)&mobyutil::g_MobyGroups + iVar8);
      puVar14 = puVar15;
      while( true ) {
        pMVar13 = MobyInstance + (*puVar11 & 0x7fff);
        puVar15 = puVar14;
        if ((pMVar13->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
          puVar15 = puVar14 + 1;
          *puVar14 = pMVar13;
        }
        bVar2 = pMVar13->mClass;
        if (*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) == 0) {
          *(MobyInstance **)((int)puVar4 + (uint)bVar2 * 8 + 0x84) = pMVar13;
          *(MobyInstance **)(puVar4 + pMVar13->mClass + 0x10) = pMVar13;
        }
        else {
          *(MobyInstance **)(*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) + 0x28) = pMVar13;
          *(MobyInstance **)((int)puVar4 + (uint)pMVar13->mClass * 8 + 0x84) = pMVar13;
        }
        if ((short)*puVar11 < 0) break;
        puVar11 = puVar11 + 1;
        puVar14 = puVar15;
      }
    }
    iVar12 = iVar12 + 1;
    lVar9 = lVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar12 < 0x70);
  iVar8 = 0;
  uVar10 = 0;
  iVar12 = 0;
  do {
    iVar5 = (int)lVar7;
    iVar3 = *(int *)(iVar5 + 0x80);
    if (iVar3 != 0) {
      if (iVar12 == 0) {
        iVar8 = *(int *)(iVar5 + 0x84);
        iVar12 = iVar3;
      }
      else {
        *(int *)(iVar8 + 0x28) = iVar3;
        *(undefined4 *)(*(int *)(iVar5 + 0x84) + 0x28) = 0;
        iVar8 = *(int *)(iVar5 + 0x84);
      }
    }
    uVar10 = uVar10 + 1;
    lVar7 = lVar7 + 8;
  } while (uVar10 < 0xe0);
  *puVar15 = 0;
  return iVar12;
}



//==== 000f98d8  ns=mobyfunc  size=0x380
// sig: undefined UpdateMobyAnimFrame(void)
// callers(22): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 000914e0 hero::Hero_UpdateGadgetMobys; 000fc024 mobyfunc::UpdateMobysInitial; 000fc168 mobyfunc::UpdateMobys; 000fc238 mobyfunc::UpdateMobysDebug; 00117f38 mobyutil::MB_AttachMobyToJoint; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC; 00150d78 pause::MenuHero_MobyUpdateE; 00150e88 pause::MenuHero_MobyUpdateF; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 003968d8 mobyupdate_unsorted::UpdateMoby_a_lot_3; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 004091a0 mobyupdate_unsorted::UpdateMoby_666; 004766a8 mobyupdate_helpers::M822_004766a8; 00476cb0 mobyupdate_helpers::M822_00476cb0
// callees(3): 000efba0 mobyfunc::MB_UpdateLoopSound; 0015d12c sound::PlayMobySound; 00502758 fastfunc::FastDoubleToInt

void mobyfunc::UpdateMobyAnimFrame(MobyInstance *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  short *psVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar15 = (double)param_1->frameSpeed;
  bVar14 = 0;
  if ((dVar15 == 0.0) || ((double)param_1->unk58 == 0.0)) goto LAB_000f9bec;
  bVar13 = param_1->updateId;
  bVar1 = param_1->animationId;
  dVar17 = (double)param_1->animationBlend;
  dVar16 = dVar15;
  if (bVar13 == bVar1) {
    dVar16 = (double)(float)(dVar15 * (double)param_1->unk58);
  }
  dVar16 = (double)(float)(dVar16 + dVar17);
  if ((0.996999979019165 < dVar16) && (dVar16 < 1.003000020980835)) {
    dVar16 = 1.0;
  }
  bVar2 = param_1->previousAnimationFrame;
  iVar4 = *(int *)(&param_1->pClass->type + (uint)bVar1 * 4);
  fVar3 = *(float *)(iVar4 + 0x18);
  if (dVar16 < 1.0) {
    if (dVar16 < 0.0) {
      iVar7 = 8;
      uVar9 = (ulonglong)bVar2;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 - 1 & 0xffffffff;
        pvVar6 = param_1->pPreviousAnimationData;
        if ((char)uVar9 < '\0') {
          bVar14 = 2;
          uVar9 = (ulonglong)*(byte *)(iVar4 + 0x10) - 1 & 0xffffffff;
        }
        uVar9 = uVar9 & 0xff;
        pfVar5 = *(float **)(iVar4 + 0x1c + (int)(uVar9 << 2));
        if (fVar3 == 0.0) {
          fVar3 = *pfVar5;
        }
        iVar7 = iVar7 + -1;
        dVar16 = (double)(fVar3 * (float)(dVar16 / dVar15) + 1.0);
        if (iVar7 < 1) {
          dVar16 = 0.0;
        }
      } while (dVar16 < 0.0);
      goto LAB_000f9af0;
    }
    param_1->animationBlend = (float)dVar16;
    param_1->field43_0x70 = '\0';
  }
  else {
    iVar7 = 8;
    uVar11 = (ulonglong)(byte)param_1->animationFrame;
    do {
      uVar9 = uVar11;
      pfVar5 = (float *)param_1->pCurrentAnimationData;
      uVar11 = uVar9 + 1 & 0xff;
      if (bVar13 != bVar1) {
        param_1->unk7e = *(char *)(iVar4 + 0x12);
        bVar13 = bVar1;
      }
      fVar3 = *(float *)(iVar4 + 0x18);
      bVar14 = bVar14 | 1;
      if ((uint)*(byte *)(iVar4 + 0x10) <= (uint)uVar11) {
        uVar11 = 0;
        bVar14 = 3;
      }
      pvVar6 = *(void **)(iVar4 + 0x1c + (int)(uVar11 << 2));
      if (fVar3 == 0.0) {
        fVar3 = *pfVar5;
      }
      iVar7 = iVar7 + -1;
      dVar16 = (double)(fVar3 * (float)((double)(float)(dVar16 - 1.0) / dVar15));
      if (iVar7 < 1) {
        dVar16 = 0.0;
      }
    } while (1.0 <= dVar16);
LAB_000f9af0:
    param_1->updateId = bVar13;
    param_1->previousAnimationFrame = (char)uVar9;
    param_1->animationFrame = (char)uVar11;
    param_1->pPreviousAnimationData = pfVar5;
    param_1->pCurrentAnimationData = pvVar6;
    param_1->frameSpeed = fVar3;
    param_1->animationBlend = (float)dVar16;
    param_1->field43_0x70 = bVar14;
  }
  if (param_1->unk7e != '\0') {
    dVar15 = 16.0;
    iVar7 = fastfunc::FastDoubleToInt((double)(param_1->animationBlend * 16.0));
    bVar13 = param_1->previousAnimationFrame;
    iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * dVar15));
    iVar12 = 0;
    iVar4 = *(int *)(&param_1->pClass->type + (uint)param_1->updateId * 4);
    psVar10 = (short *)(iVar4 + 0x1c + (uint)*(byte *)(iVar4 + 0x10) * 4);
    if (*(char *)(iVar4 + 0x12) != '\0') {
      do {
        if ((int)((uint)bVar2 * 0x10 + iVar8) < (int)psVar10[1] &&
            (int)psVar10[1] <= (int)((uint)bVar13 * 0x10 + iVar7)) {
          sound::PlayMobySound((int)*psVar10,0,param_1);
          break;
        }
        iVar12 = iVar12 + 1;
        psVar10 = psVar10 + 2;
      } while (iVar12 < (int)(uint)*(byte *)(iVar4 + 0x12));
    }
  }
LAB_000f9bec:
  param_1->field43_0x70 = bVar14;
  if ((param_1->unk7c != param_1->unk7d) &&
     ((param_1->unk7d != -1 || (((uint)param_1 >> 8 & 3) == (worldUpdateTime & 3))))) {
    MB_UpdateLoopSound(param_1);
  }
  return;
}



//==== 000f9c58  ns=mobyfunc  size=0xc0
// sig: undefined MB_ProcessJoints(void)
// callers(0): 
// callees(4): 000f34e8 mobyfunc::MB_TransformJointBatch; 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames

void mobyfunc::MB_ProcessJoints(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar2 + 8);
  if (cVar1 == '\0') {
    MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar2 + 8),
                                param_2,*(undefined4 *)(iVar2 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    MB_TransformJointBatch(uVar3,cVar1,param_2);
  }
  return;
}



//==== 000f9d18  ns=mobyfunc  size=0x2a8
// sig: undefined MB_ComputeSelectedJoints(void)
// callers(5): 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f1364 mobyfunc::GetMobyJointsWorldMtx; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6
// callees(5): 000f34e8 mobyfunc::MB_TransformJointBatch; 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 005d0140 libc::memset

/* [p2_mobyutil] (moby, count, jointIdx[], outMtx) computes anim matrices for listed joints */

void mobyfunc::MB_ComputeSelectedJoints(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  ushort *puVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_r10;
  int iVar13;
  int iVar14;
  
  iVar14 = 0;
  libc::memset(&DAT_00a34700,0,0x80);
  iVar7 = 0;
  pbVar8 = &DAT_00a34780;
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
  if (0 < param_2) {
    iVar13 = 0;
    pbVar9 = pbVar8;
    do {
      uVar12 = 0;
      puVar2 = *(ushort **)(iVar5 + 4 + *(int *)(param_3 + iVar13) * 4);
      uVar11 = (uint)*puVar2;
      puVar2 = puVar2 + 2;
      if (uVar11 != 0) {
        do {
          in_r10 = (ulonglong)*(byte *)puVar2;
          uVar12 = uVar12 + 1;
          (&DAT_00a34700)[*(byte *)puVar2] = 1;
          puVar2 = (ushort *)((int)puVar2 + 1);
        } while (uVar12 < uVar11);
      }
      *pbVar9 = (byte)in_r10;
      pbVar9 = pbVar9 + 1;
      if (iVar4 < (int)in_r10) {
        iVar4 = (int)in_r10;
      }
      iVar7 = iVar7 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar7 < param_2);
  }
  DAT_00a3477f = (char)iVar4 + '\x01';
  (&DAT_00a34700)[iVar4] = 0xff;
  iVar5 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar5 + 8);
  if (cVar1 == '\0') {
    iVar5 = MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar5 + 8),
                                *(undefined1 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    iVar5 = MB_TransformJointBatch(uVar3,cVar1,&DAT_00a34700);
  }
  if (0 < param_2) {
    do {
      iVar4 = (uint)*pbVar8 * 0x40;
      puVar10 = (undefined4 *)(iVar5 + iVar4);
      puVar6 = (undefined4 *)(iVar5 + 0x10 + iVar4);
      iVar14 = iVar14 + 1;
      *param_4 = *puVar10;
      param_4[1] = puVar10[1];
      param_4[2] = puVar10[2];
      param_4[3] = puVar10[3];
      puVar10 = (undefined4 *)(iVar5 + 0x20 + iVar4);
      param_4[4] = *puVar6;
      param_4[5] = puVar6[1];
      pbVar8 = pbVar8 + 1;
      param_4[6] = puVar6[2];
      param_4[7] = puVar6[3];
      puVar6 = (undefined4 *)(iVar5 + 0x30 + iVar4);
      param_4[8] = *puVar10;
      param_4[9] = puVar10[1];
      param_4[10] = puVar10[2];
      param_4[0xb] = puVar10[3];
      param_4[0xc] = *puVar6;
      param_4[0xd] = puVar6[1];
      param_4[0xe] = puVar6[2];
      param_4[0xf] = puVar6[3];
      param_4 = param_4 + 0x10;
    } while (iVar14 < param_2);
  }
  return;
}



//==== 000f9fc0  ns=mobyfunc  size=0x210
// sig: undefined MB_ComputeSelectedJointPos(void)
// callers(1): 000f1238 mobyfunc::GetMobyJointsWorldPos
// callees(5): 000f34e8 mobyfunc::MB_TransformJointBatch; 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 005d0140 libc::memset

void mobyfunc::MB_ComputeSelectedJointPos(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  ushort *puVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong in_r10;
  int iVar12;
  int iVar13;
  
  iVar13 = 0;
  libc::memset(&DAT_00a34700,0,0x80);
  iVar7 = 0;
  pbVar8 = &DAT_00a34780;
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
  if (0 < param_2) {
    iVar12 = 0;
    pbVar9 = pbVar8;
    do {
      uVar11 = 0;
      puVar2 = *(ushort **)(iVar5 + 4 + *(int *)(param_3 + iVar12) * 4);
      uVar10 = (uint)*puVar2;
      puVar2 = puVar2 + 2;
      if (uVar10 != 0) {
        do {
          in_r10 = (ulonglong)*(byte *)puVar2;
          uVar11 = uVar11 + 1;
          (&DAT_00a34700)[*(byte *)puVar2] = 1;
          puVar2 = (ushort *)((int)puVar2 + 1);
        } while (uVar11 < uVar10);
      }
      *pbVar9 = (byte)in_r10;
      pbVar9 = pbVar9 + 1;
      if (iVar4 < (int)in_r10) {
        iVar4 = (int)in_r10;
      }
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar7 < param_2);
  }
  DAT_00a3477f = (char)iVar4 + '\x01';
  (&DAT_00a34700)[iVar4] = 0xff;
  iVar5 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar5 + 8);
  if (cVar1 == '\0') {
    iVar5 = MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar5 + 8),
                                *(undefined1 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    iVar5 = MB_TransformJointBatch(uVar3,cVar1,&DAT_00a34700);
  }
  if (0 < param_2) {
    do {
      iVar13 = iVar13 + 1;
      puVar6 = (undefined4 *)(iVar5 + 0x30 + (uint)*pbVar8 * 0x40);
      pbVar8 = pbVar8 + 1;
      *param_4 = *puVar6;
      param_4[1] = puVar6[1];
      param_4[2] = puVar6[2];
      param_4[3] = puVar6[3];
      param_4 = param_4 + 4;
    } while (iVar13 < param_2);
  }
  return;
}



//==== 000fa1e0  ns=mobyfunc  size=0x19c
// sig: undefined GetBlenderAtPnt(Vec4 * position, float * outBlend, undefined4 outBlender)
// callers(2): 00053398 camera::Camera_UpdateFog; 000fa3a8 mobyfunc::SetMobyLightFromBlender
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 mobyfunc::GetBlenderAtPnt(Vec4 *position,float *outBlend,int *outBlender)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int blender;
  float *pfVar7;
  
  blender = 0;
  fVar1 = position->x;
  *outBlender = -1;
  fVar2 = position->y;
  fVar3 = position->z;
  pfVar7 = (float *)&DAT_00a1c900;
  if (0 < BlenderCnt) {
    do {
      if ((fVar1 - *pfVar7) * (fVar1 - *pfVar7) + (fVar2 - pfVar7[1]) * (fVar2 - pfVar7[1]) +
          (fVar3 - pfVar7[2]) * (fVar3 - pfVar7[2]) < pfVar7[3]) {
        bVar6 = false;
        fVar4 = g_Blenders[blender].invMatrix.v0.x * fVar1 +
                g_Blenders[blender].invMatrix.v1.x * fVar2 +
                g_Blenders[blender].invMatrix.v2.x * fVar3 + g_Blenders[blender].invMatrix.v3.x;
        fVar5 = g_Blenders[blender].invMatrix.v0.z * fVar1 +
                g_Blenders[blender].invMatrix.v1.z * fVar2 +
                g_Blenders[blender].invMatrix.v2.z * fVar3 + g_Blenders[blender].invMatrix.v3.z;
        fVar1 = g_Blenders[blender].invMatrix.v0.y * fVar1 +
                g_Blenders[blender].invMatrix.v1.y * fVar2 +
                g_Blenders[blender].invMatrix.v2.y * fVar3 + g_Blenders[blender].invMatrix.v3.y;
        if ((((1.0 < fVar4) || (fVar4 < -1.0)) || (1.0 < fVar1)) ||
           (((fVar1 < -1.0 || (1.0 < fVar5)) || (fVar5 < -1.0)))) {
          bVar6 = true;
        }
        if (bVar6) {
          return 0;
        }
        *outBlender = blender;
        *outBlend = (fVar4 + 1.0) * 0.5;
        return 1;
      }
      blender = blender + 1;
      pfVar7 = pfVar7 + 4;
    } while (blender < BlenderCnt);
  }
  return 0;
}



//==== 000fa3a8  ns=mobyfunc  size=0x568
// sig: undefined SetMobyLightFromBlender(MobyInstance * moby)
// callers(4): 00086b60 hero::SetHeroType; 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate; 000d9ee8 initsky::UpdateSpaceSceneEffects
// callees(3): 000da2f8 stub::STUB_000da2f8_RET_0; 000fa1e0 mobyfunc::GetBlenderAtPnt; 005cd098 libc::printf
// strings: 00652e48: 'Leaving blender %d, ambient 0x%08x,dirs 0x%08x\n' | 00652e78: 'Entering blender %d, dlighta %d, dlightb %d, ambienta 0x%08x, ambientb 0x%08x\n'

/* Handles entering/exiting env transitions. (called blenders by the game) */

void mobyfunc::SetMobyLightFromBlender(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ABGR AVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  int iVar17;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  Blender *pBlender;
  double dVar18;
  double dVar19;
  Vec4 position;
  int blender;
  float blend;
  float local_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  position.x = (moby->pos).x;
  pBlender = (Blender *)0x0;
  position.y = (moby->pos).y;
  position.z = (moby->pos).z;
  dVar19 = 1.0;
  position.w = 1.0;
  iVar17 = GetBlenderAtPnt(&position,&blend,&blender);
  if (iVar17 != 0) {
    pBlender = g_Blenders + blender;
  }
  if (g_CurrentBlender != blender) {
    if (blender == -1) {
      uVar13._0_4_ = moby->color;
      uVar13._4_4_ = moby->light;
      libc::printf("Leaving blender %d, ambient 0x%08x,dirs 0x%08x\n",g_CurrentBlender,
                   uVar13 >> 0x20,uVar13 & 0xffffffff);
    }
    else {
      libc::printf("Entering blender %d, dlighta %d, dlightb %d, ambienta 0x%08x, ambientb 0x%08x\n"
                   ,blender,pBlender->dLightA,pBlender->dLightB,pBlender->ambientA,
                   pBlender->ambientB);
    }
    g_CurrentBlender = blender;
  }
  if ((pBlender == (Blender *)0x0) || ((pBlender->flags & 1) == 0)) {
    uVar14._0_4_ = moby->color;
    uVar14._4_4_ = moby->light;
    moby->color = (int)((uVar14 & 0xffffffff) >> 0x20);
    moby->light = (int)(uVar14 & 0xffffffff);
  }
  else {
    AVar6 = pBlender->ambientA;
    dVar18 = (double)blend;
    fVar4 = (float)(dVar19 - dVar18);
    fVar11 = fVar4 * (float)((uint)AVar6 & 0xff);
    fVar5 = 255.0;
    fVar12 = (float)((uint)AVar6 >> 8 & 0xff) * fVar4;
    fVar4 = (float)((uint)AVar6 >> 0x10 & 0xff) * fVar4;
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar12) {
      fVar12 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    AVar6 = pBlender->ambientB;
    fVar1 = (float)((double)((uint)AVar6 & 0xff) * dVar18);
    fVar2 = (float)((double)((uint)AVar6 >> 8 & 0xff) * dVar18);
    fVar3 = (float)((double)((uint)AVar6 >> 0x10 & 0xff) * dVar18);
    if (255.0 < fVar1) {
      fVar1 = fVar5;
    }
    if (255.0 < fVar2) {
      fVar2 = fVar5;
    }
    if (255.0 < fVar3) {
      fVar3 = fVar5;
    }
    fVar1 = fVar11 + fVar1 + 0.5;
    fVar4 = fVar4 + fVar3 + 0.5;
    fVar11 = fVar12 + fVar2 + 0.5;
    if (255.0 < fVar1) {
      fVar1 = fVar5;
    }
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    local_40 = (int)fVar1 | (int)fVar11 << 8 | (int)fVar4 << 0x10 | 0xff000000;
    auVar10 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x80,
                       (longlong)(int)moby);
    *(undefined4 *)((uint)&moby->colorManipulator & 0xfffffffc) = uVar9;
    local_30 = (ulonglong)(blend * 65535.0);
    uVar13 = (local_30 & 0xffff) << 0x10 |
             ((ulonglong)(uint)pBlender->dLightB & 0xff) << 8 |
             (ulonglong)(uint)pBlender->dLightA & 0xff;
    moby->color = (int)(uVar13 >> 0x20);
    moby->light = (int)uVar13;
    local_3c = local_40;
    local_38 = local_40;
    local_34 = local_40;
  }
  iVar17 = stub::STUB_000da2f8_RET_0(&position,local_48);
  if (iVar17 == 0) {
    uVar16._0_4_ = moby->color;
    uVar16._4_4_ = moby->light;
    uVar16 = uVar16 | (ulonglong)(uint)moby->colorManipulator << 0x20;
    moby->color = (int)(uVar16 >> 0x20);
    moby->light = (int)uVar16;
  }
  else {
    uVar7 = *(uint *)(iVar17 + 0x10);
    uVar8 = moby->colorManipulator;
    uVar15._0_4_ = moby->color;
    uVar15._4_4_ = moby->light;
    fVar4 = (float)(dVar19 - (double)((local_48[0] * local_48[0]) / *(float *)(iVar17 + 0xc)));
    fVar5 = 255.0;
    fVar11 = (float)(uVar7 & 0xff) * fVar4 + (float)(uVar8 & 0xff) + 0.5;
    fVar12 = (float)(uVar7 >> 8 & 0xff) * fVar4 + (float)(uVar8 >> 8 & 0xff) + 0.5;
    fVar4 = (float)(uVar7 >> 0x10 & 0xff) * fVar4 + (float)(uVar8 >> 0x10 & 0xff) + 0.5;
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar12) {
      fVar12 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    uVar15 = uVar15 | ((ulonglong)(uint)(int)fVar11 | ((ulonglong)(uint)(int)fVar12 & 0xffffff) << 8
                       | ((ulonglong)(uint)(int)fVar4 & 0xffff) << 0x10 | 0xffffffffff000000) <<
                      0x20;
    moby->color = (int)(uVar15 >> 0x20);
    moby->light = (int)uVar15;
  }
  return;
}



//==== 000fa910  ns=stub  size=0x24
// sig: undefined STUB_000fa910(void)
// callers(0): 
// callees(1): 000da2f8 stub::STUB_000da2f8_RET_0

void stub::STUB_000fa910(void)

{
  STUB_000da2f8_RET_0();
  return;
}



//==== 000fa940  ns=mobyfunc  size=0x146c
// sig: undefined InterpolateAnimation(void)
// callers(3): 00085300 hero::Hero_TransAnim; 000fddc0 mobyutil::MB_SetAnimation; 000fdf80 mobyutil::MB_SetAnimationFrame
// callees(6): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 005023bc fastfunc::FastVecScale; 005c5ad0 libc::memcpy; 005d0140 libc::memset

void * mobyfunc::InterpolateAnimation(int param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Manipulator *pMVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  undefined1 auVar16 [16];
  ulonglong *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  size_t __n;
  ulonglong uVar22;
  int iVar25;
  undefined4 *puVar26;
  int iVar27;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar28;
  longlong lVar29;
  undefined4 *puVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  int iVar36;
  int iVar38;
  ulonglong uVar37;
  int iVar40;
  ulonglong uVar39;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  longlong lVar41;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  longlong lVar42;
  ulonglong unaff_r19;
  longlong lVar43;
  ulonglong unaff_r20;
  longlong lVar44;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar46;
  longlong lVar45;
  ulonglong unaff_r29;
  int iVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar48;
  undefined4 *puVar49;
  ulonglong in_LR;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar50;
  ulonglong in_f29;
  double dVar51;
  ulonglong in_f30;
  double dVar52;
  ulonglong in_f31;
  undefined8 uVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar24 = uVar23 - 0x2320;
  puVar17 = (ulonglong *)lVar24;
  *puVar17 = uVar23;
  puVar17[0x466] = in_LR;
  puVar17[0x45f] = in_f27;
  puVar17[0x460] = in_f28;
  puVar17[0x461] = in_f29;
  puVar17[0x462] = in_f30;
  puVar17[0x463] = in_f31;
  puVar17[0x452] = unaff_r19;
  puVar17[0x44d] = unaff_r14;
  puVar17[0x45e] = unaff_r31;
  puVar17[0x45d] = unaff_r30;
  fVar3 = *(float *)(param_1 + 0x54);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  uVar9 = *(undefined4 *)(param_1 + 0x6c);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
  puVar17[0x45c] = unaff_r29;
  puVar17[0x45b] = unaff_r28;
  puVar17[0x45a] = unaff_r27;
  puVar17[0x459] = unaff_r26;
  puVar17[0x458] = unaff_r25;
  puVar17[0x457] = unaff_r24;
  puVar17[0x456] = unaff_r23;
  puVar17[0x455] = unaff_r22;
  puVar17[0x454] = unaff_r21;
  puVar17[0x453] = unaff_r20;
  puVar17[0x451] = unaff_r18;
  puVar17[0x450] = unaff_r17;
  puVar17[0x44f] = unaff_r16;
  puVar17[0x44e] = unaff_r15;
  uVar22 = MB_BlendJointFrames((double)fVar3,uVar1,uVar1,uVar10,uVar8,uVar9);
  if ((*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) && ((param_2 & 0x100) == 0)) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar22);
  }
  pMVar11 = *(Manipulator **)(param_1 + 100);
  puVar17[0x440] = uVar22;
  if ((pMVar11 != (Manipulator *)0x0) && (puVar17[0x440] = uVar22, (param_2 & 0x200) == 0)) {
    puVar17[0x440] = uVar22;
    ProcessManipulators(pMVar11,(int)uVar22);
  }
  iVar47 = *(int *)(param_1 + 0x68);
  lVar29 = ((ulonglong)param_2 & 0xff) * 0x800;
  lVar43 = ZEXT48(&DAT_00a2c5c0) + lVar29;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x24) + 8);
  uVar22 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x24) + 0x18);
  puVar18 = (undefined4 *)lVar43;
  uVar6 = *(ushort *)(iVar47 + 8);
  uVar7 = *(ushort *)(iVar47 + 8);
  *(undefined4 **)(puVar17 + 0x442) = puVar18 + 4;
  libc::memset(uVar23 - 0x1b8,0,0x81);
  iVar25 = 0;
  iVar46 = iVar47 + (uint)uVar6 + 0x10;
  if (*(short *)(iVar47 + 10) != 0) {
    do {
      iVar25 = iVar25 + 1;
      *(undefined1 *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) = *(undefined1 *)(iVar46 + 7);
      iVar46 = iVar46 + 8;
    } while (iVar25 < (int)(uint)*(ushort *)(iVar47 + 10));
  }
  iVar25 = 0;
  iVar46 = iVar47 + (uint)uVar7 + 0x10;
  if (*(short *)(iVar47 + 10) != 0) {
    do {
      iVar25 = iVar25 + 1;
      *(byte *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) =
           *(byte *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) | *(byte *)(iVar46 + 7);
      iVar46 = iVar46 + 8;
    } while (iVar25 < (int)(uint)*(ushort *)(iVar47 + 10));
  }
  lVar44 = 0;
  puVar17[0x441] = (ulonglong)bVar2;
  iVar47 = 0;
  lVar42 = 0;
  if (bVar2 != 0) {
    iVar46 = 0;
    uVar48 = puVar17[0x440];
    lVar45 = 0;
    lVar41 = lVar24;
    do {
      puVar49 = (undefined4 *)uVar48;
      *(undefined4 *)(puVar17 + 0xe) = *puVar49;
      *(undefined4 *)((int)puVar17 + 0x74) = puVar49[1];
      puVar30 = (undefined4 *)((int)puVar17[0x440] + 0x10 + iVar46);
      puVar26 = (undefined4 *)((int)puVar17[0x440] + 0x20 + iVar46);
      *(undefined4 *)(puVar17 + 0xf) = puVar49[2];
      *(undefined4 *)((int)puVar17 + 0x7c) = puVar49[3];
      *(undefined4 *)(puVar17 + 0x10) = *puVar30;
      *(undefined4 *)((int)puVar17 + 0x84) = puVar30[1];
      *(undefined4 *)(puVar17 + 0x11) = puVar30[2];
      *(undefined4 *)((int)puVar17 + 0x8c) = puVar30[3];
      *(undefined4 *)(puVar17 + 0x12) = *puVar26;
      *(undefined4 *)((int)puVar17 + 0x94) = puVar26[1];
      *(undefined4 *)(puVar17 + 0x13) = puVar26[2];
      *(undefined4 *)((int)puVar17 + 0x9c) = puVar26[3];
      uVar53 = 0x40e0000000000000;
      fastfunc::FastVecScale(0x40e0000000000000,uVar23 - 0x2280,uVar23 - 0x22b0);
      dVar52 = (double)*(float *)(puVar17 + 0x14);
      dVar51 = (double)*(float *)((int)puVar17 + 0xa4);
      dVar54 = (double)*(float *)(puVar17 + 0x15);
      dVar50 = (double)*(float *)((int)puVar17 + 0xac);
      fastfunc::FastVecScale(uVar53,uVar23 - 0x2270,uVar23 - 0x22a0);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x16);
      iVar25 = *(int *)((int)puVar17 + 0x221c);
      puVar17[0x443] = (longlong)(int)*(float *)((int)puVar17 + 0xb4);
      iVar32 = *(int *)((int)puVar17 + 0x221c);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x17);
      uVar53 = 0x4090000000000000;
      iVar34 = *(int *)((int)puVar17 + 0x221c);
      fastfunc::FastVecScale(0x4090000000000000,uVar23 - 0x2260,uVar23 - 0x2290);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x18);
      iVar12 = *(int *)((int)puVar17 + 0x221c);
      *(int *)(puVar17 + 0x43e) = iVar12;
      *(int *)((int)puVar17 + 0x21f4) = iVar12;
      *(int *)(puVar17 + 0x43f) = iVar12;
      *(int *)((int)puVar17 + 0x21fc) = iVar12;
      puVar17[0x443] = (longlong)(int)*(float *)((int)puVar17 + 0xc4);
      iVar13 = *(int *)((int)puVar17 + 0x221c);
      auVar63 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar13;
      *(int *)((int)puVar17 + 0x21f4) = iVar13;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43f) = iVar13;
      *(int *)((int)puVar17 + 0x21fc) = iVar13;
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x19);
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar14 = *(int *)((int)puVar17 + 0x221c);
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar14;
      *(int *)((int)puVar17 + 0x21f4) = iVar14;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43f) = iVar14;
      *(int *)((int)puVar17 + 0x21fc) = iVar14;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      auVar63 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      auVar63 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar63 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      fastfunc::FastVecScale(uVar53,uVar23 - 0x2250,uVar22);
      fVar3 = *(float *)(puVar17 + 0x1a);
      fVar4 = *(float *)((int)puVar17 + 0xd4);
      fVar5 = *(float *)(puVar17 + 0x1b);
      puVar17[0x443] = (longlong)(int)dVar52;
      puVar17[0x443] = (longlong)(int)dVar51;
      puVar17[0x443] = (longlong)(int)dVar54;
      puVar17[0x443] = (longlong)(int)dVar50;
      iVar40 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar40 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar55 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar38 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar38 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar38;
      *(int *)((int)puVar17 + 0x21f4) = iVar38;
      *(int *)(puVar17 + 0x43f) = iVar38;
      *(int *)((int)puVar17 + 0x21fc) = iVar38;
      auVar56 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar36 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar36 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar36;
      *(int *)((int)puVar17 + 0x21f4) = iVar36;
      *(int *)(puVar17 + 0x43f) = iVar36;
      *(int *)((int)puVar17 + 0x21fc) = iVar36;
      auVar58 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar31 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar31 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar31;
      *(int *)((int)puVar17 + 0x21f4) = iVar31;
      *(int *)(puVar17 + 0x43f) = iVar31;
      *(int *)((int)puVar17 + 0x21fc) = iVar31;
      auVar60 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar33 = uVar23 - 0x221c;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar55 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,4,lVar33);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,8,lVar33);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0xc,lVar33);
      iVar27 = 0x7fff;
      if (iVar40 < 0x7fff) {
        iVar27 = iVar40;
      }
      *(int *)(puVar17 + 0x43e) = iVar27;
      *(int *)((int)puVar17 + 0x21f4) = iVar27;
      *(int *)(puVar17 + 0x43f) = iVar27;
      *(int *)((int)puVar17 + 0x21fc) = iVar27;
      auVar55 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      iVar40 = 0x7fff;
      if (iVar38 < 0x7fff) {
        iVar40 = iVar38;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar56 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
      iVar40 = 0x7fff;
      if (iVar36 < 0x7fff) {
        iVar40 = iVar36;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar58 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
      iVar40 = 0x7fff;
      if (iVar31 < 0x7fff) {
        iVar40 = iVar31;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar60 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar33 = uVar23 - 0x220c;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar25 = iVar25 >> 3;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar34 = iVar34 >> 3;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar59 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,4,lVar33);
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,8,lVar33);
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar59 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
      auVar60 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0xc,lVar33);
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      iVar32 = iVar32 >> 3;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar60 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar32;
      *(int *)((int)puVar17 + 0x21f4) = iVar32;
      *(int *)(puVar17 + 0x43f) = iVar32;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(int *)((int)puVar17 + 0x21fc) = iVar32;
      auVar61 = auRam00000000;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar34;
      *(int *)((int)puVar17 + 0x21f4) = iVar34;
      *(int *)(puVar17 + 0x43f) = iVar34;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(int *)((int)puVar17 + 0x21fc) = iVar34;
      auVar61 = auVar61 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar33 = uVar23 - 0x2240;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar60 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,4,lVar33);
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,8,lVar33);
      iVar40 = 0;
      if (0 < iVar25) {
        iVar40 = iVar25;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar60 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar25 = 0;
      if (0 < iVar32) {
        iVar25 = iVar32;
      }
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar61 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      iVar32 = 0;
      if (0 < iVar34) {
        iVar32 = iVar34;
      }
      *(int *)(puVar17 + 0x43e) = iVar32;
      *(int *)((int)puVar17 + 0x21f4) = iVar32;
      *(int *)(puVar17 + 0x43f) = iVar32;
      *(int *)((int)puVar17 + 0x21fc) = iVar32;
      auVar16 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar33 = uVar23 - 0x2234;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar60 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,4,lVar33);
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,8,lVar33);
      iVar34 = 0xffff;
      if (iVar40 < 0xffff) {
        iVar34 = iVar40;
      }
      *(int *)(puVar17 + 0x43e) = iVar34;
      *(int *)((int)puVar17 + 0x21f4) = iVar34;
      *(int *)(puVar17 + 0x43f) = iVar34;
      *(int *)((int)puVar17 + 0x21fc) = iVar34;
      auVar60 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
      iVar40 = 0xffff;
      if (iVar25 < 0xffff) {
        iVar40 = iVar25;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar61 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar61 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
      iVar25 = 0xffff;
      if (iVar32 < 0xffff) {
        iVar25 = iVar32;
      }
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar16 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar33 = uVar23 - 0x2228;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar35 = lVar29 + 0xa2c5d2 + lVar45;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar37 = lVar29 + 0xa2c5d4 + lVar45;
      auVar57 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar62 = vectorSplatHalfWord(auVar55,1);
      auVar55 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar16 = auVar61 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar39 = lVar29 + 0xa2c5d6 + lVar45;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar57 = vectorSplatHalfWord(auVar56,1);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar58 = vectorSplatHalfWord(auVar58,1);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar59 = vectorSplatHalfWord(auVar59,1);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,4,lVar33);
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      bVar21 = false;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar55 = (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar56 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar55 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,8,lVar33);
      uVar15 = storeVectorElementHalfWordIndexed(auVar62,0x10,lVar43);
      *(undefined2 *)((int)lVar43 + 0x10) = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar57,0,uVar35 & 0xffffffff);
      *(undefined2 *)uVar35 = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar58,0,uVar37 & 0xffffffff);
      *(undefined2 *)uVar37 = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar59,0,uVar39 & 0xffffffff);
      *(undefined2 *)uVar39 = uVar15;
      if ((iVar34 != 0x1000) || (iVar25 != 0x1000 || iVar40 != 0x1000)) {
        bVar21 = true;
      }
      if (bVar21) {
        lVar33 = lVar42 * 8;
        auVar58 = vectorSplatHalfWord(auVar60,1);
        lVar42 = lVar42 + 1;
        uVar37 = lVar24 + lVar33;
        auVar60 = vectorSplatHalfWord(auVar61,1);
        auVar55 = vectorSplatHalfWord(auVar56,1);
        uVar35 = uVar37 & 0xffffffff;
        uVar1 = *(undefined1 *)((int)lVar41 + 0x2168);
        uVar15 = storeVectorElementHalfWordIndexed(auVar58,0,uVar35 + 0x124);
        *(undefined2 *)(uVar35 + 0x124) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar60,0,uVar35 + 0x126);
        *(undefined2 *)(uVar35 + 0x126) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar55,0,uVar35 + 0x128);
        *(undefined2 *)(uVar35 + 0x128) = uVar15;
        iVar25 = (int)uVar37;
        *(char *)(iVar25 + 0x12a) = (char)iVar47;
        *(undefined1 *)(iVar25 + 299) = uVar1;
      }
      bVar21 = false;
      puVar17[0x443] = (longlong)(int)fVar3;
      puVar17[0x443] = (longlong)(int)fVar4;
      puVar17[0x443] = (longlong)(int)fVar5;
      if ((iVar12 != *(int *)((int)puVar17 + 0x221c) || iVar13 != *(int *)((int)puVar17 + 0x221c))
         || (iVar14 != *(int *)((int)puVar17 + 0x221c))) {
        bVar21 = true;
      }
      if (bVar21) {
        lVar33 = lVar44 * 8;
        auVar55 = vectorSplatHalfWord(auVar65,1);
        auVar64 = vectorSplatHalfWord(auVar64,1);
        lVar44 = lVar44 + 1;
        uVar37 = lVar24 + lVar33;
        auVar63 = vectorSplatHalfWord(auVar63,1);
        uVar35 = uVar37 & 0xffffffff;
        uVar15 = storeVectorElementHalfWordIndexed(auVar55,0,uVar35 + 0x1144);
        *(undefined2 *)(uVar35 + 0x1144) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar64,0,uVar35 + 0x1146);
        *(undefined2 *)(uVar35 + 0x1146) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar63,0,uVar35 + 0x1148);
        *(undefined2 *)(uVar35 + 0x1148) = uVar15;
        iVar25 = (int)uVar37;
        *(char *)(iVar25 + 0x114a) = (char)iVar47;
        *(undefined1 *)(iVar25 + 0x114b) = 0;
      }
      iVar47 = iVar47 + 1;
      lVar43 = lVar43 + 8;
      lVar41 = lVar41 + 1;
      lVar45 = lVar45 + 8;
      uVar22 = uVar22 + 0x10;
      iVar46 = iVar46 + 0x40;
      uVar48 = uVar48 + 0x40;
    } while (iVar47 < (int)puVar17[0x441]);
  }
  uVar23 = puVar17[0x441];
  *puVar18 = 0;
  __n = (size_t)(lVar42 << 3);
  lVar43 = (uVar23 & 0x1fffffff) << 3;
  *(undefined2 *)(puVar18 + 1) = 0;
  lVar24 = uVar23 + lVar42;
  iVar47 = *(int *)(puVar17 + 0x442);
  lVar29 = lVar24 + lVar44;
  uVar20 = (int)lVar29 * 8;
  uVar19 = uVar20 | (uint)((ulonglong)lVar29 >> 0x3d);
  *(short *)(puVar18 + 2) = (short)lVar43;
  pvVar28 = (void *)(iVar47 + (int)lVar43);
  *(short *)((int)puVar18 + 10) = (short)lVar42;
  *(short *)((int)puVar18 + 0xe) = (short)lVar44;
  *(short *)(puVar18 + 3) = (short)lVar24 * 8;
  *(ushort *)((int)puVar18 + 6) =
       (short)((int)uVar19 >> 4) + (ushort)((int)uVar19 < 0 && (uVar20 & 8) != 0);
  libc::memcpy(pvVar28,(void *)((int)puVar17 + 0x124),__n);
  pvVar28 = libc::memcpy((void *)((int)pvVar28 + __n),(void *)((int)puVar17 + 0x1144),
                         (size_t)(lVar44 << 3));
  return pvVar28;
}



//==== 000fbdac  ns=mobyfunc  size=0x194
// sig: undefined MB_AnimLayerBlend(void)
// callers(1): 000f0b38 mobyfunc::MB_UpdateAnimLayer
// callees(1): 000f3fe0 mobyfunc::MB_BlendJointFrames

void mobyfunc::MB_AnimLayerBlend(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
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
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  
  iVar24 = 0;
  iVar16 = 0x81;
  sVar14 = *(short *)(param_1 + 2);
  do {
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  iVar17 = 0;
  iVar16 = *(int *)(param_1 + 0xc);
  if (0 < sVar14) {
    do {
      iVar17 = iVar17 + 1;
    } while (iVar17 < sVar14);
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x14) + 8);
  iVar18 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x24),uVar1,uVar1,
                               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  iVar17 = *(int *)(param_1 + 0x10);
  if (0 < sVar14) {
    do {
      bVar2 = *(byte *)(iVar16 + iVar24);
      puVar22 = (undefined4 *)(iVar18 + (uint)bVar2 * 0x40);
      iVar15 = iVar24 * 0x30;
      puVar19 = (undefined4 *)(iVar18 + ((uint)bVar2 * 4 + 1) * 0x10);
      uVar3 = puVar22[1];
      puVar21 = (undefined4 *)(iVar18 + ((uint)bVar2 * 4 + 2) * 0x10);
      uVar4 = puVar22[2];
      puVar20 = (undefined4 *)(iVar17 + 0x10 + iVar15);
      uVar5 = puVar22[3];
      puVar23 = (undefined4 *)(iVar17 + iVar15);
      uVar6 = *puVar19;
      uVar7 = puVar19[1];
      uVar8 = puVar19[2];
      uVar9 = puVar19[3];
      iVar24 = iVar24 + 1;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      puVar19 = (undefined4 *)(iVar17 + 0x20 + iVar15);
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      *puVar23 = *puVar22;
      puVar23[1] = uVar3;
      puVar23[2] = uVar4;
      puVar23[3] = uVar5;
      *puVar20 = uVar6;
      puVar20[1] = uVar7;
      puVar20[2] = uVar8;
      puVar20[3] = uVar9;
      *puVar19 = uVar10;
      puVar19[1] = uVar11;
      puVar19[2] = uVar12;
      puVar19[3] = uVar13;
      *(uint *)(iVar17 + 0x2c + iVar15) = (uint)bVar2;
    } while (iVar24 < sVar14);
  }
  return;
}



//==== 000fbf40  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBYUTIL(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBYUTIL(void)

{
  DAT_00729180 = 0x10000;
  return;
}



//==== 000fbf60  ns=mobyutil  size=0x40
// sig: undefined ???_Unused_MB_CallVtbl74(void)
// callers(0): 
// callees(0): 

void mobyutil::____Unused_MB_CallVtbl74(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x74))();
  }
  return;
}



//==== 000fbfa0  ns=mobyfunc  size=0x84
// sig: undefined GetMobyFunction(MOBY_OCLASSES oClass)
// callers(3): 000dc0ec loaders::LoadMobyPClasses; 000dc210 loaders::LoadSpaceshipModel; 000df408 loaders::LoadAllMobys
// callees(0): 

void mobyfunc::GetMobyFunction(MOBY_OCLASSES oClass)

{
  MobyClass **ppMVar1;
  int iVar2;
  MobyVTable *pMVar3;
  
  iVar2 = 0;
  ppMVar1 = MobyClasses + oClass_to_mClass_lookup;
  for (pMVar3 = MobyVTable; pMVar3->idx != (int)(short)oClass && pMVar3->idx != 0xffffffff;
      pMVar3 = pMVar3 + 1) {
    iVar2 = iVar2 + 1;
  }
  MobyClasses[oClass_to_mClass_lookup + 0xe0] = (MobyClass *)MobyVTable[iVar2].update;
  if (*ppMVar1 != (MobyClass *)0x0) {
    *(void ***)&(*ppMVar1)->bangles = MobyVTable[iVar2].exit;
  }
  return;
}



//==== 000fc024  ns=mobyfunc  size=0x144
// sig: undefined UpdateMobysInitial(void)
// callers(1): 000df408 loaders::LoadAllMobys
// callees(3): 00065464 stub::STUB_00065464; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame

void mobyfunc::UpdateMobysInitial(void)

{
  MobyInstance *pMVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  
  DAT_00a49344 = 0;
  MobyUpdateChainStart = (MobyInstance *)0x0;
  pMVar2 = MobyUpdateChainStart;
  if (MobyInstance->state != 0xff) {
    pMVar2 = MobyInstance;
    pMVar3 = (MobyInstance *)0x0;
    do {
      pMVar4 = pMVar3;
      pMVar1 = MobyUpdateChainStart;
      if ((((pMVar2->state & 0x80) == 0) && ((pMVar2->modeBits & NO_UPDATE) == NONE)) &&
         (pMVar4 = pMVar2, pMVar1 = pMVar2, pMVar3 != (MobyInstance *)0x0)) {
        pMVar3->pChain = pMVar2;
        pMVar1 = MobyUpdateChainStart;
      }
      MobyUpdateChainStart = pMVar1;
      pMVar1 = pMVar2 + 1;
      pMVar2 = pMVar2 + 1;
      pMVar3 = pMVar4;
    } while (pMVar1->state != 0xff);
    pMVar2 = MobyUpdateChainStart;
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->pChain = (void *)0x0;
      pMVar2 = MobyUpdateChainStart;
    }
  }
  for (; pMVar2 != (MobyInstance *)0x0; pMVar2 = (MobyInstance *)pMVar2->pChain) {
    if (pMVar2->state < 0x80) {
      if ((pMVar2->modeBits & UNK_40) == NONE) {
        UpdateMobyAnimFrame(pMVar2);
      }
      if ((undefined4 *)pMVar2->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pMVar2->pUpdate)(pMVar2);
      }
      if ((pMVar2->modeBits & NO_POST_UPDATE) == NONE) {
        UpdateMobyTransform(pMVar2);
      }
      stub::STUB_00065464(pMVar2);
    }
  }
  return;
}



//==== 000fc168  ns=mobyfunc  size=0xc8
// sig: undefined UpdateMobys(void)
// callers(6): 0013b838 pause::UpdatePause; 0013d8a0 pause::FrontEnd_UpdateMenu; 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(4): 00065464 stub::STUB_00065464; 000f31a8 mobyfunc::UpdateMobyTransform; 000f959c mobyfunc::FindMobysCloseToUpdate; 000f98d8 mobyfunc::UpdateMobyAnimFrame

void mobyfunc::UpdateMobys(void)

{
  MobyInstance *pMVar1;
  
  MobyUpdateChainStart = (MobyInstance *)FindMobysCloseToUpdate();
  for (pMVar1 = MobyUpdateChainStart; pMVar1 != (MobyInstance *)0x0;
      pMVar1 = (MobyInstance *)pMVar1->pChain) {
    if (pMVar1->state < 0x80) {
      if ((pMVar1->modeBits & UNK_40) == NONE) {
        UpdateMobyAnimFrame(pMVar1);
      }
      if ((undefined4 *)pMVar1->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pMVar1->pUpdate)(pMVar1);
      }
      if ((pMVar1->modeBits & NO_POST_UPDATE) == NONE) {
        UpdateMobyTransform(pMVar1);
      }
      stub::STUB_00065464(pMVar1);
    }
  }
  return;
}



//==== 000fc238  ns=mobyfunc  size=0x3e4
// sig: undefined UpdateMobysDebug(void)
// callers(0): 
// callees(7): 00065464 stub::STUB_00065464; 000f31a8 mobyfunc::UpdateMobyTransform; 000f959c mobyfunc::FindMobysCloseToUpdate; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 005001fc fastfunc::FastMemSet; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 00652ed0: '*** frame %d ***\n' | 00652ee8: 'class: %d\tcount: %d\tcycles: %d\tPercent: %f\n'

/* Appears to be unused debug code */

ulonglong mobyfunc::UpdateMobysDebug(void)

{
  MobyModeBit MVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int32_t iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (((g_downButtons & (L1|R2|L2)) == (L1|R2|L2)) && ((g_buttonsPressedThisFrame & R1) != 0)) {
    libc::printf("\n");
    libc::printf("*** frame %d ***\n",DAT_0159c330);
    libc::printf("\n");
    *DAT_009271fc = 0x81;
    fastfunc::FastMemSet(&DAT_11004000,0,0x700);
    MobyUpdateChainStart = (MobyInstance *)FindMobysCloseToUpdate();
    for (pMVar3 = MobyUpdateChainStart; pMVar3 != (MobyInstance *)0x0;
        pMVar3 = (MobyInstance *)pMVar3->pChain) {
      if (pMVar3->state < 0x80) {
        MVar1 = pMVar3->modeBits;
        *DAT_009271f8 = 0;
        if ((MVar1 & UNK_40) == NONE) {
          UpdateMobyAnimFrame(pMVar3);
        }
        if ((undefined4 *)pMVar3->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
          (**pMVar3->pUpdate)(pMVar3);
        }
        if ((pMVar3->modeBits & NO_POST_UPDATE) == NONE) {
          UpdateMobyTransform(pMVar3);
        }
        iVar4 = (uint)pMVar3->mClass * 8;
        iVar9 = *DAT_009271f8;
        *(int *)(&DAT_11004000 + iVar4) = *(int *)(&DAT_11004000 + iVar4) + 1;
        *(int *)(&DAT_11004004 + iVar4) = *(int *)(&DAT_11004004 + iVar4) + iVar9;
      }
    }
    auVar16 = ZEXT416(0);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    iVar9 = 0;
    uVar6 = ZEXT48(&DAT_11004000);
    do {
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      if (*(int *)uVar6 != 0) {
        auVar17 = loadVectorLeftIndexed(4,uVar6);
        auVar18 = loadVectorRightIndexed(0x14,uVar6);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
        auVar16 = vectorAddFloatingPoint(auVar16,auVar17);
      }
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 + 8 & 0xffffffff;
    } while (iVar9 < 0xe0);
    uVar7 = ZEXT48(&DAT_000fc230);
    dVar15 = (double)((1.0 / auVar16._0_4_) * 100.0);
    lVar11 = 100000000;
    do {
      iVar9 = 0;
      lVar10 = 0;
      puVar12 = &loaders::mClass_to_oClass;
      uVar6 = ZEXT48(&DAT_11004000);
      do {
        piVar13 = (int *)uVar6;
        iVar4 = *piVar13;
        if (iVar4 != 0) {
          uVar5 = piVar13[1];
          if (uVar5 == (uint)lVar11) {
            uVar2 = *puVar12;
            dVar14 = (double)fastfunc::FastIntToDouble();
            iVar8 = libc::printf("class: %d\tcount: %d\tcycles: %d\tPercent: %f\n",uVar2,iVar4,
                                 (int)(uVar5 << 5) / iVar4,(double)(float)(dVar14 * dVar15));
            uVar7 = (ulonglong)iVar8;
            *piVar13 = 0;
          }
          else {
            uVar7 = (longlong)(int)lVar10 - (longlong)(int)uVar5 >> 0x3f & (ulonglong)uVar5 - lVar10
            ;
            lVar10 = lVar10 + uVar7;
          }
        }
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 + 8 & 0xffffffff;
        puVar12 = puVar12 + 1;
      } while (iVar9 < 0xe0);
      lVar11 = lVar10;
    } while ((int)lVar10 != 0);
  }
  else {
    uVar6 = FindMobysCloseToUpdate();
    MobyUpdateChainStart = (MobyInstance *)uVar6;
    uVar7 = uVar6;
    pMVar3 = MobyUpdateChainStart;
    while (pMVar3 != (MobyInstance *)0x0) {
      pMVar3 = (MobyInstance *)uVar6;
      uVar7 = (ulonglong)pMVar3->state;
      if (pMVar3->state < 0x80) {
        if ((pMVar3->modeBits & UNK_40) == NONE) {
          UpdateMobyAnimFrame(uVar6);
        }
        if ((undefined4 *)pMVar3->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
          (**pMVar3->pUpdate)(uVar6);
        }
        if ((pMVar3->modeBits & NO_POST_UPDATE) == NONE) {
          UpdateMobyTransform(pMVar3);
        }
        uVar7 = stub::STUB_00065464(uVar6);
      }
      pMVar3 = (MobyInstance *)pMVar3->pChain;
      uVar6 = ZEXT48(pMVar3);
    }
  }
  return uVar7;
}



//==== 000fc620  ns=mobyutil  size=0x48
// sig: undefined MB_randInt(void)
// callers(354): 0002ffe8 camera0::SetCam0DefaultPosRot; 00042b48 camera::camera21::UpdateCamera_21; 00054670 camera::Camera_CreateReticule; 0007fb98 hero::Hero_UpdateBlinkTimer; 0007fd70 hero::hero_SetEyeManipulator; 00096890 hero::Hero_SpawnWaterRings; 000969c0 hero::Hero_SpawnWaterWake; 00096d88 hero::Hero_SpawnWaterDrops; 00097370 hero::Hero_SpawnWaterSplash; 000aaec0 hero::HandleHeroMovement; 000c9138 hud::HudIcon_GetAnimFrame; 000d9bf8 initsky::SpawnSceneShipParticles; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00120cc8 partupd::SpawnPart_3; 00122c70 partupd::SpawnPart_9; 00123390 partupd::SpawnPart_11; 00123ec8 partupd::SpawnPart_12; 001246b8 partupd::SpawnPart_13; 00124aa0 partupd::SpawnPart_14; 00125350 partupd::SpawnPart_16; 00125e08 partupd::SpawnPart_19; 00126f50 partupd::SpawnPart_23; 0012a6a0 partupd::UpdatePart_34; 0012ac98 partupd::SpawnPart_66
// callees(1): 005c8318 rand

int mobyutil::MB_randInt(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = rand();
  uVar1 = iVar2 >> 0xf & 0x7fff;
  return uVar1 - ((int)uVar1 / param_1) * param_1;
}



//==== 000fc668  ns=mobyutil  size=0x2d0
// sig: undefined MB_DropAmmo(void)
// callers(2): 003a4da0 mobyupdate_helpers::M511_003a4da0; 00408328 mobyupdate_unsorted::UpdateMoby_661
// callees(1): 005c8318 rand
// strings: 0071fb2c: '������������' | 0096c165: 'None'

longlong mobyutil::MB_DropAmmo(int param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar6 = 0;
  lVar8 = 0;
  if (((int)*param_2 < 1) ||
     ((param_1 != 0 &&
      ((*(uint *)(&DAT_00a0cd1c +
                 Level * 0x100 +
                 (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2)) &
       1 << (*(ushort *)(param_1 + 0xb2) & 0x1f)) != 0)))) {
    iVar5 = 0;
    do {
      iVar9 = (int)lVar8;
      bVar1 = g_purchasableVendorItems[iVar5];
      if (bVar1 == 0xff) break;
      if ((&UnlockableItems.field0_0x0)[(int)((ulonglong)bVar1 & 0x3f)] != '\0') {
        iVar6 = iVar6 + 1;
        uVar2 = *(ushort *)((int)&DAT_00737d3e + (int)(((ulonglong)bVar1 & 0x3f) << 3) * 3);
        lVar8 = lVar8 + 1 + ((LZCOUNT(-(uint)uVar2) << 0x3a) >> 0x3f & lVar8 - (lVar8 + 1));
        if ((int)(&currentAmmoArray.field0_0x0)[bVar1 & 0x3f] < (int)(uint)uVar2) {
          iVar7 = iVar7 + 1;
        }
      }
      iVar9 = (int)lVar8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        *param_2 = 10;
      }
      else {
        iVar6 = rand();
        uVar3 = iVar6 >> 0xf & 0x7fff;
        iVar7 = uVar3 - ((int)uVar3 / iVar9) * iVar9;
        iVar6 = -1;
        while (-1 < iVar7) {
          iVar9 = iVar6 + 1;
          iVar5 = iVar6 + 1;
          iVar6 = iVar9;
          if (((&UnlockableItems.field0_0x0)
               [(int)((ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f)] != '\0') &&
             (*(short *)((int)&DAT_00737d3e +
                        (int)(((ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f) << 3) * 3)
              != 0)) {
            iVar7 = iVar7 + -1;
          }
        }
        *param_2 = (byte)g_purchasableVendorItems[iVar6] & 0x3f;
      }
    }
    else {
      iVar6 = rand();
      uVar3 = iVar6 >> 0xf & 0x7fff;
      iVar7 = uVar3 - ((int)uVar3 / iVar7) * iVar7;
      iVar6 = -1;
      while (-1 < iVar7) {
        iVar9 = iVar6 + 1;
        iVar5 = iVar6 + 1;
        uVar4 = (ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f;
        iVar6 = iVar9;
        if (((&UnlockableItems.field0_0x0)[(int)uVar4] != '\0') &&
           ((int)(&currentAmmoArray.field0_0x0)[(byte)g_purchasableVendorItems[iVar5] & 0x3f] <
            (int)(uint)*(ushort *)((int)&DAT_00737d3e + (int)(uVar4 << 3) * 3))) {
          iVar7 = iVar7 + -1;
        }
      }
      *param_2 = (byte)g_purchasableVendorItems[iVar6] & 0x3f;
    }
  }
  iVar6 = rand();
  uVar4 = (ulonglong)(uint)(iVar6 >> 0xf) & 0x7fff;
  lVar8 = (uVar4 + 1) * 0x3333;
  return ((LZCOUNT(-((int)uVar4 -
                    ((uint)(ushort)((ulonglong)lVar8 >> 0x10) +
                    (int)(((ulonglong)(lVar8 << 0x20) >> 0x30) << 2)))) << 0x3a) >> 0x3f & 1U) + 1;
}



//==== 000fc948  ns=mobyutil  size=0x1ec
// sig: undefined MB_SplineIntersect(void)
// callers(12): 000fcd60 mobyutil::MB_DistributeBolts; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 002229f8 mobyupdate_helpers::M1243_002229f8; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00306888 mobyupdate_helpers::M238_00306888; 00331708 mobyupdate_helpers::M294_00331708; 003a4da0 mobyupdate_helpers::M511_003a4da0; 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003e5228 mobyupdate_unsorted::UpdateMoby_623; 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(0): 

undefined8
mobyutil::MB_SplineIntersect(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  bool bVar20;
  
  fVar1 = param_2[1];
  fVar9 = param_3[1] - fVar1;
  fVar2 = *param_2;
  fVar10 = *param_3 - fVar2;
  fVar3 = 1.0;
  fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar4 = param_3[3];
  fVar5 = param_3[2];
  iVar18 = 1;
  fVar12 = 1.0 / SQRT(fVar7);
  fVar15 = SQRT(fVar7);
  uVar19 = 0;
  fVar12 = -(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
  fVar12 = -(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
  fVar6 = param_2[2];
  piVar17 = *(int **)((int)Splines + (int)(param_1 << 2));
  fVar11 = (-(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12) / fVar15;
  fVar7 = (float)piVar17[4] - fVar2;
  iVar8 = *piVar17;
  fVar13 = fVar4 * fVar7 + (float)piVar17[7];
  fVar12 = fVar11 * fVar10;
  fVar11 = fVar11 * fVar9;
  fVar16 = 0.0;
  if (0.0 - fVar15 < 0.0) {
    fVar16 = fVar12;
  }
  fVar14 = 0.0;
  if (0.0 - fVar15 < 0.0) {
    fVar14 = fVar11;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar16 = fVar12;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar14 = fVar11;
  }
  fVar12 = fVar16 * fVar7 + fVar14 * ((float)piVar17[5] - fVar1);
  fVar7 = fVar14 * fVar7 + -(fVar16 * ((float)piVar17[5] - fVar1));
  if (1 < iVar8) {
    do {
      bVar20 = fVar13 != 0.0;
      fVar11 = (float)piVar17[8] - fVar2;
      fVar13 = fVar11 * fVar4 + (float)piVar17[0xb];
      fVar15 = fVar11 * fVar16 + ((float)piVar17[9] - fVar1) * fVar14;
      fVar11 = fVar11 * fVar14 + -(((float)piVar17[9] - fVar1) * fVar16);
      if ((((bVar20) || (fVar13 != 0.0)) && (fVar11 * fVar7 < 0.0)) &&
         (fVar7 = -(((fVar12 - fVar15) / (fVar7 - fVar11)) * fVar11) + fVar15,
         0.0 < fVar7 && fVar7 < fVar3)) {
        uVar19 = 1;
        fVar3 = fVar7;
      }
      iVar18 = iVar18 + 1;
      fVar12 = fVar15;
      fVar7 = fVar11;
      piVar17 = piVar17 + 4;
    } while (iVar18 < iVar8);
  }
  fVar1 = param_2[1];
  fVar7 = param_2[2];
  param_4[3] = fVar4;
  *param_4 = fVar3 * fVar10 + fVar2;
  param_4[1] = fVar3 * fVar9 + fVar1;
  param_4[2] = fVar3 * (fVar5 - fVar6) + fVar7;
  return uVar19;
}



//==== 000fcb40  ns=mobyutil  size=0xa4
// sig: undefined MB_SolveQuad(void)
// callers(7): 000a5a58 hero::Hero_PredictLand; 000aaec0 hero::HandleHeroMovement; 000fcd60 mobyutil::MB_DistributeBolts; 0010b030 mobyutil::MB_UpdateKick; 003a4da0 mobyupdate_helpers::M511_003a4da0; 003b3fd0 mobyupdate_helpers::M556_003b3fd0; 00432a70 mobyupdate_helpers::M717_00432a70
// callees(0): 

undefined8 mobyutil::MB_SolveQuad(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *in_r6;
  float *in_r7;
  
  fVar1 = (float)(param_2 * param_2 - (double)(float)((double)(float)(param_1 * 4.0) * param_3));
  if (fVar1 == 0.0) {
    uVar3 = 1;
    *in_r6 = (float)(-param_2 / (double)(float)(param_1 * 2.0));
  }
  else {
    fVar2 = (float)(-param_2 - (double)SQRT(ABS(fVar1))) / (float)(param_1 * 2.0);
    *in_r6 = (float)((double)SQRT(ABS(fVar1)) - param_2) / (float)(param_1 * 2.0);
    *in_r7 = fVar2;
    if (*in_r6 < fVar2) {
      *in_r7 = *in_r6;
      *in_r6 = fVar2;
    }
    uVar3 = 0;
    if (0.0 < fVar1) {
      uVar3 = 2;
    }
  }
  return uVar3;
}



//==== 000fcbe8  ns=mobyutil  size=0x78
// sig: undefined MB_randRangeFloat(float param_1, float param_2)
// callers(571): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00017fc8 mobyupdate_helpers::M1274_00017fc8; 00018238 mobyupdate_helpers::M1274_00018238; 0001b100 mobyupdate_helpers::M184_0001b100; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 00054670 camera::Camera_CreateReticule; 00092d58 hero::Hero_UpdateIdleLook; 00093c98 hero::Hero_UpdateCheatTweaks; 00094470 hero::???_Hero_UpdateTiltWobbleFx; 00096890 hero::Hero_SpawnWaterRings; 000969c0 hero::Hero_SpawnWaterWake; 00096d88 hero::Hero_SpawnWaterDrops; 00097080 hero::Hero_SpawnWaterBubbles; 00097370 hero::Hero_SpawnWaterSplash; 00097700 hero::Hero_SpawnLavaAssParticles; 000a1378 hero::Hero_SpawnLavaDeathParts; 000a4eb8 hero::Hero_GetSpecialIdle; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 000c9d28 hud::OxygenHud_Init; 000cb228 hud::Moby185Hud_Init; 000d9bf8 initsky::SpawnSceneShipParticles
// callees(1): 005c8318 rand

double mobyutil::MB_randRangeFloat(float param_1,float param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)param_2;
  dVar2 = (double)param_1;
  iVar1 = rand();
  return (double)(float)((double)((float)(longlong)(int)(iVar1 >> 0xf & 0x7fff) *
                                 (float)(dVar3 - dVar2)) * 3.0517578125e-05 + dVar2);
}



//==== 000fcc68  ns=mobyutil  size=0x64
// sig: undefined MB_randRot(void)
// callers(204): 00018238 mobyupdate_helpers::M1274_00018238; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 00074cf0 draw::ImpactSprite_Add; 00096d88 hero::Hero_SpawnWaterDrops; 00097370 hero::Hero_SpawnWaterSplash; 00097700 hero::Hero_SpawnLavaAssParticles; 000a1378 hero::Hero_SpawnLavaDeathParts; 000d9bf8 initsky::SpawnSceneShipParticles; 000d9ee8 initsky::UpdateSpaceSceneEffects; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00122c70 partupd::SpawnPart_9; 0012a440 partupd::SpawnPart_34; 0012ac98 partupd::SpawnPart_66; 0012aee8 partupd::SpawnPart_45; 0012c320 partupd::SpawnPart_40; 00130810 partupd::SpawnPart_58; 00153550 skyfunc::SkyInitNightSprites; 001545b8 skyfunc::SkyLevel_02; 00155788 skyfunc::SkyLevel_06; 00158460 skyfunc::SkyLevel_17; 001595d0 skyfunc::SkyLevelGeneric; 00185e70 mobyupdate_unsorted::UpdateMoby_101; 0018d608 mobyupdate_unsorted::UpdateMoby_{1024_1302}
// callees(1): 005c8318 rand

double mobyutil::MB_randRot(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (double)((float)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                 0.00048828125);
}



//==== 000fcccc  ns=mobyutil  size=0x34
// sig: undefined MB_GetPvarsIfMobyHasThem(MobyInstance * moby)
// callers(54): 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 0007e5e8 hero::Hero_GetGroundInfo; 000824b0 hero::Hero_CheckLedgeGrab; 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 000930e8 hero::Hero_UpdateLookAtTarget; 00099be0 hero::Hero_GetAutoTargetMoby; 0009ef10 hero::Hero_SetAttackRot; 000ed3e0 mobyattack::Spawn_Moby256_Rocket; 00135678 partupd::SpawnPart_78; 00192330 mobyupdate_helpers::Spawn_Moby1034; 001e5158 mobyupd::update1160::M1160_ScanTargets; 00237660 mobyupdate_helpers::M1281_00237660; 00292d88 FUN_00292d88; 00293248 mobyupdate_helpers::M153_00293248; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab180 mobyupdate_helpers::M168_002ab180; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b06f0 mobyupdate_helpers::M175_002b06f0; 002b4818 mobyupdate_helpers::M177_002b4818; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002bca98 mobyupdate_helpers::M1818_002bca98; 002bd110 mobyupdate_helpers::M1818_002bd110; 002c5358 mobyupdate_helpers::M185_002c5358; 002c5f88 mobyupdate_helpers::M185_002c5f88; 002c7328 mobyupdate_unsorted::UpdateMoby_185
// callees(0): 

undefined4 mobyutil::MB_GetPvarsIfMobyHasThem(MobyInstance *moby)

{
  undefined4 ret;
  
  if (moby == (MobyInstance *)0x0) {
    ret = 0;
  }
  else if ((moby->modeBits & HAS_SPECIAL_VARS) == NONE) {
    ret = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    ret = *moby->pVar;
  }
  return ret;
}



//==== 000fcd60  ns=mobyutil  size=0xb54
// sig: undefined MB_DistributeBolts(void)
// callers(18): 0001e700 mobyupdate_helpers::M336_0001e700; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0018a840 mobyupdate_helpers::M1023_0018a840; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00448ab0 mobyupdate_helpers::M795_00448ab0; 004566e8 mobyupdate_helpers::M776_004566e8; 004588b8 mobyupdate_helpers::M777_004588b8; 004743a8 mobyupdate_unsorted::UpdateMoby_820; 0049bff8 mobyupdate_helpers::M870_0049bff8; 004aa510 mobyupdate_helpers::M910_004aa510; 004ad348 mobyupdate_helpers::M912_004ad348; 004b98e0 mobyupdate_helpers::M927_004b98e0; 004bc480 mobyupdate_helpers::M931_004bc480; 004c06d8 mobyupdate_helpers::M935_004c06d8; 004cc4a8 mobyupdate_helpers::M984_004cc4a8
// callees(6): 000fc948 mobyutil::MB_SplineIntersect; 000fcb40 mobyutil::MB_SolveQuad; 00242738 MB_SpawnBolts; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005cd098 libc::printf
// strings: 00652f34: ' Scale: 5' | 00652f44: ' Scale: %d' | 00652f54: ' Scale: %4f'

void mobyutil::MB_DistributeBolts
               (int param_1,longlong param_2,int param_3,uint param_4,longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar8;
  longlong lVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  longlong lVar21;
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
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  Vec4 local_160;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  undefined4 local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  longlong local_108;
  float local_f8;
  
  dVar44 = 0.0;
  bVar1 = (param_4 & 0x20) == 0;
  if (((bVar1) && (*(byte *)(param_1 + 0xb0) != 0xff)) &&
     ((*(short *)(param_1 + 0xa6) < 500 || (0x21c < *(short *)(param_1 + 0xa6))))) {
    g_boltMiningActive = (uint)LZCOUNT((byte)(&DAT_00a202c0)[*(byte *)(param_1 + 0xb0)] - 0xff) >> 5
    ;
  }
  bVar3 = false;
  if ((g_boltMiningActive != 0) && (bVar3 = false, bVar1)) {
    bVar3 = true;
  }
  if ((param_4 != 0) && (param_3 != 0 || (int)param_2 != 0)) {
    dVar42 = dVar44;
    dVar45 = dVar44;
    dVar47 = dVar44;
    if (((param_4 & 4) != 0) &&
       (((param_1 != 0 && ((*(ushort *)(param_1 + 0x34) & 0x20) != 0)) &&
        (iVar4 = **(int **)(param_1 + 0x78), iVar4 != 0)))) {
      dVar42 = (double)*(float *)(iVar4 + 0x20);
      dVar47 = (double)*(float *)(iVar4 + 0x24);
      dVar45 = (double)*(float *)(iVar4 + 0x28);
    }
    param_2 = param_2 + (param_2 + -1 >> 0x3f & 1U - param_2);
    param_3 = param_3 - (int)param_2;
    iVar4 = rand();
    uVar2 = (ulonglong)(uint)(iVar4 >> 0xf) & 0x7fff;
    iVar4 = (int)uVar2 / (param_3 + 1);
    param_2 = (uVar2 - ((longlong)iVar4 * (longlong)param_3 + (longlong)iVar4)) + param_2;
    lVar19 = param_2 * 2 +
             ((LZCOUNT(-(g_ChallengeMode | g_goodiesMenuActive)) << 0x3a) >> 0x3f & -param_2);
    uVar5 = (uint)lVar19;
    if ((((int)uVar5 < 500) && (bVar3)) && (g_boltMiningTimer != 0)) {
      iVar4 = (int)((float)(longlong)(animationSpeed * 60.5) * 60.0);
      local_108 = (longlong)iVar4;
      uVar8 = (iVar4 * g_boltsMined) / g_boltMiningTimer;
      if ((g_ChallengeMode | g_goodiesMenuActive) != 0) {
        uVar8 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      }
      if ((int)uVar8 < 0x96) {
        if ((int)uVar8 < 0x5b) {
          libc::printf(" Scale: 5");
          lVar7 = lVar19 * 5;
        }
        else {
          libc::printf(" Scale: %d",(int)(0xbe - uVar8) / 0x14);
          lVar7 = (longlong)(int)uVar5 * (longlong)((int)(0xbe - uVar8) / 0x14);
        }
        lVar19 = lVar7 + (1000 - (longlong)(int)lVar7 >> 0x3f & 1000U - lVar7);
        lVar19 = lVar19 + ((LZCOUNT(-g_goodiesMenuActive) << 0x3a) >> 0x3f &
                          (lVar7 + (500 - (longlong)(int)lVar7 >> 0x3f & 500U - lVar7)) - lVar19);
      }
      else if (300 < (int)uVar8) {
        if ((int)uVar8 < 0x160) {
          dVar31 = (double)fastfunc::FastIntToDouble(0x168 - uVar8);
          libc::printf(" Scale: %4f",(double)(float)(dVar31 * 0.05000000074505806));
          lVar19 = (longlong)(int)uVar5 * (longlong)((int)(0x168 - uVar8) / 0x50);
        }
        else {
          libc::printf(" Scale: %4f",0x3fb99999a0000000);
          lVar19 = (longlong)((int)uVar5 / 10 + ((int)uVar5 >> 0x1f)) + (ulonglong)(uVar5 >> 0x1f);
        }
        lVar19 = lVar19 + ((longlong)(int)lVar19 + -1 >> 0x3f & 1U - lVar19);
      }
    }
    iVar4 = 0;
    iVar6 = (int)lVar19;
    iVar22 = iVar6;
    while (299 < iVar22) {
      lVar19 = lVar19 + -0x32;
      iVar4 = iVar4 + 1;
      iVar22 = (int)lVar19;
    }
    iVar22 = 0;
    iVar23 = (int)lVar19;
    while (199 < iVar23) {
      lVar19 = lVar19 + -0x14;
      iVar22 = iVar22 + 1;
      iVar23 = (int)lVar19;
    }
    iVar23 = 0;
    iVar13 = (int)lVar19;
    while (0x1d < iVar13) {
      lVar19 = lVar19 + -0x19;
      iVar23 = iVar23 + 1;
      iVar22 = iVar22 + 1;
      iVar13 = (int)lVar19;
    }
    iVar13 = (int)lVar19;
    while (6 < iVar13) {
      lVar19 = lVar19 + -5;
      iVar23 = iVar23 + 1;
      iVar13 = (int)lVar19;
    }
    if ((3 < iVar4 + iVar22 + iVar23 + (int)lVar19) && ((param_4 & 8) != 0)) {
      lVar21 = 0;
      iVar20 = 0;
      iVar17 = 3;
      iVar18 = 0;
      iVar9 = 0;
      lVar7 = 3;
      iVar10 = 0;
      lVar12 = 0x96;
      iVar13 = 0x96;
      iVar14 = 3;
      iVar11 = 0;
      if (3 < iVar23 + (int)lVar19 + iVar22 + iVar4) {
        lVar15 = 0;
        lVar19 = 0x96;
        lVar16 = 0;
        iVar13 = 0x96;
        if (iVar6 < 0x96) {
          do {
            iVar13 = (int)lVar12;
            if (iVar13 < 4) break;
            if (iVar17 == 0) {
              if (iVar18 == 0) {
                if (iVar20 != 0) {
                  lVar16 = lVar16 + -5;
                  iVar20 = iVar20 + -1;
                  lVar21 = lVar21 + 1;
                }
              }
              else {
                lVar15 = lVar15 + -0x14;
                iVar18 = iVar18 + -1;
                lVar16 = lVar16 + 5;
                iVar20 = iVar20 + 1;
              }
            }
            else {
              lVar19 = lVar19 + -0x32;
              iVar17 = iVar17 + -1;
              lVar15 = lVar15 + 0x14;
              iVar18 = iVar18 + 1;
            }
            lVar12 = lVar19 + lVar15 + lVar16 + lVar21;
            iVar13 = (int)lVar12;
          } while (iVar6 < iVar13);
        }
        lVar19 = 3;
        iVar14 = 3;
        lVar12 = 0;
        lVar15 = 0;
        lVar16 = 0;
        if (3 < iVar6) {
          do {
            iVar14 = (int)lVar19;
            if (0x95 < iVar14) break;
            if ((int)lVar7 == 0) {
              if (iVar9 == 0) {
                if (iVar10 != 0) {
                  lVar15 = lVar15 + -0x14;
                  iVar10 = iVar10 + -1;
                  lVar12 = lVar12 + 0x32;
                  iVar11 = iVar11 + 1;
                }
              }
              else {
                lVar16 = lVar16 + -5;
                iVar9 = iVar9 + -1;
                lVar15 = lVar15 + 0x14;
                iVar10 = iVar10 + 1;
              }
            }
            else {
              lVar7 = lVar7 + -1;
              lVar16 = lVar16 + 5;
              iVar9 = iVar9 + 1;
            }
            lVar19 = lVar12 + lVar15 + lVar16 + lVar7;
            iVar14 = (int)lVar19;
          } while (iVar14 < iVar6);
        }
      }
      lVar19 = lVar21;
      iVar23 = iVar20;
      iVar4 = iVar17;
      iVar22 = iVar18;
      if (iVar6 - iVar14 <= iVar13 - iVar6) {
        lVar19 = lVar7;
        iVar23 = iVar9;
        iVar4 = iVar11;
        iVar22 = iVar10;
      }
    }
    local_110 = (float)dVar42;
    local_114 = (float)dVar45;
    if (((iVar4 != 0 || iVar22 != 0) || iVar23 != 0) || (int)lVar19 != 0) {
      local_118 = (float)dVar47;
      dVar35 = 0.5;
      dVar42 = 1.570796251296997;
      dVar36 = 3.141592502593994;
      dVar37 = -3.141592502593994;
      dVar38 = -0.16666656732559204;
      dVar39 = 0.008333025500178337;
      dVar40 = -0.0001980741071747616;
      dVar41 = 2.601886990305502e-06;
      dVar45 = 3.700000047683716;
      dVar43 = 1.0;
      dVar47 = 120.0;
      dVar31 = 0.25;
      dVar32 = 0.0015339808305725455;
      dVar46 = 9.1552734375e-05;
      dVar33 = 7.019042823230848e-05;
      dVar34 = -5.400000095367432;
      do {
        local_f8 = (float)dVar34;
        local_160.x = *(float *)(param_1 + 0x10);
        local_160.z = (float)((double)*(float *)(param_1 + 0x18) + dVar35);
        local_160.y = *(float *)(param_1 + 0x14);
        local_160.w = *(float *)(param_1 + 0x1c);
        iVar6 = rand();
        local_108 = (longlong)(int)((iVar6 >> 0xf & 0xfffU) - 0x800);
        dVar48 = (double)(float)((double)local_108 * dVar32);
        dVar24 = (double)(float)(dVar48 + dVar42);
        dVar34 = (double)(float)(dVar36 - dVar24);
        if (dVar24 - (double)(float)(dVar36 - dVar24) < 0.0) {
          dVar34 = dVar24;
        }
        dVar29 = (double)(float)(dVar37 - dVar24);
        if ((double)(float)(dVar37 - dVar24) - dVar34 < 0.0) {
          dVar29 = dVar34;
        }
        dVar34 = (double)(float)(dVar29 * dVar29);
        dVar25 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar29));
        dVar24 = (double)(float)(dVar34 * dVar25);
        dVar24 = (double)(float)((double)(float)(dVar34 * dVar24) * dVar41 +
                                (double)(float)(dVar24 * dVar40 +
                                               (double)(float)(dVar25 * dVar39 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar29) * dVar38 + dVar29))));
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        dVar34 = (double)(float)(dVar36 - dVar48);
        if (dVar48 - (double)(float)(dVar36 - dVar48) < 0.0) {
          dVar34 = dVar48;
        }
        dVar29 = (double)(float)(dVar37 - dVar48);
        if ((double)(float)(dVar37 - dVar48) - dVar34 < 0.0) {
          dVar29 = dVar34;
        }
        dVar48 = (double)(float)(dVar29 * dVar29);
        dVar34 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar29));
        local_150 = (float)((double)((float)((double)local_108 * dVar46) * g_FrameTime) * dVar24);
        dVar24 = (double)(float)(dVar48 * dVar34);
        dVar34 = (double)(float)((double)(float)(dVar48 * dVar24) * dVar41 +
                                (double)(float)(dVar24 * dVar40 +
                                               (double)(float)(dVar34 * dVar39 +
                                                              (double)(float)((double)(float)(dVar48
                                                                                             * 
                                                  dVar29) * dVar38 + dVar29))));
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        local_148 = (float)dVar44;
        local_14c = (float)((double)((float)((double)local_108 * dVar46) * g_FrameTime) * dVar34);
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        dVar24 = (double)SQRT(local_150 * local_150 + local_14c * local_14c);
        local_160.z = (float)((double)local_160.z + dVar44);
        local_148 = (float)((double)local_108 * dVar33 + dVar45) * g_FrameTime;
        dVar48 = (double)local_148;
        dVar29 = (double)(local_14c * (float)(dVar35 / dVar24));
        dVar25 = (double)(local_150 * (float)(dVar35 / dVar24));
        dVar34 = dVar44;
        if (dVar44 - dVar24 < 0.0) {
          dVar34 = dVar29;
        }
        dVar26 = dVar44;
        if (dVar44 - dVar24 < 0.0) {
          dVar26 = dVar25;
        }
        if (dVar24 - dVar44 < 0.0) {
          dVar34 = dVar29;
        }
        if (dVar24 - dVar44 < 0.0) {
          dVar26 = dVar25;
        }
        local_160.y = (float)((double)local_160.y + dVar34);
        local_160.x = (float)((double)local_160.x + dVar26);
        dVar34 = (double)local_f8;
        if (-1 < (int)param_5) {
          iVar6 = MB_SolveQuad((double)(float)((double)DAT_0071f418 * dVar34),
                               (double)(float)(dVar48 - (double)(float)((double)DAT_0071f418 *
                                                                       dVar34)),
                               (double)(local_160.z -
                                       *(float *)(*(int *)((int)Splines + (int)(param_5 << 2)) +
                                                 0x18)));
          local_108 = (longlong)iVar6;
          dVar24 = dVar47;
          if ((dVar43 <= (double)local_108) &&
             (iVar6 = ((uint)((int)local_120 >> 0x1f) >> 1 ^ (uint)local_120) -
                      ((int)local_120 >> 0x1f), 0 < iVar6 && iVar6 < 0x42f00000)) {
            dVar24 = (double)local_120;
          }
          local_140 = (float)((double)local_150 * dVar24 + (double)*(float *)(param_1 + 0x10));
          local_13c = (float)((double)local_14c * dVar24 + (double)*(float *)(param_1 + 0x14));
          local_138 = (float)((double)local_148 * dVar24 + (double)*(float *)(param_1 + 0x18));
          local_134 = local_144;
          MB_SplineIntersect(param_5,param_1 + 0x10,&local_140,&local_130);
          dVar29 = (double)(local_12c - local_160.y);
          dVar25 = (double)(local_130 - local_160.x);
          local_150 = (float)(dVar43 / dVar24);
          dVar26 = (double)SQRT((float)(dVar44 * dVar44 +
                                       (double)(float)(dVar25 * dVar25 +
                                                      (double)(float)(dVar29 * dVar29))));
          dVar48 = (double)local_148;
          local_134 = local_124;
          dVar28 = (double)(float)(dVar31 / dVar26);
          dVar24 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar44);
          }
          dVar30 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar30 = (double)(float)(dVar29 * dVar28);
          }
          dVar27 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar27 = (double)(float)(dVar25 * dVar28);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar44);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar30 = (double)(float)(dVar29 * dVar28);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar27 = (double)(float)(dVar25 * dVar28);
          }
          local_138 = (float)(dVar44 - dVar24) * local_150;
          local_14c = (float)(dVar29 - dVar30) * local_150;
          local_150 = (float)(dVar25 - dVar27) * local_150;
          local_140 = local_150;
          local_13c = local_14c;
        }
        local_150 = local_150 + local_110;
        local_14c = local_14c + local_118;
        local_148 = (float)(dVar48 + (double)local_114);
        if (iVar4 == 0) {
          if (iVar22 == 0) {
            if (iVar23 == 0) {
              MB_SpawnBolts(param_1,&local_160,&local_150,param_4,1,bVar3);
              lVar19 = lVar19 + -1;
            }
            else {
              MB_SpawnBolts(param_1,&local_160,&local_150,param_4,5,bVar3);
              iVar23 = iVar23 + -1;
            }
          }
          else {
            MB_SpawnBolts(param_1,&local_160,&local_150,param_4,0x14,bVar3);
            iVar22 = iVar22 + -1;
          }
        }
        else {
          MB_SpawnBolts(param_1,&local_160,&local_150,param_4,0x32,bVar3);
          iVar4 = iVar4 + -1;
        }
      } while (((iVar4 != 0 || iVar22 != 0) || iVar23 != 0) || (int)lVar19 != 0);
    }
  }
  return;
}



//==== 000fd8d0  ns=mobyutil  size=0x420
// sig: undefined MB_SpawnBoltsFromCrate(void)
// callers(117): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 001817d0 mobyupdate_helpers::M1003_001817d0; 001856a0 mobyupdate_helpers::M101_001856a0; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0018e048 mobyupdate_helpers::M1027_0018e048; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 001a5360 mobyupdate_helpers::M1051_001a5360; 001a8ac0 mobyupdate_helpers::M1059_001a8ac0; 001afa30 mobyupdate_helpers::M1068_001afa30; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001d6b28 mobyupdate_unsorted::UpdateMoby_1126; 001e8fd0 mobyupdate_helpers::M1167_001e8fd0; 001e9a20 mobyupdate_helpers::M1168_001e9a20; 001ead68 mobyupdate_helpers::M1169_001ead68; 001ec8c8 mobyupdate_helpers::M1170_001ec8c8; 001ed1f0 mobyupdate_helpers::M1172_001ed1f0; 001eee28 mobyupdate_helpers::M1181_001eee28; 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f6028 mobyupdate_unsorted::UpdateMoby_1197
// callees(2): 000fcd60 mobyutil::MB_DistributeBolts; 00502758 fastfunc::FastDoubleToInt

void mobyutil::MB_SpawnBoltsFromCrate(undefined8 param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  LevelId LVar10;
  int iVar12;
  ulonglong uVar11;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar17;
  ulonglong uVar16;
  undefined4 *puVar18;
  byte in_cr6;
  undefined8 in_LR;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  LVar10 = Level;
  iVar14 = (int)param_1;
  auVar21 = ZEXT416(0xfffffff0);
  auVar20 = loadVectorLeftIndexed(0xb4,param_1);
  auVar21 = vectorShiftRightAlgebraicWord
                      (auVar20,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar21,0);
  dVar19 = (double)(longlong)(int)*(short *)(iVar14 + 0xb4);
  if (*(char *)(iVar14 + 0xb1) != -2) {
    uVar2 = *(ushort *)(iVar14 + 0xb2);
    if (-1 < (short)uVar2) {
      iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar3 = *(ushort *)(iVar14 + 0xb2);
      iVar12 = Level * 0x100;
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar17 = *(uint *)(&DAT_00a54dd0 + iVar7);
      *(uint *)(&DAT_00a0cd1c + iVar12 + iVar8) =
           *(uint *)(&DAT_00a0cd1c + iVar12 + iVar8) | 1 << (uVar2 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar7) = uVar17 | 1 << (uVar3 & 0x1f);
      bVar1 = *(byte *)(iVar14 + 0xb0);
      (&DAT_00a53964)[(short)uVar3] = bVar1 + 2;
      if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[LVar10][bVar1] == -1)))
         ) {
        (&DAT_00a545c4)[(short)uVar3] = bVar1 + 2;
      }
      if (*(byte *)(iVar14 + 0xb1) < 0x80) {
        auVar20 = ZEXT416(0xfffffff0);
        lVar15 = (ulonglong)*(byte *)(iVar14 + 0xb1) * 4 + 0xa0e11e;
        auVar22 = loadVectorLeftIndexed(0xb6,param_1);
        uVar17 = (int)*(short *)(iVar14 + 0xb6) + 1;
        auVar23 = vectorShiftRightAlgebraicWord
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar22 = loadVectorLeftIndexed((longlong)iVar12,lVar15);
        auVar20 = loadVectorRightIndexed((longlong)iVar12 + 0x10,lVar15);
        iVar12 = (int)*(short *)(iVar14 + 0xb6) - (int)*(short *)((int)lVar15 + iVar12);
        if ((int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) < iVar12) {
          auVar4 = ZEXT416(0xfffffff0);
          auVar20 = vectorShiftRightAlgebraicWord
                              (auVar22 | auVar20,
                               auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
          auVar20 = vectorSubtractUnsignedWordModulo(auVar23,auVar20);
          if (iVar12 != 0) {
            auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
            dVar19 = (double)(longlong)iVar12;
          }
        }
        auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
        auVar20 = loadVectorLeftIndexed(in_LR,0xfd8b4);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar21,auVar20);
        if ((bool)(in_cr6 >> 1 & 1)) {
          dVar19 = 1.0;
          auVar21 = auVar20;
        }
      }
      auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
      uVar11 = ((LZCOUNT(-(param_2 & 0x100)) << 0x3a) >> 0x3f & 0xfffffffffffffffcU) + 5;
      uVar16 = uVar11 | 2;
      uVar16 = uVar16 + ((LZCOUNT(-((uint)DAT_0096bd92 | param_2 & 0x200)) << 0x3a) >> 0x3f &
                        uVar11 - uVar16);
      if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
        fVar5 = g_heroPosition.y - *(float *)(iVar14 + 0x14);
        fVar6 = g_heroPosition.x - *(float *)(iVar14 + 0x10);
        fVar9 = g_heroPosition.z - *(float *)(iVar14 + 0x18);
        if (SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar5 * fVar5) < 4.0) {
          uVar16 = uVar16 | 2;
        }
      }
      uVar11 = (uVar16 | 0x10) +
               ((LZCOUNT(-(param_2 & 0x400)) << 0x3a) >> 0x3f & uVar16 - (uVar16 | 0x10));
      if ((numSpawnableMobys < 100) || ((param_2 & 0x800) != 0)) {
        uVar11 = uVar11 | 8;
      }
      auVar20 = ZEXT416(0);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar22 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar21);
      lVar15 = (longlong)numSpawnableMobys;
      auVar21 = vectorLogicalAndWithComplement(auVar21,auVar22);
      vectorCompareGreaterThanFloatingPoint(auVar21,auVar20);
      if (dVar19 - 0.0 < 0.0) {
        dVar19 = 0.0;
      }
      if (!(bool)(in_cr6 >> 1 & 1)) {
        puVar18 = (undefined4 *)0x0;
        auVar20 = loadVectorLeftIndexed(0xc,0xfd8b4);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          puVar13 = &DAT_000fd8b4;
          auVar20 = loadVectorLeftIndexed(0x14,0xfd8b4);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
          if (!(bool)(in_cr6 >> 1 & 1)) {
            puVar18 = (undefined4 *)0x1;
          }
        }
        else {
          puVar13 = (undefined4 *)
                    fastfunc::FastDoubleToInt((double)(float)(dVar19 * 0.25),&DAT_000fd8b4,0xc);
          puVar18 = puVar13;
        }
        iVar14 = fastfunc::FastDoubleToInt(dVar19,puVar13);
        MB_DistributeBolts(param_1,iVar14 - (int)puVar18,iVar14 + (int)puVar18,
                           uVar11 + (lVar15 + -0x32 >> 0x3f & (uVar11 | 2) - uVar11),param_3);
      }
    }
  }
  return;
}



//==== 000fdcf0  ns=mobyutil  size=0xc8
// sig: undefined MB_SetAnimationNoBlend(void)
// callers(31): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 000dcf58 loaders::NAVG_LoadFile; 0013b108 update::OpenPauseMenu; 0013b838 pause::UpdatePause; 0013d428 pause::FrontEnd_InitMenu; 0013d8a0 pause::FrontEnd_UpdateMenu; 0013ebb0 pause::LoadMenuRatchetModel; 00145d28 pause::WeaponView_Update; 0015e2ec space::SetupSpaceShipVars; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016cc50 vendor::PurchaseHandler; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002ce020 FUN_002ce020; 002ef340 mobyupdate_unsorted::UpdateMoby_211; 00316950 mobyupdate_unsorted::UpdateMoby_250; 00316b98 mobyupdate_helpers::M251_CheckPlasmabotHatchAvailability; 00327f50 mobyupdate_unsorted::UpdateMoby_28; 003371a0 mobyupdate_unsorted::UpdateMoby_30; 003381c0 FUN_003381c0; 0033dad8 mobyupdate_unsorted::UpdateMoby_31; 0038a248 FUN_0038a248
// callees(1): 000ef74c mobyfunc::UpdateMobyFrameData

void mobyutil::MB_SetAnimationNoBlend(MobyInstance *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(&param_1->pClass->type + (int)(param_2 << 2));
  bVar1 = *(byte *)(iVar2 + 0x10);
  param_1->updateId = (u8)param_2;
  lVar6 = (ulonglong)bVar1 - 1;
  lVar6 = lVar6 + ((longlong)(param_3 - (ulonglong)bVar1) >> 0x3f & param_3 - lVar6);
  lVar3 = lVar6 + 1;
  param_1->previousAnimationFrame = (char)lVar6;
  uVar4 = (uint)lVar3;
  param_1->animationFrame = (char)lVar3;
  uVar5 = *(byte *)(iVar2 + 0x10) - 1;
  if ((int)uVar5 < (int)(uVar4 & 0xff)) {
    param_1->animationFrame = (char)uVar5;
    uVar4 = uVar5;
  }
  param_1->animationId = (u8)param_2;
  if ((uint)*(byte *)(iVar2 + 0x10) <= (uVar4 & 0xff)) {
    param_1->animationFrame = '\0';
  }
  mobyfunc::UpdateMobyFrameData(param_1);
                    /* WARNING: Load size is inaccurate */
  param_1->frameSpeed = *param_1->pPreviousAnimationData;
  param_1->field43_0x70 = param_1->field43_0x70 & 0xfd;
  return;
}



//==== 000fddc0  ns=mobyutil  size=0x1b8
// sig: undefined MB_SetAnimation(void)
// callers(321): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 00084ce0 hero::Hero_TransBoardAnim; 000850f8 hero::Hero_TransBackpackAnim; 00085b30 hero::Hero_HandleGadgetSwitching; 00086948 hero::Hero_UpdateGadgetSlots; 0008c3d0 hero::HeroUpdateNonRatchet; 000921c0 hero::EquipItem; 000a1698 hero::Hero_ThrowWrench; 000a9f00 hero::Hero_PlayBackpackIdle; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 00102168 mobyutil::MB_UpdateLegAnimState; 001091b0 mobyutil::MB_SetAnimAndReset2Leg; 00109298 mobyutil::MB_initJump; 001095b8 mobyutil::MB_updateJump; 0010ad80 mobyutil::MB_StartKick; 0013ebb0 pause::LoadMenuRatchetModel; 0014f828 pause::MenuHero_Update; 00150660 pause::MenuHero_MobyUpdateA; 00150bf4 pause::MenuHero_MobyUpdateD; 001516c0 pause::M1957_Update_GirlwadOnGameComplete; 0016bd58 vendor::Vendor_UpdateDude; 0016c4e8 vendor::Vendor_PlayDudeSpeech; 0016cc50 vendor::PurchaseHandler
// callees(4): 000ef74c mobyfunc::UpdateMobyFrameData; 000f0f9c mobyfunc::AnimCache_Register; 000fa940 mobyfunc::InterpolateAnimation; 00502730 fastfunc::FastIntToDouble

void mobyutil::MB_SetAnimation
               (MobyInstance *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  iVar5 = (int)(param_2 << 2);
  uVar3 = (int)param_1->animationBlend >> 0x1f;
  bVar2 = *(byte *)(*(int *)(&param_1->pClass->type + iVar5) + 0x10);
  cVar4 = bVar2 - 1;
  if (((0x3ccccccd < (int)((uVar3 >> 1 ^ (uint)param_1->animationBlend) - uVar3)) ||
      (param_1->pAnimationLayers != (void *)0x0)) || (param_1->pManipulators != (Manipulator *)0x0))
  {
    iVar7 = mobyfunc::AnimCache_Register((int)param_1);
    if (-1 < iVar7) {
      mobyfunc::InterpolateAnimation(param_1,(longlong)iVar7 | 0x300);
      iVar6 = (int)((longlong)iVar7 << 4);
      *(float *)(iVar6 + 0xa34600) = (param_1->transform).v3.x;
      *(float *)(iVar6 + 0xa34604) = (param_1->transform).v3.y;
      *(float *)(iVar6 + 0xa34608) = (param_1->transform).v3.z;
      *(float *)(iVar6 + 0xa3460c) = (param_1->transform).v3.w;
      if (param_1->updateId != 0xff) {
        param_1->previousAnimationId = param_1->updateId;
      }
      param_1->updateId = 0xff;
      param_1->previousAnimationFrame = (char)iVar7;
    }
  }
  param_1->animationFrame =
       cVar4 + ((byte)((longlong)(param_3 - (ulonglong)bVar2) >> 0x3f) & (char)param_3 - cVar4);
  param_1->animationId = (u8)param_2;
  mobyfunc::UpdateMobyFrameData(param_1);
  dVar9 = 1.0;
  param_1->unk58 = 1.0;
  fVar1 = 1e+07;
  if ((int)param_4 != 0) {
    dVar8 = (double)fastfunc::FastIntToDouble(param_4);
    fVar1 = (float)(dVar9 / dVar8);
  }
  param_1->frameSpeed = fVar1;
  param_1->animationBlend = 0.0;
  param_1->field43_0x70 = param_1->field43_0x70 & 0xfd;
  param_1->unk7c = *(char *)(*(int *)(&param_1->pClass->type + iVar5) + 0x11);
  return;
}



//==== 000fdf80  ns=mobyutil  size=0x1ec
// sig: void MB_SetAnimationFrame(MobyInstance * moby, int anim, int frame, int blendFrames, int flags)
// callers(4): 0010ad80 mobyutil::MB_StartKick; 0013ebb0 pause::LoadMenuRatchetModel; 002fa6f0 mobyupdate_unsorted::UpdateMoby_227; 00332c38 mobyupdate_unsorted::UpdateMoby_294
// callees(4): 000ef74c mobyfunc::UpdateMobyFrameData; 000f0f9c mobyfunc::AnimCache_Register; 000fa940 mobyfunc::InterpolateAnimation; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_SetAnimationFrame(MobyInstance *moby,int anim,int frame,int blendFrames,int flags)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  int iVar6;
  
  uVar2 = (int)moby->animationBlend >> 0x1f;
  if ((((0x3ccccccd < (int)((uVar2 >> 1 ^ (uint)moby->animationBlend) - uVar2)) ||
       (moby->pAnimationLayers != (void *)0x0)) || (moby->pManipulators != (Manipulator *)0x0)) ||
     ((flags & 4U) != 0)) {
    iVar6 = mobyfunc::AnimCache_Register((int)moby);
    uVar4 = (ulonglong)iVar6;
    if (-1 < iVar6) {
      uVar5 = (uVar4 | 0x100) + ((LZCOUNT(-(flags & 1U)) << 0x3a) >> 0x3f & uVar4 - (uVar4 | 0x100))
      ;
      uVar7 = uVar5 | 0x200;
      mobyfunc::InterpolateAnimation
                (moby,uVar7 + ((LZCOUNT(-(flags & 2U)) << 0x3a) >> 0x3f & uVar5 - uVar7));
      iVar3 = (int)(uVar4 << 4);
      *(float *)(iVar3 + 0xa34600) = (moby->transform).v3.x;
      *(float *)(iVar3 + 0xa34604) = (moby->transform).v3.y;
      *(float *)(iVar3 + 0xa34608) = (moby->transform).v3.z;
      *(float *)(iVar3 + 0xa3460c) = (moby->transform).v3.w;
      if (moby->updateId != 0xff) {
        moby->previousAnimationId = moby->updateId;
      }
      moby->updateId = 0xff;
      moby->previousAnimationFrame = (char)iVar6;
    }
  }
  moby->animationFrame = (char)frame;
  moby->animationId = (u8)anim;
  mobyfunc::UpdateMobyFrameData(moby);
  dVar9 = 1.0;
  moby->unk58 = 1.0;
  fVar1 = 1e+07;
  if (blendFrames != 0) {
    dVar8 = (double)fastfunc::FastIntToDouble(blendFrames);
    fVar1 = (float)(dVar9 / dVar8);
  }
  moby->frameSpeed = fVar1;
  moby->field43_0x70 = moby->field43_0x70 & 0xfd;
  moby->animationBlend = 0.0;
  moby->unk7c = *(char *)(*(int *)(&moby->pClass->type + (int)((longlong)anim << 2)) + 0x11);
  return;
}



//==== 000fe178  ns=mobyutil  size=0x1d0
// sig: undefined ???_Unused_MB_GetBoneAngle(void)
// callers(0): 
// callees(1): 000f1038 mobyfunc::GetBoneTransformations

double mobyutil::____Unused_MB_GetBoneAngle(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xe0;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar9;
  puVar5[0x1e] = in_LR;
  puVar5[0x1b] = unaff_r31;
  mobyfunc::GetBoneTransformations(param_1,param_2,uVar9 - 0x70);
  fVar8 = ABS(*(float *)(puVar5 + 0xe));
  fVar3 = ABS(*(float *)((int)puVar5 + 0x74));
  dVar17 = 0.0;
  *(float *)(puVar5 + 0x16) = fVar8 - fVar3;
  uVar11 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x16) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar2 = fVar8;
  if (*(float *)(puVar5 + 0x16) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
  fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (*(float *)(puVar5 + 0x16) - 0.0 < 0.0) {
    fVar3 = fVar8;
  }
  if (0.0 < fVar2) {
    lVar14 = uVar9 - 0xd0;
    lVar12 = uVar9 - 0x1c;
    lVar13 = uVar9 - 0x2c;
    lVar16 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x18) = fVar2;
    *(float *)(puVar5 + 0x17) = fVar2;
    *(float *)((int)puVar5 + 0xbc) = fVar2;
    *(float *)((int)puVar5 + 0xb4) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x17) = *(float *)(puVar5 + 0x17) * fVar3;
    *(float *)((int)puVar5 + 0xbc) = *(float *)((int)puVar5 + 0xbc) * fVar2;
    *(float *)(puVar5 + 0x18) = *(float *)(puVar5 + 0x18) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar2 * fVar2;
      iVar6 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x2c;
    lVar16 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar14;
    lVar13 = lVar10;
    do {
      fVar2 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xb4) * fVar2;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar12 = 2;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0xb4)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  return dVar17;
}



//==== 000fe350  ns=mobyutil  size=0x18
// sig: float MB_EaseOutQuad(float t)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseOutQuad(float t)

{
  return -((1.0 - t) * (1.0 - t) - 1.0);
}



//==== 000fe368  ns=mobyutil  size=0x2c
// sig: float MB_EaseInPow(float t, int n)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseInPow(float t,int n)

{
  float fVar1;
  int iVar2;
  int in_r4;
  
  fVar1 = t;
  if (1 < in_r4) {
    iVar2 = in_r4 + -1;
    do {
      iVar2 = iVar2 + -1;
      fVar1 = fVar1 * t;
    } while (0 < iVar2);
  }
  return fVar1;
}



//==== 000fe398  ns=mobyutil  size=0x40
// sig: float MB_EaseOutPow(float t, int n)
// callers(1): 00259bf0 mobyupdate_helpers::M1357_00259bf0
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseOutPow(float t,int n)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_r4;
  
  fVar1 = 1.0 - t;
  fVar2 = fVar1;
  if (1 < in_r4) {
    iVar3 = in_r4 + -1;
    do {
      iVar3 = iVar3 + -1;
      fVar2 = fVar2 * fVar1;
    } while (0 < iVar3);
  }
  return 1.0 - fVar2;
}



//==== 000fe3d8  ns=mobyutil  size=0x10
// sig: float MB_EaseInQuadRange(float t, float range)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseInQuadRange(float t,float range)

{
  return (t / range) * (t / range) * range;
}



//==== 000fe3f0  ns=mobyutil  size=0x20
// sig: float MB_EaseOutQuadRange(float t, float range)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseOutQuadRange(float t,float range)

{
  float fVar1;
  
  fVar1 = 1.0 - t / range;
  return range * -(fVar1 * fVar1 - 1.0);
}



//==== 000fe410  ns=mobyutil  size=0x2c
// sig: float MB_EaseInPowRange(float t, float range, int n)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseInPowRange(float t,float range,int n)

{
  float fVar1;
  int iVar2;
  int in_r4;
  
  fVar1 = t / range;
  if (1 < in_r4) {
    iVar2 = in_r4 + -1;
    do {
      iVar2 = iVar2 + -1;
      fVar1 = fVar1 * t;
    } while (0 < iVar2);
  }
  return range * fVar1;
}



//==== 000fe440  ns=mobyutil  size=0x44
// sig: float MB_EaseOutPowRange(float t, float range, int n)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyutil::MB_EaseOutPowRange(float t,float range,int n)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_r4;
  
  fVar1 = 1.0 - t / range;
  fVar2 = fVar1;
  if (1 < in_r4) {
    iVar3 = in_r4 + -1;
    do {
      iVar3 = iVar3 + -1;
      fVar2 = fVar2 * fVar1;
    } while (0 < iVar3);
  }
  return range * (1.0 - fVar2);
}



//==== 000fe484  ns=mobyutil  size=0x64
// sig: undefined MB_randRange(void)
// callers(214): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 0007f018 hero::Hero_ResetHero; 000802a0 hero::Hero_UpdateGlowAndBlink; 00084f5c hero::Hero_GetBackpackAnim; 00085b30 hero::Hero_HandleGadgetSwitching; 00092d58 hero::Hero_UpdateIdleLook; 00093c98 hero::Hero_UpdateCheatTweaks; 00096d88 hero::Hero_SpawnWaterDrops; 00097370 hero::Hero_SpawnWaterSplash; 00097700 hero::Hero_SpawnLavaAssParticles; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000d9ee8 initsky::UpdateSpaceSceneEffects; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00120f48 partupd::UpdatePart_3; 00123768 partupd::UpdatePart_11; 00124fd0 partupd::UpdatePart_15; 001255d8 partupd::UpdatePart_16
// callees(1): 005c8318 rand

int mobyutil::MB_randRange(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = rand();
  uVar1 = iVar2 >> 0xf & 0x7fff;
  iVar2 = (int)uVar1 / ((param_2 - param_1) + 1);
  return (uVar1 - (iVar2 * (param_2 - param_1) + iVar2)) + param_1;
}



//==== 000fe4f0  ns=mobyutil  size=0x88
// sig: undefined MB_randRangeSigned(void)
// callers(88): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00017fc8 mobyupdate_helpers::M1274_00017fc8; 00018238 mobyupdate_helpers::M1274_00018238; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00092d58 hero::Hero_UpdateIdleLook; 00093c98 hero::Hero_UpdateCheatTweaks; 00097700 hero::Hero_SpawnLavaAssParticles; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000d9bf8 initsky::SpawnSceneShipParticles; 00123ec8 partupd::SpawnPart_12; 001246b8 partupd::SpawnPart_13; 00124aa0 partupd::SpawnPart_14; 00126f50 partupd::SpawnPart_23; 00133738 partupd::UpdatePart_69; 00134e48 partupd::SpawnPart_75; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 001afa30 mobyupdate_helpers::M1068_001afa30; 001b5398 mobyupdate_helpers::M1075_001b5398; 001d3c28 mobyupdate_unsorted::UpdateMoby_1117; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 002476e8 mobyupdate_unsorted::UpdateMoby_1319
// callees(1): 005c8318 rand

double mobyutil::MB_randRangeSigned(double param_1,double param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = rand();
  dVar3 = (double)((float)(longlong)(int)((int)uVar1 >> 0xf & 0xfff) * (float)(param_2 - param_1));
  dVar2 = (double)(float)(dVar3 * 0.000244140625 + param_1);
  if ((uVar1 >> 0xf & 1) != 0) {
    dVar2 = -(double)(float)(dVar3 * 0.000244140625 + param_1);
  }
  return dVar2;
}



//==== 000fe580  ns=mobyutil  size=0x70
// sig: undefined MB_randFalloff(void)
// callers(0): 
// callees(1): 005c8318 rand

double mobyutil::MB_randFalloff(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = rand();
  fVar1 = (float)(longlong)(int)(iVar2 >> 0xf & 0xfff) * 0.00024414062;
  return (double)(float)(param_1 * -(double)(fVar1 * fVar1 - 1.0));
}



//==== 000fe610  ns=mobyutil  size=0x16c
// sig: void MB_SphericalToVector(float radius, float ang1, float ang2, float * out)
// callers(141): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 00097700 hero::Hero_SpawnLavaAssParticles; 0009c1b0 hero::Hero_ThrustToMotion; 0009cdd0 hero::Hero_UpdateExternalThrust; 000a1378 hero::Hero_SpawnLavaDeathParts; 000a1698 hero::Hero_ThrowWrench; 000aaec0 hero::HandleHeroMovement; 000d9bf8 initsky::SpawnSceneShipParticles; 000d9ee8 initsky::UpdateSpaceSceneEffects; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ed3e0 mobyattack::Spawn_Moby256_Rocket; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 000fe788 mobyutil::MB_randVector; 0010aa50 mobyutil::MB_MistDeathEffect; 0010e030 mobyutil::MB_genericExplosion; 00117238 mobyutil::MB_AddVectorSphere; 001180f0 mobyutil::MB_ComputeRocketAim; 00130810 partupd::SpawnPart_58; 00181f00 mobyupdate_helpers::M1004_00181f00; 00184c30 mobyupdate_unsorted::UpdateMoby_1009; 00192330 mobyupdate_helpers::Spawn_Moby1034; 00192590 mobyupdate_unsorted::UpdateMoby_1034; 00197c88 mobyupdate_helpers::M1045_00197c88; 001be558 mobyupdate_unsorted::UpdateMoby_1105
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mobyutil::MB_SphericalToVector(float radius,float ang1,float ang2,float *out)

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
  
  fVar13 = ang2 + 1.5707963;
  fVar1 = ang1 + 1.5707963;
  fVar2 = 3.1415925 - ang1;
  if (ang1 - (3.1415925 - ang1) < 0.0) {
    fVar2 = ang1;
  }
  fVar4 = 3.1415925 - fVar13;
  if (fVar13 - (3.1415925 - fVar13) < 0.0) {
    fVar4 = fVar13;
  }
  fVar12 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar12 = fVar1;
  }
  fVar5 = 3.1415925 - ang2;
  if (ang2 - (3.1415925 - ang2) < 0.0) {
    fVar5 = ang2;
  }
  fVar3 = -3.1415925 - ang1;
  if ((-3.1415925 - ang1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = -3.1415925 - fVar13;
  if ((-3.1415925 - fVar13) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  fVar13 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar12 < 0.0) {
    fVar13 = fVar12;
  }
  fVar1 = fVar3 * fVar3;
  fVar12 = fVar2 * fVar2;
  fVar14 = fVar13 * fVar13;
  fVar4 = -3.1415925 - ang2;
  if ((-3.1415925 - ang2) - fVar5 < 0.0) {
    fVar4 = fVar5;
  }
  fVar5 = fVar4 * fVar4;
  fVar16 = fVar1 * fVar1 * fVar3;
  fVar11 = fVar12 * fVar12 * fVar2;
  fVar8 = fVar14 * fVar14 * fVar13;
  fVar15 = fVar1 * fVar16;
  fVar10 = fVar12 * fVar11;
  fVar9 = fVar14 * fVar8;
  fVar6 = fVar5 * fVar5 * fVar4;
  fVar7 = fVar5 * fVar6;
  fVar2 = fVar12 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar11 * 0.0083330255 + fVar12 * fVar2 * -0.16666657 + fVar2;
  out[1] = (fVar1 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar16 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) *
           radius * fVar2;
  *out = (fVar14 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13) *
         radius * fVar2;
  out[2] = (fVar5 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
           radius;
  return;
}



//==== 000fe788  ns=mobyutil  size=0x114
// sig: void MB_randVector(double minRadius, double maxRadius, Vec4 * outPos)
// callers(9): 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 0015b590 sound::sound_CamOfs; 0024c380 mobyupdate_helpers::M1331_0024c380; 0027cb28 mobyupdate_helpers::M1440_0027cb28; 002877e8 mobyupdate_helpers::M1471_002877e8; 002ba3d8 mobyupdate_unsorted::UpdateMoby_180; 002ed768 mobyupdate_helpers::M211_002ed768; 00326788 mobyupdate_helpers::M28_00326788; 00362e40 mobyupdate_helpers::M403_00362e40
// callees(2): 000fe610 mobyutil::MB_SphericalToVector; 005c8318 rand

void mobyutil::MB_randVector(double minRadius,double maxRadius,Vec4 *outPos)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = rand();
  dVar4 = 3.1415927410125732;
  dVar3 = 0.00048828125;
  dVar2 = (double)((float)((double)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) *
                          3.1415927410125732) * 0.00048828125);
  iVar1 = rand();
  dVar3 = (double)(float)((double)(float)((double)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) *
                                         dVar4) * dVar3);
  iVar1 = rand();
  MB_SphericalToVector
            ((float)((double)((float)(longlong)(int)(iVar1 >> 0xf & 0x7fff) *
                             (float)(maxRadius - minRadius)) * 3.0517578125e-05 + minRadius),
             (float)dVar2,(float)dVar3,&outPos->x);
  return;
}



//==== 000fe8c8  ns=mobyutil  size=0x170
// sig: undefined MB_randCircle(void)
// callers(2): 002ce590 mobyupdate_unsorted::UpdateMoby_1885; 0032f988 mobyupdate_unsorted::UpdateMoby_291
// callees(1): 005c8318 rand

void mobyutil::MB_randCircle(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar6 = rand();
  dVar10 = (double)((float)(longlong)(int)((iVar6 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                   0.00048828125);
  iVar6 = rand();
  param_2[3] = 0.0;
  param_2[2] = 0.0;
  fVar1 = (float)(dVar10 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - dVar10);
  if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
    dVar8 = dVar10;
  }
  fVar2 = (float)(longlong)(int)(iVar6 >> 0xf & 0xfff) * 0.00024414062;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar7 = (double)(float)(-3.141592502593994 - dVar10);
  if ((double)(float)(-3.141592502593994 - dVar10) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  fVar2 = (float)(param_1 * -(double)(fVar2 * fVar2 - 1.0));
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar8 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
  fVar1 = fVar5 * fVar5 * fVar4;
  dVar10 = (double)(float)(dVar8 * dVar9);
  fVar3 = fVar5 * fVar1;
  param_2[1] = ((float)(dVar8 * dVar10) * 2.601887e-06 +
               (float)(dVar10 * -0.0001980741071747616 +
                      (double)(float)(dVar9 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar8 * dVar7) *
                                                     -0.16666656732559204 + dVar7)))) * fVar2;
  *param_2 = (fVar5 * fVar3 * 2.601887e-06 +
             fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
             fVar2;
  return;
}



//==== 000fea60  ns=mobyutil  size=0x234
// sig: undefined MB_randSphere(void)
// callers(72): 00119b38 mobyutil::MB_UpdateDebris; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001817d0 mobyupdate_helpers::M1003_001817d0; 00181c08 mobyupdate_helpers::M1004_00181c08; 00188368 mobyupdate_unsorted::UpdateMoby_1017; 00193078 mobyupdate_helpers::M1035_00193078; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 001958b0 mobyupdate_helpers::M1129_001958b0; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001b4d38 mobyupdate_unsorted::UpdateMoby_1073; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ca968 mobyupdate_helpers::M1109_001ca968; 001caf98 mobyupdate_helpers::M1109_001caf98; 001ce130 mobyupdate_helpers::M111_001ce130; 001d37b8 mobyupdate_unsorted::UpdateMoby_{1113_1114_1115_1116}; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001d9110 mobyupdate_helpers::M1134_001d9110; 001ff4d0 mobyupdate_unsorted::UpdateMoby_1208; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00204cd8 mobyupdate_helpers::M1212_00204cd8; 002059f0 mobyupdate_helpers::M1973_002059f0; 00205d98 mobyupdate_helpers::M1973_00205d98; 00206970 mobyupdate_helpers::M1214_00206970; 00208018 mobyupdate_helpers::M1215_00208018
// callees(1): 005c8318 rand

void mobyutil::MB_randSphere(double param_1,double param_2,float *param_3)

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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar13 = rand();
  dVar18 = (double)(float)((double)((float)(longlong)(int)(iVar13 >> 0xf & 0x7fff) *
                                   (float)(param_2 - param_1)) * 3.0517578125e-05 + param_1);
  iVar13 = rand();
  dVar17 = 3.1415927410125732;
  dVar16 = 0.00048828125;
  dVar15 = (double)((float)((double)(longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800) *
                           3.1415927410125732) * 0.00048828125);
  iVar13 = rand();
  fVar1 = (float)(dVar15 + 1.570796251296997);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar2 = (float)((double)(float)((double)(longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800) * dVar17
                                 ) * dVar16);
  fVar3 = fVar2 + 1.5707963;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  dVar16 = (double)(float)(3.141592502593994 - dVar15);
  if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
    dVar16 = dVar15;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar15);
  if ((double)(float)(-3.141592502593994 - dVar15) - dVar16 < 0.0) {
    dVar17 = dVar16;
  }
  fVar7 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar7 = fVar3;
  }
  fVar4 = fVar1 * fVar1 * fVar6;
  dVar15 = (double)(float)(dVar17 * dVar17);
  fVar11 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar11 = fVar5;
  }
  fVar5 = fVar1 * fVar4;
  fVar12 = fVar11 * fVar11;
  fVar2 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
    fVar2 = fVar7;
  }
  dVar14 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar17));
  fVar9 = fVar2 * fVar2;
  dVar16 = (double)(float)(dVar15 * dVar14);
  fVar3 = fVar12 * fVar12 * fVar11;
  fVar10 = fVar12 * fVar3;
  fVar7 = fVar9 * fVar9 * fVar2;
  fVar8 = fVar9 * fVar7;
  fVar3 = fVar12 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar3 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11;
  *param_3 = (float)((double)((fVar1 * fVar5 * 2.601887e-06 +
                              fVar5 * -0.0001980741 +
                              fVar4 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6) * fVar3) *
                    dVar18);
  param_3[1] = (float)((double)(((float)(dVar15 * dVar16) * 2.601887e-06 +
                                (float)(dVar16 * -0.0001980741071747616 +
                                       (double)(float)(dVar14 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar15 * 
                                                  dVar17) * -0.16666656732559204 + dVar17)))) *
                               fVar3) * dVar18);
  param_3[2] = (float)((double)(fVar9 * fVar8 * 2.601887e-06 +
                               fVar8 * -0.0001980741 +
                               fVar7 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * dVar18)
  ;
  return;
}



//==== 000fec94  ns=mobyutil  size=0x2c
// sig: undefined MB_catmullRom(void)
// callers(12): 0002f0a0 camera0::AzmLookAtDir; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 00042b48 camera::camera21::UpdateCamera_21; 00048510 camera::camera5::UpdateMobyDrivenCam; 0024d620 mobyupdate_helpers::M1338_0024d620; 002553b8 mobyupdate_helpers::M1352_002553b8; 00288a70 mobyupdate_helpers::M1474_00288a70; 0033a1d0 FUN_0033a1d0; 0035aac0 mobyupdate_helpers::M388_0035aac0; 004122c8 mobyupdate_helpers::M685_004122c8; 0042e8f0 mobyupdate_unsorted::UpdateMoby_712; 00466e98 mobyupdate_unsorted::UpdateMoby_806
// callees(0): 

double mobyutil::MB_catmullRom
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = (double)(float)((double)(float)(param_4 - param_3) - (double)(float)(param_1 - param_2));
  return (double)(float)((double)(float)(param_5 * param_5) *
                         (double)(float)((double)(float)(param_1 - param_2) - dVar1) +
                        (double)(float)((double)(float)(param_3 - param_1) * param_5 +
                                       (double)(float)((double)(float)((double)(float)(param_5 *
                                                                                      param_5) *
                                                                      param_5) * dVar1 + param_2)));
}



//==== 000fecf0  ns=mobyutil  size=0xb4
// sig: undefined MB_CosineInterpolate(void)
// callers(8): 00032100 camera0::UpdateCamCollisions_0; 000371e0 camera::camera10::Cam10_000371e0; 00040440 camera::camera19::UpdateCamera_19; 00041850 camera::camera20::UpdateCamera_20; 00048510 camera::camera5::UpdateMobyDrivenCam; 00051af8 camera::Camera_BlendCamsPosQuat; 00051d40 camera::Camera_BlendCamsPolQuat; 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(0): 

double mobyutil::MB_CosineInterpolate(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = param_1;
  if ((param_3 != 0.0) && (dVar5 = param_2, param_3 != 1.0)) {
    fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
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
    dVar5 = (double)(float)((double)(float)(param_2 - param_1) *
                            (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                                            fVar4 * -0.0001980741 +
                                            fVar2 * 0.0083330255 +
                                            fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5) + param_1);
  }
  return dVar5;
}



//==== 000fedd0  ns=mobyutil  size=0xd8
// sig: undefined MB_lerpRotCosine(void)
// callers(1): 00048510 camera::camera5::UpdateMobyDrivenCam
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyutil::MB_lerpRotCosine(double param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)fastfunc::FastDiffRots(param_2,param_1);
  fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
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
  fastfunc::FastWrapRot
            ((float)param_1,
             (float)((double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                                     fVar4 * -0.0001980741 +
                                     fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) *
                             0.5) * dVar5));
  return;
}



//==== 000feed8  ns=mobyutil  size=0x12c
// sig: undefined MB_CosineInterpolateUnitVec(void)
// callers(1): 00048510 camera::camera5::UpdateMobyDrivenCam
// callees(0): 

void mobyutil::MB_CosineInterpolateUnitVec
               (double param_1,float *param_2,float *param_3,float *param_4)

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
  
  if (param_1 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else if (param_1 == 1.0) {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    param_2[3] = param_4[3];
  }
  else {
    fVar1 = (float)(param_1 * 3.1415927410125732 + 1.570796251296997);
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    fVar8 = fVar7 * fVar7;
    fVar9 = fVar8 * fVar8 * fVar7;
    fVar1 = *param_4;
    fVar2 = *param_3;
    fVar10 = fVar8 * fVar9;
    fVar3 = param_4[1];
    fVar4 = param_3[1];
    fVar5 = param_4[2];
    fVar6 = param_3[2];
    param_2[3] = param_3[3];
    fVar7 = (1.0 - (fVar8 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)) * 0.5;
    *param_2 = fVar7 * (fVar1 - fVar2) + fVar2;
    param_2[1] = fVar7 * (fVar3 - fVar4) + fVar4;
    param_2[2] = fVar7 * (fVar5 - fVar6) + fVar6;
  }
  return;
}



//==== 000ff030  ns=mobyutil  size=0x150
// sig: undefined MB_CosineInterpolateAngVec(void)
// callers(1): 00048510 camera::camera5::UpdateMobyDrivenCam
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyutil::MB_CosineInterpolateAngVec
               (double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_1 * 3.1415927410125732 + 1.570796251296997);
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
  dVar6 = (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5);
  dVar5 = (double)fastfunc::FastDiffRots((double)*param_4,(double)*param_3);
  dVar5 = (double)fastfunc::FastWrapRot(*param_3,(float)(dVar5 * dVar6));
  fVar1 = param_4[1];
  *param_2 = (float)dVar5;
  dVar5 = (double)fastfunc::FastDiffRots((double)fVar1,(double)param_3[1]);
  dVar5 = (double)fastfunc::FastWrapRot(param_3[1],(float)(dVar5 * dVar6));
  fVar1 = param_4[2];
  param_2[1] = (float)dVar5;
  dVar5 = (double)fastfunc::FastDiffRots((double)fVar1,(double)param_3[2]);
  dVar5 = (double)fastfunc::FastWrapRot(param_3[2],(float)(dVar5 * dVar6));
  param_2[2] = (float)dVar5;
  return;
}



//==== 000ff190  ns=mobyutil  size=0x148
// sig: undefined MB_DeltAngSpeed(void)
// callers(45): 0001bbd8 mobyupdate_helpers::M326_0001bbd8; 0001bf50 mobyupdate_helpers::M326_0001bf50; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00102168 mobyutil::MB_UpdateLegAnimState; 001766d8 walk::Walk_UpdateLegRotations; 0017a230 walk::walk_Update; 00181f00 mobyupdate_helpers::M1004_00181f00; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001ce3f0 mobyupdate_helpers::M1109_001ce3f0; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 002082e8 mobyupdate_helpers::M1215_002082e8; 002088c0 mobyupdate_helpers::M1215_002088c0; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00238e58 mobyupdate_helpers::M1284_00238e58; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 00252710 mobyupdate_unsorted::UpdateMoby_1346; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a52f8 mobyupdate_unsorted::UpdateMoby_1633; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 002f8c70 mobyupdate_unsorted::UpdateMoby_221; 00300950 mobyupdate_helpers::M233_00300950; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 0033ac30 mobyupdate_unsorted::UpdateMoby_305
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyutil::MB_DeltAngSpeed
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,float *param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)fastfunc::FastDiffRots(param_2,param_1);
  dVar4 = 1.0;
  dVar3 = (double)(float)(dVar2 * 6.36619758605957);
  if ((dVar3 <= 1.0) && (dVar4 = dVar3, dVar3 < -1.0)) {
    dVar4 = -1.0;
  }
  fVar1 = (float)((double)*param_8 +
                 (double)(float)(param_3 * dVar4 - (double)(float)(param_4 * (double)*param_8)));
  dVar4 = (double)fVar1;
  *param_8 = fVar1;
  if (param_5 != 0.0) {
    if (dVar4 <= param_5) {
      param_5 = -param_5;
      if (dVar4 < param_5) {
        *param_8 = (float)param_5;
        dVar4 = param_5;
      }
    }
    else {
      *param_8 = (float)param_5;
      dVar4 = param_5;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_8 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_8 = (float)dVar2;
    dVar4 = dVar2;
  }
  fastfunc::FastWrapRot((float)param_1,(float)dVar4);
  return;
}



//==== 000ff2e8  ns=mobyutil  size=0x148
// sig: undefined OrganicDeltAngSpeed(void)
// callers(108): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 000ff438 mobyutil::MB_FaceDeltAngSpeed; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00103710 mobyutil::MB_UpdateLegAnimMoveTurning; 00103b50 mobyutil::MB_OrbitAndFaceTarget; 001095b8 mobyutil::MB_updateJump; 0010b030 mobyutil::MB_UpdateKick; 00181f00 mobyupdate_helpers::M1004_00181f00; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001c26e0 mobyupdate_helpers::M1106_001c26e0; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ce3f0 mobyupdate_helpers::M1109_001ce3f0; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00206cd8 mobyupdate_unsorted::UpdateMoby_1214; 002082e8 mobyupdate_helpers::M1215_002082e8; 002088c0 mobyupdate_helpers::M1215_002088c0; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 0021b8c0 mobyupdate_unsorted::UpdateMoby_1241; 0022e580 mobyupdate_unsorted::UpdateMoby_1262
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyutil::OrganicDeltAngSpeed
               (undefined8 param_1,double param_2,double param_3,double param_4,int param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)fastfunc::FastDiffRots(param_1,(double)*(float *)(param_5 + 0x48));
  dVar4 = 1.0;
  dVar3 = (double)(float)(dVar2 * 6.36619758605957);
  if ((dVar3 <= 1.0) && (dVar4 = dVar3, dVar3 < -1.0)) {
    dVar4 = -1.0;
  }
  fVar1 = (float)((double)*param_7 +
                 (double)(float)(param_2 * dVar4 - (double)(float)(param_3 * (double)*param_7)));
  dVar4 = (double)fVar1;
  *param_7 = fVar1;
  if (param_4 != 0.0) {
    if (dVar4 <= param_4) {
      param_4 = -param_4;
      if (dVar4 < param_4) {
        *param_7 = (float)param_4;
        dVar4 = param_4;
      }
    }
    else {
      *param_7 = (float)param_4;
      dVar4 = param_4;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_7 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_7 = (float)dVar2;
    dVar4 = dVar2;
  }
  dVar4 = (double)fastfunc::FastWrapRot(*(float *)(param_5 + 0x48),(float)dVar4);
  *(float *)(param_5 + 0x48) = (float)dVar4;
  return;
}



//==== 000ff438  ns=mobyutil  size=0x21c
// sig: undefined MB_FaceDeltAngSpeed(void)
// callers(0): 
// callees(1): 000ff2e8 mobyutil::OrganicDeltAngSpeed

void mobyutil::MB_FaceDeltAngSpeed
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong in_LR;
  longlong lVar15;
  double dVar16;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0xa0;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar8;
  puVar5[0x16] = in_LR;
  fVar2 = *(float *)(param_5 + 0x10) - *(float *)(param_4 + 0x10);
  fVar4 = *(float *)(param_5 + 0x14) - *(float *)(param_4 + 0x14);
  fVar1 = ABS(fVar2);
  fVar3 = ABS(fVar4);
  *(float *)(puVar5 + 0xe) = fVar2;
  *(float *)((int)puVar5 + 0x74) = fVar4;
  *(float *)(puVar5 + 0xf) = fVar1 - fVar3;
  dVar16 = 0.0;
  uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar3 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar13 = uVar8 - 0x90;
    lVar10 = uVar8 - 0x14;
    lVar11 = uVar8 - 0x24;
    lVar15 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar2;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x7c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
    *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar11;
      lVar11 = lVar11 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar10 = lVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar13 = uVar8 - 0x24;
    lVar15 = 4;
    pfVar14 = (float *)&DAT_007358e0;
    lVar10 = lVar13;
    lVar11 = lVar9;
    do {
      fVar2 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar2;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar3;
      lVar10 = lVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar9;
      iVar7 = (int)lVar13;
      lVar9 = lVar9 + 0x10;
      lVar13 = lVar13 + 0x10;
      dVar16 = (double)((float)(dVar16 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar16 = (double)((float)(dVar16 + 0.7853981852531433) * fVar4 + fVar1);
  }
  OrganicDeltAngSpeed(dVar16,param_1,param_2,param_3,param_4,param_4,param_6);
  return;
}



//==== 000ff654  ns=mobyutil  size=0x28
// sig: undefined MB_Dist2D(MobyInstance * param_1, MobyInstance * param_2)
// callers(0): 
// callees(0): 

double mobyutil::MB_Dist2D(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->pos).y - (param_1->pos).y;
  fVar2 = (param_2->pos).x - (param_1->pos).x;
  return (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}



//==== 000ff67c  ns=mobyutil  size=0x38
// sig: undefined MB_DistBetweenMobys(MobyInstance * param_1, MobyInstance * param_2)
// callers(0): 
// callees(0): 

double mobyutil::MB_DistBetweenMobys(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->pos).y - (param_1->pos).y;
  fVar2 = (param_2->pos).x - (param_1->pos).x;
  fVar3 = (param_2->pos).z - (param_1->pos).z;
  return (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}



//==== 000ff6b8  ns=mobyutil  size=0xec
// sig: undefined CollLineValidate(void)
// callers(2): 001c26e0 mobyupdate_helpers::M1106_001c26e0; 003760e8 mobyupdate_helpers::M437_003760e8
// callees(1): 00057820 collproc::CollLine

longlong mobyutil::CollLineValidate(void)

{
  longlong lVar1;
  undefined8 in_r6;
  int in_r7;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  lVar1 = collproc::CollLine(local_30,local_20,0x22,in_r6,0);
  lVar1 = lVar1 + ((longlong)CollOutput.poly >> 0x3f & -lVar1);
  if ((in_r7 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
    lVar1 = 0;
  }
  return lVar1;
}



//==== 000ff7a8  ns=mobyutil  size=0xc0
// sig: undefined MB_CheckLineOfSight(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

undefined8 mobyutil::MB_CheckLineOfSight(undefined4 param_1,MobyInstance *param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar2 = collproc::CollLine(local_30,local_20,0,param_1,0);
  if ((iVar2 == 0) || (CollOutput.pMoby == param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 000ff878  ns=mobyutil  size=0x2f4
// sig: undefined MB_IsSteepGround(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

undefined8 mobyutil::MB_IsSteepGround(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  double dVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xf0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  uVar1 = *param_2;
  *(undefined4 *)(puVar9 + 0xe) = uVar1;
  uVar2 = param_2[1];
  puVar9[0x1c] = unaff_r31;
  *(undefined4 *)((int)puVar9 + 0x74) = uVar2;
  uVar3 = param_2[3];
  fVar4 = (float)param_2[2];
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
  dVar21 = 1.0;
  *(undefined4 *)(puVar9 + 0x10) = uVar1;
  *(undefined4 *)((int)puVar9 + 0x84) = uVar2;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar3;
  *(float *)(puVar9 + 0xf) = fVar4 + 1.0;
  *(float *)(puVar9 + 0x11) = fVar4 - 1.0;
  iVar14 = collproc::CollLine(uVar11 - 0x80,uVar11 - 0x70,2,param_1,0);
  fVar4 = CollOutput.normal.z;
  if (iVar14 != 0) {
    fVar5 = ABS(CollOutput.normal.z);
    fVar7 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar6 = ABS(fVar7);
    *(float *)(puVar9 + 0x16) = fVar7;
    *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar6;
    fVar7 = 0.0;
    uVar12 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
    fVar4 = fVar5;
    if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = ABS(*(float *)(puVar9 + 0x16));
    if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar5 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar17 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x38;
      lVar15 = uVar11 - 0x28;
      lVar19 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xc4) = fVar4;
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)(puVar9 + 0x18) = fVar4;
      *(float *)(puVar9 + 0x17) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar6;
      *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
      *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar4 * fVar4;
        iVar14 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x38;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar4 = *pfVar18;
        fVar6 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar14 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar7 = fVar7 + *(float *)(iVar14 + 0xb8) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar7 = (fVar7 + 0.7853982) * fVar8 + fVar5;
    }
    fVar4 = CollOutput.ip.z;
    if (fVar7 < 0.5) {
      fVar7 = *(float *)(param_1 + 0x18);
      dVar20 = (double)CollOutput.ip.z;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x94) = uVar1;
      *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
      fVar5 = CollOutput.ip.y;
      *(float *)(puVar9 + 0x14) = CollOutput.ip.x;
      *(float *)((int)puVar9 + 0xa4) = fVar5;
      fVar5 = CollOutput.ip.w;
      *(float *)(puVar9 + 0x15) = fVar4;
      *(float *)(puVar9 + 0x13) = (float)((double)fVar7 + dVar21);
      *(float *)((int)puVar9 + 0xac) = fVar5;
      *(float *)(puVar9 + 0x15) = (float)(dVar20 + dVar21);
      iVar14 = collproc::CollLine(uVar11 - 0x60,uVar11 - 0x50,0,param_1,0);
      if (iVar14 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



//==== 000ffb70  ns=mobyutil  size=0xa0
// sig: undefined GetGroundZ(void)
// callers(123): 0007f018 hero::Hero_ResetHero; 00080a08 hero::Hero_PlayFootStep; 000a71a0 hero::Hero_GetHoverboardRespawn; 000aa9c8 hero::SetPositionAfterMovie; 000dcf58 loaders::NAVG_LoadFile; 00167a30 update::mode_sceneUnInit; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 00175d68 walk::Walk_SolveLegGroundContact; 00176c90 walk::Walk_UpdateStateMachine; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018a840 mobyupdate_helpers::M1023_0018a840; 001907f0 mobyupdate_unsorted::UpdateMoby_1031; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001aec28 mobyupdate_helpers::M1068_001aec28; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001f3688 mobyupdate_unsorted::UpdateMoby_1196; 001f5ca0 mobyupdate_helpers::M1197_001f5ca0; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00201da8 mobyupdate_helpers::M121_00201da8; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00211748 mobyupdate_unsorted::UpdateMoby_1229
// callees(1): 00057820 collproc::CollLine

double mobyutil::GetGroundZ(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  int iVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar2 = collproc::CollLine(local_20,local_30,param_2 | 2,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = CollOutput.ip.z;
  }
  return (double)fVar1;
}



//==== 000ffc18  ns=mobyutil  size=0xa0
// sig: undefined GetGroundZNoWater(void)
// callers(12): 001a8d88 mobyupdate_helpers::M1059_001a8d88; 001a8f18 mobyupdate_helpers::M1059_001a8f18; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001dcde8 mobyupdate_helpers::M1140_001dcde8; 001dd210 mobyupdate_helpers::M1140_001dd210; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00222788 mobyupdate_helpers::M1243_00222788; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(1): 00057820 collproc::CollLine

double mobyutil::GetGroundZNoWater(void)

{
  float fVar1;
  int iVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar2 = collproc::CollLine(local_20,local_30,0x22,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = CollOutput.ip.z;
  }
  return (double)fVar1;
}



//==== 000ffcd0  ns=mobyutil  size=0x8c8
// sig: undefined CollMovingSphere(void)
// callers(10): 001136c8 mobyutil::DoMeander; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 00424e98 mobyupdate_unsorted::UpdateMoby_695; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(2): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere

int mobyutil::CollMovingSphere
              (double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
              float *param_6,float *param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  uint in_r10;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x1d0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
  puVar6[0x3c] = in_LR;
  puVar6[0x31] = in_f23;
  puVar6[0x32] = in_f24;
  puVar6[0x33] = in_f25;
  puVar6[0x34] = in_f26;
  puVar6[0x35] = in_f27;
  puVar6[0x36] = in_f28;
  puVar6[0x37] = in_f29;
  puVar6[0x38] = in_f30;
  puVar6[0x39] = in_f31;
  puVar6[0x2e] = unaff_r29;
  puVar6[0x29] = unaff_r24;
  puVar6[0x2d] = unaff_r28;
  fVar2 = param_7[2];
  fVar3 = *param_7;
  puVar6[0x2a] = unaff_r25;
  fVar4 = param_7[1];
  puVar6[0x30] = unaff_r31;
  fVar5 = param_7[3];
  *(float *)(puVar6 + 0x18) = fVar3;
  *(float *)((int)puVar6 + 0xc4) = fVar4;
  puVar6[0x2f] = unaff_r30;
  *(float *)((int)puVar6 + 0xcc) = fVar5;
  *(float *)(puVar6 + 0x1a) = fVar3;
  *(undefined4 *)(puVar6 + 0x19) = 0x3c23d70a;
  *(float *)((int)puVar6 + 0xd4) = fVar4;
  puVar6[0x28] = unaff_r23;
  *(float *)((int)puVar6 + 0xdc) = fVar5;
  puVar6[0x27] = unaff_r22;
  puVar6[0x2c] = unaff_r27;
  iVar16 = 1;
  param_7[2] = (float)((double)fVar2 + param_1);
  dVar25 = 0.5;
  puVar6[0x2b] = unaff_r26;
  *(float *)(puVar6 + 0x1b) = (float)((double)fVar2 + param_1) + 0.5;
  iVar9 = collproc::CollLine(uVar8 - 0x100,uVar8 - 0x110,0x22,0,0);
  dVar18 = 0.0;
  dVar29 = (double)*param_7;
  dVar27 = (double)param_7[1];
  dVar19 = dVar18;
  if (iVar9 != 0) {
    dVar19 = (double)CollOutput.ip.z;
  }
  dVar21 = (double)(float)((double)param_7[2] - param_1);
  param_7[2] = (float)((double)param_7[2] - param_1);
  dVar22 = (double)param_6[2];
  if ((param_3 < ABS((double)(float)(dVar19 - dVar22))) &&
     ((((in_r10 & 1) == 0 && (dVar19 < dVar22)) || (dVar22 < dVar19)))) {
    dVar29 = (double)*param_6;
    iVar16 = 0;
    *param_7 = *param_6;
    dVar27 = (double)param_6[1];
    param_7[1] = param_6[1];
    dVar21 = (double)param_6[2];
    param_7[2] = param_6[2];
    param_7[3] = param_6[3];
    dVar22 = (double)param_6[2];
  }
  fVar2 = param_6[1];
  dVar20 = (double)fVar2;
  dVar26 = (double)(float)(dVar21 - dVar22);
  dVar21 = (double)*param_6;
  dVar28 = (double)(float)(dVar27 - dVar20);
  dVar29 = (double)(float)(dVar29 - dVar21);
  *(float *)(puVar6 + 0xe) = *param_6;
  fVar3 = param_6[3];
  *(float *)((int)puVar6 + 0x74) = fVar2;
  *(float *)((int)puVar6 + 0x7c) = fVar3;
  *(float *)((int)puVar6 + 0x8c) = fVar3;
  *(float *)(puVar6 + 0xf) = (float)(dVar22 + param_1);
  fVar2 = SQRT((float)(dVar26 * dVar26 +
                      (double)(float)(dVar29 * dVar29 + (double)(float)(dVar28 * dVar28))));
  dVar27 = (double)((float)(param_2 * 1.2000000476837158) / fVar2);
  dVar19 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(float)(dVar27 * dVar26);
  }
  dVar23 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar23 = (double)(float)(dVar27 * dVar28);
  }
  dVar24 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar24 = (double)(float)(dVar27 * dVar29);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(float)(dVar27 * dVar26);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar23 = (double)(float)(dVar27 * dVar28);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar24 = (double)(float)(dVar27 * dVar29);
  }
  *(float *)(puVar6 + 0x11) = (float)((double)(float)(dVar22 + param_1) + dVar19);
  *(float *)((int)puVar6 + 0x84) = (float)(dVar20 + dVar23);
  *(float *)(puVar6 + 0x10) = (float)(dVar21 + dVar24);
  if (((iVar16 != 0) &&
      (iVar9 = collproc::CollLine(uVar8 - 0x160,uVar8 - 0x150,
                                  ((LZCOUNT(-(in_r10 & 2)) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) +
                                  2 | 0x24,param_5,0), fVar2 = CollOutput.normal.z, iVar9 != 0)) &&
     (0 < CollOutput.poly)) {
    dVar23 = (double)CollOutput.normal.y;
    dVar20 = (double)CollOutput.normal.x;
    dVar22 = ABS((double)CollOutput.normal.z);
    dVar27 = (double)(float)(dVar20 * dVar20 + (double)(float)(dVar23 * dVar23));
    dVar21 = (double)(float)SQRT(dVar27);
    dVar24 = ABS(dVar21);
    *(float *)((int)puVar6 + 0xec) = (float)SQRT(dVar27);
    *(float *)(puVar6 + 0x1e) = (float)(dVar22 - dVar24);
    uVar14 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xec) >> 0x1d) & 4;
    dVar19 = dVar22;
    if ((double)*(float *)(puVar6 + 0x1e) - dVar18 < 0.0) {
      dVar19 = dVar24;
    }
    dVar24 = ABS((double)*(float *)((int)puVar6 + 0xec));
    if ((double)*(float *)(puVar6 + 0x1e) - dVar18 < 0.0) {
      dVar24 = dVar22;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar22 = dVar18;
    if (dVar18 < dVar19) {
      lVar11 = uVar8 - 0x1c0;
      lVar15 = uVar8 - 0xac;
      lVar12 = uVar8 - 0xbc;
      lVar17 = 2;
      fVar4 = (float)(dVar24 - dVar19) / (float)(dVar24 + dVar19);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x114) = fVar4;
      *(float *)(puVar6 + 0x23) = fVar4;
      *(float *)((int)puVar6 + 0x11c) = fVar4;
      *(float *)(puVar6 + 0x24) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x23) = *(float *)(puVar6 + 0x23) * fVar5;
      *(float *)((int)puVar6 + 0x11c) = *(float *)((int)puVar6 + 0x11c) * fVar4;
      *(float *)(puVar6 + 0x24) = *(float *)(puVar6 + 0x24) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar11 + 0x114) = *(float *)((int)lVar11 + 0x104) * fVar4 * fVar4;
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar15 = uVar8 - 0xbc;
      pfVar13 = (float *)&DAT_007358e0;
      lVar11 = lVar1;
      lVar12 = lVar15;
      do {
        fVar4 = *pfVar13;
        fVar5 = pfVar13[1];
        pfVar13 = pfVar13 + 2;
        *(float *)((int)lVar11 + 0x114) = *(float *)((int)lVar11 + 0x114) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      lVar11 = lVar1;
      dVar19 = dVar18;
      do {
        iVar9 = (int)lVar11;
        iVar10 = (int)lVar15;
        lVar11 = lVar11 + 0x10;
        lVar15 = lVar15 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x114)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar2);
    }
    if (param_4 <= dVar22) {
      dVar19 = 1.0;
      if (dVar21 != dVar18) {
        dVar19 = 1.0 / SQRT(dVar27);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
      }
      CollOutput.normal.x = (float)(dVar20 * dVar19);
      CollOutput.normal.y = (float)(dVar23 * dVar19);
      CollOutput.normal.z = (float)(dVar18 * dVar19);
      dVar19 = -(double)(float)(dVar28 * (double)CollOutput.normal.y -
                               -(double)(float)(dVar29 * (double)CollOutput.normal.x));
      if (dVar18 < dVar19) {
        CollOutput.normal.x = (float)((double)CollOutput.normal.x * dVar19);
        CollOutput.normal.y = (float)((double)CollOutput.normal.y * dVar19);
        iVar16 = 0;
        CollOutput.normal.z = (float)((double)CollOutput.normal.z * dVar19);
        dVar29 = (double)(float)(dVar29 + (double)CollOutput.normal.x);
        dVar28 = (double)(float)(dVar28 + (double)CollOutput.normal.y);
        dVar26 = (double)(float)(dVar26 + (double)CollOutput.normal.z);
      }
    }
    fVar2 = *param_6;
    fVar3 = param_6[1];
    fVar4 = param_6[2];
    param_7[3] = param_6[3];
    *param_7 = (float)((double)fVar2 + dVar29);
    param_7[1] = (float)((double)fVar3 + dVar28);
    param_7[2] = (float)((double)fVar4 + dVar26);
  }
  if ((in_r10 & 2) == 0) {
    iVar9 = 0;
    do {
      dVar19 = (double)(float)(param_2 + param_1);
      *(float *)(puVar6 + 0x12) = *param_7;
      *(float *)((int)puVar6 + 0x94) = param_7[1];
      fVar2 = param_7[2];
      *(float *)((int)puVar6 + 0x9c) = param_7[3];
      *(float *)(puVar6 + 0x13) = (float)(dVar19 + (double)fVar2);
      iVar10 = collproc::CollSphere(param_2,uVar8 - 0x140);
      if (iVar10 == 0) break;
      fVar3 = CollOutput.ip.z - param_7[2];
      fVar2 = SQRT((*param_7 - CollOutput.ip.x) * (*param_7 - CollOutput.ip.x) +
                   (param_7[1] - CollOutput.ip.y) * (param_7[1] - CollOutput.ip.y));
      *(float *)((int)puVar6 + 0xe4) = fVar3;
      dVar21 = ABS((double)fVar3);
      dVar29 = ABS((double)fVar2);
      *(float *)(puVar6 + 0x1c) = fVar2;
      *(float *)(puVar6 + 0x1d) = (float)(dVar29 - dVar21);
      uVar14 = (ulonglong)(*(uint *)(puVar6 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0xe4) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar6 + 0x1c));
      if ((double)*(float *)(puVar6 + 0x1d) - dVar18 < 0.0) {
        dVar27 = dVar21;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar21 = ABS((double)*(float *)((int)puVar6 + 0xe4));
      if ((double)*(float *)(puVar6 + 0x1d) - dVar18 < 0.0) {
        dVar21 = dVar29;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar29 = dVar18;
      if (dVar18 < dVar27) {
        lVar11 = uVar8 - 0x1c0;
        lVar12 = uVar8 - 0xdc;
        lVar15 = uVar8 - 0xcc;
        lVar17 = 2;
        fVar4 = (float)(dVar21 - dVar27) / (float)(dVar21 + dVar27);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar6 + 0xf4) = fVar4;
        *(float *)(puVar6 + 0x1f) = fVar4;
        *(float *)((int)puVar6 + 0xfc) = fVar4;
        *(float *)(puVar6 + 0x20) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar6 + 0x1f) = *(float *)(puVar6 + 0x1f) * fVar5;
        *(float *)((int)puVar6 + 0xfc) = *(float *)((int)puVar6 + 0xfc) * fVar4;
        *(float *)(puVar6 + 0x20) = *(float *)(puVar6 + 0x20) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar11 + 0xf4) = *(float *)((int)lVar11 + 0xe4) * fVar4 * fVar4;
          iVar10 = (int)lVar12;
          lVar11 = lVar11 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar15 = lVar15 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 4;
        lVar15 = uVar8 - 0xdc;
        pfVar13 = (float *)&DAT_007358e0;
        lVar11 = lVar1;
        lVar12 = lVar15;
        do {
          fVar4 = *pfVar13;
          fVar5 = pfVar13[1];
          pfVar13 = pfVar13 + 2;
          *(float *)((int)lVar11 + 0xf4) = *(float *)((int)lVar11 + 0xf4) * fVar4;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
          lVar12 = lVar12 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar12 = 2;
        lVar11 = lVar1;
        dVar27 = dVar18;
        do {
          iVar10 = (int)lVar11;
          lVar11 = lVar11 + 0x10;
          iVar7 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xf4)) +
                            *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc))
          ;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
      }
      if ((CollOutput.pMoby != (MobyInstance *)0x0) || (param_4 < dVar29)) {
        iVar16 = 0;
        *param_7 = CollOutput.push.x;
        param_7[1] = CollOutput.push.y;
        dVar27 = (double)CollOutput.push.z;
        param_7[2] = CollOutput.push.z;
        param_7[3] = CollOutput.push.w;
        param_7[2] = (float)(dVar27 - dVar19);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
  }
  fVar2 = param_7[2];
  fVar3 = *param_7;
  *(float *)(puVar6 + 0x14) = fVar3;
  fVar4 = param_7[1];
  *(float *)((int)puVar6 + 0xa4) = fVar4;
  fVar5 = param_7[3];
  *(undefined4 *)(puVar6 + 0x15) = 0x3c23d70a;
  *(float *)((int)puVar6 + 0xac) = fVar5;
  param_7[2] = (float)((double)fVar2 + param_1);
  *(float *)(puVar6 + 0x16) = fVar3;
  *(float *)((int)puVar6 + 0xb4) = fVar4;
  *(float *)((int)puVar6 + 0xbc) = fVar5;
  *(float *)(puVar6 + 0x17) = (float)((double)(float)((double)fVar2 + param_1) + dVar25);
  iVar9 = collproc::CollLine(uVar8 - 0x120,uVar8 - 0x130,0x22,0,0);
  fVar2 = *param_7;
  if (iVar9 != 0) {
    dVar18 = (double)CollOutput.ip.z;
  }
  param_7[2] = (float)((double)param_7[2] - param_1);
  dVar19 = (double)param_6[2];
  if ((param_3 < ABS((double)(float)(dVar18 - dVar19))) &&
     ((((in_r10 & 1) == 0 && (dVar18 < dVar19)) || (dVar19 < dVar18)))) {
    fVar2 = *param_6;
    iVar16 = 0;
    *param_7 = fVar2;
    param_7[1] = param_6[1];
    param_7[2] = param_6[2];
    param_7[3] = param_6[3];
  }
  fVar3 = param_7[1];
  *param_6 = fVar2;
  param_6[1] = fVar3;
  return iVar16;
}



