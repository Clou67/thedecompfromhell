#pragma once
// idol/mUnk.h
#include "types.h"

// ---- types
/* Idol's save system state (idol::GetSaveData, 0x478 bytes, @*GameSavePtr). Only the fields the
   game code uses have real names; field0_0x0 and field3_0xc keep Ghidra's names because those
   names are shared with other structs and the raw idol::GetSaveData still uses them. */
typedef struct SaveDataInfo {
    undefined **field0_0x0;  /* 0x000  vtable */
    int loadResult;          /* 0x004  copied from result before the load callback */
    int callbackArg;         /* 0x008 */
    void *field3_0xc;        /* 0x00c  save callback (a function descriptor) */
    void *onLoad;            /* 0x010  load callback */
    u32 unk14;               /* 0x014 */
    u32 unk18;               /* 0x018 */
    int level;               /* 0x01c  shown in the save list */
    u8 unk20[0x10];          /* 0x020 */
    char title[0x400];       /* 0x030  the description (memcard_ConstructSaveString) */
    u8 unk430[0x20];         /* 0x430 */
    int result;              /* 0x450 */
    u32 unk454;              /* 0x454 */
    u32 unk458;              /* 0x458 */
    u8 unk45c;               /* 0x45c */
    u8 unk45d;               /* 0x45d */
    u8 _pad45e[2];
    u32 flags;               /* 0x460  bit 0: a game has been loaded */
    u8 _pad464[4];
    int state;               /* 0x468  SaveSysState */
    int dataSize;            /* 0x46c */
    u8 _pad470[4];
    char *dialogTitle;       /* 0x474 */
} SaveDataInfo;
typedef char SaveDataInfo_size_check[sizeof(SaveDataInfo) == 0x478 ? 1 : -1];

/* Idol's Bink movie player (0x60 bytes; the singleton is g_pBinkPlayer, built in place at
   0x927078 by the static constructors) */
typedef struct BinkPlayer {
    void *vtable;            /* 0x00 */
    u8 _pad04[4];
    void *bink;              /* 0x08 */
    u8 _pad0c[4];
    int state;               /* 0x10  BinkPlayer_GetState; > 1 once frames are coming */
    u8 _pad14[0x48];
    int unk5c;               /* 0x5c  -1: nothing to stop */
} BinkPlayer;
typedef char BinkPlayer_size_check[sizeof(BinkPlayer) == 0x60 ? 1 : -1];

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

// ---- globals
extern undefined4 DAT_00041830; /* 0x41830 */
extern undefined4 DAT_00041834; /* 0x41834 */
extern undefined4 DAT_0004183c; /* 0x4183c */
extern undefined4 DAT_00041840; /* 0x41840 */
extern undefined4 DAT_00041844; /* 0x41844 */
extern undefined4 DAT_00080a00; /* 0x80a00 */
extern undefined4 DAT_00081a00; /* 0x81a00 */
extern undefined4 DAT_00180208; /* 0x180208 */
extern undefined4 DAT_004804d0; /* 0x4804d0 */
extern undefined4 DAT_004e2d40; /* no defined data */
extern undefined4 DAT_00658e38; /* no defined data */
extern undefined4 DAT_00658e40; /* no defined data */
extern undefined4 DAT_00658e48; /* no defined data */
extern undefined4 DAT_00658f1c; /* no defined data */
extern undefined4 DAT_00659338; /* no defined data */
extern undefined4 DAT_0065aab0; /* no defined data */
extern undefined4 DAT_0065ab80; /* no defined data */
extern undefined4 DAT_0065ae20; /* no defined data */
extern undefined4 DAT_0065b0a8; /* no defined data */
extern undefined4 DAT_0065b0b0; /* no defined data */
extern undefined4 DAT_0065b0b8; /* no defined data */
extern undefined4 DAT_0065b0c0; /* no defined data */
extern undefined1 DAT_0065b13c; /* 0x65b13c */
extern undefined1 DAT_0065b13d; /* 0x65b13d */
extern undefined1 DAT_0065b1bc; /* 0x65b1bc */
extern undefined1 DAT_0065b1bd; /* 0x65b1bd */
extern undefined1 DAT_0065b23c; /* 0x65b23c */
extern undefined1 DAT_0065b23d; /* 0x65b23d */
extern undefined1 DAT_0065b2bc; /* 0x65b2bc */
extern undefined1 DAT_0065b2bd; /* 0x65b2bd */
extern undefined1 DAT_0065b33c; /* 0x65b33c */
extern undefined1 DAT_0065b33d; /* 0x65b33d */
extern undefined1 DAT_0065b3dc; /* 0x65b3dc */
extern undefined1 DAT_0065b3dd; /* 0x65b3dd */
extern undefined1 DAT_0065b47c; /* 0x65b47c */
extern undefined1 DAT_0065b47d; /* 0x65b47d */
extern undefined1 DAT_0065b51c; /* 0x65b51c */
extern undefined1 DAT_0065b51d; /* 0x65b51d */
extern undefined4 DAT_00737bf0; /* 0x737bf0 */
extern undefined4 DAT_00737d30; /* no defined data */
extern undefined4 DAT_00737d44; /* no defined data */
extern undefined4 DAT_00738138; /* no defined data */
extern undefined4 DAT_0073813c; /* no defined data */
extern undefined4 DAT_00800b80; /* no defined data */
extern undefined4 DAT_008f9330; /* 0x8f9330 */
extern undefined4 DAT_008f9334; /* 0x8f9334 */
extern undefined4 DAT_008f9384; /* 0x8f9384 */
extern undefined4 DAT_008f93f4; /* 0x8f93f4 */
extern undefined4 DAT_008f9418; /* 0x8f9418 */
extern undefined4 DAT_008fa1ac; /* no defined data */
extern undefined4 DAT_008fa3dc; /* 0x8fa3dc */
extern undefined4 DAT_008fa550; /* 0x8fa550 */
extern undefined4 DAT_008fa554; /* 0x8fa554 */
extern undefined4 DAT_008fa568; /* 0x8fa568 */
extern undefined4 DAT_008fa56c; /* no defined data */
extern undefined4 DAT_008fa5cc; /* no defined data */
extern undefined4 DAT_008fa5fc; /* no defined data */
extern undefined4 DAT_008fa620; /* 0x8fa620 */
extern undefined4 DAT_008fa628; /* 0x8fa628 */
extern undefined4 DAT_008fa63c; /* 0x8fa63c */
extern undefined4 DAT_008fa64c; /* 0x8fa64c */
extern undefined4 DAT_008fa6a4; /* 0x8fa6a4 */
extern undefined4 DAT_008fa6c8; /* no defined data */
extern undefined4 DAT_008fa6e8; /* no defined data */
extern undefined4 DAT_008fa708; /* no defined data */
extern undefined4 DAT_008fabb8; /* 0x8fabb8 */
extern undefined4 DAT_008fabbc; /* 0x8fabbc */
extern undefined4 DAT_008fabc4; /* 0x8fabc4 */
extern undefined4 DAT_008fabc8; /* 0x8fabc8 */
extern undefined4 DAT_008fabcc; /* 0x8fabcc */
extern char *DAT_008fabd0; /* 0x8fabd0: &Cheats[4] */ /* type set in global_types.tsv */
extern undefined4 DAT_008fabd4; /* 0x8fabd4 */
extern undefined4 DAT_008fabd8; /* 0x8fabd8 */
extern undefined4 DAT_008fd4a0; /* 0x8fd4a0 */
extern undefined4 DAT_008fd629; /* 0x8fd629 */
extern undefined4 DAT_008fd778; /* 0x8fd778 */
extern undefined4 DAT_008fd862; /* 0x8fd862 */
extern undefined4 DAT_008fd8a8; /* 0x8fd8a8 */
extern undefined4 DAT_008fd931; /* 0x8fd931 */
extern undefined4 DAT_008fda12; /* 0x8fda12 */
extern undefined4 DAT_008fda8a; /* 0x8fda8a */
extern undefined4 DAT_008fdbcc; /* 0x8fdbcc */
extern undefined4 DAT_008fdd0e; /* 0x8fdd0e */
extern undefined4 DAT_008fde2b; /* 0x8fde2b */
extern undefined4 DAT_008fdf48; /* 0x8fdf48 */
extern undefined4 DAT_008fe065; /* 0x8fe065 */
extern undefined4 DAT_008fe1a2; /* 0x8fe1a2 */
extern undefined4 DAT_008fe2bf; /* 0x8fe2bf */
extern undefined4 DAT_008fe3dc; /* 0x8fe3dc */
extern undefined4 DAT_008fe519; /* 0x8fe519 */
extern undefined4 DAT_008fe636; /* 0x8fe636 */
extern undefined4 DAT_008fe753; /* 0x8fe753 */
extern undefined4 DAT_008fe860; /* 0x8fe860 */
extern undefined4 DAT_008fe96d; /* 0x8fe96d */
extern undefined4 DAT_008fea6a; /* 0x8fea6a */
extern undefined4 DAT_008feb87; /* 0x8feb87 */
extern undefined4 DAT_008feca4; /* 0x8feca4 */
extern undefined4 DAT_008fedc1; /* 0x8fedc1 */
extern undefined4 DAT_008feebe; /* 0x8feebe */
extern undefined4 DAT_008fefdb; /* 0x8fefdb */
extern undefined4 DAT_008ff0f8; /* 0x8ff0f8 */
extern undefined4 DAT_008ff215; /* 0x8ff215 */
extern undefined4 DAT_008ff332; /* 0x8ff332 */
extern undefined4 DAT_008ff45f; /* 0x8ff45f */
extern undefined4 DAT_008ff519; /* 0x8ff519 */
extern undefined4 DAT_008ff5e3; /* 0x8ff5e3 */
extern undefined4 DAT_008ff6ad; /* 0x8ff6ad */
extern undefined4 DAT_008ff777; /* 0x8ff777 */
extern undefined4 DAT_008ff841; /* 0x8ff841 */
extern undefined4 DAT_008ff8ba; /* 0x8ff8ba */
extern undefined4 DAT_008ffa1c; /* 0x8ffa1c */
extern undefined4 DAT_008ffaa6; /* 0x8ffaa6 */
extern undefined4 DAT_008ffc0d; /* 0x8ffc0d */
extern undefined4 DAT_008ffd1a; /* 0x8ffd1a */
extern undefined4 DAT_008ffdd4; /* 0x8ffdd4 */
extern undefined4 DAT_009000c1; /* 0x9000c1 */
extern undefined4 DAT_0090018b; /* 0x90018b */
extern undefined4 DAT_0090027a; /* 0x90027a */
extern undefined4 DAT_00900304; /* 0x900304 */
extern undefined4 DAT_0090034a; /* 0x90034a */
extern undefined4 DAT_009014f6; /* 0x9014f6 */
extern undefined4 DAT_0090154f; /* 0x90154f */
extern undefined4 DAT_0090165d; /* 0x90165d */
extern undefined4 DAT_0090171a; /* 0x90171a */
extern undefined4 DAT_009018e8; /* 0x9018e8 */
extern undefined4 DAT_009019a1; /* 0x9019a1 */
extern undefined4 DAT_00901b18; /* 0x901b18 */
extern undefined4 DAT_00901bb8; /* 0x901bb8 */
extern undefined4 DAT_00901d81; /* 0x901d81 */
extern undefined4 DAT_00901f80; /* 0x901f80 */
extern undefined4 DAT_00902013; /* 0x902013 */
extern undefined4 DAT_009020eb; /* 0x9020eb */
extern undefined4 DAT_00902319; /* 0x902319 */
extern undefined4 DAT_00902430; /* 0x902430 */
extern undefined4 DAT_00902621; /* 0x902621 */
extern undefined4 DAT_0090283f; /* 0x90283f */
extern undefined4 DAT_00902b46; /* 0x902b46 */
extern undefined4 DAT_00902d01; /* 0x902d01 */
extern undefined4 DAT_00902e8f; /* 0x902e8f */
extern undefined4 DAT_00905738; /* no defined data */
extern undefined4 DAT_00905900; /* no defined data */
extern undefined4 DAT_00907080; /* no defined data */
extern undefined4 DAT_0090a180; /* no defined data */
extern undefined4 DAT_0090b880; /* no defined data */
extern undefined4 DAT_009664ac; /* no defined data */
extern undefined4 DAT_00a15c18; /* 0xa15c18 */
extern undefined4 DAT_00e58c10; /* no defined data */
extern undefined4 DAT_00e59410; /* no defined data */
extern undefined4 DAT_01012000; /* no defined data */
extern undefined4 DAT_010ee118; /* 0x10ee118 */
extern undefined4 DAT_010ee11c; /* 0x10ee11c */
extern undefined4 DAT_010ee120; /* 0x10ee120 */
extern undefined4 DAT_010ee124; /* 0x10ee124 */
extern undefined4 DAT_010ee128; /* 0x10ee128 */
extern undefined4 DAT_010ee12c; /* 0x10ee12c */
extern undefined4 DAT_010ee130; /* 0x10ee130 */
extern undefined4 DAT_010ee134; /* 0x10ee134 */
extern undefined4 DAT_010ee138; /* 0x10ee138 */
extern undefined4 DAT_010ee13c; /* 0x10ee13c */
extern undefined4 DAT_010ee140; /* 0x10ee140 */
extern undefined4 DAT_010ee144; /* 0x10ee144 */
extern undefined4 DAT_010ee148; /* 0x10ee148 */
extern undefined4 DAT_010ee14c; /* 0x10ee14c */
extern undefined4 DAT_010ee150; /* 0x10ee150 */
extern undefined4 DAT_010ee154; /* 0x10ee154 */
extern undefined4 DAT_010ee158; /* 0x10ee158 */
extern undefined4 DAT_010ee15c; /* 0x10ee15c */
extern undefined4 DAT_010ee1c0; /* 0x10ee1c0 */
extern undefined4 DAT_010ee1e4; /* 0x10ee1e4 */
extern undefined4 DAT_010ee208; /* 0x10ee208 */
extern undefined1 DAT_010ee328; /* 0x10ee328 */
extern undefined4 DAT_010ee330; /* no defined data */
extern undefined4 DAT_010ee630; /* 0x10ee630 */
extern undefined4 DAT_010ee634; /* 0x10ee634 */
extern undefined4 DAT_010ee638; /* 0x10ee638 */
extern undefined4 DAT_010ee63c; /* 0x10ee63c */
extern undefined4 DAT_010ee640; /* 0x10ee640 */
extern undefined4 DAT_010ee644; /* 0x10ee644 */
extern undefined4 DAT_010ee648; /* 0x10ee648 */
extern undefined4 DAT_010ee64c; /* 0x10ee64c */
extern undefined4 DAT_010ee650; /* 0x10ee650 */
extern undefined4 DAT_010ee654; /* 0x10ee654 */
extern undefined4 DAT_010ee658; /* 0x10ee658 */
extern undefined4 DAT_010ee65c; /* 0x10ee65c */
extern undefined4 DAT_010ee660; /* 0x10ee660 */
extern undefined4 DAT_010ee664; /* 0x10ee664 */
extern undefined4 DAT_010ee668; /* 0x10ee668 */
extern undefined4 DAT_010ee66c; /* 0x10ee66c */
extern undefined4 DAT_010ee670; /* 0x10ee670 */
extern undefined4 DAT_010eeb08; /* no defined data */
extern undefined4 DAT_010eef28; /* no defined data */
extern undefined4 DAT_010ef438; /* 0x10ef438 */
extern undefined4 DAT_010ef43c; /* 0x10ef43c */
extern undefined4 DAT_010ef440; /* 0x10ef440 */
extern undefined4 DAT_010ef444; /* 0x10ef444 */
extern undefined4 DAT_010ef448; /* 0x10ef448 */
extern undefined4 DAT_010ef44c; /* 0x10ef44c */
extern undefined4 DAT_010ef450; /* 0x10ef450 */
extern undefined4 DAT_010ef454; /* 0x10ef454 */
extern undefined4 DAT_010ef458; /* 0x10ef458 */
extern undefined4 DAT_010ef45c; /* 0x10ef45c */
extern undefined4 DAT_010ef460; /* 0x10ef460 */
extern undefined4 DAT_010ef464; /* 0x10ef464 */
extern undefined4 DAT_010ef468; /* 0x10ef468 */
extern undefined4 DAT_010ef46c; /* 0x10ef46c */
extern undefined4 DAT_010ef470; /* 0x10ef470 */
extern undefined4 DAT_010ef474; /* 0x10ef474 */
extern undefined4 DAT_010ef478; /* 0x10ef478 */
extern undefined4 DAT_010ef47c; /* 0x10ef47c */
extern undefined4 DAT_010ef480; /* 0x10ef480 */
extern undefined4 DAT_010ef484; /* 0x10ef484 */
extern undefined4 DAT_010ef488; /* 0x10ef488 */
extern undefined4 DAT_010ef48c; /* 0x10ef48c */
extern undefined4 DAT_010ef490; /* 0x10ef490 */
extern undefined4 DAT_010ef494; /* 0x10ef494 */
extern undefined4 DAT_010ef498; /* 0x10ef498 */
extern undefined4 DAT_010ef49c; /* 0x10ef49c */
extern undefined4 DAT_010ef4a0; /* 0x10ef4a0 */
extern undefined4 DAT_010ef4a4; /* 0x10ef4a4 */
extern undefined4 DAT_010ef4a8; /* 0x10ef4a8 */
extern undefined4 DAT_010ef4ac; /* 0x10ef4ac */
extern undefined4 DAT_010ef4b0; /* 0x10ef4b0 */
extern undefined4 DAT_010ef4b4; /* 0x10ef4b4 */
extern undefined4 DAT_010ef4b8; /* 0x10ef4b8 */
extern undefined4 DAT_010ef4bc; /* 0x10ef4bc */
extern undefined4 DAT_010ef4c0; /* 0x10ef4c0 */
extern undefined4 DAT_010ef4c4; /* 0x10ef4c4 */
extern undefined4 DAT_010ef4c8; /* 0x10ef4c8 */
extern undefined4 DAT_010ef4cc; /* 0x10ef4cc */
extern undefined4 DAT_010ef4d0; /* 0x10ef4d0 */
extern undefined4 DAT_010ef4d4; /* 0x10ef4d4 */
extern undefined4 DAT_010ef4d8; /* 0x10ef4d8 */
extern undefined4 DAT_010ef4dc; /* 0x10ef4dc */
extern undefined4 DAT_010ef4e0; /* 0x10ef4e0 */
extern undefined4 DAT_010ef4e4; /* 0x10ef4e4 */
extern undefined4 DAT_010ef4e8; /* 0x10ef4e8 */
extern undefined4 DAT_010ef4ec; /* 0x10ef4ec */
extern undefined4 DAT_010ef4f0; /* 0x10ef4f0 */
extern undefined4 DAT_010ef4f4; /* 0x10ef4f4 */
extern undefined4 DAT_010ef4f8; /* 0x10ef4f8 */
extern undefined4 DAT_010ef4fc; /* 0x10ef4fc */
extern undefined8 DAT_010ef500; /* 0x10ef500 */
extern undefined4 DAT_010ef508; /* 0x10ef508 */
extern undefined4 DAT_010ef510; /* 0x10ef510 */
extern undefined4 DAT_010ef520; /* 0x10ef520 */
extern undefined4 DAT_010ef528; /* 0x10ef528 */
extern undefined4 DAT_010ef52c; /* 0x10ef52c */
extern undefined4 DAT_010ef530; /* 0x10ef530 */
extern undefined4 DAT_01111580; /* no defined data */
extern undefined1 DAT_01111604; /* 0x1111604 */
extern undefined4 DAT_01111608; /* 0x1111608 */
extern undefined4 DAT_01111610; /* 0x1111610 */
extern undefined4 DAT_01111614; /* 0x1111614 */
extern undefined4 DAT_01111618; /* 0x1111618 */
extern undefined4 DAT_01111620; /* 0x1111620 */
extern undefined4 DAT_01111624; /* 0x1111624 */
extern undefined4 DAT_01111628; /* 0x1111628 */
extern undefined4 DAT_0111162c; /* 0x111162c */
extern undefined4 DAT_01111630; /* 0x1111630 */
extern undefined4 DAT_01111634; /* 0x1111634 */
extern undefined4 DAT_01111638; /* 0x1111638 */
extern undefined4 DAT_0111163c; /* 0x111163c */
extern undefined4 DAT_01111644; /* 0x1111644 */
extern undefined4 DAT_01111680; /* no defined data */
extern undefined4 DAT_01111688; /* no defined data */
extern undefined4 DAT_01111690; /* no defined data */
extern undefined4 DAT_01111698; /* no defined data */
extern undefined4 DAT_01591f20; /* 0x1591f20 */
extern undefined4 DAT_01591f24; /* 0x1591f24 */
extern undefined4 DAT_01591f28; /* 0x1591f28 */
extern undefined4 DAT_01591f2c; /* 0x1591f2c */
extern undefined4 DAT_01591f40; /* 0x1591f40 */
extern undefined1 DAT_01592380; /* 0x1592380 */
extern undefined1 DAT_01592381; /* 0x1592381 */
extern undefined1 DAT_01592382; /* 0x1592382 */
extern undefined1 DAT_01592383; /* 0x1592383 */
extern undefined1 DAT_01592384; /* 0x1592384 */
extern undefined1 DAT_01592400; /* 0x1592400 */
extern undefined4 DAT_01592408; /* no defined data */
extern undefined4 DAT_0159b38c; /* no defined data */
extern RenderingStep * DL_Pass; /* 0x8fa438 */
extern undefined4 GameSavePtr; /* 0x8fa640 */
extern RenderingStep * MobyDepth; /* 0x8fa42c */
extern RenderingStep * MobyPass; /* 0x8fa430 */
extern RenderingStep * OceanForwardPass; /* 0x8fa418 */
extern pointer32 PTR_AutoSaveGameData_00710038; /* 0x710038 */
extern pointer PTR_DAT_00659900; /* 0x659900 */
extern pointer PTR_DAT_0065996c; /* 0x65996c */
extern undefined * PTR_DAT_008fa400; /* 0x8fa400 */
extern pointer PTR_DAT_008fa448; /* 0x8fa448 */
extern pointer PTR_DAT_008fa488; /* 0x8fa488 */
extern pointer PTR_DAT_008fa624; /* 0x8fa624 */
extern pointer PTR_DAT_008fabb0; /* 0x8fabb0 */
extern pointer PTR_Elf64_Ehdr_008fa648; /* 0x8fa648 */
extern pointer32 PTR_FUN_0070fd60; /* 0x70fd60 */
extern pointer32 PTR_FUN_0070ff48; /* 0x70ff48 */
extern pointer32 PTR_FUN_00710068; /* 0x710068 */
extern pointer32 PTR_FUN_00710070; /* 0x710070 */
extern pointer32 PTR_FUN_00710088; /* 0x710088 */
extern pointer32 PTR_FUN_00710090; /* 0x710090 */
extern pointer32 PTR_FUN_007100b0; /* 0x7100b0 */
extern pointer32 PTR_FUN_00710138; /* 0x710138 */
extern pointer32 PTR_FUN_00710298; /* 0x710298 */
extern pointer32 PTR_LoadGameData_00710048; /* 0x710048 */
extern undefined * PTR_PTR_00661840; /* 0x661840 */
extern pointer PTR_PTR_006618d0; /* 0x6618d0 */
extern undefined * PTR_PTR_00661910; /* 0x661910 */
extern pointer32 PTR_SaveDataListCallback_00710058; /* 0x710058 */
extern pointer32 PTR_SaveDataStatusListCallback_00710060; /* 0x710060 */
extern pointer32 PTR_SaveGameData_00710030; /* 0x710030 */
extern pointer32 PTR_cb_data_status_load_00710078; /* 0x710078 */
extern pointer32 PTR_cb_file_operation_load_00710080; /* 0x710080 */
extern undefined * PTR_s__RC1_SAVEDATA_006599c8; /* 0x6599c8 */
extern pointer32 PTR_thr_SaveSystem_CheckExisting_00710050; /* 0x710050 */
extern RenderingStep * ShadowPass; /* 0x8fa428 */
extern undefined8 TexSamplerFlags; /* 0x10ee2e0 */
extern undefined4 _DAT_004df160; /* direct read */
extern undefined4 _DAT_004df170; /* direct read */
extern undefined4 _DAT_004df190; /* direct read */
extern undefined4 _DAT_004df1a0; /* direct read */
extern undefined4 _DAT_004df1b0; /* direct read */
extern undefined4 _DAT_004df490; /* direct read */
extern undefined4 _DAT_004df4a0; /* direct read */
extern undefined4 _DAT_004df4b0; /* direct read */
extern undefined4 _DAT_004df4c0; /* direct read */
extern undefined4 _DAT_004df4d0; /* direct read */
extern undefined4 _DAT_004df4e0; /* direct read */
extern undefined4 _DAT_004df4f0; /* direct read */
extern undefined4 _DAT_004df500; /* direct read */
extern undefined4 _DAT_004df510; /* direct read */
extern undefined4 _DAT_004df520; /* direct read */
extern undefined4 _DAT_004df530; /* direct read */
extern undefined4 _DAT_004df540; /* direct read */
extern undefined4 _DAT_004df550; /* direct read */
extern undefined4 _DAT_004df560; /* direct read */
extern undefined4 _DAT_004df570; /* direct read */
extern undefined4 _DAT_004df590; /* direct read */
extern undefined4 _DAT_004df5a0; /* direct read */
extern undefined4 _DAT_004df5e0; /* direct read */
extern undefined4 _DAT_004df5f0; /* direct read */
extern undefined4 _DAT_004dfc30; /* direct read */
extern undefined4 _DAT_004dfc40; /* direct read */
extern undefined4 _DAT_004dfc60; /* direct read */
extern undefined4 _DAT_004dfc70; /* direct read */
extern undefined4 _DAT_004dfc80; /* direct read */
extern undefined4 _DAT_004dfc90; /* direct read */
extern undefined4 _DAT_004dfca0; /* direct read */
extern undefined4 _DAT_004dfcb0; /* direct read */
extern undefined4 _DAT_004dfcd0; /* direct read */
extern undefined4 _DAT_004dfce0; /* direct read */
extern undefined4 _DAT_004dfcf0; /* direct read */
extern undefined4 _DAT_004dfd00; /* direct read */
extern undefined4 _DAT_004dfd10; /* direct read */
extern undefined4 _DAT_004dfd20; /* direct read */
extern undefined4 _DAT_004dfd30; /* direct read */
extern undefined4 _DAT_004dfd40; /* direct read */
extern undefined4 _DAT_004dfd50; /* direct read */
extern undefined4 _DAT_004dfd60; /* direct read */
extern undefined4 _DAT_004dfd70; /* direct read */
extern undefined4 _DAT_004dfd80; /* direct read */
extern undefined4 _DAT_004dfd90; /* direct read */
extern undefined4 _DAT_004dfda0; /* direct read */
extern undefined4 _DAT_004dfdb0; /* direct read */
extern undefined4 _DAT_004dfdc0; /* direct read */
extern undefined4 _DAT_004dfde0; /* direct read */
extern undefined4 _DAT_004dfdf0; /* direct read */
extern undefined4 _DAT_004dfe00; /* direct read */
extern undefined4 _DAT_004dfe10; /* direct read */
extern undefined4 _DAT_004dfe30; /* direct read */
extern undefined4 _DAT_004dfe40; /* direct read */
extern undefined4 _DAT_004dfe50; /* direct read */
extern undefined4 _DAT_004dfe60; /* direct read */
extern undefined4 _DAT_004e0c90; /* direct read */
extern undefined4 _DAT_004e0ca0; /* direct read */
extern undefined4 _DAT_004e0cb0; /* direct read */
extern undefined4 _DAT_004e0cc0; /* direct read */
extern undefined4 _DAT_004e0cd0; /* direct read */
extern undefined4 _DAT_004e0ce0; /* direct read */
extern undefined4 _DAT_004e0d00; /* direct read */
extern undefined4 _DAT_004e0d10; /* direct read */
extern undefined4 _DAT_004e0d20; /* direct read */
extern undefined4 _DAT_004e0d30; /* direct read */
extern undefined4 _DAT_004e0d40; /* direct read */
extern undefined4 _DAT_004e1a60; /* direct read */
extern undefined4 _DAT_004e1a70; /* direct read */
extern undefined4 _DAT_004e1a80; /* direct read */
extern undefined4 _DAT_004e1a90; /* direct read */
extern undefined4 _DAT_004e1aa0; /* direct read */
extern undefined4 _DAT_004e1ab0; /* direct read */
extern undefined4 _DAT_004e1ac0; /* direct read */
extern undefined4 _DAT_004e1ad0; /* direct read */
extern undefined4 _DAT_004e1ae0; /* direct read */
extern undefined4 _DAT_004e1af0; /* direct read */
extern undefined4 _DAT_004e1b00; /* direct read */
extern undefined4 _DAT_004e1b10; /* direct read */
extern undefined4 _DAT_004e1b20; /* direct read */
extern undefined4 _DAT_004e1b30; /* direct read */
extern undefined4 _DAT_004e1b40; /* direct read */
extern undefined4 _DAT_004e1b60; /* direct read */
extern undefined4 _DAT_004e1b70; /* direct read */
extern undefined4 _DAT_004e2840; /* direct read */
extern undefined4 _DAT_004e2850; /* direct read */
extern undefined4 _DAT_004e29f0; /* direct read */
extern undefined4 _DAT_004e2a00; /* direct read */
extern undefined4 _DAT_004e2a10; /* direct read */
extern undefined4 _DAT_004e2a30; /* direct read */
extern undefined4 _DAT_004e2a40; /* direct read */
extern undefined4 _DAT_004e2a50; /* direct read */
extern undefined4 _DAT_004e2d40; /* direct read */
extern undefined4 _DAT_004e2d50; /* direct read */
extern undefined4 _DAT_004e2d70; /* direct read */
extern undefined4 _DAT_004e2d80; /* direct read */
extern undefined4 _DAT_004e2d90; /* direct read */
extern undefined4 _DAT_004e2da0; /* direct read */
extern undefined4 _DAT_004e2db0; /* direct read */
extern undefined4 _DAT_004e2dc0; /* direct read */
extern undefined4 _DAT_004e2dd0; /* direct read */
extern undefined4 _DAT_011116a0; /* direct read */
extern undefined4 _DAT_011116b0; /* direct read */
extern undefined4 _DAT_011116c0; /* direct read */
extern u64 g_GsReg7; /* 0x10ee2e8: SetGSReg id 7 */ /* type set in global_types.tsv */
extern u64 g_GsReg8; /* 0x10ee310: SetGSReg id 8 */ /* type set in global_types.tsv */
extern u64 g_GsRegBlend; /* 0x10ee2f0: SetGSReg id 0x16, the blend mode (idol_draw::Blend) */ /* type set in global_types.tsv */
extern u64 g_GsRegTest; /* 0x10ee318: SetGSReg id 3, the alpha/depth test (idol_draw::PackCmd) */ /* type set in global_types.tsv */
extern u64 g_GsRegTex1; /* 0x10ee300: SetGSReg id 0x1a (SCE_GS_SET_TEX1) */ /* type set in global_types.tsv */
extern u32 g_GsRegTexHeader0; /* 0x10ee2f8: SetGSReg id 0x18, the effect texture header for unit 0 (address) */ /* type set in global_types.tsv */
extern u32 g_GsRegTexHeader1; /* 0x10ee2fc: SetGSReg id 0x19, the same for unit 1 */ /* type set in global_types.tsv */
extern u64 g_GsRegZbuf; /* 0x10ee308: SetGSReg id 0x21 (VU1_addGSregister of the z buffer) */ /* type set in global_types.tsv */
extern u8 g_PartNoShrink; /* 0x8fa54c: set: DrawParts does not shrink big particles */ /* type set in global_types.tsv */
extern void *g_pGame; /* 0x902ecc: Idol's game object (0x90d770) */ /* type set in global_types.tsv */
extern void * g_pHWSystem; /* 0x902ed0 */
extern IdolMsgDialog *g_pMsgDialog; /* 0x1111640 */ /* type set in global_types.tsv */
extern char *g_pSaveBuffer; /* 0x8fabb4 */ /* type set in global_types.tsv */

// ---- functions
namespace idol_draw { void DrawGalacticMapFrame(int param_1,int param_2,int param_3,int param_4); } 
void FUN_004d2e1c(void);
void UnlockPurchasableItem(void);
void FUN_004d3044(void);
void FUN_004d3198(void);
void Dialog_Advance(undefined8 param_1,int param_2,int param_3);
int FUN_004d3698(int param_1);
ulonglong FUN_004d3720(int param_1,int param_2);
undefined8 FUN_004d3870(int param_1,int param_2);
void FUN_004d407c(int param_1,undefined4 param_2);
void FUN_004d4118(void);
MobyInstance * FUN_004d4138(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5, undefined4 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9);
void FUN_004d4328(undefined8 param_1);
void FUN_004d4404(undefined8 param_1,int param_2);
void FUN_004d441c(byte *param_1,undefined4 *param_2);
bool FUN_004d44a0(undefined2 param_1,int param_2,undefined4 *param_3,int param_4,int param_5);
void FUN_004d453c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6, int *param_7);
undefined8 FUN_004d46cc(int param_1,undefined8 param_2,int *param_3);
void FUN_004d4b40(int param_1);
void FUN_004d4b94(undefined4 *param_1);
void FUN_004d4c88(undefined4 *param_1);
int BinkPlayer_Open(BinkPlayer *param_1,char *param_2,int param_3);
void FUN_004d525c(int param_1,undefined8 param_2,ulonglong param_3);
undefined4 FUN_004d5310(int param_1,undefined8 param_2,int param_3,ulonglong param_4);
int BinkPlayer_Start(BinkPlayer *param_1,char *param_2,int param_3,int param_4);
undefined4 FUN_004d551c(int param_1);
int BinkPlayer_GetState(BinkPlayer *param_1);
void FUN_004d5530(undefined8 param_1,undefined8 param_2);
undefined4 * FUN_004d5558(undefined8 param_1,int param_2);
void FUN_004d5594(undefined8 param_1,uint param_2);
void FUN_004d5880(undefined8 param_1);
void FUN_004d5934(undefined8 param_1);
int BinkPlayer_DrawFrame(BinkPlayer *param_1);
void BinkPlayer_Stop(BinkPlayer *param_1);
void BinkPlayer_Init(BinkPlayer *param_1);
void FUN_004d5d80(int param_1);
void FUN_004d5da4(BinkPlayer *param_1,int param_2);
void FUN_004d5da8(void);
void FUN_004d5dac(undefined8 param_1,uint param_2);
void FUN_004d5df0(void);
void FUN_004d5e48(int param_1);
undefined8 FUN_004d5fac(int *param_1,int *param_2);
namespace idol_draw { void DrawDepth(RenderingStep *param_1,ulonglong param_2); } 
void FUN_004d65c8(int param_1,ulonglong param_2);
void FUN_004d6634(int param_1,ulonglong param_2);
void FUN_004d6704(ulonglong param_1,int *param_2,int *param_3);
void FUN_004d676c(RenderingStep *param_1,int param_2,u8 *param_3,int param_4,int param_5);
void FUN_004d6888(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4);
namespace idol_draw { void ResetPassState(RenderingStep *param_1); } 
void FUN_004d6bb0(RenderingStep *param_1,ulonglong param_2,RsxCmd *param_3);
namespace idol_draw { void SetTextureUnitRegs(int param_1,ulonglong param_2,int *param_3); } 
namespace idol_draw { void BindTexture(RenderingStep *param_1,int param_2,void *param_3,u64 param_4); } 
void FUN_004d6f50(int param_1,int param_2);
void FUN_004d7088(u8 *param_1);
void FUN_004d71a0(void);
void * FUN_004d71c0(int param_1);
void FUN_004d72d4(void);
void FUN_004d72d8(int param_1);
void FUN_004d7464(int param_1,undefined8 param_2);
void * FUN_004d8148(int *param_1);
namespace idol_draw { void BindFragmentProgram(undefined8 param_1,int param_2,longlong param_3); } 
namespace idol_draw { void BindVertexProgram(undefined8 param_1,int param_2,int param_3); } 
void FUN_004d86b0(int param_1);
void FUN_004d8774(int *param_1);
void FUN_004d8b50(int param_1,longlong param_2);
void FUN_004d8db8(int param_1);
namespace idol_draw { void Render_SetupPasses(int *param_1); } 
namespace idol_draw { void Gfx_DrawSurface(int *param_1,byte *param_2,char param_3); } 
namespace idol_draw { void Gfx_DrawStereoSurface(int *param_1,byte *param_2,char param_3); } 
namespace idol_draw { void Gfx_Present(int *param_1,int param_2); } 
namespace idol_draw { void Gfx_ReconfigureVideoOut(int param_1); } 
namespace idol_draw { uint Gfx_EnableSpecialVideoOutMode(int param_1); } 
namespace idol_draw { void Gfx_DrawLoadingBar(int param_1); } 
namespace idol_draw { void Gfx_SetupUIRenderTarget(int param_1); } 
namespace idol_draw { void Gfx_SubmitHudDrawCommands (undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,uint *param_5, uint param_6); } 
void FUN_004dd8e0(int param_1);
namespace idol_draw { void BuildAndFlipFrame(longlong param_1); } 
void FUN_004de940(void);
longlong FUN_004de9c4(undefined8 param_1,int param_2,undefined8 param_3);
void FUN_004deab8(undefined8 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004debdc(undefined8 param_1,byte *param_2,byte *param_3,int param_4,ulonglong param_5);
void FUN_004ded28(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void FUN_004defb0(undefined8 param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5);
void IdolDraw_SetPerspective(double param_1,double param_2,double param_3,int param_4);
void IdolDraw_SetView(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5);
void FUN_004dfc2c(void);
void FUN_004dfe70(double param_1,int *param_2,int param_3,undefined8 param_4);
void FUN_004e0d50(double param_1,double param_2,int param_3,longlong param_4);
void FUN_004e1970(int param_1,longlong param_2,undefined4 param_3,undefined4 param_4,void *param_5, longlong param_6);
void FUN_004e1b80(undefined8 param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5);
void FUN_004e2860(double param_1,int param_2);
void FUN_004e2a60(double param_1,int param_2);
void FUN_004e2de0(double param_1,undefined8 param_2,undefined8 param_3,int param_4);
void FUN_004e3114(int param_1,longlong param_2);
void FUN_004e3178(int param_1);
void FUN_004e31c8(void);
void FUN_004e3348(undefined8 param_1,int param_2,int param_3,int param_4);
longlong FUN_004e3538(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4);
void FUN_004e3698(void);
void FUN_004e369c(void);
void FUN_004e36e8(void);
void FUN_004e3d20(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_004e3d74(undefined8 param_1,uint param_2);
undefined8 FUN_004e3dec(int param_1);
undefined8 FUN_004e3e24(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4, undefined1 param_5,uint *param_6);
void FUN_004e3ee8(uint *param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6, int param_7);
undefined8 FUN_004e402c(int param_1);
void FUN_004e40d8(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5, int param_6,undefined8 param_7,undefined8 param_8);
void FUN_004e47cc(undefined4 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5, int param_6,undefined8 param_7,char param_8);
undefined8 FUN_004e4bb8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,int param_5, undefined8 param_6,int *param_7,uint param_8);
void FUN_004e4d3c(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5, int param_6,undefined8 param_7,undefined8 param_8);
ulonglong FUN_004e535c(int param_1,char param_2);
undefined8 FUN_004e5458(undefined8 param_1,uint param_2,undefined8 param_3);
ulonglong FUN_004e54e8(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5, undefined8 param_6);
void FUN_004e580c(undefined4 *param_1,ulonglong param_2);
void FUN_004e5a34(undefined4 *param_1,int param_2);
void FUN_004e5c5c(int param_1,int param_2);
undefined8 FUN_004e5cd4(undefined8 param_1,undefined8 param_2);
undefined8 FUN_004e5d38(int param_1);
undefined8 FUN_004e5d70(int param_1);
ulonglong FUN_004e5db0(undefined4 *param_1,int param_2,undefined2 param_3);
void FUN_004e5f40(int param_1);
void FUN_004e6014(void);
int FUN_004e6038(int param_1);
void FUN_004e61f4(ulonglong param_1);
undefined8 FUN_004e63c8(void);
undefined8 FUN_004e63d0(void);
int32_t FUN_004e63d8(undefined8 param_1,undefined8 param_2);
undefined4 FUN_004e642c(void);
void FUN_004e643c(int *param_1,int *param_2,int *param_3);
void FUN_004e64b4(void);
void FUN_004e668c(void);
void FUN_004e6734(void);
void FUN_004e6770(int param_1);
void FUN_004e68bc(u8 *param_1,int param_2,int param_3,int param_4);
void FUN_004e6ae8(int param_1);
undefined4 FUN_004e6c40(int param_1,int param_2);
void FUN_004e6df0(int param_1,int param_2);
int32_t FUN_004e6eac(int param_1,int param_2);
void FUN_004e6fd8(int param_1,int *param_2,int param_3);
void FUN_004e70a4(uint *param_1);
void FUN_004e7170(undefined4 *param_1);
void FUN_004e7388(u8 *param_1);
namespace idol { SaveDataInfo * GetSaveData(void); } 
void FUN_004e7534(undefined4 param_1);
void FUN_004e7694(undefined4 *param_1);
void FUN_004e7710(SaveDataInfo *param_1);
void FUN_004e7738(u8 *param_1,int param_2);
void FUN_004e776c(undefined4 *param_1);
void FUN_004e77c0(undefined4 *param_1);
undefined8 FUN_004e77f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4);
void FUN_004e785c(void);
undefined8 FUN_004e78f0(int param_1,undefined4 param_2,int param_3);
void FUN_004e7920(void);
void FUN_004e79a4(void);
namespace idol { namespace SaveSystem_PS { void RunSaveSystem(SaveDataInfo *param_1,int saveArg,char *param_3,int param_4,int (*param_5)(int),int (*param_6)(int),int (*param_7)(int,char *),int (*param_8)(int)); } } 
namespace idol { int registerSavesystemCallback(void); } 
void FUN_004e7d14(void);
int SaveData_FatalExit(SaveDataInfo *param_1,int param_2);
int SaveData_CallOnSave(SaveDataInfo *param_1);
undefined4 FUN_004e7e04(int param_1);
int SaveData_CallOnLoad(SaveDataInfo *param_1);
undefined4 FUN_004e7ee4(int param_1);
void FUN_004e7f54(int param_1,undefined8 param_2);
void FUN_004e7f9c(SaveDataInfo *param_1,int param_2);
void SaveData_SetTitle(SaveDataInfo *param_1,const char *param_2);
void SaveData_SetDialogStrings(SaveDataInfo *param_1,char *param_2,char *param_3);
void FUN_004e81b4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
void FUN_004e81d4(undefined4 *param_1,undefined4 param_2);
namespace idol { undefined8 fileAllocLoad(undefined8 param_1,longlong param_2,int *param_3); } 
bool FUN_004e83e0(undefined4 *param_1);
namespace idol { void NewSaveData(int param_1,int *param_2,longlong param_3); } 
void FUN_004e85a0(int param_1);
namespace idol { namespace SaveSystem_PS { void SaveGameData(void); } } 
namespace idol { namespace SaveSystem_PS { void AutoSaveGameData(void); } } 
void FUN_004e8d18(int param_1,undefined4 *param_2);
namespace idol { namespace SaveSystem_PS { void LoadGameData(void); } } 
namespace idol { void thr_SaveSystem_CheckExisting(void); } 
namespace idol { void SaveDataListCallback(undefined4 *param_1,uint *param_2,undefined4 *param_3); } 
namespace idol { void SaveDataStatusListCallback(undefined4 *param_1,uint *param_2,uint *param_3); } 
void FUN_004e9da0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3);
void FUN_004ea1e0(undefined4 *param_1,uint *param_2,undefined4 *param_3);
namespace idol { void cb_data_status_load(undefined4 *param_1,int param_2,int *param_3); } 
namespace idol { void cb_file_operation_load(undefined4 *param_1,undefined8 param_2,undefined4 *param_3); } 
void FUN_004eab50(undefined4 *param_1,uint *param_2);
void FUN_004eacb8(void);
void FUN_004eacbc(void);
undefined8 FUN_004eacd4(double param_1,int *param_2);
undefined4 * FUN_004eaddc(undefined8 param_1);
void FUN_004eae64(int param_1);
void FUN_004eaf98(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8, undefined8 param_9);
undefined8 FUN_004eb088(double param_1,int param_2,undefined8 param_3,int param_4,int param_5, undefined8 param_6,char param_7,undefined4 param_8,undefined4 param_9);
void FUN_004eb1ac(int param_1);
undefined8 FUN_004eb1e4(int *param_1);
void FUN_004eb224(int param_1,int param_2);
undefined4 FUN_004eb328(int param_1,longlong param_2);
void FUN_004eb358(int *param_1);
void FUN_004eb3b8(int param_1);
void FUN_004eb5e4(void);
void FUN_004eb678(void);
void FUN_004eb6e8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
namespace idol { void Pad_PS_Update(int param_1,ulonglong param_2,int param_3); } 
ulonglong FUN_004ec544(void);
void FUN_004ec568(u8 *param_1,int param_2);
namespace idol_draw { void * InitFrameRenderState (int param_1,void *param_2,int param_3,void *param_4,int param_5,void *param_6, longlong param_7); } 
void FUN_004ec844(int *param_1,longlong param_2);
void FUN_004ec8a4(int *param_1,undefined8 param_2,uint param_3);
void FUN_004ecc84(int *param_1,ulonglong param_2,ulonglong param_3);
void FUN_004ed144(int *param_1,undefined8 param_2,longlong param_3);
void FUN_004ed52c(int *param_1,ulonglong param_2,ulonglong param_3);
namespace idol_draw { void Insert_WaitCmd_Marker(uint *param_1,RenderingStep *param_2,longlong param_3); } 
void FUN_004edc68(int param_1,int param_2);
void FUN_004edccc(int param_1);
void FUN_004edce4(int param_1,int param_2);
void FUN_004edcfc(int param_1);
void FUN_004edd30(int param_1);
namespace idol_draw { void Spurs_FlushAndSwapQueue(uint *param_1); } 
void FUN_004ee034(void);
void FUN_004ee0a8(void);
void FUN_004ee1e0(u8 *param_1);
void FUN_004ee36c(void);
undefined8 FUN_004ee38c(undefined4 param_1);
undefined8 FUN_004ee3fc(int *param_1);
void FUN_004ee594(u8 *param_1,int param_2,int param_3,int param_4);
void FUN_004ee5e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_004ee640(int param_1);
bool FUN_004ee65c(int param_1,uint param_2,char param_3);
void FUN_004ee818(longlong param_1);
void FUN_004ee954(void);
void FUN_004ee958(int param_1);
void FUN_004eebfc(int param_1);
void FUN_004eedc8(int param_1);
undefined8 FUN_004eef00(int param_1);
void FUN_004ef178(undefined4 *param_1);
void FUN_004ef218(undefined4 param_1);
longlong FUN_004ef248(longlong param_1);
void FUN_004ef2f4(undefined8 param_1);
void FUN_004ef320(undefined8 param_1);
u8 *FileSys_Get(void);
char * FUN_004ef3bc(char *param_1,undefined8 param_2);
char *FileSys_ResolvePath(u8 *param_1,const char *param_2,char *param_3);
char * FUN_004ef6e4(undefined8 param_1,undefined8 param_2);
void FUN_004ef730(int param_1,int param_2);
undefined1 FUN_004efb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4);
void FUN_004efdc8(int param_1);
