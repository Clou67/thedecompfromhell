# game/update/moby931.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M931_004bbde4:   # 0x4bbde4, 0x14 bytes
  04bbde4  lis 3, 143
  04bbde8  lis 4, 1
  04bbdec  addic 3, 3, 18740
  04bbdf0  stw 4, 72(3)
  04bbdf4  blr

M931_004bbe20:   # 0x4bbe20, 0x648 bytes
  04bbe20  stdu 1, -336(1)
  04bbe24  mflr 0
  04bbe28  std 0, 352(1)
  04bbe2c  stfd 29, 312(1)
  04bbe30  stfd 30, 320(1)
  04bbe34  stfd 31, 328(1)
  04bbe38  std 31, 304(1)
  04bbe3c  ori 31, 3, 0
  04bbe40  std 29, 288(1)
  04bbe44  lis 6, 76
  04bbe48  addic 5, 1, 112
  04bbe4c  std 30, 296(1)
  04bbe50  addi 29, 6, -16904
  04bbe54  ori 30, 4, 0
  04bbe58  bl 0x1118d8
  04bbe5c  nop
  04bbe60  lfs 1, 20(31)
  04bbe64  lis 4, 164
  04bbe68  lfs 3, 116(1)
  04bbe6c  li 5, 0
  04bbe70  lfs 4, 0(29)
  04bbe74  fsubs 1, 1, 3
  04bbe78  lfs 5, 16(31)
  04bbe7c  fmr 7, 4
  04bbe80  lfs 2, 112(1)
  04bbe84  li 3, 1
  04bbe88  stw 5, 12(30)
  04bbe8c  fsubs 5, 5, 2
  04bbe90  lwz 4, -28500(4)
  04bbe94  stw 5, 8(30)
  04bbe98  stw 5, 4(30)
  04bbe9c  cmpwi 4, 0
  04bbea0  stw 5, 0(30)
  04bbea4  lfs 8, 120(1)
  04bbea8  fmuls 1, 1, 1
  04bbeac  fmr 6, 7
  04bbeb0  fmadds 1, 5, 5, 1
  04bbeb4  fmr 5, 6
  04bbeb8  fsqrts 1, 1
  04bbebc  bt 2, 0x4bc084
  04bbec0  lis 6, 76
  04bbec4  fmr 9, 4
  04bbec8  addi 6, 6, -16904
  04bbecc  lfs 12, 4(6)
  04bbed0  lfs 13, 8(6)
  04bbed4  cmpw 4, 31
  04bbed8  bt 2, 0x4bbf80
  04bbedc  lhz 6, 166(4)
  04bbee0  lhz 7, 166(31)
  04bbee4  extsh 6, 6
  04bbee8  extsh 7, 7
  04bbeec  cmpw 6, 7
  04bbef0  bf 2, 0x4bbf80
  04bbef4  lfs 31, 20(4)
  04bbef8  lfs 0, 16(4)
  04bbefc  lfs 11, 20(31)
  04bbf00  lfs 10, 16(31)
  04bbf04  fsubs 30, 31, 11
  04bbf08  fsubs 29, 0, 10
  04bbf0c  fmuls 30, 30, 30
  04bbf10  fmadds 30, 29, 29, 30
  04bbf14  fsqrts 30, 30
  04bbf18  fcmpu 0, 30, 12
  04bbf1c  cror 6, 1, 2
  04bbf20  bt 6, 0x4bbf5c
  04bbf24  fsubs 10, 10, 0
  04bbf28  fsubs 11, 11, 31
  04bbf2c  lfs 0, 24(31)
  04bbf30  lfs 31, 24(4)
  04bbf34  fadds 9, 9, 13
  04bbf38  fsubs 0, 0, 31
  04bbf3c  fmadds 5, 10, 13, 5
  04bbf40  fmadds 6, 11, 13, 6
  04bbf44  fmadds 7, 0, 13, 7
  04bbf48  stfs 5, 0(30)
  04bbf4c  stfs 6, 4(30)
  04bbf50  stfs 7, 8(30)
  04bbf54  lfs 0, 16(4)
  04bbf58  lfs 31, 20(4)
  04bbf5c  fsubs 10, 31, 3
  04bbf60  fsubs 11, 0, 2
  04bbf64  fmuls 10, 10, 10
  04bbf68  fmadds 10, 11, 11, 10
  04bbf6c  fsqrts 10, 10
  04bbf70  fcmpu 0, 10, 1
  04bbf74  cror 6, 1, 2
  04bbf78  bt 6, 0x4bbf80
  04bbf7c  ori 3, 5, 0
  04bbf80  lwz 4, 40(4)
  04bbf84  cmpwi 4, 0
  04bbf88  bf 2, 0x4bbed4
  04bbf8c  cmpwi 3, 0
  04bbf90  bf 2, 0x4bc084
  04bbf94  lfs 10, 20(31)
  04bbf98  lfs 11, 16(31)
  04bbf9c  fsubs 10, 10, 3
  04bbfa0  lfs 12, 24(31)
  04bbfa4  fsubs 11, 11, 2
  04bbfa8  fsubs 8, 12, 8
  04bbfac  lis 3, 76
  04bbfb0  addi 3, 3, -16904
  04bbfb4  fmuls 12, 10, 10
  04bbfb8  lfs 13, 24(3)
  04bbfbc  lfs 0, 12(3)
  04bbfc0  fsub 13, 13, 1
  04bbfc4  lfs 31, 20(3)
  04bbfc8  fsub 1, 1, 0
  04bbfcc  lfs 30, 16(3)
  04bbfd0  lfs 0, 28(3)
  04bbfd4  fmadds 12, 11, 11, 12
  04bbfd8  fsel 13, 13, 4, 31
  04bbfdc  fadds 9, 9, 30
  04bbfe0  fmadds 12, 8, 8, 12
  04bbfe4  fsel 1, 1, 13, 30
  04bbfe8  fmr 13, 0
  04bbfec  fsqrts 12, 12
  04bbff0  stw 5, 12(30)
  04bbff4  fmuls 1, 1, 30
  04bbff8  fdivs 9, 13, 9
  04bbffc  fdivs 1, 1, 12
  04bc000  fsub 13, 4, 12
  04bc004  fsub 0, 4, 12
  04bc008  fsub 31, 4, 12
  04bc00c  fsub 30, 12, 4
  04bc010  fsub 29, 12, 4
  04bc014  fsub 12, 12, 4
  04bc018  fmuls 8, 1, 8
  04bc01c  fmuls 10, 1, 10
  04bc020  fmuls 1, 1, 11
  04bc024  fsel 11, 13, 4, 8
  04bc028  fsel 13, 0, 4, 10
  04bc02c  fsel 0, 31, 4, 1
  04bc030  fsel 8, 30, 11, 8
  04bc034  fsel 10, 29, 13, 10
  04bc038  fsel 1, 12, 0, 1
  04bc03c  fadds 7, 7, 8
  04bc040  fadds 6, 6, 10
  04bc044  fadds 1, 5, 1
  04bc048  fmuls 8, 7, 9
  04bc04c  fmuls 5, 6, 9
  04bc050  fmuls 1, 1, 9
  04bc054  stfs 8, 8(30)
  04bc058  stfs 5, 4(30)
  04bc05c  stfs 1, 0(30)
  04bc060  lfs 6, 16(31)
  04bc064  fadds 1, 1, 6
  04bc068  stfs 1, 0(30)
  04bc06c  lfs 6, 20(31)
  04bc070  fadds 5, 5, 6
  04bc074  stfs 5, 4(30)
  04bc078  lfs 6, 24(31)
  04bc07c  fadds 8, 8, 6
  04bc080  b 0x4bc09c
  04bc084  stfs 2, 0(30)
  04bc088  stfs 3, 4(30)
  04bc08c  fmr 1, 2
  04bc090  lfs 6, 124(1)
  04bc094  fmr 5, 3
  04bc098  stfs 6, 12(30)
  04bc09c  stfs 8, 8(30)
  04bc0a0  lfs 7, 20(31)
  04bc0a4  lfs 6, 16(31)
  04bc0a8  fsubs 8, 7, 5
  04bc0ac  fsubs 9, 6, 1
  04bc0b0  lis 3, 76
  04bc0b4  addi 3, 3, -16904
  04bc0b8  fmuls 8, 8, 8
  04bc0bc  lfs 11, 28(3)
  04bc0c0  fmadds 8, 9, 9, 8
  04bc0c4  fsqrts 9, 8
  04bc0c8  lfs 8, 32(3)
  04bc0cc  fcmpu 0, 9, 11
  04bc0d0  cror 6, 1, 2
  04bc0d4  bt 6, 0x4bc2a0
  04bc0d8  stfs 6, 0(30)
  04bc0dc  lfs 1, 20(31)
  04bc0e0  stfs 1, 4(30)
  04bc0e4  lfs 1, 24(31)
  04bc0e8  stfs 1, 8(30)
  04bc0ec  lfs 1, 28(31)
  04bc0f0  stfs 1, 12(30)
  04bc0f4  lfs 1, 16(31)
  04bc0f8  lfs 5, 20(31)
  04bc0fc  fsubs 1, 2, 1
  04bc100  fsubs 2, 3, 5
  04bc104  lis 3, 115
  04bc108  addic 3, 3, 22784
  04bc10c  fabs 3, 1
  04bc110  fabs 5, 2
  04bc114  stfs 1, 204(1)
  04bc118  stfs 2, 208(1)
  04bc11c  fsubs 1, 3, 5
  04bc120  stfs 1, 212(1)
  04bc124  lwz 4, 204(1)
  04bc128  lfs 1, 204(1)
  04bc12c  lwz 5, 208(1)
  04bc130  lfs 2, 208(1)
  04bc134  fabs 1, 1
  04bc138  lwz 6, 212(1)
  04bc13c  rlwinm 5, 5, 3, 29, 29
  04bc140  fabs 6, 2
  04bc144  lfs 2, 212(1)
  04bc148  rlwimi 5, 6, 2, 30, 30
  04bc14c  fsub 7, 2, 4
  04bc150  fsub 9, 2, 4
  04bc154  rlwimi 5, 4, 4, 28, 28
  04bc158  ori 4, 3, 0
  04bc15c  rlwimi 4, 5, 2, 26, 28
  04bc160  slwi 5, 5, 2
  04bc164  clrldi 4, 4, 32
  04bc168  fsel 5, 7, 1, 5
  04bc16c  lfsx 2, 3, 5
  04bc170  fsel 3, 9, 6, 3
  04bc174  lfs 1, 4(4)
  04bc178  fcmpu 0, 5, 4
  04bc17c  bt 1, 0x4bc188
  04bc180  fmr 1, 4
  04bc184  b 0x4bc29c
  04bc188  fsubs 6, 3, 5
  04bc18c  fadds 3, 3, 5
  04bc190  addic 3, 1, 16
  04bc194  li 6, 2
  04bc198  addic 4, 3, 232
  04bc19c  addic 5, 3, 248
  04bc1a0  mtctr 6
  04bc1a4  fdivs 3, 6, 3
  04bc1a8  fmuls 5, 3, 3
  04bc1ac  stfs 3, 260(1)
  04bc1b0  stfs 3, 252(1)
  04bc1b4  stfs 3, 256(1)
  04bc1b8  stfs 3, 248(1)
  04bc1bc  lfs 7, 260(1)
  04bc1c0  lfs 9, 252(1)
  04bc1c4  lfs 10, 256(1)
  04bc1c8  fmuls 6, 5, 5
  04bc1cc  fmuls 9, 9, 5
  04bc1d0  fmuls 7, 7, 6
  04bc1d4  fmuls 3, 6, 6
  04bc1d8  fmuls 6, 10, 6
  04bc1dc  stfs 9, 252(1)
  04bc1e0  fmuls 5, 7, 5
  04bc1e4  stfs 6, 256(1)
  04bc1e8  stfs 5, 260(1)
  04bc1ec  lfs 5, 232(3)
  04bc1f0  fmuls 5, 5, 3
  04bc1f4  stfs 5, 248(3)
  04bc1f8  lfs 5, 4(4)
  04bc1fc  addic 3, 3, 8
  04bc200  addic 4, 4, 8
  04bc204  fmuls 5, 5, 3
  04bc208  stfs 5, 4(5)
  04bc20c  addic 5, 5, 8
  04bc210  bdnz 0x4bc1ec
  04bc214  li 5, 4
  04bc218  ori 3, 1, 0
  04bc21c  mtctr 5
  04bc220  lis 4, 115
  04bc224  addic 5, 3, 248
  04bc228  addic 4, 4, 22752
  04bc22c  ori 7, 5, 0
  04bc230  lfs 3, 248(3)
  04bc234  lfs 5, 0(4)
  04bc238  fmuls 3, 3, 5
  04bc23c  lfs 5, 4(4)
  04bc240  addic 4, 4, 8
  04bc244  stfs 3, 248(3)
  04bc248  lfs 3, 4(5)
  04bc24c  addic 3, 3, 8
  04bc250  fmuls 3, 3, 5
  04bc254  stfs 3, 4(5)
  04bc258  addic 5, 5, 8
  04bc25c  bdnz 0x4bc230
  04bc260  ori 3, 1, 0
  04bc264  mtctr 6
  04bc268  lfs 3, 248(3)
  04bc26c  fadds 3, 4, 3
  04bc270  lfs 4, 4(7)
  04bc274  addic 3, 3, 16
  04bc278  lfs 5, 8(7)
  04bc27c  lfs 6, 12(7)
  04bc280  addic 7, 7, 16
  04bc284  fadds 3, 3, 4
  04bc288  fadds 4, 3, 5
  04bc28c  fadds 4, 4, 6
  04bc290  bdnz 0x4bc268
  04bc294  fadds 3, 4, 8
  04bc298  fmadds 1, 3, 2, 1
  04bc29c  b 0x4bc440
  04bc2a0  fsubs 1, 1, 6
  04bc2a4  fsubs 2, 5, 7
  04bc2a8  lis 3, 115
  04bc2ac  addic 3, 3, 22784
  04bc2b0  fabs 5, 1
  04bc2b4  fabs 3, 2
  04bc2b8  stfs 1, 192(1)
  04bc2bc  stfs 2, 196(1)
  04bc2c0  fsubs 1, 5, 3
  04bc2c4  stfs 1, 200(1)
  04bc2c8  lwz 4, 192(1)
  04bc2cc  lfs 1, 192(1)
  04bc2d0  lwz 5, 196(1)
  04bc2d4  lfs 2, 196(1)
  04bc2d8  lwz 6, 200(1)
  04bc2dc  rlwinm 5, 5, 3, 29, 29
  04bc2e0  lfs 6, 200(1)
  04bc2e4  fabs 1, 1
  04bc2e8  rlwimi 5, 6, 2, 30, 30
  04bc2ec  fabs 2, 2
  04bc2f0  fsub 7, 6, 4
  04bc2f4  fsub 9, 6, 4
  04bc2f8  rlwimi 5, 4, 4, 28, 28
  04bc2fc  ori 4, 3, 0
  04bc300  rlwimi 4, 5, 2, 26, 28
  04bc304  slwi 5, 5, 2
  04bc308  clrldi 4, 4, 32
  04bc30c  fsel 3, 7, 1, 3
  04bc310  lfsx 6, 3, 5
  04bc314  fsel 2, 9, 2, 5
  04bc318  lfs 1, 4(4)
  04bc31c  fcmpu 0, 3, 4
  04bc320  bt 1, 0x4bc32c
  04bc324  fmr 1, 4
  04bc328  b 0x4bc440
  04bc32c  fsubs 5, 2, 3
  04bc330  fadds 2, 2, 3
  04bc334  addic 3, 1, 16
  04bc338  li 7, 2
  04bc33c  addic 5, 3, 216
  04bc340  addic 4, 3, 200
  04bc344  mtctr 7
  04bc348  fdivs 2, 5, 2
  04bc34c  fmuls 3, 2, 2
  04bc350  stfs 2, 228(1)
  04bc354  stfs 2, 220(1)
  04bc358  stfs 2, 224(1)
  04bc35c  stfs 2, 216(1)
  04bc360  lfs 7, 228(1)
  04bc364  lfs 9, 220(1)
  04bc368  lfs 10, 224(1)
  04bc36c  fmuls 5, 3, 3
  04bc370  fmuls 9, 9, 3
  04bc374  fmuls 7, 7, 5
  04bc378  fmuls 2, 5, 5
  04bc37c  fmuls 5, 10, 5
  04bc380  stfs 9, 220(1)
  04bc384  fmuls 3, 7, 3
  04bc388  stfs 5, 224(1)
  04bc38c  stfs 3, 228(1)
  04bc390  lfs 3, 200(3)
  04bc394  fmuls 3, 3, 2
  04bc398  stfs 3, 216(3)
  04bc39c  lfs 3, 4(4)
  04bc3a0  addic 4, 4, 8
  04bc3a4  fmuls 3, 3, 2
  04bc3a8  addic 3, 3, 8
  04bc3ac  stfs 3, 4(5)
  04bc3b0  addic 5, 5, 8
  04bc3b4  bdnz 0x4bc390
  04bc3b8  li 5, 4
  04bc3bc  ori 3, 1, 0
  04bc3c0  mtctr 5
  04bc3c4  lis 4, 115
  04bc3c8  addic 5, 3, 216
  04bc3cc  addic 4, 4, 22752
  04bc3d0  ori 6, 5, 0
  04bc3d4  lfs 2, 216(3)
  04bc3d8  lfs 3, 0(4)
  04bc3dc  fmuls 2, 2, 3
  04bc3e0  lfs 3, 4(4)
  04bc3e4  addic 4, 4, 8
  04bc3e8  stfs 2, 216(3)
  04bc3ec  lfs 2, 4(5)
  04bc3f0  addic 3, 3, 8
  04bc3f4  fmuls 2, 2, 3
  04bc3f8  stfs 2, 4(5)
  04bc3fc  addic 5, 5, 8
  04bc400  bdnz 0x4bc3d4
  04bc404  ori 3, 1, 0
  04bc408  mtctr 7
  04bc40c  lfs 2, 216(3)
  04bc410  lfs 3, 4(6)
  04bc414  fadds 2, 4, 2
  04bc418  lfs 4, 8(6)
  04bc41c  addic 3, 3, 16
  04bc420  lfs 5, 12(6)
  04bc424  addic 6, 6, 16
  04bc428  fadds 2, 2, 3
  04bc42c  fadds 4, 2, 4
  04bc430  fadds 4, 4, 5
  04bc434  bdnz 0x4bc40c
  04bc438  fadds 2, 4, 8
  04bc43c  fmadds 1, 2, 6, 1
  04bc440  ld 0, 352(1)
  04bc444  mtlr 0
  04bc448  lfd 29, 312(1)
  04bc44c  lfd 30, 320(1)
  04bc450  lfd 31, 328(1)
  04bc454  ld 29, 288(1)
  04bc458  ld 30, 296(1)
  04bc45c  ld 31, 304(1)
  04bc460  addi 1, 1, 336
  04bc464  blr

M931_004bc480:   # 0x4bc480, 0x824 bytes
  04bc480  stdu 1, -256(1)
  04bc484  mflr 0
  04bc488  std 0, 272(1)
  04bc48c  stfd 31, 248(1)
  04bc490  std 31, 240(1)
  04bc494  ori 31, 3, 0
  04bc498  lis 3, 143
  04bc49c  lis 4, 76
  04bc4a0  li 7, 0
  04bc4a4  addi 6, 4, -15256
  04bc4a8  lwz 5, 36(31)
  04bc4ac  lis 4, 51
  04bc4b0  std 30, 232(1)
  04bc4b4  lfs 1, 18892(3)
  04bc4b8  lwz 30, 120(31)
  04bc4bc  ori 3, 31, 0
  04bc4c0  lfs 2, 36(5)
  04bc4c4  li 5, 0
  04bc4c8  fmuls 1, 1, 2
  04bc4cc  stfs 1, 44(31)
  04bc4d0  lfs 31, 0(6)
  04bc4d4  stw 7, 116(1)
  04bc4d8  std 29, 224(1)
  04bc4dc  std 28, 216(1)
  04bc4e0  stw 7, 456(30)
  04bc4e4  bl 0x10675c
  04bc4e8  nop
  04bc4ec  ori 29, 3, 0
  04bc4f0  addic 5, 30, 32
  04bc4f4  ori 4, 29, 0
  04bc4f8  li 6, 0
  04bc4fc  addic 7, 1, 112
  04bc500  li 9, 0
  04bc504  addic 8, 1, 116
  04bc508  ori 3, 31, 0
  04bc50c  li 10, 4
  04bc510  bl 0x106840
  04bc514  nop
  04bc518  lwz 4, 112(1)
  04bc51c  ori 28, 3, 0
  04bc520  cmpwi 4, 1
  04bc524  bt 2, 0x4bcb54
  04bc528  lbz 3, 32(31)
  04bc52c  cmpwi 3, 10
  04bc530  bt 2, 0x4bcb54
  04bc534  lfs 1, 32(30)
  04bc538  li 3, 256
  04bc53c  lfs 2, 116(1)
  04bc540  li 5, 9
  04bc544  lhz 4, 42(29)
  04bc548  fsubs 1, 1, 2
  04bc54c  subc 3, 3, 4
  04bc550  subc 4, 5, 28
  04bc554  cntlzw 3, 3
  04bc558  sldi 3, 3, 58
  04bc55c  sradi 3, 3, 63
  04bc560  and 3, 3, 4
  04bc564  fcmpu 0, 1, 31
  04bc568  addc 28, 28, 3
  04bc56c  stfs 1, 32(30)
  04bc570  bt 1, 0x4bc578
  04bc574  li 28, 1
  04bc578  lis 3, 76
  04bc57c  addi 3, 3, -15256
  04bc580  lfs 1, 4(3)
  04bc584  bl 0x502758
  04bc588  nop
  04bc58c  lis 4, 16416
  04bc590  lis 5, 143
  04bc594  lis 6, 114
  04bc598  cmpwi 28, 2
  04bc59c  stw 4, 152(30)
  04bc5a0  lis 4, 14851
  04bc5a4  lfs 1, 18848(5)
  04bc5a8  lfs 2, -3048(6)
  04bc5ac  ori 4, 4, 4719
  04bc5b0  stw 3, 144(30)
  04bc5b4  fmuls 1, 1, 2
  04bc5b8  li 3, 0
  04bc5bc  li 5, 9
  04bc5c0  stw 4, 132(30)
  04bc5c4  stb 3, 173(30)
  04bc5c8  stw 5, 148(30)
  04bc5cc  stfs 1, 128(30)
  04bc5d0  bt 1, 0x4bc5e8
  04bc5d4  cmpwi 28, -1
  04bc5d8  cmpwi 1, 28, 0
  04bc5dc  bf 1, 0x4bcb44
  04bc5e0  bf 5, 0x4bcb44
  04bc5e4  b 0x4bc89c
  04bc5e8  cmpwi 28, 10
  04bc5ec  cmpwi 1, 28, 8
  04bc5f0  bt 1, 0x4bcb44
  04bc5f4  bf 5, 0x4bc60c
  04bc5f8  li 3, 1
  04bc5fc  li 4, 250
  04bc600  stw 3, 456(30)
  04bc604  stb 4, 103(30)
  04bc608  b 0x4bcb44
  04bc60c  lis 3, 143
  04bc610  lis 4, 114
  04bc614  lis 6, 143
  04bc618  addic 28, 30, 112
  04bc61c  lfs 1, 18856(3)
  04bc620  lfs 2, -3052(4)
  04bc624  li 3, 1
  04bc628  fmuls 1, 1, 2
  04bc62c  lis 4, 76
  04bc630  ori 5, 28, 0
  04bc634  stw 3, 456(30)
  04bc638  addi 3, 4, -15256
  04bc63c  stfs 1, 136(30)
  04bc640  lfs 1, 18852(6)
  04bc644  fmuls 1, 1, 2
  04bc648  stfs 1, 140(30)
  04bc64c  lfs 1, 8(3)
  04bc650  lfs 2, 12(3)
  04bc654  bl 0x1158b0
  04bc658  nop
  04bc65c  lis 3, 16448
  04bc660  lwz 4, 32(29)
  04bc664  lis 5, 16576
  04bc668  stw 3, 192(30)
  04bc66c  stw 5, 196(30)
  04bc670  lfs 1, 16(31)
  04bc674  lfs 2, 16(4)
  04bc678  lfs 3, 20(31)
  04bc67c  lfs 4, 20(4)
  04bc680  fsubs 1, 1, 2
  04bc684  fsubs 2, 3, 4
  04bc688  lis 3, 115
  04bc68c  addic 3, 3, 22784
  04bc690  fabs 3, 1
  04bc694  fabs 4, 2
  04bc698  stfs 1, 140(1)
  04bc69c  stfs 2, 144(1)
  04bc6a0  fsubs 1, 3, 4
  04bc6a4  stfs 1, 148(1)
  04bc6a8  lwz 4, 140(1)
  04bc6ac  lfs 1, 140(1)
  04bc6b0  lwz 5, 144(1)
  04bc6b4  lfs 2, 144(1)
  04bc6b8  fabs 1, 1
  04bc6bc  lwz 6, 148(1)
  04bc6c0  rlwinm 5, 5, 3, 29, 29
  04bc6c4  lfs 5, 148(1)
  04bc6c8  fabs 2, 2
  04bc6cc  rlwimi 5, 6, 2, 30, 30
  04bc6d0  fsub 6, 5, 31
  04bc6d4  fsub 5, 5, 31
  04bc6d8  rlwimi 5, 4, 4, 28, 28
  04bc6dc  ori 4, 3, 0
  04bc6e0  rlwimi 4, 5, 2, 26, 28
  04bc6e4  slwi 5, 5, 2
  04bc6e8  clrldi 4, 4, 32
  04bc6ec  fsel 4, 6, 1, 4
  04bc6f0  lfsx 1, 3, 5
  04bc6f4  fsel 3, 5, 2, 3
  04bc6f8  lfs 2, 4(4)
  04bc6fc  fcmpu 0, 4, 31
  04bc700  bt 1, 0x4bc708
  04bc704  b 0x4bc828
  04bc708  fsubs 5, 3, 4
  04bc70c  fadds 3, 3, 4
  04bc710  addic 3, 1, 16
  04bc714  li 7, 2
  04bc718  addic 5, 3, 184
  04bc71c  addic 4, 3, 168
  04bc720  mtctr 7
  04bc724  fdivs 3, 5, 3
  04bc728  fmuls 4, 3, 3
  04bc72c  stfs 3, 196(1)
  04bc730  stfs 3, 188(1)
  04bc734  stfs 3, 192(1)
  04bc738  stfs 3, 184(1)
  04bc73c  lfs 6, 196(1)
  04bc740  lfs 7, 188(1)
  04bc744  lfs 8, 192(1)
  04bc748  fmuls 5, 4, 4
  04bc74c  fmuls 7, 7, 4
  04bc750  fmuls 6, 6, 5
  04bc754  fmuls 3, 5, 5
  04bc758  fmuls 5, 8, 5
  04bc75c  stfs 7, 188(1)
  04bc760  fmuls 4, 6, 4
  04bc764  stfs 5, 192(1)
  04bc768  stfs 4, 196(1)
  04bc76c  lfs 4, 168(3)
  04bc770  fmuls 4, 4, 3
  04bc774  stfs 4, 184(3)
  04bc778  lfs 4, 4(4)
  04bc77c  addic 4, 4, 8
  04bc780  fmuls 4, 4, 3
  04bc784  addic 3, 3, 8
  04bc788  stfs 4, 4(5)
  04bc78c  addic 5, 5, 8
  04bc790  bdnz 0x4bc76c
  04bc794  li 5, 4
  04bc798  ori 3, 1, 0
  04bc79c  mtctr 5
  04bc7a0  lis 4, 115
  04bc7a4  addic 5, 3, 184
  04bc7a8  addic 4, 4, 22752
  04bc7ac  ori 6, 5, 0
  04bc7b0  lfs 3, 184(3)
  04bc7b4  lfs 4, 0(4)
  04bc7b8  fmuls 3, 3, 4
  04bc7bc  lfs 4, 4(4)
  04bc7c0  addic 4, 4, 8
  04bc7c4  stfs 3, 184(3)
  04bc7c8  lfs 3, 4(5)
  04bc7cc  addic 3, 3, 8
  04bc7d0  fmuls 3, 3, 4
  04bc7d4  stfs 3, 4(5)
  04bc7d8  addic 5, 5, 8
  04bc7dc  bdnz 0x4bc7b0
  04bc7e0  ori 3, 1, 0
  04bc7e4  mtctr 7
  04bc7e8  lfs 3, 184(3)
  04bc7ec  lfs 4, 4(6)
  04bc7f0  fadds 3, 31, 3
  04bc7f4  lfs 5, 8(6)
  04bc7f8  addic 3, 3, 16
  04bc7fc  lfs 31, 12(6)
  04bc800  addic 6, 6, 16
  04bc804  fadds 3, 3, 4
  04bc808  fadds 3, 3, 5
  04bc80c  fadds 31, 3, 31
  04bc810  bdnz 0x4bc7e8
  04bc814  lis 3, 76
  04bc818  addi 3, 3, -15256
  04bc81c  lfs 3, 16(3)
  04bc820  fadds 31, 31, 3
  04bc824  fmadds 31, 31, 1, 2
  04bc828  stfs 31, 120(1)
  04bc82c  lfs 1, 16(29)
  04bc830  addic 5, 1, 120
  04bc834  lfs 2, 24(29)
  04bc838  addic 6, 30, 136
  04bc83c  stfs 1, 48(1)
  04bc840  addic 7, 30, 140
  04bc844  stfs 2, 56(1)
  04bc848  lfs 1, 20(29)
  04bc84c  lfs 2, 28(29)
  04bc850  stfs 1, 52(1)
  04bc854  stfs 2, 60(1)
  04bc858  ld 3, 48(1)
  04bc85c  ld 4, 56(1)
  04bc860  bl 0x107de8
  04bc864  nop
  04bc868  ori 3, 31, 0
  04bc86c  lfs 1, 120(1)
  04bc870  ori 4, 28, 0
  04bc874  li 6, 13
  04bc878  li 7, 1
  04bc87c  li 8, 0
  04bc880  bl 0x10ad80
  04bc884  nop
  04bc888  li 3, 9
  04bc88c  li 4, 120
  04bc890  stb 3, 32(31)
  04bc894  stb 4, 103(30)
  04bc898  b 0x4bcb44
  04bc89c  lis 3, 143
  04bc8a0  lis 4, 114
  04bc8a4  lis 5, 143
  04bc8a8  lis 6, 114
  04bc8ac  lis 7, 143
  04bc8b0  lfs 1, 18848(3)
  04bc8b4  lfs 2, -3048(4)
  04bc8b8  li 3, 0
  04bc8bc  lhz 4, 52(31)
  04bc8c0  fmuls 1, 1, 2
  04bc8c4  rlwimi 4, 3, 0, 19, 19
  04bc8c8  lis 3, 16736
  04bc8cc  sth 4, 52(31)
  04bc8d0  lis 4, 16864
  04bc8d4  stfs 1, 128(30)
  04bc8d8  lfs 1, 18864(5)
  04bc8dc  lfs 2, -3052(6)
  04bc8e0  fmuls 1, 1, 2
  04bc8e4  stfs 1, 136(30)
  04bc8e8  lfs 1, 18860(7)
  04bc8ec  stw 3, 192(30)
  04bc8f0  fmuls 1, 1, 2
  04bc8f4  stw 4, 196(30)
  04bc8f8  stfs 1, 140(30)
  04bc8fc  lwz 3, 32(29)
  04bc900  lfs 1, 16(31)
  04bc904  lfs 2, 20(31)
  04bc908  lfs 3, 16(3)
  04bc90c  lfs 4, 20(3)
  04bc910  fsubs 1, 1, 3
  04bc914  fsubs 2, 2, 4
  04bc918  lis 3, 115
  04bc91c  addic 3, 3, 22784
  04bc920  fabs 3, 1
  04bc924  fabs 4, 2
  04bc928  stfs 1, 128(1)
  04bc92c  stfs 2, 132(1)
  04bc930  fsubs 1, 3, 4
  04bc934  stfs 1, 136(1)
  04bc938  lwz 4, 128(1)
  04bc93c  lfs 1, 128(1)
  04bc940  lwz 5, 132(1)
  04bc944  lfs 2, 132(1)
  04bc948  fabs 1, 1
  04bc94c  lwz 6, 136(1)
  04bc950  rlwinm 5, 5, 3, 29, 29
  04bc954  lfs 5, 136(1)
  04bc958  fabs 2, 2
  04bc95c  rlwimi 5, 6, 2, 30, 30
  04bc960  fsub 6, 5, 31
  04bc964  fsub 5, 5, 31
  04bc968  rlwimi 5, 4, 4, 28, 28
  04bc96c  ori 4, 3, 0
  04bc970  rlwimi 4, 5, 2, 26, 28
  04bc974  slwi 5, 5, 2
  04bc978  clrldi 4, 4, 32
  04bc97c  fsel 4, 6, 1, 4
  04bc980  lfsx 1, 3, 5
  04bc984  fsel 3, 5, 2, 3
  04bc988  lfs 2, 4(4)
  04bc98c  fcmpu 0, 4, 31
  04bc990  bt 1, 0x4bc998
  04bc994  b 0x4bcab8
  04bc998  fsubs 5, 3, 4
  04bc99c  fadds 3, 3, 4
  04bc9a0  addic 3, 1, 16
  04bc9a4  li 6, 2
  04bc9a8  addic 5, 3, 152
  04bc9ac  addic 4, 3, 136
  04bc9b0  mtctr 6
  04bc9b4  fdivs 3, 5, 3
  04bc9b8  fmuls 4, 3, 3
  04bc9bc  stfs 3, 164(1)
  04bc9c0  stfs 3, 156(1)
  04bc9c4  stfs 3, 160(1)
  04bc9c8  stfs 3, 152(1)
  04bc9cc  lfs 6, 164(1)
  04bc9d0  lfs 7, 156(1)
  04bc9d4  lfs 8, 160(1)
  04bc9d8  fmuls 5, 4, 4
  04bc9dc  fmuls 7, 7, 4
  04bc9e0  fmuls 6, 6, 5
  04bc9e4  fmuls 3, 5, 5
  04bc9e8  fmuls 5, 8, 5
  04bc9ec  stfs 7, 156(1)
  04bc9f0  fmuls 4, 6, 4
  04bc9f4  stfs 5, 160(1)
  04bc9f8  stfs 4, 164(1)
  04bc9fc  lfs 4, 136(3)
  04bca00  fmuls 4, 4, 3
  04bca04  stfs 4, 152(3)
  04bca08  lfs 4, 4(4)
  04bca0c  addic 4, 4, 8
  04bca10  fmuls 4, 4, 3
  04bca14  addic 3, 3, 8
  04bca18  stfs 4, 4(5)
  04bca1c  addic 5, 5, 8
  04bca20  bdnz 0x4bc9fc
  04bca24  li 5, 4
  04bca28  ori 3, 1, 0
  04bca2c  mtctr 5
  04bca30  lis 4, 115
  04bca34  addic 5, 3, 152
  04bca38  addic 4, 4, 22752
  04bca3c  ori 7, 5, 0
  04bca40  lfs 3, 152(3)
  04bca44  lfs 4, 0(4)
  04bca48  fmuls 3, 3, 4
  04bca4c  lfs 4, 4(4)
  04bca50  addic 4, 4, 8
  04bca54  stfs 3, 152(3)
  04bca58  lfs 3, 4(5)
  04bca5c  addic 3, 3, 8
  04bca60  fmuls 3, 3, 4
  04bca64  stfs 3, 4(5)
  04bca68  addic 5, 5, 8
  04bca6c  bdnz 0x4bca40
  04bca70  ori 3, 1, 0
  04bca74  mtctr 6
  04bca78  lfs 3, 152(3)
  04bca7c  lfs 4, 4(7)
  04bca80  fadds 3, 31, 3
  04bca84  lfs 5, 8(7)
  04bca88  addic 3, 3, 16
  04bca8c  lfs 31, 12(7)
  04bca90  addic 7, 7, 16
  04bca94  fadds 3, 3, 4
  04bca98  fadds 3, 3, 5
  04bca9c  fadds 31, 3, 31
  04bcaa0  bdnz 0x4bca78
  04bcaa4  lis 3, 76
  04bcaa8  addi 3, 3, -15256
  04bcaac  lfs 3, 16(3)
  04bcab0  fadds 31, 31, 3
  04bcab4  fmadds 31, 31, 1, 2
  04bcab8  stfs 31, 124(1)
  04bcabc  lfs 1, 16(29)
  04bcac0  addic 5, 1, 124
  04bcac4  lfs 2, 24(29)
  04bcac8  addic 6, 30, 136
  04bcacc  stfs 1, 48(1)
  04bcad0  addic 7, 30, 140
  04bcad4  stfs 2, 56(1)
  04bcad8  lfs 1, 20(29)
  04bcadc  lfs 2, 28(29)
  04bcae0  stfs 1, 52(1)
  04bcae4  stfs 2, 60(1)
  04bcae8  ld 3, 48(1)
  04bcaec  ld 4, 56(1)
  04bcaf0  bl 0x107de8
  04bcaf4  nop
  04bcaf8  addic 4, 30, 112
  04bcafc  lfs 1, 124(1)
  04bcb00  ori 3, 31, 0
  04bcb04  li 6, 17
  04bcb08  li 7, 1
  04bcb0c  li 8, 0
  04bcb10  bl 0x10ad80
  04bcb14  nop
  04bcb18  li 5, 10
  04bcb1c  li 6, 240
  04bcb20  ori 3, 31, 0
  04bcb24  li 4, 2
  04bcb28  stb 5, 32(31)
  04bcb2c  stb 6, 103(30)
  04bcb30  li 5, 3
  04bcb34  li 6, 0
  04bcb38  li 7, -1
  04bcb3c  bl 0xfcd60
  04bcb40  nop
  04bcb44  addic 4, 30, 96
  04bcb48  ori 3, 31, 0
  04bcb4c  bl 0x10c808
  04bcb50  nop
  04bcb54  li 5, 255
  04bcb58  ori 3, 31, 0
  04bcb5c  addic 4, 30, 96
  04bcb60  stb 5, 164(31)
  04bcb64  bl 0x10c9a0
  04bcb68  nop
  04bcb6c  lwz 3, 36(31)
  04bcb70  lis 4, 143
  04bcb74  li 5, 0
  04bcb78  lfs 1, 36(3)
  04bcb7c  lfs 2, 18896(4)
  04bcb80  stw 5, 356(30)
  04bcb84  fmuls 1, 1, 2
  04bcb88  lbz 3, 32(31)
  04bcb8c  cmpwi 3, 1
  04bcb90  stfs 1, 44(31)
  04bcb94  bt 2, 0x4bcba4
  04bcb98  lwz 4, 464(30)
  04bcb9c  cmpwi 4, -1
  04bcba0  bf 2, 0x4bcbd4
  04bcba4  cmpwi 3, 1
  04bcba8  bf 2, 0x4bcbb4
  04bcbac  lfs 1, 372(30)
  04bcbb0  b 0x4bcbb8
  04bcbb4  lfs 1, 376(30)
  04bcbb8  fmr 2, 1
  04bcbbc  addic 5, 30, 288
  04bcbc0  ori 3, 31, 0
  04bcbc4  stfs 2, 440(30)
  04bcbc8  bl 0x1118d8
  04bcbcc  nop
  04bcbd0  b 0x4bcc18
  04bcbd4  lis 3, 165
  04bcbd8  lfs 1, 376(30)
  04bcbdc  slwi 4, 4, 2
  04bcbe0  addic 3, 3, 7136
  04bcbe4  extsw 4, 4
  04bcbe8  stfs 1, 440(30)
  04bcbec  addic 5, 30, 288
  04bcbf0  li 7, 0
  04bcbf4  lwzx 6, 3, 4
  04bcbf8  ori 3, 31, 0
  04bcbfc  addic 8, 6, 16
  04bcc00  ori 4, 5, 0
  04bcc04  lwz 9, 0(6)
  04bcc08  li 6, 0
  04bcc0c  extsw 9, 9
  04bcc10  bl 0x111ba0
  04bcc14  nop
  04bcc18  lfs 1, 20(31)
  04bcc1c  lfs 2, 292(30)
  04bcc20  lfs 3, 16(31)
  04bcc24  fsubs 1, 1, 2
  04bcc28  lfs 2, 288(30)
  04bcc2c  fsubs 2, 3, 2
  04bcc30  lfs 3, 24(31)
  04bcc34  lfs 4, 296(30)
  04bcc38  fsubs 3, 3, 4
  04bcc3c  fmuls 1, 1, 1
  04bcc40  fmadds 1, 2, 2, 1
  04bcc44  lfs 2, 440(30)
  04bcc48  fmadds 1, 3, 3, 1
  04bcc4c  fsqrts 1, 1
  04bcc50  fcmpu 0, 1, 2
  04bcc54  cror 6, 0, 2
  04bcc58  bt 6, 0x4bcc64
  04bcc5c  li 3, 2
  04bcc60  stw 3, 356(30)
  04bcc64  lwz 3, 352(30)
  04bcc68  cmpwi 3, 0
  04bcc6c  bf 2, 0x4bcc80
  04bcc70  lis 3, 151
  04bcc74  addic 3, 3, -25376
  04bcc78  lwz 3, 8320(3)
  04bcc7c  stw 3, 352(30)
  04bcc80  ld 0, 272(1)
  04bcc84  mtlr 0
  04bcc88  lfd 31, 248(1)
  04bcc8c  ld 28, 216(1)
  04bcc90  ld 29, 224(1)
  04bcc94  ld 30, 232(1)
  04bcc98  ld 31, 240(1)
  04bcc9c  addi 1, 1, 256
  04bcca0  blr

UpdateMoby_931:   # 0x4bcd20, 0x1ba0 bytes
  04bcd20  stdu 1, -480(1)
  04bcd24  mflr 0
  04bcd28  std 0, 496(1)
  04bcd2c  stfd 30, 464(1)
  04bcd30  stfd 31, 472(1)
  04bcd34  std 31, 456(1)
  04bcd38  std 30, 448(1)
  04bcd3c  ori 31, 3, 0
  04bcd40  std 29, 440(1)
  04bcd44  std 28, 432(1)
  04bcd48  std 27, 424(1)
  04bcd4c  std 26, 416(1)
  04bcd50  lwz 30, 120(31)
  04bcd54  bl 0x4bc480
  04bcd58  lbz 3, 32(31)
  04bcd5c  lwz 29, 352(30)
  04bcd60  cmpwi 3, 4
  04bcd64  bt 1, 0x4bcd98
  04bcd68  cmpwi 3, 1
  04bcd6c  bt 1, 0x4bcd84
  04bcd70  cmpwi 3, -1
  04bcd74  bf 1, 0x4be890
  04bcd78  cmpwi 3, 0
  04bcd7c  bf 1, 0x4bcdcc
  04bcd80  b 0x4bcecc
  04bcd84  cmpwi 3, 2
  04bcd88  bf 1, 0x4bd0c4
  04bcd8c  cmpwi 3, 3
  04bcd90  bf 1, 0x4bd390
  04bcd94  b 0x4bd4a0
  04bcd98  cmpwi 3, 10
  04bcd9c  bt 2, 0x4be830
  04bcda0  cmpwi 3, 9
  04bcda4  bt 2, 0x4be604
  04bcda8  cmpwi 3, 8
  04bcdac  bt 2, 0x4be218
  04bcdb0  cmpwi 3, 7
  04bcdb4  bt 2, 0x4bdf2c
  04bcdb8  cmpwi 3, 6
  04bcdbc  bt 2, 0x4bdc00
  04bcdc0  cmpwi 3, 5
  04bcdc4  bt 2, 0x4bd684
  04bcdc8  b 0x4be890
  04bcdcc  lis 3, 16704
  04bcdd0  lhz 7, 62(30)
  04bcdd4  li 5, 12
  04bcdd8  li 6, 3
  04bcddc  lis 4, 17076
  04bcde0  stw 3, 32(30)
  04bcde4  ori 3, 7, 2
  04bcde8  sth 5, 36(30)
  04bcdec  stb 6, 40(30)
  04bcdf0  stw 4, 372(30)
  04bcdf4  sth 3, 62(30)
  04bcdf8  bl 0x5c8318
  04bcdfc  nop
  04bce00  clrlwi 4, 3, 31
  04bce04  lhz 3, 52(31)
  04bce08  cmpwi 4, 0
  04bce0c  bt 2, 0x4bce20
  04bce10  lis 4, 0
  04bce14  ori 4, 4, 32768
  04bce18  or 3, 3, 4
  04bce1c  sth 3, 52(31)
  04bce20  lwz 4, 460(30)
  04bce24  cmpwi 4, -1
  04bce28  bt 2, 0x4bce3c
  04bce2c  li 4, 0
  04bce30  ori 3, 3, 65
  04bce34  stw 4, 148(31)
  04bce38  sth 3, 52(31)
  04bce3c  lwz 3, 384(30)
  04bce40  cmpwi 3, -1
  04bce44  bt 2, 0x4bce54
  04bce48  lwz 3, 388(30)
  04bce4c  cmpwi 3, -1
  04bce50  bf 2, 0x4bce5c
  04bce54  li 3, 1
  04bce58  stw 3, 468(30)
  04bce5c  lwz 30, 368(30)
  04bce60  cmpwi 30, -1
  04bce64  bt 2, 0x4bce9c
  04bce68  lis 3, 165
  04bce6c  slwi 4, 30, 2
  04bce70  addic 3, 3, 7136
  04bce74  extsw 4, 4
  04bce78  lwzx 3, 3, 4
  04bce7c  lfs 1, 16(3)
  04bce80  stfs 1, 16(31)
  04bce84  lfs 1, 20(3)
  04bce88  stfs 1, 20(31)
  04bce8c  lfs 1, 24(3)
  04bce90  stfs 1, 24(31)
  04bce94  lfs 1, 28(3)
  04bce98  stfs 1, 28(31)
  04bce9c  li 3, 1
  04bcea0  lbz 4, 83(31)
  04bcea4  cmpwi 4, 0
  04bcea8  stb 3, 32(31)
  04bceac  bt 2, 0x4be890
  04bceb0  ori 3, 31, 0
  04bceb4  li 4, 0
  04bceb8  li 5, 0
  04bcebc  li 6, 5
  04bcec0  bl 0xfddc0
  04bcec4  nop
  04bcec8  b 0x4be890
  04bcecc  lwz 3, 460(30)
  04bced0  cmpwi 3, -1
  04bced4  bt 2, 0x4bcf0c
  04bced8  extsw 3, 3
  04bcedc  li 4, 10
  04bcee0  bl 0x104214
  04bcee4  nop
  04bcee8  cmpwi 3, 0
  04bceec  bf 2, 0x4be890
  04bcef0  lwz 4, 36(31)
  04bcef4  li 3, -66
  04bcef8  lhz 5, 52(31)
  04bcefc  and 3, 5, 3
  04bcf00  lwz 4, 16(4)
  04bcf04  stw 4, 148(31)
  04bcf08  sth 3, 52(31)
  04bcf0c  lwz 3, 356(30)
  04bcf10  cmpwi 3, 2
  04bcf14  bt 2, 0x4be890
  04bcf18  lwz 3, 368(30)
  04bcf1c  cmpwi 3, -1
  04bcf20  bt 2, 0x4be890
  04bcf24  li 3, 2
  04bcf28  lbz 4, 83(31)
  04bcf2c  cmpwi 4, 4
  04bcf30  stb 3, 32(31)
  04bcf34  bt 2, 0x4bcf74
  04bcf38  lis 3, 76
  04bcf3c  lis 4, 114
  04bcf40  addi 3, 3, -13148
  04bcf44  li 5, 0
  04bcf48  lfs 1, 0(3)
  04bcf4c  lfs 2, -3056(4)
  04bcf50  ori 3, 31, 0
  04bcf54  li 4, 4
  04bcf58  fmuls 1, 2, 1
  04bcf5c  fctiwz 1, 1
  04bcf60  stfd 1, 392(1)
  04bcf64  lwz 6, 396(1)
  04bcf68  extsw 6, 6
  04bcf6c  bl 0xfddc0
  04bcf70  nop
  04bcf74  lis 3, 165
  04bcf78  addic 29, 3, 7136
  04bcf7c  lwz 3, 368(30)
  04bcf80  slwi 3, 3, 2
  04bcf84  extsw 4, 3
  04bcf88  li 3, 0
  04bcf8c  lwzx 29, 29, 4
  04bcf90  lwz 5, 0(29)
  04bcf94  addic 4, 5, -2
  04bcf98  cmpwi 4, 0
  04bcf9c  bf 1, 0x4bcff4
  04bcfa0  ori 4, 29, 0
  04bcfa4  lfs 1, 20(4)
  04bcfa8  lfs 2, 36(4)
  04bcfac  lfs 3, 16(4)
  04bcfb0  fsubs 1, 1, 2
  04bcfb4  lfs 2, 32(4)
  04bcfb8  fsubs 2, 3, 2
  04bcfbc  lfs 3, 24(4)
  04bcfc0  lfs 4, 40(4)
  04bcfc4  fsubs 3, 3, 4
  04bcfc8  fmuls 1, 1, 1
  04bcfcc  addic 3, 3, 1
  04bcfd0  fmadds 1, 2, 2, 1
  04bcfd4  fmadds 1, 3, 3, 1
  04bcfd8  fsqrts 1, 1
  04bcfdc  stfs 1, 28(4)
  04bcfe0  lwz 5, 0(29)
  04bcfe4  addic 4, 4, 16
  04bcfe8  addic 6, 5, -2
  04bcfec  cmpw 3, 6
  04bcff0  bt 0, 0x4bcfa4
  04bcff4  lfs 1, 16(29)
  04bcff8  slwi 3, 5, 4
  04bcffc  stfs 1, 16(31)
  04bd000  addc 3, 29, 3
  04bd004  lfs 2, 20(29)
  04bd008  clrldi 5, 3, 32
  04bd00c  stfs 2, 20(31)
  04bd010  lfs 2, 24(29)
  04bd014  stfs 2, 24(31)
  04bd018  lfs 2, 28(29)
  04bd01c  stfs 2, 28(31)
  04bd020  lfs 2, 0(5)
  04bd024  fsubs 1, 2, 1
  04bd028  lis 28, 143
  04bd02c  lis 27, 114
  04bd030  addic 3, 30, 64
  04bd034  ori 4, 3, 0
  04bd038  stfs 1, 64(30)
  04bd03c  lfs 1, 4(5)
  04bd040  lfs 2, 20(31)
  04bd044  fsubs 1, 1, 2
  04bd048  stfs 1, 68(30)
  04bd04c  lfs 1, 8(5)
  04bd050  lfs 2, 24(31)
  04bd054  fsubs 1, 1, 2
  04bd058  stfs 1, 72(30)
  04bd05c  lfs 1, 12(5)
  04bd060  stfs 1, 76(30)
  04bd064  lfs 1, 18868(28)
  04bd068  lfs 2, -3052(27)
  04bd06c  fmuls 1, 1, 2
  04bd070  bl 0x5e84c0
  04bd074  nop
  04bd078  lis 3, 143
  04bd07c  lis 4, 114
  04bd080  lwz 5, 0(29)
  04bd084  lfs 1, 18868(28)
  04bd088  li 7, 0
  04bd08c  slwi 5, 5, 4
  04bd090  lfs 2, 18872(3)
  04bd094  lfs 3, -3048(4)
  04bd098  addic 3, 31, 16
  04bd09c  lfs 4, -3052(27)
  04bd0a0  addc 4, 29, 5
  04bd0a4  fmuls 2, 2, 3
  04bd0a8  fmuls 1, 1, 4
  04bd0ac  clrldi 4, 4, 32
  04bd0b0  fneg 2, 2
  04bd0b4  bl 0x108180
  04bd0b8  nop
  04bd0bc  stfs 1, 72(30)
  04bd0c0  b 0x4be890
  04bd0c4  lis 3, 76
  04bd0c8  lis 4, 165
  04bd0cc  addi 27, 3, -13148
  04bd0d0  lis 3, 114
  04bd0d4  addic 29, 4, 7136
  04bd0d8  lwz 4, 368(30)
  04bd0dc  addic 28, 31, 16
  04bd0e0  lfs 4, 4(27)
  04bd0e4  slwi 4, 4, 2
  04bd0e8  lfs 31, -3052(3)
  04bd0ec  lfs 1, 8(27)
  04bd0f0  addic 5, 1, 144
  04bd0f4  extsw 3, 4
  04bd0f8  lfs 2, 12(27)
  04bd0fc  addic 6, 1, 388
  04bd100  fmuls 31, 31, 4
  04bd104  addic 7, 1, 384
  04bd108  ori 4, 28, 0
  04bd10c  li 9, 0
  04bd110  lwzx 29, 29, 3
  04bd114  lfs 3, 16(27)
  04bd118  ori 3, 29, 0
  04bd11c  bl 0x10d7a0
  04bd120  nop
  04bd124  lwz 3, 388(1)
  04bd128  extsw 3, 3
  04bd12c  bl 0x502730
  04bd130  nop
  04bd134  lfs 2, 28(29)
  04bd138  lfs 3, 384(1)
  04bd13c  lfs 4, 20(27)
  04bd140  fmadds 1, 1, 2, 3
  04bd144  fmr 3, 4
  04bd148  fadds 30, 1, 3
  04bd14c  fdivs 1, 30, 2
  04bd150  bl 0x502758
  04bd154  nop
  04bd158  stw 3, 388(1)
  04bd15c  bl 0x502730
  04bd160  nop
  04bd164  lfs 2, 28(29)
  04bd168  lwz 3, 388(1)
  04bd16c  fnmsubs 1, 1, 2, 30
  04bd170  fdivs 1, 1, 2
  04bd174  stfs 1, 384(1)
  04bd178  lwz 4, 0(29)
  04bd17c  addic 4, 4, -1
  04bd180  cmpw 3, 4
  04bd184  bt 0, 0x4bd20c
  04bd188  lis 3, 76
  04bd18c  li 4, 0
  04bd190  addi 5, 3, -13148
  04bd194  ori 3, 28, 0
  04bd198  lfs 1, 24(5)
  04bd19c  bl 0xffb70
  04bd1a0  nop
  04bd1a4  lfs 2, 24(31)
  04bd1a8  lbz 28, 83(31)
  04bd1ac  fcmpu 0, 1, 2
  04bd1b0  cror 6, 0, 2
  04bd1b4  bt 6, 0x4bd1bc
  04bd1b8  stfs 1, 24(31)
  04bd1bc  li 3, 4
  04bd1c0  cmpwi 28, 0
  04bd1c4  stb 3, 32(31)
  04bd1c8  bt 2, 0x4be890
  04bd1cc  lis 3, 76
  04bd1d0  lis 4, 114
  04bd1d4  addi 3, 3, -13148
  04bd1d8  li 5, 0
  04bd1dc  lfs 1, 0(3)
  04bd1e0  lfs 2, -3056(4)
  04bd1e4  ori 3, 31, 0
  04bd1e8  fmuls 1, 2, 1
  04bd1ec  li 4, 0
  04bd1f0  fctiwz 1, 1
  04bd1f4  stfd 1, 392(1)
  04bd1f8  lwz 6, 396(1)
  04bd1fc  extsw 6, 6
  04bd200  bl 0xfddc0
  04bd204  nop
  04bd208  b 0x4be890
  04bd20c  slwi 4, 3, 4
  04bd210  addc 4, 29, 4
  04bd214  clrldi 4, 4, 32
  04bd218  addic 3, 3, 1
  04bd21c  lfs 2, 32(4)
  04bd220  lfs 3, 16(4)
  04bd224  fsubs 2, 2, 3
  04bd228  stfs 2, 144(1)
  04bd22c  lfs 3, 36(4)
  04bd230  fmuls 2, 2, 1
  04bd234  lfs 4, 20(4)
  04bd238  fsubs 3, 3, 4
  04bd23c  stfs 3, 148(1)
  04bd240  lfs 4, 40(4)
  04bd244  lfs 5, 24(4)
  04bd248  fmuls 3, 3, 1
  04bd24c  fsubs 4, 4, 5
  04bd250  fmuls 5, 4, 1
  04bd254  stfs 4, 152(1)
  04bd258  lfs 4, 44(4)
  04bd25c  stfs 2, 144(1)
  04bd260  stfs 4, 156(1)
  04bd264  stfs 3, 148(1)
  04bd268  stfs 5, 152(1)
  04bd26c  lfs 1, 16(4)
  04bd270  fadds 1, 2, 1
  04bd274  stfs 1, 144(1)
  04bd278  lfs 2, 20(4)
  04bd27c  fadds 2, 3, 2
  04bd280  stfs 2, 148(1)
  04bd284  lfs 3, 24(4)
  04bd288  fadds 3, 5, 3
  04bd28c  stfs 3, 152(1)
  04bd290  lwz 4, 0(29)
  04bd294  addic 4, 4, -8
  04bd298  cmpw 3, 4
  04bd29c  bf 0, 0x4bd30c
  04bd2a0  slwi 3, 3, 4
  04bd2a4  lfs 30, 72(31)
  04bd2a8  addc 3, 29, 3
  04bd2ac  lfs 1, 16(31)
  04bd2b0  clrldi 3, 3, 32
  04bd2b4  lfs 2, 20(31)
  04bd2b8  lfs 3, 16(3)
  04bd2bc  lfs 4, 20(3)
  04bd2c0  fsubs 1, 3, 1
  04bd2c4  fsubs 2, 4, 2
  04bd2c8  bl 0x5e8338
  04bd2cc  nop
  04bd2d0  lis 3, 76
  04bd2d4  fmr 2, 1
  04bd2d8  addic 5, 30, 444
  04bd2dc  addi 3, 3, -13148
  04bd2e0  fmr 1, 30
  04bd2e4  lfs 3, 28(3)
  04bd2e8  lfs 4, 32(3)
  04bd2ec  lfs 5, 36(3)
  04bd2f0  bl 0xff190
  04bd2f4  nop
  04bd2f8  stfs 1, 72(31)
  04bd2fc  lfs 1, 144(1)
  04bd300  lfs 2, 148(1)
  04bd304  lfs 3, 152(1)
  04bd308  lfs 4, 156(1)
  04bd30c  lfs 5, 20(31)
  04bd310  lfs 6, 16(31)
  04bd314  fsubs 2, 2, 5
  04bd318  lfs 5, 24(31)
  04bd31c  fsubs 1, 1, 6
  04bd320  fsubs 3, 3, 5
  04bd324  addic 3, 1, 128
  04bd328  ori 4, 3, 0
  04bd32c  fmuls 5, 2, 2
  04bd330  stfs 1, 128(1)
  04bd334  stfs 2, 132(1)
  04bd338  stfs 3, 136(1)
  04bd33c  fmadds 5, 1, 1, 5
  04bd340  stfs 4, 140(1)
  04bd344  fmadds 5, 3, 3, 5
  04bd348  fsqrts 5, 5
  04bd34c  fsub 1, 31, 5
  04bd350  fsel 1, 1, 5, 31
  04bd354  bl 0x5e7f98
  04bd358  nop
  04bd35c  lfs 1, 16(31)
  04bd360  lfs 2, 128(1)
  04bd364  lfs 3, 20(31)
  04bd368  fadds 1, 1, 2
  04bd36c  lfs 2, 132(1)
  04bd370  lfs 4, 24(31)
  04bd374  fadds 2, 3, 2
  04bd378  lfs 3, 136(1)
  04bd37c  fadds 3, 4, 3
  04bd380  stfs 1, 16(31)
  04bd384  stfs 2, 20(31)
  04bd388  stfs 3, 24(31)
  04bd38c  b 0x4be890
  04bd390  lfs 1, 16(31)
  04bd394  lfs 2, 64(30)
  04bd398  lis 3, 143
  04bd39c  fadds 1, 1, 2
  04bd3a0  lfs 2, 20(31)
  04bd3a4  lfs 3, 24(31)
  04bd3a8  lis 4, 114
  04bd3ac  lis 5, 76
  04bd3b0  addi 5, 5, -13148
  04bd3b4  stfs 1, 16(31)
  04bd3b8  lfs 1, 68(30)
  04bd3bc  fadds 1, 2, 1
  04bd3c0  stfs 1, 20(31)
  04bd3c4  lfs 1, 72(30)
  04bd3c8  fadds 1, 3, 1
  04bd3cc  stfs 1, 24(31)
  04bd3d0  lfs 1, 72(30)
  04bd3d4  lfs 2, 18872(3)
  04bd3d8  lfs 3, -3048(4)
  04bd3dc  fnmsubs 1, 2, 3, 1
  04bd3e0  stfs 1, 72(30)
  04bd3e4  lfs 2, 16(5)
  04bd3e8  fcmpu 0, 1, 2
  04bd3ec  cror 6, 1, 2
  04bd3f0  bt 6, 0x4be890
  04bd3f4  lis 3, 76
  04bd3f8  lfs 1, 16(31)
  04bd3fc  lfs 2, 20(31)
  04bd400  li 4, 0
  04bd404  addi 5, 3, -13148
  04bd408  stfs 1, 160(1)
  04bd40c  lfs 1, 28(31)
  04bd410  addic 3, 1, 160
  04bd414  stfs 2, 164(1)
  04bd418  stfs 1, 172(1)
  04bd41c  lfs 1, 40(5)
  04bd420  lfs 2, 24(31)
  04bd424  fadds 1, 2, 1
  04bd428  stfs 1, 168(1)
  04bd42c  lfs 1, 24(5)
  04bd430  bl 0xffb70
  04bd434  nop
  04bd438  lfs 2, 24(31)
  04bd43c  fcmpu 0, 1, 2
  04bd440  cror 6, 0, 2
  04bd444  bt 6, 0x4be890
  04bd448  li 3, 4
  04bd44c  lbz 4, 83(31)
  04bd450  stfs 1, 24(31)
  04bd454  cmpwi 4, 0
  04bd458  stb 3, 32(31)
  04bd45c  bt 2, 0x4be890
  04bd460  lis 3, 76
  04bd464  lis 4, 114
  04bd468  addi 3, 3, -13148
  04bd46c  li 5, 0
  04bd470  lfs 1, 0(3)
  04bd474  lfs 2, -3056(4)
  04bd478  ori 3, 31, 0
  04bd47c  li 4, 0
  04bd480  fmuls 1, 2, 1
  04bd484  fctiwz 1, 1
  04bd488  stfd 1, 392(1)
  04bd48c  lwz 6, 396(1)
  04bd490  extsw 6, 6
  04bd494  bl 0xfddc0
  04bd498  nop
  04bd49c  b 0x4be890
  04bd4a0  lwz 3, 356(30)
  04bd4a4  cmpwi 3, 2
  04bd4a8  bt 2, 0x4be890
  04bd4ac  lfs 1, 16(29)
  04bd4b0  addic 28, 31, 72
  04bd4b4  lfs 2, 16(31)
  04bd4b8  lfs 3, 20(29)
  04bd4bc  lfs 4, 20(31)
  04bd4c0  fsubs 1, 1, 2
  04bd4c4  fsubs 2, 3, 4
  04bd4c8  bl 0x5e8338
  04bd4cc  nop
  04bd4d0  lis 3, 76
  04bd4d4  lis 4, 114
  04bd4d8  addi 3, 3, -13148
  04bd4dc  lis 6, 114
  04bd4e0  addic 5, 30, 444
  04bd4e4  lfs 2, 44(3)
  04bd4e8  lfs 3, -3048(4)
  04bd4ec  lfs 4, 48(3)
  04bd4f0  fmuls 2, 3, 2
  04bd4f4  lfs 5, -3052(6)
  04bd4f8  ori 3, 28, 0
  04bd4fc  fmuls 4, 5, 4
  04bd500  fmr 3, 2
  04bd504  bl 0x10a2e0
  04bd508  nop
  04bd50c  addic 3, 30, 448
  04bd510  bl 0x4fff60
  04bd514  nop
  04bd518  ori 4, 3, 0
  04bd51c  lbz 3, 83(31)
  04bd520  cmpwi 4, 0
  04bd524  bt 2, 0x4be890
  04bd528  lwz 4, 472(30)
  04bd52c  cmpwi 4, 0
  04bd530  bf 2, 0x4bd620
  04bd534  lfs 1, 20(31)
  04bd538  lfs 2, 20(29)
  04bd53c  lfs 3, 16(31)
  04bd540  fsubs 1, 1, 2
  04bd544  lfs 2, 16(29)
  04bd548  fsubs 2, 3, 2
  04bd54c  lis 4, 143
  04bd550  fmuls 1, 1, 1
  04bd554  fmadds 1, 2, 2, 1
  04bd558  lfs 2, 18884(4)
  04bd55c  fsqrts 1, 1
  04bd560  fcmpu 0, 1, 2
  04bd564  cror 6, 1, 2
  04bd568  bt 6, 0x4bd5bc
  04bd56c  li 4, 7
  04bd570  cmpwi 3, 1
  04bd574  stb 4, 32(31)
  04bd578  bt 2, 0x4be890
  04bd57c  lis 3, 76
  04bd580  lis 4, 114
  04bd584  addi 3, 3, -13148
  04bd588  li 5, 0
  04bd58c  lfs 1, 52(3)
  04bd590  lfs 2, -3056(4)
  04bd594  ori 3, 31, 0
  04bd598  fmuls 1, 2, 1
  04bd59c  li 4, 1
  04bd5a0  fctiwz 1, 1
  04bd5a4  stfd 1, 392(1)
  04bd5a8  lwz 6, 396(1)
  04bd5ac  extsw 6, 6
  04bd5b0  bl 0xfddc0
  04bd5b4  nop
  04bd5b8  b 0x4be890
  04bd5bc  lis 4, 143
  04bd5c0  lfs 2, 18888(4)
  04bd5c4  fcmpu 0, 1, 2
  04bd5c8  cror 6, 1, 2
  04bd5cc  bt 6, 0x4bd620
  04bd5d0  li 4, 8
  04bd5d4  cmpwi 3, 19
  04bd5d8  stb 4, 32(31)
  04bd5dc  bt 2, 0x4be890
  04bd5e0  lis 3, 76
  04bd5e4  lis 4, 114
  04bd5e8  addi 3, 3, -13148
  04bd5ec  li 5, 0
  04bd5f0  lfs 1, 52(3)
  04bd5f4  lfs 2, -3056(4)
  04bd5f8  ori 3, 31, 0
  04bd5fc  li 4, 19
  04bd600  fmuls 1, 2, 1
  04bd604  fctiwz 1, 1
  04bd608  stfd 1, 392(1)
  04bd60c  lwz 6, 396(1)
  04bd610  extsw 6, 6
  04bd614  bl 0xfddc0
  04bd618  nop
  04bd61c  b 0x4be890
  04bd620  li 4, 5
  04bd624  cmpwi 3, 6
  04bd628  stb 4, 32(31)
  04bd62c  bt 2, 0x4bd66c
  04bd630  lis 3, 76
  04bd634  lis 4, 114
  04bd638  addi 3, 3, -13148
  04bd63c  li 5, 0
  04bd640  lfs 1, 0(3)
  04bd644  lfs 2, -3056(4)
  04bd648  ori 3, 31, 0
  04bd64c  li 4, 6
  04bd650  fmuls 1, 2, 1
  04bd654  fctiwz 1, 1
  04bd658  stfd 1, 392(1)
  04bd65c  lwz 6, 396(1)
  04bd660  extsw 6, 6
  04bd664  bl 0xfddc0
  04bd668  nop
  04bd66c  lis 3, 143
  04bd670  li 4, 0
  04bd674  lfs 1, 18900(3)
  04bd678  stw 4, 452(30)
  04bd67c  stfs 1, 88(31)
  04bd680  b 0x4be890
  04bd684  lwz 3, 356(30)
  04bd688  cmpwi 3, 2
  04bd68c  bt 2, 0x4bdbac
  04bd690  lfs 1, 16(29)
  04bd694  lfs 2, 16(31)
  04bd698  addic 28, 31, 72
  04bd69c  lfs 3, 20(29)
  04bd6a0  lfs 4, 20(31)
  04bd6a4  fsubs 1, 1, 2
  04bd6a8  fsubs 2, 3, 4
  04bd6ac  bl 0x5e8338
  04bd6b0  nop
  04bd6b4  lis 3, 76
  04bd6b8  lis 4, 114
  04bd6bc  addi 27, 3, -13148
  04bd6c0  lis 3, 114
  04bd6c4  addic 5, 30, 444
  04bd6c8  lfs 2, 44(27)
  04bd6cc  lfs 3, -3048(3)
  04bd6d0  lfs 4, 48(27)
  04bd6d4  fmuls 2, 3, 2
  04bd6d8  lfs 5, -3052(4)
  04bd6dc  ori 3, 28, 0
  04bd6e0  fmuls 4, 5, 4
  04bd6e4  fmr 3, 2
  04bd6e8  bl 0x10a2e0
  04bd6ec  nop
  04bd6f0  lfs 31, 56(27)
  04bd6f4  ori 3, 31, 0
  04bd6f8  fmr 1, 31
  04bd6fc  bl 0x113e88
  04bd700  nop
  04bd704  cmpwi 3, 0
  04bd708  bt 2, 0x4bd714
  04bd70c  li 3, 0
  04bd710  b 0x4bd744
  04bd714  lis 3, 76
  04bd718  addi 4, 3, -13148
  04bd71c  ori 3, 31, 0
  04bd720  lfs 1, 60(4)
  04bd724  bl 0x113e88
  04bd728  nop
  04bd72c  lfs 2, 16(31)
  04bd730  cmpwi 3, 0
  04bd734  lfs 3, 20(31)
  04bd738  lbz 3, 83(31)
  04bd73c  bt 2, 0x4bd84c
  04bd740  li 3, 1
  04bd744  ori 4, 3, 0
  04bd748  addic 5, 1, 176
  04bd74c  ori 3, 31, 0
  04bd750  bl 0xf1114
  04bd754  nop
  04bd758  lfs 1, 16(29)
  04bd75c  lfs 2, 176(1)
  04bd760  lis 4, 143
  04bd764  fsubs 1, 1, 2
  04bd768  lis 6, 114
  04bd76c  lfs 2, 180(1)
  04bd770  lis 3, 76
  04bd774  lfs 3, 184(1)
  04bd778  addi 5, 3, -13148
  04bd77c  addic 3, 1, 192
  04bd780  stfs 1, 192(1)
  04bd784  lfs 1, 20(29)
  04bd788  fsubs 1, 1, 2
  04bd78c  stfs 1, 196(1)
  04bd790  lfs 1, 24(29)
  04bd794  fsubs 2, 1, 3
  04bd798  lfs 1, 18880(4)
  04bd79c  lfs 3, -3052(6)
  04bd7a0  ori 4, 3, 0
  04bd7a4  fmuls 1, 1, 3
  04bd7a8  stfs 2, 200(1)
  04bd7ac  lfs 3, 28(29)
  04bd7b0  stfs 3, 204(1)
  04bd7b4  lfs 31, 24(5)
  04bd7b8  fadds 2, 2, 31
  04bd7bc  stfs 2, 200(1)
  04bd7c0  bl 0x5e7f98
  04bd7c4  nop
  04bd7c8  lwz 3, 200(1)
  04bd7cc  cmpwi 3, 0
  04bd7d0  bf 1, 0x4bd7dc
  04bd7d4  li 3, 0
  04bd7d8  stw 3, 200(1)
  04bd7dc  lis 3, 143
  04bd7e0  lis 4, 76
  04bd7e4  ori 5, 31, 0
  04bd7e8  lwz 3, 18876(3)
  04bd7ec  extsw 3, 3
  04bd7f0  addi 7, 4, -13148
  04bd7f4  std 3, 392(1)
  04bd7f8  lis 3, 114
  04bd7fc  addic 4, 1, 176
  04bd800  ori 6, 29, 0
  04bd804  lfs 1, -3056(3)
  04bd808  lfd 2, 392(1)
  04bd80c  fcfid 2, 2
  04bd810  addic 3, 1, 192
  04bd814  frsp 2, 2
  04bd818  fadds 2, 2, 31
  04bd81c  fmuls 1, 1, 2
  04bd820  fctiwz 1, 1
  04bd824  stfd 1, 392(1)
  04bd828  lwz 8, 396(1)
  04bd82c  lfs 1, 64(7)
  04bd830  extsw 7, 8
  04bd834  bl 0x470690
  04bd838  nop
  04bd83c  lwz 3, 452(30)
  04bd840  addic 3, 3, 1
  04bd844  stw 3, 452(30)
  04bd848  b 0x4be890
  04bd84c  li 4, 452
  04bd850  addi 5, 4, 16
  04bd854  lvlx 2, 4, 30
  04bd858  lis 4, 76
  04bd85c  lvrx 3, 5, 30
  04bd860  addi 4, 4, -13148
  04bd864  vor 2, 2, 3
  04bd868  li 5, 68
  04bd86c  vcfsx 2, 2, 0
  04bd870  lvlx 3, 5, 4
  04bd874  vspltw 3, 3, 0
  04bd878  vspltw 2, 2, 0
  04bd87c  vcmpgefp. 2, 2, 3
  04bd880  bt 26, 0x4bd910
  04bd884  lbz 4, 112(31)
  04bd888  rlwinm 4, 4, 0, 30, 30
  04bd88c  cmpwi 4, 0
  04bd890  bt 2, 0x4bd910
  04bd894  li 4, 6
  04bd898  cmpwi 3, 8
  04bd89c  stb 4, 32(31)
  04bd8a0  bt 2, 0x4bd8e0
  04bd8a4  lis 3, 76
  04bd8a8  lis 4, 114
  04bd8ac  addi 3, 3, -13148
  04bd8b0  li 5, 0
  04bd8b4  lfs 1, 52(3)
  04bd8b8  lfs 2, -3056(4)
  04bd8bc  ori 3, 31, 0
  04bd8c0  fmuls 1, 2, 1
  04bd8c4  li 4, 8
  04bd8c8  fctiwz 1, 1
  04bd8cc  stfd 1, 392(1)
  04bd8d0  lwz 6, 396(1)
  04bd8d4  extsw 6, 6
  04bd8d8  bl 0xfddc0
  04bd8dc  nop
  04bd8e0  lis 3, 76
  04bd8e4  lfs 1, 392(30)
  04bd8e8  lis 4, 114
  04bd8ec  addi 3, 3, -13148
  04bd8f0  lfs 2, 72(3)
  04bd8f4  lfs 3, -3056(4)
  04bd8f8  fmuls 1, 1, 2
  04bd8fc  fmuls 1, 3, 1
  04bd900  bl 0x502758
  04bd904  nop
  04bd908  stw 3, 448(30)
  04bd90c  b 0x4be890
  04bd910  lwz 4, 472(30)
  04bd914  cmpwi 4, 0
  04bd918  bf 2, 0x4be890
  04bd91c  lfs 1, 20(29)
  04bd920  lfs 4, 16(29)
  04bd924  fsubs 1, 3, 1
  04bd928  fsubs 4, 2, 4
  04bd92c  lis 4, 143
  04bd930  fmuls 1, 1, 1
  04bd934  fmadds 1, 4, 4, 1
  04bd938  lfs 4, 18884(4)
  04bd93c  fsqrts 1, 1
  04bd940  fcmpu 0, 1, 4
  04bd944  cror 6, 1, 2
  04bd948  bt 6, 0x4bd99c
  04bd94c  li 4, 7
  04bd950  cmpwi 3, 1
  04bd954  stb 4, 32(31)
  04bd958  bt 2, 0x4be890
  04bd95c  lis 3, 76
  04bd960  lis 4, 114
  04bd964  addi 3, 3, -13148
  04bd968  li 5, 0
  04bd96c  lfs 1, 52(3)
  04bd970  lfs 2, -3056(4)
  04bd974  ori 3, 31, 0
  04bd978  fmuls 1, 2, 1
  04bd97c  li 4, 1
  04bd980  fctiwz 1, 1
  04bd984  stfd 1, 392(1)
  04bd988  lwz 6, 396(1)
  04bd98c  extsw 6, 6
  04bd990  bl 0xfddc0
  04bd994  nop
  04bd998  b 0x4be890
  04bd99c  lis 4, 143
  04bd9a0  lfs 4, 18888(4)
  04bd9a4  fcmpu 0, 1, 4
  04bd9a8  cror 6, 1, 2
  04bd9ac  bt 6, 0x4bda00
  04bd9b0  li 4, 8
  04bd9b4  cmpwi 3, 19
  04bd9b8  stb 4, 32(31)
  04bd9bc  bt 2, 0x4be890
  04bd9c0  lis 3, 76
  04bd9c4  lis 4, 114
  04bd9c8  addi 3, 3, -13148
  04bd9cc  li 5, 0
  04bd9d0  lfs 1, 52(3)
  04bd9d4  lfs 2, -3056(4)
  04bd9d8  ori 3, 31, 0
  04bd9dc  li 4, 19
  04bd9e0  fmuls 1, 2, 1
  04bd9e4  fctiwz 1, 1
  04bd9e8  stfd 1, 392(1)
  04bd9ec  lwz 6, 396(1)
  04bd9f0  extsw 6, 6
  04bd9f4  bl 0xfddc0
  04bd9f8  nop
  04bd9fc  b 0x4be890
  04bda00  lfs 1, 20(29)
  04bda04  lfs 4, 16(29)
  04bda08  fsubs 1, 3, 1
  04bda0c  fsubs 2, 2, 4
  04bda10  fmuls 1, 1, 1
  04bda14  fmadds 1, 2, 2, 1
  04bda18  fsqrts 1, 1
  04bda1c  fcmpu 0, 1, 31
  04bda20  cror 6, 0, 2
  04bda24  bt 6, 0x4be890
  04bda28  lwz 3, 456(30)
  04bda2c  cmpwi 3, 0
  04bda30  bt 2, 0x4be890
  04bda34  lwz 3, 468(30)
  04bda38  cmpwi 3, 0
  04bda3c  bf 2, 0x4be890
  04bda40  li 3, 3
  04bda44  li 4, 0
  04bda48  stb 3, 32(31)
  04bda4c  lwz 3, 432(30)
  04bda50  stw 4, 448(30)
  04bda54  addic 3, 3, 1
  04bda58  clrlwi 3, 3, 31
  04bda5c  stw 3, 432(30)
  04bda60  lbz 4, 83(31)
  04bda64  cmpwi 4, 4
  04bda68  bt 2, 0x4bdaac
  04bda6c  lis 3, 76
  04bda70  lis 4, 114
  04bda74  addi 3, 3, -13148
  04bda78  li 5, 0
  04bda7c  lfs 1, 0(3)
  04bda80  lfs 2, -3056(4)
  04bda84  ori 3, 31, 0
  04bda88  fmuls 1, 2, 1
  04bda8c  li 4, 4
  04bda90  fctiwz 1, 1
  04bda94  stfd 1, 392(1)
  04bda98  lwz 6, 396(1)
  04bda9c  extsw 6, 6
  04bdaa0  bl 0xfddc0
  04bdaa4  nop
  04bdaa8  lwz 3, 432(30)
  04bdaac  slwi 3, 3, 2
  04bdab0  lis 4, 165
  04bdab4  addc 3, 30, 3
  04bdab8  addic 29, 4, 7136
  04bdabc  clrldi 3, 3, 32
  04bdac0  lwz 4, 436(30)
  04bdac4  slwi 4, 4, 4
  04bdac8  lwz 3, 384(3)
  04bdacc  lfs 1, 16(31)
  04bdad0  slwi 3, 3, 2
  04bdad4  extsw 3, 3
  04bdad8  lis 28, 143
  04bdadc  lis 27, 114
  04bdae0  lwzx 3, 29, 3
  04bdae4  addc 3, 3, 4
  04bdae8  clrldi 5, 3, 32
  04bdaec  addic 3, 30, 64
  04bdaf0  ori 4, 3, 0
  04bdaf4  lfs 2, 16(5)
  04bdaf8  fsubs 1, 2, 1
  04bdafc  stfs 1, 64(30)
  04bdb00  lfs 1, 20(5)
  04bdb04  lfs 2, 20(31)
  04bdb08  fsubs 1, 1, 2
  04bdb0c  stfs 1, 68(30)
  04bdb10  lfs 1, 24(5)
  04bdb14  lfs 2, 24(31)
  04bdb18  fsubs 1, 1, 2
  04bdb1c  stfs 1, 72(30)
  04bdb20  lfs 1, 28(5)
  04bdb24  stfs 1, 76(30)
  04bdb28  lfs 1, 18868(28)
  04bdb2c  lfs 2, -3052(27)
  04bdb30  fmuls 1, 1, 2
  04bdb34  bl 0x5e84c0
  04bdb38  nop
  04bdb3c  lwz 3, 432(30)
  04bdb40  lis 4, 143
  04bdb44  lis 7, 114
  04bdb48  lwz 6, 436(30)
  04bdb4c  slwi 3, 3, 2
  04bdb50  slwi 6, 6, 4
  04bdb54  addc 3, 30, 3
  04bdb58  clrldi 5, 3, 32
  04bdb5c  addic 3, 31, 16
  04bdb60  lwz 5, 384(5)
  04bdb64  lfs 1, 18872(4)
  04bdb68  slwi 4, 5, 2
  04bdb6c  lfs 2, -3048(7)
  04bdb70  extsw 4, 4
  04bdb74  fmuls 2, 1, 2
  04bdb78  li 7, 0
  04bdb7c  lfs 1, 18868(28)
  04bdb80  lfs 3, -3052(27)
  04bdb84  lwzx 4, 29, 4
  04bdb88  fmuls 1, 1, 3
  04bdb8c  addc 4, 4, 6
  04bdb90  addic 4, 4, 16
  04bdb94  clrldi 4, 4, 32
  04bdb98  fneg 2, 2
  04bdb9c  bl 0x108180
  04bdba0  nop
  04bdba4  stfs 1, 72(30)
  04bdba8  b 0x4be890
  04bdbac  li 3, 4
  04bdbb0  lbz 4, 83(31)
  04bdbb4  cmpwi 4, 0
  04bdbb8  stb 3, 32(31)
  04bdbbc  bt 2, 0x4be890
  04bdbc0  lis 3, 76
  04bdbc4  lis 4, 114
  04bdbc8  addi 3, 3, -13148
  04bdbcc  li 5, 0
  04bdbd0  lfs 1, 0(3)
  04bdbd4  lfs 2, -3056(4)
  04bdbd8  ori 3, 31, 0
  04bdbdc  li 4, 0
  04bdbe0  fmuls 1, 2, 1
  04bdbe4  fctiwz 1, 1
  04bdbe8  stfd 1, 392(1)
  04bdbec  lwz 6, 396(1)
  04bdbf0  extsw 6, 6
  04bdbf4  bl 0xfddc0
  04bdbf8  nop
  04bdbfc  b 0x4be890
  04bdc00  lwz 3, 356(30)
  04bdc04  cmpwi 3, 2
  04bdc08  bt 2, 0x4bded8
  04bdc0c  lfs 1, 16(29)
  04bdc10  addic 28, 31, 72
  04bdc14  lfs 2, 16(31)
  04bdc18  lfs 3, 20(29)
  04bdc1c  lfs 4, 20(31)
  04bdc20  fsubs 1, 1, 2
  04bdc24  fsubs 2, 3, 4
  04bdc28  bl 0x5e8338
  04bdc2c  nop
  04bdc30  lis 3, 76
  04bdc34  lis 4, 114
  04bdc38  addi 3, 3, -13148
  04bdc3c  lis 6, 114
  04bdc40  addic 5, 30, 444
  04bdc44  lfs 2, 44(3)
  04bdc48  lfs 3, -3048(4)
  04bdc4c  lfs 4, 48(3)
  04bdc50  fmuls 2, 3, 2
  04bdc54  lfs 5, -3052(6)
  04bdc58  ori 3, 28, 0
  04bdc5c  fmuls 4, 5, 4
  04bdc60  fmr 3, 2
  04bdc64  bl 0x10a2e0
  04bdc68  nop
  04bdc6c  lwz 3, 472(30)
  04bdc70  cmpwi 3, 0
  04bdc74  bf 2, 0x4bde5c
  04bdc78  lfs 1, 20(31)
  04bdc7c  lfs 2, 20(29)
  04bdc80  lfs 3, 16(31)
  04bdc84  fsubs 1, 1, 2
  04bdc88  lfs 2, 16(29)
  04bdc8c  fsubs 2, 3, 2
  04bdc90  lis 3, 76
  04bdc94  addi 3, 3, -13148
  04bdc98  fmuls 1, 1, 1
  04bdc9c  fmadds 1, 2, 2, 1
  04bdca0  lfs 2, 76(3)
  04bdca4  fsqrts 1, 1
  04bdca8  fcmpu 0, 1, 2
  04bdcac  cror 6, 1, 2
  04bdcb0  bt 6, 0x4bde5c
  04bdcb4  lwz 3, 468(30)
  04bdcb8  cmpwi 3, 0
  04bdcbc  bf 2, 0x4bde5c
  04bdcc0  lwz 3, 432(30)
  04bdcc4  lwz 4, 436(30)
  04bdcc8  lis 29, 165
  04bdccc  slwi 3, 3, 2
  04bdcd0  addic 29, 29, 7136
  04bdcd4  addc 3, 30, 3
  04bdcd8  clrldi 3, 3, 32
  04bdcdc  lwz 3, 384(3)
  04bdce0  slwi 3, 3, 2
  04bdce4  extsw 3, 3
  04bdce8  lwzx 3, 29, 3
  04bdcec  lwz 3, 0(3)
  04bdcf0  addic 3, 3, -1
  04bdcf4  cmpw 4, 3
  04bdcf8  bf 0, 0x4bde5c
  04bdcfc  li 3, 3
  04bdd00  li 4, 0
  04bdd04  stb 3, 32(31)
  04bdd08  lwz 3, 436(30)
  04bdd0c  stw 4, 448(30)
  04bdd10  addic 3, 3, 1
  04bdd14  stw 3, 436(30)
  04bdd18  lbz 4, 83(31)
  04bdd1c  cmpwi 4, 4
  04bdd20  bt 2, 0x4bdd64
  04bdd24  lis 3, 76
  04bdd28  lis 4, 114
  04bdd2c  addi 3, 3, -13148
  04bdd30  li 5, 0
  04bdd34  lfs 1, 0(3)
  04bdd38  lfs 2, -3056(4)
  04bdd3c  ori 3, 31, 0
  04bdd40  fmuls 1, 2, 1
  04bdd44  li 4, 4
  04bdd48  fctiwz 1, 1
  04bdd4c  stfd 1, 392(1)
  04bdd50  lwz 6, 396(1)
  04bdd54  extsw 6, 6
  04bdd58  bl 0xfddc0
  04bdd5c  nop
  04bdd60  lwz 3, 436(30)
  04bdd64  lwz 4, 432(30)
  04bdd68  slwi 3, 3, 4
  04bdd6c  lfs 1, 16(31)
  04bdd70  slwi 4, 4, 2
  04bdd74  addc 4, 30, 4
  04bdd78  clrldi 4, 4, 32
  04bdd7c  lis 28, 143
  04bdd80  lis 27, 114
  04bdd84  lwz 4, 384(4)
  04bdd88  slwi 4, 4, 2
  04bdd8c  extsw 4, 4
  04bdd90  lwzx 4, 29, 4
  04bdd94  addc 3, 4, 3
  04bdd98  clrldi 5, 3, 32
  04bdd9c  addic 3, 30, 64
  04bdda0  ori 4, 3, 0
  04bdda4  lfs 2, 16(5)
  04bdda8  fsubs 1, 2, 1
  04bddac  stfs 1, 64(30)
  04bddb0  lfs 1, 20(5)
  04bddb4  lfs 2, 20(31)
  04bddb8  fsubs 1, 1, 2
  04bddbc  stfs 1, 68(30)
  04bddc0  lfs 1, 24(5)
  04bddc4  lfs 2, 24(31)
  04bddc8  fsubs 1, 1, 2
  04bddcc  stfs 1, 72(30)
  04bddd0  lfs 1, 28(5)
  04bddd4  stfs 1, 76(30)
  04bddd8  lfs 1, 18868(28)
  04bdddc  lfs 2, -3052(27)
  04bdde0  fmuls 1, 1, 2
  04bdde4  bl 0x5e84c0
  04bdde8  nop
  04bddec  lwz 3, 432(30)
  04bddf0  lis 4, 143
  04bddf4  lis 7, 114
  04bddf8  lwz 6, 436(30)
  04bddfc  slwi 3, 3, 2
  04bde00  slwi 6, 6, 4
  04bde04  addc 3, 30, 3
  04bde08  clrldi 5, 3, 32
  04bde0c  addic 3, 31, 16
  04bde10  lwz 5, 384(5)
  04bde14  lfs 1, 18872(4)
  04bde18  slwi 4, 5, 2
  04bde1c  lfs 2, -3048(7)
  04bde20  extsw 4, 4
  04bde24  fmuls 2, 1, 2
  04bde28  li 7, 0
  04bde2c  lfs 1, 18868(28)
  04bde30  lfs 3, -3052(27)
  04bde34  lwzx 4, 29, 4
  04bde38  fmuls 1, 1, 3
  04bde3c  addc 4, 4, 6
  04bde40  addic 4, 4, 16
  04bde44  clrldi 4, 4, 32
  04bde48  fneg 2, 2
  04bde4c  bl 0x108180
  04bde50  nop
  04bde54  stfs 1, 72(30)
  04bde58  b 0x4be890
  04bde5c  addic 3, 30, 448
  04bde60  bl 0x4fff60
  04bde64  nop
  04bde68  cmpwi 3, 0
  04bde6c  bt 2, 0x4be890
  04bde70  li 3, 5
  04bde74  lbz 4, 83(31)
  04bde78  cmpwi 4, 6
  04bde7c  stb 3, 32(31)
  04bde80  bt 2, 0x4bdec0
  04bde84  lis 3, 76
  04bde88  lis 4, 114
  04bde8c  addi 3, 3, -13148
  04bde90  li 5, 0
  04bde94  lfs 1, 0(3)
  04bde98  lfs 2, -3056(4)
  04bde9c  ori 3, 31, 0
  04bdea0  fmuls 1, 2, 1
  04bdea4  li 4, 6
  04bdea8  fctiwz 1, 1
  04bdeac  stfd 1, 392(1)
  04bdeb0  lwz 6, 396(1)
  04bdeb4  extsw 6, 6
  04bdeb8  bl 0xfddc0
  04bdebc  nop
  04bdec0  lis 3, 143
  04bdec4  li 4, 0
  04bdec8  lfs 1, 18900(3)
  04bdecc  stw 4, 452(30)
  04bded0  stfs 1, 88(31)
  04bded4  b 0x4be890
  04bded8  li 3, 4
  04bdedc  lbz 4, 83(31)
  04bdee0  cmpwi 4, 0
  04bdee4  stb 3, 32(31)
  04bdee8  bt 2, 0x4be890
  04bdeec  lis 3, 76
  04bdef0  lis 4, 114
  04bdef4  addi 3, 3, -13148
  04bdef8  li 5, 0
  04bdefc  lfs 1, 0(3)
  04bdf00  lfs 2, -3056(4)
  04bdf04  ori 3, 31, 0
  04bdf08  fmuls 1, 2, 1
  04bdf0c  li 4, 0
  04bdf10  fctiwz 1, 1
  04bdf14  stfd 1, 392(1)
  04bdf18  lwz 6, 396(1)
  04bdf1c  extsw 6, 6
  04bdf20  bl 0xfddc0
  04bdf24  nop
  04bdf28  b 0x4be890
  04bdf2c  lfs 1, 16(29)
  04bdf30  lfs 2, 16(31)
  04bdf34  lfs 3, 20(29)
  04bdf38  fsubs 1, 1, 2
  04bdf3c  lfs 4, 20(31)
  04bdf40  fsubs 2, 3, 4
  04bdf44  bl 0x5e8338
  04bdf48  nop
  04bdf4c  lwz 3, 356(30)
  04bdf50  fmr 31, 1
  04bdf54  cmpwi 3, 2
  04bdf58  bt 2, 0x4bdffc
  04bdf5c  lfs 1, 440(30)
  04bdf60  addic 4, 1, 224
  04bdf64  ori 3, 31, 0
  04bdf68  bl 0x4bbe20
  04bdf6c  lfs 2, 20(31)
  04bdf70  lfs 3, 20(29)
  04bdf74  lfs 4, 16(31)
  04bdf78  fsubs 2, 2, 3
  04bdf7c  lfs 3, 16(29)
  04bdf80  fsubs 3, 4, 3
  04bdf84  lis 3, 143
  04bdf88  fmr 31, 1
  04bdf8c  fmuls 2, 2, 2
  04bdf90  fmadds 2, 3, 3, 2
  04bdf94  lfs 3, 18888(3)
  04bdf98  fsqrts 2, 2
  04bdf9c  fcmpu 0, 2, 3
  04bdfa0  cror 6, 1, 2
  04bdfa4  bt 6, 0x4be04c
  04bdfa8  li 3, 8
  04bdfac  lbz 4, 83(31)
  04bdfb0  cmpwi 4, 19
  04bdfb4  stb 3, 32(31)
  04bdfb8  bt 2, 0x4be04c
  04bdfbc  lis 3, 76
  04bdfc0  lis 4, 114
  04bdfc4  addi 3, 3, -13148
  04bdfc8  li 5, 0
  04bdfcc  lfs 1, 52(3)
  04bdfd0  lfs 2, -3056(4)
  04bdfd4  ori 3, 31, 0
  04bdfd8  li 4, 19
  04bdfdc  fmuls 1, 2, 1
  04bdfe0  fctiwz 1, 1
  04bdfe4  stfd 1, 392(1)
  04bdfe8  lwz 6, 396(1)
  04bdfec  extsw 6, 6
  04bdff0  bl 0xfddc0
  04bdff4  nop
  04bdff8  b 0x4be04c
  04bdffc  li 3, 4
  04be000  lbz 4, 83(31)
  04be004  cmpwi 4, 0
  04be008  stb 3, 32(31)
  04be00c  bt 2, 0x4be04c
  04be010  lis 3, 76
  04be014  lis 4, 114
  04be018  addi 3, 3, -13148
  04be01c  li 5, 0
  04be020  lfs 1, 0(3)
  04be024  lfs 2, -3056(4)
  04be028  ori 3, 31, 0
  04be02c  fmuls 1, 2, 1
  04be030  li 4, 0
  04be034  fctiwz 1, 1
  04be038  stfd 1, 392(1)
  04be03c  lwz 6, 396(1)
  04be040  extsw 6, 6
  04be044  bl 0xfddc0
  04be048  nop
  04be04c  lis 3, 76
  04be050  lis 28, 114
  04be054  fmr 1, 31
  04be058  addi 29, 3, -13148
  04be05c  lis 3, 114
  04be060  addic 5, 30, 444
  04be064  lfs 3, 80(29)
  04be068  lfs 5, 84(29)
  04be06c  lfs 4, -3048(3)
  04be070  lfs 6, -3052(28)
  04be074  ori 3, 31, 0
  04be078  fmuls 2, 4, 3
  04be07c  fmuls 3, 4, 5
  04be080  fmuls 4, 6, 5
  04be084  bl 0xff2e8
  04be088  nop
  04be08c  lfs 1, 16(31)
  04be090  lfs 2, 20(31)
  04be094  addic 27, 1, 224
  04be098  stfs 1, 208(1)
  04be09c  addic 26, 31, 16
  04be0a0  lfs 1, 24(31)
  04be0a4  addic 3, 1, 240
  04be0a8  stfs 2, 212(1)
  04be0ac  ori 4, 27, 0
  04be0b0  lfs 2, 28(31)
  04be0b4  ori 5, 26, 0
  04be0b8  stfs 1, 216(1)
  04be0bc  stfs 2, 220(1)
  04be0c0  bl 0x502a64
  04be0c4  nop
  04be0c8  lfs 1, 240(1)
  04be0cc  ori 3, 27, 0
  04be0d0  lfs 2, 244(1)
  04be0d4  ori 4, 27, 0
  04be0d8  stfs 1, 224(1)
  04be0dc  lfs 1, 248(1)
  04be0e0  stfs 2, 228(1)
  04be0e4  lfs 2, 252(1)
  04be0e8  stfs 1, 232(1)
  04be0ec  stfs 2, 236(1)
  04be0f0  lfs 1, 88(29)
  04be0f4  lfs 2, -3052(28)
  04be0f8  fmuls 1, 2, 1
  04be0fc  bl 0x5e7f98
  04be100  nop
  04be104  addic 3, 1, 256
  04be108  ori 4, 27, 0
  04be10c  ori 5, 26, 0
  04be110  bl 0x502b08
  04be114  nop
  04be118  lfs 1, 92(29)
  04be11c  ori 3, 31, 0
  04be120  lfs 2, 96(29)
  04be124  ori 5, 27, 0
  04be128  lfs 3, 24(29)
  04be12c  addic 4, 1, 208
  04be130  lfs 4, 100(29)
  04be134  li 10, 1
  04be138  bl 0xffcd0
  04be13c  nop
  04be140  cmpwi 3, 0
  04be144  bt 2, 0x4be180
  04be148  lis 3, 165
  04be14c  addic 4, 3, 7136
  04be150  lwz 3, 432(30)
  04be154  slwi 3, 3, 2
  04be158  extsw 5, 3
  04be15c  addic 3, 1, 208
  04be160  lwzx 5, 4, 5
  04be164  addic 4, 5, 16
  04be168  lwz 5, 0(5)
  04be16c  extsw 5, 5
  04be170  bl 0x104e44
  04be174  nop
  04be178  cmpwi 3, 0
  04be17c  bt 2, 0x4be1f4
  04be180  lfs 1, 208(1)
  04be184  li 3, 4
  04be188  lfs 2, 212(1)
  04be18c  stfs 1, 16(31)
  04be190  lfs 1, 216(1)
  04be194  stfs 2, 20(31)
  04be198  lfs 2, 220(1)
  04be19c  stfs 1, 24(31)
  04be1a0  lbz 4, 83(31)
  04be1a4  stfs 2, 28(31)
  04be1a8  cmpwi 4, 0
  04be1ac  stb 3, 32(31)
  04be1b0  bt 2, 0x4be890
  04be1b4  lis 3, 76
  04be1b8  lis 4, 114
  04be1bc  addi 3, 3, -13148
  04be1c0  li 5, 0
  04be1c4  lfs 1, 104(3)
  04be1c8  lfs 2, -3056(4)
  04be1cc  ori 3, 31, 0
  04be1d0  li 4, 0
  04be1d4  fmuls 1, 2, 1
  04be1d8  fctiwz 1, 1
  04be1dc  stfd 1, 392(1)
  04be1e0  lwz 6, 396(1)
  04be1e4  extsw 6, 6
  04be1e8  bl 0xfddc0
  04be1ec  nop
  04be1f0  b 0x4be890
  04be1f4  lfs 1, 208(1)
  04be1f8  stfs 1, 16(31)
  04be1fc  lfs 1, 212(1)
  04be200  stfs 1, 20(31)
  04be204  lfs 1, 216(1)
  04be208  stfs 1, 24(31)
  04be20c  lfs 1, 220(1)
  04be210  stfs 1, 28(31)
  04be214  b 0x4be890
  04be218  lfs 1, 16(29)
  04be21c  addic 28, 31, 72
  04be220  lfs 2, 16(31)
  04be224  lfs 3, 20(29)
  04be228  lfs 4, 20(31)
  04be22c  fsubs 1, 1, 2
  04be230  fsubs 2, 3, 4
  04be234  bl 0x5e8338
  04be238  nop
  04be23c  lis 3, 76
  04be240  lis 4, 114
  04be244  addi 3, 3, -13148
  04be248  lis 6, 114
  04be24c  addic 5, 30, 444
  04be250  lfs 2, 44(3)
  04be254  lfs 3, -3048(4)
  04be258  lfs 4, 48(3)
  04be25c  fmuls 2, 3, 2
  04be260  lfs 5, -3052(6)
  04be264  ori 3, 28, 0
  04be268  fmuls 4, 5, 4
  04be26c  fmr 3, 2
  04be270  bl 0x10a2e0
  04be274  nop
  04be278  lbz 4, 112(31)
  04be27c  lbz 3, 83(31)
  04be280  rlwinm 4, 4, 0, 30, 30
  04be284  cmpwi 4, 0
  04be288  bt 2, 0x4be4bc
  04be28c  lfs 1, 20(31)
  04be290  lfs 2, 20(29)
  04be294  lfs 3, 16(31)
  04be298  fsubs 1, 1, 2
  04be29c  lfs 2, 16(29)
  04be2a0  fsubs 2, 3, 2
  04be2a4  lis 4, 143
  04be2a8  fmuls 1, 1, 1
  04be2ac  fmadds 1, 2, 2, 1
  04be2b0  lfs 2, 18888(4)
  04be2b4  fsqrts 1, 1
  04be2b8  fcmpu 1, 1, 2
  04be2bc  bf 4, 0x4be468
  04be2c0  lwz 4, 468(30)
  04be2c4  cmpwi 4, 0
  04be2c8  bf 2, 0x4be468
  04be2cc  lwz 4, 432(30)
  04be2d0  lwz 5, 436(30)
  04be2d4  lis 29, 165
  04be2d8  slwi 4, 4, 2
  04be2dc  addic 29, 29, 7136
  04be2e0  addc 4, 30, 4
  04be2e4  clrldi 4, 4, 32
  04be2e8  lwz 4, 384(4)
  04be2ec  slwi 4, 4, 2
  04be2f0  extsw 4, 4
  04be2f4  lwzx 4, 29, 4
  04be2f8  lwz 4, 0(4)
  04be2fc  addic 4, 4, -1
  04be300  cmpw 5, 4
  04be304  bf 0, 0x4be468
  04be308  li 3, 3
  04be30c  li 4, 0
  04be310  stb 3, 32(31)
  04be314  lwz 3, 436(30)
  04be318  stw 4, 448(30)
  04be31c  addic 3, 3, 1
  04be320  stw 3, 436(30)
  04be324  lbz 4, 83(31)
  04be328  cmpwi 4, 4
  04be32c  bt 2, 0x4be370
  04be330  lis 3, 76
  04be334  lis 4, 114
  04be338  addi 3, 3, -13148
  04be33c  li 5, 0
  04be340  lfs 1, 0(3)
  04be344  lfs 2, -3056(4)
  04be348  ori 3, 31, 0
  04be34c  fmuls 1, 2, 1
  04be350  li 4, 4
  04be354  fctiwz 1, 1
  04be358  stfd 1, 392(1)
  04be35c  lwz 6, 396(1)
  04be360  extsw 6, 6
  04be364  bl 0xfddc0
  04be368  nop
  04be36c  lwz 3, 436(30)
  04be370  lwz 4, 432(30)
  04be374  slwi 3, 3, 4
  04be378  lfs 1, 16(31)
  04be37c  slwi 4, 4, 2
  04be380  addc 4, 30, 4
  04be384  clrldi 4, 4, 32
  04be388  lis 28, 143
  04be38c  lis 27, 114
  04be390  lwz 4, 384(4)
  04be394  slwi 4, 4, 2
  04be398  extsw 4, 4
  04be39c  lwzx 4, 29, 4
  04be3a0  addc 3, 4, 3
  04be3a4  clrldi 5, 3, 32
  04be3a8  addic 3, 30, 64
  04be3ac  ori 4, 3, 0
  04be3b0  lfs 2, 16(5)
  04be3b4  fsubs 1, 2, 1
  04be3b8  stfs 1, 64(30)
  04be3bc  lfs 1, 20(5)
  04be3c0  lfs 2, 20(31)
  04be3c4  fsubs 1, 1, 2
  04be3c8  stfs 1, 68(30)
  04be3cc  lfs 1, 24(5)
  04be3d0  lfs 2, 24(31)
  04be3d4  fsubs 1, 1, 2
  04be3d8  stfs 1, 72(30)
  04be3dc  lfs 1, 28(5)
  04be3e0  stfs 1, 76(30)
  04be3e4  lfs 1, 18868(28)
  04be3e8  lfs 2, -3052(27)
  04be3ec  fmuls 1, 1, 2
  04be3f0  bl 0x5e84c0
  04be3f4  nop
  04be3f8  lwz 3, 432(30)
  04be3fc  lis 4, 143
  04be400  lis 7, 114
  04be404  lwz 6, 436(30)
  04be408  slwi 3, 3, 2
  04be40c  slwi 6, 6, 4
  04be410  addc 3, 30, 3
  04be414  clrldi 5, 3, 32
  04be418  addic 3, 31, 16
  04be41c  lwz 5, 384(5)
  04be420  lfs 1, 18872(4)
  04be424  slwi 4, 5, 2
  04be428  lfs 2, -3048(7)
  04be42c  extsw 4, 4
  04be430  fmuls 2, 1, 2
  04be434  li 7, 0
  04be438  lfs 1, 18868(28)
  04be43c  lfs 3, -3052(27)
  04be440  lwzx 4, 29, 4
  04be444  fmuls 1, 1, 3
  04be448  addc 4, 4, 6
  04be44c  addic 4, 4, 16
  04be450  clrldi 4, 4, 32
  04be454  fneg 2, 2
  04be458  bl 0x108180
  04be45c  nop
  04be460  stfs 1, 72(30)
  04be464  b 0x4be890
  04be468  bf 5, 0x4be890
  04be46c  li 4, 4
  04be470  cmpwi 3, 0
  04be474  stb 4, 32(31)
  04be478  bt 2, 0x4be890
  04be47c  lis 3, 76
  04be480  lis 4, 114
  04be484  addi 3, 3, -13148
  04be488  li 5, 0
  04be48c  lfs 1, 0(3)
  04be490  lfs 2, -3056(4)
  04be494  ori 3, 31, 0
  04be498  li 4, 0
  04be49c  fmuls 1, 2, 1
  04be4a0  fctiwz 1, 1
  04be4a4  stfd 1, 392(1)
  04be4a8  lwz 6, 396(1)
  04be4ac  extsw 6, 6
  04be4b0  bl 0xfddc0
  04be4b4  nop
  04be4b8  b 0x4be890
  04be4bc  ori 3, 31, 0
  04be4c0  bl 0xefe40
  04be4c4  nop
  04be4c8  fmr 31, 1
  04be4cc  ori 3, 31, 0
  04be4d0  addic 5, 1, 304
  04be4d4  li 4, 0
  04be4d8  bl 0xf1114
  04be4dc  nop
  04be4e0  lis 3, 76
  04be4e4  addi 3, 3, -13148
  04be4e8  lfs 1, 108(3)
  04be4ec  fcmpu 0, 31, 1
  04be4f0  bt 0, 0x4be890
  04be4f4  lis 3, 76
  04be4f8  addi 3, 3, -13148
  04be4fc  lfs 1, 112(3)
  04be500  fcmpu 0, 31, 1
  04be504  bt 1, 0x4be890
  04be508  lis 3, 76
  04be50c  lfs 1, 16(31)
  04be510  lfs 2, 20(31)
  04be514  addi 29, 3, -13148
  04be518  stfs 1, 288(1)
  04be51c  lfs 1, 28(31)
  04be520  stfs 2, 292(1)
  04be524  stfs 1, 300(1)
  04be528  lfs 3, 24(29)
  04be52c  lfs 2, 24(31)
  04be530  lfs 1, 72(31)
  04be534  fadds 2, 2, 3
  04be538  stfs 2, 296(1)
  04be53c  bl 0x5e8078
  04be540  nop
  04be544  lfs 2, 72(31)
  04be548  stfs 1, 272(1)
  04be54c  fmr 1, 2
  04be550  bl 0x5e8128
  04be554  nop
  04be558  li 3, 0
  04be55c  stfs 1, 276(1)
  04be560  addic 28, 1, 336
  04be564  lis 5, 1
  04be568  addic 7, 1, 272
  04be56c  stw 3, 280(1)
  04be570  lfs 1, 116(29)
  04be574  ori 3, 28, 0
  04be578  ori 4, 31, 0
  04be57c  ori 5, 5, 1
  04be580  bl 0x10581c
  04be584  nop
  04be588  addic 29, 1, 288
  04be58c  addic 27, 1, 304
  04be590  ori 3, 29, 0
  04be594  ori 4, 27, 0
  04be598  li 5, 0
  04be59c  ori 6, 31, 0
  04be5a0  ori 7, 28, 0
  04be5a4  bl 0x57820
  04be5a8  nop
  04be5ac  ori 3, 29, 0
  04be5b0  ori 4, 27, 0
  04be5b4  addic 6, 30, 416
  04be5b8  li 9, 5
  04be5bc  ori 5, 29, 0
  04be5c0  ori 7, 31, 0
  04be5c4  ori 8, 28, 0
  04be5c8  bl 0x105d58
  04be5cc  nop
  04be5d0  ori 3, 29, 0
  04be5d4  ori 4, 27, 0
  04be5d8  bl 0x65468
  04be5dc  nop
  04be5e0  lfs 1, 304(1)
  04be5e4  stfs 1, 416(30)
  04be5e8  lfs 1, 308(1)
  04be5ec  stfs 1, 420(30)
  04be5f0  lfs 1, 312(1)
  04be5f4  stfs 1, 424(30)
  04be5f8  lfs 1, 316(1)
  04be5fc  stfs 1, 428(30)
  04be600  b 0x4be890
  04be604  lwz 4, 472(30)
  04be608  li 3, 0
  04be60c  cmpwi 4, 0
  04be610  ori 29, 3, 0
  04be614  bf 2, 0x4be62c
  04be618  addic 4, 30, 112
  04be61c  ori 3, 31, 0
  04be620  bl 0x10b030
  04be624  nop
  04be628  b 0x4be634
  04be62c  lis 4, 16256
  04be630  stw 4, 88(31)
  04be634  rlwinm 3, 3, 0, 25, 25
  04be638  cmpwi 3, 0
  04be63c  bf 2, 0x4be65c
  04be640  lwz 3, 472(30)
  04be644  cmpwi 3, 0
  04be648  bt 2, 0x4be890
  04be64c  lbz 3, 112(31)
  04be650  rlwinm 3, 3, 0, 30, 30
  04be654  cmpwi 3, 0
  04be658  bt 2, 0x4be890
  04be65c  lwz 3, 468(30)
  04be660  cmpwi 3, 0
  04be664  bf 2, 0x4be7dc
  04be668  li 3, 3
  04be66c  lis 4, 165
  04be670  addic 4, 4, 7136
  04be674  stb 3, 32(31)
  04be678  lwz 3, 432(30)
  04be67c  stw 29, 448(30)
  04be680  addic 3, 3, 1
  04be684  lwz 6, 436(30)
  04be688  rlwinm 5, 3, 2, 29, 29
  04be68c  clrlwi 3, 3, 31
  04be690  addc 5, 30, 5
  04be694  slwi 6, 6, 4
  04be698  clrldi 5, 5, 32
  04be69c  lwz 5, 384(5)
  04be6a0  stw 3, 432(30)
  04be6a4  slwi 3, 5, 2
  04be6a8  lis 5, 76
  04be6ac  extsw 3, 3
  04be6b0  addi 5, 5, -13148
  04be6b4  lwzx 3, 4, 3
  04be6b8  addc 3, 3, 6
  04be6bc  clrldi 4, 3, 32
  04be6c0  addic 3, 1, 320
  04be6c4  lfs 1, 16(4)
  04be6c8  stfs 1, 320(1)
  04be6cc  lfs 1, 20(4)
  04be6d0  stfs 1, 324(1)
  04be6d4  lfs 1, 24(4)
  04be6d8  stfs 1, 328(1)
  04be6dc  lfs 1, 28(4)
  04be6e0  li 4, 0
  04be6e4  stfs 1, 332(1)
  04be6e8  lfs 1, 24(5)
  04be6ec  bl 0xffb70
  04be6f0  nop
  04be6f4  lbz 3, 83(31)
  04be6f8  stfs 1, 328(1)
  04be6fc  cmpwi 3, 4
  04be700  bt 2, 0x4be740
  04be704  lis 3, 76
  04be708  lis 4, 114
  04be70c  addi 3, 3, -13148
  04be710  li 5, 0
  04be714  lfs 1, 0(3)
  04be718  lfs 2, -3056(4)
  04be71c  ori 3, 31, 0
  04be720  li 4, 4
  04be724  fmuls 1, 2, 1
  04be728  fctiwz 1, 1
  04be72c  stfd 1, 392(1)
  04be730  lwz 6, 396(1)
  04be734  extsw 6, 6
  04be738  bl 0xfddc0
  04be73c  nop
  04be740  lfs 1, 320(1)
  04be744  lfs 2, 16(31)
  04be748  fsubs 1, 1, 2
  04be74c  lis 29, 143
  04be750  lis 28, 114
  04be754  addic 3, 30, 64
  04be758  ori 4, 3, 0
  04be75c  stfs 1, 64(30)
  04be760  lfs 1, 324(1)
  04be764  lfs 2, 20(31)
  04be768  fsubs 1, 1, 2
  04be76c  stfs 1, 68(30)
  04be770  lfs 1, 328(1)
  04be774  lfs 2, 24(31)
  04be778  fsubs 1, 1, 2
  04be77c  stfs 1, 72(30)
  04be780  lfs 1, 332(1)
  04be784  stfs 1, 76(30)
  04be788  lfs 1, 18868(29)
  04be78c  lfs 2, -3052(28)
  04be790  fmuls 1, 1, 2
  04be794  bl 0x5e84c0
  04be798  nop
  04be79c  lis 4, 143
  04be7a0  lis 5, 114
  04be7a4  lfs 1, 18868(29)
  04be7a8  lfs 2, -3052(28)
  04be7ac  addic 3, 31, 16
  04be7b0  li 7, 0
  04be7b4  fmuls 1, 1, 2
  04be7b8  lfs 3, 18872(4)
  04be7bc  lfs 4, -3048(5)
  04be7c0  addic 4, 1, 320
  04be7c4  fmuls 2, 3, 4
  04be7c8  fneg 2, 2
  04be7cc  bl 0x108180
  04be7d0  nop
  04be7d4  stfs 1, 72(30)
  04be7d8  b 0x4be890
  04be7dc  li 3, 4
  04be7e0  lbz 4, 83(31)
  04be7e4  cmpwi 4, 0
  04be7e8  stb 3, 32(31)
  04be7ec  bt 2, 0x4be890
  04be7f0  lis 3, 76
  04be7f4  lis 4, 114
  04be7f8  addi 3, 3, -13148
  04be7fc  li 5, 0
  04be800  lfs 1, 0(3)
  04be804  lfs 2, -3056(4)
  04be808  ori 3, 31, 0
  04be80c  fmuls 1, 2, 1
  04be810  li 4, 0
  04be814  fctiwz 1, 1
  04be818  stfd 1, 392(1)
  04be81c  lwz 6, 396(1)
  04be820  extsw 6, 6
  04be824  bl 0xfddc0
  04be828  nop
  04be82c  b 0x4be890
  04be830  lwz 4, 472(30)
  04be834  li 3, 0
  04be838  cmpwi 4, 0
  04be83c  bf 2, 0x4be854
  04be840  addic 4, 30, 112
  04be844  ori 3, 31, 0
  04be848  bl 0x10b030
  04be84c  nop
  04be850  b 0x4be85c
  04be854  lis 4, 16256
  04be858  stw 4, 88(31)
  04be85c  rlwinm 3, 3, 0, 25, 25
  04be860  cmpwi 3, 0
  04be864  bf 2, 0x4be884
  04be868  lwz 3, 472(30)
  04be86c  cmpwi 3, 0
  04be870  bt 2, 0x4be890
  04be874  lbz 3, 112(31)
  04be878  rlwinm 3, 3, 0, 30, 30
  04be87c  cmpwi 3, 0
  04be880  bt 2, 0x4be890
  04be884  ori 3, 31, 0
  04be888  bl 0xefb38
  04be88c  nop
  04be890  ld 0, 496(1)
  04be894  mtlr 0
  04be898  lfd 30, 464(1)
  04be89c  lfd 31, 472(1)
  04be8a0  ld 26, 416(1)
  04be8a4  ld 27, 424(1)
  04be8a8  ld 28, 432(1)
  04be8ac  ld 29, 440(1)
  04be8b0  ld 30, 448(1)
  04be8b4  ld 31, 456(1)
  04be8b8  addi 1, 1, 480
  04be8bc  blr
