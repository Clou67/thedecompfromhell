#pragma once
// game/help.h
#include "types.h"
#include "game/mobyutil.h"

// ---- types
struct FontWindow { /* DL struct FontWindow; verified by SetFontWindow 0x6ac90 */
    short win_top;
    short win_bot;
    short win_left;
    short win_right;
    short text_x;
    short text_y;
    short max_width;
    short max_height;
    short line_spacing;
    short flags;
    short sub_pixel_x;
    short sub_pixel_y;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
};

// ---- globals
extern char CHAR_ARRAY_00a1000c[1184]; /* 0xa1000c */
extern undefined1 DAT_0071fb58; /* 0x71fb58 */
extern undefined1 DAT_0071fb59; /* 0x71fb59 */
extern undefined4 DAT_00720860; /* 0x720860 */
extern undefined4 DAT_0072088c; /* 0x72088c */
extern undefined4 DAT_00720890; /* 0x720890 */
extern undefined4 DAT_00720894; /* 0x720894 */
extern undefined4 DAT_00720898; /* 0x720898 */
extern undefined4 DAT_0072089c; /* 0x72089c */
extern undefined4 DAT_007208a0; /* 0x7208a0 */
extern undefined4 DAT_007208b4; /* 0x7208b4 */
extern undefined4 DAT_007208b8; /* 0x7208b8 */
extern undefined4 DAT_007208c0; /* 0x7208c0 */
extern undefined1 DAT_00a104ad; /* 0xa104ad */
extern undefined4 Help; /* 0x7208b0 */
extern undefined4 HelpMsgs; /* 0xa1a800 */
extern int g_HelpCurFlag; /* 0x7208ac */
extern int g_HelpCurId; /* 0x7208a8 */
extern int g_HelpCurIndex; /* 0x7208a4 */
extern undefined2 g_HelpIdPairs; /* 0x7208cc */
extern undefined1 g_HelpLog; /* 0xa104ac */
extern int g_HelpLogCount; /* 0x71fb5c */
extern int g_HelpState; /* 0x720884 */
extern int g_HelpStateTimer; /* 0x720888 */
extern int g_HelpSuspended; /* 0x7208bc */
extern undefined4 g_PendingSpeech; /* 0x9636e4 */
extern int g_ScreenHeight; /* 0x966b04 */
extern char s_MESSAGE_DOES_NOT_EXIST_00720b94[23]; /* 0x720b94 */
extern undefined1 stack0xffffffd0[16]; /* stack slot, not a real global */

// ---- functions
void SECTION_HEADER_HELP(void);
void Help_Skip(void);
int Help_FindPairIndex(short id,int column,short *pOther);
void Help_AddToLog(short id);
int Help_QueueMessage(StringId id,int flag);
void Help_Kill(void);
int Help_QueueMessageForce(StringId id,int flag);
void Help_ClearUsedSinceDeath(void);
int Help_FindIndex(int id);
char * help_msg_string_by_index(StringId helpmsg);
void Help_Suspend(void);
void Help_Resume(void);
void Help_StartMessageBox(void);
void Help_Update(void);
void Help_DrawIconBox(void);
void Help_Draw(void);
short Help_GetPairedId(short id,int column);
