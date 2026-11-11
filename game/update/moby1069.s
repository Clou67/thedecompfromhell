# game/update/moby1069.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1069_001b1eb8:   # 0x1b1eb8, 0x43c bytes
  01b1eb8  stdu 1, -448(1)
  01b1ebc  mflr 0
  01b1ec0  std 0, 464(1)
  01b1ec4  stfd 29, 424(1)
  01b1ec8  stfd 30, 432(1)
  01b1ecc  stfd 31, 440(1)
  01b1ed0  std 28, 392(1)
  01b1ed4  lwz 28, 120(3)
  01b1ed8  li 3, 1
  01b1edc  li 4, 5
  01b1ee0  li 5, 128
  01b1ee4  li 6, 3
  01b1ee8  li 7, 0
  01b1eec  li 8, 0
  01b1ef0  li 9, 1
  01b1ef4  std 31, 416(1)
  01b1ef8  std 30, 408(1)
  01b1efc  std 29, 400(1)
  01b1f00  std 27, 384(1)
  01b1f04  std 26, 376(1)
  01b1f08  std 25, 368(1)
  01b1f0c  std 24, 360(1)
  01b1f10  std 23, 352(1)
  01b1f14  std 22, 344(1)
  01b1f18  std 21, 336(1)
  01b1f1c  std 20, 328(1)
  01b1f20  li 10, 2
  01b1f24  bl 0x502f7c
  01b1f28  nop
  01b1f2c  ori 4, 3, 0
  01b1f30  li 3, 22
  01b1f34  bl 0x174f80
  01b1f38  nop
  01b1f3c  lis 31, 117
  01b1f40  lwz 3, 31632(31)
  01b1f44  extsw 3, 3
  01b1f48  bl 0x685c4
  01b1f4c  nop
  01b1f50  lwz 4, 31632(31)
  01b1f54  std 3, 296(1)
  01b1f58  extsw 3, 4
  01b1f5c  bl 0x685c4
  01b1f60  nop
  01b1f64  li 3, 0
  01b1f68  lis 9, 0
  01b1f6c  li 4, 0
  01b1f70  li 5, 1
  01b1f74  li 6, 1
  01b1f78  li 7, 1
  01b1f7c  li 8, 0
  01b1f80  ori 9, 9, 65424
  01b1f84  bl 0x502fd4
  01b1f88  nop
  01b1f8c  std 3, 304(1)
  01b1f90  li 4, 0
  01b1f94  li 3, 0
  01b1f98  li 5, 0
  01b1f9c  li 6, 0
  01b1fa0  li 7, 0
  01b1fa4  li 8, 0
  01b1fa8  bl 0x502f08
  01b1fac  nop
  01b1fb0  lis 4, 230
  01b1fb4  lis 5, 117
  01b1fb8  std 3, 288(1)
  01b1fbc  lis 6, 117
  01b1fc0  lis 3, 230
  01b1fc4  lis 7, 117
  01b1fc8  lwz 4, 8224(4)
  01b1fcc  lwz 5, 31620(5)
  01b1fd0  lwz 8, 31628(6)
  01b1fd4  lwz 6, 8228(3)
  01b1fd8  ori 3, 4, 0
  01b1fdc  lwz 7, 31624(7)
  01b1fe0  ori 4, 5, 0
  01b1fe4  ori 5, 6, 0
  01b1fe8  ori 6, 7, 0
  01b1fec  ori 7, 8, 0
  01b1ff0  bl 0x502ea8
  01b1ff4  nop
  01b1ff8  std 3, 312(1)
  01b1ffc  addic 3, 1, 112
  01b2000  bl 0x500af8
  01b2004  nop
  01b2008  li 29, 0
  01b200c  ori 31, 29, 0
  01b2010  lis 25, 117
  01b2014  lis 3, 27
  01b2018  addic 25, 25, 31644
  01b201c  addi 27, 3, 7844
  01b2020  lfs 1, 28(25)
  01b2024  stfs 1, 12(25)
  01b2028  lfs 29, 0(27)
  01b202c  lfs 2, 4(27)
  01b2030  fmr 1, 29
  01b2034  bl 0xfcbe8
  01b2038  nop
  01b203c  stfs 1, 28(25)
  01b2040  ori 30, 31, 0
  01b2044  lfs 30, 8(27)
  01b2048  ori 20, 1, 0
  01b204c  lfs 31, 12(27)
  01b2050  ori 21, 1, 0
  01b2054  ori 22, 1, 0
  01b2058  addic 23, 28, 560
  01b205c  addic 24, 28, 572
  01b2060  addic 26, 25, 4
  01b2064  addic 27, 1, 176
  01b2068  srawi 3, 30, 1
  01b206c  addze 3, 3
  01b2070  srawi 5, 30, 1
  01b2074  addze 5, 5
  01b2078  addc 3, 3, 29
  01b207c  sldi 5, 5, 1
  01b2080  sldi 3, 3, 4
  01b2084  subc 5, 30, 5
  01b2088  addc 4, 3, 23
  01b208c  addc 3, 3, 24
  01b2090  clrldi 4, 4, 32
  01b2094  cmpwi 5, 0
  01b2098  clrldi 3, 3, 32
  01b209c  lfs 4, 0(4)
  01b20a0  stfs 4, 0(27)
  01b20a4  lfs 3, 4(4)
  01b20a8  stfs 3, 4(27)
  01b20ac  lfs 2, 8(4)
  01b20b0  stfs 2, 8(27)
  01b20b4  lfs 1, 12(4)
  01b20b8  stfs 1, 12(27)
  01b20bc  bt 2, 0x1b217c
  01b20c0  lfs 5, 532(28)
  01b20c4  lfs 6, 528(28)
  01b20c8  fsubs 5, 3, 5
  01b20cc  fsubs 6, 4, 6
  01b20d0  lfs 7, 536(28)
  01b20d4  fsubs 7, 2, 7
  01b20d8  stfs 1, 12(27)
  01b20dc  fmuls 8, 5, 5
  01b20e0  ori 5, 3, 0
  01b20e4  lis 3, 230
  01b20e8  lis 4, 117
  01b20ec  fmadds 8, 6, 6, 8
  01b20f0  fmadds 8, 7, 7, 8
  01b20f4  fsqrts 8, 8
  01b20f8  fdivs 1, 30, 8
  01b20fc  fsub 9, 29, 8
  01b2100  fsub 10, 29, 8
  01b2104  fsub 11, 29, 8
  01b2108  fsub 12, 8, 29
  01b210c  fsub 13, 8, 29
  01b2110  fsub 8, 8, 29
  01b2114  fmuls 7, 1, 7
  01b2118  fmuls 5, 1, 5
  01b211c  fmuls 1, 1, 6
  01b2120  fsel 6, 9, 29, 7
  01b2124  fsel 9, 10, 29, 5
  01b2128  fsel 10, 11, 29, 1
  01b212c  fsel 6, 12, 6, 7
  01b2130  fsel 5, 13, 9, 5
  01b2134  fsel 1, 8, 10, 1
  01b2138  fsubs 2, 2, 6
  01b213c  fsubs 3, 3, 5
  01b2140  fsubs 1, 4, 1
  01b2144  stfs 2, 8(27)
  01b2148  stfs 3, 4(27)
  01b214c  stfs 1, 0(27)
  01b2150  lfs 1, 184(20)
  01b2154  lwz 3, 8236(3)
  01b2158  fsubs 1, 1, 31
  01b215c  lwz 4, 31640(4)
  01b2160  extsw 3, 3
  01b2164  extsw 4, 4
  01b2168  stfs 1, 184(20)
  01b216c  lfs 1, 0(5)
  01b2170  bl 0x5027bc
  01b2174  nop
  01b2178  b 0x1b21a0
  01b217c  lis 4, 230
  01b2180  lis 5, 117
  01b2184  lwz 4, 8232(4)
  01b2188  lwz 5, 31636(5)
  01b218c  lfs 1, 0(3)
  01b2190  extsw 3, 4
  01b2194  extsw 4, 5
  01b2198  bl 0x5027bc
  01b219c  nop
  01b21a0  lfs 1, 0(25)
  01b21a4  stw 3, 240(21)
  01b21a8  addic 30, 30, 1
  01b21ac  lfs 2, 0(26)
  01b21b0  addic 27, 27, 16
  01b21b4  stfs 1, 256(22)
  01b21b8  cmpwi 30, 4
  01b21bc  stfs 2, 260(22)
  01b21c0  addic 20, 20, 16
  01b21c4  addic 25, 25, 8
  01b21c8  addic 21, 21, 4
  01b21cc  addic 26, 26, 8
  01b21d0  addic 22, 22, 8
  01b21d4  bt 0, 0x1b2068
  01b21d8  lis 4, 161
  01b21dc  addic 3, 1, 176
  01b21e0  addic 27, 4, 24396
  01b21e4  addic 4, 1, 112
  01b21e8  li 5, 0
  01b21ec  li 7, 9
  01b21f0  lwz 6, 28(27)
  01b21f4  bl 0x72280
  01b21f8  nop
  01b21fc  lis 3, 27
  01b2200  ori 30, 31, 0
  01b2204  addi 5, 3, 7844
  01b2208  lwz 3, 28(27)
  01b220c  ori 4, 1, 0
  01b2210  lfs 1, 16(5)
  01b2214  srawi 5, 30, 1
  01b2218  addze 5, 5
  01b221c  sldi 5, 5, 1
  01b2220  subc 5, 30, 5
  01b2224  cmpwi 5, 0
  01b2228  bt 2, 0x1b2238
  01b222c  lfs 2, 184(4)
  01b2230  fadds 2, 2, 1
  01b2234  stfs 2, 184(4)
  01b2238  addic 30, 30, 1
  01b223c  addic 4, 4, 16
  01b2240  cmpwi 30, 4
  01b2244  bt 0, 0x1b2214
  01b2248  ori 6, 3, 0
  01b224c  addic 4, 1, 112
  01b2250  addic 3, 1, 176
  01b2254  li 5, 0
  01b2258  li 7, 9
  01b225c  bl 0x72280
  01b2260  nop
  01b2264  addic 29, 29, 1
  01b2268  cmpwi 29, 15
  01b226c  bt 0, 0x1b2010
  01b2270  li 3, 1
  01b2274  li 4, 5
  01b2278  li 10, 2
  01b227c  li 5, 96
  01b2280  li 6, 3
  01b2284  li 7, 0
  01b2288  li 8, 0
  01b228c  li 9, 1
  01b2290  bl 0x502f7c
  01b2294  nop
  01b2298  ori 4, 3, 0
  01b229c  li 3, 22
  01b22a0  bl 0x174f80
  01b22a4  nop
  01b22a8  ld 0, 464(1)
  01b22ac  mtlr 0
  01b22b0  lfd 29, 424(1)
  01b22b4  lfd 30, 432(1)
  01b22b8  lfd 31, 440(1)
  01b22bc  ld 20, 328(1)
  01b22c0  ld 21, 336(1)
  01b22c4  ld 22, 344(1)
  01b22c8  ld 23, 352(1)
  01b22cc  ld 24, 360(1)
  01b22d0  ld 25, 368(1)
  01b22d4  ld 26, 376(1)
  01b22d8  ld 27, 384(1)
  01b22dc  ld 28, 392(1)
  01b22e0  ld 29, 400(1)
  01b22e4  ld 30, 408(1)
  01b22e8  ld 31, 416(1)
  01b22ec  addi 1, 1, 448
  01b22f0  blr

FUN_001b22f4:   # 0x1b22f4, 0x78 bytes
  01b22f4  lis 4, 165
  01b22f8  sldi 3, 3, 2
  01b22fc  addic 4, 4, -28284
  01b2300  extsw 3, 3
  01b2304  lwzx 3, 4, 3
  01b2308  cmpwi 3, 0
  01b230c  bt 2, 0x1b2368
  01b2310  lis 6, 164
  01b2314  li 5, 17
  01b2318  li 4, 0
  01b231c  lhz 7, 0(3)
  01b2320  lwz 8, -28512(6)
  01b2324  rlwinm 7, 7, 8, 9, 23
  01b2328  addc 7, 8, 7
  01b232c  clrldi 7, 7, 32
  01b2330  lbz 8, 32(7)
  01b2334  cmpwi 8, 127
  01b2338  bf 0, 0x1b2354
  01b233c  lhz 8, 52(7)
  01b2340  stb 5, 32(7)
  01b2344  ori 8, 8, 1
  01b2348  stw 4, 148(7)
  01b234c  rlwimi 8, 4, 0, 19, 19
  01b2350  sth 8, 52(7)
  01b2354  lhz 7, 0(3)
  01b2358  addic 3, 3, 2
  01b235c  extsh 7, 7
  01b2360  cmpwi 7, 0
  01b2364  bf 0, 0x1b231c
  01b2368  blr

M1069_001b236c:   # 0x1b236c, 0x74 bytes
  01b236c  lis 4, 165
  01b2370  sldi 3, 3, 2
  01b2374  addic 5, 4, -28284
  01b2378  extsw 6, 3
  01b237c  lis 4, 164
  01b2380  li 3, 0
  01b2384  lwzx 5, 5, 6
  01b2388  lhz 6, 0(5)
  01b238c  lwz 7, -28512(4)
  01b2390  rlwinm 6, 6, 8, 9, 23
  01b2394  addc 6, 7, 6
  01b2398  clrldi 6, 6, 32
  01b239c  lbz 7, 32(6)
  01b23a0  cmpwi 7, 17
  01b23a4  bf 2, 0x1b23c8
  01b23a8  lwz 7, 36(6)
  01b23ac  lhz 8, 52(6)
  01b23b0  stb 3, 32(6)
  01b23b4  rlwinm 8, 8, 0, 0, 30
  01b23b8  ori 8, 8, 4096
  01b23bc  lwz 7, 16(7)
  01b23c0  stw 7, 148(6)
  01b23c4  sth 8, 52(6)
  01b23c8  lhz 6, 0(5)
  01b23cc  addic 5, 5, 2
  01b23d0  extsh 6, 6
  01b23d4  cmpwi 6, 0
  01b23d8  bf 0, 0x1b2388
  01b23dc  blr

M1069_001b23e0:   # 0x1b23e0, 0x14 bytes
  01b23e0  lis 3, 117
  01b23e4  lis 4, 1
  01b23e8  addic 3, 3, 31744
  01b23ec  stw 4, 72(3)
  01b23f0  blr

UpdateMoby_1069:   # 0x1b2480, 0xc2c bytes
  01b2480  stdu 1, -304(1)
  01b2484  mflr 0
  01b2488  std 0, 320(1)
  01b248c  stfd 24, 240(1)
  01b2490  stfd 25, 248(1)
  01b2494  stfd 26, 256(1)
  01b2498  stfd 27, 264(1)
  01b249c  stfd 28, 272(1)
  01b24a0  stfd 29, 280(1)
  01b24a4  stfd 30, 288(1)
  01b24a8  stfd 31, 296(1)
  01b24ac  std 27, 200(1)
  01b24b0  std 31, 232(1)
  01b24b4  ori 31, 3, 0
  01b24b8  std 29, 216(1)
  01b24bc  li 27, 0
  01b24c0  ori 29, 27, 0
  01b24c4  std 28, 208(1)
  01b24c8  lfs 31, 24(31)
  01b24cc  ori 28, 29, 0
  01b24d0  lfs 1, 16(31)
  01b24d4  lfs 2, 20(31)
  01b24d8  fneg 3, 1
  01b24dc  std 30, 224(1)
  01b24e0  fneg 2, 2
  01b24e4  lwz 30, 120(31)
  01b24e8  lfs 1, 64(31)
  01b24ec  lfs 4, 28(31)
  01b24f0  fneg 6, 31
  01b24f4  lfs 5, 68(31)
  01b24f8  stfs 4, 124(1)
  01b24fc  lfs 4, 72(31)
  01b2500  stfs 5, 132(1)
  01b2504  lfs 5, 76(31)
  01b2508  stfs 3, 112(1)
  01b250c  lbz 3, 188(31)
  01b2510  stfs 2, 116(1)
  01b2514  stfs 1, 128(1)
  01b2518  cmpwi 1, 3, 2
  01b251c  lwz 4, 160(30)
  01b2520  stfs 4, 136(1)
  01b2524  cmpwi 4, -1
  01b2528  stfs 6, 120(1)
  01b252c  stfs 5, 140(1)
  01b2530  bt 2, 0x1b254c
  01b2534  lis 5, 164
  01b2538  slwi 4, 4, 8
  01b253c  lwz 5, -28512(5)
  01b2540  addc 27, 5, 4
  01b2544  clrldi 27, 27, 32
  01b2548  lwz 28, 120(27)
  01b254c  bf 6, 0x1b2574
  01b2550  li 3, 3
  01b2554  li 4, 2
  01b2558  stb 3, 188(31)
  01b255c  stb 4, 32(31)
  01b2560  lbz 3, 189(30)
  01b2564  stw 3, 172(30)
  01b2568  lfs 1, 64(31)
  01b256c  lfs 31, 24(31)
  01b2570  lbz 3, 188(31)
  01b2574  lbz 4, 32(31)
  01b2578  cmpwi 4, 5
  01b257c  cmpwi 1, 4, 4
  01b2580  cmpwi 6, 4, 3
  01b2584  cmpwi 7, 4, 2
  01b2588  bt 2, 0x1b2aac
  01b258c  bt 6, 0x1b2a40
  01b2590  bt 26, 0x1b2958
  01b2594  bt 30, 0x1b2808
  01b2598  cmpwi 4, 1
  01b259c  cmpwi 1, 3, 1
  01b25a0  bt 2, 0x1b2690
  01b25a4  cmpwi 4, 0
  01b25a8  bf 2, 0x1b2f50
  01b25ac  li 3, 4
  01b25b0  stw 29, 32(30)
  01b25b4  li 4, 13
  01b25b8  sth 29, 36(30)
  01b25bc  stb 3, 40(30)
  01b25c0  sth 4, 62(30)
  01b25c4  bl 0x5c8318
  01b25c8  nop
  01b25cc  clrlwi 3, 3, 31
  01b25d0  cmpwi 3, 0
  01b25d4  bt 2, 0x1b25f4
  01b25d8  lis 3, 27
  01b25dc  lfs 1, 72(31)
  01b25e0  addi 3, 3, 9208
  01b25e4  lfs 2, 0(3)
  01b25e8  bl 0x502578
  01b25ec  nop
  01b25f0  stfs 1, 72(31)
  01b25f4  li 3, -1
  01b25f8  lfs 1, 64(31)
  01b25fc  li 4, 1
  01b2600  stfs 1, 164(30)
  01b2604  lfs 1, 68(31)
  01b2608  stw 3, 200(30)
  01b260c  stfs 1, 168(30)
  01b2610  stb 29, 188(31)
  01b2614  lbz 29, 176(31)
  01b2618  stb 4, 32(31)
  01b261c  cmpwi 29, 255
  01b2620  bt 2, 0x1b2f50
  01b2624  lis 3, 151
  01b2628  lis 4, 161
  01b262c  addic 4, 4, -13692
  01b2630  lwz 3, -25488(3)
  01b2634  addc 4, 29, 4
  01b2638  slwi 3, 3, 4
  01b263c  clrldi 4, 4, 32
  01b2640  extsw 3, 3
  01b2644  lbzx 3, 4, 3
  01b2648  cmpwi 3, 255
  01b264c  bf 2, 0x1b2f50
  01b2650  lis 3, 27
  01b2654  lfs 1, 24(31)
  01b2658  addi 3, 3, 9208
  01b265c  lfs 2, 4(3)
  01b2660  fsubs 1, 1, 2
  01b2664  stfs 1, 24(31)
  01b2668  lbz 3, 188(30)
  01b266c  cmpwi 3, 0
  01b2670  bt 2, 0x1b2680
  01b2674  li 3, 5
  01b2678  stb 3, 32(31)
  01b267c  b 0x1b2f50
  01b2680  ori 3, 31, 0
  01b2684  bl 0xefb38
  01b2688  nop
  01b268c  b 0x1b3068
  01b2690  bf 6, 0x1b2f50
  01b2694  lwz 3, 172(30)
  01b2698  cmpwi 3, 0
  01b269c  bf 2, 0x1b26d4
  01b26a0  bl 0x5c8318
  01b26a4  nop
  01b26a8  lis 4, 26214
  01b26ac  ori 4, 4, 26215
  01b26b0  mulhw 4, 4, 3
  01b26b4  srawi 4, 4, 2
  01b26b8  srwi 5, 4, 31
  01b26bc  addc 4, 4, 5
  01b26c0  sldi 5, 4, 3
  01b26c4  addc 5, 4, 5
  01b26c8  addc 4, 4, 5
  01b26cc  subc 3, 3, 4
  01b26d0  stw 3, 172(30)
  01b26d4  lbz 4, 190(30)
  01b26d8  cmpwi 4, 0
  01b26dc  bt 2, 0x1b26f4
  01b26e0  lbz 3, 33(31)
  01b26e4  li 4, 2
  01b26e8  bl 0x104298
  01b26ec  nop
  01b26f0  lwz 3, 172(30)
  01b26f4  extsw 3, 3
  01b26f8  lfs 31, 164(30)
  01b26fc  bl 0x502730
  01b2700  nop
  01b2704  lis 3, 27
  01b2708  addi 29, 3, 9208
  01b270c  lfs 2, 8(29)
  01b2710  fmuls 1, 1, 2
  01b2714  bl 0x10de78
  01b2718  nop
  01b271c  lfs 30, 12(29)
  01b2720  lfs 29, 16(29)
  01b2724  fsubs 2, 30, 1
  01b2728  fsubs 3, 29, 1
  01b272c  lfs 28, 20(29)
  01b2730  lfs 27, 24(29)
  01b2734  lfs 26, 28(29)
  01b2738  lfs 25, 32(29)
  01b273c  lfs 24, 36(29)
  01b2740  fsub 4, 1, 2
  01b2744  fsel 1, 4, 2, 1
  01b2748  fsub 4, 3, 1
  01b274c  fsel 3, 4, 3, 1
  01b2750  fmr 1, 31
  01b2754  fmuls 2, 3, 3
  01b2758  fmuls 4, 2, 3
  01b275c  fmuls 5, 2, 4
  01b2760  fmadds 3, 4, 28, 3
  01b2764  fmuls 4, 2, 5
  01b2768  fmadds 3, 5, 27, 3
  01b276c  fmuls 2, 2, 4
  01b2770  fmadds 3, 4, 26, 3
  01b2774  fmadds 2, 2, 25, 3
  01b2778  fmuls 2, 2, 24
  01b277c  bl 0x502578
  01b2780  nop
  01b2784  stfs 1, 64(31)
  01b2788  lwz 3, 172(30)
  01b278c  lfs 31, 168(30)
  01b2790  extsw 3, 3
  01b2794  bl 0x502730
  01b2798  nop
  01b279c  lfs 2, 40(29)
  01b27a0  fmuls 1, 1, 2
  01b27a4  bl 0x10de78
  01b27a8  nop
  01b27ac  lfs 2, 44(29)
  01b27b0  fadds 1, 1, 2
  01b27b4  fsubs 2, 30, 1
  01b27b8  fsubs 3, 29, 1
  01b27bc  fsub 4, 1, 2
  01b27c0  fsel 1, 4, 2, 1
  01b27c4  fsub 2, 3, 1
  01b27c8  fsel 2, 2, 3, 1
  01b27cc  fmr 1, 31
  01b27d0  fmuls 3, 2, 2
  01b27d4  fmuls 4, 3, 2
  01b27d8  fmuls 5, 3, 4
  01b27dc  fmadds 2, 4, 28, 2
  01b27e0  fmuls 4, 3, 5
  01b27e4  fmadds 2, 5, 27, 2
  01b27e8  fmuls 3, 3, 4
  01b27ec  fmadds 2, 4, 26, 2
  01b27f0  fmadds 2, 3, 25, 2
  01b27f4  fmuls 2, 2, 24
  01b27f8  bl 0x502578
  01b27fc  nop
  01b2800  stfs 1, 68(31)
  01b2804  b 0x1b2f50
  01b2808  lwz 3, 172(30)
  01b280c  lfs 31, 164(30)
  01b2810  extsw 3, 3
  01b2814  bl 0x502730
  01b2818  nop
  01b281c  lis 3, 27
  01b2820  addi 29, 3, 9208
  01b2824  lfs 2, 8(29)
  01b2828  fmuls 1, 1, 2
  01b282c  bl 0x10de78
  01b2830  nop
  01b2834  lfs 30, 12(29)
  01b2838  lfs 29, 16(29)
  01b283c  fsubs 2, 30, 1
  01b2840  fsubs 3, 29, 1
  01b2844  lfs 28, 20(29)
  01b2848  lfs 27, 24(29)
  01b284c  lfs 26, 28(29)
  01b2850  lfs 25, 32(29)
  01b2854  lfs 24, 36(29)
  01b2858  fsub 4, 1, 2
  01b285c  fsel 1, 4, 2, 1
  01b2860  fsub 4, 3, 1
  01b2864  fsel 3, 4, 3, 1
  01b2868  fmr 1, 31
  01b286c  fmuls 2, 3, 3
  01b2870  fmuls 4, 2, 3
  01b2874  fmuls 5, 2, 4
  01b2878  fmadds 3, 4, 28, 3
  01b287c  fmuls 4, 2, 5
  01b2880  fmadds 3, 5, 27, 3
  01b2884  fmuls 2, 2, 4
  01b2888  fmadds 3, 4, 26, 3
  01b288c  fmadds 2, 2, 25, 3
  01b2890  fmuls 2, 2, 24
  01b2894  bl 0x502578
  01b2898  nop
  01b289c  stfs 1, 64(31)
  01b28a0  lwz 3, 172(30)
  01b28a4  lfs 31, 168(30)
  01b28a8  extsw 3, 3
  01b28ac  bl 0x502730
  01b28b0  nop
  01b28b4  lfs 2, 40(29)
  01b28b8  fmuls 1, 1, 2
  01b28bc  bl 0x10de78
  01b28c0  nop
  01b28c4  lfs 2, 44(29)
  01b28c8  fadds 1, 1, 2
  01b28cc  fsubs 2, 30, 1
  01b28d0  fsubs 3, 29, 1
  01b28d4  fsub 4, 1, 2
  01b28d8  fsel 1, 4, 2, 1
  01b28dc  fsub 2, 3, 1
  01b28e0  fsel 2, 2, 3, 1
  01b28e4  fmr 1, 31
  01b28e8  fmuls 3, 2, 2
  01b28ec  fmuls 4, 3, 2
  01b28f0  fmuls 5, 3, 4
  01b28f4  fmadds 2, 4, 28, 2
  01b28f8  fmuls 4, 3, 5
  01b28fc  fmadds 2, 5, 27, 2
  01b2900  fmuls 3, 3, 4
  01b2904  fmadds 2, 4, 26, 2
  01b2908  fmadds 2, 3, 25, 2
  01b290c  fmuls 2, 2, 24
  01b2910  bl 0x502578
  01b2914  nop
  01b2918  addic 3, 30, 172
  01b291c  stfs 1, 68(31)
  01b2920  bl 0x4fff60
  01b2924  nop
  01b2928  cmpwi 3, 0
  01b292c  bt 2, 0x1b2f50
  01b2930  lbz 3, 190(30)
  01b2934  cmpwi 3, 0
  01b2938  bt 2, 0x1b294c
  01b293c  li 3, 12
  01b2940  lbz 4, 191(30)
  01b2944  stb 4, 413(28)
  01b2948  stb 3, 32(27)
  01b294c  li 3, 3
  01b2950  stb 3, 32(31)
  01b2954  b 0x1b2f50
  01b2958  lis 3, 27
  01b295c  addi 3, 3, 9208
  01b2960  lfs 2, 48(3)
  01b2964  lfs 3, 52(3)
  01b2968  fsubs 2, 2, 1
  01b296c  lfs 4, 12(3)
  01b2970  lfs 5, 16(3)
  01b2974  lfs 6, 20(3)
  01b2978  lis 4, 114
  01b297c  fmuls 2, 2, 3
  01b2980  fsubs 3, 4, 2
  01b2984  fsubs 4, 5, 2
  01b2988  fadds 1, 1, 2
  01b298c  fsub 5, 2, 3
  01b2990  fsel 3, 5, 3, 2
  01b2994  lfs 5, 24(3)
  01b2998  fsub 7, 4, 3
  01b299c  fsel 3, 7, 4, 3
  01b29a0  lfs 4, 28(3)
  01b29a4  lfs 7, 32(3)
  01b29a8  lfs 9, 56(3)
  01b29ac  stfs 1, 64(31)
  01b29b0  fmuls 8, 3, 3
  01b29b4  fmuls 2, 8, 3
  01b29b8  fmuls 10, 8, 2
  01b29bc  fmadds 2, 2, 6, 3
  01b29c0  fmuls 3, 8, 10
  01b29c4  fmadds 2, 10, 5, 2
  01b29c8  fmuls 1, 8, 3
  01b29cc  fmadds 2, 3, 4, 2
  01b29d0  fmadds 1, 1, 7, 2
  01b29d4  fnmsubs 1, 1, 9, 31
  01b29d8  stfs 1, 24(31)
  01b29dc  lfs 1, 176(30)
  01b29e0  lfs 2, 180(30)
  01b29e4  lfs 3, -3048(4)
  01b29e8  fnmsubs 1, 2, 3, 1
  01b29ec  stfs 1, 176(30)
  01b29f0  lfs 2, 24(31)
  01b29f4  fadds 1, 2, 1
  01b29f8  stfs 1, 24(31)
  01b29fc  lfs 2, 60(3)
  01b2a00  lfs 3, 184(30)
  01b2a04  fsubs 2, 3, 2
  01b2a08  fcmpu 0, 1, 2
  01b2a0c  cror 6, 1, 2
  01b2a10  bt 6, 0x1b2f50
  01b2a14  lbz 3, 188(30)
  01b2a18  cmpwi 3, 0
  01b2a1c  bt 2, 0x1b2a30
  01b2a20  li 3, 4
  01b2a24  stw 29, 176(30)
  01b2a28  stb 3, 32(31)
  01b2a2c  b 0x1b2f50
  01b2a30  ori 3, 31, 0
  01b2a34  bl 0xefb38
  01b2a38  nop
  01b2a3c  b 0x1b3068
  01b2a40  lbz 3, 239(28)
  01b2a44  cmpwi 3, 2
  01b2a48  bf 0, 0x1b2a58
  01b2a4c  lbz 3, 32(27)
  01b2a50  cmpwi 3, 12
  01b2a54  bf 0, 0x1b2f50
  01b2a58  lis 3, 27
  01b2a5c  lis 4, 114
  01b2a60  addi 3, 3, 9208
  01b2a64  lfs 3, 64(3)
  01b2a68  lfs 1, -3052(4)
  01b2a6c  fmuls 2, 1, 3
  01b2a70  bl 0xfcbe8
  01b2a74  nop
  01b2a78  stfs 1, 176(30)
  01b2a7c  bl 0xfcc68
  01b2a80  nop
  01b2a84  stfs 1, 192(30)
  01b2a88  bl 0xfcc68
  01b2a8c  nop
  01b2a90  li 3, 5
  01b2a94  stfs 1, 196(30)
  01b2a98  stw 29, 64(31)
  01b2a9c  stw 29, 68(31)
  01b2aa0  stb 3, 32(31)
  01b2aa4  stw 29, 172(30)
  01b2aa8  b 0x1b2f50
  01b2aac  lis 29, 151
  01b2ab0  lfs 1, 176(30)
  01b2ab4  lfs 30, 184(30)
  01b2ab8  addic 29, 29, -25376
  01b2abc  fadds 31, 31, 1
  01b2ac0  lhz 3, 782(29)
  01b2ac4  cmpwi 3, 0
  01b2ac8  bf 2, 0x1b2b58
  01b2acc  lwz 3, 764(29)
  01b2ad0  cmpw 3, 31
  01b2ad4  bf 2, 0x1b2b58
  01b2ad8  lwz 3, 172(30)
  01b2adc  cmpwi 3, 0
  01b2ae0  bf 2, 0x1b2afc
  01b2ae4  li 3, 0
  01b2ae8  li 4, 0
  01b2aec  ori 5, 31, 0
  01b2af0  bl 0x15d12c
  01b2af4  nop
  01b2af8  lwz 3, 172(30)
  01b2afc  lis 4, 27
  01b2b00  vspltisw 3, -1
  01b2b04  lis 5, 114
  01b2b08  addi 4, 4, 9208
  01b2b0c  li 6, 68
  01b2b10  li 7, -3056
  01b2b14  vslw 3, 3, 3
  01b2b18  lfs 1, 68(4)
  01b2b1c  lfs 2, -3056(5)
  01b2b20  <unknown>
  01b2b24  fmuls 1, 2, 1
  01b2b28  vspltw 2, 2, 0
  01b2b2c  <unknown>
  01b2b30  vmaddfp 2, 4, 2, 3
  01b2b34  fctiwz 1, 1
  01b2b38  vctsxs 2, 2, 0
  01b2b3c  stfd 1, 176(1)
  01b2b40  lwz 4, 180(1)
  01b2b44  cmpw 3, 4
  01b2b48  bf 0, 0x1b2b58
  01b2b4c  vspltw 2, 2, 0
  01b2b50  li 3, 172
  01b2b54  stvewx 2, 3, 30
  01b2b58  lwz 3, 172(30)
  01b2b5c  cmpwi 3, 0
  01b2b60  bt 2, 0x1b2bac
  01b2b64  lis 3, 27
  01b2b68  lfs 1, 184(30)
  01b2b6c  addi 3, 3, 9208
  01b2b70  lfs 2, 72(3)
  01b2b74  lfs 3, 24(31)
  01b2b78  fsubs 1, 1, 2
  01b2b7c  lfs 30, 76(3)
  01b2b80  fcmpu 0, 3, 1
  01b2b84  cror 6, 0, 2
  01b2b88  bt 6, 0x1b2ba4
  01b2b8c  lis 3, 27
  01b2b90  lis 4, 114
  01b2b94  addi 3, 3, 9208
  01b2b98  lfs 1, 80(3)
  01b2b9c  lfs 30, -3052(4)
  01b2ba0  fmuls 30, 30, 1
  01b2ba4  stfs 30, 176(30)
  01b2ba8  b 0x1b2c50
  01b2bac  fcmpu 0, 31, 30
  01b2bb0  cror 6, 1, 2
  01b2bb4  bt 6, 0x1b2c0c
  01b2bb8  fsubs 30, 30, 31
  01b2bbc  lis 3, 27
  01b2bc0  addi 3, 3, 9208
  01b2bc4  lfs 2, 84(3)
  01b2bc8  lfs 1, 88(3)
  01b2bcc  fmuls 30, 30, 2
  01b2bd0  fcmpu 0, 30, 1
  01b2bd4  cror 6, 0, 2
  01b2bd8  bt 6, 0x1b2be4
  01b2bdc  fmr 30, 1
  01b2be0  b 0x1b2c00
  01b2be4  lis 3, 27
  01b2be8  addi 3, 3, 9208
  01b2bec  lfs 1, 92(3)
  01b2bf0  fcmpu 0, 30, 1
  01b2bf4  cror 6, 1, 2
  01b2bf8  bt 6, 0x1b2c00
  01b2bfc  fmr 30, 1
  01b2c00  lfs 1, 176(30)
  01b2c04  fadds 1, 1, 30
  01b2c08  stfs 1, 176(30)
  01b2c0c  lis 3, 27
  01b2c10  lfs 30, 176(30)
  01b2c14  lis 4, 114
  01b2c18  addi 3, 3, 9208
  01b2c1c  lfs 1, 96(3)
  01b2c20  lfs 2, -3048(4)
  01b2c24  lis 4, 114
  01b2c28  fnmsubs 30, 2, 1, 30
  01b2c2c  stfs 30, 176(30)
  01b2c30  lfs 1, 4(3)
  01b2c34  lfs 2, -3052(4)
  01b2c38  fmuls 1, 2, 1
  01b2c3c  fcmpu 0, 30, 1
  01b2c40  cror 6, 0, 2
  01b2c44  bt 6, 0x1b2c50
  01b2c48  fmr 30, 1
  01b2c4c  stfs 1, 176(30)
  01b2c50  lfs 1, 24(31)
  01b2c54  lis 3, 27
  01b2c58  fadds 1, 1, 30
  01b2c5c  addi 28, 3, 9208
  01b2c60  stfs 1, 24(31)
  01b2c64  lfs 1, 192(30)
  01b2c68  lfs 2, 100(28)
  01b2c6c  bl 0x502578
  01b2c70  nop
  01b2c74  stfs 1, 192(30)
  01b2c78  lfs 2, 104(28)
  01b2c7c  bl 0x502578
  01b2c80  nop
  01b2c84  stfs 1, 196(30)
  01b2c88  lfs 2, 12(28)
  01b2c8c  lfs 3, 192(30)
  01b2c90  lfs 4, 16(28)
  01b2c94  fsubs 5, 2, 3
  01b2c98  fsubs 2, 2, 1
  01b2c9c  fsubs 6, 4, 3
  01b2ca0  fsubs 4, 4, 1
  01b2ca4  fsub 7, 3, 5
  01b2ca8  fsub 8, 1, 2
  01b2cac  fsel 3, 7, 5, 3
  01b2cb0  fsel 1, 8, 2, 1
  01b2cb4  lfs 2, 20(28)
  01b2cb8  lfs 5, 24(28)
  01b2cbc  fsub 7, 6, 3
  01b2cc0  fsub 8, 4, 1
  01b2cc4  fsel 3, 7, 6, 3
  01b2cc8  fsel 1, 8, 4, 1
  01b2ccc  lfs 4, 28(28)
  01b2cd0  lfs 8, 32(28)
  01b2cd4  lwz 3, 172(30)
  01b2cd8  lfs 31, 108(28)
  01b2cdc  cmpwi 3, 0
  01b2ce0  fmuls 6, 3, 3
  01b2ce4  fmuls 7, 1, 1
  01b2ce8  fmuls 9, 6, 3
  01b2cec  fmuls 10, 7, 1
  01b2cf0  fmuls 11, 6, 9
  01b2cf4  fmadds 3, 9, 2, 3
  01b2cf8  fmuls 9, 7, 10
  01b2cfc  fmadds 1, 10, 2, 1
  01b2d00  fmuls 2, 6, 11
  01b2d04  fmadds 3, 11, 5, 3
  01b2d08  fmuls 10, 7, 9
  01b2d0c  fmadds 1, 9, 5, 1
  01b2d10  fmuls 5, 6, 2
  01b2d14  fmadds 2, 2, 4, 3
  01b2d18  fmuls 3, 7, 10
  01b2d1c  fmadds 1, 10, 4, 1
  01b2d20  fmadds 30, 5, 8, 2
  01b2d24  fmadds 1, 3, 8, 1
  01b2d28  fmuls 30, 30, 31
  01b2d2c  fmuls 31, 1, 31
  01b2d30  bt 2, 0x1b2e50
  01b2d34  addic 3, 30, 172
  01b2d38  bl 0x4fff60
  01b2d3c  nop
  01b2d40  lfs 1, 132(29)
  01b2d44  lfs 2, 20(31)
  01b2d48  lis 3, 27
  01b2d4c  lfs 3, 128(29)
  01b2d50  fsubs 1, 1, 2
  01b2d54  lfs 2, 16(31)
  01b2d58  addi 3, 3, 9208
  01b2d5c  lfs 4, 196(31)
  01b2d60  fsubs 2, 3, 2
  01b2d64  lfs 3, 136(29)
  01b2d68  lfs 5, 24(31)
  01b2d6c  lfs 6, 192(31)
  01b2d70  fsubs 3, 3, 5
  01b2d74  lfs 5, 212(31)
  01b2d78  lfs 7, 200(31)
  01b2d7c  fmuls 4, 1, 4
  01b2d80  lfs 8, 208(31)
  01b2d84  fmuls 1, 1, 5
  01b2d88  lfs 5, 216(31)
  01b2d8c  lfs 9, 116(3)
  01b2d90  lfs 10, 112(3)
  01b2d94  fmadds 4, 2, 6, 4
  01b2d98  fmadds 2, 2, 8, 1
  01b2d9c  fmr 1, 30
  01b2da0  fmadds 4, 3, 7, 4
  01b2da4  fmadds 2, 3, 5, 2
  01b2da8  fmuls 30, 4, 9
  01b2dac  fmuls 2, 2, 10
  01b2db0  bl 0x502578
  01b2db4  nop
  01b2db8  fmr 2, 30
  01b2dbc  bl 0x502578
  01b2dc0  nop
  01b2dc4  lfs 2, 64(31)
  01b2dc8  fmr 30, 1
  01b2dcc  addic 3, 29, 128
  01b2dd0  stfs 2, 144(1)
  01b2dd4  lfs 2, 68(31)
  01b2dd8  addic 4, 1, 160
  01b2ddc  addic 5, 31, 16
  01b2de0  stfs 2, 148(1)
  01b2de4  lfs 1, 72(31)
  01b2de8  addic 6, 1, 144
  01b2dec  addic 7, 31, 64
  01b2df0  stfs 1, 152(1)
  01b2df4  lfs 1, 76(31)
  01b2df8  stfs 1, 156(1)
  01b2dfc  lfs 29, 24(31)
  01b2e00  bl 0x1120d4
  01b2e04  nop
  01b2e08  lfs 1, 160(1)
  01b2e0c  lfs 2, 128(29)
  01b2e10  lfs 3, 164(1)
  01b2e14  fsubs 1, 1, 2
  01b2e18  lfs 2, 132(29)
  01b2e1c  lfs 4, 168(1)
  01b2e20  fsubs 2, 3, 2
  01b2e24  lfs 3, 136(29)
  01b2e28  fsubs 3, 4, 3
  01b2e2c  lfs 4, 172(1)
  01b2e30  stfs 4, 252(29)
  01b2e34  stfs 1, 240(29)
  01b2e38  stfs 2, 244(29)
  01b2e3c  stfs 3, 248(29)
  01b2e40  lfs 1, 24(31)
  01b2e44  fsubs 1, 1, 29
  01b2e48  fadds 1, 3, 1
  01b2e4c  stfs 1, 248(29)
  01b2e50  lis 3, 27
  01b2e54  lis 28, 114
  01b2e58  fmr 1, 30
  01b2e5c  addi 29, 3, 9208
  01b2e60  addic 3, 31, 64
  01b2e64  li 6, 0
  01b2e68  lfs 29, 120(29)
  01b2e6c  lfs 2, -3052(28)
  01b2e70  fmuls 2, 2, 29
  01b2e74  bl 0x109ec0
  01b2e78  nop
  01b2e7c  lfs 2, -3052(28)
  01b2e80  addic 3, 31, 68
  01b2e84  li 6, 0
  01b2e88  fmr 1, 31
  01b2e8c  fmuls 2, 2, 29
  01b2e90  bl 0x109ec0
  01b2e94  nop
  01b2e98  lwz 3, 64(31)
  01b2e9c  lwz 5, 68(31)
  01b2ea0  lis 4, 16134
  01b2ea4  srawi 6, 3, 31
  01b2ea8  lfs 2, 64(31)
  01b2eac  srawi 8, 5, 31
  01b2eb0  lfs 1, 124(29)
  01b2eb4  srwi 7, 6, 1
  01b2eb8  lfs 30, 68(31)
  01b2ebc  ori 4, 4, 2706
  01b2ec0  xor 3, 7, 3
  01b2ec4  srwi 7, 8, 1
  01b2ec8  subc 3, 3, 6
  01b2ecc  xor 5, 7, 5
  01b2ed0  cmpw 3, 4
  01b2ed4  subc 3, 5, 8
  01b2ed8  bf 1, 0x1b2eec
  01b2edc  lis 4, 16134
  01b2ee0  fmr 2, 1
  01b2ee4  ori 4, 4, 2706
  01b2ee8  stw 4, 64(31)
  01b2eec  fmr 3, 2
  01b2ef0  lis 4, 27
  01b2ef4  addi 4, 4, 9208
  01b2ef8  lfs 2, 128(4)
  01b2efc  fcmpu 0, 3, 2
  01b2f00  cror 6, 1, 2
  01b2f04  bt 6, 0x1b2f14
  01b2f08  lis 4, -16634
  01b2f0c  ori 4, 4, 2706
  01b2f10  stw 4, 64(31)
  01b2f14  lis 4, 16134
  01b2f18  fmr 3, 30
  01b2f1c  ori 4, 4, 2706
  01b2f20  cmpw 3, 4
  01b2f24  bf 1, 0x1b2f38
  01b2f28  lis 3, 16134
  01b2f2c  fmr 3, 1
  01b2f30  ori 3, 3, 2706
  01b2f34  stw 3, 68(31)
  01b2f38  fcmpu 0, 3, 2
  01b2f3c  cror 6, 1, 2
  01b2f40  bt 6, 0x1b2f50
  01b2f44  lis 3, -16634
  01b2f48  ori 3, 3, 2706
  01b2f4c  stw 3, 68(31)
  01b2f50  lbz 3, 32(31)
  01b2f54  cmpwi 3, 5
  01b2f58  bf 2, 0x1b3018
  01b2f5c  addic 3, 30, 200
  01b2f60  bl 0x4fff60
  01b2f64  nop
  01b2f68  cmpwi 3, 0
  01b2f6c  bt 2, 0x1b3018
  01b2f70  lwz 3, 204(30)
  01b2f74  lwz 4, 184(30)
  01b2f78  srawi 6, 3, 31
  01b2f7c  srawi 5, 4, 31
  01b2f80  lwz 7, 24(31)
  01b2f84  srwi 10, 6, 1
  01b2f88  srwi 8, 5, 1
  01b2f8c  srawi 9, 7, 31
  01b2f90  xor 4, 8, 4
  01b2f94  xor 3, 10, 3
  01b2f98  srwi 8, 9, 1
  01b2f9c  subc 3, 3, 6
  01b2fa0  subc 4, 4, 5
  01b2fa4  xor 5, 8, 7
  01b2fa8  cmpw 6, 3, 4
  01b2fac  subc 3, 5, 9
  01b2fb0  cmpw 1, 3, 4
  01b2fb4  bt 24, 0x1b2fbc
  01b2fb8  bt 4, 0x1b2fc4
  01b2fbc  bt 25, 0x1b3018
  01b2fc0  bf 5, 0x1b3018
  01b2fc4  li 4, 0
  01b2fc8  li 3, 0
  01b2fcc  ori 5, 31, 0
  01b2fd0  bl 0x15d12c
  01b2fd4  nop
  01b2fd8  bl 0x5c8318
  01b2fdc  nop
  01b2fe0  lis 4, 27
  01b2fe4  lis 5, 114
  01b2fe8  addi 4, 4, 9208
  01b2fec  lfs 1, 132(4)
  01b2ff0  lfs 2, -3056(5)
  01b2ff4  fmuls 1, 2, 1
  01b2ff8  fctiwz 1, 1
  01b2ffc  stfd 1, 176(1)
  01b3000  lwz 4, 180(1)
  01b3004  divw 5, 3, 4
  01b3008  mullw 5, 5, 4
  01b300c  subc 3, 3, 5
  01b3010  addc 3, 3, 4
  01b3014  stw 3, 200(30)
  01b3018  lfs 1, 24(31)
  01b301c  addic 3, 30, 96
  01b3020  stfs 1, 204(30)
  01b3024  lfs 1, 112(1)
  01b3028  addic 4, 1, 112
  01b302c  lfs 2, 16(31)
  01b3030  addic 5, 1, 128
  01b3034  lfs 3, 116(1)
  01b3038  addic 6, 31, 64
  01b303c  fadds 1, 1, 2
  01b3040  lfs 2, 20(31)
  01b3044  lfs 4, 120(1)
  01b3048  fadds 2, 3, 2
  01b304c  lfs 3, 24(31)
  01b3050  fadds 3, 4, 3
  01b3054  stfs 1, 112(1)
  01b3058  stfs 2, 116(1)
  01b305c  stfs 3, 120(1)
  01b3060  bl 0x112900
  01b3064  nop
  01b3068  ld 0, 320(1)
  01b306c  mtlr 0
  01b3070  lfd 24, 240(1)
  01b3074  lfd 25, 248(1)
  01b3078  lfd 26, 256(1)
  01b307c  lfd 27, 264(1)
  01b3080  lfd 28, 272(1)
  01b3084  lfd 29, 280(1)
  01b3088  lfd 30, 288(1)
  01b308c  lfd 31, 296(1)
  01b3090  ld 27, 200(1)
  01b3094  ld 28, 208(1)
  01b3098  ld 29, 216(1)
  01b309c  ld 30, 224(1)
  01b30a0  ld 31, 232(1)
  01b30a4  addi 1, 1, 304
  01b30a8  blr

M1069_001b30ac:   # 0x1b30ac, 0x14 bytes
  01b30ac  lis 3, 117
  01b30b0  lis 4, 1
  01b30b4  addic 3, 3, 31856
  01b30b8  stw 4, 72(3)
  01b30bc  blr

M107_001b30e8:   # 0x1b30e8, 0xc8 bytes
  01b30e8  stdu 1, -128(1)
  01b30ec  mflr 0
  01b30f0  std 0, 144(1)
  01b30f4  stfd 30, 112(1)
  01b30f8  stfd 31, 120(1)
  01b30fc  fdivs 3, 3, 4
  01b3100  lis 3, 27
  01b3104  addi 3, 3, 12480
  01b3108  lfs 4, 0(3)
  01b310c  lfs 5, 4(3)
  01b3110  lfs 6, 8(3)
  01b3114  lfs 7, 12(3)
  01b3118  lfs 8, 16(3)
  01b311c  lfs 9, 20(3)
  01b3120  lfs 10, 24(3)
  01b3124  lfs 11, 28(3)
  01b3128  lfs 12, 32(3)
  01b312c  fmr 31, 1
  01b3130  fmr 1, 2
  01b3134  fmr 2, 31
  01b3138  fmadds 3, 3, 4, 5
  01b313c  fsubs 4, 4, 3
  01b3140  fsubs 5, 6, 3
  01b3144  fsub 6, 3, 4
  01b3148  fsel 3, 6, 4, 3
  01b314c  fsub 4, 5, 3
  01b3150  fsel 3, 4, 5, 3
  01b3154  fmuls 4, 3, 3
  01b3158  fmuls 5, 4, 3
  01b315c  fmuls 6, 4, 5
  01b3160  fmadds 3, 5, 7, 3
  01b3164  fmuls 5, 4, 6
  01b3168  fmadds 3, 6, 8, 3
  01b316c  fmuls 4, 4, 5
  01b3170  fmadds 3, 5, 9, 3
  01b3174  fmadds 3, 4, 10, 3
  01b3178  fadds 3, 3, 11
  01b317c  fmuls 30, 3, 12
  01b3180  bl 0x5025e0
  01b3184  nop
  01b3188  fmuls 1, 1, 30
  01b318c  fmr 2, 31
  01b3190  bl 0x502578
  01b3194  nop
  01b3198  ld 0, 144(1)
  01b319c  mtlr 0
  01b31a0  lfd 30, 112(1)
  01b31a4  lfd 31, 120(1)
  01b31a8  addi 1, 1, 128
  01b31ac  blr

M107_001b31d8:   # 0x1b31d8, 0xe0 bytes
  01b31d8  stdu 1, -64(1)
  01b31dc  stfd 30, 48(1)
  01b31e0  stfd 31, 56(1)
  01b31e4  fdivs 1, 1, 2
  01b31e8  lis 6, 27
  01b31ec  addi 6, 6, 12720
  01b31f0  lfs 2, 0(6)
  01b31f4  lfs 3, 4(6)
  01b31f8  lfs 4, 8(6)
  01b31fc  lfs 5, 12(6)
  01b3200  lfs 6, 16(6)
  01b3204  lfs 7, 20(6)
  01b3208  lfs 8, 24(6)
  01b320c  lfs 9, 0(5)
  01b3210  lfs 10, 28(6)
  01b3214  lfs 11, 0(4)
  01b3218  lfs 12, 32(6)
  01b321c  fsubs 9, 9, 11
  01b3220  lfs 13, 4(5)
  01b3224  lfs 0, 4(4)
  01b3228  lfs 31, 8(5)
  01b322c  fsubs 13, 13, 0
  01b3230  lfs 30, 8(4)
  01b3234  fsubs 0, 31, 30
  01b3238  fmadds 1, 1, 2, 3
  01b323c  fsubs 2, 2, 1
  01b3240  fsubs 3, 4, 1
  01b3244  fsub 4, 1, 2
  01b3248  fsel 1, 4, 2, 1
  01b324c  fsub 2, 3, 1
  01b3250  fsel 1, 2, 3, 1
  01b3254  fmuls 2, 1, 1
  01b3258  fmuls 3, 2, 1
  01b325c  fmuls 4, 2, 3
  01b3260  fmadds 1, 3, 5, 1
  01b3264  fmuls 3, 2, 4
  01b3268  fmadds 1, 4, 6, 1
  01b326c  fmuls 2, 2, 3
  01b3270  fmadds 1, 3, 7, 1
  01b3274  fmadds 1, 2, 8, 1
  01b3278  fadds 1, 1, 10
  01b327c  fmuls 1, 1, 12
  01b3280  fmadds 2, 9, 1, 11
  01b3284  stfs 2, 16(3)
  01b3288  lfs 2, 4(4)
  01b328c  fmadds 2, 13, 1, 2
  01b3290  stfs 2, 20(3)
  01b3294  lfs 2, 8(4)
  01b3298  fmadds 1, 0, 1, 2
  01b329c  stfs 1, 24(3)
  01b32a0  lfs 1, 12(4)
  01b32a4  stfs 1, 28(3)
  01b32a8  lfd 30, 48(1)
  01b32ac  lfd 31, 56(1)
  01b32b0  addi 1, 1, 64
  01b32b4  blr
