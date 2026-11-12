# game/update/moby935.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004c0208:   # 0x4c0208, 0x4ac bytes
  04c0208  stdu 1, -224(1)
  04c020c  mflr 0
  04c0210  std 0, 240(1)
  04c0214  std 31, 216(1)
  04c0218  std 29, 200(1)
  04c021c  ori 31, 3, 0
  04c0220  li 3, 934
  04c0224  std 30, 208(1)
  04c0228  ori 29, 5, 0
  04c022c  std 28, 192(1)
  04c0230  ori 30, 4, 0
  04c0234  bl 0xefa28
  04c0238  nop
  04c023c  ori 28, 3, 0
  04c0240  cmpwi 28, 0
  04c0244  bt 2, 0x4c0690
  04c0248  li 3, 255
  04c024c  li 4, 1
  04c0250  lis 6, 76
  04c0254  li 5, 0
  04c0258  stb 3, 48(28)
  04c025c  addi 6, 6, 496
  04c0260  sth 3, 50(28)
  04c0264  stb 4, 49(28)
  04c0268  ld 3, 56(31)
  04c026c  stb 5, 32(28)
  04c0270  std 3, 56(28)
  04c0274  lfs 1, 0(6)
  04c0278  lfs 2, 44(28)
  04c027c  lwz 3, 120(28)
  04c0280  fmuls 1, 2, 1
  04c0284  li 4, 8
  04c0288  vspltisw 2, -1
  04c028c  lis 5, 114
  04c0290  li 7, -3056
  04c0294  li 8, 56
  04c0298  vslw 2, 2, 2
  04c029c  li 9, 48
  04c02a0  stfs 1, 44(28)
  04c02a4  lfs 1, 0(29)
  04c02a8  stfs 1, 16(28)
  04c02ac  lfs 1, 4(29)
  04c02b0  stfs 1, 20(28)
  04c02b4  lfs 1, 8(29)
  04c02b8  stfs 1, 24(28)
  04c02bc  lfs 1, 12(29)
  04c02c0  stfs 1, 28(28)
  04c02c4  lfs 1, 4(6)
  04c02c8  lfs 2, 0(30)
  04c02cc  fmuls 2, 2, 1
  04c02d0  stfs 2, 0(3)
  04c02d4  lfs 2, 4(30)
  04c02d8  fmuls 2, 2, 1
  04c02dc  stfs 2, 4(3)
  04c02e0  lfs 2, 8(30)
  04c02e4  fmuls 1, 2, 1
  04c02e8  stfs 1, 8(3)
  04c02ec  lfs 1, 12(30)
  04c02f0  stfs 1, 12(3)
  04c02f4  lvlx 3, 4, 6
  04c02f8  lvlx 4, 7, 5
  04c02fc  vspltw 3, 3, 0
  04c0300  vmaddfp 2, 4, 3, 2
  04c0304  vctsxs 2, 2, 0
  04c0308  vspltw 2, 2, 0
  04c030c  stvewx 2, 8, 3
  04c0310  stw 31, 60(3)
  04c0314  stb 9, 35(28)
  04c0318  lwz 3, 0(30)
  04c031c  lwz 4, 4(30)
  04c0320  lfs 1, 0(30)
  04c0324  lfs 2, 4(30)
  04c0328  fabs 5, 1
  04c032c  fabs 3, 2
  04c0330  lhz 5, 52(28)
  04c0334  rlwinm 4, 4, 3, 29, 29
  04c0338  ori 5, 5, 512
  04c033c  lis 31, 115
  04c0340  sth 5, 52(28)
  04c0344  addic 31, 31, 22784
  04c0348  fsubs 1, 5, 3
  04c034c  stfs 1, 120(1)
  04c0350  lfs 4, 12(6)
  04c0354  lfs 2, 16(6)
  04c0358  lwz 5, 120(1)
  04c035c  lfs 1, 120(1)
  04c0360  rlwimi 4, 5, 2, 30, 30
  04c0364  fsub 6, 1, 4
  04c0368  fsub 7, 1, 4
  04c036c  rlwimi 4, 3, 4, 28, 28
  04c0370  ori 3, 31, 0
  04c0374  rlwimi 3, 4, 2, 26, 28
  04c0378  slwi 4, 4, 2
  04c037c  clrldi 3, 3, 32
  04c0380  fsel 6, 6, 5, 3
  04c0384  lfsx 1, 31, 4
  04c0388  fsel 5, 7, 3, 5
  04c038c  lfs 3, 4(3)
  04c0390  fcmpu 0, 6, 4
  04c0394  bt 1, 0x4c03a0
  04c0398  fmr 1, 4
  04c039c  b 0x4c04b8
  04c03a0  fsubs 7, 5, 6
  04c03a4  fadds 5, 5, 6
  04c03a8  addic 3, 1, 16
  04c03ac  li 7, 2
  04c03b0  addic 4, 3, 140
  04c03b4  addic 5, 3, 156
  04c03b8  mtctr 7
  04c03bc  fdivs 5, 7, 5
  04c03c0  fmuls 6, 5, 5
  04c03c4  stfs 5, 168(1)
  04c03c8  stfs 5, 160(1)
  04c03cc  stfs 5, 164(1)
  04c03d0  stfs 5, 156(1)
  04c03d4  lfs 8, 168(1)
  04c03d8  lfs 9, 160(1)
  04c03dc  lfs 10, 164(1)
  04c03e0  fmuls 7, 6, 6
  04c03e4  fmuls 9, 9, 6
  04c03e8  fmuls 8, 8, 7
  04c03ec  fmuls 5, 7, 7
  04c03f0  fmuls 7, 10, 7
  04c03f4  stfs 9, 160(1)
  04c03f8  fmuls 6, 8, 6
  04c03fc  stfs 7, 164(1)
  04c0400  stfs 6, 168(1)
  04c0404  lfs 6, 140(3)
  04c0408  fmuls 6, 6, 5
  04c040c  stfs 6, 156(3)
  04c0410  lfs 6, 4(4)
  04c0414  addic 3, 3, 8
  04c0418  addic 4, 4, 8
  04c041c  fmuls 6, 6, 5
  04c0420  stfs 6, 4(5)
  04c0424  addic 5, 5, 8
  04c0428  bdnz 0x4c0404
  04c042c  ori 3, 1, 0
  04c0430  lis 4, 115
  04c0434  li 8, 4
  04c0438  addic 5, 3, 156
  04c043c  addic 4, 4, 22752
  04c0440  ori 6, 5, 0
  04c0444  mtctr 8
  04c0448  lfs 5, 156(3)
  04c044c  lfs 6, 0(4)
  04c0450  fmuls 5, 5, 6
  04c0454  lfs 6, 4(4)
  04c0458  addic 4, 4, 8
  04c045c  stfs 5, 156(3)
  04c0460  lfs 5, 4(5)
  04c0464  addic 3, 3, 8
  04c0468  fmuls 5, 5, 6
  04c046c  stfs 5, 4(5)
  04c0470  addic 5, 5, 8
  04c0474  bdnz 0x4c0448
  04c0478  fmr 5, 4
  04c047c  ori 3, 1, 0
  04c0480  mtctr 7
  04c0484  lfs 6, 156(3)
  04c0488  fadds 5, 5, 6
  04c048c  addic 3, 3, 16
  04c0490  lfs 6, 4(6)
  04c0494  lfs 7, 8(6)
  04c0498  lfs 8, 12(6)
  04c049c  addic 6, 6, 16
  04c04a0  fadds 5, 5, 6
  04c04a4  fadds 5, 5, 7
  04c04a8  fadds 5, 5, 8
  04c04ac  bdnz 0x4c0484
  04c04b0  fadds 5, 5, 2
  04c04b4  fmadds 1, 5, 1, 3
  04c04b8  stfs 1, 72(28)
  04c04bc  lfs 1, 4(30)
  04c04c0  lfs 3, 0(30)
  04c04c4  fmuls 1, 1, 1
  04c04c8  lwz 3, 8(30)
  04c04cc  rlwinm 3, 3, 3, 29, 29
  04c04d0  fmadds 1, 3, 3, 1
  04c04d4  lfs 3, 8(30)
  04c04d8  fabs 5, 3
  04c04dc  fsqrts 1, 1
  04c04e0  fabs 7, 1
  04c04e4  stfs 1, 112(1)
  04c04e8  fsubs 1, 7, 5
  04c04ec  stfs 1, 116(1)
  04c04f0  lwz 4, 112(1)
  04c04f4  lfs 1, 112(1)
  04c04f8  lwz 5, 116(1)
  04c04fc  fabs 6, 1
  04c0500  lfs 1, 116(1)
  04c0504  rlwimi 3, 5, 2, 30, 30
  04c0508  fsub 3, 1, 4
  04c050c  rlwimi 3, 4, 4, 28, 28
  04c0510  fsub 8, 1, 4
  04c0514  ori 4, 31, 0
  04c0518  rlwimi 4, 3, 2, 26, 28
  04c051c  slwi 3, 3, 2
  04c0520  clrldi 4, 4, 32
  04c0524  lfsx 1, 31, 3
  04c0528  fsel 6, 3, 6, 5
  04c052c  lfs 3, 4(4)
  04c0530  fsel 5, 8, 5, 7
  04c0534  fcmpu 0, 6, 4
  04c0538  bt 1, 0x4c0540
  04c053c  b 0x4c0654
  04c0540  fsubs 7, 5, 6
  04c0544  fadds 5, 5, 6
  04c0548  addic 3, 1, 16
  04c054c  li 7, 2
  04c0550  addic 4, 3, 108
  04c0554  addic 5, 3, 124
  04c0558  mtctr 7
  04c055c  fdivs 5, 7, 5
  04c0560  fmuls 6, 5, 5
  04c0564  stfs 5, 136(1)
  04c0568  stfs 5, 128(1)
  04c056c  stfs 5, 132(1)
  04c0570  stfs 5, 124(1)
  04c0574  lfs 8, 136(1)
  04c0578  lfs 9, 128(1)
  04c057c  lfs 10, 132(1)
  04c0580  fmuls 7, 6, 6
  04c0584  fmuls 9, 9, 6
  04c0588  fmuls 8, 8, 7
  04c058c  fmuls 5, 7, 7
  04c0590  fmuls 7, 10, 7
  04c0594  stfs 9, 128(1)
  04c0598  fmuls 6, 8, 6
  04c059c  stfs 7, 132(1)
  04c05a0  stfs 6, 136(1)
  04c05a4  lfs 6, 108(3)
  04c05a8  fmuls 6, 6, 5
  04c05ac  stfs 6, 124(3)
  04c05b0  lfs 6, 4(4)
  04c05b4  addic 3, 3, 8
  04c05b8  addic 4, 4, 8
  04c05bc  fmuls 6, 6, 5
  04c05c0  stfs 6, 4(5)
  04c05c4  addic 5, 5, 8
  04c05c8  bdnz 0x4c05a4
  04c05cc  ori 3, 1, 0
  04c05d0  lis 4, 115
  04c05d4  li 8, 4
  04c05d8  addic 5, 3, 124
  04c05dc  addic 4, 4, 22752
  04c05e0  ori 6, 5, 0
  04c05e4  mtctr 8
  04c05e8  lfs 5, 124(3)
  04c05ec  lfs 6, 0(4)
  04c05f0  fmuls 5, 5, 6
  04c05f4  lfs 6, 4(4)
  04c05f8  addic 4, 4, 8
  04c05fc  stfs 5, 124(3)
  04c0600  lfs 5, 4(5)
  04c0604  addic 3, 3, 8
  04c0608  fmuls 5, 5, 6
  04c060c  stfs 5, 4(5)
  04c0610  addic 5, 5, 8
  04c0614  bdnz 0x4c05e8
  04c0618  ori 3, 1, 0
  04c061c  mtctr 7
  04c0620  lfs 5, 124(3)
  04c0624  fadds 4, 4, 5
  04c0628  lfs 5, 4(6)
  04c062c  addic 3, 3, 16
  04c0630  lfs 6, 8(6)
  04c0634  lfs 7, 12(6)
  04c0638  addic 6, 6, 16
  04c063c  fadds 4, 4, 5
  04c0640  fadds 4, 4, 6
  04c0644  fadds 4, 4, 7
  04c0648  bdnz 0x4c0620
  04c064c  fadds 4, 4, 2
  04c0650  fmadds 4, 4, 1, 3
  04c0654  fneg 1, 4
  04c0658  ori 3, 28, 0
  04c065c  stfs 1, 68(28)
  04c0660  bl 0xf31a8
  04c0664  nop
  04c0668  lis 3, 76
  04c066c  lis 5, 24576
  04c0670  addi 4, 3, 496
  04c0674  li 6, 128
  04c0678  li 7, -1
  04c067c  ori 3, 28, 0
  04c0680  ori 5, 5, 16639
  04c0684  lfs 1, 20(4)
  04c0688  bl 0x127ea8
  04c068c  nop
  04c0690  ori 3, 28, 0
  04c0694  ld 0, 240(1)
  04c0698  mtlr 0
  04c069c  ld 28, 192(1)
  04c06a0  ld 29, 200(1)
  04c06a4  ld 30, 208(1)
  04c06a8  ld 31, 216(1)
  04c06ac  addi 1, 1, 224
  04c06b0  blr

M935_004c06d8:   # 0x4c06d8, 0x89c bytes
  04c06d8  stdu 1, -256(1)
  04c06dc  mflr 0
  04c06e0  std 0, 272(1)
  04c06e4  stfd 31, 248(1)
  04c06e8  std 31, 240(1)
  04c06ec  ori 31, 3, 0
  04c06f0  lis 3, 143
  04c06f4  lis 6, 143
  04c06f8  lis 7, 114
  04c06fc  lwz 4, 36(31)
  04c0700  lfs 1, 19272(3)
  04c0704  lis 9, 16256
  04c0708  lis 3, 76
  04c070c  li 10, 0
  04c0710  addi 8, 3, 1720
  04c0714  std 30, 232(1)
  04c0718  lfs 2, 36(4)
  04c071c  lwz 30, 120(31)
  04c0720  ori 3, 31, 0
  04c0724  fmuls 1, 2, 1
  04c0728  lis 4, 51
  04c072c  li 5, 0
  04c0730  stfs 1, 44(31)
  04c0734  lfs 1, 19320(6)
  04c0738  lfs 2, -3052(7)
  04c073c  fmuls 1, 1, 2
  04c0740  stfs 1, 244(30)
  04c0744  stw 9, 88(31)
  04c0748  lfs 31, 0(8)
  04c074c  std 29, 224(1)
  04c0750  std 28, 216(1)
  04c0754  stw 10, 116(1)
  04c0758  bl 0x10675c
  04c075c  nop
  04c0760  ori 29, 3, 0
  04c0764  ori 3, 31, 0
  04c0768  ori 4, 29, 0
  04c076c  addic 5, 30, 32
  04c0770  li 6, 0
  04c0774  addic 7, 1, 112
  04c0778  li 9, 0
  04c077c  addic 8, 1, 116
  04c0780  li 10, 4
  04c0784  bl 0x106840
  04c0788  nop
  04c078c  ori 28, 3, 0
  04c0790  lwz 3, 112(1)
  04c0794  cmpwi 3, 1
  04c0798  bt 2, 0x4c0dd4
  04c079c  lbz 3, 32(31)
  04c07a0  cmpwi 3, 9
  04c07a4  bt 2, 0x4c0dd4
  04c07a8  lfs 1, 32(30)
  04c07ac  lfs 2, 116(1)
  04c07b0  li 3, 71
  04c07b4  lwz 4, 32(29)
  04c07b8  li 5, 3
  04c07bc  fsubs 1, 1, 2
  04c07c0  subc 5, 5, 28
  04c07c4  fcmpu 0, 1, 31
  04c07c8  stfs 1, 32(30)
  04c07cc  lhz 4, 166(4)
  04c07d0  subc 3, 3, 4
  04c07d4  cntlzw 3, 3
  04c07d8  sldi 3, 3, 58
  04c07dc  sradi 3, 3, 63
  04c07e0  and 3, 3, 5
  04c07e4  addc 28, 28, 3
  04c07e8  bt 1, 0x4c07f0
  04c07ec  li 28, 1
  04c07f0  lis 3, 76
  04c07f4  addi 3, 3, 1720
  04c07f8  lfs 1, 4(3)
  04c07fc  bl 0x502758
  04c0800  nop
  04c0804  lis 4, 16128
  04c0808  lis 5, 143
  04c080c  lis 6, 114
  04c0810  cmpwi 28, 2
  04c0814  stw 4, 152(30)
  04c0818  li 4, 0
  04c081c  lfs 1, 19276(5)
  04c0820  lfs 2, -3048(6)
  04c0824  stw 3, 144(30)
  04c0828  fmuls 1, 1, 2
  04c082c  li 3, 9
  04c0830  stw 4, 132(30)
  04c0834  stb 4, 173(30)
  04c0838  stw 3, 148(30)
  04c083c  stfs 1, 128(30)
  04c0840  bt 1, 0x4c0858
  04c0844  cmpwi 28, -1
  04c0848  cmpwi 1, 28, 0
  04c084c  bf 1, 0x4c0dc4
  04c0850  bf 5, 0x4c0dc4
  04c0854  b 0x4c0afc
  04c0858  cmpwi 28, 10
  04c085c  cmpwi 1, 28, 8
  04c0860  bt 1, 0x4c0dc4
  04c0864  bf 5, 0x4c0874
  04c0868  li 3, 250
  04c086c  stb 3, 103(30)
  04c0870  b 0x4c0dc4
  04c0874  lis 3, 143
  04c0878  lis 4, 114
  04c087c  lis 5, 143
  04c0880  lfs 1, 19284(3)
  04c0884  lfs 2, -3052(4)
  04c0888  lis 3, 16624
  04c088c  lis 4, 16688
  04c0890  fmuls 1, 1, 2
  04c0894  stfs 1, 136(30)
  04c0898  lfs 1, 19280(5)
  04c089c  stw 3, 192(30)
  04c08a0  fmuls 1, 1, 2
  04c08a4  stw 4, 196(30)
  04c08a8  stfs 1, 140(30)
  04c08ac  lwz 3, 32(29)
  04c08b0  lfs 1, 16(31)
  04c08b4  lfs 2, 20(31)
  04c08b8  lfs 3, 16(3)
  04c08bc  lfs 4, 20(3)
  04c08c0  fsubs 1, 1, 3
  04c08c4  fsubs 2, 2, 4
  04c08c8  lis 3, 115
  04c08cc  addic 3, 3, 22784
  04c08d0  fabs 3, 1
  04c08d4  fabs 4, 2
  04c08d8  stfs 1, 140(1)
  04c08dc  stfs 2, 144(1)
  04c08e0  fsubs 1, 3, 4
  04c08e4  stfs 1, 148(1)
  04c08e8  lwz 4, 140(1)
  04c08ec  lfs 1, 140(1)
  04c08f0  lwz 5, 144(1)
  04c08f4  lfs 2, 144(1)
  04c08f8  fabs 1, 1
  04c08fc  lwz 6, 148(1)
  04c0900  rlwinm 5, 5, 3, 29, 29
  04c0904  lfs 5, 148(1)
  04c0908  fabs 2, 2
  04c090c  rlwimi 5, 6, 2, 30, 30
  04c0910  fsub 6, 5, 31
  04c0914  fsub 5, 5, 31
  04c0918  rlwimi 5, 4, 4, 28, 28
  04c091c  ori 4, 3, 0
  04c0920  rlwimi 4, 5, 2, 26, 28
  04c0924  slwi 5, 5, 2
  04c0928  clrldi 4, 4, 32
  04c092c  fsel 4, 6, 1, 4
  04c0930  lfsx 1, 3, 5
  04c0934  fsel 3, 5, 2, 3
  04c0938  lfs 2, 4(4)
  04c093c  fcmpu 0, 4, 31
  04c0940  bt 1, 0x4c0948
  04c0944  b 0x4c0a68
  04c0948  fsubs 5, 3, 4
  04c094c  fadds 3, 3, 4
  04c0950  addic 3, 1, 16
  04c0954  li 6, 2
  04c0958  addic 5, 3, 184
  04c095c  addic 4, 3, 168
  04c0960  mtctr 6
  04c0964  fdivs 3, 5, 3
  04c0968  fmuls 4, 3, 3
  04c096c  stfs 3, 196(1)
  04c0970  stfs 3, 188(1)
  04c0974  stfs 3, 192(1)
  04c0978  stfs 3, 184(1)
  04c097c  lfs 6, 196(1)
  04c0980  lfs 7, 188(1)
  04c0984  lfs 8, 192(1)
  04c0988  fmuls 5, 4, 4
  04c098c  fmuls 7, 7, 4
  04c0990  fmuls 6, 6, 5
  04c0994  fmuls 3, 5, 5
  04c0998  fmuls 5, 8, 5
  04c099c  stfs 7, 188(1)
  04c09a0  fmuls 4, 6, 4
  04c09a4  stfs 5, 192(1)
  04c09a8  stfs 4, 196(1)
  04c09ac  lfs 4, 168(3)
  04c09b0  fmuls 4, 4, 3
  04c09b4  stfs 4, 184(3)
  04c09b8  lfs 4, 4(4)
  04c09bc  addic 4, 4, 8
  04c09c0  fmuls 4, 4, 3
  04c09c4  addic 3, 3, 8
  04c09c8  stfs 4, 4(5)
  04c09cc  addic 5, 5, 8
  04c09d0  bdnz 0x4c09ac
  04c09d4  li 5, 4
  04c09d8  ori 3, 1, 0
  04c09dc  mtctr 5
  04c09e0  lis 4, 115
  04c09e4  addic 5, 3, 184
  04c09e8  addic 4, 4, 22752
  04c09ec  ori 7, 5, 0
  04c09f0  lfs 3, 184(3)
  04c09f4  lfs 4, 0(4)
  04c09f8  fmuls 3, 3, 4
  04c09fc  lfs 4, 4(4)
  04c0a00  addic 4, 4, 8
  04c0a04  stfs 3, 184(3)
  04c0a08  lfs 3, 4(5)
  04c0a0c  addic 3, 3, 8
  04c0a10  fmuls 3, 3, 4
  04c0a14  stfs 3, 4(5)
  04c0a18  addic 5, 5, 8
  04c0a1c  bdnz 0x4c09f0
  04c0a20  ori 3, 1, 0
  04c0a24  mtctr 6
  04c0a28  lfs 3, 184(3)
  04c0a2c  lfs 4, 4(7)
  04c0a30  fadds 3, 31, 3
  04c0a34  lfs 5, 8(7)
  04c0a38  addic 3, 3, 16
  04c0a3c  lfs 31, 12(7)
  04c0a40  addic 7, 7, 16
  04c0a44  fadds 3, 3, 4
  04c0a48  fadds 3, 3, 5
  04c0a4c  fadds 31, 3, 31
  04c0a50  bdnz 0x4c0a28
  04c0a54  lis 3, 76
  04c0a58  addi 3, 3, 1720
  04c0a5c  lfs 3, 8(3)
  04c0a60  fadds 31, 31, 3
  04c0a64  fmadds 31, 31, 1, 2
  04c0a68  stfs 31, 120(1)
  04c0a6c  lfs 1, 16(29)
  04c0a70  addic 5, 1, 120
  04c0a74  lfs 2, 24(29)
  04c0a78  addic 6, 30, 136
  04c0a7c  stfs 1, 48(1)
  04c0a80  addic 7, 30, 140
  04c0a84  stfs 2, 56(1)
  04c0a88  lfs 1, 20(29)
  04c0a8c  lfs 2, 28(29)
  04c0a90  stfs 1, 52(1)
  04c0a94  stfs 2, 60(1)
  04c0a98  ld 3, 48(1)
  04c0a9c  ld 4, 56(1)
  04c0aa0  bl 0x107de8
  04c0aa4  nop
  04c0aa8  addic 4, 30, 112
  04c0aac  lfs 1, 120(1)
  04c0ab0  ori 3, 31, 0
  04c0ab4  li 6, 5
  04c0ab8  li 7, 1
  04c0abc  li 8, 0
  04c0ac0  bl 0x10ad80
  04c0ac4  nop
  04c0ac8  lbz 3, 32(31)
  04c0acc  li 4, 10
  04c0ad0  li 5, 8
  04c0ad4  subc 3, 3, 4
  04c0ad8  li 4, 15
  04c0adc  sradi 3, 3, 63
  04c0ae0  subc 5, 5, 4
  04c0ae4  li 6, 120
  04c0ae8  and 3, 3, 5
  04c0aec  addc 3, 4, 3
  04c0af0  stb 3, 32(31)
  04c0af4  stb 6, 103(30)
  04c0af8  b 0x4c0dc4
  04c0afc  lis 3, 143
  04c0b00  lis 4, 114
  04c0b04  lis 5, 143
  04c0b08  lis 6, 114
  04c0b0c  lis 7, 143
  04c0b10  lfs 1, 19276(3)
  04c0b14  lfs 2, -3048(4)
  04c0b18  li 3, 0
  04c0b1c  lhz 4, 52(31)
  04c0b20  fmuls 1, 1, 2
  04c0b24  rlwimi 4, 3, 0, 19, 19
  04c0b28  lis 3, 16624
  04c0b2c  sth 4, 52(31)
  04c0b30  lis 4, 16688
  04c0b34  stfs 1, 128(30)
  04c0b38  lfs 1, 19292(5)
  04c0b3c  lfs 2, -3052(6)
  04c0b40  fmuls 1, 1, 2
  04c0b44  stfs 1, 136(30)
  04c0b48  lfs 1, 19288(7)
  04c0b4c  stw 3, 192(30)
  04c0b50  fmuls 1, 1, 2
  04c0b54  stw 4, 196(30)
  04c0b58  stfs 1, 140(30)
  04c0b5c  lwz 3, 32(29)
  04c0b60  lfs 1, 16(31)
  04c0b64  lfs 2, 20(31)
  04c0b68  lfs 3, 16(3)
  04c0b6c  lfs 4, 20(3)
  04c0b70  fsubs 1, 1, 3
  04c0b74  fsubs 2, 2, 4
  04c0b78  lis 3, 115
  04c0b7c  addic 3, 3, 22784
  04c0b80  fabs 3, 1
  04c0b84  fabs 4, 2
  04c0b88  stfs 1, 128(1)
  04c0b8c  stfs 2, 132(1)
  04c0b90  fsubs 1, 3, 4
  04c0b94  stfs 1, 136(1)
  04c0b98  lwz 4, 128(1)
  04c0b9c  lfs 1, 128(1)
  04c0ba0  lwz 5, 132(1)
  04c0ba4  lfs 2, 132(1)
  04c0ba8  fabs 1, 1
  04c0bac  lwz 6, 136(1)
  04c0bb0  rlwinm 5, 5, 3, 29, 29
  04c0bb4  lfs 5, 136(1)
  04c0bb8  fabs 2, 2
  04c0bbc  rlwimi 5, 6, 2, 30, 30
  04c0bc0  fsub 6, 5, 31
  04c0bc4  fsub 5, 5, 31
  04c0bc8  rlwimi 5, 4, 4, 28, 28
  04c0bcc  ori 4, 3, 0
  04c0bd0  rlwimi 4, 5, 2, 26, 28
  04c0bd4  slwi 5, 5, 2
  04c0bd8  clrldi 4, 4, 32
  04c0bdc  fsel 4, 6, 1, 4
  04c0be0  lfsx 1, 3, 5
  04c0be4  fsel 3, 5, 2, 3
  04c0be8  lfs 2, 4(4)
  04c0bec  fcmpu 0, 4, 31
  04c0bf0  bt 1, 0x4c0bf8
  04c0bf4  b 0x4c0d18
  04c0bf8  fsubs 5, 3, 4
  04c0bfc  fadds 3, 3, 4
  04c0c00  addic 3, 1, 16
  04c0c04  li 6, 2
  04c0c08  addic 5, 3, 152
  04c0c0c  addic 4, 3, 136
  04c0c10  mtctr 6
  04c0c14  fdivs 3, 5, 3
  04c0c18  fmuls 4, 3, 3
  04c0c1c  stfs 3, 164(1)
  04c0c20  stfs 3, 156(1)
  04c0c24  stfs 3, 160(1)
  04c0c28  stfs 3, 152(1)
  04c0c2c  lfs 6, 164(1)
  04c0c30  lfs 7, 156(1)
  04c0c34  lfs 8, 160(1)
  04c0c38  fmuls 5, 4, 4
  04c0c3c  fmuls 7, 7, 4
  04c0c40  fmuls 6, 6, 5
  04c0c44  fmuls 3, 5, 5
  04c0c48  fmuls 5, 8, 5
  04c0c4c  stfs 7, 156(1)
  04c0c50  fmuls 4, 6, 4
  04c0c54  stfs 5, 160(1)
  04c0c58  stfs 4, 164(1)
  04c0c5c  lfs 4, 136(3)
  04c0c60  fmuls 4, 4, 3
  04c0c64  stfs 4, 152(3)
  04c0c68  lfs 4, 4(4)
  04c0c6c  addic 4, 4, 8
  04c0c70  fmuls 4, 4, 3
  04c0c74  addic 3, 3, 8
  04c0c78  stfs 4, 4(5)
  04c0c7c  addic 5, 5, 8
  04c0c80  bdnz 0x4c0c5c
  04c0c84  li 5, 4
  04c0c88  ori 3, 1, 0
  04c0c8c  mtctr 5
  04c0c90  lis 4, 115
  04c0c94  addic 5, 3, 152
  04c0c98  addic 4, 4, 22752
  04c0c9c  ori 7, 5, 0
  04c0ca0  lfs 3, 152(3)
  04c0ca4  lfs 4, 0(4)
  04c0ca8  fmuls 3, 3, 4
  04c0cac  lfs 4, 4(4)
  04c0cb0  addic 4, 4, 8
  04c0cb4  stfs 3, 152(3)
  04c0cb8  lfs 3, 4(5)
  04c0cbc  addic 3, 3, 8
  04c0cc0  fmuls 3, 3, 4
  04c0cc4  stfs 3, 4(5)
  04c0cc8  addic 5, 5, 8
  04c0ccc  bdnz 0x4c0ca0
  04c0cd0  ori 3, 1, 0
  04c0cd4  mtctr 6
  04c0cd8  lfs 3, 152(3)
  04c0cdc  lfs 4, 4(7)
  04c0ce0  fadds 3, 31, 3
  04c0ce4  lfs 5, 8(7)
  04c0ce8  addic 3, 3, 16
  04c0cec  lfs 31, 12(7)
  04c0cf0  addic 7, 7, 16
  04c0cf4  fadds 3, 3, 4
  04c0cf8  fadds 3, 3, 5
  04c0cfc  fadds 31, 3, 31
  04c0d00  bdnz 0x4c0cd8
  04c0d04  lis 3, 76
  04c0d08  addi 3, 3, 1720
  04c0d0c  lfs 3, 8(3)
  04c0d10  fadds 31, 31, 3
  04c0d14  fmadds 31, 31, 1, 2
  04c0d18  stfs 31, 124(1)
  04c0d1c  lfs 1, 16(29)
  04c0d20  addic 5, 1, 124
  04c0d24  lfs 2, 24(29)
  04c0d28  addic 6, 30, 136
  04c0d2c  stfs 1, 48(1)
  04c0d30  addic 7, 30, 140
  04c0d34  stfs 2, 56(1)
  04c0d38  lfs 1, 20(29)
  04c0d3c  lfs 2, 28(29)
  04c0d40  stfs 1, 52(1)
  04c0d44  stfs 2, 60(1)
  04c0d48  ld 3, 48(1)
  04c0d4c  ld 4, 56(1)
  04c0d50  bl 0x107de8
  04c0d54  nop
  04c0d58  addic 4, 30, 112
  04c0d5c  lfs 1, 124(1)
  04c0d60  ori 3, 31, 0
  04c0d64  li 6, 5
  04c0d68  li 7, 1
  04c0d6c  li 8, 0
  04c0d70  bl 0x10ad80
  04c0d74  nop
  04c0d78  lbz 3, 32(31)
  04c0d7c  li 4, 10
  04c0d80  li 5, 9
  04c0d84  subc 3, 3, 4
  04c0d88  li 4, 16
  04c0d8c  sradi 6, 3, 63
  04c0d90  subc 5, 5, 4
  04c0d94  li 8, 240
  04c0d98  and 5, 6, 5
  04c0d9c  ori 3, 31, 0
  04c0da0  addc 7, 4, 5
  04c0da4  li 4, 2
  04c0da8  li 5, 3
  04c0dac  li 6, 0
  04c0db0  stb 7, 32(31)
  04c0db4  li 7, -1
  04c0db8  stb 8, 103(30)
  04c0dbc  bl 0xfcd60
  04c0dc0  nop
  04c0dc4  addic 4, 30, 96
  04c0dc8  ori 3, 31, 0
  04c0dcc  bl 0x10c808
  04c0dd0  nop
  04c0dd4  li 5, 255
  04c0dd8  ori 3, 31, 0
  04c0ddc  addic 4, 30, 96
  04c0de0  stb 5, 164(31)
  04c0de4  bl 0x10c9a0
  04c0de8  nop
  04c0dec  lwz 3, 56(30)
  04c0df0  cmpwi 3, 0
  04c0df4  bt 2, 0x4c0e30
  04c0df8  lis 3, 76
  04c0dfc  addi 3, 3, 1720
  04c0e00  lfs 1, 12(3)
  04c0e04  lfs 2, 16(3)
  04c0e08  bl 0xfcbe8
  04c0e0c  nop
  04c0e10  lis 3, 114
  04c0e14  lfs 2, -3056(3)
  04c0e18  fmuls 1, 1, 2
  04c0e1c  bl 0x502758
  04c0e20  nop
  04c0e24  stw 3, 404(30)
  04c0e28  li 3, 0
  04c0e2c  stw 3, 56(30)
  04c0e30  addic 3, 30, 404
  04c0e34  bl 0x4fff60
  04c0e38  nop
  04c0e3c  lwz 4, 404(30)
  04c0e40  lwz 3, 384(30)
  04c0e44  cmpwi 4, 0
  04c0e48  bt 2, 0x4c0e64
  04c0e4c  lis 4, 76
  04c0e50  lfs 1, 396(30)
  04c0e54  addi 4, 4, 1720
  04c0e58  lfs 2, 20(4)
  04c0e5c  fadds 1, 1, 2
  04c0e60  b 0x4c0e68
  04c0e64  lfs 1, 396(30)
  04c0e68  lis 29, 165
  04c0e6c  slwi 3, 3, 2
  04c0e70  stfs 1, 408(30)
  04c0e74  addic 29, 29, 7136
  04c0e78  extsw 5, 3
  04c0e7c  ori 3, 31, 0
  04c0e80  addic 4, 30, 288
  04c0e84  li 6, 0
  04c0e88  li 7, 0
  04c0e8c  lwzx 5, 29, 5
  04c0e90  addic 8, 5, 16
  04c0e94  lwz 9, 0(5)
  04c0e98  extsw 9, 9
  04c0e9c  bl 0x111ba0
  04c0ea0  nop
  04c0ea4  cmpwi 3, 2
  04c0ea8  bt 2, 0x4c0f34
  04c0eac  lbz 3, 32(31)
  04c0eb0  cmpwi 3, 1
  04c0eb4  bf 2, 0x4c0ed8
  04c0eb8  lwz 3, 388(30)
  04c0ebc  slwi 3, 3, 2
  04c0ec0  extsw 3, 3
  04c0ec4  lwzx 3, 29, 3
  04c0ec8  lfs 1, 32(3)
  04c0ecc  lfs 2, 36(3)
  04c0ed0  lfs 3, 40(3)
  04c0ed4  b 0x4c0ee4
  04c0ed8  lfs 1, 16(31)
  04c0edc  lfs 2, 20(31)
  04c0ee0  lfs 3, 24(31)
  04c0ee4  lfs 4, 292(30)
  04c0ee8  lfs 5, 288(30)
  04c0eec  fsubs 2, 2, 4
  04c0ef0  fsubs 1, 1, 5
  04c0ef4  fmuls 2, 2, 2
  04c0ef8  fmadds 1, 1, 1, 2
  04c0efc  lfs 2, 408(30)
  04c0f00  fsqrts 1, 1
  04c0f04  fcmpu 0, 1, 2
  04c0f08  bt 1, 0x4c0f2c
  04c0f0c  lfs 1, 296(30)
  04c0f10  lis 3, 76
  04c0f14  fsubs 1, 3, 1
  04c0f18  addi 3, 3, 1720
  04c0f1c  lfs 2, 24(3)
  04c0f20  fcmpu 0, 1, 2
  04c0f24  cror 6, 0, 2
  04c0f28  bt 6, 0x4c0f34
  04c0f2c  li 3, 2
  04c0f30  stw 3, 356(30)
  04c0f34  lwz 3, 352(30)
  04c0f38  cmpwi 3, 0
  04c0f3c  bf 2, 0x4c0f50
  04c0f40  lis 3, 151
  04c0f44  addic 3, 3, -25376
  04c0f48  lwz 3, 8320(3)
  04c0f4c  stw 3, 352(30)
  04c0f50  ld 0, 272(1)
  04c0f54  mtlr 0
  04c0f58  lfd 31, 248(1)
  04c0f5c  ld 28, 216(1)
  04c0f60  ld 29, 224(1)
  04c0f64  ld 30, 232(1)
  04c0f68  ld 31, 240(1)
  04c0f6c  addi 1, 1, 256
  04c0f70  blr

UpdateMoby_935:   # 0x4c0fd8, 0x19e8 bytes
  04c0fd8  stdu 1, -528(1)
  04c0fdc  mflr 0
  04c0fe0  std 0, 544(1)
  04c0fe4  stfd 28, 496(1)
  04c0fe8  stfd 29, 504(1)
  04c0fec  stfd 30, 512(1)
  04c0ff0  stfd 31, 520(1)
  04c0ff4  std 31, 488(1)
  04c0ff8  lis 4, 76
  04c0ffc  std 29, 472(1)
  04c1000  ori 31, 3, 0
  04c1004  addi 29, 4, 3956
  04c1008  std 30, 480(1)
  04c100c  lis 5, 16256
  04c1010  lwz 30, 120(31)
  04c1014  lfs 30, 0(29)
  04c1018  std 28, 464(1)
  04c101c  stw 5, 88(31)
  04c1020  bl 0x4c06d8
  04c1024  lfs 1, 4(29)
  04c1028  ori 3, 31, 0
  04c102c  lwz 29, 352(30)
  04c1030  addic 5, 30, 448
  04c1034  li 4, 0
  04c1038  bl 0x119a18
  04c103c  nop
  04c1040  lbz 3, 32(31)
  04c1044  cmpwi 3, 8
  04c1048  bt 1, 0x4c109c
  04c104c  cmpwi 3, 2
  04c1050  bt 1, 0x4c1074
  04c1054  cmpwi 3, 0
  04c1058  bt 1, 0x4c1068
  04c105c  cmpwi 3, -1
  04c1060  bf 1, 0x4c2990
  04c1064  b 0x4c10e0
  04c1068  cmpwi 3, 1
  04c106c  bf 1, 0x4c1268
  04c1070  b 0x4c14e0
  04c1074  cmpwi 3, 4
  04c1078  bt 1, 0x4c1088
  04c107c  cmpwi 3, 3
  04c1080  bf 1, 0x4c1568
  04c1084  b 0x4c17b4
  04c1088  cmpwi 3, 5
  04c108c  bf 1, 0x4c1a70
  04c1090  cmpwi 3, 7
  04c1094  bf 1, 0x4c13fc
  04c1098  b 0x4c1d40
  04c109c  cmpwi 3, 16
  04c10a0  bt 2, 0x4c2900
  04c10a4  cmpwi 3, 15
  04c10a8  bt 2, 0x4c27d4
  04c10ac  cmpwi 3, 14
  04c10b0  bt 2, 0x4c24e4
  04c10b4  cmpwi 3, 13
  04c10b8  bt 2, 0x4c227c
  04c10bc  cmpwi 3, 12
  04c10c0  bt 2, 0x4c21c0
  04c10c4  cmpwi 3, 11
  04c10c8  bt 2, 0x4c20c0
  04c10cc  cmpwi 3, 10
  04c10d0  bt 2, 0x4c1e40
  04c10d4  cmpwi 3, 9
  04c10d8  bt 2, 0x4c1dec
  04c10dc  b 0x4c2990
  04c10e0  lis 4, 16384
  04c10e4  li 5, 2
  04c10e8  li 6, 1
  04c10ec  addic 3, 30, 208
  04c10f0  stw 4, 32(30)
  04c10f4  sth 5, 36(30)
  04c10f8  stb 6, 40(30)
  04c10fc  stb 6, 41(30)
  04c1100  bl 0x100f8c
  04c1104  nop
  04c1108  lis 3, 76
  04c110c  lis 29, 16128
  04c1110  addi 3, 3, 3956
  04c1114  stw 29, 220(30)
  04c1118  stw 29, 216(30)
  04c111c  lfs 1, 8(3)
  04c1120  bl 0x502758
  04c1124  nop
  04c1128  lwz 4, 264(30)
  04c112c  stw 3, 208(30)
  04c1130  ori 3, 4, 16
  04c1134  stw 29, 212(30)
  04c1138  stw 3, 264(30)
  04c113c  bl 0x5c8318
  04c1140  nop
  04c1144  clrlwi 4, 3, 31
  04c1148  lbz 3, 83(31)
  04c114c  cmpwi 4, 0
  04c1150  bt 2, 0x4c1168
  04c1154  lis 4, 0
  04c1158  lhz 5, 52(31)
  04c115c  ori 4, 4, 32768
  04c1160  or 4, 5, 4
  04c1164  sth 4, 52(31)
  04c1168  lwz 4, 420(30)
  04c116c  cmpwi 4, -1
  04c1170  bf 1, 0x4c119c
  04c1174  lis 3, 76
  04c1178  li 4, 10
  04c117c  addi 3, 3, 3956
  04c1180  stb 4, 32(31)
  04c1184  lfs 1, 12(3)
  04c1188  lfs 2, 16(3)
  04c118c  bl 0xfcbe8
  04c1190  nop
  04c1194  stfs 1, 424(30)
  04c1198  b 0x4c2990
  04c119c  lwz 4, 392(30)
  04c11a0  cmpwi 4, 0
  04c11a4  bt 2, 0x4c121c
  04c11a8  li 3, 1
  04c11ac  lis 4, 165
  04c11b0  addic 4, 4, 7136
  04c11b4  stb 3, 32(31)
  04c11b8  lwz 3, 388(30)
  04c11bc  slwi 5, 3, 2
  04c11c0  slwi 3, 3, 2
  04c11c4  extsw 5, 5
  04c11c8  extsw 3, 3
  04c11cc  lwzx 5, 4, 5
  04c11d0  lfs 1, 16(5)
  04c11d4  stfs 1, 16(31)
  04c11d8  lfs 1, 20(5)
  04c11dc  stfs 1, 20(31)
  04c11e0  lfs 1, 24(5)
  04c11e4  lfs 2, 28(5)
  04c11e8  fsubs 1, 1, 30
  04c11ec  lwzx 3, 4, 3
  04c11f0  stfs 2, 28(31)
  04c11f4  stfs 1, 24(31)
  04c11f8  lfs 1, 32(3)
  04c11fc  stfs 1, 368(30)
  04c1200  lfs 1, 36(3)
  04c1204  stfs 1, 372(30)
  04c1208  lfs 1, 40(3)
  04c120c  stfs 1, 376(30)
  04c1210  lfs 1, 44(3)
  04c1214  stfs 1, 380(30)
  04c1218  b 0x4c2990
  04c121c  li 4, 2
  04c1220  cmpwi 3, 0
  04c1224  stb 4, 32(31)
  04c1228  bt 2, 0x4c1244
  04c122c  ori 3, 31, 0
  04c1230  li 4, 0
  04c1234  li 5, 0
  04c1238  li 6, 5
  04c123c  bl 0xfddc0
  04c1240  nop
  04c1244  lfs 1, 16(31)
  04c1248  stfs 1, 368(30)
  04c124c  lfs 1, 20(31)
  04c1250  stfs 1, 372(30)
  04c1254  lfs 1, 24(31)
  04c1258  stfs 1, 376(30)
  04c125c  lfs 1, 28(31)
  04c1260  stfs 1, 380(30)
  04c1264  b 0x4c2990
  04c1268  lwz 3, 388(30)
  04c126c  lis 29, 165
  04c1270  lfs 1, 16(31)
  04c1274  slwi 3, 3, 2
  04c1278  lfs 2, 20(31)
  04c127c  addic 29, 29, 7136
  04c1280  extsw 3, 3
  04c1284  lwzx 3, 29, 3
  04c1288  lfs 3, 32(3)
  04c128c  lfs 4, 36(3)
  04c1290  fsubs 1, 3, 1
  04c1294  fsubs 2, 4, 2
  04c1298  bl 0x5e8338
  04c129c  nop
  04c12a0  lis 3, 76
  04c12a4  lis 4, 114
  04c12a8  addi 3, 3, 3956
  04c12ac  lis 6, 114
  04c12b0  addic 5, 30, 416
  04c12b4  lfs 2, 20(3)
  04c12b8  lfs 3, -3048(4)
  04c12bc  lfs 4, 24(3)
  04c12c0  fmuls 2, 3, 2
  04c12c4  lfs 5, -3052(6)
  04c12c8  addic 3, 31, 72
  04c12cc  fmuls 4, 5, 4
  04c12d0  fmr 3, 2
  04c12d4  bl 0x10a2e0
  04c12d8  nop
  04c12dc  lwz 3, 356(30)
  04c12e0  cmpwi 3, 2
  04c12e4  bt 2, 0x4c2990
  04c12e8  li 3, 9
  04c12ec  bl 0xfc620
  04c12f0  nop
  04c12f4  cmpwi 3, 0
  04c12f8  bf 2, 0x4c2990
  04c12fc  li 3, 6
  04c1300  lbz 4, 83(31)
  04c1304  cmpwi 4, 0
  04c1308  stb 3, 32(31)
  04c130c  bt 2, 0x4c1328
  04c1310  ori 3, 31, 0
  04c1314  li 4, 0
  04c1318  li 5, 0
  04c131c  li 6, 5
  04c1320  bl 0xfddc0
  04c1324  nop
  04c1328  lwz 4, 388(30)
  04c132c  addic 31, 31, 16
  04c1330  slwi 4, 4, 2
  04c1334  addic 3, 30, 64
  04c1338  extsw 4, 4
  04c133c  ori 5, 31, 0
  04c1340  lwzx 4, 29, 4
  04c1344  addic 4, 4, 32
  04c1348  bl 0x5e81f0
  04c134c  nop
  04c1350  lfs 2, 68(30)
  04c1354  lfs 3, 64(30)
  04c1358  fmuls 1, 2, 2
  04c135c  lis 3, 143
  04c1360  lis 4, 114
  04c1364  lis 5, 143
  04c1368  fmadds 1, 3, 3, 1
  04c136c  li 7, 0
  04c1370  fsqrts 4, 1
  04c1374  lfs 1, 19304(3)
  04c1378  lfs 5, -3052(4)
  04c137c  lis 3, 76
  04c1380  addi 3, 3, 3956
  04c1384  fmuls 1, 1, 5
  04c1388  lfs 5, 28(3)
  04c138c  lis 3, 114
  04c1390  lfs 6, -3048(3)
  04c1394  lwz 3, 388(30)
  04c1398  slwi 3, 3, 2
  04c139c  extsw 4, 3
  04c13a0  ori 3, 31, 0
  04c13a4  lwzx 4, 29, 4
  04c13a8  addic 4, 4, 32
  04c13ac  fdivs 7, 1, 4
  04c13b0  fsub 8, 5, 4
  04c13b4  fsub 9, 5, 4
  04c13b8  fsub 10, 4, 5
  04c13bc  fsub 4, 4, 5
  04c13c0  fmuls 3, 3, 7
  04c13c4  fmuls 2, 2, 7
  04c13c8  fsel 7, 8, 5, 3
  04c13cc  fsel 5, 9, 5, 2
  04c13d0  fsel 3, 10, 7, 3
  04c13d4  fsel 2, 4, 5, 2
  04c13d8  stfs 3, 64(30)
  04c13dc  stfs 2, 68(30)
  04c13e0  lfs 2, 19308(5)
  04c13e4  fmuls 2, 2, 6
  04c13e8  fneg 2, 2
  04c13ec  bl 0x108180
  04c13f0  nop
  04c13f4  stfs 1, 72(30)
  04c13f8  b 0x4c2990
  04c13fc  lfs 1, 16(31)
  04c1400  lfs 2, 64(30)
  04c1404  fadds 1, 1, 2
  04c1408  lis 3, 143
  04c140c  lfs 2, 20(31)
  04c1410  lis 4, 114
  04c1414  lfs 3, 24(31)
  04c1418  lis 5, 76
  04c141c  addi 5, 5, 3956
  04c1420  stfs 1, 16(31)
  04c1424  lfs 1, 68(30)
  04c1428  fadds 1, 2, 1
  04c142c  stfs 1, 20(31)
  04c1430  lfs 1, 72(30)
  04c1434  fadds 1, 3, 1
  04c1438  stfs 1, 24(31)
  04c143c  lfs 1, 72(30)
  04c1440  lfs 2, 19308(3)
  04c1444  lfs 3, -3048(4)
  04c1448  fnmsubs 1, 2, 3, 1
  04c144c  stfs 1, 72(30)
  04c1450  lfs 2, 28(5)
  04c1454  fcmpu 0, 1, 2
  04c1458  cror 6, 1, 2
  04c145c  bt 6, 0x4c2990
  04c1460  lfs 1, 24(31)
  04c1464  lis 4, 76
  04c1468  lfs 2, 16(31)
  04c146c  fadds 1, 1, 30
  04c1470  lfs 3, 20(31)
  04c1474  addi 5, 4, 3956
  04c1478  stfs 2, 128(1)
  04c147c  lfs 2, 28(31)
  04c1480  addic 3, 1, 128
  04c1484  stfs 3, 132(1)
  04c1488  li 4, 0
  04c148c  stfs 2, 140(1)
  04c1490  stfs 1, 136(1)
  04c1494  lfs 1, 32(5)
  04c1498  bl 0xffb70
  04c149c  nop
  04c14a0  lfs 2, 24(31)
  04c14a4  fcmpu 0, 1, 2
  04c14a8  cror 6, 0, 2
  04c14ac  bt 6, 0x4c2990
  04c14b0  lbz 3, 32(31)
  04c14b4  cmpwi 3, 6
  04c14b8  bf 2, 0x4c14cc
  04c14bc  li 3, 2
  04c14c0  stfs 1, 24(31)
  04c14c4  stb 3, 32(31)
  04c14c8  b 0x4c2990
  04c14cc  fsubs 1, 1, 30
  04c14d0  li 3, 1
  04c14d4  stb 3, 32(31)
  04c14d8  stfs 1, 24(31)
  04c14dc  b 0x4c2990
  04c14e0  lwz 3, 356(30)
  04c14e4  cmpwi 3, 2
  04c14e8  bt 2, 0x4c2990
  04c14ec  lis 3, 143
  04c14f0  lfs 2, 19300(3)
  04c14f4  fneg 1, 2
  04c14f8  bl 0xfcbe8
  04c14fc  nop
  04c1500  lis 3, 76
  04c1504  addi 3, 3, 3956
  04c1508  lfs 2, 36(3)
  04c150c  li 3, 3
  04c1510  fmuls 1, 1, 2
  04c1514  stfs 1, 412(30)
  04c1518  lbz 4, 83(31)
  04c151c  stb 3, 32(31)
  04c1520  cmpwi 4, 1
  04c1524  bt 2, 0x4c2990
  04c1528  lis 3, 76
  04c152c  lis 4, 114
  04c1530  addi 3, 3, 3956
  04c1534  li 5, 0
  04c1538  lfs 1, 40(3)
  04c153c  lfs 2, -3056(4)
  04c1540  ori 3, 31, 0
  04c1544  li 4, 1
  04c1548  fmuls 1, 2, 1
  04c154c  fctiwz 1, 1
  04c1550  stfd 1, 448(1)
  04c1554  lwz 6, 452(1)
  04c1558  extsw 6, 6
  04c155c  bl 0xfddc0
  04c1560  nop
  04c1564  b 0x4c2990
  04c1568  lis 3, 76
  04c156c  lis 4, 16384
  04c1570  lbz 5, 112(31)
  04c1574  addi 3, 3, 3956
  04c1578  rlwinm 5, 5, 0, 30, 30
  04c157c  cmpwi 5, 0
  04c1580  lfs 31, 44(3)
  04c1584  stw 4, 88(31)
  04c1588  lfs 1, 16(31)
  04c158c  lfs 2, 20(31)
  04c1590  bt 2, 0x4c1618
  04c1594  lfs 3, 20(29)
  04c1598  lfs 4, 16(29)
  04c159c  fsubs 3, 2, 3
  04c15a0  fsubs 4, 1, 4
  04c15a4  lis 3, 143
  04c15a8  fmuls 3, 3, 3
  04c15ac  fmadds 3, 4, 4, 3
  04c15b0  lfs 4, 19296(3)
  04c15b4  fsqrts 3, 3
  04c15b8  fcmpu 0, 3, 4
  04c15bc  cror 6, 1, 2
  04c15c0  bt 6, 0x4c1618
  04c15c4  li 3, 4
  04c15c8  lbz 4, 83(31)
  04c15cc  cmpwi 4, 3
  04c15d0  stb 3, 32(31)
  04c15d4  bt 2, 0x4c179c
  04c15d8  lis 3, 76
  04c15dc  lis 4, 114
  04c15e0  addi 3, 3, 3956
  04c15e4  li 5, 0
  04c15e8  lfs 1, 40(3)
  04c15ec  lfs 2, -3056(4)
  04c15f0  ori 3, 31, 0
  04c15f4  li 4, 3
  04c15f8  fmuls 1, 2, 1
  04c15fc  fctiwz 1, 1
  04c1600  stfd 1, 448(1)
  04c1604  lwz 6, 452(1)
  04c1608  extsw 6, 6
  04c160c  bl 0xfddc0
  04c1610  nop
  04c1614  b 0x4c179c
  04c1618  lfs 3, 16(29)
  04c161c  lfs 4, 20(29)
  04c1620  fsubs 1, 3, 1
  04c1624  fsubs 2, 4, 2
  04c1628  bl 0x5e8338
  04c162c  nop
  04c1630  lfs 2, 412(30)
  04c1634  bl 0x502578
  04c1638  nop
  04c163c  lis 3, 76
  04c1640  lis 4, 114
  04c1644  addi 29, 3, 3956
  04c1648  lis 6, 114
  04c164c  addic 3, 31, 72
  04c1650  addic 5, 30, 416
  04c1654  lfs 2, 20(29)
  04c1658  lfs 3, -3048(4)
  04c165c  lfs 4, 24(29)
  04c1660  fmuls 2, 3, 2
  04c1664  lfs 5, -3052(6)
  04c1668  fmuls 4, 5, 4
  04c166c  fmr 3, 2
  04c1670  bl 0x10a2e0
  04c1674  nop
  04c1678  ori 3, 31, 0
  04c167c  bl 0xefe40
  04c1680  nop
  04c1684  lfs 2, 48(29)
  04c1688  fcmpu 0, 1, 2
  04c168c  cror 6, 0, 2
  04c1690  bt 6, 0x4c179c
  04c1694  lis 3, 76
  04c1698  addi 3, 3, 3956
  04c169c  lfs 2, 52(3)
  04c16a0  fcmpu 0, 1, 2
  04c16a4  cror 6, 1, 2
  04c16a8  bt 6, 0x4c179c
  04c16ac  lis 3, 143
  04c16b0  lis 4, 114
  04c16b4  lis 5, 76
  04c16b8  lfs 1, 19320(3)
  04c16bc  lfs 2, -3052(4)
  04c16c0  addi 3, 5, 3956
  04c16c4  fmuls 1, 1, 2
  04c16c8  addic 4, 30, 208
  04c16cc  addic 5, 1, 144
  04c16d0  addic 6, 1, 160
  04c16d4  stfs 1, 244(30)
  04c16d8  lfs 1, 56(3)
  04c16dc  lfs 2, 72(31)
  04c16e0  lfs 3, 60(3)
  04c16e4  fadds 1, 2, 1
  04c16e8  lfs 4, 64(3)
  04c16ec  fsubs 5, 3, 2
  04c16f0  fsubs 6, 4, 2
  04c16f4  fsubs 3, 3, 1
  04c16f8  fsub 7, 2, 5
  04c16fc  fsubs 4, 4, 1
  04c1700  fsub 8, 1, 3
  04c1704  fsel 2, 7, 5, 2
  04c1708  lfs 5, 68(3)
  04c170c  fsel 1, 8, 3, 1
  04c1710  fsub 3, 6, 2
  04c1714  fsub 8, 4, 1
  04c1718  fsel 2, 3, 6, 2
  04c171c  lfs 3, 72(3)
  04c1720  lfs 6, 76(3)
  04c1724  lfs 9, 80(3)
  04c1728  li 3, 0
  04c172c  fsel 1, 8, 4, 1
  04c1730  fmuls 4, 2, 2
  04c1734  stw 3, 152(1)
  04c1738  ori 3, 31, 0
  04c173c  fmuls 7, 1, 1
  04c1740  fmuls 8, 4, 2
  04c1744  fmuls 10, 7, 1
  04c1748  fmuls 11, 4, 8
  04c174c  fmadds 2, 8, 5, 2
  04c1750  fmuls 8, 7, 10
  04c1754  fmadds 1, 10, 5, 1
  04c1758  fmuls 5, 4, 11
  04c175c  fmadds 2, 11, 3, 2
  04c1760  fmuls 10, 7, 8
  04c1764  fmadds 1, 8, 3, 1
  04c1768  fmuls 3, 4, 5
  04c176c  fmadds 2, 5, 6, 2
  04c1770  fmuls 4, 7, 10
  04c1774  fmadds 1, 10, 6, 1
  04c1778  fmadds 2, 3, 9, 2
  04c177c  fmadds 3, 4, 9, 1
  04c1780  fmr 1, 30
  04c1784  fmuls 2, 2, 31
  04c1788  fmuls 3, 3, 31
  04c178c  stfs 2, 148(1)
  04c1790  stfs 3, 144(1)
  04c1794  bl 0x101058
  04c1798  nop
  04c179c  lwz 3, 356(30)
  04c17a0  cmpwi 3, 2
  04c17a4  bf 2, 0x4c2990
  04c17a8  li 3, 5
  04c17ac  stb 3, 32(31)
  04c17b0  b 0x4c2990
  04c17b4  lis 3, 76
  04c17b8  lfs 1, 16(31)
  04c17bc  lis 4, 16384
  04c17c0  addi 28, 3, 3956
  04c17c4  lfs 29, 44(28)
  04c17c8  stw 4, 88(31)
  04c17cc  lfs 2, 16(29)
  04c17d0  lfs 3, 20(29)
  04c17d4  fsubs 1, 2, 1
  04c17d8  lfs 4, 20(31)
  04c17dc  fsubs 2, 3, 4
  04c17e0  bl 0x5e8338
  04c17e4  nop
  04c17e8  ori 3, 31, 0
  04c17ec  fmr 28, 1
  04c17f0  bl 0xefe40
  04c17f4  nop
  04c17f8  lis 3, 114
  04c17fc  lfs 2, 20(28)
  04c1800  lis 4, 114
  04c1804  lfs 3, 24(28)
  04c1808  fmr 31, 1
  04c180c  addic 5, 30, 416
  04c1810  fmr 1, 28
  04c1814  lfs 4, -3048(3)
  04c1818  lfs 5, -3052(4)
  04c181c  fmuls 2, 4, 2
  04c1820  addic 3, 31, 72
  04c1824  fmuls 4, 5, 3
  04c1828  fmr 3, 2
  04c182c  bl 0x10a2e0
  04c1830  nop
  04c1834  lbz 3, 112(31)
  04c1838  lfs 1, 72(31)
  04c183c  rlwinm 3, 3, 0, 30, 30
  04c1840  cmpwi 3, 0
  04c1844  bt 2, 0x4c18d4
  04c1848  lfs 2, 20(31)
  04c184c  lfs 3, 20(29)
  04c1850  lfs 4, 16(31)
  04c1854  fsubs 2, 2, 3
  04c1858  lfs 3, 16(29)
  04c185c  fsubs 3, 4, 3
  04c1860  lis 3, 143
  04c1864  fmuls 2, 2, 2
  04c1868  fmadds 2, 3, 3, 2
  04c186c  lfs 3, 19296(3)
  04c1870  fsqrts 2, 2
  04c1874  fcmpu 0, 2, 3
  04c1878  cror 6, 0, 2
  04c187c  bt 6, 0x4c18d4
  04c1880  li 3, 3
  04c1884  lbz 4, 83(31)
  04c1888  cmpwi 4, 1
  04c188c  stb 3, 32(31)
  04c1890  bt 2, 0x4c1a00
  04c1894  lis 3, 76
  04c1898  lis 4, 114
  04c189c  addi 3, 3, 3956
  04c18a0  li 5, 0
  04c18a4  lfs 1, 40(3)
  04c18a8  lfs 2, -3056(4)
  04c18ac  ori 3, 31, 0
  04c18b0  fmuls 1, 2, 1
  04c18b4  li 4, 1
  04c18b8  fctiwz 1, 1
  04c18bc  stfd 1, 448(1)
  04c18c0  lwz 6, 452(1)
  04c18c4  extsw 6, 6
  04c18c8  bl 0xfddc0
  04c18cc  nop
  04c18d0  b 0x4c1a00
  04c18d4  lis 3, 76
  04c18d8  addi 3, 3, 3956
  04c18dc  lfs 2, 48(3)
  04c18e0  fcmpu 0, 31, 2
  04c18e4  bt 0, 0x4c19ec
  04c18e8  lis 3, 76
  04c18ec  addi 3, 3, 3956
  04c18f0  lfs 2, 52(3)
  04c18f4  fcmpu 0, 31, 2
  04c18f8  bt 1, 0x4c19ec
  04c18fc  lis 3, 76
  04c1900  addi 3, 3, 3956
  04c1904  lis 4, 114
  04c1908  lfs 2, 56(3)
  04c190c  lfs 3, 60(3)
  04c1910  fadds 2, 1, 2
  04c1914  fsubs 5, 3, 1
  04c1918  lfs 4, 64(3)
  04c191c  addic 5, 1, 192
  04c1920  addic 6, 1, 208
  04c1924  fsubs 3, 3, 2
  04c1928  fsub 7, 1, 5
  04c192c  fsubs 6, 4, 2
  04c1930  fsubs 4, 4, 1
  04c1934  fsub 8, 2, 3
  04c1938  fsel 1, 7, 5, 1
  04c193c  fsel 2, 8, 3, 2
  04c1940  fsub 5, 4, 1
  04c1944  lfs 3, 68(3)
  04c1948  fsub 7, 6, 2
  04c194c  fsel 1, 5, 4, 1
  04c1950  lfs 4, 72(3)
  04c1954  lfs 5, 76(3)
  04c1958  lfs 9, 80(3)
  04c195c  lis 3, 270
  04c1960  fsel 2, 7, 6, 2
  04c1964  fmuls 6, 1, 1
  04c1968  fmuls 7, 2, 2
  04c196c  fmuls 8, 6, 1
  04c1970  fmuls 10, 7, 2
  04c1974  fmuls 11, 6, 8
  04c1978  fmadds 1, 8, 3, 1
  04c197c  fmuls 8, 7, 10
  04c1980  fmadds 2, 10, 3, 2
  04c1984  fmuls 3, 6, 11
  04c1988  fmadds 1, 11, 4, 1
  04c198c  fmuls 10, 7, 8
  04c1990  fmadds 2, 8, 4, 2
  04c1994  fmuls 4, 6, 3
  04c1998  fmadds 1, 3, 5, 1
  04c199c  fmuls 3, 7, 10
  04c19a0  fmadds 2, 10, 5, 2
  04c19a4  fmadds 1, 4, 9, 1
  04c19a8  lfs 4, 18380(3)
  04c19ac  lfs 5, -3052(4)
  04c19b0  li 3, 0
  04c19b4  addic 4, 30, 208
  04c19b8  stw 3, 200(1)
  04c19bc  ori 3, 31, 0
  04c19c0  fmadds 2, 3, 9, 2
  04c19c4  fmuls 3, 4, 5
  04c19c8  fmuls 4, 1, 29
  04c19cc  fmr 1, 30
  04c19d0  fmuls 2, 2, 29
  04c19d4  stfs 4, 196(1)
  04c19d8  stfs 2, 192(1)
  04c19dc  stfs 3, 244(30)
  04c19e0  bl 0x101058
  04c19e4  nop
  04c19e8  b 0x4c1a00
  04c19ec  lwz 3, 356(30)
  04c19f0  cmpwi 3, 2
  04c19f4  bf 2, 0x4c1a00
  04c19f8  li 3, 5
  04c19fc  stb 3, 32(31)
  04c1a00  lis 3, 76
  04c1a04  lfs 1, 16(31)
  04c1a08  lis 7, 143
  04c1a0c  addi 5, 3, 3956
  04c1a10  lfs 2, 20(31)
  04c1a14  stfs 1, 176(1)
  04c1a18  li 8, 0
  04c1a1c  lfs 1, 28(31)
  04c1a20  ori 3, 31, 0
  04c1a24  stfs 2, 180(1)
  04c1a28  addic 4, 1, 176
  04c1a2c  stfs 1, 188(1)
  04c1a30  li 6, 1
  04c1a34  lfs 1, 84(5)
  04c1a38  li 9, 0
  04c1a3c  lfs 2, 24(31)
  04c1a40  li 10, 1
  04c1a44  lfs 4, 19272(7)
  04c1a48  fmr 3, 30
  04c1a4c  fadds 1, 2, 1
  04c1a50  std 8, 112(1)
  04c1a54  fmr 2, 30
  04c1a58  stfs 1, 184(1)
  04c1a5c  lfs 1, 88(5)
  04c1a60  fmuls 1, 4, 1
  04c1a64  bl 0x105870
  04c1a68  nop
  04c1a6c  b 0x4c2990
  04c1a70  lfs 3, 20(31)
  04c1a74  lfs 4, 372(30)
  04c1a78  lfs 1, 16(31)
  04c1a7c  fsubs 5, 3, 4
  04c1a80  lfs 2, 368(30)
  04c1a84  fsubs 6, 1, 2
  04c1a88  fmuls 5, 5, 5
  04c1a8c  fmadds 5, 6, 6, 5
  04c1a90  fsqrts 5, 5
  04c1a94  fcmpu 0, 5, 30
  04c1a98  cror 6, 1, 2
  04c1a9c  bt 6, 0x4c1af4
  04c1aa0  li 3, 2
  04c1aa4  lbz 4, 83(31)
  04c1aa8  cmpwi 4, 0
  04c1aac  stb 3, 32(31)
  04c1ab0  bt 2, 0x4c1ce4
  04c1ab4  lis 3, 76
  04c1ab8  lis 4, 114
  04c1abc  addi 3, 3, 3956
  04c1ac0  li 5, 0
  04c1ac4  lfs 1, 40(3)
  04c1ac8  lfs 2, -3056(4)
  04c1acc  ori 3, 31, 0
  04c1ad0  fmuls 1, 2, 1
  04c1ad4  li 4, 0
  04c1ad8  fctiwz 1, 1
  04c1adc  stfd 1, 448(1)
  04c1ae0  lwz 6, 452(1)
  04c1ae4  extsw 6, 6
  04c1ae8  bl 0xfddc0
  04c1aec  nop
  04c1af0  b 0x4c1ce4
  04c1af4  lwz 3, 356(30)
  04c1af8  cmpwi 3, 2
  04c1afc  bt 2, 0x4c1b7c
  04c1b00  lis 3, 143
  04c1b04  lfs 2, 19300(3)
  04c1b08  fneg 1, 2
  04c1b0c  bl 0xfcbe8
  04c1b10  nop
  04c1b14  lis 3, 76
  04c1b18  li 4, 3
  04c1b1c  addi 3, 3, 3956
  04c1b20  lfs 2, 36(3)
  04c1b24  fmuls 1, 1, 2
  04c1b28  stfs 1, 412(30)
  04c1b2c  lbz 3, 83(31)
  04c1b30  stb 4, 32(31)
  04c1b34  cmpwi 3, 1
  04c1b38  bt 2, 0x4c1ce4
  04c1b3c  lis 3, 76
  04c1b40  lis 4, 114
  04c1b44  addi 3, 3, 3956
  04c1b48  li 5, 0
  04c1b4c  lfs 1, 40(3)
  04c1b50  lfs 2, -3056(4)
  04c1b54  ori 3, 31, 0
  04c1b58  fmuls 1, 2, 1
  04c1b5c  li 4, 1
  04c1b60  fctiwz 1, 1
  04c1b64  stfd 1, 448(1)
  04c1b68  lwz 6, 452(1)
  04c1b6c  extsw 6, 6
  04c1b70  bl 0xfddc0
  04c1b74  nop
  04c1b78  b 0x4c1ce4
  04c1b7c  fsubs 1, 2, 1
  04c1b80  fsubs 2, 4, 3
  04c1b84  bl 0x5e8338
  04c1b88  nop
  04c1b8c  lis 3, 76
  04c1b90  lis 5, 114
  04c1b94  addi 4, 3, 3956
  04c1b98  lis 6, 114
  04c1b9c  addic 3, 31, 72
  04c1ba0  lfs 2, 20(4)
  04c1ba4  lfs 3, -3048(5)
  04c1ba8  lfs 4, 24(4)
  04c1bac  fmuls 2, 3, 2
  04c1bb0  lfs 5, -3052(6)
  04c1bb4  addic 5, 30, 416
  04c1bb8  fmuls 4, 5, 4
  04c1bbc  fmr 3, 2
  04c1bc0  bl 0x10a2e0
  04c1bc4  nop
  04c1bc8  ori 3, 31, 0
  04c1bcc  bl 0xefe40
  04c1bd0  nop
  04c1bd4  lbz 3, 83(31)
  04c1bd8  cmpwi 3, 1
  04c1bdc  bf 2, 0x4c1ce4
  04c1be0  lis 3, 76
  04c1be4  addi 3, 3, 3956
  04c1be8  lfs 2, 48(3)
  04c1bec  fcmpu 0, 1, 2
  04c1bf0  bt 0, 0x4c1ce4
  04c1bf4  lis 3, 76
  04c1bf8  addi 3, 3, 3956
  04c1bfc  lfs 2, 52(3)
  04c1c00  fcmpu 0, 1, 2
  04c1c04  bt 1, 0x4c1ce4
  04c1c08  lis 3, 76
  04c1c0c  lfs 1, 72(31)
  04c1c10  addi 3, 3, 3956
  04c1c14  lfs 2, 56(3)
  04c1c18  lfs 3, 60(3)
  04c1c1c  fadds 2, 1, 2
  04c1c20  lfs 4, 64(3)
  04c1c24  fsubs 5, 3, 1
  04c1c28  addic 4, 30, 208
  04c1c2c  addic 5, 1, 224
  04c1c30  addic 6, 1, 240
  04c1c34  fsubs 3, 3, 2
  04c1c38  fsub 7, 1, 5
  04c1c3c  fsubs 6, 4, 2
  04c1c40  fsubs 4, 4, 1
  04c1c44  fsub 8, 2, 3
  04c1c48  fsel 1, 7, 5, 1
  04c1c4c  fsel 2, 8, 3, 2
  04c1c50  fsub 5, 4, 1
  04c1c54  lfs 3, 68(3)
  04c1c58  fsub 7, 6, 2
  04c1c5c  fsel 1, 5, 4, 1
  04c1c60  lfs 4, 72(3)
  04c1c64  lfs 5, 76(3)
  04c1c68  lfs 8, 80(3)
  04c1c6c  fsel 2, 7, 6, 2
  04c1c70  fmuls 6, 1, 1
  04c1c74  fmuls 7, 2, 2
  04c1c78  fmuls 9, 6, 1
  04c1c7c  fmuls 10, 7, 2
  04c1c80  fmuls 11, 6, 9
  04c1c84  fmadds 1, 9, 3, 1
  04c1c88  lfs 9, 44(3)
  04c1c8c  li 3, 0
  04c1c90  stw 3, 232(1)
  04c1c94  fmuls 12, 7, 10
  04c1c98  fmadds 2, 10, 3, 2
  04c1c9c  fmuls 3, 6, 11
  04c1ca0  fmadds 1, 11, 4, 1
  04c1ca4  ori 3, 31, 0
  04c1ca8  fmuls 10, 7, 12
  04c1cac  fmadds 2, 12, 4, 2
  04c1cb0  fmuls 4, 6, 3
  04c1cb4  fmadds 1, 3, 5, 1
  04c1cb8  fmuls 3, 7, 10
  04c1cbc  fmadds 2, 10, 5, 2
  04c1cc0  fmadds 1, 4, 8, 1
  04c1cc4  fmadds 2, 3, 8, 2
  04c1cc8  fmuls 3, 1, 9
  04c1ccc  fmr 1, 30
  04c1cd0  fmuls 2, 2, 9
  04c1cd4  stfs 3, 228(1)
  04c1cd8  stfs 2, 224(1)
  04c1cdc  bl 0x101058
  04c1ce0  nop
  04c1ce4  lbz 3, 112(31)
  04c1ce8  rlwinm 3, 3, 0, 30, 30
  04c1cec  cmpwi 3, 0
  04c1cf0  bt 2, 0x4c2990
  04c1cf4  lbz 3, 83(31)
  04c1cf8  cmpwi 1, 3, 1
  04c1cfc  bf 6, 0x4c1d20
  04c1d00  bt 6, 0x4c2990
  04c1d04  ori 3, 31, 0
  04c1d08  li 4, 1
  04c1d0c  li 5, 0
  04c1d10  li 6, 5
  04c1d14  bl 0xfddc0
  04c1d18  nop
  04c1d1c  b 0x4c2990
  04c1d20  bt 6, 0x4c2990
  04c1d24  ori 3, 31, 0
  04c1d28  li 4, 1
  04c1d2c  li 5, 0
  04c1d30  li 6, 5
  04c1d34  bl 0xfddc0
  04c1d38  nop
  04c1d3c  b 0x4c2990
  04c1d40  ori 3, 31, 0
  04c1d44  addic 4, 30, 112
  04c1d48  bl 0x10b030
  04c1d4c  nop
  04c1d50  rlwinm 4, 3, 0, 25, 25
  04c1d54  cmpwi 4, 0
  04c1d58  bt 2, 0x4c1db0
  04c1d5c  li 3, 2
  04c1d60  lbz 4, 83(31)
  04c1d64  cmpwi 4, 0
  04c1d68  stb 3, 32(31)
  04c1d6c  bt 2, 0x4c2990
  04c1d70  lis 3, 76
  04c1d74  lis 4, 114
  04c1d78  addi 3, 3, 3956
  04c1d7c  li 5, 0
  04c1d80  lfs 1, 40(3)
  04c1d84  lfs 2, -3056(4)
  04c1d88  ori 3, 31, 0
  04c1d8c  li 4, 0
  04c1d90  fmuls 1, 2, 1
  04c1d94  fctiwz 1, 1
  04c1d98  stfd 1, 448(1)
  04c1d9c  lwz 6, 452(1)
  04c1da0  extsw 6, 6
  04c1da4  bl 0xfddc0
  04c1da8  nop
  04c1dac  b 0x4c2990
  04c1db0  li 4, 288
  04c1db4  and 3, 3, 4
  04c1db8  cmpwi 3, 0
  04c1dbc  bt 2, 0x4c1dd0
  04c1dc0  ori 3, 31, 0
  04c1dc4  bl 0xefb38
  04c1dc8  nop
  04c1dcc  b 0x4c2990
  04c1dd0  lhz 3, 174(30)
  04c1dd4  cmpwi 3, 2
  04c1dd8  bf 2, 0x4c2990
  04c1ddc  lis 3, 143
  04c1de0  lfs 1, 19316(3)
  04c1de4  stfs 1, 88(31)
  04c1de8  b 0x4c2990
  04c1dec  addic 4, 30, 112
  04c1df0  ori 3, 31, 0
  04c1df4  bl 0x10b030
  04c1df8  nop
  04c1dfc  li 4, 352
  04c1e00  and 3, 3, 4
  04c1e04  cmpwi 3, 0
  04c1e08  bt 2, 0x4c2990
  04c1e0c  lis 3, 76
  04c1e10  addic 4, 31, 16
  04c1e14  addi 5, 3, 3956
  04c1e18  ori 3, 31, 0
  04c1e1c  li 6, -1
  04c1e20  lfs 1, 32(5)
  04c1e24  lfs 2, 92(5)
  04c1e28  bl 0x10fb28
  04c1e2c  nop
  04c1e30  ori 3, 31, 0
  04c1e34  bl 0xefb38
  04c1e38  nop
  04c1e3c  b 0x4c2990
  04c1e40  lwz 3, 356(30)
  04c1e44  cmpwi 3, 2
  04c1e48  bt 2, 0x4c2990
  04c1e4c  lis 3, 164
  04c1e50  addic 28, 1, 384
  04c1e54  lwz 5, -28512(3)
  04c1e58  lwz 4, 420(30)
  04c1e5c  ori 3, 28, 0
  04c1e60  slwi 4, 4, 8
  04c1e64  addc 29, 5, 4
  04c1e68  clrldi 29, 29, 32
  04c1e6c  addic 4, 29, 192
  04c1e70  bl 0x5010c0
  04c1e74  nop
  04c1e78  lfs 1, 16(31)
  04c1e7c  lfs 2, 16(29)
  04c1e80  addic 3, 1, 256
  04c1e84  fsubs 1, 1, 2
  04c1e88  lfs 2, 20(31)
  04c1e8c  lfs 3, 24(31)
  04c1e90  lfs 4, 28(31)
  04c1e94  ori 4, 3, 0
  04c1e98  ori 5, 28, 0
  04c1e9c  stfs 1, 256(1)
  04c1ea0  lfs 1, 20(29)
  04c1ea4  fsubs 1, 2, 1
  04c1ea8  stfs 1, 260(1)
  04c1eac  lfs 1, 24(29)
  04c1eb0  stfs 4, 268(1)
  04c1eb4  fsubs 1, 3, 1
  04c1eb8  stfs 1, 264(1)
  04c1ebc  bl 0x5e825c
  04c1ec0  nop
  04c1ec4  lwz 3, 256(1)
  04c1ec8  lwz 4, 424(30)
  04c1ecc  srawi 5, 3, 31
  04c1ed0  lfs 1, 256(1)
  04c1ed4  srawi 6, 4, 31
  04c1ed8  lfs 2, 284(1)
  04c1edc  srwi 7, 5, 1
  04c1ee0  srwi 8, 6, 1
  04c1ee4  xor 3, 7, 3
  04c1ee8  xor 4, 8, 4
  04c1eec  subc 6, 4, 6
  04c1ef0  subc 4, 3, 5
  04c1ef4  lbz 3, 83(31)
  04c1ef8  cmpw 4, 6
  04c1efc  bf 0, 0x4c2990
  04c1f00  lis 5, -16455
  04c1f04  ori 5, 5, 39322
  04c1f08  cmpw 4, 5
  04c1f0c  bf 1, 0x4c2990
  04c1f10  lis 4, 76
  04c1f14  stfs 1, 272(1)
  04c1f18  addi 4, 4, 3956
  04c1f1c  cmpwi 3, 0
  04c1f20  lfs 31, 28(4)
  04c1f24  lfs 3, 260(1)
  04c1f28  lfs 4, 44(4)
  04c1f2c  fsub 3, 31, 3
  04c1f30  lfs 5, 96(4)
  04c1f34  lis 4, 16256
  04c1f38  stw 4, 280(1)
  04c1f3c  li 4, 11
  04c1f40  fsel 3, 3, 5, 4
  04c1f44  stfs 3, 276(1)
  04c1f48  lfs 4, 208(29)
  04c1f4c  lfs 5, 220(29)
  04c1f50  lfs 6, 212(29)
  04c1f54  fmuls 5, 5, 3
  04c1f58  lfs 7, 216(29)
  04c1f5c  fmuls 4, 4, 3
  04c1f60  lfs 8, 192(29)
  04c1f64  fmuls 6, 6, 3
  04c1f68  fmuls 3, 7, 3
  04c1f6c  lfs 7, 204(29)
  04c1f70  lfs 9, 196(29)
  04c1f74  lfs 10, 200(29)
  04c1f78  lfs 11, 224(29)
  04c1f7c  lfs 12, 236(29)
  04c1f80  lfs 13, 228(29)
  04c1f84  fmadds 5, 7, 1, 5
  04c1f88  fmadds 4, 8, 1, 4
  04c1f8c  fmadds 6, 9, 1, 6
  04c1f90  fmadds 1, 10, 1, 3
  04c1f94  lfs 3, 232(29)
  04c1f98  fadds 5, 5, 12
  04c1f9c  fadds 4, 4, 11
  04c1fa0  fadds 6, 6, 13
  04c1fa4  fadds 3, 1, 3
  04c1fa8  fadds 1, 5, 2
  04c1fac  stfs 4, 272(1)
  04c1fb0  stfs 6, 276(1)
  04c1fb4  stfs 3, 280(1)
  04c1fb8  stfs 1, 284(1)
  04c1fbc  lfs 1, 16(29)
  04c1fc0  fadds 1, 4, 1
  04c1fc4  stfs 1, 272(1)
  04c1fc8  lfs 2, 20(29)
  04c1fcc  fadds 2, 6, 2
  04c1fd0  stfs 2, 276(1)
  04c1fd4  lfs 2, 24(29)
  04c1fd8  stb 4, 32(31)
  04c1fdc  fadds 2, 3, 2
  04c1fe0  stfs 2, 280(1)
  04c1fe4  bt 2, 0x4c2004
  04c1fe8  ori 3, 31, 0
  04c1fec  li 4, 0
  04c1ff0  li 5, 0
  04c1ff4  li 6, 5
  04c1ff8  bl 0xfddc0
  04c1ffc  nop
  04c2000  lfs 1, 272(1)
  04c2004  lfs 2, 16(31)
  04c2008  fsubs 2, 1, 2
  04c200c  lis 3, 143
  04c2010  lis 4, 114
  04c2014  lis 5, 143
  04c2018  lis 6, 114
  04c201c  stfs 2, 64(30)
  04c2020  lfs 1, 276(1)
  04c2024  lfs 3, 20(31)
  04c2028  fsubs 3, 1, 3
  04c202c  li 7, 0
  04c2030  fmuls 1, 3, 3
  04c2034  stfs 3, 68(30)
  04c2038  lfs 4, 280(1)
  04c203c  lfs 5, 24(31)
  04c2040  fsubs 4, 4, 5
  04c2044  fmadds 1, 2, 2, 1
  04c2048  stfs 4, 72(30)
  04c204c  fsqrts 5, 1
  04c2050  lfs 1, 284(1)
  04c2054  stfs 1, 76(30)
  04c2058  lfs 1, 19304(3)
  04c205c  lfs 4, -3052(4)
  04c2060  addic 3, 31, 16
  04c2064  addic 4, 1, 272
  04c2068  fmuls 1, 1, 4
  04c206c  fdivs 4, 1, 5
  04c2070  fsub 6, 31, 5
  04c2074  fsub 7, 31, 5
  04c2078  fsub 8, 5, 31
  04c207c  fsub 5, 5, 31
  04c2080  fmuls 2, 2, 4
  04c2084  fmuls 3, 3, 4
  04c2088  fsel 4, 6, 31, 2
  04c208c  fsel 6, 7, 31, 3
  04c2090  fsel 2, 8, 4, 2
  04c2094  fsel 3, 5, 6, 3
  04c2098  stfs 2, 64(30)
  04c209c  stfs 3, 68(30)
  04c20a0  lfs 2, 19308(5)
  04c20a4  lfs 3, -3048(6)
  04c20a8  fmuls 2, 2, 3
  04c20ac  fneg 2, 2
  04c20b0  bl 0x108180
  04c20b4  nop
  04c20b8  stfs 1, 72(30)
  04c20bc  b 0x4c2990
  04c20c0  lis 3, 164
  04c20c4  lwz 4, 420(30)
  04c20c8  slwi 4, 4, 8
  04c20cc  lwz 3, -28512(3)
  04c20d0  lfs 1, 16(31)
  04c20d4  lfs 2, 64(30)
  04c20d8  addc 3, 3, 4
  04c20dc  fadds 1, 1, 2
  04c20e0  clrldi 3, 3, 32
  04c20e4  lfs 2, 20(31)
  04c20e8  lis 4, 143
  04c20ec  lis 5, 114
  04c20f0  lwz 3, 120(3)
  04c20f4  lfs 3, 24(31)
  04c20f8  lis 6, 76
  04c20fc  addi 6, 6, 3956
  04c2100  stfs 1, 16(31)
  04c2104  lfs 4, 68(30)
  04c2108  fadds 2, 2, 4
  04c210c  stfs 2, 20(31)
  04c2110  lfs 4, 72(30)
  04c2114  fadds 3, 3, 4
  04c2118  stfs 3, 24(31)
  04c211c  lfs 4, 112(3)
  04c2120  fadds 1, 1, 4
  04c2124  stfs 1, 16(31)
  04c2128  lfs 1, 116(3)
  04c212c  fadds 1, 2, 1
  04c2130  stfs 1, 20(31)
  04c2134  lfs 1, 120(3)
  04c2138  fadds 1, 3, 1
  04c213c  stfs 1, 24(31)
  04c2140  lfs 1, 72(30)
  04c2144  lfs 2, 19308(4)
  04c2148  lfs 3, -3048(5)
  04c214c  fnmsubs 1, 2, 3, 1
  04c2150  stfs 1, 72(30)
  04c2154  lfs 2, 28(6)
  04c2158  fcmpu 0, 1, 2
  04c215c  cror 6, 1, 2
  04c2160  bt 6, 0x4c2990
  04c2164  lfs 1, 24(31)
  04c2168  lis 3, 76
  04c216c  lfs 2, 16(31)
  04c2170  li 4, 0
  04c2174  fadds 1, 1, 30
  04c2178  lfs 3, 20(31)
  04c217c  addi 5, 3, 3956
  04c2180  stfs 2, 288(1)
  04c2184  lfs 2, 28(31)
  04c2188  addic 3, 1, 288
  04c218c  stfs 3, 292(1)
  04c2190  stfs 2, 300(1)
  04c2194  stfs 1, 296(1)
  04c2198  lfs 1, 32(5)
  04c219c  bl 0xffb70
  04c21a0  nop
  04c21a4  lfs 2, 24(31)
  04c21a8  fcmpu 0, 1, 2
  04c21ac  cror 6, 0, 2
  04c21b0  bt 6, 0x4c2990
  04c21b4  li 3, 12
  04c21b8  stb 3, 32(31)
  04c21bc  b 0x4c2990
  04c21c0  lis 4, 164
  04c21c4  lwz 8, 420(30)
  04c21c8  addic 5, 31, 16
  04c21cc  addic 6, 31, 64
  04c21d0  slwi 8, 8, 8
  04c21d4  ori 3, 31, 0
  04c21d8  lwz 4, -28512(4)
  04c21dc  ori 7, 5, 0
  04c21e0  addc 4, 4, 8
  04c21e4  ori 8, 6, 0
  04c21e8  clrldi 4, 4, 32
  04c21ec  bl 0x1122e0
  04c21f0  nop
  04c21f4  lwz 3, 356(30)
  04c21f8  cmpwi 3, 2
  04c21fc  bt 2, 0x4c2990
  04c2200  lis 3, 143
  04c2204  lfs 2, 19300(3)
  04c2208  fneg 1, 2
  04c220c  bl 0xfcbe8
  04c2210  nop
  04c2214  lis 3, 76
  04c2218  li 4, 13
  04c221c  addi 3, 3, 3956
  04c2220  lfs 2, 36(3)
  04c2224  fmuls 1, 1, 2
  04c2228  stfs 1, 412(30)
  04c222c  lbz 3, 83(31)
  04c2230  stb 4, 32(31)
  04c2234  cmpwi 3, 1
  04c2238  bt 2, 0x4c2990
  04c223c  lis 3, 76
  04c2240  lis 4, 114
  04c2244  addi 3, 3, 3956
  04c2248  li 5, 0
  04c224c  lfs 1, 40(3)
  04c2250  lfs 2, -3056(4)
  04c2254  ori 3, 31, 0
  04c2258  fmuls 1, 2, 1
  04c225c  li 4, 1
  04c2260  fctiwz 1, 1
  04c2264  stfd 1, 448(1)
  04c2268  lwz 6, 452(1)
  04c226c  extsw 6, 6
  04c2270  bl 0xfddc0
  04c2274  nop
  04c2278  b 0x4c2990
  04c227c  lis 4, 164
  04c2280  lwz 8, 420(30)
  04c2284  addic 5, 31, 16
  04c2288  slwi 8, 8, 8
  04c228c  addic 6, 31, 64
  04c2290  ori 3, 31, 0
  04c2294  lwz 4, -28512(4)
  04c2298  ori 7, 5, 0
  04c229c  addc 4, 4, 8
  04c22a0  ori 8, 6, 0
  04c22a4  clrldi 4, 4, 32
  04c22a8  bl 0x1122e0
  04c22ac  nop
  04c22b0  lis 3, 76
  04c22b4  lbz 4, 112(31)
  04c22b8  lis 5, 16384
  04c22bc  addi 3, 3, 3956
  04c22c0  lfs 1, 16(31)
  04c22c4  rlwinm 4, 4, 0, 30, 30
  04c22c8  cmpwi 4, 0
  04c22cc  lfs 31, 44(3)
  04c22d0  stw 5, 88(31)
  04c22d4  lfs 2, 20(31)
  04c22d8  bt 2, 0x4c2360
  04c22dc  lfs 3, 20(29)
  04c22e0  lfs 4, 16(29)
  04c22e4  fsubs 3, 2, 3
  04c22e8  fsubs 4, 1, 4
  04c22ec  lis 3, 143
  04c22f0  fmuls 3, 3, 3
  04c22f4  fmadds 3, 4, 4, 3
  04c22f8  lfs 4, 19296(3)
  04c22fc  fsqrts 3, 3
  04c2300  fcmpu 0, 3, 4
  04c2304  cror 6, 1, 2
  04c2308  bt 6, 0x4c2360
  04c230c  li 3, 14
  04c2310  lbz 4, 83(31)
  04c2314  cmpwi 4, 3
  04c2318  stb 3, 32(31)
  04c231c  bt 2, 0x4c24cc
  04c2320  lis 3, 76
  04c2324  lis 4, 114
  04c2328  addi 3, 3, 3956
  04c232c  li 5, 0
  04c2330  lfs 1, 40(3)
  04c2334  lfs 2, -3056(4)
  04c2338  ori 3, 31, 0
  04c233c  li 4, 3
  04c2340  fmuls 1, 2, 1
  04c2344  fctiwz 1, 1
  04c2348  stfd 1, 448(1)
  04c234c  lwz 6, 452(1)
  04c2350  extsw 6, 6
  04c2354  bl 0xfddc0
  04c2358  nop
  04c235c  b 0x4c24cc
  04c2360  lfs 3, 16(29)
  04c2364  lfs 4, 20(29)
  04c2368  fsubs 1, 3, 1
  04c236c  fsubs 2, 4, 2
  04c2370  bl 0x5e8338
  04c2374  nop
  04c2378  lfs 2, 412(30)
  04c237c  bl 0x502578
  04c2380  nop
  04c2384  lis 3, 76
  04c2388  lis 4, 114
  04c238c  addi 29, 3, 3956
  04c2390  lis 6, 114
  04c2394  addic 3, 31, 72
  04c2398  addic 5, 30, 416
  04c239c  lfs 2, 20(29)
  04c23a0  lfs 3, -3048(4)
  04c23a4  lfs 4, 24(29)
  04c23a8  fmuls 2, 3, 2
  04c23ac  lfs 5, -3052(6)
  04c23b0  fmuls 4, 5, 4
  04c23b4  fmr 3, 2
  04c23b8  bl 0x10a2e0
  04c23bc  nop
  04c23c0  ori 3, 31, 0
  04c23c4  bl 0xefe40
  04c23c8  nop
  04c23cc  lfs 2, 48(29)
  04c23d0  fcmpu 0, 1, 2
  04c23d4  cror 6, 0, 2
  04c23d8  bt 6, 0x4c24cc
  04c23dc  lis 3, 76
  04c23e0  addi 3, 3, 3956
  04c23e4  lfs 2, 52(3)
  04c23e8  fcmpu 0, 1, 2
  04c23ec  cror 6, 1, 2
  04c23f0  bt 6, 0x4c24cc
  04c23f4  lis 3, 76
  04c23f8  lfs 1, 72(31)
  04c23fc  addi 3, 3, 3956
  04c2400  lfs 2, 56(3)
  04c2404  lfs 3, 60(3)
  04c2408  fadds 2, 1, 2
  04c240c  fsubs 5, 3, 1
  04c2410  lfs 4, 64(3)
  04c2414  fsubs 6, 4, 1
  04c2418  addic 4, 30, 208
  04c241c  addic 5, 1, 304
  04c2420  addic 6, 1, 320
  04c2424  fsubs 3, 3, 2
  04c2428  fsub 7, 1, 5
  04c242c  fsubs 4, 4, 2
  04c2430  fsub 8, 2, 3
  04c2434  fsel 1, 7, 5, 1
  04c2438  lfs 5, 68(3)
  04c243c  fsel 2, 8, 3, 2
  04c2440  fsub 3, 6, 1
  04c2444  fsub 8, 4, 2
  04c2448  fsel 1, 3, 6, 1
  04c244c  lfs 3, 72(3)
  04c2450  lfs 6, 76(3)
  04c2454  lfs 9, 80(3)
  04c2458  li 3, 0
  04c245c  fsel 2, 8, 4, 2
  04c2460  fmuls 4, 1, 1
  04c2464  stw 3, 312(1)
  04c2468  ori 3, 31, 0
  04c246c  fmuls 7, 2, 2
  04c2470  fmuls 8, 4, 1
  04c2474  fmuls 10, 7, 2
  04c2478  fmuls 11, 4, 8
  04c247c  fmadds 1, 8, 5, 1
  04c2480  fmuls 8, 7, 10
  04c2484  fmadds 2, 10, 5, 2
  04c2488  fmuls 5, 4, 11
  04c248c  fmadds 1, 11, 3, 1
  04c2490  fmuls 10, 7, 8
  04c2494  fmadds 2, 8, 3, 2
  04c2498  fmuls 3, 4, 5
  04c249c  fmadds 1, 5, 6, 1
  04c24a0  fmuls 4, 7, 10
  04c24a4  fmadds 2, 10, 6, 2
  04c24a8  fmadds 1, 3, 9, 1
  04c24ac  fmadds 2, 4, 9, 2
  04c24b0  fmuls 3, 1, 31
  04c24b4  fmr 1, 30
  04c24b8  fmuls 2, 2, 31
  04c24bc  stfs 3, 308(1)
  04c24c0  stfs 2, 304(1)
  04c24c4  bl 0x101058
  04c24c8  nop
  04c24cc  lwz 3, 356(30)
  04c24d0  cmpwi 3, 2
  04c24d4  bf 2, 0x4c2990
  04c24d8  li 3, 12
  04c24dc  stb 3, 32(31)
  04c24e0  b 0x4c2990
  04c24e4  lis 3, 76
  04c24e8  lwz 7, 420(30)
  04c24ec  lis 4, 164
  04c24f0  addi 28, 3, 3956
  04c24f4  lis 3, 16384
  04c24f8  slwi 7, 7, 8
  04c24fc  addic 5, 31, 16
  04c2500  lwz 4, -28512(4)
  04c2504  addic 6, 31, 64
  04c2508  lfs 29, 44(28)
  04c250c  addc 4, 4, 7
  04c2510  stw 3, 88(31)
  04c2514  ori 3, 31, 0
  04c2518  ori 7, 5, 0
  04c251c  ori 8, 6, 0
  04c2520  clrldi 4, 4, 32
  04c2524  bl 0x1122e0
  04c2528  nop
  04c252c  lfs 1, 16(29)
  04c2530  lfs 2, 16(31)
  04c2534  lfs 3, 20(29)
  04c2538  fsubs 1, 1, 2
  04c253c  lfs 4, 20(31)
  04c2540  fsubs 2, 3, 4
  04c2544  bl 0x5e8338
  04c2548  nop
  04c254c  ori 3, 31, 0
  04c2550  fmr 28, 1
  04c2554  bl 0xefe40
  04c2558  nop
  04c255c  lis 4, 114
  04c2560  lfs 2, 20(28)
  04c2564  lfs 3, 24(28)
  04c2568  lis 6, 114
  04c256c  fmr 31, 1
  04c2570  addic 3, 31, 72
  04c2574  addic 5, 30, 416
  04c2578  fmr 1, 28
  04c257c  lfs 4, -3048(4)
  04c2580  lfs 5, -3052(6)
  04c2584  fmuls 2, 4, 2
  04c2588  fmuls 4, 5, 3
  04c258c  fmr 3, 2
  04c2590  bl 0x10a2e0
  04c2594  nop
  04c2598  lbz 3, 112(31)
  04c259c  lfs 1, 72(31)
  04c25a0  rlwinm 3, 3, 0, 30, 30
  04c25a4  cmpwi 3, 0
  04c25a8  bt 2, 0x4c2638
  04c25ac  lfs 2, 20(31)
  04c25b0  lfs 3, 20(29)
  04c25b4  lfs 4, 16(31)
  04c25b8  fsubs 2, 2, 3
  04c25bc  lfs 3, 16(29)
  04c25c0  fsubs 3, 4, 3
  04c25c4  lis 3, 143
  04c25c8  fmuls 2, 2, 2
  04c25cc  fmadds 2, 3, 3, 2
  04c25d0  lfs 3, 19296(3)
  04c25d4  fsqrts 2, 2
  04c25d8  fcmpu 0, 2, 3
  04c25dc  cror 6, 0, 2
  04c25e0  bt 6, 0x4c2638
  04c25e4  li 3, 13
  04c25e8  lbz 4, 83(31)
  04c25ec  cmpwi 4, 1
  04c25f0  stb 3, 32(31)
  04c25f4  bt 2, 0x4c2764
  04c25f8  lis 3, 76
  04c25fc  lis 4, 114
  04c2600  addi 3, 3, 3956
  04c2604  li 5, 0
  04c2608  lfs 1, 40(3)
  04c260c  lfs 2, -3056(4)
  04c2610  ori 3, 31, 0
  04c2614  li 4, 1
  04c2618  fmuls 1, 2, 1
  04c261c  fctiwz 1, 1
  04c2620  stfd 1, 448(1)
  04c2624  lwz 6, 452(1)
  04c2628  extsw 6, 6
  04c262c  bl 0xfddc0
  04c2630  nop
  04c2634  b 0x4c2764
  04c2638  lis 3, 76
  04c263c  addi 3, 3, 3956
  04c2640  lfs 2, 48(3)
  04c2644  fcmpu 0, 31, 2
  04c2648  bt 0, 0x4c2750
  04c264c  lis 3, 76
  04c2650  addi 3, 3, 3956
  04c2654  lfs 2, 52(3)
  04c2658  fcmpu 0, 31, 2
  04c265c  bt 1, 0x4c2750
  04c2660  lis 3, 76
  04c2664  addi 3, 3, 3956
  04c2668  lis 5, 114
  04c266c  lfs 2, 56(3)
  04c2670  lfs 3, 60(3)
  04c2674  fadds 2, 1, 2
  04c2678  lfs 4, 64(3)
  04c267c  fsubs 5, 3, 1
  04c2680  fsubs 6, 4, 1
  04c2684  addic 4, 30, 208
  04c2688  addic 6, 1, 368
  04c268c  fsubs 3, 3, 2
  04c2690  fsub 7, 1, 5
  04c2694  fsubs 4, 4, 2
  04c2698  fsub 8, 2, 3
  04c269c  fsel 1, 7, 5, 1
  04c26a0  lfs 5, 68(3)
  04c26a4  fsel 2, 8, 3, 2
  04c26a8  fsub 3, 6, 1
  04c26ac  fsub 8, 4, 2
  04c26b0  fsel 1, 3, 6, 1
  04c26b4  lfs 3, 72(3)
  04c26b8  lfs 6, 76(3)
  04c26bc  lfs 9, 80(3)
  04c26c0  lis 3, 270
  04c26c4  fsel 2, 8, 4, 2
  04c26c8  fmuls 4, 1, 1
  04c26cc  fmuls 7, 2, 2
  04c26d0  fmuls 8, 4, 1
  04c26d4  fmuls 10, 7, 2
  04c26d8  fmuls 11, 4, 8
  04c26dc  fmadds 1, 8, 5, 1
  04c26e0  fmuls 8, 7, 10
  04c26e4  fmadds 2, 10, 5, 2
  04c26e8  fmuls 5, 4, 11
  04c26ec  fmadds 1, 11, 3, 1
  04c26f0  fmuls 10, 7, 8
  04c26f4  fmadds 2, 8, 3, 2
  04c26f8  fmuls 3, 4, 5
  04c26fc  fmadds 1, 5, 6, 1
  04c2700  fmuls 4, 7, 10
  04c2704  fmadds 2, 10, 6, 2
  04c2708  fmadds 1, 3, 9, 1
  04c270c  lfs 3, 18380(3)
  04c2710  lfs 5, -3052(5)
  04c2714  li 3, 0
  04c2718  fmuls 3, 3, 5
  04c271c  addic 5, 1, 352
  04c2720  stw 3, 360(1)
  04c2724  fmadds 2, 4, 9, 2
  04c2728  ori 3, 31, 0
  04c272c  fmuls 4, 1, 29
  04c2730  fmr 1, 30
  04c2734  fmuls 2, 2, 29
  04c2738  stfs 4, 356(1)
  04c273c  stfs 2, 352(1)
  04c2740  stfs 3, 244(30)
  04c2744  bl 0x101058
  04c2748  nop
  04c274c  b 0x4c2764
  04c2750  lwz 3, 356(30)
  04c2754  cmpwi 3, 2
  04c2758  bf 2, 0x4c2764
  04c275c  li 3, 5
  04c2760  stb 3, 32(31)
  04c2764  lis 3, 76
  04c2768  lfs 1, 16(31)
  04c276c  lfs 2, 20(31)
  04c2770  lis 6, 143
  04c2774  addi 5, 3, 3956
  04c2778  stfs 1, 336(1)
  04c277c  lfs 1, 28(31)
  04c2780  li 7, 0
  04c2784  stfs 2, 340(1)
  04c2788  addic 4, 1, 336
  04c278c  stfs 1, 348(1)
  04c2790  ori 3, 31, 0
  04c2794  li 9, 0
  04c2798  lfs 1, 84(5)
  04c279c  lfs 2, 24(31)
  04c27a0  li 10, 1
  04c27a4  lfs 4, 19272(6)
  04c27a8  fadds 1, 2, 1
  04c27ac  std 7, 112(1)
  04c27b0  li 6, 1
  04c27b4  fmr 2, 30
  04c27b8  stfs 1, 344(1)
  04c27bc  lfs 1, 88(5)
  04c27c0  lfs 3, 28(5)
  04c27c4  fmuls 1, 4, 1
  04c27c8  bl 0x105870
  04c27cc  nop
  04c27d0  b 0x4c2990
  04c27d4  lis 4, 164
  04c27d8  lwz 7, 420(30)
  04c27dc  addic 29, 31, 16
  04c27e0  slwi 7, 7, 8
  04c27e4  addic 6, 31, 64
  04c27e8  ori 3, 31, 0
  04c27ec  lwz 4, -28512(4)
  04c27f0  ori 5, 29, 0
  04c27f4  ori 8, 6, 0
  04c27f8  addc 4, 4, 7
  04c27fc  ori 7, 29, 0
  04c2800  clrldi 4, 4, 32
  04c2804  bl 0x1122e0
  04c2808  nop
  04c280c  ori 3, 31, 0
  04c2810  addic 4, 30, 112
  04c2814  bl 0x10b030
  04c2818  nop
  04c281c  rlwinm 4, 3, 0, 25, 25
  04c2820  cmpwi 4, 0
  04c2824  bt 2, 0x4c28c4
  04c2828  lwz 5, 384(30)
  04c282c  lis 3, 165
  04c2830  slwi 5, 5, 2
  04c2834  addic 4, 3, 7136
  04c2838  extsw 5, 5
  04c283c  ori 3, 29, 0
  04c2840  lwzx 5, 4, 5
  04c2844  addic 4, 5, 16
  04c2848  lwz 5, 0(5)
  04c284c  extsw 5, 5
  04c2850  bl 0x104e44
  04c2854  nop
  04c2858  cmpwi 3, 0
  04c285c  bt 2, 0x4c28b4
  04c2860  li 3, 12
  04c2864  lbz 4, 83(31)
  04c2868  cmpwi 4, 0
  04c286c  stb 3, 32(31)
  04c2870  bt 2, 0x4c2990
  04c2874  lis 3, 76
  04c2878  lis 4, 114
  04c287c  addi 3, 3, 3956
  04c2880  li 5, 0
  04c2884  lfs 1, 40(3)
  04c2888  lfs 2, -3056(4)
  04c288c  ori 3, 31, 0
  04c2890  fmuls 1, 2, 1
  04c2894  li 4, 0
  04c2898  fctiwz 1, 1
  04c289c  stfd 1, 448(1)
  04c28a0  lwz 6, 452(1)
  04c28a4  extsw 6, 6
  04c28a8  bl 0xfddc0
  04c28ac  nop
  04c28b0  b 0x4c2990
  04c28b4  ori 3, 31, 0
  04c28b8  bl 0xefb38
  04c28bc  nop
  04c28c0  b 0x4c2990
  04c28c4  li 4, 288
  04c28c8  and 3, 3, 4
  04c28cc  cmpwi 3, 0
  04c28d0  bt 2, 0x4c28e4
  04c28d4  ori 3, 31, 0
  04c28d8  bl 0xefb38
  04c28dc  nop
  04c28e0  b 0x4c2990
  04c28e4  lhz 3, 174(30)
  04c28e8  cmpwi 3, 2
  04c28ec  bf 2, 0x4c2990
  04c28f0  lis 3, 143
  04c28f4  lfs 1, 19316(3)
  04c28f8  stfs 1, 88(31)
  04c28fc  b 0x4c2990
  04c2900  ori 29, 30, 0
  04c2904  lis 4, 164
  04c2908  addic 30, 31, 16
  04c290c  addic 6, 31, 64
  04c2910  ori 3, 31, 0
  04c2914  lwz 5, 420(29)
  04c2918  lwz 4, -28512(4)
  04c291c  ori 8, 6, 0
  04c2920  slwi 7, 5, 8
  04c2924  ori 5, 30, 0
  04c2928  addc 4, 4, 7
  04c292c  ori 7, 30, 0
  04c2930  clrldi 4, 4, 32
  04c2934  bl 0x1122e0
  04c2938  nop
  04c293c  addic 4, 29, 112
  04c2940  ori 3, 31, 0
  04c2944  bl 0x10b030
  04c2948  nop
  04c294c  li 4, 352
  04c2950  and 3, 3, 4
  04c2954  cmpwi 3, 0
  04c2958  bt 2, 0x4c2990
  04c295c  lis 3, 76
  04c2960  ori 4, 30, 0
  04c2964  addi 5, 3, 3956
  04c2968  ori 3, 31, 0
  04c296c  li 6, -1
  04c2970  lfs 1, 32(5)
  04c2974  lfs 2, 92(5)
  04c2978  bl 0x10fb28
  04c297c  nop
  04c2980  ori 3, 31, 0
  04c2984  bl 0xefb38
  04c2988  nop
  04c298c  b 0x4c2990
  04c2990  ld 0, 544(1)
  04c2994  mtlr 0
  04c2998  lfd 28, 496(1)
  04c299c  lfd 29, 504(1)
  04c29a0  lfd 30, 512(1)
  04c29a4  lfd 31, 520(1)
  04c29a8  ld 28, 464(1)
  04c29ac  ld 29, 472(1)
  04c29b0  ld 30, 480(1)
  04c29b4  ld 31, 488(1)
  04c29b8  addi 1, 1, 528
  04c29bc  blr
