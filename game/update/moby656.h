#pragma once
// game/update/moby656.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854a34; /* 0x854a34 */
extern undefined4 DAT_00854a38; /* 0x854a38 */
extern undefined4 DAT_00854a3c; /* 0x854a3c */
extern undefined4 DAT_00854a40; /* 0x854a40 */
extern undefined4 DAT_00854a44; /* 0x854a44 */
extern undefined4 DAT_00854a48; /* 0x854a48 */
extern undefined4 DAT_00854a4c; /* 0x854a4c */
extern undefined4 DAT_00854a50; /* 0x854a50 */
extern undefined4 DAT_00854a54; /* 0x854a54 */
extern undefined4 DAT_00854a90; /* 0x854a90 */
extern undefined4 DAT_00854a98; /* 0x854a98 */
extern undefined4 DAT_00854aa4; /* 0x854aa4 */
extern undefined4 DAT_00854ab0; /* 0x854ab0 */
extern undefined4 DAT_00854ab4; /* 0x854ab4 */
extern undefined4 DAT_00854ab8; /* 0x854ab8 */
extern undefined4 DAT_00854abc; /* 0x854abc */
extern undefined4 DAT_00854ac0; /* 0x854ac0 */
extern undefined4 DAT_00854ac4; /* 0x854ac4 */
extern undefined4 DAT_00854ae8; /* 0x854ae8 */
extern undefined4 DAT_00854aec; /* 0x854aec */
extern undefined4 DAT_00854af0; /* 0x854af0 */
extern undefined4 DAT_00854af4; /* 0x854af4 */
extern undefined4 DAT_00854b00; /* 0x854b00 */
extern undefined4 DAT_00854b40; /* 0x854b40 */
extern undefined4 DAT_00854b44; /* 0x854b44 */
extern undefined4 DAT_00854b60; /* 0x854b60 */
extern undefined4 DAT_00854b68; /* 0x854b68 */
extern undefined4 DAT_00854b6c; /* 0x854b6c */
extern undefined4 DAT_00854bbc; /* 0x854bbc */
extern undefined4 DAT_010cc074; /* 0x10cc074 */
extern undefined4 DAT_010cc0d0; /* no defined data */
extern undefined4 DAT_010cc120; /* no defined data */
extern undefined4 DAT_010cc170; /* no defined data */
extern undefined2 DAT_010cc1ca; /* 0x10cc1ca */
extern undefined2 DAT_010cc1cc; /* 0x10cc1cc */
extern undefined2 DAT_010cc1ce; /* 0x10cc1ce */

// ---- functions
void M656_00406458(void);
void M656_00406790(int param_1);
void M656_00406cd8(void);
void M656_004074c8(undefined8 param_1);
void M656_00407698(void);
void UpdateMoby_656(MobyInstance *moby);
