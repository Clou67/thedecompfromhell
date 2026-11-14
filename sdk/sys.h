#pragma once
// sdk/sys.h
#include "types.h"
#include "sdk/libdme/rt_socket.h"

// ---- types
struct hostent {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    int h_length;
    char **h_addr_list;
};

struct in_addr {
    in_addr_t s_addr;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef __socklen_t socklen_t;

// ---- globals
extern pointer32 sysPrxForUser_func_address_table[29]; /* 0x701af4 */
extern pointer32 sys_net_func_address_table[22]; /* 0x701bd4 */

// ---- functions
void socketpoll(void);
void sys_net_initialize_network_ex(void);
int getsockname(int __fd,sockaddr *__addr,socklen_t *__len);
ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr, socklen_t *__addr_len);
int listen(int __fd,int __n);
void socketselect(void);
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen);
void _sys_net_errno_loc(void);
int connect(int __fd,sockaddr *__addr,socklen_t __len);
void socketclose(void);
hostent * gethostbyname(char *__name);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr, socklen_t __addr_len);
int socket(int __domain,int __type,int __protocol);
int shutdown(int __fd,int __how);
int inet_aton(char *__cp,in_addr *__inp);
int bind(int __fd,sockaddr *__addr,socklen_t __len);
int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
void sys_net_free_thread_context(void);
void cellNetCtlTerm(void);
void cellNetCtlGetInfo(void);
void cellAudioPortStop(void);
void cellAudioQuit(void);
void sys_lwmutex_lock(void);
void sys_lwmutex_unlock(void);
void sys_lwcond_destroy(void);
void sys_ppu_thread_create(void);
void sys_prx_load_module(void);
void sys_lwcond_wait(void);
void _sys_process_atexitspawn(void (*param_1)(void));
void sys_lwmutex_create(void);
void sys_ppu_thread_get_id(void);
void sys_mmapper_free_memory(void);
void sys_prx_register_library(void *param_1);
void sys_mmapper_unmap_memory(void);
void sys_process_is_stack(void);
void sys_initialize_tls(u64 param_1,u32 param_2,u32 param_3,u32 param_4);
u64 sys_time_get_system_time(u32 param_1,u32 param_2);
void _sys_process_at_Exitspawn(void (*param_1)(void));
void sys_prx_exitspawn_with_level(u64 param_1);
void sys_prx_load_module_on_memcontainer_by_fd(void);
void sys_prx_load_module_on_memcontainer(void);
void sys_lwmutex_trylock(void);
void sys_ppu_thread_exit(void);
void sys_mmapper_allocate_memory(void);
void sys_lwmutex_destroy(void);
void sys_lwcond_create(void);
void sys_mmapper_map_memory(void);
void sys_process_exit(int param_1);
void sys_lwcond_signal_all(void);
void sys_prx_load_module_by_fd(void);
void sys_lwcond_signal(void);
