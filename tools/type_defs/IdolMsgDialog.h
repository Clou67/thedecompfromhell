/* Idol singleton (*g_pMsgDialog, 0x20 bytes, made by FUN_004eaddc) that owns the system message
   callback ("In messageCallback"); ticked once per frame from startLevel. Identification inferred. */
typedef struct IdolMsgDialog IdolMsgDialog;
typedef struct IdolMsgDialogFuncs {
    void *unk00, *unk04;
    void (*update)(IdolMsgDialog *self, float dt);   /* +0x08 */
} IdolMsgDialogFuncs;
struct IdolMsgDialog {
    IdolMsgDialogFuncs *funcs;   /* 0x00 */
    u8 busy;                     /* 0x04  cleared by the message callback */
    char _pad05[3];
    u32 unk08;
    u32 unk0c;
    void *callback;              /* 0x10  result callback, called with 0,1,3,4 */
    char _pad14[0x0c];
};
