/* the arguments crt0 keeps for GetArgc/GetArgv */
struct CrtArgs {
    int argc;
    char **argv;
};
typedef void (*PtrFunc)(void);   /* a constructor/destructor list entry (crtstuff) */
