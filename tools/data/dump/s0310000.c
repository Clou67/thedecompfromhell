//==== 003108cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M244_003108cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M244_003108cc(void)

{
  DAT_007ff83c = 0x10000;
  return;
}



//==== 00310918  ns=mobyupdate_helpers  size=0x3ac
// sig: undefined M244_00310918(void)
// callers(1): 00310d18 mobyupdate_unsorted::UpdateMoby_{21_244}
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M244_00310918(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xd0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar9;
  puVar6[0x1c] = in_LR;
  puVar6[0x18] = in_f30;
  puVar6[0x19] = in_f31;
  puVar6[0x15] = unaff_r29;
  puVar6[0x16] = unaff_r30;
  puVar6[0x17] = unaff_r31;
  dVar21 = 2.5;
  dVar22 = 1.5;
  if (((*(byte *)(param_1 + 0xbc) < 2) || ((*(byte *)(param_1 + 0xbc) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x20) < 2 || ((*(byte *)(param_1 + 0x20) & 1) == 0)))) {
    dVar17 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),1.5707964);
  }
  else {
    dVar17 = (double)fastfunc::FastDiffRots((double)*(float *)(param_1 + 0x48),0x3ff921fb60000000);
  }
  if (*(short *)(param_1 + 0xa6) == 0x15) {
    dVar21 = 2.0;
    dVar22 = 1.2000000476837158;
  }
  fVar1 = (float)(dVar17 + 1.570796251296997);
  dVar19 = (double)(float)(3.141592502593994 - dVar17);
  if (dVar17 - (double)(float)(3.141592502593994 - dVar17) < 0.0) {
    dVar19 = dVar17;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar18 = (double)(float)(-3.141592502593994 - dVar17);
  if ((double)(float)(-3.141592502593994 - dVar17) - dVar19 < 0.0) {
    dVar18 = dVar19;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar17 = (double)(float)(dVar18 * dVar18);
  fVar5 = fVar3 * fVar3;
  dVar20 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
  fVar2 = fVar5 * fVar5 * fVar3;
  dVar19 = (double)(float)(dVar17 * dVar20);
  fVar4 = fVar5 * fVar2;
  fVar1 = (float)((double)((float)(dVar17 * dVar19) * 2.601887e-06 +
                          (float)(dVar19 * -0.0001980741071747616 +
                                 (double)(float)(dVar20 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar17 * dVar18) *
                                                                -0.16666656732559204 + dVar18)))) *
                 dVar21);
  fVar2 = (float)((double)(fVar5 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) * dVar21);
  param_2[1] = fVar1;
  fVar3 = 0.0;
  param_2[2] = (float)dVar22;
  *param_2 = fVar2;
  *param_2 = fVar2 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar1 + *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  fVar2 = *param_2;
  param_2[2] = (float)(dVar22 + (double)fVar1);
  param_3[2] = 0;
  fVar1 = DAT_00969db4 - param_2[1];
  fVar4 = ABS(hero::g_heroCGPos - fVar2);
  *(float *)(puVar6 + 0xe) = hero::g_heroCGPos - fVar2;
  fVar2 = ABS(fVar1);
  *(float *)((int)puVar6 + 0x74) = fVar1;
  *(float *)(puVar6 + 0xf) = fVar4 - fVar2;
  uVar12 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar6 + 0xe));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar14 = uVar9 - 0xc0;
    lVar11 = uVar9 - 0x44;
    lVar13 = uVar9 - 0x54;
    lVar16 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)(puVar6 + 0x11) = fVar1;
    *(float *)(puVar6 + 0x10) = fVar1;
    *(float *)((int)puVar6 + 0x84) = fVar1;
    *(float *)((int)puVar6 + 0x7c) = fVar1;
    fVar1 = fVar5 * fVar5;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
    *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar1;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar1 * fVar1;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x54;
    lVar16 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar14;
    lVar13 = lVar10;
    do {
      fVar1 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar5;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar7 = (int)lVar10;
      iVar8 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      fVar3 = fVar3 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
              *(float *)(iVar8 + 0xc);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar4;
  }
  param_3[2] = fVar3;
  param_3[1] = 0;
  return;
}



//==== 00310d18  ns=mobyupdate_unsorted  size=0x814
// sig: undefined UpdateMoby_{21_244}(MobyInstance * moby)
// callers(0): 
// callees(15): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement; 000fcc68 mobyutil::MB_randRot; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00310918 mobyupdate_helpers::M244_00310918; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 21
   Moby 244 */

void mobyupdate_unsorted::UpdateMoby__21_244_(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar13;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
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
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  local_a0.x = -(moby->pos).x;
  local_a0.y = -(moby->pos).y;
  local_a0.z = -(moby->pos).z;
  pvVar6 = moby->pVar;
  local_a0.w = (moby->pos).w;
  local_90 = (moby->rotation).x;
  local_8c = (moby->rotation).y;
  local_88 = (moby->rotation).z;
  local_84 = (moby->rotation).w;
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      dVar17 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar6 + 0x78) = (float)dVar17;
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      moby->state = '\x03';
    }
    else {
      dVar18 = 1.0;
      dVar17 = (double)*(float *)((int)pvVar6 + 0x70);
      mobyutil::OrganicDelt
                (1.0,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 (float *)((int)pvVar6 + 0x70),0x720000,(float *)((int)pvVar6 + 0x74));
      uVar7 = (int)*(uint *)((int)pvVar6 + 0x70) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x70)) - uVar7) < 0x3f800000) {
        dVar18 = (double)((float)(dVar18 - (double)*(float *)((int)pvVar6 + 0x70)) /
                         (float)(dVar18 - dVar17));
        mobyupdate_helpers::M244_00310918(lVar9,uVar8 - 0x80,uVar8 - 0x70);
        local_80 = (float)(dVar18 * (double)(float)((double)GameCamera.posX - (double)local_80) +
                          (double)local_80);
        local_7c = (float)(dVar18 * (double)(float)((double)GameCamera.posY - (double)local_7c) +
                          (double)local_7c);
        local_78 = (float)(dVar18 * (double)(float)((double)GameCamera.posZ - (double)local_78) +
                          (double)local_78);
        dVar17 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.elevation,(double)local_6c);
        dVar17 = (double)fastfunc::FastWrapRot((float)(dVar18 * dVar17),local_6c);
        local_6c = (float)dVar17;
        dVar17 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.radius,(double)local_68);
        dVar17 = (double)fastfunc::FastWrapRot((float)(dVar18 * dVar17),local_68);
        local_68 = (float)dVar17;
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x80));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x70));
      }
      else {
        uVar3 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar3;
      }
    }
    goto LAB_003114b8;
  }
  if (5 < bVar2) {
    if (bVar2 < 8) {
      iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
      if (iVar13 != 0) {
        sound::sound_Kill(*(int *)((int)pvVar6 + 0x6c));
        *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      }
      if (((g_standingOnMoby != moby) || (g_framesNotGrounded != 0)) ||
         (fVar4 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
         0.5 < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
        if (moby->state == '\a') {
          *(undefined1 *)((int)pvVar6 + 0x7c) = 0;
          moby->state = '\x05';
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0x7c) = 0;
          moby->state = '\x04';
        }
      }
    }
    goto LAB_003114b8;
  }
  if (bVar2 < 4) {
    iVar13 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar13 == 0) {
      iVar13 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar6 + 0x6c) = iVar13;
    }
    if (moby->setByGroup != '\0') {
      mobyupdate_helpers::M244_00310918(lVar9,uVar8 - 0x60,uVar8 - 0x50);
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x60));
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x50));
    }
    if (moby->state == '\x02') {
      fVar4 = *(float *)((int)pvVar6 + 0x60);
    }
    else {
      fVar4 = *(float *)((int)pvVar6 + 100);
    }
    dVar17 = (double)fVar4;
    mobyutil::OrganicDelt
              (fVar4,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,mobyutil::g_FrameTime * 40.0,
               &(moby->pos).z,0x720000,(float *)((int)pvVar6 + 0x68));
    if ((ABS((float)((double)(moby->pos).z - dVar17)) == 0.0) &&
       (moby->state = (char)((LZCOUNT(2 - (uint)moby->state) << 0x3a) >> 0x3f) + '\a',
       moby->setByGroup != '\0')) {
      hero::TransitionMovement(0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(1);
    }
    goto LAB_003114b8;
  }
  dVar18 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar6 + 0x78),mobyutil::g_FrameTime * 6.2831855);
  dVar17 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar17 = dVar18;
  }
  dVar15 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar17 < 0.0) {
    dVar15 = dVar17;
  }
  dVar17 = (double)(float)(dVar15 * dVar15);
  dVar16 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar15));
  *(float *)((int)pvVar6 + 0x78) = (float)dVar18;
  dVar18 = (double)(float)(dVar17 * dVar16);
  lVar10 = fastfunc::FastDoubleToInt
                     ((double)((((float)(dVar17 * dVar18) * 2.601887e-06 +
                                (float)(dVar18 * -0.0001980741071747616 +
                                       (double)(float)(dVar16 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar17 * 
                                                  dVar15) * -0.16666656732559204 + dVar15)))) * 4.0
                               - 3.0) * 128.0));
  pMVar14 = g_standingOnMoby;
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  lVar11 = lVar10 + (lVar10 + -0x20 >> 0x3f & 0x20U - lVar10);
  uVar12 = lVar11 + (0x80 - lVar10 >> 0x3f & 0x80U - lVar11);
  bVar1 = g_standingOnMoby != moby;
  moby->field60_0x90 =
       (uint)((uVar12 & 0xffffffff) << 8) | (uint)uVar12 | (uint)((uVar12 & 0xffffffff) << 0x10) |
       0x80000000;
  if (((bVar1) || (g_framesNotGrounded != 0)) ||
     (1.1 < SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                 (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
    *(undefined1 *)((int)pvVar6 + 0x7c) = 1;
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    pMVar14 = g_standingOnMoby;
LAB_003112bc:
    if ((pMVar14 == moby && g_framesNotGrounded == 0) &&
       (SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
             (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)) < 0.5)) {
      bVar2 = moby->state;
      moby->field60_0x90 = 0x80208020;
      moby->state = '\x01';
      moby->setByGroup = (char)((LZCOUNT(5 - (uint)bVar2) << 0x3a) >> 0x3f) + '\x03';
      hero::TransitionMovement(0x72,1);
      camera::SetCameraPosition(0x951500,0x951510,1,0,0);
      *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      goto LAB_003114b8;
    }
  }
  else if (*(char *)((int)pvVar6 + 0x7c) != '\0') goto LAB_003112bc;
  if (moby->state == '\x04') {
    fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
    if (((ABS(hero::g_heroGroundZ - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
       (5.0 < fVar4)) {
      moby->state = '\x03';
      moby->setByGroup = '\0';
      *(float *)((int)pvVar6 + 0x68) = mobyutil::g_FrameTime * -5.0;
    }
  }
  else if ((((moby->state == '\x05') &&
            (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                          (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
            ABS(hero::g_heroGroundZ - *(float *)((int)pvVar6 + 0x60)) < 2.0)) && (fVar4 < 32.0)) &&
          (5.0 < fVar4)) {
    moby->state = '\x02';
    moby->setByGroup = '\0';
    *(float *)((int)pvVar6 + 0x68) = mobyutil::g_FrameTime * 5.0;
  }
LAB_003114b8:
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar8 - 0x90,lVar9 + 0x40);
  return;
}



//==== 0031152c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M245_0031152c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M245_0031152c(void)

{
  DAT_007ff8ac = 0x10000;
  return;
}



//==== 00311558  ns=mobyupdate_helpers  size=0x184
// sig: undefined M245_00311558(void)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00121a40 partupd::SpawnPart_5

longlong mobyupdate_helpers::M245_00311558(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  undefined8 in_r7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pMVar7 = mobyfunc::CreateMoby(0xf5);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = '\x7f';
    pMVar7->drawDistance = 0x7f;
    uVar5 = param_1->color;
    uVar6 = param_1->light;
    puVar3 = (undefined4 *)pMVar7->pVar;
    pMVar7->enabled = '\x01';
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    dVar8 = (double)mobyutil::MB_randRangeFloat(0.85,1.15);
    fVar1 = (param_1->pos).x;
    pMVar7->unk58 = (float)dVar8;
    fVar2 = (param_1->pos).y;
    (pMVar7->pos).x = fVar1;
    fVar1 = (param_1->pos).z;
    (pMVar7->pos).y = fVar2;
    fVar2 = (param_1->pos).w;
    (pMVar7->pos).z = fVar1;
    fVar1 = (param_1->rotation).x;
    (pMVar7->pos).w = fVar2;
    fVar2 = (param_1->rotation).y;
    (pMVar7->rotation).x = fVar1;
    fVar1 = (param_1->rotation).z;
    (pMVar7->rotation).y = fVar2;
    fVar2 = (param_1->rotation).w;
    (pMVar7->rotation).z = fVar1;
    auVar9 = ZEXT416(0xffffffff);
    auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    (pMVar7->rotation).w = fVar2;
    auVar9 = loadVectorLeftIndexed(8,0x311540);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x44,ZEXT48(puVar3)
                      );
    *(undefined4 *)((uint)(puVar3 + 0x11) & 0xfffffffc) = uVar4;
    *puVar3 = 0x3f800000;
    *(undefined2 *)(puVar3 + 1) = 1;
    *(undefined1 *)(puVar3 + 2) = 0;
    mobyfunc::DeleteMoby(param_1);
    partupd::SpawnPart_5
              (0x412e848000000000,0,(longlong)(int)pMVar7 + 0x10,0x7f,0x7f,0x7f,in_r7,
               (int)(animationSpeed * 15.5));
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}



//==== 00311740  ns=mobyupdate_unsorted  size=0x1414
// sig: undefined UpdateMoby_245(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00126dd8 partupd::SpawnPart_22

/* Moby 245 */

void mobyupdate_unsorted::UpdateMoby_245(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  undefined4 uVar25;
  longlong lVar22;
  longlong lVar23;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  undefined8 uVar35;
  ulonglong in_f28;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x1d0;
  puVar10 = (ulonglong *)lVar23;
  *puVar10 = uVar20;
  puVar10[0x3c] = in_LR;
  puVar10[0x31] = in_f23;
  puVar10[0x32] = in_f24;
  puVar10[0x33] = in_f25;
  puVar10[0x34] = in_f26;
  puVar10[0x35] = in_f27;
  puVar10[0x36] = in_f28;
  puVar10[0x37] = in_f29;
  puVar10[0x38] = in_f30;
  puVar10[0x39] = in_f31;
  puVar10[0x30] = unaff_r31;
  puVar10[0x2f] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  puVar10[0x2e] = unaff_r29;
  puVar10[0x2d] = unaff_r28;
  dVar39 = (double)moby->unk58;
  iVar24 = mobyutil::MB_damage(lVar21,0xffffffffffffffff,0);
  if (iVar24 != 0) {
    *pfVar8 = *pfVar8 - *(float *)(iVar24 + 0x2c);
  }
  moby->damage = -1;
  uVar9 = (int)*pfVar8 >> 0x1f;
  if ((int)((uVar9 >> 1 ^ (uint)*pfVar8) - uVar9) < 0x3f800000) {
    iVar24 = 0;
    dVar40 = 0.0;
    dVar38 = 0.25;
    dVar37 = 0.15000000596046448;
    dVar36 = 0.5;
    uVar35 = 0x41024f8000000000;
    dVar34 = 60.5;
    dVar39 = 90.5;
    do {
      dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar38);
      dVar32 = (double)mobyutil::MB_randRot();
      dVar33 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector
                ((float)dVar31,(float)dVar32,(float)dVar33,(float *)(uVar20 - 0x140));
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      dVar31 = (double)mobyutil::g_FrameTime;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) + (moby->pos).x;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) + fVar2;
      *(float *)(puVar10 + 0x13) = (float)((double)*(float *)(puVar10 + 0x13) + dVar38) + fVar3;
      dVar31 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(dVar31 * dVar37),(float)(dVar31 * dVar36));
      dVar32 = (double)mobyutil::MB_randRot();
      dVar33 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector
                ((float)dVar31,(float)dVar32,(float)dVar33,(float *)(uVar20 - 0x150));
      dVar31 = (double)animationSpeed;
      puVar10[0x2a] = (longlong)(int)(dVar31 * dVar34);
      puVar10[0x2a] = (longlong)(int)(dVar31 * dVar39);
      mobyutil::MB_randRange
                (*(undefined4 *)((int)puVar10 + 0x154),*(undefined4 *)((int)puVar10 + 0x154));
      partupd::SpawnPart_22(uVar35,uVar20 - 0x140,uVar20 - 0x150,0x2f7f7f7f,0x2f2f2f);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 0x14);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
      }
      else {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar25 = mobyutil::MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
        fVar7 = mobyutil::g_FrameTime;
        fVar2 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar4 = fVar2 - g_heroPosition.y;
        fVar12 = fVar3 - g_heroPosition.x;
        if (SQRT(fVar12 * fVar12 + fVar4 * fVar4) < 5.0) {
          fVar4 = (moby->rotation).z;
          fVar12 = fVar4 + 1.5707963;
          fVar13 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar13 = fVar4;
          }
          fVar15 = 3.1415925 - fVar12;
          if (fVar12 - (3.1415925 - fVar12) < 0.0) {
            fVar15 = fVar12;
          }
          fVar14 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar13 < 0.0) {
            fVar14 = fVar13;
          }
          fVar4 = -3.1415925 - fVar12;
          if ((-3.1415925 - fVar12) - fVar15 < 0.0) {
            fVar4 = fVar15;
          }
          fVar12 = fVar14 * fVar14;
          fVar13 = fVar4 * fVar4;
          fVar17 = fVar12 * fVar12 * fVar14;
          fVar15 = fVar13 * fVar13 * fVar4;
          fVar18 = fVar12 * fVar17;
          fVar16 = fVar13 * fVar15;
          fVar12 = (fVar12 * fVar18 * 2.601887e-06 +
                   fVar18 * -0.0001980741 +
                   fVar17 * 0.0083330255 + fVar12 * fVar14 * -0.16666657 + fVar14) *
                   mobyutil::g_FrameTime;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar7 = (fVar13 * fVar16 * 2.601887e-06 +
                  fVar16 * -0.0001980741 +
                  fVar15 * 0.0083330255 + fVar13 * fVar4 * -0.16666657 + fVar4) * fVar7;
          *(float *)((int)puVar10 + 0x74) = fVar12 + fVar2;
          *(float *)(puVar10 + 0xe) = fVar7;
          *(float *)(puVar10 + 0xe) = fVar7 + fVar3;
          dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <=
              mobyutil::g_FrameTime * 2.0) {
            moby->state = '\x02';
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar10 + 0x154));
          }
        }
      }
    }
    else if (bVar1 < 3) {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (fVar4 <= 6.0) {
        if (3.0 <= fVar4) {
          *(float *)(puVar10 + 0x17) = fVar3;
          *(float *)((int)puVar10 + 0xbc) = fVar2;
          pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
          *(float *)(puVar10 + 0x18) = ABS(fVar3) - ABS(fVar2);
          dVar34 = 0.0;
          uVar28 = (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar10 + 0x17));
          if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
            fVar4 = ABS(fVar2);
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
          fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar10 + 0xbc));
          if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
            fVar12 = ABS(fVar3);
          }
          if (0.0 < fVar4) {
            lVar22 = uVar20 - 0x1c0;
            lVar26 = uVar20 - 0xc0;
            lVar29 = uVar20 - 0xb0;
            lVar30 = 2;
            fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0x11c) = fVar3;
            *(float *)((int)puVar10 + 0x114) = fVar3;
            *(float *)(puVar10 + 0x23) = fVar3;
            *(float *)(puVar10 + 0x22) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar4;
            *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar3;
            *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x100) * fVar3 * fVar3;
              iVar24 = (int)lVar26;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar20 - 0xc0;
            pfVar27 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar26 = lVar29;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x110) * fVar3;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar11 = (int)lVar29;
              lVar23 = lVar23 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x110)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
          }
          mobyutil::OrganicDeltAngSpeed
                    (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                     (double)(mobyutil::g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
          fVar7 = mobyutil::g_FrameTime;
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar4 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar4 = fVar2;
          }
          fVar12 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar12 = fVar3;
          }
          fVar13 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
            fVar13 = fVar4;
          }
          fVar2 = (moby->pos).x;
          fVar4 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
            fVar4 = fVar12;
          }
          fVar12 = fVar13 * fVar13;
          fVar15 = fVar4 * fVar4;
          fVar17 = fVar12 * fVar12 * fVar13;
          fVar14 = fVar15 * fVar15 * fVar4;
          fVar18 = fVar12 * fVar17;
          fVar3 = (moby->pos).y;
          fVar16 = fVar15 * fVar14;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar4 = (fVar15 * fVar16 * 2.601887e-06 +
                  fVar16 * -0.0001980741 +
                  fVar14 * 0.0083330255 + fVar15 * fVar4 * -0.16666657 + fVar4) * fVar7;
          *(float *)((int)puVar10 + 0x74) =
               (fVar12 * fVar18 * 2.601887e-06 +
               fVar18 * -0.0001980741 +
               fVar17 * 0.0083330255 + fVar12 * fVar13 * -0.16666657 + fVar13) * fVar7 + fVar3;
          *(float *)(puVar10 + 0xe) = fVar4;
          *(float *)(puVar10 + 0xe) = fVar4 + fVar2;
          dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          fVar2 = *(float *)(puVar10 + 0xf);
          if (ABS((float)(dVar34 - (double)fVar2)) <= mobyutil::g_FrameTime * 2.0) {
            fVar5 = *(f32 *)((int)puVar10 + 0x74);
            (moby->pos).x = *(f32 *)(puVar10 + 0xe);
            fVar6 = *(f32 *)((int)puVar10 + 0x7c);
            (moby->pos).y = fVar5;
            (moby->pos).z = fVar2;
            (moby->pos).w = fVar6;
          }
          else {
            moby->state = '\x01';
            uVar25 = mobyutil::MB_randInt(2);
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation
                      (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                       *(undefined4 *)((int)puVar10 + 0x154));
          }
        }
        else {
          *(float *)((int)puVar10 + 0xc4) = fVar3;
          *(float *)(puVar10 + 0x19) = fVar2;
          pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
          *(float *)((int)puVar10 + 0xcc) = ABS(fVar3) - ABS(fVar2);
          dVar34 = 0.0;
          uVar28 = (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar10 + 0xc4));
          if (*(float *)((int)puVar10 + 0xcc) - 0.0 < 0.0) {
            fVar4 = ABS(fVar2);
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
          fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)(puVar10 + 0x19));
          if (*(float *)((int)puVar10 + 0xcc) - 0.0 < 0.0) {
            fVar12 = ABS(fVar3);
          }
          if (0.0 < fVar4) {
            lVar22 = uVar20 - 0x1c0;
            lVar29 = uVar20 - 0x90;
            lVar26 = uVar20 - 0xa0;
            lVar30 = 2;
            fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0x13c) = fVar3;
            *(float *)((int)puVar10 + 0x134) = fVar3;
            *(float *)(puVar10 + 0x27) = fVar3;
            *(float *)(puVar10 + 0x26) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar4;
            *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar3;
            *(float *)((int)puVar10 + 0x13c) = *(float *)((int)puVar10 + 0x13c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar22 + 0x130) = *(float *)((int)lVar22 + 0x120) * fVar3 * fVar3;
              iVar24 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar20 - 0xa0;
            pfVar27 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar26 = lVar29;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar22 + 0x130) = *(float *)((int)lVar22 + 0x130) * fVar3;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar11 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x130)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
          }
          mobyutil::OrganicDeltAngSpeed
                    (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                     (double)(mobyutil::g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
          fVar7 = mobyutil::g_FrameTime;
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar4 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar4 = fVar2;
          }
          fVar12 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar12 = fVar3;
          }
          fVar13 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
            fVar13 = fVar4;
          }
          fVar2 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
            fVar2 = fVar12;
          }
          fVar15 = fVar13 * fVar13;
          dVar36 = 2.0;
          fVar12 = mobyutil::g_FrameTime * 2.0;
          fVar14 = fVar2 * fVar2;
          fVar18 = fVar15 * fVar15 * fVar13;
          fVar3 = (moby->pos).x;
          fVar16 = fVar14 * fVar14 * fVar2;
          fVar19 = fVar15 * fVar18;
          fVar4 = (moby->pos).y;
          fVar17 = fVar14 * fVar16;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar12 = fVar12 * (fVar14 * fVar17 * 2.601887e-06 +
                            fVar17 * -0.0001980741 +
                            fVar16 * 0.0083330255 + fVar14 * fVar2 * -0.16666657 + fVar2);
          *(float *)((int)puVar10 + 0x74) =
               fVar7 * 2.0 *
               (fVar15 * fVar19 * 2.601887e-06 +
               fVar19 * -0.0001980741 +
               fVar18 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13) + fVar4;
          *(float *)(puVar10 + 0xe) = fVar12;
          *(float *)(puVar10 + 0xe) = fVar12 + fVar3;
          dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <=
              (float)((double)(float)((double)mobyutil::g_FrameTime * dVar36) * dVar36)) {
            moby->state = '\x03';
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar21,2,0,*(undefined4 *)((int)puVar10 + 0x154));
          }
          else {
            moby->state = '\x01';
            uVar25 = mobyutil::MB_randInt(2);
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation
                      (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                       *(undefined4 *)((int)puVar10 + 0x154));
          }
        }
      }
      else {
        moby->state = '\x01';
        uVar25 = mobyutil::MB_randInt(2);
        puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation
                  (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                   *(undefined4 *)((int)puVar10 + 0x154));
      }
    }
    else if (bVar1 < 4) {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= 4.0) {
        *(float *)(puVar10 + 0x14) = fVar3;
        *(float *)((int)puVar10 + 0xa4) = fVar2;
        pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
        *(float *)(puVar10 + 0x15) = ABS(fVar3) - ABS(fVar2);
        dVar34 = 0.0;
        uVar28 = (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar10 + 0x14));
        if (*(float *)(puVar10 + 0x15) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
        fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)((int)puVar10 + 0xa4));
        if (*(float *)(puVar10 + 0x15) - 0.0 < 0.0) {
          fVar12 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar22 = uVar20 - 0x1c0;
          lVar29 = uVar20 - 0xf0;
          lVar26 = uVar20 - 0x100;
          lVar30 = 2;
          fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xdc) = fVar3;
          *(float *)((int)puVar10 + 0xd4) = fVar3;
          *(float *)(puVar10 + 0x1b) = fVar3;
          *(float *)(puVar10 + 0x1a) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar4;
          *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar3;
          *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xc0) * fVar3 * fVar3;
            iVar24 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar29 = uVar20 - 0x100;
          pfVar27 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar26 = lVar29;
          do {
            fVar3 = *pfVar27;
            fVar4 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xd0) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar22 = 2;
          do {
            iVar24 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar11 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xd0)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(mobyutil::g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
        fVar7 = mobyutil::g_FrameTime;
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar12 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar12 = fVar3;
        }
        fVar13 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
          fVar2 = fVar12;
        }
        fVar15 = fVar13 * fVar13;
        dVar36 = 2.0;
        fVar12 = mobyutil::g_FrameTime * 2.0;
        fVar14 = fVar2 * fVar2;
        fVar18 = fVar15 * fVar15 * fVar13;
        fVar3 = (moby->pos).x;
        fVar16 = fVar14 * fVar14 * fVar2;
        fVar19 = fVar15 * fVar18;
        fVar4 = (moby->pos).y;
        fVar17 = fVar14 * fVar16;
        *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
        fVar12 = fVar12 * (fVar14 * fVar17 * 2.601887e-06 +
                          fVar17 * -0.0001980741 +
                          fVar16 * 0.0083330255 + fVar14 * fVar2 * -0.16666657 + fVar2);
        *(float *)((int)puVar10 + 0x74) =
             fVar7 * 2.0 *
             (fVar15 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar18 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13
             ) + fVar4;
        *(float *)(puVar10 + 0xe) = fVar12;
        *(float *)(puVar10 + 0xe) = fVar12 + fVar3;
        dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
        fVar2 = *(float *)(puVar10 + 0xf);
        if (ABS((float)(dVar34 - (double)fVar2)) <=
            (float)((double)(float)((double)mobyutil::g_FrameTime * dVar36) * dVar36)) {
          fVar5 = *(f32 *)((int)puVar10 + 0x74);
          (moby->pos).x = *(f32 *)(puVar10 + 0xe);
          fVar6 = *(f32 *)((int)puVar10 + 0x7c);
          (moby->pos).y = fVar5;
          (moby->pos).z = fVar2;
          (moby->pos).w = fVar6;
        }
        else {
          moby->state = '\x01';
          uVar25 = mobyutil::MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
      }
      else {
        *(float *)((int)puVar10 + 0xac) = fVar3;
        *(float *)(puVar10 + 0x16) = fVar2;
        pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
        *(float *)((int)puVar10 + 0xb4) = ABS(fVar3) - ABS(fVar2);
        dVar34 = 0.0;
        uVar28 = (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar10 + 0xac));
        if (*(float *)((int)puVar10 + 0xb4) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
        fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x16));
        if (*(float *)((int)puVar10 + 0xb4) - 0.0 < 0.0) {
          fVar12 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar22 = uVar20 - 0x1c0;
          lVar29 = uVar20 - 0xd0;
          lVar26 = uVar20 - 0xe0;
          lVar30 = 2;
          fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
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
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xe0) * fVar3 * fVar3;
            iVar24 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar29 = uVar20 - 0xe0;
          pfVar27 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar26 = lVar29;
          do {
            fVar3 = *pfVar27;
            fVar4 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xf0) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar22 = 2;
          do {
            iVar24 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar11 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xf0)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(mobyutil::g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
        fVar7 = mobyutil::g_FrameTime;
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar12 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar12 = fVar3;
        }
        fVar13 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = (moby->pos).x;
        fVar4 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
          fVar4 = fVar12;
        }
        fVar12 = fVar13 * fVar13;
        fVar15 = fVar4 * fVar4;
        fVar17 = fVar12 * fVar12 * fVar13;
        fVar14 = fVar15 * fVar15 * fVar4;
        fVar18 = fVar12 * fVar17;
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
        fVar16 = fVar15 * fVar14;
        fVar4 = (fVar15 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 +
                fVar14 * 0.0083330255 + fVar15 * fVar4 * -0.16666657 + fVar4) * fVar7;
        *(float *)((int)puVar10 + 0x74) =
             (fVar12 * fVar18 * 2.601887e-06 +
             fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar12 * fVar13 * -0.16666657 + fVar13
             ) * fVar7 + fVar3;
        *(float *)(puVar10 + 0xe) = fVar4;
        *(float *)(puVar10 + 0xe) = fVar4 + fVar2;
        dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
        if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <= mobyutil::g_FrameTime * 2.0)
        {
          moby->state = '\x02';
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar10 + 0x154));
        }
        else {
          moby->state = '\x01';
          uVar25 = mobyutil::MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
      }
    }
    fVar2 = DAT_0071f418 * 9.8 + pfVar8[0x13];
    pfVar8[0x13] = fVar2;
    (moby->pos).z = (moby->pos).z - fVar2;
    dVar36 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
    dVar34 = (double)(moby->pos).z;
    if ((dVar34 < dVar36) && (dVar36 < (double)(float)(dVar34 + 0.25))) {
      pfVar8[0x13] = 0.0;
      (moby->pos).z = (float)dVar36;
      dVar34 = dVar36;
    }
    if (0.0 <= dVar34) {
      moby->unk58 = (float)dVar39;
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00312b54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M246_00312b54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M246_00312b54(void)

{
  DAT_007ff91c = 0x10000;
  return;
}



//==== 00312b68  ns=mobyupdate_helpers  size=0x1a8
// sig: undefined M246_00312b68(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M246_00312b68(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar13 = uVar6 - 0x150;
  puVar4 = (ulonglong *)lVar13;
  *puVar4 = uVar6;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = unaff_r31;
  iVar3 = *(int *)(param_1 + 0x78);
  uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar4[0x27] = uVar7;
  uVar7 = draw::GetEffectTex(0xd);
  puVar4[0x25] = uVar7;
  fastfunc::FastMtx4Identity((float *)(puVar4 + 0xe));
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(iVar3 + 0xe0);
  *(undefined4 *)((int)puVar4 + 0xa4) = *(undefined4 *)(iVar3 + 0xe4);
  uVar1 = *(undefined4 *)(iVar3 + 0xe8);
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x15) = uVar1;
  iVar3 = *(int *)(iVar3 + 0xf0);
  lVar15 = 4;
  puVar8 = &DAT_007ff940;
  lVar9 = uVar6 - 0xa0;
  puVar12 = &DAT_007ff980;
  puVar11 = &DAT_007ff984;
  lVar14 = lVar13;
  do {
    *(uint *)((int)lVar14 + 0xf0) =
         ((uint)((LZCOUNT(-iVar3) << 0x3a) >> 0x3f) & 0x81808000) - 0xffff80;
    lVar14 = lVar14 + 4;
    puVar10 = (undefined4 *)lVar9;
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    puVar10[2] = puVar8[2];
    puVar5 = puVar8 + 3;
    puVar8 = puVar8 + 4;
    puVar10[3] = *puVar5;
    uVar1 = *puVar12;
    lVar9 = lVar9 + 0x10;
    uVar2 = *puVar11;
    puVar12 = puVar12 + 2;
    *(undefined4 *)((int)lVar13 + 0x100) = uVar1;
    puVar11 = puVar11 + 2;
    *(undefined4 *)((int)lVar13 + 0x104) = uVar2;
    lVar13 = lVar13 + 8;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  draw::FastDrawQuad(uVar6 - 0xa0,uVar6 - 0xe0,0,EffectTexHeaders,9);
  return;
}



//==== 00312d38  ns=mobyupdate_helpers  size=0x3dc
// sig: undefined M246_00312d38(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M246_00312d38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float afStack_150 [12];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  
  iVar1 = *(int *)(param_1 + 0x78);
  local_90 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  local_a0 = FUN_00502f08(0,0,0,0,0,0);
  local_88 = idol_draw::PackCmd(0,2,0,1,0x80);
  local_98 = draw::GetEffectTex(10);
  fastfunc::FastMtx4Identity(afStack_150);
  local_120 = *(undefined4 *)(iVar1 + 0x100);
  local_11c = *(undefined4 *)(iVar1 + 0x104);
  iVar3 = 0;
  local_118 = *(undefined4 *)(iVar1 + 0x108);
  local_114 = 0x3f800000;
  dVar15 = 1.570796251296997;
  dVar16 = 3.141592502593994;
  dVar17 = -3.141592502593994;
  dVar18 = -0.16666656732559204;
  dVar19 = 0.008333025500178337;
  dVar20 = -0.0001980741071747616;
  dVar21 = 2.601886990305502e-06;
  dVar22 = 0.5;
  dVar23 = 0.5235987901687622;
  do {
    iVar2 = iVar3 % 0xc;
    iVar3 = iVar3 + 1;
    local_80 = (longlong)(iVar3 % 0xc);
    dVar4 = (double)(float)((double)(longlong)iVar2 * dVar23);
    dVar5 = (double)(float)(dVar4 + dVar15);
    dVar6 = (double)(float)(dVar16 - dVar4);
    if (dVar4 - (double)(float)(dVar16 - dVar4) < 0.0) {
      dVar6 = dVar4;
    }
    dVar8 = (double)(float)(dVar16 - dVar5);
    if (dVar5 - (double)(float)(dVar16 - dVar5) < 0.0) {
      dVar8 = dVar5;
    }
    dVar7 = (double)(float)((double)local_80 * dVar23);
    dVar10 = (double)(float)(dVar17 - dVar4);
    if ((double)(float)(dVar17 - dVar4) - dVar6 < 0.0) {
      dVar10 = dVar6;
    }
    dVar6 = (double)(float)(dVar17 - dVar5);
    if ((double)(float)(dVar17 - dVar5) - dVar8 < 0.0) {
      dVar6 = dVar8;
    }
    dVar5 = (double)(float)(dVar10 * dVar10);
    dVar9 = (double)(float)(dVar7 + dVar15);
    dVar8 = (double)(float)(dVar6 * dVar6);
    dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar10));
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
    dVar14 = (double)(float)(dVar5 * dVar12);
    dVar13 = (double)(float)(dVar8 * dVar11);
    dVar4 = (double)(float)(dVar16 - dVar9);
    if (dVar9 - (double)(float)(dVar16 - dVar9) < 0.0) {
      dVar4 = dVar9;
    }
    local_fc = (float)((double)(float)(dVar5 * dVar14) * dVar21 +
                      (double)(float)(dVar14 * dVar20 +
                                     (double)(float)(dVar12 * dVar19 +
                                                    (double)(float)((double)(float)(dVar5 * dVar10)
                                                                    * dVar18 + dVar10))));
    local_100 = (float)((double)(float)(dVar8 * dVar13) * dVar21 +
                       (double)(float)(dVar13 * dVar20 +
                                      (double)(float)(dVar11 * dVar19 +
                                                     (double)(float)((double)(float)(dVar8 * dVar6)
                                                                     * dVar18 + dVar6))));
    dVar6 = (double)(float)(dVar17 - dVar9);
    if ((double)(float)(dVar17 - dVar9) - dVar4 < 0.0) {
      dVar6 = dVar4;
    }
    local_110 = local_100 * *(float *)(iVar1 + 0xf4);
    dVar4 = (double)(float)(dVar16 - dVar7);
    if (dVar7 - (double)(float)(dVar16 - dVar7) < 0.0) {
      dVar4 = dVar7;
    }
    dVar8 = (double)(float)(dVar6 * dVar6);
    local_108 = 0;
    local_10c = local_fc * *(float *)(iVar1 + 0xf4);
    local_104 = 0x3f800000;
    dVar5 = (double)(float)(dVar17 - dVar7);
    if ((double)(float)(dVar17 - dVar7) - dVar4 < 0.0) {
      dVar5 = dVar4;
    }
    dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
    dVar7 = (double)(float)(dVar8 * dVar10);
    local_100 = local_100 * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    dVar4 = (double)(float)(dVar5 * dVar5);
    local_f8 = 0;
    local_f4 = 0x3f800000;
    local_e0 = (float)((double)(float)(dVar8 * dVar7) * dVar21 +
                      (double)(float)(dVar7 * dVar20 +
                                     (double)(float)(dVar10 * dVar19 +
                                                    (double)(float)((double)(float)(dVar8 * dVar6) *
                                                                    dVar18 + dVar6))));
    local_fc = local_fc * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    dVar6 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar5));
    dVar8 = (double)(float)(dVar4 * dVar6);
    local_d0 = 0xff000080;
    local_f0 = local_e0 * *(float *)(iVar1 + 0xf4);
    local_cc = 0xff000000;
    local_c8 = 0xff000080;
    local_c4 = 0xff000000;
    local_e8 = 0;
    local_e4 = 0x3f800000;
    local_dc = (float)((double)(float)(dVar4 * dVar8) * dVar21 +
                      (double)(float)(dVar8 * dVar20 +
                                     (double)(float)(dVar6 * dVar19 +
                                                    (double)(float)((double)(float)(dVar4 * dVar5) *
                                                                    dVar18 + dVar5))));
    local_ec = local_dc * *(float *)(iVar1 + 0xf4);
    local_e0 = local_e0 * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    local_d8 = 0;
    local_d4 = 0x3f800000;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0x3f800000;
    local_b0 = 0x3f800000;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_dc = local_dc * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    draw::FastDrawQuad(&local_110,afStack_150,0,EffectTexHeaders,9);
  } while (iVar3 < 0xc);
  return;
}



//==== 00313188  ns=mobyupdate_unsorted  size=0x13b4
// sig: undefined UpdateMoby_246(MobyInstance * moby)
// callers(0): 
// callees(14): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00136724 path::InitFollower; 00299400 FUN_00299400

/* Moby 246 */

void mobyupdate_unsorted::UpdateMoby_246(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  KickVars *kv;
  int *piVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *victim;
  ulonglong uVar12;
  int iVar15;
  float fVar16;
  longlong lVar13;
  longlong lVar14;
  int iVar17;
  uint uVar18;
  float *pfVar20;
  longlong lVar19;
  u8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float fVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1c0;
  puVar5 = (ulonglong *)lVar14;
  *puVar5 = uVar12;
  puVar5[0x3a] = in_LR;
  puVar5[0x34] = in_f28;
  puVar5[0x35] = in_f29;
  puVar5[0x36] = in_f30;
  puVar5[0x37] = in_f31;
  puVar5[0x33] = unaff_r31;
  puVar5[0x32] = unaff_r30;
  puVar5[0x31] = unaff_r29;
  puVar5[0x30] = unaff_r28;
  kv = (KickVars *)moby->pVar;
  iVar15 = mobyutil::MB_damage(moby,0x30000,0);
  if ((iVar15 != 0) && (moby->state != '\x05' && moby->state != '\x06')) {
    kv->flag = 1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    dVar28 = 0.0;
    kv->xySpeed = 0.0;
    fVar24 = mobyutil::g_FrameTime;
    kv->type = '\0';
    fVar16 = (float)((int)kv[2].peakFrame + -1);
    kv[2].peakFrame = fVar16;
    kv->zSpeed = fVar24 * 4.0;
    if (fVar16 == 0.0) {
      moby->state = '\x06';
      (moby->pos).z = (moby->pos).z + 0.1;
      fVar24 = (moby->pos).x - g_heroPosition.x;
      fVar16 = (moby->pos).y - g_heroPosition.y;
      fVar1 = ABS(fVar24);
      fVar2 = ABS(fVar16);
      *(float *)((int)puVar5 + 0xf4) = fVar24;
      *(float *)(puVar5 + 0x1f) = fVar16;
      *(float *)((int)puVar5 + 0xfc) = fVar1 - fVar2;
      uVar22 = (ulonglong)(*(uint *)((int)puVar5 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar5 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar5 + 0x1f) >> 0x1d) & 4;
      lVar13 = uVar22 << 2;
      fVar24 = ABS(*(float *)((int)puVar5 + 0xf4));
      if (*(float *)((int)puVar5 + 0xfc) - 0.0 < 0.0) {
        fVar24 = fVar2;
      }
      fVar16 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
      fVar2 = ABS(*(float *)(puVar5 + 0x1f));
      if (*(float *)((int)puVar5 + 0xfc) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar24) {
        lVar13 = uVar12 - 0x1b0;
        lVar19 = uVar12 - 0x60;
        lVar23 = uVar12 - 0x50;
        lVar25 = 2;
        fVar24 = (fVar2 - fVar24) / (fVar2 + fVar24);
        fVar2 = fVar24 * fVar24;
        *(float *)((int)puVar5 + 0x16c) = fVar24;
        *(float *)((int)puVar5 + 0x164) = fVar24;
        *(float *)(puVar5 + 0x2d) = fVar24;
        *(float *)(puVar5 + 0x2c) = fVar24;
        fVar24 = fVar2 * fVar2;
        *(float *)((int)puVar5 + 0x164) = *(float *)((int)puVar5 + 0x164) * fVar2;
        *(float *)(puVar5 + 0x2d) = *(float *)(puVar5 + 0x2d) * fVar24;
        *(float *)((int)puVar5 + 0x16c) = *(float *)((int)puVar5 + 0x16c) * fVar24 * fVar2;
        do {
          *(float *)((int)lVar13 + 0x160) = *(float *)((int)lVar13 + 0x150) * fVar24 * fVar24;
          iVar15 = (int)lVar19;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x60;
        pfVar20 = (float *)&DAT_007358e0;
        lVar19 = lVar14;
        lVar13 = lVar23;
        do {
          fVar24 = *pfVar20;
          fVar2 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar19 + 0x160) = *(float *)((int)lVar19 + 0x160) * fVar24;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
          lVar13 = lVar13 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 2;
        lVar19 = lVar14;
        do {
          iVar15 = (int)lVar19;
          iVar17 = (int)lVar23;
          lVar19 = lVar19 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x160)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar16 + fVar1);
      }
      mobyutil::MB_StartKick(dVar28,moby,kv,lVar13,1,3,0);
    }
    else {
      moby->state = '\x05';
      (moby->pos).z = (moby->pos).z + 0.1;
      fVar24 = (moby->pos).x - g_heroPosition.x;
      fVar16 = (moby->pos).y - g_heroPosition.y;
      fVar1 = ABS(fVar24);
      fVar2 = ABS(fVar16);
      *(float *)(puVar5 + 0x1d) = fVar24;
      *(float *)((int)puVar5 + 0xec) = fVar16;
      *(float *)(puVar5 + 0x1e) = fVar1 - fVar2;
      uVar22 = (ulonglong)(*(uint *)(puVar5 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar5 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar5 + 0xec) >> 0x1d) & 4;
      lVar13 = uVar22 << 2;
      fVar24 = ABS(*(float *)(puVar5 + 0x1d));
      if (*(float *)(puVar5 + 0x1e) - 0.0 < 0.0) {
        fVar24 = fVar2;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
      fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar5 + 0xec));
      if (*(float *)(puVar5 + 0x1e) - 0.0 < 0.0) {
        fVar6 = fVar1;
      }
      if (0.0 < fVar24) {
        lVar13 = uVar12 - 0x1b0;
        lVar23 = uVar12 - 0x70;
        lVar19 = uVar12 - 0x80;
        lVar25 = 2;
        fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
        fVar1 = fVar24 * fVar24;
        *(float *)((int)puVar5 + 0x14c) = fVar24;
        *(float *)((int)puVar5 + 0x144) = fVar24;
        *(float *)(puVar5 + 0x29) = fVar24;
        *(float *)(puVar5 + 0x28) = fVar24;
        fVar24 = fVar1 * fVar1;
        *(float *)((int)puVar5 + 0x144) = *(float *)((int)puVar5 + 0x144) * fVar1;
        *(float *)(puVar5 + 0x29) = *(float *)(puVar5 + 0x29) * fVar24;
        *(float *)((int)puVar5 + 0x14c) = *(float *)((int)puVar5 + 0x14c) * fVar24 * fVar1;
        do {
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar24 * fVar24;
          iVar15 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x80;
        pfVar20 = (float *)&DAT_007358e0;
        lVar19 = lVar14;
        lVar13 = lVar23;
        do {
          fVar24 = *pfVar20;
          fVar1 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x140) * fVar24;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
          lVar13 = lVar13 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 2;
        lVar19 = lVar14;
        do {
          iVar15 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x140)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar16);
      }
      mobyutil::MB_StartKick(dVar28,moby,kv,lVar13,1,3,0);
    }
  }
  uVar21 = moby->state;
  moby->damage = -1;
  if (uVar21 == '\x06') {
    uVar18 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar18 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00314324;
  }
  if (uVar21 != '\x05') {
    if (uVar21 != '\x04') {
      if (uVar21 == '\x03') {
        fVar24 = (float)kv[2].radius - (moby->pos).x;
        fVar16 = (float)kv[2].flag - (moby->pos).y;
        pfVar20 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar1 = ABS(fVar24);
        fVar2 = ABS(fVar16);
        *(float *)(puVar5 + 0x1a) = fVar24;
        *(float *)((int)puVar5 + 0xd4) = fVar16;
        *(float *)(puVar5 + 0x1b) = fVar1 - fVar2;
        dVar28 = 0.0;
        uVar22 = (ulonglong)(*(uint *)(puVar5 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0xd4) >> 0x1d) & 4;
        fVar24 = ABS(*(float *)(puVar5 + 0x1a));
        if (*(float *)(puVar5 + 0x1b) - 0.0 < 0.0) {
          fVar24 = fVar2;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)((int)puVar5 + 0xd4));
        if (*(float *)(puVar5 + 0x1b) - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        dVar29 = dVar28;
        if (0.0 < fVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xc0;
          lVar23 = uVar12 - 0xb0;
          lVar25 = 2;
          fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
          fVar1 = fVar24 * fVar24;
          *(float *)((int)puVar5 + 0x10c) = fVar24;
          *(float *)((int)puVar5 + 0x104) = fVar24;
          *(float *)(puVar5 + 0x21) = fVar24;
          *(float *)(puVar5 + 0x20) = fVar24;
          fVar24 = fVar1 * fVar1;
          *(float *)((int)puVar5 + 0x104) = *(float *)((int)puVar5 + 0x104) * fVar1;
          *(float *)(puVar5 + 0x21) = *(float *)(puVar5 + 0x21) * fVar24;
          *(float *)((int)puVar5 + 0x10c) = *(float *)((int)puVar5 + 0x10c) * fVar24 * fVar1;
          do {
            *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar24 * fVar24;
            iVar15 = (int)lVar19;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0xc0;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar23;
          do {
            fVar24 = *pfVar20;
            fVar1 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar24;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar1;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar17 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x100)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar16);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar20,
                   &kv[2].field_0x58);
        dVar31 = (double)(float)((double)g_heroPosition.y - (double)(float)kv[2].flag);
        dVar30 = (double)(float)((double)g_heroPosition.x - (double)(float)kv[2].radius);
        dVar27 = (double)SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
        dVar29 = dVar28;
        if (dVar27 - 2.0 < 0.0) {
          dVar29 = 1.0;
        }
        kv[2].xyBounceDamp = (float)dVar29;
        dVar29 = dVar30;
        dVar26 = dVar31;
        if (((double)(mobyutil::g_FrameTime * 3.0) < dVar27) &&
           (dVar29 = dVar28, dVar26 = dVar28, dVar27 != dVar28)) {
          dVar27 = (double)(float)((double)(mobyutil::g_FrameTime * 3.0) / dVar27);
          dVar29 = (double)(float)(dVar27 * dVar30);
          dVar26 = (double)(float)(dVar27 * dVar31);
        }
        kv[2].radius = (int)(float)((double)(float)kv[2].radius + dVar29);
        kv[2].flag = (int)(float)((double)(float)kv[2].flag + dVar26);
        uVar21 = moby->animationId;
        if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\x05'))
        {
          if (uVar21 != '\x06') {
            mobyutil::MB_SetAnimation(moby,6,0,3);
          }
        }
        else {
          if (moby->updateId == uVar21) {
            dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
            uVar21 = moby->animationId;
            if ((dVar29 == 40.0) && (uVar21 == '\x06')) {
              *(undefined4 *)(puVar5 + 0x14) = 0;
              *(undefined4 *)((int)puVar5 + 0xa4) = 0;
              *(undefined4 *)(puVar5 + 0x15) = 0;
              *(undefined4 *)((int)puVar5 + 0xac) = 0x3f800000;
              mobyfunc::GetBonePosition(moby,1,uVar12 - 0x130);
              *(float *)(puVar5 + 0x13) = *(float *)(puVar5 + 0x13) + 0.2;
              iVar17 = FUN_00299400(dVar28,uVar12 - 0x120,uVar12 - 0x130);
              iVar15 = *(int *)(iVar17 + 0x78);
              *(float *)(iVar15 + 0x20) = (float)kv[2].radius - *(float *)(puVar5 + 0x12);
              *(float *)(iVar15 + 0x24) = (float)kv[2].flag - *(float *)((int)puVar5 + 0x94);
              *(float *)(iVar15 + 0x28) = kv[2].zOfs - *(float *)(puVar5 + 0x13);
              *(undefined4 *)(iVar15 + 0x2c) = *(undefined4 *)&kv[2].timeout;
              *(float *)(*(int *)(iVar17 + 0x78) + 0x28) =
                   *(float *)(*(int *)(iVar17 + 0x78) + 0x28) + 0.5;
              iVar15 = *(int *)(iVar17 + 0x78);
              fVar24 = *(float *)(iVar15 + 0x24);
              fVar16 = *(float *)(iVar15 + 0x20);
              fVar2 = *(float *)(iVar15 + 0x28);
              dVar29 = (double)SQRT(fVar2 * fVar2 + fVar16 * fVar16 + fVar24 * fVar24);
              if (dVar29 == dVar28) {
                uVar3 = *(undefined4 *)(iVar15 + 0x2c);
                dVar29 = dVar28;
                dVar30 = dVar28;
              }
              else {
                fVar1 = (float)((double)(mobyutil::g_FrameTime * 7.0) / dVar29);
                uVar3 = *(undefined4 *)(iVar15 + 0x2c);
                dVar29 = (double)(fVar16 * fVar1);
                dVar28 = (double)(fVar24 * fVar1);
                dVar30 = (double)(fVar2 * fVar1);
              }
              *(float *)(iVar15 + 0x20) = (float)dVar29;
              *(float *)(iVar15 + 0x24) = (float)dVar28;
              *(float *)(iVar15 + 0x28) = (float)dVar30;
              *(undefined4 *)(iVar15 + 0x2c) = uVar3;
              *(undefined1 *)(iVar17 + 0x20) = 1;
              goto LAB_00314324;
            }
          }
          if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\a'))
          {
            moby->state = '\x02';
            if (uVar21 != '\0') {
              mobyutil::MB_SetAnimation(moby,0,0,3);
            }
          }
          else if (((uVar21 == '\x06') && ((moby->field43_0x70 & 2U) != 0)) &&
                  (kv[2].xyBounceDamp == 0.0)) {
            mobyutil::MB_SetAnimation(moby,7,0,3);
          }
        }
      }
      else if (uVar21 == '\x02') {
        fVar24 = (float)kv[2].radius - (moby->pos).x;
        fVar16 = (float)kv[2].flag - (moby->pos).y;
        pfVar20 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar1 = ABS(fVar24);
        fVar2 = ABS(fVar16);
        *(float *)((int)puVar5 + 0xdc) = fVar24;
        *(float *)(puVar5 + 0x1c) = fVar16;
        *(float *)((int)puVar5 + 0xe4) = fVar1 - fVar2;
        dVar28 = 0.0;
        uVar22 = (ulonglong)(*(uint *)((int)puVar5 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1c) >> 0x1d) & 4;
        fVar24 = ABS(*(float *)((int)puVar5 + 0xdc));
        if (*(float *)((int)puVar5 + 0xe4) - 0.0 < 0.0) {
          fVar24 = fVar2;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar5 + 0x1c));
        if (*(float *)((int)puVar5 + 0xe4) - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        dVar29 = dVar28;
        if (0.0 < fVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar23 = uVar12 - 0x90;
          lVar19 = uVar12 - 0xa0;
          lVar25 = 2;
          fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
          fVar1 = fVar24 * fVar24;
          *(float *)((int)puVar5 + 300) = fVar24;
          *(float *)((int)puVar5 + 0x124) = fVar24;
          *(float *)(puVar5 + 0x25) = fVar24;
          *(float *)(puVar5 + 0x24) = fVar24;
          fVar24 = fVar1 * fVar1;
          *(float *)((int)puVar5 + 0x124) = *(float *)((int)puVar5 + 0x124) * fVar1;
          *(float *)(puVar5 + 0x25) = *(float *)(puVar5 + 0x25) * fVar24;
          *(float *)((int)puVar5 + 300) = *(float *)((int)puVar5 + 300) * fVar24 * fVar1;
          do {
            *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar24 * fVar24;
            iVar15 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0xa0;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar23;
          do {
            fVar24 = *pfVar20;
            fVar1 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar24;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar1;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar17 = (int)lVar23;
            lVar14 = lVar14 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x120)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar16);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar20,
                   &kv[2].field_0x58);
        fVar24 = (moby->pos).y - g_heroPosition.y;
        fVar16 = (moby->pos).x - g_heroPosition.x;
        fVar24 = SQRT(fVar16 * fVar16 + fVar24 * fVar24);
        if (fVar24 <= 17.0) {
          if (8.0 <= fVar24) {
            dVar30 = (double)(g_heroPosition.y - (float)kv[2].flag);
            dVar31 = (double)(g_heroPosition.x - (float)kv[2].radius);
            dVar29 = (double)SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar30 * dVar30)));
            if (dVar29 < 2.0) {
              kv[2].xyBounceDamp = 1.0;
              moby->state = '\x03';
              if (moby->animationId != '\x05') {
                mobyutil::MB_SetAnimation(moby,5,0,3);
              }
            }
            dVar27 = dVar30;
            dVar26 = dVar31;
            if (((double)(mobyutil::g_FrameTime * 3.0) < dVar29) &&
               (dVar27 = dVar28, dVar26 = dVar28, dVar29 != dVar28)) {
              dVar28 = (double)(float)((double)(mobyutil::g_FrameTime * 3.0) / dVar29);
              dVar27 = (double)(float)(dVar28 * dVar30);
              dVar26 = (double)(float)(dVar28 * dVar31);
            }
            kv[2].radius = (int)(float)((double)(float)kv[2].radius + dVar26);
            kv[2].flag = (int)(float)((double)(float)kv[2].flag + dVar27);
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\x02') {
              mobyutil::MB_SetAnimation(moby,2,0,3);
            }
          }
        }
        else {
          moby->state = '\x01';
        }
      }
      else if (uVar21 == '\x01') {
        piVar4 = (int *)kv[2].kickVel[0];
        iVar15 = *piVar4;
        iVar17 = (int)kv[1].peakFrame + iVar15 + (int)(char)kv[1].field_0x54;
        fVar24 = (float)(iVar17 - (iVar17 / iVar15) * iVar15);
        *(int *)(puVar5 + 0xe) = piVar4[(int)fVar24 * 4 + 4];
        *(int *)((int)puVar5 + 0x74) = piVar4[(int)fVar24 * 4 + 5];
        *(int *)(puVar5 + 0xf) = piVar4[(int)fVar24 * 4 + 6];
        *(int *)((int)puVar5 + 0x7c) = piVar4[(int)fVar24 * 4 + 7];
        iVar15 = mobyutil::MB_UpdateNavMoveTurning(moby,kv + 1,uVar12 - 0x150,uVar12 - 0x140);
        if (iVar15 != 0) {
          kv[1].peakFrame = fVar24;
        }
        fVar24 = (moby->pos).y;
        fVar16 = (moby->pos).x;
        if (SQRT((fVar16 - g_heroPosition.x) * (fVar16 - g_heroPosition.x) +
                 (fVar24 - g_heroPosition.y) * (fVar24 - g_heroPosition.y)) < 15.0) {
          moby->state = '\x02';
        }
        if (kv[2].xyBounceDamp != 0.0) {
          kv[2].xyBounceDamp = 0.0;
          fVar16 = (moby->pos).x;
          fVar24 = (moby->pos).y;
        }
        fVar2 = (moby->rotation).z;
        fVar1 = fVar2 + 1.5707963;
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        fVar8 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar8 = fVar1;
        }
        fVar7 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar7 = fVar6;
        }
        fVar2 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
          fVar2 = fVar8;
        }
        fVar1 = fVar7 * fVar7;
        fVar6 = fVar2 * fVar2;
        fVar10 = fVar1 * fVar1 * fVar7;
        fVar8 = fVar6 * fVar6 * fVar2;
        fVar11 = fVar1 * fVar10;
        fVar9 = fVar6 * fVar8;
        fVar1 = ((fVar1 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) * 6.0 + fVar24) -
                (float)kv[2].flag;
        fVar16 = ((fVar6 * fVar9 * 2.601887e-06 +
                  fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2
                  ) * 6.0 + fVar16) - (float)kv[2].radius;
        fVar6 = SQRT(fVar16 * fVar16 + fVar1 * fVar1);
        fVar24 = fVar16;
        fVar2 = fVar1;
        if ((mobyutil::g_FrameTime * 3.0 < fVar6) && (fVar24 = 0.0, fVar2 = 0.0, fVar6 != 0.0)) {
          fVar6 = (mobyutil::g_FrameTime * 3.0) / fVar6;
          fVar24 = fVar6 * fVar16;
          fVar2 = fVar6 * fVar1;
        }
        kv[2].radius = (int)((float)kv[2].radius + fVar24);
        kv[2].flag = (int)((float)kv[2].flag + fVar2);
      }
      else if (uVar21 == '\0') {
        path::InitFollower((PathFollower *)&kv[1].peakFrame);
        mobyutil::MB_InitDefaultParams(kv[1].kickVel);
        kv[1].kickVel[3] = 2.0;
        kv[1].faceSpeed = 0.2;
        kv[1].kickActive = '=';
        kv[1].type = 'L';
        kv[1].stage = -0x3333;
        kv[1].faceAng = 0.3;
        fVar24 = mobyutil::g_FrameTime * 2.0;
        kv[2].zBounceDamp = 0.0;
        kv[1].kickVel[0] = 1.27378e-42;
        kv[1].flag = (int)fVar24;
        kv[2].radius = (int)(moby->pos).x;
        kv[2].flag = (int)(moby->pos).y;
        fVar24 = (moby->pos).z;
        kv[2].zOfs = fVar24;
        *(f32 *)&kv[2].timeout = (moby->pos).w;
        kv[2].zOfs = fVar24 + 0.125;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
      }
      goto LAB_00314324;
    }
    uVar21 = moby->animationId;
    if ((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) {
      if (uVar21 == '\x02') {
        if (uVar21 != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,3);
        }
      }
      else {
        if (uVar21 != '\x03') goto LAB_003141ec;
        if (uVar21 != '\x04') {
          mobyutil::MB_SetAnimation(moby,4,0,3);
        }
      }
    }
    else {
LAB_003141ec:
      if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\x04')) {
        mobyutil::MB_SetAnimation(moby,0,0,3);
        moby->state = '\x02';
      }
    }
    if (((moby->updateId == moby->animationId) &&
        (dVar28 = (double)mobyfunc::BlendAnimFrame(moby), dVar28 == 24.0)) &&
       (moby->animationId == '\x04')) {
      kv[2].zBounceDamp = 2.0;
      kv[2].faceAng = (moby->pos).x;
      kv[2].faceSpeed = (moby->pos).y;
      fVar24 = (moby->pos).z;
      kv[2].faceLimit = fVar24;
      kv[2].minXySpeed = (moby->pos).w;
      kv[2].faceLimit = fVar24 + 0.125;
    }
  }
  uVar18 = mobyutil::MB_UpdateKick(moby,kv);
  if ((uVar18 & 0x40) != 0) {
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
    moby->state = '\x01';
  }
LAB_00314324:
  victim = g_heroMobyPtr;
  fVar24 = kv[2].zBounceDamp;
  if (kv[2].zBounceDamp != 0.0) {
    fVar16 = kv[2].faceSpeed - g_heroPosition.y;
    fVar2 = kv[2].faceAng - g_heroPosition.x;
    if (((ABS((moby->pos).z - g_heroPosition.z) < 0.2) &&
        (ABS(SQRT(fVar2 * fVar2 + fVar16 * fVar16) - fVar24) < 0.2)) &&
       (g_heroState != TAKING_DAMAGE)) {
      fVar24 = (moby->rotation).z;
      fVar16 = fVar24 + 1.5707963;
      fVar2 = 3.1415925 - fVar24;
      if (fVar24 - (3.1415925 - fVar24) < 0.0) {
        fVar2 = fVar24;
      }
      fVar1 = 3.1415925 - fVar16;
      if (fVar16 - (3.1415925 - fVar16) < 0.0) {
        fVar1 = fVar16;
      }
      fVar6 = -3.1415925 - fVar24;
      if ((-3.1415925 - fVar24) - fVar2 < 0.0) {
        fVar6 = fVar2;
      }
      *(undefined4 *)(puVar5 + 0x17) = 0;
      fVar24 = -3.1415925 - fVar16;
      if ((-3.1415925 - fVar16) - fVar1 < 0.0) {
        fVar24 = fVar1;
      }
      fVar16 = fVar6 * fVar6;
      fVar2 = fVar24 * fVar24;
      fVar7 = fVar16 * fVar16 * fVar6;
      fVar1 = fVar2 * fVar2 * fVar24;
      fVar9 = fVar16 * fVar7;
      fVar8 = fVar2 * fVar1;
      *(float *)((int)puVar5 + 0xb4) =
           fVar16 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar16 * fVar6 * -0.16666657 + fVar6;
      *(float *)(puVar5 + 0x16) =
           fVar2 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar1 * 0.0083330255 + fVar2 * fVar24 * -0.16666657 + fVar24;
      *(f32 *)(puVar5 + 0x18) = (victim->pos).x;
      *(f32 *)((int)puVar5 + 0xc4) = (victim->pos).y;
      fVar24 = (victim->pos).z;
      *(float *)(puVar5 + 0x19) = fVar24;
      *(f32 *)((int)puVar5 + 0xcc) = (victim->pos).w;
      *(float *)(puVar5 + 0x19) = fVar24 + 0.75;
      mobyutil::CollDamageMobyDirect
                (1.0,victim,moby,1,0x313114,(float *)(puVar5 + 0x18),(float *)(puVar5 + 0x16));
      fVar24 = kv[2].zBounceDamp;
    }
    fVar24 = mobyutil::g_FrameTime * 12.0 + fVar24;
    if (10.0 < fVar24) {
      kv[2].zBounceDamp = 0.0;
      return;
    }
    kv[2].zBounceDamp = fVar24;
    RegisterFuncForMoby(&PTR_M246_00312d38_0070bc18,moby);
  }
  RegisterFuncForMoby(&PTR_M246_00312b68_0070bc10,moby);
  return;
}



//==== 0031453c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M247_0031453c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M247_0031453c(void)

{
  DAT_007ff9ec = 0x10000;
  return;
}



//==== 00314550  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M247_00314550(void)
// callers(0): 
// callees(2): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement

ulonglong mobyupdate_helpers::M247_00314550(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    draw::LetterBoxOn = 0;
    boot::SceneScreenFade = 0.0;
    camera::camera5::Camera_DeactivateMobyDrivenCam(3);
  }
  uVar1 = (ulonglong)hero::g_heroStateType;
  if (hero::g_heroStateType == 0x13) {
    iVar2 = hero::TransitionMovement(0,1);
    uVar1 = (ulonglong)iVar2;
  }
  return uVar1;
}



//==== 003145bc  ns=mobyupdate_helpers  size=0x70
// sig: undefined M247_003145bc(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M247_003145bc(void)

{
  undefined8 uVar1;
  
  if ((DAT_0096bd90 == '\0') &&
     ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) {
    uVar1 = 1;
  }
  else if ((DAT_0096bd90 == '\0') ||
          ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00314648  ns=mobyupdate_helpers  size=0x1b4
// sig: undefined M247_00314648(void)
// callers(1): 00314818 mobyupdate_unsorted::UpdateMoby_247
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0012ab08 partupd::SpawnPart_35; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M247_00314648(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  Vec4 VStack_50;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  longlong local_30;
  
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = fastfunc::FastDecTimerS32(iVar3 + 4);
  if (iVar4 != 0) {
    mobyfunc::GetBonePosition(param_1,0,&VStack_50);
    dVar6 = (double)mobyutil::MB_randRangeFloat(mobyutil::g_FrameTime,mobyutil::g_FrameTime * 3.0);
    local_3c = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xd0);
    local_38 = *(float *)(param_1 + 0xd8);
    local_40 = 0.0;
    dVar7 = (double)SQRT(local_38 * local_38 + fVar2 * fVar2 + local_3c * local_3c);
    if (dVar7 == 0.0) {
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_3c = local_40;
      local_38 = local_40;
    }
    else {
      fVar1 = (float)(-dVar6 / dVar7);
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_40 = fVar2 * fVar1;
      local_38 = local_38 * fVar1;
      local_3c = local_3c * fVar1;
    }
    local_40 = DAT_00969de0 * 0.8 + local_40;
    local_3c = DAT_00969de4 * 0.8 + local_3c;
    dVar6 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -0.5,mobyutil::g_FrameTime * 2.0);
    local_38 = (float)((double)DAT_00969de8 + dVar6) + local_38;
    uVar5 = mobyutil::MB_randRange(0x5a,0x78);
    partupd::SpawnPart_35(&VStack_50,&local_40,2,uVar5);
    local_30 = (longlong)(int)(animationSpeed * 15.5);
    uVar5 = mobyutil::MB_randRange((int)(animationSpeed * 5.5),(int)(animationSpeed * 15.5));
    *(undefined4 *)(iVar3 + 4) = uVar5;
  }
  return;
}



//==== 00314818  ns=mobyupdate_unsorted  size=0x948
// sig: undefined UpdateMoby_247(MobyInstance * moby)
// callers(0): 
// callees(15): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0011dfe0 pad::PadRingBitsOn; 0015d12c sound::PlayMobySound; 00314648 mobyupdate_helpers::M247_00314648; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Removing unreachable block (ram,0x00314a50) */
/* Moby 247 */

void mobyupdate_unsorted::UpdateMoby_247(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  MobyInstance *pMVar7;
  int iVar8;
  undefined4 uVar9;
  u8 uVar10;
  double dVar11;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  longlong local_40;
  
  puVar3 = (undefined4 *)moby->pVar;
  if (DAT_0096ad94 == 3) {
    if (moby->state == '\x03') {
      draw::LetterBoxOn = 0;
      boot::SceneScreenFade = 0.0;
      camera::camera5::Camera_DeactivateMobyDrivenCam(3);
    }
    if (hero::g_heroStateType == 0x13) {
      hero::TransitionMovement(0,1);
    }
  }
  else {
    if (DAT_0096bd90 != '\0') {
      mobyupdate_helpers::M247_00314648(moby);
    }
    pMVar7 = MobyInstance;
    uVar10 = moby->state;
    if (uVar10 == '\x04') {
      uVar10 = '\x04';
      if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)) {
        iVar8 = fastfunc::FastDecTimerS32(puVar3);
        if (iVar8 == 0) {
          return;
        }
        uVar10 = moby->state;
      }
      if (uVar10 == '\x03') {
        draw::LetterBoxOn = 0;
        boot::SceneScreenFade = 0.0;
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      }
      if (hero::g_heroStateType == 0x13) {
        hero::TransitionMovement(0,1);
      }
    }
    else if (uVar10 == '\x03') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        draw::LetterBoxOn = 0;
        boot::SceneScreenFade = 0.0;
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
        if (hero::g_heroStateType == 0x13) {
          hero::TransitionMovement(0,1);
        }
      }
      else {
        bVar1 = moby->setByGroup;
        if (bVar1 == 0) {
          mobyutil::Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade);
          if (0x3f7fffff <
              (int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade)
                   - ((int)boot::SceneScreenFade >> 0x1f))) {
            moby->setByGroup = '\x01';
            camera::camera5::Camera_SetMobyDrivenTargetPos(&Cuboids[puVar3[2]].pos.x);
            camera::camera5::Camera_SetMobyDrivenTargetRot(&Cuboids[puVar3[2]].rot.x);
            draw::LetterBoxOn = 1;
          }
        }
        else if (bVar1 < 2) {
          uVar5 = puVar3[4];
          if ((uVar5 == 0) && (0 < (int)boot::SceneScreenFade)) {
            mobyutil::Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
          else if ((int)(((uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5) - ((int)uVar5 >> 0x1f)) <
                   0x3f800000) {
            mobyutil::OrganicDelt
                      (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,mobyutil::g_FrameTime * 0.5,
                       (float *)(puVar3 + 4),0x3147fc,(float *)(puVar3 + 5));
            iVar8 = puVar3[2];
            iVar6 = puVar3[3];
            local_60 = Cuboids[iVar8].pos.x;
            fVar2 = (float)puVar3[4];
            local_54 = Cuboids[iVar6].pos.w;
            local_60 = fVar2 * (Cuboids[iVar6].pos.x - local_60) + local_60;
            local_5c = fVar2 * (Cuboids[iVar6].pos.y - Cuboids[iVar8].pos.y) + Cuboids[iVar8].pos.y;
            local_58 = fVar2 * (Cuboids[iVar6].pos.z - Cuboids[iVar8].pos.z) + Cuboids[iVar8].pos.z;
            local_44 = 0;
            local_48 = 0.0;
            local_4c = 0.0;
            local_50 = 0.0;
            dVar11 = (double)fastfunc::FastDiffRots
                                       ((double)Cuboids[iVar6].rot.y,(double)Cuboids[iVar8].rot.y);
            local_4c = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)fastfunc::FastWrapRot(Cuboids[puVar3[2]].rot.y,local_4c);
            local_4c = (float)dVar11;
            dVar11 = (double)fastfunc::FastDiffRots
                                       ((double)Cuboids[puVar3[3]].rot.z,
                                        (double)Cuboids[puVar3[2]].rot.z);
            local_48 = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)fastfunc::FastWrapRot(Cuboids[puVar3[2]].rot.z,local_48);
            local_48 = (float)dVar11;
            camera::camera5::Camera_SetMobyDrivenTargetPos(&local_60);
            camera::camera5::Camera_SetMobyDrivenTargetRot(&local_50);
          }
          else if ((int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^
                         (uint)boot::SceneScreenFade) - ((int)boot::SceneScreenFade >> 0x1f)) <
                   0x3f800000) {
            mobyutil::Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
          else {
            moby->setByGroup = '\x02';
            draw::LetterBoxOn = 0;
            camera::camera5::Camera_DeactivateMobyDrivenCam(3);
          }
        }
        else if (bVar1 < 3) {
          if ((int)boot::SceneScreenFade < 1) {
            moby->state = '\x01';
            hero::TransitionMovement(0x3a,0);
            hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x48,0);
          }
          else {
            mobyutil::Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
        }
      }
    }
    else if (uVar10 == '\x02') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        if (hero::g_heroStateType == 0x13) {
          hero::TransitionMovement(0,1);
        }
      }
      else if ((DAT_0096a778 & 2) != 0) {
        piVar4 = *(int **)(g_standingOnMoby + 0x78);
        iVar8 = *piVar4;
        hero::TransitionMovement(0x39,0);
        hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x47,0);
        sound::PlayMobySound(0,0,moby);
        if (DAT_0096bd90 == '\0') {
          DAT_0096bd90 = '\x01';
          sound::PlayMobySound(1,0,moby);
          pMVar7[iVar8].setByGroup = '\b';
        }
        else {
          DAT_0096bd90 = '\0';
          sound::PlayMobySound(2,0,moby);
          pMVar7[iVar8].setByGroup = '\x04';
        }
        if ((piVar4[1] == -1) || (piVar4[2] == -1)) {
          moby->state = '\x04';
          uVar9 = fastfunc::FastDoubleToInt((double)(DAT_007ffa10 * animationSpeed));
          *puVar3 = uVar9;
        }
        else {
          moby->state = '\x03';
          moby->setByGroup = '\0';
          puVar3[4] = 0;
          camera::SetCameraPosition(0x951500,0x951510,1,0,0);
          if (DAT_0096bd90 == '\0') {
            puVar3[3] = piVar4[1];
            puVar3[2] = piVar4[2];
          }
          else {
            puVar3[2] = piVar4[1];
            puVar3[3] = piVar4[2];
          }
        }
      }
    }
    else if (uVar10 == '\x01') {
      local_40 = (longlong)(int)(animationSpeed * 8.5);
      iVar8 = pad::PadRingBitsOn(DAT_0096ad80,(int)(animationSpeed * 8.5),(int *)0x0);
      if ((((iVar8 != 0) && ((g_downButtons & DAT_0096ad80) != 0)) && (g_standingOnMoby != 0)) &&
         ((g_framesNotGrounded == 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)))) {
        if ((((DAT_0096bd90 == '\0') &&
             ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) ||
            ((DAT_0096bd90 != '\0' &&
             ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) != 0)))) &&
           ((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)))) {
          moby->state = '\x02';
          hero::TransitionMovement(0x38,0);
          hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x46,0);
        }
      }
    }
    else if ((uVar10 == '\0') && ((moby->field43_0x70 & 2U) != 0)) {
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00315160  ns=mobyupdate_helpers  size=0x14
// sig: undefined M248_00315160(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M248_00315160(void)

{
  DAT_007ffa64 = 0x10000;
  return;
}



//==== 00315198  ns=Global  size=0x2e8
// sig: undefined FUN_00315198(void)
// callers(3): 00189bd8 mobyupdate_unsorted::UpdateMoby_1022; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00346610 mobyupdate_unsorted::UpdateMoby_333
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_00315198(undefined4 param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xc0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1a] = in_LR;
  puVar8[0x14] = unaff_r28;
  puVar8[0x16] = unaff_r30;
  puVar8[0x15] = unaff_r29;
  puVar8[0x17] = unaff_r31;
  puVar8[0x13] = unaff_r27;
  pMVar13 = mobyfunc::CreateMoby(BOMB_00F8);
  if (pMVar13 != (MobyInstance *)0x0) {
    pvVar4 = pMVar13->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x30) = param_1;
    auVar21 = loadVectorLeftIndexed(in_LR,0x315178);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x20,
                       ZEXT48(pvVar4));
    *(undefined4 *)((int)pvVar4 + 0x20U & 0xfffffffc) = uVar7;
    *(undefined4 *)((int)pvVar4 + 0x24) = 0;
    *(undefined4 *)((int)pvVar4 + 0x2c) = 0x3f800000;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    *(float *)((int)pvVar4 + 0x10) = *param_3;
    *(float *)((int)pvVar4 + 0x14) = param_3[1];
    *(float *)((int)pvVar4 + 0x18) = param_3[2];
    *(float *)((int)pvVar4 + 0x1c) = param_3[3];
    dVar20 = (double)mobyutil::MB_randRangeFloat(-180.0,180.0);
    (pMVar13->rotation).x = (float)(dVar20 * 0.01745329238474369);
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar8 + 0xe) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar14 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar17 = uVar11 - 0xb0;
      lVar16 = uVar11 - 0x4c;
      lVar15 = uVar11 - 0x3c;
      lVar19 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = fVar5;
      *(float *)(puVar8 + 0xf) = fVar5;
      *(float *)((int)puVar8 + 0x7c) = fVar5;
      *(float *)((int)puVar8 + 0x74) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar3;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar5 * fVar5;
        iVar9 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x4c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar15 = lVar17;
      lVar16 = lVar12;
      do {
        fVar5 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x74) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar13->rotation).z = fVar1 + 1.5707964;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 003154d8  ns=mobyupdate_unsorted  size=0xb30
// sig: undefined UpdateMoby_248(MobyInstance * moby)
// callers(0): 
// callees(16): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00106150 mobyutil::MB_RegisterLameShadow; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 248 */

void mobyupdate_unsorted::UpdateMoby_248(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined4 local_60 [4];
  longlong local_50;
  
  lVar12 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar15 = ZEXT48(pvVar6);
  if ((((moby->state != '7') &&
       (iVar14 = collproc::CollSphere(0x3fe0000000000000,lVar12 + 0x10,&DAT_00315480,0x11,lVar12),
       iVar14 != 0)) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((CollOutput.pMoby != *(MobyInstance **)((int)pvVar6 + 0x30) ||
      (*(int *)((int)pvVar6 + 0x24) != 0)))) {
    moby->state = (char)((LZCOUNT(-((byte)moby->setByGroup & 2)) << 0x3a) >> 0x3f) + 'c';
    (moby->pos).x = CollOutput.ip.x;
    (moby->pos).y = CollOutput.ip.y;
    (moby->pos).z = CollOutput.ip.z;
    (moby->pos).w = CollOutput.ip.w;
    fastfunc::FastVecNormalize(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
    fVar2 = *(float *)((int)pvVar6 + 0x14);
    fVar3 = *(float *)((int)pvVar6 + 0x10);
    fVar4 = *(float *)((int)pvVar6 + 0x18);
    fVar5 = 0.0;
    fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar8 = (mobyutil::g_FrameTime * 2.0) / fVar11;
    fVar10 = fVar5;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = fVar3 * fVar8;
    }
    fVar9 = fVar5;
    if (0.0 - fVar11 < 0.0) {
      fVar9 = fVar2 * fVar8;
    }
    if (0.0 - fVar11 < 0.0) {
      fVar5 = fVar4 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar8;
    }
    *(float *)((int)pvVar6 + 0x10) = fVar10;
    *(float *)((int)pvVar6 + 0x14) = fVar9;
    *(float *)((int)pvVar6 + 0x18) = fVar5;
  }
  uVar1 = moby->state;
  if (uVar1 == 'c') {
    sound::PlayMobySound(0,0,moby);
    collproc::CollMobySphere(0x3ff0000000000000,lVar12 + 0x10,0x3f800000,0x10,lVar12,local_90);
    mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar12,lVar12 + 0x10);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == 'b') {
    sound::PlayMobySound(0,0,moby);
    uVar26 = 0x3ff0000000000000;
    uVar24 = 0;
    collproc::CollMobySphere(0x3ff0000000000000,lVar12 + 0x10,0x3f800000,0x10,lVar12,local_c0);
    mobyutil::MB_genericExplosion
              (uVar24,uVar24,0x4008000000000000,0x3ffb333340000000,0x4010000000000000,uVar26,
               0x401c000000000000,lVar12,&DAT_00a15d30,0,7,0xffffffffffffffff,7,10,0x14);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (uVar1 == '\x02') {
      iVar14 = fastfunc::FastDecTimerS32(uVar15 + 0x20);
      if (iVar14 == 0) {
        iVar14 = *(int *)((int)pvVar6 + 0x20);
        local_50 = (longlong)(int)(animationSpeed * 60.5);
        if (((iVar14 == (int)(animationSpeed * 60.5)) ||
            (local_50 = (longlong)(int)(animationSpeed * 40.5),
            iVar14 == (int)(animationSpeed * 40.5))) ||
           (local_50 = (longlong)(int)(animationSpeed * 20.5),
           iVar14 == (int)(animationSpeed * 20.5))) {
          *(undefined1 *)((int)pvVar6 + 7) = 0xfa;
          mobyutil::MB_UpdateLightsTransition(lVar12,uVar15);
        }
      }
      else {
        moby->state = 'c';
      }
      mobyutil::MB_ColorDyingMoby(lVar12,uVar15);
    }
    else if (uVar1 == '\x01') {
      dVar16 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).x,
                                  SQRT(*(float *)((int)pvVar6 + 0x18) *
                                       *(float *)((int)pvVar6 + 0x18) +
                                       *(float *)((int)pvVar6 + 0x10) *
                                       *(float *)((int)pvVar6 + 0x10) +
                                       *(float *)((int)pvVar6 + 0x14) *
                                       *(float *)((int)pvVar6 + 0x14)) * 0.5);
      iVar14 = *(int *)((int)pvVar6 + 0x24);
      (moby->rotation).x = (float)dVar16;
      if (iVar14 == 0) {
        local_60[0] = 0x2fffffff;
        local_60[3] = 0x2f004fff;
        local_60[1] = 0x2f00ffff;
        local_60[2] = 0x2f007fff;
        dVar23 = -1.0;
        dVar16 = 1.0;
        mobyutil::MB_randRangeFloat(-1.0,1.0);
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar16);
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar16);
        lVar13 = mobyutil::MB_randInt(4);
        local_50 = (longlong)(int)(animationSpeed * 45.5);
        partupd::SpawnPart_4
                  (lVar12 + 0x10,local_d0,*(undefined4 *)((int)local_60 + (int)(lVar13 << 2)),0x4fff
                   ,(int)(animationSpeed * 45.5),0x32,0x78,1);
      }
      dVar16 = 0.1599999964237213;
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x10);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x18);
      *(float *)((int)pvVar6 + 0x18) =
           -(DAT_007ffa88 * DAT_0071f418 - *(float *)((int)pvVar6 + 0x18));
      iVar14 = collproc::CollLine(local_f0,local_e0,0,lVar12,0);
      if (iVar14 == 0) {
        iVar14 = fastfunc::FastDecTimerS32(uVar15 + 0x20);
        if (iVar14 != 0) {
          moby->state = (char)((LZCOUNT(-((byte)moby->setByGroup & 2)) << 0x3a) >> 0x3f) + 'c';
        }
      }
      else if (CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < CollOutput.poly) {
          if ((moby->setByGroup & 1U) == 0) {
            moby->state = 'b';
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            fastfunc::FastVecNormalize(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
            fVar2 = *(float *)((int)pvVar6 + 0x14);
            fVar3 = *(float *)((int)pvVar6 + 0x10);
            fVar4 = *(float *)((int)pvVar6 + 0x18);
            fVar5 = 0.0;
            fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar8 = (mobyutil::g_FrameTime * 2.0) / fVar11;
            fVar10 = fVar5;
            if (0.0 - fVar11 < 0.0) {
              fVar10 = fVar3 * fVar8;
            }
            fVar9 = fVar5;
            if (0.0 - fVar11 < 0.0) {
              fVar9 = fVar2 * fVar8;
            }
            if (0.0 - fVar11 < 0.0) {
              fVar5 = fVar4 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar10 = fVar3 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar9 = fVar2 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar5 = fVar4 * fVar8;
            }
            *(float *)((int)pvVar6 + 0x10) = fVar10;
            *(float *)((int)pvVar6 + 0x14) = fVar9;
            *(float *)((int)pvVar6 + 0x18) = fVar5;
          }
          else {
            sound::PlayMobySound(1,0,moby);
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            dVar23 = (double)CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            (moby->pos).z = (float)(dVar23 + dVar16);
            fastfunc::FastVecNormalize(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
            dVar20 = 0.0;
            dVar25 = (double)(CollOutput.normal.z * *(float *)((int)pvVar6 + 0x10) -
                             CollOutput.normal.x * *(float *)((int)pvVar6 + 0x18));
            dVar22 = (double)(CollOutput.normal.y * *(float *)((int)pvVar6 + 0x18) -
                             CollOutput.normal.z * *(float *)((int)pvVar6 + 0x14));
            dVar21 = (double)(CollOutput.normal.x * *(float *)((int)pvVar6 + 0x14) -
                             CollOutput.normal.y * *(float *)((int)pvVar6 + 0x10));
            dVar16 = (double)mobyutil::MB_randRangeFloat
                                       (mobyutil::g_FrameTime * -1.5,mobyutil::g_FrameTime * 1.5);
            fVar2 = mobyutil::g_FrameTime;
            auVar27 = ZEXT416(0xffffffff);
            auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
            dVar18 = (double)SQRT((float)(dVar21 * dVar21 +
                                         (double)(float)(dVar22 * dVar22 +
                                                        (double)(float)(dVar25 * dVar25))));
            *(int *)((int)pvVar6 + 0x24) = *(int *)((int)pvVar6 + 0x24) + 1;
            auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
            dVar23 = (double)(float)(dVar16 / dVar18);
            dVar16 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar16 = (double)(float)(dVar25 * dVar23);
            }
            dVar19 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar19 = (double)(float)(dVar22 * dVar23);
            }
            dVar17 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar17 = (double)(float)(dVar21 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar16 = (double)(float)(dVar25 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar19 = (double)(float)(dVar22 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar17 = (double)(float)(dVar21 * dVar23);
            }
            fVar3 = (float)((double)*(float *)((int)pvVar6 + 0x14) + dVar16) * 0.4;
            fVar4 = (float)((double)*(float *)((int)pvVar6 + 0x10) + dVar19) * 0.4;
            fVar5 = (float)((double)*(float *)((int)pvVar6 + 0x18) + dVar17) * 0.4;
            *(float *)((int)pvVar6 + 0x14) = fVar3;
            *(float *)((int)pvVar6 + 0x10) = fVar4;
            *(float *)((int)pvVar6 + 0x18) = fVar5;
            auVar28 = loadVectorLeftIndexed(0x28,0x315480);
            auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar27 = vectorMultiplyAddFloatingPoint
                                (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 |
                                         auVar28 << 0x60,auVar27);
            auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
            auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x20,
                               uVar15);
            *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar7;
            if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < fVar2) {
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              moby->state = '\x02';
              auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = loadVectorLeftIndexed(0x2c,0x315480);
              auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar28 = vectorMultiplyAddFloatingPoint
                                  (auVar30,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                           auVar27 << 0x60,auVar28);
              auVar27 = ZEXT416(0xffffffff);
              auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = ZEXT416(0xffffffff);
              auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
              auVar34 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
              auVar31 = vectorConvertFromSignedFixedPointWord(auVar27,0);
              auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x20,
                                 uVar15);
              *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar7;
              auVar27 = loadVectorLeftIndexed(4,0x315480);
              auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = vectorReciprocalEstimateFloatingPoint(auVar31);
              auVar28 = loadVectorLeftIndexed(0x30,0x315480);
              auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar31,auVar30);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar33,auVar29);
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar33 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar30);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar32);
              auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar30);
              auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar34);
              auVar27 = vectorMultiplyAddFloatingPoint
                                  (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 |
                                           auVar28 << 0x60,auVar33);
              auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x28,
                                 uVar15);
              *(undefined4 *)((int)pvVar6 + 0x28U & 0xfffffffc) = uVar7;
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              *(undefined4 *)((int)pvVar6 + 0x14) = 0;
              *(undefined4 *)((int)pvVar6 + 0x10) = 0;
            }
          }
        }
      }
      else if ((CollOutput.pMoby != *(MobyInstance **)((int)pvVar6 + 0x30)) ||
              (*(int *)((int)pvVar6 + 0x24) != 0)) {
        moby->state = (char)((LZCOUNT(-((byte)moby->setByGroup & 2)) << 0x3a) >> 0x3f) + 'c';
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        fastfunc::FastVecNormalize(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
        fVar2 = *(float *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)((int)pvVar6 + 0x10);
        fVar4 = *(float *)((int)pvVar6 + 0x18);
        fVar5 = 0.0;
        fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar8 = (mobyutil::g_FrameTime * 2.0) / fVar11;
        fVar10 = fVar5;
        if (0.0 - fVar11 < 0.0) {
          fVar10 = fVar3 * fVar8;
        }
        fVar9 = fVar5;
        if (0.0 - fVar11 < 0.0) {
          fVar9 = fVar2 * fVar8;
        }
        if (0.0 - fVar11 < 0.0) {
          fVar5 = fVar4 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar10 = fVar3 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar9 = fVar2 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar5 = fVar4 * fVar8;
        }
        *(float *)((int)pvVar6 + 0x10) = fVar10;
        *(float *)((int)pvVar6 + 0x14) = fVar9;
        *(float *)((int)pvVar6 + 0x18) = fVar5;
      }
    }
    mobyutil::MB_RegisterLameShadow(0.2,moby);
  }
  return;
}



//==== 00316008  ns=mobyupdate_helpers  size=0x14
// sig: undefined M249_00316008(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M249_00316008(void)

{
  DAT_007ffad8 = 0x10000;
  return;
}



//==== 00316050  ns=mobyupdate_unsorted  size=0x59c
// sig: undefined UpdateMoby_249(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 00110b70 mobyutil::MB_IsPntInCuboid; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

/* Moby 249 */

void mobyupdate_unsorted::UpdateMoby_249(MobyInstance *moby)

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
  float *pfVar10;
  Cuboid *pCVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int iVar17;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [40];
  
  pfVar10 = (float *)moby->pVar;
  pCVar11 = Cuboids + (int)pfVar10[3];
  fVar1 = (pCVar11->matrix).v0.y;
  fVar2 = (pCVar11->matrix).v1.y;
  fVar3 = (pCVar11->matrix).v0.x;
  fVar4 = (pCVar11->matrix).v1.x;
  fVar5 = (pCVar11->matrix).v2.y;
  fVar6 = (pCVar11->matrix).v0.z;
  fVar7 = (pCVar11->matrix).v1.z;
  fVar8 = (pCVar11->matrix).v2.x;
  fVar9 = (pCVar11->matrix).v2.z;
  iVar17 = fastfunc::FastDoubleToInt
                     ((double)(DAT_007ffb18 *
                              (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar1 * fVar1) +
                               SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2) +
                              SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5))));
  iVar18 = 0;
  if (0 < iVar17) {
    dVar20 = -1.0;
    dVar21 = 1.0;
    dVar22 = 1.2000000476837158;
    do {
      mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
      mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
      mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
      puVar13 = PTR_DAT_007ffb00;
      uVar12 = DAT_007ffafc;
      dVar19 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb04,(float)(longlong)(DAT_007ffb04 << 1)
                                 );
      uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      dVar19 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb08,
                                  (float)((double)(longlong)DAT_007ffb08 * dVar22));
      uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      dVar19 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)DAT_007ffb0c,
                                  (float)((double)(longlong)DAT_007ffb0c * dVar22));
      uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
      partupd::SpawnPart_2(local_a0,local_c0,local_b0,uVar12,puVar13,uVar14,uVar15,uVar16);
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar17);
  }
  iVar17 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[3]);
  if (iVar17 != 0) {
    fVar1 = Cuboids[(int)pfVar10[3]].rot.z + 1.5707963;
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
    DAT_00969dd0 = *pfVar10 * mobyutil::g_FrameTime *
                   (fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) + DAT_00969dd0;
    fVar1 = Cuboids[(int)pfVar10[3]].rot.z;
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
    DAT_00969dd4 = *pfVar10 * mobyutil::g_FrameTime *
                   (fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) + DAT_00969dd4;
  }
  return;
}



//==== 003165ec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M249_003165ec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M249_003165ec(void)

{
  DAT_007ffb68 = 0x10000;
  return;
}



//==== 00316620  ns=mobyupdate_unsorted  size=0x328
// sig: undefined UpdateMoby_25(MobyInstance * moby)
// callers(0): 
// callees(5): 00054670 camera::Camera_CreateReticule; 00057820 collproc::CollLine; 000f1ec8 mobyfunc::SetColorOfMoby; 000fe610 mobyutil::MB_SphericalToVector; 005026a0 fastfunc::FastSubRots

/* Moby 25 */

void mobyupdate_unsorted::UpdateMoby_25(MobyInstance *moby)

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
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x1a] = in_LR;
  puVar6[0x17] = in_f31;
  puVar6[0x16] = unaff_r31;
  puVar6[0x15] = unaff_r30;
  mobyutil::MB_SphericalToVector(127.9,0.95,0.71,&(moby->pos).x);
  (moby->pos).x = (moby->pos).x + GameCamera.posX;
  (moby->pos).y = (moby->pos).y + GameCamera.posY;
  (moby->pos).z = (moby->pos).z + GameCamera.posZ;
  mobyfunc::SetColorOfMoby(moby,0x7f,0,0);
  camera::Camera_CreateReticule(moby);
  fVar11 = GameCamera.rot.radius;
  fVar5 = GameCamera.posZ;
  if (DAT_00951784 == 1) {
    fVar3 = *(float *)(camera::Reticule + 0x10) - GameCamera.posX;
    fVar4 = *(float *)(camera::Reticule + 0x14) - GameCamera.posY;
    fVar1 = *(float *)(camera::Reticule + 0x18);
    fVar7 = GameCamera.posY - *(float *)(camera::Reticule + 0x14);
    fVar2 = GameCamera.posX - *(float *)(camera::Reticule + 0x10);
    fVar8 = ABS(fVar3);
    fVar9 = ABS(fVar4);
    *(float *)(puVar6 + 0xe) = fVar3;
    fVar5 = fVar5 - fVar1;
    *(float *)((int)puVar6 + 0x74) = fVar4;
    *(float *)(puVar6 + 0xf) = fVar8 - fVar9;
    fVar1 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    dVar22 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar7 * fVar7);
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    if (0.0 < fVar3) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x34;
      lVar17 = uVar12 - 0x44;
      lVar20 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
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
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x44;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar10 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    dVar21 = (double)fastfunc::FastSubRots(fVar11,fVar1);
    if (((dVar22 < 480.0) && (dVar21 < 1.5707963705062866)) &&
       (iVar15 = collproc::CollLine(0x951500,camera::Reticule + 0x10,0x84,camera::Reticule,0),
       iVar15 == 0)) {
      DAT_00951788 = 0x3f800000;
    }
  }
  return;
}



//==== 00316950  ns=mobyupdate_unsorted  size=0x240
// sig: undefined UpdateMoby_250(MobyInstance * moby)
// callers(0): 
// callees(2): 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 004fff60 fastfunc::FastDecTimerS32

/* Moby 250 */

void mobyupdate_unsorted::UpdateMoby_250(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  u16 *puVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar6 = (u16 *)0x0;
  piVar3 = (int *)moby->pVar;
  uVar7 = ZEXT48(piVar3);
  uVar1 = moby->state;
  bVar2 = moby->field43_0x70;
  if (g_heroType != '\x02') {
    puVar6 = moby->pClass->collision;
  }
  moby->collision = puVar6;
  if (uVar1 == '\a') {
    if ((bVar2 & 2) != 0) {
      moby->state = '\0';
      mobyutil::MB_SetAnimationNoBlend(moby,0,0);
    }
  }
  else if (uVar1 == '\x06') {
    iVar5 = fastfunc::FastDecTimerS32(uVar7 + 8);
    if (iVar5 != 0) {
      mobyutil::MB_SetAnimationNoBlend(moby,3,0);
      moby->state = '\a';
    }
  }
  else if (uVar1 == '\x05') {
    if ((bVar2 & 2) != 0) {
      moby->state = '\x06';
      mobyutil::MB_SetAnimationNoBlend(moby,2,0);
    }
  }
  else if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x14) {
        mobyutil::MB_SetAnimationNoBlend(moby,0,0);
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      if ((bVar2 & 2) != 0) {
        moby->state = '\x03';
        mobyutil::MB_SetAnimationNoBlend(moby,2,0);
      }
    }
    else if (uVar1 == '\x01') {
      iVar5 = fastfunc::FastDecTimerS32(uVar7 + 8);
      if (iVar5 != 0) {
        moby->state = '\x02';
        mobyutil::MB_SetAnimationNoBlend(moby,1,0);
      }
    }
    else if (((uVar1 == '\0') && (*piVar3 != 0)) &&
            (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x14)) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      moby->state = '\x01';
      auVar10 = loadVectorLeftIndexed(4,uVar7);
      auVar8 = loadVectorRightIndexed(0x14,uVar7);
      auVar9 = loadVectorLeftIndexed(in_LR,0x316948);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar8,0);
      auVar10 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
      auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,uVar7);
      *(undefined4 *)((uint)(piVar3 + 2) & 0xfffffffc) = uVar4;
    }
  }
  return;
}



//==== 00316b98  ns=mobyupdate_helpers  size=0xbc
// sig: undefined M251_CheckPlasmabotHatchAvailability(void)
// callers(1): 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(1): 000fdcf0 mobyutil::MB_SetAnimationNoBlend

undefined8 mobyupdate_helpers::M251_CheckPlasmabotHatchAvailability(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  undefined8 in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = 0;
  pMVar3 = MobyInstance + param_1;
  pvVar1 = pMVar3->pVar;
  if (pMVar3->state == '\0') {
    pMVar3->state = '\x05';
    mobyutil::MB_SetAnimationNoBlend(pMVar3,1,0);
  }
  else if (pMVar3->state == '\x06') {
    uVar4 = 1;
  }
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar5 = loadVectorLeftIndexed(in_LR,0x316b90);
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,8,ZEXT48(pvVar1));
  *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  return uVar4;
}



//==== 00316c54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M251_00316c54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M251_00316c54(void)

{
  DAT_007ffbd8 = 0x10000;
  return;
}



//==== 00316c68  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M251_00316c68(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M251_00316c68
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  undefined4 *puVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar5 = mobyfunc::CreateMoby(0xfb);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = *(char *)(param_1 + 0x30);
    puVar4 = (undefined4 *)pMVar5->pVar;
    bVar1 = *(byte *)(param_1 + 0x30);
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar5->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_1 + 0x40);
    (pMVar5->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_1 + 0x44);
    (pMVar5->rotation).x = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar5->rotation).y = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x4c);
    (pMVar5->rotation).z = fVar2;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    (pMVar5->rotation).w = fVar3;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar5->pos).x = fStack00000040;
    (pMVar5->pos).z = fStack00000048;
    pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
    pMVar5->light = (int)uVar6;
    mobyfunc::UpdateMobyTransform(pMVar5);
    puVar4[1] = param_1;
    *puVar4 = 0xffffffff;
  }
  return pMVar5;
}



//==== 00316d60  ns=mobyupdate_unsorted  size=0x50
// sig: undefined UpdateMoby_251(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 251 */

void mobyupdate_unsorted::UpdateMoby_251(MobyInstance *moby)

{
  char cVar1;
  int iVar2;
  
  if ((moby->pVar != (void *)0x0) &&
     (((iVar2 = *(int *)((int)moby->pVar + 4), iVar2 == 0 ||
       (cVar1 = *(char *)(iVar2 + 0x20), cVar1 == -2)) || (cVar1 == -3)))) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00316de0  ns=mobyupdate_helpers  size=0x2fc
// sig: undefined M252_00316de0(void)
// callers(1): 00317338 mobyupdate_unsorted::UpdateMoby_252
// callees(2): 00055ac0 stub::STUB_00055ac0_RET_0; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M252_00316de0(int param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_30 [16];
  
  iVar9 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar9 + 0x44);
  fVar3 = *(float *)(iVar9 + 0x40);
  fVar4 = *(float *)(iVar9 + 0x48);
  dVar14 = 3.0;
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = mobyutil::g_FrameTime * 3.0;
  fVar5 = -(DAT_0071f418 * 6.0 - fVar1);
  if ((fVar5 <= fVar6) && (fVar6 = fVar5, fVar5 < 0.0)) {
    fVar6 = 0.0;
  }
  fVar6 = fVar6 / fVar1;
  fVar5 = 0.0;
  fVar8 = fVar5;
  if (0.0 - fVar1 < 0.0) {
    fVar8 = fVar2 * fVar6;
  }
  fVar7 = fVar5;
  if (0.0 - fVar1 < 0.0) {
    fVar7 = fVar3 * fVar6;
  }
  if (0.0 - fVar1 < 0.0) {
    fVar5 = fVar4 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar8 = fVar2 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar7 = fVar3 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar6;
  }
  *(float *)(iVar9 + 0x44) = fVar8;
  *(float *)(iVar9 + 0x40) = fVar7;
  *(float *)(iVar9 + 0x48) = fVar5;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar7;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar9 + 0x44);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar9 + 0x48);
  dVar10 = (double)fastfunc::FastWrapRot(*(float *)(iVar9 + 0x204),*(float *)(iVar9 + 0x20c));
  *(float *)(iVar9 + 0x204) = (float)dVar10;
  dVar12 = (double)(float)(3.141592502593994 - dVar10);
  if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
    dVar12 = dVar10;
  }
  dVar11 = (double)(float)(-3.141592502593994 - dVar10);
  if ((double)(float)(-3.141592502593994 - dVar10) - dVar12 < 0.0) {
    dVar11 = dVar12;
  }
  dVar10 = (double)(float)(dVar11 * dVar11);
  dVar13 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar11));
  dVar12 = (double)(float)(dVar10 * dVar13);
  fVar2 = *(float *)(iVar9 + 0x208) *
          ((float)(dVar10 * dVar12) * 2.601887e-06 +
          (float)(dVar12 * -0.0001980741071747616 +
                 (double)(float)(dVar13 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar10 * dVar11) *
                                                -0.16666656732559204 + dVar11)))) +
          *(float *)(iVar9 + 0x1c8);
  if (*(short *)(iVar9 + 0x216) != 0) {
    fVar2 = fVar2 + *(float *)(iVar9 + 0x200);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x18);
  fVar3 = (float)((double)mobyutil::g_FrameTime * dVar14);
  if ((fVar2 <= fVar3) &&
     (fVar4 = (float)((double)mobyutil::g_FrameTime * -3.0), fVar3 = fVar2, fVar2 < fVar4)) {
    fVar3 = fVar4;
  }
  *(float *)(iVar9 + 0x48) = fVar3;
  iVar9 = stub::STUB_00055ac0_RET_0(local_30,400,0,param_1,0);
  if (iVar9 != 0) {
    fVar3 = CollOutput.push.z - *(float *)(param_1 + 0x18);
    fVar2 = (float)((double)mobyutil::g_FrameTime * dVar14);
    fVar4 = CollOutput.push.y - *(float *)(param_1 + 0x14);
    if ((fVar3 <= fVar2) &&
       (fVar1 = (float)((double)mobyutil::g_FrameTime * -3.0), fVar2 = fVar3, fVar3 < fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + (CollOutput.push.x - *(float *)(param_1 + 0x10));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar4;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar2;
  }
  return;
}



//==== 003170e8  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M252_003170e8(void)
// callers(1): 00317338 mobyupdate_unsorted::UpdateMoby_252
// callees(4): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M252_003170e8(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar6 = mobyutil::MB_HandleDamage(param_1,uVar5,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != 'c')) {
    fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
    *(float *)((int)pvVar1 + 0x20) = fVar3;
    if (((double)fVar3 <= dVar7) || ((-1 < iVar6 && (iVar6 < 0xc)))) {
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      param_1->state = 'c';
    }
  }
  param_1->damage = -1;
  if (param_1->state != '\x04' && param_1->state != '\0') {
    dVar7 = 14.0;
    pSVar2 = Splines[*(int *)((int)pvVar1 + 0x21c)];
    iVar6 = mobyutil::MB_getTargetInArea
                      (0x402c000000000000,param_1,ZEXT48(pvVar1) + 0x170,pSVar2,0,0,pSVar2->points,
                       pSVar2->cnt);
    if ((iVar6 != 2) &&
       ((fVar3 = *(float *)((int)pvVar1 + 0x1c4) - *(float *)((int)pvVar1 + 0x174),
        fVar4 = *(float *)((int)pvVar1 + 0x1c0) - *(float *)((int)pvVar1 + 0x170),
        dVar7 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
        (3.0 < ABS(*(float *)((int)pvVar1 + 0x1c8) - *(float *)((int)pvVar1 + 0x178)))))) {
      *(undefined4 *)((int)pvVar1 + 0x1b4) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0x1b0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x1b0) = g_heroMobyPtr;
  }
  return;
}



//==== 00317338  ns=mobyupdate_unsorted  size=0x1804
// sig: undefined UpdateMoby_252(MobyInstance * moby)
// callers(0): 
// callees(23): 0006d720 RegisterFuncForMoby; 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010e030 mobyutil::MB_genericExplosion; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00316de0 mobyupdate_helpers::M252_00316de0; 003170e8 mobyupdate_helpers::M252_003170e8; 0048c188 FUN_0048c188; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 252 */

void mobyupdate_unsorted::UpdateMoby_252(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *victim;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 uVar23;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar21;
  undefined8 uVar20;
  uint uVar22;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
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
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 0x210;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar15;
  puVar9[0x44] = in_LR;
  puVar9[0x3d] = in_f27;
  puVar9[0x3e] = in_f28;
  puVar9[0x3f] = in_f29;
  puVar9[0x40] = in_f30;
  puVar9[0x41] = in_f31;
  puVar9[0x3c] = unaff_r31;
  puVar9[0x3b] = unaff_r30;
  pvVar8 = moby->pVar;
  puVar9[0x3a] = unaff_r29;
  mobyfunc::DoManipulator(0x400cccccc0000000,moby,2,(Manipulator *)((int)pvVar8 + 0x230));
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x16';
  }
  mobyupdate_helpers::M252_003170e8(lVar16);
  dVar36 = (double)*(float *)((int)pvVar8 + 0x170);
  *(undefined4 *)((int)pvVar8 + 0x218) = *(undefined4 *)((int)pvVar8 + 0x1b0);
  bVar3 = moby->state;
  dVar35 = (double)*(float *)((int)pvVar8 + 0x174);
  dVar34 = (double)*(float *)((int)pvVar8 + 0x178);
  dVar33 = (double)*(float *)((int)pvVar8 + 0x17c);
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (*(int *)((int)pvVar8 + 0x21c) == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        dVar33 = (double)mobyutil::MB_randRot();
        (moby->rotation).z = (float)dVar33;
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        dVar33 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar8 + 0x204) = (float)dVar33;
        uVar20 = 0x3fe0000000000000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar8 + 0x48) = 0;
        *(undefined4 *)((int)pvVar8 + 0x44) = 0;
        *(undefined4 *)((int)pvVar8 + 0x40) = 0;
        *(float *)((int)pvVar8 + 0x20c) = mobyutil::g_FrameTime * 2.0943952;
        uVar23 = fastfunc::FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar8 + 0x58) = uVar23;
        uVar23 = fastfunc::FastDoubleToInt(0x4023333340000000);
        *(undefined1 *)((int)pvVar8 + 0x5a) = uVar23;
        *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007ffc10;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,0);
        }
        fVar4 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar8 + 0x1c0) = fVar4;
        *(f32 *)((int)pvVar8 + 0x1c4) = (moby->pos).y;
        *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
        *(f32 *)((int)pvVar8 + 0x1cc) = (moby->pos).w;
        dVar33 = (double)mobyutil::GetGroundZ(uVar20,lVar16 + 0x10,0);
        dVar34 = (double)(moby->pos).z;
        if (dVar33 <= (double)(float)(dVar34 - 10.0)) {
          *(undefined2 *)((int)pvVar8 + 0x216) = 0;
        }
        else {
          dVar34 = (double)mobyutil::GetGroundZ(uVar20,lVar16 + 0x10,0);
          *(undefined2 *)((int)pvVar8 + 0x216) = 1;
        }
        *(float *)((int)pvVar8 + 0x1c8) = (float)dVar34;
        *(undefined4 *)((int)pvVar8 + 0x1f0) = *(undefined4 *)((int)pvVar8 + 0x1c0);
        *(undefined4 *)((int)pvVar8 + 500) = *(undefined4 *)((int)pvVar8 + 0x1c4);
        *(float *)((int)pvVar8 + 0x1f8) = (float)dVar34;
        *(undefined4 *)((int)pvVar8 + 0x1fc) = *(undefined4 *)((int)pvVar8 + 0x1cc);
        *(undefined1 *)((int)pvVar8 + 0x29) = 0;
      }
      else if (*(int *)((int)pvVar8 + 0x1b4) == 2) {
        if ((moby->field43_0x70 & 2U) != 0) {
          dVar34 = (double)mobyutil::MB_randRot();
          dVar35 = (double)mobyutil::MB_randRangeFloat(0.0,3.0);
          fVar1 = (float)(dVar34 + 1.570796251296997);
          dVar33 = (double)(float)(3.141592502593994 - dVar34);
          if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
            dVar33 = dVar34;
          }
          fVar2 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar2 = fVar1;
          }
          dVar36 = (double)(float)(-3.141592502593994 - dVar34);
          if ((double)(float)(-3.141592502593994 - dVar34) - dVar33 < 0.0) {
            dVar36 = dVar33;
          }
          fVar7 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
            fVar7 = fVar2;
          }
          dVar34 = (double)(float)(dVar36 * dVar36);
          fVar5 = fVar7 * fVar7;
          dVar30 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar36));
          fVar1 = fVar5 * fVar5 * fVar7;
          dVar33 = (double)(float)(dVar34 * dVar30);
          *(undefined4 *)((int)pvVar8 + 0x1f8) = *(undefined4 *)((int)pvVar8 + 0x1c8);
          *(undefined4 *)((int)pvVar8 + 0x1fc) = *(undefined4 *)((int)pvVar8 + 0x1cc);
          fVar2 = fVar5 * fVar1;
          *(float *)((int)pvVar8 + 500) =
               (float)((double)((float)(dVar34 * dVar33) * 2.601887e-06 +
                               (float)(dVar33 * -0.0001980741071747616 +
                                      (double)(float)(dVar30 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar34 * dVar36
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar36))
                                      )) * dVar35 + (double)*(float *)((int)pvVar8 + 0x1c4));
          *(float *)((int)pvVar8 + 0x1f0) =
               (float)((double)(fVar5 * fVar2 * 2.601887e-06 +
                               fVar2 * -0.0001980741 +
                               fVar1 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * dVar35
                      + (double)*(float *)((int)pvVar8 + 0x1c0));
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar16,2,0,6);
          }
          moby->state = '\a';
        }
      }
      else {
        *(undefined4 *)((int)pvVar8 + 0x200) = 0;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3dcccccd;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar16,2,0,6);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar3 < 3) {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      pfVar25 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar9 + 0x114) = fVar1;
      *(float *)(puVar9 + 0x23) = fVar2;
      *(float *)((int)puVar9 + 0x11c) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x11c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x23) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0x114));
      if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x23));
      if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0x84;
        lVar26 = uVar15 - 0x74;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x33) = fVar1;
        *(float *)(puVar9 + 0x32) = fVar1;
        *(float *)((int)puVar9 + 0x194) = fVar1;
        *(float *)((int)puVar9 + 0x18c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x32) = *(float *)(puVar9 + 0x32) * fVar5;
        *(float *)((int)puVar9 + 0x194) = *(float *)((int)puVar9 + 0x194) * fVar1;
        *(float *)(puVar9 + 0x33) = *(float *)(puVar9 + 0x33) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x18c) = *(float *)((int)lVar18 + 0x17c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x84;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x18c) = *(float *)((int)lVar18 + 0x18c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x18c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,pfVar25,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar33);
      iVar21 = *(int *)((int)pvVar8 + 0x218);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = DAT_0071f418 * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)(iVar21 + 0x14);
      fVar2 = (moby->pos).x - *(float *)(iVar21 + 0x10);
      if ((3.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1)) ||
         (2.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z))) {
        fVar1 = (float)(dVar35 - (double)*(float *)((int)pvVar8 + 0x1c4));
        fVar2 = (float)(dVar36 - (double)*(float *)((int)pvVar8 + 0x1c0));
        if ((15.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) ||
           (4.0 < ABS((float)((double)*(float *)((int)pvVar8 + 0x1c8) - dVar34)))) {
          *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
          *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar16,2,0,6);
          }
          moby->state = '\x03';
        }
      }
      else {
        iVar21 = sound::PlayMobySound(0,0,moby);
        *(short *)((int)pvVar8 + 0x214) = (short)iVar21;
        moby->state = '\x06';
      }
    }
    else if (bVar3 < 4) {
      fVar1 = *(float *)((int)pvVar8 + 0x1c0) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar8 + 0x1c4) - (moby->pos).y;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x21) = fVar1;
      *(float *)((int)puVar9 + 0x10c) = fVar2;
      *(float *)(puVar9 + 0x22) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x21));
      if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x10c));
      if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xa4;
        lVar26 = uVar15 - 0x94;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x2f) = fVar1;
        *(float *)(puVar9 + 0x2e) = fVar1;
        *(float *)((int)puVar9 + 0x174) = fVar1;
        *(float *)((int)puVar9 + 0x16c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5;
        *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar1;
        *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x16c) = *(float *)((int)lVar18 + 0x15c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xa4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x16c) = *(float *)((int)lVar18 + 0x16c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x16c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
      *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,0x3f000000,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar33);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = DAT_0071f418 * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1c4);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1c0);
      if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
         (3.9 <= ABS(*(float *)((int)pvVar8 + 0x1c8) - (moby->pos).z))) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,3);
        }
        moby->state = '\x01';
      }
    }
    else {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar9 + 0xfc) = fVar1;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar5 - fVar7;
      dVar30 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0xfc));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xc4;
        lVar26 = uVar15 - 0xb4;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x2b) = fVar1;
        *(float *)(puVar9 + 0x2a) = fVar1;
        *(float *)((int)puVar9 + 0x154) = fVar1;
        *(float *)((int)puVar9 + 0x14c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar5;
        *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar1;
        *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x13c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xc4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x14c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar21 + 0x14c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar30,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,
                 &DAT_003172b8,(int)pvVar8 + 0x210);
      dVar30 = (double)mobyfunc::BlendAnimFrame(moby);
      if (((moby->updateId == moby->animationId) && (9.0 <= dVar30)) && (dVar30 <= 14.0)) {
        dVar32 = (double)((float)(dVar30 - 9.0) * 0.2);
        *(float *)((int)pvVar8 + 0x1dc) = (float)(dVar32 * 0.3333333432674408);
        *(float *)((int)pvVar8 + 0x1ec) = (float)(dVar32 * 2.0) * 0.33333334;
        dVar28 = (double)mobyutil::MB_randRot();
        fVar1 = (float)(dVar28 + 1.570796251296997);
        dVar30 = (double)(float)(3.141592502593994 - dVar28);
        if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
          dVar30 = dVar28;
        }
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        dVar29 = (double)(float)(-3.141592502593994 - dVar28);
        if ((double)(float)(-3.141592502593994 - dVar28) - dVar30 < 0.0) {
          dVar29 = dVar30;
        }
        dVar30 = (double)(float)(dVar29 * dVar29);
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = fVar7 * fVar7;
        dVar28 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
        dVar31 = (double)(float)(dVar30 * dVar28);
        fVar5 = fVar11 * fVar11 * fVar7;
        fVar2 = fVar11 * fVar5;
        fVar1 = (float)((double)(((float)(dVar30 * dVar31) * 2.601887e-06 +
                                 (float)(dVar31 * -0.0001980741071747616 +
                                        (double)(float)(dVar28 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar30 * 
                                                  dVar29) * -0.16666656732559204 + dVar29)))) * 0.25
                                ) * dVar32);
        *(float *)((int)pvVar8 + 0x1e4) = fVar1;
        fVar2 = (float)((double)((fVar11 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar11 * fVar7 * -0.16666657 + fVar7) * 0.25
                                ) * dVar32);
        *(float *)((int)pvVar8 + 0x1d4) = fVar1;
        *(float *)((int)pvVar8 + 0x1e8) = fVar2;
        *(float *)((int)pvVar8 + 0x1d8) = fVar2;
        RegisterFuncForMoby(&PTR_M253_00318b50_0070bcc8,moby);
      }
      iVar21 = mobyutil::MB_MayaFrameTrigger(14.0,moby);
      if (iVar21 != 0) {
        fVar1 = *(float *)(*(int *)((int)pvVar8 + 0x1b0) + 0x14) - (moby->pos).y;
        fVar2 = *(float *)(*(int *)((int)pvVar8 + 0x1b0) + 0x10) - (moby->pos).x;
        if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 3.0) &&
           (ABS(*(float *)(*(int *)((int)pvVar8 + 0x218) + 0x18) - (moby->pos).z) < 1.0)) {
          fVar1 = (moby->rotation).z;
          fVar2 = fVar1 + 1.5707963;
          fVar7 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar7 = fVar1;
          }
          fVar5 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar5 = fVar2;
          }
          fVar11 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
            fVar11 = fVar7;
          }
          fVar1 = fVar11 * fVar11;
          fVar7 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
            fVar7 = fVar5;
          }
          *(undefined4 *)(puVar9 + 0x19) = 0;
          *(float *)(puVar9 + 0x1a) = (float)dVar36;
          *(float *)((int)puVar9 + 0xd4) = (float)dVar35;
          *(float *)((int)puVar9 + 0xdc) = (float)dVar33;
          victim = *(MobyInstance **)((int)pvVar8 + 0x218);
          fVar2 = fVar7 * fVar7;
          fVar13 = fVar1 * fVar1 * fVar11;
          fVar14 = fVar1 * fVar13;
          fVar5 = fVar2 * fVar2 * fVar7;
          fVar12 = fVar2 * fVar5;
          *(float *)((int)puVar9 + 0xc4) =
               (fVar1 * fVar14 * 2.601887e-06 +
               fVar14 * -0.0001980741 +
               fVar13 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11) * 0.2;
          *(float *)(puVar9 + 0x18) =
               (fVar2 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7)
               * 0.2;
          *(float *)(puVar9 + 0x1b) = (float)(dVar34 + 0.75);
          mobyutil::CollDamageMobyDirect
                    (1.0,victim,moby,1,0x3172b8,(float *)(puVar9 + 0x1a),(float *)(puVar9 + 0x18));
        }
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar16,2,0,3);
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 < 6) {
      iVar21 = FUN_0048c188(lVar16,(int)pvVar8 + 0x110);
      if (iVar21 != 0) {
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar16,2,0,3);
        }
        *(undefined2 *)((int)pvVar8 + 200) = 0;
      }
    }
    else if (bVar3 < 7) {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x1e) = fVar1;
      *(float *)((int)puVar9 + 0xf4) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0xf4));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xe4;
        lVar26 = uVar15 - 0xd4;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x27) = fVar1;
        *(float *)(puVar9 + 0x26) = fVar1;
        *(float *)((int)puVar9 + 0x134) = fVar1;
        *(float *)((int)puVar9 + 300) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar5;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar1;
        *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 300) = *(float *)((int)lVar18 + 0x11c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xe4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 300) = *(float *)((int)lVar18 + 300) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 300)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,
                 &DAT_003172b8,(int)pvVar8 + 0x210);
      iVar21 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar8 + 0x214));
      if (iVar21 == 0) {
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar16,3,0,3);
        }
        moby->state = '\x04';
      }
    }
    else {
      fVar1 = *(float *)((int)pvVar8 + 0x1f0) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar8 + 500) - (moby->pos).y;
      pfVar25 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x24) = fVar1;
      *(float *)((int)puVar9 + 0x124) = fVar2;
      *(float *)(puVar9 + 0x25) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x24) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x25) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x124) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x24));
      if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x124));
      if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 100;
        lVar26 = uVar15 - 0x54;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x37) = fVar1;
        *(float *)(puVar9 + 0x36) = fVar1;
        *(float *)((int)puVar9 + 0x1b4) = fVar1;
        *(float *)((int)puVar9 + 0x1ac) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x36) = *(float *)(puVar9 + 0x36) * fVar5;
        *(float *)((int)puVar9 + 0x1b4) = *(float *)((int)puVar9 + 0x1b4) * fVar1;
        *(float *)(puVar9 + 0x37) = *(float *)(puVar9 + 0x37) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x1ac) = *(float *)((int)lVar18 + 0x19c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 100;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x1ac) = *(float *)((int)lVar18 + 0x1ac) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x1ac)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,pfVar25,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar33);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = DAT_0071f418 * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 500);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1f0);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar16,0,0,3);
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar3 == 99) {
    fVar4 = (moby->pos).y;
    *(f32 *)(puVar9 + 0x1c) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar9 + 0xe4) = fVar4;
    *(f32 *)((int)puVar9 + 0xec) = fVar6;
    uVar20 = 0x3ff0000000000000;
    *(float *)(puVar9 + 0x1d) = (moby->pos).z + 1.0;
    sound::PlayMobySound(1,0,moby);
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 0;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,uVar20,0x4022000000000000,uVar20,0,lVar16,(int)pvVar8 + 0x40,
               uVar15 - 0x130,0,1,5,2,4);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  mobyupdate_helpers::M252_00316de0(lVar16);
  bVar3 = moby->state;
  if ((bVar3 != 5) && (bVar3 < 0x80)) {
    uVar20 = 0x7f20ff20;
    if ((bVar3 == 4) || (bVar3 == 6)) {
      uVar20 = 0x7f2828a0;
    }
    uVar22 = fastfunc::FastLerpColor(0x3fb99999a0000000,moby->field60_0x90,uVar20);
    moby->field60_0x90 = uVar22;
    mobyfunc::GetBonePosition(lVar16,3,(int)pvVar8 + 0x220);
    draw::RegisterPostDraw(&PTR_M253_003196c0_0070bcf8,moby);
  }
  return;
}



//==== 00318b50  ns=mobyupdate_helpers  size=0x988
// sig: undefined M253_00318b50(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00110488 mobyutil::ClampVec3Magnitude; 00500ca4 fastfunc::FastEulerToMtx1; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M253_00318b50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  int iVar22;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0x220;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar12;
  puVar7[0x46] = in_LR;
  puVar7[0x40] = in_f28;
  puVar7[0x41] = in_f29;
  puVar7[0x42] = in_f30;
  puVar7[0x43] = in_f31;
  puVar7[0x3e] = unaff_r30;
  puVar7[0x3d] = unaff_r29;
  puVar7[0x3f] = unaff_r31;
  puVar7[0x3c] = unaff_r28;
  puVar7[0x3b] = unaff_r27;
  puVar7[0x3a] = unaff_r26;
  puVar7[0x39] = unaff_r25;
  puVar7[0x38] = unaff_r24;
  iVar23 = *(int *)(param_1 + 0x78);
  uVar13 = draw::GetEffectTex(0xe);
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar15 = FUN_00502f08(1,1,0,0,0,0);
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  uVar11 = DAT_007ffc0c;
  uVar9 = DAT_007ffc04;
  *(undefined4 *)(puVar7 + 0x24) = DAT_007ffc00;
  uVar10 = DAT_007ffc08;
  *(undefined4 *)((int)puVar7 + 0x124) = uVar9;
  *(undefined4 *)(puVar7 + 0x25) = uVar10;
  *(undefined4 *)((int)puVar7 + 300) = uVar11;
  puVar7[0x2b] = uVar13;
  puVar7[0x2c] = uVar14;
  puVar7[0x2a] = uVar15;
  puVar7[0x2d] = uVar16;
  dVar32 = 0.0;
  *(undefined4 *)(puVar7 + 0x26) = 0;
  *(undefined4 *)((int)puVar7 + 0x134) = 0;
  *(undefined4 *)(puVar7 + 0x27) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x13c) = 0;
  *(undefined4 *)(puVar7 + 0x28) = 0;
  *(undefined4 *)((int)puVar7 + 0x144) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x29) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x14c) = 0x3f800000;
  mobyfunc::GetBonePosition(param_1,2,uVar12 - 0x1b0);
  iVar22 = *(int *)(iVar23 + 0x218);
  *(float *)(puVar7 + 0x10) = *(float *)(iVar22 + 0x10) - *(float *)(puVar7 + 0xe);
  *(float *)((int)puVar7 + 0x84) = *(float *)(iVar22 + 0x14) - *(float *)((int)puVar7 + 0x74);
  *(float *)(puVar7 + 0x11) = *(float *)(iVar22 + 0x18) - *(float *)(puVar7 + 0xf);
  *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)(iVar22 + 0x1c);
  dVar31 = 3.0;
  mobyutil::ClampVec3Magnitude(0x4008000000000000,(Vec4 *)(puVar7 + 0x10));
  uVar5 = *(uint *)((int)puVar7 + 0x84);
  dVar29 = (double)*(float *)((int)puVar7 + 0x84);
  uVar6 = *(uint *)(puVar7 + 0x10);
  dVar28 = (double)*(float *)(puVar7 + 0x10);
  dVar30 = 0.25;
  dVar25 = (double)(float)(dVar28 * dVar28 + (double)(float)(dVar29 * dVar29));
  fVar2 = *(float *)(*(int *)(iVar23 + 0x218) + 0x18);
  *(undefined4 *)((int)puVar7 + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  fVar1 = (float)SQRT(dVar25);
  fVar2 = (fVar2 + 0.25) - *(float *)(puVar7 + 0xf);
  dVar26 = (double)fVar2;
  *(float *)(puVar7 + 0x2f) = fVar2;
  *(float *)(puVar7 + 0x11) = fVar2;
  dVar33 = (double)SQRT((float)(dVar26 * dVar26 + dVar25));
  *(float *)((int)puVar7 + 0x174) = fVar1;
  dVar27 = ABS((double)fVar1);
  *(float *)((int)puVar7 + 0x17c) = (float)(dVar27 - ABS(dVar26));
  uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0x174) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x17c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x2f) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar7 + 0x174));
  if ((double)*(float *)((int)puVar7 + 0x17c) - dVar32 < 0.0) {
    dVar25 = ABS(dVar26);
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  dVar26 = ABS((double)*(float *)(puVar7 + 0x2f));
  if ((double)*(float *)((int)puVar7 + 0x17c) - dVar32 < 0.0) {
    dVar26 = dVar27;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  dVar27 = dVar32;
  if (dVar32 < dVar25) {
    lVar17 = uVar12 - 0x210;
    lVar21 = uVar12 - 0x70;
    lVar19 = uVar12 - 0x80;
    lVar24 = 2;
    fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x1ac) = fVar3;
    *(float *)((int)puVar7 + 0x1a4) = fVar3;
    *(float *)(puVar7 + 0x35) = fVar3;
    *(float *)(puVar7 + 0x34) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x1a4) = *(float *)((int)puVar7 + 0x1a4) * fVar4;
    *(float *)(puVar7 + 0x35) = *(float *)(puVar7 + 0x35) * fVar3;
    *(float *)((int)puVar7 + 0x1ac) = *(float *)((int)puVar7 + 0x1ac) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x1a0) = *(float *)((int)lVar17 + 400) * fVar3 * fVar3;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar12 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x1a0) = *(float *)((int)lVar17 + 0x1a0) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar25 = dVar32;
    do {
      iVar22 = (int)lVar17;
      iVar8 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar22 + 0x1a0)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar25 + 0.7853981852531433) * fVar1 + fVar2);
  }
  dVar28 = ABS(dVar28);
  dVar29 = ABS(dVar29);
  *(float *)((int)puVar7 + 0x94) = (float)-dVar27;
  *(float *)(puVar7 + 0x2e) = (float)(dVar28 - dVar29);
  uVar13 = (ulonglong)(uVar6 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x2e) >> 0x1e) & 2 | (ulonglong)(uVar5 >> 0x1d) & 4;
  dVar25 = dVar28;
  if ((double)*(float *)(puVar7 + 0x2e) - dVar32 < 0.0) {
    dVar25 = dVar29;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  if ((double)*(float *)(puVar7 + 0x2e) - dVar32 < 0.0) {
    dVar29 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (dVar32 < dVar25) {
    lVar17 = uVar12 - 0x210;
    lVar21 = uVar12 - 0x90;
    lVar19 = uVar12 - 0xa0;
    lVar24 = 2;
    fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x18c) = fVar3;
    *(float *)((int)puVar7 + 0x184) = fVar3;
    *(float *)(puVar7 + 0x31) = fVar3;
    *(float *)(puVar7 + 0x30) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x184) = *(float *)((int)puVar7 + 0x184) * fVar4;
    *(float *)(puVar7 + 0x31) = *(float *)(puVar7 + 0x31) * fVar3;
    *(float *)((int)puVar7 + 0x18c) = *(float *)((int)puVar7 + 0x18c) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x180) = *(float *)((int)lVar17 + 0x170) * fVar3 * fVar3;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar12 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x180) = *(float *)((int)lVar17 + 0x180) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar22 = (int)lVar17;
      iVar8 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0x180)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar2);
  }
  *(float *)(puVar7 + 0x13) = (float)dVar32;
  fastfunc::FastEulerToMtx1(uVar12 - 0x180,uVar12 - 400);
  *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)(puVar7 + 0xe);
  *(undefined4 *)((int)puVar7 + 0xd4) = *(undefined4 *)((int)puVar7 + 0x74);
  *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(puVar7 + 0xf);
  *(undefined4 *)((int)puVar7 + 0xdc) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0xe4) = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 0x1d) = 0x80000000;
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x1f) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)(iVar23 + 0x1dc);
  *(float *)(puVar7 + 0x1e) = (float)(dVar33 * (double)*(float *)(iVar23 + 0x1dc));
  dVar29 = -0.25;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x104) = 0;
  *(undefined4 *)(puVar7 + 0x20) = 0;
  *(undefined4 *)(puVar7 + 0x21) = 0;
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x1f) = fVar1 + -0.25;
  *(undefined4 *)(puVar7 + 0x22) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0x114) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x23) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x11c) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x23) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x22) = (float)(dVar33 * (double)fVar2);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar22 = 1;
  lVar17 = uVar12 - 0x210;
  do {
    iVar8 = (int)lVar17;
    if (iVar22 < 2) {
      fVar1 = *(float *)(iVar8 + 0xe4);
      fVar2 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar1 = *(float *)(iVar8 + 0xe4);
      fVar2 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar22 = iVar22 + 2;
    *(float *)(iVar8 + 0xe8) = (float)((double)fVar2 + dVar26);
    *(float *)(iVar8 + 0xe4) = (float)((double)fVar1 + dVar25);
    lVar17 = lVar17 + 0x20;
  } while (iVar22 < 4);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(float *)(puVar7 + 0x1d) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1c) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x1f) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(float *)(puVar7 + 0x1f) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1e) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x21) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x21) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x20) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x22) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0x114) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x23) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x11c) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x23) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x22) = (float)(dVar33 * (double)fVar2);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar22 = 0;
  lVar17 = lVar18;
  do {
    iVar8 = (int)lVar17;
    if (iVar22 < 2) {
      fVar2 = *(float *)(iVar8 + 0xe4);
      fVar1 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar2 = *(float *)(iVar8 + 0xe4);
      fVar1 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar22 = iVar22 + 1;
    *(float *)(iVar8 + 0xe8) = (float)((double)fVar1 + dVar26);
    *(float *)(iVar8 + 0xe4) = (float)((double)fVar2 + dVar25);
    lVar17 = lVar17 + 0x10;
  } while (iVar22 < 4);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0;
  *(undefined4 *)(puVar7 + 0x1f) = 0;
  *(undefined4 *)((int)puVar7 + 0xf4) = 0;
  *(undefined4 *)(puVar7 + 0x1e) = 0;
  *(float *)(puVar7 + 0x1d) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1c) = (float)(dVar33 * (double)fVar2);
  fVar1 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x1e) = (float)((double)(float)(dVar33 * (double)fVar1) * dVar31);
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x21) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0;
  *(undefined4 *)(puVar7 + 0x23) = 0;
  *(undefined4 *)((int)puVar7 + 0x114) = 0;
  *(undefined4 *)(puVar7 + 0x22) = 0;
  *(float *)(puVar7 + 0x21) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x20) = (float)(dVar33 * (double)fVar2);
  fVar1 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)(puVar7 + 0x23) = 0;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x22) = (float)((double)(float)(dVar33 * (double)fVar1) * dVar31);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar23 = 0;
  do {
    iVar22 = (int)lVar18;
    if (iVar23 < 2) {
      fVar1 = *(float *)(iVar22 + 0xe4);
      fVar2 = *(float *)(iVar22 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar1 = *(float *)(iVar22 + 0xe4);
      fVar2 = *(float *)(iVar22 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar23 = iVar23 + 2;
    *(float *)(iVar22 + 0xe8) = (float)((double)fVar2 + dVar26);
    *(float *)(iVar22 + 0xe4) = (float)((double)fVar1 + dVar25);
    lVar18 = lVar18 + 0x20;
  } while (iVar23 < 4);
  draw::FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  return;
}



//==== 003194d8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M253_003194d8(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M253_003194d8(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x05') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\x05';
  }
  return;
}



//==== 00319530  ns=mobyupdate_helpers  size=0x58
// sig: undefined M253_00319530(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M253_00319530(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}



//==== 00319588  ns=mobyupdate_helpers  size=0x58
// sig: undefined M253_00319588(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M253_00319588(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}



//==== 003195e0  ns=mobyupdate_helpers  size=0x90
// sig: undefined M253_003195e0(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048afe8 mobyupdate_helpers::M849_0048afe8

undefined8 mobyupdate_helpers::M253_003195e0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = M849_0048afe8();
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(iVar1 + 0x200) = 0x40800000;
  *(undefined4 *)(iVar1 + 0x208) = 0x3f000000;
  if (*(char *)(param_1 + 0x53) != '\x02') {
    mobyutil::MB_SetAnimation(param_1,2,0,3);
  }
  *(undefined2 *)(iVar1 + 200) = 0;
  return uVar2;
}



//==== 00319670  ns=mobyupdate_helpers  size=0x40
// sig: undefined M253_00319670(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M253_00319670(int param_1)

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



//==== 003196c0  ns=mobyupdate_helpers  size=0x34c
// sig: undefined M253_003196c0(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 007ffc20: '>333' (raw)

void mobyupdate_helpers::M253_003196c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
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
  char acVar18 [4];
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  float local_e0 [36];
  
  iVar6 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  acVar18 = GameCamera.field8_0x14c;
  fVar7 = 0.0;
  fVar1 = *(float *)(iVar6 + 0x224);
  fVar2 = *(float *)(iVar6 + 0x220);
  fVar16 = GameCamera.posY - fVar1;
  fVar3 = *(float *)(iVar6 + 0x228);
  fVar17 = GameCamera.posX - fVar2;
  fVar15 = GameCamera.posZ - fVar3;
  fVar4 = *(float *)(iVar6 + 0x22c);
  fVar11 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
  fVar10 = fVar7;
  fVar9 = fVar7;
  fVar8 = fVar7;
  if (SQRT(fVar11) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar11);
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar10 = fVar17 * fVar8;
    fVar9 = fVar16 * fVar8;
    fVar8 = fVar15 * fVar8;
  }
  fVar15 = fVar10 * fVar10 + --(fVar9 * fVar9);
  fVar11 = fVar7;
  if (SQRT(fVar15) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar15);
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar11 = fVar10 * fVar7;
    fVar7 = -(fVar9 * fVar7);
  }
  fVar16 = fVar10 * DAT_007ffc1c;
  pfVar20 = local_e0;
  pfVar19 = (float *)&DAT_007ffc30;
  lVar21 = 4;
  fVar17 = fVar9 * DAT_007ffc1c;
  fVar15 = fVar8 * DAT_007ffc1c;
  do {
    fVar12 = *pfVar19 * DAT_007ffc20;
    *pfVar20 = fVar12;
    fVar13 = pfVar19[1] * DAT_007ffc20;
    pfVar20[1] = fVar13;
    fVar14 = pfVar19[2] * DAT_007ffc20;
    pfVar20[2] = fVar14;
    fVar5 = pfVar19[3];
    pfVar19 = pfVar19 + 4;
    pfVar20[3] = fVar5 * fVar4 + fVar12 * (float)acVar18;
    pfVar20[2] = (fVar15 + fVar3) * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar7) * fVar14 + fVar12 * fVar8 + 0.0;
    *pfVar20 = (fVar16 + fVar2) * fVar5 +
               (fVar9 * 0.0 - fVar8 * fVar11) * fVar14 + fVar12 * fVar10 + fVar13 * fVar7;
    pfVar20[1] = (fVar17 + fVar1) * fVar5 +
                 (fVar8 * fVar7 - 0.0) * fVar14 + fVar12 * fVar9 + fVar13 * fVar11;
    pfVar20 = pfVar20 + 4;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  draw::FastDrawQuad(local_e0,0,0,EffectTexHeaders,9);
  return;
}



//==== 00319a0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M253_00319a0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M253_00319a0c(void)

{
  DAT_007ffcbc = 0x10000;
  return;
}



//==== 00319a58  ns=mobyupdate_helpers  size=0x5d8
// sig: undefined M253_00319a58(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M253_00319a58(undefined4 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 auStack_120 [80];
  
  mobyfunc::GetBonePosition(param_1,param_2,auStack_150);
  mobyfunc::GetBoneTransformations(param_1,param_2,auStack_120);
  iVar6 = 0;
  if (0 < param_3) {
    dVar8 = -0.05000000074505806;
    dVar9 = 0.05000000074505806;
    dVar10 = 1.2000000476837158;
    dVar11 = 0.0;
    dVar12 = 0.25;
    dVar13 = 1.5;
    do {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      if (param_3 / 3 < iVar6) {
        mobyutil::MB_randRangeFloat(DAT_007ffdfc,(float)((double)DAT_007ffdfc * dVar10));
        mobyutil::MB_randRangeFloat((float)dVar11,DAT_007ffe04);
        mobyutil::MB_randRangeFloat((float)dVar11,DAT_007ffe04);
      }
      else {
        mobyutil::MB_randRangeFloat((float)dVar11,DAT_007ffdfc);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)((double)DAT_007ffe04 * dVar12));
        mobyutil::MB_randRangeFloat((float)dVar11,(float)((double)DAT_007ffe04 * dVar12));
      }
      uVar2 = DAT_007ffdf8;
      uVar1 = DAT_007ffdf4;
      dVar7 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe08,
                                 (float)((double)(longlong)DAT_007ffe08 * dVar10));
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe0c,
                                 (float)((double)(longlong)DAT_007ffe0c * dVar10));
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe10,
                                 (float)((double)(longlong)DAT_007ffe10 * dVar13));
      uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      partupd::SpawnPart_2(auStack_150,local_140,local_130,uVar1,uVar2,uVar3,uVar4,uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  return;
}



//==== 0031a070  ns=mobyupdate_helpers  size=0x65c
// sig: undefined M253_0031a070(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(7): 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d710 sound::sound_SetVol

ulonglong mobyupdate_helpers::M253_0031a070(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar16;
  ulonglong uVar15;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  double dVar29;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 0x110;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar15;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r31;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x1b] = unaff_r30;
  pvVar5 = param_1->pVar;
  piVar8 = *(int **)((int)Splines + (int)(param_2 << 2));
  dVar28 = (double)(float)piVar8[*(int *)((int)pvVar5 + 0x168) * 4 + 4];
  dVar27 = (double)(float)piVar8[*(int *)((int)pvVar5 + 0x168) * 4 + 5];
  fVar1 = (float)(dVar28 - (double)(param_1->pos).x);
  fVar2 = (float)(dVar27 - (double)(param_1->pos).y);
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar9 + 0xe) = fVar1;
  *(float *)((int)puVar9 + 0x74) = fVar2;
  *(float *)(puVar9 + 0xf) = fVar3 - fVar4;
  dVar26 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar29 = dVar26;
  if (0.0 < fVar1) {
    lVar18 = uVar15 - 0x100;
    lVar22 = uVar15 - 0x84;
    lVar20 = uVar15 - 0x94;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = fVar1;
    *(float *)((int)puVar9 + 0x7c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
    *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar1;
    *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar1 * fVar1;
      iVar16 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar15 - 0x94;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar16 = (int)lVar19;
      iVar7 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x7c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar29,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
             mobyutil::g_FrameTime * 3.1415927,&(param_1->rotation).z,0x320000,
             (float *)((int)pvVar5 + 0x158));
  dVar29 = 2.0;
  mobyutil::Delt(*(float *)((int)pvVar5 + 0x16c),DAT_0071f418 * 2.0,(float *)((int)pvVar5 + 0x180));
  fVar1 = (param_1->rotation).z;
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = *(float *)((int)pvVar5 + 0x180);
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar10 * fVar10;
  fVar3 = fVar4 * fVar4;
  fVar13 = fVar2 * fVar2 * fVar10;
  fVar11 = fVar3 * fVar3 * fVar4;
  fVar14 = fVar2 * fVar13;
  fVar12 = fVar3 * fVar11;
  (param_1->pos).y =
       (fVar2 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1 + (param_1->pos).y;
  (param_1->pos).x =
       (fVar3 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) * fVar1
       + (param_1->pos).x;
  dVar25 = 0.5;
  dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
  fVar1 = (float)((double)(param_1->pos).y - dVar27);
  fVar2 = (float)((double)(param_1->pos).x - dVar28);
  (param_1->pos).z = (float)dVar24;
  fVar4 = mobyutil::g_FrameTime;
  if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) < dVar25) {
    iVar16 = *(int *)((int)pvVar5 + 0x168) + 1;
    *(int *)((int)pvVar5 + 0x168) = iVar16 - (iVar16 / *piVar8) * *piVar8;
  }
  dVar28 = (double)(*(float *)((int)pvVar5 + 0x180) / (DAT_007ffdc0 * fVar4));
  if ((dVar28 <= dVar29) && (dVar29 = dVar28, dVar28 < dVar26)) {
    dVar29 = dVar26;
  }
  if (*(int *)((int)pvVar5 + 0x160) != 0) {
    *(float *)(*(int *)((int)pvVar5 + 0x160) + 0x58) = (float)dVar29;
    iVar16 = *(int *)((int)pvVar5 + 0x160);
    *(f32 *)(iVar16 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (param_1->rotation).w;
    iVar16 = *(int *)((int)pvVar5 + 0x160);
    *(f32 *)(iVar16 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar16 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar16 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (param_1->pos).w;
  }
  if (*(int *)((int)pvVar5 + 0x164) != 0) {
    *(float *)(*(int *)((int)pvVar5 + 0x164) + 0x58) = (float)dVar29;
    iVar16 = *(int *)((int)pvVar5 + 0x164);
    *(f32 *)(iVar16 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (param_1->rotation).w;
    iVar16 = *(int *)((int)pvVar5 + 0x164);
    *(f32 *)(iVar16 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar16 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar16 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (param_1->pos).w;
  }
  if (SQRT(*(float *)((int)pvVar5 + 0x48) * *(float *)((int)pvVar5 + 0x48) +
           *(float *)((int)pvVar5 + 0x40) * *(float *)((int)pvVar5 + 0x40) +
           *(float *)((int)pvVar5 + 0x44) * *(float *)((int)pvVar5 + 0x44)) <=
      mobyutil::g_FrameTime * 0.1) {
    iVar16 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar5 + 0x15c));
    uVar15 = (ulonglong)iVar16;
    if (iVar16 != 0) {
      iVar16 = *(int *)((int)pvVar5 + 0x15c);
      iVar7 = sound::g_SoundChannels[iVar16].vol;
      if (iVar7 < 0x100) {
        sound::sound_Kill(iVar16);
        uVar15 = 0xffffffffffffffff;
        *(undefined4 *)((int)pvVar5 + 0x15c) = 0xffffffff;
      }
      else {
        puVar9[0x14] = (longlong)(int)(animationSpeed * 60.5);
        iVar16 = sound::sound_SetVol(iVar16,iVar7 - 0x400 / *(int *)((int)puVar9 + 0xa4));
        uVar15 = (ulonglong)iVar16;
      }
    }
  }
  else {
    iVar16 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar5 + 0x15c));
    if (iVar16 == 0) {
      iVar16 = sound::PlayMobySound(1,4,param_1);
      *(int *)((int)pvVar5 + 0x15c) = iVar16;
      iVar16 = sound::sound_SetVol(iVar16,1);
      uVar15 = (ulonglong)iVar16;
    }
    else {
      iVar16 = *(int *)((int)pvVar5 + 0x15c);
      uVar6 = sound::g_SoundChannels[iVar16].vol;
      uVar15 = (ulonglong)uVar6;
      if ((int)uVar6 < 0x400) {
        puVar9[0x14] = (longlong)(int)(animationSpeed * 60.5);
        iVar16 = sound::sound_SetVol(iVar16,uVar6 + 0x400 / *(int *)((int)puVar9 + 0xa4));
        uVar15 = (ulonglong)iVar16;
      }
    }
  }
  return uVar15;
}



//==== 0031a728  ns=mobyupdate_helpers  size=0xbd0
// sig: undefined M253_0031a728(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(9): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010e030 mobyutil::MB_genericExplosion; 003509b0 FUN_003509b0; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M253_0031a728(MobyInstance *param_1)

{
  longlong lVar1;
  byte bVar2;
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
  MOBY_OCLASSES MVar15;
  ushort uVar16;
  void *pvVar17;
  ulonglong *puVar18;
  Cuboid *pCVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  MobyInstance *pMVar25;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar29;
  ulonglong unaff_r28;
  MobyInstance *pMVar30;
  ulonglong unaff_r29;
  ushort *puVar31;
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
  double dVar40;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar41;
  ulonglong in_f16;
  double dVar42;
  ulonglong in_f17;
  double dVar43;
  ulonglong in_f18;
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
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar1 = uVar21 - 0x240;
  puVar18 = (ulonglong *)lVar1;
  *puVar18 = uVar21;
  puVar18[0x4a] = in_LR;
  puVar18[0x36] = in_f14;
  puVar18[0x37] = in_f15;
  puVar18[0x38] = in_f16;
  puVar18[0x39] = in_f17;
  puVar18[0x3a] = in_f18;
  puVar18[0x3b] = in_f19;
  puVar18[0x3c] = in_f20;
  puVar18[0x3d] = in_f21;
  puVar18[0x3e] = in_f22;
  puVar18[0x3f] = in_f23;
  puVar18[0x40] = in_f24;
  puVar18[0x41] = in_f25;
  puVar18[0x42] = in_f26;
  puVar18[0x43] = in_f27;
  puVar18[0x44] = in_f28;
  puVar18[0x45] = in_f29;
  puVar18[0x46] = in_f30;
  puVar18[0x47] = in_f31;
  puVar18[0x32] = unaff_r28;
  puVar18[0x34] = unaff_r30;
  puVar18[0x35] = unaff_r31;
  pvVar17 = param_1->pVar;
  puVar18[0x2f] = unaff_r25;
  pMVar30 = MobyInstance;
  bVar2 = MobyInstance[*(int *)((int)pvVar17 + 0x144)].group;
  puVar18[0x33] = unaff_r29;
  puVar31 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
  puVar18[0x31] = unaff_r27;
  puVar18[0x30] = unaff_r26;
  puVar18[0x2e] = unaff_r24;
  if (puVar31 != (ushort *)0x0) {
    iVar29 = 0;
    dVar57 = -1.0;
    dVar56 = 1.0;
    dVar55 = -0.2617993950843811;
    dVar54 = 0.2617993950843811;
    dVar53 = 0.0;
    pMVar30 = pMVar30 + (*puVar31 & 0x7fff);
    dVar52 = 1.570796251296997;
    dVar51 = 3.141592502593994;
    dVar50 = -3.141592502593994;
    dVar49 = -0.16666656732559204;
    dVar48 = 0.008333025500178337;
    dVar47 = -0.0001980741071747616;
    dVar46 = 2.601886990305502e-06;
    dVar45 = 15.0;
    dVar44 = 8.0;
    dVar43 = 12.0;
    dVar42 = 60.0;
    dVar41 = 90.0;
    do {
      if (numSpawnableMobys < 0x32) break;
      uVar22 = mobyutil::MB_randInt(0xff);
      if ((uVar22 & 1) == 0) {
        pMVar25 = mobyfunc::CreateMoby(0x311);
      }
      else {
        pMVar25 = mobyfunc::CreateMoby(DOOR_LEFT|BOLT_CIRCLENUT);
      }
      if (pMVar25 != (MobyInstance *)0x0) {
        *(float *)(puVar18 + 0x2c) = (float)dVar53;
        pMVar25->drawDistance = 0x40;
        pMVar25->updateDistance = -1;
        pMVar25->enabled = '\x01';
        dVar53 = (double)mobyutil::MB_randRot();
        (pMVar25->rotation).x = (float)dVar53;
        dVar53 = (double)mobyutil::MB_randRot();
        (pMVar25->rotation).y = (float)dVar53;
        dVar53 = (double)mobyutil::MB_randRot();
        (pMVar25->rotation).z = (float)dVar53;
        dVar53 = (double)mobyutil::MB_randRangeFloat((float)dVar57,(float)dVar56);
        dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar57,(float)dVar56);
        dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar57,(float)dVar56);
        pCVar19 = Cuboids + *(int *)((int)pvVar17 + 0x148);
        fVar3 = (pCVar19->matrix).v1.y;
        fVar4 = (pCVar19->matrix).v1.z;
        fVar5 = (pCVar19->matrix).v0.y;
        fVar6 = (pCVar19->matrix).v1.w;
        fVar7 = (pCVar19->matrix).v0.z;
        fVar8 = (pCVar19->matrix).v0.w;
        fVar9 = (pCVar19->matrix).v2.y;
        fVar10 = (pCVar19->matrix).v2.z;
        fVar11 = (pCVar19->matrix).v2.w;
        fVar12 = (pCVar19->pos).y;
        fVar13 = (pCVar19->pos).z;
        fVar14 = (pCVar19->pos).w;
        (pMVar25->pos).x =
             (float)((double)(pCVar19->matrix).v2.x * dVar34 +
                    (double)(float)((double)(pCVar19->matrix).v0.x * dVar53 +
                                   (double)(float)((double)(pCVar19->matrix).v1.x * dVar33))) +
             (pCVar19->pos).x;
        (pMVar25->pos).y =
             (float)((double)fVar9 * dVar34 +
                    (double)(float)((double)fVar5 * dVar53 + (double)(float)((double)fVar3 * dVar33)
                                   )) + fVar12;
        (pMVar25->pos).z =
             (float)((double)fVar10 * dVar34 +
                    (double)(float)((double)fVar7 * dVar53 + (double)(float)((double)fVar4 * dVar33)
                                   )) + fVar13;
        (pMVar25->pos).w =
             (float)((double)fVar11 * dVar34 +
                    (double)(float)((double)fVar8 * dVar53 + (double)(float)((double)fVar6 * dVar33)
                                   )) + fVar14;
        dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar55,(float)dVar54);
        dVar34 = (double)(float)(dVar33 + dVar52);
        dVar53 = (double)(float)(dVar51 - dVar33);
        if (dVar33 - (double)(float)(dVar51 - dVar33) < 0.0) {
          dVar53 = dVar33;
        }
        dVar35 = (double)(float)(dVar51 - dVar34);
        if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
          dVar35 = dVar34;
        }
        dVar38 = (double)(float)(dVar50 - dVar33);
        if ((double)(float)(dVar50 - dVar33) - dVar53 < 0.0) {
          dVar38 = dVar53;
        }
        dVar33 = (double)mobyutil::g_FrameTime;
        *(undefined4 *)((int)puVar18 + 0xcc) = 0;
        *(undefined4 *)(puVar18 + 0x19) = 0;
        *(undefined4 *)((int)puVar18 + 0xc4) = 0;
        *(undefined4 *)(puVar18 + 0x18) = 0;
        dVar53 = (double)(float)(dVar50 - dVar34);
        if ((double)(float)(dVar50 - dVar34) - dVar35 < 0.0) {
          dVar53 = dVar35;
        }
        dVar34 = (double)(float)(dVar38 * dVar38);
        *(undefined4 *)(puVar18 + 0x1b) = 0;
        dVar35 = (double)(float)(dVar53 * dVar53);
        dVar39 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar38));
        dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar53));
        dVar37 = (double)(float)(dVar34 * dVar39);
        dVar40 = (double)(float)(dVar35 * dVar36);
        *(float *)((int)puVar18 + 0xd4) =
             (float)(dVar33 * dVar45) *
             (float)((double)(float)(dVar34 * dVar37) * dVar46 +
                    (double)(float)(dVar37 * dVar47 +
                                   (double)(float)(dVar39 * dVar48 +
                                                  (double)(float)((double)(float)(dVar34 * dVar38) *
                                                                  dVar49 + dVar38))));
        *(float *)(puVar18 + 0x1a) =
             (float)(dVar33 * dVar45) *
             (float)((double)(float)(dVar35 * dVar40) * dVar46 +
                    (double)(float)(dVar40 * dVar47 +
                                   (double)(float)(dVar36 * dVar48 +
                                                  (double)(float)((double)(float)(dVar35 * dVar53) *
                                                                  dVar49 + dVar53))));
        dVar53 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(dVar33 * dVar44),(float)(dVar33 * dVar43));
        *(float *)(puVar18 + 0x1b) = (float)dVar53;
        mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar41);
        uVar23 = fastfunc::FastDoubleToInt();
        FUN_003509b0(pMVar25,param_1,uVar21 - 0x170,uVar21 - 0x180,uVar23);
        dVar53 = (double)*(float *)(puVar18 + 0x2c);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < 0x28);
    while( true ) {
      if ((pMVar30->state < 0x7f) && (pMVar30 != param_1)) {
        MVar15 = pMVar30->oClass;
        if ((short)MVar15 < 599 && 0x24b < (short)MVar15) {
          dVar42 = (double)mobyutil::MB_randRangeFloat((float)dVar55,(float)dVar54);
          dVar57 = (double)(float)(dVar42 + dVar52);
          dVar41 = (double)(float)(dVar51 - dVar42);
          if (dVar42 - (double)(float)(dVar51 - dVar42) < 0.0) {
            dVar41 = dVar42;
          }
          dVar33 = (double)(float)(dVar51 - dVar57);
          if (dVar57 - (double)(float)(dVar51 - dVar57) < 0.0) {
            dVar33 = dVar57;
          }
          dVar34 = (double)(float)(dVar50 - dVar42);
          if ((double)(float)(dVar50 - dVar42) - dVar41 < 0.0) {
            dVar34 = dVar41;
          }
          dVar42 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)(puVar18 + 0x1d) = 0;
          dVar41 = (double)(float)(dVar50 - dVar57);
          if ((double)(float)(dVar50 - dVar57) - dVar33 < 0.0) {
            dVar41 = dVar33;
          }
          dVar57 = (double)(float)(dVar34 * dVar34);
          dVar33 = (double)(float)(dVar41 * dVar41);
          dVar36 = (double)(float)(dVar57 * (double)(float)(dVar57 * dVar34));
          dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar41));
          dVar38 = (double)(float)(dVar57 * dVar36);
          dVar37 = (double)(float)(dVar33 * dVar35);
          *(float *)((int)puVar18 + 0xe4) =
               (float)(dVar42 * dVar45) *
               (float)((double)(float)(dVar57 * dVar38) * dVar46 +
                      (double)(float)(dVar38 * dVar47 +
                                     (double)(float)(dVar36 * dVar48 +
                                                    (double)(float)((double)(float)(dVar57 * dVar34)
                                                                    * dVar49 + dVar34))));
          *(float *)(puVar18 + 0x1c) =
               (float)(dVar42 * dVar45) *
               (float)((double)(float)(dVar33 * dVar37) * dVar46 +
                      (double)(float)(dVar37 * dVar47 +
                                     (double)(float)(dVar35 * dVar48 +
                                                    (double)(float)((double)(float)(dVar33 * dVar41)
                                                                    * dVar49 + dVar41))));
          dVar41 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(dVar42 * dVar44),(float)(dVar42 * dVar43));
          *(float *)(puVar18 + 0x1d) = (float)dVar41;
          MVar15 = pMVar30->oClass;
          fVar3 = (param_1->pos).x;
          fVar4 = (param_1->pos).y;
          if ((short)MVar15 < 0x251) {
            if ((short)MVar15 < 0x24e) {
              if (0x24b < (short)MVar15) {
                if ((short)MVar15 < 0x24d) {
                  *(undefined4 *)((int)puVar18 + 0xfc) = 0;
                  *(undefined4 *)(puVar18 + 0x1e) = 0x3fd08312;
                  *(undefined4 *)((int)puVar18 + 0xf4) = 0xbfaba5e3;
                  *(undefined4 *)(puVar18 + 0x1f) = 0x4137ae14;
                }
                else {
                  *(undefined4 *)(puVar18 + 0x1e) = 0x3fa645a2;
                  *(undefined4 *)((int)puVar18 + 0xfc) = 0;
                  *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0b1db23;
                  *(undefined4 *)(puVar18 + 0x1f) = 0x4137ae14;
                }
              }
            }
            else if ((short)MVar15 < 0x24f) {
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)(puVar18 + 0x1e) = 0x3f210625;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc021ba5e;
              *(undefined4 *)(puVar18 + 0x1f) = 0x405a2d0e;
            }
            else if ((short)MVar15 < 0x250) {
              *(undefined4 *)(puVar18 + 0x1e) = 0x3c9ba5e3;
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0c6147b;
              *(undefined4 *)(puVar18 + 0x1f) = 0x405a2d0e;
            }
            else {
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)(puVar18 + 0x1e) = 0x404c8b44;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc006b852;
              *(undefined4 *)(puVar18 + 0x1f) = 0x40f91687;
            }
          }
          else if (MVar15 == 0x256) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x3f628f5c;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0ba5e35;
            *(undefined4 *)(puVar18 + 0x1f) = 0x41039581;
          }
          else if (MVar15 == 0x255) {
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x3fcc49ba;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc020c49c;
            *(undefined4 *)(puVar18 + 0x1f) = 0x4105be77;
          }
          else if (MVar15 == 0x254) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x3fc4fdf4;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xbf891687;
            *(undefined4 *)(puVar18 + 0x1f) = 0x41524dd3;
          }
          else if (MVar15 == 0x253) {
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x40524dd3;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0dd999a;
            *(undefined4 *)(puVar18 + 0x1f) = 0x403d70a4;
          }
          else if (MVar15 == 0x252) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x408a8f5c;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0ce5e35;
            *(undefined4 *)(puVar18 + 0x1f) = 0x40ecb439;
          }
          else if (MVar15 == 0x251) {
            *(undefined4 *)(puVar18 + 0x1f) = 0x40280000;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x40070a3d;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc040d4fe;
          }
          dVar57 = ABS((double)*(float *)(puVar18 + 0x1c));
          dVar41 = ABS((double)*(float *)((int)puVar18 + 0xe4));
          *(float *)((int)puVar18 + 0x11c) = (float)(dVar57 - dVar41);
          uVar22 = (ulonglong)(*(uint *)(puVar18 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x11c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0xe4) >> 0x1d) & 4;
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar42 = dVar57;
          if ((double)*(float *)((int)puVar18 + 0x11c) - dVar53 < 0.0) {
            dVar42 = dVar41;
          }
          if ((double)*(float *)((int)puVar18 + 0x11c) - dVar53 < 0.0) {
            dVar41 = dVar57;
          }
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar57 = dVar53;
          if (dVar53 < dVar42) {
            lVar24 = uVar21 - 0x230;
            lVar26 = uVar21 - 0x100;
            lVar27 = uVar21 - 0xf0;
            lVar32 = 2;
            fVar7 = (float)(dVar41 - dVar42) / (float)(dVar41 + dVar42);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x14c) = fVar7;
            *(float *)((int)puVar18 + 0x144) = fVar7;
            *(float *)(puVar18 + 0x29) = fVar7;
            *(float *)(puVar18 + 0x28) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar18 + 0x144) = *(float *)((int)puVar18 + 0x144) * fVar8;
            *(float *)(puVar18 + 0x29) = *(float *)(puVar18 + 0x29) * fVar7;
            *(float *)((int)puVar18 + 0x14c) = *(float *)((int)puVar18 + 0x14c) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x130) * fVar7 * fVar7;
              iVar29 = (int)lVar26;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar29 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar32 = 4;
            lVar27 = uVar21 - 0x100;
            pfVar28 = (float *)&DAT_007358e0;
            lVar24 = lVar1;
            lVar26 = lVar27;
            do {
              fVar7 = *pfVar28;
              fVar8 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x140) * fVar7;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
              lVar26 = lVar26 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar26 = 2;
            lVar24 = lVar1;
            dVar41 = dVar53;
            do {
              iVar29 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar20 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar29 + 0x140)) +
                                *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                               *(float *)(iVar20 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar57 = (double)((float)(dVar41 + 0.7853981852531433) * fVar5 + fVar6);
          }
          fVar3 = GameCamera.posX - fVar3;
          fVar4 = GameCamera.posY - fVar4;
          dVar33 = ABS((double)fVar3);
          dVar42 = ABS((double)fVar4);
          *(float *)(puVar18 + 0x22) = fVar3;
          *(float *)((int)puVar18 + 0x114) = fVar4;
          *(float *)(puVar18 + 0x23) = (float)(dVar33 - dVar42);
          uVar22 = (ulonglong)(*(uint *)(puVar18 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x114) >> 0x1d) & 4;
          dVar41 = ABS((double)*(float *)(puVar18 + 0x22));
          if ((double)*(float *)(puVar18 + 0x23) - dVar53 < 0.0) {
            dVar41 = dVar42;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar42 = ABS((double)*(float *)((int)puVar18 + 0x114));
          if ((double)*(float *)(puVar18 + 0x23) - dVar53 < 0.0) {
            dVar42 = dVar33;
          }
          fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar33 = dVar53;
          if (dVar53 < dVar41) {
            lVar24 = uVar21 - 0x230;
            lVar27 = uVar21 - 0x110;
            lVar26 = uVar21 - 0x120;
            lVar32 = 2;
            fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar18 + 300) = fVar5;
            *(float *)((int)puVar18 + 0x124) = fVar5;
            *(float *)(puVar18 + 0x25) = fVar5;
            *(float *)(puVar18 + 0x24) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar18 + 0x124) = *(float *)((int)puVar18 + 0x124) * fVar6;
            *(float *)(puVar18 + 0x25) = *(float *)(puVar18 + 0x25) * fVar5;
            *(float *)((int)puVar18 + 300) = *(float *)((int)puVar18 + 300) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x110) * fVar5 * fVar5;
              iVar29 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar29 + 4) * fVar5 * fVar5;
              lVar27 = lVar27 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar32 = 4;
            lVar27 = uVar21 - 0x120;
            pfVar28 = (float *)&DAT_007358e0;
            lVar24 = lVar1;
            lVar26 = lVar27;
            do {
              fVar5 = *pfVar28;
              fVar6 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x120) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
              lVar26 = lVar26 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar26 = 2;
            lVar24 = lVar1;
            dVar41 = dVar53;
            do {
              iVar29 = (int)lVar24;
              iVar20 = (int)lVar27;
              lVar24 = lVar24 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar29 + 0x120)) +
                                *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                               *(float *)(iVar20 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar33 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar4);
          }
          dVar41 = (double)fastfunc::FastSubRots((float)dVar57,(float)dVar33);
          if (dVar54 <= dVar41) {
            mobyutil::MB_randRangeFloat(30.0,45.0);
            uVar23 = fastfunc::FastDoubleToInt();
            FUN_003509b0(pMVar30,param_1,uVar21 - 0x160,uVar21 - 0x150,uVar23);
          }
          else {
            mobyutil::MB_randRangeFloat(10.0,20.0);
            uVar23 = fastfunc::FastDoubleToInt();
            FUN_003509b0(pMVar30,param_1,uVar21 - 0x160,uVar21 - 0x150,uVar23);
          }
        }
        else if (MVar15 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
          *(undefined4 *)((int)puVar18 + 0x10c) = 0;
          *(undefined4 *)(puVar18 + 0x21) = 0;
          *(undefined4 *)((int)puVar18 + 0x104) = 0;
          *(undefined4 *)(puVar18 + 0x20) = 0;
          puVar18[0x12] = 0xffffffffffffffff;
          puVar18[0x14] = 1;
          puVar18[0x15] = 1;
          puVar18[0x16] = 0xffffffffffffffff;
          puVar18[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (dVar53,dVar53,dVar43,dVar44,0x4022000000000000,dVar56,dVar45,pMVar30,
                     uVar21 - 0x140,&pMVar30->pos,0xffffffffffffffff,1,0x32,0x3c,0x3c);
          mobyfunc::DeleteMoby(pMVar30);
        }
      }
      uVar16 = *puVar31;
      puVar31 = puVar31 + 1;
      if ((short)uVar16 < -1) break;
      pMVar30 = MobyInstance + (*puVar31 & 0x7fff);
    }
  }
  return;
}



//==== 0031b2f8  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M253_0031b2f8(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M253_0031b2f8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyInstance *moby;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           (&mobyutil::g_MobyGroups)[(byte)MobyInstance[*(int *)((int)param_1->pVar + 0x144)].group]
  ;
  if (puVar2 != (ushort *)0x0) {
    moby = MobyInstance + (*puVar2 & 0x7fff);
    while( true ) {
      if ((moby->state < 0x7f) && (moby != param_1)) {
        MVar1 = moby->oClass;
        if ((short)MVar1 < 599 && 0x24b < (short)MVar1) {
          mobyfunc::DeleteMoby(moby);
        }
        else if (MVar1 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
          mobyfunc::DeleteMoby(moby);
        }
      }
      if ((short)*puVar2 < -1) break;
      moby = MobyInstance + (puVar2[1] & 0x7fff);
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



//==== 0031b438  ns=mobyupdate_helpers  size=0xd84
// sig: undefined M253_0031b438(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(17): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010a2e0 mobyutil::OrganicDeltAng; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0011050c mobyutil::???_MB_PickMinAbsField2c_Of4; 00111ba0 mobyutil::MB_getTargetInArea; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015d12c sound::PlayMobySound; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M253_0031b438(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  undefined2 uVar9;
  void *pvVar10;
  int iVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar20;
  longlong lVar19;
  longlong lVar21;
  undefined4 *unused;
  MobyInstance *unused_00;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  ulonglong unaff_r27;
  vec4 *pvVar25;
  ulonglong unaff_r28;
  undefined8 uVar26;
  ulonglong unaff_r29;
  vec4 *pvVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  longlong lVar29;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar29 = uVar16 - 400;
  puVar14 = (ulonglong *)lVar29;
  *puVar14 = uVar16;
  puVar14[0x34] = in_LR;
  puVar14[0x2f] = in_f29;
  puVar14[0x30] = in_f30;
  puVar14[0x31] = in_f31;
  puVar14[0x2e] = unaff_r31;
  puVar14[0x2b] = unaff_r28;
  uVar26 = 0;
  puVar14[0x2d] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar28 = ZEXT48(pvVar10);
  dVar36 = 0.0;
  puVar14[0x2c] = unaff_r29;
  puVar14[0x2a] = unaff_r27;
  *(undefined4 *)((int)puVar14 + 0xf4) = 0;
  uVar17 = mobyutil::MB_damage(param_1,0x330000,0);
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    uVar26 = mobyutil::MB_damage(*(int *)((int)pvVar10 + 0x160),0x210000,0);
  }
  uVar18 = 0;
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    uVar18 = mobyutil::MB_damage(*(int *)((int)pvVar10 + 0x164),0x210000,0);
  }
  iVar20 = mobyutil::____MB_PickMinAbsField2c_Of4(uVar17,uVar26,uVar18,0);
  if (((iVar20 != 0) && (*(int *)(iVar20 + 0x20) != 0)) &&
     ((sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6), sVar8 == 0x1a9 || (sVar8 == 0x47)))) {
    iVar20 = 0;
  }
  mobyutil::MB_HandleDamage(param_1,iVar20,uVar28 + 0x20,0,puVar14 + 0x1e,(int)puVar14 + 0xf4,0,4);
  if ((*(int *)(puVar14 + 0x1e) != 1) && (param_1->state != '\0')) {
    iVar11 = *(int *)((int)puVar14 + 0xf4);
    fVar1 = *(float *)((int)puVar14 + 0xf4);
    fVar2 = *(float *)((int)pvVar10 + 0x20) - fVar1;
    *(float *)((int)pvVar10 + 0x20) = fVar2;
    if (iVar11 != 0) {
      sound::PlayMobySound(4,0,param_1);
      fVar2 = *(float *)((int)pvVar10 + 0x20);
      fVar1 = *(float *)((int)puVar14 + 0xf4);
    }
    if ((double)fVar2 <= dVar36) {
      if (param_1->state == 'c') {
        if ((((Level == Batalia) &&
             (iVar11 = *(int *)((int)pvVar10 + 0x184), iVar20 != 0 && iVar11 != 0)) &&
            (*(int *)(iVar20 + 0x20) != 0)) && (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) == 0x661)
           ) {
          if (iVar11 == 1) {
            g_Batalia_TankKilledBySandmouse[0] = 1;
          }
          if (iVar11 == 2) {
            g_Batalia_TankKilledBySandmouse[1] = 1;
          }
          if (iVar11 == 3) {
            g_Batalia_TankKilledBySandmouse[2] = 1;
          }
          if (iVar11 == 4) {
            g_Batalia_TankKilledBySandmouse[3] = 1;
          }
          if ((g_Batalia_TankKilledBySandmouse[0] != 0) && (g_Batalia_TankKilledBySandmouse[1] != 0)
             ) {
            mobyutil::MB_UnlockSkillPoint(0xd);
          }
        }
        fVar3 = (param_1->pos).y;
        *(f32 *)(puVar14 + 0x1c) = (param_1->pos).x;
        fVar4 = (param_1->pos).w;
        *(f32 *)((int)puVar14 + 0xe4) = fVar3;
        *(f32 *)((int)puVar14 + 0xec) = fVar4;
        uVar17 = 0x3ff0000000000000;
        *(float *)(puVar14 + 0x1d) = (param_1->pos).z + 1.0;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        sound::PlayMobySound(2,0,param_1);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (dVar36,dVar36,0x4010000000000000,0x4000000000000000,0x4022000000000000,uVar17,
                   0x402e000000000000,param_1,uVar28 + 0x40,uVar16 - 0xb0,1,0xffffffffffffffff,0x14,
                   8,0x14);
        pvVar27 = &param_1->pos;
        pvVar25 = &param_1->rotation;
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6fe,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6fe,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        if (*(MobyInstance **)((int)pvVar10 + 0x160) != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x160));
        }
        if (*(MobyInstance **)((int)pvVar10 + 0x164) != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x164));
        }
        mobyfunc::DeleteMoby(param_1);
        return;
      }
      fVar3 = (param_1->pos).y;
      *(f32 *)(puVar14 + 0x1a) = (param_1->pos).x;
      fVar4 = (param_1->pos).w;
      *(f32 *)((int)puVar14 + 0xd4) = fVar3;
      *(f32 *)((int)puVar14 + 0xdc) = fVar4;
      fVar1 = (param_1->pos).z;
      puVar14[0x14] = 1;
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      *(float *)(puVar14 + 0x1b) = fVar1 + 3.0;
      *(undefined1 *)((int)pvVar10 + 0xa7) = 0xfa;
      *(undefined4 *)((int)pvVar10 + 300) = 0;
      *(undefined4 *)((int)pvVar10 + 0x128) = 0;
      *(undefined4 *)((int)pvVar10 + 0x124) = 0;
      *(undefined4 *)((int)pvVar10 + 0x120) = 0;
      mobyutil::MB_genericExplosion
                (dVar36,dVar36,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,param_1,uVar28 + 0x40,uVar16 - 0xc0,
                 &DAT_0031b3f4,0xfa,0x14,8,0x14);
      pvVar27 = &param_1->pos;
      pvVar25 = &param_1->rotation;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6c0,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6c1,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6c2,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6c3,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(dVar36,param_1,0x6c4,pvVar27,pvVar25,0,0);
      if (param_1->animationId != '\x01') {
        mobyutil::MB_SetAnimation(param_1,1,0,3);
      }
      param_1->state = 'c';
      *(undefined4 *)((int)pvVar10 + 0x20) = 0x40c00000;
      *(ushort *)((int)pvVar10 + 0x3e) = *(ushort *)((int)pvVar10 + 0x3e) & 0xfffd;
    }
    else {
      if (4.0 <= fVar1) {
        if (6.0 <= fVar1) {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(undefined1 *)((int)pvVar10 + 0xa7) = 0xe6;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
          *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
        }
        else {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(undefined1 *)((int)pvVar10 + 0xa7) = 200;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
          *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
        }
      }
      else {
        *(undefined1 *)((int)pvVar10 + 0xa7) = 0x78;
        sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
        if ((sVar8 == 0xb0) || (sVar8 == 0xb1)) {
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(8,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
        else {
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,auVar37,
                             auVar39);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = vectorSplatHalfWord(auVar37,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
        *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
      }
      if ((param_1->state == '\f') && (param_1->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(param_1,1,0,0);
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar28 + 0xa0);
  }
  param_1->damage = -1;
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x160) + 0xa4) = 0xff;
  }
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x164) + 0xa4) = 0xff;
  }
  pSVar12 = Splines[*(int *)((int)pvVar10 + 0x154)];
  mobyutil::MB_getTargetInArea
            (0x4059000000000000,param_1,uVar28 + 0xb0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
  pMVar15 = g_heroMobyPtr;
  unused_00 = *(MobyInstance **)((int)pvVar10 + 0xf0);
  if (*(MobyInstance **)((int)pvVar10 + 0xf0) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar10 + 0xf0) = g_heroMobyPtr;
    unused_00 = pMVar15;
  }
  if (*(int *)((int)pvVar10 + 0xf4) == 2) {
    dVar31 = 12.566370964050293;
    dVar32 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x170),(int)unused_00,
               (float *)((int)pvVar10 + 0x174));
    mobyutil::OrganicDeltAng
              ((float)dVar36,(float)((double)DAT_0071f418 * dVar31),
               (float)((double)DAT_0071f418 * dVar31),
               (float)((double)mobyutil::g_FrameTime * dVar32),(float *)((int)pvVar10 + 0x178),
               (int)unused_00,(float *)((int)pvVar10 + 0x17c));
  }
  else {
    fVar2 = *(float *)((int)pvVar10 + 0xb0) - (param_1->pos).x;
    dVar31 = (double)fVar2;
    fVar5 = *(float *)((int)pvVar10 + 0xb4) - (param_1->pos).y;
    dVar33 = (double)fVar5;
    fVar1 = *(float *)((int)pvVar10 + 0xb8);
    *(float *)((int)puVar14 + 0x104) = fVar2;
    *(float *)(puVar14 + 0x21) = fVar5;
    fVar2 = (fVar1 - (param_1->pos).z) - 3.0;
    *(float *)((int)puVar14 + 0x10c) = (float)(ABS(dVar31) - ABS(dVar33));
    uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar32 = ABS((double)*(float *)((int)puVar14 + 0x104));
    if ((double)*(float *)((int)puVar14 + 0x10c) - dVar36 < 0.0) {
      dVar32 = ABS(dVar33);
    }
    dVar35 = ABS((double)*(float *)(puVar14 + 0x21));
    if ((double)*(float *)((int)puVar14 + 0x10c) - dVar36 < 0.0) {
      dVar35 = ABS(dVar31);
    }
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar34 = dVar36;
    if (dVar36 < dVar32) {
      lVar19 = uVar16 - 0x180;
      lVar22 = uVar16 - 0x50;
      lVar21 = uVar16 - 0x60;
      lVar30 = 2;
      fVar7 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x13c) = fVar7;
      *(float *)((int)puVar14 + 0x134) = fVar7;
      *(float *)(puVar14 + 0x27) = fVar7;
      *(float *)(puVar14 + 0x26) = fVar7;
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar6;
      *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar7;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar7 * fVar6;
      do {
        *(float *)((int)lVar19 + 0x130) = *(float *)((int)lVar19 + 0x120) * fVar7 * fVar7;
        iVar20 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar22 = uVar16 - 0x60;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar29;
      lVar21 = lVar22;
      do {
        fVar7 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x130) = *(float *)((int)lVar19 + 0x130) * fVar7;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      lVar19 = lVar29;
      dVar32 = dVar36;
      do {
        iVar20 = (int)lVar19;
        iVar11 = (int)lVar22;
        lVar19 = lVar19 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0x130)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar34 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar5);
    }
    *(float *)((int)puVar14 + 0xfc) = fVar2;
    dVar35 = ABS((double)fVar2);
    fVar1 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar33 * dVar33)));
    dVar31 = ABS((double)fVar1);
    *(float *)(puVar14 + 0x1f) = fVar1;
    *(float *)(puVar14 + 0x20) = (float)(dVar31 - dVar35);
    uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
    dVar32 = ABS((double)*(float *)(puVar14 + 0x1f));
    if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
      dVar32 = dVar35;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar14 + 0xfc));
    if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
      dVar33 = dVar31;
    }
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar36 < dVar32) {
      lVar19 = uVar16 - 0x180;
      lVar21 = uVar16 - 0x80;
      lVar22 = uVar16 - 0x70;
      lVar30 = 2;
      fVar5 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
      fVar7 = fVar5 * fVar5;
      *(float *)((int)puVar14 + 0x11c) = fVar5;
      *(float *)((int)puVar14 + 0x114) = fVar5;
      *(float *)(puVar14 + 0x23) = fVar5;
      *(float *)(puVar14 + 0x22) = fVar5;
      fVar5 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7;
      *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar5;
      *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar5 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x110) = *(float *)((int)lVar19 + 0x100) * fVar5 * fVar5;
        iVar20 = (int)lVar21;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar22 = uVar16 - 0x80;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar29;
      lVar21 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x110) = *(float *)((int)lVar19 + 0x110) * fVar5;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar19 = 2;
      do {
        iVar20 = (int)lVar29;
        iVar11 = (int)lVar22;
        lVar29 = lVar29 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x110)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar36 = -dVar36;
    dVar32 = 0.3490658402442932;
    if ((dVar36 <= 0.3490658402442932) && (dVar32 = dVar36, dVar36 < -0.7853981852531433)) {
      dVar32 = -0.7853981852531433;
    }
    dVar36 = (double)fastfunc::FastDiffRots(dVar34,(double)(param_1->rotation).z);
    unused = &DAT_0031b3f4;
    dVar33 = 12.566370964050293;
    dVar31 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x170),0x31b3f4,
               (float *)((int)pvVar10 + 0x174));
    mobyutil::OrganicDeltAng
              ((float)dVar32,(float)((double)DAT_0071f418 * dVar33),
               (float)((double)DAT_0071f418 * dVar33),
               (float)((double)mobyutil::g_FrameTime * dVar31),(float *)((int)pvVar10 + 0x178),
               (int)unused,(float *)((int)pvVar10 + 0x17c));
  }
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x178),uVar16 - 0xd0,1);
  lVar29 = uVar28 + 0x110;
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x170),lVar29,2);
  fastfunc::FastQuaternionMult(lVar29,uVar16 - 0xd0,lVar29);
  lVar29 = uVar28 + 0xa0;
  uVar13 = *(undefined2 *)((int)pvVar10 + 0xa0);
  uVar9 = *(undefined2 *)((int)pvVar10 + 0xa2);
  mobyutil::MB_ColorDyingMoby(param_1,lVar29);
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    *(undefined2 *)((int)pvVar10 + 0xa0) = uVar13;
    *(undefined2 *)((int)pvVar10 + 0xa2) = uVar9;
    mobyutil::MB_ColorDyingMoby(*(int *)((int)pvVar10 + 0x160),lVar29);
  }
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    *(undefined2 *)((int)pvVar10 + 0xa0) = uVar13;
    *(undefined2 *)((int)pvVar10 + 0xa2) = uVar9;
    mobyutil::MB_ColorDyingMoby(*(int *)((int)pvVar10 + 0x164),lVar29);
  }
  return;
}



//==== 0031c218  ns=mobyupdate_unsorted  size=0xd70
// sig: undefined UpdateMoby_253(MobyInstance * moby)
// callers(0): 
// callees(19): 0007b310 help::Help_QueueMessage; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 00112900 mobyutil::MB_GetOrientation; 00113e88 mobyutil::MB_MayaFrameTrigger; 0015d12c sound::PlayMobySound; 00319a58 mobyupdate_helpers::M253_00319a58; 0031a070 mobyupdate_helpers::M253_0031a070; 0031a728 mobyupdate_helpers::M253_0031a728; 0031b2f8 mobyupdate_helpers::M253_0031b2f8; 0031b438 mobyupdate_helpers::M253_0031b438; 0036a1d0 FUN_0036a1d0; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt
// strings: 00a1000c: 'None'

/* Moby 253 */

void mobyupdate_unsorted::UpdateMoby_253(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  MobyInstance *pMVar14;
  undefined1 uVar16;
  int iVar15;
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
  Vec4 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pvVar3 = moby->pVar;
  dVar32 = (double)(moby->pos).x;
  dVar33 = (double)(moby->pos).y;
  dVar34 = (double)(moby->pos).z;
  if (*(char *)((int)pvVar3 + 0x2e) != '\x02') {
    mobyupdate_helpers::M253_0031b438(lVar13);
    uVar1 = moby->state;
    iVar15 = *(int *)((int)pvVar3 + 0xf0);
    if (uVar1 == 'c') {
      mobyupdate_helpers::M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
      dVar30 = (double)mobyfunc::BlendAnimFrame(moby);
      if (((59.0 <= dVar30) && (dVar30 <= 60.0)) || ((119.0 <= dVar30 && (dVar30 <= 120.0)))) {
        mobyupdate_helpers::M253_00319a58(lVar13,4,10);
      }
      else if (((29.0 <= dVar30) && (dVar30 <= 30.0)) || ((89.0 <= dVar30 && (dVar30 <= 90.0)))) {
        mobyupdate_helpers::M253_00319a58(lVar13,5,10);
      }
    }
    else if (uVar1 == '\x0e') {
      if (*(int *)((int)pvVar3 + 0xf4) != 2) {
        mobyupdate_helpers::M253_0031a728(lVar13);
        if (MiscLevelFlags.field46_0x2e != 0) {
          sound::PlayMobySound(6,0,moby);
        }
        MiscLevelFlags.field46_0x2e = 1;
        iVar15 = *(int *)((int)pvVar3 + 0x160);
        *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
        iVar15 = *(int *)((int)pvVar3 + 0x164);
        *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
        iVar15 = *(int *)((int)pvVar3 + 0x160);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xffbe;
        *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
             *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) & 0xffbe;
        moby->collision = moby->pClass->collision;
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) =
             *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x160) + 0x24) + 0x10);
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) =
             *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x164) + 0x24) + 0x10);
        iVar15 = *(int *)((int)pvVar3 + 0xf4);
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if ((iVar15 != 2) && (moby->state = '\x06', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (uVar1 != '\f') {
      if (uVar1 == '\v') {
                    /* WARNING: Load size is inaccurate */
        if (*MobyInstance[*(int *)((int)pvVar3 + 0x140)].pVar == 0x3f800000) {
          pSVar4 = Splines[*(int *)((int)pvVar3 + 0x14c)];
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          fVar2 = pSVar4->points[0].x;
          (moby->pos).x = fVar2;
          (moby->pos).y = pSVar4->points[0].y;
          (moby->pos).z = pSVar4->points[0].z;
          (moby->pos).w = pSVar4->points[0].w;
          *(float *)(iVar15 + 0x10) = fVar2;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          iVar15 = *(int *)((int)pvVar3 + 0x164);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xffbe;
          *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) & 0xffbe;
          moby->collision = moby->pClass->collision;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x160) + 0x24) + 0x10);
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x164) + 0x24) + 0x10);
          iVar15 = *(int *)((int)pvVar3 + 0xf4);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          if ((iVar15 != 2) && (moby->state = '\x06', moby->animationId != '\x01')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (uVar1 == '\x06') {
        mobyupdate_helpers::M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
        if ((*(int *)((int)pvVar3 + 0xf4) != 2) &&
           (fVar2 = (moby->pos).y - *(float *)(iVar15 + 0x14),
           fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10),
           SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 20.0)) {
          if ((CHAR_ARRAY_00a1000c._720_2_ == 0) && (UnlockableItems.devastator == '\0')) {
            help::Help_QueueMessage(STR_THE_DEVASTATOR_IS_A_0x1F44,0x5a);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (uVar1 == '\x03') {
        mobyupdate_helpers::M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
        if (((*(int *)((int)pvVar3 + 0xf4) == 2) ||
            (fVar2 = (moby->pos).y - *(float *)(iVar15 + 0x14),
            fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10),
            22.0 < SQRT(fVar5 * fVar5 + fVar2 * fVar2))) &&
           (moby->state = '\x06', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
        dVar30 = 4.0;
        iVar15 = mobyutil::MB_MayaFrameTrigger(4.0,moby);
        if ((iVar15 != 0) || (iVar15 = mobyutil::MB_MayaFrameTrigger(10.0,moby), iVar15 != 0)) {
          dVar17 = (double)mobyfunc::BlendAnimFrame(moby);
          if (dVar17 == dVar30) {
            mobyfunc::GetBonePosition(lVar13,1,uVar12 - 0x90);
          }
          else {
            mobyfunc::GetBonePosition(lVar13,2,uVar12 - 0x90);
          }
          dVar31 = (double)(DAT_007ffdc8 * mobyutil::g_FrameTime);
          dVar30 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x170),(moby->rotation).z)
          ;
          dVar29 = 1.570796251296997;
          dVar28 = 3.141592502593994;
          fVar2 = (float)(dVar30 + 1.570796251296997);
          dVar27 = -3.141592502593994;
          fVar5 = *(float *)((int)pvVar3 + 0x178) + 1.5707963;
          dVar30 = -0.16666656732559204;
          dVar26 = 0.008333025500178337;
          dVar25 = -0.0001980741071747616;
          dVar17 = 2.601886990305502e-06;
          fVar6 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar6 = fVar2;
          }
          fVar8 = 3.1415925 - fVar5;
          if (fVar5 - (3.1415925 - fVar5) < 0.0) {
            fVar8 = fVar5;
          }
          fVar7 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
            fVar7 = fVar6;
          }
          fVar2 = -3.1415925 - fVar5;
          if ((-3.1415925 - fVar5) - fVar8 < 0.0) {
            fVar2 = fVar8;
          }
          fVar8 = fVar7 * fVar7;
          fVar11 = fVar2 * fVar2;
          fVar5 = fVar8 * fVar8 * fVar7;
          fVar9 = fVar11 * fVar11 * fVar2;
          fVar6 = fVar8 * fVar5;
          fVar10 = fVar11 * fVar9;
          local_a0 = (float)((double)(fVar11 * fVar10 * 2.601887e-06 +
                                     fVar10 * -0.0001980741 +
                                     fVar9 * 0.0083330255 + fVar11 * fVar2 * -0.16666657 + fVar2) *
                            dVar31) *
                     (fVar8 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar5 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7);
          dVar18 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x170),(moby->rotation).z)
          ;
          dVar20 = (double)(float)((double)*(float *)((int)pvVar3 + 0x178) + dVar29);
          dVar29 = (double)(float)(dVar28 - dVar18);
          if (dVar18 - (double)(float)(dVar28 - dVar18) < 0.0) {
            dVar29 = dVar18;
          }
          dVar21 = (double)(float)(dVar28 - dVar20);
          if (dVar20 - (double)(float)(dVar28 - dVar20) < 0.0) {
            dVar21 = dVar20;
          }
          dVar19 = (double)(float)(dVar27 - dVar18);
          if ((double)(float)(dVar27 - dVar18) - dVar29 < 0.0) {
            dVar19 = dVar29;
          }
          dVar18 = (double)(float)(dVar19 * dVar19);
          dVar29 = (double)(float)(dVar27 - dVar20);
          if ((double)(float)(dVar27 - dVar20) - dVar21 < 0.0) {
            dVar29 = dVar21;
          }
          dVar20 = (double)(float)(dVar29 * dVar29);
          dVar23 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar19));
          dVar21 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar29));
          dVar22 = (double)(float)(dVar18 * dVar23);
          dVar24 = (double)(float)(dVar20 * dVar21);
          local_9c = (float)((double)(float)((double)(float)(dVar20 * dVar24) * dVar17 +
                                            (double)(float)(dVar24 * dVar25 +
                                                           (double)(float)(dVar21 * dVar26 +
                                                                          (double)(float)((double)(
                                                  float)(dVar20 * dVar29) * dVar30 + dVar29)))) *
                            dVar31) *
                     (float)((double)(float)(dVar18 * dVar22) * dVar17 +
                            (double)(float)(dVar22 * dVar25 +
                                           (double)(float)(dVar23 * dVar26 +
                                                          (double)(float)((double)(float)(dVar18 * 
                                                  dVar19) * dVar30 + dVar19))));
          dVar18 = (double)*(float *)((int)pvVar3 + 0x178);
          dVar29 = (double)(float)(dVar28 - dVar18);
          if (dVar18 - (double)(float)(dVar28 - dVar18) < 0.0) {
            dVar29 = dVar18;
          }
          dVar28 = (double)(float)(dVar27 - dVar18);
          if ((double)(float)(dVar27 - dVar18) - dVar29 < 0.0) {
            dVar28 = dVar29;
          }
          dVar27 = (double)(float)(dVar28 * dVar28);
          dVar18 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
          dVar29 = (double)(float)(dVar27 * dVar18);
          local_98 = -(float)((double)(float)((double)(float)(dVar27 * dVar29) * dVar17 +
                                             (double)(float)(dVar29 * dVar25 +
                                                            (double)(float)(dVar18 * dVar26 +
                                                                           (double)(float)((double)(
                                                  float)(dVar27 * dVar28) * dVar30 + dVar28)))) *
                             dVar31);
          iVar15 = FUN_0036a1d0(lVar13,uVar12 - 0x90,uVar12 - 0xa0);
          if (iVar15 != 0) {
            *(undefined1 *)(iVar15 + 0x20) = 1;
          }
        }
      }
      else if (uVar1 == '\0') {
        if (*(int *)((int)pvVar3 + 0x160) == 0) {
          pMVar14 = mobyfunc::CreateMoby(TRACKDRIVE_LEFT);
          *(MobyInstance **)((int)pvVar3 + 0x160) = pMVar14;
          pMVar14->updateDistance = '@';
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x160) + 0x32) = 0x40;
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x160) + 0x31) = 1;
          *(undefined8 *)(*(int *)((int)pvVar3 + 0x160) + 0x38) =
               *(undefined8 *)&g_heroMobyPtr->color;
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x160) + 0x34) = 0x4000;
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
          mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar3 + 0x160),0,0,0);
          mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x160));
        }
        if (*(int *)((int)pvVar3 + 0x164) == 0) {
          pMVar14 = mobyfunc::CreateMoby(TRACKDRIVE_LEFT);
          *(MobyInstance **)((int)pvVar3 + 0x164) = pMVar14;
          pMVar14->updateDistance = '@';
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x164) + 0x32) = 0x40;
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x164) + 0x31) = 1;
          *(undefined8 *)(*(int *)((int)pvVar3 + 0x164) + 0x38) =
               *(undefined8 *)&g_heroMobyPtr->color;
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x164) + 0x34) = 0xc000;
          iVar15 = *(int *)((int)pvVar3 + 0x164);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
          mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar3 + 0x164),0,0,0);
          mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x164));
        }
        mobyfunc::AttachManipulator(moby,0,(int)pvVar3 + 0x100);
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(float *)((int)pvVar3 + 0x16c) = mobyutil::g_FrameTime * 2.0;
        if (*(int *)((int)pvVar3 + 0x140) < 1) {
          if (*(int *)((int)pvVar3 + 0x144) < 1) {
            uVar1 = moby->animationId;
            pSVar4 = Splines[*(int *)((int)pvVar3 + 0x150)];
            (moby->pos).x = pSVar4->points[0].x;
            (moby->pos).y = pSVar4->points[0].y;
            (moby->pos).z = pSVar4->points[0].z;
            fVar2 = pSVar4->points[0].w;
            moby->state = '\x06';
            (moby->pos).w = fVar2;
            if (uVar1 != '\x01') {
              mobyutil::MB_SetAnimation(lVar13,1,0,0);
            }
          }
          else if (MiscLevelFlags.field46_0x2e == 0) {
            moby->state = '\x0e';
            iVar15 = *(int *)((int)pvVar3 + 0x160);
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) | 0x41;
            *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
                 *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) | 0x41;
            moby->collision = (ushort *)0x0;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
            if (moby->animationId != '\0') {
              mobyutil::MB_SetAnimation(lVar13,0,0,0);
            }
          }
          else {
            mobyupdate_helpers::M253_0031b2f8(lVar13);
            uVar1 = moby->animationId;
            pSVar4 = Splines[*(int *)((int)pvVar3 + 0x150)];
            (moby->pos).x = pSVar4->points[0].x;
            (moby->pos).y = pSVar4->points[0].y;
            (moby->pos).z = pSVar4->points[0].z;
            fVar2 = pSVar4->points[0].w;
            moby->state = '\x06';
            (moby->pos).w = fVar2;
            if (uVar1 != '\x01') {
              mobyutil::MB_SetAnimation(lVar13,1,0,0);
            }
          }
        }
        else {
          moby->state = '\v';
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) | 0x41;
          *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) | 0x41;
          moby->collision = (ushort *)0x0;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar13,0,0,0);
          }
        }
        *(undefined1 *)((int)pvVar3 + 0x29) = 0;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0x41100000;
        *(undefined1 *)((int)pvVar3 + 0x28) = 3;
        *(undefined4 *)((int)pvVar3 + 0x30) = 0x40400000;
        *(undefined1 *)((int)pvVar3 + 0x2a) = 0xc;
        *(undefined1 *)((int)pvVar3 + 0x2e) = 1;
        *(undefined4 *)((int)pvVar3 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        *(undefined4 *)((int)pvVar3 + 0x44) = 0;
        *(undefined4 *)((int)pvVar3 + 0x40) = 0;
        *(undefined4 *)((int)pvVar3 + 0x178) = 0;
        *(ushort *)((int)pvVar3 + 0x3e) = *(ushort *)((int)pvVar3 + 0x3e) | 2;
        *(f32 *)((int)pvVar3 + 0x170) = (moby->rotation).z;
        uVar16 = fastfunc::FastDoubleToInt((double)DAT_007ffdec);
        *(undefined1 *)((int)pvVar3 + 0x58) = uVar16;
        uVar16 = fastfunc::FastDoubleToInt((double)(DAT_007ffdf0 * 8.0));
        *(undefined1 *)((int)pvVar3 + 0x5a) = uVar16;
      }
    }
    local_b0.x = (float)((double)(moby->pos).x - dVar32);
    local_b0.y = (float)((double)(moby->pos).y - dVar33);
    local_b0.w = (moby->pos).w;
    local_b0.z = (float)((double)(moby->pos).z - dVar34);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_b0,lVar13 + 0x40,uVar12 - 0xc0);
    return;
  }
  if (*(MobyInstance **)((int)pvVar3 + 0x160) != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x160));
  }
  if (*(MobyInstance **)((int)pvVar3 + 0x164) != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x164));
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0031cf88  ns=mobyupdate_helpers  size=0x14
// sig: undefined M254_0031cf88(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M254_0031cf88(void)

{
  DAT_007ffe68 = 0x10000;
  return;
}



//==== 0031cfa0  ns=mobyupdate_unsorted  size=0x30
// sig: undefined UpdateMoby_254(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 254 */

void mobyupdate_unsorted::UpdateMoby_254(MobyInstance *moby)

{
  if (DAT_010bb484 != 0) {
                    /* WARNING: Load size is inaccurate */
    DAT_00969ed6 = 2;
    DAT_0096bfba = (undefined2)*moby->pVar;
  }
  return;
}



//==== 0031cfd0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M257_0031cfd0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M257_0031cfd0(void)

{
  DAT_007ffedc = 0x10000;
  return;
}



//==== 0031cff8  ns=mobyupdate_unsorted  size=0x378
// sig: undefined UpdateMoby_257(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 00117390 mobyutil::MB_PathEvalSpline; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 257 */

u16 * mobyupdate_unsorted::UpdateMoby_257(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  float fVar7;
  longlong lVar8;
  u16 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_30 [16];
  
  lVar8 = (longlong)(int)moby;
  piVar4 = (int *)moby->pVar;
  uVar12 = ZEXT48(piVar4);
  bVar1 = moby->state;
  puVar9 = (u16 *)piVar4[1];
  pSVar5 = Splines[(int)puVar9];
  uVar11 = ZEXT48(pSVar5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((*piVar4 == -1) || (puVar9 == (u16 *)0xffffffff)) {
        puVar9 = (u16 *)mobyfunc::DeleteMoby(moby);
      }
      else {
        fVar2 = pSVar5->points[0].y - pSVar5->points[1].y;
        fVar3 = pSVar5->points[0].x - pSVar5->points[1].x;
        fVar7 = pSVar5->points[0].z - pSVar5->points[1].z;
        piVar4[3] = (int)(((float)piVar4[2] * mobyutil::g_FrameTime) /
                         SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2));
        moby->updateDistance = 'd';
        moby->setByGroup = '\0';
        moby->state = '\x01';
        puVar9 = (u16 *)0x64;
      }
    }
    else {
      puVar9 = (u16 *)&hero::g_heroMtx;
      if (hero::g_heroStateType == (u16 *)0xf) {
        puVar9 = (u16 *)mobyutil::MB_IsPntInCuboid((Vec4 *)&hero::g_heroCGPos,(longlong)*piVar4);
        if (puVar9 != (u16 *)0x0) {
          moby->state = '\x02';
          *(undefined2 *)((int)piVar4 + 0x16) = 0;
          puVar9 = (u16 *)0x2;
        }
      }
    }
  }
  else if (bVar1 < 3) {
    auVar13 = ZEXT416(1);
    auVar14 = loadVectorLeftIndexed(0x10,uVar12);
    auVar15 = loadVectorLeftIndexed(0xc,uVar12);
    auVar16 = loadVectorRightIndexed(0x20,uVar12);
    auVar18 = loadVectorRightIndexed(0x1c,uVar12);
    auVar17 = loadVectorLeftIndexed(in_LR,uVar11);
    auVar13 = vectorSubtractUnsignedWordModulo
                        (auVar17,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    fVar2 = (float)piVar4[4];
    auVar15 = vectorAddFloatingPoint(auVar14 | auVar16,auVar15 | auVar18);
    auVar14 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    fVar3 = (float)piVar4[3];
    auVar13 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar13 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    uVar6 = storeVectorElementWordIndexed(auVar15,0x10,uVar12);
    *(undefined4 *)((uint)(piVar4 + 4) & 0xfffffffc) = uVar6;
    if (bVar1 == 0) {
      mobyutil::MB_PathEvalSpline((double)(fVar2 + fVar3),uVar11,0xc,0,lVar8 + 0x10,lVar8 + 0x40,0);
    }
    else {
      moby->updateDistance = -1;
      moby->state = '\x03';
    }
    if (moby->setByGroup != '\0') {
      moby->collision = (ushort *)0x0;
    }
    iVar10 = sound::IsMobyPlayingSound(moby,(int)*(short *)(piVar4 + 5));
    if (iVar10 == 0) {
      iVar10 = sound::PlayMobySound(0,4,moby);
      *(short *)(piVar4 + 5) = (short)iVar10;
    }
    puVar9 = (u16 *)(uint)*(ushort *)((int)piVar4 + 0x16);
    if ((*(ushort *)((int)piVar4 + 0x16) == 0) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       puVar9 = (u16 *)&DAT_0031cfe8, SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 7.0)) {
      *(undefined2 *)((int)piVar4 + 0x16) = 1;
      puVar9 = (u16 *)sound::PlayMobySound(1,0,moby);
    }
  }
  else if (bVar1 < 4) {
    if (moby->enabled == '\0') {
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
    }
    puVar9 = hero::g_heroStateType;
    if ((hero::g_heroStateType != (u16 *)0xf) &&
       (puVar9 = (u16 *)fastfunc::FastCheckBsphereInView(0x4050000000000000,local_30),
       puVar9 == (u16 *)0xffffffff)) {
      moby->setByGroup = '\0';
      piVar4[4] = 0;
      mobyutil::MB_PathEvalSpline(0,uVar11,&DAT_0031cfe8,0,lVar8 + 0x10,lVar8 + 0x40,0);
      moby->enabled = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      *(undefined2 *)((int)piVar4 + 0x16) = 0;
      moby->collision = puVar9;
      moby->state = '\x01';
    }
  }
  return puVar9;
}



//==== 0031d370  ns=mobyupdate_helpers  size=0x14
// sig: undefined M258_0031d370(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M258_0031d370(void)

{
  DAT_007fff4c = 0x10000;
  return;
}



//==== 0031d388  ns=mobyupdate_helpers  size=0x258
// sig: undefined M258_0031d388(void)
// callers(2): 0031d5e0 mobyupdate_helpers::M258_0031d5e0; 0031d660 mobyupdate_unsorted::UpdateMoby_258
// callees(0): 

void mobyupdate_helpers::M258_0031d388(longlong param_1,int param_2,char param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)&(MobyInstance->bSphere).x + (int)(param_1 << 8);
  if (iVar2 == 0) {
    return;
  }
  if (param_3 != '\0') {
    if (*(char *)(param_2 + 0x7c) < '\x01') {
      if (*(char *)(param_2 + 0x7c) < '\0') {
        *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 2;
      }
    }
    else {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffd;
    }
    if (((*(char *)(param_2 + 0x7d) < '\x01') ||
        (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) ||
       ((sVar1 == 0x4ef || (sVar1 == 0x571)))) {
      if ((((*(char *)(param_2 + 0x7d) < '\0') &&
           (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef)
          ) && (sVar1 != 0x571)) {
        *(undefined1 *)(iVar2 + 0x31) = 0;
        *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
      }
    }
    else {
      *(undefined1 *)(iVar2 + 0x31) = 1;
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
    }
    if ((*(char *)(param_2 + 0x7f) < '\x01') || (*(int *)(iVar2 + 0x24) == 0)) {
      if ((*(char *)(param_2 + 0x7f) < '\0') && (*(int *)(iVar2 + 0x24) != 0)) {
        *(undefined4 *)(iVar2 + 0x94) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x10);
    }
    return;
  }
  if (((*(char *)(param_2 + 0x7c) < '\x01') ||
      (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) || (sVar1 == 0x4ef)) {
    if (((*(char *)(param_2 + 0x7c) < '\0') &&
        (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef)) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffd;
    }
  }
  else {
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 2;
  }
  if (((*(char *)(param_2 + 0x7d) < '\x01') ||
      (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) ||
     ((sVar1 == 0x4ef || (sVar1 == 0x571)))) {
    if ((((*(char *)(param_2 + 0x7d) < '\0') &&
         (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef))
       && (sVar1 != 0x571)) {
      *(undefined1 *)(iVar2 + 0x31) = 1;
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x31) = 0;
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
  }
  if ('\0' < *(char *)(param_2 + 0x7f)) {
    *(undefined4 *)(iVar2 + 0x94) = 0;
    return;
  }
  if (-1 < *(char *)(param_2 + 0x7f)) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x10);
  return;
}



//==== 0031d5e0  ns=mobyupdate_helpers  size=0x80
// sig: undefined M258_0031d5e0(void)
// callers(0): 
// callees(1): 0031d388 mobyupdate_helpers::M258_0031d388

void mobyupdate_helpers::M258_0031d5e0
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_3 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      M258_0031d388(*puVar2 & 0x7fff,param_2,param_4);
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 0031d660  ns=mobyupdate_unsorted  size=0x264
// sig: undefined UpdateMoby_258(MobyInstance * moby)
// callers(0): 
// callees(3): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 0031d388 mobyupdate_helpers::M258_0031d388

/* Moby 258 */

void mobyupdate_unsorted::UpdateMoby_258(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int *piVar10;
  undefined4 uVar11;
  Vec4 local_50;
  
  piVar2 = (int *)moby->pVar;
  uVar11 = 0;
  moby->updateDistance = -1;
  local_50.x = g_heroPosition.x;
  local_50.y = g_heroPosition.y;
  local_50.z = g_heroPosition.z;
  local_50.w = g_heroPosition.w;
  if (*(char *)((int)piVar2 + 0x7e) != '\0') {
    local_50.x = GameCamera.posX;
    local_50.y = GameCamera.posY;
    local_50.z = GameCamera.posZ;
    local_50.w = (float)GameCamera.field8_0x14c;
  }
  if (((0 < piVar2[1]) &&
      (fVar4 = (moby->pos).y - local_50.y, fVar5 = (moby->pos).z - local_50.z,
      fVar3 = (moby->pos).x - local_50.x,
      SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < (float)piVar2[1])) ||
     ((*piVar2 != -1 &&
      (iVar7 = mobyutil::PointInsideComplexPoly
                         (&local_50,(Vec4 *)Splines[*piVar2]->points,Splines[*piVar2]->cnt),
      iVar7 != 0)))) {
LAB_0031d7c8:
    uVar11 = 1;
    if (moby->setByGroup == '\0') goto LAB_0031d7e4;
  }
  else {
    iVar7 = 0;
    piVar10 = piVar2;
    do {
      if ((piVar10[2] != -1) &&
         (iVar8 = mobyutil::MB_IsPntInCuboid(&local_50,(longlong)piVar10[2]), iVar8 != 0))
      goto LAB_0031d7c8;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 < 6);
    if (moby->setByGroup != '\0') goto LAB_0031d7e4;
  }
  if (moby->state != '\0') {
    return;
  }
LAB_0031d7e4:
  bVar6 = (byte)((ulonglong)(LZCOUNT(uVar11) << 0x20) >> 0x25) ^ 1;
  iVar7 = 0;
  moby->setByGroup = bVar6;
  moby->state = bVar6 + 1;
  piVar10 = piVar2;
  do {
    if ((piVar10[8] != -1) &&
       (puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[piVar10[8]], puVar9 != (ushort *)0x0)) {
      do {
        mobyupdate_helpers::M258_0031d388(*puVar9 & 0x7fff,piVar2,uVar11);
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
      } while (-1 < (short)uVar1);
    }
    iVar7 = iVar7 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar7 < 0xc);
  iVar7 = 0;
  piVar10 = piVar2;
  do {
    if (piVar10[0x14] != -1) {
      mobyupdate_helpers::M258_0031d388(piVar10[0x14],piVar2,uVar11);
    }
    iVar7 = iVar7 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar7 < 0xb);
  return;
}



//==== 0031d8c4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M259_0031d8c4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M259_0031d8c4(void)

{
  DAT_007fffbc = 0x10000;
  return;
}



//==== 0031d8e0  ns=Global  size=0xec
// sig: undefined FUN_0031d8e0(void)
// callers(1): 003b3248 mobyupdate_unsorted::UpdateMoby_554
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights; 001367d0 path::PathFindClosestPnt

MobyInstance *
FUN_0031d8e0(Spline *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  int iVar3;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar2 = mobyfunc::CreateMoby(0x103);
  if (pMVar2 != (MobyInstance *)0x0) {
    pvVar1 = pMVar2->pVar;
    (pMVar2->pos).x = fStack00000040;
    (pMVar2->pos).y = fStack00000044;
    *(Spline **)((int)pvVar1 + 0x60) = param_1;
    (pMVar2->pos).z = fStack00000048;
    (pMVar2->pos).w = fStack0000004c;
    iVar3 = path::PathFindClosestPnt(0.0,(Vec4 *)&stack0x00000040,param_1);
    *(int *)((int)pvVar1 + 100) = iVar3;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    mobyfunc::UpdateMobyTransform(pMVar2);
    mobyutil::MB_CopyHeroLights(pMVar2);
  }
  return pMVar2;
}



//==== 0031d9e8  ns=mobyupdate_unsorted  size=0x3e0
// sig: undefined UpdateMoby_259(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00138238 path::GetPathPnt

/* Moby 259 */

void mobyupdate_unsorted::UpdateMoby_259(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  KickVars *kv;
  int *piVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0xb0;
  puVar6 = (ulonglong *)lVar9;
  *puVar6 = uVar8;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  puVar6[0x14] = unaff_r30;
  kv = (KickVars *)moby->pVar;
  iVar10 = mobyutil::MB_damage(moby,0x330000,0);
  if ((iVar10 != 0) && (dVar19 = 0.0, *(int *)(iVar10 + 0x2c) != 0)) {
    moby->collision = (ushort *)0x0;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    fVar11 = mobyutil::g_FrameTime;
    kv->xySpeed = mobyutil::g_FrameTime * 3.0;
    kv->type = '\0';
    MVar4 = moby->modeBits;
    kv->flag = 9;
    kv->xyBounceDamp = 1.0;
    kv->zBounceDamp = 1.0;
    kv->wallBounceDamp = 1.0;
    moby->modeBits =
         MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    kv->zSpeed = fVar11 * 6.0;
    fVar11 = mobyutil::g_FrameTime;
    kv->xySpeed = mobyutil::g_FrameTime * 8.0;
    kv->zSpeed = fVar11 * 10.0;
    fVar11 = (moby->pos).x - g_heroPosition.x;
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar1 = ABS(fVar11);
    fVar2 = ABS(fVar3);
    *(float *)(puVar6 + 0xe) = fVar11;
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    lVar13 = uVar14 << 2;
    fVar11 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar11 = fVar2;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
    fVar2 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar11) {
      lVar16 = uVar8 - 0xa0;
      lVar15 = uVar8 - 0x34;
      lVar13 = uVar8 - 0x24;
      lVar18 = 2;
      fVar11 = (fVar2 - fVar11) / (fVar2 + fVar11);
      fVar2 = fVar11 * fVar11;
      *(float *)(puVar6 + 0x11) = fVar11;
      *(float *)(puVar6 + 0x10) = fVar11;
      *(float *)((int)puVar6 + 0x84) = fVar11;
      *(float *)((int)puVar6 + 0x7c) = fVar11;
      fVar11 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar11;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar11 * fVar2;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar11 * fVar11;
        iVar10 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar10 + 4) * fVar11 * fVar11;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar8 - 0x34;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar13 = lVar16;
      lVar15 = lVar9;
      do {
        fVar11 = *pfVar17;
        fVar2 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar11;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      lVar15 = 2;
      do {
        iVar10 = (int)lVar9;
        lVar9 = lVar9 + 0x10;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar10 + 0x7c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar1);
    }
    mobyutil::MB_StartKick(dVar19,moby,kv,lVar13,1,1,0);
    kv->peakFrame = 11.0;
    *(undefined4 *)&kv->field_0x54 = 0x41900000;
    moby->state = '\x01';
  }
  moby->damage = -1;
  if (moby->state == 0) {
    if ((kv == (KickVars *)0x0) || ((Spline *)kv[1].kickVel[0] == (Spline *)0x0)) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      fVar11 = (float)path::GetPathPnt(mobyutil::g_FrameTime * 5.0,moby,(Spline *)kv[1].kickVel[0],
                                       (Vec4 *)&moby->pos,(int)kv[1].kickVel[1],1);
      piVar5 = (int *)kv[1].kickVel[0];
      kv[1].kickVel[1] = fVar11;
      if (fVar11 == (float)(*piVar5 + -1)) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (moby->state < 2) {
    uVar12 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar12 & 0x40) == 0) {
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0031ddc8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M261_0031ddc8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M261_0031ddc8(void)

{
  DAT_0080002c = 0x10000;
  return;
}



//==== 0031dde0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_261(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 261 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_261(MobyInstance *moby)

{
  return moby;
}



//==== 0031dde4  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_262(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 262 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_262(MobyInstance *moby)

{
  return moby;
}



//==== 0031de18  ns=mobyupdate_helpers  size=0x344
// sig: undefined M267_0031de18(void)
// callers(1): 0031eca8 mobyupdate_helpers::M267_0031eca8
// callees(3): 000efa28 mobyfunc::CreateMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * mobyupdate_helpers::M267_0031de18(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  short sVar8;
  MobyInstance *pMVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  sVar8 = mobyutil::MB_randInt(4);
  pMVar7 = mobyfunc::CreateMoby(sVar8 + ASTEROID_0107);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    dVar15 = -2.0;
    dVar14 = 2.0;
    pfVar6 = *(float **)(param_1 + 0x78);
    dVar9 = (double)mobyutil::MB_randRangeFloat(-2.0,2.0);
    *pfVar5 = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
    pfVar5[1] = (float)dVar9;
    dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
    dVar15 = (double)pfVar5[1];
    dVar12 = (double)*pfVar5;
    pfVar5[2] = (float)dVar14;
    pfVar5[8] = (float)(dVar12 + (double)*pfVar6);
    fVar3 = SQRT((float)(dVar14 * dVar14 +
                        (double)(float)(dVar12 * dVar12 + (double)(float)(dVar15 * dVar15))));
    pfVar5[9] = (float)(dVar15 + (double)pfVar6[1]);
    fVar2 = pfVar6[2];
    pfVar5[0xb] = pfVar5[3];
    pfVar5[10] = (float)(dVar14 + (double)fVar2);
    dVar16 = 0.0;
    dVar13 = (double)((mobyutil::g_FrameTime * 50.0) / fVar3);
    dVar9 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar9 = (double)(float)(dVar12 * dVar13);
    }
    dVar11 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar10 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar10 = (double)(float)(dVar14 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar9 = (double)(float)(dVar12 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar10 = (double)(float)(dVar14 * dVar13);
    }
    *pfVar5 = (float)dVar9;
    pfVar5[1] = (float)dVar11;
    pfVar5[2] = (float)dVar10;
    fVar2 = *param_2;
    *pfVar5 = (float)(dVar9 + (double)fVar2);
    fVar3 = param_2[1];
    pfVar5[1] = (float)(dVar11 + (double)fVar3);
    fVar4 = param_2[2];
    fVar1 = DAT_0071f408 * -0.7 + 1.0;
    *pfVar5 = (float)(dVar9 + (double)fVar2) * fVar1;
    pfVar5[1] = (float)(dVar11 + (double)fVar3) * fVar1;
    pfVar5[2] = (float)(dVar10 + (double)fVar4) * fVar1;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pfVar5[0x13] = 2.8026e-45;
    pMVar7->alpha = '\x7f';
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.125,0.25);
    fVar2 = (float)((double)*(float *)(param_1 + 0x2c) * dVar9);
    pMVar7->scale = fVar2;
    pfVar5[0x14] = fVar2;
    dVar15 = -0.05235987901687622;
    dVar14 = 0.05235987901687622;
    dVar9 = (double)mobyutil::MB_randRangeFloat(-0.05235988,0.05235988);
    pfVar5[0x10] = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
    pfVar5[0x11] = (float)dVar9;
    dVar15 = (double)GameCamera.posX;
    fVar2 = (float)((double)pfVar5[8] - dVar15);
    (pMVar7->pos).x = fVar2;
    dVar14 = (double)GameCamera.posY;
    fVar3 = (float)((double)pfVar5[9] - dVar14);
    (pMVar7->pos).y = fVar3;
    dVar9 = (double)GameCamera.posZ;
    fVar4 = (float)((double)pfVar5[10] - dVar9);
    (pMVar7->pos).z = fVar4;
    (pMVar7->pos).w = pfVar5[0xb];
    dVar12 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    if (dVar12 <= 100.0) {
      (pMVar7->pos).x = pfVar5[8];
      (pMVar7->pos).y = pfVar5[9];
      (pMVar7->pos).z = pfVar5[10];
      (pMVar7->pos).w = pfVar5[0xb];
      pMVar7->scale = pfVar5[0x14];
    }
    else {
      fVar1 = (float)(100.0 / dVar12);
      dVar13 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar13 = (double)(fVar4 * fVar1);
      }
      dVar11 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar11 = (double)(fVar3 * fVar1);
      }
      dVar10 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar10 = (double)(fVar2 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar13 = (double)(fVar4 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar11 = (double)(fVar3 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar10 = (double)(fVar2 * fVar1);
      }
      (pMVar7->pos).z = (float)(dVar13 + dVar9);
      (pMVar7->pos).y = (float)(dVar11 + dVar14);
      (pMVar7->pos).x = (float)(dVar10 + dVar15);
      pMVar7->scale = pfVar5[0x14] * fVar1;
    }
  }
  return pMVar7;
}



//==== 0031e1b8  ns=mobyupdate_helpers  size=0x408
// sig: undefined Spawn_Moby267_GasparAsteroid(void)
// callers(1): 0031fbe0 mobyupdate_unsorted::UpdateMoby_a_lot_17
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000ffb70 mobyutil::GetGroundZ

MobyInstance * mobyupdate_helpers::Spawn_Moby267_GasparAsteroid(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  short sVar8;
  MobyInstance *pMVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 local_50 [8];
  float local_48;
  float local_44;
  
  sVar8 = mobyutil::MB_randInt(4);
  pMVar7 = mobyfunc::CreateMoby(sVar8 + ASTEROID_0107);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    dVar16 = 0.0;
    dVar14 = 250.0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.0,250.0);
    dVar10 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    fVar1 = (float)(dVar10 + 1.570796251296997);
    dVar17 = (double)(float)(3.141592502593994 - dVar10);
    if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
      dVar17 = dVar10;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    dVar11 = (double)(float)(-3.141592502593994 - dVar10);
    if ((double)(float)(-3.141592502593994 - dVar10) - dVar17 < 0.0) {
      dVar11 = dVar17;
    }
    dVar17 = 100.0;
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar10 = (double)(float)(dVar11 * dVar11);
    fVar6 = fVar4 * fVar4;
    dVar13 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar11));
    fVar3 = fVar6 * fVar6 * fVar4;
    dVar12 = (double)(float)(dVar10 * dVar13);
    fVar2 = fVar6 * fVar3;
    fVar1 = (float)((double)((float)(dVar10 * dVar12) * 2.601887e-06 +
                            (float)(dVar12 * -0.0001980741071747616 +
                                   (double)(float)(dVar13 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar10 * dVar11) *
                                                                  -0.16666656732559204 + dVar11))))
                    * dVar9 + 256.0);
    fVar3 = (float)((double)(fVar6 * fVar2 * 2.601887e-06 +
                            fVar2 * -0.0001980741 +
                            fVar3 * 0.0083330255 + fVar6 * fVar4 * -0.16666657 + fVar4) * dVar9 +
                   256.0);
    (pMVar7->pos).x = 1000.0;
    (pMVar7->pos).y = 500.0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(200.0,(float)dVar14);
    (pMVar7->pos).z = (float)dVar9;
    fVar4 = (pMVar7->pos).x + fVar3;
    (pMVar7->pos).x = fVar4;
    (pMVar7->pos).y = (pMVar7->pos).y + fVar1;
    (pMVar7->pos).z = (float)(dVar9 + 100.0);
    *pfVar5 = fVar4;
    pfVar5[1] = (pMVar7->pos).y;
    pfVar5[2] = (pMVar7->pos).z;
    pfVar5[3] = (pMVar7->pos).w;
    uVar15 = 0x3fe0000000000000;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.5,1.0);
    pMVar7->scale = (float)((double)pMVar7->scale * dVar9);
    dVar14 = -0.015707964077591896;
    dVar10 = 0.015707964077591896;
    dVar9 = (double)mobyutil::MB_randRangeFloat(-0.015707964,0.015707964);
    pfVar5[0x10] = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar10);
    pfVar5[0x11] = (float)dVar9;
    dVar9 = (double)mobyutil::GetGroundZ(uVar15,local_50,0);
    local_48 = (float)dVar9;
    if (dVar9 < 25.0) {
      local_48 = 25.0;
    }
    pfVar5[8] = fVar3;
    pfVar5[9] = fVar1;
    pfVar5[10] = local_48;
    pfVar5[0xb] = local_44;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pfVar5[0x13] = 1.4013e-45;
    dVar9 = (double)mobyutil::MB_randRangeFloat(110.0,130.0);
    pfVar5[0x15] = (float)(dVar9 * (double)mobyutil::g_FrameTime);
    pfVar5[0x14] = pMVar7->scale;
    dVar10 = -100.0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(-100.0,(float)dVar17);
    *pfVar5 = (float)((double)*pfVar5 + dVar9);
    dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar17);
    pfVar5[1] = (float)((double)pfVar5[1] + dVar9);
    dVar14 = (double)GameCamera.posX;
    fVar1 = (float)((double)*pfVar5 - dVar14);
    (pMVar7->pos).x = fVar1;
    dVar10 = (double)GameCamera.posY;
    fVar3 = (float)((double)pfVar5[1] - dVar10);
    (pMVar7->pos).y = fVar3;
    dVar9 = (double)GameCamera.posZ;
    fVar4 = (float)((double)pfVar5[2] - dVar9);
    (pMVar7->pos).z = fVar4;
    (pMVar7->pos).w = pfVar5[3];
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
    if (dVar11 <= dVar17) {
      (pMVar7->pos).x = *pfVar5;
      (pMVar7->pos).y = pfVar5[1];
      (pMVar7->pos).z = pfVar5[2];
      (pMVar7->pos).w = pfVar5[3];
      fVar2 = pfVar5[0x14];
    }
    else {
      fVar2 = (float)(dVar17 / dVar11);
      dVar17 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar17 = (double)(fVar4 * fVar2);
      }
      dVar12 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar12 = (double)(fVar3 * fVar2);
      }
      dVar13 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar13 = (double)(fVar1 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar17 = (double)(fVar4 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar12 = (double)(fVar3 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar13 = (double)(fVar1 * fVar2);
      }
      (pMVar7->pos).z = (float)(dVar17 + dVar9);
      (pMVar7->pos).y = (float)(dVar12 + dVar10);
      (pMVar7->pos).x = (float)(dVar13 + dVar14);
      fVar2 = pfVar5[0x14] * fVar2;
    }
    pMVar7->scale = fVar2;
    pfVar5[0x16] = -NAN;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return pMVar7;
}



//==== 0031e5f0  ns=mobyupdate_helpers  size=0x444
// sig: undefined M267_0031e5f0(void)
// callers(1): 0031fbe0 mobyupdate_unsorted::UpdateMoby_a_lot_17
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * mobyupdate_helpers::M267_0031e5f0(float param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  short sVar12;
  MobyInstance *pMVar10;
  Vec4 *pVVar11;
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
  
  sVar12 = mobyutil::MB_randInt(4);
  pMVar10 = mobyfunc::CreateMoby(sVar12 + ASTEROID_0107);
  if (pMVar10 != (MobyInstance *)0x0) {
    iVar4 = *(int *)((int)param_1 + 0x78);
    fVar1 = *(f32 *)((int)param_1 + 0x14);
    (pMVar10->pos).x = *(f32 *)((int)param_1 + 0x10);
    fVar2 = *(f32 *)((int)param_1 + 0x18);
    (pMVar10->pos).y = fVar1;
    fVar1 = *(f32 *)((int)param_1 + 0x1c);
    pfVar5 = (float *)pMVar10->pVar;
    (pMVar10->pos).z = fVar2;
    (pMVar10->pos).w = fVar1;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
    pfVar5[0x14] = param_1;
    fVar6 = *(float *)(iVar4 + 0x10);
    pfVar5[5] = 0.0;
    pfVar5[4] = fVar6;
    pfVar5[0x12] = 1.4013e-45;
    pMVar10->setByGroup = '\x01';
    pMVar10->updateDistance = -1;
    pMVar10->drawDistance = 0xff;
    pMVar10->enabled = '\x01';
    mobyfunc::SetColorOfMoby(pMVar10,0x80,0x80,0x80);
    pMVar10->alpha = '\0';
    dVar13 = (double)mobyutil::MB_randRangeFloat(0.4,0.85);
    pMVar10->scale = (float)((double)pMVar10->scale * dVar13);
    dVar22 = -0.005235987715423107;
    dVar20 = 0.005235987715423107;
    dVar13 = (double)mobyutil::MB_randRangeFloat(-0.0052359877,0.0052359877);
    pfVar5[0x10] = (float)dVar13;
    dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar20);
    pfVar5[0x11] = (float)dVar13;
    if (-1 < (int)pfVar5[4]) {
      pSVar7 = Splines[(int)pfVar5[4]];
      dVar20 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
      pVVar11 = pSVar7->points + pSVar7->cnt + -1;
      fVar6 = pSVar7->points[1].z - pSVar7->points[0].z;
      fVar3 = pVVar11->z - (float)((Spline *)(pVVar11 + -1))->cursor;
      fVar8 = fVar3 * (pSVar7->points[1].x - pSVar7->points[0].x) -
              (pVVar11->x - (float)((Spline *)(pVVar11 + -1))->cnt) * fVar6;
      dVar21 = 0.0;
      fVar6 = (pVVar11->y - (float)((Spline *)(pVVar11 + -1))->cap) * fVar6 -
              fVar3 * (pSVar7->points[1].y - pSVar7->points[0].y);
      pfVar5[2] = 0.0;
      pfVar5[3] = 0.0;
      dVar22 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8);
      dVar17 = (double)(fVar6 * (float)(dVar20 / dVar22));
      dVar16 = (double)(fVar8 * (float)(dVar20 / dVar22));
      dVar13 = dVar21;
      if (0.0 - dVar22 < 0.0) {
        dVar13 = dVar17;
      }
      dVar18 = dVar21;
      if (0.0 - dVar22 < 0.0) {
        dVar18 = dVar16;
      }
      if (dVar22 - 0.0 < 0.0) {
        dVar13 = dVar17;
      }
      if (dVar22 - 0.0 < 0.0) {
        dVar18 = dVar16;
      }
      *pfVar5 = (float)dVar13;
      pfVar5[1] = (float)dVar18;
      pVVar11 = pSVar7->points + pSVar7->cnt + -1;
      fVar3 = pVVar11->z - pSVar7->points[0].z;
      dVar19 = (double)(fVar3 * fVar8);
      dVar18 = (double)(fVar3 * fVar6);
      dVar17 = (double)((pVVar11->x - pSVar7->points[0].x) * fVar8 -
                       (pVVar11->y - pSVar7->points[0].y) * fVar6);
      dVar13 = (double)mobyutil::MB_randRangeFloat(0.0,5.0);
      fVar6 = *pfVar5;
      dVar16 = (double)SQRT((float)(dVar17 * dVar17 +
                                   (double)(float)(dVar18 * dVar18 +
                                                  --(double)(float)(dVar19 * dVar19))));
      dVar22 = (double)(float)(dVar13 / dVar16);
      dVar13 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar13 = (double)(float)(dVar17 * dVar22);
      }
      dVar14 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar14 = (double)(float)(dVar18 * dVar22);
      }
      dVar15 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar15 = -(double)(float)(dVar19 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar13 = (double)(float)(dVar17 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar14 = (double)(float)(dVar18 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar15 = -(double)(float)(dVar19 * dVar22);
      }
      pfVar5[2] = (float)((double)pfVar5[2] + dVar13);
      pfVar5[1] = (float)((double)pfVar5[1] + dVar14);
      *pfVar5 = (float)((double)fVar6 + dVar15);
      pfVar5[8] = pSVar7->points[0].x;
      pfVar5[9] = pSVar7->points[0].y;
      pfVar5[10] = pSVar7->points[0].z;
      pfVar5[0xb] = pSVar7->points[0].w;
      pfVar5[0xc] = *(float *)(iVar4 + 0x30);
      pfVar5[0xd] = *(float *)(iVar4 + 0x34);
      pfVar5[0xe] = *(float *)(iVar4 + 0x38);
      pfVar5[0xf] = *(float *)(iVar4 + 0x3c);
      fVar8 = pSVar7->points[0].x + (float)((double)fVar6 + dVar15);
      (pMVar10->pos).x = fVar8;
      fVar9 = pSVar7->points[0].y + pfVar5[1];
      (pMVar10->pos).y = fVar9;
      fVar6 = pSVar7->points[0].z;
      fVar3 = pfVar5[2];
      (pMVar10->pos).w = pSVar7->points[0].w;
      fVar8 = fVar8 + GameCamera.posX;
      (pMVar10->pos).x = fVar8;
      fVar9 = fVar9 + GameCamera.posY;
      (pMVar10->pos).y = fVar9;
      fVar6 = fVar6 + fVar3 + GameCamera.posZ;
      (pMVar10->pos).z = fVar6;
      (pMVar10->pos).x = fVar8 - pfVar5[0xc];
      (pMVar10->pos).y = fVar9 - pfVar5[0xd];
      (pMVar10->pos).z = fVar6 - pfVar5[0xe];
      pfVar5[3] = (float)(dVar20 * 0.05000000074505806 + 10.0);
      pMVar10->scale = pMVar10->scale * (float)(dVar20 * 0.009999999776482582 + 1.0);
      pfVar5[3] = pfVar5[3] * mobyutil::g_FrameTime;
    }
    mobyfunc::UpdateMobyTransform(pMVar10);
  }
  return pMVar10;
}



//==== 0031ea48  ns=mobyupdate_helpers  size=0x1ec
// sig: undefined M267_0031ea48(void)
// callers(1): 0031fbe0 mobyupdate_unsorted::UpdateMoby_a_lot_17
// callees(2): 000efb38 mobyfunc::DeleteMoby; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M267_0031ea48(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  
  if ((byte)param_1->alpha < 3) {
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    param_1->alpha = param_1->alpha - 2;
    pfVar5 = (float *)param_1->pVar;
    fVar1 = *pfVar5;
    fVar6 = DAT_0071f408 * -0.01999998 + 1.0;
    fVar2 = pfVar5[1];
    *pfVar5 = fVar1 * fVar6;
    pfVar5[1] = fVar2 * fVar6;
    fVar7 = pfVar5[8] + fVar1 * fVar6;
    fVar1 = DAT_0071f418 * 20.0;
    pfVar5[9] = pfVar5[9] + fVar2 * fVar6;
    pfVar5[8] = fVar7;
    fVar1 = pfVar5[2] * fVar6 - fVar1;
    pfVar5[2] = fVar1;
    pfVar5[10] = pfVar5[10] + fVar1;
    fVar11 = GameCamera.posX;
    fVar7 = fVar7 - GameCamera.posX;
    (param_1->pos).x = fVar7;
    fVar12 = GameCamera.posY;
    fVar2 = pfVar5[9] - GameCamera.posY;
    (param_1->pos).y = fVar2;
    fVar13 = GameCamera.posZ;
    fVar6 = pfVar5[10] - GameCamera.posZ;
    (param_1->pos).z = fVar6;
    (param_1->pos).w = pfVar5[0xb];
    fVar1 = (param_1->rotation).x;
    fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2);
    if (fVar10 <= 100.0) {
      (param_1->pos).x = pfVar5[8];
      (param_1->pos).y = pfVar5[9];
      (param_1->pos).z = pfVar5[10];
      (param_1->pos).w = pfVar5[0xb];
      fVar4 = pfVar5[0x14];
    }
    else {
      fVar4 = 100.0 / fVar10;
      fVar3 = 0.0;
      fVar9 = fVar3;
      if (0.0 - fVar10 < 0.0) {
        fVar9 = fVar6 * fVar4;
      }
      fVar8 = fVar3;
      if (0.0 - fVar10 < 0.0) {
        fVar8 = fVar2 * fVar4;
      }
      if (0.0 - fVar10 < 0.0) {
        fVar3 = fVar7 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar9 = fVar6 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar8 = fVar2 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar3 = fVar7 * fVar4;
      }
      (param_1->pos).z = fVar9 + fVar13;
      (param_1->pos).y = fVar8 + fVar12;
      (param_1->pos).x = fVar3 + fVar11;
      fVar4 = pfVar5[0x14] * fVar4;
    }
    param_1->scale = fVar4;
    dVar14 = (double)fastfunc::FastWrapRot(fVar1,pfVar5[0x10]);
    (param_1->rotation).x = (float)dVar14;
    dVar14 = (double)fastfunc::FastWrapRot((float)dVar14,pfVar5[0x11]);
    (param_1->rotation).y = (float)dVar14;
  }
  return;
}



//==== 0031eca8  ns=mobyupdate_helpers  size=0xf10
// sig: undefined M267_0031eca8(void)
// callers(1): 0031fbe0 mobyupdate_unsorted::UpdateMoby_a_lot_17
// callees(11): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 0015d204 sound::sound_MobyPlay_oClass; 0015d710 sound::sound_SetVol; 0031de18 mobyupdate_helpers::M267_0031de18; 00367688 mobyupdate_helpers::M417_00367688; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M267_0031eca8(MobyInstance *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  int iVar13;
  longlong lVar12;
  float fVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined4 local_140 [36];
  longlong local_b0;
  
  pfVar6 = (float *)param_1->pVar;
  fVar14 = pfVar6[8] - *pfVar6;
  fVar3 = pfVar6[9] - pfVar6[1];
  fVar4 = pfVar6[10] - pfVar6[2];
  fVar2 = SQRT(fVar4 * fVar4 + fVar14 * fVar14 + fVar3 * fVar3);
  dVar23 = 0.0;
  fVar11 = pfVar6[0x15] / fVar2;
  dVar18 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar18 = (double)(fVar3 * fVar11);
  }
  dVar19 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(fVar14 * fVar11);
  }
  dVar20 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar20 = (double)(fVar4 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(fVar14 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar20 = (double)(fVar4 * fVar11);
  }
  fVar14 = *pfVar6;
  *pfVar6 = (float)((double)fVar14 + dVar19);
  pfVar6[1] = pfVar6[1] + (float)dVar18;
  pfVar6[2] = pfVar6[2] + (float)dVar20;
  dVar18 = (double)GameCamera.posX;
  fVar14 = (float)((double)(float)((double)fVar14 + dVar19) - dVar18);
  (param_1->pos).x = fVar14;
  dVar19 = (double)GameCamera.posY;
  fVar3 = (float)((double)pfVar6[1] - dVar19);
  (param_1->pos).y = fVar3;
  dVar20 = (double)GameCamera.posZ;
  fVar4 = (float)((double)pfVar6[2] - dVar20);
  (param_1->pos).z = fVar4;
  dVar25 = (double)SQRT(fVar4 * fVar4 + fVar14 * fVar14 + fVar3 * fVar3);
  (param_1->pos).w = pfVar6[3];
  if ((dVar25 <= 100.0) ||
     (uVar9 = (int)pfVar6[2] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x41d80001)) {
    (param_1->pos).x = *pfVar6;
    (param_1->pos).y = pfVar6[1];
    (param_1->pos).z = pfVar6[2];
    (param_1->pos).w = pfVar6[3];
    fVar2 = pfVar6[0x14];
  }
  else {
    fVar2 = (float)(100.0 / dVar25);
    dVar24 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar24 = (double)(fVar4 * fVar2);
    }
    dVar26 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar26 = (double)(fVar3 * fVar2);
    }
    dVar16 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar16 = (double)(fVar14 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar24 = (double)(fVar4 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar26 = (double)(fVar3 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar16 = (double)(fVar14 * fVar2);
    }
    (param_1->pos).z = (float)(dVar24 + dVar20);
    (param_1->pos).y = (float)(dVar26 + dVar19);
    (param_1->pos).x = (float)(dVar16 + dVar18);
    fVar2 = pfVar6[0x14] * fVar2;
  }
  param_1->scale = fVar2;
  dVar18 = (double)fastfunc::FastWrapRot((param_1->rotation).x,pfVar6[0x10]);
  (param_1->rotation).x = (float)dVar18;
  dVar18 = (double)fastfunc::FastWrapRot((float)dVar18,pfVar6[0x11]);
  uVar5 = param_1->state;
  (param_1->rotation).y = (float)dVar18;
  if (uVar5 == '\0') {
    uVar9 = (int)pfVar6[2] >> 0x1f;
    if ((((int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x42c80000) &&
        (uVar9 = (int)*pfVar6 >> 0x1f, (int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9) < 0x43fa0000)) &&
       (uVar9 = (int)pfVar6[1] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[1]) - uVar9) < 0x43fa0000))
    {
      dVar19 = -5.0;
      dVar18 = 5.0;
      mobyutil::MB_randRangeFloat(-5.0,5.0);
      mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar18);
      iVar13 = collproc::CollLine(local_1d0,local_1c0,4,param_1,0);
      if ((iVar13 != 0) &&
         (0x41d40000 <
          (int)(((uint)((int)CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)CollOutput.ip.z) -
               ((int)CollOutput.ip.z >> 0x1f)))) {
        iVar13 = 0;
        iVar15 = 0;
        if (dVar25 - 7.0 < 0.0) {
          dVar23 = (double)(float)(7.0 - dVar25);
        }
        dVar26 = 8.0;
        dVar24 = 10.0;
        uVar22 = 0x41186a0000000000;
        dVar25 = 15.5;
        dVar20 = 20.5;
        dVar19 = 25.5;
        dVar18 = 30.5;
        do {
          dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          dVar17 = (double)mobyutil::g_FrameTime;
          local_140[0] = 0x4f008fff;
          local_140[1] = 0x4f008fff;
          local_140[2] = 0x4f007fff;
          local_140[3] = 0x4f006fff;
          local_140[4] = 0x2fffffff;
          local_140[5] = 0x2fffffff;
          dVar21 = (double)(float)(dVar16 * dVar17 - (double)(float)(dVar17 * dVar23));
          local_140[6] = 0x2f005f7f;
          local_140[7] = 0x2f004f7f;
          local_140[8] = 0x2f003f7f;
          local_140[9] = 0x2f00004f;
          local_140[10] = 0x2f000000;
          local_140[0xb] = 0x3f000000;
          lVar12 = mobyutil::MB_randInt(dVar16,dVar17,(double)(float)(dVar17 * dVar23),6);
          uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2));
          lVar12 = mobyutil::MB_randInt(6);
          uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar25),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar18);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
          partupd::SpawnPart_11(uVar22,dVar21,pfVar6,local_1b0,uVar7,uVar8);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
        do {
          M267_0031de18(param_1,local_1e0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 10);
        fVar14 = (float)sound::sound_MobyPlay_oClass(6,0,param_1,0xc1);
        pfVar6[0x16] = fVar14;
        if (fVar14 != 0.0) {
          sound::sound_SetVol((int)fVar14,0x800);
        }
        if ((g_heroState != TURRET_PLANE_UI) &&
           (fVar14 = SQRT((pfVar6[2] - GameCamera.posZ) * (pfVar6[2] - GameCamera.posZ) +
                          (*pfVar6 - GameCamera.posX) * (*pfVar6 - GameCamera.posX) +
                          (pfVar6[1] - GameCamera.posY) * (pfVar6[1] - GameCamera.posY)),
           fVar14 < 15.0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          GameCamera.offset0.amp = (64.0 - fVar14) * 0.01;
          auVar27 = loadVectorLeftIndexed(0x44,0x31ec34);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x168,
                          0x9513c0);
        }
        param_1->state = param_1->state + '\x01';
        return;
      }
    }
    if ((pfVar6[10] == 25.0) &&
       (uVar9 = (int)pfVar6[2] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x41d80000))
    {
      iVar13 = 0;
      dVar19 = 4.0;
      dVar18 = 12.0;
      do {
        M417_00367688((double)(float)((double)pfVar6[0x14] * dVar19),
                      (double)(float)((double)pfVar6[0x14] * dVar18),param_1,local_1a0,local_1e0);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 5);
      pfVar6[0x15] = pfVar6[0x15] * (DAT_0071f408 * -0.100000024 + 1.0);
      if ((int)pfVar6[0x16] < 1) {
        fVar14 = (float)sound::sound_MobyPlay_oClass(0,0,param_1,0x107);
        pfVar6[0x16] = fVar14;
      }
    }
    uVar9 = (int)pfVar6[2] >> 0x1f;
    uVar10 = (int)pfVar6[10] >> 0x1f;
    iVar13 = (uVar10 >> 1 ^ (uint)pfVar6[10]) - uVar10;
    if ((int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < iVar13) {
      if (0x41d40000 < iVar13) {
        iVar13 = 0;
        iVar15 = 0;
        if (dVar25 - 7.0 < 0.0) {
          dVar23 = (double)(float)(7.0 - dVar25);
        }
        dVar17 = 8.0;
        dVar16 = 10.0;
        dVar26 = -3.0;
        dVar24 = 3.0;
        uVar22 = 0x41324f8000000000;
        dVar25 = 15.5;
        dVar20 = 20.5;
        dVar19 = 25.5;
        dVar18 = 30.5;
        do {
          dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
          local_140[0xc] = 0x4f008fff;
          local_140[0xd] = 0x4f008fff;
          local_140[0xf] = 0x4f006fff;
          local_140[0x10] = 0x2fffffff;
          local_140[0xe] = 0x4f007fff;
          local_140[0x11] = 0x2fffffff;
          dVar21 = (double)(float)(dVar21 * (double)mobyutil::g_FrameTime -
                                  (double)(float)((double)mobyutil::g_FrameTime * dVar23));
          local_140[0x12] = 0x2f005f7f;
          local_140[0x13] = 0x2f004f7f;
          local_140[0x14] = 0x2f003f7f;
          local_140[0x15] = 0x2f00004f;
          local_140[0x16] = 0x2f000000;
          local_140[0x17] = 0x3f000000;
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          lVar12 = mobyutil::MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x30);
          lVar12 = mobyutil::MB_randInt(6);
          uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x48);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar25),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar18);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
          partupd::SpawnPart_11(uVar22,dVar21,local_180,local_190,uVar7,uVar8);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
        do {
          M267_0031de18(param_1,local_1e0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 10);
        fVar14 = (float)sound::sound_MobyPlay_oClass(6,0,param_1,0xc1);
        pfVar6[0x16] = fVar14;
        if (fVar14 != 0.0) {
          sound::sound_SetVol((int)fVar14,0x800);
        }
        if ((g_heroState != TURRET_PLANE_UI) &&
           (fVar14 = SQRT((pfVar6[2] - GameCamera.posZ) * (pfVar6[2] - GameCamera.posZ) +
                          (*pfVar6 - GameCamera.posX) * (*pfVar6 - GameCamera.posX) +
                          (pfVar6[1] - GameCamera.posY) * (pfVar6[1] - GameCamera.posY)),
           fVar14 < 15.0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          GameCamera.offset0.amp = (64.0 - fVar14) * 0.01;
          auVar27 = loadVectorLeftIndexed(0x44,0x31ec34);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x168,
                          0x9513c0);
        }
      }
      param_1->state = param_1->state + '\x01';
    }
  }
  else {
    param_1->state = uVar5 + '\x01';
    if (pfVar6[10] == 25.0) {
      iVar13 = 0;
      param_1->enabled = '\0';
      param_1->drawDistance = 0;
      dVar23 = 4.0;
      dVar18 = 12.0;
      do {
        M417_00367688((double)(float)((double)pfVar6[0x14] * dVar23),
                      (double)(float)((double)pfVar6[0x14] * dVar18),param_1,local_170,local_1e0);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 2);
      local_b0 = (longlong)(int)(animationSpeed * 10.5);
      if ((int)(animationSpeed * 10.5) < (int)(uint)param_1->state) {
        mobyfunc::DeleteMoby(param_1);
      }
    }
    else {
      iVar13 = 0;
      if (dVar25 - 7.0 < 0.0) {
        dVar23 = (double)(float)(7.0 - dVar25);
      }
      dVar17 = 8.0;
      dVar16 = 10.0;
      dVar26 = -1.0;
      dVar24 = 1.0;
      uVar22 = 0x41324f8000000000;
      dVar25 = 15.5;
      dVar20 = 20.5;
      dVar19 = 25.5;
      dVar18 = 30.5;
      do {
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
        local_140[0x18] = 0x4f008fff;
        local_140[0x19] = 0x4f008fff;
        local_140[0x1b] = 0x4f006fff;
        local_140[0x1c] = 0x2fffffff;
        local_140[0x1a] = 0x4f007fff;
        local_140[0x1d] = 0x2fffffff;
        dVar21 = (double)(float)(dVar21 * (double)mobyutil::g_FrameTime -
                                (double)(float)((double)mobyutil::g_FrameTime * dVar23));
        local_140[0x1e] = 0x2f005f7f;
        local_140[0x1f] = 0x2f004f7f;
        local_140[0x20] = 0x2f003f7f;
        local_140[0x21] = 0x2f00004f;
        local_140[0x22] = 0x2f000000;
        local_140[0x23] = 0x3f000000;
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        lVar12 = mobyutil::MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x60);
        lVar12 = mobyutil::MB_randInt(6);
        uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x78);
        iVar15 = (int)((double)animationSpeed * dVar20);
        local_b0 = (longlong)iVar15;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar25),iVar15);
        iVar15 = (int)((double)animationSpeed * dVar18);
        local_b0 = (longlong)iVar15;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar15);
        partupd::SpawnPart_11(uVar22,dVar21,local_150,local_160,uVar7,uVar8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 3);
      if (2 < param_1->state) {
        mobyfunc::DeleteMoby(param_1);
      }
    }
  }
  return;
}



//==== 0031fbe0  ns=mobyupdate_unsorted  size=0x990
// sig: undefined UpdateMoby_a_lot_17(MobyInstance * moby)
// callers(0): 
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00138238 path::GetPathPnt; 0031e1b8 mobyupdate_helpers::Spawn_Moby267_GasparAsteroid; 0031e5f0 mobyupdate_helpers::M267_0031e5f0; 0031ea48 mobyupdate_helpers::M267_0031ea48; 0031eca8 mobyupdate_helpers::M267_0031eca8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 263
   Moby 264
   Moby 265
   Moby 266
   Moby 267 */

void mobyupdate_unsorted::UpdateMoby_a_lot_17(MobyInstance *moby)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Vec4 *pVVar16;
  int iVar17;
  int iVar19;
  longlong lVar18;
  float *pfVar20;
  char cVar23;
  int iVar21;
  float fVar22;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 in_LR;
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  pfVar7 = (float *)moby->pVar;
  uVar28 = ZEXT48(pfVar7);
  if (pfVar7[0x13] == 2.8026e-45) {
    mobyupdate_helpers::M267_0031ea48(moby);
  }
  else if (pfVar7[0x13] == 1.4013e-45) {
    mobyupdate_helpers::M267_0031eca8(moby);
  }
  else {
    cVar23 = moby->setByGroup;
    if ((cVar23 == '\0') && (pfVar7[0x12] == 0.0)) {
      dVar39 = 0.0;
      pfVar7[0xe] = 0.0;
      pfVar7[0xd] = 0.0;
      pfVar7[0xc] = 0.0;
      pfVar7[3] = mobyutil::g_FrameTime * 10.0;
      if (-1 < (int)pfVar7[4]) {
        auVar43 = ZEXT416(0);
        auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        pSVar9 = Splines[(int)pfVar7[4]];
        uVar27 = ZEXT48(pSVar9);
        auVar41 = loadVectorLeftIndexed(in_LR,uVar27);
        auVar43 = auVar40;
        auVar45 = auVar40;
        if (0 < pSVar9->cnt) {
          auVar43 = ZEXT416(0);
          auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          iVar21 = 0;
          lVar18 = uVar27 + 0x14;
          lVar26 = uVar27 + 0x18;
          auVar43 = auVar40;
          auVar45 = auVar40;
          uVar25 = uVar27;
          do {
            uVar25 = uVar25 + 0x10;
            auVar42 = loadVectorLeftIndexed(in_LR,uVar25);
            auVar41 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar46 = vectorAddFloatingPoint(auVar45,auVar42);
            auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar44 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
            iVar21 = iVar21 + 1;
            auVar45 = vectorAddFloatingPoint
                                (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                 auVar42);
            auVar42 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x30,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xc) & 0xfffffffc) = uVar10;
            auVar46 = loadVectorLeftIndexed(in_LR,lVar18);
            auVar42 = vectorAddFloatingPoint(auVar43,auVar46);
            auVar43 = vectorAddFloatingPoint
                                (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                                 auVar46);
            auVar41 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x34,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar10;
            auVar42 = loadVectorLeftIndexed(in_LR,lVar26);
            auVar41 = vectorAddFloatingPoint(auVar40,auVar42);
            auVar40 = vectorAddFloatingPoint
                                (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                                 auVar42);
            auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x38,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xe) & 0xfffffffc) = uVar10;
            auVar41 = loadVectorLeftIndexed(in_LR,uVar27);
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
          } while (iVar21 < pSVar9->cnt);
        }
        auVar44 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = ZEXT416(0xffffffff);
        auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar44 = vectorConvertFromSignedFixedPointWord
                            (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0);
        auVar41 = ZEXT416(0xffffffff);
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar41 = ZEXT416(0xffffffff);
        auVar49 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = loadVectorLeftIndexed(0xc,0x31fbb8);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        auVar41 = ZEXT416(0xffffffff);
        auVar51 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar41 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        iVar21 = 0;
        dVar38 = 1.0;
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar44,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar47,auVar43,auVar42);
        auVar47 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar49 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar50 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar44,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar48);
        auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar44,auVar46);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar47);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar43,
                             auVar49);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar43,
                             auVar50);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar43,
                             auVar48);
        uVar10 = storeVectorElementWordIndexed(auVar44,0x30,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xc) & 0xfffffffc) = uVar10;
        uVar10 = storeVectorElementWordIndexed(auVar45,0x34,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar10;
        uVar10 = storeVectorElementWordIndexed(auVar43,0x38,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xe) & 0xfffffffc) = uVar10;
        pfVar7[0xe] = pSVar9->points[0].z - 10.0;
        dVar37 = 32.0;
        do {
          iVar19 = mobyupdate_helpers::Spawn_Moby267_GasparAsteroid();
          if (iVar19 != 0) {
            pfVar8 = *(float **)(iVar19 + 0x78);
            dVar36 = (double)(pfVar8[9] - pfVar8[1]);
            dVar35 = (double)(pfVar8[8] - *pfVar8);
            dVar34 = (double)(pfVar8[10] - pfVar8[2]);
            dVar33 = (double)SQRT((float)(dVar34 * dVar34 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar36 * dVar36))));
            dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)(dVar33 - dVar37));
            dVar30 = (double)(float)(dVar29 / dVar33);
            dVar29 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar29 = (double)(float)(dVar34 * dVar30);
            }
            dVar32 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar32 = (double)(float)(dVar36 * dVar30);
            }
            dVar31 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar35 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar29 = (double)(float)(dVar34 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar32 = (double)(float)(dVar36 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar31 = (double)(float)(dVar35 * dVar30);
            }
            pfVar8[2] = (float)((double)pfVar8[2] + dVar29);
            pfVar8[1] = (float)((double)pfVar8[1] + dVar32);
            *pfVar8 = (float)((double)*pfVar8 + dVar31);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x17);
        iVar21 = 0;
        do {
          iVar19 = mobyupdate_helpers::M267_0031e5f0(moby);
          if (iVar19 != 0) {
            pfVar8 = *(float **)(iVar19 + 0x78);
            lVar18 = mobyutil::MB_randInt(pSVar9->cnt + -2);
            dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar38);
            pfVar8[5] = (float)lVar18;
            iVar17 = (int)(lVar18 << 4);
            pfVar24 = (float *)((int)&pSVar9->points[1].x + iVar17);
            pfVar20 = (float *)((int)&pSVar9->points[0].x + iVar17);
            fVar2 = pfVar24[1];
            fVar3 = pfVar20[1];
            fVar4 = pfVar24[2];
            fVar5 = pfVar20[2];
            fVar6 = pfVar24[3];
            fVar22 = (float)((double)(float)((double)*pfVar24 - (double)*pfVar20) * dVar37 +
                            (double)*pfVar20);
            pfVar8[8] = fVar22;
            pfVar8[9] = (float)((double)(fVar2 - fVar3) * dVar37 + (double)pfVar20[1]);
            fVar2 = pfVar20[2];
            pfVar8[0xb] = fVar6;
            pfVar8[10] = (float)((double)(fVar4 - fVar5) * dVar37 + (double)fVar2);
            *(float *)(iVar19 + 0x10) = fVar22;
            *(float *)(iVar19 + 0x14) = pfVar8[9];
            *(float *)(iVar19 + 0x18) = pfVar8[10];
            *(float *)(iVar19 + 0x1c) = pfVar8[0xb];
            fVar3 = pSVar9->points[0].x + *pfVar8;
            *(float *)(iVar19 + 0x10) = fVar3;
            fVar4 = pSVar9->points[0].y + pfVar8[1];
            *(float *)(iVar19 + 0x14) = fVar4;
            fVar22 = pSVar9->points[0].z;
            fVar2 = pfVar8[2];
            *(float *)(iVar19 + 0x1c) = pSVar9->points[0].w;
            fVar3 = fVar3 + GameCamera.posX;
            *(float *)(iVar19 + 0x10) = fVar3;
            fVar4 = fVar4 + GameCamera.posY;
            *(float *)(iVar19 + 0x14) = fVar4;
            fVar22 = fVar22 + fVar2 + GameCamera.posZ;
            *(float *)(iVar19 + 0x18) = fVar22;
            *(float *)(iVar19 + 0x10) = fVar3 - pfVar8[0xc];
            *(float *)(iVar19 + 0x14) = fVar4 - pfVar8[0xd];
            *(float *)(iVar19 + 0x18) = fVar22 - pfVar8[0xe];
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x32);
      }
      pfVar7[0x12] = 1.4013e-45;
      cVar23 = moby->setByGroup;
    }
    if (cVar23 == '\0') {
      iVar21 = mobyutil::MB_randInt((int)(animationSpeed * 40.5));
      if (iVar21 == 0) {
        mobyupdate_helpers::Spawn_Moby267_GasparAsteroid();
      }
    }
    moby->updateDistance = -1;
    fVar22 = pfVar7[4];
    moby->drawDistance = 0xff;
    if (-1 < (int)fVar22) {
      fVar22 = pfVar7[4];
      (moby->pos).x = pfVar7[8];
      (moby->pos).y = pfVar7[9];
      cVar23 = moby->setByGroup;
      (moby->pos).z = pfVar7[10];
      pSVar9 = Splines[(int)fVar22];
      (moby->pos).w = pfVar7[0xb];
      if (((cVar23 == '\0') && ((int)pfVar7[6] < 0x32)) &&
         (iVar21 = fastfunc::FastDecTimerS32(uVar28 + 0x1c), iVar21 != 0)) {
        fVar22 = animationSpeed * 15.5;
        iVar21 = mobyutil::MB_randInt((int)(animationSpeed * 30.5));
        pfVar7[7] = (float)((int)fVar22 + iVar21);
        mobyupdate_helpers::M267_0031e5f0(moby);
      }
      dVar39 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar7[0x10]);
      (moby->rotation).x = (float)dVar39;
      dVar39 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar7[0x11]);
      (moby->rotation).y = (float)dVar39;
      fVar22 = (float)path::GetPathPnt(pfVar7[3],moby,pSVar9,(Vec4 *)&moby->pos,(int)pfVar7[5],1);
      pfVar7[5] = fVar22;
      if (fVar22 == (float)(pSVar9->cnt + -1)) {
        if (moby->setByGroup == '\0') {
          pfVar7[5] = 0.0;
          (moby->pos).x = pSVar9->points[0].x;
          (moby->pos).y = pSVar9->points[0].y;
          (moby->pos).z = pSVar9->points[0].z;
          (moby->pos).w = pSVar9->points[0].w;
        }
        else {
          iVar21 = *(int *)(*(int *)((int)moby->pVar + 0x50) + 0x78);
          *(int *)(iVar21 + 0x18) = *(int *)(iVar21 + 0x18) + -1;
          mobyfunc::DeleteMoby(moby);
        }
      }
      if (pfVar7[5] == 0.0) {
        fVar22 = pSVar9->points[0].y;
        fVar5 = pSVar9->points[1].y - fVar22;
        fVar2 = pSVar9->points[0].x;
        fVar6 = pSVar9->points[1].x - fVar2;
        fVar3 = pSVar9->points[0].z;
        fVar15 = pSVar9->points[1].z - fVar3;
        fVar4 = 0.0;
        fVar14 = fVar15 * fVar15 + fVar6 * fVar6 + fVar5 * fVar5;
        fVar12 = fVar4;
        fVar11 = fVar4;
        fVar13 = fVar4;
        if (SQRT(fVar14) != 0.0) {
          fVar13 = 1.0 / SQRT(fVar14);
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar12 = fVar6 * fVar13;
          fVar11 = fVar5 * fVar13;
          fVar13 = fVar15 * fVar13;
        }
        fVar22 = fVar13 * ((moby->pos).z - fVar3) +
                 fVar12 * ((moby->pos).x - fVar2) + fVar11 * ((moby->pos).y - fVar22);
        if (fVar22 - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        uVar1 = (uint)((fVar22 * 128.0) / SQRT(fVar14));
        moby->alpha = (s8)uVar1;
        if (0x80 < (uVar1 & 0xff)) {
          moby->alpha = -0x80;
        }
      }
      else if (pfVar7[5] == (float)(pSVar9->cnt + -2)) {
        pVVar16 = pSVar9->points + pSVar9->cnt + -1;
        fVar2 = (float)((Spline *)(pVVar16 + -1))->cap - pVVar16->y;
        fVar3 = (float)((Spline *)(pVVar16 + -1))->cnt - pVVar16->x;
        fVar12 = (float)((Spline *)(pVVar16 + -1))->cursor - pVVar16->z;
        fVar22 = 0.0;
        fVar11 = fVar12 * fVar12 + fVar3 * fVar3 + fVar2 * fVar2;
        fVar5 = fVar22;
        fVar4 = fVar22;
        fVar6 = fVar22;
        if (SQRT(fVar11) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar11);
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar5 = fVar3 * fVar6;
          fVar4 = fVar2 * fVar6;
          fVar6 = fVar12 * fVar6;
        }
        fVar2 = fVar6 * ((moby->pos).z - pVVar16->z) +
                fVar5 * ((moby->pos).x - pVVar16->x) + fVar4 * ((moby->pos).y - pVVar16->y);
        if (fVar2 - 0.0 < 0.0) {
          fVar2 = fVar22;
        }
        uVar1 = (uint)((fVar2 * 128.0) / SQRT(fVar11));
        moby->alpha = (s8)uVar1;
        if (0x80 < (uVar1 & 0xff)) {
          moby->alpha = -0x80;
        }
      }
      else {
        moby->alpha = -0x80;
      }
      pfVar7[8] = (moby->pos).x;
      pfVar7[9] = (moby->pos).y;
      pfVar7[10] = (moby->pos).z;
      pfVar7[0xb] = (moby->pos).w;
      fVar2 = (moby->pos).x + *pfVar7;
      (moby->pos).x = fVar2;
      fVar3 = (moby->pos).y + pfVar7[1];
      (moby->pos).y = fVar3;
      fVar2 = fVar2 + GameCamera.posX;
      fVar22 = pfVar7[2];
      (moby->pos).x = fVar2;
      fVar3 = fVar3 + GameCamera.posY;
      (moby->pos).y = fVar3;
      fVar22 = (moby->pos).z + fVar22 + GameCamera.posZ;
      (moby->pos).z = fVar22;
      (moby->pos).x = fVar2 - pfVar7[0xc];
      (moby->pos).y = fVar3 - pfVar7[0xd];
      (moby->pos).z = fVar22 - pfVar7[0xe];
    }
  }
  return;
}



