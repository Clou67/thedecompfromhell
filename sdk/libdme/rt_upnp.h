#pragma once
// sdk/libdme/rt_upnp.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071b404; /* 0x71b404 */
extern pointer PTR_DAT_0071b40c; /* 0x71b40c */
extern pointer PTR_DAT_0071b410; /* 0x71b410 */
extern pointer PTR_DAT_0071b434; /* 0x71b434 */
extern pointer PTR_DAT_0071b44c; /* 0x71b44c */
extern pointer PTR_DAT_0071b454; /* 0x71b454 */
extern pointer PTR_DAT_0071b458; /* 0x71b458 */
extern pointer PTR_DAT_0071b460; /* 0x71b460 */
extern pointer PTR_DAT_0071b464; /* 0x71b464 */
extern undefined * PTR_DAT_0071b480; /* 0x71b480 */
extern undefined * PTR_DAT_0071b4a4; /* 0x71b4a4 */
extern pointer PTR_DAT_0071b4ec; /* 0x71b4ec */
extern pointer PTR_DAT_0071b55c; /* 0x71b55c */
extern pointer PTR_PTR_0071b408; /* 0x71b408 */
extern pointer PTR_PTR_0071b448; /* 0x71b448 */
extern pointer PTR_PTR_0071b4e0; /* 0x71b4e0 */
extern pointer PTR_PTR_0071b4f0; /* 0x71b4f0 */
extern pointer PTR_PTR_0071b4f4; /* 0x71b4f4 */
extern pointer PTR_PTR_0071b4f8; /* 0x71b4f8 */
extern pointer PTR_PTR_0071b4fc; /* 0x71b4fc */
extern pointer PTR_PTR_0071b500; /* 0x71b500 */
extern pointer PTR_PTR_0071b504; /* 0x71b504 */
extern pointer PTR_PTR_0071b508; /* 0x71b508 */
extern pointer PTR_PTR_0071b50c; /* 0x71b50c */
extern pointer PTR_PTR_0071b510; /* 0x71b510 */
extern pointer PTR_PTR_0071b514; /* 0x71b514 */
extern pointer PTR_PTR_0071b518; /* 0x71b518 */
extern pointer PTR_PTR_0071b51c; /* 0x71b51c */
extern pointer PTR_PTR_0071b520; /* 0x71b520 */
extern pointer PTR_PTR_0071b524; /* 0x71b524 */
extern pointer PTR_PTR_0071b528; /* 0x71b528 */
extern pointer PTR_PTR_0071b52c; /* 0x71b52c */
extern pointer PTR_PTR_0071b530; /* 0x71b530 */
extern pointer PTR_PTR_0071b534; /* 0x71b534 */
extern pointer PTR_PTR_0071b538; /* 0x71b538 */
extern pointer PTR_PTR_0071b53c; /* 0x71b53c */
extern pointer PTR_PTR_0071b540; /* 0x71b540 */
extern pointer PTR_PTR_0071b544; /* 0x71b544 */
extern pointer PTR_PTR_0071b548; /* 0x71b548 */
extern pointer PTR_PTR_0071b54c; /* 0x71b54c */
extern pointer PTR_PTR_0071b550; /* 0x71b550 */
extern pointer PTR_PTR_0071b554; /* 0x71b554 */
extern pointer PTR_PTR_0071b558; /* 0x71b558 */
extern pointer PTR_s_AddPortMapping_0071b42c; /* 0x71b42c */
extern pointer PTR_s_DeletePortMapping_0071b4e8; /* 0x71b4e8 */
extern pointer PTR_s_GetExternalIPAddress_0071b430; /* 0x71b430 */
extern pointer PTR_s_GetStatusInfo_0071b438; /* 0x71b438 */
extern pointer PTR_s_PortMappingNumberOfEntries_0071b440; /* 0x71b440 */
extern pointer PTR_s_WANIPConnection_0071b418; /* 0x71b418 */
extern pointer PTR_s_WANPPPConnection_0071b41c; /* 0x71b41c */
extern undefined1 stack0x00000030[16]; /* stack slot, not a real global */

// ---- functions
undefined4 rt_upnp_GetVersion(void);
undefined8 FUN_0056a81c(int param_1,undefined4 param_2);
undefined4 FUN_0056a838(int param_1,undefined8 *param_2,int *param_3);
undefined8 FUN_0056a938(int param_1);
void FUN_0056a9a4(int param_1,int param_2);
undefined8 FUN_0056aa1c(int param_1,int param_2,int param_3);
undefined8 FUN_0056ab38(int param_1,uint param_2,char *param_3);
undefined8 FUN_0056ad24(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
ulonglong upnp_HttpGet(int param_1,uint param_2,int param_3);
ulonglong upnp_SoapAction(int param_1,ulonglong param_2,ulonglong param_3);
int upnp_AddPortMapping(undefined8 *param_1,undefined4 param_2,undefined8 param_3,int param_4);
int upnp_GetExternalIPAddress(int param_1,undefined4 param_2,int param_3);
int upnp_GetStatusInfo(int param_1,undefined4 param_2,int param_3);
ulonglong upnp_SoapRequest(int param_1,uint param_2,int param_3);
short upnp_ParseHttpHeader(undefined8 param_1,int *param_2);
ulonglong FUN_0056bedc(int param_1,undefined4 *param_2);
int FUN_0056c198(int param_1);
int FUN_0056c3b8(int param_1,undefined4 *param_2);
undefined8 FUN_0056c50c(int param_1);
undefined8 FUN_0056c550(int param_1);
ulonglong upnp_Discover(int param_1,uint param_2,int param_3);
undefined8 FUN_0056c9d0(int param_1);
ulonglong FUN_0056cedc(int param_1);
int upnp_DeletePortMapping(int param_1);
undefined8 FUN_0056ec2c(int param_1);
ulonglong FUN_0056eccc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined8 FUN_0056ee38(void);
undefined8 FUN_0056ee40(void);
undefined8 FUN_0056ee48(void);
undefined8 FUN_0056ee50(void);
undefined8 FUN_0056ee58(void);
undefined8 FUN_0056ee60(void);
undefined8 FUN_0056ee68(int param_1);
undefined4 FUN_0056eea4(int param_1);
undefined8 FUN_0056efc4(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_0056f07c(int param_1,uint *param_2);
undefined8 FUN_0056f244(int param_1,int *param_2,int *param_3);
int FUN_0056f3fc(undefined4 *param_1);
undefined8 FUN_0056f674(int param_1,undefined8 param_2,int param_3,undefined1 *param_4,int param_5);
int FUN_0056f7a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
int FUN_0056f904(int param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5);
int FUN_0056fa78(undefined4 *param_1,int param_2);
undefined8 FUN_0056fae8(int param_1);
void FUN_0056fb70(void);
undefined8 FUN_0056fc98(void);
undefined8 FUN_0056fcbc(void);
undefined8 FUN_0056fce0(int *param_1);
ulonglong FUN_0056fd30(undefined8 param_1);
ulonglong FUN_0056fd50(undefined8 param_1,undefined8 param_2);
undefined8 FUN_0056fd7c(void);
undefined8 FUN_0056fd84(undefined4 *param_1);
int FUN_0056fdb0(int param_1,undefined4 *param_2);
undefined8 FUN_0056fe5c(void);
undefined4 FUN_0056fe64(void);
uint FUN_0056fe8c(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_0056fef8(int param_1,undefined4 param_2);
undefined4 FUN_0056ff50(int param_1);
void FUN_0056ffa0(undefined4 *param_1);
uint FUN_0056ffb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00570030(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5, undefined4 *param_6);
uint FUN_00570140(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
undefined4 FUN_005701c8(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5);
int FUN_0057026c(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00570340(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5, undefined4 *param_6);
int FUN_00570408(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void FUN_0057052c(int param_1);
int FUN_00570618(int param_1,undefined4 *param_2);
int FUN_0057080c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
int FUN_00570a1c(int *param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 *param_5);
void FUN_00570e40(void);
int FUN_00570ebc(void);
undefined8 FUN_00570f4c(undefined4 *param_1,undefined8 param_2);
undefined8 FUN_00570f88(undefined8 param_1,undefined8 param_2);
undefined8 FUN_00570fb8(undefined8 param_1,undefined8 param_2);
undefined8 FUN_00570ff4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
