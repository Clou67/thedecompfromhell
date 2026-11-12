# game/update/moby229.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M229_002fbcb8:   # 0x2fbcb8, 0x160 bytes
  02fbcb8  lis 3, 48
  02fbcbc  vspltisw 2, -1
  02fbcc0  lis 4, 114
  02fbcc4  addi 3, 3, -17260
  02fbcc8  li 5, -3056
  02fbccc  vslw 2, 2, 2
  02fbcd0  li 6, 4
  02fbcd4  lvlx 3, 0, 3
  02fbcd8  lvlx 4, 5, 4
  02fbcdc  vspltw 3, 3, 0
  02fbce0  lis 4, 268
  02fbce4  li 5, -19384
  02fbce8  vmaddfp 2, 4, 3, 2
  02fbcec  vspltisw 3, -1
  02fbcf0  lis 7, 268
  02fbcf4  li 8, -19380
  02fbcf8  vslw 3, 3, 3
  02fbcfc  li 9, 24
  02fbd00  lis 10, 114
  02fbd04  lis 12, 114
  02fbd08  vctsxs 2, 2, 0
  02fbd0c  li 11, -19352
  02fbd10  vspltw 2, 2, 0
  02fbd14  stvewx 2, 5, 4
  02fbd18  lvlx 2, 6, 3
  02fbd1c  li 4, 20
  02fbd20  vspltw 2, 2, 0
  02fbd24  lis 5, 268
  02fbd28  li 6, -19360
  02fbd2c  vmaddfp 2, 4, 2, 3
  02fbd30  vspltisw 3, -1
  02fbd34  vslw 3, 3, 3
  02fbd38  vctsxs 2, 2, 0
  02fbd3c  vspltw 2, 2, 0
  02fbd40  stvewx 2, 8, 7
  02fbd44  lvlx 2, 4, 3
  02fbd48  vspltw 2, 2, 0
  02fbd4c  lis 4, 128
  02fbd50  lfs 1, 8(3)
  02fbd54  lis 7, 1
  02fbd58  lfs 2, 12(3)
  02fbd5c  addic 4, 4, -3856
  02fbd60  lfs 3, 16(3)
  02fbd64  vmaddfp 2, 4, 2, 3
  02fbd68  vspltisw 3, -1
  02fbd6c  lis 8, 268
  02fbd70  vslw 3, 3, 3
  02fbd74  vctsxs 2, 2, 0
  02fbd78  vspltw 2, 2, 0
  02fbd7c  stvewx 2, 6, 5
  02fbd80  lvlx 2, 9, 3
  02fbd84  lis 5, 268
  02fbd88  stw 7, 72(4)
  02fbd8c  lis 6, 268
  02fbd90  vspltw 2, 2, 0
  02fbd94  lis 9, 268
  02fbd98  lfs 4, -3064(10)
  02fbd9c  lis 7, 268
  02fbda0  lfs 5, -3060(12)
  02fbda4  li 4, 28
  02fbda8  fmuls 1, 4, 1
  02fbdac  vmaddfp 2, 4, 2, 3
  02fbdb0  fmuls 2, 5, 2
  02fbdb4  vspltisw 3, -1
  02fbdb8  fmuls 3, 4, 3
  02fbdbc  vslw 3, 3, 3
  02fbdc0  stfs 1, -19376(5)
  02fbdc4  vctsxs 2, 2, 0
  02fbdc8  stfs 2, -19372(6)
  02fbdcc  lis 5, 268
  02fbdd0  stfs 2, -19364(9)
  02fbdd4  stfs 3, -19368(7)
  02fbdd8  vspltw 2, 2, 0
  02fbddc  stvewx 2, 11, 8
  02fbde0  lvlx 2, 4, 3
  02fbde4  lis 3, 268
  02fbde8  vspltw 2, 2, 0
  02fbdec  lis 4, 268
  02fbdf0  stfs 3, -19356(5)
  02fbdf4  lis 5, 268
  02fbdf8  vmaddfp 2, 4, 2, 3
  02fbdfc  stfs 3, -19348(3)
  02fbe00  li 3, -19340
  02fbe04  stfs 3, -19344(4)
  02fbe08  vctsxs 2, 2, 0
  02fbe0c  vspltw 2, 2, 0
  02fbe10  stvewx 2, 3, 5
  02fbe14  blr

M229_002fbe58:   # 0x2fbe58, 0x548 bytes
  02fbe58  stdu 1, -224(1)
  02fbe5c  mflr 0
  02fbe60  std 0, 240(1)
  02fbe64  stfd 29, 200(1)
  02fbe68  stfd 30, 208(1)
  02fbe6c  stfd 31, 216(1)
  02fbe70  fmr 31, 1
  02fbe74  lfs 1, 4(3)
  02fbe78  lfs 4, 4(4)
  02fbe7c  lfs 29, 0(3)
  02fbe80  fsubs 7, 1, 4
  02fbe84  lfs 2, 0(4)
  02fbe88  lfs 5, 8(3)
  02fbe8c  fsubs 8, 29, 2
  02fbe90  lfs 6, 8(4)
  02fbe94  std 31, 192(1)
  02fbe98  fsubs 9, 5, 6
  02fbe9c  std 30, 184(1)
  02fbea0  ori 31, 3, 0
  02fbea4  ori 30, 5, 0
  02fbea8  fmuls 7, 7, 7
  02fbeac  fmadds 7, 8, 8, 7
  02fbeb0  fmadds 7, 9, 9, 7
  02fbeb4  fsqrts 7, 7
  02fbeb8  fcmpu 0, 7, 3
  02fbebc  std 29, 176(1)
  02fbec0  cror 6, 0, 2
  02fbec4  bt 6, 0x2fbf4c
  02fbec8  fsubs 4, 4, 1
  02fbecc  fsubs 2, 2, 29
  02fbed0  fsubs 6, 6, 5
  02fbed4  lis 3, 48
  02fbed8  addi 3, 3, -16872
  02fbedc  fmuls 7, 4, 4
  02fbee0  lfs 8, 0(3)
  02fbee4  fsubs 8, 3, 8
  02fbee8  lfs 9, 4(3)
  02fbeec  fmadds 7, 2, 2, 7
  02fbef0  lfs 3, 12(4)
  02fbef4  fmadds 7, 6, 6, 7
  02fbef8  fsqrts 7, 7
  02fbefc  fdivs 8, 8, 7
  02fbf00  fsub 10, 9, 7
  02fbf04  fsub 11, 9, 7
  02fbf08  fsub 12, 9, 7
  02fbf0c  fsub 13, 7, 9
  02fbf10  fsub 0, 7, 9
  02fbf14  fsub 7, 7, 9
  02fbf18  fmuls 6, 6, 8
  02fbf1c  fmuls 4, 4, 8
  02fbf20  fmuls 2, 2, 8
  02fbf24  fsel 8, 10, 9, 6
  02fbf28  fsel 10, 11, 9, 4
  02fbf2c  fsel 9, 12, 9, 2
  02fbf30  fsel 6, 13, 8, 6
  02fbf34  fsel 4, 0, 10, 4
  02fbf38  fsel 2, 7, 9, 2
  02fbf3c  fadds 6, 6, 5
  02fbf40  fadds 4, 4, 1
  02fbf44  fadds 2, 2, 29
  02fbf48  b 0x2fbf50
  02fbf4c  lfs 3, 12(4)
  02fbf50  fsubs 5, 2, 29
  02fbf54  stfs 3, 124(1)
  02fbf58  fsubs 1, 4, 1
  02fbf5c  lis 3, 48
  02fbf60  addi 3, 3, -16872
  02fbf64  lis 4, 115
  02fbf68  addic 4, 4, 22784
  02fbf6c  fabs 3, 5
  02fbf70  fabs 7, 1
  02fbf74  stfs 5, 128(1)
  02fbf78  stfs 2, 112(1)
  02fbf7c  stfs 4, 116(1)
  02fbf80  stfs 6, 120(1)
  02fbf84  stfs 1, 132(1)
  02fbf88  fsubs 1, 3, 7
  02fbf8c  stfs 1, 136(1)
  02fbf90  lwz 5, 128(1)
  02fbf94  lfs 29, 4(3)
  02fbf98  lfs 1, 128(1)
  02fbf9c  lwz 3, 132(1)
  02fbfa0  fabs 4, 1
  02fbfa4  lfs 1, 132(1)
  02fbfa8  lwz 6, 136(1)
  02fbfac  rlwinm 3, 3, 3, 29, 29
  02fbfb0  fabs 5, 1
  02fbfb4  lfs 1, 136(1)
  02fbfb8  rlwimi 3, 6, 2, 30, 30
  02fbfbc  fsub 2, 1, 29
  02fbfc0  rlwimi 3, 5, 4, 28, 28
  02fbfc4  fsub 6, 1, 29
  02fbfc8  ori 5, 4, 0
  02fbfcc  rlwimi 5, 3, 2, 26, 28
  02fbfd0  slwi 3, 3, 2
  02fbfd4  clrldi 5, 5, 32
  02fbfd8  fsel 4, 2, 4, 7
  02fbfdc  lfsx 1, 4, 3
  02fbfe0  lfs 2, 4(5)
  02fbfe4  fsel 3, 6, 5, 3
  02fbfe8  fcmpu 0, 4, 29
  02fbfec  bt 1, 0x2fbff8
  02fbff0  fmr 30, 29
  02fbff4  b 0x2fc11c
  02fbff8  fsubs 5, 3, 4
  02fbffc  fadds 3, 3, 4
  02fc000  addic 3, 1, 16
  02fc004  li 6, 2
  02fc008  addic 4, 3, 124
  02fc00c  addic 5, 3, 140
  02fc010  mtctr 6
  02fc014  fdivs 3, 5, 3
  02fc018  fmuls 4, 3, 3
  02fc01c  stfs 3, 152(1)
  02fc020  stfs 3, 144(1)
  02fc024  stfs 3, 148(1)
  02fc028  stfs 3, 140(1)
  02fc02c  lfs 6, 152(1)
  02fc030  lfs 7, 144(1)
  02fc034  lfs 8, 148(1)
  02fc038  fmuls 5, 4, 4
  02fc03c  fmuls 7, 7, 4
  02fc040  fmuls 6, 6, 5
  02fc044  fmuls 3, 5, 5
  02fc048  fmuls 5, 8, 5
  02fc04c  stfs 7, 144(1)
  02fc050  fmuls 4, 6, 4
  02fc054  stfs 5, 148(1)
  02fc058  stfs 4, 152(1)
  02fc05c  lfs 4, 124(3)
  02fc060  fmuls 4, 4, 3
  02fc064  stfs 4, 140(3)
  02fc068  lfs 4, 4(4)
  02fc06c  addic 3, 3, 8
  02fc070  addic 4, 4, 8
  02fc074  fmuls 4, 4, 3
  02fc078  stfs 4, 4(5)
  02fc07c  addic 5, 5, 8
  02fc080  bdnz 0x2fc05c
  02fc084  li 5, 4
  02fc088  ori 3, 1, 0
  02fc08c  mtctr 5
  02fc090  lis 4, 115
  02fc094  addic 5, 3, 140
  02fc098  addic 4, 4, 22752
  02fc09c  ori 7, 5, 0
  02fc0a0  lfs 3, 140(3)
  02fc0a4  lfs 4, 0(4)
  02fc0a8  fmuls 3, 3, 4
  02fc0ac  lfs 4, 4(4)
  02fc0b0  addic 4, 4, 8
  02fc0b4  stfs 3, 140(3)
  02fc0b8  lfs 3, 4(5)
  02fc0bc  addic 3, 3, 8
  02fc0c0  fmuls 3, 3, 4
  02fc0c4  stfs 3, 4(5)
  02fc0c8  addic 5, 5, 8
  02fc0cc  bdnz 0x2fc0a0
  02fc0d0  fmr 30, 29
  02fc0d4  ori 3, 1, 0
  02fc0d8  mtctr 6
  02fc0dc  lfs 3, 140(3)
  02fc0e0  lfs 4, 4(7)
  02fc0e4  fadds 3, 30, 3
  02fc0e8  lfs 5, 8(7)
  02fc0ec  addic 3, 3, 16
  02fc0f0  lfs 30, 12(7)
  02fc0f4  addic 7, 7, 16
  02fc0f8  fadds 3, 3, 4
  02fc0fc  fadds 3, 3, 5
  02fc100  fadds 30, 3, 30
  02fc104  bdnz 0x2fc0dc
  02fc108  lis 3, 48
  02fc10c  addi 3, 3, -16872
  02fc110  lfs 3, 8(3)
  02fc114  fadds 30, 30, 3
  02fc118  fmadds 30, 30, 1, 2
  02fc11c  lis 3, 151
  02fc120  fmr 2, 30
  02fc124  addic 29, 3, -25376
  02fc128  lfs 1, 152(29)
  02fc12c  bl 0x5026a0
  02fc130  nop
  02fc134  fmr 5, 1
  02fc138  lis 3, 48
  02fc13c  addi 3, 3, -16872
  02fc140  lfs 6, 12(3)
  02fc144  lfs 2, 152(29)
  02fc148  fcmpu 0, 5, 6
  02fc14c  lfs 1, 16(3)
  02fc150  lfs 3, 0(31)
  02fc154  lfs 4, 4(31)
  02fc158  bt 1, 0x2fc184
  02fc15c  lfs 5, 116(1)
  02fc160  lfs 6, 112(1)
  02fc164  fsubs 5, 4, 5
  02fc168  fsubs 6, 3, 6
  02fc16c  fmuls 5, 5, 5
  02fc170  fmadds 5, 6, 6, 5
  02fc174  fsqrts 5, 5
  02fc178  fcmpu 0, 5, 1
  02fc17c  cror 6, 1, 2
  02fc180  bt 6, 0x2fc238
  02fc184  fmr 30, 2
  02fc188  lis 3, 48
  02fc18c  addi 3, 3, -16872
  02fc190  lfs 2, 20(3)
  02fc194  lfs 5, 24(3)
  02fc198  fadds 2, 30, 2
  02fc19c  lfs 6, 28(3)
  02fc1a0  fsubs 7, 5, 30
  02fc1a4  fsubs 5, 5, 2
  02fc1a8  fsub 9, 30, 7
  02fc1ac  fsubs 8, 6, 2
  02fc1b0  fsubs 6, 6, 30
  02fc1b4  fsub 10, 2, 5
  02fc1b8  fsel 7, 9, 7, 30
  02fc1bc  fsel 2, 10, 5, 2
  02fc1c0  fsub 9, 6, 7
  02fc1c4  lfs 5, 32(3)
  02fc1c8  fsub 10, 8, 2
  02fc1cc  fsel 6, 9, 6, 7
  02fc1d0  lfs 7, 36(3)
  02fc1d4  fsel 2, 10, 8, 2
  02fc1d8  fmuls 9, 6, 6
  02fc1dc  lfs 8, 40(3)
  02fc1e0  lfs 12, 44(3)
  02fc1e4  fmuls 10, 2, 2
  02fc1e8  fmuls 11, 9, 6
  02fc1ec  fmuls 13, 10, 2
  02fc1f0  fmuls 0, 9, 11
  02fc1f4  fmadds 6, 11, 5, 6
  02fc1f8  fmuls 11, 10, 13
  02fc1fc  fmadds 2, 13, 5, 2
  02fc200  fmuls 5, 9, 0
  02fc204  fmadds 6, 0, 7, 6
  02fc208  fmuls 13, 10, 11
  02fc20c  fmadds 2, 11, 7, 2
  02fc210  fmuls 7, 9, 5
  02fc214  fmadds 5, 5, 8, 6
  02fc218  fmuls 6, 10, 13
  02fc21c  fmadds 2, 13, 8, 2
  02fc220  fmadds 5, 7, 12, 5
  02fc224  fmadds 2, 6, 12, 2
  02fc228  fmadds 4, 5, 1, 4
  02fc22c  fmadds 1, 2, 1, 3
  02fc230  stfs 4, 116(1)
  02fc234  stfs 1, 112(1)
  02fc238  lis 3, 48
  02fc23c  addi 3, 3, -16872
  02fc240  lis 4, 114
  02fc244  lfs 1, 20(3)
  02fc248  lfs 2, 24(3)
  02fc24c  fadds 1, 30, 1
  02fc250  fsubs 4, 2, 30
  02fc254  lfs 3, 28(3)
  02fc258  fsubs 5, 3, 30
  02fc25c  li 7, 0
  02fc260  fsubs 2, 2, 1
  02fc264  fsub 6, 30, 4
  02fc268  fsubs 3, 3, 1
  02fc26c  fsub 7, 1, 2
  02fc270  fsel 4, 6, 4, 30
  02fc274  lfs 6, 32(3)
  02fc278  fsel 1, 7, 2, 1
  02fc27c  fsub 2, 5, 4
  02fc280  fsub 8, 3, 1
  02fc284  fsel 2, 2, 5, 4
  02fc288  lfs 4, 36(3)
  02fc28c  lfs 5, 48(3)
  02fc290  lfs 30, -3052(4)
  02fc294  lfs 7, 40(3)
  02fc298  fmuls 30, 30, 5
  02fc29c  addic 4, 1, 112
  02fc2a0  fsel 1, 8, 3, 1
  02fc2a4  fmuls 3, 2, 2
  02fc2a8  fmuls 8, 1, 1
  02fc2ac  fmuls 9, 3, 2
  02fc2b0  fmuls 5, 8, 1
  02fc2b4  fmuls 11, 3, 9
  02fc2b8  fmadds 2, 9, 6, 2
  02fc2bc  lfs 9, 44(3)
  02fc2c0  li 3, 0
  02fc2c4  stw 3, 8(30)
  02fc2c8  fmuls 10, 8, 5
  02fc2cc  fmadds 1, 5, 6, 1
  02fc2d0  fmuls 5, 3, 11
  02fc2d4  fmadds 2, 11, 4, 2
  02fc2d8  ori 3, 31, 0
  02fc2dc  fmuls 6, 8, 10
  02fc2e0  fmadds 1, 10, 4, 1
  02fc2e4  fmuls 3, 3, 5
  02fc2e8  fmadds 2, 5, 7, 2
  02fc2ec  fmuls 4, 8, 6
  02fc2f0  fmadds 1, 6, 7, 1
  02fc2f4  fmadds 3, 3, 9, 2
  02fc2f8  fneg 2, 31
  02fc2fc  fmadds 4, 4, 9, 1
  02fc300  fmr 1, 30
  02fc304  fmuls 3, 3, 30
  02fc308  fmuls 4, 4, 30
  02fc30c  stfs 3, 4(30)
  02fc310  stfs 4, 0(30)
  02fc314  bl 0x108180
  02fc318  nop
  02fc31c  lis 3, 150
  02fc320  stfs 1, 8(30)
  02fc324  li 4, 5
  02fc328  addic 3, 3, 19008
  02fc32c  lwz 3, 160(3)
  02fc330  and 3, 3, 4
  02fc334  cmpwi 3, 0
  02fc338  bt 2, 0x2fc348
  02fc33c  lis 3, 48
  02fc340  addi 3, 3, -16872
  02fc344  lfs 29, 52(3)
  02fc348  lis 3, 48
  02fc34c  addi 3, 3, -16872
  02fc350  lfs 2, 56(3)
  02fc354  fadds 2, 29, 2
  02fc358  lfs 3, 60(3)
  02fc35c  fdivs 2, 2, 30
  02fc360  fmuls 31, 31, 2
  02fc364  fmuls 31, 31, 3
  02fc368  fcmpu 0, 1, 31
  02fc36c  cror 6, 0, 2
  02fc370  bt 6, 0x2fc378
  02fc374  stfs 31, 8(30)
  02fc378  ld 0, 240(1)
  02fc37c  mtlr 0
  02fc380  lfd 29, 200(1)
  02fc384  lfd 30, 208(1)
  02fc388  lfd 31, 216(1)
  02fc38c  ld 29, 176(1)
  02fc390  ld 30, 184(1)
  02fc394  ld 31, 192(1)
  02fc398  addi 1, 1, 224
  02fc39c  blr

M229_002fc3f8:   # 0x2fc3f8, 0xf84 bytes
  02fc3f8  stdu 1, -720(1)
  02fc3fc  mflr 0
  02fc400  std 0, 736(1)
  02fc404  stfd 16, 592(1)
  02fc408  stfd 17, 600(1)
  02fc40c  stfd 18, 608(1)
  02fc410  stfd 19, 616(1)
  02fc414  stfd 20, 624(1)
  02fc418  stfd 21, 632(1)
  02fc41c  stfd 22, 640(1)
  02fc420  stfd 23, 648(1)
  02fc424  stfd 24, 656(1)
  02fc428  stfd 25, 664(1)
  02fc42c  stfd 26, 672(1)
  02fc430  stfd 27, 680(1)
  02fc434  stfd 28, 688(1)
  02fc438  stfd 29, 696(1)
  02fc43c  stfd 30, 704(1)
  02fc440  stfd 31, 712(1)
  02fc444  std 29, 568(1)
  02fc448  std 28, 560(1)
  02fc44c  lis 7, 0
  02fc450  ori 29, 4, 0
  02fc454  std 30, 576(1)
  02fc458  std 24, 528(1)
  02fc45c  li 28, 720
  02fc460  lis 30, 149
  02fc464  std 27, 552(1)
  02fc468  addc 24, 1, 28
  02fc46c  addic 27, 1, 160
  02fc470  std 31, 584(1)
  02fc474  addic 30, 30, 5056
  02fc478  ori 31, 3, 0
  02fc47c  ori 3, 27, 0
  02fc480  std 5, 64(24)
  02fc484  ori 4, 30, 0
  02fc488  std 6, 72(24)
  02fc48c  std 26, 544(1)
  02fc490  std 25, 536(1)
  02fc494  addic 28, 28, 64
  02fc498  bl 0x500fa8
  02fc49c  nop
  02fc4a0  addic 3, 1, 208
  02fc4a4  ori 4, 27, 0
  02fc4a8  bl 0x5010c0
  02fc4ac  nop
  02fc4b0  lwz 29, 80(29)
  02fc4b4  cmpwi 29, 0
  02fc4b8  bt 2, 0x2fd30c
  02fc4bc  lis 25, 151
  02fc4c0  lis 3, 48
  02fc4c4  addic 25, 25, -25376
  02fc4c8  addi 3, 3, -15456
  02fc4cc  lis 27, 115
  02fc4d0  lwz 4, 1648(25)
  02fc4d4  lwz 5, 1652(25)
  02fc4d8  lfs 1, 1648(25)
  02fc4dc  lfs 2, 1652(25)
  02fc4e0  fabs 3, 1
  02fc4e4  lfs 27, 0(3)
  02fc4e8  fabs 5, 2
  02fc4ec  lwz 29, 120(29)
  02fc4f0  lfs 26, 4(3)
  02fc4f4  lfs 25, 8(3)
  02fc4f8  lfs 31, 1600(25)
  02fc4fc  rlwinm 5, 5, 3, 29, 29
  02fc500  addic 27, 27, 22784
  02fc504  fsubs 1, 3, 5
  02fc508  stfs 1, 292(1)
  02fc50c  lfs 30, 1604(25)
  02fc510  lfs 29, 1608(25)
  02fc514  lfs 28, 1612(25)
  02fc518  lfs 16, 12(3)
  02fc51c  lwz 3, 292(1)
  02fc520  lfs 1, 292(1)
  02fc524  rlwimi 5, 3, 2, 30, 30
  02fc528  fsub 4, 1, 26
  02fc52c  ori 3, 27, 0
  02fc530  fsub 6, 1, 26
  02fc534  rlwimi 5, 4, 4, 28, 28
  02fc538  rlwimi 3, 5, 2, 26, 28
  02fc53c  slwi 4, 5, 2
  02fc540  clrldi 3, 3, 32
  02fc544  lfsx 1, 27, 4
  02fc548  fsel 4, 4, 3, 5
  02fc54c  lfs 2, 4(3)
  02fc550  fsel 3, 6, 5, 3
  02fc554  fcmpu 0, 4, 26
  02fc558  bt 1, 0x2fc564
  02fc55c  fmr 1, 26
  02fc560  b 0x2fc67c
  02fc564  fsubs 5, 3, 4
  02fc568  fadds 3, 3, 4
  02fc56c  addic 3, 1, 16
  02fc570  li 7, 2
  02fc574  addic 5, 3, 488
  02fc578  addic 4, 3, 472
  02fc57c  mtctr 7
  02fc580  fdivs 3, 5, 3
  02fc584  fmuls 4, 3, 3
  02fc588  stfs 3, 500(1)
  02fc58c  stfs 3, 492(1)
  02fc590  stfs 3, 496(1)
  02fc594  stfs 3, 488(1)
  02fc598  lfs 6, 500(1)
  02fc59c  lfs 7, 492(1)
  02fc5a0  lfs 8, 496(1)
  02fc5a4  fmuls 5, 4, 4
  02fc5a8  fmuls 7, 7, 4
  02fc5ac  fmuls 6, 6, 5
  02fc5b0  fmuls 3, 5, 5
  02fc5b4  fmuls 5, 8, 5
  02fc5b8  stfs 7, 492(1)
  02fc5bc  fmuls 4, 6, 4
  02fc5c0  stfs 5, 496(1)
  02fc5c4  stfs 4, 500(1)
  02fc5c8  lfs 4, 472(3)
  02fc5cc  fmuls 4, 4, 3
  02fc5d0  stfs 4, 488(3)
  02fc5d4  lfs 4, 4(4)
  02fc5d8  addic 4, 4, 8
  02fc5dc  fmuls 4, 4, 3
  02fc5e0  addic 3, 3, 8
  02fc5e4  stfs 4, 4(5)
  02fc5e8  addic 5, 5, 8
  02fc5ec  bdnz 0x2fc5c8
  02fc5f0  li 5, 4
  02fc5f4  ori 3, 1, 0
  02fc5f8  mtctr 5
  02fc5fc  lis 4, 115
  02fc600  addic 5, 3, 488
  02fc604  addic 4, 4, 22752
  02fc608  ori 6, 5, 0
  02fc60c  lfs 3, 488(3)
  02fc610  lfs 4, 0(4)
  02fc614  fmuls 3, 3, 4
  02fc618  lfs 4, 4(4)
  02fc61c  addic 4, 4, 8
  02fc620  stfs 3, 488(3)
  02fc624  lfs 3, 4(5)
  02fc628  addic 3, 3, 8
  02fc62c  fmuls 3, 3, 4
  02fc630  stfs 3, 4(5)
  02fc634  addic 5, 5, 8
  02fc638  bdnz 0x2fc60c
  02fc63c  ori 3, 1, 0
  02fc640  fmr 3, 26
  02fc644  mtctr 7
  02fc648  lfs 4, 488(3)
  02fc64c  fadds 3, 3, 4
  02fc650  lfs 4, 4(6)
  02fc654  addic 3, 3, 16
  02fc658  lfs 5, 8(6)
  02fc65c  lfs 6, 12(6)
  02fc660  addic 6, 6, 16
  02fc664  fadds 3, 3, 4
  02fc668  fadds 3, 3, 5
  02fc66c  fadds 3, 3, 6
  02fc670  bdnz 0x2fc648
  02fc674  fadds 3, 3, 16
  02fc678  fmadds 1, 3, 1, 2
  02fc67c  fmr 2, 1
  02fc680  fmr 1, 25
  02fc684  bl 0x502578
  02fc688  nop
  02fc68c  lis 3, 48
  02fc690  addi 3, 3, -15456
  02fc694  lfs 24, 16(3)
  02fc698  lfs 23, 20(3)
  02fc69c  fadds 1, 1, 24
  02fc6a0  lfs 22, 24(3)
  02fc6a4  lwz 4, 1648(25)
  02fc6a8  lfs 4, 1648(25)
  02fc6ac  lwz 5, 1652(25)
  02fc6b0  lfs 6, 1652(25)
  02fc6b4  fabs 7, 4
  02fc6b8  lfs 21, 28(3)
  02fc6bc  fabs 6, 6
  02fc6c0  lfs 20, 32(3)
  02fc6c4  fsubs 2, 23, 1
  02fc6c8  fsubs 3, 22, 1
  02fc6cc  lfs 19, 36(3)
  02fc6d0  lfs 18, 40(3)
  02fc6d4  lfs 17, 44(3)
  02fc6d8  rlwinm 5, 5, 3, 29, 29
  02fc6dc  fsub 5, 1, 2
  02fc6e0  fsel 1, 5, 2, 1
  02fc6e4  fsubs 2, 7, 6
  02fc6e8  fsub 4, 3, 1
  02fc6ec  stfs 2, 288(1)
  02fc6f0  fsel 1, 4, 3, 1
  02fc6f4  fmuls 2, 1, 1
  02fc6f8  lwz 3, 288(1)
  02fc6fc  lfs 5, 288(1)
  02fc700  rlwimi 5, 3, 2, 30, 30
  02fc704  ori 3, 27, 0
  02fc708  rlwimi 5, 4, 4, 28, 28
  02fc70c  fmuls 3, 2, 1
  02fc710  rlwimi 3, 5, 2, 26, 28
  02fc714  slwi 4, 5, 2
  02fc718  clrldi 3, 3, 32
  02fc71c  fmuls 4, 2, 3
  02fc720  fmadds 1, 3, 21, 1
  02fc724  fsub 3, 5, 26
  02fc728  fmuls 8, 2, 4
  02fc72c  fmadds 1, 4, 20, 1
  02fc730  fsel 4, 3, 7, 6
  02fc734  fsub 3, 5, 26
  02fc738  fmuls 2, 2, 8
  02fc73c  fmadds 1, 8, 19, 1
  02fc740  fcmpu 0, 4, 26
  02fc744  fsel 3, 3, 6, 7
  02fc748  fmadds 1, 2, 18, 1
  02fc74c  fmuls 1, 1, 17
  02fc750  stfs 1, 64(24)
  02fc754  lfsx 1, 27, 4
  02fc758  lfs 2, 4(3)
  02fc75c  bt 1, 0x2fc768
  02fc760  fmr 1, 26
  02fc764  b 0x2fc880
  02fc768  fsubs 5, 3, 4
  02fc76c  fadds 3, 3, 4
  02fc770  addic 3, 1, 16
  02fc774  li 6, 2
  02fc778  addic 4, 3, 440
  02fc77c  addic 5, 3, 456
  02fc780  mtctr 6
  02fc784  fdivs 3, 5, 3
  02fc788  fmuls 4, 3, 3
  02fc78c  stfs 3, 468(1)
  02fc790  stfs 3, 460(1)
  02fc794  stfs 3, 464(1)
  02fc798  stfs 3, 456(1)
  02fc79c  lfs 6, 468(1)
  02fc7a0  lfs 7, 460(1)
  02fc7a4  lfs 8, 464(1)
  02fc7a8  fmuls 5, 4, 4
  02fc7ac  fmuls 7, 7, 4
  02fc7b0  fmuls 6, 6, 5
  02fc7b4  fmuls 3, 5, 5
  02fc7b8  fmuls 5, 8, 5
  02fc7bc  stfs 7, 460(1)
  02fc7c0  fmuls 4, 6, 4
  02fc7c4  stfs 5, 464(1)
  02fc7c8  stfs 4, 468(1)
  02fc7cc  lfs 4, 440(3)
  02fc7d0  fmuls 4, 4, 3
  02fc7d4  stfs 4, 456(3)
  02fc7d8  lfs 4, 4(4)
  02fc7dc  addic 3, 3, 8
  02fc7e0  addic 4, 4, 8
  02fc7e4  fmuls 4, 4, 3
  02fc7e8  stfs 4, 4(5)
  02fc7ec  addic 5, 5, 8
  02fc7f0  bdnz 0x2fc7cc
  02fc7f4  li 5, 4
  02fc7f8  ori 3, 1, 0
  02fc7fc  mtctr 5
  02fc800  lis 4, 115
  02fc804  addic 5, 3, 456
  02fc808  addic 4, 4, 22752
  02fc80c  ori 7, 5, 0
  02fc810  lfs 3, 456(3)
  02fc814  lfs 4, 0(4)
  02fc818  fmuls 3, 3, 4
  02fc81c  lfs 4, 4(4)
  02fc820  addic 4, 4, 8
  02fc824  stfs 3, 456(3)
  02fc828  lfs 3, 4(5)
  02fc82c  addic 3, 3, 8
  02fc830  fmuls 3, 3, 4
  02fc834  stfs 3, 4(5)
  02fc838  addic 5, 5, 8
  02fc83c  bdnz 0x2fc810
  02fc840  fmr 3, 26
  02fc844  ori 3, 1, 0
  02fc848  mtctr 6
  02fc84c  lfs 4, 456(3)
  02fc850  fadds 3, 3, 4
  02fc854  addic 3, 3, 16
  02fc858  lfs 4, 4(7)
  02fc85c  lfs 5, 8(7)
  02fc860  lfs 6, 12(7)
  02fc864  addic 7, 7, 16
  02fc868  fadds 3, 3, 4
  02fc86c  fadds 3, 3, 5
  02fc870  fadds 3, 3, 6
  02fc874  bdnz 0x2fc84c
  02fc878  fadds 3, 3, 16
  02fc87c  fmadds 1, 3, 1, 2
  02fc880  fmr 2, 1
  02fc884  fmr 1, 25
  02fc888  bl 0x502578
  02fc88c  nop
  02fc890  fsubs 2, 23, 1
  02fc894  fsubs 3, 22, 1
  02fc898  fabs 7, 31
  02fc89c  lfs 25, 64(24)
  02fc8a0  fabs 10, 30
  02fc8a4  li 3, 0
  02fc8a8  lis 4, 48
  02fc8ac  addi 5, 4, -15456
  02fc8b0  fsub 4, 1, 2
  02fc8b4  fsubs 11, 7, 10
  02fc8b8  fsel 1, 4, 2, 1
  02fc8bc  lfs 4, 128(25)
  02fc8c0  lfs 9, 132(25)
  02fc8c4  fadds 25, 25, 4
  02fc8c8  fsub 8, 11, 26
  02fc8cc  stw 3, 72(24)
  02fc8d0  fsub 11, 11, 26
  02fc8d4  fsub 2, 3, 1
  02fc8d8  fsel 8, 8, 7, 10
  02fc8dc  stfs 25, 64(24)
  02fc8e0  lwz 3, 240(1)
  02fc8e4  fsel 1, 2, 3, 1
  02fc8e8  fsel 7, 11, 10, 7
  02fc8ec  fcmpu 0, 8, 26
  02fc8f0  fmuls 2, 1, 1
  02fc8f4  cror 6, 0, 2
  02fc8f8  fmuls 3, 2, 1
  02fc8fc  fmuls 5, 2, 3
  02fc900  fmadds 1, 3, 21, 1
  02fc904  fmuls 3, 2, 5
  02fc908  fmadds 1, 5, 20, 1
  02fc90c  fmuls 2, 2, 3
  02fc910  fmadds 1, 3, 19, 1
  02fc914  lfs 3, 240(1)
  02fc918  lwz 4, 244(1)
  02fc91c  lfs 4, 244(1)
  02fc920  lfs 5, 248(1)
  02fc924  lfs 6, 252(1)
  02fc928  lfs 12, 136(25)
  02fc92c  fmadds 1, 2, 18, 1
  02fc930  fmuls 2, 1, 17
  02fc934  fadds 1, 2, 9
  02fc938  stfs 2, 68(24)
  02fc93c  stfs 1, 68(24)
  02fc940  lfs 2, 48(5)
  02fc944  fadds 2, 12, 2
  02fc948  stfs 2, 72(24)
  02fc94c  bt 6, 0x2fca24
  02fc950  fsubs 9, 7, 8
  02fc954  fadds 7, 7, 8
  02fc958  addic 5, 1, 16
  02fc95c  li 8, 2
  02fc960  addic 6, 5, 408
  02fc964  addic 7, 5, 424
  02fc968  mtctr 8
  02fc96c  fdivs 7, 9, 7
  02fc970  fmuls 8, 7, 7
  02fc974  stfs 7, 436(1)
  02fc978  stfs 7, 428(1)
  02fc97c  stfs 7, 432(1)
  02fc980  stfs 7, 424(1)
  02fc984  lfs 10, 436(1)
  02fc988  lfs 11, 428(1)
  02fc98c  lfs 12, 432(1)
  02fc990  fmuls 9, 8, 8
  02fc994  fmuls 11, 11, 8
  02fc998  fmuls 10, 10, 9
  02fc99c  fmuls 7, 9, 9
  02fc9a0  fmuls 9, 12, 9
  02fc9a4  stfs 11, 428(1)
  02fc9a8  fmuls 8, 10, 8
  02fc9ac  stfs 9, 432(1)
  02fc9b0  stfs 8, 436(1)
  02fc9b4  lfs 8, 408(5)
  02fc9b8  fmuls 8, 8, 7
  02fc9bc  stfs 8, 424(5)
  02fc9c0  lfs 8, 4(6)
  02fc9c4  addic 5, 5, 8
  02fc9c8  addic 6, 6, 8
  02fc9cc  fmuls 8, 8, 7
  02fc9d0  stfs 8, 4(7)
  02fc9d4  addic 7, 7, 8
  02fc9d8  bdnz 0x2fc9b4
  02fc9dc  lis 6, 115
  02fc9e0  ori 5, 1, 0
  02fc9e4  li 8, 4
  02fc9e8  addic 6, 6, 22752
  02fc9ec  addic 7, 5, 424
  02fc9f0  mtctr 8
  02fc9f4  lfs 7, 424(5)
  02fc9f8  lfs 8, 0(6)
  02fc9fc  fmuls 7, 7, 8
  02fca00  lfs 8, 4(6)
  02fca04  addic 6, 6, 8
  02fca08  stfs 7, 424(5)
  02fca0c  lfs 7, 4(7)
  02fca10  addic 5, 5, 8
  02fca14  fmuls 7, 7, 8
  02fca18  stfs 7, 4(7)
  02fca1c  addic 7, 7, 8
  02fca20  bdnz 0x2fc9f4
  02fca24  lis 26, 150
  02fca28  li 5, 5
  02fca2c  fmr 7, 26
  02fca30  addic 26, 26, 19008
  02fca34  lwz 6, 160(26)
  02fca38  and 5, 6, 5
  02fca3c  cmpwi 1, 5, 0
  02fca40  bt 6, 0x2fca48
  02fca44  fmr 7, 27
  02fca48  lis 5, 48
  02fca4c  fmr 8, 31
  02fca50  addi 5, 5, -15456
  02fca54  lfs 31, 52(5)
  02fca58  stfs 28, 124(1)
  02fca5c  fadds 7, 7, 31
  02fca60  fmadds 8, 8, 7, 25
  02fca64  fmadds 1, 30, 7, 1
  02fca68  fmadds 2, 29, 7, 2
  02fca6c  stfs 8, 112(1)
  02fca70  stfs 1, 116(1)
  02fca74  stfs 2, 120(1)
  02fca78  bt 6, 0x2fd2b0
  02fca7c  lbz 5, 8364(25)
  02fca80  cmpwi 5, 0
  02fca84  bf 2, 0x2fd2b0
  02fca88  fabs 2, 3
  02fca8c  fabs 7, 4
  02fca90  lwz 5, 8320(25)
  02fca94  stfs 3, 128(1)
  02fca98  stfs 4, 132(1)
  02fca9c  stfs 5, 136(1)
  02fcaa0  stfs 6, 140(1)
  02fcaa4  lfs 5, 72(5)
  02fcaa8  rlwinm 4, 4, 3, 29, 29
  02fcaac  fsubs 1, 2, 7
  02fcab0  stfs 1, 284(1)
  02fcab4  lwz 5, 284(1)
  02fcab8  lfs 1, 284(1)
  02fcabc  rlwimi 4, 5, 2, 30, 30
  02fcac0  fsub 4, 1, 26
  02fcac4  fsub 6, 1, 26
  02fcac8  rlwimi 4, 3, 4, 28, 28
  02fcacc  ori 3, 27, 0
  02fcad0  rlwimi 3, 4, 2, 26, 28
  02fcad4  slwi 4, 4, 2
  02fcad8  clrldi 3, 3, 32
  02fcadc  fsel 4, 4, 2, 7
  02fcae0  lfsx 3, 27, 4
  02fcae4  fsel 2, 6, 7, 2
  02fcae8  lfs 1, 4(3)
  02fcaec  fcmpu 0, 4, 26
  02fcaf0  bt 1, 0x2fcafc
  02fcaf4  fmr 3, 26
  02fcaf8  b 0x2fcc14
  02fcafc  fsubs 6, 2, 4
  02fcb00  fadds 2, 2, 4
  02fcb04  addic 3, 1, 16
  02fcb08  li 7, 2
  02fcb0c  addic 5, 3, 392
  02fcb10  addic 4, 3, 376
  02fcb14  mtctr 7
  02fcb18  fdivs 2, 6, 2
  02fcb1c  fmuls 4, 2, 2
  02fcb20  stfs 2, 404(1)
  02fcb24  stfs 2, 396(1)
  02fcb28  stfs 2, 400(1)
  02fcb2c  stfs 2, 392(1)
  02fcb30  lfs 7, 404(1)
  02fcb34  lfs 8, 396(1)
  02fcb38  lfs 9, 400(1)
  02fcb3c  fmuls 6, 4, 4
  02fcb40  fmuls 8, 8, 4
  02fcb44  fmuls 7, 7, 6
  02fcb48  fmuls 2, 6, 6
  02fcb4c  fmuls 6, 9, 6
  02fcb50  stfs 8, 396(1)
  02fcb54  fmuls 4, 7, 4
  02fcb58  stfs 6, 400(1)
  02fcb5c  stfs 4, 404(1)
  02fcb60  lfs 4, 376(3)
  02fcb64  fmuls 4, 4, 2
  02fcb68  stfs 4, 392(3)
  02fcb6c  lfs 4, 4(4)
  02fcb70  addic 4, 4, 8
  02fcb74  fmuls 4, 4, 2
  02fcb78  addic 3, 3, 8
  02fcb7c  stfs 4, 4(5)
  02fcb80  addic 5, 5, 8
  02fcb84  bdnz 0x2fcb60
  02fcb88  li 5, 4
  02fcb8c  ori 3, 1, 0
  02fcb90  mtctr 5
  02fcb94  lis 4, 115
  02fcb98  addic 5, 3, 392
  02fcb9c  addic 4, 4, 22752
  02fcba0  ori 6, 5, 0
  02fcba4  lfs 2, 392(3)
  02fcba8  lfs 4, 0(4)
  02fcbac  fmuls 2, 2, 4
  02fcbb0  lfs 4, 4(4)
  02fcbb4  addic 4, 4, 8
  02fcbb8  stfs 2, 392(3)
  02fcbbc  lfs 2, 4(5)
  02fcbc0  addic 3, 3, 8
  02fcbc4  fmuls 2, 2, 4
  02fcbc8  stfs 2, 4(5)
  02fcbcc  addic 5, 5, 8
  02fcbd0  bdnz 0x2fcba4
  02fcbd4  ori 3, 1, 0
  02fcbd8  fmr 2, 26
  02fcbdc  mtctr 7
  02fcbe0  lfs 4, 392(3)
  02fcbe4  fadds 2, 2, 4
  02fcbe8  lfs 4, 4(6)
  02fcbec  addic 3, 3, 16
  02fcbf0  lfs 6, 8(6)
  02fcbf4  lfs 7, 12(6)
  02fcbf8  addic 6, 6, 16
  02fcbfc  fadds 2, 2, 4
  02fcc00  fadds 2, 2, 6
  02fcc04  fadds 2, 2, 7
  02fcc08  bdnz 0x2fcbe0
  02fcc0c  fadds 2, 2, 16
  02fcc10  fmadds 3, 2, 3, 1
  02fcc14  fmr 1, 5
  02fcc18  fmr 2, 3
  02fcc1c  bl 0x5025e0
  02fcc20  nop
  02fcc24  lwz 3, 128(1)
  02fcc28  lwz 4, 132(1)
  02fcc2c  lfs 2, 128(1)
  02fcc30  lfs 3, 132(1)
  02fcc34  rlwinm 6, 4, 3, 29, 29
  02fcc38  fabs 6, 2
  02fcc3c  fabs 8, 3
  02fcc40  lwz 5, 136(1)
  02fcc44  fsubs 1, 6, 8
  02fcc48  stfs 1, 280(1)
  02fcc4c  lfs 4, 136(1)
  02fcc50  lwz 4, 160(26)
  02fcc54  lwz 7, 280(1)
  02fcc58  lfs 1, 280(1)
  02fcc5c  rlwimi 6, 7, 2, 30, 30
  02fcc60  fsub 7, 1, 26
  02fcc64  fsub 9, 1, 26
  02fcc68  rlwimi 6, 3, 4, 28, 28
  02fcc6c  ori 3, 27, 0
  02fcc70  rlwimi 3, 6, 2, 26, 28
  02fcc74  slwi 6, 6, 2
  02fcc78  clrldi 3, 3, 32
  02fcc7c  fsel 7, 7, 6, 8
  02fcc80  lfsx 5, 27, 6
  02fcc84  fsel 6, 9, 8, 6
  02fcc88  lfs 1, 4(3)
  02fcc8c  fcmpu 0, 7, 26
  02fcc90  bt 1, 0x2fcc9c
  02fcc94  fmr 30, 26
  02fcc98  b 0x2fcdb4
  02fcc9c  fsubs 8, 6, 7
  02fcca0  fadds 6, 6, 7
  02fcca4  addic 3, 1, 16
  02fcca8  li 8, 2
  02fccac  addic 7, 3, 360
  02fccb0  addic 6, 3, 344
  02fccb4  mtctr 8
  02fccb8  fdivs 6, 8, 6
  02fccbc  fmuls 7, 6, 6
  02fccc0  stfs 6, 372(1)
  02fccc4  stfs 6, 364(1)
  02fccc8  stfs 6, 368(1)
  02fcccc  stfs 6, 360(1)
  02fccd0  lfs 9, 372(1)
  02fccd4  lfs 10, 364(1)
  02fccd8  lfs 11, 368(1)
  02fccdc  fmuls 8, 7, 7
  02fcce0  fmuls 10, 10, 7
  02fcce4  fmuls 9, 9, 8
  02fcce8  fmuls 6, 8, 8
  02fccec  fmuls 8, 11, 8
  02fccf0  stfs 10, 364(1)
  02fccf4  fmuls 7, 9, 7
  02fccf8  stfs 8, 368(1)
  02fccfc  stfs 7, 372(1)
  02fcd00  lfs 7, 344(3)
  02fcd04  fmuls 7, 7, 6
  02fcd08  stfs 7, 360(3)
  02fcd0c  lfs 7, 4(6)
  02fcd10  addic 6, 6, 8
  02fcd14  fmuls 7, 7, 6
  02fcd18  addic 3, 3, 8
  02fcd1c  stfs 7, 4(7)
  02fcd20  addic 7, 7, 8
  02fcd24  bdnz 0x2fcd00
  02fcd28  li 7, 4
  02fcd2c  ori 3, 1, 0
  02fcd30  mtctr 7
  02fcd34  lis 6, 115
  02fcd38  addic 7, 3, 360
  02fcd3c  addic 6, 6, 22752
  02fcd40  ori 9, 7, 0
  02fcd44  lfs 6, 360(3)
  02fcd48  lfs 7, 0(6)
  02fcd4c  fmuls 6, 6, 7
  02fcd50  lfs 7, 4(6)
  02fcd54  addic 6, 6, 8
  02fcd58  stfs 6, 360(3)
  02fcd5c  lfs 6, 4(7)
  02fcd60  addic 3, 3, 8
  02fcd64  fmuls 6, 6, 7
  02fcd68  stfs 6, 4(7)
  02fcd6c  addic 7, 7, 8
  02fcd70  bdnz 0x2fcd44
  02fcd74  ori 3, 1, 0
  02fcd78  fmr 30, 26
  02fcd7c  mtctr 8
  02fcd80  lfs 6, 360(3)
  02fcd84  lfs 7, 4(9)
  02fcd88  fadds 6, 30, 6
  02fcd8c  lfs 8, 8(9)
  02fcd90  lfs 30, 12(9)
  02fcd94  addic 3, 3, 16
  02fcd98  addic 9, 9, 16
  02fcd9c  fadds 6, 6, 7
  02fcda0  fadds 6, 6, 8
  02fcda4  fadds 30, 6, 30
  02fcda8  bdnz 0x2fcd80
  02fcdac  fadds 30, 30, 16
  02fcdb0  fmadds 30, 30, 5, 1
  02fcdb4  fmuls 1, 3, 3
  02fcdb8  fabs 3, 4
  02fcdbc  rlwinm 3, 5, 3, 29, 29
  02fcdc0  fmadds 1, 2, 2, 1
  02fcdc4  fsqrts 1, 1
  02fcdc8  fabs 5, 1
  02fcdcc  stfs 1, 272(1)
  02fcdd0  fsubs 1, 5, 3
  02fcdd4  stfs 1, 276(1)
  02fcdd8  lwz 5, 272(1)
  02fcddc  lfs 1, 272(1)
  02fcde0  lwz 6, 276(1)
  02fcde4  fabs 4, 1
  02fcde8  lfs 1, 276(1)
  02fcdec  rlwimi 3, 6, 2, 30, 30
  02fcdf0  fsub 2, 1, 26
  02fcdf4  rlwimi 3, 5, 4, 28, 28
  02fcdf8  fsub 6, 1, 26
  02fcdfc  ori 5, 27, 0
  02fce00  rlwimi 5, 3, 2, 26, 28
  02fce04  slwi 3, 3, 2
  02fce08  clrldi 5, 5, 32
  02fce0c  fsel 4, 2, 4, 3
  02fce10  lfsx 2, 27, 3
  02fce14  fsel 3, 6, 3, 5
  02fce18  lfs 1, 4(5)
  02fce1c  fcmpu 0, 4, 26
  02fce20  bt 1, 0x2fce2c
  02fce24  fmr 2, 26
  02fce28  b 0x2fcf44
  02fce2c  fsubs 5, 3, 4
  02fce30  fadds 3, 3, 4
  02fce34  addic 3, 1, 16
  02fce38  li 8, 2
  02fce3c  addic 6, 3, 328
  02fce40  addic 5, 3, 312
  02fce44  mtctr 8
  02fce48  fdivs 3, 5, 3
  02fce4c  fmuls 4, 3, 3
  02fce50  stfs 3, 340(1)
  02fce54  stfs 3, 332(1)
  02fce58  stfs 3, 336(1)
  02fce5c  stfs 3, 328(1)
  02fce60  lfs 6, 340(1)
  02fce64  lfs 7, 332(1)
  02fce68  lfs 8, 336(1)
  02fce6c  fmuls 5, 4, 4
  02fce70  fmuls 7, 7, 4
  02fce74  fmuls 6, 6, 5
  02fce78  fmuls 3, 5, 5
  02fce7c  fmuls 5, 8, 5
  02fce80  stfs 7, 332(1)
  02fce84  fmuls 4, 6, 4
  02fce88  stfs 5, 336(1)
  02fce8c  stfs 4, 340(1)
  02fce90  lfs 4, 312(3)
  02fce94  fmuls 4, 4, 3
  02fce98  stfs 4, 328(3)
  02fce9c  lfs 4, 4(5)
  02fcea0  addic 5, 5, 8
  02fcea4  fmuls 4, 4, 3
  02fcea8  addic 3, 3, 8
  02fceac  stfs 4, 4(6)
  02fceb0  addic 6, 6, 8
  02fceb4  bdnz 0x2fce90
  02fceb8  li 6, 4
  02fcebc  ori 3, 1, 0
  02fcec0  mtctr 6
  02fcec4  lis 5, 115
  02fcec8  addic 6, 3, 328
  02fcecc  addic 5, 5, 22752
  02fced0  ori 7, 6, 0
  02fced4  lfs 3, 328(3)
  02fced8  lfs 4, 0(5)
  02fcedc  fmuls 3, 3, 4
  02fcee0  lfs 4, 4(5)
  02fcee4  addic 5, 5, 8
  02fcee8  stfs 3, 328(3)
  02fceec  lfs 3, 4(6)
  02fcef0  addic 3, 3, 8
  02fcef4  fmuls 3, 3, 4
  02fcef8  stfs 3, 4(6)
  02fcefc  addic 6, 6, 8
  02fcf00  bdnz 0x2fced4
  02fcf04  ori 3, 1, 0
  02fcf08  fmr 3, 26
  02fcf0c  mtctr 8
  02fcf10  lfs 4, 328(3)
  02fcf14  fadds 3, 3, 4
  02fcf18  lfs 4, 4(7)
  02fcf1c  addic 3, 3, 16
  02fcf20  lfs 5, 8(7)
  02fcf24  lfs 6, 12(7)
  02fcf28  addic 7, 7, 16
  02fcf2c  fadds 3, 3, 4
  02fcf30  fadds 3, 3, 5
  02fcf34  fadds 3, 3, 6
  02fcf38  bdnz 0x2fcf10
  02fcf3c  fadds 3, 3, 16
  02fcf40  fmadds 2, 3, 2, 1
  02fcf44  lis 3, 48
  02fcf48  addi 3, 3, -15456
  02fcf4c  lfs 1, 56(3)
  02fcf50  lfs 3, 60(3)
  02fcf54  fsub 4, 1, 2
  02fcf58  li 3, 5
  02fcf5c  and 3, 4, 3
  02fcf60  cmpwi 3, 0
  02fcf64  fsel 1, 4, 2, 1
  02fcf68  fmr 2, 26
  02fcf6c  fsub 4, 1, 3
  02fcf70  fsel 1, 4, 1, 3
  02fcf74  bt 2, 0x2fcf7c
  02fcf78  fmr 2, 27
  02fcf7c  fmr 3, 1
  02fcf80  fadds 1, 2, 31
  02fcf84  addic 3, 1, 128
  02fcf88  fmr 2, 30
  02fcf8c  bl 0xfe610
  02fcf90  nop
  02fcf94  lfs 1, 132(1)
  02fcf98  lfs 2, 128(1)
  02fcf9c  fmuls 1, 1, 1
  02fcfa0  lis 3, 48
  02fcfa4  lis 4, 114
  02fcfa8  addi 3, 3, -15456
  02fcfac  fmadds 1, 2, 2, 1
  02fcfb0  lfs 5, 64(3)
  02fcfb4  lfs 2, 68(3)
  02fcfb8  lfs 29, 136(1)
  02fcfbc  li 3, 5
  02fcfc0  lfs 4, -3048(4)
  02fcfc4  lwz 4, 160(26)
  02fcfc8  fmuls 2, 4, 2
  02fcfcc  fsqrts 3, 1
  02fcfd0  and 3, 4, 3
  02fcfd4  cmpwi 3, 0
  02fcfd8  fmr 1, 26
  02fcfdc  fsub 4, 26, 3
  02fcfe0  fsub 6, 3, 26
  02fcfe4  fsel 4, 4, 5, 3
  02fcfe8  fsel 3, 6, 4, 3
  02fcfec  fdivs 29, 29, 3
  02fcff0  bt 2, 0x2fcff8
  02fcff4  fmr 1, 27
  02fcff8  fadds 1, 1, 31
  02fcffc  lis 3, 48
  02fd000  addi 3, 3, -15456
  02fd004  fsubs 4, 27, 29
  02fd008  lfs 3, 72(3)
  02fd00c  fmuls 1, 2, 1
  02fd010  fmuls 1, 1, 3
  02fd014  lfs 3, 76(3)
  02fd018  fsqrts 1, 1
  02fd01c  fmuls 3, 1, 3
  02fd020  fmuls 1, 3, 1
  02fd024  fmuls 1, 1, 4
  02fd028  fdivs 1, 1, 2
  02fd02c  fcmpu 0, 1, 26
  02fd030  fmuls 29, 29, 1
  02fd034  cror 6, 0, 2
  02fd038  bt 6, 0x2fd2b8
  02fd03c  fadds 2, 30, 24
  02fd040  fsubs 3, 23, 30
  02fd044  fsubs 4, 22, 30
  02fd048  addic 3, 30, 320
  02fd04c  addic 4, 1, 144
  02fd050  li 5, 2
  02fd054  fsubs 5, 23, 2
  02fd058  fsub 6, 30, 3
  02fd05c  fsubs 7, 22, 2
  02fd060  ori 6, 31, 0
  02fd064  li 7, 0
  02fd068  fsub 8, 2, 5
  02fd06c  fsel 3, 6, 3, 30
  02fd070  fsel 2, 8, 5, 2
  02fd074  fsub 5, 4, 3
  02fd078  fsub 6, 7, 2
  02fd07c  fsel 3, 5, 4, 3
  02fd080  fsel 2, 6, 7, 2
  02fd084  fmuls 4, 3, 3
  02fd088  fmuls 5, 2, 2
  02fd08c  fmuls 6, 4, 3
  02fd090  fmuls 7, 5, 2
  02fd094  fmuls 8, 4, 6
  02fd098  fmadds 3, 6, 21, 3
  02fd09c  fmuls 6, 5, 7
  02fd0a0  fmadds 2, 7, 21, 2
  02fd0a4  fmuls 7, 4, 8
  02fd0a8  fmadds 3, 8, 20, 3
  02fd0ac  fmuls 8, 5, 6
  02fd0b0  fmadds 2, 6, 20, 2
  02fd0b4  fmuls 4, 4, 7
  02fd0b8  fmadds 3, 7, 19, 3
  02fd0bc  fmuls 5, 5, 8
  02fd0c0  fmadds 2, 8, 19, 2
  02fd0c4  fmadds 30, 4, 18, 3
  02fd0c8  lfs 3, 320(30)
  02fd0cc  lfs 4, 324(30)
  02fd0d0  lfs 6, 328(30)
  02fd0d4  stfs 29, 136(1)
  02fd0d8  fmadds 24, 5, 18, 2
  02fd0dc  fadds 2, 6, 29
  02fd0e0  fmuls 30, 30, 1
  02fd0e4  lfs 5, 332(30)
  02fd0e8  fmuls 24, 24, 1
  02fd0ec  fadds 1, 4, 30
  02fd0f0  stfs 30, 132(1)
  02fd0f4  stfs 2, 152(1)
  02fd0f8  stfs 5, 156(1)
  02fd0fc  fadds 2, 3, 24
  02fd100  stfs 24, 128(1)
  02fd104  stfs 1, 148(1)
  02fd108  stfs 2, 144(1)
  02fd10c  bl 0x57820
  02fd110  nop
  02fd114  cmpwi 3, 0
  02fd118  bt 2, 0x2fd264
  02fd11c  lis 3, 161
  02fd120  lwz 4, 8320(25)
  02fd124  addic 3, 3, 2368
  02fd128  lwz 5, 24(3)
  02fd12c  cmpw 5, 4
  02fd130  bt 2, 0x2fd264
  02fd134  lfs 1, 32(3)
  02fd138  lfs 2, 36(3)
  02fd13c  lfs 3, 64(24)
  02fd140  lfs 4, 68(24)
  02fd144  fsubs 3, 1, 3
  02fd148  fsubs 4, 2, 4
  02fd14c  stfs 1, 112(1)
  02fd150  lfs 1, 40(3)
  02fd154  stfs 2, 116(1)
  02fd158  lfs 2, 44(3)
  02fd15c  stfs 1, 120(1)
  02fd160  stfs 2, 124(1)
  02fd164  fabs 3, 3
  02fd168  fabs 4, 4
  02fd16c  fsubs 1, 3, 4
  02fd170  fsub 2, 1, 26
  02fd174  fsub 1, 1, 26
  02fd178  fsel 2, 2, 3, 4
  02fd17c  fsel 1, 1, 4, 3
  02fd180  fcmpu 0, 2, 26
  02fd184  cror 6, 0, 2
  02fd188  bt 6, 0x2fd2b8
  02fd18c  fsubs 3, 1, 2
  02fd190  fadds 1, 1, 2
  02fd194  addic 3, 1, 16
  02fd198  li 6, 2
  02fd19c  addic 5, 3, 296
  02fd1a0  addic 4, 3, 280
  02fd1a4  mtctr 6
  02fd1a8  fdivs 1, 3, 1
  02fd1ac  fmuls 2, 1, 1
  02fd1b0  stfs 1, 308(1)
  02fd1b4  stfs 1, 300(1)
  02fd1b8  stfs 1, 304(1)
  02fd1bc  stfs 1, 296(1)
  02fd1c0  lfs 4, 308(1)
  02fd1c4  lfs 5, 300(1)
  02fd1c8  lfs 6, 304(1)
  02fd1cc  fmuls 3, 2, 2
  02fd1d0  fmuls 5, 5, 2
  02fd1d4  fmuls 4, 4, 3
  02fd1d8  fmuls 1, 3, 3
  02fd1dc  fmuls 3, 6, 3
  02fd1e0  stfs 5, 300(1)
  02fd1e4  fmuls 2, 4, 2
  02fd1e8  stfs 3, 304(1)
  02fd1ec  stfs 2, 308(1)
  02fd1f0  lfs 2, 280(3)
  02fd1f4  fmuls 2, 2, 1
  02fd1f8  stfs 2, 296(3)
  02fd1fc  lfs 2, 4(4)
  02fd200  addic 4, 4, 8
  02fd204  fmuls 2, 2, 1
  02fd208  addic 3, 3, 8
  02fd20c  stfs 2, 4(5)
  02fd210  addic 5, 5, 8
  02fd214  bdnz 0x2fd1f0
  02fd218  lis 4, 115
  02fd21c  ori 3, 1, 0
  02fd220  li 6, 4
  02fd224  addic 4, 4, 22752
  02fd228  addic 5, 3, 296
  02fd22c  mtctr 6
  02fd230  lfs 1, 296(3)
  02fd234  lfs 2, 0(4)
  02fd238  fmuls 1, 1, 2
  02fd23c  lfs 2, 4(4)
  02fd240  addic 4, 4, 8
  02fd244  stfs 1, 296(3)
  02fd248  lfs 1, 4(5)
  02fd24c  addic 3, 3, 8
  02fd250  fmuls 1, 1, 2
  02fd254  stfs 1, 4(5)
  02fd258  addic 5, 5, 8
  02fd25c  bdnz 0x2fd230
  02fd260  b 0x2fd2b8
  02fd264  lis 3, 48
  02fd268  addi 3, 3, -15456
  02fd26c  lfs 1, 80(3)
  02fd270  lfs 2, 320(30)
  02fd274  fmuls 5, 24, 1
  02fd278  fmuls 6, 30, 1
  02fd27c  lfs 3, 324(30)
  02fd280  fmuls 1, 29, 1
  02fd284  lfs 4, 328(30)
  02fd288  fadds 2, 5, 2
  02fd28c  fadds 3, 6, 3
  02fd290  fadds 4, 1, 4
  02fd294  stfs 5, 112(1)
  02fd298  stfs 6, 116(1)
  02fd29c  stfs 1, 120(1)
  02fd2a0  stfs 2, 112(1)
  02fd2a4  stfs 3, 116(1)
  02fd2a8  stfs 4, 120(1)
  02fd2ac  b 0x2fd2b8
  02fd2b0  li 3, 0
  02fd2b4  stw 3, 2640(25)
  02fd2b8  lis 3, 48
  02fd2bc  lwz 6, 160(26)
  02fd2c0  lis 4, 114
  02fd2c4  fmr 3, 26
  02fd2c8  addi 3, 3, -15456
  02fd2cc  li 5, 5
  02fd2d0  addc 28, 1, 28
  02fd2d4  clrldi 28, 28, 32
  02fd2d8  lfs 1, 68(3)
  02fd2dc  lfs 4, -3048(4)
  02fd2e0  lfs 2, 84(3)
  02fd2e4  and 3, 6, 5
  02fd2e8  fmuls 1, 4, 1
  02fd2ec  cmpwi 3, 0
  02fd2f0  bt 2, 0x2fd2f8
  02fd2f4  fmr 3, 27
  02fd2f8  fadds 3, 3, 31
  02fd2fc  addic 4, 1, 112
  02fd300  ori 3, 28, 0
  02fd304  ori 5, 29, 0
  02fd308  bl 0x2fbe58
  02fd30c  ld 0, 736(1)
  02fd310  mtlr 0
  02fd314  lfd 16, 592(1)
  02fd318  lfd 17, 600(1)
  02fd31c  lfd 18, 608(1)
  02fd320  lfd 19, 616(1)
  02fd324  lfd 20, 624(1)
  02fd328  lfd 21, 632(1)
  02fd32c  lfd 22, 640(1)
  02fd330  lfd 23, 648(1)
  02fd334  lfd 24, 656(1)
  02fd338  lfd 25, 664(1)
  02fd33c  lfd 26, 672(1)
  02fd340  lfd 27, 680(1)
  02fd344  lfd 28, 688(1)
  02fd348  lfd 29, 696(1)
  02fd34c  lfd 30, 704(1)
  02fd350  lfd 31, 712(1)
  02fd354  ld 24, 528(1)
  02fd358  ld 25, 536(1)
  02fd35c  ld 26, 544(1)
  02fd360  ld 27, 552(1)
  02fd364  ld 28, 560(1)
  02fd368  ld 29, 568(1)
  02fd36c  ld 30, 576(1)
  02fd370  ld 31, 584(1)
  02fd374  addi 1, 1, 720
  02fd378  blr

UpdateMoby_229:   # 0x2fd398, 0x520 bytes
  02fd398  stdu 1, -272(1)
  02fd39c  mflr 0
  02fd3a0  std 0, 288(1)
  02fd3a4  stfd 29, 248(1)
  02fd3a8  stfd 30, 256(1)
  02fd3ac  stfd 31, 264(1)
  02fd3b0  std 31, 240(1)
  02fd3b4  lis 4, 48
  02fd3b8  ori 31, 3, 0
  02fd3bc  addi 6, 4, -11396
  02fd3c0  addic 5, 1, 112
  02fd3c4  li 4, 0
  02fd3c8  lfs 31, 4(6)
  02fd3cc  std 30, 232(1)
  02fd3d0  lfs 2, 0(6)
  02fd3d4  lwz 30, 120(31)
  02fd3d8  lfs 1, 8(6)
  02fd3dc  fmr 30, 2
  02fd3e0  std 29, 224(1)
  02fd3e4  fmr 29, 1
  02fd3e8  bl 0xf1114
  02fd3ec  nop
  02fd3f0  addic 5, 1, 144
  02fd3f4  ori 3, 31, 0
  02fd3f8  li 4, 0
  02fd3fc  bl 0xf1038
  02fd400  nop
  02fd404  lfs 1, 160(1)
  02fd408  lfs 2, 144(1)
  02fd40c  fmuls 1, 1, 31
  02fd410  lfs 3, 164(1)
  02fd414  lfs 4, 176(1)
  02fd418  fmuls 3, 3, 31
  02fd41c  lfs 5, 148(1)
  02fd420  lfs 6, 168(1)
  02fd424  lfs 7, 112(1)
  02fd428  fmuls 6, 6, 31
  02fd42c  fmadds 1, 2, 30, 1
  02fd430  lfs 2, 180(1)
  02fd434  fmadds 3, 5, 30, 3
  02fd438  lfs 5, 152(1)
  02fd43c  lfs 8, 184(1)
  02fd440  fmadds 5, 5, 30, 6
  02fd444  lwz 3, 80(30)
  02fd448  fmadds 1, 4, 29, 1
  02fd44c  cmpwi 3, 0
  02fd450  fmadds 2, 2, 29, 3
  02fd454  fmadds 3, 8, 29, 5
  02fd458  fadds 1, 7, 1
  02fd45c  stfs 1, 64(30)
  02fd460  lfs 1, 116(1)
  02fd464  fadds 1, 1, 2
  02fd468  stfs 1, 68(30)
  02fd46c  lfs 1, 120(1)
  02fd470  fadds 1, 1, 3
  02fd474  stfs 1, 72(30)
  02fd478  lfs 1, 124(1)
  02fd47c  stfs 1, 76(30)
  02fd480  bt 2, 0x2fd490
  02fd484  li 4, 1
  02fd488  stw 4, 152(3)
  02fd48c  lwz 3, 80(30)
  02fd490  cmpwi 3, 0
  02fd494  bt 2, 0x2fd4ac
  02fd498  lbz 3, 32(3)
  02fd49c  cmpwi 3, 254
  02fd4a0  cmpwi 1, 3, 253
  02fd4a4  bt 2, 0x2fd4ac
  02fd4a8  bf 6, 0x2fd4b4
  02fd4ac  li 3, 0
  02fd4b0  stw 3, 80(30)
  02fd4b4  lis 29, 151
  02fd4b8  addic 29, 29, -25376
  02fd4bc  lwz 3, 8324(29)
  02fd4c0  cmpwi 3, 1
  02fd4c4  bf 2, 0x2fd4d8
  02fd4c8  li 3, 30
  02fd4cc  li 4, 1
  02fd4d0  bl 0xb72b0
  02fd4d4  nop
  02fd4d8  addic 3, 30, 84
  02fd4dc  bl 0x4fff60
  02fd4e0  nop
  02fd4e4  cmpwi 3, 0
  02fd4e8  lwz 3, 8324(29)
  02fd4ec  lwz 4, 4256(29)
  02fd4f0  bt 2, 0x2fd5d4
  02fd4f4  lbz 5, 8364(29)
  02fd4f8  cmpwi 5, 0
  02fd4fc  bf 2, 0x2fd5d4
  02fd500  lbz 5, 8360(29)
  02fd504  cmpwi 5, 0
  02fd508  bt 2, 0x2fd53c
  02fd50c  lis 5, 48
  02fd510  lis 6, 114
  02fd514  addi 5, 5, -11396
  02fd518  lfs 1, 12(5)
  02fd51c  lfs 2, -3056(6)
  02fd520  lwz 5, 444(29)
  02fd524  fmuls 1, 2, 1
  02fd528  fctiwz 1, 1
  02fd52c  stfd 1, 208(1)
  02fd530  lwz 6, 212(1)
  02fd534  cmpw 5, 6
  02fd538  bt 2, 0x2fd5ac
  02fd53c  lis 5, 150
  02fd540  cmpwi 1, 3, 30
  02fd544  addic 5, 5, 19008
  02fd548  lwz 5, 164(5)
  02fd54c  and 4, 5, 4
  02fd550  cmpwi 4, 0
  02fd554  crorc 2, 2, 6
  02fd558  bt 2, 0x2fd574
  02fd55c  li 3, -1
  02fd560  bl 0x8e0f4
  02fd564  nop
  02fd568  cmpwi 3, 0
  02fd56c  bf 2, 0x2fd5ac
  02fd570  lwz 3, 8324(29)
  02fd574  cmpwi 3, 35
  02fd578  bf 2, 0x2fd5d4
  02fd57c  lis 3, 48
  02fd580  lis 4, 114
  02fd584  addi 3, 3, -11396
  02fd588  lfs 1, 16(3)
  02fd58c  lfs 2, -3056(4)
  02fd590  lwz 3, 408(29)
  02fd594  fmuls 1, 2, 1
  02fd598  fctiwz 1, 1
  02fd59c  stfd 1, 208(1)
  02fd5a0  lwz 4, 212(1)
  02fd5a4  cmpw 3, 4
  02fd5a8  bf 2, 0x2fd5d4
  02fd5ac  li 3, 26
  02fd5b0  li 4, 0
  02fd5b4  bl 0x816ec
  02fd5b8  nop
  02fd5bc  li 3, -1
  02fd5c0  li 4, 1
  02fd5c4  bl 0xaa258
  02fd5c8  nop
  02fd5cc  li 3, 3
  02fd5d0  stb 3, 32(31)
  02fd5d4  lfs 1, 64(30)
  02fd5d8  ori 3, 31, 0
  02fd5dc  stfs 1, 64(1)
  02fd5e0  lfs 1, 68(30)
  02fd5e4  ori 4, 30, 0
  02fd5e8  stfs 1, 68(1)
  02fd5ec  lfs 1, 72(30)
  02fd5f0  stfs 1, 72(1)
  02fd5f4  lfs 1, 76(30)
  02fd5f8  stfs 1, 76(1)
  02fd5fc  ld 5, 64(1)
  02fd600  ld 6, 72(1)
  02fd604  bl 0x2fc3f8
  02fd608  lbz 3, 32(31)
  02fd60c  cmpwi 3, 6
  02fd610  bt 2, 0x2fd890
  02fd614  cmpwi 3, 5
  02fd618  bt 2, 0x2fd820
  02fd61c  cmpwi 3, 4
  02fd620  bt 2, 0x2fd7fc
  02fd624  cmpwi 3, 3
  02fd628  bt 2, 0x2fd6a0
  02fd62c  cmpwi 3, 2
  02fd630  bt 2, 0x2fd828
  02fd634  cmpwi 3, 1
  02fd638  bt 2, 0x2fd684
  02fd63c  cmpwi 3, 0
  02fd640  bf 2, 0x2fd828
  02fd644  li 3, 0
  02fd648  li 5, 0
  02fd64c  li 4, 1
  02fd650  li 6, 2
  02fd654  stw 3, 80(30)
  02fd658  lbz 3, 112(31)
  02fd65c  subc 4, 4, 6
  02fd660  rlwinm 7, 3, 0, 30, 30
  02fd664  subc 5, 5, 7
  02fd668  cntlzw 5, 5
  02fd66c  sldi 5, 5, 58
  02fd670  sradi 5, 5, 63
  02fd674  and 4, 5, 4
  02fd678  addc 4, 6, 4
  02fd67c  stb 4, 32(31)
  02fd680  b 0x2fd688
  02fd684  lbz 3, 112(31)
  02fd688  rlwinm 3, 3, 0, 30, 30
  02fd68c  cmpwi 3, 0
  02fd690  bt 2, 0x2fd828
  02fd694  li 3, 2
  02fd698  stb 3, 32(31)
  02fd69c  b 0x2fd828
  02fd6a0  lwz 3, 80(30)
  02fd6a4  cmpwi 3, 0
  02fd6a8  bt 2, 0x2fd7a0
  02fd6ac  lis 3, 161
  02fd6b0  lis 4, 0
  02fd6b4  addic 3, 3, -732
  02fd6b8  ori 5, 4, 65535
  02fd6bc  lhz 4, 160(3)
  02fd6c0  cmpw 4, 5
  02fd6c4  bf 0, 0x2fd6d0
  02fd6c8  addic 4, 4, 1
  02fd6cc  sth 4, 160(3)
  02fd6d0  lis 4, 161
  02fd6d4  lis 5, 114
  02fd6d8  lwz 4, -2344(4)
  02fd6dc  extsw 4, 4
  02fd6e0  std 4, 208(1)
  02fd6e4  lis 4, 48
  02fd6e8  addi 4, 4, -11396
  02fd6ec  lfs 1, 20(4)
  02fd6f0  lfs 2, -3056(5)
  02fd6f4  lfd 3, 208(1)
  02fd6f8  lis 4, 6990
  02fd6fc  fcfid 3, 3
  02fd700  ori 5, 4, 33205
  02fd704  lhz 6, 162(3)
  02fd708  frsp 3, 3
  02fd70c  fadds 1, 3, 1
  02fd710  fmuls 1, 2, 1
  02fd714  fctiwz 1, 1
  02fd718  stfd 1, 208(1)
  02fd71c  lwz 4, 212(1)
  02fd720  mulhw 5, 5, 4
  02fd724  srawi 5, 5, 6
  02fd728  srwi 7, 5, 31
  02fd72c  addc 5, 5, 7
  02fd730  cmpw 5, 6
  02fd734  bf 1, 0x2fd754
  02fd738  lis 5, 6990
  02fd73c  ori 5, 5, 33205
  02fd740  mulhw 4, 5, 4
  02fd744  srawi 4, 4, 6
  02fd748  srwi 5, 4, 31
  02fd74c  addc 4, 4, 5
  02fd750  sth 4, 162(3)
  02fd754  ori 5, 3, 0
  02fd758  lis 3, 151
  02fd75c  li 4, 1
  02fd760  lis 6, -32768
  02fd764  lwz 7, 164(5)
  02fd768  lwz 3, -25488(3)
  02fd76c  lwz 8, 80(30)
  02fd770  slw 3, 4, 3
  02fd774  ori 4, 8, 0
  02fd778  or 3, 7, 3
  02fd77c  or 6, 3, 6
  02fd780  addic 3, 30, 64
  02fd784  stw 6, 164(5)
  02fd788  lwz 5, 120(8)
  02fd78c  bl 0x2fe4e8
  02fd790  nop
  02fd794  li 3, 0
  02fd798  stw 3, 80(30)
  02fd79c  b 0x2fd7b4
  02fd7a0  li 3, 0
  02fd7a4  li 4, 0
  02fd7a8  ori 5, 31, 0
  02fd7ac  bl 0x15d12c
  02fd7b0  nop
  02fd7b4  lis 3, 48
  02fd7b8  vspltisw 2, -1
  02fd7bc  li 4, 4
  02fd7c0  addi 3, 3, -11396
  02fd7c4  li 6, 24
  02fd7c8  lis 5, 114
  02fd7cc  stb 4, 32(31)
  02fd7d0  li 4, -3056
  02fd7d4  vslw 2, 2, 2
  02fd7d8  lvlx 3, 6, 3
  02fd7dc  li 3, 84
  02fd7e0  vspltw 3, 3, 0
  02fd7e4  lvlx 4, 4, 5
  02fd7e8  vmaddfp 2, 4, 3, 2
  02fd7ec  vctsxs 2, 2, 0
  02fd7f0  vspltw 2, 2, 0
  02fd7f4  stvewx 2, 3, 30
  02fd7f8  b 0x2fd828
  02fd7fc  lwz 3, 8324(29)
  02fd800  cmpwi 3, 35
  02fd804  bt 2, 0x2fd828
  02fd808  lbz 3, 8360(29)
  02fd80c  cmpwi 3, 0
  02fd810  bf 2, 0x2fd828
  02fd814  li 3, 2
  02fd818  stb 3, 32(31)
  02fd81c  b 0x2fd828
  02fd820  li 3, 6
  02fd824  stb 3, 32(31)
  02fd828  lwz 3, 80(30)
  02fd82c  cmpwi 3, 0
  02fd830  bt 2, 0x2fd858
  02fd834  lfs 1, 64(30)
  02fd838  stfs 1, 16(3)
  02fd83c  lfs 1, 68(30)
  02fd840  stfs 1, 20(3)
  02fd844  lfs 1, 72(30)
  02fd848  stfs 1, 24(3)
  02fd84c  lfs 1, 76(30)
  02fd850  stfs 1, 28(3)
  02fd854  b 0x2fd890
  02fd858  li 3, -1
  02fd85c  bl 0x8e0f4
  02fd860  nop
  02fd864  cmpwi 3, 0
  02fd868  bt 2, 0x2fd890
  02fd86c  vspltisw 2, 0
  02fd870  li 6, 128
  02fd874  ori 3, 31, 0
  02fd878  addic 4, 30, 64
  02fd87c  addic 5, 1, 128
  02fd880  stvx 2, 6, 1
  02fd884  bl 0x2fe338
  02fd888  nop
  02fd88c  stw 3, 80(30)
  02fd890  ld 0, 288(1)
  02fd894  mtlr 0
  02fd898  lfd 29, 248(1)
  02fd89c  lfd 30, 256(1)
  02fd8a0  lfd 31, 264(1)
  02fd8a4  ld 29, 224(1)
  02fd8a8  ld 30, 232(1)
  02fd8ac  ld 31, 240(1)
  02fd8b0  addi 1, 1, 272
  02fd8b4  blr

M229_002fd8b8:   # 0x2fd8b8, 0x14 bytes
  02fd8b8  lis 3, 128
  02fd8bc  lis 4, 1
  02fd8c0  addic 3, 3, -3744
  02fd8c4  stw 4, 72(3)
  02fd8c8  blr
