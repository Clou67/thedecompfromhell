# game/update/moby1049.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001a1e24:   # 0x1a1e24, 0x6c bytes
  01a1e24  lis 4, 165
  01a1e28  sldi 3, 3, 2
  01a1e2c  addic 4, 4, -28284
  01a1e30  extsw 3, 3
  01a1e34  lwzx 3, 4, 3
  01a1e38  cmpwi 3, 0
  01a1e3c  bt 2, 0x1a1e8c
  01a1e40  lis 6, 164
  01a1e44  li 5, 18
  01a1e48  li 4, 0
  01a1e4c  lhz 7, 0(3)
  01a1e50  lwz 8, -28512(6)
  01a1e54  rlwinm 7, 7, 8, 9, 23
  01a1e58  addc 7, 8, 7
  01a1e5c  clrldi 7, 7, 32
  01a1e60  lhz 8, 52(7)
  01a1e64  stb 5, 32(7)
  01a1e68  ori 8, 8, 1
  01a1e6c  stw 4, 148(7)
  01a1e70  rlwimi 8, 4, 0, 19, 19
  01a1e74  sth 8, 52(7)
  01a1e78  lhz 7, 0(3)
  01a1e7c  addic 3, 3, 2
  01a1e80  extsh 7, 7
  01a1e84  cmpwi 7, 0
  01a1e88  bf 0, 0x1a1e4c
  01a1e8c  blr

FUN_001a1e90:   # 0x1a1e90, 0x7c bytes
  01a1e90  lis 4, 165
  01a1e94  sldi 3, 3, 2
  01a1e98  addic 4, 4, -28284
  01a1e9c  extsw 3, 3
  01a1ea0  lwzx 3, 4, 3
  01a1ea4  cmpwi 3, 0
  01a1ea8  bt 2, 0x1a1f08
  01a1eac  lis 5, 164
  01a1eb0  li 4, 0
  01a1eb4  lhz 6, 0(3)
  01a1eb8  lwz 7, -28512(5)
  01a1ebc  rlwinm 6, 6, 8, 9, 23
  01a1ec0  addc 6, 7, 6
  01a1ec4  clrldi 6, 6, 32
  01a1ec8  lbz 7, 32(6)
  01a1ecc  cmpwi 7, 18
  01a1ed0  bf 2, 0x1a1ef4
  01a1ed4  lwz 7, 36(6)
  01a1ed8  lhz 8, 52(6)
  01a1edc  stb 4, 32(6)
  01a1ee0  rlwinm 8, 8, 0, 0, 30
  01a1ee4  ori 8, 8, 4096
  01a1ee8  lwz 7, 16(7)
  01a1eec  stw 7, 148(6)
  01a1ef0  sth 8, 52(6)
  01a1ef4  lhz 6, 0(3)
  01a1ef8  addic 3, 3, 2
  01a1efc  extsh 6, 6
  01a1f00  cmpwi 6, 0
  01a1f04  bf 0, 0x1a1eb4
  01a1f08  blr

M1049_001a1f0c:   # 0x1a1f0c, 0x14 bytes
  01a1f0c  lis 3, 116
  01a1f10  lis 4, 1
  01a1f14  addic 3, 3, 1648
  01a1f18  stw 4, 72(3)
  01a1f1c  blr

M1049_001a1f28:   # 0x1a1f28, 0x134 bytes
  01a1f28  stdu 1, -160(1)
  01a1f2c  mflr 0
  01a1f30  std 0, 176(1)
  01a1f34  std 29, 136(1)
  01a1f38  ori 29, 3, 0
  01a1f3c  std 31, 152(1)
  01a1f40  li 3, 1049
  01a1f44  std 30, 144(1)
  01a1f48  ori 31, 5, 0
  01a1f4c  std 28, 128(1)
  01a1f50  std 27, 120(1)
  01a1f54  ori 30, 4, 0
  01a1f58  bl 0xefa28
  01a1f5c  nop
  01a1f60  ori 28, 3, 0
  01a1f64  cmpwi 28, 0
  01a1f68  bt 2, 0x1a2034
  01a1f6c  li 3, 255
  01a1f70  lwz 27, 120(28)
  01a1f74  li 4, 1
  01a1f78  stb 3, 48(28)
  01a1f7c  sth 3, 50(28)
  01a1f80  stb 4, 49(28)
  01a1f84  bl 0xfcc68
  01a1f88  nop
  01a1f8c  stfs 1, 64(28)
  01a1f90  bl 0xfcc68
  01a1f94  nop
  01a1f98  stfs 1, 68(28)
  01a1f9c  bl 0xfcc68
  01a1fa0  nop
  01a1fa4  stfs 1, 72(28)
  01a1fa8  li 5, 48
  01a1fac  lfs 1, 0(29)
  01a1fb0  stfs 1, 16(28)
  01a1fb4  lfs 1, 4(29)
  01a1fb8  stfs 1, 20(28)
  01a1fbc  lfs 1, 8(29)
  01a1fc0  stfs 1, 24(28)
  01a1fc4  lfs 1, 12(29)
  01a1fc8  stfs 1, 28(28)
  01a1fcc  lfs 1, 0(30)
  01a1fd0  stfs 1, 0(27)
  01a1fd4  lfs 1, 4(30)
  01a1fd8  lhz 3, 52(28)
  01a1fdc  stfs 1, 4(27)
  01a1fe0  ori 4, 3, 512
  01a1fe4  lfs 1, 8(30)
  01a1fe8  ori 3, 28, 0
  01a1fec  stw 31, 16(27)
  01a1ff0  stfs 1, 8(27)
  01a1ff4  lfs 1, 12(30)
  01a1ff8  sth 4, 52(28)
  01a1ffc  stfs 1, 12(27)
  01a2000  stb 5, 35(28)
  01a2004  bl 0xf31a8
  01a2008  nop
  01a200c  lis 3, 26
  01a2010  lis 5, -32768
  01a2014  addi 4, 3, 7968
  01a2018  li 6, 128
  01a201c  li 7, -1
  01a2020  ori 3, 28, 0
  01a2024  ori 5, 5, 16639
  01a2028  lfs 1, 0(4)
  01a202c  bl 0x127ea8
  01a2030  nop
  01a2034  ori 3, 28, 0
  01a2038  ld 0, 176(1)
  01a203c  mtlr 0
  01a2040  ld 27, 120(1)
  01a2044  ld 28, 128(1)
  01a2048  ld 29, 136(1)
  01a204c  ld 30, 144(1)
  01a2050  ld 31, 152(1)
  01a2054  addi 1, 1, 160
  01a2058  blr

UpdateMoby_1049:   # 0x1a2090, 0x2f0 bytes
  01a2090  stdu 1, -240(1)
  01a2094  mflr 0
  01a2098  std 0, 256(1)
  01a209c  std 30, 224(1)
  01a20a0  lwz 30, 120(3)
  01a20a4  lfs 1, 16(3)
  01a20a8  lfs 2, 20(3)
  01a20ac  stfs 1, 192(1)
  01a20b0  lfs 3, 24(3)
  01a20b4  stfs 2, 196(1)
  01a20b8  lfs 4, 28(3)
  01a20bc  stfs 3, 200(1)
  01a20c0  stfs 4, 204(1)
  01a20c4  lfs 4, 0(30)
  01a20c8  lis 4, 26
  01a20cc  fadds 1, 1, 4
  01a20d0  addi 4, 4, 8284
  01a20d4  lis 5, 114
  01a20d8  std 31, 232(1)
  01a20dc  lis 6, 114
  01a20e0  ori 31, 3, 0
  01a20e4  stfs 1, 16(3)
  01a20e8  lfs 1, 4(30)
  01a20ec  fadds 1, 2, 1
  01a20f0  stfs 1, 20(3)
  01a20f4  lfs 1, 8(30)
  01a20f8  lwz 7, 36(3)
  01a20fc  fadds 1, 3, 1
  01a2100  stfs 1, 24(3)
  01a2104  lfs 1, 0(4)
  01a2108  lfs 2, 8(30)
  01a210c  lfs 3, -3048(5)
  01a2110  fnmsubs 1, 3, 1, 2
  01a2114  stfs 1, 8(30)
  01a2118  lfs 3, 4(4)
  01a211c  lfs 2, 72(3)
  01a2120  lfs 4, -3052(6)
  01a2124  lfs 1, 44(3)
  01a2128  fmadds 2, 4, 3, 2
  01a212c  stfs 2, 72(3)
  01a2130  lfs 2, 8(4)
  01a2134  lfs 3, 36(7)
  01a2138  fmuls 2, 3, 2
  01a213c  fcmpu 0, 1, 2
  01a2140  std 29, 216(1)
  01a2144  cror 6, 1, 2
  01a2148  bt 6, 0x1a2160
  01a214c  lis 3, 26
  01a2150  addi 3, 3, 8284
  01a2154  lfs 2, 12(3)
  01a2158  fmuls 1, 1, 2
  01a215c  stfs 1, 44(31)
  01a2160  lis 3, 161
  01a2164  lis 4, 21845
  01a2168  ori 4, 4, 21846
  01a216c  lwz 3, 1808(3)
  01a2170  mulhw 4, 4, 3
  01a2174  srwi 5, 4, 31
  01a2178  addc 4, 4, 5
  01a217c  addc 5, 4, 4
  01a2180  addc 4, 4, 5
  01a2184  subc 3, 3, 4
  01a2188  cmpwi 3, 0
  01a218c  bf 2, 0x1a21b0
  01a2190  lis 3, 26
  01a2194  li 4, 0
  01a2198  addi 5, 3, 8284
  01a219c  ori 3, 31, 0
  01a21a0  lfs 1, 16(5)
  01a21a4  lfs 2, 20(5)
  01a21a8  bl 0x1314c8
  01a21ac  nop
  01a21b0  addic 29, 31, 16
  01a21b4  addic 3, 1, 192
  01a21b8  lwz 6, 16(30)
  01a21bc  ori 4, 29, 0
  01a21c0  li 5, 0
  01a21c4  li 7, 0
  01a21c8  bl 0x57820
  01a21cc  nop
  01a21d0  cmpwi 3, 0
  01a21d4  bf 2, 0x1a2200
  01a21d8  lis 3, 26
  01a21dc  lwz 6, 16(30)
  01a21e0  li 5, 0
  01a21e4  addi 4, 3, 8284
  01a21e8  ori 3, 29, 0
  01a21ec  lfs 1, 24(4)
  01a21f0  bl 0x59e20
  01a21f4  nop
  01a21f8  cmpwi 3, 0
  01a21fc  bt 2, 0x1a22c8
  01a2200  lis 3, 161
  01a2204  addic 3, 3, 2368
  01a2208  lwz 3, 24(3)
  01a220c  cmpwi 3, 0
  01a2210  bt 2, 0x1a2230
  01a2214  lhz 3, 166(3)
  01a2218  cmpwi 6, 3, 1049
  01a221c  cmpwi 3, 1045
  01a2220  cror 2, 2, 26
  01a2224  cmpwi 1, 3, 1106
  01a2228  bt 2, 0x1a22c8
  01a222c  bt 6, 0x1a22c8
  01a2230  lbz 3, 49(31)
  01a2234  cmpwi 3, 0
  01a2238  bt 2, 0x1a22a4
  01a223c  lis 3, 26
  01a2240  li 6, 0
  01a2244  addi 4, 3, 8284
  01a2248  li 7, 1
  01a224c  li 11, -1
  01a2250  ori 3, 31, 0
  01a2254  li 5, 0
  01a2258  lfs 3, 36(4)
  01a225c  lfs 1, 28(4)
  01a2260  li 8, 0
  01a2264  lfs 2, 32(4)
  01a2268  li 9, 3
  01a226c  lfs 5, 40(4)
  01a2270  li 10, 5
  01a2274  lfs 6, 12(4)
  01a2278  fmr 4, 3
  01a227c  lfs 7, 44(4)
  01a2280  std 6, 144(1)
  01a2284  std 6, 160(1)
  01a2288  ori 4, 30, 0
  01a228c  std 7, 168(1)
  01a2290  std 11, 176(1)
  01a2294  std 6, 184(1)
  01a2298  bl 0x10e030
  01a229c  nop
  01a22a0  b 0x1a22b8
  01a22a4  li 3, 0
  01a22a8  li 4, 0
  01a22ac  ori 5, 31, 0
  01a22b0  bl 0x15d12c
  01a22b4  nop
  01a22b8  ori 3, 31, 0
  01a22bc  bl 0xefb38
  01a22c0  nop
  01a22c4  b 0x1a2364
  01a22c8  lwz 3, 16(31)
  01a22cc  lis 4, 16384
  01a22d0  srawi 5, 3, 31
  01a22d4  srwi 6, 5, 1
  01a22d8  xor 3, 6, 3
  01a22dc  subc 3, 3, 5
  01a22e0  cmpw 3, 4
  01a22e4  bt 0, 0x1a2358
  01a22e8  lis 4, 17535
  01a22ec  ori 4, 4, 16384
  01a22f0  cmpw 3, 4
  01a22f4  bt 1, 0x1a2358
  01a22f8  lwz 5, 20(31)
  01a22fc  lis 3, 17535
  01a2300  lis 4, 16384
  01a2304  srawi 6, 5, 31
  01a2308  ori 3, 3, 16384
  01a230c  srwi 7, 6, 1
  01a2310  xor 5, 7, 5
  01a2314  subc 5, 5, 6
  01a2318  cmpw 1, 5, 3
  01a231c  cmpw 5, 4
  01a2320  cror 2, 0, 5
  01a2324  bt 2, 0x1a2358
  01a2328  lwz 5, 24(31)
  01a232c  lis 3, 17535
  01a2330  lis 4, 16384
  01a2334  srawi 6, 5, 31
  01a2338  ori 3, 3, 16384
  01a233c  srwi 7, 6, 1
  01a2340  xor 5, 7, 5
  01a2344  subc 5, 5, 6
  01a2348  cmpw 5, 4
  01a234c  cmpw 1, 5, 3
  01a2350  bt 0, 0x1a2358
  01a2354  bf 5, 0x1a2364
  01a2358  ori 3, 31, 0
  01a235c  bl 0xefb38
  01a2360  nop
  01a2364  ld 0, 256(1)
  01a2368  mtlr 0
  01a236c  ld 29, 216(1)
  01a2370  ld 30, 224(1)
  01a2374  ld 31, 232(1)
  01a2378  addi 1, 1, 240
  01a237c  blr

M1049_001a2380:   # 0x1a2380, 0x14 bytes
  01a2380  lis 3, 116
  01a2384  lis 4, 1
  01a2388  addic 3, 3, 1760
  01a238c  stw 4, 72(3)
  01a2390  blr
