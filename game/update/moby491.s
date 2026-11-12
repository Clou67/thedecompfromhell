# game/update/moby491.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003a01e0:   # 0x3a01e0, 0x45c bytes
  03a01e0  stdu 1, -224(1)
  03a01e4  mflr 0
  03a01e8  std 0, 240(1)
  03a01ec  std 31, 216(1)
  03a01f0  std 29, 200(1)
  03a01f4  ori 31, 3, 0
  03a01f8  li 3, 49
  03a01fc  std 30, 208(1)
  03a0200  ori 29, 5, 0
  03a0204  ori 30, 4, 0
  03a0208  bl 0xefa28
  03a020c  nop
  03a0210  cmpwi 3, 0
  03a0214  bt 2, 0x3a0620
  03a0218  li 4, 255
  03a021c  li 5, 1
  03a0220  lis 7, 58
  03a0224  li 6, 0
  03a0228  stb 4, 48(3)
  03a022c  addi 7, 7, 460
  03a0230  sth 4, 50(3)
  03a0234  stb 5, 49(3)
  03a0238  ld 4, 56(31)
  03a023c  stb 6, 32(3)
  03a0240  std 4, 56(3)
  03a0244  lfs 1, 0(7)
  03a0248  lfs 2, 44(3)
  03a024c  lwz 4, 120(3)
  03a0250  fmuls 1, 2, 1
  03a0254  li 5, 4
  03a0258  vspltisw 2, -1
  03a025c  lis 8, 114
  03a0260  li 9, -3056
  03a0264  vslw 2, 2, 2
  03a0268  stfs 1, 44(3)
  03a026c  lfs 1, 0(29)
  03a0270  stfs 1, 16(3)
  03a0274  lfs 1, 4(29)
  03a0278  stfs 1, 20(3)
  03a027c  lfs 1, 8(29)
  03a0280  stfs 1, 24(3)
  03a0284  lfs 1, 12(29)
  03a0288  stfs 1, 28(3)
  03a028c  lfs 1, 0(30)
  03a0290  stfs 1, 0(4)
  03a0294  lfs 1, 4(30)
  03a0298  stfs 1, 4(4)
  03a029c  lfs 1, 8(30)
  03a02a0  stfs 1, 8(4)
  03a02a4  lfs 1, 12(30)
  03a02a8  stfs 1, 12(4)
  03a02ac  lvlx 3, 5, 7
  03a02b0  lvlx 4, 9, 8
  03a02b4  vspltw 3, 3, 0
  03a02b8  li 5, 20
  03a02bc  vmaddfp 2, 4, 3, 2
  03a02c0  vctsxs 2, 2, 0
  03a02c4  vspltw 2, 2, 0
  03a02c8  stvewx 2, 5, 4
  03a02cc  stw 31, 24(4)
  03a02d0  stw 6, 16(4)
  03a02d4  lwz 5, 0(30)
  03a02d8  lwz 4, 4(30)
  03a02dc  lfs 1, 0(30)
  03a02e0  lfs 2, 4(30)
  03a02e4  fabs 5, 1
  03a02e8  rlwinm 6, 4, 3, 29, 29
  03a02ec  fabs 7, 2
  03a02f0  lis 31, 115
  03a02f4  addic 31, 31, 22784
  03a02f8  fsubs 1, 5, 7
  03a02fc  stfs 1, 120(1)
  03a0300  lfs 4, 8(7)
  03a0304  lhz 4, 52(3)
  03a0308  lfs 2, 12(7)
  03a030c  lwz 7, 120(1)
  03a0310  lfs 1, 120(1)
  03a0314  rlwimi 6, 7, 2, 30, 30
  03a0318  fsub 6, 1, 4
  03a031c  fsub 8, 1, 4
  03a0320  rlwimi 6, 5, 4, 28, 28
  03a0324  ori 5, 31, 0
  03a0328  rlwimi 5, 6, 2, 26, 28
  03a032c  slwi 6, 6, 2
  03a0330  clrldi 5, 5, 32
  03a0334  fsel 6, 6, 5, 7
  03a0338  lfsx 1, 31, 6
  03a033c  lfs 3, 4(5)
  03a0340  fsel 5, 8, 7, 5
  03a0344  fcmpu 0, 6, 4
  03a0348  bt 1, 0x3a0354
  03a034c  fmr 1, 4
  03a0350  b 0x3a046c
  03a0354  fsubs 7, 5, 6
  03a0358  fadds 5, 5, 6
  03a035c  addic 5, 1, 16
  03a0360  li 8, 2
  03a0364  addic 6, 5, 140
  03a0368  addic 7, 5, 156
  03a036c  mtctr 8
  03a0370  fdivs 5, 7, 5
  03a0374  fmuls 6, 5, 5
  03a0378  stfs 5, 168(1)
  03a037c  stfs 5, 160(1)
  03a0380  stfs 5, 164(1)
  03a0384  stfs 5, 156(1)
  03a0388  lfs 8, 168(1)
  03a038c  lfs 9, 160(1)
  03a0390  lfs 10, 164(1)
  03a0394  fmuls 7, 6, 6
  03a0398  fmuls 9, 9, 6
  03a039c  fmuls 8, 8, 7
  03a03a0  fmuls 5, 7, 7
  03a03a4  fmuls 7, 10, 7
  03a03a8  stfs 9, 160(1)
  03a03ac  fmuls 6, 8, 6
  03a03b0  stfs 7, 164(1)
  03a03b4  stfs 6, 168(1)
  03a03b8  lfs 6, 140(5)
  03a03bc  fmuls 6, 6, 5
  03a03c0  stfs 6, 156(5)
  03a03c4  lfs 6, 4(6)
  03a03c8  addic 5, 5, 8
  03a03cc  addic 6, 6, 8
  03a03d0  fmuls 6, 6, 5
  03a03d4  stfs 6, 4(7)
  03a03d8  addic 7, 7, 8
  03a03dc  bdnz 0x3a03b8
  03a03e0  ori 5, 1, 0
  03a03e4  lis 6, 115
  03a03e8  li 10, 4
  03a03ec  addic 7, 5, 156
  03a03f0  addic 6, 6, 22752
  03a03f4  ori 9, 7, 0
  03a03f8  mtctr 10
  03a03fc  lfs 5, 156(5)
  03a0400  lfs 6, 0(6)
  03a0404  fmuls 5, 5, 6
  03a0408  lfs 6, 4(6)
  03a040c  addic 6, 6, 8
  03a0410  stfs 5, 156(5)
  03a0414  lfs 5, 4(7)
  03a0418  addic 5, 5, 8
  03a041c  fmuls 5, 5, 6
  03a0420  stfs 5, 4(7)
  03a0424  addic 7, 7, 8
  03a0428  bdnz 0x3a03fc
  03a042c  fmr 5, 4
  03a0430  ori 5, 1, 0
  03a0434  mtctr 8
  03a0438  lfs 6, 156(5)
  03a043c  fadds 5, 5, 6
  03a0440  addic 5, 5, 16
  03a0444  lfs 6, 4(9)
  03a0448  lfs 7, 8(9)
  03a044c  lfs 8, 12(9)
  03a0450  addic 9, 9, 16
  03a0454  fadds 5, 5, 6
  03a0458  fadds 5, 5, 7
  03a045c  fadds 5, 5, 8
  03a0460  bdnz 0x3a0438
  03a0464  fadds 5, 5, 2
  03a0468  fmadds 1, 5, 1, 3
  03a046c  stfs 1, 72(3)
  03a0470  lfs 1, 4(30)
  03a0474  lfs 3, 0(30)
  03a0478  fmuls 1, 1, 1
  03a047c  lwz 5, 8(30)
  03a0480  rlwinm 5, 5, 3, 29, 29
  03a0484  fmadds 1, 3, 3, 1
  03a0488  lfs 3, 8(30)
  03a048c  fabs 5, 3
  03a0490  fsqrts 1, 1
  03a0494  fabs 7, 1
  03a0498  stfs 1, 112(1)
  03a049c  fsubs 1, 7, 5
  03a04a0  stfs 1, 116(1)
  03a04a4  lwz 6, 112(1)
  03a04a8  lfs 1, 112(1)
  03a04ac  lwz 7, 116(1)
  03a04b0  fabs 6, 1
  03a04b4  lfs 1, 116(1)
  03a04b8  rlwimi 5, 7, 2, 30, 30
  03a04bc  fsub 3, 1, 4
  03a04c0  rlwimi 5, 6, 4, 28, 28
  03a04c4  fsub 8, 1, 4
  03a04c8  ori 6, 31, 0
  03a04cc  rlwimi 6, 5, 2, 26, 28
  03a04d0  slwi 5, 5, 2
  03a04d4  clrldi 6, 6, 32
  03a04d8  lfsx 1, 31, 5
  03a04dc  fsel 6, 3, 6, 5
  03a04e0  lfs 3, 4(6)
  03a04e4  fsel 5, 8, 5, 7
  03a04e8  fcmpu 0, 6, 4
  03a04ec  bt 1, 0x3a04f4
  03a04f0  b 0x3a0608
  03a04f4  fsubs 7, 5, 6
  03a04f8  fadds 5, 5, 6
  03a04fc  addic 5, 1, 16
  03a0500  li 8, 2
  03a0504  addic 6, 5, 108
  03a0508  addic 7, 5, 124
  03a050c  mtctr 8
  03a0510  fdivs 5, 7, 5
  03a0514  fmuls 6, 5, 5
  03a0518  stfs 5, 136(1)
  03a051c  stfs 5, 128(1)
  03a0520  stfs 5, 132(1)
  03a0524  stfs 5, 124(1)
  03a0528  lfs 8, 136(1)
  03a052c  lfs 9, 128(1)
  03a0530  lfs 10, 132(1)
  03a0534  fmuls 7, 6, 6
  03a0538  fmuls 9, 9, 6
  03a053c  fmuls 8, 8, 7
  03a0540  fmuls 5, 7, 7
  03a0544  fmuls 7, 10, 7
  03a0548  stfs 9, 128(1)
  03a054c  fmuls 6, 8, 6
  03a0550  stfs 7, 132(1)
  03a0554  stfs 6, 136(1)
  03a0558  lfs 6, 108(5)
  03a055c  fmuls 6, 6, 5
  03a0560  stfs 6, 124(5)
  03a0564  lfs 6, 4(6)
  03a0568  addic 5, 5, 8
  03a056c  addic 6, 6, 8
  03a0570  fmuls 6, 6, 5
  03a0574  stfs 6, 4(7)
  03a0578  addic 7, 7, 8
  03a057c  bdnz 0x3a0558
  03a0580  ori 5, 1, 0
  03a0584  lis 6, 115
  03a0588  li 10, 4
  03a058c  addic 7, 5, 124
  03a0590  addic 6, 6, 22752
  03a0594  ori 9, 7, 0
  03a0598  mtctr 10
  03a059c  lfs 5, 124(5)
  03a05a0  lfs 6, 0(6)
  03a05a4  fmuls 5, 5, 6
  03a05a8  lfs 6, 4(6)
  03a05ac  addic 6, 6, 8
  03a05b0  stfs 5, 124(5)
  03a05b4  lfs 5, 4(7)
  03a05b8  addic 5, 5, 8
  03a05bc  fmuls 5, 5, 6
  03a05c0  stfs 5, 4(7)
  03a05c4  addic 7, 7, 8
  03a05c8  bdnz 0x3a059c
  03a05cc  ori 5, 1, 0
  03a05d0  mtctr 8
  03a05d4  lfs 5, 124(5)
  03a05d8  fadds 4, 4, 5
  03a05dc  lfs 5, 4(9)
  03a05e0  addic 5, 5, 16
  03a05e4  lfs 6, 8(9)
  03a05e8  lfs 7, 12(9)
  03a05ec  addic 9, 9, 16
  03a05f0  fadds 4, 4, 5
  03a05f4  fadds 4, 4, 6
  03a05f8  fadds 4, 4, 7
  03a05fc  bdnz 0x3a05d4
  03a0600  fadds 4, 4, 2
  03a0604  fmadds 4, 4, 1, 3
  03a0608  fneg 1, 4
  03a060c  ori 4, 4, 1
  03a0610  li 5, 0
  03a0614  sth 4, 52(3)
  03a0618  stb 5, 49(3)
  03a061c  stfs 1, 68(3)
  03a0620  ld 0, 240(1)
  03a0624  mtlr 0
  03a0628  ld 29, 200(1)
  03a062c  ld 30, 208(1)
  03a0630  ld 31, 216(1)
  03a0634  addi 1, 1, 224
  03a0638  blr

M491_003a063c:   # 0x3a063c, 0x14 bytes
  03a063c  lis 3, 132
  03a0640  lis 4, 1
  03a0644  addic 3, 3, 12976
  03a0648  stw 4, 72(3)
  03a064c  blr

M491_003a0678:   # 0x3a0678, 0x648 bytes
  03a0678  stdu 1, -336(1)
  03a067c  mflr 0
  03a0680  std 0, 352(1)
  03a0684  stfd 29, 312(1)
  03a0688  stfd 30, 320(1)
  03a068c  stfd 31, 328(1)
  03a0690  std 31, 304(1)
  03a0694  ori 31, 3, 0
  03a0698  std 29, 288(1)
  03a069c  lis 6, 58
  03a06a0  addic 5, 1, 112
  03a06a4  std 30, 296(1)
  03a06a8  addi 29, 6, 1616
  03a06ac  ori 30, 4, 0
  03a06b0  bl 0x1118d8
  03a06b4  nop
  03a06b8  lfs 1, 20(31)
  03a06bc  lis 4, 164
  03a06c0  lfs 3, 116(1)
  03a06c4  li 5, 0
  03a06c8  lfs 4, 0(29)
  03a06cc  fsubs 1, 1, 3
  03a06d0  lfs 5, 16(31)
  03a06d4  fmr 7, 4
  03a06d8  lfs 2, 112(1)
  03a06dc  li 3, 1
  03a06e0  stw 5, 12(30)
  03a06e4  fsubs 5, 5, 2
  03a06e8  lwz 4, -28500(4)
  03a06ec  stw 5, 8(30)
  03a06f0  stw 5, 4(30)
  03a06f4  cmpwi 4, 0
  03a06f8  stw 5, 0(30)
  03a06fc  lfs 8, 120(1)
  03a0700  fmuls 1, 1, 1
  03a0704  fmr 6, 7
  03a0708  fmadds 1, 5, 5, 1
  03a070c  fmr 5, 6
  03a0710  fsqrts 1, 1
  03a0714  bt 2, 0x3a08dc
  03a0718  lis 6, 58
  03a071c  fmr 9, 4
  03a0720  addi 6, 6, 1616
  03a0724  lfs 12, 4(6)
  03a0728  lfs 13, 8(6)
  03a072c  cmpw 4, 31
  03a0730  bt 2, 0x3a07d8
  03a0734  lhz 6, 166(4)
  03a0738  lhz 7, 166(31)
  03a073c  extsh 6, 6
  03a0740  extsh 7, 7
  03a0744  cmpw 6, 7
  03a0748  bf 2, 0x3a07d8
  03a074c  lfs 31, 20(4)
  03a0750  lfs 0, 16(4)
  03a0754  lfs 11, 20(31)
  03a0758  lfs 10, 16(31)
  03a075c  fsubs 30, 31, 11
  03a0760  fsubs 29, 0, 10
  03a0764  fmuls 30, 30, 30
  03a0768  fmadds 30, 29, 29, 30
  03a076c  fsqrts 30, 30
  03a0770  fcmpu 0, 30, 12
  03a0774  cror 6, 1, 2
  03a0778  bt 6, 0x3a07b4
  03a077c  fsubs 10, 10, 0
  03a0780  fsubs 11, 11, 31
  03a0784  lfs 0, 24(31)
  03a0788  lfs 31, 24(4)
  03a078c  fadds 9, 9, 13
  03a0790  fsubs 0, 0, 31
  03a0794  fmadds 5, 10, 13, 5
  03a0798  fmadds 6, 11, 13, 6
  03a079c  fmadds 7, 0, 13, 7
  03a07a0  stfs 5, 0(30)
  03a07a4  stfs 6, 4(30)
  03a07a8  stfs 7, 8(30)
  03a07ac  lfs 0, 16(4)
  03a07b0  lfs 31, 20(4)
  03a07b4  fsubs 10, 31, 3
  03a07b8  fsubs 11, 0, 2
  03a07bc  fmuls 10, 10, 10
  03a07c0  fmadds 10, 11, 11, 10
  03a07c4  fsqrts 10, 10
  03a07c8  fcmpu 0, 10, 1
  03a07cc  cror 6, 1, 2
  03a07d0  bt 6, 0x3a07d8
  03a07d4  ori 3, 5, 0
  03a07d8  lwz 4, 40(4)
  03a07dc  cmpwi 4, 0
  03a07e0  bf 2, 0x3a072c
  03a07e4  cmpwi 3, 0
  03a07e8  bf 2, 0x3a08dc
  03a07ec  lfs 10, 20(31)
  03a07f0  lfs 11, 16(31)
  03a07f4  fsubs 10, 10, 3
  03a07f8  lfs 12, 24(31)
  03a07fc  fsubs 11, 11, 2
  03a0800  fsubs 8, 12, 8
  03a0804  lis 3, 58
  03a0808  addi 3, 3, 1616
  03a080c  fmuls 12, 10, 10
  03a0810  lfs 13, 24(3)
  03a0814  lfs 0, 12(3)
  03a0818  fsub 13, 13, 1
  03a081c  lfs 31, 20(3)
  03a0820  fsub 1, 1, 0
  03a0824  lfs 30, 16(3)
  03a0828  lfs 0, 28(3)
  03a082c  fmadds 12, 11, 11, 12
  03a0830  fsel 13, 13, 4, 31
  03a0834  fadds 9, 9, 30
  03a0838  fmadds 12, 8, 8, 12
  03a083c  fsel 1, 1, 13, 30
  03a0840  fmr 13, 0
  03a0844  fsqrts 12, 12
  03a0848  stw 5, 12(30)
  03a084c  fmuls 1, 1, 30
  03a0850  fdivs 9, 13, 9
  03a0854  fdivs 1, 1, 12
  03a0858  fsub 13, 4, 12
  03a085c  fsub 0, 4, 12
  03a0860  fsub 31, 4, 12
  03a0864  fsub 30, 12, 4
  03a0868  fsub 29, 12, 4
  03a086c  fsub 12, 12, 4
  03a0870  fmuls 8, 1, 8
  03a0874  fmuls 10, 1, 10
  03a0878  fmuls 1, 1, 11
  03a087c  fsel 11, 13, 4, 8
  03a0880  fsel 13, 0, 4, 10
  03a0884  fsel 0, 31, 4, 1
  03a0888  fsel 8, 30, 11, 8
  03a088c  fsel 10, 29, 13, 10
  03a0890  fsel 1, 12, 0, 1
  03a0894  fadds 7, 7, 8
  03a0898  fadds 6, 6, 10
  03a089c  fadds 1, 5, 1
  03a08a0  fmuls 8, 7, 9
  03a08a4  fmuls 5, 6, 9
  03a08a8  fmuls 1, 1, 9
  03a08ac  stfs 8, 8(30)
  03a08b0  stfs 5, 4(30)
  03a08b4  stfs 1, 0(30)
  03a08b8  lfs 6, 16(31)
  03a08bc  fadds 1, 1, 6
  03a08c0  stfs 1, 0(30)
  03a08c4  lfs 6, 20(31)
  03a08c8  fadds 5, 5, 6
  03a08cc  stfs 5, 4(30)
  03a08d0  lfs 6, 24(31)
  03a08d4  fadds 8, 8, 6
  03a08d8  b 0x3a08f4
  03a08dc  stfs 2, 0(30)
  03a08e0  stfs 3, 4(30)
  03a08e4  fmr 1, 2
  03a08e8  lfs 6, 124(1)
  03a08ec  fmr 5, 3
  03a08f0  stfs 6, 12(30)
  03a08f4  stfs 8, 8(30)
  03a08f8  lfs 7, 20(31)
  03a08fc  lfs 6, 16(31)
  03a0900  fsubs 8, 7, 5
  03a0904  fsubs 9, 6, 1
  03a0908  lis 3, 58
  03a090c  addi 3, 3, 1616
  03a0910  fmuls 8, 8, 8
  03a0914  lfs 11, 28(3)
  03a0918  fmadds 8, 9, 9, 8
  03a091c  fsqrts 9, 8
  03a0920  lfs 8, 32(3)
  03a0924  fcmpu 0, 9, 11
  03a0928  cror 6, 1, 2
  03a092c  bt 6, 0x3a0af8
  03a0930  stfs 6, 0(30)
  03a0934  lfs 1, 20(31)
  03a0938  stfs 1, 4(30)
  03a093c  lfs 1, 24(31)
  03a0940  stfs 1, 8(30)
  03a0944  lfs 1, 28(31)
  03a0948  stfs 1, 12(30)
  03a094c  lfs 1, 16(31)
  03a0950  lfs 5, 20(31)
  03a0954  fsubs 1, 2, 1
  03a0958  fsubs 2, 3, 5
  03a095c  lis 3, 115
  03a0960  addic 3, 3, 22784
  03a0964  fabs 3, 1
  03a0968  fabs 5, 2
  03a096c  stfs 1, 204(1)
  03a0970  stfs 2, 208(1)
  03a0974  fsubs 1, 3, 5
  03a0978  stfs 1, 212(1)
  03a097c  lwz 4, 204(1)
  03a0980  lfs 1, 204(1)
  03a0984  lwz 5, 208(1)
  03a0988  lfs 2, 208(1)
  03a098c  fabs 1, 1
  03a0990  lwz 6, 212(1)
  03a0994  rlwinm 5, 5, 3, 29, 29
  03a0998  fabs 6, 2
  03a099c  lfs 2, 212(1)
  03a09a0  rlwimi 5, 6, 2, 30, 30
  03a09a4  fsub 7, 2, 4
  03a09a8  fsub 9, 2, 4
  03a09ac  rlwimi 5, 4, 4, 28, 28
  03a09b0  ori 4, 3, 0
  03a09b4  rlwimi 4, 5, 2, 26, 28
  03a09b8  slwi 5, 5, 2
  03a09bc  clrldi 4, 4, 32
  03a09c0  fsel 5, 7, 1, 5
  03a09c4  lfsx 2, 3, 5
  03a09c8  fsel 3, 9, 6, 3
  03a09cc  lfs 1, 4(4)
  03a09d0  fcmpu 0, 5, 4
  03a09d4  bt 1, 0x3a09e0
  03a09d8  fmr 1, 4
  03a09dc  b 0x3a0af4
  03a09e0  fsubs 6, 3, 5
  03a09e4  fadds 3, 3, 5
  03a09e8  addic 3, 1, 16
  03a09ec  li 7, 2
  03a09f0  addic 4, 3, 232
  03a09f4  addic 5, 3, 248
  03a09f8  mtctr 7
  03a09fc  fdivs 3, 6, 3
  03a0a00  fmuls 5, 3, 3
  03a0a04  stfs 3, 260(1)
  03a0a08  stfs 3, 252(1)
  03a0a0c  stfs 3, 256(1)
  03a0a10  stfs 3, 248(1)
  03a0a14  lfs 7, 260(1)
  03a0a18  lfs 9, 252(1)
  03a0a1c  lfs 10, 256(1)
  03a0a20  fmuls 6, 5, 5
  03a0a24  fmuls 9, 9, 5
  03a0a28  fmuls 7, 7, 6
  03a0a2c  fmuls 3, 6, 6
  03a0a30  fmuls 6, 10, 6
  03a0a34  stfs 9, 252(1)
  03a0a38  fmuls 5, 7, 5
  03a0a3c  stfs 6, 256(1)
  03a0a40  stfs 5, 260(1)
  03a0a44  lfs 5, 232(3)
  03a0a48  fmuls 5, 5, 3
  03a0a4c  stfs 5, 248(3)
  03a0a50  lfs 5, 4(4)
  03a0a54  addic 3, 3, 8
  03a0a58  addic 4, 4, 8
  03a0a5c  fmuls 5, 5, 3
  03a0a60  stfs 5, 4(5)
  03a0a64  addic 5, 5, 8
  03a0a68  bdnz 0x3a0a44
  03a0a6c  li 5, 4
  03a0a70  ori 3, 1, 0
  03a0a74  mtctr 5
  03a0a78  lis 4, 115
  03a0a7c  addic 5, 3, 248
  03a0a80  addic 4, 4, 22752
  03a0a84  ori 6, 5, 0
  03a0a88  lfs 3, 248(3)
  03a0a8c  lfs 5, 0(4)
  03a0a90  fmuls 3, 3, 5
  03a0a94  lfs 5, 4(4)
  03a0a98  addic 4, 4, 8
  03a0a9c  stfs 3, 248(3)
  03a0aa0  lfs 3, 4(5)
  03a0aa4  addic 3, 3, 8
  03a0aa8  fmuls 3, 3, 5
  03a0aac  stfs 3, 4(5)
  03a0ab0  addic 5, 5, 8
  03a0ab4  bdnz 0x3a0a88
  03a0ab8  ori 3, 1, 0
  03a0abc  mtctr 7
  03a0ac0  lfs 3, 248(3)
  03a0ac4  fadds 3, 4, 3
  03a0ac8  lfs 4, 4(6)
  03a0acc  addic 3, 3, 16
  03a0ad0  lfs 5, 8(6)
  03a0ad4  lfs 6, 12(6)
  03a0ad8  addic 6, 6, 16
  03a0adc  fadds 3, 3, 4
  03a0ae0  fadds 4, 3, 5
  03a0ae4  fadds 4, 4, 6
  03a0ae8  bdnz 0x3a0ac0
  03a0aec  fadds 3, 4, 8
  03a0af0  fmadds 1, 3, 2, 1
  03a0af4  b 0x3a0c98
  03a0af8  fsubs 1, 1, 6
  03a0afc  fsubs 2, 5, 7
  03a0b00  lis 3, 115
  03a0b04  addic 3, 3, 22784
  03a0b08  fabs 5, 1
  03a0b0c  fabs 3, 2
  03a0b10  stfs 1, 192(1)
  03a0b14  stfs 2, 196(1)
  03a0b18  fsubs 1, 5, 3
  03a0b1c  stfs 1, 200(1)
  03a0b20  lwz 4, 192(1)
  03a0b24  lfs 1, 192(1)
  03a0b28  lwz 5, 196(1)
  03a0b2c  lfs 2, 196(1)
  03a0b30  lwz 6, 200(1)
  03a0b34  rlwinm 5, 5, 3, 29, 29
  03a0b38  lfs 6, 200(1)
  03a0b3c  fabs 1, 1
  03a0b40  rlwimi 5, 6, 2, 30, 30
  03a0b44  fabs 2, 2
  03a0b48  fsub 7, 6, 4
  03a0b4c  fsub 9, 6, 4
  03a0b50  rlwimi 5, 4, 4, 28, 28
  03a0b54  ori 4, 3, 0
  03a0b58  rlwimi 4, 5, 2, 26, 28
  03a0b5c  slwi 5, 5, 2
  03a0b60  clrldi 4, 4, 32
  03a0b64  fsel 3, 7, 1, 3
  03a0b68  lfsx 6, 3, 5
  03a0b6c  fsel 2, 9, 2, 5
  03a0b70  lfs 1, 4(4)
  03a0b74  fcmpu 0, 3, 4
  03a0b78  bt 1, 0x3a0b84
  03a0b7c  fmr 1, 4
  03a0b80  b 0x3a0c98
  03a0b84  fsubs 5, 2, 3
  03a0b88  fadds 2, 2, 3
  03a0b8c  addic 3, 1, 16
  03a0b90  li 7, 2
  03a0b94  addic 5, 3, 216
  03a0b98  addic 4, 3, 200
  03a0b9c  mtctr 7
  03a0ba0  fdivs 2, 5, 2
  03a0ba4  fmuls 3, 2, 2
  03a0ba8  stfs 2, 228(1)
  03a0bac  stfs 2, 220(1)
  03a0bb0  stfs 2, 224(1)
  03a0bb4  stfs 2, 216(1)
  03a0bb8  lfs 7, 228(1)
  03a0bbc  lfs 9, 220(1)
  03a0bc0  lfs 10, 224(1)
  03a0bc4  fmuls 5, 3, 3
  03a0bc8  fmuls 9, 9, 3
  03a0bcc  fmuls 7, 7, 5
  03a0bd0  fmuls 2, 5, 5
  03a0bd4  fmuls 5, 10, 5
  03a0bd8  stfs 9, 220(1)
  03a0bdc  fmuls 3, 7, 3
  03a0be0  stfs 5, 224(1)
  03a0be4  stfs 3, 228(1)
  03a0be8  lfs 3, 200(3)
  03a0bec  fmuls 3, 3, 2
  03a0bf0  stfs 3, 216(3)
  03a0bf4  lfs 3, 4(4)
  03a0bf8  addic 4, 4, 8
  03a0bfc  fmuls 3, 3, 2
  03a0c00  addic 3, 3, 8
  03a0c04  stfs 3, 4(5)
  03a0c08  addic 5, 5, 8
  03a0c0c  bdnz 0x3a0be8
  03a0c10  li 5, 4
  03a0c14  ori 3, 1, 0
  03a0c18  mtctr 5
  03a0c1c  lis 4, 115
  03a0c20  addic 5, 3, 216
  03a0c24  addic 4, 4, 22752
  03a0c28  ori 6, 5, 0
  03a0c2c  lfs 2, 216(3)
  03a0c30  lfs 3, 0(4)
  03a0c34  fmuls 2, 2, 3
  03a0c38  lfs 3, 4(4)
  03a0c3c  addic 4, 4, 8
  03a0c40  stfs 2, 216(3)
  03a0c44  lfs 2, 4(5)
  03a0c48  addic 3, 3, 8
  03a0c4c  fmuls 2, 2, 3
  03a0c50  stfs 2, 4(5)
  03a0c54  addic 5, 5, 8
  03a0c58  bdnz 0x3a0c2c
  03a0c5c  ori 3, 1, 0
  03a0c60  mtctr 7
  03a0c64  lfs 2, 216(3)
  03a0c68  lfs 3, 4(6)
  03a0c6c  fadds 2, 4, 2
  03a0c70  lfs 4, 8(6)
  03a0c74  addic 3, 3, 16
  03a0c78  lfs 5, 12(6)
  03a0c7c  addic 6, 6, 16
  03a0c80  fadds 2, 2, 3
  03a0c84  fadds 4, 2, 4
  03a0c88  fadds 4, 4, 5
  03a0c8c  bdnz 0x3a0c64
  03a0c90  fadds 2, 4, 8
  03a0c94  fmadds 1, 2, 6, 1
  03a0c98  ld 0, 352(1)
  03a0c9c  mtlr 0
  03a0ca0  lfd 29, 312(1)
  03a0ca4  lfd 30, 320(1)
  03a0ca8  lfd 31, 328(1)
  03a0cac  ld 29, 288(1)
  03a0cb0  ld 30, 296(1)
  03a0cb4  ld 31, 304(1)
  03a0cb8  addi 1, 1, 336
  03a0cbc  blr

M491_003a0ce8:   # 0x3a0ce8, 0x710 bytes
  03a0ce8  stdu 1, -336(1)
  03a0cec  mflr 0
  03a0cf0  std 0, 352(1)
  03a0cf4  stfd 31, 328(1)
  03a0cf8  std 31, 320(1)
  03a0cfc  ori 31, 3, 0
  03a0d00  lis 3, 132
  03a0d04  std 27, 288(1)
  03a0d08  lis 4, 58
  03a0d0c  li 27, 0
  03a0d10  std 26, 280(1)
  03a0d14  addi 4, 4, 3264
  03a0d18  lwz 5, 36(31)
  03a0d1c  std 29, 304(1)
  03a0d20  lis 26, 151
  03a0d24  lfs 1, 13128(3)
  03a0d28  std 30, 312(1)
  03a0d2c  lis 29, 161
  03a0d30  lwz 30, 120(31)
  03a0d34  ori 3, 27, 0
  03a0d38  addic 26, 26, -25376
  03a0d3c  addic 29, 29, 19456
  03a0d40  lfs 2, 36(5)
  03a0d44  lfs 31, 0(4)
  03a0d48  fmuls 1, 1, 2
  03a0d4c  stw 3, 456(30)
  03a0d50  stw 3, 228(1)
  03a0d54  lis 4, 10
  03a0d58  std 28, 296(1)
  03a0d5c  lwz 5, 8320(26)
  03a0d60  stfs 1, 44(31)
  03a0d64  lwz 6, 52(29)
  03a0d68  cmpw 6, 31
  03a0d6c  bf 2, 0x3a0da4
  03a0d70  lwz 6, 36(29)
  03a0d74  and 7, 6, 4
  03a0d78  cmpwi 7, 0
  03a0d7c  bt 2, 0x3a0da4
  03a0d80  lwz 7, 32(29)
  03a0d84  cmpw 7, 5
  03a0d88  bf 2, 0x3a0da0
  03a0d8c  rlwinm 6, 6, 0, 12, 12
  03a0d90  cmpwi 6, 0
  03a0d94  bf 2, 0x3a0da0
  03a0d98  stw 27, 52(29)
  03a0d9c  b 0x3a0da4
  03a0da0  b 0x3a0db8
  03a0da4  addic 3, 3, 1
  03a0da8  addic 29, 29, 64
  03a0dac  cmpwi 3, 64
  03a0db0  bt 0, 0x3a0d64
  03a0db4  ori 29, 27, 0
  03a0db8  ori 3, 31, 0
  03a0dbc  addic 5, 30, 32
  03a0dc0  addic 7, 1, 224
  03a0dc4  li 9, 0
  03a0dc8  addic 8, 1, 228
  03a0dcc  ori 4, 29, 0
  03a0dd0  li 6, 0
  03a0dd4  li 10, 4
  03a0dd8  bl 0x106840
  03a0ddc  nop
  03a0de0  cmpwi 29, 0
  03a0de4  ori 28, 3, 0
  03a0de8  bt 2, 0x3a12b0
  03a0dec  lwz 3, 224(1)
  03a0df0  cmpwi 3, 1
  03a0df4  bt 2, 0x3a12a4
  03a0df8  lbz 3, 32(31)
  03a0dfc  cmpwi 1, 3, 64
  03a0e00  cmpwi 3, 10
  03a0e04  cror 2, 2, 6
  03a0e08  bt 2, 0x3a12a4
  03a0e0c  lwz 3, 32(29)
  03a0e10  lhz 3, 166(3)
  03a0e14  cmpwi 3, 848
  03a0e18  bt 2, 0x3a12a4
  03a0e1c  lfs 1, 32(30)
  03a0e20  li 3, 256
  03a0e24  lfs 2, 228(1)
  03a0e28  li 6, 2
  03a0e2c  li 4, 9
  03a0e30  fsubs 1, 1, 2
  03a0e34  subc 4, 4, 28
  03a0e38  li 5, 9
  03a0e3c  fcmpu 0, 1, 31
  03a0e40  stfs 1, 32(30)
  03a0e44  lhz 7, 42(29)
  03a0e48  lbz 8, 32(31)
  03a0e4c  subc 3, 3, 7
  03a0e50  subc 6, 6, 8
  03a0e54  cntlzw 3, 3
  03a0e58  cntlzw 6, 6
  03a0e5c  sldi 3, 3, 58
  03a0e60  sradi 3, 3, 63
  03a0e64  and 3, 3, 4
  03a0e68  sldi 4, 6, 58
  03a0e6c  addc 28, 28, 3
  03a0e70  sradi 3, 4, 63
  03a0e74  subc 4, 5, 28
  03a0e78  and 3, 3, 4
  03a0e7c  addc 28, 28, 3
  03a0e80  bt 1, 0x3a0e88
  03a0e84  li 28, 1
  03a0e88  lis 3, 58
  03a0e8c  addi 3, 3, 3264
  03a0e90  lfs 1, 4(3)
  03a0e94  bl 0x502758
  03a0e98  nop
  03a0e9c  lis 4, 16416
  03a0ea0  lis 5, 132
  03a0ea4  lis 6, 114
  03a0ea8  cmpwi 28, 2
  03a0eac  stw 4, 152(30)
  03a0eb0  lis 4, 14851
  03a0eb4  lfs 1, 13084(5)
  03a0eb8  lfs 2, -3048(6)
  03a0ebc  ori 4, 4, 4719
  03a0ec0  stw 3, 144(30)
  03a0ec4  fmuls 1, 1, 2
  03a0ec8  li 3, 9
  03a0ecc  stb 27, 173(30)
  03a0ed0  stw 4, 132(30)
  03a0ed4  stw 3, 148(30)
  03a0ed8  stfs 1, 128(30)
  03a0edc  bt 1, 0x3a0ef4
  03a0ee0  cmpwi 28, -1
  03a0ee4  cmpwi 1, 28, 0
  03a0ee8  bf 1, 0x3a1294
  03a0eec  bf 5, 0x3a1294
  03a0ef0  b 0x3a11c0
  03a0ef4  cmpwi 28, 10
  03a0ef8  cmpwi 1, 28, 8
  03a0efc  bt 1, 0x3a1294
  03a0f00  bf 5, 0x3a0f18
  03a0f04  li 3, 1
  03a0f08  li 4, 250
  03a0f0c  stw 3, 456(30)
  03a0f10  stb 4, 103(30)
  03a0f14  b 0x3a1294
  03a0f18  lis 3, 132
  03a0f1c  lis 4, 114
  03a0f20  lis 6, 132
  03a0f24  addic 28, 30, 112
  03a0f28  lfs 1, 13092(3)
  03a0f2c  lfs 2, -3052(4)
  03a0f30  li 3, 1
  03a0f34  lis 4, 58
  03a0f38  fmuls 1, 1, 2
  03a0f3c  addi 4, 4, 3264
  03a0f40  stw 3, 456(30)
  03a0f44  ori 5, 28, 0
  03a0f48  stfs 1, 136(30)
  03a0f4c  lfs 1, 13088(6)
  03a0f50  fmuls 1, 1, 2
  03a0f54  stfs 1, 140(30)
  03a0f58  lfs 1, 8(4)
  03a0f5c  lfs 2, 12(4)
  03a0f60  bl 0x1158b0
  03a0f64  nop
  03a0f68  lis 3, 16704
  03a0f6c  lis 4, 16768
  03a0f70  stw 3, 192(30)
  03a0f74  stw 4, 196(30)
  03a0f78  lwz 3, 32(29)
  03a0f7c  lfs 1, 16(31)
  03a0f80  lfs 2, 20(31)
  03a0f84  lfs 3, 16(3)
  03a0f88  lfs 4, 20(3)
  03a0f8c  fsubs 1, 1, 3
  03a0f90  fsubs 2, 2, 4
  03a0f94  lis 3, 115
  03a0f98  addic 3, 3, 22784
  03a0f9c  fabs 3, 1
  03a0fa0  fabs 4, 2
  03a0fa4  stfs 1, 236(1)
  03a0fa8  stfs 2, 240(1)
  03a0fac  fsubs 1, 3, 4
  03a0fb0  stfs 1, 244(1)
  03a0fb4  lwz 4, 236(1)
  03a0fb8  lfs 1, 236(1)
  03a0fbc  lwz 5, 240(1)
  03a0fc0  lfs 2, 240(1)
  03a0fc4  lwz 6, 244(1)
  03a0fc8  rlwinm 5, 5, 3, 29, 29
  03a0fcc  fabs 5, 2
  03a0fd0  lfs 2, 244(1)
  03a0fd4  fabs 1, 1
  03a0fd8  rlwimi 5, 6, 2, 30, 30
  03a0fdc  fsub 6, 2, 31
  03a0fe0  fsub 7, 2, 31
  03a0fe4  rlwimi 5, 4, 4, 28, 28
  03a0fe8  ori 4, 3, 0
  03a0fec  rlwimi 4, 5, 2, 26, 28
  03a0ff0  slwi 5, 5, 2
  03a0ff4  clrldi 4, 4, 32
  03a0ff8  fsel 4, 6, 1, 4
  03a0ffc  lfsx 1, 3, 5
  03a1000  fsel 3, 7, 5, 3
  03a1004  lfs 2, 4(4)
  03a1008  fcmpu 0, 4, 31
  03a100c  bt 1, 0x3a1014
  03a1010  b 0x3a1134
  03a1014  fsubs 5, 3, 4
  03a1018  fadds 3, 3, 4
  03a101c  addic 3, 1, 16
  03a1020  li 6, 2
  03a1024  addic 4, 3, 232
  03a1028  addic 5, 3, 248
  03a102c  mtctr 6
  03a1030  fdivs 3, 5, 3
  03a1034  fmuls 4, 3, 3
  03a1038  stfs 3, 260(1)
  03a103c  stfs 3, 252(1)
  03a1040  stfs 3, 256(1)
  03a1044  stfs 3, 248(1)
  03a1048  lfs 6, 260(1)
  03a104c  lfs 7, 252(1)
  03a1050  lfs 8, 256(1)
  03a1054  fmuls 5, 4, 4
  03a1058  fmuls 7, 7, 4
  03a105c  fmuls 6, 6, 5
  03a1060  fmuls 3, 5, 5
  03a1064  fmuls 5, 8, 5
  03a1068  stfs 7, 252(1)
  03a106c  fmuls 4, 6, 4
  03a1070  stfs 5, 256(1)
  03a1074  stfs 4, 260(1)
  03a1078  lfs 4, 232(3)
  03a107c  fmuls 4, 4, 3
  03a1080  stfs 4, 248(3)
  03a1084  lfs 4, 4(4)
  03a1088  addic 3, 3, 8
  03a108c  addic 4, 4, 8
  03a1090  fmuls 4, 4, 3
  03a1094  stfs 4, 4(5)
  03a1098  addic 5, 5, 8
  03a109c  bdnz 0x3a1078
  03a10a0  ori 3, 1, 0
  03a10a4  lis 4, 115
  03a10a8  li 8, 4
  03a10ac  addic 5, 3, 248
  03a10b0  addic 4, 4, 22752
  03a10b4  ori 7, 5, 0
  03a10b8  mtctr 8
  03a10bc  lfs 3, 248(3)
  03a10c0  lfs 4, 0(4)
  03a10c4  fmuls 3, 3, 4
  03a10c8  lfs 4, 4(4)
  03a10cc  addic 4, 4, 8
  03a10d0  stfs 3, 248(3)
  03a10d4  lfs 3, 4(5)
  03a10d8  addic 3, 3, 8
  03a10dc  fmuls 3, 3, 4
  03a10e0  stfs 3, 4(5)
  03a10e4  addic 5, 5, 8
  03a10e8  bdnz 0x3a10bc
  03a10ec  ori 3, 1, 0
  03a10f0  mtctr 6
  03a10f4  lfs 3, 248(3)
  03a10f8  lfs 4, 4(7)
  03a10fc  fadds 3, 31, 3
  03a1100  lfs 5, 8(7)
  03a1104  lfs 31, 12(7)
  03a1108  addic 3, 3, 16
  03a110c  addic 7, 7, 16
  03a1110  fadds 3, 3, 4
  03a1114  fadds 3, 3, 5
  03a1118  fadds 31, 3, 31
  03a111c  bdnz 0x3a10f4
  03a1120  lis 3, 58
  03a1124  addi 3, 3, 3264
  03a1128  lfs 3, 16(3)
  03a112c  fadds 31, 31, 3
  03a1130  fmadds 31, 31, 1, 2
  03a1134  stfs 31, 232(1)
  03a1138  addic 5, 1, 232
  03a113c  lfs 1, 16(29)
  03a1140  addic 6, 30, 136
  03a1144  lfs 2, 24(29)
  03a1148  addic 7, 30, 140
  03a114c  stfs 1, 48(1)
  03a1150  stfs 2, 56(1)
  03a1154  lfs 1, 20(29)
  03a1158  lfs 2, 28(29)
  03a115c  stfs 1, 52(1)
  03a1160  stfs 2, 60(1)
  03a1164  ld 3, 48(1)
  03a1168  ld 4, 56(1)
  03a116c  bl 0x107de8
  03a1170  nop
  03a1174  ori 3, 31, 0
  03a1178  lfs 1, 232(1)
  03a117c  ori 4, 28, 0
  03a1180  li 6, 8
  03a1184  li 7, 1
  03a1188  li 8, 0
  03a118c  bl 0x10ad80
  03a1190  nop
  03a1194  li 3, 0
  03a1198  li 4, 0
  03a119c  ori 5, 31, 0
  03a11a0  li 6, 121
  03a11a4  bl 0x15d204
  03a11a8  nop
  03a11ac  li 3, 9
  03a11b0  li 4, 120
  03a11b4  stb 3, 32(31)
  03a11b8  stb 4, 103(30)
  03a11bc  b 0x3a1294
  03a11c0  lhz 6, 52(31)
  03a11c4  stw 27, 192(1)
  03a11c8  addic 28, 1, 208
  03a11cc  rlwimi 6, 27, 0, 19, 19
  03a11d0  stw 27, 196(1)
  03a11d4  stw 27, 200(1)
  03a11d8  ori 3, 31, 0
  03a11dc  stw 27, 204(1)
  03a11e0  li 4, 7
  03a11e4  ori 5, 28, 0
  03a11e8  sth 6, 52(31)
  03a11ec  bl 0xf1114
  03a11f0  nop
  03a11f4  lis 3, 58
  03a11f8  fmr 1, 31
  03a11fc  li 12, -1
  03a1200  fmr 2, 31
  03a1204  addi 7, 3, 3264
  03a1208  li 6, 1
  03a120c  li 11, 16
  03a1210  ori 5, 28, 0
  03a1214  addic 4, 1, 192
  03a1218  lfs 3, 20(7)
  03a121c  lfs 4, 24(7)
  03a1220  ori 3, 31, 0
  03a1224  lfs 5, 28(7)
  03a1228  li 8, 20
  03a122c  lfs 6, 8(7)
  03a1230  li 9, 6
  03a1234  lfs 7, 32(7)
  03a1238  li 10, 32
  03a123c  std 12, 144(1)
  03a1240  std 6, 160(1)
  03a1244  std 11, 168(1)
  03a1248  std 12, 176(1)
  03a124c  std 27, 184(1)
  03a1250  bl 0x10e030
  03a1254  nop
  03a1258  ori 5, 31, 0
  03a125c  li 3, 0
  03a1260  li 4, 0
  03a1264  li 6, 121
  03a1268  bl 0x15d204
  03a126c  nop
  03a1270  li 5, 10
  03a1274  li 6, 240
  03a1278  ori 3, 31, 0
  03a127c  li 4, 512
  03a1280  stb 5, 32(31)
  03a1284  li 5, -1
  03a1288  stb 6, 103(30)
  03a128c  bl 0xfd8d0
  03a1290  nop
  03a1294  addic 4, 30, 96
  03a1298  ori 3, 31, 0
  03a129c  bl 0x10c808
  03a12a0  nop
  03a12a4  cmpwi 29, 0
  03a12a8  bt 2, 0x3a12b0
  03a12ac  stw 27, 52(29)
  03a12b0  li 5, 255
  03a12b4  ori 3, 31, 0
  03a12b8  addic 4, 30, 96
  03a12bc  stb 5, 164(31)
  03a12c0  bl 0x10c9a0
  03a12c4  nop
  03a12c8  lis 3, 132
  03a12cc  lwz 4, 36(31)
  03a12d0  lfs 1, 13132(3)
  03a12d4  lfs 2, 36(4)
  03a12d8  stw 27, 356(30)
  03a12dc  fmuls 1, 2, 1
  03a12e0  lbz 27, 32(31)
  03a12e4  cmpwi 27, 1
  03a12e8  stfs 1, 44(31)
  03a12ec  bt 2, 0x3a12fc
  03a12f0  lwz 3, 464(30)
  03a12f4  cmpwi 3, -1
  03a12f8  bf 2, 0x3a132c
  03a12fc  cmpwi 27, 1
  03a1300  bf 2, 0x3a130c
  03a1304  lfs 1, 372(30)
  03a1308  b 0x3a1310
  03a130c  lfs 1, 376(30)
  03a1310  fmr 2, 1
  03a1314  addic 5, 30, 288
  03a1318  ori 3, 31, 0
  03a131c  stfs 2, 440(30)
  03a1320  bl 0x1118d8
  03a1324  nop
  03a1328  b 0x3a136c
  03a132c  lis 4, 165
  03a1330  lfs 1, 376(30)
  03a1334  slwi 3, 3, 2
  03a1338  addic 5, 4, 7136
  03a133c  extsw 3, 3
  03a1340  stfs 1, 440(30)
  03a1344  addic 4, 30, 288
  03a1348  li 6, 0
  03a134c  li 7, 0
  03a1350  lwzx 5, 5, 3
  03a1354  ori 3, 31, 0
  03a1358  addic 8, 5, 16
  03a135c  lwz 9, 0(5)
  03a1360  extsw 9, 9
  03a1364  bl 0x111ba0
  03a1368  nop
  03a136c  lfs 1, 20(31)
  03a1370  lfs 2, 292(30)
  03a1374  lfs 3, 16(31)
  03a1378  fsubs 1, 1, 2
  03a137c  lfs 2, 288(30)
  03a1380  fsubs 2, 3, 2
  03a1384  lfs 3, 24(31)
  03a1388  lfs 4, 296(30)
  03a138c  fsubs 3, 3, 4
  03a1390  fmuls 1, 1, 1
  03a1394  fmadds 1, 2, 2, 1
  03a1398  lfs 2, 440(30)
  03a139c  fmadds 1, 3, 3, 1
  03a13a0  fsqrts 1, 1
  03a13a4  fcmpu 0, 1, 2
  03a13a8  cror 6, 0, 2
  03a13ac  bt 6, 0x3a13b8
  03a13b0  li 3, 2
  03a13b4  stw 3, 356(30)
  03a13b8  lwz 3, 352(30)
  03a13bc  cmpwi 3, 0
  03a13c0  bf 2, 0x3a13cc
  03a13c4  lwz 3, 8320(26)
  03a13c8  stw 3, 352(30)
  03a13cc  ld 0, 352(1)
  03a13d0  mtlr 0
  03a13d4  lfd 31, 328(1)
  03a13d8  ld 26, 280(1)
  03a13dc  ld 27, 288(1)
  03a13e0  ld 28, 296(1)
  03a13e4  ld 29, 304(1)
  03a13e8  ld 30, 312(1)
  03a13ec  ld 31, 320(1)
  03a13f0  addi 1, 1, 336
  03a13f4  blr

UpdateMoby_491:   # 0x3a14a8, 0x2284 bytes
  03a14a8  stdu 1, -640(1)
  03a14ac  mflr 0
  03a14b0  std 0, 656(1)
  03a14b4  stfd 21, 552(1)
  03a14b8  stfd 22, 560(1)
  03a14bc  stfd 23, 568(1)
  03a14c0  stfd 24, 576(1)
  03a14c4  stfd 25, 584(1)
  03a14c8  stfd 26, 592(1)
  03a14cc  stfd 27, 600(1)
  03a14d0  stfd 28, 608(1)
  03a14d4  stfd 29, 616(1)
  03a14d8  stfd 30, 624(1)
  03a14dc  stfd 31, 632(1)
  03a14e0  std 31, 544(1)
  03a14e4  std 26, 504(1)
  03a14e8  ori 31, 3, 0
  03a14ec  lis 26, 58
  03a14f0  std 30, 536(1)
  03a14f4  addi 26, 26, 5112
  03a14f8  std 29, 528(1)
  03a14fc  std 28, 520(1)
  03a1500  std 27, 512(1)
  03a1504  std 25, 496(1)
  03a1508  std 24, 488(1)
  03a150c  std 23, 480(1)
  03a1510  lwz 30, 120(31)
  03a1514  bl 0x3a0ce8
  03a1518  lbz 3, 32(31)
  03a151c  li 28, 0
  03a1520  lwz 29, 352(30)
  03a1524  cmpwi 3, 0
  03a1528  bt 2, 0x3a15c8
  03a152c  cmpwi 3, 64
  03a1530  bt 2, 0x3a15c8
  03a1534  lis 3, 151
  03a1538  addic 3, 3, -25376
  03a153c  lbz 3, 8356(3)
  03a1540  cmpwi 3, 2
  03a1544  bt 2, 0x3a15c8
  03a1548  lhz 4, 52(31)
  03a154c  lwz 3, 480(30)
  03a1550  ori 4, 4, 65
  03a1554  cmpwi 3, -1
  03a1558  stw 28, 148(31)
  03a155c  sth 4, 52(31)
  03a1560  bt 2, 0x3a15a4
  03a1564  sldi 4, 3, 7
  03a1568  sldi 6, 3, 4
  03a156c  lis 5, 150
  03a1570  subc 4, 4, 6
  03a1574  addic 5, 5, 14176
  03a1578  extsw 4, 4
  03a157c  addc 4, 5, 4
  03a1580  lwz 5, 136(4)
  03a1584  cmpw 5, 31
  03a1588  bf 2, 0x3a15a4
  03a158c  lbz 4, 116(4)
  03a1590  cmpwi 4, 0
  03a1594  bt 2, 0x3a15a4
  03a1598  extsw 3, 3
  03a159c  bl 0x15cdb0
  03a15a0  nop
  03a15a4  lhz 5, 52(31)
  03a15a8  li 3, -1
  03a15ac  li 4, 1
  03a15b0  rlwimi 5, 28, 0, 19, 19
  03a15b4  stw 3, 480(30)
  03a15b8  sth 5, 52(31)
  03a15bc  stb 28, 88(30)
  03a15c0  stb 4, 32(31)
  03a15c4  b 0x3a36cc
  03a15c8  lfs 31, 0(26)
  03a15cc  ori 3, 31, 0
  03a15d0  addic 5, 30, 512
  03a15d4  li 4, 6
  03a15d8  fmr 1, 31
  03a15dc  bl 0x119a18
  03a15e0  nop
  03a15e4  lbz 3, 32(31)
  03a15e8  cmpwi 3, 5
  03a15ec  bt 1, 0x3a1624
  03a15f0  cmpwi 3, 5
  03a15f4  bt 2, 0x3a209c
  03a15f8  cmpwi 3, 4
  03a15fc  bt 2, 0x3a1e8c
  03a1600  cmpwi 3, 3
  03a1604  bt 2, 0x3a1cd4
  03a1608  cmpwi 3, 2
  03a160c  bt 2, 0x3a19fc
  03a1610  cmpwi 3, 1
  03a1614  bt 2, 0x3a1784
  03a1618  cmpwi 3, 0
  03a161c  bt 2, 0x3a1658
  03a1620  b 0x3a340c
  03a1624  cmpwi 3, 64
  03a1628  bt 2, 0x3a3314
  03a162c  cmpwi 3, 10
  03a1630  bt 2, 0x3a31b0
  03a1634  cmpwi 3, 9
  03a1638  bt 2, 0x3a2fb8
  03a163c  cmpwi 3, 8
  03a1640  bt 2, 0x3a2be8
  03a1644  cmpwi 3, 7
  03a1648  bt 2, 0x3a2930
  03a164c  cmpwi 3, 6
  03a1650  bt 2, 0x3a266c
  03a1654  b 0x3a340c
  03a1658  lis 3, 16704
  03a165c  lhz 8, 62(30)
  03a1660  li 5, 12
  03a1664  li 7, 3
  03a1668  lis 4, 16576
  03a166c  stw 3, 32(30)
  03a1670  ori 3, 8, 2
  03a1674  sth 5, 36(30)
  03a1678  li 6, 255
  03a167c  stb 7, 40(30)
  03a1680  stw 4, 48(30)
  03a1684  li 5, -1
  03a1688  lis 7, 17076
  03a168c  sth 3, 62(30)
  03a1690  stb 28, 41(30)
  03a1694  sth 6, 50(31)
  03a1698  stb 6, 48(31)
  03a169c  stw 5, 480(30)
  03a16a0  stw 7, 372(30)
  03a16a4  stw 28, 444(30)
  03a16a8  bl 0x5c8318
  03a16ac  nop
  03a16b0  clrlwi 3, 3, 31
  03a16b4  lhz 4, 52(31)
  03a16b8  li 6, 0
  03a16bc  lis 5, 0
  03a16c0  subc 3, 6, 3
  03a16c4  ori 5, 5, 32768
  03a16c8  cntlzw 3, 3
  03a16cc  or 5, 4, 5
  03a16d0  sldi 3, 3, 58
  03a16d4  subc 4, 4, 5
  03a16d8  sradi 3, 3, 63
  03a16dc  and 3, 3, 4
  03a16e0  lwz 4, 384(30)
  03a16e4  addc 3, 5, 3
  03a16e8  stw 28, 148(31)
  03a16ec  cmpwi 4, -1
  03a16f0  ori 3, 3, 65
  03a16f4  rlwimi 3, 28, 0, 19, 19
  03a16f8  sth 3, 52(31)
  03a16fc  bt 2, 0x3a170c
  03a1700  lwz 3, 388(30)
  03a1704  cmpwi 3, -1
  03a1708  bf 2, 0x3a1714
  03a170c  li 3, 1
  03a1710  stw 3, 468(30)
  03a1714  lwz 3, 368(30)
  03a1718  cmpwi 3, -1
  03a171c  bt 2, 0x3a1754
  03a1720  lis 4, 165
  03a1724  slwi 3, 3, 2
  03a1728  addic 4, 4, 7136
  03a172c  extsw 3, 3
  03a1730  lwzx 3, 4, 3
  03a1734  lfs 1, 16(3)
  03a1738  stfs 1, 16(31)
  03a173c  lfs 1, 20(3)
  03a1740  stfs 1, 20(31)
  03a1744  lfs 1, 24(3)
  03a1748  stfs 1, 24(31)
  03a174c  lfs 1, 28(3)
  03a1750  stfs 1, 28(31)
  03a1754  li 3, 1
  03a1758  lbz 4, 83(31)
  03a175c  cmpwi 4, 0
  03a1760  stb 3, 32(31)
  03a1764  bt 2, 0x3a340c
  03a1768  ori 3, 31, 0
  03a176c  li 4, 0
  03a1770  li 5, 0
  03a1774  li 6, 5
  03a1778  bl 0xfddc0
  03a177c  nop
  03a1780  b 0x3a340c
  03a1784  lwz 3, 460(30)
  03a1788  cmpwi 3, -1
  03a178c  bf 2, 0x3a17b8
  03a1790  lis 3, 151
  03a1794  lwz 4, 476(30)
  03a1798  addic 3, 3, -25376
  03a179c  extsw 4, 4
  03a17a0  addic 3, 3, 128
  03a17a4  bl 0x110b70
  03a17a8  nop
  03a17ac  cmpwi 3, 0
  03a17b0  bt 2, 0x3a180c
  03a17b4  lwz 3, 460(30)
  03a17b8  cmpwi 3, -1
  03a17bc  bt 2, 0x3a17d8
  03a17c0  extsw 3, 3
  03a17c4  li 4, 64
  03a17c8  bl 0x104214
  03a17cc  nop
  03a17d0  cmpwi 3, 0
  03a17d4  bf 2, 0x3a340c
  03a17d8  lis 3, 151
  03a17dc  addic 3, 3, -25376
  03a17e0  lbz 3, 8356(3)
  03a17e4  cmpwi 3, 2
  03a17e8  bf 2, 0x3a180c
  03a17ec  lwz 4, 36(31)
  03a17f0  li 3, -66
  03a17f4  lhz 5, 52(31)
  03a17f8  and 3, 5, 3
  03a17fc  ori 3, 3, 4096
  03a1800  lwz 4, 16(4)
  03a1804  stw 4, 148(31)
  03a1808  sth 3, 52(31)
  03a180c  lwz 3, 356(30)
  03a1810  cmpwi 3, 2
  03a1814  bt 2, 0x3a340c
  03a1818  lwz 3, 368(30)
  03a181c  cmpwi 3, -1
  03a1820  bt 2, 0x3a340c
  03a1824  lis 4, 151
  03a1828  addic 4, 4, -25376
  03a182c  lbz 3, 8356(4)
  03a1830  cmpwi 3, 2
  03a1834  bf 2, 0x3a340c
  03a1838  lhz 3, 52(31)
  03a183c  rlwinm 3, 3, 0, 19, 19
  03a1840  cmpwi 3, 0
  03a1844  bt 2, 0x3a340c
  03a1848  lwz 3, 464(30)
  03a184c  cmpwi 3, -1
  03a1850  bt 2, 0x3a18a0
  03a1854  lis 5, 165
  03a1858  slwi 3, 3, 2
  03a185c  addic 5, 5, 7136
  03a1860  extsw 6, 3
  03a1864  addic 3, 4, 128
  03a1868  lwzx 5, 5, 6
  03a186c  addic 4, 5, 16
  03a1870  lwz 5, 0(5)
  03a1874  extsw 5, 5
  03a1878  bl 0x104e44
  03a187c  nop
  03a1880  cmpwi 3, 0
  03a1884  bf 2, 0x3a18a0
  03a1888  lhz 3, 52(31)
  03a188c  stw 28, 148(31)
  03a1890  ori 3, 3, 65
  03a1894  rlwimi 3, 28, 0, 19, 19
  03a1898  sth 3, 52(31)
  03a189c  b 0x3a340c
  03a18a0  li 3, 2
  03a18a4  lbz 4, 83(31)
  03a18a8  cmpwi 4, 4
  03a18ac  stb 3, 32(31)
  03a18b0  bt 2, 0x3a18e8
  03a18b4  lis 3, 114
  03a18b8  lfs 1, 4(26)
  03a18bc  li 4, 4
  03a18c0  li 5, 0
  03a18c4  lfs 2, -3056(3)
  03a18c8  ori 3, 31, 0
  03a18cc  fmuls 1, 2, 1
  03a18d0  fctiwz 1, 1
  03a18d4  stfd 1, 456(1)
  03a18d8  lwz 6, 460(1)
  03a18dc  extsw 6, 6
  03a18e0  bl 0xfddc0
  03a18e4  nop
  03a18e8  lis 3, 165
  03a18ec  ori 29, 28, 0
  03a18f0  addic 27, 3, 7136
  03a18f4  lwz 3, 368(30)
  03a18f8  slwi 3, 3, 2
  03a18fc  extsw 3, 3
  03a1900  lwzx 27, 27, 3
  03a1904  lwz 3, 0(27)
  03a1908  addic 4, 3, -2
  03a190c  cmpwi 4, 0
  03a1910  bf 1, 0x3a1948
  03a1914  ori 25, 27, 0
  03a1918  addic 24, 25, 16
  03a191c  addic 4, 25, 32
  03a1920  ori 3, 24, 0
  03a1924  bl 0x5e8548
  03a1928  nop
  03a192c  stfs 1, 28(25)
  03a1930  lwz 3, 0(27)
  03a1934  addic 29, 29, 1
  03a1938  ori 25, 24, 0
  03a193c  addic 4, 3, -2
  03a1940  cmpw 29, 4
  03a1944  bt 0, 0x3a1918
  03a1948  lfs 1, 16(27)
  03a194c  slwi 3, 3, 4
  03a1950  addic 29, 30, 64
  03a1954  stfs 1, 16(31)
  03a1958  lfs 1, 20(27)
  03a195c  addc 4, 27, 3
  03a1960  addic 25, 31, 16
  03a1964  stfs 1, 20(31)
  03a1968  lfs 1, 24(27)
  03a196c  ori 3, 29, 0
  03a1970  clrldi 4, 4, 32
  03a1974  stfs 1, 24(31)
  03a1978  lfs 1, 28(27)
  03a197c  ori 5, 25, 0
  03a1980  stfs 1, 28(31)
  03a1984  bl 0x5e81f0
  03a1988  nop
  03a198c  lis 24, 132
  03a1990  lis 23, 114
  03a1994  ori 4, 29, 0
  03a1998  ori 3, 29, 0
  03a199c  lfs 1, 13104(24)
  03a19a0  lfs 2, -3052(23)
  03a19a4  fmuls 1, 1, 2
  03a19a8  bl 0x5e84c0
  03a19ac  nop
  03a19b0  lis 4, 132
  03a19b4  lwz 6, 0(27)
  03a19b8  lis 5, 114
  03a19bc  lfs 1, 13104(24)
  03a19c0  slwi 6, 6, 4
  03a19c4  ori 3, 25, 0
  03a19c8  li 7, 0
  03a19cc  lfs 2, 13108(4)
  03a19d0  lfs 3, -3048(5)
  03a19d4  addc 4, 27, 6
  03a19d8  lfs 4, -3052(23)
  03a19dc  fmuls 2, 2, 3
  03a19e0  fmuls 1, 1, 4
  03a19e4  clrldi 4, 4, 32
  03a19e8  fneg 2, 2
  03a19ec  bl 0x108180
  03a19f0  nop
  03a19f4  stfs 1, 72(30)
  03a19f8  b 0x3a340c
  03a19fc  lis 3, 165
  03a1a00  lis 4, 114
  03a1a04  addic 29, 3, 7136
  03a1a08  lwz 3, 368(30)
  03a1a0c  addic 27, 31, 16
  03a1a10  lfs 30, 8(26)
  03a1a14  addic 5, 1, 144
  03a1a18  slwi 3, 3, 2
  03a1a1c  lfs 4, -3052(4)
  03a1a20  extsw 3, 3
  03a1a24  lfs 1, 12(26)
  03a1a28  lfs 2, 16(26)
  03a1a2c  addic 6, 1, 452
  03a1a30  addic 7, 1, 448
  03a1a34  fmuls 30, 4, 30
  03a1a38  ori 4, 27, 0
  03a1a3c  li 9, 0
  03a1a40  lwzx 29, 29, 3
  03a1a44  lfs 3, 20(26)
  03a1a48  ori 3, 29, 0
  03a1a4c  bl 0x10d7a0
  03a1a50  nop
  03a1a54  lwz 3, 452(1)
  03a1a58  extsw 3, 3
  03a1a5c  bl 0x502730
  03a1a60  nop
  03a1a64  lfs 2, 28(29)
  03a1a68  lfs 3, 448(1)
  03a1a6c  lfs 4, 24(26)
  03a1a70  fmadds 1, 1, 2, 3
  03a1a74  fmr 3, 4
  03a1a78  fadds 29, 1, 3
  03a1a7c  fdivs 1, 29, 2
  03a1a80  bl 0x502758
  03a1a84  nop
  03a1a88  stw 3, 452(1)
  03a1a8c  bl 0x502730
  03a1a90  nop
  03a1a94  lfs 2, 28(29)
  03a1a98  lwz 4, 452(1)
  03a1a9c  fnmsubs 1, 1, 2, 29
  03a1aa0  fdivs 1, 1, 2
  03a1aa4  stfs 1, 448(1)
  03a1aa8  lwz 3, 0(29)
  03a1aac  addic 5, 3, -1
  03a1ab0  cmpw 4, 5
  03a1ab4  bt 0, 0x3a1b20
  03a1ab8  lfs 1, 28(26)
  03a1abc  ori 3, 27, 0
  03a1ac0  li 4, 0
  03a1ac4  bl 0xffb70
  03a1ac8  nop
  03a1acc  lfs 2, 24(31)
  03a1ad0  fcmpu 0, 1, 2
  03a1ad4  cror 6, 0, 2
  03a1ad8  bt 6, 0x3a1ae0
  03a1adc  stfs 1, 24(31)
  03a1ae0  li 3, 4
  03a1ae4  vspltisw 2, -1
  03a1ae8  li 5, 32
  03a1aec  lis 4, 114
  03a1af0  li 6, -3056
  03a1af4  stb 3, 32(31)
  03a1af8  vslw 2, 2, 2
  03a1afc  lvlx 3, 5, 26
  03a1b00  li 3, 448
  03a1b04  vspltw 3, 3, 0
  03a1b08  lvlx 4, 6, 4
  03a1b0c  vmaddfp 2, 4, 3, 2
  03a1b10  vctsxs 2, 2, 0
  03a1b14  vspltw 2, 2, 0
  03a1b18  stvewx 2, 3, 30
  03a1b1c  b 0x3a340c
  03a1b20  slwi 4, 3, 4
  03a1b24  ori 3, 27, 0
  03a1b28  addc 4, 29, 4
  03a1b2c  clrldi 4, 4, 32
  03a1b30  bl 0x5e8548
  03a1b34  nop
  03a1b38  lis 3, 114
  03a1b3c  lfs 2, 36(26)
  03a1b40  fmr 3, 1
  03a1b44  lfs 1, -3056(3)
  03a1b48  fmuls 2, 1, 2
  03a1b4c  fmr 1, 3
  03a1b50  fdivs 2, 30, 2
  03a1b54  fcmpu 0, 1, 2
  03a1b58  lfs 1, -3056(3)
  03a1b5c  cror 6, 1, 2
  03a1b60  bt 6, 0x3a1b9c
  03a1b64  lbz 3, 83(31)
  03a1b68  cmpwi 3, 5
  03a1b6c  bt 2, 0x3a1b9c
  03a1b70  lfs 2, 40(26)
  03a1b74  ori 3, 31, 0
  03a1b78  li 4, 5
  03a1b7c  fmuls 1, 1, 2
  03a1b80  li 5, 0
  03a1b84  fctiwz 1, 1
  03a1b88  stfd 1, 456(1)
  03a1b8c  lwz 6, 460(1)
  03a1b90  extsw 6, 6
  03a1b94  bl 0xfddc0
  03a1b98  nop
  03a1b9c  lwz 4, 452(1)
  03a1ba0  addic 25, 1, 144
  03a1ba4  slwi 4, 4, 4
  03a1ba8  ori 3, 25, 0
  03a1bac  addc 4, 29, 4
  03a1bb0  addic 5, 4, 32
  03a1bb4  addic 6, 4, 16
  03a1bb8  clrldi 4, 5, 32
  03a1bbc  clrldi 5, 6, 32
  03a1bc0  bl 0x5e81f0
  03a1bc4  nop
  03a1bc8  lfs 1, 448(1)
  03a1bcc  ori 4, 25, 0
  03a1bd0  lfs 2, 144(1)
  03a1bd4  lfs 3, 148(1)
  03a1bd8  fmuls 2, 2, 1
  03a1bdc  lfs 4, 152(1)
  03a1be0  fmuls 3, 3, 1
  03a1be4  fmuls 1, 4, 1
  03a1be8  lwz 3, 452(1)
  03a1bec  slwi 3, 3, 4
  03a1bf0  addc 5, 29, 3
  03a1bf4  ori 3, 25, 0
  03a1bf8  addic 5, 5, 16
  03a1bfc  clrldi 5, 5, 32
  03a1c00  stfs 2, 144(1)
  03a1c04  stfs 3, 148(1)
  03a1c08  stfs 1, 152(1)
  03a1c0c  bl 0x5e7f54
  03a1c10  nop
  03a1c14  lwz 3, 452(1)
  03a1c18  lwz 4, 0(29)
  03a1c1c  addic 3, 3, 1
  03a1c20  addic 4, 4, -8
  03a1c24  cmpw 3, 4
  03a1c28  bf 0, 0x3a1c80
  03a1c2c  slwi 3, 3, 4
  03a1c30  lfs 31, 72(31)
  03a1c34  addc 3, 29, 3
  03a1c38  lfs 1, 16(31)
  03a1c3c  clrldi 3, 3, 32
  03a1c40  lfs 2, 20(31)
  03a1c44  lfs 3, 16(3)
  03a1c48  lfs 4, 20(3)
  03a1c4c  fsubs 1, 3, 1
  03a1c50  fsubs 2, 4, 2
  03a1c54  bl 0x5e8338
  03a1c58  nop
  03a1c5c  fmr 2, 1
  03a1c60  fmr 1, 31
  03a1c64  lfs 3, 44(26)
  03a1c68  lfs 4, 48(26)
  03a1c6c  addic 5, 30, 444
  03a1c70  lfs 5, 52(26)
  03a1c74  bl 0xff190
  03a1c78  nop
  03a1c7c  stfs 1, 72(31)
  03a1c80  addic 29, 1, 128
  03a1c84  addic 4, 1, 144
  03a1c88  ori 3, 29, 0
  03a1c8c  ori 5, 27, 0
  03a1c90  bl 0x5e81f0
  03a1c94  nop
  03a1c98  ori 3, 29, 0
  03a1c9c  bl 0x5e8030
  03a1ca0  nop
  03a1ca4  fsub 2, 30, 1
  03a1ca8  ori 3, 29, 0
  03a1cac  ori 4, 29, 0
  03a1cb0  fsel 1, 2, 1, 30
  03a1cb4  bl 0x5e7f98
  03a1cb8  nop
  03a1cbc  ori 3, 27, 0
  03a1cc0  ori 4, 27, 0
  03a1cc4  ori 5, 29, 0
  03a1cc8  bl 0x5e7f54
  03a1ccc  nop
  03a1cd0  b 0x3a33d4
  03a1cd4  lbz 3, 83(31)
  03a1cd8  cmpwi 3, 3
  03a1cdc  cmpwi 1, 3, 4
  03a1ce0  bf 2, 0x3a1d2c
  03a1ce4  lbz 3, 112(31)
  03a1ce8  rlwinm 3, 3, 0, 30, 30
  03a1cec  cmpwi 3, 0
  03a1cf0  bt 2, 0x3a1d2c
  03a1cf4  bt 6, 0x3a1d2c
  03a1cf8  lis 3, 114
  03a1cfc  lfs 1, 40(26)
  03a1d00  li 4, 4
  03a1d04  li 5, 0
  03a1d08  lfs 2, -3056(3)
  03a1d0c  ori 3, 31, 0
  03a1d10  fmuls 1, 2, 1
  03a1d14  fctiwz 1, 1
  03a1d18  stfd 1, 456(1)
  03a1d1c  lwz 6, 460(1)
  03a1d20  extsw 6, 6
  03a1d24  bl 0xfddc0
  03a1d28  nop
  03a1d2c  addic 3, 31, 16
  03a1d30  addic 5, 30, 64
  03a1d34  ori 4, 3, 0
  03a1d38  bl 0x5e7f54
  03a1d3c  nop
  03a1d40  lis 3, 132
  03a1d44  lfs 1, 72(30)
  03a1d48  lis 4, 114
  03a1d4c  lfs 2, 13108(3)
  03a1d50  lfs 3, -3048(4)
  03a1d54  fnmsubs 1, 2, 3, 1
  03a1d58  stfs 1, 72(30)
  03a1d5c  lfs 2, 20(26)
  03a1d60  fcmpu 0, 1, 2
  03a1d64  cror 6, 1, 2
  03a1d68  bt 6, 0x3a33d4
  03a1d6c  lfs 1, 16(31)
  03a1d70  lfs 2, 20(31)
  03a1d74  addic 3, 1, 160
  03a1d78  stfs 1, 160(1)
  03a1d7c  li 4, 0
  03a1d80  lfs 1, 28(31)
  03a1d84  stfs 2, 164(1)
  03a1d88  stfs 1, 172(1)
  03a1d8c  lfs 1, 56(26)
  03a1d90  lfs 2, 24(31)
  03a1d94  fadds 1, 2, 1
  03a1d98  stfs 1, 168(1)
  03a1d9c  lfs 30, 28(26)
  03a1da0  fmr 1, 30
  03a1da4  bl 0xffb70
  03a1da8  nop
  03a1dac  lis 3, 132
  03a1db0  lis 4, 114
  03a1db4  lfs 2, 36(26)
  03a1db8  lis 5, 114
  03a1dbc  fmr 31, 1
  03a1dc0  lfs 3, 13108(3)
  03a1dc4  lfs 4, -3048(4)
  03a1dc8  fmuls 3, 3, 4
  03a1dcc  lfs 4, 24(31)
  03a1dd0  lfs 1, -3056(5)
  03a1dd4  fmuls 5, 1, 2
  03a1dd8  fmr 2, 4
  03a1ddc  lfs 4, 72(30)
  03a1de0  fmuls 3, 3, 30
  03a1de4  fsubs 6, 2, 31
  03a1de8  fmuls 3, 3, 5
  03a1dec  fmuls 3, 3, 5
  03a1df0  fmadds 3, 5, 4, 3
  03a1df4  fcmpu 0, 6, 3
  03a1df8  cror 6, 1, 2
  03a1dfc  bt 6, 0x3a1e3c
  03a1e00  lbz 3, 83(31)
  03a1e04  cmpwi 3, 5
  03a1e08  bt 2, 0x3a1e3c
  03a1e0c  lfs 2, 40(26)
  03a1e10  ori 3, 31, 0
  03a1e14  fmuls 1, 1, 2
  03a1e18  li 4, 5
  03a1e1c  li 5, 0
  03a1e20  fctiwz 1, 1
  03a1e24  stfd 1, 456(1)
  03a1e28  lwz 6, 460(1)
  03a1e2c  extsw 6, 6
  03a1e30  bl 0xfddc0
  03a1e34  nop
  03a1e38  lfs 2, 24(31)
  03a1e3c  fcmpu 0, 31, 2
  03a1e40  cror 6, 0, 2
  03a1e44  bt 6, 0x3a33d4
  03a1e48  li 3, 4
  03a1e4c  stfs 31, 24(31)
  03a1e50  li 5, 32
  03a1e54  vspltisw 3, -1
  03a1e58  li 4, -3056
  03a1e5c  lis 6, 114
  03a1e60  stb 3, 32(31)
  03a1e64  vslw 3, 3, 3
  03a1e68  lvlx 2, 5, 26
  03a1e6c  li 3, 448
  03a1e70  vspltw 2, 2, 0
  03a1e74  lvlx 4, 4, 6
  03a1e78  vmaddfp 2, 4, 2, 3
  03a1e7c  vctsxs 2, 2, 0
  03a1e80  vspltw 2, 2, 0
  03a1e84  stvewx 2, 3, 30
  03a1e88  b 0x3a33d4
  03a1e8c  lbz 3, 83(31)
  03a1e90  cmpwi 3, 0
  03a1e94  bt 2, 0x3a1edc
  03a1e98  lbz 3, 112(31)
  03a1e9c  rlwinm 3, 3, 0, 30, 30
  03a1ea0  cmpwi 3, 0
  03a1ea4  bt 2, 0x3a1edc
  03a1ea8  lis 3, 114
  03a1eac  lfs 1, 4(26)
  03a1eb0  li 4, 0
  03a1eb4  li 5, 0
  03a1eb8  lfs 2, -3056(3)
  03a1ebc  ori 3, 31, 0
  03a1ec0  fmuls 1, 2, 1
  03a1ec4  fctiwz 1, 1
  03a1ec8  stfd 1, 456(1)
  03a1ecc  lwz 6, 460(1)
  03a1ed0  extsw 6, 6
  03a1ed4  bl 0xfddc0
  03a1ed8  nop
  03a1edc  lwz 3, 356(30)
  03a1ee0  cmpwi 3, 2
  03a1ee4  bt 2, 0x3a340c
  03a1ee8  lfs 1, 16(29)
  03a1eec  addic 27, 31, 72
  03a1ef0  lfs 2, 16(31)
  03a1ef4  lfs 3, 20(29)
  03a1ef8  lfs 4, 20(31)
  03a1efc  fsubs 1, 1, 2
  03a1f00  fsubs 2, 3, 4
  03a1f04  bl 0x5e8338
  03a1f08  nop
  03a1f0c  lis 3, 114
  03a1f10  lfs 2, 60(26)
  03a1f14  lis 4, 114
  03a1f18  lfs 3, 64(26)
  03a1f1c  addic 5, 30, 444
  03a1f20  lfs 4, -3048(3)
  03a1f24  lfs 5, -3052(4)
  03a1f28  fmuls 2, 4, 2
  03a1f2c  ori 3, 27, 0
  03a1f30  fmuls 4, 5, 3
  03a1f34  fmr 3, 2
  03a1f38  bl 0x10a2e0
  03a1f3c  nop
  03a1f40  addic 3, 30, 448
  03a1f44  bl 0x4fff60
  03a1f48  nop
  03a1f4c  cmpwi 3, 0
  03a1f50  bt 2, 0x3a340c
  03a1f54  lwz 3, 472(30)
  03a1f58  cmpwi 3, 0
  03a1f5c  bf 2, 0x3a204c
  03a1f60  ori 27, 29, 0
  03a1f64  addic 29, 31, 16
  03a1f68  addic 27, 27, 16
  03a1f6c  ori 3, 29, 0
  03a1f70  ori 4, 27, 0
  03a1f74  bl 0x5e8588
  03a1f78  nop
  03a1f7c  lis 3, 132
  03a1f80  lfs 2, 13120(3)
  03a1f84  fcmpu 0, 1, 2
  03a1f88  cror 6, 1, 2
  03a1f8c  bt 6, 0x3a1fdc
  03a1f90  li 3, 7
  03a1f94  lbz 4, 83(31)
  03a1f98  cmpwi 4, 1
  03a1f9c  stb 3, 32(31)
  03a1fa0  bt 2, 0x3a340c
  03a1fa4  lis 3, 114
  03a1fa8  lfs 1, 68(26)
  03a1fac  li 4, 1
  03a1fb0  li 5, 0
  03a1fb4  lfs 2, -3056(3)
  03a1fb8  ori 3, 31, 0
  03a1fbc  fmuls 1, 2, 1
  03a1fc0  fctiwz 1, 1
  03a1fc4  stfd 1, 456(1)
  03a1fc8  lwz 6, 460(1)
  03a1fcc  extsw 6, 6
  03a1fd0  bl 0xfddc0
  03a1fd4  nop
  03a1fd8  b 0x3a340c
  03a1fdc  ori 3, 29, 0
  03a1fe0  ori 4, 27, 0
  03a1fe4  bl 0x5e8588
  03a1fe8  nop
  03a1fec  lis 3, 132
  03a1ff0  lfs 2, 13124(3)
  03a1ff4  fcmpu 0, 1, 2
  03a1ff8  cror 6, 1, 2
  03a1ffc  bt 6, 0x3a204c
  03a2000  li 3, 8
  03a2004  lbz 4, 83(31)
  03a2008  cmpwi 4, 2
  03a200c  stb 3, 32(31)
  03a2010  bt 2, 0x3a340c
  03a2014  lis 3, 114
  03a2018  lfs 1, 68(26)
  03a201c  li 4, 2
  03a2020  li 5, 0
  03a2024  lfs 2, -3056(3)
  03a2028  ori 3, 31, 0
  03a202c  fmuls 1, 2, 1
  03a2030  fctiwz 1, 1
  03a2034  stfd 1, 456(1)
  03a2038  lwz 6, 460(1)
  03a203c  extsw 6, 6
  03a2040  bl 0xfddc0
  03a2044  nop
  03a2048  b 0x3a340c
  03a204c  li 3, 5
  03a2050  lbz 4, 83(31)
  03a2054  cmpwi 4, 6
  03a2058  stb 3, 32(31)
  03a205c  bt 2, 0x3a2094
  03a2060  lis 3, 114
  03a2064  lfs 1, 4(26)
  03a2068  li 4, 6
  03a206c  li 5, 0
  03a2070  lfs 2, -3056(3)
  03a2074  ori 3, 31, 0
  03a2078  fmuls 1, 2, 1
  03a207c  fctiwz 1, 1
  03a2080  stfd 1, 456(1)
  03a2084  lwz 6, 460(1)
  03a2088  extsw 6, 6
  03a208c  bl 0xfddc0
  03a2090  nop
  03a2094  stw 28, 452(30)
  03a2098  b 0x3a340c
  03a209c  lbz 3, 83(31)
  03a20a0  cmpwi 3, 6
  03a20a4  bf 2, 0x3a2104
  03a20a8  lbz 4, 112(31)
  03a20ac  cmpwi 1, 3, 7
  03a20b0  rlwinm 4, 4, 0, 30, 30
  03a20b4  cmpwi 4, 0
  03a20b8  bt 2, 0x3a2104
  03a20bc  bt 6, 0x3a20f8
  03a20c0  lis 3, 114
  03a20c4  lfs 1, 72(26)
  03a20c8  li 4, 7
  03a20cc  li 5, 0
  03a20d0  lfs 2, -3056(3)
  03a20d4  ori 3, 31, 0
  03a20d8  fmuls 1, 2, 1
  03a20dc  fctiwz 1, 1
  03a20e0  stfd 1, 456(1)
  03a20e4  lwz 6, 460(1)
  03a20e8  extsw 6, 6
  03a20ec  bl 0xfddc0
  03a20f0  nop
  03a20f4  lbz 3, 83(31)
  03a20f8  lis 4, 132
  03a20fc  lfs 1, 13136(4)
  03a2100  stfs 1, 88(31)
  03a2104  cmpwi 1, 3, 0
  03a2108  lwz 3, 356(30)
  03a210c  cmpwi 3, 2
  03a2110  bt 2, 0x3a2628
  03a2114  lfs 1, 16(29)
  03a2118  lfs 2, 16(31)
  03a211c  addic 27, 31, 72
  03a2120  lfs 3, 20(29)
  03a2124  lfs 4, 20(31)
  03a2128  fsubs 1, 1, 2
  03a212c  fsubs 2, 3, 4
  03a2130  bl 0x5e8338
  03a2134  nop
  03a2138  lis 3, 114
  03a213c  lfs 2, 60(26)
  03a2140  lfs 3, 64(26)
  03a2144  lis 4, 114
  03a2148  addic 5, 30, 444
  03a214c  lfs 4, -3048(3)
  03a2150  lfs 5, -3052(4)
  03a2154  ori 3, 27, 0
  03a2158  fmuls 2, 4, 2
  03a215c  fmuls 4, 5, 3
  03a2160  fmr 3, 2
  03a2164  bl 0x10a2e0
  03a2168  nop
  03a216c  lbz 3, 83(31)
  03a2170  cmpwi 3, 7
  03a2174  bf 2, 0x3a22fc
  03a2178  ori 3, 31, 0
  03a217c  lfs 30, 20(26)
  03a2180  fmr 1, 30
  03a2184  bl 0x113e88
  03a2188  nop
  03a218c  ori 4, 3, 0
  03a2190  lbz 3, 83(31)
  03a2194  cmpwi 4, 0
  03a2198  bt 2, 0x3a22fc
  03a219c  addic 27, 1, 176
  03a21a0  ori 3, 31, 0
  03a21a4  li 4, 0
  03a21a8  ori 5, 27, 0
  03a21ac  bl 0xf1114
  03a21b0  nop
  03a21b4  addic 25, 1, 192
  03a21b8  addic 4, 29, 16
  03a21bc  ori 3, 25, 0
  03a21c0  ori 5, 27, 0
  03a21c4  bl 0x5e81f0
  03a21c8  nop
  03a21cc  lfs 29, 28(26)
  03a21d0  lfs 1, 200(1)
  03a21d4  lis 5, 132
  03a21d8  lis 6, 114
  03a21dc  fadds 4, 1, 29
  03a21e0  ori 3, 25, 0
  03a21e4  ori 4, 25, 0
  03a21e8  lfs 2, 13116(5)
  03a21ec  lfs 3, -3052(6)
  03a21f0  fmuls 1, 2, 3
  03a21f4  stfs 4, 200(1)
  03a21f8  bl 0x5e7f98
  03a21fc  nop
  03a2200  lwz 3, 200(1)
  03a2204  lfs 1, 200(1)
  03a2208  cmpwi 3, 0
  03a220c  bf 1, 0x3a2218
  03a2210  fmr 1, 30
  03a2214  stw 28, 200(1)
  03a2218  fcmpu 0, 1, 30
  03a221c  cror 6, 1, 2
  03a2220  bt 6, 0x3a2228
  03a2224  stw 28, 200(1)
  03a2228  lis 3, 132
  03a222c  addic 27, 1, 176
  03a2230  addic 25, 1, 192
  03a2234  lwz 3, 13112(3)
  03a2238  extsw 3, 3
  03a223c  ori 4, 27, 0
  03a2240  std 3, 456(1)
  03a2244  lis 3, 114
  03a2248  ori 5, 31, 0
  03a224c  ori 6, 29, 0
  03a2250  lfs 1, -3056(3)
  03a2254  lfd 2, 456(1)
  03a2258  fcfid 2, 2
  03a225c  ori 3, 25, 0
  03a2260  frsp 2, 2
  03a2264  fadds 2, 2, 29
  03a2268  fmuls 1, 1, 2
  03a226c  fctiwz 1, 1
  03a2270  stfd 1, 456(1)
  03a2274  lfs 30, 76(26)
  03a2278  lwz 7, 460(1)
  03a227c  fmr 1, 30
  03a2280  extsw 7, 7
  03a2284  bl 0x470690
  03a2288  nop
  03a228c  fmr 1, 30
  03a2290  ori 3, 25, 0
  03a2294  ori 4, 25, 0
  03a2298  bl 0x5e7f98
  03a229c  nop
  03a22a0  addic 3, 1, 208
  03a22a4  ori 4, 27, 0
  03a22a8  ori 5, 25, 0
  03a22ac  bl 0x502b08
  03a22b0  nop
  03a22b4  lfs 1, 176(1)
  03a22b8  lfs 2, 184(1)
  03a22bc  ori 3, 31, 0
  03a22c0  stfs 1, 64(1)
  03a22c4  li 7, 0
  03a22c8  stfs 2, 72(1)
  03a22cc  lfs 1, 180(1)
  03a22d0  lfs 2, 188(1)
  03a22d4  stfs 1, 68(1)
  03a22d8  stfs 2, 76(1)
  03a22dc  ld 5, 64(1)
  03a22e0  ld 6, 72(1)
  03a22e4  bl 0x1162a0
  03a22e8  nop
  03a22ec  lwz 3, 452(30)
  03a22f0  addic 3, 3, 1
  03a22f4  stw 3, 452(30)
  03a22f8  b 0x3a340c
  03a22fc  li 4, 452
  03a2300  li 6, 80
  03a2304  addi 5, 4, 16
  03a2308  lvlx 2, 4, 30
  03a230c  lvrx 3, 5, 30
  03a2310  vor 2, 2, 3
  03a2314  lvlx 3, 6, 26
  03a2318  vspltw 3, 3, 0
  03a231c  vcfsx 2, 2, 0
  03a2320  vspltw 2, 2, 0
  03a2324  vcmpgefp. 2, 2, 3
  03a2328  bt 26, 0x3a23a8
  03a232c  cmpwi 1, 3, 0
  03a2330  lbz 3, 112(31)
  03a2334  rlwinm 3, 3, 0, 30, 30
  03a2338  cmpwi 3, 0
  03a233c  bt 2, 0x3a23a8
  03a2340  li 3, 6
  03a2344  stb 3, 32(31)
  03a2348  bt 6, 0x3a2380
  03a234c  lis 3, 114
  03a2350  lfs 1, 68(26)
  03a2354  li 4, 0
  03a2358  li 5, 0
  03a235c  lfs 2, -3056(3)
  03a2360  ori 3, 31, 0
  03a2364  fmuls 1, 2, 1
  03a2368  fctiwz 1, 1
  03a236c  stfd 1, 456(1)
  03a2370  lwz 6, 460(1)
  03a2374  extsw 6, 6
  03a2378  bl 0xfddc0
  03a237c  nop
  03a2380  lfs 1, 84(26)
  03a2384  lis 3, 114
  03a2388  lfs 2, 392(30)
  03a238c  fmuls 1, 2, 1
  03a2390  lfs 3, -3056(3)
  03a2394  fmuls 1, 3, 1
  03a2398  bl 0x502758
  03a239c  nop
  03a23a0  stw 3, 448(30)
  03a23a4  b 0x3a340c
  03a23a8  lwz 3, 472(30)
  03a23ac  cmpwi 3, 0
  03a23b0  bf 2, 0x3a249c
  03a23b4  addic 27, 31, 16
  03a23b8  addic 25, 29, 16
  03a23bc  ori 3, 27, 0
  03a23c0  ori 4, 25, 0
  03a23c4  bl 0x5e8588
  03a23c8  nop
  03a23cc  lis 3, 132
  03a23d0  lfs 2, 13120(3)
  03a23d4  fcmpu 0, 1, 2
  03a23d8  cror 6, 1, 2
  03a23dc  bt 6, 0x3a242c
  03a23e0  li 3, 7
  03a23e4  lbz 4, 83(31)
  03a23e8  cmpwi 4, 1
  03a23ec  stb 3, 32(31)
  03a23f0  bt 2, 0x3a340c
  03a23f4  lis 3, 114
  03a23f8  lfs 1, 68(26)
  03a23fc  li 4, 1
  03a2400  li 5, 0
  03a2404  lfs 2, -3056(3)
  03a2408  ori 3, 31, 0
  03a240c  fmuls 1, 2, 1
  03a2410  fctiwz 1, 1
  03a2414  stfd 1, 456(1)
  03a2418  lwz 6, 460(1)
  03a241c  extsw 6, 6
  03a2420  bl 0xfddc0
  03a2424  nop
  03a2428  b 0x3a340c
  03a242c  ori 3, 27, 0
  03a2430  ori 4, 25, 0
  03a2434  bl 0x5e8588
  03a2438  nop
  03a243c  lis 3, 132
  03a2440  lfs 2, 13124(3)
  03a2444  fcmpu 0, 1, 2
  03a2448  cror 6, 1, 2
  03a244c  bt 6, 0x3a249c
  03a2450  li 3, 8
  03a2454  lbz 4, 83(31)
  03a2458  cmpwi 4, 2
  03a245c  stb 3, 32(31)
  03a2460  bt 2, 0x3a340c
  03a2464  lis 3, 114
  03a2468  lfs 1, 68(26)
  03a246c  li 4, 2
  03a2470  li 5, 0
  03a2474  lfs 2, -3056(3)
  03a2478  ori 3, 31, 0
  03a247c  fmuls 1, 2, 1
  03a2480  fctiwz 1, 1
  03a2484  stfd 1, 456(1)
  03a2488  lwz 6, 460(1)
  03a248c  extsw 6, 6
  03a2490  bl 0xfddc0
  03a2494  nop
  03a2498  b 0x3a340c
  03a249c  lwz 3, 472(30)
  03a24a0  cmpwi 3, 0
  03a24a4  bf 2, 0x3a340c
  03a24a8  ori 4, 29, 0
  03a24ac  addic 29, 31, 16
  03a24b0  addic 4, 4, 16
  03a24b4  ori 3, 29, 0
  03a24b8  bl 0x5e8588
  03a24bc  nop
  03a24c0  lfs 2, 88(26)
  03a24c4  fcmpu 0, 1, 2
  03a24c8  cror 6, 0, 2
  03a24cc  bt 6, 0x3a340c
  03a24d0  lwz 3, 456(30)
  03a24d4  cmpwi 3, 0
  03a24d8  bt 2, 0x3a340c
  03a24dc  lwz 3, 468(30)
  03a24e0  cmpwi 3, 0
  03a24e4  bf 2, 0x3a340c
  03a24e8  li 3, 3
  03a24ec  stb 3, 32(31)
  03a24f0  lwz 3, 432(30)
  03a24f4  stw 28, 448(30)
  03a24f8  addic 3, 3, 1
  03a24fc  clrlwi 3, 3, 31
  03a2500  stw 3, 432(30)
  03a2504  lbz 4, 83(31)
  03a2508  cmpwi 4, 3
  03a250c  bt 2, 0x3a2548
  03a2510  lis 3, 114
  03a2514  lfs 1, 4(26)
  03a2518  li 4, 3
  03a251c  li 5, 0
  03a2520  lfs 2, -3056(3)
  03a2524  ori 3, 31, 0
  03a2528  fmuls 1, 2, 1
  03a252c  fctiwz 1, 1
  03a2530  stfd 1, 456(1)
  03a2534  lwz 6, 460(1)
  03a2538  extsw 6, 6
  03a253c  bl 0xfddc0
  03a2540  nop
  03a2544  lwz 3, 432(30)
  03a2548  slwi 3, 3, 2
  03a254c  lis 4, 165
  03a2550  addc 3, 30, 3
  03a2554  addic 27, 4, 7136
  03a2558  clrldi 3, 3, 32
  03a255c  lwz 4, 436(30)
  03a2560  addic 25, 30, 64
  03a2564  slwi 4, 4, 4
  03a2568  ori 5, 29, 0
  03a256c  lwz 3, 384(3)
  03a2570  slwi 3, 3, 2
  03a2574  extsw 6, 3
  03a2578  ori 3, 25, 0
  03a257c  lwzx 6, 27, 6
  03a2580  addc 4, 6, 4
  03a2584  addic 4, 4, 16
  03a2588  clrldi 4, 4, 32
  03a258c  bl 0x5e81f0
  03a2590  nop
  03a2594  lis 24, 132
  03a2598  lis 23, 114
  03a259c  ori 3, 25, 0
  03a25a0  ori 4, 25, 0
  03a25a4  lfs 1, 13104(24)
  03a25a8  lfs 2, -3052(23)
  03a25ac  fmuls 1, 1, 2
  03a25b0  bl 0x5e84c0
  03a25b4  nop
  03a25b8  lwz 3, 432(30)
  03a25bc  lis 4, 132
  03a25c0  lwz 5, 436(30)
  03a25c4  lis 6, 114
  03a25c8  slwi 3, 3, 2
  03a25cc  slwi 5, 5, 4
  03a25d0  addc 3, 30, 3
  03a25d4  li 7, 0
  03a25d8  clrldi 3, 3, 32
  03a25dc  lwz 3, 384(3)
  03a25e0  lfs 1, 13108(4)
  03a25e4  slwi 3, 3, 2
  03a25e8  lfs 2, -3048(6)
  03a25ec  extsw 4, 3
  03a25f0  fmuls 2, 1, 2
  03a25f4  lfs 3, 13104(24)
  03a25f8  ori 3, 29, 0
  03a25fc  lwzx 4, 27, 4
  03a2600  lfs 1, -3052(23)
  03a2604  addc 4, 4, 5
  03a2608  fmuls 1, 3, 1
  03a260c  addic 4, 4, 16
  03a2610  clrldi 4, 4, 32
  03a2614  fneg 2, 2
  03a2618  bl 0x108180
  03a261c  nop
  03a2620  stfs 1, 72(30)
  03a2624  b 0x3a340c
  03a2628  li 3, 4
  03a262c  stb 3, 32(31)
  03a2630  bt 6, 0x3a340c
  03a2634  lis 3, 114
  03a2638  lfs 1, 4(26)
  03a263c  li 4, 0
  03a2640  li 5, 0
  03a2644  lfs 2, -3056(3)
  03a2648  ori 3, 31, 0
  03a264c  fmuls 1, 2, 1
  03a2650  fctiwz 1, 1
  03a2654  stfd 1, 456(1)
  03a2658  lwz 6, 460(1)
  03a265c  extsw 6, 6
  03a2660  bl 0xfddc0
  03a2664  nop
  03a2668  b 0x3a340c
  03a266c  lwz 3, 356(30)
  03a2670  cmpwi 3, 2
  03a2674  bt 2, 0x3a28e4
  03a2678  lfs 1, 16(29)
  03a267c  addic 27, 31, 72
  03a2680  lfs 2, 16(31)
  03a2684  lfs 3, 20(29)
  03a2688  lfs 4, 20(31)
  03a268c  fsubs 1, 1, 2
  03a2690  fsubs 2, 3, 4
  03a2694  bl 0x5e8338
  03a2698  nop
  03a269c  lis 3, 114
  03a26a0  lfs 2, 60(26)
  03a26a4  lis 4, 114
  03a26a8  lfs 3, 64(26)
  03a26ac  addic 5, 30, 444
  03a26b0  lfs 4, -3048(3)
  03a26b4  lfs 5, -3052(4)
  03a26b8  fmuls 2, 4, 2
  03a26bc  ori 3, 27, 0
  03a26c0  fmuls 4, 5, 3
  03a26c4  fmr 3, 2
  03a26c8  bl 0x10a2e0
  03a26cc  nop
  03a26d0  lwz 3, 472(30)
  03a26d4  cmpwi 3, 0
  03a26d8  bf 2, 0x3a2880
  03a26dc  ori 4, 29, 0
  03a26e0  addic 29, 31, 16
  03a26e4  addic 4, 4, 16
  03a26e8  ori 3, 29, 0
  03a26ec  bl 0x5e8588
  03a26f0  nop
  03a26f4  lfs 2, 92(26)
  03a26f8  fcmpu 0, 1, 2
  03a26fc  cror 6, 1, 2
  03a2700  bt 6, 0x3a2880
  03a2704  lwz 3, 468(30)
  03a2708  cmpwi 3, 0
  03a270c  bf 2, 0x3a2880
  03a2710  lwz 3, 432(30)
  03a2714  lis 27, 165
  03a2718  lwz 4, 436(30)
  03a271c  slwi 3, 3, 2
  03a2720  addic 27, 27, 7136
  03a2724  addc 3, 30, 3
  03a2728  clrldi 3, 3, 32
  03a272c  lwz 3, 384(3)
  03a2730  slwi 3, 3, 2
  03a2734  extsw 3, 3
  03a2738  lwzx 3, 27, 3
  03a273c  lwz 3, 0(3)
  03a2740  addic 3, 3, -1
  03a2744  cmpw 4, 3
  03a2748  bf 0, 0x3a2880
  03a274c  li 3, 3
  03a2750  stb 3, 32(31)
  03a2754  lwz 3, 436(30)
  03a2758  stw 28, 448(30)
  03a275c  addic 3, 3, 1
  03a2760  stw 3, 436(30)
  03a2764  lbz 4, 83(31)
  03a2768  cmpwi 4, 3
  03a276c  bt 2, 0x3a27a8
  03a2770  lis 3, 114
  03a2774  lfs 1, 4(26)
  03a2778  li 4, 3
  03a277c  li 5, 0
  03a2780  lfs 2, -3056(3)
  03a2784  ori 3, 31, 0
  03a2788  fmuls 1, 2, 1
  03a278c  fctiwz 1, 1
  03a2790  stfd 1, 456(1)
  03a2794  lwz 6, 460(1)
  03a2798  extsw 6, 6
  03a279c  bl 0xfddc0
  03a27a0  nop
  03a27a4  lwz 3, 436(30)
  03a27a8  slwi 4, 3, 4
  03a27ac  lwz 3, 432(30)
  03a27b0  addic 25, 30, 64
  03a27b4  slwi 3, 3, 2
  03a27b8  ori 5, 29, 0
  03a27bc  addc 3, 30, 3
  03a27c0  clrldi 6, 3, 32
  03a27c4  ori 3, 25, 0
  03a27c8  lwz 6, 384(6)
  03a27cc  slwi 6, 6, 2
  03a27d0  extsw 6, 6
  03a27d4  lwzx 6, 27, 6
  03a27d8  addc 4, 6, 4
  03a27dc  addic 4, 4, 16
  03a27e0  clrldi 4, 4, 32
  03a27e4  bl 0x5e81f0
  03a27e8  nop
  03a27ec  lis 24, 132
  03a27f0  lis 23, 114
  03a27f4  ori 3, 25, 0
  03a27f8  ori 4, 25, 0
  03a27fc  lfs 1, 13104(24)
  03a2800  lfs 2, -3052(23)
  03a2804  fmuls 1, 1, 2
  03a2808  bl 0x5e84c0
  03a280c  nop
  03a2810  lwz 3, 432(30)
  03a2814  lis 4, 132
  03a2818  lwz 5, 436(30)
  03a281c  lis 6, 114
  03a2820  slwi 3, 3, 2
  03a2824  slwi 5, 5, 4
  03a2828  addc 3, 30, 3
  03a282c  li 7, 0
  03a2830  clrldi 3, 3, 32
  03a2834  lwz 3, 384(3)
  03a2838  lfs 1, 13108(4)
  03a283c  slwi 3, 3, 2
  03a2840  lfs 2, -3048(6)
  03a2844  extsw 4, 3
  03a2848  fmuls 2, 1, 2
  03a284c  lfs 3, 13104(24)
  03a2850  ori 3, 29, 0
  03a2854  lwzx 4, 27, 4
  03a2858  lfs 1, -3052(23)
  03a285c  addc 4, 4, 5
  03a2860  fmuls 1, 3, 1
  03a2864  addic 4, 4, 16
  03a2868  clrldi 4, 4, 32
  03a286c  fneg 2, 2
  03a2870  bl 0x108180
  03a2874  nop
  03a2878  stfs 1, 72(30)
  03a287c  b 0x3a340c
  03a2880  addic 3, 30, 448
  03a2884  bl 0x4fff60
  03a2888  nop
  03a288c  cmpwi 3, 0
  03a2890  bt 2, 0x3a340c
  03a2894  li 3, 5
  03a2898  lbz 4, 83(31)
  03a289c  cmpwi 4, 6
  03a28a0  stb 3, 32(31)
  03a28a4  bt 2, 0x3a28dc
  03a28a8  lis 3, 114
  03a28ac  lfs 1, 4(26)
  03a28b0  li 4, 6
  03a28b4  li 5, 0
  03a28b8  lfs 2, -3056(3)
  03a28bc  ori 3, 31, 0
  03a28c0  fmuls 1, 2, 1
  03a28c4  fctiwz 1, 1
  03a28c8  stfd 1, 456(1)
  03a28cc  lwz 6, 460(1)
  03a28d0  extsw 6, 6
  03a28d4  bl 0xfddc0
  03a28d8  nop
  03a28dc  stw 28, 452(30)
  03a28e0  b 0x3a340c
  03a28e4  li 3, 4
  03a28e8  lbz 4, 83(31)
  03a28ec  cmpwi 4, 0
  03a28f0  stb 3, 32(31)
  03a28f4  bt 2, 0x3a340c
  03a28f8  lis 3, 114
  03a28fc  lfs 1, 4(26)
  03a2900  li 4, 0
  03a2904  li 5, 0
  03a2908  lfs 2, -3056(3)
  03a290c  ori 3, 31, 0
  03a2910  fmuls 1, 2, 1
  03a2914  fctiwz 1, 1
  03a2918  stfd 1, 456(1)
  03a291c  lwz 6, 460(1)
  03a2920  extsw 6, 6
  03a2924  bl 0xfddc0
  03a2928  nop
  03a292c  b 0x3a340c
  03a2930  lfs 1, 16(29)
  03a2934  lfs 2, 16(31)
  03a2938  lfs 3, 20(29)
  03a293c  fsubs 1, 1, 2
  03a2940  lfs 4, 20(31)
  03a2944  fsubs 2, 3, 4
  03a2948  bl 0x5e8338
  03a294c  nop
  03a2950  lwz 3, 356(30)
  03a2954  fmr 30, 1
  03a2958  cmpwi 3, 2
  03a295c  bt 2, 0x3a29e4
  03a2960  ori 3, 31, 0
  03a2964  lfs 1, 440(30)
  03a2968  addic 4, 1, 240
  03a296c  bl 0x3a0678
  03a2970  addic 3, 31, 16
  03a2974  fmr 30, 1
  03a2978  addic 4, 29, 16
  03a297c  bl 0x5e8588
  03a2980  nop
  03a2984  lis 3, 132
  03a2988  lfs 2, 13124(3)
  03a298c  fcmpu 0, 1, 2
  03a2990  cror 6, 1, 2
  03a2994  bt 6, 0x3a2a2c
  03a2998  li 3, 8
  03a299c  lbz 4, 83(31)
  03a29a0  cmpwi 4, 2
  03a29a4  stb 3, 32(31)
  03a29a8  bt 2, 0x3a2a2c
  03a29ac  lis 3, 114
  03a29b0  lfs 1, 68(26)
  03a29b4  li 4, 2
  03a29b8  li 5, 0
  03a29bc  lfs 2, -3056(3)
  03a29c0  ori 3, 31, 0
  03a29c4  fmuls 1, 2, 1
  03a29c8  fctiwz 1, 1
  03a29cc  stfd 1, 456(1)
  03a29d0  lwz 6, 460(1)
  03a29d4  extsw 6, 6
  03a29d8  bl 0xfddc0
  03a29dc  nop
  03a29e0  b 0x3a2a2c
  03a29e4  li 3, 4
  03a29e8  lbz 4, 83(31)
  03a29ec  cmpwi 4, 0
  03a29f0  stb 3, 32(31)
  03a29f4  bt 2, 0x3a2a2c
  03a29f8  lis 3, 114
  03a29fc  lfs 1, 4(26)
  03a2a00  li 4, 0
  03a2a04  li 5, 0
  03a2a08  lfs 2, -3056(3)
  03a2a0c  ori 3, 31, 0
  03a2a10  fmuls 1, 2, 1
  03a2a14  fctiwz 1, 1
  03a2a18  stfd 1, 456(1)
  03a2a1c  lwz 6, 460(1)
  03a2a20  extsw 6, 6
  03a2a24  bl 0xfddc0
  03a2a28  nop
  03a2a2c  lis 3, 114
  03a2a30  lfs 2, 96(26)
  03a2a34  lis 29, 114
  03a2a38  lfs 5, 100(26)
  03a2a3c  fmr 1, 30
  03a2a40  addic 5, 30, 444
  03a2a44  lfs 4, -3048(3)
  03a2a48  lfs 6, -3052(29)
  03a2a4c  fmuls 2, 4, 2
  03a2a50  ori 3, 31, 0
  03a2a54  fmuls 3, 4, 5
  03a2a58  fmuls 4, 6, 5
  03a2a5c  bl 0xff2e8
  03a2a60  nop
  03a2a64  lfs 1, 16(31)
  03a2a68  addic 27, 1, 240
  03a2a6c  lfs 2, 20(31)
  03a2a70  addic 25, 31, 16
  03a2a74  stfs 1, 224(1)
  03a2a78  addic 3, 1, 256
  03a2a7c  lfs 1, 24(31)
  03a2a80  ori 4, 27, 0
  03a2a84  stfs 2, 228(1)
  03a2a88  ori 5, 25, 0
  03a2a8c  lfs 2, 28(31)
  03a2a90  stfs 1, 232(1)
  03a2a94  stfs 2, 236(1)
  03a2a98  bl 0x502a64
  03a2a9c  nop
  03a2aa0  lfs 1, 256(1)
  03a2aa4  lfs 2, 260(1)
  03a2aa8  ori 3, 27, 0
  03a2aac  stfs 1, 240(1)
  03a2ab0  ori 4, 27, 0
  03a2ab4  lfs 1, 264(1)
  03a2ab8  stfs 2, 244(1)
  03a2abc  lfs 2, 268(1)
  03a2ac0  stfs 1, 248(1)
  03a2ac4  stfs 2, 252(1)
  03a2ac8  lfs 1, 40(26)
  03a2acc  lfs 2, -3052(29)
  03a2ad0  fmuls 1, 2, 1
  03a2ad4  bl 0x5e7f98
  03a2ad8  nop
  03a2adc  addic 3, 1, 272
  03a2ae0  ori 4, 27, 0
  03a2ae4  ori 5, 25, 0
  03a2ae8  bl 0x502b08
  03a2aec  nop
  03a2af0  lfs 1, 104(26)
  03a2af4  lfs 2, 108(26)
  03a2af8  ori 3, 31, 0
  03a2afc  lfs 3, 28(26)
  03a2b00  addic 4, 1, 224
  03a2b04  lfs 4, 112(26)
  03a2b08  ori 5, 27, 0
  03a2b0c  li 10, 1
  03a2b10  bl 0xffcd0
  03a2b14  nop
  03a2b18  cmpwi 3, 0
  03a2b1c  bt 2, 0x3a2b58
  03a2b20  lwz 5, 432(30)
  03a2b24  lis 3, 165
  03a2b28  slwi 5, 5, 2
  03a2b2c  addic 4, 3, 7136
  03a2b30  extsw 5, 5
  03a2b34  addic 3, 1, 224
  03a2b38  lwzx 5, 4, 5
  03a2b3c  addic 4, 5, 16
  03a2b40  lwz 5, 0(5)
  03a2b44  extsw 5, 5
  03a2b48  bl 0x104e44
  03a2b4c  nop
  03a2b50  cmpwi 3, 0
  03a2b54  bt 2, 0x3a2bc4
  03a2b58  lfs 1, 224(1)
  03a2b5c  lfs 2, 228(1)
  03a2b60  li 3, 4
  03a2b64  stfs 1, 16(31)
  03a2b68  lfs 1, 232(1)
  03a2b6c  stfs 2, 20(31)
  03a2b70  lfs 2, 236(1)
  03a2b74  stfs 1, 24(31)
  03a2b78  lbz 4, 83(31)
  03a2b7c  stfs 2, 28(31)
  03a2b80  cmpwi 4, 0
  03a2b84  stb 3, 32(31)
  03a2b88  bt 2, 0x3a340c
  03a2b8c  lis 3, 114
  03a2b90  lfs 1, 116(26)
  03a2b94  li 4, 0
  03a2b98  li 5, 0
  03a2b9c  lfs 2, -3056(3)
  03a2ba0  ori 3, 31, 0
  03a2ba4  fmuls 1, 2, 1
  03a2ba8  fctiwz 1, 1
  03a2bac  stfd 1, 456(1)
  03a2bb0  lwz 6, 460(1)
  03a2bb4  extsw 6, 6
  03a2bb8  bl 0xfddc0
  03a2bbc  nop
  03a2bc0  b 0x3a340c
  03a2bc4  lfs 1, 224(1)
  03a2bc8  stfs 1, 16(31)
  03a2bcc  lfs 1, 228(1)
  03a2bd0  stfs 1, 20(31)
  03a2bd4  lfs 1, 232(1)
  03a2bd8  stfs 1, 24(31)
  03a2bdc  lfs 1, 236(1)
  03a2be0  stfs 1, 28(31)
  03a2be4  b 0x3a340c
  03a2be8  lfs 1, 16(29)
  03a2bec  lfs 2, 16(31)
  03a2bf0  addic 27, 31, 72
  03a2bf4  lfs 3, 20(29)
  03a2bf8  lfs 4, 20(31)
  03a2bfc  fsubs 1, 1, 2
  03a2c00  fsubs 2, 3, 4
  03a2c04  bl 0x5e8338
  03a2c08  nop
  03a2c0c  lis 3, 114
  03a2c10  lfs 2, 60(26)
  03a2c14  lfs 3, 64(26)
  03a2c18  lis 4, 114
  03a2c1c  addic 5, 30, 444
  03a2c20  lfs 4, -3048(3)
  03a2c24  lfs 5, -3052(4)
  03a2c28  ori 3, 27, 0
  03a2c2c  fmuls 2, 4, 2
  03a2c30  fmuls 4, 5, 3
  03a2c34  fmr 3, 2
  03a2c38  bl 0x10a2e0
  03a2c3c  nop
  03a2c40  lbz 3, 112(31)
  03a2c44  rlwinm 3, 3, 0, 30, 30
  03a2c48  cmpwi 3, 0
  03a2c4c  bt 2, 0x3a2e6c
  03a2c50  ori 27, 29, 0
  03a2c54  addic 29, 31, 16
  03a2c58  addic 27, 27, 16
  03a2c5c  ori 3, 29, 0
  03a2c60  ori 4, 27, 0
  03a2c64  bl 0x5e8588
  03a2c68  nop
  03a2c6c  lis 3, 132
  03a2c70  lfs 2, 13124(3)
  03a2c74  fcmpu 0, 1, 2
  03a2c78  cror 6, 1, 2
  03a2c7c  bt 6, 0x3a2dfc
  03a2c80  lwz 3, 468(30)
  03a2c84  cmpwi 3, 0
  03a2c88  bf 2, 0x3a2dfc
  03a2c8c  lwz 3, 432(30)
  03a2c90  lis 25, 165
  03a2c94  lwz 4, 436(30)
  03a2c98  slwi 3, 3, 2
  03a2c9c  addic 25, 25, 7136
  03a2ca0  addc 3, 30, 3
  03a2ca4  clrldi 3, 3, 32
  03a2ca8  lwz 3, 384(3)
  03a2cac  slwi 3, 3, 2
  03a2cb0  extsw 3, 3
  03a2cb4  lwzx 3, 25, 3
  03a2cb8  lwz 3, 0(3)
  03a2cbc  addic 3, 3, -1
  03a2cc0  cmpw 4, 3
  03a2cc4  bf 0, 0x3a2dfc
  03a2cc8  li 3, 3
  03a2ccc  stb 3, 32(31)
  03a2cd0  lwz 3, 436(30)
  03a2cd4  stw 28, 448(30)
  03a2cd8  addic 3, 3, 1
  03a2cdc  stw 3, 436(30)
  03a2ce0  lbz 4, 83(31)
  03a2ce4  cmpwi 4, 3
  03a2ce8  bt 2, 0x3a2d24
  03a2cec  lis 3, 114
  03a2cf0  lfs 1, 4(26)
  03a2cf4  li 4, 3
  03a2cf8  li 5, 0
  03a2cfc  lfs 2, -3056(3)
  03a2d00  ori 3, 31, 0
  03a2d04  fmuls 1, 2, 1
  03a2d08  fctiwz 1, 1
  03a2d0c  stfd 1, 456(1)
  03a2d10  lwz 6, 460(1)
  03a2d14  extsw 6, 6
  03a2d18  bl 0xfddc0
  03a2d1c  nop
  03a2d20  lwz 3, 436(30)
  03a2d24  slwi 4, 3, 4
  03a2d28  lwz 3, 432(30)
  03a2d2c  addic 27, 30, 64
  03a2d30  slwi 3, 3, 2
  03a2d34  ori 5, 29, 0
  03a2d38  addc 3, 30, 3
  03a2d3c  clrldi 6, 3, 32
  03a2d40  ori 3, 27, 0
  03a2d44  lwz 6, 384(6)
  03a2d48  slwi 6, 6, 2
  03a2d4c  extsw 6, 6
  03a2d50  lwzx 6, 25, 6
  03a2d54  addc 4, 6, 4
  03a2d58  addic 4, 4, 16
  03a2d5c  clrldi 4, 4, 32
  03a2d60  bl 0x5e81f0
  03a2d64  nop
  03a2d68  lis 24, 132
  03a2d6c  lis 23, 114
  03a2d70  ori 3, 27, 0
  03a2d74  ori 4, 27, 0
  03a2d78  lfs 1, 13104(24)
  03a2d7c  lfs 2, -3052(23)
  03a2d80  fmuls 1, 1, 2
  03a2d84  bl 0x5e84c0
  03a2d88  nop
  03a2d8c  lwz 3, 432(30)
  03a2d90  lis 4, 132
  03a2d94  lwz 5, 436(30)
  03a2d98  lis 6, 114
  03a2d9c  slwi 3, 3, 2
  03a2da0  slwi 5, 5, 4
  03a2da4  addc 3, 30, 3
  03a2da8  li 7, 0
  03a2dac  clrldi 3, 3, 32
  03a2db0  lwz 3, 384(3)
  03a2db4  lfs 1, 13108(4)
  03a2db8  slwi 3, 3, 2
  03a2dbc  lfs 2, -3048(6)
  03a2dc0  extsw 4, 3
  03a2dc4  fmuls 2, 1, 2
  03a2dc8  lfs 3, 13104(24)
  03a2dcc  ori 3, 29, 0
  03a2dd0  lwzx 4, 25, 4
  03a2dd4  lfs 1, -3052(23)
  03a2dd8  addc 4, 4, 5
  03a2ddc  fmuls 1, 3, 1
  03a2de0  addic 4, 4, 16
  03a2de4  clrldi 4, 4, 32
  03a2de8  fneg 2, 2
  03a2dec  bl 0x108180
  03a2df0  nop
  03a2df4  stfs 1, 72(30)
  03a2df8  b 0x3a340c
  03a2dfc  ori 3, 29, 0
  03a2e00  ori 4, 27, 0
  03a2e04  bl 0x5e8588
  03a2e08  nop
  03a2e0c  lis 3, 132
  03a2e10  lfs 2, 13124(3)
  03a2e14  fcmpu 0, 1, 2
  03a2e18  cror 6, 0, 2
  03a2e1c  bt 6, 0x3a340c
  03a2e20  li 3, 4
  03a2e24  lbz 4, 83(31)
  03a2e28  cmpwi 4, 0
  03a2e2c  stb 3, 32(31)
  03a2e30  bt 2, 0x3a340c
  03a2e34  lis 3, 114
  03a2e38  lfs 1, 4(26)
  03a2e3c  li 4, 0
  03a2e40  li 5, 0
  03a2e44  lfs 2, -3056(3)
  03a2e48  ori 3, 31, 0
  03a2e4c  fmuls 1, 2, 1
  03a2e50  fctiwz 1, 1
  03a2e54  stfd 1, 456(1)
  03a2e58  lwz 6, 460(1)
  03a2e5c  extsw 6, 6
  03a2e60  bl 0xfddc0
  03a2e64  nop
  03a2e68  b 0x3a340c
  03a2e6c  ori 3, 31, 0
  03a2e70  bl 0xefe40
  03a2e74  nop
  03a2e78  fmr 30, 1
  03a2e7c  addic 5, 1, 320
  03a2e80  ori 3, 31, 0
  03a2e84  li 4, 1
  03a2e88  bl 0xf1114
  03a2e8c  nop
  03a2e90  lfs 1, 120(26)
  03a2e94  fcmpu 0, 30, 1
  03a2e98  bt 0, 0x3a340c
  03a2e9c  lfs 1, 124(26)
  03a2ea0  fcmpu 0, 30, 1
  03a2ea4  bt 1, 0x3a340c
  03a2ea8  lfs 1, 16(31)
  03a2eac  lfs 2, 20(31)
  03a2eb0  stfs 1, 304(1)
  03a2eb4  lfs 1, 28(31)
  03a2eb8  stfs 2, 308(1)
  03a2ebc  stfs 1, 316(1)
  03a2ec0  lfs 3, 28(26)
  03a2ec4  lfs 2, 24(31)
  03a2ec8  lfs 1, 72(31)
  03a2ecc  fadds 2, 2, 3
  03a2ed0  stfs 2, 312(1)
  03a2ed4  bl 0x5e8078
  03a2ed8  nop
  03a2edc  lfs 2, 72(31)
  03a2ee0  stfs 1, 288(1)
  03a2ee4  fmr 1, 2
  03a2ee8  bl 0x5e8128
  03a2eec  nop
  03a2ef0  lis 3, 16256
  03a2ef4  stfs 1, 292(1)
  03a2ef8  addic 29, 1, 400
  03a2efc  lis 5, 1
  03a2f00  addic 7, 1, 288
  03a2f04  stw 3, 296(1)
  03a2f08  ori 4, 31, 0
  03a2f0c  ori 3, 29, 0
  03a2f10  lfs 1, 128(26)
  03a2f14  ori 5, 5, 7
  03a2f18  bl 0x10581c
  03a2f1c  nop
  03a2f20  addic 27, 1, 320
  03a2f24  li 5, 9
  03a2f28  fmr 1, 31
  03a2f2c  ori 3, 27, 0
  03a2f30  ori 6, 31, 0
  03a2f34  ori 7, 29, 0
  03a2f38  bl 0x5e598
  03a2f3c  nop
  03a2f40  addic 25, 1, 304
  03a2f44  ori 4, 27, 0
  03a2f48  ori 3, 25, 0
  03a2f4c  li 5, 0
  03a2f50  ori 6, 31, 0
  03a2f54  ori 7, 29, 0
  03a2f58  bl 0x57820
  03a2f5c  nop
  03a2f60  ori 3, 25, 0
  03a2f64  ori 4, 27, 0
  03a2f68  addic 6, 30, 416
  03a2f6c  li 9, 5
  03a2f70  ori 5, 25, 0
  03a2f74  ori 7, 31, 0
  03a2f78  ori 8, 29, 0
  03a2f7c  bl 0x105d58
  03a2f80  nop
  03a2f84  ori 3, 25, 0
  03a2f88  ori 4, 27, 0
  03a2f8c  bl 0x65468
  03a2f90  nop
  03a2f94  lfs 1, 320(1)
  03a2f98  stfs 1, 416(30)
  03a2f9c  lfs 1, 324(1)
  03a2fa0  stfs 1, 420(30)
  03a2fa4  lfs 1, 328(1)
  03a2fa8  stfs 1, 424(30)
  03a2fac  lfs 1, 332(1)
  03a2fb0  stfs 1, 428(30)
  03a2fb4  b 0x3a340c
  03a2fb8  lwz 4, 472(30)
  03a2fbc  ori 3, 28, 0
  03a2fc0  cmpwi 4, 0
  03a2fc4  bf 2, 0x3a2fdc
  03a2fc8  addic 4, 30, 112
  03a2fcc  ori 3, 31, 0
  03a2fd0  bl 0x10b030
  03a2fd4  nop
  03a2fd8  b 0x3a2fe4
  03a2fdc  lis 4, 16256
  03a2fe0  stw 4, 88(31)
  03a2fe4  rlwinm 3, 3, 0, 25, 25
  03a2fe8  cmpwi 3, 0
  03a2fec  bf 2, 0x3a300c
  03a2ff0  lwz 3, 472(30)
  03a2ff4  cmpwi 3, 0
  03a2ff8  bt 2, 0x3a340c
  03a2ffc  lbz 3, 112(31)
  03a3000  rlwinm 3, 3, 0, 30, 30
  03a3004  cmpwi 3, 0
  03a3008  bt 2, 0x3a340c
  03a300c  lwz 3, 468(30)
  03a3010  cmpwi 3, 0
  03a3014  bf 2, 0x3a3164
  03a3018  li 3, 3
  03a301c  lis 4, 165
  03a3020  addic 4, 4, 7136
  03a3024  stb 3, 32(31)
  03a3028  lwz 3, 432(30)
  03a302c  stw 28, 448(30)
  03a3030  addic 3, 3, 1
  03a3034  lwz 6, 436(30)
  03a3038  rlwinm 5, 3, 2, 29, 29
  03a303c  clrlwi 3, 3, 31
  03a3040  addc 5, 30, 5
  03a3044  slwi 6, 6, 4
  03a3048  clrldi 5, 5, 32
  03a304c  lwz 5, 384(5)
  03a3050  stw 3, 432(30)
  03a3054  slwi 5, 5, 2
  03a3058  extsw 3, 5
  03a305c  lwzx 3, 4, 3
  03a3060  li 4, 0
  03a3064  addc 3, 3, 6
  03a3068  clrldi 5, 3, 32
  03a306c  addic 3, 1, 336
  03a3070  lfs 1, 16(5)
  03a3074  stfs 1, 336(1)
  03a3078  lfs 1, 20(5)
  03a307c  stfs 1, 340(1)
  03a3080  lfs 1, 24(5)
  03a3084  stfs 1, 344(1)
  03a3088  lfs 1, 28(5)
  03a308c  stfs 1, 348(1)
  03a3090  lfs 1, 28(26)
  03a3094  bl 0xffb70
  03a3098  nop
  03a309c  lbz 3, 83(31)
  03a30a0  stfs 1, 344(1)
  03a30a4  cmpwi 3, 3
  03a30a8  bt 2, 0x3a30e0
  03a30ac  lis 3, 114
  03a30b0  lfs 1, 4(26)
  03a30b4  li 4, 3
  03a30b8  li 5, 0
  03a30bc  lfs 2, -3056(3)
  03a30c0  ori 3, 31, 0
  03a30c4  fmuls 1, 2, 1
  03a30c8  fctiwz 1, 1
  03a30cc  stfd 1, 456(1)
  03a30d0  lwz 6, 460(1)
  03a30d4  extsw 6, 6
  03a30d8  bl 0xfddc0
  03a30dc  nop
  03a30e0  addic 29, 30, 64
  03a30e4  addic 27, 31, 16
  03a30e8  addic 25, 1, 336
  03a30ec  ori 3, 29, 0
  03a30f0  ori 5, 27, 0
  03a30f4  ori 4, 25, 0
  03a30f8  bl 0x5e81f0
  03a30fc  nop
  03a3100  lis 24, 132
  03a3104  lis 23, 114
  03a3108  ori 4, 29, 0
  03a310c  ori 3, 29, 0
  03a3110  lfs 1, 13104(24)
  03a3114  lfs 2, -3052(23)
  03a3118  fmuls 1, 1, 2
  03a311c  bl 0x5e84c0
  03a3120  nop
  03a3124  lis 4, 132
  03a3128  lfs 1, 13104(24)
  03a312c  lis 5, 114
  03a3130  lfs 2, -3052(23)
  03a3134  ori 3, 27, 0
  03a3138  fmuls 1, 1, 2
  03a313c  li 7, 0
  03a3140  lfs 3, 13108(4)
  03a3144  lfs 4, -3048(5)
  03a3148  ori 4, 25, 0
  03a314c  fmuls 2, 3, 4
  03a3150  fneg 2, 2
  03a3154  bl 0x108180
  03a3158  nop
  03a315c  stfs 1, 72(30)
  03a3160  b 0x3a340c
  03a3164  li 3, 4
  03a3168  lbz 4, 83(31)
  03a316c  cmpwi 4, 0
  03a3170  stb 3, 32(31)
  03a3174  bt 2, 0x3a340c
  03a3178  lis 3, 114
  03a317c  lfs 1, 4(26)
  03a3180  li 4, 0
  03a3184  li 5, 0
  03a3188  lfs 2, -3056(3)
  03a318c  ori 3, 31, 0
  03a3190  fmuls 1, 2, 1
  03a3194  fctiwz 1, 1
  03a3198  stfd 1, 456(1)
  03a319c  lwz 6, 460(1)
  03a31a0  extsw 6, 6
  03a31a4  bl 0xfddc0
  03a31a8  nop
  03a31ac  b 0x3a340c
  03a31b0  lis 3, 132
  03a31b4  lis 4, 114
  03a31b8  lis 30, 114
  03a31bc  lis 27, 114
  03a31c0  lfs 1, 13140(3)
  03a31c4  lfs 2, -3064(4)
  03a31c8  lis 3, 132
  03a31cc  lfs 3, 200(31)
  03a31d0  fmuls 1, 1, 2
  03a31d4  lfs 4, 192(31)
  03a31d8  lfs 5, 196(31)
  03a31dc  lfs 6, 204(31)
  03a31e0  lfs 7, 13144(3)
  03a31e4  stfs 6, 364(1)
  03a31e8  lis 4, 161
  03a31ec  addic 29, 31, 16
  03a31f0  addic 25, 4, 23856
  03a31f4  addic 28, 31, 64
  03a31f8  fmuls 3, 3, 1
  03a31fc  fmuls 4, 4, 1
  03a3200  fmuls 1, 5, 1
  03a3204  addic 24, 1, 352
  03a3208  ori 3, 31, 0
  03a320c  li 4, 1610
  03a3210  ori 5, 29, 0
  03a3214  ori 6, 28, 0
  03a3218  li 8, 0
  03a321c  fmadds 2, 7, 2, 3
  03a3220  ori 10, 24, 0
  03a3224  stfs 3, 360(1)
  03a3228  stfs 4, 352(1)
  03a322c  stfs 1, 356(1)
  03a3230  lfs 1, -3056(30)
  03a3234  stfs 2, 360(1)
  03a3238  lfs 31, 132(26)
  03a323c  lfs 2, -3048(27)
  03a3240  fmuls 1, 1, 31
  03a3244  std 25, 112(1)
  03a3248  std 25, 120(1)
  03a324c  fctiwz 1, 1
  03a3250  stfd 1, 456(1)
  03a3254  lfs 30, 8(26)
  03a3258  lwz 7, 460(1)
  03a325c  fmuls 1, 2, 30
  03a3260  extsw 7, 7
  03a3264  bl 0x11a560
  03a3268  nop
  03a326c  lfs 1, -3056(30)
  03a3270  ori 3, 31, 0
  03a3274  li 4, 1611
  03a3278  fmuls 2, 1, 31
  03a327c  lfs 1, -3048(27)
  03a3280  ori 5, 29, 0
  03a3284  std 25, 112(1)
  03a3288  ori 6, 28, 0
  03a328c  std 25, 120(1)
  03a3290  fmuls 1, 1, 30
  03a3294  li 8, 0
  03a3298  ori 10, 24, 0
  03a329c  fctiwz 2, 2
  03a32a0  stfd 2, 456(1)
  03a32a4  lwz 7, 460(1)
  03a32a8  extsw 7, 7
  03a32ac  bl 0x11a560
  03a32b0  nop
  03a32b4  lfs 1, 20(26)
  03a32b8  ori 3, 31, 0
  03a32bc  std 25, 112(1)
  03a32c0  li 4, 1612
  03a32c4  ori 5, 29, 0
  03a32c8  std 25, 120(1)
  03a32cc  ori 6, 28, 0
  03a32d0  li 7, 0
  03a32d4  li 8, 0
  03a32d8  ori 10, 25, 0
  03a32dc  bl 0x11a560
  03a32e0  nop
  03a32e4  ori 3, 31, 0
  03a32e8  li 4, 1961
  03a32ec  li 5, 1
  03a32f0  li 6, 1961
  03a32f4  li 7, 2
  03a32f8  li 8, 4
  03a32fc  li 9, 2
  03a3300  bl 0x11aa78
  03a3304  nop
  03a3308  li 3, 64
  03a330c  stb 3, 32(31)
  03a3310  b 0x3a36cc
  03a3314  lhz 5, 52(31)
  03a3318  stw 28, 148(31)
  03a331c  lis 3, 165
  03a3320  ori 5, 5, 65
  03a3324  lis 4, 165
  03a3328  rlwimi 5, 28, 0, 19, 19
  03a332c  addic 3, 3, 14692
  03a3330  addic 4, 4, 17860
  03a3334  lis 8, 151
  03a3338  sth 5, 52(31)
  03a333c  lis 7, 161
  03a3340  stb 28, 88(30)
  03a3344  lhz 5, 178(31)
  03a3348  extsh 6, 5
  03a334c  clrlwi 5, 5, 27
  03a3350  srawi 9, 6, 5
  03a3354  stbx 28, 3, 6
  03a3358  stbx 28, 4, 6
  03a335c  addic 3, 7, -13028
  03a3360  sldi 4, 9, 2
  03a3364  lwz 6, -25488(8)
  03a3368  lhz 7, 178(31)
  03a336c  li 9, 1
  03a3370  addc 3, 4, 3
  03a3374  slwi 4, 6, 8
  03a3378  clrldi 3, 3, 32
  03a337c  extsw 4, 4
  03a3380  extsh 8, 7
  03a3384  lis 6, 165
  03a3388  srawi 8, 8, 5
  03a338c  slw 5, 9, 5
  03a3390  lwzx 10, 3, 4
  03a3394  addic 6, 6, 19920
  03a3398  sldi 8, 8, 2
  03a339c  andc 5, 10, 5
  03a33a0  clrlwi 7, 7, 27
  03a33a4  lis 10, 151
  03a33a8  slw 7, 9, 7
  03a33ac  addic 9, 10, -25376
  03a33b0  lwzx 10, 6, 8
  03a33b4  stwx 5, 3, 4
  03a33b8  andc 3, 10, 7
  03a33bc  lbz 4, 8356(9)
  03a33c0  cmpwi 4, 2
  03a33c4  stwx 3, 6, 8
  03a33c8  bt 2, 0x3a340c
  03a33cc  stb 28, 32(31)
  03a33d0  b 0x3a340c
  03a33d4  ori 3, 31, 0
  03a33d8  lwz 4, 480(30)
  03a33dc  extsw 4, 4
  03a33e0  bl 0x15cc7c
  03a33e4  nop
  03a33e8  cmpwi 3, 0
  03a33ec  bf 2, 0x3a3474
  03a33f0  li 3, 7
  03a33f4  li 4, 4
  03a33f8  ori 5, 31, 0
  03a33fc  bl 0x15d12c
  03a3400  nop
  03a3404  stw 3, 480(30)
  03a3408  b 0x3a3474
  03a340c  lwz 3, 480(30)
  03a3410  cmpwi 3, -1
  03a3414  bt 2, 0x3a3458
  03a3418  sldi 4, 3, 7
  03a341c  sldi 6, 3, 4
  03a3420  lis 5, 150
  03a3424  subc 4, 4, 6
  03a3428  addic 5, 5, 14176
  03a342c  extsw 4, 4
  03a3430  addc 4, 5, 4
  03a3434  lwz 5, 136(4)
  03a3438  cmpw 5, 31
  03a343c  bf 2, 0x3a3458
  03a3440  lbz 4, 116(4)
  03a3444  cmpwi 4, 0
  03a3448  bt 2, 0x3a3458
  03a344c  extsw 3, 3
  03a3450  bl 0x15cdb0
  03a3454  nop
  03a3458  li 3, -1
  03a345c  stw 3, 480(30)
  03a3460  lbz 3, 32(31)
  03a3464  cmpwi 3, 1
  03a3468  cmpwi 1, 3, 64
  03a346c  bt 1, 0x3a3638
  03a3470  b 0x3a36cc
  03a3474  ori 30, 28, 0
  03a3478  lfs 30, 56(26)
  03a347c  li 29, 2
  03a3480  lfs 29, 136(26)
  03a3484  addic 27, 31, 192
  03a3488  lfs 28, 140(26)
  03a348c  lfs 27, 144(26)
  03a3490  lfs 26, 148(26)
  03a3494  lfs 25, 152(26)
  03a3498  lfs 24, 156(26)
  03a349c  lfs 23, 76(26)
  03a34a0  lfs 22, 160(26)
  03a34a4  lfs 21, 28(26)
  03a34a8  stw 28, 368(1)
  03a34ac  fmr 1, 30
  03a34b0  stw 28, 372(1)
  03a34b4  fmr 2, 29
  03a34b8  stw 28, 376(1)
  03a34bc  stw 28, 380(1)
  03a34c0  bl 0xfcbe8
  03a34c4  nop
  03a34c8  lis 25, 114
  03a34cc  fmr 2, 29
  03a34d0  lfs 3, -3052(25)
  03a34d4  fmuls 3, 3, 28
  03a34d8  fmuls 3, 3, 1
  03a34dc  fmr 1, 30
  03a34e0  stfs 3, 368(1)
  03a34e4  bl 0xfcbe8
  03a34e8  nop
  03a34ec  lfs 2, -3052(25)
  03a34f0  fmuls 3, 2, 28
  03a34f4  fmr 2, 26
  03a34f8  fmuls 3, 3, 1
  03a34fc  fmr 1, 27
  03a3500  stfs 3, 372(1)
  03a3504  bl 0xfcbe8
  03a3508  nop
  03a350c  lfs 2, -3052(25)
  03a3510  li 3, 100
  03a3514  fmuls 2, 2, 25
  03a3518  fmuls 1, 2, 1
  03a351c  stfs 1, 376(1)
  03a3520  bl 0xfc620
  03a3524  nop
  03a3528  clrlwi 24, 3, 31
  03a352c  ori 3, 31, 0
  03a3530  addic 5, 1, 384
  03a3534  ori 4, 29, 0
  03a3538  bl 0xf1114
  03a353c  nop
  03a3540  addic 3, 1, 368
  03a3544  ori 5, 27, 0
  03a3548  ori 4, 3, 0
  03a354c  bl 0x5e7d64
  03a3550  nop
  03a3554  li 3, 0
  03a3558  fmr 1, 24
  03a355c  lis 4, 16511
  03a3560  subc 3, 3, 24
  03a3564  fmr 2, 23
  03a3568  lis 5, 16399
  03a356c  cntlzw 3, 3
  03a3570  ori 4, 4, 32639
  03a3574  ori 25, 5, 3967
  03a3578  sldi 3, 3, 58
  03a357c  subc 4, 4, 25
  03a3580  sradi 3, 3, 63
  03a3584  and 3, 3, 4
  03a3588  addc 25, 25, 3
  03a358c  bl 0xfcbe8
  03a3590  nop
  03a3594  cmpwi 24, 0
  03a3598  fmuls 31, 1, 22
  03a359c  bt 2, 0x3a35b4
  03a35a0  li 3, 10
  03a35a4  li 4, 15
  03a35a8  bl 0xfe484
  03a35ac  nop
  03a35b0  b 0x3a35c4
  03a35b4  li 3, 20
  03a35b8  li 4, 30
  03a35bc  bl 0xfe484
  03a35c0  nop
  03a35c4  extsw 3, 3
  03a35c8  lis 6, 39
  03a35cc  fmr 1, 31
  03a35d0  std 3, 456(1)
  03a35d4  lis 3, 114
  03a35d8  addic 4, 1, 368
  03a35dc  ori 5, 25, 0
  03a35e0  ori 6, 6, 10023
  03a35e4  lfs 2, -3056(3)
  03a35e8  lfd 3, 456(1)
  03a35ec  addic 3, 1, 384
  03a35f0  fcfid 3, 3
  03a35f4  frsp 3, 3
  03a35f8  fadds 3, 3, 21
  03a35fc  fmuls 2, 2, 3
  03a3600  fctiwz 2, 2
  03a3604  stfd 2, 456(1)
  03a3608  lwz 8, 460(1)
  03a360c  extsw 8, 8
  03a3610  bl 0x126dd8
  03a3614  nop
  03a3618  addic 29, 29, 1
  03a361c  extsw 29, 29
  03a3620  cmpwi 29, 5
  03a3624  bf 1, 0x3a34a8
  03a3628  addic 30, 30, 1
  03a362c  cmpwi 30, 10
  03a3630  bt 0, 0x3a3478
  03a3634  b 0x3a36cc
  03a3638  bt 6, 0x3a36cc
  03a363c  lis 3, 114
  03a3640  lfs 1, 164(26)
  03a3644  lfs 2, 232(30)
  03a3648  addic 29, 31, 16
  03a364c  lfs 3, -3048(3)
  03a3650  fmadds 1, 3, 1, 2
  03a3654  ori 3, 29, 0
  03a3658  li 4, 0
  03a365c  stfs 1, 232(30)
  03a3660  lfs 30, 24(26)
  03a3664  lfs 2, 24(31)
  03a3668  fsubs 1, 1, 30
  03a366c  fsubs 1, 2, 1
  03a3670  stfs 1, 24(31)
  03a3674  lfs 1, 28(26)
  03a3678  bl 0xffb70
  03a367c  nop
  03a3680  lfs 2, 24(31)
  03a3684  fsubs 2, 2, 30
  03a3688  fcmpu 0, 2, 1
  03a368c  stfs 2, 24(31)
  03a3690  cror 6, 1, 2
  03a3694  bt 6, 0x3a36a0
  03a3698  stfs 1, 24(31)
  03a369c  stw 28, 232(30)
  03a36a0  lfs 2, 168(26)
  03a36a4  fmr 1, 31
  03a36a8  lfs 3, 56(26)
  03a36ac  ori 3, 31, 0
  03a36b0  ori 4, 29, 0
  03a36b4  std 28, 112(1)
  03a36b8  lis 6, 1
  03a36bc  li 9, 0
  03a36c0  li 10, 1
  03a36c4  bl 0x105870
  03a36c8  nop
  03a36cc  ld 0, 656(1)
  03a36d0  mtlr 0
  03a36d4  lfd 21, 552(1)
  03a36d8  lfd 22, 560(1)
  03a36dc  lfd 23, 568(1)
  03a36e0  lfd 24, 576(1)
  03a36e4  lfd 25, 584(1)
  03a36e8  lfd 26, 592(1)
  03a36ec  lfd 27, 600(1)
  03a36f0  lfd 28, 608(1)
  03a36f4  lfd 29, 616(1)
  03a36f8  lfd 30, 624(1)
  03a36fc  lfd 31, 632(1)
  03a3700  ld 23, 480(1)
  03a3704  ld 24, 488(1)
  03a3708  ld 25, 496(1)
  03a370c  ld 26, 504(1)
  03a3710  ld 27, 512(1)
  03a3714  ld 28, 520(1)
  03a3718  ld 29, 528(1)
  03a371c  ld 30, 536(1)
  03a3720  ld 31, 544(1)
  03a3724  addi 1, 1, 640
  03a3728  blr
