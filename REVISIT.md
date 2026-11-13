# Things to revisit

Shortcomings in work already committed: places where the source is a best guess, was not checked
against the asm all the way, or left loose ends. Newest first.

## game/draw.cpp

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
