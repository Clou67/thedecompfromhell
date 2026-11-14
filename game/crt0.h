#pragma once
// game/crt0.h
#include "types.h"

// ---- types
/* the arguments crt0 keeps for GetArgc/GetArgv */
struct CrtArgs {
    int argc;
    char **argv;
};
typedef void (*PtrFunc)(void);   /* a constructor/destructor list entry (crtstuff) */

// ---- globals
extern undefined4 DAT_0071a374; /* 0x71a374 */
extern pointer32 PTR_TOC_BASE_0070379c; /* 0x70379c */
extern PtrFunc __CTOR_END__[1]; /* 0x700b98 */ /* type set in global_types.tsv */
extern void *__JCR_LIST__[1]; /* 0x700bc8 */ /* type set in global_types.tsv */
extern u8 __dtors_completed; /* 0x9270f4: crtstuff's completed.N */ /* type set in global_types.tsv */
extern PtrFunc *__dtors_next; /* 0x9044f0: crtstuff's p, walks __DTOR_LIST__ */ /* type set in global_types.tsv */
extern u8 __frame_object[24]; /* 0x9270f8: crtstuff's object for __register_frame_info */ /* type set in global_types.tsv */
extern CrtArgs g_CrtArgs; /* 0x9270e0: main's argc/argv (GetArgc/GetArgv) */ /* type set in global_types.tsv */
extern u32 g_CrtLibInit0; /* 0x16062e4: passed to FUN_005d05b8 */ /* type set in global_types.tsv */
extern u32 g_CrtLibInit1; /* 0x16062e8 */ /* type set in global_types.tsv */
extern u32 g_EntryR12; /* 0x9043f4: r12 at entry, as lv2 passes it */ /* type set in global_types.tsv */
extern u64 g_ProcessStartTime; /* 0x16062f0 */ /* type set in global_types.tsv */
extern int g_PrxLibraries[3]; /* 0x9270e8: non-zero: register that PRX library at start-up */ /* type set in global_types.tsv */

// ---- functions
u32 _start(u64 argc, u32 *argv, u32 *envp, u64 envc, u64 tls0, u32 tls1, u32 tls2, u32 tls3);
int GetArgc(void);
char **GetArgv(void);
namespace idol { void ExitToSystem(void); } 
void _libc_cleanup(void);
void crt0_exit(void);
void _exit(int status);
void entry(u64 argc, u32 *argv, u32 *envp, u64 envc, u64 tls0, u32 tls1, u32 tls2, u32 tls3);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
