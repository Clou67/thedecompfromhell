#pragma once
// idol/tiefunc.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00903004; /* no defined data */
extern undefined4 DAT_00903008; /* no defined data */
extern undefined1 DAT_0159c369; /* 0x159c369 */
extern undefined1 DAT_0159c36a; /* 0x159c36a */
extern RenderingStep * DepthPass; /* 0x8fa414 */
extern RenderingStep * ForwardPass; /* 0x8fa41c */
extern undefined4 _DAT_0050c5c0; /* direct read */
extern undefined4 _DAT_0050c5d0; /* direct read */
extern undefined4 _DAT_0050d220; /* direct read */
extern undefined4 _DAT_0050d230; /* direct read */

// ---- functions
void DrawTie(int param_1,int *param_2);
void DrawTies(int param_1,int *param_2,longlong param_3);
