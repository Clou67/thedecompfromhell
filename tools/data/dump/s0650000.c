//==== 00650004  ns=cell  size=0x20
// sig: undefined cellFsGetFreeSize(void)
// callers(1): 00530f80 FUN_00530f80
// callees(0): 

void cell::cellFsGetFreeSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xf])();
  return;
}



//==== 00650024  ns=cell  size=0x20
// sig: undefined cellFsSdataOpen(void)
// callers(1): 00528598 FUN_00528598
// callees(0): 

void cell::cellFsSdataOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x10])();
  return;
}



//==== 00650044  ns=cell  size=0x20
// sig: undefined cellFsMkdir(void)
// callers(0): 
// callees(0): 

void cell::cellFsMkdir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x11])();
  return;
}



//==== 00650064  ns=cell  size=0x20
// sig: undefined cellFsAioRead(void)
// callers(2): 00640000 FUN_00640000; 0064e758 FUN_0064e758
// callees(0): 

void cell::cellFsAioRead(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x12])();
  return;
}



//==== 00650084  ns=cell  size=0x20
// sig: undefined cellFsAioInit(void)
// callers(1): 0064e720 FUN_0064e720
// callees(0): 

void cell::cellFsAioInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x13])();
  return;
}



//==== 006500a4  ns=cell  size=0x20
// sig: undefined cellFsWrite(void)
// callers(0): 
// callees(0): 

void cell::cellFsWrite(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x14])();
  return;
}



//==== 006500c4  ns=cell  size=0x20
// sig: undefined cellFsClosedir(void)
// callers(2): 00528f00 FUN_00528f00; 00528fc8 FUN_00528fc8
// callees(0): 

void cell::cellFsClosedir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x15])();
  return;
}



//==== 006500e4  ns=cell  size=0x20
// sig: undefined cellSysmoduleInitialize(void)
// callers(1): 0052ea40 FUN_0052ea40
// callees(0): 

void cell::cellSysmoduleInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[2])();
  return;
}



//==== 00650104  ns=cell  size=0x20
// sig: undefined _cellSpursLFQueueInitialize(void)
// callers(1): 005104d4 FUN_005104d4
// callees(0): 

void cell::_cellSpursLFQueueInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1a])();
  return;
}



//==== 00650124  ns=cell  size=0x20
// sig: undefined cellSpursLFQueueAttachLv2EventQueue(void)
// callers(1): 005104d4 FUN_005104d4
// callees(0): 

void cell::cellSpursLFQueueAttachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1b])();
  return;
}



//==== 00650144  ns=cell  size=0x20
// sig: undefined cellSpursLFQueueDetachLv2EventQueue(void)
// callers(1): 0050fb74 FUN_0050fb74
// callees(0): 

void cell::cellSpursLFQueueDetachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1c])();
  return;
}



//==== 00650164  ns=cell  size=0x20
// sig: undefined _cellSpursLFQueuePushBody(void)
// callers(2): 0050fbfc FUN_0050fbfc; 0051007c FUN_0051007c
// callees(0): 

void cell::_cellSpursLFQueuePushBody(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1d])();
  return;
}



//==== 00650184  ns=cell  size=0x20
// sig: undefined cellSpursCreateTask(void)
// callers(1): 00510638 FUN_00510638
// callees(0): 

void cell::cellSpursCreateTask(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1e])();
  return;
}



//==== 006501a4  ns=sys  size=0x20
// sig: undefined socketpoll(void)
// callers(1): 00572f28 FUN_00572f28
// callees(0): 

void sys::socketpoll(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[1])();
  return;
}



//==== 006501c4  ns=sys  size=0x20
// sig: undefined sys_net_initialize_network_ex(void)
// callers(1): 005c18d0 FUN_005c18d0
// callees(0): 

void sys::sys_net_initialize_network_ex(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[2])();
  return;
}



//==== 006501e4  ns=sys  size=0x20
// sig: int getsockname(int __fd, sockaddr * __addr, socklen_t * __len)
// callers(1): 00571f34 FUN_00571f34
// callees(0): 

int sys::getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[3])(__fd,__addr,__len);
  return iVar1;
}



//==== 00650204  ns=sys  size=0x20
// sig: ssize_t recvfrom(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t * __addr_len)
// callers(2): 005710ec FUN_005710ec; 00571214 FUN_00571214
// callees(0): 

ssize_t sys::recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,
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



//==== 00650224  ns=sys  size=0x20
// sig: int listen(int __fd, int __n)
// callers(1): 00571c54 FUN_00571c54
// callees(0): 

int sys::listen(int __fd,int __n)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[5])(__fd,__n);
  return iVar1;
}



//==== 00650244  ns=sys  size=0x20
// sig: undefined socketselect(void)
// callers(1): 00572c90 FUN_00572c90
// callees(0): 

void sys::socketselect(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[6])();
  return;
}



//==== 00650264  ns=sys  size=0x20
// sig: int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen)
// callers(3): 005720b4 FUN_005720b4; 00572148 FUN_00572148; 005721dc FUN_005721dc
// callees(0): 

int sys::getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[7])(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



//==== 00650284  ns=sys  size=0x20
// sig: undefined _sys_net_errno_loc(void)
// callers(1): 00572554 FUN_00572554
// callees(0): 

void sys::_sys_net_errno_loc(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[8])();
  return;
}



//==== 006502a4  ns=sys  size=0x20
// sig: int connect(int __fd, sockaddr * __addr, socklen_t __len)
// callers(2): 00571b08 FUN_00571b08; 005728a8 FUN_005728a8
// callees(0): 

int sys::connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[9])(__fd,__addr,__len);
  return iVar1;
}



//==== 006502c4  ns=sce  size=0x20
// sig: undefined socketclose(void)
// callers(1): 00573340 FUN_00573340
// callees(0): 

void sce::socketclose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006502e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[10])();
  return;
}



//==== 006502e4  ns=sys  size=0x20
// sig: hostent * gethostbyname(char * __name)
// callers(1): 00571cb8 FUN_00571cb8
// callees(0): 

hostent * sys::gethostbyname(char *__name)

{
  hostent *phVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = (hostent *)(**(code **)sys_net_func_address_table[0xb])(__name);
  return phVar1;
}



//==== 00650304  ns=sce  size=0x20
// sig: int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen)
// callers(6): 0057227c FUN_0057227c; 005722d4 FUN_005722d4; 0057232c FUN_0057232c; 00572384 FUN_00572384; 005732a0 FUN_005732a0; 005732f0 FUN_005732f0
// callees(0): 

int sce::setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xc])(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



//==== 00650324  ns=sce  size=0x20
// sig: ssize_t sendto(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t __addr_len)
// callers(3): 00571468 FUN_00571468; 00571580 FUN_00571580; 00572944 FUN_00572944
// callees(0): 

ssize_t sce::sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,
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



//==== 00650344  ns=sce  size=0x20
// sig: int socket(int __domain, int __type, int __protocol)
// callers(3): 00571664 FUN_00571664; 005716e4 FUN_005716e4; 0057175c FUN_0057175c
// callees(0): 

int sce::socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xe])(__domain,__type,__protocol);
  return iVar1;
}



//==== 00650364  ns=sce  size=0x20
// sig: int shutdown(int __fd, int __how)
// callers(1): 0057246c FUN_0057246c
// callees(0): 

int sce::shutdown(int __fd,int __how)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0xf])(__fd,__how);
  return iVar1;
}



//==== 00650384  ns=sys  size=0x20
// sig: int inet_aton(char * __cp, in_addr * __inp)
// callers(2): 00572ae0 FUN_00572ae0; 00572e88 FUN_00572e88
// callees(0): 

int sys::inet_aton(char *__cp,in_addr *__inp)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x10])(__cp,__inp);
  return iVar1;
}



//==== 006503a4  ns=sys  size=0x20
// sig: int bind(int __fd, sockaddr * __addr, socklen_t __len)
// callers(3): 00571df0 FUN_00571df0; 00571e90 FUN_00571e90; 00571f34 FUN_00571f34
// callees(0): 

int sys::bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x11])(__fd,__addr,__len);
  return iVar1;
}



//==== 006503c4  ns=sys  size=0x20
// sig: int accept(int __fd, sockaddr * __addr, socklen_t * __addr_len)
// callers(1): 00571bb8 FUN_00571bb8
// callees(0): 

int sys::accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006503e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)sys_net_func_address_table[0x12])(__fd,__addr,__addr_len);
  return iVar1;
}



//==== 006503e4  ns=sce  size=0x20
// sig: ssize_t send(int __fd, void * __buf, size_t __n, int __flags)
// callers(3): 005717d4 FUN_005717d4; 00571878 FUN_00571878; 00572944 FUN_00572944
// callees(0): 

ssize_t sce::send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[0x13])(__fd,__buf,__n,__flags);
  return sVar1;
}



//==== 00650404  ns=sys  size=0x20
// sig: ssize_t recv(int __fd, void * __buf, size_t __n, int __flags)
// callers(4): 0057191c FUN_0057191c; 005719c0 FUN_005719c0; 00571a64 FUN_00571a64; 00572fb8 FUN_00572fb8
// callees(0): 

ssize_t sys::recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)sys_net_func_address_table[0x14])(__fd,__buf,__n,__flags);
  return sVar1;
}



//==== 00650424  ns=sys  size=0x20
// sig: undefined sys_net_free_thread_context(void)
// callers(1): 005c16e0 FUN_005c16e0
// callees(0): 

void sys::sys_net_free_thread_context(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[0x15])();
  return;
}



//==== 00650444  ns=cell  size=0x20
// sig: undefined cellNetCtlTerm(void)
// callers(1): 005c16e0 FUN_005c16e0
// callees(0): 

void cell::cellNetCtlTerm(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[4])();
  return;
}



//==== 00650464  ns=cell  size=0x20
// sig: undefined cellNetCtlGetInfo(void)
// callers(2): 00572ae0 FUN_00572ae0; 00572e88 FUN_00572e88
// callees(0): 

void cell::cellNetCtlGetInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[5])();
  return;
}



//==== 00650484  ns=cell  size=0x20
// sig: undefined cellAudioPortStop(void)
// callers(1): 0064abc0 FUN_0064abc0
// callees(0): 

void cell::cellAudioPortStop(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[5])();
  return;
}



//==== 006504a4  ns=cell  size=0x20
// sig: undefined cellAudioQuit(void)
// callers(1): 0064abc0 FUN_0064abc0
// callees(0): 

void cell::cellAudioQuit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[6])();
  return;
}



//==== 006504c4  ns=sys  size=0x20
// sig: undefined sys_lwmutex_lock(void)
// callers(26): 0052de58 fios::lwmutex_lock_checked; 005d03b4 FUN_005d03b4; 005d0504 FUN_005d0504; 005d05f4 FUN_005d05f4; 005d06a4 FUN_005d06a4; 005d0854 FUN_005d0854; 005d0948 FUN_005d0948; 005d0a3c FUN_005d0a3c; 005d0b80 FUN_005d0b80; 005d172c FUN_005d172c; 005e2e54 FUN_005e2e54; 005e2f70 FUN_005e2f70; 005e30a8 FUN_005e30a8; 005e31cc FUN_005e31cc; 005e3314 FUN_005e3314; 005e3408 FUN_005e3408; 005e35a8 FUN_005e35a8; 005e36ac FUN_005e36ac; 005fc1d8 FUN_005fc1d8; 005fc20c FUN_005fc20c; 005fc2ec FUN_005fc2ec; 005fc620 FUN_005fc620; 005fd570 FUN_005fd570; 006303cc FUN_006303cc; 0063fcb0 FUN_0063fcb0
// callees(0): 

void sys::sys_lwmutex_lock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006504e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0])();
  return;
}



//==== 006504e4  ns=sys  size=0x20
// sig: undefined sys_lwmutex_unlock(void)
// callers(26): 0052dda0 fios::lwmutex_unlock_checked; 005d0370 FUN_005d0370; 005d0504 FUN_005d0504; 005d05f4 FUN_005d05f4; 005d06a4 FUN_005d06a4; 005d0854 FUN_005d0854; 005d0948 FUN_005d0948; 005d0a3c FUN_005d0a3c; 005d0b80 FUN_005d0b80; 005d1770 FUN_005d1770; 005e2e1c FUN_005e2e1c; 005e2f70 FUN_005e2f70; 005e30a8 FUN_005e30a8; 005e31cc FUN_005e31cc; 005e3314 FUN_005e3314; 005e3408 FUN_005e3408; 005e35a8 FUN_005e35a8; 005e36ac FUN_005e36ac; 005fc2bc FUN_005fc2bc; 005fc2ec FUN_005fc2ec; 005fc620 FUN_005fc620; 005fcf70 FUN_005fcf70; 005fd570 FUN_005fd570; 00630388 FUN_00630388; 0063fcd8 FUN_0063fcd8
// callees(0): 

void sys::sys_lwmutex_unlock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[1])();
  return;
}



//==== 00650504  ns=sys  size=0x20
// sig: undefined sys_lwcond_destroy(void)
// callers(3): 0052d0e8 FUN_0052d0e8; 0052db8c FUN_0052db8c; 0063fa4c FUN_0063fa4c
// callees(0): 

void sys::sys_lwcond_destroy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[2])();
  return;
}



//==== 00650524  ns=sys  size=0x20
// sig: undefined sys_ppu_thread_create(void)
// callers(18): 004e785c FUN_004e785c; 004e7920 FUN_004e7920; 004e79a4 FUN_004e79a4; 004e7a34 idol::SaveSystem_PS::RunSaveSystem; 004e7c9c idol::registerSavesystemCallback; 004e7d18 FUN_004e7d18; 004ee38c FUN_004ee38c; 004ee3fc FUN_004ee3fc; 004eff54 idol::RegisterTrophyCtxHandle; 004f0310 idol::NPTrophyUnlock; 004f03dc FUN_004f03dc; 005046b0 idol::GameAuthenticate; 005085cc fios::LoadAssetAsync; 0052d814 FUN_0052d814; 005fc620 FUN_005fc620; 00630708 FUN_00630708; 0063fb20 idol::CreateSndParsingThread; 0064b650 FUN_0064b650
// callees(0): 

void sys::sys_ppu_thread_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[3])();
  return;
}



//==== 00650544  ns=sys  size=0x20
// sig: undefined sys_prx_load_module(void)
// callers(0): 
// callees(0): 

void sys::sys_prx_load_module(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[4])();
  return;
}



//==== 00650564  ns=sys  size=0x20
// sig: undefined sys_lwcond_wait(void)
// callers(2): 0052e49c FUN_0052e49c; 0063fcd8 FUN_0063fcd8
// callees(0): 

void sys::sys_lwcond_wait(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[5])();
  return;
}



//==== 00650584  ns=sys  size=0x20
// sig: undefined _sys_process_atexitspawn(void)
// callers(1): 00014c7c boot::entry
// callees(0): 

void sys::_sys_process_atexitspawn(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[6])();
  return;
}



//==== 006505a4  ns=sys  size=0x20
// sig: undefined sys_lwmutex_create(void)
// callers(16): 0052d370 FUN_0052d370; 0052d478 FUN_0052d478; 005d04b0 FUN_005d04b0; 005d05b8 FUN_005d05b8; 005d0cf8 FUN_005d0cf8; 005d541c FUN_005d541c; 005d5584 FUN_005d5584; 005e2ec8 FUN_005e2ec8; 005e2f00 FUN_005e2f00; 005e3060 FUN_005e3060; 005e3558 FUN_005e3558; 005fc508 FUN_005fc508; 005fc620 FUN_005fc620; 00630554 FUN_00630554; 0063f9c4 FUN_0063f9c4; 0063fb20 idol::CreateSndParsingThread
// callees(0): 

void sys::sys_lwmutex_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[7])();
  return;
}



//==== 006505c4  ns=sys  size=0x20
// sig: undefined sys_ppu_thread_get_id(void)
// callers(19): 004e64b4 FUN_004e64b4; 005083fc FUN_005083fc; 0052d580 FUN_0052d580; 0052d654 FUN_0052d654; 0052d728 FUN_0052d728; 00553204 FUN_00553204; 005d03b4 FUN_005d03b4; 005d06a4 FUN_005d06a4; 005d0854 FUN_005d0854; 005d0948 FUN_005d0948; 005d0a3c FUN_005d0a3c; 005d1770 FUN_005d1770; 005e3314 FUN_005e3314; 005e3408 FUN_005e3408; 005e36ac FUN_005e36ac; 005fc5a8 FUN_005fc5a8; 005fc620 FUN_005fc620; 006306cc FUN_006306cc; 00644f3c FUN_00644f3c
// callees(0): 

void sys::sys_ppu_thread_get_id(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006505e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[8])();
  return;
}



//==== 006505e4  ns=sys  size=0x20
// sig: undefined sys_mmapper_free_memory(void)
// callers(1): 004e6ae8 FUN_004e6ae8
// callees(0): 

void sys::sys_mmapper_free_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[9])();
  return;
}



//==== 00650604  ns=sys  size=0x20
// sig: undefined sys_prx_register_library(void)
// callers(1): 00014c7c boot::entry
// callees(0): 

void sys::sys_prx_register_library(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[10])();
  return;
}



//==== 00650624  ns=sys  size=0x20
// sig: undefined sys_mmapper_unmap_memory(void)
// callers(1): 004e6ae8 FUN_004e6ae8
// callees(0): 

void sys::sys_mmapper_unmap_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xb])();
  return;
}



//==== 00650644  ns=sys  size=0x20
// sig: undefined sys_process_is_stack(void)
// callers(5): 0050fbfc FUN_0050fbfc; 0051007c FUN_0051007c; 00514124 FUN_00514124; 0051ff58 FUN_0051ff58; 0064547c FUN_0064547c
// callees(0): 

void sys::sys_process_is_stack(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xc])();
  return;
}



//==== 00650664  ns=sys  size=0x20
// sig: undefined sys_initialize_tls(void)
// callers(1): 00014c7c boot::entry
// callees(0): 

void sys::sys_initialize_tls(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xd])();
  return;
}



//==== 00650684  ns=sys  size=0x20
// sig: undefined sys_time_get_system_time(void)
// callers(14): 00014c7c boot::entry; 004d5e48 FUN_004d5e48; 004dc99c idol_draw::Gfx_ReconfigureVideoOut; 004dcb80 idol_draw::Gfx_EnableSpecialVideoOutMode; 004ddba8 idol_draw::BuildAndFlipFrame; 004e6014 FUN_004e6014; 00503390 FUN_00503390; 00552b30 FUN_00552b30; 00557000 FUN_00557000; 005570a4 FUN_005570a4; 00557148 FUN_00557148; 005cedb8 FUN_005cedb8; 005f5090 FUN_005f5090; 0063f99c FUN_0063f99c
// callees(0): 

void sys::sys_time_get_system_time(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xe])();
  return;
}



//==== 006506a4  ns=sys  size=0x20
// sig: undefined _sys_process_at_Exitspawn(void)
// callers(1): 00014c7c boot::entry
// callees(0): 

void sys::_sys_process_at_Exitspawn(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0xf])();
  return;
}



//==== 006506c4  ns=sys  size=0x20
// sig: undefined sys_prx_exitspawn_with_level(void)
// callers(1): 00014b98 idol::ExitToSystem
// callees(0): 

void sys::sys_prx_exitspawn_with_level(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006506e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x10])();
  return;
}



//==== 006506e4  ns=sys  size=0x20
// sig: undefined sys_prx_load_module_on_memcontainer_by_fd(void)
// callers(0): 
// callees(0): 

void sys::sys_prx_load_module_on_memcontainer_by_fd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x11])();
  return;
}



//==== 00650704  ns=sys  size=0x20
// sig: undefined sys_prx_load_module_on_memcontainer(void)
// callers(0): 
// callees(0): 

void sys::sys_prx_load_module_on_memcontainer(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x12])();
  return;
}



//==== 00650724  ns=sys  size=0x20
// sig: undefined sys_lwmutex_trylock(void)
// callers(3): 005fc20c FUN_005fc20c; 005fc2ec FUN_005fc2ec; 0063042c FUN_0063042c
// callees(0): 

void sys::sys_lwmutex_trylock(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x13])();
  return;
}



//==== 00650744  ns=sys  size=0x20
// sig: undefined sys_ppu_thread_exit(void)
// callers(17): 004e7534 FUN_004e7534; 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8a70 idol::SaveSystem_PS::AutoSaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting; 004ef178 FUN_004ef178; 004ef218 FUN_004ef218; 004f06ac FUN_004f06ac; 004f0828 FUN_004f0828; 0050476c FUN_0050476c; 005083fc FUN_005083fc; 0052d79c FUN_0052d79c; 0052d7c4 FUN_0052d7c4; 005fd570 FUN_005fd570; 0063fc80 FUN_0063fc80; 0064acbc FUN_0064acbc; 0064b924 FUN_0064b924
// callees(0): 

void sys::sys_ppu_thread_exit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x14])();
  return;
}



//==== 00650764  ns=sys  size=0x20
// sig: undefined sys_mmapper_allocate_memory(void)
// callers(2): 004e6770 FUN_004e6770; 004e68bc FUN_004e68bc
// callees(0): 

void sys::sys_mmapper_allocate_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x15])();
  return;
}



//==== 00650784  ns=sys  size=0x20
// sig: undefined sys_lwmutex_destroy(void)
// callers(14): 0052d2c0 FUN_0052d2c0; 0052df14 FUN_0052df14; 005d045c FUN_005d045c; 005d0488 FUN_005d0488; 005d53a8 FUN_005d53a8; 005d53e8 FUN_005d53e8; 005e2e90 FUN_005e2e90; 005e3024 FUN_005e3024; 005fc490 FUN_005fc490; 005fc620 FUN_005fc620; 005fd308 FUN_005fd308; 0063049c FUN_0063049c; 0063fa4c FUN_0063fa4c; 0063fc58 FUN_0063fc58
// callees(0): 

void sys::sys_lwmutex_destroy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x16])();
  return;
}



//==== 006507a4  ns=sys  size=0x20
// sig: undefined sys_lwcond_create(void)
// callers(3): 0052d19c FUN_0052d19c; 0052e0b8 FUN_0052e0b8; 0063fb20 idol::CreateSndParsingThread
// callees(0): 

void sys::sys_lwcond_create(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x17])();
  return;
}



//==== 006507c4  ns=sys  size=0x20
// sig: undefined sys_mmapper_map_memory(void)
// callers(2): 004e6770 FUN_004e6770; 004e68bc FUN_004e68bc
// callees(0): 

void sys::sys_mmapper_map_memory(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006507e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x18])();
  return;
}



//==== 006507e4  ns=sys  size=0x20
// sig: undefined sys_process_exit(void)
// callers(2): 00014c44 crt0::_exit; 005c4840 idol::abort
// callees(0): 

void sys::sys_process_exit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x19])();
  return;
}



//==== 00650804  ns=sys  size=0x20
// sig: undefined sys_lwcond_signal_all(void)
// callers(1): 0052dc40 FUN_0052dc40
// callees(0): 

void sys::sys_lwcond_signal_all(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1a])();
  return;
}



//==== 00650824  ns=sys  size=0x20
// sig: undefined sys_prx_load_module_by_fd(void)
// callers(0): 
// callees(0): 

void sys::sys_prx_load_module_by_fd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1b])();
  return;
}



//==== 00650844  ns=sys  size=0x20
// sig: undefined sys_lwcond_signal(void)
// callers(3): 0052dcf0 FUN_0052dcf0; 0063fa08 FUN_0063fa08; 0063fa4c FUN_0063fa4c
// callees(0): 

void sys::sys_lwcond_signal(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sysPrxForUser_func_address_table[0x1c])();
  return;
}



