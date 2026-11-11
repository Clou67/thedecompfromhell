# game/update/moby1811.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1811_002bc1d8:   # 0x2bc1d8, 0x14 bytes
  02bc1d8  lis 3, 123
  02bc1dc  lis 4, 1
  02bc1e0  addic 3, 3, 32132
  02bc1e4  stw 4, 72(3)
  02bc1e8  blr

UpdateMoby_1811:   # 0x2bc1f8, 0x2b0 bytes
  02bc1f8  stdu 1, -256(1)
  02bc1fc  mflr 0
  02bc200  std 0, 272(1)
  02bc204  stfd 31, 248(1)
  02bc208  lbz 4, 32(3)
  02bc20c  cmpwi 4, 0
  02bc210  cmpwi 1, 4, 1
  02bc214  std 31, 240(1)
  02bc218  std 30, 232(1)
  02bc21c  std 29, 224(1)
  02bc220  std 28, 216(1)
  02bc224  std 27, 208(1)
  02bc228  cmpwi 6, 4, -1
  02bc22c  bt 1, 0x2bc238
  02bc230  bf 25, 0x2bc480
  02bc234  b 0x2bc240
  02bc238  bf 5, 0x2bc254
  02bc23c  b 0x2bc480
  02bc240  li 4, 255
  02bc244  li 5, 1
  02bc248  stb 4, 48(3)
  02bc24c  stb 5, 32(3)
  02bc250  b 0x2bc480
  02bc254  lis 3, 161
  02bc258  lwz 3, 1800(3)
  02bc25c  cmpwi 3, 2
  02bc260  bf 2, 0x2bc480
  02bc264  lis 3, 150
  02bc268  addic 3, 3, -12976
  02bc26c  lwz 4, 48(3)
  02bc270  cmpwi 4, 2
  02bc274  bf 2, 0x2bc480
  02bc278  li 5, 2
  02bc27c  li 6, 2
  02bc280  subc 4, 5, 4
  02bc284  li 5, 0
  02bc288  cntlzw 4, 4
  02bc28c  subc 6, 6, 5
  02bc290  sldi 4, 4, 58
  02bc294  addic 31, 1, 112
  02bc298  sradi 4, 4, 63
  02bc29c  and 6, 4, 6
  02bc2a0  li 4, 2
  02bc2a4  addc 5, 5, 6
  02bc2a8  rlwimi 3, 5, 2, 28, 28
  02bc2ac  ori 5, 31, 0
  02bc2b0  lwz 30, 376(3)
  02bc2b4  ori 3, 30, 0
  02bc2b8  bl 0xf1114
  02bc2bc  nop
  02bc2c0  addic 5, 1, 144
  02bc2c4  ori 3, 30, 0
  02bc2c8  li 4, 4
  02bc2cc  bl 0xf1114
  02bc2d0  nop
  02bc2d4  lfs 1, 116(1)
  02bc2d8  lfs 2, 148(1)
  02bc2dc  lfs 3, 112(1)
  02bc2e0  fsubs 4, 1, 2
  02bc2e4  lfs 1, 144(1)
  02bc2e8  fsubs 3, 3, 1
  02bc2ec  lfs 1, 120(1)
  02bc2f0  lfs 2, 152(1)
  02bc2f4  fsubs 5, 1, 2
  02bc2f8  fmuls 1, 4, 4
  02bc2fc  lis 29, 123
  02bc300  lis 3, 44
  02bc304  lfs 7, 32240(29)
  02bc308  fmadds 1, 3, 3, 1
  02bc30c  stfs 3, 176(1)
  02bc310  addi 3, 3, -15888
  02bc314  stfs 4, 180(1)
  02bc318  lis 28, 123
  02bc31c  lis 27, 123
  02bc320  fmadds 1, 5, 5, 1
  02bc324  ori 4, 31, 0
  02bc328  addic 5, 1, 176
  02bc32c  fsqrts 6, 1
  02bc330  lfs 1, 124(1)
  02bc334  stfs 5, 184(1)
  02bc338  stfs 1, 188(1)
  02bc33c  lfs 31, 0(3)
  02bc340  lfs 1, 32244(28)
  02bc344  ori 3, 31, 0
  02bc348  lfs 2, 32248(27)
  02bc34c  fdivs 7, 7, 6
  02bc350  fsub 8, 31, 6
  02bc354  fsub 9, 31, 6
  02bc358  fsub 10, 31, 6
  02bc35c  fsub 11, 6, 31
  02bc360  fsub 12, 6, 31
  02bc364  fsub 6, 6, 31
  02bc368  fmuls 3, 3, 7
  02bc36c  fmuls 4, 4, 7
  02bc370  fmuls 5, 5, 7
  02bc374  fsel 7, 8, 31, 3
  02bc378  fsel 8, 9, 31, 4
  02bc37c  fsel 9, 10, 31, 5
  02bc380  fsel 3, 11, 7, 3
  02bc384  fsel 4, 12, 8, 4
  02bc388  fsel 5, 6, 9, 5
  02bc38c  stfs 3, 176(1)
  02bc390  stfs 4, 180(1)
  02bc394  stfs 5, 184(1)
  02bc398  bl 0x11a1a0
  02bc39c  nop
  02bc3a0  addic 31, 1, 128
  02bc3a4  ori 3, 30, 0
  02bc3a8  li 4, 1
  02bc3ac  ori 5, 31, 0
  02bc3b0  bl 0xf1114
  02bc3b4  nop
  02bc3b8  addic 5, 1, 160
  02bc3bc  ori 3, 30, 0
  02bc3c0  li 4, 3
  02bc3c4  bl 0xf1114
  02bc3c8  nop
  02bc3cc  lfs 1, 132(1)
  02bc3d0  lfs 2, 164(1)
  02bc3d4  lfs 3, 128(1)
  02bc3d8  fsubs 4, 1, 2
  02bc3dc  lfs 1, 160(1)
  02bc3e0  fsubs 3, 3, 1
  02bc3e4  lfs 1, 136(1)
  02bc3e8  lfs 2, 168(1)
  02bc3ec  fsubs 5, 1, 2
  02bc3f0  fmuls 1, 4, 4
  02bc3f4  lfs 7, 32240(29)
  02bc3f8  addic 5, 1, 192
  02bc3fc  ori 3, 31, 0
  02bc400  ori 4, 31, 0
  02bc404  fmadds 1, 3, 3, 1
  02bc408  stfs 3, 192(1)
  02bc40c  stfs 4, 196(1)
  02bc410  fmadds 1, 5, 5, 1
  02bc414  fsqrts 6, 1
  02bc418  lfs 1, 140(1)
  02bc41c  stfs 5, 200(1)
  02bc420  stfs 1, 204(1)
  02bc424  lfs 1, 32244(28)
  02bc428  lfs 2, 32248(27)
  02bc42c  fdivs 7, 7, 6
  02bc430  fsub 8, 31, 6
  02bc434  fsub 9, 31, 6
  02bc438  fsub 10, 31, 6
  02bc43c  fsub 11, 6, 31
  02bc440  fsub 12, 6, 31
  02bc444  fsub 6, 6, 31
  02bc448  fmuls 3, 3, 7
  02bc44c  fmuls 4, 4, 7
  02bc450  fmuls 5, 5, 7
  02bc454  fsel 7, 8, 31, 3
  02bc458  fsel 8, 9, 31, 4
  02bc45c  fsel 9, 10, 31, 5
  02bc460  fsel 3, 11, 7, 3
  02bc464  fsel 4, 12, 8, 4
  02bc468  fsel 5, 6, 9, 5
  02bc46c  stfs 3, 192(1)
  02bc470  stfs 4, 196(1)
  02bc474  stfs 5, 200(1)
  02bc478  bl 0x11a1a0
  02bc47c  nop
  02bc480  ld 0, 272(1)
  02bc484  mtlr 0
  02bc488  lfd 31, 248(1)
  02bc48c  ld 27, 208(1)
  02bc490  ld 28, 216(1)
  02bc494  ld 29, 224(1)
  02bc498  ld 30, 232(1)
  02bc49c  ld 31, 240(1)
  02bc4a0  addi 1, 1, 256
  02bc4a4  blr
