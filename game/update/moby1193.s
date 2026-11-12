# game/update/moby1193.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1193_001f1f58:   # 0x1f1f58, 0x14 bytes
  01f1f58  lis 3, 118
  01f1f5c  lis 4, 1
  01f1f60  addic 3, 3, 24672
  01f1f64  stw 4, 72(3)
  01f1f68  blr

UpdateMoby_1193:   # 0x1f1fc0, 0xa1c bytes
  01f1fc0  stdu 1, -368(1)
  01f1fc4  mflr 0
  01f1fc8  std 0, 384(1)
  01f1fcc  stfd 26, 320(1)
  01f1fd0  stfd 27, 328(1)
  01f1fd4  stfd 28, 336(1)
  01f1fd8  stfd 29, 344(1)
  01f1fdc  stfd 30, 352(1)
  01f1fe0  stfd 31, 360(1)
  01f1fe4  addi 0, 1, 240
  01f1fe8  stvx 31, 0, 0
  01f1fec  std 31, 312(1)
  01f1ff0  lis 4, 31
  01f1ff4  ori 31, 3, 0
  01f1ff8  std 29, 296(1)
  01f1ffc  addi 4, 4, 8048
  01f2000  addic 29, 31, 16
  01f2004  li 5, 0
  01f2008  std 30, 304(1)
  01f200c  ori 3, 29, 0
  01f2010  lwz 30, 120(31)
  01f2014  ori 6, 31, 0
  01f2018  std 28, 288(1)
  01f201c  std 27, 280(1)
  01f2020  std 26, 272(1)
  01f2024  std 25, 264(1)
  01f2028  lfs 1, 0(4)
  01f202c  bl 0x59e20
  01f2030  nop
  01f2034  cmpwi 3, 0
  01f2038  bt 2, 0x1f2064
  01f203c  lis 3, 161
  01f2040  addic 3, 3, 2368
  01f2044  lwz 3, 24(3)
  01f2048  cmpwi 3, 0
  01f204c  bt 2, 0x1f2064
  01f2050  lwz 4, 36(30)
  01f2054  cmpw 3, 4
  01f2058  bt 2, 0x1f2064
  01f205c  li 3, 3
  01f2060  stb 3, 32(31)
  01f2064  addic 3, 30, 32
  01f2068  bl 0x4fff60
  01f206c  nop
  01f2070  ori 4, 3, 0
  01f2074  lbz 3, 32(31)
  01f2078  lfs 4, 16(31)
  01f207c  lfs 3, 20(31)
  01f2080  cmpwi 4, 0
  01f2084  lfs 2, 24(31)
  01f2088  lfs 1, 28(31)
  01f208c  bt 2, 0x1f209c
  01f2090  li 3, 3
  01f2094  stb 3, 32(31)
  01f2098  b 0x1f2880
  01f209c  cmpwi 3, 1
  01f20a0  bt 1, 0x1f20b0
  01f20a4  cmpwi 3, -1
  01f20a8  bf 1, 0x1f28f4
  01f20ac  b 0x1f20c4
  01f20b0  cmpwi 3, 2
  01f20b4  bf 1, 0x1f270c
  01f20b8  cmpwi 3, 3
  01f20bc  bf 1, 0x1f2880
  01f20c0  b 0x1f28f4
  01f20c4  lfs 5, 16(30)
  01f20c8  fadds 4, 4, 5
  01f20cc  stfs 4, 192(1)
  01f20d0  lfs 4, 20(30)
  01f20d4  fadds 3, 3, 4
  01f20d8  stfs 3, 196(1)
  01f20dc  lfs 3, 24(30)
  01f20e0  stfs 1, 204(1)
  01f20e4  fadds 2, 2, 3
  01f20e8  stfs 2, 200(1)
  01f20ec  lfs 4, 24(30)
  01f20f0  lfs 1, 28(30)
  01f20f4  fsubs 4, 4, 1
  01f20f8  stfs 4, 24(30)
  01f20fc  lbz 3, 32(31)
  01f2100  cmpwi 3, 1
  01f2104  bf 2, 0x1f2128
  01f2108  lis 3, 31
  01f210c  addi 3, 3, 8048
  01f2110  lfs 1, 4(3)
  01f2114  fcmpu 0, 4, 1
  01f2118  cror 6, 1, 2
  01f211c  bt 6, 0x1f2128
  01f2120  li 3, 0
  01f2124  stb 3, 32(31)
  01f2128  addic 3, 30, 40
  01f212c  bl 0x4fffb4
  01f2130  nop
  01f2134  lhz 3, 40(30)
  01f2138  cmpwi 3, 0
  01f213c  bt 2, 0x1f2318
  01f2140  lis 3, 31
  01f2144  li 4, 32
  01f2148  addi 3, 3, 8048
  01f214c  lis 28, 161
  01f2150  li 27, 0
  01f2154  addic 28, 28, 23856
  01f2158  lfs 26, 8(3)
  01f215c  lfs 27, 12(3)
  01f2160  lfs 28, 16(3)
  01f2164  lfs 29, 20(3)
  01f2168  lfs 30, 24(3)
  01f216c  lfs 31, 28(3)
  01f2170  lvlx 31, 4, 3
  01f2174  vspltw 31, 31, 0
  01f2178  extsw 3, 27
  01f217c  addic 26, 1, 208
  01f2180  std 3, 224(1)
  01f2184  lfs 1, 16(31)
  01f2188  lfs 2, 24(31)
  01f218c  stfs 1, 64(1)
  01f2190  stfs 2, 72(1)
  01f2194  lfs 1, 192(1)
  01f2198  lfs 2, 200(1)
  01f219c  stfs 1, 80(1)
  01f21a0  stfs 2, 88(1)
  01f21a4  lfs 1, 20(31)
  01f21a8  ori 3, 26, 0
  01f21ac  lfs 2, 28(31)
  01f21b0  stfs 1, 68(1)
  01f21b4  stfs 2, 76(1)
  01f21b8  lfs 1, 196(1)
  01f21bc  stfs 1, 84(1)
  01f21c0  lfs 1, 204(1)
  01f21c4  lfd 2, 224(1)
  01f21c8  ld 5, 64(1)
  01f21cc  fcfid 2, 2
  01f21d0  ld 6, 72(1)
  01f21d4  stfs 1, 92(1)
  01f21d8  ld 7, 80(1)
  01f21dc  ld 8, 88(1)
  01f21e0  frsp 1, 2
  01f21e4  fmuls 1, 1, 26
  01f21e8  bl 0x1099f8
  01f21ec  nop
  01f21f0  li 3, 6
  01f21f4  bl 0xfc620
  01f21f8  nop
  01f21fc  ori 25, 3, 0
  01f2200  li 3, 2
  01f2204  bl 0xfc620
  01f2208  nop
  01f220c  lis 4, 118
  01f2210  li 5, 0
  01f2214  subc 3, 5, 3
  01f2218  lwz 4, 24784(4)
  01f221c  extsw 4, 4
  01f2220  cntlzw 3, 3
  01f2224  std 4, 224(1)
  01f2228  lis 4, 114
  01f222c  sldi 3, 3, 58
  01f2230  sradi 3, 3, 63
  01f2234  lfs 1, -3056(4)
  01f2238  lfd 2, 224(1)
  01f223c  fcfid 2, 2
  01f2240  neg 4, 25
  01f2244  subc 5, 25, 4
  01f2248  and 3, 3, 5
  01f224c  addc 25, 4, 3
  01f2250  frsp 2, 2
  01f2254  fadds 2, 2, 27
  01f2258  fmuls 1, 1, 2
  01f225c  fctiwz 1, 1
  01f2260  stfd 1, 224(1)
  01f2264  lwz 3, 228(1)
  01f2268  extsw 3, 3
  01f226c  bl 0x502730
  01f2270  nop
  01f2274  lhz 3, 40(30)
  01f2278  extsh 3, 3
  01f227c  extsw 3, 3
  01f2280  fmr 2, 31
  01f2284  std 3, 224(1)
  01f2288  lis 10, -32640
  01f228c  ori 3, 26, 0
  01f2290  fmr 3, 31
  01f2294  ori 7, 25, 0
  01f2298  ori 8, 28, 0
  01f229c  ori 10, 10, 32896
  01f22a0  lfd 4, 224(1)
  01f22a4  fcfid 4, 4
  01f22a8  frsp 4, 4
  01f22ac  fdivs 4, 4, 1
  01f22b0  fmr 1, 30
  01f22b4  fmadds 4, 4, 28, 29
  01f22b8  bl 0x126f50
  01f22bc  nop
  01f22c0  cmpwi 3, 0
  01f22c4  bt 2, 0x1f230c
  01f22c8  vspltisw 2, -1
  01f22cc  lis 4, 114
  01f22d0  li 5, -3056
  01f22d4  vslw 2, 2, 2
  01f22d8  li 6, 127
  01f22dc  li 7, 43
  01f22e0  lvlx 3, 5, 4
  01f22e4  li 4, 10
  01f22e8  vmaddfp 2, 3, 31, 2
  01f22ec  li 5, 2
  01f22f0  vctsxs 2, 2, 0
  01f22f4  vsplth 3, 2, 1
  01f22f8  vspltb 2, 2, 3
  01f22fc  stvehx 3, 4, 3
  01f2300  stw 5, 36(3)
  01f2304  stb 6, 42(3)
  01f2308  stvebx 2, 7, 3
  01f230c  addic 27, 27, 1
  01f2310  cmpwi 27, 3
  01f2314  bt 0, 0x1f2178
  01f2318  ori 3, 29, 0
  01f231c  addic 4, 1, 192
  01f2320  li 5, 0
  01f2324  ori 6, 31, 0
  01f2328  li 7, 0
  01f232c  bl 0x57820
  01f2330  nop
  01f2334  cmpwi 3, 0
  01f2338  bt 2, 0x1f23a4
  01f233c  lis 3, 161
  01f2340  addic 3, 3, 2368
  01f2344  lwz 4, 24(3)
  01f2348  cmpwi 4, 0
  01f234c  bt 2, 0x1f235c
  01f2350  lwz 5, 36(30)
  01f2354  cmpw 4, 5
  01f2358  bt 2, 0x1f2380
  01f235c  lfs 1, 32(3)
  01f2360  stfs 1, 16(31)
  01f2364  lfs 1, 36(3)
  01f2368  stfs 1, 20(31)
  01f236c  lfs 1, 40(3)
  01f2370  stfs 1, 24(31)
  01f2374  lfs 1, 44(3)
  01f2378  stfs 1, 28(31)
  01f237c  b 0x1f23c4
  01f2380  lfs 1, 192(1)
  01f2384  lfs 2, 196(1)
  01f2388  stfs 1, 16(31)
  01f238c  lfs 1, 200(1)
  01f2390  stfs 2, 20(31)
  01f2394  lfs 2, 204(1)
  01f2398  stfs 1, 24(31)
  01f239c  stfs 2, 28(31)
  01f23a0  b 0x1f23c4
  01f23a4  lfs 1, 192(1)
  01f23a8  lfs 2, 196(1)
  01f23ac  stfs 1, 16(31)
  01f23b0  lfs 1, 200(1)
  01f23b4  stfs 2, 20(31)
  01f23b8  lfs 2, 204(1)
  01f23bc  stfs 1, 24(31)
  01f23c0  stfs 2, 28(31)
  01f23c4  lis 28, 118
  01f23c8  ori 3, 29, 0
  01f23cc  li 5, 0
  01f23d0  ori 6, 31, 0
  01f23d4  lfs 1, 24780(28)
  01f23d8  bl 0x59e20
  01f23dc  nop
  01f23e0  cmpwi 3, 0
  01f23e4  lfs 1, 24780(28)
  01f23e8  bt 2, 0x1f28f4
  01f23ec  lbz 3, 32(31)
  01f23f0  cmpwi 3, 0
  01f23f4  bt 2, 0x1f2424
  01f23f8  lis 3, 161
  01f23fc  lfs 2, 24(31)
  01f2400  lis 4, 31
  01f2404  addic 3, 3, 2368
  01f2408  addi 4, 4, 8048
  01f240c  lfs 3, 40(3)
  01f2410  fsubs 2, 2, 3
  01f2414  lfs 3, 4(4)
  01f2418  fcmpu 0, 2, 3
  01f241c  cror 6, 1, 2
  01f2420  bt 6, 0x1f28f4
  01f2424  lis 3, 161
  01f2428  addic 3, 3, 2368
  01f242c  lwz 4, 24(3)
  01f2430  cmpwi 4, 0
  01f2434  bt 2, 0x1f2444
  01f2438  lwz 5, 36(30)
  01f243c  cmpw 4, 5
  01f2440  bt 2, 0x1f28f4
  01f2444  ori 6, 3, 0
  01f2448  lfs 2, 68(6)
  01f244c  lfs 3, 64(6)
  01f2450  fmuls 4, 2, 2
  01f2454  lfs 5, 72(6)
  01f2458  lis 3, 31
  01f245c  addi 3, 3, 8048
  01f2460  fmadds 4, 3, 3, 4
  01f2464  lfs 31, 4(3)
  01f2468  lfs 6, 32(6)
  01f246c  fmadds 4, 5, 5, 4
  01f2470  addic 4, 30, 16
  01f2474  addic 5, 6, 64
  01f2478  ori 3, 4, 0
  01f247c  fsqrts 4, 4
  01f2480  fdivs 1, 1, 4
  01f2484  fsub 7, 31, 4
  01f2488  fsub 8, 4, 31
  01f248c  fsub 9, 31, 4
  01f2490  fsub 10, 4, 31
  01f2494  fsub 11, 31, 4
  01f2498  fsub 4, 4, 31
  01f249c  fmuls 3, 3, 1
  01f24a0  fmuls 2, 2, 1
  01f24a4  fmuls 1, 5, 1
  01f24a8  fsel 5, 7, 31, 3
  01f24ac  fsel 7, 9, 31, 2
  01f24b0  fsel 9, 11, 31, 1
  01f24b4  fsel 3, 8, 5, 3
  01f24b8  fsel 2, 10, 7, 2
  01f24bc  fsel 1, 4, 9, 1
  01f24c0  fadds 3, 6, 3
  01f24c4  stfs 3, 16(31)
  01f24c8  lfs 3, 36(6)
  01f24cc  fadds 2, 3, 2
  01f24d0  stfs 2, 20(31)
  01f24d4  lfs 2, 40(6)
  01f24d8  fadds 1, 2, 1
  01f24dc  stfs 1, 24(31)
  01f24e0  lfs 1, 44(6)
  01f24e4  stfs 1, 28(31)
  01f24e8  bl 0x500608
  01f24ec  nop
  01f24f0  li 4, 0
  01f24f4  li 3, 1
  01f24f8  ori 5, 31, 0
  01f24fc  bl 0x15d12c
  01f2500  nop
  01f2504  lbz 4, 32(31)
  01f2508  lhz 3, 42(30)
  01f250c  cmpwi 4, 0
  01f2510  bf 2, 0x1f2648
  01f2514  li 3, 1
  01f2518  stb 3, 32(31)
  01f251c  lhz 3, 42(30)
  01f2520  addic 3, 3, 1
  01f2524  clrlwi 4, 3, 16
  01f2528  cmpwi 4, 1
  01f252c  sth 3, 42(30)
  01f2530  bf 2, 0x1f25a8
  01f2534  lfs 1, 20(30)
  01f2538  lfs 2, 16(30)
  01f253c  fmuls 3, 1, 1
  01f2540  lis 4, 114
  01f2544  lis 5, 118
  01f2548  lfs 4, -3052(4)
  01f254c  lfs 5, 24808(5)
  01f2550  fmadds 3, 2, 2, 3
  01f2554  fmuls 4, 4, 5
  01f2558  lis 4, 118
  01f255c  lfs 6, 24(30)
  01f2560  fsqrts 3, 3
  01f2564  fdivs 4, 4, 3
  01f2568  fsub 5, 31, 3
  01f256c  fsub 7, 31, 3
  01f2570  fsub 8, 3, 31
  01f2574  fsub 3, 3, 31
  01f2578  fmuls 2, 2, 4
  01f257c  fmuls 1, 1, 4
  01f2580  fsel 4, 5, 31, 2
  01f2584  fsel 5, 7, 31, 1
  01f2588  fsel 2, 8, 4, 2
  01f258c  fsel 1, 3, 5, 1
  01f2590  stfs 2, 16(30)
  01f2594  stfs 1, 20(30)
  01f2598  lfs 1, 24804(4)
  01f259c  fmuls 1, 6, 1
  01f25a0  stfs 1, 24(30)
  01f25a4  b 0x1f2648
  01f25a8  lis 4, 118
  01f25ac  lis 5, 118
  01f25b0  lfs 2, 24804(4)
  01f25b4  lfs 3, 20(30)
  01f25b8  lfs 4, 16(30)
  01f25bc  fmuls 5, 3, 2
  01f25c0  fmuls 6, 4, 2
  01f25c4  lis 4, 114
  01f25c8  fmuls 1, 5, 5
  01f25cc  fmadds 1, 6, 6, 1
  01f25d0  fsqrts 7, 1
  01f25d4  lfs 1, -3052(4)
  01f25d8  lfs 8, 24(30)
  01f25dc  lfs 9, 24788(5)
  01f25e0  fmuls 1, 1, 9
  01f25e4  fmuls 2, 8, 2
  01f25e8  fcmpu 0, 7, 1
  01f25ec  cror 6, 1, 2
  01f25f0  bt 6, 0x1f263c
  01f25f4  fmuls 5, 3, 3
  01f25f8  stfs 2, 24(30)
  01f25fc  fmadds 5, 4, 4, 5
  01f2600  fsqrts 5, 5
  01f2604  fdivs 1, 1, 5
  01f2608  fsub 2, 31, 5
  01f260c  fsub 6, 31, 5
  01f2610  fsub 7, 5, 31
  01f2614  fsub 5, 5, 31
  01f2618  fmuls 4, 4, 1
  01f261c  fmuls 1, 3, 1
  01f2620  fsel 2, 2, 31, 4
  01f2624  fsel 3, 6, 31, 1
  01f2628  fsel 2, 7, 2, 4
  01f262c  fsel 1, 5, 3, 1
  01f2630  stfs 2, 16(30)
  01f2634  stfs 1, 20(30)
  01f2638  b 0x1f2648
  01f263c  stfs 6, 16(30)
  01f2640  stfs 5, 20(30)
  01f2644  stfs 2, 24(30)
  01f2648  extsh 3, 3
  01f264c  cmpwi 3, 4
  01f2650  bt 0, 0x1f28f4
  01f2654  li 3, 2
  01f2658  stb 3, 32(31)
  01f265c  lfs 3, 20(30)
  01f2660  lfs 4, 16(30)
  01f2664  fmuls 1, 3, 3
  01f2668  lis 3, 118
  01f266c  lis 4, 114
  01f2670  lis 5, 118
  01f2674  fmadds 5, 4, 4, 1
  01f2678  lfs 1, 24804(3)
  01f267c  lwz 3, 32(30)
  01f2680  fsqrts 5, 5
  01f2684  fmuls 1, 5, 1
  01f2688  stfs 1, 28(30)
  01f268c  lfs 2, -3052(4)
  01f2690  lfs 6, 24788(5)
  01f2694  fmuls 2, 2, 6
  01f2698  fcmpu 0, 1, 2
  01f269c  cror 6, 1, 2
  01f26a0  bt 6, 0x1f26ac
  01f26a4  fmr 1, 2
  01f26a8  stfs 2, 28(30)
  01f26ac  fdivs 1, 1, 5
  01f26b0  li 4, 0
  01f26b4  extsw 3, 3
  01f26b8  stw 4, 24(30)
  01f26bc  fsub 2, 31, 5
  01f26c0  fsub 6, 31, 5
  01f26c4  fsub 7, 5, 31
  01f26c8  fsub 5, 5, 31
  01f26cc  fmuls 4, 4, 1
  01f26d0  fmuls 1, 3, 1
  01f26d4  fsel 2, 2, 31, 4
  01f26d8  fsel 3, 6, 31, 1
  01f26dc  fsel 2, 7, 2, 4
  01f26e0  fsel 1, 5, 3, 1
  01f26e4  stfs 2, 16(30)
  01f26e8  stfs 1, 20(30)
  01f26ec  bl 0x502730
  01f26f0  nop
  01f26f4  lis 3, 31
  01f26f8  addi 3, 3, 8048
  01f26fc  lfs 2, 28(3)
  01f2700  fdivs 1, 2, 1
  01f2704  stfs 1, 44(30)
  01f2708  b 0x1f28f4
  01f270c  lwz 3, 32(30)
  01f2710  extsw 3, 3
  01f2714  std 3, 224(1)
  01f2718  lis 3, 31
  01f271c  lfs 1, 44(30)
  01f2720  addi 29, 3, 8048
  01f2724  lfs 2, 36(29)
  01f2728  lfs 3, 40(29)
  01f272c  lfd 4, 224(1)
  01f2730  fcfid 4, 4
  01f2734  frsp 4, 4
  01f2738  fmuls 31, 4, 1
  01f273c  fmadds 1, 31, 2, 3
  01f2740  bl 0x502758
  01f2744  nop
  01f2748  lfs 1, 44(29)
  01f274c  ori 28, 3, 0
  01f2750  fmuls 1, 31, 1
  01f2754  bl 0x502758
  01f2758  nop
  01f275c  lfs 1, 48(29)
  01f2760  ori 27, 3, 0
  01f2764  fmuls 1, 31, 1
  01f2768  bl 0x502758
  01f276c  nop
  01f2770  slwi 4, 27, 8
  01f2774  slwi 3, 3, 16
  01f2778  or 4, 4, 28
  01f277c  lis 5, -256
  01f2780  or 3, 4, 3
  01f2784  lis 4, 118
  01f2788  or 3, 3, 5
  01f278c  stw 3, 144(31)
  01f2790  lfs 1, 28(29)
  01f2794  lfs 2, 24792(4)
  01f2798  lis 3, 114
  01f279c  lfs 4, 28(30)
  01f27a0  lis 4, 114
  01f27a4  fsubs 6, 2, 1
  01f27a8  lfs 5, -3064(3)
  01f27ac  lis 3, 118
  01f27b0  lfs 3, 16(30)
  01f27b4  lfs 2, 20(30)
  01f27b8  fmadds 5, 6, 5, 1
  01f27bc  lfs 1, 24(30)
  01f27c0  fmuls 4, 4, 5
  01f27c4  stfs 4, 28(30)
  01f27c8  lfs 5, -3052(4)
  01f27cc  lfs 6, 24788(3)
  01f27d0  fmuls 5, 5, 6
  01f27d4  fcmpu 0, 4, 5
  01f27d8  cror 6, 1, 2
  01f27dc  bt 6, 0x1f27e8
  01f27e0  fmr 4, 5
  01f27e4  stfs 5, 28(30)
  01f27e8  fmuls 5, 2, 2
  01f27ec  lis 3, 31
  01f27f0  addi 3, 3, 8048
  01f27f4  fmadds 5, 3, 3, 5
  01f27f8  lfs 6, 4(3)
  01f27fc  fmadds 5, 1, 1, 5
  01f2800  fsqrts 5, 5
  01f2804  fdivs 4, 4, 5
  01f2808  fsub 7, 6, 5
  01f280c  fsub 8, 6, 5
  01f2810  fsub 9, 6, 5
  01f2814  fsub 10, 5, 6
  01f2818  fsub 11, 5, 6
  01f281c  fsub 5, 5, 6
  01f2820  fmuls 2, 2, 4
  01f2824  fmuls 3, 3, 4
  01f2828  fmuls 1, 1, 4
  01f282c  fsel 4, 7, 6, 2
  01f2830  fsel 7, 8, 6, 3
  01f2834  fsel 6, 9, 6, 1
  01f2838  fsel 2, 10, 4, 2
  01f283c  fsel 3, 11, 7, 3
  01f2840  fsel 1, 5, 6, 1
  01f2844  stfs 2, 20(30)
  01f2848  stfs 3, 16(30)
  01f284c  stfs 1, 24(30)
  01f2850  lfs 1, 16(31)
  01f2854  lfs 2, 20(31)
  01f2858  fadds 1, 1, 3
  01f285c  lfs 3, 24(31)
  01f2860  stfs 1, 16(31)
  01f2864  lfs 1, 20(30)
  01f2868  fadds 1, 2, 1
  01f286c  stfs 1, 20(31)
  01f2870  lfs 1, 24(30)
  01f2874  fadds 1, 3, 1
  01f2878  stfs 1, 24(31)
  01f287c  b 0x1f28f4
  01f2880  lis 3, 31
  01f2884  li 7, 0
  01f2888  addi 3, 3, 8048
  01f288c  li 6, 1
  01f2890  li 11, -1
  01f2894  addic 4, 30, 16
  01f2898  ori 5, 29, 0
  01f289c  lfs 1, 52(3)
  01f28a0  li 8, 5
  01f28a4  lfs 2, 28(3)
  01f28a8  li 9, 2
  01f28ac  lfs 5, 56(3)
  01f28b0  li 10, 4
  01f28b4  lfs 7, 60(3)
  01f28b8  fmr 3, 1
  01f28bc  std 7, 144(1)
  01f28c0  ori 3, 31, 0
  01f28c4  std 6, 160(1)
  01f28c8  fmr 4, 2
  01f28cc  std 6, 168(1)
  01f28d0  fmr 6, 2
  01f28d4  std 11, 176(1)
  01f28d8  std 7, 184(1)
  01f28dc  bl 0x10e030
  01f28e0  nop
  01f28e4  ori 3, 31, 0
  01f28e8  bl 0xefb38
  01f28ec  nop
  01f28f0  b 0x1f2990
  01f28f4  lbz 3, 32(31)
  01f28f8  cmpwi 3, 0
  01f28fc  cmpwi 1, 3, 1
  01f2900  cmpwi 6, 3, 2
  01f2904  bt 2, 0x1f290c
  01f2908  bf 6, 0x1f2924
  01f290c  lfs 1, 20(30)
  01f2910  lfs 2, 16(30)
  01f2914  fmuls 1, 1, 1
  01f2918  fmadds 1, 2, 2, 1
  01f291c  fsqrts 1, 1
  01f2920  b 0x1f292c
  01f2924  bf 26, 0x1f2990
  01f2928  lfs 1, 28(30)
  01f292c  lis 3, 31
  01f2930  lis 4, 114
  01f2934  addi 3, 3, 8048
  01f2938  lfs 2, 64(3)
  01f293c  lfs 3, -3052(4)
  01f2940  lfs 4, 68(3)
  01f2944  fmuls 2, 3, 2
  01f2948  fmuls 3, 3, 4
  01f294c  lfs 6, 72(3)
  01f2950  fsub 4, 1, 2
  01f2954  fsubs 5, 3, 2
  01f2958  fsel 1, 4, 1, 2
  01f295c  fsub 4, 3, 1
  01f2960  fsel 1, 4, 1, 3
  01f2964  lfs 3, 28(3)
  01f2968  lfs 4, 76(3)
  01f296c  fsubs 1, 1, 2
  01f2970  fdivs 1, 1, 5
  01f2974  lfs 5, 68(31)
  01f2978  fmr 2, 5
  01f297c  fmadds 1, 1, 6, 3
  01f2980  fmuls 1, 1, 4
  01f2984  bl 0x502578
  01f2988  nop
  01f298c  stfs 1, 68(31)
  01f2990  li 0, 240
  01f2994  lvx 31, 1, 0
  01f2998  ld 0, 384(1)
  01f299c  mtlr 0
  01f29a0  lfd 26, 320(1)
  01f29a4  lfd 27, 328(1)
  01f29a8  lfd 28, 336(1)
  01f29ac  lfd 29, 344(1)
  01f29b0  lfd 30, 352(1)
  01f29b4  lfd 31, 360(1)
  01f29b8  ld 25, 264(1)
  01f29bc  ld 26, 272(1)
  01f29c0  ld 27, 280(1)
  01f29c4  ld 28, 288(1)
  01f29c8  ld 29, 296(1)
  01f29cc  ld 30, 304(1)
  01f29d0  ld 31, 312(1)
  01f29d4  addi 1, 1, 368
  01f29d8  blr
