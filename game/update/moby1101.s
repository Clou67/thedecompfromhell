# game/update/moby1101.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1532_001be048:   # 0x1be048, 0x14 bytes
  01be048  lis 3, 118
  01be04c  lis 4, 1
  01be050  addic 3, 3, 15780
  01be054  stw 4, 72(3)
  01be058  blr

M1532_001be070:   # 0x1be070, 0x5c bytes
  01be070  ori 4, 3, 0
  01be074  lis 3, 28
  01be078  addi 3, 3, -8096
  01be07c  lhz 4, 166(4)
  01be080  extsh 4, 4
  01be084  cmpwi 4, 1530
  01be088  cmpwi 1, 4, 1532
  01be08c  cmpwi 6, 4, 1531
  01be090  cmpwi 7, 4, 1101
  01be094  bt 1, 0x1be0a0
  01be098  bt 30, 0x1be0ac
  01be09c  b 0x1be0c4
  01be0a0  bf 25, 0x1be0bc
  01be0a4  bf 5, 0x1be0b4
  01be0a8  b 0x1be0c4
  01be0ac  lfs 1, 0(3)
  01be0b0  b 0x1be0c8
  01be0b4  lfs 1, 0(3)
  01be0b8  b 0x1be0c8
  01be0bc  lfs 1, 4(3)
  01be0c0  b 0x1be0c8
  01be0c4  lfs 1, 8(3)
  01be0c8  blr

UpdateMoby_1101:   # 0x1be0e0, 0x2d4 bytes
  01be0e0  stdu 1, -128(1)
  01be0e4  mflr 0
  01be0e8  std 0, 144(1)
  01be0ec  std 31, 120(1)
  01be0f0  lbz 4, 32(3)
  01be0f4  std 30, 112(1)
  01be0f8  ori 31, 3, 0
  01be0fc  lwz 30, 120(3)
  01be100  cmpwi 4, 1
  01be104  cmpwi 1, 4, -1
  01be108  cmpwi 6, 4, 0
  01be10c  cmpwi 7, 4, 2
  01be110  bt 1, 0x1be120
  01be114  bf 5, 0x1be39c
  01be118  bf 25, 0x1be128
  01be11c  b 0x1be13c
  01be120  bf 29, 0x1be270
  01be124  b 0x1be39c
  01be128  li 3, 1
  01be12c  lfs 1, 24(31)
  01be130  stfs 1, 4(30)
  01be134  stb 3, 32(31)
  01be138  b 0x1be39c
  01be13c  lis 3, 165
  01be140  lhz 4, 178(31)
  01be144  addic 5, 3, 17860
  01be148  extsh 3, 4
  01be14c  lbzx 5, 5, 3
  01be150  cmpwi 5, 0
  01be154  bf 2, 0x1be200
  01be158  lis 6, 151
  01be15c  lis 5, 161
  01be160  srawi 3, 3, 5
  01be164  addic 5, 5, -13028
  01be168  sldi 3, 3, 2
  01be16c  lwz 6, -25488(6)
  01be170  addc 3, 3, 5
  01be174  slwi 5, 6, 8
  01be178  clrldi 3, 3, 32
  01be17c  extsw 5, 5
  01be180  li 7, 1
  01be184  clrlwi 4, 4, 27
  01be188  slw 4, 7, 4
  01be18c  lwzx 3, 3, 5
  01be190  and 3, 3, 4
  01be194  cmpwi 3, 0
  01be198  bf 2, 0x1be200
  01be19c  lwz 3, 0(30)
  01be1a0  cmpwi 1, 3, -1
  01be1a4  slwi 3, 3, 8
  01be1a8  bt 6, 0x1be1d4
  01be1ac  lis 4, 164
  01be1b0  lwz 4, -28512(4)
  01be1b4  addc 4, 4, 3
  01be1b8  clrldi 4, 4, 32
  01be1bc  lhz 5, 166(4)
  01be1c0  cmpwi 5, 615
  01be1c4  bf 2, 0x1be1d4
  01be1c8  lbz 4, 32(4)
  01be1cc  cmpwi 4, 4
  01be1d0  bt 2, 0x1be200
  01be1d4  bt 6, 0x1be39c
  01be1d8  lis 4, 164
  01be1dc  lwz 4, -28512(4)
  01be1e0  addc 3, 4, 3
  01be1e4  clrldi 3, 3, 32
  01be1e8  lhz 4, 166(3)
  01be1ec  cmpwi 4, 1190
  01be1f0  bf 2, 0x1be39c
  01be1f4  lbz 3, 32(3)
  01be1f8  cmpwi 3, 2
  01be1fc  bf 2, 0x1be39c
  01be200  lhz 3, 166(31)
  01be204  cmpwi 3, 1101
  01be208  cmpwi 1, 3, 1532
  01be20c  bt 2, 0x1be214
  01be210  bf 6, 0x1be22c
  01be214  li 3, 0
  01be218  li 4, 0
  01be21c  ori 5, 31, 0
  01be220  li 6, 1101
  01be224  bl 0x15d204
  01be228  nop
  01be22c  lis 3, 28
  01be230  li 4, 2
  01be234  vspltisw 2, -1
  01be238  addi 3, 3, -7988
  01be23c  lis 5, 114
  01be240  li 6, -3056
  01be244  stb 4, 32(31)
  01be248  vslw 2, 2, 2
  01be24c  lvlx 3, 0, 3
  01be250  li 3, 8
  01be254  vspltw 3, 3, 0
  01be258  lvlx 4, 6, 5
  01be25c  vmaddfp 2, 4, 3, 2
  01be260  vctsxs 2, 2, 0
  01be264  vspltw 2, 2, 0
  01be268  stvewx 2, 3, 30
  01be26c  b 0x1be39c
  01be270  lhz 3, 166(31)
  01be274  lfs 2, 24(31)
  01be278  extsh 3, 3
  01be27c  cmpwi 3, 1530
  01be280  cmpwi 1, 3, 1101
  01be284  cmpwi 6, 3, 1531
  01be288  cmpwi 7, 3, 1532
  01be28c  bt 1, 0x1be298
  01be290  bt 6, 0x1be2a4
  01be294  b 0x1be2d4
  01be298  bf 25, 0x1be2c4
  01be29c  bf 29, 0x1be2b4
  01be2a0  b 0x1be2d4
  01be2a4  lis 3, 28
  01be2a8  addi 3, 3, -7988
  01be2ac  lfs 1, 4(3)
  01be2b0  b 0x1be2e0
  01be2b4  lis 3, 28
  01be2b8  addi 3, 3, -7988
  01be2bc  lfs 1, 4(3)
  01be2c0  b 0x1be2e0
  01be2c4  lis 3, 28
  01be2c8  addi 3, 3, -7988
  01be2cc  lfs 1, 8(3)
  01be2d0  b 0x1be2e0
  01be2d4  lis 3, 28
  01be2d8  addi 3, 3, -7988
  01be2dc  lfs 1, 12(3)
  01be2e0  lis 4, 114
  01be2e4  addic 3, 30, 8
  01be2e8  lfs 3, -3052(4)
  01be2ec  fmadds 1, 1, 3, 2
  01be2f0  stfs 1, 24(31)
  01be2f4  bl 0x4fff60
  01be2f8  nop
  01be2fc  cmpwi 3, 0
  01be300  bt 2, 0x1be39c
  01be304  lhz 5, 178(31)
  01be308  lis 4, 151
  01be30c  extsh 6, 5
  01be310  lis 3, 161
  01be314  srawi 6, 6, 5
  01be318  addic 3, 3, -13028
  01be31c  lwz 4, -25488(4)
  01be320  sldi 6, 6, 2
  01be324  slwi 4, 4, 8
  01be328  addc 3, 6, 3
  01be32c  extsw 4, 4
  01be330  clrldi 3, 3, 32
  01be334  extsh 6, 5
  01be338  lis 7, 165
  01be33c  clrlwi 8, 5, 27
  01be340  srawi 6, 6, 5
  01be344  li 9, 1
  01be348  addic 7, 7, 19920
  01be34c  lwzx 10, 3, 4
  01be350  sldi 6, 6, 2
  01be354  slw 8, 9, 8
  01be358  clrlwi 5, 5, 27
  01be35c  or 8, 10, 8
  01be360  slw 5, 9, 5
  01be364  lhz 9, 166(31)
  01be368  lwzx 10, 7, 6
  01be36c  stwx 8, 3, 4
  01be370  or 3, 10, 5
  01be374  cmpwi 9, 1101
  01be378  stwx 3, 7, 6
  01be37c  bf 2, 0x1be394
  01be380  li 3, 1
  01be384  li 4, 0
  01be388  ori 5, 31, 0
  01be38c  bl 0x15d12c
  01be390  nop
  01be394  li 3, 3
  01be398  stb 3, 32(31)
  01be39c  ld 0, 144(1)
  01be3a0  mtlr 0
  01be3a4  ld 30, 112(1)
  01be3a8  ld 31, 120(1)
  01be3ac  addi 1, 1, 128
  01be3b0  blr

M1532_001be3b4:   # 0x1be3b4, 0x14 bytes
  01be3b4  lis 3, 118
  01be3b8  lis 4, 1
  01be3bc  addic 3, 3, 15892
  01be3c0  stw 4, 72(3)
  01be3c4  blr

M1532_001be3c8:   # 0x1be3c8, 0xf8 bytes
  01be3c8  stdu 1, -160(1)
  01be3cc  mflr 0
  01be3d0  std 0, 176(1)
  01be3d4  std 31, 152(1)
  01be3d8  lis 4, 161
  01be3dc  ori 31, 3, 0
  01be3e0  lwz 3, 1800(4)
  01be3e4  std 30, 144(1)
  01be3e8  std 29, 136(1)
  01be3ec  std 28, 128(1)
  01be3f0  std 27, 120(1)
  01be3f4  cmpwi 3, 2
  01be3f8  bf 2, 0x1be49c
  01be3fc  lis 3, 151
  01be400  lbz 3, -16268(3)
  01be404  cmpwi 3, 0
  01be408  bt 2, 0x1be49c
  01be40c  lis 28, 150
  01be410  li 27, 0
  01be414  addic 28, 28, -12976
  01be418  lhz 3, 68(28)
  01be41c  extsh 4, 3
  01be420  cmpwi 4, 0
  01be424  bf 1, 0x1be49c
  01be428  lis 29, 162
  01be42c  ori 30, 28, 0
  01be430  addic 29, 29, -16512
  01be434  lwz 4, 376(30)
  01be438  lhz 5, 166(31)
  01be43c  extsh 5, 5
  01be440  lhz 6, 166(4)
  01be444  extsh 6, 6
  01be448  cmpw 6, 5
  01be44c  bf 2, 0x1be488
  01be450  lbz 5, 1(29)
  01be454  cmpwi 5, 0
  01be458  bf 2, 0x1be488
  01be45c  ori 3, 4, 0
  01be460  li 4, 1
  01be464  ori 5, 29, 0
  01be468  bl 0xf0ea8
  01be46c  nop
  01be470  lis 4, 118
  01be474  lhz 3, 68(28)
  01be478  lfs 1, 16000(4)
  01be47c  stfs 1, 32(29)
  01be480  stfs 1, 36(29)
  01be484  stfs 1, 40(29)
  01be488  extsh 4, 3
  01be48c  addic 27, 27, 1
  01be490  addic 30, 30, 4
  01be494  cmpw 27, 4
  01be498  bt 0, 0x1be434
  01be49c  ld 0, 176(1)
  01be4a0  mtlr 0
  01be4a4  ld 27, 120(1)
  01be4a8  ld 28, 128(1)
  01be4ac  ld 29, 136(1)
  01be4b0  ld 30, 144(1)
  01be4b4  ld 31, 152(1)
  01be4b8  addi 1, 1, 160
  01be4bc  blr
