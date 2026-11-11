#pragma once
// game/update/moby655.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854a08; /* 0x854a08 */
extern undefined4 DAT_00854a30; /* 0x854a30 */
extern undefined4 DAT_00854a58; /* 0x854a58 */
extern undefined4 DAT_00854a5c; /* 0x854a5c */
extern undefined4 DAT_00854a68; /* 0x854a68 */
extern undefined4 DAT_00854a6c; /* 0x854a6c */
extern undefined4 DAT_00854a70; /* 0x854a70 */
extern undefined4 DAT_00854a74; /* 0x854a74 */
extern undefined4 DAT_00854a78; /* 0x854a78 */
extern undefined4 DAT_00854a7c; /* 0x854a7c */
extern undefined4 DAT_00854a80; /* 0x854a80 */
extern undefined4 DAT_00854a84; /* 0x854a84 */
extern undefined4 DAT_00854a88; /* 0x854a88 */
extern undefined4 DAT_00854a8c; /* 0x854a8c */
extern undefined4 DAT_00854aa0; /* 0x854aa0 */
extern undefined4 DAT_00854adc; /* 0x854adc */
extern undefined4 DAT_00854ae4; /* 0x854ae4 */
extern undefined4 DAT_010cbbf0; /* 0x10cbbf0 */
extern undefined4 DAT_010cbbf4; /* 0x10cbbf4 */
extern undefined4 DAT_010cbc00; /* 0x10cbc00 */
extern undefined4 DAT_010cbc04; /* 0x10cbc04 */
extern undefined4 DAT_010cbc08; /* 0x10cbc08 */
extern undefined4 DAT_010cbc0c; /* 0x10cbc0c */
extern undefined4 DAT_010cbc10; /* 0x10cbc10 */
extern undefined4 DAT_010cbd40; /* 0x10cbd40 */
extern undefined4 DAT_010cbd44; /* 0x10cbd44 */
extern undefined4 DAT_010cbd48; /* 0x10cbd48 */
extern undefined4 DAT_010cbd4c; /* 0x10cbd4c */
extern undefined4 DAT_010cbe80; /* no defined data */
extern undefined4 DAT_010cbe84; /* 0x10cbe84 */
extern undefined4 DAT_010cbee0; /* 0x10cbee0 */
extern undefined4 DAT_010cc010; /* 0x10cc010 */
extern undefined4 DAT_010cc014; /* 0x10cc014 */
extern undefined4 DAT_010cc064; /* 0x10cc064 */
extern undefined4 DAT_010cc068; /* 0x10cc068 */
extern undefined4 DAT_010cc06c; /* 0x10cc06c */
extern undefined4 DAT_010cc070; /* 0x10cc070 */
extern undefined4 DAT_010cc080; /* 0x10cc080 */
extern undefined4 DAT_010cc084; /* 0x10cc084 */
extern undefined4 DAT_010cc088; /* 0x10cc088 */
extern undefined4 DAT_010cc08c; /* 0x10cc08c */
extern undefined4 DAT_010cc090; /* 0x10cc090 */
extern undefined4 DAT_010cc094; /* 0x10cc094 */
extern undefined4 DAT_010cc098; /* 0x10cc098 */
extern undefined4 DAT_010cc09c; /* 0x10cc09c */
extern undefined4 DAT_010cc0a0; /* 0x10cc0a0 */
extern undefined2 DAT_010cc1c0; /* 0x10cc1c0 */
extern undefined2 DAT_010cc1c2; /* 0x10cc1c2 */
extern undefined2 DAT_010cc1c4; /* 0x10cc1c4 */
extern undefined2 DAT_010cc1c6; /* 0x10cc1c6 */
extern undefined2 DAT_010cc1c8; /* 0x10cc1c8 */
extern undefined2 DAT_010cc1d0; /* 0x10cc1d0 */
extern undefined2 DAT_010cc1d2; /* 0x10cc1d2 */
extern undefined2 DAT_010cc1d4; /* 0x10cc1d4 */
extern undefined2 DAT_010cc1d6; /* 0x10cc1d6 */
extern undefined2 DAT_010cc1d8; /* 0x10cc1d8 */
extern undefined2 DAT_010cc1da; /* 0x10cc1da */
extern undefined2 DAT_010cc1dc; /* 0x10cc1dc */
extern undefined2 DAT_010cc1de; /* 0x10cc1de */
extern undefined4 DAT_010cc1e0; /* 0x10cc1e0 */
extern undefined4 DAT_010cc1e4; /* 0x10cc1e4 */
extern pointer PTR_DAT_00854aac; /* 0x854aac */
extern pointer32 PTR_M656_00406458_0070de78; /* 0x70de78 */
extern pointer32 PTR_M656_004074c8_0070de90; /* 0x70de90 */
extern undefined4 _DAT_00404cb0; /* direct read */
extern undefined4 _DAT_00404cc0; /* direct read */
extern undefined4 _DAT_00404cd0; /* direct read */
extern undefined4 _DAT_00404cf0; /* direct read */
extern undefined4 _DAT_00404d00; /* direct read */

// ---- functions
void M655_00403594(void);
undefined8 M655_004035b8(void);
void M655_00403708(int param_1);
void M655_00404a10(int param_1);
void UpdateMoby_655(MobyInstance *moby);
