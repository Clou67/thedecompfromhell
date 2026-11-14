#pragma once
// idol/savesystem.h
#include "types.h"

// ---- globals
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
extern undefined4 GameSavePtr; /* 0x8fa640 */
extern pointer32 PTR_AutoSaveGameData_00710038; /* 0x710038 */
extern pointer PTR_DAT_00659900; /* 0x659900 */
extern pointer PTR_DAT_0065996c; /* 0x65996c */
extern pointer PTR_DAT_008fabb0; /* 0x8fabb0 */
extern pointer PTR_Elf64_Ehdr_008fa648; /* 0x8fa648 */
extern pointer32 PTR_FUN_0070ff48; /* 0x70ff48 */
extern pointer32 PTR_FUN_00710068; /* 0x710068 */
extern pointer32 PTR_FUN_00710070; /* 0x710070 */
extern pointer32 PTR_FUN_00710088; /* 0x710088 */
extern pointer32 PTR_FUN_00710090; /* 0x710090 */
extern pointer32 PTR_LoadGameData_00710048; /* 0x710048 */
extern pointer PTR_PTR_006618d0; /* 0x6618d0 */
extern pointer32 PTR_SaveDataListCallback_00710058; /* 0x710058 */
extern pointer32 PTR_SaveDataStatusListCallback_00710060; /* 0x710060 */
extern pointer32 PTR_SaveGameData_00710030; /* 0x710030 */
extern pointer32 PTR_cb_data_status_load_00710078; /* 0x710078 */
extern pointer32 PTR_cb_file_operation_load_00710080; /* 0x710080 */
extern undefined * PTR_s__RC1_SAVEDATA_006599c8; /* 0x6599c8 */
extern pointer32 PTR_thr_SaveSystem_CheckExisting_00710050; /* 0x710050 */
extern char *g_pSaveBuffer; /* 0x8fabb4 */ /* type set in global_types.tsv */

// ---- functions
int32_t SaveSystem_HandleError(int param_1,int param_2);
void SaveSystem_HandleNoSpace(int param_1,int *param_2,int param_3);
void SaveSystem_DumpListGet(uint *param_1);
void SaveSystem_DumpStatGet(undefined4 *param_1);
void SaveSystem_Ctor(u8 *param_1);
namespace idol { SaveDataInfo * GetSaveData(void); } 
void SaveSystem_ShowNoSpaceDialog(undefined4 param_1);
void SaveSystem_Ctor_2(undefined4 *param_1);
void SaveSystem_UnloadModule(SaveDataInfo *param_1);
void SaveSystem_Dtor(u8 *param_1,int param_2);
void SaveSystem_DeletingDtor(undefined4 *param_1);
void SaveSystem_Dtor_2(undefined4 *param_1);
undefined8 SaveSystem_PrintFailure(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4);
void SaveSystem_StartAutoSave(void);
undefined8 SaveSystem_RequestSave(int param_1,undefined4 param_2,int param_3);
void SaveSystem_StartLoad(void);
void SaveSystem_StartSave(void);
namespace idol { namespace SaveSystem_PS { void RunSaveSystem(SaveDataInfo *param_1,int saveArg,char *param_3,int param_4,int (*param_5)(int),int (*param_6)(int),int (*param_7)(int,char *),int (*param_8)(int)); } } 
namespace idol { int registerSavesystemCallback(void); } 
void STUB_004e7d14(void);
int SaveData_FatalExit(SaveDataInfo *param_1,int param_2);
int SaveData_CallOnSave(SaveDataInfo *param_1);
undefined4 SaveSystem_OnSaving(int param_1);
int SaveData_CallOnLoad(SaveDataInfo *param_1);
undefined4 SaveSystem_OnLoading(int param_1);
void SaveSystem_SetTitle(int param_1,undefined8 param_2);
void SaveSystem_GetFileName(SaveDataInfo *param_1,int param_2);
void SaveData_SetTitle(SaveDataInfo *param_1,const char *param_2);
void SaveData_SetDialogStrings(SaveDataInfo *param_1,char *param_2,char *param_3);
void SaveSystem_InitRequest(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
void SaveSystem_InitBuffer(undefined4 *param_1,undefined4 param_2);
namespace idol { undefined8 fileAllocLoad(undefined8 param_1,longlong param_2,int *param_3); } 
bool SaveSystem_AllocBuffer(undefined4 *param_1);
namespace idol { void NewSaveData(int param_1,int *param_2,longlong param_3); } 
void thr_SaveSystem_AutoSave(int param_1);
namespace idol { namespace SaveSystem_PS { void SaveGameData(void); } } 
namespace idol { namespace SaveSystem_PS { void AutoSaveGameData(void); } } 
void SaveSystem_GetErrorParams(int param_1,undefined4 *param_2);
namespace idol { namespace SaveSystem_PS { void LoadGameData(void); } } 
namespace idol { void thr_SaveSystem_CheckExisting(void); } 
namespace idol { void SaveDataListCallback(undefined4 *param_1,uint *param_2,undefined4 *param_3); } 
namespace idol { void SaveDataStatusListCallback(undefined4 *param_1,uint *param_2,uint *param_3); } 
void SaveFileOpListCallback(undefined4 *param_1,undefined8 param_2,undefined4 *param_3);
void LoadDataListCallback(undefined4 *param_1,uint *param_2,undefined4 *param_3);
namespace idol { void cb_data_status_load(undefined4 *param_1,int param_2,int *param_3); } 
namespace idol { void cb_file_operation_load(undefined4 *param_1,undefined8 param_2,undefined4 *param_3); } 
void SaveSystem_CountExisting(undefined4 *param_1,uint *param_2);
void STUB_004eacb8(void);
void SaveSystem_SetIconData(void);
