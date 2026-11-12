# game/update/moby31.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M309_0033cdb4:   # 0x33cdb4, 0x7c bytes
  033cdb4  ori 4, 3, 0
  033cdb8  lis 3, 165
  033cdbc  addic 3, 3, 7136
  033cdc0  lwz 4, 120(4)
  033cdc4  lwz 5, 268(4)
  033cdc8  cmpwi 5, 0
  033cdcc  bf 2, 0x33cde4
  033cdd0  lwz 5, 208(4)
  033cdd4  slwi 5, 5, 2
  033cdd8  extsw 5, 5
  033cddc  lwzx 3, 3, 5
  033cde0  b 0x33cdf4
  033cde4  lwz 5, 336(4)
  033cde8  slwi 5, 5, 2
  033cdec  extsw 5, 5
  033cdf0  lwzx 3, 3, 5
  033cdf4  lwz 6, 0(3)
  033cdf8  li 5, 0
  033cdfc  addic 6, 6, -2
  033ce00  sldi 7, 6, 4
  033ce04  addc 3, 3, 7
  033ce08  stw 6, 232(4)
  033ce0c  clrldi 3, 3, 32
  033ce10  lfs 1, 28(3)
  033ce14  stw 5, 228(4)
  033ce18  stfs 1, 236(4)
  033ce1c  stw 5, 252(4)
  033ce20  stw 5, 248(4)
  033ce24  stw 5, 244(4)
  033ce28  stw 5, 240(4)
  033ce2c  blr

M309_0033ce30:   # 0x33ce30, 0x98 bytes
  033ce30  stdu 1, -128(1)
  033ce34  mflr 0
  033ce38  std 0, 144(1)
  033ce3c  lhz 5, 52(3)
  033ce40  std 31, 120(1)
  033ce44  li 4, 0
  033ce48  lwz 31, 120(3)
  033ce4c  ori 5, 5, 65
  033ce50  stw 4, 148(3)
  033ce54  sth 5, 52(3)
  033ce58  lwz 4, 264(31)
  033ce5c  cmpwi 4, -1
  033ce60  bt 2, 0x33ceac
  033ce64  sldi 5, 4, 7
  033ce68  sldi 7, 4, 4
  033ce6c  lis 6, 150
  033ce70  subc 5, 5, 7
  033ce74  ori 7, 3, 0
  033ce78  addic 6, 6, 14312
  033ce7c  extsw 3, 5
  033ce80  lwzx 5, 6, 3
  033ce84  cmpw 5, 7
  033ce88  bf 2, 0x33ceac
  033ce8c  lis 5, 150
  033ce90  addic 5, 5, 14292
  033ce94  lbzx 3, 5, 3
  033ce98  cmpwi 3, 0
  033ce9c  bt 2, 0x33ceac
  033cea0  extsw 3, 4
  033cea4  bl 0x15cdb0
  033cea8  nop
  033ceac  li 3, -1
  033ceb0  stw 3, 264(31)
  033ceb4  ld 0, 144(1)
  033ceb8  mtlr 0
  033cebc  ld 31, 120(1)
  033cec0  addi 1, 1, 128
  033cec4  blr

M31_0033ced8:   # 0x33ced8, 0x278 bytes
  033ced8  stdu 1, -96(1)
  033cedc  lis 4, 52
  033cee0  li 6, 0
  033cee4  addi 5, 4, -12600
  033cee8  lwz 4, 120(3)
  033ceec  lis 7, 129
  033cef0  stw 6, 232(4)
  033cef4  lfs 1, 0(5)
  033cef8  stw 6, 236(4)
  033cefc  lfs 2, 4(5)
  033cf00  lfs 3, 7800(7)
  033cf04  stw 6, 356(4)
  033cf08  lis 5, 165
  033cf0c  fmuls 2, 3, 2
  033cf10  lwz 7, 268(4)
  033cf14  stw 6, 360(4)
  033cf18  addic 5, 5, 7136
  033cf1c  stw 6, 364(4)
  033cf20  cmpwi 7, 0
  033cf24  stw 6, 192(4)
  033cf28  stw 6, 196(4)
  033cf2c  stfs 2, 352(4)
  033cf30  bf 2, 0x33cf48
  033cf34  lwz 6, 208(4)
  033cf38  slwi 6, 6, 2
  033cf3c  extsw 6, 6
  033cf40  lwzx 5, 5, 6
  033cf44  b 0x33cf58
  033cf48  lwz 6, 336(4)
  033cf4c  slwi 6, 6, 2
  033cf50  extsw 6, 6
  033cf54  lwzx 5, 5, 6
  033cf58  lfs 2, 16(5)
  033cf5c  stfs 2, 16(3)
  033cf60  lfs 3, 20(5)
  033cf64  stfs 3, 20(3)
  033cf68  lfs 4, 24(5)
  033cf6c  stfs 4, 24(3)
  033cf70  lfs 4, 28(5)
  033cf74  stfs 4, 28(3)
  033cf78  lfs 4, 32(5)
  033cf7c  lfs 5, 36(5)
  033cf80  fsubs 2, 4, 2
  033cf84  fsubs 3, 5, 3
  033cf88  lis 5, 115
  033cf8c  addic 5, 5, 22784
  033cf90  fabs 5, 2
  033cf94  fabs 4, 3
  033cf98  stfs 2, 48(1)
  033cf9c  stfs 3, 52(1)
  033cfa0  fsubs 2, 5, 4
  033cfa4  stfs 2, 56(1)
  033cfa8  lwz 6, 48(1)
  033cfac  lfs 2, 48(1)
  033cfb0  lwz 7, 52(1)
  033cfb4  lfs 3, 52(1)
  033cfb8  fabs 2, 2
  033cfbc  lwz 8, 56(1)
  033cfc0  rlwinm 7, 7, 3, 29, 29
  033cfc4  fabs 6, 3
  033cfc8  lfs 3, 56(1)
  033cfcc  rlwimi 7, 8, 2, 30, 30
  033cfd0  fsub 7, 3, 1
  033cfd4  fsub 8, 3, 1
  033cfd8  rlwimi 7, 6, 4, 28, 28
  033cfdc  ori 6, 5, 0
  033cfe0  rlwimi 6, 7, 2, 26, 28
  033cfe4  slwi 7, 7, 2
  033cfe8  clrldi 6, 6, 32
  033cfec  fsel 4, 7, 2, 4
  033cff0  lfsx 3, 5, 7
  033cff4  fsel 5, 8, 6, 5
  033cff8  lfs 2, 4(6)
  033cffc  fcmpu 0, 4, 1
  033d000  bt 1, 0x33d008
  033d004  b 0x33d12c
  033d008  fsubs 6, 5, 4
  033d00c  fadds 4, 5, 4
  033d010  addic 8, 1, 16
  033d014  li 5, 2
  033d018  addic 6, 8, 60
  033d01c  addic 7, 8, 44
  033d020  mtctr 5
  033d024  fdivs 4, 6, 4
  033d028  fmuls 6, 4, 4
  033d02c  stfs 4, 72(1)
  033d030  stfs 4, 64(1)
  033d034  stfs 4, 68(1)
  033d038  stfs 4, 60(1)
  033d03c  lfs 7, 72(1)
  033d040  lfs 8, 64(1)
  033d044  lfs 9, 68(1)
  033d048  fmuls 4, 6, 6
  033d04c  fmuls 8, 8, 6
  033d050  fmuls 7, 7, 4
  033d054  fmuls 5, 4, 4
  033d058  fmuls 4, 9, 4
  033d05c  stfs 8, 64(1)
  033d060  fmuls 6, 7, 6
  033d064  stfs 4, 68(1)
  033d068  stfs 6, 72(1)
  033d06c  lfs 4, 44(8)
  033d070  fmuls 4, 4, 5
  033d074  stfs 4, 60(8)
  033d078  lfs 4, 4(7)
  033d07c  addic 7, 7, 8
  033d080  fmuls 4, 4, 5
  033d084  addic 8, 8, 8
  033d088  stfs 4, 4(6)
  033d08c  addic 6, 6, 8
  033d090  bdnz 0x33d06c
  033d094  ori 9, 1, 0
  033d098  li 6, 4
  033d09c  lis 8, 115
  033d0a0  addic 7, 9, 60
  033d0a4  mtctr 6
  033d0a8  addic 8, 8, 22752
  033d0ac  ori 6, 7, 0
  033d0b0  lfs 4, 60(9)
  033d0b4  lfs 5, 0(8)
  033d0b8  fmuls 4, 4, 5
  033d0bc  lfs 5, 4(8)
  033d0c0  addic 8, 8, 8
  033d0c4  stfs 4, 60(9)
  033d0c8  lfs 4, 4(7)
  033d0cc  addic 9, 9, 8
  033d0d0  fmuls 4, 4, 5
  033d0d4  stfs 4, 4(7)
  033d0d8  addic 7, 7, 8
  033d0dc  bdnz 0x33d0b0
  033d0e0  ori 7, 5, 0
  033d0e4  ori 5, 1, 0
  033d0e8  mtctr 7
  033d0ec  lfs 4, 60(5)
  033d0f0  fadds 1, 1, 4
  033d0f4  lfs 4, 4(6)
  033d0f8  addic 5, 5, 16
  033d0fc  lfs 5, 8(6)
  033d100  lfs 6, 12(6)
  033d104  addic 6, 6, 16
  033d108  fadds 1, 1, 4
  033d10c  fadds 1, 1, 5
  033d110  fadds 1, 1, 6
  033d114  bdnz 0x33d0ec
  033d118  lis 5, 52
  033d11c  addi 5, 5, -12600
  033d120  lfs 4, 8(5)
  033d124  fadds 1, 1, 4
  033d128  fmadds 1, 1, 3, 2
  033d12c  li 5, 0
  033d130  stfs 1, 72(3)
  033d134  stw 5, 228(4)
  033d138  stw 5, 252(4)
  033d13c  stw 5, 248(4)
  033d140  stw 5, 244(4)
  033d144  stw 5, 240(4)
  033d148  addi 1, 1, 96
  033d14c  blr

M31_0033d150:   # 0x33d150, 0x180 bytes
  033d150  lwz 5, 120(3)
  033d154  lis 6, 165
  033d158  li 4, 0
  033d15c  addic 6, 6, 7136
  033d160  lwz 3, 208(5)
  033d164  slwi 3, 3, 2
  033d168  extsw 7, 3
  033d16c  ori 3, 4, 0
  033d170  lwzx 7, 6, 7
  033d174  lwz 8, 0(7)
  033d178  addic 8, 8, -1
  033d17c  cmpwi 8, 0
  033d180  bf 1, 0x33d1d8
  033d184  ori 8, 7, 0
  033d188  lfs 1, 20(8)
  033d18c  lfs 2, 36(8)
  033d190  lfs 3, 16(8)
  033d194  fsubs 1, 1, 2
  033d198  lfs 2, 32(8)
  033d19c  fsubs 2, 3, 2
  033d1a0  lfs 3, 24(8)
  033d1a4  lfs 4, 40(8)
  033d1a8  fsubs 3, 3, 4
  033d1ac  fmuls 1, 1, 1
  033d1b0  addic 4, 4, 1
  033d1b4  fmadds 1, 2, 2, 1
  033d1b8  fmadds 1, 3, 3, 1
  033d1bc  fsqrts 1, 1
  033d1c0  stfs 1, 28(8)
  033d1c4  lwz 9, 0(7)
  033d1c8  addic 8, 8, 16
  033d1cc  addic 9, 9, -1
  033d1d0  cmpw 4, 9
  033d1d4  bt 0, 0x33d188
  033d1d8  lwz 7, 336(5)
  033d1dc  ori 4, 3, 0
  033d1e0  slwi 7, 7, 2
  033d1e4  extsw 8, 7
  033d1e8  lwzx 8, 6, 8
  033d1ec  lwz 7, 0(8)
  033d1f0  addic 7, 7, -1
  033d1f4  cmpwi 7, 0
  033d1f8  bf 1, 0x33d250
  033d1fc  ori 7, 8, 0
  033d200  lfs 1, 20(7)
  033d204  lfs 2, 36(7)
  033d208  lfs 3, 16(7)
  033d20c  fsubs 1, 1, 2
  033d210  lfs 2, 32(7)
  033d214  fsubs 2, 3, 2
  033d218  lfs 3, 24(7)
  033d21c  lfs 4, 40(7)
  033d220  fsubs 3, 3, 4
  033d224  fmuls 1, 1, 1
  033d228  addic 4, 4, 1
  033d22c  fmadds 1, 2, 2, 1
  033d230  fmadds 1, 3, 3, 1
  033d234  fsqrts 1, 1
  033d238  stfs 1, 28(7)
  033d23c  lwz 9, 0(8)
  033d240  addic 7, 7, 16
  033d244  addic 9, 9, -1
  033d248  cmpw 4, 9
  033d24c  bt 0, 0x33d200
  033d250  lwz 7, 220(5)
  033d254  ori 4, 3, 0
  033d258  slwi 7, 7, 2
  033d25c  extsw 7, 7
  033d260  lwzx 6, 6, 7
  033d264  lwz 7, 0(6)
  033d268  addic 7, 7, -1
  033d26c  cmpwi 7, 0
  033d270  bf 1, 0x33d2c8
  033d274  ori 7, 6, 0
  033d278  lfs 1, 20(7)
  033d27c  lfs 2, 36(7)
  033d280  lfs 3, 16(7)
  033d284  fsubs 1, 1, 2
  033d288  lfs 2, 32(7)
  033d28c  fsubs 2, 3, 2
  033d290  lfs 3, 24(7)
  033d294  lfs 4, 40(7)
  033d298  fsubs 3, 3, 4
  033d29c  fmuls 1, 1, 1
  033d2a0  addic 4, 4, 1
  033d2a4  fmadds 1, 2, 2, 1
  033d2a8  fmadds 1, 3, 3, 1
  033d2ac  fsqrts 1, 1
  033d2b0  stfs 1, 28(7)
  033d2b4  lwz 8, 0(6)
  033d2b8  addic 7, 7, 16
  033d2bc  addic 8, 8, -1
  033d2c0  cmpw 4, 8
  033d2c4  bt 0, 0x33d278
  033d2c8  stw 3, 268(5)
  033d2cc  blr

M31_0033d2f8:   # 0x33d2f8, 0x2bc bytes
  033d2f8  stdu 1, -240(1)
  033d2fc  mflr 0
  033d300  std 0, 256(1)
  033d304  stfd 28, 208(1)
  033d308  stfd 29, 216(1)
  033d30c  stfd 30, 224(1)
  033d310  stfd 31, 232(1)
  033d314  std 30, 192(1)
  033d318  addi 0, 1, 144
  033d31c  stvx 31, 0, 0
  033d320  ori 30, 3, 0
  033d324  lbz 3, 32(3)
  033d328  cmpwi 6, 3, 1
  033d32c  cmpwi 3, 0
  033d330  cror 2, 2, 26
  033d334  std 31, 200(1)
  033d338  std 29, 184(1)
  033d33c  std 28, 176(1)
  033d340  std 27, 168(1)
  033d344  std 26, 160(1)
  033d348  cmpwi 1, 3, 9
  033d34c  bt 2, 0x33d574
  033d350  bt 6, 0x33d574
  033d354  lis 3, 52
  033d358  lfs 1, 192(30)
  033d35c  li 4, 20
  033d360  addi 3, 3, -11568
  033d364  li 27, 0
  033d368  lis 31, 161
  033d36c  ori 28, 27, 0
  033d370  lis 29, 114
  033d374  lfs 2, 0(3)
  033d378  lfs 3, 196(30)
  033d37c  addic 31, 31, 23856
  033d380  lfs 4, 200(30)
  033d384  lfs 5, 16(30)
  033d388  lfs 6, 20(30)
  033d38c  lfs 7, 24(30)
  033d390  fmadds 1, 1, 2, 5
  033d394  lfs 8, 28(30)
  033d398  fmadds 3, 3, 2, 6
  033d39c  fmadds 2, 4, 2, 7
  033d3a0  stfs 8, 124(1)
  033d3a4  stfs 1, 112(1)
  033d3a8  stfs 3, 116(1)
  033d3ac  stfs 2, 120(1)
  033d3b0  lfs 28, 4(3)
  033d3b4  lfs 31, 8(3)
  033d3b8  lfs 29, 12(3)
  033d3bc  lfs 30, 16(3)
  033d3c0  lvlx 31, 4, 3
  033d3c4  vspltw 31, 31, 0
  033d3c8  li 3, 16
  033d3cc  bl 0xfc620
  033d3d0  nop
  033d3d4  ori 26, 3, 0
  033d3d8  li 3, 2
  033d3dc  bl 0xfc620
  033d3e0  nop
  033d3e4  li 4, 0
  033d3e8  neg 7, 26
  033d3ec  fmr 1, 28
  033d3f0  subc 3, 4, 3
  033d3f4  fmr 2, 31
  033d3f8  subc 4, 26, 7
  033d3fc  fmr 3, 29
  033d400  cntlzw 3, 3
  033d404  fmr 4, 30
  033d408  lis 10, 32560
  033d40c  sldi 5, 3, 58
  033d410  addic 3, 1, 112
  033d414  sradi 5, 5, 63
  033d418  ori 8, 31, 0
  033d41c  and 4, 5, 4
  033d420  ori 10, 10, 12543
  033d424  addc 7, 7, 4
  033d428  bl 0x126f50
  033d42c  nop
  033d430  cmpwi 3, 0
  033d434  bt 2, 0x33d478
  033d438  vspltisw 2, -1
  033d43c  li 4, -3056
  033d440  li 5, 2
  033d444  li 6, 127
  033d448  vslw 2, 2, 2
  033d44c  lvlx 3, 4, 29
  033d450  li 4, 10
  033d454  li 7, 43
  033d458  vmaddfp 2, 3, 31, 2
  033d45c  vctsxs 2, 2, 0
  033d460  vsplth 3, 2, 1
  033d464  vspltb 2, 2, 3
  033d468  stvehx 3, 4, 3
  033d46c  stw 5, 36(3)
  033d470  stb 6, 42(3)
  033d474  stvebx 2, 7, 3
  033d478  addic 27, 27, 1
  033d47c  cmpwi 27, 2
  033d480  bt 0, 0x33d3c8
  033d484  lfs 1, 192(30)
  033d488  lfs 2, 196(30)
  033d48c  lis 3, 52
  033d490  fneg 1, 1
  033d494  lfs 3, 200(30)
  033d498  fneg 2, 2
  033d49c  lfs 4, 16(30)
  033d4a0  fneg 3, 3
  033d4a4  lfs 5, 20(30)
  033d4a8  lfs 6, 24(30)
  033d4ac  addi 3, 3, -11568
  033d4b0  lfs 7, 28(30)
  033d4b4  stfs 7, 124(1)
  033d4b8  fadds 1, 4, 1
  033d4bc  fadds 2, 5, 2
  033d4c0  fadds 3, 6, 3
  033d4c4  lfs 4, -3056(29)
  033d4c8  li 29, 16
  033d4cc  stfs 1, 112(1)
  033d4d0  stfs 2, 116(1)
  033d4d4  stfs 3, 120(1)
  033d4d8  lfs 1, 24(3)
  033d4dc  fmuls 1, 4, 1
  033d4e0  fctiwz 1, 1
  033d4e4  stfd 1, 128(1)
  033d4e8  lwz 30, 132(1)
  033d4ec  lfs 28, 28(3)
  033d4f0  lfs 29, 32(3)
  033d4f4  lfs 30, 36(3)
  033d4f8  addic 3, 1, 112
  033d4fc  fmr 1, 29
  033d500  lis 10, 32767
  033d504  fmr 2, 31
  033d508  ori 7, 29, 0
  033d50c  fmr 3, 31
  033d510  fmr 4, 28
  033d514  ori 8, 31, 0
  033d518  ori 10, 10, 65535
  033d51c  bl 0x126f50
  033d520  nop
  033d524  ori 27, 3, 0
  033d528  cmpwi 27, 0
  033d52c  bt 2, 0x33d55c
  033d530  li 3, 255
  033d534  sth 30, 10(27)
  033d538  bl 0xfc620
  033d53c  nop
  033d540  stb 3, 8(27)
  033d544  li 4, 127
  033d548  li 3, 2
  033d54c  lhz 5, 10(27)
  033d550  stb 5, 43(27)
  033d554  stw 3, 36(27)
  033d558  stb 4, 42(27)
  033d55c  addic 28, 28, 1
  033d560  fsubs 28, 28, 30
  033d564  neg 29, 29
  033d568  cmpwi 28, 3
  033d56c  sldi 30, 30, 1
  033d570  bt 0, 0x33d4f8
  033d574  li 0, 144
  033d578  lvx 31, 1, 0
  033d57c  ld 0, 256(1)
  033d580  mtlr 0
  033d584  lfd 28, 208(1)
  033d588  lfd 29, 216(1)
  033d58c  lfd 30, 224(1)
  033d590  lfd 31, 232(1)
  033d594  ld 26, 160(1)
  033d598  ld 27, 168(1)
  033d59c  ld 28, 176(1)
  033d5a0  ld 29, 184(1)
  033d5a4  ld 30, 192(1)
  033d5a8  ld 31, 200(1)
  033d5ac  addi 1, 1, 240
  033d5b0  blr

M31_0033d5c8:   # 0x33d5c8, 0x128 bytes
  033d5c8  stdu 1, -144(1)
  033d5cc  mflr 0
  033d5d0  std 0, 160(1)
  033d5d4  stfd 31, 136(1)
  033d5d8  std 31, 128(1)
  033d5dc  ori 31, 3, 0
  033d5e0  std 30, 120(1)
  033d5e4  lbz 3, 32(31)
  033d5e8  lwz 30, 120(31)
  033d5ec  cmpwi 1, 3, 9
  033d5f0  cmpwi 3, 0
  033d5f4  cror 2, 2, 6
  033d5f8  bt 2, 0x33d6d4
  033d5fc  cmpwi 3, 1
  033d600  bt 2, 0x33d6d4
  033d604  lis 4, 129
  033d608  cmpwi 3, 2
  033d60c  lfs 31, 7800(4)
  033d610  bt 2, 0x33d624
  033d614  cmpwi 3, 3
  033d618  bt 2, 0x33d624
  033d61c  cmpwi 3, 7
  033d620  bf 2, 0x33d638
  033d624  lis 3, 52
  033d628  addi 3, 3, -10828
  033d62c  lfs 1, 0(3)
  033d630  fmuls 31, 31, 1
  033d634  b 0x33d684
  033d638  lis 5, 52
  033d63c  lis 4, 129
  033d640  addi 6, 5, -10828
  033d644  addic 3, 30, 360
  033d648  addic 5, 30, 364
  033d64c  lfs 1, 7796(4)
  033d650  lfs 2, 4(6)
  033d654  lfs 3, 8(6)
  033d658  lfs 4, 12(6)
  033d65c  bl 0x109b40
  033d660  nop
  033d664  lis 6, 129
  033d668  lfs 2, 360(30)
  033d66c  addic 4, 30, 192
  033d670  ori 3, 31, 0
  033d674  addic 5, 30, 196
  033d678  lfs 1, 7792(6)
  033d67c  bl 0x116a68
  033d680  nop
  033d684  lis 4, 52
  033d688  fmr 1, 31
  033d68c  addic 3, 30, 352
  033d690  addi 4, 4, -10828
  033d694  addic 5, 30, 356
  033d698  lfs 2, 16(4)
  033d69c  lfs 3, 8(4)
  033d6a0  lfs 4, 12(4)
  033d6a4  bl 0x109b40
  033d6a8  nop
  033d6ac  lis 6, 129
  033d6b0  lfs 1, 352(30)
  033d6b4  lis 7, 129
  033d6b8  addic 4, 30, 200
  033d6bc  ori 3, 31, 0
  033d6c0  addic 5, 30, 204
  033d6c4  lfs 2, 7804(6)
  033d6c8  lfs 3, 7808(7)
  033d6cc  bl 0x116b70
  033d6d0  nop
  033d6d4  ld 0, 160(1)
  033d6d8  mtlr 0
  033d6dc  lfd 31, 136(1)
  033d6e0  ld 30, 120(1)
  033d6e4  ld 31, 128(1)
  033d6e8  addi 1, 1, 144
  033d6ec  blr

M309_0033d6f0:   # 0x33d6f0, 0x138 bytes
  033d6f0  stdu 1, -192(1)
  033d6f4  mflr 0
  033d6f8  std 0, 208(1)
  033d6fc  stfd 25, 136(1)
  033d700  stfd 26, 144(1)
  033d704  stfd 27, 152(1)
  033d708  stfd 28, 160(1)
  033d70c  stfd 29, 168(1)
  033d710  stfd 30, 176(1)
  033d714  stfd 31, 184(1)
  033d718  std 30, 120(1)
  033d71c  ori 30, 3, 0
  033d720  std 31, 128(1)
  033d724  lbz 3, 32(3)
  033d728  ori 31, 4, 0
  033d72c  fmr 25, 1
  033d730  cmpwi 7, 3, 5
  033d734  cmpwi 3, 4
  033d738  fmr 26, 2
  033d73c  cror 2, 2, 30
  033d740  fmr 27, 3
  033d744  cmpwi 1, 3, 8
  033d748  fmr 28, 4
  033d74c  cmpwi 6, 3, 6
  033d750  fmr 29, 5
  033d754  fmr 30, 6
  033d758  std 29, 112(1)
  033d75c  fmr 31, 7
  033d760  bt 2, 0x33d76c
  033d764  bt 26, 0x33d76c
  033d768  bf 6, 0x33d7f0
  033d76c  lwz 29, 120(30)
  033d770  addic 3, 30, 16
  033d774  fmr 2, 26
  033d778  fmr 3, 27
  033d77c  lfs 1, 0(31)
  033d780  fmr 4, 28
  033d784  addic 5, 29, 240
  033d788  bl 0x109b40
  033d78c  nop
  033d790  addic 3, 30, 20
  033d794  lfs 1, 4(31)
  033d798  addic 5, 29, 244
  033d79c  fmr 2, 26
  033d7a0  fmr 3, 27
  033d7a4  fmr 4, 28
  033d7a8  bl 0x109b40
  033d7ac  nop
  033d7b0  lfs 1, 8(31)
  033d7b4  addic 3, 30, 24
  033d7b8  fmr 2, 26
  033d7bc  addic 5, 29, 248
  033d7c0  fmr 3, 27
  033d7c4  fmr 4, 28
  033d7c8  bl 0x109b40
  033d7cc  nop
  033d7d0  addic 5, 29, 228
  033d7d4  fmr 1, 25
  033d7d8  ori 3, 30, 0
  033d7dc  fmr 2, 29
  033d7e0  fmr 3, 30
  033d7e4  fmr 4, 31
  033d7e8  bl 0xff2e8
  033d7ec  nop
  033d7f0  ld 0, 208(1)
  033d7f4  mtlr 0
  033d7f8  lfd 25, 136(1)
  033d7fc  lfd 26, 144(1)
  033d800  lfd 27, 152(1)
  033d804  lfd 28, 160(1)
  033d808  lfd 29, 168(1)
  033d80c  lfd 30, 176(1)
  033d810  lfd 31, 184(1)
  033d814  ld 29, 112(1)
  033d818  ld 30, 120(1)
  033d81c  ld 31, 128(1)
  033d820  addi 1, 1, 192
  033d824  blr

M309_0033d830:   # 0x33d830, 0x9c bytes
  033d830  stdu 1, -128(1)
  033d834  mflr 0
  033d838  std 0, 144(1)
  033d83c  std 31, 120(1)
  033d840  lbz 4, 32(3)
  033d844  lwz 31, 120(3)
  033d848  cmpwi 1, 4, 9
  033d84c  cmpwi 4, 0
  033d850  cror 2, 2, 6
  033d854  bt 2, 0x33d8b8
  033d858  lis 4, 165
  033d85c  lis 5, 52
  033d860  addic 6, 4, 7136
  033d864  lwz 4, 212(31)
  033d868  addi 5, 5, -10200
  033d86c  slwi 7, 4, 2
  033d870  addic 4, 31, 112
  033d874  extsw 7, 7
  033d878  lfs 1, 0(5)
  033d87c  lwzx 5, 6, 7
  033d880  li 6, 0
  033d884  li 7, 0
  033d888  addic 8, 5, 16
  033d88c  lwz 9, 0(5)
  033d890  extsw 9, 9
  033d894  bl 0x111ba0
  033d898  nop
  033d89c  lwz 3, 176(31)
  033d8a0  cmpwi 3, 0
  033d8a4  bf 2, 0x33d8b8
  033d8a8  lis 3, 151
  033d8ac  addic 3, 3, -25376
  033d8b0  lwz 3, 8320(3)
  033d8b4  stw 3, 176(31)
  033d8b8  ld 0, 144(1)
  033d8bc  mtlr 0
  033d8c0  ld 31, 120(1)
  033d8c4  addi 1, 1, 128
  033d8c8  blr

M31_0033d8d0:   # 0x33d8d0, 0x1d0 bytes
  033d8d0  stdu 1, -144(1)
  033d8d4  mflr 0
  033d8d8  std 0, 160(1)
  033d8dc  stfd 31, 136(1)
  033d8e0  std 31, 128(1)
  033d8e4  lbz 4, 32(3)
  033d8e8  std 30, 120(1)
  033d8ec  ori 31, 3, 0
  033d8f0  lwz 30, 120(3)
  033d8f4  cmpwi 1, 4, 9
  033d8f8  cmpwi 4, 0
  033d8fc  cror 2, 2, 6
  033d900  bt 2, 0x33da84
  033d904  lwz 8, 36(31)
  033d908  lis 4, 52
  033d90c  li 7, 0
  033d910  addi 6, 4, -10036
  033d914  ori 3, 31, 0
  033d918  lis 4, 51
  033d91c  lfs 1, 36(8)
  033d920  li 5, 0
  033d924  stfs 1, 44(31)
  033d928  lfs 31, 0(6)
  033d92c  stw 7, 116(1)
  033d930  bl 0x10675c
  033d934  nop
  033d938  cmpwi 3, 0
  033d93c  bt 2, 0x33d970
  033d940  lwz 4, 32(3)
  033d944  cmpwi 4, 0
  033d948  bt 2, 0x33d970
  033d94c  lhz 4, 166(4)
  033d950  lhz 5, 166(31)
  033d954  extsh 6, 4
  033d958  cmpwi 1, 4, 880
  033d95c  extsh 4, 5
  033d960  cmpw 6, 4
  033d964  bt 2, 0x33d96c
  033d968  bf 6, 0x33d970
  033d96c  li 3, 0
  033d970  ori 4, 3, 0
  033d974  addic 5, 30, 32
  033d978  addic 7, 1, 112
  033d97c  li 9, 0
  033d980  addic 8, 1, 116
  033d984  ori 3, 31, 0
  033d988  li 6, 0
  033d98c  li 10, 4
  033d990  bl 0x106840
  033d994  nop
  033d998  lwz 4, 112(1)
  033d99c  cmpwi 4, 1
  033d9a0  bt 2, 0x33da6c
  033d9a4  lbz 4, 32(31)
  033d9a8  cmpwi 4, 9
  033d9ac  bt 2, 0x33da6c
  033d9b0  lfs 1, 32(30)
  033d9b4  lfs 2, 116(1)
  033d9b8  lhz 4, 52(31)
  033d9bc  fsubs 1, 1, 2
  033d9c0  fcmpu 0, 1, 31
  033d9c4  stfs 1, 32(30)
  033d9c8  cror 6, 0, 2
  033d9cc  bt 6, 0x33da28
  033d9d0  cmpwi 3, 2
  033d9d4  bt 1, 0x33d9ec
  033d9d8  cmpwi 3, -1
  033d9dc  bf 1, 0x33da5c
  033d9e0  cmpwi 3, 0
  033d9e4  bf 1, 0x33da5c
  033d9e8  b 0x33da28
  033d9ec  cmpwi 3, 10
  033d9f0  bt 1, 0x33da5c
  033d9f4  cmpwi 3, 8
  033d9f8  bt 1, 0x33da1c
  033d9fc  ori 3, 31, 0
  033da00  li 4, 2
  033da04  li 5, 0
  033da08  li 6, 5
  033da0c  bl 0xfddc0
  033da10  nop
  033da14  lis 3, 16352
  033da18  stw 3, 88(31)
  033da1c  li 3, 250
  033da20  stb 3, 103(30)
  033da24  b 0x33da5c
  033da28  li 3, 0
  033da2c  ori 6, 4, 0
  033da30  li 5, 9
  033da34  rlwimi 6, 3, 0, 19, 19
  033da38  li 7, 250
  033da3c  ori 3, 31, 0
  033da40  stb 5, 32(31)
  033da44  sth 6, 52(31)
  033da48  li 4, 0
  033da4c  li 5, -1
  033da50  stb 7, 103(30)
  033da54  bl 0xfd8d0
  033da58  nop
  033da5c  addic 4, 30, 96
  033da60  ori 3, 31, 0
  033da64  bl 0x10c808
  033da68  nop
  033da6c  li 5, 255
  033da70  addic 4, 30, 96
  033da74  ori 3, 31, 0
  033da78  stb 5, 164(31)
  033da7c  bl 0x10c9a0
  033da80  nop
  033da84  ld 0, 160(1)
  033da88  mtlr 0
  033da8c  lfd 31, 136(1)
  033da90  ld 30, 120(1)
  033da94  ld 31, 128(1)
  033da98  addi 1, 1, 144
  033da9c  blr

UpdateMoby_31:   # 0x33dad8, 0x1abc bytes
  033dad8  stdu 1, -592(1)
  033dadc  mflr 0
  033dae0  std 0, 608(1)
  033dae4  stfd 25, 536(1)
  033dae8  stfd 26, 544(1)
  033daec  stfd 27, 552(1)
  033daf0  stfd 28, 560(1)
  033daf4  stfd 29, 568(1)
  033daf8  stfd 30, 576(1)
  033dafc  stfd 31, 584(1)
  033db00  addi 0, 1, 432
  033db04  stvx 30, 0, 0
  033db08  addic 0, 0, 16
  033db0c  stvx 31, 0, 0
  033db10  std 31, 528(1)
  033db14  lbz 4, 112(3)
  033db18  std 29, 512(1)
  033db1c  ori 31, 3, 0
  033db20  lwz 29, 120(3)
  033db24  rlwinm 3, 4, 0, 30, 30
  033db28  std 30, 520(1)
  033db2c  std 28, 504(1)
  033db30  std 27, 496(1)
  033db34  std 26, 488(1)
  033db38  std 25, 480(1)
  033db3c  std 24, 472(1)
  033db40  std 23, 464(1)
  033db44  cmpwi 3, 0
  033db48  bt 2, 0x33db9c
  033db4c  lbz 3, 82(31)
  033db50  lbz 4, 83(31)
  033db54  cmpwi 1, 3, 0
  033db58  cmpw 3, 4
  033db5c  crorc 2, 6, 2
  033db60  bt 2, 0x33db9c
  033db64  cmpwi 3, 2
  033db68  bf 2, 0x33db88
  033db6c  ori 3, 31, 0
  033db70  li 4, 0
  033db74  li 5, 0
  033db78  li 6, 10
  033db7c  bl 0xfddc0
  033db80  nop
  033db84  b 0x33db9c
  033db88  ori 3, 31, 0
  033db8c  li 4, 0
  033db90  li 5, 0
  033db94  bl 0xfdcf0
  033db98  nop
  033db9c  ori 3, 31, 0
  033dba0  bl 0x33d8d0
  033dba4  lbz 3, 32(31)
  033dba8  lwz 30, 120(31)
  033dbac  cmpwi 3, 0
  033dbb0  bt 2, 0x33dc20
  033dbb4  cmpwi 3, 9
  033dbb8  bt 2, 0x33dc20
  033dbbc  lis 3, 165
  033dbc0  lwz 6, 212(30)
  033dbc4  lis 4, 52
  033dbc8  addic 5, 3, 7136
  033dbcc  slwi 6, 6, 2
  033dbd0  addi 3, 4, -9568
  033dbd4  extsw 7, 6
  033dbd8  addic 4, 30, 112
  033dbdc  li 6, 0
  033dbe0  lfs 1, 0(3)
  033dbe4  lwzx 5, 5, 7
  033dbe8  ori 3, 31, 0
  033dbec  li 7, 0
  033dbf0  addic 8, 5, 16
  033dbf4  lwz 9, 0(5)
  033dbf8  extsw 9, 9
  033dbfc  bl 0x111ba0
  033dc00  nop
  033dc04  lwz 3, 176(30)
  033dc08  cmpwi 3, 0
  033dc0c  bf 2, 0x33dc20
  033dc10  lis 3, 151
  033dc14  addic 3, 3, -25376
  033dc18  lwz 3, 8320(3)
  033dc1c  stw 3, 176(30)
  033dc20  lbz 3, 32(31)
  033dc24  lfs 31, 380(29)
  033dc28  lfs 30, 368(29)
  033dc2c  lfs 29, 372(29)
  033dc30  cmpwi 1, 3, 5
  033dc34  cmpwi 3, 4
  033dc38  lfs 28, 376(29)
  033dc3c  cror 2, 2, 6
  033dc40  lfs 27, 340(29)
  033dc44  lfs 26, 344(29)
  033dc48  lfs 25, 348(29)
  033dc4c  bt 2, 0x33dc60
  033dc50  cmpwi 3, 6
  033dc54  bt 2, 0x33dc60
  033dc58  cmpwi 3, 8
  033dc5c  bf 2, 0x33dce4
  033dc60  lwz 30, 120(31)
  033dc64  addic 3, 31, 16
  033dc68  fmr 2, 30
  033dc6c  fmr 3, 29
  033dc70  lfs 1, 384(29)
  033dc74  fmr 4, 28
  033dc78  addic 5, 30, 240
  033dc7c  bl 0x109b40
  033dc80  nop
  033dc84  addic 3, 31, 20
  033dc88  lfs 1, 388(29)
  033dc8c  addic 5, 30, 244
  033dc90  fmr 2, 30
  033dc94  fmr 3, 29
  033dc98  fmr 4, 28
  033dc9c  bl 0x109b40
  033dca0  nop
  033dca4  lfs 1, 392(29)
  033dca8  addic 3, 31, 24
  033dcac  fmr 2, 30
  033dcb0  addic 5, 30, 248
  033dcb4  fmr 3, 29
  033dcb8  fmr 4, 28
  033dcbc  bl 0x109b40
  033dcc0  nop
  033dcc4  addic 5, 30, 228
  033dcc8  fmr 1, 31
  033dccc  ori 3, 31, 0
  033dcd0  fmr 2, 27
  033dcd4  fmr 3, 26
  033dcd8  fmr 4, 25
  033dcdc  bl 0xff2e8
  033dce0  nop
  033dce4  ori 3, 31, 0
  033dce8  bl 0x33d5c8
  033dcec  ori 3, 31, 0
  033dcf0  bl 0x33d2f8
  033dcf4  lbz 3, 49(31)
  033dcf8  cmpwi 3, 0
  033dcfc  bt 2, 0x33dd7c
  033dd00  lis 3, 149
  033dd04  lfs 1, 20(31)
  033dd08  addic 3, 3, 5056
  033dd0c  lfs 2, 16(31)
  033dd10  lfs 3, 324(3)
  033dd14  lfs 4, 320(3)
  033dd18  fsubs 1, 1, 3
  033dd1c  fsubs 2, 2, 4
  033dd20  lfs 3, 24(31)
  033dd24  lfs 4, 328(3)
  033dd28  fsubs 3, 3, 4
  033dd2c  lis 3, 52
  033dd30  fmuls 1, 1, 1
  033dd34  addi 3, 3, -9568
  033dd38  fmadds 1, 2, 2, 1
  033dd3c  lfs 2, 4(3)
  033dd40  fmadds 1, 3, 3, 1
  033dd44  fsqrts 1, 1
  033dd48  fcmpu 0, 1, 2
  033dd4c  cror 6, 1, 2
  033dd50  bt 6, 0x33dd7c
  033dd54  lbz 3, 32(31)
  033dd58  cmpwi 1, 3, 1
  033dd5c  cmpwi 3, 0
  033dd60  cror 2, 2, 6
  033dd64  bt 2, 0x33dd7c
  033dd68  cmpwi 3, 9
  033dd6c  bt 2, 0x33dd7c
  033dd70  ori 3, 31, 0
  033dd74  bl 0x106360
  033dd78  nop
  033dd7c  lbz 3, 32(31)
  033dd80  cmpwi 3, 4
  033dd84  cmpwi 1, 3, 1
  033dd88  cmpwi 6, 3, -1
  033dd8c  cmpwi 7, 3, 0
  033dd90  bt 1, 0x33ddb8
  033dd94  bt 5, 0x33dda4
  033dd98  bf 25, 0x33f4e4
  033dd9c  bf 29, 0x33dde0
  033dda0  b 0x33e284
  033dda4  cmpwi 3, 2
  033dda8  bf 1, 0x33e2c0
  033ddac  cmpwi 3, 3
  033ddb0  bf 1, 0x33e618
  033ddb4  b 0x33e754
  033ddb8  cmpwi 3, 7
  033ddbc  bt 1, 0x33ddd4
  033ddc0  cmpwi 3, 5
  033ddc4  bf 1, 0x33ecdc
  033ddc8  cmpwi 3, 6
  033ddcc  bf 1, 0x33f014
  033ddd0  b 0x33e9b8
  033ddd4  cmpwi 3, 9
  033ddd8  bt 2, 0x33f370
  033dddc  b 0x33f4e4
  033dde0  lwz 3, 208(29)
  033dde4  cmpwi 3, -1
  033dde8  bf 2, 0x33de14
  033ddec  lis 3, 101
  033ddf0  lhz 4, 178(31)
  033ddf4  addic 3, 3, 25148
  033ddf8  extsh 4, 4
  033ddfc  bl 0x5cd098
  033de00  nop
  033de04  ori 3, 31, 0
  033de08  bl 0xefb38
  033de0c  nop
  033de10  b 0x33f534
  033de14  lis 4, 165
  033de18  slwi 5, 3, 2
  033de1c  addic 3, 4, 7136
  033de20  extsw 4, 5
  033de24  lwzx 4, 3, 4
  033de28  lwz 5, 0(4)
  033de2c  cmpwi 5, 0
  033de30  bf 2, 0x33de5c
  033de34  lis 3, 101
  033de38  lhz 4, 178(31)
  033de3c  addic 3, 3, 25188
  033de40  extsh 4, 4
  033de44  bl 0x5cd098
  033de48  nop
  033de4c  ori 3, 31, 0
  033de50  bl 0xefb38
  033de54  nop
  033de58  b 0x33f534
  033de5c  lwz 5, 212(29)
  033de60  cmpwi 5, -1
  033de64  bf 2, 0x33de90
  033de68  lis 3, 101
  033de6c  lhz 4, 178(31)
  033de70  addic 3, 3, 25252
  033de74  extsh 4, 4
  033de78  bl 0x5cd098
  033de7c  nop
  033de80  ori 3, 31, 0
  033de84  bl 0xefb38
  033de88  nop
  033de8c  b 0x33f534
  033de90  slwi 5, 5, 2
  033de94  extsw 5, 5
  033de98  lwzx 5, 3, 5
  033de9c  lwz 5, 0(5)
  033dea0  cmpwi 5, 0
  033dea4  bf 2, 0x33ded0
  033dea8  lis 3, 101
  033deac  lhz 4, 178(31)
  033deb0  addic 3, 3, 25292
  033deb4  extsh 4, 4
  033deb8  bl 0x5cd098
  033debc  nop
  033dec0  ori 3, 31, 0
  033dec4  bl 0xefb38
  033dec8  nop
  033decc  b 0x33f534
  033ded0  lwz 5, 216(29)
  033ded4  cmpwi 5, -1
  033ded8  bf 2, 0x33df04
  033dedc  lis 3, 101
  033dee0  lhz 4, 178(31)
  033dee4  addic 3, 3, 25356
  033dee8  extsh 4, 4
  033deec  bl 0x5cd098
  033def0  nop
  033def4  ori 3, 31, 0
  033def8  bl 0xefb38
  033defc  nop
  033df00  b 0x33f534
  033df04  slwi 5, 5, 2
  033df08  extsw 5, 5
  033df0c  lwzx 5, 3, 5
  033df10  lwz 5, 0(5)
  033df14  cmpwi 5, 0
  033df18  bf 2, 0x33df44
  033df1c  lis 3, 101
  033df20  lhz 4, 178(31)
  033df24  addic 3, 3, 25396
  033df28  extsh 4, 4
  033df2c  bl 0x5cd098
  033df30  nop
  033df34  ori 3, 31, 0
  033df38  bl 0xefb38
  033df3c  nop
  033df40  b 0x33f534
  033df44  lwz 5, 336(29)
  033df48  cmpwi 5, -1
  033df4c  bf 2, 0x33df78
  033df50  lis 3, 101
  033df54  lhz 4, 178(31)
  033df58  addic 3, 3, 25452
  033df5c  extsh 4, 4
  033df60  bl 0x5cd098
  033df64  nop
  033df68  ori 3, 31, 0
  033df6c  bl 0xefb38
  033df70  nop
  033df74  b 0x33f534
  033df78  slwi 5, 5, 2
  033df7c  extsw 5, 5
  033df80  lwzx 5, 3, 5
  033df84  lwz 5, 0(5)
  033df88  cmpwi 5, 0
  033df8c  bf 2, 0x33dfb8
  033df90  lis 3, 101
  033df94  lhz 4, 178(31)
  033df98  addic 3, 3, 25492
  033df9c  extsh 4, 4
  033dfa0  bl 0x5cd098
  033dfa4  nop
  033dfa8  ori 3, 31, 0
  033dfac  bl 0xefb38
  033dfb0  nop
  033dfb4  b 0x33f534
  033dfb8  lfs 1, 16(4)
  033dfbc  stfs 1, 16(31)
  033dfc0  lfs 2, 20(4)
  033dfc4  stfs 2, 20(31)
  033dfc8  lfs 3, 24(4)
  033dfcc  stfs 3, 24(31)
  033dfd0  lwz 5, 208(29)
  033dfd4  lfs 3, 28(4)
  033dfd8  slwi 4, 5, 2
  033dfdc  stfs 3, 28(31)
  033dfe0  extsw 4, 4
  033dfe4  lwzx 3, 3, 4
  033dfe8  lis 4, 115
  033dfec  lfs 3, 32(3)
  033dff0  lfs 4, 36(3)
  033dff4  fsubs 1, 3, 1
  033dff8  lis 3, 52
  033dffc  fsubs 2, 4, 2
  033e000  addi 3, 3, -9568
  033e004  addic 4, 4, 22784
  033e008  fabs 3, 1
  033e00c  fabs 5, 2
  033e010  stfs 1, 276(1)
  033e014  stfs 2, 280(1)
  033e018  fsubs 1, 3, 5
  033e01c  stfs 1, 284(1)
  033e020  lwz 5, 276(1)
  033e024  lfs 4, 8(3)
  033e028  lfs 1, 276(1)
  033e02c  lwz 3, 280(1)
  033e030  lfs 2, 280(1)
  033e034  lwz 6, 284(1)
  033e038  rlwinm 3, 3, 3, 29, 29
  033e03c  fabs 6, 2
  033e040  lfs 2, 284(1)
  033e044  fabs 1, 1
  033e048  rlwimi 3, 6, 2, 30, 30
  033e04c  fsub 7, 2, 4
  033e050  rlwimi 3, 5, 4, 28, 28
  033e054  fsub 8, 2, 4
  033e058  ori 5, 4, 0
  033e05c  rlwimi 5, 3, 2, 26, 28
  033e060  slwi 3, 3, 2
  033e064  clrldi 5, 5, 32
  033e068  fsel 5, 7, 1, 5
  033e06c  lfsx 1, 4, 3
  033e070  lfs 2, 4(5)
  033e074  fsel 3, 8, 6, 3
  033e078  fcmpu 0, 5, 4
  033e07c  bt 1, 0x33e084
  033e080  b 0x33e1a4
  033e084  fsubs 6, 3, 5
  033e088  fadds 3, 3, 5
  033e08c  addic 3, 1, 16
  033e090  li 7, 2
  033e094  addic 4, 3, 368
  033e098  addic 5, 3, 384
  033e09c  mtctr 7
  033e0a0  fdivs 3, 6, 3
  033e0a4  fmuls 5, 3, 3
  033e0a8  stfs 3, 396(1)
  033e0ac  stfs 3, 388(1)
  033e0b0  stfs 3, 392(1)
  033e0b4  stfs 3, 384(1)
  033e0b8  lfs 7, 396(1)
  033e0bc  lfs 8, 388(1)
  033e0c0  lfs 9, 392(1)
  033e0c4  fmuls 6, 5, 5
  033e0c8  fmuls 8, 8, 5
  033e0cc  fmuls 7, 7, 6
  033e0d0  fmuls 3, 6, 6
  033e0d4  fmuls 6, 9, 6
  033e0d8  stfs 8, 388(1)
  033e0dc  fmuls 5, 7, 5
  033e0e0  stfs 6, 392(1)
  033e0e4  stfs 5, 396(1)
  033e0e8  lfs 5, 368(3)
  033e0ec  fmuls 5, 5, 3
  033e0f0  stfs 5, 384(3)
  033e0f4  lfs 5, 4(4)
  033e0f8  addic 3, 3, 8
  033e0fc  addic 4, 4, 8
  033e100  fmuls 5, 5, 3
  033e104  stfs 5, 4(5)
  033e108  addic 5, 5, 8
  033e10c  bdnz 0x33e0e8
  033e110  li 5, 4
  033e114  ori 3, 1, 0
  033e118  mtctr 5
  033e11c  lis 4, 115
  033e120  addic 5, 3, 384
  033e124  addic 4, 4, 22752
  033e128  ori 6, 5, 0
  033e12c  lfs 3, 384(3)
  033e130  lfs 5, 0(4)
  033e134  fmuls 3, 3, 5
  033e138  lfs 5, 4(4)
  033e13c  addic 4, 4, 8
  033e140  stfs 3, 384(3)
  033e144  lfs 3, 4(5)
  033e148  addic 3, 3, 8
  033e14c  fmuls 3, 3, 5
  033e150  stfs 3, 4(5)
  033e154  addic 5, 5, 8
  033e158  bdnz 0x33e12c
  033e15c  ori 3, 1, 0
  033e160  mtctr 7
  033e164  lfs 3, 384(3)
  033e168  fadds 3, 4, 3
  033e16c  lfs 4, 4(6)
  033e170  addic 3, 3, 16
  033e174  lfs 5, 8(6)
  033e178  lfs 6, 12(6)
  033e17c  addic 6, 6, 16
  033e180  fadds 3, 3, 4
  033e184  fadds 4, 3, 5
  033e188  fadds 4, 4, 6
  033e18c  bdnz 0x33e164
  033e190  lis 3, 52
  033e194  addi 3, 3, -9568
  033e198  lfs 3, 12(3)
  033e19c  fadds 4, 4, 3
  033e1a0  fmadds 4, 4, 1, 2
  033e1a4  lis 4, 129
  033e1a8  stfs 4, 72(31)
  033e1ac  li 28, 0
  033e1b0  ori 3, 31, 0
  033e1b4  lfs 1, 7800(4)
  033e1b8  stw 28, 356(29)
  033e1bc  stfs 1, 352(29)
  033e1c0  stw 28, 360(29)
  033e1c4  stw 28, 364(29)
  033e1c8  bl 0x33d150
  033e1cc  li 3, -1
  033e1d0  lhz 4, 52(31)
  033e1d4  li 5, 128
  033e1d8  li 6, 1
  033e1dc  lwz 30, 120(31)
  033e1e0  ori 4, 4, 65
  033e1e4  stw 3, 264(29)
  033e1e8  stb 5, 48(31)
  033e1ec  stb 6, 32(31)
  033e1f0  sth 4, 52(31)
  033e1f4  stw 28, 148(31)
  033e1f8  lwz 3, 264(30)
  033e1fc  cmpwi 3, -1
  033e200  bt 2, 0x33e244
  033e204  sldi 4, 3, 7
  033e208  sldi 6, 3, 4
  033e20c  lis 5, 150
  033e210  subc 4, 4, 6
  033e214  addic 5, 5, 14176
  033e218  extsw 4, 4
  033e21c  addc 4, 5, 4
  033e220  lwz 5, 136(4)
  033e224  cmpw 5, 31
  033e228  bf 2, 0x33e244
  033e22c  lbz 4, 116(4)
  033e230  cmpwi 4, 0
  033e234  bt 2, 0x33e244
  033e238  extsw 3, 3
  033e23c  bl 0x15cdb0
  033e240  nop
  033e244  li 6, -1
  033e248  addic 28, 29, 272
  033e24c  li 4, 0
  033e250  ori 3, 28, 0
  033e254  li 5, 64
  033e258  stw 6, 264(30)
  033e25c  bl 0x5001fc
  033e260  nop
  033e264  ori 3, 31, 0
  033e268  li 4, 0
  033e26c  ori 5, 28, 0
  033e270  bl 0xf0ea8
  033e274  nop
  033e278  li 3, 32
  033e27c  stb 3, 127(31)
  033e280  b 0x33f4e4
  033e284  lwz 3, 180(29)
  033e288  cmpwi 3, 2
  033e28c  bt 2, 0x33f4e4
  033e290  li 5, -66
  033e294  lhz 6, 52(31)
  033e298  li 4, 2
  033e29c  lwz 7, 36(31)
  033e2a0  and 5, 6, 5
  033e2a4  ori 3, 31, 0
  033e2a8  stb 4, 32(31)
  033e2ac  sth 5, 52(31)
  033e2b0  lwz 4, 16(7)
  033e2b4  stw 4, 148(31)
  033e2b8  bl 0x33ced8
  033e2bc  b 0x33f4e4
  033e2c0  lwz 3, 268(29)
  033e2c4  cmpwi 3, 0
  033e2c8  bf 2, 0x33e2e8
  033e2cc  lwz 4, 208(29)
  033e2d0  lis 3, 165
  033e2d4  slwi 4, 4, 2
  033e2d8  addic 3, 3, 7136
  033e2dc  extsw 4, 4
  033e2e0  lwzx 30, 3, 4
  033e2e4  b 0x33e300
  033e2e8  lwz 4, 336(29)
  033e2ec  lis 3, 165
  033e2f0  slwi 4, 4, 2
  033e2f4  addic 3, 3, 7136
  033e2f8  extsw 4, 4
  033e2fc  lwzx 30, 3, 4
  033e300  lwz 3, 180(29)
  033e304  cmpwi 3, 2
  033e308  bf 2, 0x33e318
  033e30c  li 3, 3
  033e310  stb 3, 32(31)
  033e314  b 0x33f4e4
  033e318  lis 3, 114
  033e31c  lis 4, 129
  033e320  lis 28, 268
  033e324  lis 27, 129
  033e328  lis 26, 129
  033e32c  lfs 1, -3064(3)
  033e330  lis 25, 129
  033e334  lfs 2, 7812(4)
  033e338  lis 24, 129
  033e33c  lfs 4, -12256(28)
  033e340  lis 23, 268
  033e344  fmuls 1, 1, 2
  033e348  addic 5, 29, 232
  033e34c  lfs 2, 7852(27)
  033e350  addic 6, 29, 236
  033e354  lfs 5, 7860(26)
  033e358  addic 8, 29, 240
  033e35c  lfs 3, 7856(25)
  033e360  addic 9, 29, 228
  033e364  lfs 6, 7864(24)
  033e368  ori 3, 31, 0
  033e36c  lfs 7, -12252(23)
  033e370  ori 4, 30, 0
  033e374  bl 0x33cad0
  033e378  lfs 5, 7852(27)
  033e37c  cmpwi 3, 0
  033e380  lfs 6, 7856(25)
  033e384  lfs 7, -12256(28)
  033e388  lfs 8, 7860(26)
  033e38c  lfs 9, 7864(24)
  033e390  lfs 10, -12252(23)
  033e394  bt 2, 0x33f4e4
  033e398  lwz 4, 0(30)
  033e39c  lis 3, 165
  033e3a0  lwz 5, 220(29)
  033e3a4  slwi 4, 4, 4
  033e3a8  addc 4, 30, 4
  033e3ac  addic 30, 3, 7136
  033e3b0  clrldi 4, 4, 32
  033e3b4  slwi 3, 5, 2
  033e3b8  extsw 3, 3
  033e3bc  lfs 1, 0(4)
  033e3c0  stfs 1, 384(29)
  033e3c4  lfs 1, 4(4)
  033e3c8  stfs 1, 388(29)
  033e3cc  lfs 1, 8(4)
  033e3d0  lwz 5, 268(29)
  033e3d4  stfs 1, 392(29)
  033e3d8  lfs 1, 12(4)
  033e3dc  cmpwi 5, 0
  033e3e0  lwzx 30, 30, 3
  033e3e4  stfs 1, 396(29)
  033e3e8  bf 2, 0x33e410
  033e3ec  lwz 3, 0(30)
  033e3f0  lfs 1, 16(30)
  033e3f4  slwi 3, 3, 4
  033e3f8  lfs 2, 20(30)
  033e3fc  addc 3, 30, 3
  033e400  clrldi 3, 3, 32
  033e404  lfs 3, 0(3)
  033e408  lfs 4, 4(3)
  033e40c  b 0x33e430
  033e410  lwz 3, 0(30)
  033e414  lfs 3, 16(30)
  033e418  slwi 3, 3, 4
  033e41c  lfs 4, 20(30)
  033e420  addc 3, 30, 3
  033e424  clrldi 3, 3, 32
  033e428  lfs 1, 0(3)
  033e42c  lfs 2, 4(3)
  033e430  fsubs 1, 3, 1
  033e434  lis 3, 52
  033e438  fsubs 2, 4, 2
  033e43c  addi 3, 3, -9568
  033e440  lis 4, 115
  033e444  addic 4, 4, 22784
  033e448  fabs 4, 1
  033e44c  fabs 11, 2
  033e450  stfs 1, 264(1)
  033e454  stfs 2, 268(1)
  033e458  fsubs 1, 4, 11
  033e45c  stfs 1, 272(1)
  033e460  lwz 5, 264(1)
  033e464  lfs 3, 8(3)
  033e468  lfs 1, 264(1)
  033e46c  lwz 3, 268(1)
  033e470  lfs 2, 268(1)
  033e474  fabs 1, 1
  033e478  lwz 6, 272(1)
  033e47c  rlwinm 3, 3, 3, 29, 29
  033e480  fabs 12, 2
  033e484  lfs 2, 272(1)
  033e488  rlwimi 3, 6, 2, 30, 30
  033e48c  fsub 13, 2, 3
  033e490  rlwimi 3, 5, 4, 28, 28
  033e494  fsub 0, 2, 3
  033e498  ori 5, 4, 0
  033e49c  rlwimi 5, 3, 2, 26, 28
  033e4a0  slwi 3, 3, 2
  033e4a4  clrldi 5, 5, 32
  033e4a8  fsel 11, 13, 1, 11
  033e4ac  lfsx 1, 4, 3
  033e4b0  lfs 2, 4(5)
  033e4b4  fsel 4, 0, 12, 4
  033e4b8  fcmpu 0, 11, 3
  033e4bc  bt 1, 0x33e4c4
  033e4c0  b 0x33e5e4
  033e4c4  fsubs 12, 4, 11
  033e4c8  fadds 4, 4, 11
  033e4cc  addic 3, 1, 16
  033e4d0  li 7, 2
  033e4d4  addic 5, 3, 352
  033e4d8  addic 4, 3, 336
  033e4dc  mtctr 7
  033e4e0  fdivs 4, 12, 4
  033e4e4  fmuls 11, 4, 4
  033e4e8  stfs 4, 364(1)
  033e4ec  stfs 4, 356(1)
  033e4f0  stfs 4, 360(1)
  033e4f4  stfs 4, 352(1)
  033e4f8  lfs 13, 364(1)
  033e4fc  lfs 0, 356(1)
  033e500  lfs 31, 360(1)
  033e504  fmuls 12, 11, 11
  033e508  fmuls 0, 0, 11
  033e50c  fmuls 13, 13, 12
  033e510  fmuls 4, 12, 12
  033e514  fmuls 12, 31, 12
  033e518  stfs 0, 356(1)
  033e51c  fmuls 11, 13, 11
  033e520  stfs 12, 360(1)
  033e524  stfs 11, 364(1)
  033e528  lfs 11, 336(3)
  033e52c  fmuls 11, 11, 4
  033e530  stfs 11, 352(3)
  033e534  lfs 11, 4(4)
  033e538  addic 4, 4, 8
  033e53c  fmuls 11, 11, 4
  033e540  addic 3, 3, 8
  033e544  stfs 11, 4(5)
  033e548  addic 5, 5, 8
  033e54c  bdnz 0x33e528
  033e550  li 5, 4
  033e554  ori 3, 1, 0
  033e558  mtctr 5
  033e55c  lis 4, 115
  033e560  addic 5, 3, 352
  033e564  addic 4, 4, 22752
  033e568  ori 6, 5, 0
  033e56c  lfs 4, 352(3)
  033e570  lfs 11, 0(4)
  033e574  fmuls 4, 4, 11
  033e578  lfs 11, 4(4)
  033e57c  addic 4, 4, 8
  033e580  stfs 4, 352(3)
  033e584  lfs 4, 4(5)
  033e588  addic 3, 3, 8
  033e58c  fmuls 4, 4, 11
  033e590  stfs 4, 4(5)
  033e594  addic 5, 5, 8
  033e598  bdnz 0x33e56c
  033e59c  ori 3, 1, 0
  033e5a0  mtctr 7
  033e5a4  lfs 4, 352(3)
  033e5a8  fadds 3, 3, 4
  033e5ac  addic 3, 3, 16
  033e5b0  lfs 4, 4(6)
  033e5b4  lfs 11, 8(6)
  033e5b8  lfs 12, 12(6)
  033e5bc  addic 6, 6, 16
  033e5c0  fadds 3, 3, 4
  033e5c4  fadds 3, 3, 11
  033e5c8  fadds 3, 3, 12
  033e5cc  bdnz 0x33e5a4
  033e5d0  lis 3, 52
  033e5d4  addi 3, 3, -9568
  033e5d8  lfs 4, 12(3)
  033e5dc  fadds 3, 3, 4
  033e5e0  fmadds 3, 3, 1, 2
  033e5e4  stfs 3, 380(29)
  033e5e8  stfs 5, 368(29)
  033e5ec  li 3, 4
  033e5f0  stfs 6, 372(29)
  033e5f4  li 4, 0
  033e5f8  stfs 7, 376(29)
  033e5fc  stfs 8, 340(29)
  033e600  stfs 9, 344(29)
  033e604  stfs 10, 348(29)
  033e608  stb 3, 32(31)
  033e60c  stw 4, 260(29)
  033e610  sth 4, 258(29)
  033e614  b 0x33f4e4
  033e618  lwz 3, 268(29)
  033e61c  cmpwi 3, 0
  033e620  bf 2, 0x33e640
  033e624  lwz 4, 208(29)
  033e628  lis 3, 165
  033e62c  slwi 4, 4, 2
  033e630  addic 3, 3, 7136
  033e634  extsw 4, 4
  033e638  lwzx 3, 3, 4
  033e63c  b 0x33e658
  033e640  lwz 4, 336(29)
  033e644  lis 3, 165
  033e648  slwi 4, 4, 2
  033e64c  addic 3, 3, 7136
  033e650  extsw 4, 4
  033e654  lwzx 3, 3, 4
  033e658  lwz 4, 180(29)
  033e65c  cmpwi 4, 2
  033e660  bt 2, 0x33e670
  033e664  li 3, 2
  033e668  stb 3, 32(31)
  033e66c  b 0x33f4e4
  033e670  ori 4, 3, 0
  033e674  lis 3, 114
  033e678  lis 6, 129
  033e67c  lis 7, 129
  033e680  lis 8, 268
  033e684  lis 10, 129
  033e688  lfs 1, -3064(3)
  033e68c  lis 11, 268
  033e690  lfs 2, 7820(6)
  033e694  lis 3, 129
  033e698  addic 5, 29, 232
  033e69c  fmuls 1, 1, 2
  033e6a0  lfs 2, 7868(7)
  033e6a4  addic 6, 29, 236
  033e6a8  lis 7, 129
  033e6ac  lfs 4, -12256(8)
  033e6b0  lfs 3, 7856(3)
  033e6b4  addic 8, 29, 240
  033e6b8  ori 3, 31, 0
  033e6bc  addic 9, 29, 228
  033e6c0  lfs 5, 7872(7)
  033e6c4  lfs 6, 7864(10)
  033e6c8  lfs 7, -12252(11)
  033e6cc  fneg 1, 1
  033e6d0  bl 0x33cad0
  033e6d4  cmpwi 3, 0
  033e6d8  bt 2, 0x33f4e4
  033e6dc  li 3, 1
  033e6e0  lhz 5, 52(31)
  033e6e4  lwz 30, 120(31)
  033e6e8  li 4, 0
  033e6ec  stb 3, 32(31)
  033e6f0  ori 3, 5, 65
  033e6f4  stw 4, 148(31)
  033e6f8  sth 3, 52(31)
  033e6fc  lwz 3, 264(30)
  033e700  cmpwi 3, -1
  033e704  bt 2, 0x33e748
  033e708  sldi 4, 3, 7
  033e70c  sldi 6, 3, 4
  033e710  lis 5, 150
  033e714  subc 4, 4, 6
  033e718  addic 5, 5, 14176
  033e71c  extsw 4, 4
  033e720  addc 4, 5, 4
  033e724  lwz 5, 136(4)
  033e728  cmpw 5, 31
  033e72c  bf 2, 0x33e748
  033e730  lbz 4, 116(4)
  033e734  cmpwi 4, 0
  033e738  bt 2, 0x33e748
  033e73c  extsw 3, 3
  033e740  bl 0x15cdb0
  033e744  nop
  033e748  li 3, -1
  033e74c  stw 3, 264(30)
  033e750  b 0x33f4e4
  033e754  lis 3, 129
  033e758  lis 4, 52
  033e75c  addi 30, 4, -9568
  033e760  lwz 3, 7832(3)
  033e764  extsw 3, 3
  033e768  std 3, 416(1)
  033e76c  lis 3, 114
  033e770  lfs 1, 16(30)
  033e774  lfs 2, -3056(3)
  033e778  lfd 3, 416(1)
  033e77c  fcfid 3, 3
  033e780  frsp 3, 3
  033e784  fadds 1, 3, 1
  033e788  fmuls 1, 2, 1
  033e78c  fctiwz 1, 1
  033e790  stfd 1, 416(1)
  033e794  lwz 3, 420(1)
  033e798  extsw 3, 3
  033e79c  bl 0x502730
  033e7a0  nop
  033e7a4  lhz 3, 258(29)
  033e7a8  extsh 3, 3
  033e7ac  extsw 3, 3
  033e7b0  std 3, 416(1)
  033e7b4  lfs 31, 8(30)
  033e7b8  lfs 2, 260(29)
  033e7bc  lfd 3, 416(1)
  033e7c0  fcfid 3, 3
  033e7c4  frsp 3, 3
  033e7c8  fdivs 3, 3, 1
  033e7cc  fmr 1, 31
  033e7d0  bl 0xfecf0
  033e7d4  nop
  033e7d8  li 4, 2
  033e7dc  addic 3, 29, 288
  033e7e0  bl 0x501980
  033e7e4  nop
  033e7e8  lwz 4, 176(29)
  033e7ec  lfs 1, 20(31)
  033e7f0  lfs 2, 16(31)
  033e7f4  lfs 3, 20(4)
  033e7f8  lfs 4, 16(4)
  033e7fc  fsubs 1, 1, 3
  033e800  fsubs 2, 2, 4
  033e804  lis 3, 129
  033e808  fmuls 1, 1, 1
  033e80c  fmadds 1, 2, 2, 1
  033e810  lfs 2, 7848(3)
  033e814  fsqrts 1, 1
  033e818  fcmpu 0, 1, 2
  033e81c  cror 6, 1, 2
  033e820  bt 6, 0x33e89c
  033e824  lwz 3, 268(29)
  033e828  cmpwi 3, 0
  033e82c  bf 2, 0x33e83c
  033e830  li 3, 0
  033e834  stw 3, 232(29)
  033e838  b 0x33e874
  033e83c  lwz 4, 220(29)
  033e840  lis 3, 165
  033e844  slwi 4, 4, 2
  033e848  addic 3, 3, 7136
  033e84c  extsw 4, 4
  033e850  lwzx 5, 3, 4
  033e854  lwz 5, 0(5)
  033e858  addic 5, 5, -2
  033e85c  sldi 6, 5, 4
  033e860  stw 5, 232(29)
  033e864  lwzx 3, 3, 4
  033e868  addc 3, 3, 6
  033e86c  clrldi 3, 3, 32
  033e870  lfs 31, 28(3)
  033e874  li 3, 7
  033e878  stfs 31, 236(29)
  033e87c  li 4, 0
  033e880  stb 3, 32(31)
  033e884  stw 4, 228(29)
  033e888  stw 4, 252(29)
  033e88c  stw 4, 248(29)
  033e890  stw 4, 244(29)
  033e894  stw 4, 240(29)
  033e898  b 0x33f4e4
  033e89c  lwz 3, 180(29)
  033e8a0  cmpwi 3, 2
  033e8a4  bf 2, 0x33e930
  033e8a8  li 4, 3
  033e8ac  lwz 3, 120(31)
  033e8b0  stb 4, 32(31)
  033e8b4  lwz 4, 268(3)
  033e8b8  cmpwi 4, 0
  033e8bc  bf 2, 0x33e8dc
  033e8c0  lwz 5, 208(3)
  033e8c4  lis 4, 165
  033e8c8  slwi 5, 5, 2
  033e8cc  addic 4, 4, 7136
  033e8d0  extsw 5, 5
  033e8d4  lwzx 4, 4, 5
  033e8d8  b 0x33e8f4
  033e8dc  lwz 5, 336(3)
  033e8e0  lis 4, 165
  033e8e4  slwi 5, 5, 2
  033e8e8  addic 4, 4, 7136
  033e8ec  extsw 5, 5
  033e8f0  lwzx 4, 4, 5
  033e8f4  lwz 6, 0(4)
  033e8f8  li 5, 0
  033e8fc  addic 6, 6, -2
  033e900  sldi 7, 6, 4
  033e904  addc 4, 4, 7
  033e908  stw 6, 232(3)
  033e90c  clrldi 4, 4, 32
  033e910  lfs 1, 28(4)
  033e914  stw 5, 228(3)
  033e918  stfs 1, 236(3)
  033e91c  stw 5, 252(3)
  033e920  stw 5, 248(3)
  033e924  stw 5, 244(3)
  033e928  stw 5, 240(3)
  033e92c  b 0x33f4e4
  033e930  addic 3, 29, 258
  033e934  bl 0x4fffb4
  033e938  nop
  033e93c  cmpwi 3, 0
  033e940  bt 2, 0x33f4e4
  033e944  lbz 3, 83(31)
  033e948  cmpwi 3, 2
  033e94c  bt 2, 0x33f4e4
  033e950  li 3, 5
  033e954  lis 4, 129
  033e958  vspltisw 4, -1
  033e95c  li 5, 7828
  033e960  lis 6, 52
  033e964  stb 3, 32(31)
  033e968  li 7, 16
  033e96c  addi 3, 6, -9568
  033e970  vslw 4, 4, 4
  033e974  lvlx 2, 5, 4
  033e978  lis 4, 114
  033e97c  vcfsx 2, 2, 0
  033e980  lvlx 3, 7, 3
  033e984  li 3, -3056
  033e988  vspltw 3, 3, 0
  033e98c  lvlx 5, 3, 4
  033e990  li 3, 258
  033e994  li 4, 0
  033e998  vaddfp 2, 2, 3
  033e99c  vmaddfp 2, 5, 2, 4
  033e9a0  vctsxs 2, 2, 0
  033e9a4  vsplth 2, 2, 1
  033e9a8  stvehx 2, 3, 29
  033e9ac  sth 4, 256(29)
  033e9b0  stw 4, 260(29)
  033e9b4  b 0x33f4e4
  033e9b8  lis 3, 114
  033e9bc  lis 4, 129
  033e9c0  lfs 1, -3064(3)
  033e9c4  lfs 2, 7816(4)
  033e9c8  lwz 3, 268(29)
  033e9cc  fmuls 1, 1, 2
  033e9d0  cmpwi 3, 1
  033e9d4  bf 2, 0x33e9dc
  033e9d8  fneg 1, 1
  033e9dc  lwz 5, 220(29)
  033e9e0  lis 6, 129
  033e9e4  lis 30, 165
  033e9e8  lis 3, 129
  033e9ec  slwi 5, 5, 2
  033e9f0  lis 4, 129
  033e9f4  addic 30, 30, 7136
  033e9f8  lfs 2, 7868(6)
  033e9fc  extsw 8, 5
  033ea00  lis 11, 268
  033ea04  lis 7, 129
  033ea08  lfs 3, 7856(3)
  033ea0c  lis 10, 268
  033ea10  lfs 5, 7872(4)
  033ea14  ori 3, 31, 0
  033ea18  lwzx 4, 30, 8
  033ea1c  lfs 4, -12256(11)
  033ea20  addic 5, 29, 232
  033ea24  lfs 6, 7864(7)
  033ea28  addic 6, 29, 236
  033ea2c  addic 8, 29, 240
  033ea30  lfs 7, -12252(10)
  033ea34  addic 9, 29, 228
  033ea38  bl 0x33cad0
  033ea3c  cmpwi 3, 0
  033ea40  bt 2, 0x33f4e4
  033ea44  li 3, 4
  033ea48  lis 4, 129
  033ea4c  lis 7, 268
  033ea50  lis 5, 129
  033ea54  stb 3, 32(31)
  033ea58  lwz 6, 268(29)
  033ea5c  lis 3, 129
  033ea60  lwz 8, 220(29)
  033ea64  lis 10, 268
  033ea68  cntlzw 9, 6
  033ea6c  lfs 7, 7868(4)
  033ea70  slwi 8, 8, 2
  033ea74  rlwinm 9, 9, 27, 31, 31
  033ea78  extsw 8, 8
  033ea7c  lis 4, 129
  033ea80  cmpwi 6, 0
  033ea84  stw 9, 268(29)
  033ea88  lfs 8, 7856(3)
  033ea8c  lwzx 30, 30, 8
  033ea90  lfs 9, -12256(7)
  033ea94  lfs 10, 7872(4)
  033ea98  lfs 11, 7864(5)
  033ea9c  lfs 12, -12252(10)
  033eaa0  bt 2, 0x33ead0
  033eaa4  lwz 3, 0(30)
  033eaa8  lfs 1, 16(30)
  033eaac  slwi 3, 3, 4
  033eab0  lfs 2, 20(30)
  033eab4  addc 3, 30, 3
  033eab8  lfs 3, 24(30)
  033eabc  clrldi 3, 3, 32
  033eac0  lfs 4, 28(30)
  033eac4  lfs 5, 0(3)
  033eac8  lfs 6, 4(3)
  033eacc  b 0x33eaf8
  033ead0  lwz 3, 0(30)
  033ead4  lfs 5, 16(30)
  033ead8  slwi 3, 3, 4
  033eadc  lfs 6, 20(30)
  033eae0  addc 3, 30, 3
  033eae4  clrldi 3, 3, 32
  033eae8  lfs 1, 0(3)
  033eaec  lfs 2, 4(3)
  033eaf0  lfs 3, 8(3)
  033eaf4  lfs 4, 12(3)
  033eaf8  fsubs 5, 5, 1
  033eafc  stfs 7, 368(29)
  033eb00  fsubs 6, 6, 2
  033eb04  stfs 8, 372(29)
  033eb08  stfs 9, 376(29)
  033eb0c  lis 3, 52
  033eb10  stfs 10, 340(29)
  033eb14  stfs 11, 344(29)
  033eb18  stfs 12, 348(29)
  033eb1c  addi 3, 3, -9568
  033eb20  lis 4, 115
  033eb24  addic 4, 4, 22784
  033eb28  fabs 8, 5
  033eb2c  fabs 9, 6
  033eb30  stfs 5, 252(1)
  033eb34  stfs 6, 256(1)
  033eb38  fsubs 5, 8, 9
  033eb3c  stfs 5, 260(1)
  033eb40  lfs 7, 8(3)
  033eb44  lwz 3, 252(1)
  033eb48  lfs 5, 252(1)
  033eb4c  lwz 5, 256(1)
  033eb50  lfs 6, 256(1)
  033eb54  fabs 5, 5
  033eb58  lwz 6, 260(1)
  033eb5c  rlwinm 5, 5, 3, 29, 29
  033eb60  fabs 10, 6
  033eb64  lfs 6, 260(1)
  033eb68  rlwimi 5, 6, 2, 30, 30
  033eb6c  fsub 11, 6, 7
  033eb70  rlwimi 5, 3, 4, 28, 28
  033eb74  fsub 12, 6, 7
  033eb78  ori 3, 4, 0
  033eb7c  rlwimi 3, 5, 2, 26, 28
  033eb80  slwi 5, 5, 2
  033eb84  clrldi 3, 3, 32
  033eb88  fsel 9, 11, 5, 9
  033eb8c  lfsx 5, 4, 5
  033eb90  lfs 6, 4(3)
  033eb94  fsel 8, 12, 10, 8
  033eb98  fcmpu 0, 9, 7
  033eb9c  bt 1, 0x33eba4
  033eba0  b 0x33ecc4
  033eba4  fsubs 10, 8, 9
  033eba8  fadds 8, 8, 9
  033ebac  addic 3, 1, 16
  033ebb0  li 7, 2
  033ebb4  addic 5, 3, 320
  033ebb8  addic 4, 3, 304
  033ebbc  mtctr 7
  033ebc0  fdivs 8, 10, 8
  033ebc4  fmuls 9, 8, 8
  033ebc8  stfs 8, 332(1)
  033ebcc  stfs 8, 324(1)
  033ebd0  stfs 8, 328(1)
  033ebd4  stfs 8, 320(1)
  033ebd8  lfs 11, 332(1)
  033ebdc  lfs 12, 324(1)
  033ebe0  lfs 13, 328(1)
  033ebe4  fmuls 10, 9, 9
  033ebe8  fmuls 12, 12, 9
  033ebec  fmuls 11, 11, 10
  033ebf0  fmuls 8, 10, 10
  033ebf4  fmuls 10, 13, 10
  033ebf8  stfs 12, 324(1)
  033ebfc  fmuls 9, 11, 9
  033ec00  stfs 10, 328(1)
  033ec04  stfs 9, 332(1)
  033ec08  lfs 9, 304(3)
  033ec0c  fmuls 9, 9, 8
  033ec10  stfs 9, 320(3)
  033ec14  lfs 9, 4(4)
  033ec18  addic 4, 4, 8
  033ec1c  fmuls 9, 9, 8
  033ec20  addic 3, 3, 8
  033ec24  stfs 9, 4(5)
  033ec28  addic 5, 5, 8
  033ec2c  bdnz 0x33ec08
  033ec30  li 5, 4
  033ec34  ori 3, 1, 0
  033ec38  mtctr 5
  033ec3c  lis 4, 115
  033ec40  addic 5, 3, 320
  033ec44  addic 4, 4, 22752
  033ec48  ori 6, 5, 0
  033ec4c  lfs 8, 320(3)
  033ec50  lfs 9, 0(4)
  033ec54  fmuls 8, 8, 9
  033ec58  lfs 9, 4(4)
  033ec5c  addic 4, 4, 8
  033ec60  stfs 8, 320(3)
  033ec64  lfs 8, 4(5)
  033ec68  addic 3, 3, 8
  033ec6c  fmuls 8, 8, 9
  033ec70  stfs 8, 4(5)
  033ec74  addic 5, 5, 8
  033ec78  bdnz 0x33ec4c
  033ec7c  ori 3, 1, 0
  033ec80  mtctr 7
  033ec84  lfs 8, 320(3)
  033ec88  fadds 7, 7, 8
  033ec8c  addic 3, 3, 16
  033ec90  lfs 8, 4(6)
  033ec94  lfs 9, 8(6)
  033ec98  lfs 10, 12(6)
  033ec9c  addic 6, 6, 16
  033eca0  fadds 7, 7, 8
  033eca4  fadds 7, 7, 9
  033eca8  fadds 7, 7, 10
  033ecac  bdnz 0x33ec84
  033ecb0  lis 3, 52
  033ecb4  addi 3, 3, -9568
  033ecb8  lfs 8, 12(3)
  033ecbc  fadds 7, 7, 8
  033ecc0  fmadds 7, 7, 5, 6
  033ecc4  stfs 7, 380(29)
  033ecc8  stfs 1, 384(29)
  033eccc  stfs 2, 388(29)
  033ecd0  stfs 3, 392(29)
  033ecd4  stfs 4, 396(29)
  033ecd8  b 0x33f4e4
  033ecdc  lwz 4, 216(29)
  033ece0  lis 3, 165
  033ece4  lhz 5, 256(29)
  033ece8  slwi 4, 4, 2
  033ecec  lfs 1, 16(31)
  033ecf0  addic 3, 3, 7136
  033ecf4  lfs 2, 20(31)
  033ecf8  extsw 4, 4
  033ecfc  extsh 5, 5
  033ed00  sldi 5, 5, 4
  033ed04  lwzx 3, 3, 4
  033ed08  addc 3, 3, 5
  033ed0c  clrldi 3, 3, 32
  033ed10  lis 4, 115
  033ed14  lfs 3, 16(3)
  033ed18  lfs 4, 20(3)
  033ed1c  fsubs 1, 3, 1
  033ed20  fsubs 2, 4, 2
  033ed24  lis 3, 52
  033ed28  addi 3, 3, -9568
  033ed2c  addic 4, 4, 22784
  033ed30  fabs 3, 1
  033ed34  fabs 5, 2
  033ed38  stfs 1, 240(1)
  033ed3c  stfs 2, 244(1)
  033ed40  fsubs 1, 3, 5
  033ed44  stfs 1, 248(1)
  033ed48  lwz 5, 240(1)
  033ed4c  lfs 4, 8(3)
  033ed50  lfs 1, 240(1)
  033ed54  lwz 3, 244(1)
  033ed58  lfs 2, 244(1)
  033ed5c  fabs 1, 1
  033ed60  lwz 6, 248(1)
  033ed64  rlwinm 3, 3, 3, 29, 29
  033ed68  fabs 6, 2
  033ed6c  lfs 2, 248(1)
  033ed70  rlwimi 3, 6, 2, 30, 30
  033ed74  fsub 7, 2, 4
  033ed78  rlwimi 3, 5, 4, 28, 28
  033ed7c  fsub 8, 2, 4
  033ed80  ori 5, 4, 0
  033ed84  rlwimi 5, 3, 2, 26, 28
  033ed88  slwi 3, 3, 2
  033ed8c  clrldi 5, 5, 32
  033ed90  fsel 5, 7, 1, 5
  033ed94  lfsx 1, 4, 3
  033ed98  lfs 2, 4(5)
  033ed9c  fsel 3, 8, 6, 3
  033eda0  fcmpu 0, 5, 4
  033eda4  bt 1, 0x33edac
  033eda8  b 0x33eecc
  033edac  fsubs 6, 3, 5
  033edb0  fadds 3, 3, 5
  033edb4  addic 3, 1, 16
  033edb8  li 7, 2
  033edbc  addic 5, 3, 288
  033edc0  addic 4, 3, 272
  033edc4  mtctr 7
  033edc8  fdivs 3, 6, 3
  033edcc  fmuls 5, 3, 3
  033edd0  stfs 3, 300(1)
  033edd4  stfs 3, 292(1)
  033edd8  stfs 3, 296(1)
  033eddc  stfs 3, 288(1)
  033ede0  lfs 7, 300(1)
  033ede4  lfs 8, 292(1)
  033ede8  lfs 9, 296(1)
  033edec  fmuls 6, 5, 5
  033edf0  fmuls 8, 8, 5
  033edf4  fmuls 7, 7, 6
  033edf8  fmuls 3, 6, 6
  033edfc  fmuls 6, 9, 6
  033ee00  stfs 8, 292(1)
  033ee04  fmuls 5, 7, 5
  033ee08  stfs 6, 296(1)
  033ee0c  stfs 5, 300(1)
  033ee10  lfs 5, 272(3)
  033ee14  fmuls 5, 5, 3
  033ee18  stfs 5, 288(3)
  033ee1c  lfs 5, 4(4)
  033ee20  addic 4, 4, 8
  033ee24  fmuls 5, 5, 3
  033ee28  addic 3, 3, 8
  033ee2c  stfs 5, 4(5)
  033ee30  addic 5, 5, 8
  033ee34  bdnz 0x33ee10
  033ee38  li 5, 4
  033ee3c  ori 3, 1, 0
  033ee40  mtctr 5
  033ee44  lis 4, 115
  033ee48  addic 5, 3, 288
  033ee4c  addic 4, 4, 22752
  033ee50  ori 6, 5, 0
  033ee54  lfs 3, 288(3)
  033ee58  lfs 5, 0(4)
  033ee5c  fmuls 3, 3, 5
  033ee60  lfs 5, 4(4)
  033ee64  addic 4, 4, 8
  033ee68  stfs 3, 288(3)
  033ee6c  lfs 3, 4(5)
  033ee70  addic 3, 3, 8
  033ee74  fmuls 3, 3, 5
  033ee78  stfs 3, 4(5)
  033ee7c  addic 5, 5, 8
  033ee80  bdnz 0x33ee54
  033ee84  ori 3, 1, 0
  033ee88  mtctr 7
  033ee8c  lfs 3, 288(3)
  033ee90  fadds 3, 4, 3
  033ee94  addic 3, 3, 16
  033ee98  lfs 4, 4(6)
  033ee9c  lfs 5, 8(6)
  033eea0  lfs 6, 12(6)
  033eea4  addic 6, 6, 16
  033eea8  fadds 3, 3, 4
  033eeac  fadds 4, 3, 5
  033eeb0  fadds 4, 4, 6
  033eeb4  bdnz 0x33ee8c
  033eeb8  lis 3, 52
  033eebc  addi 3, 3, -9568
  033eec0  lfs 3, 12(3)
  033eec4  fadds 4, 4, 3
  033eec8  fmadds 4, 4, 1, 2
  033eecc  fmr 1, 4
  033eed0  lfs 2, 72(31)
  033eed4  bl 0x5025e0
  033eed8  nop
  033eedc  lis 3, 129
  033eee0  lis 4, 52
  033eee4  fmr 31, 1
  033eee8  lwz 3, 7828(3)
  033eeec  extsw 3, 3
  033eef0  std 3, 416(1)
  033eef4  addi 3, 4, -9568
  033eef8  lis 4, 114
  033eefc  lfs 2, 16(3)
  033ef00  lfs 3, -3056(4)
  033ef04  lfd 1, 416(1)
  033ef08  fcfid 1, 1
  033ef0c  frsp 1, 1
  033ef10  fadds 1, 1, 2
  033ef14  fmuls 1, 3, 1
  033ef18  fctiwz 1, 1
  033ef1c  stfd 1, 416(1)
  033ef20  lwz 3, 420(1)
  033ef24  extsw 3, 3
  033ef28  bl 0x502730
  033ef2c  nop
  033ef30  lhz 3, 258(29)
  033ef34  extsh 3, 3
  033ef38  extsw 3, 3
  033ef3c  std 3, 416(1)
  033ef40  lfs 2, 260(29)
  033ef44  lfd 3, 416(1)
  033ef48  fcfid 3, 3
  033ef4c  frsp 3, 3
  033ef50  fdivs 3, 3, 1
  033ef54  fmr 1, 31
  033ef58  bl 0xfecf0
  033ef5c  nop
  033ef60  addic 3, 29, 288
  033ef64  fmr 31, 1
  033ef68  li 4, 2
  033ef6c  bl 0x501980
  033ef70  nop
  033ef74  lbz 3, 83(31)
  033ef78  cmpwi 3, 2
  033ef7c  bf 2, 0x33efdc
  033ef80  li 3, 4
  033ef84  vspltisw 4, -1
  033ef88  lis 4, 129
  033ef8c  li 5, 7832
  033ef90  li 6, 16
  033ef94  stb 3, 32(31)
  033ef98  lis 3, 52
  033ef9c  vslw 4, 4, 4
  033efa0  lvlx 2, 5, 4
  033efa4  addi 3, 3, -9568
  033efa8  li 4, -3056
  033efac  vcfsx 2, 2, 0
  033efb0  lvlx 3, 6, 3
  033efb4  lis 3, 114
  033efb8  vspltw 3, 3, 0
  033efbc  lvlx 5, 4, 3
  033efc0  li 3, 258
  033efc4  vaddfp 2, 2, 3
  033efc8  vmaddfp 2, 5, 2, 4
  033efcc  vctsxs 2, 2, 0
  033efd0  vsplth 2, 2, 1
  033efd4  stvehx 2, 3, 29
  033efd8  b 0x33f4e4
  033efdc  addic 3, 29, 258
  033efe0  bl 0x4fffb4
  033efe4  nop
  033efe8  cmpwi 3, 0
  033efec  bt 2, 0x33f4e4
  033eff0  li 6, 6
  033eff4  stfs 31, 260(29)
  033eff8  ori 3, 31, 0
  033effc  li 4, 1
  033f000  li 5, 0
  033f004  stb 6, 32(31)
  033f008  bl 0xfdcf0
  033f00c  nop
  033f010  b 0x33f4e4
  033f014  lis 3, 52
  033f018  addi 4, 3, -9568
  033f01c  ori 3, 31, 0
  033f020  lfs 1, 20(4)
  033f024  bl 0x113e88
  033f028  nop
  033f02c  cmpwi 3, 0
  033f030  bt 2, 0x33f4e4
  033f034  lis 3, 129
  033f038  li 4, 7836
  033f03c  vspltisw 3, -1
  033f040  lis 6, 52
  033f044  li 5, 16
  033f048  addi 30, 6, -9568
  033f04c  lis 28, 114
  033f050  lvlx 2, 4, 3
  033f054  li 3, -3056
  033f058  vcfsx 2, 2, 0
  033f05c  vslw 3, 3, 3
  033f060  lvlx 31, 5, 30
  033f064  li 4, 2
  033f068  vspltw 31, 31, 0
  033f06c  lvlx 4, 3, 28
  033f070  lfs 31, 16(30)
  033f074  addic 3, 29, 288
  033f078  lfs 2, 260(29)
  033f07c  fmr 1, 2
  033f080  vaddfp 2, 2, 31
  033f084  vmaddfp 2, 4, 2, 3
  033f088  vctsxs 2, 2, 0
  033f08c  vcfsx 30, 2, 0
  033f090  bl 0x501980
  033f094  nop
  033f098  addic 27, 1, 192
  033f09c  ori 3, 31, 0
  033f0a0  li 4, 1
  033f0a4  ori 5, 27, 0
  033f0a8  bl 0xf1114
  033f0ac  nop
  033f0b0  lis 3, 165
  033f0b4  lwz 4, 216(29)
  033f0b8  lhz 5, 256(29)
  033f0bc  li 8, 192
  033f0c0  addic 26, 3, 7136
  033f0c4  slwi 3, 4, 2
  033f0c8  extsh 6, 5
  033f0cc  extsw 3, 3
  033f0d0  sldi 6, 6, 4
  033f0d4  li 7, 16
  033f0d8  li 9, 212
  033f0dc  lwzx 3, 26, 3
  033f0e0  lvlx 2, 8, 1
  033f0e4  addc 3, 3, 6
  033f0e8  li 8, 196
  033f0ec  clrldi 3, 3, 32
  033f0f0  li 6, 208
  033f0f4  li 10, 24
  033f0f8  lvlx 3, 7, 3
  033f0fc  li 7, 20
  033f100  vsubfp 2, 3, 2
  033f104  lvlx 3, 8, 1
  033f108  li 8, 200
  033f10c  vspltisw 6, -1
  033f110  vspltisw 11, -1
  033f114  vspltisw 8, -1
  033f118  lvlx 5, 8, 1
  033f11c  li 8, 24
  033f120  vslw 6, 6, 6
  033f124  vspltw 4, 2, 0
  033f128  vslw 8, 8, 8
  033f12c  lis 11, 129
  033f130  vspltisw 10, -1
  033f134  stvewx 4, 6, 1
  033f138  lvlx 4, 7, 3
  033f13c  vsubfp 3, 4, 3
  033f140  li 7, 216
  033f144  vrefp 4, 30
  033f148  vspltisw 12, -1
  033f14c  li 12, 7840
  033f150  vspltw 7, 3, 0
  033f154  stvewx 7, 9, 1
  033f158  lvlx 7, 10, 3
  033f15c  vsubfp 7, 7, 5
  033f160  vspltw 7, 7, 0
  033f164  stvewx 7, 7, 1
  033f168  lfs 1, 28(3)
  033f16c  stfs 1, 220(1)
  033f170  lvlx 7, 8, 30
  033f174  vspltw 7, 7, 0
  033f178  slwi 3, 4, 2
  033f17c  vnmsubfp 9, 4, 30, 7
  033f180  extsh 4, 5
  033f184  extsw 3, 3
  033f188  lis 5, 114
  033f18c  li 7, -3048
  033f190  sldi 4, 4, 4
  033f194  li 8, 0
  033f198  lwzx 3, 26, 3
  033f19c  addc 3, 3, 4
  033f1a0  vmaddfp 4, 4, 9, 6
  033f1a4  vslw 9, 11, 11
  033f1a8  vslw 6, 10, 10
  033f1ac  clrldi 3, 3, 32
  033f1b0  vspltisw 10, -1
  033f1b4  li 4, 28
  033f1b8  vslw 10, 10, 10
  033f1bc  vnmsubfp 11, 4, 30, 7
  033f1c0  vmaddfp 4, 4, 11, 8
  033f1c4  vspltisw 11, -1
  033f1c8  vslw 8, 12, 12
  033f1cc  lvlx 12, 7, 5
  033f1d0  lvlx 13, 12, 11
  033f1d4  li 7, 32
  033f1d8  vslw 11, 11, 11
  033f1dc  vmaddfp 8, 30, 30, 8
  033f1e0  vnmsubfp 7, 4, 30, 7
  033f1e4  vmaddfp 4, 4, 7, 6
  033f1e8  vmaddfp 6, 12, 13, 11
  033f1ec  vspltisw 7, -1
  033f1f0  vslw 7, 7, 7
  033f1f4  vmaddfp 2, 2, 4, 9
  033f1f8  vmaddfp 3, 3, 4, 10
  033f1fc  vmaddfp 6, 8, 6, 7
  033f200  vspltisw 7, -1
  033f204  vslw 7, 7, 7
  033f208  vspltw 2, 2, 0
  033f20c  vspltw 3, 3, 0
  033f210  stvewx 2, 6, 1
  033f214  stvewx 3, 9, 1
  033f218  stw 8, 216(1)
  033f21c  lvlx 2, 10, 3
  033f220  lvlx 3, 4, 30
  033f224  vsubfp 2, 5, 2
  033f228  vspltw 3, 3, 0
  033f22c  lis 3, 129
  033f230  lvlx 5, 7, 30
  033f234  li 4, 72
  033f238  lfs 1, -3048(5)
  033f23c  vspltw 5, 5, 0
  033f240  lfs 2, 7840(11)
  033f244  lwz 3, 7844(3)
  033f248  fmuls 1, 1, 2
  033f24c  extsw 3, 3
  033f250  vmaddfp 2, 6, 3, 2
  033f254  addic 5, 1, 208
  033f258  vxor 2, 2, 5
  033f25c  vmaddfp 2, 4, 2, 7
  033f260  vspltw 2, 2, 0
  033f264  stvewx 2, 4, 29
  033f268  std 3, 416(1)
  033f26c  lfs 3, -3056(28)
  033f270  lfd 2, 416(1)
  033f274  ori 3, 31, 0
  033f278  fcfid 2, 2
  033f27c  ori 4, 27, 0
  033f280  frsp 2, 2
  033f284  fadds 2, 2, 31
  033f288  fmuls 2, 3, 2
  033f28c  fctiwz 2, 2
  033f290  stfd 2, 416(1)
  033f294  lwz 7, 420(1)
  033f298  extsw 7, 7
  033f29c  bl 0x1f29e8
  033f2a0  nop
  033f2a4  lfs 1, 260(29)
  033f2a8  ori 3, 31, 0
  033f2ac  ori 4, 27, 0
  033f2b0  bl 0x33c6e0
  033f2b4  lwz 3, 216(29)
  033f2b8  lhz 4, 256(29)
  033f2bc  slwi 3, 3, 2
  033f2c0  addic 4, 4, 1
  033f2c4  extsw 3, 3
  033f2c8  extsh 5, 4
  033f2cc  sth 4, 256(29)
  033f2d0  lwzx 3, 26, 3
  033f2d4  lwz 3, 0(3)
  033f2d8  cmpw 5, 3
  033f2dc  bt 0, 0x33f328
  033f2e0  li 3, 4
  033f2e4  lis 4, 129
  033f2e8  vspltisw 3, -1
  033f2ec  li 5, 7832
  033f2f0  stb 3, 32(31)
  033f2f4  lis 3, 114
  033f2f8  vslw 3, 3, 3
  033f2fc  lvlx 2, 5, 4
  033f300  li 4, -3056
  033f304  vcfsx 2, 2, 0
  033f308  lvlx 4, 4, 3
  033f30c  li 3, 258
  033f310  vaddfp 2, 2, 31
  033f314  vmaddfp 2, 4, 2, 3
  033f318  vctsxs 2, 2, 0
  033f31c  vsplth 2, 2, 1
  033f320  stvehx 2, 3, 29
  033f324  b 0x33f4e4
  033f328  lis 3, 129
  033f32c  li 4, 7828
  033f330  vspltisw 3, -1
  033f334  lis 5, 114
  033f338  vslw 3, 3, 3
  033f33c  lvlx 2, 4, 3
  033f340  li 3, -3056
  033f344  vcfsx 2, 2, 0
  033f348  li 4, 5
  033f34c  lvlx 4, 3, 5
  033f350  li 3, 258
  033f354  vaddfp 2, 2, 31
  033f358  vmaddfp 2, 4, 2, 3
  033f35c  vctsxs 2, 2, 0
  033f360  vsplth 2, 2, 1
  033f364  stvehx 2, 3, 29
  033f368  stb 4, 32(31)
  033f36c  b 0x33f4e4
  033f370  addic 30, 1, 224
  033f374  ori 3, 31, 0
  033f378  li 4, 2
  033f37c  ori 5, 30, 0
  033f380  bl 0xf1114
  033f384  nop
  033f388  lfs 1, 224(1)
  033f38c  lfs 2, 232(1)
  033f390  ori 3, 31, 0
  033f394  stfs 1, 64(1)
  033f398  stfs 2, 72(1)
  033f39c  lfs 1, 228(1)
  033f3a0  lfs 2, 72(31)
  033f3a4  stfs 1, 68(1)
  033f3a8  lfs 3, 236(1)
  033f3ac  fmr 1, 2
  033f3b0  stfs 3, 76(1)
  033f3b4  ld 5, 64(1)
  033f3b8  ld 6, 72(1)
  033f3bc  bl 0x46cf30
  033f3c0  nop
  033f3c4  ori 3, 31, 0
  033f3c8  li 4, 3
  033f3cc  ori 5, 30, 0
  033f3d0  bl 0xf1114
  033f3d4  nop
  033f3d8  lis 3, 52
  033f3dc  lfs 1, 72(31)
  033f3e0  addi 30, 3, -9568
  033f3e4  lfs 2, 36(30)
  033f3e8  bl 0x502578
  033f3ec  nop
  033f3f0  lfs 2, 224(1)
  033f3f4  lfs 3, 232(1)
  033f3f8  ori 3, 31, 0
  033f3fc  stfs 2, 64(1)
  033f400  stfs 3, 72(1)
  033f404  lfs 2, 228(1)
  033f408  lfs 3, 236(1)
  033f40c  stfs 2, 68(1)
  033f410  stfs 3, 76(1)
  033f414  ld 5, 64(1)
  033f418  ld 6, 72(1)
  033f41c  bl 0x46cf30
  033f420  nop
  033f424  lfs 1, 8(30)
  033f428  li 6, 1
  033f42c  lfs 4, 48(30)
  033f430  li 7, -1
  033f434  lfs 3, 40(30)
  033f438  li 11, 0
  033f43c  lfs 5, 44(30)
  033f440  ori 3, 31, 0
  033f444  lfs 7, 52(30)
  033f448  addic 4, 29, 64
  033f44c  std 6, 144(1)
  033f450  addic 5, 31, 16
  033f454  std 6, 160(1)
  033f458  li 8, 5
  033f45c  std 6, 168(1)
  033f460  li 9, 2
  033f464  std 7, 176(1)
  033f468  li 10, 6
  033f46c  std 11, 184(1)
  033f470  fmr 2, 1
  033f474  fmr 6, 4
  033f478  bl 0x10e030
  033f47c  nop
  033f480  lwz 3, 264(29)
  033f484  cmpwi 3, -1
  033f488  bt 2, 0x33f4cc
  033f48c  sldi 4, 3, 7
  033f490  sldi 6, 3, 4
  033f494  lis 5, 150
  033f498  subc 4, 4, 6
  033f49c  addic 5, 5, 14176
  033f4a0  extsw 4, 4
  033f4a4  addc 4, 5, 4
  033f4a8  lwz 5, 136(4)
  033f4ac  cmpw 5, 31
  033f4b0  bf 2, 0x33f4cc
  033f4b4  lbz 4, 116(4)
  033f4b8  cmpwi 4, 0
  033f4bc  bt 2, 0x33f4cc
  033f4c0  extsw 3, 3
  033f4c4  bl 0x15cdb0
  033f4c8  nop
  033f4cc  li 4, -1
  033f4d0  ori 3, 31, 0
  033f4d4  stw 4, 264(29)
  033f4d8  bl 0xefb38
  033f4dc  nop
  033f4e0  b 0x33f534
  033f4e4  lbz 3, 32(31)
  033f4e8  cmpwi 1, 3, 1
  033f4ec  cmpwi 3, 0
  033f4f0  cror 2, 2, 6
  033f4f4  bt 2, 0x33f534
  033f4f8  cmpwi 3, 9
  033f4fc  bt 2, 0x33f534
  033f500  ori 3, 31, 0
  033f504  lwz 4, 264(29)
  033f508  extsw 4, 4
  033f50c  bl 0x15cc7c
  033f510  nop
  033f514  cmpwi 3, 0
  033f518  bf 2, 0x33f534
  033f51c  li 3, 0
  033f520  li 4, 4
  033f524  ori 5, 31, 0
  033f528  bl 0x15d12c
  033f52c  nop
  033f530  stw 3, 264(29)
  033f534  li 0, 432
  033f538  lvx 30, 1, 0
  033f53c  addic 0, 0, 16
  033f540  lvx 31, 1, 0
  033f544  ld 0, 608(1)
  033f548  mtlr 0
  033f54c  lfd 25, 536(1)
  033f550  lfd 26, 544(1)
  033f554  lfd 27, 552(1)
  033f558  lfd 28, 560(1)
  033f55c  lfd 29, 568(1)
  033f560  lfd 30, 576(1)
  033f564  lfd 31, 584(1)
  033f568  ld 23, 464(1)
  033f56c  ld 24, 472(1)
  033f570  ld 25, 480(1)
  033f574  ld 26, 488(1)
  033f578  ld 27, 496(1)
  033f57c  ld 28, 504(1)
  033f580  ld 29, 512(1)
  033f584  ld 30, 520(1)
  033f588  ld 31, 528(1)
  033f58c  addi 1, 1, 592
  033f590  blr
