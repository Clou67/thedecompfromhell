# Style guide for cleaned code

The aim is code that reads like the original source probably did: Insomniac's game code was C
written in `.cpp` files, Idol's PS3 layer may use C++ features. Examples: `game/lights.cpp`,
`game/pad.cpp`, `game/main.cpp`.

## Files

- Top of every cleaned file:
  ```
  // game/pad.cpp -- one line saying what the file is
  // STATUS: CLEAN (checked against the asm; local names are mine)
  // 7 functions, 0x11dfc8-0x11e448
  //
  // A short paragraph on how the system works, if it is not obvious.
  #include "rc1.h"      <- replaced by the real includes when generated
  ```
- Keep the generator's per-function address comment: `// 0x011dfe0 (0xc4 bytes)`.
- Functions stay in their original (address) order.

## Language

- C-style C++ for `game/`: free functions, structs, enums, `static inline` helpers, no classes,
  no references, no overloading, no templates, no `auto`, no STL. `bool` is fine.
- Function pointer tables are C structs of function pointers called with the object
  (`drv->funcs->update(drv, port, pad)`), not C++ classes.
- `idol/` keeps Idol's namespaces (`idol_draw::Blend`).
- Old-compiler friendly: the real toolchain is ppu-lv2 gcc 4.1. No `static_assert`; for layout
  checks use `typedef char Name_check[cond ? 1 : -1];`.

## Names

- Keep names already given in the Ghidra project. New names:
  - functions: `Module_Verb` / `VerbNoun` in the style of the surrounding code (`PadRingBitsOn`,
    `DetachPointLight`).
  - globals: `g_Name`; pointers to objects `g_pName`.
  - struct fields: `camelCase`; unknown fields `unkNNN` with the hex offset; padding `_padNNN`.
  - locals: descriptive names (`light`, `tie`, `frame`, `entry`), never `iVar3`/`param_1`. No one- or
    two-letter names (`m`, `e`, `pl`) except loop counters (`i`, `j`).
  - constants: `UPPER_CASE` `#define`s or enums instead of magic numbers.
- If a name is a guess, say so in a comment where it is declared ("guess", "inferred").

## Types

- Use the structs: `PointLightData[i].list`, never `*(int *)((int)&PointLightData + i*0x30 + 0xc)`.
- New or corrected structs go in `tools/type_defs/` with `/* 0xNN */` offset comments, a size
  check, and a comment saying where the instances live (`@0x964a40`).
- Enums for states and modes (`enum PointLightState`); `switch` over them.
- Prefer exact-width types for data (`u8`, `u16`, `u32`, `float`), `int` for counts/indices.

## Code

- Rewrite compiler output as source: idioms back to their meaning (see CONTRIBUTING.md), loops as
  `for`, unrolled or repeated blocks as one helper, temporaries removed.
- Code the binary inlines in several places becomes a `static inline` helper in the file, or in a
  shared header when it is used across files (`idol/fastinline.h`).
- Match the asm's behaviour exactly, including edge cases (`<` vs `<=`, signedness, a `printf` on an
  error path, an argument passed through in a register).
- Floats: write `0.8f`; keep the binary's constants (use the value it loads).
- Comments explain what the code is for and anything surprising from the asm, not what each line
  does. Keep them short.
- 4-space indent, braces on the same line for control flow, function braces on their own line.
- The body of an `if`/`for`/`while`, and each `case` body, goes on its own line, never after the
  condition (`if (!m)\n    return 0;`, not `if (!m) return 0;`).
- Separate the steps of a function with blank lines. A step is a group of lines doing one thing:
  a run of related declarations (`float midX/midY/midZ`), the calls that use them, a pointer
  advance. So: a blank line between each group of declarations that compute a different thing,
  before and after every `if`/loop block, between a run of assignments and a run of calls, and
  before a closing statement like `quad += 4;` or `return`. When in doubt, add the blank line.
  Example:
  ```
  float cornerX = x0 - normalX * 0.5f;
  float cornerY = y0 - normalY * 0.5f;

  SetCorner(&quad[1], cornerX, cornerY, cornerZ);
  SetCorner(&quad[0], cornerX + dirX, cornerY + dirY, cornerZ + dirZ);

  quad += 4;
  ```

## Vector (AltiVec) code

- Where the asm uses AltiVec (`vmaddfp`, `vperm`, `vrsqrtefp`, `vrefp`, `vcfsx`, ...), the source
  must emit the same instructions: do not replace it with scalar maths (`1.0f / sqrtf`, plain
  float loops), which rounds differently and does not match the asm.
- Write the vector work in small `static inline` helpers (in `idol/fastinline.h` when shared)
  so the calling code stays readable, e.g. `VecRSqrt`, `VecSinCos`, `Ps2ColorVec`.
- Inside the helpers use the intrinsics from `<altivec.h>` (`vec_madd`, `vec_perm`, `vec_splat`,
  `vec_rsqrte`, ...): they map one-to-one to the instructions and clang can check them. Use
  inline asm only for what has no intrinsic (e.g. `lvlx`/`lvrx`), still inside a helper.
- Keep the asm's Newton steps, constants and operation order.
