#pragma once
// game/partproc.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0011eec0; /* 0x11eec0 */
extern undefined4 DAT_00729624; /* 0x729624 */
extern undefined4 DAT_00729648; /* 0x729648 */
extern undefined4 DAT_00735570; /* no defined data */
extern undefined1 DAT_00a52000; /* 0xa52000 */
extern undefined4 DAT_00a52b40; /* 0xa52b40 */
extern undefined4 DAT_00a52b44; /* 0xa52b44 */
extern undefined4 DAT_00a52b48; /* 0xa52b48 */
extern undefined4 DAT_00a52b4c; /* 0xa52b4c */
extern undefined4 DAT_00a52b50; /* 0xa52b50 */
extern undefined4 DAT_00a52b54; /* 0xa52b54 */
extern undefined4 DAT_00a52b58; /* 0xa52b58 */
extern undefined4 DAT_00a52b5c; /* 0xa52b5c */
extern undefined4 DAT_00a52b60; /* 0xa52b60 */
extern undefined4 DAT_00a52b64; /* 0xa52b64 */
extern undefined4 DAT_00a52b68; /* 0xa52b68 */
extern undefined4 DAT_00a52b6c; /* 0xa52b6c */
extern undefined4 DAT_00a52b70; /* 0xa52b70 */
extern undefined4 DAT_00a52b74; /* 0xa52b74 */
extern undefined4 DAT_00a52b78; /* 0xa52b78 */
extern undefined4 DAT_00a52b7c; /* 0xa52b7c */
extern undefined4 DAT_00a52b80; /* 0xa52b80 */
extern undefined4 DAT_00a52b84; /* 0xa52b84 */
extern undefined4 PartActiveCnt; /* 0xa51fcc */
extern undefined4 PartIndexNext; /* 0xa51fc4 */
extern undefined4 PartIndexTop; /* 0xa51fc8 */
extern void * PartInstances; /* 0xa51fc0 */
extern undefined4 _DAT_0011e860; /* direct read */
extern undefined4 _DAT_0011e880; /* direct read */
extern undefined4 _DAT_0011e890; /* direct read */

// ---- functions
void SECTION_HEADER_PARTPROC(void);
ulonglong UpdatePartsDebug(void);
PartInstance * CreatePartEx(int idx,int arg);
PartInstance * CreatePart(int idx);
void DeletePart(int idx);
int CountActiveParts(void);
void UpdateParts(void);
void UpdateParts_NotUsed(void);
void ____DrawParts_DepthPass(longlong param_1,int *param_2);
void DrawParts(void);
void UpdatePart_22(PartInstance *part);
