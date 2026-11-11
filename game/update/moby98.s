# game/update/moby98.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_98:   # 0x4c8098, 0x238 bytes
  04c8098  stdu 1, -176(1)
  04c809c  mflr 0
  04c80a0  std 0, 192(1)
  04c80a4  stfd 28, 144(1)
  04c80a8  stfd 29, 152(1)
  04c80ac  stfd 30, 160(1)
  04c80b0  stfd 31, 168(1)
  04c80b4  std 31, 136(1)
  04c80b8  lbz 4, 32(3)
  04c80bc  std 30, 128(1)
  04c80c0  ori 31, 3, 0
  04c80c4  lwz 30, 120(3)
  04c80c8  cmpwi 4, 0
  04c80cc  cmpwi 1, 4, 1
  04c80d0  std 29, 120(1)
  04c80d4  cmpwi 6, 4, -1
  04c80d8  bt 1, 0x4c80e4
  04c80dc  bf 25, 0x4c82a4
  04c80e0  b 0x4c80ec
  04c80e4  bf 5, 0x4c814c
  04c80e8  b 0x4c82a4
  04c80ec  lwz 3, 0(30)
  04c80f0  cmpwi 3, -1
  04c80f4  bf 2, 0x4c8118
  04c80f8  lis 3, 102
  04c80fc  addic 3, 3, -29316
  04c8100  bl 0x5cd098
  04c8104  nop
  04c8108  ori 3, 31, 0
  04c810c  bl 0xefb38
  04c8110  nop
  04c8114  b 0x4c82a4
  04c8118  lfs 1, 16(31)
  04c811c  li 3, 1
  04c8120  stfs 1, 16(30)
  04c8124  lfs 1, 20(31)
  04c8128  stfs 1, 20(30)
  04c812c  lfs 1, 24(31)
  04c8130  stfs 1, 24(30)
  04c8134  lfs 1, 28(31)
  04c8138  stfs 1, 28(30)
  04c813c  lfs 1, 72(31)
  04c8140  stfs 1, 28(30)
  04c8144  stb 3, 32(31)
  04c8148  b 0x4c82a4
  04c814c  lis 3, 77
  04c8150  lbz 4, 188(31)
  04c8154  addi 3, 3, -32640
  04c8158  cmpwi 4, 0
  04c815c  lfs 1, 0(3)
  04c8160  bf 2, 0x4c8170
  04c8164  lis 3, 77
  04c8168  addi 3, 3, -32640
  04c816c  lfs 1, 4(3)
  04c8170  lfs 2, 4(30)
  04c8174  fcmpu 0, 2, 1
  04c8178  bt 2, 0x4c82a4
  04c817c  lis 3, 77
  04c8180  lis 4, 114
  04c8184  addi 29, 3, -32640
  04c8188  lis 6, 114
  04c818c  addic 3, 30, 4
  04c8190  addic 5, 30, 8
  04c8194  lfs 4, 8(29)
  04c8198  lfs 3, -3048(4)
  04c819c  lfs 5, -3052(6)
  04c81a0  fmuls 2, 3, 4
  04c81a4  fmuls 4, 5, 4
  04c81a8  fmr 3, 2
  04c81ac  bl 0x109c30
  04c81b0  nop
  04c81b4  lis 3, 165
  04c81b8  lwz 4, 0(30)
  04c81bc  lfs 3, 24(30)
  04c81c0  slwi 4, 4, 7
  04c81c4  lwz 3, 7128(3)
  04c81c8  lfs 4, 4(30)
  04c81cc  addc 3, 3, 4
  04c81d0  lfs 5, 16(30)
  04c81d4  lfs 6, 20(30)
  04c81d8  clrldi 3, 3, 32
  04c81dc  lfs 1, 56(3)
  04c81e0  lfs 2, 48(3)
  04c81e4  fsubs 7, 1, 3
  04c81e8  lfs 1, 52(3)
  04c81ec  fsubs 8, 2, 5
  04c81f0  lfs 31, 12(29)
  04c81f4  fsubs 9, 1, 6
  04c81f8  lfs 1, 120(3)
  04c81fc  lfs 2, 28(30)
  04c8200  fmadds 3, 4, 7, 3
  04c8204  fmadds 30, 4, 8, 5
  04c8208  fmadds 29, 4, 9, 6
  04c820c  fadds 28, 3, 31
  04c8210  bl 0x5025e0
  04c8214  nop
  04c8218  lfs 2, 4(30)
  04c821c  lfs 3, 28(30)
  04c8220  fmuls 1, 1, 2
  04c8224  fmr 2, 3
  04c8228  bl 0x502578
  04c822c  nop
  04c8230  stfs 1, 72(31)
  04c8234  lfs 1, 16(29)
  04c8238  lfs 2, 4(30)
  04c823c  fmuls 1, 2, 1
  04c8240  bl 0x502648
  04c8244  nop
  04c8248  stfs 1, 64(31)
  04c824c  addic 3, 31, 192
  04c8250  addic 4, 31, 64
  04c8254  bl 0x500b64
  04c8258  nop
  04c825c  lfs 1, 224(31)
  04c8260  lfs 2, 228(31)
  04c8264  lfs 3, 232(31)
  04c8268  lfs 4, 16(31)
  04c826c  lfs 5, 20(31)
  04c8270  lfs 6, 24(31)
  04c8274  fmadds 1, 1, 31, 4
  04c8278  fmadds 2, 2, 31, 5
  04c827c  fmadds 3, 3, 31, 6
  04c8280  fsubs 1, 30, 1
  04c8284  fsubs 2, 29, 2
  04c8288  fsubs 3, 28, 3
  04c828c  fadds 1, 4, 1
  04c8290  fadds 2, 5, 2
  04c8294  fadds 3, 6, 3
  04c8298  stfs 1, 16(31)
  04c829c  stfs 2, 20(31)
  04c82a0  stfs 3, 24(31)
  04c82a4  ld 0, 192(1)
  04c82a8  mtlr 0
  04c82ac  lfd 28, 144(1)
  04c82b0  lfd 29, 152(1)
  04c82b4  lfd 30, 160(1)
  04c82b8  lfd 31, 168(1)
  04c82bc  ld 29, 120(1)
  04c82c0  ld 30, 128(1)
  04c82c4  ld 31, 136(1)
  04c82c8  addi 1, 1, 176
  04c82cc  blr
