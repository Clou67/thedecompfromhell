# game/update/moby1024.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1302_0018cd14:   # 0x18cd14, 0x14 bytes
  018cd14  lis 3, 116
  018cd18  lis 4, 1
  018cd1c  addic 3, 3, -1588
  018cd20  stw 4, 72(3)
  018cd24  blr

M1302_0018cd58:   # 0x18cd58, 0x794 bytes
  018cd58  stdu 1, -592(1)
  018cd5c  mflr 0
  018cd60  std 0, 608(1)
  018cd64  stfd 14, 448(1)
  018cd68  stfd 15, 456(1)
  018cd6c  stfd 16, 464(1)
  018cd70  stfd 17, 472(1)
  018cd74  stfd 18, 480(1)
  018cd78  stfd 19, 488(1)
  018cd7c  stfd 20, 496(1)
  018cd80  stfd 21, 504(1)
  018cd84  stfd 22, 512(1)
  018cd88  stfd 23, 520(1)
  018cd8c  stfd 24, 528(1)
  018cd90  stfd 25, 536(1)
  018cd94  stfd 26, 544(1)
  018cd98  stfd 27, 552(1)
  018cd9c  stfd 28, 560(1)
  018cda0  stfd 29, 568(1)
  018cda4  stfd 30, 576(1)
  018cda8  stfd 31, 584(1)
  018cdac  std 31, 440(1)
  018cdb0  lis 4, 25
  018cdb4  std 29, 424(1)
  018cdb8  ori 31, 3, 0
  018cdbc  addi 29, 4, -13016
  018cdc0  lis 4, 149
  018cdc4  li 5, 0
  018cdc8  addic 6, 4, 5056
  018cdcc  addic 3, 1, 128
  018cdd0  lfs 1, 0(29)
  018cdd4  addic 4, 1, 112
  018cdd8  std 30, 432(1)
  018cddc  stw 5, 112(1)
  018cde0  lwz 30, 120(31)
  018cde4  stw 5, 116(1)
  018cde8  lfs 2, 344(6)
  018cdec  std 6, 320(1)
  018cdf0  stfs 2, 120(1)
  018cdf4  std 28, 416(1)
  018cdf8  std 27, 408(1)
  018cdfc  std 26, 400(1)
  018ce00  std 25, 392(1)
  018ce04  std 24, 384(1)
  018ce08  std 23, 376(1)
  018ce0c  std 22, 368(1)
  018ce10  std 21, 360(1)
  018ce14  std 20, 352(1)
  018ce18  stfd 1, 344(1)
  018ce1c  bl 0x500b64
  018ce20  nop
  018ce24  lfs 3, 4(29)
  018ce28  lfs 2, 28(30)
  018ce2c  fadds 1, 2, 3
  018ce30  stfd 3, 336(1)
  018ce34  stfs 1, 28(30)
  018ce38  lfs 2, 8(29)
  018ce3c  fcmpu 0, 1, 2
  018ce40  stfd 2, 328(1)
  018ce44  cror 6, 0, 2
  018ce48  bt 6, 0x18ce58
  018ce4c  lfd 2, 328(1)
  018ce50  fsubs 1, 1, 2
  018ce54  stfs 1, 28(30)
  018ce58  li 3, 0
  018ce5c  li 4, 0
  018ce60  li 5, 0
  018ce64  li 6, 0
  018ce68  li 7, 0
  018ce6c  li 8, 0
  018ce70  bl 0x502f08
  018ce74  nop
  018ce78  std 3, 288(1)
  018ce7c  li 4, 0
  018ce80  li 3, 1
  018ce84  li 5, 0
  018ce88  li 6, 0
  018ce8c  li 7, 0
  018ce90  li 8, 0
  018ce94  li 9, 0
  018ce98  bl 0x502fd4
  018ce9c  nop
  018cea0  std 3, 304(1)
  018cea4  li 4, 1
  018cea8  li 3, 0
  018ceac  li 5, 0
  018ceb0  li 6, 1
  018ceb4  li 7, 64
  018ceb8  bl 0x502ea8
  018cebc  nop
  018cec0  std 3, 312(1)
  018cec4  li 3, 24
  018cec8  bl 0x685c4
  018cecc  nop
  018ced0  lis 23, 116
  018ced4  std 3, 296(1)
  018ced8  lis 28, 116
  018cedc  lis 26, 116
  018cee0  addic 23, 23, -1220
  018cee4  lis 27, 116
  018cee8  lis 24, 161
  018ceec  addic 28, 28, -1472
  018cef0  addic 22, 23, 4
  018cef4  addic 26, 26, -1328
  018cef8  addic 21, 23, 8
  018cefc  addic 25, 1, 176
  018cf00  addic 20, 23, 12
  018cf04  addic 24, 24, 24396
  018cf08  addic 27, 27, -1256
  018cf0c  li 29, 0
  018cf10  lwz 3, 0(23)
  018cf14  lfs 1, 144(1)
  018cf18  slwi 4, 3, 4
  018cf1c  lfs 2, 128(1)
  018cf20  lfs 3, 148(1)
  018cf24  addc 4, 4, 28
  018cf28  clrldi 4, 4, 32
  018cf2c  lfs 4, 4(4)
  018cf30  lfs 5, 0(4)
  018cf34  lfs 7, 160(1)
  018cf38  lfs 9, 8(4)
  018cf3c  fmuls 6, 1, 4
  018cf40  lfs 10, 152(1)
  018cf44  fmuls 8, 3, 4
  018cf48  lfs 11, 132(1)
  018cf4c  fmuls 4, 10, 4
  018cf50  lwz 4, 0(22)
  018cf54  lfs 12, 136(1)
  018cf58  slwi 5, 4, 4
  018cf5c  lfs 13, 164(1)
  018cf60  addc 5, 5, 28
  018cf64  clrldi 5, 5, 32
  018cf68  fmadds 6, 2, 5, 6
  018cf6c  fmadds 8, 11, 5, 8
  018cf70  fmadds 4, 12, 5, 4
  018cf74  lfs 5, 168(1)
  018cf78  lfs 0, 4(5)
  018cf7c  lfs 31, 0(5)
  018cf80  fmuls 30, 1, 0
  018cf84  lfs 29, 8(5)
  018cf88  lwz 5, 0(21)
  018cf8c  lwz 7, 0(20)
  018cf90  slwi 6, 5, 4
  018cf94  lfs 28, 16(31)
  018cf98  fmadds 6, 7, 9, 6
  018cf9c  slwi 8, 7, 4
  018cfa0  fmadds 8, 13, 9, 8
  018cfa4  addc 6, 6, 28
  018cfa8  fmadds 4, 5, 9, 4
  018cfac  lfs 27, 36(30)
  018cfb0  fmuls 9, 3, 0
  018cfb4  clrldi 6, 6, 32
  018cfb8  fmuls 0, 10, 0
  018cfbc  addc 8, 8, 28
  018cfc0  fmadds 30, 2, 31, 30
  018cfc4  clrldi 8, 8, 32
  018cfc8  lfs 26, 0(6)
  018cfcc  lfs 25, 4(6)
  018cfd0  fmadds 6, 6, 27, 28
  018cfd4  lfs 24, 8(6)
  018cfd8  fmuls 22, 1, 25
  018cfdc  fmadds 9, 11, 31, 9
  018cfe0  fmadds 0, 12, 31, 0
  018cfe4  fmadds 31, 7, 29, 30
  018cfe8  lfs 30, 0(8)
  018cfec  lfs 27, 4(8)
  018cff0  lfs 23, 8(8)
  018cff4  lfs 21, 20(31)
  018cff8  lfs 20, 24(31)
  018cffc  stfs 6, 176(1)
  018d000  lfs 6, 36(30)
  018d004  fadds 4, 20, 4
  018d008  fmadds 0, 5, 29, 0
  018d00c  fmadds 6, 8, 6, 21
  018d010  fmadds 9, 13, 29, 9
  018d014  fmadds 8, 2, 26, 22
  018d018  fmuls 29, 3, 25
  018d01c  fmuls 25, 10, 25
  018d020  fmuls 1, 1, 27
  018d024  slwi 6, 3, 3
  018d028  slwi 9, 4, 3
  018d02c  extsw 6, 6
  018d030  fadds 0, 20, 0
  018d034  stfs 4, 184(1)
  018d038  stfs 6, 180(1)
  018d03c  fmadds 4, 7, 24, 8
  018d040  lfs 6, 36(30)
  018d044  fmadds 8, 11, 26, 29
  018d048  fmadds 6, 31, 6, 28
  018d04c  fmadds 31, 12, 26, 25
  018d050  fmadds 1, 2, 30, 1
  018d054  fmuls 2, 3, 27
  018d058  fmuls 3, 10, 27
  018d05c  addc 8, 6, 26
  018d060  slwi 3, 3, 2
  018d064  fmadds 8, 13, 24, 8
  018d068  fmadds 10, 5, 24, 31
  018d06c  stfs 6, 192(1)
  018d070  lfs 6, 36(30)
  018d074  fmadds 1, 7, 23, 1
  018d078  stfs 0, 200(1)
  018d07c  fmadds 6, 9, 6, 21
  018d080  fmadds 3, 12, 30, 3
  018d084  fmadds 2, 11, 30, 2
  018d088  slwi 4, 4, 2
  018d08c  fadds 7, 20, 10
  018d090  extsw 3, 3
  018d094  extsw 4, 4
  018d098  stfs 6, 196(1)
  018d09c  lfs 6, 36(30)
  018d0a0  fmadds 4, 4, 6, 28
  018d0a4  fmadds 3, 5, 23, 3
  018d0a8  fmadds 2, 13, 23, 2
  018d0ac  fadds 3, 20, 3
  018d0b0  stfs 4, 208(1)
  018d0b4  lfs 4, 36(30)
  018d0b8  stfs 7, 216(1)
  018d0bc  fmadds 4, 8, 4, 21
  018d0c0  stfs 4, 212(1)
  018d0c4  lfs 4, 36(30)
  018d0c8  fmadds 1, 1, 4, 28
  018d0cc  lfsx 4, 26, 6
  018d0d0  lfs 5, 4(8)
  018d0d4  extsw 6, 9
  018d0d8  slwi 9, 5, 3
  018d0dc  addc 8, 6, 26
  018d0e0  slwi 5, 5, 2
  018d0e4  extsw 5, 5
  018d0e8  stfs 1, 224(1)
  018d0ec  lfs 1, 36(30)
  018d0f0  stfs 3, 232(1)
  018d0f4  fmadds 1, 2, 1, 21
  018d0f8  stfs 4, 256(1)
  018d0fc  lfsx 2, 26, 6
  018d100  lfs 3, 4(8)
  018d104  extsw 6, 9
  018d108  slwi 8, 7, 2
  018d10c  extsw 8, 8
  018d110  stfs 1, 228(1)
  018d114  lfs 1, 28(30)
  018d118  stfs 2, 264(1)
  018d11c  fadds 1, 5, 1
  018d120  lfsx 2, 26, 6
  018d124  addc 6, 6, 26
  018d128  lfs 4, 4(6)
  018d12c  slwi 6, 7, 3
  018d130  li 7, 9
  018d134  stfs 1, 260(1)
  018d138  lfs 1, 28(30)
  018d13c  stfs 2, 272(1)
  018d140  fadds 1, 3, 1
  018d144  lwzx 3, 27, 3
  018d148  lwzx 4, 27, 4
  018d14c  stw 3, 240(1)
  018d150  stw 4, 244(1)
  018d154  extsw 3, 6
  018d158  lwzx 5, 27, 5
  018d15c  lwzx 6, 27, 8
  018d160  stw 5, 248(1)
  018d164  addc 4, 3, 26
  018d168  li 5, 1
  018d16c  stfs 1, 268(1)
  018d170  lfs 1, 28(30)
  018d174  stw 6, 252(1)
  018d178  fadds 1, 4, 1
  018d17c  lfsx 2, 26, 3
  018d180  lfs 3, 4(4)
  018d184  ori 3, 25, 0
  018d188  stfs 2, 280(1)
  018d18c  li 4, 0
  018d190  lwz 6, 28(24)
  018d194  stfs 1, 276(1)
  018d198  lfs 1, 28(30)
  018d19c  fadds 1, 3, 1
  018d1a0  stfs 1, 284(1)
  018d1a4  bl 0x72280
  018d1a8  nop
  018d1ac  addic 29, 29, 1
  018d1b0  addic 23, 23, 16
  018d1b4  cmpwi 29, 4
  018d1b8  addic 22, 22, 16
  018d1bc  addic 21, 21, 16
  018d1c0  addic 20, 20, 16
  018d1c4  bt 0, 0x18cf10
  018d1c8  li 3, 27
  018d1cc  bl 0x685c4
  018d1d0  nop
  018d1d4  lfd 16, 336(1)
  018d1d8  lfs 1, 32(30)
  018d1dc  fadds 16, 1, 16
  018d1e0  lfd 1, 328(1)
  018d1e4  std 3, 296(1)
  018d1e8  lfs 14, 36(30)
  018d1ec  fmr 15, 16
  018d1f0  stfs 16, 32(30)
  018d1f4  fcmpu 0, 15, 1
  018d1f8  cror 6, 0, 2
  018d1fc  bt 6, 0x18d210
  018d200  li 3, 0
  018d204  stw 3, 32(30)
  018d208  lfd 15, 344(1)
  018d20c  lfs 16, 32(30)
  018d210  lis 3, 25
  018d214  li 28, 0
  018d218  addi 29, 3, -13016
  018d21c  addic 4, 1, 112
  018d220  lfs 1, 12(29)
  018d224  lfs 2, 24(29)
  018d228  fmuls 6, 15, 1
  018d22c  lfs 3, 16(29)
  018d230  fmuls 1, 16, 1
  018d234  lfs 4, 20(29)
  018d238  fmuls 2, 16, 2
  018d23c  lfs 5, 28(29)
  018d240  fmadds 31, 16, 3, 4
  018d244  ld 3, 320(1)
  018d248  lfs 3, 344(3)
  018d24c  fmuls 30, 6, 14
  018d250  fmuls 28, 1, 14
  018d254  stw 28, 112(1)
  018d258  stw 28, 116(1)
  018d25c  fmuls 29, 2, 14
  018d260  stfs 3, 120(1)
  018d264  addic 3, 1, 128
  018d268  fsubs 27, 31, 5
  018d26c  bl 0x500b64
  018d270  nop
  018d274  lfs 1, 144(1)
  018d278  lfs 2, 148(1)
  018d27c  fmuls 3, 1, 30
  018d280  lfs 4, 152(1)
  018d284  fmuls 5, 2, 30
  018d288  fmuls 9, 1, 28
  018d28c  lfs 6, 128(1)
  018d290  fmuls 7, 4, 30
  018d294  lfs 8, 132(1)
  018d298  fmuls 11, 2, 28
  018d29c  lfs 10, 136(1)
  018d2a0  fmuls 13, 4, 28
  018d2a4  lfs 12, 160(1)
  018d2a8  fmuls 1, 1, 29
  018d2ac  lfs 0, 164(1)
  018d2b0  fmuls 2, 2, 29
  018d2b4  fmuls 4, 4, 29
  018d2b8  fmadds 3, 6, 30, 3
  018d2bc  fmadds 5, 8, 30, 5
  018d2c0  fmadds 9, 6, 29, 9
  018d2c4  fmadds 7, 10, 30, 7
  018d2c8  fmadds 11, 8, 29, 11
  018d2cc  lfs 30, 168(1)
  018d2d0  fmadds 13, 10, 29, 13
  018d2d4  fmadds 26, 6, 28, 1
  018d2d8  fmadds 25, 8, 28, 2
  018d2dc  fmadds 28, 10, 28, 4
  018d2e0  fmadds 1, 6, 29, 1
  018d2e4  li 3, 32
  018d2e8  fmadds 2, 8, 29, 2
  018d2ec  fmadds 3, 12, 31, 3
  018d2f0  fmadds 5, 0, 31, 5
  018d2f4  addi 4, 3, 16
  018d2f8  fmadds 4, 10, 29, 4
  018d2fc  li 5, 8
  018d300  fmadds 7, 30, 31, 7
  018d304  fmadds 9, 12, 27, 9
  018d308  fmadds 6, 0, 27, 11
  018d30c  fmadds 8, 30, 27, 13
  018d310  fmadds 10, 12, 31, 26
  018d314  fmadds 11, 0, 31, 25
  018d318  fmadds 13, 30, 31, 28
  018d31c  lfs 31, 16(31)
  018d320  fmadds 1, 12, 27, 1
  018d324  lfs 12, 20(31)
  018d328  fmadds 2, 0, 27, 2
  018d32c  fadds 3, 31, 3
  018d330  lfs 0, 24(31)
  018d334  fmadds 4, 30, 27, 4
  018d338  fadds 5, 12, 5
  018d33c  fadds 7, 0, 7
  018d340  fadds 9, 31, 9
  018d344  fadds 6, 12, 6
  018d348  fadds 8, 0, 8
  018d34c  fadds 10, 31, 10
  018d350  fadds 11, 12, 11
  018d354  fadds 13, 0, 13
  018d358  fadds 1, 31, 1
  018d35c  fadds 2, 12, 2
  018d360  fadds 4, 0, 4
  018d364  stfs 3, 176(1)
  018d368  stfs 5, 180(1)
  018d36c  stfs 7, 184(1)
  018d370  stfs 9, 192(1)
  018d374  stfs 6, 196(1)
  018d378  stfs 8, 200(1)
  018d37c  stfs 10, 208(1)
  018d380  stfs 11, 212(1)
  018d384  stfs 13, 216(1)
  018d388  stfs 1, 224(1)
  018d38c  stfs 2, 228(1)
  018d390  stfs 4, 232(1)
  018d394  lvlx 2, 3, 30
  018d398  lvrx 3, 4, 30
  018d39c  li 3, 32
  018d3a0  lvlx 4, 5, 29
  018d3a4  vor 2, 2, 3
  018d3a8  vspltw 3, 4, 0
  018d3ac  li 8, 240
  018d3b0  lvlx 4, 3, 29
  018d3b4  li 3, 36
  018d3b8  vsubfp 2, 3, 2
  018d3bc  vspltw 4, 4, 0
  018d3c0  vspltisw 3, -1
  018d3c4  li 9, 244
  018d3c8  li 10, 248
  018d3cc  lvlx 5, 3, 29
  018d3d0  vslw 3, 3, 3
  018d3d4  li 3, 40
  018d3d8  vspltw 5, 5, 0
  018d3dc  li 12, 252
  018d3e0  lis 11, 16256
  018d3e4  li 4, 0
  018d3e8  li 5, 1
  018d3ec  lvlx 7, 3, 29
  018d3f0  vmaddfp 2, 2, 4, 3
  018d3f4  vspltw 7, 7, 0
  018d3f8  vspltisw 3, -16
  018d3fc  vspltisw 4, 0
  018d400  lwz 6, 28(24)
  018d404  ori 3, 25, 0
  018d408  vrlw 6, 5, 3
  018d40c  li 7, 9
  018d410  vctsxs 2, 2, 0
  018d414  vmsumshm 4, 2, 6, 4
  018d418  vmulouh 2, 2, 5
  018d41c  vslw 3, 4, 3
  018d420  vadduwm 2, 3, 2
  018d424  vor 2, 2, 7
  018d428  vspltw 2, 2, 0
  018d42c  stvewx 2, 8, 1
  018d430  stvewx 2, 9, 1
  018d434  stvewx 2, 10, 1
  018d438  stvewx 2, 12, 1
  018d43c  stw 28, 256(1)
  018d440  stw 28, 260(1)
  018d444  stw 11, 264(1)
  018d448  stw 28, 268(1)
  018d44c  stw 28, 272(1)
  018d450  stw 11, 276(1)
  018d454  stw 11, 280(1)
  018d458  stw 11, 284(1)
  018d45c  bl 0x72280
  018d460  nop
  018d464  ld 0, 608(1)
  018d468  mtlr 0
  018d46c  lfd 14, 448(1)
  018d470  lfd 15, 456(1)
  018d474  lfd 16, 464(1)
  018d478  lfd 17, 472(1)
  018d47c  lfd 18, 480(1)
  018d480  lfd 19, 488(1)
  018d484  lfd 20, 496(1)
  018d488  lfd 21, 504(1)
  018d48c  lfd 22, 512(1)
  018d490  lfd 23, 520(1)
  018d494  lfd 24, 528(1)
  018d498  lfd 25, 536(1)
  018d49c  lfd 26, 544(1)
  018d4a0  lfd 27, 552(1)
  018d4a4  lfd 28, 560(1)
  018d4a8  lfd 29, 568(1)
  018d4ac  lfd 30, 576(1)
  018d4b0  lfd 31, 584(1)
  018d4b4  ld 20, 352(1)
  018d4b8  ld 21, 360(1)
  018d4bc  ld 22, 368(1)
  018d4c0  ld 23, 376(1)
  018d4c4  ld 24, 384(1)
  018d4c8  ld 25, 392(1)
  018d4cc  ld 26, 400(1)
  018d4d0  ld 27, 408(1)
  018d4d4  ld 28, 416(1)
  018d4d8  ld 29, 424(1)
  018d4dc  ld 30, 432(1)
  018d4e0  ld 31, 440(1)
  018d4e4  addi 1, 1, 592
  018d4e8  blr

M1302_0018d4ec:   # 0x18d4ec, 0xd0 bytes
  018d4ec  stdu 1, -128(1)
  018d4f0  mflr 0
  018d4f4  std 0, 144(1)
  018d4f8  std 30, 112(1)
  018d4fc  ori 30, 3, 0
  018d500  std 31, 120(1)
  018d504  lhz 5, 166(4)
  018d508  ori 31, 4, 0
  018d50c  lbz 3, 32(4)
  018d510  extsh 4, 5
  018d514  cmpwi 4, 1346
  018d518  cmpwi 1, 4, 1282
  018d51c  cmpwi 6, 4, 1028
  018d520  cmpwi 7, 4, 1015
  018d524  bt 2, 0x18d570
  018d528  bt 6, 0x18d534
  018d52c  bt 26, 0x18d55c
  018d530  bf 30, 0x18d5a4
  018d534  cmpwi 3, 2
  018d538  bf 2, 0x18d5a4
  018d53c  li 6, 3
  018d540  li 3, 0
  018d544  li 4, 0
  018d548  ori 5, 31, 0
  018d54c  stb 6, 32(31)
  018d550  bl 0x15d12c
  018d554  nop
  018d558  b 0x18d5a4
  018d55c  cmpwi 3, 1
  018d560  bf 2, 0x18d5a4
  018d564  li 3, 2
  018d568  stb 3, 32(31)
  018d56c  b 0x18d5a4
  018d570  li 7, 2
  018d574  li 4, 0
  018d578  li 3, 0
  018d57c  ori 5, 31, 0
  018d580  li 6, 1076
  018d584  stb 7, 32(31)
  018d588  bl 0x15d204
  018d58c  nop
  018d590  li 4, 255
  018d594  lbz 3, 176(30)
  018d598  stb 4, 48(31)
  018d59c  bl 0xf1e50
  018d5a0  nop
  018d5a4  ld 0, 144(1)
  018d5a8  mtlr 0
  018d5ac  ld 30, 112(1)
  018d5b0  ld 31, 120(1)
  018d5b4  addi 1, 1, 128
  018d5b8  blr

UpdateMoby_1024:   # 0x18d608, 0x9ec bytes
  018d608  stdu 1, -368(1)
  018d60c  mflr 0
  018d610  std 0, 384(1)
  018d614  stfd 21, 280(1)
  018d618  stfd 22, 288(1)
  018d61c  stfd 23, 296(1)
  018d620  stfd 24, 304(1)
  018d624  stfd 25, 312(1)
  018d628  stfd 26, 320(1)
  018d62c  stfd 27, 328(1)
  018d630  stfd 28, 336(1)
  018d634  stfd 29, 344(1)
  018d638  stfd 30, 352(1)
  018d63c  stfd 31, 360(1)
  018d640  std 30, 264(1)
  018d644  std 31, 272(1)
  018d648  lwz 30, 120(3)
  018d64c  ori 31, 3, 0
  018d650  lwz 3, 0(30)
  018d654  std 29, 256(1)
  018d658  std 28, 248(1)
  018d65c  std 27, 240(1)
  018d660  std 26, 232(1)
  018d664  std 25, 224(1)
  018d668  cmpwi 3, -1
  018d66c  bt 2, 0x18df9c
  018d670  lis 3, 25
  018d674  lis 4, 116
  018d678  addi 29, 3, -10820
  018d67c  lis 3, 114
  018d680  lfs 22, 0(29)
  018d684  lfs 1, -1144(4)
  018d688  fdivs 2, 22, 1
  018d68c  lfs 23, 4(29)
  018d690  lfs 1, 40(30)
  018d694  lfs 3, -3052(3)
  018d698  fmuls 2, 2, 23
  018d69c  fmuls 2, 2, 3
  018d6a0  bl 0x502578
  018d6a4  nop
  018d6a8  lfs 24, 8(29)
  018d6ac  lfs 25, 12(29)
  018d6b0  fadds 2, 1, 24
  018d6b4  lfs 26, 16(29)
  018d6b8  lfs 27, 20(29)
  018d6bc  lfs 28, 24(29)
  018d6c0  lfs 29, 28(29)
  018d6c4  lis 3, -32698
  018d6c8  lfs 30, 32(29)
  018d6cc  lis 4, -32638
  018d6d0  ori 3, 3, 17990
  018d6d4  fsubs 3, 25, 2
  018d6d8  fsubs 4, 26, 2
  018d6dc  ori 4, 4, 33410
  018d6e0  fsub 5, 2, 3
  018d6e4  fsel 2, 5, 3, 2
  018d6e8  fsub 3, 4, 2
  018d6ec  fsel 2, 3, 4, 2
  018d6f0  lfs 4, 36(29)
  018d6f4  lfs 31, 40(29)
  018d6f8  stfs 1, 40(30)
  018d6fc  fmuls 3, 2, 2
  018d700  fmuls 5, 3, 2
  018d704  fmuls 6, 3, 5
  018d708  fmadds 2, 5, 27, 2
  018d70c  fmuls 5, 3, 6
  018d710  fmadds 2, 6, 28, 2
  018d714  fmuls 1, 3, 5
  018d718  fmadds 2, 5, 29, 2
  018d71c  fmadds 1, 1, 30, 2
  018d720  fadds 1, 1, 4
  018d724  fmuls 1, 1, 31
  018d728  bl 0x5027bc
  018d72c  nop
  018d730  stw 3, 144(31)
  018d734  lbz 3, 32(31)
  018d738  cmpwi 3, 0
  018d73c  bt 1, 0x18d74c
  018d740  cmpwi 3, -1
  018d744  bf 1, 0x18df9c
  018d748  b 0x18d760
  018d74c  cmpwi 3, 1
  018d750  bf 1, 0x18d798
  018d754  cmpwi 3, 2
  018d758  bf 1, 0x18df40
  018d75c  b 0x18df9c
  018d760  lwz 3, 16(30)
  018d764  stw 3, 20(30)
  018d768  bl 0xfcc68
  018d76c  nop
  018d770  stfs 1, 24(30)
  018d774  bl 0xfcc68
  018d778  nop
  018d77c  li 3, 1
  018d780  lis 4, 116
  018d784  stfs 1, 40(30)
  018d788  stb 3, 32(31)
  018d78c  lfs 1, -1136(4)
  018d790  stfs 1, 36(30)
  018d794  b 0x18df9c
  018d798  lis 3, 149
  018d79c  lfs 1, 16(31)
  018d7a0  addic 3, 3, 5056
  018d7a4  stfs 1, 112(1)
  018d7a8  lfs 2, 20(31)
  018d7ac  lfs 3, 324(3)
  018d7b0  lfs 4, 320(3)
  018d7b4  fsubs 3, 3, 2
  018d7b8  fsubs 1, 4, 1
  018d7bc  stfs 2, 116(1)
  018d7c0  lfs 2, 24(31)
  018d7c4  lfs 4, 328(3)
  018d7c8  fsubs 4, 4, 2
  018d7cc  lis 3, 25
  018d7d0  lfs 5, 28(31)
  018d7d4  addi 3, 3, -10820
  018d7d8  fmuls 3, 3, 3
  018d7dc  stfs 5, 124(1)
  018d7e0  fmadds 1, 1, 1, 3
  018d7e4  lfs 3, 44(3)
  018d7e8  fadds 2, 2, 3
  018d7ec  fmadds 1, 4, 4, 1
  018d7f0  stfs 2, 120(1)
  018d7f4  lfs 2, 48(3)
  018d7f8  fsqrts 1, 1
  018d7fc  fcmpu 0, 1, 2
  018d800  cror 6, 1, 2
  018d804  bt 6, 0x18d848
  018d808  lis 3, 25
  018d80c  lfs 1, 36(30)
  018d810  lis 4, 114
  018d814  addi 3, 3, -10820
  018d818  lis 5, 116
  018d81c  lfs 2, 52(3)
  018d820  lfs 3, -3052(4)
  018d824  fmadds 1, 3, 2, 1
  018d828  stfs 1, 36(30)
  018d82c  lfs 2, -1136(5)
  018d830  fcmpu 0, 1, 2
  018d834  cror 6, 0, 2
  018d838  bt 6, 0x18d8a0
  018d83c  fmr 1, 2
  018d840  stfs 2, 36(30)
  018d844  b 0x18d8a0
  018d848  fmr 2, 1
  018d84c  lis 3, 25
  018d850  addi 3, 3, -10820
  018d854  lfs 3, 56(3)
  018d858  lfs 1, 36(30)
  018d85c  fcmpu 0, 2, 3
  018d860  cror 6, 0, 2
  018d864  bt 6, 0x18d8a0
  018d868  lis 3, 25
  018d86c  lis 4, 114
  018d870  addi 3, 3, -10820
  018d874  lfs 2, 52(3)
  018d878  lfs 3, -3052(4)
  018d87c  fnmsubs 1, 3, 2, 1
  018d880  stfs 1, 36(30)
  018d884  lfs 2, 60(3)
  018d888  fcmpu 0, 1, 2
  018d88c  cror 6, 1, 2
  018d890  bt 6, 0x18d8a0
  018d894  li 3, 0
  018d898  fmr 1, 2
  018d89c  stw 3, 36(30)
  018d8a0  lis 3, 25
  018d8a4  addi 3, 3, -10820
  018d8a8  lfs 2, 60(3)
  018d8ac  fcmpu 0, 1, 2
  018d8b0  cror 6, 0, 2
  018d8b4  bt 6, 0x18debc
  018d8b8  lis 3, 113
  018d8bc  ori 4, 31, 0
  018d8c0  addic 3, 3, -31624
  018d8c4  bl 0x6d7e0
  018d8c8  nop
  018d8cc  lis 3, 116
  018d8d0  lfs 1, -1148(3)
  018d8d4  fdivs 2, 22, 1
  018d8d8  lis 3, 114
  018d8dc  lfs 1, 24(30)
  018d8e0  lfs 3, -3052(3)
  018d8e4  fmuls 2, 2, 23
  018d8e8  fmuls 2, 2, 3
  018d8ec  bl 0x502578
  018d8f0  nop
  018d8f4  fadds 2, 1, 24
  018d8f8  lis 3, 116
  018d8fc  stfs 1, 24(30)
  018d900  lfs 1, 120(1)
  018d904  fsubs 3, 25, 2
  018d908  fsubs 4, 26, 2
  018d90c  fsub 5, 2, 3
  018d910  fsel 2, 5, 3, 2
  018d914  fsub 3, 4, 2
  018d918  fsel 2, 3, 4, 2
  018d91c  lfs 4, -1152(3)
  018d920  lis 3, 116
  018d924  fmuls 3, 2, 2
  018d928  fmuls 5, 3, 2
  018d92c  fmuls 6, 3, 5
  018d930  fmadds 2, 5, 27, 2
  018d934  fmuls 5, 3, 6
  018d938  fmadds 2, 6, 28, 2
  018d93c  fmuls 3, 3, 5
  018d940  fmadds 2, 5, 29, 2
  018d944  fmadds 2, 3, 30, 2
  018d948  fmadds 1, 4, 2, 1
  018d94c  stfs 1, 120(1)
  018d950  lfs 1, 40(30)
  018d954  fadds 1, 1, 24
  018d958  fsubs 2, 25, 1
  018d95c  fsubs 3, 26, 1
  018d960  fsub 4, 1, 2
  018d964  fsel 1, 4, 2, 1
  018d968  fsub 2, 3, 1
  018d96c  fsel 1, 2, 3, 1
  018d970  lfs 2, -1140(3)
  018d974  fmuls 3, 1, 1
  018d978  fmuls 4, 3, 1
  018d97c  fmuls 5, 3, 4
  018d980  fmadds 1, 4, 27, 1
  018d984  fmuls 4, 3, 5
  018d988  fmadds 1, 5, 28, 1
  018d98c  fmuls 3, 3, 4
  018d990  fmadds 1, 4, 29, 1
  018d994  fmadds 1, 3, 30, 1
  018d998  fmuls 1, 2, 1
  018d99c  bl 0x502758
  018d9a0  nop
  018d9a4  lis 4, 21845
  018d9a8  srawi 5, 3, 1
  018d9ac  ori 4, 4, 21846
  018d9b0  mulhw 4, 4, 3
  018d9b4  addze 5, 5
  018d9b8  srwi 6, 4, 31
  018d9bc  slwi 5, 5, 8
  018d9c0  addic 3, 3, 150
  018d9c4  addc 4, 4, 6
  018d9c8  addic 5, 5, 30720
  018d9cc  lis 6, 151
  018d9d0  or 3, 5, 3
  018d9d4  slwi 4, 4, 16
  018d9d8  lis 5, 13
  018d9dc  addic 6, 6, -25376
  018d9e0  addc 4, 4, 5
  018d9e4  or 29, 3, 4
  018d9e8  lbz 3, 8356(6)
  018d9ec  oris 29, 29, 8192
  018d9f0  cmpwi 3, 1
  018d9f4  bf 2, 0x18debc
  018d9f8  lwz 3, 20(30)
  018d9fc  clrldi 29, 29, 32
  018da00  cmpwi 3, 10
  018da04  bf 0, 0x18da38
  018da08  addic 5, 3, 2
  018da0c  fmr 1, 31
  018da10  li 8, 127
  018da14  extsw 5, 5
  018da18  li 9, 4
  018da1c  addic 3, 1, 112
  018da20  ori 4, 31, 0
  018da24  ori 6, 29, 0
  018da28  li 10, 255
  018da2c  bl 0x12d0e8
  018da30  nop
  018da34  b 0x18debc
  018da38  lis 3, 151
  018da3c  lis 4, 25
  018da40  addic 3, 3, -16268
  018da44  addi 4, 4, -10820
  018da48  lbz 3, 4(3)
  018da4c  lfs 21, 64(4)
  018da50  lfs 22, 68(4)
  018da54  cmpwi 3, 0
  018da58  lfs 23, 72(4)
  018da5c  bt 2, 0x18dc90
  018da60  lfs 1, 72(31)
  018da64  fmr 2, 21
  018da68  bl 0x502578
  018da6c  nop
  018da70  fadds 1, 1, 24
  018da74  fsubs 2, 25, 1
  018da78  fsubs 3, 26, 1
  018da7c  fsub 4, 1, 2
  018da80  fsel 1, 4, 2, 1
  018da84  fsub 2, 3, 1
  018da88  fsel 2, 2, 3, 1
  018da8c  lfs 1, 72(31)
  018da90  fmuls 3, 2, 2
  018da94  fmuls 4, 3, 2
  018da98  fmuls 5, 3, 4
  018da9c  fmadds 4, 4, 27, 2
  018daa0  fmr 2, 21
  018daa4  fmuls 6, 3, 5
  018daa8  fmadds 4, 5, 28, 4
  018daac  fmuls 3, 3, 6
  018dab0  fmadds 4, 6, 29, 4
  018dab4  fmadds 3, 3, 30, 4
  018dab8  fmuls 3, 3, 23
  018dabc  stfs 3, 128(1)
  018dac0  bl 0x502578
  018dac4  nop
  018dac8  fsubs 2, 25, 1
  018dacc  fsubs 3, 26, 1
  018dad0  li 28, 0
  018dad4  addic 27, 1, 128
  018dad8  addic 26, 1, 112
  018dadc  ori 4, 27, 0
  018dae0  stw 28, 136(1)
  018dae4  addic 3, 1, 144
  018dae8  fsub 4, 1, 2
  018daec  ori 5, 26, 0
  018daf0  fsel 1, 4, 2, 1
  018daf4  fsub 2, 3, 1
  018daf8  fsel 1, 2, 3, 1
  018dafc  fmuls 2, 1, 1
  018db00  fmuls 3, 2, 1
  018db04  fmuls 4, 2, 3
  018db08  fmadds 1, 3, 27, 1
  018db0c  fmuls 3, 2, 4
  018db10  fmadds 1, 4, 28, 1
  018db14  fmuls 2, 2, 3
  018db18  fmadds 1, 3, 29, 1
  018db1c  fmadds 1, 2, 30, 1
  018db20  fmuls 1, 1, 23
  018db24  stfs 1, 132(1)
  018db28  bl 0x502b08
  018db2c  nop
  018db30  lis 4, 26214
  018db34  lwz 3, 20(30)
  018db38  fmr 1, 31
  018db3c  li 8, 127
  018db40  ori 25, 4, 26215
  018db44  mulhw 3, 25, 3
  018db48  ori 4, 31, 0
  018db4c  srawi 3, 3, 2
  018db50  li 9, 4
  018db54  srwi 5, 3, 31
  018db58  li 10, 255
  018db5c  addc 3, 3, 5
  018db60  ori 6, 29, 0
  018db64  addic 5, 3, 2
  018db68  ori 3, 27, 0
  018db6c  extsw 5, 5
  018db70  bl 0x12d0e8
  018db74  nop
  018db78  lfs 1, 72(31)
  018db7c  fmr 2, 21
  018db80  bl 0x502578
  018db84  nop
  018db88  fadds 1, 1, 24
  018db8c  fsubs 2, 25, 1
  018db90  fsubs 3, 26, 1
  018db94  fsub 4, 1, 2
  018db98  fsel 1, 4, 2, 1
  018db9c  fsub 2, 3, 1
  018dba0  fsel 2, 2, 3, 1
  018dba4  lfs 1, 72(31)
  018dba8  fmuls 3, 2, 2
  018dbac  fmuls 4, 3, 2
  018dbb0  fmuls 5, 3, 4
  018dbb4  fmadds 4, 4, 27, 2
  018dbb8  fmr 2, 21
  018dbbc  fmuls 6, 3, 5
  018dbc0  fmadds 4, 5, 28, 4
  018dbc4  fmuls 3, 3, 6
  018dbc8  fmadds 4, 6, 29, 4
  018dbcc  fmadds 3, 3, 30, 4
  018dbd0  fmuls 3, 3, 22
  018dbd4  stfs 3, 128(1)
  018dbd8  bl 0x502578
  018dbdc  nop
  018dbe0  fsubs 2, 25, 1
  018dbe4  fsubs 3, 26, 1
  018dbe8  stw 28, 136(1)
  018dbec  ori 5, 26, 0
  018dbf0  addic 3, 1, 160
  018dbf4  ori 4, 27, 0
  018dbf8  fsub 4, 1, 2
  018dbfc  fsel 1, 4, 2, 1
  018dc00  fsub 2, 3, 1
  018dc04  fsel 1, 2, 3, 1
  018dc08  fmuls 2, 1, 1
  018dc0c  fmuls 3, 2, 1
  018dc10  fmuls 4, 2, 3
  018dc14  fmadds 1, 3, 27, 1
  018dc18  fmuls 3, 2, 4
  018dc1c  fmadds 1, 4, 28, 1
  018dc20  fmuls 2, 2, 3
  018dc24  fmadds 1, 3, 29, 1
  018dc28  fmadds 1, 2, 30, 1
  018dc2c  fmuls 1, 1, 22
  018dc30  stfs 1, 132(1)
  018dc34  bl 0x502b08
  018dc38  nop
  018dc3c  lwz 5, 20(30)
  018dc40  mulhw 4, 25, 5
  018dc44  ori 3, 27, 0
  018dc48  srawi 4, 4, 2
  018dc4c  fmr 1, 31
  018dc50  li 8, 127
  018dc54  srwi 6, 4, 31
  018dc58  li 9, 4
  018dc5c  addc 6, 4, 6
  018dc60  li 10, 255
  018dc64  sldi 4, 6, 3
  018dc68  addc 7, 6, 4
  018dc6c  ori 4, 31, 0
  018dc70  addc 6, 6, 7
  018dc74  subc 5, 5, 6
  018dc78  ori 6, 29, 0
  018dc7c  addic 5, 5, 2
  018dc80  extsw 5, 5
  018dc84  bl 0x12d0e8
  018dc88  nop
  018dc8c  b 0x18debc
  018dc90  lfs 1, 72(31)
  018dc94  fmr 2, 21
  018dc98  bl 0x502578
  018dc9c  nop
  018dca0  fadds 1, 1, 24
  018dca4  fsubs 2, 25, 1
  018dca8  fsubs 3, 26, 1
  018dcac  fsub 4, 1, 2
  018dcb0  fsel 1, 4, 2, 1
  018dcb4  fsub 2, 3, 1
  018dcb8  fsel 2, 2, 3, 1
  018dcbc  lfs 1, 72(31)
  018dcc0  fmuls 3, 2, 2
  018dcc4  fmuls 4, 3, 2
  018dcc8  fmuls 5, 3, 4
  018dccc  fmadds 4, 4, 27, 2
  018dcd0  fmr 2, 21
  018dcd4  fmuls 6, 3, 5
  018dcd8  fmadds 4, 5, 28, 4
  018dcdc  fmuls 3, 3, 6
  018dce0  fmadds 4, 6, 29, 4
  018dce4  fmadds 3, 3, 30, 4
  018dce8  fmuls 3, 3, 22
  018dcec  stfs 3, 176(1)
  018dcf0  bl 0x502578
  018dcf4  nop
  018dcf8  fsubs 2, 25, 1
  018dcfc  fsubs 3, 26, 1
  018dd00  li 28, 0
  018dd04  addic 27, 1, 176
  018dd08  addic 26, 1, 112
  018dd0c  ori 4, 27, 0
  018dd10  stw 28, 184(1)
  018dd14  addic 3, 1, 192
  018dd18  fsub 4, 1, 2
  018dd1c  ori 5, 26, 0
  018dd20  fsel 1, 4, 2, 1
  018dd24  fsub 2, 3, 1
  018dd28  fsel 1, 2, 3, 1
  018dd2c  fmuls 2, 1, 1
  018dd30  fmuls 3, 2, 1
  018dd34  fmuls 4, 2, 3
  018dd38  fmadds 1, 3, 27, 1
  018dd3c  fmuls 3, 2, 4
  018dd40  fmadds 1, 4, 28, 1
  018dd44  fmuls 2, 2, 3
  018dd48  fmadds 1, 3, 29, 1
  018dd4c  fmadds 1, 2, 30, 1
  018dd50  fmuls 1, 1, 22
  018dd54  stfs 1, 180(1)
  018dd58  bl 0x502b08
  018dd5c  nop
  018dd60  lis 4, 26214
  018dd64  lwz 3, 20(30)
  018dd68  fmr 1, 31
  018dd6c  li 8, 127
  018dd70  ori 25, 4, 26215
  018dd74  mulhw 3, 25, 3
  018dd78  ori 4, 31, 0
  018dd7c  srawi 3, 3, 2
  018dd80  li 9, 4
  018dd84  srwi 5, 3, 31
  018dd88  li 10, 255
  018dd8c  addc 3, 3, 5
  018dd90  ori 6, 29, 0
  018dd94  addic 5, 3, 2
  018dd98  ori 3, 27, 0
  018dd9c  extsw 5, 5
  018dda0  bl 0x12d0e8
  018dda4  nop
  018dda8  lfs 1, 72(31)
  018ddac  fmr 2, 21
  018ddb0  bl 0x502578
  018ddb4  nop
  018ddb8  fadds 1, 1, 24
  018ddbc  fsubs 2, 25, 1
  018ddc0  fsubs 3, 26, 1
  018ddc4  fsub 4, 1, 2
  018ddc8  fsel 1, 4, 2, 1
  018ddcc  fsub 2, 3, 1
  018ddd0  fsel 2, 2, 3, 1
  018ddd4  lfs 1, 72(31)
  018ddd8  fmuls 3, 2, 2
  018dddc  fmuls 4, 3, 2
  018dde0  fmuls 5, 3, 4
  018dde4  fmadds 4, 4, 27, 2
  018dde8  fmr 2, 21
  018ddec  fmuls 6, 3, 5
  018ddf0  fmadds 4, 5, 28, 4
  018ddf4  fmuls 3, 3, 6
  018ddf8  fmadds 4, 6, 29, 4
  018ddfc  fmadds 3, 3, 30, 4
  018de00  fmuls 3, 3, 23
  018de04  stfs 3, 176(1)
  018de08  bl 0x502578
  018de0c  nop
  018de10  fsubs 2, 25, 1
  018de14  fsubs 3, 26, 1
  018de18  stw 28, 184(1)
  018de1c  ori 5, 26, 0
  018de20  addic 3, 1, 208
  018de24  ori 4, 27, 0
  018de28  fsub 4, 1, 2
  018de2c  fsel 1, 4, 2, 1
  018de30  fsub 2, 3, 1
  018de34  fsel 1, 2, 3, 1
  018de38  fmuls 2, 1, 1
  018de3c  fmuls 3, 2, 1
  018de40  fmuls 4, 2, 3
  018de44  fmadds 1, 3, 27, 1
  018de48  fmuls 3, 2, 4
  018de4c  fmadds 1, 4, 28, 1
  018de50  fmuls 2, 2, 3
  018de54  fmadds 1, 3, 29, 1
  018de58  fmadds 1, 2, 30, 1
  018de5c  fmuls 1, 1, 23
  018de60  stfs 1, 180(1)
  018de64  bl 0x502b08
  018de68  nop
  018de6c  lwz 5, 20(30)
  018de70  mulhw 4, 25, 5
  018de74  ori 3, 27, 0
  018de78  srawi 4, 4, 2
  018de7c  fmr 1, 31
  018de80  li 8, 127
  018de84  srwi 6, 4, 31
  018de88  li 9, 4
  018de8c  addc 6, 4, 6
  018de90  li 10, 255
  018de94  sldi 4, 6, 3
  018de98  addc 7, 6, 4
  018de9c  ori 4, 31, 0
  018dea0  addc 6, 6, 7
  018dea4  subc 5, 5, 6
  018dea8  ori 6, 29, 0
  018deac  addic 5, 5, 2
  018deb0  extsw 5, 5
  018deb4  bl 0x12d0e8
  018deb8  nop
  018debc  lwz 3, 20(30)
  018dec0  cmpwi 3, 0
  018dec4  bf 1, 0x18def8
  018dec8  lis 3, 151
  018decc  lbz 5, 176(31)
  018ded0  lis 4, 161
  018ded4  addic 4, 4, -13692
  018ded8  lwz 3, -25488(3)
  018dedc  addc 4, 5, 4
  018dee0  slwi 3, 3, 4
  018dee4  clrldi 4, 4, 32
  018dee8  extsw 3, 3
  018deec  lbzx 3, 4, 3
  018def0  cmpwi 3, 255
  018def4  bf 2, 0x18df9c
  018def8  li 29, 0
  018defc  lwz 3, 0(30)
  018df00  cmpwi 3, -1
  018df04  bt 2, 0x18df24
  018df08  lis 4, 164
  018df0c  slwi 5, 3, 8
  018df10  ori 3, 31, 0
  018df14  lwz 4, -28512(4)
  018df18  addc 4, 4, 5
  018df1c  clrldi 4, 4, 32
  018df20  bl 0x18d4ec
  018df24  addic 29, 29, 1
  018df28  addic 30, 30, 4
  018df2c  cmpwi 29, 4
  018df30  bt 0, 0x18defc
  018df34  li 3, 2
  018df38  stb 3, 32(31)
  018df3c  b 0x18df9c
  018df40  lis 3, 25
  018df44  lis 4, 114
  018df48  lfs 1, 36(30)
  018df4c  addi 3, 3, -10820
  018df50  lfs 2, 52(3)
  018df54  lfs 3, -3052(4)
  018df58  fnmsubs 1, 3, 2, 1
  018df5c  stfs 1, 36(30)
  018df60  lfs 2, 60(3)
  018df64  fcmpu 0, 1, 2
  018df68  cror 6, 1, 2
  018df6c  bt 6, 0x18df7c
  018df70  li 3, 0
  018df74  fmr 1, 2
  018df78  stw 3, 36(30)
  018df7c  fcmpu 0, 1, 2
  018df80  cror 6, 0, 2
  018df84  bt 6, 0x18df9c
  018df88  lis 3, 113
  018df8c  ori 4, 31, 0
  018df90  addic 3, 3, -31624
  018df94  bl 0x6d7e0
  018df98  nop
  018df9c  ld 0, 384(1)
  018dfa0  mtlr 0
  018dfa4  lfd 21, 280(1)
  018dfa8  lfd 22, 288(1)
  018dfac  lfd 23, 296(1)
  018dfb0  lfd 24, 304(1)
  018dfb4  lfd 25, 312(1)
  018dfb8  lfd 26, 320(1)
  018dfbc  lfd 27, 328(1)
  018dfc0  lfd 28, 336(1)
  018dfc4  lfd 29, 344(1)
  018dfc8  lfd 30, 352(1)
  018dfcc  lfd 31, 360(1)
  018dfd0  ld 25, 224(1)
  018dfd4  ld 26, 232(1)
  018dfd8  ld 27, 240(1)
  018dfdc  ld 28, 248(1)
  018dfe0  ld 29, 256(1)
  018dfe4  ld 30, 264(1)
  018dfe8  ld 31, 272(1)
  018dfec  addi 1, 1, 368
  018dff0  blr

M1302_0018dff4:   # 0x18dff4, 0x14 bytes
  018dff4  lis 3, 116
  018dff8  lis 4, 1
  018dffc  addic 3, 3, -1128
  018e000  stw 4, 72(3)
  018e004  blr
