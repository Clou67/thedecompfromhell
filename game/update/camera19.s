# game/update/camera19.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_CAMERA_CAMERA_UNK:   # 0x3fb90, 0x14 bytes
  003fb90  lis 3, 114
  003fb94  lis 4, 1
  003fb98  addic 3, 3, -9544
  003fb9c  stw 4, 72(3)
  003fba0  blr

Cam19_Enable:   # 0x3fba8, 0x2c bytes
  003fba8  lis 4, 149
  003fbac  sldi 3, 3, 5
  003fbb0  li 5, 1
  003fbb4  li 6, 0
  003fbb8  lwz 4, 16468(4)
  003fbbc  addc 3, 4, 3
  003fbc0  clrldi 3, 3, 32
  003fbc4  lwz 3, 28(3)
  003fbc8  stb 5, 56(3)
  003fbcc  stb 6, 57(3)
  003fbd0  blr

Cam19_Disable:   # 0x3fbd4, 0x3c bytes
  003fbd4  lis 4, 149
  003fbd8  lis 5, 149
  003fbdc  sldi 3, 3, 5
  003fbe0  addic 5, 5, 5056
  003fbe4  lwz 4, 16468(4)
  003fbe8  addc 3, 4, 3
  003fbec  lwz 4, 384(5)
  003fbf0  clrldi 3, 3, 32
  003fbf4  lhz 4, 134(4)
  003fbf8  lwz 3, 28(3)
  003fbfc  cmpwi 4, 19
  003fc00  bf 2, 0x3fc0c
  003fc04  li 4, 1
  003fc08  stb 4, 57(3)
  003fc0c  blr

Cam19_IsDone:   # 0x3fc10, 0x7c bytes
  003fc10  lis 4, 149
  003fc14  addic 4, 4, 5056
  003fc18  lwz 4, 384(4)
  003fc1c  lhz 4, 134(4)
  003fc20  cmpwi 4, 19
  003fc24  bt 2, 0x3fc30
  003fc28  li 3, 1
  003fc2c  b 0x3fc88
  003fc30  lis 4, 149
  003fc34  sldi 3, 3, 5
  003fc38  lwz 4, 16468(4)
  003fc3c  addc 3, 4, 3
  003fc40  clrldi 3, 3, 32
  003fc44  lwz 3, 28(3)
  003fc48  lwz 3, 4(3)
  003fc4c  lwz 3, 112(3)
  003fc50  lhz 3, 84(3)
  003fc54  cmpwi 3, 1
  003fc58  cmpwi 1, 3, 3
  003fc5c  bf 2, 0x3fc78
  003fc60  lis 3, 150
  003fc64  lwz 3, -12528(3)
  003fc68  cmpwi 3, 0
  003fc6c  bt 2, 0x3fc78
  003fc70  li 3, 1
  003fc74  b 0x3fc88
  003fc78  bf 6, 0x3fc84
  003fc7c  li 3, 1
  003fc80  b 0x3fc88
  003fc84  li 3, 0
  003fc88  blr

Cam19_IsHeroInVolume:   # 0x3fc8c, 0x13c bytes
  003fc8c  stdu 1, -112(1)
  003fc90  mflr 0
  003fc94  std 0, 128(1)
  003fc98  lis 4, 149
  003fc9c  lhz 3, 132(3)
  003fca0  extsh 3, 3
  003fca4  lwz 4, 16468(4)
  003fca8  sldi 3, 3, 5
  003fcac  addc 3, 4, 3
  003fcb0  clrldi 3, 3, 32
  003fcb4  lwz 3, 28(3)
  003fcb8  lwz 4, 12(3)
  003fcbc  cmpwi 4, 0
  003fcc0  bt 0, 0x3fce8
  003fcc4  lis 3, 151
  003fcc8  extsw 4, 4
  003fccc  addic 3, 3, -25376
  003fcd0  addic 3, 3, 128
  003fcd4  bl 0x110b70
  003fcd8  nop
  003fcdc  cmpwi 3, 0
  003fce0  bf 2, 0x3fdac
  003fce4  b 0x3fdb4
  003fce8  lwz 4, 16(3)
  003fcec  cmpwi 4, 0
  003fcf0  bt 0, 0x3fd18
  003fcf4  lis 3, 151
  003fcf8  extsw 4, 4
  003fcfc  addic 3, 3, -25376
  003fd00  addic 3, 3, 128
  003fd04  bl 0x110c60
  003fd08  nop
  003fd0c  cmpwi 3, 0
  003fd10  bf 2, 0x3fdac
  003fd14  b 0x3fdb4
  003fd18  lwz 4, 8(3)
  003fd1c  cmpwi 4, 0
  003fd20  bt 0, 0x3fd48
  003fd24  lis 3, 151
  003fd28  extsw 4, 4
  003fd2c  addic 3, 3, -25376
  003fd30  addic 3, 3, 128
  003fd34  bl 0x110d48
  003fd38  nop
  003fd3c  cmpwi 3, 0
  003fd40  bf 2, 0x3fdac
  003fd44  b 0x3fdb4
  003fd48  lwz 4, 20(3)
  003fd4c  cmpwi 4, 0
  003fd50  bt 0, 0x3fd94
  003fd54  lis 3, 165
  003fd58  slwi 4, 4, 2
  003fd5c  addic 3, 3, 7136
  003fd60  extsw 4, 4
  003fd64  lis 5, 151
  003fd68  addic 5, 5, -25376
  003fd6c  lwzx 6, 3, 4
  003fd70  addic 3, 5, 128
  003fd74  addic 4, 6, 16
  003fd78  lwz 5, 0(6)
  003fd7c  extsw 5, 5
  003fd80  bl 0x104e44
  003fd84  nop
  003fd88  cmpwi 3, 0
  003fd8c  bf 2, 0x3fdac
  003fd90  b 0x3fdb4
  003fd94  lbz 4, 56(3)
  003fd98  cmpwi 4, 0
  003fd9c  bt 2, 0x3fdb4
  003fda0  lbz 3, 57(3)
  003fda4  cmpwi 3, 0
  003fda8  bf 2, 0x3fdb4
  003fdac  li 3, 1
  003fdb0  b 0x3fdb8
  003fdb4  li 3, 0
  003fdb8  ld 0, 128(1)
  003fdbc  mtlr 0
  003fdc0  addi 1, 1, 112
  003fdc4  blr

InitCamera_19:   # 0x3fde8, 0x620 bytes
  003fde8  stdu 1, -224(1)
  003fdec  mflr 0
  003fdf0  std 0, 240(1)
  003fdf4  std 31, 216(1)
  003fdf8  ori 31, 3, 0
  003fdfc  lis 3, 149
  003fe00  vspltisw 2, -16
  003fe04  li 6, 1
  003fe08  std 28, 192(1)
  003fe0c  lis 4, 4
  003fe10  li 28, 0
  003fe14  lhz 5, 132(31)
  003fe18  lwz 3, 16468(3)
  003fe1c  extsh 5, 5
  003fe20  sldi 5, 5, 5
  003fe24  std 30, 208(1)
  003fe28  addc 3, 3, 5
  003fe2c  clrldi 30, 3, 32
  003fe30  addi 3, 4, -568
  003fe34  li 4, 58
  003fe38  addi 5, 4, 16
  003fe3c  lwz 30, 28(30)
  003fe40  li 9, 86
  003fe44  li 8, 2
  003fe48  li 7, 4
  003fe4c  std 29, 200(1)
  003fe50  stb 6, 56(30)
  003fe54  lwz 29, 112(31)
  003fe58  li 6, 4
  003fe5c  mtctr 8
  003fe60  stw 28, 64(29)
  003fe64  lfs 4, 0(3)
  003fe68  sth 28, 84(29)
  003fe6c  <unknown>
  003fe70  <unknown>
  003fe74  lis 4, 114
  003fe78  stw 28, 68(29)
  003fe7c  li 5, -3056
  003fe80  vor 3, 3, 4
  003fe84  stw 28, 72(29)
  003fe88  stw 28, 76(29)
  003fe8c  stw 28, 80(29)
  003fe90  vsraw 2, 3, 2
  003fe94  <unknown>
  003fe98  vspltisw 4, -1
  003fe9c  vspltw 3, 3, 0
  003fea0  vcfsx 2, 2, 0
  003fea4  <unknown>
  003fea8  vslw 4, 4, 4
  003feac  li 5, -1
  003feb0  lfs 5, 4(3)
  003feb4  lwz 3, 112(31)
  003feb8  ori 4, 3, 0
  003febc  ori 6, 4, 0
  003fec0  vaddfp 2, 2, 3
  003fec4  vmaddfp 2, 5, 2, 4
  003fec8  vctsxs 2, 2, 0
  003fecc  std 27, 184(1)
  003fed0  std 26, 176(1)
  003fed4  vsplth 2, 2, 1
  003fed8  stvehx 2, 9, 29
  003fedc  stw 28, 104(4)
  003fee0  sth 5, 88(6)
  003fee4  stw 28, 108(4)
  003fee8  sth 5, 90(6)
  003feec  stw 28, 112(4)
  003fef0  sth 5, 92(6)
  003fef4  stw 28, 116(4)
  003fef8  sth 5, 94(6)
  003fefc  addic 4, 4, 16
  003ff00  addic 6, 6, 8
  003ff04  bdnz 0x3fedc
  003ff08  lis 4, 150
  003ff0c  lis 5, 4
  003ff10  addic 4, 4, -12416
  003ff14  addi 5, 5, -568
  003ff18  lwz 6, 176(4)
  003ff1c  lfs 1, 176(4)
  003ff20  lfs 7, 8(5)
  003ff24  lis 4, 16256
  003ff28  fabs 3, 1
  003ff2c  lis 5, 115
  003ff30  stw 4, 112(1)
  003ff34  rlwinm 4, 6, 3, 29, 29
  003ff38  addic 5, 5, 22784
  003ff3c  fsubs 1, 7, 3
  003ff40  stfs 1, 116(1)
  003ff44  lfs 1, 112(1)
  003ff48  lwz 6, 116(1)
  003ff4c  fabs 6, 1
  003ff50  lfs 1, 116(1)
  003ff54  rlwimi 4, 6, 2, 30, 30
  003ff58  ori 6, 5, 0
  003ff5c  fsub 2, 1, 4
  003ff60  fsub 8, 1, 4
  003ff64  rlwimi 6, 4, 2, 27, 28
  003ff68  slwi 4, 4, 2
  003ff6c  clrldi 6, 6, 32
  003ff70  lfsx 1, 5, 4
  003ff74  fsel 6, 2, 6, 3
  003ff78  lfs 2, 4(6)
  003ff7c  fsel 3, 8, 3, 7
  003ff80  fcmpu 0, 6, 4
  003ff84  bt 1, 0x3ff8c
  003ff88  b 0x400a4
  003ff8c  fsubs 7, 3, 6
  003ff90  fadds 3, 3, 6
  003ff94  addic 4, 1, 16
  003ff98  mtctr 8
  003ff9c  addic 5, 4, 104
  003ffa0  addic 6, 4, 120
  003ffa4  fdivs 3, 7, 3
  003ffa8  fmuls 6, 3, 3
  003ffac  stfs 3, 132(1)
  003ffb0  stfs 3, 124(1)
  003ffb4  stfs 3, 128(1)
  003ffb8  stfs 3, 120(1)
  003ffbc  lfs 8, 132(1)
  003ffc0  lfs 9, 124(1)
  003ffc4  lfs 10, 128(1)
  003ffc8  fmuls 7, 6, 6
  003ffcc  fmuls 9, 9, 6
  003ffd0  fmuls 8, 8, 7
  003ffd4  fmuls 3, 7, 7
  003ffd8  fmuls 7, 10, 7
  003ffdc  stfs 9, 124(1)
  003ffe0  fmuls 6, 8, 6
  003ffe4  stfs 7, 128(1)
  003ffe8  stfs 6, 132(1)
  003ffec  lfs 6, 104(4)
  003fff0  fmuls 6, 6, 3
  003fff4  stfs 6, 120(4)
  003fff8  lfs 6, 4(5)
  003fffc  addic 4, 4, 8
  0040000  addic 5, 5, 8
  0040004  fmuls 6, 6, 3
  0040008  stfs 6, 4(6)
  004000c  addic 6, 6, 8
  0040010  bdnz 0x3ffec
  0040014  ori 4, 1, 0
  0040018  mtctr 7
  004001c  lis 5, 115
  0040020  addic 7, 4, 120
  0040024  addic 5, 5, 22752
  0040028  ori 6, 7, 0
  004002c  lfs 3, 120(4)
  0040030  lfs 6, 0(5)
  0040034  fmuls 3, 3, 6
  0040038  lfs 6, 4(5)
  004003c  addic 5, 5, 8
  0040040  stfs 3, 120(4)
  0040044  lfs 3, 4(7)
  0040048  addic 4, 4, 8
  004004c  fmuls 3, 3, 6
  0040050  stfs 3, 4(7)
  0040054  addic 7, 7, 8
  0040058  bdnz 0x4002c
  004005c  ori 4, 1, 0
  0040060  mtctr 8
  0040064  lfs 3, 120(4)
  0040068  fadds 3, 4, 3
  004006c  addic 4, 4, 16
  0040070  lfs 4, 4(6)
  0040074  lfs 6, 8(6)
  0040078  lfs 7, 12(6)
  004007c  addic 6, 6, 16
  0040080  fadds 3, 3, 4
  0040084  fadds 4, 3, 6
  0040088  fadds 4, 4, 7
  004008c  bdnz 0x40064
  0040090  lis 4, 4
  0040094  addi 4, 4, -568
  0040098  lfs 3, 12(4)
  004009c  fadds 4, 4, 3
  00400a0  fmadds 4, 4, 1, 2
  00400a4  lis 4, 4
  00400a8  addi 4, 4, -568
  00400ac  lfs 1, 16(4)
  00400b0  lwz 4, 32(30)
  00400b4  fmuls 1, 4, 1
  00400b8  cmpwi 4, 0
  00400bc  stfs 1, 136(3)
  00400c0  bt 0, 0x401d4
  00400c4  lis 5, 165
  00400c8  slwi 4, 4, 2
  00400cc  addic 5, 5, 7136
  00400d0  extsw 4, 4
  00400d4  lwzx 4, 5, 4
  00400d8  lwz 9, 0(4)
  00400dc  cmpwi 9, 0
  00400e0  bf 1, 0x401d4
  00400e4  lis 5, 4
  00400e8  ori 7, 4, 0
  00400ec  addi 12, 5, -568
  00400f0  ori 6, 28, 0
  00400f4  addic 10, 3, 104
  00400f8  lis 11, 17204
  00400fc  addic 8, 7, 16
  0040100  ori 5, 6, 0
  0040104  lfs 2, 20(12)
  0040108  lwz 12, 28(7)
  004010c  lfs 1, 28(7)
  0040110  srawi 27, 12, 31
  0040114  cmpwi 12, 0
  0040118  srwi 26, 27, 1
  004011c  xor 12, 26, 12
  0040120  subc 12, 12, 27
  0040124  cmpw 1, 12, 11
  0040128  bf 1, 0x40154
  004012c  stfs 1, 0(10)
  0040130  bf 5, 0x40140
  0040134  lfs 1, 136(3)
  0040138  fmuls 1, 1, 2
  004013c  stfs 1, 0(10)
  0040140  extsw 12, 6
  0040144  addic 10, 10, 4
  0040148  addc 12, 12, 3
  004014c  addic 6, 6, 2
  0040150  sth 5, 88(12)
  0040154  ori 12, 5, 0
  0040158  addic 5, 12, 1
  004015c  lfs 1, 20(7)
  0040160  divw 27, 5, 9
  0040164  mullw 9, 27, 9
  0040168  lfs 3, 16(7)
  004016c  subc 9, 5, 9
  0040170  sldi 9, 9, 4
  0040174  addc 9, 9, 8
  0040178  clrldi 9, 9, 32
  004017c  lfs 4, 4(9)
  0040180  lfs 6, 0(9)
  0040184  fsubs 1, 1, 4
  0040188  fsubs 3, 3, 6
  004018c  lfs 4, 24(7)
  0040190  lfs 6, 8(9)
  0040194  fsubs 4, 4, 6
  0040198  fmuls 1, 1, 1
  004019c  fmadds 1, 3, 3, 1
  00401a0  fmadds 1, 4, 4, 1
  00401a4  fsqrts 1, 1
  00401a8  stfs 1, 28(7)
  00401ac  lwz 9, 0(4)
  00401b0  addic 27, 9, -1
  00401b4  cmpw 12, 27
  00401b8  bf 0, 0x401c8
  00401bc  lfs 3, 72(29)
  00401c0  fadds 1, 3, 1
  00401c4  stfs 1, 72(29)
  00401c8  cmpw 5, 9
  00401cc  addic 7, 7, 16
  00401d0  bt 0, 0x40108
  00401d4  lhz 3, 58(30)
  00401d8  extsh 3, 3
  00401dc  cmpwi 3, 0
  00401e0  bf 1, 0x4023c
  00401e4  extsw 3, 3
  00401e8  std 3, 152(1)
  00401ec  lis 3, 114
  00401f0  lfs 1, -3056(3)
  00401f4  lfd 2, 152(1)
  00401f8  fcfid 2, 2
  00401fc  frsp 2, 2
  0040200  fadds 2, 2, 5
  0040204  fmuls 1, 1, 2
  0040208  fctiwz 1, 1
  004020c  stfd 1, 152(1)
  0040210  lwz 3, 156(1)
  0040214  extsw 3, 3
  0040218  bl 0x502730
  004021c  nop
  0040220  lfs 2, 72(29)
  0040224  fdivs 1, 2, 1
  0040228  lis 3, 4
  004022c  addi 3, 3, -568
  0040230  lfs 2, 24(3)
  0040234  fmuls 1, 1, 2
  0040238  stfs 1, 60(30)
  004023c  lwz 3, 36(30)
  0040240  cmpwi 3, 0
  0040244  bt 0, 0x402f0
  0040248  lis 4, 165
  004024c  slwi 3, 3, 2
  0040250  addic 4, 4, 7136
  0040254  extsw 3, 3
  0040258  lwzx 3, 4, 3
  004025c  lwz 5, 0(3)
  0040260  cmpwi 5, 0
  0040264  bf 1, 0x402f0
  0040268  ori 4, 28, 0
  004026c  ori 6, 3, 0
  0040270  ori 7, 4, 0
  0040274  lfs 1, 20(6)
  0040278  addic 4, 7, 1
  004027c  lfs 2, 16(6)
  0040280  divw 8, 4, 5
  0040284  mullw 5, 8, 5
  0040288  lfs 3, 24(6)
  004028c  subc 5, 4, 5
  0040290  sldi 5, 5, 4
  0040294  addc 5, 3, 5
  0040298  clrldi 5, 5, 32
  004029c  lfs 4, 20(5)
  00402a0  lfs 5, 16(5)
  00402a4  fsubs 1, 1, 4
  00402a8  fsubs 2, 2, 5
  00402ac  lfs 4, 24(5)
  00402b0  fsubs 3, 3, 4
  00402b4  fmuls 1, 1, 1
  00402b8  fmadds 1, 2, 2, 1
  00402bc  fmadds 1, 3, 3, 1
  00402c0  fsqrts 1, 1
  00402c4  stfs 1, 28(6)
  00402c8  lwz 5, 0(3)
  00402cc  addic 8, 5, -1
  00402d0  cmpw 7, 8
  00402d4  bf 0, 0x402e4
  00402d8  lfs 2, 76(29)
  00402dc  fadds 1, 2, 1
  00402e0  stfs 1, 76(29)
  00402e4  cmpw 4, 5
  00402e8  addic 6, 6, 16
  00402ec  bt 0, 0x40270
  00402f0  lis 3, 15605
  00402f4  lwz 5, 112(31)
  00402f8  lis 4, 15948
  00402fc  ori 3, 3, 49807
  0040300  ori 4, 4, 52429
  0040304  lis 6, 149
  0040308  stw 3, 0(5)
  004030c  addic 6, 6, 5056
  0040310  stw 4, 4(5)
  0040314  stw 28, 28(5)
  0040318  stw 28, 24(5)
  004031c  stw 28, 20(5)
  0040320  stw 28, 16(5)
  0040324  lwz 5, 112(31)
  0040328  stw 3, 32(5)
  004032c  stw 4, 36(5)
  0040330  stw 28, 60(5)
  0040334  stw 28, 56(5)
  0040338  stw 28, 52(5)
  004033c  stw 28, 48(5)
  0040340  lwz 3, 388(6)
  0040344  lfs 1, 48(3)
  0040348  stfs 1, 48(31)
  004034c  lfs 1, 52(3)
  0040350  stfs 1, 52(31)
  0040354  lfs 1, 56(3)
  0040358  stfs 1, 56(31)
  004035c  lfs 1, 60(3)
  0040360  stfs 1, 60(31)
  0040364  lfs 1, 0(3)
  0040368  stfs 1, 0(31)
  004036c  lfs 1, 4(3)
  0040370  stfs 1, 4(31)
  0040374  lfs 1, 8(3)
  0040378  stfs 1, 8(31)
  004037c  lfs 1, 12(3)
  0040380  stfs 1, 12(31)
  0040384  lfs 1, 16(3)
  0040388  stfs 1, 16(31)
  004038c  lfs 1, 20(3)
  0040390  stfs 1, 20(31)
  0040394  lfs 1, 24(3)
  0040398  stfs 1, 24(31)
  004039c  lfs 1, 28(3)
  00403a0  stfs 1, 28(31)
  00403a4  lfs 1, 32(3)
  00403a8  stfs 1, 32(31)
  00403ac  lfs 1, 36(3)
  00403b0  lwz 4, 76(30)
  00403b4  stfs 1, 36(31)
  00403b8  lfs 1, 40(3)
  00403bc  cmpwi 4, 0
  00403c0  stfs 1, 40(31)
  00403c4  lfs 1, 44(3)
  00403c8  stfs 1, 44(31)
  00403cc  bf 2, 0x403e0
  00403d0  li 3, 114
  00403d4  li 4, 1
  00403d8  bl 0xb72b0
  00403dc  nop
  00403e0  ld 0, 240(1)
  00403e4  mtlr 0
  00403e8  ld 26, 176(1)
  00403ec  ld 27, 184(1)
  00403f0  ld 28, 192(1)
  00403f4  ld 29, 200(1)
  00403f8  ld 30, 208(1)
  00403fc  ld 31, 216(1)
  0040400  addi 1, 1, 224
  0040404  blr

UpdateCamera_19:   # 0x40440, 0xadc bytes
  0040440  stdu 1, -272(1)
  0040444  mflr 0
  0040448  std 0, 288(1)
  004044c  stfd 29, 248(1)
  0040450  stfd 30, 256(1)
  0040454  stfd 31, 264(1)
  0040458  lis 4, 149
  004045c  std 27, 208(1)
  0040460  std 25, 192(1)
  0040464  lhz 5, 132(3)
  0040468  lis 25, 4
  004046c  std 31, 240(1)
  0040470  lwz 27, 112(3)
  0040474  ori 31, 3, 0
  0040478  extsh 5, 5
  004047c  addi 25, 25, 1032
  0040480  lwz 4, 16468(4)
  0040484  std 29, 224(1)
  0040488  sldi 5, 5, 5
  004048c  addic 29, 27, 64
  0040490  addc 4, 4, 5
  0040494  std 30, 232(1)
  0040498  lhz 5, 84(27)
  004049c  clrldi 30, 4, 32
  00404a0  cmpwi 5, 0
  00404a4  cmpwi 1, 5, 2
  00404a8  cmpwi 6, 5, 3
  00404ac  std 28, 216(1)
  00404b0  std 26, 200(1)
  00404b4  std 24, 184(1)
  00404b8  std 23, 176(1)
  00404bc  std 22, 168(1)
  00404c0  std 21, 160(1)
  00404c4  lwz 30, 28(30)
  00404c8  bf 2, 0x40798
  00404cc  lis 3, 150
  00404d0  lfs 1, 0(25)
  00404d4  lfs 2, -12528(3)
  00404d8  fadds 1, 2, 1
  00404dc  stfs 1, -12528(3)
  00404e0  lfs 5, 4(25)
  00404e4  fcmpu 0, 1, 5
  00404e8  bt 0, 0x40ed4
  00404ec  lwz 5, 32(30)
  00404f0  lis 3, 165
  00404f4  lwz 9, 36(30)
  00404f8  slwi 5, 5, 2
  00404fc  lis 4, 150
  0040500  addic 3, 3, 7136
  0040504  lis 6, 16256
  0040508  extsw 5, 5
  004050c  lis 7, 150
  0040510  li 8, 1
  0040514  stw 6, -12528(4)
  0040518  lwzx 4, 3, 5
  004051c  slwi 5, 9, 2
  0040520  stw 8, -12480(7)
  0040524  extsw 5, 5
  0040528  sth 8, 84(27)
  004052c  lfs 1, 16(4)
  0040530  stfs 1, 48(31)
  0040534  lfs 2, 20(4)
  0040538  lwzx 3, 3, 5
  004053c  stfs 2, 52(31)
  0040540  lfs 3, 24(4)
  0040544  lwz 27, 40(30)
  0040548  stfs 3, 56(31)
  004054c  lfs 4, 28(4)
  0040550  cmpwi 27, 0
  0040554  stfs 4, 60(31)
  0040558  bt 0, 0x405ec
  004055c  lis 3, 149
  0040560  lfs 4, 48(30)
  0040564  lis 5, 164
  0040568  addic 3, 3, 5056
  004056c  lfs 6, 44(30)
  0040570  slwi 4, 27, 8
  0040574  lfs 7, 864(3)
  0040578  lfs 8, 868(3)
  004057c  lfs 9, 872(3)
  0040580  fmuls 7, 7, 4
  0040584  lfs 10, 848(3)
  0040588  fmuls 8, 8, 4
  004058c  fmuls 4, 9, 4
  0040590  lfs 9, 852(3)
  0040594  lwz 5, -28512(5)
  0040598  lfs 11, 52(30)
  004059c  lfs 12, 856(3)
  00405a0  addc 4, 5, 4
  00405a4  clrldi 4, 4, 32
  00405a8  fmadds 7, 10, 6, 7
  00405ac  fmadds 8, 9, 6, 8
  00405b0  fmadds 4, 12, 6, 4
  00405b4  lfs 10, 880(3)
  00405b8  lfs 9, 884(3)
  00405bc  lfs 6, 888(3)
  00405c0  lfs 12, 16(4)
  00405c4  lfs 13, 20(4)
  00405c8  lfs 0, 24(4)
  00405cc  fmadds 7, 10, 11, 7
  00405d0  fmadds 9, 9, 11, 8
  00405d4  fmadds 6, 6, 11, 4
  00405d8  lfs 4, 28(4)
  00405dc  fadds 8, 12, 7
  00405e0  fadds 7, 13, 9
  00405e4  fadds 6, 0, 6
  00405e8  b 0x405fc
  00405ec  lfs 8, 16(3)
  00405f0  lfs 7, 20(3)
  00405f4  lfs 6, 24(3)
  00405f8  lfs 4, 28(3)
  00405fc  fsubs 9, 7, 2
  0040600  fsubs 10, 8, 1
  0040604  fsubs 8, 6, 3
  0040608  lfs 7, 8(25)
  004060c  lis 3, 151
  0040610  addic 3, 3, -25376
  0040614  fmuls 1, 9, 9
  0040618  lfs 2, 656(3)
  004061c  lfs 3, 660(3)
  0040620  lfs 6, 664(3)
  0040624  fmadds 1, 10, 10, 1
  0040628  fmadds 1, 8, 8, 1
  004062c  fsqrts 11, 1
  0040630  fcmpu 0, 11, 7
  0040634  bf 2, 0x40658
  0040638  stfs 4, 12(31)
  004063c  fmr 4, 7
  0040640  stfs 10, 0(31)
  0040644  stfs 8, 8(31)
  0040648  stfs 9, 4(31)
  004064c  fmr 1, 4
  0040650  fmr 8, 1
  0040654  b 0x406a4
  0040658  frsqrte 11, 1
  004065c  lfs 12, 12(25)
  0040660  stfs 4, 12(31)
  0040664  fmuls 13, 1, 11
  0040668  fmuls 0, 12, 11
  004066c  fnmsubs 13, 13, 11, 5
  0040670  fmadds 11, 13, 0, 11
  0040674  fmr 13, 8
  0040678  fmuls 8, 1, 11
  004067c  fmuls 0, 12, 11
  0040680  fnmsubs 4, 8, 11, 5
  0040684  fmadds 4, 4, 0, 11
  0040688  fmuls 1, 1, 4
  004068c  fmuls 8, 12, 4
  0040690  fnmsubs 1, 1, 4, 5
  0040694  fmadds 4, 1, 8, 4
  0040698  fmuls 8, 10, 4
  004069c  fmuls 1, 9, 4
  00406a0  fmuls 4, 13, 4
  00406a4  fmuls 9, 6, 8
  00406a8  fmuls 10, 2, 4
  00406ac  fmuls 6, 6, 1
  00406b0  fmuls 11, 3, 4
  00406b4  fmuls 2, 2, 1
  00406b8  fmuls 3, 3, 8
  00406bc  li 3, 0
  00406c0  fneg 12, 9
  00406c4  fneg 10, 10
  00406c8  fneg 6, 6
  00406cc  fneg 11, 11
  00406d0  fmr 9, 7
  00406d4  fneg 7, 2
  00406d8  fneg 13, 3
  00406dc  stfs 8, 0(31)
  00406e0  fsubs 3, 12, 10
  00406e4  fsubs 2, 11, 6
  00406e8  fsubs 6, 7, 13
  00406ec  fmr 10, 9
  00406f0  fmuls 7, 3, 3
  00406f4  stfs 1, 4(31)
  00406f8  stfs 4, 8(31)
  00406fc  stw 3, 28(31)
  0040700  fmr 11, 10
  0040704  fmadds 7, 2, 2, 7
  0040708  fmadds 7, 6, 6, 7
  004070c  fsqrts 12, 7
  0040710  fcmpu 0, 12, 11
  0040714  bt 2, 0x4075c
  0040718  frsqrte 9, 7
  004071c  lfs 10, 12(25)
  0040720  fmuls 11, 7, 9
  0040724  fmuls 12, 10, 9
  0040728  fnmsubs 11, 11, 9, 5
  004072c  fmadds 9, 11, 12, 9
  0040730  fmuls 11, 7, 9
  0040734  fmuls 12, 10, 9
  0040738  fnmsubs 11, 11, 9, 5
  004073c  fmadds 9, 11, 12, 9
  0040740  fmuls 7, 7, 9
  0040744  fmuls 10, 10, 9
  0040748  fnmsubs 5, 7, 9, 5
  004074c  fmadds 9, 5, 10, 9
  0040750  fmuls 11, 2, 9
  0040754  fmuls 10, 3, 9
  0040758  fmuls 9, 6, 9
  004075c  fmuls 2, 4, 10
  0040760  fmuls 3, 8, 9
  0040764  li 3, 0
  0040768  fmuls 5, 1, 11
  004076c  stfs 11, 16(31)
  0040770  stfs 10, 20(31)
  0040774  stfs 9, 24(31)
  0040778  stw 3, 44(31)
  004077c  fmsubs 1, 1, 9, 2
  0040780  fmsubs 2, 4, 11, 3
  0040784  fmsubs 3, 8, 10, 5
  0040788  stfs 1, 32(31)
  004078c  stfs 2, 36(31)
  0040790  stfs 3, 40(31)
  0040794  b 0x40ed4
  0040798  bf 6, 0x408e8
  004079c  lis 3, 150
  00407a0  lfs 1, 0(25)
  00407a4  lfs 2, -12528(3)
  00407a8  fadds 1, 2, 1
  00407ac  stfs 1, -12528(3)
  00407b0  lfs 2, 4(25)
  00407b4  fcmpu 0, 1, 2
  00407b8  bt 0, 0x408d8
  00407bc  li 3, 3
  00407c0  lis 4, 150
  00407c4  lis 5, 16256
  00407c8  sth 3, 84(27)
  00407cc  stw 5, -12528(4)
  00407d0  lfs 1, 12(25)
  00407d4  lfs 2, 136(27)
  00407d8  lfs 3, 16(25)
  00407dc  fmuls 1, 2, 1
  00407e0  lfs 4, 40(25)
  00407e4  lfs 2, 20(25)
  00407e8  lis 3, 150
  00407ec  fsubs 5, 3, 1
  00407f0  fadds 4, 1, 4
  00407f4  fsubs 6, 2, 1
  00407f8  addic 3, 3, -12416
  00407fc  fsub 7, 1, 5
  0040800  fsubs 3, 3, 4
  0040804  fsubs 2, 2, 4
  0040808  fsel 1, 7, 5, 1
  004080c  fsub 5, 4, 3
  0040810  lfs 7, 24(25)
  0040814  fsub 9, 6, 1
  0040818  fsel 3, 5, 3, 4
  004081c  lfs 4, 28(25)
  0040820  lfs 5, 32(25)
  0040824  fsel 1, 9, 6, 1
  0040828  fsub 6, 2, 3
  004082c  fmuls 8, 1, 1
  0040830  fsel 2, 6, 2, 3
  0040834  lfs 3, 36(25)
  0040838  fmuls 6, 8, 1
  004083c  fmuls 9, 2, 2
  0040840  fmuls 10, 8, 6
  0040844  fmadds 1, 6, 7, 1
  0040848  fmuls 6, 9, 2
  004084c  fmuls 11, 8, 10
  0040850  fmadds 1, 10, 4, 1
  0040854  fmuls 10, 9, 6
  0040858  fmadds 2, 6, 7, 2
  004085c  fmuls 6, 8, 11
  0040860  fmadds 1, 11, 5, 1
  0040864  fmuls 7, 9, 10
  0040868  fmadds 2, 10, 4, 2
  004086c  fmadds 1, 6, 3, 1
  0040870  fmuls 4, 9, 7
  0040874  fmadds 2, 7, 5, 2
  0040878  fmadds 2, 4, 3, 2
  004087c  fdivs 1, 1, 2
  0040880  stfs 1, 176(3)
  0040884  bl 0x668d0
  0040888  nop
  004088c  li 3, 1
  0040890  lis 5, 150
  0040894  lis 4, 149
  0040898  li 7, 0
  004089c  lis 6, 15692
  00408a0  stb 3, 57(30)
  00408a4  addic 3, 4, 5056
  00408a8  ori 4, 6, 52429
  00408ac  stw 7, -12480(5)
  00408b0  li 6, 4
  00408b4  lwz 5, 76(30)
  00408b8  cmpwi 5, 0
  00408bc  stw 4, 600(3)
  00408c0  sth 6, 126(31)
  00408c4  bf 2, 0x408d8
  00408c8  li 3, 0
  00408cc  li 4, 1
  00408d0  bl 0xb72b0
  00408d4  nop
  00408d8  lwz 3, 64(30)
  00408dc  cmpwi 3, 0
  00408e0  bt 2, 0x40ed4
  00408e4  b 0x4091c
  00408e8  bt 26, 0x40ed4
  00408ec  lis 3, 150
  00408f0  lfs 1, 0(25)
  00408f4  lfs 2, -12528(3)
  00408f8  fsubs 1, 2, 1
  00408fc  stfs 1, -12528(3)
  0040900  lfs 2, 8(25)
  0040904  fcmpu 0, 1, 2
  0040908  cror 6, 1, 2
  004090c  bt 6, 0x4091c
  0040910  lis 3, 150
  0040914  li 4, 0
  0040918  stw 4, -12528(3)
  004091c  lwz 3, 32(30)
  0040920  lis 26, 165
  0040924  lfs 31, 48(31)
  0040928  slwi 3, 3, 2
  004092c  lfs 30, 52(31)
  0040930  ori 5, 29, 0
  0040934  lfs 29, 56(31)
  0040938  addic 26, 26, 7136
  004093c  extsw 29, 3
  0040940  lis 7, 114
  0040944  addic 4, 31, 48
  0040948  addic 6, 27, 68
  004094c  li 8, 0
  0040950  lwzx 29, 26, 29
  0040954  lfs 1, 60(30)
  0040958  lfs 2, -3052(7)
  004095c  ori 3, 29, 0
  0040960  fmuls 1, 1, 2
  0040964  bl 0x10ce18
  0040968  nop
  004096c  ori 28, 3, 0
  0040970  lhz 3, 86(27)
  0040974  cmpwi 3, 0
  0040978  bt 2, 0x409f8
  004097c  addic 3, 27, 86
  0040980  bl 0x4fffb4
  0040984  nop
  0040988  cmpwi 3, 0
  004098c  bt 2, 0x40998
  0040990  li 28, 1
  0040994  b 0x409f8
  0040998  lwz 3, 64(30)
  004099c  cmpwi 3, 0
  00409a0  bt 2, 0x409f8
  00409a4  lhz 3, 86(27)
  00409a8  lfs 1, 44(25)
  00409ac  extsh 24, 3
  00409b0  bl 0x502758
  00409b4  nop
  00409b8  extsw 3, 3
  00409bc  std 3, 136(1)
  00409c0  lis 3, 114
  00409c4  lfs 1, 12(25)
  00409c8  lfs 2, -3056(3)
  00409cc  lfd 3, 136(1)
  00409d0  fcfid 3, 3
  00409d4  frsp 3, 3
  00409d8  fadds 1, 3, 1
  00409dc  fmuls 1, 2, 1
  00409e0  fctiwz 1, 1
  00409e4  stfd 1, 136(1)
  00409e8  lwz 3, 140(1)
  00409ec  cmpw 24, 3
  00409f0  bf 0, 0x409f8
  00409f4  li 28, 1
  00409f8  lbz 3, 57(30)
  00409fc  cmpwi 1, 28, 0
  0040a00  cmpwi 3, 0
  0040a04  bf 2, 0x40a0c
  0040a08  bt 6, 0x40a20
  0040a0c  li 3, 2
  0040a10  lwz 4, 64(30)
  0040a14  cmpwi 4, 0
  0040a18  sth 3, 84(27)
  0040a1c  bt 2, 0x40ed4
  0040a20  li 28, 0
  0040a24  ori 22, 27, 0
  0040a28  ori 24, 28, 0
  0040a2c  ori 21, 22, 0
  0040a30  ori 23, 24, 0
  0040a34  lhz 3, 88(22)
  0040a38  extsh 3, 3
  0040a3c  cmpwi 3, 0
  0040a40  bt 0, 0x40bd0
  0040a44  lhz 4, 90(22)
  0040a48  extsh 4, 4
  0040a4c  cmpwi 4, 0
  0040a50  bt 0, 0x40bd0
  0040a54  lwz 5, 64(27)
  0040a58  cmpw 1, 5, 4
  0040a5c  cmpw 5, 3
  0040a60  crorc 2, 0, 4
  0040a64  bt 2, 0x40bb8
  0040a68  cmpw 3, 5
  0040a6c  lfs 1, 8(25)
  0040a70  bf 0, 0x40a9c
  0040a74  sldi 7, 3, 4
  0040a78  subc 6, 5, 3
  0040a7c  addc 3, 29, 7
  0040a80  clrldi 3, 3, 32
  0040a84  addic 6, 6, -1
  0040a88  lfs 2, 28(3)
  0040a8c  cmpwi 6, 0
  0040a90  addic 3, 3, 16
  0040a94  fadds 1, 1, 2
  0040a98  bt 1, 0x40a84
  0040a9c  lfs 2, 68(27)
  0040aa0  cmpw 5, 4
  0040aa4  fadds 2, 1, 2
  0040aa8  bf 0, 0x40ae4
  0040aac  slwi 3, 5, 4
  0040ab0  addic 4, 27, 90
  0040ab4  addc 3, 29, 3
  0040ab8  addc 6, 23, 4
  0040abc  clrldi 4, 3, 32
  0040ac0  clrldi 3, 6, 32
  0040ac4  lhz 6, 0(3)
  0040ac8  addic 5, 5, 1
  0040acc  lfs 3, 28(4)
  0040ad0  extsh 6, 6
  0040ad4  addic 4, 4, 16
  0040ad8  cmpw 5, 6
  0040adc  fadds 1, 1, 3
  0040ae0  bt 0, 0x40ac4
  0040ae4  fdivs 3, 2, 1
  0040ae8  lfs 1, 104(21)
  0040aec  lfs 2, 108(21)
  0040af0  bl 0xfecf0
  0040af4  nop
  0040af8  lfs 2, 48(25)
  0040afc  lfs 3, 12(25)
  0040b00  fmuls 1, 1, 2
  0040b04  lfs 4, 16(25)
  0040b08  lfs 2, 40(25)
  0040b0c  lfs 5, 20(25)
  0040b10  lis 3, 150
  0040b14  fmuls 1, 1, 3
  0040b18  addic 3, 3, -12416
  0040b1c  fsubs 3, 4, 1
  0040b20  fadds 2, 1, 2
  0040b24  fsubs 6, 5, 1
  0040b28  fsub 7, 1, 3
  0040b2c  fsubs 4, 4, 2
  0040b30  fsubs 5, 5, 2
  0040b34  fsel 1, 7, 3, 1
  0040b38  fsub 3, 2, 4
  0040b3c  lfs 7, 24(25)
  0040b40  fsub 9, 6, 1
  0040b44  fsel 2, 3, 4, 2
  0040b48  lfs 3, 28(25)
  0040b4c  lfs 4, 32(25)
  0040b50  fsel 1, 9, 6, 1
  0040b54  fsub 6, 5, 2
  0040b58  fmuls 8, 1, 1
  0040b5c  fsel 2, 6, 5, 2
  0040b60  lfs 5, 36(25)
  0040b64  fmuls 6, 8, 1
  0040b68  fmuls 9, 2, 2
  0040b6c  fmuls 10, 8, 6
  0040b70  fmadds 1, 6, 7, 1
  0040b74  fmuls 6, 9, 2
  0040b78  fmuls 11, 8, 10
  0040b7c  fmadds 1, 10, 3, 1
  0040b80  fmuls 10, 9, 6
  0040b84  fmadds 2, 6, 7, 2
  0040b88  fmuls 6, 8, 11
  0040b8c  fmadds 1, 11, 4, 1
  0040b90  fmuls 7, 9, 10
  0040b94  fmadds 2, 10, 3, 2
  0040b98  fmadds 1, 6, 5, 1
  0040b9c  fmuls 3, 9, 7
  0040ba0  fmadds 2, 7, 4, 2
  0040ba4  fmadds 2, 3, 5, 2
  0040ba8  fdivs 1, 1, 2
  0040bac  stfs 1, 176(3)
  0040bb0  bl 0x668d0
  0040bb4  nop
  0040bb8  addic 28, 28, 1
  0040bbc  addic 22, 22, 2
  0040bc0  cmpwi 28, 7
  0040bc4  addic 21, 21, 4
  0040bc8  addic 23, 23, 2
  0040bcc  bt 0, 0x40a34
  0040bd0  lfs 1, 52(31)
  0040bd4  lfs 2, 48(31)
  0040bd8  fsubs 1, 30, 1
  0040bdc  lfs 3, 56(31)
  0040be0  fsubs 2, 31, 2
  0040be4  fsubs 3, 29, 3
  0040be8  fmuls 1, 1, 1
  0040bec  fmadds 1, 2, 2, 1
  0040bf0  fmadds 1, 3, 3, 1
  0040bf4  fsqrts 31, 1
  0040bf8  lfs 1, 80(27)
  0040bfc  lwz 3, 40(30)
  0040c00  cmpwi 3, 0
  0040c04  fadds 31, 1, 31
  0040c08  stfs 31, 80(27)
  0040c0c  bt 0, 0x40cac
  0040c10  lis 4, 149
  0040c14  lfs 1, 48(30)
  0040c18  lfs 2, 44(30)
  0040c1c  lis 5, 164
  0040c20  addic 4, 4, 5056
  0040c24  slwi 3, 3, 8
  0040c28  lfs 3, 864(4)
  0040c2c  lfs 4, 868(4)
  0040c30  lfs 5, 872(4)
  0040c34  fmuls 3, 3, 1
  0040c38  fmuls 4, 4, 1
  0040c3c  lfs 6, 848(4)
  0040c40  fmuls 1, 5, 1
  0040c44  lfs 5, 852(4)
  0040c48  lwz 5, -28512(5)
  0040c4c  lfs 7, 52(30)
  0040c50  lfs 8, 856(4)
  0040c54  addc 3, 5, 3
  0040c58  lfs 9, 880(4)
  0040c5c  clrldi 3, 3, 32
  0040c60  fmadds 3, 6, 2, 3
  0040c64  fmadds 4, 5, 2, 4
  0040c68  fmadds 1, 8, 2, 1
  0040c6c  lfs 5, 884(4)
  0040c70  lfs 2, 888(4)
  0040c74  lfs 6, 16(3)
  0040c78  lfs 8, 20(3)
  0040c7c  lfs 10, 24(3)
  0040c80  fmadds 3, 9, 7, 3
  0040c84  fmadds 9, 5, 7, 4
  0040c88  fmadds 1, 2, 7, 1
  0040c8c  lfs 4, 28(3)
  0040c90  lfs 7, 48(31)
  0040c94  lfs 5, 52(31)
  0040c98  lfs 2, 56(31)
  0040c9c  fadds 6, 6, 3
  0040ca0  fadds 3, 8, 9
  0040ca4  fadds 1, 10, 1
  0040ca8  b 0x40d3c
  0040cac  lfs 1, 72(27)
  0040cb0  fdivs 1, 31, 1
  0040cb4  lfs 2, 76(27)
  0040cb8  addic 29, 1, 112
  0040cbc  li 8, 0
  0040cc0  addic 5, 1, 128
  0040cc4  addic 6, 1, 132
  0040cc8  ori 4, 29, 0
  0040ccc  lwz 3, 36(30)
  0040cd0  stw 24, 128(1)
  0040cd4  slwi 3, 3, 2
  0040cd8  stw 24, 132(1)
  0040cdc  extsw 3, 3
  0040ce0  lwzx 30, 26, 3
  0040ce4  ori 3, 30, 0
  0040ce8  fmuls 1, 1, 2
  0040cec  bl 0x10ce18
  0040cf0  nop
  0040cf4  lfs 1, 52(25)
  0040cf8  ori 3, 29, 0
  0040cfc  bl 0x65470
  0040d00  nop
  0040d04  lwz 3, 0(30)
  0040d08  slwi 4, 3, 4
  0040d0c  addic 3, 30, 16
  0040d10  addc 4, 30, 4
  0040d14  clrldi 4, 4, 32
  0040d18  bl 0x65468
  0040d1c  nop
  0040d20  lfs 6, 112(1)
  0040d24  lfs 7, 48(31)
  0040d28  lfs 3, 116(1)
  0040d2c  lfs 5, 52(31)
  0040d30  lfs 1, 120(1)
  0040d34  lfs 2, 56(31)
  0040d38  lfs 4, 124(1)
  0040d3c  fsubs 8, 3, 5
  0040d40  fsubs 9, 6, 7
  0040d44  fsubs 7, 1, 2
  0040d48  lfs 6, 8(25)
  0040d4c  lis 3, 151
  0040d50  addic 3, 3, -25376
  0040d54  fmuls 1, 8, 8
  0040d58  fmadds 5, 9, 9, 1
  0040d5c  lfs 1, 656(3)
  0040d60  lfs 2, 660(3)
  0040d64  lfs 3, 664(3)
  0040d68  fmadds 5, 7, 7, 5
  0040d6c  fsqrts 10, 5
  0040d70  fcmpu 0, 10, 6
  0040d74  bf 2, 0x40d98
  0040d78  stfs 4, 12(31)
  0040d7c  fmr 4, 6
  0040d80  stfs 9, 0(31)
  0040d84  stfs 7, 8(31)
  0040d88  stfs 8, 4(31)
  0040d8c  fmr 5, 4
  0040d90  fmr 7, 5
  0040d94  b 0x40de8
  0040d98  frsqrte 10, 5
  0040d9c  fmr 31, 7
  0040da0  lfs 11, 12(25)
  0040da4  lfs 12, 4(25)
  0040da8  stfs 4, 12(31)
  0040dac  fmuls 13, 5, 10
  0040db0  fmuls 0, 11, 10
  0040db4  fnmsubs 13, 13, 10, 12
  0040db8  fmadds 7, 13, 0, 10
  0040dbc  fmuls 10, 5, 7
  0040dc0  fmuls 13, 11, 7
  0040dc4  fnmsubs 4, 10, 7, 12
  0040dc8  fmadds 4, 4, 13, 7
  0040dcc  fmuls 5, 5, 4
  0040dd0  fmuls 7, 11, 4
  0040dd4  fnmsubs 5, 5, 4, 12
  0040dd8  fmadds 4, 5, 7, 4
  0040ddc  fmuls 7, 9, 4
  0040de0  fmuls 5, 8, 4
  0040de4  fmuls 4, 31, 4
  0040de8  fmuls 9, 3, 7
  0040dec  fmuls 10, 1, 4
  0040df0  fmuls 3, 3, 5
  0040df4  fmr 8, 6
  0040df8  fmuls 6, 2, 4
  0040dfc  fmuls 1, 1, 5
  0040e00  fmuls 2, 2, 7
  0040e04  fneg 9, 9
  0040e08  fneg 10, 10
  0040e0c  fneg 11, 3
  0040e10  fneg 6, 6
  0040e14  fneg 1, 1
  0040e18  stfs 7, 0(31)
  0040e1c  fsubs 3, 9, 10
  0040e20  fneg 9, 2
  0040e24  fsubs 2, 6, 11
  0040e28  stfs 5, 4(31)
  0040e2c  stfs 4, 8(31)
  0040e30  fmuls 10, 3, 3
  0040e34  fsubs 6, 1, 9
  0040e38  fmr 9, 8
  0040e3c  stw 24, 28(31)
  0040e40  fmadds 1, 2, 2, 10
  0040e44  fmr 10, 9
  0040e48  fmadds 1, 6, 6, 1
  0040e4c  fsqrts 11, 1
  0040e50  fcmpu 0, 11, 10
  0040e54  bt 2, 0x40ea0
  0040e58  frsqrte 8, 1
  0040e5c  lfs 9, 12(25)
  0040e60  lfs 10, 4(25)
  0040e64  fmuls 11, 1, 8
  0040e68  fmuls 12, 9, 8
  0040e6c  fnmsubs 11, 11, 8, 10
  0040e70  fmadds 8, 11, 12, 8
  0040e74  fmuls 11, 1, 8
  0040e78  fmuls 12, 9, 8
  0040e7c  fnmsubs 11, 11, 8, 10
  0040e80  fmadds 8, 11, 12, 8
  0040e84  fmuls 1, 1, 8
  0040e88  fmuls 9, 9, 8
  0040e8c  fnmsubs 1, 1, 8, 10
  0040e90  fmadds 8, 1, 9, 8
  0040e94  fmuls 10, 2, 8
  0040e98  fmuls 9, 3, 8
  0040e9c  fmuls 8, 6, 8
  0040ea0  fmuls 1, 4, 9
  0040ea4  stfs 10, 16(31)
  0040ea8  fmuls 2, 7, 8
  0040eac  stfs 9, 20(31)
  0040eb0  fmuls 3, 5, 10
  0040eb4  stfs 8, 24(31)
  0040eb8  stw 24, 44(31)
  0040ebc  fmsubs 1, 5, 8, 1
  0040ec0  fmsubs 2, 4, 10, 2
  0040ec4  fmsubs 3, 7, 9, 3
  0040ec8  stfs 1, 32(31)
  0040ecc  stfs 2, 36(31)
  0040ed0  stfs 3, 40(31)
  0040ed4  ld 0, 288(1)
  0040ed8  mtlr 0
  0040edc  lfd 29, 248(1)
  0040ee0  lfd 30, 256(1)
  0040ee4  lfd 31, 264(1)
  0040ee8  ld 21, 160(1)
  0040eec  ld 22, 168(1)
  0040ef0  ld 23, 176(1)
  0040ef4  ld 24, 184(1)
  0040ef8  ld 25, 192(1)
  0040efc  ld 26, 200(1)
  0040f00  ld 27, 208(1)
  0040f04  ld 28, 216(1)
  0040f08  ld 29, 224(1)
  0040f0c  ld 30, 232(1)
  0040f10  ld 31, 240(1)
  0040f14  addi 1, 1, 272
  0040f18  blr

ActivateCamera_19:   # 0x40f1c, 0x104 bytes
  0040f1c  stdu 1, -128(1)
  0040f20  mflr 0
  0040f24  std 0, 144(1)
  0040f28  lis 5, 149
  0040f2c  lhz 6, 132(3)
  0040f30  extsh 6, 6
  0040f34  lwz 5, 16468(5)
  0040f38  sldi 6, 6, 5
  0040f3c  std 31, 120(1)
  0040f40  addc 5, 5, 6
  0040f44  clrldi 31, 5, 32
  0040f48  lbz 5, 124(3)
  0040f4c  lwz 31, 28(31)
  0040f50  lbz 6, 57(31)
  0040f54  cmpwi 6, 0
  0040f58  bt 2, 0x40f64
  0040f5c  li 3, -1
  0040f60  b 0x4100c
  0040f64  lbz 6, 56(31)
  0040f68  cmpwi 6, 0
  0040f6c  bt 2, 0x40f84
  0040f70  lhz 6, 134(4)
  0040f74  cmpwi 6, 19
  0040f78  bt 2, 0x40f84
  0040f7c  li 3, 1
  0040f80  b 0x4100c
  0040f84  cmpwi 4, 0
  0040f88  bt 2, 0x40fa4
  0040f8c  lhz 6, 126(4)
  0040f90  cmpwi 6, 0
  0040f94  bf 2, 0x40fa4
  0040f98  lbz 4, 124(4)
  0040f9c  cmpw 5, 4
  0040fa0  bf 1, 0x41008
  0040fa4  bl 0x3fc8c
  0040fa8  cmpwi 3, 0
  0040fac  bt 2, 0x41008
  0040fb0  lwz 3, 72(31)
  0040fb4  cmpwi 3, 0
  0040fb8  bt 0, 0x40fd8
  0040fbc  lis 4, 151
  0040fc0  addic 4, 4, -25376
  0040fc4  lwz 4, 8332(4)
  0040fc8  cmpw 4, 3
  0040fcc  bt 2, 0x40fd8
  0040fd0  li 3, 0
  0040fd4  b 0x4100c
  0040fd8  lwz 31, 68(31)
  0040fdc  cmpwi 31, 0
  0040fe0  bt 0, 0x41000
  0040fe4  lis 3, 151
  0040fe8  addic 3, 3, -25376
  0040fec  lwz 3, 8324(3)
  0040ff0  cmpw 3, 31
  0040ff4  bt 2, 0x41000
  0040ff8  li 3, 0
  0040ffc  b 0x4100c
  0041000  li 3, 1
  0041004  b 0x4100c
  0041008  li 3, 0
  004100c  ld 0, 144(1)
  0041010  mtlr 0
  0041014  ld 31, 120(1)
  0041018  addi 1, 1, 128
  004101c  blr

STUB_00041020:   # 0x41020, 0x4 bytes
  0041020  blr
