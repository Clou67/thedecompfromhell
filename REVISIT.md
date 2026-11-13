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
