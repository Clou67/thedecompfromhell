# game/update/moby1142.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1142:   # 0x1def78, 0x548 bytes
  01def78  stdu 1, -288(1)
  01def7c  mflr 0
  01def80  std 0, 304(1)
  01def84  stfd 27, 248(1)
  01def88  stfd 28, 256(1)
  01def8c  stfd 29, 264(1)
  01def90  stfd 30, 272(1)
  01def94  stfd 31, 280(1)
  01def98  std 31, 240(1)
  01def9c  lbz 4, 32(3)
  01defa0  std 30, 232(1)
  01defa4  ori 31, 3, 0
  01defa8  lwz 30, 120(3)
  01defac  cmpwi 4, 0
  01defb0  cmpwi 1, 4, 1
  01defb4  std 29, 224(1)
  01defb8  std 28, 216(1)
  01defbc  std 27, 208(1)
  01defc0  std 26, 200(1)
  01defc4  std 25, 192(1)
  01defc8  std 24, 184(1)
  01defcc  std 23, 176(1)
  01defd0  std 22, 168(1)
  01defd4  std 21, 160(1)
  01defd8  std 20, 152(1)
  01defdc  std 19, 144(1)
  01defe0  std 18, 136(1)
  01defe4  cmpwi 6, 4, -1
  01defe8  bt 1, 0x1deff4
  01defec  bf 25, 0x1df464
  01deff0  b 0x1deffc
  01deff4  bf 5, 0x1df150
  01deff8  b 0x1df464
  01deffc  lwz 4, 0(30)
  01df000  li 3, 0
  01df004  cmpwi 4, -1
  01df008  ori 29, 3, 0
  01df00c  bf 2, 0x1df024
  01df010  lis 3, 101
  01df014  addic 3, 3, 18256
  01df018  bl 0x5cd098
  01df01c  nop
  01df020  li 3, 1
  01df024  cmpwi 1, 3, 0
  01df028  lwz 3, 4(30)
  01df02c  cmpwi 3, -1
  01df030  bf 2, 0x1df048
  01df034  lis 3, 101
  01df038  addic 3, 3, 18256
  01df03c  bl 0x5cd098
  01df040  nop
  01df044  b 0x1df04c
  01df048  bt 6, 0x1df074
  01df04c  lis 3, 101
  01df050  lhz 4, 178(31)
  01df054  addic 3, 3, 18320
  01df058  extsh 4, 4
  01df05c  bl 0x5cd098
  01df060  nop
  01df064  ori 3, 31, 0
  01df068  bl 0xefb38
  01df06c  nop
  01df070  b 0x1df464
  01df074  ori 5, 3, 0
  01df078  lis 4, 165
  01df07c  stw 29, 32(30)
  01df080  slwi 3, 5, 2
  01df084  addic 4, 4, 7136
  01df088  extsw 6, 3
  01df08c  ori 3, 29, 0
  01df090  lwzx 6, 4, 6
  01df094  lwz 6, 0(6)
  01df098  cmpwi 6, 0
  01df09c  bf 1, 0x1df144
  01df0a0  slwi 5, 5, 2
  01df0a4  addic 3, 3, 1
  01df0a8  extsw 5, 5
  01df0ac  lwzx 5, 4, 5
  01df0b0  lwz 6, 0(5)
  01df0b4  divw 7, 3, 6
  01df0b8  mullw 6, 7, 6
  01df0bc  addc 7, 5, 29
  01df0c0  subc 6, 3, 6
  01df0c4  clrldi 7, 7, 32
  01df0c8  sldi 6, 6, 4
  01df0cc  addc 5, 5, 6
  01df0d0  clrldi 5, 5, 32
  01df0d4  lfs 1, 20(7)
  01df0d8  lfs 2, 16(7)
  01df0dc  lfs 3, 20(5)
  01df0e0  lfs 4, 16(5)
  01df0e4  fsubs 1, 1, 3
  01df0e8  fsubs 2, 2, 4
  01df0ec  lfs 3, 24(7)
  01df0f0  lfs 4, 24(5)
  01df0f4  fsubs 3, 3, 4
  01df0f8  fmuls 1, 1, 1
  01df0fc  fmadds 1, 2, 2, 1
  01df100  fmadds 1, 3, 3, 1
  01df104  fsqrts 1, 1
  01df108  stfs 1, 28(7)
  01df10c  lwz 5, 4(30)
  01df110  lfs 1, 32(30)
  01df114  slwi 6, 5, 2
  01df118  extsw 6, 6
  01df11c  lwzx 6, 4, 6
  01df120  addc 7, 6, 29
  01df124  addic 29, 29, 16
  01df128  clrldi 7, 7, 32
  01df12c  lfs 2, 28(7)
  01df130  fadds 1, 1, 2
  01df134  stfs 1, 32(30)
  01df138  lwz 6, 0(6)
  01df13c  cmpw 3, 6
  01df140  bt 0, 0x1df0a0
  01df144  li 3, 1
  01df148  stb 3, 32(31)
  01df14c  b 0x1df464
  01df150  lis 3, 151
  01df154  lwz 4, 0(30)
  01df158  addic 3, 3, -25248
  01df15c  extsw 4, 4
  01df160  bl 0x110b70
  01df164  nop
  01df168  cmpwi 3, 0
  01df16c  bt 2, 0x1df464
  01df170  lis 3, 118
  01df174  li 28, 0
  01df178  addic 23, 3, 19520
  01df17c  lwz 3, 19520(3)
  01df180  cmpwi 3, -1
  01df184  bt 2, 0x1df45c
  01df188  ori 22, 28, 0
  01df18c  ori 21, 23, 0
  01df190  lwz 27, 0(21)
  01df194  lis 3, 151
  01df198  extsw 27, 27
  01df19c  addic 3, 3, -16212
  01df1a0  slwi 4, 27, 2
  01df1a4  extsw 4, 4
  01df1a8  lwzx 3, 3, 4
  01df1ac  extsw 3, 3
  01df1b0  bl 0x502730
  01df1b4  nop
  01df1b8  sldi 3, 27, 3
  01df1bc  lis 4, 115
  01df1c0  fmr 30, 1
  01df1c4  addc 5, 3, 3
  01df1c8  addic 4, 4, 32062
  01df1cc  addc 3, 3, 5
  01df1d0  extsw 3, 3
  01df1d4  lhzx 3, 4, 3
  01df1d8  bl 0x502730
  01df1dc  nop
  01df1e0  fmr 29, 1
  01df1e4  lis 3, 30
  01df1e8  lfs 2, 32(30)
  01df1ec  addi 29, 3, -4264
  01df1f0  lfs 1, 0(29)
  01df1f4  fdivs 28, 30, 29
  01df1f8  bl 0xfcbe8
  01df1fc  nop
  01df200  fmr 31, 1
  01df204  lfs 1, 4(29)
  01df208  lfs 3, 8(30)
  01df20c  fmuls 2, 3, 1
  01df210  fcmpu 0, 28, 2
  01df214  bt 0, 0x1df444
  01df218  lfs 2, 12(30)
  01df21c  fmuls 2, 2, 1
  01df220  fcmpu 0, 28, 2
  01df224  cror 6, 1, 2
  01df228  bt 6, 0x1df444
  01df22c  lfs 2, 16(30)
  01df230  lfs 3, 20(30)
  01df234  fmuls 2, 2, 1
  01df238  fmuls 1, 3, 1
  01df23c  lwz 3, 24(30)
  01df240  cmpwi 3, 0
  01df244  fmsubs 30, 29, 2, 30
  01df248  fmuls 1, 29, 1
  01df24c  fsub 2, 1, 30
  01df250  fsel 2, 2, 1, 30
  01df254  bf 2, 0x1df260
  01df258  fsub 2, 30, 1
  01df25c  fsel 2, 2, 1, 30
  01df260  lis 3, 30
  01df264  addi 3, 3, -4264
  01df268  lfs 1, 8(3)
  01df26c  fadds 1, 2, 1
  01df270  bl 0x502758
  01df274  nop
  01df278  lwz 4, 28(30)
  01df27c  ori 26, 3, 0
  01df280  divw 3, 26, 4
  01df284  extsw 25, 3
  01df288  lwz 4, 4(30)
  01df28c  li 3, 0
  01df290  stw 28, 128(1)
  01df294  slwi 4, 4, 2
  01df298  stw 28, 132(1)
  01df29c  subc 3, 3, 25
  01df2a0  subc 5, 26, 25
  01df2a4  cntlzw 3, 3
  01df2a8  extsw 29, 4
  01df2ac  sldi 3, 3, 58
  01df2b0  lis 4, 165
  01df2b4  sradi 3, 3, 63
  01df2b8  and 3, 3, 5
  01df2bc  addic 5, 4, 7136
  01df2c0  addc 25, 25, 3
  01df2c4  lis 3, 101
  01df2c8  ori 4, 26, 0
  01df2cc  addic 3, 3, 18352
  01df2d0  lwzx 29, 5, 29
  01df2d4  ori 5, 25, 0
  01df2d8  bl 0x5cd098
  01df2dc  nop
  01df2e0  cmpwi 26, 0
  01df2e4  bf 1, 0x1df444
  01df2e8  lis 3, 30
  01df2ec  lis 18, 101
  01df2f0  addi 3, 3, -4264
  01df2f4  lis 19, 101
  01df2f8  addic 20, 1, 112
  01df2fc  addic 18, 18, 18440
  01df300  addic 19, 19, 18392
  01df304  lfs 30, 12(3)
  01df308  lfs 29, 16(3)
  01df30c  lfs 28, 20(3)
  01df310  lfs 27, 24(3)
  01df314  ori 24, 28, 0
  01df318  ori 3, 29, 0
  01df31c  addic 5, 1, 132
  01df320  fmr 1, 31
  01df324  addic 6, 1, 128
  01df328  ori 4, 20, 0
  01df32c  li 8, 1
  01df330  bl 0x10ce18
  01df334  nop
  01df338  lwz 3, 36(30)
  01df33c  cmpwi 3, -1
  01df340  bf 2, 0x1df34c
  01df344  li 24, 1
  01df348  b 0x1df39c
  01df34c  lis 4, 164
  01df350  slwi 3, 3, 8
  01df354  lwz 4, -28512(4)
  01df358  lfs 1, 116(1)
  01df35c  addc 3, 4, 3
  01df360  lfs 2, 112(1)
  01df364  clrldi 3, 3, 32
  01df368  lfs 3, 20(3)
  01df36c  lfs 4, 16(3)
  01df370  fsubs 1, 3, 1
  01df374  fsubs 2, 4, 2
  01df378  fmuls 1, 1, 1
  01df37c  fmadds 1, 2, 2, 1
  01df380  fsqrts 1, 1
  01df384  fcmpu 0, 1, 30
  01df388  cror 6, 0, 2
  01df38c  bt 6, 0x1df398
  01df390  li 24, 1
  01df394  b 0x1df39c
  01df398  fadds 31, 31, 29
  01df39c  cmpwi 24, 0
  01df3a0  bt 2, 0x1df318
  01df3a4  fmr 1, 31
  01df3a8  lfs 2, 112(1)
  01df3ac  lfs 3, 116(1)
  01df3b0  ori 3, 19, 0
  01df3b4  lfs 4, 120(1)
  01df3b8  ori 4, 27, 0
  01df3bc  ori 5, 25, 0
  01df3c0  stfd 1, 96(1)
  01df3c4  stfd 2, 72(1)
  01df3c8  stfd 3, 80(1)
  01df3cc  stfd 4, 88(1)
  01df3d0  ld 9, 96(1)
  01df3d4  ld 6, 72(1)
  01df3d8  ld 7, 80(1)
  01df3dc  ld 8, 88(1)
  01df3e0  bl 0x5cd098
  01df3e4  nop
  01df3e8  ori 3, 20, 0
  01df3ec  ori 4, 27, 0
  01df3f0  ori 5, 25, 0
  01df3f4  li 6, 0
  01df3f8  bl 0x2ea758
  01df3fc  nop
  01df400  lfs 1, 32(30)
  01df404  fmr 2, 27
  01df408  fmuls 1, 1, 28
  01df40c  bl 0xfcbe8
  01df410  nop
  01df414  subc 26, 26, 25
  01df418  fadds 31, 31, 1
  01df41c  extsw 26, 26
  01df420  cmpw 26, 25
  01df424  bf 0, 0x1df43c
  01df428  ori 25, 26, 0
  01df42c  ori 3, 18, 0
  01df430  ori 4, 25, 0
  01df434  bl 0x5cd098
  01df438  nop
  01df43c  cmpwi 26, 0
  01df440  bt 1, 0x1df314
  01df444  addic 22, 22, 4
  01df448  addic 21, 21, 4
  01df44c  extsw 3, 22
  01df450  lwzx 3, 23, 3
  01df454  cmpwi 3, -1
  01df458  bf 2, 0x1df190
  01df45c  li 3, 2
  01df460  stb 3, 32(31)
  01df464  ld 0, 304(1)
  01df468  mtlr 0
  01df46c  lfd 27, 248(1)
  01df470  lfd 28, 256(1)
  01df474  lfd 29, 264(1)
  01df478  lfd 30, 272(1)
  01df47c  lfd 31, 280(1)
  01df480  ld 18, 136(1)
  01df484  ld 19, 144(1)
  01df488  ld 20, 152(1)
  01df48c  ld 21, 160(1)
  01df490  ld 22, 168(1)
  01df494  ld 23, 176(1)
  01df498  ld 24, 184(1)
  01df49c  ld 25, 192(1)
  01df4a0  ld 26, 200(1)
  01df4a4  ld 27, 208(1)
  01df4a8  ld 28, 216(1)
  01df4ac  ld 29, 224(1)
  01df4b0  ld 30, 232(1)
  01df4b4  ld 31, 240(1)
  01df4b8  addi 1, 1, 288
  01df4bc  blr
