// sdk/sys.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 54 functions, 0x6501a4-0x650864
#include "sdk/sys.h"
#include "sdk/cell.h"
#include "sdk/lUnk.h"
#include "sdk/sce.h"

// 0x06501a4 (0x20 bytes)
void socketpoll(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[1])();
  return;
}


// 0x06501c4 (0x20 bytes)
void sys_net_initialize_network_ex(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[2])();
  return;
}


// 0x06501e4 (0x20 bytes)
int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[3])(__fd,__addr,__len);
  return iVar1;
}


// 0x0650204 (0x20 bytes)
ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,
                     socklen_t *__addr_len)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[4])(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}


// 0x0650224 (0x20 bytes)
int listen(int __fd,int __n)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[5])(__fd,__n);
  return iVar1;
}


// 0x0650244 (0x20 bytes)
void socketselect(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[6])();
  return;
}


// 0x0650264 (0x20 bytes)
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[7])(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}


// 0x0650284 (0x20 bytes)
void _sys_net_errno_loc(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[8])();
  return;
}


// 0x06502a4 (0x20 bytes)
int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[9])(__fd,__addr,__len);
  return iVar1;
}


// 0x06502c4 (0x20 bytes)
void socketclose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[10])();
  return;
}


// 0x06502e4 (0x20 bytes)
hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = (hostent *)(**(code **)sys_net_func_address_table[0xb])(__name);
  return phVar1;
}


// 0x0650304 (0x20 bytes)
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xc])(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}


// 0x0650324 (0x20 bytes)
ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,
                   socklen_t __addr_len)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[0xd])(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}


// 0x0650344 (0x20 bytes)
int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xe])(__domain,__type,__protocol);
  return iVar1;
}


// 0x0650364 (0x20 bytes)
int shutdown(int __fd,int __how)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xf])(__fd,__how);
  return iVar1;
}


// 0x0650384 (0x20 bytes)
int inet_aton(char *__cp,in_addr *__inp)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x10])(__cp,__inp);
  return iVar1;
}


// 0x06503a4 (0x20 bytes)
int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x11])(__fd,__addr,__len);
  return iVar1;
}


// 0x06503c4 (0x20 bytes)
int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x12])(__fd,__addr,__addr_len);
  return iVar1;
}


// 0x06503e4 (0x20 bytes)
ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[0x13])(__fd,__buf,__n,__flags);
  return sVar1;
}


// 0x0650404 (0x20 bytes)
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[0x14])(__fd,__buf,__n,__flags);
  return sVar1;
}


// 0x0650424 (0x20 bytes)
void sys_net_free_thread_context(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[0x15])();
  return;
}


// 0x0650444 (0x20 bytes)
void cellNetCtlTerm(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[4])();
  return;
}


// 0x0650464 (0x20 bytes)
void cellNetCtlGetInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[5])();
  return;
}


// 0x0650484 (0x20 bytes)
void cellAudioPortStop(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[5])();
  return;
}


// 0x06504a4 (0x20 bytes)
void cellAudioQuit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[6])();
  return;
}


// 0x06504c4 (0x20 bytes)
void sys_lwmutex_lock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0])();
  return;
}


// 0x06504e4 (0x20 bytes)
void sys_lwmutex_unlock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[1])();
  return;
}


// 0x0650504 (0x20 bytes)
void sys_lwcond_destroy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[2])();
  return;
}


// 0x0650524 (0x20 bytes)
void sys_ppu_thread_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[3])();
  return;
}


// 0x0650544 (0x20 bytes)
void sys_prx_load_module(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[4])();
  return;
}


// 0x0650564 (0x20 bytes)
void sys_lwcond_wait(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[5])();
  return;
}


// 0x0650584 (0x20 bytes)
void _sys_process_atexitspawn(void (*param_1)(void))

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[6])();
  return;
}


// 0x06505a4 (0x20 bytes)
void sys_lwmutex_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[7])();
  return;
}


// 0x06505c4 (0x20 bytes)
void sys_ppu_thread_get_id(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[8])();
  return;
}


// 0x06505e4 (0x20 bytes)
void sys_mmapper_free_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[9])();
  return;
}


// 0x0650604 (0x20 bytes)
void sys_prx_register_library(void *param_1)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[10])();
  return;
}


// 0x0650624 (0x20 bytes)
void sys_mmapper_unmap_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xb])();
  return;
}


// 0x0650644 (0x20 bytes)
void sys_process_is_stack(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xc])();
  return;
}


// 0x0650664 (0x20 bytes)
void sys_initialize_tls(u64 param_1,u32 param_2,u32 param_3,u32 param_4)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xd])();
  return;
}


// 0x0650684 (0x20 bytes)
u64 sys_time_get_system_time(u32 param_1,u32 param_2)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xe])();
  return;
}


// 0x06506a4 (0x20 bytes)
void _sys_process_at_Exitspawn(void (*param_1)(void))

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xf])();
  return;
}


// 0x06506c4 (0x20 bytes)
void sys_prx_exitspawn_with_level(u64 param_1)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x10])();
  return;
}


// 0x06506e4 (0x20 bytes)
void sys_prx_load_module_on_memcontainer_by_fd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x11])();
  return;
}


// 0x0650704 (0x20 bytes)
void sys_prx_load_module_on_memcontainer(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x12])();
  return;
}


// 0x0650724 (0x20 bytes)
void sys_lwmutex_trylock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x13])();
  return;
}


// 0x0650744 (0x20 bytes)
void sys_ppu_thread_exit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x14])();
  return;
}


// 0x0650764 (0x20 bytes)
void sys_mmapper_allocate_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x15])();
  return;
}


// 0x0650784 (0x20 bytes)
void sys_lwmutex_destroy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x16])();
  return;
}


// 0x06507a4 (0x20 bytes)
void sys_lwcond_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x17])();
  return;
}


// 0x06507c4 (0x20 bytes)
void sys_mmapper_map_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x18])();
  return;
}


// 0x06507e4 (0x20 bytes)
void sys_process_exit(int param_1)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x19])();
  return;
}


// 0x0650804 (0x20 bytes)
void sys_lwcond_signal_all(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1a])();
  return;
}


// 0x0650824 (0x20 bytes)
void sys_prx_load_module_by_fd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1b])();
  return;
}


// 0x0650844 (0x20 bytes)
void sys_lwcond_signal(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1c])();
  return;
}


