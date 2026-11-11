# game/update/moby181.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M181_002bbc28:   # 0x2bbc28, 0x130 bytes
  02bbc28  stdu 1, -160(1)
  02bbc2c  mflr 0
  02bbc30  std 0, 176(1)
  02bbc34  std 31, 152(1)
  02bbc38  ori 31, 3, 0
  02bbc3c  std 30, 144(1)
  02bbc40  lis 3, 44
  02bbc44  addi 30, 3, -17384
  02bbc48  std 29, 136(1)
  02bbc4c  ori 3, 31, 0
  02bbc50  lwz 29, 120(31)
  02bbc54  std 28, 128(1)
  02bbc58  std 27, 120(1)
  02bbc5c  std 26, 112(1)
  02bbc60  ori 4, 29, 0
  02bbc64  bl 0x175644
  02bbc68  nop
  02bbc6c  lis 3, 114
  02bbc70  lfs 1, 0(30)
  02bbc74  lis 6, 114
  02bbc78  li 5, 0
  02bbc7c  li 7, 255
  02bbc80  lfs 2, -3048(3)
  02bbc84  lis 3, 114
  02bbc88  fmuls 1, 2, 1
  02bbc8c  li 8, 8
  02bbc90  li 9, 4
  02bbc94  li 11, 5
  02bbc98  li 12, 7
  02bbc9c  li 27, 6
  02bbca0  li 10, 1
  02bbca4  li 28, 3
  02bbca8  li 26, 2
  02bbcac  ori 4, 29, 0
  02bbcb0  stfs 1, 220(29)
  02bbcb4  lfs 1, 4(30)
  02bbcb8  lfs 3, -3060(3)
  02bbcbc  fmuls 1, 3, 1
  02bbcc0  ori 3, 31, 0
  02bbcc4  lis 31, 16000
  02bbcc8  stfs 1, 204(29)
  02bbccc  lfs 1, 8(30)
  02bbcd0  fmuls 1, 3, 1
  02bbcd4  stfs 1, 208(29)
  02bbcd8  lfs 1, 12(30)
  02bbcdc  lfs 3, -3064(6)
  02bbce0  stfs 2, 196(29)
  02bbce4  stb 5, 176(29)
  02bbce8  stb 5, 177(29)
  02bbcec  fmuls 1, 3, 1
  02bbcf0  stb 7, 178(29)
  02bbcf4  stb 5, 179(29)
  02bbcf8  stb 8, 180(29)
  02bbcfc  stb 8, 181(29)
  02bbd00  stb 9, 240(29)
  02bbd04  stb 11, 241(29)
  02bbd08  stb 12, 243(29)
  02bbd0c  stb 27, 242(29)
  02bbd10  stb 5, 416(29)
  02bbd14  stb 10, 417(29)
  02bbd18  stb 28, 419(29)
  02bbd1c  stb 26, 418(29)
  02bbd20  stw 31, 224(29)
  02bbd24  stfs 1, 212(29)
  02bbd28  bl 0x175688
  02bbd2c  nop
  02bbd30  ld 0, 176(1)
  02bbd34  mtlr 0
  02bbd38  ld 26, 112(1)
  02bbd3c  ld 27, 120(1)
  02bbd40  ld 28, 128(1)
  02bbd44  ld 29, 136(1)
  02bbd48  ld 30, 144(1)
  02bbd4c  ld 31, 152(1)
  02bbd50  addi 1, 1, 160
  02bbd54  blr

UpdateMoby_181:   # 0x2bbd68, 0x470 bytes
  02bbd68  stdu 1, -176(1)
  02bbd6c  mflr 0
  02bbd70  std 0, 192(1)
  02bbd74  std 31, 168(1)
  02bbd78  ori 31, 3, 0
  02bbd7c  lis 4, 1
  02bbd80  std 30, 160(1)
  02bbd84  li 5, 0
  02bbd88  lwz 30, 120(31)
  02bbd8c  bl 0x10675c
  02bbd90  nop
  02bbd94  cmpwi 3, 0
  02bbd98  bt 2, 0x2bbfd4
  02bbd9c  lbz 3, 32(31)
  02bbda0  cmpwi 3, 4
  02bbda4  bt 2, 0x2bbfd4
  02bbda8  li 5, 1
  02bbdac  lis 4, 15820
  02bbdb0  lis 3, 15363
  02bbdb4  ori 4, 4, 52429
  02bbdb8  lis 6, 14851
  02bbdbc  stw 5, 676(30)
  02bbdc0  ori 3, 3, 4719
  02bbdc4  ori 5, 6, 4719
  02bbdc8  li 7, 0
  02bbdcc  stw 4, 664(30)
  02bbdd0  lis 6, 151
  02bbdd4  li 8, 4
  02bbdd8  stw 3, 656(30)
  02bbddc  addic 3, 6, -25376
  02bbde0  stw 5, 660(30)
  02bbde4  stw 4, 668(30)
  02bbde8  stb 7, 701(30)
  02bbdec  stb 8, 32(31)
  02bbdf0  lfs 1, 16(31)
  02bbdf4  lfs 2, 128(3)
  02bbdf8  lfs 3, 20(31)
  02bbdfc  lfs 4, 132(3)
  02bbe00  fsubs 1, 1, 2
  02bbe04  lis 3, 44
  02bbe08  fsubs 2, 3, 4
  02bbe0c  addi 3, 3, -17064
  02bbe10  lis 5, 115
  02bbe14  addic 4, 30, 640
  02bbe18  addic 5, 5, 22784
  02bbe1c  fabs 5, 1
  02bbe20  fabs 4, 2
  02bbe24  stfs 1, 112(1)
  02bbe28  stfs 2, 116(1)
  02bbe2c  fsubs 1, 5, 4
  02bbe30  stfs 1, 120(1)
  02bbe34  lwz 6, 112(1)
  02bbe38  lfs 1, 0(3)
  02bbe3c  lfs 2, 112(1)
  02bbe40  lwz 3, 116(1)
  02bbe44  lfs 3, 116(1)
  02bbe48  lwz 7, 120(1)
  02bbe4c  rlwinm 3, 3, 3, 29, 29
  02bbe50  fabs 6, 3
  02bbe54  lfs 3, 120(1)
  02bbe58  fabs 2, 2
  02bbe5c  rlwimi 3, 7, 2, 30, 30
  02bbe60  fsub 7, 3, 1
  02bbe64  rlwimi 3, 6, 4, 28, 28
  02bbe68  fsub 8, 3, 1
  02bbe6c  ori 6, 5, 0
  02bbe70  rlwimi 6, 3, 2, 26, 28
  02bbe74  slwi 3, 3, 2
  02bbe78  clrldi 6, 6, 32
  02bbe7c  fsel 4, 7, 2, 4
  02bbe80  lfsx 3, 5, 3
  02bbe84  lfs 2, 4(6)
  02bbe88  fsel 5, 8, 6, 5
  02bbe8c  fcmpu 0, 4, 1
  02bbe90  bt 1, 0x2bbe98
  02bbe94  b 0x2bbfbc
  02bbe98  fsubs 6, 5, 4
  02bbe9c  fadds 4, 5, 4
  02bbea0  addic 7, 1, 16
  02bbea4  li 3, 2
  02bbea8  addic 6, 7, 108
  02bbeac  addic 5, 7, 124
  02bbeb0  mtctr 3
  02bbeb4  fdivs 4, 6, 4
  02bbeb8  fmuls 6, 4, 4
  02bbebc  stfs 4, 136(1)
  02bbec0  stfs 4, 128(1)
  02bbec4  stfs 4, 132(1)
  02bbec8  stfs 4, 124(1)
  02bbecc  lfs 7, 136(1)
  02bbed0  lfs 8, 128(1)
  02bbed4  lfs 9, 132(1)
  02bbed8  fmuls 4, 6, 6
  02bbedc  fmuls 8, 8, 6
  02bbee0  fmuls 7, 7, 4
  02bbee4  fmuls 5, 4, 4
  02bbee8  fmuls 4, 9, 4
  02bbeec  stfs 8, 128(1)
  02bbef0  fmuls 6, 7, 6
  02bbef4  stfs 4, 132(1)
  02bbef8  stfs 6, 136(1)
  02bbefc  lfs 4, 108(7)
  02bbf00  fmuls 4, 4, 5
  02bbf04  stfs 4, 124(7)
  02bbf08  lfs 4, 4(6)
  02bbf0c  addic 7, 7, 8
  02bbf10  addic 6, 6, 8
  02bbf14  fmuls 4, 4, 5
  02bbf18  stfs 4, 4(5)
  02bbf1c  addic 5, 5, 8
  02bbf20  bdnz 0x2bbefc
  02bbf24  ori 8, 1, 0
  02bbf28  lis 7, 115
  02bbf2c  li 9, 4
  02bbf30  addic 6, 8, 124
  02bbf34  addic 7, 7, 22752
  02bbf38  ori 5, 6, 0
  02bbf3c  mtctr 9
  02bbf40  lfs 4, 124(8)
  02bbf44  lfs 5, 0(7)
  02bbf48  fmuls 4, 4, 5
  02bbf4c  lfs 5, 4(7)
  02bbf50  addic 7, 7, 8
  02bbf54  stfs 4, 124(8)
  02bbf58  lfs 4, 4(6)
  02bbf5c  addic 8, 8, 8
  02bbf60  fmuls 4, 4, 5
  02bbf64  stfs 4, 4(6)
  02bbf68  addic 6, 6, 8
  02bbf6c  bdnz 0x2bbf40
  02bbf70  ori 6, 3, 0
  02bbf74  ori 3, 1, 0
  02bbf78  mtctr 6
  02bbf7c  lfs 4, 124(3)
  02bbf80  fadds 1, 1, 4
  02bbf84  addic 3, 3, 16
  02bbf88  lfs 4, 4(5)
  02bbf8c  lfs 5, 8(5)
  02bbf90  lfs 6, 12(5)
  02bbf94  addic 5, 5, 16
  02bbf98  fadds 1, 1, 4
  02bbf9c  fadds 1, 1, 5
  02bbfa0  fadds 1, 1, 6
  02bbfa4  bdnz 0x2bbf7c
  02bbfa8  lis 3, 44
  02bbfac  addi 3, 3, -17064
  02bbfb0  lfs 4, 4(3)
  02bbfb4  fadds 1, 1, 4
  02bbfb8  fmadds 1, 1, 3, 2
  02bbfbc  ori 3, 31, 0
  02bbfc0  li 6, 3
  02bbfc4  li 7, 3
  02bbfc8  li 8, 0
  02bbfcc  bl 0x10ad80
  02bbfd0  nop
  02bbfd4  li 3, 255
  02bbfd8  lbz 4, 32(31)
  02bbfdc  cmpwi 4, 4
  02bbfe0  stb 3, 164(31)
  02bbfe4  cmpwi 1, 4, 0
  02bbfe8  cmpwi 6, 4, 1
  02bbfec  cmpwi 7, 4, 3
  02bbff0  bt 2, 0x2bc194
  02bbff4  bt 30, 0x2bc094
  02bbff8  bt 26, 0x2bc0f4
  02bbffc  bf 6, 0x2bc1c0
  02bc000  lis 3, 151
  02bc004  lfs 1, 20(31)
  02bc008  addic 3, 3, -25376
  02bc00c  lwz 3, 8320(3)
  02bc010  lfs 2, 16(31)
  02bc014  lfs 3, 20(3)
  02bc018  lfs 4, 16(3)
  02bc01c  fsubs 1, 3, 1
  02bc020  fsubs 2, 4, 2
  02bc024  fmuls 1, 1, 1
  02bc028  fmadds 1, 2, 2, 1
  02bc02c  lfs 2, 736(30)
  02bc030  fsqrts 1, 1
  02bc034  fcmpu 0, 1, 2
  02bc038  cror 6, 1, 2
  02bc03c  bt 6, 0x2bc1c0
  02bc040  lwz 3, 612(30)
  02bc044  cmpwi 3, -1
  02bc048  bt 2, 0x2bc058
  02bc04c  addic 3, 30, 592
  02bc050  bl 0x136724
  02bc054  nop
  02bc058  ori 3, 31, 0
  02bc05c  bl 0x2bbc28
  02bc060  ori 3, 31, 0
  02bc064  ori 4, 30, 0
  02bc068  bl 0x17aa48
  02bc06c  nop
  02bc070  ori 3, 31, 0
  02bc074  li 4, 1
  02bc078  li 5, 0
  02bc07c  li 6, 1
  02bc080  bl 0xfddc0
  02bc084  nop
  02bc088  li 3, 1
  02bc08c  stb 3, 32(31)
  02bc090  b 0x2bc1c0
  02bc094  lis 3, 151
  02bc098  lfs 1, 20(31)
  02bc09c  lfs 2, 16(31)
  02bc0a0  addic 3, 3, -25376
  02bc0a4  lfs 3, 132(3)
  02bc0a8  lfs 4, 128(3)
  02bc0ac  fsubs 1, 1, 3
  02bc0b0  fsubs 2, 2, 4
  02bc0b4  fmuls 1, 1, 1
  02bc0b8  fmadds 1, 2, 2, 1
  02bc0bc  lfs 2, 736(30)
  02bc0c0  fsqrts 1, 1
  02bc0c4  fcmpu 0, 1, 2
  02bc0c8  cror 6, 1, 2
  02bc0cc  bt 6, 0x2bc1c0
  02bc0d0  li 7, 1
  02bc0d4  ori 3, 31, 0
  02bc0d8  li 4, 1
  02bc0dc  li 5, 0
  02bc0e0  li 6, 1
  02bc0e4  stb 7, 32(31)
  02bc0e8  bl 0xfddc0
  02bc0ec  nop
  02bc0f0  b 0x2bc1c0
  02bc0f4  lwz 3, 612(30)
  02bc0f8  cmpwi 3, -1
  02bc0fc  bt 2, 0x2bc12c
  02bc100  lis 3, 44
  02bc104  lis 6, 114
  02bc108  addi 5, 3, -17064
  02bc10c  addic 4, 30, 592
  02bc110  ori 3, 31, 0
  02bc114  lfs 1, 8(5)
  02bc118  lfs 2, -3052(6)
  02bc11c  ori 5, 30, 0
  02bc120  fmuls 1, 2, 1
  02bc124  bl 0x136890
  02bc128  nop
  02bc12c  lis 3, 151
  02bc130  lfs 1, 20(31)
  02bc134  lfs 2, 16(31)
  02bc138  addic 3, 3, -25376
  02bc13c  lfs 3, 132(3)
  02bc140  lfs 4, 128(3)
  02bc144  fsubs 1, 1, 3
  02bc148  fsubs 2, 2, 4
  02bc14c  lis 3, 44
  02bc150  addi 3, 3, -17064
  02bc154  fmuls 1, 1, 1
  02bc158  fmadds 1, 2, 2, 1
  02bc15c  lfs 2, 12(3)
  02bc160  fsqrts 1, 1
  02bc164  fcmpu 0, 1, 2
  02bc168  cror 6, 0, 2
  02bc16c  bt 6, 0x2bc1c0
  02bc170  li 7, 3
  02bc174  ori 3, 31, 0
  02bc178  li 4, 0
  02bc17c  li 5, 0
  02bc180  li 6, 1
  02bc184  stb 7, 32(31)
  02bc188  bl 0xfddc0
  02bc18c  nop
  02bc190  b 0x2bc1c0
  02bc194  ori 3, 31, 0
  02bc198  addic 4, 30, 640
  02bc19c  bl 0x10b030
  02bc1a0  nop
  02bc1a4  rlwinm 3, 3, 0, 25, 25
  02bc1a8  cmpwi 3, 0
  02bc1ac  bt 2, 0x2bc1c0
  02bc1b0  ori 3, 31, 0
  02bc1b4  bl 0xefb38
  02bc1b8  nop
  02bc1bc  b 0x2bc1c0
  02bc1c0  ld 0, 192(1)
  02bc1c4  mtlr 0
  02bc1c8  ld 30, 160(1)
  02bc1cc  ld 31, 168(1)
  02bc1d0  addi 1, 1, 176
  02bc1d4  blr
