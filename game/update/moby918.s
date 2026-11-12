# game/update/moby918.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M918_004b01cc:   # 0x4b01cc, 0x14 bytes
  04b01cc  lis 3, 143
  04b01d0  lis 4, 1
  04b01d4  addic 3, 3, 17064
  04b01d8  stw 4, 72(3)
  04b01dc  blr

M918_004b0218:   # 0x4b0218, 0x2cc bytes
  04b0218  stdu 1, -368(1)
  04b021c  mflr 0
  04b0220  std 0, 384(1)
  04b0224  stfd 30, 352(1)
  04b0228  stfd 31, 360(1)
  04b022c  addi 0, 1, 112
  04b0230  stvx 20, 0, 0
  04b0234  addic 0, 0, 16
  04b0238  stvx 21, 0, 0
  04b023c  addic 0, 0, 16
  04b0240  stvx 22, 0, 0
  04b0244  addic 0, 0, 16
  04b0248  stvx 23, 0, 0
  04b024c  addic 0, 0, 16
  04b0250  stvx 24, 0, 0
  04b0254  addic 0, 0, 16
  04b0258  stvx 25, 0, 0
  04b025c  addic 0, 0, 16
  04b0260  stvx 26, 0, 0
  04b0264  addic 0, 0, 16
  04b0268  stvx 27, 0, 0
  04b026c  addic 0, 0, 16
  04b0270  stvx 28, 0, 0
  04b0274  addic 0, 0, 16
  04b0278  stvx 29, 0, 0
  04b027c  addic 0, 0, 16
  04b0280  stvx 30, 0, 0
  04b0284  addic 0, 0, 16
  04b0288  stvx 31, 0, 0
  04b028c  lis 5, 75
  04b0290  li 6, 4
  04b0294  addi 5, 5, 480
  04b0298  li 7, 8
  04b029c  li 9, 12
  04b02a0  li 10, 16
  04b02a4  std 29, 328(1)
  04b02a8  li 8, 20
  04b02ac  ori 29, 4, 0
  04b02b0  lvlx 31, 0, 5
  04b02b4  li 4, 24
  04b02b8  lvlx 30, 6, 5
  04b02bc  li 6, 28
  04b02c0  lvlx 29, 7, 5
  04b02c4  li 11, 32
  04b02c8  lvlx 28, 9, 5
  04b02cc  li 7, 36
  04b02d0  lvlx 26, 10, 5
  04b02d4  lvlx 22, 8, 5
  04b02d8  li 9, 48
  04b02dc  lvlx 23, 4, 5
  04b02e0  li 8, 52
  04b02e4  std 30, 336(1)
  04b02e8  lvlx 24, 6, 5
  04b02ec  li 30, 0
  04b02f0  std 28, 320(1)
  04b02f4  lvlx 25, 11, 5
  04b02f8  addic 28, 29, 432
  04b02fc  std 27, 312(1)
  04b0300  lvlx 21, 7, 5
  04b0304  addic 27, 29, 420
  04b0308  std 31, 344(1)
  04b030c  lfs 31, 40(5)
  04b0310  ori 31, 3, 0
  04b0314  lfs 30, 44(5)
  04b0318  lvlx 27, 9, 5
  04b031c  lvlx 20, 8, 5
  04b0320  vspltw 31, 31, 0
  04b0324  vspltw 30, 30, 0
  04b0328  vspltw 29, 29, 0
  04b032c  vspltw 28, 28, 0
  04b0330  vspltw 26, 26, 0
  04b0334  vspltw 22, 22, 0
  04b0338  vspltw 23, 23, 0
  04b033c  vspltw 24, 24, 0
  04b0340  vspltw 25, 25, 0
  04b0344  vspltw 21, 21, 0
  04b0348  vspltw 27, 27, 0
  04b034c  vspltw 20, 20, 0
  04b0350  lis 3, 270
  04b0354  li 4, 18368
  04b0358  lwz 5, 18368(3)
  04b035c  lvlx 2, 4, 3
  04b0360  cmpwi 5, 0
  04b0364  bt 2, 0x4b0418
  04b0368  lis 3, 161
  04b036c  li 4, 1808
  04b0370  vspltisw 3, -1
  04b0374  vspltisw 5, -1
  04b0378  vcfsx 2, 2, 0
  04b037c  vspltisw 6, -1
  04b0380  vslw 3, 3, 3
  04b0384  lvlx 4, 4, 3
  04b0388  vand 4, 4, 20
  04b038c  vslw 5, 5, 5
  04b0390  vcfsx 4, 4, 0
  04b0394  vspltisw 9, -1
  04b0398  vmaddfp 2, 2, 31, 30
  04b039c  vmaddfp 3, 4, 27, 3
  04b03a0  vslw 4, 6, 6
  04b03a4  vspltisw 6, -1
  04b03a8  vslw 6, 6, 6
  04b03ac  vsubfp 7, 28, 3
  04b03b0  vsubfp 8, 26, 3
  04b03b4  vcmpgtfp 10, 7, 3
  04b03b8  vsel 3, 7, 3, 10
  04b03bc  vcmpgtfp 7, 3, 8
  04b03c0  vsel 3, 8, 3, 7
  04b03c4  vslw 7, 9, 9
  04b03c8  vcmpgtfp 9, 2, 29
  04b03cc  vmaddfp 5, 3, 3, 5
  04b03d0  vsel 2, 2, 29, 9
  04b03d4  vspltisw 8, -1
  04b03d8  vspltisw 9, -1
  04b03dc  vspltw 2, 2, 0
  04b03e0  vslw 8, 8, 8
  04b03e4  stvewx 2, 0, 28
  04b03e8  vmaddfp 4, 5, 3, 4
  04b03ec  vmaddfp 6, 5, 4, 6
  04b03f0  vmaddfp 3, 4, 22, 3
  04b03f4  vslw 4, 9, 9
  04b03f8  vmaddfp 7, 5, 6, 7
  04b03fc  vmaddfp 3, 6, 23, 3
  04b0400  vmaddfp 2, 5, 7, 8
  04b0404  vmaddfp 3, 7, 24, 3
  04b0408  vmaddfp 2, 2, 25, 3
  04b040c  vmaddfp 2, 2, 21, 4
  04b0410  vspltw 2, 2, 0
  04b0414  stvewx 2, 0, 27
  04b0418  lis 6, 114
  04b041c  addic 5, 30, 2
  04b0420  ori 3, 31, 0
  04b0424  addic 4, 29, 320
  04b0428  extsw 5, 5
  04b042c  lfs 2, -3060(6)
  04b0430  fmuls 1, 2, 31
  04b0434  fmuls 2, 2, 30
  04b0438  bl 0x1167c8
  04b043c  nop
  04b0440  addic 30, 30, 1
  04b0444  addic 28, 28, 128
  04b0448  cmpwi 30, 2
  04b044c  addic 27, 27, 128
  04b0450  addic 29, 29, 128
  04b0454  bt 0, 0x4b0350
  04b0458  li 0, 112
  04b045c  lvx 20, 1, 0
  04b0460  addic 0, 0, 16
  04b0464  lvx 21, 1, 0
  04b0468  addic 0, 0, 16
  04b046c  lvx 22, 1, 0
  04b0470  addic 0, 0, 16
  04b0474  lvx 23, 1, 0
  04b0478  addic 0, 0, 16
  04b047c  lvx 24, 1, 0
  04b0480  addic 0, 0, 16
  04b0484  lvx 25, 1, 0
  04b0488  addic 0, 0, 16
  04b048c  lvx 26, 1, 0
  04b0490  addic 0, 0, 16
  04b0494  lvx 27, 1, 0
  04b0498  addic 0, 0, 16
  04b049c  lvx 28, 1, 0
  04b04a0  addic 0, 0, 16
  04b04a4  lvx 29, 1, 0
  04b04a8  addic 0, 0, 16
  04b04ac  lvx 30, 1, 0
  04b04b0  addic 0, 0, 16
  04b04b4  lvx 31, 1, 0
  04b04b8  ld 0, 384(1)
  04b04bc  mtlr 0
  04b04c0  lfd 30, 352(1)
  04b04c4  lfd 31, 360(1)
  04b04c8  ld 27, 312(1)
  04b04cc  ld 28, 320(1)
  04b04d0  ld 29, 328(1)
  04b04d4  ld 30, 336(1)
  04b04d8  ld 31, 344(1)
  04b04dc  addi 1, 1, 368
  04b04e0  blr

M918_004b04e4:   # 0x4b04e4, 0x134 bytes
  04b04e4  stdu 1, -160(1)
  04b04e8  mflr 0
  04b04ec  std 0, 176(1)
  04b04f0  std 31, 152(1)
  04b04f4  lis 4, 161
  04b04f8  ori 31, 3, 0
  04b04fc  lwz 3, 1800(4)
  04b0500  std 30, 144(1)
  04b0504  std 29, 136(1)
  04b0508  std 28, 128(1)
  04b050c  std 27, 120(1)
  04b0510  std 26, 112(1)
  04b0514  cmpwi 3, 2
  04b0518  bf 2, 0x4b05f0
  04b051c  lis 3, 151
  04b0520  lis 4, 270
  04b0524  lbz 3, -16268(3)
  04b0528  lwz 4, 18368(4)
  04b052c  or 3, 3, 4
  04b0530  cmpwi 3, 0
  04b0534  bt 2, 0x4b05f0
  04b0538  lis 28, 150
  04b053c  li 26, 0
  04b0540  addic 28, 28, -12976
  04b0544  lhz 3, 68(28)
  04b0548  extsh 3, 3
  04b054c  cmpwi 3, 0
  04b0550  bf 1, 0x4b05f0
  04b0554  lis 29, 162
  04b0558  ori 30, 28, 0
  04b055c  addic 29, 29, -16512
  04b0560  lwz 27, 376(30)
  04b0564  lhz 3, 166(31)
  04b0568  extsh 3, 3
  04b056c  lhz 4, 166(27)
  04b0570  extsh 4, 4
  04b0574  cmpw 4, 3
  04b0578  bf 2, 0x4b05d8
  04b057c  lis 3, 151
  04b0580  lbz 3, -16268(3)
  04b0584  cmpwi 3, 0
  04b0588  bt 2, 0x4b05bc
  04b058c  lbz 3, 1(29)
  04b0590  cmpwi 3, 0
  04b0594  bf 2, 0x4b05bc
  04b0598  ori 3, 27, 0
  04b059c  li 4, 0
  04b05a0  ori 5, 29, 0
  04b05a4  bl 0xf0ea8
  04b05a8  nop
  04b05ac  lis 3, 16432
  04b05b0  stw 3, 32(29)
  04b05b4  stw 3, 36(29)
  04b05b8  stw 3, 40(29)
  04b05bc  lis 3, 270
  04b05c0  lwz 3, 18368(3)
  04b05c4  cmpwi 3, 0
  04b05c8  bt 2, 0x4b05d8
  04b05cc  ori 3, 27, 0
  04b05d0  lwz 4, 120(31)
  04b05d4  bl 0x4b0218
  04b05d8  lhz 3, 68(28)
  04b05dc  addic 26, 26, 1
  04b05e0  addic 30, 30, 4
  04b05e4  extsh 3, 3
  04b05e8  cmpw 26, 3
  04b05ec  bt 0, 0x4b0560
  04b05f0  ld 0, 176(1)
  04b05f4  mtlr 0
  04b05f8  ld 26, 112(1)
  04b05fc  ld 27, 120(1)
  04b0600  ld 28, 128(1)
  04b0604  ld 29, 136(1)
  04b0608  ld 30, 144(1)
  04b060c  ld 31, 152(1)
  04b0610  addi 1, 1, 160
  04b0614  blr

UpdateMoby_918:   # 0x4b0698, 0x127c bytes
  04b0698  stdu 1, -400(1)
  04b069c  mflr 0
  04b06a0  std 0, 416(1)
  04b06a4  stfd 27, 360(1)
  04b06a8  stfd 28, 368(1)
  04b06ac  stfd 29, 376(1)
  04b06b0  stfd 30, 384(1)
  04b06b4  stfd 31, 392(1)
  04b06b8  std 31, 352(1)
  04b06bc  lis 4, 161
  04b06c0  ori 31, 3, 0
  04b06c4  std 28, 328(1)
  04b06c8  lwz 4, 1800(4)
  04b06cc  lwz 28, 120(3)
  04b06d0  std 30, 344(1)
  04b06d4  std 29, 336(1)
  04b06d8  std 27, 320(1)
  04b06dc  std 26, 312(1)
  04b06e0  std 25, 304(1)
  04b06e4  cmpwi 4, 2
  04b06e8  bf 2, 0x4b07c0
  04b06ec  lis 3, 151
  04b06f0  lis 4, 270
  04b06f4  lbz 3, -16268(3)
  04b06f8  lwz 4, 18368(4)
  04b06fc  or 3, 3, 4
  04b0700  cmpwi 3, 0
  04b0704  bt 2, 0x4b07c0
  04b0708  lis 27, 150
  04b070c  li 30, 0
  04b0710  addic 27, 27, -12976
  04b0714  lhz 3, 68(27)
  04b0718  extsh 3, 3
  04b071c  cmpwi 3, 0
  04b0720  bf 1, 0x4b07c0
  04b0724  lis 26, 162
  04b0728  ori 25, 27, 0
  04b072c  addic 26, 26, -16512
  04b0730  lwz 29, 376(25)
  04b0734  lhz 3, 166(31)
  04b0738  extsh 3, 3
  04b073c  lhz 4, 166(29)
  04b0740  extsh 4, 4
  04b0744  cmpw 4, 3
  04b0748  bf 2, 0x4b07a8
  04b074c  lis 3, 151
  04b0750  lbz 3, -16268(3)
  04b0754  cmpwi 3, 0
  04b0758  bt 2, 0x4b078c
  04b075c  lbz 3, 1(26)
  04b0760  cmpwi 3, 0
  04b0764  bf 2, 0x4b078c
  04b0768  ori 3, 29, 0
  04b076c  li 4, 0
  04b0770  ori 5, 26, 0
  04b0774  bl 0xf0ea8
  04b0778  nop
  04b077c  lis 3, 16432
  04b0780  stw 3, 32(26)
  04b0784  stw 3, 36(26)
  04b0788  stw 3, 40(26)
  04b078c  lis 3, 270
  04b0790  lwz 3, 18368(3)
  04b0794  cmpwi 3, 0
  04b0798  bt 2, 0x4b07a8
  04b079c  ori 3, 29, 0
  04b07a0  lwz 4, 120(31)
  04b07a4  bl 0x4b0218
  04b07a8  lhz 3, 68(27)
  04b07ac  addic 30, 30, 1
  04b07b0  extsh 3, 3
  04b07b4  addic 25, 25, 4
  04b07b8  cmpw 30, 3
  04b07bc  bt 0, 0x4b0730
  04b07c0  lbz 3, 32(31)
  04b07c4  cmpwi 3, 1
  04b07c8  cmpwi 1, 3, -1
  04b07cc  cmpwi 6, 3, 0
  04b07d0  cmpwi 7, 3, 3
  04b07d4  bt 1, 0x4b07e4
  04b07d8  bf 5, 0x4b0ce4
  04b07dc  bf 25, 0x4b07ec
  04b07e0  b 0x4b08d0
  04b07e4  bt 30, 0x4b0c34
  04b07e8  b 0x4b0ce4
  04b07ec  lbz 3, 83(31)
  04b07f0  cmpwi 3, 0
  04b07f4  bt 2, 0x4b0834
  04b07f8  lis 3, 75
  04b07fc  lis 4, 114
  04b0800  addi 3, 3, 1560
  04b0804  li 5, 0
  04b0808  lfs 1, 0(3)
  04b080c  lfs 2, -3056(4)
  04b0810  ori 3, 31, 0
  04b0814  li 4, 0
  04b0818  fmuls 1, 2, 1
  04b081c  fctiwz 1, 1
  04b0820  stfd 1, 288(1)
  04b0824  lwz 6, 292(1)
  04b0828  extsw 6, 6
  04b082c  bl 0xfddc0
  04b0830  nop
  04b0834  lis 3, 75
  04b0838  li 4, 0
  04b083c  addi 5, 3, 1560
  04b0840  addic 3, 31, 16
  04b0844  lfs 1, 4(5)
  04b0848  bl 0xffb70
  04b084c  nop
  04b0850  lis 3, 151
  04b0854  stfs 1, 24(31)
  04b0858  addic 3, 3, -15796
  04b085c  lwz 4, 268(3)
  04b0860  cmpwi 4, 0
  04b0864  bt 2, 0x4b0874
  04b0868  lwz 3, 284(3)
  04b086c  cmpwi 3, 0
  04b0870  bf 2, 0x4b089c
  04b0874  lis 4, 144
  04b0878  ori 3, 31, 0
  04b087c  addic 30, 4, -24148
  04b0880  bl 0x4d3698
  04b0884  nop
  04b0888  sldi 3, 3, 2
  04b088c  li 4, 13
  04b0890  extsw 3, 3
  04b0894  lwzx 3, 30, 3
  04b0898  sth 4, 4(3)
  04b089c  lis 4, 102
  04b08a0  li 6, 1
  04b08a4  addic 5, 4, -30240
  04b08a8  ori 3, 31, 0
  04b08ac  ori 4, 28, 0
  04b08b0  stw 5, 32(28)
  04b08b4  stb 6, 32(31)
  04b08b8  bl 0x4d3720
  04b08bc  nop
  04b08c0  ori 3, 31, 0
  04b08c4  bl 0x106308
  04b08c8  nop
  04b08cc  b 0x4b0d18
  04b08d0  lis 30, 151
  04b08d4  addic 30, 30, -25376
  04b08d8  lwz 3, 8324(30)
  04b08dc  cmpwi 3, 29
  04b08e0  bt 2, 0x4b09c0
  04b08e4  ori 3, 31, 0
  04b08e8  ori 4, 28, 0
  04b08ec  bl 0x4d3870
  04b08f0  nop
  04b08f4  cmpwi 3, 0
  04b08f8  bt 2, 0x4b091c
  04b08fc  lis 3, 75
  04b0900  addi 4, 3, 1560
  04b0904  ori 3, 31, 0
  04b0908  lfs 1, 8(4)
  04b090c  bl 0x119488
  04b0910  nop
  04b0914  li 3, 3
  04b0918  stb 3, 32(31)
  04b091c  lhz 3, 54(28)
  04b0920  cmpwi 3, 3
  04b0924  bf 2, 0x4b09c0
  04b0928  lis 4, 161
  04b092c  li 6, 2
  04b0930  sth 3, 4(28)
  04b0934  lis 8, 143
  04b0938  li 7, 0
  04b093c  addic 29, 8, 17184
  04b0940  lwz 8, 1808(4)
  04b0944  sth 6, 54(28)
  04b0948  li 5, 0
  04b094c  stw 8, 56(28)
  04b0950  ori 3, 29, 0
  04b0954  stb 7, 188(31)
  04b0958  addic 4, 29, 16
  04b095c  li 6, 1
  04b0960  bl 0xa0c38
  04b0964  nop
  04b0968  lfs 1, 32(29)
  04b096c  lfs 2, 36(29)
  04b0970  li 5, 1
  04b0974  stfs 1, 7424(30)
  04b0978  li 3, 2
  04b097c  lfs 1, 40(29)
  04b0980  li 4, 6
  04b0984  stfs 2, 7428(30)
  04b0988  lfs 2, 44(29)
  04b098c  stfs 1, 7432(30)
  04b0990  lfs 1, 48(29)
  04b0994  stfs 2, 7436(30)
  04b0998  lfs 2, 52(29)
  04b099c  stfs 1, 7440(30)
  04b09a0  lfs 1, 56(29)
  04b09a4  stfs 2, 7444(30)
  04b09a8  lfs 2, 60(29)
  04b09ac  stfs 1, 7448(30)
  04b09b0  stfs 2, 7452(30)
  04b09b4  stb 5, 8364(30)
  04b09b8  bl 0x11ccc8
  04b09bc  nop
  04b09c0  lbz 3, 188(31)
  04b09c4  cmpwi 3, 1
  04b09c8  cmpwi 1, 3, 2
  04b09cc  cmpwi 6, 3, 3
  04b09d0  bf 2, 0x4b0a44
  04b09d4  lis 3, 143
  04b09d8  li 5, 0
  04b09dc  addic 4, 3, 17184
  04b09e0  li 6, 1
  04b09e4  addic 3, 4, 32
  04b09e8  addic 4, 4, 48
  04b09ec  bl 0xa0c38
  04b09f0  nop
  04b09f4  li 3, 0
  04b09f8  li 4, 8
  04b09fc  bl 0x11ccc8
  04b0a00  nop
  04b0a04  lis 3, 151
  04b0a08  lbz 3, -16400(3)
  04b0a0c  cmpwi 3, 0
  04b0a10  bf 2, 0x4b0a38
  04b0a14  lis 3, 161
  04b0a18  lhz 6, 54(28)
  04b0a1c  li 5, 4
  04b0a20  li 4, 1
  04b0a24  lwz 3, 1808(3)
  04b0a28  sth 6, 4(28)
  04b0a2c  sth 5, 54(28)
  04b0a30  stw 3, 56(28)
  04b0a34  stb 4, 8(28)
  04b0a38  li 3, 0
  04b0a3c  stb 3, 188(31)
  04b0a40  b 0x4b0b00
  04b0a44  bf 6, 0x4b0a84
  04b0a48  li 3, 0
  04b0a4c  li 4, 8
  04b0a50  bl 0x11ccc8
  04b0a54  nop
  04b0a58  lis 3, 143
  04b0a5c  li 5, 0
  04b0a60  addic 4, 3, 17184
  04b0a64  li 6, 1
  04b0a68  addic 3, 4, 32
  04b0a6c  addic 4, 4, 48
  04b0a70  bl 0xa0c38
  04b0a74  nop
  04b0a78  li 3, 0
  04b0a7c  stb 3, 188(31)
  04b0a80  b 0x4b0b00
  04b0a84  bf 26, 0x4b0b00
  04b0a88  li 3, 0
  04b0a8c  li 4, 8
  04b0a90  bl 0x11ccc8
  04b0a94  nop
  04b0a98  lis 3, 143
  04b0a9c  li 6, 0
  04b0aa0  addic 29, 3, 17184
  04b0aa4  li 5, 0
  04b0aa8  addic 4, 29, 16
  04b0aac  stb 6, 188(31)
  04b0ab0  ori 3, 29, 0
  04b0ab4  li 6, 1
  04b0ab8  bl 0xa0c38
  04b0abc  nop
  04b0ac0  lfs 1, 32(29)
  04b0ac4  lfs 2, 36(29)
  04b0ac8  stfs 1, 7424(30)
  04b0acc  lfs 1, 40(29)
  04b0ad0  stfs 2, 7428(30)
  04b0ad4  lfs 2, 44(29)
  04b0ad8  stfs 1, 7432(30)
  04b0adc  lfs 1, 48(29)
  04b0ae0  stfs 2, 7436(30)
  04b0ae4  lfs 2, 52(29)
  04b0ae8  stfs 1, 7440(30)
  04b0aec  lfs 1, 56(29)
  04b0af0  stfs 2, 7444(30)
  04b0af4  lfs 2, 60(29)
  04b0af8  stfs 1, 7448(30)
  04b0afc  stfs 2, 7452(30)
  04b0b00  lbz 3, 83(31)
  04b0b04  cmpwi 3, 0
  04b0b08  cmpwi 1, 3, 2
  04b0b0c  bt 2, 0x4b0b14
  04b0b10  bf 6, 0x4b0ba4
  04b0b14  addic 3, 28, 580
  04b0b18  bl 0x4fff60
  04b0b1c  nop
  04b0b20  cmpwi 3, 0
  04b0b24  bt 2, 0x4b0ba4
  04b0b28  lis 3, 75
  04b0b2c  addi 3, 3, 1560
  04b0b30  lfs 1, 12(3)
  04b0b34  lfs 2, 16(3)
  04b0b38  bl 0xfcbe8
  04b0b3c  nop
  04b0b40  lis 3, 114
  04b0b44  lfs 2, -3056(3)
  04b0b48  fmuls 1, 1, 2
  04b0b4c  bl 0x502758
  04b0b50  nop
  04b0b54  stw 3, 580(28)
  04b0b58  lbz 3, 83(31)
  04b0b5c  cmpwi 3, 1
  04b0b60  bt 2, 0x4b0d18
  04b0b64  lis 3, 75
  04b0b68  lis 4, 114
  04b0b6c  addi 3, 3, 1560
  04b0b70  li 5, 0
  04b0b74  lfs 1, 20(3)
  04b0b78  lfs 2, -3056(4)
  04b0b7c  ori 3, 31, 0
  04b0b80  fmuls 1, 2, 1
  04b0b84  li 4, 1
  04b0b88  fctiwz 1, 1
  04b0b8c  stfd 1, 288(1)
  04b0b90  lwz 6, 292(1)
  04b0b94  extsw 6, 6
  04b0b98  bl 0xfddc0
  04b0b9c  nop
  04b0ba0  b 0x4b0d18
  04b0ba4  lbz 3, 112(31)
  04b0ba8  rlwinm 3, 3, 0, 30, 30
  04b0bac  cmpwi 3, 0
  04b0bb0  bt 2, 0x4b0d18
  04b0bb4  li 3, 2
  04b0bb8  bl 0xfc620
  04b0bbc  nop
  04b0bc0  li 4, 0
  04b0bc4  li 6, 0
  04b0bc8  lbz 5, 83(31)
  04b0bcc  subc 3, 4, 3
  04b0bd0  li 4, 2
  04b0bd4  cntlzw 3, 3
  04b0bd8  subc 4, 4, 6
  04b0bdc  sldi 3, 3, 58
  04b0be0  sradi 3, 3, 63
  04b0be4  and 3, 3, 4
  04b0be8  addc 3, 6, 3
  04b0bec  cmpw 5, 3
  04b0bf0  bt 2, 0x4b0d18
  04b0bf4  ori 4, 3, 0
  04b0bf8  lis 3, 75
  04b0bfc  lis 5, 114
  04b0c00  addi 3, 3, 1560
  04b0c04  lfs 1, 20(3)
  04b0c08  lfs 2, -3056(5)
  04b0c0c  ori 3, 31, 0
  04b0c10  fmuls 1, 2, 1
  04b0c14  li 5, 0
  04b0c18  fctiwz 1, 1
  04b0c1c  stfd 1, 288(1)
  04b0c20  lwz 6, 292(1)
  04b0c24  extsw 6, 6
  04b0c28  bl 0xfddc0
  04b0c2c  nop
  04b0c30  b 0x4b0d18
  04b0c34  lis 3, 161
  04b0c38  lwz 3, 1800(3)
  04b0c3c  cmpwi 3, 2
  04b0c40  bt 2, 0x4b0d18
  04b0c44  li 3, 1
  04b0c48  stb 3, 32(31)
  04b0c4c  lhz 3, 4(28)
  04b0c50  cmpwi 3, 4
  04b0c54  bf 2, 0x4b0d18
  04b0c58  lis 4, 75
  04b0c5c  lis 3, 151
  04b0c60  li 5, 1
  04b0c64  addi 4, 4, 1560
  04b0c68  lis 6, 114
  04b0c6c  stb 5, -16400(3)
  04b0c70  li 3, 5013
  04b0c74  lfs 1, 24(4)
  04b0c78  lfs 2, -3056(6)
  04b0c7c  fmuls 1, 2, 1
  04b0c80  fctiwz 1, 1
  04b0c84  stfd 1, 288(1)
  04b0c88  lwz 4, 292(1)
  04b0c8c  extsw 4, 4
  04b0c90  bl 0x112a38
  04b0c94  nop
  04b0c98  lis 3, 151
  04b0c9c  addic 3, 3, -16244
  04b0ca0  lbz 3, 9(3)
  04b0ca4  cmpwi 3, 0
  04b0ca8  bt 2, 0x4b0cd0
  04b0cac  li 3, 1
  04b0cb0  li 4, 0
  04b0cb4  li 5, 0
  04b0cb8  bl 0x15d2d4
  04b0cbc  nop
  04b0cc0  li 3, 21462
  04b0cc4  li 4, -1
  04b0cc8  bl 0x112a38
  04b0ccc  nop
  04b0cd0  li 3, 0
  04b0cd4  li 4, -1
  04b0cd8  bl 0xe8aa4
  04b0cdc  nop
  04b0ce0  b 0x4b0d18
  04b0ce4  lbz 3, 188(31)
  04b0ce8  cmpwi 3, 0
  04b0cec  bt 2, 0x4b0d18
  04b0cf0  lis 3, 143
  04b0cf4  li 5, 0
  04b0cf8  addic 4, 3, 17184
  04b0cfc  li 6, 1
  04b0d00  addic 3, 4, 32
  04b0d04  addic 4, 4, 48
  04b0d08  bl 0xa0c38
  04b0d0c  nop
  04b0d10  li 3, 0
  04b0d14  stb 3, 188(31)
  04b0d18  lis 3, 75
  04b0d1c  lbz 4, 83(31)
  04b0d20  addi 3, 3, 1560
  04b0d24  cmpwi 4, 0
  04b0d28  cmpwi 1, 4, 2
  04b0d2c  lfs 31, 28(3)
  04b0d30  bt 2, 0x4b0d38
  04b0d34  bf 6, 0x4b153c
  04b0d38  lis 30, 151
  04b0d3c  lfs 2, 20(31)
  04b0d40  addic 30, 30, -25376
  04b0d44  lfs 1, 16(31)
  04b0d48  lis 3, 75
  04b0d4c  lfs 3, 132(30)
  04b0d50  lfs 4, 128(30)
  04b0d54  fsubs 3, 2, 3
  04b0d58  fsubs 4, 1, 4
  04b0d5c  addi 3, 3, 1560
  04b0d60  fmuls 3, 3, 3
  04b0d64  fmadds 3, 4, 4, 3
  04b0d68  lfs 4, 32(3)
  04b0d6c  fsqrts 3, 3
  04b0d70  fcmpu 0, 3, 4
  04b0d74  cror 6, 1, 2
  04b0d78  bt 6, 0x4b0fe8
  04b0d7c  lfs 3, 208(30)
  04b0d80  lis 3, 75
  04b0d84  lfs 4, 212(30)
  04b0d88  fsubs 1, 3, 1
  04b0d8c  fsubs 2, 4, 2
  04b0d90  addi 3, 3, 1560
  04b0d94  lis 4, 115
  04b0d98  addic 4, 4, 22784
  04b0d9c  fabs 5, 1
  04b0da0  fabs 6, 2
  04b0da4  stfs 1, 148(1)
  04b0da8  stfs 2, 152(1)
  04b0dac  lfs 3, 72(31)
  04b0db0  fsubs 1, 5, 6
  04b0db4  stfs 1, 156(1)
  04b0db8  lwz 5, 148(1)
  04b0dbc  lfs 4, 36(3)
  04b0dc0  lfs 1, 148(1)
  04b0dc4  lwz 3, 152(1)
  04b0dc8  lfs 2, 152(1)
  04b0dcc  lwz 6, 156(1)
  04b0dd0  rlwinm 3, 3, 3, 29, 29
  04b0dd4  fabs 7, 2
  04b0dd8  lfs 2, 156(1)
  04b0ddc  fabs 1, 1
  04b0de0  rlwimi 3, 6, 2, 30, 30
  04b0de4  fsub 8, 2, 4
  04b0de8  rlwimi 3, 5, 4, 28, 28
  04b0dec  fsub 9, 2, 4
  04b0df0  ori 5, 4, 0
  04b0df4  rlwimi 5, 3, 2, 26, 28
  04b0df8  slwi 3, 3, 2
  04b0dfc  clrldi 5, 5, 32
  04b0e00  fsel 6, 8, 1, 6
  04b0e04  lfsx 1, 4, 3
  04b0e08  lfs 2, 4(5)
  04b0e0c  fsel 5, 9, 7, 5
  04b0e10  fcmpu 0, 6, 4
  04b0e14  bt 1, 0x4b0e1c
  04b0e18  b 0x4b0f3c
  04b0e1c  fsubs 7, 5, 6
  04b0e20  fadds 5, 5, 6
  04b0e24  addic 3, 1, 16
  04b0e28  li 7, 2
  04b0e2c  addic 4, 3, 240
  04b0e30  addic 5, 3, 256
  04b0e34  mtctr 7
  04b0e38  fdivs 5, 7, 5
  04b0e3c  fmuls 6, 5, 5
  04b0e40  stfs 5, 268(1)
  04b0e44  stfs 5, 260(1)
  04b0e48  stfs 5, 264(1)
  04b0e4c  stfs 5, 256(1)
  04b0e50  lfs 8, 268(1)
  04b0e54  lfs 9, 260(1)
  04b0e58  lfs 10, 264(1)
  04b0e5c  fmuls 7, 6, 6
  04b0e60  fmuls 9, 9, 6
  04b0e64  fmuls 8, 8, 7
  04b0e68  fmuls 5, 7, 7
  04b0e6c  fmuls 7, 10, 7
  04b0e70  stfs 9, 260(1)
  04b0e74  fmuls 6, 8, 6
  04b0e78  stfs 7, 264(1)
  04b0e7c  stfs 6, 268(1)
  04b0e80  lfs 6, 240(3)
  04b0e84  fmuls 6, 6, 5
  04b0e88  stfs 6, 256(3)
  04b0e8c  lfs 6, 4(4)
  04b0e90  addic 3, 3, 8
  04b0e94  addic 4, 4, 8
  04b0e98  fmuls 6, 6, 5
  04b0e9c  stfs 6, 4(5)
  04b0ea0  addic 5, 5, 8
  04b0ea4  bdnz 0x4b0e80
  04b0ea8  li 5, 4
  04b0eac  ori 3, 1, 0
  04b0eb0  mtctr 5
  04b0eb4  lis 4, 115
  04b0eb8  addic 5, 3, 256
  04b0ebc  addic 4, 4, 22752
  04b0ec0  ori 6, 5, 0
  04b0ec4  lfs 5, 256(3)
  04b0ec8  lfs 6, 0(4)
  04b0ecc  fmuls 5, 5, 6
  04b0ed0  lfs 6, 4(4)
  04b0ed4  addic 4, 4, 8
  04b0ed8  stfs 5, 256(3)
  04b0edc  lfs 5, 4(5)
  04b0ee0  addic 3, 3, 8
  04b0ee4  fmuls 5, 5, 6
  04b0ee8  stfs 5, 4(5)
  04b0eec  addic 5, 5, 8
  04b0ef0  bdnz 0x4b0ec4
  04b0ef4  ori 3, 1, 0
  04b0ef8  mtctr 7
  04b0efc  lfs 5, 256(3)
  04b0f00  fadds 4, 4, 5
  04b0f04  lfs 5, 4(6)
  04b0f08  addic 3, 3, 16
  04b0f0c  lfs 6, 8(6)
  04b0f10  lfs 7, 12(6)
  04b0f14  addic 6, 6, 16
  04b0f18  fadds 4, 4, 5
  04b0f1c  fadds 4, 4, 6
  04b0f20  fadds 4, 4, 7
  04b0f24  bdnz 0x4b0efc
  04b0f28  lis 3, 75
  04b0f2c  addi 3, 3, 1560
  04b0f30  lfs 5, 40(3)
  04b0f34  fadds 4, 4, 5
  04b0f38  fmadds 4, 4, 1, 2
  04b0f3c  fmr 1, 3
  04b0f40  fmr 2, 4
  04b0f44  bl 0x5026a0
  04b0f48  nop
  04b0f4c  lis 3, 75
  04b0f50  addi 3, 3, 1560
  04b0f54  lfs 2, 44(3)
  04b0f58  fcmpu 0, 1, 2
  04b0f5c  cror 6, 1, 2
  04b0f60  bt 6, 0x4b0fe8
  04b0f64  lfs 1, 260(30)
  04b0f68  lfs 2, 256(30)
  04b0f6c  fmuls 1, 1, 1
  04b0f70  lfs 3, 264(30)
  04b0f74  lis 3, 75
  04b0f78  addi 3, 3, 1560
  04b0f7c  fmadds 1, 2, 2, 1
  04b0f80  lfs 2, 48(3)
  04b0f84  fmadds 1, 3, 3, 1
  04b0f88  fsqrts 1, 1
  04b0f8c  fcmpu 0, 1, 2
  04b0f90  cror 6, 0, 2
  04b0f94  bt 6, 0x4b0fd8
  04b0f98  lis 3, 75
  04b0f9c  li 4, 52
  04b0fa0  vspltisw 2, -1
  04b0fa4  addi 3, 3, 1560
  04b0fa8  lis 5, 114
  04b0fac  li 6, -3056
  04b0fb0  vslw 2, 2, 2
  04b0fb4  lvlx 3, 4, 3
  04b0fb8  li 3, 584
  04b0fbc  vspltw 3, 3, 0
  04b0fc0  lvlx 4, 6, 5
  04b0fc4  vmaddfp 2, 4, 3, 2
  04b0fc8  vctsxs 2, 2, 0
  04b0fcc  vspltw 2, 2, 0
  04b0fd0  stvewx 2, 3, 28
  04b0fd4  b 0x4b101c
  04b0fd8  addic 3, 28, 584
  04b0fdc  bl 0x4fff60
  04b0fe0  nop
  04b0fe4  b 0x4b101c
  04b0fe8  lwz 3, 584(28)
  04b0fec  cmpwi 3, 0
  04b0ff0  bt 2, 0x4b101c
  04b0ff4  li 3, 0
  04b0ff8  stw 3, 584(28)
  04b0ffc  lfs 1, 208(30)
  04b1000  stfs 1, 592(28)
  04b1004  lfs 1, 212(30)
  04b1008  stfs 1, 596(28)
  04b100c  lfs 1, 216(30)
  04b1010  stfs 1, 600(28)
  04b1014  lfs 1, 220(30)
  04b1018  stfs 1, 604(28)
  04b101c  addic 3, 28, 588
  04b1020  bl 0x4fff60
  04b1024  nop
  04b1028  cmpwi 3, 0
  04b102c  bt 2, 0x4b10e4
  04b1030  lis 3, 75
  04b1034  addi 29, 3, 1560
  04b1038  lfs 1, 56(29)
  04b103c  lfs 2, 60(29)
  04b1040  bl 0xfcbe8
  04b1044  nop
  04b1048  lis 3, 114
  04b104c  lfs 2, -3056(3)
  04b1050  fmuls 1, 1, 2
  04b1054  bl 0x502758
  04b1058  nop
  04b105c  stw 3, 588(28)
  04b1060  lfs 1, 64(29)
  04b1064  lfs 30, 72(31)
  04b1068  lfs 2, 68(29)
  04b106c  bl 0xfcbe8
  04b1070  nop
  04b1074  lfs 29, 72(29)
  04b1078  fmuls 2, 1, 29
  04b107c  fmr 1, 30
  04b1080  bl 0x502578
  04b1084  nop
  04b1088  fmr 30, 1
  04b108c  lfs 1, 36(29)
  04b1090  lfs 2, 76(29)
  04b1094  bl 0xfcbe8
  04b1098  nop
  04b109c  fmuls 3, 1, 29
  04b10a0  addic 3, 28, 592
  04b10a4  lfs 1, 80(29)
  04b10a8  fmr 2, 30
  04b10ac  bl 0xfe610
  04b10b0  nop
  04b10b4  lfs 1, 592(28)
  04b10b8  lfs 2, 16(31)
  04b10bc  fadds 1, 1, 2
  04b10c0  lfs 2, 596(28)
  04b10c4  lfs 3, 600(28)
  04b10c8  stfs 1, 592(28)
  04b10cc  lfs 1, 20(31)
  04b10d0  fadds 1, 2, 1
  04b10d4  stfs 1, 596(28)
  04b10d8  lfs 1, 24(31)
  04b10dc  fadds 1, 3, 1
  04b10e0  stfs 1, 600(28)
  04b10e4  lwz 3, 584(28)
  04b10e8  cmpwi 3, 0
  04b10ec  bt 2, 0x4b110c
  04b10f0  lis 3, 75
  04b10f4  lfs 30, 208(30)
  04b10f8  addi 3, 3, 1560
  04b10fc  lfs 29, 212(30)
  04b1100  lfs 28, 216(30)
  04b1104  lfs 31, 84(3)
  04b1108  b 0x4b1118
  04b110c  lfs 30, 592(28)
  04b1110  lfs 29, 596(28)
  04b1114  lfs 28, 600(28)
  04b1118  lfs 1, 16(31)
  04b111c  lfs 2, 20(31)
  04b1120  lis 3, 75
  04b1124  fsubs 30, 30, 1
  04b1128  fsubs 29, 29, 2
  04b112c  addi 3, 3, 1560
  04b1130  lis 30, 115
  04b1134  addic 30, 30, 22784
  04b1138  lfs 1, 88(3)
  04b113c  fabs 3, 30
  04b1140  fabs 4, 29
  04b1144  stfs 30, 136(1)
  04b1148  stfs 29, 140(1)
  04b114c  lfs 5, 24(31)
  04b1150  fadds 1, 5, 1
  04b1154  fsubs 2, 3, 4
  04b1158  fsubs 28, 28, 1
  04b115c  stfs 2, 144(1)
  04b1160  lwz 4, 136(1)
  04b1164  lfs 27, 36(3)
  04b1168  lfs 2, 136(1)
  04b116c  lwz 3, 140(1)
  04b1170  lfs 5, 140(1)
  04b1174  lwz 5, 144(1)
  04b1178  rlwinm 3, 3, 3, 29, 29
  04b117c  lfs 1, 144(1)
  04b1180  fabs 2, 2
  04b1184  rlwimi 3, 5, 2, 30, 30
  04b1188  fabs 5, 5
  04b118c  fsub 6, 1, 27
  04b1190  fsub 7, 1, 27
  04b1194  rlwimi 3, 4, 4, 28, 28
  04b1198  ori 4, 30, 0
  04b119c  rlwimi 4, 3, 2, 26, 28
  04b11a0  slwi 3, 3, 2
  04b11a4  clrldi 4, 4, 32
  04b11a8  fsel 4, 6, 2, 4
  04b11ac  lfsx 1, 30, 3
  04b11b0  fsel 3, 7, 5, 3
  04b11b4  lfs 2, 4(4)
  04b11b8  fcmpu 0, 4, 27
  04b11bc  bt 1, 0x4b11c8
  04b11c0  fmr 1, 27
  04b11c4  b 0x4b12ec
  04b11c8  fsubs 5, 3, 4
  04b11cc  fadds 3, 3, 4
  04b11d0  addic 3, 1, 16
  04b11d4  li 6, 2
  04b11d8  addic 5, 3, 224
  04b11dc  addic 4, 3, 208
  04b11e0  mtctr 6
  04b11e4  fdivs 3, 5, 3
  04b11e8  fmuls 4, 3, 3
  04b11ec  stfs 3, 236(1)
  04b11f0  stfs 3, 228(1)
  04b11f4  stfs 3, 232(1)
  04b11f8  stfs 3, 224(1)
  04b11fc  lfs 6, 236(1)
  04b1200  lfs 7, 228(1)
  04b1204  lfs 8, 232(1)
  04b1208  fmuls 5, 4, 4
  04b120c  fmuls 7, 7, 4
  04b1210  fmuls 6, 6, 5
  04b1214  fmuls 3, 5, 5
  04b1218  fmuls 5, 8, 5
  04b121c  stfs 7, 228(1)
  04b1220  fmuls 4, 6, 4
  04b1224  stfs 5, 232(1)
  04b1228  stfs 4, 236(1)
  04b122c  lfs 4, 208(3)
  04b1230  fmuls 4, 4, 3
  04b1234  stfs 4, 224(3)
  04b1238  lfs 4, 4(4)
  04b123c  addic 4, 4, 8
  04b1240  fmuls 4, 4, 3
  04b1244  addic 3, 3, 8
  04b1248  stfs 4, 4(5)
  04b124c  addic 5, 5, 8
  04b1250  bdnz 0x4b122c
  04b1254  li 5, 4
  04b1258  ori 3, 1, 0
  04b125c  mtctr 5
  04b1260  lis 4, 115
  04b1264  addic 5, 3, 224
  04b1268  addic 4, 4, 22752
  04b126c  ori 7, 5, 0
  04b1270  lfs 3, 224(3)
  04b1274  lfs 4, 0(4)
  04b1278  fmuls 3, 3, 4
  04b127c  lfs 4, 4(4)
  04b1280  addic 4, 4, 8
  04b1284  stfs 3, 224(3)
  04b1288  lfs 3, 4(5)
  04b128c  addic 3, 3, 8
  04b1290  fmuls 3, 3, 4
  04b1294  stfs 3, 4(5)
  04b1298  addic 5, 5, 8
  04b129c  bdnz 0x4b1270
  04b12a0  ori 3, 1, 0
  04b12a4  fmr 3, 27
  04b12a8  mtctr 6
  04b12ac  lfs 4, 224(3)
  04b12b0  fadds 3, 3, 4
  04b12b4  lfs 4, 4(7)
  04b12b8  addic 3, 3, 16
  04b12bc  lfs 5, 8(7)
  04b12c0  lfs 6, 12(7)
  04b12c4  addic 7, 7, 16
  04b12c8  fadds 3, 3, 4
  04b12cc  fadds 3, 3, 5
  04b12d0  fadds 3, 3, 6
  04b12d4  bdnz 0x4b12ac
  04b12d8  lis 3, 75
  04b12dc  addi 3, 3, 1560
  04b12e0  lfs 4, 40(3)
  04b12e4  fadds 3, 3, 4
  04b12e8  fmadds 1, 3, 1, 2
  04b12ec  lfs 2, 72(31)
  04b12f0  bl 0x5025e0
  04b12f4  nop
  04b12f8  fmuls 2, 29, 29
  04b12fc  stfs 28, 128(1)
  04b1300  fabs 4, 28
  04b1304  fmadds 2, 30, 30, 2
  04b1308  fsqrts 2, 2
  04b130c  lwz 3, 128(1)
  04b1310  lfs 3, 128(1)
  04b1314  rlwinm 3, 3, 3, 29, 29
  04b1318  fabs 3, 3
  04b131c  fabs 5, 2
  04b1320  stfs 2, 124(1)
  04b1324  fsubs 2, 5, 4
  04b1328  stfs 2, 132(1)
  04b132c  lwz 4, 124(1)
  04b1330  lfs 2, 124(1)
  04b1334  lwz 5, 132(1)
  04b1338  lfs 6, 132(1)
  04b133c  fabs 2, 2
  04b1340  rlwimi 3, 5, 2, 30, 30
  04b1344  fsub 7, 6, 27
  04b1348  fsub 6, 6, 27
  04b134c  rlwimi 3, 4, 4, 28, 28
  04b1350  ori 4, 30, 0
  04b1354  rlwimi 4, 3, 2, 26, 28
  04b1358  slwi 3, 3, 2
  04b135c  clrldi 4, 4, 32
  04b1360  fsel 4, 7, 2, 4
  04b1364  lfsx 30, 30, 3
  04b1368  fsel 3, 6, 3, 5
  04b136c  lfs 2, 4(4)
  04b1370  fcmpu 0, 4, 27
  04b1374  bt 1, 0x4b137c
  04b1378  b 0x4b149c
  04b137c  fsubs 5, 3, 4
  04b1380  fadds 3, 3, 4
  04b1384  addic 3, 1, 16
  04b1388  li 6, 2
  04b138c  addic 4, 3, 176
  04b1390  addic 5, 3, 192
  04b1394  mtctr 6
  04b1398  fdivs 3, 5, 3
  04b139c  fmuls 4, 3, 3
  04b13a0  stfs 3, 204(1)
  04b13a4  stfs 3, 196(1)
  04b13a8  stfs 3, 200(1)
  04b13ac  stfs 3, 192(1)
  04b13b0  lfs 6, 204(1)
  04b13b4  lfs 7, 196(1)
  04b13b8  lfs 8, 200(1)
  04b13bc  fmuls 5, 4, 4
  04b13c0  fmuls 7, 7, 4
  04b13c4  fmuls 6, 6, 5
  04b13c8  fmuls 3, 5, 5
  04b13cc  fmuls 5, 8, 5
  04b13d0  stfs 7, 196(1)
  04b13d4  fmuls 4, 6, 4
  04b13d8  stfs 5, 200(1)
  04b13dc  stfs 4, 204(1)
  04b13e0  lfs 4, 176(3)
  04b13e4  fmuls 4, 4, 3
  04b13e8  stfs 4, 192(3)
  04b13ec  lfs 4, 4(4)
  04b13f0  addic 3, 3, 8
  04b13f4  addic 4, 4, 8
  04b13f8  fmuls 4, 4, 3
  04b13fc  stfs 4, 4(5)
  04b1400  addic 5, 5, 8
  04b1404  bdnz 0x4b13e0
  04b1408  li 5, 4
  04b140c  ori 3, 1, 0
  04b1410  mtctr 5
  04b1414  lis 4, 115
  04b1418  addic 5, 3, 192
  04b141c  addic 4, 4, 22752
  04b1420  ori 7, 5, 0
  04b1424  lfs 3, 192(3)
  04b1428  lfs 4, 0(4)
  04b142c  fmuls 3, 3, 4
  04b1430  lfs 4, 4(4)
  04b1434  addic 4, 4, 8
  04b1438  stfs 3, 192(3)
  04b143c  lfs 3, 4(5)
  04b1440  addic 3, 3, 8
  04b1444  fmuls 3, 3, 4
  04b1448  stfs 3, 4(5)
  04b144c  addic 5, 5, 8
  04b1450  bdnz 0x4b1424
  04b1454  ori 3, 1, 0
  04b1458  mtctr 6
  04b145c  lfs 3, 192(3)
  04b1460  lfs 4, 4(7)
  04b1464  fadds 3, 27, 3
  04b1468  lfs 5, 8(7)
  04b146c  lfs 27, 12(7)
  04b1470  addic 3, 3, 16
  04b1474  addic 7, 7, 16
  04b1478  fadds 3, 3, 4
  04b147c  fadds 3, 3, 5
  04b1480  fadds 27, 3, 27
  04b1484  bdnz 0x4b145c
  04b1488  lis 3, 75
  04b148c  addi 3, 3, 1560
  04b1490  lfs 3, 40(3)
  04b1494  fadds 27, 27, 3
  04b1498  fmadds 27, 27, 30, 2
  04b149c  lis 3, 75
  04b14a0  fneg 27, 27
  04b14a4  addi 3, 3, 1560
  04b14a8  lfs 2, 44(3)
  04b14ac  fcmpu 0, 1, 2
  04b14b0  cror 6, 0, 2
  04b14b4  bt 6, 0x4b14c0
  04b14b8  fmr 1, 2
  04b14bc  b 0x4b14dc
  04b14c0  lis 3, 75
  04b14c4  addi 3, 3, 1560
  04b14c8  lfs 2, 92(3)
  04b14cc  fcmpu 0, 1, 2
  04b14d0  cror 6, 1, 2
  04b14d4  bt 6, 0x4b14dc
  04b14d8  fmr 1, 2
  04b14dc  lis 3, 75
  04b14e0  addi 3, 3, 1560
  04b14e4  lfs 2, 96(3)
  04b14e8  fcmpu 0, 27, 2
  04b14ec  cror 6, 0, 2
  04b14f0  bt 6, 0x4b14fc
  04b14f4  fmr 27, 2
  04b14f8  b 0x4b1518
  04b14fc  lis 3, 75
  04b1500  addi 3, 3, 1560
  04b1504  lfs 2, 100(3)
  04b1508  fcmpu 0, 27, 2
  04b150c  cror 6, 1, 2
  04b1510  bt 6, 0x4b1518
  04b1514  fmr 27, 2
  04b1518  lis 3, 75
  04b151c  addi 3, 3, 1560
  04b1520  lfs 2, 104(3)
  04b1524  fmuls 2, 1, 2
  04b1528  stfs 2, 168(28)
  04b152c  lfs 2, 108(3)
  04b1530  stfs 27, 164(28)
  04b1534  fmuls 1, 1, 2
  04b1538  stfs 1, 296(28)
  04b153c  lis 30, 151
  04b1540  lfs 3, 20(31)
  04b1544  lfs 2, 16(31)
  04b1548  addic 30, 30, -25376
  04b154c  lis 3, 75
  04b1550  lfs 4, 132(30)
  04b1554  lfs 1, 128(30)
  04b1558  fsubs 5, 3, 4
  04b155c  fsubs 6, 2, 1
  04b1560  addi 3, 3, 1560
  04b1564  fmuls 5, 5, 5
  04b1568  fmadds 5, 6, 6, 5
  04b156c  lfs 6, 112(3)
  04b1570  fsqrts 5, 5
  04b1574  fcmpu 0, 5, 6
  04b1578  cror 6, 1, 2
  04b157c  bt 6, 0x4b1850
  04b1580  fsubs 3, 4, 3
  04b1584  fsubs 1, 1, 2
  04b1588  lis 3, 75
  04b158c  addi 3, 3, 1560
  04b1590  lis 4, 115
  04b1594  addic 4, 4, 22784
  04b1598  fabs 6, 3
  04b159c  fabs 5, 1
  04b15a0  stfs 3, 116(1)
  04b15a4  stfs 1, 112(1)
  04b15a8  lfs 1, 72(31)
  04b15ac  lwz 5, 116(1)
  04b15b0  fsubs 2, 5, 6
  04b15b4  stfs 2, 120(1)
  04b15b8  lwz 6, 112(1)
  04b15bc  lfs 4, 36(3)
  04b15c0  lfs 2, 112(1)
  04b15c4  lfs 3, 116(1)
  04b15c8  rlwinm 3, 5, 3, 29, 29
  04b15cc  lwz 5, 120(1)
  04b15d0  fabs 7, 3
  04b15d4  lfs 3, 120(1)
  04b15d8  fabs 2, 2
  04b15dc  rlwimi 3, 5, 2, 30, 30
  04b15e0  fsub 8, 3, 4
  04b15e4  fsub 9, 3, 4
  04b15e8  rlwimi 3, 6, 4, 28, 28
  04b15ec  ori 5, 4, 0
  04b15f0  rlwimi 5, 3, 2, 26, 28
  04b15f4  slwi 3, 3, 2
  04b15f8  clrldi 5, 5, 32
  04b15fc  fsel 6, 8, 2, 6
  04b1600  lfsx 2, 4, 3
  04b1604  lfs 3, 4(5)
  04b1608  fsel 5, 9, 7, 5
  04b160c  fcmpu 0, 6, 4
  04b1610  bt 1, 0x4b1618
  04b1614  b 0x4b1738
  04b1618  fsubs 7, 5, 6
  04b161c  fadds 5, 5, 6
  04b1620  addic 3, 1, 16
  04b1624  li 6, 2
  04b1628  addic 5, 3, 160
  04b162c  addic 4, 3, 144
  04b1630  mtctr 6
  04b1634  fdivs 5, 7, 5
  04b1638  fmuls 6, 5, 5
  04b163c  stfs 5, 172(1)
  04b1640  stfs 5, 164(1)
  04b1644  stfs 5, 168(1)
  04b1648  stfs 5, 160(1)
  04b164c  lfs 8, 172(1)
  04b1650  lfs 9, 164(1)
  04b1654  lfs 10, 168(1)
  04b1658  fmuls 7, 6, 6
  04b165c  fmuls 9, 9, 6
  04b1660  fmuls 8, 8, 7
  04b1664  fmuls 5, 7, 7
  04b1668  fmuls 7, 10, 7
  04b166c  stfs 9, 164(1)
  04b1670  fmuls 6, 8, 6
  04b1674  stfs 7, 168(1)
  04b1678  stfs 6, 172(1)
  04b167c  lfs 6, 144(3)
  04b1680  fmuls 6, 6, 5
  04b1684  stfs 6, 160(3)
  04b1688  lfs 6, 4(4)
  04b168c  addic 4, 4, 8
  04b1690  fmuls 6, 6, 5
  04b1694  addic 3, 3, 8
  04b1698  stfs 6, 4(5)
  04b169c  addic 5, 5, 8
  04b16a0  bdnz 0x4b167c
  04b16a4  li 5, 4
  04b16a8  ori 3, 1, 0
  04b16ac  mtctr 5
  04b16b0  lis 4, 115
  04b16b4  addic 5, 3, 160
  04b16b8  addic 4, 4, 22752
  04b16bc  ori 7, 5, 0
  04b16c0  lfs 5, 160(3)
  04b16c4  lfs 6, 0(4)
  04b16c8  fmuls 5, 5, 6
  04b16cc  lfs 6, 4(4)
  04b16d0  addic 4, 4, 8
  04b16d4  stfs 5, 160(3)
  04b16d8  lfs 5, 4(5)
  04b16dc  addic 3, 3, 8
  04b16e0  fmuls 5, 5, 6
  04b16e4  stfs 5, 4(5)
  04b16e8  addic 5, 5, 8
  04b16ec  bdnz 0x4b16c0
  04b16f0  ori 3, 1, 0
  04b16f4  mtctr 6
  04b16f8  lfs 5, 160(3)
  04b16fc  fadds 4, 4, 5
  04b1700  addic 3, 3, 16
  04b1704  lfs 5, 4(7)
  04b1708  lfs 6, 8(7)
  04b170c  lfs 7, 12(7)
  04b1710  addic 7, 7, 16
  04b1714  fadds 4, 4, 5
  04b1718  fadds 4, 4, 6
  04b171c  fadds 4, 4, 7
  04b1720  bdnz 0x4b16f8
  04b1724  lis 3, 75
  04b1728  addi 3, 3, 1560
  04b172c  lfs 5, 40(3)
  04b1730  fadds 4, 4, 5
  04b1734  fmadds 4, 4, 2, 3
  04b1738  fmr 2, 4
  04b173c  bl 0x5026a0
  04b1740  nop
  04b1744  lis 3, 75
  04b1748  addi 3, 3, 1560
  04b174c  lfs 2, 116(3)
  04b1750  fcmpu 0, 1, 2
  04b1754  cror 6, 1, 2
  04b1758  bt 6, 0x4b1850
  04b175c  lwz 3, 8324(30)
  04b1760  cmpwi 3, 11
  04b1764  bf 2, 0x4b17ac
  04b1768  lwz 4, 408(30)
  04b176c  cmpwi 4, 15
  04b1770  bf 2, 0x4b17ac
  04b1774  lwz 5, 608(28)
  04b1778  li 3, 20
  04b177c  li 4, 20
  04b1780  addic 5, 5, 1
  04b1784  extsw 6, 5
  04b1788  subc 4, 4, 5
  04b178c  subc 3, 3, 6
  04b1790  lis 6, 270
  04b1794  sradi 3, 3, 63
  04b1798  and 3, 3, 4
  04b179c  addc 3, 5, 3
  04b17a0  stw 3, 608(28)
  04b17a4  stw 3, 18368(6)
  04b17a8  lwz 3, 8324(30)
  04b17ac  cmpwi 3, 4
  04b17b0  bf 2, 0x4b1850
  04b17b4  lis 3, 75
  04b17b8  lis 4, 114
  04b17bc  addi 3, 3, 1560
  04b17c0  lfs 1, 0(3)
  04b17c4  lfs 2, -3056(4)
  04b17c8  lwz 3, 408(30)
  04b17cc  fmuls 1, 2, 1
  04b17d0  fctiwz 1, 1
  04b17d4  stfd 1, 288(1)
  04b17d8  lwz 4, 292(1)
  04b17dc  cmpw 3, 4
  04b17e0  bf 1, 0x4b1850
  04b17e4  lis 3, 161
  04b17e8  lis 4, 26214
  04b17ec  ori 4, 4, 26215
  04b17f0  lwz 3, 1808(3)
  04b17f4  mulhw 4, 4, 3
  04b17f8  srawi 4, 4, 2
  04b17fc  srwi 5, 4, 31
  04b1800  addc 4, 4, 5
  04b1804  sldi 5, 4, 3
  04b1808  addc 5, 4, 5
  04b180c  addc 4, 4, 5
  04b1810  subc 3, 3, 4
  04b1814  cmpwi 3, 0
  04b1818  bf 2, 0x4b1850
  04b181c  lwz 5, 608(28)
  04b1820  li 3, 0
  04b1824  li 4, 0
  04b1828  addic 5, 5, -1
  04b182c  extsw 6, 5
  04b1830  subc 4, 4, 5
  04b1834  subc 3, 6, 3
  04b1838  lis 6, 270
  04b183c  sradi 3, 3, 63
  04b1840  and 3, 3, 4
  04b1844  addc 3, 5, 3
  04b1848  stw 3, 608(28)
  04b184c  stw 3, 18368(6)
  04b1850  lis 3, 161
  04b1854  lwz 3, 1800(3)
  04b1858  cmpwi 3, 2
  04b185c  bt 2, 0x4b18d4
  04b1860  ori 3, 31, 0
  04b1864  ori 4, 28, 0
  04b1868  bl 0x4b0218
  04b186c  lis 3, 151
  04b1870  lbz 3, -16268(3)
  04b1874  cmpwi 3, 0
  04b1878  bt 2, 0x4b1884
  04b187c  lis 3, 16432
  04b1880  stw 3, 176(28)
  04b1884  lis 3, 75
  04b1888  lis 30, 114
  04b188c  addi 5, 3, 1560
  04b1890  addic 4, 28, 64
  04b1894  ori 3, 31, 0
  04b1898  lfs 30, 120(5)
  04b189c  lfs 2, -3060(30)
  04b18a0  li 5, 0
  04b18a4  fmuls 1, 2, 31
  04b18a8  fmuls 2, 2, 30
  04b18ac  bl 0x1167c8
  04b18b0  nop
  04b18b4  lfs 2, -3060(30)
  04b18b8  addic 4, 28, 192
  04b18bc  fmuls 1, 2, 31
  04b18c0  ori 3, 31, 0
  04b18c4  fmuls 2, 2, 30
  04b18c8  li 5, 1
  04b18cc  bl 0x1167c8
  04b18d0  nop
  04b18d4  ld 0, 416(1)
  04b18d8  mtlr 0
  04b18dc  lfd 27, 360(1)
  04b18e0  lfd 28, 368(1)
  04b18e4  lfd 29, 376(1)
  04b18e8  lfd 30, 384(1)
  04b18ec  lfd 31, 392(1)
  04b18f0  ld 25, 304(1)
  04b18f4  ld 26, 312(1)
  04b18f8  ld 27, 320(1)
  04b18fc  ld 28, 328(1)
  04b1900  ld 29, 336(1)
  04b1904  ld 30, 344(1)
  04b1908  ld 31, 352(1)
  04b190c  addi 1, 1, 400
  04b1910  blr
