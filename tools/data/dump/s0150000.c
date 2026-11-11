//==== 00150654  ns=stub  size=0x4
// sig: undefined STUB_00150654(void)
// callers(0): 
// callees(0): 

void stub::STUB_00150654(void)

{
  return;
}



//==== 00150658  ns=stub  size=0x4
// sig: undefined STUB_00150658(void)
// callers(0): 
// callees(0): 

void stub::STUB_00150658(void)

{
  return;
}



//==== 00150660  ns=pause  size=0x21c
// sig: undefined MenuHero_MobyUpdateA(void)
// callers(0): 
// callees(9): 00091090 hero::Hero_BuildPoseFromJoints; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void pause::MenuHero_MobyUpdateA(MobyInstance *param_1)

{
  bool bVar1;
  MobyInstance *pMoby;
  int iVar2;
  Vec4 aVStack_70 [3];
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  
                    /* WARNING: Load size is inaccurate */
  pMoby = *(MobyInstance **)(*param_1->pVar + 0x44);
  if (((param_1->field43_0x70 & 2U) != 0) && (param_1->animationId != '\x01')) {
    mobyutil::MB_SetAnimation(param_1,1,0,0);
  }
  iVar2 = 0;
  do {
    if ((&DAT_00721010)[iVar2 * 0x13] == (int)(short)param_1->oClass) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x25);
  mobyfunc::GetBoneTransformations(pMoby,*(undefined4 *)(&DAT_0072100c + iVar2 * 0x4c),aVStack_70);
  (param_1->pos).x = local_40;
  (param_1->pos).y = local_3c;
  (param_1->pos).z = local_38;
  (param_1->pos).w = local_34;
  mobyfunc::UpdateMobyTransform(param_1);
  iVar2 = *(int *)(&DAT_00721018 + iVar2 * 0x4c);
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_70);
  if (iVar2 != 0) {
    mobyutil::MB_NormalizeMtx3Columns(&param_1->transform);
  }
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  bVar1 = DAT_00a52da1 != '\0';
  if (bVar1) {
    mobyfunc::DetachManipulator(pMoby,&DAT_00a52da0);
  }
  if (iVar2 == 0) {
    hero::Hero_BuildPoseFromJoints(&DAT_00721afc,&DAT_00a1b880,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1b880;
    param_1->pCurrentAnimationData = &DAT_00a1b880;
    param_1->animationBlend = 0.0;
    param_1->unk58 = 0.0;
    param_1->previousAnimationFrame = '\0';
    param_1->animationFrame = '\0';
    param_1->updateId = '\0';
    param_1->animationId = '\0';
  }
  if (bVar1) {
    mobyfunc::AttachManipulator(pMoby,0,&DAT_00a52da0);
    DAT_00a52dc0 = 0;
    DAT_00a52dc4 = 0;
    DAT_00a52dc8 = 0;
  }
  return;
}



//==== 0015087c  ns=pause  size=0x134
// sig: undefined MenuHero_MobyUpdateB(void)
// callers(0): 
// callees(7): 00091090 hero::Hero_BuildPoseFromJoints; 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void pause::MenuHero_MobyUpdateB(MobyInstance *param_1)

{
  undefined4 uVar1;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  mobyfunc::UpdateMobyAnimFrame();
  mobyfunc::UpdateMobyTransform(param_1);
  mobyfunc::GetBoneTransformations(uVar1,4,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  mobyutil::MB_NormalizeMtx3Columns(&param_1->transform);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  if (param_1->oClass == SONIC_SUMMONER) {
    hero::Hero_BuildPoseFromJoints(&DAT_00721b44,&DAT_00a1ba80,param_1->pClass,6,uVar1);
  }
  else {
    hero::Hero_BuildPoseFromJoints(&DAT_00721b88,&DAT_00a1ba80,param_1->pClass,0,uVar1);
  }
  param_1->pPreviousAnimationData = &DAT_00a1ba80;
  param_1->pCurrentAnimationData = &DAT_00a1ba80;
  param_1->animationBlend = 0.0;
  param_1->previousAnimationFrame = '\0';
  param_1->animationFrame = '\0';
  param_1->updateId = '\0';
  param_1->animationId = '\0';
  return;
}



//==== 001509b8  ns=pause  size=0x23c
// sig: undefined MenuHero_MobyUpdateC(void)
// callers(0): 
// callees(9): 00091090 hero::Hero_BuildPoseFromJoints; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void pause::MenuHero_MobyUpdateC(MobyInstance *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  MobyInstance *pMoby;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  Vec4 aVStack_80 [3];
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  
  piVar3 = (int *)param_1->pVar;
  pMoby = *(MobyInstance **)(*piVar3 + 0x44);
  mobyfunc::UpdateMobyAnimFrame();
  mobyfunc::UpdateMobyTransform(param_1);
  uVar5 = 2;
  pMVar4 = *(MobyInstance **)(*piVar3 + 0x5c);
  if (param_1 == pMVar4) {
    uVar5 = 3;
  }
  mobyfunc::GetBoneTransformations(pMoby,uVar5,aVStack_80);
  (param_1->pos).x = local_50;
  (param_1->pos).y = local_4c;
  (param_1->pos).z = local_48;
  (param_1->pos).w = local_44;
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_80);
  mobyutil::MB_NormalizeMtx3Columns(&param_1->transform);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  bVar1 = DAT_00a52e21 != '\0';
  if (bVar1) {
    mobyfunc::DetachManipulator(pMoby,&DAT_00a52e20);
  }
  bVar2 = DAT_00a52de1 != '\0';
  if (bVar2) {
    mobyfunc::DetachManipulator(pMoby,&DAT_00a52de0);
  }
  if (param_1 == pMVar4) {
    hero::Hero_BuildPoseFromJoints(&DAT_00721bb0,&DAT_00a1bd80,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1bd80;
    param_1->pCurrentAnimationData = &DAT_00a1bd80;
  }
  else {
    hero::Hero_BuildPoseFromJoints(&DAT_00721b98,&DAT_00a1bc80,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1bc80;
    param_1->pCurrentAnimationData = &DAT_00a1bc80;
  }
  if (bVar1) {
    mobyfunc::AttachManipulator(pMoby,0x17,&DAT_00a52e20);
    DAT_00a52e40 = 0;
    DAT_00a52e44 = 0;
    DAT_00a52e48 = 0;
  }
  if (bVar2) {
    mobyfunc::AttachManipulator(pMoby,0x16,&DAT_00a52de0);
    DAT_00a52e00 = 0;
    DAT_00a52e04 = 0;
    DAT_00a52e08 = 0;
  }
  param_1->animationBlend = 0.0;
  param_1->previousAnimationFrame = '\0';
  param_1->animationFrame = '\0';
  param_1->updateId = '\0';
  param_1->animationId = '\0';
  return;
}



//==== 00150bf4  ns=pause  size=0x184
// sig: undefined MenuHero_MobyUpdateD(void)
// callers(0): 
// callees(5): 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu
   [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu
   [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu */

void pause::MenuHero_MobyUpdateD(MobyInstance *param_1)

{
  undefined4 uVar1;
  u8 uVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  if ((param_1->field43_0x70 & 2U) != 0) {
    if (param_1->oClass == HELIPACK_025F) {
      if (param_1->updateId == '\x06') {
        uVar2 = param_1->state + 0xff;
        param_1->state = uVar2;
        if (uVar2 == '\0') {
          if (param_1->animationId != '\x01') {
            mobyutil::MB_SetAnimation(param_1,1,0,10);
          }
        }
        else if (param_1->animationId != '\x06') {
          mobyutil::MB_SetAnimation(param_1,6,0,0);
        }
      }
      else if (param_1->animationId != '\x01') {
        mobyutil::MB_SetAnimation(param_1,1,0,0);
      }
    }
    else if (param_1->animationId != '\x01') {
      mobyutil::MB_SetAnimation(param_1,1,0,0);
    }
  }
  mobyfunc::GetBoneTransformations(uVar1,5,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  mobyutil::MB_NormalizeMtx3Columns(&param_1->transform);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  return;
}



//==== 00150d78  ns=pause  size=0xd0
// sig: undefined MenuHero_MobyUpdateE(void)
// callers(0): 
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500fa8 fastfunc::FastApplyTransform

/* [p2_pause] moby update callback (persuader) set by MenuHero_Update
   [p2_pause] moby update callback (persuader) set by MenuHero_Update
   [p2_pause] moby update callback (persuader) set by MenuHero_Update */

void pause::MenuHero_MobyUpdateE(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  mobyfunc::UpdateMobyAnimFrame();
  mobyfunc::UpdateMobyTransform(param_1);
  uVar2 = 0x1d;
  if (param_1->oClass == PERSUADER_0197) {
    uVar2 = 0x1e;
  }
  mobyfunc::GetBoneTransformations(uVar1,uVar2,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  mobyutil::MB_NormalizeMtx3Columns(&param_1->transform);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  return;
}



//==== 00150e88  ns=pause  size=0x554
// sig: undefined MenuHero_MobyUpdateF(void)
// callers(0): 
// callees(11): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 00109c30 mobyutil::OrganicDelt; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 00500b64 fastfunc::FastEulerToMtx; 00500fa8 fastfunc::FastApplyTransform; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble

/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void pause::MenuHero_MobyUpdateF(MobyInstance *param_1)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  Mtx4 *p1;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [64];
  MobyInstance *iVar11;
  
                    /* WARNING: Load size is inaccurate */
  iVar11 = *(MobyInstance **)(*param_1->pVar + 0x44);
  mobyfunc::UpdateMobyAnimFrame();
  mobyfunc::UpdateMobyTransform(param_1);
  p1 = &param_1->transform;
  fVar3 = (iVar11->pos).y;
  (param_1->pos).x = (iVar11->pos).x;
  fVar4 = (iVar11->pos).z;
  (param_1->pos).y = fVar3;
  fVar3 = (iVar11->pos).w;
  (param_1->pos).z = fVar4;
  (param_1->pos).w = fVar3;
  fastfunc::FastApplyTransform(&p1->v0,&(iVar11->transform).v0);
  mobyutil::MB_NormalizeMtx3Columns(p1);
  bVar2 = param_1->setByGroup;
  param_1->scale = param_1->pClass->gScale;
  if (bVar2 < 3) {
    iVar14 = (uint)bVar2 * 2;
    iVar14 = iVar14 + ((uint)((iVar14 + 1) * 0x155) >> 0xb) * -6;
  }
  else {
    iVar14 = (uint)bVar2 * 2;
    iVar14 = iVar14 + 1 + ((uint)((iVar14 + 2) * 0x155) >> 0xb) * -6;
  }
  dVar15 = (double)fastfunc::FastIntToDouble(200);
  dVar16 = 6.283180236816406;
  dVar17 = 3.141590118408203;
  dVar20 = (double)((float)((double)(longlong)(DAT_0159c330 % 200) / dVar15) * 6.28318 - 3.14159);
  dVar15 = (double)fastfunc::FastIntToDouble(6);
  dVar19 = (double)(longlong)iVar14;
  dVar18 = (double)(float)((double)(float)((double)(float)(dVar19 * dVar16) / dVar15) - dVar17);
  dVar15 = (double)fastfunc::FastIntToDouble(0xaa);
  dVar17 = (double)(float)((double)(float)((double)(float)((double)(longlong)(DAT_0159c330 % 0xaa) /
                                                          dVar15) * dVar16) - dVar17);
  dVar15 = (double)fastfunc::FastIntToDouble(6);
  fVar1 = (float)((double)(float)(dVar19 * 12.566360473632812) / dVar15);
  dVar16 = (double)fVar1;
  fastfunc::FastAddRots(fVar1);
  dVar15 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar18);
  dVar16 = (double)fastfunc::FastWrapRot((float)dVar17,(float)dVar16);
  uVar13 = (uint)(byte)param_1->setByGroup;
  if ((float)(&DAT_00a52e6c)[uVar13] != 0.0) {
    mobyutil::OrganicDelt
              (0.0,1.0,DAT_0071f418 * 6.0,mobyutil::g_FrameTime * 6.0,
               (float *)(&DAT_00a52e6c + (byte)param_1->setByGroup),uVar13 * 4,
               (float *)(&DAT_00a52e84 + uVar13));
  }
  fVar1 = (float)(dVar15 + 1.570796251296997);
  fVar11 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar11 = 3.1415925 - fVar1;
  }
  if (fVar11 <= -3.1415925 - fVar1) {
    fVar11 = -3.1415925 - fVar1;
  }
  fVar6 = fVar11 * fVar11;
  fVar1 = fVar6 * fVar6 * fVar11;
  fVar5 = fVar6 * fVar1;
  fVar1 = fVar11 + fVar6 * fVar11 * -0.16666657 + fVar1 * 0.0083330255 + fVar5 * -0.0001980741 +
          fVar6 * fVar5 * 2.601887e-06;
  dVar17 = dVar15;
  if ((double)(float)(3.141592502593994 - dVar15) <= dVar15) {
    dVar17 = (double)(float)(3.141592502593994 - dVar15);
  }
  if (dVar17 <= (double)(float)(-3.141592502593994 - dVar15)) {
    dVar17 = (double)(float)(-3.141592502593994 - dVar15);
  }
  dVar18 = (double)(float)(dVar17 * dVar17);
  dVar19 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar17));
  dVar20 = (double)(float)(dVar18 * dVar19);
  fVar11 = (float)(dVar17 + (double)(float)((double)(float)(dVar18 * dVar17) * -0.16666656732559204)
                  ) + (float)(dVar19 * 0.008333025500178337) +
           (float)(dVar20 * -0.0001980741071747616) + (float)(dVar18 * dVar20) * 2.601887e-06;
  dVar17 = dVar16;
  if ((double)(float)(3.141592502593994 - dVar16) <= dVar16) {
    dVar17 = (double)(float)(3.141592502593994 - dVar16);
  }
  if (dVar17 <= (double)(float)(-3.141592502593994 - dVar16)) {
    dVar17 = (double)(float)(-3.141592502593994 - dVar16);
  }
  dVar16 = (double)(float)(dVar17 * dVar17);
  dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
  dVar19 = (double)(float)(dVar16 * dVar18);
  fVar5 = (iVar11->transform).v0.y;
  fVar6 = (iVar11->transform).v1.y;
  fVar7 = (iVar11->transform).v0.z;
  fVar8 = (iVar11->transform).v1.z;
  fVar9 = (iVar11->transform).v2.y;
  fVar10 = (iVar11->transform).v2.z;
  fVar12 = ((float)(dVar17 + (double)(float)((double)(float)(dVar16 * dVar17) * -0.16666656732559204
                                            )) + (float)(dVar18 * 0.008333025500178337) +
            (float)(dVar19 * -0.0001980741071747616) + (float)(dVar16 * dVar19) * 2.601887e-06) *
           0.25 + 0.5 + (float)(&DAT_00a52e6c)[(byte)param_1->setByGroup];
  (param_1->pos).x =
       (param_1->pos).x +
       (iVar11->transform).v0.x * fVar1 + (iVar11->transform).v1.x * fVar11 +
       (iVar11->transform).v2.x * fVar12;
  (param_1->pos).y = (param_1->pos).y + fVar5 * fVar1 + fVar6 * fVar11 + fVar9 * fVar12;
  (param_1->pos).z = (param_1->pos).z + fVar7 * fVar1 + fVar8 * fVar11 + fVar10 * fVar12;
  fastfunc::FastWrapRot((float)dVar15,1.5707964);
  fastfunc::FastEulerToMtx(auStack_a0,local_b0);
  fastfunc::FastVecMtx4MultBatch3(p1,auStack_a0,p1);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  return;
}



//==== 001513e8  ns=pause  size=0x160
// sig: undefined Spawn_Moby1957_HelpdeskLady(void)
// callers(0): 
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 00148538 pause::Menu_AllocStreamBuffer

undefined8 pause::Spawn_Moby1957_HelpdeskLady(int param_1)

{
  int *piVar1;
  float fVar2;
  MobyInstance *pMVar3;
  int iVar4;
  
  if (DAT_00a35c65 == -1) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = mobyfunc::CreateMoby(HELPDESK_LADY_CREDITS);
    if (pMVar3 != (MobyInstance *)0x0) {
      pMVar3->updateDistance = -1;
      pMVar3->drawDistance = 0xff;
      pMVar3->enabled = '\x01';
      pMVar3->state = '\0';
      mobyfunc::UpdateMobyTransform(pMVar3);
      mobyutil::MB_SetLights(pMVar3,0x202020,0xe,0xe,0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (pMVar3 == (MobyInstance *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 3;
  }
  else {
    *(MobyInstance **)(param_1 + 0x44) = pMVar3;
    pMVar3->modeBits = NONE;
    piVar1 = (int *)pMVar3->pVar;
    (pMVar3->pos).x = GameCamera.posX + 2.2;
    (pMVar3->pos).y = GameCamera.posY;
    fVar2 = GameCamera.posZ;
    (pMVar3->rotation).z = 3.1415927;
    pMVar3->pUpdate = &PTR_STUB_UpdateMoby_1957_HelpdeskLady_00707940;
    (pMVar3->pos).z = fVar2 + -1.6;
    *piVar1 = param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  iVar4 = Menu_AllocStreamBuffer(1);
  *(int *)(param_1 + 0x3c) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 3;
  }
  return 0;
}



//==== 00151548  ns=pause  size=0x16c
// sig: undefined GameComplete_OnExit(void)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 0011d9e0 music::music_StopLoad

/* [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete
   [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete
   [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete */

undefined8 pause::GameComplete_OnExit(int param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  MobyInstance *moby;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x44 + iVar5);
    moby = (MobyInstance *)*puVar4;
    if (moby != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(moby);
      lVar2 = (longlong)worldUpdateTime;
      moby->color = (int)((ulonglong)lVar2 >> 0x20);
      moby->light = (int)lVar2;
      moby = (MobyInstance *)0x0;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 4;
    *puVar4 = moby;
    cVar1 = DAT_00a52c7b;
  } while (iVar3 < 0x18);
  iVar3 = 0;
  while (((&DAT_00a53098)[iVar3 * 2] != *(int *)(param_1 + 0x3c) ||
         (((&DAT_00a5309c)[iVar3 * 2] & 2) == 0))) {
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
LAB_00151660:
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
        music::g_SpeechPlaying.status = 5;
      }
      return 0;
    }
  }
  if ((((&DAT_00a5309c)[iVar3 * 2] & 4) != 0) &&
     ((&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] ^ 4, cVar1 != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] & 0xfffffffd;
  goto LAB_00151660;
}



//==== 001516c0  ns=pause  size=0x608
// sig: undefined M1957_Update_GirlwadOnGameComplete(int param_1)
// callers(0): 
// callees(5): 000dcb64 loaders::ParseMobySeq; 000e9150 stub::STUB_000e9150; 000fddc0 mobyutil::MB_SetAnimation; 0011c830 music::music_PlayPreseekedSpeech; 005034c4 idol::PRINT_m_LoadGameFile
// strings: 006536f4: 'girlwad'

undefined8 pause::M1957_Update_GirlwadOnGameComplete(int param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  undefined1 uVar5;
  u8 uVar6;
  byte bVar7;
  byte bVar8;
  int seq;
  int iVar9;
  int iVar10;
  ulonglong moby;
  MobyInstance *uVar1;
  
  iVar10 = *(int *)(param_1 + 0x34);
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      return 0;
    }
    if (Music != 0) {
      return 0;
    }
    iVar10 = (DAT_010ea454 & 0x1fffff) * -0x800 + 0x4f000;
    uVar3 = idol::PRINT_m_LoadGameFile(*(int *)(param_1 + 0x3c) + iVar10,"girlwad");
    if ((int)uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 3;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(int *)(param_1 + 0x40) = iVar10;
    DAT_00a52c7b = 1;
    iVar10 = 0;
    do {
      if ((&DAT_00a53098)[iVar10 * 2] == *(int *)(param_1 + 0x3c)) {
        (&DAT_00a5309c)[iVar10 * 2] = (&DAT_00a5309c)[iVar10 * 2] | 4;
        return 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
    DAT_00a52c7b = 1;
    return 0;
  }
  if (iVar10 < 2) {
    if (Music != 0) {
      return 0;
    }
    iVar9 = 0;
    DAT_00a52c7b = 0;
    stub::STUB_000e9150(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40));
    bVar7 = DAT_00a35c65;
    iVar10 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    do {
      seq = iVar4 + 1;
      (&MobyClasses[bVar7]->seqs)[iVar4] =
           (MobySeq *)(*(int *)(param_1 + 0x3c) + *(int *)(iVar10 + iVar9));
      loaders::ParseMobySeq(MobyClasses[bVar7],seq);
      iVar9 = iVar9 + 8;
      iVar4 = seq;
    } while (seq < 3);
    uVar5 = 4;
    *(undefined4 *)(param_1 + 0x34) = 2;
    if (g_ChallengeMode == 0) {
      uVar5 = 0;
    }
    iVar10 = *(int *)(param_1 + 0x44);
    *(undefined1 *)(iVar10 + 0x20) = uVar5;
    *(undefined1 *)(iVar10 + 0xbc) = 0;
    return 0;
  }
  if (2 < iVar10) {
    return 0;
  }
  uVar1 = *(MobyInstance **)(param_1 + 0x44);
  moby = ZEXT48(uVar1);
  bVar7 = uVar1->state;
  if (bVar7 == 6) {
    bVar7 = uVar1->setByGroup + 1;
    uVar1->setByGroup = bVar7;
    if ((int)(animationSpeed * 240.5) < (int)(uint)bVar7) {
      auVar2 = auRam00000000 >> 0x60 & (undefined1  [16])0xff;
      cVar1 = storeVectorElementByteIndexed
                        (auVar2 | auVar2 << 8 | auVar2 << 0x10 | auVar2 << 0x18 | auVar2 << 0x20 |
                         auVar2 << 0x28 | auVar2 << 0x30 | auVar2 << 0x38 | auVar2 << 0x40 |
                         auVar2 << 0x48 | auVar2 << 0x50 | auVar2 << 0x58 | auVar2 << 0x60 |
                         auVar2 << 0x68 | auVar2 << 0x70 | auVar2 << 0x78,0xbc,moby);
      uVar1->setByGroup = cVar1;
    }
    if ((int)(uint)(byte)uVar1->setByGroup < (int)(animationSpeed * 240.5)) {
      return 0;
    }
    uVar6 = '\x04';
    if (g_ChallengeMode == 0) {
      uVar6 = '\0';
    }
    uVar1->state = uVar6;
    uVar1->setByGroup = '\0';
    return 0;
  }
  if (bVar7 == 5) {
LAB_00151ab4:
    if ((uVar1->setByGroup == '\0') && (uVar1->updateId == uVar1->animationId)) {
      music::music_PlayPreseekedSpeech();
      uVar1->setByGroup = '\x01';
    }
    if ((uVar1->field43_0x70 & 2U) != 0) {
      uVar6 = '\x06';
      if (uVar1->state == '\x01') {
        uVar6 = '\x02';
      }
      uVar1->state = uVar6;
      uVar1->setByGroup = '\0';
      mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 24.5));
    }
  }
  else {
    if (bVar7 != 4) {
      if (bVar7 == 3) goto LAB_00151ab4;
      if (bVar7 != 2) {
        if (bVar7 == 1) goto LAB_00151ab4;
        if (bVar7 != 0) {
          return 0;
        }
      }
    }
    iVar10 = g_Language + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (uVar1->setByGroup == '\0') {
      music::g_PendingSpeech = (uint)(bVar7 >> 1) * 6 + iVar10 + 60000;
    }
    bVar8 = uVar1->setByGroup + 1;
    uVar1->setByGroup = bVar8;
    if ((int)(animationSpeed * 120.5) < (int)(uint)bVar8) {
      auVar2 = auRam00000000 >> 0x60 & (undefined1  [16])0xff;
      cVar1 = storeVectorElementByteIndexed
                        (auVar2 | auVar2 << 8 | auVar2 << 0x10 | auVar2 << 0x18 | auVar2 << 0x20 |
                         auVar2 << 0x28 | auVar2 << 0x30 | auVar2 << 0x38 | auVar2 << 0x40 |
                         auVar2 << 0x48 | auVar2 << 0x50 | auVar2 << 0x58 | auVar2 << 0x60 |
                         auVar2 << 0x68 | auVar2 << 0x70 | auVar2 << 0x78,0xbc,moby);
      uVar1->setByGroup = cVar1;
    }
    if (((int)(animationSpeed * 120.5) <= (int)(uint)(byte)uVar1->setByGroup) &&
       (music::g_SpeechPlaying.status == 3)) {
      uVar1->setByGroup = '\0';
      uVar1->state = uVar1->state + '\x01';
      mobyutil::MB_SetAnimation
                (moby,(((ulonglong)bVar7 << 0x20) >> 0x21) + 1,0,(int)(animationSpeed * 24.5));
    }
  }
  return 0;
}



//==== 00151cc8  ns=pause  size=0x7c
// sig: undefined GameComplete_Draw(void)
// callers(0): 
// callees(1): 000f1934 mobyfunc::MB_AddToDrawList

/* [p2_pause] draws 24 mobys
   [p2_pause] draws 24 mobys
   [p2_pause] draws 24 mobys */

undefined8 pause::GameComplete_Draw(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x44 + iVar3);
    if (*piVar1 != 0) {
      mobyfunc::MB_AddToDrawList(*piVar1,1);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x18);
  return 4;
}



//==== 00151d44  ns=stub  size=0x4
// sig: undefined STUB_UpdateMoby_1957_HelpdeskLady(void)
// callers(0): 
// callees(0): 

void stub::STUB_UpdateMoby_1957_HelpdeskLady(void)

{
  return;
}



//==== 00151d48  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_RESPAWN_???(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_RESPAWN____(void)

{
  DAT_00731734 = 0x10000;
  return;
}



//==== 00151d60  ns=respawn  size=0x38
// sig: undefined ???_Unused_Respawn_IncCounter_a53504(void)
// callers(0): 
// callees(0): 

undefined8 respawn::____Unused_Respawn_IncCounter_a53504(void)

{
  DAT_00a53504 = DAT_00a53504 + 1;
  DAT_00a53508 = DAT_00a53500 + *DAT_00927200;
  return 0;
}



//==== 00151d98  ns=respawn  size=0x74
// sig: undefined ???_NAVG_AllocSlot_a0e11c(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

longlong respawn::____NAVG_AllocSlot_a0e11c(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = -1;
  if (-1 < param_2) {
    iVar2 = (int)(param_1 << 8);
    lVar3 = 0x3f;
    do {
      iVar4 = (int)(lVar3 << 2);
      sVar1 = *(short *)(&DAT_00a0e11c + iVar2 + iVar4);
      if (sVar1 == 0 || (int)sVar1 == param_2 + 1) {
        if ((int)lVar3 < 0) {
          return lVar3;
        }
        *(short *)(&DAT_00a0e11c + iVar2 + iVar4) = (short)(param_2 + 1);
        return lVar3;
      }
      iVar4 = (int)lVar3 + -1;
      lVar3 = (longlong)iVar4;
    } while (-1 < iVar4);
  }
  return lVar3;
}



//==== 00151e0c  ns=respawn  size=0x64
// sig: void ClearCheckpointData(void)
// callers(2): 000df408 loaders::LoadAllMobys; 0014c370 pause::ShowScreenAfterDrekDefeat
// callees(1): 005001fc fastfunc::FastMemSet

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void respawn::ClearCheckpointData(void)

{
  fastfunc::FastMemSet(&DAT_00a53510,0,0xc60);
  fastfunc::FastMemSet(&g_CheckpointSet,0,0xc60);
  fastfunc::FastMemSet(&DAT_00a54dd0,0,0x100);
  return;
}



//==== 00151e70  ns=respawn  size=0x210
// sig: undefined SetSpawnPoint(Vec4 * pos, Vec4 * rot)
// callers(33): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5360 mobyupdate_helpers::M1051_001a5360; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002ba158 mobyupdate_unsorted::UpdateMoby_18; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 0032cef0 mobyupdate_unsorted::UpdateMoby_282; 003361b0 mobyupdate_unsorted::UpdateMoby_298; 00343330 mobyupdate_unsorted::UpdateMoby_328; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 0045b190 mobyupdate_unsorted::UpdateMoby_786
// callees(1): 0050027c fastfunc::FastMemCopy32

void respawn::SetSpawnPoint(Vec4 *pos,Vec4 *rot)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  fastfunc::FastMemCopy32(&DAT_00a541c0,&DAT_00a53560,0x404);
  uVar7 = 0;
  iVar4 = Level * 0x10;
  iVar5 = Level * 0x100;
  do {
    bVar1 = (&DAT_00a53964)[uVar7];
    if ((bVar1 != 0) && ((bVar1 == 1 || (*(char *)(bVar1 + 0xa0ca82 + iVar4) == -1)))) {
      iVar6 = (int)(((ulonglong)(uint)((int)uVar7 >> 5) & 0x3fffffff) << 2);
      (&DAT_00a545c4)[uVar7] = bVar1;
      uVar3 = 1 << (uVar7 & 0x1f);
      uVar2 = *(uint *)(&DAT_00a0cd1c + iVar5 + iVar6);
      *(uint *)(&DAT_00a54dd0 + iVar6) = *(uint *)(&DAT_00a54dd0 + iVar6) | uVar3;
      *(uint *)(&DAT_00a0cd1c + iVar5 + iVar6) = uVar2 | uVar3;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x7ff);
  g_CheckpointPosition.pos.x = pos->x;
  g_CheckpointPosition.pos.y = pos->y;
  g_CheckpointPosition.pos.z = pos->z;
  g_CheckpointSet = 1;
  g_CheckpointPosition.pos.w = pos->w;
  g_CheckpointPosition.rot.x = rot->x;
  g_CheckpointPosition.rot.y = rot->y;
  g_CheckpointPosition.rot.z = rot->z;
  g_CheckpointPosition.rot.w = rot->w;
  g_CheckpointPosition.colorReadOnly = (ABGR)g_heroMobyPtr->color;
  g_CheckpointPosition.light = (ABGR)g_heroMobyPtr->light;
  g_CheckpointPosition.heroType = (uint)g_heroType;
  g_CheckpointPosition.colorManipulator = g_heroMobyPtr->colorManipulator;
  g_CheckpointPosition.field12_0x3c = (int)DAT_0096bfac;
  g_CheckpointPosition.field5_0x2c = DAT_009637c4;
  g_CheckpointPosition.field6_0x30 = DAT_009637c8;
  g_CheckpointPosition.field7_0x31 = DAT_009637c9;
  g_CheckpointPosition.field8_0x32 = DAT_009637ca;
  g_CheckpointPosition.heroMobyPtr = g_heroMobyPtr;
  DAT_00a54dc4 = (int)music::g_PendingTrack +
                 ((uint)((LZCOUNT(-1 - music::g_PendingTrack) << 0x3a) >> 0x3f) &
                 (int)music::g_MusicPlaying.track - (int)music::g_PendingTrack);
  return;
}



//==== 00152080  ns=respawn  size=0x48
// sig: MobyInstance * FindMobyByUID(int unused, int uid)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

MobyInstance * respawn::FindMobyByUID(int unused,int uid)

{
  MobyInstance *pMVar1;
  
  pMVar1 = MobyInstance;
  if (MobyInstance != MobyInstancePermEnd) {
    do {
      if ((short)pMVar1->uid == uid) {
        return pMVar1;
      }
      pMVar1 = pMVar1 + 1;
    } while (pMVar1 != MobyInstancePermEnd);
  }
  return (MobyInstance *)0x0;
}



//==== 001520c8  ns=respawn  size=0xe0
// sig: void RestoreMobyVarList(int * list)
// callers(2): 001521a8 respawn::RestoreSavedMobyVars; 001521d0 respawn::RestoreCheckpoint
// callees(1): 0050027c fastfunc::FastMemCopy32

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void respawn::RestoreMobyVarList(int *list)

{
  int iVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = *list;
  piVar4 = list;
  if (0 < iVar1) {
    do {
      for (pMVar2 = MobyInstance; pMVar2 != MobyInstancePermEnd; pMVar2 = pMVar2 + 1) {
        if (pMVar2->uid == *(ushort *)(piVar4 + 4)) {
          if (pMVar2 != (MobyInstance *)0x0) {
            if (*(short *)((int)piVar4 + 0xe) == 1) {
              iVar1 = piVar4[1];
            }
            else {
              iVar1 = piVar4[1];
              pMVar2 = (MobyInstance *)pMVar2->pVar;
            }
            fastfunc::FastMemCopy32
                      ((int)&(pMVar2->bSphere).x + iVar1,piVar4 + 2,*(undefined2 *)(piVar4 + 3));
            iVar1 = *list;
          }
          break;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < iVar1);
  }
  return;
}



//==== 001521a8  ns=respawn  size=0x28
// sig: void RestoreSavedMobyVars(void)
// callers(0): 
// callees(1): 001520c8 respawn::RestoreMobyVarList

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void respawn::RestoreSavedMobyVars(void)

{
  RestoreMobyVarList((int *)&DAT_00a541c0);
  return;
}



//==== 001521d0  ns=respawn  size=0x208
// sig: void RestoreCheckpoint(void)
// callers(1): 000df408 loaders::LoadAllMobys
// callees(7): 0005393c camera::Camera_resetToFollow; 00086b60 hero::SetHeroType; 000f31a8 mobyfunc::UpdateMobyTransform; 001520c8 respawn::RestoreMobyVarList; 005001fc fastfunc::FastMemSet; 0050027c fastfunc::FastMemCopy32; 00500b64 fastfunc::FastEulerToMtx

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void respawn::RestoreCheckpoint(void)

{
  MobyInstance *pMVar1;
  MobyInstance *pMVar2;
  ulonglong uVar3;
  MOBY_OCLASSES MVar4;
  undefined8 in_LR;
  
  if (g_CheckpointSet == 0) {
    fastfunc::FastMemSet(&DAT_00a53510,0,0xc60);
    return;
  }
  fastfunc::FastMemCopy32(&DAT_00a53510,&g_CheckpointSet,0xc60);
  g_heroPosition.z = g_CheckpointPosition.pos.z;
  pMVar2 = g_heroMobyPtr;
  g_heroPosition.x = g_CheckpointPosition.pos.x;
  g_heroPosition.y = g_CheckpointPosition.pos.y;
  g_heroMobyPtr->color = (uint)g_CheckpointPosition.colorReadOnly;
  g_heroPosition.w = g_CheckpointPosition.pos.w;
  pMVar2->light = (uint)g_CheckpointPosition.light;
  g_heroRotation.x = g_CheckpointPosition.rot.x;
  pMVar2->colorManipulator = g_CheckpointPosition.colorManipulator;
  g_heroRotation.y = g_CheckpointPosition.rot.y;
  g_heroRotation.z = g_CheckpointPosition.rot.z;
  g_heroRotation.w = g_CheckpointPosition.rot.w;
  DAT_009637c4 = g_CheckpointPosition.field5_0x2c;
  DAT_009637cb = DAT_009637cb | 7;
  DAT_009637c8 = g_CheckpointPosition.field6_0x30;
  DAT_009637c9 = g_CheckpointPosition.field7_0x31;
  DAT_009637ca = g_CheckpointPosition.field8_0x32;
  music::g_MusicPlaying.track = (short)DAT_00a54dc4;
  if ((g_CheckpointPosition.heroType == 0) || (g_CheckpointPosition.heroType == 3))
  goto LAB_00152394;
  MVar4 = RATCHET;
  uVar3 = 0;
  pMVar1 = MobyInstance;
  if (g_CheckpointPosition.heroType < 2) {
    if (g_CheckpointPosition.heroType < 1) {
LAB_00152324:
      trapWord(0x1f,in_LR,in_LR);
    }
    else {
      MVar4 = CLANK_0057;
    }
  }
  else {
    if (2 < g_CheckpointPosition.heroType) goto LAB_00152324;
    MVar4 = GIANT_CLANK;
  }
  for (; pMVar1 < MobyInstancePermEnd; pMVar1 = pMVar1 + 1) {
    if (pMVar1->oClass == MVar4) {
      hero::SetHeroType(g_CheckpointPosition.heroType,g_CheckpointPosition.field12_0x3c,
                        (MobyInstance *)
                        ((int)&(MobyInstance->bSphere).x + (int)((uVar3 & 0xffffffff) << 8)));
      pMVar2 = g_heroMobyPtr;
      break;
    }
    uVar3 = uVar3 + 1;
  }
LAB_00152394:
  mobyfunc::UpdateMobyTransform(pMVar2);
  fastfunc::FastEulerToMtx(&g_heroMobyPtr->transform,&g_heroRotation);
  camera::Camera_resetToFollow();
  RestoreMobyVarList((int *)&DAT_00a541c0);
  return;
}



//==== 001523d8  ns=respawn  size=0x144
// sig: void SaveCheckpointMobyVar(void * data, int size, MobyInstance * moby, int isMoby, int * list)
// callers(5): 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}; 004556e0 mobyupdate_unsorted::UpdateMoby_774; 00484300 mobyupdate_unsorted::UpdateMoby_846; 004a2d38 mobyupdate_unsorted::UpdateMoby_890
// callees(1): 0050027c fastfunc::FastMemCopy32

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void respawn::SaveCheckpointMobyVar(void *data,int size,MobyInstance *moby,int isMoby,int *list)

{
  ushort uVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = (longlong)isMoby;
  uVar4 = (undefined2)isMoby;
  uVar1 = moby->uid;
  MVar2 = moby->oClass;
  if (isMoby != 1) {
    moby = (MobyInstance *)moby->pVar;
  }
  iVar3 = 0;
  iVar6 = (int)(short)((short)data - (short)moby);
  piVar5 = list;
  if (0 < *list) {
    do {
      if ((((piVar5[1] == iVar6) && ((uint)*(ushort *)(piVar5 + 3) == size)) &&
          (uVar1 == *(ushort *)(piVar5 + 4))) &&
         ((MVar2 == *(MOBY_OCLASSES *)((int)piVar5 + 0x12) &&
          (lVar7 = (longlong)*(short *)((int)piVar5 + 0xe), *(short *)((int)piVar5 + 0xe) != 0)))) {
        fastfunc::FastMemCopy32(piVar5 + 2,data,size);
        return;
      }
      uVar4 = (undefined2)lVar7;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar3 < *list);
  }
  iVar3 = *list;
  *list = iVar3 + 1;
  list[iVar3 * 4 + 1] = iVar6;
  fastfunc::FastMemCopy32(list + iVar3 * 4 + 2,data,size);
  *(short *)(list + iVar3 * 4 + 3) = (short)size;
  *(undefined2 *)((int)list + iVar3 * 0x10 + 0xe) = uVar4;
  *(ushort *)(list + iVar3 * 4 + 4) = uVar1;
  *(MOBY_OCLASSES *)((int)list + iVar3 * 0x10 + 0x12) = MVar2;
  return;
}



//==== 0015251c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_S_UNKNOWN_STUBBED(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_S_UNKNOWN_STUBBED(void)

{
  DAT_007317dc = 0x10000;
  return;
}



//==== 00152540  ns=draw  size=0x21c
// sig: undefined ???_DrawScreenEffect_BuildPacketA(void)
// callers(1): 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void draw::____DrawScreenEffect_BuildPacketA(double param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  undefined4 uStack0000003c;
  
  fStack00000034 = (float)param_2;
  dVar14 = (double)fStack00000034;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  dVar17 = (double)fStack00000030;
  fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
  dVar16 = (double)fStack00000038;
  dVar12 = 0.0;
  iVar8 = ((uint)((int)fStack00000034 >> 0x1f) >> 1 ^ (uint)fStack00000034) -
          ((int)fStack00000034 >> 0x1f);
  fVar1 = (float)(dVar16 * dVar16 +
                 (double)(float)(dVar17 * dVar17 + (double)(float)(dVar14 * dVar14)));
  iVar7 = ((uint)((int)fStack00000030 >> 0x1f) >> 1 ^ (uint)fStack00000030) -
          ((int)fStack00000030 >> 0x1f);
  iVar6 = ((uint)((int)fStack00000038 >> 0x1f) >> 1 ^ (uint)fStack00000038) -
          ((int)fStack00000038 >> 0x1f);
  uStack0000003c = (undefined4)param_3;
  dVar10 = dVar12;
  dVar13 = dVar12;
  dVar11 = dVar12;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar10 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar10 = (double)(float)(dVar17 * dVar10);
    dVar13 = (double)(float)(dVar14 * dVar10);
    dVar11 = (double)(float)(dVar16 * dVar10);
  }
  DAT_00a54ed0 = (float)dVar10;
  DAT_00a54ed4 = (float)dVar13;
  DAT_00a54ed8 = (float)dVar11;
  DAT_00a54edc = uStack0000003c;
  DAT_00a54ef0 = (float)(dVar10 * param_1);
  DAT_00a54ef4 = (float)(dVar13 * param_1);
  DAT_00a54ef8 = (float)(dVar11 * param_1);
  dVar9 = dVar14;
  dVar15 = dVar17;
  if (iVar7 < iVar8) {
    if (iVar7 < iVar6) {
      dVar9 = dVar17;
      dVar15 = dVar16;
      dVar16 = dVar14;
    }
  }
  else if (iVar8 < iVar6) {
    dVar9 = dVar16;
    dVar15 = dVar14;
    dVar16 = dVar17;
  }
  DAT_00a54eec = 0;
  fVar1 = (float)(dVar13 * dVar16 - (double)(float)(dVar11 * dVar15));
  fVar2 = (float)(dVar11 * dVar9 - (double)(float)(dVar10 * dVar16));
  fVar3 = (float)(dVar10 * dVar15 - (double)(float)(dVar13 * dVar9));
  fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar10 = dVar12;
  dVar13 = dVar12;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar13 = (double)(fVar1 * fVar5);
    dVar12 = (double)(fVar2 * fVar5);
    dVar10 = (double)(fVar3 * fVar5);
  }
  DAT_00a54ee0 = (float)dVar13;
  DAT_00a54ee4 = (float)dVar12;
  DAT_00a54ee8 = (float)dVar10;
  return;
}



//==== 0015275c  ns=draw  size=0x64
// sig: undefined ???_DrawScreenEffect_DispatchCmd(void)
// callers(0): 
// callees(2): 001534ec stub::STUB_001534ec; 001534f0 stub::STUB_001534f0

short * draw::____DrawScreenEffect_DispatchCmd(short *param_1)

{
  if (*param_1 == 0) {
    stub::STUB_001534ec(param_1);
    param_1 = param_1 + 0x10;
  }
  else if (*param_1 == 1) {
    stub::STUB_001534f0(param_1);
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



//==== 001527c0  ns=draw  size=0xc0
// sig: undefined ???_DrawScreenEffect_WriteGifTag(void)
// callers(0): 
// callees(2): 001534e8 stub::STUB_001534e8; 0050300c FUN_0050300c

void draw::____DrawScreenEffect_WriteGifTag(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  
  *DAT_00e5aa58 = 3;
  DAT_00e5aa58[1] = (char)(param_3 << 4) * '\x03' + '\x10';
  DAT_00e5aa58[2] = 0;
  uVar1 = FUN_0050300c(3,0);
  DAT_00e5aa58[3] = uVar1;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  stub::STUB_001534e8(param_1,*(undefined4 *)((int)&DAT_00731800 + (int)(param_2 << 2)));
  return;
}



//==== 00152880  ns=draw  size=0x2c4
// sig: undefined ???_DrawScreenEffect_BuildPacketB(void)
// callers(1): 00152df8 draw::DrawScreenEffect_152df8
// callees(8): 00174f80 vuchain::SetGSReg; 00502e70 FUN_00502e70; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f74 stub::FUN_00502f74_RET_0; 00502f98 FUN_00502f98; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void draw::____DrawScreenEffect_BuildPacketB(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = (uint)g_FrameBufWidth;
  uVar9 = (ulonglong)g_FrameBufHeight;
  iVar6 = ((int)g_FrameBufWidth >> 5) +
          (uint)(g_FrameBufWidth < 0 && (g_FrameBufWidth & 0x1fU) != 0);
  lVar5 = (longlong)iVar6;
  uVar3 = idol_draw::PackCmd(0,1,2,1,0);
  vuchain::SetGSReg(3,uVar3);
  *DAT_00e5aa58 = (char)(lVar5 + 5);
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar4 = FUN_0050300c((int)(lVar5 + 5),0);
  DAT_00e5aa58[3] = uVar4;
  puVar2 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar3 = FUN_00502ea0(1,0,0,0,0,1);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = 0xe;
  uVar3 = FUN_00502f98(1,0,0,1,0,0,1,1);
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = 0x16;
  uVar3 = FUN_00502ea0(1,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  *(undefined8 *)(puVar2 + 0x38) = 0x10;
  uVar3 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  uVar3 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x7f,0);
  *(undefined8 *)(puVar2 + 0x48) = uVar3;
  uVar3 = FUN_00502ea0(lVar5,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
  *(undefined8 *)(puVar2 + 0x58) = 0x44;
  if (0 < iVar6) {
    iVar1 = (int)((uVar9 & 0xffffffff) << 3);
    iVar7 = 0;
    puVar10 = (undefined8 *)(puVar2 + 0x60);
    iVar12 = (uVar11 & 0x1fffffff) * -8;
    iVar8 = 0x50;
    do {
      uVar3 = FUN_00502fec(iVar12 + 0x8000,0x8000 - iVar1,0);
      *puVar10 = uVar3;
      uVar3 = FUN_00502fec(iVar12 + 0x8200,iVar1 + 0x7ff0,0);
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 2;
      iVar12 = iVar12 + 0x200;
      *(undefined8 *)(puVar2 + iVar8 + 0x18) = uVar3;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < iVar6);
  }
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(lVar5 << 4) + 0x50;
  return;
}



//==== 00152b44  ns=draw  size=0x2b0
// sig: undefined ???_DrawScreenEffect_BuildBlendPacket(void)
// callers(1): 00152df8 draw::DrawScreenEffect_152df8
// callees(5): 00502e70 FUN_00502e70; 00502ea0 FUN_00502ea0; 00502f7c idol_draw::Blend; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void draw::____DrawScreenEffect_BuildBlendPacket(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar4;
  undefined8 uVar3;
  int iVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = (uint)g_FrameBufWidth;
  uVar9 = (ulonglong)g_FrameBufHeight;
  iVar6 = ((int)g_FrameBufWidth >> 5) +
          (uint)(g_FrameBufWidth < 0 && (g_FrameBufWidth & 0x1fU) != 0);
  lVar5 = (longlong)iVar6;
  *DAT_00e5aa58 = (char)(lVar5 + 5);
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar4 = FUN_0050300c((int)(lVar5 + 5),0);
  DAT_00e5aa58[3] = uVar4;
  puVar2 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar3 = FUN_00502ea0(1,0,0,0,0,1);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = 0xe;
  uVar3 = idol_draw::Blend(1,0,0x80,1,1,1,1,1);
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = 0x16;
  uVar3 = FUN_00502ea0(1,0,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  *(undefined8 *)(puVar2 + 0x38) = 0x10;
  uVar3 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  *(undefined8 *)(puVar2 + 0x48) = param_1;
  uVar3 = FUN_00502ea0(lVar5,1,0,0,1,2);
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
  *(undefined8 *)(puVar2 + 0x58) = 0x44;
  if (0 < iVar6) {
    iVar1 = (int)((uVar9 & 0xffffffff) << 3);
    iVar7 = 0;
    puVar10 = (undefined8 *)(puVar2 + 0x60);
    iVar12 = (uVar11 & 0x1fffffff) * -8;
    iVar8 = 0x50;
    do {
      uVar3 = FUN_00502fec(iVar12 + 0x8000,0x8000 - iVar1,0);
      *puVar10 = uVar3;
      uVar3 = FUN_00502fec(iVar12 + 0x8200,iVar1 + 0x7ff0,0);
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 2;
      iVar12 = iVar12 + 0x200;
      *(undefined8 *)(puVar2 + iVar8 + 0x18) = uVar3;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < iVar6);
  }
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(lVar5 << 4) + 0x50;
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}



//==== 00152df8  ns=draw  size=0x39c
// sig: undefined DrawScreenEffect_152df8(void)
// callers(1): 000f171c mobyfunc::DrawMobyShadows
// callees(12): 00152540 draw::???_DrawScreenEffect_BuildPacketA; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 001534e8 stub::STUB_001534e8; 001534ec stub::STUB_001534ec; 001534f0 stub::STUB_001534f0; 001534f4 stub::STUB_001534f4; 001534f8 stub::STUB_001534f8; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 0050300c FUN_0050300c

void draw::DrawScreenEffect_152df8(int *param_1)

{
  undefined1 uVar2;
  undefined8 uVar1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  
  ____DrawScreenEffect_BuildPacketB();
  *DAT_00e5aa58 = 7;
  DAT_00e5aa58[1] = ((byte)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 0x90) + 0x40;
  DAT_00e5aa58[2] = 0;
  uVar2 = FUN_0050300c(7,0);
  DAT_00e5aa58[3] = uVar2;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  iVar3 = *param_1;
  while (iVar3 != 0) {
    piVar4 = param_1 + 8;
    ____DrawScreenEffect_BuildPacketA
              (0x408f400000000000,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
    if (0 < *param_1) {
      iVar3 = 0;
      piVar5 = piVar4;
      do {
        if (*(short *)piVar4 == 0) {
          stub::STUB_001534ec(piVar4);
          piVar4 = piVar5 + 8;
          piVar5 = piVar4;
        }
        else if (*(short *)piVar4 == 1) {
          stub::STUB_001534f0(piVar4);
          piVar5 = piVar5 + 0xc;
          piVar4 = piVar4 + 0xc;
        }
        stub::STUB_001534f4(local_70,local_60);
        stub::STUB_001534f8(0x70000000,DAT_00a54f00,param_1[1]);
        *DAT_00e5aa58 = 3;
        DAT_00e5aa58[1] = 0x70;
        DAT_00e5aa58[2] = 0;
        uVar2 = FUN_0050300c(3,0);
        DAT_00e5aa58[3] = uVar2;
        DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
        stub::STUB_001534e8(2,DAT_00731804);
        *DAT_00e5aa58 = 3;
        DAT_00e5aa58[1] = 0x70;
        DAT_00e5aa58[2] = 0;
        uVar2 = FUN_0050300c(3,0);
        DAT_00e5aa58[3] = uVar2;
        DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
        stub::STUB_001534e8(1,DAT_00731800);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    param_1 = piVar4;
    iVar3 = *piVar4;
  }
  if (Cutscene == 0) {
    vuchain::SetGSReg(0x28,0x80070);
  }
  else {
    vuchain::SetGSReg(0x28,0x80080);
  }
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  ____DrawScreenEffect_BuildBlendPacket(0);
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar1);
  return;
}



//==== 00153194  ns=draw  size=0x350
// sig: undefined InitGsRegPresets_153194(void)
// callers(0): 
// callees(7): 00502e50 FUN_00502e50; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0

void draw::InitGsRegPresets_153194(void)

{
  DAT_007319fc = 0x10000;
  DAT_00731810 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731820 = FUN_00502f98(1,0,0,1,0,0,1,0);
  DAT_00731840 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731850 = FUN_00502f98(1,0,0,1,0,0,1,1);
  DAT_00731870 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_00731880 = FUN_00502f98(1,0,0,1,0,0,1,2);
  DAT_007318a0 = FUN_00502ea0(2,1,0,0,0,1);
  DAT_007318b0 = FUN_00502f98(1,0,0,1,0,0,1,3);
  DAT_007318d0 = FUN_00502ea0(6,1,0,0,0,1);
  DAT_007318f0 = FUN_00502e50(0);
  DAT_00731900 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00731910 = stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  DAT_00731920 = stub::STUB_00502fbc_RET_0(0xe00,8,0x12,9,9,1,0,0);
  DAT_00731930 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_00731940 = FUN_00502ea0(6,1,0,0,0,1);
  DAT_00731960 = FUN_00502e50(0);
  DAT_00731970 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00731980 = stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  DAT_00731990 = stub::STUB_00502fbc_RET_0(0x1000,8,0x12,9,9,1,0,0);
  DAT_007319a0 = idol_draw::PackCmd(0,1,0,1,0x80);
  return;
}



//==== 001534e8  ns=stub  size=0x4
// sig: undefined STUB_001534e8(void)
// callers(2): 001527c0 draw::???_DrawScreenEffect_WriteGifTag; 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void stub::STUB_001534e8(void)

{
  return;
}



//==== 001534ec  ns=stub  size=0x4
// sig: undefined STUB_001534ec(void)
// callers(2): 0015275c draw::???_DrawScreenEffect_DispatchCmd; 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void stub::STUB_001534ec(void)

{
  return;
}



//==== 001534f0  ns=stub  size=0x4
// sig: undefined STUB_001534f0(void)
// callers(2): 0015275c draw::???_DrawScreenEffect_DispatchCmd; 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void stub::STUB_001534f0(void)

{
  return;
}



//==== 001534f4  ns=stub  size=0x4
// sig: undefined STUB_001534f4(void)
// callers(1): 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void stub::STUB_001534f4(void)

{
  return;
}



//==== 001534f8  ns=stub  size=0x4
// sig: undefined STUB_001534f8(void)
// callers(1): 00152df8 draw::DrawScreenEffect_152df8
// callees(0): 

void stub::STUB_001534f8(void)

{
  return;
}



//==== 001534fc  ns=stub  size=0x4
// sig: undefined STUB_001534fc(void)
// callers(1): 000f171c mobyfunc::DrawMobyShadows
// callees(0): 

void stub::STUB_001534fc(void)

{
  return;
}



//==== 00153500  ns=stub  size=0x4
// sig: undefined STUB_00153500(void)
// callers(0): 
// callees(0): 

void stub::STUB_00153500(void)

{
  return;
}



//==== 00153504  ns=stub  size=0x4
// sig: undefined STUB_00153504(void)
// callers(0): 
// callees(0): 

void stub::STUB_00153504(void)

{
  return;
}



//==== 00153508  ns=stub  size=0x4
// sig: undefined STUB_00153508(void)
// callers(0): 
// callees(0): 

void stub::STUB_00153508(void)

{
  return;
}



//==== 0015350c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_SKYFUNC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_SKYFUNC(void)

{
  DAT_00731a6c = 0x10000;
  return;
}



//==== 00153550  ns=skyfunc  size=0x37c
// sig: undefined SkyInitNightSprites(void)
// callers(5): 00153e00 skyfunc::SkyLevel_00; 001554a0 skyfunc::SkyLevel_05; 00156148 skyfunc::SkyLevel_07; 0015774c skyfunc::SkyLevel_13; 00157d98 skyfunc::SkyLevel_15
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 00502730 fastfunc::FastIntToDouble; 005c8318 rand

void skyfunc::SkyInitNightSprites(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SKY *pSVar4;
  int iVar7;
  undefined2 uVar9;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar8;
  int iVar10;
  undefined1 *puVar11;
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  pSVar4 = Sky;
  iVar10 = 0;
  puVar11 = (undefined1 *)Sky->tex_defs;
  Sky->sprite_cnt = (short)(param_2 + param_1);
  if ((param_2 + param_1 & 0xffffU) != 0) {
    dVar28 = 0.00390625;
    dVar29 = 1.570796251296997;
    dVar30 = 3.141592502593994;
    dVar31 = -3.141592502593994;
    dVar32 = -0.16666656732559204;
    dVar33 = 0.008333025500178337;
    dVar34 = -0.0001980741071747616;
    dVar35 = 2.601886990305502e-06;
    dVar36 = 50.0;
    dVar37 = 36.0;
    dVar38 = 16.0;
    do {
      if (iVar10 < param_1) {
        *puVar11 = 1;
        uVar9 = mobyutil::MB_randInt(0x100);
        *(undefined2 *)(puVar11 + 0xc) = uVar9;
        iVar7 = rand();
        puVar11[2] = (byte)((uint)iVar7 >> 0x10) & 1;
        puVar11[3] = 0x48;
        dVar12 = (double)mobyutil::MB_randRot();
        *(float *)(puVar11 + 8) = (float)dVar12;
        iVar7 = mobyutil::MB_randInt(0x30);
        dVar12 = (double)fastfunc::FastIntToDouble(iVar7 + 0x20);
        *(float *)(puVar11 + 0x1c) = (float)(dVar12 * dVar28);
        dVar13 = (double)mobyutil::MB_randRot();
        dVar14 = (double)mobyutil::MB_randRot();
        dVar16 = (double)(float)(dVar13 + dVar29);
        dVar17 = (double)(float)(dVar14 + dVar29);
        dVar12 = (double)(float)(dVar30 - dVar14);
        if (dVar14 - (double)(float)(dVar30 - dVar14) < 0.0) {
          dVar12 = dVar14;
        }
        dVar19 = (double)(float)(dVar30 - dVar13);
        if (dVar13 - (double)(float)(dVar30 - dVar13) < 0.0) {
          dVar19 = dVar13;
        }
        dVar18 = (double)(float)(dVar30 - dVar16);
        if (dVar16 - (double)(float)(dVar30 - dVar16) < 0.0) {
          dVar18 = dVar16;
        }
        dVar20 = (double)(float)(dVar30 - dVar17);
        if (dVar17 - (double)(float)(dVar30 - dVar17) < 0.0) {
          dVar20 = dVar17;
        }
        dVar15 = (double)(float)(dVar31 - dVar14);
        if ((double)(float)(dVar31 - dVar14) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar31 - dVar13);
        if ((double)(float)(dVar31 - dVar13) - dVar19 < 0.0) {
          dVar12 = dVar19;
        }
        dVar13 = (double)(float)(dVar31 - dVar16);
        if ((double)(float)(dVar31 - dVar16) - dVar18 < 0.0) {
          dVar13 = dVar18;
        }
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar19 = (double)(float)(dVar12 * dVar12);
        dVar14 = (double)(float)(dVar31 - dVar17);
        if ((double)(float)(dVar31 - dVar17) - dVar20 < 0.0) {
          dVar14 = dVar20;
        }
        dVar18 = (double)(float)(dVar13 * dVar13);
        dVar24 = (double)(float)(dVar14 * dVar14);
        dVar26 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar12));
        dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar13));
        dVar25 = (double)(float)(dVar16 * dVar26);
        dVar27 = (double)(float)(dVar19 * dVar20);
        dVar17 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar14));
        dVar21 = (double)(float)(dVar18 * dVar22);
        dVar23 = (double)(float)(dVar24 * dVar17);
        fVar1 = (float)((double)(float)(dVar16 * dVar25) * dVar35 +
                       (double)(float)(dVar25 * dVar34 +
                                      (double)(float)(dVar26 * dVar33 +
                                                     (double)(float)((double)(float)(dVar16 * dVar15
                                                                                    ) * dVar32 +
                                                                    dVar15))));
        fVar2 = (float)((double)(float)(dVar24 * dVar23) * dVar35 +
                       (double)(float)(dVar23 * dVar34 +
                                      (double)(float)(dVar17 * dVar33 +
                                                     (double)(float)((double)(float)(dVar24 * dVar14
                                                                                    ) * dVar32 +
                                                                    dVar14))));
        *(float *)(puVar11 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar27) * dVar35 +
                                     (double)(float)(dVar27 * dVar34 +
                                                    (double)(float)(dVar20 * dVar33 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar12) * dVar32 + dVar12)))) * fVar1) *
                    dVar36);
        *(float *)(puVar11 + 0x10) =
             (float)((double)((float)((double)(float)(dVar18 * dVar21) * dVar35 +
                                     (double)(float)(dVar21 * dVar34 +
                                                    (double)(float)(dVar22 * dVar33 +
                                                                   (double)(float)((double)(float)(
                                                  dVar18 * dVar13) * dVar32 + dVar13)))) * fVar1) *
                    dVar36);
        *(float *)(puVar11 + 0x18) = (float)((double)(fVar2 * fVar2) * dVar37 + dVar38);
        uVar5 = mobyutil::MB_randInt(0x18);
        uVar6 = mobyutil::MB_randInt(0x20);
        uVar8 = rand();
        iVar3 = (int)((uVar6 & 0xff) << 0x18);
        iVar7 = iVar3 + (int)((uVar5 & 0xffffffff) << 0x10) + 0x30505050;
        *(uint *)(puVar11 + 0xc) =
             iVar7 + ((uint)((LZCOUNT(-(uVar8 & 0x10000)) << 0x3a) >> 0x3f) &
                     (iVar3 + (int)((uVar5 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar5) - iVar7)
        ;
      }
      else {
        *puVar11 = 0;
        iVar7 = rand();
        *(short *)(puVar11 + 0xc) = (short)((uint)iVar7 >> 0x10);
        iVar7 = rand();
        *(short *)(puVar11 + 0xe) = (short)((uint)iVar7 >> 0x10);
        puVar11[2] = 1;
        puVar11[3] = 0x48;
        *(undefined4 *)(puVar11 + 0x1c) = 0x3e23d70a;
      }
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 0x20;
    } while (iVar10 < (int)(uint)(ushort)pSVar4->sprite_cnt);
  }
  return;
}



//==== 001538f0  ns=skyfunc  size=0x2c8
// sig: undefined SkyUpdateNightSprites(void)
// callers(5): 00153e00 skyfunc::SkyLevel_00; 001554a0 skyfunc::SkyLevel_05; 00156148 skyfunc::SkyLevel_07; 0015774c skyfunc::SkyLevel_13; 00157d98 skyfunc::SkyLevel_15
// callees(2): 00502730 fastfunc::FastIntToDouble; 005c8318 rand

void skyfunc::SkyUpdateNightSprites(void)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  SKY *pSVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
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
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  pSVar4 = Sky;
  iVar6 = 0;
  pcVar7 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt != 0) {
    dVar24 = 0.0015339808305725455;
    dVar25 = 1.570796251296997;
    dVar26 = 3.141592502593994;
    dVar27 = -3.141592502593994;
    dVar28 = -0.16666656732559204;
    dVar29 = 0.008333025500178337;
    dVar30 = -0.0001980741071747616;
    dVar31 = 2.601886990305502e-06;
    dVar32 = 50.0;
    do {
      if (*pcVar7 == '\0') {
        uVar2 = *(ushort *)(pcVar7 + 0xc);
        *(short *)(pcVar7 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar7 + 0xe) = *(short *)(pcVar7 + 0xe) + 1;
        dVar8 = (double)fastfunc::FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar23 = (double)(float)(dVar8 * dVar24);
        dVar8 = (double)fastfunc::FastIntToDouble
                                  (((ulonglong)*(ushort *)(pcVar7 + 0xe) & 0xfff) - 0x800);
        dVar10 = (double)(float)(dVar23 + dVar25);
        dVar9 = (double)(float)(dVar8 * dVar24);
        dVar16 = (double)(float)(dVar9 + dVar25);
        dVar8 = (double)(float)(dVar26 - dVar23);
        if (dVar23 - (double)(float)(dVar26 - dVar23) < 0.0) {
          dVar8 = dVar23;
        }
        dVar17 = (double)(float)(dVar26 - dVar10);
        if (dVar10 - (double)(float)(dVar26 - dVar10) < 0.0) {
          dVar17 = dVar10;
        }
        dVar18 = (double)(float)(dVar26 - dVar9);
        if (dVar9 - (double)(float)(dVar26 - dVar9) < 0.0) {
          dVar18 = dVar9;
        }
        dVar12 = (double)(float)(dVar26 - dVar16);
        if (dVar16 - (double)(float)(dVar26 - dVar16) < 0.0) {
          dVar12 = dVar16;
        }
        dVar11 = (double)(float)(dVar27 - dVar23);
        if ((double)(float)(dVar27 - dVar23) - dVar8 < 0.0) {
          dVar11 = dVar8;
        }
        dVar8 = (double)(float)(dVar27 - dVar10);
        if ((double)(float)(dVar27 - dVar10) - dVar17 < 0.0) {
          dVar8 = dVar17;
        }
        dVar10 = (double)(float)(dVar27 - dVar9);
        if ((double)(float)(dVar27 - dVar9) - dVar18 < 0.0) {
          dVar10 = dVar18;
        }
        dVar23 = (double)(float)(dVar11 * dVar11);
        dVar17 = (double)(float)(dVar8 * dVar8);
        dVar18 = (double)(float)(dVar10 * dVar10);
        dVar9 = (double)(float)(dVar27 - dVar16);
        if ((double)(float)(dVar27 - dVar16) - dVar12 < 0.0) {
          dVar9 = dVar12;
        }
        dVar19 = (double)(float)(dVar9 * dVar9);
        dVar20 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar11));
        dVar16 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar8));
        dVar13 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar10));
        dVar22 = (double)(float)(dVar23 * dVar20);
        dVar21 = (double)(float)(dVar17 * dVar16);
        dVar12 = (double)(float)(dVar18 * dVar13);
        dVar14 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar9));
        dVar15 = (double)(float)(dVar19 * dVar14);
        fVar1 = (float)((double)(float)(dVar18 * dVar12) * dVar31 +
                       (double)(float)(dVar12 * dVar30 +
                                      (double)(float)(dVar13 * dVar29 +
                                                     (double)(float)((double)(float)(dVar18 * dVar10
                                                                                    ) * dVar28 +
                                                                    dVar10))));
        *(float *)(pcVar7 + 0x10) =
             (float)((double)((float)((double)(float)(dVar17 * dVar21) * dVar31 +
                                     (double)(float)(dVar21 * dVar30 +
                                                    (double)(float)(dVar16 * dVar29 +
                                                                   (double)(float)((double)(float)(
                                                  dVar17 * dVar8) * dVar28 + dVar8)))) * fVar1) *
                    dVar32);
        *(float *)(pcVar7 + 0x14) =
             (float)((double)((float)((double)(float)(dVar23 * dVar22) * dVar31 +
                                     (double)(float)(dVar22 * dVar30 +
                                                    (double)(float)(dVar20 * dVar29 +
                                                                   (double)(float)((double)(float)(
                                                  dVar23 * dVar11) * dVar28 + dVar11)))) * fVar1) *
                    dVar32);
        *(uint *)(pcVar7 + 4) =
             ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar7 + 0xc) & 0x3f) - 8) >> 0x3f) &
             0x50000000) + 0x202020f0;
        *(float *)(pcVar7 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar19 * dVar15) * dVar31 +
                                        (double)(float)(dVar15 * dVar30 +
                                                       (double)(float)(dVar14 * dVar29 +
                                                                      (double)(float)((double)(float
                                                  )(dVar19 * dVar9) * dVar28 + dVar9))))) * dVar32);
      }
      else if (*pcVar7 == '\x01') {
        iVar5 = rand();
        uVar3 = iVar5 >> 0x10;
        *(uint *)(pcVar7 + 4) =
             *(int *)(pcVar7 + 0xc) + (uVar3 & 0x1f00) * 0x400 + (uVar3 & 0x1f0) * 0x40 +
             (uVar3 & 0x1f) * 4 + -0x202020;
      }
      iVar6 = iVar6 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while (iVar6 < (int)(uint)(ushort)pSVar4->sprite_cnt);
  }
  return;
}



//==== 00153bb8  ns=skyfunc  size=0xa8
// sig: undefined SkyDrawShell(void)
// callers(0): 
// callees(1): 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyDrawShell(undefined8 param_1)

{
  idol_draw::DrawSkyShell
            (Sky,param_1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00153c60  ns=skyfunc  size=0x190
// sig: undefined SkyLevelNone(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(2): 00500af8 fastfunc::FastMtx4Identity; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevelNone(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  longlong id;
  int iVar3;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  if (Sky->shell_cnt != 0) {
    id = 0;
    do {
      idol_draw::DrawSkyShell
                (Sky,id,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
                 CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
                 CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
      iVar3 = (int)id + 1;
      id = (longlong)iVar3;
    } while (iVar3 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 00153e00  ns=skyfunc  size=0x3e4
// sig: undefined SkyLevel_00(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(8): 00153550 skyfunc::SkyInitNightSprites; 001538f0 skyfunc::SkyUpdateNightSprites; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_00(void)

{
  RsxCmd *pRVar1;
  ulonglong *puVar2;
  RenderingStep *pRVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  SKY *SKY;
  undefined4 outmtx;
  
  uVar18 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar18 - 0x100);
  *puVar2 = uVar18;
  puVar2[0x22] = in_LR;
  puVar2[0x1e] = unaff_r30;
  pRVar3 = DepthPass;
  puVar2[0x1d] = unaff_r29;
  puVar2[0x1b] = unaff_r27;
  pRVar1 = pRVar3->command;
  puVar2[0x19] = unaff_r25;
  puVar2[0x18] = unaff_r24;
  *pRVar1 = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar1 = pRVar3->command;
  puVar2[0x1c] = unaff_r28;
  pRVar1[1] = 0xff000000;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  puVar2[0x1a] = unaff_r26;
  puVar2[0x16] = unaff_r22;
  pRVar1 = pRVar3->command;
  puVar2[0x15] = unaff_r21;
  puVar2[0x14] = unaff_r20;
  puVar2[0x12] = unaff_r18;
  *pRVar1 = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar1 = pRVar3->command;
  puVar2[0x17] = unaff_r23;
  puVar2[0x13] = unaff_r19;
  pRVar1[1] = 0xffffff00;
  pRVar1 = pRVar3->command;
  puVar2[0x1f] = unaff_r31;
  pRVar3->command = pRVar1 + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  uVar17 = DAT_00a561bc;
  uVar16 = DAT_00a561b8;
  uVar15 = DAT_00a561b4;
  uVar14 = DAT_00a561b0;
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar17;
  *(undefined4 *)(puVar2 + 0xf) = uVar16;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar15;
  *(undefined4 *)(puVar2 + 0xe) = uVar14;
  idol_draw::DrawSkyShell(SKY,0,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,1,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0xf4,0xc);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar19 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar19);
  uVar17 = DAT_00a561bc;
  uVar16 = DAT_00a561b8;
  uVar15 = DAT_00a561b4;
  uVar14 = DAT_00a561b0;
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar17;
  *(undefined4 *)(puVar2 + 0xf) = uVar16;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar15;
  *(undefined4 *)(puVar2 + 0xe) = uVar14;
  idol_draw::DrawSkyShell(SKY,2,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  *(undefined4 *)((int)puVar2 + 0x8c) = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  *(undefined4 *)((int)puVar2 + 0x84) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  auVar20 = loadVectorLeftIndexed(in_LR,0x153df0);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar23 = loadVectorLeftIndexed(8,0x153df0);
  auVar22 = vectorLogicalAnd(auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
  auVar20 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = loadVectorLeftIndexed(4,0x153df0);
  auVar24 = loadVectorLeftIndexed(0xc,0x153df0);
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar22,0);
  auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
  auVar20 = (auVar20 ^ (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60)) >> 0x60 &
            (undefined1  [16])0xffffffff;
  outmtx = storeVectorElementWordIndexed
                     (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,
                      uVar18 - 0x100);
  *(undefined4 *)(puVar2 + 0x11) = outmtx;
  fastfunc::FastEulerToMtx2(&outMatrix,uVar18 - 0x80);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,3,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  uVar13 = DAT_00a561ac;
  uVar12 = DAT_00a561a8;
  uVar11 = DAT_00a561a4;
  uVar10 = DAT_00a561a0;
  uVar9 = DAT_00a5619c;
  uVar8 = DAT_00a56198;
  uVar7 = DAT_00a56194;
  uVar6 = DAT_00a56190;
  uVar5 = DAT_00a56188;
  uVar4 = DAT_00a56184;
  outmtx = outMatrix;
  SKY = Sky;
  *(undefined4 *)((int)puVar2 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar2 + 9) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x44) = uVar4;
  *(undefined4 *)(puVar2 + 8) = outmtx;
  uVar14 = DAT_00a561bc;
  uVar5 = DAT_00a561b8;
  uVar4 = DAT_00a561b4;
  outmtx = DAT_00a561b0;
  *(undefined4 *)((int)puVar2 + 0x5c) = uVar9;
  *(undefined4 *)(puVar2 + 0xb) = uVar8;
  *(undefined4 *)((int)puVar2 + 0x54) = uVar7;
  *(undefined4 *)(puVar2 + 10) = uVar6;
  *(undefined4 *)((int)puVar2 + 0x6c) = uVar13;
  *(undefined4 *)(puVar2 + 0xd) = uVar12;
  *(undefined4 *)((int)puVar2 + 100) = uVar11;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar14;
  *(undefined4 *)(puVar2 + 0xf) = uVar5;
  *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
  *(undefined4 *)(puVar2 + 0xe) = outmtx;
  idol_draw::DrawSkyShell(SKY,4,puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],puVar2[0xc],puVar2[0xd]);
  return;
}



//==== 00154208  ns=skyfunc  size=0x37c
// sig: undefined SkyLevel_01(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_01(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x1541e4);
    auVar25 = loadVectorLeftIndexed(4,0x1541e4);
    auVar28 = loadVectorLeftIndexed(8,0x1541e4);
    auVar29 = loadVectorLeftIndexed(0xc,0x1541e4);
    auVar30 = loadVectorLeftIndexed(0x10,0x1541e4);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x1541e4);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x1541e4);
    auVar33 = loadVectorLeftIndexed(0x1c,0x1541e4);
    auVar26 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 3) {
        if (iVar24 < 2) {
LAB_00154484:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 4) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (4 < iVar24) goto LAB_00154484;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 001545b8  ns=skyfunc  size=0x858
// sig: undefined SkyLevel_02(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell; 005c8318 rand

void skyfunc::SkyLevel_02(void)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  RsxCmd *pRVar4;
  int iVar5;
  RenderingStep *pRVar6;
  int iVar10;
  undefined2 uVar13;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar11;
  int iVar12;
  undefined8 uVar9;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  
  pRVar6 = DepthPass;
  iVar16 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar4 = pRVar6->command;
  pRVar6->command = pRVar4 + 2;
  pRVar4[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar15 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    iVar12 = 0;
    Sky->sprite_cnt = 0x100;
    dVar32 = 0.00390625;
    dVar33 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    dVar42 = 36.0;
    dVar43 = 16.0;
    pcVar14 = pcVar15;
    do {
      if (iVar12 < 0xf6) {
        *pcVar14 = '\x03';
        uVar13 = mobyutil::MB_randInt(0x100);
        *(undefined2 *)(pcVar14 + 0xc) = uVar13;
        iVar10 = rand();
        pcVar14[3] = 'H';
        pcVar14[2] = ((byte)((uint)iVar10 >> 0x10) & 1) + 2;
        dVar17 = (double)mobyutil::MB_randRot();
        *(float *)(pcVar14 + 8) = (float)dVar17;
        iVar10 = mobyutil::MB_randInt(0x30);
        dVar17 = (double)fastfunc::FastIntToDouble(iVar10 + 0x20);
        *(float *)(pcVar14 + 0x1c) = (float)(dVar17 * dVar32);
        dVar23 = (double)mobyutil::MB_randRot();
        dVar34 = (double)mobyutil::MB_randRot();
        dVar24 = (double)(float)(dVar23 + dVar33);
        dVar25 = (double)(float)(dVar34 + dVar33);
        dVar17 = (double)(float)(dVar35 - dVar34);
        if (dVar34 - (double)(float)(dVar35 - dVar34) < 0.0) {
          dVar17 = dVar34;
        }
        dVar18 = (double)(float)(dVar35 - dVar23);
        if (dVar23 - (double)(float)(dVar35 - dVar23) < 0.0) {
          dVar18 = dVar23;
        }
        dVar19 = (double)(float)(dVar35 - dVar24);
        if (dVar24 - (double)(float)(dVar35 - dVar24) < 0.0) {
          dVar19 = dVar24;
        }
        dVar20 = (double)(float)(dVar35 - dVar25);
        if (dVar25 - (double)(float)(dVar35 - dVar25) < 0.0) {
          dVar20 = dVar25;
        }
        dVar21 = (double)(float)(dVar36 - dVar34);
        if ((double)(float)(dVar36 - dVar34) - dVar17 < 0.0) {
          dVar21 = dVar17;
        }
        dVar17 = (double)(float)(dVar36 - dVar23);
        if ((double)(float)(dVar36 - dVar23) - dVar18 < 0.0) {
          dVar17 = dVar18;
        }
        dVar23 = (double)(float)(dVar36 - dVar24);
        if ((double)(float)(dVar36 - dVar24) - dVar19 < 0.0) {
          dVar23 = dVar19;
        }
        dVar24 = (double)(float)(dVar21 * dVar21);
        dVar18 = (double)(float)(dVar17 * dVar17);
        dVar34 = (double)(float)(dVar36 - dVar25);
        if ((double)(float)(dVar36 - dVar25) - dVar20 < 0.0) {
          dVar34 = dVar20;
        }
        dVar19 = (double)(float)(dVar23 * dVar23);
        dVar30 = (double)(float)(dVar34 * dVar34);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar17));
        dVar26 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar23));
        dVar31 = (double)(float)(dVar24 * dVar27);
        dVar28 = (double)(float)(dVar18 * dVar20);
        dVar25 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar34));
        dVar22 = (double)(float)(dVar19 * dVar26);
        dVar29 = (double)(float)(dVar30 * dVar25);
        fVar2 = (float)((double)(float)(dVar24 * dVar31) * dVar40 +
                       (double)(float)(dVar31 * dVar39 +
                                      (double)(float)(dVar27 * dVar38 +
                                                     (double)(float)((double)(float)(dVar24 * dVar21
                                                                                    ) * dVar37 +
                                                                    dVar21))));
        fVar1 = (float)((double)(float)(dVar30 * dVar29) * dVar40 +
                       (double)(float)(dVar29 * dVar39 +
                                      (double)(float)(dVar25 * dVar38 +
                                                     (double)(float)((double)(float)(dVar30 * dVar34
                                                                                    ) * dVar37 +
                                                                    dVar34))));
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar18 * dVar28) * dVar40 +
                                     (double)(float)(dVar28 * dVar39 +
                                                    (double)(float)(dVar20 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar18 * dVar17) * dVar37 + dVar17)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar19 * dVar22) * dVar40 +
                                     (double)(float)(dVar22 * dVar39 +
                                                    (double)(float)(dVar26 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar23) * dVar37 + dVar23)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar14 + 0x18) = (float)((double)(fVar1 * fVar1) * dVar42 + dVar43);
        uVar7 = mobyutil::MB_randInt(0x18);
        uVar8 = mobyutil::MB_randInt(0x20);
        uVar11 = rand();
        iVar5 = (int)((uVar8 & 0xff) << 0x18);
        iVar10 = iVar5 + (int)((uVar7 & 0xffffffff) << 0x10) + 0x30505050;
        *(uint *)(pcVar14 + 0xc) =
             iVar10 + ((uint)((LZCOUNT(-(uVar11 & 0x10000)) << 0x3a) >> 0x3f) &
                      (iVar5 + (int)((uVar7 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar7) -
                      iVar10);
      }
      else {
        *pcVar14 = '\0';
        iVar10 = rand();
        *(short *)(pcVar14 + 0xc) = (short)((uint)iVar10 >> 0x10);
        iVar10 = rand();
        *(short *)(pcVar14 + 0xe) = (short)((uint)iVar10 >> 0x10);
        pcVar14[2] = '\x03';
        pcVar14[3] = 'H';
        pcVar14[0x1c] = '>';
        pcVar14[0x1d] = '#';
        pcVar14[0x1e] = -0x29;
        pcVar14[0x1f] = '\n';
      }
      iVar12 = iVar12 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar12 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    dVar32 = 0.0015339808305725455;
    dVar33 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    do {
      if (*pcVar15 == '\0') {
        uVar3 = *(ushort *)(pcVar15 + 0xc);
        *(short *)(pcVar15 + 0xc) = (short)((ulonglong)uVar3 + 1);
        *(short *)(pcVar15 + 0xe) = *(short *)(pcVar15 + 0xe) + 1;
        dVar42 = (double)fastfunc::FastIntToDouble(((ulonglong)uVar3 + 1 & 0xfff) - 0x800);
        dVar34 = (double)(float)(dVar42 * dVar32);
        dVar42 = (double)fastfunc::FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar15 + 0xe) & 0xfff) - 0x800);
        dVar17 = (double)(float)(dVar34 + dVar33);
        dVar43 = (double)(float)(dVar42 * dVar32);
        dVar23 = (double)(float)(dVar43 + dVar33);
        dVar42 = (double)(float)(dVar35 - dVar34);
        if (dVar34 - (double)(float)(dVar35 - dVar34) < 0.0) {
          dVar42 = dVar34;
        }
        dVar24 = (double)(float)(dVar35 - dVar17);
        if (dVar17 - (double)(float)(dVar35 - dVar17) < 0.0) {
          dVar24 = dVar17;
        }
        dVar25 = (double)(float)(dVar35 - dVar43);
        if (dVar43 - (double)(float)(dVar35 - dVar43) < 0.0) {
          dVar25 = dVar43;
        }
        dVar18 = (double)(float)(dVar35 - dVar23);
        if (dVar23 - (double)(float)(dVar35 - dVar23) < 0.0) {
          dVar18 = dVar23;
        }
        dVar19 = (double)(float)(dVar36 - dVar34);
        if ((double)(float)(dVar36 - dVar34) - dVar42 < 0.0) {
          dVar19 = dVar42;
        }
        dVar42 = (double)(float)(dVar36 - dVar17);
        if ((double)(float)(dVar36 - dVar17) - dVar24 < 0.0) {
          dVar42 = dVar24;
        }
        dVar17 = (double)(float)(dVar36 - dVar43);
        if ((double)(float)(dVar36 - dVar43) - dVar25 < 0.0) {
          dVar17 = dVar25;
        }
        dVar34 = (double)(float)(dVar19 * dVar19);
        dVar24 = (double)(float)(dVar42 * dVar42);
        dVar25 = (double)(float)(dVar17 * dVar17);
        dVar43 = (double)(float)(dVar36 - dVar23);
        if ((double)(float)(dVar36 - dVar23) - dVar18 < 0.0) {
          dVar43 = dVar18;
        }
        dVar26 = (double)(float)(dVar43 * dVar43);
        dVar29 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar19));
        dVar23 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar42));
        dVar20 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar17));
        dVar31 = (double)(float)(dVar34 * dVar29);
        dVar30 = (double)(float)(dVar24 * dVar23);
        dVar18 = (double)(float)(dVar25 * dVar20);
        dVar21 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar43));
        dVar22 = (double)(float)(dVar26 * dVar21);
        fVar2 = (float)((double)(float)(dVar25 * dVar18) * dVar40 +
                       (double)(float)(dVar18 * dVar39 +
                                      (double)(float)(dVar20 * dVar38 +
                                                     (double)(float)((double)(float)(dVar25 * dVar17
                                                                                    ) * dVar37 +
                                                                    dVar17))));
        *(float *)(pcVar15 + 0x10) =
             (float)((double)((float)((double)(float)(dVar24 * dVar30) * dVar40 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar23 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar24 * dVar42) * dVar37 + dVar42)))) * fVar2) *
                    dVar41);
        *(float *)(pcVar15 + 0x14) =
             (float)((double)((float)((double)(float)(dVar34 * dVar31) * dVar40 +
                                     (double)(float)(dVar31 * dVar39 +
                                                    (double)(float)(dVar29 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar34 * dVar19) * dVar37 + dVar19)))) * fVar2) *
                    dVar41);
        *(uint *)(pcVar15 + 4) =
             ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar15 + 0xc) & 0x3f) - 8) >> 0x3f) &
             0x50000000) + 0x202020f0;
        *(float *)(pcVar15 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar26 * dVar22) * dVar40 +
                                        (double)(float)(dVar22 * dVar39 +
                                                       (double)(float)(dVar21 * dVar38 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar43) * dVar37 + dVar43))))) * dVar41
                    );
      }
      else if (*pcVar15 == '\x03') {
        iVar12 = rand();
        uVar11 = iVar12 >> 0x10;
        *(uint *)(pcVar15 + 4) =
             *(int *)(pcVar15 + 0xc) + (uVar11 & 0x1f00) * 0x400 + (uVar11 & 0x1f0) * 0x40 +
             (uVar11 & 0x1f) * 4 + -0x202020;
      }
      iVar16 = iVar16 + 1;
      pcVar15 = pcVar15 + 0x20;
    } while (iVar16 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar9);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00154e28  ns=skyfunc  size=0x354
// sig: undefined SkyLevel_03(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_03(void)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  SKY *pSVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar28 [16];
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x140;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar23;
  puVar4[0x2a] = in_LR;
  lVar21 = uVar23 - 0xa0;
  puVar22 = (undefined4 *)lVar21;
  puVar22[3] = in_vr31_32_3;
  puVar22[2] = in_vr31_32_2;
  puVar22[1] = in_vr31_32_1;
  *puVar22 = in_vr31_32_0;
  puVar4[0x26] = unaff_r30;
  pRVar5 = DepthPass;
  puVar4[0x25] = unaff_r29;
  *pRVar5->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  puVar4[0x27] = unaff_r31;
  *pRVar5->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar2 = pRVar5->command;
  pRVar5->command = pRVar2 + 2;
  pRVar2[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar2 = pRVar5->command;
  puVar4[0x24] = unaff_r28;
  puVar4[0x23] = unaff_r27;
  puVar4[0x22] = unaff_r26;
  puVar4[0x21] = unaff_r25;
  puVar4[0x20] = unaff_r24;
  puVar4[0x1f] = unaff_r23;
  puVar4[0x1e] = unaff_r22;
  puVar4[0x1d] = unaff_r21;
  puVar4[0x1c] = unaff_r20;
  puVar4[0x1b] = unaff_r19;
  puVar4[0x1a] = unaff_r18;
  puVar4[0x19] = unaff_r17;
  puVar4[0x18] = unaff_r16;
  puVar4[0x17] = unaff_r15;
  puVar4[0x16] = unaff_r14;
  pRVar5->command = pRVar2 + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  uVar20 = DAT_00a561bc;
  uVar19 = DAT_00a561b8;
  uVar18 = DAT_00a561b4;
  uVar17 = DAT_00a561b0;
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar20;
  *(undefined4 *)(puVar4 + 0xf) = uVar19;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar18;
  *(undefined4 *)(puVar4 + 0xe) = uVar17;
  idol_draw::DrawSkyShell
            (pSVar6,0,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  *(undefined4 *)((int)puVar4 + 0x8c) = 0;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *(undefined4 *)((int)puVar4 + 0x84) = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  auVar24 = loadVectorLeftIndexed(lVar21,0x154e10);
  auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = loadVectorLeftIndexed(4,0x154e10);
  auVar25 = vectorLogicalAnd(auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  auVar24 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = loadVectorLeftIndexed(8,0x154e10);
  auVar26 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar25 = loadVectorLeftIndexed(0xc,0x154e10);
  auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar28
                      );
  auVar24 = (auVar24 ^ auVar27) >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar4 + 0x11) = uVar3;
  fastfunc::FastEulerToMtx2(&outMatrix,uVar23 - 0xc0);
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  uVar17 = DAT_00a561bc;
  uVar8 = DAT_00a561b8;
  uVar7 = DAT_00a561b4;
  uVar3 = DAT_00a561b0;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar17;
  *(undefined4 *)(puVar4 + 0xf) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar7;
  *(undefined4 *)(puVar4 + 0xe) = uVar3;
  idol_draw::DrawSkyShell
            (pSVar6,1,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
  auVar24 = loadVectorLeftIndexed(0x10,0x154e10);
  auVar26 = loadVectorLeftIndexed(0x14,0x154e10);
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = vectorLogicalAnd(auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  auVar24 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar28
                      );
  auVar24 = (auVar24 ^ auVar27) >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar4 + 0x11) = uVar3;
  fastfunc::FastEulerToMtx2(&outMatrix,uVar23 - 0xc0);
  uVar16 = DAT_00a561ac;
  uVar15 = DAT_00a561a8;
  uVar14 = DAT_00a561a4;
  uVar13 = DAT_00a561a0;
  uVar12 = DAT_00a5619c;
  uVar11 = DAT_00a56198;
  uVar10 = DAT_00a56194;
  uVar9 = DAT_00a56190;
  uVar8 = DAT_00a56188;
  uVar7 = DAT_00a56184;
  uVar3 = outMatrix;
  pSVar6 = Sky;
  *(undefined4 *)((int)puVar4 + 0x4c) = DAT_00a5618c;
  *(undefined4 *)(puVar4 + 9) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x44) = uVar7;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  uVar17 = DAT_00a561bc;
  uVar8 = DAT_00a561b8;
  uVar7 = DAT_00a561b4;
  uVar3 = DAT_00a561b0;
  *(undefined4 *)((int)puVar4 + 0x5c) = uVar12;
  *(undefined4 *)(puVar4 + 0xb) = uVar11;
  *(undefined4 *)((int)puVar4 + 0x54) = uVar10;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  *(undefined4 *)((int)puVar4 + 0x6c) = uVar16;
  *(undefined4 *)(puVar4 + 0xd) = uVar15;
  *(undefined4 *)((int)puVar4 + 100) = uVar14;
  *(undefined4 *)(puVar4 + 0xc) = uVar13;
  *(undefined4 *)((int)puVar4 + 0x7c) = uVar17;
  *(undefined4 *)(puVar4 + 0xf) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar7;
  *(undefined4 *)(puVar4 + 0xe) = uVar3;
  idol_draw::DrawSkyShell
            (pSVar6,2,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],puVar4[0xd]);
  return;
}



//==== 00155198  ns=skyfunc  size=0x300
// sig: undefined SkyLevel_04(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_04(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong id;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar30 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x110;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x24] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x20] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x1e] = unaff_r28;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x21] = unaff_r31;
  puVar5[0x1f] = unaff_r29;
  if (sVar2 != 0) {
    auVar25 = loadVectorLeftIndexed(uVar22 - 0x30,0x15517c);
    auVar24 = loadVectorLeftIndexed(4,0x15517c);
    auVar27 = loadVectorLeftIndexed(8,0x15517c);
    id = 0;
    auVar28 = loadVectorLeftIndexed(0xc,0x15517c);
    auVar29 = loadVectorLeftIndexed(0x10,0x15517c);
    auVar30 = loadVectorLeftIndexed(0x14,0x15517c);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    do {
      iVar23 = (int)id;
      if (iVar23 < 2) {
        if (iVar23 < 1) {
LAB_001553a8:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar30 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar30 = vectorLogicalAnd(auVar30,auVar29);
          auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
          auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar24,auVar26);
          auVar30 = (auVar30 ^ auVar28) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,uVar22 - 0x90);
        }
      }
      else {
        if (2 < iVar23) goto LAB_001553a8;
        auVar30 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar30 = vectorLogicalAnd(auVar30,auVar25);
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar26);
        auVar30 = (auVar30 ^ auVar28) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,uVar22 - 0x90);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar23 + 1);
    } while (iVar23 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 001554a0  ns=skyfunc  size=0x2bc
// sig: undefined SkyLevel_05(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(8): 00153550 skyfunc::SkyInitNightSprites; 001538f0 skyfunc::SkyUpdateNightSprites; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_05(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [40];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000014;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar3);
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_40);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00155788  ns=skyfunc  size=0x9a0
// sig: undefined SkyLevel_06(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell; 005c8318 rand

void skyfunc::SkyLevel_06(void)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  ushort uVar5;
  RsxCmd *pRVar6;
  RenderingStep *pRVar7;
  int iVar11;
  undefined2 uVar14;
  ulonglong uVar8;
  uint uVar12;
  ulonglong uVar9;
  int iVar13;
  undefined8 uVar10;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xff000000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xffffff00;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar7->command[1] = 0xf3;
  pRVar6 = pRVar7->command;
  pRVar7->command = pRVar6 + 2;
  pRVar6[2] = NV4097_NO_OPERATION_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar17 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    dVar33 = 0.00390625;
    dVar34 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    lVar15 = 0;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    pcVar16 = pcVar17;
    do {
      if ((int)lVar15 < 0xf0) {
        if ((int)lVar15 < 0xea) {
          *pcVar16 = '\x03';
          uVar14 = mobyutil::MB_randInt(0x100);
          *(undefined2 *)(pcVar16 + 0xc) = uVar14;
          iVar11 = rand();
          pcVar16[2] = (byte)((uint)iVar11 >> 0x10) & 1;
          pcVar16[3] = 'H';
          dVar42 = (double)mobyutil::MB_randRot();
          *(float *)(pcVar16 + 8) = (float)dVar42;
          iVar11 = mobyutil::MB_randInt(0x30);
          dVar42 = (double)fastfunc::FastIntToDouble(iVar11 + 0x20);
          *(float *)(pcVar16 + 0x1c) = (float)(dVar42 * dVar33);
          dVar19 = (double)mobyutil::MB_randRot();
          dVar20 = (double)mobyutil::MB_randRot();
          dVar21 = (double)(float)(dVar19 + dVar34);
          dVar26 = (double)(float)(dVar20 + dVar34);
          dVar42 = (double)(float)(dVar35 - dVar20);
          if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
            dVar42 = dVar20;
          }
          dVar32 = (double)(float)(dVar35 - dVar19);
          if (dVar19 - (double)(float)(dVar35 - dVar19) < 0.0) {
            dVar32 = dVar19;
          }
          dVar22 = (double)(float)(dVar35 - dVar21);
          if (dVar21 - (double)(float)(dVar35 - dVar21) < 0.0) {
            dVar22 = dVar21;
          }
          dVar23 = (double)(float)(dVar35 - dVar26);
          if (dVar26 - (double)(float)(dVar35 - dVar26) < 0.0) {
            dVar23 = dVar26;
          }
          dVar18 = (double)(float)(dVar36 - dVar20);
          if ((double)(float)(dVar36 - dVar20) - dVar42 < 0.0) {
            dVar18 = dVar42;
          }
          dVar42 = (double)(float)(dVar36 - dVar19);
          if ((double)(float)(dVar36 - dVar19) - dVar32 < 0.0) {
            dVar42 = dVar32;
          }
          dVar19 = (double)(float)(dVar36 - dVar21);
          if ((double)(float)(dVar36 - dVar21) - dVar22 < 0.0) {
            dVar19 = dVar22;
          }
          dVar21 = (double)(float)(dVar18 * dVar18);
          dVar32 = (double)(float)(dVar42 * dVar42);
          dVar20 = (double)(float)(dVar36 - dVar26);
          if ((double)(float)(dVar36 - dVar26) - dVar23 < 0.0) {
            dVar20 = dVar23;
          }
          dVar26 = (double)(float)(dVar19 * dVar19);
          dVar24 = (double)(float)(dVar20 * dVar20);
          dVar28 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
          dVar22 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar42));
          dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar19));
          dVar25 = (double)(float)(dVar21 * dVar28);
          dVar29 = (double)(float)(dVar32 * dVar22);
          dVar23 = (double)(float)(dVar26 * dVar30);
          dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar20));
          fVar1 = (float)((double)(float)(dVar21 * dVar25) * dVar40 +
                         (double)(float)(dVar25 * dVar39 +
                                        (double)(float)(dVar28 * dVar38 +
                                                       (double)(float)((double)(float)(dVar21 * 
                                                  dVar18) * dVar37 + dVar18))));
          dVar21 = (double)(float)(dVar24 * dVar27);
          *(float *)(pcVar16 + 0x14) =
               (float)((double)((float)((double)(float)(dVar32 * dVar29) * dVar40 +
                                       (double)(float)(dVar29 * dVar39 +
                                                      (double)(float)(dVar22 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar32 * dVar42) * dVar37 + dVar42)))) * fVar1) *
                      dVar41);
          *(float *)(pcVar16 + 0x10) =
               (float)((double)((float)((double)(float)(dVar26 * dVar23) * dVar40 +
                                       (double)(float)(dVar23 * dVar39 +
                                                      (double)(float)(dVar30 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar26 * dVar19) * dVar37 + dVar19)))) * fVar1) *
                      dVar41);
          *(float *)(pcVar16 + 0x18) =
               (float)((double)(float)((double)(float)(dVar24 * dVar21) * dVar40 +
                                      (double)(float)(dVar21 * dVar39 +
                                                     (double)(float)(dVar27 * dVar38 +
                                                                    (double)(float)((double)(float)(
                                                  dVar24 * dVar20) * dVar37 + dVar20)))) * dVar41);
          uVar9 = mobyutil::MB_randInt(0x18);
          uVar8 = mobyutil::MB_randInt(0x20);
          uVar12 = rand();
          iVar13 = (int)((uVar8 & 0xff) << 0x18);
          iVar11 = iVar13 + (int)((uVar9 & 0xffffffff) << 0x10) + 0x30585050;
          *(uint *)(pcVar16 + 0xc) =
               iVar11 + ((uint)((LZCOUNT(-(uVar12 & 0x10000)) << 0x3a) >> 0x3f) &
                        (iVar13 + (int)((uVar9 & 0xffffffff) << 8) + 0x30505850U | (int)uVar9 + 8U)
                        - iVar11);
        }
        else {
          iVar11 = (int)(lVar15 - 0xeaU) >> 1;
          uVar9 = lVar15 - 0xeaU & 1;
          pcVar16[2] = '\x02';
          pcVar16[3] = 'H';
          dVar42 = (double)mobyutil::MB_randRot();
          *(float *)(pcVar16 + 8) = (float)dVar42;
          *pcVar16 = '\x02';
          iVar13 = (int)((longlong)iVar11 << 4);
          *(undefined4 *)(pcVar16 + 4) =
               *(undefined4 *)(&DAT_00731ae0 + (int)((longlong)iVar11 << 2));
          *(undefined4 *)(pcVar16 + 0x10) = *(undefined4 *)(iVar13 + 0x731ab0);
          *(undefined4 *)(pcVar16 + 0x14) = *(undefined4 *)(iVar13 + 0x731ab4);
          *(undefined4 *)(pcVar16 + 0x18) = *(undefined4 *)(iVar13 + 0x731ab8);
          uVar4 = *(undefined4 *)(iVar13 + 0x731abc);
          pcVar16[0xc] = (char)iVar11;
          *(undefined4 *)(pcVar16 + 0x1c) = uVar4;
          pcVar16[0xd] = (char)uVar9;
          pcVar16[0xe] = (char)(uVar9 << 3) * '\x03';
        }
      }
      else {
        *pcVar16 = '\0';
        iVar11 = rand();
        *(short *)(pcVar16 + 0xc) = (short)((uint)iVar11 >> 0x10);
        iVar11 = rand();
        *(short *)(pcVar16 + 0xe) = (short)((uint)iVar11 >> 0x10);
        pcVar16[2] = '\x01';
        pcVar16[3] = 'H';
        pcVar16[0x1c] = '>';
        pcVar16[0x1d] = '8';
        pcVar16[0x1e] = 'Q';
        pcVar16[0x1f] = -0x14;
        iVar11 = rand();
        *(undefined4 *)(pcVar16 + 4) = *(undefined4 *)(&DAT_00731aec + (iVar11 >> 0x10 & 3U) * 4);
      }
      lVar15 = lVar15 + 1;
      pcVar16 = pcVar16 + 0x20;
    } while ((int)lVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    iVar11 = 0;
    dVar33 = 0.0015339808305725455;
    dVar34 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    dVar36 = -3.141592502593994;
    dVar37 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar39 = -0.0001980741071747616;
    dVar40 = 2.601886990305502e-06;
    dVar41 = 50.0;
    dVar42 = 0.02454369328916073;
    do {
      cVar2 = *pcVar17;
      if (cVar2 == '\0') {
        uVar5 = *(ushort *)(pcVar17 + 0xc);
        *(short *)(pcVar17 + 0xc) = (short)((ulonglong)uVar5 + 1);
        *(short *)(pcVar17 + 0xe) = *(short *)(pcVar17 + 0xe) + 1;
        dVar19 = (double)fastfunc::FastIntToDouble(((ulonglong)uVar5 + 1 & 0xfff) - 0x800);
        dVar32 = (double)(float)(dVar19 * dVar33);
        dVar19 = (double)fastfunc::FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar17 + 0xe) & 0xfff) - 0x800);
        dVar21 = (double)(float)(dVar32 + dVar34);
        dVar20 = (double)(float)(dVar19 * dVar33);
        dVar26 = (double)(float)(dVar20 + dVar34);
        dVar19 = (double)(float)(dVar35 - dVar32);
        if (dVar32 - (double)(float)(dVar35 - dVar32) < 0.0) {
          dVar19 = dVar32;
        }
        uVar12 = *(uint *)(pcVar17 + 4) & 0xffffff | 0x24000000;
        dVar22 = (double)(float)(dVar35 - dVar21);
        if (dVar21 - (double)(float)(dVar35 - dVar21) < 0.0) {
          dVar22 = dVar21;
        }
        dVar23 = (double)(float)(dVar35 - dVar20);
        if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
          dVar23 = dVar20;
        }
        dVar18 = (double)(float)(dVar36 - dVar32);
        if ((double)(float)(dVar36 - dVar32) - dVar19 < 0.0) {
          dVar18 = dVar19;
        }
        dVar19 = (double)(float)(dVar35 - dVar26);
        if (dVar26 - (double)(float)(dVar35 - dVar26) < 0.0) {
          dVar19 = dVar26;
        }
        dVar32 = (double)(float)(dVar36 - dVar21);
        if ((double)(float)(dVar36 - dVar21) - dVar22 < 0.0) {
          dVar32 = dVar22;
        }
        dVar21 = (double)(float)(dVar36 - dVar20);
        if ((double)(float)(dVar36 - dVar20) - dVar23 < 0.0) {
          dVar21 = dVar23;
        }
        dVar22 = (double)(float)(dVar18 * dVar18);
        dVar23 = (double)(float)(dVar32 * dVar32);
        dVar24 = (double)(float)(dVar21 * dVar21);
        dVar20 = (double)(float)(dVar36 - dVar26);
        if ((double)(float)(dVar36 - dVar26) - dVar19 < 0.0) {
          dVar20 = dVar19;
        }
        dVar29 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar18));
        dVar31 = (double)(float)(dVar20 * dVar20);
        dVar27 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar32));
        dVar19 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar26 = (double)(float)(dVar22 * dVar29);
        dVar30 = (double)(float)(dVar23 * dVar27);
        dVar28 = (double)(float)(dVar24 * dVar19);
        dVar25 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar20));
        fVar1 = (float)((double)(float)(dVar24 * dVar28) * dVar40 +
                       (double)(float)(dVar28 * dVar39 +
                                      (double)(float)(dVar19 * dVar38 +
                                                     (double)(float)((double)(float)(dVar24 * dVar21
                                                                                    ) * dVar37 +
                                                                    dVar21))));
        dVar19 = (double)(float)(dVar31 * dVar25);
        *(float *)(pcVar17 + 0x10) =
             (float)((double)((float)((double)(float)(dVar23 * dVar30) * dVar40 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar27 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar23 * dVar32) * dVar37 + dVar32)))) * fVar1) *
                    dVar41);
        *(float *)(pcVar17 + 0x14) =
             (float)((double)((float)((double)(float)(dVar22 * dVar26) * dVar40 +
                                     (double)(float)(dVar26 * dVar39 +
                                                    (double)(float)(dVar29 * dVar38 +
                                                                   (double)(float)((double)(float)(
                                                  dVar22 * dVar18) * dVar37 + dVar18)))) * fVar1) *
                    dVar41);
        *(uint *)(pcVar17 + 4) =
             uVar12 + ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar17 + 0xc) & 0x3f) - 8) >> 0x3f
                             ) & (*(uint *)(pcVar17 + 4) & 0xffffff | 0x70000000) - uVar12);
        *(float *)(pcVar17 + 0x18) =
             (float)((double)(float)((double)(float)(dVar31 * dVar19) * dVar40 +
                                    (double)(float)(dVar19 * dVar39 +
                                                   (double)(float)(dVar25 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar20) * dVar37 + dVar20)))) * dVar41);
      }
      else if (cVar2 == '\x02') {
        uVar9 = (ulonglong)(byte)pcVar17[0xe] +
                ((((ulonglong)(byte)pcVar17[0xe] + 2) * 0x55 << 0x20) >> 0x2c) * -0x30 + 1;
        pcVar17[0xe] = (char)uVar9;
        if ((uVar9 & 0xff) == 0) {
          bVar3 = pcVar17[0xd];
          iVar13 = rand();
          dVar19 = (double)fastfunc::FastIntToDouble
                                     (((ulonglong)bVar3 << 5 |
                                      (ulonglong)(uint)(iVar13 >> 0x10) & 0xf) - 8);
          uVar9 = (ulonglong)(byte)pcVar17[0xe];
          *(float *)(pcVar17 + 8) = (float)(dVar19 * dVar42);
        }
        uVar9 = uVar9 & 0xff;
        iVar13 = rand();
        uVar12 = iVar13 >> 0x10;
        *(uint *)(pcVar17 + 4) =
             *(int *)(&DAT_00731ae0 + (uint)(byte)pcVar17[0xc] * 4) + (uVar12 & 0xf00) * 0x100 +
             (uVar12 & 0xf0) * 0x10 + (uVar12 & 0xf) +
             (int)((uVar9 * 4 + ((longlong)(uVar9 * -4 + 0x60) >> 0x3f & uVar9 * -8 + 0xc0) &
                   0xffffffff) << 0x18);
      }
      else if (cVar2 == '\x03') {
        iVar13 = rand();
        uVar12 = iVar13 >> 0x10;
        *(uint *)(pcVar17 + 4) =
             *(int *)(pcVar17 + 0xc) + (uVar12 & 0x1f00) * 0x400 + (uVar12 & 0x1f0) * 0x40 +
             (uVar12 & 0x1f) * 4 + -0x202020;
      }
      iVar11 = iVar11 + 1;
      pcVar17 = pcVar17 + 0x20;
    } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar10 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar10);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00156148  ns=skyfunc  size=0x400
// sig: undefined SkyLevel_07(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(8): 00153550 skyfunc::SkyInitNightSprites; 001538f0 skyfunc::SkyUpdateNightSprites; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_07(void)

{
  RsxCmd *pRVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_90 [32];
  
  pRVar3 = DepthPass;
  auVar8 = ZEXT416(0xffffffff);
  auVar7 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(in_LR,0x156128);
  uVar5 = (ulonglong)DAT_00a15f64;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(8);
  auVar10 = loadVectorLeftIndexed(0x10,uVar5);
  auVar12 = loadVectorLeftIndexed(0x14,uVar5);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar6,auVar7);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar6,auVar9);
  auVar13 = loadVectorLeftIndexed(0x18,uVar5);
  auVar7 = ZEXT416(0xfffffff0);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar6,auVar9);
  auVar6 = loadVectorLeftIndexed(4,0x156128);
  auVar11 = vectorConvertToUnsignedFixedPointWordSaturate(auVar10,0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorConvertToUnsignedFixedPointWordSaturate(auVar12,0);
  auVar10 = loadVectorLeftIndexed(8,0x156128);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xc,0x156128);
  auVar14 = loadVectorLeftIndexed(0x10,0x156128);
  auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
  auVar11 = vectorRotateLeftIntegerWord
                      (auVar11,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorRotateLeftIntegerWord
                      (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  auVar6 = vectorConditionalSelect
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11,
                      auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar8 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = vectorConditionalSelect
                     (auVar6,auVar12,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar8 = vectorConditionalSelect
                     (auVar7,auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar4);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_90);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00156550  ns=skyfunc  size=0x2e8
// sig: undefined SkyLevel_08(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_08(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined1 auStack_a0 [40];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff0d0d13;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_a0);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00156840  ns=skyfunc  size=0x378
// sig: undefined SkyLevel_09(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_09(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined1 local_a0 [32];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,local_a0);
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,4,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00156bd8  ns=skyfunc  size=0x434
// sig: undefined SkyLevel_10(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_10(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar42 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x140;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x2a] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x26] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x24] = unaff_r28;
  lVar23 = uVar22 - 0xc0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x27] = unaff_r31;
  puVar5[0x25] = unaff_r29;
  if (sVar2 != 0) {
    auVar34 = ZEXT416(10);
    auVar33 = ZEXT416(0xfffffff0);
    auVar38 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = ZEXT416(5);
    auVar41 = vectorRotateLeftIntegerWord
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar38);
    auVar39 = vectorRotateLeftIntegerWord
                        (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar38);
    auVar34 = loadVectorLeftIndexed(uVar22 - 0x30,0x156bb8);
    auVar33 = loadVectorLeftIndexed(4,0x156bb8);
    id = 0;
    auVar35 = loadVectorLeftIndexed(8,0x156bb8);
    auVar36 = loadVectorLeftIndexed(0xc,0x156bb8);
    auVar37 = loadVectorLeftIndexed(0x10,0x156bb8);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x14,0x156bb8);
    auVar42 = loadVectorLeftIndexed(0x18,0x156bb8);
    auVar34 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 0) {
LAB_00156f04:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else if (iVar24 < 1) {
          auVar42 = ZEXT416(1);
          auVar31 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar42 = vectorRotateLeftIntegerWord
                              (auVar31,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                              );
          auVar42 = vectorLogicalAnd(auVar42,auVar37);
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
          auVar42 = (auVar42 ^ auVar36) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
        else {
          auVar42 = ZEXT416(0);
          auVar31 = ZEXT416(5);
          auVar28 = ZEXT416(0xfffffff0);
          auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar42 = vectorMultiplySumSignedHalfWordModulo
                              (auVar32,auVar39,
                               auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
          auVar31 = vectorMultiplyOddUnsignedHalfWord
                              (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                              );
          auVar42 = vectorShiftLeftIntegerWord
                              (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                              );
          auVar25._0_4_ = auVar42._0_4_ + auVar31._0_4_;
          auVar25._8_8_ = auVar42._8_8_;
          auVar25._4_4_ = auVar42._4_4_ + auVar31._4_4_;
          auVar26._0_8_ = auVar25._0_8_;
          auVar26._12_4_ = auVar42._12_4_;
          auVar26._8_4_ = auVar42._8_4_ + auVar31._8_4_;
          auVar27._0_12_ = auVar26._0_12_;
          auVar27._12_4_ = auVar26._12_4_ + auVar31._12_4_;
          auVar42 = vectorLogicalAnd(auVar27,auVar40);
          auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
          auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
          auVar42 = (auVar42 ^ auVar36) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar42 = ZEXT416(0);
        auVar31 = ZEXT416(10);
        auVar28 = ZEXT416(0xfffffff0);
        auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar42 = vectorMultiplySumSignedHalfWordModulo
                            (auVar32,auVar41,
                             auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar32 = vectorMultiplyOddUnsignedHalfWord
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar42 = vectorShiftLeftIntegerWord
                            (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
        auVar28._0_4_ = auVar42._0_4_ + auVar32._0_4_;
        auVar28._8_8_ = auVar42._8_8_;
        auVar28._4_4_ = auVar42._4_4_ + auVar32._4_4_;
        auVar31._0_8_ = auVar28._0_8_;
        auVar31._12_4_ = auVar42._12_4_;
        auVar31._8_4_ = auVar42._8_4_ + auVar32._8_4_;
        auVar42._0_12_ = auVar31._0_12_;
        auVar42._12_4_ = auVar31._12_4_ + auVar32._12_4_;
        auVar42 = vectorLogicalAnd(auVar42,auVar34);
        auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar35,auVar38);
        auVar42 = (auVar42 ^ auVar36) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_00156f04;
        auVar42 = ZEXT416(0);
        auVar31 = ZEXT416(10);
        auVar28 = ZEXT416(0xfffffff0);
        auVar32 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar42 = vectorMultiplySumSignedHalfWordModulo
                            (auVar32,auVar41,
                             auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        auVar31 = vectorMultiplyOddUnsignedHalfWord
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar42 = vectorShiftLeftIntegerWord
                            (auVar42,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
        auVar32._0_4_ = auVar42._0_4_ + auVar31._0_4_;
        auVar32._8_8_ = auVar42._8_8_;
        auVar32._4_4_ = auVar42._4_4_ + auVar31._4_4_;
        auVar29._0_8_ = auVar32._0_8_;
        auVar29._12_4_ = auVar42._12_4_;
        auVar29._8_4_ = auVar42._8_4_ + auVar31._8_4_;
        auVar30._0_12_ = auVar29._0_12_;
        auVar30._12_4_ = auVar29._12_4_ + auVar31._12_4_;
        auVar42 = vectorLogicalAnd(auVar30,auVar40);
        auVar42 = vectorConvertFromSignedFixedPointWord(auVar42,0);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar33,auVar38);
        auVar42 = (auVar42 ^ auVar36) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 00157030  ns=skyfunc  size=0x37c
// sig: undefined SkyLevel_11(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_11(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar27 = loadVectorLeftIndexed(uVar22 - 0x30,0x15700c);
    auVar26 = loadVectorLeftIndexed(4,0x15700c);
    auVar28 = loadVectorLeftIndexed(8,0x15700c);
    auVar29 = loadVectorLeftIndexed(0xc,0x15700c);
    auVar30 = loadVectorLeftIndexed(0x10,0x15700c);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x15700c);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x15700c);
    auVar33 = loadVectorLeftIndexed(0x1c,0x15700c);
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_001572ac:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar25 = vectorLogicalAnd(auVar25,auVar31);
          auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
          auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar26,auVar27);
          auVar25 = (auVar25 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar25 = vectorLogicalAnd(auVar25,auVar32);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar28,auVar27);
        auVar25 = (auVar25 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_001572ac;
        auVar25 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar25 = vectorLogicalAnd(auVar25,auVar33);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar29,auVar27);
        auVar25 = (auVar25 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 001573d0  ns=skyfunc  size=0x37c
// sig: undefined SkyLevel_12(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_12(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x1573ac);
    auVar25 = loadVectorLeftIndexed(4,0x1573ac);
    auVar28 = loadVectorLeftIndexed(8,0x1573ac);
    auVar29 = loadVectorLeftIndexed(0xc,0x1573ac);
    auVar30 = loadVectorLeftIndexed(0x10,0x1573ac);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x1573ac);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x1573ac);
    auVar33 = loadVectorLeftIndexed(0x1c,0x1573ac);
    auVar26 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_0015764c:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_0015764c;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 0015774c  ns=skyfunc  size=0x2d4
// sig: undefined SkyLevel_13(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(7): 00153550 skyfunc::SkyInitNightSprites; 001538f0 skyfunc::SkyUpdateNightSprites; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_13(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar3);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00157a30  ns=skyfunc  size=0x350
// sig: undefined SkyLevel_14(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_14(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined1 auStack_c0 [40];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_c0);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_c0);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00157d98  ns=skyfunc  size=0x2fc
// sig: undefined SkyLevel_15(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(7): 00153550 skyfunc::SkyInitNightSprites; 001538f0 skyfunc::SkyUpdateNightSprites; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_15(void)

{
  RsxCmd *pRVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_LR;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pRVar3 = DepthPass;
  auVar8 = ZEXT416(0xffffffff);
  auVar7 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(in_LR,0x157d80);
  uVar5 = (ulonglong)DAT_00a15f64;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = ZEXT416(8);
  auVar10 = loadVectorLeftIndexed(0x10,uVar5);
  auVar12 = loadVectorLeftIndexed(0x14,uVar5);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar6,auVar7);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar6,auVar9);
  auVar13 = loadVectorLeftIndexed(0x18,uVar5);
  auVar7 = ZEXT416(0xfffffff0);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar6,auVar9);
  auVar6 = loadVectorLeftIndexed(4,0x157d80);
  auVar11 = vectorConvertToUnsignedFixedPointWordSaturate(auVar10,0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorConvertToUnsignedFixedPointWordSaturate(auVar12,0);
  auVar10 = loadVectorLeftIndexed(8,0x157d80);
  auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xc,0x157d80);
  auVar14 = loadVectorLeftIndexed(0x10,0x157d80);
  auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
  auVar11 = vectorRotateLeftIntegerWord
                      (auVar11,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorRotateLeftIntegerWord
                      (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  auVar6 = vectorConditionalSelect
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11,
                      auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar8 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = vectorConditionalSelect
                     (auVar6,auVar12,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar8 = vectorConditionalSelect
                     (auVar7,auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  if (Sky->sprite_cnt == 0) {
    SkyInitNightSprites(0x78,8);
  }
  SkyUpdateNightSprites();
  SkySpriteProc();
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar4);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 001580b8  ns=skyfunc  size=0x37c
// sig: undefined SkyLevel_16(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_16(void)

{
  longlong lVar1;
  short sVar2;
  RsxCmd *pRVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  RenderingStep *pRVar6;
  SKY *sky;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  longlong id;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar1 = uVar22 - 0x130;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar22;
  puVar5[0x28] = in_LR;
  puVar21 = (undefined4 *)(uVar22 - 0x30);
  puVar21[3] = in_vr31_32_3;
  puVar21[2] = in_vr31_32_2;
  puVar21[1] = in_vr31_32_1;
  *puVar21 = in_vr31_32_0;
  puVar5[0x24] = unaff_r30;
  pRVar6 = DepthPass;
  puVar5[0x22] = unaff_r28;
  lVar23 = uVar22 - 0xb0;
  *pRVar6->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xff000000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar6->command[1] = 0xffffff00;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar6->command[1] = 0xf3;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((int)puVar5 + 0x84) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  sVar2 = Sky->shell_cnt;
  puVar5[0x25] = unaff_r31;
  puVar5[0x23] = unaff_r29;
  if (sVar2 != 0) {
    auVar26 = loadVectorLeftIndexed(uVar22 - 0x30,0x158094);
    auVar25 = loadVectorLeftIndexed(4,0x158094);
    auVar28 = loadVectorLeftIndexed(8,0x158094);
    auVar29 = loadVectorLeftIndexed(0xc,0x158094);
    auVar30 = loadVectorLeftIndexed(0x10,0x158094);
    id = 0;
    auVar31 = loadVectorLeftIndexed(0x14,0x158094);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x18,0x158094);
    auVar33 = loadVectorLeftIndexed(0x1c,0x158094);
    auVar26 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    auVar26 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    do {
      iVar24 = (int)id;
      if (iVar24 < 2) {
        if (iVar24 < 1) {
LAB_00158334:
          fastfunc::FastMtx4Identity((float *)&outMatrix);
        }
        else {
          auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
          auVar33 = vectorLogicalAnd(auVar33,auVar31);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar25,auVar27);
          auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                             lVar1);
          *(undefined4 *)(puVar5 + 0x11) = uVar4;
          fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
        }
      }
      else if (iVar24 < 3) {
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar32);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      else {
        if (3 < iVar24) goto LAB_00158334;
        auVar33 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar33 = vectorLogicalAnd(auVar33,auVar26);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar29,auVar27);
        auVar33 = (auVar33 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar5 + 0x11) = uVar4;
        fastfunc::FastEulerToMtx2(&outMatrix,lVar23);
      }
      uVar20 = DAT_00a561bc;
      uVar19 = DAT_00a561b8;
      uVar18 = DAT_00a561b4;
      uVar17 = DAT_00a561b0;
      uVar16 = DAT_00a561ac;
      uVar15 = DAT_00a561a8;
      uVar14 = DAT_00a561a4;
      uVar13 = DAT_00a561a0;
      uVar12 = DAT_00a5619c;
      uVar11 = DAT_00a56198;
      uVar10 = DAT_00a56194;
      uVar9 = DAT_00a56190;
      uVar8 = DAT_00a56188;
      uVar7 = DAT_00a56184;
      uVar4 = outMatrix;
      sky = Sky;
      *(undefined4 *)((int)puVar5 + 0x4c) = DAT_00a5618c;
      *(undefined4 *)(puVar5 + 9) = uVar8;
      *(undefined4 *)((int)puVar5 + 0x44) = uVar7;
      *(undefined4 *)(puVar5 + 8) = uVar4;
      *(undefined4 *)((int)puVar5 + 0x5c) = uVar12;
      *(undefined4 *)(puVar5 + 0xb) = uVar11;
      *(undefined4 *)((int)puVar5 + 0x54) = uVar10;
      *(undefined4 *)(puVar5 + 10) = uVar9;
      *(undefined4 *)((int)puVar5 + 0x6c) = uVar16;
      *(undefined4 *)(puVar5 + 0xd) = uVar15;
      *(undefined4 *)((int)puVar5 + 100) = uVar14;
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
      *(undefined4 *)((int)puVar5 + 0x7c) = uVar20;
      *(undefined4 *)(puVar5 + 0xf) = uVar19;
      *(undefined4 *)((int)puVar5 + 0x74) = uVar18;
      *(undefined4 *)(puVar5 + 0xe) = uVar17;
      idol_draw::DrawSkyShell
                (sky,id,puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],puVar5[0xc],puVar5[0xd]);
      id = (longlong)(iVar24 + 1);
    } while (iVar24 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 00158460  ns=skyfunc  size=0x804
// sig: undefined SkyLevel_17(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell; 005c8318 rand

void skyfunc::SkyLevel_17(void)

{
  float fVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RenderingStep *pRVar5;
  int iVar9;
  undefined2 uVar12;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar10;
  int iVar11;
  undefined8 uVar8;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  pRVar5 = DepthPass;
  iVar15 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar3 = pRVar5->command;
  pRVar5->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar14 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    iVar11 = 0;
    dVar32 = 0.00390625;
    dVar33 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    pcVar13 = pcVar14;
    do {
      if (iVar11 < 0xf0) {
        *pcVar13 = '\x01';
        uVar12 = mobyutil::MB_randInt(0x100);
        *(undefined2 *)(pcVar13 + 0xc) = uVar12;
        iVar9 = rand();
        pcVar13[2] = (byte)((uint)iVar9 >> 0x10) & 1;
        pcVar13[3] = 'H';
        dVar16 = (double)mobyutil::MB_randRot();
        *(float *)(pcVar13 + 8) = (float)dVar16;
        iVar9 = mobyutil::MB_randInt(0x30);
        dVar16 = (double)fastfunc::FastIntToDouble(iVar9 + 0x20);
        *(float *)(pcVar13 + 0x1c) = (float)(dVar16 * dVar32);
        dVar17 = (double)mobyutil::MB_randRot();
        dVar18 = (double)mobyutil::MB_randRot();
        dVar25 = (double)(float)(dVar17 + dVar33);
        dVar31 = (double)(float)(dVar18 + dVar33);
        dVar16 = (double)(float)(dVar34 - dVar18);
        if (dVar18 - (double)(float)(dVar34 - dVar18) < 0.0) {
          dVar16 = dVar18;
        }
        dVar19 = (double)(float)(dVar34 - dVar17);
        if (dVar17 - (double)(float)(dVar34 - dVar17) < 0.0) {
          dVar19 = dVar17;
        }
        dVar22 = (double)(float)(dVar34 - dVar25);
        if (dVar25 - (double)(float)(dVar34 - dVar25) < 0.0) {
          dVar22 = dVar25;
        }
        dVar21 = (double)(float)(dVar34 - dVar31);
        if (dVar31 - (double)(float)(dVar34 - dVar31) < 0.0) {
          dVar21 = dVar31;
        }
        dVar23 = (double)(float)(dVar35 - dVar18);
        if ((double)(float)(dVar35 - dVar18) - dVar16 < 0.0) {
          dVar23 = dVar16;
        }
        dVar16 = (double)(float)(dVar35 - dVar17);
        if ((double)(float)(dVar35 - dVar17) - dVar19 < 0.0) {
          dVar16 = dVar19;
        }
        dVar17 = (double)(float)(dVar35 - dVar25);
        if ((double)(float)(dVar35 - dVar25) - dVar22 < 0.0) {
          dVar17 = dVar22;
        }
        dVar25 = (double)(float)(dVar23 * dVar23);
        dVar19 = (double)(float)(dVar16 * dVar16);
        dVar18 = (double)(float)(dVar35 - dVar31);
        if ((double)(float)(dVar35 - dVar31) - dVar21 < 0.0) {
          dVar18 = dVar21;
        }
        dVar31 = (double)(float)(dVar17 * dVar17);
        dVar20 = (double)(float)(dVar18 * dVar18);
        dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
        dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar16));
        dVar29 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar17));
        dVar24 = (double)(float)(dVar25 * dVar27);
        dVar28 = (double)(float)(dVar19 * dVar22);
        dVar21 = (double)(float)(dVar31 * dVar29);
        dVar26 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
        fVar1 = (float)((double)(float)(dVar25 * dVar24) * dVar39 +
                       (double)(float)(dVar24 * dVar38 +
                                      (double)(float)(dVar27 * dVar37 +
                                                     (double)(float)((double)(float)(dVar25 * dVar23
                                                                                    ) * dVar36 +
                                                                    dVar23))));
        dVar25 = (double)(float)(dVar20 * dVar26);
        *(float *)(pcVar13 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar28) * dVar39 +
                                     (double)(float)(dVar28 * dVar38 +
                                                    (double)(float)(dVar22 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar16) * dVar36 + dVar16)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar13 + 0x10) =
             (float)((double)((float)((double)(float)(dVar31 * dVar21) * dVar39 +
                                     (double)(float)(dVar21 * dVar38 +
                                                    (double)(float)(dVar29 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar31 * dVar17) * dVar36 + dVar17)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar13 + 0x18) =
             (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar39 +
                                    (double)(float)(dVar25 * dVar38 +
                                                   (double)(float)(dVar26 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar20 * dVar18) * dVar36 + dVar18)))) * dVar40);
        uVar6 = mobyutil::MB_randInt(0x18);
        uVar7 = mobyutil::MB_randInt(0x20);
        uVar10 = rand();
        iVar4 = (int)((uVar7 & 0xff) << 0x18);
        iVar9 = iVar4 + (int)((uVar6 & 0xffffffff) << 0x10) + 0x30585050;
        *(uint *)(pcVar13 + 0xc) =
             iVar9 + ((uint)((LZCOUNT(-(uVar10 & 0x10000)) << 0x3a) >> 0x3f) &
                     (iVar4 + (int)((uVar6 & 0xffffffff) << 8) + 0x30505850U | (int)uVar6 + 8U) -
                     iVar9);
      }
      else {
        *pcVar13 = '\0';
        iVar9 = rand();
        *(short *)(pcVar13 + 0xc) = (short)((uint)iVar9 >> 0x10);
        iVar9 = rand();
        *(short *)(pcVar13 + 0xe) = (short)((uint)iVar9 >> 0x10);
        pcVar13[2] = '\x01';
        pcVar13[3] = 'H';
        pcVar13[0x1c] = '>';
        pcVar13[0x1d] = '8';
        pcVar13[0x1e] = 'Q';
        pcVar13[0x1f] = -0x14;
        iVar9 = rand();
        *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(&DAT_00731aec + (iVar9 >> 0x10 & 3U) * 4);
      }
      iVar11 = iVar11 + 1;
      pcVar13 = pcVar13 + 0x20;
    } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  if (Sky->sprite_cnt != 0) {
    dVar32 = 0.0015339808305725455;
    dVar33 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar35 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    do {
      if (*pcVar14 == '\0') {
        uVar2 = *(ushort *)(pcVar14 + 0xc);
        *(short *)(pcVar14 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar14 + 0xe) = *(short *)(pcVar14 + 0xe) + 1;
        dVar16 = (double)fastfunc::FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar31 = (double)(float)(dVar16 * dVar32);
        dVar16 = (double)fastfunc::FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar14 + 0xe) & 0xfff) - 0x800);
        dVar18 = (double)(float)(dVar31 + dVar33);
        dVar17 = (double)(float)(dVar16 * dVar32);
        dVar25 = (double)(float)(dVar17 + dVar33);
        dVar16 = (double)(float)(dVar34 - dVar31);
        if (dVar31 - (double)(float)(dVar34 - dVar31) < 0.0) {
          dVar16 = dVar31;
        }
        dVar19 = (double)(float)(dVar34 - dVar18);
        if (dVar18 - (double)(float)(dVar34 - dVar18) < 0.0) {
          dVar19 = dVar18;
        }
        dVar22 = (double)(float)(dVar34 - dVar17);
        if (dVar17 - (double)(float)(dVar34 - dVar17) < 0.0) {
          dVar22 = dVar17;
        }
        uVar10 = *(uint *)(pcVar14 + 4) & 0xffffff | 0x24000000;
        dVar21 = (double)(float)(dVar35 - dVar31);
        if ((double)(float)(dVar35 - dVar31) - dVar16 < 0.0) {
          dVar21 = dVar16;
        }
        dVar16 = (double)(float)(dVar34 - dVar25);
        if (dVar25 - (double)(float)(dVar34 - dVar25) < 0.0) {
          dVar16 = dVar25;
        }
        dVar31 = (double)(float)(dVar35 - dVar18);
        if ((double)(float)(dVar35 - dVar18) - dVar19 < 0.0) {
          dVar31 = dVar19;
        }
        dVar18 = (double)(float)(dVar35 - dVar17);
        if ((double)(float)(dVar35 - dVar17) - dVar22 < 0.0) {
          dVar18 = dVar22;
        }
        dVar19 = (double)(float)(dVar21 * dVar21);
        iVar11 = uVar10 + ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar14 + 0xc) & 0x3f) - 8) >>
                                 0x3f) & (*(uint *)(pcVar14 + 4) & 0xffffff | 0x70000000) - uVar10);
        dVar22 = (double)(float)(dVar31 * dVar31);
        dVar23 = (double)(float)(dVar18 * dVar18);
        dVar17 = (double)(float)(dVar35 - dVar25);
        if ((double)(float)(dVar35 - dVar25) - dVar16 < 0.0) {
          dVar17 = dVar16;
        }
        dVar28 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
        dVar30 = (double)(float)(dVar17 * dVar17);
        dVar26 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar31));
        dVar16 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar18));
        dVar20 = (double)(float)(dVar19 * dVar28);
        dVar29 = (double)(float)(dVar22 * dVar26);
        dVar27 = (double)(float)(dVar23 * dVar16);
        dVar25 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar17));
        dVar24 = (double)(float)(dVar30 * dVar25);
        fVar1 = (float)((double)(float)(dVar23 * dVar27) * dVar39 +
                       (double)(float)(dVar27 * dVar38 +
                                      (double)(float)(dVar16 * dVar37 +
                                                     (double)(float)((double)(float)(dVar23 * dVar18
                                                                                    ) * dVar36 +
                                                                    dVar18))));
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar22 * dVar29) * dVar39 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar26 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar22 * dVar31) * dVar36 + dVar31)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar19 * dVar20) * dVar39 +
                                     (double)(float)(dVar20 * dVar38 +
                                                    (double)(float)(dVar28 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar19 * dVar21) * dVar36 + dVar21)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x18) =
             (float)((double)(float)((double)(float)(dVar30 * dVar24) * dVar39 +
                                    (double)(float)(dVar24 * dVar38 +
                                                   (double)(float)(dVar25 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar30 * dVar17) * dVar36 + dVar17)))) * dVar40);
      }
      else {
        iVar11 = rand();
        uVar10 = iVar11 >> 0x10;
        iVar11 = *(int *)(pcVar14 + 0xc) + (uVar10 & 0x1f00) * 0x400 + (uVar10 & 0x1f0) * 0x40 +
                 (uVar10 & 0x1f) * 4 + -0x202020;
      }
      *(int *)(pcVar14 + 4) = iVar11;
      iVar15 = iVar15 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar8);
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00158c70  ns=skyfunc  size=0x470
// sig: undefined SkyLevel_18(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell

void skyfunc::SkyLevel_18(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined1 auStack_b0 [32];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_b0);
  idol_draw::DrawSkyShell
            (Sky,4,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastEulerToMtx2(&outMatrix,auStack_b0);
  idol_draw::DrawSkyShell
            (Sky,5,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,6,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00159118  ns=skyfunc  size=0x47c
// sig: undefined SkyLevel_19(void)
// callers(1): 000d93c0 initsky::InitSky
// callees(3): 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 0050a538 idol_draw::DrawSkyShell
// strings: 001590e8: '?333?@' (raw)

void skyfunc::SkyLevel_19(void)

{
  RsxCmd *pRVar1;
  int iVar2;
  RenderingStep *pRVar3;
  ulonglong id;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_a0 [40];
  
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xff000000;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar3->command[1] = 0xffffff00;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar3->command[1] = 0xf3;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  fastfunc::FastMtx4Identity(&outMatrix);
  if (Sky->shell_cnt != 0) {
    dVar6 = 0.550000011920929;
    dVar7 = 0.6000000238418579;
    dVar8 = 0.699999988079071;
    id = 0;
    dVar9 = 0.75;
    dVar10 = 0.800000011920929;
    do {
      dVar5 = 1.0;
      iVar4 = (int)id;
      iVar2 = *(int *)((int)Sky->shells + (int)((id & 0xffffffff) << 2));
      if (iVar4 == 5) {
        dVar5 = 1.25;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar10 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 4) {
        dVar5 = 1.5;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar9 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 3) {
        dVar5 = 2.0;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar8 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 2) {
        dVar5 = 2.5;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar7 + (double)*(float *)(iVar2 + 8));
      }
      else if (iVar4 == 1) {
        dVar5 = 3.0;
        *(float *)(iVar2 + 8) =
             (float)((double)DAT_00a56160 * dVar6 + (double)*(float *)(iVar2 + 8));
      }
      else {
        fastfunc::FastMtx4Identity(&outMatrix);
      }
      if (0 < iVar4) {
        fastfunc::FastEulerToMtx2(&outMatrix,local_a0);
        DAT_00a56184 = (float)((double)DAT_00a56184 * dVar5);
        DAT_00a56188 = (float)((double)DAT_00a56188 * dVar5);
        DAT_00a5618c = (float)((double)DAT_00a5618c * dVar5);
        outMatrix = (float)((double)outMatrix * dVar5);
        DAT_00a56190 = (float)((double)DAT_00a56190 * dVar5);
        DAT_00a56194 = (float)((double)DAT_00a56194 * dVar5);
        DAT_00a56198 = (float)((double)DAT_00a56198 * dVar5);
        DAT_00a5619c = (float)((double)DAT_00a5619c * dVar5);
        DAT_00a561a0 = (float)((double)DAT_00a561a0 * dVar5);
        DAT_00a561a4 = (float)((double)DAT_00a561a4 * dVar5);
        DAT_00a561a8 = (float)((double)DAT_00a561a8 * dVar5);
        DAT_00a561ac = (float)((double)DAT_00a561ac * dVar5);
        DAT_00a561b0 = DAT_00a56150;
        DAT_00a561b4 = DAT_00a56154;
        DAT_00a561b8 = DAT_00a56158;
        DAT_00a561bc = DAT_00a5615c;
      }
      idol_draw::DrawSkyShell
                (Sky,id,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
                 CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
                 CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
      id = (ulonglong)(iVar4 + 1);
    } while (iVar4 + 1 < (int)(uint)(ushort)Sky->shell_cnt);
  }
  return;
}



//==== 001595d0  ns=skyfunc  size=0x884
// sig: undefined SkyLevelGeneric(void)
// callers(2): 00013970 stub::Transition_DrawSky; 0006bb78 draw::DefaultDraw
// callees(11): 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 0015aa80 skyfunc::SkySpriteProc; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 0050a538 idol_draw::DrawSkyShell; 005c8318 rand; 005c8420 seedRand

void skyfunc::SkyLevelGeneric(void)

{
  float fVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RenderingStep *pRVar5;
  int iVar9;
  undefined2 uVar12;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar10;
  int iVar11;
  undefined8 uVar8;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  
  pRVar5 = DepthPass;
  iVar15 = 0;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xff000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar5->command[1] = 0xffffff00;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf3;
  pRVar3 = pRVar5->command;
  pRVar5->command = pRVar3 + 2;
  pRVar3[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  fastfunc::FastMtx4Identity((float *)&outMatrix);
  idol_draw::DrawSkyShell
            (Sky,0,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,1,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  pcVar14 = (char *)Sky->tex_defs;
  if (Sky->sprite_cnt == 0) {
    Sky->sprite_cnt = 0x100;
    seedRand(0x3039);
    if (Sky->sprite_cnt != 0) {
      iVar11 = 0;
      dVar31 = 0.00390625;
      dVar32 = -3.0;
      dVar33 = 0.20000000298023224;
      dVar34 = 0.09000000357627869;
      dVar36 = 1.2000000476837158;
      dVar37 = 1.570796251296997;
      dVar38 = 3.141592502593994;
      dVar39 = -3.141592502593994;
      dVar40 = -0.16666656732559204;
      dVar41 = 0.008333025500178337;
      dVar42 = -0.0001980741071747616;
      dVar43 = 2.601886990305502e-06;
      dVar44 = 50.0;
      pcVar13 = pcVar14;
      do {
        if (iVar11 < 0xf6) {
          *pcVar13 = '\x01';
          uVar12 = mobyutil::MB_randInt(0x100);
          *(undefined2 *)(pcVar13 + 0xc) = uVar12;
          pcVar13[2] = '\x01';
          pcVar13[3] = 'H';
          dVar35 = (double)mobyutil::MB_randRot();
          *(float *)(pcVar13 + 8) = (float)dVar35;
          iVar9 = mobyutil::MB_randInt(0x18);
          dVar35 = (double)fastfunc::FastIntToDouble(iVar9 + 0x20);
          *(float *)(pcVar13 + 0x1c) = (float)(dVar35 * dVar31);
          dVar35 = (double)mobyutil::MB_randRot();
          dVar20 = (double)fastfunc::FastWrapRot((float)dVar32,(float)(dVar35 * dVar33));
          dVar35 = (double)mobyutil::MB_randRot();
          dVar16 = (double)(float)(dVar20 + dVar37);
          dVar21 = (double)(float)(dVar35 * dVar34 + dVar36);
          dVar22 = (double)(float)(dVar21 + dVar37);
          dVar35 = (double)(float)(dVar38 - dVar20);
          if (dVar20 - (double)(float)(dVar38 - dVar20) < 0.0) {
            dVar35 = dVar20;
          }
          dVar17 = (double)(float)(dVar38 - dVar16);
          if (dVar16 - (double)(float)(dVar38 - dVar16) < 0.0) {
            dVar17 = dVar16;
          }
          dVar18 = (double)(float)(dVar38 - dVar21);
          if (dVar21 - (double)(float)(dVar38 - dVar21) < 0.0) {
            dVar18 = dVar21;
          }
          dVar19 = (double)(float)(dVar39 - dVar20);
          if ((double)(float)(dVar39 - dVar20) - dVar35 < 0.0) {
            dVar19 = dVar35;
          }
          dVar35 = (double)(float)(dVar38 - dVar22);
          if (dVar22 - (double)(float)(dVar38 - dVar22) < 0.0) {
            dVar35 = dVar22;
          }
          dVar20 = (double)(float)(dVar39 - dVar16);
          if ((double)(float)(dVar39 - dVar16) - dVar17 < 0.0) {
            dVar20 = dVar17;
          }
          dVar16 = (double)(float)(dVar39 - dVar21);
          if ((double)(float)(dVar39 - dVar21) - dVar18 < 0.0) {
            dVar16 = dVar18;
          }
          dVar17 = (double)(float)(dVar19 * dVar19);
          dVar18 = (double)(float)(dVar20 * dVar20);
          dVar26 = (double)(float)(dVar16 * dVar16);
          dVar21 = (double)(float)(dVar39 - dVar22);
          if ((double)(float)(dVar39 - dVar22) - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
          dVar24 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar19));
          dVar27 = (double)(float)(dVar21 * dVar21);
          dVar30 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar20));
          dVar35 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar16));
          dVar28 = (double)(float)(dVar17 * dVar24);
          dVar25 = (double)(float)(dVar18 * dVar30);
          dVar23 = (double)(float)(dVar26 * dVar35);
          dVar22 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar21));
          dVar29 = (double)(float)(dVar27 * dVar22);
          fVar1 = (float)((double)(float)(dVar26 * dVar23) * dVar43 +
                         (double)(float)(dVar23 * dVar42 +
                                        (double)(float)(dVar35 * dVar41 +
                                                       (double)(float)((double)(float)(dVar26 * 
                                                  dVar16) * dVar40 + dVar16))));
          *(float *)(pcVar13 + 0x10) =
               (float)((double)((float)((double)(float)(dVar18 * dVar25) * dVar43 +
                                       (double)(float)(dVar25 * dVar42 +
                                                      (double)(float)(dVar30 * dVar41 +
                                                                     (double)(float)((double)(float)
                                                  (dVar18 * dVar20) * dVar40 + dVar20)))) * fVar1) *
                      dVar44);
          *(float *)(pcVar13 + 0x14) =
               (float)((double)((float)((double)(float)(dVar17 * dVar28) * dVar43 +
                                       (double)(float)(dVar28 * dVar42 +
                                                      (double)(float)(dVar24 * dVar41 +
                                                                     (double)(float)((double)(float)
                                                  (dVar17 * dVar19) * dVar40 + dVar19)))) * fVar1) *
                      dVar44);
          *(float *)(pcVar13 + 0x18) =
               (float)((double)(float)((double)(float)(dVar27 * dVar29) * dVar43 +
                                      (double)(float)(dVar29 * dVar42 +
                                                     (double)(float)(dVar22 * dVar41 +
                                                                    (double)(float)((double)(float)(
                                                  dVar27 * dVar21) * dVar40 + dVar21)))) * dVar44);
          uVar6 = mobyutil::MB_randInt(0x18);
          uVar7 = mobyutil::MB_randInt(0x20);
          uVar10 = rand();
          iVar4 = (int)((uVar7 & 0xff) << 0x18);
          iVar9 = iVar4 + (int)((uVar6 & 0xffffffff) << 0x10) + 0x30505050;
          *(uint *)(pcVar13 + 0xc) =
               iVar9 + ((uint)((LZCOUNT(-(uVar10 & 0x10000)) << 0x3a) >> 0x3f) &
                       (iVar4 + (int)((uVar6 & 0xffffffff) << 8) + 0x30505050U | (uint)uVar6) -
                       iVar9);
        }
        else {
          *pcVar13 = '\0';
          iVar9 = rand();
          *(short *)(pcVar13 + 0xc) = (short)((uint)iVar9 >> 0x10);
          iVar9 = rand();
          *(short *)(pcVar13 + 0xe) = (short)((uint)iVar9 >> 0x10);
          pcVar13[2] = '\x01';
          pcVar13[3] = 'H';
          pcVar13[0x1c] = '>';
          pcVar13[0x1d] = '#';
          pcVar13[0x1e] = -0x29;
          pcVar13[0x1f] = '\n';
        }
        iVar11 = iVar11 + 1;
        pcVar13 = pcVar13 + 0x20;
      } while (iVar11 < (int)(uint)(ushort)Sky->sprite_cnt);
    }
  }
  if (Sky->sprite_cnt != 0) {
    dVar31 = 0.0015339808305725455;
    dVar32 = 1.570796251296997;
    dVar33 = 3.141592502593994;
    dVar34 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar40 = 50.0;
    do {
      if (*pcVar14 == '\0') {
        uVar2 = *(ushort *)(pcVar14 + 0xc);
        *(short *)(pcVar14 + 0xc) = (short)((ulonglong)uVar2 + 1);
        *(short *)(pcVar14 + 0xe) = *(short *)(pcVar14 + 0xe) + 1;
        dVar41 = (double)fastfunc::FastIntToDouble(((ulonglong)uVar2 + 1 & 0xfff) - 0x800);
        dVar35 = (double)(float)(dVar41 * dVar31);
        dVar41 = (double)fastfunc::FastIntToDouble
                                   (((ulonglong)*(ushort *)(pcVar14 + 0xe) & 0xfff) - 0x800);
        dVar43 = (double)(float)(dVar35 + dVar32);
        dVar42 = (double)(float)(dVar41 * dVar31);
        dVar44 = (double)(float)(dVar42 + dVar32);
        dVar41 = (double)(float)(dVar33 - dVar35);
        if (dVar35 - (double)(float)(dVar33 - dVar35) < 0.0) {
          dVar41 = dVar35;
        }
        dVar20 = (double)(float)(dVar33 - dVar43);
        if (dVar43 - (double)(float)(dVar33 - dVar43) < 0.0) {
          dVar20 = dVar43;
        }
        dVar21 = (double)(float)(dVar33 - dVar42);
        if (dVar42 - (double)(float)(dVar33 - dVar42) < 0.0) {
          dVar21 = dVar42;
        }
        dVar16 = (double)(float)(dVar33 - dVar44);
        if (dVar44 - (double)(float)(dVar33 - dVar44) < 0.0) {
          dVar16 = dVar44;
        }
        dVar22 = (double)(float)(dVar34 - dVar35);
        if ((double)(float)(dVar34 - dVar35) - dVar41 < 0.0) {
          dVar22 = dVar41;
        }
        dVar41 = (double)(float)(dVar34 - dVar43);
        if ((double)(float)(dVar34 - dVar43) - dVar20 < 0.0) {
          dVar41 = dVar20;
        }
        dVar43 = (double)(float)(dVar34 - dVar42);
        if ((double)(float)(dVar34 - dVar42) - dVar21 < 0.0) {
          dVar43 = dVar21;
        }
        dVar35 = (double)(float)(dVar22 * dVar22);
        iVar11 = ((uint)((longlong)(((ulonglong)*(ushort *)(pcVar14 + 0xc) & 0x3f) - 8) >> 0x3f) &
                 0x50000000) + 0x202020f0;
        dVar20 = (double)(float)(dVar41 * dVar41);
        dVar21 = (double)(float)(dVar43 * dVar43);
        dVar42 = (double)(float)(dVar34 - dVar44);
        if ((double)(float)(dVar34 - dVar44) - dVar16 < 0.0) {
          dVar42 = dVar16;
        }
        dVar26 = (double)(float)(dVar42 * dVar42);
        dVar28 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar22));
        dVar44 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar41));
        dVar18 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar43));
        dVar30 = (double)(float)(dVar35 * dVar28);
        dVar29 = (double)(float)(dVar20 * dVar44);
        dVar16 = (double)(float)(dVar21 * dVar18);
        dVar19 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar42));
        dVar17 = (double)(float)(dVar26 * dVar19);
        fVar1 = (float)((double)(float)(dVar21 * dVar16) * dVar39 +
                       (double)(float)(dVar16 * dVar38 +
                                      (double)(float)(dVar18 * dVar37 +
                                                     (double)(float)((double)(float)(dVar21 * dVar43
                                                                                    ) * dVar36 +
                                                                    dVar43))));
        *(float *)(pcVar14 + 0x10) =
             (float)((double)((float)((double)(float)(dVar20 * dVar29) * dVar39 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar44 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar20 * dVar41) * dVar36 + dVar41)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x14) =
             (float)((double)((float)((double)(float)(dVar35 * dVar30) * dVar39 +
                                     (double)(float)(dVar30 * dVar38 +
                                                    (double)(float)(dVar28 * dVar37 +
                                                                   (double)(float)((double)(float)(
                                                  dVar35 * dVar22) * dVar36 + dVar22)))) * fVar1) *
                    dVar40);
        *(float *)(pcVar14 + 0x18) =
             (float)(ABS((double)(float)((double)(float)(dVar26 * dVar17) * dVar39 +
                                        (double)(float)(dVar17 * dVar38 +
                                                       (double)(float)(dVar19 * dVar37 +
                                                                      (double)(float)((double)(float
                                                  )(dVar26 * dVar42) * dVar36 + dVar42))))) * dVar40
                    );
      }
      else {
        iVar11 = rand();
        uVar10 = iVar11 >> 0x10;
        iVar11 = *(int *)(pcVar14 + 0xc) + (uVar10 & 0x1f00) * 0x400 + (uVar10 & 0x1f0) * 0x40 +
                 (uVar10 & 0x1f) * 4 + -0x202020;
      }
      *(int *)(pcVar14 + 4) = iVar11;
      iVar15 = iVar15 + 1;
      pcVar14 = pcVar14 + 0x20;
    } while (iVar15 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  SkySpriteProc();
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar8);
  idol_draw::DrawSkyShell
            (Sky,2,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  idol_draw::DrawSkyShell
            (Sky,3,CONCAT44(outMatrix,DAT_00a56184),CONCAT44(DAT_00a56188,DAT_00a5618c),
             CONCAT44(DAT_00a56190,DAT_00a56194),CONCAT44(DAT_00a56198,DAT_00a5619c),
             CONCAT44(DAT_00a561a0,DAT_00a561a4),CONCAT44(DAT_00a561a8,DAT_00a561ac));
  return;
}



//==== 00159e54  ns=stub  size=0x4
// sig: undefined DoSkyGifPaging(void)
// callers(2): 00013970 stub::Transition_DrawSky; 000d93c0 initsky::InitSky
// callees(0): 

void stub::DoSkyGifPaging(void)

{
  return;
}



//==== 00159e58  ns=stub  size=0x4
// sig: undefined SetupGifPaging(void)
// callers(2): 00013970 stub::Transition_DrawSky; 000d93c0 initsky::InitSky
// callees(0): 

void stub::SetupGifPaging(void)

{
  return;
}



//==== 00159e88  ns=space  size=0x46c
// sig: undefined Space_DrawSkyShell(void)
// callers(1): 0016114c space::TransitionDraw_Space
// callees(7): 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 00500e08 fastfunc::FastEulerToMtx2; 00502578 fastfunc::FastWrapRot; 00502f7c idol_draw::Blend; 00502ffc stub::VU1_addGSregister; 0050a538 idol_draw::DrawSkyShell

void space::Space_DrawSkyShell(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  longlong id;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_80 [24];
  
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xff000000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar2->command[1] = 0xffffff00;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar2->command[1] = 0xf3;
  pRVar1 = pRVar2->command;
  pRVar2->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  fastfunc::FastMtx4Identity(&outMatrix);
  dVar6 = 0.0;
  if (*(short *)(*(int *)(DAT_00a10920 + 8) + 6) != 0) {
    dVar7 = -0.15000000596046448;
    dVar8 = 0.125;
    dVar9 = 0.10000000149011612;
    id = 0;
    dVar10 = -0.05000000074505806;
    do {
      iVar4 = (int)id;
      dVar5 = 1.0;
      if (iVar4 == 5) {
        fastfunc::FastWrapRot(DAT_00a56164,(float)dVar9);
        dVar5 = 2.0;
      }
      else if (iVar4 == 4) {
        fastfunc::FastWrapRot(DAT_00a56164,(float)dVar10);
        dVar5 = 1.75;
      }
      else if (iVar4 == 3) {
        fastfunc::FastWrapRot(DAT_00a56164,(float)dVar8);
        dVar5 = 1.5;
      }
      else if (iVar4 == 2) {
        fastfunc::FastWrapRot(DAT_00a56164,(float)dVar7);
        dVar5 = 1.25;
      }
      else if ((iVar4 == 1) || (iVar4 == 0)) {
        fastfunc::FastWrapRot(DAT_00a56164,(float)dVar6);
      }
      fastfunc::FastEulerToMtx2(&outMatrix,local_80);
      DAT_00a56184 = (float)((double)DAT_00a56184 * dVar5);
      DAT_00a56188 = (float)((double)DAT_00a56188 * dVar5);
      DAT_00a5618c = (float)((double)DAT_00a5618c * dVar5);
      outMatrix = (float)((double)outMatrix * dVar5);
      DAT_00a56190 = (float)((double)DAT_00a56190 * dVar5);
      DAT_00a56194 = (float)((double)DAT_00a56194 * dVar5);
      DAT_00a56198 = (float)((double)DAT_00a56198 * dVar5);
      DAT_00a5619c = (float)((double)DAT_00a5619c * dVar5);
      DAT_00a561a0 = (float)((double)DAT_00a561a0 * dVar5);
      DAT_00a561a4 = (float)((double)DAT_00a561a4 * dVar5);
      DAT_00a561a8 = (float)((double)DAT_00a561a8 * dVar5);
      DAT_00a561ac = (float)((double)DAT_00a561ac * dVar5);
      DAT_00a561b0 = DAT_00a56150;
      DAT_00a561b4 = DAT_00a56154;
      DAT_00a561b8 = DAT_00a56158;
      DAT_00a561bc = DAT_00a5615c;
      idol_draw::DrawSkyShell
                (*(SKY **)(DAT_00a10920 + 8),id,CONCAT44(outMatrix,DAT_00a56184),
                 CONCAT44(DAT_00a56188,DAT_00a5618c),CONCAT44(DAT_00a56190,DAT_00a56194),
                 CONCAT44(DAT_00a56198,DAT_00a5619c),CONCAT44(DAT_00a561a0,DAT_00a561a4),
                 CONCAT44(DAT_00a561a8,DAT_00a561ac));
      id = (longlong)(iVar4 + 1);
    } while (iVar4 + 1 < (int)(uint)*(ushort *)(*(int *)(DAT_00a10920 + 8) + 6));
  }
  uVar3 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar3);
  uVar3 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar3);
  return;
}



//==== 0015a2f4  ns=skyfunc  size=0x1c
// sig: int GetSkyTex(int idx)
// callers(1): 0015aa80 skyfunc::SkySpriteProc
// callees(0): 

int skyfunc::GetSkyTex(int idx)

{
  return *(int *)&Sky->tex_cnt + idx;
}



//==== 0015a310  ns=skyfunc  size=0x2c
// sig: undefined GetSkyShellTexIndex(void)
// callers(0): 
// callees(0): 

int skyfunc::GetSkyShellTexIndex(int param_1)

{
  return *(int *)&Sky->tex_cnt + (uint)*(byte *)(*(int *)(loaders::g_SkyData + 0x18) + param_1);
}



//==== 0015a33c  ns=skyfunc  size=0x334
// sig: undefined SkyDrawShellTextured(void)
// callers(0): 
// callees(6): 000e9130 stub::STUB_000e9130; 000e9134 stub::STUB_000e9134; 0015b55c stub::STUB_0015b55c; 0015b564 stub::STUB_0015b564; 0015b570 stub::STUB_0015b570; 0050300c FUN_0050300c

void skyfunc::SkyDrawShellTextured(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar8;
  int iVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  
  lVar13 = ZEXT48(&stack0x00000000) - 0x100;
  puVar4 = (ulonglong *)lVar13;
  *puVar4 = ZEXT48(&stack0x00000000);
  iVar3 = *param_1;
  lVar10 = -((longlong)iVar3 + 0x7fU & 0xfffffffffffffff0);
  uVar11 = lVar13 + lVar10;
  lVar13 = (uVar11 & 0xffffffff) + 0x70;
  *(ulonglong *)((int)puVar4 + (int)lVar10) = *puVar4;
  if (iVar3 != 0) {
    stub::STUB_0015b564(param_1 + 4,(longlong)iVar3,lVar13);
    *DAT_00e5aa58 = 7;
    DAT_00e5aa58[1] = 0;
    DAT_00e5aa58[2] = 0;
    uVar8 = FUN_0050300c(7,0);
    DAT_00e5aa58[3] = uVar8;
    uVar9 = (ulonglong)DAT_00a56170;
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    DAT_00a56170 = (uint)(1 - uVar9);
    iVar3 = (int)uVar11;
    if (*(char *)(iVar3 + 0x70) == '\x01') {
      stub::STUB_000e9130(param_1[8],*(short *)((int)param_1 + 0x2e) >> 4,
                          *(undefined4 *)(&DAT_00731a90 + (int)((1 - uVar9 & 0xffffffff) << 2)));
    }
    if (0 < *param_1) {
      uVar11 = 0;
      do {
        iVar6 = (int)uVar11;
        iVar5 = iVar6 + iVar3;
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          stub::STUB_000e9134();
        }
        iVar12 = iVar6 + 1;
        uVar9 = 1 - (ulonglong)DAT_00a56170;
        DAT_00a56170 = (uint)uVar9;
        if ((iVar12 < *param_1) && (*(char *)(iVar6 + (int)lVar13 + 1) == '\x01')) {
          iVar6 = (int)((uVar11 & 0xffffffff) << 5);
          stub::STUB_000e9130(*(undefined4 *)((int)param_1 + iVar6 + 0x40),
                              *(short *)((int)param_1 + iVar6 + 0x4e) >> 4,
                              *(undefined4 *)(&DAT_00731a90 + (int)((uVar9 & 0xffffffff) << 2)));
          uVar9 = (ulonglong)DAT_00a56170;
        }
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          iVar6 = (int)((uVar11 & 0x7ffffff) << 5);
          iVar5 = *(int *)(&DAT_00731a90 + (int)(1 - uVar9) * 4);
          sVar1 = *(short *)((int)param_1 + iVar6 + 0x2c);
          sVar2 = *(short *)((int)param_1 + iVar6 + 0x2a);
          iVar7 = stub::STUB_0015b55c(iVar5 + *(short *)((int)param_1 + iVar6 + 0x28),&DAT_70002000,
                                      *(undefined2 *)((int)param_1 + iVar6 + 0x24));
          if (iVar7 == 0) {
            stub::STUB_0015b570(*(undefined2 *)((int)param_1 + iVar6 + 0x26),iVar5 + sVar1,
                                iVar5 + sVar2,&DAT_70002000);
          }
        }
        uVar11 = (ulonglong)iVar12;
      } while (iVar12 < *param_1);
    }
  }
  return;
}



//==== 0015a670  ns=skyfunc  size=0x39c
// sig: undefined SkyDrawShellGouraud(void)
// callers(0): 
// callees(9): 000e9130 stub::STUB_000e9130; 000e9134 stub::STUB_000e9134; 0015b55c stub::STUB_0015b55c; 0015b564 stub::STUB_0015b564; 0015b56c stub::STUB_0015b56c; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend; 00502ffc stub::VU1_addGSregister; 0050300c FUN_0050300c

void skyfunc::SkyDrawShellGouraud(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar9;
  int iVar8;
  undefined8 uVar7;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  
  lVar14 = ZEXT48(&stack0x00000000) - 0x100;
  puVar4 = (ulonglong *)lVar14;
  *puVar4 = ZEXT48(&stack0x00000000);
  iVar3 = *param_1;
  lVar11 = -((longlong)iVar3 + 0x7fU & 0xfffffffffffffff0);
  uVar12 = lVar14 + lVar11;
  lVar14 = (uVar12 & 0xffffffff) + 0x70;
  *(ulonglong *)((int)puVar4 + (int)lVar11) = *puVar4;
  if (iVar3 != 0) {
    stub::STUB_0015b564(param_1 + 4,(longlong)iVar3,lVar14);
    *DAT_00e5aa58 = 7;
    DAT_00e5aa58[1] = 0x90;
    DAT_00e5aa58[2] = 0;
    uVar9 = FUN_0050300c(7,0);
    DAT_00e5aa58[3] = uVar9;
    uVar10 = (ulonglong)DAT_00a56170;
    DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
    DAT_00a56170 = (uint)(1 - uVar10);
    iVar3 = (int)uVar12;
    if (*(char *)(iVar3 + 0x70) == '\x01') {
      stub::STUB_000e9130(param_1[8],*(short *)((int)param_1 + 0x2e) >> 4,
                          *(undefined4 *)(&DAT_00731a90 + (int)((1 - uVar10 & 0xffffffff) << 2)));
    }
    if (0 < *param_1) {
      uVar12 = 0;
      do {
        iVar6 = (int)uVar12;
        iVar5 = iVar6 + iVar3;
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          stub::STUB_000e9134();
        }
        iVar13 = iVar6 + 1;
        uVar10 = 1 - (ulonglong)DAT_00a56170;
        DAT_00a56170 = (uint)uVar10;
        if ((iVar13 < *param_1) && (*(char *)(iVar6 + (int)lVar14 + 1) == '\x01')) {
          iVar6 = (int)((uVar12 & 0xffffffff) << 5);
          stub::STUB_000e9130(*(undefined4 *)((int)param_1 + iVar6 + 0x40),
                              *(short *)((int)param_1 + iVar6 + 0x4e) >> 4,
                              *(undefined4 *)(&DAT_00731a90 + (int)((uVar10 & 0xffffffff) << 2)));
          uVar10 = (ulonglong)DAT_00a56170;
        }
        if (*(char *)(iVar5 + 0x70) == '\x01') {
          iVar6 = (int)((uVar12 & 0x7ffffff) << 5);
          iVar5 = *(int *)(&DAT_00731a90 + (int)(1 - uVar10) * 4);
          sVar1 = *(short *)((int)param_1 + iVar6 + 0x2c);
          sVar2 = *(short *)((int)param_1 + iVar6 + 0x2a);
          iVar8 = stub::STUB_0015b55c(iVar5 + *(short *)((int)param_1 + iVar6 + 0x28),&DAT_70002000,
                                      *(undefined2 *)((int)param_1 + iVar6 + 0x24));
          if (iVar8 == 0) {
            stub::STUB_0015b56c(*(undefined2 *)((int)param_1 + iVar6 + 0x26),iVar5 + sVar1,
                                iVar5 + sVar2,&DAT_70002000);
          }
        }
        uVar12 = (ulonglong)iVar13;
      } while (iVar13 < *param_1);
    }
    uVar7 = idol_draw::Blend(1,5,0x80,1,0,0,1,1);
    vuchain::SetGSReg(0x16,uVar7);
    uVar7 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
    vuchain::SetGSReg(0x21,uVar7);
  }
  return;
}



//==== 0015aa0c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_SKYPROC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_SKYPROC(void)

{
  DAT_00731b48 = 0x10000;
  return;
}



//==== 0015aa80  ns=skyfunc  size=0xadc
// sig: undefined SkySpriteProc(void)
// callers(9): 00153e00 skyfunc::SkyLevel_00; 001545b8 skyfunc::SkyLevel_02; 001554a0 skyfunc::SkyLevel_05; 00155788 skyfunc::SkyLevel_06; 00156148 skyfunc::SkyLevel_07; 0015774c skyfunc::SkyLevel_13; 00157d98 skyfunc::SkyLevel_15; 00158460 skyfunc::SkyLevel_17; 001595d0 skyfunc::SkyLevelGeneric
// callees(9): 0015a2f4 skyfunc::GetSkyTex; 004d5fe4 idol_draw::DrawDepth; 004d6704 FUN_004d6704; 004d676c FUN_004d676c; 004d6948 idol_draw::ResetPassState; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004fe098 idol::AllocateMemAlign; 005dd914 mathfunc::SinCos

void skyfunc::SkySpriteProc(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong *puVar11;
  int iVar12;
  RsxCmd RVar13;
  RenderingStep *pRVar14;
  SKY *pSVar15;
  ulonglong uVar16;
  int iVar18;
  int iVar19;
  undefined8 uVar17;
  undefined4 *puVar20;
  undefined4 *puVar21;
  RsxCmd *pRVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  char *pcVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar27;
  RsxCmd *pRVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  int iVar30;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double extraout_f1;
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
  ulonglong in_f17;
  ulonglong in_f18;
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
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 800;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar16;
  puVar11[0x66] = in_LR;
  puVar11[0x55] = in_f17;
  puVar11[0x56] = in_f18;
  puVar11[0x57] = in_f19;
  puVar11[0x58] = in_f20;
  puVar11[0x59] = in_f21;
  puVar11[0x5a] = in_f22;
  puVar11[0x5b] = in_f23;
  puVar11[0x5c] = in_f24;
  puVar11[0x5d] = in_f25;
  puVar11[0x5e] = in_f26;
  puVar11[0x5f] = in_f27;
  puVar11[0x60] = in_f28;
  puVar11[0x61] = in_f29;
  puVar11[0x62] = in_f30;
  puVar11[99] = in_f31;
  iVar18 = DAT_00902e9c;
  auVar49 = *(undefined1 (*) [16])(DAT_00902e9c + 0xa0U & 0xfffffff0);
  auVar52 = *(undefined1 (*) [16])(DAT_00902e9c + 0xb0U & 0xfffffff0);
  auVar8 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar50 = auVar49 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar49 = auVar49 >> 0x20 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  auVar51 = *(undefined1 (*) [16])(iVar18 + 0xc0U & 0xfffffff0);
  dVar32 = (double)*(float *)(puVar11 + 0x2a);
  auVar8 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar51 >> 0x40 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  dVar34 = (double)*(float *)(puVar11 + 0x2a);
  auVar9 = auVar52 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar52 = auVar52 >> 0x20 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  dVar35 = (double)*(float *)(puVar11 + 0x2a);
  auVar8 = auVar51 >> 0x20 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
  dVar37 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  dVar38 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  dVar41 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  dVar42 = (double)*(float *)(puVar11 + 0x2a);
  dVar36 = (double)SQRT((float)(dVar35 * dVar35 +
                               (double)(float)(dVar32 * dVar32 + (double)(float)(dVar34 * dVar34))))
  ;
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
  dVar43 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  puVar11[0x4f] = unaff_r26;
  dVar47 = (double)*(float *)(puVar11 + 0x2a);
  puVar11[0x54] = unaff_r31;
  iVar30 = 0;
  puVar11[0x4b] = unaff_r22;
  auVar50 = *(undefined1 (*) [16])(iVar18 + 0x20U & 0xfffffff0);
  auVar8 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
  dVar40 = (double)SQRT((float)(dVar41 * dVar41 +
                               (double)(float)(dVar37 * dVar37 + (double)(float)(dVar38 * dVar38))))
  ;
  auVar9 = auVar50 >> 0x40 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  auVar8 = auVar50 >> 0x20 & (undefined1  [16])0xffffffff;
  dVar45 = (double)SQRT((float)(dVar47 * dVar47 +
                               (double)(float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43))))
  ;
  dVar33 = dVar35;
  if (0.0 - dVar36 < 0.0) {
    dVar33 = (double)(float)(dVar35 / dVar36);
  }
  dVar44 = dVar34;
  if (0.0 - dVar36 < 0.0) {
    dVar44 = (double)(float)(dVar34 / dVar36);
  }
  dVar46 = dVar32;
  if (0.0 - dVar36 < 0.0) {
    dVar46 = (double)(float)(dVar32 / dVar36);
  }
  dVar48 = dVar41;
  if (0.0 - dVar40 < 0.0) {
    dVar48 = (double)(float)(dVar41 / dVar40);
  }
  dVar39 = dVar38;
  if (0.0 - dVar40 < 0.0) {
    dVar39 = (double)(float)(dVar38 / dVar40);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar33 = (double)(float)(dVar35 / dVar36);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar44 = (double)(float)(dVar34 / dVar36);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar46 = (double)(float)(dVar32 / dVar36);
  }
  dVar32 = dVar37;
  if (0.0 - dVar40 < 0.0) {
    dVar32 = (double)(float)(dVar37 / dVar40);
  }
  fVar3 = *(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  if (dVar40 - 0.0 < 0.0) {
    dVar48 = (double)(float)(dVar41 / dVar40);
  }
  if (dVar40 - 0.0 < 0.0) {
    dVar39 = (double)(float)(dVar38 / dVar40);
  }
  puVar11[0x46] = (ulonglong)dVar33;
  puVar11[0x45] = (ulonglong)dVar44;
  puVar11[0x44] = (ulonglong)dVar46;
  dVar33 = dVar47;
  if (0.0 - dVar45 < 0.0) {
    dVar33 = (double)(float)(dVar47 / dVar45);
  }
  if (dVar40 - 0.0 < 0.0) {
    dVar32 = (double)(float)(dVar37 / dVar40);
  }
  dVar34 = dVar43;
  if (0.0 - dVar45 < 0.0) {
    dVar34 = (double)(float)(dVar43 / dVar45);
  }
  puVar11[0x43] = (ulonglong)dVar48;
  puVar11[0x42] = (ulonglong)dVar39;
  if (dVar45 - 0.0 < 0.0) {
    dVar33 = (double)(float)(dVar47 / dVar45);
  }
  fVar4 = *(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  puVar11[0x41] = (ulonglong)dVar32;
  puVar11[0x4c] = unaff_r23;
  pSVar15 = Sky;
  if (dVar45 - 0.0 < 0.0) {
    dVar34 = (double)(float)(dVar43 / dVar45);
  }
  puVar11[0x49] = (ulonglong)(double)fVar3;
  dVar32 = dVar42;
  if (0.0 - dVar45 < 0.0) {
    dVar32 = (double)(float)(dVar42 / dVar45);
  }
  puVar11[0x40] = (ulonglong)dVar33;
  puVar11[0x3f] = (ulonglong)dVar34;
  puVar11[0x48] = (ulonglong)(double)fVar4;
  sVar5 = pSVar15->sprite_cnt;
  pcVar26 = (char *)pSVar15->tex_defs;
  if (dVar45 - 0.0 < 0.0) {
    dVar32 = (double)(float)(dVar42 / dVar45);
  }
  puVar11[0x3e] = (ulonglong)dVar32;
  puVar11[0x53] = unaff_r30;
  puVar11[0x52] = unaff_r29;
  puVar11[0x51] = unaff_r28;
  puVar11[0x50] = unaff_r27;
  puVar11[0x4e] = unaff_r25;
  puVar11[0x4d] = unaff_r24;
  puVar11[0x4a] = unaff_r21;
  puVar11[0x47] = (ulonglong)(double)*(float *)(puVar11 + 0x2a);
  if (sVar5 != 0) {
    dVar33 = (double)puVar11[0x40];
    dVar32 = (double)puVar11[0x3f];
    dVar34 = (double)puVar11[0x46];
    dVar35 = (double)puVar11[0x45];
    dVar36 = (double)puVar11[0x44];
    dVar37 = (double)puVar11[0x3e];
    dVar38 = (double)puVar11[0x43];
    dVar40 = (double)puVar11[0x42];
    dVar41 = (double)puVar11[0x41];
    puVar11[0x3d] = (ulonglong)(double)(float)(dVar32 * dVar34);
    puVar11[0x3c] = (ulonglong)(double)(float)(dVar33 * dVar35);
    puVar11[0x3b] = (ulonglong)(double)(float)(dVar33 * dVar36);
    puVar11[0x3a] = (ulonglong)(double)(float)(dVar37 * dVar34);
    puVar11[0x39] = (ulonglong)(double)(float)(dVar37 * dVar35);
    puVar11[0x38] = (ulonglong)(double)(float)(dVar32 * dVar36);
    puVar11[0x37] = (ulonglong)(double)(float)(dVar37 * dVar36);
    puVar11[0x36] = (ulonglong)(double)(float)(dVar32 * dVar35);
    puVar11[0x35] = (ulonglong)(double)(float)(dVar33 * dVar34);
    puVar11[0x34] = (ulonglong)(double)(float)(dVar32 * dVar38);
    puVar11[0x33] = (ulonglong)(double)(float)(dVar33 * dVar40);
    puVar11[0x32] = (ulonglong)(double)(float)(dVar33 * dVar41);
    puVar11[0x31] = (ulonglong)(double)(float)(dVar37 * dVar38);
    puVar11[0x30] = (ulonglong)(double)(float)(dVar37 * dVar40);
    puVar11[0x2f] = (ulonglong)(double)(float)(dVar32 * dVar41);
    puVar11[0x2e] = (ulonglong)(double)(float)(dVar37 * dVar41);
    puVar11[0x2d] = (ulonglong)(double)(float)(dVar32 * dVar40);
    puVar11[0x2c] = (ulonglong)(double)(float)(dVar33 * dVar38);
    do {
      uVar29 = (ulonglong)(byte)pcVar26[3];
      puVar11[0x24] = 1;
      puVar11[0x27] = uVar29;
      uVar6 = *(undefined4 *)(pcVar26 + 4);
      *(undefined4 *)((int)puVar11 + 0xfc) = uVar6;
      *(undefined4 *)(puVar11 + 0x1f) = uVar6;
      *(undefined4 *)((int)puVar11 + 0xf4) = uVar6;
      *(undefined4 *)(puVar11 + 0x1e) = uVar6;
      iVar18 = GetSkyTex((uint)(byte)pcVar26[2]);
      puVar11[0x25] = (longlong)iVar18;
      iVar19 = GetSkyTex((uint)(byte)pcVar26[2]);
      puVar11[0x26] = (longlong)iVar19;
      *(undefined4 *)(puVar11 + 0x20) = 0;
      *(undefined4 *)(puVar11 + 0x22) = 0;
      *(undefined4 *)(puVar11 + 0x21) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x104) = 0;
      *(undefined4 *)((int)puVar11 + 0x10c) = 0;
      *(undefined4 *)((int)puVar11 + 0x114) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x11c) = 0x3f800000;
      fVar3 = 0.4;
      if (*pcVar26 == '\0') {
        fVar3 = 0.5;
      }
      dVar48 = (double)fVar3;
      dVar40 = 0.5;
      dVar32 = (double)(((*(float *)(pcVar26 + 8) + 32.0) * 3.1415927 * 0.0078125 + 1.5707964) * 0.5
                       );
      uVar17 = mathfunc::SinCos(dVar32,&DAT_0015aa20,0);
      dVar33 = extraout_f1;
      dVar32 = (double)mathfunc::SinCos(dVar32,uVar17,1);
      dVar41 = (double)(float)(dVar33 * (double)puVar11[0x3f]);
      dVar42 = (double)(float)(dVar33 * (double)puVar11[0x3e]);
      dVar44 = (double)(float)(dVar33 * (double)puVar11[0x40]);
      dVar34 = -(double)(float)(dVar33 * (double)puVar11[0x3c] -
                               (double)(float)(dVar32 * (double)puVar11[0x44] +
                                              (double)(float)(dVar33 * (double)puVar11[0x3d])));
      dVar37 = -(double)(float)(dVar33 * (double)puVar11[0x38] -
                               (double)(float)(dVar32 * (double)puVar11[0x46] +
                                              (double)(float)(dVar33 * (double)puVar11[0x39])));
      dVar36 = -(double)(float)(dVar33 * (double)puVar11[0x3a] -
                               (double)(float)(dVar32 * (double)puVar11[0x45] +
                                              (double)(float)(dVar33 * (double)puVar11[0x3b])));
      dVar43 = (double)(float)(dVar33 * (double)puVar11[0x35] +
                              (double)(float)(dVar33 * (double)puVar11[0x37] +
                                             (double)(float)(dVar33 * (double)puVar11[0x36])));
      dVar46 = -(double)(float)(dVar33 * (double)puVar11[0x33] -
                               (double)(float)(dVar32 * (double)puVar11[0x41] +
                                              (double)(float)(dVar33 * (double)puVar11[0x34])));
      dVar45 = -(double)(float)(dVar33 * (double)puVar11[0x2f] -
                               (double)(float)(dVar32 * (double)puVar11[0x43] +
                                              (double)(float)(dVar33 * (double)puVar11[0x30])));
      dVar47 = -(double)(float)(dVar33 * (double)puVar11[0x31] -
                               (double)(float)(dVar32 * (double)puVar11[0x42] +
                                              (double)(float)(dVar33 * (double)puVar11[0x32])));
      dVar33 = (double)(float)(dVar33 * (double)puVar11[0x2c] +
                              (double)(float)(dVar33 * (double)puVar11[0x2e] +
                                             (double)(float)(dVar33 * (double)puVar11[0x2d])));
      dVar38 = (double)(float)((double)(float)(dVar41 * dVar37 +
                                              -(double)(float)(dVar44 * dVar36 -
                                                              (double)(float)(dVar42 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar34)))) * dVar48);
      dVar35 = (double)(float)((double)(float)(dVar44 * dVar34 +
                                              -(double)(float)(dVar42 * dVar37 -
                                                              (double)(float)(dVar41 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar36)))) * dVar48);
      dVar34 = (double)(float)((double)(float)(dVar42 * dVar36 +
                                              -(double)(float)(dVar41 * dVar34 -
                                                              (double)(float)(dVar44 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar37)))) * dVar48);
      dVar36 = (double)(float)((double)(float)(dVar41 * dVar45 +
                                              -(double)(float)(dVar44 * dVar47 -
                                                              (double)(float)(dVar42 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar46)))) * dVar48);
      dVar37 = (double)(float)((double)(float)(dVar44 * dVar46 +
                                              -(double)(float)(dVar42 * dVar45 -
                                                              (double)(float)(dVar41 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar47)))) * dVar48);
      dVar33 = (double)(float)((double)(float)(dVar42 * dVar47 +
                                              -(double)(float)(dVar41 * dVar46 -
                                                              (double)(float)(dVar44 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar45)))) * dVar48);
      dVar41 = -(double)(float)(dVar36 * dVar40 -
                               -(double)(float)(dVar38 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x10) +
                                                              (double)puVar11[0x49])));
      dVar42 = -(double)(float)(dVar37 * dVar40 -
                               -(double)(float)(dVar35 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x14) +
                                                              (double)puVar11[0x48])));
      dVar32 = -(double)(float)(dVar33 * dVar40 -
                               -(double)(float)(dVar34 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x18) +
                                                              (double)puVar11[0x47])));
      fVar3 = (float)(dVar41 + dVar38);
      fVar4 = (float)(dVar42 + dVar35);
      *(float *)(puVar11 + 0x16) = (float)dVar41;
      fVar2 = (float)(dVar32 + dVar34);
      *(float *)((int)puVar11 + 0xb4) = (float)dVar42;
      *(float *)(puVar11 + 0x17) = (float)dVar32;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)((int)puVar11 + 0xc4) = fVar4;
      *(float *)(puVar11 + 0x19) = fVar2;
      *(undefined4 *)((int)puVar11 + 0xec) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0xdc) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0xcc) = 0x3f800000;
      fVar3 = (float)((double)(float)((double)fVar3 + dVar36) - dVar38);
      fVar4 = (float)((double)(float)((double)fVar4 + dVar37) - dVar35);
      fVar2 = (float)((double)(float)((double)fVar2 + dVar33) - dVar34);
      *(float *)(puVar11 + 0x1a) = fVar3;
      *(float *)((int)puVar11 + 0xd4) = fVar4;
      *(float *)(puVar11 + 0x1b) = fVar2;
      *(undefined4 *)((int)puVar11 + 0xbc) = 0x3f800000;
      *(float *)(puVar11 + 0x1c) = (float)((double)fVar3 + dVar38);
      *(float *)((int)puVar11 + 0xe4) = (float)((double)fVar4 + dVar35);
      *(float *)(puVar11 + 0x1d) = (float)((double)fVar2 + dVar34);
      iVar19 = g_viewMtxPtr;
      pRVar14 = ForwardPass;
      uVar27 = (ulonglong)EffectTexHeaders;
      idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,5);
      idol_draw::BindFragmentProgram(iVar19,pRVar14,6);
      puVar20 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
      lVar31 = 4;
      lVar23 = lVar1;
      lVar24 = lVar1;
      lVar25 = lVar1;
      puVar21 = puVar20;
      do {
        iVar12 = (int)lVar23;
        *puVar21 = *(undefined4 *)(iVar12 + 0xb0);
        puVar21[1] = *(undefined4 *)(iVar12 + 0xb4);
        lVar23 = lVar23 + 0x10;
        puVar21[2] = *(undefined4 *)(iVar12 + 0xb8);
        iVar12 = (int)lVar24;
        puVar21[3] = *(undefined4 *)(iVar12 + 0x100);
        lVar24 = lVar24 + 8;
        puVar21[4] = *(undefined4 *)(iVar12 + 0x104);
        uVar7 = *(uint *)((int)lVar25 + 0xf0);
        lVar25 = lVar25 + 4;
        puVar21[5] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8;
        puVar21 = puVar21 + 6;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      if (uVar29 != 0) {
        idol_draw::DrawDepth(pRVar14,uVar29);
      }
      FUN_004d6704(1,uVar16 - 0x1e0,uVar16 - 0x1dc);
      FUN_004d676c(pRVar14,0,uVar27 + (longlong)iVar18 * 0x24 & 0xffffffff,
                   *(undefined4 *)(puVar11 + 0x28),*(undefined4 *)((int)puVar11 + 0x144));
      idol_draw::ResetPassState(pRVar14);
      *pRVar14->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
      pRVar14->command[1] = 0x1832;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41744;
      pRVar14->command[1] = 0x1822;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4174c;
      pRVar14->command[1] = 0x1844;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      iVar18 = *(int *)(iVar19 + 0x4a8);
      pRVar22[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
      RVar13 = (int)puVar20 - iVar18;
      pRVar14->command[1] = RVar13 | 0x80000000;
      pRVar22 = pRVar14->command;
      lVar23 = uVar16 - 0x2b0;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41684;
      pRVar14->command[1] = RVar13 + 0xc | 0x80000000;
      pRVar22 = pRVar14->command;
      lVar24 = 8;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4168c;
      pRVar14->command[1] = RVar13 + 0x14 | 0x80000000;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      *(undefined4 *)((int)puVar11 + 0x7c) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)((int)puVar11 + 0x74) = 0;
      *(undefined4 *)(puVar11 + 0xe) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      *(undefined4 *)((int)puVar11 + 0x9c) = 0;
      *(undefined4 *)(puVar11 + 0x13) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x94) = 0;
      *(undefined4 *)(puVar11 + 0x12) = 0;
      *(undefined4 *)((int)puVar11 + 0xac) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x15) = 0;
      *(undefined4 *)((int)puVar11 + 0xa4) = 0;
      *(undefined4 *)(puVar11 + 0x14) = 0;
      pRVar22[2] = 0x441efc;
      pRVar14->command[1] = 4;
      pRVar22 = pRVar14->command + 2;
      pRVar14->command = pRVar22;
      do {
        pRVar28 = (RsxCmd *)lVar23;
        *pRVar22 = *pRVar28;
        pRVar22 = pRVar14->command;
        pRVar14->command = pRVar22 + 1;
        lVar23 = lVar23 + 8;
        pRVar22[1] = pRVar28[1];
        pRVar28 = pRVar14->command;
        pRVar22 = pRVar28 + 1;
        pRVar14->command = pRVar22;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pRVar28[1] = 0x400c1714;
      pRVar14->command[1] = 0;
      pRVar14->command[2] = 0;
      iVar30 = iVar30 + 1;
      pcVar26 = pcVar26 + 0x20;
      pRVar14->command[3] = 0;
      pRVar14->command[4] = NV4097_SET_BEGIN_END_x1;
      pRVar14->command[5] = 6;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 7;
      pRVar22[6] = 0x40041814;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 1;
      *pRVar22 = 0x3000000;
      *pRVar14->command = NV4097_SET_BEGIN_END_x1;
      pRVar14->command[1] = 0;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
      pRVar14->command[1] = 2;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41744;
      pRVar14->command[1] = 2;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4174c;
      pRVar14->command[1] = 2;
      pRVar14->command = pRVar14->command + 2;
    } while (iVar30 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  pRVar14 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar14->command[1] = 0x3020302;
  pRVar14->command[2] = 0x3030303;
  pRVar14->command = pRVar14->command + 3;
  return;
}



//==== 0015b55c  ns=stub  size=0x8
// sig: undefined STUB_0015b55c(void)
// callers(2): 0015a33c skyfunc::SkyDrawShellTextured; 0015a670 skyfunc::SkyDrawShellGouraud
// callees(0): 

undefined8 stub::STUB_0015b55c(void)

{
  return 0;
}



//==== 0015b564  ns=stub  size=0x8
// sig: undefined STUB_0015b564(void)
// callers(2): 0015a33c skyfunc::SkyDrawShellTextured; 0015a670 skyfunc::SkyDrawShellGouraud
// callees(0): 

undefined8 stub::STUB_0015b564(void)

{
  return 0;
}



//==== 0015b56c  ns=stub  size=0x4
// sig: undefined STUB_0015b56c(void)
// callers(1): 0015a670 skyfunc::SkyDrawShellGouraud
// callees(0): 

void stub::STUB_0015b56c(void)

{
  return;
}



//==== 0015b570  ns=stub  size=0x4
// sig: undefined STUB_0015b570(void)
// callers(1): 0015a33c skyfunc::SkyDrawShellTextured
// callees(0): 

void stub::STUB_0015b570(void)

{
  return;
}



//==== 0015b590  ns=sound  size=0x134
// sig: void sound_CamOfs(float * cam_ofs_pos)
// callers(1): 0015be68 sound::sound_Update
// callees(2): 00057820 collproc::CollLine; 000fe788 mobyutil::MB_randVector

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_CamOfs(float *cam_ofs_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  
  mobyutil::MB_randVector(0.5,6.0,(Vec4 *)cam_ofs_pos);
  *cam_ofs_pos = *cam_ofs_pos + GameCamera.posX;
  uVar4 = DAT_009637cc;
  cam_ofs_pos[1] = cam_ofs_pos[1] + GameCamera.posY;
  cam_ofs_pos[2] = cam_ofs_pos[2] + GameCamera.posZ;
  iVar5 = collproc::CollLine(0x951500,cam_ofs_pos,0x82,uVar4,0);
  if (iVar5 != 0) {
    fVar1 = CollOutput.ip.x - GameCamera.posX;
    *cam_ofs_pos = fVar1;
    fVar2 = CollOutput.ip.y - GameCamera.posY;
    cam_ofs_pos[1] = fVar2;
    fVar3 = CollOutput.ip.z - GameCamera.posZ;
    cam_ofs_pos[2] = fVar3;
    fVar1 = fVar1 * 0.75;
    fVar2 = fVar2 * 0.75;
    cam_ofs_pos[3] = CollOutput.ip.w;
    fVar3 = fVar3 * 0.75;
    *cam_ofs_pos = fVar1;
    cam_ofs_pos[1] = fVar2;
    cam_ofs_pos[2] = fVar3;
    *cam_ofs_pos = fVar1 + GameCamera.posX;
    cam_ofs_pos[1] = fVar2 + GameCamera.posY;
    cam_ofs_pos[2] = fVar3 + GameCamera.posZ;
  }
  return;
}



//==== 0015b6d0  ns=sound  size=0x108
// sig: undefined sound_Occl(void)
// callers(1): 0015be68 sound::sound_Update
// callees(1): 00057820 collproc::CollLine

void sound::sound_Occl(int param_1,undefined8 param_2)

{
  undefined1 local_10 [16];
  
  collproc::CollLine(param_2,local_10,0x82,*(undefined4 *)(param_1 + 0x18),0);
  return;
}



//==== 0015b7d8  ns=sound  size=0x114
// sig: int sound_GetFade(float dist, float minRange, float maxRange, void * sd)
// callers(4): 0015b8ec sound::sound_GetFade_channel; 0015be68 sound::sound_Update; 0015ce18 sound::sound_Play; 0017fa08 UpdateSound_1
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_GetFade(float dist,float minRange,float maxRange,void *sd)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)maxRange;
  dVar2 = (double)dist;
  dVar4 = (double)minRange;
  if ((*(byte *)((int)sd + 0x19) & 1) == 0) {
    if (dVar4 < dVar2) {
      if (dVar2 < dVar5) {
        dVar3 = (double)fastfunc::FastIntToDouble(*(int *)((int)sd + 0xc) - *(int *)((int)sd + 8));
        iVar1 = fastfunc::FastDoubleToInt
                          ((double)((float)((double)(float)(dVar5 - dVar2) * dVar3) /
                                   (float)(dVar5 - dVar4)));
        iVar1 = *(int *)((int)sd + 8) + iVar1;
      }
      else {
        iVar1 = *(int *)((int)sd + 8);
      }
    }
    else {
      iVar1 = *(int *)((int)sd + 0xc);
    }
  }
  else if (dVar4 < dVar2) {
    if (dVar2 < dVar5) {
      dVar3 = (double)fastfunc::FastIntToDouble(*(int *)((int)sd + 0xc) - *(int *)((int)sd + 8));
      iVar1 = fastfunc::FastDoubleToInt
                        ((double)((float)((double)((float)(dVar5 - dVar2) * (float)(dVar5 - dVar2))
                                         * dVar3) /
                                 ((float)(dVar5 - dVar4) * (float)(dVar5 - dVar4))));
      iVar1 = *(int *)((int)sd + 8) + iVar1;
    }
    else {
      iVar1 = *(int *)((int)sd + 8);
    }
  }
  else {
    iVar1 = *(int *)((int)sd + 0xc);
  }
  return iVar1;
}



//==== 0015b8ec  ns=sound  size=0x6c
// sig: int sound_GetFade_channel(SoundData * channel, float * soundPos)
// callers(0): 
// callees(1): 0015b7d8 sound::sound_GetFade

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_GetFade_channel(SoundData *channel,float *soundPos)

{
  float *sd;
  int iVar1;
  
  sd = (float *)channel->pSoundDef;
  iVar1 = sound_GetFade(SQRT((soundPos[2] - GameCamera.posZ) * (soundPos[2] - GameCamera.posZ) +
                             (*soundPos - GameCamera.posX) * (*soundPos - GameCamera.posX) +
                             (soundPos[1] - GameCamera.posY) * (soundPos[1] - GameCamera.posY)),*sd,
                        sd[1],sd);
  return iVar1;
}



//==== 0015b970  ns=sound  size=0x290
// sig: undefined sound_GetPan(void)
// callers(1): 0015be68 sound::sound_Update
// callees(1): 00502758 fastfunc::FastDoubleToInt

void sound::sound_GetPan(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xa0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar11;
  puVar5[0x16] = in_LR;
  fVar6 = 0.0;
  fVar2 = param_3[0xd] * param_2[3] +
          param_3[9] * (param_2[2] - GameCamera.posZ) +
          param_3[1] * (*param_2 - GameCamera.posX) + param_3[5] * (param_2[1] - GameCamera.posY);
  fVar9 = param_3[0xc] * param_2[3] +
          param_3[8] * (param_2[2] - GameCamera.posZ) +
          *param_3 * (*param_2 - GameCamera.posX) + param_3[4] * (param_2[1] - GameCamera.posY);
  *(float *)(puVar5 + 0xe) = fVar9;
  *(float *)(puVar5 + 0xf) = ABS(fVar9) - ABS(fVar2);
  *(float *)((int)puVar5 + 0x74) = fVar2;
  uVar15 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar10 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar10 = ABS(fVar9);
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar9 = SQRT(fVar9 * fVar9 + fVar2 * fVar2) - 1.0;
  if (fVar9 - 0.0 < 0.0) {
    fVar9 = fVar6;
  }
  if (1.0 - fVar9 < 0.0) {
    fVar9 = 1.0;
  }
  if (0.0 < fVar3) {
    lVar16 = uVar11 - 0x90;
    lVar13 = uVar11 - 0x14;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar3) / (fVar10 + fVar3);
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
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar2 * fVar2;
      iVar7 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar16;
    lVar14 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar3 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar7 = (int)lVar12;
      iVar8 = (int)lVar16;
      lVar12 = lVar12 + 0x10;
      lVar16 = lVar16 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
              *(float *)(iVar8 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar6 = (fVar6 + 0.7853982) * fVar4 + fVar1;
  }
  fastfunc::FastDoubleToInt(-(double)(fVar6 * 180.0 * fVar9 * 0.31830987));
  return;
}



//==== 0015bc00  ns=sound  size=0x250
// sig: void sound_Init(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(7): 0011ba58 music::music_Init; 00505810 FUN_00505810; 00505f44 stub::STUB_00505f44; 00505f58 sound::sound_SetMasterVolume; 00506040 stub::STUB_00506040; 00506048 FUN_00506048; 0060b9cc 989snd::snd_SetGroupVoiceRange

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_Init(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  SoundData *pSVar7;
  longlong lVar8;
  
  puVar5 = &DAT_00963760;
  lVar8 = 4;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5 = puVar5 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  DAT_009637a0 = 0;
  pSVar7 = g_SoundChannels;
  pcVar6 = &g_SoundChannels[0].state;
  g_SoundLoadBusy = 0;
  lVar8 = 0xf;
  do {
    pSVar7->handle = 0;
    *pcVar6 = '\0';
    pSVar7[1].handle = 0;
    pcVar6[0x70] = 0;
    pSVar7 = pSVar7 + 2;
    pcVar6 = pcVar6 + 0xe0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_00505810();
  FUN_00506048(((LZCOUNT(-g_GameSettings.Stereo) << 0x3a) >> 0x3f & 1U) + 6);
  stub::STUB_00506040(8,3);
  stub::STUB_00505f44(0,4);
  989snd::snd_SetGroupVoiceRange(1,0x18,0x2f);
  989snd::snd_SetGroupVoiceRange(2,0x18,0x2f);
  989snd::snd_SetGroupVoiceRange(4,0x18,0x2f);
  uVar3 = g_GameSettings.SfxVolume << 3;
  iVar2 = (int)(uVar3 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f;
  iVar4 = g_GameSettings.SfxVolume * 7;
  iVar1 = (int)uVar3 / 10 + iVar2;
  soundGlobals.sfxVolume = (float)(((int)uVar3 / 10 + iVar2) - ((int)uVar3 >> 0x1f));
  soundGlobals.dialogVolume = (float)(iVar1 - (iVar1 >> 0x1f));
  iVar1 = iVar4 / 10 + (iVar4 >> 0x1f);
  iVar2 = iVar4 / 10 + (iVar4 >> 0x1f);
  soundGlobals.musicVolume = (float)g_GameSettings.MusicVolume;
  soundGlobals.mpegVolume = (float)g_GameSettings.SfxVolume;
  soundGlobals.ambientVolume = (float)(iVar1 - (iVar1 >> 0x1f));
  soundGlobals.shellVolume = (float)(iVar2 - (iVar2 >> 0x1f));
  music::music_Init();
  sound_SetMasterVolume(0,(int)soundGlobals.sfxVolume);
  sound_SetMasterVolume(1,(int)soundGlobals.musicVolume);
  sound_SetMasterVolume(2,(int)soundGlobals.dialogVolume);
  sound_SetMasterVolume(3,(int)soundGlobals.ambientVolume);
  sound_SetMasterVolume(4,(int)soundGlobals.shellVolume);
  sound_SetMasterVolume(5,(int)soundGlobals.mpegVolume);
  return;
}



//==== 0015be68  ns=sound  size=0xe10
// sig: undefined sound_Update(void)
// callers(14): 00011020 boot::FrontEnd_Update; 000627d0 debug::UpdateDebugSelections; 00079b18 freeze::UpdateFreeze; 0013b838 pause::UpdatePause; 0015e430 space::PlaySpaceCutscene; 0015e7e8 space::Space_StartTakeoffCutscene; 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene; 00169b88 update::UpdateCredits; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016da88 vendor::Vendor_PreUpdate
// callees(21): 0011d1f0 music::LoadMusic; 0015b590 sound::sound_CamOfs; 0015b6d0 sound::sound_Occl; 0015b7d8 sound::sound_GetFade; 0015b970 sound::sound_GetPan; 005001fc fastfunc::FastMemSet; 00500a88 fastfunc::FastSumChars; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00505af8 FUN_00505af8; 00505d20 stub::STUB_00505d20; 00505d30 FUN_00505d30; 00505f4c stub::STUB_00505f4c; 00505f50 stub::STUB_00505f50; 00505f58 sound::sound_SetMasterVolume; 00506074 stub::STUB_00506074; 005062f4 FUN_005062f4; 005063b0 FUN_005063b0; 005065dc FUN_005065dc; 00506638 FUN_00506638

undefined8 sound::sound_Update(void)

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
  MobyInstance *pMVar10;
  float *sd;
  void *pvVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  bool bVar19;
  u32 uVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  uint uVar24;
  byte bVar28;
  byte *pbVar25;
  undefined1 uVar29;
  int iVar26;
  int iVar27;
  ulonglong uVar30;
  char cVar31;
  ulonglong unaff_r14;
  ulonglong uVar32;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar34;
  undefined8 uVar33;
  ulonglong unaff_r20;
  undefined1 *puVar35;
  ulonglong unaff_r21;
  undefined1 *puVar36;
  ulonglong unaff_r22;
  int *piVar37;
  ulonglong unaff_r23;
  SoundData *pSVar38;
  ulonglong unaff_r24;
  ulonglong uVar39;
  ulonglong unaff_r25;
  MobyInstance **ppMVar40;
  void **ppvVar41;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  float *pfVar43;
  longlong lVar42;
  float *pfVar44;
  ulonglong unaff_r28;
  float *pfVar45;
  ulonglong unaff_r29;
  char *pcVar47;
  undefined *puVar48;
  ulonglong uVar46;
  char *pcVar49;
  ulonglong unaff_r30;
  longlong lVar50;
  float *pfVar52;
  byte *pbVar53;
  longlong lVar51;
  ulonglong unaff_r31;
  ulonglong uVar54;
  ulonglong in_LR;
  longlong lVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar65;
  ulonglong in_f28;
  double dVar66;
  ulonglong in_f29;
  double dVar67;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar68;
  double dVar69;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar51 = uVar21 - 800;
  puVar14 = (ulonglong *)lVar51;
  *puVar14 = uVar21;
  puVar14[0x66] = in_LR;
  puVar14[0x5c] = in_f24;
  puVar14[0x5d] = in_f25;
  puVar14[0x5e] = in_f26;
  puVar14[0x5f] = in_f27;
  puVar14[0x60] = in_f28;
  puVar14[0x61] = in_f29;
  puVar14[0x62] = in_f30;
  puVar14[99] = in_f31;
  puVar14[0x4e] = unaff_r18;
  puVar14[0x4c] = unaff_r16;
  uVar20 = GameCamera.camUnderWater;
  dVar68 = 0.0;
  puVar14[0x5b] = unaff_r31;
  puVar14[0x5a] = unaff_r30;
  puVar14[0x59] = unaff_r29;
  puVar14[0x58] = unaff_r28;
  puVar14[0x57] = unaff_r27;
  puVar14[0x56] = unaff_r26;
  puVar14[0x55] = unaff_r25;
  puVar14[0x54] = unaff_r24;
  puVar14[0x53] = unaff_r23;
  puVar14[0x52] = unaff_r22;
  puVar14[0x51] = unaff_r21;
  puVar14[0x50] = unaff_r20;
  puVar14[0x4f] = unaff_r19;
  puVar14[0x4d] = unaff_r17;
  puVar14[0x4b] = unaff_r15;
  puVar14[0x4a] = unaff_r14;
  dVar69 = dVar68;
  if (uVar20 != 0) {
    dVar69 = (double)hero::g_heroWaterZ;
  }
  stub::STUB_00505d20();
  puVar36 = &DAT_00963760;
  if ((DAT_009637cb & 8) == 0) {
    if ((DAT_009637cb & 0x13) == 0) {
      if ((DAT_009637cb & 4) != 0) {
        FUN_00505af8(0,DAT_009637c4,0xc,3);
      }
    }
    else {
      stub::STUB_00506074(0,DAT_009637c8,DAT_009637c4,DAT_009637c9,DAT_009637ca);
    }
  }
  else {
    stub::STUB_00506074(0,5,0,0,0);
  }
  DAT_009637cb = 0;
  if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) && (g_FrontEnd == '\0'))
  {
    sound_CamOfs((float *)(puVar14 + 0xe));
  }
  uVar24 = DAT_009637a0 + 1;
  DAT_009637a0 = uVar24 + (((int)uVar24 >> 2) + (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4;
  iVar34 = DAT_009637a0 * 0x10;
  iVar22 = 0;
  *(float *)(&DAT_00963760 + iVar34) = GameCamera.posX;
  *(float *)(&DAT_00963764 + iVar34) = GameCamera.posY;
  *(float *)(&DAT_00963768 + iVar34) = GameCamera.posZ;
  *(char (*) [4])(&DAT_0096376c + iVar34) = GameCamera.field8_0x14c;
  uVar39 = (ulonglong)DAT_009637a0;
  dVar65 = dVar68;
  dVar66 = dVar68;
  dVar67 = dVar68;
  while( true ) {
    uVar30 = uVar39 + 3;
    uVar30 = uVar30 + ((longlong)((int)uVar30 >> 2) +
                      (ulonglong)((int)uVar30 < 0 && (uVar30 & 3) != 0)) * -4;
    uVar24 = (uint)uVar30;
    if (uVar24 == DAT_009637a0) break;
    iVar26 = uVar24 * 0x10;
    iVar34 = (int)(uVar39 << 4);
    dVar57 = (double)(*(float *)(&DAT_00963764 + iVar34) - *(float *)(&DAT_00963764 + iVar26));
    dVar56 = (double)(*(float *)(&DAT_00963760 + iVar34) - *(float *)(&DAT_00963760 + iVar26));
    dVar59 = (double)(*(float *)(&DAT_00963768 + iVar34) - *(float *)(&DAT_00963768 + iVar26));
    if (mobyutil::g_FrameTime * 60.0 <=
        SQRT((float)(dVar59 * dVar59 +
                    (double)(float)(dVar56 * dVar56 + (double)(float)(dVar57 * dVar57))))) break;
    iVar22 = iVar22 + 1;
    dVar67 = (double)(float)(dVar67 + dVar56);
    dVar66 = (double)(float)(dVar66 + dVar57);
    dVar65 = (double)(float)(dVar65 + dVar59);
    uVar39 = uVar30;
  }
  if (1 < iVar22) {
    dVar56 = (double)fastfunc::FastIntToDouble();
    dVar56 = (double)(float)(1.0 / dVar56);
    dVar67 = (double)(float)(dVar67 * dVar56);
    dVar66 = (double)(float)(dVar66 * dVar56);
    dVar65 = (double)(float)(dVar65 * dVar56);
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    sound_SetMasterVolume(1,0);
    sound_SetMasterVolume
              (0,((int)soundGlobals.sfxVolume >> 1) +
                 (uint)((int)soundGlobals.sfxVolume < 0 && ((uint)soundGlobals.sfxVolume & 1) != 0))
    ;
    sound_SetMasterVolume
              (3,((int)soundGlobals.ambientVolume >> 1) +
                 (uint)((int)soundGlobals.ambientVolume < 0 &&
                       ((uint)soundGlobals.ambientVolume & 1) != 0));
  }
  else {
    fVar23 = soundGlobals.musicVolume;
    if (uVar20 != 0) {
      fVar23 = (float)(((int)soundGlobals.musicVolume * 3) / 5);
    }
    sound_SetMasterVolume(1,(int)fVar23);
    sound_SetMasterVolume(0,(int)soundGlobals.sfxVolume);
    sound_SetMasterVolume(3,(int)soundGlobals.ambientVolume);
  }
  sound_SetMasterVolume(2,(int)soundGlobals.dialogVolume);
  sound_SetMasterVolume(4,(int)soundGlobals.shellVolume);
  sound_SetMasterVolume(5,(int)soundGlobals.mpegVolume);
  fastfunc::FastMemSet(uVar21 - 0x260,0,0x78);
  fastfunc::FastMemSet(uVar21 - 0x1e8,0,0x78);
  fastfunc::FastMemSet(uVar21 - 0x170,0,0x78);
  pcVar49 = &g_SoundChannels[0].state;
  pSVar38 = g_SoundChannels;
  ppMVar40 = &g_SoundChannels[0].pMoby;
  ppvVar41 = &g_SoundChannels[0].pSoundDef;
  puVar14[0x48] = 0x9637d4;
  puVar14[0x47] = ZEXT48(g_SoundChannels);
  pfVar44 = g_SoundChannels[0].pos;
  puVar14[0x46] = 0x9637e8;
  puVar14[0x45] = 0x9637d8;
  pcVar47 = &g_SoundChannels[0].flags;
  dVar57 = 1.0;
  iVar34 = 0;
  dVar56 = 0.5;
  pfVar43 = g_SoundChannels[0].offset;
  pfVar45 = g_SoundChannels[0].pos + 2;
  piVar37 = &g_SoundChannels[0].vol;
  lVar50 = lVar51;
  puVar35 = puVar36;
  pfVar52 = pfVar44;
  do {
    cVar31 = *pcVar49;
    if ((cVar31 == '\a') || ((pSVar38->handle != 0 && (pSVar38->handle != -1)))) {
      iVar22 = *(int *)(puVar35 + 0x88);
      bVar19 = false;
      if ((iVar22 != 0) &&
         ((*(char *)(iVar22 + 0x20) == -2 || (bVar19 = false, *(char *)(iVar22 + 0x20) == -3)))) {
        cVar31 = *pcVar49;
        bVar19 = true;
        *ppMVar40 = (MobyInstance *)0x0;
      }
      iVar26 = (int)lVar50;
      if ((cVar31 == '\x04') ||
         ((bVar19 && cVar31 != '\x06' && (*(char *)((int)*ppvVar41 + 0x18) != '\0')))) {
        *(undefined4 *)(iVar26 + 0xc0) = 0x20;
      }
      else if (((g_gameMode == GAME_MODE_SCENE || g_gameMode == GAME_MODE_NORMAL) ||
               (g_gameMode == GAME_MODE_SPACE)) || (cVar31 == '\a')) {
        dVar59 = dVar68;
        dVar58 = dVar68;
        dVar60 = dVar68;
        if ((*ppMVar40 != (MobyInstance *)0x0) && ((*pcVar47 & 8U) == 0)) {
          if ((*pcVar47 & 0x40U) == 0) {
            pMVar10 = *ppMVar40;
            *pfVar45 = (float)((double)*pfVar45 - dVar57);
            fVar23 = (pMVar10->pos).x;
            fVar1 = *pfVar52;
            fVar2 = (pMVar10->pos).y;
            fVar3 = pfVar52[1];
            fVar4 = (pMVar10->pos).z;
            fVar5 = pfVar52[2];
            *pfVar52 = fVar23;
            pfVar52[1] = fVar2;
            pfVar52[2] = fVar4;
            pfVar52[3] = (pMVar10->pos).w;
            *pfVar45 = (float)((double)*pfVar45 + dVar57);
            dVar59 = (double)(fVar23 - fVar1);
            dVar58 = (double)(fVar2 - fVar3);
            dVar60 = (double)(fVar4 - fVar5);
          }
          else {
            fVar23 = pfVar43[1];
            fVar1 = *pfVar43;
            fVar2 = *(float *)(iVar22 + 0xdc);
            fVar3 = *(float *)(iVar22 + 0xcc);
            fVar4 = pfVar43[2];
            fVar5 = *(float *)(iVar22 + 0xec);
            fVar6 = pfVar43[3];
            fVar15 = *(float *)(iVar22 + 0xe0) * fVar4 +
                     *(float *)(iVar22 + 0xc0) * fVar1 + *(float *)(iVar22 + 0xd0) * fVar23 +
                     *(float *)(iVar22 + 0x10);
            fVar7 = *pfVar52;
            fVar16 = *(float *)(iVar22 + 0xe4) * fVar4 +
                     *(float *)(iVar22 + 0xc4) * fVar1 + *(float *)(iVar22 + 0xd4) * fVar23 +
                     *(float *)(iVar22 + 0x14);
            fVar17 = *(float *)(iVar22 + 0xe8) * fVar4 +
                     *(float *)(iVar22 + 200) * fVar1 + *(float *)(iVar22 + 0xd8) * fVar23 +
                     *(float *)(iVar22 + 0x18);
            fVar8 = pfVar52[1];
            fVar9 = pfVar52[2];
            *pfVar52 = fVar15;
            pfVar52[1] = fVar16;
            pfVar52[2] = fVar17;
            pfVar52[3] = fVar5 * fVar4 + fVar3 * fVar1 + fVar2 * fVar23 + fVar6;
            dVar59 = (double)(fVar15 - fVar7);
            dVar58 = (double)(fVar16 - fVar8);
            dVar60 = (double)(fVar17 - fVar9);
          }
        }
        fVar23 = GameCamera.posY - pfVar52[1];
        fVar1 = GameCamera.posX - *pfVar52;
        fVar2 = GameCamera.posZ - pfVar52[2];
        dVar64 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar23 * fVar23);
        dVar61 = dVar68;
        dVar62 = dVar68;
        dVar63 = dVar68;
        if ((double)(float)SQRT(dVar64) != dVar68) {
          dVar61 = 1.0 / SQRT(dVar64);
          dVar61 = (double)(float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 -
                                                   dVar57) * (double)(float)(dVar61 * dVar56) +
                                  dVar61);
          dVar61 = (double)(float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 -
                                                   dVar57) * (double)(float)(dVar61 * dVar56) +
                                  dVar61);
          fVar3 = (float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 - dVar57) *
                          (double)(float)(dVar61 * dVar56) + dVar61);
          dVar61 = (double)(fVar1 * fVar3);
          dVar62 = (double)(fVar23 * fVar3);
          dVar63 = (double)(fVar2 * fVar3);
        }
        bVar28 = *pcVar47;
        *(float *)(iVar26 + 0x1b0) =
             (float)(dVar63 * (double)(float)(dVar60 - dVar65) +
                    (double)(float)(dVar61 * (double)(float)(dVar59 - dVar67) +
                                   (double)(float)(dVar62 * (double)(float)(dVar58 - dVar66))));
        if ((bVar28 & 0x10) == 0) {
          sd = (float *)pSVar38->pSoundDef;
          iVar22 = sound_GetFade(SQRT((pfVar52[2] - GameCamera.posZ) *
                                      (pfVar52[2] - GameCamera.posZ) +
                                      (*pfVar52 - GameCamera.posX) * (*pfVar52 - GameCamera.posX) +
                                      (pfVar52[1] - GameCamera.posY) *
                                      (pfVar52[1] - GameCamera.posY)),*sd,sd[1],sd);
          uVar24 = iVar22 * *piVar37;
          pvVar11 = *ppvVar41;
          uVar24 = ((int)uVar24 >> 10) + (uint)((int)uVar24 < 0 && (uVar24 & 0x3ff) != 0);
          *(uint *)(iVar26 + 0x138) = uVar24;
          if ((*(byte *)((int)pvVar11 + 0x19) & 2) == 0) {
            *(uint *)(iVar26 + 0xc0) = *(uint *)(iVar26 + 0xc0) | 8;
          }
        }
        else {
          uVar24 = *piVar37;
          iVar22 = 0x400;
          *(uint *)(iVar26 + 0x138) = uVar24;
        }
        if (((uVar20 != 0) && ((*(byte *)((int)*ppvVar41 + 0x19) & 4) == 0)) &&
           (dVar69 < (double)*pfVar45)) {
          uVar24 = ((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0);
          *(uint *)(iVar26 + 0x138) = uVar24;
        }
        uVar12 = *(uint *)(iVar26 + 0xc0);
        *(uint *)(iVar26 + 0xc0) = uVar12 | 1;
        if ((iVar22 < 0x20 && (int)uVar24 < 0x20) && ((*pcVar47 & 4U) != 0)) {
          *(undefined4 *)(iVar26 + 0xc0) = 0x20;
        }
        else if (((*pcVar47 & 1U) == 0) &&
                (bVar28 = *pcVar47, *(uint *)(iVar26 + 0xc0) = uVar12 | 3, (bVar28 & 0x20) == 0)) {
          *(uint *)(iVar26 + 0xc0) = uVar12 | 7;
        }
      }
      else {
        *(undefined4 *)(iVar26 + 0xc0) = 0x10;
      }
    }
    iVar34 = iVar34 + 1;
    pSVar38 = pSVar38 + 1;
    puVar35 = puVar35 + 0x70;
    piVar37 = piVar37 + 0x1c;
    pcVar49 = pcVar49 + 0x70;
    ppvVar41 = ppvVar41 + 0x1c;
    pfVar43 = pfVar43 + 0x1c;
    pfVar45 = pfVar45 + 0x1c;
    ppMVar40 = ppMVar40 + 0x1c;
    pcVar47 = pcVar47 + 0x70;
    pfVar52 = pfVar52 + 0x1c;
    lVar50 = lVar50 + 4;
  } while (iVar34 < 0x1e);
  uVar24 = 0;
  iVar34 = 0;
  lVar50 = lVar51;
  puVar35 = puVar36;
  do {
    iVar22 = (int)lVar50;
    if ((*(uint *)(iVar22 + 0xc0) & 8) != 0) {
      if (puVar35[0x74] == '\a') {
        if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) &&
           (g_FrontEnd == '\0')) {
          if (worldUpdateTime != DAT_009644f8) {
            iVar26 = 0;
            pfVar52 = (float *)&DAT_00964500;
            do {
              sound_CamOfs(pfVar52);
              iVar26 = iVar26 + 1;
              pfVar52 = pfVar52 + 4;
            } while (iVar26 < 6);
            DAT_009644f8 = worldUpdateTime;
          }
          lVar42 = 0;
          iVar27 = 0x963814;
          iVar26 = 0;
          puVar48 = &DAT_00964500;
          pbVar53 = (byte *)((int)g_SoundChannels[0].offset + iVar34 + 0x14);
          do {
            bVar28 = sound_Occl(puVar35 + 0x70,puVar48);
            *pbVar53 = bVar28;
            lVar55 = 5;
            pbVar25 = pbVar53;
            do {
              pbVar25 = pbVar25 + 1;
              *pbVar25 = *(byte *)(iVar34 + iVar27);
              lVar55 = lVar55 + -1;
            } while (lVar55 != 0);
            bVar28 = *pbVar53;
            iVar26 = iVar26 + 6;
            puVar48 = puVar48 + 0x10;
            pbVar53 = pbVar53 + 6;
            iVar27 = iVar27 + 6;
            lVar42 = lVar42 + 6 + ((LZCOUNT(-(uint)bVar28) << 0x3a) >> 0x3f & lVar42 - (lVar42 + 6))
            ;
          } while (iVar26 < 0x24);
          iVar26 = (int)lVar42;
          if (iVar26 < 0x24) {
            if (0x12 < iVar26) {
              *(int *)(iVar22 + 0x138) = ((0x24 - iVar26) * *(int *)(iVar22 + 0x138)) / 0x12;
            }
          }
          else {
            *(undefined4 *)(iVar22 + 0x138) = 0;
          }
        }
      }
      else {
        if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) &&
           (g_FrontEnd == '\0')) {
          uVar12 = worldUpdateTime & 3;
          lVar42 = (ulonglong)*(uint *)(puVar35 + 0xb0) +
                   (((ulonglong)*(uint *)(puVar35 + 0xb0) + 1 & 0xffffffff) / 0x24) * -0x24;
          uVar18 = (uVar24 ^ worldUpdateTime) & 1;
          iVar26 = (int)lVar42;
          iVar27 = iVar26 + 1;
          *(int *)(puVar35 + 0xb0) = iVar27;
          if (uVar18 + ((uint)((LZCOUNT(-((byte)puVar35[0x75] & 4)) << 0x3a) >> 0x3f) &
                       ((uint)LZCOUNT((uVar24 & 3) - uVar12) >> 5) - uVar18) == 0) {
            uVar39 = (lVar42 + 0x24U & 0xffffffff) / 0x24;
            *(undefined1 *)(iVar26 + 0x963815 + iVar34) =
                 *(undefined1 *)
                  ((iVar27 - ((int)(uVar39 << 5) + (int)(uVar39 << 2))) + 0x963837 + iVar34);
          }
          else {
            uVar29 = sound_Occl(puVar35 + 0x70,uVar21 - 0x2b0);
            *(undefined1 *)(*(int *)(puVar35 + 0xb0) + 0x963814 + iVar34) = uVar29;
          }
        }
        iVar26 = fastfunc::FastSumChars(puVar35 + 0xb4,0x24);
        if (iVar26 < 0x24) {
          if (0x12 < iVar26) {
            *(int *)(iVar22 + 0x138) = ((0x24 - iVar26) * *(int *)(iVar22 + 0x138)) / 0x12;
          }
        }
        else {
          *(undefined4 *)(iVar22 + 0x138) = 0;
        }
      }
    }
    uVar24 = uVar24 + 1;
    lVar50 = lVar50 + 4;
    puVar35 = puVar35 + 0x70;
    iVar34 = iVar34 + 0x70;
  } while ((int)uVar24 < 0x1e);
  uVar46 = puVar14[0x48];
  uVar54 = puVar14[0x47];
  uVar39 = puVar14[0x46];
  uVar30 = puVar14[0x45];
  fastfunc::FastNormalizeRMtx4(uVar21 - 0x2a0,0x951710);
  iVar34 = 0;
  ppvVar41 = &g_SoundChannels[0].pSoundInstance;
  dVar69 = 300.0;
  do {
    iVar22 = (int)lVar51;
    if (*(int *)(iVar22 + 0xc0) != 0) {
      uVar24 = *(uint *)(iVar22 + 0xc0);
      uVar13 = *(undefined4 *)(puVar36 + 0x70);
      *(undefined4 *)uVar54 = 0xffffffff;
      pcVar49 = (char *)uVar46;
      if ((uVar24 & 0x20) == 0) {
        if ((uVar24 & 0x10) == 0) {
          iVar26 = *(int *)(puVar36 + 0x84);
          uVar33 = 0;
          uVar32 = ((LZCOUNT(-iVar26) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) + 6;
          if ((uVar24 & 2) != 0) {
            uVar32 = uVar32 | 8;
            uVar33 = sound_GetPan(uVar54,pfVar44,uVar21 - 0x2a0);
            uVar24 = *(uint *)(iVar22 + 0xc0);
          }
          iVar27 = 0;
          if ((uVar24 & 4) != 0) {
            uVar32 = uVar32 | 1;
            fastfunc::FastDoubleToInt((double)(float)((double)*(float *)(iVar22 + 0x1b0) * dVar69));
            iVar27 = FUN_00505d30();
          }
          if ((uVar20 != 0) && ((*(byte *)(*(int *)uVar30 + 0x19) & 8) == 0)) {
            iVar27 = iVar27 + -0x5f4;
            uVar32 = uVar32 | 1;
          }
          if (*pcVar49 == '\a') {
            *pcVar49 = '\x01';
            FUN_005062f4(*(undefined4 *)(*(int *)(puVar36 + 0x78) + 0x1c),
                         *(undefined2 *)(*(int *)(puVar36 + 0x78) + 0x1a),
                         *(undefined4 *)(iVar22 + 0x138),uVar33,iVar27,iVar26,
                         &PTR_sound_PlayCB_00707c40,uVar54);
          }
          else {
            FUN_005063b0(uVar13,uVar32,*(undefined4 *)(iVar22 + 0x138),uVar33,iVar27,iVar26,
                         &PTR_sound_FreshenCB_00707c48,uVar54);
          }
        }
        else {
          FUN_005065dc(uVar13,&PTR_sound_FreshenCB_00707c48,uVar54);
        }
      }
      else if (*pcVar49 == '\a') {
        *(undefined4 *)uVar39 = 0;
        *ppvVar41 = (void *)0x0;
        *pcVar49 = '\0';
      }
      else {
        FUN_00506638(uVar13);
        *pcVar49 = '\x06';
        FUN_005065dc(uVar13,&PTR_sound_FreshenCB_00707c48,uVar54);
      }
    }
    iVar34 = iVar34 + 1;
    uVar39 = uVar39 + 0x70;
    uVar54 = uVar54 + 0x70;
    ppvVar41 = ppvVar41 + 0x1c;
    puVar36 = puVar36 + 0x70;
    pfVar44 = pfVar44 + 0x1c;
    uVar30 = uVar30 + 0x70;
    uVar46 = uVar46 + 0x70;
    lVar51 = lVar51 + 4;
  } while (iVar34 < 0x1e);
  music::LoadMusic();
  stub::STUB_00505f4c();
  stub::STUB_00505d20();
  stub::STUB_00505f50();
  DAT_009637cc = 0;
  return 0;
}



//==== 0015cc7c  ns=sound  size=0x58
// sig: int IsMobyPlayingSound(MobyInstance * pMoby, int handle)
// callers(90): 000a30e0 hero::???_Hero_UpdateWeaponInput; 001856a0 mobyupdate_helpers::M101_001856a0; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 001ae060 mobyupdate_unsorted::UpdateMoby_1067; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001e0638 mobyupdate_unsorted::UpdateMoby_{1150_1151}; 001ed448 mobyupdate_unsorted::UpdateMoby_1172; 001ff200 mobyupdate_unsorted::UpdateMoby_1206_DamageCauser; 00205098 mobyupdate_unsorted::UpdateMoby_1212; 00206160 mobyupdate_unsorted::UpdateMoby_{1213_1973}; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 002326a8 mobyupdate_unsorted::UpdateMoby_1264; 00236ba0 mobyupdate_unsorted::UpdateMoby_1270; 002587f8 mobyupdate_helpers::M1356_002587f8; 0025b328 mobyupdate_unsorted::UpdateMoby_a_lot_12; 00265e20 mobyupdate_unsorted::UpdateMoby_1380; 00269b60 mobyupdate_unsorted::UpdateMoby_1392; 0026a268 mobyupdate_unsorted::UpdateMoby_1395; 002708f0 mobyupdate_unsorted::UpdateMoby_1410; 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar; 00275240 mobyupdate_helpers::M1422_00275240; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::IsMobyPlayingSound(MobyInstance *pMoby,int handle)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((-1 < handle) &&
      (iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4),
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) == pMoby)) &&
     ((cVar1 = *(char *)((int)g_SoundChannels + iVar2 + 4), cVar1 == '\x01' || (cVar1 == '\x02'))))
  {
    iVar3 = 1;
  }
  return iVar3;
}



//==== 0015ccd4  ns=sound  size=0xb0
// sig: undefined sound_LoadLevelWadDebug(void)
// callers(0): 
// callees(3): 00505c6c FUN_00505c6c; 00505f48 stub::STUB_00505f48; 005cd2a8 libc::snprintf
// strings: 00653724: 'host0:c:\\data\\levels\\level%d\\level.wad'

undefined8 sound::sound_LoadLevelWadDebug(longlong param_1)

{
  undefined8 uVar1;
  char acStack_60 [64];
  
  uVar1 = 0;
  if (g_SoundLoadBusy == 0) {
    g_SoundLoadBusy = 1;
    libc::snprintf(acStack_60,"host0:c:\\data\\levels\\level%d\\level.wad",Level);
    uVar1 = FUN_00505c6c(acStack_60,(int)(param_1 << 0xb));
    stub::STUB_00505f48();
    g_SoundLoadBusy = 0;
  }
  return uVar1;
}



//==== 0015cd84  ns=space  size=0x2c
// sig: undefined ???_Unused_SetStride20Field1c(void)
// callers(0): 
// callees(0): 

void space::____Unused_SetStride20Field1c(int param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      param_1 = param_1 + 0x20;
    } while (0 < param_3);
  }
  return;
}



//==== 0015cdb0  ns=sound  size=0x60
// sig: void sound_Kill(int handle)
// callers(117): 00012048 boot::PrepareFrontbin; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00083594 hero::Hero_KillLoopingSounds; 000836ac hero::Hero_RevertToRatchet; 00086b60 hero::SetHeroType; 0008bc30 hero::Hero_UpdateAnim; 0009a1b0 hero::Hero_HandleDamage; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 000efba0 mobyfunc::MB_UpdateLoopSound; 0017f7d0 UpdateSound_0; 0017fa08 UpdateSound_1; 001806e8 UpdateSound_5; 00187558 mobyupdate_unsorted::UpdateMoby_{1013_1014_1064_1065}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 00195a48 mobyupdate_unsorted::UpdateMoby_1040; 001ae060 mobyupdate_unsorted::UpdateMoby_1067; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001e0638 mobyupdate_unsorted::UpdateMoby_{1150_1151}
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_Kill(int handle)

{
  char cVar1;
  int iVar2;
  
  if (-1 < handle) {
    iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4);
    cVar1 = *(char *)((int)g_SoundChannels + iVar2 + 4);
    if (cVar1 == '\a') {
      *(undefined4 *)((int)g_SoundChannels + iVar2 + 0x18) = 0;
      *(undefined4 *)((int)g_SoundChannels + iVar2 + 0x1c) = 0;
      *(undefined1 *)((int)g_SoundChannels + iVar2 + 4) = 0;
    }
    else if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      *(undefined1 *)((int)g_SoundChannels + iVar2 + 4) = 4;
    }
  }
  return;
}



//==== 0015ce18  ns=sound  size=0x314
// sig: int sound_Play(void * sd, int flags, MobyInstance * pMoby, float * pos, int vol_mod)
// callers(7): 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 0015d2d4 sound::sound_CorePlay; 0015d380 sound::sound_LevelPlay; 0015d434 sound::sound_AmbientPlay; 0015d4dc sound::sound_FootstepPlay; 0033bfc0 mobyupdate_helpers::M309_0033bfc0
// callees(2): 000fc620 mobyutil::MB_randInt; 0015b7d8 sound::sound_GetFade

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_Play(void *sd,int flags,MobyInstance *pMoby,float *pos,int vol_mod)

{
  float *sd_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(short *)((int)sd + 0x1a) < 0) {
    iVar6 = -1;
  }
  else if ((uint)LZCOUNT((uint)*(byte *)((int)sd + 0x18)) >> 5 == (uint)LZCOUNT(flags & 4) >> 5) {
    iVar4 = 0x1a;
    if ((pMoby != (MobyInstance *)0x0) &&
       (((g_heroMobyPtr == pMoby || (g_currentWeaponMoby == pMoby)) || (pMoby->oClass == FRAME)))) {
      iVar4 = 0x1e;
    }
    lVar5 = 0;
    iVar6 = 0;
    if (iVar4 != 0) {
      do {
        iVar6 = (int)lVar5;
        if (*(char *)((int)g_SoundChannels + ((int)(lVar5 << 7) - (int)(lVar5 << 4)) + 4) == '\0')
        break;
        iVar6 = iVar6 + 1;
        lVar5 = (longlong)iVar6;
      } while (iVar6 < iVar4);
    }
    if (iVar6 < iVar4) {
      g_SoundChannels[iVar6].bank_id = *(short *)((int)sd + 0x1a);
      g_SoundChannels[iVar6].pSoundDef = sd;
      g_SoundChannels[iVar6].sound_index = -1;
      g_SoundChannels[iVar6].vol = vol_mod;
      g_SoundChannels[iVar6].pMoby = (MobyInstance *)0x0;
      g_SoundChannels[iVar6].pSoundInstance = (void *)0x0;
      *(undefined1 *)g_SoundChannels[iVar6].offset = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 1) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 2) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 3) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 1) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 5) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 6) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 7) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 2) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 9) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 10) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xb) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 3) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xd) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xe) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xf) = 0;
      if ((pos == (float *)0x0) && (pMoby == (MobyInstance *)0x0)) {
        g_SoundChannels[iVar6].pos[3] = 0.0;
        g_SoundChannels[iVar6].pos[2] = 0.0;
        flags = flags | 0x11;
        g_SoundChannels[iVar6].pos[1] = 0.0;
        g_SoundChannels[iVar6].pos[0] = 0.0;
      }
      else if (pMoby == (MobyInstance *)0x0) {
        g_SoundChannels[iVar6].pos[0] = *pos;
        g_SoundChannels[iVar6].pos[1] = pos[1];
        g_SoundChannels[iVar6].pos[2] = pos[2];
        g_SoundChannels[iVar6].pos[3] = pos[3];
      }
      else {
        g_SoundChannels[iVar6].pos[0] = (pMoby->pos).x;
        g_SoundChannels[iVar6].pos[1] = (pMoby->pos).y;
        g_SoundChannels[iVar6].pos[2] = (pMoby->pos).z;
        g_SoundChannels[iVar6].pos[3] = (pMoby->pos).w;
        g_SoundChannels[iVar6].pos[2] = g_SoundChannels[iVar6].pos[2] + 1.0;
      }
      if ((flags & 0x10U) == 0) {
        fVar1 = g_SoundChannels[iVar6].pos[1] - GameCamera.posY;
        fVar2 = g_SoundChannels[iVar6].pos[0] - GameCamera.posX;
        sd_00 = (float *)g_SoundChannels[iVar6].pSoundDef;
        fVar3 = g_SoundChannels[iVar6].pos[2] - GameCamera.posZ;
        vol_mod = sound_GetFade(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1),*sd_00,sd_00[1],
                                sd_00);
      }
      if (vol_mod < 0x20) {
        iVar6 = -1;
      }
      else {
        g_SoundChannels[iVar6].flags = (char)flags;
        g_SoundChannels[iVar6].state = '\a';
        g_SoundChannels[iVar6].unk_40 = 0;
        iVar4 = *(int *)((int)sd + 0x14);
        if (iVar4 != *(int *)((int)sd + 0x10)) {
          iVar4 = mobyutil::MB_randInt(iVar4 - *(int *)((int)sd + 0x10));
          iVar4 = iVar4 + *(int *)((int)sd + 0x10);
        }
        g_SoundChannels[iVar6].pitch = iVar4;
        g_SoundChannels[iVar6].handle = -1;
      }
    }
    else {
      iVar6 = -1;
    }
  }
  else {
    iVar6 = -1;
  }
  return iVar6;
}



//==== 0015d12c  ns=sound  size=0xd8
// sig: int PlayMobySound(int sound, int flags, MobyInstance * pMoby)
// callers(386): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001c618 mobyupdate_helpers::M326_0001c618; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 000478ec camera::camera4::InitCamera_4; 000816ec hero::Hero_PlaySound; 00082030 hero::Hero_UpdateQueuedSounds; 00085b30 hero::Hero_HandleGadgetSwitching; 0008bc30 hero::Hero_UpdateAnim; 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate; 0009a1b0 hero::Hero_HandleDamage; 0009d6b0 hero::Hero_JumpThrustGrav; 0009de38 hero::Hero_JumpTurnTrans; 000a0ae0 hero::Hero_PlayLoopSound; 000a11e8 hero::???_Hero_ApplyHitGravityToMobyList; 000a1698 hero::Hero_ThrowWrench; 000a2a08 hero::Hero_SwimSurfTransition; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000a64d0 hero::Hero_HoverboardBoostPads; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket
// callees(1): 0015ce18 sound::sound_Play

int sound::PlayMobySound(int sound,int flags,MobyInstance *pMoby)

{
  MobyClass *pMVar1;
  int iVar2;
  int iVar3;
  
  if (pMoby == (MobyInstance *)0x0) {
    iVar2 = -1;
  }
  else {
    pMVar1 = pMoby->pClass;
    if (pMVar1 == (MobyClass *)0x0) {
      iVar2 = -1;
    }
    else if (pMVar1->SoundDefs == (void *)0x0) {
      iVar2 = -1;
    }
    else if (sound < (int)(uint)pMVar1->sound_cnt) {
      iVar2 = sound_Play((void *)((int)pMVar1->SoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,
                         0x400);
      if (-1 < iVar2) {
        iVar3 = (int)((longlong)iVar2 << 7) - (int)((longlong)iVar2 << 4);
        *(MobyInstance **)((int)g_SoundChannels + iVar3 + 0x18) = pMoby;
        *(short *)((int)g_SoundChannels + iVar3 + 0xe) = (short)sound;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}



//==== 0015d204  ns=sound  size=0xd0
// sig: int sound_MobyPlay_oClass(int sound, int flags, MobyInstance * pMoby, int oClass)
// callers(31): 0018d4ec mobyupdate_helpers::M1302_0018d4ec; 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047; 001be0e0 mobyupdate_unsorted::UpdateMoby_{1101_1102_1531_1532}; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 0026a268 mobyupdate_unsorted::UpdateMoby_1395; 002ea970 mobyupdate_unsorted::UpdateMoby_a_lot_5; 002eb450 mobyupdate_helpers::M1449_CollectAmmo; 0031eca8 mobyupdate_helpers::M267_0031eca8; 0035a6b8 mobyupdate_unsorted::UpdateMoby_386; 00363468 mobyupdate_unsorted::UpdateMoby_403; 0039fcb8 mobyupdate_unsorted::UpdateMoby_49; 003a0ce8 mobyupdate_helpers::M491_003a0ce8; 003a3c08 mobyupdate_unsorted::UpdateMoby_50; 003a5468 mobyupdate_helpers::M511_003a5468; 003cc030 mobyupdate_unsorted::UpdateMoby_578; 003e7830 mobyupdate_unsorted::UpdateMoby_624; 004009e0 mobyupdate_unsorted::UpdateMoby_{646_752}; 00404d18 mobyupdate_unsorted::UpdateMoby_655; 00428f88 mobyupdate_unsorted::UpdateMoby_702; 00466e98 mobyupdate_unsorted::UpdateMoby_806; 0046c660 mobyupdate_unsorted::UpdateMoby_{81_88}; 0046dcc8 mobyupdate_helpers::M816_MoveAlongSpline; 00470bb0 mobyupdate_unsorted::UpdateMoby_819; 00490fb0 mobyupdate_helpers::M857_00490fb0
// callees(1): 0015ce18 sound::sound_Play

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_MobyPlay_oClass(int sound,int flags,MobyInstance *pMoby,int oClass)

{
  MobyClass *pMVar1;
  int iVar2;
  int iVar3;
  
  pMVar1 = MobyClasses[(byte)(&MobyClassLookup)[oClass]];
  if (pMVar1 == (MobyClass *)0x0) {
    iVar2 = -1;
  }
  else if (sound < (int)(uint)pMVar1->sound_cnt) {
    iVar2 = sound_Play((void *)((int)pMVar1->SoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,
                       0x400);
    if (-1 < iVar2) {
      iVar3 = (int)((longlong)iVar2 << 7) - (int)((longlong)iVar2 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar3 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar3 + 0xe) = (short)sound;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



//==== 0015d2d4  ns=sound  size=0xac
// sig: int sound_CorePlay(int sound, int flags, MobyInstance * pMoby)
// callers(4): 0007b880 help::Help_StartMessageBox; 0007ba00 help::Help_Update; 0011b728 mobyutil::MB_UnlockSkillPoint; 004b0698 mobyupdate_unsorted::UpdateMoby_918
// callees(1): 0015ce18 sound::sound_Play

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_CorePlay(int sound,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  
  if (sound < g_CoreSoundCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)sound;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 0015d380  ns=sound  size=0xb4
// sig: int sound_LevelPlay(int sound, int flags, MobyInstance * pMoby)
// callers(7): 00012048 boot::PrepareFrontbin; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001cb618 mobyupdate_helpers::M1109_001cb618; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 003d4228 FUN_003d4228; 004114b0 mobyupdate_helpers::M684_004114b0; 00448ab0 mobyupdate_helpers::M795_00448ab0
// callees(1): 0015ce18 sound::sound_Play

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_LevelPlay(int sound,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = sound + g_CoreSoundCnt;
  if (iVar3 < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + iVar3 * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)iVar3;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 0015d434  ns=sound  size=0xa8
// sig: int sound_AmbientPlay(int sound, int flags, void * pSoundInstance, int vol_mod)
// callers(5): 0017f7d0 UpdateSound_0; 0017fa08 UpdateSound_1; 0017fee0 UpdateSound_2; 00180408 UpdateSound_4; 001806e8 UpdateSound_5
// callees(1): 0015ce18 sound::sound_Play

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_AmbientPlay(int sound,int flags,void *pSoundInstance,int vol_mod)

{
  int iVar1;
  int iVar2;
  
  if (sound < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + sound * 0x20),flags,(MobyInstance *)0x0,
                       (float *)((int)pSoundInstance + 0x40),vol_mod);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(void **)((int)g_SoundChannels + iVar2 + 0x1c) = pSoundInstance;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)sound;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 0015d4dc  ns=sound  size=0xdc
// sig: int sound_FootstepPlay(int ground_type, int right_foot, int magneboots, int flags, MobyInstance * pMoby)
// callers(1): 00080a08 hero::Hero_PlayFootStep
// callees(1): 0015ce18 sound::sound_Play

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_FootstepPlay
              (int ground_type,int right_foot,int magneboots,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)(byte)(&DAT_00731be8)[Level] + ground_type * 4 + right_foot * 2 + magneboots +
          g_CoreSoundCnt;
  if (iVar3 < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + iVar3 * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)iVar3;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 0015d5b8  ns=sound  size=0x58
// sig: int sound_SetOffset(int handle, float * offset)
// callers(1): 002add88 mobyupdate_unsorted::UpdateMoby_170
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_SetOffset(int handle,float *offset)

{
  g_SoundChannels[handle].flags = g_SoundChannels[handle].flags | 0x40;
  g_SoundChannels[handle].offset[0] = *offset;
  g_SoundChannels[handle].offset[1] = offset[1];
  g_SoundChannels[handle].offset[2] = offset[2];
  g_SoundChannels[handle].offset[3] = offset[3];
  return 1;
}



//==== 0015d610  ns=sound  size=0x54
// sig: int sound_AddOffset(int handle, float * offset)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_AddOffset(int handle,float *offset)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  
  fVar1 = offset[1];
  fVar2 = offset[2];
  iVar3 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4);
  pfVar4 = (float *)((int)g_SoundChannels + iVar3 + 0x30);
  *pfVar4 = *pfVar4 + *offset;
  *(float *)((int)g_SoundChannels + iVar3 + 0x34) =
       *(float *)((int)g_SoundChannels + iVar3 + 0x34) + fVar1;
  *(float *)((int)g_SoundChannels + iVar3 + 0x38) =
       *(float *)((int)g_SoundChannels + iVar3 + 0x38) + fVar2;
  return 1;
}



//==== 0015d664  ns=sound  size=0xac
// sig: int sound_ClearOffset(int handle)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_ClearOffset(int handle)

{
  g_SoundChannels[handle].flags = g_SoundChannels[handle].flags & 0xbf;
  *(undefined1 *)g_SoundChannels[handle].offset = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 1) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 2) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 3) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 1) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 5) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 6) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 7) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 2) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 9) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 10) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xb) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 3) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xd) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xe) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xf) = 0;
  return 1;
}



//==== 0015d710  ns=sound  size=0x24
// sig: int sound_SetVol(int handle, int vol)
// callers(8): 0017fa08 UpdateSound_1; 00180408 UpdateSound_4; 0031a070 mobyupdate_helpers::M253_0031a070; 0031eca8 mobyupdate_helpers::M267_0031eca8; 0034a5d0 mobyupdate_helpers::M340_0034a5d0; 00398538 mobyupdate_unsorted::UpdateMoby_{468_469}; 00413d80 mobyupdate_unsorted::UpdateMoby_685; 00437780 mobyupdate_helpers::M733_00437780
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_SetVol(int handle,int vol)

{
  *(int *)((int)g_SoundChannels +
          ((int)((longlong)handle << 7) - (int)((longlong)handle << 4)) + 0x10) = vol;
  return 1;
}



//==== 0015d734  ns=sound  size=0x24
// sig: int sound_SetPitch(int handle, int pitch)
// callers(3): 002af360 mobyupdate_unsorted::UpdateMoby_172; 0034a5d0 mobyupdate_helpers::M340_0034a5d0; 003d2c48 mobyupdate_unsorted::UpdateMoby_585
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound::sound_SetPitch(int handle,int pitch)

{
  *(int *)((int)g_SoundChannels +
          ((int)((longlong)handle << 7) - (int)((longlong)handle << 4)) + 0x14) = pitch;
  return 1;
}



//==== 0015d758  ns=sound  size=0x54
// sig: undefined sound_SetupAmbientFunctions(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

void sound::sound_SetupAmbientFunctions(short *param_1)

{
  SoundVTable *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  for (pSVar1 = SoundVTable; (pSVar1->idx != 0xffffffff && (pSVar1->idx != (int)*param_1));
      pSVar1 = pSVar1 + 1) {
    iVar2 = iVar2 + 1;
  }
  param_1[1] = (short)iVar2;
  *(void **)(param_1 + 2) = SoundVTable[iVar2].update;
  return;
}



//==== 0015d7ac  ns=sound  size=0x98
// sig: void sound_UpdateAmbient(void)
// callers(4): 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_UpdateAmbient(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < g_SoundCnt) {
    iVar4 = 0;
    iVar2 = g_SoundCnt;
    do {
      puVar1 = *(undefined4 **)(g_pSoundInstances + iVar4 + 4);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(g_pSoundInstances + iVar4);
        iVar2 = g_SoundCnt;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x90;
    } while (iVar3 < iVar2);
  }
  return;
}



//==== 0015d844  ns=sound  size=0x70
// sig: undefined sound_SetReverb(void)
// callers(1): 00180210 UpdateSound_3
// callees(0): 

void sound::sound_SetReverb(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  DAT_009637c0 = param_1;
  if (DAT_009637c8 != param_2) {
    DAT_009637cb = DAT_009637cb | 1;
    DAT_009637c8 = (byte)param_2;
  }
  if (DAT_009637c4 != param_3) {
    DAT_009637cb = DAT_009637cb | 4;
    DAT_009637c4 = param_3;
  }
  if ((DAT_009637c9 != param_4) || (DAT_009637ca != param_5)) {
    DAT_009637cb = DAT_009637cb | 2;
    DAT_009637c9 = (byte)param_4;
    DAT_009637ca = (byte)param_5;
  }
  return;
}



//==== 0015d8b4  ns=sound  size=0xd4
// sig: void sound_StopAllSounds(void)
// callers(11): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 0004fe38 sound::UnloadSoundBanks; 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition; 00168d34 update::StartMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 0016974c update::UpdateCinematic
// callees(3): 00505d20 stub::STUB_00505d20; 00505f4c stub::STUB_00505f4c; 0060c0d0 FUN_0060c0d0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_StopAllSounds(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  SoundData *pSVar4;
  longlong lVar5;
  
  stub::STUB_00505f4c();
  stub::STUB_00505d20();
  FUN_0060c0d0();
  do {
    iVar1 = stub::STUB_00505d20();
  } while (iVar1 != 0);
  puVar3 = &DAT_00963760;
  lVar5 = 4;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3 = puVar3 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pSVar4 = g_SoundChannels;
  DAT_009637a0 = 0;
  lVar5 = 0xf;
  pcVar2 = &g_SoundChannels[0].state;
  do {
    pSVar4->handle = 0;
    *pcVar2 = '\0';
    pSVar4[1].handle = 0;
    pcVar2[0x70] = 0;
    pSVar4 = pSVar4 + 2;
    pcVar2 = pcVar2 + 0xe0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0015d988  ns=sound  size=0x10
// sig: void sound_BasicCB(int ret_val, int * data)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_BasicCB(int ret_val,int *data)

{
  if (data != (int *)0x0) {
    *data = ret_val;
  }
  return;
}



//==== 0015d998  ns=sound  size=0x40
// sig: void sound_PlayCB(int ret_val, SoundData * data)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_PlayCB(int ret_val,SoundData *data)

{
  if (data != (SoundData *)0x0) {
    data->handle = ret_val;
    if (ret_val == 0) {
      data->pMoby = (MobyInstance *)0x0;
      data->pSoundInstance = (void *)0x0;
      data->state = '\0';
    }
    else if (data->state == '\x01') {
      data->state = '\x02';
    }
  }
  return;
}



//==== 0015d9d8  ns=sound  size=0x28
// sig: void sound_FreshenCB(int ret_val, SoundData * data)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound::sound_FreshenCB(int ret_val,SoundData *data)

{
  if ((data != (SoundData *)0x0) && (data->handle = ret_val, ret_val == 0)) {
    data->pMoby = (MobyInstance *)0x0;
    data->pSoundInstance = (void *)0x0;
    data->state = '\0';
  }
  return;
}



//==== 0015da00  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_SPACE(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_SPACE(void)

{
  DAT_00731bc4 = 0x10000;
  return;
}



//==== 0015da58  ns=space  size=0x588
// sig: void UpdateMoby_Spaceship(MobyInstance * moby)
// callers(0): 
// callees(7): 0006d720 RegisterFuncForMoby; 0006d7e0 draw::RegisterPostDraw; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011b0b0 mobyutil::MB_ClearHelpMessage; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::UpdateMoby_Spaceship(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  short sVar11;
  int iVar10;
  byte bVar12;
  ulonglong uVar13;
  double dVar14;
  
  pvVar6 = moby->pVar;
  if (moby->state == '*') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if ((MiscLevelFlags.SpaceshipRelated1 == 0) && (UnlockableItems.magneboots != '\0')) {
        update::mode_sceneInit(4);
        MiscLevelFlags.SpaceshipRelated1 = 1;
      }
      else if ((MiscLevelFlags.SpaceshipRelated2 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        update::mode_sceneInit(5);
        MiscLevelFlags.SpaceshipRelated2 = 1;
      }
      else if ((MiscLevelFlags.SpaceshipRelated3 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        update::PlayInfobotMovie(0xb);
        MiscLevelFlags.SpaceshipRelated3 = 1;
      }
      else if ((MiscLevelFlags.SpaceShipRelated4 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        update::mode_sceneInit(6);
        MiscLevelFlags.SpaceShipRelated4 = 1;
      }
      else {
        moby->state = '\0';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        DAT_00a15c74 = 1;
        DAT_00964598 = 1;
      }
    }
  }
  else {
    if (moby->enabled != '\0') {
      bVar12 = moby->setByGroup + 2;
      moby->setByGroup = bVar12;
      dVar14 = (double)fastfunc::FastIntToDouble((ulonglong)bVar12 - 0x80);
      fVar1 = (float)(dVar14 * 0.02454369328916073 + 1.570796251296997);
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
      uVar13 = (ulonglong)
               (uint)(int)((fVar1 * fVar4 * 2.601887e-06 +
                           fVar4 * -0.0001980741 +
                           fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 50.0) +
               0x96;
      uVar8 = (uint)((uVar13 & 0xffffff) << 8);
      uVar7 = (uint)uVar13 | uVar8;
      moby->field60_0x90 =
           uVar7 + ((uint)((LZCOUNT(0x215 - (uint)moby->oClass) << 0x3a) >> 0x3f) &
                   ((int)(uint)uVar13 >> 1 | uVar8) - uVar7) | (uint)((uVar13 & 0xffffffff) << 0x10)
      ;
      draw::RegisterPostDraw(&PTR_Space_DrawShipEffects_00707cd8,moby);
      fVar1 = (moby->pos).y - GameCamera.posY;
      fVar2 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 32.0) {
        RegisterFuncForMoby(&PTR_STUB_0015e2c0_00707c68,moby);
      }
    }
    sVar11 = *(short *)((int)pvVar6 + 0xc);
    if (sVar11 == 0) {
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar3 = fVar1 - g_heroPosition.y;
      fVar4 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 6.0) {
        iVar10 = (int)((longlong)g_SpaceshipVariant << 4);
        fVar3 = *(float *)(&DAT_00731c60 + iVar10);
        fVar4 = *(float *)(iVar10 + 0x731c64);
        fVar5 = *(float *)(iVar10 + 0x731c68);
        fVar9 = ((moby->transform).v1.y * fVar4 +
                (moby->transform).v2.y * fVar5 + (moby->transform).v0.y * fVar3 + fVar1) -
                g_heroPosition.y;
        fVar1 = ((moby->transform).v1.x * fVar4 +
                (moby->transform).v2.x * fVar5 + (moby->transform).v0.x * fVar3 + fVar2) -
                g_heroPosition.x;
        fVar2 = ((moby->transform).v2.z * fVar5 +
                 (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar4 + (moby->pos).z) -
                g_heroPosition.z;
        if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar9 * fVar9) < 4.0) {
          sVar11 = 1;
          *(undefined2 *)((int)pvVar6 + 0xc) = 1;
        }
      }
    }
    else {
      iVar10 = (int)((longlong)g_SpaceshipVariant << 4);
      fVar1 = *(float *)(iVar10 + 0x731c64);
      fVar2 = *(float *)(&DAT_00731c60 + iVar10);
      fVar3 = *(float *)(iVar10 + 0x731c68);
      fVar4 = ((moby->transform).v2.y * fVar3 +
               (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar1 + (moby->pos).y) -
              g_heroPosition.y;
      fVar5 = ((moby->transform).v2.x * fVar3 +
               (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar1 + (moby->pos).x) -
              g_heroPosition.x;
      fVar1 = ((moby->transform).v2.z * fVar3 +
               (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar1 + (moby->pos).z) -
              g_heroPosition.z;
      if (4.1 < SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4)) {
        sVar11 = 0;
        *(undefined2 *)((int)pvVar6 + 0xc) = 0;
      }
    }
    if ((moby->modeBits & DISABLED) == NONE) {
      if (((sVar11 != 0) &&
          (iVar10 = mobyutil::MB_ShowPersistentMessage(2,0x53e4),
          (g_buttonsPressedThisFrame & TRIANGLE) != 0)) && (iVar10 != 0)) {
        if ((Level == Orxon) && (g_heroType == '\x01')) {
          moby->state = '*';
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          update::mode_sceneInit(9);
        }
        else {
          mobyutil::MB_ClearHelpMessage((MobyInstance *)0x2);
          DAT_00a15c74 = 1;
          DAT_00964598 = 0;
        }
      }
    }
    else {
      *(undefined2 *)((int)pvVar6 + 0xc) = 0;
    }
  }
  return;
}



//==== 0015dfe0  ns=space  size=0x2e0
// sig: char Space_SetCutsceneCamera(void)
// callers(1): 0015fe00 space::ChooseLoadingScreen
// callees(3): 000668d0 draw::UpdateViewContext; 005c5ad0 libc::memcpy; 005dd914 mathfunc::SinCos
// strings: 0096c074: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char space::Space_SetCutsceneCamera(void)

{
  char cVar1;
  float *pfVar2;
  void *pvVar4;
  undefined8 uVar3;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  pfVar2 = (float *)((int)boot::g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
  ViewContext.xratio = pfVar2[7];
  cVar1 = *(char *)(pfVar2 + 3);
  draw::UpdateViewContext();
  GameCamera.posX = *pfVar2;
  GameCamera.posY = pfVar2[1];
  GameCamera.posZ = pfVar2[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar2 + 3);
  pvVar4 = libc::memcpy(&local_e0,&DAT_00653758,0x40);
  uVar3 = mathfunc::SinCos((double)pfVar2[4],pvVar4,0);
  dVar12 = extraout_f1;
  uVar3 = mathfunc::SinCos((double)pfVar2[4],uVar3,1);
  dVar11 = extraout_f1_00;
  uVar3 = mathfunc::SinCos((double)pfVar2[5],uVar3,0);
  dVar10 = extraout_f1_01;
  uVar3 = mathfunc::SinCos((double)pfVar2[5],uVar3,1);
  dVar9 = extraout_f1_02;
  uVar3 = mathfunc::SinCos((double)pfVar2[6],uVar3,0);
  dVar8 = extraout_f1_03;
  dVar5 = (double)mathfunc::SinCos((double)pfVar2[6],uVar3,1);
  dVar7 = (double)(float)(dVar10 * dVar8);
  dVar6 = (double)(float)(dVar5 * dVar10);
  libc::memcpy(&local_a0,&DAT_00734b00,0x40);
  local_a0 = (float)(dVar9 * dVar5);
  local_9c = (float)(dVar9 * dVar8);
  local_88 = (float)(dVar9 * dVar12);
  local_78 = (float)(dVar11 * dVar9);
  local_90 = (float)(dVar12 * dVar6 - (double)(float)(dVar11 * dVar8));
  local_8c = (float)(dVar12 * dVar7 + (double)(float)(dVar11 * dVar5));
  local_80 = (float)(dVar11 * dVar6 + (double)(float)(dVar12 * dVar8));
  local_7c = (float)(dVar11 * dVar7 - (double)(float)(dVar5 * dVar12));
  local_98 = (float)-dVar10;
  libc::memcpy(&local_e0,&local_a0,0x40);
  GameCamera.orientMtx.right.x = -local_e0;
  GameCamera.orientMtx.right.y = -local_dc;
  GameCamera.orientMtx.right.z = -local_d8;
  GameCamera.orientMtx.up.x = local_d0;
  GameCamera.orientMtx.forward.x = -local_c0;
  GameCamera.orientMtx.up.y = local_cc;
  GameCamera.orientMtx.forward.y = -local_bc;
  GameCamera.orientMtx.forward.z = -local_b8;
  GameCamera.orientMtx.up.z = local_c8;
  if (Cheats[4] != '\0') {
    GameCamera.orientMtx.right.w = 0.0;
    GameCamera.orientMtx.right.x = -(local_bc * local_c8) - -(local_b8 * local_cc);
    GameCamera.orientMtx.right.y = -(local_b8 * local_d0) - -(local_c0 * local_c8);
    GameCamera.orientMtx.right.z = -(local_c0 * local_cc) - -(local_bc * local_d0);
  }
  return cVar1;
}



//==== 0015e2c0  ns=stub  size=0x4
// sig: undefined STUB_0015e2c0(void)
// callers(0): 
// callees(0): 

void stub::STUB_0015e2c0(void)

{
  return;
}



//==== 0015e2c4  ns=space  size=0x28
// sig: void Space_DisableShip(void)
// callers(2): 00411f38 mobyupdate_unsorted::UpdateMoby_684; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_DisableShip(void)

{
  MobyModeBit *pMVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = g_SpaceshipPtr;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    pMVar1 = &g_SpaceshipPtr->modeBits;
    g_SpaceshipPtr->collision = (ushort *)0x0;
    pMVar2->modeBits = *pMVar1 | (NO_UPDATE|DISABLED);
  }
  return;
}



//==== 0015e2ec  ns=space  size=0x114
// sig: undefined SetupSpaceShipVars(undefined4 moby)
// callers(2): 000dcf58 loaders::NAVG_LoadFile; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager
// callees(1): 000fdcf0 mobyutil::MB_SetAnimationNoBlend

void space::SetupSpaceShipVars(MobyInstance *moby)

{
  undefined4 *pvars;
  
  DAT_00a561c0 = 1;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    g_SpaceshipPtr->collision = (ushort *)0x0;
    g_SpaceshipPtr->modeBits = g_SpaceshipPtr->modeBits | (NO_UPDATE|DISABLED);
  }
  if (Level == Gemlik) {
    g_heroSpawnPosition.z = 316.72;
    g_heroSpawnRot.z = 2.77;
    g_heroSpawnPosition.x = 464.66;
    g_heroSpawnPosition.y = 580.68;
  }
  g_SpaceshipVariant = moby->oClass - GREEN_SHIP_0213;
  g_SpaceshipPtr = moby;
  moby->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
       NO_POST_UPDATE);
  moby->collision = moby->pClass->collision;
  mobyutil::MB_SetAnimationNoBlend(moby,1,0);
  pvars = (undefined4 *)moby->pVar;
  g_shipSplinePath = *pvars;
  g_shipCameraStartCuboid = pvars[1];
  g_shipCameraEndCuboid = pvars[2];
  return;
}



//==== 0015e400  ns=space  size=0x2c
// sig: void Space_EnableShip(void)
// callers(2): 00411f38 mobyupdate_unsorted::UpdateMoby_684; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_EnableShip(void)

{
  u16 *puVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = g_SpaceshipPtr;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    puVar1 = g_SpaceshipPtr->pClass->collision;
    g_SpaceshipPtr->modeBits =
         g_SpaceshipPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
         NO_POST_UPDATE);
    pMVar2->collision = puVar1;
  }
  return;
}



//==== 0015e430  ns=space  size=0x3b8
// sig: void PlaySpaceCutscene(int cutscene)
// callers(3): 0015e7e8 space::Space_StartTakeoffCutscene; 0015e8a0 space::StartLeaveLevelCutscene; 0015eaa4 space::Space_StartLevelArrival
// callees(9): 0007d5c0 hero::Hero_MakeInvisible; 000b72b0 hero::TransitionMovement; 000e06b0 loaders::LoadSpaceScene; 000e07f8 loaders::ParseSpaceSceneChunk; 0011c830 music::music_PlayPreseekedSpeech; 0015be68 sound::sound_Update; 00174bdc vuchain::VU1_setBufSizeByLevel; 005001fc fastfunc::FastMemSet; 00503078 stub::STUB_00503078

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::PlaySpaceCutscene(int cutscene)

{
  u8 uVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  int fade;
  int iVar4;
  int iVar5;
  
  g_CutscenePlaying = 1;
  DAT_00964594 = 0xffff;
  DAT_00964578 = 0;
  DAT_00964590 = cutscene;
  fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
  fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
  fastfunc::FastMemSet(&DAT_00a1bec0,0,0x40);
  vuchain::VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  boot::SceneScreenFade = 1.0;
  DAT_0095cf14 = 0;
  g_gameMode = GAME_MODE_SPACE;
  hero::TransitionMovement(100,2);
  hero::g_heroInvisible = 1;
  hero::Hero_MakeInvisible();
  pMVar3 = MobyInstancePermEnd;
  g_SpaceshipPtr->modeBits = g_SpaceshipPtr->modeBits | DISABLED;
  uVar1 = pMVar3->state;
  while (uVar1 != 0xff) {
    if (((pMVar3->state & 0x80) == 0) &&
       ((pMVar3->oClass == MINE_004A || (pMVar3->oClass == DECOY)))) {
      pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
    }
    pMVar2 = pMVar3 + 1;
    pMVar3 = pMVar3 + 1;
    uVar1 = pMVar2->state;
  }
  if (cutscene == 0) {
    iVar4 = g_SpaceshipVariant + 1;
    iVar5 = g_SpaceshipVariant + 6;
    if ((Level == Orxon && g_SpaceshipVariant == 1) && (UnlockableItems.o2Mask == '\0')) {
      iVar5 = 0xb;
      iVar4 = 0;
    }
    else if ((Level == Oltanis) && (g_SpaceshipVariant == 2)) {
      iVar4 = 8;
      iVar5 = 0xe;
    }
    loaders::LoadSpaceScene(iVar4,(int)(animationSpeed * 6.5));
  }
  else {
    iVar4 = g_SpaceshipVariant + 5;
    iVar5 = (int)g_SpaceshipVariant +
            ((uint)((LZCOUNT(-(uint)g_spaceArrivalPending._0_2_) << 0x3a) >> 0x3f) & 3);
    if (((Level == Orxon) && (g_SpaceshipVariant == 1)) && (UnlockableItems.o2Mask == '\0')) {
      iVar4 = 4;
      iVar5 = ((uint)((LZCOUNT(-(uint)g_spaceArrivalPending._0_2_) << 0x3a) >> 0x3f) & 1) + 9;
    }
    else if ((Level == Oltanis) && (g_SpaceshipVariant == 2)) {
      iVar4 = 9;
      iVar5 = ((uint)((LZCOUNT(-(uint)g_spaceArrivalPending._0_2_) << 0x3a) >> 0x3f) & 1) + 0xc;
    }
    fade = 0;
    if (g_spaceArrivalPending._0_2_ == 0) {
      fade = (int)(animationSpeed * 6.5);
    }
    loaders::LoadSpaceScene(iVar4,fade);
  }
  music::g_PendingSpeech = iVar5 + 40000;
  loaders::ParseSpaceSceneChunk(0);
  while (music::g_SpeechPlaying.status != 3) {
    sound::sound_Update();
    stub::STUB_00503078(0);
  }
  music::music_PlayPreseekedSpeech();
  return;
}



//==== 0015e7e8  ns=space  size=0xb0
// sig: void Space_StartTakeoffCutscene(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(4): 0007b458 help::Help_Kill; 0011ce20 music::music_Pause; 0015be68 sound::sound_Update; 0015e430 space::PlaySpaceCutscene

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_StartTakeoffCutscene(void)

{
  g_CutscenePlaying = 1;
  g_heroHealth = g_heroHealth + ((uint)((longlong)g_heroHealth + -1 >> 0x3f) & 1U - g_heroHealth);
  music::music_Pause(0);
  if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
    music::g_SpeechPlaying.status = 5;
  }
  sound::sound_Update();
  help::Help_Kill();
  PlaySpaceCutscene(0);
  g_spaceArrivalPending._0_2_ = 0;
  return;
}



//==== 0015e8a0  ns=space  size=0x1e4
// sig: undefined StartLeaveLevelCutscene(void)
// callers(1): 0013b838 pause::UpdatePause
// callees(4): 000e07f8 loaders::ParseSpaceSceneChunk; 000e8aa4 memcard::memcard_Save; 0015e430 space::PlaySpaceCutscene; 00174bdc vuchain::VU1_setBufSizeByLevel

void space::StartLeaveLevelCutscene(LevelId param_1)

{
  int iVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_SPACE;
  DAT_0095cf14 = 0;
  boot::SceneScreenFade = 1.0;
  DAT_00964590 = 0;
  DAT_00964594 = 0xffff;
  vuchain::VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  if (Level == param_1) {
    PlaySpaceCutscene(8);
    auVar2 = loadVectorLeftIndexed((longlong)g_SpaceshipVariant << 2,0x731d80);
    auVar3 = vectorConvertFromSignedFixedPointWord(auVar2,0);
    auVar2 = loadVectorLeftIndexed(in_LR,0x15e898);
    auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorAddFloatingPoint
                       (auVar3,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60);
    auVar2 = ZEXT416(0xffffffff);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
    iVar1 = ((uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 0x10) + 0x50;
    auVar2 = vectorMultiplyAddFloatingPoint(auVar4,auVar3,auVar2);
    auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
    auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
    boot::g_SpaceSceneFrame =
         storeVectorElementWordIndexed
                   (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x34,0x95cd50);
    boot::g_SpaceSceneChunk =
         (int)(animationSpeed *
              ((float)(longlong)*(int *)(&DAT_00731d80 + (int)((longlong)g_SpaceshipVariant << 2)) +
              0.5)) / iVar1;
    loaders::ParseSpaceSceneChunk(boot::g_SpaceSceneChunk);
    g_cutsceneCameraFrame = boot::g_SpaceSceneFrame - (boot::g_SpaceSceneFrame / iVar1) * iVar1;
  }
  else {
    memcard::memcard_Save(0,param_1);
    DAT_00964590 = 3;
    DAT_00964594 = 0xffff;
    g_newlevelnum = param_1;
  }
  return;
}



//==== 0015ea84  ns=space  size=0x20
// sig: undefined ChangeLevel(LevelId level)
// callers(4): 00079b18 freeze::UpdateFreeze; 0014e6c0 pause::LoadGame_Update; 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???; 00481350 mobyupdate_unsorted::UpdateMoby_834
// callees(0): 

void space::ChangeLevel(LevelId level)

{
  g_loadingPlanet = 1;
  g_newlevelnum = level;
  g_CutscenePlaying = 1;
  return;
}



//==== 0015eaa4  ns=space  size=0x120
// sig: void Space_StartLevelArrival(void)
// callers(1): 000e0e60 main::startLevel
// callees(2): 0015e430 space::PlaySpaceCutscene; 00174bdc vuchain::VU1_setBufSizeByLevel

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_StartLevelArrival(void)

{
  g_spaceArrivalPending._0_2_ = 1;
  if (DAT_0096459a != 0) {
    DAT_0096459a = 0;
  }
  if ((Level == Novalis) && (g_SeenPlanets.Kerwan == '\0')) {
    g_gameMode = GAME_MODE_NORMAL;
  }
  else if ((Level == Veldin) ||
          (((Level == Oltanis && (MiscLevelFlags.field104_0x68 == 0)) || (0x13 < (int)Level)))) {
    g_gameMode = GAME_MODE_NORMAL;
  }
  else {
    g_gameMode = GAME_MODE_SPACE;
    DAT_00964590 = 0;
    DAT_00964594 = 0xffff;
    boot::SceneScreenFade = 1.0;
    vuchain::VU1_setBufSizeByLevel();
    DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
    DAT_0095cda8 = loaders::g_NpcBuffer;
    loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
    PlaySpaceCutscene(8);
  }
  return;
}



//==== 0015ebd0  ns=space  size=0x3bc
// sig: void Space_DrawShipEngineGlow(float * pos)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fc620 mobyutil::MB_randInt; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_DrawShipEngineGlow(float *pos)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  ushort uVar23;
  ulonglong *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  short sVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  float *pfVar33;
  undefined4 *puVar34;
  float *pfVar35;
  undefined4 *puVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar39;
  ulonglong unaff_r30;
  float *pfVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
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
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar1 = uVar29 - 0x1a0;
  puVar24 = (ulonglong *)lVar1;
  *puVar24 = uVar29;
  puVar24[0x36] = in_LR;
  puVar24[0x27] = in_f19;
  puVar24[0x28] = in_f20;
  puVar24[0x29] = in_f21;
  puVar24[0x2a] = in_f22;
  puVar24[0x2b] = in_f23;
  puVar24[0x2c] = in_f24;
  puVar24[0x2d] = in_f25;
  puVar24[0x2e] = in_f26;
  puVar24[0x2f] = in_f27;
  puVar24[0x30] = in_f28;
  puVar24[0x31] = in_f29;
  puVar24[0x32] = in_f30;
  puVar24[0x33] = in_f31;
  puVar24[0x21] = unaff_r26;
  puVar24[0x26] = unaff_r31;
  puVar24[0x22] = unaff_r27;
  puVar24[0x25] = unaff_r30;
  sVar28 = g_SpaceshipVariant;
  pfVar40 = (float *)0x731dc0;
  bVar2 = g_SpaceshipVariant == 1;
  puVar24[0x24] = unaff_r29;
  puVar24[0x23] = unaff_r28;
  puVar24[0x20] = unaff_r25;
  if (bVar2) {
    pfVar40 = (float *)&DAT_00731e40;
  }
  else if (sVar28 == 2) {
    pfVar40 = (float *)0x731e60;
  }
  uVar30 = draw::GetEffectTex(5);
  puVar24[0x1d] = uVar30;
  uVar30 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar24[0x1e] = uVar30;
  uVar30 = FUN_00502f08(0,0,0,0,0,0);
  puVar24[0x1c] = uVar30;
  uVar30 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar24[0x1f] = uVar30;
  sVar28 = g_SpaceshipVariant;
  dVar45 = (double)*pos;
  dVar44 = (double)pos[1];
  dVar43 = (double)pos[2];
  puVar34 = &DAT_00731d8c;
  puVar36 = &DAT_00731d90;
  lVar37 = uVar29 - 0xe0;
  lVar38 = uVar29 - 0xdc;
  lVar41 = 2;
  lVar32 = lVar1;
  do {
    uVar5 = *puVar36;
    *(undefined4 *)((int)lVar32 + 0xc0) = *puVar34;
    uVar6 = puVar34[2];
    *(undefined4 *)((int)lVar32 + 0xc4) = uVar5;
    uVar5 = puVar36[2];
    puVar34 = puVar34 + 4;
    *(undefined4 *)((int)lVar37 + 8) = uVar6;
    puVar36 = puVar36 + 4;
    *(undefined4 *)((int)lVar38 + 8) = uVar5;
    lVar37 = lVar37 + 0x10;
    lVar38 = lVar38 + 0x10;
    lVar32 = lVar32 + 0x10;
    lVar41 = lVar41 + -1;
  } while (lVar41 != 0);
  dVar46 = 0.0009765625;
  iVar39 = 0;
  if (0 < *(int *)(&DAT_00731dac + (int)((longlong)sVar28 << 2))) {
    do {
      bVar4 = *(byte *)(pos + 0x2f);
      uVar30 = (ulonglong)bVar4;
      if (*(short *)((int)pos + 0xb2) != 0) {
        iVar31 = mobyutil::MB_randInt(*(short *)((int)pos + 0xb2));
        uVar30 = (ulonglong)(int)((uint)bVar4 + iVar31);
      }
      dVar42 = (double)fastfunc::FastIntToDouble(uVar30);
      uVar23 = *(ushort *)((int)pos + 0xa6);
      fVar7 = *pfVar40;
      fVar8 = pfVar40[1];
      fVar9 = pfVar40[2];
      fVar10 = (g_SpaceshipPtr->transform).v0.x;
      fVar11 = (g_SpaceshipPtr->transform).v1.x;
      fVar12 = (g_SpaceshipPtr->transform).v2.x;
      fVar3 = (float)(dVar42 * (double)(pfVar40[3] * 0.025));
      fVar13 = (g_SpaceshipPtr->transform).v0.y;
      fVar14 = (g_SpaceshipPtr->transform).v1.y;
      fVar15 = (g_SpaceshipPtr->transform).v2.y;
      fVar16 = (g_SpaceshipPtr->transform).v0.z;
      fVar17 = (g_SpaceshipPtr->transform).v1.z;
      fVar18 = (g_SpaceshipPtr->transform).v2.z;
      fVar19 = (g_SpaceshipPtr->transform).v0.w;
      pfVar35 = (float *)&DAT_00731e80;
      fVar20 = (g_SpaceshipPtr->transform).v1.w;
      lVar38 = 4;
      fVar21 = (g_SpaceshipPtr->transform).v2.w;
      lVar37 = uVar29 - 0x130;
      lVar32 = lVar1;
      do {
        *(uint *)((int)lVar32 + 0xb0) =
             (uint)((uVar30 & 0xffffffff) << 0x18) |
             ((uint)((LZCOUNT(0x215 - (uint)uVar23) << 0x3a) >> 0x3f) & 0x102750) + 0x2058b0;
        fVar22 = *pfVar35;
        lVar32 = lVar32 + 4;
        pfVar33 = (float *)lVar37;
        *pfVar33 = fVar22 * fVar3;
        fVar25 = fVar22 * fVar3 + fVar7;
        fVar26 = pfVar35[1] * fVar3 + fVar8;
        pfVar33[1] = pfVar35[1] * fVar3;
        fVar27 = pfVar35[2] * fVar3 + fVar9;
        pfVar33[2] = pfVar35[2] * fVar3;
        fVar22 = pfVar35[3];
        pfVar35 = pfVar35 + 4;
        *pfVar33 = (float)(dVar45 * dVar46 +
                          (double)(fVar12 * fVar27 + fVar10 * fVar25 + fVar26 * fVar11));
        pfVar33[1] = (float)(dVar44 * dVar46 +
                            (double)(fVar15 * fVar27 + fVar13 * fVar25 + fVar26 * fVar14));
        pfVar33[2] = (float)(dVar43 * dVar46 +
                            (double)(fVar18 * fVar27 + fVar16 * fVar25 + fVar26 * fVar17));
        pfVar33[3] = fVar20 * fVar26 + fVar21 * fVar27 + fVar19 * fVar25 + fVar22;
        lVar37 = lVar37 + 0x10;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      draw::FastDrawQuad(uVar29 - 0x130,0,0,EffectTexHeaders,9);
      iVar39 = iVar39 + 1;
      pfVar40 = pfVar40 + 4;
    } while (iVar39 < *(int *)(&DAT_00731dac + (int)((longlong)g_SpaceshipVariant << 2)));
  }
  return;
}



//==== 0015ef98  ns=space  size=0x6e8
// sig: undefined Space_DrawTransitionOverlay(void)
// callers(1): 0016114c space::TransitionDraw_Space
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void space::Space_DrawTransitionOverlay(void)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int iVar24;
  gameMode_t gVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  float *pfVar29;
  undefined4 uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  float *pfVar33;
  longlong lVar34;
  float *pfVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  int iVar38;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar39;
  ulonglong unaff_r26;
  int iVar40;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  uint uVar41;
  ulonglong unaff_r29;
  int iVar42;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar43;
  double dVar44;
  double dVar45;
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
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar1 = uVar26 - 0x280;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar26;
  puVar8[0x52] = in_LR;
  puVar8[0x43] = in_f19;
  puVar8[0x44] = in_f20;
  puVar8[0x45] = in_f21;
  puVar8[0x46] = in_f22;
  puVar8[0x47] = in_f23;
  puVar8[0x48] = in_f24;
  puVar8[0x49] = in_f25;
  puVar8[0x4a] = in_f26;
  puVar8[0x4b] = in_f27;
  puVar8[0x4c] = in_f28;
  puVar8[0x4d] = in_f29;
  puVar8[0x4e] = in_f30;
  puVar8[0x4f] = in_f31;
  gVar25 = g_gameMode;
  puVar8[0x42] = unaff_r31;
  puVar8[0x41] = unaff_r30;
  puVar8[0x40] = unaff_r29;
  puVar8[0x3f] = unaff_r28;
  puVar8[0x3e] = unaff_r27;
  puVar8[0x3d] = unaff_r26;
  puVar8[0x3c] = unaff_r25;
  puVar8[0x3b] = unaff_r24;
  puVar8[0x3a] = unaff_r23;
  puVar8[0x39] = unaff_r22;
  puVar8[0x38] = unaff_r21;
  puVar8[0x37] = unaff_r20;
  puVar8[0x36] = unaff_r19;
  puVar8[0x35] = unaff_r18;
  puVar8[0x34] = unaff_r17;
  puVar8[0x33] = unaff_r16;
  puVar8[0x32] = unaff_r15;
  puVar8[0x31] = unaff_r14;
  uVar7 = EffectTexHeaders;
  if ((gVar25 == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    uVar7 = *(undefined4 *)(DAT_00a10920 + 0xc);
    puVar8[0x2d] = (ulonglong)**(uint **)(DAT_00a10920 + 0x1c);
  }
  else {
    uVar27 = draw::GetEffectTex(0x13);
    puVar8[0x2d] = uVar27;
  }
  uVar27 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar8[0x2e] = uVar27;
  uVar27 = FUN_00502f08(0,0,0,0,0,0);
  puVar8[0x2c] = uVar27;
  uVar27 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar8[0x2f] = uVar27;
  lVar34 = uVar26 - 0x140;
  lVar36 = uVar26 - 0x13c;
  puVar31 = &DAT_00731f20;
  puVar32 = &DAT_00731f24;
  lVar43 = 2;
  lVar28 = lVar1;
  do {
    uVar30 = *puVar32;
    *(undefined4 *)((int)lVar28 + 0x140) = *puVar31;
    uVar3 = puVar31[2];
    *(undefined4 *)((int)lVar28 + 0x144) = uVar30;
    puVar31 = puVar31 + 4;
    uVar30 = puVar32[2];
    lVar28 = lVar28 + 0x10;
    *(undefined4 *)((int)lVar34 + 8) = uVar3;
    puVar32 = puVar32 + 4;
    *(undefined4 *)((int)lVar36 + 8) = uVar30;
    lVar34 = lVar34 + 0x10;
    lVar36 = lVar36 + 0x10;
    lVar43 = lVar43 + -1;
  } while (lVar43 != 0);
  iVar42 = 0;
  if (0 < g_LoadScreenRelated + -1) {
    do {
      iVar40 = 0;
      iVar38 = 0;
      uVar41 = (DAT_009645c0 - iVar42) + 0x1f;
      uVar23 = uVar41 & 0x1f;
      do {
        iVar39 = (uVar41 & 0x1f) * 0x10;
        fVar4 = *(float *)(iVar39 + 0x964630);
        uVar37 = (uVar23 + 1) * 0x10 & 0x1f0;
        fVar6 = *(float *)(&DAT_00964830 + iVar39) - fVar4;
        fVar4 = fVar4 - *(float *)(&DAT_00964830 + iVar39);
        pfVar29 = (float *)(iVar39 + 0x964630 + iVar38);
        *(float *)(puVar8 + 0xe) = fVar6;
        fVar11 = *(float *)(iVar39 + 0x964834) - *(float *)(iVar39 + 0x964634);
        fVar12 = *(float *)(iVar39 + 0x964634) - *(float *)(iVar39 + 0x964834);
        *(float *)((int)puVar8 + 0x74) = fVar11;
        fVar13 = *(float *)(iVar39 + 0x964838) - *(float *)(iVar39 + 0x964638);
        fVar14 = *(float *)(iVar39 + 0x964638) - *(float *)(iVar39 + 0x964838);
        *(float *)(puVar8 + 0xf) = fVar13;
        uVar30 = *(undefined4 *)(iVar39 + 0x96483c);
        *(float *)(puVar8 + 0x10) = fVar4;
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar30;
        *(float *)((int)puVar8 + 0x84) = fVar12;
        *(float *)(puVar8 + 0x11) = fVar14;
        *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)(iVar39 + 0x96463c);
        fVar5 = *(float *)(uVar37 + 0x964630);
        pfVar33 = (float *)((int)(uVar37 + 0x964630) + iVar38);
        fVar15 = *(float *)(&DAT_00964830 + uVar37) - fVar5;
        fVar5 = fVar5 - *(float *)(&DAT_00964830 + uVar37);
        pfVar35 = (float *)(((uVar23 + 2) * 0x10 & 0x1f0) + 0x964630 + iVar38);
        *(float *)(puVar8 + 0x12) = fVar15;
        fVar16 = *(float *)(uVar37 + 0x964834) - *(float *)(uVar37 + 0x964634);
        fVar17 = *(float *)(uVar37 + 0x964634) - *(float *)(uVar37 + 0x964834);
        *(float *)((int)puVar8 + 0x94) = fVar16;
        fVar18 = *(float *)(uVar37 + 0x964838) - *(float *)(uVar37 + 0x964638);
        fVar19 = *(float *)(uVar37 + 0x964638) - *(float *)(uVar37 + 0x964838);
        *(float *)(puVar8 + 0x13) = fVar18;
        uVar30 = *(undefined4 *)(uVar37 + 0x96483c);
        *(float *)(puVar8 + 0x14) = fVar5;
        *(undefined4 *)((int)puVar8 + 0x9c) = uVar30;
        *(float *)((int)puVar8 + 0xa4) = fVar17;
        *(float *)(puVar8 + 0x15) = fVar19;
        *(undefined4 *)((int)puVar8 + 0xac) = *(undefined4 *)(uVar37 + 0x96463c);
        fVar20 = *pfVar33 - *pfVar29;
        fVar21 = pfVar33[1] - pfVar29[1];
        fVar22 = pfVar33[2] - pfVar29[2];
        fVar2 = *pfVar35 - *pfVar33;
        fVar9 = pfVar35[2] - pfVar33[2];
        fVar10 = pfVar35[1] - pfVar33[1];
        if (iVar42 == 0) {
          fVar2 = fVar20;
          fVar9 = fVar22;
          fVar10 = fVar21;
        }
        lVar43 = uVar26 - 400;
        iVar39 = 0;
        lVar36 = uVar26 - 0x1d0;
        *(float *)(puVar8 + 0x16) = fVar21 * fVar13 - fVar22 * fVar11;
        *(float *)((int)puVar8 + 0xb4) = fVar22 * fVar6 - fVar20 * fVar13;
        *(float *)(puVar8 + 0x17) = fVar20 * fVar11 - fVar21 * fVar6;
        dVar49 = 0.0;
        *(undefined4 *)((int)puVar8 + 0xbc) = 0;
        *(float *)(puVar8 + 0x18) = fVar21 * fVar14 - fVar22 * fVar12;
        *(float *)((int)puVar8 + 0xc4) = fVar22 * fVar4 - fVar20 * fVar14;
        *(float *)(puVar8 + 0x19) = fVar20 * fVar12 - fVar21 * fVar4;
        *(undefined4 *)((int)puVar8 + 0xcc) = 0;
        *(float *)(puVar8 + 0x1a) = fVar10 * fVar18 - fVar9 * fVar16;
        *(float *)((int)puVar8 + 0xd4) = fVar9 * fVar15 - fVar2 * fVar18;
        *(float *)(puVar8 + 0x1b) = fVar2 * fVar16 - fVar10 * fVar15;
        *(undefined4 *)((int)puVar8 + 0xdc) = 0;
        *(undefined4 *)((int)puVar8 + 0xec) = 0;
        *(float *)(puVar8 + 0x1c) = fVar10 * fVar19 - fVar9 * fVar17;
        *(float *)((int)puVar8 + 0xe4) = fVar9 * fVar5 - fVar2 * fVar19;
        *(float *)(puVar8 + 0x1d) = fVar2 * fVar17 - fVar10 * fVar5;
        dVar48 = 0.03125;
        dVar47 = 1.0;
        lVar28 = lVar43;
        lVar34 = lVar1;
        do {
          dVar44 = (double)fastfunc::FastIntToDouble((iVar42 - (iVar39 >> 1)) + 1);
          dVar46 = (double)(float)(dVar44 * dVar48);
          iVar24 = (int)((longlong)g_SpaceshipVariant << 3);
          uVar30 = fastfunc::FastLerpColor
                             (dVar46,*(undefined4 *)((int)&DAT_00731f40 + iVar24),
                              *(undefined4 *)((int)&DAT_00731f44 + iVar24));
          *(undefined4 *)((int)lVar34 + 0x130) = uVar30;
          pfVar29 = (float *)lVar36;
          fVar4 = pfVar29[1];
          fVar5 = *pfVar29;
          fVar6 = pfVar29[2];
          dVar44 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (dVar44 == dVar49) {
            fVar4 = pfVar29[3];
            dVar44 = dVar49;
            dVar46 = dVar49;
            dVar45 = dVar49;
          }
          else {
            fVar2 = (float)((double)(-(float)(dVar46 * dVar46 - dVar47) *
                                    *(float *)(&DAT_00731f58 +
                                              (int)((longlong)g_SpaceshipVariant << 2))) / dVar44);
            dVar46 = (double)(fVar4 * fVar2);
            dVar44 = (double)(fVar5 * fVar2);
            fVar4 = pfVar29[3];
            dVar45 = (double)(fVar6 * fVar2);
          }
          pfVar29 = (float *)(((iVar39 >> 1) + uVar23 & 0x1f) * 0x10 + 0x964630 + iVar38);
          iVar39 = iVar39 + 1;
          lVar36 = lVar36 + 0x10;
          lVar34 = lVar34 + 4;
          pfVar33 = (float *)lVar28;
          *pfVar33 = (float)(dVar44 + (double)*pfVar29);
          pfVar33[1] = (float)(dVar46 + (double)pfVar29[1]);
          fVar5 = pfVar29[2];
          pfVar33[3] = fVar4;
          pfVar33[2] = (float)(dVar45 + (double)fVar5);
          lVar28 = lVar28 + 0x10;
        } while (iVar39 < 4);
        draw::FastDrawQuad(uVar26 - 400,0,0,uVar7,9);
        iVar39 = 0;
        lVar28 = uVar26 - 0x210;
        do {
          dVar44 = (double)fastfunc::FastIntToDouble((iVar42 - (iVar39 >> 1)) + 1);
          pfVar29 = (float *)lVar28;
          fVar4 = pfVar29[1];
          fVar5 = *pfVar29;
          fVar6 = pfVar29[2];
          dVar46 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (dVar46 == dVar49) {
            fVar4 = pfVar29[3];
            dVar44 = dVar49;
            dVar46 = dVar49;
            dVar45 = dVar49;
          }
          else {
            fVar2 = (float)((double)(-(float)((double)(float)(dVar44 * dVar48) *
                                              (double)(float)(dVar44 * dVar48) - dVar47) *
                                    *(float *)(&DAT_00731f58 +
                                              (int)((longlong)g_SpaceshipVariant << 2))) / dVar46);
            dVar46 = (double)(fVar4 * fVar2);
            dVar44 = (double)(fVar5 * fVar2);
            fVar4 = pfVar29[3];
            dVar45 = (double)(fVar6 * fVar2);
          }
          pfVar29 = (float *)(((iVar39 >> 1) + uVar23 & 0x1f) * 0x10 + 0x964630 + iVar38);
          iVar39 = iVar39 + 1;
          lVar28 = lVar28 + 0x10;
          pfVar33 = (float *)lVar43;
          *pfVar33 = (float)(dVar44 + (double)*pfVar29);
          pfVar33[1] = (float)(dVar46 + (double)pfVar29[1]);
          fVar5 = pfVar29[2];
          pfVar33[3] = fVar4;
          pfVar33[2] = (float)(dVar45 + (double)fVar5);
          lVar43 = lVar43 + 0x10;
        } while (iVar39 < 4);
        draw::FastDrawQuad(uVar26 - 400,0,0,uVar7,9);
        iVar40 = iVar40 + 1;
        iVar38 = iVar38 + 0x200;
      } while (iVar40 < 2);
      iVar42 = iVar42 + 1;
    } while (iVar42 < g_LoadScreenRelated + -1);
  }
  return;
}



//==== 0015f6d0  ns=space  size=0x5e0
// sig: undefined ???_Space_TransitionDrawPass(void)
// callers(1): 0016114c space::TransitionDraw_Space
// callees(14): 00174f80 vuchain::SetGSReg; 004d5fe4 idol_draw::DrawDepth; 004d6704 FUN_004d6704; 004d676c FUN_004d676c; 004d6948 idol_draw::ResetPassState; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004fe098 idol::AllocateMemAlign; 005002cc fastfunc::FastMemCopy; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void space::____Space_TransitionDrawPass(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  RsxCmd *pRVar8;
  RsxCmd *pRVar9;
  ulonglong *puVar10;
  int iVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float *pfVar19;
  undefined4 *puVar20;
  longlong lVar18;
  longlong lVar21;
  float *pfVar22;
  RsxCmd *pRVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  RsxCmd *pRVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x170;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar15;
  puVar10[0x30] = in_LR;
  puVar10[0x2d] = unaff_r31;
  puVar10[0x2c] = unaff_r30;
  puVar10[0x2b] = unaff_r29;
  puVar10[0x2a] = unaff_r28;
  uVar16 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
  vuchain::SetGSReg(0x16,uVar16);
  puVar10[0x25] = DAT_00a561c8;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar10[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar10[0x27] = uVar17;
  fastfunc::FastMemCopy(uVar15 - 0x70,&DAT_00731c98,0x20);
  fVar6 = 1.0;
  if ((-1 < (int)Level) && ((int)Level < 0x13)) {
    fVar6 = *(float *)(&DAT_00731fd0 + Level * 4);
  }
  lVar27 = 4;
  lVar21 = uVar15 - 0xc0;
  pfVar19 = (float *)&DAT_00731f80;
  lVar25 = lVar18;
  do {
    fVar1 = *pfVar19;
    pfVar22 = (float *)lVar21;
    *pfVar22 = fVar1 * fVar6;
    fVar2 = pfVar19[1];
    *(undefined4 *)((int)lVar25 + 0xf0) = 0x80808080;
    lVar25 = lVar25 + 4;
    pfVar22[1] = fVar2 * fVar6;
    fVar3 = pfVar19[2];
    pfVar22[2] = fVar3 * fVar6;
    fVar4 = pfVar19[3];
    pfVar22[3] = fVar4;
    pfVar19 = pfVar19 + 4;
    *pfVar22 = fVar1 * fVar6 + DAT_00a561e0;
    pfVar22[1] = fVar2 * fVar6 + DAT_00a561e4;
    fVar1 = DAT_00a561e8;
    pfVar22[3] = fVar4;
    pfVar22[2] = fVar3 * fVar6 + fVar1;
    iVar14 = g_viewMtxPtr;
    lVar21 = lVar21 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,5);
  idol_draw::BindFragmentProgram(iVar14,ForwardPass,2);
  puVar20 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
  lVar27 = 4;
  lVar25 = lVar18;
  lVar21 = lVar18;
  puVar24 = puVar20;
  do {
    iVar11 = (int)lVar21;
    uVar7 = *(uint *)((int)lVar18 + 0xf0);
    *puVar24 = *(undefined4 *)(iVar11 + 0xb0);
    lVar18 = lVar18 + 4;
    puVar24[1] = *(undefined4 *)(iVar11 + 0xb4);
    puVar24[2] = *(undefined4 *)(iVar11 + 0xb8);
    lVar21 = lVar21 + 0x10;
    puVar24[3] = *(undefined4 *)((int)lVar25 + 0x100);
    uVar5 = *(undefined4 *)((int)lVar25 + 0x104);
    puVar24[5] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8;
    lVar25 = lVar25 + 8;
    puVar24[4] = uVar5;
    puVar24 = puVar24 + 6;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  if (puVar10[0x27] != 0) {
    idol_draw::DrawDepth(ForwardPass,puVar10[0x27]);
  }
  FUN_004d6704(puVar10[0x24],uVar15 - 0x30,uVar15 - 0x2c);
  FUN_004d676c(ForwardPass,0,
               (ulonglong)*(uint *)(DAT_00a10920 + 0xc) + puVar10[0x25] * 0x24 & 0xffffffff,
               *(undefined4 *)(puVar10 + 0x28),*(undefined4 *)((int)puVar10 + 0x144));
  idol_draw::ResetPassState(ForwardPass);
  pRVar8 = ForwardPass->command;
  ForwardPass->command = pRVar8 + 2;
  pRVar26 = ForwardPass->command;
  ForwardPass->command = pRVar26 + 2;
  pRVar13 = ForwardPass;
  pRVar23 = ForwardPass->command;
  *pRVar8 = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command = pRVar23 + 2;
  pRVar13 = ForwardPass;
  pRVar8[1] = 0x1832;
  pRVar8 = pRVar13->command;
  *pRVar26 = 0x41744;
  pRVar26[1] = 0x1822;
  pRVar23[1] = 0x1844;
  pRVar13->command = pRVar8 + 2;
  pRVar13 = ForwardPass;
  *pRVar23 = 0x4174c;
  RVar12 = (int)puVar20 - *(int *)(iVar14 + 0x4a8);
  pRVar26 = pRVar13->command;
  pRVar13->command = pRVar26 + 2;
  pRVar13 = ForwardPass;
  *pRVar8 = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar8[1] = RVar12 | 0x80000000;
  pRVar8 = pRVar13->command;
  *pRVar26 = 0x41684;
  pRVar26[1] = RVar12 + 0xc | 0x80000000;
  pRVar13->command = pRVar8 + 2;
  *pRVar8 = 0x4168c;
  pRVar8[1] = RVar12 + 0x14 | 0x80000000;
  pRVar13 = ForwardPass;
  *(undefined4 *)((int)puVar10 + 0x7c) = 0;
  *(undefined4 *)(puVar10 + 0xf) = 0;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  *(undefined4 *)(puVar10 + 0xe) = 0x3f800000;
  *(undefined4 *)((int)puVar10 + 0x8c) = 0;
  *(undefined4 *)(puVar10 + 0x11) = 0;
  *(undefined4 *)((int)puVar10 + 0x84) = 0x3f800000;
  *(undefined4 *)(puVar10 + 0x10) = 0;
  pRVar8 = pRVar13->command;
  *(undefined4 *)((int)puVar10 + 0x9c) = 0;
  *(undefined4 *)(puVar10 + 0x13) = 0x3f800000;
  *(undefined4 *)((int)puVar10 + 0x94) = 0;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  pRVar26 = pRVar8 + 2;
  *(undefined4 *)((int)puVar10 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar10 + 0x15) = 0;
  *(undefined4 *)((int)puVar10 + 0xa4) = 0;
  *(undefined4 *)(puVar10 + 0x14) = 0;
  lVar18 = uVar15 - 0x100;
  *pRVar8 = 0x441efc;
  pRVar8[1] = 4;
  lVar25 = 8;
  pRVar13->command = pRVar26;
  do {
    pRVar8 = pRVar13->command;
    pRVar23 = (RsxCmd *)lVar18;
    RVar12 = *pRVar23;
    pRVar13->command = pRVar8 + 1;
    *pRVar26 = RVar12;
    lVar18 = lVar18 + 8;
    pRVar8[1] = pRVar23[1];
    pRVar26 = pRVar13->command + 1;
    pRVar13->command = pRVar26;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  pRVar8 = ForwardPass->command;
  ForwardPass->command = pRVar8 + 6;
  pRVar13 = ForwardPass;
  pRVar26 = ForwardPass->command;
  ForwardPass->command = pRVar26 + 1;
  *pRVar8 = 0x400c1714;
  pRVar8[1] = 0;
  pRVar8[2] = 0;
  pRVar8[3] = 0;
  pRVar8[5] = 6;
  pRVar8[4] = NV4097_SET_BEGIN_END_x1;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 1;
  pRVar23 = ForwardPass->command;
  ForwardPass->command = pRVar23 + 2;
  pRVar13 = ForwardPass;
  pRVar9 = ForwardPass->command;
  *pRVar26 = 0x40041814;
  *pRVar8 = 0x3000000;
  pRVar13->command = pRVar9 + 2;
  pRVar13 = ForwardPass;
  *pRVar23 = NV4097_SET_BEGIN_END_x1;
  pRVar23[1] = 0;
  pRVar9[1] = 2;
  pRVar8 = pRVar13->command;
  *pRVar9 = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command = pRVar8 + 2;
  pRVar13 = ForwardPass;
  *pRVar8 = 0x41744;
  pRVar8[1] = 2;
  pRVar8 = pRVar13->command;
  *pRVar8 = 0x4174c;
  pRVar8[1] = 2;
  pRVar13->command = pRVar8 + 2;
  uVar16 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar16);
  return;
}



//==== 0015fcb0  ns=space  size=0x130
// sig: void Space_DrawLoadingBanner(void)
// callers(0): 
// callees(5): 0006889c draw::Sprite_DrawShape; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_DrawLoadingBanner(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
  vuchain::SetGSReg(0x16,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar1);
  draw::Sprite_DrawShape(0x20,0x168,0x100,0x20,0,0,0x100,0x20);
  uVar1 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  return;
}



//==== 0015fe00  ns=space  size=0x9a4
// sig: undefined ChooseLoadingScreen(void)
// callers(1): 00161788 space::UpdateSpace
// callees(17): 000668d0 draw::UpdateViewContext; 000e07f8 loaders::ParseSpaceSceneChunk; 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f31a8 mobyfunc::UpdateMobyTransform; 0015dfe0 space::Space_SetCutsceneCamera; 00166e30 update::ResetGameCounters; 00166e88 update::UpdateGameCounters; 005001fc fastfunc::FastMemSet; 005002cc fastfunc::FastMemCopy; 00502730 fastfunc::FastIntToDouble; 00505d20 stub::STUB_00505d20; 00505f4c stub::STUB_00505f4c; 00505f50 stub::STUB_00505f50; 005062f4 FUN_005062f4; 005c8318 rand
// strings: 0015fed8: 'H:`y`' (raw)

void space::ChooseLoadingScreen(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyClass *pMVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  short sVar18;
  int *piVar15;
  float *pfVar16;
  uint *puVar17;
  int *piVar19;
  int iVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar25;
  ulonglong uVar24;
  int iVar26;
  undefined8 in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
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
  undefined1 auStack_100 [48];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [48];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  update::ResetGameCounters();
  puVar22 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  boot::g_SpaceSceneFrame = boot::g_SpaceSceneFrame + 1;
  dVar29 = 0.25;
  boot::SceneScreenFade = boot::SceneScreenFade - 0.25;
  if (boot::SceneScreenFade < 0.0) {
    boot::SceneScreenFade = 0.0;
  }
  if (((boot::g_SpaceSceneFrame == 1) && (Level != Veldin)) &&
     ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    stub::STUB_00505f50();
    FUN_005062f4(DAT_0071f404,g_currentLoadingScreen,0x400,0,0,0,0,sound::g_SoundChannels);
    stub::STUB_00505f4c();
    stub::STUB_00505d20();
  }
  if (boot::g_SpaceSceneFrame < boot::g_SpaceSceneNumFrames._0_2_) {
    if (0x5f < (int)g_cutsceneCameraFrame) {
      boot::g_SpaceSceneChunk = boot::g_SpaceSceneChunk + 1;
      loaders::ParseSpaceSceneChunk(boot::g_SpaceSceneChunk);
    }
  }
  else {
    iVar26 = 0;
    iVar25 = 0;
    sVar18 = boot::g_SpaceSceneMobyCnt._0_2_;
    puVar23 = puVar22;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        pMVar9 = (MobyInstance *)puVar23[0x5e];
        if (pMVar9 != (MobyInstance *)0x0) {
          pMVar9->pClass->seq_cnt = pMVar9->pClass->seq_cnt + 0xff;
          *(undefined4 *)(&pMVar9->pClass->type + (uint)pMVar9->pClass->seq_cnt * 4) = 0;
          mobyfunc::DeleteMoby(pMVar9);
          sVar18 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar26 = iVar26 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar26 < sVar18);
    }
    if ((Level != Veldin) &&
       (((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')) && (g_LoadingStage < 3)))) {
      g_loadingCount = 0;
    }
    if (1 < g_loadingCount) {
      if (DAT_00964562 != 0) {
        DAT_00964562 = 0;
      }
      g_CutscenePlaying = 1;
      return;
    }
    uVar13 = 4;
    if (g_loadingCount == 0) {
      iVar14 = rand();
      iVar26 = (iVar14 >> 0x10) / 3 + (iVar14 >> 0x1f);
      uVar13 = g_currentLoadingScreen + (iVar14 >> 0x10) + (iVar26 - (iVar26 >> 0x1f)) * -3 + 1 & 3;
    }
    g_loadingCount = g_loadingCount + 1;
    DAT_009645c0 = 0;
    g_LoadScreenRelated = 0;
    DAT_00a561e0 = DAT_00731f70;
    DAT_00a561e4 = DAT_00731f74;
    DAT_00a561e8 = DAT_00731f78;
    DAT_00a561ec = DAT_00731f7c;
    g_currentLoadingScreen = uVar13;
    fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
    iVar26 = DAT_00a10920;
    loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
    DAT_0095cda8 = loaders::g_NpcBuffer;
    piVar19 = &loaders::g_SceneChunkPtrs;
    piVar15 = (int *)(DAT_00a10920 + *(int *)(DAT_00a10920 + g_currentLoadingScreen * 4 + 0x28));
    do {
      if (piVar15[1] == 0) break;
      iVar14 = *piVar15;
      iVar25 = iVar25 + 1;
      piVar15 = piVar15 + 2;
      *piVar19 = iVar26 + iVar14;
      piVar19 = piVar19 + 1;
    } while (iVar25 < 0x46);
    loaders::ParseSpaceSceneChunk(0);
  }
  Space_SetCutsceneCamera();
  uVar13 = (int)*(uint *)(&DAT_00732084 + g_currentLoadingScreen * 4) >> 0x1f;
  if ((int)(((uint)((int)ViewContext.xratio >> 0x1f) >> 1 ^ (uint)ViewContext.xratio) -
           ((int)ViewContext.xratio >> 0x1f)) <
      (int)((uVar13 >> 1 ^ *(uint *)(&DAT_00732084 + g_currentLoadingScreen * 4)) - uVar13)) {
    ViewContext.xratio = *(float *)(&DAT_00732084 + g_currentLoadingScreen * 4);
  }
  draw::UpdateViewContext();
  dVar30 = 1.0;
  auVar32 = loadVectorLeftIndexed(8,0x15fde0);
  auVar31 = loadVectorLeftIndexed(0x34,0x95cd50);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if (g_currentLoadingScreen == 4) {
    auVar32 = ZEXT416(0xfffffff0);
    auVar33 = ZEXT416(0xffffffff);
    auVar36 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = ZEXT416(0xffffffff);
    auVar39 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = loadVectorLeftIndexed(0x40,0x95cd50);
    auVar34 = loadVectorLeftIndexed(0xc,0x15fde0);
    auVar33 = vectorShiftRightAlgebraicWord
                        (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
    auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar32 = ZEXT416(0xffffffff);
    auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorSubtractUnsignedWordModulo(auVar33,auVar31);
    auVar32 = ZEXT416(0xffffffff);
    auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar33 = vectorReciprocalEstimateFloatingPoint(auVar34);
    auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar35);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar36);
    auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar39 = vectorShiftLeftIntegerWord(auVar40,auVar40);
    auVar41 = loadVectorLeftIndexed(0x1fc0,0x730000);
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar35);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar38);
    auVar38 = loadVectorLeftIndexed(4,0x731fc0);
    auVar40 = loadVectorLeftIndexed(4,0xa561e0);
    auVar42 = loadVectorLeftIndexed(8,0x731fc0);
    auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar34,auVar35);
    auVar34 = loadVectorLeftIndexed(0x61e0,0xa50000);
    auVar35 = loadVectorLeftIndexed(8,0xa561e0);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar37);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar32,auVar39);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar41,auVar32,auVar34);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar40);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar42,auVar32,auVar35);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_00a561e0 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x61e0,
                              0xa50000);
    DAT_00a561e4 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,4,
                              0xa561e0);
    DAT_00a561e8 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,8,
                              0xa561e0);
  }
  auVar33 = ZEXT416(0xffffffff);
  auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
  auVar33 = loadVectorLeftIndexed(0x10,0x15fde0);
  auVar34 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar33 = ZEXT416(0xffffffff);
  auVar37 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar33 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = ZEXT416(0xffffffff);
  auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar36 = loadVectorLeftIndexed(0x14,0x15fde0);
  auVar32 = ZEXT416(0xffffffff);
  auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar32 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar24 = (ulonglong)(g_currentLoadingScreen * 0x10 + 0x732020);
  auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
  auVar31 = vectorSubtractUnsignedWordModulo(auVar31,auVar34);
  auVar34 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar36 = loadVectorLeftIndexed(in_LR,uVar24);
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar35
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar31,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar37
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar34);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_00a56150 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x6150,
                            0xa50000);
  auVar32 = loadVectorLeftIndexed(4,uVar24);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
  iVar25 = 0;
  DAT_00a56164 = *(undefined4 *)(&DAT_00732070 + g_currentLoadingScreen * 4);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_00a56154 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,4,0xa56150
                           );
  auVar32 = loadVectorLeftIndexed(8,uVar24);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar33);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_00a56158 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,8,0xa56150
                           );
  DAT_00a5615c = *(undefined4 *)(g_currentLoadingScreen * 0x10 + 0x73202c);
  if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
    do {
      iVar26 = 0;
      pMVar9 = (MobyInstance *)puVar22[0x5e];
      uVar24 = ZEXT48(pMVar9);
      do {
        pMVar10 = pMVar9->pClass;
        iVar14 = (int)g_cutsceneCameraFrame >> 1;
        uVar13 = *(uint *)((&pMVar10->mode_bits)[pMVar10->seq_cnt] + iVar14 * 4 + 0x1c);
        uVar11 = *(uint *)((&pMVar10->mode_bits)[pMVar10->seq_cnt] +
                           (int)(((longlong)iVar14 + 1U & 0xffffffff) << 2) + 0x1c);
        dVar28 = (double)fastfunc::FastIntToDouble(g_cutsceneCameraFrame & 1);
        pfVar21 = (float *)((int)pMVar9->pVar + (int)((longlong)iVar14 + 1U) * 0x10);
        pfVar16 = (float *)((int)pMVar9->pVar + iVar14 * 0x10);
        fVar1 = (float)(dVar28 * 0.5 + (double)(float)((double)(longlong)iVar26 * dVar29));
        dVar28 = (double)fVar1;
        fVar2 = (float)(dVar30 - dVar28);
        pMVar9->animationBlend = fVar1;
        fVar1 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar4 = pfVar21[2];
        fVar5 = *pfVar16;
        fVar6 = pfVar16[1];
        fVar7 = pfVar16[2];
        fVar8 = pfVar16[3];
        pMVar9->updateId = '\x02';
        (pMVar9->pos).w = fVar8;
        pMVar9->animationId = '\x02';
        pMVar9->previousAnimationFrame = '\0';
        pMVar9->animationFrame = '\0';
        (pMVar9->pos).x = fVar5 * fVar2 + (float)((double)fVar1 * dVar28);
        (pMVar9->pos).y = fVar6 * fVar2 + (float)((double)fVar3 * dVar28);
        (pMVar9->pos).z = fVar7 * fVar2 + (float)((double)fVar4 * dVar28);
        mobyfunc::UpdateMobyFrameData(pMVar9);
        fastfunc::FastMemCopy
                  (ZEXT48(pMVar9->pPreviousAnimationData) + 0x10,(ulonglong)uVar13 + 0x10,0x20);
        fastfunc::FastMemCopy
                  (ZEXT48(pMVar9->pCurrentAnimationData) + 0x10,(ulonglong)uVar11 + 0x10,0x20);
        pMVar9->drawDistance = 0x1ff;
        pMVar9->field45_0x72 = -1;
        pMVar9->field44_0x71 = -1;
        mobyfunc::UpdateMobyTransform(pMVar9);
        pMVar9->updateId = pMVar9->pClass->seq_cnt + 0xff;
        pMVar9->animationId = pMVar9->pClass->seq_cnt + 0xff;
        mobyfunc::GetBoneTransformations(uVar24,1,auStack_100);
        mobyfunc::GetBoneTransformations(uVar24,2,auStack_c0);
        uVar13 = DAT_009645c0 + 1;
        DAT_009645c0 = uVar13 & 0x1f;
        if (g_LoadScreenRelated < 0x20) {
          g_LoadScreenRelated = g_LoadScreenRelated + 1;
        }
        iVar14 = (uVar13 & 0x1f) * 0x10;
        iVar20 = (uVar13 & 0x1f) * 0x10;
        *(undefined4 *)(iVar14 + 0x964630) = local_d0;
        *(undefined4 *)(iVar14 + 0x964634) = local_cc;
        *(undefined4 *)(iVar14 + 0x964638) = local_c8;
        *(undefined4 *)(iVar14 + 0x96463c) = local_c4;
        uVar13 = g_currentLoadingScreen;
        *(undefined4 *)(&DAT_00964830 + iVar20) = local_90;
        *(undefined4 *)(iVar20 + 0x964834) = local_8c;
        *(undefined4 *)(iVar20 + 0x964838) = local_88;
        *(undefined4 *)(iVar20 + 0x96483c) = local_84;
        if (uVar13 == 4) {
          if ((Level == Veldin) || ((Level == Novalis && (g_SeenPlanets.Kerwan == '\0')))) {
            g_LoadScreenRelated = 0;
            pMVar9->modeBits = pMVar9->modeBits | DISABLED;
          }
          auVar32 = ZEXT416(0xfffffff0);
          auVar31 = loadVectorLeftIndexed(0x34,0x95cd50);
          auVar33 = loadVectorLeftIndexed(0x40,0x95cd50);
          auVar32 = vectorShiftRightAlgebraicWord
                              (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                              );
          if (boot::g_SpaceSceneNumFrames._0_2_ + -0x38 < boot::g_SpaceSceneFrame) {
            auVar31 = vectorSubtractUnsignedWordModulo(auVar32,auVar31);
            auVar32 = ZEXT416(0xffffffff);
            auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar32 = ZEXT416(0xffffffff);
            auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar32 = loadVectorLeftIndexed(0x1c,0x15fde0);
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar35 = loadVectorLeftIndexed(0x24,ZEXT48(pMVar9->pClass));
            auVar32 = vectorMultiplyAddFloatingPoint
                                (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar33);
            iVar14 = 0;
            iVar20 = boot::g_SpaceSceneNumFrames._0_2_ - boot::g_SpaceSceneFrame;
            puVar17 = &DAT_00731f40;
            auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                                uVar24);
            *(undefined4 *)((uint)&pMVar9->scale & 0xfffffffc) = uVar12;
            do {
              iVar14 = iVar14 + 1;
              *puVar17 = *puVar17 & 0xffffff | iVar20 * 0x1000000;
              puVar17 = puVar17 + 2;
            } while (iVar14 < 3);
          }
          else {
            puVar17 = &DAT_00731f40;
            lVar27 = 3;
            do {
              *puVar17 = *puVar17 & 0xffffff | 0x38000000;
              puVar17 = puVar17 + 2;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < 2);
      iVar25 = iVar25 + 1;
      puVar22 = puVar22 + 1;
    } while (iVar25 < boot::g_SpaceSceneMobyCnt._0_2_);
  }
  update::UpdateGameCounters();
  return;
}



