# idol/mUnk2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol::RegisterTrophyCtxHandle:   # 0x4eff54, 0x140 bytes
  04eff54  stdu 1, -144(1)
  04eff58  mflr 0
  04eff5c  std 0, 160(1)
  04eff60  std 30, 128(1)
  04eff64  lis 30, 144
  04eff68  std 31, 136(1)
  04eff6c  lis 4, -1
  04eff70  ori 31, 3, 0
  04eff74  ori 4, 4, 65535
  04eff78  li 3, 0
  04eff7c  clrldi 5, 4, 32
  04eff80  lwz 30, 12516(30)
  04eff84  li 4, 0
  04eff88  li 6, 0
  04eff8c  bl 0x64f844
  04eff90  ld 2, 40(1)
  04eff94  cmpwi 3, 0
  04eff98  bf 0, 0x4effb8
  04eff9c  lis 4, 102
  04effa0  ori 5, 3, 0
  04effa4  lis 6, 102
  04effa8  addic 3, 4, -18484
  04effac  addic 4, 6, -18456
  04effb0  bl 0x4ffc9c
  04effb4  nop
  04effb8  addic 3, 31, 428
  04effbc  addic 4, 30, 4
  04effc0  addic 5, 30, 16
  04effc4  li 6, 0
  04effc8  bl 0x64f8c4
  04effcc  ld 2, 40(1)
  04effd0  ori 30, 3, 0
  04effd4  cmpwi 30, 0
  04effd8  bf 0, 0x4efff8
  04effdc  lis 3, 102
  04effe0  lis 4, 102
  04effe4  ori 5, 30, 0
  04effe8  addic 3, 3, -18484
  04effec  addic 4, 4, -18440
  04efff0  bl 0x4ffc9c
  04efff4  nop
  04efff8  addic 3, 31, 432
  04efffc  bl 0x64f7e4
  04f0000  ld 2, 40(1)
  04f0004  ori 31, 3, 0
  04f0008  cmpwi 31, 0
  04f000c  bf 0, 0x4f002c
  04f0010  lis 3, 102
  04f0014  lis 4, 102
  04f0018  addic 3, 3, -18484
  04f001c  addic 4, 4, -18408
  04f0020  ori 5, 31, 0
  04f0024  bl 0x4ffc9c
  04f0028  nop
  04f002c  lis 4, 113
  04f0030  addic 3, 1, 112
  04f0034  lis 9, 102
  04f0038  li 5, 0
  04f003c  li 6, 1001
  04f0040  li 7, 16384
  04f0044  addic 4, 4, 864
  04f0048  li 8, 0
  04f004c  addic 9, 9, -18384
  04f0050  bl 0x650524
  04f0054  ld 2, 40(1)
  04f0058  cmpwi 3, 0
  04f005c  bt 2, 0x4f007c
  04f0060  lis 3, 102
  04f0064  lis 4, 102
  04f0068  addic 3, 3, -18484
  04f006c  addic 4, 4, -18360
  04f0070  li 5, -1
  04f0074  bl 0x4ffc9c
  04f0078  nop
  04f007c  ld 0, 160(1)
  04f0080  mtlr 0
  04f0084  ld 30, 128(1)
  04f0088  ld 31, 136(1)
  04f008c  addi 1, 1, 144
  04f0090  blr

FUN_004f0094:   # 0x4f0094, 0x27c bytes
  04f0094  stdu 1, -1344(1)
  04f0098  mflr 0
  04f009c  std 0, 1360(1)
  04f00a0  std 31, 1336(1)
  04f00a4  ori 31, 3, 0
  04f00a8  addic 5, 31, 436
  04f00ac  addic 6, 31, 1612
  04f00b0  lwz 3, 428(31)
  04f00b4  std 30, 1328(1)
  04f00b8  std 29, 1320(1)
  04f00bc  std 28, 1312(1)
  04f00c0  std 27, 1304(1)
  04f00c4  std 26, 1296(1)
  04f00c8  lwz 4, 432(31)
  04f00cc  bl 0x64f864
  04f00d0  ld 2, 40(1)
  04f00d4  ori 30, 3, 0
  04f00d8  cmpwi 30, 0
  04f00dc  bf 0, 0x4f0168
  04f00e0  lwz 3, 432(31)
  04f00e4  cmpwi 3, 0
  04f00e8  bt 2, 0x4f0110
  04f00ec  bl 0x64f884
  04f00f0  ld 2, 40(1)
  04f00f4  cmpwi 3, 0
  04f00f8  bf 0, 0x4f0110
  04f00fc  lis 5, 102
  04f0100  ori 4, 3, 0
  04f0104  addic 3, 5, -18592
  04f0108  bl 0x4ffc9c
  04f010c  nop
  04f0110  lwz 3, 428(31)
  04f0114  cmpwi 3, 0
  04f0118  bt 2, 0x4f0140
  04f011c  bl 0x64f824
  04f0120  ld 2, 40(1)
  04f0124  cmpwi 3, 0
  04f0128  bf 0, 0x4f0140
  04f012c  lis 5, 102
  04f0130  ori 4, 3, 0
  04f0134  addic 3, 5, -18536
  04f0138  bl 0x4ffc9c
  04f013c  nop
  04f0140  li 4, 0
  04f0144  lis 3, 102
  04f0148  lis 6, 102
  04f014c  ori 5, 30, 0
  04f0150  stb 4, 4(31)
  04f0154  addic 3, 3, -18484
  04f0158  addic 4, 6, -18336
  04f015c  bl 0x4ffc9c
  04f0160  nop
  04f0164  b 0x4f02e8
  04f0168  li 3, 1
  04f016c  lwz 4, 436(31)
  04f0170  li 26, 0
  04f0174  cmpwi 4, 0
  04f0178  ori 30, 26, 0
  04f017c  stb 3, 4(31)
  04f0180  bt 2, 0x4f02e8
  04f0184  lis 28, 102
  04f0188  addic 28, 28, -18312
  04f018c  addic 29, 1, 128
  04f0190  li 4, 0
  04f0194  ori 3, 29, 0
  04f0198  li 5, 1164
  04f019c  bl 0x5d0140
  04f01a0  nop
  04f01a4  vspltisw 2, 0
  04f01a8  li 3, 112
  04f01ac  ori 6, 29, 0
  04f01b0  ori 27, 30, 0
  04f01b4  addic 7, 1, 112
  04f01b8  ori 5, 26, 0
  04f01bc  stvx 2, 3, 1
  04f01c0  lwz 3, 428(31)
  04f01c4  lwz 4, 432(31)
  04f01c8  bl 0x64f8e4
  04f01cc  ld 2, 40(1)
  04f01d0  ori 29, 3, 0
  04f01d4  cmpwi 29, 0
  04f01d8  bf 0, 0x4f028c
  04f01dc  lis 3, -32766
  04f01e0  ori 3, 3, 10515
  04f01e4  cmpw 29, 3
  04f01e8  bf 2, 0x4f0208
  04f01ec  ori 3, 28, 0
  04f01f0  ori 4, 29, 0
  04f01f4  ori 5, 26, 0
  04f01f8  bl 0x4ffc9c
  04f01fc  nop
  04f0200  li 27, 1
  04f0204  b 0x4f028c
  04f0208  lwz 3, 432(31)
  04f020c  cmpwi 3, 0
  04f0210  bt 2, 0x4f0238
  04f0214  bl 0x64f884
  04f0218  ld 2, 40(1)
  04f021c  cmpwi 3, 0
  04f0220  bf 0, 0x4f0238
  04f0224  lis 5, 102
  04f0228  ori 4, 3, 0
  04f022c  addic 3, 5, -18592
  04f0230  bl 0x4ffc9c
  04f0234  nop
  04f0238  lwz 3, 428(31)
  04f023c  cmpwi 3, 0
  04f0240  bt 2, 0x4f0268
  04f0244  bl 0x64f824
  04f0248  ld 2, 40(1)
  04f024c  cmpwi 3, 0
  04f0250  bf 0, 0x4f0268
  04f0254  lis 5, 102
  04f0258  ori 4, 3, 0
  04f025c  addic 3, 5, -18536
  04f0260  bl 0x4ffc9c
  04f0264  nop
  04f0268  lis 3, 102
  04f026c  stb 30, 4(31)
  04f0270  lis 4, 102
  04f0274  ori 5, 29, 0
  04f0278  addic 3, 3, -18484
  04f027c  addic 4, 4, -18232
  04f0280  bl 0x4ffc9c
  04f0284  nop
  04f0288  b 0x4f02e8
  04f028c  li 4, 0
  04f0290  lbz 5, 124(1)
  04f0294  slwi 3, 26, 3
  04f0298  subc 4, 4, 27
  04f029c  addc 3, 31, 3
  04f02a0  cntlzw 4, 4
  04f02a4  clrldi 7, 3, 32
  04f02a8  li 6, 0
  04f02ac  sldi 3, 4, 58
  04f02b0  subc 4, 5, 6
  04f02b4  sradi 3, 3, 63
  04f02b8  li 11, 141
  04f02bc  and 4, 3, 4
  04f02c0  stw 26, 8(7)
  04f02c4  li 3, 32000
  04f02c8  addc 4, 6, 4
  04f02cc  stw 4, 12(7)
  04f02d0  sc
  04f02d4  addic 26, 26, 1
  04f02d8  lwz 3, 436(31)
  04f02dc  extsw 26, 26
  04f02e0  cmplw 26, 3
  04f02e4  bt 0, 0x4f018c
  04f02e8  ld 0, 1360(1)
  04f02ec  mtlr 0
  04f02f0  ld 26, 1296(1)
  04f02f4  ld 27, 1304(1)
  04f02f8  ld 28, 1312(1)
  04f02fc  ld 29, 1320(1)
  04f0300  ld 30, 1328(1)
  04f0304  ld 31, 1336(1)
  04f0308  addi 1, 1, 1344
  04f030c  blr

idol::NPTrophyUnlock:   # 0x4f0310, 0xcc bytes
  04f0310  stdu 1, -128(1)
  04f0314  mflr 0
  04f0318  std 0, 144(1)
  04f031c  std 31, 120(1)
  04f0320  ori 31, 3, 0
  04f0324  cmpwi 1, 4, 0
  04f0328  ori 3, 4, 0
  04f032c  lbz 4, 4(31)
  04f0330  cmpwi 4, 0
  04f0334  bt 2, 0x4f03c8
  04f0338  lbz 4, 396(31)
  04f033c  cmpwi 4, 0
  04f0340  bt 2, 0x4f03c8
  04f0344  bt 4, 0x4f0354
  04f0348  lwz 4, 436(31)
  04f034c  cmplw 3, 4
  04f0350  bf 1, 0x4f0368
  04f0354  lis 3, 102
  04f0358  addic 3, 3, -18204
  04f035c  bl 0x4ffc9c
  04f0360  nop
  04f0364  b 0x4f03c8
  04f0368  clrlwi 4, 3, 24
  04f036c  addic 3, 31, 404
  04f0370  bl 0x4f0ce8
  04f0374  nop
  04f0378  lwz 3, 392(31)
  04f037c  cmpwi 3, 2
  04f0380  bt 2, 0x4f03c8
  04f0384  lis 4, 113
  04f0388  addic 3, 1, 112
  04f038c  lis 9, 102
  04f0390  li 5, 0
  04f0394  li 6, 1001
  04f0398  addic 4, 4, 872
  04f039c  li 8, 0
  04f03a0  addic 9, 9, -18156
  04f03a4  li 7, 16384
  04f03a8  bl 0x650524
  04f03ac  ld 2, 40(1)
  04f03b0  cmpwi 3, 0
  04f03b4  bt 2, 0x4f03c8
  04f03b8  lis 3, 102
  04f03bc  addic 3, 3, -18140
  04f03c0  bl 0x4ffc9c
  04f03c4  nop
  04f03c8  ld 0, 144(1)
  04f03cc  mtlr 0
  04f03d0  ld 31, 120(1)
  04f03d4  addi 1, 1, 128
  04f03d8  blr

FUN_004f03dc:   # 0x4f03dc, 0x120 bytes
  04f03dc  stdu 1, -128(1)
  04f03e0  mflr 0
  04f03e4  std 0, 144(1)
  04f03e8  std 31, 120(1)
  04f03ec  ori 31, 3, 0
  04f03f0  ori 3, 4, 0
  04f03f4  lbz 4, 4(31)
  04f03f8  cmpwi 4, 0
  04f03fc  bt 2, 0x4f04e8
  04f0400  lbz 4, 396(31)
  04f0404  cmpwi 4, 0
  04f0408  bt 2, 0x4f04e8
  04f040c  bl 0x503554
  04f0410  nop
  04f0414  ori 5, 3, 0
  04f0418  lwz 3, 436(31)
  04f041c  li 4, 0
  04f0420  cmpwi 3, 0
  04f0424  bt 2, 0x4f04e8
  04f0428  lbz 7, 4(31)
  04f042c  ori 6, 31, 0
  04f0430  lbz 8, 396(31)
  04f0434  cmpwi 1, 7, 0
  04f0438  cmpwi 6, 8, 0
  04f043c  lwz 7, 8(6)
  04f0440  cmpw 7, 5
  04f0444  bf 2, 0x4f04d8
  04f0448  bt 6, 0x4f04e8
  04f044c  cmpwi 1, 4, 0
  04f0450  bt 26, 0x4f04e8
  04f0454  bt 4, 0x4f0460
  04f0458  cmplw 4, 3
  04f045c  bf 1, 0x4f0474
  04f0460  lis 3, 102
  04f0464  addic 3, 3, -18204
  04f0468  bl 0x4ffc9c
  04f046c  nop
  04f0470  b 0x4f04e8
  04f0474  addic 3, 31, 404
  04f0478  clrlwi 4, 4, 24
  04f047c  bl 0x4f0ce8
  04f0480  nop
  04f0484  lwz 3, 392(31)
  04f0488  cmpwi 3, 2
  04f048c  bt 2, 0x4f04e8
  04f0490  lis 4, 113
  04f0494  addic 3, 1, 112
  04f0498  lis 9, 102
  04f049c  li 5, 0
  04f04a0  li 6, 1001
  04f04a4  li 7, 16384
  04f04a8  addic 4, 4, 872
  04f04ac  li 8, 0
  04f04b0  addic 9, 9, -18156
  04f04b4  bl 0x650524
  04f04b8  ld 2, 40(1)
  04f04bc  cmpwi 3, 0
  04f04c0  bt 2, 0x4f04e8
  04f04c4  lis 3, 102
  04f04c8  addic 3, 3, -18140
  04f04cc  bl 0x4ffc9c
  04f04d0  nop
  04f04d4  b 0x4f04e8
  04f04d8  addic 4, 4, 1
  04f04dc  addic 6, 6, 8
  04f04e0  cmplw 4, 3
  04f04e4  bt 0, 0x4f043c
  04f04e8  ld 0, 144(1)
  04f04ec  mtlr 0
  04f04f0  ld 31, 120(1)
  04f04f4  addi 1, 1, 128
  04f04f8  blr

FUN_004f04fc:   # 0x4f04fc, 0x124 bytes
  04f04fc  stdu 1, -1328(1)
  04f0500  mflr 0
  04f0504  std 0, 1344(1)
  04f0508  std 31, 1320(1)
  04f050c  std 29, 1304(1)
  04f0510  ori 31, 3, 0
  04f0514  ori 29, 4, 0
  04f0518  addic 6, 1, 128
  04f051c  ori 5, 29, 0
  04f0520  addic 7, 1, 112
  04f0524  lwz 3, 428(31)
  04f0528  std 30, 1312(1)
  04f052c  lwz 4, 432(31)
  04f0530  bl 0x64f8e4
  04f0534  ld 2, 40(1)
  04f0538  ori 30, 3, 0
  04f053c  cmpwi 30, 0
  04f0540  bf 0, 0x4f0600
  04f0544  lis 3, -32766
  04f0548  ori 3, 3, 10515
  04f054c  cmpw 30, 3
  04f0550  bf 2, 0x4f0574
  04f0554  lis 3, 102
  04f0558  ori 4, 30, 0
  04f055c  addic 3, 3, -18312
  04f0560  ori 5, 29, 0
  04f0564  bl 0x4ffc9c
  04f0568  nop
  04f056c  li 3, 0
  04f0570  b 0x4f0604
  04f0574  lwz 3, 432(31)
  04f0578  cmpwi 3, 0
  04f057c  bt 2, 0x4f05a4
  04f0580  bl 0x64f884
  04f0584  ld 2, 40(1)
  04f0588  cmpwi 3, 0
  04f058c  bf 0, 0x4f05a4
  04f0590  lis 5, 102
  04f0594  ori 4, 3, 0
  04f0598  addic 3, 5, -18592
  04f059c  bl 0x4ffc9c
  04f05a0  nop
  04f05a4  lwz 3, 428(31)
  04f05a8  cmpwi 3, 0
  04f05ac  bt 2, 0x4f05d4
  04f05b0  bl 0x64f824
  04f05b4  ld 2, 40(1)
  04f05b8  cmpwi 3, 0
  04f05bc  bf 0, 0x4f05d4
  04f05c0  lis 5, 102
  04f05c4  ori 4, 3, 0
  04f05c8  addic 3, 5, -18536
  04f05cc  bl 0x4ffc9c
  04f05d0  nop
  04f05d4  li 29, 0
  04f05d8  lis 3, 102
  04f05dc  lis 4, 102
  04f05e0  addic 3, 3, -18484
  04f05e4  ori 5, 30, 0
  04f05e8  stb 29, 4(31)
  04f05ec  addic 4, 4, -18232
  04f05f0  bl 0x4ffc9c
  04f05f4  nop
  04f05f8  ori 3, 29, 0
  04f05fc  b 0x4f0604
  04f0600  lbz 3, 124(1)
  04f0604  ld 0, 1344(1)
  04f0608  mtlr 0
  04f060c  ld 29, 1304(1)
  04f0610  ld 30, 1312(1)
  04f0614  ld 31, 1320(1)
  04f0618  addi 1, 1, 1328
  04f061c  blr

FUN_004f0620:   # 0x4f0620, 0x84 bytes
  04f0620  stdu 1, -144(1)
  04f0624  mflr 0
  04f0628  std 0, 160(1)
  04f062c  std 31, 136(1)
  04f0630  std 30, 128(1)
  04f0634  addic 31, 3, 404
  04f0638  li 30, -1
  04f063c  std 29, 120(1)
  04f0640  ori 3, 31, 0
  04f0644  bl 0x4f0de8
  04f0648  nop
  04f064c  cmpwi 3, 0
  04f0650  bf 1, 0x4f0684
  04f0654  addic 4, 3, -1
  04f0658  ori 3, 31, 0
  04f065c  extsw 30, 4
  04f0660  ori 4, 30, 0
  04f0664  bl 0x4f0d50
  04f0668  nop
  04f066c  ori 29, 3, 0
  04f0670  ori 4, 30, 0
  04f0674  ori 3, 31, 0
  04f0678  bl 0x4f0d9c
  04f067c  nop
  04f0680  lbz 30, 0(29)
  04f0684  ori 3, 30, 0
  04f0688  ld 0, 160(1)
  04f068c  mtlr 0
  04f0690  ld 29, 120(1)
  04f0694  ld 30, 128(1)
  04f0698  ld 31, 136(1)
  04f069c  addi 1, 1, 144
  04f06a0  blr

FUN_004f06a4:   # 0x4f06a4, 0x4 bytes
  04f06a4  blr

FUN_004f06a8:   # 0x4f06a8, 0x4 bytes
  04f06a8  blr

FUN_004f06ac:   # 0x4f06ac, 0x17c bytes
  04f06ac  stdu 1, -144(1)
  04f06b0  mflr 0
  04f06b4  std 0, 160(1)
  04f06b8  std 30, 128(1)
  04f06bc  lis 30, 144
  04f06c0  std 31, 136(1)
  04f06c4  li 3, 0
  04f06c8  lwz 30, -21540(30)
  04f06cc  std 3, 112(1)
  04f06d0  bl 0x4e7404
  04f06d4  nop
  04f06d8  lwz 3, 1136(3)
  04f06dc  li 4, 1
  04f06e0  lwz 6, 428(30)
  04f06e4  subfic 3, 3, 5
  04f06e8  lwz 7, 432(30)
  04f06ec  sldi 3, 3, 19
  04f06f0  stw 4, 392(30)
  04f06f4  subfic 5, 3, 0
  04f06f8  sldi 3, 3, 2
  04f06fc  ori 4, 7, 0
  04f0700  addc 3, 5, 3
  04f0704  addic 5, 1, 112
  04f0708  addic 3, 3, 1023
  04f070c  srawi 31, 3, 10
  04f0710  ori 3, 6, 0
  04f0714  addze 31, 31
  04f0718  li 6, 0
  04f071c  bl 0x64f804
  04f0720  ld 2, 40(1)
  04f0724  cmpwi 3, 0
  04f0728  bt 2, 0x4f0740
  04f072c  lis 5, 102
  04f0730  ori 4, 3, 0
  04f0734  addic 3, 5, -18096
  04f0738  bl 0x5cd098
  04f073c  nop
  04f0740  lis 3, 144
  04f0744  ld 4, 112(1)
  04f0748  li 5, 1
  04f074c  addic 4, 4, 1023
  04f0750  rldicl 6, 4, 54, 10
  04f0754  lwz 3, -21548(3)
  04f0758  addc 4, 31, 6
  04f075c  extsw 4, 4
  04f0760  std 6, 112(1)
  04f0764  bl 0x4ee65c
  04f0768  nop
  04f076c  lwz 4, 428(30)
  04f0770  lis 5, 113
  04f0774  stw 3, 400(30)
  04f0778  li 6, 0
  04f077c  ori 3, 4, 0
  04f0780  lwz 8, 432(30)
  04f0784  addic 5, 5, 880
  04f0788  li 7, 0
  04f078c  ori 4, 8, 0
  04f0790  bl 0x64f7c4
  04f0794  ld 2, 40(1)
  04f0798  clrldi 31, 3, 32
  04f079c  lis 3, 102
  04f07a0  ori 4, 31, 0
  04f07a4  addic 3, 3, -18024
  04f07a8  bl 0x4ffc9c
  04f07ac  nop
  04f07b0  lis 3, -32766
  04f07b4  ori 3, 3, 10535
  04f07b8  cmpw 31, 3
  04f07bc  bf 1, 0x4f07e0
  04f07c0  lis 3, -32766
  04f07c4  ori 3, 3, 10538
  04f07c8  cmpw 31, 3
  04f07cc  bf 1, 0x4f07e0
  04f07d0  cmpwi 31, 0
  04f07d4  bf 2, 0x4f07e0
  04f07d8  ori 3, 30, 0
  04f07dc  bl 0x4f0094
  04f07e0  cmpwi 31, 0
  04f07e4  bt 2, 0x4f07fc
  04f07e8  lis 3, 102
  04f07ec  ori 4, 31, 0
  04f07f0  addic 3, 3, -17968
  04f07f4  bl 0x4ffc9c
  04f07f8  nop
  04f07fc  li 4, 0
  04f0800  li 3, 0
  04f0804  stw 4, 392(30)
  04f0808  bl 0x650744
  04f080c  ld 2, 40(1)
  04f0810  ld 0, 160(1)
  04f0814  mtlr 0
  04f0818  ld 30, 128(1)
  04f081c  ld 31, 136(1)
  04f0820  addi 1, 1, 144
  04f0824  blr

FUN_004f0828:   # 0x4f0828, 0x278 bytes
  04f0828  stdu 1, -208(1)
  04f082c  mflr 0
  04f0830  std 0, 224(1)
  04f0834  std 31, 200(1)
  04f0838  lis 31, 144
  04f083c  std 30, 192(1)
  04f0840  li 4, 2
  04f0844  std 28, 176(1)
  04f0848  li 30, -1
  04f084c  ori 28, 30, 0
  04f0850  std 29, 184(1)
  04f0854  lwz 31, -21540(31)
  04f0858  addic 29, 31, 404
  04f085c  ori 3, 29, 0
  04f0860  std 27, 168(1)
  04f0864  std 26, 160(1)
  04f0868  std 25, 152(1)
  04f086c  std 24, 144(1)
  04f0870  std 23, 136(1)
  04f0874  std 22, 128(1)
  04f0878  std 21, 120(1)
  04f087c  stw 4, 392(31)
  04f0880  bl 0x4f0de8
  04f0884  nop
  04f0888  cmpwi 3, 0
  04f088c  bf 1, 0x4f08c0
  04f0890  addic 4, 3, -1
  04f0894  ori 3, 29, 0
  04f0898  extsw 30, 4
  04f089c  ori 4, 30, 0
  04f08a0  bl 0x4f0d50
  04f08a4  nop
  04f08a8  ori 27, 3, 0
  04f08ac  ori 4, 30, 0
  04f08b0  ori 3, 29, 0
  04f08b4  bl 0x4f0d9c
  04f08b8  nop
  04f08bc  lbz 30, 0(27)
  04f08c0  ori 3, 30, 0
  04f08c4  cmpwi 3, -1
  04f08c8  bt 2, 0x4f0a50
  04f08cc  lis 26, 102
  04f08d0  lis 22, 102
  04f08d4  lis 25, 102
  04f08d8  lis 24, 102
  04f08dc  lis 23, 102
  04f08e0  addic 27, 31, 12
  04f08e4  addic 26, 26, -17924
  04f08e8  addic 22, 22, -17844
  04f08ec  addic 25, 25, -18592
  04f08f0  addic 24, 24, -18536
  04f08f4  addic 23, 23, -17884
  04f08f8  sldi 4, 3, 3
  04f08fc  stw 28, 112(1)
  04f0900  addc 30, 4, 27
  04f0904  clrldi 30, 30, 32
  04f0908  lwz 4, 0(30)
  04f090c  cmpwi 4, 0
  04f0910  bf 2, 0x4f09dc
  04f0914  ori 5, 3, 0
  04f0918  lwz 3, 428(31)
  04f091c  addic 6, 1, 112
  04f0920  lwz 4, 432(31)
  04f0924  bl 0x64f8a4
  04f0928  ld 2, 40(1)
  04f092c  cmpwi 3, 0
  04f0930  bf 2, 0x4f095c
  04f0934  lwz 3, 112(1)
  04f0938  cmpwi 3, -1
  04f093c  bt 2, 0x4f0950
  04f0940  extsw 4, 3
  04f0944  ori 3, 26, 0
  04f0948  bl 0x4ffc9c
  04f094c  nop
  04f0950  li 3, 1
  04f0954  stw 3, 0(30)
  04f0958  b 0x4f09ec
  04f095c  lis 4, -32766
  04f0960  ori 4, 4, 10512
  04f0964  cmpw 3, 4
  04f0968  bf 2, 0x4f09ec
  04f096c  lwz 3, 432(31)
  04f0970  cmpwi 3, 0
  04f0974  bt 2, 0x4f0998
  04f0978  bl 0x64f884
  04f097c  ld 2, 40(1)
  04f0980  cmpwi 3, 0
  04f0984  bf 0, 0x4f0998
  04f0988  ori 4, 3, 0
  04f098c  ori 3, 25, 0
  04f0990  bl 0x4ffc9c
  04f0994  nop
  04f0998  lwz 3, 428(31)
  04f099c  cmpwi 3, 0
  04f09a0  bt 2, 0x4f09c4
  04f09a4  bl 0x64f824
  04f09a8  ld 2, 40(1)
  04f09ac  cmpwi 3, 0
  04f09b0  bf 0, 0x4f09c4
  04f09b4  ori 4, 3, 0
  04f09b8  ori 3, 24, 0
  04f09bc  bl 0x4ffc9c
  04f09c0  nop
  04f09c4  li 4, 0
  04f09c8  ori 3, 23, 0
  04f09cc  stb 4, 4(31)
  04f09d0  bl 0x4ffc9c
  04f09d4  nop
  04f09d8  b 0x4f09ec
  04f09dc  ori 4, 3, 0
  04f09e0  ori 3, 22, 0
  04f09e4  bl 0x4ffc9c
  04f09e8  nop
  04f09ec  lis 3, 1
  04f09f0  li 11, 141
  04f09f4  ori 3, 3, 34464
  04f09f8  sc
  04f09fc  ori 3, 29, 0
  04f0a00  ori 30, 28, 0
  04f0a04  bl 0x4f0de8
  04f0a08  nop
  04f0a0c  cmpwi 3, 0
  04f0a10  bf 1, 0x4f0a44
  04f0a14  addic 4, 3, -1
  04f0a18  ori 3, 29, 0
  04f0a1c  extsw 30, 4
  04f0a20  ori 4, 30, 0
  04f0a24  bl 0x4f0d50
  04f0a28  nop
  04f0a2c  ori 21, 3, 0
  04f0a30  ori 4, 30, 0
  04f0a34  ori 3, 29, 0
  04f0a38  bl 0x4f0d9c
  04f0a3c  nop
  04f0a40  lbz 30, 0(21)
  04f0a44  ori 3, 30, 0
  04f0a48  cmpwi 3, -1
  04f0a4c  bf 2, 0x4f08f8
  04f0a50  li 4, 0
  04f0a54  li 3, 0
  04f0a58  stw 4, 392(31)
  04f0a5c  bl 0x650744
  04f0a60  ld 2, 40(1)
  04f0a64  ld 0, 224(1)
  04f0a68  mtlr 0
  04f0a6c  ld 21, 120(1)
  04f0a70  ld 22, 128(1)
  04f0a74  ld 23, 136(1)
  04f0a78  ld 24, 144(1)
  04f0a7c  ld 25, 152(1)
  04f0a80  ld 26, 160(1)
  04f0a84  ld 27, 168(1)
  04f0a88  ld 28, 176(1)
  04f0a8c  ld 29, 184(1)
  04f0a90  ld 30, 192(1)
  04f0a94  ld 31, 200(1)
  04f0a98  addi 1, 1, 208
  04f0a9c  blr

FUN_004f0ac8:   # 0x4f0ac8, 0x1bc bytes
  04f0ac8  stdu 1, -80(1)
  04f0acc  ori 7, 4, 0
  04f0ad0  stw 6, 48(1)
  04f0ad4  lis 4, 79
  04f0ad8  stw 6, 52(1)
  04f0adc  li 8, 0
  04f0ae0  stw 6, 56(1)
  04f0ae4  li 0, 48
  04f0ae8  stw 6, 60(1)
  04f0aec  addi 4, 4, 2720
  04f0af0  cmpwi 7, 8
  04f0af4  cmpw 1, 5, 6
  04f0af8  cmpwi 6, 7, 5
  04f0afc  lvx 3, 1, 0
  04f0b00  ori 3, 8, 0
  04f0b04  stw 5, 48(1)
  04f0b08  li 0, 48
  04f0b0c  stw 5, 52(1)
  04f0b10  cmpwi 7, 7, 6
  04f0b14  stw 5, 56(1)
  04f0b18  stw 5, 60(1)
  04f0b1c  lfs 1, 0(4)
  04f0b20  lvx 4, 1, 0
  04f0b24  fmr 2, 1
  04f0b28  bt 2, 0x4f0b7c
  04f0b2c  cmpwi 7, 7
  04f0b30  bt 2, 0x4f0b68
  04f0b34  bt 30, 0x4f0b54
  04f0b38  vspltisw 2, 0
  04f0b3c  bf 26, 0x4f0b84
  04f0b40  li 7, 4
  04f0b44  lfs 1, 4(4)
  04f0b48  lvlx 2, 7, 4
  04f0b4c  vspltw 2, 2, 0
  04f0b50  b 0x4f0b84
  04f0b54  li 7, 8
  04f0b58  lfs 1, 8(4)
  04f0b5c  lvlx 2, 7, 4
  04f0b60  vspltw 2, 2, 0
  04f0b64  b 0x4f0b84
  04f0b68  li 7, 4
  04f0b6c  lfs 1, 4(4)
  04f0b70  lvlx 2, 7, 4
  04f0b74  vspltw 2, 2, 0
  04f0b78  b 0x4f0b84
  04f0b7c  li 8, 100
  04f0b80  vspltisw 2, 0
  04f0b84  fcmpu 0, 1, 2
  04f0b88  bt 2, 0x4f0c7c
  04f0b8c  extsw 5, 5
  04f0b90  vcfsx 3, 3, 0
  04f0b94  extsw 6, 6
  04f0b98  vspltisw 5, -1
  04f0b9c  std 5, 64(1)
  04f0ba0  li 5, 12
  04f0ba4  vslw 5, 5, 5
  04f0ba8  vspltisw 9, -1
  04f0bac  vcfsx 4, 4, 0
  04f0bb0  vspltisw 10, -1
  04f0bb4  vrefp 6, 3
  04f0bb8  vslw 10, 10, 10
  04f0bbc  lfd 2, 64(1)
  04f0bc0  std 6, 64(1)
  04f0bc4  lvlx 7, 5, 4
  04f0bc8  lfd 3, 64(1)
  04f0bcc  fcfid 2, 2
  04f0bd0  vspltw 7, 7, 0
  04f0bd4  fcfid 3, 3
  04f0bd8  lis 4, 144
  04f0bdc  vnmsubfp 8, 6, 3, 7
  04f0be0  li 5, -21420
  04f0be4  frsp 2, 2
  04f0be8  frsp 3, 3
  04f0bec  vmaddfp 5, 6, 8, 5
  04f0bf0  vslw 6, 9, 9
  04f0bf4  vspltisw 9, -1
  04f0bf8  fdivs 2, 2, 3
  04f0bfc  vslw 9, 9, 9
  04f0c00  lfs 3, -21420(4)
  04f0c04  vnmsubfp 8, 5, 3, 7
  04f0c08  vmaddfp 5, 5, 8, 6
  04f0c0c  lvlx 6, 5, 4
  04f0c10  vnmsubfp 3, 5, 3, 7
  04f0c14  vmaddfp 3, 5, 3, 9
  04f0c18  vmaddfp 3, 3, 4, 10
  04f0c1c  fmadds 1, 2, 1, 3
  04f0c20  vmaddfp 2, 3, 2, 6
  04f0c24  bf 6, 0x4f0c38
  04f0c28  vspltw 3, 2, 0
  04f0c2c  lis 4, 144
  04f0c30  li 5, -21420
  04f0c34  stvewx 3, 5, 4
  04f0c38  lis 4, 144
  04f0c3c  li 5, -21424
  04f0c40  vspltw 2, 2, 0
  04f0c44  lvlx 3, 5, 4
  04f0c48  lfs 2, -21424(4)
  04f0c4c  vspltw 3, 3, 0
  04f0c50  vcmpgefp. 3, 3, 2
  04f0c54  bf 26, 0x4f0c68
  04f0c58  fsubs 1, 1, 2
  04f0c5c  fctidz 1, 1
  04f0c60  stfd 1, 64(1)
  04f0c64  lwz 8, 68(1)
  04f0c68  cmpwi 8, 0
  04f0c6c  bt 2, 0x4f0c7c
  04f0c70  lis 4, 144
  04f0c74  li 5, -21424
  04f0c78  stvewx 2, 5, 4
  04f0c7c  addi 1, 1, 80
  04f0c80  blr

FUN_004f0c84:   # 0x4f0c84, 0x14 bytes
  04f0c84  lis 3, 144
  04f0c88  lis 4, 1
  04f0c8c  addic 3, 3, -21532
  04f0c90  stw 4, 72(3)
  04f0c94  blr

FUN_004f0c98:   # 0x4f0c98, 0x28 bytes
  04f0c98  li 4, 0
  04f0c9c  li 5, 1
  04f0ca0  stw 4, 20(3)
  04f0ca4  stw 4, 12(3)
  04f0ca8  stb 5, 1(3)
  04f0cac  stb 5, 3(3)
  04f0cb0  stb 5, 5(3)
  04f0cb4  stb 5, 7(3)
  04f0cb8  stb 5, 9(3)
  04f0cbc  blr

FUN_004f0cc0:   # 0x4f0cc0, 0x28 bytes
  04f0cc0  li 4, 0
  04f0cc4  li 5, 1
  04f0cc8  stw 4, 20(3)
  04f0ccc  stw 4, 12(3)
  04f0cd0  stb 5, 1(3)
  04f0cd4  stb 5, 3(3)
  04f0cd8  stb 5, 5(3)
  04f0cdc  stb 5, 7(3)
  04f0ce0  stb 5, 9(3)
  04f0ce4  blr

FUN_004f0ce8:   # 0x4f0ce8, 0x68 bytes
  04f0ce8  li 6, 0
  04f0cec  ori 7, 4, 0
  04f0cf0  ori 5, 6, 0
  04f0cf4  ori 4, 3, 0
  04f0cf8  lbz 8, 1(4)
  04f0cfc  cmpwi 8, 0
  04f0d00  bt 2, 0x4f0d10
  04f0d04  cmpwi 6, 0
  04f0d08  bt 0, 0x4f0d4c
  04f0d0c  b 0x4f0d24
  04f0d10  addic 6, 6, 1
  04f0d14  addic 4, 4, 2
  04f0d18  cmpwi 6, 5
  04f0d1c  bt 0, 0x4f0cf8
  04f0d20  b 0x4f0d4c
  04f0d24  slwi 4, 6, 1
  04f0d28  lwz 9, 12(3)
  04f0d2c  addc 8, 3, 4
  04f0d30  extsw 4, 4
  04f0d34  stw 6, 20(3)
  04f0d38  clrldi 8, 8, 32
  04f0d3c  addic 6, 9, 1
  04f0d40  stbx 7, 3, 4
  04f0d44  stb 5, 1(8)
  04f0d48  stw 6, 12(3)
  04f0d4c  blr

FUN_004f0d50:   # 0x4f0d50, 0x4c bytes
  04f0d50  lwz 5, 12(3)
  04f0d54  cmpwi 5, 0
  04f0d58  bf 2, 0x4f0d64
  04f0d5c  li 3, 0
  04f0d60  b 0x4f0d98
  04f0d64  lwz 6, 20(3)
  04f0d68  li 5, 0
  04f0d6c  subc 4, 6, 4
  04f0d70  sldi 6, 4, 1
  04f0d74  extsw 4, 4
  04f0d78  addc 3, 3, 6
  04f0d7c  subc 4, 4, 5
  04f0d80  addic 5, 3, 10
  04f0d84  sradi 4, 4, 63
  04f0d88  subc 5, 5, 3
  04f0d8c  and 4, 4, 5
  04f0d90  addc 3, 3, 4
  04f0d94  clrldi 3, 3, 32
  04f0d98  blr

FUN_004f0d9c:   # 0x4f0d9c, 0x4c bytes
  04f0d9c  lwz 5, 12(3)
  04f0da0  cmpwi 5, 0
  04f0da4  bt 2, 0x4f0de4
  04f0da8  lwz 5, 20(3)
  04f0dac  subc 4, 5, 4
  04f0db0  sldi 5, 4, 1
  04f0db4  cmpwi 4, 0
  04f0db8  addc 4, 3, 5
  04f0dbc  clrldi 4, 4, 32
  04f0dc0  bt 0, 0x4f0dd0
  04f0dc4  li 5, 1
  04f0dc8  stb 5, 1(4)
  04f0dcc  b 0x4f0dd8
  04f0dd0  li 5, 1
  04f0dd4  stb 5, 11(4)
  04f0dd8  lwz 4, 12(3)
  04f0ddc  addic 4, 4, -1
  04f0de0  stw 4, 12(3)
  04f0de4  blr

FUN_004f0de8:   # 0x4f0de8, 0xc bytes
  04f0de8  lwz 3, 12(3)
  04f0dec  extsw 3, 3
  04f0df0  blr

FUN_004f0df4:   # 0x4f0df4, 0x30 bytes
  04f0df4  li 4, 0
  04f0df8  li 6, 1
  04f0dfc  li 5, -1
  04f0e00  stw 4, 12(3)
  04f0e04  stb 6, 9(3)
  04f0e08  stb 6, 7(3)
  04f0e0c  stb 6, 5(3)
  04f0e10  stb 6, 3(3)
  04f0e14  stb 6, 1(3)
  04f0e18  stw 5, 16(3)
  04f0e1c  stw 4, 20(3)
  04f0e20  blr

FUN_004f0e28:   # 0x4f0e28, 0x1c bytes
  04f0e28  li 0, 0
  04f0e2c  stw 5, 0(3)
  04f0e30  stw 0, 16(3)
  04f0e34  stw 4, 8(3)
  04f0e38  stw 4, 4(3)
  04f0e3c  stw 0, 12(3)
  04f0e40  blr

FUN_004f0e44:   # 0x4f0e44, 0x1c bytes
  04f0e44  li 0, 0
  04f0e48  stw 5, 0(3)
  04f0e4c  stw 0, 16(3)
  04f0e50  stw 4, 8(3)
  04f0e54  stw 4, 4(3)
  04f0e58  stw 0, 12(3)
  04f0e5c  blr

FUN_004f0e60:   # 0x4f0e60, 0xc bytes
  04f0e60  lwz 0, 4(3)
  04f0e64  stw 0, 8(3)
  04f0e68  blr

FUN_004f0e6c:   # 0x4f0e6c, 0x14 bytes
  04f0e6c  lwz 9, 8(3)
  04f0e70  addi 9, 9, 15
  04f0e74  rlwinm 9, 9, 0, 0, 27
  04f0e78  stw 9, 8(3)
  04f0e7c  blr

FUN_004f0e80:   # 0x4f0e80, 0x14 bytes
  04f0e80  lwz 9, 8(3)
  04f0e84  addi 9, 9, 127
  04f0e88  rlwinm 9, 9, 0, 0, 24
  04f0e8c  stw 9, 8(3)
  04f0e90  blr

FUN_004f0e94:   # 0x4f0e94, 0x14 bytes
  04f0e94  lwz 9, 8(3)
  04f0e98  li 0, 0
  04f0e9c  stw 9, 12(3)
  04f0ea0  stw 0, 20(3)
  04f0ea4  blr

FUN_004f0ea8:   # 0x4f0ea8, 0x14 bytes
  04f0ea8  lwz 9, 8(3)
  04f0eac  li 0, 0
  04f0eb0  stw 9, 16(3)
  04f0eb4  stw 0, 20(3)
  04f0eb8  blr

FUN_004f0ebc:   # 0x4f0ebc, 0x18 bytes
  04f0ebc  mr 9, 3
  04f0ec0  lwz 3, 8(3)
  04f0ec4  addi 0, 3, 8
  04f0ec8  clrldi 3, 3, 32
  04f0ecc  stw 0, 8(9)
  04f0ed0  blr

FUN_004f0ed4:   # 0x4f0ed4, 0x18 bytes
  04f0ed4  mr 9, 3
  04f0ed8  lwz 3, 8(3)
  04f0edc  add 4, 3, 4
  04f0ee0  clrldi 3, 3, 32
  04f0ee4  stw 4, 8(9)
  04f0ee8  blr

FUN_004f0eec:   # 0x4f0eec, 0x24 bytes
  04f0eec  li 9, 6
  04f0ef0  li 0, 0
  04f0ef4  rldimi 0, 9, 41, 20
  04f0ef8  lwz 9, 8(3)
  04f0efc  mr 11, 9
  04f0f00  addi 9, 9, 8
  04f0f04  stw 9, 8(3)
  04f0f08  std 0, 0(11)
  04f0f0c  blr

FUN_004f0f10:   # 0x4f0f10, 0x3c bytes
  04f0f10  li 9, 1
  04f0f14  li 0, 0
  04f0f18  clrlwi 4, 4, 28
  04f0f1c  rldimi 0, 9, 41, 20
  04f0f20  lwz 9, 8(3)
  04f0f24  clrlwi 5, 5, 25
  04f0f28  rldimi 0, 4, 37, 23
  04f0f2c  mr 11, 9
  04f0f30  rldimi 0, 6, 24, 32
  04f0f34  addi 9, 9, 8
  04f0f38  rldimi 0, 7, 16, 40
  04f0f3c  stw 9, 8(3)
  04f0f40  rldimi 0, 5, 8, 49
  04f0f44  std 0, 0(11)
  04f0f48  blr

FUN_004f0f4c:   # 0x4f0f4c, 0x1c bytes
  04f0f4c  lwz 9, 8(3)
  04f0f50  li 0, 0
  04f0f54  mr 11, 9
  04f0f58  addi 9, 9, 8
  04f0f5c  stw 9, 8(3)
  04f0f60  std 0, 0(11)
  04f0f64  blr

FUN_004f0f68:   # 0x4f0f68, 0x30 bytes
  04f0f68  lwz 9, 8(3)
  04f0f6c  li 0, 0
  04f0f70  mr 11, 9
  04f0f74  addi 9, 9, 8
  04f0f78  stw 9, 8(3)
  04f0f7c  li 9, 4
  04f0f80  std 0, 0(11)
  04f0f84  stw 4, 4(11)
  04f0f88  ld 0, 0(11)
  04f0f8c  rldimi 0, 9, 41, 20
  04f0f90  std 0, 0(11)
  04f0f94  blr

FUN_004f0f98:   # 0x4f0f98, 0x80 bytes
  04f0f98  srwi 6, 6, 4
  04f0f9c  li 12, 0
  04f0fa0  rldicl 7, 7, 60, 50
  04f0fa4  rldimi 12, 6, 4, 32
  04f0fa8  li 0, 0
  04f0fac  rldimi 12, 7, 50, 0
  04f0fb0  ori 0, 0, 32768
  04f0fb4  rldicl 10, 12, 15, 1
  04f0fb8  sldi 0, 0, 32
  04f0fbc  rotldi 10, 10, 49
  04f0fc0  li 11, 16384
  04f0fc4  or 10, 10, 0
  04f0fc8  sldi 11, 11, 32
  04f0fcc  rldicl 0, 8, 63, 63
  04f0fd0  or 12, 10, 11
  04f0fd4  lwz 11, 8(3)
  04f0fd8  clrlwi 8, 8, 31
  04f0fdc  rldimi 12, 0, 45, 18
  04f0fe0  li 0, 2
  04f0fe4  rldimi 12, 8, 44, 19
  04f0fe8  clrlwi 4, 4, 28
  04f0fec  rldimi 12, 0, 41, 20
  04f0ff0  clrlwi 5, 5, 27
  04f0ff4  rldimi 12, 4, 37, 23
  04f0ff8  clrlwi 9, 9, 29
  04f0ffc  rldimi 12, 5, 32, 27
  04f1000  mr 10, 11
  04f1004  rldimi 12, 9, 0, 61
  04f1008  addi 11, 11, 8
  04f100c  stw 11, 8(3)
  04f1010  std 12, 0(10)
  04f1014  blr

FUN_004f1018:   # 0x4f1018, 0x5c bytes
  04f1018  srwi 6, 6, 4
  04f101c  li 0, 0
  04f1020  rldicl 7, 7, 60, 50
  04f1024  rldimi 0, 6, 4, 32
  04f1028  li 9, 1
  04f102c  rldimi 0, 7, 50, 0
  04f1030  rldicl 11, 8, 63, 63
  04f1034  rldimi 0, 9, 47, 16
  04f1038  lwz 9, 8(3)
  04f103c  clrlwi 8, 8, 31
  04f1040  rldimi 0, 11, 45, 18
  04f1044  li 11, 2
  04f1048  rldimi 0, 8, 44, 19
  04f104c  clrlwi 4, 4, 28
  04f1050  rldimi 0, 11, 41, 20
  04f1054  clrlwi 5, 5, 27
  04f1058  rldimi 0, 4, 37, 23
  04f105c  mr 11, 9
  04f1060  rldimi 0, 5, 32, 27
  04f1064  addi 9, 9, 8
  04f1068  stw 9, 8(3)
  04f106c  std 0, 0(11)
  04f1070  blr

FUN_004f1074:   # 0x4f1074, 0x54 bytes
  04f1074  srwi 6, 6, 4
  04f1078  li 0, 0
  04f107c  rldicl 7, 7, 60, 50
  04f1080  rldimi 0, 6, 4, 32
  04f1084  rldicl 9, 8, 63, 63
  04f1088  rldimi 0, 7, 50, 0
  04f108c  clrlwi 8, 8, 31
  04f1090  rldimi 0, 9, 45, 18
  04f1094  lwz 9, 8(3)
  04f1098  li 11, 2
  04f109c  rldimi 0, 8, 44, 19
  04f10a0  clrlwi 4, 4, 28
  04f10a4  rldimi 0, 11, 41, 20
  04f10a8  clrlwi 5, 5, 27
  04f10ac  rldimi 0, 4, 37, 23
  04f10b0  mr 11, 9
  04f10b4  rldimi 0, 5, 32, 27
  04f10b8  addi 9, 9, 8
  04f10bc  stw 9, 8(3)
  04f10c0  std 0, 0(11)
  04f10c4  blr

FUN_004f10c8:   # 0x4f10c8, 0x28 bytes
  04f10c8  li 9, 3
  04f10cc  li 0, 0
  04f10d0  rldimi 0, 9, 41, 20
  04f10d4  lwz 9, 8(3)
  04f10d8  mr 11, 9
  04f10dc  addi 9, 9, 8
  04f10e0  stw 9, 8(3)
  04f10e4  std 0, 0(11)
  04f10e8  stw 4, 4(11)
  04f10ec  blr

FUN_004f10f0:   # 0x4f10f0, 0x54 bytes
  04f10f0  lwz 9, 8(4)
  04f10f4  clrldi 11, 3, 32
  04f10f8  lwz 0, 12(4)
  04f10fc  li 8, 1
  04f1100  addi 9, 9, 15
  04f1104  mr 3, 11
  04f1108  rlwinm 9, 9, 0, 0, 27
  04f110c  stw 9, 8(4)
  04f1110  stw 0, 4(11)
  04f1114  lwz 10, 12(4)
  04f1118  lwz 9, 8(4)
  04f111c  ld 0, 0(11)
  04f1120  sub 9, 9, 10
  04f1124  clrlwi 9, 9, 20
  04f1128  rldimi 0, 9, 48, 4
  04f112c  rldimi 0, 8, 60, 0
  04f1130  std 0, 0(11)
  04f1134  li 0, 0
  04f1138  sth 8, 2(11)
  04f113c  stw 0, 12(4)
  04f1140  blr

FUN_004f1144:   # 0x4f1144, 0x54 bytes
  04f1144  lwz 9, 8(4)
  04f1148  clrldi 10, 3, 32
  04f114c  lwz 0, 12(4)
  04f1150  li 8, 0
  04f1154  addi 9, 9, 15
  04f1158  mr 3, 10
  04f115c  rlwinm 9, 9, 0, 0, 27
  04f1160  stw 9, 8(4)
  04f1164  stw 0, 4(10)
  04f1168  lwz 11, 12(4)
  04f116c  lwz 9, 8(4)
  04f1170  ld 0, 0(10)
  04f1174  sub 9, 9, 11
  04f1178  clrlwi 9, 9, 20
  04f117c  rldimi 0, 9, 48, 4
  04f1180  li 9, 1
  04f1184  rldimi 0, 8, 60, 0
  04f1188  std 0, 0(10)
  04f118c  sth 9, 2(10)
  04f1190  stw 8, 12(4)
  04f1194  blr

FUN_004f1198:   # 0x4f1198, 0x40 bytes
  04f1198  li 0, 2560
  04f119c  lwz 9, 8(3)
  04f11a0  clrlwi 4, 4, 28
  04f11a4  sldi 0, 0, 32
  04f11a8  mr 11, 9
  04f11ac  clrlwi 5, 5, 27
  04f11b0  rldimi 0, 4, 37, 23
  04f11b4  addi 9, 9, 8
  04f11b8  rldimi 0, 5, 32, 27
  04f11bc  stw 9, 8(3)
  04f11c0  std 0, 0(11)
  04f11c4  lwz 9, 8(3)
  04f11c8  addi 9, 9, 15
  04f11cc  rlwinm 9, 9, 0, 0, 27
  04f11d0  stw 9, 8(3)
  04f11d4  blr

FUN_004f11d8:   # 0x4f11d8, 0x44 bytes
  04f11d8  rlwinm 0, 4, 2, 14, 29
  04f11dc  lwz 4, 20(3)
  04f11e0  cmpwi 7, 4, 0
  04f11e4  bt 30, 0x4f11f8
  04f11e8  add 9, 0, 4
  04f11ec  clrldi 9, 9, 32
  04f11f0  stw 5, 0(9)
  04f11f4  blr
  04f11f8  lwz 9, 8(3)
  04f11fc  mr 4, 9
  04f1200  addi 9, 9, 32
  04f1204  stw 4, 20(3)
  04f1208  stw 9, 8(3)
  04f120c  add 9, 0, 4
  04f1210  clrldi 9, 9, 32
  04f1214  stw 5, 0(9)
  04f1218  blr

FUN_004f121c:   # 0x4f121c, 0x4c bytes
  04f121c  lwz 8, 8(3)
  04f1220  cmpwi 7, 5, 0
  04f1224  add 0, 5, 8
  04f1228  stw 0, 8(3)
  04f122c  bt 30, 0x4f125c
  04f1230  li 10, 0
  04f1234  nop
  04f1238  add 9, 10, 4
  04f123c  add 11, 10, 8
  04f1240  clrldi 9, 9, 32
  04f1244  clrldi 11, 11, 32
  04f1248  addi 10, 10, 16
  04f124c  cmplw 7, 5, 10
  04f1250  lvx 0, 0, 9
  04f1254  stvx 0, 0, 11
  04f1258  bt 29, 0x4f1238
  04f125c  li 0, -1
  04f1260  stw 0, 20(3)
  04f1264  blr

FUN_004f1268:   # 0x4f1268, 0x54 bytes
  04f1268  srwi 6, 6, 4
  04f126c  li 0, 0
  04f1270  rldicl 7, 7, 60, 50
  04f1274  rldimi 0, 6, 4, 32
  04f1278  rldicl 9, 8, 63, 63
  04f127c  rldimi 0, 7, 50, 0
  04f1280  clrlwi 8, 8, 31
  04f1284  rldimi 0, 9, 45, 18
  04f1288  lwz 9, 8(3)
  04f128c  li 11, 2
  04f1290  rldimi 0, 8, 44, 19
  04f1294  clrlwi 4, 4, 28
  04f1298  rldimi 0, 11, 41, 20
  04f129c  clrlwi 5, 5, 27
  04f12a0  rldimi 0, 4, 37, 23
  04f12a4  mr 11, 9
  04f12a8  rldimi 0, 5, 32, 27
  04f12ac  addi 9, 9, 8
  04f12b0  stw 9, 8(3)
  04f12b4  std 0, 0(11)
  04f12b8  blr

FUN_004f12bc:   # 0x4f12bc, 0x64 bytes
  04f12bc  lwz 9, 0(6)
  04f12c0  li 0, 0
  04f12c4  lwz 11, 4(6)
  04f12c8  rldicl 10, 7, 63, 63
  04f12cc  srwi 9, 9, 4
  04f12d0  rldicl 11, 11, 60, 50
  04f12d4  rldimi 0, 9, 4, 32
  04f12d8  li 9, 1
  04f12dc  rldimi 0, 11, 50, 0
  04f12e0  clrlwi 7, 7, 31
  04f12e4  rldimi 0, 9, 47, 16
  04f12e8  lwz 9, 8(3)
  04f12ec  li 11, 2
  04f12f0  rldimi 0, 10, 45, 18
  04f12f4  clrlwi 4, 4, 28
  04f12f8  rldimi 0, 7, 44, 19
  04f12fc  clrlwi 5, 5, 27
  04f1300  rldimi 0, 11, 41, 20
  04f1304  mr 11, 9
  04f1308  rldimi 0, 4, 37, 23
  04f130c  addi 9, 9, 8
  04f1310  rldimi 0, 5, 32, 27
  04f1314  stw 9, 8(3)
  04f1318  std 0, 0(11)
  04f131c  blr

FUN_004f1320:   # 0x4f1320, 0x5c bytes
  04f1320  srwi 6, 6, 4
  04f1324  li 0, 0
  04f1328  rldicl 7, 7, 60, 50
  04f132c  rldimi 0, 6, 4, 32
  04f1330  li 9, 1
  04f1334  rldimi 0, 7, 50, 0
  04f1338  rldicl 11, 8, 63, 63
  04f133c  rldimi 0, 9, 47, 16
  04f1340  lwz 9, 8(3)
  04f1344  clrlwi 8, 8, 31
  04f1348  rldimi 0, 11, 45, 18
  04f134c  li 11, 2
  04f1350  rldimi 0, 8, 44, 19
  04f1354  clrlwi 4, 4, 28
  04f1358  rldimi 0, 11, 41, 20
  04f135c  clrlwi 5, 5, 27
  04f1360  rldimi 0, 4, 37, 23
  04f1364  mr 11, 9
  04f1368  rldimi 0, 5, 32, 27
  04f136c  addi 9, 9, 8
  04f1370  stw 9, 8(3)
  04f1374  std 0, 0(11)
  04f1378  blr

FUN_004f137c:   # 0x4f137c, 0x48 bytes
  04f137c  li 9, 6
  04f1380  li 0, 0
  04f1384  mr 11, 3
  04f1388  rldimi 0, 9, 41, 20
  04f138c  lwz 9, 8(3)
  04f1390  mr 10, 9
  04f1394  addi 9, 9, 8
  04f1398  stw 9, 8(3)
  04f139c  std 0, 0(10)
  04f13a0  lwz 9, 8(3)
  04f13a4  li 0, 0
  04f13a8  lwz 3, 16(3)
  04f13ac  addi 9, 9, 15
  04f13b0  clrldi 3, 3, 32
  04f13b4  rlwinm 9, 9, 0, 0, 27
  04f13b8  stw 0, 16(11)
  04f13bc  stw 9, 8(11)
  04f13c0  blr

FUN_004f13c8:   # 0x4f13c8, 0x14 bytes
  04f13c8  li 0, -1
  04f13cc  li 9, 0
  04f13d0  stw 0, 12(3)
  04f13d4  stw 9, 0(3)
  04f13d8  blr

FUN_004f13dc:   # 0x4f13dc, 0xec bytes
  04f13dc  lwz 9, 0(3)
  04f13e0  addi 9, 9, 64
  04f13e4  lwsync
  04f13e8  clrldi 9, 9, 32
  04f13ec  li 0, -1
  04f13f0  sth 0, 4(9)
  04f13f4  sth 0, 6(9)
  04f13f8  sth 0, 8(9)
  04f13fc  sth 0, 10(9)
  04f1400  sth 0, 12(9)
  04f1404  sth 0, 14(9)
  04f1408  lwsync
  04f140c  li 11, 0
  04f1410  sth 11, 2(9)
  04f1414  sth 11, 0(9)
  04f1418  lwsync
  04f141c  lwz 9, 0(3)
  04f1420  addi 9, 9, 80
  04f1424  lwsync
  04f1428  clrldi 9, 9, 32
  04f142c  sth 0, 4(9)
  04f1430  sth 0, 6(9)
  04f1434  sth 0, 8(9)
  04f1438  sth 0, 10(9)
  04f143c  sth 0, 12(9)
  04f1440  sth 0, 14(9)
  04f1444  lwsync
  04f1448  sth 11, 2(9)
  04f144c  sth 11, 0(9)
  04f1450  lwsync
  04f1454  lwz 9, 0(3)
  04f1458  addi 9, 9, 96
  04f145c  lwsync
  04f1460  clrldi 9, 9, 32
  04f1464  sth 0, 4(9)
  04f1468  sth 0, 6(9)
  04f146c  sth 0, 8(9)
  04f1470  sth 0, 10(9)
  04f1474  sth 0, 12(9)
  04f1478  sth 0, 14(9)
  04f147c  lwsync
  04f1480  sth 11, 2(9)
  04f1484  sth 11, 0(9)
  04f1488  lwsync
  04f148c  lwz 9, 0(3)
  04f1490  addi 9, 9, 112
  04f1494  lwsync
  04f1498  clrldi 9, 9, 32
  04f149c  sth 0, 14(9)
  04f14a0  sth 0, 4(9)
  04f14a4  sth 0, 6(9)
  04f14a8  sth 0, 8(9)
  04f14ac  sth 0, 10(9)
  04f14b0  sth 0, 12(9)
  04f14b4  lwsync
  04f14b8  sth 11, 2(9)
  04f14bc  sth 11, 0(9)
  04f14c0  lwsync
  04f14c4  blr
