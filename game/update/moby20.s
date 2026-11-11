# game/update/moby20.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_20:   # 0x2e6768, 0x138 bytes
  02e6768  stdu 1, -128(1)
  02e676c  mflr 0
  02e6770  std 0, 144(1)
  02e6774  std 31, 120(1)
  02e6778  ori 31, 3, 0
  02e677c  lbz 4, 32(31)
  02e6780  lwz 3, 120(31)
  02e6784  lfs 2, 16(31)
  02e6788  cmpwi 4, 0
  02e678c  cmpwi 1, 4, 1
  02e6790  lfs 1, 20(31)
  02e6794  cmpwi 6, 4, -1
  02e6798  bt 1, 0x2e67a4
  02e679c  bf 25, 0x2e688c
  02e67a0  b 0x2e67ac
  02e67a4  bf 5, 0x2e67b4
  02e67a8  b 0x2e688c
  02e67ac  li 4, 1
  02e67b0  stb 4, 32(31)
  02e67b4  lis 4, 151
  02e67b8  addic 4, 4, -25376
  02e67bc  lfs 3, 132(4)
  02e67c0  lfs 4, 128(4)
  02e67c4  fsubs 1, 1, 3
  02e67c8  fsubs 2, 2, 4
  02e67cc  lis 4, 46
  02e67d0  addi 4, 4, 26464
  02e67d4  fmuls 1, 1, 1
  02e67d8  fmadds 1, 2, 2, 1
  02e67dc  lfs 2, 0(4)
  02e67e0  fsqrts 1, 1
  02e67e4  fcmpu 0, 1, 2
  02e67e8  cror 6, 1, 2
  02e67ec  bt 6, 0x2e6884
  02e67f0  lis 4, 151
  02e67f4  addic 4, 4, -16064
  02e67f8  lbz 4, 4(4)
  02e67fc  cmpwi 4, 0
  02e6800  bf 2, 0x2e6884
  02e6804  lis 3, 151
  02e6808  lwz 3, -25440(3)
  02e680c  cmpwi 3, 4000
  02e6810  bf 0, 0x2e6828
  02e6814  li 3, 4
  02e6818  li 4, 12009
  02e681c  bl 0x11aeec
  02e6820  nop
  02e6824  b 0x2e688c
  02e6828  li 4, 12008
  02e682c  li 3, 4
  02e6830  bl 0x11aeec
  02e6834  nop
  02e6838  lis 4, 150
  02e683c  addic 4, 4, 19008
  02e6840  lwz 4, 164(4)
  02e6844  rlwinm 4, 4, 0, 27, 27
  02e6848  cmpwi 4, 0
  02e684c  bt 2, 0x2e688c
  02e6850  cmpwi 3, 0
  02e6854  bt 2, 0x2e688c
  02e6858  lis 5, 151
  02e685c  li 3, 4
  02e6860  li 4, 1
  02e6864  lwz 6, -25440(5)
  02e6868  addic 6, 6, -4000
  02e686c  stw 6, -25440(5)
  02e6870  bl 0x112e18
  02e6874  nop
  02e6878  li 3, 2
  02e687c  stb 3, 32(31)
  02e6880  b 0x2e688c
  02e6884  li 4, -1
  02e6888  stw 4, 0(3)
  02e688c  ld 0, 144(1)
  02e6890  mtlr 0
  02e6894  ld 31, 120(1)
  02e6898  addi 1, 1, 128
  02e689c  blr
