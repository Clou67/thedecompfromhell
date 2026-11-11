# game/update/moby126.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_126:   # 0x22b6c0, 0x154 bytes
  022b6c0  stdu 1, -144(1)
  022b6c4  mflr 0
  022b6c8  std 0, 160(1)
  022b6cc  std 31, 136(1)
  022b6d0  ori 31, 3, 0
  022b6d4  lbz 3, 32(3)
  022b6d8  cmpwi 3, 0
  022b6dc  bf 2, 0x22b710
  022b6e0  lis 4, 35
  022b6e4  li 3, 1
  022b6e8  addi 4, 4, -18796
  022b6ec  lis 6, 119
  022b6f0  li 5, 48
  022b6f4  stb 3, 32(31)
  022b6f8  addic 3, 6, 4928
  022b6fc  lfs 1, 0(4)
  022b700  bl 0x17e31c
  022b704  nop
  022b708  li 3, 255
  022b70c  stb 3, 48(31)
  022b710  lis 3, 161
  022b714  lis 4, -18933
  022b718  ori 4, 4, 24759
  022b71c  lwz 3, 1808(3)
  022b720  mulhw 4, 4, 3
  022b724  addc 4, 4, 3
  022b728  srawi 4, 4, 8
  022b72c  srwi 5, 4, 31
  022b730  addc 4, 4, 5
  022b734  sldi 5, 4, 7
  022b738  sldi 4, 4, 3
  022b73c  subc 4, 5, 4
  022b740  addc 5, 4, 4
  022b744  addc 4, 4, 5
  022b748  subc 3, 3, 4
  022b74c  lis 4, 35
  022b750  extsw 3, 3
  022b754  std 3, 112(1)
  022b758  addi 3, 4, -18796
  022b75c  lfs 1, 4(3)
  022b760  lfs 2, 8(3)
  022b764  lfs 3, 12(3)
  022b768  lfs 4, 16(3)
  022b76c  lfd 5, 112(1)
  022b770  fcfid 5, 5
  022b774  lis 5, 116
  022b778  lis 6, 17220
  022b77c  lis 7, 113
  022b780  ori 4, 31, 0
  022b784  frsp 5, 5
  022b788  fmsubs 1, 5, 1, 2
  022b78c  lfs 5, 20(3)
  022b790  fsubs 2, 3, 1
  022b794  fsubs 3, 4, 1
  022b798  fsub 4, 1, 2
  022b79c  fsel 1, 4, 2, 1
  022b7a0  lfs 2, 24(3)
  022b7a4  fsub 4, 3, 1
  022b7a8  fsel 1, 4, 3, 1
  022b7ac  lfs 3, 28(3)
  022b7b0  lfs 4, 32(3)
  022b7b4  lfs 7, 36(3)
  022b7b8  lfs 8, 40(3)
  022b7bc  lis 3, 119
  022b7c0  stw 6, -22160(5)
  022b7c4  addic 8, 3, 4928
  022b7c8  fmuls 6, 1, 1
  022b7cc  addic 3, 7, -26264
  022b7d0  fmuls 9, 6, 1
  022b7d4  fmuls 10, 6, 9
  022b7d8  fmadds 1, 9, 5, 1
  022b7dc  fmuls 5, 6, 10
  022b7e0  fmadds 1, 10, 2, 1
  022b7e4  fmuls 2, 6, 5
  022b7e8  fmadds 1, 5, 3, 1
  022b7ec  fmadds 1, 2, 4, 1
  022b7f0  fmadds 1, 1, 7, 8
  022b7f4  stfs 1, 8(8)
  022b7f8  bl 0x6d720
  022b7fc  nop
  022b800  ld 0, 160(1)
  022b804  mtlr 0
  022b808  ld 31, 136(1)
  022b80c  addi 1, 1, 144
  022b810  blr
