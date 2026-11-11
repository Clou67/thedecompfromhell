# game/update/moby105.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_105:   # 0x1a2398, 0x168 bytes
  01a2398  stdu 1, -128(1)
  01a239c  mflr 0
  01a23a0  std 0, 144(1)
  01a23a4  std 31, 120(1)
  01a23a8  ori 31, 3, 0
  01a23ac  lbz 3, 32(31)
  01a23b0  cmpwi 3, 0
  01a23b4  cmpwi 1, 3, 1
  01a23b8  bf 2, 0x1a23c8
  01a23bc  li 3, 1
  01a23c0  stb 3, 32(31)
  01a23c4  b 0x1a23cc
  01a23c8  bf 6, 0x1a243c
  01a23cc  lis 4, 150
  01a23d0  lis 5, 151
  01a23d4  addic 6, 4, 19008
  01a23d8  addic 4, 5, -25376
  01a23dc  lwz 5, 160(6)
  01a23e0  lwz 6, 4256(4)
  01a23e4  and 5, 5, 6
  01a23e8  cmpwi 5, 0
  01a23ec  bt 2, 0x1a243c
  01a23f0  lwz 5, 8324(4)
  01a23f4  cmpwi 5, 23
  01a23f8  bf 2, 0x1a243c
  01a23fc  lwz 4, 8320(4)
  01a2400  lbz 4, 82(4)
  01a2404  cmpwi 4, 0
  01a2408  bf 2, 0x1a243c
  01a240c  lbz 3, 83(31)
  01a2410  cmpwi 3, 3
  01a2414  bt 2, 0x1a2430
  01a2418  ori 3, 31, 0
  01a241c  li 4, 3
  01a2420  li 5, 0
  01a2424  li 6, 3
  01a2428  bl 0xfddc0
  01a242c  nop
  01a2430  li 3, 2
  01a2434  stb 3, 32(31)
  01a2438  b 0x1a2444
  01a243c  cmpwi 3, 2
  01a2440  bf 2, 0x1a24ec
  01a2444  lbz 4, 82(31)
  01a2448  lbz 3, 83(31)
  01a244c  cmpwi 1, 4, 3
  01a2450  cmpw 4, 3
  01a2454  cmpwi 6, 3, 4
  01a2458  cmpwi 7, 4, 4
  01a245c  bf 2, 0x1a24ec
  01a2460  lbz 5, 112(31)
  01a2464  rlwinm 5, 5, 0, 30, 30
  01a2468  cmpwi 5, 0
  01a246c  bt 2, 0x1a24ec
  01a2470  bf 6, 0x1a2494
  01a2474  bt 26, 0x1a24ec
  01a2478  ori 3, 31, 0
  01a247c  li 4, 4
  01a2480  li 5, 0
  01a2484  li 6, 5
  01a2488  bl 0xfddc0
  01a248c  nop
  01a2490  b 0x1a24ec
  01a2494  bf 30, 0x1a24bc
  01a2498  cmpwi 3, 5
  01a249c  bt 2, 0x1a24ec
  01a24a0  ori 3, 31, 0
  01a24a4  li 4, 5
  01a24a8  li 5, 0
  01a24ac  li 6, 5
  01a24b0  bl 0xfddc0
  01a24b4  nop
  01a24b8  b 0x1a24ec
  01a24bc  cmpwi 4, 5
  01a24c0  bf 2, 0x1a24ec
  01a24c4  cmpwi 3, 1
  01a24c8  bt 2, 0x1a24e4
  01a24cc  ori 3, 31, 0
  01a24d0  li 4, 1
  01a24d4  li 5, 0
  01a24d8  li 6, 5
  01a24dc  bl 0xfddc0
  01a24e0  nop
  01a24e4  li 3, 1
  01a24e8  stb 3, 32(31)
  01a24ec  ld 0, 144(1)
  01a24f0  mtlr 0
  01a24f4  ld 31, 120(1)
  01a24f8  addi 1, 1, 128
  01a24fc  blr
