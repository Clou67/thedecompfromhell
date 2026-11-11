//==== 000b72b0  ns=hero  size=0x6db8
// sig: int TransitionMovement(int state, int force)
// callers(94): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0003fde8 camera::camera19::InitCamera_19; 00040440 camera::camera19::UpdateCamera_19; 0007f398 hero::Hero_InitStuff; 000836ac hero::Hero_RevertToRatchet; 00083ac8 hero::Hero_HandleGroundType; 00086b60 hero::SetHeroType; 0009a1b0 hero::Hero_HandleDamage; 000a0c38 hero::Hero_Warp; 000a2560 hero::Hero_TransitionToDefault; 000a2600 hero::Hero_IdleCycleFiringTransition; 000a2750 hero::HandleUnderwaterSwimming; 000a2a08 hero::Hero_SwimSurfTransition; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000a4950 hero::Hero_JumpOrSnapJumpCheck; 000a5310 hero::Hero_JumpLandTransitions; 000a56d8 hero::Hero_CrouchJumpTransitions; 000a9158 hero::Hero_GrindMotion; 000a9d70 hero::Hero_UpdateWeaponReadyAnim; 000aa368 hero::Hero_WalkToPos; 000aa3e0 hero::???_Hero_TransitionByFallSpeed; 000aa9c8 hero::SetPositionAfterMovie; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0015e430 space::PlaySpaceCutscene
// callees(56): 0007d118 hero::Hero_IsSwimming; 0007f45c hero::Hero_GetIdleAnim; 0007f530 hero::TakeDamage; 000816ec hero::Hero_PlaySound; 000817ec hero::Hero_SetRelativeZ; 00083594 hero::Hero_KillLoopingSounds; 000836ac hero::Hero_RevertToRatchet; 00085300 hero::Hero_TransAnim; 000855b8 hero::Hero_EndFiringAnim; 000859d0 hero::Hero_ClearIdleTweakVals; 00089308 hero::Hero_CancelGravity; 00089480 hero::Hero_RelativeXYComponent; 00097370 hero::Hero_SpawnWaterSplash; 00099334 hero::Hero_GetGadgetMoby; 00099370 hero::Hero_RotZRingVal; 00099d10 hero::Hero_RestartFiringAnimLayer; 0009b380 hero::Hero_GetIdealThrustFromPad; 0009ced0 hero::Hero_ScaleMotion; 0009ef10 hero::Hero_SetAttackRot; 000a0b50 hero::Hero_QueueSound; 000a1378 hero::Hero_SpawnLavaDeathParts; 000a1d70 hero::Hero_GetSnapJumpDir; 000a2560 hero::Hero_TransitionToDefault; 000a5294 hero::Hero_SetNextAnimFrame; 000a9d70 hero::Hero_UpdateWeaponReadyAnim; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000d5aa0 hud::Hud_ClearAmmoEntry; 000f1ef0 mobyutil::MB_GetLights; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 0010675c mobyutil::MB_damage; 0010ce18 mobyutil::MB_PathMoveDist; 00110488 mobyutil::ClampVec3Magnitude; 0011539c mobyutil::CreateMotionBlur; 001153c8 mobyutil::AddMotionBlurElem; 001154c8 mobyutil::DeleteMotionBlur; 001367d0 path::PathFindClosestPnt; 0015d12c sound::PlayMobySound
// strings: 00a0feec: 'None' | 000b7134: '?333A ' (raw)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::TransitionMovement(int state,int force)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar11;
  short sVar12;
  uint uVar7;
  int iVar8;
  MobyInstance *pMVar9;
  int iVar10;
  uint uVar13;
  double dVar14;
  double in_f5;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  float local_110;
  float local_10c;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  uint local_b0;
  int local_ac;
  int local_a8 [8];
  
  cVar3 = DAT_0096bd87;
  uVar4 = DAT_0096bd68;
  pMVar9 = g_heroMobyPtr;
  if ((g_heroStateType == 0x14) && ((state != 100 || (force != 2)))) {
    return 0;
  }
  if (((g_gameMode == GAME_MODE_SCENE) || (g_gameMode == GAME_MODE_SPACE)) && (force != 2)) {
    return 0;
  }
  if ((((g_heroHealth == 0) && ((g_heroStateType == 2 || (g_heroStateType == 7)))) && (state != 6))
     && ((((state != 0x3d && (state != 0x47)) &&
          ((state != 0x57 &&
           (((((state != 0x62 && (state != 0x77)) && (state != 0x7b)) &&
             ((state != 0x7c && (state != 0x7f)))) && (state != 0x6a)))))) &&
         ((state != 0x80 && (state != 0x82)))))) {
    return 0;
  }
  DAT_0096bd7c = DAT_0096bd70;
  DAT_0096bd80 = DAT_0096bd74;
  DAT_0096bd78 = g_heroStateTimer;
  DAT_0096bd70 = g_heroState;
  DAT_0096bd74 = g_heroStateType;
  DAT_0096bd68 = 0;
  g_heroInvisible = 0;
  DAT_0096bd8c = 0;
  g_heroState = state;
  if (g_heroType == '\0') {
    DAT_0096bfc0 = 0;
    g_heroMobyPtr->collisionMesh = (float *)0x0;
    DAT_0096bd8d = 0;
    DAT_0096bd87 = '\0';
    DAT_0096bd92 = 0;
    DAT_0096bd8f = 0;
    mobyutil::DeleteMotionBlur(&DAT_0096b350);
  }
  if ((((g_heroType == '\x03') &&
       ((((int)g_heroState < 0x53 || (0x59 < (int)g_heroState)) && (g_heroState != ANIM_TARGET_WALK)
        ))) && (((g_heroState != UNK_66 && (g_heroState != TELEPORTER_USE)) &&
                (g_heroState != STANDING)))) && (g_heroState != FIRST_PERSON_VIEW)) {
    Hero_RevertToRatchet();
    g_heroState = state;
  }
  Hero_RestartFiringAnimLayer(DAT_0096bd70,g_heroState);
  iVar10 = DAT_0096bd78;
  sVar11 = DAT_0096a5ee;
  DAT_0096acd8 = 0;
  if (state < 0x46) {
    if (0x26 < state) {
      if (state < 0x37) {
        if (state < 0x2f) {
          if (0x2a < state) {
            if (state < 0x2d) {
              if (state < 0x2c) {
                uVar7 = 0;
                g_heroStateType = 0xf;
                DAT_0096a744 = 0;
                if (DAT_0096bd70 == GRINDRAIL_WRENCH_ATTACK) {
                  uVar7 = (uint)LZCOUNT(DAT_0096a740) >> 5;
                }
                DAT_0096a740 = uVar7;
                if (force != 0) {
                  iVar10 = idol::GetAnimDuration(4);
                  Hero_TransAnim((float)(longlong)iVar10,DAT_0096a740 + 0x4e,0);
                  pMVar9 = Hero_GetGadgetMoby(0);
                  if (pMVar9 == (MobyInstance *)0x0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (uint)LZCOUNT(pMVar9->oClass - 0x47) >> 5;
                  }
                  if (uVar7 != 0) {
                    mobyutil::MB_SetAnimation(pMVar9,DAT_0096a740 + 0xc,0,iVar10);
                  }
                }
              }
              else {
                g_heroStateType = 0xe;
                g_HeroRequestedCamType = 7;
                if (DAT_00a0fd84 != -1) {
                  DAT_00a0fd84 = DAT_00a0fd84 + 1;
                }
                iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
                if ((int)(uint)DAT_00a0fd86 < iVar10 / 600) {
                  iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
                  sVar11 = (short)(iVar10 >> 0x1f);
                  DAT_00a0fd86 = ((short)(iVar10 / 600) + sVar11) -
                                 ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
                }
                DAT_0096a674 = DAT_0096a670;
                DAT_0096a67c = 0;
                DAT_00a0fd88 = DAT_00a0fd88 | 1 << (Level & 0x3f) | 0x80000000;
                dVar14 = 0.0;
                DAT_0096bd8c = 1;
                iVar10 = *(int *)(DAT_0096a670 + 0x78);
                DAT_0096a69c = 0;
                DAT_0096a69e = 1;
                DAT_0096a688 = 0;
                DAT_0096a694 = 0;
                DAT_0096a698 = 0;
                DAT_0096a680 = *(undefined4 *)(iVar10 + 4);
                if (*(float *)(iVar10 + 0x10) == 0.0) {
                  uVar4 = *(undefined4 *)(iVar10 + 0xc);
                }
                else {
                  uVar4 = *(undefined4 *)(iVar10 + 0x10);
                }
                *(undefined4 *)(iVar10 + 0x14) = uVar4;
                DAT_0096a6a4 = DAT_0071f40c * 0.025;
                DAT_0096a6a8 = DAT_0071f40c * 0.33;
                DAT_0096a6ac = mobyutil::g_FrameTime * 11.0;
                FUN_005e7e70(&DAT_00969d80);
                g_SwingshotReleasedTimer = idol::GetAnimDuration(0x28);
                if ((double)*(float *)(iVar10 + 0x24) != dVar14) {
                  DAT_0096a6a4 = *(float *)(iVar10 + 0x24);
                }
                if ((double)*(float *)(iVar10 + 0x28) != dVar14) {
                  DAT_0096a6a8 = *(float *)(iVar10 + 0x28);
                }
                if ((double)*(float *)(iVar10 + 0x2c) != dVar14) {
                  DAT_0096a6ac = *(float *)(iVar10 + 0x2c);
                }
                dVar14 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a674 + 0x10) -
                                                      g_heroPosition.x),
                                              (double)(*(float *)(DAT_0096a674 + 0x14) -
                                                      g_heroPosition.y));
                DAT_0096a68c = (float)dVar14;
                dVar14 = (double)FUN_005e8548(&g_heroPosition,DAT_0096a674 + 0x10);
                DAT_0096a684 = (float)dVar14;
                DAT_0096a690 = DAT_0071f418 * 27.0;
                if (DAT_0096bd74 == 4) {
                  DAT_0096a690 = DAT_0096a180;
                }
                else if (DAT_0096bd74 == 2) {
                  DAT_0096a690 = DAT_0096a620;
                }
                if (force != 0) {
                  iVar10 = idol::GetAnimDuration(0xb);
                  Hero_TransAnim((float)(longlong)iVar10,0x34,0);
                  g_heroAnimSpeed = 0.7;
                }
              }
            }
            else if (state < 0x2e) {
              g_heroStateType = 2;
              g_HeroRequestedCamType = 7;
              FUN_005e7e70(&DAT_00969d80);
              FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
              if (force != 0) {
                iVar10 = idol::GetAnimDuration(0xf);
                Hero_TransAnim((float)(longlong)iVar10,0xb,0);
              }
            }
            else {
              g_heroStateType = 1;
              g_HeroRequestedCamType = 0;
              dVar14 = (double)FUN_005e7ebc(&DAT_00969de0);
              g_storedNeutralSpeed = (float)dVar14;
              DAT_0096bd68 = 0;
              DAT_0096a098 = 0;
              DAT_0096a09c = 0;
              iVar10 = idol::GetAnimDuration(5);
              Hero_TransAnim((float)(longlong)iVar10,0x2e,0);
            }
            goto LAB_000bdf20;
          }
          if (state < 0x28) {
            g_heroStateType = 8;
            g_HeroRequestedCamType = 0;
            iVar10 = Hero_GetIdleAnim(0);
            iVar6 = idol::GetAnimDuration(10);
            Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
            goto LAB_000bdf20;
          }
          if (state < 0x29) {
            if (Level == Kerwan) {
              g_heroState = STANDING;
            }
            else {
              g_heroStateType = 0xf;
              g_HeroRequestedCamType = 3;
              DAT_0096acd8 = 0x68;
              DAT_0096a250 = 0;
              DAT_0096a258 = 1;
              DAT_0096a26c = 0;
              DAT_0096a268 = -1.5707964;
              if (DAT_0096bd74 != 0xf) {
                DAT_0096a288 = 0xffffffff;
                DAT_0096a28c = 0;
                DAT_0096a290 = 0.0;
              }
              DAT_0096a294 = 0;
              DAT_0096a298 = 0;
              DAT_0096a29c = 0;
              DAT_0096a2a0 = 0;
              uVar19 = 0x3ff0000000000000;
              mobyutil::MB_PathMoveDist
                        (0x3ff0000000000000,DAT_0096a240,auStack_100,local_c0,local_bc,1,
                         DAT_0096a264);
              FUN_005e81f0(&local_110,auStack_100,&g_heroPosition);
              dVar14 = (double)FUN_005e8030(&local_110);
              if ((0.0010000000474974513 < dVar14) &&
                 (FUN_005e7f98(uVar19,&local_110,&local_110), DAT_0096bd74 != 0xf)) {
                dVar14 = (double)FUN_005e81c0(&DAT_00969de0,&local_110);
                DAT_0096a290 = (float)dVar14;
              }
              if (DAT_0096a2b8 != 0) {
                dVar14 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a2b8 + 0x10) -
                                                      g_heroPosition.x),
                                              (double)(*(float *)(DAT_0096a2b8 + 0x14) -
                                                      g_heroPosition.y));
                dVar16 = (double)DAT_0096a268;
                dVar15 = (double)FUN_005e8338((double)local_110,(double)local_10c);
                dVar15 = (double)fastfunc::FastWrapRot((float)dVar16,(float)dVar15);
                dVar14 = (double)fastfunc::FastSubRots((float)dVar14,(float)dVar15);
                if (1.5707963705062866 < dVar14) {
                  DAT_0096a26c = 1;
                  DAT_0096a268 = 1.5707964;
                }
              }
              if (force != 0) {
                iVar6 = DAT_0096a26c + 0x31;
                iVar10 = idol::GetAnimDuration(6);
                Hero_TransAnim((float)(longlong)iVar10,iVar6,0);
              }
            }
            goto LAB_000bdf20;
          }
          goto LAB_000ba7d0;
        }
        if (state == 0x36) {
          g_heroStateType = 0x12;
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          DAT_0096a5dc = 0;
          DAT_0096a378 = idol::GetAnimDuration(0x2d);
          DAT_0096acd8 = 0x68;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0x11);
            Hero_TransAnim((float)(longlong)iVar10,0x65,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x35) {
          g_heroStateType = 0x11;
          g_HeroRequestedCamType = 0xb;
          DAT_0096bd87 = '\x01';
          DAT_0096a5d4 = idol::GetAnimDuration(0x3c);
          if (DAT_0096bd74 == 0x12) {
            Hero_PlaySound(3,0);
            DAT_0096bd68 = 1;
          }
          DAT_0096a5c0 = 0;
          DAT_0096acd8 = 0x68;
          iVar10 = idol::GetAnimDuration(0xb);
          if (DAT_0096bd70 == UNDERWATER_MOVING) {
            iVar10 = idol::GetAnimDuration(0xf);
          }
          if (force != 0) {
            Hero_TransAnim((float)(longlong)iVar10,0x3d,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x34) {
          g_heroStateType = 0x11;
          g_HeroRequestedCamType = 0xb;
          DAT_0096bd87 = '\x01';
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          DAT_0096acd8 = 0x68;
          iVar10 = idol::GetAnimDuration(0x23);
          if (DAT_0096bd70 == HYDRO_PACK_MOVING) {
            iVar10 = -2;
          }
          if (force != 0) {
            Hero_TransAnim((float)(longlong)iVar10,0x3c,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x33) {
          g_heroStateType = 0x11;
          g_HeroRequestedCamType = 0xb;
          DAT_0096bd87 = '\x01';
          DAT_0096a5dc = 0;
          if (DAT_0096bd74 == 0x12) {
            Hero_PlaySound(3,0);
            DAT_0096bd68 = 1;
          }
          else {
            DAT_0096a5d4 = idol::GetAnimDuration(0x2d);
          }
          DAT_0096a5c0 = 0;
          DAT_0096acd8 = 0x68;
          iVar10 = idol::GetAnimDuration(0xc);
          if (force != 0) {
            Hero_TransAnim((float)(longlong)iVar10,0x3b,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x32) {
          g_heroStateType = 9;
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          DAT_0096bd8d = 1;
          DAT_0096bd8c = 1;
          if (force != 0) {
            iVar10 = Hero_GetIdleAnim(0);
            Hero_TransAnim(-1.0,iVar10,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x31) {
          g_heroStateType = 0x10;
          g_HeroRequestedCamType = 3;
          DAT_0096bd87 = '\x01';
          fastfunc::FastMemSet(&DAT_0096a6b0,0,0x20);
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969de0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xf);
            Hero_TransAnim((float)(longlong)iVar10,100,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x30) {
          g_heroStateType = 8;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969de0);
          iVar10 = Hero_GetIdleAnim(0);
          iVar6 = idol::GetAnimDuration(5);
          Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
          DAT_00969eb0 = idol::GetAnimDuration(7);
          goto LAB_000bdf20;
        }
        if (state != 0x2f) goto LAB_000bdf20;
      }
      else {
        if (state < 0x3e) {
          if (state == 0x3d) {
            g_heroStateType = 0x14;
            g_HeroRequestedCamType = 0;
            FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(0xc);
              Hero_TransAnim((float)(longlong)iVar10,0x45,0);
            }
            goto LAB_000bdf20;
          }
          if (state != 0x3c) {
            if (state == 0x3b) {
              g_heroStateType = 9;
              DAT_0096bd87 = '\x01';
              DAT_0096bd8d = 1;
              iVar10 = idol::GetAnimDuration(8);
              Hero_TransAnim((float)(longlong)iVar10,0x44,2);
              pMVar9 = g_currentWeaponMoby;
              if (g_currentWeaponMoby == (MobyInstance *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)LZCOUNT(g_currentWeaponMoby->oClass - 0x47) >> 5;
              }
              if (uVar7 != 0) {
                iVar6 = idol::GetAnimDuration(5);
                mobyutil::MB_SetAnimation(pMVar9,0xb,2,iVar10 + iVar6);
              }
            }
            else if (state == 0x3a) {
              g_heroStateType = 0x13;
              g_HeroRequestedCamType = 0;
              if (force != 0) {
                iVar10 = idol::GetAnimDuration(8);
                Hero_TransAnim((float)(longlong)iVar10,0x48,0);
              }
            }
            else if (state == 0x39) {
              g_heroStateType = 0x13;
              g_HeroRequestedCamType = 0;
              if (force != 0) {
                iVar10 = idol::GetAnimDuration(8);
                Hero_TransAnim((float)(longlong)iVar10,0x47,0);
              }
            }
            else if (state == 0x38) {
              g_heroStateType = 0x13;
              g_HeroRequestedCamType = 0;
              if (force != 0) {
                iVar10 = idol::GetAnimDuration(8);
                Hero_TransAnim((float)(longlong)iVar10,0x46,0);
              }
            }
            else if (state == 0x37) {
              g_heroStateType = 0x12;
              g_HeroRequestedCamType = 0;
              DAT_0096bd87 = '\x01';
              DAT_0096a5ea = 0;
              if (DAT_0096bd74 == 0x11) {
                Hero_SpawnWaterSplash(3,10,0);
                if (WaterTiles != (WaterTile *)0x0) {
                  water::WaterTile_PutDrop
                            (g_heroPosition.x,g_heroPosition.y,0.4,0.3,WaterTiles,WaterTileCnt,
                             (float)in_f5);
                }
              }
              else if (DAT_00969de8 < mobyutil::g_FrameTime * -0.5) {
                iVar10 = fastfunc::FastDoubleToInt((double)(ABS(DAT_00969de8) * 300.0));
                if (0x28 < iVar10) {
                  iVar10 = 0x28;
                }
                Hero_SpawnWaterSplash(3,iVar10,1);
                if (WaterTiles != (WaterTile *)0x0) {
                  water::WaterTile_PutDrop
                            (g_heroPosition.x,g_heroPosition.y,0.5,-0.4,WaterTiles,WaterTileCnt,
                             (float)in_f5);
                }
                DAT_0096a5ea = idol::GetAnimDuration(0x4b);
              }
              DAT_0096a378 = 0;
              if (DAT_0096bd74 == 0x11) {
                if (2500.0 <= (float)(longlong)g_Oxygen) {
                  if ((float)(longlong)g_Oxygen < 7500.0) {
                    sVar11 = idol::GetAnimDuration(0x1b);
                    Hero_QueueSound(7,sVar11,0);
                  }
                }
                else {
                  sVar11 = idol::GetAnimDuration(0x1e);
                  Hero_QueueSound(8,sVar11,0);
                }
              }
              if (DAT_0096bd74 == 0x11) {
                if (2500.0 <= (float)(longlong)g_Oxygen) {
                  if ((float)(longlong)g_Oxygen < 7500.0) {
                    sVar11 = idol::GetAnimDuration(0x28);
                    Hero_QueueSound(7,sVar11,0);
                  }
                }
                else {
                  sVar11 = idol::GetAnimDuration(0x1e);
                  Hero_QueueSound(8,sVar11,0);
                }
              }
              DAT_0096a374 = DAT_00969de8 * 0.37;
              if (DAT_0096a374 < mobyutil::g_FrameTime * -7.0) {
                DAT_0096a374 = mobyutil::g_FrameTime * -7.0;
              }
              DAT_0096a37c = g_heroWaterZ;
              DAT_0096a370 = (g_heroPosition.z - g_heroWaterZ) - -0.12;
              dVar14 = 0.0;
              DAT_0096a380 = 0;
              FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
              DAT_00969e38 = (float)dVar14;
              mobyutil::ClampVec3Magnitude
                        ((double)(mobyutil::g_FrameTime * 5.5),(Vec4 *)&g_heroExternalMomentum);
              DAT_0096acd8 = 0x68;
              if (force != 0) {
                iVar10 = idol::GetAnimDuration(0x16);
                Hero_TransAnim((float)(longlong)iVar10,0x3a,0);
              }
            }
            goto LAB_000bdf20;
          }
          goto LAB_000ba7d0;
        }
        if (state == 0x45) {
          g_heroStateType = 2;
          g_HeroRequestedCamType = 0;
          DAT_0096a624 = DAT_0071f418 * 7.0;
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,4,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x44) {
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x52,1);
            return 0;
          }
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
          g_storedNeutralSpeed = (float)dVar14;
          if (DAT_0096bd70 == STOPPING) {
            g_storedNeutralSpeed = 0.0;
          }
          if (DAT_0096bd74 == 0) {
            dVar14 = (double)FUN_005e7ebc(&g_heroExternalMomentum);
            g_storedNeutralSpeed = (float)dVar14;
          }
          DAT_0096a098 = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,2,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x43) {
          g_heroStateType = 0;
          g_HeroRequestedCamType = 0;
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x52,1);
            return 0;
          }
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(9);
            Hero_TransAnim((float)(longlong)iVar10,0,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x42) {
          g_heroStateType = 0xf;
          g_HeroRequestedCamType = 0;
          if (DAT_0096a250 == 0) {
            TakeDamage(1);
          }
          DAT_00969ea0 = idol::GetAnimDuration(0x4d);
          DAT_0096a2ac = mobyutil::g_FrameTime * 2.5;
          if (DAT_0096a2ac < DAT_0096a290) {
            DAT_0096a290 = DAT_0096a2ac;
          }
          DAT_0096a28c = 0;
          FUN_005e7e70(&g_heroVelocity);
          FUN_005e7e70(&DAT_00969de0);
          DAT_00969dc8 = mobyutil::g_FrameTime * 10.0;
          if (force != 0) {
            Hero_TransAnim(-3.0,0x10,2);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x41) {
          iVar10 = idol::GetAnimDuration(9);
          iVar6 = Hero_GetIdleAnim(0);
          Hero_TransAnim((float)(longlong)iVar10,iVar6,0);
          if (DAT_0096b2f4 != 0) {
            mobyutil::MB_SetAnimation(DAT_0096b2f4,0,0,iVar10);
          }
          goto LAB_000bdf20;
        }
        if (state != 0x3f) {
          if (state == 0x3e) {
            g_heroStateType = 0x15;
            g_HeroRequestedCamType = 8;
            DAT_0096bd87 = '\x01';
            FUN_005e7e98(&DAT_0096a450,&g_heroMtx);
            DAT_0096a540 = DAT_0071f418 * 18.0;
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(5);
              Hero_TransAnim((float)(longlong)iVar10,0x52,0);
            }
          }
          goto LAB_000bdf20;
        }
      }
LAB_000b9018:
      g_heroStateType = 1;
      g_HeroRequestedCamType = 0;
      if ((DAT_0096bd74 != 4) && (DAT_0096bd80 != 4)) {
        dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
        g_storedNeutralSpeed = (float)dVar14;
      }
      if (mobyutil::g_FrameTime * 7.0 < g_storedNeutralSpeed) {
        g_storedNeutralSpeed = mobyutil::g_FrameTime * 7.0;
      }
      DAT_0096a09e = 0;
      Hero_GetIdealThrustFromPad(0x3ff0000000000000,0xb0000,0);
      dVar14 = (double)fastfunc::FastSubRots(g_heroRotation.z,g_heroIdealRotZ);
      if ((1.5707963705062866 < dVar14) &&
         (((DAT_0096bd74 == 7 || (DAT_0096bd70 == STOPPING)) || (DAT_0096bd7c == 3)))) {
        g_storedNeutralSpeed = 0.0;
      }
      DAT_0096acd8 = 0x68;
      if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
        TransitionMovement(0x79,1);
        return 0;
      }
      if ((DAT_0096afc2 == 0) && (g_heroState != ICE_SLIDING)) {
        if ((DAT_0096bd89 == '\0') && (g_heroState != WATER_WALKING)) {
          if ((g_onMagnerail == 1) || (g_heroState == MAGNERAMP_WAITING)) {
            g_heroState = MAGNERAMP_WAITING;
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,0x5b,0);
          }
          else {
            DAT_0096bd68 = 0;
            DAT_0096a098 = 0;
            DAT_0096a09c = 0;
            iVar10 = idol::GetAnimDuration(8);
            if (g_heroHealth == 1) {
              iVar10 = idol::GetAnimDuration(0xc);
            }
            if (DAT_0096bd7c == 0x23) {
              iVar10 = idol::GetAnimDuration(0xf);
            }
            if ((DAT_0096bd7c == 6) || (DAT_0096bd7c == 0x2d)) {
              iVar10 = idol::GetAnimDuration(0x12);
            }
            iVar6 = g_DustHoverState;
            if ((DAT_0096bd80 == 4) && (iVar8 = idol::GetAnimDuration(5), iVar8 < iVar6)) {
              iVar10 = idol::GetAnimDuration(0xd);
            }
            if (force != 0) {
              Hero_TransAnim((float)(longlong)iVar10,DAT_0096bd68 + 3,
                             *(int *)(&DAT_00723338 + DAT_0096bd68 * 4));
            }
          }
        }
        else {
          g_heroState = WATER_WALKING;
          iVar10 = idol::GetAnimDuration(8);
          Hero_TransAnim((float)(longlong)iVar10,0x60,0);
        }
      }
      else {
        if (mobyutil::g_FrameTime * 7.7 < g_storedNeutralSpeed) {
          g_storedNeutralSpeed = mobyutil::g_FrameTime * 7.7;
        }
        dVar14 = 0.0;
        DAT_00969dc8 = 0.0;
        mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 7.7),(Vec4 *)&g_heroVelocity);
        DAT_0096a094 = (float)dVar14;
        g_heroState = ICE_SLIDING;
        iVar10 = idol::GetAnimDuration(8);
        Hero_TransAnim((float)(longlong)iVar10,0x37,0);
      }
      goto LAB_000bdf20;
    }
    if (state < 0x18) {
      if (state < 6) {
        if (state == 4) {
          g_heroStateType = 0xc;
          g_HeroRequestedCamType = 0;
          dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
          g_storedNeutralSpeed = (float)dVar14;
          dVar14 = 7.0;
          if (mobyutil::g_FrameTime * 7.0 < g_storedNeutralSpeed) {
            g_storedNeutralSpeed = mobyutil::g_FrameTime * 7.0;
          }
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x79,1);
            return 0;
          }
          DAT_0096acd8 = 0x68;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          mobyutil::ClampVec3Magnitude
                    ((double)(float)((double)mobyutil::g_FrameTime * dVar14),
                     (Vec4 *)&g_heroExternalMomentum);
          if (mobyutil::g_FrameTime * 3.5 < DAT_00969e48) {
            Hero_PlaySound(0xc,0);
          }
          if (force != 0) {
            bVar1 = g_heroMobyPtr->updateId;
            uVar7 = Hero_GetIdleAnim(0);
            if (bVar1 == uVar7) {
              iVar10 = idol::GetAnimDuration(9);
              Hero_TransAnim((float)(longlong)iVar10,0xd,2);
            }
            else {
              iVar10 = idol::GetAnimDuration(0xe);
              Hero_TransAnim((float)(longlong)iVar10,0xd,2);
            }
            Hero_SetNextAnimFrame(3,0x12);
          }
          goto LAB_000bdf20;
        }
        if (state == 3) {
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          if (DAT_0096afc2 != 0) {
            TransitionMovement(0x2f,1);
            return 0;
          }
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x79,1);
            return 0;
          }
          iVar10 = Hero_UpdateWeaponReadyAnim();
          if (iVar10 == 0) {
            iVar10 = Hero_GetIdleAnim(0);
            if (iVar10 != 0x54) {
              if (force != 0) {
                iVar10 = 6;
                if (((pMVar9->updateId == '\x04') && (3.0 < g_heroAnimFrame)) &&
                   (g_heroAnimFrame < 16.0)) {
                  iVar10 = 5;
                }
                iVar6 = idol::GetAnimDuration(9);
                Hero_TransAnim((float)(longlong)iVar6,iVar10,4);
              }
              goto LAB_000bdf20;
            }
            iVar10 = TransitionMovement(0,0);
            if (iVar10 != 0) {
              iVar10 = Hero_GetIdleAnim(0);
              iVar6 = idol::GetAnimDuration(0x12);
              Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
            }
          }
          return 0;
        }
        if (state != 2) {
          if (state == 1) {
            g_heroStateType = 0;
            g_HeroRequestedCamType = 4;
            DAT_00a1a850 = idol::GetAnimDuration(0x3c);
            if (((DAT_0096bd8a == '\0') &&
                (uVar7 = Hero_GetIdleAnim(1), g_heroMobyPtr->animationId != uVar7)) && (force != 0))
            {
              iVar10 = idol::GetAnimDuration(0x12);
              Hero_TransAnim((float)(longlong)iVar10,uVar7,0);
            }
          }
          else if (state == 0) {
            g_heroStateType = 0;
            g_HeroRequestedCamType = 0;
            uVar4 = idol::GetAnimDuration(0x32);
            uVar5 = idol::GetAnimDuration(100);
            DAT_0096acf0 = mobyutil::MB_randRange(uVar4,uVar5);
            Hero_ClearIdleTweakVals();
            if (g_heroType != '\0') {
              Hero_TransitionToDefault();
              return 1;
            }
            FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
            if ((DAT_0096afc2 != 0) &&
               (dVar14 = (double)FUN_005e7ebc(&g_heroExternalMomentum),
               (double)(mobyutil::g_FrameTime * 0.5) < dVar14)) {
              TransitionMovement(0x2f,1);
              return 0;
            }
            if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
              TransitionMovement(0x79,1);
              return 0;
            }
            DAT_0096acd8 = 0x68;
            if (force != 0) {
              iVar10 = Hero_GetIdleAnim(0);
              if (iVar10 == 0x54) {
                iVar10 = Hero_GetIdleAnim(0);
                iVar6 = idol::GetAnimDuration(0x12);
                Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
              }
              else {
                iVar10 = Hero_GetIdleAnim(0);
                Hero_TransAnim(-1.0,iVar10,0);
              }
            }
          }
          goto LAB_000bdf20;
        }
        goto LAB_000b9018;
      }
      if (0x12 < state) {
        if (0x15 < state) {
          if (state < 0x17) {
            g_heroStateType = 7;
            g_HeroRequestedCamType = 0;
            Hero_ScaleMotion(0.5);
            DAT_00969ece = idol::GetAnimDuration(0x2d);
            FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
            mobyutil::ClampVec3Magnitude
                      ((double)(mobyutil::g_FrameTime * 7.0),(Vec4 *)&g_heroVelocity);
            iVar10 = mobyutil::MB_damage(g_heroMobyPtr,1,0);
            if (iVar10 == 0) {
              TakeDamage(1);
            }
            else {
              uVar4 = fastfunc::FastDoubleToInt((double)*(float *)(iVar10 + 0x2c));
              TakeDamage(uVar4);
            }
            DAT_00969ea0 = idol::GetAnimDuration(0x4d);
            if (force != 0) {
              Hero_TransAnim(-3.0,0x10,3);
              iVar10 = DAT_0096a784 * 4;
              DAT_0096a784 = DAT_0096a784 + 1;
              g_heroMobyPtr->animationBlend = *(float *)(iVar10 + 0x723358 + DAT_0096a780 * 100);
            }
          }
          else {
            g_heroStateType = 8;
            g_HeroRequestedCamType = 0;
            FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969de0);
            iVar10 = Hero_GetIdleAnim(0);
            iVar6 = idol::GetAnimDuration(10);
            Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
            DAT_00969eb0 = idol::GetAnimDuration(7);
          }
          goto LAB_000bdf20;
        }
        goto LAB_000bbed8;
      }
      if (state < 8) {
        if (state < 7) goto LAB_000ba4dc;
      }
      else if (state < 9) {
        g_heroStateType = 5;
        g_HeroRequestedCamType = 0;
        DAT_0096acd8 = 0x68;
        if (mobyutil::g_FrameTime * 4.5 < DAT_00969e40) {
          Hero_ScaleMotion((mobyutil::g_FrameTime * 4.5) / DAT_00969e40);
        }
        FUN_005e7e98(&g_heroVelocity,&DAT_00969de0);
        if (force != 0) {
          Hero_TransAnim(-2.0,0x13,0);
        }
        goto LAB_000bdf20;
      }
    }
    else {
      if (0x1e < state) {
        if (state == 0x26) {
          g_heroStateType = 0xd;
          g_HeroRequestedCamType = 7;
          DAT_0096a654 = 0;
          DAT_0096bd8c = 1;
          DAT_0096a640 = 0;
          dVar14 = (double)FUN_005e8548(&g_heroPosition,DAT_0096a644 + 0x10);
          DAT_0096a65c = (float)dVar14;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(5);
            Hero_TransAnim((float)(longlong)iVar10,0x30,1);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x25) {
          g_heroStateType = 0xd;
          g_HeroRequestedCamType = 7;
          DAT_0096a654 = 0;
          DAT_0096bd8c = 1;
          DAT_0096a640 = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(10);
            Hero_TransAnim((float)(longlong)iVar10,0x30,1);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x24) {
          g_heroStateType = 0xd;
          g_HeroRequestedCamType = 7;
          if (DAT_00a0fd84 != -1) {
            DAT_00a0fd84 = DAT_00a0fd84 + 1;
          }
          iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
          if ((int)(uint)DAT_00a0fd86 < iVar10 / 600) {
            iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
            sVar11 = (short)(iVar10 >> 0x1f);
            DAT_00a0fd86 = ((short)(iVar10 / 600) + sVar11) -
                           ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
          }
          DAT_00a0fd88 = DAT_00a0fd88 | 1 << (Level & 0x3f) | 0x80000000;
          dVar14 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a644 + 0x10) - g_heroPosition.x)
                                        ,(double)(*(float *)(DAT_0096a644 + 0x14) - g_heroPosition.y
                                                 ));
          g_heroIdealRotZ = (float)dVar14;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(5);
            Hero_TransAnim((float)(longlong)iVar10,0x2f,2);
            Hero_SetNextAnimFrame(10,0xe);
          }
          goto LAB_000bdf20;
        }
        if (state != 0x23) {
          if (state == 0x22) {
            g_heroStateType = 0xb;
            g_HeroRequestedCamType = 0x50;
            DAT_0096a1a4 = 0;
            DAT_0096a198 = 0;
            DAT_0096a190 = DAT_0071f418 * 100.0;
            DAT_0096a1a0 = 0x421c0000;
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(6);
              Hero_TransAnim((float)(longlong)iVar10,0x2a,0);
            }
            goto LAB_000bdf20;
          }
          if (state == 0x21) {
            g_heroStateType = 10;
            g_HeroRequestedCamType = 0;
            g_storedNeutralSpeed = mobyutil::g_FrameTime * 9.0;
            if (force != 0) {
              iVar10 = *(int *)(&DAT_00723180 + DAT_0096a740 * 0x2c);
              if (*(int *)(&DAT_0072317c + DAT_0096a740 * 0x2c) == 1) {
                iVar10 = 2;
              }
              iVar6 = idol::GetAnimDuration(5);
              Hero_TransAnim((float)(longlong)iVar6,iVar10 + 0x27,5);
              pMVar9 = Hero_GetGadgetMoby(0);
              if (pMVar9 == (MobyInstance *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)LZCOUNT(pMVar9->oClass - 0x47) >> 5;
              }
              if (uVar7 != 0) {
                mobyutil::MB_SetAnimation(pMVar9,iVar10 + 7,5,iVar6);
              }
            }
            goto LAB_000bdf20;
          }
          if (state != 0x20) {
            if (state == 0x1f) {
              g_heroStateType = 9;
              g_HeroRequestedCamType = 0;
              iVar10 = Hero_GetIdleAnim(0);
              iVar6 = idol::GetAnimDuration(10);
              Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
            }
            goto LAB_000bdf20;
          }
        }
LAB_000bbed8:
        g_heroStateType = 6;
        g_HeroRequestedCamType = 0;
        DAT_0096a738 = 0;
        DAT_0096a734 = 0;
        DAT_0096a744 = 0;
        DAT_0096a74c = 0x3f800000;
        if (g_heroState == CLANK_ATTACK) {
          iVar6 = 0;
          iVar10 = DAT_0096a740 * 0x2c;
          if ((((DAT_0096bd74 == 6) ||
               ((DAT_0096bd80 == 6 &&
                ((g_heroMobyPtr->animationId == '\x0f' || (g_heroMobyPtr->animationId == '\x10')))))
               ) && (*(int *)(&DAT_0072317c + iVar10) == 0)) &&
             (g_heroAnimFrame < (float)(longlong)*(int *)(iVar10 + 0x723184))) {
            uVar7 = *(int *)(&DAT_00723180 + iVar10) + 1;
            iVar6 = uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * -2;
          }
          DAT_0096a740 = iVar6 + 7;
          Hero_SetAttackRot(0x4014000000000000,0x3fe921fb60000000,0x3fe921fb60000000);
          if (force != 0) {
            if (iVar6 == 0) {
              iVar10 = idol::GetAnimDuration(5);
            }
            else {
              iVar10 = idol::GetAnimDuration(5);
            }
            Hero_TransAnim((float)(longlong)iVar10,iVar6 + 0xf,1);
          }
        }
        else if (g_heroState == THROWING_ITEM) {
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(9);
            Hero_TransAnim((float)(longlong)iVar10,0x2c,7);
          }
          if ((g_CurrentWeapon == 10) && (DAT_0096a730 != 0)) {
            DAT_0096a738 = 1;
            dVar14 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a730 + 0x10) -
                                                  g_heroPosition.x),
                                          (double)(*(float *)(DAT_0096a730 + 0x14) -
                                                  g_heroPosition.y));
            DAT_0096a73c = (float)dVar14;
          }
        }
        else if (g_heroState == WALLOPER_SOMETHING) {
          if (g_currentWeaponMoby != (MobyInstance *)0x0) {
            if (force != 0) {
              Hero_TransAnim(-1.0,0x67,4);
              mobyutil::MB_SetAnimation(g_currentWeaponMoby,3,4,0xffffffffffffffff);
            }
            Hero_SetAttackRot(0x4026000000000000,0x3febecde60000000,0xbff0000000000000);
          }
        }
        else if (g_heroState == CROUCH_WRENCH_THROW) {
          if (CHAR_ARRAY_00a0feec._8_2_ != -1) {
            CHAR_ARRAY_00a0feec._8_2_ = CHAR_ARRAY_00a0feec._8_2_ + 1;
          }
          iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._10_2_ < iVar10 / 600) {
            iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
            sVar11 = (short)(iVar10 >> 0x1f);
            CHAR_ARRAY_00a0feec._10_2_ =
                 ((short)(iVar10 / 600) + sVar11) -
                 ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
          }
          CHAR_ARRAY_00a0feec._12_4_ = CHAR_ARRAY_00a0feec._12_4_ | 1 << (Level & 0x3f) | 0x80000000
          ;
          if (CHAR_ARRAY_00a0fdc4._136_2_ != -1) {
            CHAR_ARRAY_00a0fdc4._136_2_ = CHAR_ARRAY_00a0fdc4._136_2_ + 1;
          }
          iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4._138_2_ < iVar10 / 600) {
            iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
            sVar11 = (short)(iVar10 >> 0x1f);
            CHAR_ARRAY_00a0fdc4._138_2_ =
                 ((short)(iVar10 / 600) + sVar11) -
                 ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
          }
          DAT_0096bdd0 = 0;
          DAT_0096a740 = 3;
          CHAR_ARRAY_00a0fdc4._140_4_ =
               CHAR_ARRAY_00a0fdc4._140_4_ | 1 << (Level & 0x3f) | 0x80000000;
          Hero_SetAttackRot(0x402c000000000000,0x3fe0c15240000000,0xbff0000000000000);
          DAT_0096a75c = (uint)LZCOUNT(DAT_0096a75c) >> 5;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(10);
            if (g_heroMobyPtr->animationId == '\x1a') {
              iVar10 = idol::GetAnimDuration(3);
            }
            if (DAT_0096bd70 == FIRST_PERSON_VIEW) {
              iVar10 = idol::GetAnimDuration(0x11);
            }
            Hero_TransAnim((float)(longlong)iVar10,0x1a,0);
            Hero_SetNextAnimFrame(6,0x15);
          }
        }
        else if (g_heroState == HYPER_STRIKE) {
          if (CHAR_ARRAY_00a0feec._0_2_ != -1) {
            CHAR_ARRAY_00a0feec._0_2_ = CHAR_ARRAY_00a0feec._0_2_ + 1;
          }
          iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._2_2_ < iVar10 / 600) {
            iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
            sVar11 = (short)(iVar10 >> 0x1f);
            CHAR_ARRAY_00a0feec._2_2_ =
                 ((short)(iVar10 / 600) + sVar11) -
                 ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
          }
          DAT_0096bdd0 = 0;
          g_HeroRequestedCamType = 0x50;
          CHAR_ARRAY_00a0feec._4_4_ = CHAR_ARRAY_00a0feec._4_4_ | 1 << (Level & 0x3f) | 0x80000000;
          DAT_0096a740 = 4;
          Hero_SetAttackRot(0x4020000000000000,0x3ff0c15240000000,0xbff0000000000000);
          DAT_0096ad88 = 10;
          DAT_0096a750 = 0;
          if (force != 0) {
            iVar6 = idol::GetAnimDuration(0xb);
            iVar10 = DAT_0096bd78;
            if ((DAT_0096bd70 == FLIP_JUMP) && (iVar8 = idol::GetAnimDuration(0x2a), iVar10 < iVar8)
               ) {
              iVar6 = idol::GetAnimDuration(0x11);
            }
            Hero_TransAnim((float)(longlong)iVar6,0x2b,4);
            pMVar9 = Hero_GetGadgetMoby(0);
            if (pMVar9 == (MobyInstance *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)LZCOUNT(pMVar9->oClass - 0x47) >> 5;
            }
            if (uVar7 != 0) {
              mobyutil::MB_SetAnimation(pMVar9,10,4,iVar6 + 2);
            }
          }
        }
        else if (g_heroState == WRENCH_ATTACK) {
          if (DAT_00a0fd64 != -1) {
            DAT_00a0fd64 = DAT_00a0fd64 + 1;
          }
          iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
          if ((int)(uint)DAT_00a0fd66 < iVar10 / 600) {
            iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
            sVar11 = (short)(iVar10 >> 0x1f);
            DAT_00a0fd66 = ((short)(iVar10 / 600) + sVar11) -
                           ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
          }
          DAT_0096bdd0 = 0;
          DAT_00a0fd68 = DAT_00a0fd68 | 1 << (Level & 0x3f) | 0x80000000;
          uVar7 = 0;
          iVar10 = DAT_0096a740 * 0x2c;
          if (((DAT_0096bd74 == 6) && (*(int *)(&DAT_0072317c + iVar10) == 0)) &&
             (g_heroAnimFrame < (float)(longlong)*(int *)(iVar10 + 0x723184))) {
            iVar6 = *(int *)(&DAT_00723180 + iVar10) + 1;
            iVar10 = iVar6 / 3 + (iVar6 >> 0x1f);
            uVar7 = iVar6 + (iVar10 - (iVar10 >> 0x1f)) * -3;
          }
          DAT_0096a740 = uVar7;
          Hero_SetAttackRot(0x4014000000000000,0x3fe921fb60000000,0x3fe921fb60000000);
          if (force != 0) {
            if (uVar7 == 0) {
              iVar6 = 0;
              iVar10 = idol::GetAnimDuration(5);
            }
            else if (uVar7 == 1) {
              iVar6 = 2;
              iVar10 = idol::GetAnimDuration(7);
            }
            else {
              iVar6 = 4;
              iVar10 = idol::GetAnimDuration(7);
            }
            if ((int)uVar7 < 2 && DAT_0096a738 != 0) {
              dVar14 = (double)fastfunc::FastSubRots(DAT_0096a73c,g_heroRotation.z);
              iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar14 * 1.5));
              iVar10 = iVar8 + iVar10;
            }
            Hero_TransAnim((float)(longlong)iVar10,uVar7 + 0x17,iVar6 >> 1);
            pMVar9 = Hero_GetGadgetMoby(0);
            if (pMVar9 == (MobyInstance *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = (uint)LZCOUNT(pMVar9->oClass - 0x47) >> 5;
            }
            if (uVar13 != 0) {
              mobyutil::MB_SetAnimation(pMVar9,uVar7 + 3,iVar6 >> 1,iVar10);
            }
          }
        }
        goto LAB_000bdf20;
      }
      if (state == 0x1e) {
        g_heroStateType = 0;
        g_HeroRequestedCamType = 0x51;
        bVar1 = g_heroMobyPtr->animationId;
        uVar7 = Hero_GetIdleAnim(1);
        if (bVar1 != uVar7) {
          iVar10 = Hero_GetIdleAnim(1);
          iVar6 = idol::GetAnimDuration(5);
          Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
        }
        goto LAB_000bdf20;
      }
      if (state == 0x1d) {
        g_heroStateType = 9;
        g_HeroRequestedCamType = 0;
        DAT_0096bd8c = 1;
        iVar10 = Hero_GetIdleAnim(0);
        iVar6 = idol::GetAnimDuration(10);
        Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
        goto LAB_000bdf20;
      }
      if (state != 0x1c) {
        if (state == 0x1b) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          DAT_0096bd87 = '\x01';
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(6);
            Hero_TransAnim((float)(longlong)iVar10,0x25,0);
          }
        }
        else if (state == 0x1a) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          DAT_0096bd87 = '\x01';
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(6);
            Hero_TransAnim((float)(longlong)iVar10,0x24,0);
          }
        }
        else if (state == 0x19) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          DAT_0096bd87 = '\x01';
          DAT_0096acd8 = 0x68;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(6);
            Hero_TransAnim((float)(longlong)iVar10,0x21,0);
          }
        }
        else if (state == 0x18) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          DAT_0096a1cc = DAT_0071f418 * 24.0;
          DAT_0096a1d0 = g_heroPosition.z;
          if (DAT_0096bd74 == 4) {
            DAT_0096a1cc = DAT_0096a180;
            DAT_0096a1d0 = DAT_0096a0f0;
          }
          DAT_0096bd87 = '\x01';
          if (force != 0) {
            if (DAT_00969e44 <= mobyutil::g_FrameTime * 3.5) {
              iVar10 = idol::GetAnimDuration(9);
              Hero_TransAnim((float)(longlong)(iVar10 + 2),0x20,1);
            }
            else {
              iVar10 = idol::GetAnimDuration(9);
              Hero_TransAnim((float)(longlong)iVar10,0x20,0);
            }
          }
        }
        goto LAB_000bdf20;
      }
    }
  }
  else if (state < 0x65) {
    if (state < 0x55) {
      if (0x4c < state) {
        if (state == 0x54) {
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x58,1);
            return 0;
          }
          dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
          g_storedNeutralSpeed = (float)dVar14;
          if (mobyutil::g_FrameTime * 1.5 < g_storedNeutralSpeed) {
            g_storedNeutralSpeed = mobyutil::g_FrameTime * 1.5;
          }
          DAT_0096a098 = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,1,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x53) {
          g_heroStateType = 0;
          g_HeroRequestedCamType = 0;
          if ((DAT_0096afca != '\0') && (DAT_00969fec == 0)) {
            TransitionMovement(0x58,1);
            return 0;
          }
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xe);
            Hero_TransAnim((float)(longlong)iVar10,0,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x52) {
          g_heroStateType = 2;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,4,0);
          }
          goto LAB_000bdf20;
        }
        if (state != 0x51) {
          if (state == 0x4f) {
            g_heroStateType = 5;
            g_HeroRequestedCamType = 0;
            if (mobyutil::g_FrameTime * 4.5 < DAT_00969e40) {
              Hero_ScaleMotion((mobyutil::g_FrameTime * 4.5) / DAT_00969e40);
            }
            FUN_005e7e98(&g_heroVelocity,&DAT_00969de0);
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(0xc);
              Hero_TransAnim((float)(longlong)iVar10,0xe,0);
            }
          }
          else if (state == 0x4e) {
            g_heroStateType = 3;
            g_HeroRequestedCamType = 0xd;
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(6);
              Hero_TransAnim((float)(longlong)iVar10,0xc,0);
            }
          }
          else if (state == 0x4d) {
            g_heroStateType = 3;
            g_HeroRequestedCamType = 0xd;
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(6);
              Hero_TransAnim((float)(longlong)iVar10,0xb,0);
            }
          }
          goto LAB_000bdf20;
        }
        goto LAB_000bbed8;
      }
      if (state != 0x4c) {
        if (state == 0x4b) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(6);
            Hero_TransAnim((float)(longlong)iVar10,10,0);
          }
          goto LAB_000bdf20;
        }
        if (state == 0x4a) {
          g_heroStateType = 3;
          g_HeroRequestedCamType = 0xd;
          DAT_0096a1cc = DAT_0071f418 * 12.0;
          DAT_0096a1d0 = g_heroPosition.z;
          if (DAT_0096bd74 == 4) {
            DAT_0096a1cc = DAT_0096a180;
            DAT_0096a1d0 = DAT_0096a0f0;
          }
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(7);
            Hero_TransAnim((float)(longlong)(iVar10 + 2),8,0x12);
          }
          goto LAB_000bdf20;
        }
        if (state != 0x49) {
          if (state == 0x47) {
            g_heroStateType = 0x14;
            g_HeroRequestedCamType = 0;
            g_heroHealth = 0;
            FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(0xc);
              Hero_TransAnim((float)(longlong)iVar10,5,0);
            }
          }
          else if (state == 0x46) {
            g_heroStateType = 7;
            g_HeroRequestedCamType = 0;
            Hero_ScaleMotion(0.5);
            FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
            mobyutil::ClampVec3Magnitude
                      ((double)(mobyutil::g_FrameTime * 5.0),(Vec4 *)&g_heroVelocity);
            TakeDamage(1);
            DAT_00969ece = idol::GetAnimDuration(0x2d);
            DAT_00969ea0 = idol::GetAnimDuration(0x32);
            if (force != 0) {
              Hero_TransAnim(-3.0,6,3);
              iVar10 = DAT_0096a784 * 4;
              DAT_0096a784 = DAT_0096a784 + 1;
              g_heroMobyPtr->animationBlend = *(float *)(iVar10 + 0x723358 + DAT_0096a780 * 100);
            }
          }
          goto LAB_000bdf20;
        }
      }
    }
    else {
      if (state < 0x5c) {
        if (state == 0x5b) {
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
          g_storedNeutralSpeed = (float)dVar14;
          DAT_0096a098 = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,3,0x12);
          }
        }
        else if (state == 0x5a) {
          g_heroStateType = 0;
          g_HeroRequestedCamType = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xf);
            Hero_TransAnim((float)(longlong)iVar10,0,0);
          }
        }
        else if (state == 0x59) {
          g_heroStateType = 0;
          g_HeroRequestedCamType = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(7);
            Hero_TransAnim((float)(longlong)iVar10,4,0);
            Hero_SetNextAnimFrame(0xe,0x22);
          }
        }
        else if (state == 0x58) {
          g_heroStateType = 2;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,6,0);
          }
        }
        else if (state == 0x57) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,3,0);
          }
        }
        else if (state == 0x56) {
          g_heroStateType = 7;
          g_HeroRequestedCamType = 0;
          Hero_ScaleMotion(0.5);
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 5.0),(Vec4 *)&g_heroVelocity);
          TakeDamage(1);
          DAT_00969ea0 = idol::GetAnimDuration(0x4d);
          if (force != 0) {
            Hero_TransAnim(-3.0,2,3);
            iVar10 = DAT_0096a784 * 4;
            DAT_0096a784 = DAT_0096a784 + 1;
            g_heroMobyPtr->animationBlend = *(float *)(iVar10 + 0x723358 + DAT_0096a780 * 100);
          }
        }
        else if (state == 0x55) {
          g_heroStateType = 2;
          g_HeroRequestedCamType = 0;
          DAT_0096a620 = DAT_0071f418 * 24.0;
          DAT_0096a624 = DAT_0071f418 * 7.0;
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(7);
            Hero_TransAnim((float)(longlong)iVar10,6,0);
          }
        }
        goto LAB_000bdf20;
      }
      if (0x5f < state) {
        if (state < 0x62) {
          if (state < 0x61) {
            uVar7 = 0;
            g_heroStateType = 6;
            g_HeroRequestedCamType = 0;
            if ((DAT_0096bd70 == GIANT_CLANK_ATTACK) ||
               ((DAT_0096bd7c == 0x60 && (iVar6 = idol::GetAnimDuration(10), iVar10 < iVar6)))) {
              uVar7 = (int)(DAT_0096a740 + 1) % 3;
            }
            DAT_0096a740 = uVar7;
            iVar10 = idol::GetAnimDuration(7);
            if (DAT_0096bd70 == GIANT_CLANK_ATTACK) {
              iVar10 = idol::GetAnimDuration(0xd);
            }
            if (force != 0) {
              Hero_TransAnim((float)(longlong)iVar10,DAT_0096a740 + 9,1);
            }
          }
          else {
            g_heroStateType = 6;
            g_HeroRequestedCamType = 0;
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(8);
              Hero_TransAnim((float)(longlong)iVar10,0xc,0);
            }
          }
        }
        else if (state < 99) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,7,0);
          }
        }
        else {
          g_heroStateType = 0x18;
          DAT_0096bd8c = 1;
          Hero_EndFiringAnim();
          if (force != 0) {
            iVar10 = Hero_GetIdleAnim(0);
            Hero_TransAnim(-1.0,iVar10,0);
          }
        }
        goto LAB_000bdf20;
      }
      if (state < 0x5e) {
        if (state < 0x5d) {
          g_heroStateType = 2;
          g_HeroRequestedCamType = 0;
          DAT_0096a620 = DAT_0071f418 * 24.0;
          DAT_0096a624 = DAT_0071f418 * 7.0;
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            if (g_heroGroundDist <= 2.5) {
              iVar10 = idol::GetAnimDuration(0xb);
              Hero_TransAnim((float)(longlong)iVar10,0,0);
            }
            else {
              iVar10 = idol::GetAnimDuration(8);
              Hero_TransAnim((float)(longlong)iVar10,5,0);
            }
          }
        }
        else {
          g_heroStateType = 7;
          g_HeroRequestedCamType = 0;
          Hero_ScaleMotion(0.5);
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 7.0),(Vec4 *)&g_heroVelocity);
          DAT_00969ea0 = idol::GetAnimDuration(0x4d);
          if (force != 0) {
            Hero_TransAnim(-3.0,6,3);
            iVar10 = DAT_0096a784 * 4;
            DAT_0096a784 = DAT_0096a784 + 1;
            g_heroMobyPtr->animationBlend = *(float *)(iVar10 + 0x723358 + DAT_0096a780 * 100);
          }
        }
        goto LAB_000bdf20;
      }
      if (0x5e < state) {
        g_heroStateType = 6;
        g_HeroRequestedCamType = 0;
        if (force != 0) {
          iVar10 = idol::GetAnimDuration(8);
          Hero_TransAnim((float)(longlong)iVar10,8,0);
        }
        goto LAB_000bdf20;
      }
    }
  }
  else {
    if (0x73 < state) {
      if (0x7b < state) {
        if (state == 0x82) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          g_heroHealth = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(10);
            Hero_TransAnim((float)(longlong)iVar10,0x80,0);
          }
        }
        else if (state == 0x81) {
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          DAT_0096bfaa = 1;
          DAT_0096acd8 = 0x68;
          if (mobyutil::g_FrameTime * 4.5 < DAT_00969e40) {
            Hero_ScaleMotion((mobyutil::g_FrameTime * 4.5) / DAT_00969e40);
          }
          FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
          if (force != 0) {
            Hero_TransAnim(-2.0,0x13,0);
          }
        }
        else if (state == 0x80) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          g_heroHealth = 0;
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 3.5),(Vec4 *)&g_heroExternalMomentum);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,0x7c,0);
          }
        }
        else if (state == 0x7f) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          g_heroHealth = 0;
          DAT_0096a37c = g_heroWaterZ - 0.37;
          DAT_0096a374 = DAT_00969de8 * 0.2;
          if (DAT_0096a374 < mobyutil::g_FrameTime * -7.0) {
            DAT_0096a374 = mobyutil::g_FrameTime * -7.0;
          }
          DAT_0096a370 = g_heroPosition.z - DAT_0096a37c;
          DAT_0096bd87 = '\x01';
          DAT_0096a380 = 0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0xb);
            Hero_TransAnim((float)(longlong)iVar10,0x74,0);
          }
        }
        else if (state == 0x7d) {
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          g_heroHealth = 0;
          g_heroGhostFrames = 10000;
          DAT_00969fd4 = g_heroGroundZ;
          FUN_005e7e98(&g_ratchetMoby->pos,&g_heroPosition);
          sound::PlayMobySound(9,0,g_ratchetMoby);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,0x11,0);
          }
        }
        else if (state == 0x7c) {
          if (Level == Blarg) {
            TransitionMovement(0x3d,1);
            DAT_0096bfd4 = 1;
            mobyutil::MB_GetLights(g_heroMobyPtr,&local_b0,&local_ac,local_a8);
            DAT_0096bfd8 = local_ac << 8 | local_b0 | local_a8[0] << 0x10 | 0x80000000;
            return 0;
          }
          g_heroStateType = 0x14;
          g_HeroRequestedCamType = 0;
          g_heroHealth = 0;
          g_heroGhostFrames = 10000;
          DAT_00969fd4 = g_heroGroundZ;
          Hero_PlaySound(9,0);
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,0x71,0);
          }
        }
        goto LAB_000bdf20;
      }
      if (0x77 < state) {
        if (state < 0x7a) {
          if (state < 0x79) {
            g_heroStateType = 9;
            g_HeroRequestedCamType = 0;
            DAT_0096bd87 = '\x01';
            DAT_0096bd8c = 1;
            FUN_005e7e70(&g_heroVelocity);
            if (force != 0) {
              Hero_TransAnim(-1.0,0xb,0);
            }
          }
          else {
            g_heroStateType = 2;
            g_HeroRequestedCamType = 0;
            FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
            if (force != 0) {
              iVar10 = idol::GetAnimDuration(0xc);
              Hero_TransAnim((float)(longlong)iVar10,0xb,0);
            }
          }
        }
        else if (state < 0x7b) {
          g_heroStateType = 10;
          g_HeroRequestedCamType = 0;
          dVar14 = (double)fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
          DAT_0096a748 = (float)dVar14;
          g_storedNeutralSpeed = mobyutil::g_FrameTime * 9.0;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,0x29,5);
          }
        }
        else {
          g_heroStateType = 0x19;
          g_HeroRequestedCamType = 0;
          if (Level == Quartu) {
            Hero_SpawnLavaDeathParts();
          }
          g_heroGhostFrames = 10000;
          Hero_PlaySound(9,0);
          DAT_0096acd8 = 0x68;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,0x71,0);
          }
        }
        goto LAB_000bdf20;
      }
      if (0x74 < state) {
        if (state < 0x77) {
          g_heroStateType = 7;
          g_HeroRequestedCamType = 0;
          Hero_ScaleMotion(0.5);
          DAT_0096bd87 = '\x01';
          FUN_005e7e98(&g_heroVelocity,&DAT_00969de0);
          iVar10 = mobyutil::MB_damage(g_heroMobyPtr,1,0);
          if (iVar10 == 0) {
            TakeDamage(1);
          }
          else {
            uVar4 = fastfunc::FastDoubleToInt((double)*(float *)(iVar10 + 0x2c));
            TakeDamage(uVar4);
          }
          DAT_00969ea0 = idol::GetAnimDuration(0x4d);
          if (force != 0) {
            if (g_heroState == UNK_75) {
              Hero_TransAnim(-3.0,0x70,3);
            }
            else {
              Hero_TransAnim(-3.0,0x6f,3);
            }
            iVar10 = DAT_0096a784 * 4;
            DAT_0096a784 = DAT_0096a784 + 1;
            g_heroMobyPtr->animationBlend = *(float *)(iVar10 + 0x723358 + DAT_0096a780 * 100);
          }
          goto LAB_000bdf20;
        }
LAB_000ba4dc:
        g_heroStateType = 2;
        g_HeroRequestedCamType = 0;
        DAT_0096a620 = DAT_0071f418 * 24.0;
        DAT_0096a624 = DAT_0071f418 * 7.0;
        if (g_heroState == DEATH_FALLING) {
          if (g_heroType == '\0') {
            iVar10 = Hero_PlaySound(0x17,0x20);
            DAT_0096bf92 = (undefined2)iVar10;
          }
          dVar16 = 3.1415927410125732;
          dVar15 = 4.363323211669922;
          dVar14 = (double)mobyutil::MB_randRangeSigned
                                     ((double)(mobyutil::g_FrameTime * 3.1415927),
                                      (double)(mobyutil::g_FrameTime * 4.363323));
          DAT_0096a630 = (float)dVar14;
          dVar14 = (double)mobyutil::MB_randRangeSigned
                                     ((double)(float)((double)mobyutil::g_FrameTime * dVar16),
                                      (double)(float)((double)mobyutil::g_FrameTime * dVar15));
          DAT_0096a634 = (float)dVar14;
        }
        DAT_0096acd8 = 0x68;
        DAT_0096bd68 = 0;
        FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
        if (force != 0) {
          if (g_heroType == '\x01') {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,4,0);
            return 1;
          }
          if (g_heroType == '\x03') {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,6,0);
            return 1;
          }
          if (g_heroGroundDist <= 1.75) {
            iVar10 = idol::GetAnimDuration(10);
            Hero_TransAnim((float)(longlong)iVar10,10,0);
          }
          else {
            iVar10 = idol::GetAnimDuration(0xc);
            Hero_TransAnim((float)(longlong)iVar10,0xb,0);
            DAT_0096bd68 = 1;
          }
        }
        goto LAB_000bdf20;
      }
      bVar2 = false;
      if ((int)Level < 0xb) {
        if ((int)Level < 5) {
          if ((0 < (int)Level) && ((int)Level < 3)) goto LAB_000ba14c;
        }
        else if ((int)Level < 8) {
          if ((int)Level < 7) goto LAB_000ba14c;
        }
        else if ((int)Level < 9) goto LAB_000ba14c;
      }
      else if ((int)Level < 0x10) {
        if (Level != Gemlik) {
LAB_000ba14c:
          bVar2 = true;
        }
      }
      else if (Level == Veldin2) goto LAB_000ba14c;
      if (bVar2) {
        g_heroState = STANDING;
      }
      else {
        g_heroStateType = 0x1a;
        g_HeroRequestedCamType = 3;
        DAT_0096bd87 = '\x01';
        DAT_0096acd8 = 0x68;
        DAT_0096a2e0 = 0;
        dVar15 = 0.0;
        DAT_0096a2f8 = 0;
        uVar19 = 0x3ff0000000000000;
        mobyutil::MB_PathMoveDist
                  (0x3ff0000000000000,DAT_0096a2d0,auStack_e0,local_b8,local_b4,0xb0000,DAT_0096a2ec
                  );
        FUN_005e81f0(auStack_f0,auStack_e0,&g_heroPosition);
        dVar14 = (double)FUN_005e8030(auStack_f0);
        if (0.0010000000474974513 < dVar14) {
          FUN_005e7f98(uVar19,auStack_f0,auStack_f0);
          dVar14 = (double)FUN_005e81c0(&DAT_00969de0,auStack_f0);
          DAT_0096a2e4 = (float)dVar14;
        }
        DAT_0096a2e4 = DAT_0096a2e4 * 0.5;
        if ((double)DAT_0096a2e4 < dVar15) {
          DAT_0096a2e4 = (float)dVar15;
        }
        iVar10 = idol::GetAnimDuration(8);
        Hero_TransAnim((float)(longlong)iVar10,0x73,0);
      }
      goto LAB_000bdf20;
    }
    if (0x6b < state) {
      if (state != 0x73) {
        if (state == 0x72) {
          g_heroStateType = 9;
          g_HeroRequestedCamType = 0;
          DAT_0096bd8c = 1;
          Hero_EndFiringAnim();
          iVar10 = Hero_GetIdleAnim(0);
          iVar6 = idol::GetAnimDuration(10);
          Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
        }
        else if (state == 0x71) {
          g_heroStateType = 1;
          g_HeroRequestedCamType = 0;
          if (force != 0) {
            if (DAT_0096bd70 == CROUCHING) {
              iVar10 = idol::GetAnimDuration(5);
              Hero_TransAnim((float)(longlong)iVar10,0x5e,2);
            }
            else {
              iVar10 = idol::GetAnimDuration(8);
              Hero_TransAnim((float)(longlong)iVar10,0x5e,1);
            }
          }
        }
        else if (state == 0x70) {
          uVar7 = 5;
          g_heroStateType = 6;
          DAT_0096a744 = 0;
          if (DAT_0096bd70 == MAGNERAMP_ATTACK) {
            uVar7 = ((uint)LZCOUNT(*(undefined4 *)(&DAT_00723180 + DAT_0096a740 * 0x2c)) >> 5) + 5;
          }
          iVar10 = *(int *)(&DAT_00723180 + uVar7 * 0x2c);
          DAT_0096a740 = uVar7;
          if (force != 0) {
            iVar6 = idol::GetAnimDuration(5);
            Hero_TransAnim((float)(longlong)iVar6,iVar10 + 0x5c,(uint)(iVar10 == 0));
            pMVar9 = Hero_GetGadgetMoby(0);
            if (pMVar9 == (MobyInstance *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)LZCOUNT(pMVar9->oClass - 0x47) >> 5;
            }
            if (uVar7 != 0) {
              mobyutil::MB_SetAnimation(pMVar9,iVar10 + 0xc,iVar10 == 0,iVar6);
            }
          }
        }
        else if (state == 0x6f) {
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          Hero_KillLoopingSounds();
          DAT_0096a5a4 = 0;
          DAT_0096acd8 = 0x68;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(4);
            Hero_TransAnim((float)(longlong)iVar10,0x62,4);
          }
        }
        else if (state == 0x6e) {
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          Hero_KillLoopingSounds();
          DAT_0096a5a4 = 0;
          DAT_0096a59e = idol::GetAnimDuration(0x46);
          g_heroWaterZ = DAT_0096a580;
          iVar10 = fastfunc::FastDoubleToInt((double)(ABS(DAT_00969de8) * 300.0));
          if (0x28 < iVar10) {
            iVar10 = 0x28;
          }
          Hero_SpawnWaterSplash(3,iVar10,1);
          Hero_PlaySound(3,0);
          DAT_0096a5ea = idol::GetAnimDuration(0x4b);
          DAT_0096a374 = DAT_00969de8 * 0.3;
          if (DAT_0096a374 < mobyutil::g_FrameTime * -5.7) {
            DAT_0096a374 = mobyutil::g_FrameTime * -5.7;
          }
          DAT_0096a37c = DAT_0096a580;
          DAT_0096a370 = (g_heroPosition.z - DAT_0096a580) - -0.12;
          DAT_0096a380 = 0;
          if (DAT_0096a370 <= 0.2) {
            if (DAT_0096a370 < -0.2) {
              DAT_0096a370 = -0.2;
            }
          }
          else {
            DAT_0096a370 = 0.2;
          }
          FUN_005e7e70(&g_heroVelocity);
          FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
          Hero_CancelGravity((float *)&g_heroExternalMomentum,(float *)&g_heroExternalMomentum);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 9.5),(Vec4 *)&g_heroExternalMomentum);
          DAT_0096acd8 = 0x68;
          if (force != 0) {
            iVar10 = idol::GetAnimDuration(0x11);
            Hero_TransAnim((float)(longlong)iVar10,0x3a,0);
          }
        }
        else if (state == 0x6d) {
          g_HeroRequestedCamType = 0;
          DAT_0096bd87 = '\x01';
          Hero_KillLoopingSounds();
          DAT_0096a5a4 = 0;
          FUN_005e822c(0x3fe6666660000000,&g_heroVelocity,&DAT_00969df0);
          DAT_00969dc8 = mobyutil::g_FrameTime * 10.0;
          iVar10 = idol::GetAnimDuration(4);
          Hero_TransAnim((float)(longlong)iVar10,0x61,3);
        }
        else if (state == 0x6c) {
          g_heroStateType = 0x16;
          g_HeroRequestedCamType = 8;
          DAT_0096bd87 = '\x01';
          DAT_0096a550 = 0;
          if (force != 0) {
            iVar10 = 0x55;
            if (DAT_0096a5ae != '\0') {
              iVar10 = 0x7f;
            }
            iVar6 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar6,iVar10,5);
          }
        }
        goto LAB_000bdf20;
      }
      goto LAB_000b9018;
    }
    if (state == 0x6b) {
      g_heroStateType = 0x16;
      g_HeroRequestedCamType = 8;
      DAT_0096bd87 = '\x01';
      DAT_0096bd92 = 1;
      DAT_0096a57c = 0;
      DAT_0096a59c = 0;
      if (((DAT_0096bd70 == HOVERBOARD_DYING) || (DAT_0096bd70 == HOVERBOARD_WALL_BONK)) ||
         (DAT_0096bd70 == HOVERBOARD_WATER_DYING)) {
        if ((DAT_0096a594 != (Spline *)0x0) &&
           (iVar10 = path::PathFindClosestPnt(0.0,(Vec4 *)&g_heroPosition,DAT_0096a594),
           iVar10 < DAT_0096a578)) {
          DAT_0096a578 = (short)iVar10;
        }
        DAT_0096a5a4 = 0;
        DAT_0096a5ae = '\0';
        DAT_0096a58f = 0;
        DAT_0096a598 = 0;
      }
      iVar10 = g_heroBoardMoby;
      DAT_0096a59c = 0;
      DAT_0096a57c = 0;
      if (DAT_0096bd74 == 0x16) {
        dVar14 = (double)FUN_005e81c0(&g_heroGravityDir,&DAT_00969de0);
        DAT_0096a534 = (float)-dVar14;
      }
      else {
        if (Level == Rilgar) {
          g_heroPosition.x = 247.0;
          g_heroPosition.y = 287.0;
          g_heroPosition.z = 76.0;
          g_heroRotation.z = -2.1;
        }
        fastfunc::FastMemSet(&DAT_0096a3a0,0,0x210);
        DAT_0096a570 = MobyInstance + *(int *)(*(int *)(iVar10 + 0x78) + 0x28);
        DAT_0096a540 = DAT_0071f418 * 22.0;
        DAT_0096a560 = -1;
        DAT_0096a55c = 0x3f9c61aa;
        g_heroBoardMoby = iVar10;
        if (MiscLevelFlags.Zoomerator != false) {
          hud::Hud_ClearAmmoEntry();
          iVar10 = idol::GetAnimDuration(0x11);
          DAT_0096a560 = hud::RegisterHUDCallback
                                   (0x10,0xffff,&PTR_TrickHud_Init_00705848,
                                    &PTR_TrickHud_Update_00705850,
                                    &PTR_Draw_HoverboardTrickHud_00705860,&DAT_0096a544,
                                    (int)((float)(longlong)iVar10 * 60.0));
        }
        DAT_0096a554 = g_heroRotation.z;
        hud::RegisterHUDCallback
                  (5,0xffff,&PTR_RaceHud_Init_007058c8,&PTR_RaceHud_Update_007058d0,
                   &PTR_Draw_RaceLapPlaceHud_007058e0,(int *)0x0,0);
        hud::RegisterHUDCallback
                  (7,0xffff,&PTR_RaceHud_Init_007058c8,&PTR_RaceHud_Update_007058d0,
                   &PTR_Draw_RaceTimeScoreHud_007058e8,(int *)0x0,0);
      }
      if (force != 0) {
        if (DAT_0096a5ae == '\0') {
          iVar10 = idol::GetAnimDuration(5);
          Hero_TransAnim((float)(longlong)iVar10,0x52,0);
        }
        else {
          iVar10 = idol::GetAnimDuration(5);
          Hero_TransAnim((float)(longlong)iVar10,0x7d,0);
        }
      }
      goto LAB_000bdf20;
    }
    if (state == 0x6a) {
      g_heroStateType = 0x14;
      g_HeroRequestedCamType = 0;
      DAT_0096bd87 = '\x01';
      g_heroHealth = 0;
      sVar12 = idol::GetAnimDuration(0x32);
      if ((sVar12 < sVar11) && (CHAR_ARRAY_00a0feec._96_2_ != -1)) {
        CHAR_ARRAY_00a0feec._96_2_ = CHAR_ARRAY_00a0feec._96_2_ + 1;
      }
      iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._98_2_ < iVar10 / 600) {
        iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
        sVar11 = (short)(iVar10 >> 0x1f);
        CHAR_ARRAY_00a0feec._98_2_ =
             ((short)(iVar10 / 600) + sVar11) -
             ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._100_4_ = CHAR_ARRAY_00a0feec._100_4_ | 1 << (Level & 0x3f) | 0x80000000;
      if ((2 < DAT_0096a5f0) && (CHAR_ARRAY_00a0feec._232_2_ != -1)) {
        CHAR_ARRAY_00a0feec._232_2_ = CHAR_ARRAY_00a0feec._232_2_ + 1;
      }
      iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._234_2_ < iVar10 / 600) {
        iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
        sVar11 = (short)(iVar10 >> 0x1f);
        CHAR_ARRAY_00a0feec._234_2_ =
             ((short)(iVar10 / 600) + sVar11) -
             ((short)((short)(iVar10 / 0x2580000) + sVar11) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._236_4_ = CHAR_ARRAY_00a0feec._236_4_ | 1 << (Level & 0x3f) | 0x80000000;
      FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
      if (force != 0) {
        iVar10 = idol::GetAnimDuration(10);
        Hero_TransAnim((float)(longlong)iVar10,0x5f,0);
      }
      goto LAB_000bdf20;
    }
    if (state != 0x69) {
      if (state == 0x68) {
        iVar10 = 0;
        if ((DAT_0096bd70 == MUD_JUMP) ||
           (((DAT_0096bd7c == 0x69 && (DAT_0096bd74 != 0)) && (DAT_0096bd70 != GLIDING)))) {
          iVar10 = DAT_0096b340 + 1;
        }
        g_heroStateType = 0x19;
        g_HeroRequestedCamType = 0;
        DAT_0096b340 = iVar10;
        Hero_PlaySound(9,0);
        DAT_0096acd8 = 0x68;
        g_heroIdealSpeed = 0;
        g_storedNeutralSpeed = 0.0;
        if (force != 0) {
          iVar10 = idol::GetAnimDuration(8);
          Hero_TransAnim((float)(longlong)iVar10,0x71,0);
        }
      }
      else if (state == 0x67) {
        g_heroStateType = 0;
        g_HeroRequestedCamType = 0;
        FUN_005e7e70(&g_heroExternalMomentum);
        DAT_0096acd8 = 0x68;
        if (force != 0) {
          iVar10 = Hero_GetIdleAnim(0);
          if (iVar10 == 0x54) {
            iVar10 = Hero_GetIdleAnim(0);
            iVar6 = idol::GetAnimDuration(0x12);
            Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
          }
          else {
            iVar10 = Hero_GetIdleAnim(0);
            Hero_TransAnim(-1.0,iVar10,0);
          }
        }
      }
      else if (state == 0x66) {
        g_heroStateType = 1;
        g_HeroRequestedCamType = 0;
        g_storedNeutralSpeed = Hero_RelativeXYComponent((float *)&DAT_00969df0);
        FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969df0);
        if (force != 0) {
          iVar10 = 6;
          if (((pMVar9->updateId == '\x04') && (3.0 < g_heroAnimFrame)) && (g_heroAnimFrame < 16.0))
          {
            iVar10 = 5;
          }
          iVar6 = idol::GetAnimDuration(9);
          Hero_TransAnim((float)(longlong)iVar6,iVar10,4);
        }
      }
      else if (state == 0x65) {
        g_heroStateType = 1;
        g_HeroRequestedCamType = 0;
        dVar14 = (double)FUN_005e7ebc(&DAT_00969df0);
        g_storedNeutralSpeed = (float)dVar14;
        DAT_0096bd8c = 1;
        if (g_heroType == '\0') {
          Hero_EndFiringAnim();
        }
        if (force != 0) {
          if (g_heroType == '\x03') {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,1,0);
          }
          else if (g_heroType == '\x01') {
            iVar10 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar10,2,0);
          }
          else if (g_heroType == '\0') {
            iVar8 = DAT_0096bd68 + 3;
            iVar10 = *(int *)(&DAT_00723338 + DAT_0096bd68 * 4);
            iVar6 = idol::GetAnimDuration(8);
            Hero_TransAnim((float)(longlong)iVar6,iVar8,iVar10);
          }
        }
      }
      goto LAB_000bdf20;
    }
  }
LAB_000ba7d0:
  if (DAT_00969ed2 != 0) {
    g_heroStateTimer = DAT_0096bd78;
    DAT_0096acd8 = 0;
    g_heroState = DAT_0096bd70;
    DAT_0096bd68 = uVar4;
    return 0;
  }
  g_HeroRequestedCamType = 0x50;
  g_heroStateType = 4;
  if ((state == 0x29) || (state == 0x2a)) {
    g_HeroRequestedCamType = 3;
  }
  FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
  if (((g_heroState != WATER_JUMP) && (DAT_0096afc4 != '\0')) &&
     (g_heroPosition.z < g_heroWaterZ + 0.5)) {
    Hero_SpawnWaterSplash(3,0x10,0);
  }
  if (g_heroState == MUD_JUMP) {
    Hero_PlaySound(10,0);
  }
  DAT_0096a0fe = 0;
  DAT_0096a0f0 = g_heroPosition.z;
  g_DustHoverState = 0;
  DAT_0096a180 = DAT_0071f418 * 29.7;
  dVar15 = 0.0;
  DAT_0096a0fc = 0;
  DAT_0096a0c8 = 0xffffffff;
  DAT_0096a108 = 0;
  DAT_0096a10c = 0;
  dVar17 = 20.0;
  DAT_0096a160 = DAT_0071f418 * 20.0;
  dVar18 = 11.0;
  DAT_0096a164 = DAT_0071f418 * 11.0;
  dVar14 = 2.5;
  DAT_0096a184 = 0;
  DAT_0096a188 = (ushort)DAT_0096afc2;
  DAT_0096a18c = 0;
  DAT_0096a18e = 0;
  DAT_0096a18f = 0;
  DAT_0096a170 = 2.5;
  DAT_0096a17a = idol::GetAnimDuration(0x50);
  DAT_0096a18a = idol::GetAnimDuration(0x46);
  DAT_0096a186 = 0;
  dVar20 = 0.5;
  DAT_0096a174 = 0.5;
  dVar16 = 5.699999809265137;
  DAT_0096a0d8 = (float)dVar15;
  DAT_0096a104 = mobyutil::g_FrameTime * 5.7;
  DAT_0096bf94 = 0;
  DAT_0096a0f4 = mobyutil::g_FrameTime * 15.009831;
  if (g_heroState == GLIDING) {
    dVar14 = 1.4700000286102295;
    DAT_0096a110 = 1.47;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 30.0;
    DAT_0096a128 = 12.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 2.62;
    DAT_0096a178 = idol::GetAnimDuration(0xf);
    DAT_0096a18c = 1;
    DAT_0096a18e = 1;
    DAT_0096a18f = 1;
    DAT_0096a0d8 = DAT_0096a180 * 1.17;
  }
  else if (g_heroState == WATER_JUMP) {
    dVar14 = 0.10000000149011612;
    DAT_0096a110 = 0.1;
    DAT_0096a100 = idol::GetAnimDuration(2);
    DAT_0096a114 = 0x3f19999a;
    dVar16 = 18.0;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 28.0;
    DAT_0096a128 = 14.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 0.2;
    DAT_0096a178 = idol::GetAnimDuration(10);
    if (1.25 <= DAT_0096bf84) {
      Hero_SetRelativeZ((float)dVar15,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
      DAT_0096a0fc = 1;
      DAT_0096a0b0 = idol::GetAnimDuration(2);
      iVar10 = idol::GetAnimDuration(0x23);
      DAT_0096a0b8 = (float)dVar15;
      DAT_0096a0b4 = iVar10 + DAT_0096a0b0;
      DAT_0096a0bc = (float)dVar16;
      DAT_0096a0c0 = idol::GetAnimDuration(0x28);
      DAT_0096a0c4 = &DAT_007234d4;
    }
    else {
      DAT_0096a100 = idol::GetAnimDuration(0xf);
      DAT_0096a16c = 1.98;
      DAT_0096a168 = 1.95;
      DAT_0096a110 = 1.95;
    }
    DAT_0096bd87 = '\x01';
  }
  else if (g_heroState == TAKING_DAMAGE_LAVA) {
    dVar14 = 5.5;
    DAT_0096a110 = 5.5;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 26.0;
    DAT_0096a128 = 13.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 5.55;
    DAT_0096a178 = idol::GetAnimDuration(2);
    DAT_0096a17a = idol::GetAnimDuration(0x78);
    TakeDamage(1);
    if (Level == Orxon) {
      TransitionMovement(0x7c,1);
      return 0;
    }
    if (Level != Blarg) {
      if (((DAT_0096bd70 == TAKING_DAMAGE_LAVA) || (DAT_0096bd7c == 0x3c)) || (g_heroHealth == 0)) {
        DAT_0096b340 = DAT_0096b340 + 1;
        if ((1 < DAT_0096b340) || (g_heroHealth == 0)) {
          TransitionMovement(0x7c,1);
          return 0;
        }
      }
      else {
        DAT_0096b340 = 0;
      }
    }
    DAT_0096a18a = idol::GetAnimDuration(0x96);
    DAT_0096a180 = DAT_0071f418 * 15.0;
    DAT_0096a17c = idol::GetAnimDuration(5);
    DAT_0096a17e = idol::GetAnimDuration(4);
  }
  else if (g_heroState == MUD_JUMP) {
    g_heroStateType = 0x19;
    dVar14 = dVar15;
    if (g_heroPosition.z < DAT_00969fd4) {
      dVar14 = (double)(DAT_00969fd4 - g_heroPosition.z);
    }
    DAT_0096a110 = (float)(dVar14 + 1.7000000476837158);
    dVar16 = (double)DAT_0096a110;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 30.0;
    DAT_0096a128 = 12.0;
    DAT_0096a168 = (float)dVar16;
    DAT_0096a16c = (float)(dVar14 + 1.75);
    DAT_0096a178 = idol::GetAnimDuration(0x13);
  }
  else if (g_heroState == GRINDRAIL_JUMP) {
    dVar14 = 2.4000000953674316;
    DAT_0096a110 = 2.4;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f4ccccd;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 28.0;
    dVar16 = 14.0;
    DAT_0096a128 = 14.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 2.45;
    DAT_0096a178 = idol::GetAnimDuration(0x11);
    g_heroStateType = 0xf;
    DAT_0096a180 = DAT_0071f418 * 27.0;
    DAT_0096a2a4 = 0;
    if (DAT_0096afc8 != '\0') {
      DAT_0096a110 = DAT_0096a110 + 4.7;
      DAT_0096a168 = DAT_0096a168 + 4.7;
      DAT_0096a180 = (float)((double)DAT_0071f418 * dVar16);
      DAT_0096a16c = DAT_0096a16c + 4.7;
      dVar14 = (double)FUN_005e8548(&g_heroPosition,local_d0);
      if (dVar14 < 10.0) {
        DAT_0096a110 = DAT_0096a110 + 0.7;
        DAT_0096a168 = DAT_0096a168 + 0.7;
        DAT_0096a16c = DAT_0096a16c + 0.7;
      }
    }
  }
  else if (g_heroState == GRINDRAIL_SWITCH) {
    DAT_0096a110 = (float)dVar14;
    DAT_0096a100 = idol::GetAnimDuration(2);
    DAT_0096a114 = 0x3f4ccccd;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 31.0;
    DAT_0096a128 = 14.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 2.55;
    DAT_0096a178 = idol::GetAnimDuration(10);
    g_heroStateType = 0xf;
    DAT_0096a2a4 = 0;
    DAT_0096a180 = DAT_0071f418 * 24.0;
  }
  else if (g_heroState == MOVEMENT_JUMP) {
    dVar14 = 1.0;
    DAT_0096a110 = 1.0;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a128 = (float)dVar18;
    DAT_0096a124 = 29.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 2.7;
    DAT_0096a178 = idol::GetAnimDuration(0xf);
    DAT_0096a104 = (float)((double)mobyutil::g_FrameTime * dVar16);
    DAT_0096a18c = 1;
    DAT_0096a18e = 1;
    DAT_0096a18f = 1;
  }
  else if (g_heroState == GIANT_CLANK_JUMP) {
    dVar14 = 4.199999809265137;
    DAT_0096a110 = 4.2;
    DAT_0096a100 = idol::GetAnimDuration(0x13);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 17.0;
    DAT_0096a124 = 22.0;
    DAT_0096a128 = 40.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 4.3;
    DAT_0096a178 = idol::GetAnimDuration(0xf);
    DAT_0096a180 = DAT_0071f418 * 30.0;
    DAT_0096a0f4 = mobyutil::g_FrameTime * 4.363323;
    DAT_0096a0d8 = DAT_0071f418 * 50.0;
    DAT_0096a174 = 2.0;
    DAT_0096a104 = mobyutil::g_FrameTime * 4.0;
  }
  else if (g_heroState == CLANK_JUMP) {
    dVar14 = 1.2999999523162842;
    DAT_0096a110 = 1.3;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 27.0;
    DAT_0096a128 = 27.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 1.35;
    DAT_0096a178 = idol::GetAnimDuration(0xe);
    DAT_0096a180 = DAT_0071f418 * 25.0;
    DAT_0096a164 = DAT_0071f418 * 50.0;
    DAT_0096a104 = mobyutil::g_FrameTime * 2.0;
  }
  else if (g_heroState == HELI_PACK_FWD_JUMP) {
    dVar14 = 1.899999976158142;
    DAT_0096a110 = 1.9;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 29.0;
    DAT_0096a128 = 10.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 1.95;
    DAT_0096a178 = idol::GetAnimDuration(0xe);
    DAT_0096a180 = (float)((double)DAT_0071f418 * dVar18);
    DAT_0096a18e = 1;
    DAT_0096a17a = idol::GetAnimDuration(0x78);
    DAT_0096a18a = idol::GetAnimDuration(0x5a);
    DAT_0096a186 = idol::GetAnimDuration(0x46);
  }
  else if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
    dVar14 = 1.5;
    DAT_0096a110 = 1.5;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f4ccccd;
    DAT_0096a120 = 18.0;
    DAT_0096a128 = (float)dVar18;
    DAT_0096a124 = 30.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 1.55;
    DAT_0096a178 = idol::GetAnimDuration(1);
    DAT_0096a168 = 0.4;
    DAT_0096a110 = 0.4;
    DAT_0096a16c = (float)(dVar20 + 0.4000000059604645);
    mobyutil::CreateMotionBlur(g_heroMobyPtr,&DAT_0096b350);
    mobyutil::AddMotionBlurElem(&DAT_0096b350,0x28,2);
    mobyutil::AddMotionBlurElem(&DAT_0096b350,0x14,4);
    mobyutil::AddMotionBlurElem(&DAT_0096b350,10,6);
    DAT_0096a18e = 1;
    DAT_0096a0d4 = mobyutil::g_FrameTime * 11.5;
    if (1.4 < g_heroGroundDist) {
      DAT_0096a0d4 = (float)((double)mobyutil::g_FrameTime * dVar16);
    }
    DAT_0096a180 = DAT_0071f418 * 8.5;
    DAT_0096a160 = DAT_0071f418 * 44.0;
    DAT_0096a164 = DAT_0071f418 * 50.0;
  }
  else if (g_heroState == EDGE_JUMP) {
    dVar14 = 2.0;
    DAT_0096a110 = 2.0;
    DAT_0096a100 = idol::GetAnimDuration(10);
    DAT_0096a120 = (float)dVar17;
    DAT_0096a114 = 0x3f59999a;
    DAT_0096a124 = 29.0;
    DAT_0096a128 = 19.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 2.05;
    DAT_0096a178 = idol::GetAnimDuration(1);
    DAT_0096a13c = (float)dVar15;
    DAT_0096a174 = 1.0;
    DAT_0096bd87 = '\x01';
    DAT_0096a180 = DAT_0071f418 * 25.0;
    DAT_0096a18e = 1;
  }
  else if (g_heroState == CLANK_EDGE_JUMP) {
    dVar14 = 1.5499999523162842;
    DAT_0096a110 = 1.55;
    DAT_0096a100 = idol::GetAnimDuration(0xd);
    DAT_0096a114 = 0x3f59999a;
    DAT_0096a120 = 10.0;
    DAT_0096a124 = 18.0;
    DAT_0096a128 = 18.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 1.59;
    DAT_0096a178 = idol::GetAnimDuration(1);
    DAT_0096a13c = (float)dVar15;
    DAT_0096a180 = DAT_0071f418 * 28.0;
  }
  else if (g_heroState == WALL_JUMP) {
    dVar14 = 3.299999952316284;
    DAT_0096a110 = 3.3;
    DAT_0096a100 = idol::GetAnimDuration(9);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a124 = (float)dVar17;
    DAT_0096a120 = 12.0;
    DAT_0096a128 = 10.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 3.35;
    DAT_0096a178 = idol::GetAnimDuration(0xc);
    DAT_0096a18a = idol::GetAnimDuration(0x50);
    DAT_0096a180 = DAT_0071f418 * 29.0;
    FUN_005e7e98(&DAT_0096a150,&DAT_0096a140);
    DAT_0096bf94 = 1;
    DAT_0096bd87 = '\x01';
    DAT_0096a18c = 1;
  }
  else if (g_heroState == THRUSTER_PACK_HIGH_JUMP) {
    dVar14 = 0.10000000149011612;
    DAT_0096a110 = 0.1;
    DAT_0096a100 = idol::GetAnimDuration(9);
    DAT_0096a114 = 0x3f19999a;
    dVar16 = 26.0;
    DAT_0096a120 = 26.0;
    DAT_0096a124 = 38.0;
    DAT_0096a128 = 18.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 0.2;
    DAT_0096a178 = idol::GetAnimDuration(0xe);
    DAT_0096a170 = 4.5;
    DAT_0096a17a = idol::GetAnimDuration(0x78);
    DAT_0096a104 = mobyutil::g_FrameTime * 1.9;
    mobyutil::CreateMotionBlur(g_heroMobyPtr,&DAT_0096b350);
    mobyutil::AddMotionBlurElem(&DAT_0096b350,0x28,3);
    mobyutil::AddMotionBlurElem(&DAT_0096b350,0x14,5);
    DAT_0096a0fc = 1;
    DAT_0096a0b0 = idol::GetAnimDuration(9);
    iVar10 = idol::GetAnimDuration(0x23);
    DAT_0096a0b8 = (float)dVar15;
    DAT_0096a0b4 = iVar10 + DAT_0096a0b0;
    DAT_0096a0bc = (float)dVar16;
    DAT_0096a0c0 = idol::GetAnimDuration(0x2d);
    DAT_0096a18e = 1;
    DAT_0096a0c4 = &DAT_00723498;
  }
  else if (g_heroState == HELI_PACK_HIGH_JUMP) {
    dVar14 = 1.899999976158142;
    DAT_0096a110 = 1.9;
    DAT_0096a100 = idol::GetAnimDuration(9);
    DAT_0096a114 = 0x3f19999a;
    dVar16 = 50.0;
    DAT_0096a120 = 50.0;
    DAT_0096a124 = 64.0;
    DAT_0096a128 = 28.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 1.95;
    DAT_0096a178 = idol::GetAnimDuration(5);
    DAT_0096a170 = 4.5;
    DAT_0096a17a = idol::GetAnimDuration(0x82);
    DAT_0096a104 = mobyutil::g_FrameTime * 3.3;
    DAT_0096a186 = idol::GetAnimDuration(0x55);
    DAT_00969e90 = idol::GetAnimDuration(0x46);
    DAT_0096a0fc = 1;
    if (g_IsPal == 0) {
      DAT_0096a0b0 = idol::GetAnimDuration(0x23);
    }
    else {
      DAT_0096a0b0 = idol::GetAnimDuration(0x22);
    }
    iVar10 = idol::GetAnimDuration(0x24);
    DAT_0096a0b4 = iVar10 + DAT_0096a0b0;
    DAT_0096a0bc = (float)dVar16;
    DAT_0096a0b8 = 29.0;
    DAT_0096a0c0 = idol::GetAnimDuration(0x56);
    DAT_0096a18e = 1;
    DAT_0096a0c4 = &DAT_0072348c;
  }
  else if (g_heroState == DOUBLE_JUMP) {
    DAT_0096a110 = 0.7;
    if (g_heroGroundDist < 2.0) {
      DAT_0096a110 = (float)(dVar14 - (double)g_heroGroundDist) * 0.5 + 0.7;
    }
    DAT_0096a100 = -1;
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 32.0;
    DAT_0096a124 = 43.0;
    DAT_0096a128 = 19.0;
    DAT_0096a16c = DAT_0096a110 + 0.05;
    DAT_0096a168 = DAT_0096a110;
    DAT_0096a178 = idol::GetAnimDuration(0xe);
    DAT_0096a174 = 1.0;
    DAT_0096a104 = mobyutil::g_FrameTime * 3.5;
    DAT_0096a186 = idol::GetAnimDuration(0x1e);
  }
  else if (g_heroState == FLIP_JUMP) {
    dVar14 = 3.200000047683716;
    DAT_0096a110 = 3.2;
    DAT_0096a100 = idol::GetAnimDuration(5);
    DAT_0096a114 = 0x3f19999a;
    DAT_0096a120 = 18.0;
    DAT_0096a124 = 31.0;
    DAT_0096a128 = 24.0;
    DAT_0096a168 = (float)dVar14;
    DAT_0096a16c = 3.25;
    DAT_0096a178 = idol::GetAnimDuration(0xe);
    DAT_0096a170 = 4.5;
    DAT_0096a18a = idol::GetAnimDuration(0x32);
    DAT_0096a174 = 1.0;
    iVar10 = idol::GetAnimDuration(10);
    DAT_0096a11c = Hero_RotZRingVal(iVar10);
    DAT_0096a130 = Hero_GetSnapJumpDir();
    DAT_0096a118 = g_heroIdealRotZ;
    dVar14 = dVar15;
    if (mobyutil::g_FrameTime * 1.5 < DAT_00969e44) {
      dVar14 = (double)DAT_00969e44;
    }
    DAT_0096a134 = (float)dVar14;
    DAT_0096a138 = (float)dVar15;
    DAT_0096a18c = 1;
    DAT_0096a18e = 1;
  }
  iVar10 = g_heroStateTimer;
  if ((double)DAT_0096a170 == dVar15) {
    DAT_0096a170 = DAT_0096a110 * 1.5;
  }
  if (force != 0) {
    if (g_heroState == GLIDING) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,7,0);
    }
    else if (g_heroState == WATER_JUMP) {
      Hero_TransAnim(-1.0,0x72,1);
    }
    else if (g_heroState == TAKING_DAMAGE_LAVA) {
      iVar10 = idol::GetAnimDuration(4);
      Hero_TransAnim((float)(longlong)iVar10,0x43,0);
    }
    else if (g_heroState == MUD_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,7,0);
    }
    else if (g_heroState == GRINDRAIL_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,0x50,4);
    }
    else if (g_heroState == GRINDRAIL_SWITCH) {
      iVar10 = 0x1e;
      dVar14 = (double)FUN_005e8338((double)(DAT_0096a1e0 - DAT_0096a220),
                                    (double)(DAT_0096a1e4 - DAT_0096a224));
      dVar14 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar14);
      if (1.5707963705062866 < dVar14) {
        iVar10 = 0x1f;
      }
      iVar6 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
    }
    else if (g_heroState == MOVEMENT_JUMP) {
      uVar7 = 8;
      iVar10 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
      if (pMVar9->updateId == '\x04') {
        uVar7 = (uint)(byte)(&DAT_00723340)[iVar10];
      }
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,uVar7,0);
    }
    else if (g_heroState == GIANT_CLANK_JUMP) {
      iVar10 = idol::GetAnimDuration(8);
      Hero_TransAnim((float)(longlong)iVar10,4,0);
    }
    else if (g_heroState == CLANK_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,7,5);
    }
    else if (g_heroState == HELI_PACK_FWD_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,0x12,0);
    }
    else if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
      if ((DAT_0096bd74 == 4) ||
         ((DAT_0096bd70 == CROUCHING && (iVar6 = idol::GetAnimDuration(7), iVar10 < iVar6)))) {
        iVar10 = idol::GetAnimDuration(8);
        Hero_TransAnim((float)(longlong)iVar10,0x26,0);
        iVar10 = idol::GetAnimDuration(3);
        DAT_0096a100 = DAT_0096a100 + iVar10;
      }
      else {
        iVar10 = idol::GetAnimDuration(5);
        Hero_TransAnim((float)(longlong)iVar10,0x26,0);
      }
    }
    else if (g_heroState == EDGE_JUMP) {
      iVar10 = idol::GetAnimDuration(4);
      Hero_TransAnim((float)(longlong)iVar10,0x22,0);
    }
    else if (g_heroState == CLANK_EDGE_JUMP) {
      iVar10 = idol::GetAnimDuration(4);
      Hero_TransAnim((float)(longlong)iVar10,9,0);
    }
    else if (g_heroState == WALL_JUMP) {
      iVar10 = idol::GetAnimDuration(7);
      Hero_TransAnim((float)(longlong)iVar10,0x23,2);
    }
    else if (g_heroState == THRUSTER_PACK_HIGH_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,0x11,0);
    }
    else if (g_heroState == DOUBLE_JUMP) {
      iVar10 = idol::GetAnimDuration(7);
      Hero_TransAnim((float)(longlong)iVar10,0x16,3);
      g_heroAnimSpeed = DAT_0071f408 * 0.8;
    }
    else if (g_heroState == HELI_PACK_HIGH_JUMP) {
      iVar10 = idol::GetAnimDuration(5);
      Hero_TransAnim((float)(longlong)iVar10,0x15,0);
    }
    else if (g_heroState == FLIP_JUMP) {
      if (DAT_0096a130 == 2) {
        DAT_0096a130 = 0;
      }
      iVar10 = DAT_0096a130 + 0x1c;
      if (Cheats[5] != '\0') {
        if (iVar10 == 0x1c) {
          iVar10 = 0x1d;
        }
        else if (iVar10 == 0x1d) {
          iVar10 = 0x1c;
        }
      }
      if (DAT_0096bd74 == 4) {
        iVar6 = idol::GetAnimDuration(4);
        Hero_TransAnim((float)(longlong)iVar6,iVar10,1);
        DAT_0096a100 = idol::GetAnimDuration(1);
      }
      else {
        iVar6 = idol::GetAnimDuration(5);
        Hero_TransAnim((float)(longlong)iVar6,iVar10,0);
      }
    }
  }
LAB_000bdf20:
  if ((cVar3 != '\0') && (DAT_0096bd87 == '\0')) {
    DAT_0096bdec = 1;
  }
  if (((g_onMagnerail == 0) && (DAT_0096ade8 == 0x1c)) && (DAT_0096bdd4 != 0)) {
    DAT_0096bdf0 = 1;
  }
  if (((g_heroStateType != 0xf) && (DAT_0096ade8 == 0x1d)) && (DAT_0096bdd4 != 0)) {
    DAT_0096bdf0 = 1;
  }
  iVar10 = Hero_IsSwimming();
  if (((iVar10 == 0) && (DAT_0096ade8 == 0)) && (DAT_0096bdd4 != 0)) {
    DAT_0096bdf0 = 1;
  }
  if (g_heroStateType == 0x14) {
    Hero_EndFiringAnim();
    DAT_0096bd8c = 1;
  }
  if (g_heroStateType != DAT_0096bd74) {
    Hero_KillLoopingSounds();
  }
  if (g_heroStateType != DAT_0096bd74) {
    DAT_00969e7c = 0;
  }
  DAT_00969e84 = 0;
  DAT_00969e80 = 0;
  g_heroStateTimer = 0;
  return 1;
}



//==== 000be228  ns=hero  size=0xa04c
// sig: undefined HeroMovement(void)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(83): 00057820 collproc::CollLine; 0007f41c hero::Hero_HandGadgetID; 0007f45c hero::Hero_GetIdleAnim; 00080a08 hero::Hero_PlayFootStep; 000816ec hero::Hero_PlaySound; 000817ec hero::Hero_SetRelativeZ; 00083594 hero::Hero_KillLoopingSounds; 00083950 hero::HandleHeroDeath; 00084830 hero::Hero_RelativeZComponent; 00085300 hero::Hero_TransAnim; 000855b8 hero::Hero_EndFiringAnim; 00085b30 hero::Hero_HandleGadgetSwitching; 00094b80 hero::Hero_FindGrindRail; 00096348 hero::Hero_ScaleAnim; 00097370 hero::Hero_SpawnWaterSplash; 00097bd0 hero::Hero_UpdateLedge; 0009a1b0 hero::Hero_HandleDamage; 0009b380 hero::Hero_GetIdealThrustFromPad; 0009b8c8 hero::Hero_GetIdealThrustForWalk; 000a0c38 hero::Hero_Warp; 000a1e78 hero::Hero_GetSnapJumpSnapWindow; 000a2560 hero::Hero_TransitionToDefault; 000a2600 hero::Hero_IdleCycleFiringTransition; 000a2750 hero::HandleUnderwaterSwimming; 000a2a08 hero::Hero_SwimSurfTransition; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000a4950 hero::Hero_JumpOrSnapJumpCheck; 000a4a60 hero::Hero_UpdateWalkAnim; 000a4e1c hero::???_Hero_CleanupAttachedMobys; 000a4eb8 hero::Hero_GetSpecialIdle; 000a5310 hero::Hero_JumpLandTransitions; 000a56d8 hero::Hero_CrouchJumpTransitions; 000a5a58 hero::Hero_PredictLand; 000a6048 hero::Hero_HandleHoverboardTricks; 000a64d0 hero::Hero_HoverboardBoostPads; 000a6e20 hero::Hero_UpdateHoverboardRaceStats; 000a71a0 hero::Hero_GetHoverboardRespawn; 000a8ca0 hero::???_Hero_ProbeCollAlongVelocity; 000a90c4 hero::???_Hero_GetAnimId_52_68_7d_7e; 000a9158 hero::Hero_GrindMotion
// strings: 00a0feec: 'None'

void hero::HeroMovement(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  bool bVar1;
  u8 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  int iVar10;
  int iVar11;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  short sVar21;
  ulonglong uVar12;
  short sVar22;
  longlong lVar13;
  int iVar20;
  ulonglong uVar14;
  short sVar23;
  longlong lVar24;
  ITEM_ENUM IVar25;
  double dVar26;
  double extraout_f1;
  double extraout_f1_00;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  float fVar34;
  float local_270;
  float local_26c;
  undefined4 local_268;
  undefined4 local_264;
  float local_210;
  float local_20c;
  float local_1f8;
  float afStack_1f0 [4];
  float afStack_1e0 [2];
  undefined4 local_1d8;
  float afStack_1d0 [4];
  float afStack_1c0 [2];
  undefined4 local_1b8;
  float afStack_1b0 [4];
  float afStack_1a0 [2];
  undefined4 local_198;
  float local_180;
  float local_17c;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_148;
  float local_138;
  float local_128;
  int local_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  int local_100;
  int local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc [3];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  
  iVar11 = g_heroStateType;
  iVar10 = DAT_0096bd68;
  pMVar8 = g_heroMobyPtr;
  uVar12 = ZEXT48(&stack0x00000000);
  uVar2 = g_heroMobyPtr->animationId;
  iVar15 = Hero_HandleDamage(1);
  if (iVar15 != 0) goto LAB_000c81a8;
  if (((g_heroHealth < 1) && (g_heroStateType != 0x14)) &&
     ((g_heroState == STANDING || (g_heroState == WALKING)))) {
    TransitionMovement(0x3d,1);
    goto LAB_000c81a8;
  }
  iVar15 = ____Hero_UpdateWeaponInput();
  if ((((iVar15 != 0) || (iVar15 = Hero_SwimSurfTransition(), iVar15 != 0)) ||
      (iVar15 = HandleUnderwaterSwimming(), iVar15 != 0)) ||
     (iVar15 = Hero_IdleCycleFiringTransition(), iVar15 != 0)) goto LAB_000c81a8;
  if (((((g_buttonsPressedThisFrame & TRIANGLE) != 0) || ((pad_pressedButton & 0x10) != 0)) &&
      ((DAT_0096ad8c != '\x02' && (mobyutil::g_HelpMsgOwner == 0)))) &&
     ((((DAT_0096bd8c == '\0' || (g_heroType == 1)) || (DAT_00969e92 != 0)) &&
      (((DAT_0096bd87 == '\0' || (g_heroType == 1)) || (DAT_00969e92 != 0)))))) {
    if (g_heroType < 2) {
      if (g_heroType == 0) {
LAB_000be3f8:
        if (DAT_0096bfb6 == 0) {
          DAT_0096bfb2 = idol::GetAnimDuration(0xf);
        }
        else {
          DAT_0096bfb2 = idol::GetAnimDuration(0x1b);
        }
        iVar15 = hud::RegisterHUDCallback
                           (3,0,&PTR_QuickSelectHud_Init_007057b8,&PTR_UpdateQuickSelect_007057c0,
                            &PTR_Draw_QuickSelectHud_007057d0,(int *)0x0,0);
        iVar15 = hud::RegisterHeroHealthHUDCallbacks(iVar15);
        iVar18 = idol::GetAnimDuration(0xb4);
        hud::Hud_ShowEntryById(iVar15,iVar18);
        param_3 = ZEXT48(&PTR_BoltHud_Init_00705810);
        iVar15 = hud::RegisterHUDCallback
                           (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                            &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
        iVar18 = idol::GetAnimDuration(0xb4);
        hud::Hud_ShowEntryById(iVar15,iVar18);
      }
      else {
        param_3 = ZEXT48(&PTR_ClankCommandHud_Init_007057d8);
        hud::RegisterHUDCallback
                  (3,0,&PTR_ClankCommandHud_Init_007057d8,&PTR_ClankCommandHud_Update_007057e0,
                   &PTR_Draw_ClankCommandHud_007057e8,(int *)0x0,0);
      }
    }
    else if (g_heroType == 3) goto LAB_000be3f8;
  }
  fastfunc::FastDecTimerS16(&DAT_0096bfb4);
  fastfunc::FastDecTimerS16(&DAT_0096bfb6);
  if ((g_buttonsPressedThisFrame & TRIANGLE) != 0) {
    DAT_0096bfb4 = idol::GetAnimDuration(0x14);
  }
  if (((DAT_0096bfb4 != 0) || (DAT_0096bfb6 != 0)) && ((DAT_00964af8 & 0x10) != 0)) {
    if (DAT_0096bfb6 == 0) {
      DAT_0096bfb6 = idol::GetAnimDuration(0x14);
    }
    else {
      IVar25 = DAT_00969c98;
      if (g_CurrentWeapon == WRENCH) {
        IVar25 = g_equippedItem;
      }
      if ((IVar25 != UNK_00) && (g_CurrentWeapon != DAT_00969c98)) {
        if (CHAR_ARRAY_00a0feec._248_2_ != -1) {
          CHAR_ARRAY_00a0feec._248_2_ = CHAR_ARRAY_00a0feec._248_2_ + 1;
        }
        iVar15 = idol::GetAnimDuration(update::g_GameFrameCount);
        param_3 = (ulonglong)(uint)-(iVar15 >> 0x1f);
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._250_2_ < iVar15 / 600) {
          iVar15 = idol::GetAnimDuration(update::g_GameFrameCount);
          sVar22 = (short)(iVar15 >> 0x1f);
          CHAR_ARRAY_00a0feec._250_2_ =
               ((short)(iVar15 / 600) + sVar22) -
               ((short)((short)(iVar15 / 0x2580000) + sVar22) >> 0xf);
        }
        DAT_0096bfb4 = 0;
        DAT_0096bfb6 = 0;
        CHAR_ARRAY_00a0feec._252_4_ = CHAR_ARRAY_00a0feec._252_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
        DAT_0096bd98 = IVar25;
      }
    }
  }
  sVar21 = DAT_0096bfdc;
  sVar22 = g_framesNotGrounded;
  uVar16 = g_heroStateTimer;
  if ((((g_heroPosition.z < HeroDeathHeight) && (2.0 < g_heroGroundDist)) && (g_heroType != 2)) &&
     (g_heroState != DEATH_FALLING)) {
    TransitionMovement(0x77,1);
    goto LAB_000c81a8;
  }
  if (0x47 < (int)g_heroState) {
    if ((int)g_heroState < 0x67) {
      if ((int)g_heroState < 0x57) {
        if (0x4f < (int)g_heroState) {
          if (g_heroState == UNK_56) {
            iVar15 = idol::GetAnimDuration(0x20);
            uVar6 = g_heroStateTimer;
            if ((((int)uVar16 < iVar15) || (g_framesNotGrounded == 0)) || (g_heroGroundDist <= 1.0))
            {
              if ((DAT_0096a778 & 2) == 0) {
                iVar15 = idol::GetAnimDuration(0x2d);
                if (iVar15 < (int)uVar6) {
                  if (g_heroHealth < 1) {
                    TransitionMovement(0x57,1);
                  }
                  else {
                    TransitionMovement(0x53,0);
                  }
                }
              }
              else {
                TransitionMovement(0x53,1);
              }
            }
            else {
              TransitionMovement(0x55,1);
            }
            goto LAB_000c81a8;
          }
          if (g_heroState == UNK_55) {
            if (g_framesNotGrounded == 0) {
              if (DAT_00969de8 < mobyutil::g_FrameTime * -9.0) {
                DAT_00969de8 = mobyutil::g_FrameTime * -9.0;
              }
              if (DAT_00969dc8 < mobyutil::g_FrameTime * -9.0) {
                DAT_00969dc8 = mobyutil::g_FrameTime * -9.0;
              }
              if (g_heroHealth < 1) {
                TransitionMovement(0x57,1);
              }
              else if (((g_heroPadMagnitude <= 0.5) ||
                       (iVar15 = idol::GetAnimDuration(0x28), iVar15 <= (int)uVar16)) ||
                      (DAT_00969ea4 != 0)) {
                TransitionMovement(0x53,0);
                Hero_TransAnim(-1.0,7,0);
                g_heroAnimSpeed = 0.35;
                DAT_00969ea4 = idol::GetAnimDuration(0x14);
              }
              else {
                TransitionMovement(0x54,1);
              }
            }
            goto LAB_000c81a8;
          }
          if (g_heroState == HOLOGUISE_WALKING) {
            g_heroAnimSpeed = DAT_00969e40 * 54.0;
            if ((DAT_0096afca == '\0') || (0.2 <= g_heroGroundDist)) {
              sVar21 = idol::GetAnimDuration(5);
              if ((sVar22 < sVar21) ||
                 ((g_heroGroundDist <= 0.8 && (g_heroGroundSlope <= 0.87266463)))) {
                iVar15 = idol::GetAnimDuration(7);
                iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
                if (iVar15 == 0) {
                  if ((g_buttonsPressedThisFrame & CIRCLE) == 0) {
                    if ((g_framesNotGrounded == 0) && (g_heroPadMagnitude < 0.17)) {
                      TransitionMovement(0x53,1);
                    }
                  }
                  else {
                    TransitionMovement(0x59,1);
                  }
                }
                else {
                  if (DAT_0096bfbe == 0) {
                    Hero_PlaySound(0x19,0);
                    DAT_0096bfbc = 1;
                    DAT_0096bfbe = 0x12;
                  }
                  Hero_HandleGadgetSwitching(0);
                }
              }
              else {
                TransitionMovement(0x55,1);
              }
            }
            else {
              TransitionMovement(0x58,1);
            }
            goto LAB_000c81a8;
          }
          if (g_heroState == HOLOGUISE_STANDING) {
            if ((DAT_0096a778 & 2) != 0) {
              if (g_heroMobyPtr->animationId == '\0') {
                dVar26 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
                if (dVar26 < 0.5) {
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,5,0);
                }
              }
              else {
                iVar15 = idol::GetAnimDuration(0xc);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,0,0);
              }
            }
            if (DAT_0096afca == '\0') {
              if ((g_downButtons & (L1|L2)) == 0) {
                if (g_framesNotGrounded == 0) {
                  if ((g_buttonsPressedThisFrame & CIRCLE) == 0) {
                    iVar15 = idol::GetAnimDuration(7);
                    iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
                    if (iVar15 == 0) {
                      Hero_GetIdealThrustFromPad(0x3ff0000000000000,0,0);
                      if ((0.22 < g_heroPadMagnitude) && (0.0 < g_heroIdealSpeed)) {
                        TransitionMovement(0x54,1);
                      }
                    }
                    else {
                      if (DAT_0096bfbe == 0) {
                        Hero_PlaySound(0x19,0);
                        DAT_0096bfbc = 1;
                        DAT_0096bfbe = 0x12;
                      }
                      Hero_HandleGadgetSwitching(0);
                    }
                  }
                  else {
                    TransitionMovement(0x59,1);
                  }
                }
                else {
                  TransitionMovement(0x55,1);
                }
              }
              else {
                TransitionMovement(1,1);
              }
            }
            else {
              TransitionMovement(0x58,1);
            }
            goto LAB_000c81a8;
          }
          if (g_heroState == UNK_52) {
            iVar15 = idol::GetAnimDuration(300);
            if (iVar15 < (int)uVar16) {
              HandleHeroDeath();
            }
            if (DAT_0096afca == '\0') {
              if (g_framesNotGrounded == 0) {
                TransitionMovement(0x43,1);
              }
              else {
                TransitionMovement(0x45,1);
              }
            }
            goto LAB_000c81a8;
          }
          if (g_heroState == CLANK_ATTACK) {
            if (DAT_0096afca == '\0') {
              iVar15 = DAT_0096a740 * 0x2c;
              if ((DAT_0096a77c == 0) &&
                 (local_b0 = (ulonglong)*(int *)(&DAT_00723194 + iVar15),
                 (float)(longlong)local_b0 < g_heroAnimFrame)) {
                TransitionMovement(0x43,0);
              }
              uVar12 = (ulonglong)DAT_0096a77c;
              if ((DAT_0096a77c == 0) &&
                 (uVar12 = (ulonglong)*(int *)(iVar15 + 0x72318c), local_b0 = uVar12,
                 (float)(longlong)uVar12 <= g_heroAnimFrame)) {
                iVar18 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                iVar18 = iVar18 - *(int *)(iVar15 + 0x723188);
                if (iVar18 < 1) {
                  iVar18 = 1;
                }
                iVar20 = idol::GetAnimDuration(0xf);
                if (iVar20 < iVar18) {
                  iVar18 = idol::GetAnimDuration(0xf);
                }
                iVar18 = pad::PadRingBitsOn(0x80,iVar18,(int *)0x0);
                uVar12 = (ulonglong)iVar18;
                if (iVar18 != 0) {
                  iVar18 = TransitionMovement(0x51,1);
                  uVar12 = (ulonglong)iVar18;
                }
              }
              iVar18 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame,uVar12);
              local_b0 = (ulonglong)*(int *)(&DAT_00723190 + iVar15);
              if ((((float)(longlong)local_b0 < g_heroAnimFrame) && (DAT_0096a77c == 0)) &&
                 (iVar15 = pad::PadRingBitsOn(0x40,(iVar18 - *(int *)(iVar15 + 0x723188)) * 2,
                                              (int *)0x0), iVar15 != 0)) {
                TransitionMovement(0x49,1);
              }
            }
            else {
              TransitionMovement(0x52,1);
            }
            goto LAB_000c81a8;
          }
          if (g_heroState != UNK_50) goto LAB_000c81a8;
LAB_000c65fc:
          if (DAT_0096afca == '\0') {
            if (g_heroState == CLANK_WALKING) {
              if (((DAT_0096a77c != 0) || (mobyutil::g_FrameTime * 3.0 * 0.5 <= DAT_00969e40)) ||
                 (g_heroMobyPtr->animationId == '\x02')) {
                if (((DAT_0096a77c == 0) && (mobyutil::g_FrameTime * 3.0 * 0.6 < DAT_00969e40)) &&
                   (g_heroMobyPtr->animationId != '\x03')) {
                  bVar3 = *(byte *)(*(int *)&g_heroMobyPtr->pClass[1].pakcet_cnt_0 + 0x10);
                  uVar16 = ((uint)(byte)g_heroMobyPtr->animationFrame * (uint)bVar3) /
                           (uint)*(byte *)((int)g_heroMobyPtr->pClass[1].packets + 0x10) + 7;
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,3,uVar16 - (uVar16 / bVar3) * (uint)bVar3
                                );
                }
              }
              else {
                bVar3 = *(byte *)((int)g_heroMobyPtr->pClass[1].packets + 0x10);
                uVar16 = ((uint)(byte)g_heroMobyPtr->animationFrame * (uint)bVar3) /
                         (uint)*(byte *)(*(int *)&g_heroMobyPtr->pClass[1].pakcet_cnt_0 + 0x10) + 1;
                iVar15 = idol::GetAnimDuration(8);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,2,uVar16 - (uVar16 / bVar3) * (uint)bVar3);
              }
              if (g_heroMobyPtr->animationId == '\x02') {
                g_heroAnimSpeed = DAT_00969e40 * 90.0;
              }
              else if (g_heroMobyPtr->animationId == '\x03') {
                g_heroAnimSpeed = DAT_00969e40 * 20.0;
              }
            }
            else {
              g_heroAnimSpeed = DAT_00969e40 * 196.0;
            }
            iVar15 = idol::GetAnimDuration(8);
            iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
            if (iVar15 == 0) {
              iVar15 = idol::GetAnimDuration(9);
              iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
              sVar22 = g_framesNotGrounded;
              if (iVar15 == 0) {
                sVar21 = idol::GetAnimDuration(5);
                if ((sVar22 < sVar21) ||
                   ((g_heroGroundDist <= 0.8 && (g_heroGroundSlope <= 0.87266463)))) {
                  if ((g_framesNotGrounded == 0) && (g_heroPadMagnitude < 0.17)) {
                    TransitionMovement(0x43,1);
                  }
                }
                else {
                  TransitionMovement(0x45,1);
                }
              }
              else {
                TransitionMovement(0x51,1);
              }
            }
            else {
              TransitionMovement(0x49,1);
            }
          }
          else {
            TransitionMovement(0x52,1);
          }
          goto LAB_000c81a8;
        }
        if ((int)g_heroState < 0x4b) {
          if ((int)g_heroState < 0x49) goto LAB_000c81a8;
          if (0x49 < (int)g_heroState) {
            if ((DAT_0096a778 & 2) != 0) {
              TransitionMovement(0x4b,1);
            }
            goto LAB_000c81a8;
          }
LAB_000c5e24:
          if (DAT_0096a100 < (int)g_heroStateTimer) {
            iVar15 = idol::GetAnimDuration(1);
            if (uVar16 == DAT_0096a100 + iVar15) {
              Hero_GetJumpPeak(DAT_0096a180,&g_heroPosition.x,&g_heroVelocity,param_3,&local_e0);
              local_b0 = (ulonglong)local_e0;
              Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,0.5,-1.0);
            }
            else if (((DAT_0096a0fc == 0) || ((int)g_heroStateTimer < DAT_0096a0b0)) ||
                    (DAT_0096a0b4 <= (int)g_heroStateTimer)) {
              if (g_DustHoverState == 0) {
                if ((g_framesNotGrounded == 0) && (DAT_0096a0fe != 0)) {
                  g_DustHoverState = idol::GetAnimDuration(1);
                  iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                  if (g_heroAnimFrame < DAT_0096a124) {
                    bVar3 = pMVar8->animationId;
                    iVar18 = idol::GetAnimDuration(6);
                    local_b0 = (ulonglong)iVar18;
                    Hero_TransAnim((float)(longlong)local_b0,(uint)bVar3,iVar15 + 3);
                  }
                }
              }
              else {
                g_DustHoverState = g_DustHoverState + 1;
              }
              if (g_DustHoverState == 0) {
                if (DAT_0096a0fe != 0) {
                  bVar3 = pMVar8->animationFrame;
                  iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                  if ((int)(uint)bVar3 < iVar15) {
                    dVar26 = -1.0;
                    fVar34 = Hero_PredictLand(60.0,DAT_0096a180,-1.0);
                    DAT_0096a12c = fastfunc::FastDoubleToInt((double)fVar34);
                    local_b0 = (ulonglong)DAT_0096a12c;
                    Hero_ScaleAnim(DAT_0096a124,(float)(longlong)local_b0,0.5,(float)dVar26);
                    iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                    if (1.8 < g_heroAnimSpeed) {
                      local_b0 = (ulonglong)(DAT_0096a12c + 2);
                      Hero_TransAnim((float)(longlong)local_b0,(uint)pMVar8->animationId,iVar15 + 1)
                      ;
                    }
                    if (g_heroAnimSpeed < 0.2) {
                      g_heroAnimSpeed = 0.2;
                    }
                    if (2.7 < g_heroAnimSpeed) {
                      g_heroAnimSpeed = 2.7;
                    }
                  }
                  iVar15 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                  iVar18 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                  if (iVar15 == iVar18) {
                    g_heroAnimSpeed = 0.0;
                  }
                }
              }
              else {
                g_heroAnimSpeed = 1.0;
              }
              if ((g_DustHoverState != 0) && (DAT_00969ea4 == 0)) {
                iVar15 = idol::GetAnimDuration(4);
                iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                sVar22 = g_framesNotGrounded;
                if ((iVar15 != 0) && (uVar32 = idol::GetAnimDuration(4), (int)sVar22 < (int)uVar32))
                {
                  Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar32,0);
                  TransitionMovement(0x49,1);
                  goto LAB_000c81a8;
                }
              }
              iVar15 = g_DustHoverState;
              iVar18 = idol::GetAnimDuration(1);
              if (iVar18 < iVar15) {
                g_HeroRequestedCamType = 0;
                Hero_GetIdealThrustFromPad(0x3ff0000000000000);
                if ((((g_heroIdealSpeed <= DAT_00723314) || (g_heroPadMagnitude <= 0.5)) ||
                    (DAT_0096afca != '\0')) ||
                   ((DAT_00969ea4 != 0 ||
                    (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
                    1.5707963705062866 <= dVar26)))) {
                  iVar15 = g_DustHoverState;
                  iVar18 = idol::GetAnimDuration(0xc);
                  if (iVar18 < iVar15) {
                    TransitionMovement(0x43,1);
                  }
                }
                else {
                  TransitionMovement(0x44,1);
                }
              }
              uVar16 = g_heroStateTimer;
              if (((g_heroGroundDist <= 2.0) || (DAT_0096a0fe == 0)) ||
                 (iVar15 = idol::GetAnimDuration(0x28), (int)uVar16 <= iVar15)) {
                if ((DAT_0096a0fe != 0) && (g_heroGroundDist < 0.2)) {
                  iVar15 = idol::GetAnimDuration(5);
                  iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
                  if (iVar15 != 0) {
                    TransitionMovement(0x51,1);
                    goto LAB_000c81a8;
                  }
                }
                if (DAT_0096a1c8 == 0) {
                  if (g_heroState != CLANK_EDGE_JUMP) {
                    iVar15 = idol::GetAnimDuration(5);
                    iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                    if ((iVar15 != 0) && (0.55 < g_heroGroundDist)) {
                      TransitionMovement(0x4f,1);
                    }
                  }
                }
                else {
                  TransitionMovement(0x4a,1);
                }
              }
              else {
                TransitionMovement(0x45,1);
              }
            }
            else {
              local_b0 = (ulonglong)(DAT_0096a0c0 - DAT_0096a0b0);
              if (0.0 < (float)(longlong)local_b0) {
                Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,0.5,-1.0);
              }
            }
          }
          goto LAB_000c81a8;
        }
        if ((int)g_heroState < 0x4d) {
          if (0x4b < (int)g_heroState) goto LAB_000c5e24;
          Hero_GetIdealThrustFromPad(0x3ff0000000000000,g_heroState,0);
          FUN_005e7e98(uVar12 - 400,&g_heroPosition);
          local_dc = g_heroRotation.z;
          iVar15 = Hero_UpdateLedge((float *)(uVar12 - 400),&local_dc);
          if (iVar15 == 0) {
            TransitionMovement(0x45,1);
            DAT_00969e90 = idol::GetAnimDuration(10);
            goto LAB_000c81a8;
          }
          dVar26 = 0.5;
          if (g_heroPadMagnitude <= 0.5) {
LAB_000c6a40:
            if ((g_downButtons & (R1|R2)) == 0) {
              iVar15 = idol::GetAnimDuration(9);
              iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
              if (iVar15 == 0) {
                if (dVar26 < (double)g_heroPadMagnitude) {
                  dVar30 = 1.5707963705062866;
                  dVar29 = (double)g_heroIdealRotZ;
                  dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
                  dVar26 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar26);
                  dVar29 = 0.7853981852531433;
                  if (0.7853981852531433 <= dVar26) {
                    dVar31 = -1.5707963705062866;
                    dVar30 = (double)g_heroIdealRotZ;
                    dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
                    dVar26 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar26);
                    if (dVar26 < dVar29) {
                      FUN_005e7e98(uVar12 - 0x170,&g_heroPosition);
                      dVar33 = (double)local_170;
                      dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
                      dVar26 = (double)mathfunc::cosf((float)dVar26);
                      dVar29 = 0.30000001192092896;
                      dVar30 = (double)local_16c;
                      local_170 = (float)(dVar33 + (double)(float)(dVar26 * 0.30000001192092896));
                      fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
                      dVar26 = (double)FUN_005e8128();
                      local_d4 = g_heroRotation.z;
                      local_16c = (float)(dVar30 + (double)(float)(dVar26 * dVar29));
                      iVar15 = Hero_UpdateLedge((float *)(uVar12 - 0x170),&local_d4);
                      if (iVar15 != 0) {
                        TransitionMovement(0x4e,1);
                      }
                    }
                  }
                  else {
                    FUN_005e7e98(uVar12 - 0x180,&g_heroPosition);
                    dVar33 = (double)local_180;
                    dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar30);
                    dVar26 = (double)mathfunc::cosf((float)dVar26);
                    dVar29 = 0.30000001192092896;
                    dVar31 = (double)local_17c;
                    local_180 = (float)(dVar33 + (double)(float)(dVar26 * 0.30000001192092896));
                    fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar30);
                    dVar26 = (double)FUN_005e8128();
                    local_d8 = g_heroRotation.z;
                    local_17c = (float)(dVar31 + (double)(float)(dVar26 * dVar29));
                    iVar15 = Hero_UpdateLedge((float *)(uVar12 - 0x180),&local_d8);
                    if (iVar15 != 0) {
                      TransitionMovement(0x4d,1);
                    }
                  }
                }
              }
              else {
                TransitionMovement(0x4c,1);
              }
              goto LAB_000c81a8;
            }
          }
          else {
            iVar15 = idol::GetAnimDuration(9);
            iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
            if ((iVar15 == 0) ||
               (dVar30 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
               dVar30 <= 2.356194496154785)) goto LAB_000c6a40;
          }
          TransitionMovement(0x45,1);
          DAT_00969e90 = idol::GetAnimDuration(10);
          goto LAB_000c81a8;
        }
        if (0x4e < (int)g_heroState) {
          iVar15 = idol::GetAnimDuration(0x1e);
          uVar6 = g_heroStateTimer;
          if ((iVar15 < (int)uVar16) && ((g_downButtons & CROSS) == 0)) {
            TransitionMovement(0x45,1);
          }
          else if (DAT_0096a1c8 == 0) {
            if ((g_framesNotGrounded == 0) || (g_heroPosition.z - g_heroGroundZ < 0.0)) {
              iVar15 = idol::GetAnimDuration(10);
              if ((int)uVar6 < iVar15) {
                iVar15 = idol::GetAnimDuration(0xc);
                DAT_00969eb4 = iVar15 - g_heroStateTimer;
              }
              if (g_heroPadMagnitude <= 0.3) {
                if (g_framesNotGrounded == 0) {
                  TransitionMovement(0x43,1);
                }
              }
              else {
                TransitionMovement(0x44,1);
              }
            }
          }
          else {
            TransitionMovement(0x4a,1);
          }
          goto LAB_000c81a8;
        }
        FUN_005e7e98(uVar12 - 0x160,&g_heroPosition);
        fVar34 = 1.5707964;
        if (g_heroState == CLANK_EDGE_MOVE_RIGHT) {
          fVar34 = -1.5707964;
        }
        dVar31 = (double)fVar34;
        dVar33 = (double)local_160;
        dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,fVar34);
        dVar26 = (double)mathfunc::cosf((float)dVar26);
        dVar29 = 0.30000001192092896;
        dVar30 = (double)local_15c;
        local_160 = (float)(dVar33 + (double)(float)(dVar26 * 0.30000001192092896));
        fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
        uVar32 = FUN_005e8128();
        local_d0 = g_heroRotation.z;
        local_15c = (float)(dVar30 + (double)(float)(extraout_f1_00 * dVar29));
        Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar32,0);
        dVar26 = 0.5;
        if (g_heroPadMagnitude < 0.5) {
LAB_000c6d38:
          if ((DAT_0096a778 & 2) != 0) {
            TransitionMovement(0x4b,1);
            goto LAB_000c81a8;
          }
        }
        else {
          dVar29 = (double)g_heroIdealRotZ;
          dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
          dVar30 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar30);
          if ((0.7853981852531433 < dVar30) ||
             (iVar15 = Hero_UpdateLedge(&local_160,&local_d0), iVar15 == 0)) goto LAB_000c6d38;
        }
        if (dVar26 < (double)g_heroPadMagnitude) {
          iVar15 = idol::GetAnimDuration(9);
          iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
          if ((iVar15 != 0) &&
             (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
             2.356194496154785 < dVar26)) {
            TransitionMovement(0x45,1);
            DAT_00969e90 = idol::GetAnimDuration(0x28);
            goto LAB_000c81a8;
          }
        }
        iVar15 = idol::GetAnimDuration(9);
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if (iVar15 != 0) {
          TransitionMovement(0x4c,1);
        }
        goto LAB_000c81a8;
      }
      if ((int)g_heroState < 0x5e) {
        if (g_heroState == GIANT_CLANK_DAMAGE) {
          iVar15 = idol::GetAnimDuration(0x20);
          uVar6 = g_heroStateTimer;
          if ((((int)uVar16 < iVar15) || (g_framesNotGrounded == 0)) || (g_heroGroundDist <= 1.5)) {
            iVar15 = idol::GetAnimDuration(0x28);
            if ((iVar15 < (int)uVar6) || ((DAT_0096a778 & 2) != 0)) {
              if (g_GiantClankHealth < 1) {
                TransitionMovement(0x62,1);
              }
              else {
                TransitionMovement(0x5a,0);
              }
            }
          }
          else {
            TransitionMovement(0x5c,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == GIANT_CLANK_FALLING) {
          if (DAT_0096a0fe != 0) {
            FUN_005e7e98(uVar12 - 0x130,&g_heroPosition);
            local_128 = local_128 - 1.0;
            mobyutil::DamageSphereAtPos
                      (0x400c000000000000,0x3ff0000000000000,0x3ff0000000000000,g_heroMobyPtr,
                       uVar12 - 0x130);
          }
          if (g_framesNotGrounded == 0) {
            if (DAT_00969de8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969de8 = mobyutil::g_FrameTime * -9.0;
            }
            if (DAT_00969dc8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969dc8 = mobyutil::g_FrameTime * -9.0;
            }
            if (g_GiantClankHealth < 1) {
              TransitionMovement(0x62,1);
            }
            else if ((g_heroPadMagnitude <= 0.5) || (DAT_00969ea4 != 0)) {
              TransitionMovement(0x5a,1);
            }
            else {
              TransitionMovement(0x5b,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == GIANT_CLANK_WALKING) {
          g_heroAnimSpeed = DAT_00969e40 * 8.0;
          if (g_heroAnimSpeed < 0.75) {
            g_heroAnimSpeed = 0.75;
          }
          iVar15 = idol::GetAnimDuration(8);
          iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
          if (iVar15 == 0) {
            iVar15 = idol::GetAnimDuration(8);
            iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
            if (iVar15 == 0) {
              iVar15 = idol::GetAnimDuration(8);
              iVar15 = pad::PadRingBitsOn(0x10,iVar15,(int *)0x0);
              if ((iVar15 == 0) || (DAT_0096b316 != 0)) {
                iVar15 = idol::GetAnimDuration(8);
                iVar15 = pad::PadRingBitsOn(0x20,iVar15,(int *)0x0);
                sVar22 = g_framesNotGrounded;
                if (iVar15 == 0) {
                  sVar21 = idol::GetAnimDuration(5);
                  uVar16 = g_heroStateTimer;
                  if (((sVar22 < sVar21) || (g_heroGroundDist <= 1.5)) ||
                     ((g_heroGroundDist <= 1.5 && (g_heroGroundSlope <= 0.87266463)))) {
                    if (((g_framesNotGrounded == 0) && (g_heroPadMagnitude < 0.17)) &&
                       (iVar15 = idol::GetAnimDuration(0x14), iVar15 < (int)uVar16)) {
                      TransitionMovement(0x5a,1);
                    }
                  }
                  else {
                    TransitionMovement(0x5c,1);
                  }
                }
                else {
                  TransitionMovement(0x5f,1);
                }
              }
              else {
                TransitionMovement(0x61,1);
              }
            }
            else {
              TransitionMovement(0x60,1);
            }
          }
          else {
            TransitionMovement(0x5e,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == GIANT_CLANK_STANDING) {
          if ((DAT_0096a778 & 2) != 0) {
            if (g_heroMobyPtr->animationId == '\0') {
              iVar15 = idol::GetAnimDuration(0x32);
              if (iVar15 < (int)uVar16) {
                dVar26 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
                if (0.10000000149011612 <= dVar26) {
                  if (dVar26 < 0.5) {
                    iVar15 = idol::GetAnimDuration(8);
                    local_b0 = (ulonglong)iVar15;
                    Hero_TransAnim((float)(longlong)local_b0,2,0);
                  }
                }
                else {
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,1,0);
                }
              }
            }
            else {
              iVar15 = idol::GetAnimDuration(0xc);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,0,0);
            }
          }
          if ((g_downButtons & (L1|L2)) == 0) {
            iVar15 = idol::GetAnimDuration(8);
            iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
            if (iVar15 == 0) {
              iVar15 = idol::GetAnimDuration(0xf);
              iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
              if (iVar15 == 0) {
                iVar15 = idol::GetAnimDuration(8);
                iVar15 = pad::PadRingBitsOn(0x10,iVar15,(int *)0x0);
                if ((iVar15 == 0) || (DAT_0096b316 != 0)) {
                  iVar15 = idol::GetAnimDuration(8);
                  iVar15 = pad::PadRingBitsOn(0x20,iVar15,(int *)0x0);
                  if (iVar15 == 0) {
                    if ((g_framesNotGrounded == 0) || (g_heroGroundDist <= 2.0)) {
                      Hero_GetIdealThrustFromPad(0x3ff0000000000000,g_framesNotGrounded,0);
                      if ((0.22 < g_heroPadMagnitude) && (0.0 < g_heroIdealSpeed)) {
                        TransitionMovement(0x5b,1);
                      }
                    }
                    else {
                      TransitionMovement(0x5c,1);
                    }
                  }
                  else {
                    TransitionMovement(0x5f,1);
                  }
                }
                else {
                  TransitionMovement(0x61,1);
                }
              }
              else {
                TransitionMovement(0x60,1);
              }
            }
            else {
              TransitionMovement(0x5e,1);
            }
          }
          else {
            TransitionMovement(1,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == HOLOGUISE_WAVE) {
          if ((DAT_0096afca == '\0') || (0.3 <= g_heroGroundDist)) {
            iVar15 = idol::GetAnimDuration(0x2d);
            if ((iVar15 < (int)uVar16) && ((g_downButtons & CIRCLE) == 0)) {
              TransitionMovement(0x53,0);
              iVar15 = idol::GetAnimDuration(0x14);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,0,0);
            }
          }
          else {
            TransitionMovement(0x58,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == UNK_58) {
          iVar15 = idol::GetAnimDuration(300);
          if (iVar15 < (int)uVar16) {
            HandleHeroDeath();
          }
          if (DAT_0096afca == '\0') {
            if (g_framesNotGrounded == 0) {
              TransitionMovement(0x53,1);
            }
            else {
              TransitionMovement(0x55,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != HOLOGUISE_DYING) goto LAB_000c81a8;
      }
      else {
        if (g_heroState == UNK_66) {
          if ((DAT_0096a778 & 2) != 0) {
            TransitionMovement(0x65,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == ANIM_TARGET_WALK) {
          dVar26 = (double)FUN_005e8588(&g_heroPosition,&DAT_0096b320);
          if (0.20000000298023224 <= dVar26) {
            Hero_UpdateWalkAnim();
          }
          else {
            dVar26 = 2.700000047683716;
            if ((mobyutil::g_FrameTime * 2.7 <= DAT_00969e40) ||
               (dVar30 = (double)fastfunc::FastSubRots(g_heroRotation.z,DAT_0096b32c),
               0.03490658476948738 <= dVar30)) {
              if ((g_heroType != 0) &&
                 ((float)((double)mobyutil::g_FrameTime * dVar26) <= DAT_00969e40)) {
                TransitionMovement(0x66,1);
              }
            }
            else {
              TransitionMovement(0x67,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != GIANT_CLANK_DYING) {
          if (g_heroState == GIANT_CLANK_CHARGE_ATTACK) {
            if ((DAT_0096a778 & 2) != 0) {
              DAT_0096b316 = idol::GetAnimDuration(0x12d);
              TransitionMovement(0x5a,1);
            }
          }
          else if (g_heroState == GIANT_CLANK_ATTACK) {
            fVar34 = 21.0;
            if (g_heroMobyPtr->animationId == '\v') {
              fVar34 = 25.5;
            }
            if (((DAT_0096a77c == 0) && (fVar34 < g_heroAnimFrame)) &&
               (iVar15 = idol::GetAnimDuration(0x14), iVar15 < (int)uVar16)) {
              iVar15 = idol::GetAnimDuration(0x11);
              iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
              if (iVar15 != 0) {
                TransitionMovement(0x60,1);
              }
            }
            if (((28.5 < g_heroAnimFrame) && (DAT_0096a77c == 0)) || ((DAT_0096a778 & 2) != 0)) {
              TransitionMovement(0x5a,0);
            }
          }
          else if (g_heroState == GIANT_CLANK_FIRE_WEAPONS) {
            if (((g_downButtons & CIRCLE) == 0) && ((DAT_0096a778 & 2) != 0)) {
              TransitionMovement(0x5a,1);
            }
          }
          else if (g_heroState == GIANT_CLANK_JUMP) {
            if (DAT_0096a0fe != 0) {
              FUN_005e7e98(uVar12 - 0x150,&g_heroPosition);
              local_148 = local_148 - 1.0;
              mobyutil::DamageSphereAtPos
                        (0x400c000000000000,0x4044000000000000,g_heroMobyPtr,uVar12 - 0x150);
            }
            uVar16 = g_heroStateTimer;
            if (DAT_0096a100 < (int)g_heroStateTimer) {
              iVar15 = idol::GetAnimDuration(1);
              if (uVar16 == DAT_0096a100 + iVar15) {
                Hero_GetJumpPeak(DAT_0096a180,&g_heroPosition.x,&g_heroVelocity,param_3,local_cc);
                local_b0 = (ulonglong)local_cc[0];
                Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,DAT_0096a174,-1.0);
              }
              else {
                if (g_DustHoverState == 0) {
                  if ((g_framesNotGrounded == 0) && (DAT_0096a0fe != 0)) {
                    g_DustHoverState = idol::GetAnimDuration(1);
                    GameCamera.offset0.amp = 0.15;
                    GameCamera.offset0.total = idol::GetAnimDuration(0x1e);
                    iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a128);
                    if (g_heroAnimFrame < DAT_0096a124) {
                      bVar3 = pMVar8->animationId;
                      iVar18 = idol::GetAnimDuration(6);
                      local_b0 = (ulonglong)iVar18;
                      Hero_TransAnim((float)(longlong)local_b0,(uint)bVar3,iVar15 + 3);
                    }
                  }
                }
                else {
                  g_DustHoverState = g_DustHoverState + 1;
                }
                if (g_DustHoverState == 0) {
                  if (DAT_0096a0fe != 0) {
                    bVar3 = pMVar8->animationFrame;
                    iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                    if ((int)(uint)bVar3 < iVar15) {
                      dVar26 = -1.0;
                      fVar34 = Hero_PredictLand(60.0,DAT_0096a180,-1.0);
                      DAT_0096a12c = fastfunc::FastDoubleToInt((double)fVar34);
                      local_b0 = (ulonglong)DAT_0096a12c;
                      Hero_ScaleAnim(DAT_0096a124,(float)(longlong)local_b0,DAT_0096a174,
                                     (float)dVar26);
                      iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a128);
                      if (1.8 < g_heroAnimSpeed) {
                        local_b0 = (ulonglong)(DAT_0096a12c + 2);
                        Hero_TransAnim((float)(longlong)local_b0,(uint)pMVar8->animationId,
                                       iVar15 + 1);
                      }
                      if (g_heroAnimSpeed < 0.2) {
                        g_heroAnimSpeed = 0.2;
                      }
                      if (2.7 < g_heroAnimSpeed) {
                        g_heroAnimSpeed = 2.7;
                      }
                    }
                    iVar15 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                    iVar18 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                    if (iVar15 == iVar18) {
                      g_heroAnimSpeed = 0.0;
                    }
                  }
                }
                else {
                  g_heroAnimSpeed = 1.0;
                }
                if (g_DustHoverState == 1) {
                  FUN_005e7e98(uVar12 - 0x140,&g_heroPosition);
                  pMVar9 = g_heroMobyPtr;
                  local_138 = g_heroGroundZ + 0.2;
                  uVar17 = idol::GetAnimDuration(0x19);
                  mobyattack::Spawn_Moby1427_GCShockwave
                            (0x4000000000000000,(double)(mobyutil::g_FrameTime * 15.0),
                             0x4044000000000000,pMVar9,uVar12 - 0x140,uVar17);
                }
                if ((g_DustHoverState != 0) && (DAT_00969ea4 == 0)) {
                  iVar15 = idol::GetAnimDuration(4);
                  iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                  sVar22 = g_framesNotGrounded;
                  if ((iVar15 != 0) &&
                     (uVar32 = idol::GetAnimDuration(4), (int)sVar22 < (int)uVar32)) {
                    Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar32,0);
                    TransitionMovement(0x5e,1);
                    goto LAB_000c81a8;
                  }
                }
                iVar15 = g_DustHoverState;
                iVar18 = idol::GetAnimDuration(1);
                if (iVar18 < iVar15) {
                  g_HeroRequestedCamType = 0;
                  Hero_GetIdealThrustFromPad(0x3ff0000000000000);
                  if ((((g_heroIdealSpeed <= DAT_00723314) || (g_heroPadMagnitude <= 0.5)) ||
                      (DAT_00969ea4 != 0)) ||
                     (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
                     1.5707963705062866 <= dVar26)) {
                    iVar15 = g_DustHoverState;
                    iVar18 = idol::GetAnimDuration(0xc);
                    if (iVar18 < iVar15) {
                      TransitionMovement(0x5a,1);
                    }
                  }
                  else {
                    TransitionMovement(0x5b,1);
                  }
                }
              }
            }
          }
          goto LAB_000c81a8;
        }
      }
    }
    else if ((int)g_heroState < 0x75) {
      if (0x6d < (int)g_heroState) {
        if (g_heroState == UNK_74) {
          if (g_heroMobyPtr->animationId == 's') {
            bVar1 = false;
            if ((11.0 < g_heroAnimFrame) && (g_heroAnimFrame - 11.0 <= DAT_0096a78c)) {
              bVar1 = true;
            }
            if (bVar1) {
              Hero_PlaySound(0xd,0);
              mobyupdate_helpers::M711_0042b390(&DAT_0096a2c0,4);
            }
            if ((DAT_0096a778 & 2) != 0) {
              iVar15 = idol::GetAnimDuration(0x1e);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,0x66,0);
            }
          }
          iVar15 = DAT_0096a2e0;
          iVar18 = idol::GetAnimDuration(5);
          if (iVar18 < iVar15) {
            TransitionMovement(6,1);
            DAT_00969ec4 = idol::GetAnimDuration(8);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != WATER_WALKING) {
          if (g_heroState == MAGNERAMP_JUMP) {
            if (25.0 < g_heroAnimFrame) {
              TransitionMovement(0,1);
            }
          }
          else if (g_heroState == MAGNERAMP_ATTACK) {
            local_b0 = (ulonglong)*(int *)(&DAT_00723194 + DAT_0096a740 * 0x2c);
            if ((float)(longlong)local_b0 < g_heroAnimFrame) {
              TransitionMovement(0,1);
            }
          }
          else if (g_heroState == HOVERBOARD_WALL_BONK) {
            if ((DAT_0096a778 & 2) != 0) {
              Hero_GetHoverboardRespawn(afStack_1b0,afStack_1a0);
              DAT_0096a554 = local_198;
              Hero_Warp(afStack_1b0,afStack_1a0,0x6b,1);
            }
          }
          else if ((g_heroState == HOVERBOARD_WATER_DYING) &&
                  (((g_heroPosition.x < 5.0 || (g_heroPosition.y < 5.0)) ||
                   ((int)DAT_0096a59e < (int)g_heroStateTimer)))) {
            Hero_GetHoverboardRespawn(afStack_1d0,afStack_1c0);
            DAT_0096a554 = local_1b8;
            Hero_Warp(afStack_1d0,afStack_1c0,0x6b,1);
          }
          goto LAB_000c81a8;
        }
        goto LAB_000c03e4;
      }
      if (g_heroState == HOVERBOARD_DYING) {
        if ((Level == Rilgar) && (g_heroPosition.z < 61.4)) {
          DAT_0096a580 = 0x4275999a;
          TransitionMovement(0x6e,1);
          sVar22 = idol::GetAnimDuration(0x46);
          sVar22 = sVar22 - (short)g_heroStateTimer;
          DAT_0096a59e = sVar22;
          sVar21 = idol::GetAnimDuration(0x1e);
          if (sVar21 <= sVar22) {
            return;
          }
          DAT_0096a59e = idol::GetAnimDuration(0x1e);
          return;
        }
        if ((Level == Kalebo) && (g_heroPosition.z < 76.0)) {
          DAT_0096a580 = 0x42980000;
          TransitionMovement(0x6e,1);
          sVar22 = idol::GetAnimDuration(0x46);
          sVar22 = sVar22 - (short)g_heroStateTimer;
          DAT_0096a59e = sVar22;
          sVar21 = idol::GetAnimDuration(0x1e);
          if (sVar21 <= sVar22) {
            return;
          }
          DAT_0096a59e = idol::GetAnimDuration(0x1e);
          return;
        }
        if ((DAT_0096a778 & 2) != 0) {
          Hero_GetHoverboardRespawn(afStack_1f0,afStack_1e0);
          DAT_0096a554 = local_1d8;
          Hero_Warp(afStack_1f0,afStack_1e0,0x6b,1);
        }
        goto LAB_000c81a8;
      }
      if (g_heroState == HOVEDBOARD_JUMP) {
        if ((g_heroMobyPtr->animationId == 'U') || (g_heroMobyPtr->animationId == '\x7f')) {
          dVar26 = -1.0;
          fVar34 = Hero_PredictLand(60.0,DAT_0096a540,-1.0);
          DAT_0096a568 = fastfunc::FastDoubleToInt((double)fVar34);
          if (DAT_0096a568 != 0) {
            local_b0 = (ulonglong)(int)DAT_0096a568;
            Hero_ScaleAnim(27.0,(float)(longlong)local_b0,0.5,(float)dVar26);
          }
          if (2.2 < g_heroAnimSpeed) {
            g_heroAnimSpeed = 2.2;
          }
        }
        iVar15 = Hero_GrindMotion();
        if (iVar15 == 0) {
          Hero_HandleHoverboardTricks();
          Hero_HoverboardBoostPads();
          Hero_UpdateHoverboardRaceStats();
        }
        goto LAB_000c81a8;
      }
      if (g_heroState == HOVERBOARD_RIDING) {
        fastfunc::FastDecTimerS16(&DAT_0096a57e);
        iVar15 = Hero_GrindMotion();
        if (iVar15 == 0) {
          if ((DAT_0096a57c != 0) && (g_framesNotGrounded == 0)) {
            DAT_0096a59c = 0;
            DAT_0096a57c = 0;
            DAT_0096a57e = idol::GetAnimDuration(5);
          }
          if (DAT_0096a57c != 0) {
            DAT_0096a57c = DAT_0096a57c + 1;
          }
          DAT_0096a590 = DAT_0096a590 + 1;
          *(float *)(&DAT_0096a4b0 + (int)((longlong)DAT_0096a592 << 2)) = g_heroGroundDist;
          if (0x20 < DAT_0096a590) {
            DAT_0096a590 = 0x20;
          }
          uVar16 = (int)DAT_0096a592 + 1;
          DAT_0096a592 = (short)uVar16 +
                         ((short)((int)uVar16 >> 5) +
                         (ushort)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0)) * -0x20;
          dVar30 = 0.0;
          dVar26 = dVar30;
          for (lVar13 = 0; iVar15 = idol::GetAnimDuration(0x1e), (int)lVar13 < iVar15;
              lVar13 = lVar13 + 1) {
            uVar14 = (DAT_0096a592 - lVar13) + 0x20;
            lVar24 = uVar14 + ((longlong)((int)uVar14 >> 5) +
                              (ulonglong)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) * -0x20;
            if (DAT_0096a590 + -1 < (int)lVar24) {
              lVar24 = (longlong)DAT_0096a590 + -1;
            }
            iVar15 = (int)(lVar24 << 2);
            if (dVar26 < (double)*(float *)(&DAT_0096a4b0 + iVar15)) {
              dVar26 = (double)*(float *)(&DAT_0096a4b0 + iVar15);
            }
          }
          FUN_005e7e98(uVar12 - 0x200,&DAT_00969df0);
          if (local_1f8 <= -0.025) {
            dVar26 = (double)local_1f8;
          }
          else {
            dVar29 = (double)FUN_005e8128((double)g_heroGroundSlope);
            dVar26 = (double)(float)(dVar29 * (double)DAT_00969e44);
            if ((double)(float)(dVar29 * (double)DAT_00969e44) < dVar30) {
              dVar26 = dVar30;
            }
            if ((double)(DAT_00969e44 * 0.5) < dVar26) {
              dVar26 = (double)(DAT_00969e44 * 0.5);
            }
          }
          if ((double)local_1f8 < dVar30) {
            local_1f8 = (float)dVar30;
          }
          if (dVar26 < dVar30) {
            dVar26 = dVar30;
          }
          if (DAT_0096afc8 != '\0') {
            DAT_0096a58c = idol::GetAnimDuration(7);
          }
          fastfunc::FastDecTimerS16(&DAT_0096a58c);
          sVar22 = g_framesNotGrounded;
          if ((DAT_0096a57c == 0) &&
             (((sVar21 = idol::GetAnimDuration(4), sVar22 < sVar21 || (DAT_0096a59c == 0)) &&
              (DAT_0096a57e == 0)))) {
            iVar15 = idol::GetAnimDuration(9);
            iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
            if (iVar15 != 0) {
              DAT_0096a57c = 1;
              DAT_0096a59c = 1;
              fastfunc::FastMemSet(&DAT_0096a3a0,0,0x60);
              if (DAT_0096a58c == 0) {
                iVar15 = idol::GetAnimDuration(10);
                iVar18 = 0x55;
                if (DAT_0096a5ae != '\0') {
                  iVar18 = 0x7f;
                }
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,iVar18,5);
                if (g_heroBoardMoby != 0) {
                  mobyutil::MB_SetAnimation(g_heroBoardMoby,6,5,iVar15);
                }
                DAT_00969df8 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 5.5));
                DAT_00969e08 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 5.5));
                DAT_00969de8 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 5.5));
              }
              else {
                DAT_00969df8 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 14.7));
                DAT_00969e08 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 14.7));
                DAT_00969de8 = (float)(dVar26 + (double)(mobyutil::g_FrameTime * 14.7));
                TransitionMovement(0x6c,1);
              }
              goto LAB_000c81a8;
            }
          }
          sVar22 = DAT_0096a57c;
          if (((DAT_0096a57c != 0) &&
              (sVar23 = idol::GetAnimDuration(0x11), sVar21 = DAT_0096a57c, sVar22 < sVar23)) &&
             ((g_heroState != HOVEDBOARD_JUMP &&
              (((g_downButtons & CROSS) != 0 || (sVar22 = idol::GetAnimDuration(4), sVar21 < sVar22)
               ))))) {
            DAT_00969df8 = local_1f8 + mobyutil::g_FrameTime * 0.59;
            DAT_00969e08 = local_1f8 + mobyutil::g_FrameTime * 0.59;
            DAT_00969de8 = DAT_00969de8 + mobyutil::g_FrameTime * 0.59;
          }
          Hero_HandleHoverboardTricks();
          Hero_HoverboardBoostPads();
          Hero_UpdateHoverboardRaceStats();
          if (((g_heroMobyPtr->animationId == 'U') || (g_heroMobyPtr->animationId == '\x7f')) &&
             ((byte)g_heroMobyPtr->animationFrame < 0xc)) {
            if (DAT_0096a568 != 0) {
              local_b0 = (ulonglong)(int)DAT_0096a568;
              Hero_ScaleAnim(27.0,(float)(longlong)local_b0,0.5,-1.0);
            }
            if (1.2 < g_heroAnimSpeed) {
              g_heroAnimSpeed = 1.2;
            }
          }
          uVar16 = ____Hero_GetAnimId_52_68_7d_7e();
          if (((pMVar8->animationId == 'R') || (pMVar8->animationId == '}')) &&
             ((uVar16 == 0x68 || (uVar16 == 0x7e)))) {
            iVar15 = idol::GetAnimDuration(7);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
          }
          else if (((pMVar8->animationId == 'h') || (pMVar8->animationId == '~')) &&
                  ((uVar16 == 0x52 || (uVar16 == 0x7d)))) {
            iVar15 = idol::GetAnimDuration(0x11);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
          }
          if ((DAT_00969fec == 0) &&
             (((g_heroAnimSpeed = 1.0, g_heroMobyPtr->animationId == 'U' ||
               (g_heroMobyPtr->animationId == '\x7f')) && (g_heroAnimFrame < 25.0)))) {
            iVar15 = 0x55;
            if (DAT_0096a5ae != '\0') {
              iVar15 = 0x7f;
            }
            iVar18 = idol::GetAnimDuration(8);
            local_b0 = (ulonglong)iVar18;
            Hero_TransAnim((float)(longlong)local_b0,iVar15,0xe);
          }
          if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId != uVar16)) {
            iVar15 = idol::GetAnimDuration(10);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
          }
        }
        goto LAB_000c81a8;
      }
      if (g_heroState != DEATH_DROWNING) {
        if (g_heroState != MUD_JUMP) {
          if (g_heroState == MUD_SINKING) {
            uVar12 = (ulonglong)DAT_0096b340;
            if ((int)DAT_0096b340 < 2) {
              lVar13 = idol::GetAnimDuration(0xf);
              iVar15 = idol::GetAnimDuration(0x19);
              uVar12 = lVar13 + (longlong)(int)DAT_0096b340 * (longlong)iVar15;
              if ((int)uVar12 < (int)uVar16) {
                iVar15 = idol::GetAnimDuration(7);
                iVar15 = pad::PadRingBitsOn(0x40,iVar15,&iStack_11c);
                uVar12 = (ulonglong)iVar15;
                if (iVar15 != 0) {
                  iVar15 = TransitionMovement(0x69,1);
                  uVar12 = (ulonglong)iVar15;
                }
              }
            }
            uVar16 = g_heroStateTimer;
            if ((g_heroPosition.z < DAT_00969fd4 - 1.2) ||
               (uVar12 = idol::GetAnimDuration(0xaa), (int)uVar12 < (int)uVar16)) {
              HandleHeroDeath(uVar12);
              return;
            }
          }
          else if (g_heroState == TELEPORTER_USE) {
            if ((DAT_0096a778 & 2) != 0 || DAT_0096b330 != 0) {
              TransitionMovement(0,1);
            }
            dVar26 = (double)FUN_005e8588(&g_heroPosition,&DAT_0096b320);
            if (0.20000000298023224 < dVar26) {
              TransitionMovement(0x65,1);
            }
          }
          goto LAB_000c81a8;
        }
        goto LAB_000c3ec4;
      }
    }
    else {
      if ((int)g_heroState < 0x7c) {
        if (g_heroState == DEATH_MUD) {
          if ((g_heroPosition.z < DAT_00969fd4 - 1.2) ||
             (iVar15 = idol::GetAnimDuration(0x96), iVar15 < (int)uVar16)) {
            HandleHeroDeath();
            return;
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != WALL_BONK) {
          if (g_heroState == SLIDING_OFF_SOMETHING) {
            iVar15 = idol::GetAnimDuration(300);
            if (iVar15 < (int)uVar16) {
              HandleHeroDeath();
            }
            if (DAT_0096afca == '\0') {
              if (g_framesNotGrounded == 0) {
                TransitionMovement(0,1);
              }
              else {
                TransitionMovement(6,1);
              }
            }
          }
          else if (g_heroState != UNK_78) {
            if (g_heroState == DEATH_FALLING) {
              if ((Level == Kerwan) && (g_heroPosition.z < 5.0)) {
                HandleHeroDeath();
                return;
              }
              if ((Level == Blarg) && (g_heroPosition.z < 50.0)) {
                HandleHeroDeath();
                return;
              }
              if ((Level == Kalebo) &&
                 ((g_heroPosition.z < 77.0 ||
                  (((0x14 < (int)g_heroStateTimer && (DAT_00969f37 != '\0')) &&
                   (0.0 <= DAT_00969de8)))))) {
                HandleHeroDeath();
                return;
              }
              iVar15 = idol::GetAnimDuration(0x78);
              if (iVar15 < (int)uVar16) {
                HandleHeroDeath();
                return;
              }
            }
            else if (g_heroState == UNDERWATER_DAMAGE) {
              if (g_heroHealth < 1) {
                if ((Level == Quartu) || (Level == Fleet)) {
                  TransitionMovement(0x82,1);
                }
                else {
                  TransitionMovement(0x6a,1);
                  iVar15 = idol::GetAnimDuration(0x12);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,0x5f,0x28);
                }
              }
              else if ((DAT_0096a778 & 2) == 0) {
                iVar15 = idol::GetAnimDuration(0x32);
                if (iVar15 < (int)uVar16) {
                  TransitionMovement(0x34,0);
                }
              }
              else {
                TransitionMovement(0x34,1);
              }
            }
            else if (g_heroState == UNK_75) {
              if (g_heroHealth < 1) {
                TransitionMovement(0x6a,1);
                iVar15 = idol::GetAnimDuration(0x12);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,0x5f,0x25);
              }
              else {
                iVar15 = idol::GetAnimDuration(0x32);
                if (iVar15 < (int)uVar16) {
                  TransitionMovement(0x37,0);
                }
              }
            }
          }
          goto LAB_000c81a8;
        }
        goto LAB_000c03c0;
      }
      if (g_heroState != DEATH_WATER_LASER) {
        if (g_heroState == THRUSTER_PACK_HOVER) {
          if ((DAT_0096afca == '\0') || (0.5 <= g_heroGroundDist)) {
            fastfunc::FastDecTimerS32(&DAT_00a1a844);
            bVar1 = false;
            if ((DAT_00a1a844 != 0) &&
               (((g_downButtons & R1) != 0 && ((g_buttonsPressedThisFrame & R1) != 0)))) {
              bVar1 = true;
            }
            if ((g_buttonsPressedThisFrame & R1) != 0) {
              DAT_00a1a844 = idol::GetAnimDuration(0x1e);
            }
            uVar16 = g_heroStateTimer;
            iVar15 = idol::GetAnimDuration(0x14);
            if ((iVar15 < (int)uVar16) &&
               ((iVar15 = Hero_HandGadgetID(3), iVar15 != 3 ||
                (bVar1 || (g_buttonsPressedThisFrame & CROSS) != 0)))) {
              DAT_0096bfaa = '\0';
              DAT_00969ea4 = idol::GetAnimDuration(0x19);
              if (g_framesNotGrounded == 0) {
                iVar15 = TransitionMovement(0,0);
                if (iVar15 != 0) {
                  iVar15 = Hero_GetIdleAnim(0);
                  Hero_TransAnim(-2.0,iVar15,0);
                  DAT_0096af8e = DAT_0096af8e & 0xfffe;
                  DAT_0096af88 = 5;
                  DAT_0096af8c = 2;
                  DAT_0096af80 = 0x3c83126f;
                  DAT_0096af84 = 0x3b03126f;
                }
              }
              else {
                iVar15 = TransitionMovement(0,0);
                if (iVar15 != 0) {
                  iVar15 = idol::GetAnimDuration(9);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,7,0x17);
                  DAT_0096af8e = DAT_0096af8e & 0xfffe;
                  DAT_0096af88 = 5;
                  DAT_0096af8c = 2;
                  DAT_0096af80 = 0x3c83126f;
                  DAT_0096af84 = 0x3b03126f;
                }
              }
            }
          }
          else {
            TransitionMovement(0x79,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != DEATH_LASER) {
          if (g_heroState == DEATH_ICE) {
            iVar15 = idol::GetAnimDuration(0xdc);
            if (iVar15 < (int)uVar16) {
              HandleHeroDeath();
              return;
            }
            goto LAB_000c81a8;
          }
          if (g_heroState != UNK_7E) {
            if (g_heroState == UNK_7D) {
              if ((g_heroPosition.z < DAT_00969fd4 - 0.8) ||
                 (iVar15 = idol::GetAnimDuration(0x96), iVar15 < (int)uVar16)) {
                HandleHeroDeath();
                return;
              }
            }
            else if ((g_heroState == DEATH_LAVA) &&
                    ((g_heroPosition.z < DAT_00969fd4 - 1.2 ||
                     (iVar15 = idol::GetAnimDuration(100), iVar15 < (int)uVar16)))) {
              HandleHeroDeath();
              return;
            }
            goto LAB_000c81a8;
          }
          goto LAB_000c03e4;
        }
      }
    }
LAB_000bf65c:
    if ((DAT_0096a778 & 2) != 0) {
      HandleHeroDeath();
      return;
    }
    goto LAB_000c81a8;
  }
  if (0x26 < (int)g_heroState) {
    if (0x37 < (int)g_heroState) {
      if ((int)g_heroState < 0x40) {
        if ((int)g_heroState < 0x3c) {
          if ((int)g_heroState < 0x3a) {
            if (g_CurrentWeapon != HYDRODISPLACER) {
              TransitionMovement(0,1);
            }
          }
          else if (((int)g_heroState < 0x3b) && ((DAT_0096a778 & 2) != 0)) {
            TransitionMovement(0,1);
          }
          goto LAB_000c81a8;
        }
        if (0x3d < (int)g_heroState) {
          if (0x3e < (int)g_heroState) {
            g_heroAnimSpeed = g_storedNeutralSpeed * 27.0;
            if (g_heroAnimSpeed < 0.5) {
              g_heroAnimSpeed = 0.5;
            }
            if ((g_downButtons & (R1|R2)) == 0) {
              iVar15 = idol::GetAnimDuration(7);
              iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
              sVar22 = g_framesNotGrounded;
              if (iVar15 == 0) {
                sVar21 = idol::GetAnimDuration(5);
                if ((sVar22 < sVar21) || (g_heroGroundDist <= 0.8)) {
                  DAT_00969ed8 = idol::GetAnimDuration(0x28);
                  dVar26 = 0.7853981852531433;
                  if ((0.7853982 < ABS(g_heroRotation.y)) || (0.7853982 < ABS(g_heroRotation.x))) {
                    DAT_00969e90 = idol::GetAnimDuration(0x28);
                  }
                  if ((((g_framesGroundedCnt == 0) || (DAT_0096afc7 != '\0')) ||
                      (dVar26 <= ABS((double)g_heroRotation.y))) ||
                     (dVar26 <= ABS((double)g_heroRotation.x))) {
                    if (g_heroMobyPtr->animationId != '[') {
                      iVar15 = idol::GetAnimDuration(8);
                      local_b0 = (ulonglong)iVar15;
                      Hero_TransAnim((float)(longlong)local_b0,0x5b,0);
                    }
                    uVar16 = g_heroStateTimer;
                    if (((DAT_00964b14 != 0) &&
                        (iVar15 = idol::GetAnimDuration(0x1e), iVar15 <= (int)uVar16)) &&
                       (iVar15 = TransitionMovement(0,0), iVar15 != 0)) {
                      FUN_005e7e70(&g_heroExternalMomentum);
                      iVar15 = Hero_GetIdleAnim(0);
                      iVar18 = idol::GetAnimDuration(0xf);
                      local_b0 = (ulonglong)iVar18;
                      Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                    }
                  }
                  else {
                    TransitionMovement(2,1);
                  }
                }
                else {
                  TransitionMovement(6,1);
                }
              }
              else {
                TransitionMovement(0x71,1);
              }
            }
            else {
              TransitionMovement(4,1);
            }
          }
          goto LAB_000c81a8;
        }
        if ((int)g_heroState < 0x3d) goto LAB_000c3ec4;
      }
      else if (g_heroState != CLANK_DYING) {
        if (g_heroState == CLANK_DAMAGE) {
          iVar15 = idol::GetAnimDuration(0x20);
          uVar6 = g_heroStateTimer;
          if ((((int)uVar16 < iVar15) || (g_framesNotGrounded == 0)) || (g_heroGroundDist <= 1.0)) {
            iVar15 = idol::GetAnimDuration(0x23);
            if (iVar15 < (int)uVar6) {
              if (g_heroHealth < 1) {
                TransitionMovement(0x47,1);
              }
              else {
                TransitionMovement(0x43,0);
              }
            }
          }
          else {
            TransitionMovement(0x45,1);
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == CLANK_FALLING) {
          if ((Level == Blarg) && (g_heroPosition.z < 115.0)) {
            HandleHeroDeath();
            return;
          }
          if (g_framesNotGrounded == 0) {
            if (DAT_00969de8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969de8 = mobyutil::g_FrameTime * -9.0;
            }
            if (DAT_00969dc8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969dc8 = mobyutil::g_FrameTime * -9.0;
            }
            if (g_heroHealth < 1) {
              TransitionMovement(0x47,1);
            }
            else if ((g_heroPadMagnitude <= 0.5) || (DAT_00969ea4 != 0)) {
              TransitionMovement(0x43,1);
            }
            else {
              TransitionMovement(0x44,1);
            }
          }
          else if (0 < g_heroHealth) {
            if (DAT_0096a1c8 == 0) {
              iVar15 = idol::GetAnimDuration(5);
              iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
              if ((iVar15 != 0) && (0.6 < g_heroGroundDist)) {
                TransitionMovement(0x4f,1);
              }
            }
            else {
              TransitionMovement(0x4a,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState == CLANK_WALKING) goto LAB_000c65fc;
        if (g_heroState == CLANK_STANDING) {
          iVar15 = idol::GetAnimDuration(0x39);
          iVar18 = idol::GetAnimDuration(0xf);
          if (iVar15 - iVar18 < (int)sVar21) {
            iVar15 = idol::GetAnimDuration(10);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,0x12,0);
          }
          else {
            if ((DAT_0096bfdc == 0) && ((DAT_0096a778 & 2) != 0)) {
              if (g_heroMobyPtr->animationId == '\0') {
                dVar26 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
                if (dVar26 < 0.5) {
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,1,0);
                }
              }
              else {
                iVar15 = idol::GetAnimDuration(0xc);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,0,0);
              }
            }
            if (DAT_0096afca == '\0') {
              if ((g_downButtons & (L1|L2)) == 0) {
                if (g_framesNotGrounded == 0) {
                  iVar15 = idol::GetAnimDuration(8);
                  iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                  if (iVar15 == 0) {
                    iVar15 = idol::GetAnimDuration(9);
                    iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
                    if (iVar15 == 0) {
                      Hero_GetIdealThrustFromPad(0x3ff0000000000000,0,0);
                      if ((g_heroPadMagnitude <= 0.2) || (g_heroIdealSpeed <= 0.0)) {
                        if ((DAT_0096bfdc == 0) && (g_heroMobyPtr->animationId == '\x12')) {
                          iVar15 = idol::GetAnimDuration(0xc);
                          local_b0 = (ulonglong)iVar15;
                          Hero_TransAnim((float)(longlong)local_b0,0,0);
                        }
                      }
                      else {
                        TransitionMovement(0x44,1);
                      }
                    }
                    else {
                      TransitionMovement(0x51,1);
                    }
                  }
                  else {
                    TransitionMovement(0x49,1);
                  }
                }
                else {
                  TransitionMovement(0x45,1);
                }
              }
              else {
                TransitionMovement(1,1);
              }
            }
            else {
              TransitionMovement(0x52,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != GRINDRAIL_DAMAGE) {
          if (g_heroState == UNK_41) {
            iVar15 = idol::GetAnimDuration(8);
            if (iVar15 < (int)uVar16) {
              ____Hero_CleanupAttachedMobys();
              if (g_framesNotGrounded == 0) {
                iVar15 = idol::GetAnimDuration(7);
                iVar15 = Hero_JumpOrSnapJumpCheck(iVar15,0);
                if (iVar15 == 0) {
                  if ((g_downButtons & (R1|R2)) == 0) {
                    Hero_GetIdealThrustForWalk();
                    if (g_heroIdealSpeed <= 0.0) {
                      TransitionMovement(0,1);
                    }
                    else {
                      TransitionMovement(2,1);
                    }
                  }
                  else {
                    TransitionMovement(4,1);
                  }
                }
              }
              else {
                TransitionMovement(6,1);
              }
            }
          }
          else if (g_heroState == UNK_40) {
            if ((g_downButtons & (L1|L2)) == 0) {
              if (g_framesNotGrounded == 0) {
                if ((g_downButtons & CROSS) == 0) {
                  if ((g_downButtons & (R1|R2)) == 0) {
                    Hero_GetIdealThrustForWalk();
                    if (g_heroIdealSpeed <= 0.0) {
                      if ((DAT_0096a778 & 2) != 0) {
                        ____Hero_CleanupAttachedMobys();
                        TransitionMovement(0,1);
                      }
                    }
                    else {
                      TransitionMovement(0x41,1);
                    }
                  }
                  else {
                    TransitionMovement(0x41,1);
                  }
                }
                else {
                  TransitionMovement(0x41,1);
                }
              }
              else {
                TransitionMovement(0x41,1);
              }
            }
            else {
              TransitionMovement(1,1);
            }
          }
          goto LAB_000c81a8;
        }
        goto LAB_000c1c40;
      }
      goto LAB_000bf65c;
    }
    if ((int)g_heroState < 0x31) {
      if (0x2c < (int)g_heroState) {
        if ((int)g_heroState < 0x2f) {
          if (0x2d < (int)g_heroState) {
            if ((g_heroMobyPtr->updateId == '.') && (28.0 < g_heroAnimFrame)) {
              if ((g_downButtons & DAT_0096ad80) == 0) {
                TransitionMovement(0,1);
              }
              else {
                TransitionMovement(0x17,1);
              }
            }
            goto LAB_000c81a8;
          }
LAB_000c3190:
          if ((DAT_0096bd68 == 0) &&
             ((iVar15 = idol::GetAnimDuration(0x12), iVar15 <= (int)uVar16 ||
              (1.75 < g_heroGroundDist)))) {
            iVar15 = idol::GetAnimDuration(0x10);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,0xb,0);
            g_HeroRequestedCamType = 0;
            DAT_0096bd68 = 1;
            if (g_heroState == DISENGAGE_YELLOW_SWINGSHOT) {
              g_HeroRequestedCamType = 7;
            }
          }
          if (g_framesNotGrounded == 0) {
            Hero_PlayFootStep((uint)DAT_0096afcd,0,1);
            Hero_PlayFootStep((uint)DAT_0096afcd,1,1);
            uVar16 = g_heroStateTimer;
            if (DAT_00969de8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969de8 = mobyutil::g_FrameTime * -9.0;
            }
            if (DAT_00969dc8 < mobyutil::g_FrameTime * -9.0) {
              DAT_00969dc8 = mobyutil::g_FrameTime * -9.0;
            }
            if (g_heroHealth < 1) {
              TransitionMovement(0x3d,1);
            }
            else {
              bVar1 = g_standingOnMoby == 0;
              iVar15 = idol::GetAnimDuration(0x5a);
              if ((int)uVar16 < iVar15) {
                if (DAT_0096bd68 == 1) {
                  iVar15 = TransitionMovement(0,0);
                  if (iVar15 != 0) {
                    Hero_TransAnim(-1.0,0xc,9);
                  }
                  Hero_SetRelativeZ(0.0,(float *)&g_heroExternalMomentum,
                                    (float *)&g_heroExternalMomentum);
                  mobyutil::ClampVec3Magnitude
                            ((double)(mobyutil::g_FrameTime * 7.0),(Vec4 *)&g_heroExternalMomentum);
                  DAT_00969ea4 = idol::GetAnimDuration(7);
                  if (DAT_0096bd70 == 0x2d) {
                    DAT_00969ea4 = idol::GetAnimDuration(10);
                  }
                  uVar16 = g_heroStateTimer;
                  if ((bVar1) && (iVar15 = idol::GetAnimDuration(0x32), iVar15 < (int)uVar16)) {
                    DAT_00969ea4 = idol::GetAnimDuration(0x12);
                  }
                  DAT_0096af8e = DAT_0096af8e & 0xfffe;
                  DAT_0096af88 = 10;
                  DAT_0096af8c = 2;
                  DAT_0096af80 = 0x3c9ba5e3;
                  DAT_0096af84 = 0x3b03126f;
                }
                else if ((g_heroPadMagnitude <= 0.5) || (DAT_00969ea4 != 0)) {
                  if (DAT_00969e44 <= mobyutil::g_FrameTime * 3.0) {
                    TransitionMovement(0,1);
                    DAT_0096af8e = DAT_0096af8e & 0xfffe;
                    DAT_0096af88 = 5;
                    DAT_0096af8c = 2;
                    DAT_0096af80 = 0x3c83126f;
                    DAT_0096af84 = 0x3b03126f;
                  }
                  else {
                    iVar15 = TransitionMovement(3,0);
                    if (iVar15 != 0) {
                      iVar15 = idol::GetAnimDuration(0xc);
                      local_b0 = (ulonglong)iVar15;
                      Hero_TransAnim((float)(longlong)local_b0,6,0);
                      mobyutil::ClampVec3Magnitude
                                ((double)(mobyutil::g_FrameTime * 7.7),
                                 (Vec4 *)&g_heroExternalMomentum);
                    }
                  }
                }
                else {
                  TransitionMovement(2,1);
                  DAT_0096af8e = DAT_0096af8e & 0xfffe;
                  DAT_0096af88 = 7;
                  DAT_0096af8c = 2;
                  DAT_0096af80 = 0x3c83126f;
                  DAT_0096af84 = 0x3b03126f;
                }
              }
              else {
                iVar15 = TransitionMovement(0,0);
                if (iVar15 != 0) {
                  iVar15 = idol::GetAnimDuration(6);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,0xc,4);
                }
                if (bVar1) {
                  DAT_00969ea4 = idol::GetAnimDuration(0x16);
                }
                DAT_0096af8e = DAT_0096af8e & 0xfffe;
                DAT_0096af88 = 10;
                DAT_0096af8c = 4;
                DAT_0096af80 = 0x3cb43958;
                DAT_0096af84 = 0x3b83126f;
              }
            }
          }
          else if (0 < g_heroHealth) {
            if ((((g_downButtons & CROSS) == 0) || (UnlockableItems.heliPack == '\0')) ||
               ((iVar15 = Hero_HandGadgetID(3), iVar15 == 4 ||
                (((g_hasClank != 0 || (DAT_00969ea4 != 0)) || (g_heroGroundDist <= 0.6)))))) {
              uVar7 = DAT_00969ec2;
              sVar22 = idol::GetAnimDuration(0x14);
              if (sVar22 < (short)uVar7) {
                iVar15 = idol::GetAnimDuration(6);
                if (DAT_00969eb4 != 0) {
                  iVar15 = 1;
                }
                iVar15 = Hero_JumpOrSnapJumpCheck(iVar15,0);
                if (iVar15 != 0) goto LAB_000c81a8;
              }
              iVar15 = Hero_HandGadgetID(3);
              if ((iVar15 == 3) && (g_hasClank == 0)) {
                iVar15 = idol::GetAnimDuration(9);
                iVar18 = idol::GetAnimDuration(8);
                iVar15 = pad::PadRingCoincidentBitsOn(0x40,10,iVar15,iVar18);
                if (((iVar15 != 0) &&
                    (((g_downButtons & (R1|R2)) != 0 && ((g_buttonsPressedThisFrame & CROSS) != 0)))
                    ) && ((DAT_0096a0fe == 0 || (1.5 < g_heroGroundDist)))) {
                  TransitionMovement(0x10,1);
                  goto LAB_000c81a8;
                }
              }
              if (DAT_0096a1c8 == 0) {
                if (DAT_0096a24c == 0) {
                  if (DAT_0096a2dc != 0) {
                    TransitionMovement(0x74,1);
                  }
                }
                else {
                  TransitionMovement(0x28,1);
                }
              }
              else {
                TransitionMovement(0x18,1);
              }
            }
            else {
              TransitionMovement(8,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (0x2f < (int)g_heroState) {
          if ((g_downButtons & DAT_0096ad80) == 0 && DAT_00969eb0 == 0) {
            if (g_heroMobyPtr->animationId == '6') {
              TransitionMovement(0,0);
            }
            else {
              TransitionMovement(0,1);
            }
          }
          goto LAB_000c81a8;
        }
        goto LAB_000c03e4;
      }
      if ((int)g_heroState < 0x28) goto LAB_000c81a8;
      if (0x2b < (int)g_heroState) {
        if (((g_downButtons & DAT_0096ad80) == 0) &&
           (iVar15 = idol::GetAnimDuration(10), uVar6 = g_heroStateTimer, iVar15 < (int)uVar16)) {
          iVar15 = idol::GetAnimDuration(0x28);
          if ((int)uVar6 < iVar15) {
            DAT_0096a668 = 1;
          }
          TransitionMovement(0x2d,1);
          DAT_0096a624 = DAT_0071f418 * 7.0;
          DAT_0096a620 = DAT_0071f418 * 27.0;
        }
        goto LAB_000c81a8;
      }
LAB_000c1c40:
      if (g_heroState == GRINDRAIL_DAMAGE) {
        DAT_0096a29e = 0;
      }
      else {
        bVar1 = false;
        if ((((Level == Kalebo) && (DAT_00969f37 != '\0')) && (DAT_00969f1c != 0)) &&
           (*(short *)(DAT_00969f1c + 0xa6) == 0x101)) {
          bVar1 = true;
          *(undefined1 *)(DAT_00969f1c + 0xbc) = 1;
        }
        dVar26 = (double)FUN_005e7ebc(&DAT_00969de0);
        dVar30 = (double)FUN_005e7ebc(&g_heroVelocity);
        if (((dVar26 < (double)(float)(dVar30 * 0.5)) || (bVar1)) || (DAT_0096a29e != 0)) {
          bVar5 = true;
          if (Level != Kalebo) {
            lVar24 = uVar12 - 0x2c0;
            FUN_005e7e98(lVar24,&DAT_0096a1e0);
            mathfunc::cosf(DAT_0096a25c);
            FUN_005e8128((double)DAT_0096a25c);
            lVar13 = uVar12 - 0x2b0;
            FUN_005e7f54(lVar13,lVar13,lVar24);
            iVar15 = collproc::CollLine(lVar24,lVar13,2,0,0);
            if (iVar15 != 0) {
              bVar5 = false;
            }
          }
          DAT_0096a29e = 0;
          if (g_heroHealth < 2 || !bVar5) {
            dVar26 = (double)FUN_005e8338((double)g_heroVelocity,(double)DAT_00969dc4);
            dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,3.1415927);
            dVar30 = (double)mobyutil::MB_randRangeSigned(0x3fe0c15240000000,0x3fe38c3540000000);
            dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,(float)dVar30);
            dVar30 = (double)mathfunc::cosf((float)dVar26);
            dVar29 = 0.699999988079071;
            DAT_00969df0 = (float)(dVar30 * (double)DAT_0096a254) * 0.7;
            dVar26 = (double)FUN_005e8128(dVar26);
            iVar15 = DAT_0096a250;
            DAT_00969df4 = (float)((double)(float)(dVar26 * (double)DAT_0096a254) * dVar29);
            DAT_00969df8 = mobyutil::g_FrameTime * 4.5;
            iVar20 = idol::GetAnimDuration(0xf);
            iVar18 = g_heroHealth;
            if ((iVar20 < iVar15) && (iVar18 = 2, 1 < g_heroHealth)) {
              iVar18 = g_heroHealth;
            }
            g_heroHealth = iVar18;
            TransitionMovement(0x16,1);
            DAT_00969ea8 = idol::GetAnimDuration(0x46);
          }
          else {
            TransitionMovement(0x42,1);
            if (bVar1) {
              if (g_heroGroundDist <= 1.7) {
                if (g_heroGroundDist <= 1.0) {
                  DAT_00969dc8 = mobyutil::g_FrameTime * 13.0;
                }
                else {
                  DAT_00969dc8 = mobyutil::g_FrameTime * 10.0;
                }
              }
              else {
                DAT_00969dc8 = mobyutil::g_FrameTime * 8.0;
              }
            }
          }
          goto LAB_000c81a8;
        }
      }
      iVar15 = DAT_0096a250;
      if (g_heroState == GRINDRAIL_USE) {
        bVar1 = true;
        if ((Level == Batalia) &&
           (dVar26 = (double)FUN_005e8548(&g_heroPosition,uVar12 - 0x2a0), dVar26 < 7.0)) {
          bVar1 = false;
          DAT_00969ea4 = idol::GetAnimDuration(100);
        }
        if (bVar1) {
          iVar15 = idol::GetAnimDuration(7);
          iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
          if (iVar15 != 0) {
            if (DAT_0096a298 == 0) {
              TransitionMovement(0x29,1);
            }
            else {
              DAT_0096a2a0 = 1;
            }
            goto LAB_000c81a8;
          }
        }
        iVar15 = DAT_0096a250;
        iVar18 = idol::GetAnimDuration(5);
        if (iVar18 < iVar15) {
          if (8.0 < g_heroGroundDist) {
            DAT_00969ea4 = idol::GetAnimDuration(0x46);
          }
          TransitionMovement(6,1);
          DAT_00969ea8 = idol::GetAnimDuration(8);
        }
        else {
          iVar15 = idol::GetAnimDuration(7);
          iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
          if (iVar15 == 0) {
            if (DAT_0096a288 == -1) {
              uVar16 = DAT_0096a26c + 0x31;
              if (g_heroMobyPtr->animationId != uVar16) {
                iVar15 = idol::GetAnimDuration(0xc);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
              }
            }
            else {
              uVar16 = DAT_0096a288 + 0x4a;
              if (g_heroMobyPtr->animationId != uVar16) {
                iVar15 = idol::GetAnimDuration(0xc);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
              }
            }
            if ((DAT_0096a29c != 0) && (DAT_0096a2a0 != 0)) {
              TransitionMovement(0x29,1);
              DAT_0096a2a4 = 1;
              mobyutil::MB_computeLobVelocity
                        ((double)DAT_00969e44,-(double)DAT_0096a180,&g_heroPosition,&DAT_0096a230);
              dVar26 = (double)mobyutil::MB_BallisticTicksToHeight
                                         ((double)DAT_0096a180,uVar12 - 0x290,uVar12 - 0x280);
              DAT_0096a168 = (float)dVar26;
              DAT_0096a110 = (float)dVar26;
              DAT_0096a16c = (float)(dVar26 + 0.05000000074505806);
              DAT_0096a180 = DAT_0096a2a8;
            }
            DAT_0096a298 = 0;
            DAT_0096a29c = 0;
          }
          else {
            TransitionMovement(0x2b,1);
          }
        }
      }
      else if (g_heroState == GRINDRAIL_WRENCH_ATTACK) {
        iVar15 = idol::GetAnimDuration(5);
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if ((iVar15 == 0) ||
           (local_b0 = (ulonglong)*(int *)(&DAT_00723190 + DAT_0096a740 * 0x2c),
           g_heroAnimFrame < (float)(longlong)local_b0)) {
          iVar15 = 0xe;
          if (DAT_0096a740 == 0) {
            iVar15 = 0x17;
          }
          iVar18 = idol::GetAnimDuration(7);
          iVar20 = pad::PadRingBitsOn(0x80,iVar18,(int *)0x0);
          iVar18 = DAT_0096a250;
          if (iVar20 == 0) {
            local_b0 = (ulonglong)*(int *)(&DAT_00723194 + DAT_0096a740 * 0x2c);
            if (g_heroAnimFrame <= (float)(longlong)local_b0) {
              iVar15 = idol::GetAnimDuration(5);
              if (iVar15 < iVar18) {
                TransitionMovement(6,1);
                DAT_00969ea8 = idol::GetAnimDuration(8);
              }
            }
            else {
              TransitionMovement(0x28,1);
            }
          }
          else {
            local_b0 = (ulonglong)iVar15;
            if ((float)local_b0 < g_heroAnimFrame) {
              TransitionMovement(0x2b,1);
            }
          }
        }
        else {
          TransitionMovement(0x29,1);
        }
      }
      else if ((g_heroState == GRINDRAIL_JUMP) || (g_heroState == GRINDRAIL_SWITCH)) {
        iVar18 = idol::GetAnimDuration(5);
        uVar16 = g_heroStateTimer;
        if (((iVar15 <= iVar18) && (DAT_0096a2a4 == 0)) ||
           ((DAT_0096a24c == 0 || (0.35 <= g_heroPosition.z - DAT_0096a1e8)))) {
          if ((g_heroState == GRINDRAIL_JUMP) &&
             ((((iVar15 = idol::GetAnimDuration(10), (int)uVar16 < iVar15 && (DAT_0096a0fe == 0)) &&
               (DAT_0096afce == '\0')) && ((0.5 < g_heroPadMagnitude && (DAT_0096a270 == 0)))))) {
            Hero_GetIdealThrustFromPad(0x3ff0000000000000,0,0);
            dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,DAT_0096a25c);
            dVar30 = 1.5707963705062866;
            dVar26 = (double)fastfunc::FastSubRots((float)dVar26,1.5707964);
            if (dVar26 < 1.2217304706573486) {
              dVar26 = (double)fastfunc::FastWrapRot(DAT_0096a25c,(float)dVar30);
              dVar29 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,(float)dVar26);
              if (dVar30 < dVar29) {
                dVar26 = (double)fastfunc::FastWrapRot(DAT_0096a25c,-1.5707964);
              }
              dVar29 = 2.0;
              dVar31 = 4.5;
              dVar30 = dVar29;
              do {
                dVar33 = (double)DAT_00969e40;
                iVar15 = idol::GetAnimDuration(0);
                local_b0 = (ulonglong)iVar15;
                lVar13 = uVar12 - 0x270;
                dVar33 = (double)(float)(dVar33 * (double)(longlong)local_b0);
                FUN_005e7e98((double)(longlong)local_b0,lVar13,&g_heroPosition);
                local_118 = DAT_0096a244;
                local_114 = DAT_0096a248;
                iVar15 = mobyutil::MB_PathMoveDist
                                   (dVar33,DAT_0096a240,lVar13,uVar12 - 0x118,uVar12 - 0x114);
                if (iVar15 != 0) {
                  iVar15 = idol::GetAnimDuration(0x30);
                  local_b0 = (ulonglong)iVar15;
                  FUN_005e822c((double)(longlong)local_b0,uVar12 - 0x250,&DAT_00969de0);
                  FUN_005e7f54(lVar13,&g_heroPosition,uVar12 - 0x250);
                }
                dVar28 = (double)local_270;
                dVar33 = (double)mathfunc::cosf((float)dVar26);
                dVar27 = (double)local_26c;
                local_270 = (float)(dVar28 + (double)(float)(dVar33 * dVar30));
                dVar33 = (double)FUN_005e8128(dVar26);
                param_3 = uVar12 - 0x108;
                local_26c = (float)(dVar27 + (double)(float)(dVar33 * dVar30));
                iVar15 = Hero_FindGrindRail(CONCAT44(local_270,local_26c),
                                            CONCAT44(local_268,local_264),param_3,uVar12 - 0x260,
                                            uVar12 - 0x104,uVar12 - 0x110,uVar12 - 0x10c,
                                            DAT_0096a240);
                if (iVar15 != 0) {
                  param_3 = ZEXT48(&DAT_0096a1e0);
                  DAT_0096a274 = DAT_0096a240;
                  DAT_0096a278 = DAT_0096a244;
                  DAT_0096a27c = DAT_0096a248;
                  DAT_0096a280 = DAT_0096a264;
                  FUN_005e7e98(&DAT_0096a220,&DAT_0096a1e0);
                  DAT_0096a240 = local_108;
                  DAT_0096a264 = local_10c;
                  mobyutil::MB_PathFollowToPos
                            (0x408f380000000000,dVar29,0,local_108,&g_heroPosition,&DAT_0096a1e0,
                             &DAT_0096a244,&DAT_0096a248);
                  DAT_0096a270 = 1;
                  DAT_0096a284 = 0;
                  TransitionMovement(0x2a,1);
                  break;
                }
                dVar30 = (double)(float)(dVar30 + 0.75);
              } while (dVar30 <= dVar31);
            }
          }
          if ((DAT_0096a100 < (int)g_heroStateTimer) &&
             (fVar34 = Hero_RelativeZComponent(&g_heroVelocity), fVar34 < 0.001)) {
            DAT_0096a0fe = 1;
          }
          uVar16 = g_heroStateTimer;
          iVar15 = idol::GetAnimDuration(1);
          uVar6 = g_heroStateTimer;
          if (((((int)uVar16 < DAT_0096a100 + iVar15) ||
               (iVar15 = idol::GetAnimDuration(9), DAT_0096a100 + iVar15 <= (int)uVar6)) ||
              (DAT_0096a0fe != 0)) || (DAT_0096a77c != 0)) {
            if ((DAT_0096a0fe != 0) && (g_DustHoverState == 0)) {
              DAT_0096a12c = idol::GetAnimDuration(0x1e);
              if (DAT_0096a250 == 0) {
                fVar34 = Hero_PredictLand(60.0,DAT_0096a180,DAT_0096a1e8);
                DAT_0096a12c = fastfunc::FastDoubleToInt((double)fVar34);
              }
              if (DAT_0096a12c != 0) {
                local_b0 = (ulonglong)DAT_0096a12c;
                Hero_ScaleAnim(DAT_0096a124,(float)(longlong)local_b0,0.5,DAT_0071f40c * 0.25);
              }
              if (DAT_0096a270 != 0) {
                if (2.0 < g_heroAnimSpeed) {
                  g_heroAnimSpeed = 2.0;
                }
                if (g_heroAnimSpeed < 0.5) {
                  g_heroAnimSpeed = 0.5;
                }
              }
              if (((DAT_0096a250 == 0) && (g_heroGroundDist < 0.5)) &&
                 (g_heroPosition.z + DAT_00969dc8 < DAT_0096a1e8)) {
                DAT_00969dc8 = DAT_0096a1e8 - g_heroPosition.z;
                g_DustHoverState = idol::GetAnimDuration(1);
                g_heroAnimSpeed = 1.0;
              }
              if (g_heroPosition.z - DAT_0096a1e8 < -0.5) {
                TransitionMovement(6,1);
                DAT_00969ea4 = idol::GetAnimDuration(0x46);
                DAT_00969ea8 = idol::GetAnimDuration(8);
                goto LAB_000c81a8;
              }
            }
          }
          else {
            Hero_GetJumpPeak(DAT_0096a180,&g_heroPosition.x,&g_heroVelocity,param_3,&local_100);
            local_b0 = (ulonglong)local_100;
            dVar26 = 0.5;
            Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,0.5,DAT_0071f40c * 0.25);
            if (DAT_0096a270 != 0) {
              if (2.0 < g_heroAnimSpeed) {
                g_heroAnimSpeed = 2.0;
              }
              if ((double)g_heroAnimSpeed < dVar26) {
                g_heroAnimSpeed = (float)dVar26;
              }
            }
          }
          if (g_DustHoverState != 0) {
            iVar15 = g_DustHoverState + 1;
            g_DustHoverState = iVar15;
            iVar18 = idol::GetAnimDuration(2);
            if (iVar18 < iVar15) {
              g_heroState = GRINDRAIL_USE;
              iVar18 = DAT_0096a26c + 0x31;
              iVar15 = idol::GetAnimDuration(7);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,iVar18,0);
              goto LAB_000c81a8;
            }
          }
          if ((((DAT_0096a250 != 0) && (g_framesNotGrounded == 0)) && (DAT_0096a0fe != 0)) &&
             (iVar15 = TransitionMovement(0,0), iVar15 != 0)) {
            iVar15 = idol::GetAnimDuration(6);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,0xc,4);
          }
        }
        else {
          TransitionMovement(0x28,1);
        }
      }
      else if (g_heroState == GRINDRAIL_DAMAGE) {
        dVar26 = 0.0;
        if (0.0 < DAT_00969dc8) {
          Hero_GetJumpPeak(DAT_0071f418 * 23.0,&g_heroPosition.x,&g_heroVelocity,0x720000,&local_fc)
          ;
          local_b0 = (ulonglong)local_fc;
          Hero_ScaleAnim(9.0,(float)(longlong)local_b0,0.5,-1.0);
        }
        if ((DAT_0096a778 & 2) == 0) {
          if (((double)DAT_00969dc8 < dVar26) && (ABS(g_heroPosition.z - DAT_0096a1e8) < 0.3)) {
            TransitionMovement(0x28,1);
          }
        }
        else {
          TransitionMovement(0x28,1);
        }
      }
      goto LAB_000c81a8;
    }
    if (g_heroState != UNK_37) {
      if (g_heroState == WATER_SWIMMING) {
        if (DAT_00969eb8 == 0) {
          iVar15 = idol::GetAnimDuration(8);
          iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
          if (iVar15 != 0) {
            TransitionMovement(0x12,1);
            goto LAB_000c81a8;
          }
        }
        if (DAT_00969ebe == 0) {
          iVar15 = idol::GetAnimDuration(7);
          iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
          if (iVar15 != 0) {
            if ((UnlockableItems.hydroPack == '\0') || ((g_downButtons & (R1|R2)) == 0)) {
              TransitionMovement(0x33,1);
            }
            else {
              TransitionMovement(0x35,1);
            }
            goto LAB_000c81a8;
          }
        }
        if ((DAT_0096bd89 != '\0') && (DAT_0096bf84 < 0.7)) {
          TransitionMovement(0x73,0);
          iVar15 = idol::GetAnimDuration(0x11);
          local_b0 = (ulonglong)iVar15;
          Hero_TransAnim((float)(longlong)local_b0,0x60,0);
          DAT_00969dc8 = 0.0;
          DAT_00969de8 = 0.0;
        }
        if (((g_heroPadMagnitude < 0.1) && (g_storedNeutralSpeed == 0.0)) && (DAT_0096a378 == 0)) {
          TransitionMovement(0x37,1);
        }
        goto LAB_000c81a8;
      }
      if (g_heroState != HYDRO_PACK_MOVING) {
        if (g_heroState == UNDERWATER_STANDING) {
          if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId != '<')) {
            iVar15 = idol::GetAnimDuration(0xb);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,0x3c,0);
          }
          if (((0.2 < g_heroPadMagnitude) || ((g_downButtons & (SQUARE|CROSS)) != 0)) ||
             ((UnlockableItems.hydroPack != '\0' && ((g_downButtons & (R1|R2)) != 0)))) {
            if ((UnlockableItems.hydroPack == '\0') || ((g_downButtons & (R1|R2)) == 0)) {
              TransitionMovement(0x33,1);
            }
            else {
              TransitionMovement(0x35,1);
            }
          }
          goto LAB_000c81a8;
        }
        if (g_heroState != UNDERWATER_MOVING) {
          if ((((g_heroState != TURRET_PLANE_UI) && (g_heroState == WATER_SLIDING)) &&
              (DAT_0096afc3 == '\0')) && (DAT_00969ec0 == 0)) {
            if (((DAT_0096bf00 != -1) &&
                (sound::g_SoundChannels[DAT_0096bf00].pMoby == g_heroMobyPtr)) &&
               (sound::g_SoundChannels[DAT_0096bf00].state != '\0')) {
              sound::sound_Kill(DAT_0096bf00);
            }
            DAT_0096bf00 = -1;
            iVar15 = TransitionMovement(0,0);
            if (iVar15 != 0) {
              iVar15 = Hero_GetIdleAnim(0);
              iVar18 = idol::GetAnimDuration(0x11);
              local_b0 = (ulonglong)iVar18;
              Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
              FUN_005e7e98(&g_heroExternalMomentum,&DAT_00969e20);
            }
          }
          goto LAB_000c81a8;
        }
      }
      if (g_heroState == UNDERWATER_MOVING) {
        g_heroAnimSpeed = g_storedNeutralSpeed * 15.0;
        if (g_heroAnimSpeed < 0.25) {
          g_heroAnimSpeed = 0.25;
        }
        if (0.75 < g_heroAnimSpeed) {
          g_heroAnimSpeed = 0.75;
        }
      }
      if (((g_heroState != UNDERWATER_MOVING) || ((g_downButtons & (SQUARE|CROSS)) != 0)) ||
         (((g_heroAnimFrame <= 9.0 ||
           (((19.0 <= g_heroAnimFrame || (DAT_0096bd68 == 1)) || (0.1 <= g_heroPadMagnitude)))) ||
          (mobyutil::g_FrameTime * 2.0 <= g_storedNeutralSpeed)))) {
        if ((UnlockableItems.hydroPack == '\0') || ((g_downButtons & (R1|R2)) == 0)) {
          if ((g_heroState == HYDRO_PACK_MOVING) && (0.5 < g_heroPadMagnitude)) {
            TransitionMovement(0x33,1);
            goto LAB_000c81a8;
          }
        }
        else if ((g_heroState == UNDERWATER_MOVING) &&
                (iVar15 = idol::GetAnimDuration(0x14), iVar15 < (int)uVar16)) {
          TransitionMovement(0x35,1);
          goto LAB_000c81a8;
        }
        if (((g_heroState == HYDRO_PACK_MOVING) &&
            ((((g_downButtons & (SQUARE|CROSS)) == 0 && (DAT_0096bd68 != 1)) &&
             (g_heroPadMagnitude < 0.7)))) && ((g_downButtons & (R1|R2)) == 0)) {
          TransitionMovement(0x34,1);
        }
      }
      else {
        TransitionMovement(0x34,1);
      }
      goto LAB_000c81a8;
    }
    if (DAT_00969eb8 == 0) {
      iVar15 = idol::GetAnimDuration(8);
      iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
      uVar16 = g_heroStateTimer;
      if ((iVar15 != 0) && (iVar15 = idol::GetAnimDuration(10), iVar15 < (int)uVar16)) {
        TransitionMovement(0x12,1);
        goto LAB_000c81a8;
      }
    }
    DAT_0096bd87 = '\x01';
    if (DAT_00969ebe == 0) {
      iVar15 = idol::GetAnimDuration(7);
      iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
      if (iVar15 != 0) {
LAB_000bfa4c:
        if ((UnlockableItems.hydroPack == '\0') || ((g_downButtons & (R1|R2)) == 0)) {
          TransitionMovement(0x33,1);
        }
        else {
          TransitionMovement(0x35,1);
        }
        goto LAB_000c81a8;
      }
      if (UnlockableItems.hydroPack != '\0') {
        iVar15 = idol::GetAnimDuration(7);
        iVar15 = pad::PadRingBitsOn(10,iVar15,(int *)0x0);
        if (iVar15 != 0) goto LAB_000bfa4c;
      }
    }
    if (((DAT_0096bd89 != '\0') && (DAT_0096bf84 < 0.4)) &&
       (iVar15 = TransitionMovement(0,0), iVar15 != 0)) {
      iVar15 = Hero_GetIdleAnim(0);
      iVar18 = idol::GetAnimDuration(0x12);
      local_b0 = (ulonglong)iVar18;
      Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
    }
    uVar16 = g_heroStateTimer;
    if ((0.2 < g_heroPadMagnitude) && (iVar15 = idol::GetAnimDuration(10), iVar15 < (int)uVar16)) {
      TransitionMovement(0x36,1);
    }
    goto LAB_000c81a8;
  }
  if ((int)g_heroState < 0x18) {
    if ((int)g_heroState < 6) {
      if (g_heroState == CROUCHING) {
        if ((g_downButtons & (L1|L2)) == 0) {
          iVar15 = idol::GetAnimDuration(0xb);
          if ((iVar15 < (int)uVar16) && ((g_downButtons & (R1|R2)) == 0)) {
            TransitionMovement(0,0);
            iVar15 = Hero_GetIdleAnim(0);
            Hero_TransAnim(-2.0,iVar15,0);
          }
          else if ((DAT_0096afca == '\0') || (DAT_00969fec != 0)) {
            if (g_onMagnerail == 1) {
              iVar15 = idol::GetAnimDuration(7);
              iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
              if (iVar15 != 0) {
                TransitionMovement(0x71,1);
                goto LAB_000c81a8;
              }
            }
            else {
              iVar15 = Hero_CrouchJumpTransitions();
              if (iVar15 != 0) goto LAB_000c81a8;
            }
            iVar15 = idol::GetAnimDuration(0xf);
            iVar15 = pad::PadRingBitsOn(0x80,iVar15,(int *)0x0);
            if ((iVar15 != 0) && (g_CurrentWeapon == WRENCH)) {
              TransitionMovement(0x15,1);
            }
            sVar22 = g_framesNotGrounded;
            sVar21 = idol::GetAnimDuration(8);
            uVar16 = g_heroStateTimer;
            if ((sVar21 < sVar22) &&
               ((DAT_0096bd70 != 8 || (iVar15 = idol::GetAnimDuration(0xf), iVar15 <= (int)uVar16)))
               ) {
              TransitionMovement(6,1);
            }
          }
          else {
            TransitionMovement(0x79,1);
          }
        }
        else {
          TransitionMovement(1,1);
        }
        goto LAB_000c81a8;
      }
      if (g_heroState == STOPPING) {
        if ((g_downButtons & (L1|L2)) == 0) {
          if ((DAT_00969ea4 == 0) && ((g_buttonsPressedThisFrame & CROSS) != 0)) {
            TransitionMovement(7,1);
          }
          else if ((DAT_00969ea4 == 0) && ((g_downButtons & (R1|R2)) != 0)) {
            TransitionMovement(4,1);
          }
          else {
            sVar21 = idol::GetAnimDuration(8);
            if ((sVar22 <= sVar21) || (g_heroGroundDist <= 0.3)) {
              if ((DAT_0096a778 & 2) == 0) {
                if (DAT_0096a24c == 0) {
                  if (0.2 < g_heroPadMagnitude) {
                    iVar15 = Hero_GetIdleAnim(0);
                    if (iVar15 == 0x54) {
                      if ((10.0 < g_heroAnimFrame) &&
                         (iVar15 = TransitionMovement(0,0), iVar15 != 0)) {
                        iVar15 = Hero_GetIdleAnim(0);
                        iVar18 = idol::GetAnimDuration(0x11);
                        local_b0 = (ulonglong)iVar18;
                        Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                      }
                    }
                    else if (g_storedNeutralSpeed == 0.0) {
                      TransitionMovement(0,0);
                      goto LAB_000c81a8;
                    }
                    if (0.5 < g_heroPadMagnitude) {
                      TransitionMovement(2,1);
                    }
                  }
                }
                else {
                  TransitionMovement(0x28,1);
                }
              }
              else {
                TransitionMovement(0,1);
              }
            }
            else {
              TransitionMovement(6,1);
            }
          }
        }
        else {
          TransitionMovement(1,1);
        }
        goto LAB_000c81a8;
      }
      if (g_heroState != WALKING) {
        if (g_heroState == FIRST_PERSON_VIEW) {
          if ((g_heroType == 0) && ((DAT_0096bd8a == '\0' || (g_heroInvisible != '\0')))) {
            if ((g_downButtons & (R1|R2)) == 0) {
              uVar16 = Hero_GetIdleAnim(1);
              if (g_heroMobyPtr->animationId != uVar16) {
                iVar15 = idol::GetAnimDuration(8);
                local_b0 = (ulonglong)iVar15;
                Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
              }
            }
            else if (g_heroMobyPtr->animationId != '\r') {
              iVar15 = idol::GetAnimDuration(8);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,0xd,0);
            }
          }
          bVar1 = true;
          if (((g_currentWeaponMoby != (MobyInstance *)0x0) &&
              ((uint)LZCOUNT(g_currentWeaponMoby->oClass - 0x47) >> 5 != 0)) &&
             (g_currentWeaponMoby->state != '\0')) {
            bVar1 = false;
          }
          if ((g_downButtons & (L1|L2)) == 0 && bVar1) {
            if (g_heroType == 0) {
              if ((g_downButtons & (R1|R2)) == 0) {
                TransitionMovement(0,0);
                uVar16 = Hero_GetIdleAnim(1);
                if (g_heroMobyPtr->animationId != uVar16) {
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
                }
              }
              else {
                TransitionMovement(4,1);
              }
            }
            else {
              Hero_TransitionToDefault();
            }
          }
        }
        else if (g_heroState == STANDING) {
          if ((g_downButtons & (L1|L2)) == 0) {
            DAT_0096a790 = 0xffffffff;
            DAT_0096a798 = 0;
            if ((DAT_0096bfaa == '\0') ||
               ((g_onMagnerail != 0 && (UnlockableItems.magneboots != '\0')))) {
              bVar1 = true;
              iVar15 = Hero_HandGadgetID(0);
              if (iVar15 == 0x1b) {
                bVar3 = g_heroMobyPtr->animationId;
                uVar16 = Hero_GetIdleAnim(0);
                if (bVar3 != uVar16) {
                  iVar15 = Hero_GetIdleAnim(0);
                  Hero_TransAnim(-2.0,iVar15,0);
                }
                bVar1 = false;
              }
              iVar15 = DAT_0096ae60;
              if (DAT_0096afc2 != '\0') {
                bVar1 = false;
              }
              if (DAT_0096ae84 == 2) {
                if (((DAT_0096ae60 != 0) && ((*(byte *)(DAT_0096ae60 + 0x70) & 2) != 0)) &&
                   (*(char *)(DAT_0096ae60 + 0x53) != '\x01')) {
                  uVar17 = idol::GetAnimDuration(7);
                  mobyutil::MB_SetAnimation(iVar15,1,0,uVar17);
                }
                iVar15 = DAT_0096ae64;
                if (((DAT_0096ae64 != 0) && ((*(byte *)(DAT_0096ae64 + 0x70) & 2) != 0)) &&
                   (*(char *)(DAT_0096ae64 + 0x53) != '\x01')) {
                  uVar17 = idol::GetAnimDuration(7);
                  mobyutil::MB_SetAnimation(iVar15,1,0,uVar17);
                }
              }
              iVar15 = DAT_0096ae60;
              if ((0.61086524 < DAT_00721e28) || (0.43633232 < DAT_00721e24)) {
                if ((DAT_0096ae60 != 0) && (*(char *)(DAT_0096ae60 + 0x53) != '\x01')) {
                  uVar17 = idol::GetAnimDuration(0xc);
                  mobyutil::MB_SetAnimation(iVar15,1,0,uVar17);
                }
                iVar15 = DAT_0096ae64;
                if ((DAT_0096ae64 != 0) && (*(char *)(DAT_0096ae64 + 0x53) != '\x01')) {
                  uVar17 = idol::GetAnimDuration(0xc);
                  mobyutil::MB_SetAnimation(iVar15,1,0,uVar17);
                }
              }
              bVar3 = pMVar8->animationId;
              uVar16 = Hero_GetIdleAnim(0);
              if ((bVar3 == uVar16) && (bVar1)) {
                iVar15 = Hero_GetSpecialIdle(&local_120);
                if (iVar15 != 0) {
                  DAT_0096bf50 = local_120;
                  iVar15 = local_120 * 0x70;
                  DAT_00969ec8 = idol::GetAnimDuration(0x78);
                  local_c0 = (int)(animationSpeed * *(float *)(iVar15 + 0x720e2c) * 60.0);
                  local_b0 = (ulonglong)local_c0;
                  auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                           (undefined1  [16])0xffffffff;
                  uVar17 = storeVectorElementWordIndexed
                                     (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x60
                                      ,ZEXT48(&DAT_00720dd0 + iVar15));
                  (&DAT_00720e30)[local_120 * 0x1c] = uVar17;
                  local_bc = local_c0;
                  local_b8 = local_c0;
                  local_b4 = local_c0;
                  if ((&DAT_00720e14)[local_120 * 0x1c] == 0) {
                    iVar15 = *(int *)(iVar15 + 0x720e18);
                    iVar18 = idol::GetAnimDuration(0xc);
                    local_b0 = (ulonglong)iVar18;
                    Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                  }
                  else {
                    TransitionMovement(0x40,1);
                  }
                }
              }
              else if ((DAT_0096a778 & 2) != 0) {
                bVar1 = false;
                if (((DAT_0096bd88 != '\0') && (DAT_0096bd8a != '\0')) &&
                   ((g_heroMobyPtr->animationId == DAT_0096bf74 || (DAT_0096a9e8 != 0)))) {
                  bVar1 = true;
                }
                if (!bVar1) {
                  DAT_0096bd88 = '\0';
                  iVar15 = Hero_GetIdleAnim(0);
                  if (iVar15 == 0x54) {
                    iVar15 = Hero_GetIdleAnim(0);
                    iVar18 = idol::GetAnimDuration(0x12);
                    local_b0 = (ulonglong)iVar18;
                    Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                  }
                  else {
                    iVar15 = Hero_GetIdleAnim(0);
                    Hero_TransAnim(-2.0,iVar15,0);
                  }
                }
              }
              uVar16 = g_heroStateTimer;
              iVar15 = idol::GetAnimDuration(10);
              if (((((iVar15 < (int)uVar16) && (DAT_0096ae64 != 0)) &&
                   (*(char *)(DAT_0096ae64 + 0x53) == '\x01')) &&
                  ((iVar15 = fastfunc::FastDecTimerS32(&DAT_0096bfa4), iVar15 != 0 &&
                   (DAT_00721e28 < 0.55850536)))) &&
                 ((DAT_00721e24 < 0.34906584 && (DAT_0096ae84 == 2)))) {
                uVar17 = idol::GetAnimDuration(0x6e);
                uVar19 = idol::GetAnimDuration(0x10e);
                DAT_0096bfa4 = mobyutil::MB_randRange(uVar17,uVar19);
                Hero_PlayBackpackIdle();
              }
              if (((DAT_0096bd88 != '\0') && (DAT_0096a77c == 0)) &&
                 ((DAT_0096bd8a != '\0' && (DAT_0096bfa8 == 0)))) {
                iVar15 = Hero_HandGadgetID(0);
                if (iVar15 == DAT_0096bf78) {
                  uVar16 = (&DAT_00721024)[iVar15 * 0x13];
                  if (g_heroMobyPtr->animationId != uVar16) {
                    if (DAT_0096a9e8 != 0) {
                      DAT_0096a9f4 = 1;
                    }
                    DAT_0096bf74 = uVar16;
                    iVar15 = idol::GetAnimDuration(0xb);
                    local_b0 = (ulonglong)iVar15;
                    Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
                  }
                }
                else {
                  Hero_EndFiringAnim();
                }
              }
              uVar32 = 0x3ff0000000000000;
              Hero_GetIdealThrustFromPad(0x3ff0000000000000);
              sVar22 = g_framesNotGrounded;
              if ((DAT_0096afca == '\0') || (DAT_00969fec != 0)) {
                sVar21 = idol::GetAnimDuration(4);
                uVar16 = g_heroStateTimer;
                if ((sVar22 <= sVar21) || (g_heroGroundDist <= 0.4)) {
                  if (DAT_00969ea4 == 0) {
                    bVar1 = true;
                    if (((DAT_0096bd70 == 1) || (DAT_0096bd70 == 0x1e)) &&
                       (iVar15 = idol::GetAnimDuration(5), (int)uVar16 < iVar15)) {
                      bVar1 = false;
                    }
                    if ((bVar1) && (g_onMagnerail != 1)) {
                      iVar15 = idol::GetAnimDuration(7);
                      if (DAT_00969eb4 != 0) {
                        iVar15 = 1;
                      }
                      iVar15 = Hero_JumpOrSnapJumpCheck(iVar15,0);
                      if (iVar15 != 0) goto LAB_000c81a8;
                    }
                    if (g_onMagnerail == 1) {
                      iVar15 = idol::GetAnimDuration(7);
                      iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                      if (iVar15 != 0) {
                        TransitionMovement(0x71,1);
                        goto LAB_000c81a8;
                      }
                    }
                    uVar16 = g_heroStateTimer;
                    if ((((g_downButtons & (R1|R2)) == 0) || (g_framesGroundedCnt == 0)) ||
                       ((g_heroMobyPtr->animationId == '\x1a' && (g_heroAnimFrame < 108.0)))) {
                      if (DAT_0096a24c == 0) {
                        if ((DAT_0096afc2 == '\0') || (g_heroGroundSlope <= 0.08726646)) {
                          bVar1 = true;
                          if (((DAT_0096bd70 == 1) || (DAT_0096bd70 == 0x1e)) &&
                             ((iVar15 = idol::GetAnimDuration(0x18), (int)uVar16 < iVar15 &&
                              (g_onMagnerail == 0)))) {
                            Hero_GetIdealThrustFromPad(uVar32,0,0);
                            dVar26 = (double)fastfunc::FastSubRots
                                                       (g_heroIdealRotZ,GameCamera.rot.radius);
                            if (1.2217304706573486 < dVar26) {
                              bVar1 = false;
                            }
                          }
                          if ((bVar1) && (0.22 < g_heroPadMagnitude)) {
                            if (Level == Hoven) {
                              uVar16 = (uint)DAT_0096afcd;
                              Hero_PlayFootStep(uVar16,0,0);
                              Hero_PlayFootStep(uVar16,1,0);
                            }
                            TransitionMovement(2,1);
                          }
                        }
                        else {
                          TransitionMovement(0x2f,1);
                        }
                      }
                      else {
                        TransitionMovement(0x28,1);
                      }
                    }
                    else {
                      TransitionMovement(4,1);
                    }
                  }
                }
                else if ((DAT_0096bd70 != 8) ||
                        (iVar15 = idol::GetAnimDuration(0xf), iVar15 <= (int)uVar16)) {
                  TransitionMovement(6,1);
                }
              }
              else {
                TransitionMovement(0x79,1);
              }
            }
            else {
              TransitionMovement(0x81,1);
            }
          }
          else {
            TransitionMovement(1,1);
          }
        }
        goto LAB_000c81a8;
      }
LAB_000c03e4:
      if ((DAT_0096a09c != 0) && ((0.9 < pMVar8->animationBlend || (pMVar8->updateId != 0xff)))) {
        DAT_0096a09c = 0;
      }
      if ((DAT_0096afca == '\0') || (DAT_00969fec != 0)) {
        sVar21 = idol::GetAnimDuration(5);
        if ((sVar22 < sVar21) ||
           ((((DAT_0096bd74 == 0x12 && (DAT_0096bd89 != '\0')) || (g_heroGroundDist <= 1.35)) ||
            (iVar15 = ____Hero_ProbeCollAlongVelocity(), iVar15 != 0)))) {
          iVar15 = idol::GetAnimDuration(9);
          if (DAT_00969eb4 != 0) {
            iVar15 = 1;
          }
          iVar18 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
          sVar22 = g_framesNotGrounded;
          if ((iVar18 == 0) ||
             ((uVar12 = idol::GetAnimDuration(4), (int)uVar12 < (int)sVar22 &&
              (uVar12 = (ulonglong)DAT_00969ec2, DAT_00969ec2 == 0)))) {
            if (g_framesNotGrounded == 0) {
              if (((DAT_0096afc2 != '\0') &&
                  ((mobyutil::g_FrameTime * 2.0 <= DAT_00969e44 || (0.08726646 <= g_heroGroundSlope)
                   ))) || ((g_downButtons & (L1|L2)) == 0)) {
                if ((g_downButtons & (R1|R2)) == 0) {
                  if ((DAT_0096afc2 != '\0') && (g_heroState == ICE_SLIDING)) {
                    dVar26 = (double)FUN_005e7ebc(&DAT_00969de0);
                    dVar30 = 0.17000000178813934;
                    if ((((0.17 <= g_heroPadMagnitude) ||
                         ((g_heroMobyPtr->animationId != '7' &&
                          ((bVar3 = g_heroMobyPtr->animationId, uVar16 = Hero_GetIdleAnim(0),
                           bVar3 != uVar16 || (g_heroGroundSlope <= 0.08726646)))))) ||
                        (iVar15 = DAT_00969e8c, iVar18 = idol::GetAnimDuration(8), iVar15 <= iVar18)
                        ) || (DAT_0096a77c != 0)) {
                      if (((g_heroPadMagnitude <= 0.3) || (g_heroMobyPtr->animationId == '7')) ||
                         (DAT_0096a77c != 0)) {
                        if (((g_heroMobyPtr->animationId == 'm') && (DAT_0096a77c == 0)) &&
                           (((double)g_heroPadMagnitude < dVar30 &&
                            ((g_heroGroundSlope < 0.08726646 &&
                             (dVar26 < (double)(mobyutil::g_FrameTime * 1.7))))))) {
                          iVar15 = Hero_GetIdleAnim(0);
                          iVar18 = idol::GetAnimDuration(0x14);
                          local_b0 = (ulonglong)iVar18;
                          Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                        }
                      }
                      else {
                        iVar15 = idol::GetAnimDuration(0xe);
                        local_b0 = (ulonglong)iVar15;
                        Hero_TransAnim((float)(longlong)local_b0,0x37,0);
                      }
                    }
                    else {
                      iVar15 = idol::GetAnimDuration(0xe);
                      local_b0 = (ulonglong)iVar15;
                      Hero_TransAnim((float)(longlong)local_b0,0x6d,0);
                    }
                  }
                  if ((g_heroState == WALKING) || (g_heroState == UNK_7E)) {
                    if (DAT_0096afc2 != '\0') {
                      TransitionMovement(0x2f,1);
                    }
                  }
                  else if ((g_heroState == ICE_SLIDING) && (DAT_0096afc2 == '\0')) {
                    TransitionMovement(2,1);
                  }
                  if (g_heroState == WALKING) {
                    if (DAT_0096bd89 != '\0') {
                      TransitionMovement(0x73,1);
                    }
                  }
                  else if ((g_heroState == WATER_WALKING) && (DAT_0096bd89 == '\0')) {
                    TransitionMovement(2,1);
                  }
                  if ((g_heroState == WALKING) && (g_onMagnerail != 0)) {
                    TransitionMovement(0x3f,1);
                  }
                  uVar16 = g_heroStateTimer;
                  if (DAT_0096a24c == 0) {
                    iVar15 = idol::GetAnimDuration(0xf);
                    uVar6 = g_heroStateTimer;
                    if (((iVar15 < (int)uVar16) || ((DAT_0096bd74 != 0 && (DAT_0096bd74 != 1)))) &&
                       (((g_buttonsPressedThisFrame & 0x10000) != 0 && (DAT_0096bd8a == '\0')))) {
                      DAT_0096a09e = 1;
                    }
                    if (g_heroState == WALKING) {
                      if (0.17 <= g_heroPadMagnitude) {
                        Hero_UpdateWalkAnim();
                      }
                      else if ((DAT_00969e40 <= mobyutil::g_FrameTime * 2.7) ||
                              (DAT_0096bd8a != '\0')) {
                        iVar15 = idol::GetAnimDuration(0x19);
                        if ((iVar15 < (int)uVar6) &&
                           ((iVar15 = Hero_UpdateWeaponReadyAnim(), iVar15 == 0 &&
                            (iVar15 = TransitionMovement(0,0), iVar15 != 0)))) {
                          iVar15 = Hero_GetIdleAnim(0);
                          if (iVar15 == 0x54) {
                            iVar15 = Hero_GetIdleAnim(0);
                            iVar18 = idol::GetAnimDuration(0x12);
                            local_b0 = (ulonglong)iVar18;
                            Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                          }
                          else {
                            iVar15 = Hero_GetIdleAnim(0);
                            Hero_TransAnim(-1.0,iVar15,0);
                          }
                        }
                      }
                      else if ((DAT_00969e40 < mobyutil::g_FrameTime * 4.4) ||
                              (fVar34 = pad::PadRingAng(4), fVar34 < 0.8)) {
                        iVar15 = TransitionMovement(3,0);
                        if (iVar15 != 0) {
                          iVar15 = Hero_GetIdleAnim(0);
                          if (iVar15 == 0x54) {
                            iVar15 = Hero_GetIdleAnim(0);
                            iVar18 = idol::GetAnimDuration(0x12);
                            local_b0 = (ulonglong)iVar18;
                            Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                          }
                          else {
                            iVar15 = idol::GetAnimDuration(9);
                            local_b0 = (ulonglong)iVar15;
                            Hero_TransAnim((float)(longlong)local_b0,0x14,7);
                          }
                        }
                      }
                      else {
                        TransitionMovement(3,1);
                      }
                    }
                    else if (g_heroState == ICE_SLIDING) {
                      if (((DAT_00964b14 != 0) &&
                          (dVar26 = (double)FUN_005e7ebc(&g_heroVelocity),
                          dVar26 < (double)(mobyutil::g_FrameTime * 0.05))) &&
                         ((g_heroGroundSlope < 0.08726646 &&
                          (iVar15 = TransitionMovement(0,0), iVar15 != 0)))) {
                        iVar15 = Hero_GetIdleAnim(0);
                        iVar18 = idol::GetAnimDuration(0x11);
                        local_b0 = (ulonglong)iVar18;
                        Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                      }
                      if (pMVar8->animationId == '7') {
                        g_heroAnimSpeed = (1.0 - DAT_0096a090) * 2.0;
                        if (1.7 < g_heroAnimSpeed) {
                          g_heroAnimSpeed = 1.7;
                        }
                        if (g_heroAnimSpeed < 0.75) {
                          g_heroAnimSpeed = 0.75;
                        }
                      }
                      else if (pMVar8->animationId == 'm') {
                        g_heroAnimSpeed = DAT_00969e40 * 10.0;
                        if (1.1 < g_heroAnimSpeed) {
                          g_heroAnimSpeed = 1.1;
                        }
                        if (g_heroAnimSpeed < 0.3) {
                          g_heroAnimSpeed = 0.3;
                        }
                      }
                    }
                    else if (g_heroState == WATER_WALKING) {
                      if (((DAT_00964b14 != 0) &&
                          (dVar26 = (double)FUN_005e7ebc(&g_heroVelocity),
                          dVar26 < (double)(mobyutil::g_FrameTime * 3.2))) &&
                         (iVar15 = TransitionMovement(0,0), iVar15 != 0)) {
                        iVar15 = Hero_GetIdleAnim(0);
                        iVar18 = idol::GetAnimDuration(0x11);
                        local_b0 = (ulonglong)iVar18;
                        Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
                      }
                      g_heroAnimSpeed = DAT_00969e40 * 35.0;
                      if (g_heroAnimSpeed < 0.6) {
                        g_heroAnimSpeed = 0.6;
                      }
                      if (1.05 < g_heroAnimSpeed) {
                        g_heroAnimSpeed = 1.05;
                      }
                    }
                  }
                  else {
                    TransitionMovement(0x28,1);
                  }
                }
                else {
                  TransitionMovement(4,1);
                }
              }
              else {
                TransitionMovement(1,1);
              }
            }
          }
          else {
            Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar12,0);
            iVar15 = Hero_JumpOrSnapJumpCheck(iVar15,1);
            if (iVar15 == 0) {
              if ((((DAT_0096bd68 < 1) || (g_heroIdealSpeed <= DAT_00723314)) ||
                  (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
                  1.0471975803375244 <= dVar26)) ||
                 (DAT_00969e44 <= DAT_00723320 * mobyutil::g_FrameTime * 0.85)) {
                TransitionMovement(7,1);
              }
              else {
                TransitionMovement(9,1);
              }
            }
          }
        }
        else {
          TransitionMovement(6,1);
        }
      }
      else {
        TransitionMovement(0x79,1);
      }
      goto LAB_000c81a8;
    }
    if (0x12 < (int)g_heroState) {
      if (0x15 < (int)g_heroState) {
        if ((int)g_heroState < 0x17) {
          if (((g_heroAnimFrame <= 12.5) || (g_framesNotGrounded == 0)) || (g_heroGroundDist <= 1.0)
             ) {
            if (((Level != Kalebo) || (0.0 <= DAT_00969dc8)) ||
               ((g_heroHealth != 0 || (DAT_0096bd74 != 0xf)))) {
              iVar15 = idol::GetAnimDuration(0x1b);
              if (iVar15 < (int)uVar16) {
                if (g_heroHealth < 1) {
                  if (DAT_0096afc5 == '\0') {
                    TransitionMovement(0x3d,1);
                  }
                  else {
                    TransitionMovement(0x7c,1);
                  }
                }
                else if (DAT_0096bd70 == 0x81) {
                  TransitionMovement(0x81,1);
                }
                else {
                  TransitionMovement(0,0);
                }
              }
            }
            else {
              TransitionMovement(0x77,1);
            }
          }
          else {
            TransitionMovement(6,1);
          }
        }
        else if ((g_downButtons & DAT_0096ad80) == 0 && DAT_00969eb0 == 0) {
          TransitionMovement(0,1);
        }
        goto LAB_000c81a8;
      }
      if (g_heroState == HYPER_STRIKE) {
        dVar26 = -1.0;
        fVar34 = Hero_PredictLand(60.0,DAT_0071f418 * 130.0,-1.0);
        iVar15 = fastfunc::FastDoubleToInt((double)fVar34);
        if (DAT_0096a750 == 0.0) {
          g_heroAnimSpeed = 0.33;
        }
        else if (((DAT_0096a750 == 0.0) || (g_framesNotGrounded == 0)) ||
                ((iVar15 == 0 || (26.0 - g_heroAnimFrame <= 1.0)))) {
          if ((g_framesNotGrounded != 0) || (26.0 <= g_heroAnimFrame)) {
            g_heroAnimSpeed = 1.0;
          }
          else {
            g_heroAnimSpeed = 2.0;
          }
        }
        else {
          local_b0 = (ulonglong)iVar15;
          Hero_ScaleAnim(26.0,(float)(longlong)local_b0,0.5,(float)dVar26);
          if ((g_heroGroundDist < 0.7) && (g_heroAnimSpeed < 0.75)) {
            g_heroAnimSpeed = 0.75;
          }
        }
      }
      iVar15 = DAT_0096a740 * 0x2c;
      iVar18 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
      local_b0 = (ulonglong)*(int *)(&DAT_00723190 + iVar15);
      if (((((float)(longlong)local_b0 < g_heroAnimFrame) && (DAT_0096a77c == 0)) &&
          ((g_heroState != CROUCH_WRENCH_THROW || (g_onMagnerail == 0)))) &&
         (iVar18 = pad::PadRingBitsOn(0x40,(iVar18 - *(int *)(iVar15 + 0x723188)) * 2,(int *)0x0),
         iVar18 != 0)) {
        if ((g_downButtons & (R1|R2)) == 0) {
          if (DAT_00969ed2 == 0) {
            TransitionMovement(7,1);
            goto LAB_000c81a8;
          }
        }
        else {
          iVar18 = Hero_CrouchJumpTransitions();
          if (iVar18 != 0) goto LAB_000c81a8;
        }
      }
      uVar16 = g_heroStateTimer;
      if ((DAT_0096a77c != 0) ||
         (local_b0 = (ulonglong)*(int *)(&DAT_00723194 + iVar15),
         g_heroAnimFrame <= (float)(longlong)local_b0)) {
        if ((g_heroState == CROUCH_WRENCH_THROW) && (g_CurrentWeapon != WRENCH)) {
          TransitionMovement(0,1);
        }
        else if (((g_heroState == CROUCH_WRENCH_THROW) &&
                 (iVar15 = idol::GetAnimDuration(100), iVar15 < (int)uVar16)) &&
                (DAT_0096a794 < 0x1a)) {
          ____Hero_SetTimer_96a798(2);
          DAT_0096a794 = 0x1a;
        }
      }
      else {
        TransitionMovement(0,0);
      }
      goto LAB_000c81a8;
    }
    if ((int)g_heroState < 8) {
      if ((int)g_heroState < 7) goto LAB_000c3190;
    }
    else if ((int)g_heroState < 9) {
      if ((DAT_00969e94 == 0) || (iVar15 = idol::GetAnimDuration(9), iVar15 <= (int)uVar16)) {
        uVar16 = g_heroStateTimer;
        iVar15 = idol::GetAnimDuration(0x1e);
        uVar6 = g_heroStateTimer;
        if ((iVar15 < (int)uVar16) &&
           (((g_downButtons & CROSS) == 0 && ((DAT_00964b00 & 0x40) == 0)))) {
          TransitionMovement(6,1);
        }
        else if (DAT_0096a1c8 == 0) {
          if ((g_framesNotGrounded == 0) || (g_heroPosition.z - g_heroGroundZ < 0.4)) {
            lVar13 = idol::GetAnimDuration(10);
            if ((int)uVar6 < (int)lVar13) {
              lVar13 = idol::GetAnimDuration(0xc);
              lVar13 = lVar13 - (ulonglong)g_heroStateTimer;
              DAT_00969eb4 = (int)lVar13;
            }
            Hero_GetIdealThrustFromPad(0x3ff0000000000000,lVar13,0);
            uVar16 = g_heroStateTimer;
            if ((DAT_0096bd70 == 0x10) && (iVar15 = idol::GetAnimDuration(4), (int)uVar16 < iVar15))
            {
              iVar15 = TransitionMovement(3,0);
              if (iVar15 != 0) {
                Hero_TransAnim(-1.0,5,0);
                DAT_00969ea4 = idol::GetAnimDuration(0x22);
              }
            }
            else if ((g_downButtons & (R1|R2)) == 0) {
              if ((g_heroIdealSpeed <= DAT_00723314) ||
                 (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
                 1.5707963705062866 <= dVar26)) {
                if (g_heroIdealSpeed <= DAT_00723314) {
                  if (g_framesNotGrounded == 0) {
                    iVar15 = TransitionMovement(0,0);
                    if (iVar15 != 0) {
                      iVar15 = Hero_GetIdleAnim(0);
                      Hero_TransAnim(-2.0,iVar15,0);
                      DAT_0096af8e = DAT_0096af8e & 0xfffe;
                      DAT_0096af88 = 5;
                      DAT_0096af8c = 2;
                      DAT_0096af80 = 0x3c83126f;
                      DAT_0096af84 = 0x3b03126f;
                    }
                  }
                  else {
                    iVar15 = TransitionMovement(0,0);
                    if (iVar15 != 0) {
                      iVar15 = idol::GetAnimDuration(9);
                      local_b0 = (ulonglong)iVar15;
                      Hero_TransAnim((float)(longlong)local_b0,7,0x17);
                      DAT_0096af8e = DAT_0096af8e & 0xfffe;
                      DAT_0096af88 = 5;
                      DAT_0096af8c = 2;
                      DAT_0096af80 = 0x3c83126f;
                      DAT_0096af84 = 0x3b03126f;
                    }
                  }
                }
                else if ((DAT_0096afc2 == '\0') && (DAT_0096bd89 == '\0')) {
                  TransitionMovement(2,0);
                  iVar15 = DAT_0072333c;
                  if (g_heroState == WALKING) {
                    DAT_0096bd68 = 1;
                    iVar18 = idol::GetAnimDuration(0xc);
                    local_b0 = (ulonglong)iVar18;
                    Hero_TransAnim((float)(longlong)local_b0,4,iVar15);
                  }
                  DAT_0096af88 = 5;
                  DAT_0096af8c = 2;
                  DAT_0096af8e = DAT_0096af8e | 1;
                  DAT_0096af80 = 0x3c83126f;
                  DAT_0096af84 = 0x3b03126f;
                }
                else {
                  TransitionMovement(2,1);
                }
              }
              else if ((DAT_0096afc2 == '\0') && (DAT_0096bd89 == '\0')) {
                TransitionMovement(2,0);
                if (g_heroState == WALKING) {
                  DAT_0096bd68 = 1;
                  iVar15 = idol::GetAnimDuration(8);
                  local_b0 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_b0,4,2);
                  DAT_0096a09c = 1;
                }
                DAT_0096af88 = 5;
                DAT_0096af8c = 2;
                DAT_0096af8e = DAT_0096af8e | 1;
                DAT_0096af80 = 0x3c83126f;
                DAT_0096af84 = 0x3b03126f;
              }
              else {
                TransitionMovement(2,1);
              }
            }
            else {
              TransitionMovement(4,1);
              DAT_0096af8e = DAT_0096af8e & 0xfffe;
              DAT_0096af88 = 5;
              DAT_0096af8c = 2;
              DAT_0096af80 = 0x3c83126f;
              DAT_0096af84 = 0x3b03126f;
            }
          }
        }
        else {
          TransitionMovement(0x18,1);
        }
      }
      else {
        bVar1 = false;
        if ((((DAT_0096bd70 == 7) || (DAT_0096bd70 == 9)) || (DAT_0096bd70 == 0xe)) ||
           (DAT_0096bd70 == 0x11)) {
          bVar1 = true;
        }
        if (bVar1) {
          TransitionMovement(0x11,1);
        }
      }
      goto LAB_000c81a8;
    }
LAB_000c3ec4:
    if ((((DAT_0096a18e != '\0') && (iVar15 = Hero_GetSnapJumpSnapWindow(), 0 < iVar15)) &&
        (((int)g_heroStateTimer < iVar15 || (g_DustHoverState != 0)))) && (g_framesGroundedCnt != 0)
       ) {
      if (g_heroState == FLIP_JUMP) {
        iVar15 = idol::GetAnimDuration(7);
        param_3 = 0;
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if (iVar15 == 0) goto LAB_000c3ffc;
      }
      bVar1 = true;
      if ((g_heroState == EDGE_JUMP) || (g_DustHoverState != 0)) {
        iVar15 = idol::GetAnimDuration(7);
        param_3 = 0;
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if (iVar15 == 0) {
          bVar1 = false;
        }
      }
      if ((g_heroState == FLIP_JUMP) && (g_DustHoverState == 0)) {
        bVar1 = false;
      }
      if (bVar1) {
        iVar15 = idol::GetAnimDuration(5);
        param_3 = 0;
        iVar15 = pad::PadRingBitsOn(0x1f000,iVar15,(int *)0x0);
        if ((iVar15 != 0) && ((g_downButtons & (R1|R2)) != 0)) {
          TransitionMovement(0xb,1);
          goto LAB_000c81a8;
        }
      }
    }
LAB_000c3ffc:
    iVar15 = Hero_HandGadgetID(3);
    uVar16 = g_heroStateTimer;
    if (((((iVar15 == 3) && (g_hasClank == 0)) && (g_heroState != THRUSTER_PACK_FORWARD_JUMP)) &&
        (((g_heroState != WALL_JUMP && (g_heroState != WATER_JUMP)) &&
         ((g_heroState != TAKING_DAMAGE_LAVA &&
          ((g_heroState != HELI_PACK_HIGH_JUMP && (g_heroState != HELI_PACK_FWD_JUMP)))))))) &&
       ((g_heroState != MUD_JUMP &&
        (((g_heroState == DOUBLE_JUMP || (iVar15 = idol::GetAnimDuration(9), iVar15 < (int)uVar16))
         && ((g_downButtons & (R1|R2)) != 0)))))) {
      iVar15 = idol::GetAnimDuration(8);
      param_3 = 0;
      iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
      if (iVar15 != 0) {
        TransitionMovement(0x10,1);
        goto LAB_000c81a8;
      }
    }
    uVar16 = g_heroStateTimer;
    iVar15 = idol::GetAnimDuration(7);
    if ((int)uVar16 < iVar15) {
      param_3 = 0;
      iVar15 = pad::PadRingBitsOn(10,2,(int *)0x0);
      if (((iVar15 != 0) && (g_heroState != THRUSTER_PACK_FORWARD_JUMP)) &&
         ((((g_heroState != HELI_PACK_FWD_JUMP &&
            ((g_heroState != WATER_JUMP && (g_heroState != TAKING_DAMAGE_LAVA)))) &&
           (g_heroState != WALL_JUMP)) &&
          ((g_heroState != DOUBLE_JUMP && (g_heroState != MUD_JUMP)))))) {
        iVar15 = Hero_HandGadgetID(3);
        if ((iVar15 != 2) ||
           (((UnlockableItems.heliPack == '\0' || (g_hasClank != 0)) ||
            (DAT_00969e48 <= mobyutil::g_FrameTime * 0.9)))) {
          iVar15 = Hero_HandGadgetID(3);
          if ((((iVar15 == 3) && (g_hasClank == 0)) && (mobyutil::g_FrameTime * 0.9 < DAT_00969e48))
             && (DAT_00969e98 == 0)) {
            TransitionMovement(0x10,1);
          }
        }
        else {
          TransitionMovement(10,1);
        }
      }
    }
    uVar16 = g_heroStateTimer;
    iVar18 = idol::GetAnimDuration(8);
    iVar15 = DAT_0096a12c;
    if (((DAT_0096a100 + iVar18 < (int)uVar16) &&
        ((DAT_0096a0fe == 0 || (iVar18 = idol::GetAnimDuration(10), iVar18 < iVar15)))) &&
       ((g_heroPadMagnitude < 0.3 &&
        ((((g_heroState == GLIDING || (g_heroState == MOVEMENT_JUMP)) ||
          (g_heroState == THRUSTER_PACK_HIGH_JUMP)) ||
         ((g_heroState == HELI_PACK_HIGH_JUMP || (g_heroState == DOUBLE_JUMP)))))))) {
      iVar15 = idol::GetAnimDuration(9);
      param_3 = 0;
      iVar15 = pad::PadRingBitsOn(10,iVar15,(int *)0x0);
      if (iVar15 != 0) {
        iVar15 = Hero_HandGadgetID(3);
        if ((iVar15 == 3) && (g_hasClank == 0)) {
          TransitionMovement(0x22,1);
        }
        goto LAB_000c81a8;
      }
    }
    if (DAT_0096a24c == 0) {
      if (DAT_0096a2dc == 0) {
        if (((int)DAT_0096a17a < (int)g_heroStateTimer) && (g_DustHoverState == 0)) {
          TransitionMovement(6,1);
        }
        else {
          if (((g_DustHoverState == 0) &&
              (((g_heroState == HELI_PACK_FWD_JUMP || (g_heroState == THRUSTER_PACK_FORWARD_JUMP))
               && (DAT_00969f28 < 0.9)))) &&
             ((DAT_00969f37 != '\0' &&
              (dVar26 = (double)FUN_005e8030(&g_heroVelocity),
              (double)(mobyutil::g_FrameTime * 7.0) < dVar26)))) {
            dVar26 = (double)FUN_005e8030(&DAT_00969de0);
            dVar30 = (double)FUN_005e8030(&g_heroVelocity);
            if ((dVar26 < (double)(float)(dVar30 * 0.5)) &&
               ((DAT_0096a1c8 == 0 && (g_heroGroundDist < 2.0)))) {
              TransitionMovement(0x7a,1);
              goto LAB_000c81a8;
            }
          }
          bVar1 = false;
          if ((g_heroState == DOUBLE_JUMP) && (g_heroAnimFrame < 35.0)) {
            bVar1 = true;
          }
          if (DAT_0096a100 < (int)g_heroStateTimer) {
            if (g_heroStateTimer == DAT_0096a100 + 1U) {
              if (DAT_0096a0fc == 0) {
                if (g_heroState != DOUBLE_JUMP) {
                  Hero_GetJumpPeak(DAT_0096a180,&g_heroPosition.x,&g_heroVelocity,param_3,&local_e8)
                  ;
                  local_b0 = (ulonglong)local_e8;
                  Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,DAT_0096a174,-1.0);
                  if (1.5 < g_heroAnimSpeed) {
                    g_heroAnimSpeed = 1.5;
                  }
                }
              }
              else {
                local_b0 = (ulonglong)(int)(DAT_0096a0b0 - g_heroStateTimer);
                if (0.0 < (float)(longlong)local_b0) {
                  Hero_ScaleAnim(DAT_0096a0b8,(float)(longlong)local_b0,DAT_0096a174,-1.0);
                }
              }
            }
            else if (((DAT_0096a0fc == 0) || ((int)g_heroStateTimer < DAT_0096a0b0)) ||
                    (DAT_0096a0b4 <= (int)g_heroStateTimer)) {
              if (DAT_00969fd8 == 1) {
                Hero_PlaySound(0x11,0);
                Hero_SpawnWaterSplash(3,0x18,1);
              }
              if (g_DustHoverState == 0) {
                if ((g_framesNotGrounded == 0) && (!bVar1 && DAT_0096a0fe != 0)) {
                  g_DustHoverState = idol::GetAnimDuration(1);
                  DAT_0096af8e = DAT_0096af8e & 0xfffe;
                  DAT_0096af88 = 5;
                  DAT_0096af8c = 2;
                  DAT_0096af80 = 0x3c83126f;
                  DAT_0096af84 = 0x3b03126f;
                  iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a128);
                  if (g_heroAnimFrame < DAT_0096a124 - 1.5) {
                    bVar3 = pMVar8->animationId;
                    iVar18 = idol::GetAnimDuration(7);
                    local_b0 = (ulonglong)iVar18;
                    Hero_TransAnim((float)(longlong)local_b0,(uint)bVar3,iVar15 + 2);
                  }
                }
              }
              else {
                g_DustHoverState = g_DustHoverState + 1;
              }
              if (g_DustHoverState == 0) {
                if (DAT_0096a0fe != 0) {
                  bVar3 = pMVar8->animationFrame;
                  iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a128);
                  if ((int)(uint)bVar3 < iVar15) {
                    if ((g_heroState != DOUBLE_JUMP) || (37.0 <= g_heroAnimFrame)) {
                      fVar34 = Hero_PredictLand(60.0,DAT_0096a180,-1.0);
                      DAT_0096a12c = fastfunc::FastDoubleToInt((double)fVar34);
                      local_b0 = (ulonglong)DAT_0096a12c;
                      Hero_ScaleAnim(DAT_0096a124,(float)(longlong)local_b0,DAT_0096a174,
                                     DAT_0071f40c * 0.2);
                    }
                    else {
                      mobyutil::Delt(1.0,DAT_0071f40c * 0.15,&g_heroAnimSpeed);
                    }
                    if (!bVar1) {
                      iVar15 = fastfunc::FastDoubleToInt((double)DAT_0096a128);
                      if (1.8 < g_heroAnimSpeed) {
                        local_b0 = (ulonglong)(DAT_0096a12c + 3);
                        Hero_TransAnim((float)(longlong)local_b0,(uint)pMVar8->animationId,
                                       iVar15 + 2);
                      }
                    }
                    if (g_heroAnimSpeed < 0.2) {
                      g_heroAnimSpeed = 0.2;
                    }
                    if (2.7 < g_heroAnimSpeed) {
                      g_heroAnimSpeed = 2.7;
                    }
                  }
                  if ((((g_heroState == MOVEMENT_JUMP) && (6.0 < DAT_0096a124 - g_heroAnimFrame)) &&
                      ((pMVar8->updateId == '\b' || (pMVar8->updateId == '\t')))) &&
                     (((pMVar8->updateId == pMVar8->animationId &&
                       (g_heroIdealSpeed < DAT_00723320 * mobyutil::g_FrameTime * 0.1)) &&
                      (DAT_00969e44 < mobyutil::g_FrameTime * 2.5)))) {
                    iVar15 = idol::GetAnimDuration(9);
                    local_b0 = (ulonglong)iVar15;
                    dVar26 = (double)((float)(longlong)local_b0 / g_heroAnimSpeed);
                    iVar15 = idol::GetAnimDuration(10);
                    local_b0 = (ulonglong)iVar15;
                    if ((double)(longlong)local_b0 < dVar26) {
                      iVar15 = idol::GetAnimDuration(10);
                      local_b0 = (ulonglong)iVar15;
                      dVar26 = (double)(longlong)local_b0;
                    }
                    iVar15 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                    uVar16 = iVar15 + 4;
                    Hero_TransAnim((float)dVar26,7,
                                   ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0)
                                  );
                    g_heroState = GLIDING;
                  }
                  iVar15 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                  iVar18 = fastfunc::FastDoubleToInt((double)DAT_0096a124);
                  if (iVar15 == iVar18) {
                    g_heroAnimSpeed = 0.0;
                  }
                }
              }
              else {
                g_heroAnimSpeed = 1.0;
              }
              if ((g_DustHoverState == 0) || (g_heroState != HELI_PACK_FWD_JUMP)) {
                if ((g_DustHoverState != 0) && ((DAT_0096afca == '\0' && (DAT_00969ea4 == 0)))) {
                  iVar15 = idol::GetAnimDuration(8);
                  iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
                  sVar22 = g_framesNotGrounded;
                  if ((iVar15 != 0) && (sVar21 = idol::GetAnimDuration(4), sVar22 < sVar21)) {
                    if (((g_heroIdealSpeed <= DAT_00723314) ||
                        (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
                        1.0471975803375244 <= dVar26)) ||
                       (DAT_00969e44 <= DAT_00723320 * mobyutil::g_FrameTime * 0.85)) {
                      TransitionMovement(7,1);
                    }
                    else {
                      TransitionMovement(9,1);
                    }
                    goto LAB_000c81a8;
                  }
                }
                iVar15 = g_DustHoverState;
                iVar18 = idol::GetAnimDuration(1);
                if ((iVar18 < iVar15) && (g_heroState != HELI_PACK_FWD_JUMP)) {
                  Hero_JumpLandTransitions();
                }
                else if ((DAT_0096a0fe != 0) &&
                        (((int)DAT_0096a18a <= (int)g_heroStateTimer &&
                         (DAT_0096a170 < g_heroGroundDist)))) {
                  TransitionMovement(6,1);
                }
                uVar16 = g_heroStateTimer;
                if (((g_heroState != THRUSTER_PACK_FORWARD_JUMP) ||
                    (iVar15 = idol::GetAnimDuration(0x3c), (int)uVar16 <= iVar15)) ||
                   (g_heroGroundDist <= 1.5)) {
                  uVar16 = g_heroStateTimer;
                  bVar1 = false;
                  if (((g_heroState == GLIDING) || (g_heroState == MOVEMENT_JUMP)) ||
                     (g_heroState == WALL_JUMP)) {
                    bVar1 = true;
                  }
                  if (((DAT_00969e94 != 0) && (g_DustHoverState == 0 && bVar1)) &&
                     ((g_heroState != WALL_JUMP ||
                      (iVar15 = idol::GetAnimDuration(0x19), iVar15 < (int)uVar16)))) {
                    iVar15 = idol::GetAnimDuration(7);
                    if (g_heroState == WALL_JUMP) {
                      iVar15 = idol::GetAnimDuration(7);
                    }
                    iVar15 = pad::PadRingBitsOn(0x40,iVar15,&local_e4);
                    if ((iVar15 != 0) && (local_e4 < (int)g_heroStateTimer)) {
                      TransitionMovement(0x11,1);
                      goto LAB_000c81a8;
                    }
                  }
                  uVar16 = g_heroStateTimer;
                  if ((((g_heroState == HELI_PACK_FWD_JUMP) ||
                       (g_heroState == THRUSTER_PACK_FORWARD_JUMP)) &&
                      (iVar15 = idol::GetAnimDuration(0x19), iVar15 < (int)uVar16)) &&
                     (DAT_00969fea != 0)) {
                    DAT_0096a186 = idol::GetAnimDuration(0x14);
                  }
                  iVar15 = idol::GetAnimDuration(0x14);
                  if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
                    iVar15 = idol::GetAnimDuration(8);
                  }
                  if ((g_heroState == DOUBLE_JUMP) && (dVar26 = 4.0, 4.0 < g_heroGroundDist)) {
                    if ((DAT_0096a0fe == 0) && (dVar26 = 1.2999999523162842, g_heroAnimSpeed < 1.3))
                    {
                      fVar34 = mobyutil::Delt(1.3,DAT_0071f408 * 0.1,&g_heroAnimSpeed);
                      dVar26 = (double)fVar34;
                    }
                    iVar15 = idol::GetAnimDuration(dVar26,0x11);
                    DAT_0096a186 = (short)iVar15;
                  }
                  iVar18 = g_heroStateTimer - 4;
                  if (iVar18 < 2) {
                    iVar18 = 2;
                  }
                  iVar20 = idol::GetAnimDuration(0x1e);
                  if (iVar20 < iVar18) {
                    iVar18 = idol::GetAnimDuration(0x1e);
                  }
                  if (((((g_DustHoverState == 0) && (g_heroState != WATER_JUMP)) &&
                       ((g_heroState != EDGE_JUMP &&
                        (((g_heroState != WALL_JUMP && (g_heroState != FLIP_JUMP)) &&
                         (g_heroState != TAKING_DAMAGE_LAVA)))))) && (g_heroState != MUD_JUMP)) &&
                     (((iVar18 = pad::PadRingBitsOn(0x40,iVar18,(int *)0x0),
                       uVar16 = g_heroStateTimer, iVar18 != 0 || (g_heroState == DOUBLE_JUMP)) ||
                      ((g_heroState == HELI_PACK_HIGH_JUMP ||
                       (g_heroState == THRUSTER_PACK_HIGH_JUMP)))))) {
                    if (((g_heroState == DOUBLE_JUMP) || (DAT_0096bd88 != '\0')) ||
                       (((DAT_0096afca != '\0' && (g_heroGroundDist < 0.4)) ||
                        (((DAT_0096a18f == '\0' ||
                          (iVar18 = idol::GetAnimDuration(0xe), (int)uVar16 <= iVar18)) ||
                         ((DAT_0096a0fe != 0 &&
                          ((g_heroGroundDist <= 0.7 ||
                           (fVar34 = Hero_RelativeZComponent(&g_heroVelocity),
                           mobyutil::g_FrameTime * 5.8 <= ABS(fVar34))))))))))) {
                      if ((UnlockableItems.heliPack != '\0') &&
                         ((((iVar18 = Hero_HandGadgetID(3), iVar18 != 4 && (g_hasClank == 0)) &&
                           ((g_downButtons & CROSS) != 0)) &&
                          ((iVar15 < (int)g_heroStateTimer &&
                           ((int)DAT_0096a186 < (int)g_heroStateTimer)))))) {
                        fVar34 = 0.6;
                        if ((g_heroState == MOVEMENT_JUMP) || (g_heroState == GLIDING)) {
                          fVar34 = 1.0;
                        }
                        if (g_heroState == DOUBLE_JUMP) {
                          fVar34 = 1.5;
                        }
                        if (fVar34 < g_heroGroundDist) {
                          TransitionMovement(8,1);
                        }
                      }
                    }
                    else {
                      TransitionMovement(0xe,1);
                    }
                  }
                  if ((DAT_0096a1c8 != 0) && (g_heroState != FLIP_JUMP)) {
                    TransitionMovement(0x18,1);
                  }
                }
                else {
                  TransitionMovement(6,1);
                }
              }
              else {
                iVar15 = TransitionMovement(3,0);
                if (iVar15 != 0) {
                  Hero_TransAnim(-2.0,5,0);
                  FUN_005e822c(0x3fe99999a0000000,&g_heroExternalMomentum,&g_heroExternalMomentum);
                }
              }
            }
            else {
              local_b0 = (ulonglong)(DAT_0096a0c0 - DAT_0096a0b0);
              if (0.0 < (float)(longlong)local_b0) {
                Hero_ScaleAnim(DAT_0096a120,(float)(longlong)local_b0,DAT_0096a174,-1.0);
              }
            }
          }
        }
      }
      else {
        TransitionMovement(0x74,1);
      }
    }
    else {
      TransitionMovement(0x28,1);
    }
    goto LAB_000c81a8;
  }
  if (0x1f < (int)g_heroState) {
    if (g_heroState == UNK_26) {
      if ((g_downButtons & DAT_0096ad80) == 0) {
        g_storedNeutralSpeed = DAT_0096a640;
        if (mobyutil::g_FrameTime * 7.0 < DAT_0096a640) {
          g_storedNeutralSpeed = mobyutil::g_FrameTime * 7.0;
        }
        if (0.4 <= g_heroGroundDist) {
          TransitionMovement(6,1);
          g_HeroRequestedCamType = 0;
        }
        else {
          TransitionMovement(0,1);
        }
      }
      goto LAB_000c81a8;
    }
    if (g_heroState == PULLING_GREEN_SWINGSHOT) {
      Hero_ScaleAnim(10.0,DAT_0096a64c,0.5,-1.0);
      dVar26 = (double)DAT_0096a64c;
      iVar15 = idol::GetAnimDuration(0x16);
      local_b0 = (ulonglong)iVar15;
      if (dVar26 < (double)(longlong)local_b0) {
        dVar26 = (double)DAT_0096a64c;
        iVar15 = idol::GetAnimDuration(0x1e);
        local_b0 = (ulonglong)iVar15;
        if (dVar26 < (double)(longlong)local_b0) {
          iVar15 = idol::GetAnimDuration(0x10);
          local_b0 = (ulonglong)iVar15;
          Hero_TransAnim((float)(longlong)local_b0,10,0);
        }
      }
      bVar1 = false;
      if ((g_downButtons & DAT_0096ad80) == 0) {
        dVar26 = (double)DAT_0096a64c;
        iVar15 = idol::GetAnimDuration(0x19);
        local_b0 = (ulonglong)iVar15;
        if ((double)(longlong)local_b0 < dVar26) {
          DAT_0096a668 = 1;
        }
        bVar1 = true;
      }
      if ((DAT_0096bd68 == 1) && (DAT_0096a640 < mobyutil::g_FrameTime * 4.0)) {
        bVar1 = true;
      }
      if (bVar1) {
        g_storedNeutralSpeed = DAT_0096a640;
        if (mobyutil::g_FrameTime * 7.0 < DAT_0096a640) {
          g_storedNeutralSpeed = mobyutil::g_FrameTime * 7.0;
        }
        if (0.3 <= g_heroGroundDist) {
          if (g_heroMobyPtr->animationId == '\n') {
            TransitionMovement(6,0);
          }
          else {
            TransitionMovement(6,0);
            iVar15 = idol::GetAnimDuration(0x11);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,10,0);
          }
          g_HeroRequestedCamType = 0;
          DAT_0096a624 = DAT_0071f418 * 42.0;
          DAT_0096a620 = DAT_0071f418 * 29.0;
        }
        else {
          TransitionMovement(0,0);
          iVar15 = Hero_GetIdleAnim(0);
          iVar18 = idol::GetAnimDuration(0x1e);
          local_b0 = (ulonglong)iVar18;
          Hero_TransAnim((float)(longlong)local_b0,iVar15,0);
        }
      }
      goto LAB_000c81a8;
    }
    if (g_heroState == THROWING_GREEN_SWINGSHOT) {
      if (g_CurrentWeapon != SWINGSHOT) {
        TransitionMovement(0,1);
      }
      goto LAB_000c81a8;
    }
    if (g_heroState == THROWING_ITEM) {
      if (19.0 < g_heroAnimFrame) {
        iVar15 = idol::GetAnimDuration(0xb);
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if (iVar15 != 0) {
          if ((g_downButtons & (R1|R2)) == 0) {
            TransitionMovement(7,1);
          }
          else {
            Hero_CrouchJumpTransitions();
          }
          goto LAB_000c81a8;
        }
      }
      if (21.0 <= g_heroAnimFrame) {
        TransitionMovement(0,0);
      }
      goto LAB_000c81a8;
    }
    if (g_heroState == THRUSTER_PACK_BONK_JUMP) {
      iVar15 = idol::GetAnimDuration(0xc);
      if (((((int)uVar16 < iVar15) && ((DAT_0096bd7c != 0x10 || (DAT_0096bd70 != 8)))) &&
          ((DAT_0096bd7c != 0x10 || (DAT_0096bd70 != 6)))) &&
         (((((DAT_0096bd70 != 0xf && (DAT_0096bd70 != 10)) && (DAT_0096bd70 != 0x10)) &&
           ((DAT_0096bd70 != 0x12 && (DAT_0096bd70 != 0x3c)))) &&
          ((g_buttonsPressedThisFrame & CROSS) != 0)))) {
        TransitionMovement(0x10,1);
      }
      dVar26 = -1.0;
      fVar34 = Hero_PredictLand(60.0,DAT_0096a190,-1.0);
      DAT_0096a19c = fastfunc::FastDoubleToInt((double)fVar34);
      if (((DAT_0096a198 == 0.0) || (DAT_00969fec == 0)) || (DAT_0096a19c == 0)) {
        g_heroAnimSpeed = 1.0;
      }
      else {
        if (DAT_0096a19c == 2) {
          idol::GetAnimDuration(10);
        }
        local_b0 = (ulonglong)DAT_0096a19c;
        Hero_ScaleAnim(DAT_0096a1a0,(float)(longlong)local_b0,0.5,(float)dVar26);
      }
      if ((DAT_0096a778 & 2) != 0) {
        TransitionMovement(0,1);
      }
      goto LAB_000c81a8;
    }
    if (g_heroState != UNK_BONK) {
      if ((((g_heroState == WALLOPER_SOMETHING) && (g_currentWeaponMoby != (MobyInstance *)0x0)) &&
          (DAT_0096a77c == 0)) && (20.0 < g_heroAnimFrame)) {
        TransitionMovement(0,0);
      }
      goto LAB_000c81a8;
    }
LAB_000c03c0:
    if ((DAT_0096a778 & 2) != 0) {
      TransitionMovement(0,1);
    }
    goto LAB_000c81a8;
  }
  if (0x1b < (int)g_heroState) {
    if (0x1d < (int)g_heroState) {
      if ((int)g_heroState < 0x1f) {
        if ((g_heroType == 0) && ((DAT_0096bd8a == '\0' || (g_heroInvisible != '\0')))) {
          if ((g_downButtons & (R1|R2)) == 0) {
            uVar16 = Hero_GetIdleAnim(1);
            if (g_heroMobyPtr->animationId != uVar16) {
              iVar15 = idol::GetAnimDuration(8);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
            }
          }
          else if (g_heroMobyPtr->animationId != '\r') {
            iVar15 = idol::GetAnimDuration(8);
            local_b0 = (ulonglong)iVar15;
            Hero_TransAnim((float)(longlong)local_b0,0xd,0);
          }
        }
        if ((g_downButtons & (L1|L2)) == 0) {
          if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
            TransitionMovement(0,0);
            uVar16 = Hero_GetIdleAnim(1);
            if (g_heroMobyPtr->animationId != uVar16) {
              iVar15 = idol::GetAnimDuration(8);
              local_b0 = (ulonglong)iVar15;
              Hero_TransAnim((float)(longlong)local_b0,uVar16,0);
            }
          }
          DAT_0071eed0 = 0;
        }
      }
      goto LAB_000c81a8;
    }
    if (0x1c < (int)g_heroState) goto LAB_000c81a8;
    goto LAB_000c3ec4;
  }
  if ((int)g_heroState < 0x19) {
    if (13.5 < g_heroAnimFrame) {
      TransitionMovement(0x19,0);
    }
    goto LAB_000c81a8;
  }
  if ((int)g_heroState < 0x1a) {
    if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId == ' ')) {
      iVar15 = idol::GetAnimDuration(6);
      local_b0 = (ulonglong)iVar15;
      Hero_TransAnim((float)(longlong)local_b0,0x21,0);
    }
    Hero_GetIdealThrustFromPad(0x3ff0000000000000);
    FUN_005e7e98(uVar12 - 0x240,&g_heroPosition);
    local_f8 = g_heroRotation.z;
    iVar15 = Hero_UpdateLedge((float *)(uVar12 - 0x240),&local_f8);
    if (iVar15 == 0) {
      TransitionMovement(6,1);
      DAT_00969e90 = idol::GetAnimDuration(10);
      goto LAB_000c81a8;
    }
    dVar26 = 0.5;
    if (g_heroPadMagnitude <= 0.5) {
LAB_000c2d68:
      if ((g_buttonsPressedThisFrame & (R1|R2)) == 0) {
        iVar15 = idol::GetAnimDuration(0x11);
        iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
        if (iVar15 == 0) {
          if (dVar26 < (double)g_heroPadMagnitude) {
            dVar30 = 1.5707963705062866;
            dVar29 = (double)g_heroIdealRotZ;
            dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
            dVar26 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar26);
            dVar29 = 0.7853981852531433;
            if (0.7853981852531433 <= dVar26) {
              dVar31 = -1.5707963705062866;
              dVar30 = (double)g_heroIdealRotZ;
              dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
              dVar26 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar26);
              if (dVar26 < dVar29) {
                FUN_005e7e98(uVar12 - 0x220,&g_heroPosition);
                dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
                mathfunc::cosf((float)dVar26);
                fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar31);
                FUN_005e8128();
                local_f0 = g_heroRotation.z;
                iVar15 = Hero_UpdateLedge((float *)(uVar12 - 0x220),&local_f0);
                if (iVar15 != 0) {
                  TransitionMovement(0x1b,1);
                }
              }
            }
            else {
              FUN_005e7e98(uVar12 - 0x230,&g_heroPosition);
              dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar30);
              mathfunc::cosf((float)dVar26);
              fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar30);
              FUN_005e8128();
              local_f4 = g_heroRotation.z;
              iVar15 = Hero_UpdateLedge((float *)(uVar12 - 0x230),&local_f4);
              if (iVar15 != 0) {
                TransitionMovement(0x1a,1);
              }
            }
          }
        }
        else {
          TransitionMovement(0x1c,1);
        }
        goto LAB_000c81a8;
      }
    }
    else {
      iVar15 = idol::GetAnimDuration(9);
      iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
      if ((iVar15 == 0) ||
         (dVar30 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
         dVar30 <= 2.356194496154785)) goto LAB_000c2d68;
    }
    TransitionMovement(6,1);
    DAT_00969e90 = idol::GetAnimDuration(10);
    goto LAB_000c81a8;
  }
  FUN_005e7e98(uVar12 - 0x210,&g_heroPosition);
  fVar34 = 1.5707964;
  if (g_heroState == EDGE_HANG_MOVE_RIGHT) {
    fVar34 = -1.5707964;
  }
  dVar33 = (double)fVar34;
  dVar31 = (double)local_210;
  dVar26 = (double)fastfunc::FastWrapRot(g_heroRotation.z,fVar34);
  dVar26 = (double)mathfunc::cosf((float)dVar26);
  dVar29 = 0.30000001192092896;
  dVar30 = (double)local_20c;
  local_210 = (float)(dVar31 + (double)(float)(dVar26 * 0.30000001192092896));
  fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar33);
  uVar32 = FUN_005e8128();
  local_ec = g_heroRotation.z;
  local_20c = (float)(dVar30 + (double)(float)(extraout_f1 * dVar29));
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar32,0);
  dVar26 = 0.5;
  if (g_heroPadMagnitude < 0.5) {
LAB_000c3060:
    if ((DAT_0096a778 & 2) != 0) {
      TransitionMovement(0x19,1);
      goto LAB_000c81a8;
    }
  }
  else {
    dVar29 = (double)g_heroIdealRotZ;
    dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar33);
    dVar30 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar30);
    if ((0.7853981852531433 < dVar30) ||
       (iVar15 = Hero_UpdateLedge(&local_210,&local_ec), iVar15 == 0)) goto LAB_000c3060;
  }
  if (dVar26 < (double)g_heroPadMagnitude) {
    iVar15 = idol::GetAnimDuration(9);
    iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
    if ((iVar15 != 0) &&
       (dVar26 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,g_heroRotation.z),
       2.356194496154785 < dVar26)) {
      TransitionMovement(6,1);
      DAT_00969e90 = idol::GetAnimDuration(0x28);
      goto LAB_000c81a8;
    }
  }
  iVar15 = idol::GetAnimDuration(9);
  iVar15 = pad::PadRingBitsOn(0x40,iVar15,(int *)0x0);
  if (iVar15 != 0) {
    TransitionMovement(0x1c,1);
  }
LAB_000c81a8:
  if (iVar11 != g_heroStateType) {
    Hero_KillLoopingSounds();
  }
  if (((DAT_0096bd70 == 0x40) && (g_heroState != UNK_41)) ||
     ((DAT_0096bd70 == 0x41 && (DAT_0096b2f4 != 0)))) {
    ____Hero_CleanupAttachedMobys();
  }
  if (iVar10 != DAT_0096bd68) {
    DAT_00969e80 = 0;
  }
  if (uVar2 != pMVar8->animationId) {
    DAT_00969e84 = 0;
  }
  return;
}



