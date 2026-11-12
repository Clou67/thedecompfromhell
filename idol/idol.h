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

// ---- globals
extern undefined4 DAT_0065f8dc; /* no defined data */
extern undefined4 DAT_0065f8e4; /* no defined data */
extern undefined4 DAT_0065f8ec; /* no defined data */
extern undefined4 DAT_0065f8f4; /* no defined data */
extern undefined4 DAT_0065f8fc; /* no defined data */
extern undefined4 DAT_0065f904; /* no defined data */
extern undefined4 DAT_00902ec4; /* 0x902ec4 */
extern undefined1 DAT_0159b84c; /* 0x159b84c */
extern undefined1 DAT_0159b88b; /* 0x159b88b */
extern undefined4 DAT_0159bb0c; /* 0x159bb0c */
extern undefined4 DAT_0159bb10; /* 0x159bb10 */
extern undefined1 DAT_0159c320; /* 0x159c320 */
extern undefined4 DAT_0159c328; /* 0x159c328 */
extern pointer32 PTR_FUN_00711e30; /* 0x711e30 */

// ---- functions
namespace idol { undefined8 m_LoadGameFileS(uint arg1,char *str); } 
namespace idol { undefined8 PRINT_m_LoadGameFile(uint arg2,char *arg1); } 
namespace idol { void *m_LoadGameFileB(void *param_1,const char *param_2); } 
undefined8 FUN_00503524(void);
uint FUN_00503554(byte *param_1);
uint FUN_005035e8(byte *param_1,int param_2);
undefined8 FUN_00503650(char *param_1,char *param_2);
undefined8 FUN_005036f0(char *param_1,char *param_2);
char * FUN_005037a0(char *param_1);
char * FUN_00503810(char *param_1,undefined8 param_2,char *param_3);
void FUN_005038c4(int param_1);
Localizer *Locale_GetInstance(void);
void FUN_00503950(int param_1);
void FUN_0050396c(int param_1,char *param_2);
void Locale_Load(Localizer *param_1,void *param_2,int param_3,int (*param_4)(void),const char *param_5);
int FUN_00503ac0(int param_1,int param_2);
undefined8 FUN_00503b10(undefined4 *param_1,int param_2);
char *Locale_GetString(Localizer *param_1,int param_2);
int FUN_00503c70(int param_1,int param_2);
char *Locale_Convert(Localizer *param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6);
void FUN_00503df8(void);
void FUN_00503dfc(void);
int LoadAssetFromFile(const char *param_1,void *param_2,int param_3);
void FUN_00503f8c(undefined8 param_1,undefined8 param_2,longlong param_3);
void FUN_005040f4(int param_1);
undefined8 GetFileSize(undefined8 param_1);
void FUN_00504218(undefined8 param_1,undefined8 param_2,int param_3,int param_4);
void *FUN_0050436c(void *param_1);
void FUN_00504374(longlong param_1,undefined8 param_2,undefined4 param_3);
void FUN_005043b0(u8 *param_1);
namespace idol { void InitGameGraphics(u8 *param_1); } 
void FUN_00504468(u8 *param_1);
namespace idol { void GameAuthenticate(u8 *param_1,char *param_2,char *param_3); } 
void FUN_0050476c(void);
void FUN_005048f4(void);
void FUN_005048f8(void);
void FUN_0050493c(undefined8 param_1,int param_2);
void FUN_00504988(u8 *param_1,const char *param_2,int param_3);
namespace idol { void CheckLicense(int *unk1,const char *glow_rgba,char *gameId,char *gameIdExt,bool isDisc,int param_6); } 
undefined4 FUN_00504c38(int param_1);
undefined4 FUN_00504c58(int param_1);
undefined4 FUN_00504c78(int param_1);
undefined4 FUN_00504c98(int param_1);
undefined4 FUN_00504ce0(int param_1);
int FUN_00504d28(int param_1);
int FUN_00504d48(int param_1);
u8 FUN_00504d90(void *param_1);
ulonglong FUN_00504db0(int param_1,int param_2);
void FUN_00504dc8(int param_1);
void FUN_00504e20(int param_1);
byte * FUN_00504e78(undefined8 param_1,int param_2,undefined1 *param_3);
ulonglong FUN_00504fc8(undefined8 param_1,byte *param_2);
undefined8 FUN_00504fdc(undefined8 param_1,char *param_2);
undefined8 FUN_00505044(undefined8 param_1,char *param_2,char param_3);
undefined8 FUN_005050b4(undefined8 param_1,char *param_2);
longlong FUN_00505114(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5);
char * FUN_005051d8(int param_1,char *param_2);
undefined8 FUN_00505338(int param_1,byte *param_2);
undefined8 FUN_005053a8(int param_1,undefined8 param_2,float *param_3);
void FUN_0050544c(int param_1,uint param_2,undefined8 param_3);
void FUN_005054a4(int param_1,uint param_2,int param_3);
void FUN_00505580(void);
void FUN_005055e8(undefined8 param_1,undefined4 *param_2);
void FUN_0050565c(u8 *param_1);
void FUN_005057a0(void);
undefined4 FUN_005057c4(void);
void FUN_005057d4(undefined4 param_1);
void FUN_00505808(void);
void FUN_00505810(void);
void FUN_005058a0(void);
undefined8 FUN_00505954(undefined4 param_1);
void FUN_00505acc(void);
undefined8 FUN_00505af0(void);
void FUN_00505af8(void);
undefined8 FUN_00505afc(void);
undefined8 FUN_00505b04(void);
void FUN_00505b0c(void);
void Sound_LoadBank(u8 *param_1,u8 *param_2,u32 *param_3);
void FUN_00505bac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4);
longlong FUN_00505c6c(undefined8 param_1,undefined8 param_2);
void FUN_00505cf8(void);
void FUN_00505cfc(void);
undefined8 STUB_00505d20(...);
void FUN_00505d30(int param_1);
void FUN_00505d78(undefined4 param_1,undefined4 *param_2,undefined8 param_3);
void FUN_00505e08(undefined8 param_1,undefined4 *param_2,undefined8 param_3);
void FUN_00505e98(undefined8 param_1,undefined4 *param_2,undefined8 param_3);
void FUN_00505f18(void);
void STUB_00505f3c(...);
void STUB_00505f40(...);
void STUB_00505f44(...);
void STUB_00505f48(...);
void STUB_00505f4c(...);
void STUB_00505f50(...);
