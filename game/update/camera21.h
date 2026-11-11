#pragma once
// game/update/camera21.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071dbe0; /* 0x71dbe0 */
extern undefined4 DAT_0071dc04; /* 0x71dc04 */
extern undefined4 DAT_0071dc08; /* 0x71dc08 */
extern undefined4 DAT_0071dc0c; /* 0x71dc0c */
extern undefined4 DAT_0071dc10; /* 0x71dc10 */
extern undefined4 DAT_0071dc14; /* 0x71dc14 */
extern undefined4 DAT_0071dc18; /* 0x71dc18 */
extern undefined4 DAT_0071dc1c; /* 0x71dc1c */
extern undefined4 DAT_0071dc20; /* 0x71dc20 */
extern undefined4 DAT_0071dc24; /* 0x71dc24 */
extern undefined4 DAT_0071dc28; /* 0x71dc28 */
extern undefined4 DAT_0071dc2c; /* 0x71dc2c */
extern undefined4 DAT_0071dc34; /* no defined data */
extern undefined4 DAT_0071dc38; /* no defined data */
extern undefined4 DAT_0071dc3c; /* no defined data */
extern undefined4 DAT_0071dc40; /* no defined data */
extern undefined4 DAT_0071dc44; /* no defined data */
extern undefined4 DAT_0071dc48; /* no defined data */
extern undefined4 DAT_0071dc4c; /* no defined data */
extern undefined4 DAT_0071dc50; /* no defined data */
extern undefined4 DAT_0071dc54; /* no defined data */
extern undefined4 DAT_0071dc58; /* no defined data */
extern undefined4 DAT_0071dc5c; /* no defined data */
extern undefined4 DAT_0071dc60; /* 0x71dc60 */
extern undefined4 DAT_0071dc64; /* no defined data */
extern undefined4 DAT_0071dc68; /* no defined data */
extern undefined4 DAT_0071dc6c; /* no defined data */
extern undefined4 DAT_0071dc70; /* no defined data */
extern undefined4 DAT_0071dc74; /* no defined data */
extern undefined4 DAT_0071dc78; /* no defined data */
extern undefined4 DAT_0071e414; /* 0x71e414 */
extern undefined4 DAT_0071e418; /* 0x71e418 */
extern undefined4 DAT_0092e494; /* 0x92e494 */
extern undefined4 DAT_0092f430; /* 0x92f430 */
extern undefined4 DAT_0092f434; /* 0x92f434 */
extern undefined4 DAT_009303d4; /* 0x9303d4 */
extern undefined4 DAT_00931374; /* 0x931374 */
extern undefined4 DAT_00931378; /* 0x931378 */
extern undefined4 DAT_0093137c; /* 0x93137c */
extern undefined4 DAT_00931380; /* 0x931380 */
extern undefined4 DAT_00931384; /* 0x931384 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void InitCamera_21(UpdateCam *pCam);
void UpdateCamera_21(UpdateCam *pCam);
int ActivateCamera_21(UpdateCam *pCam,UpdateCam *pCurr);
void ExitCamera_21(UpdateCam *pCam);
