# game/update/moby37.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0035511c:   # 0x35511c, 0x6c bytes
  035511c  lis 4, 165
  0355120  sldi 3, 3, 2
  0355124  addic 4, 4, -28284
  0355128  extsw 3, 3
  035512c  lwzx 3, 4, 3
  0355130  cmpwi 3, 0
  0355134  bt 2, 0x355184
  0355138  lis 6, 164
  035513c  li 5, 2
  0355140  lis 4, 16256
  0355144  lhz 7, 0(3)
  0355148  lwz 8, -28512(6)
  035514c  rlwinm 7, 7, 8, 9, 23
  0355150  addc 7, 8, 7
  0355154  clrldi 7, 7, 32
  0355158  lhz 8, 166(7)
  035515c  cmpwi 8, 367
  0355160  bf 2, 0x355170
  0355164  lwz 8, 120(7)
  0355168  stb 5, 32(7)
  035516c  stw 4, 40(8)
  0355170  lhz 7, 0(3)
  0355174  addic 3, 3, 2
  0355178  extsh 7, 7
  035517c  cmpwi 7, 0
  0355180  bf 0, 0x355144
  0355184  blr

FUN_00355188:   # 0x355188, 0x6c bytes
  0355188  lis 4, 165
  035518c  sldi 3, 3, 2
  0355190  addic 4, 4, -28284
  0355194  extsw 3, 3
  0355198  lwzx 3, 4, 3
  035519c  cmpwi 3, 0
  03551a0  bt 2, 0x3551f0
  03551a4  lis 6, 164
  03551a8  li 5, 2
  03551ac  li 4, 0
  03551b0  lhz 7, 0(3)
  03551b4  lwz 8, -28512(6)
  03551b8  rlwinm 7, 7, 8, 9, 23
  03551bc  addc 7, 8, 7
  03551c0  clrldi 7, 7, 32
  03551c4  lhz 8, 166(7)
  03551c8  cmpwi 8, 367
  03551cc  bf 2, 0x3551dc
  03551d0  lwz 8, 120(7)
  03551d4  stb 5, 32(7)
  03551d8  stw 4, 40(8)
  03551dc  lhz 7, 0(3)
  03551e0  addic 3, 3, 2
  03551e4  extsh 7, 7
  03551e8  cmpwi 7, 0
  03551ec  bf 0, 0x3551b0
  03551f0  blr

UpdateMoby_37:   # 0x355200, 0xf0 bytes
  0355200  stdu 1, -128(1)
  0355204  mflr 0
  0355208  std 0, 144(1)
  035520c  lis 4, 151
  0355210  lfs 1, 20(3)
  0355214  addic 4, 4, -25376
  0355218  lfs 2, 16(3)
  035521c  lfs 3, 132(4)
  0355220  lfs 4, 128(4)
  0355224  fsubs 1, 1, 3
  0355228  fsubs 2, 2, 4
  035522c  lfs 3, 24(3)
  0355230  lfs 4, 136(4)
  0355234  fsubs 3, 3, 4
  0355238  std 31, 120(1)
  035523c  lis 4, 53
  0355240  ori 31, 3, 0
  0355244  fmuls 1, 1, 1
  0355248  addi 4, 4, 20984
  035524c  fmadds 1, 2, 2, 1
  0355250  lfs 2, 0(4)
  0355254  fmadds 1, 3, 3, 1
  0355258  fsqrts 1, 1
  035525c  fcmpu 0, 1, 2
  0355260  cror 6, 1, 2
  0355264  bt 6, 0x3552dc
  0355268  lis 3, 151
  035526c  li 5, 1
  0355270  addic 6, 3, -16400
  0355274  lis 4, 161
  0355278  lis 7, 101
  035527c  addic 3, 4, 23692
  0355280  addic 4, 7, 25972
  0355284  stb 5, 1(6)
  0355288  bl 0x5cd2a8
  035528c  nop
  0355290  lis 3, 53
  0355294  li 4, 4
  0355298  vspltisw 2, -1
  035529c  addi 3, 3, 20984
  03552a0  lis 5, 114
  03552a4  li 6, -3056
  03552a8  vslw 2, 2, 2
  03552ac  lvlx 3, 4, 3
  03552b0  lis 4, 161
  03552b4  vspltw 3, 3, 0
  03552b8  lvlx 4, 6, 5
  03552bc  li 5, 23680
  03552c0  vmaddfp 2, 4, 3, 2
  03552c4  ori 3, 31, 0
  03552c8  vctsxs 2, 2, 0
  03552cc  vspltw 2, 2, 0
  03552d0  stvewx 2, 5, 4
  03552d4  bl 0xefb38
  03552d8  nop
  03552dc  ld 0, 144(1)
  03552e0  mtlr 0
  03552e4  ld 31, 120(1)
  03552e8  addi 1, 1, 128
  03552ec  blr
