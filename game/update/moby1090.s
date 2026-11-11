# game/update/moby1090.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1090_001bc080:   # 0x1bc080, 0x14 bytes
  01bc080  lis 3, 118
  01bc084  lis 4, 1
  01bc088  addic 3, 3, 15080
  01bc08c  stw 4, 72(3)
  01bc090  blr

FUN_001bc0b0:   # 0x1bc0b0, 0x180 bytes
  01bc0b0  stdu 1, -176(1)
  01bc0b4  mflr 0
  01bc0b8  std 0, 192(1)
  01bc0bc  stfd 29, 152(1)
  01bc0c0  stfd 30, 160(1)
  01bc0c4  stfd 31, 168(1)
  01bc0c8  std 29, 128(1)
  01bc0cc  ori 29, 3, 0
  01bc0d0  li 3, 1090
  01bc0d4  std 31, 144(1)
  01bc0d8  fmr 31, 3
  01bc0dc  ori 31, 5, 0
  01bc0e0  std 30, 136(1)
  01bc0e4  fmr 30, 2
  01bc0e8  ori 30, 4, 0
  01bc0ec  std 28, 120(1)
  01bc0f0  std 27, 112(1)
  01bc0f4  fmr 29, 1
  01bc0f8  bl 0xefa28
  01bc0fc  nop
  01bc100  ori 28, 3, 0
  01bc104  cmpwi 28, 0
  01bc108  bt 2, 0x1bc1fc
  01bc10c  li 3, 255
  01bc110  li 4, 1
  01bc114  li 5, 0
  01bc118  li 6, 64
  01bc11c  stb 3, 48(28)
  01bc120  sth 3, 50(28)
  01bc124  stb 4, 49(28)
  01bc128  stb 5, 32(28)
  01bc12c  ori 3, 28, 0
  01bc130  stb 6, 35(28)
  01bc134  li 4, 127
  01bc138  lfs 1, 0(30)
  01bc13c  li 5, 64
  01bc140  lwz 27, 120(28)
  01bc144  li 6, 0
  01bc148  stfs 1, 16(28)
  01bc14c  lfs 1, 4(30)
  01bc150  stfs 1, 20(28)
  01bc154  lfs 1, 8(30)
  01bc158  stfs 1, 24(28)
  01bc15c  lfs 1, 12(30)
  01bc160  stfs 1, 28(28)
  01bc164  bl 0xf1ec8
  01bc168  nop
  01bc16c  lis 3, 28
  01bc170  stw 31, 0(27)
  01bc174  lis 30, 114
  01bc178  addi 31, 3, -16232
  01bc17c  stfs 29, 4(27)
  01bc180  stfs 30, 8(27)
  01bc184  stfs 31, 12(27)
  01bc188  stw 29, 16(27)
  01bc18c  lfs 31, 0(31)
  01bc190  lfs 2, -3052(30)
  01bc194  lfs 30, 4(31)
  01bc198  fmuls 1, 2, 31
  01bc19c  fdivs 1, 30, 1
  01bc1a0  bl 0x502758
  01bc1a4  nop
  01bc1a8  stw 3, 20(27)
  01bc1ac  lfs 1, 8(31)
  01bc1b0  lfs 2, 12(31)
  01bc1b4  bl 0xfcbe8
  01bc1b8  nop
  01bc1bc  stfs 1, 24(27)
  01bc1c0  lfs 1, -3052(30)
  01bc1c4  lfs 2, 16(31)
  01bc1c8  fmuls 1, 1, 31
  01bc1cc  fmr 31, 2
  01bc1d0  fdivs 1, 30, 1
  01bc1d4  bl 0x502758
  01bc1d8  nop
  01bc1dc  lis 5, 8015
  01bc1e0  ori 6, 3, 0
  01bc1e4  fmr 1, 31
  01bc1e8  ori 3, 28, 0
  01bc1ec  ori 5, 5, 32639
  01bc1f0  li 7, -1
  01bc1f4  bl 0x127ea8
  01bc1f8  nop
  01bc1fc  ori 3, 28, 0
  01bc200  ld 0, 192(1)
  01bc204  mtlr 0
  01bc208  lfd 29, 152(1)
  01bc20c  lfd 30, 160(1)
  01bc210  lfd 31, 168(1)
  01bc214  ld 27, 112(1)
  01bc218  ld 28, 120(1)
  01bc21c  ld 29, 128(1)
  01bc220  ld 30, 136(1)
  01bc224  ld 31, 144(1)
  01bc228  addi 1, 1, 176
  01bc22c  blr

UpdateMoby_1090:   # 0x1bc250, 0x304 bytes
  01bc250  stdu 1, -240(1)
  01bc254  mflr 0
  01bc258  std 0, 256(1)
  01bc25c  stfd 28, 208(1)
  01bc260  stfd 29, 216(1)
  01bc264  stfd 30, 224(1)
  01bc268  stfd 31, 232(1)
  01bc26c  std 31, 200(1)
  01bc270  ori 31, 3, 0
  01bc274  lis 3, 28
  01bc278  lis 4, 114
  01bc27c  std 29, 184(1)
  01bc280  addi 3, 3, -15824
  01bc284  std 30, 192(1)
  01bc288  lwz 29, 120(31)
  01bc28c  addic 30, 31, 16
  01bc290  addic 6, 1, 160
  01bc294  addic 7, 1, 164
  01bc298  lfs 1, 4(29)
  01bc29c  lfs 3, 8(29)
  01bc2a0  lfs 4, 24(29)
  01bc2a4  fadds 1, 1, 3
  01bc2a8  lfs 2, 12(29)
  01bc2ac  lwz 5, 0(29)
  01bc2b0  ori 8, 30, 0
  01bc2b4  stfs 1, 4(29)
  01bc2b8  lfs 29, 0(3)
  01bc2bc  lfs 5, -3064(4)
  01bc2c0  fsubs 4, 4, 29
  01bc2c4  fmadds 4, 4, 5, 29
  01bc2c8  fmuls 3, 3, 4
  01bc2cc  std 28, 176(1)
  01bc2d0  std 27, 168(1)
  01bc2d4  stfs 3, 8(29)
  01bc2d8  bl 0x1150f8
  01bc2dc  nop
  01bc2e0  bl 0xfcc68
  01bc2e4  nop
  01bc2e8  stfs 1, 64(31)
  01bc2ec  bl 0xfcc68
  01bc2f0  nop
  01bc2f4  stfs 1, 68(31)
  01bc2f8  bl 0xfcc68
  01bc2fc  nop
  01bc300  addic 3, 29, 20
  01bc304  stfs 1, 72(31)
  01bc308  bl 0x4fff60
  01bc30c  nop
  01bc310  cmpwi 3, 0
  01bc314  bt 2, 0x1bc328
  01bc318  ori 3, 31, 0
  01bc31c  bl 0xefb38
  01bc320  nop
  01bc324  b 0x1bc520
  01bc328  lis 3, 28
  01bc32c  addi 28, 3, -15824
  01bc330  lis 3, 114
  01bc334  lfs 30, 4(28)
  01bc338  lfs 1, -3052(3)
  01bc33c  lfs 31, 8(28)
  01bc340  fmuls 1, 1, 30
  01bc344  lwz 27, 20(29)
  01bc348  fdivs 1, 31, 1
  01bc34c  bl 0x502758
  01bc350  nop
  01bc354  srawi 3, 3, 1
  01bc358  lfs 28, 12(28)
  01bc35c  addze 3, 3
  01bc360  cmpw 27, 3
  01bc364  bf 0, 0x1bc3c4
  01bc368  lis 3, 114
  01bc36c  lfs 1, -3052(3)
  01bc370  fmuls 1, 1, 30
  01bc374  fdivs 1, 31, 1
  01bc378  bl 0x502758
  01bc37c  nop
  01bc380  srawi 3, 3, 1
  01bc384  addze 3, 3
  01bc388  extsw 3, 3
  01bc38c  bl 0x502730
  01bc390  nop
  01bc394  lwz 3, 20(29)
  01bc398  extsw 3, 3
  01bc39c  fmr 31, 1
  01bc3a0  bl 0x502730
  01bc3a4  nop
  01bc3a8  lwz 3, 36(31)
  01bc3ac  lfs 2, 36(3)
  01bc3b0  fmuls 1, 2, 1
  01bc3b4  fdivs 1, 1, 31
  01bc3b8  fmuls 1, 1, 28
  01bc3bc  stfs 1, 44(31)
  01bc3c0  b 0x1bc470
  01bc3c4  lis 3, 114
  01bc3c8  lfs 1, -3052(3)
  01bc3cc  lwz 28, 20(29)
  01bc3d0  fmuls 1, 1, 30
  01bc3d4  fdivs 1, 31, 1
  01bc3d8  bl 0x502758
  01bc3dc  nop
  01bc3e0  srawi 4, 3, 2
  01bc3e4  lfs 1, 44(31)
  01bc3e8  lwz 3, 36(31)
  01bc3ec  addze 4, 4
  01bc3f0  addc 5, 4, 4
  01bc3f4  addc 4, 4, 5
  01bc3f8  cmpw 28, 4
  01bc3fc  bf 1, 0x1bc470
  01bc400  lis 28, 114
  01bc404  lfs 1, -3052(28)
  01bc408  fmuls 1, 1, 30
  01bc40c  fdivs 1, 31, 1
  01bc410  bl 0x502758
  01bc414  nop
  01bc418  srawi 3, 3, 2
  01bc41c  addze 3, 3
  01bc420  extsw 3, 3
  01bc424  bl 0x502730
  01bc428  nop
  01bc42c  lfs 2, -3052(28)
  01bc430  fmuls 2, 2, 30
  01bc434  fmr 30, 1
  01bc438  fdivs 1, 31, 2
  01bc43c  bl 0x502758
  01bc440  nop
  01bc444  lwz 4, 20(29)
  01bc448  subc 3, 3, 4
  01bc44c  extsw 3, 3
  01bc450  bl 0x502730
  01bc454  nop
  01bc458  lwz 3, 36(31)
  01bc45c  lfs 2, 36(3)
  01bc460  fmuls 1, 2, 1
  01bc464  fdivs 1, 1, 30
  01bc468  fmuls 1, 1, 28
  01bc46c  stfs 1, 44(31)
  01bc470  lis 4, 28
  01bc474  lfs 2, 36(3)
  01bc478  addi 4, 4, -15824
  01bc47c  lfs 3, 16(4)
  01bc480  fmuls 2, 2, 3
  01bc484  fcmpu 0, 1, 2
  01bc488  cror 6, 0, 2
  01bc48c  bt 6, 0x1bc520
  01bc490  lis 4, 28
  01bc494  lwz 6, 16(29)
  01bc498  ori 3, 30, 0
  01bc49c  addi 30, 4, -15824
  01bc4a0  li 5, 16
  01bc4a4  li 7, 0
  01bc4a8  lfs 1, 20(30)
  01bc4ac  bl 0x5e598
  01bc4b0  nop
  01bc4b4  lfs 1, 24(30)
  01bc4b8  lfs 2, 16(31)
  01bc4bc  ori 8, 3, 0
  01bc4c0  lfs 3, 24(31)
  01bc4c4  li 3, 2
  01bc4c8  stfs 2, 64(1)
  01bc4cc  li 5, 1
  01bc4d0  stfs 3, 72(1)
  01bc4d4  lis 7, 161
  01bc4d8  lwz 4, 16(29)
  01bc4dc  lis 10, 129
  01bc4e0  lfs 2, 20(31)
  01bc4e4  addic 7, 7, 18944
  01bc4e8  li 9, 0
  01bc4ec  fmr 3, 29
  01bc4f0  stfs 2, 68(1)
  01bc4f4  ori 10, 10, 1
  01bc4f8  lfs 2, 28(31)
  01bc4fc  stfs 2, 76(1)
  01bc500  std 3, 120(1)
  01bc504  fmr 2, 29
  01bc508  std 5, 128(1)
  01bc50c  ori 3, 4, 0
  01bc510  ld 5, 64(1)
  01bc514  ld 6, 72(1)
  01bc518  bl 0x107860
  01bc51c  nop
  01bc520  ld 0, 256(1)
  01bc524  mtlr 0
  01bc528  lfd 28, 208(1)
  01bc52c  lfd 29, 216(1)
  01bc530  lfd 30, 224(1)
  01bc534  lfd 31, 232(1)
  01bc538  ld 27, 168(1)
  01bc53c  ld 28, 176(1)
  01bc540  ld 29, 184(1)
  01bc544  ld 30, 192(1)
  01bc548  ld 31, 200(1)
  01bc54c  addi 1, 1, 240
  01bc550  blr
