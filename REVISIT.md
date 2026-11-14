# Things to revisit

Shortcomings in work already committed: places where the source is a best guess, was not checked
against the asm all the way, or left loose ends. Newest first.

**Edit this file in rc1src/ (sync.sh copies it into the repo).**

**Rule: every time a file is decompiled, add its section here in the same commit** — anything not
fully traced against the asm, guessed signatures or unused parameters, invented names, symbols
left as raw `DAT_`/`FUN_`/offsets, and other files made worse by the change. Files cleaned before
this rule (everything before collproc.cpp) have no entries yet.

## AltiVec / PS3-specific instructions across all cleaned files

Scan of the asm of every function in a finished manual file (not MERGE) for vector ops and `lvlx`,
`stvewx`, `dcbt`, `mftb`, `lwarx`, ... (prologue `stvx`/`lvx` register saves excluded). None of
these files emit them yet (only crt0.cpp has any asm). Each function below needs checking:

- Checked: SNC (the game's compiler) does not produce even the short patterns (`lvlx` + `vspltw` +
  `vctsxs`, lone `stvewx`) from plain C, so every function listed needs vector source.
- Longer runs (`vmaddfp`, `vperm`, `vnmsubfp`, `vsel`, `vrsqrtefp`) are real vector code and need
  intrinsics.

```
## game/boot.cpp 2
   FrontEnd_Update lvlx vspltw vspltisw vslw vmaddfp vctsxs
   DrawSplashScreen vspltw lvlx vspltisw stvewx vsel vand
## game/camera.cpp 1
   Camera_InitBlender lvlx vspltw vspltisw stvewx vadduwm vcfsx
## game/collproc.cpp 5
   CollLineVsEnv vspltw stvewx
   CollLine vspltw vspltb stvebx stvewx
   CollSphere vspltw stvewx
   CollPill vspltw stvewx
   CollHeroSphere vspltw stvewx
## game/debug.cpp 1
   UpdateDebugSelections lvlx vctsxs vsraw vspltw stvewx vspltisw
## game/draw.cpp 13
   UploadViewMatricesToPasses vperm lvlx vspltw vmrghw vmrglw stvewx
   RebuildSharedWaveTables lvlx vspltw vspltisw vslw vcfsx vmaddfp
   UpdateViewContext vspltisw vslw vmaddfp vnmsubfp vspltw stvewx
   FontPrintOptJapanese vspltisw vspltw lvlx vsraw vcfsx vmaddfp
   FontPrintOptWestern vspltw lvlx vspltisw vsraw vcfsx vmaddfp
   DrawTimedHelpMsg vspltisw lvlx vspltw vsubuwm vsraw vslw
   FadeToBlack vspltisw vslw vmaddfp lvlx vspltw vnmsubfp
   DrawTexturedQuadHud vcmpgtfp vsel lvlx vspltw vspltisw vslw
   SetScreenResolution stvewx vslw vspltw vspltisw vmaddfp vcfux
   FastDrawQuad vmrghw vmrglw
   DrawTexturedStrips vcmpgtfp vsel vspltisw lvlx vspltw vslw
   ImpactSprite_Draw vmaddfp vperm vspltw lvlx stvewx vnmsubfp
   ???_Water_ComputeWaveGrid vspltisw vctsxs vsplth stvehx vsldoi vcfsx
## game/freeze.cpp 3
   DisplayPrompt vspltw lvlx stvewx vspltisw vslw vmaddfp
   DrawDialogText lvlx vspltw vspltisw vcfsx vslw vmaddfp
   UpdateFreeze lvlx vspltw vspltisw vslw vmaddfp vctsxs
## game/help.cpp 1
   Help_Suspend lvlx vspltw vspltisw vslw vmaddfp vctsxs
## game/loaders.cpp 2
   LoadSpaceshipModel lvlx vsraw vsplth stvehx vperm vspltisw
   PrintMobyMemory lvlx vcfsx vspltw stvewx
## game/mesh.cpp 2
   ShadeVerts vperm vspltw vmaddfp lvlx stvewx vor
   BuildVerts vspltisw vslw lvlx vspltw vand vcfux
## game/mission.cpp 1
   UpdateMissionDisplay lvlx vspltw vslw vspltisw vmaddfp vctsxs
## game/mobyfunc.cpp 1
   MB_StartAnimLayer vspltisw vslw vnmsubfp vmaddfp vcfsx lvlx
## game/music.cpp 1
   LoadMusic lvlx vspltw vspltisw vslw vmaddfp vctsxs
## game/partproc.cpp 3
   CreatePartEx vspltisw
   UpdateParts vspltw vperm vmaddfp stvewx lvlx vmrghw
   UpdatePart_22 vspltisw vmaddfp lvlx vslw vcfsx vsrw
## game/skyfunc.cpp 14
   SkyLevel_00 lvlx vspltw vspltisw vand vcfsx vnmsubfp
   SkyLevel_01 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_03 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_04 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_05 vspltisw
   SkyLevel_07 lvlx vspltisw vspltw vslw vmaddfp vctuxs
   SkyLevel_08 vspltisw
   SkyLevel_10 vspltisw lvlx vspltw vand vcfsx vnmsubfp
   SkyLevel_11 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_12 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_14 vspltisw
   SkyLevel_15 lvlx vspltw vspltisw vslw vmaddfp vctuxs
   SkyLevel_16 lvlx vspltw vand vcfsx vnmsubfp vxor
   SkyLevel_18 vspltisw
## game/skyproc.cpp 1
   SkySpriteProc vspltw
## game/space.cpp 4
   StartLeaveLevelCutscene lvlx vspltw vcfsx vaddfp vspltisw vslw
   ChooseLoadingScreen lvlx vmaddfp vspltisw vspltw vslw stvewx
   Space_DrawShipEffects lvlx vspltw vspltisw vslw vmaddfp vctsxs
   UpdateSpace lvlx vspltw vspltisw vslw vmaddfp vctsxs
## game/water.cpp 4
   WaterTile_DrawCellOvl vcmpgtfp vsel vspltisw vslw lvlx vspltw
   WaterTile_CullAndDrawCell stvewx vmaddfp lvlx vspltw vspltisw vaddfp
   SubmitOceanCell vaddfp vspltw lvlx vspltisw vperm vcmpgtfp
   OceanPass lvlx vspltw vperm vmaddfp vspltisw stvewx
```

## game/draw.cpp

### Draw-list renames (follow-up)
- RegisterOceanUpdate -> RegisterPreDraw (it fills the pre-draw list; nothing ocean-specific).
- RegisterFuncForMoby -> RegisterMobyDraw, ExecuteRegisteredMobyFuncs -> ExecuteMobyDraws,
  g_MobyFuncList/Args/Count -> g_MobyDrawFuncs/Args/Count (DL: pRegistered_MobyDraws; the list
  DefaultDraw runs after DrawMobys). Parameter types are still `void **` / `undefined4` for the
  raw callers; type them as MobyDrawFunc once those are cleaned.

### Scalar stand-ins for AltiVec code (must be converted, see STYLE.md)
- ImpactSprite_Draw (quaternion turn and vector sincos; its normalising now uses VecNormalize3), DrawLameShadows and
  Normalize3 (`1.0f / sqrtf` for vrsqrtefp + Newton), FadeToBlack (vrefp + Newton), DrawScreenQuad,
  DrawTexturedStrips and DrawColorGradientStrip (Ps2Channel for the splat colour maths),
  FontPrintOptJapanese/Western and DrawTimedHelpMsg (vector width/fade sums), BeginAuxDrawMode
  (viewport constants), FastDrawQuad (vmrghw transpose). Also the `lvlx` unaligned loads in FontPrintOptJapanese/
  Western, DrawTimedHelpMsg and DrawSpriteRotated's callers, and the `stvewx`/`stvehx` stores
  (max_width in the font printers), all written as plain loads/stores.

### Not fully traced against the asm
- **ImpactSprite_Draw (0x74fa0).** The game turns each sprite's right/up axes with a vectorised
  quaternion (half angle, vperm-built cross products). I wrote it as a plain rotation about the
  view axis (`RotateAbout`) without tracing the permutes, so the **direction of the turn may be
  reversed**, and which view-matrix columns are right/up/axis was read off the merge patterns only.
  The pull of one unit towards the camera and the size formula were checked.
- **UpdateViewContext-era vector code in DrawTimedHelpMsg, FadeToBlack, DrawScreenQuad,
  DrawTexturedStrips**: the vector colour/brightness maths was reduced to scalar equivalents by
  reading the constants; worth a second look for rounding (vrefp/vrsqrtefp Newton steps are
  written as plain divisions/`1.0f / sqrtf`).
- **DrawTextBox (0x6f0a0).** The nine strip coordinates were taken from Ghidra's arithmetic and
  spot-checked against a few `addic`s, not every call. Some strips run bottom-up (e.g.
  `top - 3, top - 5`), which looks odd; confirm it's really in the game.
- **DrawLameShadows / FastDrawQuad texture coordinates.** Both treat `QuadDef.st` as interleaved
  (s, t) pairs, which matches the asm, but the QuadDef comment says "s for the 4 corners, then t".
  One of them is wrong: settle it and fix the type comment or the code.
- **DrawsFlowingLava**: the colour seed loop and the two DrawLavaStrips calls (pass 0, then pass
  2) were checked; the per-strip `bounds[]` reading assumes at most 16 bounds (LavaPatch layout
  inferred from use only).
- **DrawColorGradientStrip**: GradientStrip layout inferred from use; the alpha channel is not
  doubled while RGB is (matches Ghidra, store confirmed as `stw`, packing not re-verified).

### Signatures guessed or with unused parameters
- `BeginAuxDrawMode(float xratio, int log2Width, int log2Height, int flag, u32 clearColor)`: the
  real register order is (log2W, log2H, float, flag, color); written float-first. `flag` is never
  read. The raw caller in pause.cpp passes six arguments and will need fixing when pause.cpp is done.
- `Sprite_DrawRotated`: parameter `unused` (stack slot 8) is never read; `perEye` makes each vertex
  call FUN_004e3178, presumed to be the stereo offset (not confirmed).
- `DrawSpriteFont`: DL has a trailing `one_to_one`; RC1 never reads it, so it was dropped.
- `FastDrawQuad(..., int unused, ...)`, `____Draw_EffectStrip_M401(int unused, ...)`,
  `FontPrintScaledJapanese(..., int unused, ...)`: parameters passed but never read.
- `DrawLavaStrips` / `DrawsFlowingLava` / `FontPrintRightWithScale` etc.: written float-first per
  the prototypes rule; the real ABI slot order differs (noted in the asm decode, not in comments).

### Invented names (flagged in the code; replace if a better source turns up)
- Types: FontGlyph, TimedHelpMsg, ImpactSprite, WaterPatchList, WaterPatchChunk, LavaPatch,
  GradientStrip, MobyDrawFunc, the local vertex structs (FastQuadVertex, StripVertex,
  Strip2UVVertex, FogStripVertex).
- Globals: g_FontKeepPalette, g_FontPalette, g_SubtitlesOn, g_UnderwaterTint, g_AuxWidth,
  g_AuxHeight, g_AlphaPal, g_WaterSpadIndex, g_WaterSpadBufs, g_WaterBaseUVs, g_WaterColorGrid*,
  g_WaterPatchData/Chunk, g_CreditsHelpMsgs, g_ImpactSprites.
- Functions renamed by guess: DrawCredits (was DrawSomeOverlay), FontPrintScaledWestern/Japanese/
  Medium/Small/Large (were FontPrint_unk3 etc.). The `____Draw_*` / `____Water_*` names are still
  the placeholder style from earlier passes.
- Fields: WaterPatchChunk.unk6/ofs8/ofsC, IdolDraw.unk1a8c/unk1a74/auxDepth/camPos (camPos replaced
  the old `frame` field at 0x20 on the strength of ImpactSprite_Draw alone).

### Left as raw addresses / DATs
- `DAT_0095cd40`, `DAT_0071f004`, `DAT_00966b18/1c`, `DAT_00966b80..0x966bc0` (frame buffer info),
  `DAT_008fa550` (frame brightness), `DAT_0071eed0`/`DAT_0071ef00` (ScreenColorEffect and
  ScreenColorEffectLight — not typed because raw code in hero/moby files compares them to chars),
  `DAT_0071f080..` GS presets, `DAT_70001000/70002000` (PS2 scratchpad).
- Pass caches in EndAuxDrawMode are poked by byte offset (0x14, 0xa8, 0xc0, 0xc4); RenderingStep
  is only typed as its 0x14-byte header.
- `idol_draw::BindVertexProgram/BindFragmentProgram` and `FUN_004d6bb0`, `FUN_004d676c`,
  `FUN_004d6704`, `FUN_004e3178`, `FUN_004deab8`, `FUN_004d86b0` are still unnamed/loosely typed;
  call sites cast around them.

### Knock-on effects in other files
- Typed signatures (DrawScreenQuad, DrawMeshSet, FastDrawQuad, Sprite_*, font functions,
  BeginAuxDrawMode, ImpactSprite_Add, DrawColorGradientStrip) made broken raw Ghidra calls fail to
  compile: vendor.cpp, pause.cpp, moby617/440/1267/635/751/841/1111/1158/1898.cpp, mUnk.cpp went up
  by 1–12 errors after the first checkpoint. They need fixing when those files are cleaned.
- Comments were bulk-updated after the one/two-letter local rename; a few may now read oddly
  ("texV 0 / 1 across"). Some comment lines exceed the usual width.

### Process
- The style rule against one/two-letter locals was only applied at the end, by script, to the
  whole file (including older functions). Check the script didn't touch anything it shouldn't
  (it skipped member accesses, strings, numbers and comments).

## game/camera.cpp (from memory of the session; less detail than draw.cpp)

- `CameraVTable` members are `void *`, with casts at the call sites: typing them as function
  pointers broke raw code elsewhere. Type them once the callers are cleaned.
- Renamed by guess: `Camera_ClampAngles` → `Camera_Polar2Pos`, `???_Camera_CalcPolarToTarget` →
  `Camera_Pos2Polar` (named from what they compute).
- Types laid out partly from use: GAMECAMERA, CameraStatics, CamBlender (+ PosQuat/PolarQuat/Data),
  CamOffsetRec (strength/adjust/time/div), ImportCamera, CameraImportVars, CamCrosshair,
  CamCollGridPrim, Pill, CamPostUpdFunc. Which individual fields were guesses was not recorded;
  re-check them against their uses.
- Global renames that reached other files: `DAT_00902e9c` → `g_pIdolDrawBase` (loaders.cpp,
  update.cpp), `DAT_0071f028` → `g_CameraEulerBase`, `g_FrustumExtra` (mission.cpp).

## game/collproc.cpp and sdk/xUnk5.cpp (from memory; no details kept)

- Added CollMobySphere, CollHeroSphere, the small getters, and the four helpers in sdk/xUnk5.cpp.
  No shortcomings were written down at the time; re-review against the asm when convenient
  (xUnk5's file and function names are placeholders).

## game/vendor.cpp

All 33 functions are written against the asm. The control flow and calls were checked for each;
the arithmetic of the big ones (Vendor_PreUpdate, Vendor_HudUpdate) was read through Ghidra and
spot-checked, not traced instruction by instruction.

- Literal values read from the EBOOT: the highlight's corner w is 1.0 and its far edge 0.984375;
  the quantity markers are "<" and ">".
- **Signatures set from the callers' registers:** DrawWeaponIcons, DrawWeaponStrings, DrawVendorDude,
  DrawExitButton take the screen moby (unused); DrawBuyButton and Vendor_DrawItemInfo take
  (moby, width, height); Vendor_DrawFlickerText (screen, width, height) and
  Vendor_SetupScreenRender (xratio, log2Width, log2Height). The float-vs-int order in the last two
  can't be told from the registers.
- **Renamed:** DrawVendorHintFrame → Vendor_DrawBitmapText (it draws text in a bitmap font).
  Other function names are as they were and fit what the code does.
- **Invented names:** every global named `g_Vendor*` in this commit, g_AmmoBought, and the types
  VendorItemView, VendorItemModel, VendorCopyView, VendorScreenPart, WeaponAmmoInfo, GadgetInfo
  (only the fields vendor.cpp reads). WeaponAmmoInfo and GadgetInfo cover tables other files read
  as raw `DAT_00737d3x`/`DAT_007210xx`; vendor.cpp reaches them through `VendorAmmoInfo()` and
  `VendorGadget()` casts. Give those tables real globals once the other users are cleaned.
  `UnlockableItems.persuader` is the Persuader, the item that gives a discount: with it a weapon
  costs `discountPrice` (WeaponAmmoInfo +4). It also lifts the weapon preview by `weaponLift` a
  second time (Vendor_SpawnPreviewMoby); that looks odd but it's what the code does.
- **Left raw:** `DAT_00e5a668` (the vendor data pointer, read as `*(u8 **)&`), `DAT_0071efb4`
  (a font color word), `DAT_00735580` (item info table, through VendorItemPrice/VendorItemText),
  `DAT_0096bcd5`, `DAT_0096bd98`, `DAT_00e5aa38/aa40`, `DAT_0071f408`, and the STUB_ calls.
- **Draw state helpers duplicated:** Emit/EmitMethod/EmitSetSurface/EmitVertexConst* are copied
  from draw.cpp (each file keeps its own). Vendor_SetupScreenRender is a near-copy of
  BeginAuxDrawMode; the float splats it stores with `stvewx` are written as plain floats, like
  draw.cpp does (same scalar stand-in as there).
- **AltiVec:** the matrix transposes use the new `VecTranspose4` (vmrghw/vmrglw) in fastinline.h.
  draw.cpp's `Mtx4_Transpose` in UploadViewMatricesToPasses is the same transpose and should use it too.
- **Odd things kept as the code has them:** vendor_pal.ps3 is loaded when `g_IsPal` is 0 (g_IsPal's
  meaning may be the other way round); Vendor_DrawBitmapText checks for character 0x10a, which a
  byte can't hold; Draw_FlushAndPresent and DrawRenderTargetToScreen are called with g_VendorBuf in
  r3 although their prototypes take nothing (check draw.cpp's signatures).
- **Fixed in other files with this commit:** the font printers in draw.cpp had the `scale` float
  in the wrong place. A float takes a GPR slot, and the asm reads the ints in r3.. with no gap, so
  scale goes after the ints. Fixed FontPrintScaled{Japanese,Western,Medium,Small,Large},
  FontPrintOpt{,Japanese,Western}, FontLenScaled{,Small,Large,WithTable,WithTableNoKern},
  FontPrintRightWithScale and FontPrintCenterScaled{,Medium,Small,Large}, plus their callers in
  draw/help/mission/freeze. The same mistake was fixed in ImpactSprite_Add(pos, scale, tex) and
  OceanPlane_SetDepth/SetDefaultDepth(ocean, scale, ...). OceanPlane_SetDepth's "unused" parameter
  was the scale's slot. Look for other `float` parameters put first in cleaned files.
  DrawFlatOverlay got a prototype with int coordinates.
- **Files made worse (+1 error each):** game/update/moby124, 126, 1260, 460, 879, 317, 327, 994, 1018.
  Their raw Ghidra calls still pass OceanPlane_SetDepth/SetDefaultDepth and the font/lava calls in
  the old argument order. They will go away when those files are cleaned.

## game/vuchain.cpp

All 29 functions are checked against the asm; 16 of them are empty stubs.

- **Names from DL** (its vuchain.cpp): VU1_* and VU0_loadMicroProgram as they were, plus the
  globals `vu1_bufSize` (was `DAT_00e5aa64`, which vendor.cpp had called `g_VendorUnkAa64`),
  `vu1_buf_table`, `vu1_DmaBuffers`, `vu1_bufId` and `vu1_bufLimit`. The role of `vu1_bufLimit`
  is guessed from how it's computed.
- **Invented names:** `vu1_chainEnd`, `vu1_bufLimitSafe`, `g_VifBuffers`, `g_Vu1Reserve`,
  `g_D1Chcr`/`g_D1Tadr`, and the `g_GsReg*` state SetGSReg keeps. Ids 7 and 8 are unknown, so
  they are named by number. `____Unused_VuChain_SetBufSize_10000` became `SECTION_HEADER_VUCHAIN`,
  since it has the same shape as the other files' section headers (`DAT_0073a768 = 0x10000`).
- **Signatures:** VU0_loadMicroProgram takes (program, dest), where DL has one parameter;
  VU1_addDataRefToLoc and VU1_addDataDirect take (vuAddr, data, qwc). DMAC_BEIS_Handler is `void`
  here; DL gives it an int, but the asm reads nothing.
- VU1_setScissor's literal pool (0xffff, 0.5, -0.5) was checked against the EBOOT.
- **AltiVec:** VU1_setScissor (vsubuwm, vadduwm, vand, vcfux, vmaddfp, vaddfp, stvewx) and
  VU1_dumpChain (lvx, vspltb) use intrinsics. The new fastinline.h helpers are VecSplatU and
  VecByte.
- **Packet bytes:** the packet writers store one byte per PS2 word (`stb`), as the port's code
  does. That looks like a leftover from the port, but it's what the code does.

## game/shadow.cpp (was rUnk.cpp)

All 17 functions are checked against the asm; 9 of them are empty stubs. The file is the
stencil shadow volume code: DL has the same Shadow* functions, the globals ShadowDir/Vec1/Vec2,
and shadow_init_gs_regs/shadow_gs_regs. The stubbed functions are the volume builders and
drawers (DL's ShadowCreatePillVolume, ShadowDrawVolume, ...); which stub is which is not known.

- **Renamed by role** (DL names where the role matches): ShadowSetupVectors (was
  ___DrawScreenEffect_BuildPacketA), ShadowClearStencil (BuildPacketB), ShadowDrawStencil
  (BuildBlendPacket; DL takes two ints, this takes one rgba), shadow_init_gs_regs
  (InitGsRegPresets_153194). Invented: ShadowCreateVolume (DispatchCmd), ShadowSendGsRegs
  (WriteGifTag, no callers) and DrawMobyShadows (DrawScreenEffect_152df8).
- **ShadowVec1 and ShadowVec2:** which of DL's two vectors is which is a guess. ShadowVec2 is the
  extruded direction and ShadowVec1 the perpendicular.
- **Types:** ShadowMoby (DL's name for the list entry, RaC1's layout; unk08/unk0c are only passed
  to a stub) and ShadowGsRegs (layout from the init stores). g_MobyShadowList stays `int[]`
  because loaders.cpp uses the same buffer as a short table; mobyfunc.cpp casts it.
- **Left raw / unknown:** `g_ShadowUnkA54f00`, `DAT_007319fc` (set to 0x10000 in
  shadow_init_gs_regs, like a section header word), FUN_00502e50 (called with 0 although declared
  void), and FUN_00502f98 / FUN_00502f74_RET_0 (GS register builders).
- **Scalar stand-in:** FastRSqrtInline is `1/sqrtf` (as in water.cpp); the binary uses frsqrte
  and three Newton steps.
- **Signature:** ShadowSetupVectors takes (Vec4 dir, float length). The Vec4 arrives in r3/r4,
  so it comes first.

## game/store.cpp (was sUnk.cpp)

All 8 functions are checked against the asm; 2 are empty stubs.

- **Invented names:** the file name (chosen to sort between space.cpp and tieproc.cpp in the
  link order; DL has nothing matching), g_BufferStore, g_BufferStorePool, g_StoreSectionWord,
  BufferStore, BufferStoreSlot, and RunCopy/CopyRequest (was FUN_005031bc: copies one
  {data, addr, size, mode} request with memcpy; its second argument is not read).
- **Function names kept as they were** (InitIndexedBuffers, AllocIndexedBuffer,
  WriteIndexedBuffer, GetIndexedBufferSize, ReadIndexedBuffer). They describe what the
  functions do.
- **Signatures from the asm:** AllocIndexedBuffer(data, copyQwc, qwc, flags) copies copyQwc
  qwords into a new buffer of qwc; Write/Read take (data, slot, offset, qwc). The raw callers in
  map.cpp and pause.cpp pass a fifth argument that is not read.
- **Not understood:** BufferStoreSlot.flags is stored but never read here, and BufferStore.unk08 is never
  touched.
- RunCopy also replaces FUN_005031bc in initonce.cpp (InitOnce_RunSysCallWait).

## game/global.cpp (was fUnk.cpp)

All 5 functions are checked against the asm. The file is named after Global_QuickMovieMalloc
(the binary's own string), which fits the link order between freeze.cpp and help.cpp.

- **Live code:** Global_QuickMovieMalloc and Global_QuickMovieFree (was ____ClearFlag_a1073c) are
  the allocator hooks boot.cpp gives Bink (FUN_005eae04, probably BinkSetMemory); they hand out
  g_NpcBuffer. The malloc always charges 32 bytes of alignment, even when the address is already
  aligned. That's what the code does.
- **Dead PS2 code:** nothing calls Global_InitGsRegs (was InitGsRegPresets_7a350) or
  Global_FreeTexBase (was ____FreeTexBase). Nothing reads the GS register tables, so they keep
  PS2-style names: g_GsFadeStripsNtsc/Pal, g_GsRegs6b0, g_GsRegsContext1/2, and
  reset_gs_regs_fixed (DL's name; its 304 bytes match DL's).
- **Calls that drop arguments:** FUN_00502e00..e40 and FUN_00502e50 are passed arguments in the
  asm, but are declared `(void)` and called without them. FUN_005084c0 is passed a second
  argument (2) that it doesn't read.
- **Invented names:** g_QuickMovieUsed, g_GlobalSectionWord and g_GlobalSectionWord2.

## game/map.cpp

All 78 functions are written out and checked against the asm. The file is the pause menu map:
loading the map file and reveal mask, the 5-slot map cache, revealing around Ratchet, zoom and pan,
drawing the map, and the per-level region checks.

- **Region callbacks (53 `Map_RegionVisible_*`).** Their table is at 0x726280 (OPD pointers at
  0x705cxx), but the code that reads it was not found. So the two signatures are inferred from the
  registers each one reads: `(int pixelU, int pixelV)` or `(float u, float v, float z, int pixelU,
  int pixelV)`. The functions keep their address as their name.
- **DrawMapFrame is written as scalar C.** SNC runs most of its setup in vector registers, but
  every vector holds one value splatted (vmulouh + vmsumshm is a 32-bit multiply, and so on). The
  C does the same arithmetic on ints and floats, so the asm will differ there. The functions before
  it (Map_LoadPlanetMap's disc, Map_UpdateZoomPan) keep intrinsics.
- **Icon boxes.** Pass 1 makes each icon's box from its spot back (up and left) by its size, not
  centred on it. That is what the asm does.
- **Invented names:**
  - The MapIcon fields frame, frameSub, labelX and labelY.
  - The `MAP_ICON_*` flags in map.cpp. MAP_ICON_SIZE_C (0x1000) is the same bit as mission.cpp's
    MAPICON_NEEDS_TARGET; both readings are used.
  - g_MapCellMarksOn/g_MapCellMarks (0xa204ec/0xa204f0: no writer found), g_MapIconSizes
    (0x7264cc), g_MapSourceDotRadius (0x7264e4) and the MapSourceDot entry of g_MapIconSource.
  - The types MapBounds, MapTransform, and the other `g_Map*` globals listed in global_types.tsv.
- **Left raw:** `DAT_00a207e8`, the texture bound to unit 0 for the reveal-mask pass (probably the
  mask's texture header), DAT_00a20824..840, g_MapUnkA204c0/c4/c8/d0, and the method 0x1714
  words. HUD helpers in hud.cpp got prototypes: Hud_DrawTexQuadF (10 args, tex and alpha last),
  Hud_DrawTexQuad_v2_Fixed, DrawFlatOverlay_Fixed and Hud_DrawTexQuadF_v4_Fixed.
- pause.cpp has 3 more errors since the map globals were typed.

## game/mobyproc.cpp

All 39 functions are written out and checked against the asm. The file covers per-moby processing:
- lights and the moby grid;
- the transform and bounding sphere after an update;
- the update chain;
- the animation pipeline (frame decompression, anim layers, manipulators, joint matrices);
- the skinned draw entries.

- **DL names used** (roles match):
  - SetMobyLights, SetMobyAmbientLights, GetMobyAmbientLights, GetMobyLightVector, GetMobyLightColor.
  - DistBetweenMobyBspheres, FreeMobyGridLists, AllocMobyGridLists, UpdateMobyGrids.
  - PostUpdateMobyBsphere, ProcessManipulators, ProcessAnimLayers.
  - AnimResolveMats (was MB_TransformJointBatch), AnimDecompInterp (was MB_BlendJointFrames).
  - BuildMobyUpdateChain (was FindMobysCloseToUpdate).
  - The comments name the DL equivalents of UpdateMobyTransform (PostUpdateMoby),
    GetBlenderAtPnt (CheckMobyLightBlenders) and SetMobyLightFromBlender (SetMobyLightCuboid). Their
    names were kept because other files use them.
  - DL's signatures differ: RaC1 passes the pose buffer explicitly, and AnimDecompInterp takes the
    two frames.
- **Invented names:**
  - Types: JointPose, AnimLayerJoint, JointKeys, UnusedScaleKeys, FrameScaleKey, FrameTransKey,
    MobyDrawEntry, MobyModel, MobyPacket.
  - Fields: AnimLayer.weight, MobySeq.frameLength, and MobyFrame's scaleKeys/transOffset/transKeys.
  - Globals: g_AnimPoses, g_AnimJointMats, g_MobyGridLists, MobyGridAlloc, g_TargetableMobys,
    g_SelectedJoints, g_BlenderSpheres.
  - Renamed function: FastQSTToMtx4 (was FastVecMtx4MultBatch4VMX: it builds a matrix from
    rotation, scale and translation).
- **Unused scale keys.** Scale keys with use >= 0 go to a separate scratch table:
  - AnimDecompInterp builds that list and never reads it.
  - MB_DrawEntries applies it, scaling each finished joint matrix (not passed to children).
- **Scale key linking quirks kept.** The from frame's links start as 1.0f, so the to frame only
  adds scale keys for joints the from frame already has.
- **Vector code.** MB_DrawEntries' joint-matrix and bind multiplies are written with intrinsics.
  The rest is scalar, including the scalar-in-vector setup.
- **MB_BuildDrawEntry:**
  - The depth pass gets the alpha-test enable twice and the colour pass none; this is in the asm.
  - FUN_004dfe70 and FUN_004e1b80 (shadow begin and end) also take the moby's position in v2. Their
    prototypes don't model that argument.
  - The FUN_005e8xxx calls are SNC's out-of-line inline helpers (gcm vertex array setup, vec and
    matrix copies). They got typed prototypes, so idol/mathfunc.cpp's raw bodies gained errors.
- **InterpolateAnimation** reads the previous frame's scale keys twice; the second pass probably
  meant the current frame. It bakes the pose into g_AnimBuffers (maybe DL's AnimCachePose).
- **Left raw:** DAT_00a34600 (bounding spheres for sequence 255, indexed by
  previousAnimationFrame), DAT_00a15f64 (+0x10 is the light direction), DAT_01111700 and
  FUN_004ed52c (the draw entry consumer).
- **Elsewhere:**
  - mobyfunc.cpp calls Moby_BuildJointMatrices with a NULL out, which would fault as written.
  - handle (0xa8) is incremented on every PostUpdateMobyBsphere, so "index << 16" is doubtful.

## SDK matching against SDK 4.00

The EBOOT's libraries carry `GCC 4.1.1 (SDK400, $Rev: 3538 $)`, so the match was rerun against the
SDK 4.00 `target/ppu/lib`. `sdkmatch.py` now points at it; the SDK 4.20 results are kept in
`tools/sdk420_results/`. Exact matches went from 866 to 950, and the kept list from 440 to 490
(+49 libfios: fios_scheduler, fios_dearchive, fios_caching, ...; +1 libc: atexit).

- **libscream still matches only 5 functions**, even against the same SDK revision. The game's
  SCREAM is not the SDK's libscream build: the EBOOT has `common/989snd.cpp`, so Insomniac built
  their own copy from source, and with SNC rather than GCC. sdk/libscream/989snd.cpp (524
  functions) and sndhost.cpp therefore need decompiling like game code. They probably belong
  under game/.
- **loaders.cpp:** resolved. SDK 4.00's readFile is (attr, fh, buf, byteCount, offset = -1), so
  the gameplay file is read whole. loaders.cpp and boot.cpp now call fios through `<cell/fios.h>`.
- **Files a little worse:** idol/idol.cpp, sdk/fios.cpp, sdk/libc/atexit.cpp and
  fios_scheduler.cpp, where newly matched functions moved between files (sdk/ files are
  reference only).

## Linked SDK code out of the tree

The 119 SDK objects the game links are no longer generated (sdklink.py, run by generate.py).
Code uses the SDK 4.00 headers instead; the checker now compiles against SDK 4.00, plus
ppu_intrinsics.h and vec_types_gcc.h copied from 4.20 into cell/extra_include/. No game/ or idol/
file's error count changed.

- **sdk/linked.h** holds what is still used but not declared by an SDK header: SDK-internal
  types and globals that Ghidra exported, plus 106 prototypes. These are mostly libfios C++
  methods under their mangled names, the libc/crt internals (`__finalize_libc`, `_Tlsalloc`, ...)
  and libgcm_cmd's `cellGcmSetWriteCommandLabel`. As files get cleaned, fios calls should become
  real `cell::fios::scheduler` calls through `<cell/fios.h>`, and linked.h should shrink.
- **SDK object size cap.** partition.py now never puts more functions in an SDK object file than
  the library object really has (sdk_objfuncs.json, from nm). Before, up to 3 trailing functions
  of the next, unmatched object were swept in. Those now land in new unknown files
  (sdk/aUnk, bUnk, fUnk4-7, xUnk6-11, ...). libscream is exempt (see above).
- **sdk/xUnk5.cpp is pinned in overrides.tsv** (it has hand-cleaned collproc helpers); the cap
  renumbered the other unknown sdk files.
- **Callers use SDK names.** Calls to SDK-matched functions were still written with Ghidra's
  `FUN_xxxxxxxx` names in many places (374 references). generate.py now renames those to the
  library symbol everywhere, so they resolve to the SDK's declarations and the linked code.
- **fios through the real API in cleaned files.** boot.cpp (FIOSInit, `new ps3media`, `new dearchiver`,
  createSchedulerForMedia, openFile) and loaders.cpp (openFile, getFileSize, readFile, closeFile)
  now use `cell::fios` classes from `<cell/fios.h>` instead of mangled names. Raw files still use
  the mangled names declared in sdk/linked.h.
  - In boot.cpp the asm calls ps3media's operator new once, before the branch, and the constructor
    in each branch. The C++ written here has a `new` in each branch.
  - The psarc decompressor's constructor (FUN_005e6af0) and allocator (FUN_005e39dc) are not
    matched yet.
