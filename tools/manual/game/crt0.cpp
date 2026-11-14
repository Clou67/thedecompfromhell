// game/crt0.cpp -- the C runtime start-up: entry point, exit, and GCC's constructor/destructor glue
// STATUS: CLEAN (checked against the asm; local names are mine)
// 11 functions, 0x14b58-0x14fc8
//
// SDK code (Sony's crt0 plus GCC's crtstuff: __do_global_dtors_aux, frame_dummy,
// __do_global_ctors_aux), linked at the start of the game's text. entry() is where lv2 starts the
// process; it sets up TLS, argv/envp and libc, then calls boot() (the game's main).
#include "rc1.h"

#define TEXT_START 0x10000
#define TEXT_END   0x650864

/* lv2 passes argv/envp as arrays of 64-bit pointers; make them 32-bit in place */
static inline void NarrowPointers(u32 *array, u64 count)
{
    u32 *src = array + 1;
    u32 *dst = array;

    for (u64 i = 0; i <= count; i++) {
        *dst++ = *src;
        src += 2;
    }
}

// 0x0014b58 (0x24 bytes)
/* the ELF entry: crt0's entry, then the value at TOC - 0x8000 */
u32 _start(u64 argc, u32 *argv, u32 *envp, u64 envc, u64 tls0, u32 tls1, u32 tls2, u32 tls3)
{
    u8 *toc = (u8 *)PTR_TOC_BASE_0070379c;

    entry(argc, argv, envp, envc, tls0, tls1, tls2, tls3);     /* the loader's registers pass through */
    return **(u32 **)(toc - 0x8000);
}

// 0x0014b7c (0x10 bytes)
int GetArgc(void)
{
    return g_CrtArgs.argc;
}

// 0x0014b8c (0xc bytes)
char **GetArgv(void)
{
    return g_CrtArgs.argv;
}

// 0x0014b98 (0x28 bytes)
void idol::ExitToSystem(void)
{
    sys_prx_exitspawn_with_level(0);
}

// 0x0014bc0 (0x4c bytes)
void _libc_cleanup(void)
{
    _close_all_FILE();
    FUN_005d000c();
    _Clearlocks();
    FUN_005d0488();
    FUN_005d5868();
}

// 0x0014c0c (0x38 bytes)
/* registered with _sys_process_atexitspawn */
void crt0_exit(void)
{
    idol::ExitToSystem();
    __call_functions_registered_with_atexit();
    CallGlobalDtors();

    _libc_cleanup();
}

// 0x0014c44 (0x38 bytes)
void _exit(int status)
{
    _libc_cleanup();
    sys_process_exit(status);
}

// 0x0014c7c (0x1d4 bytes)
void entry(u64 argc, u32 *argv, u32 *envp, u64 envc, u64 tls0, u32 tls1, u32 tls2, u32 tls3)
{
    register u32 r12 __asm__("r12");

    g_EntryR12 = r12;
    sys_initialize_tls(tls0, tls1, tls2, tls3);

    NarrowPointers(argv, argc);

    g_CrtArgs.argc = (int)argc;
    g_CrtArgs.argv = (char **)argv;

    NarrowPointers(envp, envc);

    /* libc */
    FUN_005d588c();
    FUN_005d05b8(&g_CrtLibInit0, &g_CrtLibInit1);
    _Initlocks();
    _fs_initialize();

    g_ProcessStartTime = sys_time_get_system_time(TEXT_START, TEXT_END);

    _init();

    for (int i = 0; i < 3; i++) {
        if (g_PrxLibraries[i] != 0)
            sys_prx_register_library(&g_PrxLibraries[i]);
    }

    _sys_process_atexitspawn(crt0_exit);
    _sys_process_at_Exitspawn(_libc_cleanup);

    exit(boot((int)argc, (char **)argv, (char **)envp));
}

// 0x0014e50 (0x9c bytes)
void __do_global_dtors_aux(void)
{
    if (__dtors_completed)
        return;

    while (*__dtors_next != 0) {
        PtrFunc dtor = *__dtors_next;

        __dtors_next++;
        dtor();
    }

    if (__deregister_frame_info != 0)
        __deregister_frame_info(0);             /* __EH_FRAME_BEGIN__, 0 in this build */

    __dtors_completed = 1;
}

// 0x0014eec (0x70 bytes)
void frame_dummy(void)
{
    if (__register_frame_info != 0)
        __register_frame_info(0, __frame_object);

    if (__JCR_LIST__[0] != 0 && DAT_0071a374 != 0)  /* _Jv_RegisterClasses, 0 in this build */
        ((void (*)(void *))DAT_0071a374)(__JCR_LIST__);
}

// 0x0014f5c (0x6c bytes)
/* run the constructors from the end of the list back to the -1 that starts it */
void __do_global_ctors_aux(void)
{
    PtrFunc *ctor = __CTOR_END__ - 1;

    while (*ctor != (PtrFunc)-1) {
        (*ctor)();
        ctor--;
    }
}
