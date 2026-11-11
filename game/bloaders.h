#pragma once
// game/bloaders.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071e938; /* 0x71e938 */
extern undefined8 DAT_0071e960; /* 0x71e960 */
extern undefined4 DAT_0071e9bc; /* 0x71e9bc */
extern undefined4 DAT_009313a0; /* no defined data */
extern undefined4 DAT_009313a4; /* no defined data */
extern undefined4 DAT_009313a8; /* no defined data */
extern undefined4 DAT_009313b4; /* no defined data */
extern undefined4 DAT_009313b8; /* no defined data */
extern undefined4 DAT_009313bc; /* no defined data */
extern undefined4 DAT_009313c8; /* no defined data */
extern undefined4 DAT_009313cc; /* no defined data */
extern undefined4 DAT_009313d0; /* no defined data */
extern undefined4 DAT_009313d4; /* no defined data */
extern undefined4 DAT_009313d8; /* no defined data */
extern undefined4 DAT_009313dc; /* no defined data */
extern undefined4 DAT_009313e0; /* no defined data */
extern undefined4 DAT_009313e4; /* no defined data */
extern undefined4 DAT_009313e8; /* no defined data */
extern undefined4 DAT_009313ec; /* no defined data */
extern undefined4 DAT_009313f0; /* no defined data */
extern undefined4 DAT_009313f4; /* no defined data */
extern undefined4 DAT_009313f8; /* no defined data */
extern undefined4 DAT_009313fc; /* no defined data */
extern undefined4 DAT_00931400; /* no defined data */
extern undefined4 DAT_00931404; /* no defined data */
extern undefined8 DAT_00931408; /* 0x931408 */
extern undefined4 DAT_00931410; /* no defined data */
extern undefined4 DAT_00931418; /* no defined data */
extern undefined4 DAT_009513a0; /* 0x9513a0 */
extern undefined4 DAT_00a2c5c0; /* no defined data */
extern undefined8 DebugFontTex0; /* 0x967460 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void GsTex_Init(void);
void GsTex_ResetAll(void);
int GsTex_Register(int param_1);
void GsTex_BuildUploadPacket (undefined1 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, ulonglong param_5,longlong param_6,uint param_7);
void GsTex_Upload(longlong param_1);
void GsTex_Bind(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4, int param_5,undefined8 param_6);
void GsTex_BindWrapper(void);
void GsTex_StaticInit(void);
undefined8 ____ReturnTrue_GameStart(void);
void LoadPifAsPSMT8H(int pPif,undefined8 *gsRegs,int tex_loc,int pal_loc);
void LoadDebugFont(void);
void UnloadSoundBanks(void);
