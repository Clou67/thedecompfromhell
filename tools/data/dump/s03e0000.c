//==== 003e12b0  ns=mobyupdate_helpers  size=0x318
// sig: undefined M617_003e12b0(void)
// callers(0): 
// callees(3): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M617_003e12b0(double param_1,double param_2,double param_3)

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
  double dVar16;
  double dVar17;
  undefined1 local_c0 [32];
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  
  dVar17 = 1.570796251296997;
  dVar16 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar15 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar14 = 0.008333025500178337;
  dVar13 = -0.0001980741071747616;
  dVar12 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar9 = 16.0;
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
                             param_3) * 16.0));
  dVar7 = (double)(float)(dVar16 - param_1);
  if (param_1 - (double)(float)(dVar16 - param_1) < 0.0) {
    dVar7 = param_1;
  }
  dVar6 = (double)(float)(dVar15 - param_1);
  if ((double)(float)(dVar15 - param_1) - dVar7 < 0.0) {
    dVar6 = dVar7;
  }
  dVar7 = (double)(float)(dVar6 * dVar6);
  dVar10 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
  dVar8 = (double)(float)(dVar7 * dVar10);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar7 * dVar8) * dVar12
                                                            + (double)(float)(dVar8 * dVar13 +
                                                                             (double)(float)(dVar10 
                                                  * dVar14 +
                                                  (double)(float)((double)(float)(dVar7 * dVar6) *
                                                                  dVar11 + dVar6)))) * param_3) *
                            dVar9));
  dVar7 = (double)(float)(param_2 + dVar17);
  dVar17 = (double)(float)(dVar16 - dVar7);
  if (dVar7 - (double)(float)(dVar16 - dVar7) < 0.0) {
    dVar17 = dVar7;
  }
  dVar6 = (double)(float)(dVar15 - dVar7);
  if ((double)(float)(dVar15 - dVar7) - dVar17 < 0.0) {
    dVar6 = dVar17;
  }
  dVar17 = (double)(float)(dVar6 * dVar6);
  dVar8 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar6));
  dVar7 = (double)(float)(dVar17 * dVar8);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar17 * dVar7) *
                                                             dVar12 + (double)(float)(dVar7 * dVar13
                                                                                     + (double)(
                                                  float)(dVar8 * dVar14 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar6) * dVar11 + dVar6)))) * param_3) * dVar9));
  dVar17 = (double)(float)(dVar16 - param_2);
  if (param_2 - (double)(float)(dVar16 - param_2) < 0.0) {
    dVar17 = param_2;
  }
  dVar16 = (double)(float)(dVar15 - param_2);
  if ((double)(float)(dVar15 - param_2) - dVar17 < 0.0) {
    dVar16 = dVar17;
  }
  dVar15 = (double)(float)(dVar16 * dVar16);
  dVar7 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
  dVar17 = (double)(float)(dVar15 * dVar7);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar15 * dVar17) *
                                                             dVar12 + (double)(float)(dVar17 * 
                                                  dVar13 + (double)(float)(dVar7 * dVar14 +
                                                                          (double)(float)((double)(
                                                  float)(dVar15 * dVar16) * dVar11 + dVar16)))) *
                                            param_3) * dVar9));
  uVar5 = draw::GetEffectTex(DAT_00853b70 + 0x28);
  draw::DrawTexturedQuadHud(local_c0,local_90,local_a0,uVar5,1);
  return;
}



//==== 003e15f0  ns=mobyupdate_helpers  size=0x380
// sig: undefined M617_003e15f0(void)
// callers(0): 
// callees(2): 0006ecf8 draw::DrawTexturedQuadHud; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M617_003e15f0(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 in_r6;
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
  undefined1 local_d0 [32];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  
  dVar17 = -param_1;
  dVar16 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar14 = -3.141592502593994;
  dVar9 = -0.16666656732559204;
  dVar13 = 0.008333025500178337;
  fVar1 = (float)(dVar17 + 1.570796251296997);
  dVar12 = -0.0001980741071747616;
  dVar11 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar7 = 16.0;
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  dVar10 = (double)(fVar4 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  fastfunc::FastDoubleToInt((double)((float)(dVar10 * param_2) * 16.0));
  dVar6 = (double)(float)(dVar15 - dVar17);
  if (dVar17 - (double)(float)(dVar15 - dVar17) < 0.0) {
    dVar6 = dVar17;
  }
  dVar5 = (double)(float)(dVar14 - dVar17);
  if ((double)(float)(dVar14 - dVar17) - dVar6 < 0.0) {
    dVar5 = dVar6;
  }
  dVar17 = (double)(float)(dVar5 * dVar5);
  dVar8 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar5));
  dVar6 = (double)(float)(dVar17 * dVar8);
  dVar17 = (double)(float)((double)(float)(dVar17 * dVar6) * dVar11 +
                          (double)(float)(dVar6 * dVar12 +
                                         (double)(float)(dVar8 * dVar13 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar5) * dVar9 + dVar5))));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_2) * dVar7));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar10 * param_3) * dVar7));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_3) * dVar7));
  dVar17 = (double)(float)(param_1 + dVar16);
  dVar16 = (double)(float)(dVar15 - dVar17);
  if (dVar17 - (double)(float)(dVar15 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar6 = (double)(float)(dVar14 - dVar17);
  if ((double)(float)(dVar14 - dVar17) - dVar16 < 0.0) {
    dVar6 = dVar16;
  }
  dVar16 = (double)(float)(dVar6 * dVar6);
  dVar10 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar6));
  dVar17 = (double)(float)(dVar16 * dVar10);
  dVar17 = (double)(float)((double)(float)(dVar16 * dVar17) * dVar11 +
                          (double)(float)(dVar17 * dVar12 +
                                         (double)(float)(dVar10 * dVar13 +
                                                        (double)(float)((double)(float)(dVar16 * 
                                                  dVar6) * dVar9 + dVar6))));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_2) * dVar7));
  dVar16 = (double)(float)(dVar15 - param_1);
  if (param_1 - (double)(float)(dVar15 - param_1) < 0.0) {
    dVar16 = param_1;
  }
  dVar15 = (double)(float)(dVar14 - param_1);
  if ((double)(float)(dVar14 - param_1) - dVar16 < 0.0) {
    dVar15 = dVar16;
  }
  dVar14 = (double)(float)(dVar15 * dVar15);
  dVar6 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar15));
  dVar16 = (double)(float)(dVar14 * dVar6);
  dVar9 = (double)(float)((double)(float)(dVar14 * dVar16) * dVar11 +
                         (double)(float)(dVar16 * dVar12 +
                                        (double)(float)(dVar6 * dVar13 +
                                                       (double)(float)((double)(float)(dVar14 * 
                                                  dVar15) * dVar9 + dVar15))));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar9 * param_2) * dVar7));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_3) * dVar7));
  fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar9 * param_3) * dVar7));
  draw::DrawTexturedQuadHud(local_d0,local_a0,local_b0,in_r6,1);
  return;
}



//==== 003e19a0  ns=mobyupdate_helpers  size=0x670
// sig: undefined M617_003e19a0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M617_003e19a0(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
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
  undefined1 local_100 [32];
  undefined1 local_e0 [16];
  undefined1 local_d0 [32];
  
  fastfunc::FastDoubleToInt((double)((float)(longlong)worldUpdateTime * DAT_00853bb4));
  uVar6 = DAT_00853ca4;
  uVar5 = DAT_00853ca0;
  dVar22 = 0.0;
  dVar21 = 1.0;
  mobyutil::MB_randRangeFloat(0.0,1.0);
  fastfunc::FastLerpColor(uVar5,uVar6);
  uVar7 = draw::GetEffectTex(DAT_00853bb8);
  iVar8 = mobyutil::MB_randInt(5);
  iVar9 = mobyutil::MB_randInt(5);
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar11 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar11 = param_1;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar11 < 0.0) {
    dVar10 = dVar11;
  }
  dVar11 = (double)(float)(dVar10 * dVar10);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
  dVar13 = (double)(float)(dVar11 * dVar12);
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar1 = fVar4 * fVar2;
  dVar23 = (double)((float)(dVar11 * dVar13) * 2.601887e-06 +
                   (float)(dVar13 * -0.0001980741071747616 +
                          (double)(float)(dVar12 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar11 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar12 = (double)(float)(param_2 + (double)(longlong)(iVar8 + 0xf));
  dVar10 = (double)(longlong)((iVar8 - iVar9) + 10);
  dVar20 = (double)(fVar4 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  dVar11 = (double)(float)(dVar23 * dVar10);
  dVar19 = (double)(float)(dVar20 * param_2 - (double)(float)(dVar23 * 5.0));
  dVar10 = (double)(float)(dVar20 * dVar10);
  dVar17 = (double)(float)(dVar20 * dVar12 - dVar11);
  dVar16 = (double)(float)(dVar20 * dVar12 + dVar11);
  dVar18 = (double)(float)(dVar20 * param_2 + (double)(float)(dVar23 * 5.0));
  dVar15 = (double)(float)(dVar23 * param_2 + (double)(float)(dVar20 * 5.0));
  dVar14 = (double)(float)(dVar23 * param_2 - (double)(float)(dVar20 * 5.0));
  dVar13 = (double)(float)(dVar23 * dVar12 + dVar10);
  dVar11 = (double)(float)(dVar23 * dVar12 - dVar10);
  fastfunc::FastDoubleToInt(dVar19);
  fastfunc::FastDoubleToInt(dVar15);
  fastfunc::FastDoubleToInt(dVar18);
  fastfunc::FastDoubleToInt(dVar14);
  fastfunc::FastDoubleToInt(dVar17);
  fastfunc::FastDoubleToInt(dVar13);
  fastfunc::FastDoubleToInt(dVar16);
  fastfunc::FastDoubleToInt(dVar11);
  draw::DrawTexturedQuadHud(local_100,local_d0,local_e0,uVar7,0);
  uVar6 = DAT_00853ca4;
  uVar5 = DAT_00853ca0;
  mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar21);
  fastfunc::FastLerpColor(uVar5,uVar6);
  iVar8 = mobyutil::MB_randInt(5);
  iVar9 = mobyutil::MB_randInt(5);
  dVar11 = (double)(float)(param_2 + (double)(longlong)(iVar8 + 5));
  dVar21 = (double)(longlong)(iVar8 + 5 + iVar9);
  dVar22 = (double)(float)(dVar20 * dVar21);
  dVar21 = (double)(float)(dVar23 * dVar21);
  dVar13 = (double)(float)(dVar23 * dVar11 + dVar22);
  dVar16 = (double)(float)(dVar23 * dVar11 - dVar22);
  dVar12 = (double)(float)(dVar20 * dVar11 - dVar21);
  dVar10 = (double)(float)(dVar20 * dVar11 + dVar21);
  fastfunc::FastDoubleToInt(dVar19,dVar11,dVar21,dVar22);
  fastfunc::FastDoubleToInt(dVar15);
  fastfunc::FastDoubleToInt(dVar18);
  fastfunc::FastDoubleToInt(dVar14);
  fastfunc::FastDoubleToInt(dVar12);
  fastfunc::FastDoubleToInt(dVar13);
  fastfunc::FastDoubleToInt(dVar10);
  fastfunc::FastDoubleToInt(dVar16);
  draw::DrawTexturedQuadHud(local_100,local_d0,local_e0,uVar7,0);
  return;
}



//==== 003e2010  ns=mobyupdate_helpers  size=0x14
// sig: undefined M617_003e2010(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M617_003e2010(void)

{
  DAT_00853d00 = 0x10000;
  return;
}



//==== 003e2030  ns=mobyupdate_unsorted  size=0x184
// sig: undefined UpdateMoby_617(MobyInstance * moby)
// callers(0): 
// callees(3): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502798 fastfunc::FastFMod

/* Moby 617 */

void mobyupdate_unsorted::UpdateMoby_617(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  Spline *pSVar11;
  int iVar12;
  int iVar13;
  MobyInstance *pMVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pMVar14 = MobyInstance;
  piVar8 = (int *)moby->pVar;
  iVar9 = piVar8[1];
  pSVar11 = Splines[piVar8[2]];
  pfVar10 = (float *)MobyInstance[*piVar8].pVar;
  dVar17 = (double)fastfunc::FastIntToDouble(pSVar11->cnt + -1);
  dVar19 = 1.0;
  dVar18 = (double)(float)((double)(1.0 - *pfVar10) * dVar17);
  dVar17 = (double)fastfunc::FastFMod(dVar18,0x3ff0000000000000);
  lVar15 = fastfunc::FastDoubleToInt(dVar18);
  lVar16 = lVar15;
  if (dVar17 != 0.0) {
    lVar16 = lVar15 + 1;
  }
  iVar12 = (int)(lVar16 << 4);
  fVar1 = (float)(dVar19 - dVar17);
  iVar13 = (int)(lVar15 << 4);
  fVar2 = *(float *)((int)&pSVar11->points[0].y + iVar12);
  fVar3 = *(float *)((int)&pSVar11->points[0].z + iVar12);
  fVar4 = *(float *)((int)&pSVar11->points[0].y + iVar13);
  fVar5 = *(float *)((int)&pSVar11->points[0].z + iVar13);
  fVar6 = *(float *)((int)&pSVar11->points[0].x + iVar13);
  fVar7 = *(float *)((int)&pSVar11->points[0].x + iVar12);
  (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar13);
  fVar6 = fVar6 * fVar1 + (float)((double)fVar7 * dVar17);
  (moby->pos).y = fVar4 * fVar1 + (float)((double)fVar2 * dVar17);
  (moby->pos).z = fVar5 * fVar1 + (float)((double)fVar3 * dVar17);
  (moby->pos).x = fVar6;
  pMVar14[iVar9].pos.x = fVar6;
  pMVar14[iVar9].pos.y = (moby->pos).y;
  pMVar14[iVar9].pos.z = (moby->pos).z;
  pMVar14[iVar9].pos.w = (moby->pos).w;
  return;
}



//==== 003e21b8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_618(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 618 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_618(MobyInstance *moby)

{
  return moby;
}



//==== 003e2218  ns=mobyupdate_unsorted  size=0x844
// sig: undefined UpdateMoby_621(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 621 */

void mobyupdate_unsorted::UpdateMoby_621(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  s8 sVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar21;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
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
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar20 = uVar16 - 0x170;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar16;
  puVar14[0x30] = in_LR;
  puVar14[0x29] = in_f27;
  puVar14[0x2a] = in_f28;
  puVar14[0x2b] = in_f29;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x28] = unaff_r31;
  puVar14[0x27] = unaff_r30;
  bVar5 = moby->state;
  piVar9 = (int *)moby->pVar;
  puVar14[0x26] = unaff_r29;
  puVar14[0x25] = unaff_r28;
  puVar14[0x24] = unaff_r27;
  fVar6 = animationSpeed;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      fVar6 = (moby->pos).z;
      moby->state = '\x01';
      (moby->pos).z = fVar6 + 0.4;
    }
    else {
      iVar21 = mobyutil::MB_damage(lVar17,0x330000,0);
      fVar6 = (moby->pos).y - g_heroPosition.y;
      fVar7 = (moby->pos).x - g_heroPosition.x;
      if (((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 2.0) && (g_heroState == GRINDRAIL_DAMAGE)) ||
         (DAT_00969f1c == moby)) {
        sound::PlayMobySound(0,0,moby);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar17,&DAT_00a15d30,
                   lVar17 + 0x10,1,0xffffffffffffffff,10,0x14,0x3c);
        mobyfunc::DeleteMoby(moby);
      }
      else if (iVar21 != 0) {
        sound::PlayMobySound(0,0,moby);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x4008000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar17,&DAT_00a15d30,lVar17 + 0x10,1,0xffffffffffffffff,10,
                   0x14,0x3c);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (bVar5 < 3) {
    dVar36 = 0.4000000059604645;
    iVar21 = piVar9[5];
    (moby->pos).z = (moby->pos).z - 0.4;
    if (iVar21 == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else if (*(int *)piVar9[4] == 0) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      dVar27 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).y,
                                  DAT_00853d30 * 0.017453292 * mobyutil::g_FrameTime);
      (moby->rotation).y = (float)dVar27;
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).x;
      fVar8 = fVar6 - g_heroPosition.y;
      fVar1 = fVar7 - g_heroPosition.x;
      if ((2.0 <= SQRT(fVar1 * fVar1 + fVar8 * fVar8)) || (g_heroState != GRINDRAIL_DAMAGE)) {
        piVar10 = (int *)piVar9[4];
        iVar21 = *piVar10;
        iVar25 = *piVar9 + iVar21 + (int)*(char *)(piVar9 + 1);
        iVar25 = iVar25 - (iVar25 / iVar21) * iVar21;
        fVar7 = (float)piVar10[iVar25 * 4 + 4] - fVar7;
        fVar6 = (float)piVar10[iVar25 * 4 + 5] - fVar6;
        fVar1 = ABS(fVar7);
        fVar8 = ABS(fVar6);
        *(float *)((int)puVar14 + 0xe4) = fVar7;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(float *)((int)puVar14 + 0xec) = fVar1 - fVar8;
        dVar27 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 0xe4));
        if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar7 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar2 = ABS(*(float *)(puVar14 + 0x1d));
        if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
          fVar2 = fVar1;
        }
        dVar29 = dVar27;
        if (0.0 < fVar6) {
          lVar19 = uVar16 - 0x160;
          lVar22 = uVar16 - 0x80;
          lVar24 = uVar16 - 0x70;
          lVar26 = 2;
          fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0xfc) = fVar6;
          *(float *)((int)puVar14 + 0xf4) = fVar6;
          *(float *)(puVar14 + 0x1f) = fVar6;
          *(float *)(puVar14 + 0x1e) = fVar6;
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar1;
          *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar6;
          *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar6 * fVar1;
          do {
            *(float *)((int)lVar19 + 0xf0) = *(float *)((int)lVar19 + 0xe0) * fVar6 * fVar6;
            iVar21 = (int)lVar22;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar16 - 0x80;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar6 = *pfVar23;
            fVar1 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0xf0) = *(float *)((int)lVar19 + 0xf0) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar21 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xf0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar8 + fVar7);
        }
        dVar35 = 0.10000000149011612;
        mobyutil::OrganicDeltAngSpeed
                  (dVar29,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                   &DAT_003e21c0,piVar9 + 0xd);
        iVar21 = piVar9[4] + iVar25 * 0x10;
        fVar6 = *(float *)(iVar21 + 0x10);
        fVar7 = *(float *)(iVar21 + 0x14);
        fVar8 = *(float *)(iVar21 + 0x18);
        if (iVar25 == 0) {
          dVar30 = (double)(moby->pos).y;
          dVar29 = (double)(moby->pos).x;
          if (SQRT((float)(dVar29 - (double)g_heroPosition.x) *
                   (float)(dVar29 - (double)g_heroPosition.x) +
                   (float)(dVar30 - (double)g_heroPosition.y) *
                   (float)(dVar30 - (double)g_heroPosition.y)) < 24.0) {
            *(undefined4 *)((int)puVar14 + 0xdc) = 0;
            *(undefined4 *)(puVar14 + 0x1b) = 0;
            *(undefined4 *)((int)puVar14 + 0xd4) = 0;
            *(undefined4 *)(puVar14 + 0x1a) = 0;
            puVar14[0x12] = 0xffffffffffffffff;
            puVar14[0x14] = 1;
            puVar14[0x15] = 1;
            puVar14[0x16] = 0xffffffffffffffff;
            puVar14[0x17] = 0;
            mobyutil::MB_genericExplosion
                      (dVar27,dVar27,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,lVar17,uVar16 - 0xa0,lVar17 + 0x10,0,1,
                       10,0x14,0x3c);
            sound::PlayMobySound(0,0,moby);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          fVar1 = (moby->pos).z;
          moby->state = '\x03';
        }
        else {
          dVar30 = (double)(moby->pos).y;
          dVar28 = (double)(moby->pos).x;
          fVar2 = (float)((double)fVar7 - dVar30);
          fVar3 = (float)((double)fVar6 - dVar28);
          dVar33 = (double)(moby->pos).z;
          fVar4 = (float)((double)fVar8 - dVar33);
          dVar34 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          fVar1 = (float)((double)(mobyutil::g_FrameTime * 3.0) / dVar34);
          dVar29 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          dVar31 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar31 = (double)(fVar2 * fVar1);
          }
          dVar32 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar32 = (double)(fVar3 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar31 = (double)(fVar2 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar32 = (double)(fVar3 * fVar1);
          }
          fVar1 = (float)(dVar33 + dVar29);
          fVar2 = (float)(dVar30 + dVar31);
          dVar30 = (double)fVar2;
          fVar3 = (float)(dVar28 + dVar32);
          dVar29 = (double)fVar3;
          (moby->pos).z = fVar1;
          (moby->pos).y = fVar2;
          (moby->pos).x = fVar3;
        }
        dVar27 = (double)fVar1;
        fVar7 = (float)(dVar30 - (double)fVar7);
        fVar6 = (float)(dVar29 - (double)fVar6);
        fVar8 = (float)(dVar27 - (double)fVar8);
        if ((double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) < dVar35) {
          *piVar9 = iVar25;
          dVar27 = (double)(moby->pos).z;
        }
        (moby->pos).z = (float)(dVar27 + dVar36);
      }
      else {
        *(undefined4 *)((int)puVar14 + 0xcc) = 0;
        *(undefined4 *)(puVar14 + 0x19) = 0;
        *(undefined4 *)((int)puVar14 + 0xc4) = 0;
        *(undefined4 *)(puVar14 + 0x18) = 0;
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4008000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar17,uVar16 - 0xb0,lVar17 + 0x10,&DAT_003e21c0,0,10,0x14,
                   0x3c);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (bVar5 < 4) {
    auVar37 = ZEXT416(0xfffffff8);
    auVar38 = loadVectorLeftIndexed(0x23,lVar17);
    auVar37 = vectorShiftRightWord
                        (auVar38,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
    auVar37 = vectorConvertFromUnsignedFixedPointWord(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xe0,lVar20);
    *(undefined4 *)(puVar14 + 0x1c) = uVar13;
    mobyutil::Delt(0.0,128.0 / (float)(longlong)(fVar6 * 30.5),(float *)(puVar14 + 0x1c));
    auVar37 = loadVectorLeftIndexed(0xe0,lVar20);
    auVar37 = vectorConvertToUnsignedFixedPointWordSaturate(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xff;
    puVar14[0x22] = (longlong)*(float *)(puVar14 + 0x1c);
    uVar11 = *(uint *)((int)puVar14 + 0x114);
    sVar12 = storeVectorElementByteIndexed
                       (auVar37 | auVar37 << 8 | auVar37 << 0x10 | auVar37 << 0x18 | auVar37 << 0x20
                        | auVar37 << 0x28 | auVar37 << 0x30 | auVar37 << 0x38 | auVar37 << 0x40 |
                        auVar37 << 0x48 | auVar37 << 0x50 | auVar37 << 0x58 | auVar37 << 0x60 |
                        auVar37 << 0x68 | auVar37 << 0x70 | auVar37 << 0x78,0x23,lVar17);
    moby->alpha = sVar12;
    if ((uVar11 & 0xff) == 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003e2a60  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M622_003e2a60(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M622_003e2a60(f32 *param_1,int param_2,longlong param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  MobyInstance *pMVar5;
  undefined8 uVar4;
  
  pMVar5 = mobyfunc::CreateMoby(THRUSTERPACK|BOLT);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0x7e;
    pMVar5->enabled = '\x01';
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    pMVar5->state = '\x02';
    pMVar5->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar5->light = (int)uVar4;
    (pMVar5->pos).x = *param_1;
    (pMVar5->pos).y = param_1[1];
    fVar1 = param_1[2];
    (pMVar5->pos).z = fVar1;
    (pMVar5->pos).w = param_1[3];
    puVar2 = (undefined4 *)pMVar5->pVar;
    (pMVar5->pos).z = fVar1 + 0.4;
    puVar2[0xc] = param_2;
    puVar2[5] = (int)param_3;
    *puVar2 = 0;
    uVar3 = *(undefined4 *)((int)Splines + (int)(param_3 << 2));
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[4] = uVar3;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 003e2b5c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M622_003e2b5c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M622_003e2b5c(void)

{
  DAT_00853d80 = 0x10000;
  return;
}



//==== 003e2b88  ns=mobyupdate_helpers  size=0x204
// sig: undefined M622_003e2b88(void)
// callers(1): 003e2da8 mobyupdate_unsorted::UpdateMoby_622
// callees(2): 00175644 walk::walk_SetupTwistVals; 00175688 walk::walk_init2LegAnim

void mobyupdate_helpers::M622_003e2b88(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  
  pvVar1 = param_1->pVar;
  *(short **)((int)pvVar1 + 0x80) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x84) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x88) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x8c) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x90) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x94) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x98) = param_1->pClass->seqs->trigs;
  *(undefined4 *)((int)pvVar1 + 0x9c) = *(undefined4 *)((int)param_1->pClass[1].packets + 0x14);
  *(short **)((int)pvVar1 + 0xa0) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xa4) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xa8) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xac) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xb0) = param_1->pClass->seqs->trigs;
  walk::walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x10));
  fVar2 = DAT_0071f418;
  *(float *)((int)pvVar1 + 0xec) = DAT_0071f418 * 9.8;
  *(float *)((int)pvVar1 + 0xdc) = fVar2 * 0.7853982;
  *(float *)((int)pvVar1 + 0xe0) = fVar2 * 6.2831855;
  *(float *)((int)pvVar1 + 0xe4) = mobyutil::g_FrameTime * 1.0471976;
  *(undefined1 *)((int)pvVar1 + 0xc0) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc1) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc2) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0xc3) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0xc4) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc5) = 0;
  *(undefined1 *)((int)pvVar1 + 0x100) = 3;
  *(undefined1 *)((int)pvVar1 + 0x101) = 1;
  *(undefined1 *)((int)pvVar1 + 0x103) = 5;
  *(undefined1 *)((int)pvVar1 + 0x102) = 7;
  *(undefined1 *)((int)pvVar1 + 0x1b0) = 4;
  *(undefined1 *)((int)pvVar1 + 0x1b1) = 2;
  *(undefined1 *)((int)pvVar1 + 0x1b3) = 6;
  *(undefined1 *)((int)pvVar1 + 0x1b2) = 8;
  *(undefined4 *)((int)pvVar1 + 0xf0) = 0x3f000000;
  *(float *)((int)pvVar1 + 0xd4) = fVar2 * 6.0;
  walk::walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x10));
  return;
}



//==== 003e2da8  ns=mobyupdate_unsorted  size=0x2f8
// sig: undefined UpdateMoby_622(MobyInstance * moby)
// callers(0): 
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00136890 path::PathFollowUpdate; 003e2b88 mobyupdate_helpers::M622_003e2b88; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 00656de4: 'speed %fm/s\n' | 00656df4: 'Moby %d (class 622) has no path.\n' | 00656e1c: 'node %d speed %fm/s\n'

/* Moby 622 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_622(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pfVar2 = (float *)moby->pVar;
  uVar7 = ZEXT48(pfVar2);
  if (moby->state == 0) {
    if ((int)pfVar2[0x9d] < 0) {
      uVar6 = (int)moby - (int)MobyInstance;
      libc::printf("Moby %d (class 622) has no path.\n",
                   ((int)uVar6 >> 8) + (uint)((int)uVar6 < 0 && (uVar6 & 0xff) != 0));
      moby->state = '\x02';
      moby = (MobyInstance *)0x2;
    }
    else {
      *(undefined1 *)((int)pfVar2 + 0x265) = 0;
      pfVar2[0x9a] = 0.0;
      pfVar2[0x9c] = (float)Splines[(int)pfVar2[0x9d]];
      moby->state = '\x01';
      mobyupdate_helpers::M622_003e2b88(moby);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(in_LR,0x3e2d8c);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      iVar5 = (int)pfVar2[0x9c] + (int)pfVar2[0x98] * 0x10;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,4,uVar7);
      *(undefined4 *)((uint)(pfVar2 + 1) & 0xfffffffc) = uVar4;
      if (*(int *)(iVar5 + 0x1c) < 1) {
        dVar8 = (double)mobyutil::MB_randRangeFloat(0.25,1.5);
        fVar1 = (float)((double)((*(float *)((int)pfVar2[0x27] + 4) /
                                 (*(float *)((int)pfVar2[0x27] + 0x10) * 2.0)) * DAT_0071f408) *
                       dVar8);
        *pfVar2 = fVar1;
        moby = (MobyInstance *)libc::printf("speed %fm/s\n",(double)(fVar1 * 60.0));
      }
      else {
        *pfVar2 = *(float *)(iVar5 + 0x1c) * mobyutil::g_FrameTime;
        moby = (MobyInstance *)&DAT_00720000;
      }
    }
  }
  else if (moby->state < 2) {
    pMVar3 = (MobyInstance *)pfVar2[0x98];
    path::PathFollowUpdate(*pfVar2,moby,(PathFollower *)(pfVar2 + 0x98),pfVar2 + 4);
    if (((moby->updateId == '\0') && (iVar5 = fastfunc::FastDecTimerS32(uVar7 + 4), iVar5 != 0)) ||
       (moby = (MobyInstance *)pfVar2[0x98], moby != pMVar3)) {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(in_LR,0x3e2d8c);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,4,uVar7);
      *(undefined4 *)((uint)(pfVar2 + 1) & 0xfffffffc) = uVar4;
      iVar5 = mobyutil::MB_randInt(4);
      if (iVar5 == 0) {
        fVar1 = 0.0;
      }
      else {
        iVar5 = (int)pfVar2[0x9c] + (int)pfVar2[0x98] * 0x10;
        fVar1 = *(float *)(iVar5 + 0x1c);
        if (*(int *)(iVar5 + 0x1c) < 1) {
          dVar8 = (double)mobyutil::MB_randRangeFloat(0.25,1.5);
          fVar1 = (*(float *)((int)pfVar2[0x27] + 4) / (*(float *)((int)pfVar2[0x27] + 0x10) * 2.0))
                  * DAT_0071f408;
        }
        else {
          dVar8 = (double)mobyutil::g_FrameTime;
        }
        fVar1 = (float)((double)fVar1 * dVar8);
      }
      *pfVar2 = fVar1;
      moby = (MobyInstance *)
             libc::printf("node %d speed %fm/s\n",pfVar2[0x98],(double)(fVar1 * 60.0));
    }
  }
  return moby;
}



//==== 003e30b0  ns=mobyupdate_helpers  size=0x29c
// sig: undefined M623_003e30b0(void)
// callers(1): 003e37b0 mobyupdate_helpers::M623_003e37b0
// callees(0): 

double mobyupdate_helpers::M623_003e30b0
                 (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
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
  
  dVar18 = (double)*param_4;
  dVar17 = (double)param_4[1];
  iVar9 = 0;
  piVar5 = *(int **)((int)Splines + (int)(param_2 << 2));
  bVar8 = false;
  dVar19 = 512.0;
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  if (0 < *piVar5 + -1) {
    iVar10 = 0;
    dVar12 = 0.0;
    do {
      if ((*(int *)((int)piVar5 + iVar10 + 0x1c) != 0) ||
         (*(int *)((int)piVar5 + iVar10 + 0x2c) != 0)) {
        dVar14 = (double)*(float *)((int)piVar5 + iVar10 + 0x14);
        dVar16 = (double)*(float *)((int)piVar5 + iVar10 + 0x10);
        fVar1 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x24) - dVar14);
        fVar2 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x20) - dVar16);
        dVar15 = (double)(float)(dVar18 - dVar16);
        dVar13 = (double)(float)(dVar17 - dVar14);
        fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
        dVar11 = dVar12;
        dVar21 = dVar12;
        if (SQRT(fVar7) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar7);
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          dVar21 = (double)(fVar6 * fVar2);
          dVar11 = (double)(fVar6 * fVar1);
        }
        dVar20 = ABS((double)(float)(dVar13 * dVar21 - (double)(float)(dVar15 * dVar11)));
        if (dVar20 - dVar19 < 0.0) {
          dVar19 = dVar20;
        }
        if (dVar20 <= param_1) {
          fVar1 = (float)(dVar15 * dVar21 + (double)(float)(dVar13 * dVar11));
          if ((SQRT(fVar7) < fVar1) || (fVar1 < 0.0)) {
            dVar11 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar13 * dVar13)));
            if (dVar11 < param_1) {
              bVar8 = true;
              dVar18 = (double)(float)(dVar13 * (double)(float)(param_1 / dVar11));
              dVar21 = (double)(float)(dVar15 * (double)(float)(param_1 / dVar11));
              dVar17 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar17 = dVar18;
              }
              dVar13 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar13 = dVar21;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar17 = dVar18;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar13 = dVar21;
              }
              dVar17 = (double)(float)(dVar17 + dVar14);
              dVar18 = (double)(float)(dVar13 + dVar16);
            }
          }
          else {
            fVar2 = SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar11 * dVar11)));
            bVar8 = true;
            dVar18 = (double)(float)((double)(fVar1 / fVar2) * dVar11);
            dVar11 = (double)(float)((double)(fVar1 / fVar2) * dVar21);
            dVar17 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar17 = dVar18;
            }
            dVar21 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar21 = dVar11;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar17 = dVar18;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar21 = dVar11;
            }
            fVar1 = (float)(dVar13 - dVar17);
            fVar2 = (float)(dVar15 - dVar21);
            dVar15 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            dVar11 = (double)((float)(param_1 / dVar15) * fVar1);
            dVar13 = (double)((float)(param_1 / dVar15) * fVar2);
            dVar18 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar18 = dVar11;
            }
            dVar20 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar20 = dVar13;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar18 = dVar11;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar20 = dVar13;
            }
            dVar17 = (double)(float)((double)(float)(dVar17 + dVar18) + dVar14);
            dVar18 = (double)(float)((double)(float)(dVar21 + dVar20) + dVar16);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < *piVar5 + -1);
    if (bVar8) {
      *param_5 = (float)dVar18;
      param_5[1] = (float)dVar17;
      param_5[2] = fVar3;
      param_5[3] = fVar4;
    }
  }
  return dVar19;
}



//==== 003e3378  ns=mobyupdate_helpers  size=0x3ec
// sig: undefined M623_003e3378(void)
// callers(1): 003e37b0 mobyupdate_helpers::M623_003e37b0
// callees(2): 00113fa0 mobyutil::MB_LineCrossesSpline; 00502578 fastfunc::FastWrapRot

ulonglong mobyupdate_helpers::M623_003e3378(double param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x1c] = in_f26;
  puVar8[0x1d] = in_f27;
  puVar8[0x1e] = in_f28;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  fVar4 = *param_3 - *(float *)(param_2 + 0x10);
  fVar1 = param_3[1] - *(float *)(param_2 + 0x14);
  puVar8[0x1a] = unaff_r30;
  puVar8[0x1b] = unaff_r31;
  fVar2 = ABS(fVar4);
  fVar5 = ABS(fVar1);
  *(float *)(puVar8 + 0x12) = fVar4;
  puVar8[0x19] = unaff_r29;
  *(float *)((int)puVar8 + 0x94) = fVar1;
  iVar7 = *(int *)(param_2 + 0x78);
  *(float *)(puVar8 + 0x13) = fVar2 - fVar5;
  dVar29 = 0.0;
  fVar4 = *(float *)(iVar7 + 0x294);
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x12));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)((int)puVar8 + 0x94));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  puVar8[0x18] = unaff_r28;
  dVar27 = dVar29;
  if (0.0 < fVar1) {
    lVar18 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x74;
    lVar15 = uVar12 - 100;
    lVar20 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x15) = fVar1;
    *(float *)(puVar8 + 0x14) = fVar1;
    *(float *)((int)puVar8 + 0xa4) = fVar1;
    *(float *)((int)puVar8 + 0x9c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar2;
    *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar1;
    *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar1 * fVar1;
      iVar9 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar12 - 0x74;
    pfVar19 = (float *)&DAT_007358e0;
    lVar20 = 4;
    lVar15 = lVar18;
    lVar17 = lVar13;
    do {
      fVar1 = *pfVar19;
      fVar2 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar15 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar9 + 0x9c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
  }
  dVar21 = (double)fastfunc::FastWrapRot((float)dVar27,fVar4 * 1.5);
  fVar4 = (float)(dVar21 + 1.570796251296997);
  dVar23 = (double)*(float *)(param_2 + 0x14);
  fVar1 = (float)((double)param_3[1] - dVar23);
  dVar24 = (double)*(float *)(param_2 + 0x10);
  fVar5 = (float)((double)*param_3 - dVar24);
  fVar6 = *(float *)(param_2 + 0x18);
  dVar26 = (double)fVar6;
  fVar2 = (float)((double)param_3[2] - dVar26);
  dVar27 = (double)(float)(3.141592502593994 - dVar21);
  if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
    dVar27 = dVar21;
  }
  fVar3 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar3 = fVar4;
  }
  dVar25 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1);
  dVar22 = (double)(float)(-3.141592502593994 - dVar21);
  if ((double)(float)(-3.141592502593994 - dVar21) - dVar27 < 0.0) {
    dVar22 = dVar27;
  }
  fVar1 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  dVar21 = (double)(float)(dVar22 * dVar22);
  fVar11 = fVar1 * fVar1;
  dVar28 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
  fVar2 = fVar11 * fVar11 * fVar1;
  dVar27 = (double)(float)(dVar21 * dVar28);
  fVar3 = fVar11 * fVar2;
  fVar5 = (float)(dVar26 - (double)param_3[2]);
  fVar4 = (float)((double)((float)(dVar21 * dVar27) * 2.601887e-06 +
                          (float)(dVar27 * -0.0001980741071747616 +
                                 (double)(float)(dVar28 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar21 * dVar22) *
                                                                -0.16666656732559204 + dVar22)))) *
                  dVar25 + dVar23);
  fVar1 = (float)((double)(fVar11 * fVar3 * 2.601887e-06 +
                          fVar3 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar11 * fVar1 * -0.16666657 + fVar1) * dVar25 +
                 dVar24);
  fVar2 = (float)((double)fVar4 - (double)param_3[1]);
  fVar3 = (float)((double)fVar1 - (double)*param_3);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0x7c);
  uVar14 = *(undefined4 *)(iVar7 + 0x2c0);
  dVar21 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar4 = (float)(param_1 / dVar21);
  dVar27 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar27 = (double)(fVar5 * fVar4);
  }
  dVar22 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar22 = (double)(fVar2 * fVar4);
  }
  dVar25 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar25 = (double)(fVar3 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar27 = (double)(fVar5 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar22 = (double)(fVar2 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar25 = (double)(fVar3 * fVar4);
  }
  *(float *)(puVar8 + 0x11) = (float)(dVar27 + dVar26);
  *(float *)((int)puVar8 + 0x84) = (float)(dVar22 + dVar23);
  *(float *)(puVar8 + 0x10) = (float)(dVar25 + dVar24);
  uVar14 = mobyutil::MB_LineCrossesSpline(uVar14,uVar12 - 0xa0,uVar12 - 0x90);
  return (ulonglong)(LZCOUNT(uVar14) << 0x20) >> 0x25;
}



//==== 003e37b0  ns=mobyupdate_helpers  size=0x8e0
// sig: undefined M623_003e37b0(void)
// callers(1): 003e5228 mobyupdate_unsorted::UpdateMoby_623
// callees(8): 00101058 mobyutil::MB_UpdateNavMove; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 00114d58 mobyutil::MB_SplineFindRouteNode; 003e30b0 mobyupdate_helpers::M623_003e30b0; 003e3378 mobyupdate_helpers::M623_003e3378; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M623_003e37b0(double param_1,MobyInstance *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x2e] = in_LR;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x27] = unaff_r31;
  puVar8[0x26] = unaff_r30;
  pvVar6 = param_2->pVar;
  if (((((int)param_2 >> 8 ^ worldUpdateTime) & 3) == 0) &&
     (iVar16 = mobyutil::MB_SplineFindRouteNode
                         (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                          (longlong)*(int *)((int)pvVar6 + 0x2c4),ZEXT48(&DAT_00850000),
                          &param_2->pos,param_3,(int)pvVar6 + 0x280), iVar16 == 0)) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  fVar1 = *(float *)((int)pvVar6 + 0x280);
  *(float *)(puVar8 + 0x12) = fVar1;
  fVar2 = *(float *)((int)pvVar6 + 0x284);
  fVar3 = (param_2->pos).y;
  fVar4 = (param_2->pos).x;
  *(float *)((int)puVar8 + 0x94) = fVar2;
  *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)((int)pvVar6 + 0x288);
  *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)pvVar6 + 0x28c);
  dVar26 = 0.7853981852531433;
  dVar27 = (double)SQRT((fVar4 - fVar1) * (fVar4 - fVar1) + (fVar3 - fVar2) * (fVar3 - fVar2));
  if ((5.0 < dVar27) && (dVar25 = 0.0, param_1 != 0.0)) {
    iVar16 = M623_003e3378((double)(DAT_00853dbc * 0.4),param_2,uVar13 - 0xd0);
    fVar4 = (param_2->pos).x;
    fVar3 = (param_2->pos).y;
    fVar1 = *(float *)(puVar8 + 0x12);
    fVar2 = *(float *)((int)puVar8 + 0x94);
    if (iVar16 != 0) {
      dVar22 = ABS((double)(fVar1 - fVar4));
      dVar23 = ABS((double)(fVar2 - fVar3));
      *(float *)(puVar8 + 0x17) = fVar1 - fVar4;
      *(float *)((int)puVar8 + 0xbc) = fVar2 - fVar3;
      *(float *)(puVar8 + 0x18) = (float)(dVar22 - dVar23);
      uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0xbc) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0x17));
      if ((double)*(float *)(puVar8 + 0x18) - dVar25 < 0.0) {
        dVar24 = dVar23;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar8 + 0xbc));
      if ((double)*(float *)(puVar8 + 0x18) - dVar25 < 0.0) {
        dVar23 = dVar22;
      }
      fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (dVar25 < dVar24) {
        lVar14 = uVar13 - 0x150;
        lVar17 = uVar13 - 0x5c;
        lVar20 = uVar13 - 0x4c;
        lVar21 = 2;
        fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x22) = fVar3;
        *(float *)(puVar8 + 0x21) = fVar3;
        *(float *)((int)puVar8 + 0x10c) = fVar3;
        *(float *)((int)puVar8 + 0x104) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar4;
        *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar3;
        *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0xf4) * fVar3 * fVar3;
          iVar16 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar13 - 0x5c;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar20;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0x104) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar9 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0x104)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar2);
      }
      dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,(float)param_1);
      mobyutil::OrganicDeltAng
                ((float)dVar25,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 25.132742,&(param_2->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x290));
      goto LAB_003e3cc8;
    }
  }
  fVar10 = ABS(fVar1 - fVar4);
  fVar5 = ABS(fVar2 - fVar3);
  *(float *)((int)puVar8 + 0xac) = fVar1 - fVar4;
  *(float *)(puVar8 + 0x16) = fVar2 - fVar3;
  *(float *)((int)puVar8 + 0xb4) = fVar10 - fVar5;
  dVar25 = 0.0;
  uVar19 = (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar8 + 0xac));
  if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)(puVar8 + 0x16));
  if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
    fVar4 = fVar10;
  }
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x150;
    lVar20 = uVar13 - 0x6c;
    lVar17 = uVar13 - 0x7c;
    lVar21 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x1e) = fVar1;
    *(float *)(puVar8 + 0x1d) = fVar1;
    *(float *)((int)puVar8 + 0xec) = fVar1;
    *(float *)((int)puVar8 + 0xe4) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4;
    *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar1;
    *(float *)(puVar8 + 0x1e) = *(float *)(puVar8 + 0x1e) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xd4) * fVar1 * fVar1;
      iVar16 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar13 - 0x7c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar17 = lVar20;
    do {
      fVar1 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xe4) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar14 = lVar15;
    do {
      iVar16 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar9 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xe4)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar3 + fVar2);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar25,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 25.132742,&(param_2->rotation).z,0x3e3764,
             (float *)((int)pvVar6 + 0x290));
LAB_003e3cc8:
  fVar1 = *(float *)(puVar8 + 0x12) - (param_2->pos).x;
  fVar2 = *(float *)((int)puVar8 + 0x94) - (param_2->pos).y;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0x14) = fVar1;
  *(float *)((int)puVar8 + 0xa4) = fVar2;
  fVar1 = (param_2->rotation).z;
  *(float *)(puVar8 + 0x15) = fVar4 - fVar3;
  dVar25 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 0x14));
  if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar8 + 0xa4));
  if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar14 = uVar13 - 0x150;
    lVar20 = uVar13 - 0x8c;
    lVar17 = uVar13 - 0x9c;
    lVar21 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x1a) = fVar2;
    *(float *)(puVar8 + 0x19) = fVar2;
    *(float *)((int)puVar8 + 0xcc) = fVar2;
    *(float *)((int)puVar8 + 0xc4) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4;
    *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar2;
    *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar2 * fVar2;
      iVar16 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar13 - 0x9c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar17 = lVar20;
    do {
      fVar2 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar14 = 2;
    do {
      iVar16 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar9 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xc4)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar5 + fVar3);
  }
  dVar26 = (double)fastfunc::FastSubRots(fVar1,(float)dVar25);
  if ((1.5707963705062866 <= dVar26) || (dVar27 <= 3.0)) {
    mobyutil::Delt(mobyutil::g_FrameTime,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4U));
  }
  else {
    mobyutil::Delt(mobyutil::g_FrameTime * 6.0,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4U));
  }
  fVar1 = (param_2->rotation).z;
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
  dVar26 = 2.0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar1 * fVar1;
  fVar11 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar12 = fVar2 * fVar11;
  fVar10 = fVar3 * fVar4;
  *(float *)((int)puVar8 + 0x74) =
       (fVar2 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) * 2.0;
  *(float *)(puVar8 + 0xe) =
       (fVar3 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * 2.0;
  mobyutil::MB_UpdateNavMove
            (0x3ff0000000000000,param_2,(MobyInstance *)((int)pvVar6 + 0xd0),puVar8 + 0xe,
             puVar8 + 0x10);
  if ((*(int *)((int)pvVar6 + 0x2d4) == 0) &&
     (dVar27 = (double)M623_003e30b0((double)(DAT_00853dbc * 0.4),
                                     *(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                                     &param_2->pos,&param_2->pos), dVar26 < dVar27)) {
    auVar28 = ZEXT416(0xffffffff);
    auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar28 = loadVectorLeftIndexed(0x48,0x3e3764);
    auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = vectorMultiplyAddFloatingPoint
                        (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                         auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x2d4,
                       ZEXT48(pvVar6));
    *(undefined4 *)((int)pvVar6 + 0x2d4U & 0xfffffffc) = uVar7;
  }
  return;
}



//==== 003e4098  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M623_003e4098(void)
// callers(1): 003e41c8 mobyupdate_helpers::M623_003e41c8
// callees(0): 

MobyInstance * mobyupdate_helpers::M623_003e4098(int param_1,longlong param_2)

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
      if ((((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pMVar7->state < 0x7f)) &&
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



//==== 003e41c8  ns=mobyupdate_helpers  size=0xfa8
// sig: undefined M623_003e41c8(void)
// callers(1): 003e5228 mobyupdate_unsorted::UpdateMoby_623
// callees(17): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 001167c8 mobyutil::MB_UpdateManipulatorRot; 003e4098 mobyupdate_helpers::M623_003e4098; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M623_003e41c8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  float fVar9;
  MobyInstance *pMVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  float *pfVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar17;
  longlong lVar18;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1a0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x36] = in_LR;
  puVar12[0x30] = in_f28;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x2f] = unaff_r31;
  puVar12[0x2d] = unaff_r29;
  puVar12[0x2e] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar12[0x2c] = unaff_r28;
  puVar12[0x2b] = unaff_r27;
  puVar12[0x2a] = unaff_r26;
  fastfunc::FastDecTimerS32(uVar27 + 0x2d4);
  dVar35 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x94) = 0;
  pfVar19 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
  if (pfVar19 != (float *)0x0) {
    fVar1 = (param_1->pos).x;
    fVar2 = (param_1->pos).y;
    *(float *)(puVar12 + 0xe) = fVar1;
    fVar3 = (param_1->pos).w;
    *(float *)((int)puVar12 + 0x74) = fVar2;
    *(f32 *)((int)puVar12 + 0x7c) = fVar3;
    fVar13 = (param_1->pos).z + 0.5;
    *(float *)(puVar12 + 0xf) = fVar13;
    fVar6 = DAT_00969db4;
    fVar5 = hero::g_heroCGPos;
    fVar9 = pfVar19[8];
    if (fVar9 == 0.0) {
      fVar5 = *pfVar19;
      *(float *)(puVar12 + 0x10) = fVar5;
      fVar6 = pfVar19[1];
      *(float *)((int)puVar12 + 0x84) = fVar6;
      fVar4 = pfVar19[2];
      *(float *)(puVar12 + 0x11) = fVar4;
      *(float *)((int)puVar12 + 0x8c) = pfVar19[3];
    }
    else if (*(short *)((int)fVar9 + 0xa6) == 0x47) {
      *(float *)(puVar12 + 0x10) = hero::g_heroCGPos;
      fVar4 = DAT_00969db8;
      *(float *)((int)puVar12 + 0x84) = fVar6;
      uVar21 = DAT_00969dbc;
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = uVar21;
    }
    else if (((*(int *)((int)fVar9 + 0x24) == 0) ||
             (*(short *)(*(int *)((int)fVar9 + 0x24) + 0x46) != 5)) &&
            (*(short *)((int)fVar9 + 0xa6) != 0xba)) {
      fVar5 = *(float *)((int)fVar9 + 0x10);
      *(float *)(puVar12 + 0x10) = fVar5;
      fVar6 = *(float *)((int)fVar9 + 0x14);
      *(float *)((int)puVar12 + 0x84) = fVar6;
      fVar4 = *(float *)((int)fVar9 + 0x18);
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)fVar9 + 0x1c);
    }
    else {
      *(float *)(puVar12 + 0x10) = fVar1;
      *(float *)((int)puVar12 + 0x84) = fVar2;
      *(float *)(puVar12 + 0x11) = fVar13;
      *(f32 *)((int)puVar12 + 0x8c) = fVar3;
      fVar5 = fVar1;
      fVar6 = fVar2;
      fVar4 = fVar13;
    }
    if ((SQRT((fVar13 - fVar4) * (fVar13 - fVar4) +
              (fVar1 - fVar5) * (fVar1 - fVar5) + (fVar2 - fVar6) * (fVar2 - fVar6)) < 24.0) &&
       (iVar20 = collproc::CollLine(uVar16 - 0x130,uVar16 - 0x120,2,param_1,0), iVar20 != 0)) {
      pfVar19 = (float *)0x0;
    }
  }
  iVar20 = mobyutil::MB_HandleDamage
                     (param_1,pfVar19,uVar27 + 0x20,0,puVar12 + 0x12,(int)puVar12 + 0x94,0,4);
  if ((*(int *)(puVar12 + 0x12) != 1) && (param_1->state != '\x0e')) {
    fVar1 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar12 + 0x94);
    *(float *)((int)pvVar8 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar35) {
      iVar20 = 1;
    }
    uVar21 = fastfunc::FastDoubleToInt((double)(DAT_00853dbc * 409.6));
    *(undefined4 *)((int)pvVar8 + 0x90) = uVar21;
    fVar1 = DAT_00853dbc * 0.4;
    *(undefined4 *)((int)pvVar8 + 0x94) = 9;
    *(float *)((int)pvVar8 + 0x98) = fVar1;
    fVar2 = DAT_00853df0;
    fVar1 = DAT_0071f418;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar1;
    fVar1 = mobyutil::g_FrameTime;
    if (iVar20 < 3) {
      if ((-1 < iVar20) && (0 < iVar20)) {
        fVar1 = DAT_00853df4 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x80) = fVar1;
        fVar1 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = DAT_00853db4 * mobyutil::g_FrameTime;
        fVar2 = DAT_00853db8;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40b00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)((int)pfVar19[8] + 0x10);
        fVar2 = (param_1->pos).y - *(float *)((int)pfVar19[8] + 0x14);
        dVar31 = ABS((double)fVar1);
        dVar32 = ABS((double)fVar2);
        *(float *)(puVar12 + 0x17) = fVar1;
        *(float *)((int)puVar12 + 0xbc) = fVar2;
        *(float *)(puVar12 + 0x18) = (float)(dVar31 - dVar32);
        uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar12 + 0x17));
        if ((double)*(float *)(puVar12 + 0x18) - dVar35 < 0.0) {
          dVar29 = dVar32;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar32 = ABS((double)*(float *)((int)puVar12 + 0xbc));
        if ((double)*(float *)(puVar12 + 0x18) - dVar35 < 0.0) {
          dVar32 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar31 = dVar35;
        if (dVar35 < dVar29) {
          lVar17 = uVar16 - 400;
          lVar26 = uVar16 - 0x80;
          lVar23 = uVar16 - 0x90;
          lVar28 = 2;
          fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x11c) = fVar5;
          *(float *)((int)puVar12 + 0x114) = fVar5;
          *(float *)(puVar12 + 0x23) = fVar5;
          *(float *)(puVar12 + 0x22) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar6;
          *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar5;
          *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x110) = *(float *)((int)lVar17 + 0x100) * fVar5 * fVar5;
            iVar20 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x90;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar23 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x110) = *(float *)((int)lVar17 + 0x110) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar17 = lVar18;
          dVar29 = dVar35;
          do {
            iVar20 = (int)lVar17;
            iVar14 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x110)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)((int)puVar12 + 0x9c) = (float)dVar31;
        fVar1 = pfVar19[6];
        *(float *)(puVar12 + 6) = pfVar19[4];
        *(float *)(puVar12 + 7) = fVar1;
        fVar1 = pfVar19[7];
        *(float *)((int)puVar12 + 0x34) = pfVar19[5];
        *(float *)((int)puVar12 + 0x3c) = fVar1;
        mobyutil::MB_VecAtan2Angles
                  (puVar12[6],puVar12[7],uVar16 - 0x104,uVar27 + 0x88,uVar27 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar12 + 0x9c),param_1,uVar27 + 0x70);
        param_1->state = '\x0e';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        if (((pfVar19[8] == 0.0) || (iVar20 = *(int *)((int)pfVar19[8] + 0x24), iVar20 == 0)) ||
           (*(short *)(iVar20 + 0x46) != 5)) {
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0x800,0xffffffffffffffff);
        }
      }
    }
    else if (iVar20 < 0xb) {
      if (iVar20 < 9) {
        *(float *)((int)pvVar8 + 0x88) = DAT_00853dac * mobyutil::g_FrameTime;
        fVar2 = DAT_00853db0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)((int)pfVar19[8] + 0x10);
        fVar2 = (param_1->pos).y - *(float *)((int)pfVar19[8] + 0x14);
        dVar31 = ABS((double)fVar1);
        dVar32 = ABS((double)fVar2);
        *(float *)((int)puVar12 + 0xc4) = fVar1;
        *(float *)(puVar12 + 0x19) = fVar2;
        *(float *)((int)puVar12 + 0xcc) = (float)(dVar31 - dVar32);
        uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)((int)puVar12 + 0xc4));
        if ((double)*(float *)((int)puVar12 + 0xcc) - dVar35 < 0.0) {
          dVar29 = dVar32;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar32 = ABS((double)*(float *)(puVar12 + 0x19));
        if ((double)*(float *)((int)puVar12 + 0xcc) - dVar35 < 0.0) {
          dVar32 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar31 = dVar35;
        if (dVar35 < dVar29) {
          lVar17 = uVar16 - 400;
          lVar26 = uVar16 - 0x60;
          lVar23 = uVar16 - 0x70;
          lVar28 = 2;
          fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x13c) = fVar5;
          *(float *)((int)puVar12 + 0x134) = fVar5;
          *(float *)(puVar12 + 0x27) = fVar5;
          *(float *)(puVar12 + 0x26) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar6;
          *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar5;
          *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x130) = *(float *)((int)lVar17 + 0x120) * fVar5 * fVar5;
            iVar20 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x70;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar23 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x130) = *(float *)((int)lVar17 + 0x130) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar17 = lVar18;
          dVar29 = dVar35;
          do {
            iVar20 = (int)lVar17;
            iVar14 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x130)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)(puVar12 + 0x13) = (float)dVar31;
        fVar1 = pfVar19[6];
        *(float *)(puVar12 + 6) = pfVar19[4];
        *(float *)(puVar12 + 7) = fVar1;
        fVar1 = pfVar19[7];
        *(float *)((int)puVar12 + 0x34) = pfVar19[5];
        *(float *)((int)puVar12 + 0x3c) = fVar1;
        mobyutil::MB_VecAtan2Angles
                  (puVar12[6],puVar12[7],uVar16 - 0x108,uVar27 + 0x88,uVar27 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar12 + 0x13),param_1,uVar27 + 0x70);
        param_1->state = '\v';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar27 + 0x60);
  if (*(int *)((int)pvVar8 + 0x38) != 0) {
    dVar29 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x2b0) = uVar21;
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar27 + 0x2b0);
  if (*(int *)((int)pvVar8 + 0x2b0) == 0) {
    fVar1 = *(float *)((int)pvVar8 + 0x29c);
  }
  else {
    fVar1 = *(float *)((int)pvVar8 + 0x29c) + 20.0;
  }
  *(float *)((int)pvVar8 + 0x2a0) = fVar1;
  pSVar11 = Splines[*(int *)((int)pvVar8 + 0x2cc)];
  iVar20 = mobyutil::MB_getTargetInArea
                     (param_1,uVar27 + 0x120,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
  if ((iVar20 != 2) &&
     ((fVar1 = *(float *)((int)pvVar8 + 0x274) - *(float *)((int)pvVar8 + 0x124),
      fVar2 = *(float *)((int)pvVar8 + 0x270) - *(float *)((int)pvVar8 + 0x120),
      *(float *)((int)pvVar8 + 0x2a0) < SQRT(fVar2 * fVar2 + fVar1 * fVar1) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0x128)))))) {
    *(undefined4 *)((int)pvVar8 + 0x164) = 2;
  }
  if (((-1 < *(int *)((int)pvVar8 + 0x2c8)) &&
      (iVar20 = M623_003e4098(param_1,*(int *)((int)pvVar8 + 0x2c8)), iVar20 != 0)) &&
     ((*(int *)((int)pvVar8 + 0x164) == 2 ||
      (fVar1 = (param_1->pos).y, fVar2 = (param_1->pos).x, fVar5 = fVar1 - *(float *)(iVar20 + 0x14)
      , fVar1 = fVar1 - *(float *)(*(int *)((int)pvVar8 + 0x160) + 0x14),
      fVar6 = fVar2 - *(float *)(iVar20 + 0x10),
      fVar2 = fVar2 - *(float *)(*(int *)((int)pvVar8 + 0x160) + 0x10),
      SQRT(fVar6 * fVar6 + fVar5 * fVar5) < SQRT(fVar2 * fVar2 + fVar1 * fVar1))))) {
    *(int *)((int)pvVar8 + 0x160) = iVar20;
    *(undefined4 *)((int)pvVar8 + 0x164) = 1;
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x160) = g_heroMobyPtr;
  }
  dVar31 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar8 + 0x2d8),mobyutil::g_FrameTime * 9.424778);
  uVar15 = DAT_00853da8;
  uVar21 = DAT_00853da4;
  dVar29 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar29 = dVar31;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar29 < 0.0) {
    dVar32 = dVar29;
  }
  dVar29 = (double)(float)(dVar32 * dVar32);
  dVar34 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar32));
  dVar33 = (double)(float)(dVar29 * dVar34);
  *(float *)((int)pvVar8 + 0x2d8) = (float)dVar31;
  uVar22 = fastfunc::FastLerpColor
                     ((double)(((float)(dVar29 * dVar33) * 2.601887e-06 +
                                (float)(dVar33 * -0.0001980741071747616 +
                                       (double)(float)(dVar34 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar29 * 
                                                  dVar32) * -0.16666656732559204 + dVar32))) + 1.0)
                              * 0.5),uVar21,uVar15);
  param_1->field60_0x90 = uVar22;
  fVar1 = (param_1->rotation).z;
  if (((3 < param_1->state) && (param_1->state < 10)) &&
     (pMVar10 = *(MobyInstance **)((int)pvVar8 + 0x160), pMVar10 == g_heroMobyPtr)) {
    fVar5 = (pMVar10->pos).x - (param_1->pos).x;
    dVar33 = (double)fVar5;
    fVar2 = (pMVar10->pos).z;
    fVar6 = (pMVar10->pos).y - (param_1->pos).y;
    dVar32 = (double)fVar6;
    *(float *)((int)puVar12 + 0xac) = fVar5;
    *(float *)(puVar12 + 0x16) = fVar6;
    dVar31 = (double)(fVar2 - (param_1->pos).z);
    *(float *)((int)puVar12 + 0xb4) = (float)(ABS(dVar33) - ABS(dVar32));
    uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)((int)puVar12 + 0xac));
    if ((double)*(float *)((int)puVar12 + 0xb4) - dVar35 < 0.0) {
      dVar29 = ABS(dVar32);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    dVar34 = ABS((double)*(float *)(puVar12 + 0x16));
    if ((double)*(float *)((int)puVar12 + 0xb4) - dVar35 < 0.0) {
      dVar34 = ABS(dVar33);
    }
    fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    dVar30 = dVar35;
    if (dVar35 < dVar29) {
      lVar17 = uVar16 - 400;
      lVar26 = uVar16 - 0xa0;
      lVar23 = uVar16 - 0xb0;
      lVar28 = 2;
      fVar6 = (float)(dVar34 - dVar29) / (float)(dVar34 + dVar29);
      fVar9 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xfc) = fVar6;
      *(float *)((int)puVar12 + 0xf4) = fVar6;
      *(float *)(puVar12 + 0x1f) = fVar6;
      *(float *)(puVar12 + 0x1e) = fVar6;
      fVar6 = fVar9 * fVar9;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar9;
      *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar6;
      *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar6 * fVar9;
      do {
        *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xe0) * fVar6 * fVar6;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar26 = uVar16 - 0xb0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar6 = *pfVar19;
        fVar9 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xf0) * fVar6;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar9;
        lVar23 = lVar23 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      dVar29 = dVar35;
      do {
        iVar20 = (int)lVar17;
        iVar14 = (int)lVar26;
        lVar17 = lVar17 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xf0)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar30 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar5);
    }
    dVar34 = (double)fastfunc::FastDiffRots(dVar30,(double)fVar1);
    *(float *)((int)puVar12 + 0xa4) = (float)dVar31;
    fVar1 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar32 * dVar32)));
    dVar32 = ABS((double)fVar1);
    *(float *)(puVar12 + 0x14) = fVar1;
    *(float *)(puVar12 + 0x15) = (float)(dVar32 - ABS(dVar31));
    uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    MVar7 = param_1->modeBits;
    dVar29 = ABS((double)*(float *)(puVar12 + 0x14));
    if ((double)*(float *)(puVar12 + 0x15) - dVar35 < 0.0) {
      dVar29 = ABS(dVar31);
    }
    dVar31 = ABS((double)*(float *)((int)puVar12 + 0xa4));
    if ((double)*(float *)(puVar12 + 0x15) - dVar35 < 0.0) {
      dVar31 = dVar32;
    }
    fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    if (dVar35 < dVar29) {
      lVar17 = uVar16 - 400;
      lVar23 = uVar16 - 0xd0;
      lVar26 = uVar16 - 0xc0;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0xdc) = fVar5;
      *(float *)((int)puVar12 + 0xd4) = fVar5;
      *(float *)(puVar12 + 0x1b) = fVar5;
      *(float *)(puVar12 + 0x1a) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar6;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar5;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xc0) * fVar5 * fVar5;
        iVar20 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar26 = uVar16 - 0xd0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xd0) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar17 = 2;
      do {
        iVar20 = (int)lVar18;
        iVar14 = (int)lVar26;
        lVar18 = lVar18 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0xd0)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar35 = -dVar35;
    if ((MVar7 & MIRROR) != NONE) {
      dVar34 = -dVar34;
    }
    dVar29 = 1.5707963705062866;
    if ((dVar34 <= 1.5707963705062866) && (dVar29 = dVar34, dVar34 < -1.5707963705062866)) {
      dVar29 = -1.5707963705062866;
    }
    dVar31 = 0.5235987901687622;
    if ((dVar35 <= 0.5235987901687622) && (dVar31 = dVar35, dVar35 < -0.5235987901687622)) {
      dVar31 = -0.5235987901687622;
    }
    *(float *)((int)pvVar8 + 0x1d8) = (float)(dVar29 * 0.699999988079071);
    *(float *)((int)pvVar8 + 0x1d4) = (float)dVar31;
    *(float *)((int)pvVar8 + 600) = (float)(dVar29 * 0.30000001192092896);
  }
  dVar29 = 0.03999999910593033;
  dVar35 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),param_1,uVar27 + 0x170,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar29),
             (double)(float)((double)DAT_0071f40c * dVar35),param_1,uVar27 + 0x1f0,2);
  return;
}



//==== 003e5228  ns=mobyupdate_unsorted  size=0x1e88
// sig: undefined UpdateMoby_623(MobyInstance * moby)
// callers(0): 
// callees(31): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fea60 mobyutil::MB_randSphere; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 0011440c mobyutil::MB_SplineMarkCrossings; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00114d58 mobyutil::MB_SplineFindRouteNode; 00119ac0 mobyutil::MB_SetScaleCheat; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001206e8 partupd::SpawnPart_2; 003e37b0 mobyupdate_helpers::M623_003e37b0; 003e41c8 mobyupdate_helpers::M623_003e41c8; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 623 */

void mobyupdate_unsorted::UpdateMoby_623(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  MobyInstance *victim;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined1 uVar22;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar14;
  short sVar21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar20;
  MobyModeBit MVar23;
  MobyClass *unused;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auStack_150 [16];
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 auStack_110 [16];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  f32 local_90;
  f32 local_8c;
  float local_88;
  f32 local_84;
  undefined1 auStack_80 [16];
  longlong local_70;
  
  lVar13 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  mobyutil::MB_SetScaleCheat(0x4004000000000000,uVar25 + 0x170);
  if ((g_gameMode == GAME_MODE_SCENE) && ((moby->modeBits & DISABLED) == NONE)) {
    MVar23 = moby->modeBits;
    *(undefined4 *)((int)pvVar6 + 0x2dc) = 1;
    moby->modeBits = MVar23 | (UNK_40|DISABLED);
  }
  else if ((*(int *)((int)pvVar6 + 0x2dc) != 0) && (g_gameMode == GAME_MODE_NORMAL)) {
    MVar23 = moby->modeBits;
    *(undefined4 *)((int)pvVar6 + 0x2dc) = 0;
    moby->modeBits =
         MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  }
  if ((moby->enabled != '\0') &&
     (fVar36 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar4 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar36 * fVar36) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  mobyupdate_helpers::M623_003e41c8(lVar13);
  unused = moby->pClass;
  victim = *(MobyInstance **)((int)pvVar6 + 0x160);
  bVar1 = moby->state;
  moby->scale = unused->gScale * DAT_00853dbc;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      fVar36 = mobyutil::OrganicDeltAng
                         ((float)dVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar6 + 0x290));
      dVar27 = (double)fVar36;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x02')) {
        local_70 = (longlong)(int)(animationSpeed * 5.5);
        dVar27 = (double)mobyutil::MB_SetAnimation(lVar13,7,0,(int)(animationSpeed * 5.5));
      }
      iVar19 = fastfunc::FastDecTimerS16(dVar27,uVar25 + 0x2d0);
      if (iVar19 != 0) {
        moby->state = '\b';
        *(undefined2 *)((int)pvVar6 + 0x2d0) = 0;
        if (moby->animationId != '\x03') {
          local_70 = (longlong)(int)(animationSpeed * 1.5);
          mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 1.5));
        }
        dVar31 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.0);
        fVar36 = (float)(dVar31 + 1.570796251296997);
        dVar27 = (double)(float)(3.141592502593994 - dVar31);
        if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
          dVar27 = dVar31;
        }
        fVar3 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar3 = fVar36;
        }
        dVar30 = (double)(float)(-3.141592502593994 - dVar31);
        if ((double)(float)(-3.141592502593994 - dVar31) - dVar27 < 0.0) {
          dVar30 = dVar27;
        }
        fVar4 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
          fVar4 = fVar3;
        }
        dVar31 = (double)(float)(dVar30 * dVar30);
        fVar5 = fVar4 * fVar4;
        dVar29 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
        fVar36 = fVar5 * fVar5 * fVar4;
        dVar27 = (double)(float)(dVar31 * dVar29);
        fVar3 = fVar5 * fVar36;
        local_e8 = 0;
        local_e4 = DAT_00853de4;
        local_d8 = 0.0;
        local_d4 = DAT_00853de8;
        local_ec = DAT_00853ddc * mobyutil::g_FrameTime *
                   ((float)(dVar31 * dVar27) * 2.601887e-06 +
                   (float)(dVar27 * -0.0001980741071747616 +
                          (double)(float)(dVar29 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar31 * dVar30) *
                                                         -0.16666656732559204 + dVar30))));
        local_f0 = DAT_00853ddc * mobyutil::g_FrameTime *
                   (fVar5 * fVar3 * 2.601887e-06 +
                   fVar3 * -0.0001980741 +
                   fVar36 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
        mobyfunc::GetBonePosition(lVar13,0,&local_d0);
        dVar27 = -0.06499999761581421;
        iVar19 = 0;
        dVar31 = 0.06499999761581421;
        dVar30 = 2.0;
        dVar29 = 1.2000000476837158;
        do {
          local_c0 = local_d0;
          local_bc = local_cc;
          local_b8 = local_c8;
          local_b4 = local_c4;
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_c0 = (float)((double)local_c0 + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_bc = (float)((double)local_bc + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_b8 = (float)((double)local_b8 + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime)
          ;
          local_e0 = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime)
          ;
          local_dc = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (-(DAT_00853de0 * mobyutil::g_FrameTime),
                                      DAT_00853de0 * mobyutil::g_FrameTime);
          uVar12 = DAT_00853dc4;
          uVar18 = DAT_00853dc0;
          local_d8 = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd0,(float)((double)DAT_00853dd0 * dVar30));
          uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd4,(float)((double)DAT_00853dd4 * dVar29));
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd8,(float)((double)DAT_00853dd8 * dVar29));
          uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          partupd::SpawnPart_2(&local_c0,&local_f0,&local_e0,uVar18,uVar12,uVar15,uVar16,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 0x1e);
        iVar19 = 0;
        local_e4 = DAT_00853de4 * 0.1;
        local_d4 = DAT_00853de8 * 0.1;
        do {
          local_b0 = local_d0;
          local_ac = local_cc;
          local_a8 = local_c8;
          local_a4 = local_c4;
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_b0 = (float)((double)local_b0 + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_ac = (float)((double)local_ac + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_a8 = (float)((double)local_a8 + dVar28);
          dVar28 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime)
          ;
          local_e0 = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime)
          ;
          local_dc = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (-(DAT_00853de0 * mobyutil::g_FrameTime),
                                      DAT_00853de0 * mobyutil::g_FrameTime);
          uVar12 = DAT_00853dcc;
          uVar18 = DAT_00853dc8;
          local_d8 = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd0,(float)((double)DAT_00853dd0 * dVar30));
          uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd4,(float)((double)DAT_00853dd4 * dVar29));
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00853dd8,(float)((double)DAT_00853dd8 * dVar29));
          uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          partupd::SpawnPart_2(&local_b0,&local_f0,&local_e0,uVar18,uVar12,uVar15,uVar16,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 0x1e);
      }
    }
    else if (bVar1 == 6) {
      mobyutil::Delt(mobyutil::g_FrameTime * 6.0,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4));
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,(int)unused,
                 (float *)((int)pvVar6 + 0x290));
      dVar31 = (double)(moby->rotation).z;
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      dVar27 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar27);
      if (dVar27 < 1.5707963705062866) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        local_118 = 0;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_11c = (fVar3 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 2.0;
        local_120 = (fVar4 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36) * 2.0;
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_120,
                   auStack_110);
        mobyutil::MB_PushOutOfSplineWalls
                  ((double)(DAT_00853dbc * 0.4),*(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                   lVar13 + 0x10,lVar13 + 0x10);
      }
      iVar19 = mobyutil::MB_SplineIntersect
                         (*(undefined4 *)((int)pvVar6 + 0x2c0),lVar13 + 0x10,&victim->pos,&local_100
                         );
      fVar36 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((iVar19 == 0) ||
         (local_fc = fVar3 - local_fc, local_100 = fVar36 - local_100,
         local_f8 = (moby->pos).z - local_f8,
         1.5 <= SQRT(local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc))) {
        if (*(int *)((int)pvVar6 + 0x2b0) == 0) {
          moby->state = '\n';
        }
        else {
          fVar3 = fVar3 - (victim->pos).y;
          fVar36 = fVar36 - (victim->pos).x;
          if (SQRT(fVar36 * fVar36 + fVar3 * fVar3) < 3.0) {
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            moby->state = '\a';
            fVar36 = animationSpeed;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
            auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorAddFloatingPoint
                                (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = vectorSplatHalfWord(auVar33,1);
            uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
            *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
            if (moby->animationId != '\x02') {
              local_70 = (longlong)(int)(fVar36 * 10.5);
              mobyutil::MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
            }
          }
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          local_70 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (bVar1 == 5) {
      if (*(int *)((int)pvVar6 + 0x2b0) == 0) {
        *(undefined4 *)((int)pvVar6 + 0xf4) = 0;
        moby->state = '\n';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar36 = (moby->pos).y - (victim->pos).y;
        fVar3 = (moby->pos).x - (victim->pos).x;
        if (SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 3.0) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\x02') {
            local_70 = (longlong)(int)(fVar36 * 10.5);
            mobyutil::MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 4) {
      fVar36 = (moby->pos).y - (victim->pos).y;
      fVar3 = (moby->pos).x - (victim->pos).x;
      dVar27 = (double)SQRT(fVar3 * fVar3 + fVar36 * fVar36);
      mobyupdate_helpers::M623_003e37b0((double)*(float *)((int)pvVar6 + 0x294),lVar13,&victim->pos)
      ;
      if (dVar27 < 3.0) {
        dVar31 = (double)(moby->rotation).z;
        dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                      (double)((victim->pos).y - (moby->pos).y));
        dVar27 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar27);
        if (dVar27 < 0.7853981852531433) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\x02') {
            local_70 = (longlong)(int)(fVar36 * 10.5);
            mobyutil::MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
          }
        }
      }
      if (*(int *)((int)pvVar6 + 0x164) == 2) {
        moby->state = '\n';
      }
    }
    else if (bVar1 == 2) {
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x280) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x284) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x290));
      dVar31 = (double)(moby->rotation).z;
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x280) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x284) - (moby->pos).y));
      dVar27 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar27);
      if (dVar27 < 1.5707963705062866) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        local_138 = 0;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_13c = (fVar3 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 2.0;
        local_140 = (fVar4 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36) * 2.0;
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_140,
                   auStack_130);
        mobyutil::MB_PushOutOfSplineWalls
                  ((double)(DAT_00853dbc * 0.4),*(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                   lVar13 + 0x10,lVar13 + 0x10);
      }
      fVar36 = (moby->pos).y - *(float *)((int)pvVar6 + 0x284);
      fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x280);
      sVar21 = *(short *)((int)pvVar6 + 0x2d2) + 1;
      *(short *)((int)pvVar6 + 0x2d2) = sVar21;
      if ((((SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 1.0) &&
           ((int)(animationSpeed * 60.5) < (int)sVar21)) ||
          ((int)(animationSpeed * 180.5) < (int)sVar21)) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_70 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 1) {
      if ((*(int *)((int)pvVar6 + 0x164) != 2) && (iVar19 = mobyutil::MB_randInt(9), iVar19 == 0)) {
        iVar19 = mobyutil::MB_SplineFindRouteNode
                           (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                            (longlong)*(int *)((int)pvVar6 + 0x2c4),ZEXT48(&DAT_00850000),&moby->pos
                            ,&victim->pos,auStack_150);
        if (iVar19 == 0) {
          *(undefined4 *)((int)pvVar6 + 0x164) = 2;
        }
        else {
          uVar14 = mobyutil::MB_randInt(0x100);
          fVar36 = *(float *)((int)pvVar6 + 0x298);
          if ((uVar14 & 1) != 0) {
            fVar36 = -fVar36;
            *(float *)((int)pvVar6 + 0x298) = fVar36;
          }
          *(float *)((int)pvVar6 + 0x294) = fVar36 * 0.017453292;
          dVar27 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          *(int *)((int)pvVar6 + 0x2ac) = (int)(animationSpeed * ((float)(longlong)dVar27 + 0.5));
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      if ((*(int *)((int)pvVar6 + 0x164) == 2) && (*(int *)((int)pvVar6 + 0x2b0) != 0)) {
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->enabled == '\0') || (uVar14 = mobyutil::MB_randInt(0xff), (uVar14 & 1) == 0)) {
          if (moby->animationId != '\0') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          mobyutil::MB_randSphere(0,0x4010000000000000,uVar25 + 0x280);
          *(undefined4 *)((int)pvVar6 + 0x288) = *(undefined4 *)((int)pvVar6 + 0x278);
          *(undefined2 *)((int)pvVar6 + 0x2d2) = 0;
          *(float *)((int)pvVar6 + 0x280) =
               *(float *)((int)pvVar6 + 0x280) + *(float *)((int)pvVar6 + 0x270);
          *(float *)((int)pvVar6 + 0x284) =
               *(float *)((int)pvVar6 + 0x284) + *(float *)((int)pvVar6 + 0x274);
          moby->setByGroup = moby->state;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      MVar23 = moby->modeBits;
      *(f32 *)((int)pvVar6 + 0x270) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x274) = (moby->pos).y;
      fVar2 = (moby->pos).z;
      moby->modeBits = MVar23 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar6 + 0x278) = fVar2;
      fVar2 = (moby->pos).w;
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40000000;
      *(f32 *)((int)pvVar6 + 0x27c) = fVar2;
      *(undefined2 *)((int)pvVar6 + 0x24) = 2;
      *(undefined1 *)((int)pvVar6 + 0x28) = 1;
      *(undefined4 *)((int)pvVar6 + 0x30) = 0x3f800000;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      *(undefined4 *)((int)pvVar6 + 0x2b0) = 0;
      uVar22 = fastfunc::FastDoubleToInt(0x402c000000000000);
      *(undefined1 *)((int)pvVar6 + 0x58) = uVar22;
      uVar22 = fastfunc::FastDoubleToInt(0x4026666660000000);
      *(undefined1 *)((int)pvVar6 + 0x5a) = uVar22;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
      *(undefined4 *)((int)pvVar6 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar6 + 0xd8) = 0x40000000;
      uVar18 = fastfunc::FastDoubleToInt((double)(DAT_00853dbc * 409.6));
      *(undefined4 *)((int)pvVar6 + 0xd0) = uVar18;
      *(float *)((int)pvVar6 + 0xf4) = mobyutil::g_FrameTime * 6.0;
      dVar27 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar6 + 0x2d8) = (float)dVar27;
      iVar19 = mobyutil::MB_randInt(2);
      fVar36 = (moby->pos).z;
      if (iVar19 == 0) {
        MVar23 = moby->modeBits &
                 (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else {
        MVar23 = moby->modeBits | MIRROR;
      }
      iVar19 = *(int *)((int)pvVar6 + 0x2b4);
      moby->modeBits = MVar23;
      if (iVar19 == 0) {
        if ((*(int *)((int)pvVar6 + 0x2b8) == -1) && (*(int *)((int)pvVar6 + 700) == -1)) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar13,0,0,0);
          }
        }
        else {
          moby->state = '\x0f';
          moby->modeBits =
               MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                         DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                         HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar13,0,0,0);
          }
        }
      }
      else {
        moby->modeBits =
             MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                       DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW
                       |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        moby->state = '\f';
        moby->drawDistance = 0;
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        (moby->pos).z = fVar36 - 20.0;
      }
      mobyutil::MB_SplineMarkCrossings(uVar25 + 0x2c0,1,*(undefined4 *)((int)pvVar6 + 0x2c4));
    }
  }
  else if (bVar1 == 0xf) {
    if (((*(int *)((int)pvVar6 + 0x2b8) == -1) ||
        (MobyInstance[*(int *)((int)pvVar6 + 0x2b8)].setByGroup == '\0')) &&
       ((*(int *)((int)pvVar6 + 700) == -1 ||
        (iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 700)),
        iVar19 == 0)))) {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar14 = mobyutil::MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          if (moby->animationId != '\0') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          mobyutil::MB_randSphere(0,0x4010000000000000,uVar25 + 0x280);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          *(undefined4 *)((int)pvVar6 + 0x288) = *(undefined4 *)((int)pvVar6 + 0x278);
          *(float *)((int)pvVar6 + 0x280) =
               *(float *)((int)pvVar6 + 0x280) + *(float *)((int)pvVar6 + 0x270);
          *(float *)((int)pvVar6 + 0x284) =
               *(float *)((int)pvVar6 + 0x284) + *(float *)((int)pvVar6 + 0x274);
          auVar33 = loadVectorLeftIndexed(0x7c,0x3e5174);
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar32);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d2,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d2) = uVar7;
          moby->setByGroup = moby->state;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else {
      moby->drawDistance = 0x40;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    }
  }
  else if (bVar1 == 0xe) {
    uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar20 & 0x60) != 0) {
      lVar26 = lVar13 + 0x10;
      mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar13,lVar26);
      uVar15 = 0;
      lVar24 = lVar13 + 0x40;
      mobyutil::MB_SpawnDebrisMoby(0,lVar13,0x6da,lVar26,lVar24,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar15,lVar13,0x6db,lVar26,lVar24,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar15,lVar13,0x6dc,lVar26,lVar24,0,0);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xd) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
      local_70 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar20 & 0x60) == 0) {
      fVar2 = (moby->pos).z;
      uVar20 = (int)fVar2 >> 0x1f;
      if ((int)((uVar20 >> 1 ^ (uint)fVar2) - uVar20) < 0x40000000) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      iVar19 = mobyutil::MB_SplineFindRouteNode
                         (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                          (longlong)(int)*(uint *)((int)pvVar6 + 0x2c4),
                          (ulonglong)*(uint *)((int)pvVar6 + 0x2c4),(int)(lVar13 + 0x10),
                          (int)pvVar6 + 0x270,auStack_80);
      if (iVar19 == 0) {
        mobyutil::MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_003e5174,
                   0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_70 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 10) {
    mobyupdate_helpers::M623_003e37b0(0,lVar13,uVar25 + 0x270);
    fVar36 = (moby->pos).y - *(float *)((int)pvVar6 + 0x274);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x270);
    if (1.0 <= SQRT(fVar3 * fVar3 + fVar36 * fVar36)) {
      if (*(int *)((int)pvVar6 + 0x164) == 2) {
        if (*(int *)((int)pvVar6 + 0x2b0) != 0) {
          moby->state = '\x06';
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_70 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else if (bVar1 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      fVar36 = (moby->pos).y;
      fVar3 = (victim->pos).y;
      fVar4 = (moby->pos).x;
      fVar8 = fVar36 - fVar3;
      fVar5 = (victim->pos).x;
      fVar9 = fVar4 - fVar5;
      if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < 3.0) {
        dVar31 = (double)(moby->rotation).z;
        dVar27 = (double)FUN_005e8338((double)(fVar5 - fVar4),(double)(fVar3 - fVar36));
        dVar27 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar27);
        if (dVar27 < 0.2617993950843811) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\a') {
            local_70 = (longlong)(int)(fVar36 * 5.5);
            mobyutil::MB_SetAnimation(lVar13,7,0,(int)(fVar36 * 5.5));
          }
          goto LAB_003e7060;
        }
      }
      *(undefined4 *)((int)pvVar6 + 0xf4) = 0;
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_70 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 8) {
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.0);
    dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
    if (dVar31 < 1.5) {
      dVar31 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      dVar27 = (double)fastfunc::FastSubRots((float)dVar27,(float)dVar31);
      if (((dVar27 < 0.2617993950843811) &&
          (fVar36 = (moby->pos).y - (victim->pos).y, fVar3 = (moby->pos).x - (victim->pos).x,
          SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 3.0)) &&
         (ABS((victim->pos).z - (moby->pos).z) < 2.0)) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        local_98 = 0;
        local_94 = 0x45afdf66;
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_9c = fVar3 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8;
        local_a0 = fVar4 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36;
        local_90 = (victim->pos).x;
        local_8c = (victim->pos).y;
        local_84 = (victim->pos).w;
        local_88 = (victim->pos).z + 0.75;
        mobyutil::CollDamageMobyDirect
                  (1.0,victim,moby,(int)((LZCOUNT(6 - DAT_0096ae38) << 0x3a) >> 0x3f) + 0x10001,
                   0x3e5174,&local_90,&local_a0);
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\t', moby->animationId != '\x04')) {
      local_70 = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
    }
  }
LAB_003e7060:
  DAT_010cbba8 = *DAT_009271f8;
  return;
}



//==== 003e70b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M624_003e70b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M624_003e70b0(void)

{
  DAT_00853e5c = 0x10000;
  return;
}



//==== 003e70d8  ns=mobyupdate_helpers  size=0x340
// sig: undefined M624_003e70d8(void)
// callers(1): 003e7450 mobyupdate_helpers::M624_003e7450
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00131100 partupd::SpawnPart_60; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M624_003e70d8(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  undefined1 uVar6;
  undefined8 in_r6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  dVar9 = 0.5;
  iVar5 = fastfunc::FastCheckBsphereInView((double)DAT_00853e84,local_90);
  if (iVar5 != -1) {
    dVar10 = 0.0;
    dVar11 = 1.0;
    dVar8 = (double)DAT_00853f3c;
    dVar7 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    if (dVar7 < dVar8) {
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      uVar3 = DAT_00853f2c;
      uVar2 = DAT_00853f28;
      mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      uVar4 = fastfunc::FastLerpColor(uVar2,uVar3);
      dVar7 = (double)DAT_00853f30;
      fVar1 = animationSpeed * (float)((double)(longlong)DAT_00853f34 + dVar9);
      uVar6 = mobyutil::MB_randInt(0xff);
      partupd::SpawnPart_60(dVar7,local_80,local_70,uVar4,in_r6,(int)fVar1 & 0xff,uVar6,0);
      dVar7 = (double)DAT_00853f30;
      fVar1 = animationSpeed * (float)((double)(longlong)DAT_00853f38 + dVar9);
      uVar6 = mobyutil::MB_randInt(0xff);
      partupd::SpawnPart_60(dVar7,local_80,local_70,uVar4,in_r6,(int)fVar1 & 0xff,uVar6,0);
    }
  }
  return;
}



//==== 003e7450  ns=mobyupdate_helpers  size=0x3a4
// sig: undefined M624_003e7450(void)
// callers(1): 003e7830 mobyupdate_unsorted::UpdateMoby_624
// callees(5): 00057820 collproc::CollLine; 0010581c mobyutil::SetCollDamIn; 003e70d8 mobyupdate_helpers::M624_003e70d8; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M624_003e7450
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [56];
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::SetCollDamIn(0x4008000000000000,auStack_b0,param_1,0x10001,param_4,local_e0);
  dVar6 = (double)fastfunc::FastIntToDouble(0x40);
  dVar7 = -3.141590118408203;
  fVar4 = (float)(1.0 / dVar6) * 6.28318;
  dVar8 = (double)fVar4;
  dVar6 = (double)fastfunc::FastWrapRot(-3.14159,fVar4);
  do {
    collproc::CollLine(local_d0,local_c0,1,*(undefined4 *)(iVar1 + 0x34),auStack_b0);
    uVar2 = *(uint *)(iVar1 + 0x24);
    uVar3 = (int)uVar2 >> 0x1f;
    if ((int)((uVar3 >> 1 ^ uVar2) - uVar3) < 0x40400000) {
      M624_003e70d8(param_1,local_d0,local_c0);
    }
    dVar7 = (double)fastfunc::FastWrapRot((float)dVar7,(float)dVar8);
    dVar6 = (double)fastfunc::FastWrapRot((float)dVar6,(float)dVar8);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  return;
}



//==== 003e7830  ns=mobyupdate_unsorted  size=0x790
// sig: undefined UpdateMoby_624(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 000ffb70 mobyutil::GetGroundZ; 00106150 mobyutil::MB_RegisterLameShadow; 001206e8 partupd::SpawnPart_2; 0015d204 sound::sound_MobyPlay_oClass; 003e7450 mobyupdate_helpers::M624_003e7450; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 624 */

void mobyupdate_unsorted::UpdateMoby_624(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  float *pfVar3;
  f32 fVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [40];
  
  pfVar3 = (float *)moby->pVar;
  if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar14 = 0;
        if (0 < DAT_00853ed0) {
          dVar17 = 0.0;
          uVar19 = 0x3fe0000000000000;
          dVar16 = 1.0;
          do {
            mobyutil::MB_randSphere(dVar17,(double)(DAT_00853e9c * mobyutil::g_FrameTime),local_b0);
            mobyutil::MB_randSphere(dVar17,uVar19,local_a0);
            mobyutil::MB_randRangeFloat(DAT_00853eb0,DAT_00853eb4);
            mobyutil::MB_randRangeFloat(DAT_00853eb8,DAT_00853ebc);
            uVar7 = DAT_00853ec4;
            uVar6 = DAT_00853ec0;
            mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar8 = fastfunc::FastLerpColor(uVar6,uVar7);
            uVar7 = DAT_00853ecc;
            uVar6 = DAT_00853ec8;
            mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar9 = fastfunc::FastLerpColor(uVar6,uVar7);
            dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
            uVar10 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)(longlong)DAT_00853ea0 * dVar15 + dVar16)));
            dVar18 = (double)(longlong)DAT_00853ea4;
            dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_00853eac,DAT_00853eac);
            uVar11 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar18 * (double)(float)(dVar15 + dVar16))));
            dVar18 = (double)(longlong)DAT_00853ea8;
            dVar15 = (double)mobyutil::MB_randRangeFloat(-DAT_00853eac,DAT_00853eac);
            uVar12 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar18 * (double)(float)(dVar15 + dVar16))));
            partupd::SpawnPart_2(local_a0,local_d0,local_c0,uVar8,uVar9,uVar10,uVar11,uVar12);
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00853ed0);
        }
        dVar16 = (double)fastfunc::FastWrapRot(pfVar3[0xc],mobyutil::g_FrameTime * 18.849556);
        uVar7 = DAT_00853e90;
        uVar6 = DAT_00853e8c;
        dVar17 = (double)(float)(3.141592502593994 - dVar16);
        if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
          dVar17 = dVar16;
        }
        dVar15 = (double)(float)(-3.141592502593994 - dVar16);
        if ((double)(float)(-3.141592502593994 - dVar16) - dVar17 < 0.0) {
          dVar15 = dVar17;
        }
        dVar20 = 1.0;
        uVar19 = 0x3fe0000000000000;
        pfVar3[0xc] = (float)dVar16;
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar17 = (double)(float)(dVar16 * dVar18);
        uVar13 = fastfunc::FastLerpColor
                           ((double)(((float)(dVar16 * dVar17) * 2.601887e-06 +
                                      (float)(dVar17 * -0.0001980741071747616 +
                                             (double)(float)(dVar18 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar16 *
                                                                                           dVar15) *
                                                                            -0.16666656732559204 +
                                                                           dVar15))) + 1.0) * 0.5),
                            uVar6,uVar7);
        moby->field60_0x90 = uVar13;
        pfVar3[2] = -(DAT_0071f418 * 10.0 - pfVar3[2]);
        (moby->pos).x = (moby->pos).x + *pfVar3;
        (moby->pos).y = (moby->pos).y + pfVar3[1];
        (moby->pos).z = (moby->pos).z + pfVar3[2];
        dVar17 = (double)mobyutil::GetGroundZ(uVar19,(longlong)(int)moby + 0x10,0);
        if ((double)((moby->pos).z - 0.333) < dVar17) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          moby->state = '\x01';
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          (moby->pos).z = (float)(dVar17 + 0.3330000042915344);
          auVar21 = loadVectorLeftIndexed(0x30,0x3e77f4);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar6 = storeVectorElementWordIndexed
                            (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x2c,
                             ZEXT48(pfVar3));
          *(undefined4 *)((uint)(pfVar3 + 0xb) & 0xfffffffc) = uVar6;
        }
        dVar17 = (double)fastfunc::FastWrapRot((moby->rotation).y,mobyutil::g_FrameTime * 8.726646);
        fVar4 = (moby->pos).z;
        (moby->rotation).y = (float)dVar17;
        uVar13 = (int)fVar4 >> 0x1f;
        if ((int)((uVar13 >> 1 ^ (uint)fVar4) - uVar13) < 0x41200000) {
          mobyfunc::DeleteMoby(moby);
        }
        else {
          mobyutil::MB_RegisterLameShadow((float)dVar20,moby);
        }
      }
      else {
        dVar16 = (double)fastfunc::FastWrapRot(pfVar3[0xc],mobyutil::g_FrameTime * 18.849556);
        uVar7 = DAT_00853e90;
        uVar6 = DAT_00853e8c;
        dVar17 = (double)(float)(3.141592502593994 - dVar16);
        if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
          dVar17 = dVar16;
        }
        dVar15 = (double)(float)(-3.141592502593994 - dVar16);
        if ((double)(float)(-3.141592502593994 - dVar16) - dVar17 < 0.0) {
          dVar15 = dVar17;
        }
        pfVar3[0xc] = (float)dVar16;
        dVar17 = (double)(float)(dVar15 * dVar15);
        dVar18 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar15));
        dVar16 = (double)(float)(dVar17 * dVar18);
        uVar13 = fastfunc::FastLerpColor
                           ((double)(((float)(dVar17 * dVar16) * 2.601887e-06 +
                                      (float)(dVar16 * -0.0001980741071747616 +
                                             (double)(float)(dVar18 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar17 *
                                                                                           dVar15) *
                                                                            -0.16666656732559204 +
                                                                           dVar15))) + 1.0) * 0.5),
                            uVar6,uVar7);
        moby->field60_0x90 = uVar13;
        iVar14 = fastfunc::FastDecTimerS32(ZEXT48(pfVar3) + 0x2c);
        if (iVar14 != 0) {
          sound::sound_MobyPlay_oClass(0xf,0,moby,0x58e);
          MVar2 = moby->modeBits;
          moby->state = '\x02';
          pfVar3[9] = 0.5;
          moby->enabled = '\0';
          moby->modeBits = MVar2 | DISABLED;
          moby->collision = (ushort *)0x0;
        }
      }
    }
    else if (bVar1 < 3) {
      pfVar3[9] = pfVar3[9] + pfVar3[8];
      mobyupdate_helpers::M624_003e7450((longlong)(int)moby);
      RegisterFuncForMoby(&PTR_M625_003e82b0_0070da40,moby);
      uVar13 = (int)pfVar3[9] >> 0x1f;
      uVar5 = (int)pfVar3[10] >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)pfVar3[10]) - uVar5) <
          (int)((uVar13 >> 1 ^ (uint)pfVar3[9]) - uVar13)) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 < 4) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003e7fc8  ns=Global  size=0x2b0
// sig: undefined FUN_003e7fc8(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_003e7fc8(double param_1,double param_2,f32 *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xc0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x1a] = in_LR;
  puVar7[0x16] = in_f30;
  puVar7[0x17] = in_f31;
  puVar7[0x13] = unaff_r29;
  puVar7[0x15] = unaff_r31;
  puVar7[0x14] = unaff_r30;
  pMVar12 = mobyfunc::CreateMoby(THRUSTERPACK|BOLT_CIRCLENUT);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    fVar1 = DAT_00853e88;
    pMVar12->drawDistance = 0xff;
    pMVar12->field60_0x90 = DAT_00853e8c;
    pMVar12->modeBits = pMVar12->modeBits | HAS_GLOW;
    pMVar12->scale = pMVar12->scale * fVar1;
    (pMVar12->pos).x = *param_3;
    (pMVar12->pos).y = param_3[1];
    (pMVar12->pos).z = param_3[2];
    (pMVar12->pos).w = param_3[3];
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar8 = ABS(param_4[1]);
    pfVar6 = (float *)pMVar12->pVar;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar8;
    fVar1 = 0.0;
    uVar14 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    if (0.0 < fVar4) {
      lVar17 = uVar11 - 0xb0;
      lVar15 = uVar11 - 0x3c;
      lVar16 = uVar11 - 0x4c;
      lVar19 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)(puVar7 + 0xf) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar2;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar4 * fVar4;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x4c;
      lVar19 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x74) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar12->rotation).z = fVar1;
    *pfVar6 = *param_4;
    pfVar6[1] = param_4[1];
    pfVar6[2] = param_4[2];
    fVar1 = param_4[3];
    pfVar6[10] = (float)param_1;
    pfVar6[3] = fVar1;
    pfVar6[8] = (float)param_2;
    pfVar6[0xc] = 0.0;
    pfVar6[0xd] = param_7;
  }
  return;
}



//==== 003e82b0  ns=mobyupdate_helpers  size=0x5d4
// sig: undefined M625_003e82b0(void)
// callers(0): 
// callees(11): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

ulonglong mobyupdate_helpers::M625_003e82b0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar11;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint uVar12;
  ulonglong unaff_r23;
  undefined4 *puVar13;
  ulonglong unaff_r24;
  undefined4 *puVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar18 = uVar6 - 0x410;
  puVar4 = (ulonglong *)lVar18;
  *puVar4 = uVar6;
  puVar4[0x84] = in_LR;
  puVar4[0x75] = in_f19;
  puVar4[0x76] = in_f20;
  puVar4[0x77] = in_f21;
  puVar4[0x78] = in_f22;
  puVar4[0x79] = in_f23;
  puVar4[0x7a] = in_f24;
  puVar4[0x7b] = in_f25;
  puVar4[0x7c] = in_f26;
  puVar4[0x7d] = in_f27;
  puVar4[0x7e] = in_f28;
  puVar4[0x7f] = in_f29;
  puVar4[0x80] = in_f30;
  puVar4[0x81] = in_f31;
  puVar4[0x74] = unaff_r31;
  puVar4[0x72] = unaff_r29;
  puVar4[0x68] = unaff_r19;
  puVar4[0x73] = unaff_r30;
  puVar4[0x71] = unaff_r28;
  puVar4[0x70] = unaff_r27;
  puVar4[0x6f] = unaff_r26;
  puVar4[0x6e] = unaff_r25;
  puVar4[0x6d] = unaff_r24;
  puVar4[0x6c] = unaff_r23;
  puVar4[0x6b] = unaff_r22;
  puVar4[0x6a] = unaff_r21;
  puVar4[0x69] = unaff_r20;
  iVar3 = *(int *)(param_1 + 0x78);
  fastfunc::FastMtx4Identity((float *)(puVar4 + 0x16));
  fVar1 = *(float *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  iVar11 = 0;
  *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  fVar5 = DAT_00853f10;
  iVar19 = 0;
  *(undefined4 *)((int)puVar4 + 0xe4) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar4 + 0xec) = uVar10;
  *(float *)(puVar4 + 0x1d) = fVar1 + fVar5;
  dVar38 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xec) = 0x3f800000;
  do {
    uVar7 = draw::GetEffectTex(0xe);
    iVar9 = (int)lVar18;
    *(undefined8 *)(iVar9 + 0x168) = uVar7;
    uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar9 + 0x170) = uVar7;
    uVar7 = FUN_00502f08(0,0,0,0,0,0);
    *(undefined8 *)(iVar9 + 0x160) = uVar7;
    uVar7 = idol_draw::PackCmd(DAT_010cbbb0,DAT_00853ed8,DAT_010cbbb4,DAT_00853edc,0x80);
    *(undefined8 *)(iVar9 + 0x178) = uVar7;
    puVar4[0x66] = (longlong)iVar11;
    dVar34 = (double)(float)((double)(longlong)puVar4[0x66] * 0.25);
    dVar35 = (double)(float)((double)DAT_00853f18 * (double)(longlong)puVar4[0x66] +
                            (double)*(float *)(iVar3 + 0x24));
    dVar36 = (double)(float)((double)*(float *)(iVar3 + 0x24) * (double)DAT_00853f1c + dVar34);
    iVar9 = fastfunc::FastDoubleToInt(dVar36);
    puVar4[0x66] = (longlong)iVar9;
    dVar37 = (double)(float)(dVar36 - (double)(longlong)puVar4[0x66]);
    uVar8 = fastfunc::FastLerpColor(dVar37,DAT_00853ee4,DAT_00853ee8);
    dVar36 = (double)(float)((double)DAT_00853f20 * dVar37);
    if (dVar38 - (double)(float)((double)DAT_00853f20 * dVar37) < 0.0) {
      dVar36 = dVar38;
    }
    uVar8 = fastfunc::FastLerpColor(dVar36,uVar8 & 0xffffff);
    dVar39 = (double)((*(float *)(iVar3 + 0x28) - *(float *)(iVar3 + 0x24)) /
                     (DAT_00853f24 * animationSpeed * *(float *)(iVar3 + 0x20)));
    dVar36 = dVar38;
    if ((dVar39 <= dVar38) && (dVar36 = dVar39, dVar39 < 0.0)) {
      dVar36 = 0.0;
    }
    uVar10 = fastfunc::FastLerpColor(dVar36,uVar8 & 0xffffff,uVar8);
    dVar40 = 0.01745329238474369;
    dVar36 = 3.141590118408203;
    dVar39 = 1.570796251296997;
    dVar28 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    uVar12 = 0;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    puVar13 = &DAT_00853ef0;
    puVar14 = &DAT_00853ef4;
    dVar34 = (double)(float)(dVar34 * 0.01745329238474369);
    lVar15 = lVar18;
    lVar16 = lVar18;
    lVar17 = lVar18;
    do {
      uVar2 = *puVar14;
      *(undefined4 *)((int)lVar15 + 0x140) = *puVar13;
      *(undefined4 *)((int)lVar15 + 0x144) = uVar2;
      if ((uVar12 & 1) == 0) {
        fVar1 = -(float)((double)DAT_00853f14 * dVar37);
      }
      else {
        fVar1 = (float)((double)DAT_00853f14 * dVar37);
      }
      puVar4[0x66] = (longlong)((int)uVar12 >> 1);
      iVar9 = (int)lVar16;
      *(float *)(iVar9 + 0xf8) = fVar1;
      dVar20 = (double)fastfunc::FastWrapRot
                                 ((float)((double)(float)((double)DAT_00853eec * dVar40) *
                                          (double)(longlong)puVar4[0x66] - dVar36),
                                  (float)((double)DAT_00853eec * dVar34));
      dVar23 = (double)(float)(dVar20 + dVar39);
      *(undefined4 *)((int)lVar17 + 0x130) = uVar10;
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 2;
      *(undefined4 *)(iVar9 + 0xfc) = 0x3f800000;
      lVar15 = lVar15 + 8;
      puVar14 = puVar14 + 2;
      lVar17 = lVar17 + 4;
      dVar21 = (double)(float)(dVar28 - dVar20);
      if (dVar20 - (double)(float)(dVar28 - dVar20) < 0.0) {
        dVar21 = dVar20;
      }
      dVar24 = (double)(float)(dVar28 - dVar23);
      if (dVar23 - (double)(float)(dVar28 - dVar23) < 0.0) {
        dVar24 = dVar23;
      }
      dVar22 = (double)(float)(dVar29 - dVar20);
      if ((double)(float)(dVar29 - dVar20) - dVar21 < 0.0) {
        dVar22 = dVar21;
      }
      dVar21 = (double)(float)(dVar29 - dVar23);
      if ((double)(float)(dVar29 - dVar23) - dVar24 < 0.0) {
        dVar21 = dVar24;
      }
      dVar20 = (double)(float)(dVar22 * dVar22);
      dVar23 = (double)(float)(dVar21 * dVar21);
      dVar26 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar22));
      dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar21));
      dVar25 = (double)(float)(dVar20 * dVar26);
      dVar27 = (double)(float)(dVar23 * dVar24);
      *(float *)(iVar9 + 0xf4) =
           (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar33 +
                                  (double)(float)(dVar25 * dVar32 +
                                                 (double)(float)(dVar26 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar20 * dVar22) * dVar30 + dVar22)))) * dVar35);
      *(float *)(iVar9 + 0xf0) =
           (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar33 +
                                  (double)(float)(dVar27 * dVar32 +
                                                 (double)(float)(dVar24 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar23 * dVar21) * dVar30 + dVar21)))) * dVar35);
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar12 < 4);
    iVar11 = iVar11 + 1;
    lVar18 = lVar18 + 0x90;
  } while (iVar11 < 4);
  dVar38 = (double)DAT_00853eec;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(float *)(puVar4 + 0xf) = (float)(dVar38 * dVar40);
  fastfunc::FastEulerToMtx(uVar6 - 0x390,uVar6 - 0x3a0);
  auVar42 = ZEXT416(0xffffffff);
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar46 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar48 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar41 = loadVectorLeftIndexed(0x3eec,0x850000);
  auVar42 = loadVectorLeftIndexed(0x34,0x3e8278);
  auVar44 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  uVar8 = 0x30;
  auVar42 = ZEXT416(0);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar46,auVar45);
  auVar46 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar44 = ZEXT416(0xffffffff);
  auVar48 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = loadVectorLeftIndexed(0x30,0x3e8278);
  auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  dVar38 = 360.0;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar49,auVar47);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar46);
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar48
                      );
  auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
             auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    do {
      lVar18 = uVar6 - 0x360;
      draw::FastDrawQuad(uVar6 - 800,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x290,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x200,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x170,lVar18,0,EffectTexHeaders,9);
      fastfunc::FastVecMtx4MultBatch3(lVar18,lVar18,uVar6 - 0x390);
      dVar36 = (double)DAT_00853eec;
      iVar19 = iVar19 + 1;
      uVar8 = (ulonglong)iVar19;
      puVar4[0x66] = uVar8;
    } while ((float)(longlong)puVar4[0x66] < (float)(dVar38 / dVar36));
  }
  return uVar8;
}



//==== 003e8884  ns=mobyupdate_helpers  size=0x14
// sig: undefined M625_003e8884(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M625_003e8884(void)

{
  DAT_00853f8c = 0x10000;
  return;
}



//==== 003e88a8  ns=mobyupdate_helpers  size=0x18c
// sig: undefined M625_003e88a8(void)
// callers(1): 003e9668 mobyupdate_unsorted::UpdateMoby_625
// callees(1): 0005e598 collproc::CollMobySphere

void mobyupdate_helpers::M625_003e88a8(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x78);
  iVar2 = iVar5;
  do {
    pcVar1 = *(char **)(iVar2 + 0x1a0);
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 == '\x02') {
        if (*(short *)(pcVar1 + 0x32) == 0) {
          *(undefined4 *)(iVar2 + 0x1a0) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x1a0) = 0;
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 8);
  if (DAT_0096ae38 != 6) {
    uVar6 = 0x3fe8000000000000;
    do {
      if (*(uint *)(iVar5 + 0x1a0) != 0) {
        collproc::CollMobySphere(uVar6,(ulonglong)*(uint *)(iVar5 + 0x1a0) + 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < 8);
  }
  return;
}



//==== 003e8a88  ns=mobyupdate_helpers  size=0xb68
// sig: undefined M625_003e8a88(void)
// callers(1): 003e9668 mobyupdate_unsorted::UpdateMoby_625
// callees(12): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0011050c mobyutil::???_MB_PickMinAbsField2c_Of4; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M625_003e8a88(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  vec4 *pvVar29;
  ulonglong unaff_r28;
  undefined8 uVar30;
  ulonglong unaff_r29;
  vec4 *pvVar31;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f14;
  double dVar39;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  double dVar41;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  double dVar43;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  ulonglong in_f26;
  double dVar46;
  double dVar47;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar23 = uVar19 - 0x1e0;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar19;
  puVar12[0x3e] = in_LR;
  puVar12[0x2a] = in_f14;
  puVar12[0x2b] = in_f15;
  puVar12[0x2c] = in_f16;
  puVar12[0x2d] = in_f17;
  puVar12[0x2e] = in_f18;
  puVar12[0x2f] = in_f19;
  puVar12[0x30] = in_f20;
  puVar12[0x31] = in_f21;
  puVar12[0x32] = in_f22;
  puVar12[0x33] = in_f23;
  puVar12[0x34] = in_f24;
  puVar12[0x35] = in_f25;
  puVar12[0x36] = in_f26;
  puVar12[0x37] = in_f27;
  puVar12[0x38] = in_f28;
  puVar12[0x39] = in_f29;
  puVar12[0x3a] = in_f30;
  puVar12[0x3b] = in_f31;
  puVar12[0x29] = unaff_r31;
  puVar12[0x26] = unaff_r28;
  uVar30 = 0;
  puVar12[0x28] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar32 = ZEXT48(pvVar9);
  dVar39 = 0.0;
  puVar12[0x27] = unaff_r29;
  puVar12[0x25] = unaff_r27;
  puVar12[0x24] = unaff_r26;
  puVar12[0x23] = unaff_r25;
  puVar12[0x22] = unaff_r24;
  *(undefined4 *)((int)puVar12 + 0xd4) = 0;
  uVar20 = mobyutil::MB_damage(param_1,0x210000,0);
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    uVar30 = mobyutil::MB_damage(*(int *)((int)pvVar9 + 0x184),0x210000,0);
  }
  uVar21 = 0;
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    uVar21 = mobyutil::MB_damage(*(int *)((int)pvVar9 + 0x188),0x210000,0);
  }
  iVar24 = mobyutil::____MB_PickMinAbsField2c_Of4(uVar20,uVar30,uVar21,0);
  if (iVar24 != 0) {
    iVar24 = iVar24 + ((uint)((LZCOUNT((int)param_1 - *(int *)(iVar24 + 0x20)) << 0x3a) >> 0x3f) &
                      -iVar24);
    if ((*(int *)(iVar24 + 0x20) != 0) &&
       ((sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6), sVar8 == 0x47 || (sVar8 == 0)))) {
      iVar24 = 0;
    }
  }
  mobyutil::MB_HandleDamage(param_1,iVar24,uVar32 + 0x20,0,puVar12 + 0x1a,(int)puVar12 + 0xd4,0,4);
  if ((*(int *)(puVar12 + 0x1a) != 1) && (param_1->state != '\x03')) {
    iVar24 = *(int *)((int)puVar12 + 0xd4);
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar12 + 0xd4);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar39 || iVar24 < 1) {
      sound::PlayMobySound(3,0,param_1);
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      fVar1 = (param_1->pos).y;
      *(f32 *)(puVar12 + 0x18) = (param_1->pos).x;
      fVar2 = (param_1->pos).w;
      *(f32 *)((int)puVar12 + 0xc4) = fVar1;
      lVar22 = uVar32 + 0x40;
      *(f32 *)((int)puVar12 + 0xcc) = fVar2;
      lVar23 = uVar19 - 0x120;
      fVar3 = (param_1->pos).z;
      puVar12[0x12] = 0xffffffffffffffff;
      *(float *)(puVar12 + 0x19) = fVar3 + 3.0;
      uVar49 = 0x4010000000000000;
      dVar48 = 2.0;
      uVar21 = 0x4022000000000000;
      uVar30 = 0x3ff0000000000000;
      uVar20 = 0x402e000000000000;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      mobyutil::MB_genericExplosion
                (dVar39,dVar39,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,param_1,lVar22,lVar23);
      dVar46 = 1.570796251296997;
      fVar3 = (param_1->rotation).z;
      dVar45 = 3.141592502593994;
      fVar4 = fVar3 + 1.5707963;
      dVar44 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar43 = -0.0001980741071747616;
      fVar7 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar7 = fVar3;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar3 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar15 = fVar6 * fVar6;
      fVar7 = (param_1->pos).x;
      fVar4 = (param_1->pos).y;
      dVar42 = 2.601886990305502e-06;
      fVar18 = fVar3 * fVar3;
      fVar5 = fVar15 * fVar15 * fVar6;
      fVar1 = (param_1->pos).z;
      fVar16 = fVar18 * fVar18 * fVar3;
      fVar14 = fVar15 * fVar5;
      *(f32 *)((int)puVar12 + 0xcc) = (param_1->pos).w;
      *(f32 *)(puVar12 + 0x19) = fVar1;
      puVar12[0x12] = 0xffffffffffffffff;
      fVar17 = fVar18 * fVar16;
      puVar12[0x14] = 1;
      *(float *)((int)puVar12 + 0xc4) =
           (float)((double)(fVar15 * fVar14 * 2.601887e-06 +
                           fVar14 * -0.0001980741 +
                           fVar5 * 0.0083330255 + fVar15 * fVar6 * -0.16666657 + fVar6) * dVar48 +
                  (double)fVar4);
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      *(float *)(puVar12 + 0x18) =
           (float)((double)(fVar18 * fVar17 * 2.601887e-06 +
                           fVar17 * -0.0001980741 +
                           fVar16 * 0.0083330255 + fVar18 * fVar3 * -0.16666657 + fVar3) * dVar48 +
                  (double)fVar7);
      mobyutil::MB_genericExplosion
                (dVar39,dVar39,uVar49,dVar48,uVar21,uVar30,uVar20,param_1,lVar22,lVar23);
      fVar3 = (param_1->pos).x;
      dVar41 = (double)fVar3;
      fVar1 = (param_1->pos).y;
      *(float *)(puVar12 + 0x18) = fVar3;
      fVar2 = (param_1->pos).z;
      *(f32 *)((int)puVar12 + 0xc4) = fVar1;
      fVar1 = (param_1->pos).w;
      *(f32 *)(puVar12 + 0x19) = fVar2;
      *(f32 *)((int)puVar12 + 0xcc) = fVar1;
      dVar40 = 3.1415927410125732;
      dVar34 = (double)fastfunc::FastWrapRot((param_1->rotation).z,3.1415927);
      dVar34 = (double)(float)(dVar34 + dVar46);
      dVar46 = (double)(float)(dVar45 - dVar34);
      if (dVar34 - (double)(float)(dVar45 - dVar34) < 0.0) {
        dVar46 = dVar34;
      }
      dVar35 = (double)(float)(dVar44 - dVar34);
      if ((double)(float)(dVar44 - dVar34) - dVar46 < 0.0) {
        dVar35 = dVar46;
      }
      fVar3 = (param_1->rotation).z;
      dVar47 = (double)*(float *)((int)puVar12 + 0xc4);
      dVar46 = (double)(float)(dVar35 * dVar35);
      dVar34 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar35));
      dVar38 = (double)(float)(dVar46 * dVar34);
      *(float *)(puVar12 + 0x18) =
           (float)((double)(float)((double)(float)(dVar46 * dVar38) * dVar42 +
                                  (double)(float)(dVar38 * dVar43 +
                                                 (double)(float)(dVar34 * dVar36 +
                                                                (double)(float)((double)(float)(
                                                  dVar46 * dVar35) * dVar37 + dVar35)))) * dVar48 +
                  dVar41);
      dVar34 = (double)fastfunc::FastWrapRot(fVar3,(float)dVar40);
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      dVar46 = (double)(float)(dVar45 - dVar34);
      if (dVar34 - (double)(float)(dVar45 - dVar34) < 0.0) {
        dVar46 = dVar34;
      }
      dVar45 = (double)(float)(dVar44 - dVar34);
      if ((double)(float)(dVar44 - dVar34) - dVar46 < 0.0) {
        dVar45 = dVar46;
      }
      dVar46 = (double)(float)(dVar45 * dVar45);
      dVar44 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar45));
      dVar34 = (double)(float)(dVar46 * dVar44);
      *(float *)((int)puVar12 + 0xc4) =
           (float)((double)(float)((double)(float)(dVar46 * dVar34) * dVar42 +
                                  (double)(float)(dVar34 * dVar43 +
                                                 (double)(float)(dVar44 * dVar36 +
                                                                (double)(float)((double)(float)(
                                                  dVar46 * dVar45) * dVar37 + dVar45)))) * dVar48 +
                  dVar47);
      mobyutil::MB_genericExplosion
                (dVar39,dVar39,uVar49,dVar48,uVar21,uVar30,uVar20,param_1,lVar22,lVar23);
      auVar50 = ZEXT416(0xffffffff);
      auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar50,auVar50);
      auVar50 = loadVectorLeftIndexed(0x4034,0x850000);
      auVar53 = loadVectorLeftIndexed(0x3c,0x3e8a34);
      auVar51 = vectorConvertFromSignedFixedPointWord(auVar50,0);
      auVar50 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      pvVar31 = &param_1->pos;
      pvVar29 = &param_1->rotation;
      auVar50 = vectorAddFloatingPoint
                          (auVar51,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar53,auVar50,auVar52);
      auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar50 = vectorSplatHalfWord(auVar50,1);
      uVar10 = storeVectorElementHalfWordIndexed(auVar50,0x19e,uVar32);
      *(undefined2 *)((int)pvVar9 + 0x19e) = uVar10;
      param_1->state = '\x03';
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6dd,pvVar31,pvVar29,0,0,0x19e,&DAT_00a15d30);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6df,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6e0,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6fe,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6fe,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar39,param_1,0x6ff,pvVar31,pvVar29,0,0);
      return;
    }
    sound::PlayMobySound(2,0,param_1);
    *(undefined1 *)((int)pvVar9 + 0x67) = 200;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar32 + 0x60);
  }
  param_1->damage = -1;
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x184) + 0xa4) = 0xff;
  }
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar9 + 0x188) + 0xa4) = 0xff;
  }
  if ((*(int *)((int)pvVar9 + 0x38) != 0) && (*(int *)((int)pvVar9 + 0x178) == 0)) {
    auVar50 = ZEXT416(0xffffffff);
    auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
    auVar51 = vectorShiftLeftIntegerWord(auVar50,auVar50);
    auVar50 = loadVectorLeftIndexed(0x40,0x3e8a34);
    auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar50 = vectorMultiplyAddFloatingPoint
                        (auVar53,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,
                         auVar51);
    auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
    auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x178,uVar32);
    *(undefined4 *)((int)pvVar9 + 0x178U & 0xfffffffc) = uVar11;
    fVar4 = g_heroPosition.y;
    fVar3 = (param_1->pos).y;
    fVar7 = g_heroPosition.x - (param_1->pos).x;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    fVar4 = fVar4 - fVar3;
    dVar36 = ABS((double)fVar7);
    dVar37 = ABS((double)fVar4);
    *(float *)(puVar12 + 0x1b) = fVar7;
    *(float *)((int)puVar12 + 0xdc) = fVar4;
    fVar3 = (param_1->rotation).z;
    *(float *)(puVar12 + 0x1c) = (float)(dVar36 - dVar37);
    uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1d) & 4;
    dVar43 = ABS((double)*(float *)(puVar12 + 0x1b));
    if ((double)*(float *)(puVar12 + 0x1c) - dVar39 < 0.0) {
      dVar43 = dVar37;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
    dVar37 = ABS((double)*(float *)((int)puVar12 + 0xdc));
    if ((double)*(float *)(puVar12 + 0x1c) - dVar39 < 0.0) {
      dVar37 = dVar36;
    }
    fVar4 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    if (dVar39 < dVar43) {
      lVar22 = uVar19 - 0x1d0;
      lVar28 = uVar19 - 0xec;
      lVar25 = uVar19 - 0xfc;
      lVar33 = 2;
      fVar5 = (float)(dVar37 - dVar43) / (float)(dVar37 + dVar43);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar12 + 0x1e) = fVar5;
      *(float *)(puVar12 + 0x1d) = fVar5;
      *(float *)((int)puVar12 + 0xec) = fVar5;
      *(float *)((int)puVar12 + 0xe4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar6;
      *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar5;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xd4) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar28 = uVar19 - 0xfc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar25 = lVar28;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xe4) * fVar5;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        iVar13 = (int)lVar28;
        lVar23 = lVar23 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar24 + 0xe4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar7 + fVar4);
    }
    dVar39 = (double)fastfunc::FastSubRots(fVar3,(float)dVar39);
    if (1.5707963705062866 < dVar39) {
      *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
    }
  }
  iVar24 = fastfunc::FastDecTimerS32(uVar32 + 0x178);
  uVar11 = 0x41600000;
  if (iVar24 != 0) {
    uVar11 = 0x41a00000;
  }
  *(undefined4 *)((int)pvVar9 + 0x174) = uVar11;
  if (*(int *)((int)pvVar9 + 0x184) != 0) {
    *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58) =
         SQRT(*(float *)((int)pvVar9 + 0x48) * *(float *)((int)pvVar9 + 0x48) +
              *(float *)((int)pvVar9 + 0x40) * *(float *)((int)pvVar9 + 0x40) +
              *(float *)((int)pvVar9 + 0x44) * *(float *)((int)pvVar9 + 0x44)) /
         (DAT_00853fb0 * mobyutil::g_FrameTime);
    *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58) =
         *(float *)((int)pvVar9 + 0x84) * DAT_00853fb4 +
         *(float *)(*(int *)((int)pvVar9 + 0x184) + 0x58);
    iVar24 = *(int *)((int)pvVar9 + 0x184);
    *(f32 *)(iVar24 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (param_1->rotation).w;
    iVar24 = *(int *)((int)pvVar9 + 0x184);
    *(f32 *)(iVar24 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar24 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar24 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (param_1->pos).w;
  }
  if (*(int *)((int)pvVar9 + 0x188) != 0) {
    *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58) =
         SQRT(*(float *)((int)pvVar9 + 0x48) * *(float *)((int)pvVar9 + 0x48) +
              *(float *)((int)pvVar9 + 0x40) * *(float *)((int)pvVar9 + 0x40) +
              *(float *)((int)pvVar9 + 0x44) * *(float *)((int)pvVar9 + 0x44)) /
         (DAT_00853fb0 * mobyutil::g_FrameTime);
    *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58) =
         -(*(float *)((int)pvVar9 + 0x84) * DAT_00853fb4 -
          *(float *)(*(int *)((int)pvVar9 + 0x188) + 0x58));
    iVar24 = *(int *)((int)pvVar9 + 0x188);
    *(f32 *)(iVar24 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (param_1->rotation).w;
    iVar24 = *(int *)((int)pvVar9 + 0x188);
    *(f32 *)(iVar24 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar24 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar24 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (param_1->pos).w;
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar32 + 0x60);
  return;
}



//==== 003e9668  ns=mobyupdate_unsorted  size=0x15c0
// sig: undefined UpdateMoby_625(MobyInstance * moby)
// callers(0): 
// callees(20): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109ec0 mobyutil::DeltAng; 001206e8 partupd::SpawnPart_2; 003e88a8 mobyupdate_helpers::M625_003e88a8; 003e8a88 mobyupdate_helpers::M625_003e8a88; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 625 */

void mobyupdate_unsorted::UpdateMoby_625(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int *piVar10;
  Spline *pSVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  MobyInstance *pMVar24;
  undefined1 uVar27;
  int iVar25;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar26;
  longlong lVar28;
  float *pfVar29;
  Vec4 *poly;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  int *unused2;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f16;
  double dVar43;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar44;
  ulonglong in_f22;
  double dVar45;
  ulonglong in_f23;
  double dVar46;
  ulonglong in_f24;
  double dVar47;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar48;
  ulonglong in_f29;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x220;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar18;
  puVar13[0x46] = in_LR;
  puVar13[0x34] = in_f16;
  puVar13[0x35] = in_f17;
  puVar13[0x36] = in_f18;
  puVar13[0x37] = in_f19;
  puVar13[0x38] = in_f20;
  puVar13[0x39] = in_f21;
  puVar13[0x3a] = in_f22;
  puVar13[0x3b] = in_f23;
  puVar13[0x3c] = in_f24;
  puVar13[0x3d] = in_f25;
  puVar13[0x3e] = in_f26;
  puVar13[0x3f] = in_f27;
  puVar13[0x40] = in_f28;
  puVar13[0x41] = in_f29;
  puVar13[0x42] = in_f30;
  puVar13[0x43] = in_f31;
  puVar13[0x33] = unaff_r31;
  puVar13[0x2f] = unaff_r27;
  puVar13[0x32] = unaff_r30;
  puVar13[0x31] = unaff_r29;
  puVar13[0x30] = unaff_r28;
  puVar13[0x2e] = unaff_r26;
  puVar13[0x2d] = unaff_r25;
  puVar13[0x2c] = unaff_r24;
  puVar13[0x2b] = unaff_r23;
  puVar13[0x2a] = unaff_r22;
  pvVar9 = moby->pVar;
  uVar33 = ZEXT48(pvVar9);
  mobyupdate_helpers::M625_003e8a88();
  mobyupdate_helpers::M625_003e88a8(moby);
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    if (*(MobyInstance **)((int)pvVar9 + 0x184) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x184));
    }
    if (*(MobyInstance **)((int)pvVar9 + 0x188) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x188));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  if (1 < bVar1) {
    if (2 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x184) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x184));
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x188) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x188));
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar25 = **(int **)((int)pvVar9 + 0xd0);
    iVar26 = *(int *)((int)pvVar9 + 0xc0) + iVar25 + (int)*(char *)((int)pvVar9 + 0xc4);
    iVar26 = iVar26 - (iVar26 / iVar25) * iVar25;
    mobyutil::MB_UpdateNavMoveTurning
              (moby,uVar33 + 0x70,*(int **)((int)pvVar9 + 0xd0) + iVar26 * 4 + 4,uVar33 + 0x40);
    piVar10 = *(int **)((int)pvVar9 + 0xd0);
    fVar3 = (moby->pos).y - (float)piVar10[iVar26 * 4 + 5];
    fVar4 = (moby->pos).x - (float)piVar10[iVar26 * 4 + 4];
    if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 1.0) {
      if ((iVar26 == iVar25 + -1) &&
         (pfVar29 = (float *)(piVar10 + *piVar10 * 4),
         5.0 < SQRT((pfVar29[2] - (float)piVar10[6]) * (pfVar29[2] - (float)piVar10[6]) +
                    (*pfVar29 - (float)piVar10[4]) * (*pfVar29 - (float)piVar10[4]) +
                    (pfVar29[1] - (float)piVar10[5]) * (pfVar29[1] - (float)piVar10[5])))) {
        *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
      }
      *(int *)((int)pvVar9 + 0xc0) = iVar26;
    }
    uVar12 = DAT_00853ff4;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_00853ff0;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar12;
    mobyfunc::GetBonePosition(moby,2,uVar18 - 400);
    iVar25 = 0;
    do {
      *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(puVar13 + 0x12);
      *(undefined4 *)((int)puVar13 + 0xd4) = *(undefined4 *)((int)puVar13 + 0x94);
      *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(puVar13 + 0x13);
      *(undefined4 *)((int)puVar13 + 0xdc) = *(undefined4 *)((int)puVar13 + 0x9c);
      dVar53 = -0.06499999761581421;
      dVar50 = 0.06499999761581421;
      dVar52 = (double)mobyutil::MB_randRangeFloat(-0.065,0.065);
      *(float *)(puVar13 + 0x1a) = (float)((double)*(float *)(puVar13 + 0x1a) + dVar52);
      dVar52 = (double)mobyutil::MB_randRangeFloat((float)dVar53,(float)dVar50);
      *(float *)((int)puVar13 + 0xd4) = (float)((double)*(float *)((int)puVar13 + 0xd4) + dVar52);
      dVar52 = (double)mobyutil::MB_randRangeFloat((float)dVar53,(float)dVar50);
      *(float *)(puVar13 + 0x1b) = (float)((double)*(float *)(puVar13 + 0x1b) + dVar52);
      fVar8 = DAT_00853fe0;
      fVar5 = mobyutil::g_FrameTime;
      dVar54 = 1.570796251296997;
      dVar51 = 3.141592502593994;
      fVar3 = *(float *)((int)pvVar9 + 0x194) + 1.5707963;
      dVar49 = -3.141592502593994;
      dVar48 = -0.16666656732559204;
      dVar53 = 0.008333025500178337;
      dVar50 = -0.0001980741071747616;
      dVar52 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar14 = fVar7 * fVar7;
      fVar3 = fVar14 * fVar14 * fVar7;
      fVar4 = fVar14 * fVar3;
      *(float *)(puVar13 + 0x14) =
           DAT_00853fe0 * mobyutil::g_FrameTime *
           (fVar14 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar14 * fVar7 * -0.16666657 + fVar7);
      fVar3 = *(float *)((int)pvVar9 + 0x194);
      *(undefined4 *)(puVar13 + 0x15) = 0;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar15 = fVar7 * fVar7;
      fVar4 = fVar15 * fVar15 * fVar7;
      fVar3 = DAT_00853fe4 * fVar5;
      fVar14 = fVar15 * fVar4;
      *(float *)((int)puVar13 + 0xa4) =
           fVar8 * fVar5 *
           (fVar15 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar4 * 0.0083330255 + fVar15 * fVar7 * -0.16666657 + fVar7);
      dVar46 = 0.8999999761581421;
      dVar45 = 1.100000023841858;
      dVar35 = (double)mobyutil::MB_randRangeFloat(fVar3 * 0.9,fVar3 * 1.1);
      *(float *)(puVar13 + 0x15) = (float)dVar35;
      dVar35 = (double)mobyutil::MB_randRangeFloat(-DAT_00853ff8,DAT_00853ff8);
      dVar47 = 0.01745329238474369;
      dVar44 = (double)(float)(dVar35 * 0.01745329238474369);
      dVar35 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar9 + 0x194),
                                  (float)(dVar35 * 0.01745329238474369));
      dVar36 = (double)(float)(dVar35 + dVar54);
      dVar35 = (double)(float)(dVar51 - dVar36);
      if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar41 = (double)(float)(dVar49 - dVar36);
      if ((double)(float)(dVar49 - dVar36) - dVar35 < 0.0) {
        dVar41 = dVar35;
      }
      dVar35 = (double)(float)(dVar41 * dVar41);
      dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar41));
      dVar39 = (double)(float)(dVar35 * dVar36);
      *(float *)(puVar13 + 0x16) =
           DAT_00853fe8 * mobyutil::g_FrameTime *
           (float)((double)(float)(dVar35 * dVar39) * dVar52 +
                  (double)(float)(dVar39 * dVar50 +
                                 (double)(float)(dVar36 * dVar53 +
                                                (double)(float)((double)(float)(dVar35 * dVar41) *
                                                                dVar48 + dVar41))));
      dVar36 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar44);
      dVar35 = (double)(float)(dVar51 - dVar36);
      if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar44 = (double)(float)(dVar49 - dVar36);
      if ((double)(float)(dVar49 - dVar36) - dVar35 < 0.0) {
        dVar44 = dVar35;
      }
      fVar3 = DAT_00853fe8 * mobyutil::g_FrameTime;
      fVar4 = DAT_00853fec * mobyutil::g_FrameTime;
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar35 = (double)(float)(dVar44 * dVar44);
      dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar44));
      dVar41 = (double)(float)(dVar35 * dVar36);
      *(float *)((int)puVar13 + 0xb4) =
           fVar3 * (float)((double)(float)(dVar35 * dVar41) * dVar52 +
                          (double)(float)(dVar41 * dVar50 +
                                         (double)(float)(dVar36 * dVar53 +
                                                        (double)(float)((double)(float)(dVar35 * 
                                                  dVar44) * dVar48 + dVar44))));
      dVar35 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)fVar4 * dVar46),(float)((double)fVar4 * dVar45));
      *(float *)(puVar13 + 0x17) = (float)dVar35;
      uVar17 = DAT_00853fd0;
      uVar12 = DAT_00853fcc;
      dVar44 = 2.0;
      dVar35 = (double)mobyutil::MB_randRangeFloat(DAT_00853fd4,DAT_00853fd4 * 2.0);
      uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      dVar36 = 1.2000000476837158;
      dVar35 = (double)mobyutil::MB_randRangeFloat(DAT_00853fd8,DAT_00853fd8 * 1.2);
      uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      dVar35 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_00853fdc,(float)((double)DAT_00853fdc * dVar36));
      uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      iVar26 = partupd::SpawnPart_2
                         (uVar18 - 0x150,uVar18 - 0x180,uVar18 - 0x170,uVar12,uVar17,uVar21,uVar22,
                          uVar23);
      if (((worldUpdateTime & 7) == 0) && (iVar25 == 0 && iVar26 != 0)) {
        iVar30 = 0;
        uVar31 = uVar33;
        do {
          if (*(int *)((int)uVar31 + 0x1a0) == 0) {
            *(int *)((int)pvVar9 + iVar30 * 4 + 0x1a0) = iVar26;
            break;
          }
          iVar30 = iVar30 + 1;
          uVar31 = uVar31 + 4;
        } while (iVar30 < 8);
      }
      uVar12 = DAT_00854024;
      iVar25 = iVar25 + 1;
      if (1 < iVar25) {
        dVar35 = 0.0;
        iVar25 = 0;
        *(undefined4 *)((int)puVar13 + 0xac) = DAT_00854020;
        *(undefined4 *)((int)puVar13 + 0xbc) = uVar12;
        dVar39 = -0.20000000298023224;
        dVar41 = 0.20000000298023224;
        dVar46 = 0.699999988079071;
        dVar45 = 1.5;
        do {
          *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(puVar13 + 0x12);
          *(undefined4 *)((int)puVar13 + 0xe4) = *(undefined4 *)((int)puVar13 + 0x94);
          *(undefined4 *)(puVar13 + 0x1d) = *(undefined4 *)(puVar13 + 0x13);
          *(undefined4 *)((int)puVar13 + 0xec) = *(undefined4 *)((int)puVar13 + 0x9c);
          dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar41);
          *(float *)(puVar13 + 0x1c) = (float)((double)*(float *)(puVar13 + 0x1c) + dVar37);
          dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar41);
          *(float *)((int)puVar13 + 0xe4) =
               (float)((double)*(float *)((int)puVar13 + 0xe4) + dVar37);
          dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar41);
          fVar4 = DAT_0085402c;
          fVar3 = -DAT_0085402c;
          *(float *)(puVar13 + 0x1d) = (float)((double)*(float *)(puVar13 + 0x1d) + dVar37);
          dVar37 = (double)mobyutil::MB_randRangeFloat(fVar3,fVar4);
          dVar43 = (double)(float)(dVar37 * dVar47);
          dVar37 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar9 + 0x194),(float)(dVar37 * dVar47));
          dVar38 = (double)(float)(dVar37 + dVar54);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar42 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar42 = dVar37;
          }
          dVar37 = (double)(float)(dVar42 * dVar42);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar42));
          dVar40 = (double)(float)(dVar37 * dVar38);
          *(float *)(puVar13 + 0x14) =
               DAT_00854010 * mobyutil::g_FrameTime *
               (float)((double)(float)(dVar37 * dVar40) * dVar52 +
                      (double)(float)(dVar40 * dVar50 +
                                     (double)(float)(dVar38 * dVar53 +
                                                    (double)(float)((double)(float)(dVar37 * dVar42)
                                                                    * dVar48 + dVar42))));
          dVar38 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar43);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar43 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar43 = dVar37;
          }
          fVar3 = DAT_00854010 * mobyutil::g_FrameTime;
          fVar4 = DAT_00854014 * mobyutil::g_FrameTime;
          *(undefined4 *)(puVar13 + 0x15) = 0;
          dVar37 = (double)(float)(dVar43 * dVar43);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar43));
          dVar42 = (double)(float)(dVar37 * dVar38);
          *(float *)((int)puVar13 + 0xa4) =
               fVar3 * (float)((double)(float)(dVar37 * dVar42) * dVar52 +
                              (double)(float)(dVar42 * dVar50 +
                                             (double)(float)(dVar38 * dVar53 +
                                                            (double)(float)((double)(float)(dVar37 *
                                                                                           dVar43) *
                                                                            dVar48 + dVar43))));
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)fVar4 * dVar46),
                                      (float)((double)fVar4 * dVar45));
          *(float *)(puVar13 + 0x15) = (float)dVar37;
          dVar37 = (double)mobyutil::MB_randRangeFloat(-DAT_00854028,DAT_00854028);
          dVar43 = (double)(float)(dVar37 * dVar47);
          dVar37 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar9 + 0x194),(float)(dVar37 * dVar47));
          dVar38 = (double)(float)(dVar37 + dVar54);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar42 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar42 = dVar37;
          }
          dVar37 = (double)(float)(dVar42 * dVar42);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar42));
          dVar40 = (double)(float)(dVar37 * dVar38);
          *(float *)(puVar13 + 0x16) =
               DAT_00854018 * mobyutil::g_FrameTime *
               (float)((double)(float)(dVar37 * dVar40) * dVar52 +
                      (double)(float)(dVar40 * dVar50 +
                                     (double)(float)(dVar38 * dVar53 +
                                                    (double)(float)((double)(float)(dVar37 * dVar42)
                                                                    * dVar48 + dVar42))));
          dVar38 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar9 + 0x194),(float)dVar43);
          dVar37 = (double)(float)(dVar51 - dVar38);
          if (dVar38 - (double)(float)(dVar51 - dVar38) < 0.0) {
            dVar37 = dVar38;
          }
          dVar43 = (double)(float)(dVar49 - dVar38);
          if ((double)(float)(dVar49 - dVar38) - dVar37 < 0.0) {
            dVar43 = dVar37;
          }
          fVar3 = DAT_00854018 * mobyutil::g_FrameTime;
          fVar4 = DAT_0085401c * mobyutil::g_FrameTime;
          *(undefined4 *)(puVar13 + 0x17) = 0;
          dVar37 = (double)(float)(dVar43 * dVar43);
          dVar38 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar43));
          dVar42 = (double)(float)(dVar37 * dVar38);
          *(float *)((int)puVar13 + 0xb4) =
               fVar3 * (float)((double)(float)(dVar37 * dVar42) * dVar52 +
                              (double)(float)(dVar42 * dVar50 +
                                             (double)(float)(dVar38 * dVar53 +
                                                            (double)(float)((double)(float)(dVar37 *
                                                                                           dVar43) *
                                                                            dVar48 + dVar43))));
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)fVar4 * dVar46),
                                      (float)((double)fVar4 * dVar45));
          *(float *)(puVar13 + 0x17) = (float)dVar37;
          uVar17 = DAT_00854000;
          uVar12 = DAT_00853ffc;
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00854004,(float)((double)DAT_00854004 * dVar44));
          uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_00854008,(float)((double)DAT_00854008 * dVar36));
          uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     (DAT_0085400c,(float)((double)DAT_0085400c * dVar36));
          uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
          puVar13[0xe] = 0xffffffffffffffff;
          partupd::SpawnPart_2
                    (uVar18 - 0x140,uVar18 - 0x180,uVar18 - 0x170,uVar12,uVar17,uVar21,uVar22,uVar23
                    );
          iVar25 = iVar25 + 1;
        } while (iVar25 < 2);
        fVar3 = (moby->pos).y;
        fVar4 = (moby->pos).x;
        fVar5 = fVar3 - g_heroPosition.y;
        fVar8 = fVar4 - g_heroPosition.x;
        *(float *)(puVar13 + 0x18) = fVar4;
        fVar6 = (moby->pos).w;
        *(float *)((int)puVar13 + 0xc4) = fVar3;
        *(f32 *)((int)puVar13 + 0xcc) = fVar6;
        fVar3 = (moby->pos).z;
        *(float *)(puVar13 + 0x19) = fVar3 + 3.0;
        if (((*(float *)((int)pvVar9 + 0x174) < SQRT(fVar8 * fVar8 + fVar5 * fVar5)) ||
            (4.0 <= ABS(fVar3 - g_heroPosition.z))) ||
           ((*(int *)((int)pvVar9 + 400) != -1 &&
            (iVar25 = mobyutil::PointInsideComplexPoly
                                (&g_heroPosition,
                                 (Vec4 *)Splines[*(int *)((int)pvVar9 + 400)]->points,
                                 Splines[*(int *)((int)pvVar9 + 400)]->cnt), iVar25 == 0)))) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(moby,0,0,3);
          }
          moby->state = '\x01';
        }
        else {
          iVar25 = collproc::CollLine(uVar18 - 0x160,&hero::g_heroCGPos,2,moby,0);
          if (iVar25 != 0) {
            if (moby->animationId != '\0') {
              mobyutil::MB_SetAnimation(moby,0,0,3);
            }
            moby->state = '\x01';
          }
        }
        fVar3 = g_heroPosition.x - (moby->pos).x;
        fVar4 = g_heroPosition.y - (moby->pos).y;
        dVar50 = ABS((double)fVar3);
        dVar53 = ABS((double)fVar4);
        *(float *)(puVar13 + 0x1e) = fVar3;
        *(float *)((int)puVar13 + 0xf4) = fVar4;
        *(float *)(puVar13 + 0x1f) = (float)(dVar50 - dVar53);
        uVar31 = (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1d) & 4;
        pfVar29 = (float *)((uint)(uVar31 << 2) | 0x735900);
        iVar25 = (int)(uVar31 << 2);
        dVar52 = ABS((double)*(float *)(puVar13 + 0x1e));
        if ((double)*(float *)(puVar13 + 0x1f) - dVar35 < 0.0) {
          dVar52 = dVar53;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar25);
        dVar53 = ABS((double)*(float *)((int)puVar13 + 0xf4));
        if ((double)*(float *)(puVar13 + 0x1f) - dVar35 < 0.0) {
          dVar53 = dVar50;
        }
        fVar4 = pfVar29[1];
        if (dVar35 < dVar52) {
          lVar19 = uVar18 - 0x210;
          lVar28 = uVar18 - 0x118;
          lVar32 = uVar18 - 0x108;
          lVar34 = 2;
          fVar5 = (float)(dVar53 - dVar52) / (float)(dVar53 + dVar52);
          fVar8 = fVar5 * fVar5;
          *(float *)((int)puVar13 + 0x114) = fVar5;
          *(float *)((int)puVar13 + 0x10c) = fVar5;
          *(float *)(puVar13 + 0x22) = fVar5;
          *(float *)(puVar13 + 0x21) = fVar5;
          fVar5 = fVar8 * fVar8;
          *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8;
          *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar5;
          *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar5 * fVar8;
          do {
            *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar5 * fVar5;
            iVar25 = (int)lVar28;
            lVar19 = lVar19 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar34 = 4;
          lVar32 = uVar18 - 0x118;
          pfVar29 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar28 = lVar32;
          do {
            fVar5 = *pfVar29;
            fVar8 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar5;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar8;
            lVar28 = lVar28 + 8;
            iVar25 = (int)lVar28;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar19 = 2;
          do {
            iVar26 = (int)lVar20;
            iVar30 = (int)lVar32;
            lVar20 = lVar20 + 0x10;
            lVar32 = lVar32 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x108)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar52 = 1.5707963705062866;
        mobyutil::DeltAng((float)dVar35,mobyutil::g_FrameTime * 1.5707964,
                          (float *)((int)pvVar9 + 0x194),(int)pfVar29,iVar25,0);
        mobyutil::DeltAng(0.08726646,(float)((double)mobyutil::g_FrameTime * dVar52),
                          (float *)((int)pvVar9 + 0x198),(int)pfVar29,iVar25,0);
        fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x198),uVar33 + 0x140,1);
        fastfunc::FastDiffRots((double)*(float *)((int)pvVar9 + 0x194),(double)(moby->rotation).z);
        fastfunc::FastQuaternionToEuler(uVar33 + 0x100,2);
        return;
      }
    } while( true );
  }
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar9 + 0x184) == 0) {
      pMVar24 = mobyfunc::CreateMoby(DOOR_LEFT|BRIDGE_0068);
      *(MobyInstance **)((int)pvVar9 + 0x184) = pMVar24;
      pMVar24->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x184) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar9 + 0x184) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar9 + 0x184) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x184) + 0x34) = 0x4000;
      iVar25 = *(int *)((int)pvVar9 + 0x184);
      *(f32 *)(iVar25 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar25 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar25 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar25 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar9 + 0x184) + 0x94) = 0;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x184));
    }
    if (*(int *)((int)pvVar9 + 0x188) == 0) {
      pMVar24 = mobyfunc::CreateMoby(0x369);
      *(MobyInstance **)((int)pvVar9 + 0x188) = pMVar24;
      pMVar24->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x188) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar9 + 0x188) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar9 + 0x188) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar9 + 0x188) + 0x34) = 0x4000;
      iVar25 = *(int *)((int)pvVar9 + 0x188);
      *(f32 *)(iVar25 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar25 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar25 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar25 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar9 + 0x188) + 0x94) = 0;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0x188));
    }
    mobyfunc::AttachManipulator(moby,0,(int)pvVar9 + 0xf0);
    mobyfunc::AttachManipulator(moby,1,(int)pvVar9 + 0x130);
    pMVar24 = g_heroMobyPtr;
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    uVar16 = pMVar24->light;
    moby->color = pMVar24->color;
    moby->light = uVar16;
    mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0x70));
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0x40000000;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0x40800000;
    *(undefined4 *)((int)pvVar9 + 0x70) = 0x38d;
    *(undefined4 *)((int)pvVar9 + 0xac) = 0x3c23d70a;
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x3e99999a;
    *(undefined4 *)((int)pvVar9 + 0xb4) = 0x3dcccccd;
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0xd4)];
    *(undefined4 *)((int)pvVar9 + 0xc0) = 1;
    *(Spline **)((int)pvVar9 + 0xd0) = pSVar11;
    (moby->pos).x = pSVar11->points[0].x;
    (moby->pos).y = pSVar11->points[0].y;
    uVar2 = moby->animationId;
    (moby->pos).z = pSVar11->points[0].z;
    fVar3 = pSVar11->points[0].w;
    moby->state = '\x01';
    (moby->pos).w = fVar3;
    if (uVar2 != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,0);
    }
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    fVar3 = DAT_00853fb8 * mobyutil::g_FrameTime;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40c00000;
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    *(undefined4 *)((int)pvVar9 + 0x4c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x48) = 0;
    *(undefined4 *)((int)pvVar9 + 0x44) = 0;
    *(undefined4 *)((int)pvVar9 + 0x40) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 6;
    *(undefined1 *)((int)pvVar9 + 0x28) = 3;
    *(ushort *)((int)pvVar9 + 0x3e) = *(ushort *)((int)pvVar9 + 0x3e) | 2;
    *(float *)((int)pvVar9 + 0x94) = fVar3;
    *(undefined1 *)((int)pvVar9 + 0x29) = 0;
    *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
    auVar55 = loadVectorLeftIndexed(4,0x3e95f0);
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x180,uVar33);
    *(undefined4 *)((int)pvVar9 + 0x180U & 0xfffffffc) = uVar12;
    *(undefined4 *)((int)pvVar9 + 0x198) = 0;
    *(f32 *)((int)pvVar9 + 0x194) = (moby->rotation).z;
    uVar27 = fastfunc::FastDoubleToInt((double)DAT_00854038);
    *(undefined1 *)((int)pvVar9 + 0x58) = uVar27;
    uVar27 = fastfunc::FastDoubleToInt((double)(DAT_0085403c * 8.0));
    *(undefined1 *)((int)pvVar9 + 0x5a) = uVar27;
    return;
  }
  iVar25 = **(int **)((int)pvVar9 + 0xd0);
  iVar26 = *(int *)((int)pvVar9 + 0xc0) + iVar25 + (int)*(char *)((int)pvVar9 + 0xc4);
  iVar26 = iVar26 - (iVar26 / iVar25) * iVar25;
  unused2 = *(int **)((int)pvVar9 + 0xd0) + iVar26 * 4 + 4;
  mobyutil::MB_UpdateNavMoveTurning(moby,uVar33 + 0x70,unused2,uVar33 + 0x40);
  piVar10 = *(int **)((int)pvVar9 + 0xd0);
  fVar3 = (moby->pos).y;
  poly = (Vec4 *)(piVar10 + iVar26 * 4);
  fVar4 = (moby->pos).x;
  fVar8 = fVar3 - poly[1].y;
  fVar5 = fVar4 - poly[1].x;
  if (SQRT(fVar5 * fVar5 + fVar8 * fVar8) < 1.0) {
    if ((iVar26 == iVar25 + -1) &&
       (poly = (Vec4 *)(piVar10 + *piVar10 * 4), fVar3 = poly->y - (float)piVar10[5],
       fVar4 = poly->x - (float)piVar10[4], fVar5 = poly->z - (float)piVar10[6],
       5.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
      *(char *)((int)pvVar9 + 0xc4) = -*(char *)((int)pvVar9 + 0xc4);
    }
    *(int *)((int)pvVar9 + 0xc0) = iVar26;
    fVar4 = (moby->pos).x;
    fVar3 = (moby->pos).y;
  }
  if ((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
            (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) <
       *(float *)((int)pvVar9 + 0x174)) &&
     (fVar5 = (moby->pos).z, ABS(fVar5 - g_heroPosition.z) < 4.0)) {
    if (*(int *)((int)pvVar9 + 400) != -1) {
      poly = Splines[*(int *)((int)pvVar9 + 400)]->points;
      unused2 = (int *)Splines[*(int *)((int)pvVar9 + 400)]->cnt;
      iVar25 = mobyutil::PointInsideComplexPoly(&g_heroPosition,(Vec4 *)poly,unused2);
      if (iVar25 == 0) goto LAB_003e9d08;
      fVar5 = (moby->pos).z;
      fVar4 = (moby->pos).x;
      fVar3 = (moby->pos).y;
    }
    fVar6 = (moby->pos).w;
    *(float *)(puVar13 + 0x10) = fVar4;
    *(float *)((int)puVar13 + 0x84) = fVar3;
    poly = (Vec4 *)&hero::g_heroCGPos;
    *(f32 *)((int)puVar13 + 0x8c) = fVar6;
    unused2 = (int *)0x2;
    *(float *)(puVar13 + 0x11) = fVar5 + 3.0;
    iVar25 = collproc::CollLine(uVar18 - 0x1a0,&hero::g_heroCGPos,2,moby,0);
    if (iVar25 == 0) {
      if (moby->animationId != '\0') {
        poly = (Vec4 *)0x0;
        unused2 = (int *)0x0;
        mobyutil::MB_SetAnimation(moby,0,0,3);
      }
      moby->state = '\x02';
    }
  }
LAB_003e9d08:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar5 = fVar3 - g_heroPosition.y;
  fVar8 = fVar4 - g_heroPosition.x;
  if (16.0 <= SQRT(fVar8 * fVar8 + fVar5 * fVar5)) {
    dVar52 = 1.5707963705062866;
    mobyutil::DeltAng((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964,
                      (float *)((int)pvVar9 + 0x194),(int)poly,(int)unused2,0);
    mobyutil::DeltAng(0.0,(float)((double)mobyutil::g_FrameTime * dVar52),
                      (float *)((int)pvVar9 + 0x198),(int)poly,(int)unused2,0);
  }
  else {
    fVar4 = g_heroPosition.x - fVar4;
    fVar3 = g_heroPosition.y - fVar3;
    fVar5 = ABS(fVar4);
    fVar8 = ABS(fVar3);
    *(float *)((int)puVar13 + 0xfc) = fVar4;
    *(float *)(puVar13 + 0x20) = fVar3;
    *(float *)((int)puVar13 + 0x104) = fVar5 - fVar8;
    fVar3 = 0.0;
    uVar31 = (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1d) & 4;
    pfVar29 = (float *)((uint)(uVar31 << 2) | 0x735900);
    iVar25 = (int)(uVar31 << 2);
    fVar4 = ABS(*(float *)((int)puVar13 + 0xfc));
    if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar25);
    fVar7 = ABS(*(float *)(puVar13 + 0x20));
    if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = pfVar29[1];
    if (0.0 < fVar4) {
      lVar19 = uVar18 - 0x210;
      lVar28 = uVar18 - 0xf8;
      lVar32 = uVar18 - 0xe8;
      lVar34 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)((int)puVar13 + 300) = fVar4;
      *(float *)(puVar13 + 0x26) = fVar4;
      *(float *)(puVar13 + 0x25) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar7;
      *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar4;
      *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x118) * fVar4 * fVar4;
        iVar25 = (int)lVar28;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar25 + 4) * fVar4 * fVar4;
        lVar32 = lVar32 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar32 = uVar18 - 0xf8;
      pfVar29 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar28 = lVar32;
      do {
        fVar4 = *pfVar29;
        fVar7 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x128) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
        lVar28 = lVar28 + 8;
        iVar25 = (int)lVar28;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar19 = 2;
      do {
        iVar26 = (int)lVar20;
        iVar30 = (int)lVar32;
        lVar20 = lVar20 + 0x10;
        lVar32 = lVar32 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar26 + 0x128) + *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8)
                + *(float *)(iVar30 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar5;
    }
    dVar52 = 1.5707963705062866;
    mobyutil::DeltAng(fVar3,mobyutil::g_FrameTime * 1.5707964,(float *)((int)pvVar9 + 0x194),
                      (int)pfVar29,iVar25,0);
    mobyutil::DeltAng(0.08726646,(float)((double)mobyutil::g_FrameTime * dVar52),
                      (float *)((int)pvVar9 + 0x198),(int)pfVar29,iVar25,0);
  }
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x198),uVar33 + 0x140,1);
  fastfunc::FastDiffRots((double)*(float *)((int)pvVar9 + 0x194),(double)(moby->rotation).z);
  fastfunc::FastQuaternionToEuler(uVar33 + 0x100,2);
  return;
}



//==== 003eac28  ns=mobyupdate_helpers  size=0x14
// sig: undefined M627_003eac28(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M627_003eac28(void)

{
  DAT_0085408c = 0x10000;
  return;
}



//==== 003eac40  ns=mobyupdate_helpers  size=0x74
// sig: undefined M627_003eac40(void)
// callers(0): 
// callees(1): 0010675c mobyutil::MB_damage

void mobyupdate_helpers::M627_003eac40(int param_1)

{
  int iVar1;
  
  iVar1 = mobyutil::MB_damage(param_1,0x130000,0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar1 + 0x20) + 0xa6) != *(short *)(param_1 + 0xa6))) {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  return;
}



//==== 003ead68  ns=mobyupdate_unsorted  size=0xcd8
// sig: undefined UpdateMoby_627(MobyInstance * moby)
// callers(0): 
// callees(18): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00106738 mobyutil::TweenColor; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 0010b030 mobyutil::MB_UpdateKick; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 00125350 partupd::SpawnPart_16; 0015d12c sound::PlayMobySound; 003fda38 FUN_003fda38; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 627 */

void mobyupdate_unsorted::UpdateMoby_627(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  char cVar3;
  float fVar4;
  KickVars *kv;
  float fVar5;
  f32 fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar18;
  int iVar19;
  undefined8 uVar20;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float local_1c0 [4];
  undefined1 local_1b0 [16];
  undefined1 auStack_1a0 [80];
  float local_150 [4];
  double local_140;
  double local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  float local_f8;
  longlong local_f0;
  float local_e0;
  
  lVar11 = (longlong)(int)moby;
  kv = (KickVars *)moby->pVar;
  iVar15 = mobyutil::MB_damage(lVar11,0x130000,0);
  if (((iVar15 != 0) && (*(int *)(iVar15 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar15 + 0x20) + 0xa6) != moby->oClass)) {
    moby->state = '\x04';
  }
  iVar15 = 0;
  moby->damage = -1;
  fVar5 = kv[1].kickVel[3];
  dVar27 = 0.0;
  kv[1].kickVel[0] = 0.0;
  kv[1].kickVel[3] = (float)((int)fVar5 + 1);
  uVar2 = moby->state;
  if (uVar2 == '\x05') {
    fVar5 = moby->scale * (DAT_0071f408 * -0.074 + 1.0);
    moby->scale = fVar5;
    if (fVar5 < moby->pClass->gScale * 0.01) {
      mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x04') {
    fVar5 = (moby->pos).y - GameCamera.posY;
    fVar1 = (moby->pos).x - GameCamera.posX;
    dVar23 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
    uVar12 = collproc::CollMobySphere(0x4000000000000000,lVar11 + 0x10,&DAT_003eacb4,0x10,lVar11,0);
    dVar22 = 0.25;
    uVar20._0_4_ = (moby->pos).x;
    uVar20._4_4_ = (moby->pos).y;
    uVar14._0_4_ = (moby->pos).z;
    uVar14._4_4_ = (moby->pos).w;
    mobyutil::MB_DamageMobyList
              (0x4008000000000000,0x3fd0000000000000,0x3ff8000000000000,lVar11,4,uVar20,uVar14,
               &DAT_00a14a00,uVar12,0,&DAT_00810001);
    iVar15 = 0x96;
    local_f8 = (float)dVar23;
    if (dVar23 < 10.0 != 0xffffffce) {
      local_f8 = (float)dVar23;
      iVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar23 * 15.0));
    }
    iVar17 = 0;
    if (0 < iVar15) {
      dVar24 = -0.5;
      dVar33 = 0.5;
      local_100 = 14.0;
      local_108 = 22.0;
      local_110 = 12.0;
      local_118 = 4.0;
      local_11c = 0x3fc90fda;
      dVar28 = 180.5;
      dVar29 = 200000.0;
      dVar30 = 300000.0;
      dVar31 = 240.5;
      local_120 = 0x41000000;
      local_124 = 50000.0;
      dVar32 = 1.0;
      local_128 = 100000.0;
      dVar23 = 300.5;
      dVar25 = 0.7071068286895752;
      local_130 = 0x41024f8000000000;
      local_138 = 30.5;
      local_140 = 45.5;
      do {
        lVar13 = mobyutil::MB_randInt(4);
        dVar21 = (double)mobyutil::g_FrameTime;
        local_150[3] = 0.0;
        local_150[0] = (float)(dVar21 * local_100);
        local_150[1] = (float)(dVar21 * local_108);
        local_150[2] = (float)(dVar21 * local_110);
        mobyutil::MB_randRangeFloat((float)(dVar21 * dVar24),(float)(dVar21 * dVar33));
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar24),
                   (float)((double)mobyutil::g_FrameTime * dVar33));
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * local_118),
                   *(float *)((int)local_150 + (int)(lVar13 << 2)));
        iVar19 = (int)lVar13;
        dVar21 = dVar22;
        if (iVar19 == 1) {
          dVar21 = dVar33;
        }
        local_e0 = (float)dVar23;
        mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar21);
        dVar21 = (double)mobyutil::MB_randRot();
        dVar23 = (double)local_e0;
        if (iVar19 < 2) {
          if (-1 < iVar19) {
            if (iVar19 < 1) {
              uVar20 = mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
              iVar19 = (int)((double)animationSpeed * dVar31);
              local_f0 = (longlong)iVar19;
              mobyutil::MB_randRange((int)((double)animationSpeed * dVar28),iVar19);
              partupd::SpawnPart_16(uVar20,local_1b0,local_1c0,0x1f101820,&DAT_00101010);
            }
            else {
              mobyutil::MB_randRangeFloat(local_124,local_128);
              local_f0 = (longlong)(int)((double)animationSpeed * dVar28);
              partupd::SpawnPart_16(local_1b0,local_1c0,0x3f081020,0xf081020);
            }
          }
        }
        else if (iVar19 < 3) {
          lVar13 = mobyutil::MB_randInt(100);
          iVar19 = (int)((double)animationSpeed * local_140);
          local_f0 = (longlong)iVar19;
          mobyutil::MB_randRange((int)((double)animationSpeed * local_138),iVar19);
          partupd::SpawnPart_16
                    (local_130,local_1b0,local_1c0,
                     (lVar13 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,0xf000020);
        }
        else if (iVar19 < 4) {
          local_e0 = (float)dVar25;
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar32);
          uVar20 = 0x7f000000;
          mobyutil::TweenColor((float)dVar25,0x7f000000,0x7f182030);
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar32);
          uVar14 = 0;
          mobyutil::TweenColor((float)dVar25,0,0x5f5f5f);
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar32);
          dVar26 = (double)(float)(dVar25 * (double)mobyutil::g_FrameTime);
          dVar25 = (double)mobyutil::MB_randRot();
          mobyutil::MB_SphericalToVector((float)dVar26,(float)dVar21,(float)dVar25,local_1c0);
          uVar12 = mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
          iVar19 = (int)((double)animationSpeed * dVar23);
          local_f0 = (longlong)iVar19;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar31),iVar19);
          partupd::SpawnPart_16(uVar12,local_1b0,local_1c0,uVar20,uVar14);
          dVar25 = (double)local_e0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar15);
    }
    dVar27 = (double)local_f8;
    sound::PlayMobySound(0,0,moby);
    auVar34 = ZEXT416(0xffffffff);
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar5 = 0.35;
    if (dVar27 - 20.0 < 0.0) {
      fVar5 = (float)(dVar27 * 0.017500000074505806);
    }
    GameCamera.offset0.amp = 0.4 - fVar5;
    auVar36 = loadVectorLeftIndexed(0xa4,0x3eacb4);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar34);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x168,0x9513c0);
    FUN_003fda38(auStack_1a0,lVar11 + 0x10,0,0);
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar2 == '\x03') {
    fastfunc::FastDecTimerS32(ZEXT48(kv) + 100);
    fVar5 = kv[1].kickVel[2];
    if (((fVar5 != 0.0) &&
        (*(char *)((int)fVar5 + 0x20) != -3 && *(char *)((int)fVar5 + 0x20) != -2)) &&
       ((fVar1 = (moby->pos).y - *(float *)((int)fVar5 + 0x14),
        fVar5 = (moby->pos).x - *(float *)((int)fVar5 + 0x10),
        SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 3.0 && (kv[1].kickVel[1] == 0.0)))) {
      moby->state = '\x02';
      sound::PlayMobySound(2,0,moby);
    }
    local_f0 = (longlong)(int)(animationSpeed * 3600.5);
    if (((int)(animationSpeed * 3600.5) < (int)kv[1].kickVel[3]) &&
       (((kv[1].kickVel[2] == 0.0 ||
         (cVar3 = *(char *)((int)kv[1].kickVel[2] + 0x20), cVar3 == -3 || cVar3 == -2)) ||
        (local_f0 = (longlong)(int)(animationSpeed * 5400.5),
        (int)(animationSpeed * 5400.5) < (int)kv[1].kickVel[3])))) {
      moby->state = '\x05';
    }
    fVar5 = (g_heroMobyPtr->pos).y - (moby->pos).y;
    fVar1 = (g_heroMobyPtr->pos).x - (moby->pos).x;
    if ((0.5 <= SQRT(fVar1 * fVar1 + fVar5 * fVar5)) ||
       (0.25 <= ABS((moby->pos).z - g_heroPosition.z))) {
      iVar17 = collproc::CollMobySphere
                         (0x3ff0000000000000,lVar11 + 0x10,&DAT_003eacb4,0x10,lVar11,0);
      if (0 < iVar17) {
        pfVar18 = (float *)&DAT_00a14a00;
        do {
          if (((*(ushort *)((int)*pfVar18 + 0x34) & 0x1000) != 0) &&
             ((*pfVar18 != kv[1].kickVel[2] || (kv[1].kickVel[1] == 0.0)))) {
            moby->state = '\x04';
            return;
          }
          iVar15 = iVar15 + 1;
          pfVar18 = pfVar18 + 1;
        } while (iVar15 < iVar17);
      }
    }
    else {
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\x02') {
    fVar7 = kv[1].kickVel[2];
    dVar23 = (double)(moby->pos).y;
    dVar22 = (double)(moby->pos).x;
    fVar5 = (float)((double)*(float *)((int)fVar7 + 0x14) - dVar23);
    fVar1 = (float)((double)*(float *)((int)fVar7 + 0x10) - dVar22);
    fVar4 = (moby->pos).z;
    fVar7 = *(float *)((int)fVar7 + 0x18) - fVar4;
    fVar9 = SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar5 * fVar5);
    if (0.25 <= fVar9) {
      dVar24 = (double)mobyutil::g_FrameTime;
      fVar10 = (float)(dVar24 * 14.0) / fVar9;
      dVar25 = dVar27;
      if (0.0 - fVar9 < 0.0) {
        dVar25 = (double)(fVar7 * fVar10);
      }
      dVar28 = dVar27;
      if (0.0 - fVar9 < 0.0) {
        dVar28 = (double)(fVar5 * fVar10);
      }
      if (0.0 - fVar9 < 0.0) {
        dVar27 = (double)(fVar1 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar25 = (double)(fVar7 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar28 = (double)(fVar5 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar27 = (double)(fVar1 * fVar10);
      }
      (moby->pos).y = (float)(dVar23 + dVar28);
      (moby->pos).x = (float)(dVar22 + dVar27);
      (moby->pos).z = fVar4 + (float)(dVar24 * 4.0 + dVar25);
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x01') {
    uVar16 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar16 & 1) == 0) {
      fVar6 = (moby->pos).z;
      uVar16 = (int)fVar6 >> 0x1f;
      if ((int)((uVar16 >> 1 ^ (uint)fVar6) - uVar16) < 0x40a00000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x01') {
        local_f0 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
      }
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(8,0x3eacb4);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,100,
                         ZEXT48(kv));
      *(undefined4 *)((uint)(kv[1].kickVel + 1) & 0xfffffffc) = uVar8;
    }
  }
  return;
}



//==== 003eba50  ns=Global  size=0x31c
// sig: undefined FUN_003eba50(void)
// callers(1): 003cc030 mobyupdate_unsorted::UpdateMoby_578
// callees(2): 000efa28 mobyfunc::CreateMoby; 0010ad80 mobyutil::MB_StartKick

MobyInstance * FUN_003eba50(int param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  void *pvVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xc0;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar10;
  puVar7[0x1a] = in_LR;
  puVar7[0x17] = unaff_r31;
  puVar7[0x16] = unaff_r30;
  puVar7[0x14] = unaff_r28;
  puVar7[0x15] = unaff_r29;
  puVar7[0x13] = unaff_r27;
  pMVar12 = mobyfunc::CreateMoby(MINE_0273);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->drawDistance = *(short *)(param_1 + 0x32);
    uVar4 = *(undefined2 *)(param_1 + 0x32);
    pMVar12->enabled = '\x01';
    pMVar12->updateDistance = (char)uVar4;
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    pMVar12->color = (int)((ulonglong)uVar13 >> 0x20);
    pMVar12->light = (int)uVar13;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    fVar1 = DAT_0071f40c;
    pvVar5 = pMVar12->pVar;
    *(float *)((int)pvVar5 + 0x10) = DAT_0071f40c * 0.008;
    *(float *)((int)pvVar5 + 0x14) = fVar1 * 0.0005;
    *(float *)((int)pvVar5 + 0x18) = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar1 = param_3[2];
    *(undefined1 *)((int)pvVar5 + 0x3d) = 0;
    *(float *)((int)pvVar5 + 0x1c) = fVar1;
    *(undefined4 *)((int)pvVar5 + 0x24) = 1;
    *(undefined4 *)((int)pvVar5 + 0x20) = 0x400;
    *(undefined4 *)((int)pvVar5 + 0x28) = 0x3f800000;
    *(undefined4 *)((int)pvVar5 + 0x30) = 0x3f400000;
    *(undefined4 *)((int)pvVar5 + 0x34) = 0x3f000000;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0x3f266666;
    *(undefined4 *)((int)pvVar5 + 0x48) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0x3c23d70a;
    fVar1 = *param_3;
    fVar6 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    dVar20 = 0.0;
    uVar15 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar6 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar17 = uVar10 - 0xb0;
      lVar16 = uVar10 - 0x4c;
      lVar14 = uVar10 - 0x3c;
      lVar19 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x10) = fVar6;
      *(float *)(puVar7 + 0xf) = fVar6;
      *(float *)((int)puVar7 + 0x7c) = fVar6;
      *(float *)((int)puVar7 + 0x74) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar3;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar6;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar6 * fVar6;
        iVar8 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar6 * fVar6;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x4c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar14 = lVar17;
      lVar16 = lVar11;
      do {
        fVar6 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar15 = 2;
      lVar14 = 2;
      do {
        iVar8 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar9 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x74)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar1 + fVar2);
    }
    mobyutil::MB_StartKick(dVar20,pMVar12,pvVar5,uVar15,0,1,0);
    *(int *)((int)pvVar5 + 0x68) = param_1;
    *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
    pMVar12->state = '\x01';
  }
  return pMVar12;
}



//==== 003ebd6c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M628_003ebd6c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M628_003ebd6c(void)

{
  DAT_008540fc = 0x10000;
  return;
}



//==== 003ebd90  ns=mobyupdate_unsorted  size=0x23c
// sig: undefined UpdateMoby_628(MobyInstance * moby)
// callers(0): 
// callees(6): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 00105ab4 mobyutil::CollDamageMobyDirect; 004fff60 fastfunc::FastDecTimerS32

/* Moby 628 */

void mobyupdate_unsorted::UpdateMoby_628(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pfVar1 = (float *)moby->pVar;
  iVar5 = fastfunc::FastDecTimerS32(pfVar1 + 2);
  if (iVar5 == 0) {
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < *pfVar1 + 0.5) {
      mobyutil::SetCollDamIn
                (0x3ff0000000000000,&uStack_50,(longlong)(int)moby,0x10001,&DAT_003ebd80,local_60);
      mobyutil::CollDamageMobyDirect
                (g_heroMobyPtr,0xa0,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                 CONCAT44(uStack_40,uStack_3c),CONCAT44(uStack_38,uStack_34),
                 CONCAT44(uStack_30,uStack_2c),CONCAT44(uStack_28,uStack_24));
    }
    uVar4 = worldUpdateTime & 4;
    pfVar1[1] = DAT_00854174 * mobyutil::g_FrameTime + pfVar1[1];
    if (uVar4 == 0) {
      mobyutil::DamageSphereAtPos
                ((double)*pfVar1,0x3ff0000000000000,0x3ff0000000000000,pfVar1[3],
                 (longlong)(int)moby + 0x10,0,0x10000);
    }
    RegisterFuncForMoby(&PTR_M629_003ec168_0070daa8,moby);
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003ebfcc  ns=Global  size=0x90
// sig: undefined FUN_003ebfcc(void)
// callers(2): 00275240 mobyupdate_helpers::M1422_00275240; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_003ebfcc(double param_1,float param_2,f32 *param_3)

{
  f32 fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x274);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pfVar2 = (float *)pMVar3->pVar;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    fVar1 = param_3[3];
    pfVar2[2] = 4.2039e-45;
    (pMVar3->pos).w = fVar1;
    *pfVar2 = (float)param_1;
    pfVar2[3] = param_2;
  }
  return;
}



//==== 003ec060  ns=Global  size=0xcc
// sig: undefined FUN_003ec060(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

void FUN_003ec060(double param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined8 in_r0;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  pfVar2 = *(float **)(param_2 + 0x78);
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  fVar3 = pfVar2[2];
  *(undefined4 *)(param_2 + 0x14) = param_3[1];
  *(undefined4 *)(param_2 + 0x18) = param_3[2];
  uVar1 = param_3[3];
  pfVar2[2] = (float)((int)fVar3 + 2);
  iVar4 = DAT_00854170;
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  *pfVar2 = (float)param_1;
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar7 = loadVectorLeftIndexed(0x4170,0x850000);
  auVar6 = loadVectorLeftIndexed(in_r0,0x3ec05c);
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar7,0);
  auVar7 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = vectorAddFloatingPoint(auVar5,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  if ((int)(animationSpeed * ((float)(longlong)iVar4 + 0.5)) < (int)fVar3 + 2) {
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,8,ZEXT48(pfVar2));
    *(undefined4 *)((uint)(pfVar2 + 2) & 0xfffffffc) = uVar1;
  }
  return;
}



//==== 003ec168  ns=mobyupdate_helpers  size=0x5f4
// sig: undefined M629_003ec168(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00500b64 fastfunc::FastEulerToMtx; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

ulonglong mobyupdate_helpers::M629_003ec168(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  ulonglong *puVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar11;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint uVar12;
  ulonglong unaff_r23;
  undefined4 *puVar13;
  ulonglong unaff_r24;
  undefined4 *puVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar18 = uVar6 - 0x410;
  puVar4 = (ulonglong *)lVar18;
  *puVar4 = uVar6;
  puVar4[0x84] = in_LR;
  puVar4[0x75] = in_f19;
  puVar4[0x76] = in_f20;
  puVar4[0x77] = in_f21;
  puVar4[0x78] = in_f22;
  puVar4[0x79] = in_f23;
  puVar4[0x7a] = in_f24;
  puVar4[0x7b] = in_f25;
  puVar4[0x7c] = in_f26;
  puVar4[0x7d] = in_f27;
  puVar4[0x7e] = in_f28;
  puVar4[0x7f] = in_f29;
  puVar4[0x80] = in_f30;
  puVar4[0x81] = in_f31;
  puVar4[0x74] = unaff_r31;
  puVar4[0x72] = unaff_r29;
  puVar4[0x68] = unaff_r19;
  puVar4[0x73] = unaff_r30;
  puVar4[0x71] = unaff_r28;
  puVar4[0x70] = unaff_r27;
  puVar4[0x6f] = unaff_r26;
  puVar4[0x6e] = unaff_r25;
  puVar4[0x6d] = unaff_r24;
  puVar4[0x6c] = unaff_r23;
  puVar4[0x6b] = unaff_r22;
  puVar4[0x6a] = unaff_r21;
  puVar4[0x69] = unaff_r20;
  pfVar3 = *(float **)(param_1 + 0x78);
  fastfunc::FastMtx4Identity((float *)(puVar4 + 0x16));
  fVar1 = *(float *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  iVar11 = 0;
  *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  fVar5 = DAT_008541b0;
  iVar19 = 0;
  *(undefined4 *)((int)puVar4 + 0xe4) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar4 + 0xec) = uVar10;
  *(float *)(puVar4 + 0x1d) = fVar1 + fVar5;
  dVar38 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xec) = 0x3f800000;
  do {
    uVar7 = draw::GetEffectTex(0xe);
    iVar9 = (int)lVar18;
    *(undefined8 *)(iVar9 + 0x168) = uVar7;
    uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar9 + 0x170) = uVar7;
    uVar7 = FUN_00502f08(0,0,0,0,0,0);
    *(undefined8 *)(iVar9 + 0x160) = uVar7;
    uVar7 = idol_draw::PackCmd(DAT_010cbbbc,DAT_00854178,DAT_010cbbc0,DAT_0085417c,0x80);
    *(undefined8 *)(iVar9 + 0x178) = uVar7;
    puVar4[0x66] = (longlong)iVar11;
    dVar34 = 0.25;
    dVar39 = (double)(longlong)puVar4[0x66];
    dVar36 = (double)(float)(dVar39 * 0.25 + (double)pfVar3[1]);
    dVar35 = (double)(float)((double)DAT_008541b8 * dVar39 + (double)*pfVar3);
    iVar9 = fastfunc::FastDoubleToInt(dVar36);
    puVar4[0x66] = (longlong)iVar9;
    dVar37 = (double)(float)(dVar36 - (double)(longlong)puVar4[0x66]);
    uVar8 = fastfunc::FastLerpColor(dVar37,DAT_00854184,DAT_00854188);
    dVar36 = (double)(float)((double)DAT_008541c0 * dVar37);
    if (dVar38 - (double)(float)((double)DAT_008541c0 * dVar37) < 0.0) {
      dVar36 = dVar38;
    }
    uVar8 = fastfunc::FastLerpColor(dVar36,uVar8 & 0xffffff);
    dVar36 = (double)fastfunc::FastIntToDouble(pfVar3[2]);
    puVar4[0x66] = (longlong)DAT_00854170;
    dVar20 = (double)(float)(dVar36 / (double)(longlong)
                                              (animationSpeed *
                                              ((float)(longlong)puVar4[0x66] + 0.5)));
    dVar36 = dVar38;
    if ((dVar20 <= dVar38) && (dVar36 = dVar20, dVar20 < 0.0)) {
      dVar36 = 0.0;
    }
    uVar10 = fastfunc::FastLerpColor(dVar36,uVar8 & 0xffffff,uVar8);
    dVar40 = 0.01745329238474369;
    dVar36 = 3.141590118408203;
    dVar20 = 1.570796251296997;
    dVar28 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    uVar12 = 0;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    puVar13 = &DAT_00854190;
    puVar14 = &DAT_00854194;
    dVar39 = (double)((float)(dVar34 * dVar39) * 0.017453292);
    lVar15 = lVar18;
    lVar16 = lVar18;
    lVar17 = lVar18;
    do {
      uVar2 = *puVar14;
      *(undefined4 *)((int)lVar15 + 0x140) = *puVar13;
      *(undefined4 *)((int)lVar15 + 0x144) = uVar2;
      if ((uVar12 & 1) == 0) {
        fVar1 = -(float)((double)DAT_008541b4 * dVar37);
      }
      else {
        fVar1 = (float)((double)DAT_008541b4 * dVar37);
      }
      puVar4[0x66] = (longlong)((int)uVar12 >> 1);
      iVar9 = (int)lVar16;
      *(float *)(iVar9 + 0xf8) = fVar1;
      dVar21 = (double)fastfunc::FastWrapRot
                                 ((float)((double)(float)((double)DAT_0085418c * dVar40) *
                                          (double)(longlong)puVar4[0x66] - dVar36),
                                  (float)((double)DAT_0085418c * dVar39));
      dVar23 = (double)(float)(dVar21 + dVar20);
      *(undefined4 *)((int)lVar17 + 0x130) = uVar10;
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 2;
      *(undefined4 *)(iVar9 + 0xfc) = 0x3f800000;
      lVar15 = lVar15 + 8;
      puVar14 = puVar14 + 2;
      lVar17 = lVar17 + 4;
      dVar34 = (double)(float)(dVar28 - dVar21);
      if (dVar21 - (double)(float)(dVar28 - dVar21) < 0.0) {
        dVar34 = dVar21;
      }
      dVar24 = (double)(float)(dVar28 - dVar23);
      if (dVar23 - (double)(float)(dVar28 - dVar23) < 0.0) {
        dVar24 = dVar23;
      }
      dVar22 = (double)(float)(dVar29 - dVar21);
      if ((double)(float)(dVar29 - dVar21) - dVar34 < 0.0) {
        dVar22 = dVar34;
      }
      dVar34 = (double)(float)(dVar29 - dVar23);
      if ((double)(float)(dVar29 - dVar23) - dVar24 < 0.0) {
        dVar34 = dVar24;
      }
      dVar21 = (double)(float)(dVar22 * dVar22);
      dVar23 = (double)(float)(dVar34 * dVar34);
      dVar26 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
      dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar34));
      dVar25 = (double)(float)(dVar21 * dVar26);
      dVar27 = (double)(float)(dVar23 * dVar24);
      *(float *)(iVar9 + 0xf4) =
           (float)((double)(float)((double)(float)(dVar21 * dVar25) * dVar33 +
                                  (double)(float)(dVar25 * dVar32 +
                                                 (double)(float)(dVar26 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar21 * dVar22) * dVar30 + dVar22)))) * dVar35);
      *(float *)(iVar9 + 0xf0) =
           (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar33 +
                                  (double)(float)(dVar27 * dVar32 +
                                                 (double)(float)(dVar24 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar23 * dVar34) * dVar30 + dVar34)))) * dVar35);
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar12 < 4);
    iVar11 = iVar11 + 1;
    lVar18 = lVar18 + 0x90;
  } while (iVar11 < 4);
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(float *)(puVar4 + 0xf) = (float)((double)DAT_0085418c * dVar40);
  fastfunc::FastEulerToMtx(uVar6 - 0x390,uVar6 - 0x3a0);
  auVar42 = ZEXT416(0xffffffff);
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar46 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar48 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar41 = loadVectorLeftIndexed(0x418c,0x850000);
  auVar42 = loadVectorLeftIndexed(0x38,0x3ec12c);
  auVar44 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  uVar8 = 0x34;
  auVar42 = ZEXT416(0);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar46,auVar45);
  auVar46 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar44 = ZEXT416(0xffffffff);
  auVar48 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = loadVectorLeftIndexed(0x34,0x3ec12c);
  auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  dVar38 = 360.0;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar49,auVar47);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar46);
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar48
                      );
  auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
             auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    do {
      lVar18 = uVar6 - 0x360;
      draw::FastDrawQuad(uVar6 - 800,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x290,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x200,lVar18,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar6 - 0x170,lVar18,0,EffectTexHeaders,9);
      fastfunc::FastVecMtx4MultBatch3(lVar18,lVar18,uVar6 - 0x390);
      dVar36 = (double)DAT_0085418c;
      iVar19 = iVar19 + 1;
      uVar8 = (ulonglong)iVar19;
      puVar4[0x66] = uVar8;
    } while ((float)(longlong)puVar4[0x66] < (float)(dVar38 / dVar36));
  }
  return uVar8;
}



//==== 003ec75c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M629_003ec75c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M629_003ec75c(void)

{
  DAT_00854214 = 0x10000;
  return;
}



//==== 003ec770  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_629(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 629 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_629(MobyInstance *moby)

{
  return moby;
}



//==== 003ec774  ns=mobyupdate_helpers  size=0x14
// sig: undefined M629_003ec774(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M629_003ec774(void)

{
  DAT_00854284 = 0x10000;
  return;
}



//==== 003ec788  ns=mobyupdate_helpers  size=0x50
// sig: undefined M63_003ec788(void)
// callers(1): 003eca78 mobyupdate_unsorted::UpdateMoby_63
// callees(0): 

longlong mobyupdate_helpers::M63_003ec788(int param_1,int param_2,int param_3)

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



//==== 003ec7e0  ns=mobyupdate_helpers  size=0x98
// sig: undefined M63_003ec7e0(void)
// callers(1): 003eca78 mobyupdate_unsorted::UpdateMoby_63
// callees(2): 0011e6ec partproc::DeletePart; 00133280 partupd::SpawnPart_68

void mobyupdate_helpers::M63_003ec7e0
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (*(int *)(param_2 + 0x228) != 0) {
      partproc::DeletePart();
      *(undefined4 *)(param_2 + 0x228) = 0;
    }
  }
  else if (*(int *)(param_2 + 0x228) == 0) {
    uVar1 = partupd::SpawnPart_68
                      (0x3fc99999a0000000,0x3fc99999a0000000,0x3fe99999a0000000,param_1,0,param_3,
                       0xffffffff80808080,param_5,0x10808080,param_7,0x19);
    *(undefined4 *)(param_2 + 0x228) = uVar1;
  }
  return;
}



//==== 003ec878  ns=mobyupdate_helpers  size=0x44
// sig: undefined M63_003ec878(void)
// callers(1): 003eca78 mobyupdate_unsorted::UpdateMoby_63
// callees(1): 0011e6ec partproc::DeletePart

void mobyupdate_helpers::M63_003ec878(int param_1)

{
  if (*(int *)(param_1 + 0x228) != 0) {
    partproc::DeletePart();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}



//==== 003ec8c8  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M63_003ec8c8(void)
// callers(1): 003eca78 mobyupdate_unsorted::UpdateMoby_63
// callees(1): 000ffb70 mobyutil::GetGroundZ

void mobyupdate_helpers::M63_003ec8c8(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar4 = (double)*(float *)(param_1 + 0x18);
  if ((double)(float)(dVar4 + 0.30000001192092896) <= dVar3) {
    if (dVar3 <= dVar4) {
      puVar2 = (undefined4 *)(param_2 + 0x120U & 0xfffffff0);
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    else {
      *(float *)(param_1 + 0x18) = (float)((double)DAT_0071f418 * 9.800000190734863 + dVar4);
      puVar2 = (undefined4 *)(param_2 + 0x120U & 0xfffffff0);
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
  }
  else {
    dVar5 = -(double)(DAT_0071f418 * 9.8 - *(float *)(param_2 + 0x128));
    fVar1 = (float)(dVar4 + dVar5);
    *(float *)(param_2 + 0x128) = (float)dVar5;
    *(float *)(param_1 + 0x18) = fVar1;
    if ((double)fVar1 < dVar3) {
      *(float *)(param_1 + 0x18) = (float)dVar3;
    }
  }
  return;
}



//==== 003eca78  ns=mobyupdate_unsorted  size=0x301c
// sig: undefined UpdateMoby_63(MobyInstance * moby)
// callers(0): 
// callees(59): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 001009b0 mobyutil::MB_MoveAndCollide; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 001367d0 path::PathFindClosestPnt; 001385d0 path::Path_PickNextNode; 003ec788 mobyupdate_helpers::M63_003ec788; 003ec7e0 mobyupdate_helpers::M63_003ec7e0; 003ec878 mobyupdate_helpers::M63_003ec878; 003ec8c8 mobyupdate_helpers::M63_003ec8c8; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32

/* Moby 63 */

void mobyupdate_unsorted::UpdateMoby_63(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  float fVar4;
  short sVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar14;
  undefined2 uVar18;
  short sVar19;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar17;
  longlong lVar20;
  vec4 *pvVar21;
  longlong lVar22;
  MobyInstance *pMVar24;
  longlong lVar23;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  f32 local_2a0;
  f32 local_29c;
  undefined1 auStack_290 [16];
  undefined1 local_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 local_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  Vec4 local_1e0;
  undefined1 auStack_1d0 [16];
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  float afStack_1b0 [2];
  float local_1a8;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  Vec4 local_190;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  undefined1 auStack_140 [16];
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined1 auStack_120 [8];
  float local_118;
  Vec4 local_110 [4];
  MobyInstance *local_d0;
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  float local_b8;
  float local_b4 [3];
  longlong local_a8;
  
  lVar11 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar6 + 0x230));
  if ((moby->enabled != '\0') &&
     (dVar26 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar26 < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x16';
  }
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
            ((double)(*(float *)((int)pvVar6 + 0x1fc) + 4.0),lVar11,&DAT_003ec9bc,local_110);
  pMVar24 = local_d0;
  if ((local_d0 == (MobyInstance *)0x0) ||
     (((*(short *)((int)pvVar6 + 0x214) == 0 && (*(int *)((int)pvVar6 + 0x22c) != -1)) &&
      (iVar14 = mobyutil::MB_IsPntInCuboid(local_110,(longlong)*(int *)((int)pvVar6 + 0x22c)),
      iVar14 == 0)))) {
    pMVar24 = (MobyInstance *)0x0;
    local_d0 = (MobyInstance *)0x0;
    local_110[0].w = 0.0;
    local_110[0].z = 0.0;
    local_110[0].y = 0.0;
    local_110[0].x = 0.0;
  }
  lVar22 = lVar11 + 0x10;
  FUN_005e7e98(&local_2a0,lVar22);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    uVar18 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar6 + 0x214) = uVar18;
  }
  *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar25 + 0x208);
  if (moby->state != '\0') {
    iVar14 = fastfunc::FastDecTimerS16(uVar25 + 0x214);
    if (iVar14 == 0) {
      uVar16 = *(undefined4 *)((int)pvVar6 + 0x200);
    }
    else {
      uVar16 = *(undefined4 *)((int)pvVar6 + 0x1dc);
    }
    *(undefined4 *)((int)pvVar6 + 0x1fc) = uVar16;
  }
  dVar30 = 0.0;
  local_bc = 0;
  iVar14 = mobyutil::MB_damage(lVar11,0x330000,0);
  iVar17 = 0;
  mobyutil::MB_HandleDamage(moby,iVar14,uVar25 + 0x20,0,auStack_c0,&local_bc,0,4);
  fastfunc::FastDecTimerS16(uVar25 + 0x26);
  sVar5 = *(short *)((int)pvVar6 + 0x26);
  sVar19 = idol::GetAnimDuration(0x2d);
  if (((sVar5 < sVar19) && (iVar14 != 0)) && (moby->state != 'c')) {
    sVar5 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
    if (((sVar5 == 0xb0) || (sVar5 == 0xb1)) && (*(short *)((int)pvVar6 + 0x26) != 0)) {
      *(undefined4 *)(iVar14 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar14 + 0x2c) != 0) {
      dVar27 = (double)FUN_005e8338((double)((moby->pos).x - local_110[0].x),
                                    (double)((moby->pos).y - local_110[0].y));
      local_b8 = (float)dVar27;
      *(undefined4 *)((int)pvVar6 + 0x140) = 0x202;
      *(undefined4 *)((int)pvVar6 + 0x148) = 0x3f000000;
      fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)(iVar14 + 0x2c);
      *(undefined4 *)((int)pvVar6 + 0x130) = 0x3bb43958;
      *(undefined4 *)((int)pvVar6 + 0x134) = 0x3a902de0;
      *(float *)((int)pvVar6 + 0x20) = fVar4;
      fVar10 = DAT_008542ac;
      fVar9 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar6 + 0x144) = 9;
      *(float *)((int)pvVar6 + 0x138) = fVar10 * fVar9;
      fVar10 = DAT_008542a8;
      *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
      *(float *)((int)pvVar6 + 0x13c) = fVar10 * fVar9;
      fVar9 = mobyutil::g_FrameTime;
      if (dVar30 < (double)fVar4) {
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_b8,
                   uVar25 + 0x138,uVar25 + 0x13c);
        dVar27 = (double)local_b8;
        rand();
        mobyutil::MB_StartKick(dVar27,lVar11,uVar25 + 0x120);
        iVar17 = 6;
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41200000;
        moby->state = '\x06';
        mobyupdate_helpers::M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        uVar18 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar6 + 0x26) = uVar18;
        mobyutil::MB_UpdateLightsTransition(lVar11,uVar25 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x138) = fVar9 * 10.0;
        *(float *)((int)pvVar6 + 0x13c) = fVar9 * 5.5;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_b8,
                   uVar25 + 0x138,uVar25 + 0x13c);
        dVar27 = (double)local_b8;
        rand();
        mobyutil::MB_StartKick(dVar27,lVar11,uVar25 + 0x120);
        iVar17 = 99;
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41900000;
        moby->state = 'c';
        mobyupdate_helpers::M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar11,uVar25 + 0x110);
        if (dVar26 <= ABS((double)(g_heroPosition.z - 248.0))) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        }
        else {
          mobyutil::MB_SpawnBoltsFromCrate(lVar11,0x200,0xffffffffffffffff);
        }
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar25 + 0x1d0,lVar22);
        *(undefined4 *)((int)pvVar6 + 0x1dc) = *(undefined4 *)((int)pvVar6 + 0x1fc);
        if (*(short *)((int)pvVar6 + 0x20a) == 0) {
          fVar4 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar4 + 6.0;
          if (uVar2 != '\0') {
            mobyutil::MB_SetAnimation(lVar11,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(lVar11,3,0,0);
          }
        }
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 1;
        *(undefined2 *)((int)pvVar6 + 0x214) = 0;
        *(undefined2 *)((int)pvVar6 + 0x208) = 0;
        *(undefined1 *)((int)pvVar6 + 0x58) = 8;
        *(undefined1 *)((int)pvVar6 + 0x5a) = 4;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0x180));
        *(undefined4 *)((int)pvVar6 + 0x18c) = 0x40000000;
        *(undefined4 *)((int)pvVar6 + 0x188) = 0x40000000;
        fVar4 = *(float *)((int)pvVar6 + 0x204) * mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0x180) = 0x38d;
        *(uint *)((int)pvVar6 + 0x1b8) = *(uint *)((int)pvVar6 + 0x1b8) | 0x30;
        *(float *)((int)pvVar6 + 0x1a4) = fVar4;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar6 + 0xd0) = &DAT_008542b8;
        if (*(int *)((int)pvVar6 + 0x220) != -1) {
          iVar14 = path::PathFindClosestPnt
                             ((float)dVar30,(Vec4 *)lVar22,Splines[*(int *)((int)pvVar6 + 0x220)]);
          *(int *)((int)pvVar6 + 0x224) = iVar14;
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_230,local_110,lVar22);
        dVar30 = (double)FUN_005e8030(auStack_230);
        if ((((double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar30) ||
            (8.0 <= ABS((moby->pos).z - local_110[0].z))) ||
           (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = mobyutil::MB_randInt(0x13), iVar14 == 0)) {
            uVar12 = mobyutil::MB_randInt(0x100);
            fVar4 = *(float *)((int)pvVar6 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar4 = -fVar4;
              *(float *)((int)pvVar6 + 0x1f8) = fVar4;
            }
            *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_a8 = (longlong)(int)dVar26;
            uVar18 = idol::GetAnimDuration((int)dVar26);
            *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_230);
            if (((double)(*(float *)((int)pvVar6 + 0x1fc) + 6.0) < dVar26) &&
               (*(short *)((int)pvVar6 + 0x20a) == 0)) {
              *(undefined1 *)((int)pvVar6 + 0x40) = 0;
              *(undefined1 *)((int)pvVar6 + 0x41) = 0;
              *(undefined1 *)((int)pvVar6 + 0x42) = 0;
              *(undefined1 *)((int)pvVar6 + 0x43) = 0;
              *(undefined1 *)((int)pvVar6 + 0x44) = 0;
              *(undefined1 *)((int)pvVar6 + 0x45) = 0;
              *(undefined1 *)((int)pvVar6 + 0x46) = 0;
              *(undefined1 *)((int)pvVar6 + 0x47) = 0;
              *(undefined1 *)((int)pvVar6 + 0x48) = 0;
              *(undefined1 *)((int)pvVar6 + 0x49) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
              moby->state = '\x10';
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
              }
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x04') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,4,0,uVar13);
          }
        }
        mobyupdate_helpers::M63_003ec8c8(lVar11,uVar25);
      }
      else if (bVar1 < 3) {
        uVar13 = FUN_005e8338((double)((moby->pos).x - local_110[0].x),
                              (double)((moby->pos).y - local_110[0].y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar13,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11,
                   &DAT_003ec9bc,uVar25 + 0x1f0);
        FUN_005e81f0(auStack_200,local_110,lVar22);
        dVar26 = (double)FUN_005e8030(auStack_200);
        if ((((double)*(float *)((int)pvVar6 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_110[0].z))) ||
           (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = mobyutil::MB_randInt(0x13), iVar14 == 0)) {
            uVar12 = mobyutil::MB_randInt(0x100);
            fVar4 = *(float *)((int)pvVar6 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar4 = -fVar4;
              *(float *)((int)pvVar6 + 0x1f8) = fVar4;
            }
            *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_a8 = (longlong)(int)dVar26;
            uVar18 = idol::GetAnimDuration((int)dVar26);
            *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar12 = mobyutil::MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          moby->state = '\x03';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x03')) {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,3,0,uVar13);
        }
        mobyupdate_helpers::M63_003ec8c8(lVar11,uVar25);
      }
      else {
        dVar27 = ABS((double)((moby->pos).z - local_110[0].z));
        dVar30 = (double)FUN_005e8588(lVar22,local_110);
        dVar30 = (double)(float)(dVar27 / dVar30);
        if (*(int *)((int)pvVar6 + 0x21c) == -1) {
          FUN_005e7e98(&local_1e0,local_110);
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)local_110,&local_1e0);
        }
        dVar27 = (double)FUN_005e8338((double)(local_1e0.x - (moby->pos).x),
                                      (double)(local_1e0.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar27 + (double)*(float *)((int)pvVar6 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        dVar27 = (double)mathfunc::cosf((moby->rotation).z);
        dVar29 = 2.0;
        local_1f0 = (float)(dVar27 * 2.0);
        dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1ec = (float)(dVar27 * dVar29);
        local_1e8 = 0;
        dVar27 = 1.0;
        uVar12 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_1f0
                            ,&local_1e0);
        iVar14 = fastfunc::FastDecTimerS16(uVar25 + 0x210);
        if (iVar14 != 0) {
          dVar29 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar29;
          uVar18 = idol::GetAnimDuration((int)dVar29);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          *(float *)((int)pvVar6 + 500) = -*(float *)((int)pvVar6 + 500);
        }
        FUN_005e81f0(auStack_1d0,local_110,uVar25 + 0x1d0);
        dVar29 = (double)FUN_005e8588(lVar22,local_110);
        if (((1.5 <= dVar29) &&
            (((local_d0 == (MobyInstance *)0x0 || (local_d0->oClass != MORPH_O_RAY_CHICKEN)) ||
             ((local_d0->state == 0xfd || local_d0->state == 0xfe || (2.299999952316284 <= dVar29)))
             ))) || ((uVar12 & 2) != 0)) {
          if ((dVar27 < dVar30) || ((uVar12 & 2) != 0)) {
            (moby->pos).x = local_2a0;
            (moby->pos).y = local_29c;
          }
          dVar30 = (double)FUN_005e8030(auStack_1d0);
          if (((double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar30) ||
             (8.0 <= ABS((moby->pos).z - local_110[0].z))) {
            if (moby->setByGroup != '\x01') {
              moby->state = '\x05';
            }
          }
          else if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x06') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,6,0,uVar13);
          }
        }
        moby->setByGroup = '\0';
        mobyupdate_helpers::M63_003ec8c8(lVar11,uVar25);
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar13 = FUN_005e8338((double)(local_110[0].x - (moby->pos).x),
                              (double)(local_110[0].y - (moby->pos).y));
        dVar29 = 0.20000000298023224;
        mobyutil::OrganicDeltAngSpeed
                  (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                   &DAT_003ec9bc,uVar25 + 0x1f0);
        uVar2 = moby->updateId;
        uVar3 = moby->animationId;
        dVar26 = (double)mobyfunc::BlendAnimFrame(moby);
        dVar31 = ABS((double)((moby->pos).z - local_110[0].z));
        dVar30 = (double)FUN_005e8588(lVar22,local_110);
        dVar27 = (double)FUN_005e8338((double)(local_110[0].x - (moby->pos).x),
                                      (double)(local_110[0].y - (moby->pos).y));
        dVar27 = (double)fastfunc::FastSubRots((float)dVar27,(moby->rotation).z);
        if ((((uVar2 == uVar3) && (ABS((double)(float)(dVar26 - 13.0)) < dVar29)) && (dVar31 < 1.5))
           && (((dVar30 < 2.0 ||
                ((((local_d0 != (MobyInstance *)0x0 && (local_d0->oClass == MORPH_O_RAY_CHICKEN)) &&
                  (local_d0->state != 0xfd && local_d0->state != 0xfe)) &&
                 (dVar30 < 2.5999999046325684)))) && (dVar27 < 0.2617993950843811)))) {
          dVar26 = (double)mathfunc::cosf((moby->rotation).z);
          local_1c0 = (float)(dVar26 * dVar29);
          dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_1bc = (float)(dVar26 * dVar29);
          local_1b8 = 0;
          FUN_005e7e98(afStack_1b0,local_110);
          local_1a8 = local_1a8 + 0.75;
          if (pMVar24 != (MobyInstance *)0x0) {
            mobyutil::CollDamageMobyDirect(1.0,pMVar24,moby,1,iVar17,afStack_1b0,&local_1c0);
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar26 = (double)FUN_005e8588(lVar22,local_110), 1.5 < dVar26)) &&
           (moby->state = '\x03', moby->animationId != '\x05')) {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
        }
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        fVar4 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar6 + 0x198));
        *(float *)((int)pvVar6 + 0x198) = fVar4;
        fVar4 = (moby->pos).z + fVar4;
        (moby->pos).z = fVar4;
        if ((double)fVar4 < dVar26) {
          *(undefined4 *)((int)pvVar6 + 0x198) = 0;
          (moby->pos).z = (float)dVar26;
        }
        mobyupdate_helpers::M63_003ec8c8(lVar11,uVar25);
      }
      else if (bVar1 < 6) {
        if (*(int *)((int)pvVar6 + 0x21c) == -1) {
          FUN_005e7e98(&local_190,uVar25 + 0x1d0);
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)((int)pvVar6 + 0x1d0),
                     &local_190);
        }
        uVar13 = FUN_005e8338((double)(local_190.x - (moby->pos).x),
                              (double)(local_190.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar13,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11);
        dVar26 = (double)mathfunc::cosf((moby->rotation).z);
        dVar30 = 2.0;
        local_1a0 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_19c = (float)(dVar26 * dVar30);
        local_198 = 0;
        uVar12 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_1a0
                            ,&local_190);
        dVar26 = (double)FUN_005e8588(lVar22,uVar25 + 0x1d0);
        if ((dVar26 < dVar30) && (moby->state = '\x01', moby->animationId != '\x03')) {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,3,0,uVar13);
        }
        FUN_005e81f0(auStack_180,local_110,uVar25 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_180);
        if ((double)*(float *)((int)pvVar6 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
            }
          }
          else if ((uVar12 & 2) != 0) {
            (moby->pos).x = local_2a0;
            uVar2 = moby->animationId;
            (moby->pos).y = local_29c;
            moby->state = '\f';
            if (uVar2 != '\x04') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,4,0,uVar13);
            }
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
        mobyupdate_helpers::M63_003ec8c8(lVar11,uVar25);
        moby->setByGroup = '\0';
      }
      else {
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
        if ((uVar15 & 1) != 0) {
          *(undefined1 *)((int)pvVar6 + 0x120) = 0;
          *(undefined1 *)((int)pvVar6 + 0x121) = 0;
          *(undefined1 *)((int)pvVar6 + 0x122) = 0;
          *(undefined1 *)((int)pvVar6 + 0x123) = 0;
          *(undefined1 *)((int)pvVar6 + 0x124) = 0;
          *(undefined1 *)((int)pvVar6 + 0x125) = 0;
          *(undefined1 *)((int)pvVar6 + 0x126) = 0;
          *(undefined1 *)((int)pvVar6 + 0x127) = 0;
          *(undefined1 *)((int)pvVar6 + 0x128) = 0;
          *(undefined1 *)((int)pvVar6 + 0x129) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12a) = 0;
          *(undefined1 *)((int)pvVar6 + 299) = 0;
          *(undefined1 *)((int)pvVar6 + 300) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12d) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12e) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12f) = 0;
          moby->state = '\x03';
          if (moby->animationId == '\x05') {
            return;
          }
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
          return;
        }
        fVar7 = (moby->pos).z;
        uVar15 = (int)fVar7 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar7) - uVar15) < 0x40a00000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      mobyupdate_helpers::M63_003ec878(uVar25);
      iVar14 = FUN_0048c188(lVar11,uVar25 + 0x120);
      if (iVar14 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar11,0,0,0);
        }
        *(undefined2 *)((int)pvVar6 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_220,local_110,lVar22);
      dVar30 = (double)FUN_005e8030(auStack_220);
      if (((dVar30 < (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) - dVar26)) &&
          (ABS((moby->pos).z - local_110[0].z) < 8.0)) &&
         (iVar14 = mobyutil::MB_randInt(0x13), iVar14 == 0)) {
        fVar4 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar4 + 1.0;
        if (uVar2 != '\x04') {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,4,0,uVar13);
        }
      }
    }
    goto LAB_003ef8b8;
  }
  if (0xf < bVar1) {
    if (bVar1 < 0x13) {
      if (bVar1 < 0x11) {
        uVar13 = 0x3fe0000000000000;
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        if (3.0 <= (float)((double)(moby->pos).z - dVar26)) {
          mobyutil::Delt(mobyutil::g_FrameTime,DAT_0071f418 * 10.8,(float *)((int)pvVar6 + 0x48));
        }
        else {
          mobyutil::Delt(mobyutil::g_FrameTime * 8.0,DAT_0071f418 * 10.8,
                         (float *)((int)pvVar6 + 0x48));
        }
        mobyutil::MB_MoveAndCollide(0x3fe3333340000000,uVar13,dVar30,lVar11,uVar25 + 0x40);
        dVar30 = (double)(moby->pos).z;
        moby->unk58 = -((float)(dVar30 - dVar26) * 0.16666667 * 5.0 - 6.0);
        if ((double)(float)(dVar26 + 6.0) <= dVar30) {
          uVar2 = moby->animationId;
          (moby->pos).z = (float)(dVar26 + 6.0);
          if (uVar2 != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
          }
          moby->state = '\x0e';
          FUN_005e7e70(uVar25 + 0x40);
        }
        mobyupdate_helpers::M63_003ec7e0(lVar11,uVar25);
      }
      else if (bVar1 < 0x12) {
        uVar13 = 0x3fe0000000000000;
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        mobyutil::Delt(mobyutil::g_FrameTime * -8.0,DAT_0071f418 * 10.8,
                       (float *)((int)pvVar6 + 0x48));
        mobyutil::MB_MoveAndCollide(0x3fe3333340000000,uVar13,dVar30,lVar11,uVar25 + 0x40);
        if (((moby->animationId != '\x02') &&
            ((float)((double)(moby->pos).z - dVar26) <=
             mobyutil::g_FrameTime * 8.0 * animationSpeed * 45.0)) && (moby->animationId != '\x02'))
        {
          uVar13 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar11,2,0,uVar13);
        }
        if ((double)(moby->pos).z <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar12 = mobyutil::MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          moby->state = '\x03';
          FUN_005e7e70(uVar25 + 0x40);
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
      }
      else {
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x220)];
        uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar6 + 0x1e4) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar13,0x3f926e9780000000,0x3fe99999a0000000,0x3fb70a3d80000000,lVar11);
        lVar23 = uVar25 + 0x1e0;
        lVar20 = uVar25 + 0x40;
        FUN_005e81f0(lVar20,lVar23,lVar22);
        mobyutil::ClampVec3Magnitude
                  ((double)(float)((double)mobyutil::g_FrameTime * dVar26),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_260,lVar20,lVar22);
        dVar27 = (double)FUN_005e8030(lVar20);
        dVar29 = 1.0;
        moby->unk58 = (float)(dVar27 * 20.0 + 1.0);
        iVar14 = collproc::CollSphere(0x3ff3333340000000,auStack_260);
        if (iVar14 == 0) {
          FUN_005e7e98(lVar22,auStack_260);
        }
        else {
          uVar16 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar6 + 0x20c) = uVar16;
          iVar14 = 0;
          dVar28 = 3.0;
          dVar31 = 5.0;
          dVar27 = 7.0;
          uVar13 = 0x3fe0000000000000;
          do {
            mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar28);
            dVar32 = (double)mobyutil::MB_randRot();
            mathfunc::cosf((float)dVar32);
            FUN_005e8128(dVar32);
            mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar27);
            FUN_005e7f54(lVar23,local_250,uVar25 + 0x1d0);
            dVar32 = (double)mobyutil::GetGroundZ(uVar13,lVar23,0x120);
            if (dVar29 < dVar32) break;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 10);
          if (moby->animationId != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
          }
          moby->state = '\x0f';
        }
        dVar30 = (double)FUN_005e8548(lVar22,lVar23);
        dVar27 = (double)FUN_005e8030(lVar20);
        if (dVar30 < dVar27) {
          iVar14 = *(int *)((int)pvVar6 + 0x224) + 1;
          *(int *)((int)pvVar6 + 0x224) = iVar14;
          if (pSVar8->cnt <= iVar14) {
            iVar14 = 0;
            *(undefined4 *)((int)pvVar6 + 0x224) = 0;
          }
          FUN_005e7e98(lVar23,pSVar8->points + iVar14);
          dVar30 = (double)mobyutil::MB_randRangeFloat(-0.2,0.2);
          *(float *)((int)pvVar6 + 0x1e8) =
               (float)((double)*(float *)((int)pvVar6 + 0x1e8) + dVar30);
          dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
          if (((dVar30 <= dVar29) ||
              (dVar27 = (double)FUN_005e7ebc(auStack_240),
              (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar27)) ||
             ((10.0 <= ABS((moby->pos).z - local_110[0].z) ||
              (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)))) {
            if (((dVar29 < dVar30) && (moby->setByGroup == '\x01')) &&
               (iVar14 = mobyutil::MB_randInt(4), iVar14 == 0)) {
              uVar12 = mobyutil::MB_randInt(0x100);
              fVar4 = *(float *)((int)pvVar6 + 0x1f8);
              if ((uVar12 & 1) != 0) {
                fVar4 = -fVar4;
                *(float *)((int)pvVar6 + 0x1f8) = fVar4;
              }
              *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
              dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
              local_a8 = (longlong)(int)dVar26;
              uVar18 = idol::GetAnimDuration((int)dVar26);
              *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
              }
              mobyupdate_helpers::M63_003ec878(uVar25);
              *(undefined1 *)((int)pvVar6 + 0x40) = 0;
              *(undefined1 *)((int)pvVar6 + 0x41) = 0;
              *(undefined1 *)((int)pvVar6 + 0x42) = 0;
              *(undefined1 *)((int)pvVar6 + 0x43) = 0;
              *(undefined1 *)((int)pvVar6 + 0x44) = 0;
              *(undefined1 *)((int)pvVar6 + 0x45) = 0;
              *(undefined1 *)((int)pvVar6 + 0x46) = 0;
              *(undefined1 *)((int)pvVar6 + 0x47) = 0;
              *(undefined1 *)((int)pvVar6 + 0x48) = 0;
              *(undefined1 *)((int)pvVar6 + 0x49) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
              moby->state = '\x11';
              FUN_005e7e70(lVar20);
              moby->setByGroup = '\0';
            }
          }
          else {
            if (moby->animationId != '\0') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
            }
            *(undefined1 *)((int)pvVar6 + 0x40) = 0;
            *(undefined1 *)((int)pvVar6 + 0x41) = 0;
            *(undefined1 *)((int)pvVar6 + 0x42) = 0;
            *(undefined1 *)((int)pvVar6 + 0x43) = 0;
            *(undefined1 *)((int)pvVar6 + 0x44) = 0;
            *(undefined1 *)((int)pvVar6 + 0x45) = 0;
            *(undefined1 *)((int)pvVar6 + 0x46) = 0;
            *(undefined1 *)((int)pvVar6 + 0x47) = 0;
            *(undefined1 *)((int)pvVar6 + 0x48) = 0;
            *(undefined1 *)((int)pvVar6 + 0x49) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
            moby->state = '\x11';
            mobyupdate_helpers::M63_003ec878(uVar25);
          }
        }
        mobyupdate_helpers::M63_003ec7e0(lVar11,uVar25);
      }
    }
    else if (bVar1 == 99) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
      if ((uVar15 & 0x140) != 0) {
        FUN_005e7e70(auStack_170);
        iVar14 = idol::GetAnimDuration(1);
        local_a8 = (longlong)(int)((float)(longlong)iVar14 * 60.0);
        iVar14 = mobyupdate_helpers::M63_003ec788
                           (&DAT_010cbbc4,3,(int)((float)(longlong)iVar14 * 60.0));
        if (-1 < iVar14) {
          mobyutil::MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar11,lVar22,&DAT_003ec9bc,4);
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003ef8b8;
  }
  if (bVar1 < 0xd) {
    if (bVar1 < 0xb) {
      uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar6 + 0x1d4) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                 &DAT_003ec9bc,uVar25 + 0x1f0);
      FUN_005e81f0(auStack_210,local_110,uVar25 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_210);
      if (((dVar26 < (double)*(float *)((int)pvVar6 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar6 + 0x1d8) - local_110[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,2);
        }
        bVar1 = moby->animationId;
        uVar15 = rand();
        if ((uint)bVar1 != (uVar15 & 1) + 9) {
          uVar15 = rand();
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,(uVar15 & 1) + 9,0,uVar13);
        }
        fVar4 = DAT_008542b4;
        dVar26 = (double)DAT_008542b4;
        *(undefined4 *)((int)pvVar6 + 0x134) = 0;
        *(float *)((int)pvVar6 + 0x130) = fVar4;
        fVar4 = DAT_008542b0 * mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x138) = fVar4;
        dVar26 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar4,-dVar26,lVar22,uVar25 + 0x1d0);
        *(float *)((int)pvVar6 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
        dVar26 = (double)(moby->rotation).z;
        *(undefined4 *)((int)pvVar6 + 0x144) = 0xd;
        rand();
        mobyutil::MB_StartKick(dVar26,lVar11,uVar25 + 0x120);
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41200000;
        mobyupdate_helpers::M63_003ec7e0(lVar11,uVar25);
        moby->state = '\v';
      }
    }
    else if (bVar1 < 0xc) {
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
      if ((uVar15 & 1) != 0) {
        mobyupdate_helpers::M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x120) = 0;
        *(undefined1 *)((int)pvVar6 + 0x121) = 0;
        *(undefined1 *)((int)pvVar6 + 0x122) = 0;
        *(undefined1 *)((int)pvVar6 + 0x123) = 0;
        *(undefined1 *)((int)pvVar6 + 0x124) = 0;
        *(undefined1 *)((int)pvVar6 + 0x125) = 0;
        *(undefined1 *)((int)pvVar6 + 0x126) = 0;
        *(undefined1 *)((int)pvVar6 + 0x127) = 0;
        *(undefined1 *)((int)pvVar6 + 0x128) = 0;
        *(undefined1 *)((int)pvVar6 + 0x129) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12a) = 0;
        *(undefined1 *)((int)pvVar6 + 299) = 0;
        *(undefined1 *)((int)pvVar6 + 300) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12d) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12e) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12f) = 0;
        moby->state = '\x03';
        uVar25 = mobyutil::MB_randInt(0x100);
        fVar4 = *(float *)((int)pvVar6 + 0x1f8);
        if ((uVar25 & 1) != 0) {
          fVar4 = -fVar4;
          *(float *)((int)pvVar6 + 0x1f8) = fVar4;
        }
        *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
        dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_a8 = (longlong)(int)dVar26;
        uVar18 = idol::GetAnimDuration((int)dVar26);
        *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
        if (moby->animationId == '\x05') {
          return;
        }
        uVar13 = idol::GetAnimDuration(3);
        mobyutil::MB_SetAnimation(lVar11,5,8,uVar13);
        return;
      }
      fVar7 = (moby->pos).z;
      uVar15 = (int)fVar7 >> 0x1f;
      if ((int)((uVar15 >> 1 ^ (uint)fVar7) - uVar15) < 0x40a00000) {
        mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      dVar30 = ABS((double)((moby->pos).z - local_110[0].z));
      dVar26 = (double)FUN_005e8588(lVar22,local_110);
      dVar26 = (double)(float)(dVar30 / dVar26);
      if (*(int *)((int)pvVar6 + 0x21c) == -1) {
        FUN_005e7e98(&local_150,uVar25 + 0x1d0);
      }
      else {
        path::Path_PickNextNode
                  (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)((int)pvVar6 + 0x1d0),
                   &local_150);
      }
      uVar13 = FUN_005e8338((double)(local_150.x - (moby->pos).x),
                            (double)(local_150.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
      dVar30 = (double)mathfunc::cosf((moby->rotation).z);
      dVar27 = 2.0;
      local_160 = (float)(dVar30 * 2.0);
      dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_15c = (float)(dVar30 * dVar27);
      local_158 = 0;
      dVar27 = 1.0;
      uVar15 = mobyutil::MB_UpdateNavMove
                         (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_160,
                          &local_150);
      FUN_005e81f0(auStack_140,local_110,uVar25 + 0x1d0);
      dVar30 = (double)FUN_005e8588(lVar22,local_110);
      if ((1.5 <= dVar30) || (dVar27 < dVar26)) {
        if ((dVar27 < dVar26) || ((uVar15 & 2) != 0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            mobyutil::MB_randInt(4);
            iVar14 = mobyutil::MB_randInt(4);
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,((LZCOUNT(-iVar14) << 0x3a) >> 0x3f & 1U) + 3,0,uVar13)
            ;
          }
          iVar14 = mobyutil::MB_randInt(99);
          if (iVar14 == 0) {
            *(undefined1 *)((int)pvVar6 + 0x40) = 0;
            *(undefined1 *)((int)pvVar6 + 0x41) = 0;
            *(undefined1 *)((int)pvVar6 + 0x42) = 0;
            *(undefined1 *)((int)pvVar6 + 0x43) = 0;
            *(undefined1 *)((int)pvVar6 + 0x44) = 0;
            *(undefined1 *)((int)pvVar6 + 0x45) = 0;
            *(undefined1 *)((int)pvVar6 + 0x46) = 0;
            *(undefined1 *)((int)pvVar6 + 0x47) = 0;
            *(undefined1 *)((int)pvVar6 + 0x48) = 0;
            *(undefined1 *)((int)pvVar6 + 0x49) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
            moby->state = '\x10';
            if (moby->animationId != '\0') {
              uVar13 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
            }
          }
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x06') {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,6,0,uVar13);
        }
      }
      moby->setByGroup = '\0';
    }
    goto LAB_003ef8b8;
  }
  if (0xd < bVar1) {
    if (bVar1 < 0xf) {
      mobyupdate_helpers::M63_003ec7e0(lVar11,uVar25);
      FUN_005e81f0(auStack_290,local_110,lVar22);
      uVar13 = 0x3fe0000000000000;
      dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
      dVar29 = 1.0;
      if ((((dVar27 <= 1.0) ||
           (dVar31 = (double)FUN_005e7ebc(auStack_290),
           (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar31)) ||
          (10.0 <= ABS((moby->pos).z - local_110[0].z))) ||
         (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)) {
        if (((dVar27 <= dVar29) || (moby->setByGroup != '\x01')) ||
           (iVar14 = mobyutil::MB_randInt(4), iVar14 != 0)) {
          if (*(int *)((int)pvVar6 + 0x220) == -1) {
            iVar14 = fastfunc::FastDecTimerS32(uVar25 + 0x20c);
            if (iVar14 != 0) {
              mobyutil::MB_randRange(0x28,0x78);
              uVar16 = idol::GetAnimDuration();
              *(undefined4 *)((int)pvVar6 + 0x20c) = uVar16;
              iVar14 = 0;
              dVar31 = 5.0;
              dVar27 = 7.0;
              do {
                mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar26);
                dVar28 = (double)mobyutil::MB_randRot();
                mathfunc::cosf((float)dVar28);
                FUN_005e8128(dVar28);
                mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar27);
                FUN_005e7f54(uVar25 + 0x1e0,local_280,uVar25 + 0x1d0);
                dVar28 = (double)mobyutil::GetGroundZ(uVar13,uVar25 + 0x1e0,0x120);
                if (dVar29 < dVar28) break;
                iVar14 = iVar14 + 1;
              } while (iVar14 < 10);
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
              }
              moby->state = '\x0f';
            }
          }
          else {
            pSVar8 = Splines[*(int *)((int)pvVar6 + 0x220)];
            dVar26 = (double)FUN_005e8548(lVar22,pSVar8->points + *(int *)((int)pvVar6 + 0x224));
            iVar14 = *(int *)((int)pvVar6 + 0x224);
            if (dVar26 < 0.25) {
              iVar14 = iVar14 + 1;
              *(int *)((int)pvVar6 + 0x224) = iVar14;
              if (pSVar8->cnt <= iVar14) {
                iVar14 = 0;
                *(undefined4 *)((int)pvVar6 + 0x224) = 0;
              }
            }
            FUN_005e7e98(uVar25 + 0x1e0,pSVar8->points + iVar14);
            moby->state = '\x12';
          }
        }
        else {
          uVar12 = mobyutil::MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          if (moby->animationId != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
          }
          mobyupdate_helpers::M63_003ec878(uVar25);
          moby->state = '\x11';
          FUN_005e7e70(uVar25 + 0x40);
          moby->setByGroup = '\0';
        }
      }
      else {
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x11';
        mobyupdate_helpers::M63_003ec878(uVar25);
      }
    }
    else {
      uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1e0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar6 + 0x1e4) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar13,0x3f9eb851e0000000,0x3fe3333340000000,0x3fb70a3d80000000,lVar11);
      lVar23 = uVar25 + 0x40;
      dVar30 = (double)FUN_005e8030(lVar23);
      local_b4[0] = (float)dVar30;
      dVar27 = 1.0;
      moby->unk58 = (float)(dVar30 * 20.0 + 1.0);
      FUN_005e81f0(lVar23,uVar25 + 0x1e0,lVar22);
      dVar30 = (double)FUN_005e8030(lVar23);
      if (dVar30 <= dVar27) {
        mobyutil::Delt(mobyutil::g_FrameTime,DAT_0071f418 * 8.0,local_b4);
      }
      else {
        mobyutil::Delt((float)((double)mobyutil::g_FrameTime * dVar26),DAT_0071f418 * 6.0,local_b4);
      }
      mobyutil::ClampVec3Magnitude((double)local_b4[0],(Vec4 *)lVar23);
      FUN_005e7f54(auStack_270,lVar23,lVar22);
      iVar14 = collproc::CollSphere(0x3ff3333340000000,auStack_270,&DAT_003ec9bc,0,lVar11);
      if (iVar14 == 0) {
        FUN_005e7e98(lVar22,auStack_270);
      }
      else {
        FUN_005e7e70(lVar23);
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x0e';
      }
      dVar26 = (double)FUN_005e8548(lVar22,uVar25 + 0x1e0);
      if ((dVar26 < (double)local_b4[0]) || (local_b4[0] == 0.0)) {
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x0e';
      }
      mobyupdate_helpers::M63_003ec7e0(lVar11,uVar25);
    }
    goto LAB_003ef8b8;
  }
  if ((moby->updateId != '\x05') && (moby->animationId != '\x05')) {
    uVar13 = idol::GetAnimDuration(3);
    mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
  }
  fVar4 = (moby->rotation).z;
  *(undefined2 *)((int)pvVar6 + 0x212) = 1;
  dVar26 = (double)mathfunc::cosf(fVar4);
  local_130 = (float)((double)(*(float *)((int)pvVar6 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_128 = 0;
  local_12c = (float)((double)(*(float *)((int)pvVar6 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  FUN_005e7f54(auStack_120,lVar22,&local_130);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar29 = 2.0;
    dVar27 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar24 = MobyUpdateChainStart;
    do {
      if (((pMVar24 != moby) && (pMVar24->state < 0x80)) &&
         ((pMVar24->oClass == RATCHET || (pMVar24->oClass == ROBOSQUAWKER)))) {
        pvVar21 = &pMVar24->pos;
        dVar31 = (double)FUN_005e8588(auStack_120,pvVar21);
        if (dVar31 < dVar29) {
          dVar31 = (double)(moby->rotation).z;
          dVar32 = (double)(moby->pos).z;
          uVar13 = FUN_005e8338((double)((pMVar24->pos).x - (moby->pos).x),
                                (double)((pMVar24->pos).y - (moby->pos).y));
          dVar28 = (double)fastfunc::FastDiffRots(dVar31,uVar13);
          dVar31 = dVar26;
          if (dVar30 < dVar28) {
            dVar31 = dVar27;
          }
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)mobyutil::g_FrameTime * dVar31));
          (moby->rotation).z = (float)dVar31;
          FUN_005e81f0(auStack_120,lVar22,pvVar21);
          FUN_005e7f98(dVar29,auStack_120,auStack_120);
          FUN_005e7f54(auStack_120,auStack_120,pvVar21);
          local_118 = (float)dVar32;
        }
      }
      pMVar24 = (MobyInstance *)pMVar24->pChain;
    } while (pMVar24 != (MobyInstance *)0x0);
  }
  FUN_005e7e98(lVar22,auStack_120);
  dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0x120);
  fVar4 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar6 + 0x198));
  *(float *)((int)pvVar6 + 0x198) = fVar4;
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if ((double)fVar4 < dVar26) {
    *(undefined4 *)((int)pvVar6 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar6 + 0x218) == 0) {
LAB_003ef87c:
    moby->state = '\x05';
    if (moby->animationId != '\x05') {
      uVar13 = idol::GetAnimDuration(3);
      mobyutil::MB_SetAnimation(lVar11,5,0,uVar13);
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar22,(ulonglong)*(uint *)((int)pvVar6 + 0x218) + 0x10);
    dVar30 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar6 + 0x216));
    if (dVar30 < dVar26) goto LAB_003ef87c;
  }
  moby->setByGroup = '\0';
LAB_003ef8b8:
  mobyutil::MB_ColorDyingMoby(lVar11,uVar25 + 0x110);
  fVar7 = (moby->pos).x;
  uVar15 = (int)fVar7 >> 0x1f;
  iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15;
  if ((((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
      (fVar7 = (moby->pos).y, uVar15 = (int)fVar7 >> 0x1f,
      iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15, 0x447f4000 < iVar14 || iVar14 < 0x40000000)) ||
     ((fVar7 = (moby->pos).z, uVar15 = (int)fVar7 >> 0x1f,
      iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15, iVar14 < 0x40000000 || (0x447f4000 < iVar14))))
  {
    mobyfunc::DeleteMoby(moby);
  }
  else if ((((*(short *)((int)pvVar6 + 0x20a) == 2) &&
            ((0x3f7ae148 <
              (int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
                   ((int)DAT_00a10718 >> 0x1f)) ||
             (0x3f7ae148 <
              (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) -
                   ((int)DAT_00a10714 >> 0x1f)))))) &&
           (iVar14 = mobyutil::MB_randInt(0x1d), iVar14 == 0)) && (moby->enabled == '\0')) {
    iVar17 = rand();
    iVar14 = iVar17 / 3 + (iVar17 >> 0x1f);
    iVar17 = iVar17 + (iVar14 - (iVar14 >> 0x1f)) * -3;
    if (moby->group != -1) {
      iVar17 = mobyutil::MB_CountActiveMobysByGroup(moby->group,0xffffffffffffffff);
    }
    if (2 < iVar17) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003efa94  ns=mobyupdate_helpers  size=0x58
// sig: undefined M630_003efa94(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M630_003efa94(MobyInstance *param_1)

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



//==== 003efaec  ns=mobyupdate_helpers  size=0x58
// sig: undefined M630_003efaec(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M630_003efaec(int param_1)

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



//==== 003efb44  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M630_003efb44(void)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8
mobyupdate_helpers::M630_003efb44
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



//==== 003efc14  ns=mobyupdate_helpers  size=0x38
// sig: undefined M630_003efc14(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M630_003efc14(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 003efc4c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M630_003efc4c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M630_003efc4c(int param_1)

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



//==== 003efc8c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M630_003efc8c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M630_003efc8c(void)

{
  DAT_00854310 = 0x10000;
  return;
}



//==== 003efce0  ns=mobyupdate_unsorted  size=0x394
// sig: undefined UpdateMoby_630(MobyInstance * moby)
// callers(0): 
// callees(4): 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 00502578 fastfunc::FastWrapRot

/* Moby 630 */

void mobyupdate_unsorted::UpdateMoby_630(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  longlong lVar4;
  int iVar5;
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
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_b0 [24];
  
  pMVar3 = MobyInstance;
  lVar4 = (longlong)(int)moby;
  piVar2 = (int *)moby->pVar;
  iVar5 = *piVar2;
  if (iVar5 != -1) {
    fVar1 = (float)piVar2[3];
    if (moby->state == '\0') {
      moby->state = '\x01';
      fVar1 = (float)piVar2[1] * 0.017453292;
      piVar2[3] = (int)fVar1;
    }
    dVar6 = (double)fastfunc::FastWrapRot
                              (fVar1,(float)piVar2[2] * 0.017453292 * mobyutil::g_FrameTime);
    piVar2[3] = (int)(float)dVar6;
    dVar24 = 3.141592502593994;
    dVar23 = -3.141592502593994;
    dVar22 = -0.16666656732559204;
    dVar21 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar9 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar9 = dVar6;
    }
    dVar18 = (double)pMVar3[iVar5].pos.x;
    dVar17 = (double)pMVar3[iVar5].pos.y;
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar9 < 0.0) {
      dVar7 = dVar9;
    }
    dVar9 = (double)(float)(dVar7 * dVar7);
    dVar10 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar7));
    dVar6 = (double)(float)(dVar9 * dVar10);
    dVar6 = (double)(((float)(dVar9 * dVar6) * 2.601887e-06 +
                     (float)(dVar6 * -0.0001980741071747616 +
                            (double)(float)(dVar10 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar9 * dVar7) *
                                                           -0.16666656732559204 + dVar7)))) *
                    0.7853982);
    dVar9 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar9 = dVar6;
    }
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar9 < 0.0) {
      dVar7 = dVar9;
    }
    dVar16 = (double)pMVar3[iVar5].pos.z;
    dVar15 = (double)pMVar3[iVar5].pos.w;
    dVar14 = 1.5707963705062866;
    dVar10 = (double)(float)(dVar7 * dVar7);
    dVar11 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar7));
    dVar9 = (double)(float)(dVar10 * dVar11);
    dVar13 = (double)((float)(dVar10 * dVar9) * 2.601887e-06 +
                     (float)(dVar9 * -0.0001980741071747616 +
                            (double)(float)(dVar11 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar10 * dVar7) *
                                                           -0.16666656732559204 + dVar7))));
    dVar9 = (double)fastfunc::FastWrapRot(pMVar3[iVar5].rotation.z,1.5707964);
    dVar11 = 1.570796251296997;
    dVar7 = (double)(float)(dVar9 + 1.570796251296997);
    dVar10 = 7.0;
    dVar9 = (double)(float)(dVar24 - dVar7);
    if (dVar7 - (double)(float)(dVar24 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar8 = (double)(float)(dVar23 - dVar7);
    if ((double)(float)(dVar23 - dVar7) - dVar9 < 0.0) {
      dVar8 = dVar9;
    }
    dVar9 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar8));
    dVar12 = (double)(float)(dVar9 * dVar7);
    dVar9 = (double)(float)((double)((float)((double)(float)(dVar9 * dVar12) * dVar19 +
                                            (double)(float)(dVar12 * dVar20 +
                                                           (double)(float)(dVar7 * dVar21 +
                                                                          (double)(float)((double)(
                                                  float)(dVar9 * dVar8) * dVar22 + dVar8)))) * 7.0)
                            * dVar13 + dVar18);
    dVar7 = (double)fastfunc::FastWrapRot(pMVar3[iVar5].rotation.z,(float)dVar14);
    dVar6 = (double)(float)(dVar6 + dVar11);
    (moby->pos).x = (float)dVar9;
    (moby->pos).w = (float)dVar15;
    dVar9 = (double)(float)(dVar24 - dVar7);
    if (dVar7 - (double)(float)(dVar24 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar18 = (double)(float)(dVar24 - dVar6);
    if (dVar6 - (double)(float)(dVar24 - dVar6) < 0.0) {
      dVar18 = dVar6;
    }
    dVar24 = (double)(float)(dVar23 - dVar7);
    if ((double)(float)(dVar23 - dVar7) - dVar9 < 0.0) {
      dVar24 = dVar9;
    }
    dVar7 = (double)(float)(dVar24 * dVar24);
    dVar9 = (double)(float)(dVar23 - dVar6);
    if ((double)(float)(dVar23 - dVar6) - dVar18 < 0.0) {
      dVar9 = dVar18;
    }
    dVar23 = (double)(float)(dVar9 * dVar9);
    dVar18 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar24));
    dVar14 = (double)(float)(dVar7 * dVar18);
    dVar11 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar9));
    dVar6 = (double)(float)(dVar23 * dVar11);
    (moby->pos).y =
         (float)((double)(float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar19 +
                                                (double)(float)(dVar14 * dVar20 +
                                                               (double)(float)(dVar18 * dVar21 +
                                                                              (double)(float)((
                                                  double)(float)(dVar7 * dVar24) * dVar22 + dVar24))
                                                  )) * dVar10) * dVar13 + dVar17);
    (moby->pos).z =
         -(float)((double)(float)((double)(float)(dVar23 * dVar6) * dVar19 +
                                 (double)(float)(dVar6 * dVar20 +
                                                (double)(float)(dVar11 * dVar21 +
                                                               (double)(float)((double)(float)(
                                                  dVar23 * dVar9) * dVar22 + dVar9)))) * dVar10 -
                 dVar16);
    iVar5 = stub::STUB_00055ac0_RET_0(lVar4 + 0x10,0x400,1,lVar4,0);
    if (iVar5 != 0) {
      mobyutil::MB_genericExplosion
                (0x4008000000000000,0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,
                 0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar4,local_b0,
                 lVar4 + 0x10,0,0xffffffffffffffff,5,2,4);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



