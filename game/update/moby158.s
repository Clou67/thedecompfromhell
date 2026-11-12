# game/update/moby158.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M158_002a0108:   # 0x2a0108, 0x708 bytes
  02a0108  stdu 1, -416(1)
  02a010c  mflr 0
  02a0110  std 0, 432(1)
  02a0114  stfd 23, 344(1)
  02a0118  stfd 24, 352(1)
  02a011c  stfd 25, 360(1)
  02a0120  stfd 26, 368(1)
  02a0124  stfd 27, 376(1)
  02a0128  stfd 28, 384(1)
  02a012c  stfd 29, 392(1)
  02a0130  stfd 30, 400(1)
  02a0134  stfd 31, 408(1)
  02a0138  std 31, 336(1)
  02a013c  ori 31, 3, 0
  02a0140  lis 3, 42
  02a0144  std 30, 328(1)
  02a0148  lis 10, 16512
  02a014c  std 29, 320(1)
  02a0150  addi 30, 3, 152
  02a0154  ori 29, 4, 0
  02a0158  lfs 1, 16(31)
  02a015c  addic 3, 1, 128
  02a0160  lfs 2, 20(31)
  02a0164  li 7, 1
  02a0168  stfs 1, 128(1)
  02a016c  ori 10, 10, 32896
  02a0170  lfs 1, 28(31)
  02a0174  stfs 2, 132(1)
  02a0178  stfs 1, 140(1)
  02a017c  lfs 30, 0(30)
  02a0180  lfs 1, 24(31)
  02a0184  fadds 2, 1, 30
  02a0188  fmr 1, 30
  02a018c  stfs 2, 136(1)
  02a0190  lfs 27, 4(30)
  02a0194  lfs 28, 12(30)
  02a0198  lfs 29, 16(30)
  02a019c  fmr 2, 27
  02a01a0  lfs 3, 8(30)
  02a01a4  fmr 4, 28
  02a01a8  std 28, 312(1)
  02a01ac  std 27, 304(1)
  02a01b0  std 26, 296(1)
  02a01b4  std 25, 288(1)
  02a01b8  std 24, 280(1)
  02a01bc  fmr 5, 29
  02a01c0  bl 0x1246b8
  02a01c4  nop
  02a01c8  li 27, 0
  02a01cc  lfs 31, 20(30)
  02a01d0  ori 30, 27, 0
  02a01d4  lis 10, 16512
  02a01d8  fmr 1, 30
  02a01dc  addic 3, 1, 128
  02a01e0  fmr 2, 27
  02a01e4  li 7, 1
  02a01e8  fmr 3, 31
  02a01ec  fmr 4, 28
  02a01f0  ori 10, 10, 32896
  02a01f4  fmr 5, 29
  02a01f8  bl 0x1246b8
  02a01fc  nop
  02a0200  addic 27, 27, 1
  02a0204  cmpwi 27, 5
  02a0208  bt 0, 0x2a01d4
  02a020c  lis 3, 42
  02a0210  lis 28, 161
  02a0214  addi 3, 3, 152
  02a0218  ori 27, 30, 0
  02a021c  addic 28, 28, 23856
  02a0220  lfs 31, 24(3)
  02a0224  lfs 27, 28(3)
  02a0228  lfs 28, 32(3)
  02a022c  lfs 29, 36(3)
  02a0230  lfs 26, 40(3)
  02a0234  fmr 1, 27
  02a0238  stw 30, 160(1)
  02a023c  stw 30, 164(1)
  02a0240  fmr 2, 28
  02a0244  stw 30, 168(1)
  02a0248  stw 30, 172(1)
  02a024c  bl 0xfcbe8
  02a0250  nop
  02a0254  stfs 1, 160(1)
  02a0258  fmr 2, 28
  02a025c  fmr 1, 27
  02a0260  bl 0xfcbe8
  02a0264  nop
  02a0268  stfs 1, 164(1)
  02a026c  fmr 1, 31
  02a0270  fmr 2, 29
  02a0274  bl 0xfcbe8
  02a0278  nop
  02a027c  lfs 2, 160(1)
  02a0280  addic 4, 1, 144
  02a0284  lfs 3, 128(1)
  02a0288  li 10, 0
  02a028c  lfs 4, 164(1)
  02a0290  addic 5, 1, 160
  02a0294  fadds 3, 2, 3
  02a0298  ori 3, 31, 0
  02a029c  lfs 2, 132(1)
  02a02a0  ori 6, 28, 0
  02a02a4  lfs 5, 136(1)
  02a02a8  li 7, 354
  02a02ac  fadds 4, 4, 2
  02a02b0  fadds 5, 1, 5
  02a02b4  fmr 1, 30
  02a02b8  fmr 2, 26
  02a02bc  stfs 3, 160(1)
  02a02c0  stfs 4, 164(1)
  02a02c4  stfs 5, 168(1)
  02a02c8  bl 0x28cce0
  02a02cc  nop
  02a02d0  addic 27, 27, 1
  02a02d4  cmpwi 27, 4
  02a02d8  bt 0, 0x2a0234
  02a02dc  lis 3, 42
  02a02e0  ori 27, 30, 0
  02a02e4  addi 3, 3, 152
  02a02e8  lfs 26, 44(3)
  02a02ec  lfs 30, 48(3)
  02a02f0  fmr 1, 27
  02a02f4  stw 30, 176(1)
  02a02f8  fmr 2, 28
  02a02fc  stw 30, 180(1)
  02a0300  stw 30, 184(1)
  02a0304  stw 30, 188(1)
  02a0308  bl 0xfcbe8
  02a030c  nop
  02a0310  stfs 1, 176(1)
  02a0314  fmr 1, 27
  02a0318  fmr 2, 28
  02a031c  bl 0xfcbe8
  02a0320  nop
  02a0324  stfs 1, 180(1)
  02a0328  fmr 2, 29
  02a032c  fmr 1, 31
  02a0330  bl 0xfcbe8
  02a0334  nop
  02a0338  lfs 2, 176(1)
  02a033c  lfs 3, 128(1)
  02a0340  li 3, 2
  02a0344  lfs 4, 180(1)
  02a0348  fadds 2, 2, 3
  02a034c  lfs 3, 132(1)
  02a0350  lfs 5, 136(1)
  02a0354  fadds 3, 4, 3
  02a0358  fadds 1, 1, 5
  02a035c  stfs 2, 176(1)
  02a0360  stfs 3, 180(1)
  02a0364  stfs 1, 184(1)
  02a0368  bl 0xfc620
  02a036c  nop
  02a0370  addic 7, 3, 355
  02a0374  addic 4, 1, 144
  02a0378  fmr 1, 26
  02a037c  ori 6, 28, 0
  02a0380  fmr 2, 30
  02a0384  extsw 7, 7
  02a0388  li 10, 0
  02a038c  addic 5, 1, 176
  02a0390  ori 3, 31, 0
  02a0394  bl 0x28cce0
  02a0398  nop
  02a039c  addic 27, 27, 1
  02a03a0  cmpwi 27, 4
  02a03a4  bt 0, 0x2a02f0
  02a03a8  clrlwi 3, 29, 24
  02a03ac  cmpwi 3, 0
  02a03b0  bt 2, 0x2a07bc
  02a03b4  lis 3, 149
  02a03b8  lfs 1, 20(31)
  02a03bc  addic 3, 3, 5056
  02a03c0  lfs 2, 324(3)
  02a03c4  lfs 3, 320(3)
  02a03c8  fsubs 1, 2, 1
  02a03cc  lfs 2, 16(31)
  02a03d0  fsubs 2, 3, 2
  02a03d4  lfs 3, 328(3)
  02a03d8  lfs 4, 24(31)
  02a03dc  fsubs 3, 3, 4
  02a03e0  fmuls 1, 1, 1
  02a03e4  lis 3, 42
  02a03e8  stw 30, 204(1)
  02a03ec  stw 30, 200(1)
  02a03f0  li 27, 10
  02a03f4  addi 3, 3, 152
  02a03f8  stw 30, 196(1)
  02a03fc  stw 30, 192(1)
  02a0400  fmadds 1, 2, 2, 1
  02a0404  lfs 30, 52(3)
  02a0408  fmadds 29, 3, 3, 1
  02a040c  fsqrts 29, 29
  02a0410  fcmpu 0, 29, 30
  02a0414  cror 6, 1, 2
  02a0418  bt 6, 0x2a042c
  02a041c  fmr 1, 29
  02a0420  bl 0x502758
  02a0424  nop
  02a0428  addic 27, 3, 2
  02a042c  lis 3, 42
  02a0430  cmpwi 27, 0
  02a0434  addi 3, 3, 152
  02a0438  ori 28, 30, 0
  02a043c  lfs 1, 56(3)
  02a0440  fsubs 2, 1, 29
  02a0444  fsub 1, 29, 1
  02a0448  fsel 31, 1, 31, 2
  02a044c  bf 1, 0x2a05f8
  02a0450  lis 3, 42
  02a0454  addic 29, 31, 16
  02a0458  addi 3, 3, 152
  02a045c  lfs 24, 60(3)
  02a0460  lfs 25, 64(3)
  02a0464  lfs 26, 68(3)
  02a0468  lfs 27, 72(3)
  02a046c  lfs 28, 76(3)
  02a0470  lfs 29, 80(3)
  02a0474  fmr 1, 30
  02a0478  fmr 2, 24
  02a047c  bl 0xfcbe8
  02a0480  nop
  02a0484  lis 3, 114
  02a0488  lis 5, 20224
  02a048c  lis 4, 20224
  02a0490  lis 6, 12287
  02a0494  ori 4, 4, 28671
  02a0498  lfs 2, -3052(3)
  02a049c  ori 3, 5, 36863
  02a04a0  lis 5, 20224
  02a04a4  ori 6, 6, 65535
  02a04a8  fmuls 3, 2, 31
  02a04ac  ori 5, 5, 32767
  02a04b0  stw 3, 208(1)
  02a04b4  stw 3, 212(1)
  02a04b8  lis 3, 12032
  02a04bc  stw 4, 220(1)
  02a04c0  lis 4, 12032
  02a04c4  stw 6, 224(1)
  02a04c8  ori 3, 3, 24447
  02a04cc  stw 5, 216(1)
  02a04d0  ori 4, 4, 20351
  02a04d4  lis 5, 12032
  02a04d8  stw 6, 228(1)
  02a04dc  lis 6, 12032
  02a04e0  fmsubs 23, 1, 2, 3
  02a04e4  ori 5, 5, 16255
  02a04e8  stw 3, 232(1)
  02a04ec  stw 4, 236(1)
  02a04f0  li 3, 6
  02a04f4  ori 4, 6, 79
  02a04f8  lis 6, 12032
  02a04fc  stw 5, 240(1)
  02a0500  lis 5, 16128
  02a0504  stw 4, 244(1)
  02a0508  stw 6, 248(1)
  02a050c  stw 5, 252(1)
  02a0510  bl 0xfc620
  02a0514  nop
  02a0518  sldi 3, 3, 2
  02a051c  addc 3, 3, 1
  02a0520  clrldi 4, 3, 32
  02a0524  li 3, 6
  02a0528  lwz 4, 208(4)
  02a052c  extsw 26, 4
  02a0530  bl 0xfc620
  02a0534  nop
  02a0538  lis 25, 114
  02a053c  sldi 3, 3, 2
  02a0540  addc 3, 3, 1
  02a0544  lfs 1, -3056(25)
  02a0548  clrldi 3, 3, 32
  02a054c  fmuls 2, 1, 26
  02a0550  fmuls 1, 1, 27
  02a0554  lwz 3, 232(3)
  02a0558  extsw 24, 3
  02a055c  fctiwz 2, 2
  02a0560  fctiwz 1, 1
  02a0564  stfd 2, 256(1)
  02a0568  lwz 3, 260(1)
  02a056c  stfd 1, 256(1)
  02a0570  lwz 4, 260(1)
  02a0574  extsw 3, 3
  02a0578  extsw 4, 4
  02a057c  bl 0xfe484
  02a0580  nop
  02a0584  lfs 1, -3056(25)
  02a0588  ori 25, 3, 0
  02a058c  fmuls 2, 1, 28
  02a0590  fmuls 1, 1, 29
  02a0594  fctiwz 2, 2
  02a0598  fctiwz 1, 1
  02a059c  stfd 2, 256(1)
  02a05a0  lwz 3, 260(1)
  02a05a4  stfd 1, 256(1)
  02a05a8  extsw 3, 3
  02a05ac  lwz 4, 260(1)
  02a05b0  extsw 4, 4
  02a05b4  bl 0xfe484
  02a05b8  nop
  02a05bc  ori 9, 3, 0
  02a05c0  std 30, 112(1)
  02a05c4  ori 8, 25, 0
  02a05c8  fmr 1, 25
  02a05cc  addic 4, 1, 192
  02a05d0  fmr 2, 23
  02a05d4  ori 3, 29, 0
  02a05d8  std 30, 120(1)
  02a05dc  ori 5, 26, 0
  02a05e0  ori 6, 24, 0
  02a05e4  bl 0x123390
  02a05e8  nop
  02a05ec  addic 28, 28, 1
  02a05f0  cmpw 28, 27
  02a05f4  bt 0, 0x2a0474
  02a05f8  lis 3, 161
  02a05fc  lis 4, 42
  02a0600  lis 5, 16243
  02a0604  addi 4, 4, 152
  02a0608  ori 5, 5, 13107
  02a060c  lwz 3, 1812(3)
  02a0610  srawi 6, 3, 31
  02a0614  lfs 30, 84(4)
  02a0618  srwi 7, 6, 1
  02a061c  lfs 31, 88(4)
  02a0620  xor 3, 7, 3
  02a0624  subc 3, 3, 6
  02a0628  cmpw 3, 5
  02a062c  bf 0, 0x2a06d0
  02a0630  lis 3, 42
  02a0634  lis 29, 114
  02a0638  addi 30, 3, 152
  02a063c  li 26, 32
  02a0640  addic 28, 31, 16
  02a0644  addic 27, 1, 192
  02a0648  ori 3, 31, 0
  02a064c  lfs 1, 68(30)
  02a0650  li 8, 127
  02a0654  lfs 2, -3056(29)
  02a0658  ori 4, 28, 0
  02a065c  std 26, 112(1)
  02a0660  ori 5, 27, 0
  02a0664  fmuls 2, 2, 1
  02a0668  li 9, 127
  02a066c  fmr 1, 30
  02a0670  li 10, 127
  02a0674  fctiwz 2, 2
  02a0678  stfd 2, 256(1)
  02a067c  lwz 7, 260(1)
  02a0680  extsw 7, 7
  02a0684  bl 0x1d4d88
  02a0688  nop
  02a068c  lfs 2, 92(30)
  02a0690  ori 5, 27, 0
  02a0694  lfs 3, -3056(29)
  02a0698  ori 3, 31, 0
  02a069c  std 26, 112(1)
  02a06a0  fmr 1, 31
  02a06a4  fmuls 2, 3, 2
  02a06a8  ori 4, 28, 0
  02a06ac  li 8, 127
  02a06b0  li 9, 32
  02a06b4  li 10, 0
  02a06b8  fctiwz 2, 2
  02a06bc  stfd 2, 256(1)
  02a06c0  lwz 7, 260(1)
  02a06c4  extsw 7, 7
  02a06c8  bl 0x1d4d88
  02a06cc  nop
  02a06d0  lis 3, 42
  02a06d4  lis 29, 114
  02a06d8  addi 30, 3, 152
  02a06dc  li 6, 48
  02a06e0  addic 28, 31, 16
  02a06e4  addic 27, 1, 192
  02a06e8  ori 3, 31, 0
  02a06ec  lfs 1, 72(30)
  02a06f0  li 8, 127
  02a06f4  lfs 2, -3056(29)
  02a06f8  ori 4, 28, 0
  02a06fc  std 6, 112(1)
  02a0700  ori 5, 27, 0
  02a0704  fmuls 2, 2, 1
  02a0708  li 9, 64
  02a070c  fmr 1, 30
  02a0710  li 10, 0
  02a0714  fctiwz 2, 2
  02a0718  stfd 2, 256(1)
  02a071c  lwz 7, 260(1)
  02a0720  extsw 7, 7
  02a0724  bl 0x1d4d88
  02a0728  nop
  02a072c  lfs 2, 96(30)
  02a0730  li 6, 64
  02a0734  lfs 3, -3056(29)
  02a0738  li 8, 96
  02a073c  fmr 1, 31
  02a0740  ori 3, 31, 0
  02a0744  fmuls 2, 3, 2
  02a0748  ori 4, 28, 0
  02a074c  std 6, 112(1)
  02a0750  ori 5, 27, 0
  02a0754  li 9, 16
  02a0758  li 10, 0
  02a075c  fctiwz 2, 2
  02a0760  stfd 2, 256(1)
  02a0764  lwz 7, 260(1)
  02a0768  extsw 7, 7
  02a076c  bl 0x1d4d88
  02a0770  nop
  02a0774  lfs 2, 104(30)
  02a0778  li 6, 32
  02a077c  lfs 3, -3056(29)
  02a0780  ori 3, 31, 0
  02a0784  lfs 1, 100(30)
  02a0788  ori 4, 28, 0
  02a078c  fmuls 2, 3, 2
  02a0790  ori 5, 27, 0
  02a0794  std 6, 112(1)
  02a0798  li 8, 32
  02a079c  li 9, 0
  02a07a0  li 10, 0
  02a07a4  fctiwz 2, 2
  02a07a8  stfd 2, 256(1)
  02a07ac  lwz 7, 260(1)
  02a07b0  extsw 7, 7
  02a07b4  bl 0x1d4d88
  02a07b8  nop
  02a07bc  ld 0, 432(1)
  02a07c0  mtlr 0
  02a07c4  lfd 23, 344(1)
  02a07c8  lfd 24, 352(1)
  02a07cc  lfd 25, 360(1)
  02a07d0  lfd 26, 368(1)
  02a07d4  lfd 27, 376(1)
  02a07d8  lfd 28, 384(1)
  02a07dc  lfd 29, 392(1)
  02a07e0  lfd 30, 400(1)
  02a07e4  lfd 31, 408(1)
  02a07e8  ld 24, 280(1)
  02a07ec  ld 25, 288(1)
  02a07f0  ld 26, 296(1)
  02a07f4  ld 27, 304(1)
  02a07f8  ld 28, 312(1)
  02a07fc  ld 29, 320(1)
  02a0800  ld 30, 328(1)
  02a0804  ld 31, 336(1)
  02a0808  addi 1, 1, 416
  02a080c  blr

M158_002a0818:   # 0x2a0818, 0x1dc bytes
  02a0818  stdu 1, -160(1)
  02a081c  mflr 0
  02a0820  std 0, 176(1)
  02a0824  std 29, 136(1)
  02a0828  std 30, 144(1)
  02a082c  ori 29, 3, 0
  02a0830  lbz 3, 32(3)
  02a0834  std 31, 152(1)
  02a0838  ori 30, 4, 0
  02a083c  ori 31, 5, 0
  02a0840  std 28, 128(1)
  02a0844  cmpwi 3, 2
  02a0848  bt 2, 0x2a09c4
  02a084c  ori 3, 29, 0
  02a0850  lis 4, 51
  02a0854  li 5, 0
  02a0858  bl 0x10675c
  02a085c  nop
  02a0860  ori 28, 3, 0
  02a0864  cmpwi 28, 0
  02a0868  bt 2, 0x2a0890
  02a086c  lfs 1, 44(28)
  02a0870  lhz 4, 166(29)
  02a0874  lis 3, 101
  02a0878  addic 3, 3, 22856
  02a087c  extsh 4, 4
  02a0880  stfd 1, 64(1)
  02a0884  ld 5, 64(1)
  02a0888  bl 0x5cd098
  02a088c  nop
  02a0890  ori 3, 29, 0
  02a0894  ori 4, 28, 0
  02a0898  addic 7, 1, 112
  02a089c  li 9, 0
  02a08a0  li 10, 4
  02a08a4  ori 5, 31, 0
  02a08a8  li 6, 0
  02a08ac  li 8, 0
  02a08b0  bl 0x106840
  02a08b4  nop
  02a08b8  ori 4, 3, 0
  02a08bc  lwz 3, 112(1)
  02a08c0  cmpwi 4, 0
  02a08c4  bf 1, 0x2a08d8
  02a08c8  cmpwi 4, 2
  02a08cc  bt 1, 0x2a08d8
  02a08d0  li 4, 0
  02a08d4  stw 4, 0(31)
  02a08d8  cmpwi 3, 1
  02a08dc  bf 1, 0x2a09bc
  02a08e0  lwz 3, 0(31)
  02a08e4  lwz 4, 44(28)
  02a08e8  srawi 5, 3, 31
  02a08ec  lfs 2, 0(31)
  02a08f0  srawi 6, 4, 31
  02a08f4  lfs 1, 44(28)
  02a08f8  srwi 7, 5, 1
  02a08fc  srwi 8, 6, 1
  02a0900  xor 3, 7, 3
  02a0904  xor 4, 8, 4
  02a0908  subc 3, 3, 5
  02a090c  subc 4, 4, 6
  02a0910  cmpw 3, 4
  02a0914  bt 1, 0x2a0964
  02a0918  li 6, 0
  02a091c  lhz 7, 52(29)
  02a0920  li 5, -1
  02a0924  rlwimi 7, 6, 0, 19, 19
  02a0928  ori 3, 29, 0
  02a092c  stw 6, 0(31)
  02a0930  li 4, 0
  02a0934  sth 7, 52(29)
  02a0938  bl 0xfd8d0
  02a093c  nop
  02a0940  li 5, 120
  02a0944  ori 3, 29, 0
  02a0948  addic 4, 30, 96
  02a094c  stb 5, 103(30)
  02a0950  bl 0x10c808
  02a0954  nop
  02a0958  li 3, 2
  02a095c  stb 3, 32(29)
  02a0960  b 0x2a09bc
  02a0964  fsubs 1, 2, 1
  02a0968  lis 3, 42
  02a096c  vspltisw 2, -1
  02a0970  li 4, 250
  02a0974  addi 3, 3, 2064
  02a0978  lis 5, 114
  02a097c  li 6, -3056
  02a0980  vslw 2, 2, 2
  02a0984  stfs 1, 0(31)
  02a0988  stb 4, 103(30)
  02a098c  lvlx 3, 0, 3
  02a0990  lvlx 4, 6, 5
  02a0994  vspltw 3, 3, 0
  02a0998  li 5, 38
  02a099c  addic 4, 30, 96
  02a09a0  vmaddfp 2, 4, 3, 2
  02a09a4  ori 3, 29, 0
  02a09a8  vctsxs 2, 2, 0
  02a09ac  vsplth 2, 2, 1
  02a09b0  stvehx 2, 5, 30
  02a09b4  bl 0x10c808
  02a09b8  nop
  02a09bc  li 3, 255
  02a09c0  stb 3, 164(29)
  02a09c4  addic 4, 30, 96
  02a09c8  ori 3, 29, 0
  02a09cc  bl 0x10c9a0
  02a09d0  nop
  02a09d4  ld 0, 176(1)
  02a09d8  mtlr 0
  02a09dc  ld 28, 128(1)
  02a09e0  ld 29, 136(1)
  02a09e4  ld 30, 144(1)
  02a09e8  ld 31, 152(1)
  02a09ec  addi 1, 1, 160
  02a09f0  blr

UpdateMoby_158:   # 0x2a0a10, 0x1ac bytes
  02a0a10  stdu 1, -288(1)
  02a0a14  mflr 0
  02a0a18  std 0, 304(1)
  02a0a1c  stfd 27, 248(1)
  02a0a20  stfd 28, 256(1)
  02a0a24  stfd 29, 264(1)
  02a0a28  stfd 30, 272(1)
  02a0a2c  stfd 31, 280(1)
  02a0a30  std 31, 240(1)
  02a0a34  ori 31, 3, 0
  02a0a38  lbz 4, 32(31)
  02a0a3c  lwz 3, 120(31)
  02a0a40  cmpwi 4, 0
  02a0a44  cmpwi 1, 4, 2
  02a0a48  cmpwi 6, 4, 1
  02a0a4c  std 30, 232(1)
  02a0a50  std 29, 224(1)
  02a0a54  std 28, 216(1)
  02a0a58  cmpwi 7, 4, -1
  02a0a5c  bt 1, 0x2a0a68
  02a0a60  bf 29, 0x2a0b88
  02a0a64  b 0x2a0a74
  02a0a68  bf 25, 0x2a0a80
  02a0a6c  bf 5, 0x2a0a94
  02a0a70  b 0x2a0b88
  02a0a74  li 3, 1
  02a0a78  stb 3, 32(31)
  02a0a7c  b 0x2a0b88
  02a0a80  ori 4, 3, 0
  02a0a84  ori 3, 31, 0
  02a0a88  addic 5, 4, 32
  02a0a8c  bl 0x2a0818
  02a0a90  b 0x2a0b88
  02a0a94  lis 3, 42
  02a0a98  li 29, 0
  02a0a9c  addi 28, 3, 2548
  02a0aa0  lis 3, 114
  02a0aa4  li 7, -1
  02a0aa8  li 6, 1
  02a0aac  addic 4, 1, 192
  02a0ab0  lfs 1, 0(28)
  02a0ab4  li 5, 0
  02a0ab8  stw 29, 192(1)
  02a0abc  li 8, 10
  02a0ac0  stw 29, 196(1)
  02a0ac4  li 9, 3
  02a0ac8  stw 29, 200(1)
  02a0acc  li 10, 16
  02a0ad0  stw 29, 204(1)
  02a0ad4  fmr 5, 1
  02a0ad8  lfs 2, 4(28)
  02a0adc  lfs 3, -3052(3)
  02a0ae0  std 7, 144(1)
  02a0ae4  ori 3, 31, 0
  02a0ae8  fmuls 3, 3, 2
  02a0aec  std 6, 160(1)
  02a0af0  std 6, 168(1)
  02a0af4  fmr 2, 1
  02a0af8  std 7, 176(1)
  02a0afc  std 29, 184(1)
  02a0b00  stfs 3, 200(1)
  02a0b04  lfs 3, 8(28)
  02a0b08  lfs 4, 12(28)
  02a0b0c  lfs 6, 16(28)
  02a0b10  lfs 7, 20(28)
  02a0b14  bl 0x10e030
  02a0b18  nop
  02a0b1c  lfs 27, 16(31)
  02a0b20  lfs 28, 20(31)
  02a0b24  addic 30, 31, 16
  02a0b28  lfs 29, 24(31)
  02a0b2c  lfs 31, 24(28)
  02a0b30  lfs 30, 28(31)
  02a0b34  stfs 27, 16(31)
  02a0b38  stfs 28, 20(31)
  02a0b3c  ori 3, 30, 0
  02a0b40  stfs 29, 24(31)
  02a0b44  fmr 1, 31
  02a0b48  stfs 30, 28(31)
  02a0b4c  bl 0x110950
  02a0b50  nop
  02a0b54  ori 3, 31, 0
  02a0b58  li 4, 1
  02a0b5c  bl 0x2a0108
  02a0b60  addic 29, 29, 1
  02a0b64  cmpwi 29, 5
  02a0b68  bt 0, 0x2a0b34
  02a0b6c  stfs 30, 28(31)
  02a0b70  ori 3, 31, 0
  02a0b74  stfs 29, 24(31)
  02a0b78  stfs 28, 20(31)
  02a0b7c  stfs 27, 16(31)
  02a0b80  bl 0xefb38
  02a0b84  nop
  02a0b88  ld 0, 304(1)
  02a0b8c  mtlr 0
  02a0b90  lfd 27, 248(1)
  02a0b94  lfd 28, 256(1)
  02a0b98  lfd 29, 264(1)
  02a0b9c  lfd 30, 272(1)
  02a0ba0  lfd 31, 280(1)
  02a0ba4  ld 28, 216(1)
  02a0ba8  ld 29, 224(1)
  02a0bac  ld 30, 232(1)
  02a0bb0  ld 31, 240(1)
  02a0bb4  addi 1, 1, 288
  02a0bb8  blr
