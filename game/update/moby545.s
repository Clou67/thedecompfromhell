# game/update/moby545.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M545_003aff7c:   # 0x3aff7c, 0x14 bytes
  03aff7c  lis 3, 132
  03aff80  lis 4, 1
  03aff84  addic 3, 3, 22116
  03aff88  stw 4, 72(3)
  03aff8c  blr

FUN_003affa0:   # 0x3affa0, 0x1a0 bytes
  03affa0  stdu 1, -192(1)
  03affa4  mflr 0
  03affa8  std 0, 208(1)
  03affac  stfd 30, 176(1)
  03affb0  stfd 31, 184(1)
  03affb4  std 28, 144(1)
  03affb8  ori 28, 3, 0
  03affbc  std 31, 168(1)
  03affc0  li 3, 545
  03affc4  std 30, 160(1)
  03affc8  ori 31, 7, 0
  03affcc  std 29, 152(1)
  03affd0  std 26, 128(1)
  03affd4  ori 30, 5, 0
  03affd8  ori 29, 4, 0
  03affdc  std 27, 136(1)
  03affe0  std 25, 120(1)
  03affe4  ori 26, 6, 0
  03affe8  bl 0xefa28
  03affec  nop
  03afff0  ori 27, 3, 0
  03afff4  cmpwi 27, 0
  03afff8  bt 2, 0x3b0108
  03afffc  lwz 25, 120(27)
  03b0000  lis 3, 59
  03b0004  stw 28, 16(25)
  03b0008  lfs 1, 0(29)
  03b000c  stfs 1, 16(27)
  03b0010  lfs 1, 4(29)
  03b0014  stfs 1, 20(27)
  03b0018  lfs 1, 8(29)
  03b001c  stfs 1, 24(27)
  03b0020  lfs 1, 12(29)
  03b0024  addi 29, 3, -112
  03b0028  stfs 1, 28(27)
  03b002c  lfs 1, 0(30)
  03b0030  stfs 1, 0(25)
  03b0034  lfs 1, 4(30)
  03b0038  stfs 1, 4(25)
  03b003c  lfs 1, 8(30)
  03b0040  stfs 1, 8(25)
  03b0044  lfs 1, 12(30)
  03b0048  stfs 1, 12(25)
  03b004c  lfs 31, 0(29)
  03b0050  lfs 30, 4(29)
  03b0054  fmr 1, 31
  03b0058  fmr 2, 30
  03b005c  bl 0xfcbe8
  03b0060  nop
  03b0064  stfs 1, 64(27)
  03b0068  fmr 2, 30
  03b006c  fmr 1, 31
  03b0070  bl 0xfcbe8
  03b0074  nop
  03b0078  li 4, 0
  03b007c  li 5, 8
  03b0080  stfs 1, 68(27)
  03b0084  vspltisw 2, -1
  03b0088  lis 6, 114
  03b008c  li 7, -3056
  03b0090  stw 4, 24(25)
  03b0094  lvlx 3, 5, 29
  03b0098  vslw 2, 2, 2
  03b009c  vspltw 3, 3, 0
  03b00a0  li 5, 20
  03b00a4  lvlx 4, 7, 6
  03b00a8  ori 3, 27, 0
  03b00ac  li 6, 1
  03b00b0  vmaddfp 2, 4, 3, 2
  03b00b4  vctsxs 2, 2, 0
  03b00b8  vsplth 2, 2, 1
  03b00bc  stvehx 2, 5, 25
  03b00c0  lwz 5, 16(25)
  03b00c4  sth 26, 22(25)
  03b00c8  lbz 5, 48(5)
  03b00cc  stb 5, 48(27)
  03b00d0  lwz 5, 16(25)
  03b00d4  lwz 7, 36(27)
  03b00d8  lhz 5, 50(5)
  03b00dc  stb 6, 49(27)
  03b00e0  sth 5, 50(27)
  03b00e4  stb 4, 32(27)
  03b00e8  lfs 1, 12(29)
  03b00ec  lfs 2, 36(7)
  03b00f0  fmuls 1, 2, 1
  03b00f4  stfs 1, 44(27)
  03b00f8  stw 4, 32(25)
  03b00fc  stw 31, 28(25)
  03b0100  bl 0xf31a8
  03b0104  nop
  03b0108  ori 3, 27, 0
  03b010c  ld 0, 208(1)
  03b0110  mtlr 0
  03b0114  lfd 30, 176(1)
  03b0118  lfd 31, 184(1)
  03b011c  ld 25, 120(1)
  03b0120  ld 26, 128(1)
  03b0124  ld 27, 136(1)
  03b0128  ld 28, 144(1)
  03b012c  ld 29, 152(1)
  03b0130  ld 30, 160(1)
  03b0134  ld 31, 168(1)
  03b0138  addi 1, 1, 192
  03b013c  blr

UpdateMoby_545:   # 0x3b0198, 0x1168 bytes
  03b0198  stdu 1, -384(1)
  03b019c  mflr 0
  03b01a0  std 0, 400(1)
  03b01a4  stfd 31, 376(1)
  03b01a8  std 31, 368(1)
  03b01ac  cmpwi 3, 0
  03b01b0  std 30, 360(1)
  03b01b4  std 29, 352(1)
  03b01b8  std 28, 344(1)
  03b01bc  std 27, 336(1)
  03b01c0  std 26, 328(1)
  03b01c4  std 25, 320(1)
  03b01c8  std 24, 312(1)
  03b01cc  ori 31, 3, 0
  03b01d0  bt 2, 0x3b12cc
  03b01d4  lwz 30, 120(31)
  03b01d8  cmpwi 30, 0
  03b01dc  bt 2, 0x3b12cc
  03b01e0  addic 3, 30, 32
  03b01e4  bl 0x4fff60
  03b01e8  nop
  03b01ec  lfs 1, 16(31)
  03b01f0  lfs 2, 20(31)
  03b01f4  stfs 1, 112(1)
  03b01f8  lfs 3, 24(31)
  03b01fc  stfs 2, 116(1)
  03b0200  lfs 4, 28(31)
  03b0204  lbz 3, 32(31)
  03b0208  stfs 3, 120(1)
  03b020c  cmpwi 3, 0
  03b0210  stfs 4, 124(1)
  03b0214  bt 1, 0x3b0224
  03b0218  cmpwi 3, -1
  03b021c  bf 1, 0x3b118c
  03b0220  b 0x3b0238
  03b0224  cmpwi 3, 1
  03b0228  bf 1, 0x3b101c
  03b022c  cmpwi 3, 2
  03b0230  bf 1, 0x3b1090
  03b0234  b 0x3b118c
  03b0238  lis 3, 59
  03b023c  lfs 4, 44(31)
  03b0240  lis 25, 114
  03b0244  addi 3, 3, 320
  03b0248  lfs 5, 0(3)
  03b024c  lwz 4, 36(31)
  03b0250  lfs 6, -3064(25)
  03b0254  fmuls 5, 6, 5
  03b0258  lfs 7, 36(4)
  03b025c  fsubs 7, 7, 4
  03b0260  fmadds 4, 5, 7, 4
  03b0264  stfs 4, 44(31)
  03b0268  lfs 4, 0(30)
  03b026c  fadds 1, 1, 4
  03b0270  stfs 1, 16(31)
  03b0274  lfs 4, 4(30)
  03b0278  fadds 2, 2, 4
  03b027c  stfs 2, 20(31)
  03b0280  lfs 4, 8(30)
  03b0284  fadds 3, 3, 4
  03b0288  stfs 3, 24(31)
  03b028c  lfs 4, 4(30)
  03b0290  lfs 5, 0(30)
  03b0294  fmuls 4, 4, 4
  03b0298  lfs 6, 8(30)
  03b029c  lfs 31, 4(3)
  03b02a0  fmadds 4, 5, 5, 4
  03b02a4  fmadds 4, 6, 6, 4
  03b02a8  fsqrts 4, 4
  03b02ac  fcmpu 0, 4, 31
  03b02b0  bf 2, 0x3b02dc
  03b02b4  fmr 6, 31
  03b02b8  stfs 5, 128(1)
  03b02bc  lfs 4, 4(30)
  03b02c0  stfs 4, 132(1)
  03b02c4  lfs 4, 8(30)
  03b02c8  stfs 4, 136(1)
  03b02cc  lfs 7, 12(30)
  03b02d0  fmr 5, 6
  03b02d4  fmr 4, 5
  03b02d8  b 0x3b0310
  03b02dc  lis 3, 59
  03b02e0  addi 3, 3, 320
  03b02e4  lfs 6, 8(3)
  03b02e8  fdivs 6, 6, 4
  03b02ec  fmuls 4, 5, 6
  03b02f0  stfs 4, 128(1)
  03b02f4  lfs 5, 4(30)
  03b02f8  fmuls 5, 5, 6
  03b02fc  stfs 5, 132(1)
  03b0300  lfs 7, 8(30)
  03b0304  fmuls 6, 7, 6
  03b0308  stfs 6, 136(1)
  03b030c  lfs 7, 12(30)
  03b0310  fadds 1, 4, 1
  03b0314  fadds 2, 5, 2
  03b0318  stfs 7, 140(1)
  03b031c  fadds 3, 6, 3
  03b0320  li 8, -1
  03b0324  lwz 29, 152(31)
  03b0328  li 9, 0
  03b032c  lwz 27, 148(31)
  03b0330  addic 3, 1, 112
  03b0334  addic 4, 1, 128
  03b0338  li 5, 4
  03b033c  ori 6, 31, 0
  03b0340  li 7, 0
  03b0344  stfs 1, 128(1)
  03b0348  stfs 2, 132(1)
  03b034c  stfs 3, 136(1)
  03b0350  lwz 26, 16(30)
  03b0354  lwz 28, 152(26)
  03b0358  lwz 26, 148(26)
  03b035c  stw 8, 152(31)
  03b0360  lwz 10, 16(30)
  03b0364  stw 8, 152(10)
  03b0368  stw 9, 148(31)
  03b036c  lwz 8, 16(30)
  03b0370  stw 9, 148(8)
  03b0374  bl 0x57820
  03b0378  nop
  03b037c  lfs 1, 16(31)
  03b0380  cmpwi 3, 0
  03b0384  lfs 2, 20(31)
  03b0388  lfs 3, 24(31)
  03b038c  bt 2, 0x3b0924
  03b0390  lis 24, 161
  03b0394  lfs 4, 132(1)
  03b0398  addic 24, 24, 2368
  03b039c  lis 3, 59
  03b03a0  lfs 5, 36(24)
  03b03a4  lfs 6, 32(24)
  03b03a8  fsubs 4, 5, 4
  03b03ac  lfs 5, 128(1)
  03b03b0  fsubs 5, 6, 5
  03b03b4  lfs 6, 40(24)
  03b03b8  lfs 7, 136(1)
  03b03bc  fsubs 6, 6, 7
  03b03c0  fmuls 7, 4, 4
  03b03c4  addi 3, 3, 320
  03b03c8  stfs 5, 128(1)
  03b03cc  stfs 4, 132(1)
  03b03d0  lfs 8, 44(24)
  03b03d4  fmadds 7, 5, 5, 7
  03b03d8  stfs 6, 136(1)
  03b03dc  stfs 8, 140(1)
  03b03e0  lfs 8, 12(3)
  03b03e4  lwz 3, 24(24)
  03b03e8  fmadds 7, 6, 6, 7
  03b03ec  cmpwi 3, 0
  03b03f0  fsqrts 7, 7
  03b03f4  fdivs 8, 8, 7
  03b03f8  fsub 9, 31, 7
  03b03fc  fsub 10, 31, 7
  03b0400  fsub 11, 31, 7
  03b0404  fsub 12, 7, 31
  03b0408  fsub 13, 7, 31
  03b040c  fsub 7, 7, 31
  03b0410  fmuls 5, 5, 8
  03b0414  fmuls 4, 4, 8
  03b0418  fmuls 6, 6, 8
  03b041c  fsel 8, 9, 31, 5
  03b0420  fsel 9, 10, 31, 4
  03b0424  fsel 10, 11, 31, 6
  03b0428  fsel 5, 12, 8, 5
  03b042c  fsel 4, 13, 9, 4
  03b0430  fsel 6, 7, 10, 6
  03b0434  fadds 1, 1, 5
  03b0438  fadds 2, 2, 4
  03b043c  fadds 3, 3, 6
  03b0440  stfs 5, 128(1)
  03b0444  stfs 4, 132(1)
  03b0448  stfs 6, 136(1)
  03b044c  stfs 1, 16(31)
  03b0450  stfs 2, 20(31)
  03b0454  stfs 3, 24(31)
  03b0458  bf 2, 0x3b06a8
  03b045c  addic 5, 24, 64
  03b0460  ori 3, 30, 0
  03b0464  ori 4, 30, 0
  03b0468  bl 0x500608
  03b046c  nop
  03b0470  lfs 1, 68(24)
  03b0474  lfs 2, 64(24)
  03b0478  fmuls 1, 1, 1
  03b047c  lwz 4, 72(24)
  03b0480  lis 3, 115
  03b0484  addic 3, 3, 22784
  03b0488  fmadds 1, 2, 2, 1
  03b048c  lfs 2, 72(24)
  03b0490  fabs 3, 2
  03b0494  fsqrts 1, 1
  03b0498  fabs 4, 1
  03b049c  stfs 1, 168(1)
  03b04a0  fsubs 1, 3, 4
  03b04a4  stfs 1, 172(1)
  03b04a8  lwz 5, 168(1)
  03b04ac  lfs 1, 168(1)
  03b04b0  lwz 6, 172(1)
  03b04b4  fabs 5, 1
  03b04b8  rlwinm 5, 5, 3, 29, 29
  03b04bc  lfs 1, 172(1)
  03b04c0  rlwimi 5, 6, 2, 30, 30
  03b04c4  fsub 2, 1, 31
  03b04c8  fsub 6, 1, 31
  03b04cc  rlwimi 5, 4, 4, 28, 28
  03b04d0  ori 4, 3, 0
  03b04d4  rlwimi 4, 5, 2, 26, 28
  03b04d8  slwi 5, 5, 2
  03b04dc  clrldi 4, 4, 32
  03b04e0  fsel 4, 2, 3, 4
  03b04e4  lfsx 1, 3, 5
  03b04e8  fsel 3, 6, 5, 3
  03b04ec  lfs 2, 4(4)
  03b04f0  fcmpu 0, 4, 31
  03b04f4  bt 1, 0x3b0500
  03b04f8  fmr 1, 31
  03b04fc  b 0x3b0624
  03b0500  fsubs 5, 3, 4
  03b0504  fadds 3, 3, 4
  03b0508  addic 3, 1, 16
  03b050c  li 6, 2
  03b0510  addic 5, 3, 272
  03b0514  addic 4, 3, 256
  03b0518  mtctr 6
  03b051c  fdivs 3, 5, 3
  03b0520  fmuls 4, 3, 3
  03b0524  stfs 3, 284(1)
  03b0528  stfs 3, 276(1)
  03b052c  stfs 3, 280(1)
  03b0530  stfs 3, 272(1)
  03b0534  lfs 6, 284(1)
  03b0538  lfs 7, 276(1)
  03b053c  lfs 8, 280(1)
  03b0540  fmuls 5, 4, 4
  03b0544  fmuls 7, 7, 4
  03b0548  fmuls 6, 6, 5
  03b054c  fmuls 3, 5, 5
  03b0550  fmuls 5, 8, 5
  03b0554  stfs 7, 276(1)
  03b0558  fmuls 4, 6, 4
  03b055c  stfs 5, 280(1)
  03b0560  stfs 4, 284(1)
  03b0564  lfs 4, 256(3)
  03b0568  fmuls 4, 4, 3
  03b056c  stfs 4, 272(3)
  03b0570  lfs 4, 4(4)
  03b0574  addic 4, 4, 8
  03b0578  fmuls 4, 4, 3
  03b057c  addic 3, 3, 8
  03b0580  stfs 4, 4(5)
  03b0584  addic 5, 5, 8
  03b0588  bdnz 0x3b0564
  03b058c  li 5, 4
  03b0590  ori 3, 1, 0
  03b0594  mtctr 5
  03b0598  lis 4, 115
  03b059c  addic 5, 3, 272
  03b05a0  addic 4, 4, 22752
  03b05a4  ori 7, 5, 0
  03b05a8  lfs 3, 272(3)
  03b05ac  lfs 4, 0(4)
  03b05b0  fmuls 3, 3, 4
  03b05b4  lfs 4, 4(4)
  03b05b8  addic 4, 4, 8
  03b05bc  stfs 3, 272(3)
  03b05c0  lfs 3, 4(5)
  03b05c4  addic 3, 3, 8
  03b05c8  fmuls 3, 3, 4
  03b05cc  stfs 3, 4(5)
  03b05d0  addic 5, 5, 8
  03b05d4  bdnz 0x3b05a8
  03b05d8  ori 3, 1, 0
  03b05dc  fmr 3, 31
  03b05e0  mtctr 6
  03b05e4  lfs 4, 272(3)
  03b05e8  fadds 3, 3, 4
  03b05ec  lfs 4, 4(7)
  03b05f0  addic 3, 3, 16
  03b05f4  lfs 5, 8(7)
  03b05f8  lfs 6, 12(7)
  03b05fc  addic 7, 7, 16
  03b0600  fadds 3, 3, 4
  03b0604  fadds 3, 3, 5
  03b0608  fadds 3, 3, 6
  03b060c  bdnz 0x3b05e4
  03b0610  lis 3, 59
  03b0614  addi 3, 3, 320
  03b0618  lfs 4, 16(3)
  03b061c  fadds 3, 3, 4
  03b0620  fmadds 1, 3, 1, 2
  03b0624  lis 3, 59
  03b0628  addi 3, 3, 320
  03b062c  lfs 2, 20(3)
  03b0630  fcmpu 0, 1, 2
  03b0634  cror 6, 1, 2
  03b0638  bt 6, 0x3b08fc
  03b063c  bl 0x60780
  03b0640  nop
  03b0644  cmpwi 3, -1
  03b0648  bf 2, 0x3b08fc
  03b064c  lis 3, 59
  03b0650  lfs 1, 4(30)
  03b0654  addi 3, 3, 320
  03b0658  lfs 2, 24(3)
  03b065c  lfs 3, 0(30)
  03b0660  fmuls 1, 1, 2
  03b0664  lfs 4, 8(30)
  03b0668  fmuls 3, 3, 2
  03b066c  fmuls 2, 4, 2
  03b0670  fmuls 4, 1, 1
  03b0674  stfs 3, 0(30)
  03b0678  stfs 1, 4(30)
  03b067c  stfs 2, 8(30)
  03b0680  fmadds 4, 3, 3, 4
  03b0684  fmadds 4, 2, 2, 4
  03b0688  lfs 2, 28(3)
  03b068c  fsqrts 1, 4
  03b0690  fcmpu 0, 1, 2
  03b0694  cror 6, 1, 2
  03b0698  bt 6, 0x3b08fc
  03b069c  li 3, 1
  03b06a0  stb 3, 32(31)
  03b06a4  b 0x3b08fc
  03b06a8  lhz 3, 166(3)
  03b06ac  cmpwi 3, 545
  03b06b0  bt 2, 0x3b08d8
  03b06b4  addic 5, 24, 64
  03b06b8  ori 3, 30, 0
  03b06bc  ori 4, 30, 0
  03b06c0  bl 0x500608
  03b06c4  nop
  03b06c8  lfs 1, 68(24)
  03b06cc  lfs 2, 64(24)
  03b06d0  fmuls 1, 1, 1
  03b06d4  lwz 4, 72(24)
  03b06d8  lis 3, 115
  03b06dc  addic 3, 3, 22784
  03b06e0  fmadds 1, 2, 2, 1
  03b06e4  lfs 2, 72(24)
  03b06e8  fabs 3, 2
  03b06ec  fsqrts 1, 1
  03b06f0  fabs 4, 1
  03b06f4  stfs 1, 160(1)
  03b06f8  fsubs 1, 3, 4
  03b06fc  stfs 1, 164(1)
  03b0700  lwz 5, 160(1)
  03b0704  lfs 1, 160(1)
  03b0708  lwz 6, 164(1)
  03b070c  fabs 5, 1
  03b0710  rlwinm 5, 5, 3, 29, 29
  03b0714  lfs 1, 164(1)
  03b0718  rlwimi 5, 6, 2, 30, 30
  03b071c  fsub 2, 1, 31
  03b0720  fsub 6, 1, 31
  03b0724  rlwimi 5, 4, 4, 28, 28
  03b0728  ori 4, 3, 0
  03b072c  rlwimi 4, 5, 2, 26, 28
  03b0730  slwi 5, 5, 2
  03b0734  clrldi 4, 4, 32
  03b0738  fsel 4, 2, 3, 4
  03b073c  lfsx 1, 3, 5
  03b0740  fsel 3, 6, 5, 3
  03b0744  lfs 2, 4(4)
  03b0748  fcmpu 0, 4, 31
  03b074c  bt 1, 0x3b0758
  03b0750  fmr 1, 31
  03b0754  b 0x3b087c
  03b0758  fsubs 5, 3, 4
  03b075c  fadds 3, 3, 4
  03b0760  addic 3, 1, 16
  03b0764  li 6, 2
  03b0768  addic 5, 3, 240
  03b076c  addic 4, 3, 224
  03b0770  mtctr 6
  03b0774  fdivs 3, 5, 3
  03b0778  fmuls 4, 3, 3
  03b077c  stfs 3, 252(1)
  03b0780  stfs 3, 244(1)
  03b0784  stfs 3, 248(1)
  03b0788  stfs 3, 240(1)
  03b078c  lfs 6, 252(1)
  03b0790  lfs 7, 244(1)
  03b0794  lfs 8, 248(1)
  03b0798  fmuls 5, 4, 4
  03b079c  fmuls 7, 7, 4
  03b07a0  fmuls 6, 6, 5
  03b07a4  fmuls 3, 5, 5
  03b07a8  fmuls 5, 8, 5
  03b07ac  stfs 7, 244(1)
  03b07b0  fmuls 4, 6, 4
  03b07b4  stfs 5, 248(1)
  03b07b8  stfs 4, 252(1)
  03b07bc  lfs 4, 224(3)
  03b07c0  fmuls 4, 4, 3
  03b07c4  stfs 4, 240(3)
  03b07c8  lfs 4, 4(4)
  03b07cc  addic 4, 4, 8
  03b07d0  fmuls 4, 4, 3
  03b07d4  addic 3, 3, 8
  03b07d8  stfs 4, 4(5)
  03b07dc  addic 5, 5, 8
  03b07e0  bdnz 0x3b07bc
  03b07e4  li 5, 4
  03b07e8  ori 3, 1, 0
  03b07ec  mtctr 5
  03b07f0  lis 4, 115
  03b07f4  addic 5, 3, 240
  03b07f8  addic 4, 4, 22752
  03b07fc  ori 7, 5, 0
  03b0800  lfs 3, 240(3)
  03b0804  lfs 4, 0(4)
  03b0808  fmuls 3, 3, 4
  03b080c  lfs 4, 4(4)
  03b0810  addic 4, 4, 8
  03b0814  stfs 3, 240(3)
  03b0818  lfs 3, 4(5)
  03b081c  addic 3, 3, 8
  03b0820  fmuls 3, 3, 4
  03b0824  stfs 3, 4(5)
  03b0828  addic 5, 5, 8
  03b082c  bdnz 0x3b0800
  03b0830  ori 3, 1, 0
  03b0834  fmr 3, 31
  03b0838  mtctr 6
  03b083c  lfs 4, 240(3)
  03b0840  fadds 3, 3, 4
  03b0844  lfs 4, 4(7)
  03b0848  addic 3, 3, 16
  03b084c  lfs 5, 8(7)
  03b0850  lfs 6, 12(7)
  03b0854  addic 7, 7, 16
  03b0858  fadds 3, 3, 4
  03b085c  fadds 3, 3, 5
  03b0860  fadds 3, 3, 6
  03b0864  bdnz 0x3b083c
  03b0868  lis 3, 59
  03b086c  addi 3, 3, 320
  03b0870  lfs 4, 16(3)
  03b0874  fadds 3, 3, 4
  03b0878  fmadds 1, 3, 1, 2
  03b087c  lis 3, 59
  03b0880  addi 3, 3, 320
  03b0884  lfs 2, 20(3)
  03b0888  fcmpu 0, 1, 2
  03b088c  cror 6, 1, 2
  03b0890  bt 6, 0x3b08fc
  03b0894  bl 0x60780
  03b0898  nop
  03b089c  cmpwi 3, -1
  03b08a0  bf 2, 0x3b08fc
  03b08a4  lis 3, 59
  03b08a8  lfs 1, 0(30)
  03b08ac  addi 3, 3, 320
  03b08b0  lfs 2, 32(3)
  03b08b4  lfs 3, 4(30)
  03b08b8  lfs 4, 8(30)
  03b08bc  fmuls 1, 1, 2
  03b08c0  fmuls 3, 3, 2
  03b08c4  fmuls 2, 4, 2
  03b08c8  stfs 1, 0(30)
  03b08cc  stfs 3, 4(30)
  03b08d0  stfs 2, 8(30)
  03b08d4  b 0x3b08fc
  03b08d8  lis 3, 59
  03b08dc  addi 3, 3, 320
  03b08e0  lfs 1, 36(3)
  03b08e4  lfs 2, 40(3)
  03b08e8  bl 0xfcbe8
  03b08ec  nop
  03b08f0  lfs 2, 8(30)
  03b08f4  fmuls 1, 2, 1
  03b08f8  stfs 1, 8(30)
  03b08fc  lwz 3, 32(30)
  03b0900  cmpwi 3, 0
  03b0904  bf 2, 0x3b0924
  03b0908  li 3, 0
  03b090c  li 4, 0
  03b0910  ori 5, 31, 0
  03b0914  bl 0x15d12c
  03b0918  nop
  03b091c  li 3, 12
  03b0920  stw 3, 32(30)
  03b0924  lis 3, 59
  03b0928  li 5, 4
  03b092c  addi 4, 3, 320
  03b0930  addic 3, 31, 16
  03b0934  ori 6, 31, 0
  03b0938  lfs 1, 8(4)
  03b093c  bl 0x59e20
  03b0940  nop
  03b0944  cmpwi 3, 0
  03b0948  bt 2, 0x3b0ee0
  03b094c  lis 24, 161
  03b0950  addic 24, 24, 2368
  03b0954  lis 3, 59
  03b0958  lfs 1, 36(24)
  03b095c  lfs 2, 52(24)
  03b0960  lfs 3, 32(24)
  03b0964  fsubs 1, 1, 2
  03b0968  lfs 2, 48(24)
  03b096c  lfs 4, 40(24)
  03b0970  lfs 5, 56(24)
  03b0974  fsubs 3, 3, 2
  03b0978  fsubs 4, 4, 5
  03b097c  addi 3, 3, 320
  03b0980  fmuls 5, 1, 1
  03b0984  stfs 3, 128(1)
  03b0988  stfs 1, 132(1)
  03b098c  fmadds 5, 3, 3, 5
  03b0990  lfs 6, 44(24)
  03b0994  stfs 4, 136(1)
  03b0998  stfs 6, 140(1)
  03b099c  lfs 6, 44(3)
  03b09a0  fmadds 5, 4, 4, 5
  03b09a4  lwz 3, 24(24)
  03b09a8  fsqrts 5, 5
  03b09ac  cmpwi 3, 0
  03b09b0  fdivs 6, 6, 5
  03b09b4  fsub 7, 31, 5
  03b09b8  fsub 9, 31, 5
  03b09bc  fsub 11, 31, 5
  03b09c0  fsub 8, 5, 31
  03b09c4  fsub 10, 5, 31
  03b09c8  fsub 5, 5, 31
  03b09cc  fmuls 3, 3, 6
  03b09d0  fmuls 1, 1, 6
  03b09d4  fmuls 4, 4, 6
  03b09d8  fsel 6, 7, 31, 3
  03b09dc  fsel 7, 9, 31, 1
  03b09e0  fsel 9, 11, 31, 4
  03b09e4  fsel 3, 8, 6, 3
  03b09e8  fsel 1, 10, 7, 1
  03b09ec  fsel 4, 5, 9, 4
  03b09f0  fadds 2, 2, 3
  03b09f4  stfs 3, 128(1)
  03b09f8  stfs 1, 132(1)
  03b09fc  stfs 4, 136(1)
  03b0a00  stfs 2, 16(31)
  03b0a04  lfs 2, 52(24)
  03b0a08  fadds 1, 2, 1
  03b0a0c  stfs 1, 20(31)
  03b0a10  lfs 1, 56(24)
  03b0a14  fadds 1, 1, 4
  03b0a18  stfs 1, 24(31)
  03b0a1c  lfs 1, 60(24)
  03b0a20  stfs 1, 28(31)
  03b0a24  bf 2, 0x3b0c6c
  03b0a28  addic 5, 24, 64
  03b0a2c  ori 3, 30, 0
  03b0a30  ori 4, 30, 0
  03b0a34  bl 0x500608
  03b0a38  nop
  03b0a3c  lfs 1, 68(24)
  03b0a40  lfs 2, 64(24)
  03b0a44  fmuls 1, 1, 1
  03b0a48  lwz 4, 72(24)
  03b0a4c  lis 3, 115
  03b0a50  addic 3, 3, 22784
  03b0a54  fmadds 1, 2, 2, 1
  03b0a58  lfs 2, 72(24)
  03b0a5c  fabs 3, 2
  03b0a60  fsqrts 1, 1
  03b0a64  fabs 4, 1
  03b0a68  stfs 1, 152(1)
  03b0a6c  fsubs 1, 3, 4
  03b0a70  stfs 1, 156(1)
  03b0a74  lwz 5, 152(1)
  03b0a78  lfs 1, 152(1)
  03b0a7c  lwz 6, 156(1)
  03b0a80  rlwinm 5, 5, 3, 29, 29
  03b0a84  fabs 2, 1
  03b0a88  lfs 1, 156(1)
  03b0a8c  rlwimi 5, 6, 2, 30, 30
  03b0a90  fsub 5, 1, 31
  03b0a94  fsub 6, 1, 31
  03b0a98  rlwimi 5, 4, 4, 28, 28
  03b0a9c  ori 4, 3, 0
  03b0aa0  rlwimi 4, 5, 2, 26, 28
  03b0aa4  slwi 5, 5, 2
  03b0aa8  clrldi 4, 4, 32
  03b0aac  fsel 4, 5, 3, 4
  03b0ab0  lfsx 1, 3, 5
  03b0ab4  fsel 3, 6, 2, 3
  03b0ab8  lfs 2, 4(4)
  03b0abc  fcmpu 0, 4, 31
  03b0ac0  bt 1, 0x3b0ac8
  03b0ac4  b 0x3b0be8
  03b0ac8  fsubs 5, 3, 4
  03b0acc  fadds 3, 3, 4
  03b0ad0  addic 3, 1, 16
  03b0ad4  li 6, 2
  03b0ad8  addic 5, 3, 208
  03b0adc  addic 4, 3, 192
  03b0ae0  mtctr 6
  03b0ae4  fdivs 3, 5, 3
  03b0ae8  fmuls 4, 3, 3
  03b0aec  stfs 3, 220(1)
  03b0af0  stfs 3, 212(1)
  03b0af4  stfs 3, 216(1)
  03b0af8  stfs 3, 208(1)
  03b0afc  lfs 6, 220(1)
  03b0b00  lfs 7, 212(1)
  03b0b04  lfs 8, 216(1)
  03b0b08  fmuls 5, 4, 4
  03b0b0c  fmuls 7, 7, 4
  03b0b10  fmuls 6, 6, 5
  03b0b14  fmuls 3, 5, 5
  03b0b18  fmuls 5, 8, 5
  03b0b1c  stfs 7, 212(1)
  03b0b20  fmuls 4, 6, 4
  03b0b24  stfs 5, 216(1)
  03b0b28  stfs 4, 220(1)
  03b0b2c  lfs 4, 192(3)
  03b0b30  fmuls 4, 4, 3
  03b0b34  stfs 4, 208(3)
  03b0b38  lfs 4, 4(4)
  03b0b3c  addic 4, 4, 8
  03b0b40  fmuls 4, 4, 3
  03b0b44  addic 3, 3, 8
  03b0b48  stfs 4, 4(5)
  03b0b4c  addic 5, 5, 8
  03b0b50  bdnz 0x3b0b2c
  03b0b54  li 5, 4
  03b0b58  ori 3, 1, 0
  03b0b5c  mtctr 5
  03b0b60  lis 4, 115
  03b0b64  addic 5, 3, 208
  03b0b68  addic 4, 4, 22752
  03b0b6c  ori 7, 5, 0
  03b0b70  lfs 3, 208(3)
  03b0b74  lfs 4, 0(4)
  03b0b78  fmuls 3, 3, 4
  03b0b7c  lfs 4, 4(4)
  03b0b80  addic 4, 4, 8
  03b0b84  stfs 3, 208(3)
  03b0b88  lfs 3, 4(5)
  03b0b8c  addic 3, 3, 8
  03b0b90  fmuls 3, 3, 4
  03b0b94  stfs 3, 4(5)
  03b0b98  addic 5, 5, 8
  03b0b9c  bdnz 0x3b0b70
  03b0ba0  ori 3, 1, 0
  03b0ba4  mtctr 6
  03b0ba8  lfs 3, 208(3)
  03b0bac  lfs 4, 4(7)
  03b0bb0  fadds 3, 31, 3
  03b0bb4  lfs 5, 8(7)
  03b0bb8  addic 3, 3, 16
  03b0bbc  lfs 31, 12(7)
  03b0bc0  addic 7, 7, 16
  03b0bc4  fadds 3, 3, 4
  03b0bc8  fadds 3, 3, 5
  03b0bcc  fadds 31, 3, 31
  03b0bd0  bdnz 0x3b0ba8
  03b0bd4  lis 3, 59
  03b0bd8  addi 3, 3, 320
  03b0bdc  lfs 3, 16(3)
  03b0be0  fadds 31, 31, 3
  03b0be4  fmadds 31, 31, 1, 2
  03b0be8  lis 3, 59
  03b0bec  addi 3, 3, 320
  03b0bf0  lfs 1, 20(3)
  03b0bf4  fcmpu 0, 31, 1
  03b0bf8  cror 6, 1, 2
  03b0bfc  bt 6, 0x3b0eb8
  03b0c00  bl 0x60780
  03b0c04  nop
  03b0c08  cmpwi 3, -1
  03b0c0c  bf 2, 0x3b0eb8
  03b0c10  lis 3, 59
  03b0c14  lfs 1, 4(30)
  03b0c18  addi 3, 3, 320
  03b0c1c  lfs 2, 24(3)
  03b0c20  lfs 3, 0(30)
  03b0c24  fmuls 1, 1, 2
  03b0c28  lfs 4, 8(30)
  03b0c2c  fmuls 3, 3, 2
  03b0c30  fmuls 2, 4, 2
  03b0c34  fmuls 4, 1, 1
  03b0c38  stfs 3, 0(30)
  03b0c3c  stfs 1, 4(30)
  03b0c40  stfs 2, 8(30)
  03b0c44  fmadds 4, 3, 3, 4
  03b0c48  fmadds 3, 2, 2, 4
  03b0c4c  lfs 2, 28(3)
  03b0c50  fsqrts 1, 3
  03b0c54  fcmpu 0, 1, 2
  03b0c58  cror 6, 1, 2
  03b0c5c  bt 6, 0x3b0eb8
  03b0c60  li 3, 1
  03b0c64  stb 3, 32(31)
  03b0c68  b 0x3b0eb8
  03b0c6c  lhz 3, 166(3)
  03b0c70  cmpwi 3, 545
  03b0c74  bt 2, 0x3b0e94
  03b0c78  addic 5, 24, 64
  03b0c7c  ori 3, 30, 0
  03b0c80  ori 4, 30, 0
  03b0c84  bl 0x500608
  03b0c88  nop
  03b0c8c  lfs 1, 68(24)
  03b0c90  lfs 2, 64(24)
  03b0c94  fmuls 1, 1, 1
  03b0c98  lwz 4, 72(24)
  03b0c9c  lis 3, 115
  03b0ca0  addic 3, 3, 22784
  03b0ca4  fmadds 1, 2, 2, 1
  03b0ca8  lfs 2, 72(24)
  03b0cac  fabs 3, 2
  03b0cb0  fsqrts 1, 1
  03b0cb4  fabs 4, 1
  03b0cb8  stfs 1, 144(1)
  03b0cbc  fsubs 1, 3, 4
  03b0cc0  stfs 1, 148(1)
  03b0cc4  lwz 5, 144(1)
  03b0cc8  lfs 1, 144(1)
  03b0ccc  lwz 6, 148(1)
  03b0cd0  rlwinm 5, 5, 3, 29, 29
  03b0cd4  fabs 2, 1
  03b0cd8  lfs 1, 148(1)
  03b0cdc  rlwimi 5, 6, 2, 30, 30
  03b0ce0  fsub 5, 1, 31
  03b0ce4  fsub 6, 1, 31
  03b0ce8  rlwimi 5, 4, 4, 28, 28
  03b0cec  ori 4, 3, 0
  03b0cf0  rlwimi 4, 5, 2, 26, 28
  03b0cf4  slwi 5, 5, 2
  03b0cf8  clrldi 4, 4, 32
  03b0cfc  fsel 4, 5, 3, 4
  03b0d00  lfsx 1, 3, 5
  03b0d04  fsel 3, 6, 2, 3
  03b0d08  lfs 2, 4(4)
  03b0d0c  fcmpu 0, 4, 31
  03b0d10  bt 1, 0x3b0d18
  03b0d14  b 0x3b0e38
  03b0d18  fsubs 5, 3, 4
  03b0d1c  fadds 3, 3, 4
  03b0d20  addic 3, 1, 16
  03b0d24  li 6, 2
  03b0d28  addic 5, 3, 176
  03b0d2c  addic 4, 3, 160
  03b0d30  mtctr 6
  03b0d34  fdivs 3, 5, 3
  03b0d38  fmuls 4, 3, 3
  03b0d3c  stfs 3, 188(1)
  03b0d40  stfs 3, 180(1)
  03b0d44  stfs 3, 184(1)
  03b0d48  stfs 3, 176(1)
  03b0d4c  lfs 6, 188(1)
  03b0d50  lfs 7, 180(1)
  03b0d54  lfs 8, 184(1)
  03b0d58  fmuls 5, 4, 4
  03b0d5c  fmuls 7, 7, 4
  03b0d60  fmuls 6, 6, 5
  03b0d64  fmuls 3, 5, 5
  03b0d68  fmuls 5, 8, 5
  03b0d6c  stfs 7, 180(1)
  03b0d70  fmuls 4, 6, 4
  03b0d74  stfs 5, 184(1)
  03b0d78  stfs 4, 188(1)
  03b0d7c  lfs 4, 160(3)
  03b0d80  fmuls 4, 4, 3
  03b0d84  stfs 4, 176(3)
  03b0d88  lfs 4, 4(4)
  03b0d8c  addic 4, 4, 8
  03b0d90  fmuls 4, 4, 3
  03b0d94  addic 3, 3, 8
  03b0d98  stfs 4, 4(5)
  03b0d9c  addic 5, 5, 8
  03b0da0  bdnz 0x3b0d7c
  03b0da4  li 5, 4
  03b0da8  ori 3, 1, 0
  03b0dac  mtctr 5
  03b0db0  lis 4, 115
  03b0db4  addic 5, 3, 176
  03b0db8  addic 4, 4, 22752
  03b0dbc  ori 7, 5, 0
  03b0dc0  lfs 3, 176(3)
  03b0dc4  lfs 4, 0(4)
  03b0dc8  fmuls 3, 3, 4
  03b0dcc  lfs 4, 4(4)
  03b0dd0  addic 4, 4, 8
  03b0dd4  stfs 3, 176(3)
  03b0dd8  lfs 3, 4(5)
  03b0ddc  addic 3, 3, 8
  03b0de0  fmuls 3, 3, 4
  03b0de4  stfs 3, 4(5)
  03b0de8  addic 5, 5, 8
  03b0dec  bdnz 0x3b0dc0
  03b0df0  ori 3, 1, 0
  03b0df4  mtctr 6
  03b0df8  lfs 3, 176(3)
  03b0dfc  lfs 4, 4(7)
  03b0e00  fadds 3, 31, 3
  03b0e04  lfs 5, 8(7)
  03b0e08  addic 3, 3, 16
  03b0e0c  lfs 31, 12(7)
  03b0e10  addic 7, 7, 16
  03b0e14  fadds 3, 3, 4
  03b0e18  fadds 3, 3, 5
  03b0e1c  fadds 31, 3, 31
  03b0e20  bdnz 0x3b0df8
  03b0e24  lis 3, 59
  03b0e28  addi 3, 3, 320
  03b0e2c  lfs 3, 16(3)
  03b0e30  fadds 31, 31, 3
  03b0e34  fmadds 31, 31, 1, 2
  03b0e38  lis 3, 59
  03b0e3c  addi 3, 3, 320
  03b0e40  lfs 1, 20(3)
  03b0e44  fcmpu 0, 31, 1
  03b0e48  cror 6, 1, 2
  03b0e4c  bt 6, 0x3b0eb8
  03b0e50  bl 0x60780
  03b0e54  nop
  03b0e58  cmpwi 3, -1
  03b0e5c  bf 2, 0x3b0eb8
  03b0e60  lis 3, 59
  03b0e64  lfs 1, 0(30)
  03b0e68  addi 3, 3, 320
  03b0e6c  lfs 2, 32(3)
  03b0e70  lfs 3, 4(30)
  03b0e74  lfs 4, 8(30)
  03b0e78  fmuls 1, 1, 2
  03b0e7c  fmuls 3, 3, 2
  03b0e80  fmuls 2, 4, 2
  03b0e84  stfs 1, 0(30)
  03b0e88  stfs 3, 4(30)
  03b0e8c  stfs 2, 8(30)
  03b0e90  b 0x3b0eb8
  03b0e94  lis 3, 59
  03b0e98  addi 3, 3, 320
  03b0e9c  lfs 1, 36(3)
  03b0ea0  lfs 2, 40(3)
  03b0ea4  bl 0xfcbe8
  03b0ea8  nop
  03b0eac  lfs 2, 8(30)
  03b0eb0  fmuls 1, 2, 1
  03b0eb4  stfs 1, 8(30)
  03b0eb8  lwz 3, 32(30)
  03b0ebc  cmpwi 3, 0
  03b0ec0  bf 2, 0x3b0ee0
  03b0ec4  li 3, 0
  03b0ec8  li 4, 0
  03b0ecc  ori 5, 31, 0
  03b0ed0  bl 0x15d12c
  03b0ed4  nop
  03b0ed8  li 3, 12
  03b0edc  stw 3, 32(30)
  03b0ee0  lis 3, 164
  03b0ee4  lwz 3, -28500(3)
  03b0ee8  cmpwi 3, 0
  03b0eec  bt 2, 0x3b0f7c
  03b0ef0  lis 4, 59
  03b0ef4  addi 4, 4, 320
  03b0ef8  lfs 6, 48(4)
  03b0efc  lfs 7, 52(4)
  03b0f00  lfs 8, 56(4)
  03b0f04  cmpw 3, 31
  03b0f08  bt 2, 0x3b0f70
  03b0f0c  lbz 4, 32(3)
  03b0f10  cmpwi 1, 4, 253
  03b0f14  cmpwi 4, 254
  03b0f18  cror 2, 2, 6
  03b0f1c  bt 2, 0x3b0f70
  03b0f20  lfs 5, 20(31)
  03b0f24  lfs 2, 20(3)
  03b0f28  lfs 4, 16(31)
  03b0f2c  fsubs 2, 5, 2
  03b0f30  lfs 1, 16(3)
  03b0f34  fsubs 1, 4, 1
  03b0f38  fmuls 3, 2, 2
  03b0f3c  fmadds 3, 1, 1, 3
  03b0f40  fsqrts 3, 3
  03b0f44  fcmpu 0, 3, 6
  03b0f48  cror 6, 1, 2
  03b0f4c  bt 6, 0x3b0f70
  03b0f50  lfs 9, -3064(25)
  03b0f54  fsubs 3, 6, 3
  03b0f58  fmadds 9, 9, 7, 8
  03b0f5c  fmuls 3, 3, 9
  03b0f60  fmadds 1, 1, 3, 4
  03b0f64  fmadds 2, 2, 3, 5
  03b0f68  stfs 1, 16(31)
  03b0f6c  stfs 2, 20(31)
  03b0f70  lwz 3, 40(3)
  03b0f74  cmpwi 3, 0
  03b0f78  bf 2, 0x3b0f04
  03b0f7c  addic 3, 30, 20
  03b0f80  bl 0x4fffb4
  03b0f84  nop
  03b0f88  cmpwi 3, 0
  03b0f8c  bt 2, 0x3b0f98
  03b0f90  li 3, 2
  03b0f94  stb 3, 32(31)
  03b0f98  lfs 1, 0(30)
  03b0f9c  bl 0x10de78
  03b0fa0  nop
  03b0fa4  stfs 1, 64(31)
  03b0fa8  lfs 1, 4(30)
  03b0fac  bl 0x10de78
  03b0fb0  nop
  03b0fb4  stfs 1, 68(31)
  03b0fb8  lis 4, 59
  03b0fbc  stw 29, 152(31)
  03b0fc0  lis 5, 114
  03b0fc4  lwz 3, 16(30)
  03b0fc8  addi 4, 4, 320
  03b0fcc  stw 28, 152(3)
  03b0fd0  stw 27, 148(31)
  03b0fd4  lwz 3, 16(30)
  03b0fd8  stw 26, 148(3)
  03b0fdc  lfs 1, 60(4)
  03b0fe0  lfs 2, 8(30)
  03b0fe4  lfs 3, -3048(5)
  03b0fe8  fnmsubs 1, 3, 1, 2
  03b0fec  stfs 1, 8(30)
  03b0ff0  lfs 1, 64(4)
  03b0ff4  lfs 2, 64(31)
  03b0ff8  lfs 3, -3064(25)
  03b0ffc  lfs 4, 68(31)
  03b1000  fmadds 1, 3, 1, 2
  03b1004  stfs 1, 64(31)
  03b1008  lfs 1, 68(4)
  03b100c  lfs 2, -3064(25)
  03b1010  fmadds 1, 2, 1, 4
  03b1014  stfs 1, 68(31)
  03b1018  b 0x3b118c
  03b101c  lis 3, 59
  03b1020  li 4, 0
  03b1024  addi 29, 3, 320
  03b1028  addic 3, 31, 16
  03b102c  lfs 1, 24(29)
  03b1030  bl 0xffb70
  03b1034  nop
  03b1038  lfs 2, 8(29)
  03b103c  li 3, 0
  03b1040  lfs 3, 16(31)
  03b1044  fadds 1, 1, 2
  03b1048  li 7, -1
  03b104c  stfs 1, 24(31)
  03b1050  lfs 2, 4(29)
  03b1054  stw 3, 28(31)
  03b1058  lwz 3, 16(30)
  03b105c  stfs 3, 64(1)
  03b1060  lfs 3, 20(31)
  03b1064  stfs 1, 72(1)
  03b1068  stfs 3, 68(1)
  03b106c  stfs 2, 76(1)
  03b1070  ld 5, 64(1)
  03b1074  ld 6, 72(1)
  03b1078  bl 0x38a248
  03b107c  nop
  03b1080  li 4, 2
  03b1084  stw 3, 24(30)
  03b1088  stb 4, 32(31)
  03b108c  b 0x3b118c
  03b1090  lis 3, 59
  03b1094  lis 4, 114
  03b1098  addi 3, 3, 320
  03b109c  lfs 1, 0(3)
  03b10a0  lfs 2, -3064(4)
  03b10a4  lfs 3, 44(31)
  03b10a8  fmuls 2, 2, 1
  03b10ac  fnmsubs 2, 2, 3, 3
  03b10b0  stfs 2, 44(31)
  03b10b4  lwz 3, 24(30)
  03b10b8  cmpwi 3, 0
  03b10bc  bt 2, 0x3b10f8
  03b10c0  lwz 4, 28(30)
  03b10c4  rlwinm 4, 4, 0, 29, 29
  03b10c8  cmpwi 4, 0
  03b10cc  bt 2, 0x3b10f8
  03b10d0  lis 4, 114
  03b10d4  lwz 5, 36(3)
  03b10d8  lfs 2, -3064(4)
  03b10dc  lfs 3, 44(3)
  03b10e0  lfs 4, 36(5)
  03b10e4  fmuls 2, 2, 1
  03b10e8  fsubs 4, 4, 3
  03b10ec  fmadds 2, 2, 4, 3
  03b10f0  stfs 2, 44(3)
  03b10f4  lfs 2, 44(31)
  03b10f8  lis 3, 114
  03b10fc  lfs 3, -3064(3)
  03b1100  lwz 3, 36(31)
  03b1104  fmuls 1, 3, 1
  03b1108  lfs 3, 36(3)
  03b110c  fmuls 1, 1, 3
  03b1110  fcmpu 0, 2, 1
  03b1114  cror 6, 1, 2
  03b1118  bt 6, 0x3b118c
  03b111c  lis 3, 14545
  03b1120  ori 3, 3, 46871
  03b1124  stw 3, 44(31)
  03b1128  lwz 3, 24(30)
  03b112c  cmpwi 3, 0
  03b1130  bt 2, 0x3b117c
  03b1134  lbz 4, 32(3)
  03b1138  cmpwi 1, 4, 253
  03b113c  cmpwi 4, 254
  03b1140  cror 2, 2, 6
  03b1144  bt 2, 0x3b117c
  03b1148  lwz 4, 28(30)
  03b114c  rlwinm 4, 4, 0, 29, 29
  03b1150  cmpwi 4, 0
  03b1154  bt 2, 0x3b117c
  03b1158  lis 4, 59
  03b115c  lwz 5, 36(3)
  03b1160  addi 4, 4, 320
  03b1164  lfs 1, 64(4)
  03b1168  lfs 2, 36(5)
  03b116c  lfs 3, 44(3)
  03b1170  fsubs 1, 2, 1
  03b1174  fcmpu 0, 3, 1
  03b1178  bt 0, 0x3b118c
  03b117c  ori 3, 31, 0
  03b1180  bl 0xefb38
  03b1184  nop
  03b1188  b 0x3b12cc
  03b118c  lis 3, 59
  03b1190  lfs 1, 44(31)
  03b1194  addi 30, 3, 320
  03b1198  ori 3, 31, 0
  03b119c  lfs 2, 72(30)
  03b11a0  lwz 4, 36(31)
  03b11a4  fmuls 1, 1, 2
  03b11a8  lfs 3, 36(4)
  03b11ac  fdivs 1, 1, 3
  03b11b0  bl 0x106150
  03b11b4  nop
  03b11b8  lwz 3, 24(31)
  03b11bc  lwz 4, 20(31)
  03b11c0  srawi 5, 3, 31
  03b11c4  lfs 2, 76(30)
  03b11c8  srawi 6, 4, 31
  03b11cc  lfs 1, 24(31)
  03b11d0  srwi 7, 5, 1
  03b11d4  lfs 4, 20(31)
  03b11d8  srwi 8, 6, 1
  03b11dc  xor 3, 7, 3
  03b11e0  xor 4, 8, 4
  03b11e4  subc 3, 3, 5
  03b11e8  lis 5, 16544
  03b11ec  subc 4, 4, 6
  03b11f0  cmpw 3, 5
  03b11f4  bt 0, 0x3b1204
  03b11f8  lis 5, 17402
  03b11fc  cmpw 3, 5
  03b1200  bf 1, 0x3b1214
  03b1204  ori 3, 31, 0
  03b1208  bl 0xefb38
  03b120c  nop
  03b1210  b 0x3b12cc
  03b1214  lwz 6, 16(31)
  03b1218  lis 5, 16544
  03b121c  lfs 3, 16(31)
  03b1220  srawi 7, 6, 31
  03b1224  srwi 8, 7, 1
  03b1228  xor 6, 8, 6
  03b122c  subc 6, 6, 7
  03b1230  cmpw 6, 5
  03b1234  bf 0, 0x3b1244
  03b1238  lis 5, 16544
  03b123c  fmr 3, 2
  03b1240  stw 5, 16(31)
  03b1244  fmr 5, 3
  03b1248  lis 5, 59
  03b124c  addi 5, 5, 320
  03b1250  lfs 3, 80(5)
  03b1254  fcmpu 0, 5, 3
  03b1258  cror 6, 0, 2
  03b125c  bt 6, 0x3b126c
  03b1260  lis 5, 17534
  03b1264  ori 5, 5, 32768
  03b1268  stw 5, 16(31)
  03b126c  lis 5, 16544
  03b1270  cmpw 4, 5
  03b1274  bf 0, 0x3b1284
  03b1278  lis 4, 16544
  03b127c  fmr 4, 2
  03b1280  stw 4, 20(31)
  03b1284  fcmpu 0, 4, 3
  03b1288  cror 6, 0, 2
  03b128c  bt 6, 0x3b129c
  03b1290  lis 4, 17534
  03b1294  ori 4, 4, 32768
  03b1298  stw 4, 20(31)
  03b129c  lis 4, 16544
  03b12a0  cmpw 3, 4
  03b12a4  bf 0, 0x3b12b4
  03b12a8  lis 3, 16544
  03b12ac  fmr 1, 2
  03b12b0  stw 3, 24(31)
  03b12b4  fcmpu 0, 1, 3
  03b12b8  cror 6, 0, 2
  03b12bc  bt 6, 0x3b12cc
  03b12c0  lis 3, 17534
  03b12c4  ori 3, 3, 32768
  03b12c8  stw 3, 24(31)
  03b12cc  ld 0, 400(1)
  03b12d0  mtlr 0
  03b12d4  lfd 31, 376(1)
  03b12d8  ld 24, 312(1)
  03b12dc  ld 25, 320(1)
  03b12e0  ld 26, 328(1)
  03b12e4  ld 27, 336(1)
  03b12e8  ld 28, 344(1)
  03b12ec  ld 29, 352(1)
  03b12f0  ld 30, 360(1)
  03b12f4  ld 31, 368(1)
  03b12f8  addi 1, 1, 384
  03b12fc  blr
