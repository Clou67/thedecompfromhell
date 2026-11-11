//==== 000e0038  ns=loaders  size=0xd8
// sig: int LoadNpcMobys(int level_id, int scene_id)
// callers(1): 000627d0 debug::UpdateDebugSelections
// callees(5): 00174cf4 stub::STUB_00174cf4; 00502dcc FUN_00502dcc; 00502ddc stub::STUB_00502ddc; 00503078 stub::STUB_00503078; 005cd2a8 libc::snprintf
// strings: 00652577: '9host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat' | 006525b0: 'host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::LoadNpcMobys(int level_id,int scene_id)

{
  bool bVar1;
  undefined8 uVar2;
  char acStack_70 [88];
  
  stub::STUB_00174cf4(1);
  stub::STUB_00503078(0);
  if (Cutscene == 0) {
    libc::snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat",level_id,scene_id
                  );
  }
  else {
    libc::snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat",level_id,
                   scene_id);
  }
  uVar2 = FUN_00502dcc(acStack_70,0);
  bVar1 = -1 < (int)uVar2;
  if (bVar1) {
    stub::STUB_00502ddc(uVar2);
  }
  return (int)bVar1;
}



//==== 000e0110  ns=loaders  size=0x8
// sig: int LoadNpcSubtitles(void)
// callers(1): 00167e60 update::mode_sceneInit
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::LoadNpcSubtitles(void)

{
  return 1;
}



//==== 000e0118  ns=loaders  size=0x10c
// sig: int PreLoadNpcChunk(int chunk_id)
// callers(2): 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene
// callees(4): 00503f8c FUN_00503f8c; 005040f4 FUN_005040f4; 00504178 fios::GetFileSize; 005cd2a8 libc::snprintf
// strings: 006525e4: 'rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3' | 00652614: 'rc1/ps3data/level%d/scene[%d]/chunk%d.ps3'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::PreLoadNpcChunk(int chunk_id)

{
  longlong lVar1;
  int iVar2;
  char acStack_50 [64];
  
  iVar2 = g_NpcBuffer + 0x80000;
  g_SceneLoadBuffer = iVar2;
  if (g_IsPal == 0) {
    libc::snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]/chunk%d.ps3",Level,update::g_SceneId,
                   chunk_id);
  }
  else {
    libc::snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3",Level,
                   update::g_SceneId,chunk_id);
  }
  lVar1 = fios::GetFileSize(acStack_50);
  if (lVar1 != 0) {
    if (g_NpcChunkLoadHandle != 0) {
      FUN_005040f4();
    }
    g_NpcChunkLoadHandle = FUN_00503f8c(acStack_50,iVar2,0x80000);
  }
  return 1;
}



//==== 000e0230  ns=loaders  size=0x2f8
// sig: void ParseNpcChunk(void)
// callers(4): 000e0654 loaders::ParseWeaponSceneChunk; 000e07f8 loaders::ParseSpaceSceneChunk; 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene
// callees(4): 000efa28 mobyfunc::CreateMoby; 005002cc fastfunc::FastMemCopy; 005040f4 FUN_005040f4; 005cd098 libc::printf
// strings: 00652640: '\nnpc error: moby class %d is not on the level\n' | 00652670: '\nnpc error: moby class %d is a null moby or a hand gadget\n'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseNpcChunk(void)

{
  u8 uVar1;
  int iVar2;
  MobyClass *pMVar3;
  undefined4 *puVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  if (g_NpcChunkLoadHandle != 0) {
    FUN_005040f4();
    g_NpcChunkLoadHandle = 0;
  }
  puVar9 = &DAT_0095cd50;
  fastfunc::FastMemCopy(g_NpcBuffer,g_SceneLoadBuffer,0x80000);
  puVar4 = g_NpcBuffer;
  piVar12 = g_NpcBuffer + 5;
  g_cutsceneCameraFrame = 0;
  iVar11 = (int)g_NpcBuffer + g_NpcBuffer[1];
  boot::g_SpaceSceneNumFrames._0_2_ = (undefined2)*g_NpcBuffer;
  boot::g_SpaceSceneCameraFrames = (void *)((int)g_NpcBuffer + g_NpcBuffer[4]);
  boot::g_SpaceSceneMobyCnt._2_2_ = (undefined2)g_NpcBuffer[2];
  boot::g_SpaceSceneMobyCnt._0_2_ = (short)g_NpcBuffer[3];
  draw::g_SubtitleTable =
       iVar11 + ((uint)((longlong)(int)g_NpcBuffer[1] + -0x400 >> 0x3f) & -iVar11);
  if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
    iVar11 = 0;
    do {
      iVar6 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar10 = (int *)(iVar6 + (int)puVar4);
      iVar6 = *piVar10;
      iVar2 = piVar10[3];
      if ((g_gameMode == GAME_MODE_SPACE) && (iVar11 == 0 && iVar6 == 0x215)) {
        iVar6 = *(int *)((int)OCLASSES_SPACESHIP + (int)((longlong)g_SpaceshipVariant << 2));
      }
      if ((&MobyClassLookup)[iVar6] == -1) {
        libc::printf("\nnpc error: moby class %d is not on the level\n",iVar6);
      }
      else {
        pMVar5 = (MobyInstance *)puVar9[0x5e];
        if (pMVar5 == (MobyInstance *)0x0) {
          pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar6);
          pMVar3 = pMVar5->pClass;
          if (pMVar3 == (MobyClass *)0x0) {
            libc::printf("\nnpc error: moby class %d is a null moby or a hand gadget\n",iVar6);
            goto LAB_000e04c0;
          }
          uVar1 = pMVar3->seq_cnt;
          pMVar3->seq_cnt = uVar1 + '\x01';
          pMVar5->updateId = uVar1;
          pMVar5->animationId = uVar1;
          pMVar5->drawDistance = 0x1ff;
          pMVar5->field45_0x72 = -1;
          pMVar5->collision = (ushort *)0x0;
          pMVar5->modeBits = pMVar5->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          uVar7 = 0x38383800000000;
          if (g_heroMobyPtr != (MobyInstance *)0x0) {
            uVar7._0_4_ = g_heroMobyPtr->color;
            uVar7._4_4_ = g_heroMobyPtr->light;
          }
          pMVar5->color = (int)((ulonglong)uVar7 >> 0x20);
          pMVar5->light = (int)uVar7;
          puVar9[0x5e] = pMVar5;
        }
        pMVar5->pVar = (void *)(iVar2 + (int)puVar4);
        *(int **)(&pMVar5->pClass->type + (uint)pMVar5->updateId * 4) = piVar10 + 4;
        if (*(char *)(piVar10 + 8) != '\0') {
          iVar6 = 0;
          piVar8 = piVar10;
          do {
            iVar6 = iVar6 + 1;
            piVar8[0xb] = piVar8[0xb] + (int)(piVar10 + 4);
            piVar8 = piVar8 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(piVar10 + 8));
        }
      }
LAB_000e04c0:
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar11 < boot::g_SpaceSceneMobyCnt._0_2_);
  }
  return;
}



//==== 000e0528  ns=loaders  size=0x12c
// sig: void LoadWeaponCutscene(int weapon)
// callers(2): 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene
// callees(5): 0006dad0 draw::FadeToBlack; 0011dbcc music::LoadMusic2; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 006526ac: 'rc1/ps3data/global/weapon%d_pal.ps3' | 006526d4: 'rc1/ps3data/global/weapon%d.ps3' | 006526f4: 'weapon_scenes_pal'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::LoadWeaponCutscene(int weapon)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_50 [64];
  
  draw::FadeToBlack(4);
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      libc::snprintf(acStack_50,"rc1/ps3data/global/weapon%d.ps3",weapon);
    }
    else {
      libc::snprintf(acStack_50,"rc1/ps3data/global/weapon%d_pal.ps3",weapon);
    }
    fios::LoadAssetFromFile(acStack_50,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"weapon_scenes_pal");
  }
  music::LoadMusic2(0);
  music::LoadMusic2(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar3 = iVar3 + 1;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}



//==== 000e0654  ns=loaders  size=0x5c
// sig: void ParseWeaponSceneChunk(int chunk_id)
// callers(3): 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016da88 vendor::Vendor_PreUpdate
// callees(1): 000e0230 loaders::ParseNpcChunk

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseWeaponSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}



//==== 000e06b0  ns=loaders  size=0x148
// sig: void LoadSpaceScene(int scene, int fade)
// callers(1): 0015e430 space::PlaySpaceCutscene
// callees(5): 0006dad0 draw::FadeToBlack; 0011dbcc music::LoadMusic2; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 00652708: 'rc1/ps3data/global/space%d_pal.ps3' | 00652730: 'rc1/ps3data/global/space%d.ps3' | 00652750: 'space_scenes_pal'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::LoadSpaceScene(int scene,int fade)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_60 [72];
  
  if (fade != 0) {
    draw::FadeToBlack(fade);
  }
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      libc::snprintf(acStack_60,"rc1/ps3data/global/space%d.ps3",scene);
    }
    else {
      libc::snprintf(acStack_60,"rc1/ps3data/global/space%d_pal.ps3",scene);
    }
    fios::LoadAssetFromFile(acStack_60,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"space_scenes_pal");
  }
  if (fade != 0) {
    music::LoadMusic2(0);
  }
  music::LoadMusic2(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar1 = *piVar4;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}



//==== 000e07f8  ns=loaders  size=0x5c
// sig: void ParseSpaceSceneChunk(int chunk_id)
// callers(8): 00011020 boot::FrontEnd_Update; 00011b74 boot::Load_Front_End; 00012048 boot::PrepareFrontbin; 0015e430 space::PlaySpaceCutscene; 0015e8a0 space::StartLeaveLevelCutscene; 0015fe00 space::ChooseLoadingScreen; 00161788 space::UpdateSpace; 00163aa0 space::SpaceTransition_LoadWad
// callees(1): 000e0230 loaders::ParseNpcChunk

void loaders::ParseSpaceSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}



//==== 000e0854  ns=loaders  size=0x1d8
// sig: void LoadGadgetModel(int oClass, int t_target)
// callers(8): 000921c0 hero::EquipItem; 0013b838 pause::UpdatePause; 00145d28 pause::WeaponView_Update; 0014f828 pause::MenuHero_Update; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016da88 vendor::Vendor_PreUpdate
// callees(2): 000dbc38 loaders::LoadMobyModel; 005c5ad0 libc::memcpy

void loaders::LoadGadgetModel(int oClass,int t_target)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  MobyClass *pClass;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  if ((g_gadgetIdx < 0) || ((&DAT_00a4d540)[g_gadgetIdx] != oClass)) {
    g_gadgetIdx = 0;
    if (0 < maximumNumWeapons) {
      piVar5 = &DAT_00a4d540;
      do {
        if (*piVar5 == oClass) break;
        g_gadgetIdx = g_gadgetIdx + 1;
        piVar5 = piVar5 + 1;
      } while (g_gadgetIdx < maximumNumWeapons);
    }
    if (t_target == -1) {
      t_target = (uint)LZCOUNT(DAT_00a4daec) >> 5;
    }
    uVar3 = (ulonglong)(LZCOUNT(t_target) << 0x20) >> 0x25;
    DAT_00a4daec = (uint)LZCOUNT(t_target) >> 5;
    pClass = (MobyClass *)(DAT_00a108e8 + ((int)(uVar3 << 0x12) - (int)(uVar3 << 0x10)));
    bVar1 = (&MobyClassLookup)[oClass];
    libc::memcpy(pClass,(void *)(&DAT_00a4d5a0)[g_gadgetIdx],(&DAT_00a4d600)[g_gadgetIdx]);
    MobyClasses[bVar1] = pClass;
    LoadMobyModel(pClass,(void *)0x0,(char *)0x0,oClass);
    iVar7 = 0;
    iVar8 = 0;
    puVar6 = &DAT_00a4d7e0;
    do {
      uVar4 = DAT_00a4dae0;
      if (-1 < *(short *)(puVar6 + g_gadgetIdx * 0x20)) {
        pvVar2 = MobyClasses[bVar1]->SoundDefs;
        *(short *)((int)pvVar2 + iVar7 + 0x1a) = *(short *)(puVar6 + g_gadgetIdx * 0x20);
        *(undefined4 *)((int)pvVar2 + iVar7 + 0x1c) = uVar4;
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 0x20;
    } while (iVar8 < 0x10);
  }
  return;
}



//==== 000e0a2c  ns=loaders  size=0x170
// sig: longlong QueuePifLoad(void * pPif)
// callers(0): 
// callees(2): 00500178 fastfunc::FastLog2; 00502fbc stub::STUB_00502fbc_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong loaders::QueuePifLoad(void *pPif)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  
  uVar3 = fastfunc::FastLog2(*(undefined4 *)((int)pPif + 8));
  uVar4 = fastfunc::FastLog2(*(undefined4 *)((int)pPif + 0xc));
  iVar2 = g_GsRamAlloc;
  iVar6 = (int)uVar3 + -6;
  iVar7 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar7 + (1 << ((int)uVar3 + (int)uVar4 & 0x3fU));
  lVar5 = stub::STUB_00502fbc_RET_0
                    (iVar7 >> 8,1 << (iVar6 + (iVar6 >> 0x1f & -iVar6) & 0x3fU),0x13,uVar3,uVar4,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    *(int *)(&g_PifLoadQueue + iVar1) = (int)pPif + 0x20;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(int *)(&DAT_0095d2d4 + iVar1) = (int)pPif + 0x420;
    (&DAT_0095d2d8)[iVar1] = (char)uVar3;
    (&DAT_0095d2d9)[iVar1] = (char)uVar4;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar7 >> 8);
  }
  return lVar5;
}



//==== 000e0b9c  ns=loaders  size=0x148
// sig: longlong QueuePifLoad(int log_w, int log_h, char * tex, char * pal)
// callers(0): 
// callees(1): 00502fbc stub::STUB_00502fbc_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong loaders::QueuePifLoad(int log_w,int log_h,char *tex,char *pal)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = g_GsRamAlloc;
  iVar4 = log_w + -6;
  iVar5 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar5 + (1 << (log_w + log_h & 0x3fU));
  lVar3 = stub::STUB_00502fbc_RET_0
                    (iVar5 >> 8,1 << (iVar4 + (iVar4 >> 0x1f & -iVar4) & 0x3fU),0x13,log_w,log_h,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar1) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    *(char **)(&DAT_0095d2d4 + iVar1) = pal;
    (&DAT_0095d2d8)[iVar1] = (char)log_w;
    (&DAT_0095d2d9)[iVar1] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar5 >> 8);
  }
  return lVar3;
}



//==== 000e0ce4  ns=loaders  size=0x12c
// sig: longlong QueuePifLoad(int log_w, int log_h, char * tex, char * pal, int tex_addr, int pal_addr)
// callers(0): 
// callees(1): 00502fbc stub::STUB_00502fbc_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong loaders::QueuePifLoad(int log_w,int log_h,char *tex,char *pal,int tex_addr,int pal_addr)

{
  int iVar2;
  longlong lVar1;
  
  iVar2 = log_w + -6;
  lVar1 = stub::STUB_00502fbc_RET_0
                    (pal_addr >> 8,1 << (iVar2 + (iVar2 >> 0x1f & -iVar2) & 0x3fU),0x13,log_w,log_h,
                     1,0,tex_addr >> 8);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar2 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar2) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar2) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar2) = (short)((uint)tex_addr >> 8);
    *(char **)(&DAT_0095d2d4 + iVar2) = pal;
    (&DAT_0095d2d8)[iVar2] = (char)log_w;
    (&DAT_0095d2d9)[iVar2] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar2) = (short)((uint)pal_addr >> 8);
  }
  return lVar1;
}



//==== 000e0e10  ns=stub  size=0x4
// sig: undefined STUB_000e0e10(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(0): 

void stub::STUB_000e0e10(void)

{
  return;
}



//==== 000e0e14  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MAIN(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MAIN(void)

{
  DAT_00724840 = 0x10000;
  return;
}



//==== 000e0e60  ns=main  size=0xcac
// sig: undefined startLevel(void)
// callers(0): 
// callees(75): 0005bdbc collproc::CollMobyVertCache_Reset; 00060a90 debug::ResetDebugEnables; 00060c44 debug::ResetDebugFontStrings; 000627d0 debug::UpdateDebugSelections; 00063e68 debug::DrawDebugMenu; 00065608 debug::Debug_ResetLevelCounters; 00065628 stub::STUB_00065628; 0006562c stub::STUB_0006562c; 00065630 stub::STUB_00065630; 000684a0 stub::STUB_000684a0; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006c424 draw::SetupDefaultDraw; 0006c494 draw::SetupDefaultDrawMovie; 0006c4d8 draw::SetupDefaultDrawFreeze; 0006c558 draw::InitLevelRenderState; 0006d590 draw::DrawSomeOverlay; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 000780f8 stub::STUB_000780f8; 000780fc stub::STUB_000780fc; 00078104 stub::STUB_00078104; 00078134 stub::STUB_00078134; 00078178 freeze::DisplayPrompt; 00079b18 freeze::UpdateFreeze; 000c8658 hud::Hud_InitBanks; 000ca3e4 hud::GetIconFrameTex; 000cc0f0 hud::DrawSprite; 000d6bf8 hud::Hud_GetTexIndex; 000d7f88 hud::Hud_DrawTexQuadF_v4; 000d8be8 initonce::InitOnce; 000def78 loaders::LoadLevelFiles; 000df408 loaders::LoadAllMobys; 000e1b28 map::Map_LoadPlanetMap; 000e6598 map::FlowState_Update; 000e76cc memcard::memcard_Update; 0011bb00 music::InitLevelMusicFileSizes; 0011c984 music::music_StartTrack; 0011cd1c music::music_Stop; 0011ce20 music::music_Pause
// strings: 00652770: 'crap\n' | 00652778: 'Memory stats:\n' | 00652788: 'Total: %8.4f\n' | 00652798: 'Used : %8.4f\n' | 006527a8: 'Avail: %8.4f\n' | 006527b8: 'Console Mode:\n' | 006527c8: 'system misc'

/* WARNING: Removing unreachable block (ram,0x000e0ee0) */
/* WARNING: Removing unreachable block (ram,0x000e0eec) */

void main::startLevel(void)

{
  float fVar1;
  short sVar2;
  LevelId LVar3;
  gameMode_t gVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar5;
  uint uVar9;
  uint uVar10;
  double used;
  double available;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  libc::printf("crap\n");
  iVar6 = 0;
  do {
    iVar8 = iVar6 + 1;
    (&::startLevel)[iVar6] = 0;
    iVar6 = iVar8;
  } while (iVar8 < 1);
  if (g_HasInited != 0) {
    initonce::InitOnce();
    g_FinishedLoading = 1;
    g_LoadingStage = 0;
    DAT_00964562 = 0;
    while (iVar6 = loaders::LoadLevelFiles(), iVar6 == 0) {
      stub::STUB_00503078(0);
    }
    g_FinishedLoading = 0;
  }
  map::InitIndexedBuffers();
  music::InitLevelMusicFileSizes();
  g_gameMode = GAME_MODE_SPACE;
  g_FramesSinceStateChange = 0;
  FUN_004d3044();
  music::g_MusicPlaying.track = 0;
  loaders::LoadAllMobys(1,0);
  DebugSelectedCol = 1;
  DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
  Scene = 0xffffffff;
  TvMode = Cutscene;
  Actuator = 1;
  debug::ResetDebugEnables();
  map::Map_LoadPlanetMap();
  hud::Hud_InitBanks();
  pause::LoadHudSequences();
  space::Space_StartLevelArrival();
  DAT_0159c330 = 0;
  stub::STUB_00503078(0);
  stub::STUB_000780f8();
  music::music_StartTrack((int)music::g_MusicPlaying.track,1,0x400);
  if (((Level == Novalis) && (g_SeenPlanets.Kerwan == '\0')) ||
     ((Level == Veldin && (MiscLevelFlags.veldinClankCsTrigger != 0)))) {
    music::music_Unpause();
  }
  else {
    music::music_Pause(0);
  }
  LVar3 = Level;
  if ((&VisitedPlanets.Veldin)[Level] == '\0') {
    (&VisitedPlanets.Veldin)[Level] = '\x01';
  }
  iVar6 = LVar3 * 8;
  if (*(short *)(&DAT_00a0fd24 + iVar6) != -1) {
    *(short *)(&DAT_00a0fd24 + iVar6) = *(short *)(&DAT_00a0fd24 + iVar6) + 1;
  }
  dVar15 = 0.5;
  iVar8 = (int)(animationSpeed * (float)((double)(longlong)update::g_GameFrameCount + 0.5));
  if ((int)(uint)*(ushort *)(&DAT_00a0fd26 + iVar6) < iVar8 / 600) {
    sVar2 = (short)(iVar8 >> 0x1f);
    *(short *)(&DAT_00a0fd26 + iVar6) =
         ((short)(iVar8 / 600) + sVar2) - ((short)((short)(iVar8 / 0x2580000) + sVar2) >> 0xf);
  }
  *(uint *)(&DAT_00a0fd28 + iVar6) =
       *(uint *)(&DAT_00a0fd28 + iVar6) | 1 << (LVar3 & 0x3f) | 0x80000000;
  stub::STUB_00505f50();
  uVar7 = FUN_004fe06c(TEX_BASE);
  iVar6 = *(int *)(TEX_BASE + 0xc);
  iVar8 = FUN_004fe524(TEX_BASE);
  uVar10 = iVar6 - iVar8;
  uVar9 = uVar10 - uVar7;
  libc::printf("Memory stats:\n");
  available = 0.0009765625;
  libc::printf("Total: %8.4f\n",
               (double)(float)((double)(longlong)
                                       (int)(((int)uVar10 >> 10) +
                                            (uint)((int)uVar10 < 0 && (uVar10 & 0x3ff) != 0)) *
                              0.0009765625));
  used = (double)(float)((double)(longlong)
                                 (int)(((int)uVar9 >> 10) +
                                      (uint)((int)uVar9 < 0 && (uVar9 & 0x3ff) != 0)) * available);
  libc::printf("Used : %8.4f\n",used);
  available = (double)(float)((double)(longlong)
                                      (int)(((int)uVar7 >> 10) +
                                           (uint)((int)uVar7 < 0 && (uVar7 & 0x3ff) != 0)) *
                             available);
  libc::printf("Avail: %8.4f\n",available);
  libc::printf("Console Mode:\n");
  libc::printf("Total: %8.4f\n",0x4063800000000000);
  libc::printf("Used : %8.4f\n",used);
  libc::printf("Avail: %8.4f\n",available);
  if (g_loadingPlanet == 0) {
    uVar14 = 0x3f90624de0000000;
    uVar13 = 0x4094800000000000;
    uVar12 = 0x40b4c00000000000;
    uVar11 = 0x4071000000000000;
    used = -0.11423972994089127;
    do {
      cell::cellSysutilCheckCallback();
      (*(code *)**(undefined4 **)(*DAT_01111640 + 8))(uVar14);
      if ((DAT_00964fa0 != '\0') && (g_gameMode != GAME_MODE_FREEZE)) {
        freeze::DisplayPrompt(9,0,0);
      }
      FUN_00502d80();
      collproc::CollMobyVertCache_Reset();
      iVar6 = *DAT_00927200;
      *DAT_00927200 = 0;
      DAT_00a53500 = DAT_00a53500 + iVar6;
      debug::Debug_ResetLevelCounters();
      g_CutscenePlaying = 0;
      stub::STUB_00174cf0();
      vuchain::VU1_swapChain();
      stub::STUB_00078104();
      stub::STUB_00078134();
      stub::STUB_000780fc();
      stub::STUB_00505d20();
      gVar4 = g_gameMode;
      if (g_gameMode < GAME_MODE_PAUSE) {
        if (g_gameMode < GAME_MODE_NORMAL) {
          if (GAME_MODE_NONE < g_gameMode) {
                    /* Debug update */
            pad::UpdatePad();
            debug::UpdateDebugSelections();
            debug::DrawDebugMenu();
          }
        }
        else {
                    /* Gameplay update */
          if (g_gameMode < GAME_MODE_MOVIE) {
            pad::UpdatePad();
            update::UpdateGameplay();
            draw::UpdateOcclusion(1);
            draw::SetupDefaultDraw();
            draw::Render_DispatchJob();
          }
          else if (g_gameMode < GAME_MODE_SCENE) {
                    /* Cinematic update */
            update::UpdateCinematic();
          }
          else {
                    /* In level movie update */
            pad::UpdatePad();
            update::UpdateScene();
            draw::UpdateOcclusion(1);
            draw::SetupDefaultDrawMovie();
            draw::Render_DispatchJob();
          }
        }
      }
      else if (g_gameMode < GAME_MODE_SPACE) {
        if (g_gameMode < GAME_MODE_FREEZE) {
                    /* Pause state update */
          pad::UpdatePad();
          pause::UpdatePause();
          draw::UpdateOcclusion(1);
          draw::InitLevelRenderState();
          draw::Render_DispatchJob();
        }
        else if (g_gameMode < GAME_MODE_VENDOR) {
                    /* Freeze state update */
          pad::UpdatePad();
          freeze::UpdateFreeze();
          draw::UpdateOcclusion(1);
          draw::SetupDefaultDrawFreeze();
          draw::Render_DispatchJob();
        }
        else {
                    /* Vendor update */
          pad::UpdatePad();
          vendor::Vendor_PreUpdate();
          draw::UpdateOcclusion(1);
          vendor::Vendor_PostUpdate();
          draw::Render_DispatchJob();
        }
      }
      else if (g_gameMode < GAME_MODE_PUZZLE) {
                    /* Loading screen / space update */
        pad::UpdatePad();
        space::UpdateSpace();
        space::DisplayLoadingScreen();
      }
      else if (g_gameMode < GAME_MODE_CREDITS) {
        pad::UpdatePad();
        update::UpdateCredits();
        draw::UpdateOcclusion(1);
        draw::DrawSomeOverlay();
        draw::Render_DispatchJob();
      }
      iVar6 = 0;
      if (g_gameMode == gVar4) {
        iVar6 = g_FramesSinceStateChange + 1;
      }
      g_FramesSinceStateChange = iVar6;
      if (g_CutscenePlaying == 0) {
        memcard::memcard_Update();
        map::FlowState_Update();
        if ((((((DAT_0071fb00 == 3) || (DAT_0071fb00 == 4)) || (DAT_0071fb00 == 4)) ||
             ((DAT_0071fb00 == 5 || (DAT_0071fb00 == 6)))) ||
            ((((DAT_0071fb00 == 9 || ((DAT_0071fb00 == 10 || (DAT_0071fb00 == 0xb)))) ||
              (DAT_0071fb00 == 0xc)) ||
             ((((DAT_0071fb00 == 0xf || (DAT_0071fb00 == 0x10)) || (DAT_0071fb00 == 0x11)) ||
              (((DAT_0071fb00 == 0x12 || (DAT_0071fb00 == 0x13)) || (DAT_0071fb00 == 0x14)))))))) &&
           (DAT_00a52ce8 == 0)) {
          stub::STUB_0006d704(0);
          uVar5 = idol_draw::Blend(1,5,4,0,0,0,1,1);
          vuchain::SetGSReg(0x16,uVar5);
          uVar5 = hud::GetIconFrameTex(0x755d,0);
          hud::DrawSprite(uVar5,0x32,300,0x40,0x40,0x80);
          available = (double)(float)((double)(longlong)(DAT_0159c330 % 0x37) * used);
          iVar6 = hud::GetIconFrameTex((double)(longlong)(DAT_0159c330 % 0x37),0x755d,1);
          hud::Hud_GetTexIndex(iVar6);
          hud::Hud_DrawTexQuadF_v4(uVar13,uVar12,uVar11,uVar11,available);
          stub::STUB_0006d708();
        }
        DAT_00a52ce8 = 0;
        debug::ResetDebugFontStrings();
        stub::STUB_0006562c("system misc",0x10);
        stub::STUB_00065630("system misc",0x10);
        stub::STUB_00174cf4(1);
        available = (double)fastfunc::FastIntToDouble(*DAT_00927200);
        fVar1 = 9600.0;
        if (g_IsPal != 0) {
          fVar1 = 11520.0;
        }
        DAT_00a10714 = (float)(available / (double)fVar1);
        if ((g_gameMode == GAME_MODE_NORMAL) && (Profile != 0)) {
          stub::STUB_00065628();
        }
        if (g_HeroIsOutOfBounds == '\0') {
          if ((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) {
            if ((int)(((uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 0xfffff880) + 0x2d00) <
                *DAT_00927200) {
              if (g_gameMode == GAME_MODE_NORMAL) {
                pad::UpdatePad();
                update::UpdateGameplay();
              }
              else if ((g_gameMode == GAME_MODE_SCENE) && (DAT_0095cda0 == 0)) {
                pad::UpdatePad();
                update::UpdateScene();
              }
            }
            stub::STUB_00503078(0);
            DAT_0159c330 = DAT_0159c330 + 1;
            pause::SetFrameCount();
          }
          else {
            stub::STUB_00503078(0);
            DAT_0159c330 = DAT_0159c330 + 1;
            pause::SetFrameCount();
          }
          DAT_00a15f3a = 0;
        }
        stub::STUB_000684a0();
        if ((g_gameMode == GAME_MODE_NORMAL) && (g_HeroIsOutOfBounds != '\0')) {
          vuchain::VU1_initChain();
          stub::STUB_00505f4c();
          stub::STUB_00505d20();
          sound::sound_StopAllSounds();
          music::music_Stop();
          loaders::LoadAllMobys(0,1);
          g_gameMode = GAME_MODE_NORMAL;
          music::music_StartTrack((int)music::g_MusicPlaying.track,1,0x400);
          hud::Hud_InitBanks();
        }
        iVar6 = (int)(animationSpeed * (float)((double)(longlong)update::g_GameFrameCount + dVar15))
        ;
        if ((int)(uint)*(ushort *)(&DAT_00a0fd26 + Level * 8) < iVar6 / 600) {
          sVar2 = (short)(iVar6 >> 0x1f);
          *(short *)(&DAT_00a0fd26 + Level * 8) =
               ((short)(iVar6 / 600) + sVar2) - ((short)((short)(iVar6 / 0x2580000) + sVar2) >> 0xf)
          ;
        }
      }
      else {
        stub::STUB_00174cf4(1);
        vuchain::VU1_initChain();
      }
    } while (g_loadingPlanet == 0);
  }
  space::DoSpaceTransition();
  return;
}



//==== 000e1b0c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MAP(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MAP(void)

{
  DAT_00724acc = 0x10000;
  return;
}



//==== 000e1b28  ns=map  size=0x400
// sig: void Map_LoadPlanetMap(void)
// callers(2): 000e0e60 main::startLevel; 000e1f28 map::Map_OnPauseMenuOpen
// callees(5): 00503e00 fios::LoadAssetFromFile; 00504178 fios::GetFileSize; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 0065290c: 'rc1/ps3data/global/maps/maps_mm[%d].ps3' | 00652934: 'rc1/ps3data/global/maps/maps[%d].ps3'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_LoadPlanetMap(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  float *pfVar14;
  int iVar15;
  char *__s;
  int iVar16;
  undefined4 *puVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int iVar22;
  undefined4 *puVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  byte in_cr6;
  longlong lVar33;
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
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar11 = uVar13 - 0x40;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  auVar42 = ZEXT416(0);
  auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  lVar33 = 0x14;
  puVar12 = &DAT_007261cc;
  DAT_00a204d0 = 1;
  puVar17 = &DAT_00a205c4;
  pfVar14 = &g_MapZoom;
  puVar20 = &DAT_007261d0;
  puVar23 = &DAT_00a20614;
  do {
    uVar9 = *puVar12;
    *pfVar14 = 0.65;
    uVar10 = *puVar20;
    puVar12 = puVar12 + 2;
    *puVar17 = uVar9;
    puVar20 = puVar20 + 2;
    *puVar23 = uVar10;
    pfVar14 = pfVar14 + 1;
    puVar17 = puVar17 + 1;
    puVar23 = puVar23 + 1;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  g_MapFileId = -1;
  pfVar32 = &g_MapWorldToMap;
  lVar33 = 0x13;
  pfVar29 = (float *)&DAT_00724d54;
  iVar15 = Level + ((uint)(0x12 - (longlong)(int)Level >> 0x3f) & -Level);
  pfVar14 = &g_MapWorldBounds;
  pfVar30 = (float *)&DAT_00724d58;
  pfVar27 = (float *)&DAT_00724b08;
  pfVar18 = (float *)&DAT_00724af4;
  pfVar21 = (float *)&DAT_00724af8;
  pfVar24 = (float *)&DAT_00724afc;
  pfVar25 = (float *)&DAT_00724b00;
  pfVar26 = (float *)&DAT_00724b04;
  pfVar28 = (float *)&DAT_00724b0c;
  pfVar31 = (float *)&DAT_00724d5c;
  g_SelectedLevel = iVar15;
  do {
    fVar2 = *pfVar14;
    fVar3 = *pfVar18;
    fVar4 = *pfVar21;
    fVar5 = *pfVar24;
    fVar6 = *pfVar25;
    fVar7 = *pfVar26;
    fVar8 = *pfVar28;
    pfVar14 = pfVar14 + 8;
    pfVar18 = pfVar18 + 8;
    pfVar28 = pfVar28 + 8;
    pfVar21 = pfVar21 + 8;
    pfVar24 = pfVar24 + 8;
    fVar4 = (fVar6 - *pfVar27) / (fVar2 - fVar4);
    pfVar25 = pfVar25 + 8;
    pfVar26 = pfVar26 + 8;
    pfVar27 = pfVar27 + 8;
    fVar5 = (fVar7 - fVar8) / (fVar3 - fVar5);
    *pfVar29 = fVar4;
    pfVar29 = pfVar29 + 4;
    *pfVar32 = -(fVar4 * fVar2 - fVar6);
    pfVar32 = pfVar32 + 4;
    *pfVar31 = fVar5;
    pfVar31 = pfVar31 + 4;
    *pfVar30 = -(fVar5 * fVar3 - fVar7);
    pfVar30 = pfVar30 + 4;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  lVar33 = uVar13 - 0xc0;
  bVar1 = UnlockableItems.mapOMatic == '\0';
  if (bVar1) {
    libc::snprintf((char *)lVar33,"rc1/ps3data/global/maps/maps[%d].ps3",iVar15);
  }
  else {
    libc::snprintf((char *)lVar33,"rc1/ps3data/global/maps/maps_mm[%d].ps3",iVar15);
  }
  g_MapIsMapOMatic = (int)!bVar1;
  iVar15 = fios::GetFileSize(lVar33);
  if (iVar15 == 0) {
    DAT_00a204c8 = 0;
    g_MapLoaded = 1;
    DAT_00a204c0 = 0;
    DAT_00a204c4 = 0;
  }
  else {
    g_MapLoaded = 1;
    g_MapFileSize = (int)((longlong)(iVar15 + 0x7ff >> 0xb) << 7);
    fios::LoadAssetFromFile(lVar33,loaders::g_NpcBuffer,0x90000);
    if ((&DAT_0096ca34)[g_SelectedLevel * 0x8000] == '\0') {
      bVar1 = UnlockableItems.mapOMatic == '\0';
      __s = (char *)(uVar13 - 0x80);
      if (bVar1) {
        libc::snprintf(__s,"rc1/ps3data/global/maps/maps[%d].ps3",g_SelectedLevel);
      }
      else {
        libc::snprintf(__s,"rc1/ps3data/global/maps/maps_mm[%d].ps3",g_SelectedLevel);
      }
      g_MapIsMapOMatic = (int)!bVar1;
      fios::LoadAssetFromFile(uVar13 - 0x80,loaders::g_NpcBuffer,0x90000);
      libc::memset(g_MapRevealMask,0,0x8000);
    }
    else {
      libc::memcpy((void *)g_MapRevealMask,&DAT_0096ca34 + g_SelectedLevel * 0x8000,0x8000);
    }
    iVar15 = 0;
    iVar16 = 0;
    auVar34 = loadVectorLeftIndexed(lVar11,0xe1b20);
    auVar37 = loadVectorLeftIndexed(4,0xe1b20);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = auVar42;
    do {
      auVar36 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      uVar19 = 0;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = vectorSubtractFloatingPoint(auVar35,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar40,auVar40,auVar41);
      auVar40 = auVar42;
      do {
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar40,0);
        auVar41 = vectorSubtractFloatingPoint(auVar35,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar41,auVar36);
        vectorCompareGreaterThanFloatingPoint
                  (auVar41,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          iVar22 = ((int)uVar19 >> 3) + (uint)((int)uVar19 < 0 && (uVar19 & 7) != 0) + 0xa20664;
          *(byte *)(iVar22 + iVar16) =
               *(byte *)(iVar22 + iVar16) |
               (byte)(1 << (uVar19 + (((int)uVar19 >> 3) +
                                     (uint)((int)uVar19 < 0 && (uVar19 & 7) != 0)) * -8 & 0x3f));
        }
        uVar19 = uVar19 + 1;
        auVar41._0_4_ = auVar40._0_4_ + 1;
        auVar41._8_8_ = auVar40._8_8_;
        auVar41._4_4_ = auVar40._4_4_ + 1;
        auVar38._0_8_ = auVar41._0_8_;
        auVar38._12_4_ = auVar40._12_4_;
        auVar38._8_4_ = auVar40._8_4_ + 1;
        auVar40._0_12_ = auVar38._0_12_;
        auVar40._12_4_ = auVar38._12_4_ + 1;
      } while ((int)uVar19 < 0x20);
      iVar15 = iVar15 + 1;
      auVar36._0_4_ = auVar37._0_4_ + 1;
      auVar36._8_8_ = auVar37._8_8_;
      auVar36._4_4_ = auVar37._4_4_ + 1;
      auVar39._0_8_ = auVar36._0_8_;
      auVar39._12_4_ = auVar37._12_4_;
      auVar39._8_4_ = auVar37._8_4_ + 1;
      auVar37._0_12_ = auVar39._0_12_;
      auVar37._12_4_ = auVar39._12_4_ + 1;
      iVar16 = iVar16 + 4;
    } while (iVar15 < 0x20);
  }
  return;
}



//==== 000e1f28  ns=map  size=0x164
// sig: void Map_OnPauseMenuOpen(void)
// callers(1): 0013b108 update::OpenPauseMenu
// callees(3): 000e1b28 map::Map_LoadPlanetMap; 000ea958 mission::UpdateMissionDisplay; 00165800 map::ReadIndexedBuffer

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_OnPauseMenuOpen(void)

{
  mission::UpdateMissionDisplay(g_SelectedLevel,1);
  DAT_00a207ac = DAT_00a52ca8 + 0x9a800;
  DAT_00a206fc = DAT_00a52ca8;
  DAT_00a52ca8 = DAT_00a52ca8 + 0x12a800;
  g_MapCacheBuf = 0;
  DAT_00a207b0 = DAT_00a52cac;
  DAT_00a52cac = DAT_00a52cac + 0x90000;
  DAT_00a207b4 = 0;
  DAT_00a207b8 = 0;
  g_MapCacheId = -1;
  DAT_00a207c0 = ~Veldin;
  DAT_00a207c4 = 0xffffffff;
  DAT_00a207c8 = 0xffffffff;
  DAT_00a207cc = 0xffffffff;
  DAT_00a207d0 = 0xffffffff;
  if (((g_MapFileId == -1) || (g_MapIsMapOMatic != 0)) || (UnlockableItems.mapOMatic == '\0')) {
    if (g_MapFileId == -1) {
      g_MapAvailable = 0;
    }
    else {
      DAT_00a207d8 = g_MapFileSize;
      ReadIndexedBuffer(DAT_00a207ac,g_MapFileId,0,g_MapFileSize,0);
      DAT_00a207c0 = Level;
      if (UnlockableItems.mapOMatic != '\0') {
        DAT_00a207c0 = Level + 0x100;
      }
      g_MapAvailable = 1;
      g_MapCurIndex = -2;
    }
  }
  else {
    Map_LoadPlanetMap();
  }
  return;
}



//==== 000e208c  ns=map  size=0x80
// sig: int Map_FindFreeCacheSlot(int fromTop)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_FindFreeCacheSlot(int fromTop)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = 0;
  while( true ) {
    lVar3 = (longlong)(4 - (int)lVar1);
    iVar2 = (int)(lVar3 + ((LZCOUNT(-(fromTop & 0xffU)) << 0x3a) >> 0x3f & lVar1 - lVar3));
    if (((&g_MapCacheBuf)[iVar2] != 0) && ((&g_MapCacheId)[iVar2] == -1)) break;
    iVar2 = (int)lVar1 + 1;
    lVar1 = (longlong)iVar2;
    if (4 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}



//==== 000e210c  ns=map  size=0x84
// sig: void Map_MoveCacheSlot(int dst, int src)
// callers(0): 
// callees(1): 005002cc fastfunc::FastMemCopy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_MoveCacheSlot(int dst,int src)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((longlong)dst << 2);
  iVar3 = (int)((longlong)src << 2);
  fastfunc::FastMemCopy
            (*(undefined4 *)((int)&g_MapCacheBuf + iVar2),
             *(undefined4 *)((int)&g_MapCacheBuf + iVar3),
             *(int *)((int)&g_MapCacheSize + iVar3) << 4);
  uVar1 = *(undefined4 *)((int)&g_MapCacheSize + iVar3);
  *(undefined4 *)((int)&g_MapCacheId + iVar2) = *(undefined4 *)((int)&g_MapCacheId + iVar3);
  *(undefined4 *)((int)&g_MapCacheSize + iVar2) = uVar1;
  *(undefined4 *)((int)&g_MapCacheId + iVar3) = 0xffffffff;
  return;
}



//==== 000e2190  ns=map  size=0x110
// sig: int Map_GetFreeCacheSlotCompact(void)
// callers(1): 00142e38 pause::MapPage_Update
// callees(1): 005002cc fastfunc::FastMemCopy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_GetFreeCacheSlotCompact(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = 4 - iVar3;
    iVar1 = (int)((longlong)iVar2 << 2);
    if ((*(int *)((int)&g_MapCacheBuf + iVar1) != 0) && (*(int *)((int)&g_MapCacheId + iVar1) == -1)
       ) break;
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
      return -1;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = 1;
  do {
    if ((((&g_MapCacheId)[iVar3] & 0x1000U) == 0) && ((&g_MapCacheBuf)[iVar3] != 0)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  fastfunc::FastMemCopy(g_MapCacheBuf,(&g_MapCacheBuf)[iVar3],(&g_MapCacheSize)[iVar3] << 4);
  g_MapCacheId = (&g_MapCacheId)[iVar3];
  g_MapCacheSize = (&g_MapCacheSize)[iVar3];
  (&g_MapCacheId)[iVar3] = -1;
  return iVar3;
}



//==== 000e22a0  ns=map  size=0x54
// sig: int Map_FindCacheSlotById(int id)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_FindCacheSlotById(int id)

{
  int iVar1;
  
  iVar1 = 0;
  while (((&g_MapCacheBuf)[iVar1] == 0 || ((&g_MapCacheId)[iVar1] != id))) {
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}



//==== 000e22f4  ns=map  size=0x1b8
// sig: int Map_GetNextMapToPrefetch(void)
// callers(1): 00142e38 pause::MapPage_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_GetNextMapToPrefetch(void)

{
  int iVar1;
  longlong lVar2;
  int *piVar4;
  longlong lVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = ((uint)((LZCOUNT(-(uint)UnlockableItems.mapOMatic) << 0x3a) >> 0x3f) & 0xffffff00) + 0x100
  ;
  iVar5 = 0;
  iVar7 = g_SelectedLevel + iVar1;
  piVar8 = &g_MapCacheId;
  piVar4 = &g_MapCacheBuf;
  while ((*piVar4 == 0 || (*piVar8 != iVar7))) {
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar8 = piVar8 + 1;
    if (4 < iVar5) {
      return iVar7;
    }
  }
  if (iVar5 == -1) {
    return iVar7;
  }
  lVar2 = 0;
  if ((g_SelectedLevel < 0x14) && (lVar2 = 0, *(int *)ptr_GalacticMap != g_SelectedLevel)) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 4;
      lVar2 = lVar2 + 1;
    } while (*(int *)(ptr_GalacticMap + iVar5) != g_SelectedLevel);
  }
  lVar3 = 1;
  do {
    uVar6 = (uint)(lVar2 + lVar3);
    if ((uVar6 < 0x14) && (*(int *)(ptr_GalacticMap + uVar6 * 4) != 0)) {
      iVar7 = *(int *)(ptr_GalacticMap + uVar6 * 4) + iVar1;
      iVar5 = 0;
      piVar8 = &g_MapCacheId;
      piVar4 = &g_MapCacheBuf;
      do {
        if ((*piVar4 != 0) && (*piVar8 == iVar7)) goto LAB_000e245c;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar5 < 5);
      iVar5 = -1;
LAB_000e245c:
      if (iVar5 == -1) {
        return iVar7;
      }
    }
    lVar3 = (1 - lVar3) + (-(longlong)(int)lVar3 >> 0x3f & -(1 - lVar3) - lVar3);
    if ((int)lVar3 == 4) {
      return -1;
    }
  } while( true );
}



//==== 000e24ac  ns=map  size=0x4c
// sig: int Map_GetGalacticMapIndex(int level)
// callers(1): 00142e38 pause::MapPage_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_GetGalacticMapIndex(int level)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x13 < iVar1 || *(int *)(ptr_GalacticMap + iVar1 * 4) == 0) {
      return -1;
    }
    if (*(int *)(ptr_GalacticMap + iVar1 * 4) == level) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



//==== 000e24f8  ns=map  size=0x20c
// sig: int Map_ChooseCacheSlotToEvict(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_ChooseCacheSlotToEvict(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  lVar3 = 0;
  uVar2 = 0xffffffffffffffff;
  if (g_SelectedLevel == 0) {
    lVar5 = 4;
    do {
      iVar4 = (int)(lVar5 << 2);
      iVar6 = (int)lVar5;
      if ((iVar6 != DAT_00a207d0 && *(int *)((int)&g_MapCacheBuf + iVar4) != 0) &&
         (*(int *)((int)&g_MapCacheId + iVar4) == -1)) {
        return iVar6;
      }
      lVar5 = (longlong)(iVar6 + -1);
    } while (-1 < iVar6 + -1);
  }
  iVar6 = 0;
  for (iVar4 = 0; iVar4 < 0x14 && *(int *)(ptr_GalacticMap + iVar6) != 0; iVar4 = iVar4 + 1) {
    if (*(int *)(ptr_GalacticMap + iVar6) == g_SelectedLevel) goto LAB_000e25c8;
    iVar6 = iVar6 + 4;
  }
  iVar4 = -1;
LAB_000e25c8:
  if (iVar4 == -1) {
    iVar4 = 1;
  }
  else {
    uVar7 = 0;
    do {
      iVar6 = (int)((uVar7 & 0xffffffff) << 2);
      iVar8 = (int)uVar7;
      if (iVar8 != DAT_00a207d0 && *(int *)((int)&g_MapCacheBuf + iVar6) != 0) {
        uVar1 = *(uint *)((int)&g_MapCacheId + iVar6);
        if (uVar1 == 0xffffffff) {
          return iVar8;
        }
        iVar6 = 0;
        puVar9 = (uint *)ptr_GalacticMap;
        for (iVar10 = 0; iVar10 < 0x14 && *(int *)(ptr_GalacticMap + iVar6) != 0;
            iVar10 = iVar10 + 1) {
          if (*puVar9 == (uVar1 & 0xff)) goto LAB_000e266c;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + 4;
        }
        iVar10 = -1;
LAB_000e266c:
        lVar5 = (longlong)(iVar10 - iVar4);
        lVar5 = lVar5 + (lVar5 >> 0x3f & lVar5 * -2);
        if ((int)lVar3 < (int)lVar5) {
          uVar2 = uVar7;
          lVar3 = lVar5;
        }
      }
      uVar7 = (ulonglong)(iVar8 + 1);
    } while (iVar8 + 1 < 5);
    iVar4 = (int)(uVar2 + ((LZCOUNT(-1 - (int)uVar2) << 0x3a) >> 0x3f & -uVar2));
    (&g_MapCacheId)[iVar4] = -1;
  }
  return iVar4;
}



//==== 000e2704  ns=stub  size=0x4
// sig: undefined STUB_000e2704(void)
// callers(0): 
// callees(0): 

void stub::STUB_000e2704(void)

{
  return;
}



//==== 000e2708  ns=map  size=0xb4
// sig: void Map_MergeByMask(char * out, char * a, char * b, char * mask)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_MergeByMask(char *out,char *a,char *b,char *mask)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    iVar4 = 0;
    uVar3 = 1;
    do {
      if (((uint)(byte)*mask & (uint)uVar3) == 0) {
        cVar1 = *b;
      }
      else {
        cVar1 = *a;
      }
      iVar4 = iVar4 + 1;
      a = a + 1;
      *out = cVar1;
      b = b + 1;
      out = out + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (iVar4 < 8);
    iVar2 = iVar2 + 1;
    mask = (char *)((byte *)mask + 1);
  } while (iVar2 < 0x8000);
  return;
}



//==== 000e27bc  ns=map  size=0x78
// sig: void Map_ExpandRevealMask(char * out, char * mask)
// callers(1): 00142e38 pause::MapPage_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_ExpandRevealMask(char *out,char *mask)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar2 = 0;
  do {
    uVar4 = 1;
    lVar5 = 8;
    pcVar3 = out;
    do {
      uVar1 = (uint)uVar4;
      out = pcVar3 + 1;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      *pcVar3 = ((byte)((LZCOUNT(-((byte)*mask & uVar1)) << 0x3a) >> 0x3f) & 1) - 1;
      lVar5 = lVar5 + -1;
      pcVar3 = out;
    } while (lVar5 != 0);
    iVar2 = iVar2 + 1;
    mask = (char *)((byte *)mask + 1);
  } while (iVar2 < 0x8000);
  return;
}



//==== 000e2848  ns=map  size=0x2e0
// sig: int Map_UpdateZoomPan(void)
// callers(1): 00142e38 pause::MapPage_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int map::Map_UpdateZoomPan(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar1 = g_MapCurIndex;
  auVar9 = loadVectorLeftIndexed(8,0x964a40);
  auVar8 = loadVectorLeftIndexed(0xc,0x964a40);
  if ((g_buttonsPressedThisFrame & (R3|SELECT)) == 0) {
    if (g_MapAvailable == 0) {
      iVar6 = 0;
    }
    else if (g_MapCurIndex < 0) {
      iVar6 = 0;
    }
    else {
      (&g_MapZoom)[g_MapCurIndex] = (&g_MapZoom)[g_MapCurIndex] * -(ANALOG_STICKS.y * 0.02 - 1.0);
      iVar4 = g_MapCurIndex;
      uVar2 = (int)(&g_MapZoom)[iVar1] >> 0x1f;
      if (0x40800000 < (int)((uVar2 >> 1 ^ (uint)(&g_MapZoom)[iVar1]) - uVar2)) {
        (&g_MapZoom)[iVar1] = 4.0;
        iVar1 = iVar4;
      }
      iVar4 = g_MapCurIndex;
      uVar2 = (int)(&g_MapZoom)[iVar1] >> 0x1f;
      if ((int)((uVar2 >> 1 ^ (uint)(&g_MapZoom)[iVar1]) - uVar2) < 0x3f266666) {
        (&g_MapZoom)[iVar1] = 0.65;
        iVar1 = iVar4;
      }
      lVar5 = ZEXT48(&DAT_00a204c0) + (longlong)(iVar1 << 2);
      auVar11 = ZEXT416(0xffffffff);
      auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xb4,lVar5);
      auVar11 = loadVectorRightIndexed(0xc4,lVar5);
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = auVar10 | auVar11;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar12 = vectorReciprocalEstimateFloatingPoint(auVar10);
      auVar11 = loadVectorLeftIndexed(0xc,0xe2834);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar19 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar12,auVar10,auVar14);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
      auVar11 = ZEXT416(0xffffffff);
      auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = loadVectorLeftIndexed(8,0xe2834);
      auVar12 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar10,auVar14);
      lVar7 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar15);
      auVar11 = ZEXT416(0xffffffff);
      auVar18 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar10,auVar14);
      auVar14 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = loadVectorLeftIndexed(0x104,lVar5);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar16);
      auVar10 = loadVectorRightIndexed(0x114,lVar5);
      auVar13 = loadVectorLeftIndexed(0x154,lVar7);
      auVar16 = loadVectorRightIndexed(0x164,lVar7);
      auVar12 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar17);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar12,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar8,auVar12,auVar14);
      auVar8 = ZEXT416(0);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = ZEXT416((auVar18._0_4_ | auVar10._0_4_) + auVar12._0_4_) &
               (undefined1  [16])0xffffffff;
      auVar11 = ZEXT416((auVar13._0_4_ | auVar16._0_4_) + auVar11._0_4_) &
                (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x104,lVar5);
      *(undefined4 *)((int)lVar5 + 0x104) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x154,lVar7);
      *(undefined4 *)((int)lVar7 + 0x154) = uVar3;
      iVar4 = g_MapCurIndex;
      auVar9 = loadVectorLeftIndexed(0x10,0xe2834);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      lVar7 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      lVar5 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar11 = loadVectorLeftIndexed(0x104,lVar7);
      auVar12 = loadVectorRightIndexed(0x114,lVar7);
      auVar8 = vectorCompareGreaterThanSignedWord
                         (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                          auVar11 | auVar12);
      auVar8 = vectorLogicalAndWithComplement(auVar11 | auVar12,auVar8);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x104,lVar7);
      *(undefined4 *)((int)lVar7 + 0x104) = uVar3;
      auVar8 = loadVectorLeftIndexed(0x104,lVar5);
      auVar11 = loadVectorRightIndexed(0x114,lVar5);
      iVar1 = (&DAT_00a20614)[iVar4];
      auVar12 = vectorCompareGreaterThanSignedWord(auVar8 | auVar11,auVar9);
      auVar8 = vectorConditionalSelect(auVar8 | auVar11,auVar9,auVar12);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x104,lVar5);
      *(undefined4 *)((int)lVar5 + 0x104) = uVar3;
      (&DAT_00a20614)[iVar4] = iVar1 + (iVar1 >> 0x1f & -iVar1);
      iVar1 = (&DAT_00a20614)[iVar4];
      iVar6 = 0;
      (&DAT_00a20614)[iVar4] =
           iVar1 + ((uint)(0x10000000 - (longlong)iVar1 >> 0x3f) & 0x10000000U - iVar1);
    }
  }
  else {
    iVar6 = 1;
  }
  return iVar6;
}



//==== 000e2b38  ns=map  size=0xfc
// sig: void Map_WorldToMapCoords(float x, float y, int unused0, int unused1, float * outU, float * outV, int level)
// callers(3): 000e2e10 map::DrawMapFrame; 000e4928 map::Map_RevealAroundPos; 000ea958 mission::UpdateMissionDisplay
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_WorldToMapCoords
               (float x,float y,int unused0,int unused1,float *outU,float *outV,int level)

{
  LevelId LVar1;
  int iVar2;
  
  LVar1 = level + -100 + ((uint)((longlong)level + -100 >> 0x3f) & level - (level + -100));
  if (LVar1 == ~Veldin) {
    LVar1 = Level;
  }
  iVar2 = LVar1 + ((int)LVar1 >> 0x1f & -LVar1);
  iVar2 = iVar2 + ((uint)(0x12 - (longlong)iVar2 >> 0x3f) & -iVar2);
  if ((iVar2 == 6) && (99 < level)) {
    *outU = (fRam00724dbc * y + 1053.0) * 0.001953125;
    *outV = -(fRam00724db4 * x - 740.0) * 0.001953125;
  }
  else {
    *outU = ((float)(&DAT_00724d54)[iVar2 * 4] * x + (&g_MapWorldToMap)[iVar2 * 4]) * 0.001953125;
    *outV = ((float)(&DAT_00724d5c)[iVar2 * 4] * y + (float)(&DAT_00724d58)[iVar2 * 4]) *
            0.001953125;
  }
  return;
}



//==== 000e2c34  ns=map  size=0x194
// sig: void Map_GetIconLabel(int icon, char * out)
// callers(2): 000e2e10 map::DrawMapFrame; 000ea958 mission::UpdateMissionDisplay
// callees(2): 0007b740 help::help_msg_string_by_index; 005cd2a8 libc::snprintf
// strings: 00652964: 'error'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_GetIconLabel(int icon,char *out)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_40 [16];
  
  iVar3 = (int)((longlong)icon << 5) + (int)((longlong)icon << 3);
  pcVar5 = (char *)help::help_msg_string_by_index((int)*(short *)(g_MapIcons + iVar3 + 10));
  if (pcVar5 != (char *)0x0) {
    while( true ) {
      cVar2 = *pcVar5;
      if (cVar2 == '%' || cVar2 == '\0') break;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *out = cVar2;
      out = out + 1;
    }
    if (cVar2 == '\0') {
      *out = '\0';
    }
    else {
      if (pcVar5[1] == 'b') {
        libc::snprintf(local_40,"%d",
                       (ulonglong)
                       *(uint *)(&DAT_00737d30 +
                                (int)((longlong)*(short *)(g_MapIcons + iVar3 + 0xc) << 3) * 3));
      }
      else {
        libc::snprintf(local_40,"error");
      }
      bVar1 = local_40[0] != '\0';
      pcVar4 = local_40;
      while (bVar1) {
        *out = *pcVar4;
        out = out + 1;
        bVar1 = pcVar4[1] != '\0';
        pcVar4 = pcVar4 + 1;
      }
      cVar2 = pcVar5[2];
      pcVar5 = pcVar5 + 2;
      while (cVar2 != '\0') {
        *out = *pcVar5;
        out = out + 1;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      *out = '\0';
    }
  }
  return;
}



//==== 000e2e10  ns=map  size=0x1838
// sig: undefined DrawMapFrame(void)
// callers(1): 00147630 pause::MapPage_Draw
// callees(22): 00060c64 debug::DebugFontPrintCenter; 0006a718 draw::DrawRoundedRect; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007100c draw::FontPrintOpt; 000ca3bc hud::Hud_DrawTexQuad_v2_Fixed; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000ccf78 hud::DrawFlatOverlay_Fixed; 000d6bf8 hud::Hud_GetTexIndex; 000d6f5c hud::Hud_DrawTexQuadF; 000d8328 hud::Hud_DrawTexQuadF_v4_Fixed; 000e2b38 map::Map_WorldToMapCoords; 000e2c34 map::Map_GetIconLabel; 00174f80 vuchain::SetGSReg; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs; 004d82b8 idol_draw::BindFragmentProgram; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502f74 stub::FUN_00502f74_RET_0; 00502f7c idol_draw::Blend
// strings: 0065296c: 'No Map Available' | 0096c074: 'None'

void map::DrawMapFrame(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  RsxCmd *pRVar12;
  RsxCmd *pRVar13;
  RsxCmd *pRVar14;
  RsxCmd *pRVar15;
  RsxCmd *pRVar16;
  RsxCmd *pRVar17;
  RsxCmd *pRVar18;
  ulonglong *puVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  RenderingStep *pRVar23;
  longlong lVar24;
  undefined4 *puVar25;
  int iVar30;
  longlong lVar26;
  undefined4 *puVar31;
  undefined8 uVar27;
  uint uVar32;
  uint uVar33;
  longlong lVar28;
  undefined8 uVar29;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  ulonglong unaff_r14;
  int iVar43;
  ulonglong unaff_r15;
  longlong lVar44;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong uVar45;
  int iVar47;
  ulonglong uVar46;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar48;
  int iVar49;
  ulonglong unaff_r23;
  int iVar50;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int *piVar51;
  ulonglong unaff_r29;
  longlong lVar52;
  ulonglong unaff_r30;
  int iVar53;
  ulonglong unaff_r31;
  float *pfVar54;
  ulonglong in_LR;
  double dVar55;
  double extraout_f1;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar61;
  ulonglong in_f23;
  double dVar62;
  ulonglong in_f24;
  double dVar63;
  ulonglong in_f25;
  double dVar64;
  ulonglong in_f26;
  double dVar65;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar66;
  ulonglong in_f29;
  double dVar67;
  ulonglong in_f30;
  double dVar68;
  double dVar69;
  ulonglong in_f31;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 in_vr26_64_1;
  undefined1 auVar88 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar89 [16];
  
  uVar46 = ZEXT48(&stack0x00000000);
  lVar34 = uVar46 - 0x350;
  puVar19 = (ulonglong *)lVar34;
  *puVar19 = uVar46;
  puVar19[0x6c] = in_LR;
  puVar19[0x5e] = in_f20;
  puVar19[0x5f] = in_f21;
  puVar19[0x60] = in_f22;
  puVar19[0x61] = in_f23;
  puVar19[0x62] = in_f24;
  puVar19[99] = in_f25;
  puVar19[100] = in_f26;
  puVar19[0x65] = in_f27;
  puVar19[0x66] = in_f28;
  puVar19[0x67] = in_f29;
  puVar19[0x68] = in_f30;
  puVar19[0x69] = in_f31;
  puVar19[0x51] = unaff_r19;
  lVar24 = uVar46 - 0x100;
  puVar25 = (undefined4 *)lVar24;
  puVar25[3] = in_vr31_32_3;
  puVar25[2] = in_vr31_32_2;
  puVar25[1] = in_vr31_32_1;
  *puVar25 = in_vr31_32_0;
  puVar19[0x4e] = unaff_r16;
  iVar30 = g_MapAvailable;
  puVar25 = &DAT_00a204c0;
  puVar19[0x5d] = unaff_r31;
  puVar19[0x5c] = unaff_r30;
  puVar19[0x5b] = unaff_r29;
  puVar19[0x5a] = unaff_r28;
  puVar19[0x59] = unaff_r27;
  puVar19[0x58] = unaff_r26;
  puVar19[0x57] = unaff_r25;
  puVar19[0x56] = unaff_r24;
  puVar19[0x55] = unaff_r23;
  puVar19[0x54] = unaff_r22;
  puVar19[0x53] = unaff_r21;
  puVar19[0x52] = unaff_r20;
  puVar19[0x50] = unaff_r18;
  puVar19[0x4f] = unaff_r17;
  puVar19[0x4d] = unaff_r15;
  puVar19[0x4c] = unaff_r14;
  if (iVar30 == 0) {
    stub::STUB_0006d704(0);
    iVar30 = debug::DebugFontPrintCenter
                       (0x100,(int)draw::g_FrameBufHeight >> 1,-0x7f6f6f70,"No Map Available");
    stub::STUB_0006d708(iVar30);
  }
  else if (-1 < g_MapCurIndex) {
    stub::STUB_0006d704(0);
    iVar43 = g_MapCurIndex;
    lVar26 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
    auVar83 = ZEXT416(0);
    auVar85 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = ZEXT416(0xffffffff);
    auVar72 = ZEXT416(1);
    iVar30 = (int)lVar26;
    puVar19[0x2f] = (longlong)(*(int *)(iVar30 + 0x104) >> 0xf);
    fVar2 = *(float *)(iVar30 + 0xb4);
    iVar30 = *(int *)(iVar30 + 0x154);
    auVar71 = loadVectorLeftIndexed(0x104,lVar26);
    auVar73 = loadVectorRightIndexed(0x114,lVar26);
    auVar76 = loadVectorLeftIndexed(0x154,lVar26);
    auVar79 = loadVectorRightIndexed(0x164,lVar26);
    auVar74 = ZEXT416(0xf);
    auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
    auVar80 = loadVectorLeftIndexed(0xb4,lVar26);
    auVar82 = loadVectorRightIndexed(0xc4,lVar26);
    auVar71 = vectorShiftRightAlgebraicWord(auVar71 | auVar73,auVar74);
    auVar73 = vectorShiftRightAlgebraicWord(auVar76 | auVar79,auVar74);
    auVar80 = auVar80 | auVar82;
    auVar74 = ZEXT416(0xfffffff8);
    auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
    auVar76 = loadVectorLeftIndexed(4,0x96c074);
    auVar76 = vectorShiftRightWord
                        (auVar76,auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
    auVar74 = ZEXT416(0xffffffff);
    auVar79 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
    auVar74 = vectorCompareEqualToUnsignedWord(auVar76,auVar85);
    auVar79 = vectorShiftLeftIntegerWord(auVar79,auVar79);
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
    auVar76 = vectorConditionalSelect
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                         auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,auVar74);
    auVar72 = vectorMultiplyAddFloatingPoint(auVar80,auVar71,auVar79);
    auVar83 = ZEXT416(0xffffffff);
    auVar83 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar74 = vectorShiftLeftIntegerWord(auVar83,auVar83);
    auVar72 = vectorConvertToSignedFixedPointWordSaturate(auVar72,0);
    puVar19[0x2f] = (longlong)(int)(fVar2 * (float)(longlong)puVar19[0x2f]);
    auVar83 = loadVectorLeftIndexed(4,0xe2dc8);
    auVar83 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar32 = (uint)(byte)Cheats[4];
    auVar74 = vectorMultiplyAddFloatingPoint
                        (auVar80,auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                         auVar74);
    auVar83 = ZEXT416(0xfffffff0);
    auVar82 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar79 = vectorRotateLeftIntegerWord(auVar76,auVar82);
    auVar88 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    puVar19[0x2f] = (longlong)(int)(fVar2 * 8192.0);
    auVar86 = loadVectorLeftIndexed(8,0xe2dc8);
    puVar19[0x2f] = (longlong)(iVar30 >> 0xf);
    puVar19[0x2b] = 1;
    puVar19[0x2e] = ZEXT48(Cheats);
    auVar83 = loadVectorLeftIndexed(lVar24,0xe2dc8);
    auVar83 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar87 = vectorMultiplyOddUnsignedHalfWord(auVar72,auVar76);
    iVar30 = ((uint)((LZCOUNT(-uVar32) << 0x3a) >> 0x3f) & 2) - 1;
    auVar72 = vectorMultiplySumSignedHalfWordModulo(auVar72,auVar79,auVar85);
    auVar71 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar74 = vectorShiftLeftIntegerWord(auVar72,auVar82);
    lVar26 = 0x1000 - (longlong)*(int *)((int)puVar19 + 0x17c) * (longlong)iVar30;
    auVar85 = vectorMultiplySumSignedHalfWordModulo(auVar88,auVar79,auVar85);
    auVar79 = vectorMultiplyOddUnsignedHalfWord(auVar88,auVar76);
    auVar76 = vectorMultiplyAddFloatingPoint(auVar80,auVar73,auVar71);
    auVar72 = auVar86 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar73._0_4_ = auVar74._0_4_ + auVar87._0_4_;
    auVar73._8_8_ = auVar74._8_8_;
    auVar73._4_4_ = auVar74._4_4_ + auVar87._4_4_;
    auVar71._0_8_ = auVar73._0_8_;
    auVar71._12_4_ = auVar74._12_4_;
    auVar71._8_4_ = auVar74._8_4_ + auVar87._8_4_;
    auVar74._0_12_ = auVar71._0_12_;
    auVar74._12_4_ = auVar71._12_4_ + auVar87._12_4_;
    auVar89 = vectorSubtractUnsignedWordModulo
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,auVar74);
    auVar83 = vectorShiftLeftIntegerWord(auVar85,auVar82);
    uVar45 = lVar26 + (longlong)(int)*(uint *)((int)puVar19 + 0x17c) * (longlong)iVar30;
    auVar82._0_4_ = auVar83._0_4_ + auVar79._0_4_;
    auVar82._4_4_ = auVar83._4_4_ + auVar79._4_4_;
    auVar82._8_8_ = in_vr26_64_1;
    auVar80._0_8_ = auVar82._0_8_;
    auVar80._8_4_ = auVar83._8_4_ + auVar79._8_4_;
    auVar80._12_4_ = auVar83._12_4_ + auVar79._12_4_;
    auVar83 = vectorConvertToSignedFixedPointWordSaturate(auVar76,0);
    auVar79._0_4_ = auVar89._0_4_ + auVar82._0_4_;
    auVar79._8_8_ = auVar80._8_8_;
    auVar79._4_4_ = auVar89._4_4_ + auVar82._4_4_;
    auVar76._0_8_ = auVar79._0_8_;
    auVar76._8_4_ = auVar89._8_4_ + auVar80._8_4_;
    auVar76._12_4_ = auVar80._12_4_;
    auVar85._0_12_ = auVar76._0_12_;
    auVar85._12_4_ = auVar89._12_4_ + auVar80._12_4_;
    auVar87 = vectorSubtractUnsignedWordModulo
                        (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,auVar83);
    puVar19[0x2f] = (longlong)(int)(fVar2 * (float)(longlong)puVar19[0x2f]);
    auVar83._0_4_ = auVar87._0_4_ + auVar88._0_4_;
    auVar83._8_8_ = auVar88._8_8_;
    auVar83._4_4_ = auVar87._4_4_ + auVar88._4_4_;
    auVar72._0_8_ = auVar83._0_8_;
    auVar72._12_4_ = auVar88._12_4_;
    auVar72._8_4_ = auVar87._8_4_ + auVar88._8_4_;
    auVar86._0_12_ = auVar72._0_12_;
    auVar86._12_4_ = auVar87._12_4_ + auVar72._12_4_;
    lVar44 = 0x800 - (ulonglong)*(uint *)((int)puVar19 + 0x17c);
    uVar48 = lVar44 + (ulonglong)*(uint *)((int)puVar19 + 0x17c);
    lVar24 = hud::GetIconFrameTex(0xe999,iVar43);
    iVar30 = TexturePointerArray;
    uVar32 = EffectTexHeaders;
    iVar43 = (int)lVar26;
    puVar19[0x2f] = (longlong)iVar43;
    puVar31 = (undefined4 *)(uVar32 + *(int *)(iVar30 + (int)(lVar24 << 2)) * 0x24);
    uVar9 = puVar31[1];
    uVar10 = puVar31[2];
    uVar11 = puVar31[3];
    *(undefined4 *)(puVar19 + 0x13) = *puVar31;
    *(undefined4 *)((int)puVar19 + 0x9c) = uVar9;
    *(undefined4 *)(puVar19 + 0x14) = uVar10;
    *(undefined4 *)((int)puVar19 + 0xa4) = uVar11;
    uVar9 = puVar31[5];
    uVar10 = puVar31[6];
    uVar11 = puVar31[7];
    *(undefined4 *)(puVar19 + 0x15) = puVar31[4];
    *(undefined4 *)((int)puVar19 + 0xac) = uVar9;
    *(undefined4 *)(puVar19 + 0x16) = uVar10;
    *(undefined4 *)((int)puVar19 + 0xb4) = uVar11;
    *(undefined4 *)(puVar19 + 0x17) = puVar31[8];
    *(undefined4 *)(puVar19 + 0x14) = 0x10101;
    iVar35 = (int)lVar44;
    auVar72 = loadVectorLeftIndexed(0xc,0xe2dc8);
    dVar65 = (double)(longlong)puVar19[0x2f];
    auVar83 = ZEXT416(0xffffffff);
    auVar76 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar85,0);
    puVar19[0x2f] = (longlong)(int)(dVar65 * 0.0625);
    puVar19[0x2f] = (longlong)iVar35;
    auVar88 = vectorConvertFromSignedFixedPointWord(auVar89,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar82 = vectorConvertFromSignedFixedPointWord(auVar87,0);
    auVar83 = auVar72 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar72 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar80 = vectorConvertFromSignedFixedPointWord(auVar86,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar71 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar76 = vectorShiftLeftIntegerWord(auVar76,auVar76);
    auVar83 = ZEXT416(0xffffffff);
    auVar79 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar71 = vectorShiftLeftIntegerWord(auVar71,auVar71);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar73,auVar72,auVar76);
    dVar64 = (double)(longlong)puVar19[0x2f];
    auVar76 = vectorShiftLeftIntegerWord(auVar79,auVar79);
    auVar74 = vectorMultiplyAddFloatingPoint(auVar88,auVar72,auVar83);
    auVar71 = vectorMultiplyAddFloatingPoint(auVar82,auVar72,auVar71);
    auVar83 = vectorMultiplyAddFloatingPoint(auVar80,auVar72,auVar76);
    auVar72 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
    puVar19[0x2f] = (longlong)(int)(dVar64 * 0.0625);
    puVar19[0x2f] = (longlong)(int)uVar45;
    auVar73 = vectorConvertToSignedFixedPointWordSaturate(auVar73,0);
    auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
    auVar83 = vectorConvertToSignedFixedPointWordSaturate(auVar83,0);
    auVar72 = vectorConvertFromSignedFixedPointWord(auVar72,0);
    uVar56 = puVar19[0x2f];
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
    auVar74 = vectorConvertFromSignedFixedPointWord(auVar74,0);
    auVar71 = vectorConvertFromSignedFixedPointWord(auVar83,0);
    puVar19[0x2f] = (longlong)(int)((double)(longlong)uVar56 * 0.0625);
    puVar19[0x2f] = (longlong)(int)uVar48;
    uVar57 = puVar19[0x2f];
    puVar19[0x2f] = (longlong)(int)((double)(longlong)uVar57 * 0.0625);
    puVar19[0x2f] = (longlong)(*(int *)((int)puVar19 + 0x17c) - *(int *)((int)puVar19 + 0x17c));
    uVar58 = puVar19[0x2f];
    puVar19[0x2f] = (longlong)(*(int *)((int)puVar19 + 0x17c) - *(int *)((int)puVar19 + 0x17c));
    uVar59 = puVar19[0x2f];
    puVar19[0x2f] = 0;
    uVar60 = puVar19[0x2f];
    puVar19[0x2f] = 0x400;
    puVar19[0xf] = 0x80;
    hud::Hud_DrawTexQuadF
              ((double)(longlong)((float)(longlong)(dVar65 * 0.0625) - (float)(longlong)uVar58),
               (double)(longlong)((float)(longlong)(dVar64 * 0.0625) - (float)(longlong)uVar59),
               (double)(longlong)
                       ((float)(longlong)((double)(longlong)uVar56 * 0.0625) +
                       (float)(longlong)uVar58),
               (double)(longlong)
                       ((float)(longlong)((double)(longlong)uVar57 * 0.0625) +
                       (float)(longlong)uVar59),(double)(longlong)((float)(longlong)uVar60 - 1024.0)
               ,(double)(longlong)((float)(longlong)uVar60 - 1024.0),
               (double)(longlong)((float)(longlong)puVar19[0x2f] + 1024.0),
               (double)(longlong)((float)(longlong)puVar19[0x2f] + 1024.0),uVar46 - 0x2b8);
    uVar10 = DAT_00902e9c;
    iVar30 = loaders::g_NpcBuffer + *(int *)(loaders::g_NpcBuffer + 8);
    idol_draw::BindFragmentProgram(DAT_00902e9c,HUD_Pass,0xe);
    idol_draw::SetTextureUnitRegs(HUD_Pass,0,&DAT_00a207e8);
    idol_draw::SetTextureUnitRegs(HUD_Pass,1,iVar30 + 0x6c);
    idol_draw::SetTextureUnitRegs(HUD_Pass,2,iVar30 + 0x90);
    idol_draw::ResetPassState(HUD_Pass);
    auVar83 = auVar72 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar72 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    pRVar12 = HUD_Pass->command;
    auVar83 = auVar71 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar71 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    HUD_Pass->command = pRVar12 + 2;
    pRVar13 = HUD_Pass->command;
    HUD_Pass->command = pRVar13 + 6;
    pRVar14 = HUD_Pass->command;
    HUD_Pass->command = pRVar14 + 3;
    pRVar23 = HUD_Pass;
    pRVar14[1] = 0;
    pRVar14[2] = 0;
    pRVar15 = pRVar23->command;
    uVar9 = storeVectorElementWordIndexed(auVar72,4,ZEXT48(pRVar15));
    *(undefined4 *)((uint)(pRVar15 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar74,8,ZEXT48(pRVar15));
    *(undefined4 *)((uint)(pRVar15 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar15 + 3;
    pRVar16 = HUD_Pass->command;
    HUD_Pass->command = pRVar16 + 3;
    pRVar23 = HUD_Pass;
    pRVar16[1] = 0;
    pRVar16[2] = 0x44800000;
    pRVar17 = pRVar23->command;
    uVar9 = storeVectorElementWordIndexed(auVar72,4,ZEXT48(pRVar17));
    *(undefined4 *)((uint)(pRVar17 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar71,8,ZEXT48(pRVar17));
    *(undefined4 *)((uint)(pRVar17 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar17 + 3;
    pRVar23 = HUD_Pass;
    auVar83 = auVar73 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar83 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    pRVar18 = HUD_Pass->command;
    *pRVar12 = 0x41948;
    pRVar12[1] = 0x80808080;
    pRVar23->command = pRVar18 + 3;
    pRVar23 = HUD_Pass;
    pRVar18[1] = 0x44800000;
    pRVar18[2] = 0x44800000;
    *pRVar13 = 0x400c1714;
    pRVar13[1] = 0;
    pRVar13[2] = 0;
    pRVar13[3] = 0;
    pRVar13[4] = NV4097_SET_BEGIN_END_x1;
    pRVar12 = pRVar23->command;
    pRVar13[5] = 8;
    *pRVar14 = 0x81888;
    *pRVar15 = NV4097_SET_VERTEX_DATA2F_M_x2;
    uVar9 = storeVectorElementWordIndexed(auVar83,4,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar71,8,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar12 + 3;
    pRVar23 = HUD_Pass;
    *pRVar16 = 0x81888;
    *pRVar17 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13 = pRVar23->command;
    *pRVar18 = 0x81888;
    *pRVar12 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar23->command = pRVar13 + 3;
    pRVar23 = HUD_Pass;
    pRVar13[1] = 0x44800000;
    pRVar13[2] = 0;
    pRVar12 = pRVar23->command;
    *pRVar13 = 0x81888;
    uVar9 = storeVectorElementWordIndexed(auVar83,4,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar74,8,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar12 + 3;
    pRVar23 = HUD_Pass;
    *pRVar12 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar12 = pRVar23->command;
    *pRVar12 = NV4097_SET_BEGIN_END_x1;
    pRVar23->command = pRVar12 + 2;
    pRVar23 = HUD_Pass;
    pRVar12[1] = 0;
    idol_draw::BindFragmentProgram(uVar10,pRVar23,0xc);
    uVar27 = idol_draw::Blend(1,5,0x60,3,0,0,0,0);
    vuchain::SetGSReg(0x16,uVar27);
    if ((DAT_00a204ec != 0) && (DAT_00a204c8 != 0)) {
      iVar39 = 0;
      piVar51 = &DAT_00a204f0;
      iVar53 = (int)uVar45 - iVar43;
      iVar30 = (int)uVar48 - iVar35;
      do {
        if (-1 < *piVar51) {
          puVar19[0x31] = uVar45;
          uVar32 = puVar25[0xc];
          uVar42 = (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * iVar30;
          uVar32 = (uVar32 + (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) *
                             -0x10) * iVar53;
          uVar33 = uVar32 + iVar53;
          uVar36 = uVar42 + iVar30;
          uVar27 = stub::FUN_00502f74_RET_0(0,0,0,0x20,0);
          hud::DrawFlatOverlay
                    (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0) + iVar43,
                     ((int)uVar42 >> 4) + (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0) + iVar35,
                     ((int)uVar33 >> 4) + (uint)((int)uVar33 < 0 && (uVar33 & 0xf) != 0) + iVar43,
                     ((int)uVar36 >> 4) + (uint)((int)uVar36 < 0 && (uVar36 & 0xf) != 0) + iVar35,
                     uVar27,1);
          uVar45 = puVar19[0x31];
        }
        iVar39 = iVar39 + 1;
        piVar51 = piVar51 + 4;
        puVar25 = puVar25 + 4;
      } while (iVar39 < 8);
    }
    iVar30 = g_MapIcons;
    puVar19[0x2d] = uVar45;
    puVar19[0x2c] = uVar48;
    uVar32 = DAT_00902ec8;
    if (iVar30 != 0) {
      auVar83 = loadVectorLeftIndexed(0x14,0xe2dc8);
      lVar24 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar74 = loadVectorLeftIndexed(0x18,0xe2dc8);
      auVar72 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar71 = loadVectorLeftIndexed(0xb4,lVar24);
      auVar73 = loadVectorRightIndexed(0xc4,lVar24);
      dVar55 = (double)(*(float *)((int)lVar24 + 0xb4) * 2.0 + 5.0);
      auVar83 = ZEXT416(0xffffffff);
      auVar76 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
      auVar74 = vectorMultiplyAddFloatingPoint
                          (auVar71 | auVar73,
                           auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,
                           auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
      auVar83 = loadVectorLeftIndexed(0x1c,0xe2dc8);
      auVar83 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar72 = vectorShiftLeftIntegerWord(auVar76,auVar76);
      uVar56 = (ulonglong)DAT_00902ec8;
      dVar70 = (double)(float)(dVar55 * 0.07692307978868484);
      auVar83 = vectorMultiplyAddFloatingPoint
                          (auVar74,auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                           auVar72);
      if ((*(ushort *)(iVar30 + 4) & 4) == 0) {
        auVar71 = vectorSubtractUnsignedWordModulo(auVar85,auVar89);
        auVar73 = vectorSubtractUnsignedWordModulo(auVar86,auVar87);
        iVar53 = 0;
        lVar24 = uVar56 + 8;
        auVar72 = loadVectorLeftIndexed(0x20,0xe2dc8);
        lVar26 = uVar56 + 4;
        auVar74 = loadVectorLeftIndexed(0x24,0xe2dc8);
        lVar52 = uVar56 + 0xc;
        auVar76 = vectorConvertFromSignedFixedPointWord(auVar71,0);
        auVar72 = auVar72 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar71 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
        auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
        auVar72 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar72 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
        uVar57 = uVar56;
        do {
          iVar39 = iVar30 + iVar53;
          if (((*(int *)(iVar39 + 0x24) != 0) && (*(short *)(iVar39 + 6) != 0)) &&
             ((*(ushort *)(iVar39 + 4) & 1) == 0)) {
            auVar74 = loadVectorLeftIndexed(0x28,0xe2dc8);
            auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            if ((*(ushort *)(iVar39 + 4) & 0x80) != 0) {
              auVar74 = loadVectorLeftIndexed(0x2c,0xe2dc8);
              auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
            lVar28 = hud::GetIconFrameTex(dVar55,*(short *)(iVar39 + 6),*(undefined2 *)(iVar39 + 8))
            ;
            iVar30 = g_MapIcons;
            uVar58 = (ulonglong)EffectTexHeaders +
                     (ulonglong)*(uint *)(TexturePointerArray + (int)(lVar28 << 2)) * 0x24 &
                     0xffffffff;
            uVar59 = (ulonglong)(uint)(g_MapIcons + iVar53);
            auVar80 = loadVectorLeftIndexed(0x18,uVar58);
            auVar79 = loadVectorRightIndexed(0x28,uVar58);
            auVar77 = loadVectorLeftIndexed(0x18,uVar59);
            auVar75 = loadVectorRightIndexed(0x28,uVar59);
            auVar81 = loadVectorLeftIndexed(0x1c,uVar59);
            auVar84 = loadVectorRightIndexed(0x2c,uVar59);
            auVar78 = vectorLogicalAnd(auVar80 | auVar79,auVar71);
            auVar79 = vectorShiftRightWord(auVar80 | auVar79,auVar72);
            auVar75 = vectorMultiplyAddFloatingPoint(auVar77 | auVar75,auVar76,auVar88);
            auVar77 = vectorMultiplyAddFloatingPoint(auVar81 | auVar84,auVar73,auVar82);
            auVar80 = auVar83;
            if ((*(ushort *)(g_MapIcons + iVar53 + 4) & 0x200) != 0) {
              lVar28 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
              auVar80 = loadVectorLeftIndexed(0xb4,lVar28);
              auVar81 = loadVectorRightIndexed(0xc4,lVar28);
              auVar80 = auVar80 | auVar81;
            }
            auVar81 = ZEXT416(0xffffffff);
            auVar81 = auVar81 | auVar81 << 0x20 | auVar81 << 0x40 | auVar81 << 0x60;
            auVar80 = auVar80 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar79 = vectorConvertFromUnsignedFixedPointWord(auVar79,0);
            auVar78 = vectorConvertFromUnsignedFixedPointWord(auVar78,0);
            auVar81 = vectorShiftLeftIntegerWord(auVar81,auVar81);
            auVar81 = vectorMultiplyAddFloatingPoint
                                (auVar80 | auVar80 << 0x20 | auVar80 << 0x40 | auVar80 << 0x60,
                                 auVar74,auVar81);
            auVar74 = vectorNegativeMultiplySubtractFloatingPoint(auVar81,auVar79,auVar75);
            auVar80 = vectorNegativeMultiplySubtractFloatingPoint(auVar81,auVar78,auVar77);
            auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
            auVar80 = vectorConvertToSignedFixedPointWordSaturate(auVar80,0);
            auVar75 = vectorConvertFromSignedFixedPointWord(auVar74,0);
            auVar77 = vectorConvertFromSignedFixedPointWord(auVar80,0);
            auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar80 = auVar80 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,0,
                               uVar57);
            *(undefined4 *)((uint)uVar57 & 0xfffffffc) = uVar9;
            auVar74 = vectorMultiplyAddFloatingPoint(auVar81,auVar79,auVar75);
            auVar79 = vectorMultiplyAddFloatingPoint(auVar81,auVar78,auVar77);
            auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
            auVar79 = vectorConvertToSignedFixedPointWordSaturate(auVar79,0);
            auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar79 = auVar79 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,0,
                               lVar24);
            *(undefined4 *)((uint)lVar24 & 0xfffffffc) = uVar9;
            uVar9 = storeVectorElementWordIndexed
                              (auVar80 | auVar80 << 0x20 | auVar80 << 0x40 | auVar80 << 0x60,0,
                               lVar26);
            *(undefined4 *)((uint)lVar26 & 0xfffffffc) = uVar9;
            uVar9 = storeVectorElementWordIndexed
                              (auVar79 | auVar79 << 0x20 | auVar79 << 0x40 | auVar79 << 0x60,0,
                               lVar52);
            *(undefined4 *)((uint)lVar52 & 0xfffffffc) = uVar9;
            dVar55 = extraout_f1;
          }
          iVar53 = iVar53 + 0x28;
          lVar24 = lVar24 + 0x10;
          lVar26 = lVar26 + 0x10;
          lVar52 = lVar52 + 0x10;
          uVar57 = uVar57 + 0x10;
        } while ((*(ushort *)(iVar30 + iVar53 + 4) & 4) == 0);
      }
      uVar4 = *(ushort *)(iVar30 + 0x2c);
      puVar19[0x2d] = uVar45;
      puVar19[0x2c] = uVar48;
      iVar53 = iVar30;
      if ((uVar4 & 4) == 0) {
        iVar49 = 0;
        iVar47 = 0;
        iVar39 = iVar30;
        do {
          iVar38 = iVar53 + iVar47;
          if (((*(int *)(iVar38 + 0x24) != 0) && (*(short *)(iVar38 + 6) != 0)) &&
             (((*(ushort *)(iVar38 + 4) & 3) == 0 &&
              (iVar38 = iVar47 + 0x28, (*(ushort *)(iVar53 + iVar38 + 4) & 4) == 0)))) {
            piVar51 = (int *)(iVar49 + uVar32 + 8);
            piVar21 = (int *)(iVar49 + uVar32 + 4);
            piVar22 = (int *)(iVar49 + uVar32 + 0xc);
            uVar45 = uVar56;
            iVar50 = iVar49;
            iVar30 = iVar39;
            do {
              iVar50 = iVar50 + 0x10;
              iVar39 = *(int *)((int)(uVar45 + 0x10) + 8) - *(int *)(uVar32 + iVar49);
              if (0 < iVar39) {
                iVar41 = *piVar51 - *(int *)(uVar32 + iVar50);
                if (0 < iVar41) {
                  iVar20 = (int)uVar45;
                  iVar37 = *(int *)(iVar20 + 0x1c) - *piVar21;
                  if (0 < iVar37) {
                    iVar40 = *piVar22 - *(int *)(iVar20 + 0x14);
                    if (((0 < iVar40) && (*(int *)(iVar53 + iVar38 + 0x24) != 0)) &&
                       ((*(short *)(iVar53 + iVar38 + 6) != 0 &&
                        ((*(ushort *)(iVar53 + iVar38 + 4) & 3) == 0)))) {
                      if (((iVar41 < iVar39) || (iVar37 < iVar39)) || (iVar40 < iVar39)) {
                        if ((iVar37 < iVar41) || (iVar40 < iVar41)) {
                          if (iVar40 < iVar37) {
                            iVar37 = iVar40 >> 1;
                            iVar39 = 0;
                            iVar40 = iVar37 - iVar40;
                            iVar41 = 0;
                          }
                          else {
                            iVar40 = iVar37 >> 1;
                            iVar37 = iVar40 - iVar37;
                            iVar39 = 0;
                            iVar41 = 0;
                          }
                        }
                        else {
                          iVar39 = iVar41 >> 1;
                          iVar37 = 0;
                          iVar41 = iVar39 - iVar41;
                          iVar40 = 0;
                        }
                      }
                      else {
                        iVar41 = iVar39 >> 1;
                        iVar37 = 0;
                        iVar39 = iVar41 - iVar39;
                        iVar40 = 0;
                      }
                      *(int *)(uVar32 + iVar49) = *(int *)(uVar32 + iVar49) + iVar41;
                      *piVar51 = *piVar51 + iVar41;
                      *piVar21 = *piVar21 + iVar40;
                      *piVar22 = *piVar22 + iVar40;
                      iVar30 = g_MapIcons;
                      *(int *)(uVar32 + iVar50) = *(int *)(uVar32 + iVar50) + iVar39;
                      *(int *)(iVar20 + 0x18) = *(int *)(iVar20 + 0x18) + iVar39;
                      *(int *)(iVar20 + 0x14) = *(int *)(iVar20 + 0x14) + iVar37;
                      *(int *)(iVar20 + 0x1c) = *(int *)(iVar20 + 0x1c) + iVar37;
                    }
                  }
                }
              }
              iVar38 = iVar38 + 0x28;
              uVar45 = uVar45 + 0x10;
              iVar53 = iVar30;
              iVar39 = iVar30;
            } while ((*(ushort *)(iVar30 + iVar38 + 4) & 4) == 0);
          }
          iVar47 = iVar47 + 0x28;
          uVar56 = uVar56 + 0x10;
          iVar49 = iVar49 + 0x10;
        } while ((*(ushort *)(iVar53 + iVar47 + 0x2c) & 4) == 0);
      }
      if ((*(ushort *)(iVar53 + 4) & 4) == 0) {
        dVar63 = 256.0;
        dVar62 = 1.5707963705062866;
        dVar61 = 0.5;
        uVar27 = 0x3ff0000000000000;
        uVar57 = 0;
        iVar39 = uVar32 + 4;
        uVar45 = puVar19[0x2b];
        iVar49 = uVar32 + 8;
        iVar47 = uVar32 + 0xc;
        uVar48 = 0x80000000;
        uVar56 = ZEXT48(g_KeyLevelFlags + 0xc);
        iVar38 = iVar30;
        do {
          iVar41 = (int)uVar57;
          iVar50 = iVar41 * 0x28;
          if (*(int *)(iVar53 + iVar50 + 0x24) != 0) {
            iVar53 = iVar38 + iVar50;
            if ((*(ushort *)(iVar53 + 4) & 1) == 0) {
              sVar5 = *(short *)(iVar53 + 6);
              lVar24 = (longlong)*(short *)(iVar53 + 8);
              if (sVar5 != 0) {
                if ((*(ushort *)(iVar53 + 4) & 0x40) != 0) {
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  dVar55 = (double)hud::DrawFlatOverlay_Fixed
                                             (*(int *)(uVar32 + iVar30) + -0x20,
                                              *(int *)(iVar30 + iVar39) + -0x20,
                                              *(int *)(iVar30 + iVar49) + 0x20,
                                              *(int *)(iVar30 + iVar47) + 0x20,uVar48,1);
                  iVar30 = g_MapIcons;
                  iVar38 = g_MapIcons;
                }
                uVar4 = *(ushort *)(iVar38 + iVar50 + 4);
                dVar68 = dVar70;
                if ((uVar4 & 0x200) != 0) {
                  dVar68 = (double)(&g_MapZoom)[g_MapCurIndex];
                }
                if ((uVar4 & 0x100) == 0) {
                  uVar29 = hud::GetIconFrameTex(dVar55,sVar5,lVar24);
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  dVar55 = (double)hud::Hud_DrawTexQuad_v2_Fixed
                                             (uVar29,*(int *)(uVar32 + iVar30),
                                              *(int *)(iVar30 + iVar39),
                                              *(int *)(iVar30 + iVar49) - *(int *)(uVar32 + iVar30),
                                              *(int *)(iVar30 + iVar47) - *(int *)(iVar30 + iVar39),
                                              0x80);
                }
                else {
                  dVar66 = (double)(float)(dVar68 * dVar63);
                  fVar2 = *(float *)(iVar38 + iVar50 + 0x20);
                  dVar67 = (double)fVar2;
                  dVar55 = dVar66;
                  if ((uVar4 & 0x400) != 0) {
                    dVar67 = (double)fastfunc::FastWrapRot(fVar2,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264d4 * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264d8 * dVar68);
                    iVar38 = g_MapIcons;
                    iVar30 = g_MapIcons;
                    if ((*(uint *)((int)uVar56 +
                                  (int)((longlong)*(short *)(g_MapIcons + iVar50) << 4)) & 2) != 0)
                    {
                      lVar24 = lVar24 + 1;
                    }
                  }
                  if ((*(ushort *)(iVar38 + iVar50 + 4) & 0x800) != 0) {
                    dVar67 = (double)fastfunc::FastWrapRot((float)dVar67,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264cc * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264d0 * dVar68);
                    iVar30 = g_MapIcons;
                    if ((*(uint *)((int)uVar56 +
                                  (int)((longlong)*(short *)(g_MapIcons + iVar50) << 4)) & 2) != 0)
                    {
                      lVar24 = lVar24 + 1;
                    }
                  }
                  if ((*(ushort *)(iVar30 + iVar50 + 4) & 0x1000) != 0) {
                    dVar67 = (double)fastfunc::FastWrapRot((float)dVar67,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264dc * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264e0 * dVar68);
                  }
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  puVar19[0x2f] = (longlong)(*(int *)(uVar32 + iVar30) + *(int *)(iVar30 + iVar49));
                  uVar58 = puVar19[0x2f];
                  puVar19[0x2f] = (longlong)(*(int *)(iVar30 + iVar39) + *(int *)(iVar30 + iVar47));
                  dVar69 = (double)(float)((double)(longlong)uVar58 * dVar61);
                  dVar68 = (double)(float)((double)(longlong)puVar19[0x2f] * dVar61);
                  iVar30 = hud::GetIconFrameTex((double)(longlong)puVar19[0x2f],sVar5,lVar24);
                  hud::Hud_GetTexIndex(iVar30);
                  dVar55 = (double)hud::Hud_DrawTexQuadF_v4_Fixed
                                             (dVar69,dVar68,dVar55,dVar66,dVar67);
                }
                iVar50 = g_MapIcons + iVar50;
                iVar38 = g_MapIcons;
                iVar30 = g_MapIcons;
                if ((*(ushort *)(iVar50 + 4) & 0x10) != 0) {
                  sVar5 = *(short *)(iVar50 + 0x12);
                  sVar6 = *(short *)(iVar50 + 0xe);
                  sVar7 = *(short *)(iVar50 + 0x10);
                  sVar8 = *(short *)(iVar50 + 0x14);
                  uVar33 = (uint)sVar6;
                  iVar30 = (int)uVar33 >> 1;
                  if (sVar5 == 0) {
                    iVar53 = (int)((uVar57 & 0xffffffff) << 4);
                    iVar53 = (*(int *)(uVar32 + iVar53) + *(int *)(iVar53 + iVar49) >> 5) -
                             (iVar30 + (uint)((int)uVar33 < 0 && (uVar33 & 1) != 0));
                  }
                  else {
                    if (sVar5 < 1) {
                      iVar53 = *(int *)(uVar32 + (int)((uVar57 & 0xffffffff) << 4));
                    }
                    else {
                      iVar53 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar49);
                    }
                    iVar53 = ((iVar53 >> 4) -
                             (iVar30 + (uint)((int)uVar33 < 0 && (uVar33 & 1) != 0))) + (int)sVar5;
                  }
                  uVar42 = (uint)sVar7;
                  if (sVar8 == 0) {
                    iVar38 = (int)((uVar57 & 0xffffffff) << 4);
                    iVar38 = (*(int *)(iVar38 + iVar39) + *(int *)(iVar38 + iVar47) >> 5) -
                             (((int)uVar42 >> 1) + (uint)((int)uVar42 < 0 && (uVar42 & 1) != 0));
                  }
                  else {
                    if (sVar8 < 1) {
                      iVar38 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar39);
                    }
                    else {
                      iVar38 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar47);
                    }
                    iVar38 = ((iVar38 >> 4) -
                             (((int)uVar42 >> 1) + (uint)((int)uVar42 < 0 && (uVar42 & 1) != 0))) +
                             (int)sVar8;
                  }
                  puVar19[0x32] = uVar48;
                  puVar19[0x31] = uVar56;
                  lVar26 = (longlong)sVar7 + (longlong)iVar38;
                  lVar24 = (longlong)iVar53 + (longlong)sVar6;
                  draw::DrawRoundedRect
                            ((longlong)iVar38,(int)lVar26,(longlong)iVar53,(int)lVar24,0x40);
                  Map_GetIconLabel(iVar41,(char *)(uVar46 - 0x278));
                  *(undefined2 *)(puVar19 + 0x19) = 0;
                  *(undefined2 *)((int)puVar19 + 0xca) = 0;
                  *(undefined2 *)((int)puVar19 + 0xcc) = 0xf;
                  *(short *)((int)puVar19 + 0xce) = (short)uVar45;
                  *(undefined2 *)(puVar19 + 0x1a) = 0;
                  *(undefined2 *)((int)puVar19 + 0xd2) = 0;
                  *(short *)((int)puVar19 + 0xbc) = (short)iVar38;
                  *(short *)((int)puVar19 + 0xbe) = (short)lVar26;
                  *(short *)(puVar19 + 0x18) = (short)iVar53;
                  *(short *)((int)puVar19 + 0xc2) = (short)lVar24;
                  *(ushort *)((int)puVar19 + 0xc4) =
                       (short)iVar53 +
                       (short)iVar30 + (ushort)((int)uVar33 < 0 && (uVar33 & 1) != 0);
                  *(short *)((int)puVar19 + 0xc6) = (short)iVar38 + 4;
                  dVar55 = (double)draw::FontPrintOpt(uVar27,uVar46 - 0x294,0x80ffa888,
                                                      uVar46 - 0x278,0xffffffffffffffff);
                  uVar56 = puVar19[0x31];
                  uVar48 = puVar19[0x32];
                  iVar38 = g_MapIcons;
                  iVar30 = g_MapIcons;
                }
              }
            }
          }
          uVar57 = (ulonglong)(iVar41 + 1);
          iVar53 = iVar38;
        } while ((*(ushort *)(iVar38 + (int)(uVar57 << 5) + (int)(uVar57 << 3) + 4) & 4) == 0);
      }
    }
    uVar45 = puVar19[0x2c];
    uVar46 = puVar19[0x2d];
    if (Level == g_MapCurIndex) {
      iVar30 = hud::GetIconFrameTex(0xe99a,5);
      puVar25 = &DAT_00a204c0 + g_MapCurIndex;
      dVar55 = (double)g_heroRotation.z;
      dVar70 = (double)(((&g_MapZoom)[g_MapCurIndex] * 4.0 + 10.0) * 0.75 * 0.07692308);
      if (hero::g_heroStateType == 0xf) {
        dVar55 = (double)fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
      }
      if (DAT_00a20820 == 0) {
        Map_WorldToMapCoords
                  (g_heroPosition.x,g_heroPosition.y,0,(int)puVar25,(float *)(puVar19 + 0x10),
                   (float *)((int)puVar19 + 0x84),Level);
      }
      else {
        Map_WorldToMapCoords
                  (g_heroPosition.x,g_heroPosition.y,Level,(int)puVar25,(float *)(puVar19 + 0x10),
                   (float *)((int)puVar19 + 0x84),Level + 100);
        dVar55 = (double)fastfunc::FastWrapRot((float)dVar55,1.5707964);
      }
      auVar83 = vectorSubtractUnsignedWordModulo(auVar85,auVar89);
      auVar74 = vectorSubtractUnsignedWordModulo(auVar86,auVar87);
      auVar83 = vectorConvertFromSignedFixedPointWord(auVar83,0);
      auVar72 = loadVectorLeftIndexed(0x80,lVar34);
      puVar19[0x2f] = (longlong)((int)uVar46 - iVar43);
      fVar2 = *(float *)(puVar19 + 0x10);
      fVar3 = *(float *)((int)puVar19 + 0x84);
      auVar83 = vectorMultiplyAddFloatingPoint(auVar72,auVar83,auVar88);
      auVar72 = vectorConvertFromSignedFixedPointWord(auVar74,0);
      auVar74 = loadVectorLeftIndexed(0x84,lVar34);
      uVar48 = puVar19[0x2f];
      auVar83 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,0x80,lVar34);
      *(undefined4 *)(puVar19 + 0x10) = uVar9;
      puVar19[0x2f] = (longlong)((int)uVar45 - iVar35);
      cVar1 = *(char *)((int)puVar19[0x2e] + 4);
      auVar83 = vectorMultiplyAddFloatingPoint(auVar74,auVar72,auVar82);
      fVar2 = (float)((double)fVar2 * (double)(longlong)uVar48 + dVar65);
      auVar83 = auVar83 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,0x84,lVar34);
      *(undefined4 *)((int)puVar19 + 0x84) = uVar9;
      fVar3 = (float)((double)fVar3 * (double)(longlong)puVar19[0x2f] + dVar64);
      if (cVar1 != '\0') {
        uVar27 = 0x3ff921fb60000000;
        dVar64 = (double)fastfunc::FastWrapRot((float)dVar55,1.5707964);
        dVar55 = (double)fastfunc::FastDiffRots(-dVar64,uVar27);
        fVar2 = *(float *)(puVar19 + 0x10);
        fVar3 = *(float *)((int)puVar19 + 0x84);
      }
      dVar65 = (double)fVar3;
      dVar64 = (double)fVar2;
      dVar70 = (double)(float)(dVar70 * 256.0);
      hud::Hud_GetTexIndex(iVar30);
      hud::Hud_DrawTexQuadF_v4_Fixed(dVar64,dVar65,dVar70,dVar70,dVar55);
    }
    stub::STUB_0006d708();
    if (DAT_00a204dc != (float *)0x0) {
      stub::STUB_0006d704(0);
      pfVar54 = DAT_00a204dc;
      uVar48 = (ulonglong)DAT_00a20570;
      if (DAT_00a20570 != 0) {
        lVar34 = uVar45 - lVar44;
        puVar19[0x2f] = (longlong)((int)uVar46 - iVar43);
        uVar46 = puVar19[0x2f];
        puVar19[0x2f] = (longlong)(int)lVar34;
        dVar65 = (double)(longlong)uVar46;
        dVar64 = (double)(longlong)puVar19[0x2f];
        uVar46 = (longlong)(int)lVar34;
        do {
          uVar48 = uVar48 - 1;
          Map_WorldToMapCoords
                    (*pfVar54,pfVar54[1],(int)uVar46,(int)lVar34,(float *)(puVar19 + 0x12),
                     (float *)((int)puVar19 + 0x94),Level);
          puVar19[0x2f] = (longlong)(int)((double)*(float *)(puVar19 + 0x12) * dVar65);
          puVar19[0x2f] = (longlong)(int)((double)*(float *)((int)puVar19 + 0x94) * dVar64);
          iVar30 = *(int *)((int)puVar19 + 0x17c) + iVar43;
          lVar34 = (ulonglong)*(uint *)((int)puVar19 + 0x17c) + lVar44;
          if (((-0x19a < iVar30) && (iVar35 = (int)lVar34, -0x19a < iVar35)) &&
             ((iVar30 < 0x219a && ((iVar35 < 0x1b9a && (pfVar54[2] == -NAN)))))) {
            lVar34 = (longlong)(iVar35 - DAT_007264e4);
            hud::DrawFlatOverlay
                      (iVar30 - DAT_007264e4,lVar34,DAT_007264e4 + iVar30,DAT_007264e4 + iVar35,
                       pfVar54[3],1);
          }
          pfVar54 = pfVar54 + 4;
          uVar46 = uVar48;
        } while ((int)uVar48 != 0);
      }
      stub::STUB_0006d708();
    }
  }
  return;
}



//==== 000e4648  ns=map  size=0x2d8
// sig: undefined Map_DecodeLayer(void)
// callers(0): 
// callees(0): 

void map::Map_DecodeLayer(int param_1,int param_2,short *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  
  pbVar4 = DAT_00902ec8;
  uVar5 = 0;
  do {
    iVar18 = 0x200;
    if (uVar5 != 0) {
      iVar18 = (int)param_3[-1];
    }
    iVar18 = iVar18 + param_2;
    iVar6 = 0;
    bVar3 = false;
    iVar17 = (((*param_3 + param_2) - iVar18) * 2) / 3;
    if (0 < iVar17) {
      uVar10 = 0;
      pbVar16 = pbVar4;
      do {
        uVar11 = (ulonglong)*(byte *)(iVar18 + ((int)uVar10 >> 1));
        uVar12 = (uVar11 << 0x20) >> 0x24;
        uVar8 = (ulonglong)*(byte *)(((int)uVar10 >> 1) + iVar18 + 1);
        lVar9 = uVar8 + ((LZCOUNT(-(uVar10 & 1)) << 0x3a) >> 0x3f &
                        ((uVar8 & 0xf) << 4 | uVar12) - uVar8);
        uVar12 = uVar12 + ((LZCOUNT(-(uVar10 & 1)) << 0x3a) >> 0x3f & (uVar11 & 0xf) - uVar12);
        lVar9 = lVar9 + ((LZCOUNT(-(int)lVar9) << 0x3a) >> 0x3f & 0x100U - lVar9);
        pbVar14 = pbVar16;
        if (bVar3) {
          pbVar14 = pbVar16 + 1;
          bVar3 = false;
          lVar9 = lVar9 + -1;
          *pbVar16 = *pbVar16 | (byte)((uVar12 & 0xffffffff) << 4);
        }
        pbVar16 = pbVar14;
        if ((int)lVar9 != 0) {
          do {
            pbVar15 = pbVar14;
            *pbVar15 = (byte)((uVar12 & 0xffffffff) << 4) | (byte)uVar12 & 0xf;
            lVar9 = lVar9 + -2;
            pbVar14 = pbVar15 + 1;
          } while (0 < (int)lVar9);
          pbVar16 = pbVar15 + 1;
          if ((int)lVar9 != 0) {
            bVar3 = true;
            *pbVar15 = (byte)uVar12;
            pbVar16 = pbVar15;
          }
        }
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 + 3;
      } while (iVar6 < iVar17);
    }
    iVar17 = 0;
    iVar18 = 0;
    puVar13 = (undefined4 *)
              (param_1 +
              uVar5 * 4 +
              ((int)uVar5 >> 4) * 0x7c0 + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0) * -0x40 +
              (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0) * 0x800);
    do {
      uVar10 = 0;
      uVar12 = 0;
      puVar7 = puVar13;
      do {
        bVar1 = pbVar4[((int)uVar10 >> 1) + iVar18];
        uVar2 = (uint)(bVar1 >> 4);
        uVar8 = uVar12 | (uint)(1 << (uVar10 & 0x3f));
        uVar12 = uVar8 + ((LZCOUNT(-(uVar2 + ((uint)((LZCOUNT(-(uVar10 & 1)) << 0x3a) >> 0x3f) &
                                             (bVar1 & 0xf) - uVar2))) << 0x3a) >> 0x3f &
                         uVar12 - uVar8);
        if ((uVar10 & 0x1f) == 0x1f) {
          puVar7 = puVar7 + 1;
          *puVar13 = (int)uVar12;
          uVar12 = 0;
          puVar13 = puVar7;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x20);
      iVar17 = iVar17 + 1;
      puVar13 = puVar13 + 0xf;
      iVar18 = iVar18 + 0x10;
    } while (iVar17 < 0x20);
    uVar5 = uVar5 + 1;
    param_3 = param_3 + 1;
  } while ((int)uVar5 < 0x100);
  return;
}



//==== 000e4928  ns=map  size=0x250
// sig: void Map_RevealAroundPos(float * pos)
// callers(2): 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(1): 000e2b38 map::Map_WorldToMapCoords

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_RevealAroundPos(float *pos)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float local_50;
  float local_4c [5];
  
  if (g_MapLoaded != 0) {
    if (DAT_00a20820 == 0) {
      Map_WorldToMapCoords(*pos,pos[1],(int)pos,0x970000,&local_50,local_4c,Level);
    }
    else {
      Map_WorldToMapCoords(*pos,pos[1],(int)pos,Level,&local_50,local_4c,Level + 100);
    }
    uVar1 = (uint)(local_50 * 512.0);
    uVar2 = (uint)(local_4c[0] * 512.0);
    lVar8 = (ulonglong)uVar1 + 1;
    lVar10 = (ulonglong)uVar2 + 1;
    uVar9 = (uint)lVar8;
    uVar3 = (uint)lVar10;
    if (((int)uVar9 < 0x200 && -1 < (int)(uVar9 | uVar3)) && ((int)uVar3 < 0x200)) {
      uVar11 = (ulonglong)uVar2 - 0xf;
      iVar6 = ((uint)((longlong)(int)(uVar2 + 0x11) + -0x1ff >> 0x3f) & uVar2 - 0x1ee) + 0x1ff;
      uVar7 = (ulonglong)uVar1 - 0xf;
      uVar11 = -(longlong)(int)uVar11 >> 0x3f & uVar11;
      iVar5 = ((uint)((longlong)(int)(uVar1 + 0x11) + -0x1ff >> 0x3f) & uVar1 - 0x1ee) + 0x1ff;
      if ((int)uVar11 < iVar6) {
        lVar12 = uVar11 << 9;
        lVar10 = uVar11 - lVar10;
        do {
          uVar13 = -(longlong)(int)uVar7 >> 0x3f & uVar7;
          if ((int)uVar13 < iVar5) {
            lVar15 = uVar13 - lVar8;
            lVar14 = uVar13 + lVar12;
            do {
              if (SQRT((float)(longlong)((int)lVar15 * (int)lVar15 + (int)lVar10 * (int)lVar10)) <=
                  16.0) {
                pbVar4 = (byte *)(g_MapRevealMask + ((int)(uint)lVar14 >> 3));
                *pbVar4 = *pbVar4 | (byte)(1 << ((uint)lVar14 & 7));
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 1;
            } while ((int)uVar13 < iVar5);
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 1;
          lVar12 = lVar12 + 0x200;
        } while ((int)uVar11 < iVar6);
      }
    }
  }
  return;
}



//==== 000e4b78  ns=map  size=0x94
// sig: void Map_RevealRect(int x, int y, int w, int h)
// callers(1): 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_RevealRect(int x,int y,int w,int h)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = (longlong)y;
  lVar2 = (longlong)x;
  if (y < h + y) {
    lVar7 = lVar3 << 9;
    do {
      if (x < (int)(w + lVar2)) {
        lVar5 = lVar2 + lVar7;
        lVar4 = (w + lVar2) - lVar2;
        do {
          uVar6 = (uint)lVar5;
          lVar4 = lVar4 + -1;
          pbVar1 = (byte *)(g_MapRevealMask + ((int)uVar6 >> 3));
          lVar5 = lVar5 + 1;
          *pbVar1 = *pbVar1 | (byte)(1 << (uVar6 & 7));
        } while (0 < (int)lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0x200;
    } while ((int)lVar3 < h + y);
  }
  return;
}



//==== 000e4c0c  ns=map  size=0x7c
// sig: void Map_SaveRevealMask(char * out)
// callers(3): 000e8888 memcard::memcard_PerformOperation; 000e8aa4 memcard::memcard_Save; 0014dfa0 pause::SaveGame_Update
// callees(2): 005001fc fastfunc::FastMemSet; 005c5ad0 libc::memcpy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_SaveRevealMask(char *out)

{
  if (g_MapLoaded == 0) {
    fastfunc::FastMemSet(out,0,0x8000);
  }
  else {
    libc::memcpy(out,(void *)g_MapRevealMask,0x8000);
    *out = '\x01';
  }
  return;
}



//==== 000e4c88  ns=map  size=0x3e0
// sig: undefined Map_DecompressMapImage(void)
// callers(0): 
// callees(2): 005001fc fastfunc::FastMemSet; 005002cc fastfunc::FastMemCopy

void map::Map_DecompressMapImage(longlong param_1,byte *param_2,byte *param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar3;
  byte *pbVar8;
  longlong lVar7;
  byte bVar10;
  int iVar9;
  uint uVar11;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  byte *pbVar12;
  ulonglong unaff_r25;
  ulonglong uVar13;
  ulonglong unaff_r26;
  ulonglong uVar14;
  ulonglong unaff_r27;
  byte *pbVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  byte *pbVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar7 = uVar14 - 0x500;
  puVar1 = (ulonglong *)lVar7;
  *puVar1 = uVar14;
  puVar1[0xa2] = in_LR;
  puVar1[0x97] = unaff_r23;
  puVar1[0x9b] = unaff_r27;
  puVar1[0x9f] = unaff_r31;
  iVar17 = g_MapLoaded;
  puVar1[0x9e] = unaff_r30;
  puVar1[0x9d] = unaff_r29;
  puVar1[0x9c] = unaff_r28;
  puVar1[0x9a] = unaff_r26;
  puVar1[0x99] = unaff_r25;
  puVar1[0x98] = unaff_r24;
  pbVar2 = DAT_00902ec8;
  if (iVar17 != 0) {
    if ((*param_2 & 1) == 0) {
      uVar4 = 0;
      iVar17 = 0;
      do {
        uVar11 = 0;
        iVar9 = (int)lVar7;
        *(undefined4 *)(iVar9 + 0xb0) = 0;
        if ((uVar4 & 1) != 0) {
          uVar11 = 0xf;
          *(undefined4 *)(iVar9 + 0xb0) = 0xf;
        }
        if ((uVar4 & 2) != 0) {
          uVar11 = uVar11 | 0xf0;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 4) != 0) {
          uVar11 = uVar11 | 0xf00;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 8) != 0) {
          uVar11 = uVar11 | 0xf000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x10) != 0) {
          uVar11 = uVar11 | 0xf0000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar11 = uVar11 | 0xf00000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar11 = uVar11 | 0xf000000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x80) != 0) {
          *(uint *)(iVar9 + 0xb0) = uVar11 | 0xf0000000;
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 4;
      } while ((int)uVar4 < 0x100);
      do {
        lVar3 = uVar14 - 0x490;
        lVar18 = 0x10;
        lVar7 = lVar3;
        do {
          bVar10 = *param_2;
          param_2 = param_2 + 1;
          *(undefined4 *)lVar7 = *(undefined4 *)((int)puVar1 + (uint)bVar10 * 4 + 0xb0);
          lVar7 = lVar7 + 4;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fastfunc::FastMemCopy(param_1,lVar3,0x40);
        fastfunc::FastMemCopy(param_1 + 0x40,lVar3,0x40);
        fastfunc::FastMemCopy(param_1 + 0x80,lVar3,0x40);
        fastfunc::FastMemCopy(param_1 + 0xc0,lVar3,0x40);
        iVar17 = iVar17 + 1;
        param_1 = param_1 + 0x100;
      } while (iVar17 < 0x80);
    }
    else {
      pbVar15 = param_2 + 1;
      iVar17 = (int)param_1;
      pbVar16 = DAT_00902ec8 + 0x2000;
      uVar14 = ((ulonglong)*param_2 << 0x20) >> 0x21;
      fastfunc::FastMemSet(DAT_00902ec8,0,0x2400);
      uVar13 = 1;
      pbVar12 = pbVar2;
      while( true ) {
        do {
          pbVar6 = param_3 + 1;
          uVar4 = (uint)*pbVar6;
          pbVar12 = pbVar12 + *param_3;
          param_3 = param_3 + 2;
          if (*pbVar6 != 0) {
            do {
              if ((int)uVar14 == 0) {
                do {
                  bVar10 = *pbVar15;
                  uVar14 = (ulonglong)bVar10;
                  pbVar15 = pbVar15 + 1;
                  uVar13 = (ulonglong)(LZCOUNT((int)uVar13) << 0x20) >> 0x25;
                } while (bVar10 == 0);
              }
              uVar4 = uVar4 - 1;
              *pbVar12 = (byte)uVar13;
              uVar14 = uVar14 - 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar4 != 0);
          }
          pbVar6 = pbVar2;
          pbVar8 = pbVar2;
        } while (pbVar12 < pbVar2 + 0x2000);
        do {
          bVar10 = *pbVar6;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[1] << 1;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[2] << 2;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[3] << 3;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[4] << 4;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[5] << 5;
          *pbVar8 = bVar10;
          pbVar5 = pbVar6 + 8;
          *pbVar8 = bVar10 | pbVar6[6] << 6;
          *pbVar8 = *pbVar8 | pbVar6[7] << 7;
          pbVar6 = pbVar5;
          pbVar8 = pbVar8 + 1;
        } while (pbVar5 < pbVar2 + 0x2000);
        fastfunc::FastMemCopy(param_1,pbVar2,0x400);
        param_1 = param_1 + 0x400;
        if ((int)param_1 == iVar17 + 0x8000) break;
        fastfunc::FastMemSet(pbVar2,0,0x2000);
        if (pbVar2 + 0x2000 < pbVar12) {
          iVar9 = (int)pbVar12 - (int)pbVar16;
          pbVar6 = pbVar16;
          pbVar8 = pbVar2;
          do {
            iVar9 = iVar9 + -1;
            bVar10 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            *pbVar8 = bVar10;
            pbVar8 = pbVar8 + 1;
          } while (0 < iVar9);
        }
        fastfunc::FastMemSet(pbVar16,0,0x400);
        pbVar12 = pbVar12 + -0x2000;
      }
    }
  }
  return;
}



//==== 000e5068  ns=map  size=0x40
// sig: void Map_RegisterLevelObject(void * obj, int idx)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_RegisterLevelObject(void *obj,int idx)

{
  if ((int)Level < 0x13) {
    *(void **)(&DAT_00a15d40 + (idx + *(int *)(&DAT_00738138 + Level * 4)) * 4) = obj;
  }
  return;
}



//==== 000e50a8  ns=map  size=0x14
// sig: void Map_SetIconSource(void * a, int b)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_SetIconSource(void *a,int b)

{
  DAT_00a204dc = a;
  DAT_00a20570 = b;
  return;
}



//==== 000e50bc  ns=map  size=0xa0
// sig: void Map_SaveLevelObjectState(void)
// callers(2): 000e8aa4 memcard::memcard_Save; 0014dfa0 pause::SaveGame_Update
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void map::Map_SaveLevelObjectState(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (Level < (Veldin2|Novalis)) {
    uVar3 = *(uint *)(&DAT_00738138 + Level * 4);
    iVar1 = *(int *)(&DAT_0073813c + Level * 4);
    if ((int)uVar3 < iVar1) {
      lVar6 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
      lVar4 = ((ulonglong)uVar3 & 0xfffffff) << 4;
      do {
        iVar2 = *(int *)(&DAT_00a15d40 + (int)lVar6);
        if (iVar2 != 0) {
          iVar5 = (int)lVar4;
          *(undefined4 *)(g_KeyLevelFlags + iVar5) = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)(g_KeyLevelFlags + iVar5 + 4) = *(undefined4 *)(iVar2 + 0x14);
          *(undefined4 *)(g_KeyLevelFlags + iVar5 + 8) = *(undefined4 *)(iVar2 + 0x48);
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 4;
        lVar4 = lVar4 + 0x10;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}



//==== 000e515c  ns=map  size=0x34
// sig: undefined Map_RegionVisible_e515c(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e515c(longlong param_1,longlong param_2)

{
  return (ulonglong)((param_2 + -0xdb) * 0x56 + (param_1 + -0xd3) * -0x1e << 0x20) >> 0x3f;
}



//==== 000e5190  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5190(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5190(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field12_0xc) << 0x20) >> 0x25 ^ 1;
}



//==== 000e51ac  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e51ac(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e51ac(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field13_0xd) << 0x20) >> 0x25 ^ 1;
}



//==== 000e51c8  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e51c8(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e51c8(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field21_0x15) << 0x20) >> 0x25 ^ 1;
}



//==== 000e51f0  ns=map  size=0x98
// sig: undefined Map_RegionVisible_e51f0(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e51f0
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = 0;
  uVar2 = 0;
  if ((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = 1;
  }
  if (((199 < param_5) || (param_3 < 39.5)) || ((bool)(bVar1 | 42.5 < param_3))) {
    if (((199 < param_5) && (87.0 <= param_3)) && (hero::g_heroStateType != 0x10)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 000e5290  ns=map  size=0x78
// sig: undefined Map_RegionVisible_e5290(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5290(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 < 0x100) && (MiscLevelFlags.field14_0xe != 0)) {
    uVar1 = 1;
  }
  else if ((param_4 < 0x100) ||
          (((param_3 < 58.0 || (86.0 < param_3)) || (hero::g_heroStateType == 0x10)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e5310  ns=map  size=0x60
// sig: undefined Map_RegionVisible_e5310(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5310(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x100) {
    uVar1 = 0;
    if ((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01')
       ) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (95.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e5370  ns=map  size=0x14
// sig: undefined Map_RegionVisible_e5370(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5370(void)

{
  return (ulonglong)(LZCOUNT(DAT_00a20824) << 0x20) >> 0x25;
}



//==== 000e5384  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5384(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5384(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field28_0x1c) << 0x20) >> 0x25 ^ 1;
}



//==== 000e53a0  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e53a0(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e53a0(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field29_0x1d) << 0x20) >> 0x25 ^ 1;
}



//==== 000e53bc  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e53bc(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e53bc(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field30_0x1e) << 0x20) >> 0x25 ^ 1;
}



//==== 000e53d8  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e53d8(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e53d8(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field31_0x1f) << 0x20) >> 0x25 ^ 1;
}



//==== 000e53f4  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e53f4(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e53f4(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field37_0x25) << 0x20) >> 0x25 ^ 1;
}



//==== 000e5420  ns=map  size=0x2b0
// sig: undefined Map_RegionVisible_e5420(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5420(double param_1,double param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if ((param_5 + -0x16f) * -0x102 + (param_4 + -0x189) * 0x82 < 0) {
    if ((((param_5 + -0x146) * 0x116 + (param_4 + -0x75) * -0x86 < 0) &&
        ((param_5 + -0x130) * -0x91 < 0)) && (43.900001525878906 <= param_3)) {
      return 1;
    }
    uVar1 = 0;
  }
  else if ((param_5 + -0xcd) * -0xbf + (param_4 + -0x191) * -0x6e < 0) {
    if (7.0 < SQRT((float)(param_1 - 337.5) * (float)(param_1 - 337.5) +
                   (float)(param_2 - 250.0) * (float)(param_2 - 250.0))) {
      if (((param_5 + -0x12a) * 0x31 + (param_4 + -0x142) * 0x2e < 0) && (DAT_00a20830 != 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    if ((((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) ||
         (DAT_0096afc4 == '\x01')) && ((param_5 + -0xb8) * 0xf + (param_4 + -299) * -0x3a < 0)) &&
       ((((param_5 + -0xed) * 0x35 + (param_4 + -0x130) * 0x22 < 0 &&
         ((param_5 + -0xdc) * -0x26 + (param_4 + -0x161) * 0x2c < 0)) &&
        ((param_5 + -0xa8) * -0x3d + (param_4 + -0x156) * -0x29 < 0)))) {
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



//==== 000e56d8  ns=map  size=0x13c
// sig: undefined Map_RegionVisible_e56d8(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e56d8
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = false;
  if ((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = true;
  }
  if ((((-1 < (param_5 + -0x168) * 0xef) || (param_5 < 0x135)) || (DAT_00a20828 == 0)) ||
     (param_3 < 47.70000076293945)) {
    if (((bVar1) && ((param_5 + -0x9a) * 0x77 + (param_4 + -0xc5) * -0x47 < 0)) &&
       (((param_5 + -0xc3) * 0x81 + (param_4 + -0xd6) * -2 < 0 &&
        ((param_5 + -0xda) * 0x6a + (param_4 + -0x107) * 0x3a < 0)))) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 000e5814  ns=map  size=0x24c
// sig: undefined Map_RegionVisible_e5814(void)
// callers(0): 
// callees(0): 

undefined8 map::Map_RegionVisible_e5814(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0xe9) {
    uVar1 = 0;
    if (((((param_2 + -0xa0) * 0x2d + (param_1 + -0x132) * -0x38 < 0) &&
         ((param_2 + -0xd8) * 0x34 + (param_1 + -0x14d) * 0x3e < 0)) &&
        ((param_2 + -0xb4) * -0x4b + (param_1 + -0x182) * 0x21 < 0)) &&
       ((param_2 + -0x8c) * -0x27 + (param_1 + -0x157) * -0x1e < 0)) {
      uVar1 = 1;
    }
  }
  else if (((param_2 + -0x115) * 0xb9 + (param_1 + -0x8f) * -0x36 < 0) ||
          ((param_2 + -0x108) * 0x40 + (param_1 + -0xe7) * -0x5c < 0)) {
    if (((param_2 + -0x15f) * 0x67 + (param_1 + -0xed) * 0x51 < 0) ||
       ((param_2 + -299) * 0xcd + (param_1 + -0xa2) * -0x1c < 0)) {
      if (((param_2 + -0x163) * 0xf + (param_1 + -0x132) * 0x97 < 0) ||
         ((param_2 + -0x108) * 0xde + (param_1 + -0xc2) * -0x26 < 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 000e5a68  ns=map  size=0xc0
// sig: undefined Map_RegionVisible_e5a68(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5a68
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_5 < 0xbb) {
    uVar1 = 0;
    if (((hero::g_heroStateType != 0x11 && hero::g_heroStateType != 0x12) &&
        (DAT_0096afc4 != '\x01')) && (DAT_00a2083c != 0)) {
      uVar1 = 1;
    }
  }
  else if (((param_3 < 51.5) || (54.0 < param_3)) ||
          (-1 < (param_5 + -0xe5) * 0x1a + (param_4 + -0x10a) * -0x14)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e5b28  ns=map  size=0xa0
// sig: undefined Map_RegionVisible_e5b28(void)
// callers(0): 
// callees(0): 

undefined8 map::Map_RegionVisible_e5b28(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_00a20834 == 0) {
    uVar1 = 0;
  }
  else if (((param_2 + -0xed) * 199 + (param_1 + -0x99) * -0x2a < 0) ||
          ((param_2 + -0xf7) * 0x2f + (param_1 + -0x10e) * -0x22 < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 000e5bd8  ns=map  size=0x88
// sig: undefined Map_RegionVisible_e5bd8(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5bd8
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_5 < 0x9d) {
    if (((param_3 < 73.5) || (80.0 < param_3)) || (DAT_00a20840 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (((param_3 < 51.5) || (54.0 < param_3)) || (DAT_00a20838 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e5c68  ns=map  size=0xc4
// sig: undefined Map_RegionVisible_e5c68(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5c68
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    uVar1 = 1;
  }
  if (param_5 < 0x105) {
    if ((0xc0 < param_5) && ((param_5 + -0xb8) * 0x7d + (param_4 + -0xd9) * -0x1a < 0)) {
      uVar1 = 0;
    }
  }
  else if ((DAT_00a2082c == 0) || (param_3 < 47.70000076293945)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e5d30  ns=map  size=0xb8
// sig: undefined Map_RegionVisible_e5d30(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5d30
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  if ((((hero::g_heroStateType != 0x11 && hero::g_heroStateType != 0x12) && (DAT_0096afc4 != '\x01')
       ) && (71.5 <= param_3)) &&
     ((-1 < (param_5 + -0xe2) * -0x6b + (param_4 + -0x131) * 0x4f &&
      (-1 < (param_5 + -0x89) * -0xbf + (param_4 + -400) * -0x72)))) {
    return 1;
  }
  return 0;
}



//==== 000e5de8  ns=map  size=0x4c
// sig: undefined Map_RegionVisible_e5de8(void)
// callers(0): 
// callees(0): 

longlong map::Map_RegionVisible_e5de8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field53_0x35) << 0x20) >> 0x25 ^ 1;
  return uVar1 + (0x100 - param_2 >> 0x3f &
                 ((ulonglong)(LZCOUNT(hero::g_heroStateType + -0xf) << 0x20) >> 0x25) - uVar1);
}



//==== 000e5e40  ns=map  size=0x4c
// sig: undefined Map_RegionVisible_e5e40(void)
// callers(0): 
// callees(0): 

bool map::Map_RegionVisible_e5e40(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0xe0) {
    bVar1 = 47.75 <= param_3;
  }
  else {
    bVar1 = false;
    if (param_3 < 29.0) {
      bVar1 = true;
    }
  }
  return bVar1;
}



//==== 000e5e98  ns=map  size=0x54
// sig: undefined Map_RegionVisible_e5e98(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5e98(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xe0) {
    uVar1 = 0;
    if ((44.0 <= param_3) && (param_3 <= 45.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (37.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e5ef8  ns=map  size=0x54
// sig: undefined Map_RegionVisible_e5ef8(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5ef8(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xe0) {
    uVar1 = 0;
    if ((42.0 <= param_3) && (param_3 <= 43.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (39.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e5f50  ns=map  size=0x2c
// sig: undefined Map_RegionVisible_e5f50(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e5f50(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_4 < 0xe0) && (param_3 <= 38.0)) {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e5f7c  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5f7c(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5f7c(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field48_0x30) << 0x20) >> 0x25 ^ 1;
}



//==== 000e5f98  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5f98(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5f98(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field49_0x31) << 0x20) >> 0x25 ^ 1;
}



//==== 000e5fb4  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5fb4(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5fb4(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field50_0x32) << 0x20) >> 0x25 ^ 1;
}



//==== 000e5fd0  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5fd0(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5fd0(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field67_0x43) << 0x20) >> 0x25 ^ 1;
}



//==== 000e5fec  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e5fec(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e5fec(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field68_0x44) << 0x20) >> 0x25 ^ 1;
}



//==== 000e6008  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e6008(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e6008(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field69_0x45) << 0x20) >> 0x25 ^ 1;
}



//==== 000e6028  ns=map  size=0x44
// sig: undefined Map_RegionVisible_e6028(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e6028
                    (undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  ulonglong uVar1;
  
  if (param_4 < 0xbe) {
    uVar1 = 0;
    if (58.5 <= param_3) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field80_0x50) << 0x20) >> 0x25 ^ 1;
  }
  return uVar1;
}



//==== 000e606c  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e606c(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e606c(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field76_0x4c) << 0x20) >> 0x25 ^ 1;
}



//==== 000e6088  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e6088(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e6088(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field77_0x4d) << 0x20) >> 0x25 ^ 1;
}



//==== 000e60a4  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e60a4(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e60a4(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field78_0x4e) << 0x20) >> 0x25 ^ 1;
}



//==== 000e60c0  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e60c0(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e60c0(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field79_0x4f) << 0x20) >> 0x25 ^ 1;
}



//==== 000e60dc  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e60dc(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e60dc(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field81_0x51) << 0x20) >> 0x25 ^ 1;
}



//==== 000e6108  ns=map  size=0x64
// sig: undefined Map_RegionVisible_e6108(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e6108(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xdd) {
    uVar1 = 0;
    if (((232.0 <= param_3) && (param_3 <= 235.0)) && (MiscLevelFlags.field86_0x56 != 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (param_3 <= 180.0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e6178  ns=map  size=0x5c
// sig: undefined Map_RegionVisible_e6178(void)
// callers(0): 
// callees(0): 

bool map::Map_RegionVisible_e6178(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0xdd) {
    bVar1 = 242.0 <= param_3;
  }
  else {
    bVar1 = false;
    if ((param_3 <= 180.0) && (MiscLevelFlags.field87_0x57 != 0)) {
      bVar1 = true;
    }
  }
  return bVar1;
}



//==== 000e61e0  ns=map  size=0x68
// sig: undefined Map_RegionVisible_e61e0(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e61e0(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xdd) {
    uVar1 = 0;
    if ((238.0 <= param_3) && (param_3 <= 241.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if ((param_3 <= 180.0) && (MiscLevelFlags.field88_0x58 != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e6258  ns=map  size=0x94
// sig: undefined Map_RegionVisible_e6258(void)
// callers(0): 
// callees(0): 

bool map::Map_RegionVisible_e6258(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  if ((hero::g_heroStateType == 0x11 || hero::g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = true;
  }
  if (param_4 < 0x15f) {
    bVar2 = bVar1 && 200.0 <= param_3;
  }
  else if (((233.0 <= param_3) && (param_3 <= 235.0)) && (MiscLevelFlags.field90_0x5a != 0)) {
    bVar2 = true;
  }
  return bVar2;
}



//==== 000e6300  ns=map  size=0x74
// sig: undefined Map_RegionVisible_e6300(void)
// callers(0): 
// callees(0): 

undefined8
map::Map_RegionVisible_e6300(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x15f) {
    uVar1 = 0;
    if ((228.0 <= param_3) && (param_3 <= 230.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (((233.0 <= param_3) && (param_3 <= 235.0)) && (MiscLevelFlags.field91_0x5b != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



//==== 000e6374  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e6374(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e6374(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field89_0x59) << 0x20) >> 0x25 ^ 1;
}



//==== 000e6398  ns=map  size=0x30
// sig: undefined Map_RegionVisible_e6398(void)
// callers(0): 
// callees(0): 

bool map::Map_RegionVisible_e6398
               (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  return 0x140 < param_5 || 63.5 <= param_3;
}



//==== 000e63c8  ns=map  size=0x8
// sig: undefined Map_RegionVisible_e63c8(void)
// callers(0): 
// callees(0): 

undefined8 map::Map_RegionVisible_e63c8(void)

{
  return 1;
}



//==== 000e63d0  ns=map  size=0x8
// sig: undefined Map_RegionVisible_e63d0(void)
// callers(0): 
// callees(0): 

undefined8 map::Map_RegionVisible_e63d0(void)

{
  return 1;
}



//==== 000e63e8  ns=map  size=0x88
// sig: undefined Map_RegionVisible_e63e8(void)
// callers(0): 
// callees(0): 

undefined8 map::Map_RegionVisible_e63e8(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_00a20828 == 0) {
    if (35.0 < SQRT(((float)(longlong)param_1 - 161.5) * ((float)(longlong)param_1 - 161.5) +
                    ((float)(longlong)param_2 - 249.0) * ((float)(longlong)param_2 - 249.0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 000e6470  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e6470(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e6470(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field114_0x72) << 0x20) >> 0x25 ^ 1;
}



//==== 000e648c  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e648c(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e648c(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field115_0x73) << 0x20) >> 0x25 ^ 1;
}



//==== 000e64a8  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e64a8(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e64a8(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field116_0x74) << 0x20) >> 0x25 ^ 1;
}



//==== 000e64c4  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e64c4(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e64c4(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field117_0x75) << 0x20) >> 0x25 ^ 1;
}



//==== 000e64e0  ns=map  size=0x1c
// sig: undefined Map_RegionVisible_e64e0(void)
// callers(0): 
// callees(0): 

ulonglong map::Map_RegionVisible_e64e0(void)

{
  return (ulonglong)(LZCOUNT((uint)MiscLevelFlags.field127_0x7f) << 0x20) >> 0x25 ^ 1;
}



//==== 000e64fc  ns=map  size=0x98
// sig: undefined Map_InitColors(void)
// callers(0): 
// callees(1): 00502f74 stub::FUN_00502f74_RET_0

void map::Map_InitColors(void)

{
  DAT_00726534 = 0x10000;
  DAT_00a20848 = stub::FUN_00502f74_RET_0(0,0,0,0x80,0);
  DAT_00a20850 = stub::FUN_00502f74_RET_0(0xff,0xff,0xaf,0x80,0);
  DAT_00a20854 = stub::FUN_00502f74_RET_0(0xff,0xff,0xaf,0,0);
  return;
}



//==== 000e6598  ns=map  size=0x114
// sig: undefined FlowState_Update(void)
// callers(4): 00012048 boot::PrepareFrontbin; 000e0e60 main::startLevel; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(2): 000e6a88 memcard::CardState_LOAD_FAILED; 000e6a98 memcard::CardState_SAVE_FAILED

void map::FlowState_Update(void)

{
  int iVar1;
  
  iVar1 = memcard::g_CardState;
  if ((DAT_0071fb10 != 0) || (DAT_0071fa40 != 0)) {
    DAT_00a20884 = 1;
  }
  if ((memcard::g_CardStateFlags & 0x80) != 0) {
    memcard::g_CardStateFlags = memcard::g_CardStateFlags & 0xffffff7f | 0x40;
    memcard::g_CardState = 0x15;
  }
  if ((memcard::g_CardStateFlags & 0x100) != 0) {
    memcard::g_CardStateFlags = memcard::g_CardStateFlags & 0xfffffeff | 0x40;
    memcard::g_CardState = 0x14;
  }
  (**(code **)(&memcard::g_CardStateFuncs)[memcard::g_CardState])();
  DAT_00a20880 = DAT_00a20880 + 1;
  if (memcard::g_CardState != iVar1) {
    DAT_00a20880 = 0;
  }
  return;
}



//==== 000e66ac  ns=memcard  size=0x28
// sig: void CardState_INIT(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_INIT(void)

{
  g_memcardGameSaved = 0;
  DAT_0071fa40 = DAT_0071fae8;
  g_CardState = 3;
  return;
}



//==== 000e66d4  ns=memcard  size=0xb8
// sig: void CardState_GOOD_SAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_GOOD_SAVE(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = g_CardStateFlags & 0xfffffff9;
  if ((g_CardStateFlags & 0x80) == 0) {
    if ((g_CardStateFlags & 0x100) == 0) {
      if (DAT_0071fa40 == 0) {
        uVar2 = g_CardStateFlags & 0x200;
        g_CardStateFlags = uVar1;
        if (uVar2 != 0) {
          g_CardStateFlags = uVar1 ^ 0x200;
          g_CardState = 0x16;
        }
      }
      else {
        g_memcardGameSaved = 0;
        g_CardState = 2;
        g_CardStateFlags = uVar1 | 1;
      }
    }
    else {
      g_CardState = 0x14;
      g_CardStateFlags = uVar1 ^ 0x100 | 0x40;
    }
  }
  else {
    g_CardState = 0x15;
    g_CardStateFlags = uVar1 ^ 0x80 | 0x40;
  }
  return;
}



//==== 000e678c  ns=memcard  size=0x58
// sig: void CardState_WARNING(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_WARNING(void)

{
  if ((&DAT_0071fad4)[DAT_0071faf0 * 0x30] == 2) {
    (&DAT_0071fad4)[DAT_0071faf0 * 0x30] = 0;
  }
  if ((g_CardStateFlags & 1) == 0) {
    g_CardState = 3;
  }
  return;
}



//==== 000e67e4  ns=memcard  size=0x64
// sig: void CardState_NOCARD(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_NOCARD(void)

{
  DAT_0071fb08 = 0xffffffff;
  DAT_0071fb0c = 0xffffffff;
  DAT_0071fa44 = 0xffffffff;
  DAT_0071fa60 = 0xffffffff;
  DAT_0071fa7c = 0xffffffff;
  DAT_0071fa98 = 0xffffffff;
  DAT_0071fab4 = 0xffffffff;
  if ((&DAT_0071fad4)[DAT_0071faf0 * 0x30] == 2) {
    (&DAT_0071fad4)[DAT_0071faf0 * 0x30] = 0;
  }
  g_CardState = 4;
  return;
}



//==== 000e6848  ns=memcard  size=0x24
// sig: void CardState_WAIT_FOR_CARD(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_WAIT_FOR_CARD(void)

{
  g_CardState = 9;
  g_CardStateFlags = g_CardStateFlags & 0xffffffdf;
  return;
}



//==== 000e686c  ns=memcard  size=0x10
// sig: void CardState_UNFORMATTED(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e687c  ns=memcard  size=0x10
// sig: void CardState_PROMPT_FORMAT(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_PROMPT_FORMAT(void)

{
  g_CardState = 9;
  return;
}



//==== 000e688c  ns=memcard  size=0x10
// sig: void CardState_FORMAT_PENDING(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_FORMAT_PENDING(void)

{
  g_CardState = 9;
  return;
}



//==== 000e689c  ns=memcard  size=0x10
// sig: void CardState_FORMATTING(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_FORMATTING(void)

{
  g_CardState = 0xe;
  return;
}



//==== 000e68ac  ns=memcard  size=0x10
// sig: void CardState_FORMATTED(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_FORMATTED(void)

{
  g_CardState = 10;
  return;
}



//==== 000e68bc  ns=memcard  size=0x34
// sig: void CardState_CHECK_SAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_CHECK_SAVE(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 7;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xb;
  return;
}



//==== 000e68f0  ns=memcard  size=0x10
// sig: void CardState_CHECKING_SAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_CHECKING_SAVE(void)

{
  g_CardState = 0x10;
  return;
}



//==== 000e6900  ns=memcard  size=0x24
// sig: void CardState_NOSAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_NOSAVE(void)

{
  if ((g_CardStateFlags & 2) != 0) {
    g_CardState = 0xd;
  }
  return;
}



//==== 000e6924  ns=memcard  size=0x84
// sig: void CardState_PROMPT_CREATE_SAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_PROMPT_CREATE_SAVE(void)

{
  if ((g_CardStateFlags & 0x20) == 0) {
    if ((g_CardStateFlags & 0x10) != 0) {
      g_CardStateFlags = g_CardStateFlags ^ 0x10;
      g_CardState = 0xe;
    }
  }
  else {
    g_CardStateFlags = g_CardStateFlags ^ 0x20;
    g_CardState = ((uint)((LZCOUNT(-(uint)g_FrontEnd) << 0x3a) >> 0x3f) & 0xfffffff4) + 0x18;
  }
  return;
}



//==== 000e69a8  ns=memcard  size=0x34
// sig: void CardState_CREATE_SAVE_PENDING(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_CREATE_SAVE_PENDING(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 9;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xf;
  return;
}



//==== 000e69dc  ns=memcard  size=0x6c
// sig: void CardState_CREATING_SAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_CREATING_SAVE(void)

{
  if (DAT_0071fb10 == 0) {
    DAT_0071faec = 0;
    DAT_0071fa38 = 0;
    if (DAT_0071fb08 < 0) {
      DAT_0071fb08 = 7;
      DAT_0071fb0c = 0;
    }
    g_CardState = 0x10;
  }
  else {
    g_CardState = 0x12;
    g_CardStateFlags = g_CardStateFlags | 0x40;
  }
  return;
}



//==== 000e6a48  ns=memcard  size=0x10
// sig: void CardState_NEWCARD(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_NEWCARD(void)

{
  g_CardState = 1;
  return;
}



//==== 000e6a58  ns=memcard  size=0x10
// sig: void CardState_FORMAT_FAILED(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_FORMAT_FAILED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6a68  ns=memcard  size=0x10
// sig: void CardState_CREATE_FAILED(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_CREATE_FAILED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6a78  ns=memcard  size=0x10
// sig: void CardState_NO_ROOM(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_NO_ROOM(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6a88  ns=memcard  size=0x10
// sig: void CardState_LOAD_FAILED(void)
// callers(1): 000e6598 map::FlowState_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_LOAD_FAILED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6a98  ns=memcard  size=0x10
// sig: void CardState_SAVE_FAILED(void)
// callers(1): 000e6598 map::FlowState_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_SAVE_FAILED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6aa8  ns=memcard  size=0x40
// sig: void CardState_SAVING(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_SAVING(void)

{
  g_CardState = 1;
  if (DAT_0071fb10 != 0) {
    g_CardState = 0x15;
    g_memcardGameSaved = 0;
    g_CardStateFlags = g_CardStateFlags | 0x440;
  }
  return;
}



//==== 000e6ae8  ns=memcard  size=0x10
// sig: void CardState_PROMPT_BEGIN_UNFORMATTED(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_PROMPT_BEGIN_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}



//==== 000e6af8  ns=memcard  size=0x10
// sig: void CardState_PROMPT_BEGIN_NOSAVE(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::CardState_PROMPT_BEGIN_NOSAVE(void)

{
  g_CardState = 0xc;
  return;
}



//==== 000e6b08  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MEMCARD(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MEMCARD(void)

{
  DAT_0072666c = 0x10000;
  return;
}



//==== 000e6b1c  ns=memcard  size=0x15c
// sig: void memcard_GetName(char * buff)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 0071f970: '/BASCUS-97199RATCHET' | 0071f985: '/BASCUS-97199RATCHET/*' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET' | 0071fa03: '/BASCUS-97199RATCHET/save%d.bin'

void memcard::memcard_GetName(char *buff)

{
  int iVar1;
  int iVar2;
  
  if (buff[0x12] == 'E') {
    s__BASCUS_97199RATCHET_0071f970[2] = 'E';
  }
  else if (buff[0x12] == 'P') {
    s__BASCUS_97199RATCHET_0071f970[2] = 'I';
  }
  iVar1 = 3;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xd];
    iVar1 = iVar2;
  } while (iVar2 < 7);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xd];
    iVar1 = iVar2;
  } while (iVar2 < 0xb);
  iVar1 = 0xb;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xe];
    iVar1 = iVar2;
  } while (iVar2 < 0xd);
  libc::strcpy(s__BASCUS_97199RATCHET___0071f985,s__BASCUS_97199RATCHET_0071f970,0xd);
  libc::strcpy(s__BASCUS_97199RATCHET_icon_sys_0071f99c,s__BASCUS_97199RATCHET_0071f970,0xd);
  libc::strcpy(s__BASCUS_97199RATCHET_static_ico_0071f9ba,s__BASCUS_97199RATCHET_0071f970,0xd);
  libc::strcpy(s__BASCUS_97199RATCHET_BASCUS_9719_0071f9da,s__BASCUS_97199RATCHET_0071f970,0xd);
  libc::strcpy(s__BASCUS_97199RATCHET_BASCUS_9719_0071f9da + 0x14,s__BASCUS_97199RATCHET_0071f970,
               0xd);
  libc::strcpy(s__BASCUS_97199RATCHET_save_d_bin_0071fa03,s__BASCUS_97199RATCHET_0071f970,0xd);
  return;
}



//==== 000e6c78  ns=stub  size=0x8
// sig: undefined STUB_000e6c78(void)
// callers(1): 00012ec8 boot::GameStart
// callees(0): 

undefined8 stub::STUB_000e6c78(void)

{
  return 0;
}



//==== 000e6c80  ns=memcard  size=0x58
// sig: int memcard_GetDataSize(mc_data * mcd)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_GetDataSize(mc_data *mcd)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 8;
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    uVar3 = 8;
    do {
      piVar1 = (int *)((int)&mcd[1].addr + iVar2);
      uVar3 = uVar3 + *(int *)((int)&mcd->size + iVar2) + 0xb & 0xfffffffc;
      iVar2 = iVar2 + 0x10;
    } while (*piVar1 != 0);
  }
  return uVar3 + 8;
}



//==== 000e6cd8  ns=memcard  size=0x30c
// sig: int memcard_RestoreData(char * addr, int index, mc_data * mcd)
// callers(1): 000e6fe4 memcard::memcard_RestoreGame
// callees(2): 0050027c fastfunc::FastMemCopy32; 005d0218 libc::memcmp

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_RestoreData(char *addr,int index,mc_data *mcd)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  void *__s1;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  piVar7 = (int *)(addr + 8);
  lVar9 = 8;
  iVar3 = 8;
  uVar6 = 0;
  uVar5 = 8;
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    do {
      iVar10 = *(int *)((int)&mcd[1].addr + iVar2);
      *(undefined4 *)((int)&mcd->mark + iVar2) = 0;
      iVar2 = iVar2 + 0x10;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  iVar2 = *piVar7;
  while (iVar2 != -1) {
    uVar4 = 0;
    while ((iVar3 = (int)((uVar4 & 0xfffffff) << 4), *(int *)((int)&mcd->addr + iVar3) != 0 &&
           (*(int *)((int)&mcd->iff + iVar3) != *piVar7))) {
      uVar4 = uVar4 + 1;
    }
    if (*(int *)((int)&mcd->addr + iVar3) == 0) {
      iVar10 = iVar10 + 1;
    }
    else {
      piVar1 = (int *)((int)&mcd->size + iVar3);
      iVar2 = piVar7[1];
      __s1 = (void *)(*(int *)((int)&mcd->addr + iVar3) + index * *piVar1);
      if (iVar2 == *piVar1) {
        lVar8 = (longlong)*piVar1;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 1;
      }
      else if (iVar2 < *piVar1) {
        lVar8 = (longlong)iVar2;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 0xffffffff;
      }
      else {
        lVar8 = (longlong)*piVar1;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 0xfffffffe;
      }
      iVar3 = libc::memcmp(__s1,piVar7 + 2,(size_t)lVar8);
      if (iVar3 != 0) {
        g_loaderr = g_loaderr + 1;
      }
      fastfunc::FastMemCopy32(__s1,piVar7 + 2,lVar8);
      lVar9 = (lVar8 + 3U & 0xfffffffc) + lVar9 + 8;
    }
    iVar3 = (int)lVar9;
    piVar7 = (int *)((int)piVar7 + (piVar7[1] + 3U & 0xfffffffc) + 8);
    iVar2 = *piVar7;
  }
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    uVar5 = 8;
    do {
      piVar1 = (int *)((int)&mcd[1].addr + iVar2);
      uVar5 = uVar5 + *(int *)((int)&mcd->size + iVar2) + 0xb & 0xfffffffc;
      iVar2 = iVar2 + 0x10;
    } while (*piVar1 != 0);
  }
  if (iVar3 + 8 != uVar5 + 8) {
    iVar10 = iVar10 + 1;
  }
  while ((iVar3 = (int)((uVar6 & 0xfffffff) << 4), *(int *)((int)&mcd->addr + iVar3) != 0 &&
         (*(int *)((int)&mcd->iff + iVar3) != piVar7[2]))) {
    if (*(int *)((int)&mcd->mark + iVar3) < 1) {
      iVar10 = iVar10 + 1;
    }
    uVar6 = uVar6 + 1;
  }
  *(int *)(&DAT_0071fad8 + DAT_0071faf0 * 0xc0) = iVar10;
  return iVar10;
}



//==== 000e6fe4  ns=memcard  size=0x170
// sig: void memcard_RestoreGame(char * addr)
// callers(2): 000e8ca0 memcard::memcard_RestoreSaveGame; 0014c370 pause::ShowScreenAfterDrekDefeat
// callees(2): 000e6cd8 memcard::memcard_RestoreData; 005cd098 libc::printf
// strings: 00652ba0: 'Out of date save!\n'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::memcard_RestoreGame(char *addr)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int index;
  char *addr_00;
  
  uVar6 = 8;
  ppuVar3 = &mc_gamedata;
  index = 0;
  uVar5 = 8;
  if (mc_gamedata != (undefined *)0x0) {
    iVar4 = 0;
    do {
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 4;
      piVar2 = (int *)(iVar4 + 0x7266a0);
      uVar6 = (uint)(*ppuVar1 + uVar6 + 0xb) & 0xfffffffc;
      iVar4 = iVar4 + 0x10;
    } while (*piVar2 != 0);
  }
  ppuVar3 = &mc_leveldata;
  if (mc_leveldata != (undefined *)0x0) {
    iVar4 = 0;
    do {
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 4;
      piVar2 = (int *)(iVar4 + 0x7269b0);
      uVar5 = (uint)(*ppuVar1 + uVar5 + 0xb) & 0xfffffffc;
      iVar4 = iVar4 + 0x10;
    } while (*piVar2 != 0);
  }
  if (*(int *)addr == uVar6 + 8) {
    if (*(int *)(addr + 4) == uVar5 + 8) {
      memcard_RestoreData(addr + 8,0,(mc_data *)&mc_gamedata);
      addr_00 = addr + 8 + uVar6 + 8;
      do {
        memcard_RestoreData(addr_00,index,(mc_data *)&mc_leveldata);
        index = index + 1;
        addr_00 = addr_00 + uVar5 + 8;
      } while (index < 0x14);
    }
    else {
      libc::printf("Out of date save!\n");
    }
  }
  else {
    libc::printf("Out of date save!\n");
  }
  return;
}



//==== 000e7154  ns=memcard  size=0x4e4
// sig: undefined memcard_SetupNewGameGlobals(void)
// callers(1): 000e7638 memcard::memcard_ResetGame
// callees(1): 005d0140 libc::memset
// strings: 0096c074: 'None' | 0071fb2c: '������������'

void memcard::memcard_SetupNewGameGlobals(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 4;
  g_heroMaxNanotech = 4;
  DAT_0071fb24 = 1;
  DAT_0071fb59 = 1;
  g_GameSettings.Stereo = 1;
  DAT_0071fb58 = 1;
  g_GameSettings.MusicVolume = 0x2cc;
  g_GameSettings.SfxVolume = 0x400;
  Level = Veldin;
  g_boltCount = 0;
  g_ChallengeMode = 0;
  g_FrameCount = 0;
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  libc::memset(&MiscLevelFlags,0,0x80);
  libc::memset(Cheats,0,0xc);
  libc::memset(g_SkillPoints,0,0x20);
  libc::memset(&currentAmmoArray,0,0x25);
  libc::memset(&UnlockableItems,0,0x25);
  libc::memset(CHAR_ARRAY_0096c165,0,0x25);
  libc::memset(g_purchasableVendorItems,0,0xc);
  libc::memset(UINT_ARRAY_0096c1dc,0,8);
  libc::memset(&g_SeenPlanets,0,0x14);
  libc::memset(GalacticMap,0,0x50);
  libc::memset(g_KeyLevelFlags,0,0x790);
  libc::memset(CHAR_ARRAY_00a1000c,0,0x4a0);
  libc::memset(CHAR_ARRAY_00a0feec,0,0x120);
  libc::memset(CHAR_ARRAY_00a0fdc4,0,0x128);
  DAT_0071fb24 = 1;
  DAT_0071fb59 = 1;
  DAT_0071fb58 = 1;
  g_GameSettings.CameraLeftRight = 1;
  DAT_00969c98 = 0;
  DAT_00969c9c = 0;
  DAT_00969ca4 = 0;
  g_GameSettings.CameraUpDown = 1;
  g_GameSettings.CameraSpeed = 1;
  libc::memset(&g_goldWeaponsArray,0,0x28);
  g_goodiesMenuActive = 0;
  libc::memset(&g_equippedItem,0,0x1c);
  g_GameSettings.Stereo = 1;
  g_GameSettings.MusicVolume = 0x2cc;
  g_GameSettings.SfxVolume = 0x400;
  DAT_00969c78 = 0;
  libc::memset(&DAT_0096c080,0,0xc);
  libc::memset(&DAT_00a0f51c,0,0x94);
  libc::memset(&DAT_00a0f5b0,0,0x94);
  libc::memset(&DAT_00a0f644,0,0x94);
  DAT_00a0f6dc = 0;
  update::g_GameFrameCount = 0;
  g_deathCount = 0;
  g_boltMiningTimer = 0;
  g_boltsMined = 0;
  help::g_HelpLogCount = 1;
  libc::memset(&help::g_HelpLog,0,0x96);
  puVar1 = &DAT_0072b330;
  libc::memset(&DAT_0072b330,0,0x714);
  DAT_0072b330 = 0x5277;
  DAT_0072b33c = 0x5278;
  DAT_0072b348 = 0x52b9;
  DAT_0072b354 = 0x52c0;
  do {
    iVar2 = iVar2 + -1;
    puVar1[1] = 1;
    puVar1 = puVar1 + 6;
  } while (iVar2 != 0);
  libc::memset(&VisitedPlanets,0,0x14);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    libc::memset(&DAT_0096ca34 + iVar4 * 0x8000,0,0x8000);
    libc::memset(g_LevelFlags[0] + iVar2,0,0x10);
    libc::memset(&DAT_00a0cd1c + iVar3,0,0x100);
    libc::memset(&DAT_00a0e11c + iVar3,0,0x100);
    libc::memset(&DAT_00a0cbc4 + iVar2,0,0x10);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 0x10;
  } while (iVar4 < 0x14);
  return;
}



//==== 000e7638  ns=memcard  size=0x84
// sig: undefined memcard_ResetGame(void)
// callers(3): 00012048 boot::PrepareFrontbin; 0013e634 pause::PrepareChallengeModeSave; 0014e6c0 pause::LoadGame_Update
// callees(2): 000e7154 memcard::memcard_SetupNewGameGlobals; 0011dbcc music::LoadMusic2

void memcard::memcard_ResetGame(void)

{
  music::LoadMusic2(1);
  memcard_SetupNewGameGlobals();
  music::LoadMusic2(1);
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  Level = Veldin;
  return;
}



//==== 000e76bc  ns=memcard  size=0x10
// sig: int memcard_GetSaveSysState(void)
// callers(1): 00079b18 freeze::UpdateFreeze
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_GetSaveSysState(void)

{
  return g_memcardSaveSysState;
}



//==== 000e76cc  ns=memcard  size=0x178
// sig: undefined memcard_Update(void)
// callers(4): 00012048 boot::PrepareFrontbin; 000e0e60 main::startLevel; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(5): 00112dc0 mobyutil::MB_UnlockTrophy; 0011b124 mobyutil::MB_CountGoldWeapons; 0011b1b4 mobyutil::MB_CountGoldBolts; 004e7404 idol::GetSaveData; 004e7d18 FUN_004e7d18

void memcard::memcard_Update(void)

{
  int iVar2;
  undefined8 uVar1;
  
  mobyutil::MB_CountGoldBolts();
  iVar2 = mobyutil::MB_CountGoldWeapons();
  if ((uint)g_memcardRestoredBolts < g_totalBoltsCollected) {
    DAT_00a2308d = '\0';
  }
  if (DAT_00a23094 < iVar2) {
    DAT_00a2308e = '\0';
  }
  if ((iVar2 == 10) && (DAT_00a2308e != '\x01')) {
    mobyutil::MB_UnlockTrophy(RACHET_KING_MIDAS);
  }
  if ((1000000 < g_totalBoltsCollected) && (DAT_00a2308d != '\x01')) {
    mobyutil::MB_UnlockTrophy(BOLT_COLLECTOR);
  }
  if (g_memcardSaveSysState != 5) {
    if (((g_FrontEnd == '\0') || (DAT_00a23098 != '\0')) || (g_memcardSaveSysState != 0xb)) {
      if ((g_FrontEnd != '\0') && (g_memcardSaveSysState == 0xc)) {
        g_gameMode = GAME_MODE_NORMAL;
        idol::GetSaveData();
        g_memcardSaveSysState = 5;
      }
    }
    else {
      DAT_00a23098 = '\x01';
      iVar2 = idol::GetSaveData();
      if (*(int *)(iVar2 + 0x468) == 0xb) {
        uVar1 = idol::GetSaveData();
        FUN_004e7d18(uVar1,0x66);
      }
    }
  }
  return;
}



//==== 000e7844  ns=stub  size=0x8
// sig: undefined STUB_000e7844(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000e7844(void)

{
  return 0;
}



//==== 000e784c  ns=memcard  size=0x138
// sig: int memcard_PrepData(char * addr, int index, mc_data * mcd)
// callers(1): 000e7984 memcard::memcard_MakeWholeSave
// callees(1): 0050027c fastfunc::FastMemCopy32

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_PrepData(char *addr,int index,mc_data *mcd)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  pcVar4 = addr + 8;
  uVar6 = 0;
  if (mcd->addr != (void *)0x0) {
    iVar7 = 0;
    uVar6 = 0;
    do {
      piVar5 = (int *)((int)&mcd->size + iVar7);
      iVar2 = *(int *)((int)&mcd->addr + iVar7);
      iVar1 = *piVar5;
      *(undefined4 *)pcVar4 = *(undefined4 *)((int)&mcd->iff + iVar7);
      *(int *)(pcVar4 + 4) = *piVar5;
      fastfunc::FastMemCopy32(pcVar4 + 8,iVar2 + index * iVar1,*piVar5);
      piVar3 = (int *)((int)&mcd[1].addr + iVar7);
      pcVar4 = (char *)((uint)(pcVar4 + 8 + *piVar5 + 3) & 0xfffffffc);
      uVar6 = uVar6 + *piVar5 + 0xb & 0xfffffffc;
      iVar7 = iVar7 + 0x10;
    } while (*piVar3 != 0);
  }
  pcVar4[0] = -1;
  pcVar4[1] = -1;
  pcVar4[2] = -1;
  pcVar4[3] = -1;
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  addr[4] = '\0';
  addr[5] = '\0';
  addr[6] = '\0';
  addr[7] = '\0';
  *(uint *)addr = uVar6 + 8;
  return uVar6 + 0x10;
}



//==== 000e7984  ns=memcard  size=0x134
// sig: void memcard_MakeWholeSave(char * addr)
// callers(3): 000e8888 memcard::memcard_PerformOperation; 0013e634 pause::PrepareChallengeModeSave; 0013ea48 pause::MakeWholeSaveWithMode
// callees(1): 000e784c memcard::memcard_PrepData

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::memcard_MakeWholeSave(char *addr)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuVar6;
  int index;
  char *addr_00;
  
  uVar4 = 8;
  ppuVar6 = &mc_gamedata;
  index = 0;
  if (mc_gamedata != (undefined *)0x0) {
    iVar3 = 0;
    uVar4 = 8;
    do {
      ppuVar1 = ppuVar6 + 1;
      ppuVar6 = ppuVar6 + 4;
      piVar2 = (int *)(iVar3 + 0x7266a0);
      uVar4 = (uint)(*ppuVar1 + uVar4 + 0xb) & 0xfffffffc;
      iVar3 = iVar3 + 0x10;
    } while (*piVar2 != 0);
  }
  uVar5 = 8;
  ppuVar6 = &mc_leveldata;
  *(uint *)addr = uVar4 + 8;
  if (mc_leveldata != (undefined *)0x0) {
    iVar3 = 0;
    uVar5 = 8;
    do {
      ppuVar1 = ppuVar6 + 1;
      ppuVar6 = ppuVar6 + 4;
      piVar2 = (int *)(iVar3 + 0x7269b0);
      uVar5 = (uint)(*ppuVar1 + uVar5 + 0xb) & 0xfffffffc;
      iVar3 = iVar3 + 0x10;
    } while (*piVar2 != 0);
  }
  *(uint *)(addr + 4) = uVar5 + 8;
  iVar3 = memcard_PrepData(addr + 8,0,(mc_data *)&mc_gamedata);
  addr_00 = addr + 8 + iVar3;
  do {
    iVar3 = memcard_PrepData(addr_00,index,(mc_data *)&mc_leveldata);
    index = index + 1;
    addr_00 = addr_00 + iVar3;
  } while (index < 0x14);
  return;
}



//==== 000e7ab8  ns=memcard  size=0x10
// sig: int memcard_ReturnLang(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_ReturnLang(void)

{
  return g_Language;
}



//==== 000e7ac8  ns=memcard  size=0xa4
// sig: undefined memcard_InitSaveMsg(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(6): 004e7404 idol::GetSaveData; 004e8148 FUN_004e8148; 005038e0 FUN_005038e0; 00503a3c FUN_00503a3c; 00503bd0 FUN_00503bd0; 0064f504 cell::cellSysutilCheckCallback
// strings: 00652bb4: 'rc1/ps3data/global/locale/SaveMsg_UTF8.dat'

void memcard::memcard_InitSaveMsg(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cell::cellSysutilCheckCallback();
  uVar1 = FUN_005038e0();
  FUN_00503a3c(uVar1,&DAT_00a2088d,1,&PTR_memcard_ReturnLang_00705f10,
               "rc1/ps3data/global/locale/SaveMsg_UTF8.dat");
  uVar2 = FUN_00503bd0(uVar1,6000);
  uVar1 = FUN_00503bd0(uVar1,0x1773);
  uVar3 = idol::GetSaveData();
  FUN_004e8148(uVar3,uVar2,uVar1);
  return;
}



//==== 000e7b6c  ns=stub  size=0x24
// sig: undefined STUB_000e7b6c(void)
// callers(0): 
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x000e7b88) */

undefined8 stub::STUB_000e7b6c(void)

{
  return 0;
}



//==== 000e7b90  ns=memcard  size=0x104
// sig: void memcard_RestoreInfo(char * addr, int slot, int index)
// callers(0): 
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x000e7bb8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::memcard_RestoreInfo(char *addr,int slot,int index)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(index * 0x1c + 0x71fa5c + slot * 0xc0) = 1;
  (&DAT_0071fa44)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x10);
  (&DAT_0071fa48)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x1c);
  puVar1 = (undefined4 *)(index * 0x1c + 0x71fa54 + slot * 0xc0);
  (&DAT_0071fa4c)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x28);
  (&DAT_0071fa50)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x34);
  *puVar1 = *(undefined4 *)(addr + 0x40);
  puVar1[1] = *(undefined4 *)(addr + 0x44);
  return;
}



//==== 000e7c94  ns=memcard  size=0xb4
// sig: char * memcard_GetSaveMsgString(int idx)
// callers(1): 000e8268 memcard::memcard_ConstructSaveString
// callees(2): 005038e0 FUN_005038e0; 00503bd0 FUN_00503bd0
// strings: 00652be0: 'FAILZ!'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * memcard::memcard_GetSaveMsgString(int idx)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (idx < 2) {
    if (-1 < idx) {
      if (0 < idx) {
        uVar1 = FUN_005038e0();
        pcVar2 = (char *)FUN_00503bd0(uVar1,2000);
        return pcVar2;
      }
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,1000);
      return pcVar2;
    }
  }
  else {
    if (idx < 3) {
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,0x1773);
      return pcVar2;
    }
    if (idx < 4) {
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,3000);
      return pcVar2;
    }
  }
  return "FAILZ!";
}



//==== 000e7d48  ns=memcard  size=0x110
// sig: void memcard_ConvertSaveMsgString(char * str, void * arg)
// callers(0): 
// callees(3): 005038e0 FUN_005038e0; 00503ccc FUN_00503ccc; 005d0140 libc::memset

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::memcard_ConvertSaveMsgString(char *str,void *arg)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *str;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = str[uVar4];
  }
  if (g_JapaneseMode) {
    uVar4 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  }
  iVar3 = g_memcardStrBufIdx * 0x400;
  g_memcardStrBufIdx = (g_memcardStrBufIdx + 1) % 5;
  libc::memset(g_memcardStrBufs + iVar3,0,0x400);
  uVar2 = FUN_005038e0();
  FUN_00503ccc(uVar2,str,uVar4,g_memcardStrBufs + iVar3,0x400,arg);
  return;
}



//==== 000e7e58  ns=memcard  size=0x338
// sig: char * memcard_FixupAccentChars(char * str)
// callers(1): 000e8268 memcard::memcard_ConstructSaveString
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * memcard::memcard_FixupAccentChars(char *str)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *str;
  iVar3 = 0;
  do {
    if (cVar1 == '\0') {
      return str;
    }
    bVar2 = str[iVar3];
    if (0x80 < bVar2) {
      if (bVar2 < 0x97) {
        if (bVar2 < 0x8b) {
          if (bVar2 < 0x85) {
            if (bVar2 < 0x82) {
              if (0x80 < bVar2) {
                str[iVar3] = -0x40;
              }
            }
            else if (bVar2 < 0x83) {
LAB_000e8098:
              str[iVar3] = -0x37;
            }
            else if (bVar2 < 0x84) {
              str[iVar3] = -0x3c;
            }
            else {
              str[iVar3] = -0x1f;
            }
          }
          else if (bVar2 < 0x88) {
            if (bVar2 < 0x86) {
              str[iVar3] = -0x20;
            }
            else if (bVar2 < 0x87) {
              str[iVar3] = -0x1e;
            }
            else {
              str[iVar3] = -0x1c;
            }
          }
          else {
            if (bVar2 < 0x89) goto LAB_000e8098;
            if (bVar2 < 0x8a) {
              str[iVar3] = -0x38;
            }
            else {
              str[iVar3] = -0x36;
            }
          }
        }
        else if (bVar2 == 0x96) {
          str[iVar3] = -0x12;
        }
        else if (bVar2 == 0x95) {
          str[iVar3] = -0x14;
        }
        else if (bVar2 == 0x92) {
          str[iVar3] = -0x32;
        }
        else if (bVar2 == 0x91) {
          str[iVar3] = -0x34;
        }
        else if (bVar2 != 0x8f) {
          if (bVar2 == 0x8e) {
            str[iVar3] = -0x16;
          }
          else if (bVar2 == 0x8d) {
            str[iVar3] = -0x18;
          }
          else if (bVar2 == 0x8c) {
            str[iVar3] = -0x17;
          }
        }
      }
      else if (bVar2 < 0xa4) {
        if (bVar2 < 0x9d) {
          if (bVar2 < 0x99) {
            if (bVar2 < 0x98) {
              str[iVar3] = -0x11;
            }
            else {
              str[iVar3] = -0x2d;
            }
          }
          else if (0x9a < bVar2) {
            if (bVar2 < 0x9c) {
              str[iVar3] = -0x2a;
            }
            else {
              str[iVar3] = -0xd;
            }
          }
        }
        else if (bVar2 < 0xa0) {
          if (bVar2 < 0x9e) {
            str[iVar3] = -0xe;
          }
          else if (bVar2 < 0x9f) {
            str[iVar3] = -0xc;
          }
          else {
            str[iVar3] = -10;
          }
        }
        else if (bVar2 < 0xa1) {
          str[iVar3] = -0x26;
        }
        else if (0xa2 < bVar2) {
          str[iVar3] = -0x24;
        }
      }
      else if (bVar2 < 0xaa) {
        if (bVar2 < 0xa7) {
          if (bVar2 < 0xa6) {
            str[iVar3] = -7;
          }
          else {
            str[iVar3] = -5;
          }
        }
        else if (bVar2 < 0xa8) {
          str[iVar3] = -4;
        }
        else if (bVar2 < 0xa9) {
          str[iVar3] = -0x2f;
        }
        else {
          str[iVar3] = -0xf;
        }
      }
      else if (bVar2 < 0xad) {
        if (bVar2 < 0xab) {
          str[iVar3] = -0x39;
        }
        else if (bVar2 < 0xac) {
          str[iVar3] = -0x19;
        }
        else {
          str[iVar3] = -0x21;
        }
      }
      else if (bVar2 == 0xc5) {
        str[iVar3] = -0x4c;
      }
    }
    iVar3 = iVar3 + 1;
    cVar1 = str[iVar3];
  } while( true );
}



//==== 000e8190  ns=memcard  size=0xd8
// sig: undefined memcard_ConstructPlanetString(undefined4 buf, undefined4 id)
// callers(0): 
// callees(2): 0007b740 help::help_msg_string_by_index; 005cd2a8 libc::snprintf
// strings: 00652bf0: '%s %s'

int memcard::memcard_ConstructPlanetString(char *buf,int id)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  StringId helpmsg;
  
  helpmsg = id + STR_PLANET;
  if ((id == 0xc || id == 0x10) || (id == 6)) {
    uVar1 = help::help_msg_string_by_index(helpmsg);
    iVar3 = libc::snprintf(buf,"%s",uVar1);
  }
  else {
    if (id == 0) {
      helpmsg = STR_VELDIN;
    }
    uVar1 = help::help_msg_string_by_index(STR_PLANET);
    uVar2 = help::help_msg_string_by_index(helpmsg);
    iVar3 = libc::snprintf(buf,"%s %s",uVar1,uVar2);
  }
  return iVar3;
}



//==== 000e8268  ns=memcard  size=0x590
// sig: char * memcard_ConstructSaveString(char * buf)
// callers(1): 000e8888 memcard::memcard_PerformOperation
// callees(9): 0007b740 help::help_msg_string_by_index; 000e7c94 memcard::memcard_GetSaveMsgString; 000e7e58 memcard::memcard_FixupAccentChars; 005038e0 FUN_005038e0; 00503ccc FUN_00503ccc; 00504d90 FUN_00504d90; 005cc8d8 libc::strcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 00652c08: '%s %d' | 00652c10: ' - %s%d:%s%d\n%s: %d\n%s' | 00652bf0: '%s %s' | 00652c28: 'Ratchet & Clank' | 00652c38: '%s - %s' | 00652c40: '%s\n%s %s%d:%s%d\n%s: %d\n%s%s%s'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * memcard::memcard_ConstructSaveString(char *buf)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar8;
  StringId helpmsg;
  uint uVar9;
  LevelId LVar10;
  int iVar11;
  longlong lVar12;
  undefined1 local_1c4 [4];
  char acStack_1c0 [8];
  char acStack_1b8 [8];
  char acStack_1b0 [64];
  char acStack_170 [64];
  byte local_130 [64];
  char acStack_f0 [136];
  
  iVar8 = g_FrameCount / 0x34bc0;
  lVar12 = (longlong)iVar8;
  iVar11 = g_FrameCount / 0xe10 - ((int)(lVar12 << 6) - (int)(lVar12 << 2));
  if (iVar11 < 10) {
    puVar2 = &DAT_00652bf8;
  }
  else {
    puVar2 = &DAT_00652c00;
  }
  libc::snprintf(acStack_1c0,"%s",puVar2);
  if (iVar8 < 10) {
    puVar2 = &DAT_00652bf8;
  }
  else {
    puVar2 = &DAT_00652c00;
  }
  libc::snprintf(acStack_1b8,"%s",puVar2);
  LVar10 = Level;
  if (g_JapaneseMode == false) {
    pcVar5 = memcard_GetSaveMsgString(1);
    libc::snprintf(acStack_170,"%s %d",pcVar5,g_ChallengeMode);
    if (g_FrontEnd != '\0') {
      LVar10 = LVar10 + Novalis;
    }
    if (((int)LVar10 < 0) || (0x12 < (int)LVar10)) {
      libc::snprintf(acStack_1b0,"Ratchet & Clank");
    }
    else {
      helpmsg = LVar10 + 0x4ecc;
      if (((LVar10 == Kalebo) || (LVar10 == Hoven)) || (LVar10 == Blarg)) {
        uVar3 = help::help_msg_string_by_index(helpmsg);
        libc::snprintf(acStack_1b0,"%s",uVar3);
      }
      else {
        if (LVar10 == Veldin) {
          helpmsg = STR_VELDIN;
        }
        uVar3 = help::help_msg_string_by_index(STR_PLANET);
        uVar4 = help::help_msg_string_by_index(helpmsg);
        libc::snprintf(acStack_1b0,"%s %s",uVar3,uVar4);
      }
    }
    pcVar5 = memcard_GetSaveMsgString(3);
    libc::snprintf((char *)local_130,"%s",pcVar5);
    if ((0x60 < local_130[0]) && (local_130[0] < 0x7b)) {
      local_130[0] = local_130[0] - 0x20;
    }
    uVar3 = help::help_msg_string_by_index(LVar10 + 0x4eb9);
    libc::snprintf(acStack_f0,"%s - %s",uVar3,acStack_1b0);
    pcVar5 = memcard_FixupAccentChars(acStack_f0);
    uVar9 = 0;
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      uVar9 = uVar9 + 1;
      cVar1 = pcVar5[uVar9];
    }
    if (g_JapaneseMode != false) {
      uVar9 = ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    }
    iVar8 = g_memcardStrBufIdx * 0x400;
    g_memcardStrBufIdx = (g_memcardStrBufIdx + 1) % 5;
    libc::memset(g_memcardStrBufs + iVar8,0,0x400);
    uVar3 = FUN_005038e0();
    uVar3 = FUN_00503ccc(uVar3,pcVar5,uVar9,g_memcardStrBufs + iVar8,0x400,local_1c4);
    FUN_00504d90(boot::g_pHWSystem);
    pcVar5 = memcard_GetSaveMsgString(0);
    libc::snprintf(buf,"%s\n%s %s%d:%s%d\n%s: %d\n%s%s%s",uVar3,pcVar5,acStack_1b8,lVar12,
                   acStack_1c0,iVar11);
  }
  else {
    pcVar5 = memcard_GetSaveMsgString(0);
    pcVar6 = memcard_GetSaveMsgString(3);
    pcVar7 = memcard_GetSaveMsgString(1);
    libc::snprintf(acStack_170,"%s %d",pcVar7,g_ChallengeMode);
    libc::strcpy(buf,pcVar5);
    libc::snprintf(buf," - %s%d:%s%d\n%s: %d\n%s",acStack_1b8,lVar12,acStack_1c0,iVar11,pcVar6,
                   g_boltCount);
  }
  return buf;
}



//==== 000e87f8  ns=memcard  size=0x74
// sig: void memcard_SetSaveDialogStrings(void)
// callers(0): 
// callees(4): 004e7404 idol::GetSaveData; 004e8148 FUN_004e8148; 005038e0 FUN_005038e0; 00503bd0 FUN_00503bd0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memcard::memcard_SetSaveDialogStrings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005038e0();
  uVar1 = FUN_00503bd0(uVar1,6000);
  uVar2 = FUN_005038e0();
  uVar2 = FUN_00503bd0(uVar2,0x1773);
  uVar3 = idol::GetSaveData();
  FUN_004e8148(uVar3,uVar2,uVar1);
  return;
}



//==== 000e886c  ns=memcard  size=0x1c
// sig: int memcard_IsSaveSystemIdle(void)
// callers(11): 00013a20 boot::GameShutDown; 0013b838 pause::UpdatePause; 0013d8a0 pause::FrontEnd_UpdateMenu; 001480f4 pause::ImageWidget_Update; 00148908 pause::UpdateOptionsMenus; 001491f0 pause::ImageWidget_DrawWithText; 0014dfa0 pause::SaveGame_Update; 0014e3ec pause::SaveLoad_Update2; 0014e6c0 pause::LoadGame_Update; 0014ec5c pause::DrawSaveLoadFrame; 00164c58 space::DoSpaceTransition
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_IsSaveSystemIdle(void)

{
  return (uint)(g_memcardSaveBusy == 0);
}



//==== 000e8888  ns=memcard  size=0x21c
// sig: undefined memcard_PerformOperation(int mode)
// callers(4): 000e8aa4 memcard::memcard_Save; 0013e634 pause::PrepareChallengeModeSave; 00141408 pause::UpdatePauseMenu; 0014e6c0 pause::LoadGame_Update
// callees(10): 000e4c0c map::Map_SaveRevealMask; 000e7984 memcard::memcard_MakeWholeSave; 000e8268 memcard::memcard_ConstructSaveString; 004e7404 idol::GetSaveData; 004e7a34 idol::SaveSystem_PS::RunSaveSystem; 004e80d8 FUN_004e80d8; 004e8148 FUN_004e8148; 005038e0 FUN_005038e0; 00503bd0 FUN_00503bd0; 005d0140 libc::memset
// strings: 00a244a8: 'None'

void memcard::memcard_PerformOperation(int mode)

{
  undefined4 uVar1;
  LevelId LVar2;
  int iVar3;
  int iVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  LevelId LVar8;
  char *pcVar9;
  char *addr;
  
  if (g_memcardSaveBusy != 0) {
    return;
  }
  iVar7 = idol::GetSaveData();
  uVar1 = *(undefined4 *)(iVar7 + 0x46c);
  libc::memset(g_memcardSaveString,0,0x100);
  uVar4 = FUN_005038e0();
  uVar4 = FUN_00503bd0(uVar4,6000);
  uVar5 = FUN_005038e0();
  uVar5 = FUN_00503bd0(uVar5,0x1773);
  uVar6 = idol::GetSaveData();
  FUN_004e8148(uVar6,uVar5,uVar4);
  if (g_FrontEnd != '\0') {
    *(undefined4 *)(iVar7 + 0x460) = 1;
  }
  iVar3 = SaveDataPtr;
  LVar2 = Level;
  addr = (char *)(SaveDataPtr + 0x100000);
  if (mode != 4) {
    if (mode != 3) {
      if (mode == 2) {
        return;
      }
      if (mode == 1) goto LAB_000e8a34;
      if (mode != 0) {
        return;
      }
    }
    if (g_loadingPlanet != 0) {
      Level = g_newlevelnum;
    }
    LVar8 = Level;
    if ((int)Level < 0) {
      LVar8 = Veldin;
    }
    *(LevelId *)(iVar7 + 0x1c) = LVar8;
    pcVar9 = memcard_ConstructSaveString(g_memcardSaveString);
    FUN_004e80d8(iVar7,pcVar9);
    DAT_008fabb4 = iVar3;
    map::Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    libc::memset(addr,0xf,uVar1);
    memcard_MakeWholeSave(addr);
  }
LAB_000e8a34:
  Level = LVar2;
  idol::SaveSystem_PS::RunSaveSystem
            (iVar7,mode,addr,uVar1,&PTR_memcard_printGameSaved_00705f88,
             &PTR_memcard_print_SavingGameCB_PS3_00705f90,&PTR_memcard_RestoreSaveGame_00705f80,
             &PTR_memcard_print_LoadingCB_PS3_00705f98);
  return;
}



//==== 000e8aa4  ns=memcard  size=0x1c4
// sig: int memcard_Save(int force, int level)
// callers(49): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00079b18 freeze::UpdateFreeze; 0014c370 pause::ShowScreenAfterDrekDefeat; 0014dfa0 pause::SaveGame_Update; 0015e8a0 space::StartLeaveLevelCutscene; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001d8090 mobyupdate_unsorted::UpdateMoby_1130; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001dd210 mobyupdate_helpers::M1140_001dd210; 001df770 mobyupdate_unsorted::UpdateMoby_1144; 001f1b50 mobyupdate_unsorted::UpdateMoby_1190; 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 002563b0 mobyupdate_unsorted::UpdateMoby_1354; 0025d3a8 mobyupdate_unsorted::UpdateMoby_1377; 00267798 mobyupdate_unsorted::UpdateMoby_1388; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}
// callees(3): 000e4c0c map::Map_SaveRevealMask; 000e50bc map::Map_SaveLevelObjectState; 000e8888 memcard::memcard_PerformOperation
// strings: 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_Save(int force,int level)

{
  LevelId LVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  
  if ((int)Level < 0x14) {
    map::Map_SaveLevelObjectState();
    map::Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    g_memcardGameSaved = g_memcardGameSaved | force;
    if (g_memcardGameSaved == 0) {
      if (force != 0) {
        memcard_PerformOperation(0);
      }
    }
    else {
      if (force == 0) {
        g_CardStateFlags = g_CardStateFlags | 0x200;
      }
      cVar5 = '\0';
      g_CardStateFlags = g_CardStateFlags | 0x200;
      DAT_0071faf4 = Level;
      if (-1 < level) {
        cVar5 = (&VisitedPlanets.Veldin)[level];
        Level = level;
        if ((&VisitedPlanets.Veldin)[level] == '\0') {
          (&VisitedPlanets.Veldin)[level] = '\x01';
        }
      }
      LVar1 = Level;
      iVar4 = DAT_0071fa38;
      (&DAT_0071fa48)[DAT_0071fa38 * 7] = g_boltCount;
      uVar3 = g_FrameCount;
      uVar2 = g_ChallengeMode;
      (&DAT_0071fa44)[iVar4 * 7] = LVar1;
      (&DAT_0071fa4c)[iVar4 * 7] = uVar2;
      (&DAT_0071fa50)[iVar4 * 7] = uVar3;
      if (-1 < level) {
        Level = DAT_0071faf4;
        (&VisitedPlanets.Veldin)[LVar1] = cVar5;
      }
      memcard_PerformOperation(3);
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



//==== 000e8c68  ns=memcard  size=0x38
// sig: undefined memcard_print_TimeForPain(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 00652c64: 'User agrees.  Time for the pain!\n'

void memcard::memcard_print_TimeForPain(void)

{
  print_tty2("User agrees.  Time for the pain!\n");
  g_memcardWaitDialog = 0;
  return;
}



//==== 000e8ca0  ns=memcard  size=0x280
// sig: undefined memcard_RestoreSaveGame(void)
// callers(0): 
// callees(15): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 000e6fe4 memcard::memcard_RestoreGame; 0011b124 mobyutil::MB_CountGoldWeapons; 0011e2d4 pad::UpdatePad; 004d6f50 FUN_004d6f50; 004e7404 idol::GetSaveData; 004e8148 FUN_004e8148; 004ffc9c print_tty2; 005038e0 FUN_005038e0; 00503bd0 FUN_00503bd0; 005cd098 libc::printf; 005d0140 libc::memset; 0064f504 cell::cellSysutilCheckCallback; 0064f604 cell::cellMsgDialogOpen2
// strings: 00652c88: ' Restoring saved game...\n' | 00652ca8: '\n Restored game from Idol/memcard.cpp \n'

undefined8 memcard::memcard_RestoreSaveGame(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  libc::memset(&g_memcardRestoredBolts,0,8);
  libc::memset(&DAT_00a2308d,0,2);
  libc::printf(" Restoring saved game...\n");
  if ((int)param_1 == 0) {
    memcard_RestoreGame(param_2);
    g_memcardRestoredBolts = g_totalBoltsCollected;
    if (999999 < g_totalBoltsCollected) {
      DAT_00a2308d = 1;
    }
    DAT_00a23094 = mobyutil::MB_CountGoldWeapons();
    if (DAT_00a23094 == 10) {
      DAT_00a2308e = 1;
    }
    if (*(char *)(g_viewMtxPtr + 0x185a4) == '\0') {
      DAT_00a52e64 = 0;
    }
    else {
      FUN_004d6f50(g_viewMtxPtr,DAT_00a52e64);
    }
    g_memcardGameSaved = 1;
    print_tty2("\n Restored game from Idol/memcard.cpp \n");
    uVar1 = FUN_005038e0();
    uVar1 = FUN_00503bd0(uVar1,6000);
    uVar2 = FUN_005038e0();
    uVar2 = FUN_00503bd0(uVar2,0x1773);
    uVar3 = idol::GetSaveData();
    FUN_004e8148(uVar3,uVar2,uVar1);
    iVar4 = idol::GetSaveData();
    if ((*(uint *)(iVar4 + 0x460) & 1) == 0) {
      *(undefined1 *)(TrophyMgr + 0x18c) = 0;
      uVar1 = FUN_005038e0();
      uVar1 = FUN_00503bd0(uVar1,5000);
      cell::cellMsgDialogOpen2(1,uVar1,&PTR_memcard_print_TimeForPain_00705f78,0,0);
      g_memcardWaitDialog = 1;
      do {
        pad::UpdatePad();
        draw::UpdateOcclusion(0);
        cell::cellSysutilCheckCallback();
        draw::Render_DispatchJob();
      } while (g_memcardWaitDialog == 1);
    }
  }
  else if ((int)param_1 != 1) {
    g_memcardGameSaved = 0;
    g_newlevelnum = 0xffffffff;
    g_loadingPlanet = 1;
    g_CutscenePlaying = 1;
  }
  return param_1;
}



//==== 000e8f20  ns=memcard  size=0x4c
// sig: undefined memcard_printGameSaved(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 00652cd0: '\n Game has been saved!\n'

undefined8 memcard::memcard_printGameSaved(undefined8 param_1)

{
  libc::printf("\n Game has been saved!\n");
  g_memcardGameSaved = 1;
  return param_1;
}



//==== 000e8f6c  ns=memcard  size=0x30
// sig: undefined memcard_print_SavingGameCB_PS3(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 00652ce8: '###### PS3_SavingGame Callback in Idol/memcard.cpp####\n'

undefined8 memcard::memcard_print_SavingGameCB_PS3(void)

{
  print_tty2("###### PS3_SavingGame Callback in Idol/memcard.cpp####\n");
  return 0;
}



//==== 000e8f9c  ns=memcard  size=0x3c
// sig: undefined memcard_print_LoadingCB_PS3(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 00652d20: '####### LoadingCB_PS3 Callback has been called#####\n'

undefined8 memcard::memcard_print_LoadingCB_PS3(undefined8 param_1)

{
  print_tty2("####### LoadingCB_PS3 Callback has been called#####\n");
  return param_1;
}



//==== 000e8fd8  ns=memcard  size=0x13c
// sig: int memcard_PollSaveResult(void)
// callers(1): 00079b18 freeze::UpdateFreeze
// callees(3): 004e7404 idol::GetSaveData; 004e7d94 FUN_004e7d94; 004e7e6c FUN_004e7e6c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcard::memcard_PollSaveResult(void)

{
  int iVar1;
  
  if ((g_memcardSaveBusy != 0) || (g_memcardPollDone != '\0')) {
    return -1;
  }
  if (g_memcardSaveSysState != 0xc) {
    if (g_memcardSaveSysState != 0xb) {
      if (g_memcardSaveSysState == 6) {
        g_memcardPollDone = '\x01';
        return 1;
      }
      if (g_memcardSaveSysState == 5) {
        return 0;
      }
      if (g_memcardSaveSysState != 3) {
        if (g_memcardSaveSysState == 1) {
          idol::GetSaveData();
          iVar1 = FUN_004e7e6c();
          g_memcardPollDone = '\x01';
          return iVar1;
        }
        if (g_memcardSaveSysState != 0) {
          return 0;
        }
      }
      idol::GetSaveData();
      iVar1 = FUN_004e7d94();
      g_memcardPollDone = '\x01';
      return iVar1;
    }
    g_memcardPollDone = '\x01';
    iVar1 = idol::GetSaveData();
    if (*(int *)(iVar1 + 0x468) == 0xb) {
      DAT_00a23099 = 1;
    }
  }
  g_memcardPollDone = '\x01';
  iVar1 = idol::GetSaveData();
  if (*(int *)(iVar1 + 0x468) == 0xc) {
    DAT_00a23099 = 1;
  }
  return 2;
}



//==== 000e9114  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MESH(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MESH(void)

{
  DAT_00726aac = 0x10000;
  return;
}



//==== 000e9130  ns=stub  size=0x4
// sig: undefined STUB_000e9130(void)
// callers(4): 000758cc draw::DrawWaterPatch_A; 00075aac draw::DrawWaterPatch_B; 0015a33c skyfunc::SkyDrawShellTextured; 0015a670 skyfunc::SkyDrawShellGouraud
// callees(0): 

void stub::STUB_000e9130(void)

{
  return;
}



//==== 000e9134  ns=stub  size=0x4
// sig: undefined STUB_000e9134(void)
// callers(4): 000758cc draw::DrawWaterPatch_A; 00075aac draw::DrawWaterPatch_B; 0015a33c skyfunc::SkyDrawShellTextured; 0015a670 skyfunc::SkyDrawShellGouraud
// callees(0): 

void stub::STUB_000e9134(void)

{
  return;
}



//==== 000e9138  ns=stub  size=0x4
// sig: undefined STUB_000e9138(void)
// callers(2): 000656b8 draw::ResetFrameBufferForCutscene; 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_000e9138(void)

{
  return;
}



//==== 000e913c  ns=stub  size=0x4
// sig: undefined STUB_000e913c(void)
// callers(0): 
// callees(0): 

void stub::STUB_000e913c(void)

{
  return;
}



//==== 000e9140  ns=stub  size=0x8
// sig: undefined STUB_000e9140(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000e9140(void)

{
  return 0;
}



//==== 000e9148  ns=stub  size=0x4
// sig: undefined STUB_000e9148(void)
// callers(0): 
// callees(0): 

void stub::STUB_000e9148(void)

{
  return;
}



//==== 000e914c  ns=stub  size=0x4
// sig: undefined STUB_000e914c(void)
// callers(0): 
// callees(0): 

void stub::STUB_000e914c(void)

{
  return;
}



//==== 000e9150  ns=stub  size=0x8
// sig: undefined STUB_000e9150(void)
// callers(3): 000d8be8 initonce::InitOnce; 000dcf58 loaders::NAVG_LoadFile; 001516c0 pause::M1957_Update_GirlwadOnGameComplete
// callees(0): 

undefined8 stub::STUB_000e9150(void)

{
  return 0;
}



//==== 000e9158  ns=stub  size=0x4
// sig: undefined STUB_000e9158(void)
// callers(0): 
// callees(0): 

void stub::STUB_000e9158(void)

{
  return;
}



//==== 000e915c  ns=mesh  size=0x4c
// sig: undefined AddUVOffsets(void)
// callers(18): 002a6bd0 mobyupdate_helpers::M1649_002a6bd0; 002a6cc0 mobyupdate_helpers::M1649_002a6cc0; 002a6db0 mobyupdate_helpers::M1649_002a6db0; 002a6ea0 mobyupdate_helpers::M1649_DrawScrollingTexLayers; 002d3fc8 mobyupdate_helpers::M1901_002d3fc8; 002d40b8 mobyupdate_helpers::M1901_002d40b8; 002d4800 mobyupdate_helpers::M1903_002d4800; 002d48f0 mobyupdate_helpers::M1903_002d48f0; 002d49e0 mobyupdate_helpers::M1903_002d49e0; 002d4ad0 mobyupdate_helpers::M1903_002d4ad0; 002d9678 mobyupdate_helpers::M1919_002d9678; 002d9768 mobyupdate_helpers::M1919_002d9768; 002d9858 mobyupdate_helpers::M1919_002d9858; 002d9948 mobyupdate_helpers::M1919_002d9948; 003d5a60 mobyupdate_helpers::M600_003d5a60; 003d5b50 mobyupdate_helpers::M600_003d5b50; 003d5c40 mobyupdate_helpers::M600_003d5c40; 003d5d30 mobyupdate_helpers::M600_003d5d30
// callees(0): 

void mesh::AddUVOffsets(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      *param_1 = *param_2 + fVar1;
      pfVar3 = param_2 + 1;
      param_2 = param_2 + 2;
      param_1[1] = *pfVar3 + fVar2;
      param_1 = param_1 + 2;
    } while (0 < param_3);
  }
  return;
}



//==== 000e91a8  ns=mesh  size=0x138
// sig: undefined StageTileBuf(WaterTile * param_1, void * param_2)
// callers(3): 0017b7bc water::WaterTile_StepSim; 0017b8b8 water::WaterTile_UpdateWaves; 0017cfdc water::WaterTile_DrawAll
// callees(1): 005c5ad0 libc::memcpy

void mesh::StageTileBuf(WaterTile *param_1,void *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  void *__src;
  longlong lVar12;
  
  libc::memcpy(param_1->tileLinkCorners,(void *)((int)param_2 + 0x400),0x40);
  uVar11 = 0;
  pfVar8 = (float *)param_1->tileLinkCorners;
  __src = param_2;
  do {
    uVar11 = uVar11 + 1;
    pfVar8 = pfVar8 + 0x18;
    libc::memcpy(pfVar8,__src,0x40);
    __src = (void *)((int)__src + 0x40);
  } while (uVar11 < 0x10);
  libc::memcpy(param_1->buf[1].height[1] + 10,(void *)((int)param_2 + 0x480),0x40);
  libc::memcpy(param_1->buf[1].height[3] + 2,(void *)((int)param_2 + 0x500),0x40);
  uVar1 = *(undefined4 *)((int)param_2 + 0x580);
  fVar2 = *(float *)((int)param_2 + 0x584);
  fVar3 = *(float *)((int)param_2 + 0x588);
  fVar4 = *(float *)((int)param_2 + 0x58c);
  pfVar10 = (float *)&param_1->tileLinkTop;
  fVar5 = *(float *)((int)param_2 + 0x590);
  pfVar9 = param_1->buf[0].height[0] + 2;
  pfVar8 = param_1->buf[0].height[0] + 3;
  fVar6 = *(float *)((int)param_2 + 0x594);
  lVar12 = 0x10;
  do {
    pfVar10[0x18] = *(float *)((int)param_2 + 0x440);
    pfVar10 = pfVar10 + 0x18;
    pfVar9[0x18] = (float)*(undefined4 *)((int)param_2 + 0x4c0);
    puVar7 = (undefined4 *)((int)param_2 + 0x540);
    pfVar9 = pfVar9 + 0x18;
    param_2 = (void *)((int)param_2 + 4);
    pfVar8[0x18] = (float)*puVar7;
    pfVar8 = pfVar8 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  param_1->tileLinkTop = (char)((uint)uVar1 >> 0x18);
  param_1->tileLinkLeft = (char)((uint)uVar1 >> 0x10);
  param_1->tileLinkBottom = (char)((uint)uVar1 >> 8);
  param_1->tileLinkRight = (char)uVar1;
  param_1->buf[0].height[0][2] = fVar2;
  param_1->buf[1].height[1][9] = fVar3;
  param_1->buf[1].height[2][10] = fVar4;
  param_1->buf[1].height[2][0xb] = fVar5;
  param_1->buf[1].height[4][2] = fVar6;
  return;
}



//==== 000e92e8  ns=mesh  size=0xb4
// sig: void WaterTileBufLerp(float t, float * dst, float * bufA, float * bufB)
// callers(1): 0017b8b8 water::WaterTile_UpdateWaves
// callees(0): 

void mesh::WaterTileBufLerp(float t,float *dst,float *bufA,float *bufB)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  
  uVar8 = 0;
  fVar7 = 1.0 - t;
  do {
    lVar12 = 4;
    pfVar10 = bufB;
    pfVar11 = bufA;
    pfVar9 = dst;
    do {
      bufA = pfVar11 + 4;
      fVar1 = pfVar10[1];
      bufB = pfVar10 + 4;
      fVar2 = pfVar10[2];
      fVar3 = pfVar10[3];
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      dst = pfVar9 + 4;
      fVar6 = pfVar11[3];
      *pfVar9 = *pfVar11 * fVar7 + *pfVar10 * t;
      pfVar9[1] = fVar4 * fVar7 + fVar1 * t;
      pfVar9[2] = fVar5 * fVar7 + fVar2 * t;
      pfVar9[3] = fVar6 * fVar7 + fVar3 * t;
      lVar12 = lVar12 + -1;
      pfVar10 = bufB;
      pfVar11 = bufA;
      pfVar9 = dst;
    } while (lVar12 != 0);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x17);
  return;
}



//==== 000e9470  ns=mesh  size=0x78c
// sig: undefined ShadeVerts(WaterTile * tile)
// callers(1): 0017cfdc water::WaterTile_DrawAll
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mesh::ShadeVerts(WaterTile *tile)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
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
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar25;
  byte in_cr6;
  undefined4 uVar26;
  undefined1 auVar27 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar15 = (longlong)(int)tile;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x2d0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar23;
  lVar13 = uVar23 - 0xa0;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar4[0x57] = unaff_r29;
  puVar4[0x55] = unaff_r27;
  uVar23 = (ulonglong)DAT_00902ec8;
  puVar4[0x2b] = uVar23;
  fVar12 = WaterTileConsts.lightDir.z;
  fVar11 = WaterTileConsts.lightDir.y;
  fVar10 = WaterTileConsts.lightDir.x;
  puVar4[0x53] = unaff_r25;
  auVar27 = loadVectorLeftIndexed(0x10,0x73aa00);
  auVar29 = loadVectorLeftIndexed(0x14,0x73aa00);
  *(undefined1 (*) [16])(puVar4 + 0x2e) = auVar27;
  auVar27 = loadVectorLeftIndexed(4,lVar15);
  *(undefined1 (*) [16])(puVar4 + 0x2c) = auVar29;
  puVar4[0x54] = unaff_r26;
  auVar29 = loadVectorLeftIndexed(0xc,0x73aa00);
  lVar22 = uVar23 + 0x780;
  *(float *)(puVar4 + 6) = fVar10;
  auVar27 = vectorAddFloatingPoint(auVar27,auVar29);
  *(float *)((int)puVar4 + 0x34) = fVar11;
  *(float *)(puVar4 + 7) = fVar12;
  lVar24 = uVar23 + 0x1088;
  puVar4[0x30] = 0;
  fVar11 = GameCamera.posZ;
  fVar10 = GameCamera.posY;
  *(float *)(puVar4 + 8) = GameCamera.posX;
  puVar4[0x59] = unaff_r31;
  puVar4[0x58] = unaff_r30;
  puVar4[0x56] = unaff_r28;
  puVar4[0x52] = unaff_r24;
  puVar4[0x51] = unaff_r23;
  puVar4[0x50] = unaff_r22;
  puVar4[0x4f] = unaff_r21;
  puVar4[0x4e] = unaff_r20;
  puVar4[0x4d] = unaff_r19;
  puVar4[0x4c] = unaff_r18;
  puVar4[0x4b] = unaff_r17;
  puVar4[0x4a] = unaff_r16;
  puVar4[0x49] = unaff_r15;
  *(float *)((int)puVar4 + 0x44) = fVar10;
  *(float *)(puVar4 + 9) = fVar11;
  puVar4[0x2a] = 0;
  *(undefined1 (*) [16])(puVar4 + 0x28) = auVar27;
  do {
    uVar26 = *(undefined4 *)(puVar4 + 0x28);
    auVar27 = loadVectorLeftIndexed(lVar13,0xe93a0);
    auVar47 = *(undefined1 (*) [16])(puVar4 + 0x2e);
    auVar33 = loadVectorLeftIndexed(lVar13,lVar15);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar29 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x13c) = uVar26;
    *(undefined4 *)(puVar4 + 0x27) = uVar26;
    *(undefined4 *)((int)puVar4 + 0x134) = uVar26;
    *(undefined4 *)(puVar4 + 0x26) = uVar26;
    auVar8 = _DAT_000e93e0;
    auVar7 = _DAT_000e93d0;
    auVar6 = _DAT_000e93c0;
    auVar5 = _DAT_000e93b0;
    uVar16 = puVar4[0x2b];
    auVar27 = loadVectorLeftIndexed(8,0x73aa00);
    uVar25 = puVar4[0x2a];
    auVar50 = *(undefined1 (*) [16])(puVar4 + 0x2c);
    auVar36 = auVar30 ^ auVar47;
    auVar30 = auVar30 ^ auVar50;
    auVar31 = loadVectorLeftIndexed(0x5c,0xe93a0);
    auVar28 = vectorAddFloatingPoint(auVar33,auVar27);
    auVar33 = loadVectorLeftIndexed(0x60,0xe93a0);
    auVar27 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = loadVectorLeftIndexed(100,0xe93a0);
    auVar39 = loadVectorLeftIndexed(0x68,0xe93a0);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar2 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = loadVectorLeftIndexed(0x50,0xe93a0);
    *(undefined1 (*) [16])(puVar4 + 0x1e) =
         auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x54,0xe93a0);
    auVar43 = loadVectorLeftIndexed(0x58,0xe93a0);
    *(undefined1 (*) [16])(puVar4 + 0x1c) =
         auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    iVar21 = 0;
    uVar23 = uVar25 + uVar16 + 0x70 & 0xffffffff;
    auVar31 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    *(undefined1 (*) [16])(puVar4 + 0x24) =
         auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar19 = uVar25 + uVar16 + 0x10 & 0xffffffff;
    *(undefined1 (*) [16])(puVar4 + 0x20) =
         auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = _DAT_000e9430;
    auVar33 = _DAT_000e9420;
    uVar18 = uVar25 + uVar16 + 0xd0 & 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x11c) = 0x1c1d1e1f;
    *(undefined4 *)(puVar4 + 0x23) = 0x8090a0b;
    *(undefined4 *)((int)puVar4 + 0x114) = 0x4050607;
    *(undefined4 *)(puVar4 + 0x22) = 0x10203;
    auVar9 = _DAT_000e9450;
    auVar27 = ZEXT416(0);
    auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar36 = vectorPermute(auVar36,auVar32,_DAT_000e9450);
    uVar20 = uVar25 + uVar16 + 0x6c & 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xdc) = 0x10111213;
    *(undefined4 *)(puVar4 + 0x1b) = 0x10111213;
    *(undefined4 *)((int)puVar4 + 0xd4) = 0x4050607;
    *(undefined4 *)(puVar4 + 0x1a) = 0x10203;
    uVar16 = uVar25 + uVar16 + 0x74 & 0xffffffff;
    auVar27 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    *(undefined1 (*) [16])(puVar4 + 0x18) =
         auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar27 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar48 = vectorPermute(auVar47,auVar32,auVar9);
    *(undefined1 (*) [16])(puVar4 + 0x16) = auVar36;
    auVar27 = loadVectorLeftIndexed(0xc0,0xe93a0);
    auVar31 = loadVectorLeftIndexed(0xc4,0xe93a0);
    auVar47 = loadVectorLeftIndexed(200,0xe93a0);
    auVar36 = loadVectorLeftIndexed(0xcc,0xe93a0);
    auVar49 = vectorPermute(auVar32,auVar30,auVar33);
    auVar51 = vectorPermute(auVar32,auVar50,auVar33);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar50 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    lVar17 = lVar22 + 4;
    do {
      auVar34 = loadVectorLeftIndexed(lVar13,uVar23);
      auVar37 = loadVectorRightIndexed(0x10,uVar23);
      auVar38 = *(undefined1 (*) [16])(puVar4 + 0xc);
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined4 *)((int)puVar4 + 100) = 0;
      auVar36 = (auVar34 | auVar37) >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x68,lVar1);
      *(undefined4 *)(puVar4 + 0xd) = uVar26;
      auVar47 = loadVectorLeftIndexed(lVar13,uVar20);
      auVar41 = loadVectorRightIndexed(0x10,uVar20);
      auVar42 = *(undefined1 (*) [16])(puVar4 + 0xe);
      uVar26 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar4 + 0x18),0x70,lVar1);
      *(undefined4 *)(puVar4 + 0xe) = uVar26;
      *(undefined4 *)((int)puVar4 + 0x74) = 0;
      auVar36 = (auVar47 | auVar41) >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = vectorPermute(auVar47 | auVar41,auVar42,auVar9);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x78,lVar1);
      *(undefined4 *)(puVar4 + 0xf) = uVar26;
      auVar45 = loadVectorLeftIndexed(lVar13,uVar16);
      auVar41 = loadVectorRightIndexed(0x10,uVar16);
      auVar42 = *(undefined1 (*) [16])(puVar4 + 0x10);
      uVar26 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar4 + 0x10) = uVar26;
      auVar36 = (auVar45 | auVar41) >> 0x60 & (undefined1  [16])0xffffffff;
      *(undefined4 *)((int)puVar4 + 0x84) = 0;
      auVar34 = vectorPermute(auVar32,auVar34 | auVar37,*(undefined1 (*) [16])(puVar4 + 0x1a));
      auVar45 = vectorPermute(auVar45 | auVar41,auVar42,auVar9);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x88,lVar1);
      *(undefined4 *)(puVar4 + 0x11) = uVar26;
      auVar41 = loadVectorLeftIndexed(lVar13,uVar19);
      auVar42 = loadVectorRightIndexed(0x10,uVar19);
      auVar37 = vectorPermute(auVar34,auVar38,*(undefined1 (*) [16])(puVar4 + 0x22));
      auVar34 = *(undefined1 (*) [16])(puVar4 + 0x12);
      auVar47 = vectorPermute(*(undefined1 (*) [16])(puVar4 + 0x16),auVar47,auVar39);
      auVar36 = (auVar41 | auVar42) >> 0x60 & (undefined1  [16])0xffffffff;
      *(undefined4 *)(puVar4 + 0x12) = 0;
      uVar26 = storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x94,lVar1);
      *(undefined4 *)((int)puVar4 + 0x94) = uVar26;
      auVar34 = vectorPermute(auVar41 | auVar42,auVar34,auVar33);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x98,lVar1);
      *(undefined4 *)(puVar4 + 0x13) = uVar26;
      auVar38 = vectorPermute(auVar48,auVar45,auVar39);
      auVar46 = loadVectorLeftIndexed(lVar13,uVar18);
      auVar45 = loadVectorRightIndexed(0x10,uVar18);
      auVar36 = vectorPermute(auVar49,auVar34,auVar39);
      auVar34 = vectorPermute(auVar46 | auVar45,*(undefined1 (*) [16])(puVar4 + 0x14),auVar33);
      auVar41 = vectorSubtractFloatingPoint(auVar37,auVar36);
      auVar47 = vectorSubtractFloatingPoint(auVar36,auVar47);
      auVar36 = vectorPermute(auVar51,auVar34,auVar39);
      auVar44 = vectorSubtractFloatingPoint(auVar37,auVar36);
      auVar36 = vectorSubtractFloatingPoint(auVar36,auVar38);
      *(undefined4 *)(puVar4 + 0x14) = 0;
      uVar26 = storeVectorElementWordIndexed
                         (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0xa4,lVar1);
      *(undefined4 *)((int)puVar4 + 0xa4) = uVar26;
      auVar34 = vectorPermute(auVar41,auVar41,auVar5);
      auVar38 = vectorPermute(auVar47,auVar47,auVar6);
      auVar42 = vectorPermute(auVar41,auVar41,auVar6);
      auVar47 = vectorPermute(auVar47,auVar47,auVar5);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar38,auVar32);
      auVar41 = vectorPermute(auVar44,auVar44,auVar5);
      auVar38 = vectorPermute(auVar36,auVar36,auVar6);
      auVar44 = vectorPermute(auVar44,auVar44,auVar6);
      auVar36 = vectorPermute(auVar36,auVar36,auVar5);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar32);
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar47,auVar34);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar36,auVar38);
      auVar34 = vectorAddFloatingPoint(auVar36,auVar47);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar32);
      auVar47 = vectorPermute(auVar34,auVar34,auVar7);
      auVar38 = vectorPermute(auVar34,auVar34,auVar8);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar36);
      auVar36 = (auVar46 | auVar45) >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xa8,lVar1);
      *(undefined4 *)(puVar4 + 0x15) = uVar26;
      auVar45 = *(undefined1 (*) [16])(puVar4 + 6);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar47);
      auVar41 = vectorPermute(auVar45,auVar45,auVar8);
      auVar42 = vectorPermute(auVar45,auVar45,auVar7);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar47 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar32);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar47,auVar35,auVar32);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar36,auVar40);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar47);
      auVar38 = vectorCompareEqualToFloatingPoint(auVar36,auVar36);
      auVar36 = vectorConditionalSelect(auVar47,auVar36,auVar38);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar32);
      auVar36 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar38,auVar32);
      auVar36 = vectorPermute(auVar38,auVar38,auVar7);
      auVar34 = vectorPermute(auVar38,auVar38,auVar8);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar42,auVar36,auVar45);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorSubtractFloatingPoint
                          (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar43);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,*(undefined1 (*) [16])(puVar4 + 0x1e),auVar43);
      auVar36 = ZEXT416(8);
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar34);
      auVar34 = vectorLogicalAndWithComplement(auVar34,auVar41);
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar40);
      auVar34 = vectorConditionalSelect(auVar34,auVar40,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar34,*(undefined1 (*) [16])(puVar4 + 0x1c),auVar42);
      auVar45 = *(undefined1 (*) [16])(puVar4 + 0x26);
      auVar34 = vectorPermute(auVar28,*(undefined1 (*) [16])(puVar4 + 0x28),auVar33);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41._0_4_ = auVar28._0_4_ + auVar50._0_4_;
      auVar41._8_8_ = auVar28._8_8_;
      auVar41._4_4_ = auVar28._4_4_ + auVar50._4_4_;
      auVar42._0_8_ = auVar41._0_8_;
      auVar42._12_4_ = auVar28._12_4_;
      auVar42._8_4_ = auVar28._8_4_ + auVar50._8_4_;
      auVar28._0_12_ = auVar42._0_12_;
      auVar28._12_4_ = auVar42._12_4_ + auVar50._12_4_;
      auVar41 = vectorCompareGreaterThanSignedWord(auVar28,auVar30);
      auVar28 = vectorConditionalSelect(auVar28,auVar30,auVar41);
      auVar42 = vectorShiftLeftIntegerWord
                          (auVar28,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar41 = vectorShiftLeftIntegerWord
                          (auVar28,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar28 = vectorShiftLeftIntegerWord
                          (auVar28,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
      auVar28 = (auVar42 | auVar41 | auVar28 | auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar24);
      *(undefined4 *)((uint)lVar24 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(8,lVar15);
      auVar41 = loadVectorLeftIndexed(0x18,0x73aa00);
      auVar36 = vectorPermute(auVar28,*(undefined1 (*) [16])(puVar4 + 10),auVar33);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed(auVar47,0x50,lVar1);
      *(undefined4 *)(puVar4 + 10) = uVar26;
      uVar26 = storeVectorElementWordIndexed(auVar45,0x54,lVar1);
      *(undefined4 *)((int)puVar4 + 0x54) = uVar26;
      auVar36 = vectorPermute(auVar34,auVar36,auVar39);
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x58,lVar1);
      *(undefined4 *)(puVar4 + 0xb) = uVar26;
      auVar28 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(puVar4 + 8),auVar36);
      auVar34 = vectorSubtractFloatingPoint(auVar28,auVar37);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar32);
      auVar37 = vectorPermute(auVar34,auVar34,auVar7);
      auVar36 = vectorPermute(auVar34,auVar34,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar28);
      lVar24 = lVar24 + 4;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar28);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,*(undefined1 (*) [16])(puVar4 + 0x24),auVar32);
      auVar38 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar28);
      auVar37 = vectorPermute(auVar36,auVar36,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar28,auVar32);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar32);
      auVar42 = vectorPermute(auVar36,auVar36,auVar7);
      auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar28,auVar40);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar45,auVar38);
      auVar45 = vectorCompareEqualToFloatingPoint(auVar28,auVar28);
      auVar28 = vectorConditionalSelect(auVar38,auVar28,auVar45);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar28,auVar32);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar32);
      auVar45 = vectorPermute(auVar34,auVar34,auVar7);
      auVar38 = vectorPermute(auVar34,auVar34,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar45,auVar42,auVar28);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar37,auVar28);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar28,auVar32);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar28,*(undefined1 (*) [16])(puVar4 + 0x20),auVar37);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar28,auVar32);
        auVar34 = vectorSubtractFloatingPoint(auVar34,auVar28);
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar37 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar28 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar34 >> 0x40 & (undefined1  [16])0xffffffff;
      auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar41,
                           auVar34);
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      iVar21 = iVar21 + 1;
      auVar37 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      uVar23 = uVar23 + 4;
      uVar20 = uVar20 + 4;
      uVar16 = uVar16 + 4;
      uVar19 = uVar19 + 4;
      uVar18 = uVar18 + 4;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar35);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar22);
      *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(0x18,0x73aa00);
      lVar22 = lVar22 + 8;
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar28,
                           auVar37);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar35,auVar35);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar17);
      *(undefined4 *)((uint)lVar17 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(0x10,0x73aa00);
      auVar28 = vectorAddFloatingPoint(auVar47,auVar28);
      lVar17 = lVar17 + 8;
    } while (iVar21 < 0x11);
    auVar27 = vectorAddFloatingPoint
                        (*(undefined1 (*) [16])(puVar4 + 0x26),*(undefined1 (*) [16])(puVar4 + 0x2c)
                        );
    uVar23 = puVar4[0x30];
    puVar4[0x2a] = puVar4[0x2a] + 0x60;
    puVar4[0x30] = uVar23 + 1;
    *(undefined1 (*) [16])(puVar4 + 0x28) = auVar27;
  } while ((int)(uVar23 + 1) < 0x11);
  return;
}



//==== 000e9c08  ns=mesh  size=0x320
// sig: void WaterTile_StepWave(float * stagedGrid, int tileIdx, int bufIdx, WaterTile * tile)
// callers(2): 0017b7bc water::WaterTile_StepSim; 0017b8b8 water::WaterTile_UpdateWaves
// callees(1): 005c5ad0 libc::memcpy

void mesh::WaterTile_StepWave(float *stagedGrid,int tileIdx,int bufIdx,WaterTile *tile)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *__src;
  longlong lVar21;
  
  fVar10 = WaterTileConsts.minHeight;
  iVar12 = tileIdx * 0x11a0;
  iVar20 = bufIdx * 0x5c0;
  iVar4 = iVar20 + iVar12;
  pfVar11 = (float *)((int)tile + iVar20 + iVar12 + 0x50);
  uVar13 = 0;
  __src = (undefined4 *)((int)tile + iVar4 + 0x50);
  do {
    iVar16 = 0;
    lVar21 = 0x10;
    pfVar15 = pfVar11;
    do {
      iVar17 = iVar16 + 0xc;
      iVar18 = iVar16 + 0x10;
      iVar19 = iVar16 + 0x14;
      iVar5 = iVar16 + 0x6c;
      iVar6 = iVar16 + 0xcc;
      pfVar11 = pfVar15 + 1;
      iVar7 = iVar16 + 0x74;
      iVar9 = iVar16 + 0xd0;
      iVar8 = iVar16 + 0xd4;
      iVar16 = iVar16 + 4;
      fVar2 = (*(float *)(iVar17 + (int)stagedGrid) + *(float *)(iVar18 + (int)stagedGrid) +
               *(float *)(iVar19 + (int)stagedGrid) + *(float *)((int)stagedGrid + iVar5) +
               *(float *)((int)stagedGrid + iVar7) + *(float *)((int)stagedGrid + iVar6) +
               *(float *)((int)stagedGrid + iVar9) + *(float *)((int)stagedGrid + iVar8)) * 0.25 -
              *pfVar15;
      if (fVar10 - ABS(fVar2) < 0.0) {
        fVar2 = -(fVar2 * 0.0625 - fVar2);
      }
      *pfVar15 = fVar2;
      lVar21 = lVar21 + -1;
      pfVar15 = pfVar11;
    } while (lVar21 != 0);
    uVar13 = uVar13 + 1;
    stagedGrid = stagedGrid + 0x18;
  } while (uVar13 < 0x10);
  bVar1 = *(byte *)((int)tile + iVar12 + 0xc);
  if (bVar1 != 0xff) {
    iVar16 = iVar20 + (uint)bVar1 * 0x11a0;
    libc::memcpy((void *)((int)tile + iVar16 + 0x4d0),__src,0x40);
    libc::memcpy((void *)((int)tile + iVar16 + 0x550),(void *)((int)tile + iVar4 + 0x90),0x40);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xd);
  if (bVar1 != 0xff) {
    iVar16 = (int)tile + iVar20 + (uint)bVar1 * 0x11a0;
    lVar21 = 8;
    puVar14 = __src;
    do {
      *(undefined4 *)(iVar16 + 0x510) = *puVar14;
      *(undefined4 *)(iVar16 + 0x590) = puVar14[1];
      *(undefined4 *)(iVar16 + 0x514) = puVar14[0x10];
      puVar3 = puVar14 + 0x11;
      puVar14 = puVar14 + 0x20;
      *(undefined4 *)(iVar16 + 0x594) = *puVar3;
      iVar16 = iVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xe);
  if (bVar1 != 0xff) {
    libc::memcpy((void *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x450),
                 (void *)((int)tile + iVar4 + 0x410),0x40);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xf);
  if (bVar1 != 0xff) {
    lVar21 = 4;
    iVar16 = (int)tile + iVar20 + (uint)bVar1 * 0x11a0;
    do {
      *(undefined4 *)(iVar16 + 0x490) = __src[0xf];
      *(undefined4 *)(iVar16 + 0x494) = __src[0x1f];
      *(undefined4 *)(iVar16 + 0x498) = __src[0x2f];
      puVar14 = __src + 0x3f;
      __src = __src + 0x40;
      *(undefined4 *)(iVar16 + 0x49c) = *puVar14;
      iVar16 = iVar16 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x10);
  if (bVar1 != 0xff) {
    iVar16 = iVar20 + (uint)bVar1 * 0x11a0;
    *(undefined4 *)((int)tile + iVar16 + 0x5dc) = *(undefined4 *)((int)tile + iVar4 + 0x50);
    *(undefined4 *)((int)tile + iVar16 + 0x5e0) = *(undefined4 *)((int)tile + iVar4 + 0x54);
    *(undefined4 *)((int)tile + iVar16 + 0x5e4) = *(undefined4 *)((int)tile + iVar4 + 0x90);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x11);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d8) =
         *(undefined4 *)((int)tile + iVar4 + 0x8c);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x12);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d4) =
         *(undefined4 *)((int)tile + iVar4 + 0x410);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x13);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d0) =
         *(undefined4 *)((int)tile + iVar4 + 0x44c);
  }
  return;
}



//==== 000e9f28  ns=stub  size=0x4
// sig: undefined STUB_000e9f28(void)
// callers(1): 0017cb20 water::WaterTile_CullAndDrawCell
// callees(0): 

void stub::STUB_000e9f28(void)

{
  return;
}



//==== 000e9f48  ns=mesh  size=0x2a0
// sig: void BuildVerts(WaterSheet * sheet, WaterSheetVert * outVerts)
// callers(1): 0017d4b8 water::WaterSheet_DrawAll
// callees(1): 005dd914 mathfunc::SinCos

void mesh::BuildVerts(WaterSheet *sheet,WaterSheetVert *outVerts)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double extraout_f1;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
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
  
  lVar16 = (longlong)(int)outVerts;
  puVar10 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x70);
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  auVar29 = ZEXT416(0xfffffff8);
  auVar25 = ZEXT416(0xfffffff0);
  auVar24 = ZEXT416(0xffffffff);
  auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar32 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar26 = loadVectorLeftIndexed(0x30,(longlong)(int)sheet);
  auVar27 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x70,0xe9f2c);
  auVar24 = vectorRotateLeftIntegerWord
                      (auVar26,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar27 = vectorRotateLeftIntegerWord
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar29 = ZEXT416(0xffffffff);
  auVar28 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar29 = loadVectorLeftIndexed(4,0xe9f2c);
  auVar26 = vectorLogicalAnd(auVar26,auVar33);
  auVar25 = vectorLogicalAnd(auVar24,auVar33);
  auVar24 = vectorLogicalAnd(auVar27,auVar33);
  auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
  auVar26 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
  auVar24 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  iVar13 = 0;
  auVar28 = vectorMultiplyAddFloatingPoint(auVar27,auVar30,auVar26);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar24);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar25,auVar30,auVar31);
  auVar29 = ZEXT416(8);
  auVar25 = loadVectorLeftIndexed(8,0xe9f2c);
  auVar24 = loadVectorLeftIndexed(0xc,0xe9f2c);
  auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = vectorConvertToUnsignedFixedPointWordSaturate(auVar28,0);
  auVar27 = vectorConvertToUnsignedFixedPointWordSaturate(auVar27,0);
  auVar26 = vectorConvertToUnsignedFixedPointWordSaturate(auVar26,0);
  auVar30 = vectorCompareGreaterThanUnsignedWord(auVar28,auVar33);
  auVar28 = vectorConditionalSelect(auVar28,auVar33,auVar30);
  auVar31 = vectorCompareGreaterThanUnsignedWord(auVar26,auVar33);
  auVar30 = vectorCompareGreaterThanUnsignedWord(auVar27,auVar33);
  auVar26 = vectorConditionalSelect(auVar26,auVar33,auVar31);
  auVar27 = vectorConditionalSelect(auVar27,auVar33,auVar30);
  auVar28 = vectorShiftLeftIntegerWord
                      (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar25 = vectorShiftLeftIntegerWord
                      (auVar26,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = vectorShiftLeftIntegerWord
                      (auVar27,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  if (0 < sheet->vertexCount) {
    auVar29 = (auVar28 | auVar29 | auVar25 | auVar33) >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    iVar14 = 0;
    lVar17 = lVar16 + 0x1c;
    iVar15 = 0;
    dVar21 = 3.1415927410125732;
    dVar22 = 1.0;
    dVar23 = 0.0015339808305725455;
    do {
      iVar5 = *(int *)sheet->unknown0;
      puVar12 = (uint *)(iVar5 + iVar14);
      uVar6 = sheet->frameCounter;
      uVar7 = *puVar12;
      uVar8 = puVar12[1];
      puVar10 = (undefined4 *)lVar16;
      *puVar10 = *(undefined4 *)(iVar5 + iVar14);
      puVar10[1] = puVar12[1];
      dVar20 = (double)(float)((double)(((ulonglong)uVar6 +
                                         (((ulonglong)uVar7 + (ulonglong)uVar8 << 0x20) >> 0x2b &
                                         0x1fe0) & 0xff) << 4) * dVar23 - dVar21);
      puVar10[2] = (float)((double)(float)puVar12[2] * (double)*(float *)(sheet->unknown54 + 8) +
                          (double)((float)puVar12[3] *
                                  (float)(dVar22 - (double)*(float *)(sheet->unknown54 + 8))));
      uVar11 = mathfunc::SinCos(dVar20,iVar5,0);
      dVar18 = (double)*(float *)sheet->unknown18;
      dVar19 = extraout_f1;
      dVar20 = (double)mathfunc::SinCos(dVar20,uVar11,1);
      fVar4 = *(float *)(*(int *)(sheet->unknown0 + 4) + iVar15);
      fVar1 = *(float *)sheet->unknown18;
      iVar13 = iVar13 + 1;
      fVar2 = *(float *)(*(int *)(sheet->unknown0 + 4) + iVar15 + 4);
      iVar14 = iVar14 + 0x10;
      iVar15 = iVar15 + 8;
      puVar10[3] = (float)(dVar19 * dVar18 + (double)(fVar4 + sheet->offsetU0));
      fVar3 = sheet->offsetV0;
      uVar9 = storeVectorElementWordIndexed(auVar29,0,lVar17);
      *(undefined4 *)((uint)lVar17 & 0xfffffffc) = uVar9;
      iVar5 = sheet->vertexCount;
      lVar17 = lVar17 + 0x20;
      puVar10[4] = (float)(dVar20 * (double)fVar1 + (double)(fVar2 + fVar3));
      puVar10[5] = -(float)(dVar19 * dVar18 - (double)(fVar4 + sheet->offsetU1));
      puVar10[6] = -(float)(dVar20 * (double)fVar1 - (double)(fVar2 + sheet->offsetV1));
      lVar16 = lVar16 + 0x20;
    } while (iVar13 < iVar5);
  }
  return;
}



//==== 000ea1e8  ns=stub  size=0x4
// sig: undefined STUB_000ea1e8(void)
// callers(1): 0017ec00 water::OceanPass_Thunk
// callees(0): 

void stub::STUB_000ea1e8(void)

{
  return;
}



//==== 000ea1f8  ns=mesh  size=0x180
// sig: void NormalsToEnvUV(int count, void * param_2, Vec3 * normals, Vec2 * outUV)
// callers(1): 0017ec40 water::IcePass
// callees(1): 00500608 fastfunc::FastVecNormalize

void mesh::NormalsToEnvUV(int count,void *param_2,Vec3 *normals,Vec2 *outUV)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined1 local_70 [16];
  float local_60;
  float local_5c;
  
  lVar2 = (longlong)(int)normals;
  iVar1 = 0;
  if (0 < count) {
    dVar3 = 0.5;
    do {
      fastfunc::FastVecNormalize(&local_60,local_70,lVar2);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0xc;
      outUV->x = (float)((double)local_60 * dVar3);
      outUV->y = (float)((double)local_5c * dVar3);
      outUV = outUV + 1;
    } while (iVar1 < count);
  }
  return;
}



//==== 000ea378  ns=mission  size=0x54
// sig: undefined ResetMissionState(void)
// callers(0): 
// callees(0): 

void mission::ResetMissionState(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_00a245a8;
  lVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_00a24608 = 0;
  DAT_00a2460c = 0;
  DAT_00a24610 = 0;
  return;
}



//==== 000ea3d0  ns=mission  size=0x1e0
// sig: undefined CheckMission(undefined2 type, undefined8 arg)
// callers(1): 000ea5b0 mission::RefreshLevelMissionStatus
// callees(0): 
// strings: 0096c165: 'None'

ulonglong mission::CheckMission(short type,longlong arg)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)arg;
  if (type < 5) {
    if (1 < type) {
      if (type < 3) {
        return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25b050)) << 0x20) >> 0x25 ^ 1;
      }
      if (3 < type) {
        if (0x78 < (int)puVar1) {
          return 0;
        }
        return (ulonglong)
               (LZCOUNT(*(undefined4 *)(g_KeyLevelFlags + (int)(arg << 4) + 0xc)) << 0x20) >> 0x25 ^
               1;
      }
      return (ulonglong)(LZCOUNT((uint)*(byte *)((int)puVar1 + 0x96c165)) << 0x20) >> 0x25 ^ 1;
    }
    if (-1 < type) {
      if (0 < type) {
        return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25b283)) << 0x20) >> 0x25 ^ 1;
      }
      return 1;
    }
  }
  else {
    if (type < 8) {
      if (type < 6) {
        if (0x78 < (int)puVar1) {
          return 0;
        }
        return (longlong)*(int *)(g_KeyLevelFlags + (int)(arg << 4) + 0xc) - 2U >> 0x3f ^ 1;
      }
      if (6 < type) {
        uVar2 = (*(code *)*puVar1)();
        return (ulonglong)(LZCOUNT(uVar2) << 0x20) >> 0x25 ^ 1;
      }
      return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25affc)) << 0x20) >> 0x25 ^ 1;
    }
    if (type < 9) {
      return (ulonglong)
             (LZCOUNT((uint)(byte)g_CollectedGoldBolts
                                  [(int)((longlong)((int)puVar1 >> 0x10) << 2) +
                                   ((uint)puVar1 & 0xffff)]) << 0x20) >> 0x25 ^ 1;
    }
    if (type < 10) {
      return 0;
    }
  }
  return 0;
}



//==== 000ea5b0  ns=mission  size=0x1f8
// sig: undefined RefreshLevelMissionStatus(void)
// callers(5): 0013abcc pause::BeginMenu; 0013b108 update::OpenPauseMenu; 00142e38 pause::MapPage_Update; 0014358c pause::Missions_OnEnter; 0014364c pause::Missions_Update
// callees(1): 000ea3d0 mission::CheckMission

ulonglong mission::RefreshLevelMissionStatus(void)

{
  short *psVar1;
  ulonglong uVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  
  DAT_00a24624 = (short *)(&PTR_DAT_00728d84)[g_SelectedLevel];
  if (DAT_00a24624 == (short *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if (((psVar5[8] & 4U) == 0) || ((&VisitedPlanets.Veldin)[g_SelectedLevel] != '\0')) {
        sVar4 = 0;
        iVar3 = CheckMission(psVar5[1],*(undefined4 *)(psVar5 + 2));
        if (iVar3 != 0) {
          iVar3 = CheckMission(psVar5[4],*(undefined4 *)(psVar5 + 6));
          sVar4 = (short)((LZCOUNT(-iVar3) << 0x3a) >> 0x3f) + 2;
        }
      }
      else {
        sVar4 = 0;
      }
      psVar5[0x12] = sVar4;
      psVar1 = psVar5 + 0x14;
      psVar5 = psVar5 + 0x14;
      sVar4 = *psVar1;
    }
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if (*(undefined4 **)(psVar5 + 0xe) != (undefined4 *)0x0) {
        sVar4 = (*(code *)**(undefined4 **)(psVar5 + 0xe))(*(undefined4 *)(psVar5 + 0x10));
        psVar5[0x13] = sVar4;
      }
      psVar1 = psVar5 + 0x14;
      psVar5 = psVar5 + 0x14;
      sVar4 = *psVar1;
    }
    iVar3 = 0;
    DAT_00a24620 = 0;
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if ((psVar5[0x12] == 1) && ((psVar5[8] & 2U) == 0)) {
        iVar3 = iVar3 + 1;
        DAT_00a24620 = iVar3;
      }
      sVar4 = psVar5[0x14];
      psVar5 = psVar5 + 0x14;
    }
    uVar2 = (ulonglong)(LZCOUNT(iVar3) << 0x20) >> 0x25;
  }
  return uVar2;
}



//==== 000ea7a8  ns=mission  size=0x1a4
// sig: longlong BuildMissionList(int * outTextIds, uint * outCompleteMask, int * outDesc, char useStep)
// callers(3): 0014358c pause::Missions_OnEnter; 0014364c pause::Missions_Update; 00147cf8 pause::DrawMissionsFrame
// callees(0): 

longlong mission::BuildMissionList(int *outTextIds,uint *outCompleteMask,int *outDesc,char useStep)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  longlong lVar5;
  short *psVar6;
  int iVar7;
  
  psVar6 = DAT_00a24624;
  bVar4 = true;
  *outTextIds = 0;
  if (outCompleteMask != (uint *)0x0) {
    *outCompleteMask = 0;
  }
  if (outDesc != (int *)0x0) {
    *outDesc = -1;
  }
  if (psVar6 == (short *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*psVar6 != 0) {
      lVar5 = 0;
      bVar4 = true;
      do {
        sVar1 = psVar6[0x12];
        if ((sVar1 != 2) && ((psVar6[8] & 2U) == 0)) {
          bVar4 = false;
        }
        if ((((psVar6[8] & 2U) == 0) && (sVar1 != 0)) && (((psVar6[8] & 1U) == 0 || (sVar1 != 2))))
        {
          iVar2 = (int)(lVar5 << 2);
          *(int *)((int)outTextIds + iVar2) = (int)*psVar6;
          if (useStep != '\0') {
            iVar7 = 0x523e;
            if (psVar6[0x12] != 2) {
              iVar7 = (int)*(short *)((int)psVar6 + (int)((longlong)psVar6[0x13] << 1) + 0x14);
            }
            *(int *)((int)outTextIds + iVar2) = iVar7;
          }
          if ((outCompleteMask != (uint *)0x0) && (psVar6[0x12] == 2)) {
            *outCompleteMask = *outCompleteMask | 1 << ((uint)lVar5 & 0x3f);
          }
          if (outDesc != (int *)0x0) {
            *outDesc = (int)psVar6[9] + (int)psVar6[0x13];
            outDesc = outDesc + 1;
          }
          lVar5 = (longlong)(int)((uint)lVar5 + 1);
        }
        psVar3 = psVar6 + 0x14;
        psVar6 = psVar6 + 0x14;
      } while (*psVar3 != 0);
    }
    if (bVar4 && outCompleteMask != (uint *)0x0) {
      *outCompleteMask = *outCompleteMask | 0x80000000;
    }
  }
  return lVar5;
}



//==== 000ea958  ns=mission  size=0x618
// sig: undefined UpdateMissionDisplay(void)
// callers(2): 000e1f28 map::Map_OnPauseMenuOpen; 00142e38 pause::MapPage_Update
// callees(3): 0007100c draw::FontPrintOpt; 000e2b38 map::Map_WorldToMapCoords; 000e2c34 map::Map_GetIconLabel
// strings: 0096c24c: 'None'

/* WARNING: Removing unreachable block (ram,0x000eaad8) */

void mission::UpdateMissionDisplay(longlong param_1,char param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  float *outU;
  uint unused1;
  int iVar5;
  ulonglong uVar6;
  LevelId level;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar11;
  ulonglong unaff_r28;
  longlong lVar12;
  ulonglong unaff_r29;
  int iVar13;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar8 = uVar6 - 0x160;
  puVar4 = (ulonglong *)lVar8;
  *puVar4 = uVar6;
  puVar4[0x2e] = in_LR;
  puVar4[0x2b] = in_f31;
  puVar4[0x24] = unaff_r25;
  puVar4[0x23] = unaff_r24;
  level = (LevelId)param_1;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x29] = unaff_r30;
  puVar4[0x28] = unaff_r29;
  puVar4[0x27] = unaff_r28;
  puVar4[0x26] = unaff_r27;
  puVar4[0x25] = unaff_r26;
  puVar4[0x22] = unaff_r23;
  if (((int)level < 0x13) && ((&VisitedPlanets.Veldin)[level] != '\0')) {
    map::g_MapIcons = *(int *)((int)&PTR_DAT_00728dd0 + (int)(param_1 << 2));
  }
  else {
    map::g_MapIcons = 0;
  }
  if (((g_heroPosition.z != 0.0) && (Level == level)) && (param_2 != '\0')) {
    unused1 = level - (level + 100);
    uVar10 = (uint)((LZCOUNT(-DAT_00a20820) << 0x3a) >> 0x3f) & unused1;
    map::Map_WorldToMapCoords
              (g_heroPosition.x,g_heroPosition.y,uVar10,unused1,(float *)(puVar4 + 0xe),
               (float *)((int)puVar4 + 0x74),level + 100 + uVar10);
    auVar16 = ZEXT416(0xffffffff);
    auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = ZEXT416(0xffffffff);
    auVar18 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = loadVectorLeftIndexed(in_LR,0xea94c);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar18 = loadVectorLeftIndexed(0x70,lVar8);
    auVar20 = loadVectorLeftIndexed(0x74,lVar8);
    auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar16,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar16,auVar19);
    auVar16 = loadVectorLeftIndexed(4,0xea94c);
    lVar8 = ZEXT48(&DAT_00a204c0) + (longlong)(int)(param_1 << 2);
    auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar19);
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar19);
    auVar16 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x104,lVar8);
    *(undefined4 *)((int)lVar8 + 0x104) = uVar3;
    uVar3 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x154,lVar8);
    *(undefined4 *)((int)lVar8 + 0x154) = uVar3;
  }
  if (map::g_MapIcons != 0) {
    iVar9 = map::g_MapIcons;
    iVar7 = map::g_MapIcons;
    if ((*(ushort *)(map::g_MapIcons + 4) & 4) == 0) {
      iVar13 = 0;
      do {
        psVar14 = (short *)(iVar9 + iVar13);
        sVar1 = *psVar14;
        if (sVar1 == -1) {
          psVar14[0xc] = 0x3e70;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3e9a;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -2) {
          psVar14[0xc] = 0x3f0a;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3ebb;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -3) {
          psVar14[0xc] = 0x3f15;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f30;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -4) {
          psVar14[0xc] = 0x3f38;
          psVar14[0xd] = -0x8000;
          psVar14[0xe] = 0x3f3a;
          psVar14[0xf] = -0x8000;
        }
        else if (sVar1 == -5) {
          psVar14[0xc] = 0x3ec5;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3ecb;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -7) {
          psVar14[0xc] = 0x3f5e;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3e6c;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -8) {
          psVar14[0xc] = 0x3ef6;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f12;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -9) {
          psVar14[0xc] = 0x3f20;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f39;
          psVar14[0xf] = 0;
        }
        else {
          outU = (float *)(psVar14 + 0xc);
          if (Level == level) {
            iVar5 = (int)((longlong)sVar1 << 2);
            if (*(int *)(&DAT_00a15d40 + iVar5) != 0) {
              iVar7 = *(int *)(&DAT_00a15d40 + iVar5);
              map::Map_WorldToMapCoords
                        (*(float *)(iVar7 + 0x10),*(float *)(iVar7 + 0x14),iVar7,(int)outU,outU,
                         (float *)(psVar14 + 0xe),level);
              iVar7 = map::g_MapIcons;
              *(undefined4 *)(map::g_MapIcons + iVar13 + 0x20) =
                   *(undefined4 *)(*(int *)(&DAT_00a15d40 + (int)((longlong)*psVar14 << 2)) + 0x48);
              iVar9 = iVar7;
            }
          }
          else {
            iVar7 = (int)((longlong)sVar1 << 4);
            map::Map_WorldToMapCoords
                      (*(float *)(g_KeyLevelFlags + iVar7),*(float *)(g_KeyLevelFlags + iVar7 + 4),
                       iVar7,(int)(g_KeyLevelFlags + iVar7),outU,(float *)(psVar14 + 0xe),level);
            iVar7 = map::g_MapIcons;
            *(undefined4 *)(map::g_MapIcons + iVar13 + 0x20) =
                 *(undefined4 *)(g_KeyLevelFlags + (int)((longlong)*psVar14 << 4) + 8);
            iVar9 = iVar7;
          }
        }
        iVar13 = iVar13 + 0x28;
      } while ((*(ushort *)(iVar9 + iVar13 + 4) & 4) == 0);
    }
    lVar8 = 0;
    uVar2 = *(ushort *)(iVar9 + 4);
    while ((uVar2 & 4) == 0) {
      uVar10 = 1;
      psVar14 = (short *)(iVar7 + (int)(lVar8 << 5) + (int)(lVar8 << 3));
      uVar2 = psVar14[2];
      sVar1 = psVar14[1];
      psVar14[2] = uVar2 & 0xffef;
      if (sVar1 != -1) {
        uVar10 = (uint)LZCOUNT(*(ushort *)
                                (DAT_00a24624 +
                                 (int)((longlong)sVar1 << 5) + (int)((longlong)sVar1 << 3) + 0x24) -
                               1) >> 5;
      }
      *(uint *)(psVar14 + 0x12) = uVar10;
      if (((uVar2 & 0x1000) != 0) &&
         ((*(uint *)(g_KeyLevelFlags + (int)((longlong)*psVar14 << 4) + 0xc) & 1) == 0)) {
        psVar14[0x12] = 0;
        psVar14[0x13] = 0;
      }
      if (psVar14[5] != 0) {
        lVar11 = uVar6 - 0xd0;
        psVar14[2] = uVar2 & 0xffef | 0x10;
        map::Map_GetIconLabel((int)lVar8,(char *)lVar11);
        *(undefined2 *)(puVar4 + 0xf) = 0;
        *(undefined2 *)((int)puVar4 + 0x7c) = 0;
        *(undefined2 *)((int)puVar4 + 0x84) = 0;
        *(undefined2 *)(puVar4 + 0x10) = 4;
        *(undefined2 *)((int)puVar4 + 0x82) = 4;
        *(undefined2 *)((int)puVar4 + 0x86) = 0;
        *(undefined2 *)(puVar4 + 0x11) = 0xf;
        *(undefined2 *)((int)puVar4 + 0x8a) = 4;
        *(undefined2 *)((int)puVar4 + 0x8c) = 0;
        *(undefined2 *)((int)puVar4 + 0x8e) = 0;
        *(short *)((int)puVar4 + 0x7a) = psVar14[8];
        *(short *)((int)puVar4 + 0x7e) = psVar14[7];
        uVar15 = 0x3ff0000000000000;
        draw::FontPrintOpt(0x3ff0000000000000,uVar6 - 0xe8,0x80ffa888,lVar11,0xffffffffffffffff);
        sVar1 = *(short *)((int)puVar4 + 0x86);
        lVar12 = 0;
        psVar14[8] = sVar1 + 8;
        do {
          *(short *)((int)puVar4 + 0x7e) = *(short *)((int)puVar4 + 0x7e) + -4;
          draw::FontPrintOpt(uVar15,uVar6 - 0xe8,0x80ffa888,lVar11,0xffffffffffffffff);
          iVar7 = map::g_MapIcons;
          lVar12 = ((LZCOUNT((int)sVar1 - (int)*(short *)((int)puVar4 + 0x86)) << 0x3a) >> 0x3f &
                   lVar12 - 1U) + 1;
        } while ((int)lVar12 == 0);
        psVar14[7] = *(short *)((int)puVar4 + 0x7e) + 4;
      }
      lVar8 = (longlong)((int)lVar8 + 1);
      uVar2 = *(ushort *)(iVar7 + (int)(lVar8 << 5) + (int)(lVar8 << 3) + 4);
    }
  }
  return;
}



//==== 000eaf70  ns=mission  size=0x38
// sig: int MissionCond_eaf70(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eaf70(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags._396_4_ == 0) || (MiscLevelFlags.field24_0x18 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eafa8  ns=mission  size=0x44
// sig: int MissionCond_eafa8(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eafa8(void)

{
  int iVar1;
  
  if (((g_KeyLevelFlags._764_4_ == 0) || (MiscLevelFlags.field32_0x20 == 0)) ||
     (MiscLevelFlags.field33_0x21 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eafec  ns=mission  size=0x30
// sig: int MissionCond_eafec(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eafec(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags._1036_4_ == 0) || (g_KeyLevelFlags._1020_4_ == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb01c  ns=mission  size=0x38
// sig: int MissionCond_eb01c(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb01c(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags._1068_4_ == 0) || (MiscLevelFlags.field85_0x55 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb054  ns=mission  size=0x38
// sig: int MissionCond_eb054(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb054(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags._1132_4_ == 0) || (MiscLevelFlags.field97_0x61 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb08c  ns=mission  size=0x38
// sig: int MissionCond_eb08c(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb08c(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags._1404_4_ == 0) || (CHAR_ARRAY_0096c165[0x15] == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb0c4  ns=mission  size=0x30
// sig: int CheckIfMapOMaticAndHologuiseUnlocked(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::CheckIfMapOMaticAndHologuiseUnlocked(void)

{
  int iVar1;
  
  if ((UnlockableItems.mapOMatic == '\0') || (UnlockableItems.hologuise == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb0f4  ns=mission  size=0x24
// sig: undefined IsItemUnlocked(void)
// callers(0): 
// callees(0): 

bool mission::IsItemUnlocked(int param_1)

{
  return (&UnlockableItems.field0_0x0)[param_1] != '\0';
}



//==== 000eb118  ns=mission  size=0x5c
// sig: int MissionCond_eb118(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb118(void)

{
  int iVar1;
  
  if (g_KeyLevelFlags._396_4_ == 0 && g_KeyLevelFlags._332_4_ != 0) {
    iVar1 = 1;
  }
  else if (((g_KeyLevelFlags._396_4_ == 0) || (UnlockableItems.heliPack == '\0')) ||
          (g_KeyLevelFlags._364_4_ != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}



//==== 000eb174  ns=mission  size=0x40
// sig: int MissionCond_eb174(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb174(void)

{
  int iVar1;
  
  if (g_KeyLevelFlags._764_4_ == 0) {
    iVar1 = 0;
  }
  else if (MiscLevelFlags.field32_0x20 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}



//==== 000eb1b4  ns=mission  size=0x38
// sig: int MissionCond_eb1b4(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb1b4(void)

{
  int iVar1;
  
  if ((MiscLevelFlags.field97_0x61 == 0) || (g_SeenPlanets.Gemlik == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000eb1ec  ns=mission  size=0x40
// sig: int MissionCond_eb1ec(void)
// callers(0): 
// callees(0): 
// strings: 0096c24c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mission::MissionCond_eb1ec(void)

{
  int iVar1;
  
  if (UnlockableItems.morphORay == '\0') {
    if (g_KeyLevelFlags._1404_4_ == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}



//==== 000eb22c  ns=mission  size=0x24
// sig: undefined CheckIfHologuiseUnlocked(void)
// callers(0): 
// callees(0): 

bool mission::CheckIfHologuiseUnlocked(void)

{
  return UnlockableItems.hologuise != '\0';
}



//==== 000eb250  ns=mission  size=0x38
// sig: undefined GetKaleboItemsUnlockStatus(void)
// callers(0): 
// callees(0): 

undefined8 mission::GetKaleboItemsUnlockStatus(void)

{
  undefined8 uVar1;
  
  if (UnlockableItems.hologuise == '\0') {
    if (UnlockableItems.mapOMatic == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



//==== 000eb288  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY1427(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY1427(void)

{
  DAT_00728e70 = 0x10000;
  return;
}



//==== 000eb2a8  ns=mobyattack  size=0x104
// sig: undefined Spawn_Moby1427_GCShockwave(void)
// callers(1): 000be228 hero::HeroMovement
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby

MobyInstance *
mobyattack::Spawn_Moby1427_GCShockwave
          (double param_1,double param_2,double param_3,undefined8 param_4,f32 *param_5,
          float param_6)

{
  float fVar1;
  float *pfVar2;
  MobyClass *pMVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(0x593);
  if (pMVar4 != (MobyInstance *)0x0) {
    (pMVar4->pos).x = *param_5;
    (pMVar4->pos).y = param_5[1];
    (pMVar4->pos).z = param_5[2];
    (pMVar4->pos).w = param_5[3];
    mobyfunc::SetColorOfMoby(pMVar4,0x80,0x80,0x70);
    pfVar2 = (float *)pMVar4->pVar;
    *pfVar2 = (float)param_2;
    pMVar3 = pMVar4->pClass;
    pfVar2[1] = param_6;
    pfVar2[2] = param_6;
    fVar1 = pMVar3->gScale;
    pMVar4->drawDistance = 0xff;
    pMVar4->scale = (float)(param_1 * 2.0) * fVar1;
    pfVar2[3] = (float)param_3;
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
  }
  return pMVar4;
}



//==== 000eb3c0  ns=mobyattack  size=0x13c
// sig: undefined UpdateMoby_1427_GC_Shockwave(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 00105870 mobyutil::DamageSphereAtPos; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1427 */

void mobyattack::UpdateMoby_1427_GC_Shockwave(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  int iVar4;
  undefined8 in_r7;
  undefined8 in_r8;
  double dVar5;
  
  fVar1 = moby->pClass->gScale;
  pfVar2 = (float *)moby->pVar;
  dVar5 = (double)((moby->scale / fVar1) * 0.5 + *pfVar2);
  moby->scale = (float)(dVar5 * 2.0) * fVar1;
  if ((int)pfVar2[2] < (int)(animationSpeed * 40.5)) {
    moby->alpha = (s8)(((int)pfVar2[2] * 0x7f) / (int)(animationSpeed * 40.5));
  }
  pMVar3 = g_heroMobyPtr;
  iVar4 = fastfunc::FastDoubleToInt((double)pfVar2[3]);
  mobyutil::DamageSphereAtPos
            (dVar5,(double)(longlong)iVar4,0x3ff0000000000000,pMVar3,(longlong)(int)moby + 0x10,0,
             0x30000,in_r7,in_r8,0,1);
  iVar4 = fastfunc::FastDecTimerS32(pfVar2 + 2);
  if (iVar4 != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 000eb4fc  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY1475(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY1475(void)

{
  DAT_00728ee0 = 0x10000;
  return;
}



//==== 000eb520  ns=mobyattack  size=0x130
// sig: undefined Spawn_Moby1475_KaleboRocket(void)
// callers(1): 000a30e0 hero::???_Hero_UpdateWeaponInput
// callees(1): 000efa28 mobyfunc::CreateMoby

void mobyattack::Spawn_Moby1475_KaleboRocket
               (double param_1,double param_2,undefined4 param_3,f32 *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  float fVar3;
  MobyInstance *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pMVar4 = mobyfunc::CreateMoby(ROCKET_05C3);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->rotation).z = (float)param_1;
    (pMVar4->rotation).y = (float)param_2;
    *puVar1 = param_3;
    (pMVar4->pos).x = *param_4;
    (pMVar4->pos).y = param_4[1];
    (pMVar4->pos).z = param_4[2];
    (pMVar4->pos).w = param_4[3];
    puVar1[5] = 0;
    puVar1[6] = 0;
    fVar3 = mobyutil::g_FrameTime * 30.0;
    puVar1[2] = param_5;
    *(undefined2 *)((int)puVar1 + 6) = 0;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    puVar1[4] = fVar3 * 0.7;
    pMVar4->scale = pMVar4->scale * 2.3;
    auVar5 = loadVectorLeftIndexed(0xc,0xeb510);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = vectorSplatHalfWord(auVar5,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,4,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 1) = uVar2;
  }
  return;
}



//==== 000eb6c0  ns=mobyattack  size=0xb88
// sig: undefined UpdateMoby_1475_KaleboRace_Rocket(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 00109af0 mobyutil::Delt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 004fffb4 fastfunc::FastDecTimerS16
// strings: 000eb65c: '?333' (raw)

/* Moby 1475 */

void mobyattack::UpdateMoby_1475_KaleboRace_Rocket(MobyInstance *moby)

{
  byte bVar1;
  undefined1 uVar2;
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
  f32 fVar13;
  float fVar14;
  short sVar15;
  MOBY_OCLASSES MVar16;
  int *piVar17;
  ulonglong *puVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
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
  double dVar33;
  ulonglong in_f28;
  undefined8 uVar34;
  ulonglong in_f29;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  double dVar39;
  ulonglong in_f31;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x200;
  puVar18 = (ulonglong *)lVar23;
  *puVar18 = uVar20;
  puVar18[0x42] = in_LR;
  puVar18[0x3c] = in_f28;
  puVar18[0x3d] = in_f29;
  puVar18[0x3e] = in_f30;
  puVar18[0x3f] = in_f31;
  puVar18[0x3b] = unaff_r31;
  bVar1 = moby->state;
  puVar18[0x3a] = unaff_r30;
  piVar17 = (int *)moby->pVar;
  puVar18[0x39] = unaff_r29;
  puVar18[0x38] = unaff_r28;
  puVar18[0x37] = unaff_r27;
  puVar18[0x36] = unaff_r26;
  puVar18[0x35] = unaff_r25;
  fVar3 = DAT_0071f418;
  if (bVar1 == 0) {
    *(short *)((int)piVar17 + 6) = *(short *)((int)piVar17 + 6) + 1;
    mobyutil::Delt(mobyutil::g_FrameTime * 30.0,fVar3 * 70.0,(float *)(piVar17 + 4));
    fVar12 = mobyutil::g_FrameTime;
    iVar24 = piVar17[2];
    fVar3 = (moby->pos).z;
    if ((iVar24 != 0) &&
       (sVar15 = *(short *)((int)piVar17 + 6), puVar18[0x33] = (longlong)(int)(animationSpeed * 7.5)
       , *(int *)((int)puVar18 + 0x19c) < (int)sVar15)) {
      fVar4 = *(float *)(iVar24 + 0x10);
      fVar5 = *(float *)(iVar24 + 0x14);
      fVar6 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar14 = fVar4 - fVar6;
      fVar8 = *(float *)(iVar24 + 0x18);
      fVar10 = fVar5 - fVar7;
      fVar9 = ABS(fVar14);
      fVar11 = ABS(fVar10);
      *(float *)((int)puVar18 + 0x14c) = fVar14;
      *(float *)(puVar18 + 0x2a) = fVar10;
      *(float *)((int)puVar18 + 0x154) = fVar9 - fVar11;
      dVar33 = 0.0;
      uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar18 + 0x2a) >> 0x1d) & 4;
      fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar10 = ABS(*(float *)((int)puVar18 + 0x14c));
      if (*(float *)((int)puVar18 + 0x154) - 0.0 < 0.0) {
        fVar10 = fVar11;
      }
      fVar11 = ABS(*(float *)(puVar18 + 0x2a));
      if (*(float *)((int)puVar18 + 0x154) - 0.0 < 0.0) {
        fVar11 = fVar9;
      }
      fVar9 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar36 = dVar33;
      if (0.0 < fVar10) {
        lVar22 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0x88;
        lVar27 = uVar20 - 0x78;
        lVar29 = 2;
        fVar10 = (fVar11 - fVar10) / (fVar11 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar18 + 0x184) = fVar10;
        *(float *)((int)puVar18 + 0x17c) = fVar10;
        *(float *)(puVar18 + 0x30) = fVar10;
        *(float *)(puVar18 + 0x2f) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar18 + 0x17c) = *(float *)((int)puVar18 + 0x17c) * fVar11;
        *(float *)(puVar18 + 0x30) = *(float *)(puVar18 + 0x30) * fVar10;
        *(float *)((int)puVar18 + 0x184) = *(float *)((int)puVar18 + 0x184) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x168) * fVar10 * fVar10;
          iVar24 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar10 * fVar10;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0x88;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar26 = lVar27;
        do {
          fVar10 = *pfVar25;
          fVar11 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x178) * fVar10;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar11;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar23;
        do {
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar19 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar14 + fVar9);
      }
      fVar7 = fVar7 - fVar5;
      fVar6 = fVar6 - fVar4;
      fVar3 = (fVar8 + 0.7) - fVar3;
      fVar4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
      *(float *)((int)puVar18 + 0x144) = fVar3;
      fVar3 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar18 + 0x28) = fVar4;
      *(float *)(puVar18 + 0x29) = fVar5 - fVar3;
      uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar18 + 0x29) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x144) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar18 + 0x28));
      if (*(float *)(puVar18 + 0x29) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar6 = ABS(*(float *)((int)puVar18 + 0x144));
      if (*(float *)(puVar18 + 0x29) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar22 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0xa8;
        lVar27 = uVar20 - 0x98;
        lVar29 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar18 + 0x164) = fVar4;
        *(float *)((int)puVar18 + 0x15c) = fVar4;
        *(float *)(puVar18 + 0x2c) = fVar4;
        *(float *)(puVar18 + 0x2b) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar18 + 0x15c) = *(float *)((int)puVar18 + 0x15c) * fVar6;
        *(float *)(puVar18 + 0x2c) = *(float *)(puVar18 + 0x2c) * fVar4;
        *(float *)((int)puVar18 + 0x164) = *(float *)((int)puVar18 + 0x164) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x148) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xa8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar26 = lVar27;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x158) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar22 = 2;
        do {
          iVar24 = (int)lVar23;
          iVar19 = (int)lVar27;
          lVar23 = lVar23 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar24 + 0x158)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar5);
      }
      dVar33 = -dVar33;
      dVar38 = 9.599310874938965;
      uVar35 = 0x3f9eb851e0000000;
      uVar34 = 0x3fd3333340000000;
      mobyutil::AccelDeltAng
                (dVar36,0x3f9eb851e0000000,0x3fd3333340000000,(double)(fVar12 * 9.599311),
                 lVar21 + 0x48,&DAT_000eb650,piVar17 + 5);
      mobyutil::AccelDeltAng
                (dVar33,uVar35,uVar34,(double)(float)((double)mobyutil::g_FrameTime * dVar38),
                 lVar21 + 0x44,&DAT_00720000,piVar17 + 6);
    }
    mobyutil::MB_SphericalToVector
              ((float)piVar17[4],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar18 + 0x18));
    dVar38 = 0.0;
    *(undefined4 *)(puVar18 + 0x1e) = 0;
    *(undefined4 *)((int)puVar18 + 0xf4) = 0;
    *(undefined4 *)(puVar18 + 0x1f) = 0;
    *(undefined4 *)((int)puVar18 + 0xfc) = 0;
    dVar36 = -1.0;
    dVar39 = 1.0;
    dVar33 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
    *(float *)(puVar18 + 0x1e) = (float)dVar33;
    dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar39);
    *(float *)((int)puVar18 + 0xf4) = (float)dVar33;
    dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar39);
    *(float *)(puVar18 + 0x1f) = (float)dVar33;
    dVar37 = 0.10000000149011612;
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.1,0.2);
    fVar6 = mobyutil::g_FrameTime;
    fVar12 = *(float *)((int)puVar18 + 0xf4);
    fVar4 = *(float *)(puVar18 + 0x1e);
    fVar5 = *(float *)(puVar18 + 0x1f);
    dVar32 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    dVar36 = (double)mobyutil::g_FrameTime;
    fVar3 = (float)((double)(float)(dVar33 * dVar36) / dVar32);
    dVar33 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar30 = (double)(fVar12 * fVar3);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar31 = (double)(fVar5 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar30 = (double)(fVar12 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar31 = (double)(fVar5 * fVar3);
    }
    *(float *)(puVar18 + 0x1e) = (float)dVar33;
    *(float *)((int)puVar18 + 0xf4) = (float)dVar30;
    *(float *)(puVar18 + 0x1f) = (float)dVar31;
    dVar33 = (double)mobyutil::MB_randRangeFloat((float)(dVar36 * dVar37),fVar6);
    fVar12 = *(float *)((int)puVar18 + 0xc4);
    fVar4 = *(float *)(puVar18 + 0x18);
    fVar5 = *(float *)(puVar18 + 0x19);
    *(undefined4 *)((int)puVar18 + 0xec) = *(undefined4 *)((int)puVar18 + 0xcc);
    dVar36 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    fVar3 = (float)(-dVar33 / dVar36);
    dVar33 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    dVar32 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    *(float *)(puVar18 + 0x1c) = (float)dVar33;
    *(float *)((int)puVar18 + 0xe4) = (float)dVar32;
    *(float *)(puVar18 + 0x1d) = (float)dVar37;
    *(float *)(puVar18 + 0x1e) = (float)((double)*(float *)(puVar18 + 0x1e) + dVar33);
    *(float *)((int)puVar18 + 0xf4) = (float)((double)*(float *)((int)puVar18 + 0xf4) + dVar32);
    *(float *)(puVar18 + 0x1f) = (float)((double)*(float *)(puVar18 + 0x1f) + dVar37);
    dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar39);
    fVar12 = *(float *)((int)puVar18 + 0xc4);
    fVar4 = *(float *)(puVar18 + 0x18);
    fVar5 = *(float *)(puVar18 + 0x19);
    fVar3 = (float)piVar17[4];
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar36 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    *(undefined4 *)((int)puVar18 + 0xec) = *(undefined4 *)((int)puVar18 + 0xcc);
    fVar14 = animationSpeed;
    fVar3 = (float)((double)(float)(dVar33 * (double)fVar3) / dVar36);
    dVar33 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar33 = (double)(fVar5 * fVar3);
    }
    dVar32 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar37 = (double)(fVar4 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar33 = (double)(fVar5 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar37 = (double)(fVar4 * fVar3);
    }
    *(float *)(puVar18 + 0x1d) = (float)(dVar33 + (double)fVar8);
    *(float *)((int)puVar18 + 0xe4) = (float)(dVar32 + (double)fVar7);
    *(float *)(puVar18 + 0x1c) = (float)(dVar37 + (double)fVar6);
    puVar18[0x33] = (longlong)(int)(fVar14 * 60.5);
    uVar35 = 0x40e3880000000000;
    uVar34 = 0x408f400000000000;
    iVar24 = partupd::SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,dVar39,0xbf2a36e2e0000000,dVar38,
                        uVar20 - 0x120,uVar20 - 0x110,*(undefined4 *)((int)puVar18 + 0x19c),0x7f,
                        FUN_00606060,3);
    if (iVar24 != 0) {
      uVar2 = *DAT_00a52860;
      *(undefined1 *)(iVar24 + 3) = 0x44;
      *(undefined1 *)(iVar24 + 2) = uVar2;
    }
    puVar18[0x33] = (longlong)(int)(animationSpeed * 6.5);
    partupd::SpawnPart_44
              (uVar35,uVar34,dVar39,0xbf3a36e2e0000000,dVar38,lVar21 + 0x10,uVar20 - 0x110,
               *(undefined4 *)((int)puVar18 + 0x19c),0x7f,&DAT_00b0b0b0,3);
    fVar3 = (moby->transform).v2.y;
    fVar12 = (moby->transform).v2.z;
    fVar4 = (moby->transform).v2.w;
    *(float *)(puVar18 + 0x20) = (moby->transform).v2.x * 0.02;
    *(float *)((int)puVar18 + 0x104) = fVar3 * 0.02;
    *(float *)(puVar18 + 0x21) = fVar12 * 0.02;
    *(float *)((int)puVar18 + 0x10c) = fVar4 * 0.02;
    dVar33 = (double)mobyutil::MB_randRot();
    pfVar25 = (float *)(uVar20 - 0x100);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar33,pfVar25,pfVar25);
    puVar18[0x33] = (longlong)(int)(animationSpeed * 5.5);
    partupd::SpawnPart_21(0x40d3880000000000,uVar20 - 0x120,uVar20 - 0x100,0x4f007fff,0x1fffffff);
    fVar3 = (moby->pos).x;
    fVar12 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = *(float *)(puVar18 + 0x18);
    fVar6 = *(float *)((int)puVar18 + 0xc4);
    fVar7 = fVar3 + fVar5;
    fVar8 = fVar12 + fVar6;
    *(float *)(puVar18 + 0x1a) = fVar3;
    fVar3 = fVar4 + *(float *)(puVar18 + 0x19);
    *(float *)((int)puVar18 + 0xd4) = fVar12;
    fVar13 = (moby->pos).w;
    *(float *)(puVar18 + 0x1b) = fVar4;
    *(f32 *)((int)puVar18 + 0xdc) = fVar13;
    MVar16 = moby->oClass;
    (moby->pos).x = fVar7;
    (moby->pos).y = fVar8;
    (moby->pos).z = fVar3;
    if (((fVar7 < 2.0) || (fVar8 < 2.0)) || (fVar3 < 2.0)) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      *(MobyInstance **)(puVar18 + 0x24) = moby;
      *(undefined **)((int)puVar18 + 0x124) = &DAT_00830000;
      *(undefined4 *)((int)puVar18 + 300) = 0x3f800000;
      *(undefined4 *)(puVar18 + 0x26) = 1;
      dVar36 = (double)(fVar5 * fVar5 + fVar6 * fVar6);
      dVar33 = dVar38;
      if ((double)(float)SQRT(dVar36) != dVar38) {
        dVar33 = 1.0 / SQRT(dVar36);
        dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39
                                                 ) * (double)(float)(dVar33 * 0.5) + dVar33);
        dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39
                                                 ) * (double)(float)(dVar33 * 0.5) + dVar33);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39) *
                        (double)(float)(dVar33 * 0.5) + dVar33);
        dVar38 = (double)(fVar5 * fVar3);
        dVar33 = (double)(fVar6 * fVar3);
      }
      *(float *)(puVar18 + 0x22) = (float)dVar38;
      *(float *)((int)puVar18 + 0x114) = (float)dVar33;
      *(undefined4 *)(puVar18 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar18 + 0x11c) = 0x45afdf66;
      *(undefined1 *)(puVar18 + 0x25) = 3;
      *(undefined1 *)((int)puVar18 + 0x129) = 1;
      *(MOBY_OCLASSES *)((int)puVar18 + 0x12a) = MVar16;
      iVar24 = collproc::CollLine(uVar20 - 0x130,lVar21 + 0x10,0,g_heroMobyPtr,uVar20 - 0xf0);
      if (iVar24 == 0) {
        iVar24 = fastfunc::FastDecTimerS16(piVar17 + 1);
        if ((iVar24 != 0) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar12 = (moby->pos).x - g_heroPosition.x,
           60.0 < SQRT(fVar12 * fVar12 + fVar3 * fVar3))) {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else if (CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < CollOutput.poly) {
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          fVar3 = CollOutput.ip.w;
          moby->state = '\x01';
          (moby->pos).w = fVar3;
        }
      }
      else if ((CollOutput.pMoby != g_heroMobyPtr) && (CollOutput.pMoby != (MobyInstance *)*piVar17)
              ) {
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        fVar3 = CollOutput.ip.w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
  }
  else if (bVar1 < 2) {
    puVar18[0x12] = 0;
    puVar18[0x14] = 0;
    puVar18[0x15] = 0;
    puVar18[0x16] = 0xffffffffffffffff;
    puVar18[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4010000000000000,0x3fe6666660000000,
               0x401c000000000000,lVar21,&DAT_00a15d30,0,&DAT_000eb650,0,3,3,5);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 000ec248  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1475_000ec248(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1475_000ec248(void)

{
  DAT_00728f50 = 0x10000;
  return;
}



//==== 000ec260  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1475_000ec260(MobyInstance * param_1)
// callers(0): 
// callees(0): 

undefined4 mobyupdate_helpers::M1475_000ec260(MobyInstance *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar1 = 0;
  }
  else if (param_1->pVar == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1->pVar + 0x24);
  }
  return uVar1;
}



//==== 000ec290  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1475_000ec290(MobyInstance * param_1, undefined4 param_2, undefined4 param_3)
// callers(0): 
// callees(0): 

uint mobyupdate_helpers::M1475_000ec290(MobyInstance *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar2 = 0;
  }
  else {
    pvVar1 = param_1->pVar;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(uint *)((int)pvVar1 + 0x24) | param_2) & ~param_3;
      *(uint *)((int)pvVar1 + 0x24) = uVar2;
    }
  }
  return uVar2;
}



//==== 000ec2d8  ns=mobyattack  size=0x13c
// sig: undefined Spawn_Moby1523_Blueball2(void)
// callers(0): 
// callees(3): 000da308 lights::CreatePointLight3; 000efa28 mobyfunc::CreateMoby; 00502ea8 idol_draw::PackCmd

MobyInstance * mobyattack::Spawn_Moby1523_Blueball2(undefined8 param_1,Vec4 *param_2)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  pMVar2 = mobyfunc::CreateMoby(0x5f3);
  if ((pMVar2 != (MobyInstance *)0x0) && (DAT_00728f74 == (MobyInstance *)0x0)) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pvVar1 = pMVar2->pVar;
    (pMVar2->pos).x = param_2->x;
    (pMVar2->pos).y = param_2->y;
    (pMVar2->pos).z = param_2->z;
    (pMVar2->pos).w = param_2->w;
    DAT_0095cf24 = 0xff;
    DAT_0095cf28 = 0;
    DAT_0095cf20 = 0;
    DAT_0095cf34 = 0xffffff;
    uVar4 = 0;
    DAT_00728f74 = pMVar2;
    DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
    draw::g_ScreenInsertEffect = 0;
    *(undefined4 *)((int)pvVar1 + 0x10) = 0;
    uVar3 = lights::CreatePointLight3(0,0,param_2,ZEXT48(&DAT_000ec2d0),uVar4,0);
    *(undefined2 *)((int)pvVar1 + 0x2c) = uVar3;
  }
  return pMVar2;
}



//==== 000ec418  ns=mobyattack  size=0x1a0
// sig: undefined Spawn_Moby1523_GC_Blueball(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 000da308 lights::CreatePointLight3; 000efa28 mobyfunc::CreateMoby; 00502ea8 idol_draw::PackCmd

void mobyattack::Spawn_Moby1523_GC_Blueball
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  if (DAT_00728f74 == (MobyInstance *)0x0) {
    pMVar2 = mobyfunc::CreateMoby(0x5f3);
    if ((pMVar2 != (MobyInstance *)0x0) && (DAT_00728f74 == (MobyInstance *)0x0)) {
      pMVar2->updateDistance = -1;
      pMVar2->drawDistance = 0xff;
      pMVar2->enabled = '\x01';
      pMVar2->state = '\0';
      pvVar1 = pMVar2->pVar;
      (pMVar2->pos).x = fStack00000040;
      (pMVar2->pos).y = fStack00000044;
      DAT_00728f74 = pMVar2;
      (pMVar2->pos).z = fStack00000048;
      DAT_0095cf24 = 0xff;
      (pMVar2->pos).w = fStack0000004c;
      DAT_0095cf28 = 0;
      DAT_0095cf20 = 0;
      DAT_0095cf34 = 0xffffff;
      uVar4 = 0;
      DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
      draw::g_ScreenInsertEffect = 0;
      *(undefined4 *)((int)pvVar1 + 0x10) = 0;
      uVar3 = lights::CreatePointLight3(0,0,(Vec4 *)&stack0x00000040,ZEXT48(&DAT_000ec414),uVar4,0);
      *(undefined2 *)((int)pvVar1 + 0x2c) = uVar3;
    }
  }
  pMVar2 = DAT_00728f74;
  if ((DAT_00728f74 != (MobyInstance *)0x0) &&
     (pvVar1 = DAT_00728f74->pVar, DAT_00728f74->oClass == 0x5f3)) {
    (DAT_00728f74->pos).x = fStack00000040;
    (pMVar2->pos).y = fStack00000044;
    *(undefined2 *)((int)pvVar1 + 0x2e) = 1;
    (pMVar2->pos).z = fStack00000048;
    (pMVar2->pos).w = fStack0000004c;
  }
  return;
}



//==== 000ec5b8  ns=mobyattack  size=0xa4
// sig: undefined M1523_Blueball_HandleDeletion(void)
// callers(1): 0009a1b0 hero::Hero_HandleDamage
// callees(2): 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby

void mobyattack::M1523_Blueball_HandleDeletion(void)

{
  short sVar1;
  
  if (DAT_00728f74 != (MobyInstance *)0x0) {
    if (DAT_00728f74->oClass == 0x5f3) {
      if (DAT_00728f74->state == '\0') {
        DAT_0095cf20 = 0;
        draw::g_ScreenInsertEffect = 0;
        sVar1 = *(short *)((int)DAT_00728f74->pVar + 0x2c);
        if (sVar1 != -1) {
          lights::DeletePointLight(sVar1);
        }
        mobyfunc::DeleteMoby(DAT_00728f74);
        DAT_00728f74 = (MobyInstance *)0x0;
      }
    }
    else {
      DAT_00728f74 = (MobyInstance *)0x0;
    }
  }
  return;
}



//==== 000ec6f0  ns=mobyattack  size=0xcbc
// sig: undefined UpdateMoby_1523_GC_Blueball(MobyInstance * moby)
// callers(0): 
// callees(18): 0005e598 collproc::CollMobySphere; 000da308 lights::CreatePointLight3; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe788 mobyutil::MB_randVector; 00107860 mobyutil::MB_DamageMobyList; 00121a40 partupd::SpawnPart_5; 00124e10 partupd::SpawnPart_15; 00127ea8 partupd::SpawnPart_26; 00129b00 partupd::SpawnPart_31; 00133580 partupd::SpawnPart_69; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 00502ea8 idol_draw::PackCmd

/* Moby 1523 */

void mobyattack::UpdateMoby_1523_GC_Blueball(MobyInstance *moby)

{
  short sVar1;
  float *pfVar2;
  float fVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar15;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined2 uVar19;
  int iVar16;
  undefined8 uVar14;
  uint uVar17;
  int iVar18;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  Vec4 VStack_f0;
  Vec4 VStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [48];
  
  lVar11 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    if ((*(short *)((int)pfVar2 + 0x2e) == 0) || (g_heroType != '\x02')) {
      DAT_0095cf20 = 0;
      pfVar2[4] = 0.0;
      draw::g_ScreenInsertEffect = 0;
      fVar3 = g_heroRotation.z + 1.5707963;
      fVar6 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar6 = fVar3;
      }
      fVar7 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar9 = mobyutil::g_FrameTime * 40.0;
      fVar3 = fVar7 * fVar7;
      fVar6 = fVar3 * fVar3 * fVar7;
      fVar8 = fVar3 * fVar6;
      *pfVar2 = fVar9 * (fVar3 * fVar8 * 2.601887e-06 +
                        fVar8 * -0.0001980741 +
                        fVar6 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7);
      fVar7 = g_heroRotation.z;
      fVar3 = 3.1415925 - g_heroRotation.z;
      fVar6 = -3.1415925 - g_heroRotation.z;
      pfVar2[2] = 0.0;
      if (fVar7 - fVar3 < 0.0) {
        fVar3 = fVar7;
      }
      if (fVar6 - fVar3 < 0.0) {
        fVar6 = fVar3;
      }
      fVar3 = fVar6 * fVar6;
      fVar7 = fVar3 * fVar3 * fVar6;
      fVar8 = fVar3 * fVar7;
      pfVar2[1] = fVar9 * (fVar3 * fVar8 * 2.601887e-06 +
                          fVar8 * -0.0001980741 +
                          fVar7 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6);
      moby->state = '\x01';
      pfVar2[5] = 0.0;
    }
    else {
      fVar3 = pfVar2[4];
      if (fVar3 == 0.0) {
        draw::g_ScreenInsertEffect = 1;
        DAT_0095cf34 = 0xffff00;
        fVar3 = pfVar2[4];
      }
      pfVar2[4] = (float)((int)fVar3 + 1);
      dVar26 = (double)fastfunc::FastIntToDouble((int)fVar3 + 1);
      dVar37 = 30.0;
      iVar16 = 0;
      dVar36 = 1.0;
      lVar24 = 0;
      dVar35 = 0.0;
      dVar34 = -1.0;
      dVar33 = 20.0;
      dVar32 = 40.0;
      dVar26 = (double)(float)(dVar26 / (double)(animationSpeed * 30.0));
      if (1.0 - dVar26 < 0.0) {
        dVar26 = dVar36;
      }
      dVar26 = (double)((float)(dVar26 * dVar26) * 10.0);
      for (; iVar15 = fastfunc::FastDoubleToInt(dVar26), iVar16 < iVar15; iVar16 = iVar16 + 1) {
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar6 = (float)dVar27;
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar7 = (float)dVar27;
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar36);
        fVar8 = (float)dVar27;
        lVar12 = mobyutil::MB_randRange(0x4f,0xaf);
        lVar13 = mobyutil::MB_randRange(0x4f,0xff);
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar32);
        dVar31 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
        fVar3 = (float)(dVar27 / dVar31);
        dVar27 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar27 = (double)(fVar6 * fVar3);
        }
        dVar30 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar30 = (double)(fVar7 * fVar3);
        }
        dVar28 = dVar35;
        if (dVar35 - dVar31 < 0.0) {
          dVar28 = (double)(fVar8 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar27 = (double)(fVar6 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar30 = (double)(fVar7 * fVar3);
        }
        if (dVar31 - dVar35 < 0.0) {
          dVar28 = (double)(fVar8 * fVar3);
        }
        fastfunc::FastVecAddSelf(auStack_100,local_110,lVar11 + 0x10);
        lVar13 = (lVar13 + (0xff - lVar13 >> 0x3f & 0xffU - lVar13) & 0xffff) << 0x10;
        partupd::SpawnPart_31
                  ((uint)((lVar12 + (0xff - lVar12 >> 0x3f & 0xffU - lVar12) & 0xffffffff) << 8) |
                   0x4f | (uint)lVar13 | 0x7f000000,lVar13,CONCAT44((float)dVar27,(float)dVar30),
                   (ulonglong)(uint)(float)dVar28 << 0x20,lVar11);
      }
      if ((int)pfVar2[4] < 0x32) {
        uVar25 = (ulonglong)(DAT_0095cf34 >> 0x18);
        if (DAT_0095cf38 == 0 && DAT_0095cf34 >> 0x18 == 0xff) {
          uVar25 = 0x25;
        }
        DAT_0095cf38 = idol_draw::PackCmd(2,0,0,1,0x1f);
        uVar23 = (longlong)(uVar25 - (longlong)(0x25 - (int)(animationSpeed * 1.5))) >> 0x3f &
                 (uVar25 + (uint)(int)(animationSpeed * 1.5)) - 0x25;
        uVar25 = uVar23 + 0x25;
        DAT_0095cf34 = (uint)((uVar25 & 0xffffffff) << 0x18) | DAT_0095cf34 & 0xffff00;
      }
      else {
        uVar23 = (ulonglong)DAT_0095cf34;
        uVar25 = uVar23 | 0xffffffffff000000;
        DAT_0095cf34 = (uint)uVar25;
      }
      if (*(short *)(pfVar2 + 0xb) == -1) {
        if ((worldUpdateTime & 3) == 0) {
          uVar19 = lights::CreatePointLight3(dVar35,dVar35,(Vec4 *)(lVar11 + 0x10),uVar25,uVar23,0);
          *(undefined2 *)(pfVar2 + 0xb) = uVar19;
        }
      }
      else {
        sVar1 = *(short *)(pfVar2 + 0xb);
        *(f32 *)((int)&PointLights[0].pos.x + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (moby->pos).x;
        fVar3 = pfVar2[4];
        *(f32 *)((int)&PointLights[0].pos.y + (int)((longlong)sVar1 << 5)) = (moby->pos).y;
        *(f32 *)((int)&PointLights[0].pos.z + (int)((longlong)sVar1 << 5)) = (moby->pos).z;
        if ((0x31 < (int)fVar3) || (0 < (int)fVar3)) {
          lVar24 = ((longlong)(int)fVar3 + -0x32 >> 0x3f & (longlong)(int)fVar3 - 0x32U) + 0x32;
        }
        dVar26 = (double)fastfunc::FastIntToDouble(lVar24);
        fVar3 = pfVar2[4];
        *(float *)((int)&PointLights[0].pos.w + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)(dVar26 * 7.0) * 0.02;
        dVar26 = (double)fastfunc::FastIntToDouble(fVar3);
        sVar1 = *(short *)(pfVar2 + 0xb);
        dVar26 = (double)(float)(dVar26 / (double)(float)((double)animationSpeed * dVar37));
        if (dVar36 - dVar26 < 0.0) {
          dVar26 = dVar36;
        }
        uVar20 = mobyutil::MB_randRange(0xf,0x2f);
        uVar21 = mobyutil::MB_randRange(0x2f,0x3f);
        uVar22 = mobyutil::MB_randRange(0x3f,0x7f);
        partupd::SpawnPart_5
                  ((double)((float)(dVar26 * 4.0) * 210000.0),dVar35,sVar1 * 0x20 + 0xa1df10,uVar20,
                   uVar21,uVar22);
        dVar32 = 0.800000011920929;
        iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5);
        dVar26 = (double)mobyutil::MB_randRangeFloat
                                   (*(float *)((int)&PointLights[0].color.x + iVar16) * 0.8,
                                    *(float *)((int)&PointLights[0].pos.w + iVar16) * 2.0 *
                                    0.14285715);
        iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5);
        *(float *)((int)&PointLights[0].color.x + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)dVar26;
        fVar3 = (float)((double)*(float *)((int)&PointLights[0].color.y + iVar16) * dVar32);
        if (*(float *)((int)&PointLights[0].color.x + iVar16) < fVar3) {
          fVar3 = *(float *)((int)&PointLights[0].color.x + iVar16);
        }
        dVar26 = (double)mobyutil::MB_randRangeFloat
                                   (fVar3,*(float *)((int)&PointLights[0].color.x + iVar16));
        *(float *)((int)&PointLights[0].color.y + (int)((longlong)*(short *)(pfVar2 + 0xb) << 5)) =
             (float)dVar26;
      }
    }
  }
  else if (moby->state < 2) {
    dVar26 = (double)fastfunc::FastIntToDouble(pfVar2[5]);
    dVar32 = 0.5;
    fVar3 = mobyutil::g_FrameTime * 40.0;
    pfVar2[5] = (float)((int)pfVar2[5] + 1);
    dVar26 = (double)((float)((double)fVar3 * dVar26) * 0.5 + 3.0);
    if ((*(short *)(pfVar2 + 0xb) != -1) &&
       (iVar16 = (int)((longlong)*(short *)(pfVar2 + 0xb) << 5), sVar1 = *(short *)(pfVar2 + 0xb),
       *(float *)((int)&PointLights[0].pos.w + iVar16) =
            *(float *)((int)&PointLights[0].pos.w + iVar16) * (DAT_0071f408 * -0.6 + 1.0),
       uVar17 = *(uint *)((int)&PointLights[0].pos.w + (int)((longlong)sVar1 << 5)),
       uVar5 = (int)uVar17 >> 0x1f, (int)((uVar5 >> 1 ^ uVar17) - uVar5) < 0x38d1b717)) {
      lights::DeletePointLight();
      *(undefined2 *)(pfVar2 + 0xb) = 0xffff;
    }
    if (((int)(animationSpeed * 60.5) < (int)pfVar2[5]) || (g_heroType != '\x02')) {
      mobyfunc::DeleteMoby(DAT_00728f74);
      DAT_00728f74 = (MobyInstance *)0x0;
      return;
    }
    lVar24 = lVar11 + 0x10;
    fastfunc::FastVecAddSelf(auStack_d0,lVar24,pfVar2);
    fVar4 = (moby->pos).x;
    dVar33 = 2.0;
    uVar17 = (int)fVar4 >> 0x1f;
    iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17;
    if ((((iVar16 < 0x40000000) || (0x447f4000 < iVar16)) ||
        (fVar4 = (moby->pos).y, uVar17 = (int)fVar4 >> 0x1f,
        iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17, 0x447f4000 < iVar16 || iVar16 < 0x40000000))
       || ((fVar4 = (moby->pos).z, uVar17 = (int)fVar4 >> 0x1f,
           iVar16 = (uVar17 >> 1 ^ (uint)fVar4) - uVar17, iVar16 < 0x40000000 ||
           (0x447f4000 < iVar16)))) {
      mobyfunc::DeleteMoby(DAT_00728f74);
      DAT_00728f74 = (MobyInstance *)0x0;
      return;
    }
    uVar14 = collproc::CollMobySphere(dVar26,lVar24,0x40000000,0x10,lVar11,0);
    dVar27 = 1.0;
    uVar29._0_4_ = (moby->pos).x;
    uVar29._4_4_ = (moby->pos).y;
    uVar10._0_4_ = (moby->pos).z;
    uVar10._4_4_ = (moby->pos).w;
    mobyutil::MB_DamageMobyList
              (0x4034000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar11,2,uVar29,uVar10,
               &DAT_00a14a00,uVar14,0,0x8b0000);
    dVar37 = (double)(float)(dVar26 * dVar32);
    uVar29 = 0x4109a28000000000;
    dVar32 = (double)(float)(dVar37 * 210000.0);
    mobyutil::MB_randRange(0x4109a28000000000,0xf,0x2f);
    mobyutil::MB_randRange(0x2f,0x3f);
    mobyutil::MB_randRange(0x3f,0x7f);
    partupd::SpawnPart_26(dVar32,lVar11);
    dVar36 = (double)(float)(dVar26 * dVar33);
    mobyutil::MB_randVector
              ((double)(float)((double)mobyutil::g_FrameTime * dVar26),
               (double)(float)(dVar36 * (double)mobyutil::g_FrameTime),&VStack_f0);
    uVar17 = mobyutil::MB_randRange(0xf,0x2f);
    uVar25 = mobyutil::MB_randRange(0x2f,0x3f);
    uVar23 = mobyutil::MB_randRange(0x3f,0x7f);
    partupd::SpawnPart_15
              (uVar29,lVar24,&VStack_f0,
               (uint)((uVar25 & 0xffffffff) << 8) | uVar17 | (uint)((uVar23 & 0xffffffff) << 0x10) |
               0x7f000000,0x4f7f4f2f,DAT_00a52830,(int)(animationSpeed * 45.5),1,*DAT_00a52830);
    iVar15 = 0;
    dVar35 = 0.0;
    dVar34 = 6000.0;
    dVar32 = (double)(float)(dVar26 * 0.4000000059604645);
    iVar16 = 0;
    dVar33 = 32000.0;
    do {
      mobyutil::MB_randVector
                ((double)(float)((double)mobyutil::g_FrameTime * dVar26),
                 (double)(float)((double)mobyutil::g_FrameTime * dVar36),&VStack_f0);
      mobyutil::MB_randVector(dVar35,dVar37,&VStack_e0);
      fastfunc::FastVecAddSelf(auStack_c0,&VStack_e0,lVar24);
      iVar18 = partupd::SpawnPart_69(&VStack_e0,&VStack_f0,0x7f,lVar11);
      if (iVar18 != 0) {
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        *(float *)(iVar18 + 0xc) = (float)(dVar31 * dVar32);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 8);
    dVar34 = 80000.0;
    dVar33 = 120000.0;
    dVar32 = 2.5;
    auVar40 = loadVectorLeftIndexed(0x88,0xec65c);
    auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
    do {
      uVar29 = partupd::SpawnPart_69(lVar24,&DAT_00a15d30,0x7f,lVar11);
      iVar15 = (int)uVar29;
      if (iVar15 != 0) {
        if ((iVar16 == 2) && (iVar18 = mobyutil::MB_randInt(8), iVar18 == 0)) {
          dVar35 = 180000.0;
        }
        else {
          dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        }
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        *(float *)(iVar15 + 0xc) = (float)(dVar35 * dVar26);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar35 = (double)animationSpeed;
        auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar38);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = vectorSplatHalfWord(auVar38,1);
        uVar19 = storeVectorElementHalfWordIndexed(auVar38,10,uVar29);
        *(undefined2 *)(iVar15 + 10) = uVar19;
        dVar35 = (double)fastfunc::FastIntToDouble((short)(int)(dVar35 * dVar32));
        *(undefined2 *)(iVar15 + 0x36) = 3;
        *(undefined **)(iVar15 + 0x38) = &DAT_007f7f7f;
        *(float *)(iVar15 + 0x30) = (float)(dVar27 / dVar35);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xc);
  }
  *(undefined2 *)((int)pfVar2 + 0x2e) = 0;
  return;
}



//==== 000ed3ac  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY256(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY256(void)

{
  DAT_00728fc4 = 0x10000;
  return;
}



//==== 000ed3e0  ns=mobyattack  size=0x444
// sig: undefined Spawn_Moby256_Rocket(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(7): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 00110724 mobyutil::MB_AddMobyToDynamicGroup; 001180f0 mobyutil::MB_ComputeRocketAim

MobyInstance *
mobyattack::Spawn_Moby256_Rocket
          (double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6,
          f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10)

{
  float fVar1;
  f32 *pfVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  MobyInstance *pMoby;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  
  local_50 = (float)param_1;
  local_4c = (float)param_2;
  local_48[0] = (float)param_3;
  pMoby = mobyfunc::CreateMoby(ROCKET_0100);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_4;
    (pMoby->rotation).y = (float)param_5;
    pfVar2 = (f32 *)pMoby->pVar;
    uVar8 = ZEXT48(pfVar2);
    fVar5 = pMoby->scale * DAT_00728ff0;
    pMoby->drawDistance = 0xff;
    pMoby->scale = fVar5;
    if (param_10 == (MobyInstance *)0x0) {
      mobyutil::MB_SphericalToVector
                (mobyutil::g_FrameTime * 20.0,(float)param_4,(float)param_5,&local_60);
      param_10 = (MobyInstance *)
                 mobyutil::MB_ComputeRocketAim
                           (0x3fd6571840000000,param_6,local_48,*(undefined8 *)param_7,
                            *(undefined8 *)(param_7 + 2),CONCAT44(local_60,local_5c),
                            CONCAT44(local_58,local_54),&local_50,&local_4c);
    }
    pfVar2[4] = param_6;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar2[9] = 0.0;
    pfVar2[10] = 0.0;
    pfVar2[8] = 0.0;
    pfVar2[6] = (f32)param_10;
    pfVar2[0xe] = 1.4013e-45;
    fVar5 = mobyutil::g_FrameTime;
    pfVar2[0xd] = mobyutil::g_FrameTime * 100.0;
    if (param_10 != (MobyInstance *)0x0) {
      uVar6 = mobyutil::MB_GetPvarsIfMobyHasThem(param_10);
      iVar7 = (int)uVar6;
      fVar5 = mobyutil::g_FrameTime;
      if (iVar7 != 0) {
        *(ushort *)(iVar7 + 0x1e) = *(ushort *)(iVar7 + 0x1e) | 0x80;
        fVar5 = mobyutil::g_FrameTime;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        if (*(char *)(iVar7 + 0xb) != '\0') {
          pfVar2[0xe] = 0.0;
        }
        auVar10 = ZEXT416(0xfffffff8);
        auVar11 = loadVectorLeftIndexed(0xc,uVar6);
        auVar10 = vectorShiftRightWord
                            (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
        if (*(char *)(iVar7 + 0xc) != '\0') {
          auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar10,0);
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar9 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar10);
          auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
          *(undefined4 *)((uint)(pfVar2 + 0xd) & 0xfffffffc) = uVar4;
        }
      }
    }
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    pfVar2[0xb] = local_50;
    pfVar2[0xc] = local_4c;
    auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(0xc,0xed3c0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x14,uVar8);
    *(undefined4 *)((uint)(pfVar2 + 5) & 0xfffffffc) = uVar4;
    if (param_10 != (MobyInstance *)0x0) {
      *pfVar2 = (param_10->pos).x;
      pfVar2[1] = (param_10->pos).y;
      fVar1 = (param_10->pos).z;
      pfVar2[2] = fVar1;
      pfVar2[3] = (param_10->pos).w;
      pfVar2[7] = local_48[0];
      pfVar2[2] = fVar1 + local_48[0];
    }
    if (SQRT(DAT_00969e28 * DAT_00969e28 + DAT_00969e20 * DAT_00969e20 + DAT_00969e24 * DAT_00969e24
            ) <= fVar5 * 0.1) {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x18,0xed3c0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar10 = vectorSplatHalfWord(auVar9,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar10,0x3e,uVar8);
      *(undefined2 *)((int)pfVar2 + 0x3e) = uVar3;
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x14,0xed3c0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar10 = vectorSplatHalfWord(auVar9,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar10,0x3e,uVar8);
      *(undefined2 *)((int)pfVar2 + 0x3e) = uVar3;
    }
    auVar9 = vectorSplatHalfWord(auVar9,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar9,0x3c,uVar8);
    *(undefined2 *)(pfVar2 + 0xf) = uVar3;
    iVar7 = collproc::CollLine(local_70,param_7,0,g_heroMobyPtr,0);
    if (iVar7 != 0) {
      pMoby->setByGroup = '\x01';
      (pMoby->pos).x = CollOutput.ip.x;
      (pMoby->pos).y = CollOutput.ip.y;
      (pMoby->pos).z = CollOutput.ip.z;
      (pMoby->pos).w = CollOutput.ip.w;
    }
    mobyfunc::UpdateMobyTransform(pMoby);
    mobyutil::MB_AddMobyToDynamicGroup(pMoby,&mobyutil::g_mobyIdListCount,0x1f);
    pMoby->scale = pMoby->scale * 2.0;
  }
  return pMoby;
}



//==== 000ed830  ns=mobyupdate_helpers  size=0x5c
// sig: undefined M256_000ed830(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M256_000ed830(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (0 < param_1) {
    dVar2 = dVar1;
    do {
      param_1 = param_1 + -1;
      dVar2 = (double)(float)((double)(float)((double)mobyutil::g_FrameTime * 100.0 - dVar2) *
                              (double)(DAT_0071f40c * 0.1) + dVar2);
      dVar1 = (double)(float)(dVar1 + dVar2);
    } while (0 < param_1);
  }
  return dVar1;
}



//==== 000ed970  ns=mobyattack  size=0x1d48
// sig: undefined UpdateMoby_256_GC_Rocket(MobyInstance * moby)
// callers(0): 
// callees(35): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 00107860 mobyutil::MB_DamageMobyList; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11; 00124e10 partupd::SpawnPart_15; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 0020bb70 FUN_0020bb70; 003fda38 FUN_003fda38; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00500af8 fastfunc::FastMtx4Identity; 00501188 fastfunc::FastMtxScale; 0050162c fastfunc::FastVecMtx4Mul; 005016e0 fastfunc::FastVecAdd; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 00502b6c fastfunc::FastVecSubSelf; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 256 */

void mobyattack::UpdateMoby_256_GC_Rocket(MobyInstance *moby)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar14;
  int iVar15;
  undefined8 uVar12;
  uint uVar16;
  longlong lVar13;
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
  undefined8 uVar27;
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
  undefined8 uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 local_430 [16];
  float local_420;
  float local_41c;
  float local_418;
  undefined1 local_410 [16];
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  undefined4 local_3d4;
  float local_3d0;
  undefined4 local_3cc;
  float local_3c8;
  undefined4 local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  undefined1 auStack_3b0 [16];
  float local_3a0;
  float local_39c;
  float local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  undefined1 auStack_380 [16];
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  undefined4 local_338;
  undefined4 local_334;
  MobyInstance *local_330;
  undefined *local_32c;
  undefined1 local_328;
  undefined1 local_327;
  MOBY_OCLASSES local_326;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_310;
  float local_30c;
  float local_308;
  undefined4 local_304;
  float local_300;
  undefined4 local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  float local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [64];
  undefined1 auStack_250 [64];
  float afStack_210 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180 [26];
  double local_118;
  longlong local_110;
  float local_100;
  float local_fc;
  
  lVar11 = (longlong)(int)moby;
  uStack_1c4 = uRam0072907c;
  uStack_1c8 = uRam00729078;
  uStack_1cc = uRam00729074;
  uStack_1d0 = _DAT_00729070;
  uStack_1b4 = uRam0072908c;
  uStack_1b8 = uRam00729088;
  uStack_1bc = uRam00729084;
  uStack_1c0 = _DAT_00729080;
  uStack_1a4 = uRam0072909c;
  uStack_1a8 = uRam00729098;
  uStack_1ac = uRam00729094;
  uStack_1b0 = _DAT_00729090;
  uStack_194 = uRam007290ac;
  uStack_198 = uRam007290a8;
  uStack_19c = uRam007290a4;
  uStack_1a0 = _DAT_007290a0;
  uStack_184 = uRam007290bc;
  uStack_188 = uRam007290b8;
  uStack_18c = uRam007290b4;
  uStack_190 = _DAT_007290b0;
  dVar29 = 0.0;
  local_420 = 0.0;
  local_41c = 0.0;
  pfVar4 = (float *)moby->pVar;
  local_418 = mobyutil::g_FrameTime * 8.0;
  local_180[0x19] = 8.0;
  fVar5 = pfVar4[6];
  dVar26 = 0.10000000149011612;
  dVar38 = 1.0;
  pfVar4[8] = (pfVar4[0xd] - pfVar4[8]) * 0.1 * DAT_0071f40c + pfVar4[8];
  dVar28 = dVar38;
  fastfunc::FastDecTimerS16(pfVar4 + 0xf);
  dVar19 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(pfVar4 + 0xf));
  dVar20 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pfVar4 + 0x3e));
  local_3d8 = (float)(dVar19 / dVar20);
  local_3d4 = DAT_00969e2c;
  local_3e0 = DAT_00969e20 * local_3d8;
  local_3dc = DAT_00969e24 * local_3d8;
  local_3d8 = DAT_00969e28 * local_3d8;
  if (draw::ScreenColorEffectEnabled == '\0') {
LAB_000edbf0:
    if (fVar5 != 0.0) {
      dVar19 = 150.5;
      local_110 = (longlong)(int)(animationSpeed * 0.5);
      if (((int)pfVar4[5] < (int)(animationSpeed * 150.5) - (int)(animationSpeed * 0.5)) &&
         (*(byte *)((int)fVar5 + 0x20) < 0x80)) {
        dVar40 = (double)*(float *)((int)fVar5 + 0x10);
        dVar33 = (double)(*(float *)((int)fVar5 + 0x18) + pfVar4[7]);
        dVar36 = (double)*(float *)((int)fVar5 + 0x14);
        dVar34 = (double)*(float *)((int)fVar5 + 0x1c);
        dVar32 = (double)(float)(dVar40 - (double)(moby->pos).x);
        dVar31 = (double)(float)(dVar36 - (double)(moby->pos).y);
        dVar30 = (double)(float)(dVar33 - (double)(moby->pos).z);
        dVar20 = dVar29;
        if (pfVar4[0xe] != 0.0) {
          local_3c0 = (float)(dVar40 - (double)*pfVar4);
          local_3bc = (float)(dVar36 - (double)pfVar4[1]);
          local_3b8 = (float)(dVar33 - (double)pfVar4[2]);
          local_3b4 = *(float *)((int)fVar5 + 0x1c);
          fastfunc::FastVecSubSelf(auStack_3b0,&local_3c0,&local_3e0);
          *pfVar4 = (float)dVar40;
          pfVar4[1] = (float)dVar36;
          pfVar4[2] = (float)dVar33;
          pfVar4[3] = (float)dVar34;
          dVar20 = (double)local_3bc;
          dVar33 = (double)local_3c0;
          dVar34 = (double)local_3b8;
          fVar8 = pfVar4[8] * pfVar4[8] -
                  (float)(dVar34 * dVar34 +
                         (double)(float)(dVar33 * dVar33 + (double)(float)(dVar20 * dVar20)));
          fVar2 = (float)(dVar34 * dVar30 +
                         (double)(float)(dVar33 * dVar32 + (double)(float)(dVar20 * dVar31))) * -2.0
          ;
          fVar9 = fVar8 * 2.0;
          fVar8 = SQRT(fVar2 * fVar2 -
                       -((float)(dVar30 * dVar30 +
                                (double)(float)(dVar32 * dVar32 + (double)(float)(dVar31 * dVar31)))
                        * fVar8 * 4.0));
          dVar34 = (double)((fVar8 - fVar2) / fVar9);
          dVar33 = (double)((-fVar2 - fVar8) / fVar9);
          if ((dVar34 <= dVar29) || (dVar33 <= dVar29)) {
            dVar20 = -1.0;
            if (dVar29 - dVar33 < 0.0) {
              dVar20 = dVar33;
            }
            if (dVar29 - dVar34 < 0.0) {
              dVar20 = dVar34;
            }
          }
          else {
            dVar20 = dVar33;
            if (dVar33 - dVar34 < 0.0) {
              dVar20 = dVar34;
            }
          }
        }
        if ((dVar20 <= dVar29) || ((double)(longlong)((double)animationSpeed * dVar19) <= dVar20)) {
          dVar19 = (double)FUN_005e8338(dVar32,dVar31);
          dVar20 = (double)FUN_005e8338((double)SQRT((float)(dVar32 * dVar32 +
                                                            (double)(float)(dVar31 * dVar31))),
                                        dVar30);
          dVar20 = -dVar20;
        }
        else {
          dVar32 = (double)(float)((double)local_3c0 * dVar20 + dVar32);
          dVar31 = (double)(float)((double)local_3bc * dVar20 + dVar31);
          dVar20 = (double)(float)((double)local_3b8 * dVar20 + dVar30);
          dVar19 = (double)FUN_005e8338(dVar32,dVar31);
          dVar20 = (double)FUN_005e8338((double)SQRT((float)(dVar32 * dVar32 +
                                                            (double)(float)(dVar31 * dVar31))),
                                        dVar20);
          dVar20 = -dVar20;
        }
        goto LAB_000edea4;
      }
    }
  }
  else if (fVar5 != 0.0) {
    fVar8 = GameCamera.posY - *(float *)((int)fVar5 + 0x14);
    local_3d0 = *(float *)((int)fVar5 + 0x10);
    fVar9 = GameCamera.posZ - *(float *)((int)fVar5 + 0x18);
    local_3cc = *(undefined4 *)((int)fVar5 + 0x14);
    local_3c4 = *(undefined4 *)((int)fVar5 + 0x1c);
    local_3c8 = *(float *)((int)fVar5 + 0x18) + pfVar4[7];
    camera::DrawTargetCrosshair
              (ABS(-(SQRT(fVar9 * fVar9 +
                          (GameCamera.posX - local_3d0) * (GameCamera.posX - local_3d0) +
                          fVar8 * fVar8) * 0.02 * 0.35 - 0.5)),moby,0xff0fffff,0xed88c);
    goto LAB_000edbf0;
  }
  local_110 = (longlong)(int)(animationSpeed * 0.5);
  if ((int)pfVar4[5] < (int)(animationSpeed * 150.5) - (int)(animationSpeed * 0.5)) {
    dVar19 = (double)pfVar4[0xb];
    dVar20 = (double)pfVar4[0xc];
  }
  else {
    dVar19 = (double)(moby->rotation).z;
    dVar20 = (double)(moby->rotation).y;
  }
LAB_000edea4:
  pfVar14 = pfVar4 + 9;
  dVar30 = 3.1415927410125732;
  dVar31 = 6.2831854820251465;
  if (fVar5 == 0.0) {
    dVar32 = 4.71238899230957;
    dVar19 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar19,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 4.712389),pfVar14,&DAT_000ed88c,
                                pfVar14);
    (moby->rotation).z = (float)dVar19;
    dVar19 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar20,
                                (double)(float)((double)DAT_0071f418 * dVar31),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar32));
  }
  else {
    dVar19 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar19,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 6.2831855),pfVar14,&DAT_000ed88c,
                                pfVar14);
    (moby->rotation).z = (float)dVar19;
    dVar19 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar20,
                                (double)(float)((double)DAT_0071f418 * dVar31),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar31));
  }
  (moby->rotation).y = (float)dVar19;
  mobyutil::MB_SphericalToVector(pfVar4[8],(moby->rotation).z,(float)-dVar19,&local_400);
  local_3a0 = 0.0;
  local_39c = 0.0;
  local_398 = 0.0;
  local_394 = 0;
  dVar30 = -1.0;
  dVar19 = (double)mobyutil::MB_randRangeFloat(-1.0,(float)dVar28);
  local_3a0 = (float)dVar19;
  dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar28);
  local_39c = (float)dVar19;
  dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar28);
  local_398 = (float)dVar19;
  local_118 = 0.20000000298023224;
  dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar26,0.2);
  dVar20 = (double)SQRT(local_398 * local_398 + local_3a0 * local_3a0 + local_39c * local_39c);
  fVar5 = (float)((double)(float)(dVar19 * (double)mobyutil::g_FrameTime) / dVar20);
  dVar19 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar19 = (double)(local_3a0 * fVar5);
  }
  dVar31 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar31 = (double)(local_39c * fVar5);
  }
  dVar32 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar32 = (double)(local_398 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar19 = (double)(local_3a0 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar31 = (double)(local_39c * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar32 = (double)(local_398 * fVar5);
  }
  local_3a0 = (float)dVar19;
  local_39c = (float)dVar31;
  local_398 = (float)dVar32;
  dVar19 = (double)mobyutil::MB_randRangeFloat
                             ((float)((double)mobyutil::g_FrameTime * dVar26),mobyutil::g_FrameTime)
  ;
  dVar20 = (double)SQRT(local_3f8 * local_3f8 + local_400 * local_400 + local_3fc * local_3fc);
  fVar5 = (float)(-dVar19 / dVar20);
  dVar19 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar19 = (double)(local_400 * fVar5);
  }
  dVar26 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar26 = (double)(local_3fc * fVar5);
  }
  dVar31 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar31 = (double)(local_3f8 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar19 = (double)(local_400 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar26 = (double)(local_3fc * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar31 = (double)(local_3f8 * fVar5);
  }
  local_3a0 = (float)((double)local_3a0 + dVar19);
  local_39c = (float)((double)local_39c + dVar26);
  local_398 = (float)((double)local_398 + dVar31);
  mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
  dVar19 = 60.5;
  local_110 = (longlong)(int)(animationSpeed * 60.5);
  uVar27 = 0x40e3880000000000;
  uVar41 = 0x408f400000000000;
  iVar15 = partupd::SpawnPart_44
                     (0x40e3880000000000,0x408f400000000000,dVar28,0xbf2a36e2e0000000,dVar29,
                      local_410,&local_3a0,(int)(animationSpeed * 60.5),0x7f,FUN_00606060,3);
  if (iVar15 != 0) {
    uVar3 = *DAT_00a52860;
    *(undefined1 *)(iVar15 + 3) = 0x44;
    *(undefined1 *)(iVar15 + 2) = uVar3;
  }
  lVar17 = lVar11 + 0x10;
  local_110 = (longlong)(int)(animationSpeed * 6.5);
  partupd::SpawnPart_44
            (uVar27,uVar41,dVar28,0xbf3a36e2e0000000,dVar29,lVar17,&local_3a0,
             (int)(animationSpeed * 6.5),0x7f,&DAT_00b0b0b0,3);
  local_390 = (moby->transform).v2.x * 0.02;
  local_38c = (moby->transform).v2.y * 0.02;
  local_388 = (moby->transform).v2.z * 0.02;
  local_384 = (moby->transform).v2.w * 0.02;
  dVar20 = (double)mobyutil::MB_randRot();
  mobyutil::MB_RotateQuatAxisAngle((float)dVar20,&local_390,&local_390);
  dVar20 = 5.5;
  local_110 = (longlong)(int)(animationSpeed * 5.5);
  partupd::SpawnPart_21(0x40d3880000000000,local_410,&local_390,0x4f007fff,0x1fffffff);
  fastfunc::FastVecAddSelf(auStack_380,&local_400,&local_3e0);
  fVar5 = (moby->pos).x + local_400;
  fVar8 = (moby->pos).y + local_3fc;
  local_3f8 = (moby->pos).z + local_3f8;
  local_326 = moby->oClass;
  (moby->pos).x = fVar5;
  (moby->pos).y = fVar8;
  (moby->pos).z = local_3f8;
  if ((((double)fVar5 < dVar29) || ((double)fVar8 < dVar29)) || ((double)local_3f8 < dVar29)) {
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    local_32c = &DAT_00830000;
    dVar32 = (double)(local_400 * local_400 + local_3fc * local_3fc);
    dVar33 = 3.0;
    local_324 = 0x40400000;
    local_320 = 1;
    dVar26 = dVar29;
    dVar31 = dVar29;
    if ((double)(float)SQRT(dVar32) != dVar29) {
      dVar26 = 1.0 / SQRT(dVar32);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28)
                               * (double)(float)(dVar26 * 0.5) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28)
                               * (double)(float)(dVar26 * 0.5) + dVar26);
      fVar5 = (float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28) *
                      (double)(float)(dVar26 * 0.5) + dVar26);
      dVar31 = (double)(local_400 * fVar5);
      dVar26 = (double)(local_3fc * fVar5);
    }
    local_340 = (float)dVar31;
    local_33c = (float)dVar26;
    local_338 = 0x3f800000;
    local_334 = 0x45afdf66;
    local_328 = 3;
    local_327 = 1;
    local_330 = moby;
    iVar15 = collproc::CollLine(local_430,lVar17,0,g_heroMobyPtr,&local_340);
    if (iVar15 == 0) {
      iVar15 = fastfunc::FastDecTimerS32(pfVar4 + 5);
      if ((iVar15 != 0) ||
         (fVar5 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
         lVar13 = 0, dVar26 = dVar29, dVar31 = dVar28, dVar32 = dVar29,
         260.0 < SQRT(fVar8 * fVar8 + fVar5 * fVar5))) {
        mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      dVar26 = dVar29;
      dVar31 = dVar28;
      dVar32 = dVar29;
      if (CollOutput.pMoby == (MobyInstance *)0x0) {
        lVar13 = 0;
        if (0 < CollOutput.poly) {
          moby->setByGroup = '\x01';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          fVar5 = CollOutput.v0.y - CollOutput.v1.y;
          fVar8 = CollOutput.v0.x - CollOutput.v1.x;
          fVar9 = CollOutput.v0.z - CollOutput.v1.z;
          local_3e4 = CollOutput.v0.w;
          dVar34 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
          dVar31 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar2 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar31 = (double)(fVar8 * fVar2);
            dVar26 = (double)(fVar5 * fVar2);
            dVar32 = (double)(fVar9 * fVar2);
          }
          local_3f0 = (float)dVar31;
          local_3ec = (float)dVar26;
          local_3e8 = (float)dVar32;
          fastfunc::FastVecNormalize(&local_420,&local_400,0xa10980);
          dVar31 = (double)SQRT(local_418 * local_418 + 0.0);
          dVar32 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                           CollOutput.normal.x * CollOutput.normal.x +
                           CollOutput.normal.y * CollOutput.normal.y);
          fVar5 = (float)((double)(mobyutil::g_FrameTime * 2.0) / dVar31);
          dVar26 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          dVar34 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar34 = (double)(fVar5 * 0.0);
          }
          dVar36 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar34 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          local_420 = (float)dVar26;
          local_41c = (float)dVar34;
          local_418 = (float)dVar36;
          if ((double)(float)SQRT(dVar32) == dVar29) {
            lVar13 = 0;
            dVar26 = dVar29;
            dVar31 = dVar29;
            dVar32 = dVar29;
          }
          else {
            dVar26 = 1.0 / SQRT(dVar32);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar5 = (float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            lVar13 = 0;
            dVar26 = (double)(CollOutput.normal.y * fVar5);
            dVar31 = (double)(CollOutput.normal.z * fVar5);
            dVar32 = (double)(CollOutput.normal.x * fVar5);
          }
        }
      }
      else {
        lVar13 = 0;
        if ((CollOutput.pMoby != g_heroMobyPtr) &&
           (lVar13 = 0, CollOutput.pMoby != (MobyInstance *)pfVar4[4])) {
          moby->setByGroup = '\x02';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          fVar5 = CollOutput.v0.y - CollOutput.v1.y;
          fVar8 = CollOutput.v0.x - CollOutput.v1.x;
          fVar9 = CollOutput.v0.z - CollOutput.v1.z;
          local_3e4 = CollOutput.v0.w;
          dVar34 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
          dVar31 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar2 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar31 = (double)(fVar8 * fVar2);
            dVar26 = (double)(fVar5 * fVar2);
            dVar32 = (double)(fVar9 * fVar2);
          }
          local_3f0 = (float)dVar31;
          local_3ec = (float)dVar26;
          local_3e8 = (float)dVar32;
          fastfunc::FastVecNormalize(&local_420,&local_400,0xa10980);
          dVar31 = (double)SQRT(local_418 * local_418 + 0.0);
          dVar34 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                           CollOutput.normal.x * CollOutput.normal.x +
                           CollOutput.normal.y * CollOutput.normal.y);
          fVar5 = (float)((double)(mobyutil::g_FrameTime * 2.0) / dVar31);
          dVar26 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          dVar32 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar32 = (double)(fVar5 * 0.0);
          }
          dVar36 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar32 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          local_420 = (float)dVar26;
          local_41c = (float)dVar32;
          local_418 = (float)dVar36;
          lVar13 = lVar11;
          dVar26 = dVar29;
          dVar31 = dVar29;
          dVar32 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar5 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar26 = (double)(CollOutput.normal.y * fVar5);
            dVar31 = (double)(CollOutput.normal.z * fVar5);
            dVar32 = (double)(CollOutput.normal.x * fVar5);
          }
        }
      }
    }
    if (moby->setByGroup != '\0') {
      local_180[0x18] = 2.0;
      uVar12 = collproc::CollMobySphere(0x4000000000000000,lVar17);
      uVar41._0_4_ = (moby->pos).x;
      uVar41._4_4_ = (moby->pos).y;
      uVar10._0_4_ = (moby->pos).z;
      uVar10._4_4_ = (moby->pos).w;
      mobyutil::MB_DamageMobyList
                (dVar33,dVar38,dVar38,lVar11,3,uVar41,uVar10,&DAT_00a14a00,uVar12,lVar13,
                 &DAT_00810000);
      local_310 = 0;
      local_2f0 = (float)dVar26;
      local_2e0 = 0;
      local_30c = (float)dVar31;
      local_2fc = 0;
      local_2dc = 0;
      local_2f8 = (float)dVar32;
      local_2e8 = 0;
      local_2d8 = 0;
      local_300 = (float)-dVar31;
      local_2ec = (float)-dVar32;
      local_308 = (float)-dVar26;
      local_304 = 0;
      local_2f4 = 0;
      local_2e4 = 0;
      local_2d4 = 0;
      fastfunc::FastVecMtx4Mul(auStack_2d0,&local_310,&local_310);
      dVar28 = 1.570796251296997;
      dVar32 = 3.141592502593994;
      iVar15 = 0;
      dVar34 = -3.141592502593994;
      dVar36 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar37 = 2.601886990305502e-06;
      dVar39 = 8.5;
      dVar42 = 16.5;
      dVar26 = 5.0;
      dVar31 = 120.5;
      do {
        if (moby->setByGroup == '\x01') {
          local_100 = (float)dVar31;
          dVar21 = (double)mobyutil::MB_randRot();
          dVar22 = (double)(float)(dVar21 + dVar28);
          dVar31 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar31 = dVar22;
          }
          dVar24 = (double)(float)(dVar34 - dVar22);
          if ((double)(float)(dVar34 - dVar22) - dVar31 < 0.0) {
            dVar24 = dVar31;
          }
          dVar31 = (double)(float)(dVar24 * dVar24);
          dVar23 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar24));
          dVar22 = (double)(float)(dVar31 * dVar23);
          fastfunc::FastMtxScale
                    ((double)(float)(dVar38 - (double)(float)((double)(float)(dVar31 * dVar22) *
                                                              dVar37 + (double)(float)(dVar22 * 
                                                  dVar35 + (double)(float)(dVar23 * dVar40 +
                                                                          (double)(float)((double)(
                                                  float)(dVar31 * dVar24) * dVar36 + dVar24))))),
                     afStack_210,auStack_2d0);
          dVar31 = (double)(float)(dVar32 - dVar21);
          if (dVar21 - (double)(float)(dVar32 - dVar21) < 0.0) {
            dVar31 = dVar21;
          }
          dVar22 = (double)(float)(dVar34 - dVar21);
          if ((double)(float)(dVar34 - dVar21) - dVar31 < 0.0) {
            dVar22 = dVar31;
          }
          dVar31 = (double)(float)(dVar22 * dVar22);
          dVar24 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar22));
          dVar21 = (double)(float)(dVar31 * dVar24);
          fastfunc::FastMtxScale
                    ((double)(float)((double)(float)(dVar31 * dVar21) * dVar37 +
                                    (double)(float)(dVar21 * dVar35 +
                                                   (double)(float)(dVar24 * dVar40 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar22) * dVar36 + dVar22)))),auStack_250
                     ,&local_310);
          fastfunc::FastVecAdd(auStack_250,auStack_250,afStack_210);
          fastfunc::FastMtx4Identity(afStack_210);
          fastfunc::FastVecAdd(auStack_290,auStack_250,afStack_210);
          FUN_005e825c(&local_360,&local_3f0,auStack_290);
          dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar42);
          dVar23 = (double)SQRT(local_358 * local_358 +
                                local_360 * local_360 + local_35c * local_35c);
          fVar5 = (float)((double)(float)(dVar31 * (double)mobyutil::g_FrameTime) / dVar23);
          dVar22 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar22 = (double)(local_360 * fVar5);
          }
          dVar24 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar24 = (double)(local_35c * fVar5);
          }
          dVar21 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar21 = (double)(local_358 * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar22 = (double)(local_360 * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar24 = (double)(local_35c * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar21 = (double)(local_358 * fVar5);
          }
        }
        else {
          local_fc = (float)dVar26;
          local_100 = (float)dVar31;
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar42);
          dVar21 = (double)(float)(dVar26 * (double)mobyutil::g_FrameTime);
          dVar26 = (double)mobyutil::MB_randRot();
          dVar31 = (double)mobyutil::MB_randRot();
          mobyutil::MB_SphericalToVector((float)dVar21,(float)dVar26,(float)dVar31,&local_360);
          dVar22 = (double)local_360;
          dVar24 = (double)local_35c;
          dVar26 = (double)local_fc;
          dVar21 = (double)local_358;
        }
        dVar31 = (double)local_100;
        local_360 = (float)(dVar22 + (double)local_420);
        local_35c = (float)(dVar24 + (double)local_41c);
        local_358 = (float)((double)mobyutil::g_FrameTime * dVar26 + dVar21) + local_418;
        iVar18 = (int)((double)animationSpeed * dVar31);
        local_110 = (longlong)iVar18;
        uVar41 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar18);
        partupd::SpawnPart_15
                  (uVar27,lVar17,&local_360,0x4f007fff,0x1f00007f,0x1f000000,uVar41,1,
                   0xffffffffffffffff);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      local_370 = 0.0;
      local_36c = 0.0;
      local_368 = 0.0;
      local_364 = 0;
      dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
      local_370 = (float)dVar28;
      dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
      local_36c = (float)dVar28;
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
      dVar31 = (double)(GameCamera.posY - (moby->pos).y);
      dVar32 = (double)(GameCamera.posX - (moby->pos).x);
      dVar28 = (double)(GameCamera.posZ - (moby->pos).z);
      dVar40 = (double)local_36c;
      dVar35 = (double)local_370;
      dVar22 = 0.5;
      dVar36 = (double)(float)(dVar32 * dVar32 + (double)(float)(dVar31 * dVar31));
      dVar21 = (double)local_180[0x18];
      dVar39 = (double)SQRT((float)(dVar26 * dVar26 +
                                   (double)(float)(dVar35 * dVar35 +
                                                  (double)(float)(dVar40 * dVar40))));
      dVar24 = (double)SQRT((float)(dVar28 * dVar28 + dVar36));
      dVar34 = (double)(float)(dVar24 * 0.5 + dVar28);
      dVar36 = (double)SQRT((float)(dVar34 * dVar34 + dVar36));
      dVar37 = (double)(float)((double)((float)(dVar24 * local_118) * mobyutil::g_FrameTime) /
                              dVar39);
      dVar42 = (double)(float)((double)((float)(dVar24 * dVar21) * mobyutil::g_FrameTime) / dVar36);
      dVar28 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar28 = (double)(float)(dVar40 * dVar37);
      }
      dVar23 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar23 = (double)(float)(dVar35 * dVar37);
      }
      dVar25 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar25 = (double)(float)(dVar26 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar28 = (double)(float)(dVar40 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar23 = (double)(float)(dVar35 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar25 = (double)(float)(dVar26 * dVar37);
      }
      dVar26 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar26 = (double)(float)(dVar31 * dVar42);
      }
      dVar40 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar40 = (double)(float)(dVar32 * dVar42);
      }
      dVar35 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar35 = (double)(float)(dVar34 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar26 = (double)(float)(dVar31 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar40 = (double)(float)(dVar32 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar35 = (double)(float)(dVar34 * dVar42);
      }
      local_36c = (float)(dVar28 + dVar26);
      local_370 = (float)(dVar23 + dVar40);
      local_368 = (float)(dVar25 + dVar35);
      dVar28 = 10.0;
      fVar5 = SQRT(local_368 * local_368 + local_370 * local_370 + local_36c * local_36c);
      if (mobyutil::g_FrameTime * 10.0 < fVar5) {
        fVar5 = (mobyutil::g_FrameTime * 10.0) / fVar5;
        local_370 = local_370 * fVar5;
        local_36c = local_36c * fVar5;
        local_368 = local_368 * fVar5;
      }
      iVar15 = (int)((double)animationSpeed * 90.5);
      local_110 = (longlong)iVar15;
      uVar27 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar15);
      FUN_0020bb70(lVar17,&local_370,uVar27,0,0);
      iVar15 = 3;
      if (dVar24 < 6.0) {
        uVar16 = fastfunc::FastDoubleToInt(dVar24);
        iVar15 = ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0);
      }
      iVar18 = 0;
      dVar19 = dVar29;
      if (dVar24 - 7.0 < 0.0) {
        dVar19 = (double)(float)(7.0 - dVar24);
      }
      if (0 < iVar15) {
        dVar26 = (double)local_180[0x19];
        uVar27 = 0x41186a0000000000;
        dVar40 = 15.5;
        dVar36 = 20.5;
        dVar34 = 25.5;
        dVar32 = 30.5;
        dVar31 = 10.5;
        do {
          dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar28);
          dVar37 = (double)mobyutil::g_FrameTime;
          local_180[0] = 2.1569206e+09;
          local_180[1] = 2.1569206e+09;
          local_180[2] = 2.155872e+09;
          local_180[3] = 2.1548234e+09;
          local_180[4] = 4.6566126e-10;
          local_180[5] = 4.6566126e-10;
          local_180[6] = 1.1675459e-10;
          dVar39 = (double)(float)(dVar35 * dVar37 - (double)(float)(dVar37 * dVar19));
          local_180[7] = 1.1669775e-10;
          local_180[8] = 1.166409e-10;
          local_180[9] = 1.1641642e-10;
          local_180[10] = 1.1641532e-10;
          local_180[0xb] = 0.5;
          lVar13 = mobyutil::MB_randInt(dVar35,dVar37,(double)(float)(dVar37 * dVar19),6);
          uVar6 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2));
          lVar13 = mobyutil::MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar36);
          local_110 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar40),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar32);
          local_110 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar34),iVar1);
          partupd::SpawnPart_11(uVar27,dVar39,lVar17,&local_420,uVar6,uVar7);
          iVar1 = (int)((double)animationSpeed * dVar31);
          local_110 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar36);
          local_110 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar40),iVar1);
          partupd::SpawnPart_11
                    (uVar27,(double)(float)(dVar39 * dVar22),lVar17,&local_420,0x7fffffff,0xffffff);
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar15);
      }
      iVar15 = 0;
      uVar27 = 0x41086a0000000000;
      dVar19 = 20.5;
      dVar28 = 35.5;
      do {
        local_180[0xc] = 2.1569206e+09;
        local_180[0xd] = 2.1569206e+09;
        local_180[0xe] = 2.155872e+09;
        local_180[0xf] = 2.1548234e+09;
        local_180[0x10] = 4.6566126e-10;
        local_180[0x11] = 4.6566126e-10;
        local_180[0x12] = 1.1675459e-10;
        local_180[0x13] = 1.1669775e-10;
        local_180[0x14] = 1.166409e-10;
        local_180[0x15] = 1.1641642e-10;
        local_180[0x16] = 1.1641532e-10;
        local_180[0x17] = 0.5;
        local_350 = 0.0;
        local_34c = 0.0;
        local_348 = 0.0;
        local_344 = 0;
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_350 = (float)dVar20;
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_34c = (float)dVar20;
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_348 = (float)dVar20;
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar33);
        dVar26 = (double)SQRT(local_348 * local_348 + local_350 * local_350 + local_34c * local_34c)
        ;
        fVar5 = (float)((double)(float)(dVar20 * (double)mobyutil::g_FrameTime) / dVar26);
        dVar20 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar20 = (double)(local_350 * fVar5);
        }
        dVar31 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar31 = (double)(local_34c * fVar5);
        }
        dVar32 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar32 = (double)(local_348 * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar20 = (double)(local_350 * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar31 = (double)(local_34c * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar32 = (double)(local_348 * fVar5);
        }
        local_350 = (float)dVar20;
        local_34c = (float)dVar31;
        local_348 = (float)dVar32;
        lVar13 = mobyutil::MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x30);
        lVar13 = mobyutil::MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x48);
        iVar18 = (int)((double)animationSpeed * dVar28);
        local_110 = (longlong)iVar18;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar18);
        partupd::SpawnPart_8(uVar27,lVar17,&local_350,uVar6,uVar7);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      uVar16 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
      if (((int)((uVar16 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar24)) {
        uVar27 = 0x4010000000000000;
        local_110 = (longlong)(int)(animationSpeed * 15.5);
        FUN_001d4d88(0x4010000000000000,lVar11,lVar17,&local_420,uVar16,(int)(animationSpeed * 15.5)
                     ,0x7f,0x7f,0x7f);
        local_110 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(uVar27,lVar11,lVar17,&local_420);
      }
      local_110 = (longlong)(int)((double)animationSpeed * dVar19);
      FUN_001d4d88(0x4010000000000000,lVar11,lVar17,&local_420,0x30,
                   (int)((double)animationSpeed * dVar19),0x7f,0x7f,0);
      local_110 = (longlong)(int)(animationSpeed * 19.5);
      FUN_001d4d88(dVar21,lVar11,lVar17,&local_420,0x20,(int)(animationSpeed * 19.5),0xff,0xff,0xff)
      ;
      local_400 = 0.0;
      moby->setByGroup = '\0';
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      fVar5 = 0.35;
      if (dVar24 - 20.0 < 0.0) {
        fVar5 = (float)(dVar24 * 0.017500000074505806);
      }
      GameCamera.offset0.amp = 0.4 - fVar5;
      auVar45 = loadVectorLeftIndexed(0xb4,0xed88c);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar44);
      auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x168,0x9513c0);
      sound::PlayMobySound(0,0,moby);
      FUN_003fda38(&uStack_1d0,lVar17,0,0);
      mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 000ef6b8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBYFUNC(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBYFUNC(void)

{
  DAT_00729040 = 0x10000;
  return;
}



//==== 000ef6d0  ns=mobyfunc  size=0x7c
// sig: undefined UpdateNumSpawnableMobys(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void mobyfunc::UpdateNumSpawnableMobys(void)

{
  bool bVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ulonglong uVar4;
  
  iVar2 = 0;
  numSpawnableMobys = 0;
  if (MobyInstancePermEnd < MobyInstanceEnd) {
    bVar1 = false;
    pMVar3 = MobyInstancePermEnd;
    do {
      if (((0xfd < pMVar3->state) &&
          (uVar4._0_4_ = pMVar3->color, uVar4._4_4_ = pMVar3->light, uVar4 <= worldUpdateTime)) ||
         (bVar1)) {
        iVar2 = iVar2 + 1;
        numSpawnableMobys = iVar2;
        if (pMVar3->state == 0xff) {
          bVar1 = true;
        }
      }
      pMVar3 = pMVar3 + 1;
    } while (pMVar3 < MobyInstanceEnd);
  }
  return;
}



//==== 000ef74c  ns=mobyfunc  size=0xbc
// sig: undefined UpdateMobyFrameData(MobyInstance * param_1)
// callers(21): 00011020 boot::FrontEnd_Update; 00085300 hero::Hero_TransAnim; 000a0b9c hero::Hero_SnapAnim; 000a0c38 hero::Hero_Warp; 000ef810 mobyfunc::InitMobyInstance; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000fdf80 mobyutil::MB_SetAnimationFrame; 00115560 mobyutil::UpdateMotionBlur; 0015fe00 space::ChooseLoadingScreen; 00161788 space::UpdateSpace; 00168768 update::UpdateScene; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 003728b8 mobyupdate_unsorted::UpdateMoby_{432_1052}; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 0042b160 mobyupdate_helpers::M711_0042b160; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 00442a70 mobyupdate_unsorted::UpdateMoby_741; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

void mobyfunc::UpdateMobyFrameData(MobyInstance *param_1)

{
  byte bVar1;
  MobyClass *pMVar2;
  int iVar3;
  
  bVar1 = param_1->updateId;
  if (bVar1 == 0xff) {
    param_1->unk7e = '\0';
    param_1->unk7c = -1;
    pMVar2 = param_1->pClass;
    param_1->pPreviousAnimationData =
         &DAT_00a2c5c0 + (uint)(byte)param_1->previousAnimationFrame * 0x800;
  }
  else {
    pMVar2 = param_1->pClass;
    iVar3 = *(int *)(&pMVar2->type + (uint)bVar1 * 4);
    param_1->pPreviousAnimationData =
         *(void **)(iVar3 + (uint)(byte)param_1->previousAnimationFrame * 4 + 0x1c);
    param_1->unk7e = *(char *)(*(int *)(&pMVar2->type + (uint)bVar1 * 4) + 0x12);
    param_1->unk7c = *(char *)(iVar3 + 0x11);
  }
  param_1->pCurrentAnimationData =
       *(void **)(*(int *)(&pMVar2->type + (uint)param_1->animationId * 4) +
                  (uint)(byte)param_1->animationFrame * 4 + 0x1c);
  return;
}



//==== 000ef810  ns=mobyfunc  size=0x218
// sig: undefined InitMobyInstance(MobyInstance * moby, undefined4 oClass)
// callers(7): 000dcf58 loaders::NAVG_LoadFile; 000efa28 mobyfunc::CreateMoby; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 001744f0 vendor::Vendor_PostUpdate; 003725f8 mobyupdate_unsorted::UpdateMoby_431
// callees(2): 000ef74c mobyfunc::UpdateMobyFrameData; 005001fc fastfunc::FastMemSet

void mobyfunc::InitMobyInstance(MobyInstance *moby,int oClass)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  MobyClass *pMVar5;
  MobyInstance *pMVar6;
  MobyModeBit MVar7;
  uint uVar8;
  uint uVar9;
  
  fastfunc::FastMemSet(moby,0,0x100);
  bVar2 = (&MobyClassLookup)[oClass];
  moby->oClass = (MOBY_OCLASSES)oClass;
  moby->mClass = bVar2;
  moby->alpha = -0x80;
  pMVar6 = MobyInstance;
  moby->damage = -1;
  uVar9 = (int)moby - (int)pMVar6;
  moby->group = -1;
  moby->field44_0x71 = -1;
  uVar8 = (int)moby - (int)pMVar6;
  moby->field45_0x72 = -1;
  moby->color = 0x404040;
  moby->light = 0;
  moby->occlIndex = 0x7f80;
  moby->unk7e = '\0';
  moby->unk7c = -1;
  moby->field71_0xa8 =
       (int)(((longlong)((int)uVar9 >> 8) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 0xff) != 0) &
             0xffffffff) << 0x10);
  moby->unk7d = -1;
  moby->field72_0xac = ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0);
  *(undefined1 *)&moby->collCount = 0x7f;
  *(undefined1 *)((int)&moby->collCount + 1) = 0x7f;
  *(undefined1 *)((int)&moby->collCount + 2) = 0x80;
  *(undefined1 *)((int)&moby->collCount + 3) = 0x80;
  pMVar5 = MobyClasses[bVar2 + 0xe0];
  MVar7 = moby->modeBits;
  moby->pUpdate = pMVar5;
  if (pMVar5 == (MobyClass *)0x0) {
    MVar7 = MVar7 | NO_UPDATE;
    moby->modeBits = MVar7;
  }
  pMVar5 = MobyClasses[bVar2];
  if (pMVar5 == (MobyClass *)0x0) {
    moby->pClass = (MobyClass *)0x0;
    moby->modeBits = MVar7 | (NO_POST_UPDATE|DISABLED);
    moby->collision = (ushort *)0x0;
  }
  else {
    moby->pClass = pMVar5;
    MVar7 = MVar7 | *(MobyModeBit *)&pMVar5->mode_bits;
    moby->modeBits = MVar7;
    moby->collision = pMVar5->collision;
    fVar3 = pMVar5->gScale;
    moby->unk58 = 1.0;
    moby->scale = fVar3;
    moby->frameSpeed = 1.0;
    uVar8 = pMVar5->unk_ptr;
    if (uVar8 != 0) {
      MVar7 = MVar7 | HAS_GLOW;
      moby->modeBits = MVar7;
      moby->field60_0x90 = uVar8;
    }
    if (pMVar5->shadow != '\0') {
      moby->modeBits = MVar7 | DRAW_SHADOW;
      moby->shadow = '\x18';
      moby->unk84 = 0;
      moby->unk88 = 0;
      moby->field82_0xbd = '\0';
    }
    iVar4._0_1_ = pMVar5->type;
    iVar4._1_1_ = pMVar5->mode_bits2;
    iVar4._2_2_ = *(undefined2 *)&pMVar5->field_0x4a;
    if (iVar4 != 0) {
      UpdateMobyFrameData(moby);
      MVar7 = moby->modeBits;
      iVar4 = *(int *)&moby->pClass->type;
      uVar1 = moby->pClass->seq_cnt;
      if (1 < *(byte *)(iVar4 + 0x10)) {
        MVar7 = MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                         HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
        moby->modeBits = MVar7;
      }
      if (((uVar1 == '\x01') && (*(byte *)(iVar4 + 0x10) < 2)) &&
         (moby->unk58 = 0.0, *(char *)(iVar4 + 0x11) < '\0')) {
        moby->modeBits = MVar7 | UNK_40;
      }
    }
  }
  return;
}



//==== 000efa28  ns=mobyfunc  size=0x110
// sig: MobyInstance * CreateMoby(MOBY_OCLASSES oClass)
// callers(237): 0001b100 mobyupdate_helpers::M184_0001b100; 0001f240 mobyupdate_helpers::M409_0001f240; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00087a88 hero::Hero_UpdateTimers; 0008c3d0 hero::HeroUpdateNonRatchet; 000914e0 hero::Hero_UpdateGadgetMobys; 000921c0 hero::EquipItem; 000aaec0 hero::HandleHeroMovement; 000dcf58 loaders::NAVG_LoadFile; 000e0230 loaders::ParseNpcChunk; 000eb2a8 mobyattack::Spawn_Moby1427_GCShockwave; 000eb520 mobyattack::Spawn_Moby1475_KaleboRocket; 000ec2d8 mobyattack::Spawn_Moby1523_Blueball2; 000ec418 mobyattack::Spawn_Moby1523_GC_Blueball; 000ed3e0 mobyattack::Spawn_Moby256_Rocket; 001153c8 mobyutil::AddMotionBlurElem; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0013b108 update::OpenPauseMenu; 0013d428 pause::FrontEnd_InitMenu; 0013ebb0 pause::LoadMenuRatchetModel; 00145880 pause::ItemView_Update; 00145d28 pause::WeaponView_Update; 00146984 pause::GoldBoltWidget_SpawnMoby; 0014f1f0 pause::SpawnHeroInMenu?
// callees(3): 000ef810 mobyfunc::InitMobyInstance; 005001fc fastfunc::FastMemSet; 005cd098 libc::printf
// strings: 00652d88: "Tried to create moby and couldn't. Time: %d, oClass: %d\n"

MobyInstance * mobyfunc::CreateMoby(MOBY_OCLASSES oClass)

{
  uint uVar1;
  void *pVarSlot;
  ulonglong uVar2;
  MobyInstance *moby;
  
  if (MobyInstancePermEnd < MobyInstanceEnd) {
    moby = MobyInstancePermEnd;
    do {
      if ((0xfd < moby->state) &&
         (uVar2._0_4_ = moby->color, uVar2._4_4_ = moby->light, uVar2 <= worldUpdateTime)) {
        if (moby->state == 0xff) {
          moby[1].state = 0xff;
        }
        InitMobyInstance(moby,(int)(short)oClass);
        uVar1 = (int)moby - (int)MobyInstancePermEnd;
        pVarSlot = (void *)(DAT_00a390b0 +
                           (((int)uVar1 >> 8) + (uint)((int)uVar1 < 0 && (uVar1 & 0xff) != 0)) *
                           0x80);
        moby->pVar = pVarSlot;
        fastfunc::FastMemSet(pVarSlot,0,0x80);
        if (numSpawnableMobys == 0) {
          return moby;
        }
        numSpawnableMobys = numSpawnableMobys + -1;
        return moby;
      }
      moby = moby + 1;
    } while (moby < MobyInstanceEnd);
  }
  libc::printf("Tried to create moby and couldn\'t. Time: %d, oClass: %d\n",worldUpdateTime,oClass);
  return (MobyInstance *)0x0;
}



//==== 000efb38  ns=mobyfunc  size=0x68
// sig: undefined DeleteMoby(MobyInstance * moby)
// callers(550): 00017b78 mobyupdate_helpers::M1274_00017b78; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 000503b8 camera::Camera_handleCollWithHero; 00050ae0 camera::UpdateAllCameras; 000836ac hero::Hero_RevertToRatchet; 00086814 hero::Hero_KillGadget; 000a4e1c hero::???_Hero_CleanupAttachedMobys; 000eb3c0 mobyattack::UpdateMoby_1427_GC_Shockwave; 000eb6c0 mobyattack::UpdateMoby_1475_KaleboRace_Rocket; 000ec5b8 mobyattack::M1523_Blueball_HandleDeletion; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001154c8 mobyutil::DeleteMotionBlur; 00115560 mobyutil::UpdateMotionBlur; 0013b838 pause::UpdatePause; 0013d708 pause::FrontEnd_ShutdownMenu; 0013ebb0 pause::LoadMenuRatchetModel; 001457dc pause::ItemView_OnExit; 00145880 pause::ItemView_Update; 00145d28 pause::WeaponView_Update; 00146aac pause::GoldBoltWidget_DeleteMoby
// callees(1): 000f25f4 mobyproc::UpdateMobyGrids

void mobyfunc::DeleteMoby(MobyInstance *moby)

{
  int iVar1;
  
  moby->state = (char)((longlong)((longlong)(int)moby - ZEXT48(MobyInstancePermEnd)) >> 0x3f) + 0xfe
  ;
  iVar1 = worldUpdateTime + 2;
  moby->color = (int)((ulonglong)(longlong)iVar1 >> 0x20);
  moby->light = (int)(longlong)iVar1;
  mobyproc::UpdateMobyGrids(moby,0x80807f7f);
  return;
}



//==== 000efba0  ns=mobyfunc  size=0xb0
// sig: undefined MB_UpdateLoopSound(void)
// callers(1): 000f98d8 mobyfunc::UpdateMobyAnimFrame
// callees(2): 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

void mobyfunc::MB_UpdateLoopSound(MobyInstance *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1->unk7d;
  if (bVar1 == 0xff) {
    if ((byte)param_1->unk7c != 0xff) {
      iVar2 = sound::PlayMobySound((uint)(byte)param_1->unk7c,4,param_1);
      param_1->unk7d = (char)iVar2;
    }
  }
  else if (sound::g_SoundChannels[bVar1].pMoby == param_1) {
    if (sound::g_SoundChannels[bVar1].sound_index != (ushort)(byte)param_1->unk7c) {
      sound::sound_Kill((uint)bVar1);
      param_1->unk7d = -1;
    }
  }
  else {
    param_1->unk7d = -1;
  }
  return;
}



//==== 000efc58  ns=mobyfunc  size=0xbc
// sig: undefined MB_FindNearestAnimTrigger(void)
// callers(1): 00176c90 walk::Walk_UpdateStateMachine
// callees(1): 00502758 fastfunc::FastDoubleToInt

ulonglong mobyfunc::MB_FindNearestAnimTrigger(double param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  ulonglong uVar4;
  int iVar5;
  
  sVar3 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 16.0));
  uVar4 = 0;
  if (*(byte *)(param_2 + 0x10) != 0) {
    do {
      iVar2 = param_2 + (int)((uVar4 & 0xffffffff) << 2);
      sVar1 = *(short *)(*(int *)(iVar2 + 0x1c) + 4);
      iVar5 = (int)uVar4;
      if (sVar3 < sVar1) {
        if (iVar5 < 1) {
          return uVar4;
        }
        if ((int)sVar1 - (int)sVar3 <= (int)sVar3 - (int)*(short *)(*(int *)(iVar2 + 0x18) + 4)) {
          return uVar4;
        }
        return (longlong)(iVar5 + -1);
      }
      uVar4 = (ulonglong)(iVar5 + 1);
    } while (iVar5 + 1 < (int)(uint)*(byte *)(param_2 + 0x10));
  }
  return 0xffffffffffffffff;
}



//==== 000efd18  ns=mobyfunc  size=0x11c
// sig: undefined MB_FindAnimTriggerAfter(void)
// callers(0): 
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

int mobyfunc::MB_FindAnimTriggerAfter(double param_1,int param_2,undefined8 param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  sVar1 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 16.0));
  iVar3 = 0;
  iVar2 = param_2;
  if (*(byte *)(param_2 + 0x10) != 0) {
    do {
      if (sVar1 < *(short *)(*(int *)(iVar2 + 0x1c) + 4)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0x10));
    if (0 < iVar3) {
      if (param_4 != (float *)0x0) {
        param_2 = param_2 + iVar3 * 4;
        iVar2 = *(int *)(param_2 + 0x1c);
        dVar4 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(*(int *)(param_2 + 0x18) + 4));
        dVar5 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(iVar2 + 4));
        *param_4 = (float)(param_1 - dVar4) / (float)(dVar5 - dVar4);
      }
      return iVar3 + -1;
    }
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  return -1;
}



//==== 000efe40  ns=mobyfunc  size=0x118
// sig: undefined BlendAnimFrame(MobyInstance * param_1)
// callers(94): 0008bc30 hero::Hero_UpdateAnim; 00102168 mobyutil::MB_UpdateLegAnimState; 001075b0 mobyutil::MB_AnimBoneCollLines; 001095b8 mobyutil::MB_updateJump; 0010b030 mobyutil::MB_UpdateKick; 00113e88 mobyutil::MB_MayaFrameTrigger; 00176c90 walk::Walk_UpdateStateMachine; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001a9c20 mobyupdate_helpers::M1059_001a9c20; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001d9310 mobyupdate_helpers::M1134_001d9310; 001d98b8 mobyupdate_helpers::M1134_001d98b8; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 0020b9e8 mobyupdate_unsorted::UpdateMoby_1219; 00224bf8 mobyupdate_helpers::M1246_00224bf8; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0027d4c8 mobyupdate_unsorted::UpdateMoby_1440
// callees(1): 00502730 fastfunc::FastIntToDouble

double mobyfunc::BlendAnimFrame(MobyInstance *param_1)

{
  void *pvVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1->updateId == 0xff) {
    pvVar1 = param_1->pCurrentAnimationData;
  }
  else {
    pvVar1 = param_1->pPreviousAnimationData;
  }
  dVar6 = 0.0625;
  if (param_1->animationBlend == 0.0) {
    dVar3 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar6 = (double)(float)(dVar3 * dVar6);
  }
  else if ((param_1->updateId == param_1->animationId) &&
          ((byte)param_1->previousAnimationFrame <= (byte)param_1->animationFrame)) {
    pvVar2 = param_1->pCurrentAnimationData;
    dVar3 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar5 = (double)(float)(1.0 - (double)param_1->animationBlend);
    dVar4 = (double)fastfunc::FastIntToDouble
                              (0x3ff0000000000000,(double)param_1->animationBlend,
                               *(undefined2 *)((int)pvVar2 + 4));
    dVar6 = (double)(float)((double)(float)(dVar3 * dVar5 +
                                           (double)(float)(dVar4 * (double)param_1->animationBlend))
                           * dVar6);
  }
  else {
    dVar3 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar6 = (double)(float)(dVar3 * dVar6 + (double)param_1->animationBlend);
  }
  return dVar6;
}



//==== 000eff60  ns=mobyfunc  size=0x90
// sig: float MB_GetAnimSeqLength(int oClass, int seq)
// callers(4): 00175688 walk::walk_init2LegAnim; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState; 004cdcd0 mobyupdate_unsorted::UpdateMoby_99
// callees(1): 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [p2_mobyutil] MobyClasses[oClass]->seqs[seq] frame count/16 */

float mobyfunc::MB_GetAnimSeqLength(int oClass,int seq)

{
  float fVar1;
  double dVar2;
  
  if ((seq < 0) || (0xfe < seq)) {
    fVar1 = 0.0;
  }
  else {
    dVar2 = (double)fastfunc::FastIntToDouble
                              (*(undefined2 *)
                                (*(int *)(*(int *)(*(int *)((int)MobyClasses +
                                                           (int)((longlong)oClass << 2)) +
                                                   (int)((longlong)seq << 2) + 0x48) + 0x1c) + 4));
    fVar1 = (float)(dVar2 * 0.0625);
  }
  return fVar1;
}



//==== 000efff8  ns=mobyfunc  size=0xa0
// sig: float MB_GetAnimSeqTriggerLength(int oClass, int seq)
// callers(3): 00175688 walk::walk_init2LegAnim; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 004cdcd0 mobyupdate_unsorted::UpdateMoby_99
// callees(1): 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float mobyfunc::MB_GetAnimSeqTriggerLength(int oClass,int seq)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  if ((seq < 0) || (0xfe < seq)) {
    fVar1 = 0.0;
  }
  else {
    iVar2 = *(int *)(*(int *)((int)MobyClasses + (int)((longlong)oClass << 2)) +
                     (int)((longlong)seq << 2) + 0x48);
    dVar3 = (double)fastfunc::FastIntToDouble
                              (*(undefined2 *)
                                (*(int *)(iVar2 + (uint)*(byte *)(iVar2 + 0x10) * 4 + 0x18) + 4));
    fVar1 = (float)(dVar3 * 0.0625);
  }
  return fVar1;
}



