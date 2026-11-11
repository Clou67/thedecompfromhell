# game/update/moby880.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M880_0049fb70:   # 0x49fb70, 0x14 bytes
  049fb70  lis 3, 141
  049fb74  lis 4, 1
  049fb78  addic 3, 3, -17084
  049fb7c  stw 4, 72(3)
  049fb80  blr

FUN_0049fba0:   # 0x49fba0, 0x56c bytes
  049fba0  stdu 1, -272(1)
  049fba4  mflr 0
  049fba8  std 0, 288(1)
  049fbac  std 31, 264(1)
  049fbb0  ori 31, 3, 0
  049fbb4  std 29, 248(1)
  049fbb8  std 28, 240(1)
  049fbbc  li 3, 880
  049fbc0  ori 28, 6, 0
  049fbc4  std 30, 256(1)
  049fbc8  ori 29, 5, 0
  049fbcc  std 27, 232(1)
  049fbd0  std 26, 224(1)
  049fbd4  ori 30, 4, 0
  049fbd8  bl 0xefa28
  049fbdc  nop
  049fbe0  ori 27, 3, 0
  049fbe4  cmpwi 27, 0
  049fbe8  bt 2, 0x4a00e0
  049fbec  li 3, 255
  049fbf0  lis 5, 74
  049fbf4  li 4, 127
  049fbf8  li 6, 1
  049fbfc  addi 5, 5, -1144
  049fc00  li 7, 0
  049fc04  stb 3, 48(27)
  049fc08  sth 4, 50(27)
  049fc0c  stb 6, 49(27)
  049fc10  lfs 2, 0(5)
  049fc14  stw 7, 64(27)
  049fc18  lfs 1, 4(30)
  049fc1c  lfs 3, 0(30)
  049fc20  fmuls 1, 1, 1
  049fc24  lwz 4, 8(30)
  049fc28  lis 3, 115
  049fc2c  rlwinm 4, 4, 3, 29, 29
  049fc30  addic 3, 3, 22784
  049fc34  fmadds 1, 3, 3, 1
  049fc38  lfs 3, 8(30)
  049fc3c  lwz 26, 120(27)
  049fc40  fabs 5, 3
  049fc44  fsqrts 1, 1
  049fc48  fabs 4, 1
  049fc4c  stfs 1, 132(1)
  049fc50  fsubs 1, 4, 5
  049fc54  stfs 1, 136(1)
  049fc58  lwz 6, 132(1)
  049fc5c  lfs 1, 132(1)
  049fc60  fabs 6, 1
  049fc64  lfs 1, 4(5)
  049fc68  lwz 5, 136(1)
  049fc6c  lfs 3, 136(1)
  049fc70  rlwimi 4, 5, 2, 30, 30
  049fc74  fsub 7, 3, 2
  049fc78  fsub 8, 3, 2
  049fc7c  rlwimi 4, 6, 4, 28, 28
  049fc80  ori 5, 3, 0
  049fc84  rlwimi 5, 4, 2, 26, 28
  049fc88  slwi 4, 4, 2
  049fc8c  clrldi 5, 5, 32
  049fc90  fsel 6, 7, 6, 5
  049fc94  lfsx 3, 3, 4
  049fc98  fsel 5, 8, 5, 4
  049fc9c  lfs 4, 4(5)
  049fca0  fcmpu 0, 6, 2
  049fca4  bt 1, 0x49fcb0
  049fca8  fmr 3, 2
  049fcac  b 0x49fdc8
  049fcb0  fsubs 7, 5, 6
  049fcb4  fadds 5, 5, 6
  049fcb8  addic 4, 1, 16
  049fcbc  li 7, 2
  049fcc0  addic 5, 4, 156
  049fcc4  addic 6, 4, 172
  049fcc8  mtctr 7
  049fccc  fdivs 5, 7, 5
  049fcd0  fmuls 6, 5, 5
  049fcd4  stfs 5, 184(1)
  049fcd8  stfs 5, 176(1)
  049fcdc  stfs 5, 180(1)
  049fce0  stfs 5, 172(1)
  049fce4  lfs 8, 184(1)
  049fce8  lfs 9, 176(1)
  049fcec  lfs 10, 180(1)
  049fcf0  fmuls 7, 6, 6
  049fcf4  fmuls 9, 9, 6
  049fcf8  fmuls 8, 8, 7
  049fcfc  fmuls 5, 7, 7
  049fd00  fmuls 7, 10, 7
  049fd04  stfs 9, 176(1)
  049fd08  fmuls 6, 8, 6
  049fd0c  stfs 7, 180(1)
  049fd10  stfs 6, 184(1)
  049fd14  lfs 6, 156(4)
  049fd18  fmuls 6, 6, 5
  049fd1c  stfs 6, 172(4)
  049fd20  lfs 6, 4(5)
  049fd24  addic 4, 4, 8
  049fd28  addic 5, 5, 8
  049fd2c  fmuls 6, 6, 5
  049fd30  stfs 6, 4(6)
  049fd34  addic 6, 6, 8
  049fd38  bdnz 0x49fd14
  049fd3c  li 6, 4
  049fd40  ori 4, 1, 0
  049fd44  mtctr 6
  049fd48  lis 5, 115
  049fd4c  addic 6, 4, 172
  049fd50  addic 5, 5, 22752
  049fd54  ori 8, 6, 0
  049fd58  lfs 5, 172(4)
  049fd5c  lfs 6, 0(5)
  049fd60  fmuls 5, 5, 6
  049fd64  lfs 6, 4(5)
  049fd68  addic 5, 5, 8
  049fd6c  stfs 5, 172(4)
  049fd70  lfs 5, 4(6)
  049fd74  addic 4, 4, 8
  049fd78  fmuls 5, 5, 6
  049fd7c  stfs 5, 4(6)
  049fd80  addic 6, 6, 8
  049fd84  bdnz 0x49fd58
  049fd88  fmr 5, 2
  049fd8c  ori 4, 1, 0
  049fd90  mtctr 7
  049fd94  lfs 6, 172(4)
  049fd98  fadds 5, 5, 6
  049fd9c  addic 4, 4, 16
  049fda0  lfs 6, 4(8)
  049fda4  lfs 7, 8(8)
  049fda8  lfs 8, 12(8)
  049fdac  addic 8, 8, 16
  049fdb0  fadds 5, 5, 6
  049fdb4  fadds 5, 5, 7
  049fdb8  fadds 5, 5, 8
  049fdbc  bdnz 0x49fd94
  049fdc0  fadds 5, 5, 1
  049fdc4  fmadds 3, 5, 3, 4
  049fdc8  fneg 3, 3
  049fdcc  stfs 3, 68(27)
  049fdd0  lwz 4, 0(30)
  049fdd4  lwz 5, 4(30)
  049fdd8  lfs 3, 0(30)
  049fddc  lfs 4, 4(30)
  049fde0  fabs 5, 3
  049fde4  fabs 7, 4
  049fde8  rlwinm 5, 5, 3, 29, 29
  049fdec  fsubs 3, 5, 7
  049fdf0  stfs 3, 128(1)
  049fdf4  lwz 6, 128(1)
  049fdf8  lfs 3, 128(1)
  049fdfc  rlwimi 5, 6, 2, 30, 30
  049fe00  fsub 6, 3, 2
  049fe04  fsub 8, 3, 2
  049fe08  rlwimi 5, 4, 4, 28, 28
  049fe0c  ori 4, 3, 0
  049fe10  rlwimi 4, 5, 2, 26, 28
  049fe14  slwi 5, 5, 2
  049fe18  clrldi 4, 4, 32
  049fe1c  fsel 6, 6, 5, 7
  049fe20  lfsx 3, 3, 5
  049fe24  fsel 5, 8, 7, 5
  049fe28  lfs 4, 4(4)
  049fe2c  fcmpu 0, 6, 2
  049fe30  bt 1, 0x49fe3c
  049fe34  fmr 1, 2
  049fe38  b 0x49ff54
  049fe3c  fsubs 7, 5, 6
  049fe40  fadds 5, 5, 6
  049fe44  addic 3, 1, 16
  049fe48  li 7, 2
  049fe4c  addic 5, 3, 140
  049fe50  addic 4, 3, 124
  049fe54  mtctr 7
  049fe58  fdivs 5, 7, 5
  049fe5c  fmuls 6, 5, 5
  049fe60  stfs 5, 152(1)
  049fe64  stfs 5, 144(1)
  049fe68  stfs 5, 148(1)
  049fe6c  stfs 5, 140(1)
  049fe70  lfs 8, 152(1)
  049fe74  lfs 9, 144(1)
  049fe78  lfs 10, 148(1)
  049fe7c  fmuls 7, 6, 6
  049fe80  fmuls 9, 9, 6
  049fe84  fmuls 8, 8, 7
  049fe88  fmuls 5, 7, 7
  049fe8c  fmuls 7, 10, 7
  049fe90  stfs 9, 144(1)
  049fe94  fmuls 6, 8, 6
  049fe98  stfs 7, 148(1)
  049fe9c  stfs 6, 152(1)
  049fea0  lfs 6, 124(3)
  049fea4  fmuls 6, 6, 5
  049fea8  stfs 6, 140(3)
  049feac  lfs 6, 4(4)
  049feb0  addic 4, 4, 8
  049feb4  fmuls 6, 6, 5
  049feb8  addic 3, 3, 8
  049febc  stfs 6, 4(5)
  049fec0  addic 5, 5, 8
  049fec4  bdnz 0x49fea0
  049fec8  li 5, 4
  049fecc  ori 3, 1, 0
  049fed0  mtctr 5
  049fed4  lis 4, 115
  049fed8  addic 5, 3, 140
  049fedc  addic 4, 4, 22752
  049fee0  ori 6, 5, 0
  049fee4  lfs 5, 140(3)
  049fee8  lfs 6, 0(4)
  049feec  fmuls 5, 5, 6
  049fef0  lfs 6, 4(4)
  049fef4  addic 4, 4, 8
  049fef8  stfs 5, 140(3)
  049fefc  lfs 5, 4(5)
  049ff00  addic 3, 3, 8
  049ff04  fmuls 5, 5, 6
  049ff08  stfs 5, 4(5)
  049ff0c  addic 5, 5, 8
  049ff10  bdnz 0x49fee4
  049ff14  ori 3, 1, 0
  049ff18  fmr 5, 2
  049ff1c  mtctr 7
  049ff20  lfs 6, 140(3)
  049ff24  fadds 5, 5, 6
  049ff28  lfs 6, 4(6)
  049ff2c  addic 3, 3, 16
  049ff30  lfs 7, 8(6)
  049ff34  lfs 8, 12(6)
  049ff38  addic 6, 6, 16
  049ff3c  fadds 5, 5, 6
  049ff40  fadds 5, 5, 7
  049ff44  fadds 5, 5, 8
  049ff48  bdnz 0x49ff20
  049ff4c  fadds 1, 5, 1
  049ff50  fmadds 1, 1, 3, 4
  049ff54  stfs 1, 72(27)
  049ff58  lfs 1, 0(31)
  049ff5c  fmr 5, 2
  049ff60  stfs 1, 16(27)
  049ff64  lfs 1, 4(31)
  049ff68  stfs 1, 20(27)
  049ff6c  lfs 1, 8(31)
  049ff70  stfs 1, 24(27)
  049ff74  lfs 1, 12(31)
  049ff78  stfs 1, 28(27)
  049ff7c  lfs 1, 0(31)
  049ff80  stfs 1, 64(26)
  049ff84  lfs 1, 4(31)
  049ff88  stfs 1, 68(26)
  049ff8c  lfs 1, 8(31)
  049ff90  stfs 1, 72(26)
  049ff94  lfs 1, 12(31)
  049ff98  stfs 1, 76(26)
  049ff9c  lfs 1, 0(30)
  049ffa0  stfs 1, 48(26)
  049ffa4  lfs 2, 4(30)
  049ffa8  stfs 2, 52(26)
  049ffac  lfs 2, 8(30)
  049ffb0  stfs 2, 56(26)
  049ffb4  lfs 2, 12(30)
  049ffb8  stfs 2, 60(26)
  049ffbc  stfs 1, 112(1)
  049ffc0  lfs 2, 52(26)
  049ffc4  fmuls 3, 2, 2
  049ffc8  fmr 6, 5
  049ffcc  stfs 2, 116(1)
  049ffd0  lis 3, 74
  049ffd4  lfs 4, 56(26)
  049ffd8  addi 3, 3, -1144
  049ffdc  stfs 4, 120(1)
  049ffe0  lfs 4, 60(26)
  049ffe4  fmadds 3, 1, 1, 3
  049ffe8  stfs 4, 124(1)
  049ffec  lfs 4, 8(3)
  049fff0  fsqrts 7, 3
  049fff4  fcmpu 0, 7, 6
  049fff8  bt 2, 0x4a0044
  049fffc  frsqrte 5, 3
  04a0000  lis 3, 74
  04a0004  addi 3, 3, -1144
  04a0008  lfs 6, 12(3)
  04a000c  fmuls 7, 3, 5
  04a0010  fmuls 8, 6, 5
  04a0014  fnmsubs 7, 7, 5, 4
  04a0018  fmadds 5, 7, 8, 5
  04a001c  fmuls 7, 3, 5
  04a0020  fmuls 8, 6, 5
  04a0024  fnmsubs 7, 7, 5, 4
  04a0028  fmadds 5, 7, 8, 5
  04a002c  fmuls 3, 3, 5
  04a0030  fmuls 6, 6, 5
  04a0034  fnmsubs 3, 3, 5, 4
  04a0038  fmadds 5, 3, 6, 5
  04a003c  fmuls 6, 1, 5
  04a0040  fmuls 5, 2, 5
  04a0044  lis 6, 16256
  04a0048  lis 5, 1
  04a004c  stfs 6, 112(1)
  04a0050  ori 4, 27, 0
  04a0054  stfs 5, 116(1)
  04a0058  addic 7, 1, 112
  04a005c  fmr 1, 4
  04a0060  ori 3, 26, 0
  04a0064  stw 6, 120(1)
  04a0068  ori 5, 5, 1
  04a006c  bl 0x10581c
  04a0070  nop
  04a0074  lis 4, 74
  04a0078  li 3, 1
  04a007c  addi 4, 4, -1144
  04a0080  lis 5, 114
  04a0084  stb 3, 24(26)
  04a0088  stb 3, 25(26)
  04a008c  lfs 1, 16(4)
  04a0090  lfs 2, -3056(5)
  04a0094  li 4, 1
  04a0098  ori 3, 27, 0
  04a009c  fmuls 1, 2, 1
  04a00a0  li 5, 0
  04a00a4  fctiwz 1, 1
  04a00a8  stfd 1, 208(1)
  04a00ac  lwz 6, 212(1)
  04a00b0  extsw 6, 6
  04a00b4  bl 0xfddc0
  04a00b8  nop
  04a00bc  li 4, 520
  04a00c0  li 5, 16
  04a00c4  ori 3, 27, 0
  04a00c8  sth 4, 52(27)
  04a00cc  stw 29, 80(26)
  04a00d0  stw 28, 84(26)
  04a00d4  stb 5, 35(27)
  04a00d8  bl 0xf31a8
  04a00dc  nop
  04a00e0  ori 3, 27, 0
  04a00e4  ld 0, 288(1)
  04a00e8  mtlr 0
  04a00ec  ld 26, 224(1)
  04a00f0  ld 27, 232(1)
  04a00f4  ld 28, 240(1)
  04a00f8  ld 29, 248(1)
  04a00fc  ld 30, 256(1)
  04a0100  ld 31, 264(1)
  04a0104  addi 1, 1, 272
  04a0108  blr

UpdateMoby_880:   # 0x4a0148, 0x618 bytes
  04a0148  stdu 1, -320(1)
  04a014c  mflr 0
  04a0150  std 0, 336(1)
  04a0154  stfd 22, 240(1)
  04a0158  stfd 23, 248(1)
  04a015c  stfd 24, 256(1)
  04a0160  stfd 25, 264(1)
  04a0164  stfd 26, 272(1)
  04a0168  stfd 27, 280(1)
  04a016c  stfd 28, 288(1)
  04a0170  stfd 29, 296(1)
  04a0174  stfd 30, 304(1)
  04a0178  stfd 31, 312(1)
  04a017c  std 31, 232(1)
  04a0180  std 29, 216(1)
  04a0184  ori 31, 3, 0
  04a0188  lwz 29, 120(31)
  04a018c  lfs 3, 16(31)
  04a0190  lfs 2, 20(31)
  04a0194  stfs 3, 112(1)
  04a0198  lfs 1, 24(31)
  04a019c  stfs 2, 116(1)
  04a01a0  lfs 4, 28(31)
  04a01a4  stfs 1, 120(1)
  04a01a8  stfs 4, 124(1)
  04a01ac  lfs 4, 48(29)
  04a01b0  fadds 3, 3, 4
  04a01b4  lis 3, 74
  04a01b8  addi 3, 3, 268
  04a01bc  stfs 3, 16(31)
  04a01c0  lfs 4, 52(29)
  04a01c4  fadds 2, 2, 4
  04a01c8  stfs 2, 20(31)
  04a01cc  lfs 4, 56(29)
  04a01d0  fadds 1, 1, 4
  04a01d4  stfs 1, 24(31)
  04a01d8  lfs 4, 68(29)
  04a01dc  lfs 5, 64(29)
  04a01e0  fsubs 4, 2, 4
  04a01e4  fsubs 5, 3, 5
  04a01e8  fmuls 4, 4, 4
  04a01ec  fmadds 4, 5, 5, 4
  04a01f0  fsqrts 5, 4
  04a01f4  lfs 4, 0(3)
  04a01f8  lwz 3, 84(29)
  04a01fc  cntlzw 3, 3
  04a0200  rlwinm 3, 3, 27, 31, 31
  04a0204  fcmpu 0, 5, 4
  04a0208  std 30, 224(1)
  04a020c  std 28, 208(1)
  04a0210  std 27, 200(1)
  04a0214  std 26, 192(1)
  04a0218  cror 6, 0, 2
  04a021c  bt 6, 0x4a03d4
  04a0220  lbz 3, 49(31)
  04a0224  cmpwi 3, 0
  04a0228  bt 2, 0x4a03c4
  04a022c  lis 3, 74
  04a0230  li 28, 0
  04a0234  addi 3, 3, 268
  04a0238  ori 30, 28, 0
  04a023c  addic 29, 31, 16
  04a0240  lfs 26, 4(3)
  04a0244  lfs 27, 8(3)
  04a0248  lfs 28, 12(3)
  04a024c  lfs 29, 16(3)
  04a0250  lfs 30, 20(3)
  04a0254  lfs 31, 24(3)
  04a0258  fmr 1, 27
  04a025c  stw 30, 128(1)
  04a0260  fmr 2, 28
  04a0264  stw 30, 132(1)
  04a0268  stw 30, 136(1)
  04a026c  stw 30, 140(1)
  04a0270  bl 0xfcbe8
  04a0274  nop
  04a0278  stfs 1, 128(1)
  04a027c  fmr 1, 27
  04a0280  fmr 2, 28
  04a0284  bl 0xfcbe8
  04a0288  nop
  04a028c  stfs 1, 132(1)
  04a0290  fmr 2, 28
  04a0294  fmr 1, 27
  04a0298  bl 0xfcbe8
  04a029c  nop
  04a02a0  fmuls 2, 25, 25
  04a02a4  lfs 3, 132(1)
  04a02a8  lfs 4, 128(1)
  04a02ac  fmuls 5, 3, 3
  04a02b0  fmadds 2, 25, 25, 2
  04a02b4  fmadds 5, 4, 4, 5
  04a02b8  fmadds 2, 25, 25, 2
  04a02bc  fmadds 5, 1, 1, 5
  04a02c0  fsqrts 2, 2
  04a02c4  lis 3, 114
  04a02c8  lfs 6, -3052(3)
  04a02cc  stfs 25, 140(1)
  04a02d0  fsqrts 5, 5
  04a02d4  fmuls 7, 2, 29
  04a02d8  fmuls 2, 6, 31
  04a02dc  fdivs 7, 7, 5
  04a02e0  fsub 8, 26, 5
  04a02e4  fsub 9, 26, 5
  04a02e8  fsub 10, 26, 5
  04a02ec  fsub 11, 5, 26
  04a02f0  fsub 12, 5, 26
  04a02f4  fsub 5, 5, 26
  04a02f8  fmuls 13, 1, 7
  04a02fc  fmuls 3, 3, 7
  04a0300  fmuls 4, 4, 7
  04a0304  fmuls 1, 6, 30
  04a0308  fsel 6, 8, 26, 13
  04a030c  fsel 7, 9, 26, 3
  04a0310  fsel 8, 10, 26, 4
  04a0314  fsel 6, 11, 6, 13
  04a0318  fsel 3, 12, 7, 3
  04a031c  fsel 4, 5, 8, 4
  04a0320  fadds 5, 25, 6
  04a0324  fadds 3, 25, 3
  04a0328  fadds 4, 25, 4
  04a032c  stfs 5, 136(1)
  04a0330  stfs 3, 132(1)
  04a0334  stfs 4, 128(1)
  04a0338  bl 0xfcbe8
  04a033c  nop
  04a0340  lfs 2, 132(1)
  04a0344  lfs 3, 128(1)
  04a0348  fmuls 4, 2, 2
  04a034c  lfs 5, 136(1)
  04a0350  addic 4, 1, 128
  04a0354  ori 3, 29, 0
  04a0358  fmadds 4, 3, 3, 4
  04a035c  fmadds 4, 5, 5, 4
  04a0360  fsqrts 4, 4
  04a0364  fdivs 1, 1, 4
  04a0368  fsub 6, 26, 4
  04a036c  fsub 7, 26, 4
  04a0370  fsub 8, 26, 4
  04a0374  fsub 9, 4, 26
  04a0378  fsub 10, 4, 26
  04a037c  fsub 4, 4, 26
  04a0380  fmuls 3, 3, 1
  04a0384  fmuls 2, 2, 1
  04a0388  fmuls 1, 5, 1
  04a038c  fsel 5, 6, 26, 3
  04a0390  fsel 6, 7, 26, 2
  04a0394  fsel 7, 8, 26, 1
  04a0398  fsel 3, 9, 5, 3
  04a039c  fsel 2, 10, 6, 2
  04a03a0  fsel 1, 4, 7, 1
  04a03a4  stfs 3, 128(1)
  04a03a8  stfs 2, 132(1)
  04a03ac  stfs 1, 136(1)
  04a03b0  bl 0x12f490
  04a03b4  nop
  04a03b8  addic 28, 28, 1
  04a03bc  cmpwi 28, 3
  04a03c0  bt 0, 0x4a0258
  04a03c4  ori 3, 31, 0
  04a03c8  bl 0xefb38
  04a03cc  nop
  04a03d0  b 0x4a0710
  04a03d4  lbz 4, 49(31)
  04a03d8  cmpwi 4, 0
  04a03dc  bf 2, 0x4a0410
  04a03e0  lis 4, 151
  04a03e4  addic 4, 4, -25376
  04a03e8  lfs 5, 132(4)
  04a03ec  lfs 6, 128(4)
  04a03f0  fsubs 5, 2, 5
  04a03f4  fsubs 6, 3, 6
  04a03f8  fmuls 5, 5, 5
  04a03fc  fmadds 5, 6, 6, 5
  04a0400  fsqrts 5, 5
  04a0404  fcmpu 0, 5, 4
  04a0408  cror 6, 1, 2
  04a040c  bt 6, 0x4a06b8
  04a0410  addic 30, 31, 16
  04a0414  lwz 6, 80(29)
  04a0418  ori 5, 3, 0
  04a041c  addic 3, 1, 112
  04a0420  ori 4, 30, 0
  04a0424  ori 7, 29, 0
  04a0428  bl 0x57820
  04a042c  nop
  04a0430  lfs 3, 16(31)
  04a0434  cmpwi 3, 0
  04a0438  lfs 2, 20(31)
  04a043c  lfs 1, 24(31)
  04a0440  bt 2, 0x4a06b8
  04a0444  lis 28, 161
  04a0448  addic 28, 28, 2368
  04a044c  lfs 1, 32(28)
  04a0450  stfs 1, 16(31)
  04a0454  lfs 1, 36(28)
  04a0458  lbz 3, 49(31)
  04a045c  stfs 1, 20(31)
  04a0460  lfs 1, 40(28)
  04a0464  cmpwi 3, 0
  04a0468  stfs 1, 24(31)
  04a046c  lfs 1, 44(28)
  04a0470  stfs 1, 28(31)
  04a0474  bt 2, 0x4a0694
  04a0478  lis 3, 74
  04a047c  li 26, 0
  04a0480  addi 3, 3, 268
  04a0484  addic 27, 29, 48
  04a0488  ori 29, 26, 0
  04a048c  addic 28, 28, 64
  04a0490  lfs 23, 4(3)
  04a0494  lfs 24, 8(3)
  04a0498  lfs 25, 12(3)
  04a049c  lfs 26, 28(3)
  04a04a0  lfs 27, 32(3)
  04a04a4  lfs 28, 36(3)
  04a04a8  lfs 29, 40(3)
  04a04ac  lfs 30, 44(3)
  04a04b0  lfs 31, 48(3)
  04a04b4  fmr 1, 24
  04a04b8  stw 29, 144(1)
  04a04bc  fmr 2, 25
  04a04c0  stw 29, 148(1)
  04a04c4  stw 29, 152(1)
  04a04c8  stw 29, 156(1)
  04a04cc  bl 0xfcbe8
  04a04d0  nop
  04a04d4  stfs 1, 144(1)
  04a04d8  fmr 1, 24
  04a04dc  fmr 2, 25
  04a04e0  bl 0xfcbe8
  04a04e4  nop
  04a04e8  stfs 1, 148(1)
  04a04ec  fmr 2, 25
  04a04f0  fmr 1, 24
  04a04f4  bl 0xfcbe8
  04a04f8  nop
  04a04fc  stfs 1, 152(1)
  04a0500  addic 3, 1, 160
  04a0504  ori 4, 27, 0
  04a0508  ori 5, 28, 0
  04a050c  bl 0x500608
  04a0510  nop
  04a0514  lfs 3, 164(1)
  04a0518  lfs 4, 160(1)
  04a051c  fmuls 1, 3, 3
  04a0520  lfs 5, 148(1)
  04a0524  lfs 6, 168(1)
  04a0528  fmuls 2, 5, 5
  04a052c  lfs 7, 144(1)
  04a0530  lfs 8, 152(1)
  04a0534  lis 3, 114
  04a0538  lfs 9, 172(1)
  04a053c  fmadds 1, 4, 4, 1
  04a0540  fmadds 2, 7, 7, 2
  04a0544  fmadds 1, 6, 6, 1
  04a0548  fmadds 2, 8, 8, 2
  04a054c  fsqrts 1, 1
  04a0550  fsqrts 10, 2
  04a0554  lfs 2, -3052(3)
  04a0558  stfs 9, 156(1)
  04a055c  fmuls 9, 1, 26
  04a0560  fmuls 1, 2, 27
  04a0564  fmuls 2, 2, 28
  04a0568  fdivs 9, 9, 10
  04a056c  fsub 11, 23, 10
  04a0570  fsub 12, 23, 10
  04a0574  fsub 13, 23, 10
  04a0578  fsub 0, 10, 23
  04a057c  fsub 22, 10, 23
  04a0580  fsub 10, 10, 23
  04a0584  fmuls 8, 8, 9
  04a0588  fmuls 5, 5, 9
  04a058c  fmuls 7, 7, 9
  04a0590  fsel 9, 11, 23, 8
  04a0594  fsel 11, 12, 23, 5
  04a0598  fsel 12, 13, 23, 7
  04a059c  fsel 8, 0, 9, 8
  04a05a0  fsel 5, 22, 11, 5
  04a05a4  fsel 7, 10, 12, 7
  04a05a8  fadds 6, 6, 8
  04a05ac  fadds 3, 3, 5
  04a05b0  fadds 4, 4, 7
  04a05b4  stfs 6, 152(1)
  04a05b8  stfs 3, 148(1)
  04a05bc  stfs 4, 144(1)
  04a05c0  bl 0xfcbe8
  04a05c4  nop
  04a05c8  lfs 2, 148(1)
  04a05cc  lfs 3, 144(1)
  04a05d0  fmuls 4, 2, 2
  04a05d4  lfs 5, 152(1)
  04a05d8  lis 3, 114
  04a05dc  fmadds 4, 3, 3, 4
  04a05e0  lfs 6, -3056(3)
  04a05e4  fmuls 7, 6, 29
  04a05e8  fmuls 6, 6, 30
  04a05ec  fmadds 4, 5, 5, 4
  04a05f0  fctiwz 7, 7
  04a05f4  fctiwz 6, 6
  04a05f8  fsqrts 4, 4
  04a05fc  stfd 7, 176(1)
  04a0600  lwz 3, 180(1)
  04a0604  stfd 6, 176(1)
  04a0608  lwz 4, 180(1)
  04a060c  extsw 3, 3
  04a0610  extsw 4, 4
  04a0614  fdivs 1, 1, 4
  04a0618  fsub 6, 23, 4
  04a061c  fsub 7, 23, 4
  04a0620  fsub 8, 23, 4
  04a0624  fsub 9, 4, 23
  04a0628  fsub 10, 4, 23
  04a062c  fsub 4, 4, 23
  04a0630  fmuls 3, 3, 1
  04a0634  fmuls 2, 2, 1
  04a0638  fmuls 1, 5, 1
  04a063c  fsel 5, 6, 23, 3
  04a0640  fsel 6, 7, 23, 2
  04a0644  fsel 7, 8, 23, 1
  04a0648  fsel 3, 9, 5, 3
  04a064c  fsel 2, 10, 6, 2
  04a0650  fsel 1, 4, 7, 1
  04a0654  stfs 3, 144(1)
  04a0658  stfs 2, 148(1)
  04a065c  stfs 1, 152(1)
  04a0660  bl 0xfe484
  04a0664  nop
  04a0668  lis 5, 32559
  04a066c  fmr 1, 31
  04a0670  ori 6, 3, 0
  04a0674  addic 4, 1, 144
  04a0678  ori 3, 30, 0
  04a067c  ori 5, 5, 20335
  04a0680  bl 0x128248
  04a0684  nop
  04a0688  addic 26, 26, 1
  04a068c  cmpwi 26, 5
  04a0690  bt 0, 0x4a04b4
  04a0694  li 3, 0
  04a0698  li 4, 0
  04a069c  ori 5, 31, 0
  04a06a0  bl 0x15d12c
  04a06a4  nop
  04a06a8  ori 3, 31, 0
  04a06ac  bl 0xefb38
  04a06b0  nop
  04a06b4  b 0x4a0710
  04a06b8  lis 3, 74
  04a06bc  addi 3, 3, 268
  04a06c0  lfs 4, 20(3)
  04a06c4  fcmpu 0, 3, 4
  04a06c8  bt 0, 0x4a0704
  04a06cc  fmr 5, 3
  04a06d0  lis 3, 74
  04a06d4  fcmpu 6, 2, 4
  04a06d8  addi 3, 3, 268
  04a06dc  lfs 3, 52(3)
  04a06e0  fcmpu 0, 5, 3
  04a06e4  bt 1, 0x4a0704
  04a06e8  fcmpu 1, 2, 3
  04a06ec  bt 24, 0x4a0704
  04a06f0  fcmpu 6, 1, 4
  04a06f4  bt 5, 0x4a0704
  04a06f8  fcmpu 1, 1, 3
  04a06fc  bt 24, 0x4a0704
  04a0700  bf 5, 0x4a0710
  04a0704  ori 3, 31, 0
  04a0708  bl 0xefb38
  04a070c  nop
  04a0710  ld 0, 336(1)
  04a0714  mtlr 0
  04a0718  lfd 22, 240(1)
  04a071c  lfd 23, 248(1)
  04a0720  lfd 24, 256(1)
  04a0724  lfd 25, 264(1)
  04a0728  lfd 26, 272(1)
  04a072c  lfd 27, 280(1)
  04a0730  lfd 28, 288(1)
  04a0734  lfd 29, 296(1)
  04a0738  lfd 30, 304(1)
  04a073c  lfd 31, 312(1)
  04a0740  ld 26, 192(1)
  04a0744  ld 27, 200(1)
  04a0748  ld 28, 208(1)
  04a074c  ld 29, 216(1)
  04a0750  ld 30, 224(1)
  04a0754  ld 31, 232(1)
  04a0758  addi 1, 1, 320
  04a075c  blr
