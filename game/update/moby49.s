# game/update/moby49.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_49:   # 0x39fcb8, 0x514 bytes
  039fcb8  stdu 1, -320(1)
  039fcbc  mflr 0
  039fcc0  std 0, 336(1)
  039fcc4  stfd 31, 312(1)
  039fcc8  std 30, 296(1)
  039fccc  std 31, 304(1)
  039fcd0  lwz 30, 120(3)
  039fcd4  ori 31, 3, 0
  039fcd8  lwz 3, 16(30)
  039fcdc  std 29, 288(1)
  039fce0  std 28, 280(1)
  039fce4  cmpwi 3, 0
  039fce8  bf 2, 0x39fd60
  039fcec  lis 3, 149
  039fcf0  lfs 1, 20(31)
  039fcf4  lfs 2, 16(31)
  039fcf8  addic 3, 3, 5056
  039fcfc  lfs 3, 324(3)
  039fd00  lfs 4, 320(3)
  039fd04  fsubs 1, 1, 3
  039fd08  fsubs 2, 2, 4
  039fd0c  lfs 3, 24(31)
  039fd10  lfs 4, 328(3)
  039fd14  fsubs 3, 3, 4
  039fd18  lis 3, 58
  039fd1c  fmuls 1, 1, 1
  039fd20  addi 3, 3, -864
  039fd24  fmadds 1, 2, 2, 1
  039fd28  lfs 2, 0(3)
  039fd2c  fmadds 1, 3, 3, 1
  039fd30  fsqrts 1, 1
  039fd34  fcmpu 0, 1, 2
  039fd38  cror 6, 1, 2
  039fd3c  bt 6, 0x39fd60
  039fd40  li 3, 9
  039fd44  li 4, 0
  039fd48  ori 5, 31, 0
  039fd4c  li 6, 638
  039fd50  bl 0x15d204
  039fd54  nop
  039fd58  li 3, 1
  039fd5c  stw 3, 16(30)
  039fd60  lbz 3, 32(31)
  039fd64  cmpwi 3, 0
  039fd68  bf 2, 0x3a01a8
  039fd6c  lis 3, 58
  039fd70  lfs 1, 64(31)
  039fd74  addi 29, 3, -864
  039fd78  lis 3, 114
  039fd7c  lfs 2, 4(29)
  039fd80  lfs 3, -3052(3)
  039fd84  fmuls 2, 3, 2
  039fd88  bl 0x502578
  039fd8c  nop
  039fd90  stfs 1, 64(31)
  039fd94  lfs 1, 16(31)
  039fd98  lfs 2, 0(30)
  039fd9c  lfs 3, 20(31)
  039fda0  fadds 2, 1, 2
  039fda4  lfs 4, 24(31)
  039fda8  lfs 5, 28(31)
  039fdac  lis 3, 151
  039fdb0  addic 3, 3, -25376
  039fdb4  stfs 2, 128(1)
  039fdb8  lfs 2, 4(30)
  039fdbc  fadds 2, 3, 2
  039fdc0  stfs 2, 132(1)
  039fdc4  lfs 2, 8(30)
  039fdc8  stfs 5, 140(1)
  039fdcc  fadds 2, 4, 2
  039fdd0  stfs 2, 136(1)
  039fdd4  lfs 2, 8(29)
  039fdd8  lfs 5, 0(30)
  039fddc  fmuls 5, 5, 2
  039fde0  fadds 1, 5, 1
  039fde4  stfs 5, 144(1)
  039fde8  lfs 6, 4(30)
  039fdec  lbz 3, 8356(3)
  039fdf0  fmuls 6, 6, 2
  039fdf4  cmpwi 3, 2
  039fdf8  fadds 3, 6, 3
  039fdfc  stfs 6, 148(1)
  039fe00  lfs 5, 8(30)
  039fe04  fmuls 2, 5, 2
  039fe08  fadds 4, 2, 4
  039fe0c  stfs 2, 152(1)
  039fe10  lfs 2, 12(30)
  039fe14  stfs 1, 144(1)
  039fe18  stfs 2, 156(1)
  039fe1c  stfs 3, 148(1)
  039fe20  stfs 4, 152(1)
  039fe24  lfs 31, 12(29)
  039fe28  bf 2, 0x39fe4c
  039fe2c  li 3, 5
  039fe30  bl 0xfc620
  039fe34  nop
  039fe38  cmpwi 3, 0
  039fe3c  bt 2, 0x39fe4c
  039fe40  lis 3, 58
  039fe44  addi 3, 3, -864
  039fe48  lfs 31, 16(3)
  039fe4c  lis 5, 1
  039fe50  fmr 1, 31
  039fe54  addic 29, 1, 208
  039fe58  ori 5, 5, 3
  039fe5c  ori 7, 30, 0
  039fe60  ori 3, 29, 0
  039fe64  ori 4, 31, 0
  039fe68  bl 0x10581c
  039fe6c  nop
  039fe70  lhz 5, 166(31)
  039fe74  addic 3, 1, 144
  039fe78  sth 5, 234(1)
  039fe7c  addic 4, 1, 128
  039fe80  li 5, 16
  039fe84  ori 6, 31, 0
  039fe88  ori 7, 29, 0
  039fe8c  bl 0x57820
  039fe90  nop
  039fe94  cmpwi 3, 0
  039fe98  bf 2, 0x39feb0
  039fe9c  addic 3, 30, 20
  039fea0  bl 0x4fff60
  039fea4  nop
  039fea8  cmpwi 3, 0
  039feac  bt 2, 0x39ff90
  039feb0  lis 3, 161
  039feb4  lwz 4, 24(30)
  039feb8  addic 3, 3, 2368
  039febc  lwz 3, 24(3)
  039fec0  cmpw 3, 4
  039fec4  bt 2, 0x39ff90
  039fec8  li 3, 8
  039fecc  li 4, 0
  039fed0  ori 5, 31, 0
  039fed4  li 6, 638
  039fed8  bl 0x15d204
  039fedc  nop
  039fee0  lis 3, 132
  039fee4  lis 4, 114
  039fee8  lis 6, 132
  039feec  lis 7, 132
  039fef0  lwz 3, 12956(3)
  039fef4  extsw 3, 3
  039fef8  lis 10, 269
  039fefc  std 3, 256(1)
  039ff00  lis 3, 58
  039ff04  addi 3, 3, -864
  039ff08  lis 5, 161
  039ff0c  addic 5, 5, 23856
  039ff10  lfs 1, 20(3)
  039ff14  lfs 2, -3056(4)
  039ff18  lfd 3, 256(1)
  039ff1c  fcfid 3, 3
  039ff20  lis 3, 132
  039ff24  addic 4, 31, 16
  039ff28  lfs 4, 12952(3)
  039ff2c  lis 3, 132
  039ff30  frsp 3, 3
  039ff34  lwz 8, 12964(3)
  039ff38  lwz 9, 12968(6)
  039ff3c  lwz 6, 12960(7)
  039ff40  ori 3, 31, 0
  039ff44  lwz 10, -28072(10)
  039ff48  clrlwi 8, 8, 24
  039ff4c  clrlwi 6, 6, 24
  039ff50  clrlwi 9, 9, 24
  039ff54  clrlwi 10, 10, 24
  039ff58  fadds 3, 3, 1
  039ff5c  std 6, 112(1)
  039ff60  fmr 1, 4
  039ff64  fmuls 2, 2, 3
  039ff68  fctiwz 2, 2
  039ff6c  stfd 2, 256(1)
  039ff70  lwz 7, 260(1)
  039ff74  extsw 7, 7
  039ff78  bl 0x1d4d88
  039ff7c  nop
  039ff80  ori 3, 31, 0
  039ff84  bl 0xefb38
  039ff88  nop
  039ff8c  b 0x3a01a8
  039ff90  lfs 1, 128(1)
  039ff94  lfs 2, 132(1)
  039ff98  lis 3, 269
  039ff9c  stfs 1, 16(31)
  039ffa0  lis 29, 114
  039ffa4  lfs 1, 136(1)
  039ffa8  lwz 30, 120(31)
  039ffac  stfs 2, 20(31)
  039ffb0  lfs 2, 140(1)
  039ffb4  stfs 1, 24(31)
  039ffb8  stfs 2, 28(31)
  039ffbc  lfs 1, 0(30)
  039ffc0  lfs 3, -28080(3)
  039ffc4  lis 3, 132
  039ffc8  fmuls 2, 1, 3
  039ffcc  addic 28, 1, 160
  039ffd0  lfs 1, 12936(3)
  039ffd4  lfs 4, -3052(29)
  039ffd8  ori 3, 28, 0
  039ffdc  fmuls 1, 1, 4
  039ffe0  stfs 2, 176(1)
  039ffe4  lfs 2, 4(30)
  039ffe8  fmuls 4, 2, 3
  039ffec  fmr 2, 1
  039fff0  stfs 4, 180(1)
  039fff4  lfs 4, 8(30)
  039fff8  fmuls 3, 4, 3
  039fffc  stfs 3, 184(1)
  03a0000  lfs 3, 12(30)
  03a0004  stfs 3, 188(1)
  03a0008  bl 0xfea60
  03a000c  nop
  03a0010  lfs 1, 176(1)
  03a0014  lfs 2, 160(1)
  03a0018  lis 3, 269
  03a001c  lfs 3, 180(1)
  03a0020  lis 4, 132
  03a0024  fadds 1, 1, 2
  03a0028  lfs 2, 164(1)
  03a002c  lfs 4, 184(1)
  03a0030  fadds 2, 3, 2
  03a0034  lfs 3, 168(1)
  03a0038  fadds 3, 4, 3
  03a003c  lfs 4, -28076(3)
  03a0040  ori 3, 28, 0
  03a0044  stfs 1, 176(1)
  03a0048  stfs 2, 180(1)
  03a004c  stfs 3, 184(1)
  03a0050  lfs 1, 0(30)
  03a0054  fmuls 2, 1, 4
  03a0058  lfs 1, -3052(29)
  03a005c  lfs 3, 12940(4)
  03a0060  fmuls 1, 3, 1
  03a0064  stfs 2, 192(1)
  03a0068  lfs 2, 4(30)
  03a006c  fmuls 3, 2, 4
  03a0070  fmr 2, 1
  03a0074  stfs 3, 196(1)
  03a0078  lfs 3, 8(30)
  03a007c  fmuls 3, 3, 4
  03a0080  stfs 3, 200(1)
  03a0084  lfs 3, 12(30)
  03a0088  stfs 3, 204(1)
  03a008c  bl 0xfea60
  03a0090  nop
  03a0094  lfs 1, 192(1)
  03a0098  lis 3, 132
  03a009c  lfs 2, 160(1)
  03a00a0  lis 4, 132
  03a00a4  lfs 3, 196(1)
  03a00a8  lis 5, 132
  03a00ac  fadds 1, 1, 2
  03a00b0  lfs 2, 164(1)
  03a00b4  lfs 4, 200(1)
  03a00b8  fadds 2, 3, 2
  03a00bc  lfs 3, 168(1)
  03a00c0  fadds 3, 4, 3
  03a00c4  lfs 4, 12904(3)
  03a00c8  lfs 5, 12908(4)
  03a00cc  lis 3, 132
  03a00d0  stfs 4, 188(1)
  03a00d4  stfs 1, 192(1)
  03a00d8  lfs 1, 12912(5)
  03a00dc  stfs 2, 196(1)
  03a00e0  stfs 5, 204(1)
  03a00e4  lfs 2, 12916(3)
  03a00e8  stfs 3, 200(1)
  03a00ec  bl 0xfcbe8
  03a00f0  nop
  03a00f4  lis 30, 114
  03a00f8  lfs 2, -3056(30)
  03a00fc  fmuls 1, 1, 2
  03a0100  bl 0x502758
  03a0104  nop
  03a0108  lis 4, 132
  03a010c  lis 5, 132
  03a0110  ori 29, 3, 0
  03a0114  lfs 1, 12920(4)
  03a0118  lfs 2, 12924(5)
  03a011c  bl 0xfcbe8
  03a0120  nop
  03a0124  lfs 2, -3056(30)
  03a0128  fmuls 1, 1, 2
  03a012c  bl 0x502758
  03a0130  nop
  03a0134  lis 4, 132
  03a0138  lis 5, 132
  03a013c  ori 28, 3, 0
  03a0140  lfs 1, 12928(4)
  03a0144  lfs 2, 12932(5)
  03a0148  bl 0xfcbe8
  03a014c  nop
  03a0150  lfs 2, -3056(30)
  03a0154  fmuls 1, 1, 2
  03a0158  bl 0x502758
  03a015c  nop
  03a0160  lis 5, 132
  03a0164  lis 6, 132
  03a0168  lis 7, 132
  03a016c  ori 10, 3, 0
  03a0170  ori 8, 29, 0
  03a0174  lwz 11, 12896(5)
  03a0178  addic 3, 31, 16
  03a017c  lwz 12, 12948(6)
  03a0180  addic 4, 1, 176
  03a0184  extsw 6, 11
  03a0188  lwz 7, 12900(7)
  03a018c  extsw 11, 12
  03a0190  addic 5, 1, 192
  03a0194  ori 9, 28, 0
  03a0198  extsw 7, 7
  03a019c  std 11, 112(1)
  03a01a0  bl 0x1206e8
  03a01a4  nop
  03a01a8  ld 0, 336(1)
  03a01ac  mtlr 0
  03a01b0  lfd 31, 312(1)
  03a01b4  ld 28, 280(1)
  03a01b8  ld 29, 288(1)
  03a01bc  ld 30, 296(1)
  03a01c0  ld 31, 304(1)
  03a01c4  addi 1, 1, 320
  03a01c8  blr
