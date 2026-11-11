# game/update/moby99.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_99:   # 0x4cdcd0, 0xe78 bytes
  04cdcd0  stdu 1, -576(1)
  04cdcd4  mflr 0
  04cdcd8  std 0, 592(1)
  04cdcdc  stfd 27, 536(1)
  04cdce0  stfd 28, 544(1)
  04cdce4  stfd 29, 552(1)
  04cdce8  stfd 30, 560(1)
  04cdcec  stfd 31, 568(1)
  04cdcf0  std 31, 528(1)
  04cdcf4  ori 31, 3, 0
  04cdcf8  lbz 3, 32(31)
  04cdcfc  cmpwi 3, 3
  04cdd00  cmpwi 1, 3, 2
  04cdd04  cmpwi 6, 3, 1
  04cdd08  std 30, 520(1)
  04cdd0c  std 29, 512(1)
  04cdd10  std 28, 504(1)
  04cdd14  std 27, 496(1)
  04cdd18  std 26, 488(1)
  04cdd1c  std 25, 480(1)
  04cdd20  std 24, 472(1)
  04cdd24  cmpwi 7, 3, -1
  04cdd28  bt 2, 0x4ceb04
  04cdd2c  li 28, 0
  04cdd30  lwz 30, 120(31)
  04cdd34  cmpwi 3, 0
  04cdd38  ori 27, 28, 0
  04cdd3c  bt 1, 0x4cdd48
  04cdd40  bf 29, 0x4ce240
  04cdd44  b 0x4cdd54
  04cdd48  bf 25, 0x4cdfbc
  04cdd4c  bf 5, 0x4cdff0
  04cdd50  b 0x4ce240
  04cdd54  lbz 3, 34(31)
  04cdd58  li 4, 0
  04cdd5c  bl 0xeff60
  04cdd60  nop
  04cdd64  stfs 1, 88(30)
  04cdd68  li 4, 0
  04cdd6c  lbz 3, 34(31)
  04cdd70  bl 0xefff8
  04cdd74  nop
  04cdd78  lfs 2, 88(30)
  04cdd7c  lis 3, 77
  04cdd80  fsubs 1, 1, 2
  04cdd84  addi 3, 3, -9104
  04cdd88  lfs 2, 0(3)
  04cdd8c  lwz 3, 68(30)
  04cdd90  cmpwi 3, -1
  04cdd94  fmuls 1, 1, 2
  04cdd98  stfs 1, 92(30)
  04cdd9c  bt 2, 0x4cde20
  04cdda0  lfs 1, 16(31)
  04cdda4  lis 4, 165
  04cdda8  stfs 1, 0(30)
  04cddac  lfs 2, 20(31)
  04cddb0  slwi 3, 3, 7
  04cddb4  stfs 2, 4(30)
  04cddb8  lfs 3, 24(31)
  04cddbc  stfs 3, 8(30)
  04cddc0  lfs 4, 28(31)
  04cddc4  stfs 4, 12(30)
  04cddc8  lwz 4, 7128(4)
  04cddcc  addc 3, 4, 3
  04cddd0  clrldi 3, 3, 32
  04cddd4  lfs 4, 52(3)
  04cddd8  lfs 5, 48(3)
  04cdddc  fsubs 2, 2, 4
  04cdde0  fsubs 1, 1, 5
  04cdde4  lfs 4, 56(3)
  04cdde8  fsubs 3, 3, 4
  04cddec  lis 3, 114
  04cddf0  fmuls 2, 2, 2
  04cddf4  fmadds 1, 1, 1, 2
  04cddf8  lfs 2, 72(30)
  04cddfc  fmadds 1, 3, 3, 1
  04cde00  lfs 3, -3052(3)
  04cde04  fmuls 2, 2, 3
  04cde08  li 3, 2
  04cde0c  fsqrts 1, 1
  04cde10  fdivs 1, 2, 1
  04cde14  stfs 1, 84(30)
  04cde18  stb 3, 32(31)
  04cde1c  b 0x4cdeb4
  04cde20  lwz 3, 104(30)
  04cde24  cmpwi 3, -1
  04cde28  bt 2, 0x4cdeac
  04cde2c  lfs 1, 16(31)
  04cde30  lis 4, 164
  04cde34  slwi 3, 3, 8
  04cde38  stfs 1, 0(30)
  04cde3c  lfs 2, 20(31)
  04cde40  stfs 2, 4(30)
  04cde44  lfs 3, 24(31)
  04cde48  stfs 3, 8(30)
  04cde4c  lfs 4, 28(31)
  04cde50  stfs 4, 12(30)
  04cde54  lwz 4, -28512(4)
  04cde58  addc 3, 4, 3
  04cde5c  clrldi 3, 3, 32
  04cde60  lfs 4, 20(3)
  04cde64  lfs 5, 16(3)
  04cde68  fsubs 2, 2, 4
  04cde6c  fsubs 1, 1, 5
  04cde70  lfs 4, 24(3)
  04cde74  fsubs 3, 3, 4
  04cde78  lis 3, 114
  04cde7c  fmuls 2, 2, 2
  04cde80  fmadds 1, 1, 1, 2
  04cde84  lfs 2, 72(30)
  04cde88  fmadds 1, 3, 3, 1
  04cde8c  lfs 3, -3052(3)
  04cde90  fmuls 2, 2, 3
  04cde94  li 3, 2
  04cde98  fsqrts 1, 1
  04cde9c  fdivs 1, 2, 1
  04cdea0  stfs 1, 84(30)
  04cdea4  stb 3, 32(31)
  04cdea8  b 0x4cdeb4
  04cdeac  li 3, 1
  04cdeb0  stb 3, 32(31)
  04cdeb4  lis 3, 15820
  04cdeb8  stw 28, 96(30)
  04cdebc  lis 4, 77
  04cdec0  ori 3, 3, 52429
  04cdec4  addi 4, 4, -9104
  04cdec8  addic 29, 31, 16
  04cdecc  addic 5, 1, 160
  04cded0  stw 3, 76(30)
  04cded4  addic 3, 1, 176
  04cded8  lfs 1, 4(4)
  04cdedc  lfs 2, 192(31)
  04cdee0  ori 4, 29, 0
  04cdee4  lfs 3, 196(31)
  04cdee8  lfs 4, 200(31)
  04cdeec  fmuls 2, 2, 1
  04cdef0  lfs 5, 204(31)
  04cdef4  fmuls 3, 3, 1
  04cdef8  fmuls 4, 4, 1
  04cdefc  fmuls 1, 5, 1
  04cdf00  stfs 2, 160(1)
  04cdf04  stfs 3, 164(1)
  04cdf08  stfs 4, 168(1)
  04cdf0c  stfs 1, 172(1)
  04cdf10  bl 0x5023f0
  04cdf14  nop
  04cdf18  lfs 1, 176(1)
  04cdf1c  lfs 2, 180(1)
  04cdf20  ori 3, 29, 0
  04cdf24  stfs 1, 144(1)
  04cdf28  addic 4, 1, 144
  04cdf2c  lfs 1, 184(1)
  04cdf30  li 5, 2
  04cdf34  stfs 2, 148(1)
  04cdf38  li 6, 0
  04cdf3c  lfs 2, 188(1)
  04cdf40  li 7, 0
  04cdf44  stfs 1, 152(1)
  04cdf48  stfs 2, 156(1)
  04cdf4c  bl 0x57820
  04cdf50  nop
  04cdf54  cmpwi 3, 0
  04cdf58  bt 2, 0x4cdf84
  04cdf5c  lis 3, 161
  04cdf60  addic 3, 3, 2368
  04cdf64  lfs 1, 32(3)
  04cdf68  lfs 2, 36(3)
  04cdf6c  stfs 1, 144(1)
  04cdf70  lfs 1, 40(3)
  04cdf74  stfs 2, 148(1)
  04cdf78  lfs 2, 44(3)
  04cdf7c  stfs 1, 152(1)
  04cdf80  stfs 2, 156(1)
  04cdf84  addic 3, 1, 192
  04cdf88  addic 4, 1, 144
  04cdf8c  ori 5, 29, 0
  04cdf90  bl 0x502a64
  04cdf94  nop
  04cdf98  lfs 1, 192(1)
  04cdf9c  stfs 1, 48(30)
  04cdfa0  lfs 1, 196(1)
  04cdfa4  stfs 1, 52(30)
  04cdfa8  lfs 1, 200(1)
  04cdfac  stfs 1, 56(30)
  04cdfb0  lfs 1, 204(1)
  04cdfb4  stfs 1, 60(30)
  04cdfb8  b 0x4ce240
  04cdfbc  lwz 3, 64(30)
  04cdfc0  cmpwi 3, -1
  04cdfc4  bt 2, 0x4cdfe8
  04cdfc8  lis 5, 151
  04cdfcc  extsw 4, 3
  04cdfd0  addic 3, 5, -25376
  04cdfd4  addic 3, 3, 128
  04cdfd8  bl 0x110b70
  04cdfdc  nop
  04cdfe0  cmpwi 3, 0
  04cdfe4  bt 2, 0x4ce240
  04cdfe8  li 28, 1
  04cdfec  b 0x4ce240
  04cdff0  lfs 1, 80(30)
  04cdff4  lfs 2, 84(30)
  04cdff8  lis 3, 77
  04cdffc  fadds 1, 1, 2
  04ce000  addi 3, 3, -9104
  04ce004  fneg 2, 2
  04ce008  stfs 1, 80(30)
  04ce00c  lfs 3, 8(3)
  04ce010  fcmpu 0, 1, 3
  04ce014  cror 6, 0, 2
  04ce018  bt 6, 0x4ce030
  04ce01c  lis 3, 16256
  04ce020  fmr 1, 3
  04ce024  stw 3, 80(30)
  04ce028  stfs 2, 84(30)
  04ce02c  b 0x4ce054
  04ce030  lis 3, 77
  04ce034  addi 3, 3, -9104
  04ce038  lfs 3, 12(3)
  04ce03c  fcmpu 0, 1, 3
  04ce040  cror 6, 1, 2
  04ce044  bt 6, 0x4ce054
  04ce048  stw 28, 80(30)
  04ce04c  fmr 1, 3
  04ce050  stfs 2, 84(30)
  04ce054  lwz 3, 104(30)
  04ce058  cmpwi 3, -1
  04ce05c  bt 2, 0x4ce0b8
  04ce060  lis 4, 164
  04ce064  slwi 3, 3, 8
  04ce068  lwz 4, -28512(4)
  04ce06c  lfs 2, 0(30)
  04ce070  addc 3, 4, 3
  04ce074  clrldi 3, 3, 32
  04ce078  lwz 3, 120(3)
  04ce07c  lfs 3, 4(30)
  04ce080  lfs 4, 0(3)
  04ce084  lfs 5, 4(3)
  04ce088  fsubs 4, 4, 2
  04ce08c  fsubs 3, 5, 3
  04ce090  fmadds 8, 1, 4, 2
  04ce094  lfs 4, 8(3)
  04ce098  lfs 5, 8(30)
  04ce09c  lfs 2, 12(3)
  04ce0a0  stfs 8, 16(31)
  04ce0a4  lfs 6, 4(30)
  04ce0a8  fmadds 3, 1, 3, 6
  04ce0ac  stfs 3, 20(31)
  04ce0b0  lfs 3, 8(30)
  04ce0b4  b 0x4ce10c
  04ce0b8  lis 3, 165
  04ce0bc  lwz 4, 68(30)
  04ce0c0  slwi 4, 4, 7
  04ce0c4  lwz 3, 7128(3)
  04ce0c8  lfs 2, 0(30)
  04ce0cc  addc 3, 3, 4
  04ce0d0  lfs 3, 4(30)
  04ce0d4  clrldi 3, 3, 32
  04ce0d8  lfs 4, 48(3)
  04ce0dc  lfs 5, 52(3)
  04ce0e0  fsubs 4, 4, 2
  04ce0e4  fsubs 3, 5, 3
  04ce0e8  fmadds 8, 1, 4, 2
  04ce0ec  lfs 4, 56(3)
  04ce0f0  lfs 5, 8(30)
  04ce0f4  lfs 2, 60(3)
  04ce0f8  stfs 8, 16(31)
  04ce0fc  lfs 6, 4(30)
  04ce100  fmadds 3, 1, 3, 6
  04ce104  stfs 3, 20(31)
  04ce108  lfs 3, 8(30)
  04ce10c  fsubs 4, 4, 5
  04ce110  stfs 2, 28(31)
  04ce114  fmadds 1, 1, 4, 3
  04ce118  stfs 1, 24(31)
  04ce11c  lwz 3, 64(30)
  04ce120  cmpwi 3, -1
  04ce124  bt 2, 0x4ce148
  04ce128  lis 5, 151
  04ce12c  extsw 4, 3
  04ce130  addic 3, 5, -25376
  04ce134  addic 3, 3, 128
  04ce138  bl 0x110b70
  04ce13c  nop
  04ce140  cmpwi 3, 0
  04ce144  bt 2, 0x4ce240
  04ce148  lis 3, 77
  04ce14c  lfs 1, 192(31)
  04ce150  addic 28, 31, 16
  04ce154  addi 3, 3, -9104
  04ce158  addic 5, 1, 224
  04ce15c  ori 4, 28, 0
  04ce160  lfs 2, 4(3)
  04ce164  lfs 3, 196(31)
  04ce168  addic 3, 1, 240
  04ce16c  lfs 4, 200(31)
  04ce170  fmuls 1, 1, 2
  04ce174  lfs 5, 204(31)
  04ce178  fmuls 3, 3, 2
  04ce17c  fmuls 4, 4, 2
  04ce180  fmuls 2, 5, 2
  04ce184  stfs 1, 224(1)
  04ce188  stfs 3, 228(1)
  04ce18c  stfs 4, 232(1)
  04ce190  stfs 2, 236(1)
  04ce194  bl 0x5023f0
  04ce198  nop
  04ce19c  lfs 1, 240(1)
  04ce1a0  ori 3, 28, 0
  04ce1a4  lfs 2, 244(1)
  04ce1a8  li 5, 2
  04ce1ac  stfs 1, 208(1)
  04ce1b0  addic 4, 1, 208
  04ce1b4  lfs 1, 248(1)
  04ce1b8  li 6, 0
  04ce1bc  stfs 2, 212(1)
  04ce1c0  li 7, 0
  04ce1c4  lfs 2, 252(1)
  04ce1c8  stfs 1, 216(1)
  04ce1cc  stfs 2, 220(1)
  04ce1d0  bl 0x57820
  04ce1d4  nop
  04ce1d8  cmpwi 3, 0
  04ce1dc  bt 2, 0x4ce208
  04ce1e0  lis 3, 161
  04ce1e4  addic 3, 3, 2368
  04ce1e8  lfs 1, 32(3)
  04ce1ec  lfs 2, 36(3)
  04ce1f0  stfs 1, 208(1)
  04ce1f4  lfs 1, 40(3)
  04ce1f8  stfs 2, 212(1)
  04ce1fc  lfs 2, 44(3)
  04ce200  stfs 1, 216(1)
  04ce204  stfs 2, 220(1)
  04ce208  addic 3, 1, 256
  04ce20c  addic 4, 1, 208
  04ce210  ori 5, 28, 0
  04ce214  bl 0x502a64
  04ce218  nop
  04ce21c  lfs 1, 256(1)
  04ce220  li 28, 1
  04ce224  stfs 1, 48(30)
  04ce228  lfs 1, 260(1)
  04ce22c  stfs 1, 52(30)
  04ce230  lfs 1, 264(1)
  04ce234  stfs 1, 56(30)
  04ce238  lfs 1, 268(1)
  04ce23c  stfs 1, 60(30)
  04ce240  lis 3, 77
  04ce244  lfs 1, 192(31)
  04ce248  addic 29, 31, 16
  04ce24c  addi 3, 3, -9104
  04ce250  addic 5, 30, 48
  04ce254  ori 4, 29, 0
  04ce258  lfs 2, 16(3)
  04ce25c  lfs 3, 196(31)
  04ce260  lfs 4, 200(31)
  04ce264  fmuls 1, 1, 2
  04ce268  lfs 5, 204(31)
  04ce26c  fmuls 3, 3, 2
  04ce270  lfs 31, 12(3)
  04ce274  fmuls 4, 4, 2
  04ce278  addic 3, 1, 272
  04ce27c  fmuls 2, 5, 2
  04ce280  stfs 1, 128(1)
  04ce284  stfs 3, 132(1)
  04ce288  stfs 4, 136(1)
  04ce28c  stfs 2, 140(1)
  04ce290  bl 0x5023f0
  04ce294  nop
  04ce298  lfs 1, 272(1)
  04ce29c  lfs 2, 276(1)
  04ce2a0  stfs 1, 112(1)
  04ce2a4  lfs 3, 280(1)
  04ce2a8  stfs 2, 116(1)
  04ce2ac  lfs 2, 284(1)
  04ce2b0  stfs 3, 120(1)
  04ce2b4  stfs 2, 124(1)
  04ce2b8  lwz 3, 96(30)
  04ce2bc  cmpwi 3, 0
  04ce2c0  bt 2, 0x4ce44c
  04ce2c4  lfs 1, 132(1)
  04ce2c8  lfs 4, 128(1)
  04ce2cc  fmuls 1, 1, 1
  04ce2d0  lfs 2, 136(1)
  04ce2d4  lis 4, 77
  04ce2d8  lis 5, 143
  04ce2dc  addi 4, 4, -9104
  04ce2e0  fmadds 1, 4, 4, 1
  04ce2e4  fmadds 2, 2, 2, 1
  04ce2e8  lfs 1, 20(4)
  04ce2ec  lfs 3, 21420(5)
  04ce2f0  fsubs 1, 1, 3
  04ce2f4  fsqrts 2, 2
  04ce2f8  fcmpu 0, 2, 31
  04ce2fc  bf 2, 0x4ce328
  04ce300  stfs 4, 32(30)
  04ce304  lfs 1, 132(1)
  04ce308  stfs 1, 36(30)
  04ce30c  lfs 1, 136(1)
  04ce310  stfs 1, 40(30)
  04ce314  lfs 4, 140(1)
  04ce318  stw 27, 40(30)
  04ce31c  stw 27, 36(30)
  04ce320  stw 27, 32(30)
  04ce324  b 0x4ce350
  04ce328  fdivs 1, 1, 2
  04ce32c  fmuls 2, 4, 1
  04ce330  stfs 2, 32(30)
  04ce334  lfs 2, 132(1)
  04ce338  fmuls 2, 2, 1
  04ce33c  stfs 2, 36(30)
  04ce340  lfs 2, 136(1)
  04ce344  fmuls 1, 2, 1
  04ce348  stfs 1, 40(30)
  04ce34c  lfs 4, 140(1)
  04ce350  stfs 4, 44(30)
  04ce354  lfs 1, 132(1)
  04ce358  lfs 2, 128(1)
  04ce35c  fmuls 1, 1, 1
  04ce360  lfs 4, 136(1)
  04ce364  fneg 3, 3
  04ce368  fmadds 1, 2, 2, 1
  04ce36c  fmadds 1, 4, 4, 1
  04ce370  fsqrts 1, 1
  04ce374  fcmpu 0, 1, 31
  04ce378  bf 2, 0x4ce3a4
  04ce37c  stfs 2, 16(3)
  04ce380  lfs 1, 132(1)
  04ce384  stfs 1, 20(3)
  04ce388  lfs 1, 136(1)
  04ce38c  stfs 1, 24(3)
  04ce390  lfs 2, 140(1)
  04ce394  stw 27, 24(3)
  04ce398  stw 27, 20(3)
  04ce39c  stw 27, 16(3)
  04ce3a0  b 0x4ce3cc
  04ce3a4  fdivs 1, 3, 1
  04ce3a8  fmuls 2, 2, 1
  04ce3ac  stfs 2, 16(3)
  04ce3b0  lfs 2, 132(1)
  04ce3b4  fmuls 2, 2, 1
  04ce3b8  stfs 2, 20(3)
  04ce3bc  lfs 2, 136(1)
  04ce3c0  fmuls 1, 2, 1
  04ce3c4  stfs 1, 24(3)
  04ce3c8  lfs 2, 140(1)
  04ce3cc  ori 6, 3, 0
  04ce3d0  addic 26, 1, 112
  04ce3d4  addic 3, 1, 288
  04ce3d8  addic 4, 30, 32
  04ce3dc  ori 5, 26, 0
  04ce3e0  stfs 2, 28(6)
  04ce3e4  bl 0x5023f0
  04ce3e8  nop
  04ce3ec  lfs 1, 288(1)
  04ce3f0  addic 3, 1, 304
  04ce3f4  ori 5, 26, 0
  04ce3f8  stfs 1, 32(30)
  04ce3fc  lfs 1, 292(1)
  04ce400  stfs 1, 36(30)
  04ce404  lfs 1, 296(1)
  04ce408  lwz 4, 96(30)
  04ce40c  stfs 1, 40(30)
  04ce410  lfs 1, 300(1)
  04ce414  addic 4, 4, 16
  04ce418  stfs 1, 44(30)
  04ce41c  bl 0x5023f0
  04ce420  nop
  04ce424  lwz 3, 96(30)
  04ce428  lfs 1, 304(1)
  04ce42c  stfs 1, 16(3)
  04ce430  lfs 1, 308(1)
  04ce434  stfs 1, 20(3)
  04ce438  lfs 1, 312(1)
  04ce43c  stfs 1, 24(3)
  04ce440  lfs 1, 316(1)
  04ce444  stfs 1, 28(3)
  04ce448  b 0x4ce468
  04ce44c  stfs 1, 32(30)
  04ce450  lfs 1, 116(1)
  04ce454  stfs 1, 36(30)
  04ce458  lfs 1, 120(1)
  04ce45c  stfs 1, 40(30)
  04ce460  lfs 1, 124(1)
  04ce464  stfs 1, 44(30)
  04ce468  cmpwi 28, 0
  04ce46c  bt 2, 0x4ceb04
  04ce470  ori 3, 31, 0
  04ce474  bl 0xefe40
  04ce478  nop
  04ce47c  lfs 2, 88(30)
  04ce480  lis 3, 77
  04ce484  lfs 3, 92(30)
  04ce488  fsubs 2, 1, 2
  04ce48c  addi 28, 3, -9104
  04ce490  lfs 1, 24(28)
  04ce494  fdivs 2, 2, 3
  04ce498  bl 0x502578
  04ce49c  nop
  04ce4a0  lfs 2, 28(28)
  04ce4a4  lfs 3, 32(28)
  04ce4a8  fadds 1, 1, 2
  04ce4ac  lfs 4, 36(28)
  04ce4b0  fsubs 2, 3, 1
  04ce4b4  fsubs 3, 4, 1
  04ce4b8  lfs 4, 40(28)
  04ce4bc  fsub 5, 1, 2
  04ce4c0  fsel 1, 5, 2, 1
  04ce4c4  lfs 2, 44(28)
  04ce4c8  fsub 5, 3, 1
  04ce4cc  fsel 1, 5, 3, 1
  04ce4d0  lfs 3, 48(28)
  04ce4d4  lfs 5, 52(28)
  04ce4d8  lfs 7, 56(28)
  04ce4dc  lfs 9, 60(28)
  04ce4e0  fmuls 6, 1, 1
  04ce4e4  fmuls 8, 6, 1
  04ce4e8  fmuls 10, 6, 8
  04ce4ec  fmadds 1, 8, 4, 1
  04ce4f0  fmuls 4, 6, 10
  04ce4f4  fmadds 1, 10, 2, 1
  04ce4f8  fmuls 2, 6, 4
  04ce4fc  fmadds 1, 4, 3, 1
  04ce500  fmadds 1, 2, 5, 1
  04ce504  fmadds 1, 1, 7, 9
  04ce508  stfs 1, 76(30)
  04ce50c  lfs 2, 132(1)
  04ce510  lfs 1, 128(1)
  04ce514  fmuls 2, 2, 2
  04ce518  lfs 3, 136(1)
  04ce51c  fmadds 2, 1, 1, 2
  04ce520  fmadds 30, 3, 3, 2
  04ce524  fsqrts 30, 30
  04ce528  fcmpu 0, 30, 31
  04ce52c  bf 2, 0x4ce558
  04ce530  stfs 1, 16(30)
  04ce534  lfs 1, 132(1)
  04ce538  stfs 1, 20(30)
  04ce53c  lfs 1, 136(1)
  04ce540  stfs 1, 24(30)
  04ce544  lfs 30, 140(1)
  04ce548  stw 27, 24(30)
  04ce54c  stw 27, 20(30)
  04ce550  stw 27, 16(30)
  04ce554  b 0x4ce58c
  04ce558  lis 3, 77
  04ce55c  addi 3, 3, -9104
  04ce560  lfs 2, 20(3)
  04ce564  fdivs 2, 2, 30
  04ce568  fmuls 1, 1, 2
  04ce56c  stfs 1, 16(30)
  04ce570  lfs 1, 132(1)
  04ce574  fmuls 1, 1, 2
  04ce578  stfs 1, 20(30)
  04ce57c  lfs 1, 136(1)
  04ce580  fmuls 1, 1, 2
  04ce584  stfs 1, 24(30)
  04ce588  lfs 30, 140(1)
  04ce58c  stfs 30, 28(30)
  04ce590  addic 3, 1, 352
  04ce594  addic 5, 30, 16
  04ce598  ori 4, 29, 0
  04ce59c  bl 0x502a64
  04ce5a0  nop
  04ce5a4  lfs 1, 52(30)
  04ce5a8  lfs 2, 48(30)
  04ce5ac  fmuls 1, 1, 1
  04ce5b0  lfs 3, 56(30)
  04ce5b4  lfs 4, 352(1)
  04ce5b8  lis 3, 77
  04ce5bc  stfs 4, 16(30)
  04ce5c0  addi 4, 3, -9104
  04ce5c4  lfs 5, 356(1)
  04ce5c8  stfs 5, 20(30)
  04ce5cc  fmadds 1, 2, 2, 1
  04ce5d0  lfs 2, 360(1)
  04ce5d4  stfs 2, 24(30)
  04ce5d8  lfs 6, 364(1)
  04ce5dc  stfs 6, 28(30)
  04ce5e0  addic 3, 1, 320
  04ce5e4  fmadds 1, 3, 3, 1
  04ce5e8  lfs 3, 32(30)
  04ce5ec  lfs 30, 64(4)
  04ce5f0  fsubs 3, 3, 4
  04ce5f4  lfs 6, 36(30)
  04ce5f8  lfs 7, 40(30)
  04ce5fc  fsubs 2, 7, 2
  04ce600  fsqrts 1, 1
  04ce604  fmadds 3, 3, 30, 4
  04ce608  fsubs 4, 6, 5
  04ce60c  stfs 3, 320(1)
  04ce610  lfs 3, 20(30)
  04ce614  fmadds 3, 4, 30, 3
  04ce618  stfs 3, 324(1)
  04ce61c  lfs 3, 24(30)
  04ce620  fmadds 2, 2, 30, 3
  04ce624  fmuls 1, 1, 30
  04ce628  stfs 2, 328(1)
  04ce62c  stfs 1, 332(1)
  04ce630  lfs 1, 68(4)
  04ce634  bl 0x502910
  04ce638  nop
  04ce63c  cmpwi 3, -1
  04ce640  bt 2, 0x4ceaf0
  04ce644  lfs 1, 196(31)
  04ce648  lfs 2, 192(31)
  04ce64c  fmuls 3, 1, 1
  04ce650  lfs 4, 200(31)
  04ce654  lis 3, 151
  04ce658  lfs 5, 20(31)
  04ce65c  lfs 6, 16(31)
  04ce660  addic 3, 3, -25376
  04ce664  lfs 7, 132(3)
  04ce668  fmadds 3, 2, 2, 3
  04ce66c  fsubs 5, 7, 5
  04ce670  lfs 8, 128(3)
  04ce674  lfs 7, 136(3)
  04ce678  fsubs 6, 8, 6
  04ce67c  lfs 9, 24(31)
  04ce680  fsubs 7, 7, 9
  04ce684  fmadds 3, 4, 4, 3
  04ce688  fmuls 8, 1, 5
  04ce68c  lis 5, 1
  04ce690  addic 26, 1, 416
  04ce694  stfs 6, 336(1)
  04ce698  fsqrts 3, 3
  04ce69c  stfs 5, 340(1)
  04ce6a0  lfs 10, 140(3)
  04ce6a4  stfs 10, 348(1)
  04ce6a8  lis 3, 77
  04ce6ac  stfs 7, 344(1)
  04ce6b0  addic 7, 1, 336
  04ce6b4  addi 24, 3, -9104
  04ce6b8  ori 4, 31, 0
  04ce6bc  ori 3, 26, 0
  04ce6c0  ori 5, 5, 1
  04ce6c4  fmadds 8, 2, 6, 8
  04ce6c8  fmadds 8, 4, 7, 8
  04ce6cc  fdivs 8, 8, 3
  04ce6d0  fsub 9, 31, 3
  04ce6d4  fsub 10, 31, 3
  04ce6d8  fsub 11, 31, 3
  04ce6dc  fsub 12, 3, 31
  04ce6e0  fsub 13, 3, 31
  04ce6e4  fsub 3, 3, 31
  04ce6e8  fmuls 4, 4, 8
  04ce6ec  fmuls 1, 1, 8
  04ce6f0  fmuls 2, 2, 8
  04ce6f4  fsel 8, 9, 31, 4
  04ce6f8  fsel 9, 10, 31, 1
  04ce6fc  fsel 10, 11, 31, 2
  04ce700  fsel 4, 12, 8, 4
  04ce704  fsel 1, 13, 9, 1
  04ce708  fsel 2, 3, 10, 2
  04ce70c  fsubs 3, 7, 4
  04ce710  fsubs 1, 5, 1
  04ce714  fsubs 2, 6, 2
  04ce718  stfs 3, 344(1)
  04ce71c  stfs 1, 340(1)
  04ce720  stfs 2, 336(1)
  04ce724  lfs 1, 8(24)
  04ce728  bl 0x10581c
  04ce72c  nop
  04ce730  addic 28, 30, 32
  04ce734  ori 3, 29, 0
  04ce738  ori 4, 28, 0
  04ce73c  li 5, 9
  04ce740  ori 6, 31, 0
  04ce744  ori 7, 26, 0
  04ce748  bl 0x57820
  04ce74c  nop
  04ce750  lfs 1, 52(30)
  04ce754  lfs 2, 48(30)
  04ce758  fmuls 1, 1, 1
  04ce75c  lfs 3, 56(30)
  04ce760  ori 29, 27, 0
  04ce764  lis 26, 114
  04ce768  addic 25, 1, 128
  04ce76c  fmadds 1, 2, 2, 1
  04ce770  lfs 2, 16(30)
  04ce774  stfs 2, 368(1)
  04ce778  lfs 2, 20(30)
  04ce77c  stfs 2, 372(1)
  04ce780  fmadds 1, 3, 3, 1
  04ce784  fsqrts 27, 1
  04ce788  lfs 1, 24(30)
  04ce78c  stfs 1, 376(1)
  04ce790  lfs 1, 28(30)
  04ce794  stfs 1, 380(1)
  04ce798  lfs 1, 80(24)
  04ce79c  lfs 29, 72(24)
  04ce7a0  lfs 28, 76(24)
  04ce7a4  fmuls 27, 1, 27
  04ce7a8  fmr 1, 31
  04ce7ac  fmr 2, 29
  04ce7b0  bl 0xfcbe8
  04ce7b4  nop
  04ce7b8  lfs 2, 48(30)
  04ce7bc  fmuls 2, 2, 1
  04ce7c0  addic 3, 1, 384
  04ce7c4  addic 4, 1, 112
  04ce7c8  addic 5, 1, 368
  04ce7cc  stfs 2, 112(1)
  04ce7d0  lfs 2, 52(30)
  04ce7d4  fmuls 2, 2, 1
  04ce7d8  stfs 2, 116(1)
  04ce7dc  lfs 2, 56(30)
  04ce7e0  fmuls 1, 2, 1
  04ce7e4  stfs 1, 120(1)
  04ce7e8  lfs 1, 60(30)
  04ce7ec  stfs 1, 124(1)
  04ce7f0  bl 0x502b08
  04ce7f4  nop
  04ce7f8  lfs 1, -3052(26)
  04ce7fc  fmr 2, 27
  04ce800  fmuls 1, 1, 28
  04ce804  bl 0xfcbe8
  04ce808  nop
  04ce80c  lfs 2, 52(30)
  04ce810  lfs 3, 48(30)
  04ce814  fmuls 2, 2, 2
  04ce818  lfs 4, 56(30)
  04ce81c  fmadds 2, 3, 3, 2
  04ce820  fmadds 2, 4, 4, 2
  04ce824  fsqrts 2, 2
  04ce828  fcmpu 0, 2, 31
  04ce82c  bf 2, 0x4ce858
  04ce830  stfs 3, 128(1)
  04ce834  lfs 1, 52(30)
  04ce838  stfs 1, 132(1)
  04ce83c  lfs 1, 56(30)
  04ce840  stfs 1, 136(1)
  04ce844  lfs 3, 60(30)
  04ce848  stw 27, 136(1)
  04ce84c  stw 27, 132(1)
  04ce850  stw 27, 128(1)
  04ce854  b 0x4ce880
  04ce858  fdivs 1, 1, 2
  04ce85c  fmuls 2, 3, 1
  04ce860  stfs 2, 128(1)
  04ce864  lfs 2, 52(30)
  04ce868  fmuls 2, 2, 1
  04ce86c  stfs 2, 132(1)
  04ce870  lfs 2, 56(30)
  04ce874  fmuls 1, 2, 1
  04ce878  stfs 1, 136(1)
  04ce87c  lfs 3, 60(30)
  04ce880  addic 4, 1, 112
  04ce884  ori 3, 31, 0
  04ce888  stfs 3, 140(1)
  04ce88c  ori 5, 25, 0
  04ce890  bl 0x135c58
  04ce894  nop
  04ce898  addic 29, 29, 1
  04ce89c  cmpwi 29, 7
  04ce8a0  bt 0, 0x4ce7a8
  04ce8a4  lfs 1, 32(30)
  04ce8a8  cmpwi 29, 15
  04ce8ac  stfs 1, 368(1)
  04ce8b0  lfs 1, 36(30)
  04ce8b4  stfs 1, 372(1)
  04ce8b8  lfs 1, 40(30)
  04ce8bc  stfs 1, 376(1)
  04ce8c0  lfs 1, 44(30)
  04ce8c4  stfs 1, 380(1)
  04ce8c8  bf 0, 0x4ce9ec
  04ce8cc  fneg 27, 27
  04ce8d0  fmr 1, 31
  04ce8d4  fmr 2, 29
  04ce8d8  bl 0xfcbe8
  04ce8dc  nop
  04ce8e0  lfs 2, 48(30)
  04ce8e4  fmuls 2, 2, 1
  04ce8e8  addic 5, 1, 112
  04ce8ec  addic 4, 1, 368
  04ce8f0  addic 3, 1, 400
  04ce8f4  stfs 2, 112(1)
  04ce8f8  lfs 2, 52(30)
  04ce8fc  fmuls 2, 2, 1
  04ce900  stfs 2, 116(1)
  04ce904  lfs 2, 56(30)
  04ce908  fmuls 1, 2, 1
  04ce90c  stfs 1, 120(1)
  04ce910  lfs 1, 60(30)
  04ce914  stfs 1, 124(1)
  04ce918  bl 0x502a64
  04ce91c  nop
  04ce920  lfs 1, 400(1)
  04ce924  lfs 3, 404(1)
  04ce928  fmr 2, 27
  04ce92c  stfs 1, 112(1)
  04ce930  lfs 1, 408(1)
  04ce934  stfs 3, 116(1)
  04ce938  lfs 3, 412(1)
  04ce93c  stfs 1, 120(1)
  04ce940  lfs 1, -3052(26)
  04ce944  stfs 3, 124(1)
  04ce948  fmuls 1, 1, 28
  04ce94c  bl 0xfcbe8
  04ce950  nop
  04ce954  lfs 2, 52(30)
  04ce958  lfs 3, 48(30)
  04ce95c  fmuls 2, 2, 2
  04ce960  lfs 4, 56(30)
  04ce964  fmadds 2, 3, 3, 2
  04ce968  fmadds 2, 4, 4, 2
  04ce96c  fsqrts 2, 2
  04ce970  fcmpu 0, 2, 31
  04ce974  bf 2, 0x4ce9a0
  04ce978  stfs 3, 128(1)
  04ce97c  lfs 1, 52(30)
  04ce980  stfs 1, 132(1)
  04ce984  lfs 1, 56(30)
  04ce988  stfs 1, 136(1)
  04ce98c  lfs 3, 60(30)
  04ce990  stw 27, 136(1)
  04ce994  stw 27, 132(1)
  04ce998  stw 27, 128(1)
  04ce99c  b 0x4ce9c8
  04ce9a0  fdivs 1, 1, 2
  04ce9a4  fmuls 2, 3, 1
  04ce9a8  stfs 2, 128(1)
  04ce9ac  lfs 2, 52(30)
  04ce9b0  fmuls 2, 2, 1
  04ce9b4  stfs 2, 132(1)
  04ce9b8  lfs 2, 56(30)
  04ce9bc  fmuls 1, 2, 1
  04ce9c0  stfs 1, 136(1)
  04ce9c4  lfs 3, 60(30)
  04ce9c8  addic 4, 1, 112
  04ce9cc  ori 3, 31, 0
  04ce9d0  stfs 3, 140(1)
  04ce9d4  ori 5, 25, 0
  04ce9d8  bl 0x135c58
  04ce9dc  nop
  04ce9e0  addic 29, 29, 1
  04ce9e4  cmpwi 29, 15
  04ce9e8  bt 0, 0x4ce8d0
  04ce9ec  lfs 2, -3052(26)
  04ce9f0  fmuls 1, 2, 30
  04ce9f4  bl 0xfcbe8
  04ce9f8  nop
  04ce9fc  lfs 3, 52(30)
  04cea00  fneg 30, 1
  04cea04  lfs 2, 48(30)
  04cea08  fmuls 3, 3, 3
  04cea0c  lfs 4, 56(30)
  04cea10  fmadds 3, 2, 2, 3
  04cea14  fmadds 3, 4, 4, 3
  04cea18  fsqrts 1, 3
  04cea1c  fcmpu 0, 1, 31
  04cea20  bf 2, 0x4cea4c
  04cea24  stfs 2, 128(1)
  04cea28  lfs 1, 52(30)
  04cea2c  stfs 1, 132(1)
  04cea30  lfs 1, 56(30)
  04cea34  stfs 1, 136(1)
  04cea38  lfs 2, 60(30)
  04cea3c  stw 27, 136(1)
  04cea40  stw 27, 132(1)
  04cea44  stw 27, 128(1)
  04cea48  b 0x4cea74
  04cea4c  fdivs 1, 30, 1
  04cea50  fmuls 2, 2, 1
  04cea54  stfs 2, 128(1)
  04cea58  lfs 2, 52(30)
  04cea5c  fmuls 2, 2, 1
  04cea60  stfs 2, 132(1)
  04cea64  lfs 2, 56(30)
  04cea68  fmuls 1, 2, 1
  04cea6c  stfs 1, 136(1)
  04cea70  lfs 2, 60(30)
  04cea74  lis 3, 77
  04cea78  stfs 2, 140(1)
  04cea7c  addi 3, 3, -9104
  04cea80  lfs 31, 84(3)
  04cea84  lfs 30, 88(3)
  04cea88  fmr 1, 31
  04cea8c  fmr 2, 30
  04cea90  bl 0xfcbe8
  04cea94  nop
  04cea98  lfs 2, 128(1)
  04cea9c  fadds 3, 2, 1
  04ceaa0  fmr 1, 31
  04ceaa4  fmr 2, 30
  04ceaa8  stfs 3, 128(1)
  04ceaac  bl 0xfcbe8
  04ceab0  nop
  04ceab4  lfs 2, 132(1)
  04ceab8  fadds 3, 2, 1
  04ceabc  fmr 1, 31
  04ceac0  fmr 2, 30
  04ceac4  stfs 3, 132(1)
  04ceac8  bl 0xfcbe8
  04ceacc  nop
  04cead0  lfs 2, 136(1)
  04cead4  li 3, 0
  04cead8  fadds 1, 2, 1
  04ceadc  ori 4, 28, 0
  04ceae0  ori 5, 25, 0
  04ceae4  stfs 1, 136(1)
  04ceae8  bl 0x135c58
  04ceaec  nop
  04ceaf0  lis 3, 113
  04ceaf4  ori 4, 31, 0
  04ceaf8  addic 3, 3, -1712
  04ceafc  bl 0x6d720
  04ceb00  nop
  04ceb04  ld 0, 592(1)
  04ceb08  mtlr 0
  04ceb0c  lfd 27, 536(1)
  04ceb10  lfd 28, 544(1)
  04ceb14  lfd 29, 552(1)
  04ceb18  lfd 30, 560(1)
  04ceb1c  lfd 31, 568(1)
  04ceb20  ld 24, 472(1)
  04ceb24  ld 25, 480(1)
  04ceb28  ld 26, 488(1)
  04ceb2c  ld 27, 496(1)
  04ceb30  ld 28, 504(1)
  04ceb34  ld 29, 512(1)
  04ceb38  ld 30, 520(1)
  04ceb3c  ld 31, 528(1)
  04ceb40  addi 1, 1, 576
  04ceb44  blr
