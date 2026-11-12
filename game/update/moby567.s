# game/update/moby567.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003bbc08:   # 0x3bbc08, 0x14c bytes
  03bbc08  stdu 1, -192(1)
  03bbc0c  mflr 0
  03bbc10  std 0, 208(1)
  03bbc14  stfd 31, 184(1)
  03bbc18  addi 0, 1, 128
  03bbc1c  stvx 31, 0, 0
  03bbc20  std 29, 160(1)
  03bbc24  ori 29, 3, 0
  03bbc28  li 3, 567
  03bbc2c  stw 6, 112(1)
  03bbc30  li 0, 112
  03bbc34  stw 6, 116(1)
  03bbc38  std 31, 176(1)
  03bbc3c  stw 6, 120(1)
  03bbc40  ori 31, 5, 0
  03bbc44  stw 6, 124(1)
  03bbc48  std 30, 168(1)
  03bbc4c  fmr 31, 1
  03bbc50  ori 30, 4, 0
  03bbc54  std 28, 152(1)
  03bbc58  lvx 31, 1, 0
  03bbc5c  bl 0xefa28
  03bbc60  nop
  03bbc64  ori 28, 3, 0
  03bbc68  cmpwi 28, 0
  03bbc6c  bt 2, 0x3bbd24
  03bbc70  li 3, 255
  03bbc74  li 4, 126
  03bbc78  vcfsx 2, 31, 0
  03bbc7c  li 5, 1
  03bbc80  vspltisw 4, -1
  03bbc84  stb 3, 48(28)
  03bbc88  sth 4, 50(28)
  03bbc8c  stb 5, 49(28)
  03bbc90  lis 3, 60
  03bbc94  stb 5, 32(28)
  03bbc98  lfs 1, 0(30)
  03bbc9c  lwz 4, 120(28)
  03bbca0  addi 3, 3, -17408
  03bbca4  stfs 1, 16(28)
  03bbca8  lfs 1, 4(30)
  03bbcac  stfs 1, 20(28)
  03bbcb0  li 5, -3056
  03bbcb4  lfs 1, 8(30)
  03bbcb8  stfs 1, 24(28)
  03bbcbc  lfs 1, 12(30)
  03bbcc0  stfs 1, 28(28)
  03bbcc4  lfs 1, 0(29)
  03bbcc8  stfs 1, 0(4)
  03bbccc  lfs 1, 4(29)
  03bbcd0  stfs 1, 4(4)
  03bbcd4  lfs 1, 8(29)
  03bbcd8  stfs 1, 8(4)
  03bbcdc  lfs 1, 12(29)
  03bbce0  stfs 1, 12(4)
  03bbce4  lvlx 3, 0, 3
  03bbce8  lis 3, 114
  03bbcec  vspltw 3, 3, 0
  03bbcf0  vaddfp 2, 2, 3
  03bbcf4  vslw 3, 4, 4
  03bbcf8  lvlx 4, 5, 3
  03bbcfc  li 5, 20
  03bbd00  ori 3, 28, 0
  03bbd04  vmaddfp 2, 4, 2, 3
  03bbd08  vctsxs 2, 2, 0
  03bbd0c  vspltw 2, 2, 0
  03bbd10  stvewx 2, 5, 4
  03bbd14  stw 31, 16(4)
  03bbd18  stfs 31, 24(4)
  03bbd1c  bl 0xf31a8
  03bbd20  nop
  03bbd24  ori 3, 28, 0
  03bbd28  li 0, 128
  03bbd2c  lvx 31, 1, 0
  03bbd30  ld 0, 208(1)
  03bbd34  mtlr 0
  03bbd38  lfd 31, 184(1)
  03bbd3c  ld 28, 152(1)
  03bbd40  ld 29, 160(1)
  03bbd44  ld 30, 168(1)
  03bbd48  ld 31, 176(1)
  03bbd4c  addi 1, 1, 192
  03bbd50  blr

UpdateMoby_567:   # 0x3bbde8, 0x6ac bytes
  03bbde8  stdu 1, -320(1)
  03bbdec  mflr 0
  03bbdf0  std 0, 336(1)
  03bbdf4  stfd 30, 304(1)
  03bbdf8  stfd 31, 312(1)
  03bbdfc  std 31, 296(1)
  03bbe00  lbz 4, 32(3)
  03bbe04  std 30, 288(1)
  03bbe08  ori 31, 3, 0
  03bbe0c  lwz 30, 120(3)
  03bbe10  cmpwi 4, 1
  03bbe14  cmpwi 1, 4, 2
  03bbe18  std 29, 280(1)
  03bbe1c  std 28, 272(1)
  03bbe20  std 27, 264(1)
  03bbe24  std 26, 256(1)
  03bbe28  cmpwi 6, 4, 0
  03bbe2c  bt 1, 0x3bbe38
  03bbe30  bf 25, 0x3bc464
  03bbe34  b 0x3bbe40
  03bbe38  bf 5, 0x3bc434
  03bbe3c  b 0x3bc464
  03bbe40  lfs 1, 16(31)
  03bbe44  lfs 2, 20(31)
  03bbe48  stfs 1, 112(1)
  03bbe4c  lfs 3, 24(31)
  03bbe50  stfs 2, 116(1)
  03bbe54  lfs 4, 28(31)
  03bbe58  stfs 3, 120(1)
  03bbe5c  stfs 4, 124(1)
  03bbe60  lfs 4, 0(30)
  03bbe64  fadds 1, 1, 4
  03bbe68  lis 3, 60
  03bbe6c  addi 3, 3, -17056
  03bbe70  lis 6, 115
  03bbe74  addic 6, 6, 22784
  03bbe78  stfs 1, 16(31)
  03bbe7c  lfs 1, 4(30)
  03bbe80  fadds 1, 2, 1
  03bbe84  stfs 1, 20(31)
  03bbe88  lfs 1, 8(30)
  03bbe8c  fadds 1, 3, 1
  03bbe90  stfs 1, 24(31)
  03bbe94  lwz 4, 0(30)
  03bbe98  lwz 5, 4(30)
  03bbe9c  lfs 1, 0(30)
  03bbea0  lfs 2, 4(30)
  03bbea4  fabs 4, 1
  03bbea8  fabs 1, 2
  03bbeac  rlwinm 5, 5, 3, 29, 29
  03bbeb0  fsubs 2, 4, 1
  03bbeb4  stfs 2, 192(1)
  03bbeb8  lfs 31, 0(3)
  03bbebc  lwz 3, 192(1)
  03bbec0  lfs 2, 192(1)
  03bbec4  rlwimi 5, 3, 2, 30, 30
  03bbec8  fsub 3, 2, 31
  03bbecc  ori 3, 6, 0
  03bbed0  fsub 5, 2, 31
  03bbed4  rlwimi 5, 4, 4, 28, 28
  03bbed8  rlwimi 3, 5, 2, 26, 28
  03bbedc  slwi 4, 5, 2
  03bbee0  clrldi 3, 3, 32
  03bbee4  lfsx 2, 6, 4
  03bbee8  fsel 3, 3, 4, 1
  03bbeec  fsel 4, 5, 1, 4
  03bbef0  lfs 1, 4(3)
  03bbef4  fcmpu 0, 3, 31
  03bbef8  bt 1, 0x3bbf04
  03bbefc  fmr 1, 31
  03bbf00  b 0x3bc02c
  03bbf04  fsubs 5, 4, 3
  03bbf08  fadds 3, 4, 3
  03bbf0c  addic 6, 1, 16
  03bbf10  li 3, 2
  03bbf14  addic 4, 6, 196
  03bbf18  addic 5, 6, 180
  03bbf1c  mtctr 3
  03bbf20  fdivs 3, 5, 3
  03bbf24  fmuls 5, 3, 3
  03bbf28  stfs 3, 208(1)
  03bbf2c  stfs 3, 200(1)
  03bbf30  stfs 3, 204(1)
  03bbf34  stfs 3, 196(1)
  03bbf38  lfs 6, 208(1)
  03bbf3c  lfs 7, 200(1)
  03bbf40  lfs 8, 204(1)
  03bbf44  fmuls 3, 5, 5
  03bbf48  fmuls 7, 7, 5
  03bbf4c  fmuls 6, 6, 3
  03bbf50  fmuls 4, 3, 3
  03bbf54  fmuls 3, 8, 3
  03bbf58  stfs 7, 200(1)
  03bbf5c  fmuls 5, 6, 5
  03bbf60  stfs 3, 204(1)
  03bbf64  stfs 5, 208(1)
  03bbf68  lfs 3, 180(6)
  03bbf6c  fmuls 3, 3, 4
  03bbf70  stfs 3, 196(6)
  03bbf74  lfs 3, 4(5)
  03bbf78  addic 5, 5, 8
  03bbf7c  fmuls 3, 3, 4
  03bbf80  addic 6, 6, 8
  03bbf84  stfs 3, 4(4)
  03bbf88  addic 4, 4, 8
  03bbf8c  bdnz 0x3bbf68
  03bbf90  ori 7, 1, 0
  03bbf94  li 4, 4
  03bbf98  lis 6, 115
  03bbf9c  addic 5, 7, 196
  03bbfa0  mtctr 4
  03bbfa4  addic 6, 6, 22752
  03bbfa8  ori 4, 5, 0
  03bbfac  lfs 3, 196(7)
  03bbfb0  lfs 4, 0(6)
  03bbfb4  fmuls 3, 3, 4
  03bbfb8  lfs 4, 4(6)
  03bbfbc  addic 6, 6, 8
  03bbfc0  stfs 3, 196(7)
  03bbfc4  lfs 3, 4(5)
  03bbfc8  addic 7, 7, 8
  03bbfcc  fmuls 3, 3, 4
  03bbfd0  stfs 3, 4(5)
  03bbfd4  addic 5, 5, 8
  03bbfd8  bdnz 0x3bbfac
  03bbfdc  ori 5, 3, 0
  03bbfe0  fmr 3, 31
  03bbfe4  ori 3, 1, 0
  03bbfe8  mtctr 5
  03bbfec  lfs 4, 196(3)
  03bbff0  fadds 3, 3, 4
  03bbff4  addic 3, 3, 16
  03bbff8  lfs 4, 4(4)
  03bbffc  lfs 5, 8(4)
  03bc000  lfs 6, 12(4)
  03bc004  addic 4, 4, 16
  03bc008  fadds 3, 3, 4
  03bc00c  fadds 3, 3, 5
  03bc010  fadds 3, 3, 6
  03bc014  bdnz 0x3bbfec
  03bc018  lis 3, 60
  03bc01c  addi 3, 3, -17056
  03bc020  lfs 4, 4(3)
  03bc024  fadds 3, 3, 4
  03bc028  fmadds 1, 3, 2, 1
  03bc02c  li 5, 0
  03bc030  stfs 1, 72(31)
  03bc034  li 3, 15
  03bc038  addic 29, 31, 16
  03bc03c  addic 28, 1, 128
  03bc040  stw 5, 140(1)
  03bc044  li 4, 22
  03bc048  stw 5, 136(1)
  03bc04c  stw 5, 132(1)
  03bc050  stw 5, 128(1)
  03bc054  bl 0xfe484
  03bc058  nop
  03bc05c  extsw 3, 3
  03bc060  lis 27, 114
  03bc064  std 3, 232(1)
  03bc068  lis 3, 60
  03bc06c  addi 3, 3, -17056
  03bc070  li 4, 35
  03bc074  lfs 30, 8(3)
  03bc078  lfs 1, -3056(27)
  03bc07c  lfd 2, 232(1)
  03bc080  fcfid 2, 2
  03bc084  li 3, 20
  03bc088  frsp 2, 2
  03bc08c  fadds 2, 2, 30
  03bc090  fmuls 1, 1, 2
  03bc094  fctiwz 1, 1
  03bc098  stfd 1, 232(1)
  03bc09c  lwz 5, 236(1)
  03bc0a0  extsw 26, 5
  03bc0a4  bl 0xfe484
  03bc0a8  nop
  03bc0ac  ori 9, 3, 0
  03bc0b0  lis 5, 28416
  03bc0b4  ori 3, 29, 0
  03bc0b8  li 6, 255
  03bc0bc  ori 7, 26, 0
  03bc0c0  li 8, 40
  03bc0c4  ori 4, 28, 0
  03bc0c8  ori 5, 5, 45055
  03bc0cc  li 10, 1
  03bc0d0  bl 0x121740
  03bc0d4  nop
  03bc0d8  li 3, 30
  03bc0dc  li 4, 60
  03bc0e0  bl 0xfe484
  03bc0e4  nop
  03bc0e8  extsw 3, 3
  03bc0ec  li 4, 75
  03bc0f0  std 3, 232(1)
  03bc0f4  lfs 1, -3056(27)
  03bc0f8  lfd 2, 232(1)
  03bc0fc  li 3, 50
  03bc100  fcfid 2, 2
  03bc104  frsp 2, 2
  03bc108  fadds 2, 2, 30
  03bc10c  fmuls 1, 1, 2
  03bc110  fctiwz 1, 1
  03bc114  stfd 1, 232(1)
  03bc118  lwz 5, 236(1)
  03bc11c  extsw 27, 5
  03bc120  bl 0xfe484
  03bc124  nop
  03bc128  lis 5, 8191
  03bc12c  lis 6, 79
  03bc130  ori 9, 3, 0
  03bc134  ori 7, 27, 0
  03bc138  ori 3, 29, 0
  03bc13c  li 8, 40
  03bc140  ori 4, 28, 0
  03bc144  li 10, 0
  03bc148  ori 5, 5, 65535
  03bc14c  ori 6, 6, 20303
  03bc150  bl 0x121740
  03bc154  nop
  03bc158  fmr 1, 30
  03bc15c  ori 3, 29, 0
  03bc160  li 4, 0
  03bc164  bl 0xffb70
  03bc168  nop
  03bc16c  lfs 2, 24(31)
  03bc170  fsubs 3, 2, 1
  03bc174  lfs 1, 24(30)
  03bc178  fcmpu 0, 3, 1
  03bc17c  cror 6, 1, 2
  03bc180  bt 6, 0x3bc198
  03bc184  fsubs 1, 1, 3
  03bc188  fadds 1, 2, 1
  03bc18c  fmr 2, 31
  03bc190  stfs 1, 24(31)
  03bc194  b 0x3bc1d4
  03bc198  lis 3, 151
  03bc19c  fmr 3, 2
  03bc1a0  addic 3, 3, -25376
  03bc1a4  fmr 2, 31
  03bc1a8  lfs 4, 680(3)
  03bc1ac  fadds 1, 4, 1
  03bc1b0  fcmpu 0, 3, 1
  03bc1b4  bt 0, 0x3bc1d4
  03bc1b8  lis 3, 60
  03bc1bc  lfs 2, 8(30)
  03bc1c0  lis 4, 114
  03bc1c4  addi 3, 3, -17056
  03bc1c8  lfs 1, 12(3)
  03bc1cc  lfs 3, -3048(4)
  03bc1d0  fnmsubs 2, 3, 1, 2
  03bc1d4  ori 3, 29, 0
  03bc1d8  lwz 6, 16(30)
  03bc1dc  addic 4, 1, 112
  03bc1e0  stfs 2, 8(30)
  03bc1e4  li 5, 0
  03bc1e8  li 7, 0
  03bc1ec  bl 0x57820
  03bc1f0  nop
  03bc1f4  cmpwi 3, 0
  03bc1f8  bt 2, 0x3bc414
  03bc1fc  lis 29, 161
  03bc200  addic 29, 29, 2368
  03bc204  lwz 3, 24(29)
  03bc208  cmpwi 3, 0
  03bc20c  bt 2, 0x3bc40c
  03bc210  lis 4, 60
  03bc214  lis 5, 1
  03bc218  addi 6, 4, -17056
  03bc21c  addic 3, 1, 144
  03bc220  ori 4, 31, 0
  03bc224  ori 5, 5, 1
  03bc228  ori 7, 30, 0
  03bc22c  lfs 1, 16(6)
  03bc230  bl 0x10581c
  03bc234  nop
  03bc238  lfs 1, 148(1)
  03bc23c  lfs 2, 144(1)
  03bc240  fmuls 1, 1, 1
  03bc244  vspltisw 2, -1
  03bc248  li 3, 148
  03bc24c  li 4, 144
  03bc250  vspltisw 4, -16
  03bc254  li 5, 166
  03bc258  vspltisw 7, 0
  03bc25c  vslw 2, 2, 2
  03bc260  lvlx 6, 3, 1
  03bc264  fmadds 1, 2, 2, 1
  03bc268  vsldoi 3, 7, 7, 0
  03bc26c  vmaddfp 8, 6, 6, 2
  03bc270  lvlx 5, 4, 1
  03bc274  lvlx 2, 5, 31
  03bc278  lwz 29, 24(29)
  03bc27c  vsrw 2, 2, 4
  03bc280  fsqrts 1, 1
  03bc284  vmaddfp 4, 5, 5, 8
  03bc288  fcmpu 0, 1, 31
  03bc28c  bt 2, 0x3bc32c
  03bc290  vrsqrtefp 3, 4
  03bc294  vspltisw 7, -1
  03bc298  lis 3, 60
  03bc29c  li 4, 8
  03bc2a0  vspltisw 8, -1
  03bc2a4  addi 3, 3, -17056
  03bc2a8  vspltisw 11, -1
  03bc2ac  li 5, 16
  03bc2b0  vslw 7, 7, 7
  03bc2b4  vslw 8, 8, 8
  03bc2b8  vslw 11, 11, 11
  03bc2bc  lvlx 9, 4, 3
  03bc2c0  lvlx 10, 5, 3
  03bc2c4  vspltw 9, 9, 0
  03bc2c8  vspltw 10, 10, 0
  03bc2cc  vspltisw 12, -1
  03bc2d0  vmaddfp 7, 4, 3, 7
  03bc2d4  vmaddfp 8, 9, 3, 8
  03bc2d8  vspltisw 13, -1
  03bc2dc  vslw 12, 12, 12
  03bc2e0  vspltisw 0, -1
  03bc2e4  vnmsubfp 7, 7, 3, 10
  03bc2e8  vmaddfp 3, 7, 8, 3
  03bc2ec  vslw 7, 13, 13
  03bc2f0  vspltisw 8, -1
  03bc2f4  vspltisw 13, -1
  03bc2f8  vslw 8, 8, 8
  03bc2fc  vslw 13, 13, 13
  03bc300  vmaddfp 11, 4, 3, 11
  03bc304  vmaddfp 12, 9, 3, 12
  03bc308  vnmsubfp 11, 11, 3, 10
  03bc30c  vmaddfp 3, 11, 12, 3
  03bc310  vslw 11, 0, 0
  03bc314  vmaddfp 4, 4, 3, 7
  03bc318  vmaddfp 7, 9, 3, 8
  03bc31c  vnmsubfp 4, 4, 3, 10
  03bc320  vmaddfp 3, 4, 7, 3
  03bc324  vmaddfp 7, 6, 3, 13
  03bc328  vmaddfp 3, 5, 3, 11
  03bc32c  vspltw 4, 3, 0
  03bc330  li 3, 144
  03bc334  vspltw 5, 7, 0
  03bc338  li 4, 148
  03bc33c  lis 5, 17839
  03bc340  lis 7, 16256
  03bc344  li 6, 160
  03bc348  li 8, 0
  03bc34c  stvewx 4, 3, 1
  03bc350  ori 3, 5, 57190
  03bc354  stvewx 5, 4, 1
  03bc358  li 5, 170
  03bc35c  stw 7, 152(1)
  03bc360  li 4, 1
  03bc364  vsplth 4, 2, 1
  03bc368  lis 7, 60
  03bc36c  stw 3, 156(1)
  03bc370  lvx 5, 6, 1
  03bc374  li 3, 48
  03bc378  stb 8, 168(1)
  03bc37c  addi 6, 7, -17056
  03bc380  stb 4, 169(1)
  03bc384  li 7, 80
  03bc388  li 4, 32
  03bc38c  stvehx 4, 5, 1
  03bc390  li 8, 80
  03bc394  li 5, 64
  03bc398  lvx 4, 3, 6
  03bc39c  li 3, 96
  03bc3a0  lvlx 6, 7, 6
  03bc3a4  vperm 3, 3, 7, 4
  03bc3a8  li 7, 112
  03bc3ac  lvx 8, 4, 6
  03bc3b0  vspltw 4, 6, 0
  03bc3b4  lvx 6, 5, 6
  03bc3b8  li 4, 176
  03bc3bc  lvx 7, 3, 6
  03bc3c0  li 5, 96
  03bc3c4  vperm 3, 3, 8, 6
  03bc3c8  li 3, 64
  03bc3cc  vperm 2, 2, 4, 7
  03bc3d0  lvx 4, 7, 6
  03bc3d4  lvx 6, 4, 1
  03bc3d8  vperm 2, 2, 5, 4
  03bc3dc  stvx 3, 3, 1
  03bc3e0  stvx 6, 5, 1
  03bc3e4  ld 5, 64(1)
  03bc3e8  ori 3, 29, 0
  03bc3ec  ld 6, 72(1)
  03bc3f0  stvx 2, 8, 1
  03bc3f4  ld 7, 80(1)
  03bc3f8  ld 8, 88(1)
  03bc3fc  ld 9, 96(1)
  03bc400  ld 10, 104(1)
  03bc404  bl 0x105ab4
  03bc408  nop
  03bc40c  li 3, 2
  03bc410  stb 3, 32(31)
  03bc414  addic 3, 30, 20
  03bc418  bl 0x4fff60
  03bc41c  nop
  03bc420  cmpwi 3, 0
  03bc424  bt 2, 0x3bc464
  03bc428  li 3, 2
  03bc42c  stb 3, 32(31)
  03bc430  b 0x3bc464
  03bc434  lis 4, 60
  03bc438  ori 3, 31, 0
  03bc43c  addi 5, 4, -17056
  03bc440  li 6, -1
  03bc444  addic 4, 31, 16
  03bc448  lfs 1, 128(5)
  03bc44c  lfs 2, 132(5)
  03bc450  bl 0x10fb28
  03bc454  nop
  03bc458  ori 3, 31, 0
  03bc45c  bl 0xefb38
  03bc460  nop
  03bc464  ld 0, 336(1)
  03bc468  mtlr 0
  03bc46c  lfd 30, 304(1)
  03bc470  lfd 31, 312(1)
  03bc474  ld 26, 256(1)
  03bc478  ld 27, 264(1)
  03bc47c  ld 28, 272(1)
  03bc480  ld 29, 280(1)
  03bc484  ld 30, 288(1)
  03bc488  ld 31, 296(1)
  03bc48c  addi 1, 1, 320
  03bc490  blr
