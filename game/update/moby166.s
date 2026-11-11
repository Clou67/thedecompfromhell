# game/update/moby166.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_166:   # 0x2a8258, 0x20c bytes
  02a8258  stdu 1, -144(1)
  02a825c  mflr 0
  02a8260  std 0, 160(1)
  02a8264  std 31, 136(1)
  02a8268  lbz 4, 32(3)
  02a826c  std 30, 128(1)
  02a8270  ori 31, 3, 0
  02a8274  lwz 30, 120(3)
  02a8278  cmpwi 4, 0
  02a827c  cmpwi 1, 4, 1
  02a8280  std 29, 120(1)
  02a8284  cmpwi 6, 4, -1
  02a8288  bt 1, 0x2a8294
  02a828c  bf 25, 0x2a8448
  02a8290  b 0x2a829c
  02a8294  bf 5, 0x2a8304
  02a8298  b 0x2a8448
  02a829c  li 3, 1
  02a82a0  lis 5, 251
  02a82a4  lis 4, 164
  02a82a8  li 6, 3
  02a82ac  stb 3, 32(31)
  02a82b0  lwz 3, 16(30)
  02a82b4  lwz 5, -1968(5)
  02a82b8  slwi 3, 3, 8
  02a82bc  stw 5, 4(30)
  02a82c0  lwz 4, -28512(4)
  02a82c4  lwz 5, 20(30)
  02a82c8  addc 3, 4, 3
  02a82cc  slwi 5, 5, 8
  02a82d0  lwz 7, 24(30)
  02a82d4  stw 6, 8(30)
  02a82d8  addc 5, 4, 5
  02a82dc  lwz 6, 28(30)
  02a82e0  slwi 7, 7, 8
  02a82e4  stw 3, 32(30)
  02a82e8  addc 3, 4, 7
  02a82ec  stw 5, 36(30)
  02a82f0  slwi 5, 6, 8
  02a82f4  addc 4, 4, 5
  02a82f8  stw 3, 40(30)
  02a82fc  stw 4, 44(30)
  02a8300  b 0x2a8448
  02a8304  ori 3, 31, 0
  02a8308  lis 4, 1
  02a830c  li 5, 0
  02a8310  bl 0x10675c
  02a8314  nop
  02a8318  ori 29, 3, 0
  02a831c  addic 3, 30, 12
  02a8320  bl 0x4fff60
  02a8324  nop
  02a8328  cmpwi 29, 0
  02a832c  bt 2, 0x2a8374
  02a8330  lwz 3, 12(30)
  02a8334  cmpwi 3, 0
  02a8338  bf 2, 0x2a8374
  02a833c  li 3, 255
  02a8340  lis 4, 251
  02a8344  stb 3, 164(31)
  02a8348  lwz 3, 8(30)
  02a834c  lwz 4, -1964(4)
  02a8350  addic 3, 3, -1
  02a8354  stw 4, 12(30)
  02a8358  cmpwi 3, 0
  02a835c  stw 3, 8(30)
  02a8360  bt 1, 0x2a8374
  02a8364  ori 3, 31, 0
  02a8368  bl 0xefb38
  02a836c  nop
  02a8370  b 0x2a8448
  02a8374  lwz 3, 32(30)
  02a8378  lbz 3, 32(3)
  02a837c  cmpwi 3, 80
  02a8380  bt 2, 0x2a83b4
  02a8384  lwz 3, 36(30)
  02a8388  lbz 3, 32(3)
  02a838c  cmpwi 3, 80
  02a8390  bt 2, 0x2a83b4
  02a8394  lwz 3, 40(30)
  02a8398  lbz 3, 32(3)
  02a839c  cmpwi 3, 80
  02a83a0  bt 2, 0x2a83b4
  02a83a4  lwz 3, 44(30)
  02a83a8  lbz 3, 32(3)
  02a83ac  cmpwi 3, 80
  02a83b0  bf 2, 0x2a8448
  02a83b4  addic 3, 30, 4
  02a83b8  bl 0x4fff60
  02a83bc  nop
  02a83c0  cmpwi 3, 0
  02a83c4  bt 2, 0x2a8448
  02a83c8  lis 5, 251
  02a83cc  li 4, 0
  02a83d0  ori 3, 30, 0
  02a83d4  lwz 5, -1968(5)
  02a83d8  stw 5, 4(30)
  02a83dc  lwz 5, 32(3)
  02a83e0  lbz 5, 32(5)
  02a83e4  cmpwi 5, 80
  02a83e8  bf 2, 0x2a8438
  02a83ec  slwi 3, 4, 2
  02a83f0  li 4, 81
  02a83f4  addc 3, 30, 3
  02a83f8  li 5, 255
  02a83fc  clrldi 3, 3, 32
  02a8400  lwz 6, 32(3)
  02a8404  stb 4, 32(6)
  02a8408  lwz 4, 32(3)
  02a840c  lfs 1, 16(31)
  02a8410  stfs 1, 16(4)
  02a8414  lfs 1, 20(31)
  02a8418  stfs 1, 20(4)
  02a841c  lfs 1, 24(31)
  02a8420  stfs 1, 24(4)
  02a8424  lfs 1, 28(31)
  02a8428  stfs 1, 28(4)
  02a842c  lwz 3, 32(3)
  02a8430  stb 5, 164(3)
  02a8434  b 0x2a8448
  02a8438  addic 4, 4, 1
  02a843c  addic 3, 3, 4
  02a8440  cmpwi 4, 4
  02a8444  bt 0, 0x2a83dc
  02a8448  ld 0, 160(1)
  02a844c  mtlr 0
  02a8450  ld 29, 120(1)
  02a8454  ld 30, 128(1)
  02a8458  ld 31, 136(1)
  02a845c  addi 1, 1, 144
  02a8460  blr
