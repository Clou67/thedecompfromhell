#pragma once
// idol/idol.h
#include "types.h"

// ---- types
/* Idol's string table (Locale_GetInstance: a 0x1c-byte singleton @*0x902ec4) */
typedef struct LocaleEntry {
    int id;                  /* 0x00  string id + a per-language base */
    int unk04;
    char *text;              /* 0x08 */
} LocaleEntry;
typedef struct Localizer {
    int (*getLanguage)(void);/* 0x00 */
    u32 unk04;               /* 0x04 */
    int count;               /* 0x08  entries */
    int unk0c;               /* 0x0c  Locale_Load's third argument */
    void *buffer;            /* 0x10  Locale_Load's second argument */
    u8 loaded;               /* 0x14 */
    u8 _pad15[3];
    LocaleEntry *entries;    /* 0x18 */
} Localizer;
typedef char Localizer_size_check[sizeof(Localizer) == 0x1c ? 1 : -1];

// ---- functions
namespace idol { undefined8 m_LoadGameFileS(uint arg1,char *str); } 
namespace idol { undefined8 PRINT_m_LoadGameFile(uint arg2,char *arg1); } 
namespace idol { void *m_LoadGameFileB(void *param_1,const char *param_2); } 
undefined8 m_LoadSceneFile(void);
uint StrHashFnv1(byte *param_1);
uint StrHashFnv1N(byte *param_1,int param_2);
undefined8 StrStartsWith(char *param_1,char *param_2);
undefined8 StrEndsWith(char *param_1,char *param_2);
char * StrGetExtension(char *param_1);
char * StrSetExtension(char *param_1,undefined8 param_2,char *param_3);
