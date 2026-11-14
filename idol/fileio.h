#pragma once
// idol/fileio.h
#include "types.h"

// ---- functions
int LoadAssetFromFile(const char *param_1,void *param_2,int param_3);
int LoadFileBlocking(const char *param_1,u32 param_2,int param_3);
void FiosCloseAndDeleteOp(int param_1);
int GetFileSize(const char *param_1);
void WriteTgaFile(undefined8 param_1,undefined8 param_2,int param_3,int param_4);
