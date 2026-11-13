# Working on the decomp

This is a functional (non-matching) decompilation of NPEA00385. Cleaned code has to do what the
EBOOT does; it does not have to produce the same bytes. The tree is generated, so most fixes are
data, not hand edits to generated files. See `STYLE.md` for how cleaned code should look.

## Ground rules

1. **The assembly is the source of truth.** Every `.cpp` has a `.s` beside it with the original
   instructions of the same functions in the same order. Ghidra's C is a first draft; it routinely
   drops arguments that pass through in registers, invents parameters, loses stores, and mangles
   compiler idioms. Check every cleaned function against its `.s`.
2. **Never edit a generated `.cpp` or `.h` in place.** Regenerating overwrites it. Put the change
   where the generator picks it up (table below) or in `tools/manual/`.
3. **Names and types are shared.** A fix to a global, a struct or a prototype belongs in the tables
   (or in Ghidra), so every file gets it, not only the one you are cleaning.

## Where a change goes

| change | where |
|---|---|
| clean a file by hand | copy it to `tools/manual/<path>.cpp`, rewrite it there; its header is built from it |
| rename a global/function everywhere | `tools/renames.tsv` (`old<TAB>new`; `new` may be an expression such as `g_Pad.downButtons`) |
| give a global its real type | `tools/global_types.tsv` (`name<TAB>C declaration with NAME`, comments allowed) |
| fix a prototype Ghidra got wrong | `tools/prototypes.tsv` (keep Ghidra's `param_N` names so the generated body still matches) |
| correct a struct, or add a new one | `tools/type_defs/<Name>.h` (replaces Ghidra's definition, or adds the type if Ghidra has none) |
| put a type or global in a specific header | `tools/type_owners.tsv` (`name<TAB>module`, e.g. `MobyInstance<TAB>game/mobyfunc`) |
| move a function to another file | `tools/overrides.tsv` |
| anything Ghidra could hold (names, types, signatures) | fixing it in Ghidra and re-exporting is just as good |

## Cleaning a file

1. Pick a file from `ERRORS.tsv` (smaller and self-contained first).
2. Read the `.s`. For each function work out:
   - **the real signature.** Which argument registers does it read? `tools/argregs.py NAME` lists
     them (path-aware, follows calls). On PS3 each argument takes the next GPR slot even when it is
     a float, so `f(Vec4 *p, float r, float i, u32 c)` uses r3, f1 (slot r4), f2 (slot r5), r6.
     Registers a caller sets (`li r8, 1`) are parameters even if the callee ignores them.
   - **the structs.** Repeated `base + i*stride + off` accesses are an array of structs; fixed
     offsets from one global are fields. Write the struct in `type_defs/` with offset comments and
     size checks (see `type_defs/PadState.h`).
   - **the names.** Check Deadlocked's debug symbols (DWARF struct dump and ELF symbol table, kept
     outside this repo) for the same struct, global or function: names like `HelpDef`, `HelpDatum`,
     `HelpLog`, `HelpLogPos` come from there. Layouts often differ from RaC1, so use a DL name only
     for a field or object with the same role, and say so in the comment.
   - **vector code.** `tools/vecsym.py` runs a stretch of a `.s` symbolically and prints what each
     store computes; that is how `ShadeVerts` was read.
   - **RSX command buffers.** `RenderingStep` starts like libgcm's `CellGcmContextData` (`command`
     is `current`). Draw code writes method headers `(count << 18) | method` plus values; write
     them with the SDK's `CELL_GCM_METHOD(CELL_GCM_NV4097_..., count)` (`<cell/gcm/gcm_macros.h>`,
     `<cell/gcm/gcm_enum.h>`). Repeated command sequences are inlined helpers (see `partproc.cpp`).
   - **the inlines.** `// inlined: FastAtan2 @0x...` marks known inline helpers; repeated blocks
     inside one function are usually an inline or a macro in the source (see `lights.cpp`).
3. Write `tools/manual/<path>.cpp` (start it with `#include "rc1.h"`; the generator replaces that
   line with the file's real includes).
4. Put names/types/prototypes it needs into the tables.
5. Regenerate and check:
   ```
   python3 tools/generate.py OUT
   SDK=/path/to/cell OUT/check.sh game/yourfile.cpp      # must print 0
   ```
   Also run the whole tree before committing; a rename or type change must not make other files
   worse (compare with `ERRORS.tsv`).
6. Set `// STATUS: CLEAN` and commit.

## Compiler idioms (what Ghidra shows -> what the source said)

| Ghidra | meaning |
|---|---|
| `(uint)LZCOUNT(x) >> 5`, `... ^ 1` | `x == 0`, `x != 0` (generator rewrites these) |
| `(LZCOUNT(x) << 0x3a) >> 0x3f` | all-ones-if-zero mask for a branchless `?:` -> `ZERO_MASK(x)`; usually a ternary in the source |
| `((x>>31)>>1 ^ x) - (x>>31)` | a float compared through its bits -> `FLOAT_ORDER(x)`; the source compared floats |
| `x = (x \| x<<0x20 \| ...) >> 0x60 & ...` | `vspltw` then lane 0: `x = x`; dropped by the generator |
| `ZERO_MASK(&local) & ...` around an out-pointer | an inlined `if (p) *p = ...` with a pointer known non-null |
| nested `<` / `>` ranges on one enum | a `switch` |
| `mulhw` magic + shifts, `/ 0x1e`, `% 0x1e` | plain division / modulo |
| `fsel` chains | `?:` / `min` / `max` |

## Checking and committing

- `check.sh` compiles with clang against the SDK headers on the PS3 PPU layout
  (`--target=powerpc64-unknown-lv2 -D__LP32__`: 32-bit pointers and longs, big-endian), so
  structure offsets match the game. It is a syntax/type check; nothing is linked or run.
- Commit one cleaned file (plus the table entries it needed) per commit.
- In the same commit, add the file's section to `REVISIT.md`. List everything that is not fully
  checked against the asm, guessed signatures and unused parameters, names you made up, symbols
  left as raw `DAT_`/`FUN_`/offsets, and other files whose error counts went up because of the
  change. A file with nothing to revisit still gets a one-line entry saying so.
