# game/update/moby316.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M316_0033fcc0:   # 0x33fcc0, 0x14 bytes
  033fcc0  lis 3, 129
  033fcc4  lis 4, 1
  033fcc8  addic 3, 3, 8084
  033fccc  stw 4, 72(3)
  033fcd0  blr

UpdateMoby_316:   # 0x33fd00, 0x468 bytes
  033fd00  stdu 1, -368(1)
  033fd04  mflr 0
  033fd08  std 0, 384(1)
  033fd0c  stfd 23, 296(1)
  033fd10  stfd 24, 304(1)
  033fd14  stfd 25, 312(1)
  033fd18  stfd 26, 320(1)
  033fd1c  stfd 27, 328(1)
  033fd20  stfd 28, 336(1)
  033fd24  stfd 29, 344(1)
  033fd28  stfd 30, 352(1)
  033fd2c  stfd 31, 360(1)
  033fd30  std 31, 288(1)
  033fd34  std 28, 264(1)
  033fd38  ori 31, 3, 0
  033fd3c  li 28, 0
  033fd40  std 30, 280(1)
  033fd44  lis 4, 3
  033fd48  ori 30, 28, 0
  033fd4c  std 29, 272(1)
  033fd50  li 5, 0
  033fd54  std 27, 256(1)
  033fd58  std 26, 248(1)
  033fd5c  std 25, 240(1)
  033fd60  lwz 29, 120(31)
  033fd64  bl 0x10675c
  033fd68  nop
  033fd6c  cmpwi 3, 0
  033fd70  bt 2, 0x33fd88
  033fd74  lfs 1, 44(3)
  033fd78  bl 0x502758
  033fd7c  nop
  033fd80  ori 28, 3, 0
  033fd84  b 0x33fe58
  033fd88  lwz 4, 48(29)
  033fd8c  li 3, 2
  033fd90  cmpwi 4, -1
  033fd94  bt 2, 0x33fdc0
  033fd98  lis 5, 164
  033fd9c  slwi 4, 4, 8
  033fda0  lwz 5, -28512(5)
  033fda4  addc 4, 5, 4
  033fda8  clrldi 4, 4, 32
  033fdac  lbz 4, 32(4)
  033fdb0  cmpwi 4, 127
  033fdb4  bf 1, 0x33fe58
  033fdb8  ori 28, 3, 0
  033fdbc  b 0x33fe58
  033fdc0  lwz 4, 52(29)
  033fdc4  cmpwi 4, -1
  033fdc8  bt 2, 0x33fdf4
  033fdcc  lis 5, 164
  033fdd0  slwi 4, 4, 8
  033fdd4  lwz 5, -28512(5)
  033fdd8  addc 4, 5, 4
  033fddc  clrldi 4, 4, 32
  033fde0  lbz 4, 32(4)
  033fde4  cmpwi 4, 127
  033fde8  bf 1, 0x33fe58
  033fdec  ori 28, 3, 0
  033fdf0  b 0x33fe58
  033fdf4  lwz 4, 56(29)
  033fdf8  cmpwi 4, -1
  033fdfc  bt 2, 0x33fe28
  033fe00  lis 5, 164
  033fe04  slwi 4, 4, 8
  033fe08  lwz 5, -28512(5)
  033fe0c  addc 4, 5, 4
  033fe10  clrldi 4, 4, 32
  033fe14  lbz 4, 32(4)
  033fe18  cmpwi 4, 127
  033fe1c  bf 1, 0x33fe58
  033fe20  ori 28, 3, 0
  033fe24  b 0x33fe58
  033fe28  lwz 4, 60(29)
  033fe2c  cmpwi 4, -1
  033fe30  bt 2, 0x33fe58
  033fe34  lis 5, 164
  033fe38  slwi 4, 4, 8
  033fe3c  lwz 5, -28512(5)
  033fe40  addc 4, 5, 4
  033fe44  clrldi 4, 4, 32
  033fe48  lbz 4, 32(4)
  033fe4c  cmpwi 4, 127
  033fe50  bf 1, 0x33fe58
  033fe54  ori 28, 3, 0
  033fe58  extsw 3, 28
  033fe5c  lis 4, 52
  033fe60  std 3, 224(1)
  033fe64  addi 3, 4, -808
  033fe68  lfs 23, 0(3)
  033fe6c  lfd 1, 224(1)
  033fe70  fcfid 1, 1
  033fe74  frsp 1, 1
  033fe78  fcmpu 0, 1, 23
  033fe7c  bt 0, 0x340110
  033fe80  lis 4, 52
  033fe84  li 3, 1
  033fe88  addi 4, 4, -808
  033fe8c  lis 27, 165
  033fe90  ori 28, 29, 0
  033fe94  stb 3, 32(31)
  033fe98  lis 3, 129
  033fe9c  lfs 24, 4(4)
  033fea0  lfs 25, 8(4)
  033fea4  ori 26, 30, 0
  033fea8  lfs 26, 12(4)
  033feac  addic 27, 27, 7136
  033feb0  lfs 27, 16(4)
  033feb4  addic 29, 3, 8208
  033feb8  lfs 28, 20(4)
  033febc  lfs 29, 24(4)
  033fec0  lfs 30, 28(4)
  033fec4  lfs 31, 32(4)
  033fec8  lis 25, 114
  033fecc  lfs 2, -3052(25)
  033fed0  fmuls 1, 2, 24
  033fed4  fmuls 2, 2, 25
  033fed8  bl 0xfcbe8
  033fedc  nop
  033fee0  lfs 2, -3052(25)
  033fee4  stfs 1, 192(1)
  033fee8  fmuls 1, 2, 24
  033feec  fmuls 2, 2, 25
  033fef0  bl 0xfcbe8
  033fef4  nop
  033fef8  lfs 2, -3052(25)
  033fefc  stfs 1, 196(1)
  033ff00  fmuls 2, 2, 26
  033ff04  lfs 1, 220(31)
  033ff08  lfs 3, 208(31)
  033ff0c  lfs 4, 212(31)
  033ff10  lfs 5, 204(31)
  033ff14  lfs 6, 216(31)
  033ff18  lfs 7, 192(31)
  033ff1c  addic 3, 1, 208
  033ff20  addic 4, 1, 192
  033ff24  li 5, 8
  033ff28  li 6, 0
  033ff2c  stfs 2, 200(1)
  033ff30  lfs 2, 4(29)
  033ff34  lfs 8, 0(29)
  033ff38  fmuls 1, 1, 2
  033ff3c  lfs 9, 8(29)
  033ff40  fmuls 3, 3, 2
  033ff44  lfs 10, 196(31)
  033ff48  fmuls 4, 4, 2
  033ff4c  lfs 11, 200(31)
  033ff50  fmuls 2, 6, 2
  033ff54  lfs 6, 236(31)
  033ff58  lfs 12, 224(31)
  033ff5c  lfs 13, 228(31)
  033ff60  lfs 0, 12(29)
  033ff64  fmadds 1, 5, 8, 1
  033ff68  fmadds 3, 7, 8, 3
  033ff6c  lfs 5, 232(31)
  033ff70  fmadds 4, 10, 8, 4
  033ff74  fmadds 2, 11, 8, 2
  033ff78  fmadds 1, 6, 9, 1
  033ff7c  fmadds 3, 12, 9, 3
  033ff80  fmadds 4, 13, 9, 4
  033ff84  fmadds 2, 5, 9, 2
  033ff88  fadds 1, 1, 0
  033ff8c  stfs 1, 220(1)
  033ff90  lfs 1, 16(31)
  033ff94  lfs 5, 20(31)
  033ff98  fadds 1, 3, 1
  033ff9c  lfs 3, 24(31)
  033ffa0  fadds 4, 4, 5
  033ffa4  fadds 2, 2, 3
  033ffa8  stfs 1, 208(1)
  033ffac  stfs 4, 212(1)
  033ffb0  stfs 2, 216(1)
  033ffb4  bl 0x30b568
  033ffb8  nop
  033ffbc  ori 25, 3, 0
  033ffc0  clrlwi 3, 26, 31
  033ffc4  cmpwi 3, 0
  033ffc8  stw 30, 148(25)
  033ffcc  bt 2, 0x340028
  033ffd0  li 7, -1
  033ffd4  fmr 1, 23
  033ffd8  li 6, 1
  033ffdc  fmr 2, 27
  033ffe0  ori 3, 25, 0
  033ffe4  fmr 3, 27
  033ffe8  li 8, 10
  033ffec  fmr 4, 23
  033fff0  std 7, 144(1)
  033fff4  addic 4, 1, 192
  033fff8  std 6, 160(1)
  033fffc  li 9, 3
  0340000  std 6, 168(1)
  0340004  li 5, 0
  0340008  std 7, 176(1)
  034000c  li 10, 16
  0340010  fmr 5, 28
  0340014  std 30, 184(1)
  0340018  fmr 6, 29
  034001c  fmr 7, 30
  0340020  bl 0x10e030
  0340024  nop
  0340028  lwz 3, 0(28)
  034002c  cmpwi 3, 0
  0340030  bt 0, 0x3400f0
  0340034  lwz 4, 120(25)
  0340038  stw 3, 180(4)
  034003c  lwz 3, 0(28)
  0340040  slwi 3, 3, 2
  0340044  extsw 3, 3
  0340048  lwzx 3, 27, 3
  034004c  stw 3, 176(4)
  0340050  lwz 3, 24(28)
  0340054  stw 3, 228(4)
  0340058  lwz 3, 0(28)
  034005c  lfs 1, 16(25)
  0340060  slwi 3, 3, 2
  0340064  extsw 3, 3
  0340068  lis 5, 114
  034006c  lwzx 3, 27, 3
  0340070  lfs 2, 16(3)
  0340074  fsubs 1, 2, 1
  0340078  stfs 1, 64(4)
  034007c  lfs 2, 20(3)
  0340080  lfs 3, 20(25)
  0340084  fsubs 2, 2, 3
  0340088  fmuls 3, 2, 2
  034008c  stfs 2, 68(4)
  0340090  lfs 4, 24(3)
  0340094  lfs 5, 24(25)
  0340098  fsubs 4, 4, 5
  034009c  fmadds 3, 1, 1, 3
  03400a0  stfs 4, 72(4)
  03400a4  fsqrts 3, 3
  03400a8  lfs 4, 28(3)
  03400ac  stfs 4, 76(4)
  03400b0  lfs 4, -3052(5)
  03400b4  fmuls 4, 4, 26
  03400b8  stfs 4, 72(4)
  03400bc  fdivs 4, 4, 3
  03400c0  fsub 5, 31, 3
  03400c4  fsub 6, 31, 3
  03400c8  fsub 7, 3, 31
  03400cc  fsub 3, 3, 31
  03400d0  fmuls 1, 1, 4
  03400d4  fmuls 2, 2, 4
  03400d8  fsel 4, 5, 31, 1
  03400dc  fsel 5, 6, 31, 2
  03400e0  fsel 1, 7, 4, 1
  03400e4  fsel 2, 3, 5, 2
  03400e8  stfs 1, 64(4)
  03400ec  stfs 2, 68(4)
  03400f0  addic 26, 26, 1
  03400f4  addic 29, 29, 16
  03400f8  cmpwi 26, 6
  03400fc  addic 28, 28, 4
  0340100  bt 0, 0x33fec8
  0340104  ori 3, 31, 0
  0340108  bl 0xefb38
  034010c  nop
  0340110  li 3, 255
  0340114  stb 3, 164(31)
  0340118  ld 0, 384(1)
  034011c  mtlr 0
  0340120  lfd 23, 296(1)
  0340124  lfd 24, 304(1)
  0340128  lfd 25, 312(1)
  034012c  lfd 26, 320(1)
  0340130  lfd 27, 328(1)
  0340134  lfd 28, 336(1)
  0340138  lfd 29, 344(1)
  034013c  lfd 30, 352(1)
  0340140  lfd 31, 360(1)
  0340144  ld 25, 240(1)
  0340148  ld 26, 248(1)
  034014c  ld 27, 256(1)
  0340150  ld 28, 264(1)
  0340154  ld 29, 272(1)
  0340158  ld 30, 280(1)
  034015c  ld 31, 288(1)
  0340160  addi 1, 1, 368
  0340164  blr
