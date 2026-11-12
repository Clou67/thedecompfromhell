# game/update/moby74.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

Spawn_Moby74_MineBall:   # 0x43cc98, 0x16c bytes
  043cc98  stdu 1, -176(1)
  043cc9c  mflr 0
  043cca0  std 0, 192(1)
  043cca4  stfd 30, 160(1)
  043cca8  stfd 31, 168(1)
  043ccac  std 30, 144(1)
  043ccb0  ori 30, 3, 0
  043ccb4  std 31, 152(1)
  043ccb8  li 3, 74
  043ccbc  std 29, 136(1)
  043ccc0  std 28, 128(1)
  043ccc4  std 27, 120(1)
  043ccc8  std 26, 112(1)
  043cccc  ori 31, 4, 0
  043ccd0  bl 0xefa28
  043ccd4  nop
  043ccd8  ori 29, 3, 0
  043ccdc  cmpwi 29, 0
  043cce0  bt 2, 0x43cdd0
  043cce4  li 3, 255
  043cce8  li 4, 127
  043ccec  lis 6, 68
  043ccf0  li 5, 1
  043ccf4  stb 3, 48(29)
  043ccf8  li 28, 0
  043ccfc  sth 4, 50(29)
  043cd00  addi 3, 6, -13172
  043cd04  stb 5, 49(29)
  043cd08  stb 28, 32(29)
  043cd0c  lis 26, 114
  043cd10  lfs 1, 0(3)
  043cd14  lfs 2, 44(29)
  043cd18  lwz 27, 120(29)
  043cd1c  fmuls 1, 2, 1
  043cd20  stfs 1, 44(29)
  043cd24  sth 28, 54(27)
  043cd28  stw 30, 48(27)
  043cd2c  stw 28, 120(27)
  043cd30  lfs 1, 0(31)
  043cd34  stfs 1, 16(29)
  043cd38  lfs 1, 4(31)
  043cd3c  stfs 1, 20(29)
  043cd40  lfs 1, 8(31)
  043cd44  stfs 1, 24(29)
  043cd48  lfs 1, 12(31)
  043cd4c  stfs 1, 28(29)
  043cd50  stw 28, 12(27)
  043cd54  stw 28, 8(27)
  043cd58  stw 28, 4(27)
  043cd5c  stw 28, 0(27)
  043cd60  lfs 31, 4(3)
  043cd64  lfs 30, 8(3)
  043cd68  lfs 2, -3052(26)
  043cd6c  fmuls 1, 2, 31
  043cd70  fmuls 2, 2, 30
  043cd74  bl 0xfcbe8
  043cd78  nop
  043cd7c  stfs 1, 56(27)
  043cd80  lfs 2, -3052(26)
  043cd84  fmuls 1, 2, 31
  043cd88  fmuls 2, 2, 30
  043cd8c  bl 0xfcbe8
  043cd90  nop
  043cd94  stfs 1, 60(27)
  043cd98  lis 4, 161
  043cd9c  stw 28, 100(27)
  043cda0  stw 28, 96(27)
  043cda4  li 5, -1
  043cda8  stw 28, 112(27)
  043cdac  ori 3, 29, 0
  043cdb0  stw 28, 108(27)
  043cdb4  lwz 4, 1808(4)
  043cdb8  stw 28, 116(27)
  043cdbc  stw 4, 92(27)
  043cdc0  stw 5, 104(27)
  043cdc4  stw 28, 148(29)
  043cdc8  bl 0xf31a8
  043cdcc  nop
  043cdd0  ori 3, 29, 0
  043cdd4  ld 0, 192(1)
  043cdd8  mtlr 0
  043cddc  lfd 30, 160(1)
  043cde0  lfd 31, 168(1)
  043cde4  ld 26, 112(1)
  043cde8  ld 27, 120(1)
  043cdec  ld 28, 128(1)
  043cdf0  ld 29, 136(1)
  043cdf4  ld 30, 144(1)
  043cdf8  ld 31, 152(1)
  043cdfc  addi 1, 1, 176
  043ce00  blr

FUN_0043ce28:   # 0x43ce28, 0x400 bytes
  043ce28  stdu 1, -208(1)
  043ce2c  mflr 0
  043ce30  std 0, 224(1)
  043ce34  stfd 27, 168(1)
  043ce38  stfd 28, 176(1)
  043ce3c  stfd 29, 184(1)
  043ce40  stfd 30, 192(1)
  043ce44  stfd 31, 200(1)
  043ce48  std 31, 160(1)
  043ce4c  std 29, 144(1)
  043ce50  lis 6, 68
  043ce54  ori 31, 4, 0
  043ce58  std 30, 152(1)
  043ce5c  addi 29, 6, -12796
  043ce60  std 27, 128(1)
  043ce64  ori 30, 3, 0
  043ce68  ori 27, 5, 0
  043ce6c  lfs 30, 4(29)
  043ce70  lfs 29, 8(29)
  043ce74  fmr 1, 30
  043ce78  std 28, 136(1)
  043ce7c  lfs 31, 0(29)
  043ce80  lwz 28, 120(31)
  043ce84  fmr 2, 29
  043ce88  bl 0xfcbe8
  043ce8c  nop
  043ce90  fmr 28, 1
  043ce94  fmr 1, 30
  043ce98  fmr 2, 29
  043ce9c  bl 0xfcbe8
  043cea0  nop
  043cea4  fmr 27, 1
  043cea8  fmr 1, 30
  043ceac  fmr 2, 29
  043ceb0  bl 0xfcbe8
  043ceb4  nop
  043ceb8  li 3, 1
  043cebc  lfs 2, 44(31)
  043cec0  fmr 30, 1
  043cec4  stb 3, 32(31)
  043cec8  lfs 3, 12(29)
  043cecc  lis 3, 114
  043ced0  fmuls 1, 2, 3
  043ced4  stfs 1, 44(31)
  043ced8  lfs 1, 16(29)
  043cedc  lfs 2, 20(29)
  043cee0  lfs 3, -3052(3)
  043cee4  fmuls 2, 3, 2
  043cee8  fmuls 1, 3, 1
  043ceec  bl 0xfcbe8
  043cef0  nop
  043cef4  fmuls 2, 27, 27
  043cef8  lfs 3, 0(27)
  043cefc  lis 29, 151
  043cf00  addic 29, 29, -25376
  043cf04  fmadds 2, 28, 28, 2
  043cf08  lwz 3, 764(29)
  043cf0c  li 4, 0
  043cf10  fmadds 2, 30, 30, 2
  043cf14  cmpwi 3, 0
  043cf18  fsqrts 2, 2
  043cf1c  fdivs 1, 1, 2
  043cf20  fsub 4, 31, 2
  043cf24  fsub 8, 31, 2
  043cf28  fsub 5, 2, 31
  043cf2c  fsub 6, 31, 2
  043cf30  fsub 7, 2, 31
  043cf34  fsub 2, 2, 31
  043cf38  fmuls 9, 28, 1
  043cf3c  fmuls 10, 27, 1
  043cf40  fmuls 1, 30, 1
  043cf44  fsel 4, 4, 31, 9
  043cf48  fsel 6, 6, 31, 10
  043cf4c  fsel 8, 8, 31, 1
  043cf50  fsel 4, 5, 4, 9
  043cf54  fsel 5, 7, 6, 10
  043cf58  fsel 1, 2, 8, 1
  043cf5c  fadds 2, 4, 3
  043cf60  stfs 2, 0(28)
  043cf64  lfs 2, 4(27)
  043cf68  fadds 2, 5, 2
  043cf6c  stfs 2, 4(28)
  043cf70  lfs 2, 8(27)
  043cf74  stw 4, 12(28)
  043cf78  fadds 1, 1, 2
  043cf7c  stfs 1, 8(28)
  043cf80  bt 2, 0x43cfc4
  043cf84  bl 0x1122ac
  043cf88  nop
  043cf8c  cmpwi 3, 0
  043cf90  bt 2, 0x43cfc4
  043cf94  lfs 1, 0(28)
  043cf98  lfs 2, 256(29)
  043cf9c  fadds 1, 1, 2
  043cfa0  lfs 2, 4(28)
  043cfa4  lfs 3, 8(28)
  043cfa8  stfs 1, 0(28)
  043cfac  lfs 1, 260(29)
  043cfb0  fadds 1, 2, 1
  043cfb4  stfs 1, 4(28)
  043cfb8  lfs 1, 264(29)
  043cfbc  fadds 1, 3, 1
  043cfc0  stfs 1, 8(28)
  043cfc4  lis 3, 68
  043cfc8  li 4, 24
  043cfcc  vspltisw 2, -1
  043cfd0  addi 3, 3, -12796
  043cfd4  lis 5, 114
  043cfd8  li 6, -3056
  043cfdc  vslw 2, 2, 2
  043cfe0  lvlx 3, 4, 3
  043cfe4  lis 3, 164
  043cfe8  vspltw 3, 3, 0
  043cfec  lvlx 4, 6, 5
  043cff0  li 6, 52
  043cff4  li 5, 0
  043cff8  vmaddfp 2, 4, 3, 2
  043cffc  lwz 4, -28500(3)
  043d000  ori 7, 5, 0
  043d004  cmpwi 4, 0
  043d008  vctsxs 2, 2, 0
  043d00c  vsplth 2, 2, 1
  043d010  stvehx 2, 6, 28
  043d014  bt 2, 0x43d094
  043d018  li 6, 0
  043d01c  lbz 3, 32(4)
  043d020  cmpwi 1, 3, 253
  043d024  cmpwi 3, 254
  043d028  cror 2, 2, 6
  043d02c  bt 2, 0x43d074
  043d030  lhz 3, 166(4)
  043d034  lhz 8, 166(31)
  043d038  extsh 3, 3
  043d03c  extsh 8, 8
  043d040  cmpw 3, 8
  043d044  bf 2, 0x43d074
  043d048  cmpw 4, 31
  043d04c  cmpwi 1, 6, 0
  043d050  bt 2, 0x43d074
  043d054  lwz 3, 120(4)
  043d058  bt 6, 0x43d068
  043d05c  lwz 8, 92(3)
  043d060  cmpw 8, 5
  043d064  bf 0, 0x43d070
  043d068  ori 6, 4, 0
  043d06c  lwz 5, 92(3)
  043d070  addic 7, 7, 1
  043d074  lwz 4, 40(4)
  043d078  cmpwi 4, 0
  043d07c  bf 2, 0x43d01c
  043d080  cmpwi 7, 7
  043d084  bf 1, 0x43d094
  043d088  lwz 4, 120(6)
  043d08c  li 3, -1
  043d090  stw 3, 92(4)
  043d094  lfs 1, 0(30)
  043d098  addic 3, 1, 112
  043d09c  stfs 1, 16(31)
  043d0a0  lfs 1, 4(30)
  043d0a4  ori 4, 30, 0
  043d0a8  lwz 6, 8320(29)
  043d0ac  li 5, 0
  043d0b0  stfs 1, 20(31)
  043d0b4  li 7, 0
  043d0b8  lfs 1, 8(30)
  043d0bc  stfs 1, 24(31)
  043d0c0  lfs 1, 12(30)
  043d0c4  stfs 1, 28(31)
  043d0c8  lfs 1, 16(6)
  043d0cc  stfs 1, 112(1)
  043d0d0  lfs 1, 20(6)
  043d0d4  stfs 1, 116(1)
  043d0d8  lfs 1, 24(6)
  043d0dc  lfs 2, 8(30)
  043d0e0  stfs 1, 120(1)
  043d0e4  lfs 1, 28(6)
  043d0e8  stfs 2, 120(1)
  043d0ec  stfs 1, 124(1)
  043d0f0  bl 0x57820
  043d0f4  nop
  043d0f8  cmpwi 3, 0
  043d0fc  bt 2, 0x43d1f0
  043d100  lis 3, 161
  043d104  addic 5, 3, 2368
  043d108  lis 3, 68
  043d10c  lfs 1, 32(5)
  043d110  stfs 1, 16(31)
  043d114  lfs 2, 36(5)
  043d118  stfs 2, 20(31)
  043d11c  lfs 3, 40(5)
  043d120  stfs 3, 24(31)
  043d124  lfs 4, 44(5)
  043d128  stfs 4, 28(31)
  043d12c  lfs 4, 68(5)
  043d130  lfs 5, 64(5)
  043d134  fmuls 6, 4, 4
  043d138  lfs 7, 72(5)
  043d13c  addi 30, 3, -12796
  043d140  lis 3, 114
  043d144  lfs 8, 28(30)
  043d148  lfs 9, -3048(3)
  043d14c  fmadds 6, 5, 5, 6
  043d150  fmuls 8, 9, 8
  043d154  addic 5, 5, 64
  043d158  ori 3, 28, 0
  043d15c  ori 4, 28, 0
  043d160  fmadds 6, 7, 7, 6
  043d164  fsqrts 6, 6
  043d168  fdivs 8, 8, 6
  043d16c  fsub 9, 31, 6
  043d170  fsub 10, 31, 6
  043d174  fsub 11, 31, 6
  043d178  fsub 12, 6, 31
  043d17c  fsub 13, 6, 31
  043d180  fsub 6, 6, 31
  043d184  fmuls 7, 7, 8
  043d188  fmuls 4, 4, 8
  043d18c  fmuls 5, 5, 8
  043d190  fsel 8, 9, 31, 7
  043d194  fsel 9, 10, 31, 4
  043d198  fsel 10, 11, 31, 5
  043d19c  fsel 7, 12, 8, 7
  043d1a0  fsel 4, 13, 9, 4
  043d1a4  fsel 5, 6, 10, 5
  043d1a8  fadds 3, 3, 7
  043d1ac  fadds 2, 2, 4
  043d1b0  fadds 1, 1, 5
  043d1b4  stfs 3, 24(31)
  043d1b8  stfs 2, 20(31)
  043d1bc  stfs 1, 16(31)
  043d1c0  bl 0x500608
  043d1c4  nop
  043d1c8  lfs 1, 32(30)
  043d1cc  lfs 2, 0(28)
  043d1d0  lfs 3, 4(28)
  043d1d4  lfs 4, 8(28)
  043d1d8  fmuls 2, 2, 1
  043d1dc  fmuls 3, 3, 1
  043d1e0  fmuls 1, 4, 1
  043d1e4  stfs 2, 0(28)
  043d1e8  stfs 3, 4(28)
  043d1ec  stfs 1, 8(28)
  043d1f0  ld 0, 224(1)
  043d1f4  mtlr 0
  043d1f8  lfd 27, 168(1)
  043d1fc  lfd 28, 176(1)
  043d200  lfd 29, 184(1)
  043d204  lfd 30, 192(1)
  043d208  lfd 31, 200(1)
  043d20c  ld 27, 128(1)
  043d210  ld 28, 136(1)
  043d214  ld 29, 144(1)
  043d218  ld 30, 152(1)
  043d21c  ld 31, 160(1)
  043d220  addi 1, 1, 208
  043d224  blr

M74_0043d268:   # 0x43d268, 0x878 bytes
  043d268  stdu 1, -368(1)
  043d26c  mflr 0
  043d270  std 0, 384(1)
  043d274  stfd 22, 288(1)
  043d278  stfd 23, 296(1)
  043d27c  stfd 24, 304(1)
  043d280  stfd 25, 312(1)
  043d284  stfd 26, 320(1)
  043d288  stfd 27, 328(1)
  043d28c  stfd 28, 336(1)
  043d290  stfd 29, 344(1)
  043d294  stfd 30, 352(1)
  043d298  stfd 31, 360(1)
  043d29c  std 26, 240(1)
  043d2a0  std 31, 280(1)
  043d2a4  lis 26, 151
  043d2a8  std 27, 248(1)
  043d2ac  ori 31, 3, 0
  043d2b0  addic 26, 26, -25376
  043d2b4  std 30, 272(1)
  043d2b8  lis 27, 68
  043d2bc  ori 30, 4, 0
  043d2c0  std 29, 264(1)
  043d2c4  addi 27, 27, -11736
  043d2c8  ori 29, 5, 0
  043d2cc  lwz 3, 8324(26)
  043d2d0  std 28, 256(1)
  043d2d4  cmpwi 3, 114
  043d2d8  bt 2, 0x43d2ec
  043d2dc  lis 3, 161
  043d2e0  lwz 3, 1800(3)
  043d2e4  cmpwi 3, 0
  043d2e8  bt 2, 0x43d2f4
  043d2ec  li 3, 0
  043d2f0  b 0x43da90
  043d2f4  lfs 31, 16(30)
  043d2f8  lfs 1, 20(30)
  043d2fc  stfs 31, 128(1)
  043d300  lfs 2, 24(30)
  043d304  stfs 1, 132(1)
  043d308  lfs 3, 28(30)
  043d30c  lbz 3, 32(30)
  043d310  stfs 2, 136(1)
  043d314  cmpwi 3, 0
  043d318  stfs 3, 140(1)
  043d31c  bf 2, 0x43d7b4
  043d320  lwz 3, 1648(26)
  043d324  lwz 4, 1652(26)
  043d328  lfs 1, 1648(26)
  043d32c  lfs 2, 1652(26)
  043d330  fabs 3, 1
  043d334  fabs 2, 2
  043d338  lfs 31, 0(27)
  043d33c  rlwinm 4, 4, 3, 29, 29
  043d340  lis 28, 115
  043d344  addic 28, 28, 22784
  043d348  fsubs 1, 3, 2
  043d34c  stfs 1, 168(1)
  043d350  lfs 22, 4(27)
  043d354  lfs 23, 8(27)
  043d358  lwz 5, 168(1)
  043d35c  lfs 1, 168(1)
  043d360  rlwimi 4, 5, 2, 30, 30
  043d364  fsub 4, 1, 22
  043d368  fsub 5, 1, 22
  043d36c  rlwimi 4, 3, 4, 28, 28
  043d370  ori 3, 28, 0
  043d374  rlwimi 3, 4, 2, 26, 28
  043d378  slwi 4, 4, 2
  043d37c  clrldi 3, 3, 32
  043d380  fsel 4, 4, 3, 2
  043d384  lfsx 1, 28, 4
  043d388  fsel 3, 5, 2, 3
  043d38c  lfs 2, 4(3)
  043d390  fcmpu 0, 4, 22
  043d394  bt 1, 0x43d3a0
  043d398  fmr 1, 22
  043d39c  b 0x43d4b8
  043d3a0  fsubs 5, 3, 4
  043d3a4  fadds 3, 3, 4
  043d3a8  addic 3, 1, 16
  043d3ac  li 6, 2
  043d3b0  addic 5, 3, 204
  043d3b4  addic 4, 3, 188
  043d3b8  mtctr 6
  043d3bc  fdivs 3, 5, 3
  043d3c0  fmuls 4, 3, 3
  043d3c4  stfs 3, 216(1)
  043d3c8  stfs 3, 208(1)
  043d3cc  stfs 3, 212(1)
  043d3d0  stfs 3, 204(1)
  043d3d4  lfs 6, 216(1)
  043d3d8  lfs 7, 208(1)
  043d3dc  lfs 8, 212(1)
  043d3e0  fmuls 5, 4, 4
  043d3e4  fmuls 7, 7, 4
  043d3e8  fmuls 6, 6, 5
  043d3ec  fmuls 3, 5, 5
  043d3f0  fmuls 5, 8, 5
  043d3f4  stfs 7, 208(1)
  043d3f8  fmuls 4, 6, 4
  043d3fc  stfs 5, 212(1)
  043d400  stfs 4, 216(1)
  043d404  lfs 4, 188(3)
  043d408  fmuls 4, 4, 3
  043d40c  stfs 4, 204(3)
  043d410  lfs 4, 4(4)
  043d414  addic 4, 4, 8
  043d418  fmuls 4, 4, 3
  043d41c  addic 3, 3, 8
  043d420  stfs 4, 4(5)
  043d424  addic 5, 5, 8
  043d428  bdnz 0x43d404
  043d42c  li 5, 4
  043d430  ori 3, 1, 0
  043d434  mtctr 5
  043d438  lis 4, 115
  043d43c  addic 5, 3, 204
  043d440  addic 4, 4, 22752
  043d444  ori 7, 5, 0
  043d448  lfs 3, 204(3)
  043d44c  lfs 4, 0(4)
  043d450  fmuls 3, 3, 4
  043d454  lfs 4, 4(4)
  043d458  addic 4, 4, 8
  043d45c  stfs 3, 204(3)
  043d460  lfs 3, 4(5)
  043d464  addic 3, 3, 8
  043d468  fmuls 3, 3, 4
  043d46c  stfs 3, 4(5)
  043d470  addic 5, 5, 8
  043d474  bdnz 0x43d448
  043d478  ori 3, 1, 0
  043d47c  fmr 3, 22
  043d480  mtctr 6
  043d484  lfs 4, 204(3)
  043d488  fadds 3, 3, 4
  043d48c  lfs 4, 4(7)
  043d490  addic 3, 3, 16
  043d494  lfs 5, 8(7)
  043d498  lfs 6, 12(7)
  043d49c  addic 7, 7, 16
  043d4a0  fadds 3, 3, 4
  043d4a4  fadds 3, 3, 5
  043d4a8  fadds 3, 3, 6
  043d4ac  bdnz 0x43d484
  043d4b0  fadds 3, 3, 23
  043d4b4  fmadds 1, 3, 1, 2
  043d4b8  fmr 2, 1
  043d4bc  fmr 1, 31
  043d4c0  bl 0x502578
  043d4c4  nop
  043d4c8  lfs 2, 12(27)
  043d4cc  lfs 30, 16(27)
  043d4d0  fadds 1, 1, 2
  043d4d4  lfs 29, 20(27)
  043d4d8  lwz 3, 1648(26)
  043d4dc  lfs 4, 1648(26)
  043d4e0  lwz 4, 1652(26)
  043d4e4  lfs 6, 1652(26)
  043d4e8  fabs 7, 4
  043d4ec  lfs 28, 24(27)
  043d4f0  fabs 6, 6
  043d4f4  lfs 27, 28(27)
  043d4f8  fsubs 2, 30, 1
  043d4fc  fsubs 3, 29, 1
  043d500  lfs 26, 32(27)
  043d504  lfs 25, 36(27)
  043d508  lfs 24, 40(27)
  043d50c  rlwinm 4, 4, 3, 29, 29
  043d510  fsub 5, 1, 2
  043d514  fsel 1, 5, 2, 1
  043d518  fsubs 2, 7, 6
  043d51c  fsub 4, 3, 1
  043d520  stfs 2, 164(1)
  043d524  fsel 1, 4, 3, 1
  043d528  fmuls 2, 1, 1
  043d52c  lwz 5, 164(1)
  043d530  lfs 5, 164(1)
  043d534  rlwimi 4, 5, 2, 30, 30
  043d538  rlwimi 4, 3, 4, 28, 28
  043d53c  fmuls 3, 2, 1
  043d540  ori 3, 28, 0
  043d544  rlwimi 3, 4, 2, 26, 28
  043d548  slwi 4, 4, 2
  043d54c  clrldi 3, 3, 32
  043d550  fmuls 4, 2, 3
  043d554  fmadds 1, 3, 28, 1
  043d558  fsub 3, 5, 22
  043d55c  fmuls 8, 2, 4
  043d560  fmadds 1, 4, 27, 1
  043d564  fsel 4, 3, 7, 6
  043d568  fsub 3, 5, 22
  043d56c  fmuls 2, 2, 8
  043d570  fmadds 1, 8, 26, 1
  043d574  fcmpu 0, 4, 22
  043d578  fsel 3, 3, 6, 7
  043d57c  fmadds 1, 2, 25, 1
  043d580  fmuls 1, 1, 24
  043d584  stfs 1, 112(1)
  043d588  lfsx 1, 28, 4
  043d58c  lfs 2, 4(3)
  043d590  bt 1, 0x43d598
  043d594  b 0x43d6ac
  043d598  fsubs 5, 3, 4
  043d59c  fadds 3, 3, 4
  043d5a0  addic 3, 1, 16
  043d5a4  li 7, 2
  043d5a8  addic 5, 3, 172
  043d5ac  addic 4, 3, 156
  043d5b0  mtctr 7
  043d5b4  fdivs 3, 5, 3
  043d5b8  fmuls 4, 3, 3
  043d5bc  stfs 3, 184(1)
  043d5c0  stfs 3, 176(1)
  043d5c4  stfs 3, 180(1)
  043d5c8  stfs 3, 172(1)
  043d5cc  lfs 6, 184(1)
  043d5d0  lfs 7, 176(1)
  043d5d4  lfs 8, 180(1)
  043d5d8  fmuls 5, 4, 4
  043d5dc  fmuls 7, 7, 4
  043d5e0  fmuls 6, 6, 5
  043d5e4  fmuls 3, 5, 5
  043d5e8  fmuls 5, 8, 5
  043d5ec  stfs 7, 176(1)
  043d5f0  fmuls 4, 6, 4
  043d5f4  stfs 5, 180(1)
  043d5f8  stfs 4, 184(1)
  043d5fc  lfs 4, 156(3)
  043d600  fmuls 4, 4, 3
  043d604  stfs 4, 172(3)
  043d608  lfs 4, 4(4)
  043d60c  addic 4, 4, 8
  043d610  fmuls 4, 4, 3
  043d614  addic 3, 3, 8
  043d618  stfs 4, 4(5)
  043d61c  addic 5, 5, 8
  043d620  bdnz 0x43d5fc
  043d624  li 5, 4
  043d628  ori 3, 1, 0
  043d62c  mtctr 5
  043d630  lis 4, 115
  043d634  addic 5, 3, 172
  043d638  addic 4, 4, 22752
  043d63c  ori 6, 5, 0
  043d640  lfs 3, 172(3)
  043d644  lfs 4, 0(4)
  043d648  fmuls 3, 3, 4
  043d64c  lfs 4, 4(4)
  043d650  addic 4, 4, 8
  043d654  stfs 3, 172(3)
  043d658  lfs 3, 4(5)
  043d65c  addic 3, 3, 8
  043d660  fmuls 3, 3, 4
  043d664  stfs 3, 4(5)
  043d668  addic 5, 5, 8
  043d66c  bdnz 0x43d640
  043d670  ori 3, 1, 0
  043d674  mtctr 7
  043d678  lfs 3, 172(3)
  043d67c  lfs 4, 4(6)
  043d680  fadds 3, 22, 3
  043d684  lfs 5, 8(6)
  043d688  addic 3, 3, 16
  043d68c  lfs 22, 12(6)
  043d690  addic 6, 6, 16
  043d694  fadds 3, 3, 4
  043d698  fadds 3, 3, 5
  043d69c  fadds 22, 3, 22
  043d6a0  bdnz 0x43d678
  043d6a4  fadds 22, 22, 23
  043d6a8  fmadds 22, 22, 1, 2
  043d6ac  fmr 1, 31
  043d6b0  fmr 2, 22
  043d6b4  bl 0x502578
  043d6b8  nop
  043d6bc  fsubs 2, 30, 1
  043d6c0  fsubs 3, 29, 1
  043d6c4  li 3, 0
  043d6c8  fsub 4, 1, 2
  043d6cc  fsel 1, 4, 2, 1
  043d6d0  fsub 2, 3, 1
  043d6d4  fsel 1, 2, 3, 1
  043d6d8  lfs 3, 112(1)
  043d6dc  lfs 5, 128(26)
  043d6e0  lfs 6, 132(26)
  043d6e4  fadds 3, 3, 5
  043d6e8  stw 3, 120(1)
  043d6ec  fmuls 2, 1, 1
  043d6f0  stfs 3, 112(1)
  043d6f4  lfs 31, 0(31)
  043d6f8  fmuls 4, 2, 1
  043d6fc  lfs 30, 4(31)
  043d700  lfs 29, 8(31)
  043d704  fmuls 7, 2, 4
  043d708  fmadds 1, 4, 28, 1
  043d70c  fmuls 4, 2, 7
  043d710  fmadds 1, 7, 27, 1
  043d714  fmuls 2, 2, 4
  043d718  fmadds 1, 4, 26, 1
  043d71c  fmadds 1, 2, 25, 1
  043d720  lfs 2, 136(26)
  043d724  lwz 3, 764(26)
  043d728  cmpwi 3, 0
  043d72c  fmuls 1, 1, 24
  043d730  fadds 3, 1, 6
  043d734  stfs 1, 116(1)
  043d738  stfs 3, 116(1)
  043d73c  lfs 1, 44(27)
  043d740  fadds 1, 2, 1
  043d744  stfs 1, 120(1)
  043d748  bt 2, 0x43d77c
  043d74c  bl 0x1122ac
  043d750  nop
  043d754  cmpwi 3, 0
  043d758  bt 2, 0x43d77c
  043d75c  cmpwi 29, 0
  043d760  bt 2, 0x43d77c
  043d764  lfs 1, 256(26)
  043d768  lfs 2, 260(26)
  043d76c  fadds 31, 31, 1
  043d770  lfs 1, 264(26)
  043d774  fadds 30, 30, 2
  043d778  fadds 29, 29, 1
  043d77c  li 3, 48
  043d780  vspltisw 2, -1
  043d784  lis 4, 114
  043d788  li 5, -3056
  043d78c  vslw 2, 2, 2
  043d790  lvlx 3, 3, 27
  043d794  li 3, 160
  043d798  vspltw 3, 3, 0
  043d79c  lvlx 4, 5, 4
  043d7a0  vmaddfp 2, 4, 3, 2
  043d7a4  vctsxs 2, 2, 0
  043d7a8  vspltw 2, 2, 0
  043d7ac  stvewx 2, 3, 1
  043d7b0  b 0x43d7fc
  043d7b4  lwz 3, 48(31)
  043d7b8  lhz 4, 52(31)
  043d7bc  lfs 4, 0(31)
  043d7c0  extsh 4, 4
  043d7c4  lwz 3, 120(3)
  043d7c8  stfs 31, 112(1)
  043d7cc  stfs 1, 116(1)
  043d7d0  fmr 31, 4
  043d7d4  stfs 2, 120(1)
  043d7d8  stfs 3, 124(1)
  043d7dc  lfs 30, 4(31)
  043d7e0  lfs 29, 8(31)
  043d7e4  stw 4, 160(1)
  043d7e8  lwz 3, 80(3)
  043d7ec  cmpwi 3, 0
  043d7f0  bt 2, 0x43d7fc
  043d7f4  li 3, 1
  043d7f8  sth 3, 54(31)
  043d7fc  lwz 8, 8320(26)
  043d800  addic 3, 1, 144
  043d804  lfs 1, 120(1)
  043d808  addic 4, 1, 112
  043d80c  li 5, 16
  043d810  li 7, 0
  043d814  ori 6, 8, 0
  043d818  lfs 2, 16(8)
  043d81c  stfs 2, 144(1)
  043d820  lfs 2, 20(8)
  043d824  stfs 2, 148(1)
  043d828  lfs 2, 24(8)
  043d82c  stfs 2, 152(1)
  043d830  lfs 2, 28(8)
  043d834  stfs 1, 152(1)
  043d838  stfs 2, 156(1)
  043d83c  bl 0x57820
  043d840  nop
  043d844  cmpwi 3, 0
  043d848  bt 2, 0x43d890
  043d84c  bl 0x60780
  043d850  nop
  043d854  cmpwi 3, 0
  043d858  bt 2, 0x43d890
  043d85c  lis 3, 161
  043d860  addic 3, 3, 2368
  043d864  lwz 4, 28(3)
  043d868  cmpwi 4, 0
  043d86c  bf 1, 0x43d890
  043d870  lfs 1, 32(3)
  043d874  stfs 1, 16(31)
  043d878  lfs 1, 36(3)
  043d87c  stfs 1, 20(31)
  043d880  lfs 1, 40(3)
  043d884  stfs 1, 24(31)
  043d888  lfs 1, 44(3)
  043d88c  stfs 1, 28(31)
  043d890  addic 3, 1, 160
  043d894  bl 0x4fff60
  043d898  nop
  043d89c  cmpwi 3, 0
  043d8a0  bf 2, 0x43d96c
  043d8a4  lfs 2, 112(1)
  043d8a8  li 4, 10
  043d8ac  lfs 3, 116(1)
  043d8b0  lis 3, 114
  043d8b4  lfs 4, 120(1)
  043d8b8  mtctr 4
  043d8bc  lfs 1, 124(1)
  043d8c0  stfs 1, 140(1)
  043d8c4  stfs 2, 128(1)
  043d8c8  stfs 3, 132(1)
  043d8cc  stfs 4, 136(1)
  043d8d0  lfs 1, 52(27)
  043d8d4  fadds 2, 2, 31
  043d8d8  lfs 5, -3048(3)
  043d8dc  fadds 3, 3, 30
  043d8e0  fadds 4, 4, 29
  043d8e4  fnmsubs 29, 5, 1, 29
  043d8e8  stfs 2, 112(1)
  043d8ec  stfs 3, 116(1)
  043d8f0  stfs 4, 120(1)
  043d8f4  bdnz 0x43d8d4
  043d8f8  addic 3, 1, 128
  043d8fc  addic 4, 1, 112
  043d900  li 5, 18
  043d904  ori 6, 30, 0
  043d908  li 7, 0
  043d90c  bl 0x57820
  043d910  nop
  043d914  cmpwi 3, 0
  043d918  bt 2, 0x43d890
  043d91c  bl 0x60780
  043d920  nop
  043d924  cmpwi 3, 0
  043d928  bf 2, 0x43d938
  043d92c  lfs 1, 4(27)
  043d930  fcmpu 0, 29, 1
  043d934  bt 1, 0x43d890
  043d938  lis 3, 161
  043d93c  addic 3, 3, 2368
  043d940  lwz 4, 28(3)
  043d944  cmpwi 4, 0
  043d948  bf 1, 0x43d890
  043d94c  lfs 1, 32(3)
  043d950  stfs 1, 16(31)
  043d954  lfs 1, 36(3)
  043d958  stfs 1, 20(31)
  043d95c  lfs 1, 40(3)
  043d960  stfs 1, 24(31)
  043d964  lfs 1, 44(3)
  043d968  stfs 1, 28(31)
  043d96c  lwz 3, 160(1)
  043d970  cmpwi 3, 0
  043d974  bt 2, 0x43da8c
  043d978  cmpwi 29, 0
  043d97c  bf 2, 0x43d9a4
  043d980  lis 3, 161
  043d984  addic 3, 3, 2368
  043d988  lwz 3, 24(3)
  043d98c  cmpwi 3, 0
  043d990  bt 2, 0x43da8c
  043d994  bl 0x1122ac
  043d998  nop
  043d99c  cmpwi 3, 0
  043d9a0  bt 2, 0x43da8c
  043d9a4  cmpwi 29, 2
  043d9a8  bf 2, 0x43d9d0
  043d9ac  lis 3, 161
  043d9b0  addic 3, 3, 2368
  043d9b4  lwz 3, 24(3)
  043d9b8  cmpwi 3, 0
  043d9bc  bt 2, 0x43d9d0
  043d9c0  bl 0x1122ac
  043d9c4  nop
  043d9c8  cmpwi 3, 0
  043d9cc  bf 2, 0x43d9e4
  043d9d0  lis 3, 113
  043d9d4  ori 4, 30, 0
  043d9d8  addic 3, 3, -6736
  043d9dc  bl 0x6d720
  043d9e0  nop
  043d9e4  lis 3, 161
  043d9e8  lis 4, 149
  043d9ec  addic 3, 3, 2368
  043d9f0  addic 4, 4, 5056
  043d9f4  lfs 1, 64(3)
  043d9f8  stfs 1, 32(31)
  043d9fc  lfs 1, 68(3)
  043da00  stfs 1, 36(31)
  043da04  lfs 1, 72(3)
  043da08  lfs 2, 16(31)
  043da0c  stfs 1, 40(31)
  043da10  lfs 1, 76(3)
  043da14  lfs 3, 20(31)
  043da18  stfs 1, 44(31)
  043da1c  lfs 1, 320(4)
  043da20  lfs 4, 324(4)
  043da24  fsubs 2, 2, 1
  043da28  fsubs 3, 3, 4
  043da2c  lfs 4, 28(31)
  043da30  li 3, 1
  043da34  stfs 4, 140(1)
  043da38  lfs 4, 24(31)
  043da3c  lfs 5, 328(4)
  043da40  fsubs 4, 4, 5
  043da44  stfs 2, 128(1)
  043da48  stfs 3, 132(1)
  043da4c  lfs 6, 56(27)
  043da50  fmuls 2, 2, 6
  043da54  fmuls 3, 3, 6
  043da58  fmuls 4, 4, 6
  043da5c  fadds 1, 2, 1
  043da60  stfs 2, 128(1)
  043da64  stfs 3, 132(1)
  043da68  stfs 4, 136(1)
  043da6c  stfs 1, 16(31)
  043da70  lfs 1, 324(4)
  043da74  fadds 1, 3, 1
  043da78  stfs 1, 20(31)
  043da7c  lfs 1, 328(4)
  043da80  fadds 1, 4, 1
  043da84  stfs 1, 24(31)
  043da88  b 0x43da90
  043da8c  li 3, 0
  043da90  ld 0, 384(1)
  043da94  mtlr 0
  043da98  lfd 22, 288(1)
  043da9c  lfd 23, 296(1)
  043daa0  lfd 24, 304(1)
  043daa4  lfd 25, 312(1)
  043daa8  lfd 26, 320(1)
  043daac  lfd 27, 328(1)
  043dab0  lfd 28, 336(1)
  043dab4  lfd 29, 344(1)
  043dab8  lfd 30, 352(1)
  043dabc  lfd 31, 360(1)
  043dac0  ld 26, 240(1)
  043dac4  ld 27, 248(1)
  043dac8  ld 28, 256(1)
  043dacc  ld 29, 264(1)
  043dad0  ld 30, 272(1)
  043dad4  ld 31, 280(1)
  043dad8  addi 1, 1, 368
  043dadc  blr

UpdateMoby_74:   # 0x43dc00, 0x2760 bytes
  043dc00  stdu 1, -1392(1)
  043dc04  mflr 0
  043dc08  std 0, 1408(1)
  043dc0c  stfd 14, 1248(1)
  043dc10  stfd 15, 1256(1)
  043dc14  stfd 16, 1264(1)
  043dc18  stfd 17, 1272(1)
  043dc1c  stfd 18, 1280(1)
  043dc20  stfd 19, 1288(1)
  043dc24  stfd 20, 1296(1)
  043dc28  stfd 21, 1304(1)
  043dc2c  stfd 22, 1312(1)
  043dc30  stfd 23, 1320(1)
  043dc34  stfd 24, 1328(1)
  043dc38  stfd 25, 1336(1)
  043dc3c  stfd 26, 1344(1)
  043dc40  stfd 27, 1352(1)
  043dc44  stfd 28, 1360(1)
  043dc48  stfd 29, 1368(1)
  043dc4c  stfd 30, 1376(1)
  043dc50  stfd 31, 1384(1)
  043dc54  addi 0, 1, 1104
  043dc58  stvx 30, 0, 0
  043dc5c  addic 0, 0, 16
  043dc60  stvx 31, 0, 0
  043dc64  lis 4, 134
  043dc68  li 5, 16
  043dc6c  addic 6, 4, -23296
  043dc70  li 7, 32
  043dc74  li 9, -23296
  043dc78  li 10, 48
  043dc7c  li 8, 848
  043dc80  lvx 2, 5, 6
  043dc84  li 11, 864
  043dc88  lvx 3, 7, 6
  043dc8c  li 12, 880
  043dc90  std 30, 1232(1)
  043dc94  lvx 4, 9, 4
  043dc98  li 30, 928
  043dc9c  lvx 5, 10, 6
  043dca0  li 9, 896
  043dca4  stvx 4, 8, 1
  043dca8  lis 4, 68
  043dcac  li 8, 64
  043dcb0  stvx 2, 11, 1
  043dcb4  stvx 3, 12, 1
  043dcb8  li 11, 912
  043dcbc  lis 12, 134
  043dcc0  stvx 5, 9, 1
  043dcc4  li 9, -23216
  043dcc8  lvx 2, 8, 6
  043dccc  addic 6, 12, -23216
  043dcd0  stvx 2, 11, 1
  043dcd4  li 11, 944
  043dcd8  lvx 2, 9, 12
  043dcdc  li 9, 960
  043dce0  lvx 3, 5, 6
  043dce4  li 5, 976
  043dce8  lvx 4, 7, 6
  043dcec  lvx 5, 10, 6
  043dcf0  li 7, 992
  043dcf4  stvx 2, 30, 1
  043dcf8  addi 4, 4, -9504
  043dcfc  std 19, 1144(1)
  043dd00  stvx 3, 11, 1
  043dd04  li 19, 0
  043dd08  std 27, 1208(1)
  043dd0c  stvx 4, 9, 1
  043dd10  lis 27, 114
  043dd14  std 31, 1240(1)
  043dd18  stvx 5, 5, 1
  043dd1c  ori 31, 3, 0
  043dd20  std 21, 1160(1)
  043dd24  lvx 2, 8, 6
  043dd28  lis 21, 151
  043dd2c  lis 5, 16256
  043dd30  stvx 2, 7, 1
  043dd34  lfs 1, 0(4)
  043dd38  addic 21, 21, -25376
  043dd3c  stw 19, 192(1)
  043dd40  stw 19, 196(1)
  043dd44  stw 19, 200(1)
  043dd48  stw 19, 204(1)
  043dd4c  lfs 31, 4(4)
  043dd50  lfs 2, -3052(27)
  043dd54  stw 19, 224(1)
  043dd58  fmuls 2, 2, 31
  043dd5c  stw 19, 228(1)
  043dd60  lwz 30, 120(31)
  043dd64  lbz 3, 32(31)
  043dd68  cmpwi 1, 3, 0
  043dd6c  lbz 3, 8357(21)
  043dd70  stfd 1, 1056(1)
  043dd74  cmpwi 3, 0
  043dd78  lhz 3, 52(31)
  043dd7c  stfs 2, 200(1)
  043dd80  lfs 20, 8(4)
  043dd84  stw 5, 232(1)
  043dd88  std 29, 1224(1)
  043dd8c  std 28, 1216(1)
  043dd90  std 26, 1200(1)
  043dd94  std 25, 1192(1)
  043dd98  std 24, 1184(1)
  043dd9c  std 23, 1176(1)
  043dda0  std 22, 1168(1)
  043dda4  std 20, 1152(1)
  043dda8  stw 19, 236(1)
  043ddac  bf 2, 0x43ddbc
  043ddb0  lbz 4, 8367(21)
  043ddb4  cmpwi 4, 0
  043ddb8  bt 2, 0x43ddc8
  043ddbc  bf 6, 0x43ddc8
  043ddc0  ori 3, 3, 65
  043ddc4  b 0x43ddd0
  043ddc8  li 4, -66
  043ddcc  and 3, 3, 4
  043ddd0  sth 3, 52(31)
  043ddd4  lwz 3, 4240(21)
  043ddd8  cmpwi 3, 0
  043dddc  bt 2, 0x43ddec
  043dde0  lhz 3, 166(3)
  043dde4  cmpwi 3, 190
  043dde8  bt 2, 0x43de00
  043ddec  bf 6, 0x43de00
  043ddf0  ori 3, 31, 0
  043ddf4  bl 0xefb38
  043ddf8  nop
  043ddfc  b 0x4402c4
  043de00  lbz 3, 8356(21)
  043de04  cmpwi 3, 0
  043de08  bt 2, 0x43de20
  043de0c  bf 6, 0x43de20
  043de10  ori 3, 31, 0
  043de14  bl 0xefb38
  043de18  nop
  043de1c  b 0x4402c4
  043de20  lwz 3, 48(30)
  043de24  cmpwi 3, 0
  043de28  bt 2, 0x43decc
  043de2c  lbz 4, 32(3)
  043de30  cmpwi 1, 4, 253
  043de34  cmpwi 4, 254
  043de38  cror 2, 2, 6
  043de3c  bt 2, 0x43decc
  043de40  lhz 3, 166(3)
  043de44  cmpwi 3, 190
  043de48  bf 2, 0x43decc
  043de4c  lhz 3, 54(30)
  043de50  cmpwi 3, 0
  043de54  bf 2, 0x43decc
  043de58  ori 3, 30, 0
  043de5c  bl 0x5e8030
  043de60  nop
  043de64  lfd 2, 1056(1)
  043de68  fcmpu 0, 1, 2
  043de6c  cror 6, 0, 2
  043de70  bt 6, 0x43decc
  043de74  lwz 3, 764(21)
  043de78  cmpwi 3, 0
  043de7c  bt 2, 0x43de90
  043de80  bl 0x1122ac
  043de84  nop
  043de88  cmpwi 3, 0
  043de8c  bf 2, 0x43dea4
  043de90  ori 3, 30, 0
  043de94  ori 4, 31, 0
  043de98  li 5, 1
  043de9c  bl 0x43d268
  043dea0  b 0x43decc
  043dea4  ori 3, 30, 0
  043dea8  ori 4, 31, 0
  043deac  li 5, 0
  043deb0  bl 0x43d268
  043deb4  cmpwi 3, 0
  043deb8  bf 2, 0x43decc
  043debc  ori 3, 30, 0
  043dec0  ori 4, 31, 0
  043dec4  li 5, 2
  043dec8  bl 0x43d268
  043decc  lbz 3, 32(31)
  043ded0  cmpwi 3, 0
  043ded4  bf 2, 0x43df7c
  043ded8  lwz 21, 4240(21)
  043dedc  cmpwi 21, 0
  043dee0  bt 2, 0x43def0
  043dee4  lhz 3, 166(21)
  043dee8  cmpwi 3, 190
  043deec  bt 2, 0x43df00
  043def0  ori 3, 31, 0
  043def4  bl 0xefb38
  043def8  nop
  043defc  b 0x4402c4
  043df00  lis 3, 16457
  043df04  stw 19, 244(1)
  043df08  addic 29, 1, 720
  043df0c  ori 5, 3, 4059
  043df10  addic 4, 1, 240
  043df14  ori 3, 29, 0
  043df18  stw 5, 240(1)
  043df1c  stw 19, 248(1)
  043df20  stw 19, 252(1)
  043df24  bl 0x500ca4
  043df28  nop
  043df2c  addic 28, 1, 784
  043df30  lwz 3, 48(30)
  043df34  li 4, 0
  043df38  ori 5, 28, 0
  043df3c  bl 0xf1038
  043df40  nop
  043df44  ori 3, 29, 0
  043df48  ori 4, 28, 0
  043df4c  ori 5, 29, 0
  043df50  bl 0x50162c
  043df54  nop
  043df58  addic 3, 31, 192
  043df5c  ori 4, 29, 0
  043df60  bl 0x500fa8
  043df64  nop
  043df68  lhz 3, 52(31)
  043df6c  stw 19, 148(31)
  043df70  ori 3, 3, 256
  043df74  sth 3, 52(31)
  043df78  b 0x4402c4
  043df7c  lhz 5, 52(31)
  043df80  addic 26, 31, 16
  043df84  rlwimi 5, 19, 0, 23, 23
  043df88  addic 3, 1, 208
  043df8c  ori 4, 26, 0
  043df90  sth 5, 52(31)
  043df94  bl 0x5e7e98
  043df98  nop
  043df9c  lbz 3, 32(31)
  043dfa0  rlwinm 3, 3, 0, 29, 29
  043dfa4  cmpwi 3, 0
  043dfa8  bf 2, 0x43e0ac
  043dfac  ori 3, 26, 0
  043dfb0  ori 4, 26, 0
  043dfb4  ori 5, 30, 0
  043dfb8  bl 0x5e7f54
  043dfbc  nop
  043dfc0  lhz 3, 80(30)
  043dfc4  cmpwi 3, 0
  043dfc8  bf 2, 0x43dff0
  043dfcc  lis 3, 68
  043dfd0  lis 4, 114
  043dfd4  lfs 1, 8(30)
  043dfd8  addi 3, 3, -9504
  043dfdc  lfs 2, 12(3)
  043dfe0  lfs 3, -3048(4)
  043dfe4  fnmsubs 1, 3, 2, 1
  043dfe8  stfs 1, 8(30)
  043dfec  b 0x43e0ac
  043dff0  lis 3, 68
  043dff4  lis 4, 114
  043dff8  addi 3, 3, -9504
  043dffc  lfs 1, 12(3)
  043e000  lfs 2, -3048(4)
  043e004  lfs 30, 16(3)
  043e008  fmuls 1, 2, 1
  043e00c  lfs 3, 8(30)
  043e010  lis 4, 114
  043e014  fnmsubs 1, 1, 30, 3
  043e018  stfs 1, 8(30)
  043e01c  lfs 1, 20(3)
  043e020  lfs 2, -3056(4)
  043e024  fmuls 1, 2, 1
  043e028  fctiwz 1, 1
  043e02c  stfd 1, 1072(1)
  043e030  lwz 3, 1076(1)
  043e034  addic 3, 3, -1
  043e038  extsw 3, 3
  043e03c  bl 0xfc620
  043e040  nop
  043e044  cmpwi 3, 0
  043e048  bf 2, 0x43e0ac
  043e04c  addic 29, 1, 256
  043e050  ori 3, 26, 0
  043e054  ori 4, 29, 0
  043e058  bl 0x105f40
  043e05c  nop
  043e060  lis 3, 68
  043e064  fmr 29, 1
  043e068  ori 4, 30, 0
  043e06c  addi 28, 3, -9504
  043e070  ori 3, 29, 0
  043e074  lfs 1, 24(28)
  043e078  bl 0x5e822c
  043e07c  nop
  043e080  lfs 1, 28(28)
  043e084  fmr 2, 30
  043e088  bl 0xfcbe8
  043e08c  nop
  043e090  lfs 3, 32(28)
  043e094  ori 3, 26, 0
  043e098  ori 4, 29, 0
  043e09c  fmr 2, 29
  043e0a0  fmuls 1, 1, 3
  043e0a4  bl 0x12a440
  043e0a8  nop
  043e0ac  lis 3, 68
  043e0b0  lis 4, 131
  043e0b4  stw 31, 640(1)
  043e0b8  addi 29, 3, -9504
  043e0bc  lis 5, 16448
  043e0c0  li 25, 1
  043e0c4  addic 28, 1, 624
  043e0c8  stw 4, 644(1)
  043e0cc  lfs 30, 36(29)
  043e0d0  ori 3, 28, 0
  043e0d4  stw 5, 652(1)
  043e0d8  ori 4, 30, 0
  043e0dc  stw 25, 656(1)
  043e0e0  bl 0x5e7e98
  043e0e4  nop
  043e0e8  ori 3, 28, 0
  043e0ec  fmr 1, 20
  043e0f0  ori 4, 28, 0
  043e0f4  bl 0x5e84c0
  043e0f8  nop
  043e0fc  lis 3, 17839
  043e100  li 4, 2
  043e104  lhz 6, 166(31)
  043e108  lis 5, 16256
  043e10c  ori 3, 3, 57190
  043e110  stb 4, 648(1)
  043e114  stw 5, 632(1)
  043e118  stw 3, 636(1)
  043e11c  stb 25, 649(1)
  043e120  sth 6, 650(1)
  043e124  lis 3, 161
  043e128  lfs 23, 40(29)
  043e12c  lfs 2, 24(31)
  043e130  lwz 4, 116(30)
  043e134  fsubs 1, 2, 23
  043e138  lwz 3, 1808(3)
  043e13c  subc 3, 3, 4
  043e140  extsw 3, 3
  043e144  stfs 1, 24(31)
  043e148  bl 0x502730
  043e14c  nop
  043e150  lis 3, 134
  043e154  lis 24, 114
  043e158  lfs 2, -23424(3)
  043e15c  lfs 3, -3056(24)
  043e160  fmuls 28, 2, 3
  043e164  lfs 29, 24(31)
  043e168  fdivs 28, 1, 28
  043e16c  lfs 1, 112(30)
  043e170  fcmpu 0, 28, 20
  043e174  cror 6, 0, 2
  043e178  bt 6, 0x43e184
  043e17c  fmr 28, 20
  043e180  b 0x43e198
  043e184  lfd 2, 1056(1)
  043e188  fcmpu 0, 28, 2
  043e18c  cror 6, 1, 2
  043e190  bt 6, 0x43e198
  043e194  lfd 28, 1056(1)
  043e198  bl 0x5e8128
  043e19c  nop
  043e1a0  lfs 2, 108(30)
  043e1a4  lbz 3, 32(31)
  043e1a8  fmuls 1, 2, 1
  043e1ac  rlwinm 4, 3, 0, 29, 29
  043e1b0  cmpwi 4, 0
  043e1b4  fnmsubs 1, 1, 28, 29
  043e1b8  stfs 1, 24(31)
  043e1bc  bf 2, 0x43e9c8
  043e1c0  addic 3, 1, 208
  043e1c4  ori 4, 26, 0
  043e1c8  addic 7, 1, 624
  043e1cc  li 5, 16
  043e1d0  ori 6, 31, 0
  043e1d4  bl 0x57820
  043e1d8  nop
  043e1dc  ori 4, 3, 0
  043e1e0  lbz 3, 32(31)
  043e1e4  cmpwi 4, 0
  043e1e8  bt 2, 0x43e9c8
  043e1ec  lhz 3, 80(30)
  043e1f0  cmpwi 3, 0
  043e1f4  bf 2, 0x43e368
  043e1f8  bl 0x60780
  043e1fc  nop
  043e200  cmpwi 3, 0
  043e204  bf 2, 0x43e368
  043e208  lwz 3, 8(30)
  043e20c  cmpwi 3, 0
  043e210  bf 0, 0x43e368
  043e214  lis 3, 230
  043e218  lis 4, 230
  043e21c  lis 5, 68
  043e220  li 9, 1
  043e224  addi 29, 5, -9504
  043e228  lwz 3, -21888(3)
  043e22c  lwz 4, -21880(4)
  043e230  lfs 1, 16(31)
  043e234  lfs 2, 20(31)
  043e238  lfs 3, 44(29)
  043e23c  extsw 4, 4
  043e240  lfs 4, 48(29)
  043e244  bl 0x17bd90
  043e248  nop
  043e24c  sth 25, 80(30)
  043e250  ori 3, 30, 0
  043e254  bl 0x5e7e70
  043e258  nop
  043e25c  lfs 3, 52(29)
  043e260  lfs 2, -3052(27)
  043e264  lis 3, 161
  043e268  fmr 1, 31
  043e26c  fmuls 2, 2, 3
  043e270  addic 4, 3, 2368
  043e274  addic 3, 1, 272
  043e278  stfs 2, 8(30)
  043e27c  lfs 2, 16(31)
  043e280  lfs 3, 20(31)
  043e284  stfs 2, 272(1)
  043e288  stfs 3, 276(1)
  043e28c  lfs 2, 40(4)
  043e290  stfs 2, 280(1)
  043e294  bl 0x456478
  043e298  nop
  043e29c  cmpwi 3, 0
  043e2a0  bt 2, 0x43e2ac
  043e2a4  li 4, 112
  043e2a8  stb 4, 35(3)
  043e2ac  lis 3, 68
  043e2b0  ori 29, 19, 0
  043e2b4  addi 3, 3, -9504
  043e2b8  lfs 29, 20(3)
  043e2bc  bl 0xfcc68
  043e2c0  nop
  043e2c4  fmr 28, 1
  043e2c8  lfs 2, -3052(27)
  043e2cc  lfd 1, 1056(1)
  043e2d0  fmuls 2, 2, 30
  043e2d4  bl 0xfcbe8
  043e2d8  nop
  043e2dc  fmr 27, 1
  043e2e0  fmr 1, 28
  043e2e4  bl 0x5e8078
  043e2e8  nop
  043e2ec  fmuls 2, 1, 27
  043e2f0  fmr 1, 28
  043e2f4  stfs 2, 288(1)
  043e2f8  bl 0x5e8128
  043e2fc  nop
  043e300  fmuls 3, 1, 27
  043e304  lfs 2, -3052(27)
  043e308  fmuls 1, 2, 30
  043e30c  fmuls 2, 2, 29
  043e310  stfs 3, 292(1)
  043e314  bl 0xfcbe8
  043e318  nop
  043e31c  li 3, 90
  043e320  stfs 1, 296(1)
  043e324  li 4, 120
  043e328  bl 0xfe484
  043e32c  nop
  043e330  ori 28, 3, 0
  043e334  li 3, 2
  043e338  bl 0xfc620
  043e33c  nop
  043e340  ori 5, 3, 0
  043e344  addic 3, 1, 272
  043e348  addic 4, 1, 288
  043e34c  ori 6, 28, 0
  043e350  bl 0x12ab08
  043e354  nop
  043e358  addic 29, 29, 1
  043e35c  cmpwi 29, 16
  043e360  bt 0, 0x43e2bc
  043e364  b 0x43f0a4
  043e368  lhz 3, 80(30)
  043e36c  cmpwi 3, 0
  043e370  bf 2, 0x43e384
  043e374  bl 0x60780
  043e378  nop
  043e37c  cmpwi 3, 0
  043e380  bt 2, 0x43f0a4
  043e384  lis 23, 161
  043e388  addic 23, 23, 2368
  043e38c  lwz 3, 24(23)
  043e390  cmpwi 3, 0
  043e394  bt 2, 0x43e434
  043e398  bl 0x10af88
  043e39c  nop
  043e3a0  cmpwi 3, 0
  043e3a4  lwz 3, 24(23)
  043e3a8  lhz 4, 166(31)
  043e3ac  lwz 5, 8320(21)
  043e3b0  lbz 6, 32(31)
  043e3b4  bf 2, 0x43e3cc
  043e3b8  li 7, 20480
  043e3bc  lhz 8, 52(3)
  043e3c0  and 7, 8, 7
  043e3c4  cmpwi 7, 0
  043e3c8  bt 2, 0x43e434
  043e3cc  cmpw 1, 3, 5
  043e3d0  lhz 5, 166(3)
  043e3d4  extsh 4, 4
  043e3d8  extsh 5, 5
  043e3dc  cmpw 5, 4
  043e3e0  cror 2, 2, 6
  043e3e4  bt 2, 0x43e434
  043e3e8  lwz 4, 48(30)
  043e3ec  cmpw 3, 4
  043e3f0  bt 2, 0x43e434
  043e3f4  cmpwi 6, 1
  043e3f8  stb 25, 188(31)
  043e3fc  bt 2, 0x43f0a4
  043e400  ori 3, 26, 0
  043e404  addic 4, 23, 32
  043e408  bl 0x5e7e98
  043e40c  nop
  043e410  lis 3, 68
  043e414  li 4, 0
  043e418  addi 5, 3, -9504
  043e41c  ori 3, 26, 0
  043e420  lfs 1, 44(5)
  043e424  bl 0xffb70
  043e428  nop
  043e42c  stfs 1, 24(31)
  043e430  b 0x43f0a4
  043e434  cmpwi 3, 0
  043e438  bt 2, 0x43e670
  043e43c  lhz 4, 166(3)
  043e440  lhz 5, 166(31)
  043e444  extsh 4, 4
  043e448  extsh 5, 5
  043e44c  cmpw 4, 5
  043e450  bf 2, 0x43e658
  043e454  addic 29, 23, 64
  043e458  addic 5, 3, 16
  043e45c  ori 3, 29, 0
  043e460  ori 4, 26, 0
  043e464  bl 0x5e81f0
  043e468  nop
  043e46c  lis 3, 68
  043e470  lfs 1, -3052(27)
  043e474  addi 3, 3, -9504
  043e478  lfs 2, 8(30)
  043e47c  lfs 3, 56(3)
  043e480  fmuls 1, 1, 3
  043e484  fcmpu 0, 2, 1
  043e488  cror 6, 1, 2
  043e48c  bt 6, 0x43e4ec
  043e490  addic 4, 23, 32
  043e494  stb 25, 188(31)
  043e498  ori 3, 26, 0
  043e49c  bl 0x5e7e98
  043e4a0  nop
  043e4a4  addic 28, 1, 192
  043e4a8  ori 4, 30, 0
  043e4ac  ori 3, 28, 0
  043e4b0  ori 5, 29, 0
  043e4b4  bl 0x500608
  043e4b8  nop
  043e4bc  lfs 1, -3052(27)
  043e4c0  ori 3, 28, 0
  043e4c4  ori 4, 28, 0
  043e4c8  fmuls 1, 1, 31
  043e4cc  bl 0x5e7f98
  043e4d0  nop
  043e4d4  addic 3, 1, 224
  043e4d8  fmr 1, 20
  043e4dc  ori 4, 29, 0
  043e4e0  bl 0x5e7f98
  043e4e4  nop
  043e4e8  b 0x43f0a4
  043e4ec  ori 3, 26, 0
  043e4f0  addic 4, 23, 32
  043e4f4  bl 0x5e7e98
  043e4f8  nop
  043e4fc  lis 3, 68
  043e500  lis 5, 114
  043e504  addi 28, 3, -9504
  043e508  addic 23, 1, 304
  043e50c  ori 4, 29, 0
  043e510  ori 3, 23, 0
  043e514  lfs 1, 60(28)
  043e518  lfs 2, -3048(5)
  043e51c  fmuls 1, 2, 1
  043e520  bl 0x5e7f98
  043e524  nop
  043e528  ori 3, 26, 0
  043e52c  ori 4, 26, 0
  043e530  ori 5, 23, 0
  043e534  bl 0x5e7f54
  043e538  nop
  043e53c  ori 3, 30, 0
  043e540  ori 4, 30, 0
  043e544  ori 5, 29, 0
  043e548  bl 0x500608
  043e54c  nop
  043e550  ori 3, 30, 0
  043e554  fmr 1, 23
  043e558  ori 4, 30, 0
  043e55c  bl 0x5e822c
  043e560  nop
  043e564  ori 3, 23, 0
  043e568  ori 4, 29, 0
  043e56c  fmr 1, 20
  043e570  bl 0x5e7f98
  043e574  nop
  043e578  addic 4, 1, 224
  043e57c  ori 3, 23, 0
  043e580  bl 0x5e81c0
  043e584  nop
  043e588  addic 3, 1, 320
  043e58c  ori 4, 29, 0
  043e590  bl 0x5e7e98
  043e594  nop
  043e598  lfs 1, 72(31)
  043e59c  bl 0x5e8078
  043e5a0  nop
  043e5a4  fmr 29, 1
  043e5a8  lfs 1, 72(31)
  043e5ac  lfs 28, 320(1)
  043e5b0  bl 0x5e8128
  043e5b4  nop
  043e5b8  lfs 2, 324(1)
  043e5bc  fmuls 2, 2, 1
  043e5c0  lfs 1, 72(31)
  043e5c4  fmadds 29, 28, 29, 2
  043e5c8  bl 0x5e8078
  043e5cc  nop
  043e5d0  fmr 28, 1
  043e5d4  lfs 1, 72(31)
  043e5d8  lfs 27, 324(1)
  043e5dc  bl 0x5e8128
  043e5e0  nop
  043e5e4  lfs 26, 328(1)
  043e5e8  lfs 2, 320(1)
  043e5ec  fmuls 3, 26, 26
  043e5f0  fmuls 2, 2, 1
  043e5f4  lfs 25, 64(31)
  043e5f8  fmadds 1, 29, 29, 3
  043e5fc  fmsubs 2, 27, 28, 2
  043e600  fsqrts 1, 1
  043e604  bl 0x5e8338
  043e608  nop
  043e60c  lfs 28, 64(28)
  043e610  fmr 3, 28
  043e614  fneg 2, 1
  043e618  fmr 1, 25
  043e61c  bl 0x4d04e0
  043e620  nop
  043e624  stfs 1, 64(31)
  043e628  fmr 1, 26
  043e62c  lfs 27, 68(31)
  043e630  fmr 2, 29
  043e634  bl 0x5e8338
  043e638  nop
  043e63c  fmr 2, 1
  043e640  fmr 1, 27
  043e644  fmr 3, 28
  043e648  bl 0x4d04e0
  043e64c  nop
  043e650  stfs 1, 68(31)
  043e654  b 0x43f0a4
  043e658  lwz 4, 8320(21)
  043e65c  cmpw 3, 4
  043e660  bt 2, 0x43e670
  043e664  lwz 4, 48(30)
  043e668  cmpw 3, 4
  043e66c  bf 2, 0x43e67c
  043e670  lwz 3, 28(23)
  043e674  cmpwi 3, 0
  043e678  bf 1, 0x43f0a4
  043e67c  lhz 3, 80(30)
  043e680  cmpwi 3, 0
  043e684  bf 2, 0x43e6bc
  043e688  bl 0x60780
  043e68c  nop
  043e690  cmpwi 3, 0
  043e694  bt 2, 0x43e6bc
  043e698  lis 3, 68
  043e69c  lfs 1, -3052(27)
  043e6a0  addi 3, 3, -9504
  043e6a4  lfs 2, 56(3)
  043e6a8  lfs 3, 8(30)
  043e6ac  fmuls 1, 1, 2
  043e6b0  fcmpu 0, 3, 1
  043e6b4  cror 6, 1, 2
  043e6b8  bt 6, 0x43e71c
  043e6bc  addic 4, 23, 32
  043e6c0  ori 3, 26, 0
  043e6c4  stb 25, 188(31)
  043e6c8  bl 0x5e7e98
  043e6cc  nop
  043e6d0  addic 29, 1, 192
  043e6d4  addic 28, 23, 64
  043e6d8  ori 3, 29, 0
  043e6dc  ori 4, 30, 0
  043e6e0  ori 5, 28, 0
  043e6e4  bl 0x500608
  043e6e8  nop
  043e6ec  lfs 1, -3052(27)
  043e6f0  ori 3, 29, 0
  043e6f4  ori 4, 29, 0
  043e6f8  fmuls 1, 1, 31
  043e6fc  bl 0x5e7f98
  043e700  nop
  043e704  addic 3, 1, 224
  043e708  fmr 1, 20
  043e70c  ori 4, 28, 0
  043e710  bl 0x5e7f98
  043e714  nop
  043e718  b 0x43f0a4
  043e71c  lwz 3, 24(23)
  043e720  ori 29, 19, 0
  043e724  cmpwi 3, 0
  043e728  bt 2, 0x43e738
  043e72c  bl 0x1122ac
  043e730  nop
  043e734  ori 29, 3, 0
  043e738  lfs 1, 32(23)
  043e73c  lis 3, 68
  043e740  addic 22, 1, 336
  043e744  stfs 1, 16(31)
  043e748  lfs 1, 36(23)
  043e74c  addi 20, 3, -9504
  043e750  lis 3, 114
  043e754  stfs 1, 20(31)
  043e758  lfs 1, 40(23)
  043e75c  addic 28, 23, 64
  043e760  stfs 1, 24(31)
  043e764  ori 4, 28, 0
  043e768  lfs 1, 44(23)
  043e76c  stfs 1, 28(31)
  043e770  lfs 2, -3048(3)
  043e774  lfs 1, 60(20)
  043e778  ori 3, 22, 0
  043e77c  fmuls 1, 2, 1
  043e780  bl 0x5e7f98
  043e784  nop
  043e788  ori 5, 22, 0
  043e78c  ori 3, 26, 0
  043e790  ori 4, 26, 0
  043e794  bl 0x5e7f54
  043e798  nop
  043e79c  lwz 22, 8(30)
  043e7a0  lfs 29, 8(30)
  043e7a4  ori 3, 30, 0
  043e7a8  ori 4, 30, 0
  043e7ac  ori 5, 28, 0
  043e7b0  bl 0x500608
  043e7b4  nop
  043e7b8  lfs 1, 68(20)
  043e7bc  ori 3, 30, 0
  043e7c0  ori 4, 30, 0
  043e7c4  bl 0x5e822c
  043e7c8  nop
  043e7cc  lfs 28, 44(20)
  043e7d0  lfs 1, 8(30)
  043e7d4  lis 4, 161
  043e7d8  lwz 3, 108(30)
  043e7dc  fmuls 1, 1, 28
  043e7e0  cmpwi 3, 0
  043e7e4  lwz 3, 1808(4)
  043e7e8  stfs 1, 8(30)
  043e7ec  bf 2, 0x43e820
  043e7f0  fabs 1, 29
  043e7f4  lfd 2, 1056(1)
  043e7f8  lis 4, 68
  043e7fc  fsub 2, 2, 29
  043e800  addi 4, 4, -9504
  043e804  fmuls 1, 1, 31
  043e808  stfs 1, 108(30)
  043e80c  lfs 1, 72(4)
  043e810  lfs 3, 76(4)
  043e814  stw 3, 116(30)
  043e818  fsel 1, 2, 3, 1
  043e81c  stfs 1, 112(30)
  043e820  addic 20, 1, 336
  043e824  fmr 1, 20
  043e828  ori 4, 28, 0
  043e82c  ori 3, 20, 0
  043e830  bl 0x5e7f98
  043e834  nop
  043e838  ori 3, 20, 0
  043e83c  addic 4, 1, 224
  043e840  bl 0x5e81c0
  043e844  nop
  043e848  lis 3, 68
  043e84c  addi 3, 3, -9504
  043e850  lfs 2, 80(3)
  043e854  fcmpu 0, 1, 2
  043e858  cror 6, 0, 2
  043e85c  bt 6, 0x43e900
  043e860  cmpwi 22, 0
  043e864  bf 0, 0x43e900
  043e868  fmr 1, 28
  043e86c  ori 3, 26, 0
  043e870  li 4, 0
  043e874  bl 0xffb70
  043e878  nop
  043e87c  lfs 2, 24(31)
  043e880  fcmpu 0, 2, 1
  043e884  cror 6, 1, 2
  043e888  bt 6, 0x43e890
  043e88c  stfs 1, 24(31)
  043e890  lfs 1, 8(30)
  043e894  ori 3, 30, 0
  043e898  fneg 1, 1
  043e89c  stfs 1, 8(30)
  043e8a0  bl 0x5e8030
  043e8a4  nop
  043e8a8  lfs 2, -3052(27)
  043e8ac  fmuls 2, 2, 28
  043e8b0  fcmpu 0, 1, 2
  043e8b4  bt 0, 0x43e8c0
  043e8b8  cmpwi 29, 0
  043e8bc  bt 2, 0x43e900
  043e8c0  stw 19, 12(30)
  043e8c4  cmpwi 1, 29, 0
  043e8c8  stw 19, 8(30)
  043e8cc  stw 19, 4(30)
  043e8d0  stw 19, 0(30)
  043e8d4  lbz 3, 32(31)
  043e8d8  lwz 4, 36(31)
  043e8dc  ori 3, 3, 4
  043e8e0  stb 3, 32(31)
  043e8e4  lwz 3, 16(4)
  043e8e8  stw 3, 148(31)
  043e8ec  lwz 3, 24(23)
  043e8f0  cmpwi 3, 0
  043e8f4  cror 2, 2, 6
  043e8f8  bt 2, 0x43e900
  043e8fc  stw 3, 76(30)
  043e900  lfs 29, 64(23)
  043e904  lfs 1, 72(31)
  043e908  lfs 28, 68(23)
  043e90c  lfs 27, 72(23)
  043e910  bl 0x5e8078
  043e914  nop
  043e918  lfs 2, 72(31)
  043e91c  fmr 26, 1
  043e920  fmr 1, 2
  043e924  bl 0x5e8128
  043e928  nop
  043e92c  fmuls 2, 28, 1
  043e930  lfs 1, 72(31)
  043e934  fmadds 26, 29, 26, 2
  043e938  bl 0x5e8078
  043e93c  nop
  043e940  lfs 2, 72(31)
  043e944  fmr 25, 1
  043e948  fmr 1, 2
  043e94c  bl 0x5e8128
  043e950  nop
  043e954  fmuls 2, 27, 27
  043e958  fmuls 1, 29, 1
  043e95c  lfs 29, 64(31)
  043e960  fmadds 3, 26, 26, 2
  043e964  fmsubs 2, 28, 25, 1
  043e968  fsqrts 1, 3
  043e96c  bl 0x5e8338
  043e970  nop
  043e974  lis 3, 68
  043e978  addi 3, 3, -9504
  043e97c  fneg 2, 1
  043e980  fmr 1, 29
  043e984  lfs 29, 64(3)
  043e988  fmr 3, 29
  043e98c  bl 0x4d04e0
  043e990  nop
  043e994  stfs 1, 64(31)
  043e998  fmr 1, 27
  043e99c  lfs 28, 68(31)
  043e9a0  fmr 2, 26
  043e9a4  bl 0x5e8338
  043e9a8  nop
  043e9ac  fmr 2, 1
  043e9b0  fmr 1, 28
  043e9b4  fmr 3, 29
  043e9b8  bl 0x4d04e0
  043e9bc  nop
  043e9c0  stfs 1, 68(31)
  043e9c4  b 0x43f0a4
  043e9c8  rlwinm 3, 3, 0, 29, 29
  043e9cc  cmpwi 3, 0
  043e9d0  bt 2, 0x43f0a4
  043e9d4  lis 3, 68
  043e9d8  li 4, 0
  043e9dc  addi 5, 3, -9504
  043e9e0  ori 3, 26, 0
  043e9e4  lfs 1, 44(5)
  043e9e8  bl 0xffb70
  043e9ec  nop
  043e9f0  lwz 3, 76(30)
  043e9f4  cmpwi 3, 0
  043e9f8  bt 2, 0x43eb0c
  043e9fc  lbz 3, 32(3)
  043ea00  cmpwi 3, 254
  043ea04  cmpwi 1, 3, 253
  043ea08  bt 2, 0x43ea10
  043ea0c  bf 6, 0x43ea1c
  043ea10  stb 25, 188(31)
  043ea14  stw 19, 76(30)
  043ea18  b 0x43ea70
  043ea1c  lis 3, 161
  043ea20  addic 29, 3, 2368
  043ea24  lwz 29, 24(29)
  043ea28  cmpwi 29, 0
  043ea2c  bt 2, 0x43ea70
  043ea30  ori 3, 29, 0
  043ea34  bl 0x1122ac
  043ea38  nop
  043ea3c  ori 29, 3, 0
  043ea40  cmpwi 29, 0
  043ea44  bt 2, 0x43ea68
  043ea48  addic 6, 31, 64
  043ea4c  lwz 4, 76(30)
  043ea50  ori 3, 31, 0
  043ea54  ori 8, 6, 0
  043ea58  ori 5, 26, 0
  043ea5c  ori 7, 26, 0
  043ea60  bl 0x1122e0
  043ea64  nop
  043ea68  cmpwi 29, 0
  043ea6c  bf 2, 0x43ec14
  043ea70  stb 25, 32(31)
  043ea74  lwz 3, 104(30)
  043ea78  cmpwi 3, -1
  043ea7c  bt 2, 0x43eac0
  043ea80  sldi 4, 3, 7
  043ea84  sldi 6, 3, 4
  043ea88  lis 5, 150
  043ea8c  subc 4, 4, 6
  043ea90  addic 5, 5, 14176
  043ea94  extsw 4, 4
  043ea98  addc 4, 5, 4
  043ea9c  lwz 5, 136(4)
  043eaa0  cmpw 5, 31
  043eaa4  bf 2, 0x43eac0
  043eaa8  lbz 4, 116(4)
  043eaac  cmpwi 4, 0
  043eab0  bt 2, 0x43eac0
  043eab4  extsw 3, 3
  043eab8  bl 0x15cdb0
  043eabc  nop
  043eac0  lis 5, 68
  043eac4  vspltisw 2, -1
  043eac8  li 3, -1
  043eacc  li 4, 84
  043ead0  addi 5, 5, -9504
  043ead4  vslw 2, 2, 2
  043ead8  stw 3, 104(30)
  043eadc  li 3, -3056
  043eae0  stw 19, 8(30)
  043eae4  lvlx 3, 4, 5
  043eae8  vspltw 3, 3, 0
  043eaec  lvlx 4, 3, 24
  043eaf0  li 3, 52
  043eaf4  vmaddfp 2, 4, 3, 2
  043eaf8  vctsxs 2, 2, 0
  043eafc  vsplth 2, 2, 1
  043eb00  stvehx 2, 3, 30
  043eb04  stw 19, 76(30)
  043eb08  b 0x43ec14
  043eb0c  lbz 3, 32(31)
  043eb10  rlwinm 3, 3, 0, 27, 27
  043eb14  cmpwi 3, 0
  043eb18  bf 2, 0x43ec14
  043eb1c  lis 3, 68
  043eb20  lis 4, 114
  043eb24  lfs 2, 24(31)
  043eb28  addi 3, 3, -9504
  043eb2c  fsubs 2, 2, 1
  043eb30  lfs 3, 88(3)
  043eb34  lfs 4, -3048(4)
  043eb38  fmuls 3, 4, 3
  043eb3c  fcmpu 0, 2, 3
  043eb40  cror 6, 1, 2
  043eb44  bt 6, 0x43eb80
  043eb48  lis 29, 161
  043eb4c  stfs 1, 24(31)
  043eb50  sth 19, 52(30)
  043eb54  addic 29, 29, 2368
  043eb58  lwz 3, 24(29)
  043eb5c  cmpwi 3, 0
  043eb60  bt 2, 0x43ec14
  043eb64  bl 0x1122ac
  043eb68  nop
  043eb6c  cmpwi 3, 0
  043eb70  bt 2, 0x43ec14
  043eb74  lwz 3, 24(29)
  043eb78  stw 3, 76(30)
  043eb7c  b 0x43ec14
  043eb80  stb 25, 32(31)
  043eb84  lwz 3, 104(30)
  043eb88  cmpwi 3, -1
  043eb8c  bt 2, 0x43ebd0
  043eb90  sldi 4, 3, 7
  043eb94  sldi 6, 3, 4
  043eb98  lis 5, 150
  043eb9c  subc 4, 4, 6
  043eba0  addic 5, 5, 14176
  043eba4  extsw 4, 4
  043eba8  addc 4, 5, 4
  043ebac  lwz 5, 136(4)
  043ebb0  cmpw 5, 31
  043ebb4  bf 2, 0x43ebd0
  043ebb8  lbz 4, 116(4)
  043ebbc  cmpwi 4, 0
  043ebc0  bt 2, 0x43ebd0
  043ebc4  extsw 3, 3
  043ebc8  bl 0x15cdb0
  043ebcc  nop
  043ebd0  lis 5, 68
  043ebd4  vspltisw 2, -1
  043ebd8  li 3, -1
  043ebdc  li 4, 84
  043ebe0  addi 5, 5, -9504
  043ebe4  vslw 2, 2, 2
  043ebe8  stw 3, 104(30)
  043ebec  li 3, -3056
  043ebf0  stw 19, 8(30)
  043ebf4  lvlx 3, 4, 5
  043ebf8  vspltw 3, 3, 0
  043ebfc  lvlx 4, 3, 24
  043ec00  li 3, 52
  043ec04  vmaddfp 2, 4, 3, 2
  043ec08  vctsxs 2, 2, 0
  043ec0c  vsplth 2, 2, 1
  043ec10  stvehx 2, 3, 30
  043ec14  lwz 3, 84(30)
  043ec18  cmpwi 3, 0
  043ec1c  bt 2, 0x43ec44
  043ec20  lbz 4, 32(3)
  043ec24  cmpwi 1, 4, 253
  043ec28  cmpwi 4, 254
  043ec2c  cror 2, 2, 6
  043ec30  bt 2, 0x43ec44
  043ec34  lhz 4, 52(3)
  043ec38  rlwinm 4, 4, 0, 19, 19
  043ec3c  cmpwi 4, 0
  043ec40  bf 2, 0x43ed14
  043ec44  lbz 4, 32(31)
  043ec48  rlwinm 4, 4, 0, 27, 27
  043ec4c  cmpwi 4, 0
  043ec50  bt 2, 0x43ed14
  043ec54  stb 25, 32(31)
  043ec58  lwz 3, 104(30)
  043ec5c  cmpwi 3, -1
  043ec60  bt 2, 0x43eca4
  043ec64  sldi 4, 3, 7
  043ec68  sldi 6, 3, 4
  043ec6c  lis 5, 150
  043ec70  subc 4, 4, 6
  043ec74  addic 5, 5, 14176
  043ec78  extsw 4, 4
  043ec7c  addc 4, 5, 4
  043ec80  lwz 5, 136(4)
  043ec84  cmpw 5, 31
  043ec88  bf 2, 0x43eca4
  043ec8c  lbz 4, 116(4)
  043ec90  cmpwi 4, 0
  043ec94  bt 2, 0x43eca4
  043ec98  extsw 3, 3
  043ec9c  bl 0x15cdb0
  043eca0  nop
  043eca4  li 3, -1
  043eca8  lis 4, 68
  043ecac  vspltisw 2, -1
  043ecb0  li 6, 84
  043ecb4  addi 4, 4, -9504
  043ecb8  stw 3, 104(30)
  043ecbc  li 5, -3056
  043ecc0  stw 19, 8(30)
  043ecc4  stw 19, 84(30)
  043ecc8  vslw 2, 2, 2
  043eccc  lvlx 3, 6, 4
  043ecd0  lvlx 4, 5, 24
  043ecd4  li 3, 52
  043ecd8  vspltw 3, 3, 0
  043ecdc  vmaddfp 2, 4, 3, 2
  043ece0  vctsxs 2, 2, 0
  043ece4  vsplth 2, 2, 1
  043ece8  stvehx 2, 3, 30
  043ecec  lbz 3, 83(31)
  043ecf0  cmpwi 3, 0
  043ecf4  bt 2, 0x43f030
  043ecf8  ori 3, 31, 0
  043ecfc  li 4, 0
  043ed00  li 5, 0
  043ed04  li 6, 10
  043ed08  bl 0xfddc0
  043ed0c  nop
  043ed10  lwz 3, 84(30)
  043ed14  cmpwi 3, 0
  043ed18  bt 2, 0x43f030
  043ed1c  lbz 3, 32(31)
  043ed20  rlwinm 3, 3, 0, 27, 27
  043ed24  cmpwi 3, 0
  043ed28  bt 2, 0x43f030
  043ed2c  lbz 3, 112(31)
  043ed30  rlwinm 3, 3, 0, 30, 30
  043ed34  cmpwi 3, 0
  043ed38  bt 2, 0x43ed6c
  043ed3c  lbz 3, 82(31)
  043ed40  cmpwi 3, 1
  043ed44  bf 2, 0x43ed6c
  043ed48  lbz 3, 83(31)
  043ed4c  cmpwi 3, 2
  043ed50  bt 2, 0x43ed6c
  043ed54  ori 3, 31, 0
  043ed58  li 4, 2
  043ed5c  li 5, 0
  043ed60  li 6, 10
  043ed64  bl 0xfddc0
  043ed68  nop
  043ed6c  ori 3, 31, 0
  043ed70  lwz 4, 104(30)
  043ed74  extsw 4, 4
  043ed78  bl 0x15cc7c
  043ed7c  nop
  043ed80  cmpwi 3, 0
  043ed84  bf 2, 0x43eda0
  043ed88  li 3, 1
  043ed8c  li 4, 4
  043ed90  ori 5, 31, 0
  043ed94  bl 0x15d12c
  043ed98  nop
  043ed9c  stw 3, 104(30)
  043eda0  lis 3, 68
  043eda4  lfs 1, 64(30)
  043eda8  lis 4, 114
  043edac  addi 3, 3, -9504
  043edb0  lfs 2, 92(3)
  043edb4  lfs 3, -3048(4)
  043edb8  fmadds 2, 3, 2, 1
  043edbc  stfs 2, 64(30)
  043edc0  lfs 1, 96(3)
  043edc4  lfs 3, -3052(27)
  043edc8  fmuls 1, 3, 1
  043edcc  fcmpu 0, 2, 1
  043edd0  cror 6, 0, 2
  043edd4  bt 6, 0x43eddc
  043edd8  stfs 1, 64(30)
  043eddc  lhz 3, 82(30)
  043ede0  cmpwi 3, 1
  043ede4  cmpwi 1, 3, 2
  043ede8  bf 2, 0x43ee64
  043edec  lis 3, 68
  043edf0  lis 4, 114
  043edf4  lfs 1, 24(31)
  043edf8  addi 3, 3, -9504
  043edfc  lfs 2, 28(3)
  043ee00  lfs 3, -3064(4)
  043ee04  addic 3, 30, 72
  043ee08  fmadds 1, 3, 2, 1
  043ee0c  stfs 1, 24(31)
  043ee10  bl 0x4fff60
  043ee14  nop
  043ee18  cmpwi 3, 0
  043ee1c  bt 2, 0x43eea0
  043ee20  lis 3, 68
  043ee24  vspltisw 2, -1
  043ee28  li 4, -3056
  043ee2c  addi 3, 3, -9504
  043ee30  li 5, 100
  043ee34  vslw 2, 2, 2
  043ee38  lvlx 3, 4, 24
  043ee3c  lvlx 4, 5, 3
  043ee40  li 3, 72
  043ee44  vspltw 4, 4, 0
  043ee48  li 4, 2
  043ee4c  vmaddfp 2, 3, 4, 2
  043ee50  vctsxs 2, 2, 0
  043ee54  vspltw 2, 2, 0
  043ee58  stvewx 2, 3, 30
  043ee5c  sth 4, 82(30)
  043ee60  b 0x43eea0
  043ee64  bf 6, 0x43eea0
  043ee68  lis 3, 68
  043ee6c  lfs 1, 24(31)
  043ee70  lis 4, 114
  043ee74  addi 3, 3, -9504
  043ee78  lfs 2, 28(3)
  043ee7c  lfs 3, -3064(4)
  043ee80  addic 3, 30, 72
  043ee84  fnmsubs 1, 3, 2, 1
  043ee88  stfs 1, 24(31)
  043ee8c  bl 0x4fff60
  043ee90  nop
  043ee94  cmpwi 3, 0
  043ee98  bt 2, 0x43eea0
  043ee9c  sth 19, 82(30)
  043eea0  addic 29, 1, 352
  043eea4  lwz 4, 84(30)
  043eea8  ori 5, 26, 0
  043eeac  ori 3, 29, 0
  043eeb0  addic 4, 4, 16
  043eeb4  bl 0x5e81f0
  043eeb8  nop
  043eebc  ori 3, 29, 0
  043eec0  ori 4, 29, 0
  043eec4  lfs 1, 64(30)
  043eec8  bl 0x5e7f98
  043eecc  nop
  043eed0  ori 3, 26, 0
  043eed4  ori 4, 26, 0
  043eed8  ori 5, 29, 0
  043eedc  bl 0x5e7f54
  043eee0  nop
  043eee4  addic 28, 1, 672
  043eee8  ori 7, 29, 0
  043eeec  fmr 1, 20
  043eef0  ori 3, 28, 0
  043eef4  ori 4, 31, 0
  043eef8  lis 5, 1
  043eefc  bl 0x10581c
  043ef00  nop
  043ef04  lis 3, 68
  043ef08  lfs 1, 16(31)
  043ef0c  li 5, 16
  043ef10  lfs 2, 20(31)
  043ef14  addi 3, 3, -9504
  043ef18  stfs 1, 368(1)
  043ef1c  ori 6, 31, 0
  043ef20  lfs 1, 28(31)
  043ef24  ori 7, 28, 0
  043ef28  stfs 2, 372(1)
  043ef2c  stfs 1, 380(1)
  043ef30  lfs 1, 104(3)
  043ef34  lfs 2, 24(31)
  043ef38  addic 3, 1, 368
  043ef3c  fadds 2, 2, 1
  043ef40  stfs 2, 376(1)
  043ef44  bl 0x5e598
  043ef48  nop
  043ef4c  lfs 1, 16(31)
  043ef50  lfs 2, 20(31)
  043ef54  cmpwi 3, 0
  043ef58  lfs 3, 24(31)
  043ef5c  lfs 4, 28(31)
  043ef60  bt 2, 0x43efa8
  043ef64  lis 3, 161
  043ef68  addic 3, 3, 2368
  043ef6c  lwz 3, 24(3)
  043ef70  cmpwi 3, 0
  043ef74  bt 2, 0x43efa8
  043ef78  lhz 3, 166(3)
  043ef7c  cmpwi 1, 3, 74
  043ef80  cmpwi 3, 867
  043ef84  cror 2, 2, 6
  043ef88  bt 2, 0x43efa8
  043ef8c  cmpwi 3, 1112
  043ef90  bt 2, 0x43efa8
  043ef94  cmpwi 3, 869
  043ef98  bt 2, 0x43efa8
  043ef9c  cmpwi 3, 871
  043efa0  bt 2, 0x43efa8
  043efa4  stb 25, 188(31)
  043efa8  lis 3, 68
  043efac  stfs 1, 368(1)
  043efb0  stfs 2, 372(1)
  043efb4  li 5, 0
  043efb8  addi 3, 3, -9504
  043efbc  stfs 4, 380(1)
  043efc0  ori 6, 31, 0
  043efc4  lfs 1, 24(3)
  043efc8  addic 3, 1, 368
  043efcc  fadds 2, 3, 1
  043efd0  stfs 2, 376(1)
  043efd4  bl 0x59e20
  043efd8  nop
  043efdc  cmpwi 3, 0
  043efe0  bt 2, 0x43f018
  043efe4  lis 3, 161
  043efe8  addic 29, 1, 384
  043efec  addic 4, 3, 2368
  043eff0  addic 5, 1, 368
  043eff4  ori 3, 29, 0
  043eff8  addic 4, 4, 48
  043effc  bl 0x5e81f0
  043f000  nop
  043f004  ori 3, 26, 0
  043f008  ori 4, 26, 0
  043f00c  ori 5, 29, 0
  043f010  bl 0x5e7f54
  043f014  nop
  043f018  addic 3, 30, 88
  043f01c  bl 0x4fff60
  043f020  nop
  043f024  cmpwi 3, 0
  043f028  bt 2, 0x43f030
  043f02c  stb 25, 188(31)
  043f030  lis 3, 68
  043f034  lfs 3, -3052(27)
  043f038  addic 4, 30, 96
  043f03c  addi 3, 3, -9504
  043f040  addic 5, 30, 100
  043f044  lfs 1, 108(3)
  043f048  lfs 4, 112(3)
  043f04c  ori 3, 31, 0
  043f050  fmuls 2, 3, 1
  043f054  fmuls 3, 3, 4
  043f058  bl 0x116b70
  043f05c  nop
  043f060  lbz 3, 32(31)
  043f064  rlwinm 3, 3, 0, 29, 29
  043f068  cmpwi 3, 0
  043f06c  bt 2, 0x43f0a4
  043f070  addic 3, 1, 400
  043f074  addic 5, 1, 208
  043f078  ori 4, 26, 0
  043f07c  bl 0x502a64
  043f080  nop
  043f084  lfs 1, 400(1)
  043f088  stfs 1, 0(30)
  043f08c  lfs 1, 404(1)
  043f090  stfs 1, 4(30)
  043f094  lfs 1, 408(1)
  043f098  stfs 1, 8(30)
  043f09c  lfs 1, 412(1)
  043f0a0  stfs 1, 12(30)
  043f0a4  lbz 3, 32(31)
  043f0a8  rlwinm 3, 3, 0, 30, 30
  043f0ac  cmpwi 3, 0
  043f0b0  bf 2, 0x43f0d8
  043f0b4  addic 3, 30, 52
  043f0b8  bl 0x4fffb4
  043f0bc  nop
  043f0c0  cmpwi 3, 0
  043f0c4  bt 2, 0x43f0d8
  043f0c8  lbz 3, 32(31)
  043f0cc  ori 3, 3, 2
  043f0d0  stb 3, 32(31)
  043f0d4  stw 19, 84(30)
  043f0d8  ori 3, 31, 0
  043f0dc  lis 4, 131
  043f0e0  li 5, 0
  043f0e4  bl 0x10675c
  043f0e8  nop
  043f0ec  lbz 4, 32(31)
  043f0f0  cmpwi 3, 0
  043f0f4  lwz 5, 8320(21)
  043f0f8  bt 2, 0x43f124
  043f0fc  lwz 3, 32(3)
  043f100  cmpwi 3, 0
  043f104  bt 2, 0x43f124
  043f108  lhz 3, 166(3)
  043f10c  lhz 6, 166(31)
  043f110  extsh 3, 3
  043f114  extsh 6, 6
  043f118  cmpw 3, 6
  043f11c  bt 2, 0x43f124
  043f120  stb 25, 188(31)
  043f124  li 3, 255
  043f128  rlwinm 6, 4, 0, 30, 30
  043f12c  cmpwi 6, 0
  043f130  stb 3, 164(31)
  043f134  bt 2, 0x43f4e8
  043f138  rlwinm 3, 4, 0, 29, 29
  043f13c  cmpwi 3, 0
  043f140  bf 2, 0x43f14c
  043f144  stb 25, 188(31)
  043f148  b 0x43f4e8
  043f14c  addic 3, 5, 16
  043f150  ori 4, 26, 0
  043f154  bl 0x5e8588
  043f158  nop
  043f15c  lis 3, 68
  043f160  lwz 5, 8320(21)
  043f164  addi 3, 3, -9504
  043f168  lfs 29, 116(3)
  043f16c  fcmpu 0, 1, 29
  043f170  cror 6, 1, 2
  043f174  bt 6, 0x43f1b8
  043f178  lfs 1, 24(31)
  043f17c  lis 3, 68
  043f180  lfs 2, 136(21)
  043f184  addi 3, 3, -9504
  043f188  fsubs 1, 1, 2
  043f18c  lfs 2, 24(3)
  043f190  fabs 1, 1
  043f194  fcmpu 0, 1, 2
  043f198  cror 6, 1, 2
  043f19c  bt 6, 0x43f1b8
  043f1a0  lbz 3, 32(31)
  043f1a4  rlwinm 3, 3, 0, 27, 27
  043f1a8  cmpwi 3, 0
  043f1ac  bt 2, 0x43f1b8
  043f1b0  stb 25, 188(31)
  043f1b4  b 0x43f4e8
  043f1b8  addic 3, 5, 16
  043f1bc  ori 4, 26, 0
  043f1c0  bl 0x5e8548
  043f1c4  nop
  043f1c8  fcmpu 0, 1, 29
  043f1cc  cror 6, 1, 2
  043f1d0  bt 6, 0x43f290
  043f1d4  lwz 5, 8320(21)
  043f1d8  addic 3, 1, 448
  043f1dc  ori 4, 26, 0
  043f1e0  addic 5, 5, 16
  043f1e4  bl 0x502a64
  043f1e8  nop
  043f1ec  lfs 1, 448(1)
  043f1f0  lfs 2, 452(1)
  043f1f4  addic 29, 1, 416
  043f1f8  stfs 1, 416(1)
  043f1fc  lfs 3, 456(1)
  043f200  stfs 2, 420(1)
  043f204  ori 4, 29, 0
  043f208  lfs 2, 460(1)
  043f20c  ori 3, 29, 0
  043f210  stfs 3, 424(1)
  043f214  fmr 1, 29
  043f218  stfs 2, 428(1)
  043f21c  bl 0x5e7f98
  043f220  nop
  043f224  lwz 4, 8320(21)
  043f228  addic 3, 1, 464
  043f22c  ori 5, 29, 0
  043f230  addic 4, 4, 16
  043f234  bl 0x5023f0
  043f238  nop
  043f23c  lfs 1, 464(1)
  043f240  lis 3, 68
  043f244  lfs 2, 468(1)
  043f248  stfs 1, 432(1)
  043f24c  addic 5, 1, 432
  043f250  addi 4, 3, -9504
  043f254  lfs 1, 472(1)
  043f258  stfs 2, 436(1)
  043f25c  ori 3, 31, 0
  043f260  lfs 2, 476(1)
  043f264  li 10, 0
  043f268  stfs 1, 440(1)
  043f26c  stfs 2, 444(1)
  043f270  lfs 2, 24(4)
  043f274  fmr 1, 23
  043f278  lfs 4, 108(4)
  043f27c  ori 4, 26, 0
  043f280  fmr 3, 2
  043f284  bl 0xffcd0
  043f288  nop
  043f28c  b 0x43f4e8
  043f290  lis 3, 151
  043f294  addic 3, 3, -25432
  043f298  lbz 3, 17(3)
  043f29c  bl 0x502730
  043f2a0  nop
  043f2a4  fadds 29, 1, 20
  043f2a8  lis 3, 68
  043f2ac  lwz 4, 120(30)
  043f2b0  fmr 1, 20
  043f2b4  addi 3, 3, -9504
  043f2b8  cmpwi 4, 0
  043f2bc  lfs 2, 96(3)
  043f2c0  fmuls 29, 29, 2
  043f2c4  bt 2, 0x43f2cc
  043f2c8  fmr 1, 30
  043f2cc  lis 3, 165
  043f2d0  fmuls 29, 29, 1
  043f2d4  ori 29, 19, 0
  043f2d8  lwz 28, -27836(3)
  043f2dc  cmpwi 28, 0
  043f2e0  bt 2, 0x43f4e8
  043f2e4  lis 3, 68
  043f2e8  li 4, 136
  043f2ec  addi 3, 3, -9504
  043f2f0  li 5, 100
  043f2f4  lis 20, 165
  043f2f8  ori 22, 19, 0
  043f2fc  addic 20, 20, -27836
  043f300  lfs 27, 120(3)
  043f304  lfs 26, 124(3)
  043f308  lfs 25, 128(3)
  043f30c  lfs 24, 132(3)
  043f310  lvlx 31, 4, 3
  043f314  lvlx 30, 5, 3
  043f318  vspltw 31, 31, 0
  043f31c  vspltw 30, 30, 0
  043f320  addic 23, 28, 16
  043f324  ori 3, 26, 0
  043f328  ori 4, 23, 0
  043f32c  bl 0x5e8548
  043f330  nop
  043f334  fcmpu 0, 1, 27
  043f338  bt 1, 0x43f4c8
  043f33c  ori 3, 26, 0
  043f340  ori 4, 23, 0
  043f344  bl 0x5e8548
  043f348  nop
  043f34c  fcmpu 0, 1, 26
  043f350  cror 6, 1, 2
  043f354  bt 6, 0x43f360
  043f358  stb 25, 188(31)
  043f35c  b 0x43f4dc
  043f360  ori 3, 28, 0
  043f364  bl 0x10af88
  043f368  nop
  043f36c  cmpwi 3, 0
  043f370  bf 2, 0x43f4c8
  043f374  ori 3, 28, 0
  043f378  fmr 28, 29
  043f37c  bl 0xfcccc
  043f380  nop
  043f384  cmpwi 3, 0
  043f388  bt 2, 0x43f39c
  043f38c  lbz 3, 10(3)
  043f390  bl 0x502730
  043f394  nop
  043f398  fmadds 28, 1, 25, 28
  043f39c  ori 3, 26, 0
  043f3a0  ori 4, 23, 0
  043f3a4  bl 0x5e8588
  043f3a8  nop
  043f3ac  fcmpu 0, 1, 28
  043f3b0  cror 6, 1, 2
  043f3b4  bt 6, 0x43f4c8
  043f3b8  lfs 1, 24(28)
  043f3bc  lfs 2, 24(31)
  043f3c0  fsubs 1, 1, 2
  043f3c4  fabs 1, 1
  043f3c8  fcmpu 0, 1, 31
  043f3cc  cror 6, 1, 2
  043f3d0  bt 6, 0x43f4c8
  043f3d4  lwz 3, 84(30)
  043f3d8  cmpwi 3, 0
  043f3dc  bt 2, 0x43f3f4
  043f3e0  lbz 3, 32(3)
  043f3e4  cmpwi 3, 254
  043f3e8  cmpwi 1, 3, 253
  043f3ec  bt 2, 0x43f3f4
  043f3f0  bf 6, 0x43f4c8
  043f3f4  cmpwi 29, 0
  043f3f8  bt 2, 0x43f430
  043f3fc  ori 3, 26, 0
  043f400  ori 4, 23, 0
  043f404  bl 0x5e8588
  043f408  nop
  043f40c  fmr 28, 1
  043f410  addic 4, 29, 16
  043f414  ori 3, 26, 0
  043f418  clrldi 4, 4, 32
  043f41c  bl 0x5e8588
  043f420  nop
  043f424  fcmpu 0, 28, 1
  043f428  cror 6, 1, 2
  043f42c  bt 6, 0x43f4c8
  043f430  lbz 3, 32(31)
  043f434  li 4, 1
  043f438  ori 3, 3, 16
  043f43c  li 5, 0
  043f440  stb 3, 32(31)
  043f444  lfs 1, -3056(24)
  043f448  ori 3, 31, 0
  043f44c  fmuls 1, 1, 24
  043f450  fctiwz 1, 1
  043f454  stfd 1, 1072(1)
  043f458  lwz 6, 1076(1)
  043f45c  extsw 6, 6
  043f460  bl 0xfddc0
  043f464  nop
  043f468  li 3, 0
  043f46c  li 4, 0
  043f470  ori 5, 31, 0
  043f474  bl 0x15d12c
  043f478  nop
  043f47c  vspltisw 2, -1
  043f480  li 3, -3056
  043f484  vspltisw 3, -1
  043f488  stw 19, 64(30)
  043f48c  li 4, 88
  043f490  vslw 2, 2, 2
  043f494  vslw 3, 3, 3
  043f498  lvlx 4, 3, 24
  043f49c  ori 29, 28, 0
  043f4a0  li 3, 72
  043f4a4  vmaddfp 2, 4, 31, 2
  043f4a8  vmaddfp 3, 4, 30, 3
  043f4ac  vctsxs 2, 2, 0
  043f4b0  vctsxs 3, 3, 0
  043f4b4  vspltw 2, 2, 0
  043f4b8  vspltw 3, 3, 0
  043f4bc  stvewx 2, 4, 30
  043f4c0  sth 25, 82(30)
  043f4c4  stvewx 3, 3, 30
  043f4c8  addic 22, 22, 4
  043f4cc  extsw 3, 22
  043f4d0  lwzx 28, 20, 3
  043f4d4  cmpwi 28, 0
  043f4d8  bf 2, 0x43f320
  043f4dc  cmpwi 29, 0
  043f4e0  bt 2, 0x43f4e8
  043f4e4  stw 29, 84(30)
  043f4e8  lwz 3, 92(30)
  043f4ec  stw 19, 120(30)
  043f4f0  cmpwi 3, 0
  043f4f4  bt 0, 0x43f508
  043f4f8  lis 3, 269
  043f4fc  lwz 3, -13024(3)
  043f500  cmpwi 3, 0
  043f504  bt 2, 0x43f54c
  043f508  lis 4, 68
  043f50c  ori 3, 31, 0
  043f510  addi 5, 4, -9504
  043f514  ori 4, 26, 0
  043f518  li 6, -1
  043f51c  lfs 1, 140(5)
  043f520  lfs 2, 144(5)
  043f524  bl 0x10fb28
  043f528  nop
  043f52c  lis 4, 165
  043f530  ori 3, 31, 0
  043f534  addic 4, 4, 7912
  043f538  bl 0x110798
  043f53c  nop
  043f540  ori 3, 31, 0
  043f544  bl 0xefb38
  043f548  nop
  043f54c  lis 3, 68
  043f550  lwz 5, 108(30)
  043f554  lis 4, 15692
  043f558  addi 3, 3, -9504
  043f55c  lfs 1, 108(30)
  043f560  srawi 6, 5, 31
  043f564  ori 4, 4, 52429
  043f568  srwi 7, 6, 1
  043f56c  lfs 26, 28(3)
  043f570  xor 3, 7, 5
  043f574  subc 3, 3, 6
  043f578  cmpw 3, 4
  043f57c  bf 1, 0x43f5b8
  043f580  lis 3, 68
  043f584  lis 4, 114
  043f588  addi 3, 3, -9504
  043f58c  lfs 2, 148(3)
  043f590  lfs 3, -3064(4)
  043f594  fmadds 2, 3, 2, 20
  043f598  fmuls 1, 1, 2
  043f59c  fcmpu 0, 1, 26
  043f5a0  stfs 1, 108(30)
  043f5a4  cror 6, 1, 2
  043f5a8  bt 6, 0x43f5b8
  043f5ac  lis 3, 15692
  043f5b0  ori 3, 3, 52429
  043f5b4  stw 3, 108(30)
  043f5b8  lis 3, 161
  043f5bc  lwz 4, 116(30)
  043f5c0  lwz 3, 1808(3)
  043f5c4  subc 3, 3, 4
  043f5c8  extsw 3, 3
  043f5cc  bl 0x502730
  043f5d0  nop
  043f5d4  lis 3, 134
  043f5d8  lfs 2, -3056(24)
  043f5dc  lfs 3, -23424(3)
  043f5e0  fmuls 29, 3, 2
  043f5e4  fdivs 29, 1, 29
  043f5e8  lfs 1, 112(30)
  043f5ec  lfs 2, -3052(27)
  043f5f0  fcmpu 0, 29, 20
  043f5f4  cror 6, 0, 2
  043f5f8  bt 6, 0x43f604
  043f5fc  fmr 29, 20
  043f600  b 0x43f618
  043f604  lfd 3, 1056(1)
  043f608  fcmpu 0, 29, 3
  043f60c  cror 6, 1, 2
  043f610  bt 6, 0x43f618
  043f614  lfd 29, 1056(1)
  043f618  lis 3, 68
  043f61c  stfs 23, 1068(1)
  043f620  addi 3, 3, -9504
  043f624  lfs 3, 152(3)
  043f628  fmuls 2, 2, 3
  043f62c  bl 0x502578
  043f630  nop
  043f634  stfs 1, 112(30)
  043f638  lfs 28, 24(31)
  043f63c  bl 0x5e8128
  043f640  nop
  043f644  lfs 2, 108(30)
  043f648  lbz 3, 188(31)
  043f64c  fmuls 1, 2, 1
  043f650  cmpwi 3, 0
  043f654  fmadds 1, 1, 29, 28
  043f658  fadds 1, 1, 23
  043f65c  stfs 1, 24(31)
  043f660  bt 2, 0x4402ac
  043f664  lis 29, 149
  043f668  ori 3, 26, 0
  043f66c  addic 29, 29, 5056
  043f670  addic 4, 29, 320
  043f674  bl 0x5e8588
  043f678  nop
  043f67c  lhz 3, 80(30)
  043f680  fmr 17, 1
  043f684  cmpwi 3, 0
  043f688  bf 2, 0x43f72c
  043f68c  lis 3, 151
  043f690  addic 3, 3, -25432
  043f694  lbz 3, 17(3)
  043f698  bl 0x502730
  043f69c  nop
  043f6a0  lis 3, 68
  043f6a4  li 5, 16
  043f6a8  addi 28, 3, -9504
  043f6ac  ori 3, 26, 0
  043f6b0  ori 6, 31, 0
  043f6b4  li 7, 0
  043f6b8  lfs 2, 44(28)
  043f6bc  fmadds 1, 1, 2, 20
  043f6c0  fmuls 1, 1, 31
  043f6c4  bl 0x5e598
  043f6c8  nop
  043f6cc  lfs 2, 24(28)
  043f6d0  lfs 3, 124(28)
  043f6d4  li 4, 4
  043f6d8  lfs 1, 16(31)
  043f6dc  lis 7, 161
  043f6e0  lfs 4, 24(31)
  043f6e4  ori 8, 3, 0
  043f6e8  stfs 1, 64(1)
  043f6ec  addic 7, 7, 18944
  043f6f0  stfs 4, 72(1)
  043f6f4  ori 3, 31, 0
  043f6f8  lfs 1, 20(31)
  043f6fc  li 9, 0
  043f700  lis 10, 129
  043f704  stfs 1, 68(1)
  043f708  lfs 1, 28(31)
  043f70c  stfs 1, 76(1)
  043f710  std 4, 120(1)
  043f714  fmr 1, 30
  043f718  std 25, 128(1)
  043f71c  ld 5, 64(1)
  043f720  ld 6, 72(1)
  043f724  bl 0x107860
  043f728  nop
  043f72c  ori 3, 26, 0
  043f730  bl 0xffc18
  043f734  nop
  043f738  lhz 3, 80(30)
  043f73c  cmpwi 3, 0
  043f740  bt 2, 0x43fba0
  043f744  lfs 1, 16(31)
  043f748  lis 3, 68
  043f74c  stfs 1, 480(1)
  043f750  lfs 1, 20(31)
  043f754  addi 28, 3, -9504
  043f758  addic 3, 1, 480
  043f75c  stfs 1, 484(1)
  043f760  lfs 1, 28(31)
  043f764  li 4, 0
  043f768  lfs 2, 24(31)
  043f76c  stfs 1, 492(1)
  043f770  lfs 1, 132(28)
  043f774  stfs 20, 1048(1)
  043f778  fadds 1, 2, 1
  043f77c  stfs 1, 488(1)
  043f780  lfs 29, 44(28)
  043f784  fmr 1, 29
  043f788  bl 0xffb70
  043f78c  nop
  043f790  lfs 25, 156(28)
  043f794  ori 30, 19, 0
  043f798  lfs 24, 160(28)
  043f79c  fmr 31, 1
  043f7a0  lfs 23, 164(28)
  043f7a4  lfs 28, 96(28)
  043f7a8  lfs 27, 168(28)
  043f7ac  lfs 22, 16(28)
  043f7b0  lfs 21, 32(28)
  043f7b4  stw 19, 496(1)
  043f7b8  fmr 1, 25
  043f7bc  stw 19, 500(1)
  043f7c0  stw 19, 504(1)
  043f7c4  stw 19, 508(1)
  043f7c8  lfs 20, 1048(1)
  043f7cc  fmr 2, 20
  043f7d0  bl 0xfcbe8
  043f7d4  nop
  043f7d8  stfs 1, 496(1)
  043f7dc  fmr 2, 20
  043f7e0  fmr 1, 25
  043f7e4  bl 0xfcbe8
  043f7e8  nop
  043f7ec  stfs 1, 500(1)
  043f7f0  fmr 1, 24
  043f7f4  fmr 2, 23
  043f7f8  bl 0xfcbe8
  043f7fc  nop
  043f800  lfs 2, -3052(27)
  043f804  stfs 1, 504(1)
  043f808  fmuls 1, 2, 28
  043f80c  fmuls 2, 2, 27
  043f810  bl 0xfcbe8
  043f814  nop
  043f818  addic 28, 1, 496
  043f81c  ori 3, 28, 0
  043f820  ori 4, 28, 0
  043f824  bl 0x5e7f98
  043f828  nop
  043f82c  fmr 1, 26
  043f830  fmr 2, 22
  043f834  bl 0xfcbe8
  043f838  nop
  043f83c  fmuls 1, 1, 21
  043f840  ori 3, 26, 0
  043f844  fmr 2, 31
  043f848  ori 4, 28, 0
  043f84c  bl 0x12a440
  043f850  nop
  043f854  addic 30, 30, 1
  043f858  cmpwi 30, 150
  043f85c  bt 0, 0x43f7b4
  043f860  lis 3, 68
  043f864  fadds 22, 29, 31
  043f868  ori 30, 19, 0
  043f86c  addi 3, 3, -9504
  043f870  lfs 26, 172(3)
  043f874  lfs 25, 116(3)
  043f878  lfs 24, 176(3)
  043f87c  lfs 23, 104(3)
  043f880  lfs 21, 180(3)
  043f884  lfs 20, 184(3)
  043f888  stw 19, 512(1)
  043f88c  stw 19, 516(1)
  043f890  lfs 2, -3052(27)
  043f894  stw 19, 520(1)
  043f898  fmuls 1, 2, 26
  043f89c  stw 19, 524(1)
  043f8a0  fmuls 2, 2, 25
  043f8a4  bl 0xfcbe8
  043f8a8  nop
  043f8ac  lfs 2, -3052(27)
  043f8b0  stfs 1, 512(1)
  043f8b4  fmuls 1, 2, 26
  043f8b8  fmuls 2, 2, 25
  043f8bc  bl 0xfcbe8
  043f8c0  nop
  043f8c4  lfs 2, -3052(27)
  043f8c8  stfs 1, 516(1)
  043f8cc  fmuls 1, 2, 28
  043f8d0  fmuls 2, 2, 24
  043f8d4  bl 0xfcbe8
  043f8d8  nop
  043f8dc  lfd 3, 1056(1)
  043f8e0  stfs 1, 520(1)
  043f8e4  fmr 2, 23
  043f8e8  fmr 1, 3
  043f8ec  bl 0xfcbe8
  043f8f0  nop
  043f8f4  fmr 19, 1
  043f8f8  bl 0xfcc68
  043f8fc  nop
  043f900  fmr 18, 1
  043f904  bl 0x5e8078
  043f908  nop
  043f90c  fmuls 2, 1, 19
  043f910  fmr 1, 18
  043f914  stfs 2, 528(1)
  043f918  bl 0x5e8128
  043f91c  nop
  043f920  fmuls 1, 1, 19
  043f924  stw 19, 536(1)
  043f928  addic 28, 1, 528
  043f92c  ori 5, 26, 0
  043f930  ori 3, 28, 0
  043f934  ori 4, 28, 0
  043f938  stfs 1, 532(1)
  043f93c  bl 0x5e7f54
  043f940  nop
  043f944  lfs 1, -3052(27)
  043f948  lfs 3, 520(1)
  043f94c  fmr 2, 21
  043f950  fmuls 4, 1, 19
  043f954  stfs 22, 536(1)
  043f958  fmr 1, 23
  043f95c  fnmsubs 3, 4, 27, 3
  043f960  stfs 3, 520(1)
  043f964  bl 0xfcbe8
  043f968  nop
  043f96c  lis 5, 114
  043f970  lis 9, 127
  043f974  fmr 2, 31
  043f978  lis 8, 5759
  043f97c  addic 4, 1, 512
  043f980  ori 3, 28, 0
  043f984  lfs 3, -3048(5)
  043f988  li 5, 0
  043f98c  ori 9, 9, 24672
  043f990  fmuls 3, 3, 20
  043f994  ori 8, 8, 24672
  043f998  li 10, 1
  043f99c  bl 0x131e50
  043f9a0  nop
  043f9a4  addic 30, 30, 1
  043f9a8  cmpwi 30, 150
  043f9ac  bt 0, 0x43f888
  043f9b0  lis 3, 68
  043f9b4  lis 28, 151
  043f9b8  addi 3, 3, -9504
  043f9bc  lis 25, 165
  043f9c0  ori 30, 19, 0
  043f9c4  addic 28, 28, -25432
  043f9c8  addic 25, 25, 10244
  043f9cc  lfs 27, 24(3)
  043f9d0  lfs 26, 188(3)
  043f9d4  lfs 25, 192(3)
  043f9d8  lfs 24, 124(3)
  043f9dc  lfs 23, 196(3)
  043f9e0  lfs 22, 200(3)
  043f9e4  lfs 21, 204(3)
  043f9e8  lfs 20, 208(3)
  043f9ec  lfs 19, 212(3)
  043f9f0  lfs 18, 1048(1)
  043f9f4  fmr 1, 27
  043f9f8  fmr 2, 18
  043f9fc  stfs 17, 1064(1)
  043fa00  bl 0xfcbe8
  043fa04  nop
  043fa08  lis 4, 32639
  043fa0c  lis 3, 32512
  043fa10  ori 4, 4, 24672
  043fa14  bl 0x106738
  043fa18  nop
  043fa1c  fmr 1, 29
  043fa20  ori 23, 3, 0
  043fa24  fmr 2, 18
  043fa28  bl 0xfcbe8
  043fa2c  nop
  043fa30  lis 4, 63
  043fa34  li 3, 0
  043fa38  ori 4, 4, 12336
  043fa3c  bl 0x106738
  043fa40  nop
  043fa44  fmr 1, 26
  043fa48  ori 22, 3, 0
  043fa4c  fmr 2, 30
  043fa50  bl 0xfcbe8
  043fa54  nop
  043fa58  stfs 1, 560(1)
  043fa5c  fmr 2, 30
  043fa60  fmr 1, 26
  043fa64  bl 0xfcbe8
  043fa68  nop
  043fa6c  lfs 2, -3052(27)
  043fa70  stfs 1, 564(1)
  043fa74  fmuls 1, 2, 28
  043fa78  fmuls 2, 2, 25
  043fa7c  bl 0xfcbe8
  043fa80  nop
  043fa84  stfs 1, 568(1)
  043fa88  fmr 1, 24
  043fa8c  fmr 2, 30
  043fa90  bl 0xfcbe8
  043fa94  nop
  043fa98  lfs 2, -3052(27)
  043fa9c  addic 20, 1, 560
  043faa0  fmuls 1, 1, 2
  043faa4  ori 3, 20, 0
  043faa8  ori 4, 20, 0
  043faac  bl 0x5e7f98
  043fab0  nop
  043fab4  fmr 1, 30
  043fab8  fmr 2, 23
  043fabc  bl 0xfcbe8
  043fac0  nop
  043fac4  lfs 2, -3052(27)
  043fac8  lbz 4, 17(28)
  043facc  ori 3, 23, 0
  043fad0  fmuls 1, 1, 2
  043fad4  stfs 1, 568(1)
  043fad8  lfs 1, 16(31)
  043fadc  stfs 1, 544(1)
  043fae0  lfs 1, 20(31)
  043fae4  stfs 1, 548(1)
  043fae8  lfs 1, 28(31)
  043faec  stfs 31, 552(1)
  043faf0  stfs 1, 556(1)
  043faf4  bl 0x10a668
  043faf8  nop
  043fafc  ori 23, 3, 0
  043fb00  ori 3, 22, 0
  043fb04  lbz 4, 17(28)
  043fb08  bl 0x10a668
  043fb0c  nop
  043fb10  fmr 2, 21
  043fb14  ori 22, 3, 0
  043fb18  fmr 1, 22
  043fb1c  bl 0xfcbe8
  043fb20  nop
  043fb24  lfs 2, -3056(24)
  043fb28  fmr 16, 1
  043fb2c  fmuls 3, 2, 20
  043fb30  fmuls 2, 2, 19
  043fb34  fctiwz 1, 3
  043fb38  fctiwz 2, 2
  043fb3c  stfd 1, 1072(1)
  043fb40  lwz 3, 1076(1)
  043fb44  stfd 2, 1072(1)
  043fb48  lwz 4, 1076(1)
  043fb4c  extsw 3, 3
  043fb50  extsw 4, 4
  043fb54  bl 0xfe484
  043fb58  nop
  043fb5c  lwz 5, 44(25)
  043fb60  li 7, -1
  043fb64  fmr 1, 16
  043fb68  ori 8, 3, 0
  043fb6c  ori 4, 20, 0
  043fb70  ori 6, 22, 0
  043fb74  lbz 10, 0(5)
  043fb78  addic 3, 1, 544
  043fb7c  std 7, 112(1)
  043fb80  ori 5, 23, 0
  043fb84  li 9, 1
  043fb88  bl 0x124e10
  043fb8c  nop
  043fb90  addic 30, 30, 1
  043fb94  cmpwi 30, 20
  043fb98  bt 0, 0x43f9f4
  043fb9c  b 0x440194
  043fba0  fadds 1, 1, 31
  043fba4  lfs 2, 24(31)
  043fba8  fcmpu 0, 2, 1
  043fbac  cror 6, 0, 2
  043fbb0  bt 6, 0x43fc38
  043fbb4  lis 3, 68
  043fbb8  stw 19, 588(1)
  043fbbc  lis 4, 151
  043fbc0  addi 7, 3, -9504
  043fbc4  stw 19, 584(1)
  043fbc8  stw 19, 580(1)
  043fbcc  addic 6, 4, -25432
  043fbd0  stw 19, 576(1)
  043fbd4  li 11, 2
  043fbd8  stfs 17, 1064(1)
  043fbdc  li 12, -1
  043fbe0  addic 4, 1, 576
  043fbe4  fmr 3, 31
  043fbe8  lfs 5, 96(7)
  043fbec  ori 3, 31, 0
  043fbf0  lfs 7, 216(7)
  043fbf4  li 5, 0
  043fbf8  lfd 2, 1056(1)
  043fbfc  li 8, 3
  043fc00  lbz 6, 17(6)
  043fc04  li 9, 3
  043fc08  std 11, 144(1)
  043fc0c  li 10, 5
  043fc10  std 19, 160(1)
  043fc14  fmr 1, 2
  043fc18  std 25, 168(1)
  043fc1c  fmr 4, 20
  043fc20  std 12, 176(1)
  043fc24  fmr 6, 20
  043fc28  std 6, 184(1)
  043fc2c  bl 0x10e030
  043fc30  nop
  043fc34  b 0x440194
  043fc38  lis 28, 151
  043fc3c  addic 28, 28, -25432
  043fc40  lbz 3, 17(28)
  043fc44  bl 0x502730
  043fc48  nop
  043fc4c  lis 3, 68
  043fc50  li 30, 150
  043fc54  addi 4, 3, -9504
  043fc58  ori 3, 19, 0
  043fc5c  lfs 2, 220(4)
  043fc60  lfs 29, 44(4)
  043fc64  fcmpu 0, 17, 2
  043fc68  fmadds 30, 1, 29, 20
  043fc6c  cror 6, 1, 2
  043fc70  bt 6, 0x43fc78
  043fc74  ori 3, 25, 0
  043fc78  addic 3, 3, 50
  043fc7c  stfs 17, 1064(1)
  043fc80  cmpwi 3, 0
  043fc84  bt 2, 0x43fca8
  043fc88  lis 3, 68
  043fc8c  stfs 17, 1064(1)
  043fc90  addi 3, 3, -9504
  043fc94  lfs 1, 92(3)
  043fc98  fmuls 1, 17, 1
  043fc9c  bl 0x502758
  043fca0  nop
  043fca4  ori 30, 3, 0
  043fca8  cmpwi 30, 0
  043fcac  stfs 20, 1048(1)
  043fcb0  ori 25, 19, 0
  043fcb4  bf 1, 0x440194
  043fcb8  lis 3, 68
  043fcbc  addi 3, 3, -9504
  043fcc0  lfs 1, 192(3)
  043fcc4  lfs 2, 224(3)
  043fcc8  lfs 3, 228(3)
  043fccc  lfs 23, 160(3)
  043fcd0  lfs 14, 96(3)
  043fcd4  lfs 15, 232(3)
  043fcd8  lfs 19, 260(3)
  043fcdc  lfs 16, 168(3)
  043fce0  lfs 24, 236(3)
  043fce4  fmuls 19, 19, 30
  043fce8  lfs 25, 240(3)
  043fcec  lfs 26, 244(3)
  043fcf0  stfd 1, 1040(1)
  043fcf4  stfd 2, 1032(1)
  043fcf8  stfd 3, 1024(1)
  043fcfc  lfs 27, 248(3)
  043fd00  lfs 17, 252(3)
  043fd04  lfs 18, 256(3)
  043fd08  lfs 20, 264(3)
  043fd0c  lfs 21, 268(3)
  043fd10  lfs 28, 24(3)
  043fd14  lfs 22, 272(3)
  043fd18  li 3, 4
  043fd1c  bl 0xfc620
  043fd20  nop
  043fd24  lfd 1, 1040(1)
  043fd28  lfd 2, 1032(1)
  043fd2c  ori 23, 3, 0
  043fd30  lfs 3, -3052(27)
  043fd34  lfd 4, 1024(1)
  043fd38  fmuls 5, 3, 1
  043fd3c  stw 19, 1020(1)
  043fd40  fmuls 6, 3, 2
  043fd44  stw 19, 592(1)
  043fd48  fmuls 4, 3, 4
  043fd4c  stw 19, 596(1)
  043fd50  fmuls 1, 3, 23
  043fd54  stw 19, 600(1)
  043fd58  stw 19, 604(1)
  043fd5c  fmuls 2, 3, 29
  043fd60  stfs 5, 1008(1)
  043fd64  stfs 6, 1012(1)
  043fd68  stfs 4, 1016(1)
  043fd6c  bl 0xfcbe8
  043fd70  nop
  043fd74  fmuls 3, 1, 30
  043fd78  lfs 2, -3052(27)
  043fd7c  fmuls 1, 2, 23
  043fd80  fmuls 2, 2, 29
  043fd84  stfs 3, 592(1)
  043fd88  bl 0xfcbe8
  043fd8c  nop
  043fd90  fmuls 3, 1, 30
  043fd94  sldi 3, 23, 2
  043fd98  lfs 1, -3052(27)
  043fd9c  addc 3, 3, 1
  043fda0  fmuls 1, 1, 14
  043fda4  clrldi 3, 3, 32
  043fda8  lfs 2, 1008(3)
  043fdac  stfs 3, 596(1)
  043fdb0  bl 0xfcbe8
  043fdb4  nop
  043fdb8  fmuls 1, 1, 30
  043fdbc  cmpwi 23, 1
  043fdc0  fmr 31, 28
  043fdc4  stfs 1, 600(1)
  043fdc8  bf 2, 0x43fdd0
  043fdcc  fmr 31, 29
  043fdd0  stfs 22, 1088(1)
  043fdd4  fmr 2, 31
  043fdd8  lfd 1, 1056(1)
  043fddc  bl 0xfcbe8
  043fde0  nop
  043fde4  fmuls 22, 1, 30
  043fde8  bl 0xfcc68
  043fdec  nop
  043fdf0  fmr 31, 1
  043fdf4  bl 0x5e8078
  043fdf8  nop
  043fdfc  fmuls 2, 1, 22
  043fe00  fmr 1, 31
  043fe04  stfs 31, 1092(1)
  043fe08  stfs 2, 608(1)
  043fe0c  bl 0x5e8128
  043fe10  nop
  043fe14  fmuls 1, 1, 22
  043fe18  stw 19, 616(1)
  043fe1c  addic 3, 1, 608
  043fe20  ori 5, 26, 0
  043fe24  ori 4, 3, 0
  043fe28  stfs 1, 612(1)
  043fe2c  bl 0x5e7f54
  043fe30  nop
  043fe34  lfs 31, 616(1)
  043fe38  fmr 1, 15
  043fe3c  bl 0x5e8078
  043fe40  nop
  043fe44  lfs 2, -3052(27)
  043fe48  lfs 3, 600(1)
  043fe4c  fnmsubs 1, 22, 1, 31
  043fe50  fmuls 2, 2, 22
  043fe54  cmpwi 23, 1
  043fe58  fnmsubs 2, 2, 16, 3
  043fe5c  stfs 1, 616(1)
  043fe60  stfs 2, 600(1)
  043fe64  lfs 22, 1088(1)
  043fe68  lfs 31, 1092(1)
  043fe6c  bt 1, 0x43fe84
  043fe70  cmpwi 23, -1
  043fe74  bf 1, 0x440188
  043fe78  cmpwi 23, 0
  043fe7c  bf 1, 0x43fe98
  043fe80  b 0x43ff24
  043fe84  cmpwi 23, 2
  043fe88  bf 1, 0x43ffa0
  043fe8c  cmpwi 23, 3
  043fe90  bf 1, 0x44005c
  043fe94  b 0x440188
  043fe98  lis 3, 7952
  043fe9c  lbz 4, 17(28)
  043fea0  ori 3, 3, 6176
  043fea4  bl 0x10a668
  043fea8  nop
  043feac  fmr 2, 26
  043feb0  fmr 1, 25
  043feb4  ori 23, 3, 0
  043feb8  bl 0xfcbe8
  043febc  nop
  043fec0  lfs 2, -3056(24)
  043fec4  fmuls 31, 1, 30
  043fec8  fmuls 3, 2, 24
  043fecc  fmuls 2, 2, 27
  043fed0  fctiwz 1, 3
  043fed4  fctiwz 2, 2
  043fed8  stfd 1, 1072(1)
  043fedc  lwz 3, 1076(1)
  043fee0  stfd 2, 1072(1)
  043fee4  lwz 4, 1076(1)
  043fee8  extsw 3, 3
  043feec  extsw 4, 4
  043fef0  bl 0xfe484
  043fef4  nop
  043fef8  lis 6, 16
  043fefc  fmr 1, 31
  043ff00  ori 8, 3, 0
  043ff04  addic 3, 1, 608
  043ff08  li 9, 0
  043ff0c  addic 4, 1, 592
  043ff10  ori 5, 23, 0
  043ff14  ori 6, 6, 4112
  043ff18  bl 0x125350
  043ff1c  nop
  043ff20  b 0x440188
  043ff24  lis 3, 16136
  043ff28  lbz 4, 17(28)
  043ff2c  ori 3, 3, 4128
  043ff30  bl 0x10a668
  043ff34  nop
  043ff38  ori 23, 3, 0
  043ff3c  lbz 4, 17(28)
  043ff40  lis 3, 3848
  043ff44  ori 3, 3, 4128
  043ff48  bl 0x10a668
  043ff4c  nop
  043ff50  fmr 2, 18
  043ff54  ori 22, 3, 0
  043ff58  fmr 1, 17
  043ff5c  bl 0xfcbe8
  043ff60  nop
  043ff64  lfs 2, -3056(24)
  043ff68  ori 6, 22, 0
  043ff6c  fmuls 1, 1, 30
  043ff70  fmuls 2, 2, 24
  043ff74  addic 3, 1, 608
  043ff78  addic 4, 1, 592
  043ff7c  ori 5, 23, 0
  043ff80  li 9, 1
  043ff84  fctiwz 2, 2
  043ff88  stfd 2, 1072(1)
  043ff8c  lwz 8, 1076(1)
  043ff90  extsw 8, 8
  043ff94  bl 0x125350
  043ff98  nop
  043ff9c  b 0x440188
  043ffa0  li 3, 100
  043ffa4  bl 0xfc620
  043ffa8  nop
  043ffac  lis 4, 12104
  043ffb0  lis 5, 24568
  043ffb4  lbz 6, 17(28)
  043ffb8  ori 7, 4, 24696
  043ffbc  li 4, 40
  043ffc0  ori 5, 5, 63736
  043ffc4  subc 3, 3, 4
  043ffc8  subc 5, 5, 7
  043ffcc  sradi 3, 3, 63
  043ffd0  ori 4, 6, 0
  043ffd4  and 3, 3, 5
  043ffd8  addc 3, 7, 3
  043ffdc  bl 0x10a668
  043ffe0  nop
  043ffe4  ori 23, 3, 0
  043ffe8  lis 3, 3840
  043ffec  lbz 4, 17(28)
  043fff0  ori 3, 3, 32
  043fff4  bl 0x10a668
  043fff8  nop
  043fffc  lfs 1, -3056(24)
  0440000  ori 22, 3, 0
  0440004  fmuls 2, 1, 20
  0440008  fmuls 1, 1, 21
  044000c  fctiwz 2, 2
  0440010  fctiwz 1, 1
  0440014  stfd 2, 1072(1)
  0440018  lwz 3, 1076(1)
  044001c  stfd 1, 1072(1)
  0440020  extsw 3, 3
  0440024  lwz 4, 1076(1)
  0440028  extsw 4, 4
  044002c  bl 0xfe484
  0440030  nop
  0440034  ori 8, 3, 0
  0440038  li 9, 2
  044003c  fmr 1, 19
  0440040  addic 3, 1, 608
  0440044  addic 4, 1, 592
  0440048  ori 5, 23, 0
  044004c  ori 6, 22, 0
  0440050  bl 0x125350
  0440054  nop
  0440058  b 0x440188
  044005c  fmr 1, 28
  0440060  stfs 28, 1088(1)
  0440064  lfs 28, 1048(1)
  0440068  fmr 2, 28
  044006c  bl 0xfcbe8
  0440070  nop
  0440074  lis 4, 32536
  0440078  lis 3, 32512
  044007c  ori 4, 4, 8240
  0440080  bl 0x106738
  0440084  nop
  0440088  ori 23, 3, 0
  044008c  fmr 1, 29
  0440090  fmr 2, 28
  0440094  bl 0xfcbe8
  0440098  nop
  044009c  lis 4, 95
  04400a0  li 3, 0
  04400a4  ori 4, 4, 24415
  04400a8  bl 0x106738
  04400ac  nop
  04400b0  ori 22, 3, 0
  04400b4  lbz 4, 17(28)
  04400b8  ori 3, 23, 0
  04400bc  bl 0x10a668
  04400c0  nop
  04400c4  ori 23, 3, 0
  04400c8  lbz 4, 17(28)
  04400cc  ori 3, 22, 0
  04400d0  bl 0x10a668
  04400d4  nop
  04400d8  lfd 1, 1056(1)
  04400dc  fmr 2, 28
  04400e0  ori 22, 3, 0
  04400e4  bl 0xfcbe8
  04400e8  nop
  04400ec  lfs 2, -3052(27)
  04400f0  fmuls 28, 1, 2
  04400f4  bl 0xfcc68
  04400f8  nop
  04400fc  addic 20, 1, 592
  0440100  fmr 3, 1
  0440104  fmr 2, 31
  0440108  ori 3, 20, 0
  044010c  fmr 1, 28
  0440110  bl 0xfe610
  0440114  nop
  0440118  fmr 2, 26
  044011c  fmr 1, 25
  0440120  bl 0xfcbe8
  0440124  nop
  0440128  lfs 2, -3056(24)
  044012c  fmuls 31, 1, 30
  0440130  fmuls 3, 2, 27
  0440134  fmuls 2, 2, 22
  0440138  fctiwz 1, 3
  044013c  fctiwz 2, 2
  0440140  stfd 1, 1072(1)
  0440144  lwz 3, 1076(1)
  0440148  stfd 2, 1072(1)
  044014c  extsw 3, 3
  0440150  lwz 4, 1076(1)
  0440154  extsw 4, 4
  0440158  bl 0xfe484
  044015c  nop
  0440160  ori 8, 3, 0
  0440164  fmr 1, 31
  0440168  li 9, 3
  044016c  addic 3, 1, 608
  0440170  ori 4, 20, 0
  0440174  ori 5, 23, 0
  0440178  ori 6, 22, 0
  044017c  bl 0x125350
  0440180  nop
  0440184  lfs 28, 1088(1)
  0440188  addic 25, 25, 1
  044018c  cmpw 25, 30
  0440190  bt 0, 0x43fd18
  0440194  lis 3, 151
  0440198  stb 19, 188(31)
  044019c  addic 19, 3, -25432
  04401a0  lbz 3, 17(19)
  04401a4  cmpwi 3, 0
  04401a8  bt 2, 0x4401c4
  04401ac  li 3, 3
  04401b0  li 4, 0
  04401b4  ori 5, 31, 0
  04401b8  bl 0x15d12c
  04401bc  nop
  04401c0  b 0x4401d8
  04401c4  li 3, 2
  04401c8  li 4, 0
  04401cc  ori 5, 31, 0
  04401d0  bl 0x15d12c
  04401d4  nop
  04401d8  lis 3, 68
  04401dc  lfs 1, 1064(1)
  04401e0  addi 5, 3, -9504
  04401e4  vspltisw 2, -1
  04401e8  li 3, -3056
  04401ec  li 6, 280
  04401f0  lfs 2, 184(5)
  04401f4  lfs 3, 276(5)
  04401f8  fsub 2, 1, 2
  04401fc  lfs 4, 104(5)
  0440200  fmuls 1, 1, 3
  0440204  lfs 5, 1068(1)
  0440208  lvlx 3, 3, 24
  044020c  li 7, 360
  0440210  vslw 2, 2, 2
  0440214  ori 3, 26, 0
  0440218  addic 4, 21, 128
  044021c  fsel 1, 2, 4, 1
  0440220  fsubs 1, 5, 1
  0440224  stfs 1, 352(29)
  0440228  lvlx 4, 6, 5
  044022c  vspltw 4, 4, 0
  0440230  vmaddfp 2, 3, 4, 2
  0440234  vctsxs 2, 2, 0
  0440238  vspltw 2, 2, 0
  044023c  stvewx 2, 7, 29
  0440240  bl 0x5e8548
  0440244  nop
  0440248  lbz 3, 17(19)
  044024c  cmpwi 3, 0
  0440250  bt 2, 0x440270
  0440254  addic 3, 1, 928
  0440258  ori 4, 26, 0
  044025c  li 5, 0
  0440260  li 6, 0
  0440264  bl 0x3fda38
  0440268  nop
  044026c  b 0x440288
  0440270  addic 3, 1, 848
  0440274  ori 4, 26, 0
  0440278  li 5, 0
  044027c  li 6, 0
  0440280  bl 0x3fda38
  0440284  nop
  0440288  lis 4, 165
  044028c  ori 3, 31, 0
  0440290  addic 4, 4, 7912
  0440294  bl 0x110798
  0440298  nop
  044029c  ori 3, 31, 0
  04402a0  bl 0xefb38
  04402a4  nop
  04402a8  b 0x4402c4
  04402ac  lis 3, 68
  04402b0  addi 4, 3, -9504
  04402b4  ori 3, 31, 0
  04402b8  lfs 1, 24(4)
  04402bc  bl 0x106150
  04402c0  nop
  04402c4  li 0, 1104
  04402c8  lvx 30, 1, 0
  04402cc  addic 0, 0, 16
  04402d0  lvx 31, 1, 0
  04402d4  ld 0, 1408(1)
  04402d8  mtlr 0
  04402dc  lfd 14, 1248(1)
  04402e0  lfd 15, 1256(1)
  04402e4  lfd 16, 1264(1)
  04402e8  lfd 17, 1272(1)
  04402ec  lfd 18, 1280(1)
  04402f0  lfd 19, 1288(1)
  04402f4  lfd 20, 1296(1)
  04402f8  lfd 21, 1304(1)
  04402fc  lfd 22, 1312(1)
  0440300  lfd 23, 1320(1)
  0440304  lfd 24, 1328(1)
  0440308  lfd 25, 1336(1)
  044030c  lfd 26, 1344(1)
  0440310  lfd 27, 1352(1)
  0440314  lfd 28, 1360(1)
  0440318  lfd 29, 1368(1)
  044031c  lfd 30, 1376(1)
  0440320  lfd 31, 1384(1)
  0440324  ld 19, 1144(1)
  0440328  ld 20, 1152(1)
  044032c  ld 21, 1160(1)
  0440330  ld 22, 1168(1)
  0440334  ld 23, 1176(1)
  0440338  ld 24, 1184(1)
  044033c  ld 25, 1192(1)
  0440340  ld 26, 1200(1)
  0440344  ld 27, 1208(1)
  0440348  ld 28, 1216(1)
  044034c  ld 29, 1224(1)
  0440350  ld 30, 1232(1)
  0440354  ld 31, 1240(1)
  0440358  addi 1, 1, 1392
  044035c  blr
