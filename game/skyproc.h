#pragma once
// game/skyproc.h
#include "types.h"

// ---- types
typedef unsigned short    word;

struct EffectTexHeader { /* Pre-baked RSX texture registers; words 0-6 go to methods 0x1A00+unit*0x20 (OFFSET,FORMAT,ADDRESS,CONTROL0,CONTROL1,FILTER,IMAGE_RECT), word 7 to 0x1840+unit*4 (CONTROL3) */
    int offset;
    int format;
    int address;
    int control0;
    int control1;
    int filter;
    int imageRect;
    int control3;
    int unknown_20;
};

// ---- globals
extern undefined4 DAT_00731b48; /* 0x731b48 */

// ---- functions
void SECTION_HEADER_SKYPROC(void);
void SkySpriteProc(void);
int STUB_0015b55c(...);
int STUB_0015b564(...);
void STUB_0015b56c(...);
void STUB_0015b570(...);
