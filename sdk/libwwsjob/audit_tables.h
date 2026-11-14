#pragma once
// sdk/libwwsjob/audit_tables.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071a800; /* 0x71a800 */
extern undefined4 DAT_0071a808; /* 0x71a808 */
extern pointer PTR_DAT_0071a7fc; /* 0x71a7fc */
extern pointer PTR_DAT_0071a804; /* 0x71a804 */

// ---- functions
undefined * GetDefaultAuditFormats(void);
uint SpuAudit_BufferSize(void);
undefined * SpuAudit_Buffer(void);
uint SpuAudit_BufferSize_2(void);
void SpuAudit_PrintSeparator(void);
