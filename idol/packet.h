#pragma once
// idol/packet.h
#include "types.h"

// ---- functions
void Packet_Init(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void Packet_Init_2(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void Packet_Rewind(int param_1);
void Packet_Align16(int param_1);
void Packet_Align128(int param_1);
void Packet_MarkC(int param_1);
void Packet_Mark10(int param_1);
int Packet_Alloc8(int param_1);
int Packet_Alloc(int param_1,int param_2);
void Packet_WriteCode0c(int param_1);
void Packet_WriteCode02(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4, ulonglong param_5);
void Packet_WriteZero(int param_1);
void Packet_WriteCode08(int param_1,undefined4 param_2);
void Packet_WriteCode04Ref(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6,ulonglong param_7);
void Packet_WriteCode04Cnt(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode04(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode06(int param_1,undefined4 param_2);
ulonglong * Packet_CloseTagEnd(ulonglong *param_1,int param_2);
ulonglong * Packet_CloseTag(ulonglong *param_1,int param_2);
void Packet_WriteCode0aAlign(int param_1,ulonglong param_2,ulonglong param_3);
void Packet_SetHeaderWord(int param_1,ulonglong param_2,undefined4 param_3);
void Packet_CopyQwords(int param_1,int param_2,uint param_3);
void Packet_WriteCode04_2(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode04CntPair(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,ulonglong param_5);
void Packet_WriteCode04Cnt_2(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
undefined4 Packet_End(int param_1);
void Packet_Reset(undefined4 *param_1);
void ResetChannelRegs(int *param_1);
