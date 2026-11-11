#pragma once
// game/update/moby1408.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0079fa40; /* 0x79fa40 */
extern undefined4 DAT_007a1970; /* 0x7a1970 */
extern undefined4 DAT_007a1974; /* 0x7a1974 */
extern undefined4 DAT_007a1978; /* 0x7a1978 */
extern undefined4 DAT_007a197c; /* 0x7a197c */
extern undefined4 DAT_007a1980; /* 0x7a1980 */
extern undefined4 DAT_007a1984; /* 0x7a1984 */
extern undefined4 DAT_007a1988; /* 0x7a1988 */
extern pointer PTR_DAT_007a1928; /* 0x7a1928 */
extern pointer PTR_DAT_007a1934; /* 0x7a1934 */
extern pointer PTR_DAT_007a1940; /* 0x7a1940 */
extern pointer PTR_DAT_007a194c; /* 0x7a194c */
extern undefined * PTR_DAT_007a1958; /* 0x7a1958 */
extern pointer32 PTR_M1408_0026f400_0070a3e0; /* 0x70a3e0 */

// ---- functions
void M1408_0026f400(int param_1);
void UpdateMoby_1408(MobyInstance *moby);
