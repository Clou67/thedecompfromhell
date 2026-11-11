# sdk/sys.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

socketpoll:   # 0x6501a4, 0x20 bytes
  06501a4  li 12, 0
  06501a8  oris 12, 12, 112
  06501ac  lwz 12, 7128(12)
  06501b0  std 2, 40(1)
  06501b4  lwz 0, 0(12)
  06501b8  lwz 2, 4(12)
  06501bc  mtctr 0
  06501c0  bctr

sys_net_initialize_network_ex:   # 0x6501c4, 0x20 bytes
  06501c4  li 12, 0
  06501c8  oris 12, 12, 112
  06501cc  lwz 12, 7132(12)
  06501d0  std 2, 40(1)
  06501d4  lwz 0, 0(12)
  06501d8  lwz 2, 4(12)
  06501dc  mtctr 0
  06501e0  bctr

getsockname:   # 0x6501e4, 0x20 bytes
  06501e4  li 12, 0
  06501e8  oris 12, 12, 112
  06501ec  lwz 12, 7136(12)
  06501f0  std 2, 40(1)
  06501f4  lwz 0, 0(12)
  06501f8  lwz 2, 4(12)
  06501fc  mtctr 0
  0650200  bctr

recvfrom:   # 0x650204, 0x20 bytes
  0650204  li 12, 0
  0650208  oris 12, 12, 112
  065020c  lwz 12, 7140(12)
  0650210  std 2, 40(1)
  0650214  lwz 0, 0(12)
  0650218  lwz 2, 4(12)
  065021c  mtctr 0
  0650220  bctr

listen:   # 0x650224, 0x20 bytes
  0650224  li 12, 0
  0650228  oris 12, 12, 112
  065022c  lwz 12, 7144(12)
  0650230  std 2, 40(1)
  0650234  lwz 0, 0(12)
  0650238  lwz 2, 4(12)
  065023c  mtctr 0
  0650240  bctr

socketselect:   # 0x650244, 0x20 bytes
  0650244  li 12, 0
  0650248  oris 12, 12, 112
  065024c  lwz 12, 7148(12)
  0650250  std 2, 40(1)
  0650254  lwz 0, 0(12)
  0650258  lwz 2, 4(12)
  065025c  mtctr 0
  0650260  bctr

getsockopt:   # 0x650264, 0x20 bytes
  0650264  li 12, 0
  0650268  oris 12, 12, 112
  065026c  lwz 12, 7152(12)
  0650270  std 2, 40(1)
  0650274  lwz 0, 0(12)
  0650278  lwz 2, 4(12)
  065027c  mtctr 0
  0650280  bctr

_sys_net_errno_loc:   # 0x650284, 0x20 bytes
  0650284  li 12, 0
  0650288  oris 12, 12, 112
  065028c  lwz 12, 7156(12)
  0650290  std 2, 40(1)
  0650294  lwz 0, 0(12)
  0650298  lwz 2, 4(12)
  065029c  mtctr 0
  06502a0  bctr

connect:   # 0x6502a4, 0x20 bytes
  06502a4  li 12, 0
  06502a8  oris 12, 12, 112
  06502ac  lwz 12, 7160(12)
  06502b0  std 2, 40(1)
  06502b4  lwz 0, 0(12)
  06502b8  lwz 2, 4(12)
  06502bc  mtctr 0
  06502c0  bctr

socketclose:   # 0x6502c4, 0x20 bytes
  06502c4  li 12, 0
  06502c8  oris 12, 12, 112
  06502cc  lwz 12, 7164(12)
  06502d0  std 2, 40(1)
  06502d4  lwz 0, 0(12)
  06502d8  lwz 2, 4(12)
  06502dc  mtctr 0
  06502e0  bctr

gethostbyname:   # 0x6502e4, 0x20 bytes
  06502e4  li 12, 0
  06502e8  oris 12, 12, 112
  06502ec  lwz 12, 7168(12)
  06502f0  std 2, 40(1)
  06502f4  lwz 0, 0(12)
  06502f8  lwz 2, 4(12)
  06502fc  mtctr 0
  0650300  bctr

setsockopt:   # 0x650304, 0x20 bytes
  0650304  li 12, 0
  0650308  oris 12, 12, 112
  065030c  lwz 12, 7172(12)
  0650310  std 2, 40(1)
  0650314  lwz 0, 0(12)
  0650318  lwz 2, 4(12)
  065031c  mtctr 0
  0650320  bctr

sendto:   # 0x650324, 0x20 bytes
  0650324  li 12, 0
  0650328  oris 12, 12, 112
  065032c  lwz 12, 7176(12)
  0650330  std 2, 40(1)
  0650334  lwz 0, 0(12)
  0650338  lwz 2, 4(12)
  065033c  mtctr 0
  0650340  bctr

socket:   # 0x650344, 0x20 bytes
  0650344  li 12, 0
  0650348  oris 12, 12, 112
  065034c  lwz 12, 7180(12)
  0650350  std 2, 40(1)
  0650354  lwz 0, 0(12)
  0650358  lwz 2, 4(12)
  065035c  mtctr 0
  0650360  bctr

shutdown:   # 0x650364, 0x20 bytes
  0650364  li 12, 0
  0650368  oris 12, 12, 112
  065036c  lwz 12, 7184(12)
  0650370  std 2, 40(1)
  0650374  lwz 0, 0(12)
  0650378  lwz 2, 4(12)
  065037c  mtctr 0
  0650380  bctr

inet_aton:   # 0x650384, 0x20 bytes
  0650384  li 12, 0
  0650388  oris 12, 12, 112
  065038c  lwz 12, 7188(12)
  0650390  std 2, 40(1)
  0650394  lwz 0, 0(12)
  0650398  lwz 2, 4(12)
  065039c  mtctr 0
  06503a0  bctr

bind:   # 0x6503a4, 0x20 bytes
  06503a4  li 12, 0
  06503a8  oris 12, 12, 112
  06503ac  lwz 12, 7192(12)
  06503b0  std 2, 40(1)
  06503b4  lwz 0, 0(12)
  06503b8  lwz 2, 4(12)
  06503bc  mtctr 0
  06503c0  bctr

accept:   # 0x6503c4, 0x20 bytes
  06503c4  li 12, 0
  06503c8  oris 12, 12, 112
  06503cc  lwz 12, 7196(12)
  06503d0  std 2, 40(1)
  06503d4  lwz 0, 0(12)
  06503d8  lwz 2, 4(12)
  06503dc  mtctr 0
  06503e0  bctr

send:   # 0x6503e4, 0x20 bytes
  06503e4  li 12, 0
  06503e8  oris 12, 12, 112
  06503ec  lwz 12, 7200(12)
  06503f0  std 2, 40(1)
  06503f4  lwz 0, 0(12)
  06503f8  lwz 2, 4(12)
  06503fc  mtctr 0
  0650400  bctr

recv:   # 0x650404, 0x20 bytes
  0650404  li 12, 0
  0650408  oris 12, 12, 112
  065040c  lwz 12, 7204(12)
  0650410  std 2, 40(1)
  0650414  lwz 0, 0(12)
  0650418  lwz 2, 4(12)
  065041c  mtctr 0
  0650420  bctr

sys_net_free_thread_context:   # 0x650424, 0x20 bytes
  0650424  li 12, 0
  0650428  oris 12, 12, 112
  065042c  lwz 12, 7208(12)
  0650430  std 2, 40(1)
  0650434  lwz 0, 0(12)
  0650438  lwz 2, 4(12)
  065043c  mtctr 0
  0650440  bctr

cellNetCtlTerm:   # 0x650444, 0x20 bytes
  0650444  li 12, 0
  0650448  oris 12, 12, 112
  065044c  lwz 12, 6516(12)
  0650450  std 2, 40(1)
  0650454  lwz 0, 0(12)
  0650458  lwz 2, 4(12)
  065045c  mtctr 0
  0650460  bctr

cellNetCtlGetInfo:   # 0x650464, 0x20 bytes
  0650464  li 12, 0
  0650468  oris 12, 12, 112
  065046c  lwz 12, 6520(12)
  0650470  std 2, 40(1)
  0650474  lwz 0, 0(12)
  0650478  lwz 2, 4(12)
  065047c  mtctr 0
  0650480  bctr

cellAudioPortStop:   # 0x650484, 0x20 bytes
  0650484  li 12, 0
  0650488  oris 12, 12, 112
  065048c  lwz 12, 6376(12)
  0650490  std 2, 40(1)
  0650494  lwz 0, 0(12)
  0650498  lwz 2, 4(12)
  065049c  mtctr 0
  06504a0  bctr

cellAudioQuit:   # 0x6504a4, 0x20 bytes
  06504a4  li 12, 0
  06504a8  oris 12, 12, 112
  06504ac  lwz 12, 6380(12)
  06504b0  std 2, 40(1)
  06504b4  lwz 0, 0(12)
  06504b8  lwz 2, 4(12)
  06504bc  mtctr 0
  06504c0  bctr

sys_lwmutex_lock:   # 0x6504c4, 0x20 bytes
  06504c4  li 12, 0
  06504c8  oris 12, 12, 112
  06504cc  lwz 12, 6900(12)
  06504d0  std 2, 40(1)
  06504d4  lwz 0, 0(12)
  06504d8  lwz 2, 4(12)
  06504dc  mtctr 0
  06504e0  bctr

sys_lwmutex_unlock:   # 0x6504e4, 0x20 bytes
  06504e4  li 12, 0
  06504e8  oris 12, 12, 112
  06504ec  lwz 12, 6904(12)
  06504f0  std 2, 40(1)
  06504f4  lwz 0, 0(12)
  06504f8  lwz 2, 4(12)
  06504fc  mtctr 0
  0650500  bctr

sys_lwcond_destroy:   # 0x650504, 0x20 bytes
  0650504  li 12, 0
  0650508  oris 12, 12, 112
  065050c  lwz 12, 6908(12)
  0650510  std 2, 40(1)
  0650514  lwz 0, 0(12)
  0650518  lwz 2, 4(12)
  065051c  mtctr 0
  0650520  bctr

sys_ppu_thread_create:   # 0x650524, 0x20 bytes
  0650524  li 12, 0
  0650528  oris 12, 12, 112
  065052c  lwz 12, 6912(12)
  0650530  std 2, 40(1)
  0650534  lwz 0, 0(12)
  0650538  lwz 2, 4(12)
  065053c  mtctr 0
  0650540  bctr

sys_prx_load_module:   # 0x650544, 0x20 bytes
  0650544  li 12, 0
  0650548  oris 12, 12, 112
  065054c  lwz 12, 6916(12)
  0650550  std 2, 40(1)
  0650554  lwz 0, 0(12)
  0650558  lwz 2, 4(12)
  065055c  mtctr 0
  0650560  bctr

sys_lwcond_wait:   # 0x650564, 0x20 bytes
  0650564  li 12, 0
  0650568  oris 12, 12, 112
  065056c  lwz 12, 6920(12)
  0650570  std 2, 40(1)
  0650574  lwz 0, 0(12)
  0650578  lwz 2, 4(12)
  065057c  mtctr 0
  0650580  bctr

_sys_process_atexitspawn:   # 0x650584, 0x20 bytes
  0650584  li 12, 0
  0650588  oris 12, 12, 112
  065058c  lwz 12, 6924(12)
  0650590  std 2, 40(1)
  0650594  lwz 0, 0(12)
  0650598  lwz 2, 4(12)
  065059c  mtctr 0
  06505a0  bctr

sys_lwmutex_create:   # 0x6505a4, 0x20 bytes
  06505a4  li 12, 0
  06505a8  oris 12, 12, 112
  06505ac  lwz 12, 6928(12)
  06505b0  std 2, 40(1)
  06505b4  lwz 0, 0(12)
  06505b8  lwz 2, 4(12)
  06505bc  mtctr 0
  06505c0  bctr

sys_ppu_thread_get_id:   # 0x6505c4, 0x20 bytes
  06505c4  li 12, 0
  06505c8  oris 12, 12, 112
  06505cc  lwz 12, 6932(12)
  06505d0  std 2, 40(1)
  06505d4  lwz 0, 0(12)
  06505d8  lwz 2, 4(12)
  06505dc  mtctr 0
  06505e0  bctr

sys_mmapper_free_memory:   # 0x6505e4, 0x20 bytes
  06505e4  li 12, 0
  06505e8  oris 12, 12, 112
  06505ec  lwz 12, 6936(12)
  06505f0  std 2, 40(1)
  06505f4  lwz 0, 0(12)
  06505f8  lwz 2, 4(12)
  06505fc  mtctr 0
  0650600  bctr

sys_prx_register_library:   # 0x650604, 0x20 bytes
  0650604  li 12, 0
  0650608  oris 12, 12, 112
  065060c  lwz 12, 6940(12)
  0650610  std 2, 40(1)
  0650614  lwz 0, 0(12)
  0650618  lwz 2, 4(12)
  065061c  mtctr 0
  0650620  bctr

sys_mmapper_unmap_memory:   # 0x650624, 0x20 bytes
  0650624  li 12, 0
  0650628  oris 12, 12, 112
  065062c  lwz 12, 6944(12)
  0650630  std 2, 40(1)
  0650634  lwz 0, 0(12)
  0650638  lwz 2, 4(12)
  065063c  mtctr 0
  0650640  bctr

sys_process_is_stack:   # 0x650644, 0x20 bytes
  0650644  li 12, 0
  0650648  oris 12, 12, 112
  065064c  lwz 12, 6948(12)
  0650650  std 2, 40(1)
  0650654  lwz 0, 0(12)
  0650658  lwz 2, 4(12)
  065065c  mtctr 0
  0650660  bctr

sys_initialize_tls:   # 0x650664, 0x20 bytes
  0650664  li 12, 0
  0650668  oris 12, 12, 112
  065066c  lwz 12, 6952(12)
  0650670  std 2, 40(1)
  0650674  lwz 0, 0(12)
  0650678  lwz 2, 4(12)
  065067c  mtctr 0
  0650680  bctr

sys_time_get_system_time:   # 0x650684, 0x20 bytes
  0650684  li 12, 0
  0650688  oris 12, 12, 112
  065068c  lwz 12, 6956(12)
  0650690  std 2, 40(1)
  0650694  lwz 0, 0(12)
  0650698  lwz 2, 4(12)
  065069c  mtctr 0
  06506a0  bctr

_sys_process_at_Exitspawn:   # 0x6506a4, 0x20 bytes
  06506a4  li 12, 0
  06506a8  oris 12, 12, 112
  06506ac  lwz 12, 6960(12)
  06506b0  std 2, 40(1)
  06506b4  lwz 0, 0(12)
  06506b8  lwz 2, 4(12)
  06506bc  mtctr 0
  06506c0  bctr

sys_prx_exitspawn_with_level:   # 0x6506c4, 0x20 bytes
  06506c4  li 12, 0
  06506c8  oris 12, 12, 112
  06506cc  lwz 12, 6964(12)
  06506d0  std 2, 40(1)
  06506d4  lwz 0, 0(12)
  06506d8  lwz 2, 4(12)
  06506dc  mtctr 0
  06506e0  bctr

sys_prx_load_module_on_memcontainer_by_fd:   # 0x6506e4, 0x20 bytes
  06506e4  li 12, 0
  06506e8  oris 12, 12, 112
  06506ec  lwz 12, 6968(12)
  06506f0  std 2, 40(1)
  06506f4  lwz 0, 0(12)
  06506f8  lwz 2, 4(12)
  06506fc  mtctr 0
  0650700  bctr

sys_prx_load_module_on_memcontainer:   # 0x650704, 0x20 bytes
  0650704  li 12, 0
  0650708  oris 12, 12, 112
  065070c  lwz 12, 6972(12)
  0650710  std 2, 40(1)
  0650714  lwz 0, 0(12)
  0650718  lwz 2, 4(12)
  065071c  mtctr 0
  0650720  bctr

sys_lwmutex_trylock:   # 0x650724, 0x20 bytes
  0650724  li 12, 0
  0650728  oris 12, 12, 112
  065072c  lwz 12, 6976(12)
  0650730  std 2, 40(1)
  0650734  lwz 0, 0(12)
  0650738  lwz 2, 4(12)
  065073c  mtctr 0
  0650740  bctr

sys_ppu_thread_exit:   # 0x650744, 0x20 bytes
  0650744  li 12, 0
  0650748  oris 12, 12, 112
  065074c  lwz 12, 6980(12)
  0650750  std 2, 40(1)
  0650754  lwz 0, 0(12)
  0650758  lwz 2, 4(12)
  065075c  mtctr 0
  0650760  bctr

sys_mmapper_allocate_memory:   # 0x650764, 0x20 bytes
  0650764  li 12, 0
  0650768  oris 12, 12, 112
  065076c  lwz 12, 6984(12)
  0650770  std 2, 40(1)
  0650774  lwz 0, 0(12)
  0650778  lwz 2, 4(12)
  065077c  mtctr 0
  0650780  bctr

sys_lwmutex_destroy:   # 0x650784, 0x20 bytes
  0650784  li 12, 0
  0650788  oris 12, 12, 112
  065078c  lwz 12, 6988(12)
  0650790  std 2, 40(1)
  0650794  lwz 0, 0(12)
  0650798  lwz 2, 4(12)
  065079c  mtctr 0
  06507a0  bctr

sys_lwcond_create:   # 0x6507a4, 0x20 bytes
  06507a4  li 12, 0
  06507a8  oris 12, 12, 112
  06507ac  lwz 12, 6992(12)
  06507b0  std 2, 40(1)
  06507b4  lwz 0, 0(12)
  06507b8  lwz 2, 4(12)
  06507bc  mtctr 0
  06507c0  bctr

sys_mmapper_map_memory:   # 0x6507c4, 0x20 bytes
  06507c4  li 12, 0
  06507c8  oris 12, 12, 112
  06507cc  lwz 12, 6996(12)
  06507d0  std 2, 40(1)
  06507d4  lwz 0, 0(12)
  06507d8  lwz 2, 4(12)
  06507dc  mtctr 0
  06507e0  bctr

sys_process_exit:   # 0x6507e4, 0x20 bytes
  06507e4  li 12, 0
  06507e8  oris 12, 12, 112
  06507ec  lwz 12, 7000(12)
  06507f0  std 2, 40(1)
  06507f4  lwz 0, 0(12)
  06507f8  lwz 2, 4(12)
  06507fc  mtctr 0
  0650800  bctr

sys_lwcond_signal_all:   # 0x650804, 0x20 bytes
  0650804  li 12, 0
  0650808  oris 12, 12, 112
  065080c  lwz 12, 7004(12)
  0650810  std 2, 40(1)
  0650814  lwz 0, 0(12)
  0650818  lwz 2, 4(12)
  065081c  mtctr 0
  0650820  bctr

sys_prx_load_module_by_fd:   # 0x650824, 0x20 bytes
  0650824  li 12, 0
  0650828  oris 12, 12, 112
  065082c  lwz 12, 7008(12)
  0650830  std 2, 40(1)
  0650834  lwz 0, 0(12)
  0650838  lwz 2, 4(12)
  065083c  mtctr 0
  0650840  bctr

sys_lwcond_signal:   # 0x650844, 0x20 bytes
  0650844  li 12, 0
  0650848  oris 12, 12, 112
  065084c  lwz 12, 7012(12)
  0650850  std 2, 40(1)
  0650854  lwz 0, 0(12)
  0650858  lwz 2, 4(12)
  065085c  mtctr 0
  0650860  bctr
