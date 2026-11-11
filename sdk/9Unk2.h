#pragma once
// sdk/9Unk2.h
#include "types.h"

// ---- globals
extern pointer32 cellHttp_func_address_table[2]; /* 0x701958 */
extern pointer32 cellSsl_func_address_table[3]; /* 0x7019f8 */
extern pointer32 cellSysutilAvconfExt_func_address_table[1]; /* 0x701a50 */

// ---- functions
void cellHttpInit(void);
void cellHttpsInit(void);
void cellSslCertificateLoader(void);
void cellSslInit(void);
void cellVideoOutGetScreenSize(void);
void cellSslEnd(void);
