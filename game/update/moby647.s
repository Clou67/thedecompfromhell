# game/update/moby647.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_647:   # 0x400f48, 0x18c bytes
  0400f48  stdu 1, -144(1)
  0400f4c  mflr 0
  0400f50  std 0, 160(1)
  0400f54  std 31, 136(1)
  0400f58  lbz 4, 32(3)
  0400f5c  std 30, 128(1)
  0400f60  ori 31, 3, 0
  0400f64  lwz 30, 120(3)
  0400f68  cmpwi 4, 0
  0400f6c  cmpwi 1, 4, 1
  0400f70  std 29, 120(1)
  0400f74  cmpwi 6, 4, -1
  0400f78  bt 1, 0x400f84
  0400f7c  bf 25, 0x4010b8
  0400f80  b 0x400f8c
  0400f84  bf 5, 0x400fb8
  0400f88  b 0x4010b8
  0400f8c  lfs 1, 16(31)
  0400f90  li 3, 2
  0400f94  stfs 1, 0(30)
  0400f98  lfs 1, 20(31)
  0400f9c  stfs 1, 4(30)
  0400fa0  lfs 1, 24(31)
  0400fa4  stfs 1, 8(30)
  0400fa8  lfs 1, 28(31)
  0400fac  stfs 1, 12(30)
  0400fb0  stb 3, 32(31)
  0400fb4  b 0x4010b8
  0400fb8  lfs 1, 0(30)
  0400fbc  lis 3, 64
  0400fc0  stfs 1, 16(31)
  0400fc4  lfs 1, 4(30)
  0400fc8  addi 29, 3, 3896
  0400fcc  lis 3, 114
  0400fd0  stfs 1, 20(31)
  0400fd4  lfs 1, 8(30)
  0400fd8  lis 4, 114
  0400fdc  addic 5, 30, 16
  0400fe0  stfs 1, 24(31)
  0400fe4  lfs 1, 12(30)
  0400fe8  stfs 1, 28(31)
  0400fec  lfs 2, 0(29)
  0400ff0  lfs 5, 4(29)
  0400ff4  lfs 3, -3048(3)
  0400ff8  lfs 1, 20(30)
  0400ffc  fmuls 2, 3, 2
  0401000  lfs 6, -3052(4)
  0401004  addic 3, 30, 24
  0401008  fmuls 4, 6, 5
  040100c  fmr 3, 2
  0401010  bl 0x109c30
  0401014  nop
  0401018  lfs 1, 196(31)
  040101c  lfs 2, 192(31)
  0401020  fmuls 3, 1, 1
  0401024  lfs 4, 200(31)
  0401028  lfs 5, 24(30)
  040102c  lfs 6, 8(29)
  0401030  fmadds 3, 2, 2, 3
  0401034  lfs 7, 16(31)
  0401038  lfs 8, 20(31)
  040103c  lfs 9, 24(31)
  0401040  fmadds 3, 4, 4, 3
  0401044  fsqrts 3, 3
  0401048  fdivs 5, 5, 3
  040104c  fsub 10, 6, 3
  0401050  fsub 11, 6, 3
  0401054  fsub 12, 6, 3
  0401058  fsub 13, 3, 6
  040105c  fsub 0, 3, 6
  0401060  fsub 3, 3, 6
  0401064  fmuls 4, 4, 5
  0401068  fmuls 1, 1, 5
  040106c  fmuls 2, 2, 5
  0401070  fsel 5, 10, 6, 4
  0401074  fsel 10, 11, 6, 1
  0401078  fsel 6, 12, 6, 2
  040107c  fsel 4, 13, 5, 4
  0401080  fsel 1, 0, 10, 1
  0401084  fsel 2, 3, 6, 2
  0401088  fadds 3, 9, 4
  040108c  fadds 1, 8, 1
  0401090  fadds 2, 7, 2
  0401094  stfs 3, 24(31)
  0401098  stfs 1, 20(31)
  040109c  stfs 2, 16(31)
  04010a0  lwz 3, 24(30)
  04010a4  lwz 4, 20(30)
  04010a8  cmpw 3, 4
  04010ac  bf 2, 0x4010b8
  04010b0  li 3, 2
  04010b4  stb 3, 32(31)
  04010b8  ld 0, 160(1)
  04010bc  mtlr 0
  04010c0  ld 29, 120(1)
  04010c4  ld 30, 128(1)
  04010c8  ld 31, 136(1)
  04010cc  addi 1, 1, 144
  04010d0  blr
