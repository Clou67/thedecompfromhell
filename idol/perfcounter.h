#pragma once
// idol/perfcounter.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0159b35c; /* 0x159b35c */
extern undefined4 DAT_0159b374; /* no defined data */
extern undefined4 DAT_0159b378; /* 0x159b378 */
extern undefined4 DAT_0159b37c; /* no defined data */
extern undefined4 DAT_0159b380; /* 0x159b380 */
extern undefined4 DAT_0159b384; /* no defined data */

// ---- functions
void InitPerfCounterPtrs(void);
void BumpPerfCounter(uint param_1,int *param_2);
void BumpPerfCounters(void);
