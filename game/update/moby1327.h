#pragma once
// game/update/moby1327.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0078e61c; /* 0x78e61c */
extern undefined4 DAT_0078e640; /* 0x78e640 */
extern undefined4 DAT_0078e644; /* 0x78e644 */
extern undefined2 DAT_0078f0b0; /* 0x78f0b0 */
extern undefined2 DAT_0078f0b2; /* 0x78f0b2 */
extern undefined4 DAT_0078f8d0; /* no defined data */
extern undefined4 DAT_0078f8d4; /* no defined data */
extern undefined2 DAT_00793410; /* 0x793410 */
extern undefined2 DAT_00793412; /* 0x793412 */
extern undefined4 DAT_00793a50; /* no defined data */
extern undefined4 DAT_00793a54; /* no defined data */
extern undefined2 DAT_00796b80; /* 0x796b80 */
extern undefined2 DAT_00796b82; /* 0x796b82 */
extern undefined2 DAT_0079a430; /* 0x79a430 */
extern undefined2 DAT_0079a432; /* 0x79a432 */
extern undefined2 DAT_0079acf0; /* 0x79acf0 */
extern undefined2 DAT_0079acf2; /* 0x79acf2 */
extern undefined4 DAT_0079b3f0; /* 0x79b3f0 */
extern undefined4 DAT_0079b3f4; /* 0x79b3f4 */
extern undefined4 DAT_0079b3f8; /* 0x79b3f8 */
extern undefined4 DAT_0079b3fc; /* 0x79b3fc */
extern undefined4 DAT_0079b400; /* 0x79b400 */
extern undefined4 DAT_0079b404; /* 0x79b404 */
extern undefined4 DAT_0079b408; /* 0x79b408 */
extern undefined4 DAT_0079b40c; /* 0x79b40c */
extern undefined4 DAT_0079b410; /* 0x79b410 */
extern undefined4 DAT_0079b414; /* 0x79b414 */
extern undefined4 DAT_0079b418; /* 0x79b418 */
extern undefined4 DAT_00fa2f04; /* 0xfa2f04 */
extern undefined4 DAT_00fa2f08; /* 0xfa2f08 */
extern undefined4 DAT_00fa2f0c; /* 0xfa2f0c */
extern undefined4 DAT_00fa2f10; /* 0xfa2f10 */
extern pointer32 PTR_M1327_0024ac08_00709e58; /* 0x709e58 */

// ---- functions
void M1327_0024ab14(void);
void UpdateMoby_1327(MobyInstance *moby);
void M1327_0024ac08(void);
void M1327_0024ae24(int param_1);
void M133_0024b2e8 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void M133_0024b718(int param_1,float *param_2);
