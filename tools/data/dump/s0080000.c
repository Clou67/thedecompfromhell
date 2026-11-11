//==== 000802a0  ns=hero  size=0x664
// sig: undefined Hero_UpdateGlowAndBlink(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(7): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000fe484 mobyutil::MB_randRange; 00109af0 mobyutil::Delt; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

double hero::Hero_UpdateGlowAndBlink(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *moby;
  int iVar7;
  longlong lVar5;
  longlong lVar6;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double dVar17;
  float fVar18;
  
  if (Cheats[3] == '\0') {
    fVar18 = mobyutil::Delt(1.0,0.05,&FLOAT_0071fb54);
  }
  else {
    fVar18 = mobyutil::Delt(1.8,0.05,&FLOAT_0071fb54);
  }
  dVar16 = (double)fVar18;
  puVar9 = &g_heroMtx;
  moby = g_heroMobyPtr;
  if ((((g_heroType == '\x01') || (g_heroType == '\x02')) || (moby = DAT_0096ae64, g_hasClank == 0))
     && (moby != (MobyInstance *)0x0)) {
    iVar8 = 0x38;
    bVar1 = g_heroHealth == 1;
    moby->modeBits = moby->modeBits | HAS_GLOW;
    if (bVar1) {
      iVar8 = 0x88;
    }
    iVar7 = (int)(animationSpeed * 110.5);
    dVar16 = (double)fastfunc::FastIntToDouble(iVar7);
    fVar18 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar7) * iVar7) /
                    dVar16) * 2.0 * 3.1415927 + -3.1415927;
    fVar2 = fVar18;
    if (3.1415925 - fVar18 <= fVar18) {
      fVar2 = 3.1415925 - fVar18;
    }
    if (fVar2 <= -3.1415925 - fVar18) {
      fVar2 = -3.1415925 - fVar18;
    }
    fVar18 = fVar2 * fVar2;
    fVar3 = fVar18 * fVar18 * fVar2;
    fVar4 = fVar18 * fVar3;
    dVar17 = (double)(fVar2 + fVar18 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 +
                      fVar4 * -0.0001980741 + fVar18 * fVar4 * 2.601887e-06);
    dVar16 = (double)(float)(dVar17 * 24.0);
    iVar7 = fastfunc::FastDoubleToInt(dVar16);
    lVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 48.0));
    lVar6 = fastfunc::FastDoubleToInt(dVar16);
    uVar14 = iVar8 + iVar7 + 0xc;
    lVar12 = lVar5 + 0xa0;
    lVar11 = lVar6 + 0x4c;
    dVar16 = extraout_f1;
    if (DAT_00969ece != 0) {
      fVar2 = animationSpeed * 5.5;
      fVar3 = animationSpeed * 20.5;
      fVar18 = 1.0;
      if ((int)(animationSpeed * 45.5) - (int)fVar2 < (int)DAT_00969ece) {
        dVar16 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 45.5) - (int)DAT_00969ece)
        ;
        dVar17 = (double)fastfunc::FastIntToDouble((int)fVar2);
        fVar18 = (float)(dVar16 / dVar17);
      }
      if ((int)DAT_00969ece < (int)fVar3) {
        dVar16 = (double)fastfunc::FastIntToDouble();
        dVar17 = (double)fastfunc::FastIntToDouble((int)fVar3);
        fVar18 = (float)(dVar16 / dVar17);
      }
      dVar16 = (double)fVar18;
      iVar8 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)(iVar7 + 0xc) * dVar16));
      lVar5 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)((int)lVar5 + 0x18) * dVar16));
      lVar6 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)((int)lVar6 + 0xc) * dVar16));
      lVar11 = lVar11 - lVar6;
      iVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * 112.0));
      uVar14 = (uVar14 - iVar8) + iVar7;
      lVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * 72.0));
      lVar12 = (lVar12 - lVar5) - lVar6;
      dVar16 = extraout_f1_00;
    }
    moby->field60_0x90 = (uint)(lVar12 << 8) | uVar14 | (uint)(lVar11 << 0x10) | 0x80000000;
    if (g_heroType == '\0') {
      iVar8 = fastfunc::FastDecTimerS16(&DAT_0096acdc);
      dVar16 = extraout_f1_01;
      if ((iVar8 != 0) && (moby->animationId == '\x01')) {
        DAT_0096acdc = mobyutil::MB_randRange
                                 ((int)(animationSpeed * 50.5),(int)(animationSpeed * 200.5));
        DAT_0096acde = 1;
        dVar16 = extraout_f1_02;
      }
      if (DAT_0096acde != 0) {
        if ((DAT_0096acde != 0) && (DAT_0096acde = DAT_0096acde + 1, 0x15 < DAT_0096acde)) {
          DAT_0096acde = 0;
        }
        if (DAT_0096acde == 0) {
          iVar8 = 0;
          do {
            if ((&DAT_0096abd1)[iVar8 * 0x40] != '\0') {
              dVar16 = (double)mobyfunc::DetachManipulator(moby,&DAT_0096abd0 + iVar8 * 0x40);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
        }
        else {
          iVar15 = 0;
          iVar13 = 0;
          iVar7 = 0;
          iVar8 = 0;
          puVar10 = puVar9;
          do {
            if (*(char *)((int)puVar10 + 0xef1) == '\0') {
              mobyfunc::AttachManipulator
                        (moby,*(uint32_t *)((int)&DAT_00723868 + iVar13),&DAT_0096abd0 + iVar8);
              *(undefined1 *)((int)puVar10 + 0xef3) = 1;
              *(undefined4 *)((int)&DAT_0096abe0 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723750 + iVar7);
              *(undefined4 *)((int)&DAT_0096abe4 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723754 + iVar7);
              *(undefined4 *)((int)&DAT_0096abe8 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723758 + iVar7);
              *(undefined4 *)((int)&DAT_0096abec + iVar8) =
                   *(undefined4 *)((int)&DAT_0072375c + iVar7);
              *(undefined4 *)((int)&DAT_0096abf0 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723790 + iVar7);
              *(undefined4 *)((int)&DAT_0096abf4 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723794 + iVar7);
              *(undefined4 *)((int)&DAT_0096abf8 + iVar8) =
                   *(undefined4 *)((int)&DAT_00723798 + iVar7);
              *(undefined4 *)((int)&DAT_0096abfc + iVar8) =
                   *(undefined4 *)((int)&DAT_0072379c + iVar7);
              fVar18 = *(float *)((int)&DAT_007237d0 + iVar7);
              fVar2 = *(float *)((int)&DAT_007237d4 + iVar7);
              fVar3 = *(float *)((int)&DAT_007237d8 + iVar7);
              fVar4 = moby->scale;
              *(undefined4 *)((int)&DAT_0096ac0c + iVar8) =
                   *(undefined4 *)((int)&DAT_007237dc + iVar7);
              *(float *)((int)&DAT_0096ac00 + iVar8) = fVar18 * fVar4;
              *(float *)((int)&DAT_0096ac04 + iVar8) = fVar2 * fVar4;
              *(float *)((int)&DAT_0096ac08 + iVar8) = fVar3 * fVar4;
            }
            iVar15 = iVar15 + 1;
            iVar13 = iVar13 + 4;
            iVar7 = iVar7 + 0x10;
            iVar8 = iVar8 + 0x40;
            puVar10 = puVar10 + 0x10;
          } while (iVar15 < 4);
          iVar8 = 4;
          do {
            iVar8 = iVar8 + -1;
            dVar16 = (double)*(float *)(&DAT_00723810 + (int)((longlong)DAT_0096acde << 2));
            puVar9[0x3bf] = *(float *)(&DAT_00723810 + (int)((longlong)DAT_0096acde << 2));
            puVar9 = puVar9 + 0x10;
          } while (iVar8 != 0);
        }
      }
    }
  }
  return dVar16;
}



//==== 00080904  ns=stub  size=0x4
// sig: undefined STUB_00080904(void)
// callers(0): 
// callees(0): 

void stub::STUB_00080904(void)

{
  return;
}



//==== 00080910  ns=hero  size=0xcc
// sig: undefined MetalDetectorUpdate_Unused(void)
// callers(0): 
// callees(1): 000c8444 hud::RegisterHUDCallback

undefined4 * hero::MetalDetectorUpdate_Unused(void)

{
  undefined4 *puVar1;
  
  if (UnlockableItems.metalDetector == '\0') {
    puVar1 = &g_heroMtx;
    g_MetalDetectorSpotIsClose = 0;
  }
  else {
    g_MetalDetectorSpotIsClose = false;
    puVar1 = (undefined4 *)0x0;
    if ((DAT_0096bd24 < 20.0) && (DAT_0096bd20 != 0)) {
      g_MetalDetectorSpotIsClose = true;
    }
    DAT_0096bd24 = 100000.0;
    DAT_0096bd20 = 0;
    if ((bool)g_MetalDetectorSpotIsClose) {
      puVar1 = (undefined4 *)
               hud::RegisterHUDCallback
                         (7,0x753a,&PTR_HudEntry_InitCounter32_007056a8,
                          &PTR_MetalDetectorHud_Update_00705870,&PTR_Draw_MetalDetectorHud_00705878,
                          (int *)&g_MetalDetectorSpotIsClose,1);
    }
  }
  return puVar1;
}



//==== 00080a08  ns=hero  size=0x244
// sig: void Hero_PlayFootStep(int groundType, int whichFoot, int playSound)
// callers(2): 00080ca0 hero::Hero_FeetSounds; 000be228 hero::HeroMovement
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000ffb70 mobyutil::GetGroundZ; 00133a48 partupd::SpawnPart_70; 0015d4dc sound::sound_FootstepPlay

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_PlayFootStep(int groundType,int whichFoot,int playSound)

{
  int magneboots;
  undefined1 local_30 [16];
  
  if (playSound != 0) {
    magneboots = 0;
    if ((DAT_0096adc0 != 0) && (*(short *)(DAT_0096adc0 + 0xa6) == 0xad)) {
      magneboots = 1;
    }
    sound::sound_FootstepPlay(groundType,whichFoot,magneboots,0,g_heroMobyPtr);
  }
  if (((Level == Hoven) && (DAT_0096afcd == '\0')) && (g_standingOnMoby == 0)) {
    mobyfunc::GetBonePosition(g_heroMobyPtr,whichFoot + 0x16,local_30);
    mobyutil::GetGroundZ(0x3fe0000000000000,local_30,0);
    partupd::SpawnPart_70
              ((double)g_heroRotation.z,local_30,(ulonglong)(LZCOUNT(whichFoot) << 0x20) >> 0x25);
  }
  return;
}



//==== 00080c4c  ns=hero  size=0x38
// sig: int Hero_MayaFrameTrigger(float frame)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_MayaFrameTrigger(float frame)

{
  int iVar1;
  
  iVar1 = 0;
  if ((frame < g_heroAnimFrame) && (g_heroAnimFrame - frame <= DAT_0096a78c)) {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 00080ca0  ns=hero  size=0x238
// sig: undefined Hero_FeetSounds(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(1): 00080a08 hero::Hero_PlayFootStep

void hero::Hero_FeetSounds(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = DAT_0096afcd;
  if ((g_heroState != WALKING) || ((int)(animationSpeed * 15.5) <= g_heroStateTimer)) {
    if ((g_heroState == WALKING) && (g_heroStateTimer == (int)(animationSpeed * 22.5))) {
      Hero_PlayFootStep((uint)DAT_0096afcd,0,1);
    }
    bVar1 = g_heroMobyPtr->animationId;
    if (bVar1 < 4) {
      if ((2 < bVar1) && (DAT_0096a77c == 0)) {
        bVar2 = false;
        bVar3 = false;
        if ((49.5 < g_heroAnimFrame) && (g_heroAnimFrame - 49.5 <= DAT_0096a78c)) {
          bVar2 = true;
        }
        if (bVar2) {
          Hero_PlayFootStep((uint)bVar4,0,1);
        }
        if ((17.0 < g_heroAnimFrame) && (g_heroAnimFrame - 17.0 <= DAT_0096a78c)) {
          bVar3 = true;
        }
        if (bVar3) {
          Hero_PlayFootStep((uint)bVar4,1,1);
        }
      }
    }
    else if ((bVar1 < 5) && (DAT_0096a77c == 0)) {
      bVar2 = false;
      bVar3 = false;
      if ((12.5 < g_heroAnimFrame) && (g_heroAnimFrame - 12.5 <= DAT_0096a78c)) {
        bVar2 = true;
      }
      if (bVar2) {
        Hero_PlayFootStep((uint)bVar4,0,1);
      }
      if ((1.0 < g_heroAnimFrame) && (g_heroAnimFrame - 1.0 <= DAT_0096a78c)) {
        bVar3 = true;
      }
      if (bVar3) {
        Hero_PlayFootStep((uint)bVar4,1,1);
      }
    }
  }
  return;
}



//==== 00080ee0  ns=hero  size=0x11c
// sig: undefined Hero_AttachRatchetToHeroBone(void)
// callers(1): 0008c3d0 hero::HeroUpdateNonRatchet
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 0010c1e8 mobyutil::MB_MtxToEuler; 00500fa8 fastfunc::FastApplyTransform

void hero::Hero_AttachRatchetToHeroBone(void)

{
  MobyInstance *pMVar1;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  pMVar1 = g_ratchetMoby;
  g_ratchetMoby->shadow = '\0';
  if ((g_heroMobyPtr->modeBits & DISABLED) == NONE) {
    mobyfunc::GetBoneTransformations(g_heroMobyPtr,5,aVStack_60);
    (pMVar1->pos).x = local_30;
    (pMVar1->pos).y = local_2c;
    (pMVar1->pos).z = local_28;
    (pMVar1->pos).w = local_24;
    fastfunc::FastApplyTransform(&(pMVar1->transform).v0,aVStack_60);
    mobyutil::MB_MtxToEuler((int)aVStack_60,(MobyInstance *)&pMVar1->rotation);
    pMVar1->modeBits =
         pMVar1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    mobyutil::MB_SetAnimation(pMVar1,0x81,0,(int)(animationSpeed * 10.5));
    mobyfunc::UpdateMobyAnimFrame(pMVar1);
    mobyfunc::UpdateMobyTransform(pMVar1);
  }
  else {
    pMVar1->modeBits = pMVar1->modeBits | (UNK_40|DISABLED);
  }
  return;
}



//==== 00081048  ns=hero  size=0x6a4
// sig: undefined Hero_UpdateShadow(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(4): 00057820 collproc::CollLine; 000f1f28 mobyfunc::MB_GetLightDirection; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void hero::Hero_UpdateShadow(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  MobyModeBit *pMVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  MobyInstance *pMVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  bool bVar23;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x120;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar17;
  puVar9[0x26] = in_LR;
  puVar9[0x1e] = in_f26;
  puVar9[0x1f] = in_f27;
  puVar9[0x20] = in_f28;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x1a] = unaff_r28;
  puVar9[0x1c] = unaff_r30;
  iVar21 = g_heroStateType;
  bVar23 = g_heroStateType == 0x12;
  bVar1 = g_heroStateType == 4;
  puVar9[0x1d] = unaff_r31;
  puVar9[0x1b] = unaff_r29;
  puVar9[0x19] = unaff_r27;
  pMVar16 = g_heroMobyPtr;
  if ((((bVar23) || (iVar21 == 0x15)) || (g_heroState == UNK_7D)) || (iVar21 == 0x16)) {
    g_heroMobyPtr->modeBits =
         g_heroMobyPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE|DISABLED);
  }
  else {
    pMVar10 = &g_heroMobyPtr->modeBits;
    g_heroMobyPtr->field82_0xbd = '\x01';
    pMVar16->modeBits = *pMVar10 | DRAW_SHADOW;
    fVar2 = 0.97;
    if ((g_framesNotGrounded != 0) || (bVar1)) {
      fVar2 = 1.5;
    }
    dVar24 = (double)fastfunc::FastDiffRots((double)fVar2,(double)DAT_0096aa00);
    dVar25 = 0.052000001072883606;
    if ((dVar24 <= 0.052000001072883606) && (dVar25 = dVar24, dVar24 < -0.052000001072883606)) {
      dVar25 = -0.052000001072883606;
    }
    dVar25 = (double)fastfunc::FastWrapRot(DAT_0096aa00,(float)dVar25);
    DAT_0096aa00 = (float)dVar25;
    mobyfunc::MB_GetLightDirection(g_heroMobyPtr,uVar17 - 0xb0);
    fVar4 = ABS(*(float *)(puVar9 + 0xe));
    fVar5 = ABS(*(float *)((int)puVar9 + 0x74));
    *(float *)(puVar9 + 0x14) = fVar4 - fVar5;
    dVar25 = 0.0;
    iVar21 = (int)(((ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4) << 2);
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar21);
    fVar2 = *(float *)(&DAT_00735904 + iVar21);
    fVar3 = fVar5;
    if (0.0 <= *(float *)(puVar9 + 0x14)) {
      fVar3 = fVar4;
      fVar4 = fVar5;
    }
    dVar24 = dVar25;
    if (0.0 < fVar3) {
      iVar21 = 4;
      iVar22 = 4;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      lVar18 = lVar19;
      do {
        iVar21 = iVar21 + -1;
        *(float *)((int)lVar18 + 0xa4) = fVar3;
        lVar18 = lVar18 + 4;
      } while (iVar21 != 0);
      fVar3 = fVar3 * fVar3;
      lVar18 = uVar17 - 0x110;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar3;
      *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4;
      *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar4 * fVar3;
      do {
        iVar22 = iVar22 + -1;
        *(float *)((int)lVar18 + 0xa4) = *(float *)((int)lVar18 + 0x94) * fVar4 * fVar4;
        lVar18 = lVar18 + 4;
      } while (iVar22 != 0);
      iVar22 = 8;
      iVar21 = 0;
      iVar20 = 8;
      lVar18 = lVar19;
      do {
        pfVar11 = (float *)((int)&DAT_007358e0 + iVar21);
        iVar22 = iVar22 + -1;
        iVar21 = iVar21 + 4;
        *(float *)((int)lVar18 + 0xa4) = *(float *)((int)lVar18 + 0xa4) * *pfVar11;
        lVar18 = lVar18 + 4;
      } while (iVar22 != 0);
      do {
        iVar20 = iVar20 + -1;
        iVar21 = (int)lVar19;
        lVar19 = lVar19 + 4;
        dVar24 = (double)(float)(dVar24 + (double)*(float *)(iVar21 + 0xa4));
      } while (iVar20 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar2);
    }
    fVar3 = DAT_0096aa00;
    fVar2 = (float)(dVar24 + 1.570796251296997);
    fVar7 = fVar2;
    if (3.1415925 - fVar2 <= fVar2) {
      fVar7 = 3.1415925 - fVar2;
    }
    if (fVar7 <= -3.1415925 - fVar2) {
      fVar7 = -3.1415925 - fVar2;
    }
    fVar5 = fVar7 * fVar7;
    fVar2 = fVar5 * fVar5 * fVar7;
    fVar4 = fVar5 * fVar2;
    dVar31 = (double)(fVar7 + fVar5 * fVar7 * -0.16666657 + fVar2 * 0.0083330255 +
                      fVar4 * -0.0001980741 + fVar5 * fVar4 * 2.601887e-06);
    dVar27 = dVar24;
    if ((double)(float)(3.141592502593994 - dVar24) <= dVar24) {
      dVar27 = (double)(float)(3.141592502593994 - dVar24);
    }
    if (dVar27 <= (double)(float)(-3.141592502593994 - dVar24)) {
      dVar27 = (double)(float)(-3.141592502593994 - dVar24);
    }
    dVar24 = (double)(float)(dVar27 * dVar27);
    fVar2 = DAT_0096aa00 + 1.5707963;
    dVar29 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar27));
    dVar30 = (double)(float)(dVar24 * dVar29);
    dVar24 = (double)((float)(dVar27 + (double)(float)((double)(float)(dVar24 * dVar27) *
                                                      -0.16666656732559204)) +
                      (float)(dVar29 * 0.008333025500178337) +
                      (float)(dVar30 * -0.0001980741071747616) +
                     (float)(dVar24 * dVar30) * 2.601887e-06);
    fVar7 = fVar2;
    if (3.1415925 - fVar2 <= fVar2) {
      fVar7 = 3.1415925 - fVar2;
    }
    if (fVar7 <= -3.1415925 - fVar2) {
      fVar7 = -3.1415925 - fVar2;
    }
    fVar2 = fVar7 * fVar7;
    fVar8 = 3.1415925 - DAT_0096aa00;
    fVar4 = fVar2 * fVar2 * fVar7;
    bVar23 = fVar8 <= DAT_0096aa00;
    fVar5 = fVar2 * fVar4;
    dVar27 = (double)(fVar7 + fVar2 * fVar7 * -0.16666657 + fVar4 * 0.0083330255 +
                      fVar5 * -0.0001980741 + fVar2 * fVar5 * 2.601887e-06);
    DAT_00a4c4f0 = (float)(dVar31 * dVar27);
    *(float *)(puVar9 + 0xe) = DAT_00a4c4f0;
    *(float *)((int)puVar9 + 0x74) = (float)(dVar27 * dVar24);
    fVar2 = fVar3;
    if (bVar23) {
      fVar2 = fVar8;
    }
    fVar3 = -3.1415925 - fVar3;
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar4 = fVar2 * fVar2;
    fVar7 = fVar4 * fVar4 * fVar2;
    fVar3 = fVar4 * fVar7;
    DAT_00a4c4f4 = *(undefined4 *)((int)puVar9 + 0x74);
    DAT_00a4c4fc = *(undefined4 *)((int)puVar9 + 0x7c);
    *(float *)(puVar9 + 0xf) =
         -(fVar2 + fVar4 * fVar2 * -0.16666657 + fVar7 * 0.0083330255 + fVar3 * -0.0001980741 +
          fVar4 * fVar3 * 2.601887e-06);
    pMVar16 = g_heroMobyPtr;
    DAT_00a4c4f8 = *(undefined4 *)(puVar9 + 0xf);
    dVar27 = (double)g_heroGroundZ;
    if (((1.0 <= dVar27) || (dVar27 = (double)g_heroWaterZ, 1.0 <= dVar27)) ||
       (dVar27 = (double)DAT_00969fd4, 1.0 < dVar27)) {
      iVar22 = 0;
      iVar21 = 0;
      dVar29 = dVar27;
      dVar30 = dVar27;
      do {
        pMVar16 = g_heroMobyPtr;
        fVar2 = *(float *)(puVar9 + 0xe);
        fVar7 = *(float *)((int)puVar9 + 0x74);
        fVar3 = *(float *)(puVar9 + 0xf);
        fVar12 = (g_heroMobyPtr->bSphere).x * 0.0009765625;
        fVar13 = (g_heroMobyPtr->bSphere).rad * 0.0009765625;
        *(float *)(puVar9 + 0x10) = fVar12;
        fVar8 = *(float *)((int)&DAT_00723880 + iVar21);
        fVar14 = (pMVar16->bSphere).y * 0.0009765625;
        fVar4 = *(float *)((int)&DAT_00723884 + iVar21);
        fVar5 = *(float *)((int)&DAT_00723888 + iVar21);
        dVar28 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar3 * fVar3);
        *(float *)((int)puVar9 + 0x84) = fVar14;
        fVar15 = (pMVar16->bSphere).z * 0.0009765625;
        fVar12 = fVar12 + (float)(dVar31 * (double)fVar8) * fVar13;
        *(float *)(puVar9 + 0x11) = fVar15;
        fVar6 = (pMVar16->bSphere).rad;
        *(f32 *)((int)puVar9 + 0x8c) = fVar6;
        fVar14 = fVar14 + (float)(dVar24 * (double)fVar4) * fVar13;
        fVar15 = fVar15 + fVar5 * fVar13;
        dVar26 = (double)fVar15;
        *(float *)(puVar9 + 0x10) = fVar12;
        *(float *)((int)puVar9 + 0x84) = fVar14;
        *(float *)(puVar9 + 0x11) = fVar15;
        if (dVar28 == dVar25) {
          *(float *)(puVar9 + 0x13) = (float)dVar25;
          *(float *)((int)puVar9 + 0x94) = (float)dVar25;
          *(float *)(puVar9 + 0x12) = (float)dVar25;
        }
        else {
          fVar4 = (float)((double)(((float)(dVar26 - dVar30) + 0.5) / -fVar3) / dVar28);
          *(float *)(puVar9 + 0x12) = fVar2 * fVar4;
          *(float *)((int)puVar9 + 0x94) = fVar7 * fVar4;
          *(float *)(puVar9 + 0x13) = fVar3 * fVar4;
        }
        *(f32 *)((int)puVar9 + 0x9c) = fVar6;
        *(float *)(puVar9 + 0x12) = fVar12 + *(float *)(puVar9 + 0x12);
        *(float *)((int)puVar9 + 0x94) = fVar14 + *(float *)((int)puVar9 + 0x94);
        *(float *)(puVar9 + 0x13) = (float)(dVar26 + (double)*(float *)(puVar9 + 0x13));
        iVar20 = collproc::CollLine(uVar17 - 0xa0,uVar17 - 0x90,0x22,0,0);
        pMVar16 = g_heroMobyPtr;
        if (iVar20 != 0) {
          dVar26 = (double)CollOutput.ip.z;
          if (dVar26 < dVar27) {
            dVar27 = dVar26;
          }
          if (dVar29 < dVar26) {
            dVar29 = dVar26;
          }
        }
        iVar22 = iVar22 + 1;
        iVar21 = iVar21 + 0x10;
      } while (iVar22 < 4);
      g_heroMobyPtr->unk84 = (int)(float)(dVar27 - 0.11999999731779099);
      pMVar16->unk88 = (int)(float)(dVar29 + 0.23999999463558197);
      fVar2 = (float)pMVar16->unk84 + 3.0;
      if (fVar2 < (float)pMVar16->unk88) {
        pMVar16->unk88 = (int)fVar2;
      }
    }
    else {
      g_heroMobyPtr->unk84 = 0;
      pMVar16->unk88 = 0;
    }
  }
  return;
}



//==== 000816ec  ns=hero  size=0xb0
// sig: int Hero_PlaySound(int sound, int flags)
// callers(9): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000caa88 hud::DrawOxygenMeter; 002d2780 mobyupdate_unsorted::UpdateMoby_190; 002db020 mobyupdate_unsorted::UpdateMoby_192; 002fd398 mobyupdate_unsorted::UpdateMoby_229; 003b7c48 mobyupdate_unsorted::UpdateMoby_562; 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(1): 0015d12c sound::PlayMobySound

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_PlaySound(int sound,int flags)

{
  MobyInstance *pMoby;
  int iVar1;
  
  pMoby = g_ratchetMoby;
  if (g_heroType == '\x03') {
    if (g_ratchetMoby == (MobyInstance *)0x0) {
      iVar1 = -1;
    }
    else {
      (g_ratchetMoby->pos).x = g_heroPosition.x;
      (pMoby->pos).y = g_heroPosition.y;
      (pMoby->pos).z = g_heroPosition.z;
      (pMoby->pos).w = g_heroPosition.w;
      iVar1 = ::sound::PlayMobySound(sound,flags,pMoby);
    }
  }
  else {
    iVar1 = ::sound::PlayMobySound(sound,flags,g_heroMobyPtr);
  }
  return iVar1;
}



//==== 0008179c  ns=hero  size=0x50
// sig: undefined Hero_RegisterGlowDraw(void)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

void hero::Hero_RegisterGlowDraw(void)

{
  if (DAT_0096bb92 == 0) {
    DAT_0096bb92 = 1;
    RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
  }
  return;
}



//==== 000817ec  ns=hero  size=0x214
// sig: void Hero_SetRelativeZ(float z, float * out, float * in)
// callers(8): 00081a10 hero::Hero_UpdateScaleEffect; 0008a2b8 hero::Hero_ApplyMotion; 0009d6b0 hero::Hero_JumpThrustGrav; 0009ff68 hero::Hero_ApplyTaper; 000a0f40 hero::Hero_EdgeStop; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_SetRelativeZ(float z,float *out,float *in)

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
  
  if (g_heroGravityMode == 0) {
    *out = *in;
    out[1] = in[1];
    out[2] = in[2];
    fVar1 = in[3];
    out[2] = z;
    out[3] = fVar1;
  }
  else if (g_heroGravityMode < 3) {
    fVar1 = *in;
    fVar2 = in[1];
    fVar5 = DAT_00969d24 * fVar1;
    fVar8 = DAT_00969d34 * fVar2;
    fVar3 = in[2];
    fVar4 = in[3];
    fVar11 = DAT_00969d44 * fVar3;
    fVar6 = DAT_00969d28 * fVar1;
    fVar9 = DAT_00969d38 * fVar2;
    fVar7 = DAT_00969d2c * fVar1;
    fVar10 = DAT_00969d3c * fVar2;
    fVar14 = DAT_00969d54 * fVar4;
    fVar12 = DAT_00969d48 * fVar3;
    fVar13 = DAT_00969d4c * fVar3;
    fVar15 = DAT_00969d58 * fVar4;
    fVar16 = DAT_00969d5c * fVar4;
    *out = g_heroGravityMtx * fVar1 + DAT_00969d30 * fVar2 + DAT_00969d40 * fVar3 +
           DAT_00969d50 * fVar4;
    out[1] = fVar5 + fVar8 + fVar11 + fVar14;
    out[2] = fVar6 + fVar9 + fVar12 + fVar15;
    out[2] = z;
    out[3] = fVar7 + fVar10 + fVar13 + fVar16;
    fVar1 = *out;
    fVar2 = out[1];
    fVar7 = DAT_00969ce4 * fVar1;
    fVar10 = DAT_00969cf4 * fVar2;
    fVar8 = DAT_00969ce8 * fVar1;
    fVar11 = DAT_00969cf8 * fVar2;
    fVar9 = DAT_00969cec * fVar1;
    fVar4 = DAT_00969d04 * z;
    fVar12 = DAT_00969cfc * fVar2;
    fVar3 = out[3];
    fVar5 = DAT_00969d08 * z;
    fVar6 = DAT_00969d0c * z;
    fVar13 = DAT_00969d14 * fVar3;
    fVar14 = DAT_00969d18 * fVar3;
    fVar15 = DAT_00969d1c * fVar3;
    *out = g_heroMtx * fVar1 + DAT_00969cf0 * fVar2 + DAT_00969d00 * z + DAT_00969d10 * fVar3;
    out[1] = fVar7 + fVar10 + fVar4 + fVar13;
    out[2] = fVar8 + fVar11 + fVar5 + fVar14;
    out[3] = fVar9 + fVar12 + fVar6 + fVar15;
  }
  return;
}



//==== 00081a10  ns=hero  size=0x2b8
// sig: undefined Hero_UpdateScaleEffect(void)
// callers(3): 00086b60 hero::SetHeroType; 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(1): 000817ec hero::Hero_SetRelativeZ

void hero::Hero_UpdateScaleEffect(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  MobyInstance *pMVar5;
  Vec4 *pVVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  pMVar5 = g_heroMobyPtr;
  if (DAT_0096bfbc != 0) {
    DAT_0096bfbc = DAT_0096bfbc + 1;
    iVar8 = (int)((longlong)DAT_0096bfbc << 2);
    if (*(float *)(&DAT_00720d1c + iVar8) == -1.0) {
      DAT_0096bfbc = 0;
    }
    else {
      dVar10 = (double)*(float *)(&DAT_00720d1c + iVar8);
      pVVar6 = &(g_heroMobyPtr->transform).v1;
      (g_heroMobyPtr->transform).v0.x = (float)((double)(g_heroMobyPtr->transform).v0.x * dVar10);
      fVar1 = (pMVar5->transform).v0.y;
      fVar2 = (pMVar5->transform).v0.z;
      (pMVar5->transform).v0.w = (pMVar5->transform).v0.w;
      (pMVar5->transform).v0.y = (float)((double)fVar1 * dVar10);
      (pMVar5->transform).v0.z = (float)((double)fVar2 * dVar10);
      pVVar6->x = (float)((double)pVVar6->x * dVar10);
      fVar1 = (pMVar5->transform).v1.y;
      fVar2 = (pMVar5->transform).v1.z;
      (pMVar5->transform).v1.w = (pMVar5->transform).v1.w;
      (pMVar5->transform).v1.y = (float)((double)fVar1 * dVar10);
      (pMVar5->transform).v1.z = (float)((double)fVar2 * dVar10);
      if (g_heroType == '\0') {
        lVar7 = 0;
        do {
          iVar8 = 0;
          do {
            iVar4 = (int)(lVar7 << 6) + (int)(lVar7 << 4);
            iVar3 = *(int *)((int)&g_currentWeaponMoby + iVar4);
            if (iVar8 == 1) {
              iVar3 = *(int *)((int)&DAT_0096ad74 + iVar4);
            }
            dVar9 = dVar10;
            if ((((int)lVar7 == 0) && (g_heroType == '\0')) && (1.0 < dVar10)) {
              dVar9 = 1.0;
            }
            if (iVar3 != 0) {
              *(float *)(iVar3 + 0xc0) = (float)((double)*(float *)(iVar3 + 0xc0) * dVar9);
              *(float *)(iVar3 + 0xc4) = (float)((double)*(float *)(iVar3 + 0xc4) * dVar9);
              *(float *)(iVar3 + 200) = (float)((double)*(float *)(iVar3 + 200) * dVar9);
              *(float *)(iVar3 + 0xd0) = (float)((double)*(float *)(iVar3 + 0xd0) * dVar9);
              *(float *)(iVar3 + 0xd4) = (float)((double)*(float *)(iVar3 + 0xd4) * dVar9);
              *(float *)(iVar3 + 0xd8) = (float)((double)*(float *)(iVar3 + 0xd8) * dVar9);
              local_50 = *(float *)(iVar3 + 0x10) - g_heroCGPos;
              local_4c = *(float *)(iVar3 + 0x14) - DAT_00969db4;
              local_48 = *(float *)(iVar3 + 0x18) - DAT_00969db8;
              local_44 = *(undefined4 *)(iVar3 + 0x1c);
              Hero_SetRelativeZ(0.0,&local_50,&local_50);
              *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) - local_50;
              *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) - local_4c;
              *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) - local_48;
              *(float *)(iVar3 + 0x10) =
                   *(float *)(iVar3 + 0x10) + (float)((double)local_50 * dVar10);
              *(float *)(iVar3 + 0x14) =
                   *(float *)(iVar3 + 0x14) + (float)((double)local_4c * dVar10);
              *(float *)(iVar3 + 0x18) =
                   *(float *)(iVar3 + 0x18) + (float)((double)local_48 * dVar10);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < 7);
      }
    }
  }
  return;
}



//==== 00081cd0  ns=hero  size=0xf8
// sig: undefined Hero_UpdateScreenFadeInOut(void)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

void hero::Hero_UpdateScreenFadeInOut(void)

{
  double dVar1;
  
  if (DAT_00a1a848 != 0) {
    if (DAT_00a1a84c == 0) {
      dVar1 = 1.0;
      mobyutil::Delt(1.0,DAT_00720bbc,&boot::SceneScreenFade);
      if ((double)boot::SceneScreenFade == dVar1) {
        DAT_00a1a84c = 1;
      }
    }
    else if (DAT_00a1a84c == 1) {
      DAT_00a1a84c = 2;
    }
    else if (DAT_00a1a84c == 2) {
      dVar1 = 0.0;
      mobyutil::Delt(0.0,DAT_00720bbc,&boot::SceneScreenFade);
      if ((double)boot::SceneScreenFade == dVar1) {
        DAT_00a1a848 = 0;
      }
    }
  }
  return;
}



//==== 00081dc8  ns=hero  size=0x34
// sig: undefined Hero_ShowMoby(void)
// callers(0): 
// callees(0): 

void hero::Hero_ShowMoby(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_0096b300;
  bVar1 = DAT_0096b300 != 0;
  g_heroMobyPtr->modeBits =
       g_heroMobyPtr->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  if (bVar1) {
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
  }
  return;
}



//==== 00081dfc  ns=hero  size=0x34
// sig: undefined Hero_HideMoby(void)
// callers(0): 
// callees(0): 

void hero::Hero_HideMoby(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_0096b300;
  bVar1 = DAT_0096b300 != 0;
  g_heroMobyPtr->modeBits = g_heroMobyPtr->modeBits | DISABLED;
  if (bVar1) {
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
  }
  return;
}



//==== 00081e38  ns=hero  size=0x1f8
// sig: undefined Hero_MapToMobyNonRatchet(void)
// callers(1): 0008c3d0 hero::HeroUpdateNonRatchet
// callees(5): 0007cf28 hero::Hero_AddGravity; 0007d5c0 hero::Hero_MakeInvisible; 000f06f0 mobyfunc::MB_SetCollPrimFromWorld; 000f31a8 mobyfunc::UpdateMobyTransform; 0050027c fastfunc::FastMemCopy32

void hero::Hero_MapToMobyNonRatchet(void)

{
  bool bVar1;
  int iVar2;
  MobyInstance *pMVar3;
  vec4 *pvVar4;
  vec4 *pvVar5;
  double dVar6;
  float local_30 [6];
  
  iVar2 = DAT_0096b300;
  if (g_heroInvisible == '\0') {
    bVar1 = DAT_0096b300 != 0;
    g_heroMobyPtr->modeBits =
         g_heroMobyPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (bVar1) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
    }
  }
  else {
    bVar1 = DAT_0096b300 != 0;
    g_heroMobyPtr->modeBits = g_heroMobyPtr->modeBits | DISABLED;
    if (bVar1) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
    }
  }
  Hero_MakeInvisible();
  pMVar3 = g_heroMobyPtr;
  pvVar4 = &g_heroMobyPtr->pos;
  pvVar5 = &g_heroMobyPtr->rotation;
  g_heroMobyPtr->damage = -1;
  pvVar4->x = g_heroPosition.x;
  (pMVar3->pos).y = g_heroPosition.y;
  (pMVar3->pos).z = g_heroPosition.z;
  (pMVar3->pos).w = g_heroPosition.w;
  pvVar5->x = g_heroRotation.x;
  (pMVar3->rotation).y = g_heroRotation.y;
  (pMVar3->rotation).z = g_heroRotation.z;
  (pMVar3->rotation).w = g_heroRotation.w;
  fastfunc::FastMemCopy32(&pMVar3->transform,&g_heroMtx,0x30);
  mobyfunc::UpdateMobyTransform(g_heroMobyPtr);
  if ((g_heroGhostFrames == 0) && (g_heroMobyPtr->collision != (ushort *)0x0)) {
    Hero_AddGravity(-g_heroCollBottom,local_30,local_30);
    mobyfunc::MB_SetCollPrimFromWorld
              ((double)g_heroCollRadius,(double)(g_heroCollTop - g_heroCollBottom),g_heroMobyPtr,0,
               local_30);
    dVar6 = (double)(g_heroCollRadius + 0.05);
    Hero_AddGravity((float)-dVar6,local_30,local_30);
    mobyfunc::MB_SetCollPrimFromWorld
              ((double)g_heroCollRadius,(double)(float)((double)g_heroCollTop - dVar6),g_heroMobyPtr
               ,1,local_30);
  }
  return;
}



//==== 00082030  ns=hero  size=0x110
// sig: undefined Hero_UpdateQueuedSounds(void)
// callers(0): 
// callees(2): 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16

MobyInstance * hero::Hero_UpdateQueuedSounds(void)

{
  short sVar1;
  short sVar2;
  MobyInstance *pMVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    pMVar3 = (MobyInstance *)fastfunc::FastDecTimerS16(&DAT_0096bebc + iVar5);
    if (pMVar3 == (MobyInstance *)0x2) {
      sVar1 = *(short *)((int)&DAT_0096beba + iVar5);
      sVar2 = *(short *)((int)&DAT_0096bebe + iVar5);
      *(undefined2 *)((int)&g_heroQueuedSounds + iVar5) = 0;
      pMVar3 = g_ratchetMoby;
      if (g_heroType == '\x03') {
        if (g_ratchetMoby != (MobyInstance *)0x0) {
          (g_ratchetMoby->pos).x = g_heroPosition.x;
          (pMVar3->pos).y = g_heroPosition.y;
          (pMVar3->pos).z = g_heroPosition.z;
          (pMVar3->pos).w = g_heroPosition.w;
          pMVar3 = (MobyInstance *)sound::PlayMobySound((int)sVar1,(int)sVar2,pMVar3);
        }
      }
      else {
        pMVar3 = (MobyInstance *)sound::PlayMobySound((int)sVar1,(int)sVar2,g_heroMobyPtr);
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 8;
  } while (iVar4 < 8);
  return pMVar3;
}



//==== 000821a8  ns=hero  size=0x26c
// sig: undefined Hero_SetClankBankTwistSway(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000aaec0 hero::HandleHeroMovement
// callees(0): 

void hero::Hero_SetClankBankTwistSway(void)

{
  float fVar1;
  float fVar2;
  
  if (g_heroState == CLANK_WALKING) {
    fVar1 = 0.7;
    fVar2 = DAT_00969e68 * 0.5;
    if ((fVar2 <= 0.7) && (fVar1 = fVar2, fVar2 < -0.7)) {
      fVar1 = -0.7;
    }
    fVar2 = DAT_00969e44 / (mobyutil::g_FrameTime * 3.0);
    DAT_00722cb8 = fVar1 * ABS(fVar1) * 1.25;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    DAT_00722e10 = DAT_00722cb8 * -0.3 * fVar2;
    DAT_00722cb0 = DAT_00722cb8 * -0.35;
    DAT_00722d68 = DAT_00722cb8 * 1.35;
    DAT_00722d64 = ABS(DAT_00722cb8) * 0.25;
  }
  else if (g_heroState == CLANK_GLIDING) {
    fVar1 = 1.25;
    fVar2 = DAT_00969e68 * 1.6;
    if ((fVar2 <= 1.25) && (fVar1 = fVar2, fVar2 < -1.25)) {
      fVar1 = -1.25;
    }
    DAT_00722e10 = fVar1 * -0.52;
    if (DAT_00722e10 <= 0.28) {
      if (DAT_00722e10 < -0.28) {
        DAT_00722e10 = -0.28;
      }
    }
    else {
      DAT_00722e10 = 0.28;
    }
    DAT_00722cb8 = fVar1 * 0.58;
    DAT_00722d68 = fVar1 * 1.7;
    if (DAT_00722d68 <= 0.7) {
      if (DAT_00722d68 < -0.7) {
        DAT_00722d68 = -0.7;
      }
    }
    else {
      DAT_00722d68 = 0.7;
    }
    DAT_00722d64 = ABS(fVar1) * 0.2;
    if (DAT_00722d64 <= 0.2) {
      if (DAT_00722d64 < -0.2) {
        DAT_00722d64 = -0.2;
      }
    }
    else {
      DAT_00722d64 = 0.2;
    }
    DAT_00722d60 = ABS(fVar1) * 0.16;
  }
  else if ((g_heroStateType == 2) || (g_heroStateType == 4)) {
    fVar1 = 1.4;
    if ((DAT_00969e68 <= 1.4) && (fVar1 = DAT_00969e68, DAT_00969e68 < -1.4)) {
      fVar1 = -1.4;
    }
    DAT_00722cb8 = fVar1 * 0.29;
    DAT_00722d68 = fVar1 * 0.87;
  }
  return;
}



//==== 000824b0  ns=hero  size=0x10e4
// sig: undefined Hero_CheckLedgeGrab(void)
// callers(3): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate; 000aaec0 hero::HandleHeroMovement
// callees(8): 00057820 collproc::CollLine; 0005c710 collproc::CollPill; 00060780 collproc::CollHotspot; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00104c24 mobyutil::MB_BallisticPosAtTicks; 001122ac mobyutil::MB_GetPlatformParent; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

void hero::Hero_CheckLedgeGrab(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  int iVar17;
  int iVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  undefined8 in_r6;
  ulonglong uVar20;
  ulonglong unaff_r22;
  int iVar21;
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
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f15;
  double dVar31;
  ulonglong in_f16;
  double dVar32;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar33;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar34;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
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
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  undefined1 auVar45 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x290;
  puVar6 = (ulonglong *)lVar16;
  *puVar6 = uVar14;
  puVar6[0x54] = in_LR;
  puVar6[0x41] = in_f15;
  puVar6[0x42] = in_f16;
  puVar6[0x43] = in_f17;
  puVar6[0x44] = in_f18;
  puVar6[0x45] = in_f19;
  puVar6[0x46] = in_f20;
  puVar6[0x47] = in_f21;
  puVar6[0x48] = in_f22;
  puVar6[0x49] = in_f23;
  puVar6[0x4a] = in_f24;
  puVar6[0x4b] = in_f25;
  puVar6[0x4c] = in_f26;
  puVar6[0x4d] = in_f27;
  puVar6[0x4e] = in_f28;
  puVar6[0x4f] = in_f29;
  puVar6[0x50] = in_f30;
  puVar6[0x51] = in_f31;
  puVar6[0x3a] = unaff_r25;
  puVar6[0x3b] = unaff_r26;
  sVar12 = g_onMagnerail;
  puVar6[0x40] = unaff_r31;
  puVar6[0x3f] = unaff_r30;
  puVar6[0x3e] = unaff_r29;
  puVar6[0x3d] = unaff_r28;
  puVar6[0x3c] = unaff_r27;
  puVar6[0x39] = unaff_r24;
  puVar6[0x38] = unaff_r23;
  puVar6[0x37] = unaff_r22;
  if ((sVar12 != 2) && (DAT_0096a1c8 = 0, DAT_00969e90 == 0)) {
    bVar11 = false;
    if (g_heroType == '\0') {
      if ((((g_heroStateType == 4) &&
           ((DAT_0096a0fe != 0 || (DAT_00969dc8 < mobyutil::g_FrameTime * 3.5)))) ||
          (g_heroStateType == 2)) ||
         (((g_heroState == FALLING || (g_heroState == EDGE_HANG_MOVE_LEFT)) ||
          (bVar11 = false, g_heroState == EDGE_HANG_MOVE_RIGHT)))) {
        bVar11 = true;
      }
      if ((g_heroState == DOUBLE_JUMP) && (g_heroAnimFrame < 37.0)) {
        bVar11 = false;
      }
    }
    if ((g_heroType == '\x01') &&
       (((g_heroStateType == 4 &&
         ((DAT_0096a0fe != 0 || (DAT_00969dc8 < mobyutil::g_FrameTime * 2.5)))) ||
        ((g_heroStateType == 2 ||
         (((g_heroState == CLANK_GLIDING || (g_heroState == CLANK_EDGE_MOVE_LEFT)) ||
          (g_heroState == CLANK_EDGE_MOVE_RIGHT)))))))) {
      bVar11 = true;
    }
    if (bVar11) {
      dVar34 = 0.44999998807907104;
      fVar1 = -0.7;
      fVar2 = 0.3;
      fVar3 = 1.5;
      dVar35 = 1.149999976158142;
      fVar4 = -1.43;
      dVar42 = dVar34;
      dVar22 = 1.7999999523162842;
      if (g_heroType == '\x01') {
        dVar35 = 0.699999988079071;
        fVar1 = -0.4;
        fVar2 = 0.25;
        fVar3 = 0.725;
        fVar4 = -0.71;
        dVar42 = 0.3199999928474426;
        dVar22 = dVar35;
      }
      dVar44 = (double)fVar1;
      dVar43 = (double)fVar4;
      dVar37 = (double)fVar2;
      dVar36 = (double)fVar3;
      fVar4 = DAT_0096a620;
      if (g_heroStateType == 4) {
        fVar4 = DAT_0096a180;
      }
      puVar6[0x34] = (longlong)(int)(animationSpeed * 2.5);
      mobyutil::MB_BallisticPosAtTicks
                ((double)fVar4,uVar14 - 0x220,&g_heroPosition,&DAT_00969df0,in_r6,
                 *(undefined4 *)((int)puVar6 + 0x1a4));
      fVar2 = g_heroRotation.z;
      dVar41 = 1.570796251296997;
      dVar40 = 3.141592502593994;
      fVar4 = g_heroRotation.z + 1.5707963;
      fVar3 = fVar4;
      if (3.1415925 - fVar4 <= fVar4) {
        fVar3 = 3.1415925 - fVar4;
      }
      dVar39 = -3.141592502593994;
      if (fVar3 <= -3.1415925 - fVar4) {
        fVar3 = -3.1415925 - fVar4;
      }
      fVar7 = fVar3 * fVar3;
      dVar33 = -0.16666656732559204;
      dVar25 = 0.008333025500178337;
      dVar32 = -0.0001980741071747616;
      dVar31 = 2.601886990305502e-06;
      fVar4 = fVar7 * fVar7 * fVar3;
      fVar1 = fVar7 * fVar4;
      fVar8 = 3.1415925 - g_heroRotation.z;
      *(float *)(puVar6 + 0xe) =
           *(float *)(puVar6 + 0xe) +
           (fVar3 + fVar7 * fVar3 * -0.16666657 + fVar4 * 0.0083330255 + fVar1 * -0.0001980741 +
           fVar7 * fVar1 * 2.601887e-06) * g_heroCollRadius;
      fVar4 = fVar2;
      if (fVar8 <= fVar2) {
        fVar4 = fVar8;
      }
      if (fVar4 <= -3.1415925 - fVar2) {
        fVar4 = -3.1415925 - fVar2;
      }
      fVar1 = fVar4 * fVar4;
      iVar18 = 0;
      bVar11 = false;
      fVar3 = fVar1 * fVar1 * fVar4;
      fVar2 = fVar1 * fVar3;
      *(float *)((int)puVar6 + 0x74) =
           *(float *)((int)puVar6 + 0x74) +
           (fVar4 + fVar1 * fVar4 * -0.16666657 + fVar3 * 0.0083330255 + fVar2 * -0.0001980741 +
           fVar1 * fVar2 * 2.601887e-06) * g_heroCollRadius;
      while( true ) {
        dVar23 = (double)(float)((double)g_heroRotation.z + dVar41);
        dVar38 = dVar23;
        if ((double)(float)(dVar40 - dVar23) <= dVar23) {
          dVar38 = (double)(float)(dVar40 - dVar23);
        }
        if (dVar38 <= (double)(float)(dVar39 - dVar23)) {
          dVar38 = (double)(float)(dVar39 - dVar23);
        }
        dVar24 = (double)(float)(dVar38 * dVar38);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar38));
        dVar29 = (double)(float)(dVar24 * dVar27);
        dVar23 = (double)g_heroRotation.z;
        fVar4 = *(float *)(puVar6 + 0xe) +
                (float)((double)((float)(dVar38 + (double)(float)((double)(float)(dVar24 * dVar38) *
                                                                 dVar33)) + (float)(dVar27 * dVar25)
                                 + (float)(dVar29 * dVar32) +
                                (float)((double)(float)(dVar24 * dVar29) * dVar31)) * dVar37) * 0.25
        ;
        *(float *)(puVar6 + 0xe) = fVar4;
        dVar38 = dVar23;
        if ((double)(float)(dVar40 - dVar23) <= dVar23) {
          dVar38 = (double)(float)(dVar40 - dVar23);
        }
        if (dVar38 <= (double)(float)(dVar39 - dVar23)) {
          dVar38 = (double)(float)(dVar39 - dVar23);
        }
        dVar23 = (double)(float)(dVar38 * dVar38);
        *(float *)(puVar6 + 0x10) = fVar4;
        iVar21 = 4;
        dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar38));
        dVar27 = (double)(float)(dVar23 * dVar24);
        *(undefined4 *)((int)puVar6 + 0x8c) = *(undefined4 *)((int)puVar6 + 0x7c);
        pMVar13 = g_heroMobyPtr;
        fVar3 = *(float *)((int)puVar6 + 0x74) +
                (float)((double)((float)(dVar38 + (double)(float)((double)(float)(dVar23 * dVar38) *
                                                                 dVar33)) + (float)(dVar24 * dVar25)
                                 + (float)(dVar27 * dVar32) +
                                (float)((double)(float)(dVar23 * dVar27) * dVar31)) * dVar37) * 0.25
        ;
        *(float *)((int)puVar6 + 0x74) = fVar3;
        *(float *)((int)puVar6 + 0x84) = fVar3;
        *(float *)(puVar6 + 0x12) = fVar4;
        *(float *)((int)puVar6 + 0x94) = fVar3;
        *(undefined4 *)((int)puVar6 + 0x9c) = *(undefined4 *)((int)puVar6 + 0x7c);
        *(float *)(puVar6 + 0x13) = (float)((double)*(float *)(puVar6 + 0xf) + dVar35);
        *(float *)(puVar6 + 0x11) =
             (float)((double)(float)(dVar36 + 0.15000000596046448) +
                    (double)*(float *)(puVar6 + 0xf));
        iVar17 = collproc::CollLine(uVar14 - 0x210,uVar14 - 0x200,4,pMVar13,0);
        if (((iVar17 != 0) &&
            (iVar17 = collproc::CollHotspot(), fVar4 = CollOutput.normal.z, iVar17 != 9)) &&
           ((iVar17 != 0xc && (iVar17 != 0)))) {
          fVar3 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                       CollOutput.normal.y * CollOutput.normal.y);
          fVar8 = ABS(CollOutput.normal.z);
          fVar1 = ABS(fVar3);
          *(float *)(puVar6 + 0x24) = fVar3;
          *(float *)((int)puVar6 + 0x124) = fVar8 - fVar1;
          fVar3 = 0.0;
          uVar20 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar6 + 0x124) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar6 + 0x24) >> 0x1d) & 4;
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          fVar4 = *(float *)((uint)(uVar20 << 2) | 0x735904);
          fVar7 = fVar8;
          if (0.0 <= *(float *)((int)puVar6 + 0x124)) {
            fVar7 = ABS(*(float *)(puVar6 + 0x24));
            fVar1 = fVar8;
          }
          if (0.0 < fVar1) {
            iVar17 = 4;
            fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
            lVar15 = lVar16;
            do {
              iVar17 = iVar17 + -1;
              *(float *)((int)lVar15 + 0x168) = fVar1;
              lVar15 = lVar15 + 4;
            } while (iVar17 != 0);
            fVar1 = fVar1 * fVar1;
            lVar15 = uVar14 - 0x280;
            iVar17 = 4;
            fVar7 = fVar1 * fVar1;
            *(float *)((int)puVar6 + 0x16c) = *(float *)((int)puVar6 + 0x16c) * fVar1;
            *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar7;
            *(float *)((int)puVar6 + 0x174) = *(float *)((int)puVar6 + 0x174) * fVar7 * fVar1;
            do {
              iVar17 = iVar17 + -1;
              *(float *)((int)lVar15 + 0x168) = *(float *)((int)lVar15 + 0x158) * fVar7 * fVar7;
              lVar15 = lVar15 + 4;
            } while (iVar17 != 0);
            iVar17 = 0;
            iVar19 = 8;
            lVar15 = lVar16;
            do {
              iVar19 = iVar19 + -1;
              pfVar9 = (float *)((int)&DAT_007358e0 + iVar17);
              iVar17 = iVar17 + 4;
              *(float *)((int)lVar15 + 0x168) = *(float *)((int)lVar15 + 0x168) * *pfVar9;
              lVar15 = lVar15 + 4;
            } while (iVar19 != 0);
            iVar17 = 8;
            lVar15 = lVar16;
            do {
              iVar17 = iVar17 + -1;
              iVar19 = (int)lVar15;
              lVar15 = lVar15 + 4;
              fVar3 = fVar3 + *(float *)(iVar19 + 0x168);
            } while (iVar17 != 0);
            fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar4;
          }
          if (fVar3 < 0.34906584) {
            bVar11 = true;
          }
        }
        if (bVar11) break;
        iVar18 = iVar18 + 1;
        if (3 < iVar18) {
          return;
        }
      }
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        bVar11 = false;
        iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
        iVar17 = mobyutil::MB_GetPlatformParent(CollOutput.pMoby);
        if ((iVar18 == 0) || ((*(ushort *)(iVar18 + 0x1e) & 1) == 0)) {
          if ((iVar17 != 0) && ((*(uint *)(iVar17 + 0x3c) & 1) != 0)) {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) {
          return;
        }
      }
      fVar2 = CollOutput.ip.w;
      fVar4 = CollOutput.ip.z;
      fVar3 = CollOutput.ip.x;
      dVar35 = (double)CollOutput.ip.z;
      DAT_0096a1d8 = CollOutput.pMoby;
      if ((double)(float)((double)g_heroPosition.z + dVar36) < dVar35) {
        return;
      }
      dVar38 = (double)CollOutput.ip.x;
      dVar37 = (double)CollOutput.ip.y;
      dVar36 = (double)CollOutput.ip.w;
      *(float *)((int)puVar6 + 0xa4) = CollOutput.ip.y;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)((int)puVar6 + 0xac) = fVar2;
      fVar2 = g_heroPosition.x;
      *(float *)(puVar6 + 0x14) = fVar3;
      fVar1 = g_heroPosition.z;
      fVar3 = g_heroPosition.y;
      fVar4 = fVar4 + 0.05;
      *(float *)(puVar6 + 0x16) = fVar2;
      *(float *)((int)puVar6 + 0xb4) = fVar3;
      fVar3 = g_heroPosition.w;
      *(float *)(puVar6 + 0x17) = fVar1;
      *(float *)((int)puVar6 + 0xbc) = fVar3;
      pMVar13 = g_heroMobyPtr;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)(puVar6 + 0x17) = fVar4;
      iVar18 = collproc::CollLine(uVar14 - 0x1e0,uVar14 - 0x1f0,4,pMVar13,0);
      fVar4 = CollOutput.ip.y;
      if (iVar18 != 0) {
        return;
      }
      *(float *)(puVar6 + 0x18) = CollOutput.ip.x;
      fVar3 = CollOutput.ip.z;
      *(float *)((int)puVar6 + 0xc4) = fVar4;
      fVar4 = CollOutput.ip.w;
      *(float *)(puVar6 + 0x19) = fVar3;
      *(float *)((int)puVar6 + 0xcc) = fVar4;
      *(float *)(puVar6 + 0x19) = fVar3 + 0.6;
      iVar18 = collproc::CollPill(dVar34,uVar14 - 0x1d0);
      if (iVar18 == 0) {
        DAT_0096a1d4 = DAT_0096a1d4 & 0xfffffffe;
      }
      else {
        DAT_0096a1d4 = DAT_0096a1d4 | 1;
      }
      dVar34 = (double)g_heroPosition.y;
      fVar1 = ABS((float)(dVar38 - (double)g_heroPosition.x));
      fVar2 = ABS((float)(dVar37 - dVar34));
      *(float *)((int)puVar6 + 0x114) = (float)(dVar38 - (double)g_heroPosition.x);
      *(float *)(puVar6 + 0x23) = (float)(dVar37 - dVar34);
      *(float *)((int)puVar6 + 0x11c) = fVar1 - fVar2;
      dVar34 = 0.0;
      iVar18 = (int)(((ulonglong)(*(uint *)((int)puVar6 + 0x114) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar6 + 0x11c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar6 + 0x23) >> 0x1d) & 4) << 2);
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar18);
      fVar4 = *(float *)(&DAT_00735904 + iVar18);
      if (0.0 <= *(float *)((int)puVar6 + 0x11c)) {
        fVar1 = ABS(*(float *)(puVar6 + 0x23));
        fVar2 = ABS(*(float *)((int)puVar6 + 0x114));
      }
      dVar23 = dVar34;
      if (0.0 < fVar2) {
        iVar18 = 4;
        fVar2 = (fVar1 - fVar2) / (fVar1 + fVar2);
        lVar15 = lVar16;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar15 + 0x148) = fVar2;
          lVar15 = lVar15 + 4;
        } while (iVar18 != 0);
        fVar2 = fVar2 * fVar2;
        lVar15 = uVar14 - 0x280;
        iVar18 = 4;
        fVar1 = fVar2 * fVar2;
        *(float *)((int)puVar6 + 0x14c) = *(float *)((int)puVar6 + 0x14c) * fVar2;
        *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar1;
        *(float *)((int)puVar6 + 0x154) = *(float *)((int)puVar6 + 0x154) * fVar1 * fVar2;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar15 + 0x148) = *(float *)((int)lVar15 + 0x138) * fVar1 * fVar1;
          lVar15 = lVar15 + 4;
        } while (iVar18 != 0);
        iVar18 = 0;
        iVar17 = 8;
        lVar15 = lVar16;
        do {
          pfVar9 = (float *)((int)&DAT_007358e0 + iVar18);
          iVar17 = iVar17 + -1;
          iVar18 = iVar18 + 4;
          *(float *)((int)lVar15 + 0x148) = *(float *)((int)lVar15 + 0x148) * *pfVar9;
          lVar15 = lVar15 + 4;
        } while (iVar17 != 0);
        iVar18 = 8;
        lVar15 = lVar16;
        do {
          iVar18 = iVar18 + -1;
          iVar17 = (int)lVar15;
          lVar15 = lVar15 + 4;
          dVar23 = (double)(float)(dVar23 + (double)*(float *)(iVar17 + 0x148));
        } while (iVar18 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
      }
      DAT_0096a1c0 = (float)dVar35;
      if ((double)(float)(dVar35 - (double)g_heroGroundZ) < dVar22) {
        return;
      }
      iVar18 = 0;
      bVar11 = false;
      while( true ) {
        fVar4 = g_heroPosition.y;
        dVar24 = (double)(float)(dVar23 + dVar41);
        *(float *)(puVar6 + 0x1a) = g_heroPosition.x;
        fVar3 = g_heroPosition.z;
        *(float *)((int)puVar6 + 0xd4) = fVar4;
        fVar4 = g_heroPosition.w;
        *(float *)(puVar6 + 0x1b) = fVar3;
        *(float *)((int)puVar6 + 0xdc) = fVar4;
        *(float *)(puVar6 + 0x1c) = (float)dVar38;
        *(float *)((int)puVar6 + 0xe4) = (float)dVar37;
        *(float *)(puVar6 + 0x1d) = (float)dVar35;
        *(float *)((int)puVar6 + 0xec) = (float)dVar36;
        fVar4 = g_heroCollRadius * 2.0;
        dVar22 = dVar24;
        if ((double)(float)(dVar40 - dVar24) <= dVar24) {
          dVar22 = (double)(float)(dVar40 - dVar24);
        }
        if (dVar22 <= (double)(float)(dVar39 - dVar24)) {
          dVar22 = (double)(float)(dVar39 - dVar24);
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar29 = (double)(float)(dVar24 * dVar27);
        *(float *)(puVar6 + 0x1c) =
             (float)(dVar38 + (double)(((float)(dVar22 + (double)(float)((double)(float)(dVar24 * 
                                                  dVar22) * dVar33)) + (float)(dVar27 * dVar25) +
                                        (float)(dVar29 * dVar32) +
                                       (float)((double)(float)(dVar24 * dVar29) * dVar31)) * fVar4))
        ;
        dVar22 = dVar23;
        if ((double)(float)(dVar40 - dVar23) <= dVar23) {
          dVar22 = (double)(float)(dVar40 - dVar23);
        }
        if (dVar22 <= (double)(float)(dVar39 - dVar23)) {
          dVar22 = (double)(float)(dVar39 - dVar23);
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        puVar6[0x34] = (longlong)iVar18;
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar29 = (double)(float)(dVar24 * dVar27);
        *(float *)((int)puVar6 + 0xe4) =
             (float)(dVar37 + (double)(((float)(dVar22 + (double)(float)((double)(float)(dVar24 * 
                                                  dVar22) * dVar33)) + (float)(dVar27 * dVar25) +
                                        (float)(dVar29 * dVar32) +
                                       (float)((double)(float)(dVar24 * dVar29) * dVar31)) * fVar4))
        ;
        fVar4 = (float)(dVar35 + (double)(float)((double)(1.0 - (float)(longlong)puVar6[0x34] * 0.2)
                                                * dVar44));
        *(float *)(puVar6 + 0x32) = fVar4;
        *(float *)((int)puVar6 + 0x194) = fVar4;
        *(float *)(puVar6 + 0x33) = fVar4;
        *(float *)((int)puVar6 + 0x19c) = fVar4;
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
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        uVar5 = storeVectorElementWordIndexed(auVar45,0,uVar14 - 0x1a8);
        *(undefined4 *)(uVar14 - 0x1a8) = uVar5;
        uVar5 = storeVectorElementWordIndexed(auVar45,0,uVar14 - 0x1b8);
        *(undefined4 *)(uVar14 - 0x1b8) = uVar5;
        iVar17 = collproc::CollLine(uVar14 - 0x1c0,uVar14 - 0x1b0,2,0,0);
        fVar4 = CollOutput.normal.x;
        if (iVar17 != 0) break;
        iVar18 = iVar18 + 1;
        if (4 < iVar18) goto LAB_000831c0;
      }
      dVar23 = ABS((double)CollOutput.normal.x);
      uVar10 = (uint)CollOutput.normal.y >> 0x1d;
      dVar44 = ABS((double)CollOutput.normal.y);
      *(float *)(puVar6 + 0x22) = (float)(dVar23 - dVar44);
      iVar18 = (int)(((ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar6 + 0x22) >> 0x1e) & 2 | (ulonglong)uVar10 & 4) << 2
                    );
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar18);
      fVar4 = *(float *)(&DAT_00735904 + iVar18);
      dVar22 = dVar23;
      if (dVar34 <= (double)*(float *)(puVar6 + 0x22)) {
        dVar22 = dVar44;
        dVar44 = dVar23;
      }
      dVar23 = dVar34;
      if (dVar34 < dVar44) {
        iVar18 = 4;
        fVar2 = (float)(dVar22 - dVar44) / (float)(dVar22 + dVar44);
        lVar15 = lVar16;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar15 + 0x128) = fVar2;
          lVar15 = lVar15 + 4;
        } while (iVar18 != 0);
        fVar2 = fVar2 * fVar2;
        lVar15 = uVar14 - 0x280;
        fVar1 = fVar2 * fVar2;
        *(float *)((int)puVar6 + 300) = *(float *)((int)puVar6 + 300) * fVar2;
        *(float *)(puVar6 + 0x26) = *(float *)(puVar6 + 0x26) * fVar1;
        *(float *)((int)puVar6 + 0x134) = *(float *)((int)puVar6 + 0x134) * fVar1 * fVar2;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x118) * fVar1 * fVar1;
          lVar15 = lVar15 + 4;
        } while (iVar21 != 0);
        iVar18 = 0;
        iVar17 = 8;
        lVar15 = lVar16;
        do {
          pfVar9 = (float *)((int)&DAT_007358e0 + iVar18);
          iVar17 = iVar17 + -1;
          iVar18 = iVar18 + 4;
          *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x128) * *pfVar9;
          lVar15 = lVar15 + 4;
        } while (iVar17 != 0);
        iVar18 = 8;
        dVar22 = dVar34;
        do {
          iVar18 = iVar18 + -1;
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 4;
          dVar22 = (double)(float)(dVar22 + (double)*(float *)(iVar17 + 0x128));
        } while (iVar18 != 0);
        dVar23 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar4);
      }
      bVar11 = true;
      DAT_0096a1c4 = (float)dVar23;
LAB_000831c0:
      if (!bVar11) {
        return;
      }
      dVar44 = (double)g_heroRotation.z;
      dVar22 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
      dVar22 = (double)fastfunc::FastSubRots((float)dVar44,(float)dVar22);
      if ((dVar22 < 1.1344640254974365) &&
         (dVar22 = 2.4000000953674316, dVar34 < 2.4000000953674316)) {
        do {
          dVar23 = (double)(float)((double)DAT_0096a1c4 + dVar41);
          *(float *)(puVar6 + 0x20) = (float)dVar38;
          *(float *)((int)puVar6 + 0x104) = (float)dVar37;
          *(float *)((int)puVar6 + 0x10c) = (float)dVar36;
          *(float *)(puVar6 + 0x21) = (float)dVar35;
          dVar44 = dVar23;
          if ((double)(float)(dVar40 - dVar23) <= dVar23) {
            dVar44 = (double)(float)(dVar40 - dVar23);
          }
          if (dVar44 <= (double)(float)(dVar39 - dVar23)) {
            dVar44 = (double)(float)(dVar39 - dVar23);
          }
          dVar24 = (double)(float)(dVar44 * dVar44);
          dVar23 = (double)DAT_0096a1c4;
          dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar44));
          dVar29 = (double)(float)(dVar24 * dVar27);
          fVar4 = (float)(dVar38 + (double)(float)((double)((float)(dVar44 + (double)(float)((double
                                                  )(float)(dVar24 * dVar44) * dVar33)) +
                                                  (float)(dVar27 * dVar25) +
                                                  (float)(dVar29 * dVar32) +
                                                  (float)((double)(float)(dVar24 * dVar29) * dVar31)
                                                  ) * dVar34));
          *(float *)(puVar6 + 0x20) = fVar4;
          dVar44 = dVar23;
          if ((double)(float)(dVar40 - dVar23) <= dVar23) {
            dVar44 = (double)(float)(dVar40 - dVar23);
          }
          if (dVar44 <= (double)(float)(dVar39 - dVar23)) {
            dVar44 = (double)(float)(dVar39 - dVar23);
          }
          dVar23 = (double)(float)(dVar44 * dVar44);
          *(float *)(puVar6 + 0x1e) = fVar4;
          *(float *)((int)puVar6 + 0xfc) = (float)dVar36;
          pMVar13 = g_heroMobyPtr;
          dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar44));
          dVar27 = (double)(float)(dVar23 * dVar24);
          fVar4 = (float)(dVar37 + (double)(float)((double)((float)(dVar44 + (double)(float)((double
                                                  )(float)(dVar23 * dVar44) * dVar33)) +
                                                  (float)(dVar24 * dVar25) +
                                                  (float)(dVar27 * dVar32) +
                                                  (float)((double)(float)(dVar23 * dVar27) * dVar31)
                                                  ) * dVar34));
          *(float *)((int)puVar6 + 0x104) = fVar4;
          *(float *)((int)puVar6 + 0xf4) = fVar4;
          *(float *)(puVar6 + 0x21) = (float)(dVar35 + 0.5);
          *(float *)(puVar6 + 0x1f) = (float)(dVar35 - 0.5);
          iVar18 = collproc::CollLine(uVar14 - 400,uVar14 - 0x1a0,4,pMVar13,0);
          if (iVar18 == 0) {
            dVar36 = (double)DAT_0096a1c4;
            dVar34 = (double)(float)(dVar36 + dVar41);
            dVar22 = dVar34;
            if ((double)(float)(dVar40 - dVar34) <= dVar34) {
              dVar22 = (double)(float)(dVar40 - dVar34);
            }
            if (dVar22 <= (double)(float)(dVar39 - dVar34)) {
              dVar22 = (double)(float)(dVar39 - dVar34);
            }
            dVar37 = (double)(float)(dVar22 * dVar22);
            dVar44 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar22));
            dVar38 = (double)(float)(dVar37 * dVar44);
            dVar34 = dVar36;
            if ((double)(float)(dVar40 - dVar36) <= dVar36) {
              dVar34 = (double)(float)(dVar40 - dVar36);
            }
            if (dVar34 <= (double)(float)(dVar39 - dVar36)) {
              dVar34 = (double)(float)(dVar39 - dVar36);
            }
            dVar24 = (double)(float)(dVar34 * dVar34);
            dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar34));
            dVar29 = (double)(float)(dVar24 * dVar27);
            dVar23 = (double)DAT_0096a1c4;
            dVar41 = (double)(float)(dVar23 + dVar41);
            dVar36 = dVar41;
            if ((double)(float)(dVar40 - dVar41) <= dVar41) {
              dVar36 = (double)(float)(dVar40 - dVar41);
            }
            if (dVar36 <= (double)(float)(dVar39 - dVar41)) {
              dVar36 = (double)(float)(dVar39 - dVar41);
            }
            dVar26 = (double)(float)(dVar36 * dVar36);
            dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar36));
            dVar30 = (double)(float)(dVar26 * dVar28);
            dVar41 = dVar23;
            if ((double)(float)(dVar40 - dVar23) <= dVar23) {
              dVar41 = (double)(float)(dVar40 - dVar23);
            }
            if (dVar41 <= (double)(float)(dVar39 - dVar23)) {
              dVar41 = (double)(float)(dVar39 - dVar23);
            }
            dVar40 = (double)(float)(dVar41 * dVar41);
            dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar41));
            dVar23 = (double)(float)(dVar40 * dVar39);
            DAT_0096a1b0 = *(float *)(puVar6 + 0x20) +
                           ((float)(dVar22 + (double)(float)((double)(float)(dVar37 * dVar22) *
                                                            dVar33)) + (float)(dVar44 * dVar25) +
                            (float)(dVar38 * dVar32) +
                           (float)((double)(float)(dVar37 * dVar38) * dVar31)) * -0.015 +
                           (float)((double)((float)(dVar36 + (double)(float)((double)(float)(dVar26 
                                                  * dVar36) * dVar33)) + (float)(dVar28 * dVar25) +
                                            (float)(dVar30 * dVar32) +
                                           (float)((double)(float)(dVar26 * dVar30) * dVar31)) *
                                  dVar42);
            DAT_0096a1b4 = *(float *)((int)puVar6 + 0x104) +
                           ((float)(dVar34 + (double)(float)((double)(float)(dVar24 * dVar34) *
                                                            dVar33)) + (float)(dVar27 * dVar25) +
                            (float)(dVar29 * dVar32) +
                           (float)((double)(float)(dVar24 * dVar29) * dVar31)) * -0.015 +
                           (float)((double)((float)(dVar41 + (double)(float)((double)(float)(dVar40 
                                                  * dVar41) * dVar33)) + (float)(dVar39 * dVar25) +
                                            (float)(dVar23 * dVar32) +
                                           (float)((double)(float)(dVar40 * dVar23) * dVar31)) *
                                  dVar42);
            DAT_0096a1b8 = (float)(dVar35 + dVar43);
            DAT_0096a1bc = *(undefined4 *)((int)puVar6 + 0x10c);
            DAT_0096a1c8 = 1;
            return;
          }
          dVar34 = (double)(float)(dVar34 + 0.029999999329447746);
        } while (dVar34 < dVar22);
      }
    }
  }
  return;
}



//==== 00083594  ns=hero  size=0x118
// sig: undefined Hero_KillLoopingSounds(void)
// callers(2): 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement
// callees(1): 0015cdb0 sound::sound_Kill

void hero::Hero_KillLoopingSounds(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (*(MobyInstance **)((int)&g_heroLoopSoundMobys + iVar3) == (MobyInstance *)0x0) {
      iVar1 = *(int *)((int)&g_heroLoopSounds + iVar3);
      if (((iVar1 != -1) && (sound::g_SoundChannels[iVar1].pMoby == g_heroMobyPtr)) &&
         (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      *(undefined4 *)((int)&g_heroLoopSounds + iVar3) = 0xffffffff;
    }
    else {
      iVar1 = *(int *)((int)&g_heroLoopSounds + iVar3);
      if (((iVar1 != -1) &&
          (sound::g_SoundChannels[iVar1].pMoby ==
           *(MobyInstance **)((int)&g_heroLoopSoundMobys + iVar3))) &&
         (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      *(undefined4 *)((int)&g_heroLoopSounds + iVar3) = 0xffffffff;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 8);
  return;
}



//==== 000836ac  ns=hero  size=0x26c
// sig: undefined Hero_RevertToRatchet(void)
// callers(11): 00079b18 freeze::UpdateFreeze; 00083918 hero::Hero_EndHologuise; 00083ac8 hero::Hero_HandleGroundType; 00087a88 hero::Hero_UpdateTimers; 000b72b0 hero::TransitionMovement; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002f7690 mobyupdate_unsorted::UpdateMoby_22
// callees(5): 0007fa30 hero::Hero_ResetTweakers; 000b72b0 hero::TransitionMovement; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 0015cdb0 sound::sound_Kill

ulonglong hero::Hero_RevertToRatchet(void)

{
  int iVar1;
  float fVar2;
  MobyInstance *pMVar3;
  PlayerState PVar4;
  ulonglong uVar5;
  int iVar6;
  vec4 *pvVar7;
  undefined4 *puVar8;
  
  puVar8 = &g_heroMtx;
  if (g_heroType == '\x01') {
    g_clankMaxNanotech = g_heroHealth;
    g_heroHealth = (int)DAT_0096bf90;
    if (DAT_0096b300 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(DAT_0096b300);
      DAT_0096b300 = (MobyInstance *)0x0;
    }
    if (DAT_0096b304 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(DAT_0096b304);
      DAT_0096b304 = (MobyInstance *)0x0;
    }
  }
  if (g_heroType == '\x02') {
    if (DAT_0096b314 != -1) {
      hud::Hud_SetEntryValueById((int)DAT_0096b314,0);
      DAT_0096b314 = -1;
    }
  }
  Hero_ResetTweakers();
  g_heroType = 0;
  if (DAT_0096a764 != 0) {
    *(ushort *)(DAT_0096a764 + 0x34) = *(ushort *)(DAT_0096a764 + 0x34) & 0xfff9;
  }
  DAT_0096a764 = 0;
  if (DAT_0096a76c != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(DAT_0096a76c);
    DAT_0096a76c = (MobyInstance *)0x0;
  }
  iVar6 = 0;
  do {
    if ((MobyInstance *)puVar8[0x88e] == (MobyInstance *)0x0) {
      iVar1 = puVar8[0x886];
      if (((iVar1 != -1) && (sound::g_SoundChannels[iVar1].pMoby == g_heroMobyPtr)) &&
         (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      puVar8[0x886] = 0xffffffff;
    }
    else {
      iVar1 = puVar8[0x886];
      if (((iVar1 != -1) && (sound::g_SoundChannels[iVar1].pMoby == (MobyInstance *)puVar8[0x88e]))
         && (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      puVar8[0x886] = 0xffffffff;
    }
    pMVar3 = g_ratchetMoby;
    fVar2 = g_heroPosition.x;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar6 < 8);
  pvVar7 = &g_ratchetMoby->pos;
  g_heroMobyPtr = g_ratchetMoby;
  g_ratchetMoby->collisionMesh = (float *)0x0;
  pvVar7->x = fVar2;
  (pMVar3->pos).y = g_heroPosition.y;
  (pMVar3->pos).z = g_heroPosition.z;
  PVar4 = g_heroState;
  (pMVar3->pos).w = g_heroPosition.w;
  DAT_0096a774 = 0x3f800000;
  DAT_0096a790 = 0xffffffff;
  DAT_0096a798 = 0;
  if ((PVar4 != CUSTOM_UI) ||
     ((uVar5 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SCENE &&
      (uVar5 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SPACE)))) {
    iVar6 = TransitionMovement(0,1);
    uVar5 = (ulonglong)iVar6;
  }
  return uVar5;
}



//==== 00083918  ns=hero  size=0x34
// sig: undefined Hero_EndHologuise(void)
// callers(0): 
// callees(1): 000836ac hero::Hero_RevertToRatchet

void hero::Hero_EndHologuise(void)

{
  if (g_heroType == '\x03') {
    Hero_RevertToRatchet();
  }
  return;
}



//==== 00083950  ns=hero  size=0x154
// sig: undefined HandleHeroDeath(void)
// callers(16): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 000be228 hero::HeroMovement; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 00194fe8 mobyupdate_unsorted::UpdateMoby_1039; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 0023892c FUN_0023892c; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00353470 mobyupdate_unsorted::UpdateMoby_35; 00382358 mobyupdate_unsorted::UpdateMoby_440; 00417370 mobyupdate_unsorted::UpdateMoby_689; 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(2): 0006dad0 draw::FadeToBlack; 0007b6b0 help::Help_ClearUsedSinceDeath

void hero::HandleHeroDeath(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_0096bf60;
  g_deathCount = g_deathCount + 1;
  bVar1 = DAT_0096bf60 != 0;
  *(int *)(&DAT_00a0f784 + Level * 4) = *(int *)(&DAT_00a0f784 + Level * 4) + 1;
  if (((bVar1) && (*(short *)(iVar2 + 0xa6) == 0x4d)) && (Level == Quartu)) {
    DAT_00a15f34 = 1;
  }
  help::Help_ClearUsedSinceDeath();
  iVar2 = DAT_0096bf60;
  if ((DAT_0096bf60 != 0) && (*(char *)(DAT_0096bf60 + 0xb0) != -1)) {
    *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) =
         *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) + 1;
    (&DAT_00a0fcd4)[*(byte *)(iVar2 + 0xb0)] = (&DAT_00a0fcd4)[*(byte *)(iVar2 + 0xb0)] + 1;
  }
  draw::FadeToBlack((int)(animationSpeed * 16.5));
  g_HeroIsOutOfBounds = 1;
  return;
}



//==== 00083ac8  ns=hero  size=0x6b0
// sig: undefined Hero_HandleGroundType(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(7): 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 0006dad0 draw::FadeToBlack; 0007b6b0 help::Help_ClearUsedSinceDeath; 000836ac hero::Hero_RevertToRatchet; 000b72b0 hero::TransitionMovement; 00500250 fastfunc::FastMemSetZero

undefined4 * hero::Hero_HandleGroundType(void)

{
  bool bVar1;
  LevelId LVar2;
  short sVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar4 = DAT_0096afcd;
  sVar3 = g_heroGroundType;
  fastfunc::FastMemSetZero(&g_heroGroundType,0x10);
  g_heroGroundType = 0xffff;
  DAT_0096bd89 = 0;
  g_onMagnerail = 0;
  DAT_0096afc7 = 0;
  DAT_0096afcd = uVar4;
  puVar6 = (undefined4 *)0x0;
  if (sVar3 != -1) {
    if (((sVar3 == 2) &&
        (((DAT_00969fec == 0 || (g_heroGroundDist < 0.3)) && (DAT_0096afc7 = 1, g_heroType == '\0'))
        )) && ((DAT_0096adc0 != 0 && (*(short *)(DAT_0096adc0 + 0xa6) == 0xad)))) {
      g_onMagnerail = 1;
    }
    if (sVar3 == 0xe) {
      g_heroWaterZ = g_heroGroundZ + 0.2;
      DAT_0096bf84 = 0.2;
      DAT_0096afc4 = 1;
    }
    if (sVar3 == 0) {
      DAT_0096bf84 = g_heroWaterZ - g_heroGroundZ;
      if ((DAT_0096bf84 < 0.85) && (0.25 < DAT_0096bf84)) {
        DAT_0096bd89 = 1;
      }
      DAT_0096afc4 = 1;
    }
    if (sVar3 == 3) {
      DAT_0096afc6 = '\x01';
    }
    if ((((Level == Gemlik) && (g_heroState != DEATH_MUD)) &&
        (iVar5 = collproc::CollSphere
                           ((double)(g_heroCollRadius + 0.03),&g_heroCGPos,&DAT_00083aa4,2,0),
        iVar5 != 0)) && (iVar5 = collproc::CollHotspot(), iVar5 == 0xb)) {
      puVar6 = (undefined4 *)TransitionMovement(0x7b,1);
    }
    else {
      iVar5 = DAT_0096bf60;
      LVar2 = Level;
      if (sVar3 == 0xb) {
        DAT_0096afcb = 1;
      }
      if (sVar3 == 5) {
        DAT_0096afc8 = 1;
      }
      if (sVar3 == 6) {
        DAT_0096afc9 = 1;
      }
      if (sVar3 == 2) {
        DAT_0096afc7 = 1;
      }
      if (sVar3 == 4) {
        DAT_0096afc3 = '\x01';
      }
      if (sVar3 == 7) {
        DAT_0096afc2 = 1;
      }
      if (sVar3 == 0xd) {
        DAT_0096afcc = '\x01';
      }
      if (sVar3 == 1) {
        DAT_0096afc5 = '\x01';
      }
      if (sVar3 == 8) {
        DAT_0096afca = 1;
      }
      if (sVar3 == 9) {
        DAT_0096afce = 1;
      }
      if (sVar3 == 0xc) {
        DAT_0096afca = 1;
      }
      if (((DAT_0096afc3 != '\0') && (g_framesGroundedCnt != 0)) &&
         ((g_heroStateType != 0x10 && ((g_heroStateType != 0x14 && (g_heroStateType != 7)))))) {
        puVar6 = (undefined4 *)TransitionMovement(0x31,1);
        return puVar6;
      }
      if ((((DAT_0096afc5 == '\0') || (g_framesGroundedCnt == 0)) || (g_heroType != '\x01')) ||
         (g_heroState == UNK_7D)) {
        if (((DAT_0096afc5 == '\0') || (g_framesGroundedCnt == 0)) ||
           ((g_heroState == TAKING_DAMAGE_LAVA && (DAT_0096a0fe == 0)))) {
          if ((((DAT_0096afcc != '\0') && (g_heroState != DEATH_ICE)) &&
              (ABS(g_heroWaterZ - (g_heroPosition.z + 0.25)) < 1.0)) &&
             ((0.0 < g_heroWaterZ - g_heroPosition.z && (DAT_00969de8 < 0.0)))) {
            if (g_heroType == '\x03') {
              Hero_RevertToRatchet();
            }
            puVar6 = (undefined4 *)TransitionMovement(0x7f,1);
            return puVar6;
          }
          if (((((DAT_0096afc6 != '\0') && (g_heroState != MUD_SINKING)) &&
               (g_heroState != DEATH_MUD)) &&
              ((ABS(DAT_00969fd4 - (g_heroPosition.z + 0.25)) < 1.0 &&
               (0.0 < DAT_00969fd4 - g_heroPosition.z)))) &&
             (((g_heroState != MUD_JUMP || (DAT_0096a0fe != 0)) && (DAT_00969de8 < 0.0)))) {
            if (g_heroType == '\x03') {
              Hero_RevertToRatchet();
            }
            if (g_heroHealth == 0) {
              puVar6 = (undefined4 *)TransitionMovement(0x7b,1);
              return puVar6;
            }
            puVar6 = (undefined4 *)TransitionMovement(0x68,1);
            return puVar6;
          }
          puVar6 = (undefined4 *)(uint)DAT_0096afcb;
          if (((DAT_0096afcb != 0) && (puVar6 = (undefined4 *)g_heroState, g_heroState != DEATH_MUD)
              ) && ((puVar6 = &DAT_00083aa4, ABS(DAT_00969fd4 - (g_heroPosition.z + 0.25)) < 1.0 &&
                    ((puVar6 = &DAT_00083aa4, 0.0 < DAT_00969fd4 - g_heroPosition.z &&
                     (DAT_00969de8 < 0.0)))))) {
            if ((g_heroType == '\x02') || (g_heroType == '\x01')) {
              g_deathCount = g_deathCount + 1;
              bVar1 = DAT_0096bf60 != 0;
              *(int *)(&DAT_00a0f784 + Level * 4) = *(int *)(&DAT_00a0f784 + Level * 4) + 1;
              if (((bVar1) && (*(short *)(iVar5 + 0xa6) == 0x4d)) && (LVar2 == Quartu)) {
                DAT_00a15f34 = 1;
              }
              help::Help_ClearUsedSinceDeath();
              iVar5 = DAT_0096bf60;
              if ((DAT_0096bf60 != 0) && (*(char *)(DAT_0096bf60 + 0xb0) != -1)) {
                *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) =
                     *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) +
                     1;
                (&DAT_00a0fcd4)[*(byte *)(iVar5 + 0xb0)] =
                     (&DAT_00a0fcd4)[*(byte *)(iVar5 + 0xb0)] + 1;
              }
              draw::FadeToBlack((int)(animationSpeed * 16.5));
              puVar6 = (undefined4 *)0x1;
              g_HeroIsOutOfBounds = 1;
            }
            else {
              if (g_heroType == '\x03') {
                Hero_RevertToRatchet();
              }
              puVar6 = (undefined4 *)TransitionMovement(0x7b,1);
            }
          }
        }
        else {
          if (g_heroType == '\x03') {
            Hero_RevertToRatchet();
          }
          if (g_heroHealth == 0) {
            puVar6 = (undefined4 *)TransitionMovement(0x7c,1);
          }
          else {
            puVar6 = (undefined4 *)TransitionMovement(0x3c,1);
          }
        }
      }
      else {
        puVar6 = (undefined4 *)TransitionMovement(0x7d,1);
      }
    }
  }
  return puVar6;
}



//==== 00084180  ns=hero  size=0x11c
// sig: void Hero_GetHeroRelativeVector(float x, float y, float z, float * out)
// callers(11): 00087a88 hero::Hero_UpdateTimers; 000888c8 hero::Hero_ResolveCollision; 0008af28 hero::???_Hero_UpdateGroundProbe; 000930e8 hero::Hero_UpdateLookAtTarget; 00094ea8 hero::Hero_GetGrindProbePos; 00094ef8 hero::Hero_CheckGrindRailAttach; 000954c8 hero::HeroUpdate; 000a1698 hero::Hero_ThrowWrench; 000a9158 hero::Hero_GrindMotion; 000aaec0 hero::HandleHeroMovement; 002ab988 mobyupdate_unsorted::UpdateMoby_168
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetHeroRelativeVector(float x,float y,float z,float *out)

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
  
  out[3] = 0.0;
  *out = x;
  out[1] = y;
  out[2] = z;
  fVar1 = DAT_00969ce4 * x;
  fVar4 = DAT_00969cf4 * y;
  fVar2 = DAT_00969ce8 * x;
  fVar5 = DAT_00969cf8 * y;
  fVar3 = DAT_00969cec * x;
  fVar6 = DAT_00969cfc * y;
  fVar7 = DAT_00969d04 * z;
  fVar10 = DAT_00969d14 * 0.0;
  fVar8 = DAT_00969d08 * z;
  fVar9 = DAT_00969d0c * z;
  fVar11 = DAT_00969d18 * 0.0;
  fVar12 = DAT_00969d1c * 0.0;
  *out = g_heroMtx * x + DAT_00969cf0 * y + DAT_00969d00 * z + DAT_00969d10 * 0.0;
  out[1] = fVar1 + fVar4 + fVar7 + fVar10;
  out[2] = fVar2 + fVar5 + fVar8 + fVar11;
  out[3] = fVar3 + fVar6 + fVar9 + fVar12;
  *out = *out + g_heroPosition.x;
  out[1] = out[1] + g_heroPosition.y;
  out[2] = out[2] + g_heroPosition.z;
  return;
}



//==== 000842e0  ns=hero  size=0x54c
// sig: undefined ???_Hero_UpdateIdleDetect(void)
// callers(1): 00087a88 hero::Hero_UpdateTimers
// callees(1): 00109b40 mobyutil::AccelDelt

void hero::____Hero_UpdateIdleDetect(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar17;
  double dVar18;
  ulonglong in_f30;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  undefined1 auVar21 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xe0;
  puVar5 = (ulonglong *)lVar13;
  *puVar5 = uVar11;
  puVar5[0x1e] = in_LR;
  puVar5[0x1a] = in_f30;
  puVar5[0x1b] = in_f31;
  puVar5[0x19] = unaff_r31;
  cVar10 = DAT_00969f37;
  puVar5[0x18] = unaff_r30;
  if ((((cVar10 != '\0') && (0.0 < g_heroGroundDist)) &&
      (DAT_00969e40 < mobyutil::g_FrameTime * 3.0)) &&
     ((SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4 +
            DAT_00969dc8 * DAT_00969dc8) < mobyutil::g_FrameTime * 3.0 && (g_heroPadMagnitude < 0.2)
      ))) {
    if ((((g_heroStateType == 0) || ((g_heroStateType == 2 || (g_heroStateType == 4)))) ||
        (g_heroStateType == 10)) || (g_heroStateType == 1)) {
      puVar5[0x16] = (longlong)(int)(animationSpeed * 5.5);
      uVar4 = *(undefined4 *)((int)puVar5 + 0xb4);
      *(undefined4 *)(puVar5 + 0x14) = uVar4;
      *(undefined4 *)((int)puVar5 + 0xa4) = uVar4;
      *(undefined4 *)(puVar5 + 0x15) = uVar4;
      *(undefined4 *)((int)puVar5 + 0xac) = uVar4;
      auVar21 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar21 = vectorSplatHalfWord(auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,1)
      ;
      DAT_00969eca = storeVectorElementHalfWordIndexed(auVar21,0x1ea,0x969ce0);
    }
  }
  if (DAT_00969eca == 0) {
    DAT_00969f24 = 0.0;
  }
  else {
    fVar1 = g_heroPosition.x - DAT_00969ef0;
    fVar2 = g_heroPosition.y - DAT_00969ef4;
    fVar7 = g_heroCollRadius * 0.9;
    fVar6 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar6 < fVar7) {
      *(float *)((int)puVar5 + 0x74) = fVar1;
      fVar1 = ABS(fVar1);
      fVar8 = ABS(fVar2);
      *(float *)(puVar5 + 0xf) = fVar2;
      *(float *)((int)puVar5 + 0x7c) = fVar1 - fVar8;
      dVar19 = 0.0;
      iVar14 = (int)(((ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar5 + 0x7c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1d) & 4) << 2);
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar14);
      fVar2 = *(float *)(&DAT_00735904 + iVar14);
      if (0.0 <= *(float *)((int)puVar5 + 0x7c)) {
        fVar1 = ABS(*(float *)(puVar5 + 0xf));
        fVar8 = ABS(*(float *)((int)puVar5 + 0x74));
      }
      dVar20 = dVar19;
      if (0.0 < fVar8) {
        iVar14 = 4;
        iVar15 = 4;
        fVar1 = (fVar1 - fVar8) / (fVar1 + fVar8);
        lVar12 = lVar13;
        do {
          iVar14 = iVar14 + -1;
          *(float *)((int)lVar12 + 0x80) = fVar1;
          lVar12 = lVar12 + 4;
        } while (iVar14 != 0);
        fVar1 = fVar1 * fVar1;
        lVar12 = uVar11 - 0xd0;
        fVar8 = fVar1 * fVar1;
        *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar1;
        *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar8;
        *(float *)((int)puVar5 + 0x8c) = *(float *)((int)puVar5 + 0x8c) * fVar8 * fVar1;
        do {
          iVar15 = iVar15 + -1;
          *(float *)((int)lVar12 + 0x80) = *(float *)((int)lVar12 + 0x70) * fVar8 * fVar8;
          lVar12 = lVar12 + 4;
        } while (iVar15 != 0);
        iVar15 = 8;
        iVar14 = 0;
        iVar16 = 8;
        lVar12 = lVar13;
        do {
          pfVar9 = (float *)((int)&DAT_007358e0 + iVar14);
          iVar15 = iVar15 + -1;
          iVar14 = iVar14 + 4;
          *(float *)((int)lVar12 + 0x80) = *(float *)((int)lVar12 + 0x80) * *pfVar9;
          lVar12 = lVar12 + 4;
        } while (iVar15 != 0);
        do {
          iVar16 = iVar16 + -1;
          iVar14 = (int)lVar13;
          lVar13 = lVar13 + 4;
          dVar20 = (double)(float)(dVar20 + (double)*(float *)(iVar14 + 0x80));
        } while (iVar16 != 0);
        dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar3 + fVar2);
      }
      fVar1 = DAT_0071f40c;
      if (fVar6 < g_heroCollRadius * 0.05) {
        dVar20 = (double)g_heroRotation.z;
      }
      *(float *)(puVar5 + 0xe) = fVar6 - fVar7;
      mobyutil::AccelDelt(0.0,fVar1 * 0.03,fVar1 * 0.3,mobyutil::g_FrameTime * 2.8,
                          (float *)(puVar5 + 0xe),0x720000,&DAT_00969f24);
      fVar1 = (float)(dVar20 + 1.570796251296997);
      fVar2 = fVar1;
      if (3.1415925 - fVar1 <= fVar1) {
        fVar2 = 3.1415925 - fVar1;
      }
      if (fVar2 <= -3.1415925 - fVar1) {
        fVar2 = -3.1415925 - fVar1;
      }
      fVar7 = fVar2 * fVar2;
      fVar1 = fVar7 * fVar7 * fVar2;
      fVar6 = fVar7 * fVar1;
      DAT_00969dd0 = (fVar2 + fVar7 * fVar2 * -0.16666657 + fVar1 * 0.0083330255 +
                      fVar6 * -0.0001980741 + fVar7 * fVar6 * 2.601887e-06) * DAT_00969f24;
      dVar17 = dVar20;
      if ((double)(float)(3.141592502593994 - dVar20) <= dVar20) {
        dVar17 = (double)(float)(3.141592502593994 - dVar20);
      }
      if (dVar17 <= (double)(float)(-3.141592502593994 - dVar20)) {
        dVar17 = (double)(float)(-3.141592502593994 - dVar20);
      }
      dVar20 = (double)(float)(dVar17 * dVar17);
      DAT_00969dd8 = (float)dVar19;
      dVar18 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar17));
      dVar19 = (double)(float)(dVar20 * dVar18);
      DAT_00969dd4 = ((float)(dVar17 + (double)(float)((double)(float)(dVar20 * dVar17) *
                                                      -0.16666656732559204)) +
                      (float)(dVar18 * 0.008333025500178337) +
                      (float)(dVar19 * -0.0001980741071747616) +
                     (float)(dVar20 * dVar19) * 2.601887e-06) * DAT_00969f24;
    }
  }
  return;
}



//==== 00084830  ns=hero  size=0x134
// sig: float Hero_RelativeZComponent(float * v)
// callers(8): 00087a88 hero::Hero_UpdateTimers; 0008a2b8 hero::Hero_ApplyMotion; 00098878 hero::Hero_CheckLedgeAhead; 0009d6b0 hero::Hero_JumpThrustGrav; 000a5a58 hero::Hero_PredictLand; 000aa128 hero::Hero_GetJumpPeak; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_RelativeZComponent(float *v)

{
  float fVar1;
  double dVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (g_heroGravityMode == 0) {
    fVar1 = v[2];
  }
  else if (g_heroGravityMode < 3) {
    dVar2 = 0.0;
    fastfunc::FastEulerToMtx1(&local_50,ZEXT48(g_heroMobyPtr) + 0x40);
    fVar1 = ((float)((double)local_50 * dVar2) + (float)((double)local_40 * dVar2) + local_30 +
            (float)((double)local_20 * dVar2)) * *v +
            ((float)((double)local_4c * dVar2) + (float)((double)local_3c * dVar2) + local_2c +
            (float)((double)local_1c * dVar2)) * v[1] +
            ((float)((double)local_48 * dVar2) + (float)((double)local_38 * dVar2) + local_28 +
            (float)((double)local_18 * dVar2)) * v[2];
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}



//==== 00084978  ns=hero  size=0x2cc
// sig: undefined Hero_UpdateCollisionSize(void)
// callers(2): 00086b60 hero::SetHeroType; 0008b778 hero::Hero_UpdateMovement
// callees(2): 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt

double hero::Hero_UpdateCollisionSize(void)

{
  double dVar1;
  float fVar2;
  
  if (g_heroType < 2) {
    if (g_heroType == 0) {
      DAT_00969f08 = 0.8;
      DAT_00969f0c = 0.7;
      DAT_00969f10 = 0.45;
    }
    else {
      DAT_00969f08 = 0.59999996;
      DAT_00969f0c = 0.45000002;
      DAT_00969f10 = 0.3;
    }
  }
  else if (g_heroType < 3) {
    DAT_00969f10 = 3.75;
    DAT_00969f08 = 5.25;
    DAT_00969f0c = 4.45;
  }
  else if (g_heroType < 4) {
    DAT_00969f08 = 0.8;
    DAT_00969f0c = 0.6;
    DAT_00969f10 = 0.45;
  }
  if (g_heroStateType == 4) {
    if ((DAT_0096a100 < g_heroStateTimer) && (DAT_0096a0fe == 0)) {
      DAT_00969f0c = DAT_0096a114;
    }
  }
  else if (g_heroState == NEUTRAL_JUMP) {
    DAT_00969f0c = 0.5;
  }
  else if (g_heroState == CROUCHING) {
    DAT_00969f08 = 0.35000002;
  }
  else if ((g_heroStateType == 0x11) || (g_heroStateType == 0x12)) {
    DAT_00969f08 = 0.0;
    DAT_00969f0c = 0.0;
  }
  else if ((DAT_0096afc2 == '\0') || (g_framesGroundedCnt == 0)) {
    if (g_heroState == DEATH_ICE) {
      DAT_00969f10 = 0.8;
    }
  }
  else {
    DAT_00969f08 = 0.8;
    DAT_00969f0c = 0.9;
  }
  if ((((DAT_00969f37 == '\0') || (DAT_0096bd74 == 0x12)) || (g_heroStateType == 0x11)) ||
     ((DAT_0096afc4 != '\0' ||
      (dVar1 = (double)SQRT((DAT_00969ef0 - g_heroPosition.x) * (DAT_00969ef0 - g_heroPosition.x) +
                            (DAT_00969ef4 - g_heroPosition.y) * (DAT_00969ef4 - g_heroPosition.y)),
      (double)(g_heroCollRadius * 0.5) < dVar1)))) {
    dVar1 = 0.019999999552965164;
    mobyutil::Delt(DAT_00969f08,DAT_0071f408 * 0.02,(float *)&g_heroCollTop);
    mobyutil::Delt(DAT_00969f0c,(float)((double)DAT_0071f408 * dVar1),(float *)&g_heroCollBottom);
    fVar2 = mobyutil::AccelDelt(DAT_00969f10,(float)((double)DAT_0071f40c * dVar1),
                                (float)((double)DAT_0071f40c * 0.30000001192092896),
                                mobyutil::g_FrameTime * 4.0,&g_heroCollRadius,0x720000,
                                (float *)&DAT_00969f18);
    dVar1 = (double)fVar2;
  }
  return dVar1;
}



//==== 00084c44  ns=hero  size=0x94
// sig: int Hero_GetBoardAnim(short heroAnim, int * outAnim)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetBoardAnim(short heroAnim,int *outAnim)

{
  short sVar1;
  int iVar2;
  
  if (DAT_0096bf5c != (short *)0x0) {
    iVar2 = 0;
    sVar1 = *DAT_0096bf5c;
    while (sVar1 != -1) {
      if (heroAnim == DAT_0096bf5c[iVar2 * 2]) {
        *outAnim = (int)DAT_0096bf5c[iVar2 * 2 + 1];
        return 1;
      }
      iVar2 = iVar2 + 1;
      sVar1 = DAT_0096bf5c[iVar2 * 2];
    }
    *outAnim = 0;
  }
  return 0;
}



//==== 00084ce0  ns=hero  size=0x138
// sig: undefined Hero_TransBoardAnim(void)
// callers(1): 00085300 hero::Hero_TransAnim
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void hero::Hero_TransBoardAnim
               (double param_1,short param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined2 param_6)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if ((DAT_0096bf58 != 0) && (DAT_0096bf5c != (short *)0x0)) {
    if (DAT_0096bf5c == (short *)0x0) {
      bVar3 = false;
    }
    else {
      uVar4 = 0;
      param_6 = 0;
      sVar1 = *DAT_0096bf5c;
      while (sVar1 != -1) {
        iVar2 = (int)((uVar4 & 0xffffffff) << 2);
        if (param_2 == *(short *)((int)DAT_0096bf5c + iVar2)) {
          bVar3 = true;
          param_6 = *(undefined2 *)((int)DAT_0096bf5c + iVar2 + 2);
          goto LAB_00084d8c;
        }
        uVar4 = uVar4 + 1;
        sVar1 = *(short *)((int)DAT_0096bf5c + (int)((uVar4 & 0xffffffff) << 2));
      }
      bVar3 = false;
    }
LAB_00084d8c:
    if (bVar3) {
      mobyutil::MB_SetAnimation(DAT_0096bf58,param_6,param_3,(int)param_1);
    }
    else if (*(char *)(DAT_0096bf58 + 0x53) != '\0') {
      mobyutil::MB_SetAnimation(DAT_0096bf58,0,0,(int)(animationSpeed * 7.5));
    }
  }
  return;
}



//==== 00084e18  ns=hero  size=0x48
// sig: undefined Hero_SetLinkedAnimMoby(void)
// callers(0): 
// callees(0): 

void hero::Hero_SetLinkedAnimMoby(void)

{
  DAT_0096bf58 = 0;
  DAT_0096bf5c = (undefined2 *)0x0;
  if ((g_heroBoardMoby != 0) && ((g_heroStateType == 0x15 || (g_heroStateType == 0x16)))) {
    DAT_0096bf58 = g_heroBoardMoby;
    DAT_0096bf5c = &DAT_00723160;
  }
  return;
}



//==== 00084e60  ns=hero  size=0xfc
// sig: undefined Hero_GetBackpackAnimTable(void)
// callers(1): 000850f8 hero::Hero_TransBackpackAnim
// callees(0): 

undefined8 hero::Hero_GetBackpackAnimTable(uint param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)0x0;
  iVar3 = -1;
  if (DAT_0096ae84 == 2) {
    iVar3 = DAT_0096ae88;
  }
  if (iVar3 == 2) {
    psVar2 = &DAT_0072313c;
  }
  else {
    iVar3 = -1;
    if (DAT_0096ae84 == 2) {
      iVar3 = DAT_0096ae88;
    }
    if (iVar3 == 3) {
      psVar2 = &DAT_00723120;
    }
    else {
      iVar3 = -1;
      if (DAT_0096ae84 == 2) {
        iVar3 = DAT_0096ae88;
      }
      if (iVar3 == 4) {
        psVar2 = &DAT_00723154;
      }
    }
  }
  if (psVar2 != (short *)0x0) {
    iVar3 = 0;
    sVar1 = *psVar2;
    while (sVar1 != -1) {
      if (param_1 == *(byte *)(psVar2 + iVar3 * 2 + 1)) {
        *param_2 = (int)psVar2[iVar3 * 2];
        return 1;
      }
      iVar3 = iVar3 + 1;
      sVar1 = psVar2[iVar3 * 2];
    }
  }
  *param_2 = 0;
  return 0;
}



//==== 00084f5c  ns=hero  size=0x194
// sig: int Hero_GetBackpackAnim(short heroAnim, int * anim1, int * anim2)
// callers(4): 000850f8 hero::Hero_TransBackpackAnim; 0008baf0 hero::Hero_SyncBackpackAnimSpeed; 0008bc30 hero::Hero_UpdateAnim; 000a9f00 hero::Hero_PlayBackpackIdle
// callees(1): 000fe484 mobyutil::MB_randRange

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetBackpackAnim(short heroAnim,int *anim1,int *anim2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int aiStack_70 [22];
  int iVar3;
  
  lVar2 = 0;
  iVar3 = 0;
  psVar7 = (short *)0x0;
  iVar6 = -1;
  if (DAT_0096ae84 == 2) {
    iVar6 = DAT_0096ae88;
  }
  if (iVar6 == 2) {
    psVar7 = &DAT_0072313c;
  }
  else {
    iVar6 = -1;
    if (DAT_0096ae84 == 2) {
      iVar6 = DAT_0096ae88;
    }
    if (iVar6 == 3) {
      psVar7 = &DAT_00723120;
    }
    else {
      iVar6 = -1;
      if (DAT_0096ae84 == 2) {
        iVar6 = DAT_0096ae88;
      }
      if (iVar6 == 4) {
        psVar7 = &DAT_00723154;
      }
    }
  }
  if (psVar7 != (short *)0x0) {
    iVar6 = 0;
    if (*psVar7 != -1) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        if (heroAnim == *(short *)((int)psVar7 + iVar5)) {
          lVar1 = lVar2 << 2;
          lVar2 = lVar2 + 1;
          *(int *)((int)aiStack_70 + (int)lVar1) = iVar6;
        }
        iVar3 = (int)lVar2;
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + 1;
      } while (*(short *)((int)psVar7 + iVar4) != -1);
    }
  }
  if (iVar3 == 0) {
    *anim1 = 1;
  }
  else {
    lVar2 = mobyutil::MB_randRange(0,iVar3 + -1);
    iVar6 = *(int *)((int)aiStack_70 + (int)(lVar2 << 2));
    *anim1 = (uint)*(byte *)(psVar7 + iVar6 * 2 + 1);
    *anim2 = (uint)*(byte *)((int)psVar7 + iVar6 * 4 + 3);
  }
  return (int)(iVar3 != 0);
}



//==== 000850f8  ns=hero  size=0x200
// sig: undefined Hero_TransBackpackAnim(void)
// callers(1): 00085300 hero::Hero_TransAnim
// callees(3): 00084e60 hero::Hero_GetBackpackAnimTable; 00084f5c hero::Hero_GetBackpackAnim; 000fddc0 mobyutil::MB_SetAnimation

void hero::Hero_TransBackpackAnim(double param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_50 [4];
  uint local_4c;
  int local_48 [2];
  longlong local_40;
  
  iVar3 = DAT_0096ae64;
  iVar2 = DAT_0096ae60;
  if (DAT_0096ae84 == 2) {
    if (DAT_0096ae64 != 0 && DAT_0096ae60 != 0) {
      iVar4 = Hero_GetBackpackAnim((short)param_2,(int *)&local_4c,local_48);
      if ((iVar4 == 0) || (param_2 == 0)) {
        bVar1 = true;
        if ((g_heroStateType == 0) &&
           ((iVar4 = Hero_GetBackpackAnimTable(*(undefined1 *)(iVar2 + 0x53),local_50), iVar4 != 0
            && (param_2 == 0)))) {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = (int)(animationSpeed * 7.5);
          local_40 = (longlong)iVar4;
          if (DAT_0096bd70 == 8) {
            iVar5 = -1;
            if (DAT_0096ae84 == 2) {
              iVar5 = DAT_0096ae88;
            }
            if (iVar5 == 2) {
              iVar4 = (int)(animationSpeed * 19.5);
              local_40 = (longlong)iVar4;
            }
          }
          if (*(char *)(iVar2 + 0x53) != '\x01') {
            mobyutil::MB_SetAnimation(iVar2,1,0,iVar4);
          }
          if (*(char *)(iVar3 + 0x53) != '\x01') {
            mobyutil::MB_SetAnimation(iVar3,1,0,iVar4);
          }
        }
      }
      else if (*(byte *)(iVar2 + 0x53) != local_4c) {
        iVar4 = (int)param_1;
        local_40 = (longlong)iVar4;
        mobyutil::MB_SetAnimation(iVar2,local_4c,param_3,iVar4);
        mobyutil::MB_SetAnimation(iVar3,local_48[0],param_3,iVar4);
      }
    }
  }
  return;
}



//==== 00085300  ns=hero  size=0x2b0
// sig: void Hero_TransAnim(float blend, int seq, int frame)
// callers(28): 000855b8 hero::Hero_EndFiringAnim; 00085b30 hero::Hero_HandleGadgetSwitching; 00086b60 hero::SetHeroType; 0008e170 hero::Hero_UpdateFiringAnimLayer; 00099ea8 hero::Hero_PlayFiringAnim; 000a0c38 hero::Hero_Warp; 000a2600 hero::Hero_IdleCycleFiringTransition; 000a4a60 hero::Hero_UpdateWalkAnim; 000a5310 hero::Hero_JumpLandTransitions; 000a6048 hero::Hero_HandleHoverboardTricks; 000a9158 hero::Hero_GrindMotion; 000a9d70 hero::Hero_UpdateWeaponReadyAnim; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 002288c8 mobyupdate_unsorted::UpdateMoby_1251; 0025a470 mobyupdate_unsorted::UpdateMoby_1357; 002902e8 mobyupdate_unsorted::UpdateMoby_1513; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002beb68 mobyupdate_unsorted::UpdateMoby_1818; 002ebd98 mobyupdate_unsorted::UpdateMoby_208; 00314818 mobyupdate_unsorted::UpdateMoby_247; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(8): 00084ce0 hero::Hero_TransBoardAnim; 000850f8 hero::Hero_TransBackpackAnim; 000ef74c mobyfunc::UpdateMobyFrameData; 000f0f9c mobyfunc::AnimCache_Register; 000fa940 mobyfunc::InterpolateAnimation; 00502758 fastfunc::FastDoubleToInt; 00503244 stub::FlushCache; 005c5ad0 libc::memcpy
// strings: 0096c074: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_TransAnim(float blend,int seq,int frame)

{
  int iVar1;
  MobyInstance *__src;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  __src = g_heroMobyPtr;
  dVar4 = (double)blend;
  lVar3 = (longlong)seq;
  if ((DAT_0096a778 & 2) != 0) {
    g_heroMobyPtr->animationBlend = 0.0;
  }
  if (Cheats[5] != '\0') {
    if (seq == 0x31) {
      lVar3 = 0x32;
    }
    else if (seq == 0x32) {
      lVar3 = 0x31;
    }
  }
  iVar2 = mobyfunc::AnimCache_Register((int)__src);
  if (-1 < iVar2) {
    mobyfunc::InterpolateAnimation(__src,(longlong)iVar2 | 0x300);
    stub::FlushCache(0);
    iVar1 = (int)((longlong)iVar2 << 4);
    libc::memcpy((float *)(iVar1 + 0xa34600),__src,0x10);
    if (__src->updateId != 0xff) {
      __src->previousAnimationId = __src->updateId;
    }
    *(float *)(iVar1 + 0xa34600) = (__src->transform).v3.x;
    *(float *)(iVar1 + 0xa34604) = (__src->transform).v3.y;
    *(float *)(iVar1 + 0xa34608) = (__src->transform).v3.z;
    *(float *)(iVar1 + 0xa3460c) = (__src->transform).v3.w;
    __src->updateId = 0xff;
    __src->previousAnimationFrame = (char)iVar2;
  }
  __src->animationFrame = (char)frame;
  __src->animationId = (u8)lVar3;
  mobyfunc::UpdateMobyFrameData(__src);
  g_heroAnimSpeed = 0x3f800000;
  dVar5 = 0.0;
  if (dVar4 <= 0.0) {
    DAT_0096a774 = 1.0;
    iVar2 = fastfunc::FastDoubleToInt(-dVar4);
    DAT_0096a780 = iVar2 + -1;
    __src->animationBlend = (float)dVar5;
    DAT_0096a784 = 0;
  }
  else {
    DAT_0096a774 = (float)(1.0 / dVar4);
    DAT_0096a780 = -1;
    __src->animationBlend = 0.0;
  }
  DAT_0096a790 = 0xffffffff;
  DAT_0096a798 = 0;
  __src->unk7c = *(char *)(*(int *)(&__src->pClass->type + (int)(lVar3 << 2)) + 0x11);
  DAT_0096a77c = 1;
  if (dVar4 < dVar5) {
    dVar4 = (double)(longlong)*(int *)(DAT_0096a780 * 4 + 0x723484);
  }
  if (g_heroType == '\0') {
    Hero_TransBackpackAnim(dVar4,lVar3,frame);
  }
  DAT_0096bf58 = 0;
  DAT_0096bf5c = (undefined2 *)0x0;
  if ((g_heroBoardMoby != 0) && ((g_heroStateType == 0x15 || (g_heroStateType == 0x16)))) {
    DAT_0096bf58 = g_heroBoardMoby;
    DAT_0096bf5c = &DAT_00723160;
  }
  if (DAT_0096bf58 != 0) {
    Hero_TransBoardAnim(dVar4,lVar3,frame);
  }
  return;
}



//==== 000855b8  ns=hero  size=0xa4
// sig: undefined Hero_EndFiringAnim(void)
// callers(8): 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002c7328 mobyupdate_unsorted::UpdateMoby_185; 003892e8 mobyupdate_unsorted::UpdateMoby_454; 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(2): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim

void hero::Hero_EndFiringAnim(void)

{
  int seq;
  
  if (DAT_0096bd88 != '\0') {
    if (DAT_0096a9e8 == 0) {
      if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
        seq = Hero_GetIdleAnim(0);
        Hero_TransAnim(-2.0,seq,0);
      }
    }
    else {
      DAT_0096a9f4 = 1;
    }
    DAT_0096bd88 = '\0';
    DAT_0096bd8a = 0;
  }
  return;
}



//==== 00085660  ns=hero  size=0x118
// sig: undefined ???_Hero_IsGadgetType_SetVec(void)
// callers(0): 
// callees(0): 

void hero::____Hero_IsGadgetType_SetVec(int param_1)

{
  undefined1 auVar1 [16];
  
  if ((((param_1 == 0x17) || (param_1 == 0x10)) || (param_1 == 0xd)) ||
     ((param_1 == 0xb || (param_1 == 9)))) {
    auVar1 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    DAT_0096bfae = 3;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar1 = vectorSplatHalfWord(auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,1);
    DAT_00969ebc = storeVectorElementHalfWordIndexed(auVar1,0x1dc,0x969ce0);
  }
  return;
}



//==== 00085780  ns=hero  size=0x24c
// sig: undefined ???_Hero_GadgetSwitchSetup(void)
// callers(1): 00085b30 hero::Hero_HandleGadgetSwitching
// callees(0): 

void hero::____Hero_GadgetSwitchSetup(int param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 0x11) {
    if (param_1 < 0xe) {
      if (param_1 < 0xb) {
        if (param_1 != 9) {
          return;
        }
      }
      else if (param_1 == 0xc) {
        return;
      }
    }
    else if (param_1 < 0x10) goto LAB_000858e8;
  }
  else if (param_1 < 0x16) {
    if (param_1 < 0x13) {
      if (param_1 < 0x12) {
        return;
      }
LAB_000858e8:
      auVar1 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar1 = vectorSplatHalfWord(auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,1);
      DAT_00969eba = storeVectorElementHalfWordIndexed(auVar1,0x1da,0x969ce0);
      return;
    }
    if (0x13 < param_1) {
      return;
    }
  }
  else {
    if (0x19 < param_1) {
      if (0x1a < param_1) {
        return;
      }
      goto LAB_000858e8;
    }
    if (0x17 < param_1) {
      return;
    }
  }
  auVar1 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = vectorSplatHalfWord(auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,1);
  DAT_00969eba = storeVectorElementHalfWordIndexed(auVar1,0x1da,0x969ce0);
  return;
}



//==== 000859d0  ns=hero  size=0x40
// sig: undefined Hero_ClearIdleTweakVals(void)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

void hero::Hero_ClearIdleTweakVals(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = &g_heroMtx;
  DAT_0096ace4 = 0;
  DAT_0096ace8 = 0;
  do {
    iVar2 = iVar2 + -1;
    puVar1[0x409] = 0;
    puVar1[0x40a] = 0;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  return;
}



//==== 00085a10  ns=hero  size=0x44
// sig: int Hero_GetSpecialStateKind(void)
// callers(6): 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 002902e8 mobyupdate_unsorted::UpdateMoby_1513; 00340968 mobyupdate_unsorted::UpdateMoby_318; 0042fc90 mobyupdate_unsorted::UpdateMoby_713; 0046e420 mobyupdate_unsorted::UpdateMoby_816
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetSpecialStateKind(void)

{
  if ((int)g_heroState < 0x67) {
    if (100 < (int)g_heroState) {
      return 1;
    }
  }
  else if ((int)g_heroState < 0x68) {
    return 2;
  }
  return 0;
}



//==== 00085a54  ns=hero  size=0xc4
// sig: int Hero_CanSwitchGadget(void)
// callers(2): 00085b30 hero::Hero_HandleGadgetSwitching; 000a30e0 hero::???_Hero_UpdateWeaponInput
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_CanSwitchGadget(void)

{
  int iVar1;
  
  if ((int)g_heroState < 0x67) {
    if (100 < (int)g_heroState) {
      iVar1 = 1;
      goto LAB_00085a94;
    }
  }
  else if ((int)g_heroState < 0x68) {
    iVar1 = 2;
    goto LAB_00085a94;
  }
  iVar1 = 0;
LAB_00085a94:
  if (iVar1 == 0 && g_gameMode == GAME_MODE_NORMAL) {
    if ((g_heroType == '\0') &&
       ((((g_heroStateType == 0 || (g_heroStateType == 1)) || (g_heroStateType == 2)) ||
        (((g_heroState == GLIDING || (g_heroState == MOVEMENT_JUMP)) || (g_heroState == DOUBLE_JUMP)
         ))))) {
      if (DAT_0096afc4 == '\0') {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



//==== 00085b30  ns=hero  size=0xce4
// sig: void Hero_HandleGadgetSwitching(int slot)
// callers(3): 00086948 hero::Hero_UpdateGadgetSlots; 000a64d0 hero::Hero_HoverboardBoostPads; 000be228 hero::HeroMovement
// callees(9): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 00085780 hero::???_Hero_GadgetSwitchSetup; 00085a54 hero::Hero_CanSwitchGadget; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0015d12c sound::PlayMobySound; 0039ac10 mobyupdate_helpers::M479_0039ac10; 004fffb4 fastfunc::FastDecTimerS16

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_HandleGadgetSwitching(int slot)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  MobyInstance *pMoby;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  lVar6 = (longlong)slot;
  bVar1 = slot == 0;
  if (bVar1) {
    iVar9 = (int)(lVar6 << 6) + (int)(lVar6 << 4);
    if ((((*(int *)((int)&g_CurrentWeapon + iVar9) != 8) &&
         (*(int *)((int)&g_CurrentWeapon + iVar9) != 0x17)) &&
        (*(int *)((int)&g_CurrentWeapon + iVar9) != 9)) && (DAT_0096ad8c == '\x02')) {
      DAT_0096ad8c = '\0';
    }
    if (((DAT_0096bd87 != '\0') && (g_CurrentWeapon != 8)) &&
       ((g_heroStateType != 0x16 || (DAT_0096a5ae == '\0')))) {
      DAT_0096bd86 = '\x01';
    }
  }
  puVar11 = &g_heroMtx;
  if ((g_CurrentWeapon == 0x24) && (g_heroStateType != 0x16)) {
    DAT_0096bd86 = '\x01';
  }
  if (((bVar1) && (DAT_0096bd87 != '\0')) && (g_CurrentWeapon == 8)) {
    iVar9 = (int)(lVar6 << 2);
    if (*(int *)((int)&DAT_0096bd98 + iVar9) == 0x1f) {
      *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 0;
    }
    if ((*(int *)((int)&DAT_0096bd98 + iVar9) != 0x18) &&
       (*(int *)((int)&DAT_0096bd98 + iVar9) != 0x24)) {
      return;
    }
  }
  if (((DAT_0096bd8c != '\0') && (bVar1)) && ((DAT_0096bd86 == '\0' || (g_CurrentWeapon == 8)))) {
    DAT_0096bd86 = 0;
    return;
  }
  bVar5 = false;
  bVar3 = false;
  if (((g_buttonsPressedThisFrame & SQUARE) == 0) && (DAT_0096bd86 == '\0')) {
LAB_00085d58:
    bVar5 = bVar3;
    if (((bVar1) && ((g_buttonsPressedThisFrame & CIRCLE) != 0)) &&
       ((DAT_0096bd87 == '\0' &&
        ((iVar9 = (int)(lVar6 << 2), g_CurrentWeapon != *(int *)((int)&g_equippedItem + iVar9) &&
         (*(int *)((int)&g_equippedItem + iVar9) != 0)))))) {
      bVar5 = true;
      *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9) =
           *(undefined4 *)((int)&g_equippedItem + iVar9);
    }
  }
  else if (bVar1) {
    if (g_CurrentWeapon != 8) {
      if (((DAT_0096bd86 != '\0') && (g_CurrentWeapon != 0)) &&
         (iVar9 = (int)(lVar6 << 6) + (int)(lVar6 << 4),
         *(int *)((int)&g_CurrentWeapon + iVar9) != 0x1f)) {
        *(undefined4 *)((int)&DAT_0096bdd0 + (int)(lVar6 << 2)) =
             *(undefined4 *)((int)&g_CurrentWeapon + iVar9);
      }
      *(undefined4 *)((int)&g_WeaponToSwapTo + (int)(lVar6 << 2)) = 8;
      bVar3 = true;
    }
    goto LAB_00085d58;
  }
  if (slot == 1) {
    bVar1 = false;
    if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_00085df4:
      bVar1 = true;
    }
    else if ((g_heroState == DEATH_DROWNING) ||
            (((g_heroState == DEATH_WATER_LASER || (g_heroState == UNDERWATER_DAMAGE)) ||
             (g_heroState == UNK_75)))) goto LAB_00085df4;
    if (((bVar1) || (g_heroState == WATER_JUMP)) &&
       (iVar9 = (int)(lVar6 << 6) + (int)(lVar6 << 4), *(int *)((int)&g_CurrentWeapon + iVar9) != 0)
       ) {
      DAT_0096bd9c = 0x26;
      *(undefined4 *)((int)&DAT_0096bdd0 + (int)(lVar6 << 2)) =
           *(undefined4 *)((int)&g_CurrentWeapon + iVar9);
    }
    if (((g_heroStateType == 0xf) && (UnlockableItems.grindboots != '\0')) &&
       ((DAT_00969c80 != 0x1d ||
        (*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) == 0)))) {
      iVar9 = (int)(lVar6 << 6) + (int)(lVar6 << 4);
      uVar7 = 0x26;
      DAT_0096bd9c = 0x1d;
      if (*(int *)((int)&g_CurrentWeapon + iVar9) != 0) {
        uVar7 = *(undefined4 *)((int)&g_CurrentWeapon + iVar9);
      }
      *(undefined4 *)((int)&DAT_0096bdd0 + (int)(lVar6 << 2)) = uVar7;
    }
    if (((DAT_0096afc7 != '\0') && (UnlockableItems.magneboots != '\0')) &&
       ((DAT_00969c80 != 0x1c ||
        (*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) == 0)))) {
      iVar9 = (int)(lVar6 << 6) + (int)(lVar6 << 4);
      uVar7 = 0x26;
      DAT_0096bd9c = 0x1c;
      if (*(int *)((int)&g_CurrentWeapon + iVar9) != 0) {
        uVar7 = *(undefined4 *)((int)&g_CurrentWeapon + iVar9);
      }
      *(undefined4 *)((int)&DAT_0096bdd0 + (int)(lVar6 << 2)) = uVar7;
    }
  }
  bVar1 = false;
  if (slot == 2) {
    if ((((g_heroStateType == 0x11) || (g_heroState == UNDERWATER_DAMAGE)) ||
        (g_heroState == DEATH_DROWNING)) ||
       ((g_heroState == DEATH_WATER_LASER || (DAT_0096bfab != '\0')))) {
      iVar9 = (int)(lVar6 << 2);
      if (((*(int *)((int)&g_equippedItem + iVar9) != 6) ||
          (*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) == 0)) &&
         ((iVar10 = (int)(lVar6 << 6) + (int)(lVar6 << 4),
          *(int *)((int)&g_CurrentWeapon + iVar10) != 6 &&
          ((*(int *)((int)&g_WeaponToSwapTo + iVar9) != 6 && (UnlockableItems.o2Mask != '\0')))))) {
        iVar8 = *(int *)((int)&g_CurrentWeapon + iVar10);
        bVar1 = true;
        uVar7 = 0x26;
        *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 6;
        if (iVar8 != 0) {
          uVar7 = *(undefined4 *)((int)&g_CurrentWeapon + iVar10);
        }
        *(undefined4 *)((int)&DAT_0096bdd0 + iVar9) = uVar7;
      }
    }
    else if ((*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) == 6) &&
            (iVar9 = (int)(lVar6 << 2), *(int *)((int)&DAT_0096bdd0 + iVar9) != 0)) {
      *(undefined4 *)((int)&DAT_0096bdec + iVar9) = 1;
    }
  }
  bVar4 = false;
  bVar3 = false;
  if (slot != 3) goto LAB_000861e8;
  bVar2 = false;
  if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_000860ec:
    bVar2 = true;
  }
  else if ((g_heroState == DEATH_DROWNING) ||
          (((g_heroState == DEATH_WATER_LASER || (g_heroState == UNDERWATER_DAMAGE)) ||
           (g_heroState == UNK_75)))) goto LAB_000860ec;
  bVar3 = bVar4;
  if ((bVar2) || (g_heroState == WATER_JUMP)) {
    iVar9 = (int)(lVar6 << 2);
    if ((*(int *)((int)&g_equippedItem + iVar9) != 4) &&
       ((iVar10 = (int)(lVar6 << 6) + (int)(lVar6 << 4),
        *(int *)((int)&g_CurrentWeapon + iVar10) != 4 && (UnlockableItems.hydroPack != '\0')))) {
      *(undefined4 *)((int)&DAT_0096bdd0 + iVar9) = *(undefined4 *)((int)&g_CurrentWeapon + iVar10);
      *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 4;
      bVar3 = true;
    }
  }
  else if ((*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) == 4) &&
          (iVar9 = (int)(lVar6 << 2), *(int *)((int)&DAT_0096bdd0 + iVar9) != 0)) {
    *(undefined4 *)((int)&DAT_0096bdec + iVar9) = 1;
  }
  if ((g_heroState == FALLING) &&
     (iVar9 = (int)(lVar6 << 2), *(int *)((int)&g_equippedItem + iVar9) == 4)) {
    *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 2;
  }
LAB_000861e8:
  iVar9 = (int)(lVar6 << 2);
  if (*(int *)((int)&DAT_0096bdec + iVar9) != 0) {
    iVar10 = *(int *)((int)&DAT_0096bdd0 + iVar9);
    *(undefined4 *)((int)&DAT_0096bdec + iVar9) = 0;
    if ((iVar10 != 0) &&
       (*(int *)((int)&DAT_0096bdd0 + iVar9) !=
        *(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)))) {
      if (iVar10 == 0x26) {
        iVar10 = 0;
      }
      *(undefined4 *)((int)&DAT_0096bdd0 + iVar9) = 0;
      *(int *)((int)&g_WeaponToSwapTo + iVar9) = iVar10;
      *(undefined4 *)((int)&g_equippedItem + iVar9) =
           *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9);
      if (slot == 0) {
        (&DAT_00721020)[*(int *)((int)&g_WeaponToSwapTo + iVar9) * 0x13] = 0x20;
      }
      bVar5 = true;
    }
  }
  if (DAT_0096bcd5 != '\0') {
    mobyupdate_helpers::M479_0039ac10();
    *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 0;
  }
  if (*(int *)((int)&DAT_0096bd98 + iVar9) == 0x1f) {
    iVar10 = Hero_CanSwitchGadget();
    pMoby = g_ratchetMoby;
    if (iVar10 != 0) {
      if (DAT_0096bfbe == 0) {
        if (g_heroType == '\x03') {
          if (g_ratchetMoby != (MobyInstance *)0x0) {
            (g_ratchetMoby->pos).x = g_heroPosition.x;
            (pMoby->pos).y = g_heroPosition.y;
            (pMoby->pos).z = g_heroPosition.z;
            (pMoby->pos).w = g_heroPosition.w;
            sound::PlayMobySound(0x18,0,pMoby);
          }
        }
        else {
          sound::PlayMobySound(0x18,0,g_heroMobyPtr);
        }
        DAT_0096bfbe = 0x12;
        DAT_0096bfbc = 1;
      }
      *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9) = *(undefined4 *)((int)&DAT_0096bd98 + iVar9);
      bVar5 = true;
      DAT_00969c98 = *(undefined4 *)((int)&g_equippedItem + iVar9);
      *(undefined4 *)((int)&g_equippedItem + iVar9) = *(undefined4 *)((int)&DAT_0096bd98 + iVar9);
    }
    *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 0;
  }
  iVar10 = *(int *)((int)&DAT_0096bd98 + iVar9);
  if (iVar10 != 0) {
    if (iVar10 == *(int *)((int)&g_WeaponToSwapTo + iVar9)) {
      *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 0;
    }
    else {
      if (iVar10 == 0x26) {
        *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9) = 0;
        *(undefined4 *)((int)&g_equippedItem + iVar9) = 0;
      }
      else {
        if (((slot == 0) && (iVar10 != 0x24)) &&
           (*(int *)((int)&g_CurrentWeapon + (int)(lVar6 << 6) + (int)(lVar6 << 4)) != 8)) {
          DAT_00969c98 = *(undefined4 *)((int)&g_equippedItem + iVar9);
        }
        *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9) =
             *(undefined4 *)((int)&DAT_0096bd98 + iVar9);
        if (((*(int *)((int)&g_WeaponToSwapTo + iVar9) != 0x24) &&
            ((!bVar1 || (*(int *)((int)&g_WeaponToSwapTo + iVar9) != 6)))) &&
           ((!bVar3 || (*(int *)((int)&g_WeaponToSwapTo + iVar9) != 4)))) {
          *(undefined4 *)((int)&g_equippedItem + iVar9) =
               *(undefined4 *)((int)&g_WeaponToSwapTo + iVar9);
        }
        if (slot == 0) {
          (&DAT_00721020)[*(int *)((int)&g_WeaponToSwapTo + iVar9) * 0x13] = 0x20;
        }
      }
      bVar5 = true;
    }
  }
  iVar10 = (int)(lVar6 * 0x50);
  if ((&DAT_0096ad8c)[iVar10] == '\x02') {
    bVar5 = false;
  }
  if (((&DAT_0096ad8c)[iVar10] == '\x01') && (*(short *)((int)&DAT_0096ad88 + iVar10) == 0)) {
    *(ushort *)((int)&DAT_0096ad88 + iVar10) = (ushort)(byte)(&DAT_0096ad8d)[iVar10];
  }
  iVar8 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_0096ad88) + lVar6 * 0x50 & 0xffffffff);
  if (iVar8 == 0) {
    bVar5 = false;
  }
  if (bVar5) {
    *(undefined4 *)((int)&DAT_0096ad90 + iVar10) = 3;
    DAT_0096ace4 = 0;
    iVar8 = 4;
    DAT_0096ace8 = 0;
    do {
      iVar8 = iVar8 + -1;
      puVar11[0x409] = 0;
      puVar11[0x40a] = 0;
      puVar11 = puVar11 + 4;
    } while (iVar8 != 0);
    DAT_0096acf0 = mobyutil::MB_randRange((int)(animationSpeed * 50.5),(int)(animationSpeed * 90.5))
    ;
    ____Hero_GadgetSwitchSetup(*(undefined4 *)((int)&g_WeaponToSwapTo + iVar9));
    iVar8 = *(int *)((int)&g_WeaponToSwapTo + iVar9);
    if (((iVar8 == 0x17) || (iVar8 == 0xd || iVar8 == 0x10)) || (iVar8 == 9 || iVar8 == 0xb)) {
      DAT_0096bfae = 3;
      auVar12 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar12 = vectorSplatHalfWord(auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,1)
      ;
      DAT_00969ebc = storeVectorElementHalfWordIndexed(auVar12,0x1dc,0x969ce0);
    }
    if ((DAT_0096bd88 != '\0') && (DAT_0096bd88 != '\0')) {
      if (DAT_0096a9e8 == 0) {
        if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
          iVar8 = Hero_GetIdleAnim(0);
          Hero_TransAnim(-2.0,iVar8,0);
        }
      }
      else {
        DAT_0096a9f4 = 1;
      }
      DAT_0096bd88 = '\0';
      DAT_0096bd8a = 0;
    }
    if (slot == 0) {
      DAT_0071fb24 = (uint)LZCOUNT(*(int *)((int)&g_WeaponToSwapTo + iVar9) + -8) >> 5;
    }
    if (slot == 3) {
      DAT_00969c9c = (uint)LZCOUNT(*(int *)((int)&g_CurrentWeapon + iVar10) + -3) >> 5;
    }
    *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = 0;
    iVar9 = DAT_0096a9e0;
    (&DAT_0096ad8a)[iVar10] = 0;
    DAT_0096bd86 = '\0';
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 0x34) = 1;
    }
    if (DAT_0096a9e4 != 0) {
      *(undefined4 *)(DAT_0096a9e4 + 0x34) = 1;
    }
    if (*(int *)((int)&g_currentWeaponMoby + iVar10) != 0) {
      mobyutil::MB_SetAnimation(*(undefined4 *)((int)&g_currentWeaponMoby + iVar10),2,0,2);
    }
    if ((*(int *)((int)&DAT_0096ad74 + iVar10) != 0) && (slot != 3)) {
      mobyutil::MB_SetAnimation(*(undefined4 *)((int)&DAT_0096ad74 + iVar10),2,0,2);
    }
    *(undefined4 *)((int)&DAT_0096ad94 + iVar10) = 3;
  }
  return;
}



//==== 00086814  ns=hero  size=0x134
// sig: void Hero_KillGadget(int slot, int nextLevel)
// callers(5): 00086948 hero::Hero_UpdateGadgetSlots; 00145d28 pause::WeaponView_Update; 0014f828 pause::MenuHero_Update; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_KillGadget(int slot,int nextLevel)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((longlong)slot << 6) + (int)((longlong)slot << 4);
  *(int *)((int)&DAT_0096ad84 + iVar2) = nextLevel;
  if (*(int *)((int)&DAT_0096ad94 + iVar2) != 3) {
    *(undefined4 *)((int)&DAT_0096ad94 + iVar2) = 3;
    iVar1 = *(int *)((int)&g_currentWeaponMoby + iVar2);
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x20) != -2)) && (*(char *)(iVar1 + 0x20) != -3)) {
      if (*(undefined4 **)(iVar1 + 0x74) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(iVar1 + 0x74))();
      }
    }
  }
  *(undefined4 *)((int)&DAT_0096ad94 + iVar2) = 0;
  *(undefined4 *)((int)&g_CurrentWeapon + iVar2) = 0;
  if (*(int *)((int)&g_currentWeaponMoby + iVar2) != 0) {
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)&g_currentWeaponMoby + iVar2));
    *(undefined4 *)((int)&g_currentWeaponMoby + iVar2) = 0;
  }
  if ((*(int *)((int)&DAT_0096ad74 + iVar2) != 0) && (slot != 3)) {
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)&DAT_0096ad74 + iVar2));
    *(undefined4 *)((int)&DAT_0096ad74 + iVar2) = 0;
  }
  return;
}



//==== 00086948  ns=hero  size=0x210
// sig: undefined Hero_UpdateGadgetSlots(void)
// callers(2): 00086b60 hero::SetHeroType; 00092834 hero::Hero_UpdateGadgets
// callees(4): 0007f608 hero::hero_SetManipulator; 00085b30 hero::Hero_HandleGadgetSwitching; 00086814 hero::Hero_KillGadget; 000fddc0 mobyutil::MB_SetAnimation

void hero::Hero_UpdateGadgetSlots(void)

{
  int iVar1;
  uint slot;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0;
  do {
    iVar5 = (int)(lVar4 << 6) + (int)(lVar4 << 4);
    puVar3 = &g_heroMtx;
    slot = (uint)lVar4;
    if (*(int *)((int)&g_currentWeaponMoby + iVar5) == 0) {
      Hero_HandleGadgetSwitching(slot);
    }
    else {
      iVar2 = *(int *)((int)&DAT_0096ad94 + iVar5);
      iVar1 = *(int *)((int)&g_currentWeaponMoby + iVar5);
      if (iVar2 < 3) {
        if (1 < iVar2) {
          *(int *)((int)&DAT_0096ad90 + iVar5) = *(int *)((int)&DAT_0096ad90 + iVar5) + 1;
          Hero_HandleGadgetSwitching(slot);
          if (slot == 0) {
            iVar5 = 0;
            iVar2 = 0;
            do {
              if (*(short *)(puVar3 + 0x664) != -1) {
                *(undefined2 *)((int)puVar3 + 0x1992) = 5;
                hero_SetManipulator(&DAT_0096b5d0 + iVar2);
              }
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 0xb0;
              puVar3 = puVar3 + 0x2c;
            } while (iVar5 < 3);
          }
          if (((*(byte *)(iVar1 + 0x70) & 2) != 0) && (*(char *)(iVar1 + 0x53) == '\0')) {
            mobyutil::MB_SetAnimation(iVar1,1,0,2);
          }
        }
      }
      else if ((iVar2 < 4) &&
              ((((&DAT_0096ad8b)[iVar5] = (&DAT_0096ad8b)[iVar5] + '\x01',
                *(int *)((int)&g_currentWeaponMoby + iVar5) == 0 ||
                ((*(byte *)(iVar1 + 0x70) & 2) != 0)) || (slot < 2)))) {
        Hero_KillGadget(slot,DAT_0159c330 + 2);
      }
      if (((iVar1 != 0) && (*(char *)(iVar1 + 0x20) != -2)) &&
         ((slot != 6 && *(char *)(iVar1 + 0x20) != -3 &&
          (*(undefined4 **)(iVar1 + 0x74) != (undefined4 *)0x0)))) {
        (*(code *)**(undefined4 **)(iVar1 + 0x74))(iVar1);
      }
    }
    lVar4 = (longlong)(int)(slot + 1);
  } while ((int)(slot + 1) < 7);
  return;
}



//==== 00086b60  ns=hero  size=0x288
// sig: void SetHeroType(int heroType, int state, MobyInstance * moby)
// callers(6): 00087a88 hero::Hero_UpdateTimers; 001521d0 respawn::RestoreCheckpoint; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 002f7690 mobyupdate_unsorted::UpdateMoby_22; 003f9ce0 mobyupdate_unsorted::UpdateMoby_637
// callees(11): 0007d5c0 hero::Hero_MakeInvisible; 0007f45c hero::Hero_GetIdleAnim; 0007fa30 hero::Hero_ResetTweakers; 00081a10 hero::Hero_UpdateScaleEffect; 00084978 hero::Hero_UpdateCollisionSize; 00085300 hero::Hero_TransAnim; 00086948 hero::Hero_UpdateGadgetSlots; 000b72b0 hero::TransitionMovement; 000fa3a8 mobyfunc::SetMobyLightFromBlender; 001154c8 mobyutil::DeleteMotionBlur; 0015cdb0 sound::sound_Kill

void hero::SetHeroType(int heroType,int state,MobyInstance *moby)

{
  int iVar1;
  MobyInstance *moby_00;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &g_heroMtx;
  if (DAT_0096bd88 != '\0') {
    if (DAT_0096a9e8 == 0) {
      if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
        iVar2 = Hero_GetIdleAnim(0);
        Hero_TransAnim(-2.0,iVar2,0);
      }
    }
    else {
      DAT_0096a9f4 = 1;
    }
    DAT_0096bd88 = '\0';
    DAT_0096bd8a = 0;
  }
  DAT_0096bd86 = 1;
  Hero_UpdateGadgetSlots();
  g_heroMobyPtr = g_ratchetMoby;
  mobyutil::DeleteMotionBlur(&DAT_0096b350);
  g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
  Hero_MakeInvisible();
  iVar2 = 0;
  do {
    if ((MobyInstance *)puVar3[0x88e] == (MobyInstance *)0x0) {
      iVar1 = puVar3[0x886];
      if (((iVar1 != -1) && (sound::g_SoundChannels[iVar1].pMoby == g_heroMobyPtr)) &&
         (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      puVar3[0x886] = 0xffffffff;
    }
    else {
      iVar1 = puVar3[0x886];
      if (((iVar1 != -1) && (sound::g_SoundChannels[iVar1].pMoby == (MobyInstance *)puVar3[0x88e]))
         && (sound::g_SoundChannels[iVar1].state != '\0')) {
        sound::sound_Kill(iVar1);
      }
      puVar3[0x886] = 0xffffffff;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 8);
  Hero_ResetTweakers();
  g_heroType = (undefined1)heroType;
  DAT_0096a764 = moby;
  g_heroMobyPtr = moby;
  Hero_UpdateCollisionSize();
  moby_00 = g_heroMobyPtr;
  g_heroCollTop = DAT_00969f08;
  g_heroCollBottom = DAT_00969f0c;
  g_heroAnimSpeed = 0x3f800000;
  DAT_0096a774 = 0x3f800000;
  DAT_0096a790 = 0xffffffff;
  DAT_0096a798 = 0;
  g_heroMobyPtr->modeBits = g_heroMobyPtr->modeBits | (NO_POST_UPDATE|NO_UPDATE);
  mobyfunc::SetMobyLightFromBlender(moby_00);
  Hero_UpdateScaleEffect();
  DAT_0096bfac = (undefined2)state;
  if (heroType < 2) {
    if (0 < heroType) {
      DAT_0096bf90 = (undefined2)g_heroHealth;
      g_heroHealth = g_clankMaxNanotech;
    }
  }
  else if (heroType < 3) {
    g_GiantClankHealth = 200;
  }
  TransitionMovement(state,1);
  return;
}



//==== 00086df8  ns=hero  size=0x7a4
// sig: undefined Hero_Turn3D_XYZ(void)
// callers(2): 000875c0 hero::Hero_AlignToGravityInAir; 000aaec0 hero::HandleHeroMovement
// callees(4): 0010a050 mobyutil::AccelDeltAng; 0010c1e8 mobyutil::MB_MtxToEuler; 00500e08 fastfunc::FastEulerToMtx2; 0050162c fastfunc::FastVecMtx4Mul

void hero::Hero_Turn3D_XYZ
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,uint param_5
               )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
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
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  MobyInstance *in_r8;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar30;
  ulonglong unaff_r28;
  longlong lVar31;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x200;
  puVar7 = (ulonglong *)lVar30;
  *puVar7 = uVar27;
  puVar7[0x42] = in_LR;
  puVar7[0x39] = in_f25;
  puVar7[0x3a] = in_f26;
  puVar7[0x3b] = in_f27;
  puVar7[0x3c] = in_f28;
  puVar7[0x3d] = in_f29;
  puVar7[0x3e] = in_f30;
  puVar7[0x3f] = in_f31;
  puVar7[0x36] = unaff_r29;
  uVar14 = DAT_00969cec;
  uVar13 = DAT_00969ce8;
  uVar12 = DAT_00969ce4;
  uVar11 = g_heroMtx;
  dVar36 = 0.0;
  *(undefined4 *)(puVar7 + 0x22) = 0;
  uVar26 = DAT_00969d1c;
  uVar25 = DAT_00969d18;
  uVar24 = DAT_00969d14;
  uVar23 = DAT_00969d10;
  uVar22 = DAT_00969d0c;
  uVar21 = DAT_00969d08;
  uVar20 = DAT_00969d04;
  uVar19 = DAT_00969d00;
  uVar18 = DAT_00969cfc;
  uVar17 = DAT_00969cf8;
  uVar16 = DAT_00969cf4;
  uVar15 = DAT_00969cf0;
  puVar8 = (undefined4 *)(param_5 & 0xfffffff0);
  puVar8[3] = uVar14;
  puVar8[2] = uVar13;
  puVar8[1] = uVar12;
  *puVar8 = uVar11;
  puVar8 = (undefined4 *)(param_5 + 0x10 & 0xfffffff0);
  puVar8[3] = uVar18;
  puVar8[2] = uVar17;
  puVar8[1] = uVar16;
  *puVar8 = uVar15;
  puVar8 = (undefined4 *)(param_5 + 0x20 & 0xfffffff0);
  puVar8[3] = uVar22;
  puVar8[2] = uVar21;
  puVar8[1] = uVar20;
  *puVar8 = uVar19;
  puVar8 = (undefined4 *)(param_5 + 0x30 & 0xfffffff0);
  puVar8[3] = uVar26;
  puVar8[2] = uVar25;
  puVar8[1] = uVar24;
  *puVar8 = uVar23;
  fVar1 = *param_4;
  fVar2 = *(float *)(param_5 + 0x20);
  fVar3 = param_4[1];
  fVar4 = *(float *)(param_5 + 0x24);
  fVar5 = param_4[2];
  fVar6 = *(float *)(param_5 + 0x28);
  puVar7[0x38] = unaff_r31;
  puVar7[0x37] = unaff_r30;
  dVar32 = (double)(fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6);
  puVar7[0x35] = unaff_r28;
  puVar7[0x34] = unaff_r27;
  puVar7[0x33] = unaff_r26;
  if (1.0 < dVar32) {
    dVar32 = 1.0;
  }
  *(float *)((int)puVar7 + 300) = (float)dVar32;
  dVar35 = ABS(dVar32);
  fVar1 = SQRT(1.0 - (float)(dVar32 * dVar32));
  dVar32 = ABS((double)fVar1);
  *(float *)(puVar7 + 0x26) = fVar1;
  *(float *)((int)puVar7 + 0x134) = (float)(dVar35 - dVar32);
  iVar28 = (int)(((ulonglong)(*(uint *)((int)puVar7 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x26) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar28);
  fVar1 = *(float *)(&DAT_00735904 + iVar28);
  if (0.0 <= *(float *)((int)puVar7 + 0x134)) {
    dVar35 = ABS((double)*(float *)(puVar7 + 0x26));
    dVar32 = ABS((double)*(float *)((int)puVar7 + 300));
  }
  dVar37 = 0.7853981852531433;
  dVar38 = dVar36;
  if (0.0 < dVar32) {
    iVar28 = 4;
    fVar3 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
    lVar31 = lVar30;
    do {
      iVar28 = iVar28 + -1;
      *(float *)((int)lVar31 + 0x178) = fVar3;
      lVar31 = lVar31 + 4;
    } while (iVar28 != 0);
    fVar3 = fVar3 * fVar3;
    lVar31 = uVar27 - 0x1f0;
    iVar28 = 4;
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x17c) = *(float *)((int)puVar7 + 0x17c) * fVar3;
    *(float *)(puVar7 + 0x30) = *(float *)(puVar7 + 0x30) * fVar4;
    *(float *)((int)puVar7 + 0x184) = *(float *)((int)puVar7 + 0x184) * fVar4 * fVar3;
    do {
      iVar28 = iVar28 + -1;
      *(float *)((int)lVar31 + 0x178) = *(float *)((int)lVar31 + 0x168) * fVar4 * fVar4;
      lVar31 = lVar31 + 4;
    } while (iVar28 != 0);
    iVar28 = 0;
    iVar29 = 8;
    lVar31 = lVar30;
    do {
      pfVar9 = (float *)((int)&DAT_007358e0 + iVar28);
      iVar29 = iVar29 + -1;
      iVar28 = iVar28 + 4;
      *(float *)((int)lVar31 + 0x178) = *(float *)((int)lVar31 + 0x178) * *pfVar9;
      lVar31 = lVar31 + 4;
    } while (iVar29 != 0);
    iVar28 = 8;
    lVar31 = lVar30;
    dVar32 = dVar36;
    do {
      iVar28 = iVar28 + -1;
      iVar29 = (int)lVar31;
      lVar31 = lVar31 + 4;
      dVar32 = (double)(float)(dVar32 + (double)*(float *)(iVar29 + 0x178));
    } while (iVar28 != 0);
    dVar38 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = *(float *)(param_5 + 0x24);
  fVar2 = param_4[2];
  fVar3 = *(float *)(param_5 + 0x28);
  fVar4 = param_4[1];
  fVar5 = *param_4;
  fVar6 = *(float *)(param_5 + 0x20);
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  fVar10 = fVar1 * fVar2 - fVar3 * fVar4;
  fVar2 = fVar3 * fVar5 - fVar6 * fVar2;
  fVar1 = fVar6 * fVar4 - fVar1 * fVar5;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  *(float *)(puVar7 + 0x11) = fVar1;
  dVar32 = dVar36;
  dVar35 = dVar36;
  if (fVar1 < 0.99) {
    *(float *)(puVar7 + 0x24) = fVar10;
    *(float *)((int)puVar7 + 0x124) = fVar2;
    fVar10 = ABS(fVar10);
    fVar2 = ABS(fVar2);
    *(float *)(puVar7 + 0x25) = fVar10 - fVar2;
    iVar28 = (int)(((ulonglong)(*(uint *)(puVar7 + 0x24) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x25) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x124) >> 0x1d) & 4) << 2);
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar28);
    fVar1 = *(float *)(&DAT_00735904 + iVar28);
    if (0.0 <= *(float *)(puVar7 + 0x25)) {
      fVar10 = ABS(*(float *)((int)puVar7 + 0x124));
      fVar2 = ABS(*(float *)(puVar7 + 0x24));
    }
    if (0.0 < fVar2) {
      iVar28 = 4;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      lVar31 = lVar30;
      do {
        iVar28 = iVar28 + -1;
        *(float *)((int)lVar31 + 0x158) = fVar2;
        lVar31 = lVar31 + 4;
      } while (iVar28 != 0);
      fVar2 = fVar2 * fVar2;
      lVar31 = uVar27 - 0x1f0;
      iVar28 = 4;
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 0x15c) = *(float *)((int)puVar7 + 0x15c) * fVar2;
      *(float *)(puVar7 + 0x2c) = *(float *)(puVar7 + 0x2c) * fVar4;
      *(float *)((int)puVar7 + 0x164) = *(float *)((int)puVar7 + 0x164) * fVar4 * fVar2;
      do {
        iVar28 = iVar28 + -1;
        *(float *)((int)lVar31 + 0x158) = *(float *)((int)lVar31 + 0x148) * fVar4 * fVar4;
        lVar31 = lVar31 + 4;
      } while (iVar28 != 0);
      iVar28 = 0;
      iVar29 = 8;
      lVar31 = lVar30;
      do {
        pfVar9 = (float *)((int)&DAT_007358e0 + iVar28);
        iVar29 = iVar29 + -1;
        iVar28 = iVar28 + 4;
        *(float *)((int)lVar31 + 0x158) = *(float *)((int)lVar31 + 0x158) * *pfVar9;
        lVar31 = lVar31 + 4;
      } while (iVar29 != 0);
      iVar28 = 8;
      lVar31 = lVar30;
      do {
        iVar28 = iVar28 + -1;
        iVar29 = (int)lVar31;
        lVar31 = lVar31 + 4;
        dVar32 = (double)(float)(dVar32 + (double)*(float *)(iVar29 + 0x158));
      } while (iVar28 != 0);
      dVar35 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar1);
    }
    *(undefined4 *)(puVar7 + 0xe) = 0;
    *(undefined4 *)((int)puVar7 + 0x74) = 0;
    *(float *)(puVar7 + 0xf) = (float)-dVar35;
    fastfunc::FastEulerToMtx2(uVar27 - 0x130,uVar27 - 400);
    fastfunc::FastVecMtx4Mul(param_5,uVar27 - 0x130,param_5);
    fVar2 = *(float *)(puVar7 + 0x1a) * *(float *)(puVar7 + 0x10) +
            *(float *)(puVar7 + 0x1c) * *(float *)((int)puVar7 + 0x84) +
            *(float *)(puVar7 + 0x1e) * *(float *)(puVar7 + 0x11) +
            *(float *)(puVar7 + 0x20) * *(float *)((int)puVar7 + 0x8c);
    fVar1 = *(float *)(puVar7 + 0x1b) * *(float *)(puVar7 + 0x10) +
            *(float *)(puVar7 + 0x1d) * *(float *)((int)puVar7 + 0x84) +
            *(float *)(puVar7 + 0x1f) * *(float *)(puVar7 + 0x11) +
            *(float *)(puVar7 + 0x21) * *(float *)((int)puVar7 + 0x8c);
    dVar34 = ABS((double)fVar2);
    dVar33 = ABS((double)fVar1);
    *(float *)(puVar7 + 0x23) = fVar2;
    *(float *)((int)puVar7 + 0x114) = fVar1;
    *(float *)((int)puVar7 + 0x11c) = (float)(dVar33 - dVar34);
    iVar28 = (int)(((ulonglong)(*(uint *)((int)puVar7 + 0x114) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x11c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar7 + 0x23) >> 0x1d) & 4) << 2);
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar28);
    fVar1 = *(float *)(&DAT_00735904 + iVar28);
    if (dVar36 <= (double)*(float *)((int)puVar7 + 0x11c)) {
      dVar33 = ABS((double)*(float *)(puVar7 + 0x23));
      dVar34 = ABS((double)*(float *)((int)puVar7 + 0x114));
    }
    dVar32 = dVar36;
    if (dVar36 < dVar34) {
      iVar28 = 4;
      fVar3 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
      lVar31 = lVar30;
      do {
        iVar28 = iVar28 + -1;
        *(float *)((int)lVar31 + 0x138) = fVar3;
        lVar31 = lVar31 + 4;
      } while (iVar28 != 0);
      fVar3 = fVar3 * fVar3;
      lVar31 = uVar27 - 0x1f0;
      iVar28 = 4;
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x13c) = *(float *)((int)puVar7 + 0x13c) * fVar3;
      *(float *)(puVar7 + 0x28) = *(float *)(puVar7 + 0x28) * fVar4;
      *(float *)((int)puVar7 + 0x144) = *(float *)((int)puVar7 + 0x144) * fVar4 * fVar3;
      do {
        iVar28 = iVar28 + -1;
        *(float *)((int)lVar31 + 0x138) = *(float *)((int)lVar31 + 0x128) * fVar4 * fVar4;
        lVar31 = lVar31 + 4;
      } while (iVar28 != 0);
      iVar28 = 0;
      iVar29 = 8;
      lVar31 = lVar30;
      do {
        pfVar9 = (float *)((int)&DAT_007358e0 + iVar28);
        iVar29 = iVar29 + -1;
        iVar28 = iVar28 + 4;
        *(float *)((int)lVar31 + 0x138) = *(float *)((int)lVar31 + 0x138) * *pfVar9;
        lVar31 = lVar31 + 4;
      } while (iVar29 != 0);
      iVar28 = 8;
      do {
        iVar28 = iVar28 + -1;
        iVar29 = (int)lVar30;
        lVar30 = lVar30 + 4;
        dVar32 = (double)(float)(dVar32 + (double)*(float *)(iVar29 + 0x138));
      } while (iVar28 != 0);
      dVar32 = (double)((float)(dVar32 + dVar37) * fVar2 + fVar1);
    }
    *(float *)(puVar7 + 0xe) = (float)dVar36;
    *(float *)(puVar7 + 0xf) = (float)dVar36;
    *(float *)((int)puVar7 + 0x74) = (float)-dVar32;
    fastfunc::FastEulerToMtx2(uVar27 - 0x170,uVar27 - 400);
    fastfunc::FastVecMtx4Mul(param_5,uVar27 - 0x170,param_5);
  }
  if (in_r8 == (MobyInstance *)0x0) {
    mobyutil::AccelDeltAng(dVar38,param_1,param_2,param_3,uVar27 - 0xf0);
    *(float *)(puVar7 + 0xe) = (float)dVar36;
    *(float *)((int)puVar7 + 0x74) = (float)dVar36;
    *(undefined4 *)(puVar7 + 0xf) = *(undefined4 *)(puVar7 + 0x22);
  }
  else {
    *(float *)(puVar7 + 0xe) = (float)dVar36;
    *(float *)((int)puVar7 + 0x74) = (float)dVar36;
    *(float *)(puVar7 + 0xf) = (float)dVar38;
  }
  lVar31 = uVar27 - 0x130;
  lVar30 = uVar27 - 400;
  fastfunc::FastEulerToMtx2(lVar31,lVar30);
  fastfunc::FastVecMtx4Mul(param_5,lVar31,param_5);
  *(float *)((int)puVar7 + 0x74) = (float)dVar32;
  *(float *)(puVar7 + 0xf) = (float)dVar36;
  fastfunc::FastEulerToMtx2(uVar27 - 0x170,lVar30);
  fastfunc::FastVecMtx4Mul(param_5,uVar27 - 0x170,param_5);
  *(float *)((int)puVar7 + 0x74) = (float)dVar36;
  *(float *)(puVar7 + 0xf) = (float)dVar35;
  fastfunc::FastEulerToMtx2(lVar31,lVar30);
  fastfunc::FastVecMtx4Mul(param_5,lVar31,param_5);
  if (in_r8 == (MobyInstance *)0x0) {
    mobyutil::MB_MtxToEuler(param_5,(MobyInstance *)&g_heroRotation);
  }
  else {
    mobyutil::MB_MtxToEuler(param_5,in_r8);
  }
  return;
}



//==== 000875c0  ns=hero  size=0x320
// sig: undefined Hero_AlignToGravityInAir(void)
// callers(1): 000878f0 hero::Hero_AlignToGravity
// callees(1): 00086df8 hero::Hero_Turn3D_XYZ

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void hero::Hero_AlignToGravityInAir(void)

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
  double dVar14;
  undefined1 local_90 [48];
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  fVar1 = g_heroMtx * 0.0;
  fVar2 = DAT_00969cf0 * 0.0;
  fVar3 = DAT_00969ce4 * 0.0;
  fVar4 = DAT_00969cf4 * 0.0;
  fVar10 = DAT_00969d00 * 0.8;
  fVar5 = DAT_00969ce8 * 0.0;
  fVar6 = DAT_00969cf8 * 0.0;
  fVar11 = DAT_00969d04 * 0.8;
  fVar7 = DAT_00969d10 * 0.0;
  fVar12 = DAT_00969d08 * 0.8;
  fVar8 = DAT_00969d14 * 0.0;
  dVar13 = (double)(DAT_0071f40c * 0.3);
  fVar9 = DAT_00969d18 * 0.0;
  dVar14 = (double)(DAT_0071f40c * 0.05);
  if ((g_framesNotGrounded != 0) && (DAT_00969ed8 != 0)) {
    dVar13 = (double)(DAT_0071f40c * 0.001);
    dVar14 = dVar13;
  }
  Hero_Turn3D_XYZ(dVar14,dVar13,(double)(mobyutil::g_FrameTime * 9.599311),local_90,&local_60);
  if ((g_heroGravityMode == '\x01') && (g_framesNotGrounded != 0)) {
    g_heroPosition.x =
         (g_heroPosition.x - (local_60 * 0.0 + local_50 * 0.0 + local_40 * 0.8 + local_30 * 0.0)) +
         fVar1 + fVar2 + fVar10 + fVar7;
    g_heroPosition.y =
         (g_heroPosition.y - (local_5c * 0.0 + local_4c * 0.0 + local_3c * 0.8 + local_2c * 0.0)) +
         fVar3 + fVar4 + fVar11 + fVar8;
    g_heroPosition.z =
         (g_heroPosition.z - (local_58 * 0.0 + local_48 * 0.0 + local_38 * 0.8 + local_28 * 0.0)) +
         fVar5 + fVar6 + fVar12 + fVar9;
  }
  return;
}



//==== 000878f0  ns=hero  size=0x170
// sig: undefined Hero_AlignToGravity(void)
// callers(1): 00087a88 hero::Hero_UpdateTimers
// callees(2): 000875c0 hero::Hero_AlignToGravityInAir; 0010a050 mobyutil::AccelDeltAng

void hero::Hero_AlignToGravity(void)

{
  byte bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  bVar1 = g_heroGravityMode;
  if (DAT_00969ed8 != 0) {
    bVar1 = 1;
  }
  if (bVar1 == 0) {
    if ((((((g_heroState != PULLING_GREEN_SWINGSHOT) && (g_heroState != UNK_26)) &&
          (g_heroStateType != 0x11)) && ((g_heroStateType != 0x15 && (g_heroStateType != 0x16)))) &&
        ((g_heroState != DEATH_FALLING &&
         ((g_heroState != WATER_SLIDING && (g_heroState != DISENGAGE_YELLOW_SWINGSHOT)))))) &&
       (g_heroState != SWINGING_YELLOW_SWINGSHOT)) {
      dVar5 = 0.014999999664723873;
      dVar4 = 0.30000001192092896;
      dVar3 = 5.235987663269043;
      uVar2 = 0x8000000000000000;
      mobyutil::AccelDeltAng
                (0x8000000000000000,(double)(DAT_0071f40c * 0.015),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 5.2359877),&g_heroRotation,&DAT_000878e0,
                 &DAT_00969d80);
      mobyutil::AccelDeltAng
                (uVar2,(double)(float)((double)DAT_0071f40c * dVar5),
                 (double)(float)((double)DAT_0071f40c * dVar4),
                 (double)(float)((double)mobyutil::g_FrameTime * dVar3),0x969d74);
    }
  }
  else if (bVar1 < 3) {
    Hero_AlignToGravityInAir();
  }
  return;
}



//==== 00087a88  ns=hero  size=0x774
// sig: undefined Hero_UpdateTimers(void)
// callers(1): 0008b778 hero::Hero_UpdateMovement
// callees(13): 0006dad0 draw::FadeToBlack; 0007b6b0 help::Help_ClearUsedSinceDeath; 000836ac hero::Hero_RevertToRatchet; 00084180 hero::Hero_GetHeroRelativeVector; 000842e0 hero::???_Hero_UpdateIdleDetect; 00084830 hero::Hero_RelativeZComponent; 00086b60 hero::SetHeroType; 000878f0 hero::Hero_AlignToGravity; 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0011dfe0 pad::PadRingBitsOn; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16
// strings: 00087a74: '?333?' (raw)

void hero::Hero_UpdateTimers(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  short sVar7;
  int iVar8;
  MobyInstance *pMVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  if (DAT_0096bd8d == '\0') {
    Hero_AlignToGravity();
  }
  g_heroStateTimer = g_heroStateTimer + 1;
  DAT_00969e7c = DAT_00969e7c + 1;
  DAT_00969e80 = DAT_00969e80 + 1;
  DAT_00969e84 = DAT_00969e84 + 1;
  fastfunc::FastDecTimerS32(&DAT_00969ea4);
  fastfunc::FastDecTimerS32(&DAT_00969ea0);
  fastfunc::FastDecTimerS16(&DAT_00969e92);
  fastfunc::FastDecTimerS32(&DAT_00969e98);
  fastfunc::FastDecTimerS16(&DAT_00969eb8);
  fastfunc::FastDecTimerS16(&DAT_00969ebe);
  fastfunc::FastDecTimerS32(&DAT_00969e94);
  fastfunc::FastDecTimerS16(&DAT_00969ed0);
  fastfunc::FastDecTimerS16(&DAT_00969e90);
  fastfunc::FastDecTimerS16(&DAT_00969ea8);
  fastfunc::FastDecTimerS16(&DAT_00969eaa);
  fastfunc::FastDecTimerS16(&DAT_00969ec4);
  fastfunc::FastDecTimerS16(&g_SwingshotReleasedTimer);
  fastfunc::FastDecTimerS32(&g_heroGhostFrames);
  fastfunc::FastDecTimerS32(&DAT_00969eb0);
  fastfunc::FastDecTimerS32(&DAT_00969eb4);
  fastfunc::FastDecTimerS16(&DAT_00969ec8);
  fastfunc::FastDecTimerS16(&DAT_00969ec0);
  fastfunc::FastDecTimerS16(&DAT_00969ece);
  fastfunc::FastDecTimerS16(&DAT_00969eca);
  fastfunc::FastDecTimerS16(&DAT_00969ed4);
  fastfunc::FastDecTimerS16(&DAT_00969ed2);
  fastfunc::FastDecTimerS16(&DAT_00969ebc);
  fastfunc::FastDecTimerS16(&DAT_00969ed6);
  fastfunc::FastDecTimerS16(&DAT_00969eba);
  fastfunc::FastDecTimerS16(&DAT_00969ed8);
  if ((g_downButtons & (L1|L2)) == 0) {
    DAT_00969ecc = 0;
  }
  iVar8 = 0;
  if (DAT_0096bd88 != '\0') {
    iVar8 = DAT_00969e9c + 1;
  }
  DAT_00969e9c = iVar8;
  if (DAT_00964b14 == 0) {
    DAT_00969e8c = 0;
    DAT_00969e88 = DAT_00969e88 + 1;
  }
  else {
    DAT_00969e88 = 0;
    DAT_00969e8c = DAT_00969e8c + 1;
  }
  if ((((DAT_0096bfbe != 0) && (iVar8 = fastfunc::FastDecTimerS16(&DAT_0096bfbe), iVar8 != 0)) &&
      (g_heroHealth != 0)) && (g_gameMode == GAME_MODE_NORMAL)) {
    if (g_heroType == 3) {
      Hero_RevertToRatchet();
      iVar8 = pad::PadRingBitsOn(0x80,(int)(animationSpeed * 18.5),(int *)0x0);
      if (iVar8 != 0) {
        DAT_0096bd86 = 1;
      }
    }
    else {
      pMVar9 = mobyfunc::CreateMoby(HOLOGUISE_027A);
      DAT_0096a76c = pMVar9;
      if (pMVar9 != (MobyInstance *)0x0) {
        (pMVar9->pos).x = g_heroPosition.x;
        (pMVar9->pos).y = g_heroPosition.y;
        (pMVar9->pos).z = g_heroPosition.z;
        (pMVar9->pos).w = g_heroPosition.w;
        (pMVar9->rotation).x = g_heroRotation.x;
        (pMVar9->rotation).y = g_heroRotation.y;
        (pMVar9->rotation).z = g_heroRotation.z;
        (pMVar9->rotation).w = g_heroRotation.w;
        pMVar9->enabled = '\x01';
        pMVar6 = g_heroMobyPtr;
        pMVar9->drawDistance = 0x40;
        pMVar9->field60_0x90 = 0;
        uVar11 = pMVar6->light;
        pMVar9->color = pMVar6->color;
        pMVar9->light = uVar11;
        mobyfunc::UpdateMobyTransform(pMVar9);
        SetHeroType(3,0x53,DAT_0096a76c);
      }
    }
  }
  if (g_heroType == 2) {
    fastfunc::FastDecTimerS16(&DAT_0096b316);
  }
  iVar8 = 0;
  iVar10 = 0;
  do {
    fastfunc::FastDecTimerS32((int)&DAT_00720e30 + iVar10);
    iVar8 = iVar8 + 1;
    iVar10 = iVar10 + 0x70;
  } while (iVar8 < 5);
  DAT_0096bf98 = 0x461c3c00;
  if (g_framesNotGrounded == 0) {
LAB_00087f58:
    DAT_00969ec2 = 0;
    sVar7 = DAT_00969ec2;
  }
  else {
    fVar13 = Hero_RelativeZComponent((float *)&g_heroVelocity);
    fVar4 = 0.0;
    if (0.0 <= fVar13) goto LAB_00087f58;
    sVar7 = DAT_00969ec2;
    if (g_heroPosHistoryCount == 0x20) {
      iVar10 = 0;
      iVar8 = 8;
      fVar13 = fVar4;
      fVar5 = fVar4;
      do {
        uVar12 = (g_heroPosHistoryIdx - iVar10) + 0x1f;
        uVar11 = (g_heroPosHistoryIdx - iVar10) + 0x1e;
        iVar8 = iVar8 + -1;
        iVar2 = (uVar11 + (((int)uVar11 >> 5) + (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) *
                          -0x20) * 0x10;
        iVar3 = (uVar12 + (((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0)) *
                          -0x20) * 0x10;
        iVar10 = iVar10 + 1;
        fVar4 = (*(float *)(&g_heroPosHistory + iVar3) - *(float *)(&g_heroPosHistory + iVar2)) +
                fVar4;
        fVar13 = (*(float *)(iVar3 + 0x96b7e4) - *(float *)(iVar2 + 0x96b7e4)) + fVar13;
        fVar5 = (*(float *)(iVar3 + 0x96b7e8) - *(float *)(iVar2 + 0x96b7e8)) + fVar5;
      } while (iVar8 != 0);
      sVar7 = 0;
      if (SQRT(fVar4 * 0.125 * fVar4 * 0.125 + fVar13 * 0.125 * fVar13 * 0.125 +
               fVar5 * 0.125 * fVar5 * 0.125) < mobyutil::g_FrameTime) {
        sVar7 = DAT_00969ec2 + 1;
      }
    }
  }
  DAT_00969ec2 = sVar7;
  ____Hero_UpdateIdleDetect();
  if (g_heroType < 2) {
    if (g_heroType != 0) {
      Hero_GetHeroRelativeVector(0.0,0.0,0.4,&g_heroCGPos);
      DAT_0096bf68 = 0x40080000;
      DAT_0096bf6c = 0x3fa00000;
      goto LAB_00088030;
    }
  }
  else if (g_heroType < 3) {
    Hero_GetHeroRelativeVector(0.0,0.0,4.0,&g_heroCGPos);
    DAT_0096bf68 = 0x41700000;
    DAT_0096bf6c = 0x40400000;
    goto LAB_00088030;
  }
  Hero_GetHeroRelativeVector(0.0,0.0,0.7,&g_heroCGPos);
  if (UnlockableItems.boltGrabber == '\0') {
    DAT_0096bf68 = 0x40400000;
    DAT_0096bf6c = 0x3fe00000;
  }
  else {
    DAT_0096bf68 = 0x41400000;
    DAT_0096bf6c = 0x40900000;
  }
LAB_00088030:
  iVar8 = DAT_0096bf60;
  if (4.0 <= g_heroPosition.z - g_heroGroundZ) {
    DAT_00969da0 = g_heroCGPos;
    DAT_00969da4 = DAT_00969db4;
    DAT_00969da8 = DAT_00969db8;
    DAT_00969dac = DAT_00969dbc;
  }
  else {
    DAT_00969da0 = g_heroPosition.x;
    DAT_00969da4 = g_heroPosition.y;
    DAT_00969dac = g_heroPosition.w;
    DAT_00969da8 = g_heroGroundZ + 0.5;
  }
  if (g_heroPosition.z < 1.0) {
    g_deathCount = g_deathCount + 1;
    bVar1 = DAT_0096bf60 != 0;
    *(int *)(&DAT_00a0f784 + Level * 4) = *(int *)(&DAT_00a0f784 + Level * 4) + 1;
    if (((bVar1) && (*(short *)(iVar8 + 0xa6) == 0x4d)) && (Level == Quartu)) {
      DAT_00a15f34 = 1;
    }
    help::Help_ClearUsedSinceDeath();
    iVar8 = DAT_0096bf60;
    if ((DAT_0096bf60 != 0) && (*(char *)(DAT_0096bf60 + 0xb0) != -1)) {
      *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) =
           *(int *)((uint)*(byte *)(DAT_0096bf60 + 0xb0) * 4 + 0xa0f7d4 + Level * 0x40) + 1;
      (&DAT_00a0fcd4)[*(byte *)(iVar8 + 0xb0)] = (&DAT_00a0fcd4)[*(byte *)(iVar8 + 0xb0)] + 1;
    }
    draw::FadeToBlack((int)(animationSpeed * 16.5));
    g_HeroIsOutOfBounds = 1;
  }
  return;
}



//==== 00088208  ns=hero  size=0x144
// sig: int Hero_CheckWall(float height, float dist, longlong unused1, longlong unused2, float * outDist)
// callers(0): 
// callees(2): 00057820 collproc::CollLine; 0007dde0 hero::Hero_GetHeroRelativePolarVector

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_CheckWall(float height,float dist,longlong unused1,longlong unused2,float *outDist)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float local_60 [4];
  float local_50 [4];
  
  dVar3 = (double)dist;
  dVar2 = (double)height;
  dVar4 = 0.0;
  Hero_GetHeroRelativePolarVector(g_heroCollRadius - 0.02,0.0,height,local_60);
  Hero_GetHeroRelativePolarVector((float)dVar3,(float)dVar4,(float)dVar2,local_50);
  iVar1 = collproc::CollLine(local_60,local_50,2,0,0);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (outDist != (float *)0x0) {
      *outDist = SQRT((g_heroPosition.x - CollOutput.ip.x) * (g_heroPosition.x - CollOutput.ip.x) +
                      (g_heroPosition.y - CollOutput.ip.y) * (g_heroPosition.y - CollOutput.ip.y));
    }
    iVar1 = 1;
  }
  return iVar1;
}



//==== 00088370  ns=hero  size=0x35c
// sig: undefined Hero_SnapToGround(void)
// callers(1): 0008a2b8 hero::Hero_ApplyMotion
// callees(1): 00109b40 mobyutil::AccelDelt

double hero::Hero_SnapToGround(double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  if (g_heroGravityMode == '\0') {
    if (g_framesNotGrounded == 0) {
      param_1 = (double)g_heroPosition.z;
      dVar5 = (double)g_heroGroundZ;
      if (param_1 < dVar5) {
        if (ABS(DAT_00969dc8) + 0.01 <= ABS((float)(param_1 - dVar5))) {
          if (((double)DAT_00969de8 < 0.0) &&
             (g_heroPosition.z = (float)(param_1 - (double)DAT_00969de8),
             dVar5 < (double)g_heroPosition.z)) {
            g_heroPosition.z = g_heroGroundZ;
          }
          fVar7 = mobyutil::AccelDelt(g_heroGroundZ,DAT_0071f40c * 0.057,DAT_0071f40c * 0.3,
                                      mobyutil::g_FrameTime * 2.0,&g_heroPosition.z,0x720000,
                                      (float *)&DAT_00969fe4);
          return (double)fVar7;
        }
        if ((DAT_00969f37 != '\0') &&
           (SQRT((DAT_00969ef0 - g_heroPosition.x) * (DAT_00969ef0 - g_heroPosition.x) +
                 (DAT_00969ef4 - g_heroPosition.y) * (DAT_00969ef4 - g_heroPosition.y)) <=
            g_heroCollRadius * 0.5)) {
          fVar7 = mobyutil::AccelDelt(g_heroGroundZ,DAT_0071f40c * 0.057,DAT_0071f40c * 0.3,
                                      mobyutil::g_FrameTime * 2.0,&g_heroPosition.z,0x720000,
                                      (float *)&DAT_00969fe4);
          return (double)fVar7;
        }
        g_heroPosition.z = g_heroGroundZ;
        return (double)g_heroGroundZ;
      }
    }
    DAT_00969fe4 = 0;
  }
  else {
    param_1 = (double)(g_heroVelocity * g_heroGroundNormal + DAT_00969dc4 * DAT_00969f54);
    dVar5 = param_1 + (double)(DAT_00969dc8 * DAT_00969f58);
    if ((g_framesNotGrounded == 0) && (param_1 = 0.0, g_heroGroundDist < 0.0)) {
      if ((float)dVar5 + 0.0001 <= g_heroGroundDist) {
        if (g_heroState == UNK_3E) {
          g_heroPosition.x = g_heroGroundPoint;
          param_1 = (double)DAT_00969f88;
          g_heroPosition.y = DAT_00969f84;
          g_heroPosition.z = DAT_00969f88;
          g_heroPosition.w = DAT_00969f8c;
        }
        else {
          fVar7 = (float)((double)g_heroGroundPoint - (double)g_heroPosition.x);
          fVar1 = (float)((double)DAT_00969f84 - (double)g_heroPosition.y);
          fVar2 = (float)((double)DAT_00969f88 - (double)g_heroPosition.z);
          fVar3 = SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar2 * fVar2);
          if (DAT_0071f408 * 0.21 <= fVar3) {
            fVar4 = fVar3 * 0.5;
          }
          else {
            fVar4 = fVar3;
            if (DAT_0071f408 * 0.05 < fVar3) {
              fVar4 = DAT_0071f408 * 0.05;
            }
          }
          dVar5 = param_1;
          dVar6 = param_1;
          if (fVar3 != 0.0) {
            fVar4 = fVar4 / fVar3;
            param_1 = (double)(fVar7 * fVar4);
            dVar5 = (double)(fVar2 * fVar4);
            dVar6 = (double)(fVar1 * fVar4);
          }
          g_heroPosition.x = (float)((double)g_heroPosition.x + param_1);
          param_1 = (double)g_heroPosition.x;
          g_heroPosition.y = (float)((double)g_heroPosition.y + dVar6);
          g_heroPosition.z = (float)((double)g_heroPosition.z + dVar5);
        }
      }
      else {
        g_heroPosition.x = g_heroGroundPoint;
        param_1 = (double)DAT_00969f88;
        g_heroPosition.y = DAT_00969f84;
        g_heroPosition.z = DAT_00969f88;
        g_heroPosition.w = DAT_00969f8c;
      }
    }
  }
  return param_1;
}



//==== 000886d0  ns=hero  size=0x178
// sig: void Hero_AddRelativeZ(float z, float * out, float * in)
// callers(4): 000888c8 hero::Hero_ResolveCollision; 0009d6b0 hero::Hero_JumpThrustGrav; 000a0f40 hero::Hero_EdgeStop; 000aaec0 hero::HandleHeroMovement
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_AddRelativeZ(float z,float *out,float *in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  dVar4 = (double)z;
  if (g_heroGravityMode == 0) {
    *out = *in;
    out[1] = in[1];
    fVar1 = in[2];
    out[2] = fVar1;
    out[3] = in[3];
    out[2] = (float)((double)fVar1 + dVar4);
  }
  else if (g_heroGravityMode < 3) {
    dVar5 = 0.0;
    fastfunc::FastEulerToMtx1(&local_60,ZEXT48(g_heroMobyPtr) + 0x40);
    fVar1 = *in;
    fVar2 = in[1];
    fVar3 = in[2];
    out[3] = in[3];
    *out = fVar1 + (float)((double)local_60 * dVar5) + (float)((double)local_50 * dVar5) +
                   (float)((double)local_40 * dVar4) + (float)((double)local_30 * dVar5);
    out[1] = fVar2 + (float)((double)local_5c * dVar5) + (float)((double)local_4c * dVar5) +
                     (float)((double)local_3c * dVar4) + (float)((double)local_2c * dVar5);
    out[2] = fVar3 + (float)((double)local_58 * dVar5) + (float)((double)local_48 * dVar5) +
                     (float)((double)local_38 * dVar4) + (float)((double)local_28 * dVar5);
  }
  return;
}



//==== 00088848  ns=hero  size=0x58
// sig: undefined Hero_CollideSplineWall(void)
// callers(0): 
// callees(1): 00114858 mobyutil::MB_CollideSplineWall

void hero::Hero_CollideSplineWall(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = mobyutil::MB_CollideSplineWall
                    ((double)g_heroCollRadius,DAT_0096bfba,param_2,&g_heroPosition,&g_heroPosition);
  if (iVar1 != 0) {
    DAT_00969ed6 = 4;
  }
  return;
}



//==== 000888c8  ns=hero  size=0x564
// sig: int Hero_ResolveCollision(int stateType)
// callers(2): 00088e2c hero::Hero_ResolveCollisionWithHistory; 0008a2b8 hero::Hero_ApplyMotion
// callees(7): 00059e20 collproc::CollSphere; 0005c710 collproc::CollPill; 0005f780 collproc::CollHeroSphere; 0007cf28 hero::Hero_AddGravity; 00084180 hero::Hero_GetHeroRelativeVector; 000886d0 hero::Hero_AddRelativeZ; 00114858 mobyutil::MB_CollideSplineWall

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_ResolveCollision(int stateType)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 in_r4;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  
  if (g_heroGhostFrames != 0) {
    return 1;
  }
  dVar17 = 0.0;
  dVar13 = (double)g_heroPosition.x;
  dVar14 = (double)g_heroPosition.y;
  dVar15 = (double)g_heroPosition.z;
  dVar16 = (double)g_heroPosition.w;
  local_64 = 0;
  local_68 = 0.0;
  local_6c = 0.0;
  local_70 = 0.0;
  if (DAT_0096bfba != 0) {
    iVar6 = mobyutil::MB_CollideSplineWall
                      ((double)g_heroCollRadius,DAT_0096bfba,in_r4,&g_heroPosition,&g_heroPosition);
    if (iVar6 != 0) {
      DAT_00969ed6 = 4;
    }
    DAT_0096bfba = 0;
  }
  if (g_heroStateType < 0x12) {
    if (0x10 < g_heroStateType) goto LAB_00088a80;
  }
  else if (g_heroStateType == 0x16) {
    Hero_GetHeroRelativeVector((float)dVar17,(float)dVar17,0.7,&local_70);
    local_70 = local_70 - g_heroPosition.x;
    local_6c = local_6c - g_heroPosition.y;
    local_68 = local_68 - g_heroPosition.z;
    goto LAB_00088a80;
  }
  if ((g_heroGravityMode == '\0') && (DAT_00969ed8 == 0)) {
    local_68 = g_heroCollBottom;
  }
  else if ((g_heroGravityMode == '\x01') || (DAT_00969ed8 != 0)) {
    Hero_AddRelativeZ(0.6,&local_70,&local_70);
  }
  else if ((g_heroStateType == 0x15) || (g_heroStateType == 0x16)) {
    Hero_AddRelativeZ(0.6,&local_70,&local_70);
  }
  else {
    Hero_AddGravity(-g_heroCollBottom,&local_70,&local_70);
  }
LAB_00088a80:
  uVar9 = 0xd24;
  g_heroPosition.x = g_heroPosition.x + local_70;
  g_heroPosition.y = g_heroPosition.y + local_6c;
  g_heroPosition.z = g_heroPosition.z + local_68;
  if (g_heroState != DEATH_ICE) {
    uVar9 = DAT_00a1a858 << 8 | 0x24;
  }
  iVar6 = 0;
  do {
    if (g_heroGravityMode == '\0') {
      if (g_heroStateType == 0x11) {
        iVar7 = collproc::CollSphere(0x3fe3333340000000,&g_heroPosition);
        goto joined_r0x00088bac;
      }
      if (g_heroStateType == 0x16) {
        iVar7 = collproc::CollSphere
                          ((double)(DAT_0071f408 * 0.5),&g_heroPosition,&DAT_00720000,uVar9,
                           g_heroMobyPtr);
        goto joined_r0x00088bac;
      }
      if (g_heroStateType == 0xf) {
        iVar7 = collproc::CollSphere
                          ((double)(DAT_0071f408 * 0.45),&g_heroPosition,&DAT_00720000,uVar9,
                           g_heroMobyPtr);
        goto joined_r0x00088bac;
      }
      dVar10 = (double)(g_heroCollTop - g_heroCollBottom);
      if ((double)(g_heroCollTop - g_heroCollBottom) < 0.05000000074505806) {
        dVar10 = 0.05000000074505806;
      }
      iVar7 = collproc::CollPill((double)g_heroCollRadius,dVar10,&g_heroPosition);
      iVar8 = collproc::CollHeroSphere((double)g_heroCollRadius,&g_heroPosition);
      if (iVar7 == 0 && iVar8 == 0) break;
    }
    else {
      iVar7 = collproc::CollSphere
                        ((double)(DAT_0071f408 * 0.4),&g_heroPosition,&DAT_00720000,uVar9,
                         g_heroMobyPtr);
joined_r0x00088bac:
      if (iVar7 == 0) break;
    }
    iVar6 = iVar6 + 1;
    g_heroPosition.x = CollOutput.push.x;
    g_heroPosition.y = CollOutput.push.y;
    g_heroPosition.w = CollOutput.push.w;
    g_heroPosition.z = CollOutput.push.z;
    DAT_00969ee0 = CollOutput.normal.x;
    DAT_00969ee4 = CollOutput.normal.y;
    DAT_00969ee8 = CollOutput.normal.z;
    DAT_00969eec = CollOutput.normal.w;
    DAT_00969ef0 = CollOutput.ip.x;
    DAT_00969ef4 = CollOutput.ip.y;
    DAT_00969ef8 = CollOutput.ip.z;
    DAT_00969efc = CollOutput.ip.w;
    DAT_00969f1c = CollOutput.pMoby;
    DAT_00969f37 = 1;
  } while (iVar6 < 8);
  g_heroPosition.x = g_heroPosition.x - local_70;
  g_heroPosition.y = g_heroPosition.y - local_6c;
  g_heroPosition.z = g_heroPosition.z - local_68;
  fVar1 = (float)((double)g_heroPosition.x - dVar13);
  fVar2 = (float)((double)g_heroPosition.y - dVar14);
  fVar3 = (float)((double)g_heroPosition.z - dVar15);
  if (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) <= (float)((double)g_heroCollRadius * 1.5)
     ) {
    return 1;
  }
  if (stateType == 0xf) {
    fVar4 = 512.0;
    fVar5 = fVar4;
    if ((fVar1 <= 512.0) && (fVar5 = fVar1, fVar1 < -512.0)) {
      fVar5 = -512.0;
    }
    fVar1 = fVar4;
    if ((fVar2 <= 512.0) && (fVar1 = fVar2, fVar2 < -512.0)) {
      fVar1 = -512.0;
    }
    if ((fVar3 <= 512.0) && (fVar4 = fVar3, fVar3 < -512.0)) {
      fVar4 = -512.0;
    }
    dVar12 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4);
    dVar10 = dVar17;
    dVar11 = dVar17;
    if (dVar12 != dVar17) {
      fVar2 = (float)((double)g_heroCollRadius / dVar12);
      dVar17 = (double)(fVar4 * fVar2);
      dVar10 = (double)(fVar1 * fVar2);
      dVar11 = (double)(fVar5 * fVar2);
    }
    g_heroPosition.x = (float)(dVar11 + dVar13);
    g_heroPosition.y = (float)(dVar10 + dVar14);
    g_heroPosition.w = (float)dVar16;
    g_heroPosition.z = (float)(dVar17 + dVar15);
  }
  return -1;
}



//==== 00088e2c  ns=hero  size=0xb4
// sig: undefined Hero_ResolveCollisionWithHistory(void)
// callers(0): 
// callees(1): 000888c8 hero::Hero_ResolveCollision

void hero::Hero_ResolveCollisionWithHistory(void)

{
  int iVar1;
  uint uVar2;
  int stateType;
  
  stateType = 0;
  do {
    iVar1 = Hero_ResolveCollision(stateType);
    if (iVar1 == 1) {
      return;
    }
    if (1 < g_heroPosHistoryCount) {
      g_heroPosHistoryCount = g_heroPosHistoryCount + -1;
      uVar2 = g_heroPosHistoryIdx + 0x1f;
      g_heroPosHistoryIdx =
           uVar2 + (((int)uVar2 >> 5) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1f) != 0)) * -0x20;
    }
    iVar1 = g_heroPosHistoryIdx * 0x10;
    stateType = stateType + 1;
    g_heroPosition.x = *(float *)(&g_heroPosHistory + iVar1);
    g_heroPosition.y = *(float *)(iVar1 + 0x96b7e4);
    g_heroPosition.z = *(float *)(iVar1 + 0x96b7e8);
    g_heroPosition.w = *(float *)(iVar1 + 0x96b7ec);
  } while (stateType < 0x10);
  return;
}



//==== 00088f00  ns=hero  size=0x130
// sig: float Hero_ForwardComponent(float * v)
// callers(3): 0008a2b8 hero::Hero_ApplyMotion; 0009d270 hero::Hero_JumpTranslation; 000aaec0 hero::HandleHeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_ForwardComponent(float *v)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_r4;
  float fStack00000030;
  float fStack00000038;
  
  fVar1 = g_heroRotation.z + 1.5707963;
  fVar2 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar2 = 3.1415925 - fVar1;
  }
  if (fVar2 <= -3.1415925 - fVar1) {
    fVar2 = -3.1415925 - fVar1;
  }
  fVar1 = fVar2 * fVar2;
  fVar3 = fVar1 * fVar1 * fVar2;
  fVar4 = fVar1 * fVar3;
  fVar7 = g_heroRotation.z;
  if (3.1415925 - g_heroRotation.z <= g_heroRotation.z) {
    fVar7 = 3.1415925 - g_heroRotation.z;
  }
  if (fVar7 <= -3.1415925 - g_heroRotation.z) {
    fVar7 = -3.1415925 - g_heroRotation.z;
  }
  fVar8 = fVar7 * fVar7;
  fVar5 = fVar8 * fVar8 * fVar7;
  fStack00000030 = (float)((int)v >> 0x1f);
  fVar6 = fVar8 * fVar5;
  fStack00000038 = (float)((ulonglong)in_r4 >> 0x20);
  return fStack00000030 *
         (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
         fVar1 * fVar4 * 2.601887e-06) +
         (float)v *
         (fVar7 + fVar8 * fVar7 * -0.16666657 + fVar5 * 0.0083330255 + fVar6 * -0.0001980741 +
         fVar8 * fVar6 * 2.601887e-06) + fStack00000038 * 0.0;
}



//==== 00089038  ns=hero  size=0x2c4
// sig: void Hero_ScaleRelativeXY(float len, float * out, float * in)
// callers(6): 0008a2b8 hero::Hero_ApplyMotion; 0009d270 hero::Hero_JumpTranslation; 0009de38 hero::Hero_JumpTurnTrans; 0009ff68 hero::Hero_ApplyTaper; 000a0f40 hero::Hero_EdgeStop; 000aaec0 hero::HandleHeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ScaleRelativeXY(float len,float *out,float *in)

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
  
  fVar7 = DAT_00969d38;
  fVar6 = DAT_00969d2c;
  fVar1 = DAT_00969d28;
  if (g_heroGravityMode == 0) {
    fVar1 = *in;
    fVar6 = SQRT(fVar1 * fVar1 + in[1] * in[1]);
    if (fVar6 == 0.0) {
      *out = *in;
      out[1] = in[1];
      out[2] = in[2];
      fVar1 = in[3];
      out[1] = 0.0;
      out[3] = fVar1;
      *out = 0.0;
    }
    else {
      fVar6 = len / fVar6;
      *out = fVar1 * fVar6;
      out[1] = in[1] * fVar6;
      out[2] = in[2];
      out[3] = in[3];
    }
  }
  else if (g_heroGravityMode < 3) {
    fVar2 = *in;
    fVar3 = in[1];
    fVar8 = DAT_00969d24 * fVar2;
    fVar9 = DAT_00969d34 * fVar3;
    fVar4 = in[2];
    fVar11 = DAT_00969d44 * fVar4;
    fVar5 = in[3];
    fVar14 = DAT_00969d54 * fVar5;
    fVar12 = DAT_00969d48 * fVar4;
    fVar10 = DAT_00969d3c * fVar3;
    fVar13 = DAT_00969d4c * fVar4;
    fVar15 = DAT_00969d58 * fVar5;
    fVar16 = DAT_00969d5c * fVar5;
    *out = g_heroGravityMtx * fVar2 + DAT_00969d30 * fVar3 + DAT_00969d40 * fVar4 +
           DAT_00969d50 * fVar5;
    out[1] = fVar8 + fVar9 + fVar11 + fVar14;
    fVar4 = *out;
    fVar5 = out[1];
    fVar8 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    out[2] = fVar1 * fVar2 + fVar7 * fVar3 + fVar12 + fVar15;
    out[3] = fVar6 * fVar2 + fVar10 + fVar13 + fVar16;
    if (fVar8 == 0.0) {
      out[1] = 0.0;
      *out = 0.0;
    }
    else {
      fVar8 = len / fVar8;
      out[2] = out[2];
      out[3] = out[3];
      *out = fVar4 * fVar8;
      out[1] = fVar5 * fVar8;
    }
    fVar1 = *out;
    fVar6 = out[1];
    fVar3 = DAT_00969ce4 * fVar1;
    fVar8 = DAT_00969cf4 * fVar6;
    fVar7 = out[2];
    fVar4 = DAT_00969ce8 * fVar1;
    fVar9 = DAT_00969cf8 * fVar6;
    fVar5 = DAT_00969cec * fVar1;
    fVar11 = DAT_00969d04 * fVar7;
    fVar10 = DAT_00969cfc * fVar6;
    fVar2 = out[3];
    fVar12 = DAT_00969d08 * fVar7;
    fVar13 = DAT_00969d0c * fVar7;
    fVar14 = DAT_00969d14 * fVar2;
    fVar15 = DAT_00969d18 * fVar2;
    fVar16 = DAT_00969d1c * fVar2;
    *out = g_heroMtx * fVar1 + DAT_00969cf0 * fVar6 + DAT_00969d00 * fVar7 + DAT_00969d10 * fVar2;
    out[1] = fVar3 + fVar8 + fVar11 + fVar14;
    out[2] = fVar4 + fVar9 + fVar12 + fVar15;
    out[3] = fVar5 + fVar10 + fVar13 + fVar16;
  }
  return;
}



//==== 00089308  ns=hero  size=0x170
// sig: void Hero_CancelGravity(float * out, float * in)
// callers(3): 0008a2b8 hero::Hero_ApplyMotion; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_CancelGravity(float *out,float *in)

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
  
  fVar6 = DAT_00969f78;
  fVar5 = DAT_00969f74;
  fVar1 = g_heroGravityDir;
  if (g_heroGravityMode == 0) {
    *out = *in;
    out[1] = in[1];
    out[2] = in[2];
    fVar1 = in[3];
    out[2] = 0.0;
    out[3] = fVar1;
  }
  else if (g_heroGravityMode < 2) {
    fVar1 = 0.0;
    fVar2 = SQRT(g_heroGroundNormal * g_heroGroundNormal + DAT_00969f54 * DAT_00969f54 +
                 DAT_00969f58 * DAT_00969f58);
    fVar5 = fVar1;
    fVar6 = fVar1;
    if (fVar2 != 0.0) {
      fVar2 = 1.0 / fVar2;
      fVar1 = DAT_00969f58 * fVar2;
      fVar5 = DAT_00969f54 * fVar2;
      fVar6 = g_heroGroundNormal * fVar2;
    }
    fVar2 = *in;
    fVar3 = in[1];
    fVar4 = in[2];
    out[3] = in[3];
    fVar7 = fVar6 * fVar2 + fVar5 * fVar3 + fVar1 * fVar4;
    *out = fVar2 - fVar7 * fVar6;
    out[1] = fVar3 - fVar7 * fVar5;
    out[2] = fVar4 - fVar7 * fVar1;
  }
  else if (g_heroGravityMode < 3) {
    fVar2 = *in;
    fVar3 = in[1];
    fVar7 = g_heroGravityDir * fVar2;
    fVar9 = DAT_00969f74 * fVar3;
    fVar4 = in[2];
    fVar8 = DAT_00969f78 * fVar4;
    out[3] = in[3];
    fVar8 = fVar7 + fVar9 + fVar8;
    *out = fVar2 - fVar1 * fVar8;
    out[1] = fVar3 - fVar5 * fVar8;
    out[2] = fVar4 - fVar6 * fVar8;
  }
  return;
}



//==== 00089480  ns=hero  size=0x12c
// sig: float Hero_RelativeXYComponent(float * v)
// callers(6): 0008a2b8 hero::Hero_ApplyMotion; 0009c658 hero::Hero_KneeBumpMotion; 0009d270 hero::Hero_JumpTranslation; 0009ff68 hero::Hero_ApplyTaper; 000a0f40 hero::Hero_EdgeStop; 000b72b0 hero::TransitionMovement
// callees(2): 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_RelativeXYComponent(float *v)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_90 [64];
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  
  if (g_heroGravityMode == 0) {
    fVar1 = SQRT(*v * *v + v[1] * v[1]);
  }
  else if (g_heroGravityMode < 3) {
    fastfunc::FastEulerToMtx1(auStack_90,ZEXT48(g_heroMobyPtr) + 0x40);
    fastfunc::FastNormalizeRMtx4(&local_50,auStack_90);
    fVar1 = local_50 * *v + local_40 * v[1] + local_30 * v[2] + local_20 * v[3];
    fVar2 = local_4c * *v + local_3c * v[1] + local_2c * v[2] + local_1c * v[3];
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}



//==== 000895f0  ns=hero  size=0xca0
// sig: undefined Hero_MoveWithPlatform(void)
// callers(1): 0008a2b8 hero::Hero_ApplyMotion
// callees(8): 00109af0 mobyutil::Delt; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

void hero::Hero_MoveWithPlatform(void)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  short sVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar23;
  ulonglong in_f23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x240;
  puVar3 = (ulonglong *)lVar13;
  *puVar3 = uVar12;
  puVar3[0x4a] = in_LR;
  puVar3[0x3d] = in_f21;
  puVar3[0x3e] = in_f22;
  puVar3[0x3f] = in_f23;
  puVar3[0x40] = in_f24;
  puVar3[0x41] = in_f25;
  puVar3[0x42] = in_f26;
  puVar3[0x43] = in_f27;
  puVar3[0x44] = in_f28;
  puVar3[0x45] = in_f29;
  puVar3[0x46] = in_f30;
  puVar3[0x47] = in_f31;
  puVar3[0x3a] = unaff_r29;
  puVar3[0x3c] = unaff_r31;
  sVar9 = g_framesNotGrounded;
  iVar17 = 0;
  dVar28 = 0.0;
  dVar33 = (double)g_heroRotation.z;
  puVar3[0x3b] = unaff_r30;
  puVar3[0x39] = unaff_r28;
  puVar3[0x38] = unaff_r27;
  puVar3[0x37] = unaff_r26;
  puVar3[0x36] = unaff_r25;
  dVar20 = dVar28;
  if (sVar9 == 0) {
    if (g_standingOnMoby == 0) {
      DAT_0096a044 = DAT_0096a044 & 0xfffffffc;
      DAT_0096a040 = 0;
    }
    else {
      iVar17 = 1;
      if (DAT_0096a040 != g_standingOnMoby) {
        DAT_0096a044 = DAT_0096a044 & 0xfffffffe;
      }
      DAT_0096a040 = g_standingOnMoby;
    }
  }
  else if ((g_heroState == EDGE_JUMP) && (DAT_0096a1d8 != 0)) {
    iVar17 = 1;
    DAT_0096a040 = DAT_0096a1d8;
  }
  else if ((g_heroStateType == 3) && (DAT_0096a1d8 != 0)) {
    iVar17 = 1;
    DAT_0096a040 = DAT_0096a1d8;
  }
  else if (DAT_0096a040 == 0) {
    DAT_0096a044 = DAT_0096a044 & 0xfffffffc;
    DAT_0096a040 = 0;
  }
  else {
    iVar17 = 1;
    puVar3[0x33] = (longlong)(int)(animationSpeed * 120.5);
    fastfunc::FastIntToDouble(*(int *)((int)puVar3 + 0x19c) - (int)sVar9);
    puVar3[0x33] = (longlong)(int)g_framesNotGrounded;
    dVar20 = (double)(longlong)puVar3[0x33];
  }
  if ((iVar17 != 0) &&
     (iVar14 = mobyutil::MB_GetPlatformParent(DAT_0096a040), fVar1 = DAT_0096a1b4, iVar14 != 0)) {
    if ((((g_heroStateType == 0) || (g_heroStateType == 0xc)) &&
        ((((double)SQRT(g_heroExternalMomentum * g_heroExternalMomentum +
                        DAT_00969e34 * DAT_00969e34 + DAT_00969e38 * DAT_00969e38) == dVar28 &&
          (g_framesNotGrounded == 0)) && (DAT_00969ed6 == 0)))) ||
       ((g_heroState == EDGE_GRAB || (g_heroState == EDGE_HANG)))) {
      if ((DAT_0096a044 & 1) == 0) {
        if ((g_heroState == EDGE_HANG) || (g_heroState == EDGE_GRAB)) {
          dVar31 = (double)DAT_0096a1b0;
          *(float *)(puVar3 + 0x12) = DAT_0096a1b0;
          fVar2 = DAT_0096a1b8;
          *(float *)((int)puVar3 + 0x94) = fVar1;
          fVar1 = DAT_0096a1bc;
          *(float *)(puVar3 + 0x13) = fVar2;
          *(float *)((int)puVar3 + 0x9c) = fVar1;
          dVar29 = 3.141592502593994;
          dVar18 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415925);
          fVar1 = DAT_0096a1c4;
          dVar19 = (double)(float)(dVar18 + 1.570796251296997);
          dVar18 = dVar19;
          if ((double)(float)(dVar29 - dVar19) <= dVar19) {
            dVar18 = (double)(float)(dVar29 - dVar19);
          }
          dVar23 = -3.141592502593994;
          if (dVar18 <= (double)(float)(-3.141592502593994 - dVar19)) {
            dVar18 = (double)(float)(-3.141592502593994 - dVar19);
          }
          dVar19 = (double)(float)(dVar18 * dVar18);
          dVar24 = -0.16666656732559204;
          dVar25 = 0.008333025500178337;
          dVar26 = -0.0001980741071747616;
          dVar27 = 2.601886990305502e-06;
          dVar30 = 0.44999998807907104;
          dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
          dVar22 = (double)(float)(dVar19 * dVar21);
          dVar32 = (double)*(float *)((int)puVar3 + 0x94);
          *(float *)(puVar3 + 0x12) =
               (float)(dVar31 + (double)(((float)(dVar18 + (double)(float)((double)(float)(dVar19 * 
                                                  dVar18) * -0.16666656732559204)) +
                                          (float)(dVar21 * 0.008333025500178337) +
                                          (float)(dVar22 * -0.0001980741071747616) +
                                         (float)(dVar19 * dVar22) * 2.601887e-06) * 0.45));
          dVar19 = (double)fastfunc::FastWrapRot(fVar1,(float)dVar29);
          pMVar11 = g_heroMobyPtr;
          iVar10 = DAT_0096a040;
          dVar18 = dVar19;
          if ((double)(float)(dVar29 - dVar19) <= dVar19) {
            dVar18 = (double)(float)(dVar29 - dVar19);
          }
          if (dVar18 <= (double)(float)(dVar23 - dVar19)) {
            dVar18 = (double)(float)(dVar23 - dVar19);
          }
          dVar19 = (double)(float)(dVar18 * dVar18);
          lVar16 = uVar12 - 400;
          dVar29 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
          dVar31 = (double)(float)(dVar19 * dVar29);
          *(float *)((int)puVar3 + 0x94) =
               (float)(dVar32 + (double)(float)((double)((float)(dVar18 + (double)(float)((double)(
                                                  float)(dVar19 * dVar18) * dVar24)) +
                                                  (float)(dVar29 * dVar25) +
                                                  (float)(dVar31 * dVar26) +
                                                  (float)((double)(float)(dVar19 * dVar31) * dVar27)
                                                  ) * dVar30));
          *(float *)(puVar3 + 0x13) = *(float *)(puVar3 + 0x13) - -1.43;
          mobyutil::MB_PlatformLocalToWorld
                    (pMVar11,iVar10,&DAT_0096a1b0,&g_heroRotation,uVar12 - 0x1a0,lVar16);
          lVar15 = uVar12 - 0x1b0;
          mobyutil::MB_PlatformLocalToWorld
                    (g_heroMobyPtr,DAT_0096a040,lVar15,&g_heroRotation,lVar15,lVar16);
          mobyutil::MB_PlatformWorldToLocal
                    (g_heroMobyPtr,DAT_0096a040,&DAT_0096a1b0,&g_heroRotation,&DAT_00969ff0,lVar16);
          mobyutil::MB_PlatformWorldToLocal
                    (g_heroMobyPtr,DAT_0096a040,lVar15,&g_heroRotation,&DAT_0096a010,lVar16);
        }
        else if ((*(uint *)(iVar14 + 0x3c) & 4) == 0) {
          mobyutil::MB_PlatformLocalToWorld
                    (g_heroMobyPtr,DAT_0096a040,&g_heroPosition,&g_heroRotation,uVar12 - 0x170,
                     uVar12 - 0x160);
          mobyutil::MB_PlatformWorldToLocal
                    (g_heroMobyPtr,DAT_0096a040,uVar12 - 0x170,uVar12 - 0x160,&DAT_00969ff0,
                     uVar12 - 0x180);
        }
        else {
          mobyutil::MB_PlatformWorldToLocal
                    (g_heroMobyPtr,DAT_0096a040,&g_heroPosition,&g_heroRotation,&DAT_00969ff0,
                     uVar12 - 0x180);
        }
        DAT_0096a044 = DAT_0096a044 | 1;
      }
    }
    else {
      DAT_0096a044 = DAT_0096a044 & 0xfffffffe;
    }
    if ((((g_heroStateType == 0) || (g_heroStateType == 0xc)) && ((double)DAT_00969e64 == dVar28))
       && (g_framesNotGrounded == 0)) {
      if ((DAT_0096a044 & 2) == 0) {
        mobyutil::MB_PlatformWorldToLocal
                  (g_heroMobyPtr,DAT_0096a040,&g_heroPosition,&g_heroRotation,uVar12 - 0x150,
                   &DAT_0096a000);
        DAT_0096a044 = DAT_0096a044 | 2;
      }
    }
    else {
      DAT_0096a044 = DAT_0096a044 & 0xfffffffd;
    }
    if ((DAT_0096a044 & 3) != 0) {
      iVar17 = 2;
    }
    if (dVar20 == dVar28) {
      if (iVar17 == 1) {
        mobyutil::MB_PlatformLocalToWorld
                  (g_heroMobyPtr,DAT_0096a040,&g_heroPosition,&g_heroRotation,uVar12 - 0x1d0,
                   uVar12 - 0x1c0);
        DAT_0096a030 = *(float *)(puVar3 + 0xe) - g_heroPosition.x;
        DAT_0096a034 = *(float *)((int)puVar3 + 0x74) - g_heroPosition.y;
        g_heroRotation.z = *(float *)(puVar3 + 0x11);
        DAT_0096a038 = *(float *)(puVar3 + 0xf) - g_heroPosition.z;
        dVar28 = (double)DAT_0096a038;
        DAT_0096a03c = *(float *)((int)puVar3 + 0x7c);
        dVar18 = (double)DAT_0096a034;
        dVar20 = (double)DAT_0096a030;
      }
      else {
        dVar18 = dVar28;
        dVar20 = dVar28;
        if (iVar17 == 2) {
          mobyutil::MB_PlatformLocalToWorld
                    (g_heroMobyPtr,DAT_0096a040,&g_heroPosition,&g_heroRotation,uVar12 - 0x140,
                     uVar12 - 0x130);
          mobyutil::MB_PlatformGetDelta
                    (g_heroMobyPtr,DAT_0096a040,&DAT_00969ff0,&DAT_0096a000,uVar12 - 0x120,
                     uVar12 - 0x110);
          dVar19 = dVar28;
          mobyutil::MB_PlatformGetDelta
                    (g_heroMobyPtr,DAT_0096a040,&DAT_0096a010,&DAT_0096a000,uVar12 - 0x100,
                     uVar12 - 0xf0);
          if (((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
             (g_heroInvisible != '\0')) {
            g_heroRotation.z = *(float *)(puVar3 + 0x23);
          }
          else if ((DAT_0096a044 & 2) == 0) {
            g_heroRotation.z = *(float *)(puVar3 + 0x23);
          }
          else {
            g_heroRotation.z = *(float *)(puVar3 + 0x27);
          }
          if ((DAT_0096a044 & 1) == 0) {
            dVar20 = (double)(*(float *)(puVar3 + 0x20) - g_heroPosition.x);
            dVar18 = (double)(*(float *)((int)puVar3 + 0x104) - g_heroPosition.y);
            dVar29 = (double)*(float *)((int)puVar3 + 0x10c);
            dVar28 = (double)(*(float *)(puVar3 + 0x21) - g_heroPosition.z);
          }
          else if ((g_heroState == EDGE_HANG) || (g_heroState == EDGE_GRAB)) {
            fVar1 = DAT_0096a1c4 + 1.5707963;
            fVar2 = fVar1;
            if (3.1415925 - fVar1 <= fVar1) {
              fVar2 = 3.1415925 - fVar1;
            }
            if (fVar2 <= -3.1415925 - fVar1) {
              fVar2 = -3.1415925 - fVar1;
            }
            fVar1 = fVar2 * fVar2;
            fVar4 = fVar1 * fVar1 * fVar2;
            fVar5 = fVar1 * fVar4;
            fVar6 = DAT_0096a1c4;
            if (3.1415925 - DAT_0096a1c4 <= DAT_0096a1c4) {
              fVar6 = 3.1415925 - DAT_0096a1c4;
            }
            DAT_0096a1bc = -3.1415925 - DAT_0096a1c4;
            if (fVar6 <= DAT_0096a1bc) {
              fVar6 = DAT_0096a1bc;
            }
            fVar7 = fVar6 * fVar6;
            DAT_0096a1b0 = (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar4 * 0.0083330255 +
                            fVar5 * -0.0001980741 + fVar1 * fVar5 * 2.601887e-06) * 0.45 +
                           *(float *)(puVar3 + 0x28);
            fVar4 = *(float *)(puVar3 + 0x24) - *(float *)(puVar3 + 0x28);
            fVar5 = *(float *)((int)puVar3 + 0x124) - *(float *)((int)puVar3 + 0x144);
            dVar31 = ABS((double)fVar4);
            fVar1 = fVar7 * fVar7 * fVar6;
            dVar23 = ABS((double)fVar5);
            fVar2 = fVar7 * fVar1;
            *(float *)((int)puVar3 + 0x16c) = fVar5;
            *(float *)(puVar3 + 0x2d) = fVar4;
            *(float *)(puVar3 + 0x2e) = (float)(dVar31 - dVar23);
            DAT_0096a1b8 = (float)(dVar19 + (double)*(float *)(puVar3 + 0x29)) + -1.43;
            dVar20 = (double)(*(float *)(puVar3 + 0x20) - g_heroPosition.x);
            dVar18 = (double)(*(float *)((int)puVar3 + 0x104) - g_heroPosition.y);
            dVar29 = (double)*(float *)((int)puVar3 + 0x10c);
            dVar28 = (double)(*(float *)(puVar3 + 0x21) - g_heroPosition.z);
            iVar17 = (int)(((ulonglong)(*(uint *)(puVar3 + 0x2d) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar3 + 0x2e) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar3 + 0x16c) >> 0x1d) & 4) << 2);
            DAT_0096a1b4 = (fVar6 + fVar7 * fVar6 * -0.16666657 + fVar1 * 0.0083330255 +
                            fVar2 * -0.0001980741 + fVar7 * fVar2 * 2.601887e-06) * 0.45 +
                           *(float *)((int)puVar3 + 0x144);
            fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar17);
            fVar1 = *(float *)(&DAT_00735904 + iVar17);
            if (dVar19 <= (double)*(float *)(puVar3 + 0x2e)) {
              dVar31 = ABS((double)*(float *)((int)puVar3 + 0x16c));
              dVar23 = ABS((double)*(float *)(puVar3 + 0x2d));
            }
            if (dVar19 < dVar23) {
              iVar17 = 4;
              fVar4 = (float)(dVar31 - dVar23) / (float)(dVar31 + dVar23);
              lVar15 = lVar13;
              do {
                iVar17 = iVar17 + -1;
                *(float *)((int)lVar15 + 0x174) = fVar4;
                lVar15 = lVar15 + 4;
              } while (iVar17 != 0);
              fVar4 = fVar4 * fVar4;
              lVar15 = uVar12 - 0x230;
              iVar17 = 4;
              fVar5 = fVar4 * fVar4;
              *(float *)(puVar3 + 0x2f) = *(float *)(puVar3 + 0x2f) * fVar4;
              *(float *)((int)puVar3 + 0x17c) = *(float *)((int)puVar3 + 0x17c) * fVar5;
              *(float *)(puVar3 + 0x30) = *(float *)(puVar3 + 0x30) * fVar5 * fVar4;
              do {
                iVar17 = iVar17 + -1;
                *(float *)((int)lVar15 + 0x174) = *(float *)((int)lVar15 + 0x164) * fVar5 * fVar5;
                lVar15 = lVar15 + 4;
              } while (iVar17 != 0);
              iVar17 = 0;
              iVar14 = 8;
              lVar15 = lVar13;
              do {
                pfVar8 = (float *)((int)&DAT_007358e0 + iVar17);
                iVar14 = iVar14 + -1;
                iVar17 = iVar17 + 4;
                *(float *)((int)lVar15 + 0x174) = *(float *)((int)lVar15 + 0x174) * *pfVar8;
                lVar15 = lVar15 + 4;
              } while (iVar14 != 0);
              iVar17 = 8;
              do {
                iVar17 = iVar17 + -1;
                iVar14 = (int)lVar13;
                lVar13 = lVar13 + 4;
                dVar19 = (double)(float)(dVar19 + (double)*(float *)(iVar14 + 0x174));
              } while (iVar17 != 0);
              dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar1);
            }
            DAT_0096a1c4 = (float)dVar19;
          }
          else {
            dVar20 = (double)(*(float *)(puVar3 + 0x24) - g_heroPosition.x);
            dVar18 = (double)(*(float *)((int)puVar3 + 0x124) - g_heroPosition.y);
            dVar28 = (double)(*(float *)(puVar3 + 0x25) - g_heroPosition.z);
            fVar1 = SQRT((float)(dVar20 * dVar20) + (float)(dVar18 * dVar18) +
                         (float)(dVar28 * dVar28));
            if (0.0001 <= fVar1) {
              dVar29 = (double)*(float *)((int)puVar3 + 300);
              if (2.0 < fVar1) {
                DAT_0096a044 = DAT_0096a044 & 0xfffffffc;
                dVar28 = dVar19;
                dVar18 = dVar19;
                dVar20 = dVar19;
                dVar29 = dVar19;
              }
            }
            else {
              g_heroPosition.y = *(float *)((int)puVar3 + 0x124);
              g_heroPosition.z = *(float *)(puVar3 + 0x25);
              g_heroPosition.w = *(float *)((int)puVar3 + 300);
              dVar28 = dVar19;
              dVar18 = dVar19;
              dVar20 = dVar19;
              dVar29 = dVar19;
              g_heroPosition.x = *(float *)(puVar3 + 0x24);
            }
            DAT_0096a1b0 = (float)((double)DAT_0096a1b0 + dVar20);
            DAT_0096a1b4 = (float)((double)DAT_0096a1b4 + dVar18);
            DAT_0096a1b8 = (float)((double)DAT_0096a1b8 + dVar28);
            if (0.1 < SQRT((float)(dVar20 - (double)DAT_00969e20) *
                           (float)(dVar20 - (double)DAT_00969e20) +
                           (float)(dVar18 - (double)DAT_00969e24) *
                           (float)(dVar18 - (double)DAT_00969e24) +
                           (float)(dVar28 - (double)DAT_00969e28) *
                           (float)(dVar28 - (double)DAT_00969e28))) {
              DAT_0096a044 = DAT_0096a044 & 0xfffffffe;
            }
          }
          DAT_0096a030 = (float)dVar20;
          DAT_0096a034 = (float)dVar18;
          DAT_0096a038 = (float)dVar28;
          DAT_0096a03c = (float)dVar29;
        }
      }
    }
    else {
      *(float *)(puVar3 + 0x2c) = SQRT(DAT_0096a030 * DAT_0096a030 + DAT_0096a034 * DAT_0096a034);
      *(float *)((int)puVar3 + 0x164) = DAT_0096a038;
      if ((*(uint *)(iVar14 + 0x3c) & 2) == 0) {
        mobyutil::Delt((float)dVar28,(float)((double)(DAT_0071f418 * 25.0) * dVar20),
                       (float *)((int)puVar3 + 0x164));
        dVar18 = dVar28;
        mobyutil::Delt((float)dVar28,(float)((double)(DAT_0071f418 * 2.0) * dVar20),
                       (float *)(puVar3 + 0x2c));
        dVar28 = (double)SQRT(DAT_0096a030 * DAT_0096a030 + DAT_0096a034 * DAT_0096a034);
        dVar20 = dVar18;
        if (dVar28 != dVar18) {
          fVar1 = (float)((double)*(float *)(puVar3 + 0x2c) / dVar28);
          dVar18 = (double)(DAT_0096a034 * fVar1);
          dVar20 = (double)(DAT_0096a030 * fVar1);
        }
        dVar28 = (double)*(float *)((int)puVar3 + 0x164);
      }
      else {
        dVar28 = (double)DAT_0096a038;
        dVar18 = (double)DAT_0096a034;
        dVar20 = (double)DAT_0096a030;
      }
    }
    DAT_00969dd0 = (float)((double)DAT_00969dd0 + dVar20);
    DAT_00969dd8 = (float)((double)DAT_00969dd8 + dVar28);
    DAT_00969dd4 = (float)((double)DAT_00969dd4 + dVar18);
    dVar28 = (double)fastfunc::FastDiffRots((double)g_heroRotation.z,dVar33);
    DAT_00969ddc = (float)dVar28;
  }
  return;
}



//==== 0008a2b8  ns=hero  size=0xc34
// sig: undefined Hero_ApplyMotion(void)
// callers(1): 0008af28 hero::???_Hero_UpdateGroundProbe
// callees(11): 00057820 collproc::CollLine; 0007e5e8 hero::Hero_GetGroundInfo; 000817ec hero::Hero_SetRelativeZ; 00084830 hero::Hero_RelativeZComponent; 00088370 hero::Hero_SnapToGround; 000888c8 hero::Hero_ResolveCollision; 00088f00 hero::Hero_ForwardComponent; 00089038 hero::Hero_ScaleRelativeXY; 00089308 hero::Hero_CancelGravity; 00089480 hero::Hero_RelativeXYComponent; 000895f0 hero::Hero_MoveWithPlatform

void hero::Hero_ApplyMotion(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
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
  float fVar15;
  float fVar16;
  undefined1 local_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  dVar14 = (double)g_heroPosition.x;
  dVar13 = (double)g_heroPosition.y;
  dVar12 = (double)g_heroPosition.z;
  Hero_MoveWithPlatform(DAT_0096a1d8,&DAT_00969dd0,&g_heroRotation);
  if ((g_heroState == THRUSTER_PACK_BONK_JUMP) || (g_heroState == HYPER_STRIKE)) {
    if (g_heroGhostFrames == 0) {
      fVar15 = Hero_RelativeXYComponent(&g_heroVelocity);
      if (g_heroCollRadius - 0.02 < fVar15) {
        fVar15 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4 +
                      DAT_00969dc8 * DAT_00969dc8);
        if (fVar15 == 0.0) {
          DAT_00969dc8 = 0.0;
          DAT_00969dc4 = 0.0;
          g_heroVelocity = 0.0;
        }
        else {
          fVar15 = (g_heroCollRadius - 0.02) / fVar15;
          g_heroVelocity = g_heroVelocity * fVar15;
          DAT_00969dc4 = DAT_00969dc4 * fVar15;
          DAT_00969dc8 = DAT_00969dc8 * fVar15;
        }
      }
    }
    fVar16 = Hero_RelativeZComponent(&g_heroVelocity);
    fVar15 = -g_heroGroundDist;
    if (fVar16 < fVar15) {
      if (0.0 < fVar15) {
        fVar15 = 0.0;
      }
      Hero_SetRelativeZ(fVar15,&g_heroVelocity,&g_heroVelocity);
    }
  }
  else if (g_heroStateType == 0xf) {
    if (g_heroGhostFrames == 0) {
      fVar15 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4);
      if (g_heroCollRadius - 0.02 < fVar15) {
        if (fVar15 == 0.0) {
          DAT_00969dc4 = 0.0;
          g_heroVelocity = 0.0;
        }
        else {
          fVar15 = (g_heroCollRadius - 0.02) / fVar15;
          g_heroVelocity = g_heroVelocity * fVar15;
          DAT_00969dc4 = DAT_00969dc4 * fVar15;
        }
      }
    }
  }
  else if (g_heroStateType == 0x15) {
    if ((g_heroGhostFrames == 0) &&
       (fVar15 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4 +
                      DAT_00969dc8 * DAT_00969dc8), 0.6 < fVar15)) {
      if (fVar15 == 0.0) {
        DAT_00969dc8 = 0.0;
        DAT_00969dc4 = 0.0;
        g_heroVelocity = 0.0;
      }
      else {
        fVar15 = 0.6 / fVar15;
        g_heroVelocity = g_heroVelocity * fVar15;
        DAT_00969dc4 = DAT_00969dc4 * fVar15;
        DAT_00969dc8 = DAT_00969dc8 * fVar15;
      }
    }
  }
  else if (g_heroStateType == 0x16) {
    iVar1 = collproc::CollLine(&g_heroPosition,local_80,2,0,0);
    if ((iVar1 != 0) &&
       ((((CollOutput.pMoby == (MobyInstance *)0x0 || ((CollOutput.pMoby)->oClass == METAL_CRATE))
         || ((CollOutput.pMoby)->oClass == GRINDRAIL_GATE_059F)) && (g_heroGhostFrames == 0)))) {
      fVar15 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4);
      if (g_heroCollRadius - 0.02 < fVar15) {
        if (fVar15 == 0.0) {
          DAT_00969dc4 = 0.0;
          g_heroVelocity = 0.0;
        }
        else {
          fVar15 = (g_heroCollRadius - 0.02) / fVar15;
          g_heroVelocity = g_heroVelocity * fVar15;
          DAT_00969dc4 = DAT_00969dc4 * fVar15;
        }
      }
    }
  }
  else if (((g_heroStateType != 0xd) && (g_heroStateType != 0xe)) && (g_heroGhostFrames == 0)) {
    fVar15 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4 +
                  DAT_00969dc8 * DAT_00969dc8);
    if (g_heroCollRadius - 0.02 < fVar15) {
      if (fVar15 == 0.0) {
        DAT_00969dc8 = 0.0;
        DAT_00969dc4 = 0.0;
        g_heroVelocity = 0.0;
      }
      else {
        fVar15 = (g_heroCollRadius - 0.02) / fVar15;
        g_heroVelocity = g_heroVelocity * fVar15;
        DAT_00969dc4 = DAT_00969dc4 * fVar15;
        DAT_00969dc8 = DAT_00969dc8 * fVar15;
      }
    }
  }
  g_heroPosition.x = g_heroPosition.x + g_heroVelocity + DAT_0096a600;
  g_heroPosition.y = g_heroPosition.y + DAT_00969dc4 + DAT_0096a604;
  g_heroPosition.z = g_heroPosition.z + DAT_00969dc8 + DAT_0096a608;
  dVar7 = 0.0;
  DAT_0096a60c = 0;
  DAT_00969f37 = 0;
  DAT_00969f1c = 0;
  DAT_0096a608 = 0.0;
  DAT_0096a604 = 0.0;
  DAT_0096a600 = 0.0;
  dVar10 = 9.999999747378752e-05;
  if (0.0001 < SQRT(DAT_00969dd0 * DAT_00969dd0 + DAT_00969dd4 * DAT_00969dd4 +
                    DAT_00969dd8 * DAT_00969dd8)) {
    Hero_GetGroundInfo();
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = Hero_ResolveCollision(iVar1);
      if (iVar2 == 1) break;
      if (1 < g_heroPosHistoryCount) {
        g_heroPosHistoryCount = g_heroPosHistoryCount + -1;
        uVar3 = g_heroPosHistoryIdx + 0x1f;
        g_heroPosHistoryIdx =
             uVar3 + (((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0)) * -0x20;
      }
      iVar2 = g_heroPosHistoryIdx * 0x10;
      iVar1 = iVar1 + 1;
      g_heroPosition.x = *(float *)(&g_heroPosHistory + iVar2);
      g_heroPosition.y = *(float *)(iVar2 + 0x96b7e4);
      g_heroPosition.z = *(float *)(iVar2 + 0x96b7e8);
      g_heroPosition.w = *(float *)(iVar2 + 0x96b7ec);
    } while (iVar1 < 0x10);
    Hero_GetGroundInfo();
    DAT_00969de0 = (float)((double)g_heroPosition.x - dVar14);
    DAT_00969de4 = (float)((double)g_heroPosition.y - dVar13);
    DAT_00969de8 = (float)((double)g_heroPosition.z - dVar12);
    DAT_00969dec = g_heroPosition.w;
    Hero_SnapToGround();
  }
  DAT_00969e00 = (float)((double)g_heroPosition.x - dVar14);
  DAT_00969e04 = (float)((double)g_heroPosition.y - dVar13);
  DAT_00969e08 = (float)((double)g_heroPosition.z - dVar12);
  DAT_00969e1c = g_heroPosition.w;
  DAT_00969e0c = g_heroPosition.w;
  dVar4 = (double)SQRT(DAT_00969e00 * DAT_00969e00 + DAT_00969e04 * DAT_00969e04 +
                       DAT_00969e08 * DAT_00969e08);
  if (dVar4 == dVar7) {
    DAT_00969df8 = (float)dVar7;
    DAT_00969df4 = (float *)(float)dVar7;
    DAT_00969df0 = (float)dVar7;
  }
  else {
    fVar15 = (float)(1.0 / dVar4);
    DAT_00969df0 = DAT_00969e00 * fVar15;
    DAT_00969df4 = (float *)(DAT_00969e04 * fVar15);
    DAT_00969df8 = DAT_00969e08 * fVar15;
  }
  dVar4 = (double)(DAT_00969df0 * g_heroVelocity + (float)DAT_00969df4 * DAT_00969dc4 +
                  DAT_00969df8 * DAT_00969dc8);
  if (dVar4 < dVar7) {
    dVar4 = dVar7;
  }
  dVar6 = (double)SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4 +
                       DAT_00969dc8 * DAT_00969dc8);
  if (dVar6 == dVar7) {
    DAT_00969df8 = (float)dVar7;
    DAT_00969df4 = (float *)(float)dVar7;
    DAT_00969df0 = (float)dVar7;
  }
  else {
    fVar15 = (float)(dVar4 / dVar6);
    DAT_00969df0 = g_heroVelocity * fVar15;
    DAT_00969df4 = (float *)(DAT_00969dc4 * fVar15);
    DAT_00969df8 = DAT_00969dc8 * fVar15;
  }
  DAT_00969dfc = DAT_00969dcc;
  local_70 = g_heroVelocity;
  local_6c = DAT_00969dc4;
  local_68 = DAT_00969dc8;
  local_64 = DAT_00969dcc;
  DAT_00969e10 = DAT_00969e00;
  DAT_00969e14 = DAT_00969e04;
  DAT_00969e18 = DAT_00969e08;
  Hero_CancelGravity(&local_70,&local_70);
  Hero_CancelGravity(&DAT_00969e10,&DAT_00969e10);
  dVar4 = (double)SQRT(DAT_00969e10 * DAT_00969e10 + DAT_00969e14 * DAT_00969e14 +
                       DAT_00969e18 * DAT_00969e18);
  if (dVar4 == dVar7) {
    DAT_00969e18 = (float)dVar7;
    DAT_00969e14 = (float)dVar7;
    DAT_00969e10 = (float)dVar7;
  }
  else {
    fVar15 = (float)(1.0 / dVar4);
    DAT_00969e10 = DAT_00969e10 * fVar15;
    DAT_00969e14 = DAT_00969e14 * fVar15;
    DAT_00969e18 = DAT_00969e18 * fVar15;
  }
  dVar4 = (double)(DAT_00969e10 * local_70 + DAT_00969e14 * local_6c + DAT_00969e18 * local_68);
  if (dVar4 < dVar7) {
    dVar4 = dVar7;
  }
  dVar6 = (double)SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
  if (dVar6 == dVar7) {
    DAT_00969e18 = (float)dVar7;
    DAT_00969e14 = (float)dVar7;
    DAT_00969e10 = (float)dVar7;
  }
  else {
    fVar15 = (float)(dVar4 / dVar6);
    DAT_00969e10 = local_70 * fVar15;
    DAT_00969e14 = local_6c * fVar15;
    DAT_00969e18 = local_68 * fVar15;
  }
  DAT_00969e1c = (float)local_64;
  local_60 = g_heroVelocity;
  local_5c = DAT_00969dc4;
  local_58 = DAT_00969dc8;
  local_54 = DAT_00969dcc;
  Hero_ScaleRelativeXY((float)dVar7,&local_60,&local_60);
  Hero_ScaleRelativeXY((float)dVar7,&DAT_00969e00,&DAT_00969e00);
  dVar4 = (double)SQRT(DAT_00969e00 * DAT_00969e00 + DAT_00969e04 * DAT_00969e04 +
                       DAT_00969e08 * DAT_00969e08);
  if (dVar4 == dVar7) {
    DAT_00969e08 = (float)dVar7;
    DAT_00969e04 = (float)dVar7;
    DAT_00969e00 = (float)dVar7;
  }
  else {
    fVar15 = (float)(1.0 / dVar4);
    DAT_00969e00 = DAT_00969e00 * fVar15;
    DAT_00969e04 = DAT_00969e04 * fVar15;
    DAT_00969e08 = DAT_00969e08 * fVar15;
  }
  dVar4 = (double)(DAT_00969e00 * local_60 + DAT_00969e04 * local_5c + DAT_00969e08 * local_58);
  if (dVar4 < dVar7) {
    dVar4 = dVar7;
  }
  dVar6 = (double)SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58);
  if (dVar6 == dVar7) {
    DAT_00969e08 = (float)dVar7;
    DAT_00969e04 = (float)dVar7;
    DAT_00969e00 = (float)dVar7;
  }
  else {
    fVar15 = (float)(dVar4 / dVar6);
    DAT_00969e00 = local_60 * fVar15;
    DAT_00969e04 = local_5c * fVar15;
    DAT_00969e08 = local_58 * fVar15;
  }
  DAT_00969e0c = (float)local_54;
  fVar15 = DAT_00969df0 * DAT_00969df0 + (float)DAT_00969df4 * (float)DAT_00969df4;
  DAT_00969e44 = SQRT(fVar15);
  DAT_00969e40 = SQRT(fVar15 + DAT_00969df8 * DAT_00969df8);
  DAT_00969e48 = Hero_ForwardComponent(DAT_00969df4);
  if ((double)DAT_00969e48 < dVar7) {
    DAT_00969e48 = (float)dVar7;
  }
  dVar4 = (double)DAT_00969dd0;
  dVar6 = (double)DAT_00969dd4;
  dVar5 = (double)DAT_00969dd8;
  dVar11 = (double)g_heroPosition.x;
  dVar9 = (double)g_heroPosition.y;
  dVar8 = (double)g_heroPosition.z;
  if (dVar10 < (double)SQRT((float)(dVar4 * dVar4) + (float)(dVar6 * dVar6) + (float)(dVar5 * dVar5)
                           )) {
    g_heroPosition.x = (float)(dVar11 + dVar4);
    g_heroPosition.y = (float)(dVar9 + dVar6);
    DAT_00969dd8 = (float)dVar7;
    g_heroPosition.z = (float)(dVar8 + dVar5);
    DAT_00969dd4 = (float)dVar7;
    DAT_00969dd0 = (float)dVar7;
    iVar1 = 0;
    do {
      iVar2 = Hero_ResolveCollision(iVar1);
      if (iVar2 == 1) break;
      if (1 < g_heroPosHistoryCount) {
        g_heroPosHistoryCount = g_heroPosHistoryCount + -1;
        uVar3 = g_heroPosHistoryIdx + 0x1f;
        g_heroPosHistoryIdx =
             uVar3 + (((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0)) * -0x20;
      }
      iVar2 = g_heroPosHistoryIdx * 0x10;
      iVar1 = iVar1 + 1;
      g_heroPosition.x = *(float *)(&g_heroPosHistory + iVar2);
      g_heroPosition.y = *(float *)(iVar2 + 0x96b7e4);
      g_heroPosition.z = *(float *)(iVar2 + 0x96b7e8);
      g_heroPosition.w = *(float *)(iVar2 + 0x96b7ec);
    } while (iVar1 < 0x10);
    Hero_GetGroundInfo();
    DAT_00969de0 = (float)((double)g_heroPosition.x - dVar14);
    DAT_00969de4 = (float)((double)g_heroPosition.y - dVar13);
    DAT_00969de8 = (float)((double)g_heroPosition.z - dVar12);
    DAT_00969dec = g_heroPosition.w;
    Hero_SnapToGround();
  }
  DAT_00969e2c = DAT_00969ddc;
  DAT_00969de0 = (float)((double)g_heroPosition.x - dVar14);
  DAT_00969ddc = (float)dVar7;
  DAT_00969de4 = (float)((double)g_heroPosition.y - dVar13);
  DAT_00969de8 = (float)((double)g_heroPosition.z - dVar12);
  DAT_00969dec = g_heroPosition.w;
  DAT_00969e4c = (float)dVar7;
  DAT_00969e20 = (float)((double)g_heroPosition.x - dVar11);
  DAT_00969e24 = (float)((double)g_heroPosition.y - dVar9);
  DAT_00969e28 = (float)((double)g_heroPosition.z - dVar8);
  if (0.004 < DAT_00969e44) {
    DAT_00969e4c = DAT_00969de8 / DAT_00969e44;
    if (DAT_00969e4c <= 0.5) {
      if (DAT_00969e4c < -0.5) {
        DAT_00969e4c = -0.5;
      }
    }
    else {
      DAT_00969e4c = 0.5;
    }
  }
  if (mobyutil::g_FrameTime * 52.0 < DAT_00969e40) {
    fVar15 = (mobyutil::g_FrameTime * 52.0) / DAT_00969e40;
    DAT_00969de0 = DAT_00969de0 * fVar15;
    DAT_00969de4 = DAT_00969de4 * fVar15;
    DAT_00969de8 = DAT_00969de8 * fVar15;
    DAT_00969e40 = mobyutil::g_FrameTime * 52.0;
  }
  return;
}



//==== 0008af28  ns=hero  size=0x710
// sig: undefined ???_Hero_UpdateGroundProbe(void)
// callers(1): 0008b778 hero::Hero_UpdateMovement
// callees(10): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0007dde0 hero::Hero_GetHeroRelativePolarVector; 00084180 hero::Hero_GetHeroRelativeVector; 0008a2b8 hero::Hero_ApplyMotion; 0010af88 mobyutil::MB_isCrate; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul
// strings: 0008af20: '>W\n=`'

void hero::____Hero_UpdateGroundProbe(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float *pfVar10;
  char cVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  bool bVar17;
  int iVar16;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar19;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  double dVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x210;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x44] = in_LR;
  puVar9[0x3c] = in_f26;
  puVar9[0x3d] = in_f27;
  puVar9[0x3e] = in_f28;
  puVar9[0x3f] = in_f29;
  puVar9[0x40] = in_f30;
  puVar9[0x41] = in_f31;
  puVar9[0x38] = unaff_r28;
  puVar9[0x39] = unaff_r29;
  cVar11 = DAT_0096bd8d;
  puVar9[0x3b] = unaff_r31;
  puVar9[0x3a] = unaff_r30;
  puVar9[0x37] = unaff_r27;
  puVar9[0x36] = unaff_r26;
  if (cVar11 == '\0') {
    Hero_ApplyMotion();
  }
  if (worldUpdateTime % 3 == 0) {
    dVar21 = 4.0;
    iVar16 = 0;
    DAT_00969f28 = 4.0;
    DAT_00969f34 = 0;
    DAT_00969f35 = 0;
    *(undefined4 *)(puVar9 + 0x14) = 0;
    *(undefined4 *)((int)puVar9 + 0xa4) = 0;
    *(undefined4 *)(puVar9 + 0x15) = 0;
    *(undefined4 *)((int)puVar9 + 0xac) = 0;
    *(undefined4 *)(puVar9 + 0x16) = 0;
    *(undefined4 *)((int)puVar9 + 0xb4) = 0;
    *(undefined4 *)(puVar9 + 0x17) = 0;
    *(undefined4 *)((int)puVar9 + 0xbc) = 0;
    dVar23 = 0.0;
    dVar20 = 0.699999988079071;
    Hero_GetHeroRelativePolarVector(g_heroCollRadius - 0.02,0.0,0.7,(float *)(uVar12 - 0x170));
    Hero_GetHeroRelativePolarVector
              ((float)dVar21,(float)dVar23,(float)dVar20,(float *)(uVar12 - 0x160));
    iVar15 = collproc::CollLine(uVar12 - 0x170,uVar12 - 0x160,2,0,0);
    fVar1 = CollOutput.normal.z;
    if (iVar15 != 0) {
      DAT_00969f28 = SQRT((g_heroPosition.x - CollOutput.ip.x) *
                          (g_heroPosition.x - CollOutput.ip.x) +
                          (g_heroPosition.y - CollOutput.ip.y) *
                          (g_heroPosition.y - CollOutput.ip.y));
      fVar8 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                   CollOutput.normal.y * CollOutput.normal.y);
      dVar19 = ABS((double)CollOutput.normal.z);
      dVar21 = ABS((double)fVar8);
      *(float *)(puVar9 + 0x30) = fVar8;
      *(float *)((int)puVar9 + 0x184) = (float)(dVar19 - dVar21);
      iVar15 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0x184) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar9 + 0x30) >> 0x1d) & 4) << 2);
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar15);
      fVar1 = *(float *)(&DAT_00735904 + iVar15);
      dVar20 = dVar19;
      if (dVar23 <= (double)*(float *)((int)puVar9 + 0x184)) {
        dVar20 = ABS((double)*(float *)(puVar9 + 0x30));
        dVar21 = dVar19;
      }
      if (dVar23 < dVar21) {
        iVar15 = 4;
        iVar18 = 4;
        fVar2 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
        lVar13 = lVar14;
        do {
          iVar15 = iVar15 + -1;
          *(float *)((int)lVar13 + 0x188) = fVar2;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        fVar2 = fVar2 * fVar2;
        lVar13 = uVar12 - 0x200;
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0x18c) = *(float *)((int)puVar9 + 0x18c) * fVar2;
        *(float *)(puVar9 + 0x32) = *(float *)(puVar9 + 0x32) * fVar3;
        *(float *)((int)puVar9 + 0x194) = *(float *)((int)puVar9 + 0x194) * fVar3 * fVar2;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar13 + 0x188) = *(float *)((int)lVar13 + 0x178) * fVar3 * fVar3;
          lVar13 = lVar13 + 4;
        } while (iVar18 != 0);
        iVar15 = 8;
        iVar18 = 8;
        lVar13 = lVar14;
        do {
          pfVar10 = (float *)((int)&DAT_007358e0 + iVar16);
          iVar15 = iVar15 + -1;
          iVar16 = iVar16 + 4;
          *(float *)((int)lVar13 + 0x188) = *(float *)((int)lVar13 + 0x188) * *pfVar10;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        do {
          iVar18 = iVar18 + -1;
          iVar15 = (int)lVar14;
          lVar14 = lVar14 + 4;
          dVar23 = (double)(float)(dVar23 + (double)*(float *)(iVar15 + 0x188));
        } while (iVar18 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar8 + fVar1);
      }
      DAT_00969f30 = (float)dVar23;
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        DAT_00969f35 = 1;
        bVar17 = mobyutil::MB_isCrate(CollOutput.pMoby);
        if (bVar17) {
          DAT_00969f34 = 1;
        }
      }
    }
  }
  if (worldUpdateTime == (worldUpdateTime / 5) * 5) {
    DAT_00969f40 = 0;
    dVar20 = 0.0;
    DAT_00969f38 = 0.0;
    if (g_framesGroundedCnt != 0) {
      dVar21 = 1.100000023841858;
      Hero_GetHeroRelativeVector(1.1,0.0,1.0,(float *)(puVar9 + 0xe));
      Hero_GetHeroRelativeVector((float)dVar21,(float)dVar20,-20.0,(float *)(puVar9 + 0x10));
      dVar23 = 0.5;
      if (*(float *)(puVar9 + 0x11) < 0.5) {
        *(undefined4 *)(puVar9 + 0x11) = 0x3f000000;
      }
      iVar15 = collproc::CollLine(uVar12 - 0x1a0,uVar12 - 400,2,g_heroMobyPtr,0);
      dVar24 = 20.0;
      dVar19 = dVar24;
      if (((iVar15 == 0) ||
          (fVar1 = *(float *)((int)puVar9 + 0x74) - CollOutput.ip.y,
          dVar19 = (double)SQRT((*(float *)(puVar9 + 0xe) - CollOutput.ip.x) *
                                (*(float *)(puVar9 + 0xe) - CollOutput.ip.x) + fVar1 * fVar1 +
                                (*(float *)(puVar9 + 0xf) - CollOutput.ip.z) *
                                (*(float *)(puVar9 + 0xf) - CollOutput.ip.z)), 3.0 < dVar19)) &&
         (dVar22 = -0.4000000059604645, -0.4000000059604645 < dVar23)) {
        do {
          Hero_GetHeroRelativeVector
                    ((float)(dVar22 + dVar21),(float)dVar20,(float)dVar20,(float *)(uVar12 - 0x180))
          ;
          iVar16 = collproc::CollSphere((double)g_heroCollRadius,uVar12 - 0x180);
          if (iVar16 == 0) {
            DAT_00969f40 = 1;
            if (iVar15 == 0) {
              dVar19 = dVar24;
            }
            DAT_00969f38 = (float)dVar19;
            DAT_00969f3c = (float)((double)g_heroCollRadius + dVar22);
            if ((double)DAT_00969f3c < dVar20) {
              DAT_00969f3c = (float)dVar20;
            }
            break;
          }
          dVar22 = (double)(float)(dVar22 + 0.10000000149011612);
        } while (dVar22 < dVar23);
      }
    }
  }
  iVar15 = g_heroBoardMoby;
  if (((g_heroStateType == 0x15) || (g_heroStateType == 0x16)) && (g_heroBoardMoby != 0)) {
    *(float *)(g_heroBoardMoby + 0x10) = g_heroPosition.x;
    *(float *)(iVar15 + 0x14) = g_heroPosition.y;
    *(float *)(iVar15 + 0x18) = g_heroPosition.z;
    *(float *)(iVar15 + 0x1c) = g_heroPosition.w;
    dVar19 = (double)((g_heroMobyPtr->transform).v0.x * 0.0 + (g_heroMobyPtr->transform).v1.x * 0.0
                     + (g_heroMobyPtr->transform).v2.x * 0.21);
    dVar23 = (double)((g_heroMobyPtr->transform).v0.y * 0.0 + (g_heroMobyPtr->transform).v1.y * 0.0
                     + (g_heroMobyPtr->transform).v2.y * 0.21);
    dVar21 = (double)((g_heroMobyPtr->transform).v0.z * 0.0 + (g_heroMobyPtr->transform).v1.z * 0.0
                     + (g_heroMobyPtr->transform).v2.z * 0.21);
    dVar20 = (double)((g_heroMobyPtr->transform).v0.w * 0.0 + (g_heroMobyPtr->transform).v1.w * 0.0
                      + (g_heroMobyPtr->transform).v2.w * 0.21 + 0.0);
    fastfunc::FastEulerToMtx1(uVar12 - 0x110,&DAT_00721c10);
    iVar15 = g_heroBoardMoby;
    fVar1 = *(float *)((int)puVar9 + 0x104);
    fVar8 = *(float *)((int)puVar9 + 0x114);
    fVar2 = *(float *)(puVar9 + 0x21);
    fVar3 = *(float *)(puVar9 + 0x23);
    fVar4 = *(float *)((int)puVar9 + 0x124);
    fVar5 = *(float *)(puVar9 + 0x25);
    fVar6 = *(float *)((int)puVar9 + 0x134);
    fVar7 = *(float *)(puVar9 + 0x27);
    *(float *)(g_heroBoardMoby + 0x10) =
         *(float *)(g_heroBoardMoby + 0x10) +
         (float)((double)*(float *)(puVar9 + 0x20) * dVar19) +
         (float)((double)*(float *)(puVar9 + 0x22) * dVar23) +
         (float)((double)*(float *)(puVar9 + 0x24) * dVar21) +
         (float)((double)*(float *)(puVar9 + 0x26) * dVar20);
    *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(iVar15 + 0x1c);
    *(float *)(iVar15 + 0x14) =
         *(float *)(iVar15 + 0x14) +
         (float)((double)fVar1 * dVar19) + (float)((double)fVar8 * dVar23) +
         (float)((double)fVar4 * dVar21) + (float)((double)fVar6 * dVar20);
    *(float *)(iVar15 + 0x18) =
         *(float *)(iVar15 + 0x18) +
         (float)((double)fVar2 * dVar19) + (float)((double)fVar3 * dVar23) +
         (float)((double)fVar5 * dVar21) + (float)((double)fVar7 * dVar20);
    fastfunc::FastMtxCopyNoTranslate(uVar12 - 0x150,&g_heroMobyPtr->transform);
    fastfunc::FastVecMtx4Mul(uVar12 - 0xd0,uVar12 - 0x150,uVar12 - 0x110);
    fastfunc::FastApplyTransform((Vec4 *)(g_heroBoardMoby + 0xc0),(Vec4 *)(uVar12 - 0xd0));
  }
  return;
}



//==== 0008b640  ns=hero  size=0x48
// sig: float Hero_GetPadMagnitude(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_GetPadMagnitude(void)

{
  float fVar1;
  
  fVar1 = SQRT(g_heroPadStick * g_heroPadStick + DAT_0096ba04 * DAT_0096ba04);
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  return fVar1;
}



//==== 0008b690  ns=hero  size=0xd4
// sig: int Hero_UseMagneGravity(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_UseMagneGravity(void)

{
  int iVar1;
  
  iVar1 = (int)g_onMagnerail;
  if ((((g_heroState == MAGNERAMP_WAITING) &&
       ((int)g_framesNotGrounded < (int)(animationSpeed * 12.5))) || (g_heroState == MAGNERAMP_JUMP)
      ) || ((g_heroState == MAGNERAMP_ATTACK ||
            (((DAT_0096afc7 != '\0' && (UnlockableItems.magneboots != '\0')) &&
             ((g_heroState == STANDING && ((int)g_framesNotGrounded < (int)(animationSpeed * 4.5))))
             ))))) {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 0008b778  ns=hero  size=0x2d4
// sig: undefined Hero_UpdateMovement(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(7): 00084978 hero::Hero_UpdateCollisionSize; 00087a88 hero::Hero_UpdateTimers; 0008af28 hero::???_Hero_UpdateGroundProbe; 000aaec0 hero::HandleHeroMovement; 00500af8 fastfunc::FastMtx4Identity; 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4

void hero::Hero_UpdateMovement(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar4;
  int iVar3;
  
  if (g_heroState == MAGNERAMP_WAITING) {
    if ((int)(animationSpeed * 12.5) <= (int)g_framesNotGrounded) goto LAB_0008b7d8;
  }
  else {
LAB_0008b7d8:
    if ((g_heroState != MAGNERAMP_JUMP) && (g_heroState != MAGNERAMP_ATTACK)) {
      uVar4 = g_onMagnerail;
      if ((DAT_0096afc7 == '\0') ||
         ((UnlockableItems.magneboots == '\0' || (g_heroState != STANDING)))) goto LAB_0008b844;
      if ((int)(animationSpeed * 4.5) <= (int)g_framesNotGrounded) goto LAB_0008b844;
    }
  }
  uVar4 = 1;
LAB_0008b844:
  g_heroGravityMode = (undefined1)uVar4;
  g_heroPadMagnitude = SQRT(g_heroPadStick * g_heroPadStick + DAT_0096ba04 * DAT_0096ba04);
  if (1.0 < g_heroPadMagnitude) {
    g_heroPadMagnitude = 1.0;
  }
  DAT_00969f20 = 0;
  g_heroPadStick = ANALOG_STICKS.z;
  DAT_0096ba04 = ANALOG_STICKS.w;
  if (SQRT(ANALOG_STICKS.z * ANALOG_STICKS.z + ANALOG_STICKS.w * ANALOG_STICKS.w) < 0.25) {
    g_heroPadStick =
         (float)(longlong)
                (int)(((uint)LZCOUNT(pad_DownButtons & 0x2000) >> 5 ^ 1) -
                     ((uint)LZCOUNT(pad_DownButtons & 0x8000) >> 5 ^ 1));
    DAT_0096ba04 = (float)(longlong)
                          (int)(((uint)LZCOUNT(pad_DownButtons & 0x4000) >> 5 ^ 1) -
                               ((uint)LZCOUNT(pad_DownButtons & 0x1000) >> 5 ^ 1));
  }
  HandleHeroMovement();
  uVar2 = g_heroRotZHistoryIdx + 1;
  iVar1 = g_heroRotZHistoryIdx * 4;
  iVar3 = g_heroRotZHistoryCount + 1;
  g_heroRotZHistoryIdx =
       uVar2 + (((int)uVar2 >> 5) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1f) != 0)) * -0x20;
  *(float *)(&g_heroRotZHistory + iVar1) = g_heroRotation.z;
  g_heroRotZHistoryCount = 0x20;
  if (iVar3 < 0x21) {
    g_heroRotZHistoryCount = iVar3;
  }
  iVar1 = g_heroPosHistoryIdx * 0x10;
  uVar2 = g_heroPosHistoryIdx + 1;
  iVar3 = g_heroPosHistoryCount + 1;
  *(float *)(&g_heroPosHistory + iVar1) = g_heroPosition.x;
  g_heroPosHistoryIdx =
       uVar2 + (((int)uVar2 >> 5) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1f) != 0)) * -0x20;
  *(float *)(iVar1 + 0x96b7e4) = g_heroPosition.y;
  *(float *)(iVar1 + 0x96b7e8) = g_heroPosition.z;
  *(float *)(iVar1 + 0x96b7ec) = g_heroPosition.w;
  g_heroPosHistoryCount = 0x20;
  if (iVar3 < 0x21) {
    g_heroPosHistoryCount = iVar3;
  }
  fastfunc::FastEulerToMtx1(&g_heroMtx,&g_heroRotation);
  fastfunc::FastMtx4Identity((float *)&g_heroGravityMtx);
  fastfunc::FastNormalizeRMtx4(&g_heroGravityMtx,&g_heroMtx);
  Hero_UpdateCollisionSize();
  ____Hero_UpdateGroundProbe();
  Hero_UpdateTimers();
  return;
}



//==== 0008ba4c  ns=hero  size=0xa4
// sig: undefined Hero_SyncBoardAnimSpeed(void)
// callers(0): 
// callees(0): 

void hero::Hero_SyncBoardAnimSpeed(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  
  if ((DAT_0096bf58 != 0) && (DAT_0096bf5c != (short *)0x0)) {
    if (DAT_0096bf5c == (short *)0x0) {
      bVar2 = false;
    }
    else {
      iVar3 = 0;
      bVar2 = false;
      sVar1 = *DAT_0096bf5c;
      while (sVar1 != -1) {
        if ((ushort)g_heroMobyPtr->animationId == DAT_0096bf5c[iVar3 * 2]) {
          bVar2 = true;
          break;
        }
        iVar3 = iVar3 + 1;
        sVar1 = DAT_0096bf5c[iVar3 * 2];
      }
    }
    if (bVar2) {
      *(undefined4 *)(DAT_0096bf58 + 0x58) = g_heroAnimSpeed;
    }
  }
  return;
}



//==== 0008baf0  ns=hero  size=0x88
// sig: undefined Hero_SyncBackpackAnimSpeed(void)
// callers(0): 
// callees(1): 00084f5c hero::Hero_GetBackpackAnim

void hero::Hero_SyncBackpackAnimSpeed(void)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  
  if (((g_heroType == '\0') && (DAT_0096ae84 == 2)) &&
     (iVar1 = Hero_GetBackpackAnim((ushort)g_heroMobyPtr->animationId,&iStack_10,&iStack_c),
     iVar1 != 0)) {
    if (DAT_0096ae60 != 0) {
      *(undefined4 *)(DAT_0096ae60 + 0x58) = g_heroAnimSpeed;
    }
    if (DAT_0096ae64 != 0) {
      *(undefined4 *)(DAT_0096ae64 + 0x58) = g_heroAnimSpeed;
    }
  }
  return;
}



//==== 0008bb78  ns=hero  size=0x9c
// sig: undefined Hero_SyncBoardAnimFrame(void)
// callers(1): 0008bc30 hero::Hero_UpdateAnim
// callees(0): 

void hero::Hero_SyncBoardAnimFrame(void)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  MobyInstance *pMVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_0096bf58;
  pMVar4 = g_heroMobyPtr;
  if (DAT_0096bf58 != 0) {
    piVar3 = (int *)(DAT_0096bf58 + 0x24);
    *(undefined4 *)(DAT_0096bf58 + 0x5c) = DAT_0096a774;
    iVar6 = *piVar3 + 0x48;
    *(float *)(iVar5 + 0x54) = pMVar4->animationBlend;
    bVar1 = pMVar4->animationFrame;
    *(byte *)(iVar5 + 0x50) = bVar1;
    bVar2 = pMVar4->animationFrame;
    *(byte *)(iVar5 + 0x51) = bVar2;
    *(undefined4 *)(iVar5 + 0x68) =
         *(undefined4 *)
          (*(int *)(iVar6 + (uint)*(byte *)(iVar5 + 0x52) * 4) + 0x1c + (uint)bVar1 * 4);
    *(undefined4 *)(iVar5 + 0x6c) =
         *(undefined4 *)
          (*(int *)(iVar6 + (uint)*(byte *)(iVar5 + 0x53) * 4) + 0x1c + (uint)bVar2 * 4);
  }
  return;
}



//==== 0008bc30  ns=hero  size=0x72c
// sig: undefined Hero_UpdateAnim(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(6): 00084f5c hero::Hero_GetBackpackAnim; 0008bb78 hero::Hero_SyncBoardAnimFrame; 000efe40 mobyfunc::BlendAnimFrame; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00502758 fastfunc::FastDoubleToInt

void hero::Hero_UpdateAnim(void)

{
  float fVar1;
  u8 uVar2;
  u8 uVar3;
  byte bVar4;
  short sVar5;
  float *pfVar6;
  char *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  MobyInstance *pMoby;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  byte bVar18;
  int iVar17;
  double dVar19;
  double dVar20;
  double dVar21;
  int iStack_80;
  int aiStack_7c [3];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  longlong local_60;
  
  pMoby = g_heroMobyPtr;
  bVar8 = false;
  DAT_0096bf58 = 0;
  DAT_0096bf5c = (short *)0x0;
  if ((g_heroBoardMoby != 0) && ((g_heroStateType == 0x15 || (g_heroStateType == 0x16)))) {
    DAT_0096bf58 = g_heroBoardMoby;
    DAT_0096bf5c = &DAT_00723160;
  }
  dVar21 = (double)g_heroMobyPtr->animationBlend;
  DAT_0096a778 = DAT_0096a778 & 0xfffffffc;
  uVar2 = g_heroMobyPtr->updateId;
  uVar3 = g_heroMobyPtr->animationId;
  bVar4 = g_heroMobyPtr->previousAnimationFrame;
  if (uVar2 == uVar3) {
    fVar1 = (float)(dVar21 + (double)(g_heroAnimSpeed * DAT_0096a774));
  }
  else if (DAT_0096a780 < 0) {
    fVar1 = (float)(dVar21 + (double)DAT_0096a774);
  }
  else {
    iVar15 = DAT_0096a784 * 4;
    DAT_0096a784 = DAT_0096a784 + 1;
    fVar1 = *(float *)(iVar15 + 0x723358 + DAT_0096a780 * 100);
  }
  g_heroMobyPtr->animationBlend = fVar1;
  if ((0.99 < fVar1) && (fVar1 < 1.01)) {
    pMoby->animationBlend = 1.0;
  }
  if ((-0.01 < pMoby->animationBlend) && (pMoby->animationBlend < 0.01)) {
    pMoby->animationBlend = 0.0;
  }
  iVar15 = 8;
  dVar19 = (double)(float)((double)pMoby->animationBlend - dVar21);
  dVar20 = 1.0;
  if (1.0 <= (double)pMoby->animationBlend) {
    do {
      bVar18 = pMoby->animationId;
      if (pMoby->updateId != bVar18) {
        pMoby->updateId = bVar18;
        pMoby->unk7e = *(char *)(*(int *)(&pMoby->pClass->type + (uint)bVar18 * 4) + 0x12);
      }
      uVar9 = DAT_0096a778;
      DAT_0096a778 = DAT_0096a778 | 1;
      DAT_0096a780 = -1;
      pfVar6 = (float *)pMoby->pCurrentAnimationData;
      bVar18 = pMoby->animationFrame + 1;
      pMoby->previousAnimationFrame = pMoby->animationFrame;
      pMoby->pPreviousAnimationData = pfVar6;
      pMoby->animationFrame = bVar18;
      uVar12 = DAT_0096a794;
      uVar11 = DAT_0096a790;
      if (DAT_0096a798 == 0) {
        if ((DAT_0096a790 == 0xffffffff) || ((int)(uint)bVar18 <= (int)DAT_0096a794)) {
          pcVar7 = &pMoby->pClass->type + (uint)pMoby->animationId * 4;
          if (*(byte *)(*(int *)pcVar7 + 0x10) <= bVar18) {
            DAT_0096a778 = uVar9 | 3;
            pMoby->animationFrame = '\0';
          }
          fVar1 = (float)((double)pMoby->animationBlend - dVar20) / DAT_0096a774;
          pMoby->pCurrentAnimationData =
               *(void **)(*(int *)pcVar7 + 0x1c + (uint)(byte)pMoby->animationFrame * 4);
          pMoby->animationBlend = fVar1;
          DAT_0096a774 = *pfVar6;
          pMoby->animationBlend = fVar1 * DAT_0096a774;
        }
        else {
          DAT_0096a774 = 0.33333334;
          pMoby->animationBlend = 0.0;
          pMoby->animationFrame = (char)uVar11;
          pMoby->pCurrentAnimationData =
               *(void **)(*(int *)(&pMoby->pClass->type + (uint)pMoby->animationId * 4) + 0x1c +
                         (uVar11 & 0xff) * 4);
          Hero_SyncBoardAnimFrame();
        }
      }
      else {
        local_60 = (longlong)DAT_0096a798;
        local_70 = (float)(dVar20 / (double)local_60);
        uVar9 = DAT_0096a794 & 0xff;
        auVar10._0_4_ = local_70;
        auVar10._4_4_ = local_70;
        auVar10._8_4_ = local_70;
        auVar10._12_4_ = local_70;
        DAT_0096a774 = (float)storeVectorElementWordIndexed(auVar10,0xa94,0x969ce0);
        pMoby->animationBlend = 0.0;
        pMoby->animationFrame = (char)uVar12;
        DAT_0096a790 = 0xffffffff;
        pMoby->pCurrentAnimationData =
             *(void **)(*(int *)(&pMoby->pClass->type + (uint)pMoby->animationId * 4) + 0x1c +
                       uVar9 * 4);
        DAT_0096a798 = 0;
        local_6c = local_70;
        local_68 = local_70;
        local_64 = local_70;
        Hero_SyncBoardAnimFrame();
      }
      iVar15 = iVar15 + -1;
      if (iVar15 == 0) break;
      if (dVar20 < (double)pMoby->animationBlend) {
        pMoby->animationBlend = 1.0;
      }
    } while (dVar20 <= (double)pMoby->animationBlend);
  }
  if ((uVar2 == uVar3) && (pMoby->unk7e != '\0')) {
    dVar20 = 16.0;
    iVar13 = fastfunc::FastDoubleToInt((double)(pMoby->animationBlend * 16.0));
    bVar18 = pMoby->previousAnimationFrame;
    iVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar21 * dVar20));
    iVar17 = 0;
    iVar15 = *(int *)(&pMoby->pClass->type + (uint)pMoby->updateId * 4);
    psVar16 = (short *)(iVar15 + 0x1c + (uint)*(byte *)(iVar15 + 0x10) * 4);
    if (*(char *)(iVar15 + 0x12) != '\0') {
      do {
        if ((int)((uint)bVar4 * 0x10 + iVar14) < (int)psVar16[1] &&
            (int)psVar16[1] <= (int)((uint)bVar18 * 0x10 + iVar13)) {
          sound::PlayMobySound((int)*psVar16,0,pMoby);
          break;
        }
        iVar17 = iVar17 + 1;
        psVar16 = psVar16 + 2;
      } while (iVar17 < (int)(uint)*(byte *)(iVar15 + 0x12));
    }
  }
  bVar4 = pMoby->unk7d;
  if (bVar4 == 0xff) {
    if ((((byte)pMoby->unk7c != 0xff) && (g_gameMode != GAME_MODE_SCENE)) &&
       (g_gameMode != GAME_MODE_SPACE)) {
      iVar15 = sound::PlayMobySound((uint)(byte)pMoby->unk7c,4,pMoby);
      pMoby->unk7d = (char)iVar15;
    }
  }
  else if (sound::g_SoundChannels[bVar4].pMoby == pMoby) {
    if (sound::g_SoundChannels[bVar4].sound_index != (ushort)(byte)pMoby->unk7c) {
      sound::sound_Kill((uint)bVar4);
      pMoby->unk7d = -1;
    }
  }
  else {
    pMoby->unk7d = -1;
  }
  if (((g_heroType == '\0') && (DAT_0096ae84 == 2)) &&
     (iVar15 = Hero_GetBackpackAnim((ushort)g_heroMobyPtr->animationId,&iStack_80,aiStack_7c),
     iVar15 != 0)) {
    if (DAT_0096ae60 != 0) {
      *(float *)(DAT_0096ae60 + 0x58) = g_heroAnimSpeed;
    }
    if (DAT_0096ae64 != 0) {
      *(float *)(DAT_0096ae64 + 0x58) = g_heroAnimSpeed;
    }
  }
  if ((DAT_0096bf58 != 0) && (DAT_0096bf5c != (short *)0x0)) {
    if (DAT_0096bf5c != (short *)0x0) {
      iVar15 = 0;
      sVar5 = *DAT_0096bf5c;
      while (sVar5 != -1) {
        if ((ushort)g_heroMobyPtr->animationId == DAT_0096bf5c[iVar15 * 2]) {
          bVar8 = true;
          break;
        }
        iVar15 = iVar15 + 1;
        sVar5 = DAT_0096bf5c[iVar15 * 2];
      }
    }
    if (bVar8) {
      *(float *)(DAT_0096bf58 + 0x58) = g_heroAnimSpeed;
    }
  }
  dVar20 = (double)g_heroAnimFrame;
  dVar21 = (double)mobyfunc::BlendAnimFrame(pMoby);
  g_heroAnimFrame = (float)dVar21;
  if (dVar20 <= dVar21) {
    dVar19 = (double)(float)(dVar21 - dVar20);
  }
  DAT_0096a78c = (float)dVar19;
  DAT_0096a77c = (uint)LZCOUNT((uint)pMoby->updateId - (uint)pMoby->animationId) >> 5 ^ 1;
  return;
}



//==== 0008c3d0  ns=hero  size=0xf6c
// sig: undefined HeroUpdateNonRatchet(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(30): 0006d720 RegisterFuncForMoby; 0007f608 hero::hero_SetManipulator; 000802a0 hero::Hero_UpdateGlowAndBlink; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 00081048 hero::Hero_UpdateShadow; 00081a10 hero::Hero_UpdateScaleEffect; 00081e38 hero::Hero_MapToMobyNonRatchet; 000821a8 hero::Hero_SetClankBankTwistSway; 000824b0 hero::Hero_CheckLedgeGrab; 00083ac8 hero::Hero_HandleGroundType; 0008b778 hero::Hero_UpdateMovement; 0008bc30 hero::Hero_UpdateAnim; 000be228 hero::HeroMovement; 000e4928 map::Map_RevealAroundPos; 000efa28 mobyfunc::CreateMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fa3a8 mobyfunc::SetMobyLightFromBlender; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 0096c074: 'None'

/* WARNING: Removing unreachable block (ram,0x0008d224) */
/* WARNING: Removing unreachable block (ram,0x0008d2dc) */

void hero::HeroUpdateNonRatchet(void)

{
  float fVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar8;
  MobyInstance *pMVar9;
  Mtx4 *p1;
  int iVar10;
  uint uVar11;
  longlong lVar7;
  int iVar12;
  undefined4 *puVar14;
  undefined8 uVar13;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  Vec4 aVStack_120 [3];
  f32 local_f0;
  f32 local_ec;
  f32 local_e8;
  f32 local_e4;
  Vec4 aVStack_e0 [3];
  f32 local_b0;
  f32 local_ac;
  f32 local_a8;
  f32 local_a4;
  undefined1 auStack_a0 [104];
  
  Hero_UpdateAnim();
  Hero_UpdateMovement();
  Hero_HandleGroundType();
  puVar14 = &g_heroMtx;
  if (g_heroType == '\x01') {
    Hero_CheckLedgeGrab();
    Hero_SetClankBankTwistSway();
  }
  HeroMovement();
  if (g_heroType != '\0') {
    iVar12 = 0;
    iVar10 = 0;
    do {
      iVar8 = fastfunc::FastDecTimerS16(&DAT_0096bebc + iVar10);
      if (iVar8 == 2) {
        sVar2 = *(short *)((int)puVar14 + 0x21da);
        sVar3 = *(short *)((int)puVar14 + 0x21de);
        *(undefined2 *)(puVar14 + 0x876) = 0;
        pMVar9 = g_ratchetMoby;
        if (g_heroType == '\x03') {
          if (g_ratchetMoby != (MobyInstance *)0x0) {
            (g_ratchetMoby->pos).x = g_heroPosition.x;
            (pMVar9->pos).y = g_heroPosition.y;
            (pMVar9->pos).z = g_heroPosition.z;
            (pMVar9->pos).w = g_heroPosition.w;
            sound::PlayMobySound((int)sVar2,(int)sVar3,pMVar9);
          }
        }
        else {
          sound::PlayMobySound((int)sVar2,(int)sVar3,g_heroMobyPtr);
        }
      }
      iVar12 = iVar12 + 1;
      puVar14 = puVar14 + 2;
      iVar10 = iVar10 + 8;
    } while (iVar12 < 8);
    iVar12 = 0;
    iVar10 = 0;
    do {
      hero_SetManipulator(&g_heroTweakers + iVar10);
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0xb0;
    } while (iVar12 < 0x1f);
    if (g_heroType != '\0') {
      Hero_MapToMobyNonRatchet();
      if (DAT_00a1a848 != 0) {
        if (DAT_00a1a84c == 0) {
          dVar17 = 1.0;
          mobyutil::Delt(1.0,DAT_00720bbc,&boot::SceneScreenFade);
          if ((double)boot::SceneScreenFade == dVar17) {
            DAT_00a1a84c = 1;
          }
        }
        else if (DAT_00a1a84c == 1) {
          DAT_00a1a84c = 2;
        }
        else if (DAT_00a1a84c == 2) {
          dVar17 = 0.0;
          mobyutil::Delt(0.0,DAT_00720bbc,&boot::SceneScreenFade);
          if ((double)boot::SceneScreenFade == dVar17) {
            DAT_00a1a848 = 0;
          }
        }
      }
      Hero_UpdateScaleEffect();
      if (g_heroType == '\x01') {
        DAT_00722dac = FLOAT_0071fb54;
        Hero_UpdateGlowAndBlink();
        if ((DAT_0096b304 == (MobyInstance *)0x0) &&
           (pMVar9 = mobyfunc::CreateMoby(0x4b4), DAT_0096b304 = pMVar9,
           pMVar9 != (MobyInstance *)0x0)) {
          pMVar9->field60_0x90 = 0x801432d7;
          DAT_0096bfe0 = 0x301432d7;
          (pMVar9->pos).x = g_heroPosition.x;
          (pMVar9->pos).y = g_heroPosition.y;
          (pMVar9->pos).z = g_heroPosition.z;
          (pMVar9->pos).w = g_heroPosition.w;
          (pMVar9->rotation).x = g_heroRotation.x;
          (pMVar9->rotation).y = g_heroRotation.y;
          (pMVar9->rotation).z = g_heroRotation.z;
          (pMVar9->rotation).w = g_heroRotation.w;
          pMVar9->drawDistance = 0x40;
          pMVar9->enabled = '\x01';
          pMVar9->updateDistance = '\0';
          pMVar9->modeBits = HAS_GLOW;
          pMVar9->scale = pMVar9->scale * 1.7;
          mobyfunc::UpdateMobyTransform(pMVar9);
        }
        if ((g_heroMobyPtr->modeBits & DISABLED) == NONE) {
          mobyfunc::GetBonePosition(g_heroMobyPtr,7,&local_150);
          DAT_0096ba60 = local_150;
          DAT_0096ba64 = local_14c;
          DAT_0096ba68 = local_148;
          DAT_0096ba6c = local_144;
          if (DAT_0096bb92 == 0) {
            DAT_0096bb92 = 1;
            RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
          }
          if (DAT_0096b304 != (MobyInstance *)0x0) {
            mobyfunc::GetBoneTransformations(g_heroMobyPtr,7,aVStack_120);
            pMVar9 = DAT_0096b304;
            p1 = &DAT_0096b304->transform;
            (DAT_0096b304->pos).x = local_f0;
            (pMVar9->pos).y = local_ec;
            (pMVar9->pos).z = local_e8;
            (pMVar9->pos).w = local_e4;
            fastfunc::FastApplyTransform(&p1->v0,aVStack_120);
            pMVar9 = DAT_0096b304;
            (DAT_0096b304->pos).z =
                 (DAT_0096b304->pos).z -
                 ((DAT_0096b304->transform).v0.z * 0.0 + (DAT_0096b304->transform).v1.z * 0.0 +
                 (DAT_0096b304->transform).v2.z * 0.0257);
            mobyfunc::UpdateMobyTransform(pMVar9);
            fVar1 = 1.7;
            if (Cheats[3] != '\0') {
              fVar1 = 3.1;
            }
            if (DAT_0096bfdc != 0) {
              fVar1 = fVar1 * 1.4;
            }
            mobyutil::Delt(DAT_0096b304->pClass->gScale * fVar1,0.02,&DAT_0096b304->scale);
          }
        }
        dVar17 = (double)fastfunc::FastWrapRot(DAT_0096b308,mobyutil::g_FrameTime * 2.9670596);
        DAT_0096b308 = (float)dVar17;
        uVar15 = 0x281414c8;
        uVar13 = 0x1e00004b;
        iVar10 = fastfunc::FastDecTimerS16(&DAT_0096bfdc);
        if (iVar10 == 0) {
          dVar17 = (double)fastfunc::FastWrapRot(DAT_0096b308,mobyutil::g_FrameTime * 12.217304);
          DAT_0096b308 = (float)dVar17;
          if (DAT_0096bfde < 3) {
            if (0 < DAT_0096bfde) {
              if (DAT_0096bfde < 2) {
                uVar15 = 0x2814c814;
                uVar13 = 0x1e004b00;
              }
              else {
                uVar15 = 0x2814c8c8;
                uVar13 = 0x1e004b4b;
              }
            }
          }
          else if (DAT_0096bfde < 4) {
            uVar15 = 0x323232fa;
            uVar13 = 0x1e000078;
          }
          else if (DAT_0096bfde < 5) {
            uVar13 = 0x1e4b0000;
            uVar15 = 0x28f01414;
          }
        }
        fVar1 = DAT_0096b308;
        if (3.1415925 - DAT_0096b308 <= DAT_0096b308) {
          fVar1 = 3.1415925 - DAT_0096b308;
        }
        if (fVar1 <= -3.1415925 - DAT_0096b308) {
          fVar1 = -3.1415925 - DAT_0096b308;
        }
        fVar4 = fVar1 * fVar1;
        fVar5 = fVar4 * fVar4 * fVar1;
        fVar6 = fVar4 * fVar5;
        uVar13 = fastfunc::FastLerpColor
                           ((double)((fVar1 + fVar4 * fVar1 * -0.16666657 + fVar5 * 0.0083330255 +
                                      fVar6 * -0.0001980741 + fVar4 * fVar6 * 2.601887e-06) * 0.5 +
                                    0.5),uVar15,uVar13);
        if (DAT_0096b304 != (MobyInstance *)0x0) {
          uVar11 = fastfunc::FastLerpColor
                             ((double)(DAT_0071f408 * 0.1),DAT_0096b304->field60_0x90,uVar13);
          DAT_0096b304->field60_0x90 = uVar11;
        }
        DAT_0096bfe0 = fastfunc::FastLerpColor((double)(DAT_0071f408 * 0.1),DAT_0096bfe0,uVar13);
        if ((DAT_0096b300 == (MobyInstance *)0x0) &&
           (pMVar9 = mobyfunc::CreateMoby(HELIPACK_047A), DAT_0096b300 = pMVar9,
           pMVar9 != (MobyInstance *)0x0)) {
          (pMVar9->pos).x = g_heroPosition.x;
          (pMVar9->pos).y = g_heroPosition.y;
          (pMVar9->pos).z = g_heroPosition.z;
          (pMVar9->pos).w = g_heroPosition.w;
          (pMVar9->rotation).x = g_heroRotation.x;
          (pMVar9->rotation).y = g_heroRotation.y;
          (pMVar9->rotation).z = g_heroRotation.z;
          (pMVar9->rotation).w = g_heroRotation.w;
          pMVar9->drawDistance = 0x40;
          pMVar9->enabled = '\x01';
          pMVar9->updateDistance = '\0';
          pMVar9->modeBits = NONE;
          mobyfunc::UpdateMobyTransform(pMVar9);
        }
        if (DAT_0096b300 != (MobyInstance *)0x0) {
          mobyfunc::GetBoneTransformations(g_heroMobyPtr,5,aVStack_e0);
          pMVar9 = DAT_0096b300;
          (DAT_0096b300->pos).x = local_b0;
          (pMVar9->pos).y = local_ac;
          (pMVar9->pos).z = local_a8;
          (pMVar9->pos).w = local_a4;
          mobyfunc::UpdateMobyTransform(pMVar9);
          fastfunc::FastEulerToMtx1(auStack_a0,local_140);
          fastfunc::FastVecMtx4Mul(aVStack_e0,aVStack_e0,auStack_a0);
          fastfunc::FastApplyTransform(&(DAT_0096b300->transform).v0,aVStack_e0);
          pMVar9 = DAT_0096b300;
          uVar11 = g_heroMobyPtr->light;
          pMVar9->color = g_heroMobyPtr->color;
          pMVar9->light = uVar11;
          if (g_heroState == CLANK_GLIDING) {
            if (pMVar9->animationId != '\x01') {
              mobyutil::MB_SetAnimation(pMVar9,1,0,(int)(animationSpeed * 10.5));
            }
          }
          else if (pMVar9->animationId != '\0') {
            mobyutil::MB_SetAnimation(pMVar9,0,0,(int)(animationSpeed * 17.5));
          }
        }
        if (DAT_0096bfa0 != 0) {
          sound::PlayMobySound(DAT_0096bfa0 + 0x10,0,g_heroMobyPtr);
          DAT_0096bfde = (short)DAT_0096bfa0;
          iVar10 = (int)(animationSpeed * 57.5);
          auVar18._0_4_ = iVar10;
          auVar18._4_4_ = iVar10;
          auVar18._8_4_ = iVar10;
          auVar18._12_4_ = iVar10;
          auVar18 = vectorSplatHalfWord(auVar18,1);
          DAT_0096bfdc = storeVectorElementHalfWordIndexed(auVar18,0x22fc,0x969ce0);
        }
        DAT_0096bfa0 = 0;
      }
      map::Map_RevealAroundPos(&g_heroPosition.x);
      if (g_heroType == '\x02') {
        if (Cheats[3] != '\0') {
          DAT_00722fbc = FLOAT_0071fb54 * 1.4;
        }
        Hero_UpdateGlowAndBlink();
        Hero_AttachRatchetToHeroBone();
        if ((g_heroMobyPtr->modeBits & DISABLED) == NONE) {
          mobyfunc::GetBonePosition(g_heroMobyPtr,6,&local_130);
          DAT_0096ba60 = local_130;
          DAT_0096ba64 = local_12c;
          DAT_0096ba68 = local_128;
          DAT_0096ba6c = local_124;
          if (DAT_0096bb92 == 0) {
            DAT_0096bb92 = 1;
            RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
          }
        }
      }
      if (g_heroType == '\x03') {
        if (Cheats[1] != '\0') {
          DAT_0072311c = 0x3ff33333;
        }
        iVar10 = (int)(animationSpeed * 170.5);
        if (DAT_0096bfc0 == 2) {
          iVar10 = (int)(animationSpeed * 50.5);
        }
        else if (DAT_0096bfc0 == 1) {
          iVar10 = (int)(animationSpeed * 90.5);
        }
        dVar17 = (double)fastfunc::FastIntToDouble(iVar10);
        fVar1 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar10) * iVar10) /
                       dVar17) * 2.0 * 3.1415927 + -3.1415927;
        fVar4 = fVar1;
        if (3.1415925 - fVar1 <= fVar1) {
          fVar4 = 3.1415925 - fVar1;
        }
        if (fVar4 <= -3.1415925 - fVar1) {
          fVar4 = -3.1415925 - fVar1;
        }
        fVar1 = fVar4 * fVar4;
        fVar5 = fVar1 * fVar1 * fVar4;
        fVar6 = fVar1 * fVar5;
        dVar17 = (double)(fVar4 + fVar1 * fVar4 * -0.16666657 + fVar5 * 0.0083330255 +
                          fVar6 * -0.0001980741 + fVar1 * fVar6 * 2.601887e-06);
        iVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 20.0));
        lVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 70.0));
        iVar12 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 10.0));
        uVar11 = iVar10 + 0x32;
        if (0xff < (int)uVar11) {
          uVar11 = 0xff;
        }
        lVar7 = lVar7 + 0xb4;
        if (0xff < (int)lVar7) {
          lVar7 = 0xff;
        }
        g_heroMobyPtr->modeBits = g_heroMobyPtr->modeBits | HAS_GLOW;
        if (DAT_0096bfc0 == 2) {
          uVar11 = (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * 0x100 |
                   (uint)lVar7;
        }
        else {
          uVar11 = (uint)(lVar7 << 8) | uVar11;
        }
        uVar11 = fastfunc::FastLerpColor
                           (0x3fb99999a0000000,g_heroMobyPtr->field60_0x90,
                            uVar11 | (iVar12 + 0x14) * 0x10000 | 0x80000000);
        iVar10 = 0;
        g_heroMobyPtr->field60_0x90 = uVar11;
        do {
          mobyfunc::GetBonePosition(g_heroMobyPtr,iVar10,&DAT_0096ba30 + iVar10 * 0x10);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 3);
        lVar7 = 0x30;
        uVar11 = g_heroMobyPtr->field60_0x90;
        if (DAT_0096bfbe != 0) {
          dVar17 = (double)fastfunc::FastIntToDouble(DAT_0096bfbe);
          dVar16 = (double)fastfunc::FastIntToDouble(0x12);
          lVar7 = fastfunc::FastDoubleToInt((double)((float)(dVar17 / dVar16) * 48.0));
        }
        DAT_0096bfc4 = (uint)(lVar7 << 0x18) | ((int)uVar11 >> 0x10 & 0xffU) << 0x10 |
                       ((int)uVar11 >> 8 & 0xffU) << 8 | uVar11 & 0xff;
        if (DAT_0096bb92 == 0) {
          DAT_0096bb92 = 1;
          RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
        }
        DAT_0096bfc0 = 0;
      }
      pMVar9 = g_ratchetMoby;
      if (g_heroType == '\x03') {
        if ((DAT_0096bd98 == 0) || (DAT_0096bd98 == 0x1f)) {
          DAT_0096bd98 = 0;
          if ((DAT_0096afc7 != '\0') &&
             (((g_framesGroundedCnt != 0 && (UnlockableItems.magneboots != '\0')) &&
              (DAT_0096bfbe == 0)))) {
            if (g_ratchetMoby != (MobyInstance *)0x0) {
              (g_ratchetMoby->pos).x = g_heroPosition.x;
              (pMVar9->pos).y = g_heroPosition.y;
              (pMVar9->pos).z = g_heroPosition.z;
              (pMVar9->pos).w = g_heroPosition.w;
              sound::PlayMobySound(0x19,0,pMVar9);
            }
            DAT_0096bfbe = 0x12;
            DAT_0096bfbc = 1;
          }
        }
        else if (DAT_0096bfbe == 0) {
          if (g_ratchetMoby != (MobyInstance *)0x0) {
            (g_ratchetMoby->pos).x = g_heroPosition.x;
            (pMVar9->pos).y = g_heroPosition.y;
            (pMVar9->pos).z = g_heroPosition.z;
            (pMVar9->pos).w = g_heroPosition.w;
            sound::PlayMobySound(0x19,0,pMVar9);
          }
          DAT_0096bfbe = 0x12;
          DAT_0096bfbc = 1;
        }
      }
      Hero_UpdateShadow();
      mobyfunc::SetMobyLightFromBlender(g_heroMobyPtr);
    }
  }
  return;
}



//==== 0008d33c  ns=hero  size=0x170
// sig: undefined Hero_DisplayHelpMsgs(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(1): 0007b310 help::Help_QueueMessage
// strings: 00a1000c: 'None'

uint hero::Hero_DisplayHelpMsgs(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if ((CHAR_ARRAY_00a1000c._960_2_ != 0) || (UnlockableItems.hydroPack == '\0')) goto LAB_0008d3d4;
  bVar1 = false;
  if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_0008d3b8:
    bVar1 = true;
  }
  else if ((((g_heroState == DEATH_DROWNING) || (g_heroState == DEATH_WATER_LASER)) ||
           (g_heroState == UNDERWATER_DAMAGE)) || (g_heroState == UNK_75)) goto LAB_0008d3b8;
  if (bVar1) {
    help::Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x4E2E,0x78);
  }
LAB_0008d3d4:
  uVar2 = worldUpdateTime;
  if (((0 < (int)worldUpdateTime) && (uVar2 = worldUpdateTime & 0x7f, uVar2 == 0)) &&
     ((uVar2 = (uint)(ushort)CHAR_ARRAY_00a1000c._640_2_, CHAR_ARRAY_00a1000c._640_2_ == 0 &&
      (uVar2 = (uint)(ushort)CHAR_ARRAY_00a0feec._168_2_, CHAR_ARRAY_00a0feec._168_2_ == 0)))) {
    uVar2 = 0;
    iVar3 = 0;
    do {
      if ((((&DAT_00721008)[uVar2 * 0x13] == 0) && (uVar2 != 0x18 && uVar2 != 8)) &&
         ((&UnlockableItems.field0_0x0)[uVar2] != '\0')) {
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x25);
    if (8 < iVar3) {
      uVar2 = help::Help_QueueMessage(STR_DID_YOU_KNOW_YOU_0x4E26,0x50);
    }
  }
  return uVar2;
}



//==== 0008d4b8  ns=hero  size=0x328
// sig: undefined Hero_CheckCheatSequences(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(1): 00112a38 mobyutil::MB_ToastMessage
// strings: 0096c074: 'None'

void hero::Hero_CheckCheatSequences(void)

{
  char cVar1;
  int iVar2;
  int iVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (g_ChallengeMode != 0 || g_goodiesMenuActive != 0) {
    iVar5 = 0;
    if (g_heroStateTimer == (int)(animationSpeed * 15.5)) {
      if (g_heroStateType == 4) {
        if (g_heroState == FLIP_JUMP) {
          if (DAT_0096a130 == 0) {
            iVar5 = 1;
            if (Cheats[4] != '\0') {
              iVar5 = 2;
            }
          }
          else if (DAT_0096a130 == 1) {
            iVar5 = 2;
            if (Cheats[4] != '\0') {
              iVar5 = 1;
            }
          }
          else if (DAT_0096a130 == 3) {
            iVar5 = 3;
          }
        }
        else if (g_heroState == WALL_JUMP) {
          iVar5 = 9;
        }
        else if (g_heroState == HELI_PACK_FWD_JUMP) {
          iVar5 = 10;
        }
        else if (g_heroState == DOUBLE_JUMP) {
          iVar5 = 5;
        }
      }
      else if (g_heroStateType == 6) {
        if (g_heroState == HYPER_STRIKE) {
          iVar5 = 6;
        }
        else if (g_heroState == WRENCH_ATTACK) {
          iVar5 = DAT_0096a740 + 0xc;
        }
        else if (g_heroState == CROUCH_WRENCH_THROW) {
          iVar5 = 4;
        }
      }
      else if (g_heroState == THRUSTER_PACK_BONK_JUMP) {
        iVar5 = 0xb;
      }
    }
    else if (g_heroStateTimer == (int)(animationSpeed * 60.5)) {
      if (g_heroState == CROUCHING) {
        iVar5 = 7;
      }
      else if (g_heroState == FALLING) {
        iVar5 = 8;
      }
    }
    if (iVar5 != 0) {
      puVar7 = &DAT_0096bea4 + DAT_0096beb4;
      DAT_0096beb4 = DAT_0096beb4 + 1;
      *puVar7 = (char)iVar5;
      uVar3 = 0;
      do {
        iVar6 = 0;
        iVar5 = (int)((uVar3 & 0xffffffff) << 4);
        puVar7 = &DAT_00720bc8;
        cVar1 = (&DAT_00720bc8)[iVar5];
        while (cVar1 != '\0') {
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + 1;
          cVar1 = puVar7[iVar5];
        }
        iVar2 = (int)uVar3;
        if (iVar6 != 0) {
          iVar9 = DAT_0096beb4 - iVar6;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 0x10;
          }
          iVar8 = 0;
          if (0 < iVar6) {
            do {
              if ((&DAT_0096bea4)[iVar9] != (&DAT_00720bc8)[iVar5 + iVar8]) {
                iVar8 = -1;
                break;
              }
              iVar10 = iVar9 + 1;
              if (0xf < iVar10) {
                iVar10 = iVar9 + -0xf;
              }
              iVar8 = iVar8 + 1;
              iVar9 = iVar10;
            } while (iVar8 < iVar6);
          }
          if (iVar8 == iVar6) {
            Cheats[iVar2] = (char)((ulonglong)(LZCOUNT((uint)(byte)Cheats[iVar2]) << 0x20) >> 0x25);
            (&DAT_0096c080)[iVar2] = 1;
            uVar4 = 0x4fbf;
            if (Cheats[iVar2] != '\0') {
              uVar4 = 0x4fbe;
            }
            mobyutil::MB_ToastMessage(uVar4,0xffffffffffffffff);
            break;
          }
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      } while (iVar2 + 1 < 0xc);
      if (0xf < DAT_0096beb4) {
        DAT_0096beb4 = 0;
      }
    }
  }
  return;
}



//==== 0008d7e8  ns=hero  size=0x104
// sig: undefined Hero_SetLightsFromMoby(void)
// callers(3): 00145d28 pause::WeaponView_Update; 0014f828 pause::MenuHero_Update; 0016b650 vendor::StartGadgetPickupCutscene
// callees(3): 000f1ea0 mobyutil::MB_SetLights; 000f1f28 mobyfunc::MB_GetLightDirection; 000f2010 mobyfunc::MB_GetLightColor

void hero::Hero_SetLightsFromMoby(undefined8 param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  float local_30;
  float local_2c;
  float local_28;
  
  lVar2 = (ulonglong)*(byte *)(param_2 + 0x3c) + (ulonglong)*(byte *)(param_2 + 0x3d) +
          (ulonglong)*(byte *)(param_2 + 0x3e);
  mobyutil::MB_SetLights
            (param_1,((ulonglong)((lVar2 * 4 + 1) * 0x333 << 0x20) >> 0x2d) +
                     ((ulonglong)((lVar2 * 3 + 1) * 0x333 << 0x20) >> 0x25 & 0x7ffff00),0xc,0xc,0);
  mobyfunc::MB_GetLightDirection(param_2,&DAT_00a1de10);
  mobyfunc::MB_GetLightColor(param_2,&local_30);
  fVar1 = local_30 + local_2c + local_28;
  DAT_00a1de00 = fVar1 * 0.5;
  DAT_00a1de08 = 0;
  DAT_00a1de0c = 0xbe99999a;
  DAT_00a1de04 = fVar1 * 0.4;
  return;
}



//==== 0008d8ec  ns=hero  size=0x74
// sig: undefined Hero_SyncGadgetColors(void)
// callers(0): 
// callees(0): 

void hero::Hero_SyncGadgetColors(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar2 = (int)(lVar4 << 6) + (int)(lVar4 << 4);
      iVar1 = *(int *)((int)&g_currentWeaponMoby + iVar2);
      if (iVar3 == 1) {
        iVar1 = *(int *)((int)&DAT_0096ad74 + iVar2);
      }
      if (iVar1 != 0) {
        *(undefined8 *)(iVar1 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 7);
  return;
}



//==== 0008d970  ns=hero  size=0x364
// sig: undefined Hero_UpdateColorEffects(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(5): 000f1ea0 mobyutil::MB_SetLights; 000f1ec8 mobyfunc::SetColorOfMoby; 000f1ef0 mobyutil::MB_GetLights; 000f1f28 mobyfunc::MB_GetLightDirection; 000f2010 mobyfunc::MB_GetLightColor

void hero::Hero_UpdateColorEffects(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  MobyInstance *pMVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float local_60;
  float local_5c;
  float local_58;
  int local_50;
  int local_4c;
  int local_48 [8];
  
  if (DAT_0096bfd4 != 0) {
    lVar8 = ((ulonglong)DAT_0096bfd8 & 0xff) - 7;
    iVar6 = (int)DAT_0096bfd8 >> 0x18;
    if ((int)lVar8 < 0) {
      lVar8 = 0;
    }
    lVar9 = ((ulonglong)(uint)((int)DAT_0096bfd8 >> 8) & 0xff) - 7;
    if ((int)lVar9 < 0) {
      lVar9 = 0;
    }
    lVar7 = ((ulonglong)(uint)((int)DAT_0096bfd8 >> 0x10) & 0xff) - 7;
    if ((int)lVar7 < 0) {
      lVar7 = 0;
    }
    mobyfunc::SetColorOfMoby(g_heroMobyPtr,lVar8,lVar9,lVar7);
    DAT_0096bfd8 = iVar6 << 0x18 | (uint)(lVar7 << 0x10) | (uint)(lVar9 << 8) | (uint)lVar8;
  }
  bVar4 = false;
  if ((g_heroState == DEATH_LASER) || (g_heroState == DEATH_WATER_LASER)) {
    if ((int)g_heroStateTimer < (int)(animationSpeed * 30.5)) {
      bVar4 = true;
    }
  }
  if (((Level == Quartu) || (Level == Fleet)) && (g_heroState == UNDERWATER_DAMAGE)) {
    if ((int)g_heroStateTimer < (int)(animationSpeed * 20.5)) {
      bVar4 = true;
    }
  }
  if (bVar4) {
    mobyutil::MB_GetLights(g_heroMobyPtr,&local_50,&local_4c,local_48);
    if ((int)(g_heroStateTimer +
             (((int)g_heroStateTimer >> 2) +
             (uint)((int)g_heroStateTimer < 0 && (g_heroStateTimer & 3) != 0)) * -4) < 3) {
      local_50 = 0;
      local_4c = 0;
      local_48[0] = 0;
    }
    else {
      local_50 = 0x90;
      local_4c = 0x90;
      local_48[0] = 0xf0;
    }
    mobyfunc::SetColorOfMoby
              (g_heroMobyPtr,(longlong)local_50,(longlong)local_4c,(longlong)local_48[0]);
    lVar8 = 0;
    do {
      iVar6 = 0;
      do {
        iVar3 = (int)(lVar8 << 6) + (int)(lVar8 << 4);
        iVar1 = *(int *)((int)&g_currentWeaponMoby + iVar3);
        if (iVar6 == 1) {
          iVar1 = *(int *)((int)&DAT_0096ad74 + iVar3);
        }
        if (iVar1 != 0) {
          *(undefined8 *)(iVar1 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < 7);
  }
  pMVar5 = g_heroMobyPtr;
  if (((-1 < g_CurrentWeapon) && ((&g_goldWeaponsArray.field0_0x0)[g_CurrentWeapon] != '\0')) &&
     (g_currentWeaponMoby != (MobyInstance *)0x0)) {
    lVar8 = (ulonglong)*(byte *)&g_heroMobyPtr->light +
            (ulonglong)*(byte *)((int)&g_heroMobyPtr->light + 1) +
            (ulonglong)*(byte *)((int)&g_heroMobyPtr->light + 2);
    mobyutil::MB_SetLights
              (g_currentWeaponMoby,
               ((ulonglong)((lVar8 * 4 + 1) * 0x333 << 0x20) >> 0x2d) +
               ((ulonglong)((lVar8 * 3 + 1) * 0x333 << 0x20) >> 0x25 & 0x7ffff00),0xc,0xc,0);
    mobyfunc::MB_GetLightDirection(pMVar5,&DAT_00a1de10);
    mobyfunc::MB_GetLightColor(pMVar5,&local_60);
    fVar2 = local_60 + local_5c + local_58;
    DAT_00a1de00 = fVar2 * 0.5;
    DAT_00a1de08 = 0;
    DAT_00a1de04 = fVar2 * 0.4;
    DAT_00a1de0c = 0xbe99999a;
  }
  return;
}



//==== 0008dcd4  ns=hero  size=0x48
// sig: undefined ???_Hero_GetSoundForLevel(void)
// callers(0): 
// callees(0): 

undefined8 hero::____Hero_GetSoundForLevel(int param_1)

{
  if (param_1 < 2) {
    if (0 < param_1) {
      return 0x79;
    }
  }
  else {
    if (param_1 < 3) {
      return 0x77;
    }
    if (param_1 < 4) {
      return 0x75;
    }
  }
  return 0;
}



//==== 0008dd38  ns=hero  size=0x3bc
// sig: undefined Hero_UpdateOverlayAnimLayer(void)
// callers(2): 0008f3c4 hero::Hero_UpdateAnimLayers; 000954c8 hero::HeroUpdate
// callees(7): 000f0854 mobyfunc::MB_AllocAnimLayer; 000f0900 mobyfunc::MB_FreeAnimLayer; 000f0b38 mobyfunc::MB_UpdateAnimLayer; 000f0dd8 mobyfunc::MB_StartAnimLayer; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00109af0 mobyutil::Delt; 00502730 fastfunc::FastIntToDouble

void hero::Hero_UpdateOverlayAnimLayer(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  bVar2 = false;
  dVar6 = 1.0;
  cVar4 = '\0';
  dVar7 = dVar6;
  if (DAT_0096bf54 != (MobyInstance *)0x0) {
    iVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(DAT_0096bf54);
    bVar2 = true;
    cVar4 = 'y';
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x3c) != '\0')) {
      bVar1 = *(byte *)(iVar3 + 0x3c);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
LAB_0008de14:
          cVar4 = '\0';
        }
      }
      else if (bVar1 < 3) {
        cVar4 = 'w';
      }
      else {
        if (3 < bVar1) goto LAB_0008de14;
        cVar4 = 'u';
      }
      if (g_heroStateType == 1) {
        dVar6 = 0.699999988079071;
      }
    }
  }
  if (DAT_00969ebc == 0) goto LAB_0008de8c;
  if (DAT_0096bfae < 2) {
    if (DAT_0096bfae < 1) {
LAB_0008de84:
      cVar4 = '\0';
    }
    else {
      cVar4 = 'y';
    }
  }
  else if (DAT_0096bfae < 3) {
    cVar4 = 'w';
  }
  else {
    if (3 < DAT_0096bfae) goto LAB_0008de84;
    cVar4 = 'u';
  }
  bVar2 = true;
LAB_0008de8c:
  if (g_heroHealth == 1) {
    bVar2 = true;
    if ((((g_heroMobyPtr->animationId == 'T') || (g_heroMobyPtr->animationId == 0x82)) ||
        (g_heroMobyPtr->animationId == 'Z')) && (DAT_0096a77c == 0)) {
      bVar2 = false;
    }
    cVar4 = '{';
    dVar6 = 0.800000011920929;
  }
  if ((g_heroStateType == 0x11) && (UnlockableItems.o2Mask == '\0')) {
    bVar2 = true;
    cVar4 = 'x';
    dVar6 = (double)fastfunc::FastIntToDouble(g_Oxygen);
    dVar5 = (double)fastfunc::FastIntToDouble(10000);
    dVar6 = (double)((float)(dVar7 - (double)(float)(dVar6 / dVar5)) + 0.25);
    if (dVar7 < dVar6) {
      dVar6 = dVar7;
    }
  }
  iVar3 = -1;
  if (DAT_0096ad94 == 2) {
    iVar3 = g_CurrentWeapon;
  }
  if (((iVar3 == 0x10) || (iVar3 == 0x13 || iVar3 == 0xf)) && (DAT_0096bd88 != '\0')) {
    bVar2 = true;
    cVar4 = 'v';
    dVar6 = 0.800000011920929;
  }
  if ((bVar2) && (DAT_0096a9f0 == (MobyInstance *)0x0)) {
    DAT_0096a9f0 = (MobyInstance *)mobyfunc::MB_AllocAnimLayer(g_heroMobyPtr,0x18);
    (DAT_0096a9f0->bSphere).z = 0.0;
  }
  else if ((!bVar2) && (DAT_0096a9f0 != (MobyInstance *)0x0)) {
    dVar7 = 0.0;
    fVar8 = mobyutil::Delt(0.0,DAT_0071f408 * 0.05,&(DAT_0096a9f0->bSphere).z);
    if ((double)fVar8 == dVar7) {
      mobyfunc::MB_FreeAnimLayer(g_heroMobyPtr,&DAT_0096a9f0);
    }
  }
  if (bVar2 && DAT_0096a9f0 != (MobyInstance *)0x0) {
    mobyutil::Delt((float)dVar6,DAT_0071f408 * 0.05,&(DAT_0096a9f0->bSphere).z);
    if (DAT_0096a9f0->alpha == cVar4) {
      mobyfunc::MB_UpdateAnimLayer(ZEXT48(g_heroMobyPtr),DAT_0096a9f0);
    }
    else {
      mobyfunc::MB_StartAnimLayer
                (g_heroMobyPtr,ZEXT48(DAT_0096a9f0),cVar4,0,(int)(animationSpeed * 8.5),1);
    }
  }
  return;
}



//==== 0008e0f4  ns=hero  size=0x5c
// sig: int Hero_GetWeaponAmmo(int weapon)
// callers(12): 00142784 pause::MenuButton_Update; 0024fd10 mobyupdate_unsorted::UpdateMoby_1342; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002d2780 mobyupdate_unsorted::UpdateMoby_190; 002db020 mobyupdate_unsorted::UpdateMoby_192; 002fd398 mobyupdate_unsorted::UpdateMoby_229; 003892e8 mobyupdate_unsorted::UpdateMoby_454; 0039ac10 mobyupdate_helpers::M479_0039ac10; 003b7c48 mobyupdate_unsorted::UpdateMoby_562
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetWeaponAmmo(int weapon)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)weapon;
  if (weapon == -1) {
    uVar1 = (ulonglong)g_CurrentWeapon;
  }
  if (*(short *)((int)&DAT_00737d3e + (int)(uVar1 << 3) * 3) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)((int)&currentAmmoArray.field0_0x0 + (int)(uVar1 << 2));
  }
  return iVar2;
}



//==== 0008e170  ns=hero  size=0x954
// sig: undefined Hero_UpdateFiringAnimLayer(void)
// callers(2): 0008f3c4 hero::Hero_UpdateAnimLayers; 000954c8 hero::HeroUpdate
// callees(8): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 000f0900 mobyfunc::MB_FreeAnimLayer; 000f0b38 mobyfunc::MB_UpdateAnimLayer; 000f0dd8 mobyfunc::MB_StartAnimLayer; 00109af0 mobyutil::Delt; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

double hero::Hero_UpdateFiringAnimLayer(void)

{
  float fVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  MobyInstance *pMVar11;
  char cVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  longlong lVar14;
  longlong lVar15;
  uint uVar18;
  int iVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  float fVar21;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x100;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar13;
  puVar7[0x22] = in_LR;
  puVar7[0x1c] = unaff_r28;
  puVar7[0x1d] = unaff_r29;
  cVar12 = DAT_0096bd88;
  puVar7[0x1f] = unaff_r31;
  puVar7[0x1e] = unaff_r30;
  puVar7[0x1b] = unaff_r27;
  puVar7[0x1a] = unaff_r26;
  puVar7[0x19] = unaff_r25;
  if ((cVar12 != '\0') && (DAT_0096bd8a != '\0')) {
    if ((&DAT_00737d3e)[g_CurrentWeapon * 0xc] == 0) {
      uVar18 = 1;
    }
    else {
      uVar18 = (&currentAmmoArray.field0_0x0)[g_CurrentWeapon];
    }
    if ((uVar18 == 0) && (cVar12 != '\0')) {
      if (DAT_0096a9e8 == 0) {
        if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
          iVar16 = Hero_GetIdleAnim(0);
          Hero_TransAnim(-2.0,iVar16,0);
        }
      }
      else {
        DAT_0096a9f4 = 1;
      }
      DAT_0096bd88 = '\0';
      DAT_0096bd8a = '\0';
    }
  }
  iVar19 = 0;
  iVar16 = 0;
  do {
    pMVar11 = g_heroMobyPtr;
    if ((&DAT_0096a9e8)[iVar19] != 0) {
      iVar17 = -1;
      if (DAT_0096ad94 == 2) {
        iVar17 = g_CurrentWeapon;
      }
      if (iVar17 == DAT_0096bf78) {
        uVar18 = *(uint *)(&DAT_00721028 + iVar17 * 0x4c);
        if (g_heroStateType == 0xc) {
          uVar18 = (&DAT_0072102c)[iVar17 * 0x13];
        }
        if ((uVar18 != 0xffffffff) && (*(byte *)((&DAT_0096a9e8)[iVar19] + 0x23) != uVar18)) {
          uVar2 = (&DAT_0096a9e8)[iVar19];
          DAT_0096bf74 = uVar18;
          puVar7[0x16] = (longlong)(int)(animationSpeed * 8.5);
          mobyfunc::MB_StartAnimLayer
                    (pMVar11,(ulonglong)uVar2,(char)uVar18,0,*(undefined4 *)((int)puVar7 + 0xb4),1);
        }
      }
      mobyfunc::MB_UpdateAnimLayer(ZEXT48(g_heroMobyPtr),(MobyInstance *)(&DAT_0096a9e8)[iVar19]);
      if (DAT_0096a9f4 == 0) {
        fVar21 = mobyutil::Delt(1.0,DAT_0071f408 * 0.2,(float *)((&DAT_0096a9e8)[iVar19] + 8));
        if (((*(byte *)((&DAT_0096a9e8)[iVar19] + 5) & 2) != 0) && (DAT_0096bd8a == '\0')) {
          DAT_0096a9f4 = 1;
          *(undefined4 *)((&DAT_0096a9e8)[iVar19] + 0x28) = 0;
          DAT_0096bd88 = 0;
          return (double)fVar21;
        }
      }
      else {
        if (DAT_0096a9f4 == 2) {
          mobyutil::Delt(0.0,DAT_0071f408 * 0.25,(float *)((&DAT_0096a9e8)[iVar19] + 8));
        }
        else {
          mobyutil::Delt(0.0,DAT_0071f408 * 0.07,(float *)((&DAT_0096a9e8)[iVar19] + 8));
        }
        *(undefined4 *)(puVar7 + 0x16) = *(undefined4 *)((&DAT_0096a9e8)[iVar19] + 8);
        if (*(float *)(puVar7 + 0x16) == 0.0) {
          dVar20 = (double)mobyfunc::MB_FreeAnimLayer(g_heroMobyPtr,&DAT_0096a9e8 + iVar19);
          return dVar20;
        }
      }
    }
    iVar19 = iVar19 + 1;
    if (1 < iVar19) {
      if (g_heroStateType == 0xf) {
        if (DAT_0096a2b8 == 0) {
          DAT_0096a360 = g_heroRotation.x;
          DAT_0096a364 = g_heroRotation.y;
          DAT_0096a368 = g_heroRotation.z;
          DAT_0096a36c = g_heroRotation.w;
          dVar20 = (double)fastfunc::FastWrapRot(DAT_0096a25c,DAT_0096a2b0);
          DAT_0096a368 = (float)dVar20;
        }
        else {
          DAT_0096a360 = g_heroRotation.x;
          DAT_0096a36c = g_heroRotation.w;
          fVar21 = *(float *)(DAT_0096a2b8 + 0x10) - g_heroPosition.x;
          fVar1 = *(float *)(DAT_0096a2b8 + 0x14) - g_heroPosition.y;
          fVar8 = ABS(fVar21);
          fVar9 = ABS(fVar1);
          *(float *)(puVar7 + 0xe) = fVar21;
          *(float *)((int)puVar7 + 0x74) = fVar1;
          *(float *)(puVar7 + 0xf) = fVar8 - fVar9;
          DAT_0096a368 = 0.0;
          iVar19 = (int)(((ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4) << 2);
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar19);
          fVar21 = *(float *)(&DAT_00735904 + iVar19);
          if (0.0 <= *(float *)(puVar7 + 0xf)) {
            fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
            fVar9 = ABS(*(float *)(puVar7 + 0xe));
          }
          if (0.0 < fVar9) {
            iVar19 = 4;
            fVar8 = (fVar8 - fVar9) / (fVar8 + fVar9);
            lVar14 = lVar15;
            do {
              iVar19 = iVar19 + -1;
              *(float *)((int)lVar14 + 0x7c) = fVar8;
              lVar14 = lVar14 + 4;
            } while (iVar19 != 0);
            fVar8 = fVar8 * fVar8;
            lVar14 = uVar13 - 0xf0;
            iVar19 = 4;
            fVar9 = fVar8 * fVar8;
            *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar8;
            *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar9;
            *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar9 * fVar8;
            do {
              iVar19 = iVar19 + -1;
              *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar9 * fVar9;
              lVar14 = lVar14 + 4;
            } while (iVar19 != 0);
            iVar19 = 8;
            lVar14 = lVar15;
            do {
              iVar19 = iVar19 + -1;
              pfVar10 = (float *)((int)&DAT_007358e0 + iVar16);
              iVar16 = iVar16 + 4;
              *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * *pfVar10;
              lVar14 = lVar14 + 4;
            } while (iVar19 != 0);
            iVar16 = 8;
            do {
              iVar16 = iVar16 + -1;
              iVar19 = (int)lVar15;
              lVar15 = lVar15 + 4;
              DAT_0096a368 = DAT_0096a368 + *(float *)(iVar19 + 0x7c);
            } while (iVar16 != 0);
            DAT_0096a368 = (DAT_0096a368 + 0.7853982) * fVar1 + fVar21;
          }
        }
        DAT_0096a364 = -DAT_0096a260;
        fastfunc::FastEulerToMtx(&DAT_0096a320,&DAT_0096a360);
        DAT_0096a350 = DAT_0096a320 + DAT_0096a330 * 0.0 + DAT_0096a340 * 0.0;
        DAT_0096a354 = DAT_0096a324 + DAT_0096a334 * 0.0 + DAT_0096a344 * 0.0;
        DAT_0096a358 = DAT_0096a328 + DAT_0096a338 * 0.0 + DAT_0096a348 * 0.0;
        DAT_0096a35c = DAT_0096a32c + DAT_0096a33c * 0.0 + DAT_0096a34c * 0.0 + 0.0;
        fVar21 = DAT_0096a35c;
      }
      else {
        pfVar10 = (float *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
        DAT_0096a32c = pfVar10[3];
        DAT_0096a328 = pfVar10[2];
        DAT_0096a324 = pfVar10[1];
        DAT_0096a320 = *pfVar10;
        pfVar10 = (float *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
        DAT_0096a33c = pfVar10[3];
        DAT_0096a338 = pfVar10[2];
        DAT_0096a334 = pfVar10[1];
        DAT_0096a330 = *pfVar10;
        pfVar10 = (float *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
        DAT_0096a34c = pfVar10[3];
        DAT_0096a348 = pfVar10[2];
        DAT_0096a344 = pfVar10[1];
        DAT_0096a340 = *pfVar10;
        fVar1 = DAT_0096a320 + DAT_0096a330 * 0.0 + DAT_0096a340 * 0.0;
        fVar8 = DAT_0096a324 + DAT_0096a334 * 0.0;
        fVar21 = DAT_0096a344 * 0.0;
        *(float *)(puVar7 + 0x14) = fVar1;
        *(float *)((int)puVar7 + 0xa4) = fVar1;
        *(float *)(puVar7 + 0x15) = fVar1;
        *(float *)((int)puVar7 + 0xac) = fVar1;
        fVar9 = DAT_0096a328;
        fVar8 = fVar8 + fVar21;
        fVar21 = DAT_0096a338 * 0.0;
        fVar1 = DAT_0096a348 * 0.0;
        auVar3 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        *(float *)(puVar7 + 0x14) = fVar8;
        *(float *)((int)puVar7 + 0xa4) = fVar8;
        *(float *)(puVar7 + 0x15) = fVar8;
        *(float *)((int)puVar7 + 0xac) = fVar8;
        fVar8 = DAT_0096a33c * 0.0;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        fVar1 = fVar9 + fVar21 + fVar1;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        *(float *)(puVar7 + 0x14) = fVar1;
        fVar21 = DAT_0096a34c;
        fVar8 = DAT_0096a32c + fVar8;
        *(float *)((int)puVar7 + 0xa4) = fVar1;
        *(float *)(puVar7 + 0x15) = fVar1;
        *(float *)((int)puVar7 + 0xac) = fVar1;
        auVar5 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        fVar21 = fVar8 + fVar21 * 0.0 + 0.0;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        *(float *)(puVar7 + 0x14) = fVar21;
        *(float *)((int)puVar7 + 0xa4) = fVar21;
        *(float *)(puVar7 + 0x15) = fVar21;
        *(float *)((int)puVar7 + 0xac) = fVar21;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar6 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_0096a350 = (float)storeVectorElementWordIndexed
                                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0
                                         ,0x96a350);
        auVar3 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_0096a354 = (float)storeVectorElementWordIndexed
                                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                                         0x670,0x969ce4);
        auVar3 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_0096a358 = (float)storeVectorElementWordIndexed
                                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                                         0x670,0x969ce8);
        auVar3 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_0096a35c = (float)storeVectorElementWordIndexed
                                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                                         0x670,0x969cec);
        DAT_0096a360 = g_heroRotation.x;
        DAT_0096a364 = g_heroRotation.y;
        DAT_0096a368 = g_heroRotation.z;
        DAT_0096a36c = g_heroRotation.w;
        fVar21 = g_heroRotation.z;
      }
      return (double)fVar21;
    }
  } while( true );
}



//==== 0008eac4  ns=hero  size=0x14
// sig: undefined ???_Hero_DefaultByteIfFF(void)
// callers(0): 
// callees(0): 

ulonglong hero::____Hero_DefaultByteIfFF(int param_1,ulonglong param_2)

{
  if ((int)param_2 == 0xff) {
    param_2 = (ulonglong)*(byte *)(param_1 + 0xa5);
  }
  return param_2;
}



//==== 0008eae0  ns=hero  size=0x13c
// sig: undefined ???_Hero_GetGadgetAnimBlend(void)
// callers(1): 0008ec40 hero::Hero_UpdateGadgetAnimLayers
// callees(0): 

undefined8 hero::____Hero_GetGadgetAnimBlend(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  if ((((g_heroStateType == 0x16) && (DAT_0096a5ae != '\0')) && (0x68 < g_heroMobyPtr->animationId))
     && (g_heroMobyPtr->animationId < 0x6d)) {
    return 1;
  }
  if (param_1 < 0x4a) {
    if (param_1 < 0x31) {
      if (0x1b < param_1) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1e) {
LAB_0008ebdc:
            if (25.0 < g_heroAnimFrame) {
              *param_2 = 0xbfa78d36;
            }
            return 1;
          }
        }
        else if (param_1 < 0x20) goto LAB_0008ebdc;
      }
    }
    else if (param_1 < 0x37) {
      if (param_1 < 0x33) {
        return 1;
      }
    }
    else if (param_1 < 0x38) {
      *param_2 = 0xbf75be0b;
      return 1;
    }
  }
  else if (param_1 < 0x6d) {
    if (param_1 < 0x51) {
      if (param_1 < 0x4c) {
        return 1;
      }
      if (0x4f < param_1) {
        return 1;
      }
    }
    else if (param_1 == 0x60) {
      return 1;
    }
  }
  else if (param_1 < 0x6f) {
    return 1;
  }
  return 0;
}



//==== 0008ec40  ns=hero  size=0x784
// sig: undefined Hero_UpdateGadgetAnimLayers(void)
// callers(2): 0008f3c4 hero::Hero_UpdateAnimLayers; 000954c8 hero::HeroUpdate
// callees(5): 0008eae0 hero::???_Hero_GetGadgetAnimBlend; 000f0854 mobyfunc::MB_AllocAnimLayer; 000f0900 mobyfunc::MB_FreeAnimLayer; 000f0b38 mobyfunc::MB_UpdateAnimLayer; 00109af0 mobyutil::Delt

void hero::Hero_UpdateGadgetAnimLayers(double param_1)

{
  u8 uVar1;
  u8 uVar2;
  short sVar3;
  short sVar4;
  MobyInstance *pMVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  MobyClass *pMVar8;
  bool bVar9;
  MobyInstance *pMVar10;
  int iVar11;
  f32 *val;
  undefined2 uVar13;
  int iVar12;
  u8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  double extraout_f1;
  double dVar20;
  float fVar21;
  float local_70 [12];
  
  uVar18 = 0;
  do {
    lVar17 = (uVar18 & 0x3fffffff) * 4;
    iVar12 = (int)lVar17;
    iVar19 = (int)uVar18;
    if ((*(int *)((int)&DAT_0096a9e0 + iVar12) == 0) ||
       (*(int *)(*(int *)((int)&DAT_0096a9e0 + iVar12) + 0x34) == 0)) {
      bVar9 = false;
      if ((DAT_0096bd8b != '\0') && ((iVar19 == 0 || (DAT_0096bd8b == '\x02')))) {
        bVar9 = true;
      }
      if (DAT_0096bd8f != '\0') {
        bVar9 = false;
        if (*(int *)((int)&DAT_0096a9e0 + iVar12) != 0) {
          *(undefined4 *)(*(int *)((int)&DAT_0096a9e0 + iVar12) + 0x34) = 1;
        }
      }
      if ((bVar9) && (*(int *)((int)&DAT_0096a9e0 + iVar12) == 0)) {
        iVar11 = mobyfunc::MB_AllocAnimLayer(g_heroMobyPtr,*(undefined4 *)(&DAT_00720d00 + iVar12));
        *(int *)((int)&DAT_0096a9e0 + iVar12) = iVar11;
        *(undefined4 *)(iVar11 + 8) = 0;
        *(MobyClass **)(iVar11 + 0x18) = MobyClasses[(byte)(&DAT_00a354c1)[iVar19]];
        param_1 = extraout_f1;
      }
      else if ((!bVar9) && (*(int *)((int)&DAT_0096a9e0 + iVar12) != 0)) {
        dVar20 = 0.0;
        fVar21 = mobyutil::Delt(0.0,DAT_0071f408 * 0.1,
                                (float *)(*(int *)((int)&DAT_0096a9e0 + iVar12) + 8));
        param_1 = (double)fVar21;
        if (param_1 == dVar20) {
          param_1 = (double)mobyfunc::MB_FreeAnimLayer
                                      (g_heroMobyPtr,ZEXT48(&DAT_0096a9e0) + lVar17 & 0xffffffff);
        }
      }
    }
    else {
      dVar20 = 0.0;
      fVar21 = mobyutil::Delt(0.0,DAT_0071f408 * 0.1,
                              (float *)(*(int *)((int)&DAT_0096a9e0 + iVar12) + 8));
      param_1 = (double)fVar21;
      if (param_1 == dVar20) {
        param_1 = (double)mobyfunc::MB_FreeAnimLayer
                                    (g_heroMobyPtr,ZEXT48(&DAT_0096a9e0) + lVar17 & 0xffffffff);
      }
    }
    if (*(int *)((int)&DAT_0096a9e0 + iVar12) != 0) {
      pMVar5 = *(MobyInstance **)((int)&DAT_0096a9e0 + iVar12);
      uVar16 = ZEXT48(pMVar5);
      val = &(pMVar5->bSphere).z;
      uVar1 = g_heroMobyPtr->updateId;
      uVar2 = g_heroMobyPtr->animationId;
      if ((DAT_0096a9e8 == 0) || (DAT_0096a9f4 != 0)) {
        iVar12._0_2_ = pMVar5->modeBits;
        iVar12._2_2_ = pMVar5->occlIndex;
        if (iVar12 == 0) {
          fVar21 = mobyutil::Delt(1.0,DAT_0071f408 * 0.1,val);
          param_1 = (double)fVar21;
        }
      }
      else {
        fVar21 = mobyutil::Delt(0.0,DAT_0071f408 * 0.1,val);
        param_1 = (double)fVar21;
      }
      pMVar10 = g_heroMobyPtr;
      uVar13 = 0;
      if ((((uVar1 != uVar2) && (DAT_0096a77c != 0)) &&
          (pMVar5->alpha != g_heroMobyPtr->animationId)) && (pMVar5->mClass != pMVar5->alpha)) {
        uVar13 = 1;
      }
      pMVar5->updateDistance = (char)((ushort)uVar13 >> 8);
      pMVar5->enabled = (char)uVar13;
      iVar12 = ____Hero_GetGadgetAnimBlend(param_1,pMVar10->animationId,local_70);
      if ((iVar12 == 0) && (*(char *)&pMVar5->drawDistance == '\0')) {
        sVar3._0_1_ = pMVar5->updateDistance;
        sVar3._1_1_ = pMVar5->enabled;
        if (sVar3 == 0) {
          iVar12 = 0;
          uVar15 = uVar16;
          do {
            if (iVar12 == 1 || uVar1 == uVar2) {
              uVar14 = (&g_heroMobyPtr->updateId)[iVar12];
              if (uVar14 == 0xff) {
                uVar14 = g_heroMobyPtr->previousAnimationId;
              }
              *(u8 *)((int)uVar15 + 0x22) = uVar14;
            }
            iVar12 = iVar12 + 1;
            uVar15 = uVar15 + 1;
          } while (iVar12 < 2);
        }
        pMVar10 = g_heroMobyPtr;
        sVar4._0_1_ = pMVar5->updateDistance;
        sVar4._1_1_ = pMVar5->enabled;
        if (sVar4 == 0) {
          if (uVar1 == uVar2) {
            pMVar5->state = g_heroMobyPtr->previousAnimationFrame;
            pMVar5->group = pMVar10->animationFrame;
            pMVar5->pClass = (MobyClass *)pMVar10->animationBlend;
          }
          else {
            pMVar5->group = g_heroMobyPtr->animationFrame;
            pMVar5->pClass = (MobyClass *)pMVar10->animationBlend;
          }
        }
        else {
          pMVar8 = (MobyClass *)((float)pMVar5->pClass + DAT_0071f408 * 0.15);
          pMVar5->pClass = pMVar8;
          if (1.0 <= (float)pMVar8) {
            pMVar5->updateDistance = '\0';
            pMVar5->enabled = '\0';
            pMVar5->mClass = pMVar5->alpha;
            pMVar5->state = pMVar5->group;
          }
        }
        lVar17 = 0;
        iVar12 = 0;
        do {
          iVar11 = (int)uVar16;
          if (*(byte *)(iVar11 + 0x22) < 0x17) {
            *(undefined1 *)(iVar11 + 6) = 1;
            *(undefined **)((int)&pMVar5->color + iVar12) =
                 &DAT_00a1a880 + (int)(((uVar18 & 0x7fffffff) * 2 + lVar17 & 0xffffffff) << 10);
          }
          else {
            *(undefined1 *)(iVar11 + 6) = 0;
          }
          lVar17 = lVar17 + 1;
          iVar12 = iVar12 + 4;
          uVar16 = uVar16 + 1;
        } while ((int)lVar17 < 2);
        param_1 = (double)mobyfunc::MB_UpdateAnimLayer(ZEXT48(g_heroMobyPtr),pMVar5);
      }
      else {
        if (local_70[0] != 0.0) {
          DAT_007221b4 = local_70[0];
          DAT_007222a4 = DAT_0071f40c * 0.05;
          DAT_007221f4 = DAT_0071f40c * 0.05;
          DAT_007222a8 = DAT_0071f40c * 0.3;
          DAT_007221f8 = DAT_0071f40c * 0.3;
          DAT_00722264 = DAT_007221b4;
        }
        if ((iVar12 != 0) && ((*(char *)&pMVar5->drawDistance == '\0' || (pMVar5->alpha != '\0'))))
        {
          if (pMVar5->mClass == pMVar5->alpha) {
LAB_0008efa8:
            pMVar5->mClass = pMVar5->alpha;
            pMVar5->state = pMVar5->group;
          }
          else if (0.5 < (float)pMVar5->pClass) goto LAB_0008efa8;
          pMVar5->alpha = '\0';
          pMVar5->pClass = (MobyClass *)0x0;
          pMVar5->group = '\0';
          pMVar5->pChain = (void *)0x3f800000;
          auVar7 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar7 = (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          uVar6 = storeVectorElementWordIndexed
                            (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x2c,uVar16);
          *(undefined4 *)((uint)&pMVar5->scale & 0xfffffffc) = uVar6;
          *(undefined1 *)&pMVar5->drawDistance = 1;
          *(undefined1 *)((int)&pMVar5->drawDistance + 1) = 0;
        }
        if (iVar12 == 0) {
          if ((char)pMVar5->drawDistance == '\0') {
            uVar1 = g_heroMobyPtr->animationId;
            if (uVar1 == 0xff) {
              uVar1 = g_heroMobyPtr->previousAnimationId;
            }
            pMVar5->alpha = uVar1;
            pMVar5->group = '\0';
            *(undefined1 *)((int)&pMVar5->drawDistance + 1) = 1;
            pMVar5->pClass = (MobyClass *)0x0;
            pMVar5->pChain = (void *)0x0;
          }
          else {
            pMVar8 = (MobyClass *)((float)pMVar5->pClass + DAT_0071f408 * 0.1);
            pMVar5->pClass = pMVar8;
            if (1.0 < (float)pMVar8) {
              pMVar5->pClass = (MobyClass *)0x3f800000;
            }
            if ((float)pMVar5->pClass == 1.0) {
              *(undefined1 *)&pMVar5->drawDistance = 0;
            }
          }
        }
        else {
          pMVar5->pChain = (void *)0x3f800000;
        }
        lVar17 = 0;
        iVar12 = 0;
        do {
          iVar11 = (int)uVar16;
          if (*(byte *)(iVar11 + 0x22) < 0x17) {
            *(undefined1 *)(iVar11 + 6) = 1;
            *(undefined **)((int)&pMVar5->color + iVar12) =
                 &DAT_00a1a880 + (int)(((uVar18 & 0x7fffffff) * 2 + lVar17 & 0xffffffff) << 10);
          }
          else {
            *(undefined1 *)(iVar11 + 6) = 0;
          }
          lVar17 = lVar17 + 1;
          iVar12 = iVar12 + 4;
          uVar16 = uVar16 + 1;
        } while ((int)lVar17 < 2);
        param_1 = (double)mobyfunc::MB_UpdateAnimLayer(ZEXT48(g_heroMobyPtr),pMVar5);
      }
    }
    uVar18 = (ulonglong)(iVar19 + 1);
    if (1 < iVar19 + 1) {
      return;
    }
  } while( true );
}



//==== 0008f3c4  ns=hero  size=0x28
// sig: undefined Hero_UpdateAnimLayers(void)
// callers(0): 
// callees(3): 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers

void hero::Hero_UpdateAnimLayers(void)

{
  Hero_UpdateGadgetAnimLayers();
  Hero_UpdateFiringAnimLayer();
  Hero_UpdateOverlayAnimLayer();
  return;
}



//==== 0008f3ec  ns=hero  size=0xc8
// sig: void Hero_AddGlow(float size, float intensity, float * pos, int color)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_AddGlow(float size,float intensity,float *pos,int color)

{
  float fVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)g_heroGlowCount;
  iVar2 = (int)((longlong)g_heroGlowCount << 4);
  lVar5 = (longlong)g_heroGlowCount;
  lVar4 = (longlong)g_heroGlowCount;
  *(float *)(&g_heroGlowPos + iVar2) = *pos;
  *(float *)(iVar2 + 0x96bab4) = pos[1];
  *(float *)(iVar2 + 0x96bab8) = pos[2];
  fVar1 = pos[3];
  *(int *)(&DAT_0096bb30 + (int)(lVar5 << 2)) = color;
  *(float *)(iVar2 + 0x96babc) = fVar1;
  *(float *)(&DAT_0096bb50 + (int)(lVar6 << 2)) = size;
  sVar3 = DAT_0096bb92;
  *(float *)(&DAT_0096bb70 + (int)(lVar4 << 2)) = intensity;
  if (sVar3 == 0) {
    DAT_0096bb92 = 1;
    RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
  }
  g_heroGlowCount = g_heroGlowCount + 1;
  return;
}



//==== 0008f538  ns=hero  size=0xfd0
// sig: undefined Hero_UpdateGadgetGlows(void)
// callers(1): 00092834 hero::Hero_UpdateGadgets
// callees(5): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void hero::Hero_UpdateGadgetGlows(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  MobyInstance *pMVar6;
  short sVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
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
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  iVar12 = DAT_0096ae10;
  if (((DAT_0096ae38 == 5) && (DAT_0096ae10 != 0)) && ((*(ushort *)(DAT_0096ae10 + 0x34) & 1) == 0))
  {
    iVar18 = 0;
    do {
      mobyfunc::GetBonePosition(iVar12,iVar18,&local_b0);
      iVar5 = (int)((longlong)g_heroGlowCount << 4);
      *(undefined4 *)(&g_heroGlowPos + iVar5) = local_b0;
      *(undefined4 *)(iVar5 + 0x96bab4) = local_ac;
      *(undefined4 *)(iVar5 + 0x96bab8) = local_a8;
      *(undefined4 *)(iVar5 + 0x96babc) = local_a4;
      lVar17 = (longlong)g_heroGlowCount;
      lVar8 = (longlong)g_heroGlowCount;
      *(undefined4 *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) = 0x301eaa1e;
      sVar7 = DAT_0096bb92;
      *(undefined4 *)(&DAT_0096bb50 + (int)(lVar8 << 2)) = 0x3d6978d5;
      *(undefined4 *)(&DAT_0096bb70 + (int)(lVar17 << 2)) = 0x3e19999a;
      if (sVar7 == 0) {
        DAT_0096bb92 = 1;
        RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
      }
      iVar18 = iVar18 + 1;
      g_heroGlowCount = g_heroGlowCount + 1;
    } while (iVar18 < 2);
  }
  if (g_gameMode == GAME_MODE_NORMAL) {
    dVar19 = (double)fastfunc::FastWrapRot(DAT_0096b308,mobyutil::g_FrameTime * 2.268928);
    uVar9 = 0xffffffff806e8c6e;
    uVar15 = 0xffffffff805a3232;
    DAT_0096b308 = (float)dVar19;
    if ((help::g_HelpState != 0) && (help::g_HelpState != 8)) {
      dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,mobyutil::g_FrameTime * 5.5850534);
      DAT_0096b308 = (float)dVar19;
      uVar9 = 0xffffffff806eaafa;
      uVar15 = 0xffffffff80326e5a;
    }
    fVar1 = DAT_0096b308;
    if (3.1415925 - DAT_0096b308 <= DAT_0096b308) {
      fVar1 = 3.1415925 - DAT_0096b308;
    }
    if (fVar1 <= -3.1415925 - DAT_0096b308) {
      fVar1 = -3.1415925 - DAT_0096b308;
    }
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar2 * fVar1;
    fVar4 = fVar2 * fVar3;
    uVar10 = fastfunc::FastLerpColor
                       ((double)((fVar1 + fVar2 * fVar1 * -0.16666657 + fVar3 * 0.0083330255 +
                                  fVar4 * -0.0001980741 + fVar2 * fVar4 * 2.601887e-06) * 0.5 + 0.5)
                        ,uVar9,uVar15);
    g_heroMobyPtr->field60_0x90 = uVar10;
  }
  pMVar6 = g_currentWeaponMoby;
  if ((g_currentWeaponMoby != (MobyInstance *)0x0) &&
     ((g_currentWeaponMoby->modeBits & DISABLED) == NONE)) {
    if (g_CurrentWeapon == 0x14) {
      dVar19 = (double)fastfunc::FastWrapRot(DAT_0096ad9c,mobyutil::g_FrameTime * 4.363323);
      DAT_0096ad9c = (float)dVar19;
      dVar20 = 0.0;
      puVar14 = &DAT_00dcdcdc;
      if ((0.0 < dVar19) && (dVar19 < 2.4434609413146973)) {
        puVar14 = (undefined *)0xa0a0a;
      }
      uVar10 = fastfunc::FastLerpColor(0x3fb1eb8520000000,pMVar6->field60_0x90,puVar14);
      pMVar6->field60_0x90 = uVar10;
      dVar19 = 0.20000000298023224;
      dVar27 = (double)((pMVar6->transform).v0.x * 0.01710421 +
                        (pMVar6->transform).v1.x * -0.09391942 +
                        (pMVar6->transform).v2.x * 0.14095412 + (pMVar6->pos).x);
      dVar25 = (double)((pMVar6->transform).v0.y * 0.01710421 +
                        (pMVar6->transform).v1.y * -0.09391942 +
                        (pMVar6->transform).v2.y * 0.14095412 + (pMVar6->pos).y);
      dVar22 = (double)((pMVar6->transform).v0.z * 0.01710421 +
                        (pMVar6->transform).v1.z * -0.09391942 +
                        (pMVar6->transform).v2.z * 0.14095412 + (pMVar6->pos).z);
      dVar20 = (double)(float)((double)((pMVar6->transform).v0.w * 0.01710421 +
                                        (pMVar6->transform).v1.w * -0.09391942 +
                                       (pMVar6->transform).v2.w * 0.14095412) + dVar20);
      uVar11 = fastfunc::FastDoubleToInt
                         ((double)(float)((double)(longlong)(int)(uVar10 & 0xff) *
                                         0.20000000298023224));
      lVar8 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)(int)((int)uVar10 >> 0x10 & 0xff) *
                                        dVar19));
      iVar12 = (int)((longlong)g_heroGlowCount << 4);
      *(float *)(&g_heroGlowPos + iVar12) = (float)dVar27;
      *(float *)(iVar12 + 0x96bab4) = (float)dVar25;
      *(float *)(iVar12 + 0x96bab8) = (float)dVar22;
      *(float *)(iVar12 + 0x96babc) = (float)dVar20;
      lVar16 = (longlong)g_heroGlowCount;
      lVar17 = (longlong)g_heroGlowCount;
      *(uint *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) =
           (((int)uVar10 >> 8 & 0xffU) * 0x20 + 1) * 0x147a8 & 0xff000000 | (uint)(lVar8 << 0x10) |
           ((int)uVar10 >> 8 & 0xffU) << 8 | uVar11;
      sVar7 = DAT_0096bb92;
      *(undefined4 *)(&DAT_0096bb50 + (int)(lVar17 << 2)) = 0x3e2e147b;
      *(undefined4 *)(&DAT_0096bb70 + (int)(lVar16 << 2)) = 0x3dcccccd;
      if (sVar7 == 0) {
        DAT_0096bb92 = 1;
        RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
      }
      g_heroGlowCount = g_heroGlowCount + 1;
    }
    else if (g_CurrentWeapon == 0x13) {
      fVar1 = 2.268928;
      if (DAT_0096bd88 != '\0') {
        fVar1 = 7.330383;
      }
      dVar19 = (double)fastfunc::FastWrapRot(DAT_0096ad9c,mobyutil::g_FrameTime * fVar1);
      DAT_0096ad9c = (float)dVar19;
      if (DAT_0096bd88 == '\0') {
        dVar22 = (double)(float)(3.141592502593994 - dVar19);
        dVar20 = dVar19;
        if (dVar22 <= dVar19) {
          dVar20 = dVar22;
        }
        dVar25 = (double)(float)(-3.141592502593994 - dVar19);
        if (dVar20 <= dVar25) {
          dVar20 = dVar25;
        }
        dVar27 = (double)(float)(dVar20 * dVar20);
        dVar26 = -0.16666656732559204;
        dVar24 = 0.008333025500178337;
        dVar29 = -0.0001980741071747616;
        dVar28 = 2.601886990305502e-06;
        dVar21 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar20));
        dVar23 = (double)(float)(dVar27 * dVar21);
        iVar12 = fastfunc::FastDoubleToInt
                           ((double)(((float)(dVar20 + (double)(float)((double)(float)(dVar27 * 
                                                  dVar20) * -0.16666656732559204)) +
                                      (float)(dVar21 * 0.008333025500178337) +
                                      (float)(dVar23 * -0.0001980741071747616) +
                                     (float)(dVar27 * dVar23) * 2.601887e-06) * 70.0));
        uVar10 = iVar12 + 100;
        dVar20 = dVar19;
        if (dVar22 <= dVar19) {
          dVar20 = dVar22;
        }
        if (dVar20 <= dVar25) {
          dVar20 = dVar25;
        }
        dVar27 = (double)(float)(dVar20 * dVar20);
        dVar30 = 40.0;
        dVar21 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar20));
        dVar23 = (double)(float)(dVar27 * dVar21);
        lVar8 = fastfunc::FastDoubleToInt
                          ((double)(((float)(dVar20 + (double)(float)((double)(float)(dVar27 * 
                                                  dVar20) * dVar26)) + (float)(dVar21 * dVar24) +
                                     (float)(dVar23 * dVar29) +
                                    (float)((double)(float)(dVar27 * dVar23) * dVar28)) * 40.0));
        lVar8 = lVar8 + 0x46;
        if (dVar22 <= dVar19) {
          dVar19 = dVar22;
        }
        if (dVar19 <= dVar25) {
          dVar19 = dVar25;
        }
        dVar20 = (double)(float)(dVar19 * dVar19);
        dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
        dVar25 = (double)(float)(dVar20 * dVar22);
        lVar17 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)((float)(dVar19 + (double)(float)((double)(float
                                                  )(dVar20 * dVar19) * dVar26)) +
                                                  (float)(dVar22 * dVar24) +
                                                  (float)(dVar25 * dVar29) +
                                                  (float)((double)(float)(dVar20 * dVar25) * dVar28)
                                                  ) * dVar30));
        lVar17 = lVar17 + 0x46;
      }
      else {
        dVar22 = (double)(float)(3.141592502593994 - dVar19);
        dVar20 = dVar19;
        if (dVar22 <= dVar19) {
          dVar20 = dVar22;
        }
        dVar25 = (double)(float)(-3.141592502593994 - dVar19);
        if (dVar20 <= dVar25) {
          dVar20 = dVar25;
        }
        dVar27 = (double)(float)(dVar20 * dVar20);
        dVar26 = -0.16666656732559204;
        dVar24 = 0.008333025500178337;
        dVar29 = -0.0001980741071747616;
        dVar28 = 2.601886990305502e-06;
        dVar21 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar20));
        dVar23 = (double)(float)(dVar27 * dVar21);
        dVar30 = 30.0;
        iVar12 = fastfunc::FastDoubleToInt
                           ((double)(((float)(dVar20 + (double)(float)((double)(float)(dVar27 * 
                                                  dVar20) * -0.16666656732559204)) +
                                      (float)(dVar21 * 0.008333025500178337) +
                                      (float)(dVar23 * -0.0001980741071747616) +
                                     (float)(dVar27 * dVar23) * 2.601887e-06) * 30.0));
        uVar10 = iVar12 + 0x32;
        dVar20 = dVar19;
        if (dVar22 <= dVar19) {
          dVar20 = dVar22;
        }
        if (dVar20 <= dVar25) {
          dVar20 = dVar25;
        }
        dVar27 = (double)(float)(dVar20 * dVar20);
        dVar21 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar20));
        dVar23 = (double)(float)(dVar27 * dVar21);
        lVar8 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)((float)(dVar20 + (double)(float)((double)(float)
                                                  (dVar27 * dVar20) * dVar26)) +
                                                  (float)(dVar21 * dVar24) +
                                                  (float)(dVar23 * dVar29) +
                                                  (float)((double)(float)(dVar27 * dVar23) * dVar28)
                                                  ) * dVar30));
        lVar8 = lVar8 + 0x32;
        if (dVar22 <= dVar19) {
          dVar19 = dVar22;
        }
        if (dVar19 <= dVar25) {
          dVar19 = dVar25;
        }
        dVar20 = (double)(float)(dVar19 * dVar19);
        dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
        dVar25 = (double)(float)(dVar20 * dVar22);
        lVar17 = fastfunc::FastDoubleToInt
                           ((double)(((float)(dVar19 + (double)(float)((double)(float)(dVar20 * 
                                                  dVar19) * dVar26)) + (float)(dVar22 * dVar24) +
                                      (float)(dVar25 * dVar29) +
                                     (float)((double)(float)(dVar20 * dVar25) * dVar28)) * 90.0));
        lVar17 = lVar17 + 0xaa;
      }
      uVar10 = fastfunc::FastLerpColor
                         (0x3fc3333340000000,pMVar6->field60_0x90,
                          (uint)(lVar8 << 8) | uVar10 | (uint)(lVar17 << 0x10) | 0x80000000);
      pMVar6->field60_0x90 = uVar10;
    }
    else if (g_CurrentWeapon == 0x11) {
      dVar19 = (double)fastfunc::FastWrapRot(DAT_0096ad9c,mobyutil::g_FrameTime * 4.363323);
      DAT_0096ad9c = (float)dVar19;
      dVar20 = 0.0;
      uVar9 = 0x28c8c8c8;
      if ((0.0 < dVar19) && (dVar19 < 2.268928050994873)) {
        uVar9 = 0x280a0a0a;
      }
      uVar10 = fastfunc::FastLerpColor(0x3fb1eb8520000000,pMVar6->field60_0x90,uVar9);
      pMVar6->field60_0x90 = uVar10;
      dVar19 = 0.20000000298023224;
      dVar27 = (double)((pMVar6->transform).v0.x * 0.01734525 +
                        (pMVar6->transform).v1.x * -0.03917729 +
                        (pMVar6->transform).v2.x * 0.0962345 + (pMVar6->pos).x);
      dVar25 = (double)((pMVar6->transform).v0.y * 0.01734525 +
                        (pMVar6->transform).v1.y * -0.03917729 +
                        (pMVar6->transform).v2.y * 0.0962345 + (pMVar6->pos).y);
      dVar22 = (double)((pMVar6->transform).v0.z * 0.01734525 +
                        (pMVar6->transform).v1.z * -0.03917729 +
                        (pMVar6->transform).v2.z * 0.0962345 + (pMVar6->pos).z);
      dVar20 = (double)(float)((double)((pMVar6->transform).v0.w * 0.01734525 +
                                        (pMVar6->transform).v1.w * -0.03917729 +
                                       (pMVar6->transform).v2.w * 0.0962345) + dVar20);
      uVar11 = fastfunc::FastDoubleToInt
                         ((double)(float)((double)(longlong)(int)(uVar10 & 0xff) *
                                         0.20000000298023224));
      lVar8 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)(int)((int)uVar10 >> 0x10 & 0xff) *
                                        dVar19));
      iVar12 = (int)((longlong)g_heroGlowCount << 4);
      *(float *)(&g_heroGlowPos + iVar12) = (float)dVar27;
      *(float *)(iVar12 + 0x96bab4) = (float)dVar25;
      *(float *)(iVar12 + 0x96bab8) = (float)dVar22;
      *(float *)(iVar12 + 0x96babc) = (float)dVar20;
      lVar16 = (longlong)g_heroGlowCount;
      lVar17 = (longlong)g_heroGlowCount;
      *(uint *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) =
           (((int)uVar10 >> 8 & 0xffU) * 0x20 + 1) * 0x147a8 & 0xff000000 | (uint)(lVar8 << 0x10) |
           ((int)uVar10 >> 8 & 0xffU) << 8 | uVar11;
      sVar7 = DAT_0096bb92;
      *(undefined4 *)(&DAT_0096bb50 + (int)(lVar17 << 2)) = 0x3e19999a;
      *(undefined4 *)(&DAT_0096bb70 + (int)(lVar16 << 2)) = 0x3dcccccd;
      if (sVar7 == 0) {
        DAT_0096bb92 = 1;
        RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
      }
      g_heroGlowCount = g_heroGlowCount + 1;
    }
    else if (g_CurrentWeapon == 0x10) {
      dVar19 = 50.5;
      if ((int)(animationSpeed * 50.5) < (int)DAT_0096ad90) {
        fVar1 = 3.1415927;
        if (DAT_0096bd88 != '\0') {
          fVar1 = 4.712389;
        }
        dVar20 = (double)fastfunc::FastWrapRot(DAT_0096ad9c,mobyutil::g_FrameTime * fVar1);
        DAT_0096ad9c = (float)dVar20;
        dVar25 = (double)(float)(3.141592502593994 - dVar20);
        dVar22 = dVar20;
        if (dVar25 <= dVar20) {
          dVar22 = dVar25;
        }
        dVar27 = (double)(float)(-3.141592502593994 - dVar20);
        if (dVar22 <= dVar27) {
          dVar22 = dVar27;
        }
        dVar21 = (double)(float)(dVar22 * dVar22);
        dVar28 = -0.16666656732559204;
        dVar26 = 0.008333025500178337;
        dVar30 = -0.0001980741071747616;
        dVar29 = 2.601886990305502e-06;
        dVar23 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
        dVar24 = (double)(float)(dVar21 * dVar23);
        dVar31 = 20.0;
        lVar8 = fastfunc::FastDoubleToInt
                          ((double)(((float)(dVar22 + (double)(float)((double)(float)(dVar21 * 
                                                  dVar22) * -0.16666656732559204)) +
                                     (float)(dVar23 * 0.008333025500178337) +
                                     (float)(dVar24 * -0.0001980741071747616) +
                                    (float)(dVar21 * dVar24) * 2.601887e-06) * 20.0));
        dVar22 = dVar20;
        if (dVar25 <= dVar20) {
          dVar22 = dVar25;
        }
        if (dVar22 <= dVar27) {
          dVar22 = dVar27;
        }
        dVar21 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
        dVar24 = (double)(float)(dVar21 * dVar23);
        lVar17 = fastfunc::FastDoubleToInt
                           ((double)(((float)(dVar22 + (double)(float)((double)(float)(dVar21 * 
                                                  dVar22) * dVar28)) + (float)(dVar23 * dVar26) +
                                      (float)(dVar24 * dVar30) +
                                     (float)((double)(float)(dVar21 * dVar24) * dVar29)) * 90.0));
        if (dVar25 <= dVar20) {
          dVar20 = dVar25;
        }
        if (dVar20 <= dVar27) {
          dVar20 = dVar27;
        }
        dVar22 = (double)(float)(dVar20 * dVar20);
        dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar20));
        dVar27 = (double)(float)(dVar22 * dVar25);
        iVar12 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)((float)(dVar20 + (double)(float)((double)(float
                                                  )(dVar22 * dVar20) * dVar28)) +
                                                  (float)(dVar25 * dVar26) +
                                                  (float)(dVar27 * dVar30) +
                                                  (float)((double)(float)(dVar22 * dVar27) * dVar29)
                                                  ) * dVar31));
        lVar16 = lVar17 + 0x96;
        uVar10 = (uint)(lVar8 + 0x1e);
        if (DAT_0096bd88 != '\0') {
          lVar16 = lVar8 + 0x1e;
          uVar10 = (uint)(lVar17 + 0x96);
        }
        uVar11 = (iVar12 + 0x1e) * 0x10000;
        uVar10 = (uint)(lVar16 << 8) | uVar10;
        uVar13 = fastfunc::FastLerpColor
                           (0x3fc0a3d700000000,pMVar6->field60_0x90,uVar10 | uVar11 | 0x20000000);
        pMVar6->field60_0x90 = uVar13;
        lVar8 = (ulonglong)DAT_0096ad90 - (ulonglong)(uint)(int)((double)animationSpeed * dVar19);
        if (0x20 < (int)lVar8) {
          lVar8 = 0x20;
        }
        mobyfunc::GetBonePosition(pMVar6,1,&local_a0);
        iVar12 = (int)((longlong)g_heroGlowCount << 4);
        *(undefined4 *)(&g_heroGlowPos + iVar12) = local_a0;
        *(undefined4 *)(iVar12 + 0x96bab4) = local_9c;
        *(undefined4 *)(iVar12 + 0x96bab8) = local_98;
        *(undefined4 *)(iVar12 + 0x96babc) = local_94;
        lVar16 = (longlong)g_heroGlowCount;
        lVar17 = (longlong)g_heroGlowCount;
        *(uint *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) =
             (uint)(lVar8 << 0x18) | uVar11 | uVar10;
        sVar7 = DAT_0096bb92;
        *(undefined4 *)(&DAT_0096bb50 + (int)(lVar17 << 2)) = 0x3e19999a;
        *(undefined4 *)(&DAT_0096bb70 + (int)(lVar16 << 2)) = 0x3d23d70a;
        if (sVar7 == 0) {
          DAT_0096bb92 = 1;
          RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
        }
        g_heroGlowCount = g_heroGlowCount + 1;
      }
    }
    else if (g_CurrentWeapon == 0xd) {
      dVar19 = (double)fastfunc::FastWrapRot(DAT_0096ad9c,mobyutil::g_FrameTime * 4.712389);
      DAT_0096ad9c = (float)dVar19;
      uVar9 = 0x2814d214;
      if ((0.0 < dVar19) && (dVar19 < 2.094395160675049)) {
        uVar9 = 0x281414d2;
      }
      uVar10 = fastfunc::FastLerpColor((double)(DAT_0071f408 * 0.05),pMVar6->field60_0x90,uVar9);
      pMVar6->field60_0x90 = uVar10;
      mobyfunc::GetBonePosition(pMVar6,0,&local_90);
      uVar10 = pMVar6->field60_0x90;
      iVar12 = (int)((longlong)g_heroGlowCount << 4);
      *(undefined4 *)(&g_heroGlowPos + iVar12) = local_90;
      *(undefined4 *)(iVar12 + 0x96bab4) = local_8c;
      *(undefined4 *)(iVar12 + 0x96bab8) = local_88;
      *(undefined4 *)(iVar12 + 0x96babc) = local_84;
      lVar17 = (longlong)g_heroGlowCount;
      lVar8 = (longlong)g_heroGlowCount;
      *(uint *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) = uVar10;
      sVar7 = DAT_0096bb92;
      *(undefined4 *)(&DAT_0096bb50 + (int)(lVar8 << 2)) = 0x3dcccccd;
      *(undefined4 *)(&DAT_0096bb70 + (int)(lVar17 << 2)) = 0x3cf5c28f;
      if (sVar7 == 0) {
        DAT_0096bb92 = 1;
        RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
      }
      g_heroGlowCount = g_heroGlowCount + 1;
    }
  }
  return;
}



