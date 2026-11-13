# NPEA00385 (Ratchet & Clank 1, PS3) — functional decomp tree

Non-matching: the goal is C/C++ that does what the EBOOT does, laid out the way the original
source tree most likely was. Everything here is generated from the Ghidra project plus a few
hand-maintained tables, so fixes go into those tables (or Ghidra) and the tree is regenerated.

## Layout
- `game/` — Insomniac game code, in link order. `game/update/moby<oClass>.cpp`, `camera<n>.cpp`
  hold per-class update code: helpers first, `UpdateMoby_*` last. Shared update functions are
  named after their first oClass; every oClass registered in `MapVTables` is listed in a comment.
- `idol/` — code after the moby sea (Idol's PS3 port layer: draw, fastfunc, fios glue, ...).
- `sdk/<lib>/<object>.cpp` — functions matched against the PS3 SDK static libraries
  (exact, or fuzzy inside a run of matches from the same library). Linked from the SDK, so they
  are reference only and do not need decompiling. `sdk/*.cpp` without a library folder are
  unmatched (Medius, older libflash, libc objects with no match, ...).
- Unknown objects are named `<first letter of the previous linked object>Unk.cpp`.
- Every module has its own header: the types it owns, its globals (`extern`) and its prototypes.
  Types go to the module named by their Ghidra category or name stem (`Tfrag` -> `tfragfunc.h`),
  otherwise to the module using them most; basics used everywhere (`Vec4`, `BSphere`,
  `MobyInstance`, ...) are in `types.h`, which also holds the Ghidra primitives, the Ghidra-ism
  helpers (`prelude.h`) and forward declarations. Every header compiles on its own.
- Each `.cpp` includes its own header plus the headers owning what it uses (types, globals,
  functions, types reached through members), and the SDK headers it needs (`<math.h>` for
  `sqrtf`, ...). Update files always include `mobyfunc.h` and `mobyutil.h`.
- Each `.cpp` has a `.s`: the original instructions of the same functions in the same order.
  The `.s` files and every `.cpp` not yet cleaned live under `raw/` (same paths), which is
  local-only and gitignored; the published tree holds the finished files and all headers. **The assembly is the source of truth**; Ghidra's C is a draft that drops things
  (arguments passed through in registers, stores, values kept across calls).
- `// inlined: FastAtan2 @0x..., FastRSqrt @0x...` above a function marks inlined helpers found
  from its instructions; replace that region with a call when cleaning (`idol/fastinline.h`).
- `// STATUS:` at the top of each file: `NOT STARTED` = raw Ghidra output,
  `CLEAN` = rewritten against the asm with real names, structs and enums (`game/lights.cpp`).

## Checking
`SDK=/path/to/cell ./check.sh game/lights.cpp ...` prints the error count per file. It compiles with clang against
the SDK's own headers using the PS3 PPU data layout (`--target=powerpc64-unknown-lv2 -D__LP32__`:
32-bit pointers and longs, big-endian), so struct offsets match the game. Set `SDK=` to your
`cell` folder if it is not in the default place.

## ABI notes (PS3 PPU, from the asm)
- 32-bit pointers and `long`, big-endian; arguments follow the 64-bit PowerPC ELF convention:
  a float argument still uses up a GPR slot (`f(Vec4 *p, float r, float i, u32 c)` -> r3, f1, f2, r6).
- `cntlzw x; srwi 5` / `rlwinm 27,31,31` is `x == 0`; `cntlzw; sldi 58; sradi 63` is an
  all-ones-if-zero mask for a branchless `?:` (generator writes `(x == 0)` / `ZERO_MASK(x)`).
- `((x>>31)>>1 ^ x) - (x>>31)` compares a float through its bits (generator writes `FLOAT_ORDER(x)`).

## Fixing things (tools/)
| what | where |
|---|---|
| move a function or namespace to another file | `overrides.tsv` |
| give an untyped global its real type | `global_types.tsv` (`DAT_00902ec8<TAB>WaterTile *NAME`) |
| correct a function's prototype (header + definition) | `prototypes.tsv` |
| hand-cleaned source | `manual/<path>.cpp` — copied over the generated file; its header is built from it |
| rename a global/function everywhere | `renames.tsv` |
| replace a Ghidra struct with a corrected one | `type_defs/<Name>.h` |
| put a type in a specific module's header | `type_owners.tsv` |
| anything else about names/types | fix it in Ghidra and regenerate |

Regenerate: `python3 tools/generate.py <outdir>`. Inputs are in `tools/data/`: the Ghidra decompile
dumps (`dump/`), the function list, `decls.json` (prototypes + typed globals), the exported types,
labels, the MapVTables oClass table and the SDK matches. Refresh those from Ghidra after you change
names/types there (the export scripts are `dump_decls.py`, `export_types.py`, `dump_all.sh`).
`check.sh` needs `SDK=/path/to/cell`. SDK matching: `SDK=... EBOOT=... python3 tools/sdkmatch.py`,
then `fuzzy.py`, then `sdkfinal.py`.

## Ghidra-isms handled by prelude.h
- `undefined1 x[N]` blobs (vector registers, stack pieces) become `GPiece<N>`; `x._O_S_` partial
  accessors become `x.piece<O,S>()`.
- `CONCAT*`, `SUB*`, `ZEXT*`, `ABS`, `SQRT`, `LZCOUNT` are defined; AltiVec pseudo-functions
  (`vectorAddFloatingPoint`, `loadVectorLeftIndexed`, ...) are declared only.
- `x = (x | x << 0x20 | x << 0x40 | x << 0x60) >> 0x60 & ...` (vspltw then read lane 0, i.e. `x = x`)
  lines are dropped; other splats are written `SPLAT(x)`.
