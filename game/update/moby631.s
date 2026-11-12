# game/update/moby631.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M631_003f00b8:   # 0x3f00b8, 0x470 bytes
  03f00b8  stdu 1, -208(1)
  03f00bc  mflr 0
  03f00c0  std 0, 224(1)
  03f00c4  stfd 31, 200(1)
  03f00c8  std 31, 192(1)
  03f00cc  lis 4, 63
  03f00d0  ori 31, 3, 0
  03f00d4  addi 5, 4, 128
  03f00d8  li 6, 0
  03f00dc  std 30, 184(1)
  03f00e0  lis 4, 51
  03f00e4  lwz 30, 120(31)
  03f00e8  lfs 31, 0(5)
  03f00ec  li 5, 0
  03f00f0  std 29, 176(1)
  03f00f4  stw 6, 116(1)
  03f00f8  bl 0x10675c
  03f00fc  nop
  03f0100  ori 29, 3, 0
  03f0104  addic 5, 30, 32
  03f0108  ori 4, 29, 0
  03f010c  li 6, 0
  03f0110  addic 7, 1, 112
  03f0114  li 9, 0
  03f0118  addic 8, 1, 116
  03f011c  ori 3, 31, 0
  03f0120  li 10, 4
  03f0124  bl 0x106840
  03f0128  nop
  03f012c  lwz 4, 112(1)
  03f0130  cmpwi 4, 1
  03f0134  bt 2, 0x3f04f0
  03f0138  lbz 4, 32(31)
  03f013c  cmpwi 4, 5
  03f0140  bt 2, 0x3f04f0
  03f0144  lfs 1, 32(30)
  03f0148  lfs 2, 116(1)
  03f014c  cmpwi 3, 1
  03f0150  fsubs 1, 1, 2
  03f0154  fcmpu 1, 1, 31
  03f0158  stfs 1, 32(30)
  03f015c  bt 2, 0x3f0164
  03f0160  bt 5, 0x3f0170
  03f0164  li 3, 5
  03f0168  stb 3, 32(31)
  03f016c  b 0x3f04f0
  03f0170  cmpwi 3, 11
  03f0174  bt 2, 0x3f04f0
  03f0178  li 5, 180
  03f017c  addic 4, 30, 96
  03f0180  ori 3, 31, 0
  03f0184  stb 5, 103(30)
  03f0188  bl 0x10c808
  03f018c  nop
  03f0190  lis 4, 17839
  03f0194  lwz 3, 28(29)
  03f0198  lfs 1, 72(31)
  03f019c  ori 4, 4, 57190
  03f01a0  cmpw 3, 4
  03f01a4  bf 2, 0x3f04f0
  03f01a8  lbz 3, 32(31)
  03f01ac  cmpwi 3, 4
  03f01b0  bt 2, 0x3f04f0
  03f01b4  lfs 2, 16(31)
  03f01b8  lfs 3, 0(29)
  03f01bc  lfs 4, 20(31)
  03f01c0  lfs 5, 4(29)
  03f01c4  fsubs 2, 2, 3
  03f01c8  fsubs 3, 4, 5
  03f01cc  lis 3, 115
  03f01d0  addic 3, 3, 22784
  03f01d4  fabs 5, 2
  03f01d8  fabs 4, 3
  03f01dc  stfs 2, 120(1)
  03f01e0  stfs 3, 124(1)
  03f01e4  fsubs 2, 5, 4
  03f01e8  stfs 2, 128(1)
  03f01ec  lwz 4, 120(1)
  03f01f0  lfs 2, 120(1)
  03f01f4  lwz 5, 124(1)
  03f01f8  lfs 3, 124(1)
  03f01fc  fabs 2, 2
  03f0200  lwz 6, 128(1)
  03f0204  rlwinm 5, 5, 3, 29, 29
  03f0208  fabs 6, 3
  03f020c  lfs 3, 128(1)
  03f0210  rlwimi 5, 6, 2, 30, 30
  03f0214  fsub 7, 3, 31
  03f0218  fsub 8, 3, 31
  03f021c  rlwimi 5, 4, 4, 28, 28
  03f0220  ori 4, 3, 0
  03f0224  rlwimi 4, 5, 2, 26, 28
  03f0228  slwi 5, 5, 2
  03f022c  clrldi 4, 4, 32
  03f0230  fsel 4, 7, 2, 4
  03f0234  lfsx 3, 3, 5
  03f0238  fsel 5, 8, 6, 5
  03f023c  lfs 2, 4(4)
  03f0240  fcmpu 0, 4, 31
  03f0244  bt 1, 0x3f024c
  03f0248  b 0x3f0370
  03f024c  fsubs 6, 5, 4
  03f0250  fadds 4, 5, 4
  03f0254  addic 6, 1, 16
  03f0258  li 3, 2
  03f025c  addic 4, 6, 132
  03f0260  addic 5, 6, 116
  03f0264  mtctr 3
  03f0268  fdivs 4, 6, 4
  03f026c  fmuls 6, 4, 4
  03f0270  stfs 4, 144(1)
  03f0274  stfs 4, 136(1)
  03f0278  stfs 4, 140(1)
  03f027c  stfs 4, 132(1)
  03f0280  lfs 7, 144(1)
  03f0284  lfs 8, 136(1)
  03f0288  lfs 9, 140(1)
  03f028c  fmuls 4, 6, 6
  03f0290  fmuls 8, 8, 6
  03f0294  fmuls 7, 7, 4
  03f0298  fmuls 5, 4, 4
  03f029c  fmuls 4, 9, 4
  03f02a0  stfs 8, 136(1)
  03f02a4  fmuls 6, 7, 6
  03f02a8  stfs 4, 140(1)
  03f02ac  stfs 6, 144(1)
  03f02b0  lfs 4, 116(6)
  03f02b4  fmuls 4, 4, 5
  03f02b8  stfs 4, 132(6)
  03f02bc  lfs 4, 4(5)
  03f02c0  addic 5, 5, 8
  03f02c4  fmuls 4, 4, 5
  03f02c8  addic 6, 6, 8
  03f02cc  stfs 4, 4(4)
  03f02d0  addic 4, 4, 8
  03f02d4  bdnz 0x3f02b0
  03f02d8  ori 7, 1, 0
  03f02dc  li 4, 4
  03f02e0  lis 6, 115
  03f02e4  addic 5, 7, 132
  03f02e8  mtctr 4
  03f02ec  addic 6, 6, 22752
  03f02f0  ori 4, 5, 0
  03f02f4  lfs 4, 132(7)
  03f02f8  lfs 5, 0(6)
  03f02fc  fmuls 4, 4, 5
  03f0300  lfs 5, 4(6)
  03f0304  addic 6, 6, 8
  03f0308  stfs 4, 132(7)
  03f030c  lfs 4, 4(5)
  03f0310  addic 7, 7, 8
  03f0314  fmuls 4, 4, 5
  03f0318  stfs 4, 4(5)
  03f031c  addic 5, 5, 8
  03f0320  bdnz 0x3f02f4
  03f0324  ori 5, 3, 0
  03f0328  ori 3, 1, 0
  03f032c  mtctr 5
  03f0330  lfs 4, 132(3)
  03f0334  lfs 5, 4(4)
  03f0338  fadds 4, 31, 4
  03f033c  lfs 6, 8(4)
  03f0340  lfs 31, 12(4)
  03f0344  addic 3, 3, 16
  03f0348  addic 4, 4, 16
  03f034c  fadds 4, 4, 5
  03f0350  fadds 4, 4, 6
  03f0354  fadds 31, 4, 31
  03f0358  bdnz 0x3f0330
  03f035c  lis 3, 63
  03f0360  addi 3, 3, 128
  03f0364  lfs 4, 4(3)
  03f0368  fadds 31, 31, 4
  03f036c  fmadds 31, 31, 3, 2
  03f0370  fmr 2, 1
  03f0374  fmr 1, 31
  03f0378  bl 0x5025e0
  03f037c  nop
  03f0380  lis 3, 63
  03f0384  addi 3, 3, 128
  03f0388  lfs 2, 12(3)
  03f038c  lfs 3, 8(3)
  03f0390  fsubs 5, 2, 1
  03f0394  lfs 4, 16(3)
  03f0398  fadds 3, 1, 3
  03f039c  fsubs 6, 4, 1
  03f03a0  lfs 7, 20(3)
  03f03a4  fsub 8, 1, 5
  03f03a8  fsubs 2, 2, 3
  03f03ac  fsubs 4, 4, 3
  03f03b0  fsel 1, 8, 5, 1
  03f03b4  fsub 5, 3, 2
  03f03b8  lfs 8, 24(3)
  03f03bc  fsub 10, 6, 1
  03f03c0  fsel 2, 5, 2, 3
  03f03c4  lfs 3, 28(3)
  03f03c8  lfs 5, 32(3)
  03f03cc  lfs 9, 64(31)
  03f03d0  lfs 31, 40(3)
  03f03d4  fabs 9, 9
  03f03d8  lfs 12, 36(3)
  03f03dc  fsel 1, 10, 6, 1
  03f03e0  fsub 6, 4, 2
  03f03e4  fmuls 10, 1, 1
  03f03e8  fsel 2, 6, 4, 2
  03f03ec  fmuls 6, 10, 1
  03f03f0  fmuls 11, 2, 2
  03f03f4  fmuls 4, 10, 6
  03f03f8  fmadds 1, 6, 7, 1
  03f03fc  fmuls 6, 11, 2
  03f0400  fmuls 13, 10, 4
  03f0404  fmadds 1, 4, 8, 1
  03f0408  fmuls 4, 11, 6
  03f040c  fmadds 2, 6, 7, 2
  03f0410  fmr 6, 12
  03f0414  fmuls 7, 10, 13
  03f0418  fmadds 1, 13, 3, 1
  03f041c  fmuls 10, 11, 4
  03f0420  fmadds 2, 4, 8, 2
  03f0424  fmadds 1, 7, 5, 1
  03f0428  fmuls 4, 11, 10
  03f042c  fmadds 2, 10, 3, 2
  03f0430  fmuls 31, 1, 31
  03f0434  fmadds 1, 4, 5, 2
  03f0438  fabs 2, 31
  03f043c  fmuls 1, 1, 6
  03f0440  fcmpu 0, 9, 2
  03f0444  cror 6, 1, 2
  03f0448  bt 6, 0x3f0458
  03f044c  li 3, 0
  03f0450  stfs 31, 64(31)
  03f0454  stw 3, 536(30)
  03f0458  lfs 3, 68(31)
  03f045c  fabs 2, 1
  03f0460  fabs 3, 3
  03f0464  fcmpu 0, 3, 2
  03f0468  cror 6, 1, 2
  03f046c  bt 6, 0x3f047c
  03f0470  li 3, 0
  03f0474  stfs 1, 68(31)
  03f0478  stw 3, 540(30)
  03f047c  lis 3, 63
  03f0480  li 5, 48
  03f0484  vspltisw 2, -1
  03f0488  addi 4, 3, 128
  03f048c  lis 3, 114
  03f0490  lis 6, 114
  03f0494  li 7, -3056
  03f0498  vslw 2, 2, 2
  03f049c  lfs 1, 44(4)
  03f04a0  lfs 2, -3052(3)
  03f04a4  li 8, 518
  03f04a8  fmuls 1, 2, 1
  03f04ac  li 9, 4
  03f04b0  li 3, 1
  03f04b4  stfs 1, 532(30)
  03f04b8  lvlx 3, 5, 4
  03f04bc  lvlx 4, 7, 6
  03f04c0  vspltw 3, 3, 0
  03f04c4  li 4, 0
  03f04c8  ori 5, 31, 0
  03f04cc  vmaddfp 2, 4, 3, 2
  03f04d0  vctsxs 2, 2, 0
  03f04d4  vsplth 2, 2, 1
  03f04d8  stvehx 2, 8, 30
  03f04dc  lbz 6, 32(31)
  03f04e0  stb 9, 32(31)
  03f04e4  stb 6, 188(31)
  03f04e8  bl 0x15d12c
  03f04ec  nop
  03f04f0  li 5, 255
  03f04f4  addic 4, 30, 96
  03f04f8  ori 3, 31, 0
  03f04fc  stb 5, 164(31)
  03f0500  bl 0x10c9a0
  03f0504  nop
  03f0508  ld 0, 224(1)
  03f050c  mtlr 0
  03f0510  lfd 31, 200(1)
  03f0514  ld 29, 176(1)
  03f0518  ld 30, 184(1)
  03f051c  ld 31, 192(1)
  03f0520  addi 1, 1, 208
  03f0524  blr

UpdateMoby_631:   # 0x3f0610, 0x1ee0 bytes
  03f0610  stdu 1, -816(1)
  03f0614  mflr 0
  03f0618  std 0, 832(1)
  03f061c  stfd 26, 768(1)
  03f0620  stfd 27, 776(1)
  03f0624  stfd 28, 784(1)
  03f0628  stfd 29, 792(1)
  03f062c  stfd 30, 800(1)
  03f0630  stfd 31, 808(1)
  03f0634  std 30, 752(1)
  03f0638  lis 4, 63
  03f063c  std 31, 760(1)
  03f0640  lwz 30, 120(3)
  03f0644  ori 31, 3, 0
  03f0648  addi 4, 4, 1328
  03f064c  lfs 1, 0(4)
  03f0650  lwz 3, 596(30)
  03f0654  fmr 27, 1
  03f0658  std 29, 744(1)
  03f065c  std 28, 736(1)
  03f0660  std 27, 728(1)
  03f0664  std 26, 720(1)
  03f0668  std 25, 712(1)
  03f066c  std 24, 704(1)
  03f0670  std 23, 696(1)
  03f0674  std 22, 688(1)
  03f0678  std 21, 680(1)
  03f067c  cmpwi 3, 0
  03f0680  bt 2, 0x3f0690
  03f0684  lis 3, 63
  03f0688  addi 3, 3, 1328
  03f068c  lfs 1, 4(3)
  03f0690  lis 3, 63
  03f0694  addic 5, 1, 560
  03f0698  addi 4, 3, 1328
  03f069c  ori 3, 31, 0
  03f06a0  lfs 29, 8(4)
  03f06a4  fmuls 1, 1, 29
  03f06a8  bl 0x1118d8
  03f06ac  nop
  03f06b0  lhz 3, 178(31)
  03f06b4  lis 4, 165
  03f06b8  extsh 5, 3
  03f06bc  addic 4, 4, 19920
  03f06c0  srawi 5, 5, 5
  03f06c4  clrlwi 3, 3, 27
  03f06c8  sldi 5, 5, 2
  03f06cc  li 6, 1
  03f06d0  slw 3, 6, 3
  03f06d4  lwzx 4, 4, 5
  03f06d8  and 3, 4, 3
  03f06dc  cmpwi 3, 0
  03f06e0  bt 2, 0x3f071c
  03f06e4  lwz 30, 568(30)
  03f06e8  cmpwi 30, -1
  03f06ec  bt 2, 0x3f070c
  03f06f0  lis 3, 164
  03f06f4  slwi 4, 30, 8
  03f06f8  lwz 3, -28512(3)
  03f06fc  addc 3, 3, 4
  03f0700  clrldi 3, 3, 32
  03f0704  bl 0xefb38
  03f0708  nop
  03f070c  ori 3, 31, 0
  03f0710  bl 0xefb38
  03f0714  nop
  03f0718  b 0x3f249c
  03f071c  lwz 3, 308(30)
  03f0720  cmpwi 3, -1
  03f0724  bf 2, 0x3f0760
  03f0728  lwz 30, 568(30)
  03f072c  cmpwi 30, -1
  03f0730  bt 2, 0x3f0750
  03f0734  lis 3, 164
  03f0738  slwi 4, 30, 8
  03f073c  lwz 3, -28512(3)
  03f0740  addc 3, 3, 4
  03f0744  clrldi 3, 3, 32
  03f0748  bl 0xefb38
  03f074c  nop
  03f0750  ori 3, 31, 0
  03f0754  bl 0xefb38
  03f0758  nop
  03f075c  b 0x3f249c
  03f0760  lbz 3, 32(31)
  03f0764  cmpwi 3, 0
  03f0768  bt 2, 0x3f07b0
  03f076c  lbz 3, 46(30)
  03f0770  cmpwi 3, 1
  03f0774  bt 2, 0x3f07b0
  03f0778  lwz 30, 568(30)
  03f077c  cmpwi 30, -1
  03f0780  bt 2, 0x3f07a0
  03f0784  lis 3, 164
  03f0788  slwi 4, 30, 8
  03f078c  lwz 3, -28512(3)
  03f0790  addc 3, 3, 4
  03f0794  clrldi 3, 3, 32
  03f0798  bl 0xefb38
  03f079c  nop
  03f07a0  ori 3, 31, 0
  03f07a4  bl 0xefb38
  03f07a8  nop
  03f07ac  b 0x3f249c
  03f07b0  lwz 3, 56(30)
  03f07b4  cmpwi 3, 0
  03f07b8  bt 2, 0x3f0800
  03f07bc  lis 3, 63
  03f07c0  li 4, 0
  03f07c4  vspltisw 2, -1
  03f07c8  addi 3, 3, 1328
  03f07cc  li 5, 12
  03f07d0  lis 6, 114
  03f07d4  stw 4, 56(30)
  03f07d8  li 4, -3056
  03f07dc  vslw 2, 2, 2
  03f07e0  lvlx 3, 5, 3
  03f07e4  li 3, 596
  03f07e8  vspltw 3, 3, 0
  03f07ec  lvlx 4, 4, 6
  03f07f0  vmaddfp 2, 4, 3, 2
  03f07f4  vctsxs 2, 2, 0
  03f07f8  vspltw 2, 2, 0
  03f07fc  stvewx 2, 3, 30
  03f0800  addic 3, 30, 596
  03f0804  bl 0x4fff60
  03f0808  nop
  03f080c  lwz 29, 568(30)
  03f0810  cmpwi 29, -1
  03f0814  bt 2, 0x3f0890
  03f0818  lis 3, 164
  03f081c  slwi 4, 29, 8
  03f0820  lwz 3, -28512(3)
  03f0824  addc 29, 3, 4
  03f0828  clrldi 29, 29, 32
  03f082c  lhz 3, 166(29)
  03f0830  cmpwi 3, 574
  03f0834  bf 2, 0x3f0890
  03f0838  lbz 3, 32(29)
  03f083c  cmpwi 3, 128
  03f0840  bf 0, 0x3f0890
  03f0844  lis 3, 63
  03f0848  addi 28, 3, 1328
  03f084c  lwz 3, 120(29)
  03f0850  addic 27, 3, 336
  03f0854  lfs 1, 16(28)
  03f0858  ori 3, 27, 0
  03f085c  bl 0x119ac0
  03f0860  nop
  03f0864  lis 4, 114
  03f0868  lfs 1, 20(28)
  03f086c  ori 3, 29, 0
  03f0870  lfs 2, 24(28)
  03f0874  li 5, 2
  03f0878  lfs 3, -3060(4)
  03f087c  ori 4, 27, 0
  03f0880  fmuls 1, 3, 1
  03f0884  fmuls 2, 3, 2
  03f0888  bl 0x1167c8
  03f088c  nop
  03f0890  ori 3, 31, 0
  03f0894  bl 0x3f00b8
  03f0898  lbz 3, 32(31)
  03f089c  lfs 31, 72(31)
  03f08a0  lfs 1, 560(1)
  03f08a4  lfs 2, 16(31)
  03f08a8  cmpwi 3, 5
  03f08ac  lfs 3, 564(1)
  03f08b0  lfs 4, 20(31)
  03f08b4  bt 2, 0x3f1f98
  03f08b8  cmpwi 3, 4
  03f08bc  bt 2, 0x3f1dfc
  03f08c0  cmpwi 3, 3
  03f08c4  bt 2, 0x3f18e0
  03f08c8  cmpwi 3, 2
  03f08cc  bt 2, 0x3f1014
  03f08d0  cmpwi 3, 1
  03f08d4  bt 2, 0x3f0b34
  03f08d8  cmpwi 3, 0
  03f08dc  bf 2, 0x3f235c
  03f08e0  lis 3, 63
  03f08e4  li 4, 32
  03f08e8  addi 3, 3, 1328
  03f08ec  lis 5, 16448
  03f08f0  stb 4, 127(31)
  03f08f4  lfs 1, 28(3)
  03f08f8  stw 5, 32(30)
  03f08fc  bl 0x502758
  03f0900  nop
  03f0904  li 4, 2
  03f0908  lwz 6, 308(30)
  03f090c  li 5, 1
  03f0910  li 7, 25
  03f0914  lis 28, 165
  03f0918  stb 4, 40(30)
  03f091c  stb 5, 46(30)
  03f0920  li 4, 6
  03f0924  sth 3, 36(30)
  03f0928  li 8, 0
  03f092c  slwi 3, 6, 2
  03f0930  stb 7, 88(30)
  03f0934  addic 28, 28, 7136
  03f0938  stb 5, 89(30)
  03f093c  extsw 3, 3
  03f0940  stb 4, 90(30)
  03f0944  stb 8, 41(30)
  03f0948  lwz 4, 356(30)
  03f094c  cmpwi 4, -1
  03f0950  lwzx 3, 28, 3
  03f0954  stw 3, 304(30)
  03f0958  bt 2, 0x3f096c
  03f095c  slwi 4, 4, 2
  03f0960  extsw 4, 4
  03f0964  lwzx 4, 28, 4
  03f0968  stw 4, 352(30)
  03f096c  lfs 1, 16(3)
  03f0970  li 4, 1
  03f0974  li 29, 0
  03f0978  stfs 1, 16(31)
  03f097c  lfs 1, 20(3)
  03f0980  addic 5, 30, 384
  03f0984  stfs 1, 20(31)
  03f0988  lfs 1, 24(3)
  03f098c  stfs 1, 24(31)
  03f0990  lfs 1, 28(3)
  03f0994  stw 4, 288(30)
  03f0998  ori 3, 31, 0
  03f099c  stfs 1, 28(31)
  03f09a0  li 4, 0
  03f09a4  stw 29, 532(30)
  03f09a8  stw 29, 536(30)
  03f09ac  stw 29, 540(30)
  03f09b0  stw 29, 572(30)
  03f09b4  bl 0xf0ea8
  03f09b8  nop
  03f09bc  addic 5, 30, 448
  03f09c0  ori 3, 31, 0
  03f09c4  li 4, 1
  03f09c8  bl 0xf0ea8
  03f09cc  nop
  03f09d0  lfs 1, 72(31)
  03f09d4  stw 29, 548(30)
  03f09d8  li 3, -1
  03f09dc  stfs 1, 544(30)
  03f09e0  lfs 1, 68(31)
  03f09e4  stw 29, 556(30)
  03f09e8  stw 3, 592(30)
  03f09ec  lhz 3, 50(31)
  03f09f0  stw 29, 576(30)
  03f09f4  extsh 3, 3
  03f09f8  stfs 1, 552(30)
  03f09fc  cmpwi 3, 128
  03f0a00  bf 0, 0x3f0a0c
  03f0a04  li 3, 128
  03f0a08  sth 3, 50(31)
  03f0a0c  lwz 3, 568(30)
  03f0a10  cmpwi 3, -1
  03f0a14  bt 2, 0x3f0a60
  03f0a18  lis 5, 164
  03f0a1c  slwi 3, 3, 8
  03f0a20  li 4, 8
  03f0a24  lwz 6, -28512(5)
  03f0a28  li 5, 0
  03f0a2c  addc 3, 6, 3
  03f0a30  li 6, 0
  03f0a34  clrldi 29, 3, 32
  03f0a38  ori 3, 29, 0
  03f0a3c  bl 0xfddc0
  03f0a40  nop
  03f0a44  lhz 3, 52(29)
  03f0a48  li 4, 0
  03f0a4c  li 5, -66
  03f0a50  and 3, 3, 5
  03f0a54  stb 4, 48(29)
  03f0a58  stw 4, 148(29)
  03f0a5c  sth 3, 52(29)
  03f0a60  lis 3, 151
  03f0a64  lis 4, 161
  03f0a68  lbz 5, 176(31)
  03f0a6c  addic 4, 4, -13692
  03f0a70  lwz 3, -25488(3)
  03f0a74  addc 4, 5, 4
  03f0a78  slwi 3, 3, 4
  03f0a7c  clrldi 4, 4, 32
  03f0a80  extsw 3, 3
  03f0a84  lbzx 3, 4, 3
  03f0a88  cmpwi 3, 255
  03f0a8c  bt 2, 0x3f0b28
  03f0a90  lwz 3, 588(30)
  03f0a94  cmpwi 3, -1
  03f0a98  bt 2, 0x3f0b28
  03f0a9c  lwz 4, 584(30)
  03f0aa0  cmpwi 4, -1
  03f0aa4  bt 2, 0x3f0b28
  03f0aa8  slwi 3, 3, 2
  03f0aac  extsw 3, 3
  03f0ab0  lwzx 28, 28, 3
  03f0ab4  lwz 3, 0(28)
  03f0ab8  addic 3, 3, -2
  03f0abc  cmpwi 3, 0
  03f0ac0  bf 1, 0x3f0afc
  03f0ac4  ori 27, 28, 0
  03f0ac8  li 29, 0
  03f0acc  addic 26, 27, 16
  03f0ad0  addic 4, 27, 32
  03f0ad4  ori 3, 26, 0
  03f0ad8  bl 0x5e8548
  03f0adc  nop
  03f0ae0  stfs 1, 28(27)
  03f0ae4  lwz 3, 0(28)
  03f0ae8  addic 29, 29, 1
  03f0aec  ori 27, 26, 0
  03f0af0  addic 3, 3, -2
  03f0af4  cmpw 29, 3
  03f0af8  bt 0, 0x3f0acc
  03f0afc  lfs 1, 16(28)
  03f0b00  li 3, 1
  03f0b04  stfs 1, 16(31)
  03f0b08  lfs 1, 20(28)
  03f0b0c  stfs 1, 20(31)
  03f0b10  lfs 1, 24(28)
  03f0b14  stfs 1, 24(31)
  03f0b18  lfs 1, 28(28)
  03f0b1c  stb 3, 32(31)
  03f0b20  stfs 1, 28(31)
  03f0b24  b 0x3f235c
  03f0b28  li 3, 2
  03f0b2c  stb 3, 32(31)
  03f0b30  b 0x3f235c
  03f0b34  lis 3, 165
  03f0b38  addic 29, 3, 7136
  03f0b3c  lwz 3, 588(30)
  03f0b40  slwi 4, 3, 2
  03f0b44  lwz 3, 584(30)
  03f0b48  extsw 4, 4
  03f0b4c  cmpwi 3, -1
  03f0b50  lwzx 29, 29, 4
  03f0b54  bt 2, 0x3f0b74
  03f0b58  lis 5, 151
  03f0b5c  extsw 4, 3
  03f0b60  addic 3, 5, -25248
  03f0b64  bl 0x110b70
  03f0b68  nop
  03f0b6c  cmpwi 3, 0
  03f0b70  bt 2, 0x3f235c
  03f0b74  lis 4, 63
  03f0b78  li 3, -1
  03f0b7c  addi 27, 4, 1328
  03f0b80  addic 28, 31, 16
  03f0b84  addic 5, 1, 208
  03f0b88  stw 3, 584(30)
  03f0b8c  ori 3, 29, 0
  03f0b90  lfs 1, 32(27)
  03f0b94  lfs 2, 36(27)
  03f0b98  addic 6, 1, 644
  03f0b9c  lfs 3, 40(27)
  03f0ba0  addic 7, 1, 640
  03f0ba4  ori 4, 28, 0
  03f0ba8  li 9, 0
  03f0bac  bl 0x10d7a0
  03f0bb0  nop
  03f0bb4  lwz 3, 644(1)
  03f0bb8  extsw 3, 3
  03f0bbc  bl 0x502730
  03f0bc0  nop
  03f0bc4  lfs 2, 28(29)
  03f0bc8  ori 3, 28, 0
  03f0bcc  lfs 3, 640(1)
  03f0bd0  lwz 4, 0(29)
  03f0bd4  fmadds 31, 1, 2, 3
  03f0bd8  slwi 4, 4, 4
  03f0bdc  addc 4, 29, 4
  03f0be0  clrldi 4, 4, 32
  03f0be4  fadds 31, 31, 27
  03f0be8  bl 0x5e8548
  03f0bec  nop
  03f0bf0  lis 3, 114
  03f0bf4  lfs 3, 44(27)
  03f0bf8  fmr 4, 1
  03f0bfc  lfs 1, 532(30)
  03f0c00  fmuls 5, 1, 1
  03f0c04  lfs 2, -3048(3)
  03f0c08  fmuls 6, 2, 3
  03f0c0c  fmr 1, 4
  03f0c10  fmuls 6, 6, 27
  03f0c14  fdivs 4, 5, 6
  03f0c18  fcmpu 0, 1, 4
  03f0c1c  lfs 1, 532(30)
  03f0c20  bt 1, 0x3f0c54
  03f0c24  fnmsubs 2, 2, 3, 1
  03f0c28  lis 3, 133
  03f0c2c  lis 4, 114
  03f0c30  stfs 2, 532(30)
  03f0c34  lfs 1, 17212(3)
  03f0c38  lfs 3, -3052(4)
  03f0c3c  fmuls 1, 1, 3
  03f0c40  fcmpu 0, 2, 1
  03f0c44  cror 6, 1, 2
  03f0c48  bt 6, 0x3f0c78
  03f0c4c  stfs 1, 532(30)
  03f0c50  b 0x3f0c78
  03f0c54  fmadds 2, 2, 3, 1
  03f0c58  lis 3, 114
  03f0c5c  stfs 2, 532(30)
  03f0c60  lfs 1, -3052(3)
  03f0c64  fmuls 1, 1, 29
  03f0c68  fcmpu 0, 2, 1
  03f0c6c  cror 6, 0, 2
  03f0c70  bt 6, 0x3f0c78
  03f0c74  stfs 1, 532(30)
  03f0c78  lfs 1, 28(29)
  03f0c7c  fdivs 1, 31, 1
  03f0c80  bl 0x502758
  03f0c84  nop
  03f0c88  stw 3, 644(1)
  03f0c8c  bl 0x502730
  03f0c90  nop
  03f0c94  lfs 2, 28(29)
  03f0c98  lwz 3, 644(1)
  03f0c9c  fnmsubs 1, 1, 2, 31
  03f0ca0  fdivs 1, 1, 2
  03f0ca4  stfs 1, 640(1)
  03f0ca8  lwz 4, 0(29)
  03f0cac  addic 5, 4, -1
  03f0cb0  cmpw 3, 5
  03f0cb4  bt 0, 0x3f0da0
  03f0cb8  lwz 3, 308(30)
  03f0cbc  cmpwi 3, -1
  03f0cc0  bt 2, 0x3f0d68
  03f0cc4  lis 3, 133
  03f0cc8  lis 5, 114
  03f0ccc  lfs 1, 17212(3)
  03f0cd0  lfs 2, -3052(5)
  03f0cd4  lfs 3, 532(30)
  03f0cd8  fmuls 1, 1, 2
  03f0cdc  fcmpu 0, 3, 1
  03f0ce0  bt 1, 0x3f0d68
  03f0ce4  li 3, 0
  03f0ce8  lwz 5, 304(30)
  03f0cec  lis 4, 63
  03f0cf0  vspltisw 3, -1
  03f0cf4  li 6, 2
  03f0cf8  addi 4, 4, 1328
  03f0cfc  stw 3, 572(30)
  03f0d00  li 7, 4
  03f0d04  lfs 1, 16(5)
  03f0d08  li 3, 1
  03f0d0c  li 8, 48
  03f0d10  vslw 3, 3, 3
  03f0d14  stfs 1, 16(31)
  03f0d18  lfs 1, 20(5)
  03f0d1c  stfs 1, 20(31)
  03f0d20  lfs 1, 24(5)
  03f0d24  stfs 1, 24(31)
  03f0d28  lfs 1, 28(5)
  03f0d2c  lis 5, 114
  03f0d30  stfs 1, 28(31)
  03f0d34  stw 3, 288(30)
  03f0d38  stb 6, 188(31)
  03f0d3c  li 3, -3056
  03f0d40  stb 7, 32(31)
  03f0d44  lvlx 2, 8, 4
  03f0d48  vspltw 2, 2, 0
  03f0d4c  lvlx 4, 3, 5
  03f0d50  li 3, 518
  03f0d54  vmaddfp 2, 4, 2, 3
  03f0d58  vctsxs 2, 2, 0
  03f0d5c  vsplth 2, 2, 1
  03f0d60  stvehx 2, 3, 30
  03f0d64  b 0x3f235c
  03f0d68  lis 3, 133
  03f0d6c  lis 5, 114
  03f0d70  lfs 1, 17212(3)
  03f0d74  lfs 2, -3052(5)
  03f0d78  lfs 3, 532(30)
  03f0d7c  fmuls 1, 1, 2
  03f0d80  fcmpu 0, 3, 1
  03f0d84  bt 1, 0x3f0d90
  03f0d88  trap
  03f0d8c  b 0x3f249c
  03f0d90  addic 3, 4, -2
  03f0d94  lis 4, 16256
  03f0d98  stw 3, 644(1)
  03f0d9c  stw 4, 640(1)
  03f0da0  slwi 3, 3, 4
  03f0da4  addic 27, 1, 208
  03f0da8  addc 4, 29, 3
  03f0dac  ori 3, 27, 0
  03f0db0  addic 5, 4, 32
  03f0db4  addic 6, 4, 16
  03f0db8  clrldi 4, 5, 32
  03f0dbc  clrldi 5, 6, 32
  03f0dc0  bl 0x5e81f0
  03f0dc4  nop
  03f0dc8  lfs 1, 640(1)
  03f0dcc  lfs 2, 208(1)
  03f0dd0  ori 3, 27, 0
  03f0dd4  lfs 3, 212(1)
  03f0dd8  fmuls 2, 2, 1
  03f0ddc  lfs 4, 216(1)
  03f0de0  fmuls 3, 3, 1
  03f0de4  lwz 4, 644(1)
  03f0de8  fmuls 1, 4, 1
  03f0dec  slwi 4, 4, 4
  03f0df0  addc 5, 29, 4
  03f0df4  ori 4, 27, 0
  03f0df8  addic 5, 5, 16
  03f0dfc  clrldi 5, 5, 32
  03f0e00  stfs 2, 208(1)
  03f0e04  stfs 3, 212(1)
  03f0e08  stfs 1, 216(1)
  03f0e0c  bl 0x5e7f54
  03f0e10  nop
  03f0e14  lwz 3, 644(1)
  03f0e18  lwz 4, 0(29)
  03f0e1c  addic 3, 3, 1
  03f0e20  addic 4, 4, -8
  03f0e24  cmpw 3, 4
  03f0e28  bf 0, 0x3f0e88
  03f0e2c  slwi 3, 3, 4
  03f0e30  lfs 31, 72(31)
  03f0e34  lfs 1, 16(31)
  03f0e38  addc 3, 29, 3
  03f0e3c  lfs 2, 20(31)
  03f0e40  clrldi 3, 3, 32
  03f0e44  lfs 3, 16(3)
  03f0e48  lfs 4, 20(3)
  03f0e4c  fsubs 1, 3, 1
  03f0e50  fsubs 2, 4, 2
  03f0e54  bl 0x5e8338
  03f0e58  nop
  03f0e5c  lis 3, 63
  03f0e60  fmr 2, 1
  03f0e64  addic 5, 30, 512
  03f0e68  fmr 1, 31
  03f0e6c  addi 3, 3, 1328
  03f0e70  lfs 3, 52(3)
  03f0e74  lfs 4, 24(3)
  03f0e78  lfs 5, 56(3)
  03f0e7c  bl 0xff190
  03f0e80  nop
  03f0e84  b 0x3f0ed4
  03f0e88  lfs 1, 560(1)
  03f0e8c  lfs 2, 16(31)
  03f0e90  lfs 31, 72(31)
  03f0e94  lfs 3, 564(1)
  03f0e98  fsubs 1, 1, 2
  03f0e9c  lfs 2, 20(31)
  03f0ea0  fsubs 2, 3, 2
  03f0ea4  bl 0x5e8338
  03f0ea8  nop
  03f0eac  lis 3, 63
  03f0eb0  fmr 2, 1
  03f0eb4  addic 5, 30, 512
  03f0eb8  fmr 1, 31
  03f0ebc  addi 3, 3, 1328
  03f0ec0  lfs 3, 52(3)
  03f0ec4  lfs 4, 24(3)
  03f0ec8  lfs 5, 56(3)
  03f0ecc  bl 0xff190
  03f0ed0  nop
  03f0ed4  addic 29, 1, 192
  03f0ed8  stfs 1, 72(31)
  03f0edc  addic 4, 1, 208
  03f0ee0  ori 3, 29, 0
  03f0ee4  ori 5, 28, 0
  03f0ee8  bl 0x5e81f0
  03f0eec  nop
  03f0ef0  ori 3, 29, 0
  03f0ef4  bl 0x5e8030
  03f0ef8  nop
  03f0efc  lfs 2, 532(30)
  03f0f00  ori 3, 29, 0
  03f0f04  ori 4, 29, 0
  03f0f08  fsub 3, 2, 1
  03f0f0c  fsel 1, 3, 1, 2
  03f0f10  bl 0x5e7f98
  03f0f14  nop
  03f0f18  ori 3, 28, 0
  03f0f1c  ori 4, 28, 0
  03f0f20  ori 5, 29, 0
  03f0f24  bl 0x5e7f54
  03f0f28  nop
  03f0f2c  lfs 1, 192(1)
  03f0f30  lfs 2, 196(1)
  03f0f34  bl 0x5e8338
  03f0f38  nop
  03f0f3c  lfs 2, 72(31)
  03f0f40  bl 0x5025e0
  03f0f44  nop
  03f0f48  fmr 31, 1
  03f0f4c  bl 0x5e8078
  03f0f50  nop
  03f0f54  lis 3, 63
  03f0f58  lfs 2, 532(30)
  03f0f5c  lis 28, 114
  03f0f60  addi 29, 3, 1328
  03f0f64  lfs 3, 60(29)
  03f0f68  lfs 4, -3052(28)
  03f0f6c  fmuls 2, 2, 3
  03f0f70  fmuls 4, 4, 29
  03f0f74  fmuls 2, 2, 1
  03f0f78  fmr 1, 31
  03f0f7c  fdivs 31, 2, 4
  03f0f80  bl 0x5e8128
  03f0f84  nop
  03f0f88  lfs 2, 64(29)
  03f0f8c  lfs 3, 532(30)
  03f0f90  lfs 5, -3052(28)
  03f0f94  fmuls 2, 3, 2
  03f0f98  fmuls 4, 5, 29
  03f0f9c  lfs 3, 68(29)
  03f0fa0  lis 27, 114
  03f0fa4  lfs 29, 72(29)
  03f0fa8  addic 5, 30, 540
  03f0fac  lfs 7, 76(29)
  03f0fb0  fmuls 5, 5, 7
  03f0fb4  fmuls 1, 2, 1
  03f0fb8  fdivs 30, 1, 4
  03f0fbc  lfs 1, 68(31)
  03f0fc0  lfs 6, -3048(27)
  03f0fc4  fmuls 3, 6, 3
  03f0fc8  fmr 2, 31
  03f0fcc  fmuls 4, 6, 29
  03f0fd0  bl 0xff190
  03f0fd4  nop
  03f0fd8  stfs 1, 68(31)
  03f0fdc  lfs 4, 80(29)
  03f0fe0  addic 5, 30, 536
  03f0fe4  lfs 5, 84(29)
  03f0fe8  lfs 1, 64(31)
  03f0fec  lfs 2, -3048(27)
  03f0ff0  lfs 6, -3052(28)
  03f0ff4  fmuls 3, 2, 29
  03f0ff8  fmuls 4, 2, 4
  03f0ffc  fmuls 5, 6, 5
  03f1000  fmr 2, 30
  03f1004  bl 0xff190
  03f1008  nop
  03f100c  stfs 1, 64(31)
  03f1010  b 0x3f235c
  03f1014  li 3, 0
  03f1018  lwz 5, 572(30)
  03f101c  addic 23, 30, 336
  03f1020  fsubs 1, 1, 2
  03f1024  subc 3, 3, 5
  03f1028  fsubs 2, 3, 4
  03f102c  addic 4, 30, 288
  03f1030  cntlzw 3, 3
  03f1034  subc 4, 4, 23
  03f1038  sldi 3, 3, 58
  03f103c  sradi 3, 3, 63
  03f1040  and 3, 3, 4
  03f1044  addc 23, 23, 3
  03f1048  lwz 24, 0(23)
  03f104c  bl 0x5e8338
  03f1050  nop
  03f1054  lis 3, 63
  03f1058  fmr 2, 1
  03f105c  fmr 1, 31
  03f1060  addic 5, 30, 512
  03f1064  addi 28, 3, 1328
  03f1068  lfs 3, 52(28)
  03f106c  lfs 4, 24(28)
  03f1070  lfs 5, 56(28)
  03f1074  bl 0xff190
  03f1078  nop
  03f107c  stfs 1, 72(31)
  03f1080  addic 29, 31, 192
  03f1084  lwz 3, 576(30)
  03f1088  addic 25, 30, 464
  03f108c  lfs 30, 88(28)
  03f1090  addic 27, 30, 556
  03f1094  lfs 31, 92(28)
  03f1098  cmpwi 3, 0
  03f109c  addic 28, 30, 548
  03f10a0  addic 26, 30, 400
  03f10a4  bt 2, 0x3f10c8
  03f10a8  lhz 4, 166(3)
  03f10ac  cmpwi 4, 848
  03f10b0  bf 2, 0x3f10c8
  03f10b4  lbz 3, 32(3)
  03f10b8  cmpwi 3, 254
  03f10bc  cmpwi 1, 3, 253
  03f10c0  bt 2, 0x3f10c8
  03f10c4  bf 6, 0x3f121c
  03f10c8  addic 22, 1, 224
  03f10cc  ori 3, 31, 0
  03f10d0  li 4, 0
  03f10d4  ori 5, 22, 0
  03f10d8  bl 0xf1114
  03f10dc  nop
  03f10e0  addic 3, 1, 272
  03f10e4  addic 4, 1, 560
  03f10e8  ori 5, 22, 0
  03f10ec  bl 0x502a64
  03f10f0  nop
  03f10f4  lfs 1, 272(1)
  03f10f8  addic 22, 1, 496
  03f10fc  lfs 2, 276(1)
  03f1100  ori 4, 29, 0
  03f1104  stfs 1, 240(1)
  03f1108  ori 3, 22, 0
  03f110c  lfs 1, 280(1)
  03f1110  stfs 2, 244(1)
  03f1114  lfs 2, 284(1)
  03f1118  stfs 1, 248(1)
  03f111c  stfs 2, 252(1)
  03f1120  bl 0x5010c0
  03f1124  nop
  03f1128  addic 3, 1, 240
  03f112c  ori 5, 22, 0
  03f1130  ori 4, 3, 0
  03f1134  bl 0x5e825c
  03f1138  nop
  03f113c  lfs 1, 240(1)
  03f1140  lfs 2, 244(1)
  03f1144  lfs 28, 544(30)
  03f1148  bl 0x5e8338
  03f114c  nop
  03f1150  lis 3, 63
  03f1154  lis 21, 114
  03f1158  fmr 2, 1
  03f115c  addi 29, 3, 1328
  03f1160  fmr 1, 28
  03f1164  lis 22, 114
  03f1168  ori 5, 28, 0
  03f116c  lfs 26, 96(29)
  03f1170  lfs 3, -3048(21)
  03f1174  lfs 5, -3052(22)
  03f1178  fmuls 4, 3, 31
  03f117c  fmuls 3, 3, 26
  03f1180  fmuls 5, 5, 26
  03f1184  bl 0xff190
  03f1188  nop
  03f118c  stfs 1, 544(30)
  03f1190  lfs 1, 244(1)
  03f1194  lfs 3, 240(1)
  03f1198  fmuls 1, 1, 1
  03f119c  lfs 31, 552(30)
  03f11a0  lfs 2, 248(1)
  03f11a4  fmadds 1, 3, 3, 1
  03f11a8  fsqrts 1, 1
  03f11ac  bl 0x5e8338
  03f11b0  nop
  03f11b4  lfs 5, 84(29)
  03f11b8  ori 5, 27, 0
  03f11bc  lfs 4, -3048(21)
  03f11c0  lfs 6, -3052(22)
  03f11c4  fmuls 3, 4, 30
  03f11c8  fmuls 4, 4, 26
  03f11cc  fmuls 5, 6, 5
  03f11d0  fneg 2, 1
  03f11d4  fmr 1, 31
  03f11d8  bl 0xff190
  03f11dc  nop
  03f11e0  lfs 2, 544(30)
  03f11e4  stfs 1, 552(30)
  03f11e8  ori 3, 26, 0
  03f11ec  li 4, 2
  03f11f0  fmr 1, 2
  03f11f4  bl 0x501980
  03f11f8  nop
  03f11fc  ori 3, 25, 0
  03f1200  li 4, 2
  03f1204  lfs 1, 552(30)
  03f1208  bl 0x501980
  03f120c  nop
  03f1210  li 3, 0
  03f1214  stw 3, 576(30)
  03f1218  b 0x3f1368
  03f121c  addic 22, 1, 224
  03f1220  li 4, 0
  03f1224  ori 3, 31, 0
  03f1228  ori 5, 22, 0
  03f122c  bl 0xf1114
  03f1230  nop
  03f1234  lwz 4, 576(30)
  03f1238  addic 3, 1, 288
  03f123c  ori 5, 22, 0
  03f1240  addic 4, 4, 16
  03f1244  bl 0x502a64
  03f1248  nop
  03f124c  lfs 1, 288(1)
  03f1250  addic 22, 1, 496
  03f1254  lfs 2, 292(1)
  03f1258  ori 4, 29, 0
  03f125c  stfs 1, 240(1)
  03f1260  ori 3, 22, 0
  03f1264  lfs 1, 296(1)
  03f1268  stfs 2, 244(1)
  03f126c  lfs 2, 300(1)
  03f1270  stfs 1, 248(1)
  03f1274  stfs 2, 252(1)
  03f1278  bl 0x5010c0
  03f127c  nop
  03f1280  addic 3, 1, 240
  03f1284  ori 5, 22, 0
  03f1288  ori 4, 3, 0
  03f128c  bl 0x5e825c
  03f1290  nop
  03f1294  lfs 1, 240(1)
  03f1298  lfs 2, 244(1)
  03f129c  lfs 28, 544(30)
  03f12a0  bl 0x5e8338
  03f12a4  nop
  03f12a8  lis 3, 63
  03f12ac  lis 21, 114
  03f12b0  fmr 2, 1
  03f12b4  addi 29, 3, 1328
  03f12b8  fmr 1, 28
  03f12bc  lis 22, 114
  03f12c0  ori 5, 28, 0
  03f12c4  lfs 26, 96(29)
  03f12c8  lfs 3, -3048(21)
  03f12cc  lfs 5, -3052(22)
  03f12d0  fmuls 4, 3, 31
  03f12d4  fmuls 3, 3, 26
  03f12d8  fmuls 5, 5, 26
  03f12dc  bl 0xff190
  03f12e0  nop
  03f12e4  stfs 1, 544(30)
  03f12e8  lfs 1, 244(1)
  03f12ec  lfs 3, 240(1)
  03f12f0  fmuls 1, 1, 1
  03f12f4  lfs 31, 552(30)
  03f12f8  lfs 2, 248(1)
  03f12fc  fmadds 1, 3, 3, 1
  03f1300  fsqrts 1, 1
  03f1304  bl 0x5e8338
  03f1308  nop
  03f130c  lfs 5, 84(29)
  03f1310  ori 5, 27, 0
  03f1314  lfs 4, -3048(21)
  03f1318  lfs 6, -3052(22)
  03f131c  fmuls 3, 4, 30
  03f1320  fmuls 4, 4, 26
  03f1324  fmuls 5, 6, 5
  03f1328  fneg 2, 1
  03f132c  fmr 1, 31
  03f1330  bl 0xff190
  03f1334  nop
  03f1338  lfs 2, 544(30)
  03f133c  stfs 1, 552(30)
  03f1340  ori 3, 26, 0
  03f1344  li 4, 2
  03f1348  fmr 1, 2
  03f134c  bl 0x501980
  03f1350  nop
  03f1354  ori 3, 25, 0
  03f1358  li 4, 2
  03f135c  lfs 1, 552(30)
  03f1360  bl 0x501980
  03f1364  nop
  03f1368  cmpwi 24, 0
  03f136c  bf 1, 0x3f1420
  03f1370  lwz 3, 16(23)
  03f1374  lwz 4, 0(3)
  03f1378  addic 4, 4, -1
  03f137c  cmpw 24, 4
  03f1380  bf 0, 0x3f1420
  03f1384  slwi 29, 24, 4
  03f1388  addic 4, 1, 560
  03f138c  addc 3, 3, 29
  03f1390  addic 3, 3, 16
  03f1394  clrldi 3, 3, 32
  03f1398  bl 0x5e8588
  03f139c  nop
  03f13a0  fmr 31, 1
  03f13a4  fcmpu 0, 31, 29
  03f13a8  cror 6, 1, 2
  03f13ac  bt 6, 0x3f1420
  03f13b0  lfs 1, 568(1)
  03f13b4  lfs 2, 24(31)
  03f13b8  lis 3, 63
  03f13bc  fsubs 1, 1, 2
  03f13c0  addi 3, 3, 1328
  03f13c4  lfs 2, 44(3)
  03f13c8  fabs 1, 1
  03f13cc  fcmpu 0, 1, 2
  03f13d0  cror 6, 1, 2
  03f13d4  bt 6, 0x3f1420
  03f13d8  lwz 3, 16(23)
  03f13dc  addic 4, 1, 560
  03f13e0  addc 3, 3, 29
  03f13e4  addic 3, 3, 32
  03f13e8  clrldi 3, 3, 32
  03f13ec  bl 0x5e8548
  03f13f0  nop
  03f13f4  fcmpu 0, 1, 31
  03f13f8  cror 6, 0, 2
  03f13fc  bt 6, 0x3f1420
  03f1400  lwz 3, 16(23)
  03f1404  lwz 3, 0(3)
  03f1408  addic 3, 3, -2
  03f140c  cmpw 24, 3
  03f1410  bf 0, 0x3f1420
  03f1414  lwz 3, 0(23)
  03f1418  addic 3, 3, 1
  03f141c  stw 3, 0(23)
  03f1420  slwi 24, 24, 4
  03f1424  lwz 4, 16(23)
  03f1428  addic 28, 1, 256
  03f142c  addic 29, 31, 16
  03f1430  addc 4, 4, 24
  03f1434  ori 3, 28, 0
  03f1438  addic 4, 4, 16
  03f143c  ori 5, 29, 0
  03f1440  clrldi 4, 4, 32
  03f1444  bl 0x5e81f0
  03f1448  nop
  03f144c  ori 3, 28, 0
  03f1450  bl 0x5e8030
  03f1454  nop
  03f1458  lis 3, 114
  03f145c  lis 4, 63
  03f1460  addi 4, 4, 1328
  03f1464  lfs 6, -3048(3)
  03f1468  lfs 2, 532(30)
  03f146c  lfs 31, 4(4)
  03f1470  fmuls 3, 2, 2
  03f1474  fmuls 5, 6, 31
  03f1478  fmuls 5, 5, 27
  03f147c  fdivs 3, 3, 5
  03f1480  fcmpu 0, 1, 3
  03f1484  fmr 1, 6
  03f1488  bt 0, 0x3f14d8
  03f148c  lwz 3, 16(23)
  03f1490  addic 28, 1, 560
  03f1494  addc 3, 3, 24
  03f1498  ori 4, 28, 0
  03f149c  addic 3, 3, 16
  03f14a0  clrldi 3, 3, 32
  03f14a4  bl 0x5e8548
  03f14a8  nop
  03f14ac  fmr 30, 1
  03f14b0  ori 3, 29, 0
  03f14b4  ori 4, 28, 0
  03f14b8  bl 0x5e8548
  03f14bc  nop
  03f14c0  fcmpu 0, 30, 1
  03f14c4  cror 6, 1, 2
  03f14c8  bt 6, 0x3f1504
  03f14cc  lis 3, 114
  03f14d0  lfs 1, -3048(3)
  03f14d4  lfs 2, 532(30)
  03f14d8  fnmsubs 1, 1, 31, 2
  03f14dc  lis 3, 63
  03f14e0  addi 3, 3, 1328
  03f14e4  stfs 1, 532(30)
  03f14e8  lfs 2, 40(3)
  03f14ec  fcmpu 0, 1, 2
  03f14f0  cror 6, 1, 2
  03f14f4  bt 6, 0x3f1540
  03f14f8  li 3, 0
  03f14fc  stw 3, 532(30)
  03f1500  b 0x3f1540
  03f1504  lis 3, 114
  03f1508  lfs 1, 532(30)
  03f150c  lis 4, 63
  03f1510  lfs 2, -3048(3)
  03f1514  addi 3, 4, 1328
  03f1518  fmadds 1, 2, 31, 1
  03f151c  lis 4, 114
  03f1520  stfs 1, 532(30)
  03f1524  lfs 2, 44(3)
  03f1528  lfs 31, -3052(4)
  03f152c  fmuls 31, 31, 2
  03f1530  fcmpu 0, 1, 31
  03f1534  cror 6, 0, 2
  03f1538  bt 6, 0x3f1540
  03f153c  stfs 31, 532(30)
  03f1540  lwz 3, 16(23)
  03f1544  addic 28, 1, 560
  03f1548  addc 3, 3, 24
  03f154c  ori 4, 28, 0
  03f1550  addic 3, 3, 16
  03f1554  clrldi 3, 3, 32
  03f1558  bl 0x5e8548
  03f155c  nop
  03f1560  fmr 31, 1
  03f1564  ori 3, 29, 0
  03f1568  ori 4, 28, 0
  03f156c  bl 0x5e8548
  03f1570  nop
  03f1574  fcmpu 0, 31, 1
  03f1578  cror 6, 1, 2
  03f157c  bt 6, 0x3f159c
  03f1580  addic 3, 1, 256
  03f1584  lfs 1, 532(30)
  03f1588  ori 4, 3, 0
  03f158c  fneg 1, 1
  03f1590  bl 0x5e7f98
  03f1594  nop
  03f1598  b 0x3f15b0
  03f159c  addic 3, 1, 256
  03f15a0  lfs 1, 532(30)
  03f15a4  ori 4, 3, 0
  03f15a8  bl 0x5e7f98
  03f15ac  nop
  03f15b0  addic 5, 1, 256
  03f15b4  ori 3, 29, 0
  03f15b8  ori 4, 29, 0
  03f15bc  bl 0x5e7f54
  03f15c0  nop
  03f15c4  lfs 1, 256(1)
  03f15c8  lfs 2, 260(1)
  03f15cc  bl 0x5e8338
  03f15d0  nop
  03f15d4  lfs 2, 72(31)
  03f15d8  bl 0x5025e0
  03f15dc  nop
  03f15e0  fmr 31, 1
  03f15e4  bl 0x5e8078
  03f15e8  nop
  03f15ec  lis 3, 63
  03f15f0  lfs 2, 532(30)
  03f15f4  lis 28, 114
  03f15f8  addi 29, 3, 1328
  03f15fc  lfs 3, 60(29)
  03f1600  lfs 4, 44(29)
  03f1604  fmuls 2, 2, 3
  03f1608  lfs 5, -3052(28)
  03f160c  fmr 30, 4
  03f1610  fmuls 2, 2, 1
  03f1614  fmuls 3, 5, 30
  03f1618  fmr 1, 31
  03f161c  fdivs 31, 2, 3
  03f1620  bl 0x5e8128
  03f1624  nop
  03f1628  lfs 2, 64(29)
  03f162c  lfs 3, 532(30)
  03f1630  lfs 5, -3052(28)
  03f1634  fmuls 2, 3, 2
  03f1638  fmuls 4, 5, 30
  03f163c  lfs 3, 68(29)
  03f1640  lis 27, 114
  03f1644  lfs 29, 72(29)
  03f1648  addic 5, 30, 540
  03f164c  lfs 7, 76(29)
  03f1650  fmuls 5, 5, 7
  03f1654  fmuls 1, 2, 1
  03f1658  fdivs 30, 1, 4
  03f165c  lfs 1, 68(31)
  03f1660  lfs 6, -3048(27)
  03f1664  fmuls 3, 6, 3
  03f1668  fmr 2, 31
  03f166c  fmuls 4, 6, 29
  03f1670  bl 0xff190
  03f1674  nop
  03f1678  stfs 1, 68(31)
  03f167c  lfs 4, 80(29)
  03f1680  addic 5, 30, 536
  03f1684  lfs 5, 84(29)
  03f1688  lfs 1, 64(31)
  03f168c  lfs 2, -3048(27)
  03f1690  lfs 6, -3052(28)
  03f1694  fmuls 3, 2, 29
  03f1698  fmuls 4, 2, 4
  03f169c  fmuls 5, 6, 5
  03f16a0  fmr 2, 30
  03f16a4  bl 0xff190
  03f16a8  nop
  03f16ac  lwz 3, 572(30)
  03f16b0  stfs 1, 64(31)
  03f16b4  cmpwi 3, 0
  03f16b8  bt 2, 0x3f16c4
  03f16bc  lwz 3, 580(30)
  03f16c0  b 0x3f16c8
  03f16c4  lwz 3, 524(30)
  03f16c8  extsw 4, 3
  03f16cc  addic 3, 1, 560
  03f16d0  bl 0x110b70
  03f16d4  nop
  03f16d8  cmpwi 3, 0
  03f16dc  bt 2, 0x3f17bc
  03f16e0  lwz 3, 572(30)
  03f16e4  cmpwi 1, 3, 0
  03f16e8  bt 6, 0x3f16f4
  03f16ec  lwz 3, 564(30)
  03f16f0  b 0x3f16f8
  03f16f4  lwz 3, 560(30)
  03f16f8  cmpwi 3, -1
  03f16fc  bt 2, 0x3f176c
  03f1700  lis 3, 165
  03f1704  addic 3, 3, 7136
  03f1708  bt 6, 0x3f1714
  03f170c  lwz 29, 564(30)
  03f1710  b 0x3f1718
  03f1714  lwz 29, 560(30)
  03f1718  slwi 4, 29, 2
  03f171c  li 28, 0
  03f1720  extsw 29, 4
  03f1724  lwzx 29, 3, 29
  03f1728  lwz 3, 0(29)
  03f172c  addic 3, 3, -2
  03f1730  cmpwi 3, 0
  03f1734  bf 1, 0x3f176c
  03f1738  ori 27, 29, 0
  03f173c  addic 26, 27, 16
  03f1740  addic 4, 27, 32
  03f1744  ori 3, 26, 0
  03f1748  bl 0x5e8548
  03f174c  nop
  03f1750  stfs 1, 28(27)
  03f1754  lwz 3, 0(29)
  03f1758  addic 28, 28, 1
  03f175c  ori 27, 26, 0
  03f1760  addic 3, 3, -2
  03f1764  cmpw 28, 3
  03f1768  bt 0, 0x3f173c
  03f176c  li 3, 3
  03f1770  vspltisw 2, -1
  03f1774  lis 5, 63
  03f1778  li 6, 4
  03f177c  li 4, 48
  03f1780  addi 5, 5, 1328
  03f1784  stb 3, 188(31)
  03f1788  stb 6, 32(31)
  03f178c  lis 3, 114
  03f1790  vslw 2, 2, 2
  03f1794  li 6, -3056
  03f1798  lvlx 3, 4, 5
  03f179c  vspltw 3, 3, 0
  03f17a0  lvlx 4, 6, 3
  03f17a4  li 3, 518
  03f17a8  vmaddfp 2, 4, 3, 2
  03f17ac  vctsxs 2, 2, 0
  03f17b0  vsplth 2, 2, 1
  03f17b4  stvehx 2, 3, 30
  03f17b8  b 0x3f235c
  03f17bc  addic 3, 1, 560
  03f17c0  lwz 4, 520(30)
  03f17c4  extsw 4, 4
  03f17c8  bl 0x110b70
  03f17cc  nop
  03f17d0  cmpwi 3, 0
  03f17d4  bt 2, 0x3f235c
  03f17d8  addic 3, 30, 516
  03f17dc  bl 0x4fffb4
  03f17e0  nop
  03f17e4  cmpwi 3, 0
  03f17e8  bf 2, 0x3f1804
  03f17ec  lwz 3, 576(30)
  03f17f0  cmpwi 3, 0
  03f17f4  bf 2, 0x3f235c
  03f17f8  lwz 3, 596(30)
  03f17fc  cmpwi 3, 0
  03f1800  bt 2, 0x3f235c
  03f1804  lis 3, 63
  03f1808  vspltisw 2, -1
  03f180c  lis 29, 114
  03f1810  addi 28, 3, 1328
  03f1814  li 3, 100
  03f1818  li 4, -3056
  03f181c  vslw 2, 2, 2
  03f1820  li 6, 516
  03f1824  addic 26, 1, 224
  03f1828  lvlx 3, 3, 28
  03f182c  lvlx 4, 4, 29
  03f1830  vspltw 3, 3, 0
  03f1834  addic 27, 1, 304
  03f1838  ori 5, 26, 0
  03f183c  vmaddfp 2, 4, 3, 2
  03f1840  ori 3, 27, 0
  03f1844  addic 4, 1, 320
  03f1848  vctsxs 2, 2, 0
  03f184c  vsplth 2, 2, 1
  03f1850  stvehx 2, 6, 30
  03f1854  lfs 1, 560(1)
  03f1858  lfs 2, 564(1)
  03f185c  stfs 1, 320(1)
  03f1860  lfs 1, 568(1)
  03f1864  stfs 2, 324(1)
  03f1868  lfs 2, 572(1)
  03f186c  stfs 1, 328(1)
  03f1870  stfs 2, 332(1)
  03f1874  bl 0x5e81f0
  03f1878  nop
  03f187c  lis 5, 114
  03f1880  lfs 1, 104(28)
  03f1884  ori 3, 27, 0
  03f1888  ori 4, 27, 0
  03f188c  lfs 2, -3052(5)
  03f1890  fmuls 1, 2, 1
  03f1894  bl 0x5e84c0
  03f1898  nop
  03f189c  li 3, 0
  03f18a0  lfs 2, -3056(29)
  03f18a4  ori 4, 26, 0
  03f18a8  ori 5, 31, 0
  03f18ac  stw 3, 312(1)
  03f18b0  lfs 3, 12(28)
  03f18b4  ori 3, 27, 0
  03f18b8  lfs 1, 568(1)
  03f18bc  fmuls 2, 2, 3
  03f18c0  fctiwz 2, 2
  03f18c4  stfd 2, 656(1)
  03f18c8  lwz 6, 660(1)
  03f18cc  extsw 6, 6
  03f18d0  bl 0x486008
  03f18d4  nop
  03f18d8  stw 3, 576(30)
  03f18dc  b 0x3f235c
  03f18e0  lwz 3, 560(30)
  03f18e4  cmpwi 3, -1
  03f18e8  bf 2, 0x3f1984
  03f18ec  lis 3, 63
  03f18f0  lis 29, 114
  03f18f4  addi 28, 3, 1328
  03f18f8  addic 3, 31, 24
  03f18fc  lfs 3, 112(28)
  03f1900  lfs 1, 108(28)
  03f1904  lfs 4, -3052(29)
  03f1908  fmuls 2, 4, 3
  03f190c  bl 0x109af0
  03f1910  nop
  03f1914  lfs 31, 40(28)
  03f1918  lis 27, 114
  03f191c  lfs 30, 68(28)
  03f1920  addic 5, 30, 540
  03f1924  lfs 29, 72(28)
  03f1928  fmr 2, 31
  03f192c  lfs 28, 76(28)
  03f1930  lfs 1, 68(31)
  03f1934  lfs 4, -3048(27)
  03f1938  lfs 5, -3052(29)
  03f193c  fmuls 3, 4, 30
  03f1940  fmuls 4, 4, 29
  03f1944  fmuls 5, 5, 28
  03f1948  bl 0xff190
  03f194c  nop
  03f1950  stfs 1, 68(31)
  03f1954  lfs 1, 64(31)
  03f1958  addic 5, 30, 536
  03f195c  lfs 4, -3048(27)
  03f1960  fmr 2, 31
  03f1964  lfs 5, -3052(29)
  03f1968  fmuls 3, 4, 30
  03f196c  fmuls 4, 4, 29
  03f1970  fmuls 5, 5, 28
  03f1974  bl 0xff190
  03f1978  nop
  03f197c  stfs 1, 64(31)
  03f1980  b 0x3f235c
  03f1984  lwz 4, 572(30)
  03f1988  lis 29, 165
  03f198c  cmpwi 4, 0
  03f1990  addic 29, 29, 7136
  03f1994  bt 2, 0x3f199c
  03f1998  lwz 3, 564(30)
  03f199c  slwi 3, 3, 2
  03f19a0  lis 4, 63
  03f19a4  extsw 3, 3
  03f19a8  addi 27, 4, 1328
  03f19ac  addic 28, 31, 16
  03f19b0  addic 6, 1, 652
  03f19b4  addic 7, 1, 648
  03f19b8  lwzx 29, 29, 3
  03f19bc  lfs 1, 32(27)
  03f19c0  addic 5, 1, 352
  03f19c4  lfs 2, 36(27)
  03f19c8  ori 3, 29, 0
  03f19cc  lfs 3, 40(27)
  03f19d0  ori 4, 28, 0
  03f19d4  li 9, 0
  03f19d8  bl 0x10d7a0
  03f19dc  nop
  03f19e0  lwz 3, 652(1)
  03f19e4  extsw 3, 3
  03f19e8  bl 0x502730
  03f19ec  nop
  03f19f0  lfs 2, 28(29)
  03f19f4  lfs 3, 648(1)
  03f19f8  lwz 3, 0(29)
  03f19fc  fmadds 31, 1, 2, 3
  03f1a00  slwi 4, 3, 4
  03f1a04  ori 3, 28, 0
  03f1a08  addc 4, 29, 4
  03f1a0c  clrldi 4, 4, 32
  03f1a10  fadds 31, 31, 27
  03f1a14  bl 0x5e8548
  03f1a18  nop
  03f1a1c  lis 3, 114
  03f1a20  lfs 3, 44(27)
  03f1a24  fmr 4, 1
  03f1a28  lfs 1, 532(30)
  03f1a2c  fmuls 5, 1, 1
  03f1a30  lfs 2, -3048(3)
  03f1a34  fmuls 6, 2, 3
  03f1a38  fmr 1, 4
  03f1a3c  fmuls 6, 6, 27
  03f1a40  fdivs 4, 5, 6
  03f1a44  fcmpu 0, 1, 4
  03f1a48  lfs 1, 532(30)
  03f1a4c  bt 1, 0x3f1a80
  03f1a50  fnmsubs 2, 2, 3, 1
  03f1a54  lis 3, 133
  03f1a58  lis 4, 114
  03f1a5c  stfs 2, 532(30)
  03f1a60  lfs 1, 17212(3)
  03f1a64  lfs 3, -3052(4)
  03f1a68  fmuls 1, 1, 3
  03f1a6c  fcmpu 0, 2, 1
  03f1a70  cror 6, 1, 2
  03f1a74  bt 6, 0x3f1aa4
  03f1a78  stfs 1, 532(30)
  03f1a7c  b 0x3f1aa4
  03f1a80  fmadds 2, 2, 3, 1
  03f1a84  lis 3, 114
  03f1a88  stfs 2, 532(30)
  03f1a8c  lfs 1, -3052(3)
  03f1a90  fmuls 1, 1, 29
  03f1a94  fcmpu 0, 2, 1
  03f1a98  cror 6, 0, 2
  03f1a9c  bt 6, 0x3f1aa4
  03f1aa0  stfs 1, 532(30)
  03f1aa4  lfs 1, 28(29)
  03f1aa8  fdivs 1, 31, 1
  03f1aac  bl 0x502758
  03f1ab0  nop
  03f1ab4  stw 3, 652(1)
  03f1ab8  bl 0x502730
  03f1abc  nop
  03f1ac0  lfs 2, 28(29)
  03f1ac4  lwz 4, 652(1)
  03f1ac8  fnmsubs 1, 1, 2, 31
  03f1acc  fdivs 1, 1, 2
  03f1ad0  stfs 1, 648(1)
  03f1ad4  lwz 3, 0(29)
  03f1ad8  addic 5, 3, -1
  03f1adc  cmpw 4, 5
  03f1ae0  bt 0, 0x3f1c04
  03f1ae4  lwz 4, 564(30)
  03f1ae8  cmpwi 4, -1
  03f1aec  bt 2, 0x3f1bcc
  03f1af0  lwz 4, 356(30)
  03f1af4  cmpwi 4, -1
  03f1af8  bt 2, 0x3f1bcc
  03f1afc  lis 4, 133
  03f1b00  lis 5, 114
  03f1b04  lfs 1, 17212(4)
  03f1b08  lfs 2, -3052(5)
  03f1b0c  lfs 3, 532(30)
  03f1b10  fmuls 1, 1, 2
  03f1b14  fcmpu 0, 3, 1
  03f1b18  bt 1, 0x3f1bcc
  03f1b1c  lwz 6, 572(30)
  03f1b20  li 4, 0
  03f1b24  addic 3, 30, 336
  03f1b28  xori 6, 6, 1
  03f1b2c  addic 5, 30, 288
  03f1b30  subc 4, 4, 6
  03f1b34  subc 5, 5, 3
  03f1b38  cntlzw 4, 4
  03f1b3c  stw 6, 572(30)
  03f1b40  li 7, 2
  03f1b44  sldi 4, 4, 58
  03f1b48  vspltisw 3, -1
  03f1b4c  li 6, 1
  03f1b50  sradi 4, 4, 63
  03f1b54  li 8, 4
  03f1b58  and 4, 4, 5
  03f1b5c  li 9, 48
  03f1b60  vslw 3, 3, 3
  03f1b64  addc 3, 3, 4
  03f1b68  lis 4, 63
  03f1b6c  li 10, -3056
  03f1b70  addi 4, 4, 1328
  03f1b74  lwz 5, 16(3)
  03f1b78  lfs 1, 16(5)
  03f1b7c  stfs 1, 16(31)
  03f1b80  lfs 1, 20(5)
  03f1b84  stfs 1, 20(31)
  03f1b88  lfs 1, 24(5)
  03f1b8c  stfs 1, 24(31)
  03f1b90  lfs 1, 28(5)
  03f1b94  lis 5, 114
  03f1b98  stfs 1, 28(31)
  03f1b9c  stw 6, 0(3)
  03f1ba0  stb 7, 188(31)
  03f1ba4  stb 8, 32(31)
  03f1ba8  lvlx 2, 9, 4
  03f1bac  lvlx 4, 10, 5
  03f1bb0  li 3, 518
  03f1bb4  vspltw 2, 2, 0
  03f1bb8  vmaddfp 2, 4, 2, 3
  03f1bbc  vctsxs 2, 2, 0
  03f1bc0  vsplth 2, 2, 1
  03f1bc4  stvehx 2, 3, 30
  03f1bc8  b 0x3f235c
  03f1bcc  lis 4, 133
  03f1bd0  lis 5, 114
  03f1bd4  lfs 1, 17212(4)
  03f1bd8  lfs 2, -3052(5)
  03f1bdc  lfs 3, 532(30)
  03f1be0  fmuls 1, 1, 2
  03f1be4  fcmpu 0, 3, 1
  03f1be8  bt 1, 0x3f1bf4
  03f1bec  trap
  03f1bf0  b 0x3f249c
  03f1bf4  addic 4, 3, -2
  03f1bf8  lis 3, 16256
  03f1bfc  stw 4, 652(1)
  03f1c00  stw 3, 648(1)
  03f1c04  slwi 3, 4, 4
  03f1c08  addic 27, 1, 352
  03f1c0c  addc 4, 29, 3
  03f1c10  ori 3, 27, 0
  03f1c14  addic 5, 4, 32
  03f1c18  addic 6, 4, 16
  03f1c1c  clrldi 4, 5, 32
  03f1c20  clrldi 5, 6, 32
  03f1c24  bl 0x5e81f0
  03f1c28  nop
  03f1c2c  lfs 1, 648(1)
  03f1c30  ori 4, 27, 0
  03f1c34  lfs 2, 352(1)
  03f1c38  lfs 3, 356(1)
  03f1c3c  fmuls 2, 2, 1
  03f1c40  lfs 4, 360(1)
  03f1c44  fmuls 3, 3, 1
  03f1c48  fmuls 1, 4, 1
  03f1c4c  lwz 3, 652(1)
  03f1c50  slwi 3, 3, 4
  03f1c54  addc 5, 29, 3
  03f1c58  ori 3, 27, 0
  03f1c5c  addic 5, 5, 16
  03f1c60  clrldi 5, 5, 32
  03f1c64  stfs 2, 352(1)
  03f1c68  stfs 3, 356(1)
  03f1c6c  stfs 1, 360(1)
  03f1c70  bl 0x5e7f54
  03f1c74  nop
  03f1c78  lfs 1, 560(1)
  03f1c7c  lfs 2, 16(31)
  03f1c80  lfs 31, 72(31)
  03f1c84  fsubs 1, 1, 2
  03f1c88  lfs 3, 564(1)
  03f1c8c  lfs 2, 20(31)
  03f1c90  fsubs 2, 3, 2
  03f1c94  bl 0x5e8338
  03f1c98  nop
  03f1c9c  lis 3, 63
  03f1ca0  fmr 2, 1
  03f1ca4  fmr 1, 31
  03f1ca8  addic 5, 30, 512
  03f1cac  addi 29, 3, 1328
  03f1cb0  lfs 3, 52(29)
  03f1cb4  lfs 4, 24(29)
  03f1cb8  lfs 5, 56(29)
  03f1cbc  bl 0xff190
  03f1cc0  nop
  03f1cc4  addic 26, 1, 336
  03f1cc8  stfs 1, 72(31)
  03f1ccc  ori 4, 27, 0
  03f1cd0  ori 3, 26, 0
  03f1cd4  ori 5, 28, 0
  03f1cd8  bl 0x5e81f0
  03f1cdc  nop
  03f1ce0  ori 3, 26, 0
  03f1ce4  bl 0x5e8030
  03f1ce8  nop
  03f1cec  lfs 2, 532(30)
  03f1cf0  ori 3, 26, 0
  03f1cf4  ori 4, 26, 0
  03f1cf8  fsub 3, 2, 1
  03f1cfc  fsel 1, 3, 1, 2
  03f1d00  bl 0x5e7f98
  03f1d04  nop
  03f1d08  ori 3, 28, 0
  03f1d0c  ori 4, 28, 0
  03f1d10  ori 5, 26, 0
  03f1d14  bl 0x5e7f54
  03f1d18  nop
  03f1d1c  lfs 1, 336(1)
  03f1d20  lfs 2, 340(1)
  03f1d24  bl 0x5e8338
  03f1d28  nop
  03f1d2c  lfs 2, 72(31)
  03f1d30  bl 0x5025e0
  03f1d34  nop
  03f1d38  fmr 31, 1
  03f1d3c  bl 0x5e8078
  03f1d40  nop
  03f1d44  lfs 2, 60(29)
  03f1d48  lis 28, 114
  03f1d4c  lfs 3, 532(30)
  03f1d50  fmuls 2, 3, 2
  03f1d54  lfs 4, -3052(28)
  03f1d58  fmuls 4, 4, 29
  03f1d5c  fmuls 2, 2, 1
  03f1d60  fmr 1, 31
  03f1d64  fdivs 31, 2, 4
  03f1d68  bl 0x5e8128
  03f1d6c  nop
  03f1d70  lfs 2, 64(29)
  03f1d74  lfs 3, 532(30)
  03f1d78  lfs 5, -3052(28)
  03f1d7c  fmuls 2, 3, 2
  03f1d80  fmuls 4, 5, 29
  03f1d84  lis 27, 114
  03f1d88  addic 5, 30, 540
  03f1d8c  fmuls 1, 2, 1
  03f1d90  lfs 2, 68(29)
  03f1d94  lfs 29, 72(29)
  03f1d98  lfs 7, 76(29)
  03f1d9c  fmuls 5, 5, 7
  03f1da0  fdivs 30, 1, 4
  03f1da4  lfs 1, 68(31)
  03f1da8  lfs 6, -3048(27)
  03f1dac  fmuls 3, 6, 2
  03f1db0  fmr 2, 31
  03f1db4  fmuls 4, 6, 29
  03f1db8  bl 0xff190
  03f1dbc  nop
  03f1dc0  stfs 1, 68(31)
  03f1dc4  lfs 4, 80(29)
  03f1dc8  addic 5, 30, 536
  03f1dcc  lfs 5, 84(29)
  03f1dd0  lfs 1, 64(31)
  03f1dd4  lfs 2, -3048(27)
  03f1dd8  lfs 6, -3052(28)
  03f1ddc  fmuls 3, 2, 29
  03f1de0  fmuls 4, 2, 4
  03f1de4  fmuls 5, 6, 5
  03f1de8  fmr 2, 30
  03f1dec  bl 0xff190
  03f1df0  nop
  03f1df4  stfs 1, 64(31)
  03f1df8  b 0x3f235c
  03f1dfc  addic 3, 30, 518
  03f1e00  bl 0x4fffb4
  03f1e04  nop
  03f1e08  cmpwi 3, 0
  03f1e0c  bt 2, 0x3f1e1c
  03f1e10  lbz 3, 188(31)
  03f1e14  stb 3, 32(31)
  03f1e18  b 0x3f235c
  03f1e1c  lis 3, 63
  03f1e20  lfs 1, 532(30)
  03f1e24  lis 4, 114
  03f1e28  addi 3, 3, 1328
  03f1e2c  lfs 2, 4(3)
  03f1e30  lfs 3, -3048(4)
  03f1e34  fnmsubs 1, 3, 2, 1
  03f1e38  stfs 1, 532(30)
  03f1e3c  lfs 2, 40(3)
  03f1e40  fcmpu 0, 1, 2
  03f1e44  cror 6, 1, 2
  03f1e48  bt 6, 0x3f1e54
  03f1e4c  li 3, 0
  03f1e50  stw 3, 532(30)
  03f1e54  lfs 1, 72(31)
  03f1e58  bl 0x5e8078
  03f1e5c  nop
  03f1e60  lfs 2, 532(30)
  03f1e64  fmuls 2, 1, 2
  03f1e68  lfs 1, 72(31)
  03f1e6c  fneg 2, 2
  03f1e70  stfs 2, 368(1)
  03f1e74  bl 0x5e8128
  03f1e78  nop
  03f1e7c  lfs 2, 532(30)
  03f1e80  li 6, 0
  03f1e84  addic 3, 31, 16
  03f1e88  fmuls 1, 1, 2
  03f1e8c  addic 5, 1, 368
  03f1e90  stw 6, 376(1)
  03f1e94  ori 4, 3, 0
  03f1e98  fneg 1, 1
  03f1e9c  stfs 1, 372(1)
  03f1ea0  bl 0x5e7f54
  03f1ea4  nop
  03f1ea8  lfs 1, 368(1)
  03f1eac  lfs 2, 372(1)
  03f1eb0  bl 0x5e8338
  03f1eb4  nop
  03f1eb8  lfs 2, 72(31)
  03f1ebc  bl 0x5025e0
  03f1ec0  nop
  03f1ec4  fmr 31, 1
  03f1ec8  bl 0x5e8078
  03f1ecc  nop
  03f1ed0  lis 3, 63
  03f1ed4  lfs 2, 532(30)
  03f1ed8  lis 28, 114
  03f1edc  addi 29, 3, 1328
  03f1ee0  lfs 3, 60(29)
  03f1ee4  lfs 4, 44(29)
  03f1ee8  fmuls 2, 2, 3
  03f1eec  fmr 30, 4
  03f1ef0  lfs 5, -3052(28)
  03f1ef4  fmuls 2, 2, 1
  03f1ef8  fmuls 3, 5, 30
  03f1efc  fmr 1, 31
  03f1f00  fdivs 31, 2, 3
  03f1f04  bl 0x5e8128
  03f1f08  nop
  03f1f0c  lfs 2, 64(29)
  03f1f10  lfs 3, 532(30)
  03f1f14  lfs 5, -3052(28)
  03f1f18  fmuls 2, 3, 2
  03f1f1c  fmuls 4, 5, 30
  03f1f20  lis 27, 114
  03f1f24  addic 5, 30, 540
  03f1f28  fmuls 1, 2, 1
  03f1f2c  lfs 2, 68(29)
  03f1f30  lfs 29, 72(29)
  03f1f34  lfs 7, 76(29)
  03f1f38  fmuls 5, 5, 7
  03f1f3c  fdivs 30, 1, 4
  03f1f40  lfs 1, 68(31)
  03f1f44  lfs 6, -3048(27)
  03f1f48  fmuls 3, 6, 2
  03f1f4c  fmr 2, 31
  03f1f50  fmuls 4, 6, 29
  03f1f54  bl 0xff190
  03f1f58  nop
  03f1f5c  stfs 1, 68(31)
  03f1f60  addic 5, 30, 536
  03f1f64  lfs 4, 80(29)
  03f1f68  lfs 5, 84(29)
  03f1f6c  lfs 1, 64(31)
  03f1f70  lfs 2, -3048(27)
  03f1f74  lfs 6, -3052(28)
  03f1f78  fmuls 3, 2, 29
  03f1f7c  fmuls 4, 2, 4
  03f1f80  fmuls 5, 6, 5
  03f1f84  fmr 2, 30
  03f1f88  bl 0xff190
  03f1f8c  nop
  03f1f90  stfs 1, 64(31)
  03f1f94  b 0x3f235c
  03f1f98  lis 3, 63
  03f1f9c  li 27, 0
  03f1fa0  addi 29, 3, 1328
  03f1fa4  lfs 30, 40(29)
  03f1fa8  stw 27, 384(1)
  03f1fac  stw 27, 388(1)
  03f1fb0  stw 27, 392(1)
  03f1fb4  stw 27, 396(1)
  03f1fb8  bl 0xfcc68
  03f1fbc  nop
  03f1fc0  fmr 31, 1
  03f1fc4  addic 5, 1, 400
  03f1fc8  ori 3, 31, 0
  03f1fcc  li 4, 4
  03f1fd0  bl 0xf1114
  03f1fd4  nop
  03f1fd8  lfs 29, 116(29)
  03f1fdc  lfs 28, 84(29)
  03f1fe0  addic 28, 1, 416
  03f1fe4  ori 29, 27, 0
  03f1fe8  fmr 1, 31
  03f1fec  bl 0x5e8078
  03f1ff0  nop
  03f1ff4  fmuls 2, 1, 29
  03f1ff8  fmr 1, 31
  03f1ffc  stfs 2, 416(1)
  03f2000  bl 0x5e8128
  03f2004  nop
  03f2008  fmuls 3, 1, 29
  03f200c  fmr 1, 31
  03f2010  stw 27, 424(1)
  03f2014  fmr 2, 28
  03f2018  stfs 3, 420(1)
  03f201c  bl 0x502578
  03f2020  nop
  03f2024  fmr 31, 1
  03f2028  addic 5, 1, 400
  03f202c  addic 3, 1, 432
  03f2030  ori 4, 28, 0
  03f2034  bl 0x502b08
  03f2038  nop
  03f203c  addic 29, 29, 1
  03f2040  cmpwi 29, 4
  03f2044  bt 0, 0x3f1fe8
  03f2048  ori 5, 28, 0
  03f204c  ori 3, 31, 0
  03f2050  li 4, 5
  03f2054  bl 0xf1114
  03f2058  nop
  03f205c  lwz 28, 568(30)
  03f2060  cmpwi 28, -1
  03f2064  bt 2, 0x3f21bc
  03f2068  lis 3, 164
  03f206c  slwi 4, 28, 8
  03f2070  li 5, 2
  03f2074  lis 8, 131
  03f2078  lis 6, 16800
  03f207c  lwz 3, -28512(3)
  03f2080  li 9, 1
  03f2084  addic 28, 1, 448
  03f2088  addc 3, 3, 4
  03f208c  clrldi 29, 3, 32
  03f2090  li 3, 255
  03f2094  addic 4, 29, 16
  03f2098  lwz 7, 120(29)
  03f209c  stb 5, 610(7)
  03f20a0  lhz 7, 52(29)
  03f20a4  stb 3, 48(29)
  03f20a8  addic 5, 31, 16
  03f20ac  rlwimi 7, 27, 0, 29, 30
  03f20b0  ori 3, 28, 0
  03f20b4  sth 7, 52(29)
  03f20b8  stw 31, 464(1)
  03f20bc  stw 8, 468(1)
  03f20c0  stw 6, 476(1)
  03f20c4  stw 9, 480(1)
  03f20c8  bl 0x5e81f0
  03f20cc  nop
  03f20d0  lis 3, 63
  03f20d4  ori 4, 28, 0
  03f20d8  addi 26, 3, 1328
  03f20dc  ori 3, 28, 0
  03f20e0  lfs 1, 120(26)
  03f20e4  bl 0x5e84c0
  03f20e8  nop
  03f20ec  li 3, 166
  03f20f0  vspltisw 2, -16
  03f20f4  li 4, 448
  03f20f8  lis 6, 17839
  03f20fc  lis 7, 16256
  03f2100  li 5, 464
  03f2104  lvlx 3, 3, 31
  03f2108  ori 6, 6, 57190
  03f210c  li 3, 3
  03f2110  lvx 4, 4, 1
  03f2114  vsrw 2, 3, 2
  03f2118  li 4, 474
  03f211c  stw 7, 456(1)
  03f2120  li 8, 192
  03f2124  stw 6, 460(1)
  03f2128  li 7, 176
  03f212c  li 6, 160
  03f2130  lvx 3, 5, 1
  03f2134  vsplth 5, 2, 1
  03f2138  li 5, 128
  03f213c  stb 3, 472(1)
  03f2140  stb 3, 473(1)
  03f2144  li 3, 144
  03f2148  stvehx 5, 4, 1
  03f214c  lvlx 5, 6, 26
  03f2150  li 4, 64
  03f2154  lvx 6, 5, 26
  03f2158  li 6, 80
  03f215c  vspltw 5, 5, 0
  03f2160  li 5, 96
  03f2164  lvx 7, 3, 26
  03f2168  lvx 8, 7, 26
  03f216c  li 3, 480
  03f2170  vperm 4, 6, 4, 7
  03f2174  vperm 2, 2, 5, 8
  03f2178  lvx 5, 8, 26
  03f217c  lvx 6, 3, 1
  03f2180  vperm 2, 2, 3, 5
  03f2184  stvx 4, 4, 1
  03f2188  ori 3, 29, 0
  03f218c  ld 4, 64(1)
  03f2190  stvx 6, 5, 1
  03f2194  ori 5, 4, 0
  03f2198  ld 4, 72(1)
  03f219c  stvx 2, 6, 1
  03f21a0  ld 7, 80(1)
  03f21a4  ld 8, 88(1)
  03f21a8  ori 6, 4, 0
  03f21ac  ld 9, 96(1)
  03f21b0  ld 10, 104(1)
  03f21b4  bl 0x105ab4
  03f21b8  nop
  03f21bc  lis 3, 63
  03f21c0  fmr 1, 30
  03f21c4  li 6, 2
  03f21c8  fmr 2, 30
  03f21cc  addi 5, 3, 1328
  03f21d0  fmr 4, 27
  03f21d4  li 11, 1
  03f21d8  li 7, -1
  03f21dc  addic 29, 31, 16
  03f21e0  addic 4, 1, 384
  03f21e4  lfs 3, 4(5)
  03f21e8  ori 3, 31, 0
  03f21ec  lfs 5, 208(5)
  03f21f0  li 8, 20
  03f21f4  lfs 6, 28(5)
  03f21f8  li 9, 3
  03f21fc  lfs 7, 212(5)
  03f2200  li 10, 4
  03f2204  std 6, 144(1)
  03f2208  ori 5, 29, 0
  03f220c  std 11, 160(1)
  03f2210  std 11, 168(1)
  03f2214  std 7, 176(1)
  03f2218  std 27, 184(1)
  03f221c  bl 0x10e030
  03f2220  nop
  03f2224  li 4, 0
  03f2228  ori 3, 31, 0
  03f222c  li 5, -1
  03f2230  bl 0xfd8d0
  03f2234  nop
  03f2238  lis 4, 161
  03f223c  addic 28, 31, 64
  03f2240  fmr 1, 30
  03f2244  addic 27, 4, 23856
  03f2248  ori 3, 31, 0
  03f224c  ori 10, 27, 0
  03f2250  li 4, 1591
  03f2254  std 27, 112(1)
  03f2258  ori 5, 29, 0
  03f225c  std 27, 120(1)
  03f2260  ori 6, 28, 0
  03f2264  li 7, 0
  03f2268  li 8, 0
  03f226c  bl 0x11a560
  03f2270  nop
  03f2274  std 27, 112(1)
  03f2278  ori 3, 31, 0
  03f227c  li 4, 1592
  03f2280  std 27, 120(1)
  03f2284  ori 10, 27, 0
  03f2288  fmr 1, 30
  03f228c  ori 5, 29, 0
  03f2290  ori 6, 28, 0
  03f2294  li 7, 0
  03f2298  li 8, 0
  03f229c  bl 0x11a560
  03f22a0  nop
  03f22a4  ori 3, 31, 0
  03f22a8  std 27, 112(1)
  03f22ac  li 4, 1593
  03f22b0  fmr 1, 30
  03f22b4  ori 10, 27, 0
  03f22b8  std 27, 120(1)
  03f22bc  ori 5, 29, 0
  03f22c0  ori 6, 28, 0
  03f22c4  li 7, 0
  03f22c8  li 8, 0
  03f22cc  bl 0x11a560
  03f22d0  nop
  03f22d4  addic 4, 30, 384
  03f22d8  ori 3, 31, 0
  03f22dc  bl 0xf0f1c
  03f22e0  nop
  03f22e4  addic 4, 30, 448
  03f22e8  ori 3, 31, 0
  03f22ec  bl 0xf0f1c
  03f22f0  nop
  03f22f4  lwz 27, 592(30)
  03f22f8  cmpwi 27, -1
  03f22fc  bt 2, 0x3f2344
  03f2300  sldi 3, 27, 7
  03f2304  sldi 5, 27, 4
  03f2308  lis 4, 150
  03f230c  subc 3, 3, 5
  03f2310  addic 4, 4, 14312
  03f2314  extsw 3, 3
  03f2318  lwzx 4, 4, 3
  03f231c  cmpw 4, 31
  03f2320  bf 2, 0x3f2344
  03f2324  lis 4, 150
  03f2328  addic 4, 4, 14292
  03f232c  lbzx 3, 4, 3
  03f2330  cmpwi 3, 0
  03f2334  bt 2, 0x3f2344
  03f2338  extsw 3, 27
  03f233c  bl 0x15cdb0
  03f2340  nop
  03f2344  li 4, -1
  03f2348  ori 3, 31, 0
  03f234c  stw 4, 592(30)
  03f2350  bl 0xefb38
  03f2354  nop
  03f2358  b 0x3f249c
  03f235c  lbz 3, 49(31)
  03f2360  cmpwi 3, 0
  03f2364  bt 2, 0x3f23a0
  03f2368  lis 4, 149
  03f236c  addic 3, 31, 16
  03f2370  addic 4, 4, 5376
  03f2374  bl 0x5e8548
  03f2378  nop
  03f237c  lis 3, 63
  03f2380  addi 3, 3, 1328
  03f2384  lfs 2, 216(3)
  03f2388  fcmpu 0, 1, 2
  03f238c  cror 6, 1, 2
  03f2390  bt 6, 0x3f23a0
  03f2394  ori 3, 31, 0
  03f2398  bl 0x106360
  03f239c  nop
  03f23a0  lfs 1, 528(30)
  03f23a4  lfs 31, 24(31)
  03f23a8  bl 0x5e8078
  03f23ac  nop
  03f23b0  lis 29, 133
  03f23b4  lis 3, 63
  03f23b8  lis 4, 133
  03f23bc  addi 3, 3, 1328
  03f23c0  lis 5, 114
  03f23c4  lfs 2, 17208(29)
  03f23c8  fnmsubs 1, 2, 1, 31
  03f23cc  stfs 1, 24(31)
  03f23d0  lfs 3, 220(3)
  03f23d4  lfs 2, 17204(4)
  03f23d8  lfs 4, -3056(5)
  03f23dc  fmuls 2, 2, 3
  03f23e0  lfs 6, 96(3)
  03f23e4  lfs 5, 528(30)
  03f23e8  fmr 1, 5
  03f23ec  fmuls 2, 4, 2
  03f23f0  fdivs 2, 6, 2
  03f23f4  bl 0x502578
  03f23f8  nop
  03f23fc  stfs 1, 528(30)
  03f2400  lfs 31, 24(31)
  03f2404  bl 0x5e8078
  03f2408  nop
  03f240c  lfs 2, 17208(29)
  03f2410  fmadds 1, 2, 1, 31
  03f2414  stfs 1, 24(31)
  03f2418  lwz 30, 568(30)
  03f241c  cmpwi 30, -1
  03f2420  bt 2, 0x3f249c
  03f2424  lis 3, 164
  03f2428  slwi 4, 30, 8
  03f242c  lwz 3, -28512(3)
  03f2430  lfs 1, 16(31)
  03f2434  addc 3, 3, 4
  03f2438  clrldi 30, 3, 32
  03f243c  ori 3, 30, 0
  03f2440  stfs 1, 16(30)
  03f2444  lfs 1, 20(31)
  03f2448  stfs 1, 20(30)
  03f244c  lfs 1, 24(31)
  03f2450  stfs 1, 24(30)
  03f2454  lfs 1, 28(31)
  03f2458  stfs 1, 28(30)
  03f245c  lfs 1, 64(31)
  03f2460  stfs 1, 64(30)
  03f2464  lfs 1, 68(31)
  03f2468  stfs 1, 68(30)
  03f246c  lfs 1, 72(31)
  03f2470  stfs 1, 72(30)
  03f2474  lfs 1, 76(31)
  03f2478  stfs 1, 76(30)
  03f247c  bl 0xf98d8
  03f2480  nop
  03f2484  ori 3, 30, 0
  03f2488  bl 0xf31a8
  03f248c  nop
  03f2490  lhz 3, 52(30)
  03f2494  ori 3, 3, 6
  03f2498  sth 3, 52(30)
  03f249c  ld 0, 832(1)
  03f24a0  mtlr 0
  03f24a4  lfd 26, 768(1)
  03f24a8  lfd 27, 776(1)
  03f24ac  lfd 28, 784(1)
  03f24b0  lfd 29, 792(1)
  03f24b4  lfd 30, 800(1)
  03f24b8  lfd 31, 808(1)
  03f24bc  ld 21, 680(1)
  03f24c0  ld 22, 688(1)
  03f24c4  ld 23, 696(1)
  03f24c8  ld 24, 704(1)
  03f24cc  ld 25, 712(1)
  03f24d0  ld 26, 720(1)
  03f24d4  ld 27, 728(1)
  03f24d8  ld 28, 736(1)
  03f24dc  ld 29, 744(1)
  03f24e0  ld 30, 752(1)
  03f24e4  ld 31, 760(1)
  03f24e8  addi 1, 1, 816
  03f24ec  blr
