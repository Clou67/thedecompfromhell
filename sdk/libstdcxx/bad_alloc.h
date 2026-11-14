#pragma once
// sdk/libstdcxx/bad_alloc.h
#include "types.h"

// ---- globals
extern pointer PTR_s_bad_allocation_0071c768; /* 0x71c768 */

// ---- functions
undefined * bad_alloc_what(void);
void bad_alloc_Throw(void);
void bad_alloc_DeletingDtor(undefined4 *param_1);
void bad_alloc_Dtor(undefined4 *param_1);
void CallGlobalDtors(void);
