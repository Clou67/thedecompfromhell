# game/mobyutil.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBYUTIL:   # 0xfbf40, 0x14 bytes
  00fbf40  lis 3, 115
  00fbf44  lis 4, 1
  00fbf48  addic 3, 3, -28360
  00fbf4c  stw 4, 72(3)
  00fbf50  blr

???_Unused_MB_CallVtbl74:   # 0xfbf60, 0x40 bytes
  00fbf60  stdu 1, -112(1)
  00fbf64  mflr 0
  00fbf68  std 0, 128(1)
  00fbf6c  lwz 4, 116(3)
  00fbf70  cmpwi 4, 0
  00fbf74  bt 2, 0xfbf90
  00fbf78  lwz 5, 0(4)
  00fbf7c  std 2, 40(1)
  00fbf80  mtctr 5
  00fbf84  lwz 2, 4(4)
  00fbf88  bcctrl 20, 30
  00fbf8c  ld 2, 40(1)
  00fbf90  ld 0, 128(1)
  00fbf94  mtlr 0
  00fbf98  addi 1, 1, 112
  00fbf9c  blr

GetMobyFunction:   # 0xfbfa0, 0x84 bytes
  00fbfa0  lis 4, 163
  00fbfa4  lis 6, 146
  00fbfa8  lis 5, 163
  00fbfac  addic 5, 5, 19456
  00fbfb0  lwz 7, 23744(4)
  00fbfb4  addic 4, 6, 29692
  00fbfb8  slwi 6, 7, 2
  00fbfbc  ori 8, 4, 0
  00fbfc0  extsw 6, 6
  00fbfc4  li 7, 0
  00fbfc8  lwzx 5, 5, 6
  00fbfcc  cmpwi 1, 5, 0
  00fbfd0  lwz 9, 0(8)
  00fbfd4  cmpw 6, 9, 3
  00fbfd8  cmpwi 9, -1
  00fbfdc  cror 2, 2, 26
  00fbfe0  bt 2, 0xfbff0
  00fbfe4  addic 8, 8, 12
  00fbfe8  addic 7, 7, 1
  00fbfec  b 0xfbfd0
  00fbff0  addc 3, 7, 7
  00fbff4  addc 3, 7, 3
  00fbff8  lis 7, 163
  00fbffc  sldi 3, 3, 2
  00fc000  addic 8, 7, 20352
  00fc004  extsw 3, 3
  00fc008  addc 7, 4, 3
  00fc00c  lwz 3, 4(7)
  00fc010  stwx 3, 8, 6
  00fc014  bt 6, 0xfc020
  00fc018  lwz 3, 8(7)
  00fc01c  stw 3, 44(5)
  00fc020  blr

UpdateMobysInitial:   # 0xfc024, 0x144 bytes
  00fc024  stdu 1, -128(1)
  00fc028  mflr 0
  00fc02c  std 0, 144(1)
  00fc030  lis 3, 164
  00fc034  lis 4, 165
  00fc038  std 31, 120(1)
  00fc03c  li 5, 0
  00fc040  lis 31, 164
  00fc044  lwz 3, -28512(3)
  00fc048  stw 5, -27836(4)
  00fc04c  ori 4, 3, 0
  00fc050  stw 5, -28500(31)
  00fc054  lbz 3, 32(4)
  00fc058  cmpwi 3, 255
  00fc05c  bt 2, 0xfc0c0
  00fc060  li 5, 0
  00fc064  ori 3, 4, 0
  00fc068  lbz 6, 32(3)
  00fc06c  rlwinm 6, 6, 0, 24, 24
  00fc070  cmpwi 6, 0
  00fc074  bf 2, 0xfc0a0
  00fc078  lhz 6, 52(4)
  00fc07c  cmpwi 1, 5, 0
  00fc080  rlwinm 6, 6, 0, 30, 30
  00fc084  cmpwi 6, 0
  00fc088  bf 2, 0xfc0a0
  00fc08c  bt 6, 0xfc098
  00fc090  stw 4, 40(5)
  00fc094  b 0xfc09c
  00fc098  stw 4, -28500(31)
  00fc09c  ori 5, 4, 0
  00fc0a0  lbz 3, 288(3)
  00fc0a4  addic 4, 4, 256
  00fc0a8  cmpwi 3, 255
  00fc0ac  bf 2, 0xfc064
  00fc0b0  cmpwi 5, 0
  00fc0b4  bt 2, 0xfc0c0
  00fc0b8  li 3, 0
  00fc0bc  stw 3, 40(5)
  00fc0c0  lwz 31, -28500(31)
  00fc0c4  cmpwi 31, 0
  00fc0c8  bt 2, 0xfc154
  00fc0cc  lbz 3, 32(31)
  00fc0d0  cmpwi 3, 128
  00fc0d4  bf 0, 0xfc148
  00fc0d8  lhz 3, 52(31)
  00fc0dc  rlwinm 3, 3, 0, 25, 25
  00fc0e0  cmpwi 3, 0
  00fc0e4  bf 2, 0xfc0f4
  00fc0e8  ori 3, 31, 0
  00fc0ec  bl 0xf98d8
  00fc0f0  nop
  00fc0f4  lwz 3, 116(31)
  00fc0f8  cmpwi 3, 0
  00fc0fc  bt 2, 0xfc120
  00fc100  ori 4, 3, 0
  00fc104  ori 3, 31, 0
  00fc108  lwz 5, 0(4)
  00fc10c  std 2, 40(1)
  00fc110  mtctr 5
  00fc114  lwz 2, 4(4)
  00fc118  bcctrl 20, 30
  00fc11c  ld 2, 40(1)
  00fc120  lhz 3, 52(31)
  00fc124  rlwinm 3, 3, 0, 29, 29
  00fc128  cmpwi 3, 0
  00fc12c  bf 2, 0xfc13c
  00fc130  ori 3, 31, 0
  00fc134  bl 0xf31a8
  00fc138  nop
  00fc13c  ori 3, 31, 0
  00fc140  bl 0x65464
  00fc144  nop
  00fc148  lwz 31, 40(31)
  00fc14c  cmpwi 31, 0
  00fc150  bf 2, 0xfc0cc
  00fc154  ld 0, 144(1)
  00fc158  mtlr 0
  00fc15c  ld 31, 120(1)
  00fc160  addi 1, 1, 128
  00fc164  blr

UpdateMobys:   # 0xfc168, 0xc8 bytes
  00fc168  stdu 1, -128(1)
  00fc16c  mflr 0
  00fc170  std 0, 144(1)
  00fc174  std 31, 120(1)
  00fc178  bl 0xf959c
  00fc17c  nop
  00fc180  lis 4, 164
  00fc184  ori 31, 3, 0
  00fc188  cmpwi 31, 0
  00fc18c  stw 31, -28500(4)
  00fc190  bt 2, 0xfc21c
  00fc194  lbz 3, 32(31)
  00fc198  cmpwi 3, 128
  00fc19c  bf 0, 0xfc210
  00fc1a0  lhz 3, 52(31)
  00fc1a4  rlwinm 3, 3, 0, 25, 25
  00fc1a8  cmpwi 3, 0
  00fc1ac  bf 2, 0xfc1bc
  00fc1b0  ori 3, 31, 0
  00fc1b4  bl 0xf98d8
  00fc1b8  nop
  00fc1bc  lwz 3, 116(31)
  00fc1c0  cmpwi 3, 0
  00fc1c4  bt 2, 0xfc1e8
  00fc1c8  ori 4, 3, 0
  00fc1cc  ori 3, 31, 0
  00fc1d0  lwz 5, 0(4)
  00fc1d4  std 2, 40(1)
  00fc1d8  mtctr 5
  00fc1dc  lwz 2, 4(4)
  00fc1e0  bcctrl 20, 30
  00fc1e4  ld 2, 40(1)
  00fc1e8  lhz 3, 52(31)
  00fc1ec  rlwinm 3, 3, 0, 29, 29
  00fc1f0  cmpwi 3, 0
  00fc1f4  bf 2, 0xfc204
  00fc1f8  ori 3, 31, 0
  00fc1fc  bl 0xf31a8
  00fc200  nop
  00fc204  ori 3, 31, 0
  00fc208  bl 0x65464
  00fc20c  nop
  00fc210  lwz 31, 40(31)
  00fc214  cmpwi 31, 0
  00fc218  bf 2, 0xfc194
  00fc21c  ld 0, 144(1)
  00fc220  mtlr 0
  00fc224  ld 31, 120(1)
  00fc228  addi 1, 1, 128
  00fc22c  blr

UpdateMobysDebug:   # 0xfc238, 0x3e4 bytes
  00fc238  stdu 1, -224(1)
  00fc23c  mflr 0
  00fc240  std 0, 240(1)
  00fc244  stfd 31, 216(1)
  00fc248  lis 3, 150
  00fc24c  addic 3, 3, 19008
  00fc250  lwz 4, 160(3)
  00fc254  clrlwi 4, 4, 29
  00fc258  std 31, 208(1)
  00fc25c  std 30, 200(1)
  00fc260  std 29, 192(1)
  00fc264  std 28, 184(1)
  00fc268  std 27, 176(1)
  00fc26c  std 26, 168(1)
  00fc270  std 25, 160(1)
  00fc274  std 24, 152(1)
  00fc278  std 23, 144(1)
  00fc27c  std 22, 136(1)
  00fc280  std 21, 128(1)
  00fc284  cmpwi 4, 7
  00fc288  bf 2, 0xfc29c
  00fc28c  lwz 3, 164(3)
  00fc290  rlwinm 3, 3, 0, 28, 28
  00fc294  cmpwi 3, 0
  00fc298  bf 2, 0xfc344
  00fc29c  bl 0xf959c
  00fc2a0  nop
  00fc2a4  lis 4, 164
  00fc2a8  ori 31, 3, 0
  00fc2ac  cmpwi 31, 0
  00fc2b0  stw 31, -28500(4)
  00fc2b4  bt 2, 0xfc5dc
  00fc2b8  lbz 3, 32(31)
  00fc2bc  cmpwi 3, 128
  00fc2c0  bf 0, 0xfc334
  00fc2c4  lhz 3, 52(31)
  00fc2c8  rlwinm 3, 3, 0, 25, 25
  00fc2cc  cmpwi 3, 0
  00fc2d0  bf 2, 0xfc2e0
  00fc2d4  ori 3, 31, 0
  00fc2d8  bl 0xf98d8
  00fc2dc  nop
  00fc2e0  lwz 3, 116(31)
  00fc2e4  cmpwi 3, 0
  00fc2e8  bt 2, 0xfc30c
  00fc2ec  ori 4, 3, 0
  00fc2f0  ori 3, 31, 0
  00fc2f4  lwz 5, 0(4)
  00fc2f8  std 2, 40(1)
  00fc2fc  mtctr 5
  00fc300  lwz 2, 4(4)
  00fc304  bcctrl 20, 30
  00fc308  ld 2, 40(1)
  00fc30c  lhz 3, 52(31)
  00fc310  rlwinm 3, 3, 0, 29, 29
  00fc314  cmpwi 3, 0
  00fc318  bf 2, 0xfc328
  00fc31c  ori 3, 31, 0
  00fc320  bl 0xf31a8
  00fc324  nop
  00fc328  ori 3, 31, 0
  00fc32c  bl 0x65464
  00fc330  nop
  00fc334  lwz 31, 40(31)
  00fc338  cmpwi 31, 0
  00fc33c  bf 2, 0xfc2b8
  00fc340  b 0xfc5dc
  00fc344  lis 3, 101
  00fc348  addic 31, 3, 11976
  00fc34c  ori 3, 31, 0
  00fc350  bl 0x5cd098
  00fc354  nop
  00fc358  lis 4, 346
  00fc35c  lis 3, 101
  00fc360  addic 3, 3, 11984
  00fc364  lwz 4, -15568(4)
  00fc368  extsw 4, 4
  00fc36c  bl 0x5cd098
  00fc370  nop
  00fc374  ori 3, 31, 0
  00fc378  bl 0x5cd098
  00fc37c  nop
  00fc380  lis 4, 146
  00fc384  li 6, 129
  00fc388  lis 3, 4352
  00fc38c  li 5, 1792
  00fc390  ori 3, 3, 16384
  00fc394  lwz 7, 29180(4)
  00fc398  li 4, 0
  00fc39c  stw 6, 0(7)
  00fc3a0  bl 0x5001fc
  00fc3a4  nop
  00fc3a8  bl 0xf959c
  00fc3ac  nop
  00fc3b0  lis 4, 164
  00fc3b4  ori 31, 3, 0
  00fc3b8  cmpwi 31, 0
  00fc3bc  stw 31, -28500(4)
  00fc3c0  bt 2, 0xfc490
  00fc3c4  lbz 3, 32(31)
  00fc3c8  cmpwi 3, 128
  00fc3cc  bf 0, 0xfc484
  00fc3d0  lis 3, 146
  00fc3d4  li 4, 0
  00fc3d8  lwz 3, 29176(3)
  00fc3dc  lhz 5, 52(31)
  00fc3e0  rlwinm 5, 5, 0, 25, 25
  00fc3e4  cmpwi 5, 0
  00fc3e8  stw 4, 0(3)
  00fc3ec  bf 2, 0xfc3fc
  00fc3f0  ori 3, 31, 0
  00fc3f4  bl 0xf98d8
  00fc3f8  nop
  00fc3fc  lwz 3, 116(31)
  00fc400  cmpwi 3, 0
  00fc404  bt 2, 0xfc428
  00fc408  ori 4, 3, 0
  00fc40c  ori 3, 31, 0
  00fc410  lwz 5, 0(4)
  00fc414  std 2, 40(1)
  00fc418  mtctr 5
  00fc41c  lwz 2, 4(4)
  00fc420  bcctrl 20, 30
  00fc424  ld 2, 40(1)
  00fc428  lhz 3, 52(31)
  00fc42c  rlwinm 3, 3, 0, 29, 29
  00fc430  cmpwi 3, 0
  00fc434  bf 2, 0xfc444
  00fc438  ori 3, 31, 0
  00fc43c  bl 0xf31a8
  00fc440  nop
  00fc444  lis 4, 146
  00fc448  lis 3, 4352
  00fc44c  lbz 5, 34(31)
  00fc450  lis 6, 4352
  00fc454  ori 3, 3, 16384
  00fc458  slwi 5, 5, 3
  00fc45c  lwz 4, 29176(4)
  00fc460  addc 3, 5, 3
  00fc464  ori 6, 6, 16388
  00fc468  lwz 4, 0(4)
  00fc46c  lwz 7, 0(3)
  00fc470  addic 7, 7, 1
  00fc474  stw 7, 0(3)
  00fc478  lwzx 3, 5, 6
  00fc47c  addc 3, 3, 4
  00fc480  stwx 3, 5, 6
  00fc484  lwz 31, 40(31)
  00fc488  cmpwi 31, 0
  00fc48c  bf 2, 0xfc3c4
  00fc490  lis 29, 4352
  00fc494  vspltisw 2, 0
  00fc498  li 4, 0
  00fc49c  ori 29, 29, 16384
  00fc4a0  li 3, 4
  00fc4a4  ori 31, 29, 0
  00fc4a8  ori 30, 4, 0
  00fc4ac  lwz 5, 0(29)
  00fc4b0  vspltw 3, 2, 0
  00fc4b4  cmpwi 5, 0
  00fc4b8  bt 2, 0xfc4d4
  00fc4bc  addi 5, 3, 16
  00fc4c0  <unknown>
  00fc4c4  <unknown>
  00fc4c8  vor 2, 2, 4
  00fc4cc  vcfsx 2, 2, 0
  00fc4d0  vaddfp 3, 3, 2
  00fc4d4  addic 4, 4, 1
  00fc4d8  addic 29, 29, 8
  00fc4dc  cmpwi 4, 224
  00fc4e0  clrldi 29, 29, 32
  00fc4e4  vsldoi 2, 3, 3, 0
  00fc4e8  bt 0, 0xfc4ac
  00fc4ec  vspltw 2, 3, 0
  00fc4f0  lis 3, 16
  00fc4f4  li 0, 112
  00fc4f8  addi 3, 3, -15824
  00fc4fc  lis 25, 1525
  00fc500  stvx 2, 1, 0
  00fc504  lfs 1, 0(3)
  00fc508  lfs 31, 4(3)
  00fc50c  lfs 2, 112(1)
  00fc510  fdivs 1, 1, 2
  00fc514  lis 27, 101
  00fc518  ori 25, 25, 57600
  00fc51c  addic 27, 27, 12008
  00fc520  fmuls 31, 1, 31
  00fc524  ori 26, 30, 0
  00fc528  lis 28, 163
  00fc52c  ori 29, 31, 0
  00fc530  ori 24, 26, 0
  00fc534  addic 28, 28, 21248
  00fc538  lwz 5, 0(29)
  00fc53c  cmpwi 5, 0
  00fc540  bt 2, 0xfc5b8
  00fc544  lwz 4, 4(29)
  00fc548  cmpw 4, 25
  00fc54c  extsw 3, 4
  00fc550  bf 2, 0xfc5a0
  00fc554  slwi 4, 4, 5
  00fc558  extsw 22, 5
  00fc55c  divw 4, 4, 5
  00fc560  extsw 23, 4
  00fc564  lhz 4, 0(28)
  00fc568  extsh 21, 4
  00fc56c  bl 0x502730
  00fc570  nop
  00fc574  fmuls 1, 1, 31
  00fc578  ori 3, 27, 0
  00fc57c  ori 4, 21, 0
  00fc580  ori 5, 22, 0
  00fc584  ori 6, 23, 0
  00fc588  stfd 1, 80(1)
  00fc58c  ld 7, 80(1)
  00fc590  bl 0x5cd098
  00fc594  nop
  00fc598  stw 30, 0(29)
  00fc59c  b 0xfc5b8
  00fc5a0  extsw 5, 24
  00fc5a4  subc 4, 4, 24
  00fc5a8  subc 3, 5, 3
  00fc5ac  sradi 3, 3, 63
  00fc5b0  and 3, 3, 4
  00fc5b4  addc 24, 24, 3
  00fc5b8  addic 26, 26, 1
  00fc5bc  addic 29, 29, 8
  00fc5c0  cmpwi 26, 224
  00fc5c4  clrldi 29, 29, 32
  00fc5c8  addic 28, 28, 2
  00fc5cc  bt 0, 0xfc538
  00fc5d0  ori 25, 24, 0
  00fc5d4  cmpwi 25, 0
  00fc5d8  bf 2, 0xfc524
  00fc5dc  ld 0, 240(1)
  00fc5e0  mtlr 0
  00fc5e4  lfd 31, 216(1)
  00fc5e8  ld 21, 128(1)
  00fc5ec  ld 22, 136(1)
  00fc5f0  ld 23, 144(1)
  00fc5f4  ld 24, 152(1)
  00fc5f8  ld 25, 160(1)
  00fc5fc  ld 26, 168(1)
  00fc600  ld 27, 176(1)
  00fc604  ld 28, 184(1)
  00fc608  ld 29, 192(1)
  00fc60c  ld 30, 200(1)
  00fc610  ld 31, 208(1)
  00fc614  addi 1, 1, 224
  00fc618  blr

MB_randInt:   # 0xfc620, 0x48 bytes
  00fc620  stdu 1, -128(1)
  00fc624  mflr 0
  00fc628  std 0, 144(1)
  00fc62c  std 31, 120(1)
  00fc630  ori 31, 3, 0
  00fc634  bl 0x5c8318
  00fc638  nop
  00fc63c  srawi 3, 3, 15
  00fc640  clrlwi 3, 3, 17
  00fc644  divw 4, 3, 31
  00fc648  mullw 4, 4, 31
  00fc64c  subc 3, 3, 4
  00fc650  extsw 3, 3
  00fc654  ld 0, 144(1)
  00fc658  mtlr 0
  00fc65c  ld 31, 120(1)
  00fc660  addi 1, 1, 128
  00fc664  blr

MB_DropAmmo:   # 0xfc668, 0x2d0 bytes
  00fc668  stdu 1, -176(1)
  00fc66c  mflr 0
  00fc670  std 0, 192(1)
  00fc674  std 31, 168(1)
  00fc678  std 24, 112(1)
  00fc67c  ori 31, 4, 0
  00fc680  li 24, 0
  00fc684  ori 4, 24, 0
  00fc688  std 25, 120(1)
  00fc68c  lwz 5, 0(31)
  00fc690  ori 25, 4, 0
  00fc694  std 30, 160(1)
  00fc698  std 29, 152(1)
  00fc69c  std 28, 144(1)
  00fc6a0  std 27, 136(1)
  00fc6a4  std 26, 128(1)
  00fc6a8  cmpwi 5, 0
  00fc6ac  bf 1, 0xfc704
  00fc6b0  cmpwi 3, 0
  00fc6b4  bt 2, 0xfc8b8
  00fc6b8  lhz 3, 178(3)
  00fc6bc  lis 6, 151
  00fc6c0  lis 5, 161
  00fc6c4  extsh 8, 3
  00fc6c8  addic 5, 5, -13028
  00fc6cc  srawi 8, 8, 5
  00fc6d0  lwz 6, -25488(6)
  00fc6d4  li 7, 1
  00fc6d8  sldi 8, 8, 2
  00fc6dc  slwi 6, 6, 8
  00fc6e0  addc 5, 8, 5
  00fc6e4  extsw 6, 6
  00fc6e8  clrldi 5, 5, 32
  00fc6ec  clrlwi 3, 3, 27
  00fc6f0  slw 3, 7, 3
  00fc6f4  lwzx 5, 5, 6
  00fc6f8  and 3, 5, 3
  00fc6fc  cmpwi 3, 0
  00fc700  bt 2, 0xfc8b8
  00fc704  lis 28, 114
  00fc708  lis 29, 151
  00fc70c  lis 30, 115
  00fc710  lis 27, 151
  00fc714  ori 3, 24, 0
  00fc718  addic 28, 28, -1236
  00fc71c  addic 29, 29, -16064
  00fc720  addic 30, 30, 32048
  00fc724  addic 27, 27, -16212
  00fc728  lbzx 6, 28, 3
  00fc72c  cmpwi 6, 255
  00fc730  bt 2, 0xfc7a4
  00fc734  clrlwi 5, 6, 26
  00fc738  lbzx 7, 29, 5
  00fc73c  cmpwi 7, 0
  00fc740  bt 2, 0xfc794
  00fc744  sldi 5, 5, 3
  00fc748  rlwinm 6, 6, 2, 24, 29
  00fc74c  addc 7, 5, 5
  00fc750  addic 8, 25, 1
  00fc754  addc 5, 5, 7
  00fc758  li 7, 0
  00fc75c  addc 5, 30, 5
  00fc760  subc 9, 25, 8
  00fc764  addic 4, 4, 1
  00fc768  lhz 5, 14(5)
  00fc76c  lwzx 6, 27, 6
  00fc770  subc 7, 7, 5
  00fc774  cmpw 5, 6
  00fc778  cntlzw 7, 7
  00fc77c  sldi 7, 7, 58
  00fc780  sradi 5, 7, 63
  00fc784  and 25, 5, 9
  00fc788  addc 25, 8, 25
  00fc78c  bf 1, 0xfc794
  00fc790  addic 24, 24, 1
  00fc794  addic 3, 3, 1
  00fc798  extsw 3, 3
  00fc79c  cmpwi 3, 12
  00fc7a0  bt 0, 0xfc728
  00fc7a4  cmpwi 24, 0
  00fc7a8  li 26, -1
  00fc7ac  cmpwi 1, 4, 0
  00fc7b0  bt 2, 0xfc834
  00fc7b4  bl 0x5c8318
  00fc7b8  nop
  00fc7bc  srawi 3, 3, 15
  00fc7c0  clrlwi 3, 3, 17
  00fc7c4  divw 4, 3, 24
  00fc7c8  mullw 4, 4, 24
  00fc7cc  subc 3, 3, 4
  00fc7d0  cmpwi 3, 0
  00fc7d4  bt 0, 0xfc824
  00fc7d8  addic 26, 26, 1
  00fc7dc  extsw 26, 26
  00fc7e0  lbzx 5, 28, 26
  00fc7e4  clrlwi 4, 5, 26
  00fc7e8  lbzx 6, 29, 4
  00fc7ec  cmpwi 6, 0
  00fc7f0  bt 2, 0xfc81c
  00fc7f4  sldi 4, 4, 3
  00fc7f8  rlwinm 5, 5, 2, 24, 29
  00fc7fc  addc 6, 4, 4
  00fc800  addc 4, 4, 6
  00fc804  addc 4, 4, 30
  00fc808  lwzx 5, 27, 5
  00fc80c  lhz 4, 14(4)
  00fc810  cmpw 4, 5
  00fc814  bf 1, 0xfc81c
  00fc818  addic 3, 3, -1
  00fc81c  cmpwi 3, 0
  00fc820  bf 0, 0xfc7d8
  00fc824  lbzx 3, 28, 26
  00fc828  clrlwi 3, 3, 26
  00fc82c  stw 3, 0(31)
  00fc830  b 0xfc8b8
  00fc834  bt 6, 0xfc8b0
  00fc838  bl 0x5c8318
  00fc83c  nop
  00fc840  srawi 3, 3, 15
  00fc844  clrlwi 3, 3, 17
  00fc848  divw 4, 3, 25
  00fc84c  mullw 4, 4, 25
  00fc850  subc 3, 3, 4
  00fc854  cmpwi 3, 0
  00fc858  bt 0, 0xfc8a0
  00fc85c  addic 26, 26, 1
  00fc860  extsw 26, 26
  00fc864  lbzx 4, 28, 26
  00fc868  clrlwi 4, 4, 26
  00fc86c  lbzx 5, 29, 4
  00fc870  cmpwi 5, 0
  00fc874  bt 2, 0xfc898
  00fc878  sldi 4, 4, 3
  00fc87c  addc 5, 4, 4
  00fc880  addc 4, 4, 5
  00fc884  addc 4, 4, 30
  00fc888  lhz 4, 14(4)
  00fc88c  cmpwi 4, 0
  00fc890  bt 2, 0xfc898
  00fc894  addic 3, 3, -1
  00fc898  cmpwi 3, 0
  00fc89c  bf 0, 0xfc85c
  00fc8a0  lbzx 3, 28, 26
  00fc8a4  clrlwi 3, 3, 26
  00fc8a8  stw 3, 0(31)
  00fc8ac  b 0xfc8b8
  00fc8b0  li 3, 10
  00fc8b4  stw 3, 0(31)
  00fc8b8  bl 0x5c8318
  00fc8bc  nop
  00fc8c0  srawi 3, 3, 15
  00fc8c4  li 5, 0
  00fc8c8  clrlwi 3, 3, 17
  00fc8cc  addic 4, 3, 1
  00fc8d0  mulli 4, 4, 13107
  00fc8d4  srwi 4, 4, 16
  00fc8d8  sldi 6, 4, 2
  00fc8dc  addc 4, 4, 6
  00fc8e0  subc 3, 3, 4
  00fc8e4  li 4, 2
  00fc8e8  subc 3, 5, 3
  00fc8ec  li 5, 1
  00fc8f0  cntlzw 3, 3
  00fc8f4  subc 4, 4, 5
  00fc8f8  sldi 3, 3, 58
  00fc8fc  sradi 3, 3, 63
  00fc900  and 3, 3, 4
  00fc904  addc 3, 5, 3
  00fc908  ld 0, 192(1)
  00fc90c  mtlr 0
  00fc910  ld 24, 112(1)
  00fc914  ld 25, 120(1)
  00fc918  ld 26, 128(1)
  00fc91c  ld 27, 136(1)
  00fc920  ld 28, 144(1)
  00fc924  ld 29, 152(1)
  00fc928  ld 30, 160(1)
  00fc92c  ld 31, 168(1)
  00fc930  addi 1, 1, 176
  00fc934  blr

MB_SplineIntersect:   # 0xfc948, 0x1ec bytes
  00fc948  stdu 1, -80(1)
  00fc94c  stfd 28, 48(1)
  00fc950  stfd 29, 56(1)
  00fc954  stfd 30, 64(1)
  00fc958  stfd 31, 72(1)
  00fc95c  lfs 12, 4(5)
  00fc960  lfs 13, 4(4)
  00fc964  lfs 0, 0(5)
  00fc968  fsubs 12, 12, 13
  00fc96c  lfs 31, 0(4)
  00fc970  lis 7, 16
  00fc974  fsubs 0, 0, 31
  00fc978  addi 7, 7, -14024
  00fc97c  lfs 2, 0(7)
  00fc980  fmuls 1, 12, 12
  00fc984  lfs 30, 4(7)
  00fc988  sldi 3, 3, 2
  00fc98c  lfs 9, 8(7)
  00fc990  lis 7, 165
  00fc994  fmadds 1, 0, 0, 1
  00fc998  addic 7, 7, 7136
  00fc99c  extsw 3, 3
  00fc9a0  lfs 10, 12(5)
  00fc9a4  lfs 11, 8(5)
  00fc9a8  li 8, 1
  00fc9ac  frsqrte 3, 1
  00fc9b0  fsqrts 4, 1
  00fc9b4  li 9, 0
  00fc9b8  fmuls 5, 1, 3
  00fc9bc  fmuls 6, 2, 3
  00fc9c0  fnmsubs 5, 5, 3, 30
  00fc9c4  fmadds 3, 5, 6, 3
  00fc9c8  fmuls 5, 1, 3
  00fc9cc  fmuls 6, 2, 3
  00fc9d0  fnmsubs 5, 5, 3, 30
  00fc9d4  fmadds 3, 5, 6, 3
  00fc9d8  fsub 6, 9, 4
  00fc9dc  fsub 5, 4, 9
  00fc9e0  fmuls 1, 1, 3
  00fc9e4  fmuls 2, 2, 3
  00fc9e8  fnmsubs 1, 1, 3, 30
  00fc9ec  fmadds 1, 1, 2, 3
  00fc9f0  fsub 2, 9, 4
  00fc9f4  lfs 3, 8(4)
  00fc9f8  lwzx 7, 7, 3
  00fc9fc  ori 3, 8, 0
  00fca00  fdivs 1, 1, 4
  00fca04  lfs 7, 20(7)
  00fca08  lfs 8, 16(7)
  00fca0c  fsub 4, 4, 9
  00fca10  fsubs 7, 7, 13
  00fca14  fsubs 29, 8, 31
  00fca18  lfs 8, 28(7)
  00fca1c  lwz 5, 0(7)
  00fca20  cmpwi 5, 1
  00fca24  fmadds 8, 10, 29, 8
  00fca28  fmuls 28, 1, 0
  00fca2c  fmuls 1, 1, 12
  00fca30  fsel 2, 2, 9, 28
  00fca34  fsel 6, 6, 9, 1
  00fca38  fsel 2, 5, 2, 28
  00fca3c  fsel 1, 4, 6, 1
  00fca40  fmuls 4, 2, 7
  00fca44  fmuls 5, 1, 7
  00fca48  fneg 6, 4
  00fca4c  fmadds 4, 2, 29, 5
  00fca50  fmadds 5, 1, 29, 6
  00fca54  bf 1, 0xfcaf0
  00fca58  addic 7, 7, 16
  00fca5c  lfs 6, 20(7)
  00fca60  fcmpu 0, 8, 9
  00fca64  lfs 7, 16(7)
  00fca68  fsubs 6, 6, 13
  00fca6c  fsubs 7, 7, 31
  00fca70  lfs 29, 28(7)
  00fca74  fmuls 28, 6, 2
  00fca78  fmuls 6, 6, 1
  00fca7c  fmadds 8, 7, 10, 29
  00fca80  fneg 29, 28
  00fca84  fmadds 6, 7, 2, 6
  00fca88  fcmpu 1, 8, 9
  00fca8c  fmadds 7, 7, 1, 29
  00fca90  bf 2, 0xfca98
  00fca94  bt 6, 0xfcad8
  00fca98  fmuls 29, 7, 5
  00fca9c  fcmpu 0, 29, 9
  00fcaa0  cror 6, 1, 2
  00fcaa4  bt 6, 0xfcad8
  00fcaa8  fsubs 4, 4, 6
  00fcaac  fsubs 5, 5, 7
  00fcab0  fdivs 4, 4, 5
  00fcab4  fmuls 4, 4, 7
  00fcab8  fneg 4, 4
  00fcabc  fadds 4, 4, 6
  00fcac0  fcmpu 1, 30, 4
  00fcac4  fcmpu 0, 4, 9
  00fcac8  crnand 2, 1, 5
  00fcacc  bt 2, 0xfcad8
  00fcad0  ori 9, 3, 0
  00fcad4  fmr 30, 4
  00fcad8  addic 8, 8, 1
  00fcadc  addic 7, 7, 16
  00fcae0  fmr 4, 6
  00fcae4  cmpw 8, 5
  00fcae8  fmr 5, 7
  00fcaec  bt 0, 0xfca5c
  00fcaf0  fsubs 1, 11, 3
  00fcaf4  lfs 3, 4(4)
  00fcaf8  fmadds 2, 30, 0, 31
  00fcafc  lfs 4, 8(4)
  00fcb00  ori 3, 9, 0
  00fcb04  fmadds 3, 30, 12, 3
  00fcb08  stfs 10, 12(6)
  00fcb0c  fmadds 1, 30, 1, 4
  00fcb10  stfs 2, 0(6)
  00fcb14  stfs 3, 4(6)
  00fcb18  stfs 1, 8(6)
  00fcb1c  lfd 28, 48(1)
  00fcb20  lfd 29, 56(1)
  00fcb24  lfd 30, 64(1)
  00fcb28  lfd 31, 72(1)
  00fcb2c  addi 1, 1, 80
  00fcb30  blr

MB_SolveQuad:   # 0xfcb40, 0xa4 bytes
  00fcb40  lis 3, 16
  00fcb44  addi 3, 3, -13516
  00fcb48  lfs 4, 0(3)
  00fcb4c  lfs 5, 4(3)
  00fcb50  fmuls 4, 1, 4
  00fcb54  fmuls 3, 4, 3
  00fcb58  fmsubs 3, 2, 2, 3
  00fcb5c  fcmpu 1, 3, 5
  00fcb60  bf 6, 0xfcb88
  00fcb64  lis 3, 16
  00fcb68  fneg 2, 2
  00fcb6c  addi 3, 3, -13516
  00fcb70  lfs 3, 8(3)
  00fcb74  fmuls 1, 1, 3
  00fcb78  li 3, 1
  00fcb7c  fdivs 1, 2, 1
  00fcb80  stfs 1, 0(6)
  00fcb84  b 0xfcbe0
  00fcb88  fabs 3, 3
  00fcb8c  lis 3, 16
  00fcb90  fneg 5, 2
  00fcb94  addi 3, 3, -13516
  00fcb98  fsqrts 3, 3
  00fcb9c  lfs 4, 8(3)
  00fcba0  fmuls 1, 1, 4
  00fcba4  fsubs 2, 3, 2
  00fcba8  fsubs 3, 5, 3
  00fcbac  fdivs 2, 2, 1
  00fcbb0  fdivs 1, 3, 1
  00fcbb4  stfs 2, 0(6)
  00fcbb8  stfs 1, 0(7)
  00fcbbc  lfs 3, 0(6)
  00fcbc0  fcmpu 0, 3, 1
  00fcbc4  cror 2, 1, 2
  00fcbc8  bt 2, 0xfcbd4
  00fcbcc  stfs 3, 0(7)
  00fcbd0  stfs 1, 0(6)
  00fcbd4  li 3, 0
  00fcbd8  bf 5, 0xfcbe0
  00fcbdc  li 3, 2
  00fcbe0  blr

MB_randRangeFloat:   # 0xfcbe8, 0x78 bytes
  00fcbe8  stdu 1, -160(1)
  00fcbec  mflr 0
  00fcbf0  std 0, 176(1)
  00fcbf4  stfd 30, 144(1)
  00fcbf8  stfd 31, 152(1)
  00fcbfc  lis 3, 16
  00fcc00  std 31, 136(1)
  00fcc04  fmr 31, 2
  00fcc08  addi 31, 3, -13340
  00fcc0c  fmr 30, 1
  00fcc10  bl 0x5c8318
  00fcc14  nop
  00fcc18  srawi 3, 3, 15
  00fcc1c  fsubs 1, 31, 30
  00fcc20  clrlwi 3, 3, 17
  00fcc24  extsw 3, 3
  00fcc28  std 3, 112(1)
  00fcc2c  lfs 2, 0(31)
  00fcc30  lfd 3, 112(1)
  00fcc34  fcfid 3, 3
  00fcc38  frsp 3, 3
  00fcc3c  fmuls 1, 3, 1
  00fcc40  fmadds 1, 1, 2, 30
  00fcc44  ld 0, 176(1)
  00fcc48  mtlr 0
  00fcc4c  lfd 30, 144(1)
  00fcc50  lfd 31, 152(1)
  00fcc54  ld 31, 136(1)
  00fcc58  addi 1, 1, 160
  00fcc5c  blr

MB_randRot:   # 0xfcc68, 0x64 bytes
  00fcc68  stdu 1, -144(1)
  00fcc6c  mflr 0
  00fcc70  std 0, 160(1)
  00fcc74  std 31, 136(1)
  00fcc78  lis 3, 16
  00fcc7c  addi 31, 3, -13216
  00fcc80  bl 0x5c8318
  00fcc84  nop
  00fcc88  srawi 3, 3, 15
  00fcc8c  clrlwi 3, 3, 20
  00fcc90  addic 3, 3, -2048
  00fcc94  extsw 3, 3
  00fcc98  std 3, 112(1)
  00fcc9c  lfs 1, 0(31)
  00fcca0  lfs 2, 4(31)
  00fcca4  lfd 3, 112(1)
  00fcca8  fcfid 3, 3
  00fccac  frsp 3, 3
  00fccb0  fmuls 1, 3, 1
  00fccb4  fmuls 1, 1, 2
  00fccb8  ld 0, 160(1)
  00fccbc  mtlr 0
  00fccc0  ld 31, 136(1)
  00fccc4  addi 1, 1, 144
  00fccc8  blr

MB_GetPvarsIfMobyHasThem:   # 0xfcccc, 0x34 bytes
  00fcccc  cmpwi 3, 0
  00fccd0  bf 2, 0xfccdc
  00fccd4  li 3, 0
  00fccd8  b 0xfccfc
  00fccdc  lhz 4, 52(3)
  00fcce0  rlwinm 4, 4, 0, 26, 26
  00fcce4  cmpwi 4, 0
  00fcce8  bt 2, 0xfccf8
  00fccec  lwz 3, 120(3)
  00fccf0  lwz 3, 0(3)
  00fccf4  b 0xfccfc
  00fccf8  li 3, 0
  00fccfc  blr

MB_DistributeBolts:   # 0xfcd60, 0xb54 bytes
  00fcd60  stdu 1, -464(1)
  00fcd64  mflr 0
  00fcd68  std 0, 480(1)
  00fcd6c  stfd 14, 320(1)
  00fcd70  stfd 15, 328(1)
  00fcd74  stfd 16, 336(1)
  00fcd78  stfd 17, 344(1)
  00fcd7c  stfd 18, 352(1)
  00fcd80  stfd 19, 360(1)
  00fcd84  stfd 20, 368(1)
  00fcd88  stfd 21, 376(1)
  00fcd8c  stfd 22, 384(1)
  00fcd90  stfd 23, 392(1)
  00fcd94  stfd 24, 400(1)
  00fcd98  stfd 25, 408(1)
  00fcd9c  stfd 26, 416(1)
  00fcda0  stfd 27, 424(1)
  00fcda4  stfd 28, 432(1)
  00fcda8  stfd 29, 440(1)
  00fcdac  stfd 30, 448(1)
  00fcdb0  stfd 31, 456(1)
  00fcdb4  std 31, 312(1)
  00fcdb8  lis 8, 16
  00fcdbc  ori 31, 3, 0
  00fcdc0  addi 8, 8, -13056
  00fcdc4  cmpwi 7, 6, 0
  00fcdc8  std 30, 304(1)
  00fcdcc  ori 3, 5, 0
  00fcdd0  std 29, 296(1)
  00fcdd4  ori 30, 6, 0
  00fcdd8  ori 29, 7, 0
  00fcddc  lfs 29, 0(8)
  00fcde0  rlwinm 8, 6, 0, 26, 26
  00fcde4  fmr 30, 29
  00fcde8  cmpwi 6, 8, 0
  00fcdec  fmr 31, 30
  00fcdf0  std 28, 288(1)
  00fcdf4  std 27, 280(1)
  00fcdf8  std 26, 272(1)
  00fcdfc  std 25, 264(1)
  00fce00  std 24, 256(1)
  00fce04  std 23, 248(1)
  00fce08  std 22, 240(1)
  00fce0c  std 21, 232(1)
  00fce10  std 20, 224(1)
  00fce14  fmr 28, 31
  00fce18  bf 26, 0xfce60
  00fce1c  lbz 5, 176(31)
  00fce20  cmpwi 5, 255
  00fce24  bt 2, 0xfce60
  00fce28  lhz 6, 166(31)
  00fce2c  extsh 6, 6
  00fce30  cmpwi 6, 500
  00fce34  cmpwi 1, 6, 540
  00fce38  bt 0, 0xfce40
  00fce3c  bf 5, 0xfce60
  00fce40  lis 6, 162
  00fce44  lis 7, 161
  00fce48  addic 6, 6, 704
  00fce4c  lbzx 5, 5, 6
  00fce50  addic 5, 5, -255
  00fce54  cntlzw 5, 5
  00fce58  rlwinm 5, 5, 27, 31, 31
  00fce5c  stw 5, 24364(7)
  00fce60  lis 5, 161
  00fce64  li 24, 0
  00fce68  lwz 5, 24364(5)
  00fce6c  cmpwi 5, 0
  00fce70  bt 2, 0xfce80
  00fce74  li 24, 0
  00fce78  bf 26, 0xfce80
  00fce7c  li 24, 1
  00fce80  bt 30, 0xfd82c
  00fce84  or 5, 3, 4
  00fce88  cmpwi 5, 0
  00fce8c  bt 2, 0xfd82c
  00fce90  rlwinm 5, 30, 0, 29, 29
  00fce94  cmpwi 5, 0
  00fce98  bt 2, 0xfced0
  00fce9c  cmpwi 31, 0
  00fcea0  bt 2, 0xfced0
  00fcea4  lhz 5, 52(31)
  00fcea8  rlwinm 5, 5, 0, 26, 26
  00fceac  cmpwi 5, 0
  00fceb0  bt 2, 0xfced0
  00fceb4  lwz 5, 120(31)
  00fceb8  lwz 5, 0(5)
  00fcebc  cmpwi 5, 0
  00fcec0  bt 2, 0xfced0
  00fcec4  lfs 28, 32(5)
  00fcec8  lfs 31, 36(5)
  00fcecc  lfs 29, 40(5)
  00fced0  li 5, 1
  00fced4  li 6, 1
  00fced8  subc 5, 4, 5
  00fcedc  subc 6, 6, 4
  00fcee0  sradi 5, 5, 63
  00fcee4  and 5, 5, 6
  00fcee8  addc 28, 4, 5
  00fceec  subc 27, 3, 28
  00fcef0  addic 26, 27, 1
  00fcef4  bl 0x5c8318
  00fcef8  nop
  00fcefc  srawi 3, 3, 15
  00fcf00  clrlwi 3, 3, 17
  00fcf04  divw 4, 3, 26
  00fcf08  mullw 5, 4, 27
  00fcf0c  lis 6, 151
  00fcf10  lis 7, 151
  00fcf14  addc 4, 5, 4
  00fcf18  li 5, 0
  00fcf1c  subc 3, 3, 4
  00fcf20  lwz 4, -13828(6)
  00fcf24  lwz 6, -25392(7)
  00fcf28  addc 3, 3, 28
  00fcf2c  or 4, 4, 6
  00fcf30  sldi 27, 3, 1
  00fcf34  subc 5, 5, 4
  00fcf38  subc 3, 3, 27
  00fcf3c  cntlzw 5, 5
  00fcf40  sldi 5, 5, 58
  00fcf44  sradi 5, 5, 63
  00fcf48  and 3, 5, 3
  00fcf4c  addc 27, 27, 3
  00fcf50  ori 3, 27, 0
  00fcf54  cmpwi 3, 500
  00fcf58  bf 0, 0xfd174
  00fcf5c  cmpwi 24, 0
  00fcf60  ori 3, 27, 0
  00fcf64  bt 2, 0xfd174
  00fcf68  lis 5, 161
  00fcf6c  ori 3, 27, 0
  00fcf70  lwz 5, -748(5)
  00fcf74  cmpwi 5, 0
  00fcf78  bt 2, 0xfd174
  00fcf7c  lis 3, 16
  00fcf80  lis 6, 114
  00fcf84  addi 3, 3, -13056
  00fcf88  cmpwi 4, 0
  00fcf8c  lfs 1, 4(3)
  00fcf90  lfs 2, -3056(6)
  00fcf94  fmuls 1, 2, 1
  00fcf98  lfs 2, 8(3)
  00fcf9c  lis 3, 161
  00fcfa0  lwz 3, -744(3)
  00fcfa4  fctidz 1, 1
  00fcfa8  fcfid 1, 1
  00fcfac  frsp 1, 1
  00fcfb0  fmuls 1, 1, 2
  00fcfb4  fctiwz 1, 1
  00fcfb8  stfd 1, 200(1)
  00fcfbc  lwz 4, 204(1)
  00fcfc0  mullw 4, 4, 3
  00fcfc4  divw 4, 4, 5
  00fcfc8  bt 2, 0xfcfd4
  00fcfcc  srawi 4, 4, 1
  00fcfd0  addze 4, 4
  00fcfd4  cmpwi 4, 150
  00fcfd8  cmpwi 1, 4, 90
  00fcfdc  cmpwi 6, 4, 300
  00fcfe0  bf 0, 0xfd0b0
  00fcfe4  bt 5, 0xfd004
  00fcfe8  lis 3, 101
  00fcfec  addic 3, 3, 12084
  00fcff0  bl 0x5cd098
  00fcff4  nop
  00fcff8  sldi 3, 27, 2
  00fcffc  addc 3, 27, 3
  00fd000  b 0xfd048
  00fd004  lis 3, 26214
  00fd008  subfic 28, 4, 190
  00fd00c  ori 26, 3, 26215
  00fd010  mulhw 3, 26, 28
  00fd014  lis 4, 101
  00fd018  srawi 5, 3, 3
  00fd01c  addic 3, 4, 12100
  00fd020  srwi 4, 5, 31
  00fd024  addc 4, 5, 4
  00fd028  extsw 4, 4
  00fd02c  bl 0x5cd098
  00fd030  nop
  00fd034  mulhw 3, 26, 28
  00fd038  srawi 3, 3, 3
  00fd03c  srwi 4, 3, 31
  00fd040  addc 3, 3, 4
  00fd044  mullw 3, 27, 3
  00fd048  lis 4, 151
  00fd04c  li 5, 1000
  00fd050  extsw 6, 3
  00fd054  li 10, 500
  00fd058  subc 5, 5, 6
  00fd05c  li 9, 1000
  00fd060  li 7, 500
  00fd064  lwz 4, -25392(4)
  00fd068  li 8, 0
  00fd06c  subc 6, 10, 6
  00fd070  subc 9, 9, 3
  00fd074  sradi 5, 5, 63
  00fd078  subc 7, 7, 3
  00fd07c  subc 4, 8, 4
  00fd080  sradi 6, 6, 63
  00fd084  and 5, 5, 9
  00fd088  cntlzw 4, 4
  00fd08c  and 6, 6, 7
  00fd090  addc 5, 3, 5
  00fd094  sldi 4, 4, 58
  00fd098  addc 3, 3, 6
  00fd09c  sradi 4, 4, 63
  00fd0a0  subc 3, 3, 5
  00fd0a4  and 3, 4, 3
  00fd0a8  addc 3, 5, 3
  00fd0ac  b 0xfd174
  00fd0b0  ori 3, 27, 0
  00fd0b4  cmpwi 1, 4, 351
  00fd0b8  bf 25, 0xfd174
  00fd0bc  lis 28, 101
  00fd0c0  addic 28, 28, 12116
  00fd0c4  bf 5, 0xfd104
  00fd0c8  lis 3, 16
  00fd0cc  addi 3, 3, -13056
  00fd0d0  lfd 1, 16(3)
  00fd0d4  ori 3, 28, 0
  00fd0d8  stfd 1, 56(1)
  00fd0dc  ld 4, 56(1)
  00fd0e0  bl 0x5cd098
  00fd0e4  nop
  00fd0e8  lis 3, 26214
  00fd0ec  ori 3, 3, 26215
  00fd0f0  mulhw 3, 3, 27
  00fd0f4  srawi 3, 3, 2
  00fd0f8  srwi 4, 3, 31
  00fd0fc  addc 3, 3, 4
  00fd100  b 0xfd154
  00fd104  subfic 26, 4, 360
  00fd108  extsw 3, 26
  00fd10c  bl 0x502730
  00fd110  nop
  00fd114  lis 3, 16
  00fd118  addi 3, 3, -13056
  00fd11c  lfs 2, 24(3)
  00fd120  ori 3, 28, 0
  00fd124  fmuls 1, 1, 2
  00fd128  stfd 1, 56(1)
  00fd12c  ld 4, 56(1)
  00fd130  bl 0x5cd098
  00fd134  nop
  00fd138  lis 3, 26214
  00fd13c  ori 3, 3, 26215
  00fd140  mulhw 3, 3, 26
  00fd144  srawi 3, 3, 5
  00fd148  srwi 4, 3, 31
  00fd14c  addc 3, 3, 4
  00fd150  mullw 3, 27, 3
  00fd154  extsw 4, 3
  00fd158  li 5, 1
  00fd15c  li 6, 1
  00fd160  subc 4, 4, 5
  00fd164  subc 5, 6, 3
  00fd168  sradi 4, 4, 63
  00fd16c  and 4, 4, 5
  00fd170  addc 3, 3, 4
  00fd174  ori 28, 3, 0
  00fd178  li 25, 0
  00fd17c  cmpwi 28, 300
  00fd180  bt 0, 0xfd194
  00fd184  addic 28, 28, -50
  00fd188  addic 25, 25, 1
  00fd18c  cmpwi 28, 300
  00fd190  bf 0, 0xfd184
  00fd194  cmpwi 28, 200
  00fd198  li 26, 0
  00fd19c  bt 0, 0xfd1b0
  00fd1a0  addic 28, 28, -20
  00fd1a4  addic 26, 26, 1
  00fd1a8  cmpwi 28, 200
  00fd1ac  bf 0, 0xfd1a0
  00fd1b0  cmpwi 28, 30
  00fd1b4  li 27, 0
  00fd1b8  bt 0, 0xfd1d0
  00fd1bc  addic 28, 28, -25
  00fd1c0  addic 27, 27, 1
  00fd1c4  cmpwi 28, 30
  00fd1c8  addic 26, 26, 1
  00fd1cc  bf 0, 0xfd1bc
  00fd1d0  cmpwi 28, 7
  00fd1d4  bt 0, 0xfd1e8
  00fd1d8  addic 28, 28, -5
  00fd1dc  addic 27, 27, 1
  00fd1e0  cmpwi 28, 7
  00fd1e4  bf 0, 0xfd1d8
  00fd1e8  addc 4, 25, 26
  00fd1ec  addc 4, 4, 27
  00fd1f0  addc 4, 4, 28
  00fd1f4  cmpwi 4, 3
  00fd1f8  bf 1, 0xfd378
  00fd1fc  rlwinm 4, 30, 0, 28, 28
  00fd200  cmpwi 4, 0
  00fd204  bt 2, 0xfd378
  00fd208  ori 4, 28, 0
  00fd20c  li 28, 0
  00fd210  ori 6, 27, 0
  00fd214  ori 27, 28, 0
  00fd218  ori 11, 25, 0
  00fd21c  ori 7, 26, 0
  00fd220  addc 12, 6, 4
  00fd224  li 25, 3
  00fd228  ori 26, 27, 0
  00fd22c  addc 12, 12, 7
  00fd230  ori 10, 25, 0
  00fd234  ori 5, 26, 0
  00fd238  addc 11, 12, 11
  00fd23c  ori 4, 10, 0
  00fd240  ori 6, 5, 0
  00fd244  cmpwi 11, 3
  00fd248  li 8, 150
  00fd24c  ori 9, 4, 0
  00fd250  cmpwi 1, 3, 150
  00fd254  ori 7, 6, 0
  00fd258  bf 1, 0xfd354
  00fd25c  li 11, 0
  00fd260  ori 9, 8, 0
  00fd264  ori 12, 11, 0
  00fd268  bf 4, 0xfd2d4
  00fd26c  cmpwi 8, 3
  00fd270  cmpwi 1, 25, 0
  00fd274  bf 1, 0xfd2d4
  00fd278  cmpwi 6, 26, 0
  00fd27c  bt 6, 0xfd294
  00fd280  addic 9, 9, -50
  00fd284  addic 25, 25, -1
  00fd288  addic 11, 11, 20
  00fd28c  addic 26, 26, 1
  00fd290  b 0xfd2c0
  00fd294  cmpwi 1, 27, 0
  00fd298  bt 26, 0xfd2b0
  00fd29c  addic 11, 11, -20
  00fd2a0  addic 26, 26, -1
  00fd2a4  addic 12, 12, 5
  00fd2a8  addic 27, 27, 1
  00fd2ac  b 0xfd2c0
  00fd2b0  bt 6, 0xfd2c0
  00fd2b4  addic 12, 12, -5
  00fd2b8  addic 27, 27, -1
  00fd2bc  addic 28, 28, 1
  00fd2c0  addc 8, 9, 11
  00fd2c4  addc 8, 8, 12
  00fd2c8  addc 8, 8, 28
  00fd2cc  cmpw 3, 8
  00fd2d0  bt 0, 0xfd26c
  00fd2d4  ori 9, 10, 0
  00fd2d8  li 10, 0
  00fd2dc  cmpwi 3, 3
  00fd2e0  ori 11, 10, 0
  00fd2e4  ori 12, 11, 0
  00fd2e8  bf 1, 0xfd354
  00fd2ec  cmpwi 9, 150
  00fd2f0  cmpwi 1, 4, 0
  00fd2f4  bf 0, 0xfd354
  00fd2f8  cmpwi 6, 5, 0
  00fd2fc  bt 6, 0xfd310
  00fd300  addic 4, 4, -1
  00fd304  addic 12, 12, 5
  00fd308  addic 5, 5, 1
  00fd30c  b 0xfd340
  00fd310  cmpwi 1, 6, 0
  00fd314  bt 26, 0xfd32c
  00fd318  addic 12, 12, -5
  00fd31c  addic 5, 5, -1
  00fd320  addic 11, 11, 20
  00fd324  addic 6, 6, 1
  00fd328  b 0xfd340
  00fd32c  bt 6, 0xfd340
  00fd330  addic 11, 11, -20
  00fd334  addic 6, 6, -1
  00fd338  addic 10, 10, 50
  00fd33c  addic 7, 7, 1
  00fd340  addc 9, 10, 11
  00fd344  addc 9, 9, 12
  00fd348  addc 9, 9, 4
  00fd34c  cmpw 3, 9
  00fd350  bt 1, 0xfd2ec
  00fd354  subc 8, 8, 3
  00fd358  subc 3, 3, 9
  00fd35c  cmpw 8, 3
  00fd360  bt 0, 0xfd378
  00fd364  ori 28, 4, 0
  00fd368  ori 27, 5, 0
  00fd36c  ori 26, 6, 0
  00fd370  ori 25, 7, 0
  00fd374  b 0xfd378
  00fd378  or 3, 25, 26
  00fd37c  stfs 28, 192(1)
  00fd380  stfs 29, 188(1)
  00fd384  or 3, 3, 27
  00fd388  or 3, 3, 28
  00fd38c  cmpwi 3, 0
  00fd390  bt 2, 0xfd82c
  00fd394  lis 3, 16
  00fd398  stfs 31, 184(1)
  00fd39c  lis 23, 165
  00fd3a0  addi 3, 3, -13056
  00fd3a4  sldi 22, 29, 2
  00fd3a8  addic 23, 23, 7136
  00fd3ac  extsw 22, 22
  00fd3b0  addic 21, 31, 16
  00fd3b4  lfs 21, 28(3)
  00fd3b8  lfs 14, 32(3)
  00fd3bc  lfs 22, 36(3)
  00fd3c0  lfs 23, 40(3)
  00fd3c4  lfs 24, 44(3)
  00fd3c8  lfs 25, 48(3)
  00fd3cc  lfs 26, 52(3)
  00fd3d0  lfs 27, 56(3)
  00fd3d4  lfs 15, 60(3)
  00fd3d8  lfs 28, 64(3)
  00fd3dc  lfs 16, 68(3)
  00fd3e0  lfs 17, 72(3)
  00fd3e4  lfs 18, 76(3)
  00fd3e8  lfs 29, 80(3)
  00fd3ec  lfs 19, 84(3)
  00fd3f0  lfs 20, 88(3)
  00fd3f4  stfs 20, 216(1)
  00fd3f8  lfs 1, 24(31)
  00fd3fc  lfs 2, 16(31)
  00fd400  fadds 1, 1, 21
  00fd404  lfs 3, 20(31)
  00fd408  stfs 2, 112(1)
  00fd40c  lfs 2, 28(31)
  00fd410  stfs 3, 116(1)
  00fd414  stfs 2, 124(1)
  00fd418  stfs 1, 120(1)
  00fd41c  bl 0x5c8318
  00fd420  nop
  00fd424  srawi 3, 3, 15
  00fd428  clrlwi 3, 3, 20
  00fd42c  addic 3, 3, -2048
  00fd430  extsw 3, 3
  00fd434  std 3, 200(1)
  00fd438  lfd 1, 200(1)
  00fd43c  fcfid 1, 1
  00fd440  frsp 1, 1
  00fd444  fmuls 31, 1, 18
  00fd448  fadds 1, 31, 14
  00fd44c  fsubs 2, 22, 1
  00fd450  fsubs 3, 23, 1
  00fd454  fsub 4, 1, 2
  00fd458  fsel 1, 4, 2, 1
  00fd45c  fsub 2, 3, 1
  00fd460  fsel 1, 2, 3, 1
  00fd464  fmuls 2, 1, 1
  00fd468  fmuls 3, 2, 1
  00fd46c  fmuls 4, 2, 3
  00fd470  fmadds 1, 3, 24, 1
  00fd474  fmuls 3, 2, 4
  00fd478  fmadds 1, 4, 25, 1
  00fd47c  fmuls 2, 2, 3
  00fd480  fmadds 1, 3, 26, 1
  00fd484  fmadds 20, 2, 27, 1
  00fd488  bl 0x5c8318
  00fd48c  nop
  00fd490  fsubs 1, 22, 31
  00fd494  srawi 3, 3, 15
  00fd498  fsubs 2, 23, 31
  00fd49c  lis 20, 114
  00fd4a0  clrlwi 3, 3, 17
  00fd4a4  extsw 3, 3
  00fd4a8  std 3, 200(1)
  00fd4ac  fsub 3, 31, 1
  00fd4b0  fsel 1, 3, 1, 31
  00fd4b4  lfs 3, -3052(20)
  00fd4b8  lfd 5, 200(1)
  00fd4bc  fcfid 5, 5
  00fd4c0  fsub 4, 2, 1
  00fd4c4  fsel 1, 4, 2, 1
  00fd4c8  frsp 2, 5
  00fd4cc  fmuls 4, 1, 1
  00fd4d0  fmuls 2, 2, 29
  00fd4d4  fmuls 5, 4, 1
  00fd4d8  fmuls 2, 2, 3
  00fd4dc  fmuls 3, 4, 5
  00fd4e0  fmadds 1, 5, 24, 1
  00fd4e4  fmuls 2, 2, 20
  00fd4e8  fmuls 5, 4, 3
  00fd4ec  fmadds 1, 3, 25, 1
  00fd4f0  stfs 2, 128(1)
  00fd4f4  fmuls 2, 4, 5
  00fd4f8  fmadds 1, 5, 26, 1
  00fd4fc  fmadds 31, 2, 27, 1
  00fd500  bl 0x5c8318
  00fd504  nop
  00fd508  srawi 3, 3, 15
  00fd50c  clrlwi 3, 3, 17
  00fd510  extsw 3, 3
  00fd514  std 3, 200(1)
  00fd518  lfs 1, -3052(20)
  00fd51c  stfs 30, 136(1)
  00fd520  lfd 2, 200(1)
  00fd524  fcfid 2, 2
  00fd528  frsp 2, 2
  00fd52c  fmuls 2, 2, 29
  00fd530  fmuls 1, 2, 1
  00fd534  fmuls 1, 1, 31
  00fd538  stfs 1, 132(1)
  00fd53c  bl 0x5c8318
  00fd540  nop
  00fd544  lfs 1, 132(1)
  00fd548  lfs 31, 128(1)
  00fd54c  fmuls 2, 1, 1
  00fd550  srawi 3, 3, 15
  00fd554  clrlwi 3, 3, 17
  00fd558  extsw 3, 3
  00fd55c  fmadds 2, 31, 31, 2
  00fd560  std 3, 200(1)
  00fd564  lfs 4, 112(1)
  00fd568  lfs 5, 116(1)
  00fd56c  lfs 3, 120(1)
  00fd570  lfs 6, -3052(20)
  00fd574  lfd 7, 200(1)
  00fd578  fsqrts 2, 2
  00fd57c  cmpwi 29, -1
  00fd580  fcfid 7, 7
  00fd584  fadds 3, 3, 30
  00fd588  frsp 7, 7
  00fd58c  stfs 3, 120(1)
  00fd590  fmadds 7, 7, 19, 15
  00fd594  fdivs 8, 21, 2
  00fd598  fsub 9, 30, 2
  00fd59c  fsub 10, 30, 2
  00fd5a0  fsub 11, 2, 30
  00fd5a4  fsub 12, 2, 30
  00fd5a8  fmuls 2, 7, 6
  00fd5ac  fmuls 6, 1, 8
  00fd5b0  fmuls 7, 31, 8
  00fd5b4  fsel 8, 9, 30, 6
  00fd5b8  fsel 9, 10, 30, 7
  00fd5bc  fsel 6, 11, 8, 6
  00fd5c0  fsel 7, 12, 9, 7
  00fd5c4  fadds 5, 5, 6
  00fd5c8  fadds 4, 4, 7
  00fd5cc  stfs 5, 116(1)
  00fd5d0  stfs 4, 112(1)
  00fd5d4  lfs 20, 216(1)
  00fd5d8  bf 1, 0xfd740
  00fd5dc  lis 3, 114
  00fd5e0  addic 6, 1, 176
  00fd5e4  addic 7, 1, 180
  00fd5e8  lfs 1, -3048(3)
  00fd5ec  lwzx 3, 23, 22
  00fd5f0  fmuls 1, 1, 20
  00fd5f4  stfs 2, 136(1)
  00fd5f8  lfs 4, 24(3)
  00fd5fc  fsubs 3, 3, 4
  00fd600  fsubs 2, 2, 1
  00fd604  bl 0xfcb40
  00fd608  extsw 3, 3
  00fd60c  std 3, 200(1)
  00fd610  lfd 1, 200(1)
  00fd614  fcfid 1, 1
  00fd618  frsp 1, 1
  00fd61c  fcmpu 0, 1, 28
  00fd620  bt 0, 0xfd654
  00fd624  lwz 4, 176(1)
  00fd628  lis 3, 17136
  00fd62c  lfs 31, 176(1)
  00fd630  srawi 5, 4, 31
  00fd634  srwi 6, 5, 1
  00fd638  xor 4, 6, 4
  00fd63c  subc 4, 4, 5
  00fd640  cmpw 1, 4, 3
  00fd644  cmpwi 4, 0
  00fd648  crnand 2, 1, 4
  00fd64c  bt 2, 0xfd654
  00fd650  b 0xfd658
  00fd654  fmr 31, 16
  00fd658  lfs 1, 128(1)
  00fd65c  lfs 2, 132(1)
  00fd660  addic 5, 1, 144
  00fd664  lfs 3, 136(1)
  00fd668  addic 6, 1, 160
  00fd66c  lfs 4, 16(31)
  00fd670  ori 3, 29, 0
  00fd674  lfs 5, 20(31)
  00fd678  ori 4, 21, 0
  00fd67c  fmadds 1, 1, 31, 4
  00fd680  lfs 4, 24(31)
  00fd684  fmadds 2, 2, 31, 5
  00fd688  fmadds 3, 3, 31, 4
  00fd68c  lfs 5, 140(1)
  00fd690  stfs 5, 156(1)
  00fd694  stfs 1, 144(1)
  00fd698  stfs 2, 148(1)
  00fd69c  stfs 3, 152(1)
  00fd6a0  bl 0xfc948
  00fd6a4  lfs 1, 164(1)
  00fd6a8  lfs 2, 116(1)
  00fd6ac  lfs 3, 160(1)
  00fd6b0  fsubs 1, 1, 2
  00fd6b4  lfs 2, 112(1)
  00fd6b8  fsubs 3, 3, 2
  00fd6bc  lfs 5, 172(1)
  00fd6c0  fdivs 31, 28, 31
  00fd6c4  fmuls 2, 1, 1
  00fd6c8  fmadds 2, 3, 3, 2
  00fd6cc  fmadds 2, 30, 30, 2
  00fd6d0  fsqrts 4, 2
  00fd6d4  lfs 2, 136(1)
  00fd6d8  stfs 5, 156(1)
  00fd6dc  fdivs 5, 17, 4
  00fd6e0  fsub 6, 30, 4
  00fd6e4  fsub 7, 30, 4
  00fd6e8  fsub 8, 30, 4
  00fd6ec  fsub 9, 4, 30
  00fd6f0  fsub 10, 4, 30
  00fd6f4  fsub 4, 4, 30
  00fd6f8  fmuls 11, 5, 30
  00fd6fc  fmuls 12, 1, 5
  00fd700  fmuls 5, 3, 5
  00fd704  fsel 6, 6, 30, 11
  00fd708  fsel 7, 7, 30, 12
  00fd70c  fsel 8, 8, 30, 5
  00fd710  fsel 6, 9, 6, 11
  00fd714  fsel 7, 10, 7, 12
  00fd718  fsel 4, 4, 8, 5
  00fd71c  fsubs 5, 30, 6
  00fd720  fsubs 1, 1, 7
  00fd724  fsubs 3, 3, 4
  00fd728  fmuls 4, 5, 31
  00fd72c  fmuls 1, 1, 31
  00fd730  fmuls 31, 3, 31
  00fd734  stfs 4, 152(1)
  00fd738  stfs 1, 148(1)
  00fd73c  stfs 31, 144(1)
  00fd740  lfs 3, 192(1)
  00fd744  cmpwi 25, 0
  00fd748  lfs 4, 184(1)
  00fd74c  cmpwi 6, 26, 0
  00fd750  lfs 5, 188(1)
  00fd754  fadds 3, 31, 3
  00fd758  fadds 1, 1, 4
  00fd75c  fadds 2, 2, 5
  00fd760  stfs 3, 128(1)
  00fd764  stfs 1, 132(1)
  00fd768  stfs 2, 136(1)
  00fd76c  bt 2, 0xfd798
  00fd770  addic 4, 1, 112
  00fd774  ori 8, 24, 0
  00fd778  addic 5, 1, 128
  00fd77c  ori 3, 31, 0
  00fd780  ori 6, 30, 0
  00fd784  li 7, 50
  00fd788  bl 0x242738
  00fd78c  nop
  00fd790  addic 25, 25, -1
  00fd794  b 0xfd818
  00fd798  cmpwi 1, 27, 0
  00fd79c  bt 26, 0xfd7c8
  00fd7a0  addic 4, 1, 112
  00fd7a4  ori 8, 24, 0
  00fd7a8  addic 5, 1, 128
  00fd7ac  ori 3, 31, 0
  00fd7b0  ori 6, 30, 0
  00fd7b4  li 7, 20
  00fd7b8  bl 0x242738
  00fd7bc  nop
  00fd7c0  addic 26, 26, -1
  00fd7c4  b 0xfd818
  00fd7c8  bt 6, 0xfd7f4
  00fd7cc  addic 4, 1, 112
  00fd7d0  addic 5, 1, 128
  00fd7d4  ori 3, 31, 0
  00fd7d8  ori 6, 30, 0
  00fd7dc  li 7, 5
  00fd7e0  ori 8, 24, 0
  00fd7e4  bl 0x242738
  00fd7e8  nop
  00fd7ec  addic 27, 27, -1
  00fd7f0  b 0xfd818
  00fd7f4  addic 4, 1, 112
  00fd7f8  addic 5, 1, 128
  00fd7fc  ori 3, 31, 0
  00fd800  ori 6, 30, 0
  00fd804  li 7, 1
  00fd808  ori 8, 24, 0
  00fd80c  bl 0x242738
  00fd810  nop
  00fd814  addic 28, 28, -1
  00fd818  or 3, 25, 26
  00fd81c  or 3, 3, 27
  00fd820  or 3, 3, 28
  00fd824  cmpwi 3, 0
  00fd828  bf 2, 0xfd3f4
  00fd82c  ld 0, 480(1)
  00fd830  mtlr 0
  00fd834  lfd 14, 320(1)
  00fd838  lfd 15, 328(1)
  00fd83c  lfd 16, 336(1)
  00fd840  lfd 17, 344(1)
  00fd844  lfd 18, 352(1)
  00fd848  lfd 19, 360(1)
  00fd84c  lfd 20, 368(1)
  00fd850  lfd 21, 376(1)
  00fd854  lfd 22, 384(1)
  00fd858  lfd 23, 392(1)
  00fd85c  lfd 24, 400(1)
  00fd860  lfd 25, 408(1)
  00fd864  lfd 26, 416(1)
  00fd868  lfd 27, 424(1)
  00fd86c  lfd 28, 432(1)
  00fd870  lfd 29, 440(1)
  00fd874  lfd 30, 448(1)
  00fd878  lfd 31, 456(1)
  00fd87c  ld 20, 224(1)
  00fd880  ld 21, 232(1)
  00fd884  ld 22, 240(1)
  00fd888  ld 23, 248(1)
  00fd88c  ld 24, 256(1)
  00fd890  ld 25, 264(1)
  00fd894  ld 26, 272(1)
  00fd898  ld 27, 280(1)
  00fd89c  ld 28, 288(1)
  00fd8a0  ld 29, 296(1)
  00fd8a4  ld 30, 304(1)
  00fd8a8  ld 31, 312(1)
  00fd8ac  addi 1, 1, 464
  00fd8b0  blr

MB_SpawnBoltsFromCrate:   # 0xfd8d0, 0x420 bytes
  00fd8d0  stdu 1, -176(1)
  00fd8d4  mflr 0
  00fd8d8  std 0, 192(1)
  00fd8dc  stfd 31, 168(1)
  00fd8e0  lhz 7, 180(3)
  00fd8e4  li 6, 180
  00fd8e8  vspltisw 3, -16
  00fd8ec  std 30, 152(1)
  00fd8f0  extsh 7, 7
  00fd8f4  ori 30, 3, 0
  00fd8f8  std 31, 160(1)
  00fd8fc  extsw 7, 7
  00fd900  ori 31, 5, 0
  00fd904  <unknown>
  00fd908  std 7, 112(1)
  00fd90c  lbz 6, 177(3)
  00fd910  lfd 1, 112(1)
  00fd914  vsraw 3, 2, 3
  00fd918  cmpwi 6, 254
  00fd91c  fcfid 31, 1
  00fd920  vcfsx 3, 3, 0
  00fd924  std 29, 144(1)
  00fd928  std 28, 136(1)
  00fd92c  frsp 31, 31
  00fd930  bt 2, 0xfdccc
  00fd934  lhz 7, 178(30)
  00fd938  extsh 8, 7
  00fd93c  cmpwi 8, 0
  00fd940  bt 0, 0xfdccc
  00fd944  lis 5, 151
  00fd948  lis 3, 161
  00fd94c  srawi 6, 8, 5
  00fd950  addic 3, 3, -13028
  00fd954  sldi 6, 6, 2
  00fd958  lwz 8, -25488(5)
  00fd95c  addc 3, 6, 3
  00fd960  lhz 5, 178(30)
  00fd964  slwi 10, 8, 8
  00fd968  clrldi 11, 3, 32
  00fd96c  extsw 3, 10
  00fd970  extsh 6, 5
  00fd974  lis 9, 165
  00fd978  clrlwi 7, 7, 27
  00fd97c  li 12, 1
  00fd980  srawi 6, 6, 5
  00fd984  addic 9, 9, 19920
  00fd988  lwzx 29, 11, 3
  00fd98c  slw 7, 12, 7
  00fd990  sldi 6, 6, 2
  00fd994  clrlwi 10, 5, 27
  00fd998  or 7, 29, 7
  00fd99c  slw 10, 12, 10
  00fd9a0  extsh 5, 5
  00fd9a4  lwzx 12, 9, 6
  00fd9a8  stwx 7, 11, 3
  00fd9ac  or 7, 12, 10
  00fd9b0  lis 10, 165
  00fd9b4  stwx 7, 9, 6
  00fd9b8  lbz 7, 176(30)
  00fd9bc  addic 9, 10, 14692
  00fd9c0  addic 6, 7, 2
  00fd9c4  cmpwi 7, 255
  00fd9c8  stbx 6, 9, 5
  00fd9cc  bt 2, 0xfda08
  00fd9d0  lis 9, 162
  00fd9d4  addic 9, 9, 704
  00fd9d8  lbzx 9, 7, 9
  00fd9dc  cmpwi 9, 255
  00fd9e0  bt 2, 0xfda14
  00fd9e4  lis 9, 161
  00fd9e8  slwi 8, 8, 4
  00fd9ec  addic 9, 9, -13692
  00fd9f0  extsw 8, 8
  00fd9f4  addc 7, 7, 9
  00fd9f8  clrldi 7, 7, 32
  00fd9fc  lbzx 7, 7, 8
  00fda00  cmpwi 7, 255
  00fda04  bf 2, 0xfda14
  00fda08  lis 7, 165
  00fda0c  addic 7, 7, 17860
  00fda10  stbx 6, 7, 5
  00fda14  lbz 5, 177(30)
  00fda18  vsldoi 2, 3, 3, 0
  00fda1c  cmpwi 5, 128
  00fda20  bf 0, 0xfdae0
  00fda24  lis 6, 161
  00fda28  vspltisw 2, -16
  00fda2c  rlwinm 5, 5, 2, 22, 29
  00fda30  addic 6, 6, -7906
  00fda34  li 7, 182
  00fda38  addc 5, 5, 6
  00fda3c  lhz 6, 182(30)
  00fda40  addi 8, 3, 16
  00fda44  clrldi 5, 5, 32
  00fda48  extsh 6, 6
  00fda4c  <unknown>
  00fda50  addic 7, 6, 1
  00fda54  vsraw 5, 5, 2
  00fda58  lhzx 9, 5, 3
  00fda5c  <unknown>
  00fda60  <unknown>
  00fda64  extsh 3, 9
  00fda68  srawi 5, 7, 1
  00fda6c  vor 4, 4, 2
  00fda70  addze 5, 5
  00fda74  subc 3, 6, 3
  00fda78  vsldoi 2, 3, 3, 0
  00fda7c  cmpw 3, 5
  00fda80  cmpwi 1, 3, 0
  00fda84  bf 1, 0xfdab4
  00fda88  vsldoi 2, 3, 3, 0
  00fda8c  vspltisw 3, -16
  00fda90  vsraw 3, 4, 3
  00fda94  vsubuwm 3, 5, 3
  00fda98  bt 6, 0xfdab4
  00fda9c  extsw 3, 3
  00fdaa0  vcfsx 2, 3, 0
  00fdaa4  std 3, 112(1)
  00fdaa8  lfd 1, 112(1)
  00fdaac  fcfid 31, 1
  00fdab0  frsp 31, 31
  00fdab4  lis 3, 16
  00fdab8  vspltw 2, 2, 0
  00fdabc  addi 3, 3, -10060
  00fdac0  <unknown>
  00fdac4  vspltw 3, 3, 0
  00fdac8  vcmpgefp. 4, 2, 3
  00fdacc  bf 26, 0xfdae0
  00fdad0  lis 3, 16
  00fdad4  vsldoi 2, 3, 3, 0
  00fdad8  addi 3, 3, -10060
  00fdadc  lfs 31, 0(3)
  00fdae0  rlwinm 3, 4, 0, 23, 23
  00fdae4  li 5, 0
  00fdae8  vspltw 2, 2, 0
  00fdaec  lis 6, 151
  00fdaf0  subc 3, 5, 3
  00fdaf4  addic 5, 6, -25376
  00fdaf8  cntlzw 3, 3
  00fdafc  li 6, 1
  00fdb00  sldi 3, 3, 58
  00fdb04  li 8, 5
  00fdb08  sradi 3, 3, 63
  00fdb0c  subc 6, 6, 8
  00fdb10  lbz 10, 8370(5)
  00fdb14  rlwinm 7, 4, 0, 22, 22
  00fdb18  and 3, 3, 6
  00fdb1c  li 9, 0
  00fdb20  or 6, 10, 7
  00fdb24  addc 3, 8, 3
  00fdb28  subc 6, 9, 6
  00fdb2c  ori 7, 3, 2
  00fdb30  lwz 8, 8324(5)
  00fdb34  cntlzw 6, 6
  00fdb38  subc 3, 3, 7
  00fdb3c  sldi 6, 6, 58
  00fdb40  cmpwi 8, 16
  00fdb44  sradi 6, 6, 63
  00fdb48  and 3, 6, 3
  00fdb4c  addc 3, 7, 3
  00fdb50  ori 29, 3, 0
  00fdb54  bf 2, 0xfdbac
  00fdb58  lfs 1, 132(5)
  00fdb5c  lfs 2, 20(30)
  00fdb60  lfs 3, 128(5)
  00fdb64  fsubs 1, 1, 2
  00fdb68  lfs 2, 16(30)
  00fdb6c  fsubs 2, 3, 2
  00fdb70  lfs 3, 136(5)
  00fdb74  lfs 4, 24(30)
  00fdb78  fsubs 3, 3, 4
  00fdb7c  fmuls 1, 1, 1
  00fdb80  lis 5, 16
  00fdb84  ori 29, 3, 0
  00fdb88  addi 5, 5, -10060
  00fdb8c  fmadds 1, 2, 2, 1
  00fdb90  lfs 2, 4(5)
  00fdb94  fmadds 1, 3, 3, 1
  00fdb98  fsqrts 1, 1
  00fdb9c  fcmpu 0, 1, 2
  00fdba0  cror 6, 1, 2
  00fdba4  bt 6, 0xfdbac
  00fdba8  ori 29, 3, 2
  00fdbac  rlwinm 3, 4, 0, 21, 21
  00fdbb0  li 5, 0
  00fdbb4  lis 7, 165
  00fdbb8  subc 3, 5, 3
  00fdbbc  ori 6, 29, 16
  00fdbc0  cntlzw 3, 3
  00fdbc4  subc 5, 29, 6
  00fdbc8  sldi 3, 3, 58
  00fdbcc  sradi 8, 3, 63
  00fdbd0  lwz 3, -9488(7)
  00fdbd4  and 5, 8, 5
  00fdbd8  cmpwi 3, 100
  00fdbdc  addc 5, 6, 5
  00fdbe0  bt 0, 0xfdbf4
  00fdbe4  rlwinm 4, 4, 0, 20, 20
  00fdbe8  ori 29, 5, 0
  00fdbec  cmpwi 4, 0
  00fdbf0  bt 2, 0xfdbf8
  00fdbf4  ori 29, 5, 8
  00fdbf8  vspltisw 3, 0
  00fdbfc  lis 4, 16
  00fdc00  li 5, 50
  00fdc04  addi 4, 4, -10060
  00fdc08  vcmpgtfp 4, 3, 2
  00fdc0c  extsw 3, 3
  00fdc10  vandc 2, 2, 4
  00fdc14  ori 6, 29, 2
  00fdc18  lfs 1, 8(4)
  00fdc1c  subc 3, 3, 5
  00fdc20  vcmpgtfp. 3, 2, 3
  00fdc24  fsub 2, 31, 1
  00fdc28  fsel 31, 2, 31, 1
  00fdc2c  subc 4, 6, 29
  00fdc30  sradi 3, 3, 63
  00fdc34  and 3, 3, 4
  00fdc38  addc 29, 29, 3
  00fdc3c  bt 26, 0xfdccc
  00fdc40  lis 3, 16
  00fdc44  li 4, 12
  00fdc48  addi 3, 3, -10060
  00fdc4c  li 28, 0
  00fdc50  <unknown>
  00fdc54  vspltw 3, 3, 0
  00fdc58  vcmpgefp. 3, 2, 3
  00fdc5c  bt 26, 0xfdc80
  00fdc60  lis 3, 16
  00fdc64  addi 3, 3, -10060
  00fdc68  lfs 1, 16(3)
  00fdc6c  fmuls 1, 31, 1
  00fdc70  bl 0x502758
  00fdc74  nop
  00fdc78  ori 28, 3, 0
  00fdc7c  b 0xfdca0
  00fdc80  lis 3, 16
  00fdc84  li 4, 20
  00fdc88  addi 3, 3, -10060
  00fdc8c  <unknown>
  00fdc90  vspltw 3, 3, 0
  00fdc94  vcmpgefp. 2, 2, 3
  00fdc98  bt 26, 0xfdca0
  00fdc9c  li 28, 1
  00fdca0  fmr 1, 31
  00fdca4  bl 0x502758
  00fdca8  nop
  00fdcac  addc 5, 3, 28
  00fdcb0  subc 4, 3, 28
  00fdcb4  ori 6, 29, 0
  00fdcb8  ori 7, 31, 0
  00fdcbc  extsw 5, 5
  00fdcc0  extsw 4, 4
  00fdcc4  ori 3, 30, 0
  00fdcc8  bl 0xfcd60
  00fdccc  ld 0, 192(1)
  00fdcd0  mtlr 0
  00fdcd4  lfd 31, 168(1)
  00fdcd8  ld 28, 136(1)
  00fdcdc  ld 29, 144(1)
  00fdce0  ld 30, 152(1)
  00fdce4  ld 31, 160(1)
  00fdce8  addi 1, 1, 176
  00fdcec  blr

MB_SetAnimationNoBlend:   # 0xfdcf0, 0xc8 bytes
  00fdcf0  stdu 1, -128(1)
  00fdcf4  mflr 0
  00fdcf8  std 0, 144(1)
  00fdcfc  std 31, 120(1)
  00fdd00  ori 31, 3, 0
  00fdd04  sldi 3, 4, 2
  00fdd08  lwz 6, 36(31)
  00fdd0c  addc 3, 6, 3
  00fdd10  clrldi 6, 3, 32
  00fdd14  lwz 6, 72(6)
  00fdd18  lbz 3, 16(6)
  00fdd1c  stb 4, 82(31)
  00fdd20  addic 7, 3, -1
  00fdd24  subc 3, 5, 3
  00fdd28  subc 5, 5, 7
  00fdd2c  sradi 3, 3, 63
  00fdd30  and 3, 3, 5
  00fdd34  addc 5, 7, 3
  00fdd38  addic 3, 5, 1
  00fdd3c  stb 5, 80(31)
  00fdd40  clrlwi 7, 3, 24
  00fdd44  stb 3, 81(31)
  00fdd48  lbz 5, 16(6)
  00fdd4c  addic 5, 5, -1
  00fdd50  cmpw 7, 5
  00fdd54  bf 1, 0xfdd60
  00fdd58  ori 3, 5, 0
  00fdd5c  stb 5, 81(31)
  00fdd60  stb 4, 83(31)
  00fdd64  clrlwi 3, 3, 24
  00fdd68  lbz 4, 16(6)
  00fdd6c  cmpw 3, 4
  00fdd70  bt 0, 0xfdd7c
  00fdd74  li 3, 0
  00fdd78  stb 3, 81(31)
  00fdd7c  ori 3, 31, 0
  00fdd80  bl 0xef74c
  00fdd84  nop
  00fdd88  lwz 3, 104(31)
  00fdd8c  lbz 4, 112(31)
  00fdd90  li 5, 0
  00fdd94  rlwimi 4, 5, 0, 30, 30
  00fdd98  lfs 1, 0(3)
  00fdd9c  stfs 1, 92(31)
  00fdda0  stb 4, 112(31)
  00fdda4  ld 0, 144(1)
  00fdda8  mtlr 0
  00fddac  ld 31, 120(1)
  00fddb0  addi 1, 1, 128
  00fddb4  blr

MB_SetAnimation:   # 0xfddc0, 0x1b8 bytes
  00fddc0  stdu 1, -176(1)
  00fddc4  mflr 0
  00fddc8  std 0, 192(1)
  00fddcc  stfd 31, 168(1)
  00fddd0  std 27, 128(1)
  00fddd4  sldi 27, 4, 2
  00fddd8  std 29, 144(1)
  00fdddc  lwz 7, 36(3)
  00fdde0  ori 29, 3, 0
  00fdde4  std 30, 152(1)
  00fdde8  lwz 8, 84(3)
  00fddec  ori 30, 4, 0
  00fddf0  addc 7, 7, 27
  00fddf4  srawi 9, 8, 31
  00fddf8  clrldi 7, 7, 32
  00fddfc  std 31, 160(1)
  00fde00  srwi 10, 9, 1
  00fde04  ori 31, 6, 0
  00fde08  xor 8, 10, 8
  00fde0c  lis 10, 15564
  00fde10  lwz 7, 72(7)
  00fde14  ori 10, 10, 52429
  00fde18  subc 8, 8, 9
  00fde1c  cmpw 8, 10
  00fde20  std 28, 136(1)
  00fde24  lbz 7, 16(7)
  00fde28  addic 28, 7, -1
  00fde2c  subc 7, 5, 7
  00fde30  subc 5, 5, 28
  00fde34  sradi 7, 7, 63
  00fde38  and 3, 7, 5
  00fde3c  std 26, 120(1)
  00fde40  addc 28, 28, 3
  00fde44  bt 1, 0xfde60
  00fde48  lwz 3, 96(29)
  00fde4c  cmpwi 3, 0
  00fde50  bf 2, 0xfde60
  00fde54  lwz 3, 100(29)
  00fde58  cmpwi 3, 0
  00fde5c  bt 2, 0xfded8
  00fde60  ori 3, 29, 0
  00fde64  bl 0xf0f9c
  00fde68  nop
  00fde6c  ori 26, 3, 0
  00fde70  cmpwi 26, 0
  00fde74  bt 0, 0xfded8
  00fde78  ori 3, 29, 0
  00fde7c  ori 4, 26, 768
  00fde80  bl 0xfa940
  00fde84  nop
  00fde88  lis 3, 163
  00fde8c  sldi 4, 26, 4
  00fde90  lfs 1, 240(29)
  00fde94  addic 3, 3, 17920
  00fde98  addc 3, 3, 4
  00fde9c  clrldi 3, 3, 32
  00fdea0  stfs 1, 0(3)
  00fdea4  lfs 1, 244(29)
  00fdea8  stfs 1, 4(3)
  00fdeac  lfs 1, 248(29)
  00fdeb0  stfs 1, 8(3)
  00fdeb4  lfs 1, 252(29)
  00fdeb8  stfs 1, 12(3)
  00fdebc  lbz 3, 82(29)
  00fdec0  cmpwi 3, 255
  00fdec4  bt 2, 0xfdecc
  00fdec8  stb 3, 165(29)
  00fdecc  li 3, 255
  00fded0  stb 3, 82(29)
  00fded4  stb 26, 80(29)
  00fded8  ori 3, 29, 0
  00fdedc  stb 28, 81(29)
  00fdee0  stb 30, 83(29)
  00fdee4  bl 0xef74c
  00fdee8  nop
  00fdeec  lis 3, 16
  00fdef0  lis 4, 16256
  00fdef4  addi 3, 3, -8776
  00fdef8  cmpwi 31, 0
  00fdefc  lfs 31, 0(3)
  00fdf00  stw 4, 88(29)
  00fdf04  lfs 1, 4(3)
  00fdf08  bt 2, 0xfdf1c
  00fdf0c  ori 3, 31, 0
  00fdf10  bl 0x502730
  00fdf14  nop
  00fdf18  fdivs 1, 31, 1
  00fdf1c  li 3, 0
  00fdf20  lbz 4, 112(29)
  00fdf24  lwz 5, 36(29)
  00fdf28  stfs 1, 92(29)
  00fdf2c  addc 5, 5, 27
  00fdf30  rlwimi 4, 3, 0, 30, 30
  00fdf34  stw 3, 84(29)
  00fdf38  clrldi 3, 5, 32
  00fdf3c  stb 4, 112(29)
  00fdf40  lwz 3, 72(3)
  00fdf44  lbz 3, 17(3)
  00fdf48  stb 3, 124(29)
  00fdf4c  ld 0, 192(1)
  00fdf50  mtlr 0
  00fdf54  lfd 31, 168(1)
  00fdf58  ld 26, 120(1)
  00fdf5c  ld 27, 128(1)
  00fdf60  ld 28, 136(1)
  00fdf64  ld 29, 144(1)
  00fdf68  ld 30, 152(1)
  00fdf6c  ld 31, 160(1)
  00fdf70  addi 1, 1, 176
  00fdf74  blr

MB_SetAnimationFrame:   # 0xfdf80, 0x1ec bytes
  00fdf80  stdu 1, -176(1)
  00fdf84  mflr 0
  00fdf88  std 0, 192(1)
  00fdf8c  stfd 31, 168(1)
  00fdf90  std 27, 128(1)
  00fdf94  lis 8, 15564
  00fdf98  std 28, 136(1)
  00fdf9c  ori 27, 3, 0
  00fdfa0  ori 28, 4, 0
  00fdfa4  lwz 3, 84(3)
  00fdfa8  std 29, 144(1)
  00fdfac  ori 4, 8, 52429
  00fdfb0  ori 29, 5, 0
  00fdfb4  std 31, 160(1)
  00fdfb8  srawi 8, 3, 31
  00fdfbc  ori 31, 7, 0
  00fdfc0  std 30, 152(1)
  00fdfc4  srwi 5, 8, 1
  00fdfc8  ori 30, 6, 0
  00fdfcc  xor 3, 5, 3
  00fdfd0  subc 3, 3, 8
  00fdfd4  std 26, 120(1)
  00fdfd8  cmpw 3, 4
  00fdfdc  bt 1, 0xfe004
  00fdfe0  lwz 3, 96(27)
  00fdfe4  cmpwi 3, 0
  00fdfe8  bf 2, 0xfe004
  00fdfec  lwz 3, 100(27)
  00fdff0  cmpwi 3, 0
  00fdff4  bf 2, 0xfe004
  00fdff8  rlwinm 3, 31, 0, 29, 29
  00fdffc  cmpwi 3, 0
  00fe000  bt 2, 0xfe0c8
  00fe004  ori 3, 27, 0
  00fe008  bl 0xf0f9c
  00fe00c  nop
  00fe010  ori 26, 3, 0
  00fe014  cmpwi 26, 0
  00fe018  bt 0, 0xfe0c8
  00fe01c  clrlwi 3, 31, 31
  00fe020  li 4, 0
  00fe024  ori 5, 26, 256
  00fe028  subc 3, 4, 3
  00fe02c  subc 4, 26, 5
  00fe030  cntlzw 3, 3
  00fe034  rlwinm 6, 31, 0, 30, 30
  00fe038  sldi 3, 3, 58
  00fe03c  li 7, 0
  00fe040  sradi 3, 3, 63
  00fe044  subc 6, 7, 6
  00fe048  and 3, 3, 4
  00fe04c  cntlzw 4, 6
  00fe050  addc 3, 5, 3
  00fe054  sldi 4, 4, 58
  00fe058  ori 5, 3, 512
  00fe05c  sradi 4, 4, 63
  00fe060  subc 6, 3, 5
  00fe064  ori 3, 27, 0
  00fe068  and 4, 4, 6
  00fe06c  addc 4, 5, 4
  00fe070  bl 0xfa940
  00fe074  nop
  00fe078  lis 3, 163
  00fe07c  sldi 4, 26, 4
  00fe080  lfs 1, 240(27)
  00fe084  addic 3, 3, 17920
  00fe088  addc 3, 3, 4
  00fe08c  clrldi 3, 3, 32
  00fe090  stfs 1, 0(3)
  00fe094  lfs 1, 244(27)
  00fe098  stfs 1, 4(3)
  00fe09c  lfs 1, 248(27)
  00fe0a0  stfs 1, 8(3)
  00fe0a4  lfs 1, 252(27)
  00fe0a8  stfs 1, 12(3)
  00fe0ac  lbz 31, 82(27)
  00fe0b0  cmpwi 31, 255
  00fe0b4  bt 2, 0xfe0bc
  00fe0b8  stb 31, 165(27)
  00fe0bc  li 3, 255
  00fe0c0  stb 3, 82(27)
  00fe0c4  stb 26, 80(27)
  00fe0c8  ori 3, 27, 0
  00fe0cc  stb 29, 81(27)
  00fe0d0  stb 28, 83(27)
  00fe0d4  bl 0xef74c
  00fe0d8  nop
  00fe0dc  lis 3, 16
  00fe0e0  lis 4, 16256
  00fe0e4  addi 3, 3, -8328
  00fe0e8  cmpwi 30, 0
  00fe0ec  lfs 31, 0(3)
  00fe0f0  stw 4, 88(27)
  00fe0f4  lfs 1, 4(3)
  00fe0f8  bt 2, 0xfe10c
  00fe0fc  ori 3, 30, 0
  00fe100  bl 0x502730
  00fe104  nop
  00fe108  fdivs 1, 31, 1
  00fe10c  lbz 5, 112(27)
  00fe110  sldi 4, 28, 2
  00fe114  lwz 6, 36(27)
  00fe118  li 3, 0
  00fe11c  stfs 1, 92(27)
  00fe120  addc 4, 6, 4
  00fe124  rlwimi 5, 3, 0, 30, 30
  00fe128  clrldi 4, 4, 32
  00fe12c  stb 5, 112(27)
  00fe130  stw 3, 84(27)
  00fe134  lwz 3, 72(4)
  00fe138  lbz 3, 17(3)
  00fe13c  stb 3, 124(27)
  00fe140  ld 0, 192(1)
  00fe144  mtlr 0
  00fe148  lfd 31, 168(1)
  00fe14c  ld 26, 120(1)
  00fe150  ld 27, 128(1)
  00fe154  ld 28, 136(1)
  00fe158  ld 29, 144(1)
  00fe15c  ld 30, 152(1)
  00fe160  ld 31, 160(1)
  00fe164  addi 1, 1, 176
  00fe168  blr

???_Unused_MB_GetBoneAngle:   # 0xfe178, 0x1d0 bytes
  00fe178  stdu 1, -224(1)
  00fe17c  mflr 0
  00fe180  std 0, 240(1)
  00fe184  lis 6, 16
  00fe188  std 31, 216(1)
  00fe18c  addic 5, 1, 112
  00fe190  addi 31, 6, -7828
  00fe194  bl 0xf1038
  00fe198  nop
  00fe19c  lwz 3, 112(1)
  00fe1a0  lwz 4, 116(1)
  00fe1a4  lfs 1, 112(1)
  00fe1a8  lfs 2, 116(1)
  00fe1ac  fabs 5, 1
  00fe1b0  fabs 6, 2
  00fe1b4  lfs 1, 0(31)
  00fe1b8  rlwinm 4, 4, 3, 29, 29
  00fe1bc  lis 5, 115
  00fe1c0  addic 5, 5, 22784
  00fe1c4  fsubs 2, 5, 6
  00fe1c8  stfs 2, 176(1)
  00fe1cc  lwz 6, 176(1)
  00fe1d0  lfs 2, 176(1)
  00fe1d4  rlwimi 4, 6, 2, 30, 30
  00fe1d8  fsub 4, 2, 1
  00fe1dc  fsub 7, 2, 1
  00fe1e0  rlwimi 4, 3, 4, 28, 28
  00fe1e4  ori 3, 5, 0
  00fe1e8  rlwimi 3, 4, 2, 26, 28
  00fe1ec  slwi 4, 4, 2
  00fe1f0  clrldi 3, 3, 32
  00fe1f4  fsel 4, 4, 5, 6
  00fe1f8  lfsx 3, 5, 4
  00fe1fc  lfs 2, 4(3)
  00fe200  fsel 5, 7, 6, 5
  00fe204  fcmpu 0, 4, 1
  00fe208  bt 1, 0xfe210
  00fe20c  b 0xfe334
  00fe210  fsubs 6, 5, 4
  00fe214  fadds 4, 5, 4
  00fe218  addic 6, 1, 16
  00fe21c  li 3, 2
  00fe220  addic 4, 6, 180
  00fe224  addic 5, 6, 164
  00fe228  mtctr 3
  00fe22c  fdivs 4, 6, 4
  00fe230  fmuls 6, 4, 4
  00fe234  stfs 4, 192(1)
  00fe238  stfs 4, 184(1)
  00fe23c  stfs 4, 188(1)
  00fe240  stfs 4, 180(1)
  00fe244  lfs 7, 192(1)
  00fe248  lfs 8, 184(1)
  00fe24c  lfs 9, 188(1)
  00fe250  fmuls 4, 6, 6
  00fe254  fmuls 8, 8, 6
  00fe258  fmuls 7, 7, 4
  00fe25c  fmuls 5, 4, 4
  00fe260  fmuls 4, 9, 4
  00fe264  stfs 8, 184(1)
  00fe268  fmuls 6, 7, 6
  00fe26c  stfs 4, 188(1)
  00fe270  stfs 6, 192(1)
  00fe274  lfs 4, 164(6)
  00fe278  fmuls 4, 4, 5
  00fe27c  stfs 4, 180(6)
  00fe280  lfs 4, 4(5)
  00fe284  addic 5, 5, 8
  00fe288  fmuls 4, 4, 5
  00fe28c  addic 6, 6, 8
  00fe290  stfs 4, 4(4)
  00fe294  addic 4, 4, 8
  00fe298  bdnz 0xfe274
  00fe29c  ori 7, 1, 0
  00fe2a0  li 4, 4
  00fe2a4  lis 6, 115
  00fe2a8  addic 5, 7, 180
  00fe2ac  mtctr 4
  00fe2b0  addic 6, 6, 22752
  00fe2b4  ori 4, 5, 0
  00fe2b8  lfs 4, 180(7)
  00fe2bc  lfs 5, 0(6)
  00fe2c0  fmuls 4, 4, 5
  00fe2c4  lfs 5, 4(6)
  00fe2c8  addic 6, 6, 8
  00fe2cc  stfs 4, 180(7)
  00fe2d0  lfs 4, 4(5)
  00fe2d4  addic 7, 7, 8
  00fe2d8  fmuls 4, 4, 5
  00fe2dc  stfs 4, 4(5)
  00fe2e0  addic 5, 5, 8
  00fe2e4  bdnz 0xfe2b8
  00fe2e8  ori 5, 3, 0
  00fe2ec  ori 3, 1, 0
  00fe2f0  mtctr 5
  00fe2f4  lfs 4, 180(3)
  00fe2f8  fadds 1, 1, 4
  00fe2fc  lfs 4, 4(4)
  00fe300  addic 3, 3, 16
  00fe304  lfs 5, 8(4)
  00fe308  lfs 6, 12(4)
  00fe30c  addic 4, 4, 16
  00fe310  fadds 1, 1, 4
  00fe314  fadds 1, 1, 5
  00fe318  fadds 1, 1, 6
  00fe31c  bdnz 0xfe2f4
  00fe320  lis 3, 16
  00fe324  addi 3, 3, -7828
  00fe328  lfs 4, 4(3)
  00fe32c  fadds 1, 1, 4
  00fe330  fmadds 1, 1, 3, 2
  00fe334  ld 0, 240(1)
  00fe338  mtlr 0
  00fe33c  ld 31, 216(1)
  00fe340  addi 1, 1, 224
  00fe344  blr

MB_EaseOutQuad:   # 0xfe350, 0x18 bytes
  00fe350  lis 3, 16
  00fe354  addi 3, 3, -7352
  00fe358  lfs 2, 0(3)
  00fe35c  fsubs 1, 2, 1
  00fe360  fnmsubs 1, 1, 1, 2
  00fe364  blr

MB_EaseInPow:   # 0xfe368, 0x2c bytes
  00fe368  ori 3, 4, 0
  00fe36c  fmr 2, 1
  00fe370  cmpwi 3, 1
  00fe374  bf 1, 0xfe38c
  00fe378  addic 3, 3, -1
  00fe37c  addic 3, 3, -1
  00fe380  fmuls 2, 2, 1
  00fe384  cmpwi 3, 0
  00fe388  bt 1, 0xfe37c
  00fe38c  fmr 1, 2
  00fe390  blr

MB_EaseOutPow:   # 0xfe398, 0x40 bytes
  00fe398  fmr 3, 1
  00fe39c  lis 3, 16
  00fe3a0  addi 5, 3, -7276
  00fe3a4  ori 3, 4, 0
  00fe3a8  cmpwi 3, 1
  00fe3ac  lfs 1, 0(5)
  00fe3b0  fsubs 3, 1, 3
  00fe3b4  fmr 2, 3
  00fe3b8  bf 1, 0xfe3d0
  00fe3bc  addic 3, 3, -1
  00fe3c0  addic 3, 3, -1
  00fe3c4  fmuls 2, 2, 3
  00fe3c8  cmpwi 3, 0
  00fe3cc  bt 1, 0xfe3c0
  00fe3d0  fsubs 1, 1, 2
  00fe3d4  blr

MB_EaseInQuadRange:   # 0xfe3d8, 0x10 bytes
  00fe3d8  fdivs 1, 1, 2
  00fe3dc  fmuls 1, 1, 1
  00fe3e0  fmuls 1, 1, 2
  00fe3e4  blr

MB_EaseOutQuadRange:   # 0xfe3f0, 0x20 bytes
  00fe3f0  fdivs 1, 1, 2
  00fe3f4  lis 3, 16
  00fe3f8  addi 3, 3, -7192
  00fe3fc  lfs 3, 0(3)
  00fe400  fsubs 1, 3, 1
  00fe404  fnmsubs 1, 1, 1, 3
  00fe408  fmuls 1, 2, 1
  00fe40c  blr

MB_EaseInPowRange:   # 0xfe410, 0x2c bytes
  00fe410  ori 3, 4, 0
  00fe414  fdivs 3, 1, 2
  00fe418  cmpwi 3, 1
  00fe41c  bf 1, 0xfe434
  00fe420  addic 3, 3, -1
  00fe424  addic 3, 3, -1
  00fe428  fmuls 3, 3, 1
  00fe42c  cmpwi 3, 0
  00fe430  bt 1, 0xfe424
  00fe434  fmuls 1, 2, 3
  00fe438  blr

MB_EaseOutPowRange:   # 0xfe440, 0x44 bytes
  00fe440  fdivs 4, 1, 2
  00fe444  lis 3, 16
  00fe448  addi 5, 3, -7108
  00fe44c  ori 3, 4, 0
  00fe450  cmpwi 3, 1
  00fe454  lfs 1, 0(5)
  00fe458  fsubs 4, 1, 4
  00fe45c  fmr 3, 4
  00fe460  bf 1, 0xfe478
  00fe464  addic 3, 3, -1
  00fe468  addic 3, 3, -1
  00fe46c  fmuls 3, 3, 4
  00fe470  cmpwi 3, 0
  00fe474  bt 1, 0xfe468
  00fe478  fsubs 1, 1, 3
  00fe47c  fmuls 1, 2, 1
  00fe480  blr

MB_randRange:   # 0xfe484, 0x64 bytes
  00fe484  stdu 1, -128(1)
  00fe488  mflr 0
  00fe48c  std 0, 144(1)
  00fe490  std 31, 120(1)
  00fe494  std 30, 112(1)
  00fe498  ori 31, 4, 0
  00fe49c  ori 30, 3, 0
  00fe4a0  bl 0x5c8318
  00fe4a4  nop
  00fe4a8  srawi 3, 3, 15
  00fe4ac  subc 4, 31, 30
  00fe4b0  clrlwi 3, 3, 17
  00fe4b4  addic 5, 4, 1
  00fe4b8  divw 5, 3, 5
  00fe4bc  mullw 4, 5, 4
  00fe4c0  addc 4, 4, 5
  00fe4c4  subc 3, 3, 4
  00fe4c8  addc 3, 3, 30
  00fe4cc  extsw 3, 3
  00fe4d0  ld 0, 144(1)
  00fe4d4  mtlr 0
  00fe4d8  ld 30, 112(1)
  00fe4dc  ld 31, 120(1)
  00fe4e0  addi 1, 1, 128
  00fe4e4  blr

MB_randRangeSigned:   # 0xfe4f0, 0x88 bytes
  00fe4f0  stdu 1, -160(1)
  00fe4f4  mflr 0
  00fe4f8  std 0, 176(1)
  00fe4fc  stfd 30, 144(1)
  00fe500  stfd 31, 152(1)
  00fe504  lis 3, 16
  00fe508  std 31, 136(1)
  00fe50c  fmr 30, 2
  00fe510  addi 31, 3, -6936
  00fe514  fmr 31, 1
  00fe518  bl 0x5c8318
  00fe51c  nop
  00fe520  srawi 4, 3, 15
  00fe524  fsubs 3, 30, 31
  00fe528  clrlwi 4, 4, 20
  00fe52c  extsw 4, 4
  00fe530  rlwinm 3, 3, 17, 31, 31
  00fe534  std 4, 112(1)
  00fe538  lfs 2, 0(31)
  00fe53c  lfd 1, 112(1)
  00fe540  cmpwi 3, 0
  00fe544  fcfid 1, 1
  00fe548  frsp 1, 1
  00fe54c  fmuls 3, 1, 3
  00fe550  fmadds 1, 3, 2, 31
  00fe554  bt 2, 0xfe55c
  00fe558  fnmadds 1, 3, 2, 31
  00fe55c  ld 0, 176(1)
  00fe560  mtlr 0
  00fe564  lfd 30, 144(1)
  00fe568  lfd 31, 152(1)
  00fe56c  ld 31, 136(1)
  00fe570  addi 1, 1, 160
  00fe574  blr

MB_randFalloff:   # 0xfe580, 0x70 bytes
  00fe580  stdu 1, -144(1)
  00fe584  mflr 0
  00fe588  std 0, 160(1)
  00fe58c  stfd 31, 136(1)
  00fe590  lis 3, 16
  00fe594  std 31, 128(1)
  00fe598  fmr 31, 1
  00fe59c  addi 31, 3, -6792
  00fe5a0  bl 0x5c8318
  00fe5a4  nop
  00fe5a8  srawi 3, 3, 15
  00fe5ac  clrlwi 3, 3, 20
  00fe5b0  extsw 3, 3
  00fe5b4  std 3, 112(1)
  00fe5b8  lfs 1, 0(31)
  00fe5bc  lfs 2, 4(31)
  00fe5c0  lfd 3, 112(1)
  00fe5c4  fcfid 3, 3
  00fe5c8  frsp 3, 3
  00fe5cc  fmuls 1, 3, 1
  00fe5d0  fnmsubs 1, 1, 1, 2
  00fe5d4  fmuls 1, 31, 1
  00fe5d8  ld 0, 160(1)
  00fe5dc  mtlr 0
  00fe5e0  lfd 31, 136(1)
  00fe5e4  ld 31, 128(1)
  00fe5e8  addi 1, 1, 144
  00fe5ec  blr

MB_SphericalToVector:   # 0xfe610, 0x16c bytes
  00fe610  stdu 1, -80(1)
  00fe614  stfd 28, 48(1)
  00fe618  stfd 29, 56(1)
  00fe61c  stfd 30, 64(1)
  00fe620  stfd 31, 72(1)
  00fe624  lis 4, 16
  00fe628  addi 4, 4, -6672
  00fe62c  lfs 4, 0(4)
  00fe630  lfs 5, 4(4)
  00fe634  fadds 7, 3, 4
  00fe638  lfs 6, 8(4)
  00fe63c  fadds 4, 2, 4
  00fe640  fsubs 8, 5, 2
  00fe644  fsubs 0, 6, 2
  00fe648  fsubs 9, 5, 7
  00fe64c  fsubs 10, 5, 4
  00fe650  fsub 13, 2, 8
  00fe654  fsubs 5, 5, 3
  00fe658  fsubs 11, 6, 7
  00fe65c  fsubs 12, 6, 4
  00fe660  fsub 31, 7, 9
  00fe664  fsub 30, 4, 10
  00fe668  fsel 2, 13, 8, 2
  00fe66c  lfs 8, 12(4)
  00fe670  fsel 7, 31, 9, 7
  00fe674  fsel 4, 30, 10, 4
  00fe678  fsub 9, 3, 5
  00fe67c  fsub 10, 0, 2
  00fe680  lfs 30, 16(4)
  00fe684  fsub 13, 11, 7
  00fe688  fsub 31, 12, 4
  00fe68c  fsel 5, 9, 5, 3
  00fe690  fsubs 3, 6, 3
  00fe694  fsel 2, 10, 0, 2
  00fe698  lfs 9, 20(4)
  00fe69c  fmr 6, 30
  00fe6a0  fsel 7, 13, 11, 7
  00fe6a4  fsel 4, 31, 12, 4
  00fe6a8  fsub 10, 3, 5
  00fe6ac  fmuls 11, 2, 2
  00fe6b0  fmuls 12, 7, 7
  00fe6b4  fmuls 13, 4, 4
  00fe6b8  fsel 3, 10, 3, 5
  00fe6bc  fmuls 5, 11, 2
  00fe6c0  lfs 10, 24(4)
  00fe6c4  fmuls 0, 12, 7
  00fe6c8  fmuls 31, 13, 4
  00fe6cc  fmuls 30, 3, 3
  00fe6d0  fmuls 29, 11, 5
  00fe6d4  fmadds 2, 5, 8, 2
  00fe6d8  fmuls 5, 12, 0
  00fe6dc  fmadds 7, 0, 8, 7
  00fe6e0  fmuls 0, 13, 31
  00fe6e4  fmadds 4, 31, 8, 4
  00fe6e8  fmuls 28, 30, 3
  00fe6ec  fmuls 31, 11, 29
  00fe6f0  fmadds 2, 29, 6, 2
  00fe6f4  fmuls 29, 12, 5
  00fe6f8  fmadds 5, 5, 6, 7
  00fe6fc  fmuls 7, 13, 0
  00fe700  fmadds 4, 0, 6, 4
  00fe704  fmuls 0, 30, 28
  00fe708  fmadds 3, 28, 8, 3
  00fe70c  fmuls 11, 11, 31
  00fe710  fmadds 2, 31, 9, 2
  00fe714  fmuls 12, 12, 29
  00fe718  fmadds 5, 29, 9, 5
  00fe71c  fmuls 13, 13, 7
  00fe720  fmadds 4, 7, 9, 4
  00fe724  fmuls 7, 30, 0
  00fe728  fmadds 3, 0, 6, 3
  00fe72c  fmadds 2, 11, 10, 2
  00fe730  fmadds 5, 12, 10, 5
  00fe734  fmadds 4, 13, 10, 4
  00fe738  fmuls 6, 30, 7
  00fe73c  fmadds 3, 7, 9, 3
  00fe740  fmuls 2, 2, 1
  00fe744  fmuls 4, 4, 1
  00fe748  fmadds 3, 6, 10, 3
  00fe74c  fmuls 2, 2, 5
  00fe750  fmuls 4, 4, 5
  00fe754  fmuls 1, 3, 1
  00fe758  stfs 2, 4(3)
  00fe75c  stfs 4, 0(3)
  00fe760  stfs 1, 8(3)
  00fe764  lfd 28, 48(1)
  00fe768  lfd 29, 56(1)
  00fe76c  lfd 30, 64(1)
  00fe770  lfd 31, 72(1)
  00fe774  addi 1, 1, 80
  00fe778  blr

MB_randVector:   # 0xfe788, 0x114 bytes
  00fe788  stdu 1, -192(1)
  00fe78c  mflr 0
  00fe790  std 0, 208(1)
  00fe794  stfd 27, 152(1)
  00fe798  stfd 28, 160(1)
  00fe79c  stfd 29, 168(1)
  00fe7a0  stfd 30, 176(1)
  00fe7a4  stfd 31, 184(1)
  00fe7a8  std 31, 144(1)
  00fe7ac  lis 4, 16
  00fe7b0  ori 31, 3, 0
  00fe7b4  fmr 31, 2
  00fe7b8  std 30, 136(1)
  00fe7bc  fmr 30, 1
  00fe7c0  addi 30, 4, -6276
  00fe7c4  bl 0x5c8318
  00fe7c8  nop
  00fe7cc  srawi 3, 3, 15
  00fe7d0  clrlwi 3, 3, 20
  00fe7d4  addic 3, 3, -2048
  00fe7d8  extsw 3, 3
  00fe7dc  std 3, 112(1)
  00fe7e0  lfs 29, 0(30)
  00fe7e4  lfs 28, 4(30)
  00fe7e8  lfd 1, 112(1)
  00fe7ec  fcfid 1, 1
  00fe7f0  frsp 1, 1
  00fe7f4  fmuls 1, 1, 29
  00fe7f8  fmuls 27, 1, 28
  00fe7fc  bl 0x5c8318
  00fe800  nop
  00fe804  srawi 3, 3, 15
  00fe808  clrlwi 3, 3, 20
  00fe80c  addic 3, 3, -2048
  00fe810  extsw 3, 3
  00fe814  std 3, 112(1)
  00fe818  lfd 1, 112(1)
  00fe81c  fcfid 1, 1
  00fe820  frsp 1, 1
  00fe824  fmuls 1, 1, 29
  00fe828  fmuls 29, 1, 28
  00fe82c  bl 0x5c8318
  00fe830  nop
  00fe834  srawi 3, 3, 15
  00fe838  fsubs 1, 31, 30
  00fe83c  clrlwi 3, 3, 17
  00fe840  fmr 2, 27
  00fe844  extsw 3, 3
  00fe848  fmr 3, 29
  00fe84c  std 3, 112(1)
  00fe850  lfs 4, 8(30)
  00fe854  lfd 5, 112(1)
  00fe858  ori 3, 31, 0
  00fe85c  fcfid 5, 5
  00fe860  frsp 5, 5
  00fe864  fmuls 1, 5, 1
  00fe868  fmadds 1, 1, 4, 30
  00fe86c  bl 0xfe610
  00fe870  ld 0, 208(1)
  00fe874  mtlr 0
  00fe878  lfd 27, 152(1)
  00fe87c  lfd 28, 160(1)
  00fe880  lfd 29, 168(1)
  00fe884  lfd 30, 176(1)
  00fe888  lfd 31, 184(1)
  00fe88c  ld 30, 136(1)
  00fe890  ld 31, 144(1)
  00fe894  addi 1, 1, 192
  00fe898  blr

MB_randCircle:   # 0xfe8c8, 0x170 bytes
  00fe8c8  stdu 1, -160(1)
  00fe8cc  mflr 0
  00fe8d0  std 0, 176(1)
  00fe8d4  stfd 30, 144(1)
  00fe8d8  stfd 31, 152(1)
  00fe8dc  std 31, 136(1)
  00fe8e0  lis 4, 16
  00fe8e4  ori 31, 3, 0
  00fe8e8  std 30, 128(1)
  00fe8ec  fmr 31, 1
  00fe8f0  addi 30, 4, -5988
  00fe8f4  bl 0x5c8318
  00fe8f8  nop
  00fe8fc  srawi 3, 3, 15
  00fe900  clrlwi 3, 3, 20
  00fe904  addic 3, 3, -2048
  00fe908  extsw 3, 3
  00fe90c  std 3, 112(1)
  00fe910  lfs 1, 0(30)
  00fe914  lfs 2, 4(30)
  00fe918  lfd 3, 112(1)
  00fe91c  fcfid 3, 3
  00fe920  frsp 3, 3
  00fe924  fmuls 1, 3, 1
  00fe928  fmuls 30, 1, 2
  00fe92c  bl 0x5c8318
  00fe930  nop
  00fe934  srawi 3, 3, 15
  00fe938  clrlwi 3, 3, 20
  00fe93c  extsw 3, 3
  00fe940  std 3, 112(1)
  00fe944  li 3, 0
  00fe948  lfs 1, 8(30)
  00fe94c  lfs 2, 12(30)
  00fe950  lfd 3, 112(1)
  00fe954  stw 3, 12(31)
  00fe958  stw 3, 8(31)
  00fe95c  lfs 4, 16(30)
  00fe960  lfs 5, 20(30)
  00fe964  fadds 4, 30, 4
  00fe968  fsubs 7, 5, 30
  00fe96c  lfs 6, 24(30)
  00fe970  fcfid 3, 3
  00fe974  fsubs 5, 5, 4
  00fe978  fsub 9, 30, 7
  00fe97c  fsubs 8, 6, 4
  00fe980  fsubs 6, 6, 30
  00fe984  frsp 3, 3
  00fe988  fsub 10, 4, 5
  00fe98c  fsel 7, 9, 7, 30
  00fe990  lfs 9, 28(30)
  00fe994  fmuls 1, 3, 1
  00fe998  lfs 3, 32(30)
  00fe99c  fsel 4, 10, 5, 4
  00fe9a0  fsub 5, 6, 7
  00fe9a4  fnmsubs 1, 1, 1, 2
  00fe9a8  lfs 2, 36(30)
  00fe9ac  fsub 10, 8, 4
  00fe9b0  fsel 5, 5, 6, 7
  00fe9b4  fmuls 1, 31, 1
  00fe9b8  fsel 4, 10, 8, 4
  00fe9bc  fmuls 6, 5, 5
  00fe9c0  fmuls 7, 4, 4
  00fe9c4  fmuls 8, 6, 5
  00fe9c8  fmuls 10, 7, 4
  00fe9cc  fmuls 12, 6, 8
  00fe9d0  fmadds 5, 8, 9, 5
  00fe9d4  lfs 8, 40(30)
  00fe9d8  fmuls 11, 7, 10
  00fe9dc  fmadds 4, 10, 9, 4
  00fe9e0  fmuls 9, 6, 12
  00fe9e4  fmadds 5, 12, 3, 5
  00fe9e8  fmuls 10, 7, 11
  00fe9ec  fmadds 3, 11, 3, 4
  00fe9f0  fmuls 4, 6, 9
  00fe9f4  fmadds 5, 9, 2, 5
  00fe9f8  fmuls 6, 7, 10
  00fe9fc  fmadds 2, 10, 2, 3
  00fea00  fmadds 3, 4, 8, 5
  00fea04  fmadds 2, 6, 8, 2
  00fea08  fmuls 3, 3, 1
  00fea0c  fmuls 1, 2, 1
  00fea10  stfs 3, 4(31)
  00fea14  stfs 1, 0(31)
  00fea18  ld 0, 176(1)
  00fea1c  mtlr 0
  00fea20  lfd 30, 144(1)
  00fea24  lfd 31, 152(1)
  00fea28  ld 30, 128(1)
  00fea2c  ld 31, 136(1)
  00fea30  addi 1, 1, 160
  00fea34  blr

MB_randSphere:   # 0xfea60, 0x234 bytes
  00fea60  stdu 1, -176(1)
  00fea64  mflr 0
  00fea68  std 0, 192(1)
  00fea6c  stfd 28, 144(1)
  00fea70  stfd 29, 152(1)
  00fea74  stfd 30, 160(1)
  00fea78  stfd 31, 168(1)
  00fea7c  std 31, 136(1)
  00fea80  lis 4, 16
  00fea84  ori 31, 3, 0
  00fea88  fmr 31, 2
  00fea8c  std 30, 128(1)
  00fea90  fmr 30, 1
  00fea94  addi 30, 4, -5576
  00fea98  bl 0x5c8318
  00fea9c  nop
  00feaa0  srawi 3, 3, 15
  00feaa4  fsubs 1, 31, 30
  00feaa8  clrlwi 3, 3, 17
  00feaac  extsw 3, 3
  00feab0  std 3, 112(1)
  00feab4  lfs 2, 0(30)
  00feab8  lfd 3, 112(1)
  00feabc  fcfid 3, 3
  00feac0  frsp 3, 3
  00feac4  fmuls 1, 3, 1
  00feac8  fmadds 31, 1, 2, 30
  00feacc  bl 0x5c8318
  00fead0  nop
  00fead4  srawi 3, 3, 15
  00fead8  clrlwi 3, 3, 20
  00feadc  addic 3, 3, -2048
  00feae0  extsw 3, 3
  00feae4  std 3, 112(1)
  00feae8  lfs 30, 4(30)
  00feaec  lfs 29, 8(30)
  00feaf0  lfd 1, 112(1)
  00feaf4  fcfid 1, 1
  00feaf8  frsp 1, 1
  00feafc  fmuls 1, 1, 30
  00feb00  fmuls 28, 1, 29
  00feb04  bl 0x5c8318
  00feb08  nop
  00feb0c  srawi 3, 3, 15
  00feb10  clrlwi 3, 3, 20
  00feb14  addic 3, 3, -2048
  00feb18  extsw 3, 3
  00feb1c  std 3, 112(1)
  00feb20  lfs 1, 12(30)
  00feb24  lfs 2, 16(30)
  00feb28  lfs 3, 20(30)
  00feb2c  fadds 4, 28, 1
  00feb30  lfd 5, 112(1)
  00feb34  fcfid 5, 5
  00feb38  fsubs 10, 3, 28
  00feb3c  fsubs 6, 2, 4
  00feb40  fsubs 8, 3, 4
  00feb44  frsp 5, 5
  00feb48  fsub 7, 4, 6
  00feb4c  fmuls 5, 5, 30
  00feb50  fsel 4, 7, 6, 4
  00feb54  fsubs 6, 2, 28
  00feb58  fmuls 5, 5, 29
  00feb5c  fsub 7, 8, 4
  00feb60  fsub 9, 28, 6
  00feb64  fsubs 11, 2, 5
  00feb68  fadds 1, 5, 1
  00feb6c  fsubs 12, 3, 5
  00feb70  fsel 4, 7, 8, 4
  00feb74  fsel 6, 9, 6, 28
  00feb78  lfs 9, 24(30)
  00feb7c  fsub 7, 5, 11
  00feb80  fsubs 2, 2, 1
  00feb84  lfs 0, 28(30)
  00feb88  fsubs 3, 3, 1
  00feb8c  fmuls 8, 4, 4
  00feb90  fsub 13, 10, 6
  00feb94  fsel 5, 7, 11, 5
  00feb98  fsub 7, 1, 2
  00feb9c  fmuls 11, 8, 4
  00feba0  fsel 6, 13, 10, 6
  00feba4  fsub 10, 12, 5
  00feba8  fsel 1, 7, 2, 1
  00febac  fmr 7, 0
  00febb0  fmuls 2, 8, 11
  00febb4  fmadds 4, 11, 9, 4
  00febb8  fmuls 11, 6, 6
  00febbc  fsel 5, 10, 12, 5
  00febc0  fsub 12, 3, 1
  00febc4  lfs 10, 32(30)
  00febc8  fmuls 13, 8, 2
  00febcc  fmadds 2, 2, 7, 4
  00febd0  fmuls 4, 11, 6
  00febd4  fmuls 0, 5, 5
  00febd8  fsel 1, 12, 3, 1
  00febdc  lfs 3, 36(30)
  00febe0  fmuls 8, 8, 13
  00febe4  fmadds 2, 13, 10, 2
  00febe8  fmuls 12, 11, 4
  00febec  fmuls 13, 0, 5
  00febf0  fmadds 4, 4, 9, 6
  00febf4  fmuls 6, 1, 1
  00febf8  fmadds 2, 8, 3, 2
  00febfc  fmuls 8, 11, 12
  00fec00  fmuls 30, 0, 13
  00fec04  fmadds 5, 13, 9, 5
  00fec08  fmuls 13, 6, 1
  00fec0c  fmadds 4, 12, 7, 4
  00fec10  fmuls 11, 11, 8
  00fec14  fmuls 12, 0, 30
  00fec18  fmadds 5, 30, 7, 5
  00fec1c  fmuls 30, 6, 13
  00fec20  fmadds 1, 13, 9, 1
  00fec24  fmadds 4, 8, 10, 4
  00fec28  fmuls 8, 0, 12
  00fec2c  fmadds 5, 12, 10, 5
  00fec30  fmuls 9, 6, 30
  00fec34  fmadds 1, 30, 7, 1
  00fec38  fmadds 4, 11, 3, 4
  00fec3c  fmadds 5, 8, 3, 5
  00fec40  fmuls 6, 6, 9
  00fec44  fmadds 1, 9, 10, 1
  00fec48  fmuls 2, 2, 5
  00fec4c  fmuls 4, 4, 5
  00fec50  fmadds 1, 6, 3, 1
  00fec54  fmuls 2, 2, 31
  00fec58  fmuls 3, 4, 31
  00fec5c  fmuls 1, 1, 31
  00fec60  stfs 2, 0(31)
  00fec64  stfs 3, 4(31)
  00fec68  stfs 1, 8(31)
  00fec6c  ld 0, 192(1)
  00fec70  mtlr 0
  00fec74  lfd 28, 144(1)
  00fec78  lfd 29, 152(1)
  00fec7c  lfd 30, 160(1)
  00fec80  lfd 31, 168(1)
  00fec84  ld 30, 128(1)
  00fec88  ld 31, 136(1)
  00fec8c  addi 1, 1, 176
  00fec90  blr

MB_catmullRom:   # 0xfec94, 0x2c bytes
  00fec94  fsubs 4, 4, 3
  00fec98  fsubs 6, 1, 2
  00fec9c  fmuls 7, 5, 5
  00feca0  fsubs 1, 3, 1
  00feca4  fsubs 3, 4, 6
  00feca8  fmuls 4, 7, 5
  00fecac  fmadds 2, 4, 3, 2
  00fecb0  fsubs 3, 6, 3
  00fecb4  fmadds 1, 1, 5, 2
  00fecb8  fmadds 1, 7, 3, 1
  00fecbc  blr

MB_CosineInterpolate:   # 0xfecf0, 0xb4 bytes
  00fecf0  lis 3, 16
  00fecf4  addi 3, 3, -4928
  00fecf8  lfs 4, 0(3)
  00fecfc  fcmpu 0, 3, 4
  00fed00  bf 2, 0xfed08
  00fed04  b 0xfeda0
  00fed08  lis 3, 16
  00fed0c  addi 3, 3, -4928
  00fed10  lfs 4, 4(3)
  00fed14  fcmpu 0, 3, 4
  00fed18  bf 2, 0xfed24
  00fed1c  fmr 1, 2
  00fed20  b 0xfeda0
  00fed24  lis 3, 16
  00fed28  addi 3, 3, -4928
  00fed2c  lfs 5, 8(3)
  00fed30  lfs 6, 12(3)
  00fed34  lfs 7, 16(3)
  00fed38  fmadds 3, 3, 5, 6
  00fed3c  lfs 8, 20(3)
  00fed40  fsubs 2, 2, 1
  00fed44  fsubs 5, 7, 3
  00fed48  fsubs 6, 8, 3
  00fed4c  lfs 7, 24(3)
  00fed50  fsub 8, 3, 5
  00fed54  fsel 3, 8, 5, 3
  00fed58  lfs 5, 28(3)
  00fed5c  fsub 8, 6, 3
  00fed60  fsel 3, 8, 6, 3
  00fed64  lfs 6, 32(3)
  00fed68  lfs 8, 36(3)
  00fed6c  lfs 11, 40(3)
  00fed70  fmuls 9, 3, 3
  00fed74  fmuls 10, 9, 3
  00fed78  fmuls 12, 9, 10
  00fed7c  fmadds 3, 10, 7, 3
  00fed80  fmuls 7, 9, 12
  00fed84  fmadds 3, 12, 5, 3
  00fed88  fmuls 5, 9, 7
  00fed8c  fmadds 3, 7, 6, 3
  00fed90  fmadds 3, 5, 8, 3
  00fed94  fsubs 3, 4, 3
  00fed98  fmuls 3, 3, 11
  00fed9c  fmadds 1, 2, 3, 1
  00feda0  blr

MB_lerpRotCosine:   # 0xfedd0, 0xd8 bytes
  00fedd0  stdu 1, -144(1)
  00fedd4  mflr 0
  00fedd8  std 0, 160(1)
  00feddc  stfd 30, 128(1)
  00fede0  stfd 31, 136(1)
  00fede4  fmr 31, 1
  00fede8  lis 3, 16
  00fedec  fmr 30, 3
  00fedf0  std 31, 120(1)
  00fedf4  fmr 1, 2
  00fedf8  addi 31, 3, -4700
  00fedfc  fmr 2, 31
  00fee00  bl 0x5025e0
  00fee04  nop
  00fee08  lfs 2, 0(31)
  00fee0c  lfs 3, 4(31)
  00fee10  lfs 4, 8(31)
  00fee14  fmadds 2, 30, 2, 3
  00fee18  lfs 5, 12(31)
  00fee1c  lfs 6, 16(31)
  00fee20  fsubs 3, 4, 2
  00fee24  fsubs 4, 5, 2
  00fee28  fsub 5, 2, 3
  00fee2c  fsel 2, 5, 3, 2
  00fee30  lfs 3, 20(31)
  00fee34  fsub 5, 4, 2
  00fee38  fsel 2, 5, 4, 2
  00fee3c  lfs 4, 24(31)
  00fee40  lfs 5, 28(31)
  00fee44  lfs 8, 32(31)
  00fee48  lfs 10, 36(31)
  00fee4c  fmuls 7, 2, 2
  00fee50  fmuls 9, 7, 2
  00fee54  fmadds 2, 9, 6, 2
  00fee58  fmuls 11, 7, 9
  00fee5c  fmr 6, 10
  00fee60  fmuls 9, 7, 11
  00fee64  fmadds 2, 11, 3, 2
  00fee68  fmuls 3, 7, 9
  00fee6c  fmadds 2, 9, 4, 2
  00fee70  fmadds 2, 3, 5, 2
  00fee74  fsubs 2, 8, 2
  00fee78  fmuls 2, 2, 6
  00fee7c  fmuls 2, 2, 1
  00fee80  fmr 1, 31
  00fee84  bl 0x502578
  00fee88  nop
  00fee8c  ld 0, 160(1)
  00fee90  mtlr 0
  00fee94  lfd 30, 128(1)
  00fee98  lfd 31, 136(1)
  00fee9c  ld 31, 120(1)
  00feea0  addi 1, 1, 144
  00feea4  blr

MB_CosineInterpolateUnitVec:   # 0xfeed8, 0x12c bytes
  00feed8  lis 6, 16
  00feedc  addi 6, 6, -4440
  00feee0  lfs 2, 0(6)
  00feee4  fcmpu 0, 1, 2
  00feee8  bf 2, 0xfef10
  00feeec  lfs 1, 0(4)
  00feef0  stfs 1, 0(3)
  00feef4  lfs 1, 4(4)
  00feef8  stfs 1, 4(3)
  00feefc  lfs 1, 8(4)
  00fef00  stfs 1, 8(3)
  00fef04  lfs 1, 12(4)
  00fef08  stfs 1, 12(3)
  00fef0c  b 0xff000
  00fef10  lis 6, 16
  00fef14  addi 6, 6, -4440
  00fef18  lfs 2, 4(6)
  00fef1c  fcmpu 0, 1, 2
  00fef20  bf 2, 0xfef48
  00fef24  lfs 1, 0(5)
  00fef28  stfs 1, 0(3)
  00fef2c  lfs 1, 4(5)
  00fef30  stfs 1, 4(3)
  00fef34  lfs 1, 8(5)
  00fef38  stfs 1, 8(3)
  00fef3c  lfs 1, 12(5)
  00fef40  stfs 1, 12(3)
  00fef44  b 0xff000
  00fef48  lis 6, 16
  00fef4c  addi 6, 6, -4440
  00fef50  lfs 3, 8(6)
  00fef54  lfs 4, 12(6)
  00fef58  lfs 5, 16(6)
  00fef5c  fmadds 1, 1, 3, 4
  00fef60  lfs 6, 20(6)
  00fef64  fsubs 3, 5, 1
  00fef68  fsubs 4, 6, 1
  00fef6c  lfs 5, 24(6)
  00fef70  fsub 6, 1, 3
  00fef74  fsel 1, 6, 3, 1
  00fef78  lfs 3, 28(6)
  00fef7c  fsub 6, 4, 1
  00fef80  fsel 1, 6, 4, 1
  00fef84  lfs 4, 32(6)
  00fef88  lfs 6, 36(6)
  00fef8c  lfs 9, 40(6)
  00fef90  fmuls 7, 1, 1
  00fef94  fmuls 8, 7, 1
  00fef98  fmuls 10, 7, 8
  00fef9c  fmadds 1, 8, 5, 1
  00fefa0  lfs 5, 0(5)
  00fefa4  lfs 8, 0(4)
  00fefa8  fsubs 5, 5, 8
  00fefac  fmuls 11, 7, 10
  00fefb0  fmadds 1, 10, 3, 1
  00fefb4  lfs 3, 4(5)
  00fefb8  lfs 10, 4(4)
  00fefbc  lfs 12, 8(5)
  00fefc0  fsubs 3, 3, 10
  00fefc4  fmuls 7, 7, 11
  00fefc8  fmadds 1, 11, 4, 1
  00fefcc  lfs 4, 8(4)
  00fefd0  fsubs 11, 12, 4
  00fefd4  fmadds 1, 7, 6, 1
  00fefd8  lfs 6, 12(4)
  00fefdc  stfs 6, 12(3)
  00fefe0  fsubs 1, 2, 1
  00fefe4  fmuls 1, 1, 9
  00fefe8  fmadds 2, 1, 5, 8
  00fefec  fmadds 3, 1, 3, 10
  00feff0  fmadds 1, 1, 11, 4
  00feff4  stfs 2, 0(3)
  00feff8  stfs 3, 4(3)
  00feffc  stfs 1, 8(3)
  00ff000  blr

MB_CosineInterpolateAngVec:   # 0xff030, 0x150 bytes
  00ff030  stdu 1, -144(1)
  00ff034  mflr 0
  00ff038  std 0, 160(1)
  00ff03c  stfd 31, 136(1)
  00ff040  lis 6, 16
  00ff044  addi 6, 6, -4092
  00ff048  lfs 2, 0(6)
  00ff04c  lfs 3, 4(6)
  00ff050  lfs 4, 8(6)
  00ff054  fmadds 1, 1, 2, 3
  00ff058  std 31, 128(1)
  00ff05c  lfs 5, 12(6)
  00ff060  std 30, 120(1)
  00ff064  ori 31, 5, 0
  00ff068  std 29, 112(1)
  00ff06c  ori 30, 4, 0
  00ff070  ori 29, 3, 0
  00ff074  fsubs 2, 4, 1
  00ff078  fsubs 3, 5, 1
  00ff07c  lfs 5, 16(6)
  00ff080  fsub 4, 1, 2
  00ff084  fsel 1, 4, 2, 1
  00ff088  lfs 2, 20(6)
  00ff08c  fsub 4, 3, 1
  00ff090  fsel 1, 4, 3, 1
  00ff094  lfs 3, 24(6)
  00ff098  lfs 4, 28(6)
  00ff09c  lfs 7, 32(6)
  00ff0a0  lfs 9, 0(31)
  00ff0a4  fmuls 6, 1, 1
  00ff0a8  fmuls 8, 6, 1
  00ff0ac  fmuls 11, 6, 8
  00ff0b0  fmadds 1, 8, 5, 1
  00ff0b4  lfs 8, 36(6)
  00ff0b8  lfs 5, 0(30)
  00ff0bc  fmuls 10, 6, 11
  00ff0c0  fmadds 2, 11, 2, 1
  00ff0c4  fmr 1, 9
  00ff0c8  fmuls 6, 6, 10
  00ff0cc  fmadds 3, 10, 3, 2
  00ff0d0  fmr 2, 5
  00ff0d4  fmadds 3, 6, 4, 3
  00ff0d8  fsubs 3, 7, 3
  00ff0dc  fmuls 31, 3, 8
  00ff0e0  bl 0x5025e0
  00ff0e4  nop
  00ff0e8  lfs 3, 0(30)
  00ff0ec  fmuls 2, 1, 31
  00ff0f0  fmr 1, 3
  00ff0f4  bl 0x502578
  00ff0f8  nop
  00ff0fc  lfs 2, 4(31)
  00ff100  stfs 1, 0(29)
  00ff104  fmr 1, 2
  00ff108  lfs 3, 4(30)
  00ff10c  fmr 2, 3
  00ff110  bl 0x5025e0
  00ff114  nop
  00ff118  lfs 3, 4(30)
  00ff11c  fmuls 2, 1, 31
  00ff120  fmr 1, 3
  00ff124  bl 0x502578
  00ff128  nop
  00ff12c  lfs 2, 8(31)
  00ff130  stfs 1, 4(29)
  00ff134  fmr 1, 2
  00ff138  lfs 3, 8(30)
  00ff13c  fmr 2, 3
  00ff140  bl 0x5025e0
  00ff144  nop
  00ff148  lfs 3, 8(30)
  00ff14c  fmuls 2, 1, 31
  00ff150  fmr 1, 3
  00ff154  bl 0x502578
  00ff158  nop
  00ff15c  stfs 1, 8(29)
  00ff160  ld 0, 160(1)
  00ff164  mtlr 0
  00ff168  lfd 31, 136(1)
  00ff16c  ld 29, 112(1)
  00ff170  ld 30, 120(1)
  00ff174  ld 31, 128(1)
  00ff178  addi 1, 1, 144
  00ff17c  blr

MB_DeltAngSpeed:   # 0xff190, 0x148 bytes
  00ff190  stdu 1, -160(1)
  00ff194  mflr 0
  00ff198  std 0, 176(1)
  00ff19c  stfd 28, 128(1)
  00ff1a0  stfd 29, 136(1)
  00ff1a4  stfd 30, 144(1)
  00ff1a8  stfd 31, 152(1)
  00ff1ac  fmr 31, 1
  00ff1b0  fmr 1, 2
  00ff1b4  lis 3, 16
  00ff1b8  std 31, 120(1)
  00ff1bc  fmr 28, 3
  00ff1c0  std 30, 112(1)
  00ff1c4  ori 31, 5, 0
  00ff1c8  addi 30, 3, -3712
  00ff1cc  fmr 30, 5
  00ff1d0  fmr 29, 4
  00ff1d4  fmr 2, 31
  00ff1d8  bl 0x5025e0
  00ff1dc  nop
  00ff1e0  lfs 3, 0(30)
  00ff1e4  lfs 4, 4(30)
  00ff1e8  fmuls 3, 1, 3
  00ff1ec  lfs 2, 0(31)
  00ff1f0  fcmpu 0, 3, 4
  00ff1f4  cror 6, 0, 2
  00ff1f8  bt 6, 0xff204
  00ff1fc  fmr 3, 4
  00ff200  b 0xff220
  00ff204  lis 3, 16
  00ff208  addi 3, 3, -3712
  00ff20c  lfs 4, 8(3)
  00ff210  fcmpu 0, 3, 4
  00ff214  cror 6, 1, 2
  00ff218  bt 6, 0xff220
  00ff21c  fmr 3, 4
  00ff220  fmuls 4, 29, 2
  00ff224  lis 3, 16
  00ff228  addi 3, 3, -3712
  00ff22c  fmsubs 3, 28, 3, 4
  00ff230  fadds 2, 2, 3
  00ff234  fcmpu 1, 2, 30
  00ff238  stfs 2, 0(31)
  00ff23c  lfs 3, 12(3)
  00ff240  fcmpu 0, 30, 3
  00ff244  bt 2, 0xff270
  00ff248  bf 5, 0xff258
  00ff24c  fmr 2, 30
  00ff250  stfs 30, 0(31)
  00ff254  b 0xff270
  00ff258  fneg 30, 30
  00ff25c  fcmpu 0, 2, 30
  00ff260  cror 6, 1, 2
  00ff264  bt 6, 0xff270
  00ff268  fmr 2, 30
  00ff26c  stfs 30, 0(31)
  00ff270  fabs 1, 1
  00ff274  fcmpu 0, 2, 1
  00ff278  cror 6, 0, 2
  00ff27c  bt 6, 0xff28c
  00ff280  fmr 2, 1
  00ff284  stfs 1, 0(31)
  00ff288  b 0xff2a4
  00ff28c  fneg 1, 1
  00ff290  fcmpu 0, 2, 1
  00ff294  cror 6, 1, 2
  00ff298  bt 6, 0xff2a4
  00ff29c  fmr 2, 1
  00ff2a0  stfs 1, 0(31)
  00ff2a4  fmr 1, 31
  00ff2a8  bl 0x502578
  00ff2ac  nop
  00ff2b0  ld 0, 176(1)
  00ff2b4  mtlr 0
  00ff2b8  lfd 28, 128(1)
  00ff2bc  lfd 29, 136(1)
  00ff2c0  lfd 30, 144(1)
  00ff2c4  lfd 31, 152(1)
  00ff2c8  ld 30, 112(1)
  00ff2cc  ld 31, 120(1)
  00ff2d0  addi 1, 1, 160
  00ff2d4  blr

OrganicDeltAngSpeed:   # 0xff2e8, 0x148 bytes
  00ff2e8  stdu 1, -160(1)
  00ff2ec  mflr 0
  00ff2f0  std 0, 176(1)
  00ff2f4  stfd 29, 136(1)
  00ff2f8  stfd 30, 144(1)
  00ff2fc  stfd 31, 152(1)
  00ff300  std 30, 120(1)
  00ff304  ori 30, 3, 0
  00ff308  lis 3, 16
  00ff30c  fmr 29, 2
  00ff310  std 31, 128(1)
  00ff314  fmr 30, 3
  00ff318  std 29, 112(1)
  00ff31c  ori 31, 5, 0
  00ff320  addi 29, 3, -3368
  00ff324  fmr 31, 4
  00ff328  lfs 2, 72(30)
  00ff32c  bl 0x5025e0
  00ff330  nop
  00ff334  lfs 3, 0(29)
  00ff338  lfs 4, 4(29)
  00ff33c  fmuls 3, 1, 3
  00ff340  lfs 2, 0(31)
  00ff344  fcmpu 0, 3, 4
  00ff348  cror 6, 0, 2
  00ff34c  bt 6, 0xff358
  00ff350  fmr 3, 4
  00ff354  b 0xff374
  00ff358  lis 3, 16
  00ff35c  addi 3, 3, -3368
  00ff360  lfs 4, 8(3)
  00ff364  fcmpu 0, 3, 4
  00ff368  cror 6, 1, 2
  00ff36c  bt 6, 0xff374
  00ff370  fmr 3, 4
  00ff374  fmuls 4, 30, 2
  00ff378  lis 3, 16
  00ff37c  addi 3, 3, -3368
  00ff380  fmsubs 3, 29, 3, 4
  00ff384  fadds 2, 2, 3
  00ff388  fcmpu 1, 2, 31
  00ff38c  stfs 2, 0(31)
  00ff390  lfs 3, 12(3)
  00ff394  fcmpu 0, 31, 3
  00ff398  bt 2, 0xff3c4
  00ff39c  bf 5, 0xff3ac
  00ff3a0  fmr 2, 31
  00ff3a4  stfs 31, 0(31)
  00ff3a8  b 0xff3c4
  00ff3ac  fneg 31, 31
  00ff3b0  fcmpu 0, 2, 31
  00ff3b4  cror 6, 1, 2
  00ff3b8  bt 6, 0xff3c4
  00ff3bc  fmr 2, 31
  00ff3c0  stfs 31, 0(31)
  00ff3c4  fabs 1, 1
  00ff3c8  fcmpu 0, 2, 1
  00ff3cc  cror 6, 0, 2
  00ff3d0  bt 6, 0xff3e0
  00ff3d4  fmr 2, 1
  00ff3d8  stfs 1, 0(31)
  00ff3dc  b 0xff3f8
  00ff3e0  fneg 1, 1
  00ff3e4  fcmpu 0, 2, 1
  00ff3e8  cror 6, 1, 2
  00ff3ec  bt 6, 0xff3f8
  00ff3f0  fmr 2, 1
  00ff3f4  stfs 1, 0(31)
  00ff3f8  lfs 1, 72(30)
  00ff3fc  bl 0x502578
  00ff400  nop
  00ff404  stfs 1, 72(30)
  00ff408  ld 0, 176(1)
  00ff40c  mtlr 0
  00ff410  lfd 29, 136(1)
  00ff414  lfd 30, 144(1)
  00ff418  lfd 31, 152(1)
  00ff41c  ld 29, 112(1)
  00ff420  ld 30, 120(1)
  00ff424  ld 31, 128(1)
  00ff428  addi 1, 1, 160
  00ff42c  blr

MB_FaceDeltAngSpeed:   # 0xff438, 0x21c bytes
  00ff438  stdu 1, -160(1)
  00ff43c  mflr 0
  00ff440  std 0, 176(1)
  00ff444  lfs 4, 16(4)
  00ff448  lfs 5, 16(3)
  00ff44c  lfs 6, 20(4)
  00ff450  lfs 7, 20(3)
  00ff454  fsubs 4, 4, 5
  00ff458  lis 4, 16
  00ff45c  fsubs 5, 6, 7
  00ff460  addi 4, 4, -3024
  00ff464  fmr 9, 3
  00ff468  lis 6, 115
  00ff46c  addic 6, 6, 22784
  00ff470  fabs 8, 4
  00ff474  fabs 7, 5
  00ff478  stfs 4, 112(1)
  00ff47c  stfs 5, 116(1)
  00ff480  fsubs 4, 8, 7
  00ff484  stfs 4, 120(1)
  00ff488  lwz 7, 112(1)
  00ff48c  lfs 4, 0(4)
  00ff490  lfs 3, 112(1)
  00ff494  lwz 4, 116(1)
  00ff498  fabs 5, 3
  00ff49c  lfs 3, 116(1)
  00ff4a0  rlwinm 8, 4, 3, 29, 29
  00ff4a4  ori 4, 3, 0
  00ff4a8  fabs 10, 3
  00ff4ac  ori 3, 5, 0
  00ff4b0  fmr 3, 1
  00ff4b4  lwz 5, 120(1)
  00ff4b8  lfs 1, 120(1)
  00ff4bc  rlwimi 8, 5, 2, 30, 30
  00ff4c0  fsub 6, 1, 4
  00ff4c4  ori 5, 6, 0
  00ff4c8  fsub 1, 1, 4
  00ff4cc  rlwimi 8, 7, 4, 28, 28
  00ff4d0  rlwimi 5, 8, 2, 26, 28
  00ff4d4  slwi 7, 8, 2
  00ff4d8  clrldi 5, 5, 32
  00ff4dc  fsel 7, 6, 5, 7
  00ff4e0  lfsx 6, 6, 7
  00ff4e4  fsel 8, 1, 10, 8
  00ff4e8  lfs 5, 4(5)
  00ff4ec  fmr 1, 9
  00ff4f0  fcmpu 0, 7, 4
  00ff4f4  bt 1, 0xff4fc
  00ff4f8  b 0xff620
  00ff4fc  fsubs 9, 8, 7
  00ff500  fadds 7, 8, 7
  00ff504  addic 8, 1, 16
  00ff508  li 5, 2
  00ff50c  addic 6, 8, 124
  00ff510  addic 7, 8, 108
  00ff514  mtctr 5
  00ff518  fdivs 7, 9, 7
  00ff51c  fmuls 9, 7, 7
  00ff520  stfs 7, 136(1)
  00ff524  stfs 7, 128(1)
  00ff528  stfs 7, 132(1)
  00ff52c  stfs 7, 124(1)
  00ff530  lfs 10, 136(1)
  00ff534  lfs 11, 128(1)
  00ff538  lfs 12, 132(1)
  00ff53c  fmuls 7, 9, 9
  00ff540  fmuls 11, 11, 9
  00ff544  fmuls 10, 10, 7
  00ff548  fmuls 8, 7, 7
  00ff54c  fmuls 7, 12, 7
  00ff550  stfs 11, 128(1)
  00ff554  fmuls 9, 10, 9
  00ff558  stfs 7, 132(1)
  00ff55c  stfs 9, 136(1)
  00ff560  lfs 7, 108(8)
  00ff564  fmuls 7, 7, 8
  00ff568  stfs 7, 124(8)
  00ff56c  lfs 7, 4(7)
  00ff570  addic 7, 7, 8
  00ff574  fmuls 7, 7, 8
  00ff578  addic 8, 8, 8
  00ff57c  stfs 7, 4(6)
  00ff580  addic 6, 6, 8
  00ff584  bdnz 0xff560
  00ff588  ori 9, 1, 0
  00ff58c  li 6, 4
  00ff590  lis 8, 115
  00ff594  addic 7, 9, 124
  00ff598  mtctr 6
  00ff59c  addic 8, 8, 22752
  00ff5a0  ori 6, 7, 0
  00ff5a4  lfs 7, 124(9)
  00ff5a8  lfs 8, 0(8)
  00ff5ac  fmuls 7, 7, 8
  00ff5b0  lfs 8, 4(8)
  00ff5b4  addic 8, 8, 8
  00ff5b8  stfs 7, 124(9)
  00ff5bc  lfs 7, 4(7)
  00ff5c0  addic 9, 9, 8
  00ff5c4  fmuls 7, 7, 8
  00ff5c8  stfs 7, 4(7)
  00ff5cc  addic 7, 7, 8
  00ff5d0  bdnz 0xff5a4
  00ff5d4  ori 7, 5, 0
  00ff5d8  ori 5, 1, 0
  00ff5dc  mtctr 7
  00ff5e0  lfs 7, 124(5)
  00ff5e4  fadds 4, 4, 7
  00ff5e8  lfs 7, 4(6)
  00ff5ec  addic 5, 5, 16
  00ff5f0  lfs 8, 8(6)
  00ff5f4  lfs 9, 12(6)
  00ff5f8  addic 6, 6, 16
  00ff5fc  fadds 4, 4, 7
  00ff600  fadds 4, 4, 8
  00ff604  fadds 4, 4, 9
  00ff608  bdnz 0xff5e0
  00ff60c  lis 5, 16
  00ff610  addi 5, 5, -3024
  00ff614  lfs 7, 4(5)
  00ff618  fadds 4, 4, 7
  00ff61c  fmadds 4, 4, 6, 5
  00ff620  fmr 5, 2
  00ff624  ori 5, 3, 0
  00ff628  fmr 6, 1
  00ff62c  ori 3, 4, 0
  00ff630  fmr 1, 4
  00ff634  fmr 2, 3
  00ff638  fmr 3, 5
  00ff63c  fmr 4, 6
  00ff640  bl 0xff2e8
  00ff644  ld 0, 176(1)
  00ff648  mtlr 0
  00ff64c  addi 1, 1, 160
  00ff650  blr

MB_Dist2D:   # 0xff654, 0x28 bytes
  00ff654  lfs 1, 20(4)
  00ff658  lfs 2, 20(3)
  00ff65c  lfs 3, 16(4)
  00ff660  fsubs 1, 1, 2
  00ff664  lfs 2, 16(3)
  00ff668  fsubs 2, 3, 2
  00ff66c  fmuls 1, 1, 1
  00ff670  fmadds 1, 2, 2, 1
  00ff674  fsqrts 1, 1
  00ff678  blr

MB_DistBetweenMobys:   # 0xff67c, 0x38 bytes
  00ff67c  lfs 1, 20(4)
  00ff680  lfs 2, 20(3)
  00ff684  lfs 3, 16(4)
  00ff688  fsubs 1, 1, 2
  00ff68c  lfs 2, 16(3)
  00ff690  fsubs 2, 3, 2
  00ff694  lfs 3, 24(4)
  00ff698  lfs 4, 24(3)
  00ff69c  fsubs 3, 3, 4
  00ff6a0  fmuls 1, 1, 1
  00ff6a4  fmadds 1, 2, 2, 1
  00ff6a8  fmadds 1, 3, 3, 1
  00ff6ac  fsqrts 1, 1
  00ff6b0  blr

CollLineValidate:   # 0xff6b8, 0xec bytes
  00ff6b8  stdu 1, -160(1)
  00ff6bc  mflr 0
  00ff6c0  std 0, 176(1)
  00ff6c4  lfs 3, 0(3)
  00ff6c8  lis 4, 16
  00ff6cc  stfs 3, 112(1)
  00ff6d0  lfs 4, 4(3)
  00ff6d4  addi 4, 4, -2380
  00ff6d8  std 31, 152(1)
  00ff6dc  stfs 4, 116(1)
  00ff6e0  ori 31, 7, 0
  00ff6e4  lfs 5, 8(3)
  00ff6e8  lfs 6, 12(3)
  00ff6ec  fadds 1, 5, 1
  00ff6f0  stfs 3, 128(1)
  00ff6f4  fsubs 2, 5, 2
  00ff6f8  stfs 6, 124(1)
  00ff6fc  stfs 4, 132(1)
  00ff700  ori 3, 6, 0
  00ff704  stfs 6, 140(1)
  00ff708  stfs 1, 120(1)
  00ff70c  stfs 2, 136(1)
  00ff710  lfs 1, 0(4)
  00ff714  fcmpu 0, 2, 1
  00ff718  cror 6, 1, 2
  00ff71c  bt 6, 0xff728
  00ff720  li 4, 0
  00ff724  stw 4, 136(1)
  00ff728  ori 6, 3, 0
  00ff72c  addic 4, 1, 128
  00ff730  addic 3, 1, 112
  00ff734  li 5, 34
  00ff738  li 7, 0
  00ff73c  bl 0x57820
  00ff740  nop
  00ff744  lis 4, 161
  00ff748  ori 5, 3, 0
  00ff74c  addic 4, 4, 2368
  00ff750  li 3, 0
  00ff754  li 6, 0
  00ff758  subc 8, 3, 5
  00ff75c  cmpwi 31, 0
  00ff760  lwz 7, 28(4)
  00ff764  lwz 3, 24(4)
  00ff768  extsw 4, 7
  00ff76c  subc 4, 4, 6
  00ff770  sradi 4, 4, 63
  00ff774  and 4, 4, 8
  00ff778  addc 4, 5, 4
  00ff77c  bt 2, 0xff78c
  00ff780  cmpwi 3, 0
  00ff784  bt 2, 0xff78c
  00ff788  li 4, 0
  00ff78c  ori 3, 4, 0
  00ff790  ld 0, 176(1)
  00ff794  mtlr 0
  00ff798  ld 31, 152(1)
  00ff79c  addi 1, 1, 160
  00ff7a0  blr

MB_CheckLineOfSight:   # 0xff7a8, 0xc0 bytes
  00ff7a8  stdu 1, -160(1)
  00ff7ac  mflr 0
  00ff7b0  std 0, 176(1)
  00ff7b4  std 31, 152(1)
  00ff7b8  ori 31, 4, 0
  00ff7bc  ori 6, 3, 0
  00ff7c0  lis 3, 16
  00ff7c4  addic 4, 1, 128
  00ff7c8  addi 3, 3, -2140
  00ff7cc  lfs 1, 16(31)
  00ff7d0  li 5, 0
  00ff7d4  lfs 2, 16(6)
  00ff7d8  li 7, 0
  00ff7dc  lfs 3, 20(6)
  00ff7e0  stfs 2, 112(1)
  00ff7e4  stfs 3, 116(1)
  00ff7e8  lfs 2, 28(6)
  00ff7ec  lfs 3, 20(31)
  00ff7f0  stfs 2, 124(1)
  00ff7f4  stfs 1, 128(1)
  00ff7f8  lfs 1, 28(31)
  00ff7fc  stfs 3, 132(1)
  00ff800  stfs 1, 140(1)
  00ff804  lfs 1, 0(3)
  00ff808  lfs 2, 24(31)
  00ff80c  lfs 3, 24(6)
  00ff810  addic 3, 1, 112
  00ff814  fadds 3, 3, 1
  00ff818  fadds 1, 2, 1
  00ff81c  stfs 3, 120(1)
  00ff820  stfs 1, 136(1)
  00ff824  bl 0x57820
  00ff828  nop
  00ff82c  cmpwi 3, 0
  00ff830  bt 2, 0xff850
  00ff834  lis 3, 161
  00ff838  addic 3, 3, 2368
  00ff83c  lwz 3, 24(3)
  00ff840  cmpw 3, 31
  00ff844  bt 2, 0xff850
  00ff848  li 3, 0
  00ff84c  b 0xff854
  00ff850  li 3, 1
  00ff854  ld 0, 176(1)
  00ff858  mtlr 0
  00ff85c  ld 31, 152(1)
  00ff860  addi 1, 1, 160
  00ff864  blr

MB_IsSteepGround:   # 0xff878, 0x2f4 bytes
  00ff878  stdu 1, -240(1)
  00ff87c  mflr 0
  00ff880  std 0, 256(1)
  00ff884  stfd 31, 232(1)
  00ff888  lfs 1, 0(4)
  00ff88c  lis 5, 16
  00ff890  stfs 1, 112(1)
  00ff894  lfs 2, 4(4)
  00ff898  std 31, 224(1)
  00ff89c  addi 5, 5, -1944
  00ff8a0  ori 31, 3, 0
  00ff8a4  stfs 2, 116(1)
  00ff8a8  lfs 3, 12(4)
  00ff8ac  addic 3, 1, 112
  00ff8b0  lfs 4, 8(4)
  00ff8b4  ori 6, 31, 0
  00ff8b8  stfs 3, 124(1)
  00ff8bc  addic 4, 1, 128
  00ff8c0  lfs 31, 0(5)
  00ff8c4  li 7, 0
  00ff8c8  stfs 1, 128(1)
  00ff8cc  li 5, 2
  00ff8d0  stfs 2, 132(1)
  00ff8d4  fadds 1, 4, 31
  00ff8d8  fsubs 2, 4, 31
  00ff8dc  stfs 3, 140(1)
  00ff8e0  stfs 1, 120(1)
  00ff8e4  stfs 2, 136(1)
  00ff8e8  bl 0x57820
  00ff8ec  nop
  00ff8f0  cmpwi 3, 0
  00ff8f4  bt 2, 0xffb50
  00ff8f8  lis 4, 161
  00ff8fc  addic 4, 4, 2368
  00ff900  lis 3, 16
  00ff904  lfs 1, 68(4)
  00ff908  lfs 2, 64(4)
  00ff90c  fmuls 1, 1, 1
  00ff910  lwz 6, 72(4)
  00ff914  addi 3, 3, -1944
  00ff918  lis 5, 115
  00ff91c  addic 5, 5, 22784
  00ff920  fmadds 1, 2, 2, 1
  00ff924  lfs 2, 72(4)
  00ff928  fabs 5, 2
  00ff92c  fsqrts 1, 1
  00ff930  fabs 4, 1
  00ff934  stfs 1, 176(1)
  00ff938  fsubs 1, 5, 4
  00ff93c  stfs 1, 180(1)
  00ff940  lfs 1, 4(3)
  00ff944  lwz 3, 176(1)
  00ff948  lfs 2, 176(1)
  00ff94c  lwz 7, 180(1)
  00ff950  lfs 3, 180(1)
  00ff954  rlwinm 3, 3, 3, 29, 29
  00ff958  fabs 2, 2
  00ff95c  fsub 6, 3, 1
  00ff960  rlwimi 3, 7, 2, 30, 30
  00ff964  fsub 7, 3, 1
  00ff968  rlwimi 3, 6, 4, 28, 28
  00ff96c  ori 6, 5, 0
  00ff970  rlwimi 6, 3, 2, 26, 28
  00ff974  slwi 3, 3, 2
  00ff978  clrldi 6, 6, 32
  00ff97c  fsel 4, 6, 5, 4
  00ff980  fsel 5, 7, 2, 5
  00ff984  lfsx 3, 5, 3
  00ff988  lfs 2, 4(6)
  00ff98c  fcmpu 0, 4, 1
  00ff990  bt 1, 0xff998
  00ff994  b 0xffabc
  00ff998  fsubs 6, 5, 4
  00ff99c  fadds 4, 5, 4
  00ff9a0  addic 7, 1, 16
  00ff9a4  li 3, 2
  00ff9a8  addic 6, 7, 168
  00ff9ac  addic 5, 7, 184
  00ff9b0  mtctr 3
  00ff9b4  fdivs 4, 6, 4
  00ff9b8  fmuls 6, 4, 4
  00ff9bc  stfs 4, 196(1)
  00ff9c0  stfs 4, 188(1)
  00ff9c4  stfs 4, 192(1)
  00ff9c8  stfs 4, 184(1)
  00ff9cc  lfs 7, 196(1)
  00ff9d0  lfs 8, 188(1)
  00ff9d4  lfs 9, 192(1)
  00ff9d8  fmuls 4, 6, 6
  00ff9dc  fmuls 8, 8, 6
  00ff9e0  fmuls 7, 7, 4
  00ff9e4  fmuls 5, 4, 4
  00ff9e8  fmuls 4, 9, 4
  00ff9ec  stfs 8, 188(1)
  00ff9f0  fmuls 6, 7, 6
  00ff9f4  stfs 4, 192(1)
  00ff9f8  stfs 6, 196(1)
  00ff9fc  lfs 4, 168(7)
  00ffa00  fmuls 4, 4, 5
  00ffa04  stfs 4, 184(7)
  00ffa08  lfs 4, 4(6)
  00ffa0c  addic 7, 7, 8
  00ffa10  addic 6, 6, 8
  00ffa14  fmuls 4, 4, 5
  00ffa18  stfs 4, 4(5)
  00ffa1c  addic 5, 5, 8
  00ffa20  bdnz 0xff9fc
  00ffa24  ori 8, 1, 0
  00ffa28  lis 7, 115
  00ffa2c  li 9, 4
  00ffa30  addic 6, 8, 184
  00ffa34  addic 7, 7, 22752
  00ffa38  ori 5, 6, 0
  00ffa3c  mtctr 9
  00ffa40  lfs 4, 184(8)
  00ffa44  lfs 5, 0(7)
  00ffa48  fmuls 4, 4, 5
  00ffa4c  lfs 5, 4(7)
  00ffa50  addic 7, 7, 8
  00ffa54  stfs 4, 184(8)
  00ffa58  lfs 4, 4(6)
  00ffa5c  addic 8, 8, 8
  00ffa60  fmuls 4, 4, 5
  00ffa64  stfs 4, 4(6)
  00ffa68  addic 6, 6, 8
  00ffa6c  bdnz 0xffa40
  00ffa70  ori 6, 3, 0
  00ffa74  ori 3, 1, 0
  00ffa78  mtctr 6
  00ffa7c  lfs 4, 184(3)
  00ffa80  fadds 1, 1, 4
  00ffa84  addic 3, 3, 16
  00ffa88  lfs 4, 4(5)
  00ffa8c  lfs 5, 8(5)
  00ffa90  lfs 6, 12(5)
  00ffa94  addic 5, 5, 16
  00ffa98  fadds 1, 1, 4
  00ffa9c  fadds 1, 1, 5
  00ffaa0  fadds 1, 1, 6
  00ffaa4  bdnz 0xffa7c
  00ffaa8  lis 3, 16
  00ffaac  addi 3, 3, -1944
  00ffab0  lfs 4, 8(3)
  00ffab4  fadds 1, 1, 4
  00ffab8  fmadds 1, 1, 3, 2
  00ffabc  lis 3, 16
  00ffac0  addi 3, 3, -1944
  00ffac4  lfs 2, 12(3)
  00ffac8  fcmpu 0, 1, 2
  00ffacc  cror 6, 1, 2
  00ffad0  bt 6, 0xffb50
  00ffad4  ori 8, 4, 0
  00ffad8  lfs 1, 24(31)
  00ffadc  addic 3, 1, 144
  00ffae0  addic 4, 1, 160
  00ffae4  fadds 1, 1, 31
  00ffae8  li 5, 0
  00ffaec  lfs 2, 40(8)
  00ffaf0  lfs 3, 16(31)
  00ffaf4  ori 6, 31, 0
  00ffaf8  lfs 4, 20(31)
  00ffafc  fadds 5, 2, 31
  00ffb00  stfs 3, 144(1)
  00ffb04  li 7, 0
  00ffb08  lfs 3, 28(31)
  00ffb0c  stfs 4, 148(1)
  00ffb10  stfs 3, 156(1)
  00ffb14  lfs 3, 32(8)
  00ffb18  lfs 4, 36(8)
  00ffb1c  stfs 3, 160(1)
  00ffb20  stfs 4, 164(1)
  00ffb24  lfs 3, 44(8)
  00ffb28  stfs 2, 168(1)
  00ffb2c  stfs 1, 152(1)
  00ffb30  stfs 3, 172(1)
  00ffb34  stfs 5, 168(1)
  00ffb38  bl 0x57820
  00ffb3c  nop
  00ffb40  cmpwi 3, 0
  00ffb44  bf 2, 0xffb50
  00ffb48  li 3, 1
  00ffb4c  b 0xffb54
  00ffb50  li 3, 0
  00ffb54  ld 0, 256(1)
  00ffb58  mtlr 0
  00ffb5c  lfd 31, 232(1)
  00ffb60  ld 31, 224(1)
  00ffb64  addi 1, 1, 240
  00ffb68  blr

GetGroundZ:   # 0xffb70, 0xa0 bytes
  00ffb70  stdu 1, -160(1)
  00ffb74  mflr 0
  00ffb78  std 0, 176(1)
  00ffb7c  lfs 2, 0(3)
  00ffb80  lis 5, 16
  00ffb84  stfs 2, 112(1)
  00ffb88  lfs 3, 4(3)
  00ffb8c  std 31, 152(1)
  00ffb90  lis 6, 15395
  00ffb94  addi 31, 5, -1172
  00ffb98  stfs 3, 116(1)
  00ffb9c  lfs 4, 8(3)
  00ffba0  ori 5, 6, 55050
  00ffba4  lfs 5, 12(3)
  00ffba8  addic 6, 1, 112
  00ffbac  fadds 1, 4, 1
  00ffbb0  addic 3, 1, 128
  00ffbb4  stfs 5, 124(1)
  00ffbb8  li 7, 0
  00ffbbc  stw 5, 120(1)
  00ffbc0  stfs 2, 128(1)
  00ffbc4  ori 5, 4, 2
  00ffbc8  stfs 3, 132(1)
  00ffbcc  ori 4, 6, 0
  00ffbd0  stfs 5, 140(1)
  00ffbd4  li 6, 0
  00ffbd8  stfs 1, 136(1)
  00ffbdc  bl 0x57820
  00ffbe0  nop
  00ffbe4  cmpwi 3, 0
  00ffbe8  lfs 1, 0(31)
  00ffbec  bt 2, 0xffbfc
  00ffbf0  lis 3, 161
  00ffbf4  addic 3, 3, 2368
  00ffbf8  lfs 1, 40(3)
  00ffbfc  ld 0, 176(1)
  00ffc00  mtlr 0
  00ffc04  ld 31, 152(1)
  00ffc08  addi 1, 1, 160
  00ffc0c  blr

GetGroundZNoWater:   # 0xffc18, 0xa0 bytes
  00ffc18  stdu 1, -160(1)
  00ffc1c  mflr 0
  00ffc20  std 0, 176(1)
  00ffc24  lfs 1, 0(3)
  00ffc28  lis 5, 15395
  00ffc2c  stfs 1, 112(1)
  00ffc30  lfs 2, 4(3)
  00ffc34  ori 5, 5, 55050
  00ffc38  lis 4, 16
  00ffc3c  stfs 2, 116(1)
  00ffc40  std 31, 152(1)
  00ffc44  lfs 3, 12(3)
  00ffc48  addi 31, 4, -1008
  00ffc4c  lfs 4, 8(3)
  00ffc50  addic 4, 1, 112
  00ffc54  stfs 3, 124(1)
  00ffc58  addic 3, 1, 128
  00ffc5c  stw 5, 120(1)
  00ffc60  li 6, 0
  00ffc64  stfs 1, 128(1)
  00ffc68  li 5, 34
  00ffc6c  stfs 2, 132(1)
  00ffc70  li 7, 0
  00ffc74  stfs 3, 140(1)
  00ffc78  lfs 1, 0(31)
  00ffc7c  fadds 1, 4, 1
  00ffc80  stfs 1, 136(1)
  00ffc84  bl 0x57820
  00ffc88  nop
  00ffc8c  cmpwi 3, 0
  00ffc90  lfs 1, 4(31)
  00ffc94  bt 2, 0xffca4
  00ffc98  lis 3, 161
  00ffc9c  addic 3, 3, 2368
  00ffca0  lfs 1, 40(3)
  00ffca4  ld 0, 176(1)
  00ffca8  mtlr 0
  00ffcac  ld 31, 152(1)
  00ffcb0  addi 1, 1, 160
  00ffcb4  blr

CollMovingSphere:   # 0xffcd0, 0x8c8 bytes
  00ffcd0  stdu 1, -464(1)
  00ffcd4  mflr 0
  00ffcd8  std 0, 480(1)
  00ffcdc  stfd 23, 392(1)
  00ffce0  stfd 24, 400(1)
  00ffce4  stfd 25, 408(1)
  00ffce8  stfd 26, 416(1)
  00ffcec  stfd 27, 424(1)
  00ffcf0  stfd 28, 432(1)
  00ffcf4  stfd 29, 440(1)
  00ffcf8  stfd 30, 448(1)
  00ffcfc  stfd 31, 456(1)
  00ffd00  std 29, 368(1)
  00ffd04  fmr 31, 1
  00ffd08  ori 29, 5, 0
  00ffd0c  fmr 28, 4
  00ffd10  lis 5, 15395
  00ffd14  std 24, 328(1)
  00ffd18  fmr 29, 3
  00ffd1c  lis 24, 16
  00ffd20  fmr 30, 2
  00ffd24  ori 5, 5, 55050
  00ffd28  addi 24, 24, -840
  00ffd2c  std 28, 360(1)
  00ffd30  lfs 1, 8(29)
  00ffd34  ori 28, 10, 0
  00ffd38  lfs 5, 0(29)
  00ffd3c  li 6, 0
  00ffd40  std 25, 336(1)
  00ffd44  lfs 6, 4(29)
  00ffd48  rlwinm 25, 28, 0, 30, 30
  00ffd4c  std 31, 384(1)
  00ffd50  lfs 7, 12(29)
  00ffd54  ori 31, 3, 0
  00ffd58  fadds 1, 1, 31
  00ffd5c  stfs 5, 192(1)
  00ffd60  stfs 6, 196(1)
  00ffd64  subc 6, 6, 25
  00ffd68  std 30, 376(1)
  00ffd6c  stfs 7, 204(1)
  00ffd70  ori 30, 4, 0
  00ffd74  stfs 5, 208(1)
  00ffd78  cntlzw 3, 6
  00ffd7c  stw 5, 200(1)
  00ffd80  li 4, 0
  00ffd84  stfs 6, 212(1)
  00ffd88  sldi 3, 3, 58
  00ffd8c  std 23, 320(1)
  00ffd90  stfs 7, 220(1)
  00ffd94  li 23, 2
  00ffd98  sradi 3, 3, 63
  00ffd9c  std 22, 312(1)
  00ffda0  subc 4, 4, 23
  00ffda4  ori 22, 1, 0
  00ffda8  std 27, 352(1)
  00ffdac  and 4, 3, 4
  00ffdb0  li 27, 1
  00ffdb4  stfs 1, 8(29)
  00ffdb8  lfs 24, 0(24)
  00ffdbc  std 26, 344(1)
  00ffdc0  addc 23, 23, 4
  00ffdc4  li 26, 0
  00ffdc8  fadds 1, 1, 24
  00ffdcc  addic 3, 1, 208
  00ffdd0  addic 4, 1, 192
  00ffdd4  li 5, 34
  00ffdd8  li 6, 0
  00ffddc  li 7, 0
  00ffde0  stfs 1, 216(1)
  00ffde4  bl 0x57820
  00ffde8  nop
  00ffdec  lfs 1, 4(24)
  00ffdf0  cmpwi 3, 0
  00ffdf4  lfs 2, 8(29)
  00ffdf8  lfs 27, 0(29)
  00ffdfc  lfs 26, 4(29)
  00ffe00  fmr 23, 1
  00ffe04  bt 2, 0xffe14
  00ffe08  lis 3, 161
  00ffe0c  addic 3, 3, 2368
  00ffe10  lfs 1, 40(3)
  00ffe14  fsubs 2, 2, 31
  00ffe18  stfs 2, 8(29)
  00ffe1c  lfs 3, 8(30)
  00ffe20  fsubs 4, 1, 3
  00ffe24  fabs 4, 4
  00ffe28  fcmpu 0, 4, 29
  00ffe2c  cror 6, 0, 2
  00ffe30  bt 6, 0xffe7c
  00ffe34  clrlwi 3, 28, 31
  00ffe38  fcmpu 1, 1, 3
  00ffe3c  cmpwi 3, 0
  00ffe40  bf 2, 0xffe48
  00ffe44  bt 4, 0xffe54
  00ffe48  fcmpu 0, 1, 3
  00ffe4c  cror 6, 0, 2
  00ffe50  bt 6, 0xffe7c
  00ffe54  lfs 27, 0(30)
  00ffe58  ori 27, 26, 0
  00ffe5c  stfs 27, 0(29)
  00ffe60  lfs 26, 4(30)
  00ffe64  stfs 26, 4(29)
  00ffe68  lfs 2, 8(30)
  00ffe6c  stfs 2, 8(29)
  00ffe70  lfs 1, 12(30)
  00ffe74  stfs 1, 12(29)
  00ffe78  lfs 3, 8(30)
  00ffe7c  lfs 1, 4(30)
  00ffe80  fsubs 25, 2, 3
  00ffe84  lfs 2, 0(30)
  00ffe88  fsubs 26, 26, 1
  00ffe8c  fsubs 27, 27, 2
  00ffe90  lfs 5, 8(24)
  00ffe94  fmuls 5, 30, 5
  00ffe98  stfs 2, 112(1)
  00ffe9c  lfs 6, 12(30)
  00ffea0  fmuls 4, 26, 26
  00ffea4  stfs 1, 116(1)
  00ffea8  fadds 3, 3, 31
  00ffeac  stfs 6, 124(1)
  00ffeb0  stfs 6, 140(1)
  00ffeb4  fmadds 4, 27, 27, 4
  00ffeb8  cmpwi 27, 0
  00ffebc  stfs 3, 120(1)
  00ffec0  fmadds 4, 25, 25, 4
  00ffec4  fsqrts 4, 4
  00ffec8  fdivs 5, 5, 4
  00ffecc  fsub 6, 23, 4
  00ffed0  fsub 7, 23, 4
  00ffed4  fsub 8, 23, 4
  00ffed8  fsub 9, 4, 23
  00ffedc  fsub 10, 4, 23
  00ffee0  fsub 4, 4, 23
  00ffee4  fmuls 11, 5, 25
  00ffee8  fmuls 12, 5, 26
  00ffeec  fmuls 5, 5, 27
  00ffef0  fsel 6, 6, 23, 11
  00ffef4  fsel 7, 7, 23, 12
  00ffef8  fsel 8, 8, 23, 5
  00ffefc  fsel 6, 9, 6, 11
  00fff00  fsel 7, 10, 7, 12
  00fff04  fsel 4, 4, 8, 5
  00fff08  fadds 3, 3, 6
  00fff0c  fadds 1, 1, 7
  00fff10  fadds 2, 2, 4
  00fff14  stfs 3, 136(1)
  00fff18  stfs 1, 132(1)
  00fff1c  stfs 2, 128(1)
  00fff20  bt 2, 0x1001d4
  00fff24  addic 3, 1, 112
  00fff28  addic 4, 1, 128
  00fff2c  ori 5, 23, 36
  00fff30  ori 6, 31, 0
  00fff34  li 7, 0
  00fff38  bl 0x57820
  00fff3c  nop
  00fff40  cmpwi 3, 0
  00fff44  bt 2, 0x1001d4
  00fff48  lis 4, 161
  00fff4c  addic 4, 4, 2368
  00fff50  lwz 3, 28(4)
  00fff54  cmpwi 3, 0
  00fff58  bf 1, 0x1001d4
  00fff5c  lfs 6, 68(4)
  00fff60  lfs 5, 64(4)
  00fff64  fmuls 1, 6, 6
  00fff68  lwz 5, 72(4)
  00fff6c  lfs 3, 72(4)
  00fff70  lis 3, 115
  00fff74  fabs 4, 3
  00fff78  addic 3, 3, 22784
  00fff7c  fmadds 1, 5, 5, 1
  00fff80  fsqrts 2, 1
  00fff84  fabs 7, 2
  00fff88  fcmpu 1, 2, 23
  00fff8c  stfs 2, 236(1)
  00fff90  fsubs 3, 4, 7
  00fff94  stfs 3, 240(1)
  00fff98  lwz 6, 236(1)
  00fff9c  lfs 3, 236(1)
  00fffa0  lwz 7, 240(1)
  00fffa4  lfs 2, 240(1)
  00fffa8  fabs 8, 3
  00fffac  rlwinm 6, 6, 3, 29, 29
  00fffb0  fsub 3, 2, 23
  00fffb4  rlwimi 6, 7, 2, 30, 30
  00fffb8  fsub 9, 2, 23
  00fffbc  rlwimi 6, 5, 4, 28, 28
  00fffc0  ori 5, 3, 0
  00fffc4  rlwimi 5, 6, 2, 26, 28
  00fffc8  slwi 6, 6, 2
  00fffcc  clrldi 5, 5, 32
  00fffd0  fsel 7, 3, 4, 7
  00fffd4  fsel 4, 9, 8, 4
  00fffd8  lfsx 2, 3, 6
  00fffdc  lfs 3, 4(5)
  00fffe0  fcmpu 0, 7, 23
  00fffe4  bt 1, 0xffff0
  00fffe8  fmr 2, 23
  00fffec  b 0x10010c
  00ffff0  fsubs 8, 4, 7
  00ffff4  fadds 4, 4, 7
  00ffff8  addic 3, 1, 16
  00ffffc  li 8, 2
  0100000  addic 6, 3, 276
  0100004  addic 5, 3, 260
  0100008  mtctr 8
  010000c  fdivs 4, 8, 4
  0100010  fmuls 7, 4, 4
  0100014  stfs 4, 276(22)
  0100018  stfs 4, 280(22)
  010001c  stfs 4, 284(22)
  0100020  stfs 4, 288(22)
  0100024  lfs 4, 288(1)
  0100028  lfs 8, 280(1)
  010002c  lfs 10, 284(1)
  0100030  fmuls 9, 7, 7
  0100034  fmuls 8, 8, 7
  0100038  fmuls 11, 4, 9
  010003c  fmuls 10, 10, 9
  0100040  fmuls 4, 9, 9
  0100044  stfs 8, 280(1)
  0100048  fmuls 7, 11, 7
  010004c  stfs 10, 284(1)
  0100050  stfs 7, 288(1)
  0100054  lfs 7, 260(3)
  0100058  fmuls 7, 7, 4
  010005c  stfs 7, 276(3)
  0100060  lfs 7, 4(5)
  0100064  addic 5, 5, 8
  0100068  fmuls 7, 7, 4
  010006c  addic 3, 3, 8
  0100070  stfs 7, 4(6)
  0100074  addic 6, 6, 8
  0100078  bdnz 0x100054
  010007c  li 6, 4
  0100080  ori 3, 1, 0
  0100084  mtctr 6
  0100088  lis 5, 115
  010008c  addic 6, 3, 276
  0100090  addic 5, 5, 22752
  0100094  ori 7, 6, 0
  0100098  lfs 4, 276(3)
  010009c  lfs 7, 0(5)
  01000a0  fmuls 4, 4, 7
  01000a4  lfs 7, 4(5)
  01000a8  addic 5, 5, 8
  01000ac  stfs 4, 276(3)
  01000b0  lfs 4, 4(6)
  01000b4  addic 3, 3, 8
  01000b8  fmuls 4, 4, 7
  01000bc  stfs 4, 4(6)
  01000c0  addic 6, 6, 8
  01000c4  bdnz 0x100098
  01000c8  ori 3, 1, 0
  01000cc  fmr 4, 23
  01000d0  mtctr 8
  01000d4  lfs 7, 276(3)
  01000d8  fadds 4, 4, 7
  01000dc  lfs 7, 4(7)
  01000e0  addic 3, 3, 16
  01000e4  lfs 8, 8(7)
  01000e8  lfs 9, 12(7)
  01000ec  addic 7, 7, 16
  01000f0  fadds 4, 4, 7
  01000f4  fadds 4, 4, 8
  01000f8  fadds 4, 4, 9
  01000fc  bdnz 0x1000d4
  0100100  lfs 7, 12(24)
  0100104  fadds 4, 4, 7
  0100108  fmadds 2, 4, 2, 3
  010010c  fcmpu 0, 2, 28
  0100110  bt 0, 0x1001a8
  0100114  lfs 2, 16(24)
  0100118  bt 6, 0x100150
  010011c  frsqrte 3, 1
  0100120  fmuls 4, 1, 3
  0100124  fmuls 7, 24, 3
  0100128  fnmsubs 4, 4, 3, 2
  010012c  fmadds 3, 4, 7, 3
  0100130  fmuls 4, 1, 3
  0100134  fmuls 7, 24, 3
  0100138  fnmsubs 4, 4, 3, 2
  010013c  fmadds 3, 4, 7, 3
  0100140  fmuls 1, 1, 3
  0100144  fmuls 4, 24, 3
  0100148  fnmsubs 2, 1, 3, 2
  010014c  fmadds 2, 2, 4, 3
  0100150  fmuls 5, 5, 2
  0100154  fmuls 1, 6, 2
  0100158  fmuls 2, 23, 2
  010015c  fmuls 3, 27, 5
  0100160  stfs 5, 64(4)
  0100164  stfs 1, 68(4)
  0100168  stfs 2, 72(4)
  010016c  fneg 3, 3
  0100170  fnmsubs 3, 26, 1, 3
  0100174  fcmpu 0, 3, 23
  0100178  cror 6, 0, 2
  010017c  bt 6, 0x1001a8
  0100180  fmuls 4, 5, 3
  0100184  fmuls 1, 1, 3
  0100188  ori 27, 26, 0
  010018c  fmuls 2, 2, 3
  0100190  fadds 27, 27, 4
  0100194  fadds 26, 26, 1
  0100198  stfs 4, 64(4)
  010019c  stfs 1, 68(4)
  01001a0  fadds 25, 25, 2
  01001a4  stfs 2, 72(4)
  01001a8  lfs 1, 0(30)
  01001ac  lfs 2, 4(30)
  01001b0  fadds 1, 1, 27
  01001b4  lfs 3, 8(30)
  01001b8  fadds 2, 2, 26
  01001bc  lfs 4, 12(30)
  01001c0  fadds 3, 3, 25
  01001c4  stfs 4, 12(29)
  01001c8  stfs 1, 0(29)
  01001cc  stfs 2, 4(29)
  01001d0  stfs 3, 8(29)
  01001d4  cmpwi 25, 0
  01001d8  bf 2, 0x10044c
  01001dc  ori 25, 26, 0
  01001e0  fadds 27, 30, 31
  01001e4  lfs 1, 0(29)
  01001e8  addic 3, 1, 144
  01001ec  li 5, 36
  01001f0  stfs 1, 144(1)
  01001f4  lfs 1, 4(29)
  01001f8  ori 6, 31, 0
  01001fc  stfs 1, 148(1)
  0100200  lfs 1, 8(29)
  0100204  lfs 3, 12(29)
  0100208  fadds 2, 27, 1
  010020c  stfs 3, 156(1)
  0100210  fmr 1, 30
  0100214  stfs 2, 152(1)
  0100218  bl 0x59e20
  010021c  nop
  0100220  cmpwi 3, 0
  0100224  bt 2, 0x10044c
  0100228  lis 3, 161
  010022c  lfs 1, 4(29)
  0100230  addic 3, 3, 2368
  0100234  lfs 2, 36(3)
  0100238  lfs 3, 0(29)
  010023c  fsubs 1, 1, 2
  0100240  lfs 2, 32(3)
  0100244  fsubs 2, 3, 2
  0100248  lis 4, 115
  010024c  addic 4, 4, 22784
  0100250  fmuls 1, 1, 1
  0100254  fmadds 1, 2, 2, 1
  0100258  lfs 2, 40(3)
  010025c  lfs 3, 8(29)
  0100260  fsubs 2, 2, 3
  0100264  fsqrts 1, 1
  0100268  stfs 2, 228(1)
  010026c  fabs 4, 2
  0100270  fabs 3, 1
  0100274  stfs 1, 224(1)
  0100278  lwz 5, 228(1)
  010027c  rlwinm 5, 5, 3, 29, 29
  0100280  fsubs 1, 3, 4
  0100284  stfs 1, 232(1)
  0100288  lwz 6, 224(1)
  010028c  lfs 1, 224(1)
  0100290  lfs 2, 228(1)
  0100294  lwz 7, 232(1)
  0100298  lfs 5, 232(1)
  010029c  fabs 1, 1
  01002a0  rlwimi 5, 7, 2, 30, 30
  01002a4  fsub 6, 5, 23
  01002a8  fabs 2, 2
  01002ac  fsub 5, 5, 23
  01002b0  rlwimi 5, 6, 4, 28, 28
  01002b4  ori 6, 4, 0
  01002b8  rlwimi 6, 5, 2, 26, 28
  01002bc  slwi 5, 5, 2
  01002c0  clrldi 6, 6, 32
  01002c4  fsel 4, 6, 1, 4
  01002c8  lfsx 1, 4, 5
  01002cc  fsel 3, 5, 2, 3
  01002d0  lfs 2, 4(6)
  01002d4  fcmpu 0, 4, 23
  01002d8  bt 1, 0x1002e4
  01002dc  fmr 1, 23
  01002e0  b 0x100400
  01002e4  fsubs 5, 3, 4
  01002e8  fadds 3, 3, 4
  01002ec  addic 4, 1, 16
  01002f0  li 8, 2
  01002f4  addic 5, 4, 228
  01002f8  addic 6, 4, 244
  01002fc  mtctr 8
  0100300  fdivs 3, 5, 3
  0100304  fmuls 4, 3, 3
  0100308  stfs 3, 244(22)
  010030c  stfs 3, 248(22)
  0100310  stfs 3, 252(22)
  0100314  stfs 3, 256(22)
  0100318  lfs 3, 256(1)
  010031c  lfs 5, 248(1)
  0100320  lfs 7, 252(1)
  0100324  fmuls 6, 4, 4
  0100328  fmuls 5, 5, 4
  010032c  fmuls 8, 3, 6
  0100330  fmuls 7, 7, 6
  0100334  fmuls 3, 6, 6
  0100338  stfs 5, 248(1)
  010033c  fmuls 4, 8, 4
  0100340  stfs 7, 252(1)
  0100344  stfs 4, 256(1)
  0100348  lfs 4, 228(4)
  010034c  fmuls 4, 4, 3
  0100350  stfs 4, 244(4)
  0100354  lfs 4, 4(5)
  0100358  addic 4, 4, 8
  010035c  addic 5, 5, 8
  0100360  fmuls 4, 4, 3
  0100364  stfs 4, 4(6)
  0100368  addic 6, 6, 8
  010036c  bdnz 0x100348
  0100370  li 6, 4
  0100374  ori 4, 1, 0
  0100378  mtctr 6
  010037c  lis 5, 115
  0100380  addic 6, 4, 244
  0100384  addic 5, 5, 22752
  0100388  ori 7, 6, 0
  010038c  lfs 3, 244(4)
  0100390  lfs 4, 0(5)
  0100394  fmuls 3, 3, 4
  0100398  lfs 4, 4(5)
  010039c  addic 5, 5, 8
  01003a0  stfs 3, 244(4)
  01003a4  lfs 3, 4(6)
  01003a8  addic 4, 4, 8
  01003ac  fmuls 3, 3, 4
  01003b0  stfs 3, 4(6)
  01003b4  addic 6, 6, 8
  01003b8  bdnz 0x10038c
  01003bc  fmr 3, 23
  01003c0  ori 4, 1, 0
  01003c4  mtctr 8
  01003c8  lfs 4, 244(4)
  01003cc  fadds 3, 3, 4
  01003d0  addic 4, 4, 16
  01003d4  lfs 4, 4(7)
  01003d8  lfs 5, 8(7)
  01003dc  lfs 6, 12(7)
  01003e0  addic 7, 7, 16
  01003e4  fadds 3, 3, 4
  01003e8  fadds 3, 3, 5
  01003ec  fadds 3, 3, 6
  01003f0  bdnz 0x1003c8
  01003f4  lfs 4, 12(24)
  01003f8  fadds 3, 3, 4
  01003fc  fmadds 1, 3, 1, 2
  0100400  lwz 4, 24(3)
  0100404  fcmpu 1, 1, 28
  0100408  cmpwi 4, 0
  010040c  bf 2, 0x100414
  0100410  bf 5, 0x100440
  0100414  lfs 1, 48(3)
  0100418  ori 27, 26, 0
  010041c  stfs 1, 0(29)
  0100420  lfs 1, 52(3)
  0100424  stfs 1, 4(29)
  0100428  lfs 1, 56(3)
  010042c  fsubs 2, 1, 27
  0100430  stfs 1, 8(29)
  0100434  lfs 1, 60(3)
  0100438  stfs 1, 12(29)
  010043c  stfs 2, 8(29)
  0100440  addic 25, 25, 1
  0100444  cmpwi 25, 6
  0100448  bt 0, 0x1001e0
  010044c  lfs 1, 8(29)
  0100450  lis 4, 15395
  0100454  lfs 2, 0(29)
  0100458  addic 3, 1, 176
  010045c  fadds 1, 1, 31
  0100460  ori 6, 4, 55050
  0100464  stfs 2, 160(1)
  0100468  addic 4, 1, 160
  010046c  lfs 3, 4(29)
  0100470  li 5, 34
  0100474  li 7, 0
  0100478  stfs 3, 164(1)
  010047c  lfs 4, 12(29)
  0100480  stw 6, 168(1)
  0100484  stfs 4, 172(1)
  0100488  li 6, 0
  010048c  fadds 5, 1, 24
  0100490  stfs 1, 8(29)
  0100494  stfs 2, 176(1)
  0100498  stfs 3, 180(1)
  010049c  stfs 4, 188(1)
  01004a0  stfs 5, 184(1)
  01004a4  bl 0x57820
  01004a8  nop
  01004ac  lfs 24, 8(29)
  01004b0  cmpwi 3, 0
  01004b4  lfs 1, 0(29)
  01004b8  bt 2, 0x1004c8
  01004bc  lis 3, 161
  01004c0  addic 3, 3, 2368
  01004c4  lfs 23, 40(3)
  01004c8  fsubs 2, 24, 31
  01004cc  stfs 2, 8(29)
  01004d0  lfs 31, 8(30)
  01004d4  fsubs 2, 23, 31
  01004d8  fabs 2, 2
  01004dc  fcmpu 0, 2, 29
  01004e0  cror 6, 0, 2
  01004e4  bt 6, 0x10052c
  01004e8  clrlwi 3, 28, 31
  01004ec  fcmpu 1, 23, 31
  01004f0  cmpwi 3, 0
  01004f4  bf 2, 0x1004fc
  01004f8  bt 4, 0x100508
  01004fc  fcmpu 0, 23, 31
  0100500  cror 6, 0, 2
  0100504  bt 6, 0x10052c
  0100508  lfs 1, 0(30)
  010050c  ori 27, 26, 0
  0100510  stfs 1, 0(29)
  0100514  lfs 2, 4(30)
  0100518  stfs 2, 4(29)
  010051c  lfs 2, 8(30)
  0100520  stfs 2, 8(29)
  0100524  lfs 2, 12(30)
  0100528  stfs 2, 12(29)
  010052c  lfs 2, 4(29)
  0100530  ori 3, 27, 0
  0100534  stfs 1, 0(30)
  0100538  stfs 2, 4(30)
  010053c  ld 0, 480(1)
  0100540  mtlr 0
  0100544  lfd 23, 392(1)
  0100548  lfd 24, 400(1)
  010054c  lfd 25, 408(1)
  0100550  lfd 26, 416(1)
  0100554  lfd 27, 424(1)
  0100558  lfd 28, 432(1)
  010055c  lfd 29, 440(1)
  0100560  lfd 30, 448(1)
  0100564  lfd 31, 456(1)
  0100568  ld 22, 312(1)
  010056c  ld 23, 320(1)
  0100570  ld 24, 328(1)
  0100574  ld 25, 336(1)
  0100578  ld 26, 344(1)
  010057c  ld 27, 352(1)
  0100580  ld 28, 360(1)
  0100584  ld 29, 368(1)
  0100588  ld 30, 376(1)
  010058c  ld 31, 384(1)
  0100590  addi 1, 1, 464
  0100594  blr

MB_PushOutOfWalls:   # 0x1005a8, 0x368 bytes
  01005a8  stdu 1, -256(1)
  01005ac  mflr 0
  01005b0  std 0, 272(1)
  01005b4  stfd 27, 216(1)
  01005b8  stfd 28, 224(1)
  01005bc  stfd 29, 232(1)
  01005c0  stfd 30, 240(1)
  01005c4  stfd 31, 248(1)
  01005c8  lfs 27, 16(3)
  01005cc  lfs 3, 0(4)
  01005d0  fmr 30, 1
  01005d4  lfs 28, 20(3)
  01005d8  fadds 3, 27, 3
  01005dc  lfs 29, 24(3)
  01005e0  li 5, 0
  01005e4  rlwinm 6, 7, 0, 27, 27
  01005e8  fmr 31, 2
  01005ec  li 7, 0
  01005f0  std 29, 192(1)
  01005f4  subc 5, 5, 6
  01005f8  li 29, 32
  01005fc  cntlzw 5, 5
  0100600  subc 6, 7, 29
  0100604  std 27, 176(1)
  0100608  sldi 5, 5, 58
  010060c  li 27, 0
  0100610  sradi 5, 5, 63
  0100614  stfs 3, 16(3)
  0100618  std 28, 184(1)
  010061c  and 5, 5, 6
  0100620  lfs 3, 4(4)
  0100624  std 30, 200(1)
  0100628  ori 28, 27, 0
  010062c  ori 30, 3, 0
  0100630  std 31, 208(1)
  0100634  fadds 3, 28, 3
  0100638  ori 31, 4, 0
  010063c  addc 29, 29, 5
  0100640  stfs 3, 20(3)
  0100644  lfs 1, 8(4)
  0100648  fadds 1, 29, 1
  010064c  stfs 1, 24(3)
  0100650  lfs 2, 24(30)
  0100654  addic 3, 1, 112
  0100658  lfs 3, 16(30)
  010065c  fmr 1, 31
  0100660  fadds 2, 2, 30
  0100664  lfs 4, 20(30)
  0100668  stfs 3, 112(1)
  010066c  ori 5, 29, 4
  0100670  lfs 3, 28(30)
  0100674  ori 6, 30, 0
  0100678  stfs 4, 116(1)
  010067c  stfs 3, 124(1)
  0100680  stfs 2, 120(1)
  0100684  bl 0x59e20
  0100688  nop
  010068c  cmpwi 3, 0
  0100690  bt 2, 0x1008a8
  0100694  lis 4, 161
  0100698  addic 4, 4, 2368
  010069c  lis 3, 16
  01006a0  lfs 1, 68(4)
  01006a4  lfs 2, 64(4)
  01006a8  fmuls 1, 1, 1
  01006ac  addi 3, 3, 1432
  01006b0  lwz 6, 72(4)
  01006b4  lis 5, 115
  01006b8  addic 5, 5, 22784
  01006bc  fmadds 1, 2, 2, 1
  01006c0  lfs 2, 72(4)
  01006c4  fabs 5, 2
  01006c8  fsqrts 1, 1
  01006cc  fabs 4, 1
  01006d0  stfs 1, 128(1)
  01006d4  fsubs 1, 5, 4
  01006d8  stfs 1, 132(1)
  01006dc  lfs 1, 0(3)
  01006e0  lwz 3, 128(1)
  01006e4  lfs 2, 128(1)
  01006e8  lwz 7, 132(1)
  01006ec  rlwinm 3, 3, 3, 29, 29
  01006f0  fabs 6, 2
  01006f4  lfs 2, 132(1)
  01006f8  rlwimi 3, 7, 2, 30, 30
  01006fc  fsub 3, 2, 1
  0100700  fsub 7, 2, 1
  0100704  rlwimi 3, 6, 4, 28, 28
  0100708  ori 6, 5, 0
  010070c  rlwimi 6, 3, 2, 26, 28
  0100710  slwi 3, 3, 2
  0100714  clrldi 6, 6, 32
  0100718  fsel 4, 3, 5, 4
  010071c  lfsx 3, 5, 3
  0100720  lfs 2, 4(6)
  0100724  fsel 5, 7, 6, 5
  0100728  fcmpu 0, 4, 1
  010072c  bt 1, 0x100734
  0100730  b 0x100858
  0100734  fsubs 6, 5, 4
  0100738  fadds 4, 5, 4
  010073c  addic 7, 1, 16
  0100740  li 3, 2
  0100744  addic 5, 7, 136
  0100748  addic 6, 7, 120
  010074c  mtctr 3
  0100750  fdivs 4, 6, 4
  0100754  fmuls 6, 4, 4
  0100758  stfs 4, 148(1)
  010075c  stfs 4, 140(1)
  0100760  stfs 4, 144(1)
  0100764  stfs 4, 136(1)
  0100768  lfs 7, 148(1)
  010076c  lfs 8, 140(1)
  0100770  lfs 9, 144(1)
  0100774  fmuls 4, 6, 6
  0100778  fmuls 8, 8, 6
  010077c  fmuls 7, 7, 4
  0100780  fmuls 5, 4, 4
  0100784  fmuls 4, 9, 4
  0100788  stfs 8, 140(1)
  010078c  fmuls 6, 7, 6
  0100790  stfs 4, 144(1)
  0100794  stfs 6, 148(1)
  0100798  lfs 4, 120(7)
  010079c  fmuls 4, 4, 5
  01007a0  stfs 4, 136(7)
  01007a4  lfs 4, 4(6)
  01007a8  addic 6, 6, 8
  01007ac  fmuls 4, 4, 5
  01007b0  addic 7, 7, 8
  01007b4  stfs 4, 4(5)
  01007b8  addic 5, 5, 8
  01007bc  bdnz 0x100798
  01007c0  ori 8, 1, 0
  01007c4  li 5, 4
  01007c8  lis 7, 115
  01007cc  addic 6, 8, 136
  01007d0  mtctr 5
  01007d4  addic 7, 7, 22752
  01007d8  ori 5, 6, 0
  01007dc  lfs 4, 136(8)
  01007e0  lfs 5, 0(7)
  01007e4  fmuls 4, 4, 5
  01007e8  lfs 5, 4(7)
  01007ec  addic 7, 7, 8
  01007f0  stfs 4, 136(8)
  01007f4  lfs 4, 4(6)
  01007f8  addic 8, 8, 8
  01007fc  fmuls 4, 4, 5
  0100800  stfs 4, 4(6)
  0100804  addic 6, 6, 8
  0100808  bdnz 0x1007dc
  010080c  ori 6, 3, 0
  0100810  ori 3, 1, 0
  0100814  mtctr 6
  0100818  lfs 4, 136(3)
  010081c  fadds 1, 1, 4
  0100820  lfs 4, 4(5)
  0100824  addic 3, 3, 16
  0100828  lfs 5, 8(5)
  010082c  lfs 6, 12(5)
  0100830  addic 5, 5, 16
  0100834  fadds 1, 1, 4
  0100838  fadds 1, 1, 5
  010083c  fadds 1, 1, 6
  0100840  bdnz 0x100818
  0100844  lis 3, 16
  0100848  addi 3, 3, 1432
  010084c  lfs 4, 4(3)
  0100850  fadds 1, 1, 4
  0100854  fmadds 1, 1, 3, 2
  0100858  lis 3, 16
  010085c  addi 3, 3, 1432
  0100860  lfs 2, 8(3)
  0100864  fcmpu 0, 1, 2
  0100868  cror 6, 0, 2
  010086c  bt 6, 0x10089c
  0100870  lfs 1, 48(4)
  0100874  ori 27, 27, 1
  0100878  stfs 1, 16(30)
  010087c  extsw 27, 27
  0100880  lfs 1, 52(4)
  0100884  stfs 1, 20(30)
  0100888  lfs 1, 56(4)
  010088c  lfs 2, 60(4)
  0100890  fsubs 1, 1, 30
  0100894  stfs 2, 28(30)
  0100898  stfs 1, 24(30)
  010089c  addic 28, 28, 1
  01008a0  cmpwi 28, 6
  01008a4  bt 0, 0x100650
  01008a8  lfs 1, 16(30)
  01008ac  ori 3, 27, 0
  01008b0  fsubs 1, 1, 27
  01008b4  stfs 1, 0(31)
  01008b8  lfs 1, 20(30)
  01008bc  fsubs 1, 1, 28
  01008c0  stfs 1, 4(31)
  01008c4  lfs 1, 24(30)
  01008c8  fsubs 1, 1, 29
  01008cc  stfs 1, 8(31)
  01008d0  lfs 1, 28(30)
  01008d4  stfs 1, 12(31)
  01008d8  ld 0, 272(1)
  01008dc  mtlr 0
  01008e0  lfd 27, 216(1)
  01008e4  lfd 28, 224(1)
  01008e8  lfd 29, 232(1)
  01008ec  lfd 30, 240(1)
  01008f0  lfd 31, 248(1)
  01008f4  ld 27, 176(1)
  01008f8  ld 28, 184(1)
  01008fc  ld 29, 192(1)
  0100900  ld 30, 200(1)
  0100904  ld 31, 208(1)
  0100908  addi 1, 1, 256
  010090c  blr

MB_PushMobyOutOfWalls:   # 0x100918, 0x84 bytes
  0100918  stdu 1, -160(1)
  010091c  mflr 0
  0100920  std 0, 176(1)
  0100924  stfd 31, 152(1)
  0100928  std 29, 128(1)
  010092c  lis 5, 16
  0100930  fmr 31, 1
  0100934  std 31, 144(1)
  0100938  ori 29, 3, 0
  010093c  std 30, 136(1)
  0100940  addi 31, 5, 2320
  0100944  std 28, 120(1)
  0100948  ori 30, 7, 0
  010094c  ori 28, 4, 0
  0100950  ori 3, 6, 0
  0100954  bl 0x502730
  0100958  nop
  010095c  lfs 2, 0(31)
  0100960  ori 3, 29, 0
  0100964  ori 4, 28, 0
  0100968  fmuls 2, 1, 2
  010096c  ori 7, 30, 0
  0100970  fmr 1, 31
  0100974  bl 0x1005a8
  0100978  ld 0, 176(1)
  010097c  mtlr 0
  0100980  lfd 31, 152(1)
  0100984  ld 28, 120(1)
  0100988  ld 29, 128(1)
  010098c  ld 30, 136(1)
  0100990  ld 31, 144(1)
  0100994  addi 1, 1, 160
  0100998  blr

MB_MoveAndCollide:   # 0x1009b0, 0x544 bytes
  01009b0  stdu 1, -368(1)
  01009b4  mflr 0
  01009b8  std 0, 384(1)
  01009bc  stfd 23, 296(1)
  01009c0  stfd 24, 304(1)
  01009c4  stfd 25, 312(1)
  01009c8  stfd 26, 320(1)
  01009cc  stfd 27, 328(1)
  01009d0  stfd 28, 336(1)
  01009d4  stfd 29, 344(1)
  01009d8  stfd 30, 352(1)
  01009dc  stfd 31, 360(1)
  01009e0  fmr 30, 2
  01009e4  lfs 25, 16(3)
  01009e8  fmr 29, 3
  01009ec  lfs 2, 0(4)
  01009f0  lfs 24, 20(3)
  01009f4  fadds 2, 25, 2
  01009f8  lfs 23, 24(3)
  01009fc  fmr 31, 1
  0100a00  rlwinm 5, 8, 0, 27, 27
  0100a04  std 25, 240(1)
  0100a08  li 6, 0
  0100a0c  li 25, 32
  0100a10  subc 5, 6, 5
  0100a14  li 6, 0
  0100a18  cntlzw 5, 5
  0100a1c  subc 6, 6, 25
  0100a20  stfs 2, 16(3)
  0100a24  lfs 3, 4(4)
  0100a28  fadds 3, 24, 3
  0100a2c  std 29, 272(1)
  0100a30  sldi 5, 5, 58
  0100a34  li 29, 0
  0100a38  std 28, 264(1)
  0100a3c  sradi 5, 5, 63
  0100a40  ori 28, 29, 0
  0100a44  std 31, 288(1)
  0100a48  and 5, 5, 6
  0100a4c  ori 31, 3, 0
  0100a50  std 30, 280(1)
  0100a54  addc 25, 25, 5
  0100a58  ori 30, 4, 0
  0100a5c  stfs 3, 20(3)
  0100a60  lfs 4, 8(4)
  0100a64  fadds 4, 23, 4
  0100a68  stfs 4, 24(3)
  0100a6c  lfs 27, 4(4)
  0100a70  lfs 1, 0(4)
  0100a74  fmuls 5, 27, 27
  0100a78  lfs 26, 8(4)
  0100a7c  fmadds 5, 1, 1, 5
  0100a80  fmadds 28, 26, 26, 5
  0100a84  lfs 5, 28(3)
  0100a88  fsqrts 28, 28
  0100a8c  fcmpu 0, 30, 28
  0100a90  std 27, 256(1)
  0100a94  std 26, 248(1)
  0100a98  cror 6, 1, 2
  0100a9c  bt 6, 0x100b80
  0100aa0  fadds 6, 23, 31
  0100aa4  lis 3, 16
  0100aa8  stfs 25, 112(1)
  0100aac  addi 3, 3, 2460
  0100ab0  stfs 24, 116(1)
  0100ab4  stfs 5, 124(1)
  0100ab8  stfs 6, 120(1)
  0100abc  lfs 5, 0(3)
  0100ac0  fcmpu 0, 28, 5
  0100ac4  bf 2, 0x100adc
  0100ac8  fmr 28, 5
  0100acc  lfs 1, 12(30)
  0100ad0  fmr 27, 28
  0100ad4  fmr 26, 27
  0100ad8  b 0x100af0
  0100adc  fdivs 5, 30, 28
  0100ae0  fmuls 28, 1, 5
  0100ae4  lfs 1, 12(30)
  0100ae8  fmuls 27, 27, 5
  0100aec  fmuls 26, 26, 5
  0100af0  fadds 4, 26, 4
  0100af4  stfs 1, 140(1)
  0100af8  fadds 2, 28, 2
  0100afc  addic 3, 1, 112
  0100b00  fadds 3, 27, 3
  0100b04  addic 4, 1, 128
  0100b08  ori 5, 25, 0
  0100b0c  ori 6, 31, 0
  0100b10  li 7, 0
  0100b14  fadds 1, 4, 31
  0100b18  stfs 2, 128(1)
  0100b1c  stfs 3, 132(1)
  0100b20  stfs 1, 136(1)
  0100b24  bl 0x57820
  0100b28  nop
  0100b2c  lfs 2, 16(31)
  0100b30  lfs 3, 20(31)
  0100b34  cmpwi 3, 0
  0100b38  lfs 4, 24(31)
  0100b3c  lfs 5, 28(31)
  0100b40  bt 2, 0x100b80
  0100b44  lis 3, 161
  0100b48  addic 3, 3, 2368
  0100b4c  li 29, 1
  0100b50  lfs 2, 32(3)
  0100b54  fsubs 2, 2, 28
  0100b58  stfs 2, 16(31)
  0100b5c  lfs 3, 36(3)
  0100b60  fsubs 3, 3, 27
  0100b64  stfs 3, 20(31)
  0100b68  lfs 1, 40(3)
  0100b6c  lfs 5, 44(3)
  0100b70  fsubs 4, 1, 26
  0100b74  stfs 5, 28(31)
  0100b78  fsubs 4, 4, 31
  0100b7c  stfs 4, 24(31)
  0100b80  lis 26, 161
  0100b84  ori 27, 25, 4
  0100b88  addic 26, 26, 2368
  0100b8c  fadds 4, 4, 31
  0100b90  stfs 2, 144(1)
  0100b94  addic 3, 1, 144
  0100b98  stfs 3, 148(1)
  0100b9c  fmr 1, 30
  0100ba0  stfs 5, 156(1)
  0100ba4  ori 5, 27, 0
  0100ba8  ori 6, 31, 0
  0100bac  stfs 4, 152(1)
  0100bb0  bl 0x59e20
  0100bb4  nop
  0100bb8  cmpwi 3, 0
  0100bbc  bt 2, 0x100bf4
  0100bc0  lfs 2, 48(26)
  0100bc4  addic 28, 28, 1
  0100bc8  ori 29, 29, 1
  0100bcc  stfs 2, 16(31)
  0100bd0  lfs 3, 52(26)
  0100bd4  cmpwi 28, 6
  0100bd8  stfs 3, 20(31)
  0100bdc  lfs 4, 56(26)
  0100be0  lfs 5, 60(26)
  0100be4  fsubs 4, 4, 31
  0100be8  stfs 5, 28(31)
  0100bec  stfs 4, 24(31)
  0100bf0  bt 0, 0x100b8c
  0100bf4  lfs 1, 24(31)
  0100bf8  lfs 2, 16(31)
  0100bfc  lis 3, 16
  0100c00  fadds 3, 1, 31
  0100c04  lfs 4, 20(31)
  0100c08  fsubs 29, 1, 29
  0100c0c  stfs 2, 160(1)
  0100c10  lfs 1, 28(31)
  0100c14  addi 3, 3, 2460
  0100c18  stfs 4, 164(1)
  0100c1c  ori 28, 29, 0
  0100c20  stfs 1, 172(1)
  0100c24  addic 4, 1, 176
  0100c28  stfs 2, 176(1)
  0100c2c  ori 5, 25, 2
  0100c30  stfs 4, 180(1)
  0100c34  ori 6, 31, 0
  0100c38  stfs 1, 188(1)
  0100c3c  li 7, 0
  0100c40  stfs 3, 168(1)
  0100c44  lfs 1, 4(3)
  0100c48  addic 3, 1, 160
  0100c4c  fsubs 1, 29, 1
  0100c50  stfs 1, 184(1)
  0100c54  bl 0x57820
  0100c58  nop
  0100c5c  lfs 31, 24(31)
  0100c60  cmpwi 3, 0
  0100c64  lfs 1, 40(26)
  0100c68  bt 2, 0x100e74
  0100c6c  lwz 3, 28(26)
  0100c70  cmpwi 3, 0
  0100c74  bf 1, 0x100e74
  0100c78  lfs 2, 68(26)
  0100c7c  lfs 3, 64(26)
  0100c80  fmuls 2, 2, 2
  0100c84  lis 3, 16
  0100c88  lwz 5, 72(26)
  0100c8c  addi 3, 3, 2460
  0100c90  lis 4, 115
  0100c94  ori 29, 29, 2
  0100c98  addic 4, 4, 22784
  0100c9c  fmadds 2, 3, 3, 2
  0100ca0  lfs 3, 72(26)
  0100ca4  fabs 4, 3
  0100ca8  fsqrts 2, 2
  0100cac  fabs 6, 2
  0100cb0  stfs 2, 192(1)
  0100cb4  fsubs 2, 4, 6
  0100cb8  stfs 2, 196(1)
  0100cbc  lfs 5, 0(3)
  0100cc0  lwz 3, 192(1)
  0100cc4  lfs 2, 192(1)
  0100cc8  lwz 6, 196(1)
  0100ccc  rlwinm 3, 3, 3, 29, 29
  0100cd0  fabs 7, 2
  0100cd4  lfs 2, 196(1)
  0100cd8  rlwimi 3, 6, 2, 30, 30
  0100cdc  fsub 3, 2, 5
  0100ce0  fsub 8, 2, 5
  0100ce4  rlwimi 3, 5, 4, 28, 28
  0100ce8  ori 5, 4, 0
  0100cec  rlwimi 5, 3, 2, 26, 28
  0100cf0  slwi 3, 3, 2
  0100cf4  clrldi 5, 5, 32
  0100cf8  fsel 6, 3, 4, 6
  0100cfc  lfsx 2, 4, 3
  0100d00  lfs 3, 4(5)
  0100d04  fsel 4, 8, 7, 4
  0100d08  fcmpu 0, 6, 5
  0100d0c  bt 1, 0x100d14
  0100d10  b 0x100e34
  0100d14  fsubs 7, 4, 6
  0100d18  fadds 4, 4, 6
  0100d1c  addic 3, 1, 16
  0100d20  li 6, 2
  0100d24  addic 5, 3, 200
  0100d28  addic 4, 3, 184
  0100d2c  mtctr 6
  0100d30  fdivs 4, 7, 4
  0100d34  fmuls 6, 4, 4
  0100d38  stfs 4, 212(1)
  0100d3c  stfs 4, 204(1)
  0100d40  stfs 4, 208(1)
  0100d44  stfs 4, 200(1)
  0100d48  lfs 8, 212(1)
  0100d4c  lfs 9, 204(1)
  0100d50  lfs 10, 208(1)
  0100d54  fmuls 7, 6, 6
  0100d58  fmuls 9, 9, 6
  0100d5c  fmuls 8, 8, 7
  0100d60  fmuls 4, 7, 7
  0100d64  fmuls 7, 10, 7
  0100d68  stfs 9, 204(1)
  0100d6c  fmuls 6, 8, 6
  0100d70  stfs 7, 208(1)
  0100d74  stfs 6, 212(1)
  0100d78  lfs 6, 184(3)
  0100d7c  fmuls 6, 6, 4
  0100d80  stfs 6, 200(3)
  0100d84  lfs 6, 4(4)
  0100d88  addic 4, 4, 8
  0100d8c  fmuls 6, 6, 4
  0100d90  addic 3, 3, 8
  0100d94  stfs 6, 4(5)
  0100d98  addic 5, 5, 8
  0100d9c  bdnz 0x100d78
  0100da0  li 5, 4
  0100da4  ori 3, 1, 0
  0100da8  mtctr 5
  0100dac  lis 4, 115
  0100db0  addic 5, 3, 200
  0100db4  addic 4, 4, 22752
  0100db8  ori 7, 5, 0
  0100dbc  lfs 4, 200(3)
  0100dc0  lfs 6, 0(4)
  0100dc4  fmuls 4, 4, 6
  0100dc8  lfs 6, 4(4)
  0100dcc  addic 4, 4, 8
  0100dd0  stfs 4, 200(3)
  0100dd4  lfs 4, 4(5)
  0100dd8  addic 3, 3, 8
  0100ddc  fmuls 4, 4, 6
  0100de0  stfs 4, 4(5)
  0100de4  addic 5, 5, 8
  0100de8  bdnz 0x100dbc
  0100dec  ori 3, 1, 0
  0100df0  mtctr 6
  0100df4  lfs 4, 200(3)
  0100df8  fadds 4, 5, 4
  0100dfc  addic 3, 3, 16
  0100e00  lfs 5, 4(7)
  0100e04  lfs 6, 8(7)
  0100e08  lfs 7, 12(7)
  0100e0c  addic 7, 7, 16
  0100e10  fadds 4, 4, 5
  0100e14  fadds 5, 4, 6
  0100e18  fadds 5, 5, 7
  0100e1c  bdnz 0x100df4
  0100e20  lis 3, 16
  0100e24  addi 3, 3, 2460
  0100e28  lfs 4, 8(3)
  0100e2c  fadds 5, 5, 4
  0100e30  fmadds 5, 5, 2, 3
  0100e34  lis 3, 16
  0100e38  addi 3, 3, 2460
  0100e3c  lfs 2, 12(3)
  0100e40  fcmpu 0, 5, 2
  0100e44  cror 6, 0, 2
  0100e48  bt 6, 0x100e50
  0100e4c  ori 29, 28, 6
  0100e50  fcmpu 0, 1, 29
  0100e54  cror 6, 0, 2
  0100e58  bt 6, 0x100e74
  0100e5c  fsubs 1, 1, 29
  0100e60  lis 3, 16
  0100e64  addi 3, 3, 2460
  0100e68  lfs 2, 16(3)
  0100e6c  fmadds 1, 1, 2, 31
  0100e70  stfs 1, 24(31)
  0100e74  lfs 1, 16(31)
  0100e78  fsubs 1, 1, 25
  0100e7c  ori 3, 29, 0
  0100e80  stfs 1, 0(30)
  0100e84  lfs 1, 20(31)
  0100e88  fsubs 1, 1, 24
  0100e8c  stfs 1, 4(30)
  0100e90  lfs 1, 24(31)
  0100e94  fsubs 1, 1, 23
  0100e98  stfs 1, 8(30)
  0100e9c  lfs 1, 28(31)
  0100ea0  stfs 1, 12(30)
  0100ea4  ld 0, 384(1)
  0100ea8  mtlr 0
  0100eac  lfd 23, 296(1)
  0100eb0  lfd 24, 304(1)
  0100eb4  lfd 25, 312(1)
  0100eb8  lfd 26, 320(1)
  0100ebc  lfd 27, 328(1)
  0100ec0  lfd 28, 336(1)
  0100ec4  lfd 29, 344(1)
  0100ec8  lfd 30, 352(1)
  0100ecc  lfd 31, 360(1)
  0100ed0  ld 25, 240(1)
  0100ed4  ld 26, 248(1)
  0100ed8  ld 27, 256(1)
  0100edc  ld 28, 264(1)
  0100ee0  ld 29, 272(1)
  0100ee4  ld 30, 280(1)
  0100ee8  ld 31, 288(1)
  0100eec  addi 1, 1, 368
  0100ef0  blr

MB_MoveAndCollide2:   # 0x100ef8, 0x94 bytes
  0100ef8  stdu 1, -160(1)
  0100efc  mflr 0
  0100f00  std 0, 176(1)
  0100f04  stfd 30, 144(1)
  0100f08  stfd 31, 152(1)
  0100f0c  lis 5, 16
  0100f10  std 29, 120(1)
  0100f14  fmr 31, 2
  0100f18  ori 29, 3, 0
  0100f1c  std 31, 136(1)
  0100f20  fmr 30, 1
  0100f24  std 30, 128(1)
  0100f28  addi 31, 5, 3828
  0100f2c  ori 30, 8, 0
  0100f30  std 28, 112(1)
  0100f34  ori 3, 6, 0
  0100f38  ori 28, 4, 0
  0100f3c  bl 0x502730
  0100f40  nop
  0100f44  lfs 2, 0(31)
  0100f48  ori 3, 29, 0
  0100f4c  fmr 3, 31
  0100f50  fmuls 2, 1, 2
  0100f54  ori 4, 28, 0
  0100f58  ori 8, 30, 0
  0100f5c  fmr 1, 30
  0100f60  bl 0x1009b0
  0100f64  ld 0, 176(1)
  0100f68  mtlr 0
  0100f6c  lfd 30, 144(1)
  0100f70  lfd 31, 152(1)
  0100f74  ld 28, 112(1)
  0100f78  ld 29, 120(1)
  0100f7c  ld 30, 128(1)
  0100f80  ld 31, 136(1)
  0100f84  addi 1, 1, 160
  0100f88  blr

MB_InitDefaultParams:   # 0x100f8c, 0x64 bytes
  0100f8c  li 4, 640
  0100f90  lis 6, 16256
  0100f94  lis 8, 16128
  0100f98  li 5, 0
  0100f9c  stw 4, 0(3)
  0100fa0  lis 7, 16428
  0100fa4  lis 4, 16025
  0100fa8  stw 6, 4(3)
  0100fac  stw 8, 8(3)
  0100fb0  ori 7, 7, 52429
  0100fb4  ori 4, 4, 39322
  0100fb8  stw 8, 12(3)
  0100fbc  lis 6, 16328
  0100fc0  stw 5, 20(3)
  0100fc4  lis 8, 15820
  0100fc8  stw 5, 16(3)
  0100fcc  ori 6, 6, 62915
  0100fd0  stw 5, 24(3)
  0100fd4  ori 8, 8, 52429
  0100fd8  stw 4, 32(3)
  0100fdc  stw 7, 36(3)
  0100fe0  stw 4, 28(3)
  0100fe4  stw 6, 40(3)
  0100fe8  stw 8, 44(3)
  0100fec  blr

???_Unused_MB_SetPosWAndClass:   # 0x100ff0, 0x1c bytes
  0100ff0  li 4, 0
  0100ff4  stw 4, 20(3)
  0100ff8  stw 4, 16(3)
  0100ffc  stw 4, 24(3)
  0101000  stfs 1, 28(3)
  0101004  stfs 2, 36(3)
  0101008  blr

MB_UpdateNavMove:   # 0x101058, 0xb2c bytes
  0101058  stdu 1, -480(1)
  010105c  mflr 0
  0101060  std 0, 496(1)
  0101064  stfd 19, 376(1)
  0101068  stfd 20, 384(1)
  010106c  stfd 21, 392(1)
  0101070  stfd 22, 400(1)
  0101074  stfd 23, 408(1)
  0101078  stfd 24, 416(1)
  010107c  stfd 25, 424(1)
  0101080  stfd 26, 432(1)
  0101084  stfd 27, 440(1)
  0101088  stfd 28, 448(1)
  010108c  stfd 29, 456(1)
  0101090  stfd 30, 464(1)
  0101094  stfd 31, 472(1)
  0101098  fmr 6, 1
  010109c  lfs 1, 4(5)
  01010a0  lfs 25, 20(3)
  01010a4  lfs 2, 0(5)
  01010a8  fsubs 1, 1, 25
  01010ac  lfs 26, 16(3)
  01010b0  fsubs 2, 2, 26
  01010b4  std 28, 344(1)
  01010b8  lis 7, 16
  01010bc  fmuls 1, 1, 1
  01010c0  std 31, 368(1)
  01010c4  li 28, 0
  01010c8  std 30, 360(1)
  01010cc  ori 31, 3, 0
  01010d0  std 29, 352(1)
  01010d4  ori 30, 4, 0
  01010d8  ori 29, 6, 0
  01010dc  fmadds 31, 2, 2, 1
  01010e0  lfs 1, 28(4)
  01010e4  lfs 7, 16(4)
  01010e8  fmuls 3, 1, 6
  01010ec  lfs 1, 12(5)
  01010f0  lfs 24, 24(3)
  01010f4  stfs 1, 124(1)
  01010f8  lfs 30, 28(3)
  01010fc  fsqrts 31, 31
  0101100  lfs 8, 36(4)
  0101104  lfs 4, 32(4)
  0101108  addi 5, 7, 4108
  010110c  lfs 5, 24(4)
  0101110  lfs 23, 48(4)
  0101114  lfs 1, 8(4)
  0101118  lfs 2, 12(4)
  010111c  std 27, 336(1)
  0101120  fmuls 6, 8, 6
  0101124  lwz 27, 56(4)
  0101128  fmuls 8, 31, 3
  010112c  fsub 9, 3, 8
  0101130  fsel 3, 9, 8, 3
  0101134  fadds 3, 7, 3
  0101138  stfs 3, 16(4)
  010113c  lfs 7, 0(5)
  0101140  fmuls 7, 3, 7
  0101144  fcmpu 0, 31, 7
  0101148  std 26, 328(1)
  010114c  std 25, 320(1)
  0101150  std 24, 312(1)
  0101154  cror 6, 1, 2
  0101158  bt 6, 0x101164
  010115c  fnmsubs 3, 4, 3, 3
  0101160  stfs 3, 16(30)
  0101164  fcmpu 0, 3, 6
  0101168  cror 6, 0, 2
  010116c  bt 6, 0x101178
  0101170  stfs 6, 16(30)
  0101174  b 0x101198
  0101178  fmr 4, 3
  010117c  fneg 3, 6
  0101180  fmr 6, 4
  0101184  fcmpu 0, 6, 3
  0101188  cror 6, 1, 2
  010118c  bt 6, 0x101198
  0101190  fmr 6, 3
  0101194  stfs 3, 16(30)
  0101198  lis 3, 16
  010119c  rlwinm 4, 27, 0, 29, 29
  01011a0  addi 3, 3, 4108
  01011a4  cmpwi 4, 0
  01011a8  lfs 3, 4(3)
  01011ac  lfs 7, 8(3)
  01011b0  lfs 4, 12(3)
  01011b4  lfs 8, 16(3)
  01011b8  lfs 9, 20(3)
  01011bc  bt 2, 0x101208
  01011c0  lfs 10, 76(30)
  01011c4  fadds 7, 10, 7
  01011c8  fsubs 11, 9, 10
  01011cc  fsubs 9, 9, 7
  01011d0  fsub 13, 10, 11
  01011d4  fsubs 12, 8, 7
  01011d8  fsubs 8, 8, 10
  01011dc  fsub 0, 7, 9
  01011e0  fsel 10, 13, 11, 10
  01011e4  fsel 7, 0, 9, 7
  01011e8  fsub 9, 8, 10
  01011ec  fsub 11, 12, 7
  01011f0  fsel 9, 9, 8, 10
  01011f4  fsel 8, 11, 12, 7
  01011f8  fmuls 10, 8, 8
  01011fc  fmuls 7, 10, 8
  0101200  fmuls 11, 10, 7
  0101204  b 0x10124c
  0101208  lfs 10, 72(31)
  010120c  fadds 7, 10, 7
  0101210  fsubs 11, 9, 10
  0101214  fsubs 9, 9, 7
  0101218  fsub 13, 10, 11
  010121c  fsubs 12, 8, 7
  0101220  fsubs 8, 8, 10
  0101224  fsub 0, 7, 9
  0101228  fsel 10, 13, 11, 10
  010122c  fsel 7, 0, 9, 7
  0101230  fsub 9, 8, 10
  0101234  fsub 11, 12, 7
  0101238  fsel 9, 9, 8, 10
  010123c  fsel 8, 11, 12, 7
  0101240  fmuls 10, 8, 8
  0101244  fmuls 7, 10, 8
  0101248  fmuls 11, 10, 7
  010124c  fmuls 12, 9, 9
  0101250  lis 3, 16
  0101254  fmadds 7, 7, 3, 8
  0101258  fmuls 8, 10, 11
  010125c  addi 3, 3, 4108
  0101260  fmuls 13, 12, 9
  0101264  fmadds 7, 11, 4, 7
  0101268  lfs 11, 24(3)
  010126c  fmuls 10, 10, 8
  0101270  lfs 0, 28(3)
  0101274  clrlwi 3, 27, 31
  0101278  cmpwi 3, 0
  010127c  fmuls 29, 12, 13
  0101280  fmadds 3, 13, 3, 9
  0101284  fmadds 7, 8, 11, 7
  0101288  fmuls 8, 12, 29
  010128c  fmadds 3, 29, 4, 3
  0101290  fmadds 4, 10, 0, 7
  0101294  fmuls 7, 12, 8
  0101298  fmadds 3, 8, 11, 3
  010129c  fmuls 4, 4, 6
  01012a0  fmadds 3, 7, 0, 3
  01012a4  stfs 4, 112(1)
  01012a8  fmuls 3, 3, 6
  01012ac  stfs 3, 116(1)
  01012b0  bt 2, 0x1012bc
  01012b4  stw 28, 120(1)
  01012b8  b 0x1012dc
  01012bc  lis 3, 16
  01012c0  stfs 5, 120(1)
  01012c4  lis 4, 114
  01012c8  addi 3, 3, 4108
  01012cc  lfs 6, 32(3)
  01012d0  lfs 7, -3048(4)
  01012d4  fnmsubs 5, 7, 6, 5
  01012d8  stfs 5, 24(30)
  01012dc  fsubs 5, 24, 23
  01012e0  lis 3, 16
  01012e4  fadds 4, 26, 4
  01012e8  rlwinm 27, 27, 0, 26, 26
  01012ec  fadds 3, 25, 3
  01012f0  addi 3, 3, 4108
  01012f4  lfs 28, 36(3)
  01012f8  stfs 30, 204(1)
  01012fc  stfs 30, 220(1)
  0101300  fadds 28, 24, 28
  0101304  fadds 1, 5, 1
  0101308  fsubs 2, 5, 2
  010130c  stfs 4, 192(1)
  0101310  stfs 4, 208(1)
  0101314  stfs 3, 196(1)
  0101318  stfs 3, 212(1)
  010131c  stfs 1, 200(1)
  0101320  stfs 2, 216(1)
  0101324  lfs 23, 40(3)
  0101328  fcmpu 0, 2, 23
  010132c  cror 6, 1, 2
  0101330  bt 6, 0x101338
  0101334  stw 28, 216(1)
  0101338  addic 3, 1, 192
  010133c  addic 4, 1, 208
  0101340  li 5, 34
  0101344  ori 6, 31, 0
  0101348  li 7, 0
  010134c  bl 0x57820
  0101350  nop
  0101354  lis 25, 161
  0101358  lfs 3, 124(1)
  010135c  lfs 29, 48(30)
  0101360  ori 5, 3, 0
  0101364  addic 25, 25, 2368
  0101368  li 3, 0
  010136c  cmpwi 27, 0
  0101370  lwz 6, 28(25)
  0101374  lwz 26, 72(25)
  0101378  lwz 4, 24(25)
  010137c  extsw 6, 6
  0101380  lfs 10, 72(25)
  0101384  lfs 21, 40(25)
  0101388  subc 3, 6, 3
  010138c  lfs 4, 16(31)
  0101390  li 6, 0
  0101394  lfs 5, 20(31)
  0101398  sradi 8, 3, 63
  010139c  lwz 3, 56(30)
  01013a0  subc 6, 6, 5
  01013a4  lfs 6, 8(30)
  01013a8  lfs 7, 12(30)
  01013ac  lfs 1, 112(1)
  01013b0  and 6, 8, 6
  01013b4  lfs 11, 64(25)
  01013b8  lfs 12, 68(25)
  01013bc  lfs 2, 116(1)
  01013c0  addc 5, 5, 6
  01013c4  lfs 8, 120(1)
  01013c8  lfs 9, 24(31)
  01013cc  bt 2, 0x1013d8
  01013d0  cmpwi 4, 0
  01013d4  bf 2, 0x1018c8
  01013d8  cmpwi 5, 0
  01013dc  bt 2, 0x1018c8
  01013e0  fmuls 12, 12, 12
  01013e4  lis 5, 16
  01013e8  addi 5, 5, 4108
  01013ec  lis 4, 115
  01013f0  fmadds 11, 11, 11, 12
  01013f4  fabs 12, 10
  01013f8  fsqrts 11, 11
  01013fc  fabs 13, 11
  0101400  stfs 11, 232(1)
  0101404  fsubs 10, 12, 13
  0101408  stfs 10, 236(1)
  010140c  lwz 6, 232(1)
  0101410  lfs 10, 232(1)
  0101414  lfs 27, 44(5)
  0101418  rlwinm 6, 6, 3, 29, 29
  010141c  fabs 11, 10
  0101420  lwz 5, 236(1)
  0101424  lfs 10, 236(1)
  0101428  rlwimi 6, 5, 2, 30, 30
  010142c  fsub 0, 10, 23
  0101430  rlwimi 6, 26, 4, 28, 28
  0101434  fsub 22, 10, 23
  0101438  addic 26, 4, 22784
  010143c  slwi 4, 6, 2
  0101440  ori 5, 26, 0
  0101444  rlwimi 5, 6, 2, 26, 28
  0101448  clrldi 5, 5, 32
  010144c  lfsx 10, 26, 4
  0101450  fsel 13, 0, 12, 13
  0101454  fsel 12, 22, 11, 12
  0101458  lfs 11, 4(5)
  010145c  fcmpu 0, 13, 23
  0101460  bt 1, 0x10146c
  0101464  fmr 10, 23
  0101468  b 0x101584
  010146c  fsubs 0, 12, 13
  0101470  fadds 12, 12, 13
  0101474  addic 4, 1, 16
  0101478  li 8, 2
  010147c  addic 5, 4, 256
  0101480  addic 6, 4, 272
  0101484  mtctr 8
  0101488  fdivs 12, 0, 12
  010148c  fmuls 13, 12, 12
  0101490  stfs 12, 284(1)
  0101494  stfs 12, 276(1)
  0101498  stfs 12, 280(1)
  010149c  stfs 12, 272(1)
  01014a0  lfs 22, 284(1)
  01014a4  lfs 20, 276(1)
  01014a8  lfs 19, 280(1)
  01014ac  fmuls 0, 13, 13
  01014b0  fmuls 20, 20, 13
  01014b4  fmuls 22, 22, 0
  01014b8  fmuls 12, 0, 0
  01014bc  fmuls 0, 19, 0
  01014c0  stfs 20, 276(1)
  01014c4  fmuls 13, 22, 13
  01014c8  stfs 0, 280(1)
  01014cc  stfs 13, 284(1)
  01014d0  lfs 13, 256(4)
  01014d4  fmuls 13, 13, 12
  01014d8  stfs 13, 272(4)
  01014dc  lfs 13, 4(5)
  01014e0  addic 4, 4, 8
  01014e4  addic 5, 5, 8
  01014e8  fmuls 13, 13, 12
  01014ec  stfs 13, 4(6)
  01014f0  addic 6, 6, 8
  01014f4  bdnz 0x1014d0
  01014f8  li 6, 4
  01014fc  ori 4, 1, 0
  0101500  mtctr 6
  0101504  lis 5, 115
  0101508  addic 6, 4, 272
  010150c  addic 5, 5, 22752
  0101510  ori 7, 6, 0
  0101514  lfs 12, 272(4)
  0101518  lfs 13, 0(5)
  010151c  fmuls 12, 12, 13
  0101520  lfs 13, 4(5)
  0101524  addic 5, 5, 8
  0101528  stfs 12, 272(4)
  010152c  lfs 12, 4(6)
  0101530  addic 4, 4, 8
  0101534  fmuls 12, 12, 13
  0101538  stfs 12, 4(6)
  010153c  addic 6, 6, 8
  0101540  bdnz 0x101514
  0101544  fmr 12, 23
  0101548  ori 4, 1, 0
  010154c  mtctr 8
  0101550  lfs 13, 272(4)
  0101554  fadds 12, 12, 13
  0101558  addic 4, 4, 16
  010155c  lfs 13, 4(7)
  0101560  lfs 0, 8(7)
  0101564  lfs 22, 12(7)
  0101568  addic 7, 7, 16
  010156c  fadds 12, 12, 13
  0101570  fadds 12, 12, 0
  0101574  fadds 12, 12, 22
  0101578  bdnz 0x101550
  010157c  fadds 12, 12, 27
  0101580  fmadds 10, 12, 10, 11
  0101584  lis 4, 16
  0101588  addi 4, 4, 4108
  010158c  lfs 22, 48(4)
  0101590  fcmpu 0, 10, 22
  0101594  cror 6, 0, 2
  0101598  bt 6, 0x1018f4
  010159c  fmuls 10, 2, 2
  01015a0  lis 4, 16
  01015a4  addi 4, 4, 4108
  01015a8  lfs 12, 52(4)
  01015ac  fmadds 10, 1, 1, 10
  01015b0  fsqrts 11, 10
  01015b4  fcmpu 0, 11, 12
  01015b8  cror 6, 0, 2
  01015bc  bt 6, 0x1018f4
  01015c0  fmadds 8, 8, 8, 10
  01015c4  lis 4, 16
  01015c8  addi 4, 4, 4108
  01015cc  fsubs 9, 9, 29
  01015d0  lfs 10, 56(4)
  01015d4  fsqrts 8, 8
  01015d8  stfs 3, 172(1)
  01015dc  stfs 3, 188(1)
  01015e0  rlwinm 27, 3, 0, 26, 26
  01015e4  fmr 3, 10
  01015e8  fadds 6, 9, 6
  01015ec  fsubs 7, 9, 7
  01015f0  fcmpu 0, 7, 23
  01015f4  stfs 6, 168(1)
  01015f8  stfs 7, 184(1)
  01015fc  cror 6, 1, 2
  0101600  fdivs 3, 3, 8
  0101604  fsub 6, 23, 8
  0101608  fsub 7, 23, 8
  010160c  fsub 9, 8, 23
  0101610  fsub 8, 8, 23
  0101614  fmuls 2, 2, 3
  0101618  fmuls 1, 1, 3
  010161c  fsel 3, 6, 23, 2
  0101620  fsel 6, 7, 23, 1
  0101624  fsel 2, 9, 3, 2
  0101628  fsel 1, 8, 6, 1
  010162c  fadds 2, 2, 5
  0101630  fadds 1, 1, 4
  0101634  stfs 2, 164(1)
  0101638  stfs 1, 160(1)
  010163c  stfs 1, 176(1)
  0101640  stfs 2, 180(1)
  0101644  bt 6, 0x10164c
  0101648  stw 28, 184(1)
  010164c  addic 3, 1, 160
  0101650  ori 6, 31, 0
  0101654  addic 4, 1, 176
  0101658  li 5, 34
  010165c  li 7, 0
  0101660  bl 0x57820
  0101664  nop
  0101668  ori 6, 3, 0
  010166c  lwz 3, 28(25)
  0101670  li 7, 0
  0101674  lwz 4, 24(25)
  0101678  li 8, 0
  010167c  lwz 5, 72(25)
  0101680  extsw 3, 3
  0101684  lfs 5, 40(25)
  0101688  subc 8, 8, 6
  010168c  lwz 9, 56(30)
  0101690  subc 3, 3, 7
  0101694  lfs 3, 72(25)
  0101698  cmpwi 27, 0
  010169c  sradi 7, 3, 63
  01016a0  lfs 4, 64(25)
  01016a4  lfs 6, 68(25)
  01016a8  ori 3, 9, 0
  01016ac  and 7, 7, 8
  01016b0  lfs 29, 48(30)
  01016b4  lfs 1, 112(1)
  01016b8  addc 6, 6, 7
  01016bc  lfs 2, 116(1)
  01016c0  bt 2, 0x1016cc
  01016c4  cmpwi 4, 0
  01016c8  bf 2, 0x1018a0
  01016cc  cmpwi 6, 0
  01016d0  bt 2, 0x1018a0
  01016d4  fmuls 6, 6, 6
  01016d8  fmadds 4, 4, 4, 6
  01016dc  fabs 6, 3
  01016e0  fsqrts 4, 4
  01016e4  fabs 7, 4
  01016e8  stfs 4, 224(1)
  01016ec  fsubs 3, 6, 7
  01016f0  stfs 3, 228(1)
  01016f4  lwz 4, 224(1)
  01016f8  lfs 3, 224(1)
  01016fc  lwz 6, 228(1)
  0101700  rlwinm 4, 4, 3, 29, 29
  0101704  fabs 4, 3
  0101708  lfs 3, 228(1)
  010170c  rlwimi 4, 6, 2, 30, 30
  0101710  fsub 8, 3, 23
  0101714  fsub 9, 3, 23
  0101718  rlwimi 4, 5, 4, 28, 28
  010171c  ori 5, 26, 0
  0101720  rlwimi 5, 4, 2, 26, 28
  0101724  slwi 4, 4, 2
  0101728  clrldi 5, 5, 32
  010172c  fsel 7, 8, 6, 7
  0101730  lfsx 3, 26, 4
  0101734  fsel 6, 9, 4, 6
  0101738  lfs 4, 4(5)
  010173c  fcmpu 0, 7, 23
  0101740  bt 1, 0x10174c
  0101744  fmr 27, 23
  0101748  b 0x101864
  010174c  fsubs 8, 6, 7
  0101750  fadds 6, 6, 7
  0101754  addic 4, 1, 16
  0101758  li 8, 2
  010175c  addic 5, 4, 224
  0101760  addic 6, 4, 240
  0101764  mtctr 8
  0101768  fdivs 6, 8, 6
  010176c  fmuls 7, 6, 6
  0101770  stfs 6, 252(1)
  0101774  stfs 6, 244(1)
  0101778  stfs 6, 248(1)
  010177c  stfs 6, 240(1)
  0101780  lfs 9, 252(1)
  0101784  lfs 10, 244(1)
  0101788  lfs 11, 248(1)
  010178c  fmuls 8, 7, 7
  0101790  fmuls 10, 10, 7
  0101794  fmuls 9, 9, 8
  0101798  fmuls 6, 8, 8
  010179c  fmuls 8, 11, 8
  01017a0  stfs 10, 244(1)
  01017a4  fmuls 7, 9, 7
  01017a8  stfs 8, 248(1)
  01017ac  stfs 7, 252(1)
  01017b0  lfs 7, 224(4)
  01017b4  fmuls 7, 7, 6
  01017b8  stfs 7, 240(4)
  01017bc  lfs 7, 4(5)
  01017c0  addic 4, 4, 8
  01017c4  addic 5, 5, 8
  01017c8  fmuls 7, 7, 6
  01017cc  stfs 7, 4(6)
  01017d0  addic 6, 6, 8
  01017d4  bdnz 0x1017b0
  01017d8  li 6, 4
  01017dc  ori 4, 1, 0
  01017e0  mtctr 6
  01017e4  lis 5, 115
  01017e8  addic 6, 4, 240
  01017ec  addic 5, 5, 22752
  01017f0  ori 7, 6, 0
  01017f4  lfs 6, 240(4)
  01017f8  lfs 7, 0(5)
  01017fc  fmuls 6, 6, 7
  0101800  lfs 7, 4(5)
  0101804  addic 5, 5, 8
  0101808  stfs 6, 240(4)
  010180c  lfs 6, 4(6)
  0101810  addic 4, 4, 8
  0101814  fmuls 6, 6, 7
  0101818  stfs 6, 4(6)
  010181c  addic 6, 6, 8
  0101820  bdnz 0x1017f4
  0101824  fmr 6, 23
  0101828  ori 4, 1, 0
  010182c  mtctr 8
  0101830  lfs 7, 240(4)
  0101834  fadds 6, 6, 7
  0101838  addic 4, 4, 16
  010183c  lfs 7, 4(7)
  0101840  lfs 8, 8(7)
  0101844  lfs 9, 12(7)
  0101848  addic 7, 7, 16
  010184c  fadds 6, 6, 7
  0101850  fadds 6, 6, 8
  0101854  fadds 6, 6, 9
  0101858  bdnz 0x101830
  010185c  fadds 27, 6, 27
  0101860  fmadds 27, 27, 3, 4
  0101864  fcmpu 0, 27, 22
  0101868  bt 0, 0x1018f4
  010186c  rlwinm 4, 3, 0, 28, 28
  0101870  cmpwi 4, 0
  0101874  bt 2, 0x101898
  0101878  fcmpu 0, 5, 28
  010187c  cror 6, 1, 2
  0101880  bt 6, 0x101898
  0101884  fcmpu 0, 21, 28
  0101888  cror 6, 1, 2
  010188c  bt 6, 0x101898
  0101890  li 28, 8
  0101894  b 0x10189c
  0101898  li 28, 34
  010189c  b 0x1018f4
  01018a0  rlwinm 4, 3, 0, 28, 28
  01018a4  cmpwi 4, 0
  01018a8  bt 2, 0x1018c0
  01018ac  fcmpu 0, 21, 28
  01018b0  cror 6, 1, 2
  01018b4  bt 6, 0x1018c0
  01018b8  li 28, 8
  01018bc  b 0x1018c4
  01018c0  li 28, 34
  01018c4  b 0x1018f4
  01018c8  rlwinm 4, 3, 0, 28, 28
  01018cc  li 5, 0
  01018d0  li 6, 34
  01018d4  subc 4, 5, 4
  01018d8  li 28, 8
  01018dc  cntlzw 4, 4
  01018e0  subc 5, 6, 28
  01018e4  sldi 4, 4, 58
  01018e8  sradi 4, 4, 63
  01018ec  and 4, 4, 5
  01018f0  addc 28, 28, 4
  01018f4  ori 27, 28, 0
  01018f8  rlwinm 4, 27, 0, 30, 30
  01018fc  cmpwi 4, 0
  0101900  bf 2, 0x101ae0
  0101904  fmuls 3, 2, 2
  0101908  lis 4, 16
  010190c  addi 26, 4, 4108
  0101910  fmr 21, 29
  0101914  extsw 24, 3
  0101918  lfs 22, 48(26)
  010191c  lfs 4, 60(26)
  0101920  fmadds 3, 1, 1, 3
  0101924  lfs 20, 4(30)
  0101928  lwz 3, 0(30)
  010192c  extsw 3, 3
  0101930  frsqrte 5, 3
  0101934  fsqrts 29, 3
  0101938  fmuls 6, 3, 5
  010193c  fmuls 7, 22, 5
  0101940  fnmsubs 6, 6, 5, 4
  0101944  fmadds 5, 6, 7, 5
  0101948  fmuls 6, 3, 5
  010194c  fmuls 7, 22, 5
  0101950  fnmsubs 6, 6, 5, 4
  0101954  fmadds 5, 6, 7, 5
  0101958  fmuls 3, 3, 5
  010195c  fmuls 6, 22, 5
  0101960  fnmsubs 3, 3, 5, 4
  0101964  fmadds 27, 3, 6, 5
  0101968  fmuls 28, 1, 27
  010196c  fmuls 27, 2, 27
  0101970  bl 0x502730
  0101974  nop
  0101978  lfs 2, 64(26)
  010197c  addic 4, 1, 112
  0101980  fmr 3, 21
  0101984  fmuls 2, 1, 2
  0101988  ori 3, 31, 0
  010198c  ori 8, 24, 0
  0101990  fmr 1, 20
  0101994  bl 0x1009b0
  0101998  lfs 5, 112(1)
  010199c  rlwinm 4, 3, 0, 30, 30
  01019a0  lfs 6, 116(1)
  01019a4  lfs 1, 16(31)
  01019a8  lfs 2, 20(31)
  01019ac  cmpwi 4, 0
  01019b0  lfs 3, 28(31)
  01019b4  lfs 4, 24(31)
  01019b8  bt 2, 0x1019d8
  01019bc  lis 4, 16
  01019c0  lis 5, 114
  01019c4  addi 4, 4, 4108
  01019c8  lfs 7, 68(4)
  01019cc  lfs 8, -3064(5)
  01019d0  fmuls 7, 8, 7
  01019d4  stfs 7, 24(30)
  01019d8  clrlwi 3, 3, 31
  01019dc  cmpwi 3, 0
  01019e0  bt 2, 0x101ac4
  01019e4  fmuls 6, 6, 27
  01019e8  lis 3, 16
  01019ec  ori 28, 28, 1
  01019f0  addi 3, 3, 4108
  01019f4  lfs 7, 72(3)
  01019f8  fmadds 5, 5, 28, 6
  01019fc  fmuls 6, 29, 7
  0101a00  fcmpu 0, 5, 6
  0101a04  cror 6, 1, 2
  0101a08  bt 6, 0x101a10
  0101a0c  ori 28, 27, 3
  0101a10  fadds 4, 4, 22
  0101a14  lis 3, 15395
  0101a18  stfs 1, 128(1)
  0101a1c  li 7, 0
  0101a20  ori 6, 3, 55050
  0101a24  stfs 2, 132(1)
  0101a28  stfs 3, 140(1)
  0101a2c  addic 3, 1, 144
  0101a30  addic 4, 1, 128
  0101a34  li 5, 2
  0101a38  stw 6, 136(1)
  0101a3c  stfs 1, 144(1)
  0101a40  stfs 2, 148(1)
  0101a44  li 6, 0
  0101a48  stfs 3, 156(1)
  0101a4c  stfs 4, 152(1)
  0101a50  bl 0x57820
  0101a54  nop
  0101a58  lfs 22, 8(30)
  0101a5c  cmpwi 3, 0
  0101a60  lfs 1, 12(30)
  0101a64  lfs 5, 112(1)
  0101a68  lfs 6, 116(1)
  0101a6c  bt 2, 0x101a74
  0101a70  lfs 23, 40(25)
  0101a74  fsubs 2, 24, 23
  0101a78  ori 3, 28, 34
  0101a7c  fcmpu 0, 2, 22
  0101a80  cror 6, 0, 2
  0101a84  bt 6, 0x101aa0
  0101a88  stfs 26, 16(31)
  0101a8c  ori 28, 3, 0
  0101a90  stfs 25, 20(31)
  0101a94  stfs 24, 24(31)
  0101a98  stfs 30, 28(31)
  0101a9c  b 0x101ac4
  0101aa0  fsubs 2, 23, 24
  0101aa4  fcmpu 0, 2, 1
  0101aa8  cror 6, 0, 2
  0101aac  bt 6, 0x101ac4
  0101ab0  stfs 26, 16(31)
  0101ab4  ori 28, 3, 0
  0101ab8  stfs 25, 20(31)
  0101abc  stfs 24, 24(31)
  0101ac0  stfs 30, 28(31)
  0101ac4  stfs 5, 0(29)
  0101ac8  stfs 6, 4(29)
  0101acc  lfs 1, 120(1)
  0101ad0  stfs 1, 8(29)
  0101ad4  lfs 1, 124(1)
  0101ad8  stfs 1, 12(29)
  0101adc  b 0x101b08
  0101ae0  clrlwi 3, 3, 31
  0101ae4  cmpwi 3, 0
  0101ae8  bf 2, 0x101b08
  0101aec  lis 3, 16
  0101af0  lis 4, 114
  0101af4  addi 3, 3, 4108
  0101af8  lfs 1, 68(3)
  0101afc  lfs 2, -3064(4)
  0101b00  fmuls 1, 2, 1
  0101b04  stfs 1, 24(30)
  0101b08  lfs 1, 44(30)
  0101b0c  fcmpu 0, 31, 1
  0101b10  cror 6, 1, 2
  0101b14  bt 6, 0x101b1c
  0101b18  ori 28, 28, 4
  0101b1c  ori 3, 28, 0
  0101b20  ld 0, 496(1)
  0101b24  mtlr 0
  0101b28  lfd 19, 376(1)
  0101b2c  lfd 20, 384(1)
  0101b30  lfd 21, 392(1)
  0101b34  lfd 22, 400(1)
  0101b38  lfd 23, 408(1)
  0101b3c  lfd 24, 416(1)
  0101b40  lfd 25, 424(1)
  0101b44  lfd 26, 432(1)
  0101b48  lfd 27, 440(1)
  0101b4c  lfd 28, 448(1)
  0101b50  lfd 29, 456(1)
  0101b54  lfd 30, 464(1)
  0101b58  lfd 31, 472(1)
  0101b5c  ld 24, 312(1)
  0101b60  ld 25, 320(1)
  0101b64  ld 26, 328(1)
  0101b68  ld 27, 336(1)
  0101b6c  ld 28, 344(1)
  0101b70  ld 29, 352(1)
  0101b74  ld 30, 360(1)
  0101b78  ld 31, 368(1)
  0101b7c  addi 1, 1, 480
  0101b80  blr

MB_MoveForward100:   # 0x101ba8, 0x104 bytes
  0101ba8  stdu 1, -160(1)
  0101bac  mflr 0
  0101bb0  std 0, 176(1)
  0101bb4  stfd 31, 152(1)
  0101bb8  lis 5, 16
  0101bbc  lfs 1, 72(3)
  0101bc0  addi 7, 5, 7044
  0101bc4  lfs 2, 0(7)
  0101bc8  lfs 3, 4(7)
  0101bcc  fadds 2, 1, 2
  0101bd0  lfs 4, 8(7)
  0101bd4  fsubs 5, 3, 1
  0101bd8  fsubs 6, 4, 1
  0101bdc  addic 5, 1, 112
  0101be0  addic 6, 1, 128
  0101be4  fsubs 3, 3, 2
  0101be8  fsub 7, 1, 5
  0101bec  fsubs 4, 4, 2
  0101bf0  fsub 8, 2, 3
  0101bf4  fsel 1, 7, 5, 1
  0101bf8  lfs 5, 12(7)
  0101bfc  fsel 2, 8, 3, 2
  0101c00  fsub 3, 6, 1
  0101c04  fsub 7, 4, 2
  0101c08  fsel 1, 3, 6, 1
  0101c0c  lfs 3, 16(7)
  0101c10  lfs 6, 20(7)
  0101c14  lfs 9, 20(3)
  0101c18  lfs 12, 24(7)
  0101c1c  fsel 2, 7, 4, 2
  0101c20  fmuls 4, 1, 1
  0101c24  fmuls 7, 2, 2
  0101c28  fmuls 8, 4, 1
  0101c2c  fmuls 10, 7, 2
  0101c30  fmuls 11, 4, 8
  0101c34  fmadds 1, 8, 5, 1
  0101c38  lfs 8, 16(3)
  0101c3c  fmuls 0, 7, 10
  0101c40  fmadds 2, 10, 5, 2
  0101c44  fmuls 5, 4, 11
  0101c48  lfs 10, 28(7)
  0101c4c  fmadds 1, 11, 3, 1
  0101c50  lfs 11, 24(3)
  0101c54  lfs 13, 28(3)
  0101c58  fmuls 31, 7, 0
  0101c5c  fmadds 2, 0, 3, 2
  0101c60  fmuls 3, 4, 5
  0101c64  fmadds 1, 5, 6, 1
  0101c68  fmuls 4, 7, 31
  0101c6c  fmadds 2, 31, 6, 2
  0101c70  fmadds 1, 3, 12, 1
  0101c74  fmadds 2, 4, 12, 2
  0101c78  fmadds 1, 1, 10, 9
  0101c7c  fmadds 2, 2, 10, 8
  0101c80  stfs 1, 116(1)
  0101c84  lfs 1, 32(7)
  0101c88  stfs 13, 124(1)
  0101c8c  stfs 11, 120(1)
  0101c90  stfs 2, 112(1)
  0101c94  bl 0x101058
  0101c98  ld 0, 176(1)
  0101c9c  mtlr 0
  0101ca0  lfd 31, 152(1)
  0101ca4  addi 1, 1, 160
  0101ca8  blr

MB_UpdateNavMoveTurning:   # 0x101cc0, 0x39c bytes
  0101cc0  stdu 1, -240(1)
  0101cc4  mflr 0
  0101cc8  std 0, 256(1)
  0101ccc  stfd 31, 232(1)
  0101cd0  std 26, 184(1)
  0101cd4  lis 7, 16
  0101cd8  li 26, 0
  0101cdc  std 27, 192(1)
  0101ce0  addi 7, 7, 7340
  0101ce4  ori 27, 26, 0
  0101ce8  lfs 31, 0(7)
  0101cec  stw 27, 12(6)
  0101cf0  stw 27, 8(6)
  0101cf4  stw 27, 4(6)
  0101cf8  stw 27, 0(6)
  0101cfc  lfs 4, 20(3)
  0101d00  lfs 5, 4(5)
  0101d04  lfs 7, 16(3)
  0101d08  fsubs 1, 4, 5
  0101d0c  lfs 6, 0(5)
  0101d10  lfs 3, 24(3)
  0101d14  fsubs 2, 7, 6
  0101d18  lfs 8, 8(5)
  0101d1c  fsubs 3, 3, 8
  0101d20  std 28, 200(1)
  0101d24  lfs 9, 44(4)
  0101d28  ori 28, 3, 0
  0101d2c  std 30, 216(1)
  0101d30  std 29, 208(1)
  0101d34  fmuls 1, 1, 1
  0101d38  ori 29, 4, 0
  0101d3c  std 31, 224(1)
  0101d40  ori 30, 5, 0
  0101d44  ori 31, 6, 0
  0101d48  fmadds 1, 2, 2, 1
  0101d4c  fmadds 1, 3, 3, 1
  0101d50  lfs 3, 60(4)
  0101d54  lfs 2, 64(4)
  0101d58  fsqrts 8, 1
  0101d5c  lfs 1, 68(4)
  0101d60  fcmpu 0, 8, 9
  0101d64  cror 6, 1, 2
  0101d68  bt 6, 0x101d70
  0101d6c  li 26, 4
  0101d70  fsubs 6, 6, 7
  0101d74  fsubs 4, 5, 4
  0101d78  lis 3, 115
  0101d7c  addic 3, 3, 22784
  0101d80  fabs 7, 6
  0101d84  fabs 5, 4
  0101d88  stfs 6, 112(1)
  0101d8c  stfs 4, 116(1)
  0101d90  fsubs 4, 7, 5
  0101d94  stfs 4, 120(1)
  0101d98  lwz 4, 112(1)
  0101d9c  lfs 4, 112(1)
  0101da0  lwz 5, 116(1)
  0101da4  fabs 6, 4
  0101da8  lfs 4, 116(1)
  0101dac  lwz 6, 120(1)
  0101db0  rlwinm 5, 5, 3, 29, 29
  0101db4  lfs 8, 120(1)
  0101db8  fabs 4, 4
  0101dbc  rlwimi 5, 6, 2, 30, 30
  0101dc0  fsub 9, 8, 31
  0101dc4  fsub 8, 8, 31
  0101dc8  rlwimi 5, 4, 4, 28, 28
  0101dcc  ori 4, 3, 0
  0101dd0  rlwimi 4, 5, 2, 26, 28
  0101dd4  slwi 5, 5, 2
  0101dd8  clrldi 4, 4, 32
  0101ddc  fsel 6, 9, 6, 5
  0101de0  lfsx 5, 3, 5
  0101de4  fsel 7, 8, 4, 7
  0101de8  lfs 4, 4(4)
  0101dec  fcmpu 0, 6, 31
  0101df0  bt 1, 0x101df8
  0101df4  b 0x101f1c
  0101df8  fsubs 8, 7, 6
  0101dfc  fadds 6, 7, 6
  0101e00  addic 6, 1, 16
  0101e04  li 3, 2
  0101e08  addic 4, 6, 124
  0101e0c  addic 5, 6, 108
  0101e10  mtctr 3
  0101e14  fdivs 6, 8, 6
  0101e18  fmuls 8, 6, 6
  0101e1c  stfs 6, 136(1)
  0101e20  stfs 6, 128(1)
  0101e24  stfs 6, 132(1)
  0101e28  stfs 6, 124(1)
  0101e2c  lfs 9, 136(1)
  0101e30  lfs 10, 128(1)
  0101e34  lfs 11, 132(1)
  0101e38  fmuls 6, 8, 8
  0101e3c  fmuls 10, 10, 8
  0101e40  fmuls 9, 9, 6
  0101e44  fmuls 7, 6, 6
  0101e48  fmuls 6, 11, 6
  0101e4c  stfs 10, 128(1)
  0101e50  fmuls 8, 9, 8
  0101e54  stfs 6, 132(1)
  0101e58  stfs 8, 136(1)
  0101e5c  lfs 6, 108(6)
  0101e60  fmuls 6, 6, 7
  0101e64  stfs 6, 124(6)
  0101e68  lfs 6, 4(5)
  0101e6c  addic 5, 5, 8
  0101e70  fmuls 6, 6, 7
  0101e74  addic 6, 6, 8
  0101e78  stfs 6, 4(4)
  0101e7c  addic 4, 4, 8
  0101e80  bdnz 0x101e5c
  0101e84  ori 7, 1, 0
  0101e88  li 4, 4
  0101e8c  lis 6, 115
  0101e90  addic 5, 7, 124
  0101e94  mtctr 4
  0101e98  addic 6, 6, 22752
  0101e9c  ori 4, 5, 0
  0101ea0  lfs 6, 124(7)
  0101ea4  lfs 7, 0(6)
  0101ea8  fmuls 6, 6, 7
  0101eac  lfs 7, 4(6)
  0101eb0  addic 6, 6, 8
  0101eb4  stfs 6, 124(7)
  0101eb8  lfs 6, 4(5)
  0101ebc  addic 7, 7, 8
  0101ec0  fmuls 6, 6, 7
  0101ec4  stfs 6, 4(5)
  0101ec8  addic 5, 5, 8
  0101ecc  bdnz 0x101ea0
  0101ed0  ori 5, 3, 0
  0101ed4  ori 3, 1, 0
  0101ed8  mtctr 5
  0101edc  lfs 6, 124(3)
  0101ee0  lfs 7, 4(4)
  0101ee4  fadds 6, 31, 6
  0101ee8  lfs 8, 8(4)
  0101eec  lfs 31, 12(4)
  0101ef0  addic 3, 3, 16
  0101ef4  addic 4, 4, 16
  0101ef8  fadds 6, 6, 7
  0101efc  fadds 6, 6, 8
  0101f00  fadds 31, 6, 31
  0101f04  bdnz 0x101edc
  0101f08  lis 3, 16
  0101f0c  addi 3, 3, 7340
  0101f10  lfs 6, 4(3)
  0101f14  fadds 31, 31, 6
  0101f18  fmadds 31, 31, 5, 4
  0101f1c  fmr 4, 2
  0101f20  addic 5, 29, 20
  0101f24  fmr 5, 1
  0101f28  ori 3, 28, 0
  0101f2c  fmr 2, 3
  0101f30  fmr 1, 31
  0101f34  fmr 3, 4
  0101f38  fmr 4, 5
  0101f3c  bl 0xff2e8
  0101f40  fmr 1, 31
  0101f44  lfs 2, 72(28)
  0101f48  bl 0x5026a0
  0101f4c  nop
  0101f50  fmr 31, 1
  0101f54  lfs 1, 40(29)
  0101f58  fcmpu 0, 31, 1
  0101f5c  bt 0, 0x101f64
  0101f60  ori 26, 26, 16
  0101f64  addic 3, 29, 72
  0101f68  bl 0x4fff60
  0101f6c  nop
  0101f70  lfs 1, 40(29)
  0101f74  lwz 3, 72(29)
  0101f78  fcmpu 0, 31, 1
  0101f7c  cror 6, 1, 2
  0101f80  bt 6, 0x101fe4
  0101f84  lis 4, 16
  0101f88  lis 5, 114
  0101f8c  vspltisw 3, -1
  0101f90  addi 4, 4, 7340
  0101f94  li 6, 8
  0101f98  li 7, -3056
  0101f9c  vslw 3, 3, 3
  0101fa0  lfs 2, 8(4)
  0101fa4  lfs 3, -3056(5)
  0101fa8  <unknown>
  0101fac  fmuls 2, 3, 2
  0101fb0  vspltw 2, 2, 0
  0101fb4  <unknown>
  0101fb8  vmaddfp 2, 4, 2, 3
  0101fbc  fctiwz 2, 2
  0101fc0  vctsxs 2, 2, 0
  0101fc4  stfd 2, 160(1)
  0101fc8  lwz 4, 164(1)
  0101fcc  cmpw 3, 4
  0101fd0  bf 0, 0x101fe4
  0101fd4  vspltw 2, 2, 0
  0101fd8  li 5, 72
  0101fdc  ori 3, 4, 0
  0101fe0  stvewx 2, 5, 29
  0101fe4  cmpwi 3, 0
  0101fe8  bt 2, 0x10202c
  0101fec  fsubs 2, 1, 31
  0101ff0  ori 4, 29, 0
  0101ff4  ori 3, 28, 0
  0101ff8  ori 5, 30, 0
  0101ffc  ori 6, 31, 0
  0102000  fdivs 1, 2, 1
  0102004  bl 0x101058
  0102008  lis 4, 16
  010200c  or 26, 26, 3
  0102010  addi 4, 4, 7340
  0102014  extsw 26, 26
  0102018  lfs 1, 12(4)
  010201c  fcmpu 0, 31, 1
  0102020  cror 6, 0, 2
  0102024  bt 6, 0x10202c
  0102028  rlwimi 26, 27, 0, 30, 30
  010202c  ori 3, 26, 0
  0102030  ld 0, 256(1)
  0102034  mtlr 0
  0102038  lfd 31, 232(1)
  010203c  ld 26, 184(1)
  0102040  ld 27, 192(1)
  0102044  ld 28, 200(1)
  0102048  ld 29, 208(1)
  010204c  ld 30, 216(1)
  0102050  ld 31, 224(1)
  0102054  addi 1, 1, 240
  0102058  blr

MB_Reset2LegData:   # 0x102060, 0x98 bytes
  0102060  stdu 1, -144(1)
  0102064  mflr 0
  0102068  std 0, 160(1)
  010206c  stfd 31, 136(1)
  0102070  std 29, 112(1)
  0102074  lis 4, 16
  0102078  li 29, 0
  010207c  std 31, 128(1)
  0102080  addi 4, 4, 8284
  0102084  std 30, 120(1)
  0102088  ori 31, 29, 0
  010208c  ori 30, 3, 0
  0102090  lfs 31, 0(4)
  0102094  lwz 3, 416(30)
  0102098  cmpwi 3, 0
  010209c  bt 2, 0x1020a4
  01020a0  stw 31, 8(3)
  01020a4  lbz 3, 353(30)
  01020a8  cmpwi 3, 0
  01020ac  bt 2, 0x1020c4
  01020b0  fmr 1, 31
  01020b4  addic 3, 30, 368
  01020b8  li 4, 2
  01020bc  bl 0x501980
  01020c0  nop
  01020c4  addic 29, 29, 1
  01020c8  stw 31, 276(30)
  01020cc  cmpwi 29, 2
  01020d0  addic 30, 30, 160
  01020d4  bt 0, 0x102094
  01020d8  ld 0, 160(1)
  01020dc  mtlr 0
  01020e0  lfd 31, 136(1)
  01020e4  ld 29, 112(1)
  01020e8  ld 30, 120(1)
  01020ec  ld 31, 128(1)
  01020f0  addi 1, 1, 144
  01020f4  blr

MB_UpdateLegAnimState:   # 0x102168, 0x1590 bytes
  0102168  stdu 1, -816(1)
  010216c  mflr 0
  0102170  std 0, 832(1)
  0102174  stfd 14, 672(1)
  0102178  stfd 15, 680(1)
  010217c  stfd 16, 688(1)
  0102180  stfd 17, 696(1)
  0102184  stfd 18, 704(1)
  0102188  stfd 19, 712(1)
  010218c  stfd 20, 720(1)
  0102190  stfd 21, 728(1)
  0102194  stfd 22, 736(1)
  0102198  stfd 23, 744(1)
  010219c  stfd 24, 752(1)
  01021a0  stfd 25, 760(1)
  01021a4  stfd 26, 768(1)
  01021a8  stfd 27, 776(1)
  01021ac  stfd 28, 784(1)
  01021b0  stfd 29, 792(1)
  01021b4  stfd 30, 800(1)
  01021b8  stfd 31, 808(1)
  01021bc  std 23, 600(1)
  01021c0  lis 23, 16
  01021c4  lis 6, 114
  01021c8  fmr 31, 3
  01021cc  addi 23, 23, 8440
  01021d0  std 28, 640(1)
  01021d4  fmr 14, 2
  01021d8  std 20, 576(1)
  01021dc  std 17, 552(1)
  01021e0  li 28, 0
  01021e4  ori 17, 1, 0
  01021e8  std 31, 664(1)
  01021ec  ori 20, 28, 0
  01021f0  ori 31, 3, 0
  01021f4  std 30, 656(1)
  01021f8  lfs 3, 0(23)
  01021fc  ori 30, 4, 0
  0102200  std 29, 648(1)
  0102204  lfs 4, -3056(6)
  0102208  ori 29, 5, 0
  010220c  lbz 6, 82(3)
  0102210  fmuls 20, 4, 3
  0102214  cmpwi 6, 255
  0102218  std 27, 632(1)
  010221c  std 26, 624(1)
  0102220  std 25, 616(1)
  0102224  std 24, 608(1)
  0102228  std 22, 592(1)
  010222c  std 21, 584(1)
  0102230  std 19, 568(1)
  0102234  std 18, 560(1)
  0102238  std 16, 544(1)
  010223c  fmuls 20, 20, 1
  0102240  bt 2, 0x102258
  0102244  ori 3, 31, 0
  0102248  bl 0xefe40
  010224c  nop
  0102250  fmr 25, 1
  0102254  b 0x102268
  0102258  lbz 3, 81(31)
  010225c  bl 0x502730
  0102260  nop
  0102264  fmr 25, 1
  0102268  lwz 4, 96(30)
  010226c  lbz 3, 82(31)
  0102270  cmpw 4, 3
  0102274  bf 2, 0x102280
  0102278  addic 27, 30, 96
  010227c  b 0x10229c
  0102280  lwz 4, 176(30)
  0102284  cmpw 4, 3
  0102288  bf 2, 0x102294
  010228c  addic 27, 30, 176
  0102290  b 0x10229c
  0102294  ori 27, 28, 0
  0102298  b 0x1023a4
  010229c  cmpwi 27, 0
  01022a0  bt 2, 0x1023a4
  01022a4  ori 26, 28, 0
  01022a8  li 3, 1
  01022ac  ori 6, 26, 0
  01022b0  ori 5, 27, 0
  01022b4  lwz 4, 64(5)
  01022b8  lwz 7, 72(5)
  01022bc  srawi 9, 4, 31
  01022c0  srawi 8, 7, 31
  01022c4  lfs 1, 64(5)
  01022c8  srwi 11, 9, 1
  01022cc  lfs 2, 72(5)
  01022d0  srwi 10, 8, 1
  01022d4  fcmpu 6, 1, 25
  01022d8  xor 4, 11, 4
  01022dc  xor 7, 10, 7
  01022e0  subc 4, 4, 9
  01022e4  subc 7, 7, 8
  01022e8  cmpw 4, 7
  01022ec  bt 1, 0x102308
  01022f0  fcmpu 1, 2, 25
  01022f4  fcmpu 0, 1, 25
  01022f8  cror 2, 1, 4
  01022fc  bt 2, 0x102318
  0102300  or 26, 3, 26
  0102304  b 0x102318
  0102308  fcmpu 1, 2, 25
  010230c  bf 25, 0x102314
  0102310  bt 4, 0x102318
  0102314  or 26, 3, 26
  0102318  lwz 7, 40(5)
  010231c  slwi 4, 3, 1
  0102320  lwz 8, 48(5)
  0102324  srawi 10, 7, 31
  0102328  srawi 9, 8, 31
  010232c  lfs 1, 40(5)
  0102330  srwi 12, 10, 1
  0102334  lfs 2, 48(5)
  0102338  srwi 11, 9, 1
  010233c  fcmpu 6, 1, 25
  0102340  xor 7, 12, 7
  0102344  xor 8, 11, 8
  0102348  subc 7, 7, 10
  010234c  subc 8, 8, 9
  0102350  cmpw 7, 8
  0102354  bt 1, 0x102370
  0102358  fcmpu 1, 2, 25
  010235c  fcmpu 0, 1, 25
  0102360  cror 2, 1, 4
  0102364  bt 2, 0x102380
  0102368  or 26, 4, 26
  010236c  b 0x102380
  0102370  fcmpu 1, 2, 25
  0102374  bf 25, 0x10237c
  0102378  bt 4, 0x102380
  010237c  or 26, 4, 26
  0102380  addic 6, 6, 1
  0102384  slwi 3, 3, 2
  0102388  cmpwi 6, 2
  010238c  addic 5, 5, 4
  0102390  bt 0, 0x1022b4
  0102394  cmpwi 26, 0
  0102398  bf 2, 0x1023ac
  010239c  or 26, 3, 26
  01023a0  b 0x1023ac
  01023a4  lhz 26, 80(30)
  01023a8  extsh 26, 26
  01023ac  lhz 3, 82(30)
  01023b0  cmpwi 3, 2
  01023b4  bf 2, 0x1023d0
  01023b8  lfs 1, 4(23)
  01023bc  lfs 2, 64(31)
  01023c0  lfs 3, 8(23)
  01023c4  fmsubs 31, 31, 1, 2
  01023c8  fmadds 31, 31, 3, 2
  01023cc  b 0x1023dc
  01023d0  lfs 1, 12(23)
  01023d4  lfs 31, 64(31)
  01023d8  fmuls 31, 31, 1
  01023dc  li 25, 3
  01023e0  ori 18, 28, 0
  01023e4  stfs 31, 64(31)
  01023e8  ori 19, 25, 0
  01023ec  ori 21, 30, 0
  01023f0  ori 3, 31, 0
  01023f4  lbz 4, 272(21)
  01023f8  addic 5, 1, 240
  01023fc  bl 0xf1038
  0102400  nop
  0102404  lwz 3, 256(1)
  0102408  lwz 4, 260(1)
  010240c  lfs 1, 256(1)
  0102410  lfs 2, 260(1)
  0102414  rlwinm 5, 4, 3, 29, 29
  0102418  fabs 1, 1
  010241c  fabs 2, 2
  0102420  lis 24, 115
  0102424  addic 24, 24, 22784
  0102428  fsubs 3, 1, 2
  010242c  stfs 3, 408(1)
  0102430  lfs 26, 16(23)
  0102434  lfs 23, 20(23)
  0102438  lhz 4, 82(30)
  010243c  lwz 6, 408(1)
  0102440  lfs 3, 408(1)
  0102444  rlwimi 5, 6, 2, 30, 30
  0102448  fsub 4, 3, 26
  010244c  fsub 5, 3, 26
  0102450  rlwimi 5, 3, 4, 28, 28
  0102454  ori 3, 24, 0
  0102458  rlwimi 3, 5, 2, 26, 28
  010245c  slwi 5, 5, 2
  0102460  clrldi 3, 3, 32
  0102464  fsel 3, 4, 1, 2
  0102468  lfsx 31, 24, 5
  010246c  fsel 2, 5, 2, 1
  0102470  lfs 1, 4(3)
  0102474  fcmpu 0, 3, 26
  0102478  bt 1, 0x102484
  010247c  fmr 31, 26
  0102480  b 0x10259c
  0102484  fsubs 4, 2, 3
  0102488  fadds 2, 2, 3
  010248c  addic 3, 1, 16
  0102490  li 8, 2
  0102494  addic 6, 3, 484
  0102498  addic 5, 3, 468
  010249c  mtctr 8
  01024a0  fdivs 2, 4, 2
  01024a4  fmuls 3, 2, 2
  01024a8  stfs 2, 484(17)
  01024ac  stfs 2, 488(17)
  01024b0  stfs 2, 492(17)
  01024b4  stfs 2, 496(17)
  01024b8  lfs 2, 496(1)
  01024bc  lfs 4, 488(1)
  01024c0  lfs 6, 492(1)
  01024c4  fmuls 5, 3, 3
  01024c8  fmuls 4, 4, 3
  01024cc  fmuls 7, 2, 5
  01024d0  fmuls 6, 6, 5
  01024d4  fmuls 2, 5, 5
  01024d8  stfs 4, 488(1)
  01024dc  fmuls 3, 7, 3
  01024e0  stfs 6, 492(1)
  01024e4  stfs 3, 496(1)
  01024e8  lfs 3, 468(3)
  01024ec  fmuls 3, 3, 2
  01024f0  stfs 3, 484(3)
  01024f4  lfs 3, 4(5)
  01024f8  addic 5, 5, 8
  01024fc  fmuls 3, 3, 2
  0102500  addic 3, 3, 8
  0102504  stfs 3, 4(6)
  0102508  addic 6, 6, 8
  010250c  bdnz 0x1024e8
  0102510  li 6, 4
  0102514  ori 3, 1, 0
  0102518  mtctr 6
  010251c  lis 5, 115
  0102520  addic 6, 3, 484
  0102524  addic 5, 5, 22752
  0102528  ori 7, 6, 0
  010252c  lfs 2, 484(3)
  0102530  lfs 3, 0(5)
  0102534  fmuls 2, 2, 3
  0102538  lfs 3, 4(5)
  010253c  addic 5, 5, 8
  0102540  stfs 2, 484(3)
  0102544  lfs 2, 4(6)
  0102548  addic 3, 3, 8
  010254c  fmuls 2, 2, 3
  0102550  stfs 2, 4(6)
  0102554  addic 6, 6, 8
  0102558  bdnz 0x10252c
  010255c  ori 3, 1, 0
  0102560  fmr 2, 26
  0102564  mtctr 8
  0102568  lfs 3, 484(3)
  010256c  fadds 2, 2, 3
  0102570  lfs 3, 4(7)
  0102574  addic 3, 3, 16
  0102578  lfs 4, 8(7)
  010257c  lfs 5, 12(7)
  0102580  addic 7, 7, 16
  0102584  fadds 2, 2, 3
  0102588  fadds 2, 2, 4
  010258c  fadds 2, 2, 5
  0102590  bdnz 0x102568
  0102594  fadds 2, 2, 23
  0102598  fmadds 31, 2, 31, 1
  010259c  cmpwi 4, 1
  01025a0  bf 2, 0x1025b0
  01025a4  and 3, 25, 26
  01025a8  cmpwi 3, 0
  01025ac  bf 2, 0x1025dc
  01025b0  lis 3, 114
  01025b4  lfs 3, 24(23)
  01025b8  lfs 5, 28(23)
  01025bc  addic 5, 21, 284
  01025c0  lfs 1, 276(21)
  01025c4  fmr 2, 26
  01025c8  lfs 4, -3064(3)
  01025cc  fmuls 5, 4, 5
  01025d0  fmr 4, 3
  01025d4  bl 0xff190
  01025d8  b 0x1025f0
  01025dc  lfs 1, 280(21)
  01025e0  fmr 2, 31
  01025e4  bl 0x5025e0
  01025e8  nop
  01025ec  stw 28, 284(21)
  01025f0  fmr 2, 1
  01025f4  stfs 1, 276(21)
  01025f8  lfs 1, 420(21)
  01025fc  fcmpu 0, 2, 1
  0102600  cror 6, 1, 2
  0102604  bt 6, 0x102610
  0102608  fmr 2, 1
  010260c  stfs 1, 276(21)
  0102610  lfs 1, 424(21)
  0102614  fcmpu 0, 2, 1
  0102618  cror 6, 0, 2
  010261c  bt 6, 0x102628
  0102620  fmr 2, 1
  0102624  stfs 1, 276(21)
  0102628  fmr 1, 2
  010262c  fmr 2, 31
  0102630  bl 0x502578
  0102634  nop
  0102638  lhz 3, 82(30)
  010263c  stfs 1, 280(21)
  0102640  cmpwi 3, 2
  0102644  bf 2, 0x1026cc
  0102648  lbz 3, 353(21)
  010264c  cmpwi 3, 0
  0102650  bt 2, 0x10266c
  0102654  addic 3, 21, 368
  0102658  fmr 1, 26
  010265c  li 4, 2
  0102660  bl 0x501980
  0102664  nop
  0102668  lbz 3, 353(21)
  010266c  cmpwi 3, 0
  0102670  addic 22, 21, 304
  0102674  bt 2, 0x10268c
  0102678  ori 3, 22, 0
  010267c  li 4, 2
  0102680  lfs 1, 276(21)
  0102684  bl 0x501980
  0102688  nop
  010268c  and 3, 25, 26
  0102690  cmpwi 3, 0
  0102694  bt 2, 0x10270c
  0102698  addic 16, 1, 128
  010269c  lfs 1, 64(31)
  01026a0  li 4, 0
  01026a4  ori 3, 16, 0
  01026a8  fneg 1, 1
  01026ac  bl 0x501980
  01026b0  nop
  01026b4  ori 3, 22, 0
  01026b8  ori 4, 22, 0
  01026bc  ori 5, 16, 0
  01026c0  bl 0x5017c4
  01026c4  nop
  01026c8  b 0x10270c
  01026cc  lbz 3, 353(21)
  01026d0  cmpwi 3, 0
  01026d4  bt 2, 0x1026f0
  01026d8  addic 3, 21, 368
  01026dc  lfs 1, 276(21)
  01026e0  li 4, 2
  01026e4  bl 0x501980
  01026e8  nop
  01026ec  lbz 3, 353(21)
  01026f0  cmpwi 3, 0
  01026f4  bt 2, 0x10270c
  01026f8  addic 3, 21, 304
  01026fc  fmr 1, 26
  0102700  li 4, 2
  0102704  bl 0x501980
  0102708  nop
  010270c  addic 18, 18, 1
  0102710  slwi 25, 25, 2
  0102714  cmpwi 18, 2
  0102718  addic 21, 21, 160
  010271c  bt 0, 0x1023f0
  0102720  lhz 3, 82(30)
  0102724  cmpwi 3, 0
  0102728  bf 2, 0x1027b0
  010272c  lhz 3, 92(30)
  0102730  lbz 4, 83(31)
  0102734  extsh 3, 3
  0102738  cmpw 4, 3
  010273c  bt 2, 0x102814
  0102740  lfs 1, 32(23)
  0102744  ori 5, 28, 0
  0102748  lfs 2, 36(23)
  010274c  ori 3, 30, 0
  0102750  lis 4, 16256
  0102754  and 6, 19, 26
  0102758  cmpwi 6, 0
  010275c  bf 2, 0x102798
  0102760  lwz 6, 416(3)
  0102764  cmpwi 6, 0
  0102768  bt 2, 0x102798
  010276c  lwz 7, 8(6)
  0102770  stw 7, 520(1)
  0102774  lfs 3, 520(1)
  0102778  fadds 3, 3, 1
  010277c  fcmpu 0, 3, 2
  0102780  stfs 3, 520(1)
  0102784  cror 6, 0, 2
  0102788  lwz 7, 520(1)
  010278c  stw 7, 8(6)
  0102790  bt 6, 0x102798
  0102794  stw 4, 8(6)
  0102798  addic 5, 5, 1
  010279c  slwi 19, 19, 2
  01027a0  cmpwi 5, 2
  01027a4  addic 3, 3, 160
  01027a8  bt 0, 0x102754
  01027ac  b 0x102814
  01027b0  ori 4, 28, 0
  01027b4  ori 3, 30, 0
  01027b8  lfs 1, 32(23)
  01027bc  and 5, 19, 26
  01027c0  cmpwi 5, 0
  01027c4  bf 2, 0x102800
  01027c8  lwz 5, 416(3)
  01027cc  cmpwi 5, 0
  01027d0  bt 2, 0x102800
  01027d4  lwz 6, 8(5)
  01027d8  stw 6, 520(1)
  01027dc  lfs 2, 520(1)
  01027e0  fsubs 2, 2, 1
  01027e4  fcmpu 0, 2, 26
  01027e8  stfs 2, 520(1)
  01027ec  cror 6, 1, 2
  01027f0  lwz 6, 520(1)
  01027f4  stw 6, 8(5)
  01027f8  bt 6, 0x102800
  01027fc  stw 28, 8(5)
  0102800  addic 4, 4, 1
  0102804  addic 3, 3, 160
  0102808  cmpwi 4, 2
  010280c  slwi 19, 19, 2
  0102810  bt 0, 0x1027bc
  0102814  lis 3, 114
  0102818  lfs 5, 48(23)
  010281c  lfs 1, 68(31)
  0102820  addic 5, 30, 88
  0102824  lfs 6, 84(30)
  0102828  lfs 3, 40(23)
  010282c  lfs 4, 44(23)
  0102830  fmr 2, 6
  0102834  lfs 7, -3064(3)
  0102838  fmuls 5, 7, 5
  010283c  bl 0xff190
  0102840  stfs 1, 68(31)
  0102844  addic 5, 1, 412
  0102848  lbz 4, 272(30)
  010284c  addic 6, 1, 304
  0102850  lbz 7, 273(30)
  0102854  ori 3, 31, 0
  0102858  stw 4, 412(1)
  010285c  lbz 8, 432(30)
  0102860  stw 7, 416(1)
  0102864  li 4, 5
  0102868  lbz 7, 433(30)
  010286c  stw 8, 420(1)
  0102870  lwz 8, 264(30)
  0102874  stw 7, 424(1)
  0102878  stw 8, 428(1)
  010287c  bl 0xf1238
  0102880  nop
  0102884  fmr 1, 26
  0102888  lhz 3, 80(30)
  010288c  li 4, 0
  0102890  ori 6, 26, 16
  0102894  lfs 3, 36(23)
  0102898  rlwinm 3, 3, 0, 27, 27
  010289c  subc 5, 26, 6
  01028a0  subc 3, 4, 3
  01028a4  li 4, 1
  01028a8  cntlzw 3, 3
  01028ac  ori 8, 28, 0
  01028b0  sldi 3, 3, 58
  01028b4  fmr 2, 1
  01028b8  sradi 7, 3, 63
  01028bc  addic 3, 1, 304
  01028c0  and 5, 7, 5
  01028c4  ori 7, 3, 0
  01028c8  addc 6, 6, 5
  01028cc  ori 21, 4, 0
  01028d0  ori 5, 30, 0
  01028d4  fmr 15, 2
  01028d8  and 9, 4, 6
  01028dc  cmpwi 9, 0
  01028e0  bt 2, 0x102908
  01028e4  lfs 4, 0(5)
  01028e8  lfs 5, 4(5)
  01028ec  fadds 15, 15, 3
  01028f0  fadds 2, 2, 4
  01028f4  fadds 1, 1, 5
  01028f8  lfs 4, 0(7)
  01028fc  lfs 5, 4(7)
  0102900  fsubs 2, 2, 4
  0102904  fsubs 1, 1, 5
  0102908  addic 8, 8, 1
  010290c  slwi 4, 4, 1
  0102910  cmpwi 8, 5
  0102914  addic 7, 7, 16
  0102918  addic 5, 5, 16
  010291c  bt 0, 0x1028d8
  0102920  fdivs 22, 3, 15
  0102924  li 18, 5
  0102928  ori 4, 3, 0
  010292c  ori 3, 30, 0
  0102930  mtctr 18
  0102934  fmr 15, 26
  0102938  fmuls 21, 22, 2
  010293c  fmuls 22, 22, 1
  0102940  lfs 1, 0(4)
  0102944  fadds 1, 1, 21
  0102948  stfs 1, 0(3)
  010294c  lfs 1, 4(4)
  0102950  fadds 1, 1, 22
  0102954  stfs 1, 4(3)
  0102958  lfs 1, 8(4)
  010295c  stfs 1, 8(3)
  0102960  lfs 1, 12(4)
  0102964  addic 4, 4, 16
  0102968  stfs 1, 12(3)
  010296c  addic 3, 3, 16
  0102970  bdnz 0x102940
  0102974  fmr 28, 26
  0102978  lis 19, 161
  010297c  lfs 24, 4(23)
  0102980  ori 16, 28, 0
  0102984  lfs 19, 52(23)
  0102988  ori 25, 21, 0
  010298c  ori 22, 30, 0
  0102990  addic 19, 19, 2368
  0102994  fmr 27, 28
  0102998  fmr 30, 27
  010299c  fmr 31, 30
  01029a0  fmr 29, 31
  01029a4  and 3, 25, 26
  01029a8  cmpwi 3, 0
  01029ac  bt 2, 0x102a44
  01029b0  lfs 1, 0(22)
  01029b4  lis 3, 15395
  01029b8  li 5, 2
  01029bc  stfs 1, 208(1)
  01029c0  lfs 2, 4(22)
  01029c4  ori 4, 3, 55050
  01029c8  addic 3, 1, 224
  01029cc  stfs 2, 212(1)
  01029d0  lfs 3, 8(22)
  01029d4  li 6, 0
  01029d8  lfs 4, 12(22)
  01029dc  li 7, 0
  01029e0  fadds 3, 3, 24
  01029e4  stfs 4, 220(1)
  01029e8  stw 4, 216(1)
  01029ec  stfs 1, 224(1)
  01029f0  stfs 2, 228(1)
  01029f4  addic 4, 1, 208
  01029f8  stfs 4, 236(1)
  01029fc  stfs 3, 232(1)
  0102a00  bl 0x57820
  0102a04  nop
  0102a08  lfs 2, 64(19)
  0102a0c  cmpwi 3, 0
  0102a10  lfs 3, 68(19)
  0102a14  fmr 1, 26
  0102a18  lfs 4, 72(19)
  0102a1c  lfs 5, 8(22)
  0102a20  bt 2, 0x102a28
  0102a24  lfs 1, 40(19)
  0102a28  fsubs 1, 1, 5
  0102a2c  fadds 29, 29, 2
  0102a30  fadds 31, 31, 3
  0102a34  fadds 30, 30, 4
  0102a38  fadds 27, 27, 19
  0102a3c  fadds 28, 28, 1
  0102a40  b 0x102af0
  0102a44  clrlwi 3, 16, 31
  0102a48  cmpwi 3, 0
  0102a4c  bt 2, 0x102af0
  0102a50  lfs 1, 0(22)
  0102a54  lis 3, 15395
  0102a58  li 5, 2
  0102a5c  stfs 1, 176(1)
  0102a60  lfs 2, 4(22)
  0102a64  ori 4, 3, 55050
  0102a68  addic 3, 1, 192
  0102a6c  stfs 2, 180(1)
  0102a70  lfs 3, 8(22)
  0102a74  li 6, 0
  0102a78  lfs 4, 12(22)
  0102a7c  li 7, 0
  0102a80  fadds 3, 3, 24
  0102a84  stfs 4, 188(1)
  0102a88  stw 4, 184(1)
  0102a8c  stfs 1, 192(1)
  0102a90  stfs 2, 196(1)
  0102a94  addic 4, 1, 176
  0102a98  stfs 4, 204(1)
  0102a9c  stfs 3, 200(1)
  0102aa0  bl 0x57820
  0102aa4  nop
  0102aa8  lfs 2, 64(19)
  0102aac  cmpwi 3, 0
  0102ab0  lfs 3, 68(19)
  0102ab4  fmr 1, 26
  0102ab8  lfs 4, 72(19)
  0102abc  lfs 5, 8(22)
  0102ac0  bt 2, 0x102ac8
  0102ac4  lfs 1, 40(19)
  0102ac8  fadds 6, 5, 28
  0102acc  fadds 29, 29, 2
  0102ad0  fadds 31, 31, 3
  0102ad4  fadds 30, 30, 4
  0102ad8  fcmpu 0, 1, 6
  0102adc  cror 6, 0, 2
  0102ae0  bt 6, 0x102af0
  0102ae4  fsubs 1, 1, 5
  0102ae8  fadds 27, 27, 19
  0102aec  fadds 28, 28, 1
  0102af0  addic 16, 16, 1
  0102af4  slwi 25, 25, 1
  0102af8  cmpwi 16, 4
  0102afc  addic 22, 22, 16
  0102b00  bt 0, 0x1029a4
  0102b04  lfs 16, 56(23)
  0102b08  lfs 1, 72(31)
  0102b0c  lfs 17, 60(23)
  0102b10  fadds 2, 1, 16
  0102b14  lfs 18, 64(23)
  0102b18  fsubs 3, 17, 1
  0102b1c  fsubs 7, 18, 1
  0102b20  lfs 19, 68(23)
  0102b24  fsubs 4, 17, 2
  0102b28  fsub 6, 1, 3
  0102b2c  fsubs 5, 18, 2
  0102b30  fsub 8, 2, 4
  0102b34  fsel 1, 6, 3, 1
  0102b38  fmr 3, 29
  0102b3c  lfs 29, 72(23)
  0102b40  fsel 2, 8, 4, 2
  0102b44  fsub 4, 7, 1
  0102b48  fmr 8, 30
  0102b4c  lfs 30, 76(23)
  0102b50  fsub 6, 5, 2
  0102b54  fsel 1, 4, 7, 1
  0102b58  fmr 4, 31
  0102b5c  lfs 31, 80(23)
  0102b60  fsel 2, 6, 5, 2
  0102b64  fmuls 5, 1, 1
  0102b68  fmuls 6, 2, 2
  0102b6c  fmuls 7, 5, 1
  0102b70  fmuls 9, 6, 2
  0102b74  fmuls 10, 5, 7
  0102b78  fmadds 1, 7, 19, 1
  0102b7c  fmuls 7, 6, 9
  0102b80  fmadds 2, 9, 19, 2
  0102b84  fmuls 9, 5, 10
  0102b88  fmadds 1, 10, 29, 1
  0102b8c  fmuls 10, 6, 7
  0102b90  fmadds 2, 7, 29, 2
  0102b94  fmuls 5, 5, 9
  0102b98  fmadds 1, 9, 30, 1
  0102b9c  fmuls 6, 6, 10
  0102ba0  fmadds 2, 10, 30, 2
  0102ba4  fmadds 1, 5, 31, 1
  0102ba8  fmadds 2, 6, 31, 2
  0102bac  fmuls 5, 8, 1
  0102bb0  fmuls 6, 4, 2
  0102bb4  fmsubs 2, 8, 2, 26
  0102bb8  fmsubs 5, 4, 26, 5
  0102bbc  fmsubs 1, 3, 1, 6
  0102bc0  fmuls 6, 8, 2
  0102bc4  fmuls 7, 3, 1
  0102bc8  fmsubs 1, 4, 1, 6
  0102bcc  fmuls 4, 4, 5
  0102bd0  fmsubs 6, 8, 5, 7
  0102bd4  fmsubs 2, 3, 2, 4
  0102bd8  fmuls 6, 6, 6
  0102bdc  fabs 4, 2
  0102be0  stfs 2, 400(1)
  0102be4  fmadds 1, 1, 1, 6
  0102be8  fsqrts 1, 1
  0102bec  lwz 3, 400(1)
  0102bf0  lfs 2, 400(1)
  0102bf4  rlwinm 3, 3, 3, 29, 29
  0102bf8  fabs 3, 2
  0102bfc  fabs 5, 1
  0102c00  stfs 1, 396(1)
  0102c04  fsubs 1, 5, 4
  0102c08  stfs 1, 404(1)
  0102c0c  lwz 4, 396(1)
  0102c10  lfs 1, 396(1)
  0102c14  lwz 5, 404(1)
  0102c18  lfs 2, 404(1)
  0102c1c  fabs 1, 1
  0102c20  rlwimi 3, 5, 2, 30, 30
  0102c24  fsub 6, 2, 26
  0102c28  fsub 7, 2, 26
  0102c2c  rlwimi 3, 4, 4, 28, 28
  0102c30  ori 4, 24, 0
  0102c34  rlwimi 4, 3, 2, 26, 28
  0102c38  slwi 3, 3, 2
  0102c3c  clrldi 4, 4, 32
  0102c40  fsel 4, 6, 1, 4
  0102c44  lfsx 1, 24, 3
  0102c48  lfs 2, 4(4)
  0102c4c  fsel 3, 7, 3, 5
  0102c50  fcmpu 0, 4, 26
  0102c54  bt 1, 0x102c60
  0102c58  fmr 23, 26
  0102c5c  b 0x102d78
  0102c60  fsubs 5, 3, 4
  0102c64  fadds 3, 3, 4
  0102c68  li 5, 2
  0102c6c  mtctr 5
  0102c70  fdivs 3, 5, 3
  0102c74  fmuls 4, 3, 3
  0102c78  stfs 3, 452(17)
  0102c7c  stfs 3, 456(17)
  0102c80  stfs 3, 460(17)
  0102c84  stfs 3, 464(17)
  0102c88  lfs 3, 464(1)
  0102c8c  addic 17, 1, 16
  0102c90  lfs 5, 456(1)
  0102c94  lfs 7, 460(1)
  0102c98  fmuls 6, 4, 4
  0102c9c  addic 3, 17, 436
  0102ca0  fmuls 5, 5, 4
  0102ca4  addic 4, 17, 452
  0102ca8  fmuls 8, 3, 6
  0102cac  fmuls 7, 7, 6
  0102cb0  fmuls 3, 6, 6
  0102cb4  stfs 5, 456(1)
  0102cb8  fmuls 4, 8, 4
  0102cbc  stfs 7, 460(1)
  0102cc0  stfs 4, 464(1)
  0102cc4  lfs 4, 436(17)
  0102cc8  fmuls 4, 4, 3
  0102ccc  stfs 4, 452(17)
  0102cd0  lfs 4, 4(3)
  0102cd4  addic 17, 17, 8
  0102cd8  addic 3, 3, 8
  0102cdc  fmuls 4, 4, 3
  0102ce0  stfs 4, 4(4)
  0102ce4  addic 4, 4, 8
  0102ce8  bdnz 0x102cc4
  0102cec  li 6, 4
  0102cf0  ori 3, 1, 0
  0102cf4  mtctr 6
  0102cf8  lis 4, 115
  0102cfc  addic 6, 3, 452
  0102d00  addic 4, 4, 22752
  0102d04  ori 7, 6, 0
  0102d08  lfs 3, 452(3)
  0102d0c  lfs 4, 0(4)
  0102d10  fmuls 3, 3, 4
  0102d14  lfs 4, 4(4)
  0102d18  addic 4, 4, 8
  0102d1c  stfs 3, 452(3)
  0102d20  lfs 3, 4(6)
  0102d24  addic 3, 3, 8
  0102d28  fmuls 3, 3, 4
  0102d2c  stfs 3, 4(6)
  0102d30  addic 6, 6, 8
  0102d34  bdnz 0x102d08
  0102d38  fmr 3, 26
  0102d3c  ori 3, 1, 0
  0102d40  mtctr 5
  0102d44  lfs 4, 452(3)
  0102d48  fadds 3, 3, 4
  0102d4c  addic 3, 3, 16
  0102d50  lfs 4, 4(7)
  0102d54  lfs 5, 8(7)
  0102d58  lfs 6, 12(7)
  0102d5c  addic 7, 7, 16
  0102d60  fadds 3, 3, 4
  0102d64  fadds 3, 3, 5
  0102d68  fadds 3, 3, 6
  0102d6c  bdnz 0x102d44
  0102d70  fadds 23, 3, 23
  0102d74  fmadds 23, 23, 1, 2
  0102d78  fabs 1, 23
  0102d7c  stfs 23, 84(30)
  0102d80  lfs 2, 84(23)
  0102d84  fcmpu 0, 1, 2
  0102d88  cror 6, 0, 2
  0102d8c  bt 6, 0x102d94
  0102d90  li 28, 2
  0102d94  fdivs 1, 28, 27
  0102d98  fsub 2, 26, 27
  0102d9c  fsub 3, 27, 26
  0102da0  fsel 28, 2, 28, 1
  0102da4  fsel 28, 3, 28, 1
  0102da8  fcmpu 0, 28, 26
  0102dac  bt 2, 0x102de0
  0102db0  li 4, 2
  0102db4  fmr 15, 28
  0102db8  ori 3, 30, 0
  0102dbc  mtctr 4
  0102dc0  lfs 1, 8(3)
  0102dc4  lfs 2, 24(3)
  0102dc8  fadds 1, 1, 28
  0102dcc  fadds 2, 2, 28
  0102dd0  stfs 1, 8(3)
  0102dd4  stfs 2, 24(3)
  0102dd8  addic 3, 3, 32
  0102ddc  bdnz 0x102dc0
  0102de0  lhz 3, 82(30)
  0102de4  sth 26, 80(30)
  0102de8  extsh 4, 3
  0102dec  cmpwi 4, 0
  0102df0  cmpwi 1, 4, -1
  0102df4  cmpwi 6, 4, 1
  0102df8  cmpwi 7, 4, 2
  0102dfc  bt 1, 0x102e08
  0102e00  bf 5, 0x1033f8
  0102e04  b 0x102e14
  0102e08  bf 25, 0x103098
  0102e0c  bf 29, 0x1032c8
  0102e10  b 0x1033f8
  0102e14  lfs 1, 12(23)
  0102e18  fcmpu 0, 14, 1
  0102e1c  cror 6, 0, 2
  0102e20  bt 6, 0x102e9c
  0102e24  lwz 4, 176(30)
  0102e28  lwz 5, 192(30)
  0102e2c  ori 3, 31, 0
  0102e30  li 6, 10
  0102e34  extsw 4, 4
  0102e38  extsw 5, 5
  0102e3c  bl 0xfddc0
  0102e40  ori 29, 20, 0
  0102e44  ori 25, 30, 0
  0102e48  lwz 3, 416(25)
  0102e4c  cmpwi 3, 0
  0102e50  bt 2, 0x102e58
  0102e54  stw 20, 8(3)
  0102e58  lbz 3, 353(25)
  0102e5c  cmpwi 3, 0
  0102e60  bt 2, 0x102e78
  0102e64  fmr 1, 26
  0102e68  addic 3, 25, 368
  0102e6c  li 4, 2
  0102e70  bl 0x501980
  0102e74  nop
  0102e78  addic 29, 29, 1
  0102e7c  stw 20, 276(25)
  0102e80  cmpwi 29, 2
  0102e84  addic 25, 25, 160
  0102e88  bt 0, 0x102e48
  0102e8c  li 3, 2
  0102e90  sth 3, 82(30)
  0102e94  stw 20, 260(30)
  0102e98  b 0x1033f8
  0102e9c  lfs 1, 88(23)
  0102ea0  fcmpu 0, 20, 1
  0102ea4  bt 1, 0x102eb0
  0102ea8  cmpwi 29, 0
  0102eac  bt 2, 0x102f38
  0102eb0  lwz 3, 260(30)
  0102eb4  addic 3, 3, 1
  0102eb8  cmpwi 3, 3
  0102ebc  stw 3, 260(30)
  0102ec0  bf 1, 0x1033f8
  0102ec4  lwz 4, 96(30)
  0102ec8  ori 3, 31, 0
  0102ecc  lwz 5, 112(30)
  0102ed0  li 6, 10
  0102ed4  extsw 4, 4
  0102ed8  extsw 5, 5
  0102edc  bl 0xfddc0
  0102ee0  ori 29, 20, 0
  0102ee4  ori 25, 30, 0
  0102ee8  lwz 3, 416(25)
  0102eec  cmpwi 3, 0
  0102ef0  bt 2, 0x102ef8
  0102ef4  stw 20, 8(3)
  0102ef8  lbz 3, 353(25)
  0102efc  cmpwi 3, 0
  0102f00  bt 2, 0x102f18
  0102f04  addic 3, 25, 368
  0102f08  fmr 1, 26
  0102f0c  li 4, 2
  0102f10  bl 0x501980
  0102f14  nop
  0102f18  addic 29, 29, 1
  0102f1c  stw 20, 276(25)
  0102f20  addic 25, 25, 160
  0102f24  cmpwi 29, 2
  0102f28  bt 0, 0x102ee8
  0102f2c  sth 21, 82(30)
  0102f30  stw 20, 260(30)
  0102f34  b 0x1033f8
  0102f38  lhz 4, 92(30)
  0102f3c  lbz 5, 82(31)
  0102f40  extsh 4, 4
  0102f44  cmpw 1, 5, 4
  0102f48  bf 6, 0x102f58
  0102f4c  ori 26, 18, 0
  0102f50  stw 20, 260(30)
  0102f54  b 0x1033f8
  0102f58  lbz 5, 83(31)
  0102f5c  cmpw 5, 4
  0102f60  bt 2, 0x1033f8
  0102f64  cmpwi 3, 0
  0102f68  fmr 28, 26
  0102f6c  stw 20, 260(30)
  0102f70  bf 2, 0x103020
  0102f74  bt 6, 0x103020
  0102f78  ori 29, 20, 0
  0102f7c  ori 25, 30, 0
  0102f80  and 3, 21, 26
  0102f84  cmpwi 3, 0
  0102f88  bf 2, 0x10300c
  0102f8c  lfs 1, 0(25)
  0102f90  lis 3, 15395
  0102f94  stfs 1, 144(1)
  0102f98  lfs 2, 4(25)
  0102f9c  ori 4, 3, 55050
  0102fa0  addic 3, 1, 160
  0102fa4  stfs 2, 148(1)
  0102fa8  lfs 3, 8(25)
  0102fac  li 5, 2
  0102fb0  lfs 4, 12(25)
  0102fb4  li 6, 0
  0102fb8  fadds 3, 3, 24
  0102fbc  li 7, 0
  0102fc0  stfs 4, 156(1)
  0102fc4  stw 4, 152(1)
  0102fc8  stfs 1, 160(1)
  0102fcc  addic 4, 1, 144
  0102fd0  stfs 2, 164(1)
  0102fd4  stfs 4, 172(1)
  0102fd8  stfs 3, 168(1)
  0102fdc  bl 0x57820
  0102fe0  nop
  0102fe4  cmpwi 3, 0
  0102fe8  fmr 1, 26
  0102fec  lfs 2, 8(25)
  0102ff0  bt 2, 0x102ff8
  0102ff4  lfs 1, 40(19)
  0102ff8  fsubs 1, 1, 2
  0102ffc  fcmpu 0, 28, 1
  0103000  cror 6, 1, 2
  0103004  bt 6, 0x10300c
  0103008  fmr 28, 1
  010300c  addic 29, 29, 2
  0103010  addic 25, 25, 32
  0103014  cmpwi 29, 4
  0103018  slwi 21, 21, 2
  010301c  bt 0, 0x102f80
  0103020  fcmpu 0, 28, 26
  0103024  bt 2, 0x1033f8
  0103028  lhz 4, 92(30)
  010302c  ori 3, 31, 0
  0103030  li 5, 0
  0103034  li 6, 10
  0103038  extsh 4, 4
  010303c  bl 0xfddc0
  0103040  ori 29, 20, 0
  0103044  ori 25, 30, 0
  0103048  lwz 3, 416(25)
  010304c  cmpwi 3, 0
  0103050  bt 2, 0x103058
  0103054  stw 20, 8(3)
  0103058  lbz 3, 353(25)
  010305c  cmpwi 3, 0
  0103060  bt 2, 0x103078
  0103064  fmr 1, 26
  0103068  addic 3, 25, 368
  010306c  li 4, 2
  0103070  bl 0x501980
  0103074  nop
  0103078  addic 29, 29, 1
  010307c  stw 20, 276(25)
  0103080  cmpwi 29, 2
  0103084  addic 25, 25, 160
  0103088  bt 0, 0x103048
  010308c  clrlwi 26, 26, 28
  0103090  xori 26, 26, 15
  0103094  b 0x1033f8
  0103098  lfs 1, 92(23)
  010309c  fcmpu 0, 20, 1
  01030a0  cror 6, 1, 2
  01030a4  bt 6, 0x1030b8
  01030a8  cmpwi 29, 0
  01030ac  bf 2, 0x1030b8
  01030b0  sth 20, 82(30)
  01030b4  b 0x1033f8
  01030b8  lbz 3, 82(31)
  01030bc  lwz 4, 96(30)
  01030c0  cmpw 3, 4
  01030c4  bf 2, 0x1033f8
  01030c8  lfs 1, 96(23)
  01030cc  lfs 2, 100(30)
  01030d0  fmuls 1, 2, 1
  01030d4  fcmpu 0, 20, 1
  01030d8  cror 6, 0, 2
  01030dc  bt 6, 0x1033f8
  01030e0  li 3, 10
  01030e4  and 3, 26, 3
  01030e8  cmpwi 3, 0
  01030ec  bf 2, 0x1033f8
  01030f0  clrlwi 3, 26, 31
  01030f4  cmpwi 3, 0
  01030f8  bt 2, 0x103160
  01030fc  lfs 1, 160(30)
  0103100  lfs 2, 152(30)
  0103104  fsubs 1, 25, 1
  0103108  fdivs 1, 1, 2
  010310c  lfs 2, 232(30)
  0103110  lfs 3, 240(30)
  0103114  lfs 4, 184(30)
  0103118  fmadds 1, 1, 2, 3
  010311c  fsubs 1, 1, 3
  0103120  fsubs 1, 1, 4
  0103124  bl 0x502758
  0103128  nop
  010312c  lfs 1, 248(30)
  0103130  ori 29, 3, 0
  0103134  lfs 2, 184(30)
  0103138  fsubs 1, 1, 2
  010313c  bl 0x502758
  0103140  nop
  0103144  lfs 1, 24(23)
  0103148  ori 26, 3, 0
  010314c  lfs 2, 188(30)
  0103150  fmuls 1, 2, 1
  0103154  bl 0x502758
  0103158  nop
  010315c  b 0x1031c0
  0103160  lfs 1, 164(30)
  0103164  lfs 2, 156(30)
  0103168  fsubs 1, 25, 1
  010316c  fdivs 1, 1, 2
  0103170  lfs 2, 236(30)
  0103174  lfs 3, 244(30)
  0103178  lfs 4, 184(30)
  010317c  fmadds 1, 1, 2, 3
  0103180  fsubs 1, 1, 3
  0103184  fsubs 1, 1, 4
  0103188  bl 0x502758
  010318c  nop
  0103190  lfs 1, 252(30)
  0103194  lfs 2, 184(30)
  0103198  ori 29, 3, 0
  010319c  fsubs 1, 1, 2
  01031a0  bl 0x502758
  01031a4  nop
  01031a8  lfs 1, 24(23)
  01031ac  lfs 2, 188(30)
  01031b0  ori 26, 3, 0
  01031b4  fmuls 1, 2, 1
  01031b8  bl 0x502758
  01031bc  nop
  01031c0  addc 27, 26, 3
  01031c4  ori 26, 20, 0
  01031c8  lfs 1, 188(30)
  01031cc  bl 0x502758
  01031d0  nop
  01031d4  addc 27, 27, 3
  01031d8  lfs 1, 188(30)
  01031dc  bl 0x502758
  01031e0  nop
  01031e4  divw 4, 27, 3
  01031e8  mullw 3, 4, 3
  01031ec  lfs 1, 188(30)
  01031f0  subc 3, 27, 3
  01031f4  extsw 27, 3
  01031f8  bl 0x502758
  01031fc  nop
  0103200  subc 4, 27, 29
  0103204  lfs 1, 188(30)
  0103208  addc 29, 4, 3
  010320c  bl 0x502758
  0103210  nop
  0103214  divw 4, 29, 3
  0103218  mullw 3, 4, 3
  010321c  lfs 1, 24(23)
  0103220  subc 29, 29, 3
  0103224  lfs 2, 188(30)
  0103228  fmuls 1, 2, 1
  010322c  bl 0x502758
  0103230  nop
  0103234  addc 6, 29, 3
  0103238  lwz 4, 176(30)
  010323c  ori 5, 27, 0
  0103240  ori 3, 31, 0
  0103244  extsw 6, 6
  0103248  extsw 4, 4
  010324c  bl 0xfddc0
  0103250  ori 29, 26, 0
  0103254  ori 27, 30, 0
  0103258  lwz 3, 416(27)
  010325c  cmpwi 3, 0
  0103260  bt 2, 0x103268
  0103264  stw 20, 8(3)
  0103268  lbz 3, 353(27)
  010326c  cmpwi 3, 0
  0103270  bt 2, 0x103288
  0103274  addic 3, 27, 368
  0103278  fmr 1, 26
  010327c  li 4, 2
  0103280  bl 0x501980
  0103284  nop
  0103288  addic 29, 29, 1
  010328c  stw 20, 276(27)
  0103290  addic 27, 27, 160
  0103294  cmpwi 29, 2
  0103298  bt 0, 0x103258
  010329c  lfs 1, 100(30)
  01032a0  fdivs 20, 20, 1
  01032a4  lfs 1, 180(30)
  01032a8  li 3, 2
  01032ac  ori 27, 20, 0
  01032b0  sth 3, 82(30)
  01032b4  fmuls 20, 20, 1
  01032b8  fdivs 1, 20, 1
  01032bc  fabs 1, 1
  01032c0  stfs 1, 88(31)
  01032c4  b 0x1033f8
  01032c8  lbz 3, 82(31)
  01032cc  lwz 4, 176(30)
  01032d0  cmpw 3, 4
  01032d4  bf 2, 0x1033f8
  01032d8  lfs 1, 100(23)
  01032dc  lfs 2, 100(30)
  01032e0  lfs 3, 104(23)
  01032e4  fmuls 1, 2, 1
  01032e8  fmuls 2, 2, 3
  01032ec  fcmpu 0, 20, 1
  01032f0  fcmpu 1, 20, 2
  01032f4  cror 2, 1, 2
  01032f8  bt 2, 0x1033f8
  01032fc  bt 4, 0x103308
  0103300  cmpwi 29, 0
  0103304  bf 2, 0x1033f8
  0103308  fcmpu 0, 14, 24
  010330c  cror 6, 1, 2
  0103310  bt 6, 0x1033f8
  0103314  lfs 1, 240(30)
  0103318  lfs 2, 188(30)
  010331c  fsubs 1, 25, 1
  0103320  fdivs 1, 1, 2
  0103324  lfs 2, 108(30)
  0103328  lfs 3, 160(30)
  010332c  lfs 4, 104(30)
  0103330  fmadds 1, 1, 2, 3
  0103334  fsubs 1, 1, 4
  0103338  bl 0x502758
  010333c  nop
  0103340  ori 29, 3, 0
  0103344  lfs 1, 108(30)
  0103348  bl 0x502758
  010334c  nop
  0103350  addc 3, 29, 3
  0103354  lfs 1, 108(30)
  0103358  addic 29, 3, 4
  010335c  bl 0x502758
  0103360  nop
  0103364  divw 4, 29, 3
  0103368  mullw 3, 4, 3
  010336c  lwz 4, 96(30)
  0103370  subc 5, 29, 3
  0103374  extsw 4, 4
  0103378  extsw 5, 5
  010337c  ori 3, 31, 0
  0103380  li 6, 10
  0103384  bl 0xfddc0
  0103388  ori 29, 20, 0
  010338c  ori 27, 30, 0
  0103390  lwz 3, 416(27)
  0103394  cmpwi 3, 0
  0103398  bt 2, 0x1033a0
  010339c  stw 20, 8(3)
  01033a0  lbz 3, 353(27)
  01033a4  cmpwi 3, 0
  01033a8  bt 2, 0x1033c0
  01033ac  fmr 1, 26
  01033b0  addic 3, 27, 368
  01033b4  li 4, 2
  01033b8  bl 0x501980
  01033bc  nop
  01033c0  addic 29, 29, 1
  01033c4  stw 20, 276(27)
  01033c8  cmpwi 29, 2
  01033cc  addic 27, 27, 160
  01033d0  bt 0, 0x103390
  01033d4  lfs 1, 180(30)
  01033d8  fdivs 20, 20, 1
  01033dc  lfs 1, 100(30)
  01033e0  ori 27, 20, 0
  01033e4  sth 21, 82(30)
  01033e8  fmuls 20, 20, 1
  01033ec  fdivs 1, 20, 1
  01033f0  fabs 1, 1
  01033f4  stfs 1, 88(31)
  01033f8  lfs 1, 16(31)
  01033fc  lfs 2, 20(31)
  0103400  addic 5, 1, 392
  0103404  fadds 1, 1, 21
  0103408  lfs 3, 24(31)
  010340c  fadds 2, 2, 22
  0103410  addic 6, 1, 112
  0103414  fadds 3, 3, 15
  0103418  addic 7, 1, 384
  010341c  addic 8, 1, 388
  0103420  ori 3, 31, 0
  0103424  li 4, 0
  0103428  stfs 1, 16(31)
  010342c  stfs 2, 20(31)
  0103430  stfs 3, 24(31)
  0103434  bl 0xf00a0
  0103438  nop
  010343c  lfs 15, 16(31)
  0103440  lfs 1, 112(1)
  0103444  lfs 28, 20(31)
  0103448  lfs 2, 116(1)
  010344c  fsubs 15, 15, 1
  0103450  lfs 27, 24(31)
  0103454  lfs 1, 120(1)
  0103458  fsubs 28, 28, 2
  010345c  fsubs 27, 27, 1
  0103460  addic 3, 1, 112
  0103464  lfs 1, 384(1)
  0103468  li 6, 4
  010346c  ori 7, 31, 0
  0103470  lfs 2, 388(1)
  0103474  bl 0x5c710
  0103478  nop
  010347c  cmpwi 3, 0
  0103480  bt 2, 0x1034b4
  0103484  lfs 1, 48(19)
  0103488  addic 20, 20, 1
  010348c  lfs 2, 52(19)
  0103490  ori 28, 28, 1
  0103494  stfs 1, 112(1)
  0103498  cmpwi 20, 8
  010349c  lfs 1, 56(19)
  01034a0  stfs 2, 116(1)
  01034a4  lfs 2, 60(19)
  01034a8  stfs 1, 120(1)
  01034ac  stfs 2, 124(1)
  01034b0  bt 0, 0x103460
  01034b4  lfs 2, 116(1)
  01034b8  fmuls 1, 22, 22
  01034bc  lfs 3, 20(31)
  01034c0  lfs 4, 112(1)
  01034c4  fsubs 3, 2, 3
  01034c8  lfs 5, 16(31)
  01034cc  fsubs 5, 4, 5
  01034d0  lfs 6, 120(1)
  01034d4  fadds 4, 4, 15
  01034d8  lfs 7, 124(1)
  01034dc  fmadds 1, 21, 21, 1
  01034e0  fmuls 3, 3, 3
  01034e4  fadds 2, 2, 28
  01034e8  stfs 7, 28(31)
  01034ec  fsqrts 1, 1
  01034f0  stfs 4, 16(31)
  01034f4  stfs 2, 20(31)
  01034f8  fmadds 3, 5, 5, 3
  01034fc  fadds 5, 6, 27
  0103500  fsqrts 3, 3
  0103504  stfs 5, 24(31)
  0103508  fmuls 1, 1, 24
  010350c  fcmpu 0, 3, 1
  0103510  cror 6, 1, 2
  0103514  bt 6, 0x10351c
  0103518  ori 28, 28, 2
  010351c  lbz 7, 272(30)
  0103520  ori 3, 31, 0
  0103524  lbz 8, 273(30)
  0103528  addic 5, 1, 432
  010352c  stw 7, 432(1)
  0103530  li 4, 5
  0103534  lbz 7, 432(30)
  0103538  ori 6, 30, 0
  010353c  stw 8, 436(1)
  0103540  lbz 8, 433(30)
  0103544  stw 7, 440(1)
  0103548  lwz 7, 264(30)
  010354c  stw 8, 444(1)
  0103550  stw 7, 448(1)
  0103554  bl 0xf1238
  0103558  nop
  010355c  clrlwi 3, 26, 28
  0103560  lfs 2, 256(30)
  0103564  lbz 26, 83(31)
  0103568  cmpwi 3, 0
  010356c  lhz 3, 92(30)
  0103570  bt 2, 0x10362c
  0103574  lwz 4, 88(31)
  0103578  lfs 1, 88(31)
  010357c  cmpwi 4, 0
  0103580  bt 2, 0x10362c
  0103584  lfs 3, 72(31)
  0103588  fadds 4, 3, 16
  010358c  fsubs 5, 17, 3
  0103590  fsubs 6, 18, 3
  0103594  fsubs 7, 17, 4
  0103598  fsub 8, 3, 5
  010359c  fsubs 9, 18, 4
  01035a0  fsub 10, 4, 7
  01035a4  fsel 3, 8, 5, 3
  01035a8  fsel 4, 10, 7, 4
  01035ac  fsub 5, 6, 3
  01035b0  fsub 7, 9, 4
  01035b4  fsel 3, 5, 6, 3
  01035b8  fsel 4, 7, 9, 4
  01035bc  fmuls 5, 3, 3
  01035c0  fmuls 6, 4, 4
  01035c4  fmuls 7, 5, 3
  01035c8  fmuls 8, 6, 4
  01035cc  fmuls 9, 5, 7
  01035d0  fmadds 3, 7, 19, 3
  01035d4  fmuls 7, 6, 8
  01035d8  fmadds 4, 8, 19, 4
  01035dc  fmuls 8, 5, 9
  01035e0  fmadds 3, 9, 29, 3
  01035e4  fmuls 9, 6, 7
  01035e8  fmadds 4, 7, 29, 4
  01035ec  fmuls 5, 5, 8
  01035f0  fmadds 3, 8, 30, 3
  01035f4  fmuls 6, 6, 9
  01035f8  fmadds 4, 9, 30, 4
  01035fc  fmadds 3, 5, 31, 3
  0103600  fmadds 4, 6, 31, 4
  0103604  fmuls 3, 3, 22
  0103608  fmadds 3, 4, 21, 3
  010360c  fsub 4, 2, 26
  0103610  fdivs 1, 3, 1
  0103614  lfs 3, 108(23)
  0103618  fsel 2, 4, 2, 26
  010361c  fadds 1, 2, 1
  0103620  fadds 1, 1, 2
  0103624  fmuls 1, 1, 3
  0103628  stfs 1, 256(30)
  010362c  extsh 3, 3
  0103630  cmpwi 1, 27, 0
  0103634  cmpw 26, 3
  0103638  bf 2, 0x103648
  010363c  lis 3, 16256
  0103640  stw 3, 88(31)
  0103644  b 0x10365c
  0103648  bt 6, 0x10365c
  010364c  lfs 1, 4(27)
  0103650  fdivs 1, 20, 1
  0103654  fabs 1, 1
  0103658  stfs 1, 88(31)
  010365c  ori 3, 28, 0
  0103660  ld 0, 832(1)
  0103664  mtlr 0
  0103668  lfd 14, 672(1)
  010366c  lfd 15, 680(1)
  0103670  lfd 16, 688(1)
  0103674  lfd 17, 696(1)
  0103678  lfd 18, 704(1)
  010367c  lfd 19, 712(1)
  0103680  lfd 20, 720(1)
  0103684  lfd 21, 728(1)
  0103688  lfd 22, 736(1)
  010368c  lfd 23, 744(1)
  0103690  lfd 24, 752(1)
  0103694  lfd 25, 760(1)
  0103698  lfd 26, 768(1)
  010369c  lfd 27, 776(1)
  01036a0  lfd 28, 784(1)
  01036a4  lfd 29, 792(1)
  01036a8  lfd 30, 800(1)
  01036ac  lfd 31, 808(1)
  01036b0  ld 16, 544(1)
  01036b4  ld 17, 552(1)
  01036b8  ld 18, 560(1)
  01036bc  ld 19, 568(1)
  01036c0  ld 20, 576(1)
  01036c4  ld 21, 584(1)
  01036c8  ld 22, 592(1)
  01036cc  ld 23, 600(1)
  01036d0  ld 24, 608(1)
  01036d4  ld 25, 616(1)
  01036d8  ld 26, 624(1)
  01036dc  ld 27, 632(1)
  01036e0  ld 28, 640(1)
  01036e4  ld 29, 648(1)
  01036e8  ld 30, 656(1)
  01036ec  ld 31, 664(1)
  01036f0  addi 1, 1, 816
  01036f4  blr

MB_UpdateLegAnimMoveTurning:   # 0x103710, 0x3a0 bytes
  0103710  stdu 1, -256(1)
  0103714  mflr 0
  0103718  std 0, 272(1)
  010371c  stfd 29, 232(1)
  0103720  stfd 30, 240(1)
  0103724  stfd 31, 248(1)
  0103728  lfs 2, 0(6)
  010372c  lfs 3, 16(3)
  0103730  lis 7, 16
  0103734  lfs 4, 4(6)
  0103738  lfs 5, 20(3)
  010373c  fsubs 2, 2, 3
  0103740  addi 7, 7, 14072
  0103744  fsubs 3, 4, 5
  0103748  fmr 31, 1
  010374c  std 27, 192(1)
  0103750  lis 8, 115
  0103754  std 26, 184(1)
  0103758  li 27, 0
  010375c  addic 8, 8, 22784
  0103760  std 31, 224(1)
  0103764  ori 26, 27, 0
  0103768  ori 31, 3, 0
  010376c  fabs 5, 2
  0103770  fabs 6, 3
  0103774  stfs 2, 112(1)
  0103778  std 30, 216(1)
  010377c  stfs 3, 116(1)
  0103780  std 29, 208(1)
  0103784  ori 30, 4, 0
  0103788  std 28, 200(1)
  010378c  ori 29, 5, 0
  0103790  ori 28, 6, 0
  0103794  fsubs 2, 5, 6
  0103798  stfs 2, 120(1)
  010379c  lwz 9, 112(1)
  01037a0  lfs 29, 0(7)
  01037a4  lfs 1, 112(1)
  01037a8  lwz 7, 116(1)
  01037ac  lfs 2, 116(1)
  01037b0  fabs 3, 1
  01037b4  lfs 1, 60(4)
  01037b8  rlwinm 7, 7, 3, 29, 29
  01037bc  fabs 7, 2
  01037c0  lfs 2, 64(4)
  01037c4  lwz 10, 120(1)
  01037c8  lfs 4, 120(1)
  01037cc  rlwimi 7, 10, 2, 30, 30
  01037d0  fsub 8, 4, 29
  01037d4  rlwimi 7, 9, 4, 28, 28
  01037d8  fsub 9, 4, 29
  01037dc  ori 9, 8, 0
  01037e0  rlwimi 9, 7, 2, 26, 28
  01037e4  slwi 7, 7, 2
  01037e8  clrldi 9, 9, 32
  01037ec  fsel 6, 8, 3, 6
  01037f0  lfs 3, 68(4)
  01037f4  lfsx 30, 8, 7
  01037f8  fsel 5, 9, 7, 5
  01037fc  lfs 4, 4(9)
  0103800  fcmpu 0, 6, 29
  0103804  bt 1, 0x103810
  0103808  fmr 30, 29
  010380c  b 0x103934
  0103810  fsubs 7, 5, 6
  0103814  fadds 5, 5, 6
  0103818  addic 3, 1, 16
  010381c  li 6, 2
  0103820  addic 5, 3, 124
  0103824  addic 4, 3, 108
  0103828  mtctr 6
  010382c  fdivs 5, 7, 5
  0103830  fmuls 6, 5, 5
  0103834  stfs 5, 136(1)
  0103838  stfs 5, 128(1)
  010383c  stfs 5, 132(1)
  0103840  stfs 5, 124(1)
  0103844  lfs 8, 136(1)
  0103848  lfs 9, 128(1)
  010384c  lfs 10, 132(1)
  0103850  fmuls 7, 6, 6
  0103854  fmuls 9, 9, 6
  0103858  fmuls 8, 8, 7
  010385c  fmuls 5, 7, 7
  0103860  fmuls 7, 10, 7
  0103864  stfs 9, 128(1)
  0103868  fmuls 6, 8, 6
  010386c  stfs 7, 132(1)
  0103870  stfs 6, 136(1)
  0103874  lfs 6, 108(3)
  0103878  fmuls 6, 6, 5
  010387c  stfs 6, 124(3)
  0103880  lfs 6, 4(4)
  0103884  addic 4, 4, 8
  0103888  fmuls 6, 6, 5
  010388c  addic 3, 3, 8
  0103890  stfs 6, 4(5)
  0103894  addic 5, 5, 8
  0103898  bdnz 0x103874
  010389c  li 5, 4
  01038a0  ori 3, 1, 0
  01038a4  mtctr 5
  01038a8  lis 4, 115
  01038ac  addic 5, 3, 124
  01038b0  addic 4, 4, 22752
  01038b4  ori 7, 5, 0
  01038b8  lfs 5, 124(3)
  01038bc  lfs 6, 0(4)
  01038c0  fmuls 5, 5, 6
  01038c4  lfs 6, 4(4)
  01038c8  addic 4, 4, 8
  01038cc  stfs 5, 124(3)
  01038d0  lfs 5, 4(5)
  01038d4  addic 3, 3, 8
  01038d8  fmuls 5, 5, 6
  01038dc  stfs 5, 4(5)
  01038e0  addic 5, 5, 8
  01038e4  bdnz 0x1038b8
  01038e8  ori 3, 1, 0
  01038ec  fmr 5, 29
  01038f0  mtctr 6
  01038f4  lfs 6, 124(3)
  01038f8  fadds 5, 5, 6
  01038fc  lfs 6, 4(7)
  0103900  addic 3, 3, 16
  0103904  lfs 7, 8(7)
  0103908  lfs 8, 12(7)
  010390c  addic 7, 7, 16
  0103910  fadds 5, 5, 6
  0103914  fadds 5, 5, 7
  0103918  fadds 5, 5, 8
  010391c  bdnz 0x1038f4
  0103920  lis 3, 16
  0103924  addi 3, 3, 14072
  0103928  lfs 6, 4(3)
  010392c  fadds 5, 5, 6
  0103930  fmadds 30, 5, 30, 4
  0103934  fmr 4, 3
  0103938  addic 5, 30, 20
  010393c  fmr 3, 2
  0103940  ori 3, 31, 0
  0103944  fmr 2, 1
  0103948  fmr 1, 30
  010394c  bl 0xff2e8
  0103950  fmr 1, 30
  0103954  lfs 2, 72(31)
  0103958  bl 0x5026a0
  010395c  nop
  0103960  fmr 30, 1
  0103964  lfs 1, 40(30)
  0103968  fcmpu 0, 30, 1
  010396c  bt 0, 0x103974
  0103970  li 27, 16
  0103974  addic 3, 30, 72
  0103978  bl 0x4fff60
  010397c  nop
  0103980  lfs 1, 40(30)
  0103984  lwz 3, 72(30)
  0103988  fcmpu 0, 30, 1
  010398c  cror 6, 1, 2
  0103990  bt 6, 0x1039f0
  0103994  lis 4, 16
  0103998  lis 5, 114
  010399c  vspltisw 3, -1
  01039a0  addi 4, 4, 14072
  01039a4  li 6, 8
  01039a8  li 7, -3056
  01039ac  vslw 3, 3, 3
  01039b0  lfs 1, 8(4)
  01039b4  lfs 2, -3056(5)
  01039b8  <unknown>
  01039bc  fmuls 1, 2, 1
  01039c0  vspltw 2, 2, 0
  01039c4  <unknown>
  01039c8  vmaddfp 2, 4, 2, 3
  01039cc  fctiwz 1, 1
  01039d0  vctsxs 2, 2, 0
  01039d4  stfd 1, 160(1)
  01039d8  lwz 4, 164(1)
  01039dc  cmpw 3, 4
  01039e0  bf 0, 0x1039f0
  01039e4  vspltw 2, 2, 0
  01039e8  li 3, 72
  01039ec  stvewx 2, 3, 30
  01039f0  lis 3, 16
  01039f4  fmr 1, 31
  01039f8  ori 4, 29, 0
  01039fc  fmr 3, 29
  0103a00  addi 29, 3, 14072
  0103a04  ori 3, 31, 0
  0103a08  li 5, 1
  0103a0c  lfs 2, 12(29)
  0103a10  bl 0x102168
  0103a14  lfs 7, 16(29)
  0103a18  or 27, 27, 3
  0103a1c  lfs 31, 16(31)
  0103a20  fcmpu 0, 30, 7
  0103a24  lfs 1, 0(28)
  0103a28  extsw 27, 27
  0103a2c  lfs 2, 20(31)
  0103a30  lfs 3, 4(28)
  0103a34  lfs 4, 24(31)
  0103a38  lfs 5, 8(28)
  0103a3c  lfs 6, 44(30)
  0103a40  cror 6, 0, 2
  0103a44  bt 6, 0x103a4c
  0103a48  rlwimi 27, 26, 0, 30, 30
  0103a4c  fsubs 2, 2, 3
  0103a50  fsubs 1, 31, 1
  0103a54  fsubs 3, 4, 5
  0103a58  fmuls 2, 2, 2
  0103a5c  fmadds 1, 1, 1, 2
  0103a60  fmadds 1, 3, 3, 1
  0103a64  fsqrts 1, 1
  0103a68  fcmpu 0, 1, 6
  0103a6c  cror 6, 1, 2
  0103a70  bt 6, 0x103a78
  0103a74  ori 27, 27, 4
  0103a78  ori 3, 27, 0
  0103a7c  ld 0, 272(1)
  0103a80  mtlr 0
  0103a84  lfd 29, 232(1)
  0103a88  lfd 30, 240(1)
  0103a8c  lfd 31, 248(1)
  0103a90  ld 26, 184(1)
  0103a94  ld 27, 192(1)
  0103a98  ld 28, 200(1)
  0103a9c  ld 29, 208(1)
  0103aa0  ld 30, 216(1)
  0103aa4  ld 31, 224(1)
  0103aa8  addi 1, 1, 256
  0103aac  blr

MB_LerpRot:   # 0x103ab0, 0x54 bytes
  0103ab0  stdu 1, -128(1)
  0103ab4  mflr 0
  0103ab8  std 0, 144(1)
  0103abc  stfd 30, 112(1)
  0103ac0  stfd 31, 120(1)
  0103ac4  fmr 31, 1
  0103ac8  fmr 30, 3
  0103acc  fmr 1, 2
  0103ad0  fmr 2, 31
  0103ad4  bl 0x5025e0
  0103ad8  nop
  0103adc  fmuls 2, 30, 1
  0103ae0  fmr 1, 31
  0103ae4  bl 0x502578
  0103ae8  nop
  0103aec  ld 0, 144(1)
  0103af0  mtlr 0
  0103af4  lfd 30, 112(1)
  0103af8  lfd 31, 120(1)
  0103afc  addi 1, 1, 128
  0103b00  blr

MB_OrbitAndFaceTarget:   # 0x103b50, 0x6c4 bytes
  0103b50  stdu 1, -320(1)
  0103b54  mflr 0
  0103b58  std 0, 336(1)
  0103b5c  stfd 27, 280(1)
  0103b60  stfd 28, 288(1)
  0103b64  stfd 29, 296(1)
  0103b68  stfd 30, 304(1)
  0103b6c  stfd 31, 312(1)
  0103b70  fmr 31, 1
  0103b74  lis 6, 16
  0103b78  addi 6, 6, 15108
  0103b7c  fmr 30, 2
  0103b80  lfs 1, 0(6)
  0103b84  lfs 3, 4(6)
  0103b88  fadds 1, 31, 1
  0103b8c  fsubs 5, 3, 31
  0103b90  std 27, 240(1)
  0103b94  lfs 4, 8(6)
  0103b98  fsubs 6, 4, 31
  0103b9c  std 31, 272(1)
  0103ba0  li 27, 0
  0103ba4  std 25, 224(1)
  0103ba8  ori 31, 3, 0
  0103bac  ori 25, 27, 0
  0103bb0  fsubs 3, 3, 1
  0103bb4  fsub 7, 31, 5
  0103bb8  std 30, 264(1)
  0103bbc  fsubs 4, 4, 1
  0103bc0  ori 30, 4, 0
  0103bc4  lis 3, 115
  0103bc8  fsub 8, 1, 3
  0103bcc  fsel 5, 7, 5, 31
  0103bd0  lfs 7, 12(6)
  0103bd4  std 29, 256(1)
  0103bd8  addic 3, 3, 22784
  0103bdc  ori 29, 5, 0
  0103be0  fsel 1, 8, 3, 1
  0103be4  std 28, 248(1)
  0103be8  fsub 3, 6, 5
  0103bec  ori 28, 8, 0
  0103bf0  fsub 9, 4, 1
  0103bf4  fsel 3, 3, 6, 5
  0103bf8  lfs 5, 16(6)
  0103bfc  lfs 2, 20(6)
  0103c00  lfs 6, 4(5)
  0103c04  lfs 8, 24(6)
  0103c08  lfs 11, 0(5)
  0103c0c  fsel 1, 9, 4, 1
  0103c10  fmuls 4, 3, 3
  0103c14  fmuls 9, 1, 1
  0103c18  fmuls 10, 4, 3
  0103c1c  fmuls 12, 9, 1
  0103c20  fmuls 13, 4, 10
  0103c24  fmadds 3, 10, 7, 3
  0103c28  lfs 10, 8(5)
  0103c2c  lfs 0, 12(5)
  0103c30  fmuls 29, 9, 12
  0103c34  fmadds 1, 12, 7, 1
  0103c38  fmuls 7, 4, 13
  0103c3c  fmadds 3, 13, 5, 3
  0103c40  fmuls 12, 9, 29
  0103c44  fmadds 1, 29, 5, 1
  0103c48  fmuls 4, 4, 7
  0103c4c  fmadds 3, 7, 2, 3
  0103c50  fmuls 5, 9, 12
  0103c54  fmadds 1, 12, 2, 1
  0103c58  fmadds 2, 4, 8, 3
  0103c5c  fmadds 1, 5, 8, 1
  0103c60  fmadds 2, 2, 30, 6
  0103c64  fmadds 1, 1, 30, 11
  0103c68  stfs 2, 116(1)
  0103c6c  lfs 27, 28(6)
  0103c70  stw 25, 12(8)
  0103c74  stw 25, 8(8)
  0103c78  stw 25, 4(8)
  0103c7c  stw 25, 0(8)
  0103c80  lfs 3, 16(31)
  0103c84  lfs 4, 20(31)
  0103c88  fsubs 5, 1, 3
  0103c8c  fsubs 2, 2, 4
  0103c90  fabs 7, 5
  0103c94  fabs 8, 2
  0103c98  stfs 5, 140(1)
  0103c9c  stfs 2, 144(1)
  0103ca0  stfs 1, 112(1)
  0103ca4  fsubs 2, 7, 8
  0103ca8  stfs 2, 148(1)
  0103cac  lwz 7, 140(1)
  0103cb0  lfs 1, 140(1)
  0103cb4  lwz 9, 144(1)
  0103cb8  lfs 2, 144(1)
  0103cbc  stfs 0, 124(1)
  0103cc0  fabs 1, 1
  0103cc4  stfs 10, 120(1)
  0103cc8  rlwinm 9, 9, 3, 29, 29
  0103ccc  lfs 5, 0(5)
  0103cd0  lfs 6, 4(5)
  0103cd4  lwz 4, 148(1)
  0103cd8  lfs 9, 148(1)
  0103cdc  rlwimi 9, 4, 2, 30, 30
  0103ce0  fabs 2, 2
  0103ce4  fsub 10, 9, 27
  0103ce8  ori 5, 3, 0
  0103cec  fsub 9, 9, 27
  0103cf0  rlwimi 9, 7, 4, 28, 28
  0103cf4  rlwimi 5, 9, 2, 26, 28
  0103cf8  slwi 4, 9, 2
  0103cfc  clrldi 5, 5, 32
  0103d00  lfsx 29, 3, 4
  0103d04  fsel 8, 10, 1, 8
  0103d08  lfs 1, 4(5)
  0103d0c  fsel 7, 9, 2, 7
  0103d10  lfs 2, 32(6)
  0103d14  std 26, 232(1)
  0103d18  fcmpu 0, 8, 27
  0103d1c  bt 1, 0x103d28
  0103d20  fmr 29, 27
  0103d24  b 0x103e40
  0103d28  fsubs 9, 7, 8
  0103d2c  fadds 7, 7, 8
  0103d30  addic 4, 1, 16
  0103d34  li 8, 2
  0103d38  addic 5, 4, 168
  0103d3c  addic 6, 4, 184
  0103d40  mtctr 8
  0103d44  fdivs 7, 9, 7
  0103d48  fmuls 8, 7, 7
  0103d4c  stfs 7, 196(1)
  0103d50  stfs 7, 188(1)
  0103d54  stfs 7, 192(1)
  0103d58  stfs 7, 184(1)
  0103d5c  lfs 10, 196(1)
  0103d60  lfs 11, 188(1)
  0103d64  lfs 12, 192(1)
  0103d68  fmuls 9, 8, 8
  0103d6c  fmuls 11, 11, 8
  0103d70  fmuls 10, 10, 9
  0103d74  fmuls 7, 9, 9
  0103d78  fmuls 9, 12, 9
  0103d7c  stfs 11, 188(1)
  0103d80  fmuls 8, 10, 8
  0103d84  stfs 9, 192(1)
  0103d88  stfs 8, 196(1)
  0103d8c  lfs 8, 168(4)
  0103d90  fmuls 8, 8, 7
  0103d94  stfs 8, 184(4)
  0103d98  lfs 8, 4(5)
  0103d9c  addic 4, 4, 8
  0103da0  addic 5, 5, 8
  0103da4  fmuls 8, 8, 7
  0103da8  stfs 8, 4(6)
  0103dac  addic 6, 6, 8
  0103db0  bdnz 0x103d8c
  0103db4  li 6, 4
  0103db8  ori 4, 1, 0
  0103dbc  mtctr 6
  0103dc0  lis 5, 115
  0103dc4  addic 6, 4, 184
  0103dc8  addic 5, 5, 22752
  0103dcc  ori 7, 6, 0
  0103dd0  lfs 7, 184(4)
  0103dd4  lfs 8, 0(5)
  0103dd8  fmuls 7, 7, 8
  0103ddc  lfs 8, 4(5)
  0103de0  addic 5, 5, 8
  0103de4  stfs 7, 184(4)
  0103de8  lfs 7, 4(6)
  0103dec  addic 4, 4, 8
  0103df0  fmuls 7, 7, 8
  0103df4  stfs 7, 4(6)
  0103df8  addic 6, 6, 8
  0103dfc  bdnz 0x103dd0
  0103e00  fmr 7, 27
  0103e04  ori 4, 1, 0
  0103e08  mtctr 8
  0103e0c  lfs 8, 184(4)
  0103e10  fadds 7, 7, 8
  0103e14  addic 4, 4, 16
  0103e18  lfs 8, 4(7)
  0103e1c  lfs 9, 8(7)
  0103e20  lfs 10, 12(7)
  0103e24  addic 7, 7, 16
  0103e28  fadds 7, 7, 8
  0103e2c  fadds 7, 7, 9
  0103e30  fadds 7, 7, 10
  0103e34  bdnz 0x103e0c
  0103e38  fadds 7, 7, 2
  0103e3c  fmadds 29, 7, 29, 1
  0103e40  fsubs 1, 3, 5
  0103e44  fsubs 3, 4, 6
  0103e48  fabs 4, 1
  0103e4c  fabs 5, 3
  0103e50  stfs 1, 128(1)
  0103e54  stfs 3, 132(1)
  0103e58  fsubs 1, 4, 5
  0103e5c  stfs 1, 136(1)
  0103e60  lwz 4, 128(1)
  0103e64  lfs 1, 128(1)
  0103e68  lwz 5, 132(1)
  0103e6c  lfs 3, 132(1)
  0103e70  lwz 6, 136(1)
  0103e74  rlwinm 5, 5, 3, 29, 29
  0103e78  fabs 6, 3
  0103e7c  lfs 3, 136(1)
  0103e80  fabs 1, 1
  0103e84  rlwimi 5, 6, 2, 30, 30
  0103e88  fsub 7, 3, 27
  0103e8c  fsub 8, 3, 27
  0103e90  rlwimi 5, 4, 4, 28, 28
  0103e94  ori 4, 3, 0
  0103e98  rlwimi 4, 5, 2, 26, 28
  0103e9c  slwi 5, 5, 2
  0103ea0  clrldi 4, 4, 32
  0103ea4  fsel 5, 7, 1, 5
  0103ea8  lfsx 3, 3, 5
  0103eac  fsel 4, 8, 6, 4
  0103eb0  lfs 1, 4(4)
  0103eb4  fcmpu 0, 5, 27
  0103eb8  bt 1, 0x103ec4
  0103ebc  fmr 28, 27
  0103ec0  b 0x103fdc
  0103ec4  fsubs 6, 4, 5
  0103ec8  fadds 4, 4, 5
  0103ecc  addic 3, 1, 16
  0103ed0  li 7, 2
  0103ed4  addic 5, 3, 152
  0103ed8  addic 4, 3, 136
  0103edc  mtctr 7
  0103ee0  fdivs 4, 6, 4
  0103ee4  fmuls 5, 4, 4
  0103ee8  stfs 4, 164(1)
  0103eec  stfs 4, 156(1)
  0103ef0  stfs 4, 160(1)
  0103ef4  stfs 4, 152(1)
  0103ef8  lfs 7, 164(1)
  0103efc  lfs 8, 156(1)
  0103f00  lfs 9, 160(1)
  0103f04  fmuls 6, 5, 5
  0103f08  fmuls 8, 8, 5
  0103f0c  fmuls 7, 7, 6
  0103f10  fmuls 4, 6, 6
  0103f14  fmuls 6, 9, 6
  0103f18  stfs 8, 156(1)
  0103f1c  fmuls 5, 7, 5
  0103f20  stfs 6, 160(1)
  0103f24  stfs 5, 164(1)
  0103f28  lfs 5, 136(3)
  0103f2c  fmuls 5, 5, 4
  0103f30  stfs 5, 152(3)
  0103f34  lfs 5, 4(4)
  0103f38  addic 4, 4, 8
  0103f3c  fmuls 5, 5, 4
  0103f40  addic 3, 3, 8
  0103f44  stfs 5, 4(5)
  0103f48  addic 5, 5, 8
  0103f4c  bdnz 0x103f28
  0103f50  li 5, 4
  0103f54  ori 3, 1, 0
  0103f58  mtctr 5
  0103f5c  lis 4, 115
  0103f60  addic 5, 3, 152
  0103f64  addic 4, 4, 22752
  0103f68  ori 6, 5, 0
  0103f6c  lfs 4, 152(3)
  0103f70  lfs 5, 0(4)
  0103f74  fmuls 4, 4, 5
  0103f78  lfs 5, 4(4)
  0103f7c  addic 4, 4, 8
  0103f80  stfs 4, 152(3)
  0103f84  lfs 4, 4(5)
  0103f88  addic 3, 3, 8
  0103f8c  fmuls 4, 4, 5
  0103f90  stfs 4, 4(5)
  0103f94  addic 5, 5, 8
  0103f98  bdnz 0x103f6c
  0103f9c  ori 3, 1, 0
  0103fa0  fmr 28, 27
  0103fa4  mtctr 7
  0103fa8  lfs 4, 152(3)
  0103fac  lfs 5, 4(6)
  0103fb0  fadds 4, 28, 4
  0103fb4  lfs 6, 8(6)
  0103fb8  lfs 28, 12(6)
  0103fbc  addic 3, 3, 16
  0103fc0  addic 6, 6, 16
  0103fc4  fadds 4, 4, 5
  0103fc8  fadds 4, 4, 6
  0103fcc  fadds 28, 4, 28
  0103fd0  bdnz 0x103fa8
  0103fd4  fadds 28, 28, 2
  0103fd8  fmadds 28, 28, 3, 1
  0103fdc  fmr 1, 31
  0103fe0  ori 26, 27, 0
  0103fe4  fmr 2, 28
  0103fe8  bl 0x5026a0
  0103fec  nop
  0103ff0  fmr 5, 1
  0103ff4  lis 3, 16
  0103ff8  lfs 1, 16(31)
  0103ffc  addi 3, 3, 15108
  0104000  lfs 6, 36(3)
  0104004  lfs 2, 0(29)
  0104008  lfs 3, 20(31)
  010400c  fcmpu 0, 5, 6
  0104010  lfs 4, 4(29)
  0104014  cror 6, 1, 2
  0104018  bt 6, 0x104020
  010401c  li 26, 1
  0104020  fsubs 5, 3, 4
  0104024  fsubs 6, 1, 2
  0104028  fmuls 5, 5, 5
  010402c  fmadds 5, 6, 6, 5
  0104030  fsqrts 5, 5
  0104034  fcmpu 0, 5, 30
  0104038  cror 6, 0, 2
  010403c  bt 6, 0x10406c
  0104040  fmr 1, 28
  0104044  lis 3, 16
  0104048  addi 3, 3, 15108
  010404c  lfs 2, 40(3)
  0104050  bl 0x502578
  0104054  nop
  0104058  fmr 28, 1
  010405c  lfs 1, 16(31)
  0104060  lfs 2, 0(29)
  0104064  lfs 3, 20(31)
  0104068  lfs 4, 4(29)
  010406c  fsubs 3, 3, 4
  0104070  fsubs 1, 1, 2
  0104074  lis 3, 16
  0104078  addi 3, 3, 15108
  010407c  fmuls 2, 3, 3
  0104080  cmpwi 26, 0
  0104084  fmadds 1, 1, 1, 2
  0104088  lfs 2, 44(3)
  010408c  fsqrts 1, 1
  0104090  fsubs 1, 30, 1
  0104094  fdivs 1, 1, 30
  0104098  fabs 1, 1
  010409c  fsub 3, 2, 1
  01040a0  fsel 30, 3, 1, 2
  01040a4  fsub 1, 30, 27
  01040a8  fsel 30, 1, 30, 27
  01040ac  bt 2, 0x1040b8
  01040b0  fmr 30, 27
  01040b4  b 0x104110
  01040b8  fmr 1, 31
  01040bc  fmr 2, 28
  01040c0  bl 0x5025e0
  01040c4  nop
  01040c8  fcmpu 0, 1, 27
  01040cc  cror 6, 0, 2
  01040d0  bt 6, 0x1040f4
  01040d4  fmr 1, 28
  01040d8  lis 3, 16
  01040dc  addi 3, 3, 15108
  01040e0  lfs 2, 48(3)
  01040e4  bl 0x502578
  01040e8  nop
  01040ec  fmr 29, 1
  01040f0  b 0x104110
  01040f4  fmr 1, 28
  01040f8  lis 3, 16
  01040fc  addi 3, 3, 15108
  0104100  lfs 2, 52(3)
  0104104  bl 0x502578
  0104108  nop
  010410c  fmr 29, 1
  0104110  fmr 1, 28
  0104114  fmr 2, 29
  0104118  bl 0x5025e0
  010411c  nop
  0104120  fmuls 2, 30, 1
  0104124  fmr 1, 29
  0104128  bl 0x502578
  010412c  nop
  0104130  lis 3, 16
  0104134  fmr 31, 1
  0104138  lis 6, 114
  010413c  addi 3, 3, 15108
  0104140  lis 4, 114
  0104144  addic 5, 30, 20
  0104148  lfs 3, 56(3)
  010414c  lfs 4, 60(3)
  0104150  lfs 5, 64(3)
  0104154  lfs 2, -3060(6)
  0104158  lfs 6, -3064(4)
  010415c  ori 3, 31, 0
  0104160  fmuls 2, 2, 3
  0104164  fmuls 3, 6, 4
  0104168  fmuls 4, 6, 5
  010416c  bl 0xff2e8
  0104170  fmr 1, 31
  0104174  lfs 2, 72(31)
  0104178  bl 0x5026a0
  010417c  nop
  0104180  fmr 28, 1
  0104184  lfs 1, 40(30)
  0104188  fcmpu 0, 28, 1
  010418c  cror 6, 1, 2
  0104190  bt 6, 0x1041d0
  0104194  fsubs 2, 1, 28
  0104198  ori 4, 30, 0
  010419c  addic 5, 1, 112
  01041a0  ori 3, 31, 0
  01041a4  ori 6, 28, 0
  01041a8  fdivs 1, 2, 1
  01041ac  bl 0x101058
  01041b0  lis 4, 16
  01041b4  ori 27, 3, 0
  01041b8  addi 4, 4, 15108
  01041bc  lfs 1, 68(4)
  01041c0  fcmpu 0, 28, 1
  01041c4  cror 6, 0, 2
  01041c8  bt 6, 0x1041d0
  01041cc  rlwimi 27, 25, 0, 30, 30
  01041d0  ori 3, 27, 0
  01041d4  ld 0, 336(1)
  01041d8  mtlr 0
  01041dc  lfd 27, 280(1)
  01041e0  lfd 28, 288(1)
  01041e4  lfd 29, 296(1)
  01041e8  lfd 30, 304(1)
  01041ec  lfd 31, 312(1)
  01041f0  ld 25, 224(1)
  01041f4  ld 26, 232(1)
  01041f8  ld 27, 240(1)
  01041fc  ld 28, 248(1)
  0104200  ld 29, 256(1)
  0104204  ld 30, 264(1)
  0104208  ld 31, 272(1)
  010420c  addi 1, 1, 320
  0104210  blr

MB_CountActiveMobysByGroup:   # 0x104214, 0x84 bytes
  0104214  lis 5, 165
  0104218  sldi 3, 3, 2
  010421c  addic 5, 5, -28284
  0104220  extsw 3, 3
  0104224  cmpwi 6, 4, -1
  0104228  lwzx 3, 5, 3
  010422c  cmpwi 3, 0
  0104230  bf 2, 0x10423c
  0104234  li 3, 0
  0104238  b 0x104294
  010423c  lis 7, 164
  0104240  ori 5, 3, 0
  0104244  li 6, 0
  0104248  lwz 3, -28512(7)
  010424c  lhz 7, 0(5)
  0104250  rlwinm 7, 7, 8, 9, 23
  0104254  addc 7, 3, 7
  0104258  clrldi 7, 7, 32
  010425c  lbz 7, 32(7)
  0104260  cmpwi 7, 128
  0104264  cmpw 1, 7, 4
  0104268  bf 0, 0x10427c
  010426c  bt 26, 0x104274
  0104270  bt 6, 0x10427c
  0104274  addic 6, 6, 1
  0104278  extsw 6, 6
  010427c  lhz 7, 0(5)
  0104280  addic 5, 5, 2
  0104284  extsh 7, 7
  0104288  cmpwi 7, 0
  010428c  bf 0, 0x10424c
  0104290  ori 3, 6, 0
  0104294  blr

MB_SetGroupField:   # 0x104298, 0x54 bytes
  0104298  lis 5, 165
  010429c  sldi 3, 3, 2
  01042a0  addic 5, 5, -28284
  01042a4  extsw 3, 3
  01042a8  lwzx 3, 5, 3
  01042ac  cmpwi 3, 0
  01042b0  bt 2, 0x1042e8
  01042b4  ori 5, 3, 0
  01042b8  lis 3, 164
  01042bc  lhz 6, 0(5)
  01042c0  lwz 7, -28512(3)
  01042c4  rlwinm 6, 6, 8, 9, 23
  01042c8  addc 6, 7, 6
  01042cc  clrldi 6, 6, 32
  01042d0  stb 4, 188(6)
  01042d4  lhz 6, 0(5)
  01042d8  addic 5, 5, 2
  01042dc  extsh 6, 6
  01042e0  cmpwi 6, 0
  01042e4  bf 0, 0x1042bc
  01042e8  blr

MB_SetStateByGroup:   # 0x1042ec, 0x60 bytes
  01042ec  lis 5, 165
  01042f0  sldi 3, 3, 2
  01042f4  addic 5, 5, -28284
  01042f8  extsw 3, 3
  01042fc  lwzx 3, 5, 3
  0104300  cmpwi 3, 0
  0104304  bt 2, 0x104348
  0104308  ori 5, 3, 0
  010430c  lis 3, 164
  0104310  lhz 6, 0(5)
  0104314  lwz 7, -28512(3)
  0104318  rlwinm 6, 6, 8, 9, 23
  010431c  addc 6, 7, 6
  0104320  clrldi 6, 6, 32
  0104324  lbz 7, 32(6)
  0104328  cmpwi 7, 128
  010432c  bf 0, 0x104334
  0104330  stb 4, 32(6)
  0104334  lhz 6, 0(5)
  0104338  addic 5, 5, 2
  010433c  extsh 6, 6
  0104340  cmpwi 6, 0
  0104344  bf 0, 0x104310
  0104348  blr

MB_SetGroupActive:   # 0x10434c, 0xe4 bytes
  010434c  lis 7, 165
  0104350  sldi 3, 3, 2
  0104354  addic 7, 7, -28284
  0104358  extsw 3, 3
  010435c  cmpwi 1, 4, -1
  0104360  cmpwi 6, 4, 0
  0104364  cmpwi 7, 5, -1
  0104368  lwzx 7, 7, 3
  010436c  cmpwi 7, 0
  0104370  bt 2, 0x10442c
  0104374  ori 8, 7, 0
  0104378  lis 7, 164
  010437c  li 4, 0
  0104380  li 3, 1
  0104384  lhz 9, 0(8)
  0104388  lwz 10, -28512(7)
  010438c  rlwinm 9, 9, 8, 9, 23
  0104390  addc 9, 10, 9
  0104394  clrldi 9, 9, 32
  0104398  lbz 10, 32(9)
  010439c  cmpwi 10, 128
  01043a0  bf 0, 0x104418
  01043a4  bt 6, 0x1043c4
  01043a8  bt 26, 0x1043b8
  01043ac  lhz 10, 52(9)
  01043b0  rlwimi 10, 4, 0, 30, 30
  01043b4  b 0x1043c0
  01043b8  lhz 10, 52(9)
  01043bc  ori 10, 10, 2
  01043c0  sth 10, 52(9)
  01043c4  bt 30, 0x1043f4
  01043c8  cmpwi 5, 0
  01043cc  bt 2, 0x1043e4
  01043d0  lhz 10, 52(9)
  01043d4  stb 3, 49(9)
  01043d8  rlwinm 10, 10, 0, 0, 30
  01043dc  sth 10, 52(9)
  01043e0  b 0x1043f4
  01043e4  lhz 10, 52(9)
  01043e8  stb 4, 49(9)
  01043ec  ori 10, 10, 1
  01043f0  sth 10, 52(9)
  01043f4  cmpwi 6, -1
  01043f8  bt 2, 0x104418
  01043fc  cmpwi 6, 0
  0104400  bt 2, 0x104414
  0104404  lwz 10, 36(9)
  0104408  lwz 10, 16(10)
  010440c  stw 10, 148(9)
  0104410  b 0x104418
  0104414  stw 4, 148(9)
  0104418  lhz 9, 0(8)
  010441c  addic 8, 8, 2
  0104420  extsh 9, 9
  0104424  cmpwi 9, 0
  0104428  bf 0, 0x104384
  010442c  blr

MB_SetClassActive:   # 0x104430, 0xd4 bytes
  0104430  ori 7, 4, 0
  0104434  lis 8, 164
  0104438  lis 4, 164
  010443c  cmpwi 1, 7, -1
  0104440  cmpwi 6, 7, 0
  0104444  cmpwi 7, 5, -1
  0104448  lwz 7, -28512(8)
  010444c  lwz 9, -28504(4)
  0104450  cmplw 7, 9
  0104454  bt 1, 0x104500
  0104458  li 9, 0
  010445c  li 8, 1
  0104460  lhz 10, 166(7)
  0104464  extsh 10, 10
  0104468  cmpw 10, 3
  010446c  bf 2, 0x1044f0
  0104470  lbz 10, 32(7)
  0104474  cmpwi 10, 128
  0104478  bf 0, 0x1044f0
  010447c  bt 6, 0x10449c
  0104480  bt 26, 0x104490
  0104484  lhz 10, 52(7)
  0104488  rlwimi 10, 9, 0, 30, 30
  010448c  b 0x104498
  0104490  lhz 10, 52(7)
  0104494  ori 10, 10, 2
  0104498  sth 10, 52(7)
  010449c  bt 30, 0x1044cc
  01044a0  cmpwi 5, 0
  01044a4  bt 2, 0x1044bc
  01044a8  lhz 10, 52(7)
  01044ac  stb 8, 49(7)
  01044b0  rlwinm 10, 10, 0, 0, 30
  01044b4  sth 10, 52(7)
  01044b8  b 0x1044cc
  01044bc  lhz 10, 52(7)
  01044c0  stb 9, 49(7)
  01044c4  ori 10, 10, 1
  01044c8  sth 10, 52(7)
  01044cc  cmpwi 6, -1
  01044d0  bt 2, 0x1044f0
  01044d4  cmpwi 6, 0
  01044d8  bt 2, 0x1044ec
  01044dc  lwz 10, 36(7)
  01044e0  lwz 10, 16(10)
  01044e4  stw 10, 148(7)
  01044e8  b 0x1044f0
  01044ec  stw 9, 148(7)
  01044f0  addic 7, 7, 256
  01044f4  lwz 10, -28504(4)
  01044f8  cmplw 7, 10
  01044fc  bf 1, 0x104460
  0104500  blr

MB_SetStateForClass:   # 0x104504, 0x4c bytes
  0104504  lis 5, 164
  0104508  lis 6, 164
  010450c  lwz 7, -28512(5)
  0104510  lwz 5, -28504(6)
  0104514  cmplw 7, 5
  0104518  bt 1, 0x10454c
  010451c  lhz 8, 166(7)
  0104520  extsh 8, 8
  0104524  cmpw 8, 3
  0104528  bf 2, 0x104540
  010452c  lbz 8, 32(7)
  0104530  cmpwi 8, 128
  0104534  bf 0, 0x104540
  0104538  stb 4, 32(7)
  010453c  lwz 5, -28504(6)
  0104540  addic 7, 7, 256
  0104544  cmplw 7, 5
  0104548  bf 1, 0x10451c
  010454c  blr

MB_SetClassListActive:   # 0x104550, 0x11c bytes
  0104550  stdu 1, -64(1)
  0104554  lis 7, 164
  0104558  lis 10, 164
  010455c  lwz 12, -28512(7)
  0104560  lwz 7, -28504(10)
  0104564  std 31, 56(1)
  0104568  std 30, 48(1)
  010456c  cmplw 12, 7
  0104570  bt 1, 0x10465c
  0104574  li 8, 1
  0104578  li 11, 0
  010457c  ori 7, 3, 0
  0104580  ori 9, 11, 0
  0104584  lhz 31, 0(7)
  0104588  cmpwi 31, 0
  010458c  bt 2, 0x10464c
  0104590  extsh 31, 31
  0104594  cmpwi 1, 11, 224
  0104598  cmpwi 31, 2048
  010459c  crnand 2, 0, 4
  01045a0  bt 2, 0x10464c
  01045a4  lhz 30, 166(12)
  01045a8  extsh 30, 30
  01045ac  cmpw 30, 31
  01045b0  bf 2, 0x104640
  01045b4  lbz 31, 32(12)
  01045b8  cmpwi 31, 128
  01045bc  bf 0, 0x104640
  01045c0  cmpwi 4, -1
  01045c4  bt 2, 0x1045e8
  01045c8  cmpwi 4, 0
  01045cc  bt 2, 0x1045dc
  01045d0  lhz 31, 52(12)
  01045d4  rlwimi 31, 9, 0, 30, 30
  01045d8  b 0x1045e4
  01045dc  lhz 31, 52(12)
  01045e0  ori 31, 31, 2
  01045e4  sth 31, 52(12)
  01045e8  cmpwi 5, -1
  01045ec  bt 2, 0x10461c
  01045f0  cmpwi 5, 0
  01045f4  bt 2, 0x10460c
  01045f8  lhz 31, 52(12)
  01045fc  stb 8, 49(12)
  0104600  rlwinm 31, 31, 0, 0, 30
  0104604  sth 31, 52(12)
  0104608  b 0x10461c
  010460c  lhz 31, 52(12)
  0104610  stb 9, 49(12)
  0104614  ori 31, 31, 1
  0104618  sth 31, 52(12)
  010461c  cmpwi 6, -1
  0104620  bt 2, 0x104640
  0104624  cmpwi 6, 0
  0104628  bt 2, 0x10463c
  010462c  lwz 31, 36(12)
  0104630  lwz 31, 16(31)
  0104634  stw 31, 148(12)
  0104638  b 0x104640
  010463c  stw 9, 148(12)
  0104640  addic 7, 7, 2
  0104644  addic 11, 11, 1
  0104648  b 0x104584
  010464c  addic 12, 12, 256
  0104650  lwz 7, -28504(10)
  0104654  cmplw 12, 7
  0104658  bf 1, 0x104578
  010465c  ld 30, 48(1)
  0104660  ld 31, 56(1)
  0104664  addi 1, 1, 64
  0104668  blr

MB_GetNextMobyInGroup:   # 0x10466c, 0x190 bytes
  010466c  stdu 1, -64(1)
  0104670  ori 7, 5, 0
  0104674  ori 8, 6, 0
  0104678  li 6, 0
  010467c  lis 5, 165
  0104680  clrlwi 7, 7, 24
  0104684  cmpwi 6, 7, 0
  0104688  stw 6, 0(3)
  010468c  clrlwi 7, 8, 24
  0104690  lwz 8, 8112(5)
  0104694  cmpwi 7, 7, 0
  0104698  std 31, 56(1)
  010469c  cmpw 4, 8
  01046a0  bt 2, 0x10474c
  01046a4  lis 7, 165
  01046a8  lbz 8, 33(4)
  01046ac  lwz 7, -28288(7)
  01046b0  cmpw 8, 7
  01046b4  bf 1, 0x1046c0
  01046b8  li 3, -1
  01046bc  b 0x1047f0
  01046c0  lis 7, 165
  01046c4  lbz 8, 33(4)
  01046c8  lis 10, 165
  01046cc  stw 6, 8112(5)
  01046d0  addic 7, 7, -28284
  01046d4  slwi 8, 8, 2
  01046d8  lwzx 7, 7, 8
  01046dc  cmpwi 7, 0
  01046e0  stw 7, 8104(10)
  01046e4  bf 2, 0x1046f0
  01046e8  li 3, -1
  01046ec  b 0x1047f0
  01046f0  lis 8, 164
  01046f4  lis 9, 165
  01046f8  addic 7, 7, -2
  01046fc  lwz 8, -28512(8)
  0104700  addic 11, 7, 2
  0104704  stw 11, 8104(10)
  0104708  lhz 7, 2(7)
  010470c  clrlwi 12, 7, 17
  0104710  extsh 7, 7
  0104714  extsh 31, 12
  0104718  cmpwi 7, 0
  010471c  slwi 31, 31, 8
  0104720  sth 12, 8108(9)
  0104724  addc 7, 8, 31
  0104728  stw 7, 8112(5)
  010472c  bf 0, 0x104738
  0104730  li 3, -1
  0104734  b 0x1047f0
  0104738  ori 12, 7, 0
  010473c  ori 7, 11, 0
  0104740  cmpw 4, 12
  0104744  bf 2, 0x104700
  0104748  b 0x10476c
  010474c  lis 4, 165
  0104750  lwz 4, 8104(4)
  0104754  lhz 4, 0(4)
  0104758  extsh 4, 4
  010475c  cmpwi 4, 0
  0104760  bf 0, 0x10476c
  0104764  li 3, -1
  0104768  b 0x1047f0
  010476c  lis 4, 165
  0104770  lis 7, 164
  0104774  lwz 8, 8104(4)
  0104778  lwz 7, -28512(7)
  010477c  addic 9, 8, 2
  0104780  stw 9, 8104(4)
  0104784  lhz 8, 2(8)
  0104788  clrlwi 8, 8, 17
  010478c  extsh 9, 8
  0104790  slwi 9, 9, 8
  0104794  addc 7, 7, 9
  0104798  lis 9, 165
  010479c  stw 7, 8112(5)
  01047a0  stw 7, 0(3)
  01047a4  sth 8, 8108(9)
  01047a8  lwz 4, 8104(4)
  01047ac  lwz 7, 8112(5)
  01047b0  lbz 7, 32(7)
  01047b4  cmpwi 1, 7, 127
  01047b8  bf 26, 0x1047c4
  01047bc  bf 30, 0x1047c4
  01047c0  bf 5, 0x1047d0
  01047c4  bt 26, 0x1047d8
  01047c8  bt 30, 0x1047d0
  01047cc  bf 5, 0x1047d8
  01047d0  ori 3, 6, 0
  01047d4  b 0x1047f0
  01047d8  lhz 4, 0(4)
  01047dc  extsh 4, 4
  01047e0  cmpwi 4, 0
  01047e4  bf 0, 0x10476c
  01047e8  stw 6, 0(3)
  01047ec  li 3, -1
  01047f0  ld 31, 56(1)
  01047f4  addi 1, 1, 64
  01047f8  blr

MB_GetFirstMobyInGroup:   # 0x104800, 0x118 bytes
  0104800  stdu 1, -112(1)
  0104804  mflr 0
  0104808  std 0, 128(1)
  010480c  ori 7, 6, 0
  0104810  clrlwi 6, 5, 24
  0104814  clrlwi 5, 7, 24
  0104818  cmpwi 4, 0
  010481c  cmpwi 6, 6, 0
  0104820  cmpwi 7, 5, 0
  0104824  bf 0, 0x10483c
  0104828  ori 5, 3, 0
  010482c  li 4, 0
  0104830  li 3, -1
  0104834  stw 4, 0(5)
  0104838  b 0x104908
  010483c  lis 7, 165
  0104840  lwz 7, -28288(7)
  0104844  cmpw 7, 4
  0104848  bf 0, 0x104860
  010484c  ori 5, 3, 0
  0104850  li 4, 0
  0104854  li 3, -1
  0104858  stw 4, 0(5)
  010485c  b 0x104908
  0104860  lis 8, 165
  0104864  sldi 4, 4, 2
  0104868  li 7, 0
  010486c  lis 10, 165
  0104870  addic 8, 8, -28284
  0104874  extsw 4, 4
  0104878  lis 9, 165
  010487c  stw 7, 0(3)
  0104880  stw 7, 8112(10)
  0104884  lwzx 4, 8, 4
  0104888  cmpwi 4, 0
  010488c  stw 4, 8104(9)
  0104890  bf 2, 0x10489c
  0104894  li 3, -1
  0104898  b 0x104908
  010489c  lhz 4, 0(4)
  01048a0  lis 7, 164
  01048a4  lis 8, 165
  01048a8  clrlwi 4, 4, 17
  01048ac  extsh 9, 4
  01048b0  lwz 7, -28512(7)
  01048b4  slwi 9, 9, 8
  01048b8  addc 7, 7, 9
  01048bc  lis 9, 165
  01048c0  stw 7, 8112(8)
  01048c4  stw 7, 0(3)
  01048c8  sth 4, 8108(9)
  01048cc  lwz 4, 8112(8)
  01048d0  lbz 7, 32(4)
  01048d4  cmpwi 1, 7, 127
  01048d8  bf 26, 0x1048e8
  01048dc  bf 30, 0x1048f0
  01048e0  bt 5, 0x1048f0
  01048e4  b 0x104904
  01048e8  bt 30, 0x104904
  01048ec  bt 5, 0x104904
  01048f0  ori 7, 5, 0
  01048f4  ori 5, 6, 0
  01048f8  ori 6, 7, 0
  01048fc  bl 0x10466c
  0104900  b 0x104908
  0104904  li 3, 0
  0104908  ld 0, 128(1)
  010490c  mtlr 0
  0104910  addi 1, 1, 112
  0104914  blr

MB_GetOtherMobyInGroup:   # 0x10491c, 0x10c bytes
  010491c  stdu 1, -128(1)
  0104920  mflr 0
  0104924  std 0, 144(1)
  0104928  std 31, 120(1)
  010492c  ori 31, 3, 0
  0104930  lbz 3, 33(31)
  0104934  cmpwi 3, 0
  0104938  bt 0, 0x104a08
  010493c  lis 4, 165
  0104940  lwz 4, -28288(4)
  0104944  cmpw 4, 3
  0104948  bt 0, 0x104a08
  010494c  lis 4, 165
  0104950  li 5, 0
  0104954  addic 4, 4, -28284
  0104958  slwi 3, 3, 2
  010495c  lis 7, 165
  0104960  lis 6, 165
  0104964  stw 5, 112(1)
  0104968  lwzx 3, 4, 3
  010496c  stw 5, 8112(7)
  0104970  cmpwi 3, 0
  0104974  stw 3, 8104(6)
  0104978  bt 2, 0x104a08
  010497c  lis 4, 164
  0104980  lhz 3, 0(3)
  0104984  lis 6, 165
  0104988  lis 5, 165
  010498c  clrlwi 7, 3, 17
  0104990  lwz 3, -28512(4)
  0104994  extsh 4, 7
  0104998  sth 7, 8108(6)
  010499c  slwi 4, 4, 8
  01049a0  addc 3, 3, 4
  01049a4  stw 3, 8112(5)
  01049a8  stw 3, 112(1)
  01049ac  lwz 4, 8112(5)
  01049b0  lbz 5, 32(4)
  01049b4  cmpwi 5, 127
  01049b8  bf 1, 0x1049dc
  01049bc  addic 3, 1, 112
  01049c0  li 5, 0
  01049c4  li 6, 0
  01049c8  bl 0x10466c
  01049cc  ori 4, 3, 0
  01049d0  lwz 3, 112(1)
  01049d4  cmpwi 4, -1
  01049d8  bt 2, 0x104a08
  01049dc  clrldi 3, 3, 32
  01049e0  cmpw 3, 31
  01049e4  bt 2, 0x1049ec
  01049e8  b 0x104a14
  01049ec  ori 4, 3, 0
  01049f0  addic 3, 1, 112
  01049f4  li 5, 0
  01049f8  li 6, 0
  01049fc  bl 0x10466c
  0104a00  cmpwi 3, -1
  0104a04  bf 2, 0x104a10
  0104a08  li 3, 0
  0104a0c  b 0x104a14
  0104a10  lwz 3, 112(1)
  0104a14  ld 0, 144(1)
  0104a18  mtlr 0
  0104a1c  ld 31, 120(1)
  0104a20  addi 1, 1, 128
  0104a24  blr

MB_IsFirstMobyInGroup:   # 0x104a28, 0x10c bytes
  0104a28  stdu 1, -128(1)
  0104a2c  mflr 0
  0104a30  std 0, 144(1)
  0104a34  std 31, 120(1)
  0104a38  ori 31, 3, 0
  0104a3c  clrlwi 5, 5, 24
  0104a40  clrlwi 3, 6, 24
  0104a44  cmpwi 4, 0
  0104a48  cmpwi 6, 5, 0
  0104a4c  cmpwi 7, 3, 0
  0104a50  bf 0, 0x104a60
  0104a54  li 3, 0
  0104a58  stw 3, 112(1)
  0104a5c  b 0x104b10
  0104a60  lis 6, 165
  0104a64  lwz 6, -28288(6)
  0104a68  cmpw 6, 4
  0104a6c  bf 0, 0x104a7c
  0104a70  li 3, 0
  0104a74  stw 3, 112(1)
  0104a78  b 0x104b10
  0104a7c  lis 6, 165
  0104a80  sldi 4, 4, 2
  0104a84  li 8, 0
  0104a88  lis 9, 165
  0104a8c  addic 6, 6, -28284
  0104a90  extsw 4, 4
  0104a94  lis 7, 165
  0104a98  stw 8, 112(1)
  0104a9c  stw 8, 8112(9)
  0104aa0  lwzx 4, 6, 4
  0104aa4  cmpwi 4, 0
  0104aa8  stw 4, 8104(7)
  0104aac  bt 2, 0x104b10
  0104ab0  lhz 4, 0(4)
  0104ab4  lis 6, 164
  0104ab8  clrlwi 4, 4, 17
  0104abc  lis 8, 165
  0104ac0  extsh 9, 4
  0104ac4  lis 7, 165
  0104ac8  lwz 6, -28512(6)
  0104acc  slwi 9, 9, 8
  0104ad0  sth 4, 8108(8)
  0104ad4  addc 6, 6, 9
  0104ad8  stw 6, 8112(7)
  0104adc  stw 6, 112(1)
  0104ae0  lwz 4, 8112(7)
  0104ae4  lbz 6, 32(4)
  0104ae8  cmpwi 1, 6, 127
  0104aec  bf 26, 0x104afc
  0104af0  bf 30, 0x104b04
  0104af4  bt 5, 0x104b04
  0104af8  b 0x104b10
  0104afc  bt 30, 0x104b10
  0104b00  bt 5, 0x104b10
  0104b04  ori 6, 3, 0
  0104b08  addic 3, 1, 112
  0104b0c  bl 0x10466c
  0104b10  lwz 3, 112(1)
  0104b14  subc 3, 3, 31
  0104b18  cntlzw 3, 3
  0104b1c  rlwinm 3, 3, 27, 31, 31
  0104b20  ld 0, 144(1)
  0104b24  mtlr 0
  0104b28  ld 31, 120(1)
  0104b2c  addi 1, 1, 128
  0104b30  blr

DecAlpha:   # 0x104b38, 0x44 bytes
  0104b38  lwz 7, 0(3)
  0104b3c  li 5, 0
  0104b40  li 6, 0
  0104b44  srawi 8, 7, 24
  0104b48  clrlwi 7, 7, 8
  0104b4c  subc 4, 8, 4
  0104b50  extsw 8, 4
  0104b54  subc 6, 6, 4
  0104b58  subc 5, 8, 5
  0104b5c  sradi 5, 5, 63
  0104b60  and 5, 5, 6
  0104b64  addc 4, 4, 5
  0104b68  rlwimi 7, 4, 24, 0, 7
  0104b6c  cntlzw 4, 4
  0104b70  stw 7, 0(3)
  0104b74  rlwinm 3, 4, 27, 31, 31
  0104b78  blr

MB_BallisticTicksToHeight:   # 0x104b7c, 0xa8 bytes
  0104b7c  stdu 1, -160(1)
  0104b80  mflr 0
  0104b84  std 0, 176(1)
  0104b88  stfd 30, 144(1)
  0104b8c  stfd 31, 152(1)
  0104b90  std 29, 120(1)
  0104b94  fmr 31, 1
  0104b98  std 28, 112(1)
  0104b9c  ori 29, 4, 0
  0104ba0  std 31, 136(1)
  0104ba4  ori 28, 3, 0
  0104ba8  ori 31, 6, 0
  0104bac  lfs 1, 8(29)
  0104bb0  std 30, 128(1)
  0104bb4  fdivs 1, 1, 31
  0104bb8  bl 0x502758
  0104bbc  nop
  0104bc0  ori 30, 3, 0
  0104bc4  lfs 30, 8(28)
  0104bc8  bl 0x502730
  0104bcc  nop
  0104bd0  mullw 3, 30, 30
  0104bd4  lfs 2, 8(29)
  0104bd8  addc 3, 3, 30
  0104bdc  srawi 3, 3, 1
  0104be0  fmadds 30, 2, 1, 30
  0104be4  bl 0x502730
  0104be8  nop
  0104bec  cmpwi 31, 0
  0104bf0  fnmsubs 1, 1, 31, 30
  0104bf4  bt 2, 0x104bfc
  0104bf8  stw 30, 0(31)
  0104bfc  ld 0, 176(1)
  0104c00  mtlr 0
  0104c04  lfd 30, 144(1)
  0104c08  lfd 31, 152(1)
  0104c0c  ld 28, 112(1)
  0104c10  ld 29, 120(1)
  0104c14  ld 30, 128(1)
  0104c18  ld 31, 136(1)
  0104c1c  addi 1, 1, 160
  0104c20  blr

MB_BallisticPosAtTicks:   # 0x104c24, 0xdc bytes
  0104c24  stdu 1, -192(1)
  0104c28  mflr 0
  0104c2c  std 0, 208(1)
  0104c30  stfd 27, 152(1)
  0104c34  stfd 28, 160(1)
  0104c38  stfd 29, 168(1)
  0104c3c  stfd 30, 176(1)
  0104c40  stfd 31, 184(1)
  0104c44  std 31, 144(1)
  0104c48  std 29, 128(1)
  0104c4c  ori 31, 7, 0
  0104c50  ori 29, 3, 0
  0104c54  fmr 31, 1
  0104c58  std 30, 136(1)
  0104c5c  ori 3, 31, 0
  0104c60  std 28, 120(1)
  0104c64  ori 30, 5, 0
  0104c68  ori 28, 4, 0
  0104c6c  bl 0x502730
  0104c70  nop
  0104c74  mullw 3, 31, 31
  0104c78  lfs 29, 0(30)
  0104c7c  fmr 30, 1
  0104c80  addc 3, 3, 31
  0104c84  lfs 28, 4(30)
  0104c88  lfs 27, 8(30)
  0104c8c  srawi 3, 3, 1
  0104c90  bl 0x502730
  0104c94  nop
  0104c98  fmuls 1, 1, 31
  0104c9c  lfs 2, 0(28)
  0104ca0  lfs 3, 4(28)
  0104ca4  fmadds 2, 29, 30, 2
  0104ca8  lfs 4, 8(28)
  0104cac  fmadds 3, 28, 30, 3
  0104cb0  lfs 5, 12(28)
  0104cb4  stfs 5, 12(29)
  0104cb8  fmsubs 1, 27, 30, 1
  0104cbc  stfs 2, 0(29)
  0104cc0  stfs 3, 4(29)
  0104cc4  fadds 1, 4, 1
  0104cc8  stfs 1, 8(29)
  0104ccc  ld 0, 208(1)
  0104cd0  mtlr 0
  0104cd4  lfd 27, 152(1)
  0104cd8  lfd 28, 160(1)
  0104cdc  lfd 29, 168(1)
  0104ce0  lfd 30, 176(1)
  0104ce4  lfd 31, 184(1)
  0104ce8  ld 28, 120(1)
  0104cec  ld 29, 128(1)
  0104cf0  ld 30, 136(1)
  0104cf4  ld 31, 144(1)
  0104cf8  addi 1, 1, 192
  0104cfc  blr

MB_GetGroundZAboveBundle:   # 0x104d08, 0x9c bytes
  0104d08  stdu 1, -144(1)
  0104d0c  mflr 0
  0104d10  std 0, 160(1)
  0104d14  lfs 1, 0(3)
  0104d18  lis 4, 16
  0104d1c  stfs 1, 128(1)
  0104d20  lfs 2, 4(3)
  0104d24  addi 8, 4, 19712
  0104d28  stfs 2, 132(1)
  0104d2c  lfs 3, 12(3)
  0104d30  lfs 4, 8(3)
  0104d34  stfs 3, 140(1)
  0104d38  lfs 5, 0(8)
  0104d3c  addic 3, 1, 128
  0104d40  stfs 1, 112(1)
  0104d44  addic 4, 1, 112
  0104d48  fadds 1, 4, 5
  0104d4c  stfs 2, 116(1)
  0104d50  stfs 3, 124(1)
  0104d54  li 5, 18
  0104d58  li 6, 0
  0104d5c  li 7, 0
  0104d60  stfs 1, 136(1)
  0104d64  lfs 1, 4(8)
  0104d68  fsubs 1, 4, 1
  0104d6c  stfs 1, 120(1)
  0104d70  bl 0x57820
  0104d74  nop
  0104d78  cmpwi 3, 0
  0104d7c  bt 2, 0x104d90
  0104d80  lis 3, 161
  0104d84  addic 3, 3, 2368
  0104d88  lfs 1, 40(3)
  0104d8c  b 0x104d94
  0104d90  lfs 1, 136(1)
  0104d94  ld 0, 160(1)
  0104d98  mtlr 0
  0104d9c  addi 1, 1, 144
  0104da0  blr

PointOutsideConvexEdge:   # 0x104da8, 0x9c bytes
  0104da8  li 7, 0
  0104dac  cmpwi 5, 0
  0104db0  ori 6, 7, 0
  0104db4  bf 1, 0x104e3c
  0104db8  ori 8, 3, 0
  0104dbc  lis 9, 16
  0104dc0  ori 3, 4, 0
  0104dc4  addi 9, 9, 19876
  0104dc8  lfs 2, 4(8)
  0104dcc  lfs 1, 0(8)
  0104dd0  lfs 3, 0(9)
  0104dd4  addic 7, 7, 1
  0104dd8  divw 8, 7, 5
  0104ddc  mullw 8, 8, 5
  0104de0  lfs 4, 0(3)
  0104de4  subc 8, 7, 8
  0104de8  lfs 5, 4(3)
  0104dec  fsubs 6, 1, 4
  0104df0  sldi 8, 8, 4
  0104df4  fsubs 7, 2, 5
  0104df8  addc 9, 4, 8
  0104dfc  extsw 8, 8
  0104e00  clrldi 9, 9, 32
  0104e04  cmpw 1, 7, 5
  0104e08  lfs 8, 4(9)
  0104e0c  lfsx 9, 4, 8
  0104e10  fsubs 5, 8, 5
  0104e14  fsubs 4, 9, 4
  0104e18  fmuls 5, 5, 6
  0104e1c  fmsubs 4, 4, 7, 5
  0104e20  fcmpu 0, 4, 3
  0104e24  cror 2, 0, 2
  0104e28  bt 2, 0x104e34
  0104e2c  extsw 3, 7
  0104e30  b 0x104e40
  0104e34  addic 3, 3, 16
  0104e38  bt 4, 0x104dd4
  0104e3c  ori 3, 6, 0
  0104e40  blr

PointInsideComplexPoly:   # 0x104e44, 0x14c bytes
  0104e44  stdu 1, -80(1)
  0104e48  li 9, 0
  0104e4c  cmpwi 5, 0
  0104e50  ori 8, 9, 0
  0104e54  std 31, 72(1)
  0104e58  std 30, 64(1)
  0104e5c  std 29, 56(1)
  0104e60  ori 10, 8, 0
  0104e64  bf 1, 0x104f78
  0104e68  lwz 11, 4(3)
  0104e6c  lfs 2, 4(3)
  0104e70  addic 7, 4, 4
  0104e74  srawi 12, 11, 31
  0104e78  lfs 1, 0(3)
  0104e7c  ori 6, 4, 0
  0104e80  srwi 31, 12, 1
  0104e84  xor 3, 31, 11
  0104e88  subc 3, 3, 12
  0104e8c  addic 10, 10, 1
  0104e90  lwz 31, 4(6)
  0104e94  li 11, 0
  0104e98  lfs 3, 4(6)
  0104e9c  subc 12, 10, 5
  0104ea0  srawi 30, 31, 31
  0104ea4  cntlzw 12, 12
  0104ea8  subc 11, 11, 10
  0104eac  sldi 12, 12, 58
  0104eb0  srwi 29, 30, 1
  0104eb4  sradi 12, 12, 63
  0104eb8  and 11, 12, 11
  0104ebc  xor 12, 29, 31
  0104ec0  addc 10, 10, 11
  0104ec4  subc 11, 12, 30
  0104ec8  cmpw 1, 11, 3
  0104ecc  bf 4, 0x104ef8
  0104ed0  sldi 11, 10, 4
  0104ed4  addc 11, 11, 7
  0104ed8  clrldi 11, 11, 32
  0104edc  lwz 11, 0(11)
  0104ee0  srawi 12, 11, 31
  0104ee4  srwi 31, 12, 1
  0104ee8  xor 11, 31, 11
  0104eec  subc 11, 11, 12
  0104ef0  cmpw 11, 3
  0104ef4  bf 0, 0x104f24
  0104ef8  sldi 11, 10, 4
  0104efc  addc 11, 11, 7
  0104f00  clrldi 11, 11, 32
  0104f04  lwz 11, 0(11)
  0104f08  srawi 12, 11, 31
  0104f0c  srwi 31, 12, 1
  0104f10  xor 11, 31, 11
  0104f14  subc 11, 11, 12
  0104f18  cmpw 11, 3
  0104f1c  bf 0, 0x104f68
  0104f20  bt 4, 0x104f68
  0104f24  sldi 11, 10, 4
  0104f28  fsubs 4, 2, 3
  0104f2c  addc 12, 11, 7
  0104f30  clrldi 12, 12, 32
  0104f34  extsw 11, 11
  0104f38  lfs 5, 0(12)
  0104f3c  fsubs 3, 5, 3
  0104f40  lfs 5, 0(6)
  0104f44  fdivs 3, 4, 3
  0104f48  lfsx 4, 4, 11
  0104f4c  fsubs 4, 4, 5
  0104f50  fmadds 3, 3, 4, 5
  0104f54  fcmpu 0, 3, 1
  0104f58  cror 6, 1, 2
  0104f5c  bt 6, 0x104f68
  0104f60  cntlzw 9, 9
  0104f64  rlwinm 9, 9, 27, 31, 31
  0104f68  addic 8, 8, 1
  0104f6c  addic 6, 6, 16
  0104f70  cmpw 8, 5
  0104f74  bt 0, 0x104e8c
  0104f78  ori 3, 9, 0
  0104f7c  ld 29, 56(1)
  0104f80  ld 30, 64(1)
  0104f84  ld 31, 72(1)
  0104f88  addi 1, 1, 80
  0104f8c  blr

SegmentIntersect2D:   # 0x104fa0, 0xdc bytes
  0104fa0  lfs 5, 0(4)
  0104fa4  lfs 3, 0(3)
  0104fa8  lfs 4, 4(5)
  0104fac  lfs 2, 4(6)
  0104fb0  fsubs 5, 5, 3
  0104fb4  lfs 6, 4(4)
  0104fb8  fsubs 2, 4, 2
  0104fbc  lfs 7, 4(3)
  0104fc0  lfs 8, 0(5)
  0104fc4  lis 8, 16
  0104fc8  lfs 1, 0(6)
  0104fcc  fsubs 6, 6, 7
  0104fd0  fsubs 4, 7, 4
  0104fd4  addi 3, 8, 20368
  0104fd8  fsubs 1, 8, 1
  0104fdc  fsubs 3, 3, 8
  0104fe0  lfs 10, 0(3)
  0104fe4  fmuls 9, 5, 2
  0104fe8  fmsubs 7, 6, 1, 9
  0104fec  fabs 8, 7
  0104ff0  fcmpu 0, 8, 10
  0104ff4  cror 6, 1, 2
  0104ff8  bt 6, 0x105004
  0104ffc  li 3, 0
  0105000  b 0x105078
  0105004  lis 3, 16
  0105008  fmuls 1, 1, 4
  010500c  addi 3, 3, 20368
  0105010  lfs 8, 4(3)
  0105014  fdivs 7, 8, 7
  0105018  fmsubs 1, 2, 3, 1
  010501c  fmuls 2, 6, 3
  0105020  fmsubs 2, 5, 4, 2
  0105024  fmuls 1, 1, 7
  0105028  fmuls 2, 2, 7
  010502c  fcmpu 7, 1, 8
  0105030  fcmpu 1, 2, 8
  0105034  stfs 1, 0(7)
  0105038  lfs 3, 8(3)
  010503c  fcmpu 0, 1, 3
  0105040  fcmpu 6, 2, 3
  0105044  bt 1, 0x105050
  0105048  li 3, 0
  010504c  b 0x105078
  0105050  bt 28, 0x10505c
  0105054  li 3, 0
  0105058  b 0x105078
  010505c  bt 25, 0x105068
  0105060  li 3, 0
  0105064  b 0x105078
  0105068  bt 4, 0x105074
  010506c  li 3, 0
  0105070  b 0x105078
  0105074  li 3, 1
  0105078  blr

ClipLineToPoly2D:   # 0x105080, 0x198 bytes
  0105080  stdu 1, -192(1)
  0105084  mflr 0
  0105088  std 0, 208(1)
  010508c  std 23, 120(1)
  0105090  li 23, 0
  0105094  std 28, 160(1)
  0105098  cmpwi 6, 0
  010509c  std 26, 144(1)
  01050a0  ori 28, 3, 0
  01050a4  std 30, 176(1)
  01050a8  std 29, 168(1)
  01050ac  ori 26, 23, 0
  01050b0  ori 29, 4, 0
  01050b4  std 31, 184(1)
  01050b8  ori 30, 5, 0
  01050bc  std 27, 152(1)
  01050c0  std 25, 136(1)
  01050c4  std 24, 128(1)
  01050c8  ori 31, 6, 0
  01050cc  bf 1, 0x1051e0
  01050d0  ori 27, 30, 0
  01050d4  addic 24, 23, 1
  01050d8  divw 3, 24, 31
  01050dc  mullw 3, 3, 31
  01050e0  addic 7, 1, 112
  01050e4  subc 3, 24, 3
  01050e8  ori 4, 29, 0
  01050ec  sldi 3, 3, 4
  01050f0  ori 5, 27, 0
  01050f4  addc 25, 30, 3
  01050f8  ori 3, 28, 0
  01050fc  clrldi 25, 25, 32
  0105100  ori 6, 25, 0
  0105104  bl 0x104fa0
  0105108  cmpwi 3, 0
  010510c  bt 2, 0x1051d0
  0105110  slwi 3, 23, 4
  0105114  lfs 1, 0(25)
  0105118  lfs 4, 4(28)
  010511c  addc 3, 30, 3
  0105120  lfs 2, 4(25)
  0105124  clrldi 3, 3, 32
  0105128  lfs 3, 0(3)
  010512c  lfs 5, 4(3)
  0105130  fsubs 1, 1, 3
  0105134  lfs 7, 0(28)
  0105138  fsubs 6, 4, 5
  010513c  lis 3, 16
  0105140  fsubs 8, 2, 5
  0105144  lfs 2, 0(29)
  0105148  addi 3, 3, 20604
  010514c  fsubs 9, 7, 3
  0105150  fsubs 5, 2, 7
  0105154  lfs 3, 8(28)
  0105158  lfs 11, 0(3)
  010515c  lfs 2, 4(29)
  0105160  fmuls 10, 1, 6
  0105164  lfs 1, 8(29)
  0105168  lfs 6, 112(1)
  010516c  fsubs 2, 2, 4
  0105170  fsubs 1, 1, 3
  0105174  fmadds 5, 5, 6, 7
  0105178  fmsubs 7, 8, 9, 10
  010517c  fcmpu 0, 7, 11
  0105180  cror 6, 1, 2
  0105184  bt 6, 0x1051a0
  0105188  fmadds 2, 2, 6, 4
  010518c  stfs 5, 0(28)
  0105190  fmadds 1, 1, 6, 3
  0105194  stfs 2, 4(28)
  0105198  stfs 1, 8(28)
  010519c  b 0x1051c4
  01051a0  lfs 3, 4(28)
  01051a4  lfs 4, 8(28)
  01051a8  fmadds 2, 2, 6, 3
  01051ac  stfs 5, 0(29)
  01051b0  fmadds 1, 1, 6, 4
  01051b4  lfs 3, 12(28)
  01051b8  stfs 3, 12(29)
  01051bc  stfs 2, 4(29)
  01051c0  stfs 1, 8(29)
  01051c4  addic 3, 31, 1
  01051c8  extsw 3, 3
  01051cc  b 0x1051e4
  01051d0  cmpw 24, 31
  01051d4  addic 27, 27, 16
  01051d8  ori 23, 24, 0
  01051dc  bt 0, 0x1050d4
  01051e0  ori 3, 26, 0
  01051e4  ld 0, 208(1)
  01051e8  mtlr 0
  01051ec  ld 23, 120(1)
  01051f0  ld 24, 128(1)
  01051f4  ld 25, 136(1)
  01051f8  ld 26, 144(1)
  01051fc  ld 27, 152(1)
  0105200  ld 28, 160(1)
  0105204  ld 29, 168(1)
  0105208  ld 30, 176(1)
  010520c  ld 31, 184(1)
  0105210  addi 1, 1, 192
  0105214  blr

ClosestPointOnEdge2D:   # 0x105228, 0x108 bytes
  0105228  lfs 11, 0(5)
  010522c  lfs 3, 0(4)
  0105230  lfs 10, 4(5)
  0105234  fsubs 11, 11, 3
  0105238  lfs 6, 4(4)
  010523c  lfs 1, 4(6)
  0105240  fsubs 10, 10, 6
  0105244  lfs 7, 0(6)
  0105248  lis 6, 16
  010524c  fsubs 6, 6, 1
  0105250  addi 6, 6, 21016
  0105254  fneg 2, 11
  0105258  lfs 12, 0(6)
  010525c  lfs 9, 8(5)
  0105260  fadds 5, 7, 10
  0105264  fadds 4, 1, 2
  0105268  lfs 2, 8(4)
  010526c  fsubs 9, 9, 2
  0105270  fsubs 5, 7, 5
  0105274  lfs 8, 12(5)
  0105278  fsubs 7, 3, 7
  010527c  fsubs 4, 1, 4
  0105280  lfs 1, 4(6)
  0105284  fmuls 2, 11, 4
  0105288  fmsubs 2, 10, 5, 2
  010528c  fabs 13, 2
  0105290  fcmpu 0, 13, 12
  0105294  cror 6, 1, 2
  0105298  bt 6, 0x1052bc
  010529c  stfs 3, 0(3)
  01052a0  lfs 2, 4(4)
  01052a4  stfs 2, 4(3)
  01052a8  lfs 2, 8(4)
  01052ac  stfs 2, 8(3)
  01052b0  lfs 2, 12(4)
  01052b4  stfs 2, 12(3)
  01052b8  b 0x10532c
  01052bc  lis 5, 16
  01052c0  fmuls 5, 5, 6
  01052c4  addi 5, 5, 21016
  01052c8  lfs 3, 8(5)
  01052cc  fdivs 2, 3, 2
  01052d0  stfs 8, 12(3)
  01052d4  fmsubs 4, 4, 7, 5
  01052d8  fmuls 2, 4, 2
  01052dc  fsub 4, 2, 1
  01052e0  fsel 4, 4, 2, 1
  01052e4  fmr 1, 2
  01052e8  fsub 2, 3, 4
  01052ec  fsel 2, 2, 4, 3
  01052f0  fmuls 3, 11, 2
  01052f4  fmuls 4, 10, 2
  01052f8  fmuls 2, 9, 2
  01052fc  stfs 3, 0(3)
  0105300  stfs 4, 4(3)
  0105304  stfs 2, 8(3)
  0105308  lfs 5, 0(4)
  010530c  lfs 6, 4(4)
  0105310  fadds 3, 3, 5
  0105314  lfs 5, 8(4)
  0105318  fadds 4, 4, 6
  010531c  fadds 2, 2, 5
  0105320  stfs 3, 0(3)
  0105324  stfs 4, 4(3)
  0105328  stfs 2, 8(3)
  010532c  blr

ClosestPointOnSegment:   # 0x105338, 0x9c bytes
  0105338  lfs 1, 4(5)
  010533c  lfs 2, 4(4)
  0105340  lfs 3, 4(6)
  0105344  fsubs 4, 1, 2
  0105348  fsubs 3, 3, 2
  010534c  lfs 1, 0(5)
  0105350  lfs 5, 0(4)
  0105354  lfs 6, 0(6)
  0105358  fsubs 7, 1, 5
  010535c  lfs 1, 8(5)
  0105360  lfs 8, 8(4)
  0105364  fsubs 6, 6, 5
  0105368  lfs 9, 8(6)
  010536c  fsubs 10, 1, 8
  0105370  fsubs 1, 9, 8
  0105374  fmuls 9, 4, 4
  0105378  fmuls 3, 4, 3
  010537c  lis 5, 16
  0105380  addi 5, 5, 21296
  0105384  fmadds 9, 7, 7, 9
  0105388  fmadds 3, 7, 6, 3
  010538c  fmadds 6, 10, 10, 9
  0105390  fmadds 1, 10, 1, 3
  0105394  lfs 3, 0(5)
  0105398  fdivs 1, 1, 6
  010539c  lfs 6, 4(5)
  01053a0  lfs 9, 12(4)
  01053a4  stfs 9, 12(3)
  01053a8  fsub 9, 1, 3
  01053ac  fsel 1, 9, 1, 3
  01053b0  fsub 3, 6, 1
  01053b4  fsel 1, 3, 1, 6
  01053b8  fmadds 3, 7, 1, 5
  01053bc  fmadds 2, 4, 1, 2
  01053c0  fmadds 4, 10, 1, 8
  01053c4  stfs 3, 0(3)
  01053c8  stfs 2, 4(3)
  01053cc  stfs 4, 8(3)
  01053d0  blr

ClosestPointInConvexPoly:   # 0x1053d8, 0x168 bytes
  01053d8  stdu 1, -192(1)
  01053dc  mflr 0
  01053e0  std 0, 208(1)
  01053e4  stfd 31, 184(1)
  01053e8  std 29, 160(1)
  01053ec  std 28, 152(1)
  01053f0  ori 29, 4, 0
  01053f4  std 31, 176(1)
  01053f8  ori 28, 3, 0
  01053fc  std 30, 168(1)
  0105400  ori 31, 6, 0
  0105404  ori 30, 5, 0
  0105408  ori 3, 29, 0
  010540c  ori 5, 31, 0
  0105410  std 27, 144(1)
  0105414  std 26, 136(1)
  0105418  std 25, 128(1)
  010541c  ori 4, 30, 0
  0105420  bl 0x104da8
  0105424  cmpwi 3, 0
  0105428  bf 2, 0x105454
  010542c  lfs 1, 0(29)
  0105430  li 3, 0
  0105434  stfs 1, 0(28)
  0105438  lfs 1, 4(29)
  010543c  stfs 1, 4(28)
  0105440  lfs 1, 8(29)
  0105444  stfs 1, 8(28)
  0105448  lfs 1, 12(29)
  010544c  stfs 1, 12(28)
  0105450  b 0x105510
  0105454  lis 3, 16
  0105458  cmpwi 31, 0
  010545c  addi 3, 3, 21460
  0105460  li 26, 0
  0105464  lfs 31, 0(3)
  0105468  bf 1, 0x10550c
  010546c  ori 27, 30, 0
  0105470  ori 25, 26, 0
  0105474  addic 26, 25, 1
  0105478  divw 3, 26, 31
  010547c  mullw 3, 3, 31
  0105480  ori 6, 29, 0
  0105484  subc 4, 26, 3
  0105488  addic 3, 1, 112
  010548c  sldi 5, 4, 4
  0105490  ori 4, 27, 0
  0105494  addc 5, 5, 30
  0105498  clrldi 5, 5, 32
  010549c  bl 0x105228
  01054a0  lfs 1, 4(29)
  01054a4  lfs 3, 116(1)
  01054a8  lfs 2, 0(29)
  01054ac  fsubs 1, 1, 3
  01054b0  lfs 4, 112(1)
  01054b4  lfs 6, 8(29)
  01054b8  cmpwi 25, 0
  01054bc  fsubs 5, 2, 4
  01054c0  lfs 2, 120(1)
  01054c4  fsubs 6, 6, 2
  01054c8  fmuls 7, 1, 1
  01054cc  lfs 1, 124(1)
  01054d0  fmadds 5, 5, 5, 7
  01054d4  fmadds 5, 6, 6, 5
  01054d8  fsqrts 5, 5
  01054dc  bt 2, 0x1054ec
  01054e0  fcmpu 0, 31, 5
  01054e4  cror 6, 0, 2
  01054e8  bt 6, 0x105500
  01054ec  stfs 4, 0(28)
  01054f0  fmr 31, 5
  01054f4  stfs 3, 4(28)
  01054f8  stfs 2, 8(28)
  01054fc  stfs 1, 12(28)
  0105500  cmpw 26, 31
  0105504  addic 27, 27, 16
  0105508  bt 0, 0x105470
  010550c  li 3, 1
  0105510  ld 0, 208(1)
  0105514  mtlr 0
  0105518  lfd 31, 184(1)
  010551c  ld 25, 128(1)
  0105520  ld 26, 136(1)
  0105524  ld 27, 144(1)
  0105528  ld 28, 152(1)
  010552c  ld 29, 160(1)
  0105530  ld 30, 168(1)
  0105534  ld 31, 176(1)
  0105538  addi 1, 1, 192
  010553c  blr

ClosestPointOnConvexPolyEdge:   # 0x105548, 0x168 bytes
  0105548  stdu 1, -208(1)
  010554c  mflr 0
  0105550  std 0, 224(1)
  0105554  stfd 31, 200(1)
  0105558  std 30, 184(1)
  010555c  ori 30, 5, 0
  0105560  std 31, 192(1)
  0105564  lis 5, 16
  0105568  std 29, 176(1)
  010556c  ori 31, 6, 0
  0105570  ori 29, 4, 0
  0105574  std 28, 168(1)
  0105578  ori 4, 30, 0
  010557c  std 27, 160(1)
  0105580  ori 28, 3, 0
  0105584  addi 27, 5, 21824
  0105588  ori 3, 29, 0
  010558c  std 26, 152(1)
  0105590  std 25, 144(1)
  0105594  std 24, 136(1)
  0105598  ori 5, 31, 0
  010559c  bl 0x104da8
  01055a0  li 4, 0
  01055a4  lfs 31, 0(27)
  01055a8  li 5, 0
  01055ac  subc 3, 4, 3
  01055b0  li 4, 1
  01055b4  cntlzw 3, 3
  01055b8  subc 5, 5, 4
  01055bc  sldi 3, 3, 58
  01055c0  cmpwi 31, 0
  01055c4  sradi 3, 3, 63
  01055c8  li 25, 0
  01055cc  and 27, 3, 5
  01055d0  addc 27, 4, 27
  01055d4  bf 1, 0x105678
  01055d8  ori 26, 30, 0
  01055dc  ori 24, 25, 0
  01055e0  addic 25, 24, 1
  01055e4  divw 3, 25, 31
  01055e8  mullw 3, 3, 31
  01055ec  ori 6, 29, 0
  01055f0  subc 4, 25, 3
  01055f4  addic 3, 1, 112
  01055f8  sldi 5, 4, 4
  01055fc  ori 4, 26, 0
  0105600  addc 5, 5, 30
  0105604  clrldi 5, 5, 32
  0105608  bl 0x105228
  010560c  lfs 1, 4(29)
  0105610  lfs 3, 116(1)
  0105614  lfs 2, 0(29)
  0105618  fsubs 1, 1, 3
  010561c  lfs 4, 112(1)
  0105620  cmpwi 24, 0
  0105624  lfs 6, 8(29)
  0105628  fsubs 5, 2, 4
  010562c  lfs 2, 120(1)
  0105630  fsubs 6, 6, 2
  0105634  fmuls 7, 1, 1
  0105638  lfs 1, 124(1)
  010563c  fmadds 5, 5, 5, 7
  0105640  fmadds 5, 6, 6, 5
  0105644  fsqrts 5, 5
  0105648  bt 2, 0x105658
  010564c  fcmpu 0, 31, 5
  0105650  cror 6, 0, 2
  0105654  bt 6, 0x10566c
  0105658  stfs 4, 0(28)
  010565c  stfs 3, 4(28)
  0105660  fmr 31, 5
  0105664  stfs 2, 8(28)
  0105668  stfs 1, 12(28)
  010566c  cmpw 25, 31
  0105670  addic 26, 26, 16
  0105674  bt 0, 0x1055dc
  0105678  ori 3, 27, 0
  010567c  ld 0, 224(1)
  0105680  mtlr 0
  0105684  lfd 31, 200(1)
  0105688  ld 24, 136(1)
  010568c  ld 25, 144(1)
  0105690  ld 26, 152(1)
  0105694  ld 27, 160(1)
  0105698  ld 28, 168(1)
  010569c  ld 29, 176(1)
  01056a0  ld 30, 184(1)
  01056a4  ld 31, 192(1)
  01056a8  addi 1, 1, 208
  01056ac  blr

DistOutsideConvexPoly2D:   # 0x1056b8, 0x78 bytes
  01056b8  stdu 1, -144(1)
  01056bc  mflr 0
  01056c0  std 0, 160(1)
  01056c4  std 31, 136(1)
  01056c8  ori 31, 3, 0
  01056cc  ori 6, 5, 0
  01056d0  addic 3, 1, 112
  01056d4  ori 5, 4, 0
  01056d8  ori 4, 31, 0
  01056dc  bl 0x1053d8
  01056e0  cmpwi 3, 0
  01056e4  bf 2, 0x1056f8
  01056e8  lis 3, 16
  01056ec  addi 3, 3, 22192
  01056f0  lfs 1, 0(3)
  01056f4  b 0x10571c
  01056f8  lfs 1, 116(1)
  01056fc  lfs 2, 4(31)
  0105700  lfs 3, 112(1)
  0105704  fsubs 1, 1, 2
  0105708  lfs 2, 0(31)
  010570c  fsubs 2, 3, 2
  0105710  fmuls 1, 1, 1
  0105714  fmadds 1, 2, 2, 1
  0105718  fsqrts 1, 1
  010571c  ld 0, 160(1)
  0105720  mtlr 0
  0105724  ld 31, 136(1)
  0105728  addi 1, 1, 144
  010572c  blr

STUB_00105730:   # 0x105730, 0x4 bytes
  0105730  blr

STUB_00105734:   # 0x105734, 0x8 bytes
  0105734  li 3, 0
  0105738  blr

DistPointToLine2D:   # 0x105740, 0x8c bytes
  0105740  lfs 2, 4(3)
  0105744  lfs 1, 4(4)
  0105748  lfs 4, 0(3)
  010574c  fsubs 5, 2, 1
  0105750  lfs 3, 0(4)
  0105754  fsubs 6, 4, 3
  0105758  lis 3, 16
  010575c  addi 3, 3, 22332
  0105760  fmuls 5, 5, 5
  0105764  fmadds 5, 6, 6, 5
  0105768  lfs 6, 0(3)
  010576c  fsqrts 5, 5
  0105770  fcmpu 0, 5, 6
  0105774  bf 2, 0x105798
  0105778  lfs 1, 4(5)
  010577c  lfs 3, 0(5)
  0105780  fsubs 1, 2, 1
  0105784  fsubs 2, 4, 3
  0105788  fmuls 1, 1, 1
  010578c  fmadds 1, 2, 2, 1
  0105790  fsqrts 1, 1
  0105794  b 0x1057c8
  0105798  lfs 6, 0(5)
  010579c  fsubs 3, 3, 4
  01057a0  lfs 7, 4(5)
  01057a4  fsubs 1, 1, 2
  01057a8  fsubs 4, 6, 4
  01057ac  fsubs 2, 7, 2
  01057b0  fmuls 5, 5, 5
  01057b4  fmuls 1, 4, 1
  01057b8  fmsubs 1, 2, 3, 1
  01057bc  fmuls 1, 1, 1
  01057c0  fdivs 1, 1, 5
  01057c4  fsqrts 1, 1
  01057c8  blr

MB_HasCollPrims:   # 0x1057cc, 0x28 bytes
  01057cc  lwz 3, 148(3)
  01057d0  cmpwi 3, 0
  01057d4  bt 2, 0x1057ec
  01057d8  lwz 3, 8(3)
  01057dc  cmpwi 3, 0
  01057e0  bt 2, 0x1057ec
  01057e4  li 3, 1
  01057e8  b 0x1057f0
  01057ec  li 3, 0
  01057f0  blr

SetCollDamIn:   # 0x1057f4, 0x28 bytes
  01057f4  li 6, 0
  01057f8  stw 4, 16(3)
  01057fc  stw 5, 20(3)
  0105800  stfs 1, 28(3)
  0105804  stw 6, 32(3)
  0105808  stw 6, 12(3)
  010580c  stw 6, 8(3)
  0105810  stw 6, 4(3)
  0105814  stw 6, 0(3)
  0105818  blr

SetCollDamIn:   # 0x10581c, 0x38 bytes
  010581c  stfs 1, 28(3)
  0105820  li 6, 1
  0105824  lfs 1, 0(7)
  0105828  stw 4, 16(3)
  010582c  stfs 1, 0(3)
  0105830  lfs 1, 4(7)
  0105834  stw 5, 20(3)
  0105838  stfs 1, 4(3)
  010583c  lfs 1, 8(7)
  0105840  stw 6, 32(3)
  0105844  stfs 1, 8(3)
  0105848  lfs 1, 12(7)
  010584c  stfs 1, 12(3)
  0105850  blr

DamageSphereAtPos:   # 0x105870, 0x180 bytes
  0105870  stdu 1, -176(1)
  0105874  mflr 0
  0105878  std 0, 192(1)
  010587c  fmr 4, 3
  0105880  ori 7, 3, 0
  0105884  lhz 12, 52(3)
  0105888  lhz 8, 166(3)
  010588c  ori 5, 6, 0
  0105890  ori 6, 4, 0
  0105894  fmr 3, 1
  0105898  ori 4, 9, 0
  010589c  lwz 3, 292(1)
  01058a0  rlwinm 11, 12, 0, 23, 23
  01058a4  extsw 9, 3
  01058a8  cmpwi 11, 0
  01058ac  ori 3, 10, 0
  01058b0  std 31, 168(1)
  01058b4  std 30, 160(1)
  01058b8  fmr 1, 4
  01058bc  bt 2, 0x1058cc
  01058c0  lfs 5, 192(7)
  01058c4  lfs 4, 196(7)
  01058c8  b 0x105970
  01058cc  lis 10, 16
  01058d0  lfs 4, 72(7)
  01058d4  addi 10, 10, 22612
  01058d8  lfs 5, 0(10)
  01058dc  lfs 6, 4(10)
  01058e0  fadds 5, 4, 5
  01058e4  lfs 7, 8(10)
  01058e8  fsubs 8, 6, 4
  01058ec  fsubs 6, 6, 5
  01058f0  fsub 10, 4, 8
  01058f4  fsubs 9, 7, 5
  01058f8  fsubs 7, 7, 4
  01058fc  fsub 11, 5, 6
  0105900  fsel 4, 10, 8, 4
  0105904  fsel 5, 11, 6, 5
  0105908  fsub 8, 7, 4
  010590c  lfs 6, 12(10)
  0105910  fsub 10, 9, 5
  0105914  fsel 4, 8, 7, 4
  0105918  lfs 7, 16(10)
  010591c  lfs 8, 20(10)
  0105920  lfs 12, 24(10)
  0105924  fsel 5, 10, 9, 5
  0105928  fmuls 9, 4, 4
  010592c  fmuls 10, 5, 5
  0105930  fmuls 11, 9, 4
  0105934  fmuls 13, 10, 5
  0105938  fmuls 0, 9, 11
  010593c  fmadds 4, 11, 6, 4
  0105940  fmuls 11, 10, 13
  0105944  fmadds 5, 13, 6, 5
  0105948  fmuls 6, 9, 0
  010594c  fmadds 4, 0, 7, 4
  0105950  fmuls 13, 10, 11
  0105954  fmadds 5, 11, 7, 5
  0105958  fmuls 7, 9, 6
  010595c  fmadds 4, 6, 8, 4
  0105960  fmuls 6, 10, 13
  0105964  fmadds 5, 13, 8, 5
  0105968  fmadds 4, 7, 12, 4
  010596c  fmadds 5, 6, 12, 5
  0105970  fmuls 5, 5, 1
  0105974  ori 10, 3, 0
  0105978  fmuls 1, 4, 1
  010597c  li 11, 1
  0105980  lis 3, 17839
  0105984  stw 7, 128(1)
  0105988  lis 12, 16256
  010598c  stw 5, 132(1)
  0105990  ori 30, 3, 57190
  0105994  stfs 2, 140(1)
  0105998  stw 11, 144(1)
  010599c  addic 31, 1, 112
  01059a0  ori 3, 6, 0
  01059a4  stw 12, 120(1)
  01059a8  stw 30, 124(1)
  01059ac  ori 6, 7, 0
  01059b0  ori 5, 9, 0
  01059b4  ori 7, 31, 0
  01059b8  stfs 5, 112(1)
  01059bc  stfs 1, 116(1)
  01059c0  stb 4, 136(1)
  01059c4  fmr 1, 3
  01059c8  stb 10, 137(1)
  01059cc  sth 8, 138(1)
  01059d0  bl 0x5e598
  01059d4  nop
  01059d8  ld 0, 192(1)
  01059dc  mtlr 0
  01059e0  ld 30, 160(1)
  01059e4  ld 31, 168(1)
  01059e8  addi 1, 1, 176
  01059ec  blr

DamageSphereAtBone:   # 0x1059f0, 0xc4 bytes
  01059f0  stdu 1, -224(1)
  01059f4  mflr 0
  01059f8  std 0, 240(1)
  01059fc  stfd 30, 208(1)
  0105a00  stfd 31, 216(1)
  0105a04  std 31, 200(1)
  0105a08  ori 31, 6, 0
  0105a0c  fmr 31, 3
  0105a10  std 29, 184(1)
  0105a14  std 28, 176(1)
  0105a18  fmr 30, 1
  0105a1c  addic 29, 1, 128
  0105a20  std 30, 192(1)
  0105a24  ori 28, 3, 0
  0105a28  std 27, 168(1)
  0105a2c  ori 30, 10, 0
  0105a30  ori 27, 9, 0
  0105a34  lwz 6, 340(1)
  0105a38  std 26, 160(1)
  0105a3c  ori 5, 29, 0
  0105a40  extsw 26, 6
  0105a44  bl 0xf1114
  0105a48  nop
  0105a4c  extsw 3, 31
  0105a50  ori 9, 27, 0
  0105a54  fmr 1, 30
  0105a58  fmr 3, 31
  0105a5c  ori 4, 29, 0
  0105a60  ori 6, 31, 0
  0105a64  std 3, 144(1)
  0105a68  std 26, 112(1)
  0105a6c  ori 3, 28, 0
  0105a70  lfd 2, 144(1)
  0105a74  ori 10, 30, 0
  0105a78  fcfid 2, 2
  0105a7c  frsp 2, 2
  0105a80  bl 0x105870
  0105a84  ld 0, 240(1)
  0105a88  mtlr 0
  0105a8c  lfd 30, 208(1)
  0105a90  lfd 31, 216(1)
  0105a94  ld 26, 160(1)
  0105a98  ld 27, 168(1)
  0105a9c  ld 28, 176(1)
  0105aa0  ld 29, 184(1)
  0105aa4  ld 30, 192(1)
  0105aa8  ld 31, 200(1)
  0105aac  addi 1, 1, 224
  0105ab0  blr

CollDamageMobyDirect:   # 0x105ab4, 0x150 bytes
  0105ab4  stdu 1, -80(1)
  0105ab8  std 31, 72(1)
  0105abc  lis 31, 161
  0105ac0  li 4, 80
  0105ac4  std 30, 64(1)
  0105ac8  addic 31, 31, 2368
  0105acc  addc 30, 1, 4
  0105ad0  std 29, 56(1)
  0105ad4  ori 4, 9, 0
  0105ad8  ori 29, 7, 0
  0105adc  rldicl 7, 4, 32, 32
  0105ae0  rldicl 10, 29, 32, 32
  0105ae4  std 5, 64(30)
  0105ae8  std 6, 72(30)
  0105aec  rldicl 9, 8, 8, 56
  0105af0  std 8, 88(30)
  0105af4  ori 6, 29, 0
  0105af8  lbz 11, 164(3)
  0105afc  rldicl 5, 8, 16, 56
  0105b00  lfs 3, 68(30)
  0105b04  rldicl 4, 8, 32, 48
  0105b08  lfs 2, 76(30)
  0105b0c  cmpwi 11, 255
  0105b10  lwz 12, 20(31)
  0105b14  lfs 1, 92(30)
  0105b18  lfs 5, 64(30)
  0105b1c  std 28, 48(1)
  0105b20  lfs 4, 72(30)
  0105b24  bt 2, 0x105b78
  0105b28  lis 30, 161
  0105b2c  rlwinm 29, 11, 6, 18, 25
  0105b30  addic 30, 30, 19456
  0105b34  addc 29, 30, 29
  0105b38  lwz 29, 52(29)
  0105b3c  cmpw 29, 3
  0105b40  bf 2, 0x105b78
  0105b44  slwi 11, 11, 6
  0105b48  srawi 29, 8, 31
  0105b4c  addc 11, 30, 11
  0105b50  srwi 30, 29, 1
  0105b54  xor 8, 30, 8
  0105b58  lwz 11, 44(11)
  0105b5c  subc 8, 8, 29
  0105b60  srawi 30, 11, 31
  0105b64  srwi 28, 30, 1
  0105b68  xor 11, 28, 11
  0105b6c  subc 11, 11, 30
  0105b70  cmpw 11, 8
  0105b74  bt 1, 0x105bec
  0105b78  lis 8, 161
  0105b7c  slwi 11, 12, 6
  0105b80  addic 8, 8, 19456
  0105b84  li 30, 0
  0105b88  addc 29, 8, 11
  0105b8c  extsw 11, 11
  0105b90  clrldi 29, 29, 32
  0105b94  addc 8, 8, 11
  0105b98  addic 11, 12, 1
  0105b9c  clrlwi 11, 11, 26
  0105ba0  stw 30, 12(29)
  0105ba4  stw 30, 8(29)
  0105ba8  stw 30, 4(29)
  0105bac  stw 30, 0(29)
  0105bb0  stfs 5, 16(29)
  0105bb4  stfs 3, 20(29)
  0105bb8  stfs 4, 24(29)
  0105bbc  stfs 2, 28(29)
  0105bc0  stw 10, 32(8)
  0105bc4  stw 6, 36(8)
  0105bc8  stb 9, 40(8)
  0105bcc  stb 5, 41(8)
  0105bd0  sth 4, 42(8)
  0105bd4  stfs 1, 44(8)
  0105bd8  stw 7, 48(8)
  0105bdc  stw 3, 52(8)
  0105be0  stw 30, 56(8)
  0105be4  stb 12, 164(3)
  0105be8  stw 11, 20(31)
  0105bec  ld 28, 48(1)
  0105bf0  ld 29, 56(1)
  0105bf4  ld 30, 64(1)
  0105bf8  ld 31, 72(1)
  0105bfc  addi 1, 1, 80
  0105c00  blr

CollDamageMobyDirect:   # 0x105c08, 0x124 bytes
  0105c08  stdu 1, -64(1)
  0105c0c  lis 9, 161
  0105c10  lbz 11, 164(3)
  0105c14  addic 9, 9, 2368
  0105c18  cmpwi 11, 255
  0105c1c  std 31, 56(1)
  0105c20  lwz 6, 20(9)
  0105c24  bt 2, 0x105c58
  0105c28  lis 10, 161
  0105c2c  rlwinm 12, 11, 6, 18, 25
  0105c30  addic 10, 10, 19456
  0105c34  addc 12, 10, 12
  0105c38  lwz 12, 52(12)
  0105c3c  cmpw 12, 3
  0105c40  bf 2, 0x105c58
  0105c44  slwi 11, 11, 6
  0105c48  addc 10, 10, 11
  0105c4c  lfs 2, 44(10)
  0105c50  fcmpu 0, 2, 1
  0105c54  bt 1, 0x105d20
  0105c58  ori 12, 5, 0
  0105c5c  lis 5, 161
  0105c60  slwi 10, 6, 6
  0105c64  ori 31, 4, 0
  0105c68  addic 5, 5, 19456
  0105c6c  extsw 4, 10
  0105c70  addc 4, 5, 4
  0105c74  li 11, 0
  0105c78  stfs 1, 44(4)
  0105c7c  lfs 1, 4(8)
  0105c80  lfs 2, 0(8)
  0105c84  fmuls 1, 1, 1
  0105c88  lfs 3, 8(8)
  0105c8c  stw 3, 52(4)
  0105c90  stw 31, 32(4)
  0105c94  lis 31, 16
  0105c98  stw 12, 36(4)
  0105c9c  addi 12, 31, 23556
  0105ca0  stw 11, 56(4)
  0105ca4  fmadds 1, 2, 2, 1
  0105ca8  lfs 2, 0(12)
  0105cac  fmadds 1, 3, 3, 1
  0105cb0  fsqrts 1, 1
  0105cb4  fcmpu 0, 1, 2
  0105cb8  cror 6, 0, 2
  0105cbc  bt 6, 0x105cc4
  0105cc0  li 11, 1
  0105cc4  addc 5, 5, 10
  0105cc8  stw 11, 48(4)
  0105ccc  clrldi 5, 5, 32
  0105cd0  lfs 1, 0(7)
  0105cd4  addic 4, 6, 1
  0105cd8  clrlwi 4, 4, 26
  0105cdc  stfs 1, 0(5)
  0105ce0  lfs 1, 4(7)
  0105ce4  stfs 1, 4(5)
  0105ce8  lfs 1, 8(7)
  0105cec  stfs 1, 8(5)
  0105cf0  lfs 1, 12(7)
  0105cf4  stfs 1, 12(5)
  0105cf8  lfs 1, 0(8)
  0105cfc  stfs 1, 16(5)
  0105d00  lfs 1, 4(8)
  0105d04  stfs 1, 20(5)
  0105d08  lfs 1, 8(8)
  0105d0c  stfs 1, 24(5)
  0105d10  lfs 1, 12(8)
  0105d14  stfs 1, 28(5)
  0105d18  stb 6, 164(3)
  0105d1c  stw 4, 20(9)
  0105d20  ld 31, 56(1)
  0105d24  addi 1, 1, 64
  0105d28  blr

CollDamageMobyDirect_wrap:   # 0x105d2c, 0x28 bytes
  0105d2c  stdu 1, -112(1)
  0105d30  mflr 0
  0105d34  std 0, 128(1)
  0105d38  lis 8, 161
  0105d3c  addic 8, 8, 23856
  0105d40  bl 0x105c08
  0105d44  ld 0, 128(1)
  0105d48  mtlr 0
  0105d4c  addi 1, 1, 112
  0105d50  blr

MB_CollLineMulti:   # 0x105d58, 0x1e0 bytes
  0105d58  stdu 1, -304(1)
  0105d5c  mflr 0
  0105d60  std 0, 320(1)
  0105d64  stfd 22, 224(1)
  0105d68  stfd 23, 232(1)
  0105d6c  stfd 24, 240(1)
  0105d70  stfd 25, 248(1)
  0105d74  stfd 26, 256(1)
  0105d78  stfd 27, 264(1)
  0105d7c  stfd 28, 272(1)
  0105d80  stfd 29, 280(1)
  0105d84  stfd 30, 288(1)
  0105d88  stfd 31, 296(1)
  0105d8c  std 31, 216(1)
  0105d90  lis 10, 16
  0105d94  std 26, 176(1)
  0105d98  std 24, 160(1)
  0105d9c  ori 31, 9, 0
  0105da0  addi 26, 10, 23892
  0105da4  std 30, 208(1)
  0105da8  ori 24, 3, 0
  0105dac  std 29, 200(1)
  0105db0  ori 30, 8, 0
  0105db4  std 28, 192(1)
  0105db8  ori 29, 7, 0
  0105dbc  std 27, 184(1)
  0105dc0  ori 28, 6, 0
  0105dc4  std 23, 152(1)
  0105dc8  ori 27, 5, 0
  0105dcc  ori 3, 31, 0
  0105dd0  std 25, 168(1)
  0105dd4  ori 23, 4, 0
  0105dd8  bl 0x502730
  0105ddc  nop
  0105de0  lfs 22, 0(26)
  0105de4  fdivs 22, 22, 1
  0105de8  lfs 6, 0(27)
  0105dec  lfs 5, 4(27)
  0105df0  li 25, 0
  0105df4  lfs 4, 8(27)
  0105df8  cmpwi 31, 0
  0105dfc  lfs 3, 0(28)
  0105e00  ori 26, 25, 0
  0105e04  lfs 24, 0(24)
  0105e08  lfs 2, 4(28)
  0105e0c  lfs 25, 4(24)
  0105e10  lfs 1, 8(28)
  0105e14  lfs 26, 8(24)
  0105e18  lfs 28, 0(23)
  0105e1c  lfs 27, 12(24)
  0105e20  lfs 29, 4(23)
  0105e24  lfs 30, 8(23)
  0105e28  lfs 31, 12(23)
  0105e2c  fsubs 24, 24, 6
  0105e30  fsubs 25, 25, 5
  0105e34  fsubs 26, 26, 4
  0105e38  fsubs 28, 28, 3
  0105e3c  fsubs 29, 29, 2
  0105e40  fsubs 30, 30, 1
  0105e44  fmr 23, 22
  0105e48  bf 1, 0x105ed8
  0105e4c  fmadds 6, 24, 23, 6
  0105e50  stfs 27, 124(1)
  0105e54  fmadds 5, 25, 23, 5
  0105e58  stfs 31, 140(1)
  0105e5c  fmadds 4, 26, 23, 4
  0105e60  addic 3, 1, 112
  0105e64  fmadds 3, 28, 23, 3
  0105e68  addic 4, 1, 128
  0105e6c  fmadds 2, 29, 23, 2
  0105e70  li 5, 0
  0105e74  fmadds 1, 30, 23, 1
  0105e78  ori 6, 29, 0
  0105e7c  ori 7, 30, 0
  0105e80  stfs 6, 112(1)
  0105e84  stfs 5, 116(1)
  0105e88  stfs 4, 120(1)
  0105e8c  stfs 3, 128(1)
  0105e90  stfs 2, 132(1)
  0105e94  stfs 1, 136(1)
  0105e98  bl 0x57820
  0105e9c  nop
  0105ea0  cmpwi 3, 0
  0105ea4  bt 2, 0x105eb0
  0105ea8  li 3, 1
  0105eac  b 0x105edc
  0105eb0  lfs 6, 0(27)
  0105eb4  addic 25, 25, 1
  0105eb8  lfs 5, 4(27)
  0105ebc  fadds 23, 22, 23
  0105ec0  lfs 4, 8(27)
  0105ec4  cmpw 25, 31
  0105ec8  lfs 3, 0(28)
  0105ecc  lfs 2, 4(28)
  0105ed0  lfs 1, 8(28)
  0105ed4  bt 0, 0x105e4c
  0105ed8  ori 3, 26, 0
  0105edc  ld 0, 320(1)
  0105ee0  mtlr 0
  0105ee4  lfd 22, 224(1)
  0105ee8  lfd 23, 232(1)
  0105eec  lfd 24, 240(1)
  0105ef0  lfd 25, 248(1)
  0105ef4  lfd 26, 256(1)
  0105ef8  lfd 27, 264(1)
  0105efc  lfd 28, 272(1)
  0105f00  lfd 29, 280(1)
  0105f04  lfd 30, 288(1)
  0105f08  lfd 31, 296(1)
  0105f0c  ld 23, 152(1)
  0105f10  ld 24, 160(1)
  0105f14  ld 25, 168(1)
  0105f18  ld 26, 176(1)
  0105f1c  ld 27, 184(1)
  0105f20  ld 28, 192(1)
  0105f24  ld 29, 200(1)
  0105f28  ld 30, 208(1)
  0105f2c  ld 31, 216(1)
  0105f30  addi 1, 1, 304
  0105f34  blr

CollWaterHeight:   # 0x105f40, 0x138 bytes
  0105f40  stdu 1, -144(1)
  0105f44  mflr 0
  0105f48  std 0, 160(1)
  0105f4c  std 30, 128(1)
  0105f50  lis 5, 230
  0105f54  std 31, 136(1)
  0105f58  ori 30, 3, 0
  0105f5c  ori 31, 4, 0
  0105f60  lwz 3, -21880(5)
  0105f64  cmpwi 3, 0
  0105f68  bt 2, 0x105f9c
  0105f6c  lfs 3, 8(30)
  0105f70  addic 6, 1, 112
  0105f74  stfs 3, 112(1)
  0105f78  lfs 1, 0(30)
  0105f7c  ori 7, 31, 0
  0105f80  lfs 2, 4(30)
  0105f84  bl 0x17c3e0
  0105f88  nop
  0105f8c  cmpwi 3, 0
  0105f90  bt 2, 0x105f9c
  0105f94  lfs 1, 112(1)
  0105f98  b 0x106060
  0105f9c  lis 3, 230
  0105fa0  lwz 3, -21876(3)
  0105fa4  cmpwi 3, 0
  0105fa8  bt 2, 0x10603c
  0105fac  lis 3, 230
  0105fb0  lfs 2, 8(30)
  0105fb4  lis 4, 16
  0105fb8  addic 3, 3, -21872
  0105fbc  addi 4, 4, 24376
  0105fc0  lfs 1, 8(3)
  0105fc4  lfs 3, 0(4)
  0105fc8  fsubs 2, 2, 1
  0105fcc  fabs 2, 2
  0105fd0  fcmpu 0, 2, 3
  0105fd4  cror 6, 1, 2
  0105fd8  bt 6, 0x10603c
  0105fdc  lfs 2, 4(30)
  0105fe0  lis 4, 230
  0105fe4  lfs 3, 4(3)
  0105fe8  lfs 4, 0(30)
  0105fec  fsubs 2, 2, 3
  0105ff0  lfs 3, -21872(4)
  0105ff4  fsubs 3, 4, 3
  0105ff8  fmuls 2, 2, 2
  0105ffc  fmadds 2, 3, 3, 2
  0106000  lfs 3, 12(3)
  0106004  fsqrts 2, 2
  0106008  fcmpu 0, 2, 3
  010600c  cror 6, 1, 2
  0106010  bt 6, 0x10603c
  0106014  cmpwi 31, 0
  0106018  bt 2, 0x106038
  010601c  li 4, 0
  0106020  lis 5, 16256
  0106024  stw 4, 12(31)
  0106028  stw 4, 4(31)
  010602c  stw 4, 0(31)
  0106030  stw 5, 8(31)
  0106034  lfs 1, 8(3)
  0106038  b 0x106060
  010603c  cmpwi 31, 0
  0106040  bt 2, 0x10605c
  0106044  li 3, 0
  0106048  lis 4, 16256
  010604c  stw 3, 12(31)
  0106050  stw 3, 4(31)
  0106054  stw 3, 0(31)
  0106058  stw 4, 8(31)
  010605c  lfs 1, 8(30)
  0106060  ld 0, 160(1)
  0106064  mtlr 0
  0106068  ld 30, 128(1)
  010606c  ld 31, 136(1)
  0106070  addi 1, 1, 144
  0106074  blr

MB_EulerToQuat:   # 0x106078, 0xbc bytes
  0106078  stdu 1, -208(1)
  010607c  mflr 0
  0106080  std 0, 224(1)
  0106084  std 31, 200(1)
  0106088  std 30, 192(1)
  010608c  ori 31, 4, 0
  0106090  std 29, 184(1)
  0106094  addic 30, 1, 144
  0106098  ori 29, 3, 0
  010609c  li 4, 0
  01060a0  ori 3, 30, 0
  01060a4  std 28, 176(1)
  01060a8  std 27, 168(1)
  01060ac  lfs 1, 0(31)
  01060b0  bl 0x501980
  01060b4  nop
  01060b8  addic 28, 1, 128
  01060bc  lfs 1, 4(31)
  01060c0  li 4, 1
  01060c4  ori 3, 28, 0
  01060c8  bl 0x501980
  01060cc  nop
  01060d0  addic 27, 1, 112
  01060d4  li 4, 2
  01060d8  lfs 1, 8(31)
  01060dc  ori 3, 27, 0
  01060e0  bl 0x501980
  01060e4  nop
  01060e8  ori 3, 29, 0
  01060ec  ori 4, 30, 0
  01060f0  ori 5, 28, 0
  01060f4  bl 0x5017c4
  01060f8  nop
  01060fc  ori 3, 29, 0
  0106100  ori 4, 29, 0
  0106104  ori 5, 27, 0
  0106108  bl 0x5017c4
  010610c  nop
  0106110  ld 0, 224(1)
  0106114  mtlr 0
  0106118  ld 27, 168(1)
  010611c  ld 28, 176(1)
  0106120  ld 29, 184(1)
  0106124  ld 30, 192(1)
  0106128  ld 31, 200(1)
  010612c  addi 1, 1, 208
  0106130  blr

MB_RegisterLameShadow:   # 0x106150, 0x1b0 bytes
  0106150  stdu 1, -192(1)
  0106154  mflr 0
  0106158  std 0, 208(1)
  010615c  stfd 30, 176(1)
  0106160  stfd 31, 184(1)
  0106164  std 31, 168(1)
  0106168  ori 31, 3, 0
  010616c  lbz 3, 49(3)
  0106170  fmr 31, 1
  0106174  std 30, 160(1)
  0106178  std 29, 152(1)
  010617c  cmpwi 3, 0
  0106180  bt 2, 0x1062dc
  0106184  lis 30, 150
  0106188  lwz 30, -6680(30)
  010618c  cmpwi 30, 32
  0106190  bf 0, 0x1062dc
  0106194  lis 29, 150
  0106198  lfs 1, 16(31)
  010619c  slwi 3, 30, 5
  01061a0  addic 29, 29, -6672
  01061a4  lis 4, 15395
  01061a8  addc 3, 29, 3
  01061ac  ori 4, 4, 55050
  01061b0  clrldi 3, 3, 32
  01061b4  li 5, 2
  01061b8  li 6, 0
  01061bc  li 7, 0
  01061c0  stfs 1, 0(3)
  01061c4  lfs 1, 20(31)
  01061c8  stfs 1, 4(3)
  01061cc  lfs 1, 24(31)
  01061d0  stfs 1, 8(3)
  01061d4  lfs 1, 28(31)
  01061d8  stfs 1, 12(3)
  01061dc  lfs 1, 16(31)
  01061e0  lis 3, 16
  01061e4  stfs 1, 112(1)
  01061e8  addi 30, 3, 24884
  01061ec  lfs 2, 20(31)
  01061f0  addic 3, 1, 128
  01061f4  stfs 2, 116(1)
  01061f8  lfs 3, 28(31)
  01061fc  lfs 4, 24(31)
  0106200  stfs 3, 124(1)
  0106204  stw 4, 120(1)
  0106208  stfs 1, 128(1)
  010620c  stfs 2, 132(1)
  0106210  addic 4, 1, 112
  0106214  stfs 3, 140(1)
  0106218  lfs 1, 0(30)
  010621c  fadds 1, 4, 1
  0106220  stfs 1, 136(1)
  0106224  bl 0x57820
  0106228  nop
  010622c  lis 4, 161
  0106230  lfs 30, 4(30)
  0106234  cmpwi 3, 0
  0106238  addic 30, 4, 2368
  010623c  bt 2, 0x106244
  0106240  lfs 30, 40(30)
  0106244  bl 0x60780
  0106248  nop
  010624c  cmpwi 3, 0
  0106250  bt 2, 0x1062dc
  0106254  lis 3, 16
  0106258  lis 4, 150
  010625c  addi 3, 3, 24884
  0106260  lfs 1, 8(3)
  0106264  lwz 5, -6680(4)
  0106268  fadds 1, 30, 1
  010626c  slwi 6, 5, 5
  0106270  lfs 2, 64(30)
  0106274  extsw 7, 6
  0106278  addc 6, 29, 6
  010627c  addc 7, 29, 7
  0106280  clrldi 6, 6, 32
  0106284  stfs 1, 8(7)
  0106288  stfs 2, 16(6)
  010628c  lfs 1, 68(30)
  0106290  stfs 1, 20(6)
  0106294  lfs 1, 72(30)
  0106298  stfs 1, 24(6)
  010629c  lfs 1, 76(30)
  01062a0  stfs 1, 28(6)
  01062a4  lfs 1, 24(31)
  01062a8  lfs 2, 12(3)
  01062ac  fsubs 1, 1, 30
  01062b0  lfs 3, 16(3)
  01062b4  lfs 4, 20(3)
  01062b8  addic 3, 5, 1
  01062bc  stw 3, -6680(4)
  01062c0  fabs 1, 1
  01062c4  fsubs 1, 2, 1
  01062c8  fmuls 1, 1, 3
  01062cc  fsub 2, 1, 4
  01062d0  fsel 1, 2, 1, 4
  01062d4  fmuls 1, 1, 31
  01062d8  stfs 1, 12(7)
  01062dc  ld 0, 208(1)
  01062e0  mtlr 0
  01062e4  lfd 30, 176(1)
  01062e8  lfd 31, 184(1)
  01062ec  ld 29, 152(1)
  01062f0  ld 30, 160(1)
  01062f4  ld 31, 168(1)
  01062f8  addi 1, 1, 192
  01062fc  blr

MB_SetZBoundsFromPos:   # 0x106308, 0x24 bytes
  0106308  lis 4, 16
  010630c  lfs 1, 24(3)
  0106310  addi 4, 4, 25344
  0106314  lfs 2, 0(4)
  0106318  fsubs 3, 1, 2
  010631c  fadds 1, 1, 2
  0106320  stfs 3, 132(3)
  0106324  stfs 1, 136(3)
  0106328  blr

MB_SetZBounds:   # 0x106330, 0x20 bytes
  0106330  lis 4, 16
  0106334  addi 4, 4, 25388
  0106338  lfs 2, 0(4)
  010633c  fsubs 3, 1, 2
  0106340  fadds 1, 1, 2
  0106344  stfs 3, 132(3)
  0106348  stfs 1, 136(3)
  010634c  blr

MB_SetZBoundsFromGround:   # 0x106360, 0xe0 bytes
  0106360  stdu 1, -160(1)
  0106364  mflr 0
  0106368  std 0, 176(1)
  010636c  lis 4, 16
  0106370  lfs 5, 16(3)
  0106374  addi 4, 4, 25424
  0106378  lfs 4, 20(3)
  010637c  stfs 5, 112(1)
  0106380  lfs 1, 28(3)
  0106384  stfs 4, 116(1)
  0106388  std 31, 152(1)
  010638c  stfs 1, 124(1)
  0106390  ori 31, 3, 0
  0106394  lfs 2, 0(4)
  0106398  lfs 3, 24(3)
  010639c  fsubs 6, 3, 2
  01063a0  stfs 6, 120(1)
  01063a4  lfs 2, 4(4)
  01063a8  fcmpu 0, 6, 2
  01063ac  cror 6, 1, 2
  01063b0  bt 6, 0x1063bc
  01063b4  lis 3, 16128
  01063b8  stw 3, 120(1)
  01063bc  fadds 2, 3, 2
  01063c0  stfs 5, 128(1)
  01063c4  stfs 4, 132(1)
  01063c8  addic 4, 1, 112
  01063cc  stfs 1, 140(1)
  01063d0  addic 3, 1, 128
  01063d4  li 5, 34
  01063d8  li 6, 0
  01063dc  li 7, 0
  01063e0  stfs 2, 136(1)
  01063e4  bl 0x57820
  01063e8  nop
  01063ec  lis 4, 16
  01063f0  cmpwi 3, 0
  01063f4  addi 4, 4, 25424
  01063f8  lfs 2, 8(4)
  01063fc  fmr 1, 2
  0106400  bt 2, 0x106424
  0106404  lis 3, 16
  0106408  lis 4, 161
  010640c  addi 3, 3, 25424
  0106410  addic 4, 4, 2368
  0106414  lfs 3, 12(3)
  0106418  lfs 2, 40(4)
  010641c  fsubs 1, 2, 3
  0106420  fadds 2, 2, 3
  0106424  stfs 1, 132(31)
  0106428  stfs 2, 136(31)
  010642c  ld 0, 176(1)
  0106430  mtlr 0
  0106434  ld 31, 152(1)
  0106438  addi 1, 1, 160
  010643c  blr

MB_SetZBoundsFromFloorCeil:   # 0x106468, 0x2d0 bytes
  0106468  stdu 1, -240(1)
  010646c  mflr 0
  0106470  std 0, 256(1)
  0106474  stfd 22, 160(1)
  0106478  stfd 23, 168(1)
  010647c  stfd 24, 176(1)
  0106480  stfd 25, 184(1)
  0106484  stfd 26, 192(1)
  0106488  stfd 27, 200(1)
  010648c  stfd 28, 208(1)
  0106490  stfd 29, 216(1)
  0106494  stfd 30, 224(1)
  0106498  stfd 31, 232(1)
  010649c  lis 4, 165
  01064a0  addic 5, 4, -15136
  01064a4  lfs 3, -15136(4)
  01064a8  lfs 2, 4(5)
  01064ac  fmuls 1, 2, 2
  01064b0  lis 4, 16
  01064b4  std 31, 152(1)
  01064b8  addi 4, 4, 25664
  01064bc  ori 31, 3, 0
  01064c0  fmadds 1, 3, 3, 1
  01064c4  lfs 28, 0(4)
  01064c8  fmr 25, 28
  01064cc  lfs 27, 8(5)
  01064d0  lfs 29, 0(3)
  01064d4  lfs 30, 4(3)
  01064d8  lfs 22, 8(3)
  01064dc  fsqrts 4, 1
  01064e0  lfs 31, 12(3)
  01064e4  fmr 26, 25
  01064e8  std 30, 144(1)
  01064ec  fcmpu 0, 4, 26
  01064f0  bt 2, 0x106540
  01064f4  frsqrte 4, 1
  01064f8  lis 3, 16
  01064fc  addi 3, 3, 25664
  0106500  lfs 5, 4(3)
  0106504  lfs 6, 8(3)
  0106508  fmuls 7, 1, 4
  010650c  fmuls 8, 5, 4
  0106510  fnmsubs 7, 7, 4, 6
  0106514  fmadds 4, 7, 8, 4
  0106518  fmuls 7, 1, 4
  010651c  fmuls 8, 5, 4
  0106520  fnmsubs 7, 7, 4, 6
  0106524  fmadds 4, 7, 8, 4
  0106528  fmuls 1, 1, 4
  010652c  fmuls 5, 5, 4
  0106530  fnmsubs 1, 1, 4, 6
  0106534  fmadds 26, 1, 5, 4
  0106538  fmuls 25, 3, 26
  010653c  fmuls 26, 2, 26
  0106540  lis 3, 16
  0106544  fmuls 1, 25, 31
  0106548  fmuls 2, 26, 31
  010654c  addi 8, 3, 25664
  0106550  addic 3, 1, 112
  0106554  addic 4, 1, 128
  0106558  li 5, 34
  010655c  lfs 23, 12(8)
  0106560  stfs 31, 124(1)
  0106564  fmuls 22, 22, 23
  0106568  li 6, 0
  010656c  li 7, 0
  0106570  stfs 22, 120(1)
  0106574  lfs 24, 16(8)
  0106578  stfs 31, 140(1)
  010657c  fmuls 1, 1, 24
  0106580  fmuls 2, 2, 24
  0106584  fmsubs 1, 29, 23, 1
  0106588  fmsubs 2, 30, 23, 2
  010658c  stfs 1, 112(1)
  0106590  stfs 2, 116(1)
  0106594  stfs 1, 128(1)
  0106598  stfs 2, 132(1)
  010659c  lfs 1, 20(8)
  01065a0  fsubs 1, 22, 1
  01065a4  stfs 1, 136(1)
  01065a8  bl 0x57820
  01065ac  nop
  01065b0  cmpwi 3, 0
  01065b4  bt 2, 0x1066ec
  01065b8  lfs 1, 12(31)
  01065bc  lis 3, 16
  01065c0  fmuls 2, 25, 1
  01065c4  addi 3, 3, 25664
  01065c8  fmuls 3, 26, 1
  01065cc  stfs 31, 124(1)
  01065d0  fmuls 4, 26, 26
  01065d4  lis 30, 161
  01065d8  fneg 5, 27
  01065dc  addic 30, 30, 2368
  01065e0  fmuls 2, 2, 24
  01065e4  fmuls 3, 3, 24
  01065e8  fmadds 4, 25, 25, 4
  01065ec  addic 4, 1, 128
  01065f0  fmadds 2, 29, 23, 2
  01065f4  fmadds 3, 30, 23, 3
  01065f8  fmadds 4, 27, 27, 4
  01065fc  li 5, 34
  0106600  li 6, 0
  0106604  li 7, 0
  0106608  stfs 2, 112(1)
  010660c  fsqrts 4, 4
  0106610  stfs 3, 116(1)
  0106614  lfs 6, 24(3)
  0106618  addic 3, 1, 112
  010661c  fmadds 1, 1, 6, 22
  0106620  stfs 1, 120(1)
  0106624  lfs 23, 40(30)
  0106628  fsubs 6, 1, 23
  010662c  stfs 31, 140(1)
  0106630  fdivs 5, 6, 5
  0106634  fsub 6, 28, 4
  0106638  fsub 7, 28, 4
  010663c  fsub 8, 28, 4
  0106640  fsub 9, 4, 28
  0106644  fsub 10, 4, 28
  0106648  fsub 11, 4, 28
  010664c  fdivs 4, 5, 4
  0106650  fmuls 5, 27, 4
  0106654  fmuls 12, 26, 4
  0106658  fmuls 4, 25, 4
  010665c  fmr 25, 23
  0106660  fsel 6, 6, 28, 5
  0106664  fsel 7, 7, 28, 12
  0106668  fsel 8, 8, 28, 4
  010666c  fsel 5, 9, 6, 5
  0106670  fsel 6, 10, 7, 12
  0106674  fsel 4, 11, 8, 4
  0106678  fadds 1, 1, 5
  010667c  fadds 3, 3, 6
  0106680  fadds 2, 2, 4
  0106684  stfs 1, 136(1)
  0106688  stfs 3, 132(1)
  010668c  stfs 2, 128(1)
  0106690  bl 0x57820
  0106694  nop
  0106698  cmpwi 3, 0
  010669c  bt 2, 0x1066a4
  01066a0  lfs 25, 40(30)
  01066a4  fsub 1, 25, 23
  01066a8  fsub 2, 23, 25
  01066ac  lis 3, 16
  01066b0  addi 3, 3, 25664
  01066b4  lfs 3, 28(3)
  01066b8  fsel 1, 1, 23, 25
  01066bc  fsel 2, 2, 23, 25
  01066c0  fsubs 23, 1, 3
  01066c4  fadds 1, 2, 3
  01066c8  stfs 23, 132(31)
  01066cc  stfs 1, 136(31)
  01066d0  lfs 2, 32(3)
  01066d4  fadds 23, 23, 2
  01066d8  fcmpu 0, 1, 23
  01066dc  cror 6, 0, 2
  01066e0  bt 6, 0x1066f8
  01066e4  stfs 23, 136(31)
  01066e8  b 0x1066f8
  01066ec  li 3, 0
  01066f0  stw 3, 132(31)
  01066f4  stw 3, 136(31)
  01066f8  ld 0, 256(1)
  01066fc  mtlr 0
  0106700  lfd 22, 160(1)
  0106704  lfd 23, 168(1)
  0106708  lfd 24, 176(1)
  010670c  lfd 25, 184(1)
  0106710  lfd 26, 192(1)
  0106714  lfd 27, 200(1)
  0106718  lfd 28, 208(1)
  010671c  lfd 29, 216(1)
  0106720  lfd 30, 224(1)
  0106724  lfd 31, 232(1)
  0106728  ld 30, 144(1)
  010672c  ld 31, 152(1)
  0106730  addi 1, 1, 240
  0106734  blr

TweenColor:   # 0x106738, 0x24 bytes
  0106738  stdu 1, -112(1)
  010673c  mflr 0
  0106740  std 0, 128(1)
  0106744  bl 0x5027bc
  0106748  nop
  010674c  ld 0, 128(1)
  0106750  mtlr 0
  0106754  addi 1, 1, 112
  0106758  blr

MB_damage:   # 0x10675c, 0x68 bytes
  010675c  cmpwi 1, 5, 0
  0106760  lbz 5, 164(3)
  0106764  cmpwi 5, 255
  0106768  bt 2, 0x106788
  010676c  lis 6, 161
  0106770  rlwinm 7, 5, 6, 18, 25
  0106774  addic 6, 6, 19456
  0106778  addc 7, 6, 7
  010677c  lwz 7, 52(7)
  0106780  cmpw 7, 3
  0106784  bt 2, 0x106790
  0106788  li 3, 0
  010678c  b 0x1067c0
  0106790  slwi 5, 5, 6
  0106794  addc 5, 6, 5
  0106798  lwz 6, 36(5)
  010679c  and 4, 6, 4
  01067a0  cmpwi 4, 0
  01067a4  bt 2, 0x1067b0
  01067a8  clrldi 3, 5, 32
  01067ac  b 0x1067c0
  01067b0  bf 6, 0x1067bc
  01067b4  li 4, 255
  01067b8  stb 4, 164(3)
  01067bc  li 3, 0
  01067c0  blr

???_Unused_MB_GetPVarsField10:   # 0x1067c4, 0x34 bytes
  01067c4  cmpwi 3, 0
  01067c8  bf 2, 0x1067d4
  01067cc  li 3, 0
  01067d0  b 0x1067f4
  01067d4  lhz 4, 52(3)
  01067d8  rlwinm 4, 4, 0, 26, 26
  01067dc  cmpwi 4, 0
  01067e0  bt 2, 0x1067f0
  01067e4  lwz 3, 120(3)
  01067e8  lwz 3, 16(3)
  01067ec  b 0x1067f4
  01067f0  li 3, 0
  01067f4  blr

MB_HandleDamage:   # 0x106840, 0xd54 bytes
  0106840  stdu 1, -352(1)
  0106844  mflr 0
  0106848  std 0, 368(1)
  010684c  stfd 26, 304(1)
  0106850  stfd 27, 312(1)
  0106854  stfd 28, 320(1)
  0106858  stfd 29, 328(1)
  010685c  stfd 30, 336(1)
  0106860  stfd 31, 344(1)
  0106864  std 25, 248(1)
  0106868  li 11, 0
  010686c  cmpwi 9, 0
  0106870  std 29, 280(1)
  0106874  ori 25, 10, 0
  0106878  std 23, 232(1)
  010687c  ori 29, 6, 0
  0106880  ori 23, 5, 0
  0106884  std 31, 296(1)
  0106888  stw 11, 0(7)
  010688c  std 30, 288(1)
  0106890  ori 31, 3, 0
  0106894  std 28, 272(1)
  0106898  ori 30, 4, 0
  010689c  std 27, 264(1)
  01068a0  ori 28, 7, 0
  01068a4  std 26, 256(1)
  01068a8  ori 27, 8, 0
  01068ac  std 24, 240(1)
  01068b0  ori 26, 9, 0
  01068b4  bt 2, 0x1068c0
  01068b8  li 3, -1
  01068bc  stw 3, 0(26)
  01068c0  cmpwi 30, 0
  01068c4  bt 2, 0x106908
  01068c8  lwz 3, 32(30)
  01068cc  cmpwi 3, 0
  01068d0  bt 2, 0x106908
  01068d4  lhz 3, 166(3)
  01068d8  cmpwi 3, 305
  01068dc  cmpwi 1, 3, 168
  01068e0  bt 2, 0x1068e8
  01068e4  bf 6, 0x106908
  01068e8  cmpwi 23, 0
  01068ec  bt 2, 0x106908
  01068f0  lis 3, 115
  01068f4  lbz 4, 8(23)
  01068f8  addic 3, 3, -28168
  01068fc  slwi 4, 4, 2
  0106900  lfsx 1, 3, 4
  0106904  stfs 1, 44(30)
  0106908  cmpwi 31, 0
  010690c  cmpwi 1, 23, 0
  0106910  bf 2, 0x10693c
  0106914  bt 6, 0x106928
  0106918  li 3, 0
  010691c  li 4, -1
  0106920  sth 3, 28(23)
  0106924  sth 4, 20(23)
  0106928  li 4, -1
  010692c  li 3, 0
  0106930  sth 4, 22(23)
  0106934  stw 3, 0(28)
  0106938  b 0x107548
  010693c  bf 6, 0x106980
  0106940  cmpwi 31, 0
  0106944  bf 2, 0x106950
  0106948  li 23, 0
  010694c  b 0x10696c
  0106950  lhz 3, 52(31)
  0106954  li 23, 0
  0106958  rlwinm 3, 3, 0, 26, 26
  010695c  cmpwi 3, 0
  0106960  bt 2, 0x10696c
  0106964  lwz 3, 120(31)
  0106968  lwz 23, 0(3)
  010696c  cmpwi 23, 0
  0106970  bf 2, 0x106980
  0106974  li 3, 0
  0106978  stw 3, 0(28)
  010697c  b 0x107548
  0106980  cmpwi 25, 4
  0106984  bf 2, 0x10698c
  0106988  lbz 25, 8(23)
  010698c  cmpwi 30, 0
  0106990  bf 2, 0x1069c8
  0106994  addic 3, 23, 28
  0106998  bl 0x4fffb4
  010699c  nop
  01069a0  li 3, -1
  01069a4  li 4, 1
  01069a8  cmpwi 27, 0
  01069ac  sth 3, 22(23)
  01069b0  stw 4, 0(28)
  01069b4  bt 2, 0x1069c0
  01069b8  li 3, 0
  01069bc  stw 3, 0(27)
  01069c0  li 3, 11
  01069c4  b 0x107548
  01069c8  lis 3, 17839
  01069cc  lwz 4, 28(30)
  01069d0  ori 3, 3, 57190
  01069d4  cmpw 4, 3
  01069d8  bf 2, 0x106f9c
  01069dc  lis 3, 115
  01069e0  sldi 4, 25, 5
  01069e4  addic 5, 3, -28152
  01069e8  lbz 3, 40(30)
  01069ec  extsw 4, 4
  01069f0  lfs 1, 16(30)
  01069f4  slwi 6, 3, 2
  01069f8  lfs 2, 20(30)
  01069fc  addc 5, 6, 5
  0106a00  lfs 3, 24(30)
  0106a04  lis 6, 17839
  0106a08  clrldi 5, 5, 32
  0106a0c  lhz 25, 42(30)
  0106a10  cmpwi 25, 71
  0106a14  lfsx 4, 5, 4
  0106a18  ori 4, 6, 57190
  0106a1c  fmuls 1, 1, 4
  0106a20  fmuls 2, 2, 4
  0106a24  fmuls 3, 3, 4
  0106a28  stw 4, 28(30)
  0106a2c  stfs 1, 16(30)
  0106a30  stfs 2, 20(30)
  0106a34  stfs 3, 24(30)
  0106a38  bf 2, 0x106fc8
  0106a3c  lis 5, 151
  0106a40  lfs 12, 16(31)
  0106a44  addic 5, 5, -25376
  0106a48  lfs 5, 20(31)
  0106a4c  lis 3, 16
  0106a50  addi 4, 3, 26616
  0106a54  lfs 4, 128(5)
  0106a58  lfs 6, 132(5)
  0106a5c  fsubs 4, 12, 4
  0106a60  fsubs 6, 5, 6
  0106a64  lis 3, 115
  0106a68  addic 3, 3, 22784
  0106a6c  fabs 7, 4
  0106a70  fabs 8, 6
  0106a74  stfs 4, 156(1)
  0106a78  stfs 6, 160(1)
  0106a7c  fsubs 4, 7, 8
  0106a80  stfs 4, 164(1)
  0106a84  lwz 6, 156(1)
  0106a88  lfs 31, 0(4)
  0106a8c  lfs 4, 156(1)
  0106a90  lwz 7, 160(1)
  0106a94  lfs 6, 160(1)
  0106a98  lwz 8, 164(1)
  0106a9c  rlwinm 7, 7, 3, 29, 29
  0106aa0  fabs 9, 6
  0106aa4  lfs 6, 164(1)
  0106aa8  fabs 4, 4
  0106aac  rlwimi 7, 8, 2, 30, 30
  0106ab0  fsub 10, 6, 31
  0106ab4  rlwimi 7, 6, 4, 28, 28
  0106ab8  fsub 11, 6, 31
  0106abc  ori 6, 3, 0
  0106ac0  rlwimi 6, 7, 2, 26, 28
  0106ac4  slwi 7, 7, 2
  0106ac8  clrldi 6, 6, 32
  0106acc  fsel 8, 10, 4, 8
  0106ad0  lfsx 4, 3, 7
  0106ad4  lfs 6, 4(6)
  0106ad8  fsel 7, 11, 9, 7
  0106adc  lfs 11, 4(4)
  0106ae0  fcmpu 0, 8, 31
  0106ae4  bt 1, 0x106af0
  0106ae8  fmr 4, 31
  0106aec  b 0x106c08
  0106af0  fsubs 9, 7, 8
  0106af4  fadds 7, 7, 8
  0106af8  addic 4, 1, 16
  0106afc  li 8, 2
  0106b00  addic 6, 4, 184
  0106b04  addic 7, 4, 200
  0106b08  mtctr 8
  0106b0c  fdivs 7, 9, 7
  0106b10  fmuls 8, 7, 7
  0106b14  stfs 7, 212(1)
  0106b18  stfs 7, 204(1)
  0106b1c  stfs 7, 208(1)
  0106b20  stfs 7, 200(1)
  0106b24  lfs 10, 212(1)
  0106b28  lfs 13, 204(1)
  0106b2c  lfs 0, 208(1)
  0106b30  fmuls 9, 8, 8
  0106b34  fmuls 13, 13, 8
  0106b38  fmuls 10, 10, 9
  0106b3c  fmuls 7, 9, 9
  0106b40  fmuls 9, 0, 9
  0106b44  stfs 13, 204(1)
  0106b48  fmuls 8, 10, 8
  0106b4c  stfs 9, 208(1)
  0106b50  stfs 8, 212(1)
  0106b54  lfs 8, 184(4)
  0106b58  fmuls 8, 8, 7
  0106b5c  stfs 8, 200(4)
  0106b60  lfs 8, 4(6)
  0106b64  addic 4, 4, 8
  0106b68  addic 6, 6, 8
  0106b6c  fmuls 8, 8, 7
  0106b70  stfs 8, 4(7)
  0106b74  addic 7, 7, 8
  0106b78  bdnz 0x106b54
  0106b7c  li 7, 4
  0106b80  ori 4, 1, 0
  0106b84  mtctr 7
  0106b88  lis 6, 115
  0106b8c  addic 7, 4, 200
  0106b90  addic 6, 6, 22752
  0106b94  ori 9, 7, 0
  0106b98  lfs 7, 200(4)
  0106b9c  lfs 8, 0(6)
  0106ba0  fmuls 7, 7, 8
  0106ba4  lfs 8, 4(6)
  0106ba8  addic 6, 6, 8
  0106bac  stfs 7, 200(4)
  0106bb0  lfs 7, 4(7)
  0106bb4  addic 4, 4, 8
  0106bb8  fmuls 7, 7, 8
  0106bbc  stfs 7, 4(7)
  0106bc0  addic 7, 7, 8
  0106bc4  bdnz 0x106b98
  0106bc8  fmr 7, 31
  0106bcc  ori 4, 1, 0
  0106bd0  mtctr 8
  0106bd4  lfs 8, 200(4)
  0106bd8  fadds 7, 7, 8
  0106bdc  addic 4, 4, 16
  0106be0  lfs 8, 4(9)
  0106be4  lfs 9, 8(9)
  0106be8  lfs 10, 12(9)
  0106bec  addic 9, 9, 16
  0106bf0  fadds 7, 7, 8
  0106bf4  fadds 7, 7, 9
  0106bf8  fadds 7, 7, 10
  0106bfc  bdnz 0x106bd4
  0106c00  fadds 7, 7, 11
  0106c04  fmadds 4, 7, 4, 6
  0106c08  lis 4, 16
  0106c0c  fmr 7, 5
  0106c10  addi 4, 4, 26616
  0106c14  lfs 8, 8(4)
  0106c18  lfs 5, 12(4)
  0106c1c  fadds 4, 4, 8
  0106c20  lfs 6, 16(4)
  0106c24  lfs 8, 128(5)
  0106c28  lfs 9, 132(5)
  0106c2c  fsubs 8, 12, 8
  0106c30  fsubs 9, 7, 9
  0106c34  fsubs 7, 5, 4
  0106c38  fsubs 10, 6, 4
  0106c3c  fabs 0, 8
  0106c40  fabs 30, 9
  0106c44  fsub 12, 4, 7
  0106c48  fsubs 27, 0, 30
  0106c4c  fsel 4, 12, 7, 4
  0106c50  lfs 7, 20(4)
  0106c54  lfs 29, 24(4)
  0106c58  lfs 28, 28(4)
  0106c5c  lfs 12, 32(4)
  0106c60  stfs 8, 144(1)
  0106c64  fmr 8, 29
  0106c68  stfs 27, 152(1)
  0106c6c  stfs 9, 148(1)
  0106c70  lwz 4, 144(1)
  0106c74  fsub 13, 10, 4
  0106c78  lfs 29, 144(1)
  0106c7c  fmr 9, 28
  0106c80  lwz 5, 152(1)
  0106c84  lfs 28, 152(1)
  0106c88  lwz 6, 148(1)
  0106c8c  fsub 27, 28, 31
  0106c90  rlwinm 6, 6, 3, 29, 29
  0106c94  fsel 4, 13, 10, 4
  0106c98  fmr 10, 12
  0106c9c  fabs 12, 29
  0106ca0  rlwimi 6, 5, 2, 30, 30
  0106ca4  rlwimi 6, 4, 4, 28, 28
  0106ca8  ori 4, 3, 0
  0106cac  slwi 5, 6, 2
  0106cb0  rlwimi 4, 6, 2, 26, 28
  0106cb4  fmuls 13, 4, 4
  0106cb8  fsel 30, 27, 12, 30
  0106cbc  clrldi 4, 4, 32
  0106cc0  fmuls 29, 13, 4
  0106cc4  fcmpu 0, 30, 31
  0106cc8  fmuls 26, 13, 29
  0106ccc  fmadds 4, 29, 7, 4
  0106cd0  lfs 29, 148(1)
  0106cd4  fmuls 12, 13, 26
  0106cd8  fmadds 4, 26, 8, 4
  0106cdc  fmuls 13, 13, 12
  0106ce0  fmadds 4, 12, 9, 4
  0106ce4  fabs 12, 29
  0106ce8  fsub 29, 28, 31
  0106cec  fmadds 4, 13, 10, 4
  0106cf0  fsel 0, 29, 12, 0
  0106cf4  stfs 4, 112(1)
  0106cf8  lfsx 12, 3, 5
  0106cfc  lfs 13, 4(4)
  0106d00  bt 1, 0x106d0c
  0106d04  fmr 11, 31
  0106d08  b 0x106e24
  0106d0c  fsubs 29, 0, 30
  0106d10  fadds 0, 0, 30
  0106d14  addic 3, 1, 16
  0106d18  li 6, 2
  0106d1c  addic 5, 3, 168
  0106d20  addic 4, 3, 152
  0106d24  mtctr 6
  0106d28  fdivs 0, 29, 0
  0106d2c  fmuls 30, 0, 0
  0106d30  stfs 0, 180(1)
  0106d34  stfs 0, 172(1)
  0106d38  stfs 0, 176(1)
  0106d3c  stfs 0, 168(1)
  0106d40  lfs 28, 180(1)
  0106d44  lfs 27, 172(1)
  0106d48  lfs 26, 176(1)
  0106d4c  fmuls 29, 30, 30
  0106d50  fmuls 27, 27, 30
  0106d54  fmuls 28, 28, 29
  0106d58  fmuls 0, 29, 29
  0106d5c  fmuls 29, 26, 29
  0106d60  stfs 27, 172(1)
  0106d64  fmuls 30, 28, 30
  0106d68  stfs 29, 176(1)
  0106d6c  stfs 30, 180(1)
  0106d70  lfs 30, 152(3)
  0106d74  fmuls 30, 30, 0
  0106d78  stfs 30, 168(3)
  0106d7c  lfs 30, 4(4)
  0106d80  addic 4, 4, 8
  0106d84  fmuls 30, 30, 0
  0106d88  addic 3, 3, 8
  0106d8c  stfs 30, 4(5)
  0106d90  addic 5, 5, 8
  0106d94  bdnz 0x106d70
  0106d98  li 5, 4
  0106d9c  ori 3, 1, 0
  0106da0  mtctr 5
  0106da4  lis 4, 115
  0106da8  addic 5, 3, 168
  0106dac  addic 4, 4, 22752
  0106db0  ori 7, 5, 0
  0106db4  lfs 0, 168(3)
  0106db8  lfs 30, 0(4)
  0106dbc  fmuls 0, 0, 30
  0106dc0  lfs 30, 4(4)
  0106dc4  addic 4, 4, 8
  0106dc8  stfs 0, 168(3)
  0106dcc  lfs 0, 4(5)
  0106dd0  addic 3, 3, 8
  0106dd4  fmuls 0, 0, 30
  0106dd8  stfs 0, 4(5)
  0106ddc  addic 5, 5, 8
  0106de0  bdnz 0x106db4
  0106de4  ori 3, 1, 0
  0106de8  fmr 0, 31
  0106dec  mtctr 6
  0106df0  lfs 30, 168(3)
  0106df4  fadds 0, 0, 30
  0106df8  lfs 30, 4(7)
  0106dfc  addic 3, 3, 16
  0106e00  lfs 29, 8(7)
  0106e04  lfs 28, 12(7)
  0106e08  addic 7, 7, 16
  0106e0c  fadds 0, 0, 30
  0106e10  fadds 0, 0, 29
  0106e14  fadds 0, 0, 28
  0106e18  bdnz 0x106df0
  0106e1c  fadds 11, 0, 11
  0106e20  fmadds 11, 11, 12, 13
  0106e24  fsubs 5, 5, 11
  0106e28  fsubs 6, 6, 11
  0106e2c  lis 3, 16
  0106e30  fmr 30, 31
  0106e34  addi 6, 3, 26616
  0106e38  fsub 12, 11, 5
  0106e3c  lfs 31, 36(6)
  0106e40  lfs 0, 40(6)
  0106e44  fsel 5, 12, 5, 11
  0106e48  fmuls 12, 2, 2
  0106e4c  fsub 11, 6, 5
  0106e50  fsel 5, 11, 6, 5
  0106e54  fmadds 6, 1, 1, 12
  0106e58  fmadds 12, 4, 4, 31
  0106e5c  fmuls 11, 5, 5
  0106e60  fmadds 6, 3, 3, 6
  0106e64  addic 3, 1, 128
  0106e68  fmuls 13, 11, 5
  0106e6c  fsqrts 6, 6
  0106e70  addic 4, 30, 16
  0106e74  addic 5, 1, 112
  0106e78  fmuls 29, 11, 13
  0106e7c  fmadds 5, 13, 7, 5
  0106e80  fmuls 7, 11, 29
  0106e84  fmadds 5, 29, 8, 5
  0106e88  fmuls 8, 11, 7
  0106e8c  fmadds 5, 7, 9, 5
  0106e90  fmr 7, 0
  0106e94  fmadds 5, 8, 10, 5
  0106e98  fmadds 8, 5, 5, 12
  0106e9c  fmuls 6, 6, 7
  0106ea0  fsqrts 7, 8
  0106ea4  fdivs 6, 6, 7
  0106ea8  fsub 10, 30, 7
  0106eac  fsub 8, 30, 7
  0106eb0  fsub 9, 30, 7
  0106eb4  fsub 11, 7, 30
  0106eb8  fsub 12, 7, 30
  0106ebc  fsub 7, 7, 30
  0106ec0  fmuls 4, 4, 6
  0106ec4  fmuls 5, 5, 6
  0106ec8  fsel 10, 10, 30, 6
  0106ecc  fsel 8, 8, 30, 4
  0106ed0  fsel 9, 9, 30, 5
  0106ed4  fsel 6, 7, 10, 6
  0106ed8  fsel 4, 11, 8, 4
  0106edc  fsel 5, 12, 9, 5
  0106ee0  stfs 6, 120(1)
  0106ee4  stfs 4, 112(1)
  0106ee8  stfs 5, 116(1)
  0106eec  lfs 4, 44(6)
  0106ef0  fmuls 1, 1, 4
  0106ef4  fmuls 2, 2, 4
  0106ef8  fmuls 3, 3, 4
  0106efc  stfs 1, 16(30)
  0106f00  stfs 2, 20(30)
  0106f04  stfs 3, 24(30)
  0106f08  bl 0x5023f0
  0106f0c  nop
  0106f10  lfs 3, 132(1)
  0106f14  lfs 2, 128(1)
  0106f18  fmuls 1, 3, 3
  0106f1c  lfs 5, 136(1)
  0106f20  fmr 4, 30
  0106f24  stfs 5, 24(30)
  0106f28  lfs 5, 140(1)
  0106f2c  stfs 5, 28(30)
  0106f30  lbz 3, 40(30)
  0106f34  fmadds 1, 2, 2, 1
  0106f38  fmr 5, 4
  0106f3c  fsqrts 6, 1
  0106f40  fcmpu 0, 6, 5
  0106f44  bt 2, 0x106f90
  0106f48  frsqrte 4, 1
  0106f4c  lis 4, 16
  0106f50  addi 4, 4, 26616
  0106f54  lfs 5, 48(4)
  0106f58  fmuls 6, 1, 4
  0106f5c  fmuls 7, 5, 4
  0106f60  fnmsubs 6, 6, 4, 31
  0106f64  fmadds 4, 6, 7, 4
  0106f68  fmuls 6, 1, 4
  0106f6c  fmuls 7, 5, 4
  0106f70  fnmsubs 6, 6, 4, 31
  0106f74  fmadds 4, 6, 7, 4
  0106f78  fmuls 1, 1, 4
  0106f7c  fmuls 5, 5, 4
  0106f80  fnmsubs 1, 1, 4, 31
  0106f84  fmadds 4, 1, 5, 4
  0106f88  fmuls 5, 2, 4
  0106f8c  fmuls 4, 3, 4
  0106f90  stfs 5, 16(30)
  0106f94  stfs 4, 20(30)
  0106f98  b 0x106fc8
  0106f9c  lwz 25, 32(30)
  0106fa0  cmpwi 25, 0
  0106fa4  bf 2, 0x106fb8
  0106fa8  li 3, 8
  0106fac  li 25, 71
  0106fb0  stb 3, 40(30)
  0106fb4  b 0x106fc8
  0106fb8  li 3, 8
  0106fbc  lhz 25, 166(25)
  0106fc0  extsh 25, 25
  0106fc4  stb 3, 40(30)
  0106fc8  cmpwi 3, 7
  0106fcc  li 24, 2
  0106fd0  cmpwi 1, 3, 6
  0106fd4  bt 2, 0x10714c
  0106fd8  cmpwi 6, 3, 5
  0106fdc  bt 6, 0x10713c
  0106fe0  cmpwi 1, 3, 4
  0106fe4  bt 26, 0x107110
  0106fe8  cmpwi 6, 3, 3
  0106fec  bt 6, 0x107100
  0106ff0  cmpwi 1, 3, 2
  0106ff4  bt 26, 0x1070ac
  0106ff8  cmpwi 6, 3, 1
  0106ffc  bt 6, 0x107080
  0107000  cmpwi 1, 3, 0
  0107004  bt 26, 0x10703c
  0107008  bf 6, 0x107178
  010700c  lhz 3, 42(30)
  0107010  cmpwi 3, 1
  0107014  cmpwi 1, 3, 2
  0107018  bt 2, 0x107020
  010701c  bf 6, 0x10702c
  0107020  stw 24, 0(28)
  0107024  li 24, 0
  0107028  b 0x107184
  010702c  ori 3, 24, 0
  0107030  li 24, 1
  0107034  stw 3, 0(28)
  0107038  b 0x107184
  010703c  lbz 3, 41(30)
  0107040  cmpwi 3, 1
  0107044  cmpwi 1, 3, 2
  0107048  bt 1, 0x10705c
  010704c  ori 3, 24, 0
  0107050  li 24, 11
  0107054  stw 3, 0(28)
  0107058  b 0x107184
  010705c  bf 6, 0x107070
  0107060  ori 3, 24, 0
  0107064  li 24, 5
  0107068  stw 3, 0(28)
  010706c  b 0x107184
  0107070  ori 3, 24, 0
  0107074  li 24, 9
  0107078  stw 3, 0(28)
  010707c  b 0x107184
  0107080  lbz 3, 41(30)
  0107084  cmpwi 3, 1
  0107088  bt 1, 0x10709c
  010708c  ori 3, 24, 0
  0107090  li 24, 8
  0107094  stw 3, 0(28)
  0107098  b 0x107184
  010709c  ori 3, 24, 0
  01070a0  li 24, 13
  01070a4  stw 3, 0(28)
  01070a8  b 0x107184
  01070ac  lbz 3, 41(30)
  01070b0  cmpwi 3, 1
  01070b4  cmpwi 1, 3, 2
  01070b8  bt 1, 0x1070cc
  01070bc  ori 3, 24, 0
  01070c0  li 24, 10
  01070c4  stw 3, 0(28)
  01070c8  b 0x107184
  01070cc  bt 5, 0x1070e0
  01070d0  ori 3, 24, 0
  01070d4  li 24, 15
  01070d8  stw 3, 0(28)
  01070dc  b 0x107184
  01070e0  ori 3, 24, 0
  01070e4  li 4, -1
  01070e8  li 5, 0
  01070ec  li 24, 16
  01070f0  stw 3, 0(28)
  01070f4  sth 4, 20(23)
  01070f8  sth 5, 28(23)
  01070fc  b 0x107184
  0107100  ori 3, 24, 0
  0107104  li 24, 14
  0107108  stw 3, 0(28)
  010710c  b 0x107184
  0107110  lbz 3, 41(30)
  0107114  cmpwi 3, 1
  0107118  bt 1, 0x10712c
  010711c  li 3, 3
  0107120  li 24, 4
  0107124  stw 3, 0(28)
  0107128  b 0x107184
  010712c  li 3, 4
  0107130  li 24, 7
  0107134  stw 3, 0(28)
  0107138  b 0x107184
  010713c  ori 3, 24, 0
  0107140  li 24, 1
  0107144  stw 3, 0(28)
  0107148  b 0x107184
  010714c  lbz 3, 41(30)
  0107150  cmpwi 3, 1
  0107154  bt 1, 0x107168
  0107158  ori 3, 24, 0
  010715c  li 24, 12
  0107160  stw 3, 0(28)
  0107164  b 0x107184
  0107168  ori 3, 24, 0
  010716c  li 24, 17
  0107170  stw 3, 0(28)
  0107174  b 0x107184
  0107178  ori 3, 24, 0
  010717c  li 24, 1
  0107180  stw 3, 0(28)
  0107184  cmpwi 26, 0
  0107188  bt 2, 0x107190
  010718c  stw 25, 0(26)
  0107190  lis 3, 115
  0107194  lbz 5, 8(23)
  0107198  slwi 4, 24, 2
  010719c  lhz 6, 20(23)
  01071a0  addic 3, 3, -28240
  01071a4  addc 3, 5, 3
  01071a8  extsh 5, 6
  01071ac  clrldi 3, 3, 32
  01071b0  cmpw 5, 25
  01071b4  lbzx 26, 3, 4
  01071b8  bt 2, 0x1071c4
  01071bc  li 3, 0
  01071c0  sth 3, 28(23)
  01071c4  addic 3, 23, 28
  01071c8  bl 0x4fffb4
  01071cc  nop
  01071d0  cmpwi 3, 0
  01071d4  bt 2, 0x10738c
  01071d8  cmpwi 24, 11
  01071dc  lis 3, 114
  01071e0  li 4, -3056
  01071e4  cmpwi 6, 24, 7
  01071e8  bt 2, 0x10731c
  01071ec  cmpwi 1, 24, 4
  01071f0  bt 26, 0x1072b0
  01071f4  cmpwi 6, 24, 1
  01071f8  bt 6, 0x107278
  01071fc  cmpwi 1, 24, 0
  0107200  bt 26, 0x107240
  0107204  bf 6, 0x107354
  0107208  lis 5, 16
  010720c  vspltisw 2, -1
  0107210  li 6, 52
  0107214  <unknown>
  0107218  addi 5, 5, 26616
  010721c  li 3, 28
  0107220  vslw 2, 2, 2
  0107224  <unknown>
  0107228  vspltw 4, 4, 0
  010722c  vmaddfp 2, 3, 4, 2
  0107230  vctsxs 2, 2, 0
  0107234  vsplth 2, 2, 1
  0107238  stvehx 2, 3, 23
  010723c  b 0x1074c0
  0107240  lis 5, 16
  0107244  vspltisw 2, -1
  0107248  li 6, 56
  010724c  <unknown>
  0107250  addi 5, 5, 26616
  0107254  li 3, 28
  0107258  vslw 2, 2, 2
  010725c  <unknown>
  0107260  vspltw 4, 4, 0
  0107264  vmaddfp 2, 3, 4, 2
  0107268  vctsxs 2, 2, 0
  010726c  vsplth 2, 2, 1
  0107270  stvehx 2, 3, 23
  0107274  b 0x1074c0
  0107278  lis 5, 16
  010727c  vspltisw 2, -1
  0107280  li 6, 60
  0107284  <unknown>
  0107288  addi 5, 5, 26616
  010728c  li 3, 28
  0107290  vslw 2, 2, 2
  0107294  <unknown>
  0107298  vspltw 4, 4, 0
  010729c  vmaddfp 2, 3, 4, 2
  01072a0  vctsxs 2, 2, 0
  01072a4  vsplth 2, 2, 1
  01072a8  stvehx 2, 3, 23
  01072ac  b 0x1074c0
  01072b0  lis 5, 151
  01072b4  addic 5, 5, -25432
  01072b8  lbz 5, 19(5)
  01072bc  cmpwi 5, 0
  01072c0  bt 2, 0x1072e0
  01072c4  lis 5, 16
  01072c8  li 6, 64
  01072cc  <unknown>
  01072d0  addi 5, 5, 26616
  01072d4  <unknown>
  01072d8  vspltw 2, 2, 0
  01072dc  b 0x1072f8
  01072e0  lis 5, 16
  01072e4  <unknown>
  01072e8  li 6, 60
  01072ec  addi 5, 5, 26616
  01072f0  <unknown>
  01072f4  vspltw 2, 2, 0
  01072f8  vspltisw 4, -1
  01072fc  li 3, 28
  0107300  vspltw 3, 3, 0
  0107304  vslw 4, 4, 4
  0107308  vmaddfp 2, 3, 2, 4
  010730c  vctsxs 2, 2, 0
  0107310  vsplth 2, 2, 1
  0107314  stvehx 2, 3, 23
  0107318  b 0x1074c0
  010731c  lis 5, 16
  0107320  li 6, 60
  0107324  vspltisw 2, -1
  0107328  addi 5, 5, 26616
  010732c  <unknown>
  0107330  li 3, 28
  0107334  vslw 2, 2, 2
  0107338  <unknown>
  010733c  vspltw 4, 4, 0
  0107340  vmaddfp 2, 3, 4, 2
  0107344  vctsxs 2, 2, 0
  0107348  vsplth 2, 2, 1
  010734c  stvehx 2, 3, 23
  0107350  b 0x1074c0
  0107354  lis 5, 16
  0107358  li 6, 68
  010735c  vspltisw 2, -1
  0107360  addi 5, 5, 26616
  0107364  <unknown>
  0107368  li 3, 28
  010736c  vslw 2, 2, 2
  0107370  <unknown>
  0107374  vspltw 4, 4, 0
  0107378  vmaddfp 2, 3, 4, 2
  010737c  vctsxs 2, 2, 0
  0107380  vsplth 2, 2, 1
  0107384  stvehx 2, 3, 23
  0107388  b 0x1074c0
  010738c  cmpwi 24, 4
  0107390  cmpwi 6, 24, 1
  0107394  cmpwi 7, 24, 7
  0107398  bt 1, 0x1073b8
  010739c  cmpwi 1, 24, -1
  01073a0  cmpwi 7, 24, 3
  01073a4  bt 25, 0x1073b0
  01073a8  bf 5, 0x1074b4
  01073ac  b 0x1073d4
  01073b0  bf 29, 0x1074b4
  01073b4  b 0x10741c
  01073b8  cmpwi 1, 24, 6
  01073bc  cmpwi 6, 24, 11
  01073c0  bt 29, 0x1073cc
  01073c4  bf 5, 0x1074b4
  01073c8  b 0x107464
  01073cc  bt 26, 0x1074ac
  01073d0  b 0x1074b4
  01073d4  rlwinm 3, 29, 0, 27, 27
  01073d8  li 4, 0
  01073dc  li 5, 11
  01073e0  subc 3, 4, 3
  01073e4  subc 5, 5, 26
  01073e8  cntlzw 3, 3
  01073ec  rlwinm 4, 29, 0, 26, 26
  01073f0  sldi 3, 3, 58
  01073f4  cmpwi 4, 0
  01073f8  sradi 3, 3, 63
  01073fc  and 3, 3, 5
  0107400  addc 26, 26, 3
  0107404  bf 2, 0x107410
  0107408  li 3, 1
  010740c  stw 3, 0(28)
  0107410  li 3, 0
  0107414  stw 3, 44(30)
  0107418  b 0x1074c0
  010741c  clrlwi 3, 29, 31
  0107420  li 4, 0
  0107424  li 5, 11
  0107428  subc 3, 4, 3
  010742c  subc 5, 5, 26
  0107430  cntlzw 3, 3
  0107434  rlwinm 4, 29, 0, 30, 30
  0107438  sldi 3, 3, 58
  010743c  cmpwi 4, 0
  0107440  sradi 3, 3, 63
  0107444  and 3, 3, 5
  0107448  addc 26, 26, 3
  010744c  bf 2, 0x107458
  0107450  li 3, 1
  0107454  stw 3, 0(28)
  0107458  li 3, 0
  010745c  stw 3, 44(30)
  0107460  b 0x1074c0
  0107464  rlwinm 3, 29, 0, 29, 29
  0107468  li 4, 0
  010746c  li 5, 11
  0107470  subc 3, 4, 3
  0107474  subc 5, 5, 26
  0107478  cntlzw 3, 3
  010747c  rlwinm 4, 29, 0, 28, 28
  0107480  sldi 3, 3, 58
  0107484  cmpwi 4, 0
  0107488  sradi 3, 3, 63
  010748c  and 3, 3, 5
  0107490  addc 26, 26, 3
  0107494  bf 2, 0x1074a0
  0107498  li 3, 1
  010749c  stw 3, 0(28)
  01074a0  li 3, 0
  01074a4  stw 3, 44(30)
  01074a8  b 0x1074c0
  01074ac  li 26, 12
  01074b0  b 0x1074c0
  01074b4  li 3, 0
  01074b8  li 26, 13
  01074bc  stw 3, 44(30)
  01074c0  cmpwi 27, 0
  01074c4  sth 25, 20(23)
  01074c8  cmpwi 1, 24, 4
  01074cc  sth 25, 22(23)
  01074d0  bt 2, 0x1074dc
  01074d4  lfs 1, 44(30)
  01074d8  stfs 1, 0(27)
  01074dc  bf 6, 0x107514
  01074e0  cmpwi 31, 0
  01074e4  bt 2, 0x107544
  01074e8  lhz 3, 52(31)
  01074ec  rlwinm 3, 3, 0, 26, 26
  01074f0  cmpwi 3, 0
  01074f4  bt 2, 0x107544
  01074f8  lwz 31, 120(31)
  01074fc  lwz 31, 16(31)
  0107500  cmpwi 31, 0
  0107504  bt 2, 0x107544
  0107508  li 3, 1
  010750c  stb 3, 46(31)
  0107510  b 0x107544
  0107514  cmpwi 31, 0
  0107518  bt 2, 0x107544
  010751c  lhz 3, 52(31)
  0107520  rlwinm 3, 3, 0, 26, 26
  0107524  cmpwi 3, 0
  0107528  bt 2, 0x107544
  010752c  lwz 31, 120(31)
  0107530  lwz 31, 16(31)
  0107534  cmpwi 31, 0
  0107538  bt 2, 0x107544
  010753c  li 3, 0
  0107540  stb 3, 46(31)
  0107544  ori 3, 26, 0
  0107548  ld 0, 368(1)
  010754c  mtlr 0
  0107550  lfd 26, 304(1)
  0107554  lfd 27, 312(1)
  0107558  lfd 28, 320(1)
  010755c  lfd 29, 328(1)
  0107560  lfd 30, 336(1)
  0107564  lfd 31, 344(1)
  0107568  ld 23, 232(1)
  010756c  ld 24, 240(1)
  0107570  ld 25, 248(1)
  0107574  ld 26, 256(1)
  0107578  ld 27, 264(1)
  010757c  ld 28, 272(1)
  0107580  ld 29, 280(1)
  0107584  ld 30, 288(1)
  0107588  ld 31, 296(1)
  010758c  addi 1, 1, 352
  0107590  blr

MB_AnimBoneCollLines:   # 0x1075b0, 0x230 bytes
  01075b0  stdu 1, -304(1)
  01075b4  mflr 0
  01075b8  std 0, 320(1)
  01075bc  stfd 25, 248(1)
  01075c0  stfd 26, 256(1)
  01075c4  stfd 27, 264(1)
  01075c8  stfd 28, 272(1)
  01075cc  stfd 29, 280(1)
  01075d0  stfd 30, 288(1)
  01075d4  stfd 31, 296(1)
  01075d8  std 27, 208(1)
  01075dc  lis 6, 16
  01075e0  li 27, 0
  01075e4  addi 6, 6, 30100
  01075e8  std 29, 224(1)
  01075ec  std 28, 216(1)
  01075f0  cmpwi 5, 0
  01075f4  ori 29, 27, 0
  01075f8  std 30, 232(1)
  01075fc  ori 28, 4, 0
  0107600  ori 30, 3, 0
  0107604  std 31, 240(1)
  0107608  lfs 25, 0(6)
  010760c  ori 31, 5, 0
  0107610  lfs 26, 4(6)
  0107614  lfs 27, 8(6)
  0107618  lfs 28, 12(6)
  010761c  lfs 29, 16(6)
  0107620  lfs 30, 20(6)
  0107624  std 26, 200(1)
  0107628  std 25, 192(1)
  010762c  lfs 31, 24(6)
  0107630  bt 2, 0x107798
  0107634  lwz 3, 0(28)
  0107638  cmpwi 3, -1
  010763c  bt 2, 0x107798
  0107640  lbz 4, 82(30)
  0107644  cmpw 4, 3
  0107648  bf 2, 0x107788
  010764c  ori 3, 30, 0
  0107650  bl 0xefe40
  0107654  nop
  0107658  lfs 2, 4(28)
  010765c  fcmpu 0, 1, 2
  0107660  bt 0, 0x107788
  0107664  lfs 2, 8(28)
  0107668  fcmpu 0, 1, 2
  010766c  bt 1, 0x107788
  0107670  lwz 4, 12(28)
  0107674  addic 26, 1, 112
  0107678  ori 3, 30, 0
  010767c  extsw 4, 4
  0107680  ori 5, 26, 0
  0107684  bl 0xf1114
  0107688  nop
  010768c  addic 25, 1, 128
  0107690  lwz 4, 16(28)
  0107694  ori 3, 30, 0
  0107698  ori 5, 25, 0
  010769c  extsw 4, 4
  01076a0  bl 0xf1114
  01076a4  nop
  01076a8  lfs 1, 24(28)
  01076ac  lfs 2, 72(30)
  01076b0  bl 0x502578
  01076b4  nop
  01076b8  fadds 2, 1, 25
  01076bc  fsubs 6, 26, 1
  01076c0  fsubs 3, 26, 2
  01076c4  fsubs 4, 27, 2
  01076c8  fsub 5, 2, 3
  01076cc  fsel 2, 5, 3, 2
  01076d0  fsub 3, 1, 6
  01076d4  fsub 5, 4, 2
  01076d8  fsel 3, 3, 6, 1
  01076dc  fsubs 1, 27, 1
  01076e0  fsel 2, 5, 4, 2
  01076e4  fsub 5, 1, 3
  01076e8  lfs 4, 28(28)
  01076ec  lwz 3, 20(28)
  01076f0  fmuls 6, 2, 2
  01076f4  fsel 1, 5, 1, 3
  01076f8  fmuls 3, 6, 2
  01076fc  fmuls 5, 6, 3
  0107700  fmadds 2, 3, 28, 2
  0107704  fmuls 3, 6, 5
  0107708  fmadds 2, 5, 29, 2
  010770c  fmuls 5, 6, 3
  0107710  fmadds 2, 3, 30, 2
  0107714  fmadds 2, 5, 31, 2
  0107718  fmuls 2, 2, 4
  010771c  fmuls 5, 1, 1
  0107720  lis 4, 16256
  0107724  li 5, 1
  0107728  stw 30, 160(1)
  010772c  stw 3, 164(1)
  0107730  addic 7, 1, 144
  0107734  stw 4, 172(1)
  0107738  stw 5, 176(1)
  010773c  stfs 2, 144(1)
  0107740  ori 3, 26, 0
  0107744  stw 29, 152(1)
  0107748  ori 4, 25, 0
  010774c  fmuls 6, 5, 1
  0107750  stfs 3, 156(1)
  0107754  li 5, 0
  0107758  ori 6, 30, 0
  010775c  fmuls 7, 5, 6
  0107760  fmadds 1, 6, 28, 1
  0107764  fmuls 6, 5, 7
  0107768  fmadds 1, 7, 29, 1
  010776c  fmuls 2, 5, 6
  0107770  fmadds 1, 6, 30, 1
  0107774  fmadds 1, 2, 31, 1
  0107778  fmuls 1, 1, 4
  010777c  stfs 1, 148(1)
  0107780  bl 0x57820
  0107784  nop
  0107788  addic 27, 27, 1
  010778c  addic 28, 28, 32
  0107790  cmpw 27, 31
  0107794  bf 2, 0x107634
  0107798  ld 0, 320(1)
  010779c  mtlr 0
  01077a0  lfd 25, 248(1)
  01077a4  lfd 26, 256(1)
  01077a8  lfd 27, 264(1)
  01077ac  lfd 28, 272(1)
  01077b0  lfd 29, 280(1)
  01077b4  lfd 30, 288(1)
  01077b8  lfd 31, 296(1)
  01077bc  ld 25, 192(1)
  01077c0  ld 26, 200(1)
  01077c4  ld 27, 208(1)
  01077c8  ld 28, 216(1)
  01077cc  ld 29, 224(1)
  01077d0  ld 30, 232(1)
  01077d4  ld 31, 240(1)
  01077d8  addi 1, 1, 304
  01077dc  blr

MB_DamageMobyList:   # 0x107860, 0x580 bytes
  0107860  stdu 1, -336(1)
  0107864  mflr 0
  0107868  std 0, 352(1)
  010786c  stfd 28, 304(1)
  0107870  stfd 29, 312(1)
  0107874  stfd 30, 320(1)
  0107878  stfd 31, 328(1)
  010787c  addi 0, 1, 224
  0107880  stvx 31, 0, 0
  0107884  std 28, 272(1)
  0107888  lis 4, 0
  010788c  ori 28, 3, 0
  0107890  stfs 2, 208(1)
  0107894  li 3, 336
  0107898  std 26, 256(1)
  010789c  stfs 2, 212(1)
  01078a0  li 26, 0
  01078a4  stfs 2, 216(1)
  01078a8  addc 3, 1, 3
  01078ac  stfs 2, 220(1)
  01078b0  li 0, 208
  01078b4  fmr 30, 1
  01078b8  std 29, 280(1)
  01078bc  cmpwi 8, 0
  01078c0  fmr 31, 3
  01078c4  std 30, 288(1)
  01078c8  std 24, 240(1)
  01078cc  ori 29, 8, 0
  01078d0  ori 30, 9, 0
  01078d4  std 31, 296(1)
  01078d8  lwz 24, 124(3)
  01078dc  std 25, 248(1)
  01078e0  ori 31, 10, 0
  01078e4  lwz 25, 132(3)
  01078e8  std 27, 264(1)
  01078ec  lvx 31, 1, 0
  01078f0  bf 1, 0x107d98
  01078f4  std 5, 64(3)
  01078f8  lfs 29, 68(3)
  01078fc  ori 27, 7, 0
  0107900  lfs 28, 64(3)
  0107904  lwz 3, 0(27)
  0107908  cmpw 3, 30
  010790c  bt 2, 0x107d88
  0107910  lfs 1, 16(3)
  0107914  lfs 2, 20(3)
  0107918  fsubs 1, 1, 28
  010791c  stw 28, 160(1)
  0107920  fsubs 2, 2, 29
  0107924  stw 31, 164(1)
  0107928  stfs 30, 172(1)
  010792c  stw 31, 176(1)
  0107930  lhz 4, 166(28)
  0107934  stb 24, 168(1)
  0107938  lis 5, 115
  010793c  li 7, 4
  0107940  addic 5, 5, 22784
  0107944  fabs 3, 1
  0107948  fabs 4, 2
  010794c  stfs 1, 192(1)
  0107950  stb 25, 169(1)
  0107954  sth 4, 170(1)
  0107958  lis 4, 16
  010795c  stfs 2, 196(1)
  0107960  addi 4, 4, 30688
  0107964  fsubs 1, 3, 4
  0107968  stfs 1, 200(1)
  010796c  lwz 6, 192(1)
  0107970  lfs 5, 0(4)
  0107974  lfs 1, 192(1)
  0107978  lwz 4, 196(1)
  010797c  lfs 2, 196(1)
  0107980  lwz 8, 200(1)
  0107984  rlwinm 4, 4, 3, 29, 29
  0107988  lfs 6, 200(1)
  010798c  fabs 1, 1
  0107990  rlwimi 4, 8, 2, 30, 30
  0107994  fabs 2, 2
  0107998  fsub 7, 6, 5
  010799c  rlwimi 4, 6, 4, 28, 28
  01079a0  fsub 6, 6, 5
  01079a4  ori 6, 5, 0
  01079a8  rlwimi 6, 4, 2, 26, 28
  01079ac  slwi 4, 4, 2
  01079b0  clrldi 6, 6, 32
  01079b4  fsel 1, 7, 1, 4
  01079b8  <unknown>
  01079bc  <unknown>
  01079c0  fsel 2, 6, 2, 3
  01079c4  fcmpu 0, 1, 5
  01079c8  bt 1, 0x1079d4
  01079cc  vspltisw 4, 0
  01079d0  b 0x107b10
  01079d4  fsubs 3, 2, 1
  01079d8  fadds 1, 2, 1
  01079dc  addic 6, 1, 16
  01079e0  li 7, 2
  01079e4  addic 4, 6, 112
  01079e8  addic 5, 6, 96
  01079ec  mtctr 7
  01079f0  fdivs 1, 3, 1
  01079f4  fmuls 3, 1, 1
  01079f8  stfs 1, 124(1)
  01079fc  stfs 1, 116(1)
  0107a00  stfs 1, 120(1)
  0107a04  stfs 1, 112(1)
  0107a08  lfs 4, 124(1)
  0107a0c  lfs 5, 116(1)
  0107a10  lfs 6, 120(1)
  0107a14  fmuls 1, 3, 3
  0107a18  fmuls 5, 5, 3
  0107a1c  fmuls 4, 4, 1
  0107a20  fmuls 2, 1, 1
  0107a24  fmuls 1, 6, 1
  0107a28  stfs 5, 116(1)
  0107a2c  fmuls 3, 4, 3
  0107a30  stfs 1, 120(1)
  0107a34  stfs 3, 124(1)
  0107a38  lfs 1, 96(6)
  0107a3c  fmuls 1, 1, 2
  0107a40  stfs 1, 112(6)
  0107a44  lfs 1, 4(5)
  0107a48  addic 5, 5, 8
  0107a4c  fmuls 1, 1, 2
  0107a50  addic 6, 6, 8
  0107a54  stfs 1, 4(4)
  0107a58  addic 4, 4, 8
  0107a5c  bdnz 0x107a38
  0107a60  lis 5, 115
  0107a64  ori 6, 1, 0
  0107a68  li 7, 4
  0107a6c  addic 5, 5, 22752
  0107a70  addic 4, 6, 112
  0107a74  mtctr 7
  0107a78  lfs 1, 112(6)
  0107a7c  lfs 2, 0(5)
  0107a80  fmuls 1, 1, 2
  0107a84  lfs 2, 4(5)
  0107a88  addic 5, 5, 8
  0107a8c  stfs 1, 112(6)
  0107a90  lfs 1, 4(4)
  0107a94  addic 6, 6, 8
  0107a98  fmuls 1, 1, 2
  0107a9c  stfs 1, 4(4)
  0107aa0  addic 4, 4, 8
  0107aa4  bdnz 0x107a78
  0107aa8  li 4, 4
  0107aac  vspltisw 2, 0
  0107ab0  mtctr 4
  0107ab4  li 4, 112
  0107ab8  addc 4, 1, 4
  0107abc  li 5, 16
  0107ac0  <unknown>
  0107ac4  addic 6, 4, 4
  0107ac8  vspltw 2, 2, 0
  0107acc  li 7, 16
  0107ad0  <unknown>
  0107ad4  addic 4, 4, 8
  0107ad8  vor 5, 5, 6
  0107adc  <unknown>
  0107ae0  <unknown>
  0107ae4  vaddfp 2, 2, 5
  0107ae8  vor 5, 6, 7
  0107aec  vaddfp 2, 2, 5
  0107af0  bdnz 0x107abc
  0107af4  lis 4, 16
  0107af8  li 5, 4
  0107afc  addi 4, 4, 30688
  0107b00  <unknown>
  0107b04  vspltw 5, 5, 0
  0107b08  vaddfp 2, 2, 5
  0107b0c  vmaddfp 4, 2, 4, 3
  0107b10  lis 4, 16
  0107b14  li 5, 8
  0107b18  addi 4, 4, 30688
  0107b1c  vspltw 6, 4, 0
  0107b20  li 6, 12
  0107b24  vspltisw 8, -1
  0107b28  vspltisw 13, -1
  0107b2c  <unknown>
  0107b30  <unknown>
  0107b34  li 5, 16
  0107b38  vspltw 2, 2, 0
  0107b3c  vspltw 3, 3, 0
  0107b40  vslw 8, 8, 8
  0107b44  vaddfp 2, 4, 2
  0107b48  vsubfp 7, 3, 4
  0107b4c  <unknown>
  0107b50  vspltw 5, 5, 0
  0107b54  li 5, 20
  0107b58  vspltisw 1, -1
  0107b5c  vspltisw 14, -1
  0107b60  vsubfp 11, 5, 4
  0107b64  vspltisw 15, -1
  0107b68  vsubfp 9, 3, 2
  0107b6c  vsubfp 10, 5, 2
  0107b70  vcmpgtfp 12, 7, 4
  0107b74  vsubfp 3, 3, 6
  0107b78  vsel 4, 7, 4, 12
  0107b7c  vsubfp 5, 5, 6
  0107b80  vcmpgtfp 12, 4, 11
  0107b84  vsel 4, 11, 4, 12
  0107b88  vspltisw 11, -1
  0107b8c  vcmpgtfp 7, 9, 2
  0107b90  vsel 2, 9, 2, 7
  0107b94  vcmpgtfp 0, 3, 6
  0107b98  vslw 11, 11, 11
  0107b9c  vspltisw 9, -1
  0107ba0  vcmpgtfp 7, 2, 10
  0107ba4  vsel 3, 3, 6, 0
  0107ba8  vmaddfp 11, 4, 4, 11
  0107bac  vslw 6, 1, 1
  0107bb0  vsel 2, 10, 2, 7
  0107bb4  vslw 7, 13, 13
  0107bb8  <unknown>
  0107bbc  vcmpgtfp 1, 3, 5
  0107bc0  vslw 9, 9, 9
  0107bc4  li 5, 24
  0107bc8  vmaddfp 8, 2, 2, 8
  0107bcc  vspltw 10, 10, 0
  0107bd0  vspltisw 12, -1
  0107bd4  vsel 3, 5, 3, 1
  0107bd8  vspltisw 5, -1
  0107bdc  <unknown>
  0107be0  vslw 12, 12, 12
  0107be4  li 5, 28
  0107be8  vspltw 13, 13, 0
  0107bec  vmaddfp 6, 11, 4, 6
  0107bf0  vslw 5, 5, 5
  0107bf4  li 6, 48
  0107bf8  <unknown>
  0107bfc  vmaddfp 7, 8, 2, 7
  0107c00  vmaddfp 5, 3, 3, 5
  0107c04  vspltw 0, 0, 0
  0107c08  li 5, 32
  0107c0c  li 7, 148
  0107c10  lis 8, 17839
  0107c14  vmaddfp 4, 6, 10, 4
  0107c18  ori 8, 8, 57190
  0107c1c  vmaddfp 9, 8, 7, 9
  0107c20  vmaddfp 2, 7, 10, 2
  0107c24  vslw 7, 14, 14
  0107c28  vspltisw 14, -1
  0107c2c  li 9, 64
  0107c30  vslw 1, 14, 14
  0107c34  vspltisw 14, -1
  0107c38  vmaddfp 12, 8, 9, 12
  0107c3c  vmaddfp 2, 9, 13, 2
  0107c40  vmaddfp 9, 11, 6, 1
  0107c44  vslw 6, 14, 14
  0107c48  <unknown>
  0107c4c  vspltisw 14, -1
  0107c50  vspltw 1, 1, 0
  0107c54  vmaddfp 6, 5, 3, 6
  0107c58  vslw 14, 14, 14
  0107c5c  li 5, 144
  0107c60  vmaddfp 7, 8, 12, 7
  0107c64  vmaddfp 2, 12, 0, 2
  0107c68  vslw 8, 15, 15
  0107c6c  vmaddfp 4, 9, 13, 4
  0107c70  vspltisw 12, -1
  0107c74  vmaddfp 8, 11, 9, 8
  0107c78  vspltisw 9, -1
  0107c7c  vmaddfp 3, 6, 10, 3
  0107c80  vslw 12, 12, 12
  0107c84  vmaddfp 2, 7, 1, 2
  0107c88  vslw 7, 9, 9
  0107c8c  vspltisw 9, -1
  0107c90  vmaddfp 7, 11, 8, 7
  0107c94  vmaddfp 4, 8, 0, 4
  0107c98  vmaddfp 11, 5, 6, 14
  0107c9c  vspltisw 8, -1
  0107ca0  vslw 6, 9, 9
  0107ca4  vspltisw 9, -1
  0107ca8  vmaddfp 2, 2, 31, 12
  0107cac  vmaddfp 4, 7, 1, 4
  0107cb0  vmaddfp 6, 5, 11, 6
  0107cb4  vslw 7, 8, 8
  0107cb8  vmaddfp 3, 11, 13, 3
  0107cbc  vslw 8, 9, 9
  0107cc0  lvx 9, 5, 1
  0107cc4  vspltw 10, 2, 0
  0107cc8  vmaddfp 4, 4, 31, 7
  0107ccc  stvewx 10, 5, 1
  0107cd0  vmaddfp 5, 5, 6, 8
  0107cd4  li 5, 64
  0107cd8  vmaddfp 3, 6, 0, 3
  0107cdc  vspltisw 7, -1
  0107ce0  lvx 6, 6, 4
  0107ce4  li 6, 80
  0107ce8  vperm 2, 2, 9, 6
  0107cec  vspltw 4, 4, 0
  0107cf0  vmaddfp 3, 5, 1, 3
  0107cf4  vslw 5, 7, 7
  0107cf8  stvewx 4, 7, 1
  0107cfc  stfs 31, 152(1)
  0107d00  stw 8, 156(1)
  0107d04  li 7, 176
  0107d08  <unknown>
  0107d0c  stfs 31, 208(1)
  0107d10  li 5, 96
  0107d14  stfs 31, 212(1)
  0107d18  stfs 31, 216(1)
  0107d1c  stfs 31, 220(1)
  0107d20  vmaddfp 3, 3, 31, 5
  0107d24  vspltw 4, 4, 0
  0107d28  lvx 5, 6, 4
  0107d2c  li 6, 112
  0107d30  lvx 6, 5, 4
  0107d34  li 5, 160
  0107d38  lvx 7, 6, 4
  0107d3c  li 4, 80
  0107d40  lvx 8, 5, 1
  0107d44  li 5, 96
  0107d48  li 0, 208
  0107d4c  lvx 9, 7, 1
  0107d50  lvx 10, 1, 0
  0107d54  stvx 8, 4, 1
  0107d58  vperm 3, 10, 3, 5
  0107d5c  stvx 9, 5, 1
  0107d60  ld 7, 80(1)
  0107d64  ld 8, 88(1)
  0107d68  vperm 3, 3, 4, 6
  0107d6c  vperm 2, 3, 2, 7
  0107d70  stvx 2, 9, 1
  0107d74  ld 5, 64(1)
  0107d78  ld 6, 72(1)
  0107d7c  ld 9, 96(1)
  0107d80  ld 10, 104(1)
  0107d84  bl 0x105ab4
  0107d88  addic 26, 26, 1
  0107d8c  addic 27, 27, 4
  0107d90  cmpw 26, 29
  0107d94  bt 0, 0x107904
  0107d98  li 0, 224
  0107d9c  lvx 31, 1, 0
  0107da0  ld 0, 352(1)
  0107da4  mtlr 0
  0107da8  lfd 28, 304(1)
  0107dac  lfd 29, 312(1)
  0107db0  lfd 30, 320(1)
  0107db4  lfd 31, 328(1)
  0107db8  ld 24, 240(1)
  0107dbc  ld 25, 248(1)
  0107dc0  ld 26, 256(1)
  0107dc4  ld 27, 264(1)
  0107dc8  ld 28, 272(1)
  0107dcc  ld 29, 280(1)
  0107dd0  ld 30, 288(1)
  0107dd4  ld 31, 296(1)
  0107dd8  addi 1, 1, 336
  0107ddc  blr

MB_VecAtan2Angles:   # 0x107de8, 0x390 bytes
  0107de8  stdu 1, -128(1)
  0107dec  ori 9, 4, 0
  0107df0  li 4, 128
  0107df4  lis 8, 16
  0107df8  addc 4, 1, 4
  0107dfc  addi 8, 8, 32224
  0107e00  lis 10, 17839
  0107e04  ori 10, 10, 57190
  0107e08  std 9, 56(4)
  0107e0c  std 3, 48(4)
  0107e10  cmpw 9, 10
  0107e14  lfs 1, 0(8)
  0107e18  lfs 2, 56(4)
  0107e1c  bt 2, 0x107fb8
  0107e20  lfs 2, 48(4)
  0107e24  lis 7, 115
  0107e28  lfs 3, 52(4)
  0107e2c  fabs 6, 2
  0107e30  fabs 3, 3
  0107e34  lis 4, 16
  0107e38  addi 4, 4, 32224
  0107e3c  rldicl 6, 3, 32, 32
  0107e40  rlwinm 3, 3, 3, 29, 29
  0107e44  fsubs 2, 6, 3
  0107e48  stfs 2, 52(1)
  0107e4c  lfs 2, 4(4)
  0107e50  addic 4, 7, 22784
  0107e54  lwz 7, 52(1)
  0107e58  lfs 4, 52(1)
  0107e5c  rlwimi 3, 7, 2, 30, 30
  0107e60  fsub 5, 4, 2
  0107e64  fsub 7, 4, 2
  0107e68  rlwimi 3, 6, 4, 28, 28
  0107e6c  ori 6, 4, 0
  0107e70  rlwimi 6, 3, 2, 26, 28
  0107e74  slwi 3, 3, 2
  0107e78  clrldi 6, 6, 32
  0107e7c  fsel 5, 5, 6, 3
  0107e80  lfsx 4, 4, 3
  0107e84  fsel 6, 7, 3, 6
  0107e88  lfs 3, 4(6)
  0107e8c  fcmpu 0, 5, 2
  0107e90  bt 1, 0x107e98
  0107e94  b 0x107fb0
  0107e98  fsubs 7, 6, 5
  0107e9c  fadds 5, 6, 5
  0107ea0  addic 7, 1, 16
  0107ea4  li 3, 2
  0107ea8  addic 6, 7, 72
  0107eac  addic 4, 7, 88
  0107eb0  mtctr 3
  0107eb4  fdivs 5, 7, 5
  0107eb8  fmuls 7, 5, 5
  0107ebc  stfs 5, 100(1)
  0107ec0  stfs 5, 92(1)
  0107ec4  stfs 5, 96(1)
  0107ec8  stfs 5, 88(1)
  0107ecc  lfs 8, 100(1)
  0107ed0  lfs 9, 92(1)
  0107ed4  lfs 10, 96(1)
  0107ed8  fmuls 5, 7, 7
  0107edc  fmuls 9, 9, 7
  0107ee0  fmuls 8, 8, 5
  0107ee4  fmuls 6, 5, 5
  0107ee8  fmuls 5, 10, 5
  0107eec  stfs 9, 92(1)
  0107ef0  fmuls 7, 8, 7
  0107ef4  stfs 5, 96(1)
  0107ef8  stfs 7, 100(1)
  0107efc  lfs 5, 72(7)
  0107f00  fmuls 5, 5, 6
  0107f04  stfs 5, 88(7)
  0107f08  lfs 5, 4(6)
  0107f0c  addic 7, 7, 8
  0107f10  addic 6, 6, 8
  0107f14  fmuls 5, 5, 6
  0107f18  stfs 5, 4(4)
  0107f1c  addic 4, 4, 8
  0107f20  bdnz 0x107efc
  0107f24  ori 8, 1, 0
  0107f28  lis 7, 115
  0107f2c  li 9, 4
  0107f30  addic 6, 8, 88
  0107f34  addic 7, 7, 22752
  0107f38  ori 4, 6, 0
  0107f3c  mtctr 9
  0107f40  lfs 5, 88(8)
  0107f44  lfs 6, 0(7)
  0107f48  fmuls 5, 5, 6
  0107f4c  lfs 6, 4(7)
  0107f50  addic 7, 7, 8
  0107f54  stfs 5, 88(8)
  0107f58  lfs 5, 4(6)
  0107f5c  addic 8, 8, 8
  0107f60  fmuls 5, 5, 6
  0107f64  stfs 5, 4(6)
  0107f68  addic 6, 6, 8
  0107f6c  bdnz 0x107f40
  0107f70  ori 6, 3, 0
  0107f74  ori 3, 1, 0
  0107f78  mtctr 6
  0107f7c  lfs 5, 88(3)
  0107f80  fadds 2, 2, 5
  0107f84  addic 3, 3, 16
  0107f88  lfs 5, 4(4)
  0107f8c  lfs 6, 8(4)
  0107f90  lfs 7, 12(4)
  0107f94  addic 4, 4, 16
  0107f98  fadds 2, 2, 5
  0107f9c  fadds 2, 2, 6
  0107fa0  fadds 2, 2, 7
  0107fa4  bdnz 0x107f7c
  0107fa8  fadds 2, 2, 1
  0107fac  fmadds 2, 2, 4, 3
  0107fb0  stfs 2, 0(5)
  0107fb4  b 0x108170
  0107fb8  lfs 5, 48(4)
  0107fbc  lfs 4, 52(4)
  0107fc0  lis 9, 115
  0107fc4  fabs 9, 5
  0107fc8  lis 4, 16
  0107fcc  fabs 10, 4
  0107fd0  addi 4, 4, 32224
  0107fd4  rldicl 8, 3, 32, 32
  0107fd8  rlwinm 3, 3, 3, 29, 29
  0107fdc  fsubs 3, 9, 10
  0107fe0  stfs 3, 48(1)
  0107fe4  lfs 3, 4(4)
  0107fe8  addic 4, 9, 22784
  0107fec  lwz 9, 48(1)
  0107ff0  lfs 6, 48(1)
  0107ff4  rlwimi 3, 9, 2, 30, 30
  0107ff8  fsub 8, 6, 3
  0107ffc  fsub 11, 6, 3
  0108000  rlwimi 3, 8, 4, 28, 28
  0108004  ori 8, 4, 0
  0108008  rlwimi 8, 3, 2, 26, 28
  010800c  slwi 3, 3, 2
  0108010  clrldi 8, 8, 32
  0108014  fsel 8, 8, 9, 10
  0108018  lfsx 7, 4, 3
  010801c  lfs 6, 4(8)
  0108020  fsel 9, 11, 10, 9
  0108024  fcmpu 0, 8, 3
  0108028  bt 1, 0x108030
  010802c  b 0x108148
  0108030  fsubs 10, 9, 8
  0108034  fadds 8, 9, 8
  0108038  addic 9, 1, 16
  010803c  li 3, 2
  0108040  addic 4, 9, 56
  0108044  addic 8, 9, 40
  0108048  mtctr 3
  010804c  fdivs 8, 10, 8
  0108050  fmuls 10, 8, 8
  0108054  stfs 8, 68(1)
  0108058  stfs 8, 60(1)
  010805c  stfs 8, 64(1)
  0108060  stfs 8, 56(1)
  0108064  lfs 11, 68(1)
  0108068  lfs 12, 60(1)
  010806c  lfs 13, 64(1)
  0108070  fmuls 8, 10, 10
  0108074  fmuls 12, 12, 10
  0108078  fmuls 11, 11, 8
  010807c  fmuls 9, 8, 8
  0108080  fmuls 8, 13, 8
  0108084  stfs 12, 60(1)
  0108088  fmuls 10, 11, 10
  010808c  stfs 8, 64(1)
  0108090  stfs 10, 68(1)
  0108094  lfs 8, 40(9)
  0108098  fmuls 8, 8, 9
  010809c  stfs 8, 56(9)
  01080a0  lfs 8, 4(8)
  01080a4  addic 8, 8, 8
  01080a8  fmuls 8, 8, 9
  01080ac  addic 9, 9, 8
  01080b0  stfs 8, 4(4)
  01080b4  addic 4, 4, 8
  01080b8  bdnz 0x108094
  01080bc  ori 10, 1, 0
  01080c0  li 4, 4
  01080c4  lis 9, 115
  01080c8  addic 8, 10, 56
  01080cc  mtctr 4
  01080d0  addic 9, 9, 22752
  01080d4  ori 4, 8, 0
  01080d8  lfs 8, 56(10)
  01080dc  lfs 9, 0(9)
  01080e0  fmuls 8, 8, 9
  01080e4  lfs 9, 4(9)
  01080e8  addic 9, 9, 8
  01080ec  stfs 8, 56(10)
  01080f0  lfs 8, 4(8)
  01080f4  addic 10, 10, 8
  01080f8  fmuls 8, 8, 9
  01080fc  stfs 8, 4(8)
  0108100  addic 8, 8, 8
  0108104  bdnz 0x1080d8
  0108108  ori 8, 3, 0
  010810c  ori 3, 1, 0
  0108110  mtctr 8
  0108114  lfs 8, 56(3)
  0108118  fadds 3, 3, 8
  010811c  lfs 8, 4(4)
  0108120  addic 3, 3, 16
  0108124  lfs 9, 8(4)
  0108128  lfs 10, 12(4)
  010812c  addic 4, 4, 16
  0108130  fadds 3, 3, 8
  0108134  fadds 3, 3, 9
  0108138  fadds 3, 3, 10
  010813c  bdnz 0x108114
  0108140  fadds 3, 3, 1
  0108144  fmadds 3, 3, 7, 6
  0108148  fmuls 1, 4, 4
  010814c  stfs 3, 0(5)
  0108150  lfs 3, 0(6)
  0108154  fmadds 1, 5, 5, 1
  0108158  fsqrts 1, 1
  010815c  fmuls 1, 3, 1
  0108160  stfs 1, 0(6)
  0108164  lfs 1, 0(7)
  0108168  fmuls 1, 1, 2
  010816c  stfs 1, 0(7)
  0108170  addi 1, 1, 128
  0108174  blr

MB_computeLobVelocity:   # 0x108180, 0x80 bytes
  0108180  lfs 3, 4(4)
  0108184  lfs 4, 4(3)
  0108188  lfs 5, 0(4)
  010818c  fsubs 3, 3, 4
  0108190  lfs 4, 0(3)
  0108194  fsubs 4, 5, 4
  0108198  cmpwi 7, 0
  010819c  fmuls 3, 3, 3
  01081a0  fmadds 3, 4, 4, 3
  01081a4  fmr 4, 1
  01081a8  lfs 1, 8(4)
  01081ac  fsqrts 5, 3
  01081b0  lfs 3, 8(3)
  01081b4  fdivs 4, 5, 4
  01081b8  bt 2, 0x1081c8
  01081bc  stfs 4, 0(7)
  01081c0  lfs 3, 8(3)
  01081c4  lfs 1, 8(4)
  01081c8  fmuls 5, 4, 4
  01081cc  lis 3, 17
  01081d0  fsubs 1, 3, 1
  01081d4  addi 3, 3, -32392
  01081d8  lfs 3, 4(3)
  01081dc  fmuls 2, 5, 2
  01081e0  fnmadds 1, 2, 3, 1
  01081e4  lfs 2, 0(3)
  01081e8  fsub 3, 2, 4
  01081ec  fdivs 1, 1, 4
  01081f0  fsub 4, 4, 2
  01081f4  fsel 2, 3, 2, 1
  01081f8  fsel 1, 4, 2, 1
  01081fc  blr

MB_randPrimPoints:   # 0x108240, 0xba4 bytes
  0108240  stdu 1, -2672(1)
  0108244  mflr 0
  0108248  std 0, 2688(1)
  010824c  stfd 18, 2560(1)
  0108250  stfd 19, 2568(1)
  0108254  stfd 20, 2576(1)
  0108258  stfd 21, 2584(1)
  010825c  stfd 22, 2592(1)
  0108260  stfd 23, 2600(1)
  0108264  stfd 24, 2608(1)
  0108268  stfd 25, 2616(1)
  010826c  stfd 26, 2624(1)
  0108270  stfd 27, 2632(1)
  0108274  stfd 28, 2640(1)
  0108278  stfd 29, 2648(1)
  010827c  stfd 30, 2656(1)
  0108280  stfd 31, 2664(1)
  0108284  std 23, 2488(1)
  0108288  std 25, 2504(1)
  010828c  lwz 23, 36(3)
  0108290  std 5, 2384(1)
  0108294  lis 25, 17
  0108298  std 6, 2392(1)
  010829c  std 31, 2552(1)
  01082a0  fmr 30, 1
  01082a4  ori 31, 3, 0
  01082a8  addi 25, 25, -32256
  01082ac  std 15, 2424(1)
  01082b0  lwz 23, 16(23)
  01082b4  ori 15, 7, 0
  01082b8  std 30, 2544(1)
  01082bc  std 29, 2536(1)
  01082c0  std 28, 2528(1)
  01082c4  std 27, 2520(1)
  01082c8  std 26, 2512(1)
  01082cc  std 24, 2496(1)
  01082d0  std 22, 2480(1)
  01082d4  std 21, 2472(1)
  01082d8  std 20, 2464(1)
  01082dc  std 19, 2456(1)
  01082e0  std 18, 2448(1)
  01082e4  std 17, 2440(1)
  01082e8  std 16, 2432(1)
  01082ec  std 14, 2416(1)
  01082f0  cmpwi 23, 0
  01082f4  bf 2, 0x108300
  01082f8  li 3, 0
  01082fc  b 0x108d54
  0108300  lhz 3, 2(23)
  0108304  addic 21, 1, 160
  0108308  cmpwi 3, 0
  010830c  bt 2, 0x108324
  0108310  extsh 4, 3
  0108314  ori 3, 31, 0
  0108318  ori 5, 21, 0
  010831c  bl 0xf595c
  0108320  nop
  0108324  lwz 3, 4(23)
  0108328  cmpwi 3, 0
  010832c  bt 1, 0x108338
  0108330  li 3, 0
  0108334  b 0x108d54
  0108338  srawi 20, 3, 5
  010833c  lfs 31, 0(25)
  0108340  li 26, 0
  0108344  addze 20, 20
  0108348  ori 14, 26, 0
  010834c  cmpwi 20, 0
  0108350  addic 3, 23, 16
  0108354  ori 28, 14, 0
  0108358  bf 1, 0x108710
  010835c  li 4, 4
  0108360  li 5, 8
  0108364  ori 6, 1, 0
  0108368  li 24, 2208
  010836c  addic 29, 23, 34
  0108370  <unknown>
  0108374  addic 30, 23, 38
  0108378  lfs 1, 4(25)
  010837c  addic 7, 23, 42
  0108380  <unknown>
  0108384  addic 27, 23, 46
  0108388  lfs 2, 12(25)
  010838c  li 16, 44
  0108390  vspltw 4, 4, 0
  0108394  li 22, 112
  0108398  vspltw 7, 7, 0
  010839c  li 17, 116
  01083a0  lfs 3, 16(25)
  01083a4  li 18, 120
  01083a8  li 19, 124
  01083ac  addic 23, 23, 28
  01083b0  addc 24, 6, 24
  01083b4  li 4, 1
  01083b8  lhz 5, 2(3)
  01083bc  slw 4, 4, 26
  01083c0  clrlwi 8, 5, 31
  01083c4  and 4, 4, 15
  01083c8  cmpwi 1, 8, 0
  01083cc  cmpwi 4, 0
  01083d0  lwz 4, 0(3)
  01083d4  cror 2, 2, 6
  01083d8  clrlwi 5, 4, 24
  01083dc  bt 2, 0x1086ec
  01083e0  cmpwi 5, 2
  01083e4  stw 3, 2288(6)
  01083e8  bt 1, 0x1083f8
  01083ec  cmpwi 5, -1
  01083f0  bf 1, 0x1086d8
  01083f4  b 0x10840c
  01083f8  cmpwi 5, 3
  01083fc  bf 1, 0x1085ac
  0108400  cmpwi 5, 4
  0108404  bf 1, 0x10864c
  0108408  b 0x1086d8
  010840c  cmpwi 5, 2
  0108410  bf 0, 0x10848c
  0108414  lhz 4, 16(3)
  0108418  lhz 5, 0(29)
  010841c  lhz 8, 20(3)
  0108420  lhz 9, 0(30)
  0108424  sth 4, 112(1)
  0108428  sth 5, 114(1)
  010842c  sth 8, 116(1)
  0108430  sth 9, 118(1)
  0108434  lhz 4, 24(3)
  0108438  lhz 5, 0(7)
  010843c  vspltisw 2, -1
  0108440  lhz 8, 28(3)
  0108444  lhz 9, 0(27)
  0108448  sth 4, 120(1)
  010844c  sth 5, 122(1)
  0108450  sth 8, 124(1)
  0108454  vslw 2, 2, 2
  0108458  sth 9, 126(1)
  010845c  <unknown>
  0108460  vspltisw 3, -1
  0108464  vmaddfp 8, 6, 4, 2
  0108468  <unknown>
  010846c  <unknown>
  0108470  vslw 10, 3, 3
  0108474  <unknown>
  0108478  <unknown>
  010847c  vmaddfp 8, 9, 8, 10
  0108480  vspltw 9, 8, 0
  0108484  stvewx 9, 19, 1
  0108488  b 0x108530
  010848c  lwz 5, 4(3)
  0108490  li 4, 16
  0108494  vspltisw 8, -1
  0108498  slwi 5, 5, 4
  010849c  addc 5, 5, 21
  01084a0  vslw 8, 8, 8
  01084a4  clrldi 5, 5, 32
  01084a8  lvx 2, 0, 5
  01084ac  stvx 2, 22, 1
  01084b0  lhz 5, 16(3)
  01084b4  lhz 8, 0(29)
  01084b8  lhz 9, 20(3)
  01084bc  lhz 10, 0(30)
  01084c0  sth 5, 128(1)
  01084c4  sth 8, 130(1)
  01084c8  sth 9, 132(1)
  01084cc  sth 10, 134(1)
  01084d0  lhz 5, 24(3)
  01084d4  lhz 8, 0(7)
  01084d8  sth 5, 136(1)
  01084dc  sth 8, 138(1)
  01084e0  <unknown>
  01084e4  li 5, 128
  01084e8  <unknown>
  01084ec  li 8, 136
  01084f0  <unknown>
  01084f4  li 4, 132
  01084f8  vor 3, 3, 5
  01084fc  vspltw 5, 2, 0
  0108500  <unknown>
  0108504  vspltw 9, 2, 1
  0108508  vmaddfp 8, 3, 6, 8
  010850c  vspltw 2, 2, 2
  0108510  vaddfp 5, 5, 10
  0108514  vspltisw 10, -1
  0108518  <unknown>
  010851c  <unknown>
  0108520  vaddfp 3, 9, 3
  0108524  vslw 9, 10, 10
  0108528  vaddfp 2, 2, 11
  010852c  vmaddfp 8, 8, 4, 9
  0108530  vspltisw 9, -1
  0108534  vspltisw 10, -1
  0108538  vspltw 8, 8, 0
  010853c  vspltisw 11, -1
  0108540  vslw 9, 9, 9
  0108544  vslw 10, 10, 10
  0108548  vspltisw 12, -1
  010854c  vspltisw 13, -1
  0108550  vmaddfp 6, 6, 4, 9
  0108554  vspltw 3, 3, 0
  0108558  vmaddfp 9, 8, 7, 10
  010855c  vspltw 2, 2, 0
  0108560  vspltisw 10, -1
  0108564  vspltw 5, 5, 0
  0108568  vslw 11, 11, 11
  010856c  vslw 12, 12, 12
  0108570  vslw 10, 10, 10
  0108574  vslw 13, 13, 13
  0108578  vspltw 6, 6, 0
  010857c  vmaddfp 9, 9, 8, 10
  0108580  vspltisw 10, -1
  0108584  vmaddfp 2, 2, 6, 11
  0108588  vmaddfp 3, 3, 6, 12
  010858c  vmaddfp 5, 5, 6, 13
  0108590  vslw 6, 10, 10
  0108594  vmaddfp 6, 9, 8, 6
  0108598  stvewx 5, 22, 1
  010859c  stvewx 3, 17, 1
  01085a0  stvewx 2, 18, 1
  01085a4  stvewx 6, 0, 24
  01085a8  b 0x1086d8
  01085ac  lhz 4, 16(3)
  01085b0  lhz 5, 0(29)
  01085b4  lhz 8, 20(3)
  01085b8  lhz 9, 0(30)
  01085bc  sth 4, 144(1)
  01085c0  sth 5, 146(1)
  01085c4  sth 8, 148(1)
  01085c8  sth 9, 150(1)
  01085cc  lhz 4, 24(3)
  01085d0  lhz 5, 28(3)
  01085d4  lhz 8, 0(7)
  01085d8  lhz 9, 0(27)
  01085dc  sth 5, 156(1)
  01085e0  sth 4, 152(1)
  01085e4  sth 8, 154(1)
  01085e8  sth 9, 158(1)
  01085ec  lfs 4, 44(31)
  01085f0  lfs 6, 144(1)
  01085f4  lfs 7, 148(1)
  01085f8  fmuls 6, 6, 4
  01085fc  lfs 8, 156(1)
  0108600  fmuls 7, 7, 4
  0108604  lfs 9, 152(1)
  0108608  fmuls 8, 8, 4
  010860c  fmuls 5, 4, 1
  0108610  fmuls 4, 9, 4
  0108614  stfs 6, 144(1)
  0108618  stfs 7, 148(1)
  010861c  fmuls 6, 8, 1
  0108620  fmuls 7, 8, 3
  0108624  fmuls 8, 8, 2
  0108628  stfs 4, 152(1)
  010862c  lfs 4, 4(3)
  0108630  fmuls 4, 5, 4
  0108634  fmuls 5, 7, 6
  0108638  fmuls 7, 8, 6
  010863c  fmuls 4, 5, 4
  0108640  fmadds 4, 7, 6, 4
  0108644  stfs 4, 2208(6)
  0108648  b 0x1086d8
  010864c  lfs 4, 44(31)
  0108650  lhz 4, 6(3)
  0108654  fmuls 5, 4, 1
  0108658  extsh 4, 4
  010865c  lhz 5, 4(3)
  0108660  slwi 4, 4, 4
  0108664  extsh 5, 5
  0108668  addc 4, 4, 21
  010866c  slwi 5, 5, 4
  0108670  clrldi 4, 4, 32
  0108674  addc 5, 5, 21
  0108678  clrldi 5, 5, 32
  010867c  lfs 6, 4(4)
  0108680  lfs 7, 0(4)
  0108684  fmuls 6, 6, 5
  0108688  lfs 8, 4(5)
  010868c  fmuls 7, 7, 5
  0108690  lfs 9, 0(5)
  0108694  lfs 10, 8(4)
  0108698  lfs 11, 8(5)
  010869c  fmuls 10, 10, 5
  01086a0  fmsubs 6, 8, 5, 6
  01086a4  fmsubs 7, 9, 5, 7
  01086a8  fmsubs 5, 11, 5, 10
  01086ac  fmuls 6, 6, 6
  01086b0  fmadds 6, 7, 7, 6
  01086b4  lfs 7, 12(3)
  01086b8  fmuls 4, 7, 4
  01086bc  fmadds 5, 5, 5, 6
  01086c0  fmuls 6, 4, 1
  01086c4  fmuls 4, 4, 3
  01086c8  fsqrts 5, 5
  01086cc  fmuls 4, 4, 6
  01086d0  fmuls 4, 4, 5
  01086d4  stfs 4, 2208(6)
  01086d8  lfs 4, 2208(6)
  01086dc  addic 24, 24, 4
  01086e0  addic 28, 28, 1
  01086e4  addic 6, 6, 4
  01086e8  fadds 31, 31, 4
  01086ec  addic 26, 26, 1
  01086f0  addic 29, 29, 32
  01086f4  cmpw 26, 20
  01086f8  addic 30, 30, 32
  01086fc  addic 7, 7, 32
  0108700  addic 27, 27, 32
  0108704  addic 23, 23, 32
  0108708  addic 3, 3, 32
  010870c  bt 0, 0x1083b4
  0108710  lfs 1, 20(25)
  0108714  ori 30, 14, 0
  0108718  ld 3, 2384(1)
  010871c  fmadds 1, 30, 31, 1
  0108720  fctiwz 1, 1
  0108724  stfd 1, 2400(1)
  0108728  lwz 4, 2404(1)
  010872c  extsw 29, 4
  0108730  subc 4, 3, 29
  0108734  subc 3, 3, 29
  0108738  sradi 4, 4, 63
  010873c  and 3, 4, 3
  0108740  addc 29, 29, 3
  0108744  cmpwi 29, 0
  0108748  bf 1, 0x108d50
  010874c  ld 27, 2392(1)
  0108750  fmr 20, 19
  0108754  bl 0x5c8318
  0108758  nop
  010875c  srawi 3, 3, 15
  0108760  clrlwi 3, 3, 17
  0108764  extsw 3, 3
  0108768  cmpwi 28, 0
  010876c  ori 26, 14, 0
  0108770  std 3, 2400(1)
  0108774  lfs 24, 24(25)
  0108778  lfd 1, 2400(1)
  010877c  fcfid 1, 1
  0108780  frsp 1, 1
  0108784  fmuls 1, 1, 31
  0108788  fmuls 1, 1, 24
  010878c  bf 1, 0x1087b4
  0108790  ori 3, 1, 0
  0108794  lfs 2, 2208(3)
  0108798  fcmpu 0, 1, 2
  010879c  bt 0, 0x1087b4
  01087a0  addic 26, 26, 1
  01087a4  fsubs 1, 1, 2
  01087a8  addic 3, 3, 4
  01087ac  cmpw 26, 28
  01087b0  bt 0, 0x108794
  01087b4  slwi 3, 26, 2
  01087b8  addc 3, 3, 1
  01087bc  clrldi 26, 3, 32
  01087c0  lwz 26, 2288(26)
  01087c4  lwz 3, 0(26)
  01087c8  clrlwi 3, 3, 24
  01087cc  cmpwi 3, 2
  01087d0  cmpwi 1, 3, -1
  01087d4  cmpwi 6, 3, 3
  01087d8  cmpwi 7, 3, 4
  01087dc  bt 1, 0x1087e8
  01087e0  bf 5, 0x108d40
  01087e4  b 0x1087f4
  01087e8  bf 25, 0x1089c8
  01087ec  bf 29, 0x108b64
  01087f0  b 0x108d40
  01087f4  cmpwi 3, 2
  01087f8  bf 0, 0x108814
  01087fc  lfs 2, 16(26)
  0108800  lfs 1, 20(26)
  0108804  lfs 30, 24(26)
  0108808  lfs 3, 28(26)
  010880c  lfs 4, 44(31)
  0108810  b 0x108874
  0108814  lwz 3, 4(26)
  0108818  slwi 3, 3, 4
  010881c  addc 3, 3, 21
  0108820  clrldi 3, 3, 32
  0108824  lvx 2, 0, 3
  0108828  li 0, 2368
  010882c  vspltw 3, 2, 1
  0108830  stvx 2, 1, 0
  0108834  lfs 2, 16(26)
  0108838  li 0, 2368
  010883c  lfs 1, 20(26)
  0108840  lfs 30, 24(26)
  0108844  lfs 4, 44(31)
  0108848  lfs 3, 12(26)
  010884c  lfs 5, 2368(1)
  0108850  vspltw 2, 2, 2
  0108854  stvx 3, 1, 0
  0108858  fadds 2, 5, 2
  010885c  li 0, 2368
  0108860  lfs 5, 2368(1)
  0108864  fadds 1, 5, 1
  0108868  stvx 2, 1, 0
  010886c  lfs 5, 2368(1)
  0108870  fadds 30, 5, 30
  0108874  fmuls 3, 3, 4
  0108878  lfs 27, 4(25)
  010887c  fmuls 23, 30, 4
  0108880  fmuls 21, 2, 4
  0108884  fmuls 22, 1, 4
  0108888  fmuls 30, 3, 27
  010888c  fneg 26, 30
  0108890  fsubs 25, 30, 26
  0108894  bl 0x5c8318
  0108898  nop
  010889c  srawi 3, 3, 15
  01088a0  clrlwi 3, 3, 17
  01088a4  extsw 3, 3
  01088a8  std 3, 2400(1)
  01088ac  lfd 1, 2400(1)
  01088b0  fcfid 1, 1
  01088b4  frsp 1, 1
  01088b8  fmuls 29, 1, 25
  01088bc  fmadds 29, 29, 24, 26
  01088c0  bl 0x5c8318
  01088c4  nop
  01088c8  srawi 3, 3, 15
  01088cc  clrlwi 3, 3, 17
  01088d0  extsw 3, 3
  01088d4  std 3, 2400(1)
  01088d8  lfd 1, 2400(1)
  01088dc  fcfid 1, 1
  01088e0  frsp 1, 1
  01088e4  fmuls 28, 1, 25
  01088e8  fmadds 28, 28, 24, 26
  01088ec  bl 0x5c8318
  01088f0  nop
  01088f4  srawi 3, 3, 15
  01088f8  fmuls 1, 28, 28
  01088fc  clrlwi 3, 3, 17
  0108900  extsw 3, 3
  0108904  std 3, 2400(1)
  0108908  fmadds 2, 29, 29, 1
  010890c  lfd 1, 2400(1)
  0108910  fcfid 1, 1
  0108914  frsp 1, 1
  0108918  fmuls 1, 1, 25
  010891c  fmadds 1, 1, 24, 26
  0108920  fmadds 2, 1, 1, 2
  0108924  fsqrts 2, 2
  0108928  fcmpu 0, 2, 30
  010892c  bt 1, 0x108894
  0108930  fmadds 2, 22, 27, 28
  0108934  lfs 4, 208(31)
  0108938  fmadds 3, 21, 27, 29
  010893c  lfs 5, 192(31)
  0108940  fmadds 1, 23, 27, 1
  0108944  lfs 6, 212(31)
  0108948  lfs 7, 224(31)
  010894c  lfs 8, 196(31)
  0108950  lfs 9, 216(31)
  0108954  lfs 10, 228(31)
  0108958  fmuls 4, 4, 2
  010895c  fmuls 6, 6, 2
  0108960  fmuls 9, 9, 2
  0108964  fmadds 4, 5, 3, 4
  0108968  fmadds 5, 8, 3, 6
  010896c  lfs 6, 16(31)
  0108970  lfs 8, 200(31)
  0108974  lfs 11, 204(31)
  0108978  fmadds 8, 8, 3, 9
  010897c  fmadds 3, 11, 3, 19
  0108980  fmadds 4, 7, 1, 4
  0108984  lfs 7, 232(31)
  0108988  fmadds 5, 10, 1, 5
  010898c  lfs 19, 220(31)
  0108990  lfs 9, 236(31)
  0108994  fmadds 7, 7, 1, 8
  0108998  fmadds 1, 9, 1, 3
  010899c  fadds 4, 4, 6
  01089a0  fmadds 19, 19, 2, 1
  01089a4  stfs 4, 0(27)
  01089a8  lfs 3, 20(31)
  01089ac  fadds 1, 5, 3
  01089b0  stfs 1, 4(27)
  01089b4  lfs 1, 24(31)
  01089b8  stfs 19, 12(27)
  01089bc  fadds 1, 7, 1
  01089c0  stfs 1, 8(27)
  01089c4  b 0x108d40
  01089c8  lfs 30, 28(26)
  01089cc  lfs 1, 44(31)
  01089d0  lfs 29, 4(25)
  01089d4  fmuls 3, 30, 1
  01089d8  lfs 4, 4(26)
  01089dc  lfs 2, 16(26)
  01089e0  lfs 5, 20(26)
  01089e4  lfs 6, 24(26)
  01089e8  fmuls 4, 4, 1
  01089ec  fmuls 28, 2, 1
  01089f0  fmuls 27, 5, 1
  01089f4  fmuls 26, 6, 1
  01089f8  fmuls 1, 3, 29
  01089fc  fmuls 25, 4, 29
  0108a00  fmuls 23, 1, 1
  0108a04  bl 0x5c8318
  0108a08  nop
  0108a0c  srawi 3, 3, 15
  0108a10  clrlwi 3, 3, 17
  0108a14  extsw 3, 3
  0108a18  std 3, 2400(1)
  0108a1c  lfd 1, 2400(1)
  0108a20  fcfid 1, 1
  0108a24  frsp 1, 1
  0108a28  fmuls 1, 1, 23
  0108a2c  fmuls 1, 1, 24
  0108a30  fsqrts 23, 1
  0108a34  bl 0x5c8318
  0108a38  nop
  0108a3c  srawi 3, 3, 15
  0108a40  clrlwi 3, 3, 17
  0108a44  extsw 3, 3
  0108a48  std 3, 2400(1)
  0108a4c  lfd 1, 2400(1)
  0108a50  fcfid 1, 1
  0108a54  frsp 1, 1
  0108a58  fmuls 25, 1, 25
  0108a5c  bl 0x5c8318
  0108a60  nop
  0108a64  srawi 3, 3, 15
  0108a68  clrlwi 3, 3, 20
  0108a6c  addic 3, 3, -2048
  0108a70  extsw 3, 3
  0108a74  std 3, 2400(1)
  0108a78  lfs 1, 28(25)
  0108a7c  lfs 2, 32(25)
  0108a80  lfs 3, 36(25)
  0108a84  lfs 4, 40(25)
  0108a88  lfd 5, 2400(1)
  0108a8c  fcfid 5, 5
  0108a90  lfs 6, 44(25)
  0108a94  frsp 5, 5
  0108a98  fmuls 1, 5, 1
  0108a9c  fmuls 1, 1, 2
  0108aa0  fadds 2, 1, 3
  0108aa4  fsubs 3, 4, 1
  0108aa8  fsubs 5, 6, 1
  0108aac  fsubs 4, 4, 2
  0108ab0  fsub 7, 1, 3
  0108ab4  fsubs 6, 6, 2
  0108ab8  fsub 8, 2, 4
  0108abc  fsel 1, 7, 3, 1
  0108ac0  lfs 3, 48(25)
  0108ac4  fsel 2, 8, 4, 2
  0108ac8  fsub 4, 5, 1
  0108acc  fsub 8, 6, 2
  0108ad0  fsel 1, 4, 5, 1
  0108ad4  lfs 4, 52(25)
  0108ad8  lfs 5, 56(25)
  0108adc  lfs 9, 60(25)
  0108ae0  lfs 10, 16(31)
  0108ae4  fsel 2, 8, 6, 2
  0108ae8  fmuls 6, 1, 1
  0108aec  fmuls 7, 2, 2
  0108af0  fmuls 8, 6, 1
  0108af4  fmuls 11, 7, 2
  0108af8  fmuls 12, 6, 8
  0108afc  fmadds 1, 8, 3, 1
  0108b00  lfs 8, 20(31)
  0108b04  lfs 13, 24(31)
  0108b08  stfs 30, 12(27)
  0108b0c  fmuls 0, 7, 11
  0108b10  fmadds 2, 11, 3, 2
  0108b14  fmuls 3, 6, 12
  0108b18  fmadds 1, 12, 4, 1
  0108b1c  fmuls 11, 7, 0
  0108b20  fmadds 2, 0, 4, 2
  0108b24  fmuls 4, 6, 3
  0108b28  fmadds 1, 3, 5, 1
  0108b2c  fmuls 3, 7, 11
  0108b30  fmadds 2, 11, 5, 2
  0108b34  fmadds 1, 4, 9, 1
  0108b38  fmadds 4, 25, 24, 13
  0108b3c  fmadds 2, 3, 9, 2
  0108b40  fmadds 1, 1, 23, 8
  0108b44  fmadds 3, 26, 29, 4
  0108b48  fmadds 2, 2, 23, 10
  0108b4c  fmadds 1, 27, 29, 1
  0108b50  stfs 3, 8(27)
  0108b54  fmadds 2, 28, 29, 2
  0108b58  stfs 1, 4(27)
  0108b5c  stfs 2, 0(27)
  0108b60  b 0x108d40
  0108b64  lhz 3, 4(26)
  0108b68  lfs 1, 44(31)
  0108b6c  extsh 3, 3
  0108b70  lhz 4, 6(26)
  0108b74  slwi 3, 3, 4
  0108b78  extsh 4, 4
  0108b7c  addc 3, 3, 21
  0108b80  slwi 4, 4, 4
  0108b84  clrldi 3, 3, 32
  0108b88  addc 4, 4, 21
  0108b8c  lfs 2, 0(3)
  0108b90  lfs 3, 4(3)
  0108b94  fmuls 30, 2, 1
  0108b98  lfs 2, 8(3)
  0108b9c  fmuls 29, 3, 1
  0108ba0  clrldi 3, 4, 32
  0108ba4  fmuls 28, 2, 1
  0108ba8  lfs 2, 0(3)
  0108bac  lfs 3, 4(3)
  0108bb0  lfs 4, 8(3)
  0108bb4  fmsubs 26, 2, 1, 30
  0108bb8  fmsubs 25, 3, 1, 29
  0108bbc  fmsubs 18, 4, 1, 28
  0108bc0  bl 0x5c8318
  0108bc4  nop
  0108bc8  srawi 3, 3, 15
  0108bcc  clrlwi 3, 3, 17
  0108bd0  extsw 3, 3
  0108bd4  std 3, 2400(1)
  0108bd8  lfs 23, 4(25)
  0108bdc  lfs 1, 12(26)
  0108be0  lfs 2, 44(31)
  0108be4  fmuls 27, 1, 2
  0108be8  lfd 1, 2400(1)
  0108bec  fcfid 1, 1
  0108bf0  fmuls 27, 27, 23
  0108bf4  frsp 1, 1
  0108bf8  fneg 22, 27
  0108bfc  fmuls 1, 1, 24
  0108c00  fsubs 21, 27, 22
  0108c04  fmadds 30, 26, 1, 30
  0108c08  fmadds 29, 25, 1, 29
  0108c0c  fmadds 28, 18, 1, 28
  0108c10  bl 0x5c8318
  0108c14  nop
  0108c18  srawi 3, 3, 15
  0108c1c  clrlwi 3, 3, 17
  0108c20  extsw 3, 3
  0108c24  std 3, 2400(1)
  0108c28  lfd 1, 2400(1)
  0108c2c  fcfid 1, 1
  0108c30  frsp 1, 1
  0108c34  fmuls 26, 1, 21
  0108c38  fmadds 26, 26, 24, 22
  0108c3c  bl 0x5c8318
  0108c40  nop
  0108c44  srawi 3, 3, 15
  0108c48  clrlwi 3, 3, 17
  0108c4c  extsw 3, 3
  0108c50  std 3, 2400(1)
  0108c54  lfd 1, 2400(1)
  0108c58  fcfid 1, 1
  0108c5c  frsp 1, 1
  0108c60  fmuls 25, 1, 21
  0108c64  fmadds 25, 25, 24, 22
  0108c68  bl 0x5c8318
  0108c6c  nop
  0108c70  srawi 3, 3, 15
  0108c74  fmuls 1, 25, 25
  0108c78  clrlwi 3, 3, 17
  0108c7c  extsw 3, 3
  0108c80  std 3, 2400(1)
  0108c84  fmadds 2, 26, 26, 1
  0108c88  lfd 1, 2400(1)
  0108c8c  fcfid 1, 1
  0108c90  frsp 1, 1
  0108c94  fmuls 1, 1, 21
  0108c98  fmadds 1, 1, 24, 22
  0108c9c  fmadds 2, 1, 1, 2
  0108ca0  fsqrts 2, 2
  0108ca4  fcmpu 0, 2, 27
  0108ca8  bt 1, 0x108c10
  0108cac  fmadds 2, 29, 23, 25
  0108cb0  lfs 4, 208(31)
  0108cb4  fmadds 3, 30, 23, 26
  0108cb8  lfs 5, 192(31)
  0108cbc  lfs 6, 212(31)
  0108cc0  fmadds 1, 28, 23, 1
  0108cc4  lfs 7, 224(31)
  0108cc8  lfs 8, 196(31)
  0108ccc  lfs 9, 216(31)
  0108cd0  lfs 10, 228(31)
  0108cd4  lfs 11, 16(31)
  0108cd8  fmuls 4, 4, 2
  0108cdc  fmuls 6, 6, 2
  0108ce0  fmuls 9, 9, 2
  0108ce4  fmadds 4, 5, 3, 4
  0108ce8  fmadds 5, 8, 3, 6
  0108cec  lfs 6, 200(31)
  0108cf0  lfs 8, 204(31)
  0108cf4  fmadds 6, 6, 3, 9
  0108cf8  fmadds 3, 8, 3, 20
  0108cfc  lfs 9, 232(31)
  0108d00  lfs 20, 220(31)
  0108d04  fmadds 4, 7, 1, 4
  0108d08  lfs 7, 236(31)
  0108d0c  fmadds 5, 10, 1, 5
  0108d10  fmadds 6, 9, 1, 6
  0108d14  fmadds 1, 7, 1, 3
  0108d18  fadds 3, 4, 11
  0108d1c  fmadds 20, 20, 2, 1
  0108d20  stfs 3, 0(27)
  0108d24  lfs 1, 20(31)
  0108d28  fadds 1, 5, 1
  0108d2c  stfs 1, 4(27)
  0108d30  lfs 1, 24(31)
  0108d34  stfs 20, 12(27)
  0108d38  fadds 1, 6, 1
  0108d3c  stfs 1, 8(27)
  0108d40  addic 30, 30, 1
  0108d44  addic 27, 27, 16
  0108d48  cmpw 30, 29
  0108d4c  bt 0, 0x108754
  0108d50  ori 3, 29, 0
  0108d54  ld 0, 2688(1)
  0108d58  mtlr 0
  0108d5c  lfd 18, 2560(1)
  0108d60  lfd 19, 2568(1)
  0108d64  lfd 20, 2576(1)
  0108d68  lfd 21, 2584(1)
  0108d6c  lfd 22, 2592(1)
  0108d70  lfd 23, 2600(1)
  0108d74  lfd 24, 2608(1)
  0108d78  lfd 25, 2616(1)
  0108d7c  lfd 26, 2624(1)
  0108d80  lfd 27, 2632(1)
  0108d84  lfd 28, 2640(1)
  0108d88  lfd 29, 2648(1)
  0108d8c  lfd 30, 2656(1)
  0108d90  lfd 31, 2664(1)
  0108d94  ld 14, 2416(1)
  0108d98  ld 15, 2424(1)
  0108d9c  ld 16, 2432(1)
  0108da0  ld 17, 2440(1)
  0108da4  ld 18, 2448(1)
  0108da8  ld 19, 2456(1)
  0108dac  ld 20, 2464(1)
  0108db0  ld 21, 2472(1)
  0108db4  ld 22, 2480(1)
  0108db8  ld 23, 2488(1)
  0108dbc  ld 24, 2496(1)
  0108dc0  ld 25, 2504(1)
  0108dc4  ld 26, 2512(1)
  0108dc8  ld 27, 2520(1)
  0108dcc  ld 28, 2528(1)
  0108dd0  ld 29, 2536(1)
  0108dd4  ld 30, 2544(1)
  0108dd8  ld 31, 2552(1)
  0108ddc  addi 1, 1, 2672
  0108de0  blr

MB_RandomizeAnimSpeed:   # 0x108df0, 0xfc bytes
  0108df0  stdu 1, -176(1)
  0108df4  mflr 0
  0108df8  std 0, 192(1)
  0108dfc  stfd 29, 152(1)
  0108e00  stfd 30, 160(1)
  0108e04  stfd 31, 168(1)
  0108e08  std 30, 136(1)
  0108e0c  ori 30, 3, 0
  0108e10  std 31, 144(1)
  0108e14  lbz 3, 83(3)
  0108e18  ori 31, 5, 0
  0108e1c  fmr 30, 1
  0108e20  cmpw 3, 4
  0108e24  fmr 31, 2
  0108e28  bf 2, 0x108eb0
  0108e2c  lis 3, 17
  0108e30  lwz 5, 88(30)
  0108e34  lis 4, 16256
  0108e38  addi 3, 3, -29212
  0108e3c  cmpw 5, 4
  0108e40  lfs 29, 0(3)
  0108e44  bf 2, 0x108ec8
  0108e48  bl 0x5c8318
  0108e4c  nop
  0108e50  srawi 3, 3, 15
  0108e54  fsubs 1, 31, 30
  0108e58  clrlwi 3, 3, 17
  0108e5c  extsw 3, 3
  0108e60  std 3, 112(1)
  0108e64  lis 3, 17
  0108e68  addi 3, 3, -29212
  0108e6c  lfs 2, 4(3)
  0108e70  lfd 3, 112(1)
  0108e74  fcfid 3, 3
  0108e78  frsp 3, 3
  0108e7c  fmuls 1, 3, 1
  0108e80  fmadds 30, 1, 2, 30
  0108e84  fcmpu 0, 30, 29
  0108e88  stfs 30, 88(30)
  0108e8c  bf 2, 0x108ea8
  0108e90  lis 3, 17
  0108e94  lis 4, 16256
  0108e98  addi 3, 3, -29212
  0108e9c  ori 4, 4, 8389
  0108ea0  lfs 30, 8(3)
  0108ea4  stw 4, 88(30)
  0108ea8  stfs 30, 0(31)
  0108eac  b 0x108ec8
  0108eb0  lwz 3, 88(30)
  0108eb4  lwz 4, 0(31)
  0108eb8  cmpw 3, 4
  0108ebc  bf 2, 0x108ec8
  0108ec0  lis 3, 16256
  0108ec4  stw 3, 88(30)
  0108ec8  ld 0, 192(1)
  0108ecc  mtlr 0
  0108ed0  lfd 29, 152(1)
  0108ed4  lfd 30, 160(1)
  0108ed8  lfd 31, 168(1)
  0108edc  ld 30, 136(1)
  0108ee0  ld 31, 144(1)
  0108ee4  addi 1, 1, 176
  0108ee8  blr

MB_Update2LegIK:   # 0x108ef8, 0x2b4 bytes
  0108ef8  stdu 1, -272(1)
  0108efc  mflr 0
  0108f00  std 0, 288(1)
  0108f04  std 31, 264(1)
  0108f08  std 30, 256(1)
  0108f0c  ori 31, 4, 0
  0108f10  ori 30, 3, 0
  0108f14  addic 5, 1, 180
  0108f18  li 4, 5
  0108f1c  lbz 6, 272(31)
  0108f20  lbz 7, 273(31)
  0108f24  stw 6, 180(1)
  0108f28  lbz 8, 432(31)
  0108f2c  ori 6, 31, 0
  0108f30  stw 7, 184(1)
  0108f34  lbz 7, 433(31)
  0108f38  stw 8, 188(1)
  0108f3c  lwz 8, 264(31)
  0108f40  stw 7, 192(1)
  0108f44  std 29, 248(1)
  0108f48  std 28, 240(1)
  0108f4c  std 27, 232(1)
  0108f50  stw 8, 196(1)
  0108f54  bl 0xf1238
  0108f58  nop
  0108f5c  li 27, 0
  0108f60  ori 28, 31, 0
  0108f64  ori 29, 27, 0
  0108f68  ori 3, 30, 0
  0108f6c  lbz 4, 272(28)
  0108f70  addic 5, 1, 112
  0108f74  bl 0xf1038
  0108f78  nop
  0108f7c  lwz 3, 128(1)
  0108f80  lis 5, 17
  0108f84  lwz 4, 132(1)
  0108f88  lfs 1, 128(1)
  0108f8c  lfs 2, 132(1)
  0108f90  addi 5, 5, -28948
  0108f94  fabs 5, 1
  0108f98  fabs 2, 2
  0108f9c  lfs 1, 0(5)
  0108fa0  rlwinm 5, 4, 3, 29, 29
  0108fa4  lis 4, 115
  0108fa8  stw 29, 276(28)
  0108fac  addic 6, 4, 22784
  0108fb0  fsubs 3, 5, 2
  0108fb4  stfs 3, 176(1)
  0108fb8  lbz 4, 353(28)
  0108fbc  lwz 7, 176(1)
  0108fc0  lfs 3, 176(1)
  0108fc4  rlwimi 5, 7, 2, 30, 30
  0108fc8  fsub 4, 3, 1
  0108fcc  fsub 6, 3, 1
  0108fd0  rlwimi 5, 3, 4, 28, 28
  0108fd4  ori 3, 6, 0
  0108fd8  rlwimi 3, 5, 2, 26, 28
  0108fdc  slwi 5, 5, 2
  0108fe0  clrldi 3, 3, 32
  0108fe4  fsel 4, 4, 5, 2
  0108fe8  lfsx 3, 6, 5
  0108fec  fsel 5, 6, 2, 5
  0108ff0  lfs 2, 4(3)
  0108ff4  fcmpu 0, 4, 1
  0108ff8  bt 1, 0x109000
  0108ffc  b 0x109124
  0109000  fsubs 6, 5, 4
  0109004  fadds 4, 5, 4
  0109008  addic 7, 1, 16
  010900c  li 3, 2
  0109010  addic 5, 7, 200
  0109014  addic 6, 7, 184
  0109018  mtctr 3
  010901c  fdivs 4, 6, 4
  0109020  fmuls 6, 4, 4
  0109024  stfs 4, 212(1)
  0109028  stfs 4, 204(1)
  010902c  stfs 4, 208(1)
  0109030  stfs 4, 200(1)
  0109034  lfs 7, 212(1)
  0109038  lfs 8, 204(1)
  010903c  lfs 9, 208(1)
  0109040  fmuls 4, 6, 6
  0109044  fmuls 8, 8, 6
  0109048  fmuls 7, 7, 4
  010904c  fmuls 5, 4, 4
  0109050  fmuls 4, 9, 4
  0109054  stfs 8, 204(1)
  0109058  fmuls 6, 7, 6
  010905c  stfs 4, 208(1)
  0109060  stfs 6, 212(1)
  0109064  lfs 4, 184(7)
  0109068  fmuls 4, 4, 5
  010906c  stfs 4, 200(7)
  0109070  lfs 4, 4(6)
  0109074  addic 6, 6, 8
  0109078  fmuls 4, 4, 5
  010907c  addic 7, 7, 8
  0109080  stfs 4, 4(5)
  0109084  addic 5, 5, 8
  0109088  bdnz 0x109064
  010908c  ori 8, 1, 0
  0109090  li 5, 4
  0109094  lis 7, 115
  0109098  addic 6, 8, 200
  010909c  mtctr 5
  01090a0  addic 7, 7, 22752
  01090a4  ori 5, 6, 0
  01090a8  lfs 4, 200(8)
  01090ac  lfs 5, 0(7)
  01090b0  fmuls 4, 4, 5
  01090b4  lfs 5, 4(7)
  01090b8  addic 7, 7, 8
  01090bc  stfs 4, 200(8)
  01090c0  lfs 4, 4(6)
  01090c4  addic 8, 8, 8
  01090c8  fmuls 4, 4, 5
  01090cc  stfs 4, 4(6)
  01090d0  addic 6, 6, 8
  01090d4  bdnz 0x1090a8
  01090d8  ori 6, 3, 0
  01090dc  ori 3, 1, 0
  01090e0  mtctr 6
  01090e4  lfs 4, 200(3)
  01090e8  fadds 1, 1, 4
  01090ec  lfs 4, 4(5)
  01090f0  addic 3, 3, 16
  01090f4  lfs 5, 8(5)
  01090f8  lfs 6, 12(5)
  01090fc  addic 5, 5, 16
  0109100  fadds 1, 1, 4
  0109104  fadds 1, 1, 5
  0109108  fadds 1, 1, 6
  010910c  bdnz 0x1090e4
  0109110  lis 3, 17
  0109114  addi 3, 3, -28948
  0109118  lfs 4, 4(3)
  010911c  fadds 1, 1, 4
  0109120  fmadds 1, 1, 3, 2
  0109124  cmpwi 4, 0
  0109128  stfs 1, 280(28)
  010912c  bf 2, 0x109144
  0109130  addic 5, 28, 352
  0109134  ori 3, 30, 0
  0109138  lbz 4, 275(28)
  010913c  bl 0xf0ea8
  0109140  nop
  0109144  lbz 3, 289(28)
  0109148  cmpwi 3, 0
  010914c  bf 2, 0x109164
  0109150  addic 5, 28, 288
  0109154  ori 3, 30, 0
  0109158  lbz 4, 274(28)
  010915c  bl 0xf0ea8
  0109160  nop
  0109164  addic 27, 27, 1
  0109168  addic 28, 28, 160
  010916c  cmpwi 27, 2
  0109170  bt 0, 0x108f68
  0109174  li 3, 5
  0109178  sth 3, 80(31)
  010917c  sth 29, 82(31)
  0109180  stw 29, 84(31)
  0109184  stw 29, 88(31)
  0109188  ld 0, 288(1)
  010918c  mtlr 0
  0109190  ld 27, 232(1)
  0109194  ld 28, 240(1)
  0109198  ld 29, 248(1)
  010919c  ld 30, 256(1)
  01091a0  ld 31, 264(1)
  01091a4  addi 1, 1, 272
  01091a8  blr

MB_SetAnimAndReset2Leg:   # 0x1091b0, 0xd0 bytes
  01091b0  stdu 1, -176(1)
  01091b4  mflr 0
  01091b8  std 0, 192(1)
  01091bc  stfd 31, 168(1)
  01091c0  std 29, 144(1)
  01091c4  std 28, 136(1)
  01091c8  lis 9, 17
  01091cc  ori 29, 3, 0
  01091d0  std 31, 160(1)
  01091d4  addi 28, 9, -28244
  01091d8  std 30, 152(1)
  01091dc  ori 31, 8, 0
  01091e0  std 27, 128(1)
  01091e4  std 26, 120(1)
  01091e8  ori 30, 7, 0
  01091ec  bl 0xfddc0
  01091f0  li 26, 0
  01091f4  lfs 31, 0(28)
  01091f8  ori 27, 30, 0
  01091fc  ori 28, 26, 0
  0109200  lwz 3, 416(27)
  0109204  cmpwi 3, 0
  0109208  bt 2, 0x109210
  010920c  stw 28, 8(3)
  0109210  lbz 3, 353(27)
  0109214  cmpwi 3, 0
  0109218  bt 2, 0x109230
  010921c  addic 3, 27, 368
  0109220  fmr 1, 31
  0109224  li 4, 2
  0109228  bl 0x501980
  010922c  nop
  0109230  addic 26, 26, 1
  0109234  stw 28, 276(27)
  0109238  addic 27, 27, 160
  010923c  cmpwi 26, 2
  0109240  bt 0, 0x109200
  0109244  lis 3, 16256
  0109248  sth 31, 82(30)
  010924c  stw 3, 88(29)
  0109250  stw 28, 256(30)
  0109254  ld 0, 192(1)
  0109258  mtlr 0
  010925c  lfd 31, 168(1)
  0109260  ld 26, 120(1)
  0109264  ld 27, 128(1)
  0109268  ld 28, 136(1)
  010926c  ld 29, 144(1)
  0109270  ld 30, 152(1)
  0109274  ld 31, 160(1)
  0109278  addi 1, 1, 176
  010927c  blr

MB_initJump:   # 0x109298, 0x2f0 bytes
  0109298  stdu 1, -176(1)
  010929c  mflr 0
  01092a0  std 0, 192(1)
  01092a4  stfd 31, 168(1)
  01092a8  std 31, 160(1)
  01092ac  lis 6, 17
  01092b0  ori 31, 4, 0
  01092b4  addi 6, 6, -28032
  01092b8  li 4, 0
  01092bc  lfs 4, 0(6)
  01092c0  stw 4, 48(31)
  01092c4  lfs 7, 0(5)
  01092c8  stfs 7, 0(31)
  01092cc  lfs 6, 4(5)
  01092d0  stfs 6, 4(31)
  01092d4  lfs 5, 8(5)
  01092d8  stfs 5, 8(31)
  01092dc  lfs 1, 12(5)
  01092e0  stfs 1, 12(31)
  01092e4  lfs 8, 20(3)
  01092e8  lfs 9, 16(3)
  01092ec  fsubs 1, 8, 6
  01092f0  lfs 12, 4(6)
  01092f4  fsubs 11, 9, 7
  01092f8  lfs 2, 24(3)
  01092fc  lfs 3, 28(31)
  0109300  fsubs 13, 5, 2
  0109304  lfs 0, 8(6)
  0109308  fmuls 12, 3, 12
  010930c  lfs 10, 32(31)
  0109310  fmuls 1, 1, 1
  0109314  fabs 13, 13
  0109318  fmadds 1, 11, 11, 1
  010931c  fmuls 11, 12, 10
  0109320  fadds 12, 13, 0
  0109324  fsqrts 1, 1
  0109328  fdivs 11, 11, 12
  010932c  lfs 12, 12(6)
  0109330  lbz 4, 44(31)
  0109334  fmadds 1, 1, 1, 12
  0109338  fmuls 1, 11, 1
  010933c  fcmpu 0, 1, 10
  0109340  stfs 1, 20(31)
  0109344  cror 6, 0, 2
  0109348  bt 6, 0x109354
  010934c  fmr 1, 10
  0109350  stfs 10, 20(31)
  0109354  fsubs 9, 7, 9
  0109358  fsubs 8, 6, 8
  010935c  lis 5, 115
  0109360  addic 5, 5, 22784
  0109364  fabs 11, 9
  0109368  fabs 10, 8
  010936c  stfs 9, 112(1)
  0109370  stfs 8, 116(1)
  0109374  fsubs 6, 11, 10
  0109378  stfs 6, 120(1)
  010937c  lwz 6, 112(1)
  0109380  lfs 6, 112(1)
  0109384  lwz 7, 116(1)
  0109388  lfs 7, 116(1)
  010938c  fabs 6, 6
  0109390  lwz 8, 120(1)
  0109394  rlwinm 7, 7, 3, 29, 29
  0109398  fabs 12, 7
  010939c  lfs 7, 120(1)
  01093a0  rlwimi 7, 8, 2, 30, 30
  01093a4  fsub 13, 7, 4
  01093a8  fsub 0, 7, 4
  01093ac  rlwimi 7, 6, 4, 28, 28
  01093b0  ori 6, 5, 0
  01093b4  rlwimi 6, 7, 2, 26, 28
  01093b8  slwi 7, 7, 2
  01093bc  clrldi 6, 6, 32
  01093c0  fsel 10, 13, 6, 10
  01093c4  lfsx 7, 5, 7
  01093c8  fsel 11, 0, 12, 11
  01093cc  lfs 6, 4(6)
  01093d0  fcmpu 0, 10, 4
  01093d4  bt 1, 0x1093e0
  01093d8  fmr 7, 4
  01093dc  b 0x109508
  01093e0  fsubs 12, 11, 10
  01093e4  fadds 10, 11, 10
  01093e8  addic 8, 1, 16
  01093ec  li 5, 2
  01093f0  addic 7, 8, 108
  01093f4  addic 6, 8, 124
  01093f8  mtctr 5
  01093fc  fdivs 10, 12, 10
  0109400  fmuls 12, 10, 10
  0109404  stfs 10, 136(1)
  0109408  stfs 10, 128(1)
  010940c  stfs 10, 132(1)
  0109410  stfs 10, 124(1)
  0109414  lfs 13, 136(1)
  0109418  lfs 0, 128(1)
  010941c  lfs 31, 132(1)
  0109420  fmuls 10, 12, 12
  0109424  fmuls 0, 0, 12
  0109428  fmuls 13, 13, 10
  010942c  fmuls 11, 10, 10
  0109430  fmuls 10, 31, 10
  0109434  stfs 0, 128(1)
  0109438  fmuls 12, 13, 12
  010943c  stfs 10, 132(1)
  0109440  stfs 12, 136(1)
  0109444  lfs 10, 108(8)
  0109448  fmuls 10, 10, 11
  010944c  stfs 10, 124(8)
  0109450  lfs 10, 4(7)
  0109454  addic 8, 8, 8
  0109458  addic 7, 7, 8
  010945c  fmuls 10, 10, 11
  0109460  stfs 10, 4(6)
  0109464  addic 6, 6, 8
  0109468  bdnz 0x109444
  010946c  ori 9, 1, 0
  0109470  lis 8, 115
  0109474  li 10, 4
  0109478  addic 7, 9, 124
  010947c  addic 8, 8, 22752
  0109480  ori 6, 7, 0
  0109484  mtctr 10
  0109488  lfs 10, 124(9)
  010948c  lfs 11, 0(8)
  0109490  fmuls 10, 10, 11
  0109494  lfs 11, 4(8)
  0109498  addic 8, 8, 8
  010949c  stfs 10, 124(9)
  01094a0  lfs 10, 4(7)
  01094a4  addic 9, 9, 8
  01094a8  fmuls 10, 10, 11
  01094ac  stfs 10, 4(7)
  01094b0  addic 7, 7, 8
  01094b4  bdnz 0x109488
  01094b8  ori 7, 5, 0
  01094bc  fmr 10, 4
  01094c0  ori 5, 1, 0
  01094c4  mtctr 7
  01094c8  lfs 11, 124(5)
  01094cc  fadds 10, 10, 11
  01094d0  lfs 11, 4(6)
  01094d4  addic 5, 5, 16
  01094d8  lfs 12, 8(6)
  01094dc  lfs 13, 12(6)
  01094e0  addic 6, 6, 16
  01094e4  fadds 10, 10, 11
  01094e8  fadds 10, 10, 12
  01094ec  fadds 10, 10, 13
  01094f0  bdnz 0x1094c8
  01094f4  lis 5, 17
  01094f8  addi 5, 5, -28032
  01094fc  lfs 11, 16(5)
  0109500  fadds 10, 10, 11
  0109504  fmadds 7, 10, 7, 6
  0109508  fmuls 6, 8, 8
  010950c  lis 5, 17
  0109510  fsubs 2, 2, 5
  0109514  stfs 7, 24(31)
  0109518  addi 5, 5, -28032
  010951c  fmadds 6, 9, 9, 6
  0109520  lfs 7, 20(5)
  0109524  fsqrts 6, 6
  0109528  li 5, 0
  010952c  li 6, 10
  0109530  fdivs 1, 6, 1
  0109534  fmuls 5, 1, 1
  0109538  fmuls 3, 3, 5
  010953c  fmuls 3, 3, 7
  0109540  fneg 3, 3
  0109544  fadds 2, 2, 3
  0109548  fsub 3, 4, 1
  010954c  fneg 2, 2
  0109550  fdivs 2, 2, 1
  0109554  fsub 1, 1, 4
  0109558  fsel 3, 3, 4, 2
  010955c  fsel 1, 1, 3, 2
  0109560  stfs 1, 16(31)
  0109564  bl 0xfddc0
  0109568  li 3, 0
  010956c  stb 3, 47(31)
  0109570  ld 0, 192(1)
  0109574  mtlr 0
  0109578  lfd 31, 168(1)
  010957c  ld 31, 160(1)
  0109580  addi 1, 1, 176
  0109584  blr

MB_updateJump:   # 0x1095b8, 0x3e0 bytes
  01095b8  stdu 1, -192(1)
  01095bc  mflr 0
  01095c0  std 0, 208(1)
  01095c4  stfd 29, 168(1)
  01095c8  stfd 30, 176(1)
  01095cc  stfd 31, 184(1)
  01095d0  std 30, 152(1)
  01095d4  ori 30, 3, 0
  01095d8  std 31, 160(1)
  01095dc  lbz 3, 47(4)
  01095e0  ori 31, 4, 0
  01095e4  cmpwi 3, 1
  01095e8  cmpwi 1, 3, 3
  01095ec  cmpwi 6, 3, 2
  01095f0  std 29, 144(1)
  01095f4  cmpwi 7, 3, 0
  01095f8  bt 1, 0x10960c
  01095fc  cmpwi 3, -1
  0109600  bf 1, 0x10996c
  0109604  bf 29, 0x109618
  0109608  b 0x109670
  010960c  bf 25, 0x1097e4
  0109610  bf 5, 0x109954
  0109614  b 0x10996c
  0109618  lbz 3, 82(30)
  010961c  lbz 4, 44(31)
  0109620  cmpw 3, 4
  0109624  bf 2, 0x10996c
  0109628  ori 3, 30, 0
  010962c  bl 0xefe40
  0109630  nop
  0109634  lfs 2, 36(31)
  0109638  fcmpu 0, 1, 2
  010963c  cror 6, 0, 2
  0109640  bt 6, 0x10996c
  0109644  lbz 3, 112(30)
  0109648  rlwinm 3, 3, 0, 30, 30
  010964c  cmpwi 3, 0
  0109650  bt 2, 0x109670
  0109654  ori 3, 30, 0
  0109658  li 5, 0
  010965c  lbz 4, 45(31)
  0109660  li 6, 10
  0109664  bl 0xfddc0
  0109668  li 3, 1
  010966c  stb 3, 47(31)
  0109670  lfs 1, 24(31)
  0109674  lfs 2, 52(31)
  0109678  ori 3, 30, 0
  010967c  lfs 3, 56(31)
  0109680  addic 5, 31, 48
  0109684  lfs 4, 60(31)
  0109688  bl 0xff2e8
  010968c  lis 3, 17
  0109690  lfs 1, 24(31)
  0109694  addi 4, 3, -27256
  0109698  lfs 2, 0(4)
  010969c  lfs 3, 4(4)
  01096a0  fadds 2, 1, 2
  01096a4  lfs 4, 8(4)
  01096a8  fsubs 5, 3, 1
  01096ac  fsubs 3, 3, 2
  01096b0  fsub 7, 1, 5
  01096b4  fsubs 6, 4, 2
  01096b8  fsubs 4, 4, 1
  01096bc  fsub 8, 2, 3
  01096c0  fsel 1, 7, 5, 1
  01096c4  fsel 2, 8, 3, 2
  01096c8  fsub 5, 4, 1
  01096cc  lfs 3, 12(4)
  01096d0  fsub 7, 6, 2
  01096d4  fsel 1, 5, 4, 1
  01096d8  lfs 4, 16(4)
  01096dc  lfs 5, 20(4)
  01096e0  lfs 9, 20(31)
  01096e4  lfs 11, 24(4)
  01096e8  fsel 2, 7, 6, 2
  01096ec  fmuls 6, 1, 1
  01096f0  fmuls 7, 2, 2
  01096f4  fmuls 8, 6, 1
  01096f8  fmuls 10, 7, 2
  01096fc  fmuls 12, 6, 8
  0109700  fmadds 1, 8, 3, 1
  0109704  lfs 8, 16(31)
  0109708  lfs 13, 16(30)
  010970c  fmuls 0, 7, 10
  0109710  fmadds 2, 10, 3, 2
  0109714  fmuls 31, 6, 12
  0109718  fmadds 12, 12, 4, 1
  010971c  lfs 10, 20(30)
  0109720  lfs 30, 24(30)
  0109724  lfs 3, 28(31)
  0109728  fmuls 29, 7, 0
  010972c  fmadds 4, 0, 4, 2
  0109730  fmuls 6, 6, 31
  0109734  lfs 2, 40(31)
  0109738  fmadds 12, 31, 5, 12
  010973c  lfs 1, 8(31)
  0109740  lbz 3, 46(31)
  0109744  fmuls 7, 7, 29
  0109748  fmadds 0, 29, 5, 4
  010974c  fadds 5, 30, 8
  0109750  fmadds 6, 6, 11, 12
  0109754  fsubs 4, 8, 3
  0109758  fmadds 7, 7, 11, 0
  010975c  fmadds 6, 6, 9, 10
  0109760  stfs 5, 24(30)
  0109764  fmadds 7, 7, 9, 13
  0109768  stfs 6, 20(30)
  010976c  stfs 7, 16(30)
  0109770  stfs 4, 16(31)
  0109774  lfs 6, 28(4)
  0109778  fcmpu 0, 4, 6
  010977c  cror 6, 1, 2
  0109780  bt 6, 0x10996c
  0109784  lis 4, 17
  0109788  lis 5, 114
  010978c  addi 4, 4, -27256
  0109790  lfs 6, 32(4)
  0109794  lfs 7, 36(4)
  0109798  lfs 8, 40(4)
  010979c  fmadds 2, 2, 6, 7
  01097a0  lfs 9, -3056(5)
  01097a4  fmuls 3, 3, 8
  01097a8  fmuls 2, 9, 2
  01097ac  fmuls 3, 3, 2
  01097b0  fmuls 3, 3, 2
  01097b4  fmsubs 2, 4, 2, 3
  01097b8  fsubs 1, 1, 2
  01097bc  fcmpu 0, 1, 5
  01097c0  bt 0, 0x10996c
  01097c4  ori 4, 3, 0
  01097c8  ori 3, 30, 0
  01097cc  li 5, 0
  01097d0  li 6, 10
  01097d4  bl 0xfddc0
  01097d8  li 3, 2
  01097dc  stb 3, 47(31)
  01097e0  b 0x10996c
  01097e4  lfs 1, 24(30)
  01097e8  lis 3, 15395
  01097ec  lfs 2, 16(31)
  01097f0  lis 4, 17
  01097f4  ori 3, 3, 55050
  01097f8  fadds 1, 1, 2
  01097fc  addi 29, 4, -27256
  0109800  stw 3, 120(1)
  0109804  addic 3, 1, 128
  0109808  addic 4, 1, 112
  010980c  li 5, 2
  0109810  li 6, 0
  0109814  li 7, 0
  0109818  stfs 1, 24(30)
  010981c  lfs 3, 28(31)
  0109820  fsubs 2, 2, 3
  0109824  stfs 2, 16(31)
  0109828  lfs 2, 16(30)
  010982c  lfs 3, 20(30)
  0109830  stfs 2, 112(1)
  0109834  lfs 4, 28(30)
  0109838  stfs 3, 116(1)
  010983c  stfs 4, 124(1)
  0109840  stfs 2, 128(1)
  0109844  stfs 3, 132(1)
  0109848  stfs 4, 140(1)
  010984c  lfs 2, 40(29)
  0109850  fadds 1, 1, 2
  0109854  stfs 1, 136(1)
  0109858  bl 0x57820
  010985c  nop
  0109860  lfs 5, 24(30)
  0109864  lfs 4, 24(31)
  0109868  cmpwi 3, 0
  010986c  lfs 3, 20(31)
  0109870  lfs 6, 28(29)
  0109874  lfs 2, 16(30)
  0109878  lfs 1, 20(30)
  010987c  bt 2, 0x10988c
  0109880  lis 3, 161
  0109884  addic 3, 3, 2368
  0109888  lfs 6, 40(3)
  010988c  fcmpu 0, 6, 5
  0109890  bt 0, 0x1098a4
  0109894  li 3, 3
  0109898  stfs 6, 24(30)
  010989c  stb 3, 47(31)
  01098a0  b 0x109954
  01098a4  lis 3, 17
  01098a8  addi 3, 3, -27256
  01098ac  lfs 5, 0(3)
  01098b0  lfs 6, 4(3)
  01098b4  fadds 5, 4, 5
  01098b8  lfs 7, 8(3)
  01098bc  fsubs 8, 6, 4
  01098c0  fsubs 6, 6, 5
  01098c4  fsub 10, 4, 8
  01098c8  fsubs 9, 7, 5
  01098cc  fsubs 7, 7, 4
  01098d0  fsub 11, 5, 6
  01098d4  fsel 4, 10, 8, 4
  01098d8  fsel 5, 11, 6, 5
  01098dc  fsub 8, 7, 4
  01098e0  lfs 6, 12(3)
  01098e4  fsub 10, 9, 5
  01098e8  fsel 4, 8, 7, 4
  01098ec  lfs 7, 16(3)
  01098f0  lfs 8, 20(3)
  01098f4  lfs 12, 24(3)
  01098f8  fsel 5, 10, 9, 5
  01098fc  fmuls 9, 4, 4
  0109900  fmuls 10, 5, 5
  0109904  fmuls 11, 9, 4
  0109908  fmuls 13, 10, 5
  010990c  fmuls 0, 9, 11
  0109910  fmadds 4, 11, 6, 4
  0109914  fmuls 11, 10, 13
  0109918  fmadds 5, 13, 6, 5
  010991c  fmuls 6, 9, 0
  0109920  fmadds 4, 0, 7, 4
  0109924  fmuls 13, 10, 11
  0109928  fmadds 5, 11, 7, 5
  010992c  fmuls 7, 9, 6
  0109930  fmadds 4, 6, 8, 4
  0109934  fmuls 6, 10, 13
  0109938  fmadds 5, 13, 8, 5
  010993c  fmadds 4, 7, 12, 4
  0109940  fmadds 5, 6, 12, 5
  0109944  fmadds 1, 4, 3, 1
  0109948  fmadds 2, 5, 3, 2
  010994c  stfs 1, 20(30)
  0109950  stfs 2, 16(30)
  0109954  lbz 3, 112(30)
  0109958  rlwinm 3, 3, 0, 30, 30
  010995c  cmpwi 3, 0
  0109960  bt 2, 0x10996c
  0109964  li 3, 4
  0109968  stb 3, 47(31)
  010996c  lbz 3, 47(31)
  0109970  ld 0, 208(1)
  0109974  mtlr 0
  0109978  lfd 29, 168(1)
  010997c  lfd 30, 176(1)
  0109980  lfd 31, 184(1)
  0109984  ld 29, 144(1)
  0109988  ld 30, 152(1)
  010998c  ld 31, 160(1)
  0109990  addi 1, 1, 192
  0109994  blr

Lerp_int:   # 0x109998, 0x54 bytes
  0109998  stdu 1, -144(1)
  010999c  mflr 0
  01099a0  std 0, 160(1)
  01099a4  std 31, 136(1)
  01099a8  ori 31, 3, 0
  01099ac  subc 3, 4, 31
  01099b0  extsw 3, 3
  01099b4  std 3, 112(1)
  01099b8  lfd 2, 112(1)
  01099bc  fcfid 2, 2
  01099c0  frsp 2, 2
  01099c4  fmuls 1, 2, 1
  01099c8  bl 0x502758
  01099cc  nop
  01099d0  addc 3, 31, 3
  01099d4  extsw 3, 3
  01099d8  ld 0, 160(1)
  01099dc  mtlr 0
  01099e0  ld 31, 136(1)
  01099e4  addi 1, 1, 144
  01099e8  blr

Lerp:   # 0x1099ec, 0xc bytes
  01099ec  fsubs 2, 2, 1
  01099f0  fmadds 1, 2, 3, 1
  01099f4  blr

Lerp_vec4:   # 0x1099f8, 0x6c bytes
  01099f8  li 4, 0
  01099fc  addc 4, 1, 4
  0109a00  std 5, 64(4)
  0109a04  std 6, 72(4)
  0109a08  std 7, 80(4)
  0109a0c  std 8, 88(4)
  0109a10  lfs 2, 68(4)
  0109a14  lfs 3, 84(4)
  0109a18  lfs 4, 76(4)
  0109a1c  fsubs 3, 3, 2
  0109a20  lfs 5, 92(4)
  0109a24  fsubs 5, 5, 4
  0109a28  fmadds 2, 3, 1, 2
  0109a2c  lfs 3, 64(4)
  0109a30  lfs 6, 72(4)
  0109a34  lfs 7, 80(4)
  0109a38  fmadds 4, 5, 1, 4
  0109a3c  lfs 8, 88(4)
  0109a40  fsubs 7, 7, 3
  0109a44  fsubs 8, 8, 6
  0109a48  stfs 2, 4(3)
  0109a4c  fmadds 2, 7, 1, 3
  0109a50  stfs 4, 12(3)
  0109a54  fmadds 1, 8, 1, 6
  0109a58  stfs 2, 0(3)
  0109a5c  stfs 1, 8(3)
  0109a60  blr

GainDampLimit:   # 0x109a68, 0x88 bytes
  0109a68  lfs 5, 0(3)
  0109a6c  lis 4, 17
  0109a70  fmuls 3, 3, 5
  0109a74  addi 4, 4, -26012
  0109a78  fmsubs 2, 1, 2, 3
  0109a7c  fadds 2, 5, 2
  0109a80  fcmpu 1, 2, 4
  0109a84  stfs 2, 0(3)
  0109a88  lfs 3, 0(4)
  0109a8c  fcmpu 0, 4, 3
  0109a90  cror 2, 0, 2
  0109a94  bt 2, 0x109ac0
  0109a98  bf 5, 0x109aa8
  0109a9c  fmr 2, 4
  0109aa0  stfs 4, 0(3)
  0109aa4  b 0x109ac0
  0109aa8  fneg 3, 4
  0109aac  fcmpu 0, 2, 3
  0109ab0  cror 6, 1, 2
  0109ab4  bt 6, 0x109ac0
  0109ab8  fmr 2, 3
  0109abc  stfs 3, 0(3)
  0109ac0  fabs 1, 1
  0109ac4  fcmpu 0, 2, 1
  0109ac8  cror 6, 0, 2
  0109acc  bt 6, 0x109ad8
  0109ad0  stfs 1, 0(3)
  0109ad4  b 0x109aec
  0109ad8  fneg 1, 1
  0109adc  fcmpu 0, 2, 1
  0109ae0  cror 6, 1, 2
  0109ae4  bt 6, 0x109aec
  0109ae8  stfs 1, 0(3)
  0109aec  blr

Delt:   # 0x109af0, 0x44 bytes
  0109af0  lfs 3, 0(3)
  0109af4  fsubs 4, 1, 3
  0109af8  fcmpu 0, 4, 2
  0109afc  cror 6, 0, 2
  0109b00  bt 6, 0x109b0c
  0109b04  fmr 4, 2
  0109b08  b 0x109b20
  0109b0c  fneg 2, 2
  0109b10  fcmpu 0, 4, 2
  0109b14  cror 6, 1, 2
  0109b18  bt 6, 0x109b20
  0109b1c  fmr 4, 2
  0109b20  fadds 2, 3, 4
  0109b24  fsubs 1, 1, 2
  0109b28  stfs 2, 0(3)
  0109b2c  fabs 1, 1
  0109b30  blr

AccelDelt:   # 0x109b40, 0xe0 bytes
  0109b40  lfs 5, 0(3)
  0109b44  lis 4, 17
  0109b48  lfs 6, 0(5)
  0109b4c  fsubs 5, 1, 5
  0109b50  fmuls 3, 3, 6
  0109b54  addi 4, 4, -25804
  0109b58  fmsubs 3, 5, 2, 3
  0109b5c  fadds 3, 6, 3
  0109b60  fcmpu 1, 3, 4
  0109b64  stfs 3, 0(5)
  0109b68  lfs 2, 0(4)
  0109b6c  fcmpu 0, 4, 2
  0109b70  cror 2, 0, 2
  0109b74  bt 2, 0x109ba0
  0109b78  bf 5, 0x109b88
  0109b7c  fmr 3, 4
  0109b80  stfs 4, 0(5)
  0109b84  b 0x109ba0
  0109b88  fneg 6, 4
  0109b8c  fcmpu 0, 3, 6
  0109b90  cror 6, 1, 2
  0109b94  bt 6, 0x109ba0
  0109b98  fmr 3, 6
  0109b9c  stfs 6, 0(5)
  0109ba0  fabs 5, 5
  0109ba4  fcmpu 0, 3, 5
  0109ba8  cror 6, 0, 2
  0109bac  bt 6, 0x109bbc
  0109bb0  fmr 3, 5
  0109bb4  stfs 5, 0(5)
  0109bb8  b 0x109bd4
  0109bbc  fneg 5, 5
  0109bc0  fcmpu 0, 3, 5
  0109bc4  cror 6, 1, 2
  0109bc8  bt 6, 0x109bd4
  0109bcc  fmr 3, 5
  0109bd0  stfs 5, 0(5)
  0109bd4  lfs 5, 0(3)
  0109bd8  lis 4, 17
  0109bdc  fadds 5, 5, 3
  0109be0  addi 4, 4, -25804
  0109be4  fsubs 3, 1, 5
  0109be8  stfs 5, 0(3)
  0109bec  lfs 5, 4(4)
  0109bf0  fmuls 4, 4, 5
  0109bf4  fabs 6, 3
  0109bf8  fcmpu 0, 6, 4
  0109bfc  cror 6, 1, 2
  0109c00  bt 6, 0x109c18
  0109c04  li 4, 0
  0109c08  stfs 1, 0(3)
  0109c0c  fmr 1, 2
  0109c10  stw 4, 0(5)
  0109c14  b 0x109c1c
  0109c18  fmr 1, 3
  0109c1c  blr

OrganicDelt:   # 0x109c30, 0x1dc bytes
  0109c30  lfs 7, 0(3)
  0109c34  lis 4, 17
  0109c38  lfs 5, 0(5)
  0109c3c  fsubs 7, 1, 7
  0109c40  addi 4, 4, -25568
  0109c44  lfs 6, 0(4)
  0109c48  fmuls 8, 5, 7
  0109c4c  fcmpu 1, 7, 6
  0109c50  fcmpu 0, 8, 6
  0109c54  cror 2, 0, 6
  0109c58  bt 2, 0x109dc4
  0109c5c  fmuls 6, 5, 5
  0109c60  lfs 9, 4(4)
  0109c64  fdivs 8, 6, 3
  0109c68  fabs 6, 7
  0109c6c  fmuls 8, 8, 9
  0109c70  fcmpu 0, 8, 6
  0109c74  cror 2, 0, 2
  0109c78  bt 2, 0x109d08
  0109c7c  fabs 2, 5
  0109c80  fadds 2, 6, 2
  0109c84  fcmpu 0, 8, 2
  0109c88  cror 6, 1, 2
  0109c8c  bt 6, 0x109cc8
  0109c90  fneg 2, 5
  0109c94  fcmpu 0, 3, 2
  0109c98  cror 6, 1, 2
  0109c9c  bt 6, 0x109ca8
  0109ca0  fmr 2, 3
  0109ca4  b 0x109cbc
  0109ca8  fneg 3, 3
  0109cac  fcmpu 0, 2, 3
  0109cb0  cror 6, 1, 2
  0109cb4  bt 6, 0x109cbc
  0109cb8  fmr 2, 3
  0109cbc  fadds 5, 5, 2
  0109cc0  stfs 5, 0(5)
  0109cc4  b 0x109d94
  0109cc8  lfs 4, 8(4)
  0109ccc  fneg 2, 5
  0109cd0  fmuls 3, 3, 4
  0109cd4  fcmpu 0, 2, 3
  0109cd8  cror 6, 0, 2
  0109cdc  bt 6, 0x109ce8
  0109ce0  fmr 2, 3
  0109ce4  b 0x109cfc
  0109ce8  fneg 3, 3
  0109cec  fcmpu 0, 2, 3
  0109cf0  cror 6, 1, 2
  0109cf4  bt 6, 0x109cfc
  0109cf8  fmr 2, 3
  0109cfc  fadds 5, 5, 2
  0109d00  stfs 5, 0(5)
  0109d04  b 0x109d94
  0109d08  lfs 8, 12(4)
  0109d0c  fmuls 3, 3, 8
  0109d10  fmuls 3, 3, 7
  0109d14  fsqrts 3, 3
  0109d18  fsub 8, 4, 3
  0109d1c  fsel 3, 8, 3, 4
  0109d20  bf 4, 0x109d60
  0109d24  fneg 3, 3
  0109d28  fsubs 3, 3, 5
  0109d2c  fcmpu 0, 2, 3
  0109d30  cror 6, 1, 2
  0109d34  bt 6, 0x109d40
  0109d38  fmr 3, 2
  0109d3c  b 0x109d54
  0109d40  fneg 2, 2
  0109d44  fcmpu 0, 3, 2
  0109d48  cror 6, 1, 2
  0109d4c  bt 6, 0x109d54
  0109d50  fmr 3, 2
  0109d54  fadds 5, 5, 3
  0109d58  stfs 5, 0(5)
  0109d5c  b 0x109d94
  0109d60  fsubs 3, 3, 5
  0109d64  fcmpu 0, 2, 3
  0109d68  cror 6, 1, 2
  0109d6c  bt 6, 0x109d78
  0109d70  fmr 3, 2
  0109d74  b 0x109d8c
  0109d78  fneg 2, 2
  0109d7c  fcmpu 0, 3, 2
  0109d80  cror 6, 1, 2
  0109d84  bt 6, 0x109d8c
  0109d88  fmr 3, 2
  0109d8c  fadds 5, 5, 3
  0109d90  stfs 5, 0(5)
  0109d94  fabs 2, 5
  0109d98  fcmpu 0, 6, 2
  0109d9c  cror 6, 0, 2
  0109da0  bt 6, 0x109db8
  0109da4  lfs 1, 0(3)
  0109da8  fadds 1, 1, 5
  0109dac  stfs 1, 0(3)
  0109db0  lfs 1, 0(5)
  0109db4  b 0x109e08
  0109db8  stfs 1, 0(3)
  0109dbc  fmr 1, 7
  0109dc0  b 0x109e08
  0109dc4  fneg 2, 5
  0109dc8  fcmpu 0, 3, 2
  0109dcc  cror 6, 1, 2
  0109dd0  bt 6, 0x109ddc
  0109dd4  fmr 2, 3
  0109dd8  b 0x109df0
  0109ddc  fneg 1, 3
  0109de0  fcmpu 0, 2, 1
  0109de4  cror 6, 1, 2
  0109de8  bt 6, 0x109df0
  0109dec  fmr 2, 1
  0109df0  fadds 1, 5, 2
  0109df4  stfs 1, 0(5)
  0109df8  lfs 2, 0(3)
  0109dfc  fadds 1, 2, 1
  0109e00  stfs 1, 0(3)
  0109e04  lfs 1, 0(5)
  0109e08  blr

SubRots:   # 0x109e18, 0x98 bytes
  0109e18  stdu 1, -144(1)
  0109e1c  mflr 0
  0109e20  std 0, 160(1)
  0109e24  std 31, 136(1)
  0109e28  ori 31, 5, 0
  0109e2c  bl 0x5025e0
  0109e30  nop
  0109e34  cmpwi 31, 0
  0109e38  bt 2, 0x109e6c
  0109e3c  extsw 3, 31
  0109e40  std 3, 112(1)
  0109e44  lis 3, 17
  0109e48  addi 3, 3, -25076
  0109e4c  lfs 2, 0(3)
  0109e50  lfd 3, 112(1)
  0109e54  fcfid 3, 3
  0109e58  frsp 3, 3
  0109e5c  fmuls 3, 1, 3
  0109e60  fcmpu 0, 3, 2
  0109e64  cror 6, 0, 2
  0109e68  bt 6, 0x109e70
  0109e6c  b 0x109e9c
  0109e70  lis 3, 17
  0109e74  fabs 3, 1
  0109e78  addi 3, 3, -25076
  0109e7c  fsub 4, 2, 1
  0109e80  lfs 5, 8(3)
  0109e84  lfs 6, 4(3)
  0109e88  fsubs 7, 1, 5
  0109e8c  fadds 1, 1, 5
  0109e90  fsub 3, 6, 3
  0109e94  fsel 1, 4, 1, 7
  0109e98  fsel 1, 3, 2, 1
  0109e9c  ld 0, 160(1)
  0109ea0  mtlr 0
  0109ea4  ld 31, 136(1)
  0109ea8  addi 1, 1, 144
  0109eac  blr

DeltAng:   # 0x109ec0, 0x17c bytes
  0109ec0  stdu 1, -160(1)
  0109ec4  mflr 0
  0109ec8  std 0, 176(1)
  0109ecc  stfd 30, 144(1)
  0109ed0  stfd 31, 152(1)
  0109ed4  std 30, 128(1)
  0109ed8  std 31, 136(1)
  0109edc  ori 30, 3, 0
  0109ee0  ori 31, 6, 0
  0109ee4  fmr 30, 2
  0109ee8  fmr 31, 1
  0109eec  lfs 2, 0(30)
  0109ef0  bl 0x5025e0
  0109ef4  nop
  0109ef8  cmpwi 31, 0
  0109efc  bt 2, 0x109f30
  0109f00  extsw 3, 31
  0109f04  std 3, 112(1)
  0109f08  lis 3, 17
  0109f0c  addi 3, 3, -24912
  0109f10  lfs 2, 0(3)
  0109f14  lfd 3, 112(1)
  0109f18  fcfid 3, 3
  0109f1c  frsp 3, 3
  0109f20  fmuls 3, 1, 3
  0109f24  fcmpu 0, 3, 2
  0109f28  cror 6, 0, 2
  0109f2c  bt 6, 0x109f34
  0109f30  b 0x109f60
  0109f34  lis 3, 17
  0109f38  fabs 3, 1
  0109f3c  addi 3, 3, -24912
  0109f40  fsub 4, 2, 1
  0109f44  lfs 5, 8(3)
  0109f48  lfs 6, 4(3)
  0109f4c  fsubs 7, 1, 5
  0109f50  fadds 1, 1, 5
  0109f54  fsub 3, 6, 3
  0109f58  fsel 1, 4, 1, 7
  0109f5c  fsel 1, 3, 2, 1
  0109f60  fcmpu 0, 1, 30
  0109f64  cror 6, 0, 2
  0109f68  bt 6, 0x109f74
  0109f6c  fmr 1, 30
  0109f70  b 0x109f88
  0109f74  fneg 2, 30
  0109f78  fcmpu 0, 1, 2
  0109f7c  cror 6, 1, 2
  0109f80  bt 6, 0x109f88
  0109f84  fmr 1, 2
  0109f88  fmr 2, 1
  0109f8c  lfs 1, 0(30)
  0109f90  bl 0x502578
  0109f94  nop
  0109f98  fmr 2, 1
  0109f9c  fmr 1, 31
  0109fa0  stfs 2, 0(30)
  0109fa4  bl 0x5025e0
  0109fa8  nop
  0109fac  cmpwi 31, 0
  0109fb0  fmr 31, 1
  0109fb4  bt 2, 0x109fe8
  0109fb8  extsw 3, 31
  0109fbc  std 3, 112(1)
  0109fc0  lis 3, 17
  0109fc4  addi 3, 3, -24912
  0109fc8  lfs 1, 0(3)
  0109fcc  lfd 2, 112(1)
  0109fd0  fcfid 2, 2
  0109fd4  frsp 2, 2
  0109fd8  fmuls 2, 31, 2
  0109fdc  fcmpu 0, 2, 1
  0109fe0  cror 6, 0, 2
  0109fe4  bt 6, 0x109ff0
  0109fe8  fmr 1, 31
  0109fec  b 0x10a01c
  0109ff0  lis 3, 17
  0109ff4  fabs 2, 31
  0109ff8  fsub 3, 1, 31
  0109ffc  addi 3, 3, -24912
  010a000  lfs 4, 8(3)
  010a004  lfs 5, 4(3)
  010a008  fsubs 6, 31, 4
  010a00c  fadds 4, 31, 4
  010a010  fsub 2, 5, 2
  010a014  fsel 3, 3, 4, 6
  010a018  fsel 1, 2, 1, 3
  010a01c  ld 0, 176(1)
  010a020  mtlr 0
  010a024  lfd 30, 144(1)
  010a028  lfd 31, 152(1)
  010a02c  ld 30, 128(1)
  010a030  ld 31, 136(1)
  010a034  addi 1, 1, 160
  010a038  blr

AccelDeltAng:   # 0x10a050, 0x280 bytes
  010a050  stdu 1, -192(1)
  010a054  mflr 0
  010a058  std 0, 208(1)
  010a05c  stfd 28, 160(1)
  010a060  stfd 29, 168(1)
  010a064  stfd 30, 176(1)
  010a068  stfd 31, 184(1)
  010a06c  std 29, 136(1)
  010a070  ori 29, 9, 0
  010a074  std 30, 144(1)
  010a078  fmr 30, 1
  010a07c  ori 30, 3, 0
  010a080  cmpwi 29, 2
  010a084  std 31, 152(1)
  010a088  fmr 28, 2
  010a08c  ori 31, 5, 0
  010a090  fmr 29, 3
  010a094  fmr 31, 4
  010a098  bf 2, 0x10a0dc
  010a09c  lis 3, 17
  010a0a0  li 29, 0
  010a0a4  addi 3, 3, -24516
  010a0a8  lfs 1, 0(3)
  010a0ac  fcmpu 1, 30, 1
  010a0b0  bf 5, 0x10a0c0
  010a0b4  lwz 3, 0(30)
  010a0b8  cmpwi 3, 0
  010a0bc  bt 0, 0x10a0d0
  010a0c0  bf 4, 0x10a0dc
  010a0c4  lwz 3, 0(30)
  010a0c8  cmpwi 3, 0
  010a0cc  bf 1, 0x10a0dc
  010a0d0  li 29, 1
  010a0d4  bf 4, 0x10a0dc
  010a0d8  li 29, -1
  010a0dc  fmr 1, 30
  010a0e0  lfs 2, 0(30)
  010a0e4  bl 0x5025e0
  010a0e8  nop
  010a0ec  cmpwi 29, 0
  010a0f0  fmr 2, 1
  010a0f4  bt 2, 0x10a128
  010a0f8  extsw 3, 29
  010a0fc  std 3, 112(1)
  010a100  lis 3, 17
  010a104  addi 3, 3, -24516
  010a108  lfs 1, 0(3)
  010a10c  lfd 3, 112(1)
  010a110  fcfid 3, 3
  010a114  frsp 3, 3
  010a118  fmuls 3, 2, 3
  010a11c  fcmpu 0, 3, 1
  010a120  cror 6, 0, 2
  010a124  bt 6, 0x10a130
  010a128  fmr 1, 2
  010a12c  b 0x10a15c
  010a130  lis 3, 17
  010a134  fabs 3, 2
  010a138  addi 3, 3, -24516
  010a13c  fsub 4, 1, 2
  010a140  lfs 5, 8(3)
  010a144  lfs 6, 4(3)
  010a148  fsubs 7, 2, 5
  010a14c  fadds 2, 2, 5
  010a150  fsub 3, 6, 3
  010a154  fsel 2, 4, 2, 7
  010a158  fsel 1, 3, 1, 2
  010a15c  lfs 2, 0(31)
  010a160  lis 3, 17
  010a164  fmuls 3, 29, 2
  010a168  addi 3, 3, -24516
  010a16c  fmsubs 28, 1, 28, 3
  010a170  fadds 28, 2, 28
  010a174  fcmpu 1, 28, 31
  010a178  stfs 28, 0(31)
  010a17c  lfs 29, 0(3)
  010a180  fcmpu 0, 31, 29
  010a184  cror 2, 0, 2
  010a188  bt 2, 0x10a1b4
  010a18c  bf 5, 0x10a19c
  010a190  fmr 28, 31
  010a194  stfs 31, 0(31)
  010a198  b 0x10a1b4
  010a19c  fneg 2, 31
  010a1a0  fcmpu 0, 28, 2
  010a1a4  cror 6, 1, 2
  010a1a8  bt 6, 0x10a1b4
  010a1ac  fmr 28, 2
  010a1b0  stfs 2, 0(31)
  010a1b4  fabs 1, 1
  010a1b8  fcmpu 0, 28, 1
  010a1bc  cror 6, 0, 2
  010a1c0  bt 6, 0x10a1d0
  010a1c4  fmr 28, 1
  010a1c8  stfs 1, 0(31)
  010a1cc  b 0x10a1e8
  010a1d0  fneg 1, 1
  010a1d4  fcmpu 0, 28, 1
  010a1d8  cror 6, 1, 2
  010a1dc  bt 6, 0x10a1e8
  010a1e0  fmr 28, 1
  010a1e4  stfs 1, 0(31)
  010a1e8  lfs 1, 0(30)
  010a1ec  fmr 2, 28
  010a1f0  bl 0x502578
  010a1f4  nop
  010a1f8  fmr 2, 1
  010a1fc  fmr 1, 30
  010a200  stfs 2, 0(30)
  010a204  bl 0x5025e0
  010a208  nop
  010a20c  cmpwi 29, 0
  010a210  fmr 28, 1
  010a214  bt 2, 0x10a23c
  010a218  extsw 3, 29
  010a21c  std 3, 112(1)
  010a220  lfd 1, 112(1)
  010a224  fcfid 1, 1
  010a228  frsp 1, 1
  010a22c  fmuls 1, 28, 1
  010a230  fcmpu 0, 1, 29
  010a234  cror 6, 0, 2
  010a238  bt 6, 0x10a244
  010a23c  fmr 1, 28
  010a240  b 0x10a270
  010a244  lis 3, 17
  010a248  fabs 1, 28
  010a24c  fsub 2, 29, 28
  010a250  addi 3, 3, -24516
  010a254  lfs 3, 8(3)
  010a258  lfs 4, 4(3)
  010a25c  fsubs 5, 28, 3
  010a260  fadds 3, 28, 3
  010a264  fsub 1, 4, 1
  010a268  fsel 2, 2, 3, 5
  010a26c  fsel 1, 1, 29, 2
  010a270  lis 3, 17
  010a274  fabs 2, 1
  010a278  addi 3, 3, -24516
  010a27c  lfs 3, 12(3)
  010a280  fmuls 3, 31, 3
  010a284  fcmpu 0, 2, 3
  010a288  cror 6, 1, 2
  010a28c  bt 6, 0x10a2a4
  010a290  li 3, 0
  010a294  stfs 30, 0(30)
  010a298  fmr 1, 29
  010a29c  stw 3, 0(31)
  010a2a0  b 0x10a2a4
  010a2a4  ld 0, 208(1)
  010a2a8  mtlr 0
  010a2ac  lfd 28, 160(1)
  010a2b0  lfd 29, 168(1)
  010a2b4  lfd 30, 176(1)
  010a2b8  lfd 31, 184(1)
  010a2bc  ld 29, 136(1)
  010a2c0  ld 30, 144(1)
  010a2c4  ld 31, 152(1)
  010a2c8  addi 1, 1, 192
  010a2cc  blr

OrganicDeltAng:   # 0x10a2e0, 0x228 bytes
  010a2e0  stdu 1, -192(1)
  010a2e4  mflr 0
  010a2e8  std 0, 208(1)
  010a2ec  stfd 26, 144(1)
  010a2f0  stfd 27, 152(1)
  010a2f4  stfd 28, 160(1)
  010a2f8  stfd 29, 168(1)
  010a2fc  stfd 30, 176(1)
  010a300  stfd 31, 184(1)
  010a304  std 30, 128(1)
  010a308  ori 30, 3, 0
  010a30c  lis 3, 17
  010a310  fmr 26, 2
  010a314  std 31, 136(1)
  010a318  fmr 31, 1
  010a31c  ori 31, 5, 0
  010a320  std 29, 120(1)
  010a324  fmr 27, 4
  010a328  addi 29, 3, -23856
  010a32c  fmr 28, 3
  010a330  lfs 2, 0(30)
  010a334  bl 0x5025e0
  010a338  nop
  010a33c  fmr 29, 1
  010a340  lfs 1, 0(31)
  010a344  lfs 2, 0(29)
  010a348  fmuls 3, 1, 29
  010a34c  fcmpu 0, 3, 2
  010a350  bt 0, 0x10a4a8
  010a354  fcmpu 0, 29, 2
  010a358  bt 2, 0x10a4a8
  010a35c  fmuls 3, 1, 1
  010a360  lis 3, 17
  010a364  fabs 30, 29
  010a368  addi 3, 3, -23856
  010a36c  lfs 4, 4(3)
  010a370  fdivs 3, 3, 28
  010a374  fmuls 3, 3, 4
  010a378  fcmpu 0, 3, 30
  010a37c  cror 6, 0, 2
  010a380  bt 6, 0x10a418
  010a384  fabs 2, 1
  010a388  fadds 2, 30, 2
  010a38c  fcmpu 0, 3, 2
  010a390  cror 6, 1, 2
  010a394  bt 6, 0x10a3d0
  010a398  fneg 2, 1
  010a39c  fcmpu 0, 28, 2
  010a3a0  cror 6, 1, 2
  010a3a4  bt 6, 0x10a3b0
  010a3a8  fmr 2, 28
  010a3ac  b 0x10a3c4
  010a3b0  fneg 28, 28
  010a3b4  fcmpu 0, 2, 28
  010a3b8  cror 6, 1, 2
  010a3bc  bt 6, 0x10a3c4
  010a3c0  fmr 2, 28
  010a3c4  fadds 1, 1, 2
  010a3c8  stfs 1, 0(31)
  010a3cc  b 0x10a470
  010a3d0  lis 3, 17
  010a3d4  addi 3, 3, -23856
  010a3d8  lfs 2, 8(3)
  010a3dc  fmuls 2, 28, 2
  010a3e0  fneg 28, 1
  010a3e4  fcmpu 0, 28, 2
  010a3e8  cror 6, 0, 2
  010a3ec  bt 6, 0x10a3f8
  010a3f0  fmr 28, 2
  010a3f4  b 0x10a40c
  010a3f8  fneg 2, 2
  010a3fc  fcmpu 0, 28, 2
  010a400  cror 6, 1, 2
  010a404  bt 6, 0x10a40c
  010a408  fmr 28, 2
  010a40c  fadds 1, 1, 28
  010a410  stfs 1, 0(31)
  010a414  b 0x10a470
  010a418  lis 3, 17
  010a41c  addi 3, 3, -23856
  010a420  fcmpu 0, 29, 2
  010a424  lfs 1, 12(3)
  010a428  fmuls 1, 28, 1
  010a42c  cror 6, 1, 2
  010a430  fmuls 1, 1, 29
  010a434  fsqrts 28, 1
  010a438  fsub 1, 27, 28
  010a43c  fsel 28, 1, 28, 27
  010a440  bt 6, 0x10a45c
  010a444  fneg 1, 28
  010a448  ori 3, 31, 0
  010a44c  fmr 2, 26
  010a450  li 6, 0
  010a454  bl 0x109ec0
  010a458  b 0x10a470
  010a45c  ori 3, 31, 0
  010a460  fmr 1, 28
  010a464  li 6, 0
  010a468  fmr 2, 26
  010a46c  bl 0x109ec0
  010a470  lfs 1, 0(31)
  010a474  fabs 2, 1
  010a478  fcmpu 0, 30, 2
  010a47c  cror 6, 0, 2
  010a480  bt 6, 0x10a49c
  010a484  lfs 2, 0(30)
  010a488  bl 0x502578
  010a48c  nop
  010a490  stfs 1, 0(30)
  010a494  lfs 1, 0(31)
  010a498  b 0x10a4d4
  010a49c  fmr 1, 29
  010a4a0  stfs 31, 0(30)
  010a4a4  b 0x10a4d4
  010a4a8  fmr 1, 2
  010a4ac  ori 3, 31, 0
  010a4b0  fmr 2, 28
  010a4b4  li 6, 0
  010a4b8  bl 0x109ec0
  010a4bc  lfs 1, 0(31)
  010a4c0  lfs 2, 0(30)
  010a4c4  bl 0x502578
  010a4c8  nop
  010a4cc  stfs 1, 0(30)
  010a4d0  lfs 1, 0(31)
  010a4d4  ld 0, 208(1)
  010a4d8  mtlr 0
  010a4dc  lfd 26, 144(1)
  010a4e0  lfd 27, 152(1)
  010a4e4  lfd 28, 160(1)
  010a4e8  lfd 29, 168(1)
  010a4ec  lfd 30, 176(1)
  010a4f0  lfd 31, 184(1)
  010a4f4  ld 29, 120(1)
  010a4f8  ld 30, 128(1)
  010a4fc  ld 31, 136(1)
  010a500  addi 1, 1, 192
  010a504  blr

MatAdjoint:   # 0x10a508, 0x44 bytes
  010a508  ori 5, 4, 0
  010a50c  li 6, 3
  010a510  ori 4, 3, 0
  010a514  ori 3, 5, 0
  010a518  mtctr 6
  010a51c  lfs 1, 0(3)
  010a520  stfs 1, 0(4)
  010a524  lfs 1, 4(3)
  010a528  stfs 1, 4(4)
  010a52c  lfs 1, 8(3)
  010a530  stfs 1, 8(4)
  010a534  lfs 1, 12(3)
  010a538  addic 3, 3, 16
  010a53c  stfs 1, 12(4)
  010a540  addic 4, 4, 16
  010a544  bdnz 0x10a51c
  010a548  blr

Float_To_RGBA:   # 0x10a550, 0xc0 bytes
  010a550  stdu 1, -176(1)
  010a554  mflr 0
  010a558  std 0, 192(1)
  010a55c  stfd 28, 144(1)
  010a560  stfd 29, 152(1)
  010a564  stfd 30, 160(1)
  010a568  stfd 31, 168(1)
  010a56c  lis 3, 17
  010a570  fmr 31, 2
  010a574  addi 3, 3, -23220
  010a578  fmr 30, 3
  010a57c  fmr 29, 4
  010a580  lfs 2, 0(3)
  010a584  fmr 28, 2
  010a588  std 31, 136(1)
  010a58c  std 30, 128(1)
  010a590  std 29, 120(1)
  010a594  fmuls 1, 1, 28
  010a598  bl 0x502758
  010a59c  nop
  010a5a0  ori 31, 3, 0
  010a5a4  fmuls 1, 31, 28
  010a5a8  bl 0x502758
  010a5ac  nop
  010a5b0  fmuls 1, 30, 28
  010a5b4  ori 30, 3, 0
  010a5b8  bl 0x502758
  010a5bc  nop
  010a5c0  ori 29, 3, 0
  010a5c4  fmuls 1, 29, 28
  010a5c8  bl 0x502758
  010a5cc  nop
  010a5d0  clrlwi 4, 31, 24
  010a5d4  rlwimi 4, 30, 8, 16, 23
  010a5d8  rlwimi 4, 29, 16, 8, 15
  010a5dc  rlwimi 4, 3, 24, 0, 7
  010a5e0  clrldi 3, 4, 32
  010a5e4  ld 0, 192(1)
  010a5e8  mtlr 0
  010a5ec  lfd 28, 144(1)
  010a5f0  lfd 29, 152(1)
  010a5f4  lfd 30, 160(1)
  010a5f8  lfd 31, 168(1)
  010a5fc  ld 29, 120(1)
  010a600  ld 30, 128(1)
  010a604  ld 31, 136(1)
  010a608  addi 1, 1, 176
  010a60c  blr

ReorderRGB:   # 0x10a610, 0x58 bytes
  010a610  clrlwi 7, 6, 31
  010a614  cmpwi 7, 0
  010a618  bt 2, 0x10a62c
  010a61c  lwz 7, 0(4)
  010a620  lwz 8, 0(3)
  010a624  stw 7, 0(3)
  010a628  stw 8, 0(4)
  010a62c  rlwinm 7, 6, 0, 30, 30
  010a630  cmpwi 7, 0
  010a634  bt 2, 0x10a648
  010a638  lwz 7, 0(5)
  010a63c  lwz 8, 0(4)
  010a640  stw 7, 0(4)
  010a644  stw 8, 0(5)
  010a648  rlwinm 4, 6, 0, 29, 29
  010a64c  cmpwi 4, 0
  010a650  bt 2, 0x10a664
  010a654  lwz 4, 0(3)
  010a658  lwz 6, 0(5)
  010a65c  stw 4, 0(5)
  010a660  stw 6, 0(3)
  010a664  blr

ReorderRGB:   # 0x10a668, 0x114 bytes
  010a668  stdu 1, -64(1)
  010a66c  std 31, 56(1)
  010a670  std 30, 48(1)
  010a674  cmpwi 4, 0
  010a678  bf 2, 0x10a680
  010a67c  b 0x10a76c
  010a680  clrlwi 5, 4, 31
  010a684  li 8, 0
  010a688  li 10, 0
  010a68c  subc 8, 8, 5
  010a690  subc 5, 10, 5
  010a694  cntlzw 8, 8
  010a698  cntlzw 5, 5
  010a69c  clrlwi 6, 3, 24
  010a6a0  rlwinm 7, 3, 24, 24, 31
  010a6a4  sldi 8, 8, 58
  010a6a8  sldi 5, 5, 58
  010a6ac  subc 12, 7, 6
  010a6b0  sradi 8, 8, 63
  010a6b4  subc 31, 6, 7
  010a6b8  sradi 5, 5, 63
  010a6bc  li 9, 0
  010a6c0  rlwinm 11, 4, 0, 30, 30
  010a6c4  and 8, 8, 12
  010a6c8  li 30, 0
  010a6cc  and 5, 5, 31
  010a6d0  subc 9, 9, 11
  010a6d4  addc 6, 6, 8
  010a6d8  subc 8, 30, 11
  010a6dc  addc 5, 7, 5
  010a6e0  cntlzw 7, 9
  010a6e4  rlwinm 4, 4, 0, 29, 29
  010a6e8  cntlzw 8, 8
  010a6ec  li 31, 0
  010a6f0  rlwinm 10, 3, 16, 24, 31
  010a6f4  li 12, 0
  010a6f8  sldi 7, 7, 58
  010a6fc  sldi 8, 8, 58
  010a700  subc 31, 31, 4
  010a704  subc 9, 10, 6
  010a708  sradi 7, 7, 63
  010a70c  subc 4, 12, 4
  010a710  subc 11, 6, 10
  010a714  sradi 8, 8, 63
  010a718  and 7, 7, 9
  010a71c  cntlzw 4, 4
  010a720  and 8, 8, 11
  010a724  addc 6, 6, 7
  010a728  sldi 4, 4, 58
  010a72c  addc 7, 10, 8
  010a730  cntlzw 9, 31
  010a734  subc 10, 5, 6
  010a738  sradi 4, 4, 63
  010a73c  sldi 8, 9, 58
  010a740  and 4, 4, 10
  010a744  subc 9, 6, 5
  010a748  sradi 8, 8, 63
  010a74c  addc 4, 6, 4
  010a750  and 8, 8, 9
  010a754  rlwinm 3, 3, 0, 0, 7
  010a758  rlwimi 4, 7, 8, 16, 23
  010a75c  addc 5, 5, 8
  010a760  or 3, 4, 3
  010a764  rlwimi 3, 5, 16, 8, 15
  010a768  extsw 3, 3
  010a76c  ld 30, 48(1)
  010a770  ld 31, 56(1)
  010a774  addi 1, 1, 64
  010a778  blr

MB_NormalizeMtx3Columns:   # 0x10a788, 0xb4 bytes
  010a788  lis 4, 17
  010a78c  li 6, 0
  010a790  addi 4, 4, -22660
  010a794  ori 5, 6, 0
  010a798  lfs 8, 0(4)
  010a79c  lfs 7, 4(4)
  010a7a0  lfs 6, 8(4)
  010a7a4  addc 4, 3, 5
  010a7a8  clrldi 4, 4, 32
  010a7ac  fmr 5, 8
  010a7b0  lfs 1, 16(4)
  010a7b4  lfs 2, 0(4)
  010a7b8  fmuls 3, 1, 1
  010a7bc  lfs 10, 32(4)
  010a7c0  fmr 4, 5
  010a7c4  fmadds 9, 2, 2, 3
  010a7c8  fmr 3, 4
  010a7cc  fmadds 9, 10, 10, 9
  010a7d0  fsqrts 11, 9
  010a7d4  fcmpu 0, 11, 3
  010a7d8  bt 2, 0x10a81c
  010a7dc  frsqrte 3, 9
  010a7e0  fmuls 4, 9, 3
  010a7e4  fmuls 5, 3, 7
  010a7e8  fnmsubs 4, 4, 3, 6
  010a7ec  fmadds 3, 4, 5, 3
  010a7f0  fmuls 4, 9, 3
  010a7f4  fmuls 5, 3, 7
  010a7f8  fnmsubs 4, 4, 3, 6
  010a7fc  fmadds 3, 4, 5, 3
  010a800  fmuls 4, 9, 3
  010a804  fmuls 5, 3, 7
  010a808  fnmsubs 4, 4, 3, 6
  010a80c  fmadds 5, 4, 5, 3
  010a810  fmuls 3, 2, 5
  010a814  fmuls 4, 1, 5
  010a818  fmuls 5, 10, 5
  010a81c  addic 6, 6, 1
  010a820  stfs 3, 0(4)
  010a824  addic 5, 5, 4
  010a828  cmpwi 6, 3
  010a82c  stfs 4, 16(4)
  010a830  stfs 5, 32(4)
  010a834  bt 0, 0x10a7a4
  010a838  blr

???_MB_GetNormalizedMtxElem:   # 0x10a83c, 0x11c bytes
  010a83c  stdu 1, -240(1)
  010a840  mflr 0
  010a844  std 0, 256(1)
  010a848  stfd 28, 208(1)
  010a84c  stfd 29, 216(1)
  010a850  stfd 30, 224(1)
  010a854  stfd 31, 232(1)
  010a858  lfs 1, 4(5)
  010a85c  std 31, 200(1)
  010a860  lfs 2, 4(3)
  010a864  ori 31, 6, 0
  010a868  lfs 3, 0(5)
  010a86c  fsubs 31, 1, 2
  010a870  lfs 1, 0(3)
  010a874  lfs 2, 8(5)
  010a878  fsubs 30, 3, 1
  010a87c  lfs 1, 8(3)
  010a880  lfs 29, 12(5)
  010a884  addic 3, 1, 128
  010a888  fsubs 28, 2, 1
  010a88c  bl 0x5010c0
  010a890  nop
  010a894  lfs 1, 144(1)
  010a898  lfs 2, 148(1)
  010a89c  lfs 3, 128(1)
  010a8a0  lfs 4, 152(1)
  010a8a4  fmuls 1, 1, 31
  010a8a8  fmuls 2, 2, 31
  010a8ac  lfs 5, 132(1)
  010a8b0  lfs 6, 156(1)
  010a8b4  fmuls 4, 4, 31
  010a8b8  lfs 7, 136(1)
  010a8bc  fmuls 6, 6, 31
  010a8c0  lfs 8, 160(1)
  010a8c4  sldi 3, 31, 2
  010a8c8  lfs 9, 140(1)
  010a8cc  addic 4, 1, 112
  010a8d0  extsw 3, 3
  010a8d4  fmadds 1, 3, 30, 1
  010a8d8  fmadds 2, 5, 30, 2
  010a8dc  lfs 3, 164(1)
  010a8e0  fmadds 4, 7, 30, 4
  010a8e4  lfs 5, 168(1)
  010a8e8  lfs 7, 176(1)
  010a8ec  fmadds 6, 9, 30, 6
  010a8f0  fmadds 1, 8, 28, 1
  010a8f4  fmadds 2, 3, 28, 2
  010a8f8  lfs 3, 172(1)
  010a8fc  fmadds 4, 5, 28, 4
  010a900  lfs 8, 180(1)
  010a904  fmadds 3, 3, 28, 6
  010a908  lfs 5, 184(1)
  010a90c  lfs 6, 188(1)
  010a910  fmadds 1, 7, 29, 1
  010a914  fmadds 2, 8, 29, 2
  010a918  fmadds 4, 5, 29, 4
  010a91c  fmadds 3, 6, 29, 3
  010a920  stfs 1, 112(1)
  010a924  stfs 2, 116(1)
  010a928  stfs 4, 120(1)
  010a92c  stfs 3, 124(1)
  010a930  lfsx 1, 4, 3
  010a934  ld 0, 256(1)
  010a938  mtlr 0
  010a93c  lfd 28, 208(1)
  010a940  lfd 29, 216(1)
  010a944  lfd 30, 224(1)
  010a948  lfd 31, 232(1)
  010a94c  ld 31, 200(1)
  010a950  addi 1, 1, 240
  010a954  blr

MB_RemoveVecComponent:   # 0x10a968, 0xd0 bytes
  010a968  lfs 6, 4(5)
  010a96c  lfs 7, 0(5)
  010a970  fmuls 2, 6, 6
  010a974  lfs 5, 8(5)
  010a978  lis 5, 17
  010a97c  addi 5, 5, -22184
  010a980  fmadds 11, 7, 7, 2
  010a984  lfs 10, 0(5)
  010a988  fmr 9, 10
  010a98c  lfs 4, 0(4)
  010a990  lfs 3, 4(4)
  010a994  lfs 2, 8(4)
  010a998  fmadds 11, 5, 5, 11
  010a99c  fmr 8, 9
  010a9a0  fsqrts 12, 11
  010a9a4  fcmpu 0, 12, 8
  010a9a8  bt 2, 0x10a9fc
  010a9ac  frsqrte 8, 11
  010a9b0  lis 5, 17
  010a9b4  addi 5, 5, -22184
  010a9b8  lfs 9, 4(5)
  010a9bc  lfs 10, 8(5)
  010a9c0  fmuls 12, 11, 8
  010a9c4  fmuls 13, 9, 8
  010a9c8  fnmsubs 12, 12, 8, 10
  010a9cc  fmadds 8, 12, 13, 8
  010a9d0  fmuls 12, 11, 8
  010a9d4  fmuls 13, 9, 8
  010a9d8  fnmsubs 12, 12, 8, 10
  010a9dc  fmadds 8, 12, 13, 8
  010a9e0  fmuls 11, 11, 8
  010a9e4  fmuls 9, 9, 8
  010a9e8  fnmsubs 10, 11, 8, 10
  010a9ec  fmadds 8, 10, 9, 8
  010a9f0  fmuls 10, 7, 8
  010a9f4  fmuls 9, 6, 8
  010a9f8  fmuls 8, 5, 8
  010a9fc  fmuls 3, 9, 3
  010aa00  lfs 5, 4(4)
  010aa04  lfs 6, 8(4)
  010aa08  lfs 7, 12(4)
  010aa0c  stfs 7, 12(3)
  010aa10  fmadds 3, 10, 4, 3
  010aa14  fmadds 2, 8, 2, 3
  010aa18  fmuls 1, 1, 2
  010aa1c  fnmsubs 2, 1, 10, 4
  010aa20  fnmsubs 3, 1, 9, 5
  010aa24  fnmsubs 1, 1, 8, 6
  010aa28  stfs 2, 0(3)
  010aa2c  stfs 3, 4(3)
  010aa30  stfs 1, 8(3)
  010aa34  blr

MB_MistDeathEffect:   # 0x10aa50, 0x308 bytes
  010aa50  stdu 1, -560(1)
  010aa54  mflr 0
  010aa58  std 0, 576(1)
  010aa5c  stfd 27, 520(1)
  010aa60  stfd 28, 528(1)
  010aa64  stfd 29, 536(1)
  010aa68  stfd 30, 544(1)
  010aa6c  stfd 31, 552(1)
  010aa70  lis 6, 17
  010aa74  ori 7, 5, 0
  010aa78  std 31, 512(1)
  010aa7c  addi 8, 6, -21960
  010aa80  ori 31, 4, 0
  010aa84  addic 6, 1, 128
  010aa88  li 5, 20
  010aa8c  std 30, 504(1)
  010aa90  std 29, 496(1)
  010aa94  std 28, 488(1)
  010aa98  std 27, 480(1)
  010aa9c  std 26, 472(1)
  010aaa0  lfs 1, 0(8)
  010aaa4  bl 0x108240
  010aaa8  ori 27, 3, 0
  010aaac  cmpwi 27, 0
  010aab0  bt 2, 0x10ad1c
  010aab4  cmpwi 27, 0
  010aab8  li 28, 0
  010aabc  bf 1, 0x10ad1c
  010aac0  lis 3, 17
  010aac4  lis 29, 151
  010aac8  addi 3, 3, -21960
  010aacc  addic 30, 1, 128
  010aad0  addic 29, 29, -25432
  010aad4  lfs 28, 4(3)
  010aad8  lfs 29, 8(3)
  010aadc  lfs 30, 12(3)
  010aae0  lfs 31, 16(3)
  010aae4  bl 0x5c8318
  010aae8  nop
  010aaec  srawi 3, 3, 15
  010aaf0  clrlwi 3, 3, 20
  010aaf4  addic 3, 3, -2048
  010aaf8  extsw 3, 3
  010aafc  std 3, 448(1)
  010ab00  lfd 1, 448(1)
  010ab04  fcfid 1, 1
  010ab08  frsp 1, 1
  010ab0c  fmuls 27, 1, 31
  010ab10  bl 0x5c8318
  010ab14  nop
  010ab18  srawi 3, 3, 15
  010ab1c  fmr 2, 27
  010ab20  lis 26, 114
  010ab24  clrlwi 3, 3, 20
  010ab28  addic 3, 3, -2048
  010ab2c  extsw 3, 3
  010ab30  std 3, 448(1)
  010ab34  lfs 1, -3052(26)
  010ab38  lfd 3, 448(1)
  010ab3c  addic 3, 1, 112
  010ab40  fmuls 1, 1, 28
  010ab44  fcfid 3, 3
  010ab48  frsp 3, 3
  010ab4c  fmuls 3, 3, 31
  010ab50  bl 0xfe610
  010ab54  lfs 1, 120(1)
  010ab58  lfs 2, 8(31)
  010ab5c  lfs 3, 112(1)
  010ab60  fadds 1, 1, 2
  010ab64  lfs 2, 0(31)
  010ab68  lfs 4, 116(1)
  010ab6c  fadds 2, 3, 2
  010ab70  lfs 3, 4(31)
  010ab74  lfs 5, -3052(26)
  010ab78  fadds 3, 4, 3
  010ab7c  lbz 3, 16(29)
  010ab80  cmpwi 3, 0
  010ab84  fmadds 4, 5, 29, 1
  010ab88  stfs 1, 120(1)
  010ab8c  stfs 2, 112(1)
  010ab90  stfs 3, 116(1)
  010ab94  stfs 4, 120(1)
  010ab98  bt 2, 0x10ac58
  010ab9c  bl 0x5c8318
  010aba0  nop
  010aba4  srawi 3, 3, 15
  010aba8  clrlwi 3, 3, 17
  010abac  srawi 4, 3, 4
  010abb0  addze 4, 4
  010abb4  sldi 4, 4, 4
  010abb8  subc 3, 3, 4
  010abbc  addic 3, 3, 20
  010abc0  extsw 3, 3
  010abc4  std 3, 448(1)
  010abc8  lis 3, 114
  010abcc  lfs 1, -3056(3)
  010abd0  lfd 2, 448(1)
  010abd4  fcfid 2, 2
  010abd8  frsp 2, 2
  010abdc  fadds 2, 2, 30
  010abe0  fmuls 1, 1, 2
  010abe4  fctiwz 1, 1
  010abe8  stfd 1, 448(1)
  010abec  lwz 3, 452(1)
  010abf0  extsw 26, 3
  010abf4  bl 0x5c8318
  010abf8  nop
  010abfc  srawi 3, 3, 15
  010ac00  ori 7, 26, 0
  010ac04  clrlwi 3, 3, 17
  010ac08  li 8, 30
  010ac0c  addic 4, 3, 1
  010ac10  mulli 4, 4, 12483
  010ac14  li 10, 1
  010ac18  srwi 4, 4, 18
  010ac1c  addc 5, 4, 4
  010ac20  addc 4, 4, 5
  010ac24  lis 5, 28672
  010ac28  sldi 6, 4, 3
  010ac2c  ori 5, 5, 65440
  010ac30  subc 4, 6, 4
  010ac34  lis 6, 0
  010ac38  subc 9, 3, 4
  010ac3c  addic 4, 1, 112
  010ac40  addic 9, 9, 40
  010ac44  ori 3, 30, 0
  010ac48  ori 6, 6, 65280
  010ac4c  bl 0x121740
  010ac50  nop
  010ac54  b 0x10ad0c
  010ac58  bl 0x5c8318
  010ac5c  nop
  010ac60  srawi 3, 3, 15
  010ac64  clrlwi 3, 3, 17
  010ac68  srawi 4, 3, 4
  010ac6c  addze 4, 4
  010ac70  sldi 4, 4, 4
  010ac74  subc 3, 3, 4
  010ac78  addic 3, 3, 20
  010ac7c  extsw 3, 3
  010ac80  std 3, 448(1)
  010ac84  lis 3, 114
  010ac88  lfs 1, -3056(3)
  010ac8c  lfd 2, 448(1)
  010ac90  fcfid 2, 2
  010ac94  frsp 2, 2
  010ac98  fadds 2, 2, 30
  010ac9c  fmuls 1, 1, 2
  010aca0  fctiwz 1, 1
  010aca4  stfd 1, 448(1)
  010aca8  lwz 3, 452(1)
  010acac  extsw 26, 3
  010acb0  bl 0x5c8318
  010acb4  nop
  010acb8  srawi 3, 3, 15
  010acbc  lis 5, 28672
  010acc0  clrlwi 4, 3, 17
  010acc4  li 10, 1
  010acc8  addic 3, 4, 1
  010accc  mulli 3, 3, 12483
  010acd0  ori 5, 5, 41215
  010acd4  srwi 3, 3, 18
  010acd8  addc 6, 3, 3
  010acdc  addc 7, 3, 6
  010ace0  ori 3, 30, 0
  010ace4  sldi 8, 7, 3
  010ace8  li 6, 255
  010acec  subc 8, 8, 7
  010acf0  ori 7, 26, 0
  010acf4  subc 9, 4, 8
  010acf8  li 8, 30
  010acfc  addic 9, 9, 40
  010ad00  addic 4, 1, 112
  010ad04  bl 0x121740
  010ad08  nop
  010ad0c  addic 28, 28, 1
  010ad10  addic 30, 30, 16
  010ad14  cmpw 28, 27
  010ad18  bt 0, 0x10aae4
  010ad1c  ld 0, 576(1)
  010ad20  mtlr 0
  010ad24  lfd 27, 520(1)
  010ad28  lfd 28, 528(1)
  010ad2c  lfd 29, 536(1)
  010ad30  lfd 30, 544(1)
  010ad34  lfd 31, 552(1)
  010ad38  ld 26, 472(1)
  010ad3c  ld 27, 480(1)
  010ad40  ld 28, 488(1)
  010ad44  ld 29, 496(1)
  010ad48  ld 30, 504(1)
  010ad4c  ld 31, 512(1)
  010ad50  addi 1, 1, 560
  010ad54  blr

MB_StartKick:   # 0x10ad80, 0x208 bytes
  010ad80  stdu 1, -176(1)
  010ad84  mflr 0
  010ad88  std 0, 192(1)
  010ad8c  std 26, 128(1)
  010ad90  lis 5, 17
  010ad94  addi 26, 5, -21160
  010ad98  std 28, 144(1)
  010ad9c  ori 28, 4, 0
  010ada0  lfs 2, 0(26)
  010ada4  lfs 3, 4(26)
  010ada8  fadds 2, 1, 2
  010adac  lfs 4, 8(26)
  010adb0  fsubs 5, 3, 1
  010adb4  std 27, 136(1)
  010adb8  fsubs 6, 4, 1
  010adbc  ori 27, 3, 0
  010adc0  std 31, 168(1)
  010adc4  lis 3, 16256
  010adc8  ori 31, 8, 0
  010adcc  fsubs 3, 3, 2
  010add0  fsub 7, 1, 5
  010add4  std 30, 160(1)
  010add8  fsubs 4, 4, 2
  010addc  std 29, 152(1)
  010ade0  ori 30, 7, 0
  010ade4  std 25, 120(1)
  010ade8  ori 29, 6, 0
  010adec  li 25, 0
  010adf0  fsub 9, 2, 3
  010adf4  fsel 5, 7, 5, 1
  010adf8  lfs 7, 12(26)
  010adfc  fsel 2, 9, 3, 2
  010ae00  fsub 3, 6, 5
  010ae04  fsub 9, 4, 2
  010ae08  fsel 3, 3, 6, 5
  010ae0c  lfs 5, 16(26)
  010ae10  lfs 6, 20(26)
  010ae14  fsel 2, 9, 4, 2
  010ae18  fmuls 4, 3, 3
  010ae1c  fmuls 8, 2, 2
  010ae20  fmuls 9, 4, 3
  010ae24  fmuls 12, 8, 2
  010ae28  fmuls 13, 4, 9
  010ae2c  fmadds 3, 9, 7, 3
  010ae30  lfs 9, 24(26)
  010ae34  lfs 11, 24(28)
  010ae38  fmuls 10, 8, 12
  010ae3c  fmadds 2, 12, 7, 2
  010ae40  fmuls 7, 4, 13
  010ae44  fmadds 3, 13, 5, 3
  010ae48  lfs 12, 28(28)
  010ae4c  stfs 12, 8(28)
  010ae50  stw 3, 12(28)
  010ae54  fmuls 13, 8, 10
  010ae58  fmadds 2, 10, 5, 2
  010ae5c  fmuls 4, 4, 7
  010ae60  fmadds 3, 7, 6, 3
  010ae64  fmuls 5, 8, 13
  010ae68  fmadds 2, 13, 6, 2
  010ae6c  fmadds 3, 4, 9, 3
  010ae70  fmadds 2, 5, 9, 2
  010ae74  fmuls 3, 3, 11
  010ae78  fmuls 4, 2, 11
  010ae7c  stfs 3, 4(28)
  010ae80  lfs 2, 28(26)
  010ae84  stfs 4, 0(28)
  010ae88  bl 0x502578
  010ae8c  nop
  010ae90  li 3, 32
  010ae94  stfs 1, 64(28)
  010ae98  lis 4, 114
  010ae9c  vspltisw 2, -1
  010aea0  li 5, -3056
  010aea4  stw 25, 68(28)
  010aea8  cmpwi 27, 0
  010aeac  <unknown>
  010aeb0  vslw 2, 2, 2
  010aeb4  vspltw 3, 3, 0
  010aeb8  <unknown>
  010aebc  li 4, 44
  010aec0  lwz 3, 36(28)
  010aec4  li 5, 1
  010aec8  vmaddfp 2, 4, 3, 2
  010aecc  vctsxs 2, 2, 0
  010aed0  vsplth 2, 2, 1
  010aed4  stvehx 2, 4, 28
  010aed8  stb 5, 60(28)
  010aedc  sth 25, 62(28)
  010aee0  bt 2, 0x10af20
  010aee4  lhz 4, 52(27)
  010aee8  rlwinm 4, 4, 0, 26, 26
  010aeec  cmpwi 4, 0
  010aef0  bt 2, 0x10af20
  010aef4  lwz 4, 120(27)
  010aef8  lwz 4, 0(4)
  010aefc  cmpwi 4, 0
  010af00  bt 2, 0x10af20
  010af04  lwz 4, 0(4)
  010af08  cmpwi 4, 0
  010af0c  bf 2, 0x10af20
  010af10  ori 3, 3, 32
  010af14  li 4, 0
  010af18  stw 3, 36(28)
  010af1c  stw 4, 148(27)
  010af20  rlwinm 3, 3, 0, 30, 30
  010af24  cmpwi 3, 0
  010af28  bt 2, 0x10af48
  010af2c  ori 3, 27, 0
  010af30  ori 4, 29, 0
  010af34  ori 5, 31, 0
  010af38  ori 6, 30, 0
  010af3c  li 7, 1
  010af40  bl 0xfdf80
  010af44  b 0x10af5c
  010af48  ori 3, 27, 0
  010af4c  ori 4, 29, 0
  010af50  ori 5, 31, 0
  010af54  ori 6, 30, 0
  010af58  bl 0xfddc0
  010af5c  ld 0, 192(1)
  010af60  mtlr 0
  010af64  ld 25, 120(1)
  010af68  ld 26, 128(1)
  010af6c  ld 27, 136(1)
  010af70  ld 28, 144(1)
  010af74  ld 29, 152(1)
  010af78  ld 30, 160(1)
  010af7c  ld 31, 168(1)
  010af80  addi 1, 1, 176
  010af84  blr

MB_isCrate:   # 0x10af88, 0x60 bytes
  010af88  cmpwi 3, 0
  010af8c  bf 2, 0x10af98
  010af90  li 3, 0
  010af94  b 0x10afe4
  010af98  lis 4, 164
  010af9c  lwz 4, -28512(4)
  010afa0  cmplw 3, 4
  010afa4  bt 0, 0x10afb8
  010afa8  lis 4, 164
  010afac  lwz 4, -28504(4)
  010afb0  cmplw 3, 4
  010afb4  bf 1, 0x10afc0
  010afb8  li 3, 0
  010afbc  b 0x10afe4
  010afc0  lhz 3, 166(3)
  010afc4  extsh 3, 3
  010afc8  cmpwi 1, 3, 540
  010afcc  cmpwi 3, 500
  010afd0  cror 2, 0, 5
  010afd4  bt 2, 0x10afe0
  010afd8  li 3, 1
  010afdc  b 0x10afe4
  010afe0  li 3, 0
  010afe4  blr

MB_UpdateKick:   # 0x10b030, 0xcb4 bytes
  010b030  stdu 1, -384(1)
  010b034  mflr 0
  010b038  std 0, 400(1)
  010b03c  stfd 28, 352(1)
  010b040  stfd 29, 360(1)
  010b044  stfd 30, 368(1)
  010b048  stfd 31, 376(1)
  010b04c  lfs 6, 8(4)
  010b050  std 31, 344(1)
  010b054  lfs 1, 16(4)
  010b058  ori 31, 3, 0
  010b05c  std 26, 304(1)
  010b060  lbz 3, 46(4)
  010b064  li 26, 0
  010b068  std 30, 336(1)
  010b06c  fsubs 6, 6, 1
  010b070  ori 30, 4, 0
  010b074  std 27, 312(1)
  010b078  cmpwi 3, 1
  010b07c  ori 27, 26, 0
  010b080  std 29, 328(1)
  010b084  std 28, 320(1)
  010b088  std 25, 296(1)
  010b08c  stfs 6, 8(4)
  010b090  bf 2, 0x10b0b4
  010b094  lbz 3, 47(30)
  010b098  cmpwi 3, 0
  010b09c  bt 2, 0x10b0b4
  010b0a0  ori 5, 3, 0
  010b0a4  ori 3, 31, 0
  010b0a8  ori 4, 30, 0
  010b0ac  bl 0x10aa50
  010b0b0  lfs 6, 8(30)
  010b0b4  lfs 5, 4(30)
  010b0b8  lfs 4, 0(30)
  010b0bc  lis 3, 17
  010b0c0  fmuls 1, 5, 5
  010b0c4  addi 3, 3, -20504
  010b0c8  lfs 2, 0(3)
  010b0cc  lhz 3, 62(30)
  010b0d0  fmr 28, 2
  010b0d4  cmpwi 3, 2
  010b0d8  fmadds 1, 4, 4, 1
  010b0dc  fsqrts 1, 1
  010b0e0  bt 2, 0x10b0e8
  010b0e4  lfs 2, 76(30)
  010b0e8  fmr 3, 2
  010b0ec  lfs 2, 20(30)
  010b0f0  fsubs 3, 3, 1
  010b0f4  fcmpu 0, 3, 2
  010b0f8  cror 6, 0, 2
  010b0fc  bt 6, 0x10b108
  010b100  fmr 3, 2
  010b104  b 0x10b11c
  010b108  fneg 2, 2
  010b10c  fcmpu 0, 3, 2
  010b110  cror 6, 1, 2
  010b114  bt 6, 0x10b11c
  010b118  fmr 3, 2
  010b11c  fadds 2, 3, 1
  010b120  fsub 3, 28, 1
  010b124  fsub 7, 28, 1
  010b128  fsub 8, 1, 28
  010b12c  fsub 9, 1, 28
  010b130  fdivs 2, 2, 1
  010b134  lfs 1, 28(30)
  010b138  fcmpu 0, 6, 1
  010b13c  cror 6, 0, 2
  010b140  fmuls 4, 4, 2
  010b144  fmuls 2, 5, 2
  010b148  fsel 3, 3, 28, 4
  010b14c  fsel 5, 7, 28, 2
  010b150  fsel 3, 8, 3, 4
  010b154  fsel 2, 9, 5, 2
  010b158  stfs 3, 0(30)
  010b15c  stfs 2, 4(30)
  010b160  bt 6, 0x10b168
  010b164  stfs 1, 8(30)
  010b168  lfs 1, 24(31)
  010b16c  lis 3, 15395
  010b170  lfs 2, 40(30)
  010b174  lis 4, 17
  010b178  lfs 3, 16(31)
  010b17c  ori 3, 3, 55050
  010b180  fadds 1, 1, 2
  010b184  addi 4, 4, -20504
  010b188  lfs 2, 20(31)
  010b18c  li 5, 2
  010b190  stfs 3, 128(1)
  010b194  li 6, 0
  010b198  lfs 4, 28(31)
  010b19c  li 7, 0
  010b1a0  stfs 2, 132(1)
  010b1a4  stfs 4, 140(1)
  010b1a8  stfs 3, 240(1)
  010b1ac  stfs 2, 244(1)
  010b1b0  stfs 4, 252(1)
  010b1b4  stw 3, 248(1)
  010b1b8  stfs 3, 256(1)
  010b1bc  addic 3, 1, 256
  010b1c0  stfs 2, 260(1)
  010b1c4  stfs 1, 136(1)
  010b1c8  stfs 4, 268(1)
  010b1cc  lfs 30, 4(4)
  010b1d0  addic 4, 1, 240
  010b1d4  fadds 1, 1, 30
  010b1d8  stfs 1, 264(1)
  010b1dc  bl 0x57820
  010b1e0  nop
  010b1e4  cmpwi 3, 0
  010b1e8  fmr 31, 28
  010b1ec  bt 2, 0x10b1fc
  010b1f0  lis 3, 161
  010b1f4  addic 3, 3, 2368
  010b1f8  lfs 31, 40(3)
  010b1fc  bl 0x60780
  010b200  nop
  010b204  lfs 2, 16(31)
  010b208  lfs 6, 0(30)
  010b20c  cmpwi 3, 0
  010b210  lfs 3, 20(31)
  010b214  lfs 7, 4(30)
  010b218  lfs 4, 24(31)
  010b21c  lfs 5, 28(31)
  010b220  lfs 1, 8(30)
  010b224  bf 2, 0x10b2f0
  010b228  lwz 3, 92(30)
  010b22c  cmpwi 3, 0
  010b230  bf 2, 0x10b284
  010b234  lfs 6, 136(1)
  010b238  fcmpu 0, 6, 31
  010b23c  bt 0, 0x10b284
  010b240  fadds 1, 6, 1
  010b244  fcmpu 0, 1, 31
  010b248  cror 6, 1, 2
  010b24c  bt 6, 0x10b284
  010b250  lis 5, 17
  010b254  lis 4, 16256
  010b258  addi 5, 5, -20504
  010b25c  addic 3, 1, 128
  010b260  stw 4, 92(30)
  010b264  stfs 31, 136(1)
  010b268  lfs 1, 8(5)
  010b26c  bl 0x456478
  010b270  nop
  010b274  lfs 2, 16(31)
  010b278  lfs 3, 20(31)
  010b27c  lfs 4, 24(31)
  010b280  lfs 5, 28(31)
  010b284  fadds 1, 4, 30
  010b288  lis 3, 15395
  010b28c  stfs 2, 208(1)
  010b290  stfs 3, 212(1)
  010b294  addic 4, 1, 208
  010b298  ori 8, 3, 55050
  010b29c  stfs 5, 220(1)
  010b2a0  addic 3, 1, 224
  010b2a4  li 5, 34
  010b2a8  li 6, 0
  010b2ac  stw 8, 216(1)
  010b2b0  stfs 2, 224(1)
  010b2b4  li 7, 0
  010b2b8  stfs 3, 228(1)
  010b2bc  stfs 5, 236(1)
  010b2c0  stfs 1, 232(1)
  010b2c4  bl 0x57820
  010b2c8  nop
  010b2cc  cmpwi 3, 0
  010b2d0  lfs 6, 0(30)
  010b2d4  fmr 31, 28
  010b2d8  lfs 7, 4(30)
  010b2dc  bt 2, 0x10b2ec
  010b2e0  lis 3, 161
  010b2e4  addic 3, 3, 2368
  010b2e8  lfs 31, 40(3)
  010b2ec  b 0x10b3dc
  010b2f0  lwz 3, 36(30)
  010b2f4  rlwinm 3, 3, 0, 27, 27
  010b2f8  cmpwi 3, 0
  010b2fc  bf 2, 0x10b30c
  010b300  lhz 3, 62(30)
  010b304  cmpwi 3, 2
  010b308  bf 2, 0x10b3dc
  010b30c  fadds 1, 4, 1
  010b310  fadds 2, 2, 6
  010b314  lis 3, 15395
  010b318  fadds 3, 3, 7
  010b31c  stfs 5, 188(1)
  010b320  ori 5, 3, 55050
  010b324  stfs 5, 204(1)
  010b328  addic 3, 1, 192
  010b32c  addic 4, 1, 176
  010b330  li 6, 0
  010b334  stw 5, 184(1)
  010b338  li 5, 34
  010b33c  li 7, 0
  010b340  fadds 1, 1, 30
  010b344  stfs 2, 176(1)
  010b348  stfs 3, 180(1)
  010b34c  stfs 2, 192(1)
  010b350  stfs 3, 196(1)
  010b354  stfs 1, 200(1)
  010b358  bl 0x57820
  010b35c  nop
  010b360  lfs 6, 0(30)
  010b364  cmpwi 3, 0
  010b368  lfs 7, 4(30)
  010b36c  fmr 1, 28
  010b370  bt 2, 0x10b380
  010b374  lis 3, 161
  010b378  addic 3, 3, 2368
  010b37c  lfs 1, 40(3)
  010b380  lis 3, 17
  010b384  addi 3, 3, -20504
  010b388  lfs 2, 12(3)
  010b38c  fsubs 2, 31, 2
  010b390  fcmpu 0, 1, 2
  010b394  cror 6, 1, 2
  010b398  bt 6, 0x10b3dc
  010b39c  fmuls 1, 7, 7
  010b3a0  fmadds 1, 6, 6, 1
  010b3a4  fsqrts 1, 1
  010b3a8  fdivs 2, 28, 1
  010b3ac  fsub 3, 28, 1
  010b3b0  fsub 4, 28, 1
  010b3b4  fsub 5, 1, 28
  010b3b8  fsub 1, 1, 28
  010b3bc  fmuls 6, 6, 2
  010b3c0  fmuls 7, 7, 2
  010b3c4  fsel 2, 3, 28, 6
  010b3c8  fsel 3, 4, 28, 7
  010b3cc  fsel 6, 5, 2, 6
  010b3d0  fsel 7, 1, 3, 7
  010b3d4  stfs 6, 0(30)
  010b3d8  stfs 7, 4(30)
  010b3dc  lwz 3, 92(30)
  010b3e0  lfs 1, 92(30)
  010b3e4  srawi 4, 3, 31
  010b3e8  cmpwi 3, 0
  010b3ec  srwi 5, 4, 1
  010b3f0  xor 3, 5, 3
  010b3f4  subc 3, 3, 4
  010b3f8  bt 2, 0x10b460
  010b3fc  lis 4, 16512
  010b400  cmpw 3, 4
  010b404  bf 0, 0x10b430
  010b408  lis 4, 17
  010b40c  addi 4, 4, -20504
  010b410  lfs 2, 16(4)
  010b414  lfs 3, 8(30)
  010b418  fmuls 4, 6, 2
  010b41c  fmuls 5, 7, 2
  010b420  fmuls 2, 3, 2
  010b424  stfs 4, 0(30)
  010b428  stfs 5, 4(30)
  010b42c  stfs 2, 8(30)
  010b430  lis 4, 16608
  010b434  cmpw 3, 4
  010b438  bf 0, 0x10b460
  010b43c  lis 3, 17
  010b440  addi 3, 3, -20504
  010b444  lfs 2, 20(3)
  010b448  lfs 3, 16(30)
  010b44c  fadds 1, 1, 2
  010b450  stfs 1, 92(30)
  010b454  lfs 1, 24(3)
  010b458  fmuls 1, 3, 1
  010b45c  stfs 1, 16(30)
  010b460  lis 3, 17
  010b464  lwz 5, 16(31)
  010b468  lis 4, 16384
  010b46c  addi 3, 3, -20504
  010b470  srawi 6, 5, 31
  010b474  lfs 29, 28(3)
  010b478  srwi 3, 6, 1
  010b47c  xor 3, 3, 5
  010b480  subc 3, 3, 6
  010b484  cmpw 3, 4
  010b488  bt 0, 0x10b4fc
  010b48c  lis 4, 17535
  010b490  ori 4, 4, 16384
  010b494  cmpw 3, 4
  010b498  bt 1, 0x10b4fc
  010b49c  lwz 5, 20(31)
  010b4a0  lis 3, 17535
  010b4a4  srawi 6, 5, 31
  010b4a8  lis 4, 16384
  010b4ac  srwi 7, 6, 1
  010b4b0  ori 3, 3, 16384
  010b4b4  xor 5, 7, 5
  010b4b8  subc 5, 5, 6
  010b4bc  cmpw 1, 5, 3
  010b4c0  cmpw 5, 4
  010b4c4  cror 2, 0, 5
  010b4c8  bt 2, 0x10b4fc
  010b4cc  lwz 5, 24(31)
  010b4d0  lis 3, 17535
  010b4d4  srawi 6, 5, 31
  010b4d8  lis 4, 16384
  010b4dc  srwi 7, 6, 1
  010b4e0  ori 3, 3, 16384
  010b4e4  xor 5, 7, 5
  010b4e8  subc 5, 5, 6
  010b4ec  cmpw 5, 4
  010b4f0  cmpw 1, 5, 3
  010b4f4  bt 0, 0x10b4fc
  010b4f8  bf 5, 0x10b500
  010b4fc  li 26, 256
  010b500  lis 3, -16512
  010b504  lwz 4, 84(30)
  010b508  cmpw 4, 3
  010b50c  bt 2, 0x10b724
  010b510  lis 3, -16512
  010b514  lwz 4, 80(30)
  010b518  cmpw 4, 3
  010b51c  bt 2, 0x10b724
  010b520  lhz 3, 62(30)
  010b524  extsh 3, 3
  010b528  cmpwi 3, 0
  010b52c  cmpwi 1, 3, -1
  010b530  cmpwi 6, 3, 1
  010b534  cmpwi 7, 3, 2
  010b538  bt 1, 0x10b544
  010b53c  bf 5, 0x10b724
  010b540  b 0x10b550
  010b544  bf 25, 0x10b5e4
  010b548  bf 29, 0x10b71c
  010b54c  b 0x10b724
  010b550  lfs 1, 8(30)
  010b554  lfs 2, 16(30)
  010b558  fdivs 31, 1, 2
  010b55c  fabs 31, 31
  010b560  fcmpu 0, 31, 29
  010b564  cror 6, 0, 2
  010b568  bt 6, 0x10b724
  010b56c  ori 3, 31, 0
  010b570  bl 0xefe40
  010b574  nop
  010b578  lfs 2, 80(30)
  010b57c  fsubs 1, 2, 1
  010b580  fdivs 31, 1, 31
  010b584  fcmpu 0, 31, 28
  010b588  cror 6, 0, 2
  010b58c  bt 6, 0x10b724
  010b590  lis 3, 17
  010b594  lfs 2, 88(31)
  010b598  lis 4, 114
  010b59c  addi 3, 3, -20504
  010b5a0  fsubs 31, 31, 2
  010b5a4  lfs 1, 32(3)
  010b5a8  lfs 3, -3064(4)
  010b5ac  fmuls 1, 3, 1
  010b5b0  fcmpu 0, 31, 1
  010b5b4  cror 6, 0, 2
  010b5b8  bt 6, 0x10b5c4
  010b5bc  fmr 31, 1
  010b5c0  b 0x10b5d8
  010b5c4  fneg 1, 1
  010b5c8  fcmpu 0, 31, 1
  010b5cc  cror 6, 1, 2
  010b5d0  bt 6, 0x10b5d8
  010b5d4  fmr 31, 1
  010b5d8  fadds 1, 2, 31
  010b5dc  stfs 1, 88(31)
  010b5e0  b 0x10b724
  010b5e4  ori 3, 31, 0
  010b5e8  bl 0xefe40
  010b5ec  nop
  010b5f0  lfs 2, 84(30)
  010b5f4  fcmpu 0, 1, 2
  010b5f8  bt 0, 0x10b604
  010b5fc  stfs 28, 88(31)
  010b600  b 0x10b724
  010b604  lis 3, 17
  010b608  lfs 1, 16(30)
  010b60c  addic 6, 1, 272
  010b610  addi 3, 3, -20504
  010b614  addic 7, 1, 276
  010b618  lfs 2, 36(3)
  010b61c  lfs 4, 8(30)
  010b620  fmuls 1, 1, 2
  010b624  lfs 3, 24(31)
  010b628  fsubs 3, 3, 31
  010b62c  fsubs 2, 4, 1
  010b630  bl 0xfcb40
  010b634  cmpwi 3, 1
  010b638  bt 0, 0x10b668
  010b63c  lwz 3, 272(1)
  010b640  lfs 1, 272(1)
  010b644  srawi 4, 3, 31
  010b648  srwi 5, 4, 1
  010b64c  xor 3, 5, 3
  010b650  subc 3, 3, 4
  010b654  cmpwi 3, 0
  010b658  bf 1, 0x10b668
  010b65c  lis 4, 17008
  010b660  cmpw 3, 4
  010b664  bt 0, 0x10b678
  010b668  lis 3, 17
  010b66c  addi 3, 3, -20504
  010b670  lfs 1, 40(3)
  010b674  b 0x10b678
  010b678  lis 3, 17
  010b67c  addi 3, 3, -20504
  010b680  lfs 2, 44(3)
  010b684  ori 3, 31, 0
  010b688  fsub 3, 1, 2
  010b68c  fsel 31, 3, 1, 2
  010b690  bl 0xefe40
  010b694  nop
  010b698  lfs 2, 84(30)
  010b69c  fsubs 1, 2, 1
  010b6a0  lfs 2, 88(31)
  010b6a4  fdivs 1, 1, 31
  010b6a8  fcmpu 0, 1, 29
  010b6ac  cror 6, 0, 2
  010b6b0  bt 6, 0x10b6bc
  010b6b4  fmr 1, 29
  010b6b8  b 0x10b6cc
  010b6bc  fcmpu 0, 1, 28
  010b6c0  cror 6, 1, 2
  010b6c4  bt 6, 0x10b6cc
  010b6c8  fmr 1, 28
  010b6cc  lis 3, 17
  010b6d0  lis 4, 114
  010b6d4  fsubs 3, 1, 2
  010b6d8  addi 3, 3, -20504
  010b6dc  lfs 5, 32(3)
  010b6e0  lfs 4, -3064(4)
  010b6e4  fmuls 1, 4, 5
  010b6e8  fcmpu 0, 3, 1
  010b6ec  cror 6, 0, 2
  010b6f0  bt 6, 0x10b6fc
  010b6f4  fmr 3, 1
  010b6f8  b 0x10b710
  010b6fc  fneg 1, 1
  010b700  fcmpu 0, 3, 1
  010b704  cror 6, 1, 2
  010b708  bt 6, 0x10b710
  010b70c  fmr 3, 1
  010b710  fadds 1, 2, 3
  010b714  stfs 1, 88(31)
  010b718  b 0x10b724
  010b71c  lis 3, 16256
  010b720  stw 3, 88(31)
  010b724  lbz 6, 112(31)
  010b728  li 4, 0
  010b72c  lwz 7, 36(30)
  010b730  rlwinm 6, 6, 0, 30, 30
  010b734  ori 3, 26, 64
  010b738  subc 4, 4, 6
  010b73c  subc 5, 26, 3
  010b740  cntlzw 4, 4
  010b744  rlwinm 6, 7, 0, 29, 29
  010b748  sldi 4, 4, 58
  010b74c  cmpwi 6, 0
  010b750  sradi 4, 4, 63
  010b754  and 26, 4, 5
  010b758  addc 26, 3, 26
  010b75c  bf 2, 0x10b784
  010b760  lis 4, 17
  010b764  lfs 1, 64(30)
  010b768  lfs 4, 72(30)
  010b76c  ori 3, 31, 0
  010b770  addi 4, 4, -20504
  010b774  addic 5, 30, 68
  010b778  lfs 2, 48(4)
  010b77c  lfs 3, 52(4)
  010b780  bl 0xff2e8
  010b784  lfs 1, 16(31)
  010b788  lfs 2, 0(30)
  010b78c  lfs 4, 20(31)
  010b790  fadds 3, 1, 2
  010b794  lfs 5, 40(30)
  010b798  lfs 6, 24(31)
  010b79c  stfs 1, 112(1)
  010b7a0  lfs 1, 28(31)
  010b7a4  fadds 7, 6, 5
  010b7a8  fadds 2, 3, 2
  010b7ac  stfs 3, 16(31)
  010b7b0  lfs 8, 4(30)
  010b7b4  stfs 4, 116(1)
  010b7b8  fadds 9, 4, 8
  010b7bc  stfs 1, 124(1)
  010b7c0  stfs 7, 120(1)
  010b7c4  stfs 3, 144(1)
  010b7c8  stfs 1, 156(1)
  010b7cc  stfs 9, 20(31)
  010b7d0  lfs 3, 8(30)
  010b7d4  stfs 9, 148(1)
  010b7d8  fadds 4, 6, 3
  010b7dc  stfs 2, 160(1)
  010b7e0  fadds 6, 9, 8
  010b7e4  lwz 3, 32(30)
  010b7e8  stfs 1, 172(1)
  010b7ec  extsw 3, 3
  010b7f0  fadds 1, 4, 5
  010b7f4  stfs 4, 24(31)
  010b7f8  stfs 6, 164(1)
  010b7fc  fadds 2, 1, 3
  010b800  stfs 1, 152(1)
  010b804  stfs 2, 168(1)
  010b808  bl 0x502730
  010b80c  nop
  010b810  lis 3, 17
  010b814  li 5, 16
  010b818  addi 4, 3, -20504
  010b81c  addic 3, 1, 160
  010b820  ori 6, 31, 0
  010b824  li 7, 0
  010b828  lfs 2, 56(4)
  010b82c  fmuls 1, 1, 2
  010b830  bl 0x5e598
  010b834  nop
  010b838  ori 28, 3, 0
  010b83c  ori 29, 26, 0
  010b840  cmpwi 28, 0
  010b844  bf 1, 0x10b8f8
  010b848  lis 3, 17
  010b84c  lis 25, 161
  010b850  addi 3, 3, -20504
  010b854  ori 29, 26, 0
  010b858  addic 26, 31, 16
  010b85c  addic 25, 25, 18944
  010b860  lfs 31, 20(3)
  010b864  lwz 3, 0(25)
  010b868  cmpwi 3, 0
  010b86c  bt 2, 0x10b8c4
  010b870  lis 4, 164
  010b874  lwz 4, -28512(4)
  010b878  cmplw 3, 4
  010b87c  bt 0, 0x10b8c4
  010b880  lis 4, 164
  010b884  lwz 4, -28504(4)
  010b888  cmplw 3, 4
  010b88c  bt 1, 0x10b8c4
  010b890  lhz 4, 166(3)
  010b894  extsh 4, 4
  010b898  cmpwi 1, 4, 540
  010b89c  cmpwi 4, 500
  010b8a0  cror 2, 0, 5
  010b8a4  bt 2, 0x10b8c4
  010b8a8  fmr 1, 31
  010b8ac  ori 4, 31, 0
  010b8b0  lis 5, 1
  010b8b4  ori 7, 26, 0
  010b8b8  ori 8, 30, 0
  010b8bc  bl 0x105c08
  010b8c0  b 0x10b8e8
  010b8c4  lwz 3, 36(30)
  010b8c8  rlwinm 3, 3, 0, 26, 26
  010b8cc  cmpwi 3, 0
  010b8d0  bt 2, 0x10b8e8
  010b8d4  lhz 3, 62(30)
  010b8d8  cmpwi 3, 2
  010b8dc  bf 2, 0x10b8e8
  010b8e0  ori 29, 29, 256
  010b8e4  extsw 29, 29
  010b8e8  addic 27, 27, 1
  010b8ec  addic 25, 25, 4
  010b8f0  cmpw 27, 28
  010b8f4  bt 0, 0x10b864
  010b8f8  lfs 1, 4(30)
  010b8fc  lfs 2, 0(30)
  010b900  fmuls 1, 1, 1
  010b904  lfs 3, 8(30)
  010b908  lwz 3, 32(30)
  010b90c  extsw 3, 3
  010b910  std 3, 280(1)
  010b914  fmadds 1, 2, 2, 1
  010b918  lis 3, 17
  010b91c  addi 3, 3, -20504
  010b920  fmadds 1, 3, 3, 1
  010b924  lfd 2, 280(1)
  010b928  fsqrts 1, 1
  010b92c  lfs 31, 60(3)
  010b930  fcfid 2, 2
  010b934  frsp 2, 2
  010b938  fmuls 2, 2, 31
  010b93c  fcmpu 0, 1, 2
  010b940  cror 6, 0, 2
  010b944  bt 6, 0x10b994
  010b948  addic 3, 1, 112
  010b94c  addic 4, 1, 144
  010b950  li 5, 36
  010b954  ori 6, 31, 0
  010b958  li 7, 0
  010b95c  bl 0x57820
  010b960  nop
  010b964  cmpwi 3, 0
  010b968  bt 2, 0x10b994
  010b96c  lis 3, 161
  010b970  addic 3, 3, 2368
  010b974  lfs 1, 32(3)
  010b978  lfs 2, 36(3)
  010b97c  stfs 1, 144(1)
  010b980  lfs 1, 40(3)
  010b984  stfs 2, 148(1)
  010b988  lfs 2, 44(3)
  010b98c  stfs 1, 152(1)
  010b990  stfs 2, 156(1)
  010b994  lwz 3, 32(30)
  010b998  extsw 3, 3
  010b99c  bl 0x502730
  010b9a0  nop
  010b9a4  fmuls 1, 1, 31
  010b9a8  addic 3, 1, 144
  010b9ac  li 5, 36
  010b9b0  ori 6, 31, 0
  010b9b4  bl 0x59e20
  010b9b8  nop
  010b9bc  lfs 4, 8(30)
  010b9c0  lfs 31, 0(30)
  010b9c4  cmpwi 3, 0
  010b9c8  lfs 1, 4(30)
  010b9cc  lhz 4, 62(30)
  010b9d0  lfs 2, 16(30)
  010b9d4  lfs 3, 48(30)
  010b9d8  bt 2, 0x10bc8c
  010b9dc  lis 3, 161
  010b9e0  addic 3, 3, 2368
  010b9e4  lfs 5, 48(3)
  010b9e8  stfs 5, 16(31)
  010b9ec  lfs 5, 52(3)
  010b9f0  stfs 5, 20(31)
  010b9f4  lfs 5, 60(3)
  010b9f8  lfs 6, 56(3)
  010b9fc  stfs 5, 28(31)
  010ba00  lfs 5, 40(30)
  010ba04  fsubs 5, 6, 5
  010ba08  fmr 6, 28
  010ba0c  ori 29, 29, 2
  010ba10  extsw 29, 29
  010ba14  stfs 5, 24(31)
  010ba18  lfs 10, 68(3)
  010ba1c  lfs 9, 64(3)
  010ba20  fmuls 5, 10, 10
  010ba24  lfs 11, 72(3)
  010ba28  fmr 7, 6
  010ba2c  fmadds 5, 9, 9, 5
  010ba30  fmr 8, 7
  010ba34  fmadds 5, 11, 11, 5
  010ba38  fsqrts 12, 5
  010ba3c  fcmpu 0, 12, 8
  010ba40  bt 2, 0x10ba90
  010ba44  frsqrte 6, 5
  010ba48  lis 5, 17
  010ba4c  addi 5, 5, -20504
  010ba50  lfs 7, 20(5)
  010ba54  fmuls 8, 5, 6
  010ba58  fmuls 12, 30, 6
  010ba5c  fnmsubs 8, 8, 6, 7
  010ba60  fmadds 6, 8, 12, 6
  010ba64  fmuls 8, 5, 6
  010ba68  fmuls 12, 30, 6
  010ba6c  fnmsubs 8, 8, 6, 7
  010ba70  fmadds 6, 8, 12, 6
  010ba74  fmuls 5, 5, 6
  010ba78  fmuls 8, 30, 6
  010ba7c  fnmsubs 5, 5, 6, 7
  010ba80  fmadds 8, 5, 8, 6
  010ba84  fmuls 6, 9, 8
  010ba88  fmuls 7, 10, 8
  010ba8c  fmuls 8, 11, 8
  010ba90  lis 5, 17
  010ba94  addi 5, 5, -20504
  010ba98  lfs 5, 64(5)
  010ba9c  fcmpu 0, 8, 5
  010baa0  bt 0, 0x10bbf4
  010baa4  fmuls 3, 1, 7
  010baa8  fmadds 3, 31, 6, 3
  010baac  fmadds 3, 4, 8, 3
  010bab0  fcmpu 0, 3, 28
  010bab4  cror 6, 1, 2
  010bab8  bt 6, 0x10bc8c
  010babc  lwz 6, 24(3)
  010bac0  ori 5, 29, 1
  010bac4  cmpwi 6, 0
  010bac8  bf 2, 0x10badc
  010bacc  li 4, 2
  010bad0  ori 29, 5, 0
  010bad4  sth 4, 62(30)
  010bad8  b 0x10baf4
  010badc  lwz 3, 28(3)
  010bae0  cmpwi 3, 0
  010bae4  bf 1, 0x10baf4
  010bae8  li 4, 2
  010baec  ori 29, 5, 0
  010baf0  sth 4, 62(30)
  010baf4  fmuls 5, 7, 7
  010baf8  cmpwi 4, 2
  010bafc  fmadds 5, 6, 6, 5
  010bb00  fmadds 5, 8, 8, 5
  010bb04  fsqrts 5, 5
  010bb08  fdivs 3, 3, 5
  010bb0c  fsub 9, 28, 5
  010bb10  fsub 10, 28, 5
  010bb14  fsub 11, 28, 5
  010bb18  fsub 12, 5, 28
  010bb1c  fsub 13, 5, 28
  010bb20  fsub 5, 5, 28
  010bb24  fmuls 8, 8, 3
  010bb28  fmuls 7, 7, 3
  010bb2c  fmuls 3, 6, 3
  010bb30  fsel 6, 9, 28, 8
  010bb34  fsel 9, 10, 28, 7
  010bb38  fsel 10, 11, 28, 3
  010bb3c  fsel 6, 12, 6, 8
  010bb40  fsel 7, 13, 9, 7
  010bb44  fsel 3, 5, 10, 3
  010bb48  fsubs 4, 4, 6
  010bb4c  fsubs 1, 1, 7
  010bb50  fsubs 6, 31, 3
  010bb54  stfs 4, 8(30)
  010bb58  stfs 1, 4(30)
  010bb5c  stfs 6, 0(30)
  010bb60  bf 2, 0x10bc8c
  010bb64  fmuls 3, 1, 1
  010bb68  fmadds 3, 6, 6, 3
  010bb6c  fmadds 3, 4, 4, 3
  010bb70  fsqrts 3, 3
  010bb74  fneg 5, 3
  010bb78  fcmpu 0, 5, 2
  010bb7c  cror 6, 0, 2
  010bb80  bt 6, 0x10bb8c
  010bb84  fmr 5, 2
  010bb88  b 0x10bba0
  010bb8c  fneg 2, 2
  010bb90  fcmpu 0, 5, 2
  010bb94  cror 6, 1, 2
  010bb98  bt 6, 0x10bba0
  010bb9c  fmr 5, 2
  010bba0  fadds 2, 5, 3
  010bba4  fsub 5, 28, 3
  010bba8  fsub 7, 28, 3
  010bbac  fsub 8, 28, 3
  010bbb0  fsub 9, 3, 28
  010bbb4  fsub 10, 3, 28
  010bbb8  fdivs 2, 2, 3
  010bbbc  fsub 3, 3, 28
  010bbc0  fmuls 6, 6, 2
  010bbc4  fmuls 1, 1, 2
  010bbc8  fmuls 4, 4, 2
  010bbcc  fsel 2, 5, 28, 6
  010bbd0  fsel 5, 7, 28, 1
  010bbd4  fsel 7, 8, 28, 4
  010bbd8  fsel 2, 9, 2, 6
  010bbdc  fsel 1, 10, 5, 1
  010bbe0  fsel 4, 3, 7, 4
  010bbe4  stfs 2, 0(30)
  010bbe8  stfs 1, 4(30)
  010bbec  stfs 4, 8(30)
  010bbf0  b 0x10bc8c
  010bbf4  fmuls 2, 1, 7
  010bbf8  fmadds 2, 31, 6, 2
  010bbfc  fmadds 2, 4, 8, 2
  010bc00  fcmpu 0, 2, 28
  010bc04  cror 6, 1, 2
  010bc08  bt 6, 0x10bc8c
  010bc0c  fmuls 5, 7, 7
  010bc10  lis 3, 17
  010bc14  addi 3, 3, -20504
  010bc18  fmadds 5, 6, 6, 5
  010bc1c  lfs 9, 20(3)
  010bc20  fadds 3, 3, 9
  010bc24  fmadds 5, 8, 8, 5
  010bc28  fmuls 2, 2, 3
  010bc2c  fsqrts 5, 5
  010bc30  fneg 2, 2
  010bc34  fdivs 2, 2, 5
  010bc38  fsub 3, 28, 5
  010bc3c  fsub 9, 28, 5
  010bc40  fsub 10, 28, 5
  010bc44  fsub 11, 5, 28
  010bc48  fsub 12, 5, 28
  010bc4c  fsub 5, 5, 28
  010bc50  fmuls 8, 8, 2
  010bc54  fmuls 7, 7, 2
  010bc58  fmuls 2, 6, 2
  010bc5c  fsel 3, 3, 28, 8
  010bc60  fsel 6, 9, 28, 7
  010bc64  fsel 9, 10, 28, 2
  010bc68  fsel 3, 11, 3, 8
  010bc6c  fsel 6, 12, 6, 7
  010bc70  fsel 2, 5, 9, 2
  010bc74  fadds 4, 4, 3
  010bc78  fadds 1, 1, 6
  010bc7c  fadds 2, 31, 2
  010bc80  stfs 4, 8(30)
  010bc84  stfs 1, 4(30)
  010bc88  stfs 2, 0(30)
  010bc8c  fcmpu 1, 4, 28
  010bc90  cmpwi 4, 0
  010bc94  crnand 2, 2, 4
  010bc98  bt 2, 0x10bca4
  010bc9c  li 3, 1
  010bca0  sth 3, 62(30)
  010bca4  ori 3, 29, 0
  010bca8  ld 0, 400(1)
  010bcac  mtlr 0
  010bcb0  lfd 28, 352(1)
  010bcb4  lfd 29, 360(1)
  010bcb8  lfd 30, 368(1)
  010bcbc  lfd 31, 376(1)
  010bcc0  ld 25, 296(1)
  010bcc4  ld 26, 304(1)
  010bcc8  ld 27, 312(1)
  010bccc  ld 28, 320(1)
  010bcd0  ld 29, 328(1)
  010bcd4  ld 30, 336(1)
  010bcd8  ld 31, 344(1)
  010bcdc  addi 1, 1, 384
  010bce0  blr

MB_MtxToQuat:   # 0x10bcf0, 0x2a8 bytes
  010bcf0  stdu 1, -112(1)
  010bcf4  lis 5, 17
  010bcf8  addi 7, 5, -17180
  010bcfc  lwz 5, 0(4)
  010bd00  lwz 6, 20(4)
  010bd04  lfs 5, 0(4)
  010bd08  srawi 9, 5, 31
  010bd0c  lfs 4, 20(4)
  010bd10  srawi 12, 6, 31
  010bd14  lfs 2, 0(7)
  010bd18  srwi 10, 9, 1
  010bd1c  fadds 7, 5, 4
  010bd20  lwz 8, 40(4)
  010bd24  lfs 3, 40(4)
  010bd28  xor 5, 10, 5
  010bd2c  srawi 11, 8, 31
  010bd30  lfs 1, 4(7)
  010bd34  srwi 10, 12, 1
  010bd38  std 31, 104(1)
  010bd3c  lfs 6, 8(7)
  010bd40  srwi 31, 11, 1
  010bd44  xor 6, 10, 6
  010bd48  xor 8, 31, 8
  010bd4c  subc 5, 5, 9
  010bd50  subc 6, 6, 12
  010bd54  fadds 7, 7, 3
  010bd58  subc 7, 8, 11
  010bd5c  fcmpu 0, 7, 2
  010bd60  cror 6, 0, 2
  010bd64  bt 6, 0x10bdbc
  010bd68  fadds 2, 7, 6
  010bd6c  fsqrts 2, 2
  010bd70  fdivs 3, 1, 2
  010bd74  fmuls 1, 2, 1
  010bd78  stfs 1, 12(3)
  010bd7c  lfs 1, 36(4)
  010bd80  lfs 2, 24(4)
  010bd84  fsubs 1, 1, 2
  010bd88  fmuls 1, 1, 3
  010bd8c  stfs 1, 0(3)
  010bd90  lfs 1, 8(4)
  010bd94  lfs 2, 32(4)
  010bd98  fsubs 1, 1, 2
  010bd9c  fmuls 1, 1, 3
  010bda0  stfs 1, 4(3)
  010bda4  lfs 1, 16(4)
  010bda8  lfs 2, 4(4)
  010bdac  fsubs 1, 1, 2
  010bdb0  fmuls 1, 1, 3
  010bdb4  stfs 1, 8(3)
  010bdb8  b 0x10bf8c
  010bdbc  extsw 6, 6
  010bdc0  extsw 5, 5
  010bdc4  lfs 7, 4(4)
  010bdc8  stfs 5, 60(1)
  010bdcc  subc 5, 5, 6
  010bdd0  lfs 5, 8(4)
  010bdd4  li 9, 2
  010bdd8  rldicl 5, 5, 1, 63
  010bddc  stfs 7, 64(1)
  010bde0  lfs 7, 16(4)
  010bde4  addc 6, 5, 5
  010bde8  stfs 5, 68(1)
  010bdec  slwi 8, 5, 2
  010bdf0  addc 6, 5, 6
  010bdf4  lfs 5, 24(4)
  010bdf8  stfs 7, 72(1)
  010bdfc  sldi 6, 6, 2
  010be00  stfs 4, 76(1)
  010be04  addc 6, 1, 6
  010be08  lfs 4, 32(4)
  010be0c  stfs 5, 80(1)
  010be10  addc 6, 6, 8
  010be14  lfs 5, 36(4)
  010be18  stfs 4, 84(1)
  010be1c  clrldi 4, 6, 32
  010be20  stfs 5, 88(1)
  010be24  extsw 6, 7
  010be28  stfs 3, 92(1)
  010be2c  lwz 4, 60(4)
  010be30  srawi 7, 4, 31
  010be34  srwi 8, 7, 1
  010be38  xor 4, 8, 4
  010be3c  li 8, 2
  010be40  subc 4, 4, 7
  010be44  subc 7, 9, 5
  010be48  extsw 4, 4
  010be4c  subc 4, 4, 6
  010be50  li 6, 0
  010be54  sradi 4, 4, 63
  010be58  and 4, 4, 7
  010be5c  stw 6, 56(1)
  010be60  addc 4, 5, 4
  010be64  stw 8, 52(1)
  010be68  ori 6, 1, 0
  010be6c  li 5, 1
  010be70  rlwimi 6, 4, 2, 28, 29
  010be74  addc 9, 4, 4
  010be78  clrldi 6, 6, 32
  010be7c  stw 5, 48(1)
  010be80  lwz 5, 48(6)
  010be84  slwi 6, 5, 2
  010be88  addc 8, 5, 5
  010be8c  addc 7, 1, 6
  010be90  addc 5, 5, 8
  010be94  clrldi 7, 7, 32
  010be98  slwi 8, 4, 2
  010be9c  addc 4, 4, 9
  010bea0  sldi 5, 5, 2
  010bea4  sldi 4, 4, 2
  010bea8  lwz 7, 48(7)
  010beac  addc 5, 1, 5
  010beb0  addc 4, 1, 4
  010beb4  addc 10, 7, 7
  010beb8  slwi 11, 7, 2
  010bebc  addc 7, 7, 10
  010bec0  addc 9, 5, 6
  010bec4  sldi 7, 7, 2
  010bec8  addc 10, 4, 8
  010becc  addc 7, 1, 7
  010bed0  clrldi 9, 9, 32
  010bed4  addc 12, 7, 11
  010bed8  clrldi 10, 10, 32
  010bedc  clrldi 12, 12, 32
  010bee0  lfs 3, 60(9)
  010bee4  lfs 4, 60(10)
  010bee8  lfs 5, 60(12)
  010beec  fadds 3, 3, 5
  010bef0  addc 9, 7, 6
  010bef4  addc 10, 5, 8
  010bef8  clrldi 9, 9, 32
  010befc  addc 5, 5, 11
  010bf00  addc 12, 4, 6
  010bf04  clrldi 10, 10, 32
  010bf08  clrldi 5, 5, 32
  010bf0c  fsubs 3, 4, 3
  010bf10  lfs 4, 60(9)
  010bf14  clrldi 9, 12, 32
  010bf18  lfs 5, 60(10)
  010bf1c  addc 4, 4, 11
  010bf20  addc 7, 7, 8
  010bf24  clrldi 4, 4, 32
  010bf28  fadds 3, 3, 6
  010bf2c  lfs 6, 60(5)
  010bf30  lfs 7, 60(9)
  010bf34  clrldi 5, 7, 32
  010bf38  fadds 5, 5, 7
  010bf3c  lfs 8, 60(4)
  010bf40  fsubs 4, 4, 6
  010bf44  fsqrts 3, 3
  010bf48  lfs 9, 60(5)
  010bf4c  extsw 4, 6
  010bf50  extsw 5, 11
  010bf54  fadds 6, 9, 8
  010bf58  fdivs 7, 1, 3
  010bf5c  fmuls 1, 3, 1
  010bf60  fsub 8, 2, 3
  010bf64  fsub 2, 3, 2
  010bf68  stfsx 1, 3, 8
  010bf6c  fsel 1, 8, 3, 7
  010bf70  fsel 1, 2, 1, 7
  010bf74  fmuls 2, 4, 1
  010bf78  fmuls 3, 5, 1
  010bf7c  fmuls 1, 6, 1
  010bf80  stfs 2, 12(3)
  010bf84  stfsx 3, 3, 4
  010bf88  stfsx 1, 3, 5
  010bf8c  ld 31, 104(1)
  010bf90  addi 1, 1, 112
  010bf94  blr

MB_TransformToQuat:   # 0x10bf98, 0x68 bytes
  010bf98  stdu 1, -208(1)
  010bf9c  mflr 0
  010bfa0  std 0, 224(1)
  010bfa4  std 30, 192(1)
  010bfa8  std 29, 184(1)
  010bfac  addic 30, 1, 112
  010bfb0  std 31, 200(1)
  010bfb4  ori 29, 3, 0
  010bfb8  ori 31, 4, 0
  010bfbc  ori 3, 30, 0
  010bfc0  bl 0x500f6c
  010bfc4  nop
  010bfc8  ori 3, 29, 0
  010bfcc  ori 4, 30, 0
  010bfd0  bl 0x10bcf0
  010bfd4  ori 3, 31, 0
  010bfd8  ori 4, 30, 0
  010bfdc  bl 0x500fa8
  010bfe0  nop
  010bfe4  ld 0, 224(1)
  010bfe8  mtlr 0
  010bfec  ld 29, 184(1)
  010bff0  ld 30, 192(1)
  010bff4  ld 31, 200(1)
  010bff8  addi 1, 1, 208
  010bffc  blr

MB_CopyHeroLights:   # 0x10c000, 0x18 bytes
  010c000  lis 4, 151
  010c004  addic 4, 4, -25376
  010c008  lwz 4, 8320(4)
  010c00c  ld 4, 56(4)
  010c010  std 4, 56(3)
  010c014  blr

MB_AxisAngleToQuat:   # 0x10c038, 0xd4 bytes
  010c038  lis 5, 17
  010c03c  addi 5, 5, -16360
  010c040  lfs 2, 0(5)
  010c044  lfs 3, 4(5)
  010c048  fmuls 1, 1, 2
  010c04c  lfs 4, 8(5)
  010c050  lfs 6, 12(5)
  010c054  fsubs 2, 3, 1
  010c058  fsubs 5, 4, 1
  010c05c  fsub 7, 1, 2
  010c060  fsel 2, 7, 2, 1
  010c064  lfs 7, 16(5)
  010c068  fsub 8, 5, 2
  010c06c  fsel 2, 8, 5, 2
  010c070  lfs 5, 20(5)
  010c074  lfs 8, 24(5)
  010c078  lfs 9, 0(4)
  010c07c  fmuls 10, 2, 2
  010c080  fmuls 11, 10, 2
  010c084  fmuls 12, 10, 11
  010c088  fmadds 2, 11, 6, 2
  010c08c  fmuls 11, 10, 12
  010c090  fmadds 2, 12, 7, 2
  010c094  fmuls 10, 10, 11
  010c098  fmadds 2, 11, 5, 2
  010c09c  fmadds 2, 10, 8, 2
  010c0a0  fmuls 9, 9, 2
  010c0a4  stfs 9, 0(3)
  010c0a8  lfs 9, 4(4)
  010c0ac  fmuls 9, 9, 2
  010c0b0  stfs 9, 4(3)
  010c0b4  lfs 9, 8(4)
  010c0b8  fmuls 2, 9, 2
  010c0bc  stfs 2, 8(3)
  010c0c0  lfs 2, 28(5)
  010c0c4  fadds 1, 1, 2
  010c0c8  fsubs 2, 3, 1
  010c0cc  fsubs 3, 4, 1
  010c0d0  fsub 4, 1, 2
  010c0d4  fsel 1, 4, 2, 1
  010c0d8  fsub 2, 3, 1
  010c0dc  fsel 1, 2, 3, 1
  010c0e0  fmuls 2, 1, 1
  010c0e4  fmuls 3, 2, 1
  010c0e8  fmuls 4, 2, 3
  010c0ec  fmadds 1, 3, 6, 1
  010c0f0  fmuls 3, 2, 4
  010c0f4  fmadds 1, 4, 7, 1
  010c0f8  fmuls 2, 2, 3
  010c0fc  fmadds 1, 3, 5, 1
  010c100  fmadds 1, 2, 8, 1
  010c104  stfs 1, 12(3)
  010c108  blr

???_MB_ClampVecToPlanes:   # 0x10c110, 0xd0 bytes
  010c110  stdu 1, -64(1)
  010c114  lis 6, 17
  010c118  li 7, 64
  010c11c  addi 6, 6, -16116
  010c120  addc 8, 1, 7
  010c124  lfs 5, 0(6)
  010c128  std 3, 48(8)
  010c12c  ori 6, 5, 0
  010c130  std 4, 56(8)
  010c134  addic 3, 7, 48
  010c138  lfs 3, 52(8)
  010c13c  li 7, 0
  010c140  addc 4, 1, 3
  010c144  lfs 1, 60(8)
  010c148  lfs 4, 48(8)
  010c14c  addic 3, 1, 48
  010c150  clrldi 4, 4, 32
  010c154  lfs 2, 56(8)
  010c158  lwz 8, 0(6)
  010c15c  cmpwi 8, 0
  010c160  bf 0, 0x10c1c0
  010c164  lfs 6, 0(5)
  010c168  lfs 7, 4(5)
  010c16c  fsubs 6, 6, 4
  010c170  lfs 8, 8(5)
  010c174  fsubs 7, 7, 3
  010c178  lfs 9, 12(5)
  010c17c  fsubs 8, 8, 2
  010c180  stfs 9, 60(1)
  010c184  stfs 6, 48(1)
  010c188  stfs 7, 52(1)
  010c18c  stfs 8, 56(1)
  010c190  lfs 9, 0(4)
  010c194  lfs 10, 0(3)
  010c198  fsubs 9, 9, 5
  010c19c  stfs 1, 12(5)
  010c1a0  fdivs 9, 9, 10
  010c1a4  fabs 9, 9
  010c1a8  fmadds 6, 6, 9, 4
  010c1ac  fmadds 7, 7, 9, 3
  010c1b0  fmadds 8, 8, 9, 2
  010c1b4  stfs 6, 0(5)
  010c1b8  stfs 7, 4(5)
  010c1bc  stfs 8, 8(5)
  010c1c0  addic 7, 7, 1
  010c1c4  addic 4, 4, 4
  010c1c8  cmpwi 7, 3
  010c1cc  addic 3, 3, 4
  010c1d0  addic 6, 6, 4
  010c1d4  bt 0, 0x10c158
  010c1d8  addi 1, 1, 64
  010c1dc  blr

MB_MtxToEuler:   # 0x10c1e8, 0x618 bytes
  010c1e8  stdu 1, -464(1)
  010c1ec  mflr 0
  010c1f0  std 0, 480(1)
  010c1f4  stfd 28, 432(1)
  010c1f8  stfd 29, 440(1)
  010c1fc  stfd 30, 448(1)
  010c200  stfd 31, 456(1)
  010c204  li 5, 16
  010c208  lvx 2, 0, 3
  010c20c  li 6, 32
  010c210  li 7, 192
  010c214  li 8, 48
  010c218  lvx 3, 5, 3
  010c21c  li 5, 208
  010c220  li 0, 384
  010c224  li 9, 224
  010c228  stvx 2, 1, 0
  010c22c  lvx 4, 6, 3
  010c230  li 6, 240
  010c234  lvx 5, 8, 3
  010c238  stvx 2, 7, 1
  010c23c  lis 3, 17
  010c240  stvx 3, 5, 1
  010c244  stvx 4, 9, 1
  010c248  vspltw 3, 2, 1
  010c24c  li 5, 268
  010c250  stvx 5, 6, 1
  010c254  addi 3, 3, -15904
  010c258  li 6, 272
  010c25c  lfs 1, 384(1)
  010c260  li 0, 384
  010c264  vspltw 4, 2, 0
  010c268  fabs 2, 1
  010c26c  vspltw 2, 2, 1
  010c270  std 30, 416(1)
  010c274  lis 7, 16256
  010c278  lis 30, 115
  010c27c  stvx 3, 1, 0
  010c280  lfs 28, 0(3)
  010c284  lfs 1, 384(1)
  010c288  stvewx 4, 5, 1
  010c28c  fabs 3, 1
  010c290  stvewx 2, 6, 1
  010c294  li 6, 0
  010c298  lwz 5, 268(1)
  010c29c  lfs 1, 268(1)
  010c2a0  addic 30, 30, 22784
  010c2a4  fabs 1, 1
  010c2a8  stw 6, 248(1)
  010c2ac  stw 6, 244(1)
  010c2b0  stw 6, 240(1)
  010c2b4  std 31, 424(1)
  010c2b8  stw 7, 252(1)
  010c2bc  ori 31, 4, 0
  010c2c0  fsubs 4, 2, 3
  010c2c4  stfs 4, 276(1)
  010c2c8  lwz 6, 272(1)
  010c2cc  lfs 4, 272(1)
  010c2d0  lfs 30, 4(3)
  010c2d4  rlwinm 6, 6, 3, 29, 29
  010c2d8  lwz 3, 276(1)
  010c2dc  lfs 5, 276(1)
  010c2e0  rlwimi 6, 3, 2, 30, 30
  010c2e4  fabs 4, 4
  010c2e8  fsub 6, 5, 28
  010c2ec  ori 3, 30, 0
  010c2f0  fsub 5, 5, 28
  010c2f4  rlwimi 6, 5, 4, 28, 28
  010c2f8  rlwimi 3, 6, 2, 26, 28
  010c2fc  slwi 4, 6, 2
  010c300  clrldi 3, 3, 32
  010c304  lfsx 31, 30, 4
  010c308  fsel 3, 6, 1, 3
  010c30c  lfs 1, 4(3)
  010c310  fsel 2, 5, 4, 2
  010c314  std 29, 408(1)
  010c318  fcmpu 0, 3, 28
  010c31c  bt 1, 0x10c328
  010c320  fmr 31, 28
  010c324  b 0x10c440
  010c328  fsubs 4, 2, 3
  010c32c  fadds 2, 2, 3
  010c330  addic 3, 1, 16
  010c334  li 7, 2
  010c338  addic 5, 3, 344
  010c33c  addic 4, 3, 328
  010c340  mtctr 7
  010c344  fdivs 2, 4, 2
  010c348  fmuls 3, 2, 2
  010c34c  stfs 2, 356(1)
  010c350  stfs 2, 348(1)
  010c354  stfs 2, 352(1)
  010c358  stfs 2, 344(1)
  010c35c  lfs 5, 356(1)
  010c360  lfs 6, 348(1)
  010c364  lfs 7, 352(1)
  010c368  fmuls 4, 3, 3
  010c36c  fmuls 6, 6, 3
  010c370  fmuls 5, 5, 4
  010c374  fmuls 2, 4, 4
  010c378  fmuls 4, 7, 4
  010c37c  stfs 6, 348(1)
  010c380  fmuls 3, 5, 3
  010c384  stfs 4, 352(1)
  010c388  stfs 3, 356(1)
  010c38c  lfs 3, 328(3)
  010c390  fmuls 3, 3, 2
  010c394  stfs 3, 344(3)
  010c398  lfs 3, 4(4)
  010c39c  addic 4, 4, 8
  010c3a0  fmuls 3, 3, 2
  010c3a4  addic 3, 3, 8
  010c3a8  stfs 3, 4(5)
  010c3ac  addic 5, 5, 8
  010c3b0  bdnz 0x10c38c
  010c3b4  li 5, 4
  010c3b8  ori 3, 1, 0
  010c3bc  mtctr 5
  010c3c0  lis 4, 115
  010c3c4  addic 5, 3, 344
  010c3c8  addic 4, 4, 22752
  010c3cc  ori 6, 5, 0
  010c3d0  lfs 2, 344(3)
  010c3d4  lfs 3, 0(4)
  010c3d8  fmuls 2, 2, 3
  010c3dc  lfs 3, 4(4)
  010c3e0  addic 4, 4, 8
  010c3e4  stfs 2, 344(3)
  010c3e8  lfs 2, 4(5)
  010c3ec  addic 3, 3, 8
  010c3f0  fmuls 2, 2, 3
  010c3f4  stfs 2, 4(5)
  010c3f8  addic 5, 5, 8
  010c3fc  bdnz 0x10c3d0
  010c400  ori 3, 1, 0
  010c404  fmr 2, 28
  010c408  mtctr 7
  010c40c  lfs 3, 344(3)
  010c410  fadds 2, 2, 3
  010c414  lfs 3, 4(6)
  010c418  addic 3, 3, 16
  010c41c  lfs 4, 8(6)
  010c420  lfs 5, 12(6)
  010c424  addic 6, 6, 16
  010c428  fadds 2, 2, 3
  010c42c  fadds 2, 2, 4
  010c430  fadds 2, 2, 5
  010c434  bdnz 0x10c40c
  010c438  fadds 2, 2, 30
  010c43c  fmadds 31, 2, 31, 1
  010c440  fneg 1, 31
  010c444  li 3, 0
  010c448  addic 29, 1, 128
  010c44c  addic 4, 1, 112
  010c450  stw 3, 112(1)
  010c454  stw 3, 116(1)
  010c458  ori 3, 29, 0
  010c45c  stfs 1, 120(1)
  010c460  bl 0x500ca4
  010c464  nop
  010c468  addic 3, 1, 192
  010c46c  ori 4, 29, 0
  010c470  ori 5, 3, 0
  010c474  bl 0x50162c
  010c478  nop
  010c47c  lfs 1, 200(1)
  010c480  lwz 3, 192(1)
  010c484  fneg 1, 1
  010c488  lfs 2, 192(1)
  010c48c  fabs 2, 2
  010c490  fabs 3, 1
  010c494  stfs 1, 260(1)
  010c498  fsubs 1, 2, 3
  010c49c  stfs 1, 264(1)
  010c4a0  lwz 4, 260(1)
  010c4a4  lfs 1, 260(1)
  010c4a8  lwz 5, 264(1)
  010c4ac  fabs 4, 1
  010c4b0  rlwinm 4, 4, 3, 29, 29
  010c4b4  lfs 1, 264(1)
  010c4b8  rlwimi 4, 5, 2, 30, 30
  010c4bc  fsub 5, 1, 28
  010c4c0  fsub 6, 1, 28
  010c4c4  rlwimi 4, 3, 4, 28, 28
  010c4c8  ori 3, 30, 0
  010c4cc  rlwimi 3, 4, 2, 26, 28
  010c4d0  slwi 4, 4, 2
  010c4d4  clrldi 3, 3, 32
  010c4d8  fsel 3, 5, 2, 3
  010c4dc  lfsx 29, 30, 4
  010c4e0  fsel 2, 6, 4, 2
  010c4e4  lfs 1, 4(3)
  010c4e8  fcmpu 0, 3, 28
  010c4ec  bt 1, 0x10c4f8
  010c4f0  fmr 29, 28
  010c4f4  b 0x10c610
  010c4f8  fsubs 4, 2, 3
  010c4fc  fadds 2, 2, 3
  010c500  addic 3, 1, 16
  010c504  li 7, 2
  010c508  addic 5, 3, 312
  010c50c  addic 4, 3, 296
  010c510  mtctr 7
  010c514  fdivs 2, 4, 2
  010c518  fmuls 3, 2, 2
  010c51c  stfs 2, 324(1)
  010c520  stfs 2, 316(1)
  010c524  stfs 2, 320(1)
  010c528  stfs 2, 312(1)
  010c52c  lfs 5, 324(1)
  010c530  lfs 6, 316(1)
  010c534  lfs 7, 320(1)
  010c538  fmuls 4, 3, 3
  010c53c  fmuls 6, 6, 3
  010c540  fmuls 5, 5, 4
  010c544  fmuls 2, 4, 4
  010c548  fmuls 4, 7, 4
  010c54c  stfs 6, 316(1)
  010c550  fmuls 3, 5, 3
  010c554  stfs 4, 320(1)
  010c558  stfs 3, 324(1)
  010c55c  lfs 3, 296(3)
  010c560  fmuls 3, 3, 2
  010c564  stfs 3, 312(3)
  010c568  lfs 3, 4(4)
  010c56c  addic 4, 4, 8
  010c570  fmuls 3, 3, 2
  010c574  addic 3, 3, 8
  010c578  stfs 3, 4(5)
  010c57c  addic 5, 5, 8
  010c580  bdnz 0x10c55c
  010c584  li 5, 4
  010c588  ori 3, 1, 0
  010c58c  mtctr 5
  010c590  lis 4, 115
  010c594  addic 5, 3, 312
  010c598  addic 4, 4, 22752
  010c59c  ori 6, 5, 0
  010c5a0  lfs 2, 312(3)
  010c5a4  lfs 3, 0(4)
  010c5a8  fmuls 2, 2, 3
  010c5ac  lfs 3, 4(4)
  010c5b0  addic 4, 4, 8
  010c5b4  stfs 2, 312(3)
  010c5b8  lfs 2, 4(5)
  010c5bc  addic 3, 3, 8
  010c5c0  fmuls 2, 2, 3
  010c5c4  stfs 2, 4(5)
  010c5c8  addic 5, 5, 8
  010c5cc  bdnz 0x10c5a0
  010c5d0  ori 3, 1, 0
  010c5d4  fmr 2, 28
  010c5d8  mtctr 7
  010c5dc  lfs 3, 312(3)
  010c5e0  fadds 2, 2, 3
  010c5e4  lfs 3, 4(6)
  010c5e8  addic 3, 3, 16
  010c5ec  lfs 4, 8(6)
  010c5f0  lfs 5, 12(6)
  010c5f4  addic 6, 6, 16
  010c5f8  fadds 2, 2, 3
  010c5fc  fadds 2, 2, 4
  010c600  fadds 2, 2, 5
  010c604  bdnz 0x10c5dc
  010c608  fadds 2, 2, 30
  010c60c  fmadds 29, 2, 29, 1
  010c610  fneg 1, 29
  010c614  li 3, 0
  010c618  addic 29, 1, 128
  010c61c  addic 4, 1, 112
  010c620  stw 3, 112(1)
  010c624  stw 3, 120(1)
  010c628  ori 3, 29, 0
  010c62c  stfs 1, 116(1)
  010c630  bl 0x500e08
  010c634  nop
  010c638  addic 3, 1, 192
  010c63c  ori 4, 29, 0
  010c640  ori 5, 3, 0
  010c644  bl 0x50162c
  010c648  nop
  010c64c  lwz 3, 212(1)
  010c650  lwz 4, 216(1)
  010c654  lfs 1, 212(1)
  010c658  lfs 2, 216(1)
  010c65c  fabs 3, 1
  010c660  fabs 5, 2
  010c664  rlwinm 4, 4, 3, 29, 29
  010c668  fsubs 1, 3, 5
  010c66c  stfs 1, 256(1)
  010c670  lwz 5, 256(1)
  010c674  lfs 1, 256(1)
  010c678  rlwimi 4, 5, 2, 30, 30
  010c67c  fsub 4, 1, 28
  010c680  fsub 6, 1, 28
  010c684  rlwimi 4, 3, 4, 28, 28
  010c688  ori 3, 30, 0
  010c68c  rlwimi 3, 4, 2, 26, 28
  010c690  slwi 4, 4, 2
  010c694  clrldi 3, 3, 32
  010c698  fsel 4, 4, 3, 5
  010c69c  lfsx 1, 30, 4
  010c6a0  fsel 3, 6, 5, 3
  010c6a4  lfs 2, 4(3)
  010c6a8  fcmpu 0, 4, 28
  010c6ac  bt 1, 0x10c6b4
  010c6b0  b 0x10c7c8
  010c6b4  fsubs 5, 3, 4
  010c6b8  fadds 3, 3, 4
  010c6bc  addic 3, 1, 16
  010c6c0  li 6, 2
  010c6c4  addic 4, 3, 264
  010c6c8  addic 5, 3, 280
  010c6cc  mtctr 6
  010c6d0  fdivs 3, 5, 3
  010c6d4  fmuls 4, 3, 3
  010c6d8  stfs 3, 292(1)
  010c6dc  stfs 3, 284(1)
  010c6e0  stfs 3, 288(1)
  010c6e4  stfs 3, 280(1)
  010c6e8  lfs 6, 292(1)
  010c6ec  lfs 7, 284(1)
  010c6f0  lfs 8, 288(1)
  010c6f4  fmuls 5, 4, 4
  010c6f8  fmuls 7, 7, 4
  010c6fc  fmuls 6, 6, 5
  010c700  fmuls 3, 5, 5
  010c704  fmuls 5, 8, 5
  010c708  stfs 7, 284(1)
  010c70c  fmuls 4, 6, 4
  010c710  stfs 5, 288(1)
  010c714  stfs 4, 292(1)
  010c718  lfs 4, 264(3)
  010c71c  fmuls 4, 4, 3
  010c720  stfs 4, 280(3)
  010c724  lfs 4, 4(4)
  010c728  addic 3, 3, 8
  010c72c  addic 4, 4, 8
  010c730  fmuls 4, 4, 3
  010c734  stfs 4, 4(5)
  010c738  addic 5, 5, 8
  010c73c  bdnz 0x10c718
  010c740  li 5, 4
  010c744  ori 3, 1, 0
  010c748  mtctr 5
  010c74c  lis 4, 115
  010c750  addic 5, 3, 280
  010c754  addic 4, 4, 22752
  010c758  ori 7, 5, 0
  010c75c  lfs 3, 280(3)
  010c760  lfs 4, 0(4)
  010c764  fmuls 3, 3, 4
  010c768  lfs 4, 4(4)
  010c76c  addic 4, 4, 8
  010c770  stfs 3, 280(3)
  010c774  lfs 3, 4(5)
  010c778  addic 3, 3, 8
  010c77c  fmuls 3, 3, 4
  010c780  stfs 3, 4(5)
  010c784  addic 5, 5, 8
  010c788  bdnz 0x10c75c
  010c78c  ori 3, 1, 0
  010c790  mtctr 6
  010c794  lfs 3, 280(3)
  010c798  lfs 4, 4(7)
  010c79c  fadds 3, 28, 3
  010c7a0  lfs 5, 8(7)
  010c7a4  lfs 28, 12(7)
  010c7a8  addic 3, 3, 16
  010c7ac  addic 7, 7, 16
  010c7b0  fadds 3, 3, 4
  010c7b4  fadds 3, 3, 5
  010c7b8  fadds 28, 3, 28
  010c7bc  bdnz 0x10c794
  010c7c0  fadds 28, 28, 30
  010c7c4  fmadds 28, 28, 1, 2
  010c7c8  stfs 28, 0(31)
  010c7cc  stfs 29, 4(31)
  010c7d0  stfs 31, 8(31)
  010c7d4  ld 0, 480(1)
  010c7d8  mtlr 0
  010c7dc  lfd 28, 432(1)
  010c7e0  lfd 29, 440(1)
  010c7e4  lfd 30, 448(1)
  010c7e8  lfd 31, 456(1)
  010c7ec  ld 29, 408(1)
  010c7f0  ld 30, 416(1)
  010c7f4  ld 31, 424(1)
  010c7f8  addi 1, 1, 464
  010c7fc  blr

MB_UpdateLightsTransition:   # 0x10c808, 0x190 bytes
  010c808  stdu 1, -176(1)
  010c80c  mflr 0
  010c810  std 0, 192(1)
  010c814  stfd 31, 168(1)
  010c818  std 30, 152(1)
  010c81c  std 31, 160(1)
  010c820  lhz 30, 0(4)
  010c824  ori 31, 4, 0
  010c828  extsh 30, 30
  010c82c  cmpwi 1, 30, 0
  010c830  bt 6, 0x10c840
  010c834  lhz 4, 2(31)
  010c838  cmpwi 4, 0
  010c83c  bt 2, 0x10c97c
  010c840  li 4, 12
  010c844  vspltisw 2, -16
  010c848  lis 5, 17
  010c84c  vspltisw 4, -1
  010c850  lis 6, 114
  010c854  addi 5, 5, -14336
  010c858  <unknown>
  010c85c  lhz 4, 12(31)
  010c860  vsraw 2, 3, 2
  010c864  extsh 4, 4
  010c868  extsw 4, 4
  010c86c  vcfsx 2, 2, 0
  010c870  std 4, 128(1)
  010c874  <unknown>
  010c878  li 4, -3056
  010c87c  vspltw 3, 3, 0
  010c880  vaddfp 2, 2, 3
  010c884  vslw 3, 4, 4
  010c888  <unknown>
  010c88c  lfs 2, 0(5)
  010c890  li 4, 0
  010c894  lfd 1, 128(1)
  010c898  fcfid 1, 1
  010c89c  vmaddfp 2, 4, 2, 3
  010c8a0  frsp 1, 1
  010c8a4  vctsxs 2, 2, 0
  010c8a8  fadds 1, 1, 2
  010c8ac  vsplth 2, 2, 1
  010c8b0  stvehx 2, 0, 31
  010c8b4  sth 4, 2(31)
  010c8b8  bt 6, 0x10c950
  010c8bc  lhz 3, 14(31)
  010c8c0  extsh 3, 3
  010c8c4  extsw 3, 3
  010c8c8  std 3, 128(1)
  010c8cc  lis 3, 114
  010c8d0  lfs 3, -3056(3)
  010c8d4  lfd 4, 128(1)
  010c8d8  fmuls 1, 3, 1
  010c8dc  fcfid 4, 4
  010c8e0  fctidz 1, 1
  010c8e4  frsp 4, 4
  010c8e8  fcfid 1, 1
  010c8ec  fadds 2, 4, 2
  010c8f0  frsp 31, 1
  010c8f4  fmuls 2, 3, 2
  010c8f8  fctiwz 1, 2
  010c8fc  stfd 1, 128(1)
  010c900  lwz 3, 132(1)
  010c904  extsw 3, 3
  010c908  bl 0x502730
  010c90c  nop
  010c910  extsw 3, 30
  010c914  std 3, 128(1)
  010c918  lfd 2, 128(1)
  010c91c  fcfid 2, 2
  010c920  frsp 2, 2
  010c924  fdivs 1, 2, 1
  010c928  fmuls 1, 31, 1
  010c92c  bl 0x502758
  010c930  nop
  010c934  extsh 4, 3
  010c938  sth 3, 0(31)
  010c93c  cmpwi 4, 1
  010c940  bf 0, 0x10c97c
  010c944  li 3, 1
  010c948  sth 3, 0(31)
  010c94c  b 0x10c97c
  010c950  addic 4, 1, 112
  010c954  addic 5, 1, 116
  010c958  addic 6, 1, 120
  010c95c  bl 0xf1ef0
  010c960  nop
  010c964  lwz 3, 112(1)
  010c968  lwz 4, 116(1)
  010c96c  stb 3, 4(31)
  010c970  lwz 3, 120(1)
  010c974  stb 4, 5(31)
  010c978  stb 3, 6(31)
  010c97c  ld 0, 192(1)
  010c980  mtlr 0
  010c984  lfd 31, 168(1)
  010c988  ld 30, 152(1)
  010c98c  ld 31, 160(1)
  010c990  addi 1, 1, 176
  010c994  blr

MB_ColorDyingMoby:   # 0x10c9a0, 0x3f4 bytes
  010c9a0  stdu 1, -176(1)
  010c9a4  mflr 0
  010c9a8  std 0, 192(1)
  010c9ac  stfd 31, 168(1)
  010c9b0  std 31, 160(1)
  010c9b4  ori 31, 3, 0
  010c9b8  std 30, 152(1)
  010c9bc  lhz 3, 0(4)
  010c9c0  ori 30, 4, 0
  010c9c4  std 29, 144(1)
  010c9c8  std 28, 136(1)
  010c9cc  cmpwi 3, 0
  010c9d0  bt 2, 0x10cd70
  010c9d4  ori 3, 30, 0
  010c9d8  bl 0x4fffb4
  010c9dc  nop
  010c9e0  cmpwi 3, 0
  010c9e4  bt 2, 0x10ca68
  010c9e8  lhz 3, 2(30)
  010c9ec  cmpwi 3, 0
  010c9f0  bf 2, 0x10ca4c
  010c9f4  li 3, 14
  010c9f8  vspltisw 2, -16
  010c9fc  lis 5, 17
  010ca00  vspltisw 4, -1
  010ca04  li 4, 1
  010ca08  <unknown>
  010ca0c  addi 3, 5, -13928
  010ca10  sth 4, 2(30)
  010ca14  vsraw 2, 3, 2
  010ca18  li 4, -3056
  010ca1c  vslw 4, 4, 4
  010ca20  vcfsx 2, 2, 0
  010ca24  <unknown>
  010ca28  lis 3, 114
  010ca2c  vspltw 3, 3, 0
  010ca30  <unknown>
  010ca34  vaddfp 2, 2, 3
  010ca38  vmaddfp 2, 5, 2, 4
  010ca3c  vctsxs 2, 2, 0
  010ca40  vsplth 2, 2, 1
  010ca44  stvehx 2, 0, 30
  010ca48  b 0x10ca68
  010ca4c  lbz 4, 4(30)
  010ca50  ori 3, 31, 0
  010ca54  lbz 5, 5(30)
  010ca58  lbz 6, 6(30)
  010ca5c  bl 0xf1ec8
  010ca60  nop
  010ca64  b 0x10cd70
  010ca68  lhz 3, 2(30)
  010ca6c  cmpwi 3, 0
  010ca70  bf 2, 0x10cbe8
  010ca74  lhz 3, 12(30)
  010ca78  lis 4, 114
  010ca7c  extsh 3, 3
  010ca80  extsw 3, 3
  010ca84  std 3, 112(1)
  010ca88  lis 3, 17
  010ca8c  addi 3, 3, -13928
  010ca90  lfs 1, 0(3)
  010ca94  lfs 2, -3056(4)
  010ca98  lfd 3, 112(1)
  010ca9c  fcfid 3, 3
  010caa0  frsp 3, 3
  010caa4  fadds 1, 3, 1
  010caa8  fmuls 1, 2, 1
  010caac  fctiwz 1, 1
  010cab0  stfd 1, 112(1)
  010cab4  lwz 3, 116(1)
  010cab8  extsw 3, 3
  010cabc  bl 0x502730
  010cac0  nop
  010cac4  lhz 3, 0(30)
  010cac8  extsh 3, 3
  010cacc  extsw 3, 3
  010cad0  std 3, 112(1)
  010cad4  lbz 29, 7(30)
  010cad8  lfd 2, 112(1)
  010cadc  cmpwi 29, 0
  010cae0  fcfid 2, 2
  010cae4  frsp 2, 2
  010cae8  fsubs 31, 1, 2
  010caec  fdivs 31, 31, 1
  010caf0  bt 2, 0x10cb38
  010caf4  lbz 3, 4(30)
  010caf8  clrldi 4, 3, 32
  010cafc  subc 3, 29, 3
  010cb00  extsw 3, 3
  010cb04  std 4, 112(1)
  010cb08  lfd 1, 112(1)
  010cb0c  std 3, 112(1)
  010cb10  fcfid 1, 1
  010cb14  frsp 1, 1
  010cb18  lfd 2, 112(1)
  010cb1c  fcfid 2, 2
  010cb20  frsp 2, 2
  010cb24  fmadds 1, 2, 31, 1
  010cb28  bl 0x502758
  010cb2c  nop
  010cb30  ori 29, 3, 0
  010cb34  b 0x10cb3c
  010cb38  lbz 29, 4(30)
  010cb3c  lbz 28, 8(30)
  010cb40  cmpwi 28, 0
  010cb44  bt 2, 0x10cb8c
  010cb48  lbz 3, 5(30)
  010cb4c  clrldi 4, 3, 32
  010cb50  subc 3, 28, 3
  010cb54  extsw 3, 3
  010cb58  std 4, 112(1)
  010cb5c  lfd 1, 112(1)
  010cb60  std 3, 112(1)
  010cb64  fcfid 1, 1
  010cb68  frsp 1, 1
  010cb6c  lfd 2, 112(1)
  010cb70  fcfid 2, 2
  010cb74  frsp 2, 2
  010cb78  fmadds 1, 2, 31, 1
  010cb7c  bl 0x502758
  010cb80  nop
  010cb84  ori 28, 3, 0
  010cb88  b 0x10cb90
  010cb8c  lbz 28, 5(30)
  010cb90  lbz 3, 9(30)
  010cb94  cmpwi 3, 0
  010cb98  bt 2, 0x10cbe0
  010cb9c  lbz 4, 6(30)
  010cba0  clrldi 5, 4, 32
  010cba4  subc 3, 3, 4
  010cba8  extsw 3, 3
  010cbac  std 5, 112(1)
  010cbb0  lfd 1, 112(1)
  010cbb4  std 3, 112(1)
  010cbb8  fcfid 1, 1
  010cbbc  frsp 1, 1
  010cbc0  lfd 2, 112(1)
  010cbc4  fcfid 2, 2
  010cbc8  frsp 2, 2
  010cbcc  fmadds 1, 2, 31, 1
  010cbd0  bl 0x502758
  010cbd4  nop
  010cbd8  ori 30, 3, 0
  010cbdc  b 0x10cbe4
  010cbe0  lbz 30, 6(30)
  010cbe4  b 0x10cd58
  010cbe8  lhz 3, 14(30)
  010cbec  lis 4, 17
  010cbf0  extsh 3, 3
  010cbf4  extsw 3, 3
  010cbf8  std 3, 112(1)
  010cbfc  addi 3, 4, -13928
  010cc00  lis 4, 114
  010cc04  lfs 1, 0(3)
  010cc08  lfs 2, -3056(4)
  010cc0c  lfd 3, 112(1)
  010cc10  fcfid 3, 3
  010cc14  frsp 3, 3
  010cc18  fadds 1, 3, 1
  010cc1c  fmuls 1, 2, 1
  010cc20  fctiwz 1, 1
  010cc24  stfd 1, 112(1)
  010cc28  lwz 3, 116(1)
  010cc2c  extsw 3, 3
  010cc30  bl 0x502730
  010cc34  nop
  010cc38  lhz 3, 0(30)
  010cc3c  extsh 3, 3
  010cc40  extsw 3, 3
  010cc44  std 3, 112(1)
  010cc48  lbz 29, 7(30)
  010cc4c  lfd 2, 112(1)
  010cc50  cmpwi 29, 0
  010cc54  fcfid 2, 2
  010cc58  frsp 2, 2
  010cc5c  fsubs 31, 1, 2
  010cc60  fdivs 31, 31, 1
  010cc64  bt 2, 0x10ccac
  010cc68  clrldi 3, 29, 32
  010cc6c  std 3, 112(1)
  010cc70  lbz 3, 4(30)
  010cc74  lfd 1, 112(1)
  010cc78  subc 3, 3, 29
  010cc7c  fcfid 1, 1
  010cc80  extsw 3, 3
  010cc84  std 3, 112(1)
  010cc88  frsp 1, 1
  010cc8c  lfd 2, 112(1)
  010cc90  fcfid 2, 2
  010cc94  frsp 2, 2
  010cc98  fmadds 1, 2, 31, 1
  010cc9c  bl 0x502758
  010cca0  nop
  010cca4  ori 29, 3, 0
  010cca8  b 0x10ccb0
  010ccac  lbz 29, 4(30)
  010ccb0  lbz 28, 8(30)
  010ccb4  cmpwi 28, 0
  010ccb8  bt 2, 0x10cd00
  010ccbc  clrldi 3, 28, 32
  010ccc0  std 3, 112(1)
  010ccc4  lbz 3, 5(30)
  010ccc8  lfd 1, 112(1)
  010cccc  subc 3, 3, 28
  010ccd0  fcfid 1, 1
  010ccd4  extsw 3, 3
  010ccd8  std 3, 112(1)
  010ccdc  frsp 1, 1
  010cce0  lfd 2, 112(1)
  010cce4  fcfid 2, 2
  010cce8  frsp 2, 2
  010ccec  fmadds 1, 2, 31, 1
  010ccf0  bl 0x502758
  010ccf4  nop
  010ccf8  ori 28, 3, 0
  010ccfc  b 0x10cd04
  010cd00  lbz 28, 5(30)
  010cd04  lbz 3, 9(30)
  010cd08  cmpwi 3, 0
  010cd0c  bt 2, 0x10cd54
  010cd10  clrldi 4, 3, 32
  010cd14  std 4, 112(1)
  010cd18  lbz 4, 6(30)
  010cd1c  lfd 1, 112(1)
  010cd20  subc 3, 4, 3
  010cd24  fcfid 1, 1
  010cd28  extsw 3, 3
  010cd2c  std 3, 112(1)
  010cd30  frsp 1, 1
  010cd34  lfd 2, 112(1)
  010cd38  fcfid 2, 2
  010cd3c  frsp 2, 2
  010cd40  fmadds 1, 2, 31, 1
  010cd44  bl 0x502758
  010cd48  nop
  010cd4c  ori 30, 3, 0
  010cd50  b 0x10cd58
  010cd54  lbz 30, 6(30)
  010cd58  ori 3, 31, 0
  010cd5c  ori 4, 29, 0
  010cd60  ori 5, 28, 0
  010cd64  ori 6, 30, 0
  010cd68  bl 0xf1ec8
  010cd6c  nop
  010cd70  ld 0, 192(1)
  010cd74  mtlr 0
  010cd78  lfd 31, 168(1)
  010cd7c  ld 28, 136(1)
  010cd80  ld 29, 144(1)
  010cd84  ld 30, 152(1)
  010cd88  ld 31, 160(1)
  010cd8c  addi 1, 1, 176
  010cd90  blr

MB_PathStepIndex:   # 0x10cd94, 0x7c bytes
  010cd94  cmpwi 6, 0
  010cd98  cmpwi 1, 5, 0
  010cd9c  bt 2, 0x10cdc0
  010cda0  addc 4, 4, 5
  010cda4  lwz 3, 0(3)
  010cda8  addc 4, 4, 3
  010cdac  divw 5, 4, 3
  010cdb0  mullw 3, 5, 3
  010cdb4  subc 3, 4, 3
  010cdb8  extsw 3, 3
  010cdbc  b 0x10ce0c
  010cdc0  addc 5, 4, 5
  010cdc4  li 4, 0
  010cdc8  extsw 5, 5
  010cdcc  li 6, 0
  010cdd0  subc 4, 5, 4
  010cdd4  subc 6, 6, 5
  010cdd8  sradi 4, 4, 63
  010cddc  and 4, 4, 6
  010cde0  addc 4, 5, 4
  010cde4  bt 4, 0x10ce08
  010cde8  lwz 3, 0(3)
  010cdec  addic 3, 3, -1
  010cdf0  extsw 3, 3
  010cdf4  subc 4, 3, 5
  010cdf8  subc 3, 3, 5
  010cdfc  sradi 4, 4, 63
  010ce00  and 4, 4, 3
  010ce04  addc 4, 5, 4
  010ce08  ori 3, 4, 0
  010ce0c  blr

MB_PathMoveDist:   # 0x10ce18, 0x324 bytes
  010ce18  stdu 1, -96(1)
  010ce1c  fmr 2, 1
  010ce20  lis 7, 17
  010ce24  ori 9, 8, 0
  010ce28  addi 7, 7, -12784
  010ce2c  li 8, 1
  010ce30  cmpwi 6, 9, 0
  010ce34  std 31, 88(1)
  010ce38  lfs 1, 0(7)
  010ce3c  lwz 31, 0(5)
  010ce40  ori 7, 8, 0
  010ce44  std 28, 64(1)
  010ce48  fcmpu 0, 2, 1
  010ce4c  ori 28, 31, 0
  010ce50  ori 10, 28, 0
  010ce54  ori 11, 10, 0
  010ce58  std 30, 80(1)
  010ce5c  std 29, 72(1)
  010ce60  std 27, 56(1)
  010ce64  cror 6, 1, 2
  010ce68  bt 6, 0x10ce74
  010ce6c  li 8, -1
  010ce70  fneg 2, 2
  010ce74  fcmpu 0, 2, 1
  010ce78  li 9, 0
  010ce7c  ori 12, 9, 0
  010ce80  bt 2, 0x10cfe4
  010ce84  lwz 29, 0(3)
  010ce88  ori 30, 11, 0
  010ce8c  addic 27, 29, -1
  010ce90  ori 28, 10, 0
  010ce94  cmpw 30, 27
  010ce98  ori 31, 11, 0
  010ce9c  bf 2, 0x10cea4
  010cea0  bt 26, 0x10cfe4
  010cea4  cmpwi 8, 1
  010cea8  bf 2, 0x10cee4
  010ceac  lfs 3, 0(6)
  010ceb0  slwi 11, 11, 4
  010ceb4  fadds 5, 3, 2
  010ceb8  addc 11, 3, 11
  010cebc  ori 30, 10, 0
  010cec0  clrldi 11, 11, 32
  010cec4  ori 31, 12, 0
  010cec8  lfs 4, 28(11)
  010cecc  ori 11, 30, 0
  010ced0  fcmpu 0, 4, 5
  010ced4  cror 6, 1, 2
  010ced8  bt 6, 0x10cee0
  010cedc  ori 31, 7, 0
  010cee0  b 0x10cefc
  010cee4  lfs 3, 0(6)
  010cee8  ori 31, 12, 0
  010ceec  fcmpu 0, 2, 3
  010cef0  cror 6, 0, 2
  010cef4  bt 6, 0x10cefc
  010cef8  ori 31, 7, 0
  010cefc  ori 28, 31, 0
  010cf00  ori 31, 30, 0
  010cf04  cmpwi 28, 0
  010cf08  cmpwi 1, 8, 1
  010cf0c  bt 2, 0x10cfc4
  010cf10  addc 30, 30, 8
  010cf14  cmpw 30, 29
  010cf18  cmpwi 1, 30, 0
  010cf1c  bf 0, 0x10cf24
  010cf20  bf 4, 0x10cf34
  010cf24  addc 30, 30, 29
  010cf28  divw 31, 30, 29
  010cf2c  mullw 31, 31, 29
  010cf30  subc 30, 30, 31
  010cf34  cmpwi 8, 1
  010cf38  bf 2, 0x10cf6c
  010cf3c  slwi 11, 11, 4
  010cf40  addc 11, 3, 11
  010cf44  clrldi 11, 11, 32
  010cf48  lfs 4, 28(11)
  010cf4c  fsubs 3, 4, 3
  010cf50  stw 12, 0(6)
  010cf54  fsubs 2, 2, 3
  010cf58  fcmpu 0, 2, 1
  010cf5c  cror 6, 1, 2
  010cf60  bt 6, 0x10cf84
  010cf64  fmr 2, 1
  010cf68  b 0x10cf84
  010cf6c  sldi 11, 30, 4
  010cf70  fsubs 2, 2, 3
  010cf74  addc 11, 3, 11
  010cf78  clrldi 11, 11, 32
  010cf7c  lfs 3, 28(11)
  010cf80  stfs 3, 0(6)
  010cf84  cmpwi 8, 1
  010cf88  bf 2, 0x10cf9c
  010cf8c  lwz 11, 0(3)
  010cf90  addic 11, 11, -1
  010cf94  cmpw 10, 11
  010cf98  bt 2, 0x10cfac
  010cf9c  cmpwi 8, -1
  010cfa0  cmpwi 1, 10, 0
  010cfa4  bf 2, 0x10cfb0
  010cfa8  bf 6, 0x10cfb0
  010cfac  ori 9, 7, 0
  010cfb0  ori 10, 30, 0
  010cfb4  stw 30, 0(5)
  010cfb8  ori 11, 10, 0
  010cfbc  ori 31, 11, 0
  010cfc0  b 0x10cfd8
  010cfc4  fsubs 4, 3, 2
  010cfc8  bf 6, 0x10cfd0
  010cfcc  fadds 4, 3, 2
  010cfd0  fmr 2, 1
  010cfd4  stfs 4, 0(6)
  010cfd8  fcmpu 0, 2, 1
  010cfdc  ori 28, 10, 0
  010cfe0  bf 2, 0x10ce84
  010cfe4  slwi 10, 31, 4
  010cfe8  addc 10, 3, 10
  010cfec  clrldi 10, 10, 32
  010cff0  lfs 4, 16(10)
  010cff4  stfs 4, 0(4)
  010cff8  lfs 3, 20(10)
  010cffc  stfs 3, 4(4)
  010d000  lfs 2, 24(10)
  010d004  stfs 2, 8(4)
  010d008  lfs 5, 28(10)
  010d00c  stfs 5, 12(4)
  010d010  lwz 31, 0(3)
  010d014  addic 10, 31, -1
  010d018  cmpw 28, 10
  010d01c  bf 2, 0x10d05c
  010d020  cmpwi 1, 8, -1
  010d024  bf 26, 0x10d05c
  010d028  bf 6, 0x10d054
  010d02c  stw 12, 0(5)
  010d030  lfs 1, 16(3)
  010d034  stfs 1, 0(4)
  010d038  lfs 1, 20(3)
  010d03c  stfs 1, 4(4)
  010d040  lfs 1, 24(3)
  010d044  stfs 1, 8(4)
  010d048  lfs 1, 28(3)
  010d04c  stfs 1, 12(4)
  010d050  stw 12, 0(6)
  010d054  ori 3, 7, 0
  010d058  b 0x10d120
  010d05c  addic 5, 28, 1
  010d060  cmpw 5, 31
  010d064  bt 0, 0x10d074
  010d068  divw 7, 5, 31
  010d06c  mullw 7, 7, 31
  010d070  subc 5, 5, 7
  010d074  sldi 5, 5, 4
  010d078  slwi 7, 28, 4
  010d07c  addc 5, 3, 5
  010d080  addc 3, 3, 7
  010d084  clrldi 5, 5, 32
  010d088  clrldi 3, 3, 32
  010d08c  lfs 5, 20(5)
  010d090  lfs 6, 20(3)
  010d094  lfs 7, 16(5)
  010d098  fsubs 5, 5, 6
  010d09c  lfs 6, 16(3)
  010d0a0  fsubs 6, 7, 6
  010d0a4  lfs 7, 24(5)
  010d0a8  lfs 8, 24(3)
  010d0ac  fsubs 7, 7, 8
  010d0b0  fmuls 8, 5, 5
  010d0b4  lfs 9, 0(6)
  010d0b8  ori 3, 9, 0
  010d0bc  fmadds 8, 6, 6, 8
  010d0c0  fmadds 8, 7, 7, 8
  010d0c4  fsqrts 8, 8
  010d0c8  fdivs 9, 9, 8
  010d0cc  fsub 10, 1, 8
  010d0d0  fsub 11, 1, 8
  010d0d4  fsub 12, 1, 8
  010d0d8  fsub 13, 8, 1
  010d0dc  fsub 0, 8, 1
  010d0e0  fsub 8, 8, 1
  010d0e4  fmuls 7, 9, 7
  010d0e8  fmuls 5, 9, 5
  010d0ec  fmuls 6, 9, 6
  010d0f0  fsel 9, 10, 1, 7
  010d0f4  fsel 10, 11, 1, 5
  010d0f8  fsel 1, 12, 1, 6
  010d0fc  fsel 7, 13, 9, 7
  010d100  fsel 5, 0, 10, 5
  010d104  fsel 1, 8, 1, 6
  010d108  fadds 2, 2, 7
  010d10c  fadds 3, 3, 5
  010d110  fadds 1, 4, 1
  010d114  stfs 2, 8(4)
  010d118  stfs 3, 4(4)
  010d11c  stfs 1, 0(4)
  010d120  ld 27, 56(1)
  010d124  ld 28, 64(1)
  010d128  ld 29, 72(1)
  010d12c  ld 30, 80(1)
  010d130  ld 31, 88(1)
  010d134  addi 1, 1, 96
  010d138  blr

MB_DistIgnoreSmallZ:   # 0x10d140, 0x7c bytes
  010d140  lis 8, 17
  010d144  li 7, 0
  010d148  addi 8, 8, -11972
  010d14c  addc 7, 1, 7
  010d150  std 3, 48(7)
  010d154  std 5, 64(7)
  010d158  std 4, 56(7)
  010d15c  std 6, 72(7)
  010d160  lfs 2, 0(8)
  010d164  lfs 3, 52(7)
  010d168  lfs 4, 68(7)
  010d16c  fcmpu 0, 1, 2
  010d170  fsubs 3, 3, 4
  010d174  lfs 2, 48(7)
  010d178  cror 6, 0, 2
  010d17c  fmuls 4, 3, 3
  010d180  lfs 3, 64(7)
  010d184  fsubs 5, 2, 3
  010d188  lfs 3, 56(7)
  010d18c  lfs 2, 72(7)
  010d190  fmadds 4, 5, 5, 4
  010d194  bt 6, 0x10d1a8
  010d198  fsubs 5, 3, 2
  010d19c  fabs 5, 5
  010d1a0  fcmpu 0, 5, 1
  010d1a4  bt 0, 0x10d1b4
  010d1a8  fsubs 1, 3, 2
  010d1ac  fmadds 4, 1, 1, 4
  010d1b0  b 0x10d1b4
  010d1b4  fsqrts 1, 4
  010d1b8  blr

MB_SegmentPushDist2D:   # 0x10d1c8, 0x234 bytes
  010d1c8  stdu 1, -80(1)
  010d1cc  lfs 3, 4(5)
  010d1d0  lfs 9, 4(6)
  010d1d4  lfs 4, 0(5)
  010d1d8  fsubs 9, 3, 9
  010d1dc  lfs 7, 0(6)
  010d1e0  fsubs 7, 4, 7
  010d1e4  lis 7, 17
  010d1e8  addi 7, 7, -11844
  010d1ec  fmuls 1, 9, 9
  010d1f0  lfs 6, 0(7)
  010d1f4  lfs 2, 0(4)
  010d1f8  fmr 5, 6
  010d1fc  fneg 1, 1
  010d200  fneg 8, 1
  010d204  lfs 1, 4(4)
  010d208  fmadds 8, 7, 7, 8
  010d20c  fsqrts 10, 8
  010d210  std 31, 72(1)
  010d214  std 30, 64(1)
  010d218  std 29, 56(1)
  010d21c  std 28, 48(1)
  010d220  fcmpu 0, 10, 5
  010d224  bt 2, 0x10d278
  010d228  frsqrte 5, 8
  010d22c  lis 7, 17
  010d230  addi 7, 7, -11844
  010d234  lfs 6, 4(7)
  010d238  lfs 10, 8(7)
  010d23c  fmuls 11, 8, 5
  010d240  fmuls 12, 6, 5
  010d244  fnmsubs 11, 11, 5, 10
  010d248  fmadds 5, 11, 12, 5
  010d24c  fmuls 11, 8, 5
  010d250  fmuls 12, 6, 5
  010d254  fnmsubs 11, 11, 5, 10
  010d258  fmadds 5, 11, 12, 5
  010d25c  fmuls 8, 8, 5
  010d260  fmuls 6, 6, 5
  010d264  fnmsubs 8, 8, 5, 10
  010d268  fmadds 5, 8, 6, 5
  010d26c  fmuls 6, 9, 5
  010d270  fmuls 5, 7, 5
  010d274  fneg 6, 6
  010d278  fmuls 3, 5, 3
  010d27c  lfs 7, 4(4)
  010d280  li 11, 0
  010d284  ori 10, 3, 0
  010d288  ori 9, 5, 0
  010d28c  ori 8, 6, 0
  010d290  stw 11, 8(3)
  010d294  fnmadds 3, 6, 4, 3
  010d298  fmadds 3, 6, 2, 3
  010d29c  fmadds 1, 5, 1, 3
  010d2a0  fnmsubs 3, 6, 1, 2
  010d2a4  fnmsubs 2, 5, 1, 7
  010d2a8  stfs 3, 0(3)
  010d2ac  stfs 2, 4(3)
  010d2b0  lfs 1, 0(5)
  010d2b4  lfs 5, 4(5)
  010d2b8  lfs 6, 0(6)
  010d2bc  lfs 4, 4(6)
  010d2c0  lwz 7, 0(10)
  010d2c4  lwz 12, 0(9)
  010d2c8  srawi 30, 7, 31
  010d2cc  srawi 31, 12, 31
  010d2d0  srwi 28, 30, 1
  010d2d4  srwi 29, 31, 1
  010d2d8  xor 7, 28, 7
  010d2dc  xor 12, 29, 12
  010d2e0  subc 7, 7, 30
  010d2e4  subc 12, 12, 31
  010d2e8  cmpw 1, 7, 12
  010d2ec  bf 5, 0x10d30c
  010d2f0  lwz 12, 0(8)
  010d2f4  srawi 31, 12, 31
  010d2f8  srwi 30, 31, 1
  010d2fc  xor 12, 30, 12
  010d300  subc 12, 12, 31
  010d304  cmpw 7, 12
  010d308  bt 1, 0x10d344
  010d30c  bf 4, 0x10d32c
  010d310  lwz 12, 0(8)
  010d314  srawi 31, 12, 31
  010d318  srwi 30, 31, 1
  010d31c  xor 12, 30, 12
  010d320  subc 12, 12, 31
  010d324  cmpw 7, 12
  010d328  bt 0, 0x10d344
  010d32c  addic 11, 11, 1
  010d330  addic 10, 10, 4
  010d334  cmpwi 11, 2
  010d338  addic 9, 9, 4
  010d33c  addic 8, 8, 4
  010d340  bt 0, 0x10d2c0
  010d344  cmpwi 11, 2
  010d348  bf 0, 0x10d3c8
  010d34c  fsubs 5, 2, 5
  010d350  fsubs 2, 2, 4
  010d354  fsubs 4, 3, 1
  010d358  fsubs 3, 3, 6
  010d35c  fmuls 5, 5, 5
  010d360  fmuls 2, 2, 2
  010d364  fmadds 4, 4, 4, 5
  010d368  fmadds 2, 3, 3, 2
  010d36c  fsqrts 3, 4
  010d370  fsqrts 2, 2
  010d374  fcmpu 0, 3, 2
  010d378  cror 6, 1, 2
  010d37c  bt 6, 0x10d3a0
  010d380  stfs 1, 0(3)
  010d384  lfs 2, 4(5)
  010d388  fmr 3, 1
  010d38c  stfs 2, 4(3)
  010d390  lfs 1, 8(5)
  010d394  stfs 1, 8(3)
  010d398  lfs 1, 12(5)
  010d39c  b 0x10d3bc
  010d3a0  stfs 6, 0(3)
  010d3a4  lfs 2, 4(6)
  010d3a8  fmr 3, 6
  010d3ac  stfs 2, 4(3)
  010d3b0  lfs 1, 8(6)
  010d3b4  stfs 1, 8(3)
  010d3b8  lfs 1, 12(6)
  010d3bc  li 5, 0
  010d3c0  stfs 1, 12(3)
  010d3c4  stw 5, 8(3)
  010d3c8  lfs 1, 4(4)
  010d3cc  lfs 4, 0(4)
  010d3d0  fsubs 1, 1, 2
  010d3d4  fsubs 2, 4, 3
  010d3d8  fmuls 1, 1, 1
  010d3dc  fmadds 1, 2, 2, 1
  010d3e0  fsqrts 1, 1
  010d3e4  ld 28, 48(1)
  010d3e8  ld 29, 56(1)
  010d3ec  ld 30, 64(1)
  010d3f0  ld 31, 72(1)
  010d3f4  addi 1, 1, 80
  010d3f8  blr

MB_SegmentPush:   # 0x10d408, 0x390 bytes
  010d408  stdu 1, -144(1)
  010d40c  mflr 0
  010d410  std 0, 160(1)
  010d414  std 29, 120(1)
  010d418  lis 7, 17
  010d41c  ori 29, 3, 0
  010d420  std 30, 128(1)
  010d424  addi 7, 7, -11268
  010d428  ori 3, 4, 0
  010d42c  std 31, 136(1)
  010d430  ori 30, 5, 0
  010d434  ori 31, 6, 0
  010d438  lfs 5, 0(7)
  010d43c  fcmpu 0, 1, 5
  010d440  std 28, 112(1)
  010d444  cror 6, 0, 2
  010d448  bt 6, 0x10d51c
  010d44c  lfs 2, 8(3)
  010d450  lfs 3, 8(30)
  010d454  fsubs 3, 2, 3
  010d458  fabs 3, 3
  010d45c  fcmpu 0, 3, 1
  010d460  cror 6, 1, 2
  010d464  bt 6, 0x10d51c
  010d468  lfs 3, 8(31)
  010d46c  fsubs 2, 2, 3
  010d470  fabs 2, 2
  010d474  fcmpu 0, 2, 1
  010d478  cror 6, 1, 2
  010d47c  bt 6, 0x10d51c
  010d480  ori 4, 3, 0
  010d484  ori 3, 29, 0
  010d488  ori 5, 30, 0
  010d48c  ori 6, 31, 0
  010d490  bl 0x10d1c8
  010d494  lfs 2, 4(30)
  010d498  lfs 3, 4(29)
  010d49c  lfs 4, 4(31)
  010d4a0  fsubs 3, 2, 3
  010d4a4  fsubs 6, 2, 4
  010d4a8  lfs 5, 0(30)
  010d4ac  lfs 7, 0(29)
  010d4b0  lfs 8, 0(31)
  010d4b4  fsubs 7, 5, 7
  010d4b8  fsubs 9, 5, 8
  010d4bc  fmuls 3, 3, 3
  010d4c0  fmuls 6, 6, 6
  010d4c4  fsubs 8, 8, 5
  010d4c8  fsubs 4, 4, 2
  010d4cc  fmadds 3, 7, 7, 3
  010d4d0  fmadds 6, 9, 9, 6
  010d4d4  lfs 7, 8(30)
  010d4d8  lfs 9, 12(30)
  010d4dc  lfs 10, 8(31)
  010d4e0  lfs 11, 12(31)
  010d4e4  fsqrts 3, 3
  010d4e8  fsqrts 6, 6
  010d4ec  fsubs 10, 10, 7
  010d4f0  fsubs 11, 11, 9
  010d4f4  fdivs 3, 3, 6
  010d4f8  fmadds 5, 8, 3, 5
  010d4fc  fmadds 2, 4, 3, 2
  010d500  fmadds 4, 10, 3, 7
  010d504  fmadds 3, 11, 3, 9
  010d508  stfs 5, 0(29)
  010d50c  stfs 2, 4(29)
  010d510  stfs 4, 8(29)
  010d514  stfs 3, 12(29)
  010d518  b 0x10d778
  010d51c  lfs 9, 4(31)
  010d520  lfs 1, 4(30)
  010d524  lfs 10, 0(31)
  010d528  fsubs 9, 9, 1
  010d52c  lfs 1, 0(30)
  010d530  lfs 8, 8(31)
  010d534  fsubs 10, 10, 1
  010d538  lfs 1, 8(30)
  010d53c  fsubs 8, 8, 1
  010d540  fmuls 1, 9, 9
  010d544  lfs 4, 12(31)
  010d548  fmr 7, 5
  010d54c  lfs 3, 0(30)
  010d550  lfs 2, 4(30)
  010d554  fmadds 11, 10, 10, 1
  010d558  fmr 6, 7
  010d55c  lfs 1, 8(30)
  010d560  fmadds 11, 8, 8, 11
  010d564  fsqrts 12, 11
  010d568  fcmpu 0, 12, 5
  010d56c  bt 2, 0x10d5c0
  010d570  frsqrte 5, 11
  010d574  lis 4, 17
  010d578  addi 4, 4, -11268
  010d57c  lfs 6, 4(4)
  010d580  lfs 7, 8(4)
  010d584  fmuls 12, 11, 5
  010d588  fmuls 13, 6, 5
  010d58c  fnmsubs 12, 12, 5, 7
  010d590  fmadds 5, 12, 13, 5
  010d594  fmuls 12, 11, 5
  010d598  fmuls 13, 6, 5
  010d59c  fnmsubs 12, 12, 5, 7
  010d5a0  fmadds 5, 12, 13, 5
  010d5a4  fmuls 11, 11, 5
  010d5a8  fmuls 6, 6, 5
  010d5ac  fnmsubs 7, 11, 5, 7
  010d5b0  fmadds 5, 7, 6, 5
  010d5b4  fmuls 7, 10, 5
  010d5b8  fmuls 6, 9, 5
  010d5bc  fmuls 5, 8, 5
  010d5c0  lfs 8, 4(3)
  010d5c4  fmuls 11, 6, 6
  010d5c8  lfs 9, 0(3)
  010d5cc  fmuls 8, 8, 6
  010d5d0  lfs 10, 8(3)
  010d5d4  li 8, 0
  010d5d8  stfs 4, 12(29)
  010d5dc  ori 7, 29, 0
  010d5e0  ori 6, 30, 0
  010d5e4  ori 5, 31, 0
  010d5e8  fmadds 8, 9, 7, 8
  010d5ec  fmadds 9, 7, 7, 11
  010d5f0  fnmadds 8, 10, 5, 8
  010d5f4  fmadds 9, 5, 5, 9
  010d5f8  fmadds 8, 7, 3, 8
  010d5fc  fmadds 8, 5, 1, 8
  010d600  fnmadds 8, 6, 2, 8
  010d604  fdivs 10, 8, 9
  010d608  fmadds 8, 6, 10, 2
  010d60c  fmadds 9, 7, 10, 3
  010d610  fmadds 6, 5, 10, 1
  010d614  stfs 8, 4(29)
  010d618  stfs 9, 0(29)
  010d61c  stfs 6, 8(29)
  010d620  lfs 5, 0(30)
  010d624  lfs 4, 4(30)
  010d628  lfs 3, 8(30)
  010d62c  lfs 2, 0(31)
  010d630  lfs 1, 4(31)
  010d634  lfs 7, 8(31)
  010d638  lwz 4, 0(7)
  010d63c  lwz 9, 0(6)
  010d640  srawi 10, 4, 31
  010d644  srawi 11, 9, 31
  010d648  srwi 12, 10, 1
  010d64c  srwi 28, 11, 1
  010d650  xor 4, 12, 4
  010d654  xor 9, 28, 9
  010d658  subc 4, 4, 10
  010d65c  subc 9, 9, 11
  010d660  cmpw 1, 4, 9
  010d664  bf 5, 0x10d684
  010d668  lwz 9, 0(5)
  010d66c  srawi 10, 9, 31
  010d670  srwi 11, 10, 1
  010d674  xor 9, 11, 9
  010d678  subc 9, 9, 10
  010d67c  cmpw 4, 9
  010d680  bt 1, 0x10d6bc
  010d684  bf 4, 0x10d6a4
  010d688  lwz 9, 0(5)
  010d68c  srawi 10, 9, 31
  010d690  srwi 11, 10, 1
  010d694  xor 9, 11, 9
  010d698  subc 9, 9, 10
  010d69c  cmpw 4, 9
  010d6a0  bt 0, 0x10d6bc
  010d6a4  addic 8, 8, 1
  010d6a8  addic 7, 7, 4
  010d6ac  cmpwi 8, 3
  010d6b0  addic 6, 6, 4
  010d6b4  addic 5, 5, 4
  010d6b8  bt 0, 0x10d638
  010d6bc  cmpwi 8, 3
  010d6c0  bf 0, 0x10d744
  010d6c4  fsubs 4, 8, 4
  010d6c8  fsubs 1, 8, 1
  010d6cc  fsubs 8, 9, 5
  010d6d0  fsubs 9, 9, 2
  010d6d4  fsubs 3, 6, 3
  010d6d8  fsubs 6, 6, 7
  010d6dc  fmuls 4, 4, 4
  010d6e0  fmuls 1, 1, 1
  010d6e4  fmadds 4, 8, 8, 4
  010d6e8  fmadds 1, 9, 9, 1
  010d6ec  fmadds 3, 3, 3, 4
  010d6f0  fmadds 1, 6, 6, 1
  010d6f4  fsqrts 3, 3
  010d6f8  fsqrts 1, 1
  010d6fc  fcmpu 0, 3, 1
  010d700  cror 6, 1, 2
  010d704  bt 6, 0x10d728
  010d708  stfs 5, 0(29)
  010d70c  lfs 1, 4(30)
  010d710  stfs 1, 4(29)
  010d714  lfs 1, 8(30)
  010d718  stfs 1, 8(29)
  010d71c  lfs 1, 12(30)
  010d720  stfs 1, 12(29)
  010d724  b 0x10d744
  010d728  stfs 2, 0(29)
  010d72c  lfs 1, 4(31)
  010d730  stfs 1, 4(29)
  010d734  lfs 1, 8(31)
  010d738  stfs 1, 8(29)
  010d73c  lfs 1, 12(31)
  010d740  stfs 1, 12(29)
  010d744  lfs 1, 4(3)
  010d748  lfs 2, 4(29)
  010d74c  lfs 3, 0(3)
  010d750  fsubs 1, 1, 2
  010d754  lfs 2, 0(29)
  010d758  lfs 4, 8(3)
  010d75c  fsubs 2, 3, 2
  010d760  lfs 3, 8(29)
  010d764  fsubs 3, 4, 3
  010d768  fmuls 1, 1, 1
  010d76c  fmadds 1, 2, 2, 1
  010d770  fmadds 1, 3, 3, 1
  010d774  fsqrts 1, 1
  010d778  ld 0, 160(1)
  010d77c  mtlr 0
  010d780  ld 28, 112(1)
  010d784  ld 29, 120(1)
  010d788  ld 30, 128(1)
  010d78c  ld 31, 136(1)
  010d790  addi 1, 1, 144
  010d794  blr

MB_PathFollowToPos:   # 0x10d7a0, 0x4d0 bytes
  010d7a0  stdu 1, -288(1)
  010d7a4  mflr 0
  010d7a8  std 0, 304(1)
  010d7ac  stfd 26, 240(1)
  010d7b0  stfd 27, 248(1)
  010d7b4  stfd 28, 256(1)
  010d7b8  stfd 29, 264(1)
  010d7bc  stfd 30, 272(1)
  010d7c0  stfd 31, 280(1)
  010d7c4  lis 8, 17
  010d7c8  li 10, 0
  010d7cc  fmr 29, 3
  010d7d0  addi 8, 8, -10344
  010d7d4  fmr 31, 1
  010d7d8  std 31, 232(1)
  010d7dc  fmr 30, 2
  010d7e0  ori 31, 3, 0
  010d7e4  stw 10, 144(1)
  010d7e8  lfs 3, 16(3)
  010d7ec  lfs 27, 0(8)
  010d7f0  stw 10, 148(1)
  010d7f4  std 30, 224(1)
  010d7f8  lfs 4, 20(3)
  010d7fc  ori 30, 4, 0
  010d800  std 29, 216(1)
  010d804  stfs 3, 112(1)
  010d808  ori 29, 5, 0
  010d80c  lfs 1, 24(3)
  010d810  fcmpu 0, 29, 27
  010d814  std 28, 208(1)
  010d818  stfs 4, 116(1)
  010d81c  ori 28, 6, 0
  010d820  std 27, 200(1)
  010d824  lfs 5, 28(3)
  010d828  ori 27, 7, 0
  010d82c  std 26, 192(1)
  010d830  stfs 1, 120(1)
  010d834  ori 26, 9, 0
  010d838  stfs 5, 124(1)
  010d83c  lfs 5, 4(4)
  010d840  lfs 6, 0(4)
  010d844  fsubs 4, 4, 5
  010d848  fsubs 3, 3, 6
  010d84c  lfs 2, 8(4)
  010d850  cror 6, 0, 2
  010d854  fmuls 4, 4, 4
  010d858  std 25, 184(1)
  010d85c  std 24, 176(1)
  010d860  std 23, 168(1)
  010d864  fmadds 3, 3, 3, 4
  010d868  bt 6, 0x10d87c
  010d86c  fsubs 4, 1, 2
  010d870  fabs 4, 4
  010d874  fcmpu 0, 4, 29
  010d878  bt 0, 0x10d888
  010d87c  fsubs 1, 1, 2
  010d880  fmadds 3, 1, 1, 3
  010d884  b 0x10d888
  010d888  lwz 3, 0(31)
  010d88c  fsqrts 26, 3
  010d890  cmpwi 3, 0
  010d894  bf 2, 0x10d8b0
  010d898  li 3, 0
  010d89c  stw 3, 12(29)
  010d8a0  stw 3, 8(29)
  010d8a4  stw 3, 4(29)
  010d8a8  stw 3, 0(29)
  010d8ac  b 0x10dc24
  010d8b0  li 25, 0
  010d8b4  fmr 28, 27
  010d8b8  addic 24, 1, 112
  010d8bc  addic 23, 1, 148
  010d8c0  fmr 1, 30
  010d8c4  addic 5, 1, 144
  010d8c8  ori 3, 31, 0
  010d8cc  ori 4, 24, 0
  010d8d0  ori 6, 23, 0
  010d8d4  ori 8, 26, 0
  010d8d8  bl 0x10ce18
  010d8dc  lfs 1, 116(1)
  010d8e0  lfs 2, 4(30)
  010d8e4  fcmpu 0, 29, 27
  010d8e8  lfs 3, 112(1)
  010d8ec  fsubs 4, 1, 2
  010d8f0  lfs 1, 0(30)
  010d8f4  fsubs 3, 3, 1
  010d8f8  lfs 1, 120(1)
  010d8fc  lfs 2, 8(30)
  010d900  cror 6, 0, 2
  010d904  fmuls 4, 4, 4
  010d908  fmadds 3, 3, 3, 4
  010d90c  bt 6, 0x10d920
  010d910  fsubs 4, 1, 2
  010d914  fabs 4, 4
  010d918  fcmpu 0, 4, 29
  010d91c  bt 0, 0x10d92c
  010d920  fsubs 1, 1, 2
  010d924  fmadds 3, 1, 1, 3
  010d928  b 0x10d92c
  010d92c  fsqrts 1, 3
  010d930  fcmpu 0, 26, 1
  010d934  cror 6, 0, 2
  010d938  bt 6, 0x10d948
  010d93c  lwz 25, 144(1)
  010d940  fmr 26, 1
  010d944  lfs 28, 148(1)
  010d948  cmpwi 3, 0
  010d94c  bt 2, 0x10d8c0
  010d950  fadds 1, 31, 30
  010d954  fcmpu 0, 26, 1
  010d958  cror 6, 0, 2
  010d95c  bt 6, 0x10d968
  010d960  li 3, 0
  010d964  b 0x10dc24
  010d968  stw 25, 152(1)
  010d96c  fneg 1, 30
  010d970  stfs 28, 148(1)
  010d974  addic 5, 1, 152
  010d978  ori 3, 31, 0
  010d97c  ori 4, 24, 0
  010d980  ori 6, 23, 0
  010d984  ori 8, 26, 0
  010d988  bl 0x10ce18
  010d98c  stw 25, 156(1)
  010d990  ori 4, 24, 0
  010d994  stfs 28, 148(1)
  010d998  addic 5, 1, 156
  010d99c  ori 3, 31, 0
  010d9a0  fmr 1, 30
  010d9a4  ori 6, 23, 0
  010d9a8  ori 8, 26, 0
  010d9ac  bl 0x10ce18
  010d9b0  lwz 24, 156(1)
  010d9b4  cmpwi 26, 0
  010d9b8  lwz 3, 152(1)
  010d9bc  bt 2, 0x10d9dc
  010d9c0  lwz 4, 0(31)
  010d9c4  addc 5, 24, 4
  010d9c8  addic 24, 5, 1
  010d9cc  divw 5, 24, 4
  010d9d0  mullw 5, 5, 4
  010d9d4  subc 24, 24, 5
  010d9d8  b 0x10da04
  010d9dc  lwz 4, 0(31)
  010d9e0  addic 24, 24, 1
  010d9e4  addic 6, 4, -1
  010d9e8  extsw 5, 24
  010d9ec  extsw 7, 6
  010d9f0  subc 6, 6, 24
  010d9f4  subc 5, 7, 5
  010d9f8  sradi 5, 5, 63
  010d9fc  and 5, 5, 6
  010da00  addc 24, 24, 5
  010da04  lis 5, 17
  010da08  stw 24, 156(1)
  010da0c  addi 5, 5, -10344
  010da10  lfs 4, 4(5)
  010da14  fmr 31, 4
  010da18  slwi 5, 3, 4
  010da1c  stw 3, 144(1)
  010da20  lfs 1, 4(30)
  010da24  fcmpu 0, 29, 27
  010da28  addc 5, 31, 5
  010da2c  lfs 2, 0(30)
  010da30  clrldi 6, 5, 32
  010da34  ori 5, 4, 0
  010da38  lfs 3, 20(6)
  010da3c  lfs 5, 16(6)
  010da40  fsubs 3, 3, 1
  010da44  cror 6, 0, 2
  010da48  fsubs 5, 5, 2
  010da4c  lfs 1, 24(6)
  010da50  lfs 2, 8(30)
  010da54  fmuls 3, 3, 3
  010da58  fmadds 3, 5, 5, 3
  010da5c  bt 6, 0x10da70
  010da60  fsubs 5, 1, 2
  010da64  fabs 5, 5
  010da68  fcmpu 0, 5, 29
  010da6c  bt 0, 0x10da7c
  010da70  fsubs 1, 1, 2
  010da74  fmadds 3, 1, 1, 3
  010da78  b 0x10da7c
  010da7c  fsqrts 1, 3
  010da80  cmpw 1, 3, 24
  010da84  fcmpu 0, 4, 1
  010da88  cror 2, 0, 2
  010da8c  bt 2, 0x10da98
  010da90  ori 25, 3, 0
  010da94  fmr 4, 1
  010da98  bt 6, 0x10dab0
  010da9c  addic 3, 3, 1
  010daa0  divw 5, 3, 4
  010daa4  mullw 5, 5, 4
  010daa8  subc 3, 3, 5
  010daac  b 0x10da18
  010dab0  cmpwi 25, 0
  010dab4  bt 1, 0x10dac0
  010dab8  cmpwi 26, 0
  010dabc  bt 2, 0x10db58
  010dac0  addc 3, 25, 4
  010dac4  addic 3, 3, -1
  010dac8  fmr 1, 29
  010dacc  divw 5, 3, 4
  010dad0  mullw 4, 5, 4
  010dad4  sldi 5, 25, 4
  010dad8  subc 24, 3, 4
  010dadc  addc 5, 31, 5
  010dae0  sldi 4, 24, 4
  010dae4  addic 7, 5, 16
  010dae8  addc 6, 31, 4
  010daec  ori 3, 29, 0
  010daf0  addic 6, 6, 16
  010daf4  ori 4, 30, 0
  010daf8  clrldi 5, 6, 32
  010dafc  clrldi 6, 7, 32
  010db00  bl 0x10d408
  010db04  slwi 3, 24, 4
  010db08  stw 24, 0(28)
  010db0c  addc 3, 31, 3
  010db10  lfs 2, 4(29)
  010db14  clrldi 3, 3, 32
  010db18  lfs 3, 0(29)
  010db1c  fmr 31, 1
  010db20  lfs 4, 20(3)
  010db24  lfs 5, 16(3)
  010db28  fsubs 2, 4, 2
  010db2c  fsubs 3, 5, 3
  010db30  lfs 4, 24(3)
  010db34  lfs 5, 8(29)
  010db38  fsubs 4, 4, 5
  010db3c  fmuls 2, 2, 2
  010db40  fmadds 2, 3, 3, 2
  010db44  fmadds 2, 4, 4, 2
  010db48  fsqrts 2, 2
  010db4c  stfs 2, 0(27)
  010db50  lwz 5, 0(31)
  010db54  ori 4, 5, 0
  010db58  addic 3, 5, -1
  010db5c  cmpw 25, 3
  010db60  bt 0, 0x10db6c
  010db64  cmpwi 26, 0
  010db68  bt 2, 0x10dc20
  010db6c  addic 3, 25, 1
  010db70  divw 5, 3, 5
  010db74  mullw 4, 5, 4
  010db78  fmr 1, 29
  010db7c  sldi 5, 25, 4
  010db80  subc 4, 3, 4
  010db84  addc 5, 31, 5
  010db88  sldi 4, 4, 4
  010db8c  addic 5, 5, 16
  010db90  addc 6, 31, 4
  010db94  addic 3, 1, 128
  010db98  addic 6, 6, 16
  010db9c  ori 4, 30, 0
  010dba0  clrldi 5, 5, 32
  010dba4  clrldi 6, 6, 32
  010dba8  bl 0x10d408
  010dbac  fcmpu 0, 31, 1
  010dbb0  cror 6, 0, 2
  010dbb4  bt 6, 0x10dc20
  010dbb8  lfs 1, 128(1)
  010dbbc  slwi 3, 25, 4
  010dbc0  stfs 1, 0(29)
  010dbc4  lfs 1, 132(1)
  010dbc8  addc 3, 31, 3
  010dbcc  stfs 1, 4(29)
  010dbd0  clrldi 3, 3, 32
  010dbd4  lfs 1, 136(1)
  010dbd8  stfs 1, 8(29)
  010dbdc  lfs 1, 140(1)
  010dbe0  stfs 1, 12(29)
  010dbe4  stw 25, 0(28)
  010dbe8  lfs 1, 20(3)
  010dbec  lfs 2, 16(3)
  010dbf0  lfs 3, 24(3)
  010dbf4  lfs 4, 0(29)
  010dbf8  lfs 5, 4(29)
  010dbfc  fsubs 2, 2, 4
  010dc00  fsubs 1, 1, 5
  010dc04  lfs 4, 8(29)
  010dc08  fsubs 3, 3, 4
  010dc0c  fmuls 1, 1, 1
  010dc10  fmadds 1, 2, 2, 1
  010dc14  fmadds 1, 3, 3, 1
  010dc18  fsqrts 1, 1
  010dc1c  stfs 1, 0(27)
  010dc20  li 3, 1
  010dc24  ld 0, 304(1)
  010dc28  mtlr 0
  010dc2c  lfd 26, 240(1)
  010dc30  lfd 27, 248(1)
  010dc34  lfd 28, 256(1)
  010dc38  lfd 29, 264(1)
  010dc3c  lfd 30, 272(1)
  010dc40  lfd 31, 280(1)
  010dc44  ld 23, 168(1)
  010dc48  ld 24, 176(1)
  010dc4c  ld 25, 184(1)
  010dc50  ld 26, 192(1)
  010dc54  ld 27, 200(1)
  010dc58  ld 28, 208(1)
  010dc5c  ld 29, 216(1)
  010dc60  ld 30, 224(1)
  010dc64  ld 31, 232(1)
  010dc68  addi 1, 1, 288
  010dc6c  blr

MB_CheckCollPill:   # 0x10dc70, 0x1f8 bytes
  010dc70  stdu 1, -192(1)
  010dc74  mflr 0
  010dc78  std 0, 208(1)
  010dc7c  std 30, 176(1)
  010dc80  ori 30, 3, 0
  010dc84  std 31, 184(1)
  010dc88  lwz 3, 148(3)
  010dc8c  std 28, 160(1)
  010dc90  ori 31, 4, 0
  010dc94  ori 28, 5, 0
  010dc98  std 29, 168(1)
  010dc9c  cmpwi 3, 0
  010dca0  ori 29, 6, 0
  010dca4  bf 2, 0x10dcb8
  010dca8  lis 3, 101
  010dcac  addic 3, 3, 12128
  010dcb0  bl 0x5cd098
  010dcb4  nop
  010dcb8  ori 4, 28, 0
  010dcbc  addic 5, 1, 152
  010dcc0  addic 6, 1, 112
  010dcc4  addic 7, 1, 144
  010dcc8  addic 8, 1, 148
  010dccc  ori 3, 30, 0
  010dcd0  bl 0xf00a0
  010dcd4  nop
  010dcd8  lwz 28, 152(1)
  010dcdc  cmpwi 29, 0
  010dce0  lfs 6, 144(1)
  010dce4  lfs 5, 148(1)
  010dce8  bt 2, 0x10dd3c
  010dcec  lfs 1, 112(1)
  010dcf0  lfs 2, 16(30)
  010dcf4  lfs 3, 116(1)
  010dcf8  fsubs 1, 1, 2
  010dcfc  lfs 2, 20(30)
  010dd00  lfs 4, 120(1)
  010dd04  fsubs 2, 3, 2
  010dd08  lfs 3, 24(30)
  010dd0c  fsubs 3, 4, 3
  010dd10  stfs 1, 112(1)
  010dd14  stfs 2, 116(1)
  010dd18  stfs 3, 120(1)
  010dd1c  lfs 4, 0(29)
  010dd20  lfs 7, 4(29)
  010dd24  fadds 1, 4, 1
  010dd28  lfs 4, 8(29)
  010dd2c  fadds 2, 7, 2
  010dd30  fadds 3, 4, 3
  010dd34  lfs 4, 12(29)
  010dd38  b 0x10dd4c
  010dd3c  lfs 1, 112(1)
  010dd40  lfs 2, 116(1)
  010dd44  lfs 3, 120(1)
  010dd48  lfs 4, 124(1)
  010dd4c  stfs 1, 128(1)
  010dd50  stfs 2, 132(1)
  010dd54  cmpwi 28, 2
  010dd58  stfs 3, 136(1)
  010dd5c  stfs 4, 140(1)
  010dd60  bt 1, 0x10dd70
  010dd64  cmpwi 28, -1
  010dd68  bf 1, 0x10ddb8
  010dd6c  b 0x10dd7c
  010dd70  cmpwi 28, 4
  010dd74  bf 1, 0x10dd98
  010dd78  b 0x10ddb8
  010dd7c  addic 3, 1, 128
  010dd80  fmr 1, 6
  010dd84  ori 5, 31, 0
  010dd88  ori 6, 30, 0
  010dd8c  bl 0x59e20
  010dd90  nop
  010dd94  b 0x10ddd4
  010dd98  fmr 1, 6
  010dd9c  addic 3, 1, 128
  010dda0  fmr 2, 5
  010dda4  ori 6, 31, 0
  010dda8  ori 7, 30, 0
  010ddac  bl 0x5c710
  010ddb0  nop
  010ddb4  b 0x10ddd4
  010ddb8  lis 3, 101
  010ddbc  extsw 4, 28
  010ddc0  addic 3, 3, 12192
  010ddc4  bl 0x5cd098
  010ddc8  nop
  010ddcc  li 3, 0
  010ddd0  b 0x10de48
  010ddd4  cmpwi 3, 0
  010ddd8  bt 2, 0x10de48
  010dddc  lfs 1, 20(30)
  010dde0  lfs 2, 132(1)
  010dde4  lis 4, 161
  010dde8  lfs 3, 24(30)
  010ddec  fsubs 1, 1, 2
  010ddf0  lfs 2, 136(1)
  010ddf4  addic 4, 4, 2368
  010ddf8  fsubs 2, 3, 2
  010ddfc  lfs 3, 16(30)
  010de00  lfs 4, 128(1)
  010de04  fsubs 3, 3, 4
  010de08  stfs 1, 116(1)
  010de0c  stfs 2, 120(1)
  010de10  lfs 1, 48(4)
  010de14  lfs 2, 52(4)
  010de18  fadds 1, 1, 3
  010de1c  lfs 4, 56(4)
  010de20  stfs 3, 112(1)
  010de24  lfs 3, 28(30)
  010de28  stfs 3, 124(1)
  010de2c  stfs 1, 48(4)
  010de30  lfs 1, 116(1)
  010de34  fadds 1, 2, 1
  010de38  lfs 2, 120(1)
  010de3c  fadds 2, 4, 2
  010de40  stfs 1, 52(4)
  010de44  stfs 2, 56(4)
  010de48  ld 0, 208(1)
  010de4c  mtlr 0
  010de50  ld 28, 160(1)
  010de54  ld 29, 168(1)
  010de58  ld 30, 176(1)
  010de5c  ld 31, 184(1)
  010de60  addi 1, 1, 192
  010de64  blr

MB_WrapRot:   # 0x10de78, 0x58 bytes
  010de78  stdu 1, -144(1)
  010de7c  mflr 0
  010de80  std 0, 160(1)
  010de84  stfd 31, 136(1)
  010de88  lis 3, 17
  010de8c  std 31, 128(1)
  010de90  addic 4, 1, 112
  010de94  addi 31, 3, -8600
  010de98  lfs 31, 0(31)
  010de9c  lfs 2, 4(31)
  010dea0  fadds 1, 1, 31
  010dea4  fmuls 1, 1, 2
  010dea8  bl 0x5026dc
  010deac  nop
  010deb0  lfs 2, 8(31)
  010deb4  fmsubs 1, 1, 2, 31
  010deb8  ld 0, 160(1)
  010debc  mtlr 0
  010dec0  lfd 31, 136(1)
  010dec4  ld 31, 128(1)
  010dec8  addi 1, 1, 144
  010decc  blr

???_MB_IsInvalidOrClass502:   # 0x10ded0, 0x68 bytes
  010ded0  cmpwi 3, 0
  010ded4  bf 2, 0x10dee0
  010ded8  li 3, 0
  010dedc  b 0x10df34
  010dee0  cmpwi 3, 0
  010dee4  bt 2, 0x10df30
  010dee8  lis 4, 164
  010deec  lwz 4, -28512(4)
  010def0  cmplw 3, 4
  010def4  bt 0, 0x10df30
  010def8  lis 4, 164
  010defc  lwz 4, -28504(4)
  010df00  cmplw 3, 4
  010df04  bt 1, 0x10df30
  010df08  lhz 3, 166(3)
  010df0c  extsh 4, 3
  010df10  cmpwi 1, 4, 540
  010df14  cmpwi 4, 500
  010df18  cror 2, 0, 5
  010df1c  bt 2, 0x10df30
  010df20  addic 3, 3, -502
  010df24  cntlzw 3, 3
  010df28  rlwinm 3, 3, 27, 31, 31
  010df2c  b 0x10df34
  010df30  li 3, 1
  010df34  blr

MB_isAmmo:   # 0x10df38, 0x54 bytes
  010df38  lhz 3, 166(3)
  010df3c  li 4, 0
  010df40  cmpwi 1, 3, 204
  010df44  cmpwi 3, 226
  010df48  cror 2, 2, 6
  010df4c  bt 2, 0x10df80
  010df50  cmpwi 3, 222
  010df54  bt 2, 0x10df80
  010df58  cmpwi 3, 1006
  010df5c  bt 2, 0x10df80
  010df60  cmpwi 3, 214
  010df64  bt 2, 0x10df80
  010df68  cmpwi 3, 225
  010df6c  bt 2, 0x10df80
  010df70  cmpwi 3, 213
  010df74  bt 2, 0x10df80
  010df78  cmpwi 3, 223
  010df7c  bf 2, 0x10df84
  010df80  li 4, 1
  010df84  ori 3, 4, 0
  010df88  blr

MB_genericExplosion:   # 0x10e030, 0x1abc bytes
  010e030  stdu 1, -768(1)
  010e034  mflr 0
  010e038  std 0, 784(1)
  010e03c  stfd 14, 624(1)
  010e040  stfd 15, 632(1)
  010e044  stfd 16, 640(1)
  010e048  stfd 17, 648(1)
  010e04c  stfd 18, 656(1)
  010e050  stfd 19, 664(1)
  010e054  stfd 20, 672(1)
  010e058  stfd 21, 680(1)
  010e05c  stfd 22, 688(1)
  010e060  stfd 23, 696(1)
  010e064  stfd 24, 704(1)
  010e068  stfd 25, 712(1)
  010e06c  stfd 26, 720(1)
  010e070  stfd 27, 728(1)
  010e074  stfd 28, 736(1)
  010e078  stfd 29, 744(1)
  010e07c  stfd 30, 752(1)
  010e080  stfd 31, 760(1)
  010e084  std 16, 496(1)
  010e088  lis 4, 17
  010e08c  li 16, 0
  010e090  fmr 31, 3
  010e094  addi 4, 4, -8308
  010e098  std 14, 480(1)
  010e09c  fmr 30, 4
  010e0a0  lis 14, 114
  010e0a4  fmr 29, 6
  010e0a8  std 15, 488(1)
  010e0ac  fmr 28, 7
  010e0b0  ori 15, 5, 0
  010e0b4  li 6, 768
  010e0b8  lfs 26, 0(4)
  010e0bc  lis 5, 161
  010e0c0  std 24, 560(1)
  010e0c4  stw 16, 128(1)
  010e0c8  addc 24, 1, 6
  010e0cc  stw 16, 132(1)
  010e0d0  lis 7, 161
  010e0d4  std 25, 568(1)
  010e0d8  stw 16, 136(1)
  010e0dc  ori 25, 8, 0
  010e0e0  stw 16, 140(1)
  010e0e4  fcmpu 1, 1, 26
  010e0e8  std 23, 552(1)
  010e0ec  lfs 25, 4(4)
  010e0f0  ori 23, 9, 0
  010e0f4  std 22, 544(1)
  010e0f8  lfs 8, -3052(14)
  010e0fc  lwz 22, 188(24)
  010e100  std 21, 536(1)
  010e104  fmuls 3, 8, 25
  010e108  lwz 21, 180(24)
  010e10c  std 28, 592(1)
  010e110  lwz 4, 148(24)
  010e114  clrlwi 28, 22, 24
  010e118  lwz 6, 164(24)
  010e11c  cmpwi 21, -1
  010e120  lwz 24, 172(24)
  010e124  std 4, 440(1)
  010e128  std 6, 448(1)
  010e12c  ori 4, 3, 0
  010e130  lfs 8, 1816(5)
  010e134  lfs 9, 1812(7)
  010e138  std 10, 408(1)
  010e13c  fmuls 10, 3, 6
  010e140  stfd 5, 384(1)
  010e144  fadds 3, 8, 9
  010e148  std 31, 616(1)
  010e14c  std 30, 608(1)
  010e150  std 29, 600(1)
  010e154  std 27, 584(1)
  010e158  std 26, 576(1)
  010e15c  std 20, 528(1)
  010e160  std 19, 520(1)
  010e164  std 18, 512(1)
  010e168  std 17, 504(1)
  010e16c  stfs 10, 136(1)
  010e170  bf 2, 0x10e198
  010e174  lis 3, 17
  010e178  addi 3, 3, -8308
  010e17c  lfs 4, 8(3)
  010e180  ori 3, 16, 0
  010e184  fcmpu 0, 3, 4
  010e188  cror 2, 0, 2
  010e18c  bt 2, 0x10e194
  010e190  li 3, 1
  010e194  ori 21, 3, 0
  010e198  cmpwi 15, 0
  010e19c  bf 2, 0x10e1ac
  010e1a0  cmpwi 4, 0
  010e1a4  bt 2, 0x10fa4c
  010e1a8  addic 15, 4, 16
  010e1ac  std 4, 416(1)
  010e1b0  bf 5, 0x10e210
  010e1b4  lis 3, 129
  010e1b8  std 4, 416(1)
  010e1bc  stw 4, 256(1)
  010e1c0  li 8, 2
  010e1c4  ori 3, 3, 1
  010e1c8  li 9, 1
  010e1cc  ori 6, 4, 0
  010e1d0  addic 7, 1, 240
  010e1d4  stw 3, 260(1)
  010e1d8  li 5, 16
  010e1dc  stfs 2, 268(1)
  010e1e0  ori 3, 15, 0
  010e1e4  stw 16, 272(1)
  010e1e8  stw 16, 252(1)
  010e1ec  stw 16, 248(1)
  010e1f0  stw 16, 244(1)
  010e1f4  stw 16, 240(1)
  010e1f8  stb 8, 264(1)
  010e1fc  lhz 4, 166(4)
  010e200  stb 9, 265(1)
  010e204  sth 4, 266(1)
  010e208  bl 0x5e598
  010e20c  nop
  010e210  cmpwi 25, 0
  010e214  std 28, 392(1)
  010e218  std 22, 400(1)
  010e21c  bf 1, 0x10e5d4
  010e220  lis 26, 17
  010e224  std 14, 456(1)
  010e228  li 3, 0
  010e22c  addi 18, 26, -8308
  010e230  std 28, 392(1)
  010e234  clrlwi 6, 22, 31
  010e238  li 5, 0
  010e23c  subc 3, 3, 6
  010e240  li 8, 127
  010e244  lfs 22, 24(18)
  010e248  cntlzw 3, 3
  010e24c  std 22, 400(1)
  010e250  subc 5, 5, 6
  010e254  lfs 27, 12(18)
  010e258  li 26, 255
  010e25c  lfs 24, 16(18)
  010e260  sldi 3, 3, 58
  010e264  lfs 23, 20(18)
  010e268  cntlzw 5, 5
  010e26c  lfs 21, 28(18)
  010e270  subc 8, 8, 26
  010e274  lfs 20, 32(18)
  010e278  sradi 3, 3, 63
  010e27c  lfs 19, 36(18)
  010e280  li 9, 0
  010e284  lfs 18, 40(18)
  010e288  rlwinm 27, 22, 0, 30, 30
  010e28c  lfs 17, 44(18)
  010e290  li 7, 255
  010e294  li 10, 0
  010e298  sldi 5, 5, 58
  010e29c  and 3, 3, 8
  010e2a0  li 18, 127
  010e2a4  subc 8, 9, 27
  010e2a8  sradi 5, 5, 63
  010e2ac  subc 10, 10, 27
  010e2b0  subc 7, 7, 18
  010e2b4  cntlzw 8, 8
  010e2b8  cntlzw 10, 10
  010e2bc  and 5, 5, 7
  010e2c0  sldi 7, 8, 58
  010e2c4  li 11, 0
  010e2c8  addc 3, 26, 3
  010e2cc  sldi 8, 10, 58
  010e2d0  subc 10, 11, 3
  010e2d4  sradi 8, 8, 63
  010e2d8  li 20, 0
  010e2dc  rlwinm 22, 22, 0, 29, 29
  010e2e0  and 8, 8, 10
  010e2e4  li 31, 0
  010e2e8  li 17, 0
  010e2ec  subc 11, 20, 22
  010e2f0  li 20, 0
  010e2f4  addc 8, 3, 8
  010e2f8  sradi 7, 7, 63
  010e2fc  subc 10, 31, 22
  010e300  subc 3, 3, 17
  010e304  li 4, 0
  010e308  subc 31, 20, 6
  010e30c  and 3, 7, 3
  010e310  subc 4, 4, 6
  010e314  cntlzw 7, 31
  010e318  cntlzw 6, 11
  010e31c  li 29, 127
  010e320  li 11, 0
  010e324  sldi 7, 7, 58
  010e328  cntlzw 4, 4
  010e32c  subc 29, 29, 11
  010e330  sradi 7, 7, 63
  010e334  li 12, 0
  010e338  li 31, 127
  010e33c  sldi 4, 4, 58
  010e340  and 7, 7, 29
  010e344  li 30, 0
  010e348  cntlzw 10, 10
  010e34c  subc 12, 12, 31
  010e350  sradi 4, 4, 63
  010e354  addc 5, 18, 5
  010e358  sldi 6, 6, 58
  010e35c  li 29, 0
  010e360  addc 7, 11, 7
  010e364  sldi 10, 10, 58
  010e368  and 4, 4, 12
  010e36c  subc 11, 30, 27
  010e370  sradi 6, 6, 63
  010e374  subc 12, 29, 27
  010e378  subc 30, 8, 5
  010e37c  sradi 10, 10, 63
  010e380  subc 29, 5, 8
  010e384  and 6, 6, 30
  010e388  and 10, 10, 29
  010e38c  addc 5, 5, 6
  010e390  addc 3, 17, 3
  010e394  addc 6, 8, 10
  010e398  fmuls 22, 22, 29
  010e39c  cntlzw 8, 12
  010e3a0  rlwimi 6, 3, 8, 16, 23
  010e3a4  cntlzw 3, 11
  010e3a8  addc 4, 31, 4
  010e3ac  sldi 8, 8, 58
  010e3b0  sldi 3, 3, 58
  010e3b4  li 10, 0
  010e3b8  li 12, 0
  010e3bc  subc 11, 4, 10
  010e3c0  subc 12, 12, 4
  010e3c4  sradi 8, 8, 63
  010e3c8  sradi 3, 3, 63
  010e3cc  li 19, 0
  010e3d0  li 31, 0
  010e3d4  and 8, 8, 11
  010e3d8  and 3, 3, 12
  010e3dc  subc 11, 19, 22
  010e3e0  subc 12, 31, 22
  010e3e4  addc 8, 10, 8
  010e3e8  addc 3, 4, 3
  010e3ec  cntlzw 10, 11
  010e3f0  cntlzw 4, 12
  010e3f4  sldi 10, 10, 58
  010e3f8  sldi 4, 4, 58
  010e3fc  subc 11, 3, 7
  010e400  subc 12, 7, 3
  010e404  sradi 10, 10, 63
  010e408  sradi 4, 4, 63
  010e40c  and 10, 10, 11
  010e410  and 4, 4, 12
  010e414  addc 7, 7, 10
  010e418  addc 3, 3, 4
  010e41c  li 10, 0
  010e420  li 4, 0
  010e424  oris 6, 6, 20224
  010e428  rlwimi 3, 8, 8, 17, 23
  010e42c  subc 4, 4, 28
  010e430  subc 8, 10, 28
  010e434  rlwimi 6, 5, 16, 8, 15
  010e438  lis 9, 20224
  010e43c  lis 14, 7936
  010e440  oris 3, 3, 7936
  010e444  cntlzw 5, 8
  010e448  cntlzw 4, 4
  010e44c  ori 9, 9, 32767
  010e450  ori 14, 14, 127
  010e454  rlwimi 3, 7, 16, 9, 15
  010e458  sldi 5, 5, 58
  010e45c  sldi 4, 4, 58
  010e460  sldi 26, 21, 3
  010e464  subc 7, 9, 6
  010e468  subc 8, 14, 3
  010e46c  sradi 4, 4, 63
  010e470  ld 14, 456(1)
  010e474  sradi 5, 5, 63
  010e478  addc 26, 21, 26
  010e47c  and 28, 4, 8
  010e480  and 27, 5, 7
  010e484  addc 26, 21, 26
  010e488  ori 29, 16, 0
  010e48c  addc 28, 3, 28
  010e490  addc 27, 6, 27
  010e494  bl 0x5c8318
  010e498  nop
  010e49c  srawi 3, 3, 15
  010e4a0  clrlwi 3, 3, 17
  010e4a4  extsw 3, 3
  010e4a8  std 3, 464(1)
  010e4ac  lfd 1, 464(1)
  010e4b0  fcfid 1, 1
  010e4b4  frsp 1, 1
  010e4b8  fmadds 16, 1, 19, 27
  010e4bc  bl 0x5c8318
  010e4c0  nop
  010e4c4  srawi 3, 3, 15
  010e4c8  clrlwi 3, 3, 20
  010e4cc  addic 3, 3, -2048
  010e4d0  extsw 3, 3
  010e4d4  std 3, 464(1)
  010e4d8  lfd 1, 464(1)
  010e4dc  fcfid 1, 1
  010e4e0  frsp 1, 1
  010e4e4  fmuls 15, 1, 18
  010e4e8  bl 0x5c8318
  010e4ec  nop
  010e4f0  srawi 3, 3, 15
  010e4f4  clrlwi 3, 3, 17
  010e4f8  fmr 2, 15
  010e4fc  extsw 3, 3
  010e500  fmr 3, 16
  010e504  addic 31, 1, 144
  010e508  std 3, 464(1)
  010e50c  lfs 1, -3052(14)
  010e510  lfd 4, 464(1)
  010e514  fcfid 4, 4
  010e518  ori 3, 31, 0
  010e51c  frsp 4, 4
  010e520  fmadds 4, 4, 17, 24
  010e524  fmuls 1, 4, 1
  010e528  fmuls 1, 1, 29
  010e52c  bl 0xfe610
  010e530  lis 3, 114
  010e534  lfs 1, 152(1)
  010e538  lfs 2, -3052(14)
  010e53c  fmadds 1, 2, 23, 1
  010e540  lfs 3, -3056(3)
  010e544  fmuls 4, 3, 21
  010e548  fmuls 3, 3, 20
  010e54c  stfs 1, 152(1)
  010e550  fctiwz 2, 4
  010e554  fctiwz 3, 3
  010e558  stfd 2, 464(1)
  010e55c  lwz 30, 468(1)
  010e560  stfd 3, 464(1)
  010e564  lwz 22, 468(1)
  010e568  bl 0x5c8318
  010e56c  nop
  010e570  srawi 3, 3, 15
  010e574  subc 4, 22, 30
  010e578  clrlwi 5, 3, 17
  010e57c  addic 3, 4, 1
  010e580  divw 3, 5, 3
  010e584  mullw 4, 3, 4
  010e588  li 6, -1
  010e58c  fmr 1, 22
  010e590  addc 4, 4, 3
  010e594  ori 3, 15, 0
  010e598  subc 5, 5, 4
  010e59c  std 6, 112(1)
  010e5a0  addc 5, 5, 30
  010e5a4  ori 4, 31, 0
  010e5a8  subc 8, 5, 26
  010e5ac  li 9, 1
  010e5b0  extsw 8, 8
  010e5b4  li 10, -1
  010e5b8  ori 5, 27, 0
  010e5bc  ori 6, 28, 0
  010e5c0  bl 0x124e10
  010e5c4  nop
  010e5c8  addic 29, 29, 1
  010e5cc  cmpw 29, 25
  010e5d0  bt 0, 0x10e494
  010e5d4  lis 3, 149
  010e5d8  lfs 22, 4(15)
  010e5dc  addic 3, 3, 5056
  010e5e0  cmpwi 24, 0
  010e5e4  lfs 1, 324(3)
  010e5e8  lfs 23, 320(3)
  010e5ec  fsubs 22, 1, 22
  010e5f0  lfs 1, 0(15)
  010e5f4  lfs 21, 328(3)
  010e5f8  fsubs 23, 23, 1
  010e5fc  lfs 1, 8(15)
  010e600  std 3, 424(1)
  010e604  fsubs 21, 21, 1
  010e608  fmuls 20, 22, 22
  010e60c  fmadds 20, 23, 23, 20
  010e610  fmadds 27, 21, 21, 20
  010e614  fsqrts 27, 27
  010e618  bt 2, 0x10ea7c
  010e61c  stw 16, 160(1)
  010e620  stw 16, 164(1)
  010e624  stw 16, 168(1)
  010e628  stw 16, 172(1)
  010e62c  bl 0x5c8318
  010e630  nop
  010e634  srawi 3, 3, 15
  010e638  clrlwi 3, 3, 17
  010e63c  extsw 3, 3
  010e640  std 3, 464(1)
  010e644  lis 3, 17
  010e648  addi 31, 3, -8308
  010e64c  lfs 24, 48(31)
  010e650  lfs 19, 52(31)
  010e654  lfs 2, 56(31)
  010e658  lfd 1, 464(1)
  010e65c  fmr 18, 2
  010e660  fcfid 1, 1
  010e664  frsp 1, 1
  010e668  fmuls 1, 1, 24
  010e66c  fmadds 1, 1, 19, 18
  010e670  stfs 1, 160(1)
  010e674  bl 0x5c8318
  010e678  nop
  010e67c  srawi 3, 3, 15
  010e680  clrlwi 3, 3, 17
  010e684  extsw 3, 3
  010e688  std 3, 464(1)
  010e68c  lfd 1, 464(1)
  010e690  fcfid 1, 1
  010e694  frsp 1, 1
  010e698  fmuls 1, 1, 24
  010e69c  fmadds 1, 1, 19, 18
  010e6a0  stfs 1, 164(1)
  010e6a4  bl 0x5c8318
  010e6a8  nop
  010e6ac  srawi 3, 3, 15
  010e6b0  clrlwi 3, 3, 17
  010e6b4  extsw 3, 3
  010e6b8  std 3, 464(1)
  010e6bc  lfd 1, 464(1)
  010e6c0  fcfid 1, 1
  010e6c4  frsp 1, 1
  010e6c8  fmuls 1, 1, 24
  010e6cc  fmadds 1, 1, 19, 18
  010e6d0  stfs 1, 168(1)
  010e6d4  lfs 2, 60(31)
  010e6d8  fcmpu 0, 27, 2
  010e6dc  cror 6, 1, 2
  010e6e0  bt 6, 0x10e890
  010e6e4  lfs 2, 164(1)
  010e6e8  lis 3, 17
  010e6ec  fmuls 4, 2, 2
  010e6f0  addi 3, 3, -8308
  010e6f4  fmuls 9, 27, 24
  010e6f8  lfs 3, 64(3)
  010e6fc  lfs 5, 160(1)
  010e700  fmadds 3, 27, 3, 21
  010e704  fmadds 4, 5, 5, 4
  010e708  lfs 6, 68(3)
  010e70c  lfs 8, -3052(14)
  010e710  fmuls 6, 27, 6
  010e714  fmuls 9, 9, 8
  010e718  fmadds 7, 3, 3, 20
  010e71c  fmadds 4, 1, 1, 4
  010e720  fmuls 6, 6, 8
  010e724  fsqrts 7, 7
  010e728  fsqrts 4, 4
  010e72c  fdivs 9, 9, 7
  010e730  fsub 13, 26, 7
  010e734  fsub 20, 7, 26
  010e738  fsub 19, 26, 7
  010e73c  fsub 18, 26, 7
  010e740  fsub 17, 7, 26
  010e744  fsub 7, 7, 26
  010e748  fdivs 6, 6, 4
  010e74c  fsub 10, 26, 4
  010e750  fsub 11, 26, 4
  010e754  fsub 21, 26, 4
  010e758  fsub 12, 4, 26
  010e75c  fsub 0, 4, 26
  010e760  fsub 4, 4, 26
  010e764  fmuls 22, 22, 9
  010e768  fmuls 3, 3, 9
  010e76c  fmuls 2, 2, 6
  010e770  fmuls 5, 5, 6
  010e774  fmuls 1, 1, 6
  010e778  fsel 6, 10, 26, 2
  010e77c  fsel 10, 11, 26, 5
  010e780  fsel 11, 21, 26, 1
  010e784  fsel 6, 12, 6, 2
  010e788  fmuls 2, 23, 9
  010e78c  fsel 4, 4, 11, 1
  010e790  fsel 1, 13, 26, 22
  010e794  fsel 5, 0, 10, 5
  010e798  fsel 10, 18, 26, 3
  010e79c  fsel 9, 19, 26, 2
  010e7a0  fsel 1, 20, 1, 22
  010e7a4  stfs 5, 160(1)
  010e7a8  stfs 6, 164(1)
  010e7ac  stfs 4, 168(1)
  010e7b0  fsel 23, 17, 9, 2
  010e7b4  fsel 2, 7, 10, 3
  010e7b8  fadds 1, 6, 1
  010e7bc  fadds 23, 5, 23
  010e7c0  fadds 2, 4, 2
  010e7c4  fmuls 3, 1, 1
  010e7c8  fmadds 3, 23, 23, 3
  010e7cc  stfs 23, 160(1)
  010e7d0  stfs 1, 164(1)
  010e7d4  stfs 2, 168(1)
  010e7d8  fmadds 4, 2, 2, 3
  010e7dc  lfs 3, 72(3)
  010e7e0  fmuls 3, 8, 3
  010e7e4  fsqrts 4, 4
  010e7e8  fcmpu 0, 3, 4
  010e7ec  cror 6, 1, 2
  010e7f0  bt 6, 0x10e810
  010e7f4  fdivs 3, 3, 4
  010e7f8  fmuls 4, 23, 3
  010e7fc  fmuls 1, 1, 3
  010e800  fmuls 2, 2, 3
  010e804  stfs 4, 160(1)
  010e808  stfs 1, 164(1)
  010e80c  stfs 2, 168(1)
  010e810  lis 3, 17
  010e814  lis 4, 114
  010e818  addi 3, 3, -8308
  010e81c  lfs 1, 28(3)
  010e820  lfs 2, -3056(4)
  010e824  fmuls 1, 2, 1
  010e828  fctiwz 1, 1
  010e82c  stfd 1, 464(1)
  010e830  lfs 1, 76(3)
  010e834  lwz 31, 468(1)
  010e838  fmuls 1, 2, 1
  010e83c  fctiwz 1, 1
  010e840  stfd 1, 464(1)
  010e844  lwz 30, 468(1)
  010e848  bl 0x5c8318
  010e84c  nop
  010e850  srawi 3, 3, 15
  010e854  subc 5, 30, 31
  010e858  clrlwi 3, 3, 17
  010e85c  addic 6, 5, 1
  010e860  divw 6, 3, 6
  010e864  mullw 5, 6, 5
  010e868  addic 4, 1, 160
  010e86c  addc 5, 5, 6
  010e870  li 6, 0
  010e874  subc 5, 3, 5
  010e878  ori 3, 15, 0
  010e87c  addc 5, 5, 31
  010e880  li 7, 0
  010e884  extsw 5, 5
  010e888  bl 0x20bb70
  010e88c  nop
  010e890  lis 3, 165
  010e894  addic 4, 24, -1
  010e898  li 8, 10
  010e89c  extsw 5, 4
  010e8a0  li 31, 0
  010e8a4  lwz 3, -9488(3)
  010e8a8  ori 24, 16, 0
  010e8ac  addic 6, 3, -10
  010e8b0  extsw 3, 3
  010e8b4  extsw 7, 6
  010e8b8  subc 6, 6, 4
  010e8bc  subc 5, 7, 5
  010e8c0  subc 3, 8, 3
  010e8c4  sradi 5, 5, 63
  010e8c8  sradi 3, 3, 63
  010e8cc  and 5, 5, 6
  010e8d0  addc 4, 4, 5
  010e8d4  subc 4, 4, 31
  010e8d8  and 3, 3, 4
  010e8dc  addc 31, 31, 3
  010e8e0  cmpwi 31, 0
  010e8e4  bf 1, 0x10ea7c
  010e8e8  lis 3, 17
  010e8ec  addi 3, 3, -8308
  010e8f0  lfs 23, 12(3)
  010e8f4  lfs 22, 16(3)
  010e8f8  lfs 21, 28(3)
  010e8fc  lfs 20, 76(3)
  010e900  lfs 19, 80(3)
  010e904  lfs 18, 40(3)
  010e908  lfs 17, 44(3)
  010e90c  bl 0x5c8318
  010e910  nop
  010e914  srawi 3, 3, 15
  010e918  clrlwi 3, 3, 17
  010e91c  extsw 3, 3
  010e920  std 3, 464(1)
  010e924  lfd 1, 464(1)
  010e928  fcfid 1, 1
  010e92c  frsp 1, 1
  010e930  fmadds 16, 1, 19, 23
  010e934  bl 0x5c8318
  010e938  nop
  010e93c  srawi 3, 3, 15
  010e940  clrlwi 3, 3, 20
  010e944  addic 3, 3, -2048
  010e948  extsw 3, 3
  010e94c  std 3, 464(1)
  010e950  lfd 1, 464(1)
  010e954  fcfid 1, 1
  010e958  frsp 1, 1
  010e95c  fmuls 15, 1, 18
  010e960  bl 0x5c8318
  010e964  nop
  010e968  srawi 3, 3, 15
  010e96c  fmr 2, 15
  010e970  clrlwi 3, 3, 17
  010e974  fmr 3, 16
  010e978  extsw 3, 3
  010e97c  addic 30, 1, 176
  010e980  std 3, 464(1)
  010e984  lfs 1, -3052(14)
  010e988  lfd 4, 464(1)
  010e98c  ori 3, 30, 0
  010e990  fcfid 4, 4
  010e994  frsp 4, 4
  010e998  fmadds 4, 4, 17, 22
  010e99c  fmuls 1, 4, 1
  010e9a0  fmuls 1, 1, 29
  010e9a4  bl 0xfe610
  010e9a8  lis 3, 21845
  010e9ac  lis 4, 114
  010e9b0  ori 3, 3, 21846
  010e9b4  mulhw 3, 3, 24
  010e9b8  lfs 1, -3056(4)
  010e9bc  lfs 2, 184(1)
  010e9c0  srwi 4, 3, 31
  010e9c4  fmuls 4, 1, 21
  010e9c8  lfs 3, -3052(14)
  010e9cc  fmuls 1, 1, 20
  010e9d0  addc 3, 3, 4
  010e9d4  fmadds 2, 3, 24, 2
  010e9d8  li 5, 0
  010e9dc  addc 4, 3, 3
  010e9e0  addc 3, 3, 4
  010e9e4  li 4, 0
  010e9e8  subc 3, 24, 3
  010e9ec  subc 3, 4, 3
  010e9f0  fctiwz 3, 4
  010e9f4  fctiwz 1, 1
  010e9f8  cntlzw 3, 3
  010e9fc  li 4, 1
  010ea00  sldi 3, 3, 58
  010ea04  stfs 2, 184(1)
  010ea08  subc 4, 4, 5
  010ea0c  sradi 3, 3, 63
  010ea10  and 3, 3, 4
  010ea14  addc 29, 5, 3
  010ea18  stfd 3, 464(1)
  010ea1c  lwz 28, 468(1)
  010ea20  stfd 1, 464(1)
  010ea24  lwz 27, 468(1)
  010ea28  bl 0x5c8318
  010ea2c  nop
  010ea30  srawi 3, 3, 15
  010ea34  subc 4, 27, 28
  010ea38  clrlwi 3, 3, 17
  010ea3c  addic 5, 4, 1
  010ea40  divw 5, 3, 5
  010ea44  mullw 4, 5, 4
  010ea48  ori 6, 29, 0
  010ea4c  addc 4, 4, 5
  010ea50  li 7, 0
  010ea54  subc 4, 3, 4
  010ea58  ori 3, 15, 0
  010ea5c  addc 5, 4, 28
  010ea60  ori 4, 30, 0
  010ea64  extsw 5, 5
  010ea68  bl 0x20bb70
  010ea6c  nop
  010ea70  addic 24, 24, 1
  010ea74  cmpw 24, 31
  010ea78  bt 0, 0x10e90c
  010ea7c  ori 3, 23, 0
  010ea80  ori 17, 23, 0
  010ea84  bl 0x502730
  010ea88  nop
  010ea8c  lis 3, 17
  010ea90  addi 3, 3, -8308
  010ea94  lfs 2, 48(3)
  010ea98  fmuls 1, 1, 2
  010ea9c  fcmpu 0, 27, 1
  010eaa0  cror 6, 1, 2
  010eaa4  bt 6, 0x10eabc
  010eaa8  fmr 1, 27
  010eaac  bl 0x502758
  010eab0  nop
  010eab4  srawi 17, 3, 1
  010eab8  addze 17, 17
  010eabc  lis 3, 17
  010eac0  cmpwi 17, 0
  010eac4  addi 3, 3, -8308
  010eac8  ori 20, 16, 0
  010eacc  lfs 1, 16(3)
  010ead0  std 21, 432(1)
  010ead4  fsubs 17, 1, 27
  010ead8  fsub 1, 27, 1
  010eadc  fsel 17, 1, 26, 17
  010eae0  bf 1, 0x10f104
  010eae4  lis 3, 17
  010eae8  ld 22, 400(1)
  010eaec  addi 3, 3, -8308
  010eaf0  clrlwi 24, 22, 31
  010eaf4  rlwinm 23, 22, 0, 30, 30
  010eaf8  rlwinm 22, 22, 0, 29, 29
  010eafc  lfs 24, 84(3)
  010eb00  ld 19, 432(1)
  010eb04  lfs 23, 88(3)
  010eb08  fmuls 24, 24, 29
  010eb0c  lfs 22, 92(3)
  010eb10  addc 21, 19, 19
  010eb14  lfs 15, 64(3)
  010eb18  sldi 18, 19, 2
  010eb1c  lfs 21, 96(3)
  010eb20  addc 21, 19, 21
  010eb24  lfs 20, 100(3)
  010eb28  addc 18, 19, 18
  010eb2c  lfs 19, 104(3)
  010eb30  slwi 19, 19, 1
  010eb34  lfs 18, 108(3)
  010eb38  fmuls 15, 29, 15
  010eb3c  lfs 16, 112(3)
  010eb40  bl 0x5c8318
  010eb44  nop
  010eb48  srawi 3, 3, 15
  010eb4c  lis 4, 20224
  010eb50  clrlwi 3, 3, 17
  010eb54  ori 4, 4, 32767
  010eb58  extsw 3, 3
  010eb5c  lis 5, 20224
  010eb60  lis 8, 12287
  010eb64  std 3, 464(1)
  010eb68  lis 3, 20224
  010eb6c  lfs 1, -3052(14)
  010eb70  ori 3, 3, 36863
  010eb74  lis 6, 12032
  010eb78  fmuls 2, 1, 17
  010eb7c  lis 7, 12032
  010eb80  stw 3, 288(1)
  010eb84  stw 3, 292(1)
  010eb88  ori 3, 5, 28671
  010eb8c  stw 4, 296(1)
  010eb90  ori 5, 6, 24447
  010eb94  ori 4, 8, 65535
  010eb98  ori 7, 7, 20351
  010eb9c  stw 3, 300(1)
  010eba0  lis 6, 12032
  010eba4  lis 3, 12032
  010eba8  stw 4, 304(1)
  010ebac  lfd 3, 464(1)
  010ebb0  ori 3, 3, 16255
  010ebb4  stw 4, 308(1)
  010ebb8  fcfid 3, 3
  010ebbc  lis 4, 12032
  010ebc0  stw 5, 312(1)
  010ebc4  stw 7, 316(1)
  010ebc8  lis 5, 16128
  010ebcc  ori 4, 4, 79
  010ebd0  stw 3, 320(1)
  010ebd4  stw 4, 324(1)
  010ebd8  stw 6, 328(1)
  010ebdc  stw 5, 332(1)
  010ebe0  frsp 3, 3
  010ebe4  fmadds 3, 3, 16, 25
  010ebe8  fmsubs 14, 3, 1, 2
  010ebec  bl 0x5c8318
  010ebf0  nop
  010ebf4  srawi 3, 3, 15
  010ebf8  clrlwi 3, 3, 17
  010ebfc  addic 4, 3, 1
  010ec00  mulli 4, 4, 21845
  010ec04  li 9, 0
  010ec08  srwi 4, 4, 17
  010ec0c  subc 9, 9, 23
  010ec10  addc 5, 4, 4
  010ec14  cntlzw 9, 9
  010ec18  addc 4, 4, 5
  010ec1c  li 10, 0
  010ec20  addc 4, 4, 4
  010ec24  sldi 9, 9, 58
  010ec28  subc 3, 3, 4
  010ec2c  li 4, 0
  010ec30  sldi 3, 3, 2
  010ec34  subc 4, 4, 24
  010ec38  addc 3, 3, 1
  010ec3c  cntlzw 4, 4
  010ec40  clrldi 3, 3, 32
  010ec44  sldi 4, 4, 58
  010ec48  sradi 9, 9, 63
  010ec4c  sradi 4, 4, 63
  010ec50  li 12, 0
  010ec54  lwz 3, 288(3)
  010ec58  clrlwi 5, 3, 24
  010ec5c  rlwinm 6, 3, 24, 24, 31
  010ec60  rlwinm 7, 3, 16, 24, 31
  010ec64  subc 8, 6, 5
  010ec68  ld 31, 392(1)
  010ec6c  extsw 11, 3
  010ec70  and 4, 4, 8
  010ec74  subc 8, 10, 24
  010ec78  addc 4, 5, 4
  010ec7c  cntlzw 8, 8
  010ec80  subc 10, 7, 4
  010ec84  sldi 8, 8, 58
  010ec88  and 9, 9, 10
  010ec8c  subc 10, 12, 24
  010ec90  addc 4, 4, 9
  010ec94  cntlzw 9, 10
  010ec98  subc 5, 5, 6
  010ec9c  sradi 8, 8, 63
  010eca0  sldi 9, 9, 58
  010eca4  li 10, 0
  010eca8  and 5, 8, 5
  010ecac  subc 8, 6, 3
  010ecb0  sradi 9, 9, 63
  010ecb4  subc 10, 10, 22
  010ecb8  and 8, 9, 8
  010ecbc  cntlzw 9, 10
  010ecc0  addc 5, 6, 5
  010ecc4  li 10, 0
  010ecc8  sldi 9, 9, 58
  010eccc  subc 10, 10, 23
  010ecd0  subc 5, 5, 4
  010ecd4  sradi 9, 9, 63
  010ecd8  li 12, 0
  010ecdc  cntlzw 10, 10
  010ece0  and 5, 9, 5
  010ece4  subc 9, 12, 24
  010ece8  addc 8, 3, 8
  010ecec  sldi 10, 10, 58
  010ecf0  addc 4, 4, 5
  010ecf4  cntlzw 5, 9
  010ecf8  subc 9, 8, 7
  010ecfc  sradi 10, 10, 63
  010ed00  li 12, 0
  010ed04  sldi 5, 5, 58
  010ed08  and 9, 10, 9
  010ed0c  subc 10, 12, 23
  010ed10  subc 3, 3, 6
  010ed14  sradi 5, 5, 63
  010ed18  addc 9, 7, 9
  010ed1c  cntlzw 10, 10
  010ed20  rlwimi 4, 9, 8, 16, 23
  010ed24  and 3, 5, 3
  010ed28  li 12, 0
  010ed2c  sldi 9, 10, 58
  010ed30  rlwinm 5, 11, 0, 0, 7
  010ed34  addc 3, 6, 3
  010ed38  subc 12, 12, 22
  010ed3c  subc 7, 7, 8
  010ed40  sradi 6, 9, 63
  010ed44  or 4, 4, 5
  010ed48  cntlzw 5, 12
  010ed4c  and 6, 6, 7
  010ed50  sldi 5, 5, 58
  010ed54  addc 6, 8, 6
  010ed58  sradi 5, 5, 63
  010ed5c  subc 6, 6, 3
  010ed60  li 7, 0
  010ed64  and 5, 5, 6
  010ed68  subc 6, 7, 31
  010ed6c  addc 3, 3, 5
  010ed70  cntlzw 5, 6
  010ed74  rlwimi 4, 3, 16, 8, 15
  010ed78  sldi 3, 5, 58
  010ed7c  extsw 4, 4
  010ed80  sradi 3, 3, 63
  010ed84  subc 5, 11, 4
  010ed88  and 3, 3, 5
  010ed8c  addc 30, 4, 3
  010ed90  bl 0x5c8318
  010ed94  nop
  010ed98  srawi 3, 3, 15
  010ed9c  clrlwi 3, 3, 17
  010eda0  addic 4, 3, 1
  010eda4  mulli 4, 4, 21845
  010eda8  li 9, 0
  010edac  srwi 4, 4, 17
  010edb0  li 7, 0
  010edb4  addc 5, 4, 4
  010edb8  subc 7, 7, 24
  010edbc  addc 4, 4, 5
  010edc0  li 11, 0
  010edc4  addc 4, 4, 4
  010edc8  cntlzw 7, 7
  010edcc  subc 3, 3, 4
  010edd0  li 4, 0
  010edd4  sldi 3, 3, 2
  010edd8  subc 4, 4, 24
  010eddc  addc 3, 3, 1
  010ede0  cntlzw 4, 4
  010ede4  clrldi 3, 3, 32
  010ede8  sldi 4, 4, 58
  010edec  subc 11, 11, 24
  010edf0  sradi 4, 4, 63
  010edf4  sldi 7, 7, 58
  010edf8  lwz 3, 312(3)
  010edfc  cntlzw 11, 11
  010ee00  clrlwi 5, 3, 24
  010ee04  rlwinm 6, 3, 24, 24, 31
  010ee08  sradi 7, 7, 63
  010ee0c  subc 8, 6, 5
  010ee10  lis 29, 114
  010ee14  and 4, 4, 8
  010ee18  subc 8, 9, 23
  010ee1c  addc 4, 5, 4
  010ee20  cntlzw 8, 8
  010ee24  rlwinm 9, 3, 16, 24, 31
  010ee28  lfs 1, -3056(29)
  010ee2c  sldi 8, 8, 58
  010ee30  subc 12, 9, 4
  010ee34  sradi 8, 8, 63
  010ee38  fmuls 2, 1, 23
  010ee3c  subc 5, 5, 6
  010ee40  fmuls 1, 1, 22
  010ee44  and 8, 8, 12
  010ee48  and 5, 7, 5
  010ee4c  addc 4, 4, 8
  010ee50  sldi 8, 11, 58
  010ee54  li 11, 0
  010ee58  sradi 7, 8, 63
  010ee5c  subc 8, 11, 22
  010ee60  addc 5, 6, 5
  010ee64  cntlzw 8, 8
  010ee68  fctiwz 2, 2
  010ee6c  subc 5, 5, 4
  010ee70  fctiwz 1, 1
  010ee74  sldi 8, 8, 58
  010ee78  li 11, 0
  010ee7c  sradi 8, 8, 63
  010ee80  subc 12, 6, 3
  010ee84  and 5, 8, 5
  010ee88  li 8, 0
  010ee8c  subc 11, 11, 23
  010ee90  subc 8, 8, 24
  010ee94  and 7, 7, 12
  010ee98  cntlzw 11, 11
  010ee9c  cntlzw 8, 8
  010eea0  stfd 2, 464(1)
  010eea4  li 12, 0
  010eea8  lwz 28, 468(1)
  010eeac  addc 7, 3, 7
  010eeb0  stfd 1, 464(1)
  010eeb4  addc 4, 4, 5
  010eeb8  lwz 27, 468(1)
  010eebc  sldi 11, 11, 58
  010eec0  sldi 8, 8, 58
  010eec4  extsw 10, 3
  010eec8  subc 5, 12, 23
  010eecc  sradi 11, 11, 63
  010eed0  subc 12, 7, 9
  010eed4  sradi 8, 8, 63
  010eed8  subc 3, 3, 6
  010eedc  and 11, 11, 12
  010eee0  and 3, 8, 3
  010eee4  cntlzw 5, 5
  010eee8  addc 8, 9, 11
  010eeec  addc 3, 6, 3
  010eef0  sldi 5, 5, 58
  010eef4  li 6, 0
  010eef8  rlwimi 4, 8, 8, 16, 23
  010eefc  subc 8, 9, 7
  010ef00  sradi 5, 5, 63
  010ef04  subc 6, 6, 22
  010ef08  and 5, 5, 8
  010ef0c  cntlzw 6, 6
  010ef10  addc 5, 7, 5
  010ef14  sldi 6, 6, 58
  010ef18  subc 5, 5, 3
  010ef1c  sradi 6, 6, 63
  010ef20  li 7, 0
  010ef24  rlwinm 11, 10, 0, 0, 7
  010ef28  and 5, 6, 5
  010ef2c  subc 7, 7, 31
  010ef30  or 4, 4, 11
  010ef34  addc 3, 3, 5
  010ef38  cntlzw 6, 7
  010ef3c  rlwimi 4, 3, 16, 8, 15
  010ef40  sldi 5, 6, 58
  010ef44  extsw 4, 4
  010ef48  sradi 3, 5, 63
  010ef4c  subc 5, 10, 4
  010ef50  and 3, 3, 5
  010ef54  addc 31, 4, 3
  010ef58  bl 0x5c8318
  010ef5c  nop
  010ef60  srawi 3, 3, 15
  010ef64  subc 4, 27, 28
  010ef68  lfs 1, -3056(29)
  010ef6c  clrlwi 3, 3, 17
  010ef70  addic 5, 4, 1
  010ef74  fmuls 2, 1, 21
  010ef78  divw 5, 3, 5
  010ef7c  fmuls 1, 1, 20
  010ef80  mullw 4, 5, 4
  010ef84  fctiwz 2, 2
  010ef88  fctiwz 1, 1
  010ef8c  addc 4, 4, 5
  010ef90  subc 3, 3, 4
  010ef94  addc 3, 3, 28
  010ef98  subc 3, 3, 21
  010ef9c  extsw 28, 3
  010efa0  stfd 2, 464(1)
  010efa4  lwz 27, 468(1)
  010efa8  stfd 1, 464(1)
  010efac  lwz 26, 468(1)
  010efb0  bl 0x5c8318
  010efb4  nop
  010efb8  srawi 3, 3, 15
  010efbc  subc 4, 26, 27
  010efc0  clrlwi 3, 3, 17
  010efc4  addic 5, 4, 1
  010efc8  std 16, 112(1)
  010efcc  divw 5, 3, 5
  010efd0  mullw 4, 5, 4
  010efd4  addic 26, 1, 128
  010efd8  fmr 1, 24
  010efdc  addc 4, 4, 5
  010efe0  std 16, 120(1)
  010efe4  fmuls 2, 14, 29
  010efe8  ori 5, 30, 0
  010efec  subc 3, 3, 4
  010eff0  ori 6, 31, 0
  010eff4  addc 4, 3, 27
  010eff8  ori 3, 15, 0
  010effc  subc 9, 4, 18
  010f000  ori 4, 26, 0
  010f004  extsw 9, 9
  010f008  ori 8, 28, 0
  010f00c  bl 0x123390
  010f010  nop
  010f014  lfs 1, -3056(29)
  010f018  fmuls 2, 1, 19
  010f01c  fmuls 1, 1, 18
  010f020  fctiwz 2, 2
  010f024  fctiwz 1, 1
  010f028  stfd 2, 464(1)
  010f02c  lwz 31, 468(1)
  010f030  stfd 1, 464(1)
  010f034  lwz 30, 468(1)
  010f038  bl 0x5c8318
  010f03c  nop
  010f040  srawi 3, 3, 15
  010f044  subc 4, 30, 31
  010f048  lfs 1, -3056(29)
  010f04c  clrlwi 3, 3, 17
  010f050  addic 5, 4, 1
  010f054  fmuls 2, 1, 23
  010f058  divw 5, 3, 5
  010f05c  fmuls 1, 1, 22
  010f060  mullw 4, 5, 4
  010f064  fctiwz 2, 2
  010f068  fctiwz 1, 1
  010f06c  addc 4, 4, 5
  010f070  subc 3, 3, 4
  010f074  addc 3, 3, 31
  010f078  subc 3, 3, 19
  010f07c  extsw 31, 3
  010f080  stfd 2, 464(1)
  010f084  lwz 30, 468(1)
  010f088  stfd 1, 464(1)
  010f08c  lwz 29, 468(1)
  010f090  bl 0x5c8318
  010f094  nop
  010f098  srawi 3, 3, 15
  010f09c  subc 4, 29, 30
  010f0a0  clrlwi 3, 3, 17
  010f0a4  addic 5, 4, 1
  010f0a8  std 16, 112(1)
  010f0ac  divw 5, 3, 5
  010f0b0  mullw 4, 5, 4
  010f0b4  lis 6, 255
  010f0b8  fmuls 2, 14, 15
  010f0bc  addc 4, 4, 5
  010f0c0  fmr 1, 24
  010f0c4  lis 5, 32767
  010f0c8  std 16, 120(1)
  010f0cc  subc 3, 3, 4
  010f0d0  ori 8, 31, 0
  010f0d4  addc 3, 3, 30
  010f0d8  ori 4, 26, 0
  010f0dc  subc 9, 3, 21
  010f0e0  ori 3, 15, 0
  010f0e4  extsw 9, 9
  010f0e8  ori 5, 5, 65535
  010f0ec  ori 6, 6, 65535
  010f0f0  bl 0x123390
  010f0f4  nop
  010f0f8  addic 20, 20, 1
  010f0fc  cmpw 20, 17
  010f100  bt 0, 0x10eb40
  010f104  ld 3, 408(1)
  010f108  ori 21, 16, 0
  010f10c  cmpwi 3, 0
  010f110  bf 1, 0x10f6c4
  010f114  lis 3, 17
  010f118  ld 22, 400(1)
  010f11c  ld 20, 432(1)
  010f120  addi 3, 3, -8308
  010f124  sldi 4, 20, 2
  010f128  clrlwi 24, 22, 31
  010f12c  rlwinm 23, 22, 0, 30, 30
  010f130  rlwinm 22, 22, 0, 29, 29
  010f134  lfs 25, 56(3)
  010f138  addc 20, 20, 4
  010f13c  lfs 24, 116(3)
  010f140  lfs 23, 96(3)
  010f144  lfs 22, 100(3)
  010f148  lfs 21, 112(3)
  010f14c  lfs 20, 120(3)
  010f150  ld 19, 392(1)
  010f154  ld 18, 408(1)
  010f158  lis 3, 20224
  010f15c  lis 5, 12287
  010f160  ori 3, 3, 36863
  010f164  lis 4, 20224
  010f168  ori 5, 5, 65535
  010f16c  lis 6, 20224
  010f170  stw 3, 336(1)
  010f174  ori 4, 4, 32767
  010f178  stw 3, 340(1)
  010f17c  ori 3, 6, 28671
  010f180  stw 5, 352(1)
  010f184  lis 7, 12032
  010f188  stw 5, 356(1)
  010f18c  lis 6, 12032
  010f190  stw 4, 344(1)
  010f194  ori 5, 7, 24447
  010f198  stw 3, 348(1)
  010f19c  ori 3, 6, 20351
  010f1a0  lis 4, 12032
  010f1a4  lis 6, 12032
  010f1a8  lis 7, 12032
  010f1ac  stw 5, 360(1)
  010f1b0  ori 4, 4, 16255
  010f1b4  stw 3, 364(1)
  010f1b8  lis 5, 16128
  010f1bc  ori 3, 6, 79
  010f1c0  stw 16, 192(1)
  010f1c4  stw 7, 376(1)
  010f1c8  stw 4, 368(1)
  010f1cc  stw 3, 372(1)
  010f1d0  stw 5, 380(1)
  010f1d4  stw 16, 196(1)
  010f1d8  stw 16, 200(1)
  010f1dc  stw 16, 204(1)
  010f1e0  bl 0x5c8318
  010f1e4  nop
  010f1e8  srawi 3, 3, 15
  010f1ec  clrlwi 3, 3, 17
  010f1f0  extsw 3, 3
  010f1f4  std 3, 464(1)
  010f1f8  lfd 1, 464(1)
  010f1fc  fcfid 1, 1
  010f200  frsp 1, 1
  010f204  fmadds 1, 1, 21, 25
  010f208  stfs 1, 192(1)
  010f20c  bl 0x5c8318
  010f210  nop
  010f214  srawi 3, 3, 15
  010f218  clrlwi 3, 3, 17
  010f21c  extsw 3, 3
  010f220  std 3, 464(1)
  010f224  lfd 1, 464(1)
  010f228  fcfid 1, 1
  010f22c  frsp 1, 1
  010f230  fmadds 1, 1, 21, 25
  010f234  stfs 1, 196(1)
  010f238  bl 0x5c8318
  010f23c  nop
  010f240  srawi 3, 3, 15
  010f244  clrlwi 3, 3, 17
  010f248  extsw 3, 3
  010f24c  std 3, 464(1)
  010f250  lfd 1, 464(1)
  010f254  fcfid 1, 1
  010f258  frsp 1, 1
  010f25c  fmadds 1, 1, 21, 25
  010f260  stfs 1, 200(1)
  010f264  bl 0x5c8318
  010f268  nop
  010f26c  lfs 1, 196(1)
  010f270  lfs 2, 192(1)
  010f274  fmuls 3, 1, 1
  010f278  lfs 4, 200(1)
  010f27c  srawi 3, 3, 15
  010f280  clrlwi 3, 3, 17
  010f284  extsw 3, 3
  010f288  fmadds 3, 2, 2, 3
  010f28c  std 3, 464(1)
  010f290  lfs 5, -3052(14)
  010f294  lfd 6, 464(1)
  010f298  fcfid 6, 6
  010f29c  fmadds 3, 4, 4, 3
  010f2a0  frsp 6, 6
  010f2a4  fsqrts 3, 3
  010f2a8  fmuls 6, 6, 20
  010f2ac  fmuls 5, 6, 5
  010f2b0  fmuls 5, 5, 29
  010f2b4  fdivs 5, 5, 3
  010f2b8  fsub 6, 26, 3
  010f2bc  fsub 7, 26, 3
  010f2c0  fsub 8, 26, 3
  010f2c4  fsub 9, 3, 26
  010f2c8  fsub 10, 3, 26
  010f2cc  fsub 3, 3, 26
  010f2d0  fmuls 2, 2, 5
  010f2d4  fmuls 1, 1, 5
  010f2d8  fmuls 4, 4, 5
  010f2dc  fsel 5, 6, 26, 2
  010f2e0  fsel 6, 7, 26, 1
  010f2e4  fsel 7, 8, 26, 4
  010f2e8  fsel 2, 9, 5, 2
  010f2ec  fsel 1, 10, 6, 1
  010f2f0  fsel 3, 3, 7, 4
  010f2f4  stfs 2, 192(1)
  010f2f8  stfs 1, 196(1)
  010f2fc  stfs 3, 200(1)
  010f300  bl 0x5c8318
  010f304  nop
  010f308  srawi 3, 3, 15
  010f30c  clrlwi 3, 3, 17
  010f310  addic 4, 3, 1
  010f314  mulli 4, 4, 21845
  010f318  srwi 4, 4, 17
  010f31c  addc 5, 4, 4
  010f320  addc 4, 4, 5
  010f324  li 5, 0
  010f328  addc 4, 4, 4
  010f32c  li 12, 0
  010f330  subc 3, 3, 4
  010f334  subc 4, 5, 24
  010f338  sldi 3, 3, 2
  010f33c  cntlzw 4, 4
  010f340  addc 3, 3, 1
  010f344  sldi 4, 4, 58
  010f348  clrldi 3, 3, 32
  010f34c  sradi 4, 4, 63
  010f350  li 5, 0
  010f354  li 31, 0
  010f358  subc 5, 5, 23
  010f35c  lwz 3, 336(3)
  010f360  cntlzw 5, 5
  010f364  clrlwi 6, 3, 24
  010f368  rlwinm 7, 3, 24, 24, 31
  010f36c  rlwinm 9, 3, 16, 24, 31
  010f370  subc 8, 7, 6
  010f374  sldi 5, 5, 58
  010f378  and 4, 4, 8
  010f37c  li 8, 0
  010f380  addc 4, 6, 4
  010f384  subc 8, 8, 24
  010f388  subc 10, 9, 4
  010f38c  cntlzw 8, 8
  010f390  sradi 5, 5, 63
  010f394  sldi 8, 8, 58
  010f398  and 5, 5, 10
  010f39c  subc 6, 6, 7
  010f3a0  sradi 8, 8, 63
  010f3a4  addc 4, 4, 5
  010f3a8  li 10, 0
  010f3ac  subc 5, 12, 24
  010f3b0  and 6, 8, 6
  010f3b4  subc 8, 10, 22
  010f3b8  cntlzw 5, 5
  010f3bc  cntlzw 8, 8
  010f3c0  sldi 5, 5, 58
  010f3c4  li 10, 0
  010f3c8  addc 6, 7, 6
  010f3cc  sldi 8, 8, 58
  010f3d0  sradi 5, 5, 63
  010f3d4  subc 12, 7, 3
  010f3d8  subc 10, 10, 23
  010f3dc  subc 6, 6, 4
  010f3e0  sradi 8, 8, 63
  010f3e4  cntlzw 10, 10
  010f3e8  and 5, 5, 12
  010f3ec  and 6, 8, 6
  010f3f0  subc 12, 31, 24
  010f3f4  sldi 8, 10, 58
  010f3f8  addc 5, 3, 5
  010f3fc  addc 4, 4, 6
  010f400  subc 10, 5, 9
  010f404  cntlzw 6, 12
  010f408  sradi 8, 8, 63
  010f40c  li 12, 0
  010f410  and 8, 8, 10
  010f414  sldi 6, 6, 58
  010f418  extsw 11, 3
  010f41c  subc 10, 12, 23
  010f420  sradi 6, 6, 63
  010f424  subc 3, 3, 7
  010f428  cntlzw 10, 10
  010f42c  addc 8, 9, 8
  010f430  and 3, 6, 3
  010f434  li 12, 0
  010f438  sldi 6, 10, 58
  010f43c  rlwimi 4, 8, 8, 16, 23
  010f440  subc 8, 12, 22
  010f444  subc 9, 9, 5
  010f448  sradi 6, 6, 63
  010f44c  addc 3, 7, 3
  010f450  cntlzw 7, 8
  010f454  and 6, 6, 9
  010f458  sldi 7, 7, 58
  010f45c  addc 5, 5, 6
  010f460  sradi 7, 7, 63
  010f464  subc 5, 5, 3
  010f468  li 6, 0
  010f46c  rlwinm 10, 11, 0, 0, 7
  010f470  and 5, 7, 5
  010f474  subc 6, 6, 19
  010f478  or 4, 4, 10
  010f47c  addc 3, 3, 5
  010f480  cntlzw 6, 6
  010f484  rlwimi 4, 3, 16, 8, 15
  010f488  sldi 5, 6, 58
  010f48c  extsw 4, 4
  010f490  sradi 3, 5, 63
  010f494  subc 5, 11, 4
  010f498  and 3, 3, 5
  010f49c  addc 31, 4, 3
  010f4a0  bl 0x5c8318
  010f4a4  nop
  010f4a8  srawi 3, 3, 15
  010f4ac  clrlwi 3, 3, 17
  010f4b0  addic 4, 3, 1
  010f4b4  mulli 4, 4, 21845
  010f4b8  li 9, 0
  010f4bc  srwi 4, 4, 17
  010f4c0  li 7, 0
  010f4c4  addc 5, 4, 4
  010f4c8  subc 7, 7, 24
  010f4cc  addc 4, 4, 5
  010f4d0  lis 5, 114
  010f4d4  addc 4, 4, 4
  010f4d8  li 11, 0
  010f4dc  subc 3, 3, 4
  010f4e0  li 4, 0
  010f4e4  sldi 3, 3, 2
  010f4e8  subc 4, 4, 24
  010f4ec  addc 3, 3, 1
  010f4f0  cntlzw 4, 4
  010f4f4  clrldi 3, 3, 32
  010f4f8  sldi 4, 4, 58
  010f4fc  cntlzw 7, 7
  010f500  sradi 4, 4, 63
  010f504  subc 11, 11, 24
  010f508  lwz 3, 360(3)
  010f50c  lfs 1, -3056(5)
  010f510  sldi 7, 7, 58
  010f514  clrlwi 5, 3, 24
  010f518  rlwinm 6, 3, 24, 24, 31
  010f51c  cntlzw 11, 11
  010f520  subc 8, 6, 5
  010f524  sradi 7, 7, 63
  010f528  fmuls 2, 1, 23
  010f52c  and 4, 4, 8
  010f530  subc 8, 9, 23
  010f534  addc 4, 5, 4
  010f538  fmuls 1, 1, 22
  010f53c  cntlzw 8, 8
  010f540  rlwinm 9, 3, 16, 24, 31
  010f544  sldi 8, 8, 58
  010f548  subc 12, 9, 4
  010f54c  sradi 8, 8, 63
  010f550  subc 5, 5, 6
  010f554  and 8, 8, 12
  010f558  fctiwz 2, 2
  010f55c  and 5, 7, 5
  010f560  addc 4, 4, 8
  010f564  sldi 8, 11, 58
  010f568  fctiwz 1, 1
  010f56c  li 11, 0
  010f570  sradi 7, 8, 63
  010f574  subc 8, 11, 22
  010f578  addc 5, 6, 5
  010f57c  cntlzw 8, 8
  010f580  li 11, 0
  010f584  sldi 8, 8, 58
  010f588  subc 5, 5, 4
  010f58c  sradi 8, 8, 63
  010f590  stfd 2, 464(1)
  010f594  subc 12, 6, 3
  010f598  subc 11, 11, 23
  010f59c  and 5, 8, 5
  010f5a0  lwz 29, 468(1)
  010f5a4  and 7, 7, 12
  010f5a8  stfd 1, 464(1)
  010f5ac  cntlzw 11, 11
  010f5b0  li 8, 0
  010f5b4  li 12, 0
  010f5b8  lwz 28, 468(1)
  010f5bc  addc 7, 3, 7
  010f5c0  addc 4, 4, 5
  010f5c4  subc 8, 8, 24
  010f5c8  sldi 11, 11, 58
  010f5cc  subc 5, 12, 23
  010f5d0  cntlzw 8, 8
  010f5d4  subc 12, 7, 9
  010f5d8  sradi 11, 11, 63
  010f5dc  sldi 8, 8, 58
  010f5e0  and 11, 11, 12
  010f5e4  extsw 10, 3
  010f5e8  cntlzw 5, 5
  010f5ec  subc 3, 3, 6
  010f5f0  addc 11, 9, 11
  010f5f4  sradi 8, 8, 63
  010f5f8  sldi 5, 5, 58
  010f5fc  li 12, 0
  010f600  rlwimi 4, 11, 8, 16, 23
  010f604  and 3, 8, 3
  010f608  subc 9, 9, 7
  010f60c  subc 11, 12, 22
  010f610  sradi 5, 5, 63
  010f614  addc 3, 6, 3
  010f618  cntlzw 6, 11
  010f61c  and 5, 5, 9
  010f620  sldi 6, 6, 58
  010f624  addc 5, 7, 5
  010f628  sradi 6, 6, 63
  010f62c  subc 5, 5, 3
  010f630  li 7, 0
  010f634  rlwinm 8, 10, 0, 0, 7
  010f638  and 5, 6, 5
  010f63c  subc 7, 7, 19
  010f640  or 4, 4, 8
  010f644  addc 3, 3, 5
  010f648  cntlzw 6, 7
  010f64c  rlwimi 4, 3, 16, 8, 15
  010f650  sldi 5, 6, 58
  010f654  extsw 4, 4
  010f658  sradi 3, 5, 63
  010f65c  subc 5, 10, 4
  010f660  and 3, 3, 5
  010f664  addc 30, 4, 3
  010f668  bl 0x5c8318
  010f66c  nop
  010f670  srawi 3, 3, 15
  010f674  subc 4, 28, 29
  010f678  clrlwi 3, 3, 17
  010f67c  addic 5, 4, 1
  010f680  fmr 1, 24
  010f684  divw 5, 3, 5
  010f688  mullw 4, 5, 4
  010f68c  addc 4, 4, 5
  010f690  ori 5, 31, 0
  010f694  subc 3, 3, 4
  010f698  addic 4, 1, 192
  010f69c  addc 6, 3, 29
  010f6a0  ori 3, 15, 0
  010f6a4  subc 8, 6, 20
  010f6a8  ori 6, 30, 0
  010f6ac  extsw 8, 8
  010f6b0  bl 0x1229a8
  010f6b4  nop
  010f6b8  addic 21, 21, 1
  010f6bc  cmpw 21, 18
  010f6c0  bt 0, 0x10f158
  010f6c4  ld 30, 416(1)
  010f6c8  cmpwi 30, 0
  010f6cc  bt 2, 0x10f858
  010f6d0  fcmpu 0, 31, 26
  010f6d4  cror 6, 0, 2
  010f6d8  bt 6, 0x10f858
  010f6dc  li 5, 0
  010f6e0  ld 7, 392(1)
  010f6e4  lis 3, 161
  010f6e8  subc 5, 5, 7
  010f6ec  li 8, 0
  010f6f0  cntlzw 5, 5
  010f6f4  li 4, 127
  010f6f8  li 31, 60
  010f6fc  subc 7, 8, 7
  010f700  lwz 3, 1812(3)
  010f704  sldi 5, 5, 58
  010f708  subc 4, 4, 31
  010f70c  cntlzw 7, 7
  010f710  sradi 5, 5, 63
  010f714  li 6, 150
  010f718  li 8, 70
  010f71c  sldi 7, 7, 58
  010f720  and 4, 5, 4
  010f724  srawi 5, 3, 31
  010f728  subc 6, 6, 8
  010f72c  sradi 7, 7, 63
  010f730  srwi 9, 5, 1
  010f734  addc 31, 31, 4
  010f738  and 6, 7, 6
  010f73c  lis 4, 16243
  010f740  xor 7, 9, 3
  010f744  ori 4, 4, 13107
  010f748  subc 5, 7, 5
  010f74c  addc 3, 8, 6
  010f750  cmpw 5, 4
  010f754  bf 0, 0x10f804
  010f758  lfd 1, 384(1)
  010f75c  fcmpu 0, 27, 1
  010f760  cror 6, 0, 2
  010f764  bt 6, 0x10f804
  010f768  ori 10, 3, 0
  010f76c  lis 3, 17
  010f770  lis 28, 114
  010f774  addi 29, 3, -8308
  010f778  fmr 1, 31
  010f77c  li 26, 32
  010f780  addic 27, 1, 128
  010f784  ori 8, 10, 0
  010f788  ori 3, 30, 0
  010f78c  lfs 2, 124(29)
  010f790  ori 4, 15, 0
  010f794  lfs 3, -3056(28)
  010f798  ori 5, 27, 0
  010f79c  std 26, 112(1)
  010f7a0  li 9, 150
  010f7a4  fmuls 2, 3, 2
  010f7a8  fctiwz 2, 2
  010f7ac  stfd 2, 464(1)
  010f7b0  lwz 7, 468(1)
  010f7b4  extsw 7, 7
  010f7b8  bl 0x1d4d88
  010f7bc  nop
  010f7c0  lfs 2, 128(29)
  010f7c4  lfs 3, -3056(28)
  010f7c8  ori 3, 30, 0
  010f7cc  std 26, 112(1)
  010f7d0  fmr 1, 31
  010f7d4  fmuls 2, 3, 2
  010f7d8  ori 4, 15, 0
  010f7dc  ori 5, 27, 0
  010f7e0  ori 8, 31, 0
  010f7e4  li 9, 127
  010f7e8  li 10, 80
  010f7ec  fctiwz 2, 2
  010f7f0  stfd 2, 464(1)
  010f7f4  lwz 7, 468(1)
  010f7f8  extsw 7, 7
  010f7fc  bl 0x1d4d88
  010f800  nop
  010f804  lis 3, 17
  010f808  lis 4, 114
  010f80c  addi 3, 3, -8308
  010f810  fmr 1, 31
  010f814  li 6, 48
  010f818  addic 5, 1, 128
  010f81c  ori 8, 31, 0
  010f820  li 9, 127
  010f824  lfs 2, 96(3)
  010f828  li 10, 0
  010f82c  lfs 3, -3056(4)
  010f830  ori 3, 30, 0
  010f834  std 6, 112(1)
  010f838  ori 4, 15, 0
  010f83c  fmuls 2, 3, 2
  010f840  fctiwz 2, 2
  010f844  stfd 2, 464(1)
  010f848  lwz 7, 468(1)
  010f84c  extsw 7, 7
  010f850  bl 0x1d4d88
  010f854  nop
  010f858  cmpwi 30, 0
  010f85c  bt 2, 0x10f8c0
  010f860  fcmpu 0, 30, 26
  010f864  cror 6, 0, 2
  010f868  bt 6, 0x10f8c0
  010f86c  lis 3, 17
  010f870  lis 4, 114
  010f874  addi 3, 3, -8308
  010f878  fmr 1, 30
  010f87c  li 6, 32
  010f880  addic 5, 1, 128
  010f884  li 8, 255
  010f888  li 9, 255
  010f88c  lfs 2, 132(3)
  010f890  li 10, 255
  010f894  lfs 3, -3056(4)
  010f898  ori 3, 30, 0
  010f89c  std 6, 112(1)
  010f8a0  ori 4, 15, 0
  010f8a4  fmuls 2, 3, 2
  010f8a8  fctiwz 2, 2
  010f8ac  stfd 2, 464(1)
  010f8b0  lwz 7, 468(1)
  010f8b4  extsw 7, 7
  010f8b8  bl 0x1d4d88
  010f8bc  nop
  010f8c0  ld 3, 448(1)
  010f8c4  cmpwi 3, 0
  010f8c8  bt 2, 0x10f970
  010f8cc  lfs 1, 0(15)
  010f8d0  lis 5, 17
  010f8d4  lis 4, 16384
  010f8d8  stfs 1, 208(1)
  010f8dc  lfs 1, 4(15)
  010f8e0  addi 5, 5, -8308
  010f8e4  addic 3, 1, 208
  010f8e8  stfs 1, 212(1)
  010f8ec  lfs 1, 8(15)
  010f8f0  stw 4, 220(1)
  010f8f4  stfs 1, 216(1)
  010f8f8  lfs 1, 72(5)
  010f8fc  bl 0x502910
  010f900  nop
  010f904  cmpwi 3, -1
  010f908  bt 2, 0x10f970
  010f90c  lis 3, 17
  010f910  vspltisw 2, -1
  010f914  addi 3, 3, -8308
  010f918  lis 6, 114
  010f91c  li 7, -3056
  010f920  vslw 2, 2, 2
  010f924  li 5, 152
  010f928  lfs 1, 136(3)
  010f92c  lfs 2, 140(3)
  010f930  fsub 1, 27, 1
  010f934  fmuls 2, 27, 2
  010f938  lfs 3, 144(3)
  010f93c  lfs 4, 148(3)
  010f940  ld 4, 424(1)
  010f944  <unknown>
  010f948  li 6, 360
  010f94c  fsel 1, 1, 3, 2
  010f950  fsubs 1, 4, 1
  010f954  stfs 1, 352(4)
  010f958  <unknown>
  010f95c  vspltw 4, 4, 0
  010f960  vmaddfp 2, 3, 4, 2
  010f964  vctsxs 2, 2, 0
  010f968  vspltw 2, 2, 0
  010f96c  stvewx 2, 6, 4
  010f970  cmpwi 30, 0
  010f974  bt 2, 0x10f994
  010f978  ld 3, 440(1)
  010f97c  cmpwi 3, -1
  010f980  bt 2, 0x10f994
  010f984  li 4, 0
  010f988  ori 5, 30, 0
  010f98c  bl 0x15d12c
  010f990  nop
  010f994  fcmpu 0, 28, 26
  010f998  ld 3, 432(1)
  010f99c  cmpwi 1, 3, 0
  010f9a0  crorc 2, 2, 6
  010f9a4  bt 2, 0x10fa4c
  010f9a8  lfs 1, 0(15)
  010f9ac  lis 4, 17
  010f9b0  stfs 1, 224(1)
  010f9b4  lfs 1, 4(15)
  010f9b8  addi 4, 4, -8308
  010f9bc  addic 3, 1, 224
  010f9c0  stfs 1, 228(1)
  010f9c4  lfs 1, 8(15)
  010f9c8  stfs 28, 236(1)
  010f9cc  stfs 1, 232(1)
  010f9d0  lfs 1, 156(4)
  010f9d4  bl 0x502910
  010f9d8  nop
  010f9dc  cmpwi 3, -1
  010f9e0  bt 2, 0x10fa4c
  010f9e4  fsub 1, 26, 28
  010f9e8  lis 3, 17
  010f9ec  lis 4, 115
  010f9f0  addi 3, 3, -8308
  010f9f4  lfs 2, 160(3)
  010f9f8  addic 3, 4, -28016
  010f9fc  ld 4, 392(1)
  010fa00  fsel 1, 1, 2, 28
  010fa04  cmpwi 4, 0
  010fa08  stfs 1, 40(3)
  010fa0c  stfs 1, 36(3)
  010fa10  stfs 1, 32(3)
  010fa14  bt 2, 0x10fa38
  010fa18  lis 3, 115
  010fa1c  ori 4, 15, 0
  010fa20  addic 3, 3, -27936
  010fa24  li 5, 0
  010fa28  li 6, 0
  010fa2c  bl 0x3fda38
  010fa30  nop
  010fa34  b 0x10fa4c
  010fa38  ori 4, 15, 0
  010fa3c  li 5, 0
  010fa40  li 6, 0
  010fa44  bl 0x3fda38
  010fa48  nop
  010fa4c  ld 0, 784(1)
  010fa50  mtlr 0
  010fa54  lfd 14, 624(1)
  010fa58  lfd 15, 632(1)
  010fa5c  lfd 16, 640(1)
  010fa60  lfd 17, 648(1)
  010fa64  lfd 18, 656(1)
  010fa68  lfd 19, 664(1)
  010fa6c  lfd 20, 672(1)
  010fa70  lfd 21, 680(1)
  010fa74  lfd 22, 688(1)
  010fa78  lfd 23, 696(1)
  010fa7c  lfd 24, 704(1)
  010fa80  lfd 25, 712(1)
  010fa84  lfd 26, 720(1)
  010fa88  lfd 27, 728(1)
  010fa8c  lfd 28, 736(1)
  010fa90  lfd 29, 744(1)
  010fa94  lfd 30, 752(1)
  010fa98  lfd 31, 760(1)
  010fa9c  ld 14, 480(1)
  010faa0  ld 15, 488(1)
  010faa4  ld 16, 496(1)
  010faa8  ld 17, 504(1)
  010faac  ld 18, 512(1)
  010fab0  ld 19, 520(1)
  010fab4  ld 20, 528(1)
  010fab8  ld 21, 536(1)
  010fabc  ld 22, 544(1)
  010fac0  ld 23, 552(1)
  010fac4  ld 24, 560(1)
  010fac8  ld 25, 568(1)
  010facc  ld 26, 576(1)
  010fad0  ld 27, 584(1)
  010fad4  ld 28, 592(1)
  010fad8  ld 29, 600(1)
  010fadc  ld 30, 608(1)
  010fae0  ld 31, 616(1)
  010fae4  addi 1, 1, 768
  010fae8  blr

MB_SpawnExplosionSparks:   # 0x10fb28, 0x4e4 bytes
  010fb28  stdu 1, -400(1)
  010fb2c  mflr 0
  010fb30  std 0, 416(1)
  010fb34  stfd 21, 312(1)
  010fb38  stfd 22, 320(1)
  010fb3c  stfd 23, 328(1)
  010fb40  stfd 24, 336(1)
  010fb44  stfd 25, 344(1)
  010fb48  stfd 26, 352(1)
  010fb4c  stfd 27, 360(1)
  010fb50  stfd 28, 368(1)
  010fb54  stfd 29, 376(1)
  010fb58  stfd 30, 384(1)
  010fb5c  stfd 31, 392(1)
  010fb60  std 22, 232(1)
  010fb64  lis 5, 17
  010fb68  li 22, 0
  010fb6c  fmr 30, 1
  010fb70  addi 5, 5, -1300
  010fb74  std 23, 240(1)
  010fb78  fmr 31, 2
  010fb7c  std 25, 256(1)
  010fb80  std 24, 248(1)
  010fb84  addic 23, 1, 128
  010fb88  lis 24, 114
  010fb8c  std 26, 264(1)
  010fb90  ori 25, 3, 0
  010fb94  ori 26, 4, 0
  010fb98  std 27, 272(1)
  010fb9c  lfs 22, 0(5)
  010fba0  ori 27, 6, 0
  010fba4  stw 22, 140(1)
  010fba8  stw 22, 136(1)
  010fbac  stw 22, 132(1)
  010fbb0  stw 22, 128(1)
  010fbb4  lfs 24, 8(5)
  010fbb8  lfs 23, 4(5)
  010fbbc  lfs 25, 12(5)
  010fbc0  fmuls 24, 24, 1
  010fbc4  lfs 26, 16(5)
  010fbc8  lfs 27, 20(5)
  010fbcc  std 31, 304(1)
  010fbd0  std 30, 296(1)
  010fbd4  std 29, 288(1)
  010fbd8  std 28, 280(1)
  010fbdc  std 21, 224(1)
  010fbe0  lfs 28, 24(5)
  010fbe4  lfs 29, 28(5)
  010fbe8  bl 0x5c8318
  010fbec  nop
  010fbf0  srawi 3, 3, 15
  010fbf4  lis 5, 20224
  010fbf8  clrlwi 3, 3, 17
  010fbfc  lis 4, 20224
  010fc00  extsw 3, 3
  010fc04  ori 5, 5, 36863
  010fc08  lis 6, 12287
  010fc0c  ori 4, 4, 28671
  010fc10  std 3, 208(1)
  010fc14  ori 6, 6, 65535
  010fc18  lis 3, 114
  010fc1c  lis 7, 12032
  010fc20  lfs 1, -3052(3)
  010fc24  lis 3, 20224
  010fc28  stw 5, 160(1)
  010fc2c  ori 3, 3, 32767
  010fc30  stw 5, 164(1)
  010fc34  stw 4, 172(1)
  010fc38  stw 6, 176(1)
  010fc3c  ori 4, 7, 24447
  010fc40  stw 3, 168(1)
  010fc44  lis 5, 12032
  010fc48  lfd 2, 208(1)
  010fc4c  lis 7, 12032
  010fc50  ori 3, 5, 20351
  010fc54  stw 6, 180(1)
  010fc58  fcfid 2, 2
  010fc5c  stw 4, 184(1)
  010fc60  ori 4, 7, 16255
  010fc64  lis 5, 12032
  010fc68  stw 3, 188(1)
  010fc6c  ori 3, 5, 79
  010fc70  lis 5, 12032
  010fc74  stw 4, 192(1)
  010fc78  lis 4, 16128
  010fc7c  stw 3, 196(1)
  010fc80  stw 5, 200(1)
  010fc84  frsp 2, 2
  010fc88  stw 4, 204(1)
  010fc8c  fmadds 2, 2, 29, 23
  010fc90  fmuls 21, 2, 1
  010fc94  bl 0x5c8318
  010fc98  nop
  010fc9c  srawi 3, 3, 15
  010fca0  clrlwi 3, 3, 17
  010fca4  addic 4, 3, 1
  010fca8  mulli 4, 4, 21845
  010fcac  srwi 4, 4, 17
  010fcb0  addc 5, 4, 4
  010fcb4  addc 4, 4, 5
  010fcb8  addc 4, 4, 4
  010fcbc  subc 3, 3, 4
  010fcc0  sldi 3, 3, 2
  010fcc4  addc 3, 3, 1
  010fcc8  clrldi 3, 3, 32
  010fccc  lwz 3, 160(3)
  010fcd0  extsw 31, 3
  010fcd4  bl 0x5c8318
  010fcd8  nop
  010fcdc  srawi 3, 3, 15
  010fce0  lfs 1, -3056(24)
  010fce4  clrlwi 3, 3, 17
  010fce8  fmuls 2, 1, 25
  010fcec  addic 4, 3, 1
  010fcf0  mulli 4, 4, 21845
  010fcf4  fmuls 1, 1, 26
  010fcf8  srwi 4, 4, 17
  010fcfc  fctiwz 2, 2
  010fd00  addc 5, 4, 4
  010fd04  addc 4, 4, 5
  010fd08  addc 4, 4, 4
  010fd0c  subc 3, 3, 4
  010fd10  fctiwz 1, 1
  010fd14  sldi 3, 3, 2
  010fd18  addc 3, 3, 1
  010fd1c  clrldi 3, 3, 32
  010fd20  lwz 3, 184(3)
  010fd24  stfd 2, 208(1)
  010fd28  lwz 29, 212(1)
  010fd2c  extsw 30, 3
  010fd30  stfd 1, 208(1)
  010fd34  lwz 28, 212(1)
  010fd38  bl 0x5c8318
  010fd3c  nop
  010fd40  srawi 3, 3, 15
  010fd44  lfs 1, -3056(24)
  010fd48  subc 4, 28, 29
  010fd4c  clrlwi 3, 3, 17
  010fd50  addic 5, 4, 1
  010fd54  fmuls 2, 1, 27
  010fd58  fmuls 1, 1, 28
  010fd5c  divw 5, 3, 5
  010fd60  mullw 4, 5, 4
  010fd64  fctiwz 2, 2
  010fd68  fctiwz 1, 1
  010fd6c  addc 4, 4, 5
  010fd70  subc 3, 3, 4
  010fd74  addc 3, 3, 29
  010fd78  extsw 29, 3
  010fd7c  stfd 2, 208(1)
  010fd80  lwz 28, 212(1)
  010fd84  stfd 1, 208(1)
  010fd88  lwz 21, 212(1)
  010fd8c  bl 0x5c8318
  010fd90  nop
  010fd94  srawi 3, 3, 15
  010fd98  subc 4, 21, 28
  010fd9c  clrlwi 5, 3, 17
  010fda0  addic 3, 4, 1
  010fda4  fmuls 2, 21, 30
  010fda8  divw 3, 5, 3
  010fdac  mullw 4, 3, 4
  010fdb0  li 6, 0
  010fdb4  fmr 1, 24
  010fdb8  addc 4, 4, 3
  010fdbc  ori 3, 26, 0
  010fdc0  subc 5, 5, 4
  010fdc4  std 6, 112(1)
  010fdc8  addc 9, 5, 28
  010fdcc  std 6, 120(1)
  010fdd0  ori 4, 23, 0
  010fdd4  ori 5, 31, 0
  010fdd8  extsw 9, 9
  010fddc  ori 6, 30, 0
  010fde0  ori 8, 29, 0
  010fde4  bl 0x123390
  010fde8  nop
  010fdec  addic 22, 22, 1
  010fdf0  cmpwi 22, 3
  010fdf4  bt 0, 0x10fbe8
  010fdf8  cmpwi 25, 0
  010fdfc  bt 2, 0x10fe9c
  010fe00  lfs 1, -3056(24)
  010fe04  lis 3, 17
  010fe08  li 6, 48
  010fe0c  fmuls 1, 1, 26
  010fe10  addi 31, 3, -1300
  010fe14  ori 3, 25, 0
  010fe18  ori 4, 26, 0
  010fe1c  ori 5, 23, 0
  010fe20  li 8, 127
  010fe24  lfs 2, 32(31)
  010fe28  std 6, 112(1)
  010fe2c  li 9, 64
  010fe30  li 10, 0
  010fe34  fctiwz 3, 1
  010fe38  fmuls 1, 30, 2
  010fe3c  stfd 3, 208(1)
  010fe40  lwz 7, 212(1)
  010fe44  extsw 7, 7
  010fe48  bl 0x1d4d88
  010fe4c  nop
  010fe50  lfs 1, 40(31)
  010fe54  li 5, 32
  010fe58  lfs 2, -3056(24)
  010fe5c  ori 3, 25, 0
  010fe60  lfs 3, 36(31)
  010fe64  ori 4, 26, 0
  010fe68  fmuls 2, 2, 1
  010fe6c  li 8, 96
  010fe70  std 5, 112(1)
  010fe74  fmuls 1, 30, 3
  010fe78  ori 5, 23, 0
  010fe7c  li 9, 32
  010fe80  li 10, 0
  010fe84  fctiwz 2, 2
  010fe88  stfd 2, 208(1)
  010fe8c  lwz 7, 212(1)
  010fe90  extsw 7, 7
  010fe94  bl 0x1d4d88
  010fe98  nop
  010fe9c  lfs 1, 0(26)
  010fea0  lis 5, 17
  010fea4  stfs 1, 144(1)
  010fea8  lis 4, 16384
  010feac  lfs 1, 4(26)
  010feb0  addi 5, 5, -1300
  010feb4  stfs 1, 148(1)
  010feb8  lfs 1, 8(26)
  010febc  addic 3, 1, 144
  010fec0  stw 4, 156(1)
  010fec4  stfs 1, 152(1)
  010fec8  lfs 1, 44(5)
  010fecc  bl 0x502910
  010fed0  nop
  010fed4  cmpwi 3, -1
  010fed8  bt 2, 0x10ff28
  010fedc  lis 3, 17
  010fee0  lis 5, 149
  010fee4  vspltisw 2, -1
  010fee8  addi 3, 3, -1300
  010feec  li 6, -3056
  010fef0  addic 5, 5, 5056
  010fef4  li 4, 16
  010fef8  vslw 2, 2, 2
  010fefc  lfs 1, 48(3)
  010ff00  <unknown>
  010ff04  fmuls 1, 30, 1
  010ff08  li 6, 360
  010ff0c  stfs 1, 352(5)
  010ff10  <unknown>
  010ff14  vspltw 4, 4, 0
  010ff18  vmaddfp 2, 3, 4, 2
  010ff1c  vctsxs 2, 2, 0
  010ff20  vspltw 2, 2, 0
  010ff24  stvewx 2, 6, 5
  010ff28  cmpwi 25, 0
  010ff2c  bt 2, 0x10ff60
  010ff30  lbz 3, 32(25)
  010ff34  cmpwi 1, 3, 253
  010ff38  cmpwi 3, 254
  010ff3c  cror 2, 2, 6
  010ff40  bt 2, 0x10ff60
  010ff44  cmpwi 27, -1
  010ff48  bt 2, 0x10ff60
  010ff4c  clrldi 3, 27, 32
  010ff50  li 4, 0
  010ff54  ori 5, 25, 0
  010ff58  bl 0x15d12c
  010ff5c  nop
  010ff60  fcmpu 0, 31, 22
  010ff64  bt 2, 0x10ffa4
  010ff68  fsub 1, 22, 31
  010ff6c  lis 3, 17
  010ff70  lis 4, 115
  010ff74  addi 3, 3, -1300
  010ff78  li 5, 0
  010ff7c  li 6, 0
  010ff80  lfs 2, 52(3)
  010ff84  addic 3, 4, -27856
  010ff88  ori 4, 26, 0
  010ff8c  fsel 1, 1, 2, 31
  010ff90  stfs 1, 36(3)
  010ff94  stfs 1, 40(3)
  010ff98  stfs 1, 32(3)
  010ff9c  bl 0x3fda38
  010ffa0  nop
  010ffa4  ld 0, 416(1)
  010ffa8  mtlr 0
  010ffac  lfd 21, 312(1)
  010ffb0  lfd 22, 320(1)
  010ffb4  lfd 23, 328(1)
  010ffb8  lfd 24, 336(1)
  010ffbc  lfd 25, 344(1)
  010ffc0  lfd 26, 352(1)
  010ffc4  lfd 27, 360(1)
  010ffc8  lfd 28, 368(1)
  010ffcc  lfd 29, 376(1)
  010ffd0  lfd 30, 384(1)
  010ffd4  lfd 31, 392(1)
  010ffd8  ld 21, 224(1)
  010ffdc  ld 22, 232(1)
  010ffe0  ld 23, 240(1)
  010ffe4  ld 24, 248(1)
  010ffe8  ld 25, 256(1)
  010ffec  ld 26, 264(1)
  010fff0  ld 27, 272(1)
  010fff4  ld 28, 280(1)
  010fff8  ld 29, 288(1)
  010fffc  ld 30, 296(1)
  0110000  ld 31, 304(1)
  0110004  addi 1, 1, 400
  0110008  blr

MB_SpawnExplosionSparks2:   # 0x110040, 0x444 bytes
  0110040  stdu 1, -384(1)
  0110044  mflr 0
  0110048  std 0, 400(1)
  011004c  stfd 21, 296(1)
  0110050  stfd 22, 304(1)
  0110054  stfd 23, 312(1)
  0110058  stfd 24, 320(1)
  011005c  stfd 25, 328(1)
  0110060  stfd 26, 336(1)
  0110064  stfd 27, 344(1)
  0110068  stfd 28, 352(1)
  011006c  stfd 29, 360(1)
  0110070  stfd 30, 368(1)
  0110074  stfd 31, 376(1)
  0110078  std 27, 256(1)
  011007c  lis 5, 17
  0110080  li 27, 0
  0110084  fmr 30, 1
  0110088  addi 5, 5, 12
  011008c  std 28, 264(1)
  0110090  fmr 31, 2
  0110094  std 30, 280(1)
  0110098  std 29, 272(1)
  011009c  addic 28, 1, 128
  01100a0  lis 29, 114
  01100a4  std 31, 288(1)
  01100a8  ori 30, 3, 0
  01100ac  ori 31, 4, 0
  01100b0  lfs 22, 0(5)
  01100b4  stw 27, 140(1)
  01100b8  stw 27, 136(1)
  01100bc  stw 27, 132(1)
  01100c0  stw 27, 128(1)
  01100c4  lfs 24, 8(5)
  01100c8  lfs 23, 4(5)
  01100cc  lfs 25, 12(5)
  01100d0  lfs 26, 16(5)
  01100d4  fmuls 24, 24, 1
  01100d8  lfs 27, 20(5)
  01100dc  std 26, 248(1)
  01100e0  std 25, 240(1)
  01100e4  std 24, 232(1)
  01100e8  std 23, 224(1)
  01100ec  std 22, 216(1)
  01100f0  lfs 28, 24(5)
  01100f4  lfs 29, 28(5)
  01100f8  bl 0x5c8318
  01100fc  nop
  0110100  srawi 3, 3, 15
  0110104  lis 4, 20224
  0110108  clrlwi 3, 3, 17
  011010c  ori 4, 4, 36863
  0110110  extsw 3, 3
  0110114  lis 6, 20224
  0110118  lis 5, 12287
  011011c  ori 6, 6, 32767
  0110120  std 3, 192(1)
  0110124  lis 3, 114
  0110128  lis 7, 12032
  011012c  lis 8, 12032
  0110130  lfs 1, -3052(3)
  0110134  lis 3, 20224
  0110138  stw 4, 144(1)
  011013c  stw 4, 148(1)
  0110140  ori 3, 3, 28671
  0110144  ori 4, 5, 65535
  0110148  stw 6, 152(1)
  011014c  lis 5, 12032
  0110150  lis 6, 12032
  0110154  stw 3, 156(1)
  0110158  stw 4, 160(1)
  011015c  lfd 2, 192(1)
  0110160  ori 3, 5, 24447
  0110164  ori 5, 7, 20351
  0110168  stw 4, 164(1)
  011016c  fcfid 2, 2
  0110170  ori 4, 6, 16255
  0110174  lis 6, 16128
  0110178  stw 3, 168(1)
  011017c  ori 3, 8, 79
  0110180  stw 5, 172(1)
  0110184  lis 5, 12032
  0110188  stw 4, 176(1)
  011018c  stw 3, 180(1)
  0110190  stw 5, 184(1)
  0110194  stw 6, 188(1)
  0110198  frsp 2, 2
  011019c  fmadds 2, 2, 29, 23
  01101a0  fmuls 21, 2, 1
  01101a4  bl 0x5c8318
  01101a8  nop
  01101ac  srawi 3, 3, 15
  01101b0  clrlwi 3, 3, 17
  01101b4  addic 4, 3, 1
  01101b8  mulli 4, 4, 21845
  01101bc  srwi 4, 4, 17
  01101c0  addc 5, 4, 4
  01101c4  addc 4, 4, 5
  01101c8  addc 4, 4, 4
  01101cc  subc 3, 3, 4
  01101d0  sldi 3, 3, 2
  01101d4  addc 3, 3, 1
  01101d8  clrldi 3, 3, 32
  01101dc  lwz 3, 144(3)
  01101e0  rlwinm 4, 3, 24, 24, 31
  01101e4  rlwinm 5, 3, 0, 8, 15
  01101e8  rlwimi 4, 3, 8, 16, 23
  01101ec  rlwinm 3, 3, 0, 0, 7
  01101f0  or 3, 4, 3
  01101f4  or 3, 3, 5
  01101f8  extsw 26, 3
  01101fc  bl 0x5c8318
  0110200  nop
  0110204  srawi 3, 3, 15
  0110208  lfs 1, -3056(29)
  011020c  clrlwi 3, 3, 17
  0110210  fmuls 2, 1, 25
  0110214  fmuls 1, 1, 26
  0110218  addic 4, 3, 1
  011021c  mulli 4, 4, 21845
  0110220  fctiwz 2, 2
  0110224  srwi 4, 4, 17
  0110228  fctiwz 1, 1
  011022c  addc 5, 4, 4
  0110230  addc 4, 4, 5
  0110234  addc 4, 4, 4
  0110238  subc 3, 3, 4
  011023c  sldi 3, 3, 2
  0110240  addc 3, 3, 1
  0110244  clrldi 3, 3, 32
  0110248  lwz 3, 168(3)
  011024c  stfd 2, 192(1)
  0110250  rlwinm 4, 3, 24, 24, 31
  0110254  rlwinm 5, 3, 0, 8, 15
  0110258  lwz 25, 196(1)
  011025c  rlwimi 4, 3, 8, 16, 23
  0110260  stfd 1, 192(1)
  0110264  rlwinm 3, 3, 0, 0, 7
  0110268  lwz 23, 196(1)
  011026c  or 3, 4, 3
  0110270  or 3, 3, 5
  0110274  extsw 24, 3
  0110278  bl 0x5c8318
  011027c  nop
  0110280  srawi 3, 3, 15
  0110284  subc 4, 23, 25
  0110288  lfs 1, -3056(29)
  011028c  clrlwi 3, 3, 17
  0110290  addic 5, 4, 1
  0110294  fmuls 2, 1, 27
  0110298  divw 5, 3, 5
  011029c  fmuls 1, 1, 28
  01102a0  mullw 4, 5, 4
  01102a4  fctiwz 2, 2
  01102a8  fctiwz 1, 1
  01102ac  addc 4, 4, 5
  01102b0  subc 3, 3, 4
  01102b4  addc 3, 3, 25
  01102b8  extsw 25, 3
  01102bc  stfd 2, 192(1)
  01102c0  lwz 23, 196(1)
  01102c4  stfd 1, 192(1)
  01102c8  lwz 22, 196(1)
  01102cc  bl 0x5c8318
  01102d0  nop
  01102d4  srawi 3, 3, 15
  01102d8  subc 4, 22, 23
  01102dc  clrlwi 3, 3, 17
  01102e0  addic 5, 4, 1
  01102e4  divw 5, 3, 5
  01102e8  mullw 4, 5, 4
  01102ec  li 7, 0
  01102f0  fmuls 2, 21, 30
  01102f4  addc 4, 4, 5
  01102f8  fmr 1, 24
  01102fc  ori 6, 24, 0
  0110300  subc 3, 3, 4
  0110304  std 7, 112(1)
  0110308  ori 8, 25, 0
  011030c  addc 9, 3, 23
  0110310  std 7, 120(1)
  0110314  ori 3, 31, 0
  0110318  ori 4, 28, 0
  011031c  extsw 9, 9
  0110320  ori 5, 26, 0
  0110324  bl 0x123390
  0110328  nop
  011032c  addic 27, 27, 1
  0110330  cmpwi 27, 3
  0110334  bt 0, 0x1100f8
  0110338  cmpwi 30, 0
  011033c  bt 2, 0x1103dc
  0110340  lfs 1, -3056(29)
  0110344  lis 3, 17
  0110348  fmuls 1, 1, 26
  011034c  addi 27, 3, 12
  0110350  li 6, 48
  0110354  ori 3, 30, 0
  0110358  ori 4, 31, 0
  011035c  ori 5, 28, 0
  0110360  lfs 2, 32(27)
  0110364  std 6, 112(1)
  0110368  li 8, 64
  011036c  li 9, 127
  0110370  li 10, 0
  0110374  fctiwz 3, 1
  0110378  fmuls 1, 30, 2
  011037c  stfd 3, 192(1)
  0110380  lwz 7, 196(1)
  0110384  extsw 7, 7
  0110388  bl 0x1d4d88
  011038c  nop
  0110390  lfs 1, 40(27)
  0110394  lfs 2, -3056(29)
  0110398  li 5, 32
  011039c  lfs 3, 36(27)
  01103a0  ori 3, 30, 0
  01103a4  fmuls 2, 2, 1
  01103a8  ori 4, 31, 0
  01103ac  li 8, 32
  01103b0  fmuls 1, 30, 3
  01103b4  std 5, 112(1)
  01103b8  li 9, 96
  01103bc  ori 5, 28, 0
  01103c0  li 10, 0
  01103c4  fctiwz 2, 2
  01103c8  stfd 2, 192(1)
  01103cc  lwz 7, 196(1)
  01103d0  extsw 7, 7
  01103d4  bl 0x1d4d88
  01103d8  nop
  01103dc  fcmpu 0, 31, 22
  01103e0  bt 2, 0x110420
  01103e4  fsub 1, 22, 31
  01103e8  lis 3, 17
  01103ec  lis 4, 115
  01103f0  addi 3, 3, 12
  01103f4  li 5, 0
  01103f8  li 6, 0
  01103fc  lfs 2, 44(3)
  0110400  addic 3, 4, -27856
  0110404  ori 4, 31, 0
  0110408  fsel 1, 1, 2, 31
  011040c  stfs 1, 36(3)
  0110410  stfs 1, 40(3)
  0110414  stfs 1, 32(3)
  0110418  bl 0x3fda38
  011041c  nop
  0110420  ld 0, 400(1)
  0110424  mtlr 0
  0110428  lfd 21, 296(1)
  011042c  lfd 22, 304(1)
  0110430  lfd 23, 312(1)
  0110434  lfd 24, 320(1)
  0110438  lfd 25, 328(1)
  011043c  lfd 26, 336(1)
  0110440  lfd 27, 344(1)
  0110444  lfd 28, 352(1)
  0110448  lfd 29, 360(1)
  011044c  lfd 30, 368(1)
  0110450  lfd 31, 376(1)
  0110454  ld 22, 216(1)
  0110458  ld 23, 224(1)
  011045c  ld 24, 232(1)
  0110460  ld 25, 240(1)
  0110464  ld 26, 248(1)
  0110468  ld 27, 256(1)
  011046c  ld 28, 264(1)
  0110470  ld 29, 272(1)
  0110474  ld 30, 280(1)
  0110478  ld 31, 288(1)
  011047c  addi 1, 1, 384
  0110480  blr

ClampVec3Magnitude:   # 0x110488, 0x84 bytes
  0110488  lfs 3, 4(3)
  011048c  lfs 4, 0(3)
  0110490  fmuls 5, 3, 3
  0110494  lfs 2, 8(3)
  0110498  fmadds 5, 4, 4, 5
  011049c  fmadds 5, 2, 2, 5
  01104a0  fsqrts 5, 5
  01104a4  fcmpu 0, 5, 1
  01104a8  cror 6, 0, 2
  01104ac  bt 6, 0x110508
  01104b0  fdivs 1, 1, 5
  01104b4  lis 4, 17
  01104b8  addi 4, 4, 1156
  01104bc  lfs 6, 0(4)
  01104c0  fsub 7, 6, 5
  01104c4  fsub 8, 6, 5
  01104c8  fsub 9, 6, 5
  01104cc  fsub 10, 5, 6
  01104d0  fsub 11, 5, 6
  01104d4  fsub 5, 5, 6
  01104d8  fmuls 4, 4, 1
  01104dc  fmuls 3, 3, 1
  01104e0  fmuls 1, 2, 1
  01104e4  fsel 2, 7, 6, 4
  01104e8  fsel 7, 8, 6, 3
  01104ec  fsel 6, 9, 6, 1
  01104f0  fsel 2, 10, 2, 4
  01104f4  fsel 3, 11, 7, 3
  01104f8  fsel 1, 5, 6, 1
  01104fc  stfs 2, 0(3)
  0110500  stfs 3, 4(3)
  0110504  stfs 1, 8(3)
  0110508  blr

???_MB_PickMinAbsField2c_Of4:   # 0x11050c, 0x1b0 bytes
  011050c  cmpwi 3, 0
  0110510  li 7, 0
  0110514  bt 2, 0x1105d4
  0110518  cmpwi 4, 0
  011051c  ori 7, 3, 0
  0110520  bt 2, 0x110558
  0110524  lwz 3, 44(7)
  0110528  lwz 8, 44(4)
  011052c  srawi 9, 3, 31
  0110530  srawi 10, 8, 31
  0110534  srwi 11, 9, 1
  0110538  srwi 12, 10, 1
  011053c  xor 3, 11, 3
  0110540  xor 8, 12, 8
  0110544  subc 3, 3, 9
  0110548  subc 8, 8, 10
  011054c  cmpw 3, 8
  0110550  bt 1, 0x110558
  0110554  ori 7, 4, 0
  0110558  cmpwi 5, 0
  011055c  bt 2, 0x110594
  0110560  lwz 3, 44(7)
  0110564  lwz 4, 44(5)
  0110568  srawi 9, 3, 31
  011056c  srawi 8, 4, 31
  0110570  srwi 11, 9, 1
  0110574  srwi 10, 8, 1
  0110578  xor 3, 11, 3
  011057c  xor 4, 10, 4
  0110580  subc 3, 3, 9
  0110584  subc 4, 4, 8
  0110588  cmpw 3, 4
  011058c  bt 1, 0x110594
  0110590  ori 7, 5, 0
  0110594  cmpwi 6, 0
  0110598  bt 2, 0x1106b4
  011059c  lwz 3, 44(7)
  01105a0  lwz 4, 44(6)
  01105a4  srawi 5, 3, 31
  01105a8  srawi 8, 4, 31
  01105ac  srwi 9, 5, 1
  01105b0  srwi 10, 8, 1
  01105b4  xor 3, 9, 3
  01105b8  xor 4, 10, 4
  01105bc  subc 3, 3, 5
  01105c0  subc 4, 4, 8
  01105c4  cmpw 3, 4
  01105c8  bt 1, 0x1106b4
  01105cc  ori 7, 6, 0
  01105d0  b 0x1106b4
  01105d4  cmpwi 4, 0
  01105d8  bt 2, 0x11065c
  01105dc  cmpwi 5, 0
  01105e0  ori 7, 4, 0
  01105e4  bt 2, 0x11061c
  01105e8  lwz 3, 44(7)
  01105ec  lwz 4, 44(5)
  01105f0  srawi 9, 3, 31
  01105f4  srawi 8, 4, 31
  01105f8  srwi 11, 9, 1
  01105fc  srwi 10, 8, 1
  0110600  xor 3, 11, 3
  0110604  xor 4, 10, 4
  0110608  subc 3, 3, 9
  011060c  subc 4, 4, 8
  0110610  cmpw 3, 4
  0110614  bt 1, 0x11061c
  0110618  ori 7, 5, 0
  011061c  cmpwi 6, 0
  0110620  bt 2, 0x1106b4
  0110624  lwz 3, 44(7)
  0110628  lwz 4, 44(6)
  011062c  srawi 5, 3, 31
  0110630  srawi 8, 4, 31
  0110634  srwi 9, 5, 1
  0110638  srwi 10, 8, 1
  011063c  xor 3, 9, 3
  0110640  xor 4, 10, 4
  0110644  subc 3, 3, 5
  0110648  subc 4, 4, 8
  011064c  cmpw 3, 4
  0110650  bt 1, 0x1106b4
  0110654  ori 7, 6, 0
  0110658  b 0x1106b4
  011065c  cmpwi 5, 0
  0110660  bt 2, 0x1106a8
  0110664  cmpwi 6, 0
  0110668  ori 7, 5, 0
  011066c  bt 2, 0x1106b4
  0110670  lwz 3, 44(7)
  0110674  lwz 4, 44(6)
  0110678  srawi 8, 3, 31
  011067c  srawi 5, 4, 31
  0110680  srwi 10, 8, 1
  0110684  srwi 9, 5, 1
  0110688  xor 3, 10, 3
  011068c  xor 4, 9, 4
  0110690  subc 3, 3, 8
  0110694  subc 4, 4, 5
  0110698  cmpw 3, 4
  011069c  bt 1, 0x1106b4
  01106a0  ori 7, 6, 0
  01106a4  b 0x1106b4
  01106a8  cmpwi 6, 0
  01106ac  bt 2, 0x1106b4
  01106b0  ori 7, 6, 0
  01106b4  ori 3, 7, 0
  01106b8  blr

MB_computeLobVelocityClamped:   # 0x1106c0, 0x64 bytes
  01106c0  lfs 5, 4(4)
  01106c4  lfs 6, 4(5)
  01106c8  lfs 7, 0(4)
  01106cc  fsubs 5, 5, 6
  01106d0  lfs 6, 0(5)
  01106d4  fsubs 6, 7, 6
  01106d8  lis 3, 17
  01106dc  fmuls 5, 5, 5
  01106e0  addi 3, 3, 1724
  01106e4  fmadds 5, 6, 6, 5
  01106e8  lfs 6, 8(5)
  01106ec  lfs 7, 8(4)
  01106f0  fsubs 6, 6, 7
  01106f4  fsqrts 5, 5
  01106f8  lfs 7, 0(3)
  01106fc  fdivs 1, 5, 1
  0110700  fmuls 4, 4, 1
  0110704  fmuls 4, 4, 1
  0110708  fmadds 4, 4, 7, 6
  011070c  fdivs 1, 4, 1
  0110710  fsub 4, 3, 1
  0110714  fsel 1, 4, 1, 3
  0110718  fsub 3, 1, 2
  011071c  fsel 1, 3, 1, 2
  0110720  blr

MB_AddMobyToDynamicGroup:   # 0x110724, 0x74 bytes
  0110724  lis 6, 164
  0110728  extsh 8, 5
  011072c  li 7, 1
  0110730  lwz 5, -28512(6)
  0110734  lhz 6, 0(4)
  0110738  subc 3, 3, 5
  011073c  extsh 5, 6
  0110740  srawi 3, 3, 8
  0110744  cmpwi 5, 1
  0110748  addze 3, 3
  011074c  cmpw 1, 5, 8
  0110750  extsh 8, 3
  0110754  bt 0, 0x11077c
  0110758  addic 9, 4, 2
  011075c  lhz 10, 0(9)
  0110760  extsh 10, 10
  0110764  cmpw 10, 8
  0110768  bt 2, 0x110794
  011076c  addic 7, 7, 1
  0110770  addic 9, 9, 2
  0110774  cmpw 7, 5
  0110778  bf 1, 0x11075c
  011077c  bf 4, 0x110794
  0110780  addic 5, 6, 1
  0110784  extsh 6, 5
  0110788  sldi 6, 6, 1
  011078c  sth 5, 0(4)
  0110790  sthx 3, 4, 6
  0110794  blr

MB_DeleteMobyFromDynamicGroup:   # 0x110798, 0x70 bytes
  0110798  lhz 7, 0(4)
  011079c  li 8, 1
  01107a0  extsh 7, 7
  01107a4  cmpwi 7, 1
  01107a8  bt 0, 0x110804
  01107ac  lis 6, 164
  01107b0  addic 5, 4, 2
  01107b4  lwz 6, -28512(6)
  01107b8  lhz 9, 0(5)
  01107bc  extsh 9, 9
  01107c0  sldi 9, 9, 8
  01107c4  addc 9, 6, 9
  01107c8  cmpw 9, 3
  01107cc  bf 2, 0x1107f4
  01107d0  sldi 3, 7, 1
  01107d4  slwi 5, 8, 1
  01107d8  extsw 5, 5
  01107dc  lhzx 3, 4, 3
  01107e0  sthx 3, 4, 5
  01107e4  lhz 3, 0(4)
  01107e8  addic 3, 3, -1
  01107ec  sth 3, 0(4)
  01107f0  b 0x110804
  01107f4  addic 8, 8, 1
  01107f8  addic 5, 5, 2
  01107fc  cmpw 8, 7
  0110800  bf 1, 0x1107b8
  0110804  blr

MB_FindMobyByVarId:   # 0x110808, 0x88 bytes
  0110808  lis 4, 165
  011080c  li 8, 1
  0110810  lhz 7, 7848(4)
  0110814  extsh 7, 7
  0110818  cmpwi 7, 1
  011081c  bt 0, 0x110888
  0110820  lis 5, 164
  0110824  lis 6, 165
  0110828  addic 6, 6, 7848
  011082c  addic 4, 6, 2
  0110830  lwz 5, -28512(5)
  0110834  lhz 9, 0(4)
  0110838  extsh 9, 9
  011083c  sldi 9, 9, 8
  0110840  addc 9, 5, 9
  0110844  clrldi 9, 9, 32
  0110848  lwz 9, 120(9)
  011084c  lwz 9, 24(9)
  0110850  cmpw 9, 3
  0110854  bf 2, 0x110878
  0110858  slwi 3, 8, 1
  011085c  extsw 3, 3
  0110860  lhzx 3, 6, 3
  0110864  extsh 3, 3
  0110868  sldi 3, 3, 8
  011086c  addc 3, 5, 3
  0110870  clrldi 3, 3, 32
  0110874  b 0x11088c
  0110878  addic 8, 8, 1
  011087c  addic 4, 4, 2
  0110880  cmpw 8, 7
  0110884  bf 1, 0x110834
  0110888  li 3, 0
  011088c  blr

MB_FindNearestMobyInList:   # 0x110898, 0xb4 bytes
  0110898  lis 5, 165
  011089c  lis 4, 17
  01108a0  li 7, 0
  01108a4  addi 4, 4, 2192
  01108a8  li 6, 1
  01108ac  lhz 5, 7912(5)
  01108b0  extsh 5, 5
  01108b4  lfs 5, 0(4)
  01108b8  cmpwi 5, 1
  01108bc  bt 0, 0x110944
  01108c0  lis 4, 164
  01108c4  ori 8, 3, 0
  01108c8  lis 3, 165
  01108cc  addic 3, 3, 7912
  01108d0  lwz 4, -28512(4)
  01108d4  lfs 3, 16(8)
  01108d8  lfs 2, 20(8)
  01108dc  addic 3, 3, 2
  01108e0  lfs 1, 24(8)
  01108e4  lhz 8, 0(3)
  01108e8  extsh 8, 8
  01108ec  sldi 8, 8, 8
  01108f0  addc 8, 8, 4
  01108f4  clrldi 8, 8, 32
  01108f8  lfs 4, 20(8)
  01108fc  lfs 6, 16(8)
  0110900  fsubs 4, 2, 4
  0110904  lfs 7, 24(8)
  0110908  fsubs 6, 3, 6
  011090c  fsubs 7, 1, 7
  0110910  fmuls 4, 4, 4
  0110914  fmadds 4, 6, 6, 4
  0110918  fmadds 4, 7, 7, 4
  011091c  fsqrts 4, 4
  0110920  fcmpu 0, 5, 4
  0110924  cror 6, 0, 2
  0110928  bt 6, 0x110934
  011092c  ori 7, 8, 0
  0110930  fmr 5, 4
  0110934  addic 6, 6, 1
  0110938  addic 3, 3, 2
  011093c  cmpw 6, 5
  0110940  bf 1, 0x1108e4
  0110944  ori 3, 7, 0
  0110948  blr

MB_RandomizeVector:   # 0x110950, 0x108 bytes
  0110950  stdu 1, -176(1)
  0110954  mflr 0
  0110958  std 0, 192(1)
  011095c  stfd 29, 152(1)
  0110960  stfd 30, 160(1)
  0110964  stfd 31, 168(1)
  0110968  fmr 31, 1
  011096c  std 31, 144(1)
  0110970  lis 4, 17
  0110974  std 30, 136(1)
  0110978  ori 31, 3, 0
  011097c  addi 30, 4, 2380
  0110980  fneg 30, 31
  0110984  bl 0x5c8318
  0110988  nop
  011098c  srawi 3, 3, 15
  0110990  fsubs 31, 31, 30
  0110994  clrlwi 3, 3, 17
  0110998  extsw 3, 3
  011099c  std 3, 112(1)
  01109a0  lfs 29, 0(30)
  01109a4  lfs 1, 0(31)
  01109a8  lfd 2, 112(1)
  01109ac  fcfid 2, 2
  01109b0  frsp 2, 2
  01109b4  fmuls 2, 2, 31
  01109b8  fmadds 2, 2, 29, 30
  01109bc  fadds 1, 1, 2
  01109c0  stfs 1, 0(31)
  01109c4  bl 0x5c8318
  01109c8  nop
  01109cc  srawi 3, 3, 15
  01109d0  clrlwi 3, 3, 17
  01109d4  extsw 3, 3
  01109d8  std 3, 112(1)
  01109dc  lfs 1, 4(31)
  01109e0  lfd 2, 112(1)
  01109e4  fcfid 2, 2
  01109e8  frsp 2, 2
  01109ec  fmuls 2, 2, 31
  01109f0  fmadds 2, 2, 29, 30
  01109f4  fadds 1, 1, 2
  01109f8  stfs 1, 4(31)
  01109fc  bl 0x5c8318
  0110a00  nop
  0110a04  srawi 3, 3, 15
  0110a08  clrlwi 3, 3, 17
  0110a0c  extsw 3, 3
  0110a10  std 3, 112(1)
  0110a14  lfs 1, 8(31)
  0110a18  lfd 2, 112(1)
  0110a1c  fcfid 2, 2
  0110a20  frsp 2, 2
  0110a24  fmuls 2, 2, 31
  0110a28  fmadds 2, 2, 29, 30
  0110a2c  fadds 1, 1, 2
  0110a30  stfs 1, 8(31)
  0110a34  ld 0, 192(1)
  0110a38  mtlr 0
  0110a3c  lfd 29, 152(1)
  0110a40  lfd 30, 160(1)
  0110a44  lfd 31, 168(1)
  0110a48  ld 30, 136(1)
  0110a4c  ld 31, 144(1)
  0110a50  addi 1, 1, 176
  0110a54  blr

MB_RandomizeVector:   # 0x110a60, 0x108 bytes
  0110a60  stdu 1, -176(1)
  0110a64  mflr 0
  0110a68  std 0, 192(1)
  0110a6c  stfd 29, 152(1)
  0110a70  stfd 30, 160(1)
  0110a74  stfd 31, 168(1)
  0110a78  fmr 31, 1
  0110a7c  std 31, 144(1)
  0110a80  lis 4, 17
  0110a84  std 30, 136(1)
  0110a88  ori 31, 3, 0
  0110a8c  addi 30, 4, 2648
  0110a90  fneg 30, 31
  0110a94  bl 0x5c8318
  0110a98  nop
  0110a9c  srawi 3, 3, 15
  0110aa0  fsubs 31, 31, 30
  0110aa4  clrlwi 3, 3, 17
  0110aa8  extsw 3, 3
  0110aac  std 3, 112(1)
  0110ab0  lfs 29, 0(30)
  0110ab4  lfs 1, 0(31)
  0110ab8  lfd 2, 112(1)
  0110abc  fcfid 2, 2
  0110ac0  frsp 2, 2
  0110ac4  fmuls 2, 2, 31
  0110ac8  fmadds 2, 2, 29, 30
  0110acc  fadds 1, 1, 2
  0110ad0  stfs 1, 0(31)
  0110ad4  bl 0x5c8318
  0110ad8  nop
  0110adc  srawi 3, 3, 15
  0110ae0  clrlwi 3, 3, 17
  0110ae4  extsw 3, 3
  0110ae8  std 3, 112(1)
  0110aec  lfs 1, 4(31)
  0110af0  lfd 2, 112(1)
  0110af4  fcfid 2, 2
  0110af8  frsp 2, 2
  0110afc  fmuls 2, 2, 31
  0110b00  fmadds 2, 2, 29, 30
  0110b04  fadds 1, 1, 2
  0110b08  stfs 1, 4(31)
  0110b0c  bl 0x5c8318
  0110b10  nop
  0110b14  srawi 3, 3, 15
  0110b18  clrlwi 3, 3, 17
  0110b1c  extsw 3, 3
  0110b20  std 3, 112(1)
  0110b24  lfs 1, 8(31)
  0110b28  lfd 2, 112(1)
  0110b2c  fcfid 2, 2
  0110b30  frsp 2, 2
  0110b34  fmuls 2, 2, 31
  0110b38  fmadds 2, 2, 29, 30
  0110b3c  fadds 1, 1, 2
  0110b40  stfs 1, 8(31)
  0110b44  ld 0, 192(1)
  0110b48  mtlr 0
  0110b4c  lfd 29, 152(1)
  0110b50  lfd 30, 160(1)
  0110b54  lfd 31, 168(1)
  0110b58  ld 30, 136(1)
  0110b5c  ld 31, 144(1)
  0110b60  addi 1, 1, 176
  0110b64  blr

MB_IsPntInCuboid:   # 0x110b70, 0xe8 bytes
  0110b70  cmpwi 4, -1
  0110b74  bf 2, 0x110b80
  0110b78  li 3, 0
  0110b7c  b 0x110c54
  0110b80  lis 5, 165
  0110b84  sldi 4, 4, 7
  0110b88  lwz 5, 7128(5)
  0110b8c  lfs 1, 4(3)
  0110b90  addc 4, 5, 4
  0110b94  lfs 2, 0(3)
  0110b98  clrldi 4, 4, 32
  0110b9c  lfs 3, 8(3)
  0110ba0  lis 3, 17
  0110ba4  addi 3, 3, 2920
  0110ba8  lfs 4, 52(4)
  0110bac  lfs 5, 48(4)
  0110bb0  fsubs 1, 1, 4
  0110bb4  lfs 4, 80(4)
  0110bb8  fsubs 2, 2, 5
  0110bbc  lfs 5, 56(4)
  0110bc0  lfs 6, 64(4)
  0110bc4  fsubs 5, 3, 5
  0110bc8  lfs 3, 96(4)
  0110bcc  fmuls 7, 4, 1
  0110bd0  lfs 4, 88(4)
  0110bd4  lfs 8, 84(4)
  0110bd8  fmuls 9, 4, 1
  0110bdc  fmuls 1, 8, 1
  0110be0  lfs 4, 0(3)
  0110be4  lfs 8, 72(4)
  0110be8  fmadds 6, 6, 2, 7
  0110bec  lfs 7, 68(4)
  0110bf0  fmadds 8, 8, 2, 9
  0110bf4  fmadds 2, 7, 2, 1
  0110bf8  lfs 9, 104(4)
  0110bfc  lfs 7, 100(4)
  0110c00  fmadds 1, 3, 5, 6
  0110c04  fmadds 3, 9, 5, 8
  0110c08  fmadds 2, 7, 5, 2
  0110c0c  fcmpu 0, 1, 4
  0110c10  fcmpu 6, 3, 4
  0110c14  bt 0, 0x110c50
  0110c18  lis 3, 17
  0110c1c  addi 3, 3, 2920
  0110c20  lfs 5, 4(3)
  0110c24  fcmpu 0, 1, 5
  0110c28  fcmpu 1, 3, 5
  0110c2c  fcmpu 7, 2, 5
  0110c30  bt 1, 0x110c50
  0110c34  fcmpu 0, 2, 4
  0110c38  bt 0, 0x110c50
  0110c3c  bt 29, 0x110c50
  0110c40  bt 24, 0x110c50
  0110c44  bt 5, 0x110c50
  0110c48  li 3, 1
  0110c4c  b 0x110c54
  0110c50  li 3, 0
  0110c54  blr

MB_IsPntInCylinder:   # 0x110c60, 0xe0 bytes
  0110c60  cmpwi 4, 0
  0110c64  bf 0, 0x110c70
  0110c68  li 3, 0
  0110c6c  b 0x110d3c
  0110c70  lis 5, 165
  0110c74  sldi 4, 4, 7
  0110c78  lwz 5, 7120(5)
  0110c7c  lfs 1, 4(3)
  0110c80  addc 4, 5, 4
  0110c84  lfs 2, 0(3)
  0110c88  clrldi 4, 4, 32
  0110c8c  lfs 3, 8(3)
  0110c90  lfs 4, 52(4)
  0110c94  lfs 5, 48(4)
  0110c98  fsubs 1, 1, 4
  0110c9c  lfs 4, 84(4)
  0110ca0  fsubs 2, 2, 5
  0110ca4  lfs 5, 56(4)
  0110ca8  lfs 6, 80(4)
  0110cac  fsubs 3, 3, 5
  0110cb0  lfs 5, 68(4)
  0110cb4  lfs 7, 64(4)
  0110cb8  lfs 8, 100(4)
  0110cbc  lfs 9, 96(4)
  0110cc0  fmuls 4, 4, 1
  0110cc4  fmuls 6, 6, 1
  0110cc8  lis 3, 17
  0110ccc  addi 3, 3, 3160
  0110cd0  fmadds 4, 5, 2, 4
  0110cd4  fmadds 5, 7, 2, 6
  0110cd8  lfs 6, 88(4)
  0110cdc  fmuls 1, 6, 1
  0110ce0  fmadds 4, 8, 3, 4
  0110ce4  fmadds 5, 9, 3, 5
  0110ce8  fmuls 4, 4, 4
  0110cec  fmadds 4, 5, 5, 4
  0110cf0  lfs 5, 72(4)
  0110cf4  lfs 6, 104(4)
  0110cf8  fmadds 1, 5, 2, 1
  0110cfc  lfs 2, 0(3)
  0110d00  fsqrts 4, 4
  0110d04  fmadds 1, 6, 3, 1
  0110d08  fcmpu 1, 1, 2
  0110d0c  fcmpu 0, 4, 2
  0110d10  cror 2, 1, 2
  0110d14  bt 2, 0x110d38
  0110d18  lis 3, 17
  0110d1c  addi 3, 3, 3160
  0110d20  lfs 2, 4(3)
  0110d24  fcmpu 0, 1, 2
  0110d28  bt 0, 0x110d38
  0110d2c  bt 5, 0x110d38
  0110d30  li 3, 1
  0110d34  b 0x110d3c
  0110d38  li 3, 0
  0110d3c  blr

MB_IsPntInSphere:   # 0x110d48, 0xc8 bytes
  0110d48  cmpwi 4, 0
  0110d4c  bf 0, 0x110d58
  0110d50  li 3, 0
  0110d54  b 0x110e0c
  0110d58  lis 5, 165
  0110d5c  sldi 4, 4, 7
  0110d60  lwz 5, 7112(5)
  0110d64  lfs 1, 4(3)
  0110d68  addc 4, 5, 4
  0110d6c  lfs 2, 0(3)
  0110d70  clrldi 4, 4, 32
  0110d74  lfs 3, 8(3)
  0110d78  lfs 4, 52(4)
  0110d7c  lfs 5, 48(4)
  0110d80  fsubs 1, 1, 4
  0110d84  lfs 4, 84(4)
  0110d88  fsubs 2, 2, 5
  0110d8c  lfs 5, 56(4)
  0110d90  lfs 6, 80(4)
  0110d94  fsubs 3, 3, 5
  0110d98  lfs 5, 68(4)
  0110d9c  lfs 7, 64(4)
  0110da0  lfs 8, 100(4)
  0110da4  lfs 9, 88(4)
  0110da8  lfs 10, 96(4)
  0110dac  fmuls 4, 4, 1
  0110db0  fmuls 6, 6, 1
  0110db4  fmuls 1, 9, 1
  0110db8  lfs 9, 72(4)
  0110dbc  lfs 11, 104(4)
  0110dc0  lis 3, 17
  0110dc4  addi 3, 3, 3392
  0110dc8  fmadds 4, 5, 2, 4
  0110dcc  fmadds 5, 7, 2, 6
  0110dd0  fmadds 1, 9, 2, 1
  0110dd4  fmadds 2, 8, 3, 4
  0110dd8  fmadds 4, 10, 3, 5
  0110ddc  fmadds 1, 11, 3, 1
  0110de0  fmuls 2, 2, 2
  0110de4  fmadds 2, 4, 4, 2
  0110de8  fmadds 1, 1, 1, 2
  0110dec  lfs 2, 0(3)
  0110df0  fsqrts 1, 1
  0110df4  fcmpu 0, 1, 2
  0110df8  cror 6, 1, 2
  0110dfc  bt 6, 0x110e08
  0110e00  li 3, 1
  0110e04  b 0x110e0c
  0110e08  li 3, 0
  0110e0c  blr

MB_MtxFromDir:   # 0x110e18, 0x50c bytes
  0110e18  stdu 1, -560(1)
  0110e1c  mflr 0
  0110e20  std 0, 576(1)
  0110e24  stfd 25, 504(1)
  0110e28  stfd 26, 512(1)
  0110e2c  stfd 27, 520(1)
  0110e30  stfd 28, 528(1)
  0110e34  stfd 29, 536(1)
  0110e38  stfd 30, 544(1)
  0110e3c  stfd 31, 552(1)
  0110e40  std 28, 472(1)
  0110e44  std 30, 488(1)
  0110e48  lwz 28, 0(4)
  0110e4c  lwz 30, 4(4)
  0110e50  lis 5, 17
  0110e54  std 31, 496(1)
  0110e58  lfs 29, 0(4)
  0110e5c  ori 31, 3, 0
  0110e60  lfs 28, 4(4)
  0110e64  fmr 31, 1
  0110e68  std 29, 480(1)
  0110e6c  lfs 27, 8(4)
  0110e70  addi 29, 5, 3600
  0110e74  addic 3, 1, 128
  0110e78  std 27, 464(1)
  0110e7c  lfs 26, 12(4)
  0110e80  bl 0x500af8
  0110e84  nop
  0110e88  fabs 3, 29
  0110e8c  fabs 5, 28
  0110e90  rlwinm 3, 30, 3, 29, 29
  0110e94  lis 30, 115
  0110e98  addic 30, 30, 22784
  0110e9c  fsubs 1, 3, 5
  0110ea0  stfs 1, 396(1)
  0110ea4  lfs 25, 0(29)
  0110ea8  lfs 30, 4(29)
  0110eac  lwz 4, 396(1)
  0110eb0  lfs 1, 396(1)
  0110eb4  rlwimi 3, 4, 2, 30, 30
  0110eb8  fsub 4, 1, 25
  0110ebc  ori 4, 30, 0
  0110ec0  fsub 6, 1, 25
  0110ec4  rlwimi 3, 28, 4, 28, 28
  0110ec8  rlwimi 4, 3, 2, 26, 28
  0110ecc  slwi 3, 3, 2
  0110ed0  clrldi 4, 4, 32
  0110ed4  lfsx 1, 30, 3
  0110ed8  fsel 4, 4, 3, 5
  0110edc  lfs 2, 4(4)
  0110ee0  fsel 3, 6, 5, 3
  0110ee4  fcmpu 0, 4, 25
  0110ee8  bt 1, 0x110ef4
  0110eec  fmr 1, 25
  0110ef0  b 0x11100c
  0110ef4  fsubs 5, 3, 4
  0110ef8  fadds 3, 3, 4
  0110efc  addic 3, 1, 16
  0110f00  li 7, 2
  0110f04  addic 5, 3, 432
  0110f08  addic 4, 3, 416
  0110f0c  mtctr 7
  0110f10  fdivs 3, 5, 3
  0110f14  fmuls 4, 3, 3
  0110f18  stfs 3, 444(1)
  0110f1c  stfs 3, 436(1)
  0110f20  stfs 3, 440(1)
  0110f24  stfs 3, 432(1)
  0110f28  lfs 6, 444(1)
  0110f2c  lfs 7, 436(1)
  0110f30  lfs 8, 440(1)
  0110f34  fmuls 5, 4, 4
  0110f38  fmuls 7, 7, 4
  0110f3c  fmuls 6, 6, 5
  0110f40  fmuls 3, 5, 5
  0110f44  fmuls 5, 8, 5
  0110f48  stfs 7, 436(1)
  0110f4c  fmuls 4, 6, 4
  0110f50  stfs 5, 440(1)
  0110f54  stfs 4, 444(1)
  0110f58  lfs 4, 416(3)
  0110f5c  fmuls 4, 4, 3
  0110f60  stfs 4, 432(3)
  0110f64  lfs 4, 4(4)
  0110f68  addic 4, 4, 8
  0110f6c  fmuls 4, 4, 3
  0110f70  addic 3, 3, 8
  0110f74  stfs 4, 4(5)
  0110f78  addic 5, 5, 8
  0110f7c  bdnz 0x110f58
  0110f80  li 5, 4
  0110f84  ori 3, 1, 0
  0110f88  mtctr 5
  0110f8c  lis 4, 115
  0110f90  addic 5, 3, 432
  0110f94  addic 4, 4, 22752
  0110f98  ori 6, 5, 0
  0110f9c  lfs 3, 432(3)
  0110fa0  lfs 4, 0(4)
  0110fa4  fmuls 3, 3, 4
  0110fa8  lfs 4, 4(4)
  0110fac  addic 4, 4, 8
  0110fb0  stfs 3, 432(3)
  0110fb4  lfs 3, 4(5)
  0110fb8  addic 3, 3, 8
  0110fbc  fmuls 3, 3, 4
  0110fc0  stfs 3, 4(5)
  0110fc4  addic 5, 5, 8
  0110fc8  bdnz 0x110f9c
  0110fcc  ori 3, 1, 0
  0110fd0  fmr 3, 25
  0110fd4  mtctr 7
  0110fd8  lfs 4, 432(3)
  0110fdc  fadds 3, 3, 4
  0110fe0  lfs 4, 4(6)
  0110fe4  addic 3, 3, 16
  0110fe8  lfs 5, 8(6)
  0110fec  lfs 6, 12(6)
  0110ff0  addic 6, 6, 16
  0110ff4  fadds 3, 3, 4
  0110ff8  fadds 3, 3, 5
  0110ffc  fadds 3, 3, 6
  0111000  bdnz 0x110fd8
  0111004  fadds 3, 3, 30
  0111008  fmadds 1, 3, 1, 2
  011100c  fneg 1, 1
  0111010  li 5, 0
  0111014  addic 3, 1, 192
  0111018  addic 4, 1, 112
  011101c  stw 5, 112(1)
  0111020  stw 5, 116(1)
  0111024  stfs 1, 120(1)
  0111028  bl 0x500ca4
  011102c  nop
  0111030  lfs 1, 208(1)
  0111034  lfs 2, 216(1)
  0111038  fmuls 1, 1, 28
  011103c  lfs 3, 192(1)
  0111040  fmuls 2, 2, 28
  0111044  lfs 4, 200(1)
  0111048  lfs 5, 224(1)
  011104c  lfs 6, 232(1)
  0111050  lfs 7, 240(1)
  0111054  lfs 8, 248(1)
  0111058  fmadds 1, 3, 29, 1
  011105c  fmadds 2, 4, 29, 2
  0111060  fmadds 1, 5, 27, 1
  0111064  fmadds 2, 6, 27, 2
  0111068  fmadds 1, 7, 26, 1
  011106c  fmadds 2, 8, 26, 2
  0111070  fabs 4, 1
  0111074  fabs 3, 2
  0111078  stfs 2, 384(1)
  011107c  stfs 1, 388(1)
  0111080  fsubs 1, 3, 4
  0111084  stfs 1, 392(1)
  0111088  lwz 3, 384(1)
  011108c  lfs 1, 384(1)
  0111090  lwz 4, 388(1)
  0111094  lfs 2, 388(1)
  0111098  lwz 5, 392(1)
  011109c  rlwinm 4, 4, 3, 29, 29
  01110a0  fabs 5, 2
  01110a4  lfs 2, 392(1)
  01110a8  fabs 1, 1
  01110ac  rlwimi 4, 5, 2, 30, 30
  01110b0  fsub 6, 2, 25
  01110b4  fsub 7, 2, 25
  01110b8  rlwimi 4, 3, 4, 28, 28
  01110bc  ori 3, 30, 0
  01110c0  rlwimi 3, 4, 2, 26, 28
  01110c4  slwi 4, 4, 2
  01110c8  clrldi 3, 3, 32
  01110cc  fsel 4, 6, 1, 4
  01110d0  lfsx 1, 30, 4
  01110d4  fsel 3, 7, 5, 3
  01110d8  lfs 2, 4(3)
  01110dc  fcmpu 0, 4, 25
  01110e0  bt 1, 0x1110e8
  01110e4  b 0x1111fc
  01110e8  fsubs 5, 3, 4
  01110ec  fadds 3, 3, 4
  01110f0  addic 3, 1, 16
  01110f4  li 6, 2
  01110f8  addic 4, 3, 384
  01110fc  addic 5, 3, 400
  0111100  mtctr 6
  0111104  fdivs 3, 5, 3
  0111108  fmuls 4, 3, 3
  011110c  stfs 3, 412(1)
  0111110  stfs 3, 404(1)
  0111114  stfs 3, 408(1)
  0111118  stfs 3, 400(1)
  011111c  lfs 6, 412(1)
  0111120  lfs 7, 404(1)
  0111124  lfs 8, 408(1)
  0111128  fmuls 5, 4, 4
  011112c  fmuls 7, 7, 4
  0111130  fmuls 6, 6, 5
  0111134  fmuls 3, 5, 5
  0111138  fmuls 5, 8, 5
  011113c  stfs 7, 404(1)
  0111140  fmuls 4, 6, 4
  0111144  stfs 5, 408(1)
  0111148  stfs 4, 412(1)
  011114c  lfs 4, 384(3)
  0111150  fmuls 4, 4, 3
  0111154  stfs 4, 400(3)
  0111158  lfs 4, 4(4)
  011115c  addic 3, 3, 8
  0111160  addic 4, 4, 8
  0111164  fmuls 4, 4, 3
  0111168  stfs 4, 4(5)
  011116c  addic 5, 5, 8
  0111170  bdnz 0x11114c
  0111174  li 5, 4
  0111178  ori 3, 1, 0
  011117c  mtctr 5
  0111180  lis 4, 115
  0111184  addic 5, 3, 400
  0111188  addic 4, 4, 22752
  011118c  ori 7, 5, 0
  0111190  lfs 3, 400(3)
  0111194  lfs 4, 0(4)
  0111198  fmuls 3, 3, 4
  011119c  lfs 4, 4(4)
  01111a0  addic 4, 4, 8
  01111a4  stfs 3, 400(3)
  01111a8  lfs 3, 4(5)
  01111ac  addic 3, 3, 8
  01111b0  fmuls 3, 3, 4
  01111b4  stfs 3, 4(5)
  01111b8  addic 5, 5, 8
  01111bc  bdnz 0x111190
  01111c0  ori 3, 1, 0
  01111c4  mtctr 6
  01111c8  lfs 3, 400(3)
  01111cc  lfs 4, 4(7)
  01111d0  fadds 3, 25, 3
  01111d4  lfs 5, 8(7)
  01111d8  lfs 25, 12(7)
  01111dc  addic 3, 3, 16
  01111e0  addic 7, 7, 16
  01111e4  fadds 3, 3, 4
  01111e8  fadds 3, 3, 5
  01111ec  fadds 25, 3, 25
  01111f0  bdnz 0x1111c8
  01111f4  fadds 25, 25, 30
  01111f8  fmadds 25, 25, 1, 2
  01111fc  fneg 1, 25
  0111200  li 30, 0
  0111204  addic 29, 1, 256
  0111208  addic 28, 1, 112
  011120c  ori 3, 29, 0
  0111210  stw 30, 112(1)
  0111214  ori 4, 28, 0
  0111218  stw 30, 120(1)
  011121c  stfs 1, 116(1)
  0111220  bl 0x500e08
  0111224  nop
  0111228  stw 30, 112(1)
  011122c  addic 27, 1, 320
  0111230  stw 30, 116(1)
  0111234  ori 4, 28, 0
  0111238  stfs 31, 120(1)
  011123c  ori 3, 27, 0
  0111240  bl 0x500e08
  0111244  nop
  0111248  addic 30, 1, 128
  011124c  addic 28, 1, 192
  0111250  ori 3, 30, 0
  0111254  ori 4, 28, 0
  0111258  ori 5, 30, 0
  011125c  bl 0x50162c
  0111260  nop
  0111264  ori 3, 30, 0
  0111268  ori 4, 29, 0
  011126c  ori 5, 30, 0
  0111270  bl 0x50162c
  0111274  nop
  0111278  ori 3, 30, 0
  011127c  ori 4, 27, 0
  0111280  ori 5, 30, 0
  0111284  bl 0x50162c
  0111288  nop
  011128c  ori 3, 29, 0
  0111290  ori 4, 29, 0
  0111294  bl 0x5010c0
  0111298  nop
  011129c  ori 3, 30, 0
  01112a0  ori 4, 29, 0
  01112a4  ori 5, 30, 0
  01112a8  bl 0x50162c
  01112ac  nop
  01112b0  ori 3, 28, 0
  01112b4  ori 4, 28, 0
  01112b8  bl 0x5010c0
  01112bc  nop
  01112c0  ori 3, 30, 0
  01112c4  ori 4, 28, 0
  01112c8  ori 5, 30, 0
  01112cc  bl 0x50162c
  01112d0  nop
  01112d4  ori 3, 31, 0
  01112d8  ori 4, 30, 0
  01112dc  bl 0x500fa8
  01112e0  nop
  01112e4  ld 0, 576(1)
  01112e8  mtlr 0
  01112ec  lfd 25, 504(1)
  01112f0  lfd 26, 512(1)
  01112f4  lfd 27, 520(1)
  01112f8  lfd 28, 528(1)
  01112fc  lfd 29, 536(1)
  0111300  lfd 30, 544(1)
  0111304  lfd 31, 552(1)
  0111308  ld 27, 464(1)
  011130c  ld 28, 472(1)
  0111310  ld 29, 480(1)
  0111314  ld 30, 488(1)
  0111318  ld 31, 496(1)
  011131c  addi 1, 1, 560
  0111320  blr

MB_QuatRotate:   # 0x111324, 0xac bytes
  0111324  stdu 1, -176(1)
  0111328  mflr 0
  011132c  std 0, 192(1)
  0111330  lfs 1, 0(5)
  0111334  fneg 1, 1
  0111338  std 30, 160(1)
  011133c  li 6, 0
  0111340  addic 30, 1, 144
  0111344  std 31, 168(1)
  0111348  addic 7, 1, 128
  011134c  ori 31, 3, 0
  0111350  ori 3, 30, 0
  0111354  stfs 1, 112(1)
  0111358  lfs 1, 4(5)
  011135c  fneg 1, 1
  0111360  stfs 1, 116(1)
  0111364  lfs 1, 8(5)
  0111368  fneg 1, 1
  011136c  stfs 1, 120(1)
  0111370  lfs 1, 12(5)
  0111374  stfs 1, 124(1)
  0111378  lfs 1, 0(4)
  011137c  stfs 1, 128(1)
  0111380  lfs 1, 4(4)
  0111384  stfs 1, 132(1)
  0111388  lfs 1, 8(4)
  011138c  ori 4, 5, 0
  0111390  stw 6, 140(1)
  0111394  ori 5, 7, 0
  0111398  stfs 1, 136(1)
  011139c  bl 0x5017c4
  01113a0  nop
  01113a4  addic 5, 1, 112
  01113a8  ori 3, 31, 0
  01113ac  ori 4, 30, 0
  01113b0  bl 0x5017c4
  01113b4  nop
  01113b8  ld 0, 192(1)
  01113bc  mtlr 0
  01113c0  ld 30, 160(1)
  01113c4  ld 31, 168(1)
  01113c8  addi 1, 1, 176
  01113cc  blr

MB_RotateQuatAxisAngle:   # 0x1113e0, 0x1b4 bytes
  01113e0  stdu 1, -208(1)
  01113e4  mflr 0
  01113e8  std 0, 224(1)
  01113ec  fabs 2, 1
  01113f0  std 30, 192(1)
  01113f4  lis 6, 17
  01113f8  ori 30, 3, 0
  01113fc  std 31, 200(1)
  0111400  addi 6, 6, 5072
  0111404  ori 31, 4, 0
  0111408  lfs 3, 0(6)
  011140c  fcmpu 0, 2, 3
  0111410  std 29, 184(1)
  0111414  std 28, 176(1)
  0111418  cror 6, 1, 2
  011141c  bt 6, 0x111444
  0111420  lfs 1, 0(31)
  0111424  stfs 1, 0(30)
  0111428  lfs 1, 4(31)
  011142c  stfs 1, 4(30)
  0111430  lfs 1, 8(31)
  0111434  stfs 1, 8(30)
  0111438  lfs 1, 12(31)
  011143c  stfs 1, 12(30)
  0111440  b 0x111574
  0111444  lfs 3, 4(5)
  0111448  lfs 4, 0(5)
  011144c  fmuls 2, 3, 3
  0111450  lfs 5, 8(5)
  0111454  lis 3, 17
  0111458  addi 3, 3, 5072
  011145c  fmadds 6, 4, 4, 2
  0111460  lfs 2, 4(3)
  0111464  fmadds 6, 5, 5, 6
  0111468  fsqrts 7, 6
  011146c  fcmpu 0, 7, 2
  0111470  bf 2, 0x111484
  0111474  fmr 4, 2
  0111478  lfs 5, 12(5)
  011147c  fmr 3, 4
  0111480  b 0x1114dc
  0111484  frsqrte 2, 6
  0111488  lis 3, 17
  011148c  addi 3, 3, 5072
  0111490  lfs 7, 8(3)
  0111494  lfs 8, 12(3)
  0111498  lfs 11, 12(5)
  011149c  fmuls 9, 6, 2
  01114a0  fmuls 10, 7, 2
  01114a4  fnmsubs 9, 9, 2, 8
  01114a8  fmadds 2, 9, 10, 2
  01114ac  fmuls 9, 6, 2
  01114b0  fmuls 10, 7, 2
  01114b4  fnmsubs 9, 9, 2, 8
  01114b8  fmadds 2, 9, 10, 2
  01114bc  fmuls 6, 6, 2
  01114c0  fmuls 7, 7, 2
  01114c4  fnmsubs 6, 6, 2, 8
  01114c8  fmadds 6, 6, 7, 2
  01114cc  fmuls 2, 4, 6
  01114d0  fmuls 4, 5, 6
  01114d4  fmuls 3, 3, 6
  01114d8  fmr 5, 11
  01114dc  stfs 2, 112(1)
  01114e0  addic 29, 1, 112
  01114e4  stfs 3, 116(1)
  01114e8  stfs 4, 120(1)
  01114ec  stfs 5, 124(1)
  01114f0  ori 3, 29, 0
  01114f4  ori 4, 29, 0
  01114f8  bl 0x10c038
  01114fc  lfs 1, 112(1)
  0111500  lfs 2, 116(1)
  0111504  li 6, 0
  0111508  fneg 1, 1
  011150c  lfs 3, 120(1)
  0111510  fneg 2, 2
  0111514  lfs 4, 124(1)
  0111518  fneg 3, 3
  011151c  addic 28, 1, 160
  0111520  stfs 4, 140(1)
  0111524  addic 5, 1, 144
  0111528  ori 3, 28, 0
  011152c  ori 4, 29, 0
  0111530  stfs 1, 128(1)
  0111534  stfs 2, 132(1)
  0111538  stfs 3, 136(1)
  011153c  lfs 1, 0(31)
  0111540  stfs 1, 144(1)
  0111544  lfs 1, 4(31)
  0111548  stfs 1, 148(1)
  011154c  lfs 1, 8(31)
  0111550  stw 6, 156(1)
  0111554  stfs 1, 152(1)
  0111558  bl 0x5017c4
  011155c  nop
  0111560  addic 5, 1, 128
  0111564  ori 3, 30, 0
  0111568  ori 4, 28, 0
  011156c  bl 0x5017c4
  0111570  nop
  0111574  ld 0, 224(1)
  0111578  mtlr 0
  011157c  ld 28, 176(1)
  0111580  ld 29, 184(1)
  0111584  ld 30, 192(1)
  0111588  ld 31, 200(1)
  011158c  addi 1, 1, 208
  0111590  blr

MB_QuatBetweenVecs:   # 0x1115c8, 0x30c bytes
  01115c8  stdu 1, -240(1)
  01115cc  mflr 0
  01115d0  std 0, 256(1)
  01115d4  stfd 27, 200(1)
  01115d8  stfd 28, 208(1)
  01115dc  stfd 29, 216(1)
  01115e0  stfd 30, 224(1)
  01115e4  stfd 31, 232(1)
  01115e8  lfs 10, 8(5)
  01115ec  lfs 6, 0(4)
  01115f0  lfs 9, 8(4)
  01115f4  fmuls 13, 6, 10
  01115f8  lfs 8, 4(5)
  01115fc  lfs 7, 0(5)
  0111600  fmuls 0, 9, 8
  0111604  lfs 11, 4(4)
  0111608  fmuls 12, 11, 7
  011160c  lis 5, 17
  0111610  fmsubs 13, 9, 7, 13
  0111614  fmsubs 0, 11, 10, 0
  0111618  addi 5, 5, 5524
  011161c  fmsubs 12, 6, 8, 12
  0111620  cmpwi 1, 7, 0
  0111624  lfs 5, 0(5)
  0111628  fmuls 2, 13, 13
  011162c  fmr 4, 5
  0111630  std 31, 192(1)
  0111634  li 5, 0
  0111638  ori 31, 3, 0
  011163c  stw 5, 124(1)
  0111640  fmadds 31, 0, 0, 2
  0111644  fmr 3, 4
  0111648  fmadds 31, 12, 12, 31
  011164c  fmr 2, 3
  0111650  fsqrts 30, 31
  0111654  std 30, 184(1)
  0111658  fcmpu 0, 30, 2
  011165c  bt 2, 0x1116b0
  0111660  frsqrte 2, 31
  0111664  lis 3, 17
  0111668  addi 3, 3, 5524
  011166c  lfs 3, 4(3)
  0111670  lfs 4, 8(3)
  0111674  fmuls 30, 31, 2
  0111678  fmuls 29, 3, 2
  011167c  fnmsubs 30, 30, 2, 4
  0111680  fmadds 2, 30, 29, 2
  0111684  fmuls 30, 31, 2
  0111688  fmuls 29, 3, 2
  011168c  fnmsubs 30, 30, 2, 4
  0111690  fmadds 2, 30, 29, 2
  0111694  fmuls 31, 31, 2
  0111698  fmuls 3, 3, 2
  011169c  fnmsubs 4, 31, 2, 4
  01116a0  fmadds 4, 4, 3, 2
  01116a4  fmuls 2, 0, 4
  01116a8  fmuls 3, 13, 4
  01116ac  fmuls 4, 12, 4
  01116b0  fmuls 12, 11, 8
  01116b4  stfs 2, 112(1)
  01116b8  stfs 3, 116(1)
  01116bc  stfs 4, 120(1)
  01116c0  fmadds 12, 6, 7, 12
  01116c4  fmadds 12, 9, 10, 12
  01116c8  bf 6, 0x11171c
  01116cc  fmuls 13, 11, 11
  01116d0  fmuls 8, 8, 8
  01116d4  fmadds 13, 6, 6, 13
  01116d8  fmadds 7, 7, 7, 8
  01116dc  fmadds 8, 9, 9, 13
  01116e0  fmadds 7, 10, 10, 7
  01116e4  fsqrts 10, 8
  01116e8  fsqrts 7, 7
  01116ec  fmuls 10, 10, 7
  01116f0  fcmpu 0, 10, 5
  01116f4  bf 2, 0x111718
  01116f8  stfs 6, 0(31)
  01116fc  lfs 1, 4(4)
  0111700  stfs 1, 4(31)
  0111704  lfs 1, 8(4)
  0111708  stfs 1, 8(31)
  011170c  lfs 1, 12(4)
  0111710  stfs 1, 12(31)
  0111714  b 0x1118a8
  0111718  fdivs 12, 12, 10
  011171c  fabs 7, 12
  0111720  fsub 8, 12, 5
  0111724  lis 3, 17
  0111728  addi 3, 3, 5524
  011172c  lis 4, 115
  0111730  lfs 10, 8(3)
  0111734  addic 5, 4, 22720
  0111738  fsel 7, 8, 12, 7
  011173c  lfs 31, 22720(4)
  0111740  lfs 30, 4(5)
  0111744  fsubs 8, 10, 7
  0111748  fmuls 13, 7, 7
  011174c  addic 30, 1, 160
  0111750  fsub 0, 8, 5
  0111754  fmuls 29, 13, 7
  0111758  fmadds 7, 7, 30, 31
  011175c  fsel 8, 0, 8, 5
  0111760  lfs 0, 8(5)
  0111764  fsub 5, 12, 5
  0111768  lfs 12, 12(3)
  011176c  fmadds 7, 13, 0, 7
  0111770  lfs 31, 12(5)
  0111774  lfs 13, 16(3)
  0111778  lfs 0, 4(3)
  011177c  fsqrts 8, 8
  0111780  addic 4, 1, 112
  0111784  addic 5, 1, 144
  0111788  fmadds 7, 29, 31, 7
  011178c  fsel 5, 5, 10, 12
  0111790  lfs 10, 20(3)
  0111794  lfs 12, 24(3)
  0111798  lfs 31, 44(3)
  011179c  lfs 30, 28(3)
  01117a0  lfs 29, 32(3)
  01117a4  lfs 28, 36(3)
  01117a8  lfs 27, 40(3)
  01117ac  stfs 6, 144(1)
  01117b0  li 3, 0
  01117b4  stfs 11, 148(1)
  01117b8  stfs 9, 152(1)
  01117bc  stw 3, 156(1)
  01117c0  ori 3, 30, 0
  01117c4  fnmsubs 7, 7, 8, 13
  01117c8  fnmsubs 5, 7, 5, 13
  01117cc  fmuls 5, 5, 0
  01117d0  fmuls 1, 5, 1
  01117d4  fsubs 5, 10, 1
  01117d8  fadds 8, 1, 31
  01117dc  fsubs 7, 12, 1
  01117e0  fsub 13, 1, 5
  01117e4  fsubs 10, 10, 8
  01117e8  fsubs 12, 12, 8
  01117ec  fsel 1, 13, 5, 1
  01117f0  fsub 5, 8, 10
  01117f4  fsub 13, 7, 1
  01117f8  fsel 5, 5, 10, 8
  01117fc  fsel 1, 13, 7, 1
  0111800  fsub 7, 12, 5
  0111804  fmuls 8, 1, 1
  0111808  fsel 5, 7, 12, 5
  011180c  fmr 7, 27
  0111810  fmuls 10, 8, 1
  0111814  fmuls 12, 5, 5
  0111818  fmuls 13, 8, 10
  011181c  fmadds 1, 10, 30, 1
  0111820  fmuls 10, 12, 5
  0111824  fmuls 0, 8, 13
  0111828  fmadds 1, 13, 29, 1
  011182c  fmuls 13, 12, 10
  0111830  fmadds 5, 10, 30, 5
  0111834  fmuls 8, 8, 0
  0111838  fmadds 1, 0, 28, 1
  011183c  fmuls 10, 12, 13
  0111840  fmadds 5, 13, 29, 5
  0111844  fmadds 1, 8, 7, 1
  0111848  fmuls 8, 12, 10
  011184c  fmadds 5, 10, 28, 5
  0111850  fmuls 2, 2, 1
  0111854  fmuls 3, 3, 1
  0111858  fmuls 1, 4, 1
  011185c  fmadds 4, 8, 7, 5
  0111860  fneg 5, 2
  0111864  fneg 6, 3
  0111868  fneg 7, 1
  011186c  stfs 2, 112(1)
  0111870  stfs 3, 116(1)
  0111874  stfs 4, 124(1)
  0111878  stfs 4, 140(1)
  011187c  stfs 1, 120(1)
  0111880  stfs 5, 128(1)
  0111884  stfs 6, 132(1)
  0111888  stfs 7, 136(1)
  011188c  bl 0x5017c4
  0111890  nop
  0111894  addic 5, 1, 128
  0111898  ori 3, 31, 0
  011189c  ori 4, 30, 0
  01118a0  bl 0x5017c4
  01118a4  nop
  01118a8  ld 0, 256(1)
  01118ac  mtlr 0
  01118b0  lfd 27, 200(1)
  01118b4  lfd 28, 208(1)
  01118b8  lfd 29, 216(1)
  01118bc  lfd 30, 224(1)
  01118c0  lfd 31, 232(1)
  01118c4  ld 30, 184(1)
  01118c8  ld 31, 192(1)
  01118cc  addi 1, 1, 240
  01118d0  blr

MB_getTarget:   # 0x1118d8, 0x2c4 bytes
  01118d8  stdu 1, -80(1)
  01118dc  lis 9, 151
  01118e0  li 7, 0
  01118e4  addic 9, 9, -25376
  01118e8  ori 6, 7, 0
  01118ec  lwz 8, 8320(9)
  01118f0  lwz 4, 8332(9)
  01118f4  std 31, 72(1)
  01118f8  std 30, 64(1)
  01118fc  std 29, 56(1)
  0111900  cmpwi 4, 24
  0111904  bt 2, 0x111914
  0111908  lwz 4, 8324(9)
  011190c  cmpwi 4, 114
  0111910  bf 2, 0x11191c
  0111914  ori 8, 7, 0
  0111918  li 7, 2
  011191c  lis 10, 165
  0111920  li 29, 1
  0111924  ori 4, 29, 0
  0111928  lhz 30, 8040(10)
  011192c  extsh 30, 30
  0111930  cmpwi 30, 1
  0111934  bt 0, 0x1119fc
  0111938  lis 10, 165
  011193c  lis 12, 164
  0111940  addic 10, 10, 8040
  0111944  addic 10, 10, 2
  0111948  lhz 11, 0(10)
  011194c  lwz 31, -28512(12)
  0111950  extsh 11, 11
  0111954  sldi 11, 11, 8
  0111958  addc 31, 31, 11
  011195c  clrldi 31, 31, 32
  0111960  cmpwi 31, 0
  0111964  bt 2, 0x1119ec
  0111968  lhz 11, 166(31)
  011196c  cmpwi 11, 203
  0111970  bf 2, 0x111988
  0111974  lbz 11, 32(31)
  0111978  cmpwi 11, 254
  011197c  cmpwi 1, 11, 253
  0111980  bt 2, 0x111988
  0111984  bf 6, 0x1119a8
  0111988  lhz 11, 166(31)
  011198c  cmpwi 11, 1900
  0111990  bf 2, 0x1119ec
  0111994  lbz 11, 32(31)
  0111998  cmpwi 11, 254
  011199c  cmpwi 1, 11, 253
  01119a0  bt 2, 0x1119ec
  01119a4  bt 6, 0x1119ec
  01119a8  cmpwi 11, 3
  01119ac  bf 2, 0x1119ec
  01119b0  lfs 2, 20(3)
  01119b4  lfs 3, 20(31)
  01119b8  lfs 4, 16(3)
  01119bc  fsubs 2, 2, 3
  01119c0  lfs 3, 16(31)
  01119c4  fsubs 3, 4, 3
  01119c8  fmuls 2, 2, 2
  01119cc  fmadds 2, 3, 3, 2
  01119d0  fsqrts 2, 2
  01119d4  fcmpu 0, 1, 2
  01119d8  cror 6, 0, 2
  01119dc  bt 6, 0x1119ec
  01119e0  fmr 1, 2
  01119e4  ori 8, 31, 0
  01119e8  ori 7, 4, 0
  01119ec  addic 29, 29, 1
  01119f0  addic 10, 10, 2
  01119f4  cmpw 29, 30
  01119f8  bf 1, 0x111948
  01119fc  lis 10, 268
  0111a00  ori 12, 6, 0
  0111a04  addic 10, 10, -19308
  0111a08  lwz 11, 0(10)
  0111a0c  cmpwi 11, 0
  0111a10  bt 2, 0x111a7c
  0111a14  lhz 31, 166(11)
  0111a18  cmpwi 31, 270
  0111a1c  bf 2, 0x111a7c
  0111a20  lbz 31, 32(11)
  0111a24  cmpwi 1, 31, 253
  0111a28  cmpwi 31, 254
  0111a2c  cror 2, 2, 6
  0111a30  bt 2, 0x111a7c
  0111a34  lbz 31, 188(11)
  0111a38  cmpwi 31, 0
  0111a3c  bf 1, 0x111a7c
  0111a40  lfs 2, 20(3)
  0111a44  lfs 3, 20(11)
  0111a48  lfs 4, 16(3)
  0111a4c  fsubs 2, 2, 3
  0111a50  lfs 3, 16(11)
  0111a54  fsubs 3, 4, 3
  0111a58  fmuls 2, 2, 2
  0111a5c  fmadds 2, 3, 3, 2
  0111a60  fsqrts 2, 2
  0111a64  fcmpu 0, 1, 2
  0111a68  cror 6, 0, 2
  0111a6c  bt 6, 0x111a7c
  0111a70  fmr 1, 2
  0111a74  ori 8, 11, 0
  0111a78  ori 7, 4, 0
  0111a7c  addic 12, 12, 1
  0111a80  addic 10, 10, 4
  0111a84  cmpwi 12, 20
  0111a88  bt 0, 0x111a08
  0111a8c  cmpwi 8, 0
  0111a90  bt 2, 0x111b5c
  0111a94  stw 8, 64(5)
  0111a98  lfs 4, 16(8)
  0111a9c  stfs 4, 0(5)
  0111aa0  lfs 3, 20(8)
  0111aa4  stfs 3, 4(5)
  0111aa8  lfs 2, 24(8)
  0111aac  stfs 2, 8(5)
  0111ab0  lfs 1, 28(8)
  0111ab4  stfs 1, 12(5)
  0111ab8  lfs 5, 64(8)
  0111abc  stfs 5, 16(5)
  0111ac0  lfs 5, 68(8)
  0111ac4  lwz 3, 8320(9)
  0111ac8  stfs 5, 20(5)
  0111acc  lfs 5, 72(8)
  0111ad0  cmpw 8, 3
  0111ad4  stfs 5, 24(5)
  0111ad8  lfs 5, 76(8)
  0111adc  stfs 5, 28(5)
  0111ae0  bf 2, 0x111b28
  0111ae4  lfs 1, 192(9)
  0111ae8  stfs 1, 32(5)
  0111aec  lfs 1, 196(9)
  0111af0  stfs 1, 36(5)
  0111af4  lfs 1, 200(9)
  0111af8  stfs 1, 40(5)
  0111afc  lfs 1, 204(9)
  0111b00  stfs 1, 44(5)
  0111b04  lfs 1, 208(9)
  0111b08  stfs 1, 48(5)
  0111b0c  lfs 1, 212(9)
  0111b10  stfs 1, 52(5)
  0111b14  lfs 1, 216(9)
  0111b18  stfs 1, 56(5)
  0111b1c  lfs 1, 220(9)
  0111b20  stfs 1, 60(5)
  0111b24  b 0x111b80
  0111b28  lis 3, 17
  0111b2c  stfs 4, 48(5)
  0111b30  stfs 3, 52(5)
  0111b34  addi 3, 3, 6356
  0111b38  stfs 1, 60(5)
  0111b3c  lfs 5, 0(3)
  0111b40  stfs 4, 32(5)
  0111b44  stfs 3, 36(5)
  0111b48  stfs 1, 44(5)
  0111b4c  fadds 1, 2, 5
  0111b50  stfs 1, 56(5)
  0111b54  stfs 1, 40(5)
  0111b58  b 0x111b80
  0111b5c  vspltisw 2, 0
  0111b60  li 3, 16
  0111b64  stw 6, 64(5)
  0111b68  li 4, 48
  0111b6c  li 8, 32
  0111b70  stvx 2, 0, 5
  0111b74  stvx 2, 3, 5
  0111b78  stvx 2, 4, 5
  0111b7c  stvx 2, 8, 5
  0111b80  ori 3, 7, 0
  0111b84  stw 7, 68(5)
  0111b88  ld 29, 56(1)
  0111b8c  ld 30, 64(1)
  0111b90  ld 31, 72(1)
  0111b94  addi 1, 1, 80
  0111b98  blr

MB_getTargetInArea:   # 0x111ba0, 0x510 bytes
  0111ba0  stdu 1, -288(1)
  0111ba4  mflr 0
  0111ba8  std 0, 304(1)
  0111bac  stfd 30, 272(1)
  0111bb0  stfd 31, 280(1)
  0111bb4  std 27, 232(1)
  0111bb8  std 19, 168(1)
  0111bbc  lis 27, 151
  0111bc0  ori 19, 4, 0
  0111bc4  fmr 31, 1
  0111bc8  std 18, 160(1)
  0111bcc  addic 27, 27, -25376
  0111bd0  li 18, 0
  0111bd4  std 16, 144(1)
  0111bd8  cmpwi 1, 7, 0
  0111bdc  cmpwi 6, 9, 0
  0111be0  std 21, 184(1)
  0111be4  ori 16, 18, 0
  0111be8  lwz 21, 8320(27)
  0111bec  std 22, 192(1)
  0111bf0  lwz 4, 8332(27)
  0111bf4  std 15, 136(1)
  0111bf8  ori 22, 3, 0
  0111bfc  ori 15, 6, 0
  0111c00  std 23, 200(1)
  0111c04  std 17, 152(1)
  0111c08  cmpwi 4, 24
  0111c0c  ori 17, 7, 0
  0111c10  std 24, 208(1)
  0111c14  ori 23, 8, 0
  0111c18  std 31, 264(1)
  0111c1c  std 30, 256(1)
  0111c20  std 29, 248(1)
  0111c24  std 28, 240(1)
  0111c28  std 26, 224(1)
  0111c2c  std 25, 216(1)
  0111c30  std 20, 176(1)
  0111c34  std 14, 128(1)
  0111c38  ori 24, 9, 0
  0111c3c  bt 2, 0x111c4c
  0111c40  lwz 3, 8324(27)
  0111c44  cmpwi 3, 114
  0111c48  bf 2, 0x111c5c
  0111c4c  ori 21, 18, 0
  0111c50  li 18, 2
  0111c54  std 27, 112(1)
  0111c58  b 0x111cf4
  0111c5c  bf 5, 0x111cbc
  0111c60  addic 30, 17, -1
  0111c64  std 27, 112(1)
  0111c68  ori 31, 18, 0
  0111c6c  cmpwi 30, 0
  0111c70  bf 1, 0x111cf4
  0111c74  addic 29, 27, 128
  0111c78  ori 28, 15, 0
  0111c7c  ori 3, 29, 0
  0111c80  lwz 4, 0(28)
  0111c84  extsw 4, 4
  0111c88  bl 0x110b70
  0111c8c  cmpwi 3, 0
  0111c90  bt 2, 0x111ca4
  0111c94  ori 21, 18, 0
  0111c98  std 27, 112(1)
  0111c9c  li 18, 2
  0111ca0  b 0x111cf4
  0111ca4  addic 31, 31, 1
  0111ca8  std 27, 112(1)
  0111cac  addic 28, 28, 4
  0111cb0  cmpw 31, 30
  0111cb4  bt 0, 0x111c7c
  0111cb8  b 0x111cf4
  0111cbc  cmpwi 23, 0
  0111cc0  std 27, 112(1)
  0111cc4  bt 2, 0x111cf4
  0111cc8  std 27, 112(1)
  0111ccc  bf 25, 0x111cf4
  0111cd0  addic 3, 27, 128
  0111cd4  ori 4, 23, 0
  0111cd8  std 27, 112(1)
  0111cdc  ori 5, 24, 0
  0111ce0  bl 0x104e44
  0111ce4  cmpwi 3, 0
  0111ce8  bf 2, 0x111cf4
  0111cec  ori 21, 18, 0
  0111cf0  li 18, 2
  0111cf4  lis 14, 165
  0111cf8  li 25, 1
  0111cfc  ori 20, 25, 0
  0111d00  lhz 3, 8040(14)
  0111d04  extsh 3, 3
  0111d08  cmpwi 3, 1
  0111d0c  bt 0, 0x111e4c
  0111d10  addic 26, 14, 8040
  0111d14  addic 27, 17, -1
  0111d18  addic 26, 26, 2
  0111d1c  lis 3, 164
  0111d20  lhz 4, 0(26)
  0111d24  extsh 4, 4
  0111d28  lwz 3, -28512(3)
  0111d2c  sldi 4, 4, 8
  0111d30  addc 28, 3, 4
  0111d34  clrldi 28, 28, 32
  0111d38  cmpwi 28, 0
  0111d3c  bt 2, 0x111e34
  0111d40  lhz 3, 166(28)
  0111d44  cmpwi 3, 203
  0111d48  bf 2, 0x111d60
  0111d4c  lbz 3, 32(28)
  0111d50  cmpwi 3, 254
  0111d54  cmpwi 1, 3, 253
  0111d58  bt 2, 0x111d60
  0111d5c  bf 6, 0x111d80
  0111d60  lhz 3, 166(28)
  0111d64  cmpwi 3, 1900
  0111d68  bf 2, 0x111e34
  0111d6c  lbz 3, 32(28)
  0111d70  cmpwi 3, 254
  0111d74  cmpwi 1, 3, 253
  0111d78  bt 2, 0x111e34
  0111d7c  bt 6, 0x111e34
  0111d80  cmpwi 3, 3
  0111d84  bf 2, 0x111e34
  0111d88  lfs 1, 20(22)
  0111d8c  lfs 2, 20(28)
  0111d90  lfs 3, 16(22)
  0111d94  fsubs 1, 1, 2
  0111d98  lfs 2, 16(28)
  0111d9c  fsubs 2, 3, 2
  0111da0  fmuls 1, 1, 1
  0111da4  fmadds 30, 2, 2, 1
  0111da8  fsqrts 30, 30
  0111dac  fcmpu 0, 31, 30
  0111db0  cror 6, 0, 2
  0111db4  bt 6, 0x111e34
  0111db8  cmpwi 17, 0
  0111dbc  bf 1, 0x111e00
  0111dc0  cmpwi 27, 0
  0111dc4  ori 30, 16, 0
  0111dc8  bf 1, 0x111e28
  0111dcc  addic 29, 28, 16
  0111dd0  ori 31, 15, 0
  0111dd4  ori 3, 29, 0
  0111dd8  lwz 4, 0(31)
  0111ddc  extsw 4, 4
  0111de0  bl 0x110b70
  0111de4  cmpwi 3, 0
  0111de8  bf 2, 0x111e34
  0111dec  addic 30, 30, 1
  0111df0  addic 31, 31, 4
  0111df4  cmpw 30, 27
  0111df8  bt 0, 0x111dd4
  0111dfc  b 0x111e28
  0111e00  cmpwi 23, 0
  0111e04  bt 2, 0x111e28
  0111e08  cmpwi 24, 0
  0111e0c  bf 1, 0x111e28
  0111e10  addic 3, 28, 16
  0111e14  ori 4, 23, 0
  0111e18  ori 5, 24, 0
  0111e1c  bl 0x104e44
  0111e20  cmpwi 3, 0
  0111e24  bt 2, 0x111e34
  0111e28  fmr 31, 30
  0111e2c  ori 21, 28, 0
  0111e30  ori 18, 20, 0
  0111e34  lhz 3, 8040(14)
  0111e38  addic 25, 25, 1
  0111e3c  extsh 3, 3
  0111e40  addic 26, 26, 2
  0111e44  cmpw 25, 3
  0111e48  bf 1, 0x111d1c
  0111e4c  lis 26, 268
  0111e50  ori 31, 16, 0
  0111e54  addic 28, 17, -1
  0111e58  addic 26, 26, -19308
  0111e5c  lwz 29, 0(26)
  0111e60  cmpwi 29, 0
  0111e64  bt 2, 0x111f40
  0111e68  lhz 3, 166(29)
  0111e6c  cmpwi 3, 270
  0111e70  bf 2, 0x111f40
  0111e74  lbz 3, 32(29)
  0111e78  cmpwi 1, 3, 253
  0111e7c  cmpwi 3, 254
  0111e80  cror 2, 2, 6
  0111e84  bt 2, 0x111f40
  0111e88  lbz 3, 188(29)
  0111e8c  cmpwi 3, 0
  0111e90  bf 1, 0x111f40
  0111e94  lfs 1, 20(22)
  0111e98  lfs 2, 20(29)
  0111e9c  lfs 3, 16(22)
  0111ea0  fsubs 1, 1, 2
  0111ea4  lfs 2, 16(29)
  0111ea8  fsubs 2, 3, 2
  0111eac  fmuls 1, 1, 1
  0111eb0  fmadds 30, 2, 2, 1
  0111eb4  fsqrts 30, 30
  0111eb8  fcmpu 0, 31, 30
  0111ebc  cror 6, 0, 2
  0111ec0  bt 6, 0x111f40
  0111ec4  cmpwi 17, 0
  0111ec8  bf 1, 0x111f0c
  0111ecc  cmpwi 28, 0
  0111ed0  ori 30, 16, 0
  0111ed4  bf 1, 0x111f34
  0111ed8  addic 27, 29, 16
  0111edc  ori 25, 15, 0
  0111ee0  ori 3, 27, 0
  0111ee4  lwz 4, 0(25)
  0111ee8  extsw 4, 4
  0111eec  bl 0x110b70
  0111ef0  cmpwi 3, 0
  0111ef4  bf 2, 0x111f40
  0111ef8  addic 30, 30, 1
  0111efc  addic 25, 25, 4
  0111f00  cmpw 30, 28
  0111f04  bt 0, 0x111ee0
  0111f08  b 0x111f34
  0111f0c  cmpwi 23, 0
  0111f10  bt 2, 0x111f34
  0111f14  cmpwi 24, 0
  0111f18  bf 1, 0x111f34
  0111f1c  addic 3, 29, 16
  0111f20  ori 4, 23, 0
  0111f24  ori 5, 24, 0
  0111f28  bl 0x104e44
  0111f2c  cmpwi 3, 0
  0111f30  bt 2, 0x111f40
  0111f34  ori 21, 29, 0
  0111f38  fmr 31, 30
  0111f3c  ori 18, 20, 0
  0111f40  addic 31, 31, 1
  0111f44  addic 26, 26, 4
  0111f48  cmpwi 31, 20
  0111f4c  bt 0, 0x111e5c
  0111f50  cmpwi 21, 0
  0111f54  bt 2, 0x112024
  0111f58  stw 21, 64(19)
  0111f5c  lfs 1, 16(21)
  0111f60  stfs 1, 0(19)
  0111f64  lfs 2, 20(21)
  0111f68  stfs 2, 4(19)
  0111f6c  lfs 3, 24(21)
  0111f70  stfs 3, 8(19)
  0111f74  lfs 4, 28(21)
  0111f78  stfs 4, 12(19)
  0111f7c  lfs 5, 64(21)
  0111f80  ld 3, 112(1)
  0111f84  stfs 5, 16(19)
  0111f88  lfs 5, 68(21)
  0111f8c  stfs 5, 20(19)
  0111f90  lfs 5, 72(21)
  0111f94  lwz 4, 8320(3)
  0111f98  stfs 5, 24(19)
  0111f9c  lfs 5, 76(21)
  0111fa0  cmpw 21, 4
  0111fa4  stfs 5, 28(19)
  0111fa8  bf 2, 0x111ff0
  0111fac  lfs 1, 192(3)
  0111fb0  stfs 1, 32(19)
  0111fb4  lfs 1, 196(3)
  0111fb8  stfs 1, 36(19)
  0111fbc  lfs 1, 200(3)
  0111fc0  stfs 1, 40(19)
  0111fc4  lfs 1, 204(3)
  0111fc8  stfs 1, 44(19)
  0111fcc  lfs 1, 208(3)
  0111fd0  stfs 1, 48(19)
  0111fd4  lfs 1, 212(3)
  0111fd8  stfs 1, 52(19)
  0111fdc  lfs 1, 216(3)
  0111fe0  stfs 1, 56(19)
  0111fe4  lfs 1, 220(3)
  0111fe8  stfs 1, 60(19)
  0111fec  b 0x112048
  0111ff0  lis 3, 17
  0111ff4  stfs 1, 48(19)
  0111ff8  stfs 2, 52(19)
  0111ffc  addi 3, 3, 7068
  0112000  stfs 4, 60(19)
  0112004  lfs 5, 0(3)
  0112008  stfs 1, 32(19)
  011200c  fadds 1, 3, 5
  0112010  stfs 2, 36(19)
  0112014  stfs 4, 44(19)
  0112018  stfs 1, 56(19)
  011201c  stfs 1, 40(19)
  0112020  b 0x112048
  0112024  vspltisw 2, 0
  0112028  li 3, 16
  011202c  stw 16, 64(19)
  0112030  li 4, 48
  0112034  li 5, 32
  0112038  stvx 2, 0, 19
  011203c  stvx 2, 3, 19
  0112040  stvx 2, 4, 19
  0112044  stvx 2, 5, 19
  0112048  ori 3, 18, 0
  011204c  stw 18, 68(19)
  0112050  ld 0, 304(1)
  0112054  mtlr 0
  0112058  lfd 30, 272(1)
  011205c  lfd 31, 280(1)
  0112060  ld 14, 128(1)
  0112064  ld 15, 136(1)
  0112068  ld 16, 144(1)
  011206c  ld 17, 152(1)
  0112070  ld 18, 160(1)
  0112074  ld 19, 168(1)
  0112078  ld 20, 176(1)
  011207c  ld 21, 184(1)
  0112080  ld 22, 192(1)
  0112084  ld 23, 200(1)
  0112088  ld 24, 208(1)
  011208c  ld 25, 216(1)
  0112090  ld 26, 224(1)
  0112094  ld 27, 232(1)
  0112098  ld 28, 240(1)
  011209c  ld 29, 248(1)
  01120a0  ld 30, 256(1)
  01120a4  ld 31, 264(1)
  01120a8  addi 1, 1, 288
  01120ac  blr

MB_CollLineWrapper:   # 0x1120b0, 0x24 bytes
  01120b0  stdu 1, -112(1)
  01120b4  mflr 0
  01120b8  std 0, 128(1)
  01120bc  bl 0x57820
  01120c0  nop
  01120c4  ld 0, 128(1)
  01120c8  mtlr 0
  01120cc  addi 1, 1, 112
  01120d0  blr

MB_TransformBetweenFrames:   # 0x1120d4, 0x1d8 bytes
  01120d4  stdu 1, -304(1)
  01120d8  mflr 0
  01120dc  std 0, 320(1)
  01120e0  stfd 30, 288(1)
  01120e4  stfd 31, 296(1)
  01120e8  std 30, 272(1)
  01120ec  std 31, 280(1)
  01120f0  ori 30, 3, 0
  01120f4  std 28, 256(1)
  01120f8  std 27, 248(1)
  01120fc  ori 31, 5, 0
  0112100  addic 27, 1, 112
  0112104  std 29, 264(1)
  0112108  ori 28, 4, 0
  011210c  ori 29, 7, 0
  0112110  ori 4, 6, 0
  0112114  ori 3, 27, 0
  0112118  bl 0x500ca4
  011211c  nop
  0112120  ori 3, 27, 0
  0112124  ori 4, 27, 0
  0112128  bl 0x5010c0
  011212c  nop
  0112130  addic 3, 1, 176
  0112134  ori 4, 29, 0
  0112138  bl 0x500ca4
  011213c  nop
  0112140  lfs 1, 4(30)
  0112144  lfs 2, 4(31)
  0112148  lfs 3, 0(30)
  011214c  fsubs 1, 1, 2
  0112150  lfs 4, 0(31)
  0112154  lfs 5, 132(1)
  0112158  fsubs 3, 3, 4
  011215c  lfs 6, 8(30)
  0112160  lfs 7, 8(31)
  0112164  lfs 8, 128(1)
  0112168  lfs 9, 116(1)
  011216c  fsubs 6, 6, 7
  0112170  lfs 10, 112(1)
  0112174  lfs 11, 148(1)
  0112178  lfs 12, 12(30)
  011217c  fmuls 5, 5, 1
  0112180  fmuls 8, 8, 1
  0112184  lfs 13, 136(1)
  0112188  lfs 0, 144(1)
  011218c  fmuls 13, 13, 1
  0112190  lfs 31, 164(1)
  0112194  fmadds 5, 9, 3, 5
  0112198  fmadds 8, 10, 3, 8
  011219c  lfs 9, 120(1)
  01121a0  lfs 10, 160(1)
  01121a4  fmadds 9, 9, 3, 13
  01121a8  lfs 30, 140(1)
  01121ac  lfs 13, 152(1)
  01121b0  fmuls 1, 30, 1
  01121b4  lfs 30, 124(1)
  01121b8  fmadds 5, 11, 6, 5
  01121bc  fmadds 8, 0, 6, 8
  01121c0  lfs 11, 168(1)
  01121c4  fmadds 9, 13, 6, 9
  01121c8  lfs 0, 196(1)
  01121cc  fmadds 1, 30, 3, 1
  01121d0  lfs 3, 156(1)
  01121d4  fmadds 5, 31, 12, 5
  01121d8  fmadds 8, 10, 12, 8
  01121dc  lfs 10, 200(1)
  01121e0  fmadds 9, 11, 12, 9
  01121e4  lfs 13, 176(1)
  01121e8  lfs 31, 180(1)
  01121ec  lfs 30, 172(1)
  01121f0  fmadds 1, 3, 6, 1
  01121f4  lfs 3, 184(1)
  01121f8  lfs 6, 208(1)
  01121fc  fmuls 11, 0, 5
  0112200  fmuls 10, 10, 5
  0112204  fmadds 4, 13, 8, 4
  0112208  lfs 13, 204(1)
  011220c  lfs 0, 212(1)
  0112210  fmuls 13, 13, 5
  0112214  fmadds 1, 30, 12, 1
  0112218  lfs 12, 216(1)
  011221c  fmadds 11, 31, 8, 11
  0112220  fmadds 3, 3, 8, 10
  0112224  fmadds 4, 6, 9, 4
  0112228  lfs 6, 224(1)
  011222c  lfs 10, 188(1)
  0112230  lfs 31, 228(1)
  0112234  fmadds 8, 10, 8, 13
  0112238  lfs 10, 192(1)
  011223c  fmadds 11, 0, 9, 11
  0112240  fmadds 3, 12, 9, 3
  0112244  lfs 12, 232(1)
  0112248  lfs 13, 220(1)
  011224c  fmadds 4, 6, 1, 4
  0112250  lfs 6, 236(1)
  0112254  fmadds 8, 13, 9, 8
  0112258  fmadds 9, 31, 1, 11
  011225c  fmadds 3, 12, 1, 3
  0112260  fmadds 4, 10, 5, 4
  0112264  fmadds 1, 6, 1, 8
  0112268  fadds 2, 9, 2
  011226c  fadds 3, 3, 7
  0112270  stfs 4, 0(28)
  0112274  stfs 1, 12(28)
  0112278  stfs 2, 4(28)
  011227c  stfs 3, 8(28)
  0112280  ld 0, 320(1)
  0112284  mtlr 0
  0112288  lfd 30, 288(1)
  011228c  lfd 31, 296(1)
  0112290  ld 27, 248(1)
  0112294  ld 28, 256(1)
  0112298  ld 29, 264(1)
  011229c  ld 30, 272(1)
  01122a0  ld 31, 280(1)
  01122a4  addi 1, 1, 304
  01122a8  blr

MB_GetPlatformParent:   # 0x1122ac, 0x34 bytes
  01122ac  cmpwi 3, 0
  01122b0  bf 2, 0x1122bc
  01122b4  li 3, 0
  01122b8  b 0x1122dc
  01122bc  lhz 4, 52(3)
  01122c0  rlwinm 4, 4, 0, 26, 26
  01122c4  cmpwi 4, 0
  01122c8  bf 2, 0x1122d4
  01122cc  li 3, 0
  01122d0  b 0x1122dc
  01122d4  lwz 3, 120(3)
  01122d8  lwz 3, 8(3)
  01122dc  blr

MB_PlatformLocalToWorld:   # 0x1122e0, 0x1e0 bytes
  01122e0  stdu 1, -304(1)
  01122e4  mflr 0
  01122e8  std 0, 320(1)
  01122ec  std 27, 264(1)
  01122f0  cmpwi 4, 0
  01122f4  std 28, 272(1)
  01122f8  ori 27, 4, 0
  01122fc  std 30, 288(1)
  0112300  std 29, 280(1)
  0112304  ori 28, 5, 0
  0112308  ori 29, 6, 0
  011230c  std 31, 296(1)
  0112310  ori 30, 7, 0
  0112314  std 26, 256(1)
  0112318  std 25, 248(1)
  011231c  ori 31, 8, 0
  0112320  bt 2, 0x112344
  0112324  lhz 3, 52(27)
  0112328  rlwinm 3, 3, 0, 26, 26
  011232c  cmpwi 3, 0
  0112330  bt 2, 0x112344
  0112334  lwz 26, 120(27)
  0112338  lwz 26, 8(26)
  011233c  cmpwi 26, 0
  0112340  bf 2, 0x11234c
  0112344  li 3, 0
  0112348  b 0x112494
  011234c  addic 25, 1, 112
  0112350  ori 4, 26, 0
  0112354  ori 3, 25, 0
  0112358  bl 0x500ca4
  011235c  nop
  0112360  lfs 1, 0(28)
  0112364  lfs 2, 16(26)
  0112368  fadds 1, 1, 2
  011236c  lfs 2, 4(28)
  0112370  lfs 3, 8(28)
  0112374  lfs 4, 12(28)
  0112378  addic 28, 1, 176
  011237c  ori 4, 29, 0
  0112380  ori 3, 28, 0
  0112384  stfs 1, 0(30)
  0112388  lfs 5, 20(26)
  011238c  fadds 2, 2, 5
  0112390  stfs 2, 4(30)
  0112394  lfs 5, 24(26)
  0112398  stfs 4, 12(30)
  011239c  fadds 3, 3, 5
  01123a0  stfs 3, 8(30)
  01123a4  lfs 5, 16(27)
  01123a8  fsubs 1, 1, 5
  01123ac  stfs 1, 0(30)
  01123b0  lfs 5, 20(27)
  01123b4  fsubs 2, 2, 5
  01123b8  stfs 2, 4(30)
  01123bc  lfs 5, 24(27)
  01123c0  fsubs 3, 3, 5
  01123c4  stfs 3, 8(30)
  01123c8  lfs 5, 128(1)
  01123cc  lfs 6, 112(1)
  01123d0  lfs 7, 132(1)
  01123d4  fmuls 5, 5, 2
  01123d8  lfs 8, 144(1)
  01123dc  fmuls 7, 7, 2
  01123e0  lfs 9, 136(1)
  01123e4  lfs 10, 116(1)
  01123e8  fmuls 9, 9, 2
  01123ec  lfs 11, 124(1)
  01123f0  fmadds 4, 11, 1, 4
  01123f4  fmadds 5, 6, 1, 5
  01123f8  lfs 6, 120(1)
  01123fc  fmadds 7, 10, 1, 7
  0112400  lfs 10, 148(1)
  0112404  lfs 11, 152(1)
  0112408  fmadds 1, 6, 1, 9
  011240c  lfs 6, 156(1)
  0112410  fmadds 4, 6, 3, 4
  0112414  fmadds 5, 8, 3, 5
  0112418  lfs 8, 140(1)
  011241c  fmadds 6, 10, 3, 7
  0112420  fmadds 1, 11, 3, 1
  0112424  fmadds 2, 8, 2, 4
  0112428  stfs 5, 0(30)
  011242c  stfs 6, 4(30)
  0112430  stfs 1, 8(30)
  0112434  stfs 2, 12(30)
  0112438  lfs 1, 16(27)
  011243c  lfs 2, 0(30)
  0112440  fadds 1, 2, 1
  0112444  lfs 2, 4(30)
  0112448  lfs 3, 8(30)
  011244c  stfs 1, 0(30)
  0112450  lfs 1, 20(27)
  0112454  fadds 1, 2, 1
  0112458  stfs 1, 4(30)
  011245c  lfs 1, 24(27)
  0112460  fadds 1, 3, 1
  0112464  stfs 1, 8(30)
  0112468  bl 0x500ca4
  011246c  nop
  0112470  ori 3, 28, 0
  0112474  ori 4, 25, 0
  0112478  ori 5, 28, 0
  011247c  bl 0x50162c
  0112480  nop
  0112484  ori 3, 28, 0
  0112488  ori 4, 31, 0
  011248c  bl 0x10c1e8
  0112490  li 3, 1
  0112494  ld 0, 320(1)
  0112498  mtlr 0
  011249c  ld 25, 248(1)
  01124a0  ld 26, 256(1)
  01124a4  ld 27, 264(1)
  01124a8  ld 28, 272(1)
  01124ac  ld 29, 280(1)
  01124b0  ld 30, 288(1)
  01124b4  ld 31, 296(1)
  01124b8  addi 1, 1, 304
  01124bc  blr

MB_PlatformWorldToLocal:   # 0x1124c0, 0x1b4 bytes
  01124c0  stdu 1, -320(1)
  01124c4  mflr 0
  01124c8  std 0, 336(1)
  01124cc  stfd 28, 288(1)
  01124d0  stfd 29, 296(1)
  01124d4  stfd 30, 304(1)
  01124d8  stfd 31, 312(1)
  01124dc  ori 9, 4, 0
  01124e0  ori 3, 5, 0
  01124e4  std 30, 272(1)
  01124e8  std 29, 264(1)
  01124ec  cmpwi 9, 0
  01124f0  ori 29, 6, 0
  01124f4  std 31, 280(1)
  01124f8  ori 30, 7, 0
  01124fc  std 28, 256(1)
  0112500  std 27, 248(1)
  0112504  ori 31, 8, 0
  0112508  bt 2, 0x11252c
  011250c  lhz 5, 52(4)
  0112510  rlwinm 5, 5, 0, 26, 26
  0112514  cmpwi 5, 0
  0112518  bt 2, 0x11252c
  011251c  lwz 5, 120(4)
  0112520  lwz 5, 8(5)
  0112524  cmpwi 5, 0
  0112528  bf 2, 0x112534
  011252c  li 3, 0
  0112530  b 0x112640
  0112534  ori 5, 3, 0
  0112538  ori 6, 4, 0
  011253c  addic 28, 1, 112
  0112540  addic 4, 6, 192
  0112544  ori 3, 28, 0
  0112548  lfs 1, 4(5)
  011254c  lfs 2, 20(6)
  0112550  lfs 3, 0(5)
  0112554  fsubs 31, 1, 2
  0112558  lfs 1, 16(6)
  011255c  lfs 2, 8(5)
  0112560  fsubs 30, 3, 1
  0112564  lfs 1, 24(6)
  0112568  lfs 29, 12(5)
  011256c  fsubs 28, 2, 1
  0112570  bl 0x5010c0
  0112574  nop
  0112578  lfs 1, 128(1)
  011257c  lfs 2, 132(1)
  0112580  lfs 3, 112(1)
  0112584  fmuls 1, 1, 31
  0112588  lfs 4, 136(1)
  011258c  fmuls 2, 2, 31
  0112590  lfs 5, 116(1)
  0112594  lfs 6, 140(1)
  0112598  fmuls 4, 4, 31
  011259c  lfs 7, 120(1)
  01125a0  fmuls 6, 6, 31
  01125a4  lfs 8, 144(1)
  01125a8  lfs 9, 124(1)
  01125ac  addic 27, 1, 176
  01125b0  ori 4, 29, 0
  01125b4  ori 3, 27, 0
  01125b8  fmadds 1, 3, 30, 1
  01125bc  fmadds 2, 5, 30, 2
  01125c0  lfs 3, 148(1)
  01125c4  lfs 5, 152(1)
  01125c8  fmadds 4, 7, 30, 4
  01125cc  fmadds 6, 9, 30, 6
  01125d0  lfs 7, 160(1)
  01125d4  lfs 9, 156(1)
  01125d8  fmadds 1, 8, 28, 1
  01125dc  fmadds 2, 3, 28, 2
  01125e0  lfs 3, 164(1)
  01125e4  fmadds 4, 5, 28, 4
  01125e8  fmadds 6, 9, 28, 6
  01125ec  lfs 5, 168(1)
  01125f0  lfs 8, 172(1)
  01125f4  fmadds 1, 7, 29, 1
  01125f8  fmadds 2, 3, 29, 2
  01125fc  fmadds 3, 5, 29, 4
  0112600  fmadds 4, 8, 29, 6
  0112604  stfs 1, 0(30)
  0112608  stfs 2, 4(30)
  011260c  stfs 3, 8(30)
  0112610  stfs 4, 12(30)
  0112614  bl 0x500ca4
  0112618  nop
  011261c  ori 3, 27, 0
  0112620  ori 4, 28, 0
  0112624  ori 5, 27, 0
  0112628  bl 0x50162c
  011262c  nop
  0112630  ori 3, 27, 0
  0112634  ori 4, 31, 0
  0112638  bl 0x10c1e8
  011263c  li 3, 1
  0112640  ld 0, 336(1)
  0112644  mtlr 0
  0112648  lfd 28, 288(1)
  011264c  lfd 29, 296(1)
  0112650  lfd 30, 304(1)
  0112654  lfd 31, 312(1)
  0112658  ld 27, 248(1)
  011265c  ld 28, 256(1)
  0112660  ld 29, 264(1)
  0112664  ld 30, 272(1)
  0112668  ld 31, 280(1)
  011266c  addi 1, 1, 320
  0112670  blr

MB_PlatformGetDelta:   # 0x112678, 0x288 bytes
  0112678  stdu 1, -336(1)
  011267c  mflr 0
  0112680  std 0, 352(1)
  0112684  std 29, 312(1)
  0112688  cmpwi 4, 0
  011268c  std 30, 320(1)
  0112690  std 25, 280(1)
  0112694  ori 29, 3, 0
  0112698  ori 30, 4, 0
  011269c  std 26, 288(1)
  01126a0  ori 25, 5, 0
  01126a4  std 31, 328(1)
  01126a8  std 27, 296(1)
  01126ac  ori 26, 6, 0
  01126b0  ori 31, 7, 0
  01126b4  std 28, 304(1)
  01126b8  std 24, 272(1)
  01126bc  std 23, 264(1)
  01126c0  ori 27, 8, 0
  01126c4  bt 2, 0x1126e8
  01126c8  lhz 3, 52(30)
  01126cc  rlwinm 3, 3, 0, 26, 26
  01126d0  cmpwi 3, 0
  01126d4  bt 2, 0x1126e8
  01126d8  lwz 28, 120(30)
  01126dc  lwz 28, 8(28)
  01126e0  cmpwi 28, 0
  01126e4  bf 2, 0x1126f0
  01126e8  li 3, 0
  01126ec  b 0x1128cc
  01126f0  lfs 1, 208(30)
  01126f4  lfs 2, 4(25)
  01126f8  lfs 3, 192(30)
  01126fc  lfs 4, 0(25)
  0112700  lfs 5, 212(30)
  0112704  fmuls 1, 1, 2
  0112708  lfs 6, 224(30)
  011270c  lfs 7, 8(25)
  0112710  lfs 8, 220(30)
  0112714  fmuls 5, 5, 2
  0112718  lfs 9, 216(30)
  011271c  fmuls 8, 8, 2
  0112720  fmuls 2, 9, 2
  0112724  addic 24, 1, 192
  0112728  ori 4, 26, 0
  011272c  fmadds 1, 3, 4, 1
  0112730  lfs 3, 196(30)
  0112734  lfs 9, 204(30)
  0112738  lfs 10, 200(30)
  011273c  fmadds 3, 3, 4, 5
  0112740  lfs 5, 228(30)
  0112744  fmadds 8, 9, 4, 8
  0112748  lfs 11, 232(30)
  011274c  fmadds 2, 10, 4, 2
  0112750  lfs 4, 236(30)
  0112754  ori 3, 24, 0
  0112758  fmadds 1, 6, 7, 1
  011275c  lfs 6, 12(25)
  0112760  fmadds 3, 5, 7, 3
  0112764  fmadds 4, 4, 7, 8
  0112768  fmadds 2, 11, 7, 2
  011276c  stfs 1, 0(31)
  0112770  fadds 1, 4, 6
  0112774  stfs 3, 4(31)
  0112778  stfs 2, 8(31)
  011277c  stfs 1, 12(31)
  0112780  lfs 1, 16(30)
  0112784  lfs 2, 0(31)
  0112788  fadds 1, 2, 1
  011278c  lfs 2, 4(31)
  0112790  lfs 3, 8(31)
  0112794  stfs 1, 0(31)
  0112798  lfs 1, 20(30)
  011279c  fadds 1, 2, 1
  01127a0  stfs 1, 4(31)
  01127a4  lfs 1, 24(30)
  01127a8  fadds 1, 3, 1
  01127ac  stfs 1, 8(31)
  01127b0  bl 0x500ca4
  01127b4  nop
  01127b8  addic 23, 1, 128
  01127bc  addic 4, 30, 192
  01127c0  ori 3, 23, 0
  01127c4  bl 0x500f6c
  01127c8  nop
  01127cc  ori 3, 24, 0
  01127d0  ori 4, 23, 0
  01127d4  ori 5, 24, 0
  01127d8  bl 0x50162c
  01127dc  nop
  01127e0  ori 3, 24, 0
  01127e4  ori 4, 27, 0
  01127e8  bl 0x10c1e8
  01127ec  lwz 3, 60(28)
  01127f0  rlwinm 3, 3, 0, 29, 29
  01127f4  cmpwi 3, 0
  01127f8  bt 2, 0x11284c
  01127fc  lfs 1, 0(31)
  0112800  lfs 2, 16(28)
  0112804  fadds 1, 1, 2
  0112808  lfs 2, 4(31)
  011280c  lfs 3, 8(31)
  0112810  ori 3, 29, 0
  0112814  ori 4, 30, 0
  0112818  ori 5, 31, 0
  011281c  ori 6, 27, 0
  0112820  ori 7, 25, 0
  0112824  ori 8, 26, 0
  0112828  stfs 1, 0(31)
  011282c  lfs 1, 20(28)
  0112830  fadds 1, 2, 1
  0112834  stfs 1, 4(31)
  0112838  lfs 1, 24(28)
  011283c  fadds 1, 3, 1
  0112840  stfs 1, 8(31)
  0112844  bl 0x1124c0
  0112848  b 0x1128c8
  011284c  lbz 29, 34(29)
  0112850  cmpwi 29, 0
  0112854  bt 2, 0x1128c8
  0112858  lbz 3, 34(30)
  011285c  cmpw 29, 3
  0112860  bf 0, 0x1128c8
  0112864  lfs 1, 16(28)
  0112868  lis 4, 17
  011286c  stfs 1, 112(1)
  0112870  lfs 1, 20(28)
  0112874  addi 4, 4, 9844
  0112878  addic 3, 1, 112
  011287c  stfs 1, 116(1)
  0112880  lfs 1, 24(28)
  0112884  stfs 1, 120(1)
  0112888  lfs 1, 28(28)
  011288c  stfs 1, 124(1)
  0112890  lfs 1, 0(4)
  0112894  bl 0x110488
  0112898  lfs 1, 0(31)
  011289c  lfs 2, 112(1)
  01128a0  lfs 3, 4(31)
  01128a4  fadds 1, 1, 2
  01128a8  lfs 2, 116(1)
  01128ac  lfs 4, 8(31)
  01128b0  fadds 2, 3, 2
  01128b4  lfs 3, 120(1)
  01128b8  fadds 3, 4, 3
  01128bc  stfs 1, 0(31)
  01128c0  stfs 2, 4(31)
  01128c4  stfs 3, 8(31)
  01128c8  li 3, 1
  01128cc  ld 0, 352(1)
  01128d0  mtlr 0
  01128d4  ld 23, 264(1)
  01128d8  ld 24, 272(1)
  01128dc  ld 25, 280(1)
  01128e0  ld 26, 288(1)
  01128e4  ld 27, 296(1)
  01128e8  ld 28, 304(1)
  01128ec  ld 29, 312(1)
  01128f0  ld 30, 320(1)
  01128f4  ld 31, 328(1)
  01128f8  addi 1, 1, 336
  01128fc  blr

MB_GetOrientation:   # 0x112900, 0xcc bytes
  0112900  stdu 1, -352(1)
  0112904  mflr 0
  0112908  std 0, 368(1)
  011290c  std 29, 328(1)
  0112910  std 31, 344(1)
  0112914  std 28, 320(1)
  0112918  addic 29, 1, 112
  011291c  ori 31, 4, 0
  0112920  std 30, 336(1)
  0112924  ori 28, 3, 0
  0112928  ori 30, 6, 0
  011292c  ori 4, 5, 0
  0112930  std 27, 312(1)
  0112934  ori 3, 29, 0
  0112938  bl 0x500ca4
  011293c  nop
  0112940  ori 3, 29, 0
  0112944  ori 4, 29, 0
  0112948  bl 0x5010c0
  011294c  nop
  0112950  addic 27, 1, 176
  0112954  ori 4, 30, 0
  0112958  ori 3, 27, 0
  011295c  bl 0x500ca4
  0112960  nop
  0112964  addic 30, 1, 240
  0112968  ori 4, 29, 0
  011296c  ori 3, 30, 0
  0112970  ori 5, 27, 0
  0112974  bl 0x50162c
  0112978  nop
  011297c  ori 3, 30, 0
  0112980  ori 4, 28, 0
  0112984  bl 0x10c1e8
  0112988  lfs 1, 0(31)
  011298c  stfs 1, 16(28)
  0112990  lfs 1, 4(31)
  0112994  stfs 1, 20(28)
  0112998  lfs 1, 8(31)
  011299c  stfs 1, 24(28)
  01129a0  lfs 1, 12(31)
  01129a4  stfs 1, 28(28)
  01129a8  ld 0, 368(1)
  01129ac  mtlr 0
  01129b0  ld 27, 312(1)
  01129b4  ld 28, 320(1)
  01129b8  ld 29, 328(1)
  01129bc  ld 30, 336(1)
  01129c0  ld 31, 344(1)
  01129c4  addi 1, 1, 352
  01129c8  blr

MB_ScaledVecWrapper:   # 0x1129d0, 0x64 bytes
  01129d0  stdu 1, -128(1)
  01129d4  mflr 0
  01129d8  std 0, 144(1)
  01129dc  lis 4, 17
  01129e0  lfs 2, 0(3)
  01129e4  addi 4, 4, 10700
  01129e8  lfs 3, 0(4)
  01129ec  fmuls 2, 2, 3
  01129f0  stfs 2, 112(1)
  01129f4  lfs 2, 4(3)
  01129f8  fmuls 2, 2, 3
  01129fc  stfs 2, 116(1)
  0112a00  lfs 2, 8(3)
  0112a04  fmuls 2, 2, 3
  0112a08  stfs 2, 120(1)
  0112a0c  lfs 2, 12(3)
  0112a10  addic 3, 1, 112
  0112a14  fmuls 2, 2, 3
  0112a18  stfs 2, 124(1)
  0112a1c  bl 0x502910
  0112a20  nop
  0112a24  ld 0, 144(1)
  0112a28  mtlr 0
  0112a2c  addi 1, 1, 128
  0112a30  blr

MB_ToastMessage:   # 0x112a38, 0xb0 bytes
  0112a38  stdu 1, -160(1)
  0112a3c  mflr 0
  0112a40  std 0, 176(1)
  0112a44  addi 0, 1, 128
  0112a48  stvx 31, 0, 0
  0112a4c  li 0, 112
  0112a50  stw 4, 112(1)
  0112a54  cmpwi 4, -1
  0112a58  stw 4, 116(1)
  0112a5c  stw 4, 120(1)
  0112a60  stw 4, 124(1)
  0112a64  std 31, 152(1)
  0112a68  lvx 31, 1, 0
  0112a6c  bf 2, 0x112a9c
  0112a70  lis 4, 17
  0112a74  vspltisw 2, -1
  0112a78  lis 5, 114
  0112a7c  addi 4, 4, 10804
  0112a80  li 6, -3056
  0112a84  vslw 2, 2, 2
  0112a88  <unknown>
  0112a8c  <unknown>
  0112a90  vspltw 3, 3, 0
  0112a94  vmaddfp 31, 4, 3, 2
  0112a98  vctsxs 31, 31, 0
  0112a9c  lis 4, 161
  0112aa0  addic 31, 4, 23692
  0112aa4  bl 0x7b740
  0112aa8  nop
  0112aac  ori 4, 3, 0
  0112ab0  ori 3, 31, 0
  0112ab4  bl 0x5cc8d8
  0112ab8  nop
  0112abc  vspltw 2, 31, 0
  0112ac0  lis 3, 161
  0112ac4  li 4, 23680
  0112ac8  stvewx 2, 4, 3
  0112acc  li 0, 128
  0112ad0  lvx 31, 1, 0
  0112ad4  ld 0, 176(1)
  0112ad8  mtlr 0
  0112adc  ld 31, 152(1)
  0112ae0  addi 1, 1, 160
  0112ae4  blr

MB_ToastMessageByIndex:   # 0x112af0, 0x128 bytes
  0112af0  stdu 1, -224(1)
  0112af4  mflr 0
  0112af8  std 0, 240(1)
  0112afc  addi 0, 1, 192
  0112b00  stvx 31, 0, 0
  0112b04  std 30, 208(1)
  0112b08  lis 4, 17
  0112b0c  lis 5, 115
  0112b10  std 31, 216(1)
  0112b14  addi 30, 4, 10984
  0112b18  ori 31, 3, 0
  0112b1c  addic 4, 5, -27272
  0112b20  addic 3, 1, 112
  0112b24  li 5, 76
  0112b28  bl 0x5c5ad0
  0112b2c  nop
  0112b30  vspltisw 3, -1
  0112b34  lis 4, 114
  0112b38  li 5, -3056
  0112b3c  <unknown>
  0112b40  li 7, 4
  0112b44  vspltisw 6, -1
  0112b48  vspltw 2, 2, 0
  0112b4c  li 3, 0
  0112b50  vslw 3, 3, 3
  0112b54  li 6, 0
  0112b58  subc 3, 31, 3
  0112b5c  <unknown>
  0112b60  <unknown>
  0112b64  sradi 3, 3, 63
  0112b68  vmaddfp 2, 4, 2, 3
  0112b6c  subc 6, 6, 31
  0112b70  vspltw 5, 5, 0
  0112b74  li 4, 18
  0112b78  vslw 3, 6, 6
  0112b7c  and 3, 3, 6
  0112b80  li 5, 18
  0112b84  addc 3, 31, 3
  0112b88  vmaddfp 3, 4, 5, 3
  0112b8c  subc 4, 4, 3
  0112b90  subc 5, 5, 3
  0112b94  vspltisw 4, -1
  0112b98  sradi 4, 4, 63
  0112b9c  and 4, 4, 5
  0112ba0  vctsxs 2, 2, 0
  0112ba4  addc 3, 3, 4
  0112ba8  lis 4, 161
  0112bac  sldi 3, 3, 2
  0112bb0  addic 31, 4, 23692
  0112bb4  addc 3, 1, 3
  0112bb8  vctsxs 3, 3, 0
  0112bbc  clrldi 3, 3, 32
  0112bc0  lwz 3, 112(3)
  0112bc4  vcmpequw 4, 2, 4
  0112bc8  extsw 3, 3
  0112bcc  vsel 31, 2, 3, 4
  0112bd0  bl 0x7b740
  0112bd4  nop
  0112bd8  ori 4, 3, 0
  0112bdc  ori 3, 31, 0
  0112be0  bl 0x5cc8d8
  0112be4  nop
  0112be8  vspltw 2, 31, 0
  0112bec  lis 3, 161
  0112bf0  li 4, 23680
  0112bf4  stvewx 2, 4, 3
  0112bf8  li 0, 192
  0112bfc  lvx 31, 1, 0
  0112c00  ld 0, 240(1)
  0112c04  mtlr 0
  0112c08  ld 30, 208(1)
  0112c0c  ld 31, 216(1)
  0112c10  addi 1, 1, 224
  0112c14  blr

MB_UnlockLevel:   # 0x112c20, 0x1a0 bytes
  0112c20  stdu 1, -224(1)
  0112c24  mflr 0
  0112c28  std 0, 240(1)
  0112c2c  addi 0, 1, 192
  0112c30  stvx 31, 0, 0
  0112c34  lis 4, 151
  0112c38  addic 4, 4, -13812
  0112c3c  lbzx 5, 4, 3
  0112c40  std 31, 216(1)
  0112c44  cmpwi 5, 0
  0112c48  bf 2, 0x112da4
  0112c4c  li 5, 0
  0112c50  ori 6, 5, 0
  0112c54  li 8, 0
  0112c58  lbzx 10, 4, 5
  0112c5c  addic 7, 6, 1
  0112c60  subc 8, 8, 10
  0112c64  addic 9, 5, 1
  0112c68  cntlzw 8, 8
  0112c6c  subc 6, 6, 7
  0112c70  sldi 8, 8, 58
  0112c74  extsw 5, 9
  0112c78  sradi 8, 8, 63
  0112c7c  cmpwi 5, 20
  0112c80  and 6, 8, 6
  0112c84  addc 6, 7, 6
  0112c88  bt 0, 0x112c54
  0112c8c  li 7, 1
  0112c90  lis 8, 151
  0112c94  lis 5, 151
  0112c98  sldi 6, 6, 2
  0112c9c  addic 5, 5, -15988
  0112ca0  stbx 7, 4, 3
  0112ca4  extsw 6, 6
  0112ca8  lwz 4, -25488(8)
  0112cac  cmpw 4, 3
  0112cb0  stwx 3, 5, 6
  0112cb4  bt 2, 0x112da4
  0112cb8  lis 4, 115
  0112cbc  ori 31, 3, 0
  0112cc0  addic 3, 1, 112
  0112cc4  addic 4, 4, -27272
  0112cc8  li 5, 76
  0112ccc  bl 0x5c5ad0
  0112cd0  nop
  0112cd4  lis 3, 17
  0112cd8  vspltisw 3, -1
  0112cdc  lis 5, 114
  0112ce0  vspltisw 6, -1
  0112ce4  addi 3, 3, 11288
  0112ce8  li 6, -3056
  0112cec  li 8, 4
  0112cf0  vslw 3, 3, 3
  0112cf4  li 4, 0
  0112cf8  li 7, 0
  0112cfc  <unknown>
  0112d00  subc 4, 31, 4
  0112d04  <unknown>
  0112d08  subc 7, 7, 31
  0112d0c  vspltw 2, 2, 0
  0112d10  sradi 4, 4, 63
  0112d14  <unknown>
  0112d18  li 9, 18
  0112d1c  and 4, 4, 7
  0112d20  vspltw 5, 5, 0
  0112d24  vmaddfp 2, 4, 2, 3
  0112d28  li 7, 18
  0112d2c  vslw 3, 6, 6
  0112d30  addc 4, 31, 4
  0112d34  subc 5, 7, 4
  0112d38  subc 3, 9, 4
  0112d3c  vmaddfp 3, 4, 5, 3
  0112d40  sradi 5, 5, 63
  0112d44  vspltisw 4, -1
  0112d48  and 3, 5, 3
  0112d4c  addc 3, 4, 3
  0112d50  lis 4, 161
  0112d54  sldi 3, 3, 2
  0112d58  vctsxs 2, 2, 0
  0112d5c  addc 3, 1, 3
  0112d60  addic 31, 4, 23692
  0112d64  clrldi 3, 3, 32
  0112d68  vctsxs 3, 3, 0
  0112d6c  lwz 3, 112(3)
  0112d70  extsw 3, 3
  0112d74  vcmpequw 4, 2, 4
  0112d78  vsel 31, 2, 3, 4
  0112d7c  bl 0x7b740
  0112d80  nop
  0112d84  ori 4, 3, 0
  0112d88  ori 3, 31, 0
  0112d8c  bl 0x5cc8d8
  0112d90  nop
  0112d94  vspltw 2, 31, 0
  0112d98  lis 3, 161
  0112d9c  li 4, 23680
  0112da0  stvewx 2, 4, 3
  0112da4  li 0, 192
  0112da8  lvx 31, 1, 0
  0112dac  ld 0, 240(1)
  0112db0  mtlr 0
  0112db4  ld 31, 216(1)
  0112db8  addi 1, 1, 224
  0112dbc  blr

MB_UnlockTrophy:   # 0x112dc0, 0x50 bytes
  0112dc0  stdu 1, -112(1)
  0112dc4  mflr 0
  0112dc8  std 0, 128(1)
  0112dcc  lis 4, 144
  0112dd0  sldi 5, 3, 3
  0112dd4  lwz 4, -21540(4)
  0112dd8  addc 5, 4, 5
  0112ddc  clrldi 5, 5, 32
  0112de0  lwz 5, 12(5)
  0112de4  cmpwi 5, 0
  0112de8  bf 2, 0x112e00
  0112dec  ori 5, 3, 0
  0112df0  ori 3, 4, 0
  0112df4  ori 4, 5, 0
  0112df8  bl 0x4f0310
  0112dfc  nop
  0112e00  ld 0, 128(1)
  0112e04  mtlr 0
  0112e08  addi 1, 1, 112
  0112e0c  blr

MB_UnlockItem:   # 0x112e18, 0x360 bytes
  0112e18  stdu 1, -176(1)
  0112e1c  mflr 0
  0112e20  std 0, 192(1)
  0112e24  std 28, 144(1)
  0112e28  std 29, 152(1)
  0112e2c  addi 0, 1, 112
  0112e30  stvx 31, 0, 0
  0112e34  lis 29, 151
  0112e38  std 31, 168(1)
  0112e3c  lis 28, 151
  0112e40  ori 31, 3, 0
  0112e44  addic 29, 29, -16027
  0112e48  li 3, 1
  0112e4c  std 30, 160(1)
  0112e50  addic 28, 28, -16064
  0112e54  ori 30, 4, 0
  0112e58  li 5, 0
  0112e5c  stbx 3, 29, 31
  0112e60  addic 3, 31, 37
  0112e64  lbzx 4, 28, 31
  0112e68  subc 6, 31, 3
  0112e6c  subc 5, 5, 4
  0112e70  lis 7, 115
  0112e74  cntlzw 5, 5
  0112e78  addic 7, 7, -27776
  0112e7c  sldi 5, 5, 58
  0112e80  sradi 5, 5, 63
  0112e84  and 5, 5, 6
  0112e88  addc 3, 3, 5
  0112e8c  sldi 3, 3, 2
  0112e90  extsw 3, 3
  0112e94  lwzx 3, 7, 3
  0112e98  std 27, 136(1)
  0112e9c  cmpwi 3, -1
  0112ea0  bt 2, 0x112f30
  0112ea4  lis 4, 17
  0112ea8  vspltisw 2, -1
  0112eac  lis 5, 114
  0112eb0  vspltisw 6, -1
  0112eb4  addi 4, 4, 11792
  0112eb8  li 6, -3056
  0112ebc  li 7, 4
  0112ec0  vslw 2, 2, 2
  0112ec4  extsw 3, 3
  0112ec8  <unknown>
  0112ecc  <unknown>
  0112ed0  vspltw 3, 3, 0
  0112ed4  <unknown>
  0112ed8  lis 4, 161
  0112edc  vmaddfp 2, 4, 3, 2
  0112ee0  vspltw 3, 5, 0
  0112ee4  vslw 5, 6, 6
  0112ee8  addic 27, 4, 23692
  0112eec  vmaddfp 3, 4, 3, 5
  0112ef0  vspltisw 4, -1
  0112ef4  vctsxs 2, 2, 0
  0112ef8  vctsxs 3, 3, 0
  0112efc  vcmpequw 4, 2, 4
  0112f00  vsel 31, 2, 3, 4
  0112f04  bl 0x7b740
  0112f08  nop
  0112f0c  ori 4, 3, 0
  0112f10  ori 3, 27, 0
  0112f14  bl 0x5cc8d8
  0112f18  nop
  0112f1c  vspltw 2, 31, 0
  0112f20  lis 3, 161
  0112f24  li 5, 23680
  0112f28  lbzx 4, 28, 31
  0112f2c  stvewx 2, 5, 3
  0112f30  cmpwi 4, 0
  0112f34  bf 2, 0x11314c
  0112f38  li 5, 1
  0112f3c  li 3, 0
  0112f40  li 4, 9
  0112f44  stbx 5, 29, 31
  0112f48  ori 29, 3, 0
  0112f4c  stbx 5, 28, 31
  0112f50  cmpwi 1, 4, 22
  0112f54  cmpwi 4, 12
  0112f58  cror 2, 2, 6
  0112f5c  bt 2, 0x112f80
  0112f60  lbzx 5, 28, 4
  0112f64  cntlzw 5, 5
  0112f68  rlwinm 5, 5, 27, 31, 31
  0112f6c  xori 5, 5, 1
  0112f70  cntlzw 5, 5
  0112f74  rlwinm 5, 5, 27, 31, 31
  0112f78  xori 5, 5, 1
  0112f7c  addc 3, 3, 5
  0112f80  addic 4, 4, 1
  0112f84  extsw 4, 4
  0112f88  cmpwi 4, 26
  0112f8c  bt 0, 0x112f50
  0112f90  cmpwi 3, 15
  0112f94  bt 0, 0x112fb8
  0112f98  lis 3, 144
  0112f9c  lwz 3, -21540(3)
  0112fa0  lwz 4, 100(3)
  0112fa4  cmpwi 4, 0
  0112fa8  bf 2, 0x112fb8
  0112fac  li 4, 11
  0112fb0  bl 0x4f0310
  0112fb4  nop
  0112fb8  sldi 3, 31, 3
  0112fbc  lis 4, 115
  0112fc0  addc 5, 3, 3
  0112fc4  addic 4, 4, 32048
  0112fc8  addc 3, 3, 5
  0112fcc  extsw 3, 3
  0112fd0  addc 3, 4, 3
  0112fd4  lhz 4, 8(3)
  0112fd8  cmpwi 4, 0
  0112fdc  bt 2, 0x113014
  0112fe0  lis 4, 151
  0112fe4  sldi 5, 31, 2
  0112fe8  lhz 3, 18(3)
  0112fec  addic 4, 4, -16212
  0112ff0  extsw 5, 5
  0112ff4  lwzx 6, 4, 5
  0112ff8  extsw 7, 6
  0112ffc  subc 6, 6, 3
  0113000  subc 7, 3, 7
  0113004  sradi 7, 7, 63
  0113008  and 6, 7, 6
  011300c  addc 3, 3, 6
  0113010  stwx 3, 4, 5
  0113014  lis 4, 115
  0113018  ori 3, 29, 0
  011301c  addic 4, 4, 31728
  0113020  cmpwi 31, 0
  0113024  bt 2, 0x113070
  0113028  lwz 5, 0(4)
  011302c  cmpw 5, 31
  0113030  bf 2, 0x113070
  0113034  lis 4, 114
  0113038  ori 3, 29, 0
  011303c  addic 4, 4, -1236
  0113040  lbzx 5, 4, 3
  0113044  clrlwi 6, 5, 26
  0113048  cmpwi 1, 5, 255
  011304c  cmpw 6, 31
  0113050  crnor 2, 2, 6
  0113054  bt 2, 0x113064
  0113058  ori 5, 31, 64
  011305c  stbx 5, 4, 3
  0113060  b 0x113080
  0113064  addic 3, 3, 1
  0113068  extsw 3, 3
  011306c  b 0x113040
  0113070  addic 3, 3, 1
  0113074  addic 4, 4, 4
  0113078  cmpwi 3, 20
  011307c  bt 0, 0x113020
  0113080  clrlwi 3, 30, 24
  0113084  cmpwi 3, 0
  0113088  bt 2, 0x1130e4
  011308c  sldi 3, 31, 4
  0113090  lis 4, 114
  0113094  subc 5, 31, 3
  0113098  addic 4, 4, 4096
  011309c  sldi 5, 5, 2
  01130a0  lis 6, 151
  01130a4  subc 5, 3, 5
  01130a8  addic 3, 6, -25376
  01130ac  extsw 5, 5
  01130b0  addc 4, 4, 5
  01130b4  lwz 4, 8(4)
  01130b8  cmpwi 4, 0
  01130bc  cmpwi 1, 4, 3
  01130c0  cmpwi 6, 4, 2
  01130c4  bf 2, 0x1130d0
  01130c8  stw 31, 8376(3)
  01130cc  b 0x1130e4
  01130d0  bf 6, 0x1130dc
  01130d4  stw 31, 8388(3)
  01130d8  b 0x1130e4
  01130dc  bf 26, 0x1130e4
  01130e0  stw 31, 8384(3)
  01130e4  sldi 3, 31, 4
  01130e8  lis 4, 114
  01130ec  subc 5, 31, 3
  01130f0  addic 4, 4, 4096
  01130f4  sldi 5, 5, 2
  01130f8  subc 3, 3, 5
  01130fc  extsw 3, 3
  0113100  addc 3, 4, 3
  0113104  lwz 3, 8(3)
  0113108  cmpwi 3, 0
  011310c  bf 2, 0x11314c
  0113110  lis 3, 151
  0113114  addic 3, 3, -15908
  0113118  ori 4, 3, 0
  011311c  lwz 5, 0(3)
  0113120  cmpwi 5, 0
  0113124  bt 2, 0x113138
  0113128  addic 29, 29, 1
  011312c  addic 3, 3, 4
  0113130  cmpwi 29, 8
  0113134  bt 0, 0x11311c
  0113138  cmpwi 29, 8
  011313c  bf 0, 0x11314c
  0113140  slwi 3, 29, 2
  0113144  extsw 3, 3
  0113148  stwx 31, 4, 3
  011314c  li 0, 112
  0113150  lvx 31, 1, 0
  0113154  ld 0, 192(1)
  0113158  mtlr 0
  011315c  ld 27, 136(1)
  0113160  ld 28, 144(1)
  0113164  ld 29, 152(1)
  0113168  ld 30, 160(1)
  011316c  ld 31, 168(1)
  0113170  addi 1, 1, 176
  0113174  blr

SetNtscPalTiming:   # 0x1131a8, 0xbc bytes
  01131a8  lis 3, 144
  01131ac  lwz 3, -23196(3)
  01131b0  lwz 3, 24(3)
  01131b4  cmpwi 3, 60
  01131b8  bf 2, 0x1131ec
  01131bc  lis 3, 17
  01131c0  li 4, 5
  01131c4  addi 5, 3, 12664
  01131c8  li 3, 0
  01131cc  lfs 3, 0(5)
  01131d0  lfs 7, 4(5)
  01131d4  fmr 1, 3
  01131d8  lfs 5, 8(5)
  01131dc  fmr 4, 7
  01131e0  lfs 6, 12(5)
  01131e4  fmr 2, 1
  01131e8  b 0x113218
  01131ec  lis 4, 17
  01131f0  li 3, 1
  01131f4  addi 5, 4, 12664
  01131f8  li 4, 6
  01131fc  lfs 1, 16(5)
  0113200  lfs 2, 20(5)
  0113204  lfs 3, 24(5)
  0113208  lfs 4, 28(5)
  011320c  lfs 5, 32(5)
  0113210  lfs 6, 36(5)
  0113214  lfs 7, 40(5)
  0113218  lis 5, 150
  011321c  lis 7, 114
  0113220  lis 6, 114
  0113224  lis 9, 114
  0113228  lis 8, 114
  011322c  stw 3, 27368(5)
  0113230  lis 3, 114
  0113234  stfs 1, -3064(7)
  0113238  lis 10, 114
  011323c  stfs 4, -3052(6)
  0113240  lis 5, 114
  0113244  stfs 2, -3060(9)
  0113248  lis 6, 114
  011324c  stfs 5, -3048(8)
  0113250  stfs 3, -3056(3)
  0113254  stfs 6, -3044(10)
  0113258  stw 4, -3040(5)
  011325c  stfs 7, -3036(6)
  0113260  blr

???_MB_BuildScaledRotMtx:   # 0x113288, 0x22c bytes
  0113288  stdu 1, -528(1)
  011328c  mflr 0
  0113290  std 0, 544(1)
  0113294  stfd 25, 472(1)
  0113298  stfd 26, 480(1)
  011329c  stfd 27, 488(1)
  01132a0  stfd 28, 496(1)
  01132a4  stfd 29, 504(1)
  01132a8  stfd 30, 512(1)
  01132ac  stfd 31, 520(1)
  01132b0  fmr 31, 1
  01132b4  li 9, 0
  01132b8  li 5, 528
  01132bc  std 29, 448(1)
  01132c0  std 28, 440(1)
  01132c4  addc 6, 1, 5
  01132c8  addic 29, 1, 176
  01132cc  std 30, 456(1)
  01132d0  addic 28, 1, 112
  01132d4  addic 30, 5, 80
  01132d8  std 3, 48(6)
  01132dc  std 4, 56(6)
  01132e0  lis 3, 17
  01132e4  std 31, 464(1)
  01132e8  lfs 2, 52(6)
  01132ec  ori 4, 28, 0
  01132f0  std 7, 80(6)
  01132f4  addi 31, 3, 12900
  01132f8  fneg 1, 2
  01132fc  std 8, 88(6)
  0113300  stfs 2, 144(1)
  0113304  ori 3, 29, 0
  0113308  stw 9, 112(1)
  011330c  ori 5, 28, 0
  0113310  stw 9, 160(1)
  0113314  stw 9, 132(1)
  0113318  stw 9, 164(1)
  011331c  stw 9, 152(1)
  0113320  stw 9, 168(1)
  0113324  stw 9, 124(1)
  0113328  stw 9, 140(1)
  011332c  stfs 1, 120(1)
  0113330  lfs 1, 48(6)
  0113334  lfs 2, 56(6)
  0113338  fneg 3, 1
  011333c  fneg 4, 2
  0113340  stfs 2, 116(1)
  0113344  stfs 1, 136(1)
  0113348  stw 9, 156(1)
  011334c  stw 9, 172(1)
  0113350  stfs 3, 148(1)
  0113354  std 27, 432(1)
  0113358  stfs 4, 128(1)
  011335c  bl 0x50162c
  0113360  nop
  0113364  lfs 1, 0(31)
  0113368  lfs 30, 4(31)
  011336c  fadds 1, 31, 1
  0113370  lfs 29, 8(31)
  0113374  lfs 28, 12(31)
  0113378  lfs 27, 16(31)
  011337c  lfs 26, 20(31)
  0113380  addic 27, 1, 304
  0113384  lfs 25, 24(31)
  0113388  ori 4, 29, 0
  011338c  ori 3, 27, 0
  0113390  fsubs 2, 30, 1
  0113394  fsubs 3, 29, 1
  0113398  fsub 5, 1, 2
  011339c  fsel 1, 5, 2, 1
  01133a0  fsub 2, 3, 1
  01133a4  fsel 1, 2, 3, 1
  01133a8  lfs 2, 28(31)
  01133ac  fmuls 3, 1, 1
  01133b0  fmuls 4, 3, 1
  01133b4  fmuls 5, 3, 4
  01133b8  fmadds 1, 4, 28, 1
  01133bc  fmuls 4, 3, 5
  01133c0  fmadds 1, 5, 27, 1
  01133c4  fmuls 3, 3, 4
  01133c8  fmadds 1, 4, 26, 1
  01133cc  fmadds 1, 3, 25, 1
  01133d0  fsubs 1, 2, 1
  01133d4  bl 0x501188
  01133d8  nop
  01133dc  fsubs 1, 30, 31
  01133e0  fsubs 2, 29, 31
  01133e4  addic 31, 1, 240
  01133e8  ori 4, 28, 0
  01133ec  ori 3, 31, 0
  01133f0  fsub 3, 31, 1
  01133f4  fsel 1, 3, 1, 31
  01133f8  fsub 3, 2, 1
  01133fc  fsel 1, 3, 2, 1
  0113400  fmuls 2, 1, 1
  0113404  fmuls 3, 2, 1
  0113408  fmuls 4, 2, 3
  011340c  fmadds 1, 3, 28, 1
  0113410  fmuls 3, 2, 4
  0113414  fmadds 1, 4, 27, 1
  0113418  fmuls 2, 2, 3
  011341c  fmadds 1, 3, 26, 1
  0113420  fmadds 1, 2, 25, 1
  0113424  bl 0x501188
  0113428  nop
  011342c  ori 3, 31, 0
  0113430  ori 4, 31, 0
  0113434  ori 5, 27, 0
  0113438  bl 0x5016e0
  011343c  nop
  0113440  ori 3, 27, 0
  0113444  bl 0x500af8
  0113448  nop
  011344c  addic 29, 1, 368
  0113450  ori 4, 31, 0
  0113454  ori 3, 29, 0
  0113458  ori 5, 27, 0
  011345c  bl 0x5016e0
  0113460  nop
  0113464  addc 4, 1, 30
  0113468  ori 3, 29, 0
  011346c  clrldi 4, 4, 32
  0113470  bl 0x10c1e8
  0113474  ld 0, 544(1)
  0113478  mtlr 0
  011347c  lfd 25, 472(1)
  0113480  lfd 26, 480(1)
  0113484  lfd 27, 488(1)
  0113488  lfd 28, 496(1)
  011348c  lfd 29, 504(1)
  0113490  lfd 30, 512(1)
  0113494  lfd 31, 520(1)
  0113498  ld 27, 432(1)
  011349c  ld 28, 440(1)
  01134a0  ld 29, 448(1)
  01134a4  ld 30, 456(1)
  01134a8  ld 31, 464(1)
  01134ac  addi 1, 1, 528
  01134b0  blr

MB_compressVector:   # 0x1134c8, 0x120 bytes
  01134c8  stdu 1, -176(1)
  01134cc  mflr 0
  01134d0  std 0, 192(1)
  01134d4  std 31, 168(1)
  01134d8  ori 31, 3, 0
  01134dc  std 29, 152(1)
  01134e0  lis 3, 17
  01134e4  std 30, 160(1)
  01134e8  ori 29, 4, 0
  01134ec  addi 30, 3, 13492
  01134f0  lfs 1, 0(31)
  01134f4  lfs 2, 4(31)
  01134f8  fabs 1, 1
  01134fc  fabs 2, 2
  0113500  lfs 3, 8(31)
  0113504  lfs 5, 0(30)
  0113508  fabs 3, 3
  011350c  lfs 6, 4(30)
  0113510  fsub 4, 2, 1
  0113514  fsel 1, 4, 2, 1
  0113518  fmr 2, 6
  011351c  fsub 4, 3, 1
  0113520  fsel 1, 4, 3, 1
  0113524  fmuls 1, 1, 5
  0113528  fmuls 1, 1, 2
  011352c  bl 0x502758
  0113530  nop
  0113534  li 4, 255
  0113538  li 5, 255
  011353c  subc 4, 4, 3
  0113540  subc 5, 5, 3
  0113544  sradi 4, 4, 63
  0113548  li 6, 1
  011354c  and 4, 4, 5
  0113550  li 7, 1
  0113554  addc 3, 3, 4
  0113558  subc 4, 3, 6
  011355c  subc 5, 7, 3
  0113560  sradi 4, 4, 63
  0113564  and 4, 4, 5
  0113568  addc 3, 3, 4
  011356c  extsw 3, 3
  0113570  std 3, 128(1)
  0113574  lfs 1, 0(31)
  0113578  lfs 2, 4(31)
  011357c  lfs 3, 8(31)
  0113580  lfd 4, 128(1)
  0113584  fcfid 4, 4
  0113588  addic 3, 1, 112
  011358c  frsp 4, 4
  0113590  stfs 4, 124(1)
  0113594  lfs 5, 8(30)
  0113598  lfs 6, 12(30)
  011359c  fmuls 4, 4, 5
  01135a0  lfs 5, 16(30)
  01135a4  fdivs 4, 6, 4
  01135a8  fmadds 1, 1, 4, 5
  01135ac  fmadds 2, 2, 4, 5
  01135b0  fmadds 3, 3, 4, 5
  01135b4  stfs 1, 112(1)
  01135b8  stfs 2, 116(1)
  01135bc  stfs 3, 120(1)
  01135c0  bl 0x5007d8
  01135c4  nop
  01135c8  stw 3, 0(29)
  01135cc  ld 0, 192(1)
  01135d0  mtlr 0
  01135d4  ld 29, 152(1)
  01135d8  ld 30, 160(1)
  01135dc  ld 31, 168(1)
  01135e0  addi 1, 1, 176
  01135e4  blr

MB_decompressVector:   # 0x1135f0, 0x9c bytes
  01135f0  stdu 1, -160(1)
  01135f4  mflr 0
  01135f8  std 0, 176(1)
  01135fc  stfd 31, 152(1)
  0113600  lis 5, 17
  0113604  std 31, 144(1)
  0113608  lwz 4, 0(4)
  011360c  std 30, 136(1)
  0113610  ori 31, 3, 0
  0113614  addi 30, 5, 13800
  0113618  addic 3, 1, 112
  011361c  extsw 4, 4
  0113620  lfs 1, 0(30)
  0113624  fmr 31, 1
  0113628  bl 0x500720
  011362c  nop
  0113630  lfs 1, 4(30)
  0113634  lfs 2, 124(1)
  0113638  lfs 3, 112(1)
  011363c  lfs 4, 116(1)
  0113640  fmuls 1, 2, 1
  0113644  lfs 5, 120(1)
  0113648  fsubs 3, 3, 31
  011364c  fsubs 4, 4, 31
  0113650  stfs 2, 12(31)
  0113654  fsubs 5, 5, 31
  0113658  fmuls 2, 3, 1
  011365c  fmuls 3, 4, 1
  0113660  fmuls 1, 5, 1
  0113664  stfs 2, 0(31)
  0113668  stfs 3, 4(31)
  011366c  stfs 1, 8(31)
  0113670  ld 0, 176(1)
  0113674  mtlr 0
  0113678  lfd 31, 152(1)
  011367c  ld 30, 136(1)
  0113680  ld 31, 144(1)
  0113684  addi 1, 1, 160
  0113688  blr

DoMeander:   # 0x1136c8, 0x710 bytes
  01136c8  stdu 1, -320(1)
  01136cc  mflr 0
  01136d0  std 0, 336(1)
  01136d4  stfd 30, 304(1)
  01136d8  stfd 31, 312(1)
  01136dc  std 31, 296(1)
  01136e0  ori 31, 3, 0
  01136e4  std 30, 288(1)
  01136e8  lhz 3, 40(4)
  01136ec  ori 30, 4, 0
  01136f0  fmr 31, 1
  01136f4  extsh 3, 3
  01136f8  fmr 30, 2
  01136fc  std 29, 280(1)
  0113700  std 28, 272(1)
  0113704  cmpwi 3, 0
  0113708  bf 2, 0x1137b4
  011370c  bl 0x5c8318
  0113710  nop
  0113714  srawi 4, 3, 15
  0113718  clrlwi 4, 4, 20
  011371c  extsw 4, 4
  0113720  rlwinm 3, 3, 17, 31, 31
  0113724  std 4, 248(1)
  0113728  lis 4, 17
  011372c  addi 4, 4, 13964
  0113730  cmpwi 3, 0
  0113734  lfs 1, 0(4)
  0113738  lfs 2, 4(4)
  011373c  lfs 4, 8(4)
  0113740  lfs 5, 36(30)
  0113744  lfd 3, 248(1)
  0113748  lhz 3, 44(30)
  011374c  fcfid 3, 3
  0113750  lhz 4, 46(30)
  0113754  frsp 3, 3
  0113758  fmuls 1, 3, 1
  011375c  fmadds 3, 1, 2, 4
  0113760  bt 2, 0x113768
  0113764  fnmadds 3, 1, 2, 4
  0113768  fadds 1, 5, 3
  011376c  extsh 29, 3
  0113770  extsh 28, 4
  0113774  stfs 1, 36(30)
  0113778  bl 0x5c8318
  011377c  nop
  0113780  srawi 3, 3, 15
  0113784  subc 4, 28, 29
  0113788  clrlwi 3, 3, 17
  011378c  addic 5, 4, 1
  0113790  divw 5, 3, 5
  0113794  mullw 4, 5, 4
  0113798  addc 4, 4, 5
  011379c  li 5, 1
  01137a0  subc 3, 3, 4
  01137a4  addc 3, 3, 29
  01137a8  sth 5, 40(30)
  01137ac  sth 3, 42(30)
  01137b0  b 0x1137e4
  01137b4  addic 3, 31, 72
  01137b8  lfs 1, 36(30)
  01137bc  li 6, 0
  01137c0  lfs 2, 24(30)
  01137c4  bl 0x109ec0
  01137c8  addic 3, 30, 42
  01137cc  bl 0x4fffb4
  01137d0  nop
  01137d4  cmpwi 3, 0
  01137d8  bt 2, 0x1137e4
  01137dc  li 3, 0
  01137e0  sth 3, 40(30)
  01137e4  lis 3, 17
  01137e8  lfs 1, 72(31)
  01137ec  addi 28, 3, 13964
  01137f0  lfs 2, 12(28)
  01137f4  lfs 3, 16(28)
  01137f8  fadds 2, 1, 2
  01137fc  fsubs 5, 3, 1
  0113800  lfs 4, 20(28)
  0113804  fsubs 6, 4, 1
  0113808  addic 4, 31, 16
  011380c  addic 5, 1, 112
  0113810  ori 3, 31, 0
  0113814  fsubs 3, 3, 2
  0113818  fsub 7, 1, 5
  011381c  fsubs 4, 4, 2
  0113820  li 10, 0
  0113824  fsub 9, 2, 3
  0113828  fsel 1, 7, 5, 1
  011382c  lfs 5, 24(28)
  0113830  fsel 2, 9, 3, 2
  0113834  fsub 3, 6, 1
  0113838  fsub 8, 4, 2
  011383c  fsel 1, 3, 6, 1
  0113840  lfs 3, 28(28)
  0113844  lfs 6, 32(28)
  0113848  lfs 7, 20(31)
  011384c  fsel 2, 8, 4, 2
  0113850  fmuls 4, 1, 1
  0113854  fmuls 8, 2, 2
  0113858  fmuls 9, 4, 1
  011385c  fmuls 12, 8, 2
  0113860  fmuls 13, 4, 9
  0113864  fmadds 1, 9, 5, 1
  0113868  lfs 9, 36(28)
  011386c  lfs 11, 16(31)
  0113870  fmuls 10, 8, 12
  0113874  fmadds 2, 12, 5, 2
  0113878  fmuls 5, 4, 13
  011387c  fmadds 1, 13, 3, 1
  0113880  lfs 12, 24(31)
  0113884  lfs 13, 28(31)
  0113888  fmuls 0, 8, 10
  011388c  fmadds 2, 10, 3, 2
  0113890  fmuls 3, 4, 5
  0113894  fmadds 1, 5, 6, 1
  0113898  lfs 4, 20(30)
  011389c  fmuls 5, 8, 0
  01138a0  fmadds 2, 0, 6, 2
  01138a4  fmadds 1, 3, 9, 1
  01138a8  fmr 3, 30
  01138ac  fmadds 5, 5, 9, 2
  01138b0  lfs 2, 16(30)
  01138b4  fmadds 6, 1, 4, 7
  01138b8  fmr 1, 31
  01138bc  fmadds 5, 5, 4, 11
  01138c0  stfs 6, 116(1)
  01138c4  lfs 4, 40(28)
  01138c8  stfs 13, 124(1)
  01138cc  stfs 12, 120(1)
  01138d0  stfs 5, 112(1)
  01138d4  bl 0xffcd0
  01138d8  lis 4, 15395
  01138dc  lfs 1, 16(31)
  01138e0  lfs 2, 20(31)
  01138e4  ori 29, 3, 0
  01138e8  ori 4, 4, 55050
  01138ec  stfs 1, 128(1)
  01138f0  lfs 3, 28(31)
  01138f4  li 7, 0
  01138f8  stfs 2, 132(1)
  01138fc  addic 3, 1, 144
  0113900  stfs 3, 140(1)
  0113904  li 5, 2
  0113908  stw 4, 136(1)
  011390c  li 6, 0
  0113910  stfs 1, 144(1)
  0113914  addic 4, 1, 128
  0113918  stfs 2, 148(1)
  011391c  stfs 3, 156(1)
  0113920  lfs 1, 44(28)
  0113924  lfs 2, 24(31)
  0113928  fadds 1, 2, 1
  011392c  stfs 1, 152(1)
  0113930  bl 0x57820
  0113934  nop
  0113938  lfs 3, 48(28)
  011393c  cmpwi 3, 0
  0113940  lfs 4, 16(31)
  0113944  lfs 5, 0(30)
  0113948  lfs 6, 20(31)
  011394c  fmr 2, 3
  0113950  lfs 7, 4(30)
  0113954  lfs 8, 28(30)
  0113958  lfs 1, 32(30)
  011395c  lfs 31, 36(30)
  0113960  bt 2, 0x113970
  0113964  lis 3, 161
  0113968  addic 3, 3, 2368
  011396c  lfs 3, 40(3)
  0113970  fsubs 9, 6, 7
  0113974  fsubs 10, 4, 5
  0113978  cmpwi 29, 0
  011397c  stfs 3, 24(31)
  0113980  fmuls 9, 9, 9
  0113984  fmadds 9, 10, 10, 9
  0113988  fsqrts 9, 9
  011398c  fcmpu 1, 9, 8
  0113990  bt 2, 0x113998
  0113994  bf 5, 0x113bb8
  0113998  fsubs 1, 5, 4
  011399c  fsubs 3, 7, 6
  01139a0  lis 3, 115
  01139a4  addic 3, 3, 22784
  01139a8  fabs 6, 1
  01139ac  fabs 5, 3
  01139b0  stfs 1, 172(1)
  01139b4  stfs 3, 176(1)
  01139b8  fsubs 1, 6, 5
  01139bc  stfs 1, 180(1)
  01139c0  lwz 4, 172(1)
  01139c4  lfs 1, 172(1)
  01139c8  lwz 5, 176(1)
  01139cc  lfs 3, 176(1)
  01139d0  lwz 6, 180(1)
  01139d4  rlwinm 5, 5, 3, 29, 29
  01139d8  lfs 4, 180(1)
  01139dc  fabs 1, 1
  01139e0  rlwimi 5, 6, 2, 30, 30
  01139e4  fabs 3, 3
  01139e8  fsub 7, 4, 2
  01139ec  fsub 8, 4, 2
  01139f0  rlwimi 5, 4, 4, 28, 28
  01139f4  ori 4, 3, 0
  01139f8  rlwimi 4, 5, 2, 26, 28
  01139fc  slwi 5, 5, 2
  0113a00  clrldi 4, 4, 32
  0113a04  fsel 5, 7, 1, 5
  0113a08  lfsx 4, 3, 5
  0113a0c  fsel 3, 8, 3, 6
  0113a10  lfs 1, 4(4)
  0113a14  fcmpu 0, 5, 2
  0113a18  bt 1, 0x113a20
  0113a1c  b 0x113b40
  0113a20  fsubs 6, 3, 5
  0113a24  fadds 3, 3, 5
  0113a28  addic 3, 1, 16
  0113a2c  li 6, 2
  0113a30  addic 4, 3, 200
  0113a34  addic 5, 3, 216
  0113a38  mtctr 6
  0113a3c  fdivs 3, 6, 3
  0113a40  fmuls 5, 3, 3
  0113a44  stfs 3, 228(1)
  0113a48  stfs 3, 220(1)
  0113a4c  stfs 3, 224(1)
  0113a50  stfs 3, 216(1)
  0113a54  lfs 7, 228(1)
  0113a58  lfs 8, 220(1)
  0113a5c  lfs 9, 224(1)
  0113a60  fmuls 6, 5, 5
  0113a64  fmuls 8, 8, 5
  0113a68  fmuls 7, 7, 6
  0113a6c  fmuls 3, 6, 6
  0113a70  fmuls 6, 9, 6
  0113a74  stfs 8, 220(1)
  0113a78  fmuls 5, 7, 5
  0113a7c  stfs 6, 224(1)
  0113a80  stfs 5, 228(1)
  0113a84  lfs 5, 200(3)
  0113a88  fmuls 5, 5, 3
  0113a8c  stfs 5, 216(3)
  0113a90  lfs 5, 4(4)
  0113a94  addic 3, 3, 8
  0113a98  addic 4, 4, 8
  0113a9c  fmuls 5, 5, 3
  0113aa0  stfs 5, 4(5)
  0113aa4  addic 5, 5, 8
  0113aa8  bdnz 0x113a84
  0113aac  li 5, 4
  0113ab0  ori 3, 1, 0
  0113ab4  mtctr 5
  0113ab8  lis 4, 115
  0113abc  addic 5, 3, 216
  0113ac0  addic 4, 4, 22752
  0113ac4  ori 7, 5, 0
  0113ac8  lfs 3, 216(3)
  0113acc  lfs 5, 0(4)
  0113ad0  fmuls 3, 3, 5
  0113ad4  lfs 5, 4(4)
  0113ad8  addic 4, 4, 8
  0113adc  stfs 3, 216(3)
  0113ae0  lfs 3, 4(5)
  0113ae4  addic 3, 3, 8
  0113ae8  fmuls 3, 3, 5
  0113aec  stfs 3, 4(5)
  0113af0  addic 5, 5, 8
  0113af4  bdnz 0x113ac8
  0113af8  ori 3, 1, 0
  0113afc  mtctr 6
  0113b00  lfs 3, 216(3)
  0113b04  fadds 2, 2, 3
  0113b08  lfs 3, 4(7)
  0113b0c  addic 3, 3, 16
  0113b10  lfs 5, 8(7)
  0113b14  lfs 6, 12(7)
  0113b18  addic 7, 7, 16
  0113b1c  fadds 2, 2, 3
  0113b20  fadds 2, 2, 5
  0113b24  fadds 2, 2, 6
  0113b28  bdnz 0x113b00
  0113b2c  lis 3, 17
  0113b30  addi 3, 3, 13964
  0113b34  lfs 3, 8(3)
  0113b38  fadds 2, 2, 3
  0113b3c  fmadds 2, 2, 4, 1
  0113b40  lis 3, 17
  0113b44  stfs 2, 36(30)
  0113b48  lis 4, 114
  0113b4c  addi 3, 3, 13964
  0113b50  lfs 1, 52(3)
  0113b54  lfs 2, -3056(4)
  0113b58  fmuls 1, 2, 1
  0113b5c  fctiwz 1, 1
  0113b60  stfd 1, 248(1)
  0113b64  lfs 1, 56(3)
  0113b68  lwz 31, 252(1)
  0113b6c  fmuls 1, 2, 1
  0113b70  fctiwz 1, 1
  0113b74  stfd 1, 248(1)
  0113b78  lwz 29, 252(1)
  0113b7c  bl 0x5c8318
  0113b80  nop
  0113b84  srawi 3, 3, 15
  0113b88  subc 4, 29, 31
  0113b8c  clrlwi 3, 3, 17
  0113b90  addic 5, 4, 1
  0113b94  divw 5, 3, 5
  0113b98  mullw 4, 5, 4
  0113b9c  addc 4, 4, 5
  0113ba0  li 5, 1
  0113ba4  subc 3, 3, 4
  0113ba8  addc 3, 3, 31
  0113bac  sth 5, 40(30)
  0113bb0  sth 3, 42(30)
  0113bb4  b 0x113db0
  0113bb8  lis 3, 151
  0113bbc  addic 3, 3, -25376
  0113bc0  lfs 5, 132(3)
  0113bc4  lfs 3, 128(3)
  0113bc8  fsubs 5, 6, 5
  0113bcc  fsubs 3, 4, 3
  0113bd0  fmuls 4, 5, 5
  0113bd4  fmadds 4, 3, 3, 4
  0113bd8  fsqrts 4, 4
  0113bdc  fcmpu 0, 4, 1
  0113be0  cror 6, 1, 2
  0113be4  bt 6, 0x113db0
  0113be8  fabs 6, 3
  0113bec  stfs 3, 160(1)
  0113bf0  fabs 7, 5
  0113bf4  stfs 5, 164(1)
  0113bf8  fdivs 30, 4, 1
  0113bfc  lis 3, 115
  0113c00  addic 3, 3, 22784
  0113c04  fsubs 3, 6, 7
  0113c08  stfs 3, 168(1)
  0113c0c  lwz 4, 160(1)
  0113c10  lfs 1, 160(1)
  0113c14  lwz 5, 164(1)
  0113c18  fabs 5, 1
  0113c1c  lfs 1, 164(1)
  0113c20  lwz 6, 168(1)
  0113c24  rlwinm 5, 5, 3, 29, 29
  0113c28  lfs 3, 168(1)
  0113c2c  fabs 8, 1
  0113c30  rlwimi 5, 6, 2, 30, 30
  0113c34  fsub 4, 3, 2
  0113c38  fsub 3, 3, 2
  0113c3c  rlwimi 5, 4, 4, 28, 28
  0113c40  ori 4, 3, 0
  0113c44  rlwimi 4, 5, 2, 26, 28
  0113c48  slwi 5, 5, 2
  0113c4c  clrldi 4, 4, 32
  0113c50  fsel 5, 4, 5, 7
  0113c54  lfsx 4, 3, 5
  0113c58  lfs 1, 4(4)
  0113c5c  fsel 3, 3, 8, 6
  0113c60  fcmpu 0, 5, 2
  0113c64  bt 1, 0x113c6c
  0113c68  b 0x113d8c
  0113c6c  fsubs 6, 3, 5
  0113c70  fadds 3, 3, 5
  0113c74  addic 3, 1, 16
  0113c78  li 6, 2
  0113c7c  addic 5, 3, 184
  0113c80  addic 4, 3, 168
  0113c84  mtctr 6
  0113c88  fdivs 3, 6, 3
  0113c8c  fmuls 5, 3, 3
  0113c90  stfs 3, 196(1)
  0113c94  stfs 3, 188(1)
  0113c98  stfs 3, 192(1)
  0113c9c  stfs 3, 184(1)
  0113ca0  lfs 7, 196(1)
  0113ca4  lfs 8, 188(1)
  0113ca8  lfs 9, 192(1)
  0113cac  fmuls 6, 5, 5
  0113cb0  fmuls 8, 8, 5
  0113cb4  fmuls 7, 7, 6
  0113cb8  fmuls 3, 6, 6
  0113cbc  fmuls 6, 9, 6
  0113cc0  stfs 8, 188(1)
  0113cc4  fmuls 5, 7, 5
  0113cc8  stfs 6, 192(1)
  0113ccc  stfs 5, 196(1)
  0113cd0  lfs 5, 168(3)
  0113cd4  fmuls 5, 5, 3
  0113cd8  stfs 5, 184(3)
  0113cdc  lfs 5, 4(4)
  0113ce0  addic 4, 4, 8
  0113ce4  fmuls 5, 5, 3
  0113ce8  addic 3, 3, 8
  0113cec  stfs 5, 4(5)
  0113cf0  addic 5, 5, 8
  0113cf4  bdnz 0x113cd0
  0113cf8  li 5, 4
  0113cfc  ori 3, 1, 0
  0113d00  mtctr 5
  0113d04  lis 4, 115
  0113d08  addic 5, 3, 184
  0113d0c  addic 4, 4, 22752
  0113d10  ori 7, 5, 0
  0113d14  lfs 3, 184(3)
  0113d18  lfs 5, 0(4)
  0113d1c  fmuls 3, 3, 5
  0113d20  lfs 5, 4(4)
  0113d24  addic 4, 4, 8
  0113d28  stfs 3, 184(3)
  0113d2c  lfs 3, 4(5)
  0113d30  addic 3, 3, 8
  0113d34  fmuls 3, 3, 5
  0113d38  stfs 3, 4(5)
  0113d3c  addic 5, 5, 8
  0113d40  bdnz 0x113d14
  0113d44  ori 3, 1, 0
  0113d48  mtctr 6
  0113d4c  lfs 3, 184(3)
  0113d50  fadds 2, 2, 3
  0113d54  addic 3, 3, 16
  0113d58  lfs 3, 4(7)
  0113d5c  lfs 5, 8(7)
  0113d60  lfs 6, 12(7)
  0113d64  addic 7, 7, 16
  0113d68  fadds 2, 2, 3
  0113d6c  fadds 2, 2, 5
  0113d70  fadds 2, 2, 6
  0113d74  bdnz 0x113d4c
  0113d78  lis 3, 17
  0113d7c  addi 3, 3, 13964
  0113d80  lfs 3, 8(3)
  0113d84  fadds 2, 2, 3
  0113d88  fmadds 2, 2, 4, 1
  0113d8c  fmr 1, 2
  0113d90  fmr 2, 31
  0113d94  bl 0x5025e0
  0113d98  nop
  0113d9c  fmuls 2, 30, 1
  0113da0  fmr 1, 31
  0113da4  bl 0x502578
  0113da8  nop
  0113dac  stfs 1, 36(30)
  0113db0  ld 0, 336(1)
  0113db4  mtlr 0
  0113db8  lfd 30, 304(1)
  0113dbc  lfd 31, 312(1)
  0113dc0  ld 28, 272(1)
  0113dc4  ld 29, 280(1)
  0113dc8  ld 30, 288(1)
  0113dcc  ld 31, 296(1)
  0113dd0  addi 1, 1, 320
  0113dd4  blr

MB_RoundToDecimals:   # 0x113de0, 0xa0 bytes
  0113de0  stdu 1, -144(1)
  0113de4  mflr 0
  0113de8  std 0, 160(1)
  0113dec  stfd 31, 136(1)
  0113df0  cmpwi 4, 0
  0113df4  li 5, 1
  0113df8  bf 1, 0x113e18
  0113dfc  ori 3, 4, 0
  0113e00  sldi 4, 5, 3
  0113e04  addic 3, 3, -1
  0113e08  addc 4, 5, 4
  0113e0c  cmpwi 3, 0
  0113e10  addc 5, 5, 4
  0113e14  bt 1, 0x113e00
  0113e18  extsw 3, 5
  0113e1c  std 3, 112(1)
  0113e20  lis 3, 17
  0113e24  addi 3, 3, 15832
  0113e28  lfs 2, 0(3)
  0113e2c  lfs 3, 4(3)
  0113e30  lfd 4, 112(1)
  0113e34  fcfid 4, 4
  0113e38  frsp 31, 4
  0113e3c  fmuls 2, 31, 2
  0113e40  fdivs 2, 3, 2
  0113e44  fadds 1, 2, 1
  0113e48  fmuls 1, 1, 31
  0113e4c  bl 0x502758
  0113e50  nop
  0113e54  extsw 3, 3
  0113e58  std 3, 112(1)
  0113e5c  lfd 1, 112(1)
  0113e60  fcfid 1, 1
  0113e64  frsp 1, 1
  0113e68  fdivs 1, 1, 31
  0113e6c  ld 0, 160(1)
  0113e70  mtlr 0
  0113e74  lfd 31, 136(1)
  0113e78  addi 1, 1, 144
  0113e7c  blr

MB_MayaFrameTrigger:   # 0x113e88, 0x108 bytes
  0113e88  stdu 1, -176(1)
  0113e8c  mflr 0
  0113e90  std 0, 192(1)
  0113e94  stfd 28, 144(1)
  0113e98  stfd 29, 152(1)
  0113e9c  stfd 30, 160(1)
  0113ea0  stfd 31, 168(1)
  0113ea4  std 31, 136(1)
  0113ea8  lis 4, 17
  0113eac  ori 31, 3, 0
  0113eb0  std 30, 128(1)
  0113eb4  fmr 30, 1
  0113eb8  addi 30, 4, 16000
  0113ebc  bl 0xefe40
  0113ec0  nop
  0113ec4  li 3, 10000
  0113ec8  fmr 29, 1
  0113ecc  extsw 3, 3
  0113ed0  std 3, 112(1)
  0113ed4  lfs 2, 0(30)
  0113ed8  lfs 3, 4(30)
  0113edc  lfd 1, 112(1)
  0113ee0  fcfid 1, 1
  0113ee4  frsp 28, 1
  0113ee8  fmuls 1, 28, 2
  0113eec  fsubs 2, 29, 30
  0113ef0  fdivs 31, 3, 1
  0113ef4  fadds 1, 31, 2
  0113ef8  fmuls 1, 1, 28
  0113efc  bl 0x502758
  0113f00  nop
  0113f04  extsw 3, 3
  0113f08  std 3, 112(1)
  0113f0c  lfs 1, 88(31)
  0113f10  lfs 2, 92(31)
  0113f14  fmadds 1, 1, 2, 31
  0113f18  lfd 2, 112(1)
  0113f1c  fcfid 2, 2
  0113f20  fmuls 1, 1, 28
  0113f24  frsp 31, 2
  0113f28  fdivs 31, 31, 28
  0113f2c  bl 0x502758
  0113f30  nop
  0113f34  extsw 3, 3
  0113f38  fcmpu 0, 30, 29
  0113f3c  std 3, 112(1)
  0113f40  li 3, 0
  0113f44  lfd 1, 112(1)
  0113f48  fcfid 1, 1
  0113f4c  frsp 1, 1
  0113f50  fdivs 1, 1, 28
  0113f54  bt 1, 0x113f68
  0113f58  fcmpu 0, 31, 1
  0113f5c  cror 6, 1, 2
  0113f60  bt 6, 0x113f68
  0113f64  li 3, 1
  0113f68  ld 0, 192(1)
  0113f6c  mtlr 0
  0113f70  lfd 28, 144(1)
  0113f74  lfd 29, 152(1)
  0113f78  lfd 30, 160(1)
  0113f7c  lfd 31, 168(1)
  0113f80  ld 30, 128(1)
  0113f84  ld 31, 136(1)
  0113f88  addi 1, 1, 176
  0113f8c  blr

MB_LineCrossesSpline:   # 0x113fa0, 0x1a0 bytes
  0113fa0  stdu 1, -64(1)
  0113fa4  stfd 31, 56(1)
  0113fa8  lfs 1, 4(5)
  0113fac  lfs 10, 4(4)
  0113fb0  lfs 2, 0(5)
  0113fb4  fsubs 1, 1, 10
  0113fb8  lfs 11, 0(4)
  0113fbc  fsubs 2, 2, 11
  0113fc0  lis 4, 17
  0113fc4  addi 4, 4, 16272
  0113fc8  fmuls 3, 1, 1
  0113fcc  lfs 4, 0(4)
  0113fd0  lfs 8, 4(4)
  0113fd4  sldi 3, 3, 2
  0113fd8  lfs 9, 8(4)
  0113fdc  fmadds 3, 2, 2, 3
  0113fe0  lis 4, 165
  0113fe4  extsw 7, 3
  0113fe8  addic 4, 4, 7136
  0113fec  frsqrte 5, 3
  0113ff0  fsqrts 6, 3
  0113ff4  li 6, 1
  0113ff8  ori 3, 6, 0
  0113ffc  fmuls 7, 3, 5
  0114000  fmuls 12, 4, 5
  0114004  fnmsubs 7, 7, 5, 8
  0114008  fmadds 5, 7, 12, 5
  011400c  fmuls 7, 3, 5
  0114010  fmuls 12, 4, 5
  0114014  fnmsubs 7, 7, 5, 8
  0114018  fsub 13, 9, 6
  011401c  fmadds 5, 7, 12, 5
  0114020  fsub 7, 6, 9
  0114024  lfs 12, 12(5)
  0114028  lwzx 5, 4, 7
  011402c  fmuls 3, 3, 5
  0114030  fmuls 4, 4, 5
  0114034  fnmsubs 3, 3, 5, 8
  0114038  fmadds 3, 3, 4, 5
  011403c  fsub 4, 9, 6
  0114040  lfs 5, 20(5)
  0114044  fsubs 0, 5, 10
  0114048  lfs 5, 16(5)
  011404c  fdivs 3, 3, 6
  0114050  fsub 6, 6, 9
  0114054  fsubs 31, 5, 11
  0114058  lfs 5, 28(5)
  011405c  lwz 4, 0(5)
  0114060  cmpwi 4, 1
  0114064  fmadds 5, 12, 31, 5
  0114068  fmuls 2, 3, 2
  011406c  fmuls 1, 3, 1
  0114070  fsel 3, 4, 9, 2
  0114074  fsel 4, 13, 9, 1
  0114078  fsel 2, 7, 3, 2
  011407c  fsel 1, 6, 4, 1
  0114080  fmuls 3, 2, 0
  0114084  fmuls 4, 1, 0
  0114088  fneg 6, 3
  011408c  fmadds 3, 2, 31, 4
  0114090  fmadds 4, 1, 31, 6
  0114094  bf 1, 0x114130
  0114098  addic 5, 5, 16
  011409c  lfs 6, 20(5)
  01140a0  lfs 7, 16(5)
  01140a4  fcmpu 0, 5, 9
  01140a8  fsubs 6, 6, 10
  01140ac  fsubs 13, 7, 11
  01140b0  lfs 7, 28(5)
  01140b4  fmuls 5, 2, 6
  01140b8  fmuls 6, 1, 6
  01140bc  fmadds 7, 12, 13, 7
  01140c0  fneg 0, 5
  01140c4  fmadds 5, 2, 13, 6
  01140c8  fcmpu 1, 7, 9
  01140cc  fmadds 6, 1, 13, 0
  01140d0  bf 2, 0x1140d8
  01140d4  bt 6, 0x114114
  01140d8  fmuls 13, 6, 4
  01140dc  fcmpu 0, 13, 9
  01140e0  cror 6, 1, 2
  01140e4  bt 6, 0x114114
  01140e8  fsubs 3, 3, 5
  01140ec  fsubs 4, 4, 6
  01140f0  fdivs 3, 3, 4
  01140f4  fmuls 3, 3, 6
  01140f8  fneg 3, 3
  01140fc  fadds 3, 3, 5
  0114100  fcmpu 1, 3, 8
  0114104  fcmpu 0, 3, 9
  0114108  crnand 2, 1, 4
  011410c  bt 2, 0x114114
  0114110  b 0x114134
  0114114  addic 6, 6, 1
  0114118  fmr 3, 5
  011411c  addic 5, 5, 16
  0114120  cmpw 6, 4
  0114124  fmr 4, 6
  0114128  fmr 5, 7
  011412c  bt 0, 0x11409c
  0114130  li 3, 0
  0114134  lfd 31, 56(1)
  0114138  addi 1, 1, 64
  011413c  blr

MB_SplineCrossCheck:   # 0x114148, 0x240 bytes
  0114148  stdu 1, -272(1)
  011414c  mflr 0
  0114150  std 0, 288(1)
  0114154  stfd 30, 256(1)
  0114158  stfd 31, 264(1)
  011415c  lis 5, 165
  0114160  sldi 6, 6, 2
  0114164  std 20, 160(1)
  0114168  fmr 31, 1
  011416c  addic 20, 5, 7136
  0114170  std 21, 168(1)
  0114174  extsw 5, 6
  0114178  std 29, 232(1)
  011417c  std 24, 192(1)
  0114180  li 21, 0
  0114184  ori 29, 3, 0
  0114188  std 30, 240(1)
  011418c  ori 24, 21, 0
  0114190  std 19, 152(1)
  0114194  ori 30, 4, 0
  0114198  lwzx 20, 20, 5
  011419c  std 31, 248(1)
  01141a0  ori 19, 24, 0
  01141a4  ori 31, 7, 0
  01141a8  lwz 3, 0(20)
  01141ac  std 28, 224(1)
  01141b0  std 27, 216(1)
  01141b4  std 26, 208(1)
  01141b8  std 25, 200(1)
  01141bc  std 23, 184(1)
  01141c0  std 22, 176(1)
  01141c4  cmpwi 3, 0
  01141c8  bf 1, 0x114338
  01141cc  lis 3, 17
  01141d0  ori 26, 20, 0
  01141d4  addi 3, 3, 16704
  01141d8  addic 28, 26, 16
  01141dc  li 27, 1
  01141e0  lfs 30, 0(3)
  01141e4  ori 23, 24, 0
  01141e8  cmpwi 30, 0
  01141ec  ori 22, 23, 0
  01141f0  bf 1, 0x114314
  01141f4  ori 25, 29, 0
  01141f8  fcmpu 0, 31, 30
  01141fc  bt 2, 0x1142dc
  0114200  lfs 1, 4(31)
  0114204  lfs 2, 20(26)
  0114208  lfs 3, 0(31)
  011420c  fsubs 2, 1, 2
  0114210  lfs 4, 16(26)
  0114214  fsubs 4, 3, 4
  0114218  lfs 6, 8(31)
  011421c  lfs 7, 12(31)
  0114220  stfs 6, 120(1)
  0114224  stfs 7, 124(1)
  0114228  stfs 6, 136(1)
  011422c  fmuls 5, 2, 2
  0114230  stfs 7, 140(1)
  0114234  addic 4, 1, 112
  0114238  ori 5, 28, 0
  011423c  fneg 5, 5
  0114240  fneg 5, 5
  0114244  fmadds 5, 4, 4, 5
  0114248  fsqrts 5, 5
  011424c  fdivs 6, 31, 5
  0114250  fsub 7, 30, 5
  0114254  fsub 8, 30, 5
  0114258  fsub 9, 5, 30
  011425c  fsub 5, 5, 30
  0114260  fmuls 2, 2, 6
  0114264  fmuls 4, 4, 6
  0114268  fneg 2, 2
  011426c  fsel 6, 7, 30, 4
  0114270  fsel 7, 8, 30, 2
  0114274  fsel 4, 9, 6, 4
  0114278  fsel 2, 5, 7, 2
  011427c  fsubs 5, 1, 4
  0114280  fadds 1, 1, 4
  0114284  fsubs 4, 3, 2
  0114288  fadds 2, 3, 2
  011428c  stfs 5, 116(1)
  0114290  stfs 1, 132(1)
  0114294  stfs 4, 112(1)
  0114298  stfs 2, 128(1)
  011429c  lwz 3, 0(25)
  01142a0  extsw 3, 3
  01142a4  bl 0x113fa0
  01142a8  cmpwi 3, 0
  01142ac  bt 2, 0x1142b8
  01142b0  ori 22, 27, 0
  01142b4  b 0x1142fc
  01142b8  lwz 3, 0(25)
  01142bc  addic 4, 1, 128
  01142c0  ori 5, 28, 0
  01142c4  extsw 3, 3
  01142c8  bl 0x113fa0
  01142cc  cmpwi 3, 0
  01142d0  bt 2, 0x1142fc
  01142d4  ori 22, 27, 0
  01142d8  b 0x1142fc
  01142dc  lwz 3, 0(25)
  01142e0  ori 4, 31, 0
  01142e4  ori 5, 28, 0
  01142e8  extsw 3, 3
  01142ec  bl 0x113fa0
  01142f0  cmpwi 3, 0
  01142f4  bt 2, 0x1142fc
  01142f8  ori 22, 27, 0
  01142fc  cmpwi 22, 0
  0114300  bf 2, 0x114320
  0114304  addic 23, 23, 1
  0114308  addic 25, 25, 4
  011430c  cmpw 23, 30
  0114310  bt 0, 0x1141f8
  0114314  slw 3, 27, 21
  0114318  or 19, 19, 3
  011431c  extsw 19, 19
  0114320  addic 21, 21, 1
  0114324  lwz 3, 0(20)
  0114328  addic 28, 28, 16
  011432c  cmpw 21, 3
  0114330  addic 26, 26, 16
  0114334  bt 0, 0x1141e4
  0114338  ori 3, 19, 0
  011433c  ld 0, 288(1)
  0114340  mtlr 0
  0114344  lfd 30, 256(1)
  0114348  lfd 31, 264(1)
  011434c  ld 19, 152(1)
  0114350  ld 20, 160(1)
  0114354  ld 21, 168(1)
  0114358  ld 22, 176(1)
  011435c  ld 23, 184(1)
  0114360  ld 24, 192(1)
  0114364  ld 25, 200(1)
  0114368  ld 26, 208(1)
  011436c  ld 27, 216(1)
  0114370  ld 28, 224(1)
  0114374  ld 29, 232(1)
  0114378  ld 30, 240(1)
  011437c  ld 31, 248(1)
  0114380  addi 1, 1, 272
  0114384  blr

MB_SplineSegmentsReachable:   # 0x114388, 0x84 bytes
  0114388  ori 6, 5, 0
  011438c  lis 5, 165
  0114390  sldi 3, 3, 2
  0114394  addic 7, 5, 7136
  0114398  extsw 9, 3
  011439c  li 8, 0
  01143a0  li 3, 1
  01143a4  ori 5, 8, 0
  01143a8  lwzx 7, 7, 9
  01143ac  and 9, 6, 4
  01143b0  cmpwi 9, 0
  01143b4  bt 2, 0x1143c0
  01143b8  extsw 3, 9
  01143bc  b 0x114408
  01143c0  ori 11, 6, 0
  01143c4  ori 10, 5, 0
  01143c8  ori 9, 7, 0
  01143cc  slw 12, 3, 10
  01143d0  and 12, 12, 6
  01143d4  cmpwi 12, 0
  01143d8  bt 2, 0x1143e4
  01143dc  lwz 12, 28(9)
  01143e0  or 11, 11, 12
  01143e4  addic 10, 10, 1
  01143e8  addic 9, 9, 16
  01143ec  cmpwi 10, 32
  01143f0  bt 0, 0x1143cc
  01143f4  addic 8, 8, 1
  01143f8  ori 6, 11, 0
  01143fc  cmpwi 8, 32
  0114400  bt 0, 0x1143ac
  0114404  ori 3, 5, 0
  0114408  blr

MB_SplineMarkCrossings:   # 0x11440c, 0x1c0 bytes
  011440c  stdu 1, -240(1)
  0114410  mflr 0
  0114414  std 0, 256(1)
  0114418  lis 6, 165
  011441c  std 29, 216(1)
  0114420  sldi 5, 5, 2
  0114424  addic 29, 6, 7136
  0114428  std 31, 232(1)
  011442c  extsw 5, 5
  0114430  ori 31, 3, 0
  0114434  std 30, 224(1)
  0114438  li 3, 0
  011443c  std 25, 184(1)
  0114440  ori 30, 4, 0
  0114444  ori 25, 3, 0
  0114448  lwzx 29, 29, 5
  011444c  lwz 5, 0(29)
  0114450  std 28, 208(1)
  0114454  std 27, 200(1)
  0114458  std 26, 192(1)
  011445c  std 24, 176(1)
  0114460  std 23, 168(1)
  0114464  std 22, 160(1)
  0114468  std 21, 152(1)
  011446c  std 20, 144(1)
  0114470  std 19, 136(1)
  0114474  std 18, 128(1)
  0114478  std 17, 120(1)
  011447c  std 16, 112(1)
  0114480  cmpwi 5, 0
  0114484  bf 1, 0x1144a4
  0114488  ori 4, 29, 0
  011448c  addic 3, 3, 1
  0114490  lwz 5, 0(29)
  0114494  stw 25, 28(4)
  0114498  cmpw 3, 5
  011449c  addic 4, 4, 16
  01144a0  bt 0, 0x11448c
  01144a4  cmpwi 5, 0
  01144a8  ori 3, 25, 0
  01144ac  bf 1, 0x11457c
  01144b0  ori 20, 29, 0
  01144b4  ori 4, 5, 0
  01144b8  addic 16, 20, 16
  01144bc  addic 19, 20, 28
  01144c0  li 24, 1
  01144c4  ori 17, 16, 0
  01144c8  addic 28, 3, 1
  01144cc  ori 6, 4, 0
  01144d0  ori 26, 28, 0
  01144d4  ori 4, 5, 0
  01144d8  cmpw 26, 6
  01144dc  addic 17, 17, 16
  01144e0  bf 0, 0x114564
  01144e4  slw 23, 24, 3
  01144e8  addic 22, 20, 16
  01144ec  ori 18, 17, 0
  01144f0  cmpwi 30, 0
  01144f4  ori 27, 25, 0
  01144f8  bf 1, 0x11452c
  01144fc  ori 21, 31, 0
  0114500  lwz 3, 0(21)
  0114504  ori 4, 16, 0
  0114508  extsw 3, 3
  011450c  ori 5, 18, 0
  0114510  bl 0x113fa0
  0114514  cmpwi 3, 0
  0114518  bf 2, 0x114548
  011451c  addic 27, 27, 1
  0114520  addic 21, 21, 4
  0114524  cmpw 27, 30
  0114528  bt 0, 0x114500
  011452c  slw 3, 24, 28
  0114530  lwz 4, 0(19)
  0114534  or 3, 4, 3
  0114538  stw 3, 0(19)
  011453c  lwz 3, 28(22)
  0114540  or 3, 3, 23
  0114544  stw 3, 28(22)
  0114548  lwz 5, 0(29)
  011454c  addic 28, 28, 1
  0114550  addic 22, 22, 16
  0114554  ori 4, 5, 0
  0114558  addic 18, 18, 16
  011455c  cmpw 28, 4
  0114560  bt 0, 0x1144f0
  0114564  ori 3, 26, 0
  0114568  addic 19, 19, 16
  011456c  cmpw 3, 4
  0114570  addic 20, 20, 16
  0114574  addic 16, 16, 16
  0114578  bt 0, 0x1144c8
  011457c  ld 0, 256(1)
  0114580  mtlr 0
  0114584  ld 16, 112(1)
  0114588  ld 17, 120(1)
  011458c  ld 18, 128(1)
  0114590  ld 19, 136(1)
  0114594  ld 20, 144(1)
  0114598  ld 21, 152(1)
  011459c  ld 22, 160(1)
  01145a0  ld 23, 168(1)
  01145a4  ld 24, 176(1)
  01145a8  ld 25, 184(1)
  01145ac  ld 26, 192(1)
  01145b0  ld 27, 200(1)
  01145b4  ld 28, 208(1)
  01145b8  ld 29, 216(1)
  01145bc  ld 30, 224(1)
  01145c0  ld 31, 232(1)
  01145c4  addi 1, 1, 240
  01145c8  blr

MB_PushOutOfSplineWalls:   # 0x1145d8, 0x274 bytes
  01145d8  stdu 1, -96(1)
  01145dc  stfd 27, 56(1)
  01145e0  stfd 28, 64(1)
  01145e4  stfd 29, 72(1)
  01145e8  stfd 30, 80(1)
  01145ec  stfd 31, 88(1)
  01145f0  ori 8, 5, 0
  01145f4  lis 4, 165
  01145f8  sldi 3, 3, 2
  01145fc  addic 4, 4, 7136
  0114600  extsw 3, 3
  0114604  lfs 12, 0(8)
  0114608  lfs 11, 4(8)
  011460c  li 5, 0
  0114610  ori 7, 5, 0
  0114614  lwzx 4, 4, 3
  0114618  lfs 10, 8(8)
  011461c  ori 3, 4, 0
  0114620  lfs 9, 12(8)
  0114624  lwz 8, 0(3)
  0114628  addic 8, 8, -1
  011462c  cmpwi 8, 0
  0114630  bf 1, 0x11482c
  0114634  lis 8, 17
  0114638  ori 10, 5, 0
  011463c  addi 9, 8, 17868
  0114640  li 8, 1
  0114644  lfs 4, 0(9)
  0114648  lfs 3, 4(9)
  011464c  lfs 2, 8(9)
  0114650  addc 9, 3, 10
  0114654  clrldi 9, 9, 32
  0114658  lwz 11, 28(9)
  011465c  cmpwi 11, 0
  0114660  bf 2, 0x114674
  0114664  lwz 11, 44(9)
  0114668  cmpwi 11, 0
  011466c  bt 2, 0x1147fc
  0114670  ori 3, 4, 0
  0114674  lfs 6, 20(9)
  0114678  lfs 29, 36(9)
  011467c  lfs 8, 16(9)
  0114680  fsubs 29, 29, 6
  0114684  lfs 28, 32(9)
  0114688  fsubs 28, 28, 8
  011468c  fmr 0, 4
  0114690  fsubs 7, 12, 8
  0114694  fsubs 5, 11, 6
  0114698  fmuls 30, 29, 29
  011469c  fmr 13, 0
  01146a0  fmadds 30, 28, 28, 30
  01146a4  fsqrts 31, 30
  01146a8  fcmpu 0, 31, 13
  01146ac  bt 2, 0x1146ec
  01146b0  frsqrte 13, 30
  01146b4  fmuls 0, 30, 13
  01146b8  fmuls 27, 13, 3
  01146bc  fnmsubs 0, 0, 13, 2
  01146c0  fmadds 13, 0, 27, 13
  01146c4  fmuls 0, 30, 13
  01146c8  fmuls 27, 13, 3
  01146cc  fnmsubs 0, 0, 13, 2
  01146d0  fmadds 13, 0, 27, 13
  01146d4  fmuls 0, 30, 13
  01146d8  fmuls 30, 13, 3
  01146dc  fnmsubs 0, 0, 13, 2
  01146e0  fmadds 13, 0, 30, 13
  01146e4  fmuls 0, 13, 28
  01146e8  fmuls 13, 13, 29
  01146ec  fmuls 30, 7, 13
  01146f0  fmsubs 30, 5, 0, 30
  01146f4  fabs 30, 30
  01146f8  fcmpu 0, 30, 1
  01146fc  bt 1, 0x1147fc
  0114700  fmuls 30, 5, 13
  0114704  fmr 29, 31
  0114708  fmadds 31, 7, 0, 30
  011470c  fcmpu 0, 31, 29
  0114710  fcmpu 1, 31, 4
  0114714  bt 1, 0x11471c
  0114718  bf 4, 0x114770
  011471c  fmuls 13, 5, 5
  0114720  fmadds 13, 7, 7, 13
  0114724  fsqrts 13, 13
  0114728  fcmpu 0, 13, 1
  011472c  cror 6, 1, 2
  0114730  bt 6, 0x1147fc
  0114734  fdivs 11, 1, 13
  0114738  ori 7, 8, 0
  011473c  fsub 12, 4, 13
  0114740  fsub 0, 4, 13
  0114744  fsub 31, 13, 4
  0114748  fsub 13, 13, 4
  011474c  fmuls 5, 5, 11
  0114750  fmuls 7, 7, 11
  0114754  fsel 11, 12, 4, 5
  0114758  fsel 12, 0, 4, 7
  011475c  fsel 11, 31, 11, 5
  0114760  fsel 12, 13, 12, 7
  0114764  fadds 11, 11, 6
  0114768  fadds 12, 12, 8
  011476c  b 0x1147fc
  0114770  fmuls 11, 13, 13
  0114774  fmadds 11, 0, 0, 11
  0114778  fsqrts 11, 11
  011477c  ori 7, 8, 0
  0114780  fdivs 12, 31, 11
  0114784  fsub 31, 4, 11
  0114788  fsub 30, 11, 4
  011478c  fsub 29, 4, 11
  0114790  fsub 11, 11, 4
  0114794  fmuls 13, 12, 13
  0114798  fmuls 12, 12, 0
  011479c  fsel 0, 31, 4, 13
  01147a0  fsel 31, 29, 4, 12
  01147a4  fsel 13, 30, 0, 13
  01147a8  fsel 11, 11, 31, 12
  01147ac  fsubs 5, 5, 13
  01147b0  fsubs 7, 7, 11
  01147b4  fmuls 12, 5, 5
  01147b8  fmadds 12, 7, 7, 12
  01147bc  fsqrts 12, 12
  01147c0  fdivs 0, 1, 12
  01147c4  fsub 31, 4, 12
  01147c8  fsub 30, 4, 12
  01147cc  fsub 29, 12, 4
  01147d0  fsub 12, 12, 4
  01147d4  fmuls 5, 0, 5
  01147d8  fmuls 7, 0, 7
  01147dc  fsel 0, 31, 4, 5
  01147e0  fsel 31, 30, 4, 7
  01147e4  fsel 5, 29, 0, 5
  01147e8  fsel 7, 12, 31, 7
  01147ec  fadds 5, 13, 5
  01147f0  fadds 12, 11, 7
  01147f4  fadds 11, 5, 6
  01147f8  fadds 12, 12, 8
  01147fc  lwz 9, 0(3)
  0114800  addic 5, 5, 1
  0114804  addic 9, 9, -1
  0114808  addic 10, 10, 16
  011480c  cmpw 5, 9
  0114810  bt 0, 0x114650
  0114814  cmpwi 7, 0
  0114818  bt 2, 0x11482c
  011481c  stfs 12, 0(6)
  0114820  stfs 11, 4(6)
  0114824  stfs 10, 8(6)
  0114828  stfs 9, 12(6)
  011482c  ori 3, 7, 0
  0114830  lfd 27, 56(1)
  0114834  lfd 28, 64(1)
  0114838  lfd 29, 72(1)
  011483c  lfd 30, 80(1)
  0114840  lfd 31, 88(1)
  0114844  addi 1, 1, 96
  0114848  blr

MB_CollideSplineWall:   # 0x114858, 0x4f8 bytes
  0114858  stdu 1, -240(1)
  011485c  stfd 14, 96(1)
  0114860  stfd 15, 104(1)
  0114864  stfd 16, 112(1)
  0114868  stfd 17, 120(1)
  011486c  stfd 18, 128(1)
  0114870  stfd 19, 136(1)
  0114874  stfd 20, 144(1)
  0114878  stfd 21, 152(1)
  011487c  stfd 22, 160(1)
  0114880  stfd 23, 168(1)
  0114884  stfd 24, 176(1)
  0114888  stfd 25, 184(1)
  011488c  stfd 26, 192(1)
  0114890  stfd 27, 200(1)
  0114894  stfd 28, 208(1)
  0114898  stfd 29, 216(1)
  011489c  stfd 30, 224(1)
  01148a0  stfd 31, 232(1)
  01148a4  lis 4, 151
  01148a8  lfs 22, 4(5)
  01148ac  lfs 2, 0(5)
  01148b0  sldi 3, 3, 2
  01148b4  addic 4, 4, -25376
  01148b8  lfs 23, 8(5)
  01148bc  lfs 3, 12(5)
  01148c0  extsw 3, 3
  01148c4  lis 5, 165
  01148c8  stfs 3, 84(1)
  01148cc  addic 5, 5, 7136
  01148d0  lfs 25, 660(4)
  01148d4  lfs 24, 656(4)
  01148d8  fmuls 3, 22, 25
  01148dc  lfs 26, 664(4)
  01148e0  stfs 2, 48(1)
  01148e4  lwzx 4, 5, 3
  01148e8  li 5, 0
  01148ec  ori 3, 5, 0
  01148f0  lwz 7, 0(4)
  01148f4  fmadds 2, 2, 24, 3
  01148f8  addic 7, 7, -1
  01148fc  cmpwi 7, 0
  0114900  fmadds 2, 23, 26, 2
  0114904  stfs 2, 80(1)
  0114908  bf 1, 0x114d00
  011490c  fmuls 2, 25, 25
  0114910  lis 8, 17
  0114914  addi 8, 8, 18508
  0114918  lfs 27, 4(8)
  011491c  lfs 28, 8(8)
  0114920  fmadds 2, 24, 24, 2
  0114924  fmadds 2, 26, 26, 2
  0114928  frsqrte 3, 2
  011492c  fsqrts 29, 2
  0114930  fmuls 4, 2, 3
  0114934  fmuls 5, 27, 3
  0114938  fnmsubs 4, 4, 3, 28
  011493c  fmadds 4, 4, 5, 3
  0114940  lfs 3, 0(8)
  0114944  li 8, 1
  0114948  fmuls 5, 2, 4
  011494c  fmuls 6, 27, 4
  0114950  fnmsubs 5, 5, 4, 28
  0114954  fmadds 4, 5, 6, 4
  0114958  fmuls 2, 2, 4
  011495c  fmuls 5, 27, 4
  0114960  fnmsubs 2, 2, 4, 28
  0114964  fmadds 2, 2, 5, 4
  0114968  fmuls 4, 2, 26
  011496c  fmuls 5, 2, 25
  0114970  fmuls 2, 2, 24
  0114974  stfd 4, 72(1)
  0114978  stfd 5, 64(1)
  011497c  stfd 2, 56(1)
  0114980  lwz 9, 28(4)
  0114984  cmpwi 9, 0
  0114988  bf 2, 0x114998
  011498c  lwz 9, 44(4)
  0114990  cmpwi 9, 0
  0114994  bt 2, 0x114c70
  0114998  lfs 31, 20(4)
  011499c  lfs 2, 36(4)
  01149a0  lfs 30, 16(4)
  01149a4  fsubs 5, 2, 31
  01149a8  lfs 2, 32(4)
  01149ac  lfs 0, 24(4)
  01149b0  fsubs 6, 2, 30
  01149b4  lfs 2, 40(4)
  01149b8  fsub 9, 3, 29
  01149bc  lfd 7, 64(1)
  01149c0  fsubs 4, 2, 0
  01149c4  lfd 8, 56(1)
  01149c8  fsub 13, 3, 29
  01149cc  lfd 10, 72(1)
  01149d0  fsub 11, 29, 3
  01149d4  fmuls 2, 5, 25
  01149d8  fsub 12, 3, 29
  01149dc  fsub 20, 29, 3
  01149e0  fsub 21, 29, 3
  01149e4  fsubs 17, 22, 31
  01149e8  fsub 16, 29, 3
  01149ec  fmadds 2, 6, 24, 2
  01149f0  fsub 15, 29, 3
  01149f4  fmadds 2, 4, 26, 2
  01149f8  fmuls 19, 2, 7
  01149fc  fmuls 18, 2, 8
  0114a00  fmuls 2, 2, 10
  0114a04  fsel 9, 9, 3, 19
  0114a08  fsel 12, 12, 3, 18
  0114a0c  fsel 13, 13, 3, 2
  0114a10  fsel 9, 11, 9, 19
  0114a14  fsel 11, 21, 12, 18
  0114a18  fsel 2, 20, 13, 2
  0114a1c  lfs 12, 48(1)
  0114a20  fmuls 13, 17, 25
  0114a24  fsubs 12, 12, 30
  0114a28  fsub 21, 3, 29
  0114a2c  fsub 20, 3, 29
  0114a30  fsubs 5, 5, 9
  0114a34  fsubs 6, 6, 11
  0114a38  fsubs 4, 4, 2
  0114a3c  fsubs 11, 23, 0
  0114a40  fmadds 9, 12, 24, 13
  0114a44  fsub 18, 29, 3
  0114a48  fmuls 2, 5, 5
  0114a4c  fmadds 9, 11, 26, 9
  0114a50  fmadds 2, 6, 6, 2
  0114a54  fmuls 10, 9, 10
  0114a58  fmuls 19, 9, 8
  0114a5c  fmuls 7, 9, 7
  0114a60  fsub 8, 3, 29
  0114a64  fmadds 2, 4, 4, 2
  0114a68  fmr 9, 3
  0114a6c  fsel 21, 21, 3, 10
  0114a70  fsel 20, 20, 3, 7
  0114a74  fsel 14, 8, 3, 19
  0114a78  fsqrts 13, 2
  0114a7c  fmr 8, 9
  0114a80  fsel 10, 18, 21, 10
  0114a84  fsel 21, 16, 20, 7
  0114a88  fsel 20, 15, 14, 19
  0114a8c  fmr 7, 8
  0114a90  fsubs 10, 11, 10
  0114a94  fsubs 11, 17, 21
  0114a98  fsubs 12, 12, 20
  0114a9c  fcmpu 0, 13, 7
  0114aa0  bt 2, 0x114ae4
  0114aa4  frsqrte 7, 2
  0114aa8  fmuls 8, 2, 7
  0114aac  fmuls 9, 7, 27
  0114ab0  fnmsubs 8, 8, 7, 28
  0114ab4  fmadds 7, 8, 9, 7
  0114ab8  fmuls 8, 2, 7
  0114abc  fmuls 9, 7, 27
  0114ac0  fnmsubs 8, 8, 7, 28
  0114ac4  fmadds 7, 8, 9, 7
  0114ac8  fmuls 2, 2, 7
  0114acc  fmuls 8, 7, 27
  0114ad0  fnmsubs 2, 2, 7, 28
  0114ad4  fmadds 7, 2, 8, 7
  0114ad8  fmuls 9, 7, 6
  0114adc  fmuls 8, 7, 5
  0114ae0  fmuls 7, 7, 4
  0114ae4  fmuls 2, 10, 9
  0114ae8  fmuls 4, 11, 7
  0114aec  fmuls 5, 12, 8
  0114af0  fmsubs 2, 12, 7, 2
  0114af4  fmsubs 4, 10, 8, 4
  0114af8  fmsubs 5, 11, 9, 5
  0114afc  fmuls 2, 2, 25
  0114b00  fmadds 2, 4, 24, 2
  0114b04  fmadds 2, 5, 26, 2
  0114b08  fabs 2, 2
  0114b0c  fcmpu 0, 2, 1
  0114b10  bt 1, 0x114c70
  0114b14  fmuls 2, 11, 8
  0114b18  fmadds 2, 12, 9, 2
  0114b1c  fmadds 2, 10, 7, 2
  0114b20  fcmpu 0, 2, 13
  0114b24  fcmpu 1, 2, 3
  0114b28  bt 1, 0x114b30
  0114b2c  bf 4, 0x114ba4
  0114b30  fmuls 2, 11, 11
  0114b34  fmadds 2, 12, 12, 2
  0114b38  fmadds 2, 10, 10, 2
  0114b3c  fsqrts 2, 2
  0114b40  fcmpu 0, 2, 1
  0114b44  cror 6, 1, 2
  0114b48  bt 6, 0x114c70
  0114b4c  fdivs 4, 1, 2
  0114b50  ori 3, 8, 0
  0114b54  fsub 5, 3, 2
  0114b58  fsub 7, 3, 2
  0114b5c  fsub 8, 2, 3
  0114b60  fsub 6, 3, 2
  0114b64  fsub 9, 2, 3
  0114b68  fsub 2, 2, 3
  0114b6c  fmuls 12, 12, 4
  0114b70  fmuls 10, 10, 4
  0114b74  fmuls 4, 11, 4
  0114b78  fsel 5, 5, 3, 12
  0114b7c  fsel 6, 6, 3, 10
  0114b80  fsel 7, 7, 3, 4
  0114b84  fsel 5, 8, 5, 12
  0114b88  fsel 23, 9, 6, 10
  0114b8c  fsel 22, 2, 7, 4
  0114b90  fadds 2, 5, 30
  0114b94  fadds 23, 23, 0
  0114b98  fadds 22, 22, 31
  0114b9c  stfs 2, 48(1)
  0114ba0  b 0x114c70
  0114ba4  fmuls 4, 8, 8
  0114ba8  fmadds 4, 9, 9, 4
  0114bac  fmadds 4, 7, 7, 4
  0114bb0  fsqrts 4, 4
  0114bb4  ori 3, 8, 0
  0114bb8  fdivs 2, 2, 4
  0114bbc  fsub 5, 3, 4
  0114bc0  fsub 13, 3, 4
  0114bc4  fsub 23, 3, 4
  0114bc8  fsub 6, 4, 3
  0114bcc  fsub 22, 4, 3
  0114bd0  fsub 4, 4, 3
  0114bd4  fmuls 8, 2, 8
  0114bd8  fmuls 9, 2, 9
  0114bdc  fmuls 2, 2, 7
  0114be0  fsel 5, 5, 3, 8
  0114be4  fsel 7, 13, 3, 9
  0114be8  fsel 13, 23, 3, 2
  0114bec  fsel 5, 6, 5, 8
  0114bf0  fsel 6, 22, 7, 9
  0114bf4  fsel 2, 4, 13, 2
  0114bf8  fsubs 4, 11, 5
  0114bfc  fsubs 7, 12, 6
  0114c00  fsubs 8, 10, 2
  0114c04  fmuls 9, 4, 4
  0114c08  fmadds 9, 7, 7, 9
  0114c0c  fmadds 9, 8, 8, 9
  0114c10  fsqrts 9, 9
  0114c14  fdivs 10, 1, 9
  0114c18  fsub 11, 3, 9
  0114c1c  fsub 12, 3, 9
  0114c20  fsub 23, 9, 3
  0114c24  fsub 13, 3, 9
  0114c28  fsub 22, 9, 3
  0114c2c  fsub 9, 9, 3
  0114c30  fmuls 7, 10, 7
  0114c34  fmuls 8, 10, 8
  0114c38  fmuls 4, 10, 4
  0114c3c  fsel 10, 11, 3, 7
  0114c40  fsel 11, 12, 3, 8
  0114c44  fsel 12, 13, 3, 4
  0114c48  fsel 7, 23, 10, 7
  0114c4c  fsel 8, 22, 11, 8
  0114c50  fsel 4, 9, 12, 4
  0114c54  fadds 6, 6, 7
  0114c58  fadds 23, 2, 8
  0114c5c  fadds 22, 5, 4
  0114c60  fadds 2, 6, 30
  0114c64  fadds 23, 23, 0
  0114c68  fadds 22, 22, 31
  0114c6c  stfs 2, 48(1)
  0114c70  addic 5, 5, 1
  0114c74  addic 4, 4, 16
  0114c78  cmpw 5, 7
  0114c7c  bt 0, 0x114980
  0114c80  cmpwi 3, 0
  0114c84  bt 2, 0x114d00
  0114c88  fmuls 1, 22, 25
  0114c8c  lfs 2, 48(1)
  0114c90  lfs 4, 80(1)
  0114c94  fsub 5, 3, 29
  0114c98  fsub 6, 3, 29
  0114c9c  fsub 8, 29, 3
  0114ca0  fsub 7, 29, 3
  0114ca4  fmadds 1, 2, 24, 1
  0114ca8  fsub 9, 29, 3
  0114cac  fmadds 1, 23, 26, 1
  0114cb0  fsubs 1, 4, 1
  0114cb4  fsub 4, 3, 29
  0114cb8  fdivs 1, 1, 29
  0114cbc  fmuls 10, 24, 1
  0114cc0  fmuls 11, 26, 1
  0114cc4  fmuls 1, 25, 1
  0114cc8  fsel 5, 5, 3, 10
  0114ccc  fsel 4, 4, 3, 11
  0114cd0  fsel 3, 6, 3, 1
  0114cd4  fsel 5, 8, 5, 10
  0114cd8  fsel 4, 7, 4, 11
  0114cdc  fsel 1, 9, 3, 1
  0114ce0  fadds 2, 2, 5
  0114ce4  fadds 3, 23, 4
  0114ce8  fadds 1, 22, 1
  0114cec  stfs 2, 0(6)
  0114cf0  lfs 2, 84(1)
  0114cf4  stfs 1, 4(6)
  0114cf8  stfs 3, 8(6)
  0114cfc  stfs 2, 12(6)
  0114d00  lfd 14, 96(1)
  0114d04  lfd 15, 104(1)
  0114d08  lfd 16, 112(1)
  0114d0c  lfd 17, 120(1)
  0114d10  lfd 18, 128(1)
  0114d14  lfd 19, 136(1)
  0114d18  lfd 20, 144(1)
  0114d1c  lfd 21, 152(1)
  0114d20  lfd 22, 160(1)
  0114d24  lfd 23, 168(1)
  0114d28  lfd 24, 176(1)
  0114d2c  lfd 25, 184(1)
  0114d30  lfd 26, 192(1)
  0114d34  lfd 27, 200(1)
  0114d38  lfd 28, 208(1)
  0114d3c  lfd 29, 216(1)
  0114d40  lfd 30, 224(1)
  0114d44  lfd 31, 232(1)
  0114d48  addi 1, 1, 240
  0114d4c  blr

MB_SplineFindRouteNode:   # 0x114d58, 0x398 bytes
  0114d58  stdu 1, -256(1)
  0114d5c  mflr 0
  0114d60  std 0, 272(1)
  0114d64  stfd 30, 240(1)
  0114d68  stfd 31, 248(1)
  0114d6c  std 24, 176(1)
  0114d70  li 24, 0
  0114d74  cmpwi 4, 0
  0114d78  std 23, 168(1)
  0114d7c  std 22, 160(1)
  0114d80  fmr 31, 1
  0114d84  ori 22, 24, 0
  0114d88  std 31, 232(1)
  0114d8c  li 23, 1
  0114d90  std 30, 224(1)
  0114d94  std 25, 184(1)
  0114d98  ori 31, 3, 0
  0114d9c  ori 30, 4, 0
  0114da0  std 29, 216(1)
  0114da4  ori 25, 22, 0
  0114da8  std 28, 208(1)
  0114dac  ori 29, 5, 0
  0114db0  std 27, 200(1)
  0114db4  ori 28, 7, 0
  0114db8  std 26, 192(1)
  0114dbc  ori 27, 8, 0
  0114dc0  std 21, 152(1)
  0114dc4  ori 26, 9, 0
  0114dc8  bf 1, 0x115088
  0114dcc  lis 3, 17
  0114dd0  ori 21, 31, 0
  0114dd4  addi 3, 3, 19792
  0114dd8  lfs 30, 0(3)
  0114ddc  fcmpu 0, 31, 30
  0114de0  bt 2, 0x114ee0
  0114de4  lfs 1, 4(28)
  0114de8  lfs 2, 4(27)
  0114dec  lfs 3, 0(28)
  0114df0  fsubs 2, 1, 2
  0114df4  lfs 4, 0(27)
  0114df8  lfs 5, 8(28)
  0114dfc  fsubs 4, 3, 4
  0114e00  lfs 6, 8(27)
  0114e04  fsubs 6, 5, 6
  0114e08  lfs 8, 12(28)
  0114e0c  fmuls 7, 2, 2
  0114e10  stfs 8, 124(1)
  0114e14  stfs 8, 140(1)
  0114e18  addic 4, 1, 112
  0114e1c  lwz 3, 0(21)
  0114e20  ori 5, 27, 0
  0114e24  fmadds 7, 4, 4, 7
  0114e28  extsw 3, 3
  0114e2c  fmadds 7, 6, 6, 7
  0114e30  fsqrts 7, 7
  0114e34  fdivs 8, 31, 7
  0114e38  fsub 9, 30, 7
  0114e3c  fsub 10, 30, 7
  0114e40  fsub 11, 30, 7
  0114e44  fsub 12, 7, 30
  0114e48  fsub 13, 7, 30
  0114e4c  fsub 7, 7, 30
  0114e50  fmuls 4, 4, 8
  0114e54  fmuls 6, 6, 8
  0114e58  fmuls 2, 2, 8
  0114e5c  fsel 8, 9, 30, 4
  0114e60  fsel 9, 10, 30, 6
  0114e64  fsel 10, 11, 30, 2
  0114e68  fsel 4, 12, 8, 4
  0114e6c  fsel 6, 13, 9, 6
  0114e70  fsel 2, 7, 10, 2
  0114e74  fneg 4, 4
  0114e78  fsubs 7, 5, 6
  0114e7c  fsubs 8, 3, 2
  0114e80  fadds 2, 3, 2
  0114e84  fadds 3, 5, 6
  0114e88  fsubs 5, 1, 4
  0114e8c  fadds 1, 1, 4
  0114e90  stfs 7, 120(1)
  0114e94  stfs 8, 112(1)
  0114e98  stfs 2, 128(1)
  0114e9c  stfs 3, 136(1)
  0114ea0  stfs 5, 116(1)
  0114ea4  stfs 1, 132(1)
  0114ea8  bl 0x113fa0
  0114eac  cmpwi 3, 0
  0114eb0  bt 2, 0x114ebc
  0114eb4  ori 25, 23, 0
  0114eb8  b 0x114f00
  0114ebc  lwz 3, 0(21)
  0114ec0  addic 4, 1, 128
  0114ec4  extsw 3, 3
  0114ec8  ori 5, 27, 0
  0114ecc  bl 0x113fa0
  0114ed0  cmpwi 3, 0
  0114ed4  bt 2, 0x114f00
  0114ed8  ori 25, 23, 0
  0114edc  b 0x114f00
  0114ee0  lwz 3, 0(21)
  0114ee4  ori 4, 28, 0
  0114ee8  extsw 3, 3
  0114eec  ori 5, 27, 0
  0114ef0  bl 0x113fa0
  0114ef4  cmpwi 3, 0
  0114ef8  bt 2, 0x114f00
  0114efc  ori 25, 23, 0
  0114f00  cmpwi 25, 0
  0114f04  bf 2, 0x114f1c
  0114f08  addic 24, 24, 1
  0114f0c  addic 21, 21, 4
  0114f10  cmpw 24, 30
  0114f14  bt 0, 0x114ddc
  0114f18  b 0x115088
  0114f1c  lis 3, 165
  0114f20  sldi 4, 29, 2
  0114f24  fmr 1, 31
  0114f28  addic 25, 3, 7136
  0114f2c  extsw 24, 4
  0114f30  ori 21, 31, 0
  0114f34  ori 7, 28, 0
  0114f38  ori 3, 21, 0
  0114f3c  ori 4, 30, 0
  0114f40  lwzx 31, 25, 24
  0114f44  ori 6, 29, 0
  0114f48  bl 0x114148
  0114f4c  ori 28, 3, 0
  0114f50  fmr 1, 31
  0114f54  ori 3, 21, 0
  0114f58  ori 4, 30, 0
  0114f5c  ori 6, 29, 0
  0114f60  ori 7, 27, 0
  0114f64  bl 0x114148
  0114f68  ori 4, 3, 0
  0114f6c  lwzx 3, 25, 24
  0114f70  ori 5, 22, 0
  0114f74  and 6, 28, 4
  0114f78  cmpwi 6, 0
  0114f7c  bf 2, 0x114fc8
  0114f80  ori 6, 4, 0
  0114f84  ori 7, 22, 0
  0114f88  ori 8, 3, 0
  0114f8c  slw 9, 23, 7
  0114f90  and 9, 9, 4
  0114f94  cmpwi 9, 0
  0114f98  bt 2, 0x114fa4
  0114f9c  lwz 9, 28(8)
  0114fa0  or 6, 6, 9
  0114fa4  addic 7, 7, 1
  0114fa8  addic 8, 8, 16
  0114fac  cmpwi 7, 32
  0114fb0  bt 0, 0x114f8c
  0114fb4  addic 5, 5, 1
  0114fb8  ori 4, 6, 0
  0114fbc  cmpwi 5, 32
  0114fc0  bt 0, 0x114f74
  0114fc4  b 0x115080
  0114fc8  lis 4, 17
  0114fcc  lwz 5, 0(31)
  0114fd0  li 3, -1
  0114fd4  addi 7, 4, 19792
  0114fd8  cmpwi 5, 0
  0114fdc  ori 4, 22, 0
  0114fe0  lfs 1, 4(7)
  0114fe4  bf 1, 0x115080
  0114fe8  ori 7, 31, 0
  0114fec  slw 8, 23, 4
  0114ff0  and 8, 8, 6
  0114ff4  cmpwi 8, 0
  0114ff8  bt 2, 0x115034
  0114ffc  lfs 2, 20(7)
  0115000  lfs 3, 4(27)
  0115004  lfs 4, 16(7)
  0115008  fsubs 2, 2, 3
  011500c  lfs 3, 0(27)
  0115010  fsubs 3, 4, 3
  0115014  fmuls 2, 2, 2
  0115018  fmadds 2, 3, 3, 2
  011501c  fsqrts 2, 2
  0115020  fcmpu 0, 1, 2
  0115024  cror 6, 0, 2
  0115028  bt 6, 0x115034
  011502c  ori 3, 4, 0
  0115030  fmr 1, 2
  0115034  addic 4, 4, 1
  0115038  addic 7, 7, 16
  011503c  cmpw 4, 5
  0115040  bt 0, 0x114fec
  0115044  cmpwi 3, -1
  0115048  bf 1, 0x115080
  011504c  sldi 3, 3, 4
  0115050  addc 3, 31, 3
  0115054  clrldi 4, 3, 32
  0115058  ori 3, 23, 0
  011505c  lfs 1, 16(4)
  0115060  stfs 1, 0(26)
  0115064  lfs 1, 20(4)
  0115068  stfs 1, 4(26)
  011506c  lfs 1, 24(4)
  0115070  stfs 1, 8(26)
  0115074  lfs 1, 28(4)
  0115078  stfs 1, 12(26)
  011507c  b 0x1150ac
  0115080  ori 3, 22, 0
  0115084  b 0x1150ac
  0115088  lfs 1, 0(27)
  011508c  ori 3, 23, 0
  0115090  stfs 1, 0(26)
  0115094  lfs 1, 4(27)
  0115098  stfs 1, 4(26)
  011509c  lfs 1, 8(27)
  01150a0  stfs 1, 8(26)
  01150a4  lfs 1, 12(27)
  01150a8  stfs 1, 12(26)
  01150ac  ld 0, 272(1)
  01150b0  mtlr 0
  01150b4  lfd 30, 240(1)
  01150b8  lfd 31, 248(1)
  01150bc  ld 21, 152(1)
  01150c0  ld 22, 160(1)
  01150c4  ld 23, 168(1)
  01150c8  ld 24, 176(1)
  01150cc  ld 25, 184(1)
  01150d0  ld 26, 192(1)
  01150d4  ld 27, 200(1)
  01150d8  ld 28, 208(1)
  01150dc  ld 29, 216(1)
  01150e0  ld 30, 224(1)
  01150e4  ld 31, 232(1)
  01150e8  addi 1, 1, 256
  01150ec  blr

MB_PathPosAtDist:   # 0x1150f8, 0x214 bytes
  01150f8  stdu 1, -192(1)
  01150fc  mflr 0
  0115100  std 0, 208(1)
  0115104  stfd 30, 176(1)
  0115108  stfd 31, 184(1)
  011510c  std 29, 152(1)
  0115110  fmr 31, 2
  0115114  fmr 30, 1
  0115118  std 31, 168(1)
  011511c  ori 29, 6, 0
  0115120  std 30, 160(1)
  0115124  ori 31, 8, 0
  0115128  std 28, 144(1)
  011512c  ori 30, 7, 0
  0115130  ori 28, 5, 0
  0115134  fdivs 1, 30, 31
  0115138  bl 0x502758
  011513c  nop
  0115140  ori 4, 3, 0
  0115144  stw 4, 0(29)
  0115148  lwz 3, 0(28)
  011514c  addic 3, 3, -1
  0115150  cmpw 4, 3
  0115154  bt 0, 0x115194
  0115158  slwi 4, 3, 4
  011515c  stw 3, 0(29)
  0115160  li 5, 0
  0115164  addc 4, 28, 4
  0115168  clrldi 4, 4, 32
  011516c  stw 5, 0(30)
  0115170  lfs 1, 16(4)
  0115174  stfs 1, 0(31)
  0115178  lfs 1, 20(4)
  011517c  stfs 1, 4(31)
  0115180  lfs 1, 24(4)
  0115184  stfs 1, 8(31)
  0115188  lfs 1, 28(4)
  011518c  stfs 1, 12(31)
  0115190  b 0x1152e4
  0115194  cmpwi 4, 0
  0115198  bf 0, 0x1151cc
  011519c  li 3, 0
  01151a0  stw 3, 0(29)
  01151a4  stw 3, 0(30)
  01151a8  lfs 1, 16(28)
  01151ac  stfs 1, 0(31)
  01151b0  lfs 1, 20(28)
  01151b4  stfs 1, 4(31)
  01151b8  lfs 1, 24(28)
  01151bc  stfs 1, 8(31)
  01151c0  lfs 1, 28(28)
  01151c4  stfs 1, 12(31)
  01151c8  b 0x1152e4
  01151cc  ori 3, 4, 0
  01151d0  bl 0x502730
  01151d4  nop
  01151d8  fnmsubs 1, 1, 31, 30
  01151dc  addic 3, 1, 112
  01151e0  lwz 4, 0(29)
  01151e4  slwi 4, 4, 4
  01151e8  addc 4, 28, 4
  01151ec  addic 5, 4, 32
  01151f0  addic 6, 4, 16
  01151f4  clrldi 4, 5, 32
  01151f8  clrldi 5, 6, 32
  01151fc  stfs 1, 0(30)
  0115200  bl 0x502a64
  0115204  nop
  0115208  lfs 1, 112(1)
  011520c  stfs 1, 0(31)
  0115210  lfs 1, 116(1)
  0115214  stfs 1, 4(31)
  0115218  lfs 1, 120(1)
  011521c  stfs 1, 8(31)
  0115220  lfs 1, 124(1)
  0115224  lfs 2, 0(31)
  0115228  lfs 3, 4(31)
  011522c  lfs 5, 8(31)
  0115230  fmuls 4, 3, 3
  0115234  stfs 1, 12(31)
  0115238  lis 3, 17
  011523c  addi 3, 3, 20724
  0115240  fmadds 4, 2, 2, 4
  0115244  ori 4, 31, 0
  0115248  fmadds 4, 5, 5, 4
  011524c  fsqrts 1, 4
  0115250  lfs 4, 0(30)
  0115254  lfs 6, 0(3)
  0115258  addic 3, 1, 128
  011525c  lwz 5, 0(29)
  0115260  slwi 5, 5, 4
  0115264  addc 5, 28, 5
  0115268  addic 5, 5, 16
  011526c  clrldi 5, 5, 32
  0115270  fdivs 4, 4, 1
  0115274  fsub 7, 6, 1
  0115278  fsub 8, 6, 1
  011527c  fsub 9, 6, 1
  0115280  fsub 10, 1, 6
  0115284  fsub 11, 1, 6
  0115288  fsub 1, 1, 6
  011528c  fmuls 2, 2, 4
  0115290  fmuls 3, 3, 4
  0115294  fmuls 4, 5, 4
  0115298  fsel 5, 7, 6, 2
  011529c  fsel 7, 8, 6, 3
  01152a0  fsel 6, 9, 6, 4
  01152a4  fsel 2, 10, 5, 2
  01152a8  fsel 3, 11, 7, 3
  01152ac  fsel 1, 1, 6, 4
  01152b0  stfs 2, 0(31)
  01152b4  stfs 3, 4(31)
  01152b8  stfs 1, 8(31)
  01152bc  bl 0x5023f0
  01152c0  nop
  01152c4  lfs 1, 128(1)
  01152c8  stfs 1, 0(31)
  01152cc  lfs 1, 132(1)
  01152d0  stfs 1, 4(31)
  01152d4  lfs 1, 136(1)
  01152d8  stfs 1, 8(31)
  01152dc  lfs 1, 140(1)
  01152e0  stfs 1, 12(31)
  01152e4  ld 0, 208(1)
  01152e8  mtlr 0
  01152ec  lfd 30, 176(1)
  01152f0  lfd 31, 184(1)
  01152f4  ld 28, 144(1)
  01152f8  ld 29, 152(1)
  01152fc  ld 30, 160(1)
  0115300  ld 31, 168(1)
  0115304  addi 1, 1, 192
  0115308  blr

MB_RotateMoby:   # 0x11530c, 0x90 bytes
  011530c  stdu 1, -288(1)
  0115310  mflr 0
  0115314  std 0, 304(1)
  0115318  std 31, 280(1)
  011531c  std 30, 272(1)
  0115320  ori 31, 3, 0
  0115324  addic 30, 1, 128
  0115328  stfs 1, 112(1)
  011532c  stfs 2, 116(1)
  0115330  addic 4, 1, 112
  0115334  ori 3, 30, 0
  0115338  std 29, 264(1)
  011533c  stfs 3, 120(1)
  0115340  bl 0x500ca4
  0115344  nop
  0115348  addic 29, 1, 192
  011534c  addic 31, 31, 64
  0115350  ori 3, 29, 0
  0115354  ori 4, 31, 0
  0115358  bl 0x500ca4
  011535c  nop
  0115360  ori 3, 29, 0
  0115364  ori 4, 29, 0
  0115368  ori 5, 30, 0
  011536c  bl 0x50162c
  0115370  nop
  0115374  ori 3, 29, 0
  0115378  ori 4, 31, 0
  011537c  bl 0x10c1e8
  0115380  ld 0, 304(1)
  0115384  mtlr 0
  0115388  ld 29, 264(1)
  011538c  ld 30, 272(1)
  0115390  ld 31, 280(1)
  0115394  addi 1, 1, 288
  0115398  blr

CreateMotionBlur:   # 0x11539c, 0x2c bytes
  011539c  lwz 5, 316(4)
  01153a0  cmpwi 5, 0
  01153a4  bf 2, 0x1153c4
  01153a8  li 5, 0
  01153ac  li 6, 1
  01153b0  stw 3, 308(4)
  01153b4  sth 5, 304(4)
  01153b8  sth 5, 306(4)
  01153bc  stw 5, 312(4)
  01153c0  stw 6, 316(4)
  01153c4  blr

AddMotionBlurElem:   # 0x1153c8, 0x100 bytes
  01153c8  stdu 1, -144(1)
  01153cc  mflr 0
  01153d0  std 0, 160(1)
  01153d4  std 29, 120(1)
  01153d8  ori 29, 3, 0
  01153dc  lwz 3, 312(3)
  01153e0  std 30, 128(1)
  01153e4  cmpwi 1, 5, 8
  01153e8  ori 30, 4, 0
  01153ec  cmpwi 3, 4
  01153f0  std 31, 136(1)
  01153f4  cror 2, 2, 5
  01153f8  ori 31, 5, 0
  01153fc  bt 2, 0x1154ac
  0115400  lwz 3, 308(29)
  0115404  lhz 3, 166(3)
  0115408  extsh 3, 3
  011540c  bl 0xefa28
  0115410  nop
  0115414  ori 4, 3, 0
  0115418  lwz 3, 312(29)
  011541c  cmpwi 4, 0
  0115420  bt 2, 0x1154ac
  0115424  li 6, 0
  0115428  lwz 8, 308(29)
  011542c  lhz 9, 166(4)
  0115430  li 5, 1
  0115434  li 7, 2058
  0115438  cmpwi 9, 0
  011543c  stw 6, 148(4)
  0115440  lhz 9, 50(8)
  0115444  ld 8, 56(8)
  0115448  sth 9, 50(4)
  011544c  std 8, 56(4)
  0115450  stb 5, 49(4)
  0115454  stb 6, 48(4)
  0115458  sth 7, 52(4)
  011545c  bf 2, 0x115468
  0115460  li 5, 0
  0115464  stb 5, 114(4)
  0115468  slwi 3, 3, 2
  011546c  stb 30, 35(4)
  0115470  addc 3, 29, 3
  0115474  clrldi 3, 3, 32
  0115478  stw 31, 272(3)
  011547c  lwz 3, 312(29)
  0115480  slwi 3, 3, 2
  0115484  addc 3, 29, 3
  0115488  clrldi 3, 3, 32
  011548c  stw 30, 256(3)
  0115490  lwz 3, 312(29)
  0115494  slwi 5, 3, 2
  0115498  addic 3, 3, 1
  011549c  addc 5, 29, 5
  01154a0  clrldi 5, 5, 32
  01154a4  stw 3, 312(29)
  01154a8  stw 4, 288(5)
  01154ac  ld 0, 160(1)
  01154b0  mtlr 0
  01154b4  ld 29, 120(1)
  01154b8  ld 30, 128(1)
  01154bc  ld 31, 136(1)
  01154c0  addi 1, 1, 144
  01154c4  blr

DeleteMotionBlur:   # 0x1154c8, 0x98 bytes
  01154c8  stdu 1, -144(1)
  01154cc  mflr 0
  01154d0  std 0, 160(1)
  01154d4  std 31, 136(1)
  01154d8  ori 31, 3, 0
  01154dc  lwz 3, 316(3)
  01154e0  std 30, 128(1)
  01154e4  std 29, 120(1)
  01154e8  std 28, 112(1)
  01154ec  cmpwi 3, 0
  01154f0  bt 2, 0x115540
  01154f4  lwz 3, 312(31)
  01154f8  li 28, 0
  01154fc  cmpwi 3, 0
  0115500  ori 30, 28, 0
  0115504  bf 1, 0x11553c
  0115508  ori 29, 31, 0
  011550c  lwz 4, 288(29)
  0115510  cmpwi 4, 0
  0115514  bt 2, 0x11552c
  0115518  ori 3, 4, 0
  011551c  bl 0xefb38
  0115520  nop
  0115524  stw 30, 288(29)
  0115528  lwz 3, 312(31)
  011552c  addic 28, 28, 1
  0115530  addic 29, 29, 4
  0115534  cmpw 28, 3
  0115538  bt 0, 0x11550c
  011553c  stw 30, 316(31)
  0115540  ld 0, 160(1)
  0115544  mtlr 0
  0115548  ld 28, 112(1)
  011554c  ld 29, 120(1)
  0115550  ld 30, 128(1)
  0115554  ld 31, 136(1)
  0115558  addi 1, 1, 144
  011555c  blr

UpdateMotionBlur:   # 0x115560, 0x34c bytes
  0115560  stdu 1, -176(1)
  0115564  mflr 0
  0115568  std 0, 192(1)
  011556c  std 31, 168(1)
  0115570  std 30, 160(1)
  0115574  ori 31, 3, 0
  0115578  ori 30, 4, 0
  011557c  lwz 3, 316(31)
  0115580  cmpwi 3, 0
  0115584  std 29, 152(1)
  0115588  std 28, 144(1)
  011558c  std 27, 136(1)
  0115590  std 26, 128(1)
  0115594  std 25, 120(1)
  0115598  std 24, 112(1)
  011559c  lwz 3, 312(31)
  01155a0  bt 2, 0x11587c
  01155a4  lwz 4, 308(31)
  01155a8  cmpwi 4, 0
  01155ac  bt 2, 0x1155c4
  01155b0  lbz 5, 32(4)
  01155b4  cmpwi 5, 254
  01155b8  cmpwi 1, 5, 253
  01155bc  bt 2, 0x1155c4
  01155c0  bf 6, 0x115610
  01155c4  li 30, 0
  01155c8  cmpwi 3, 0
  01155cc  ori 28, 30, 0
  01155d0  bf 1, 0x115608
  01155d4  ori 29, 31, 0
  01155d8  lwz 4, 288(29)
  01155dc  cmpwi 4, 0
  01155e0  bt 2, 0x1155f8
  01155e4  ori 3, 4, 0
  01155e8  bl 0xefb38
  01155ec  nop
  01155f0  stw 28, 288(29)
  01155f4  lwz 3, 312(31)
  01155f8  addic 30, 30, 1
  01155fc  addic 29, 29, 4
  0115600  cmpw 30, 3
  0115604  bt 0, 0x1155d8
  0115608  stw 28, 316(31)
  011560c  b 0x11587c
  0115610  lhz 3, 304(31)
  0115614  lfs 1, 16(4)
  0115618  extsh 5, 3
  011561c  lwz 7, 308(31)
  0115620  extsh 6, 3
  0115624  sldi 5, 5, 4
  0115628  sldi 6, 6, 4
  011562c  addc 5, 31, 5
  0115630  addc 6, 31, 6
  0115634  clrldi 5, 5, 32
  0115638  clrldi 6, 6, 32
  011563c  extsh 3, 3
  0115640  addic 3, 3, 1
  0115644  stfs 1, 0(5)
  0115648  lfs 1, 20(4)
  011564c  stfs 1, 4(5)
  0115650  lfs 1, 24(4)
  0115654  stfs 1, 8(5)
  0115658  lfs 1, 28(4)
  011565c  srawi 4, 3, 3
  0115660  stfs 1, 12(5)
  0115664  lfs 1, 64(7)
  0115668  addze 4, 4
  011566c  stfs 1, 128(6)
  0115670  lfs 1, 68(7)
  0115674  sldi 4, 4, 3
  0115678  stfs 1, 132(6)
  011567c  subc 3, 3, 4
  0115680  lfs 1, 72(7)
  0115684  stfs 1, 136(6)
  0115688  lfs 1, 76(7)
  011568c  lhz 4, 306(31)
  0115690  stfs 1, 140(6)
  0115694  addic 4, 4, 1
  0115698  sth 3, 304(31)
  011569c  extsh 3, 4
  01156a0  lwz 5, 312(31)
  01156a4  cmpwi 3, 8
  01156a8  sth 4, 306(31)
  01156ac  bf 1, 0x1156b8
  01156b0  li 4, 8
  01156b4  sth 4, 306(31)
  01156b8  ori 3, 5, 0
  01156bc  li 26, 0
  01156c0  cmpwi 3, 0
  01156c4  ori 28, 26, 0
  01156c8  bf 1, 0x1157bc
  01156cc  ori 29, 31, 0
  01156d0  addic 27, 31, 128
  01156d4  extsh 6, 4
  01156d8  lwz 3, 272(29)
  01156dc  cmpw 3, 6
  01156e0  bt 1, 0x1157a8
  01156e4  lwz 25, 288(29)
  01156e8  lhz 4, 304(31)
  01156ec  lwz 5, 308(31)
  01156f0  extsh 4, 4
  01156f4  subc 3, 4, 3
  01156f8  lbz 4, 82(5)
  01156fc  addic 3, 3, 8
  0115700  stb 4, 82(25)
  0115704  srawi 4, 3, 3
  0115708  lbz 6, 83(5)
  011570c  addze 4, 4
  0115710  stb 6, 83(25)
  0115714  sldi 4, 4, 3
  0115718  lbz 6, 80(5)
  011571c  subc 24, 3, 4
  0115720  stb 6, 80(25)
  0115724  ori 3, 25, 0
  0115728  lbz 4, 81(5)
  011572c  stb 4, 81(25)
  0115730  lfs 1, 84(5)
  0115734  stfs 1, 84(25)
  0115738  bl 0xef74c
  011573c  nop
  0115740  sldi 3, 24, 4
  0115744  addc 4, 3, 31
  0115748  addc 3, 3, 27
  011574c  clrldi 4, 4, 32
  0115750  clrldi 5, 3, 32
  0115754  ori 3, 25, 0
  0115758  lfs 1, 0(4)
  011575c  stfs 1, 16(25)
  0115760  lfs 1, 4(4)
  0115764  stfs 1, 20(25)
  0115768  lfs 1, 8(4)
  011576c  stfs 1, 24(25)
  0115770  lfs 1, 12(4)
  0115774  stfs 1, 28(25)
  0115778  lfs 1, 0(5)
  011577c  stfs 1, 64(25)
  0115780  lfs 1, 4(5)
  0115784  stfs 1, 68(25)
  0115788  lfs 1, 8(5)
  011578c  stfs 1, 72(25)
  0115790  lfs 1, 12(5)
  0115794  stfs 1, 76(25)
  0115798  bl 0xf31a8
  011579c  nop
  01157a0  lhz 4, 306(31)
  01157a4  lwz 5, 312(31)
  01157a8  ori 3, 5, 0
  01157ac  addic 26, 26, 1
  01157b0  addic 29, 29, 4
  01157b4  cmpw 26, 3
  01157b8  bt 0, 0x1156d4
  01157bc  cmpwi 30, 0
  01157c0  cmpwi 1, 3, 0
  01157c4  bt 2, 0x11587c
  01157c8  ori 4, 28, 0
  01157cc  li 6, 1
  01157d0  bf 5, 0x11582c
  01157d4  ori 7, 31, 0
  01157d8  lwz 5, 288(7)
  01157dc  cmpwi 5, 0
  01157e0  bt 2, 0x115814
  01157e4  lbz 8, 35(5)
  01157e8  subc 9, 30, 8
  01157ec  subc 10, 30, 8
  01157f0  sradi 9, 9, 63
  01157f4  and 9, 9, 10
  01157f8  addc 9, 8, 9
  01157fc  subc 8, 8, 9
  0115800  clrlwi 9, 8, 24
  0115804  cmpwi 9, 0
  0115808  stb 8, 35(5)
  011580c  bt 2, 0x115814
  0115810  ori 6, 28, 0
  0115814  addic 4, 4, 1
  0115818  addic 7, 7, 4
  011581c  cmpw 4, 3
  0115820  bt 0, 0x1157d8
  0115824  cmpwi 6, 0
  0115828  bt 2, 0x11587c
  011582c  lwz 4, 316(31)
  0115830  cmpwi 4, 0
  0115834  bt 2, 0x11587c
  0115838  cmpwi 3, 0
  011583c  ori 30, 28, 0
  0115840  bf 1, 0x115878
  0115844  ori 29, 31, 0
  0115848  lwz 4, 288(29)
  011584c  cmpwi 4, 0
  0115850  bt 2, 0x115868
  0115854  ori 3, 4, 0
  0115858  bl 0xefb38
  011585c  nop
  0115860  stw 28, 288(29)
  0115864  lwz 3, 312(31)
  0115868  addic 30, 30, 1
  011586c  addic 29, 29, 4
  0115870  cmpw 30, 3
  0115874  bt 0, 0x115848
  0115878  stw 28, 316(31)
  011587c  ld 0, 192(1)
  0115880  mtlr 0
  0115884  ld 24, 112(1)
  0115888  ld 25, 120(1)
  011588c  ld 26, 128(1)
  0115890  ld 27, 136(1)
  0115894  ld 28, 144(1)
  0115898  ld 29, 152(1)
  011589c  ld 30, 160(1)
  01158a0  ld 31, 168(1)
  01158a4  addi 1, 1, 176
  01158a8  blr

MB_SetupJumpArc:   # 0x1158b0, 0x44 bytes
  01158b0  lis 3, 17
  01158b4  addi 3, 3, 22700
  01158b8  lfs 3, 0(3)
  01158bc  lfs 4, 16(5)
  01158c0  fmuls 2, 2, 3
  01158c4  fmuls 1, 1, 3
  01158c8  fmuls 2, 2, 4
  01158cc  fsqrts 2, 2
  01158d0  fmuls 3, 2, 3
  01158d4  stfs 2, 28(5)
  01158d8  fdivs 3, 3, 4
  01158dc  fmuls 2, 3, 3
  01158e0  fdivs 3, 1, 3
  01158e4  fdivs 1, 1, 2
  01158e8  stfs 3, 24(5)
  01158ec  stfs 1, 20(5)
  01158f0  blr

MB_TurnHeadJoint:   # 0x115900, 0x2cc bytes
  0115900  stdu 1, -192(1)
  0115904  mflr 0
  0115908  std 0, 208(1)
  011590c  stfd 25, 136(1)
  0115910  stfd 26, 144(1)
  0115914  stfd 27, 152(1)
  0115918  stfd 28, 160(1)
  011591c  stfd 29, 168(1)
  0115920  stfd 30, 176(1)
  0115924  stfd 31, 184(1)
  0115928  fmr 31, 1
  011592c  std 31, 128(1)
  0115930  lfs 1, 0(3)
  0115934  std 30, 120(1)
  0115938  ori 31, 3, 0
  011593c  ori 30, 5, 0
  0115940  fmr 30, 2
  0115944  fcmpu 0, 1, 4
  0115948  fmr 29, 3
  011594c  fmr 28, 4
  0115950  fmr 27, 5
  0115954  std 29, 112(1)
  0115958  cror 6, 0, 2
  011595c  bt 6, 0x11596c
  0115960  fmr 1, 28
  0115964  stfs 28, 0(31)
  0115968  b 0x115984
  011596c  fneg 2, 28
  0115970  fcmpu 0, 1, 2
  0115974  cror 6, 1, 2
  0115978  bt 6, 0x115984
  011597c  fmr 1, 2
  0115980  stfs 2, 0(31)
  0115984  fmr 2, 1
  0115988  fmr 1, 31
  011598c  fmr 25, 28
  0115990  bl 0x5025e0
  0115994  nop
  0115998  lis 3, 17
  011599c  lfs 3, 0(30)
  01159a0  fmr 28, 1
  01159a4  addi 29, 3, 22772
  01159a8  fneg 4, 25
  01159ac  lfs 26, 0(29)
  01159b0  lfs 2, 0(31)
  01159b4  fsub 1, 26, 3
  01159b8  fsel 25, 1, 4, 25
  01159bc  fmr 1, 25
  01159c0  bl 0x5025e0
  01159c4  nop
  01159c8  lfs 2, 0(30)
  01159cc  fmuls 3, 2, 2
  01159d0  fabs 4, 1
  01159d4  fdivs 5, 3, 30
  01159d8  lfs 3, 4(29)
  01159dc  fmuls 5, 5, 3
  01159e0  fcmpu 0, 5, 4
  01159e4  cror 6, 0, 2
  01159e8  bt 6, 0x115a54
  01159ec  fneg 3, 2
  01159f0  fcmpu 0, 30, 3
  01159f4  cror 6, 1, 2
  01159f8  bt 6, 0x115a04
  01159fc  fmr 3, 30
  0115a00  b 0x115a18
  0115a04  fneg 5, 30
  0115a08  fcmpu 0, 3, 5
  0115a0c  cror 6, 1, 2
  0115a10  bt 6, 0x115a18
  0115a14  fmr 3, 5
  0115a18  fadds 3, 2, 3
  0115a1c  fabs 2, 3
  0115a20  stfs 3, 0(30)
  0115a24  fcmpu 0, 4, 2
  0115a28  cror 6, 0, 2
  0115a2c  bt 6, 0x115a4c
  0115a30  fmr 1, 3
  0115a34  lfs 2, 0(31)
  0115a38  bl 0x502578
  0115a3c  nop
  0115a40  stfs 1, 0(31)
  0115a44  lfs 1, 0(30)
  0115a48  b 0x115b94
  0115a4c  stfs 25, 0(31)
  0115a50  b 0x115b94
  0115a54  fadds 2, 2, 27
  0115a58  fmuls 1, 2, 28
  0115a5c  fcmpu 0, 1, 26
  0115a60  bt 0, 0x115b24
  0115a64  fcmpu 0, 28, 26
  0115a68  bt 2, 0x115b24
  0115a6c  fmuls 1, 2, 2
  0115a70  fabs 4, 28
  0115a74  fdivs 1, 1, 30
  0115a78  fmuls 1, 1, 3
  0115a7c  fcmpu 0, 1, 4
  0115a80  cror 6, 0, 2
  0115a84  bt 6, 0x115ac4
  0115a88  fneg 1, 2
  0115a8c  fcmpu 0, 30, 1
  0115a90  cror 6, 1, 2
  0115a94  bt 6, 0x115aa0
  0115a98  fmr 1, 30
  0115a9c  b 0x115ab4
  0115aa0  fneg 3, 30
  0115aa4  fcmpu 0, 1, 3
  0115aa8  cror 6, 1, 2
  0115aac  bt 6, 0x115ab4
  0115ab0  fmr 1, 3
  0115ab4  fadds 1, 1, 2
  0115ab8  fsubs 1, 1, 27
  0115abc  stfs 1, 0(30)
  0115ac0  b 0x115b5c
  0115ac4  lis 3, 17
  0115ac8  addi 3, 3, 22772
  0115acc  fcmpu 0, 28, 26
  0115ad0  lfs 1, 8(3)
  0115ad4  fmuls 1, 30, 1
  0115ad8  cror 6, 1, 2
  0115adc  fmuls 1, 1, 28
  0115ae0  fsqrts 1, 1
  0115ae4  fsubs 1, 1, 27
  0115ae8  fsub 2, 29, 1
  0115aec  fsel 29, 2, 1, 29
  0115af0  bt 6, 0x115b0c
  0115af4  ori 3, 30, 0
  0115af8  fneg 1, 29
  0115afc  li 6, 0
  0115b00  fmr 2, 30
  0115b04  bl 0x109ec0
  0115b08  b 0x115b5c
  0115b0c  fmr 1, 29
  0115b10  ori 3, 30, 0
  0115b14  fmr 2, 30
  0115b18  li 6, 0
  0115b1c  bl 0x109ec0
  0115b20  b 0x115b5c
  0115b24  fneg 1, 2
  0115b28  fcmpu 0, 30, 1
  0115b2c  cror 6, 1, 2
  0115b30  bt 6, 0x115b3c
  0115b34  fmr 1, 30
  0115b38  b 0x115b50
  0115b3c  fneg 3, 30
  0115b40  fcmpu 0, 1, 3
  0115b44  cror 6, 1, 2
  0115b48  bt 6, 0x115b50
  0115b4c  fmr 1, 3
  0115b50  fadds 1, 1, 2
  0115b54  fsubs 1, 1, 27
  0115b58  stfs 1, 0(30)
  0115b5c  lfs 1, 0(30)
  0115b60  fabs 2, 28
  0115b64  fabs 3, 1
  0115b68  fcmpu 0, 2, 3
  0115b6c  cror 6, 0, 2
  0115b70  bt 6, 0x115b8c
  0115b74  lfs 2, 0(31)
  0115b78  bl 0x502578
  0115b7c  nop
  0115b80  stfs 1, 0(31)
  0115b84  lfs 1, 0(30)
  0115b88  b 0x115b94
  0115b8c  fmr 1, 28
  0115b90  stfs 31, 0(31)
  0115b94  ld 0, 208(1)
  0115b98  mtlr 0
  0115b9c  lfd 25, 136(1)
  0115ba0  lfd 26, 144(1)
  0115ba4  lfd 27, 152(1)
  0115ba8  lfd 28, 160(1)
  0115bac  lfd 29, 168(1)
  0115bb0  lfd 30, 176(1)
  0115bb4  lfd 31, 184(1)
  0115bb8  ld 29, 112(1)
  0115bbc  ld 30, 120(1)
  0115bc0  ld 31, 128(1)
  0115bc4  addi 1, 1, 192
  0115bc8  blr

MB_TurnHeads:   # 0x115bd8, 0x678 bytes
  0115bd8  stdu 1, -240(1)
  0115bdc  mflr 0
  0115be0  std 0, 256(1)
  0115be4  stfd 29, 216(1)
  0115be8  stfd 30, 224(1)
  0115bec  stfd 31, 232(1)
  0115bf0  std 30, 200(1)
  0115bf4  std 31, 208(1)
  0115bf8  ori 30, 4, 0
  0115bfc  ori 31, 3, 0
  0115c00  lfs 2, 24(30)
  0115c04  lfs 1, 72(31)
  0115c08  bl 0x5025e0
  0115c0c  nop
  0115c10  lfs 2, 72(31)
  0115c14  lbz 3, 81(30)
  0115c18  fmr 31, 1
  0115c1c  cmpwi 3, 0
  0115c20  stfs 2, 24(30)
  0115c24  bf 2, 0x115c48
  0115c28  lbz 3, 28(30)
  0115c2c  cmpwi 3, 255
  0115c30  bt 2, 0x115c48
  0115c34  ori 4, 3, 0
  0115c38  addic 5, 30, 80
  0115c3c  ori 3, 31, 0
  0115c40  bl 0xf0ea8
  0115c44  nop
  0115c48  lbz 3, 145(30)
  0115c4c  cmpwi 3, 0
  0115c50  bf 2, 0x115c74
  0115c54  lbz 3, 30(30)
  0115c58  cmpwi 3, 255
  0115c5c  bt 2, 0x115c74
  0115c60  ori 4, 3, 0
  0115c64  addic 5, 30, 144
  0115c68  ori 3, 31, 0
  0115c6c  bl 0xf0ea8
  0115c70  nop
  0115c74  lbz 3, 209(30)
  0115c78  cmpwi 3, 0
  0115c7c  bf 2, 0x115ca0
  0115c80  lbz 3, 29(30)
  0115c84  cmpwi 3, 255
  0115c88  bt 2, 0x115ca0
  0115c8c  ori 4, 3, 0
  0115c90  addic 5, 30, 208
  0115c94  ori 3, 31, 0
  0115c98  bl 0xf0ea8
  0115c9c  nop
  0115ca0  lbz 3, 31(30)
  0115ca4  cmpwi 3, 0
  0115ca8  cmpwi 1, 3, 2
  0115cac  cmpwi 6, 3, 1
  0115cb0  cmpwi 7, 3, -1
  0115cb4  bt 1, 0x115cc0
  0115cb8  bf 29, 0x1161f0
  0115cbc  b 0x11617c
  0115cc0  lis 3, 17
  0115cc4  addi 3, 3, 23500
  0115cc8  lfs 1, 0(3)
  0115ccc  bf 25, 0x115f28
  0115cd0  bt 5, 0x1161f0
  0115cd4  lfs 2, 0(30)
  0115cd8  lfs 3, 16(31)
  0115cdc  lfs 4, 4(30)
  0115ce0  lis 3, 17
  0115ce4  lfs 5, 20(31)
  0115ce8  fsubs 2, 2, 3
  0115cec  addi 3, 3, 23500
  0115cf0  fsubs 3, 4, 5
  0115cf4  lis 4, 115
  0115cf8  addic 4, 4, 22784
  0115cfc  fabs 4, 2
  0115d00  fabs 6, 3
  0115d04  stfs 2, 124(1)
  0115d08  stfs 3, 128(1)
  0115d0c  fsubs 2, 4, 6
  0115d10  stfs 2, 132(1)
  0115d14  lwz 5, 124(1)
  0115d18  lfs 5, 4(3)
  0115d1c  lfs 2, 124(1)
  0115d20  lwz 3, 128(1)
  0115d24  lfs 3, 128(1)
  0115d28  fabs 2, 2
  0115d2c  lwz 6, 132(1)
  0115d30  rlwinm 3, 3, 3, 29, 29
  0115d34  fabs 7, 3
  0115d38  lfs 3, 132(1)
  0115d3c  rlwimi 3, 6, 2, 30, 30
  0115d40  fsub 8, 3, 5
  0115d44  rlwimi 3, 5, 4, 28, 28
  0115d48  fsub 9, 3, 5
  0115d4c  ori 5, 4, 0
  0115d50  rlwimi 5, 3, 2, 26, 28
  0115d54  slwi 3, 3, 2
  0115d58  clrldi 5, 5, 32
  0115d5c  fsel 6, 8, 2, 6
  0115d60  lfsx 2, 4, 3
  0115d64  lfs 3, 4(5)
  0115d68  fsel 4, 9, 7, 4
  0115d6c  fcmpu 0, 6, 5
  0115d70  bt 1, 0x115d78
  0115d74  b 0x115e8c
  0115d78  fsubs 7, 4, 6
  0115d7c  fadds 4, 4, 6
  0115d80  addic 3, 1, 16
  0115d84  li 6, 2
  0115d88  addic 5, 3, 168
  0115d8c  addic 4, 3, 152
  0115d90  mtctr 6
  0115d94  fdivs 4, 7, 4
  0115d98  fmuls 6, 4, 4
  0115d9c  stfs 4, 180(1)
  0115da0  stfs 4, 172(1)
  0115da4  stfs 4, 176(1)
  0115da8  stfs 4, 168(1)
  0115dac  lfs 8, 180(1)
  0115db0  lfs 9, 172(1)
  0115db4  lfs 10, 176(1)
  0115db8  fmuls 7, 6, 6
  0115dbc  fmuls 9, 9, 6
  0115dc0  fmuls 8, 8, 7
  0115dc4  fmuls 4, 7, 7
  0115dc8  fmuls 7, 10, 7
  0115dcc  stfs 9, 172(1)
  0115dd0  fmuls 6, 8, 6
  0115dd4  stfs 7, 176(1)
  0115dd8  stfs 6, 180(1)
  0115ddc  lfs 6, 152(3)
  0115de0  fmuls 6, 6, 4
  0115de4  stfs 6, 168(3)
  0115de8  lfs 6, 4(4)
  0115dec  addic 4, 4, 8
  0115df0  fmuls 6, 6, 4
  0115df4  addic 3, 3, 8
  0115df8  stfs 6, 4(5)
  0115dfc  addic 5, 5, 8
  0115e00  bdnz 0x115ddc
  0115e04  li 5, 4
  0115e08  ori 3, 1, 0
  0115e0c  mtctr 5
  0115e10  lis 4, 115
  0115e14  addic 5, 3, 168
  0115e18  addic 4, 4, 22752
  0115e1c  ori 7, 5, 0
  0115e20  lfs 4, 168(3)
  0115e24  lfs 6, 0(4)
  0115e28  fmuls 4, 4, 6
  0115e2c  lfs 6, 4(4)
  0115e30  addic 4, 4, 8
  0115e34  stfs 4, 168(3)
  0115e38  lfs 4, 4(5)
  0115e3c  addic 3, 3, 8
  0115e40  fmuls 4, 4, 6
  0115e44  stfs 4, 4(5)
  0115e48  addic 5, 5, 8
  0115e4c  bdnz 0x115e20
  0115e50  ori 3, 1, 0
  0115e54  mtctr 6
  0115e58  lfs 4, 168(3)
  0115e5c  fadds 4, 5, 4
  0115e60  addic 3, 3, 16
  0115e64  lfs 5, 4(7)
  0115e68  lfs 6, 8(7)
  0115e6c  lfs 7, 12(7)
  0115e70  addic 7, 7, 16
  0115e74  fadds 4, 4, 5
  0115e78  fadds 5, 4, 6
  0115e7c  fadds 5, 5, 7
  0115e80  bdnz 0x115e58
  0115e84  fadds 5, 5, 1
  0115e88  fmadds 5, 5, 2, 3
  0115e8c  fmr 1, 5
  0115e90  lfs 2, 72(31)
  0115e94  bl 0x5025e0
  0115e98  nop
  0115e9c  fmr 30, 1
  0115ea0  lis 3, 17
  0115ea4  lfs 2, 64(30)
  0115ea8  addic 5, 30, 72
  0115eac  addi 4, 3, 23500
  0115eb0  lfs 3, 68(30)
  0115eb4  addic 3, 30, 76
  0115eb8  fmr 5, 31
  0115ebc  lfs 1, 8(4)
  0115ec0  lfs 4, 20(30)
  0115ec4  fmuls 1, 30, 1
  0115ec8  bl 0x115900
  0115ecc  fmr 1, 30
  0115ed0  lfs 2, 76(30)
  0115ed4  bl 0x5025e0
  0115ed8  nop
  0115edc  fmr 30, 1
  0115ee0  lfs 2, 32(30)
  0115ee4  addic 3, 30, 44
  0115ee8  lfs 3, 36(30)
  0115eec  addic 5, 30, 40
  0115ef0  lfs 4, 16(30)
  0115ef4  lfs 5, 72(30)
  0115ef8  fadds 5, 31, 5
  0115efc  bl 0x115900
  0115f00  lfs 2, 32(30)
  0115f04  lfs 3, 36(30)
  0115f08  addic 3, 30, 60
  0115f0c  lfs 4, 16(30)
  0115f10  addic 5, 30, 56
  0115f14  lfs 5, 72(30)
  0115f18  fmr 1, 30
  0115f1c  fadds 5, 31, 5
  0115f20  bl 0x115900
  0115f24  b 0x1161f0
  0115f28  lfs 2, 0(30)
  0115f2c  lfs 3, 16(31)
  0115f30  lfs 4, 4(30)
  0115f34  lis 3, 17
  0115f38  lfs 5, 20(31)
  0115f3c  fsubs 2, 2, 3
  0115f40  addi 3, 3, 23500
  0115f44  fsubs 3, 4, 5
  0115f48  lis 4, 115
  0115f4c  addic 4, 4, 22784
  0115f50  fabs 4, 2
  0115f54  fabs 5, 3
  0115f58  stfs 2, 112(1)
  0115f5c  stfs 3, 116(1)
  0115f60  fsubs 2, 4, 5
  0115f64  stfs 2, 120(1)
  0115f68  lwz 5, 112(1)
  0115f6c  lfs 30, 4(3)
  0115f70  lfs 2, 112(1)
  0115f74  lwz 3, 116(1)
  0115f78  lfs 3, 116(1)
  0115f7c  fabs 2, 2
  0115f80  lwz 6, 120(1)
  0115f84  rlwinm 3, 3, 3, 29, 29
  0115f88  fabs 6, 3
  0115f8c  lfs 3, 120(1)
  0115f90  rlwimi 3, 6, 2, 30, 30
  0115f94  fsub 7, 3, 30
  0115f98  rlwimi 3, 5, 4, 28, 28
  0115f9c  fsub 8, 3, 30
  0115fa0  ori 5, 4, 0
  0115fa4  rlwimi 5, 3, 2, 26, 28
  0115fa8  slwi 3, 3, 2
  0115fac  clrldi 5, 5, 32
  0115fb0  fsel 5, 7, 2, 5
  0115fb4  lfsx 2, 4, 3
  0115fb8  lfs 3, 4(5)
  0115fbc  fsel 4, 8, 6, 4
  0115fc0  fcmpu 0, 5, 30
  0115fc4  bt 1, 0x115fd0
  0115fc8  fmr 1, 30
  0115fcc  b 0x1160e8
  0115fd0  fsubs 6, 4, 5
  0115fd4  fadds 4, 4, 5
  0115fd8  addic 3, 1, 16
  0115fdc  li 7, 2
  0115fe0  addic 4, 3, 120
  0115fe4  addic 5, 3, 136
  0115fe8  mtctr 7
  0115fec  fdivs 4, 6, 4
  0115ff0  fmuls 5, 4, 4
  0115ff4  stfs 4, 148(1)
  0115ff8  stfs 4, 140(1)
  0115ffc  stfs 4, 144(1)
  0116000  stfs 4, 136(1)
  0116004  lfs 7, 148(1)
  0116008  lfs 8, 140(1)
  011600c  lfs 9, 144(1)
  0116010  fmuls 6, 5, 5
  0116014  fmuls 8, 8, 5
  0116018  fmuls 7, 7, 6
  011601c  fmuls 4, 6, 6
  0116020  fmuls 6, 9, 6
  0116024  stfs 8, 140(1)
  0116028  fmuls 5, 7, 5
  011602c  stfs 6, 144(1)
  0116030  stfs 5, 148(1)
  0116034  lfs 5, 120(3)
  0116038  fmuls 5, 5, 4
  011603c  stfs 5, 136(3)
  0116040  lfs 5, 4(4)
  0116044  addic 3, 3, 8
  0116048  addic 4, 4, 8
  011604c  fmuls 5, 5, 4
  0116050  stfs 5, 4(5)
  0116054  addic 5, 5, 8
  0116058  bdnz 0x116034
  011605c  li 5, 4
  0116060  ori 3, 1, 0
  0116064  mtctr 5
  0116068  lis 4, 115
  011606c  addic 5, 3, 136
  0116070  addic 4, 4, 22752
  0116074  ori 6, 5, 0
  0116078  lfs 4, 136(3)
  011607c  lfs 5, 0(4)
  0116080  fmuls 4, 4, 5
  0116084  lfs 5, 4(4)
  0116088  addic 4, 4, 8
  011608c  stfs 4, 136(3)
  0116090  lfs 4, 4(5)
  0116094  addic 3, 3, 8
  0116098  fmuls 4, 4, 5
  011609c  stfs 4, 4(5)
  01160a0  addic 5, 5, 8
  01160a4  bdnz 0x116078
  01160a8  fmr 4, 30
  01160ac  ori 3, 1, 0
  01160b0  mtctr 7
  01160b4  lfs 5, 136(3)
  01160b8  fadds 4, 4, 5
  01160bc  addic 3, 3, 16
  01160c0  lfs 5, 4(6)
  01160c4  lfs 6, 8(6)
  01160c8  lfs 7, 12(6)
  01160cc  addic 6, 6, 16
  01160d0  fadds 4, 4, 5
  01160d4  fadds 4, 4, 6
  01160d8  fadds 4, 4, 7
  01160dc  bdnz 0x1160b4
  01160e0  fadds 1, 4, 1
  01160e4  fmadds 1, 1, 2, 3
  01160e8  lfs 2, 72(31)
  01160ec  bl 0x5025e0
  01160f0  nop
  01160f4  fmr 29, 1
  01160f8  lis 3, 17
  01160fc  lfs 2, 64(30)
  0116100  lfs 3, 68(30)
  0116104  addic 5, 30, 72
  0116108  addi 4, 3, 23500
  011610c  fmr 5, 31
  0116110  addic 3, 30, 76
  0116114  lfs 1, 8(4)
  0116118  lfs 4, 20(30)
  011611c  fmuls 1, 29, 1
  0116120  bl 0x115900
  0116124  lfs 2, 76(30)
  0116128  fmr 1, 29
  011612c  bl 0x5025e0
  0116130  nop
  0116134  lfs 2, 32(30)
  0116138  addic 3, 30, 44
  011613c  lfs 3, 36(30)
  0116140  addic 5, 30, 40
  0116144  lfs 4, 16(30)
  0116148  lfs 5, 72(30)
  011614c  fadds 5, 31, 5
  0116150  bl 0x115900
  0116154  lfs 2, 32(30)
  0116158  lfs 3, 36(30)
  011615c  addic 3, 30, 60
  0116160  lfs 4, 16(30)
  0116164  addic 5, 30, 56
  0116168  lfs 5, 72(30)
  011616c  fmr 1, 30
  0116170  fadds 5, 31, 5
  0116174  bl 0x115900
  0116178  b 0x1161f0
  011617c  lis 3, 17
  0116180  lfs 2, 64(30)
  0116184  addic 5, 30, 72
  0116188  fmr 5, 31
  011618c  addi 4, 3, 23500
  0116190  addic 3, 30, 76
  0116194  lfs 30, 4(4)
  0116198  lfs 3, 68(30)
  011619c  lfs 4, 20(30)
  01161a0  fmr 1, 30
  01161a4  bl 0x115900
  01161a8  lfs 2, 32(30)
  01161ac  addic 3, 30, 44
  01161b0  lfs 3, 36(30)
  01161b4  addic 5, 30, 40
  01161b8  lfs 4, 16(30)
  01161bc  fmr 1, 30
  01161c0  lfs 5, 72(30)
  01161c4  fadds 5, 31, 5
  01161c8  bl 0x115900
  01161cc  lfs 2, 32(30)
  01161d0  addic 3, 30, 60
  01161d4  lfs 3, 36(30)
  01161d8  addic 5, 30, 56
  01161dc  lfs 4, 16(30)
  01161e0  fmr 1, 30
  01161e4  lfs 5, 72(30)
  01161e8  fadds 5, 31, 5
  01161ec  bl 0x115900
  01161f0  addic 3, 30, 96
  01161f4  lfs 1, 44(30)
  01161f8  li 4, 2
  01161fc  bl 0x501980
  0116200  nop
  0116204  lfs 1, 76(30)
  0116208  addic 3, 30, 160
  011620c  li 4, 2
  0116210  bl 0x501980
  0116214  nop
  0116218  lfs 1, 60(30)
  011621c  addic 3, 30, 224
  0116220  li 4, 2
  0116224  bl 0x501980
  0116228  nop
  011622c  ld 0, 256(1)
  0116230  mtlr 0
  0116234  lfd 29, 216(1)
  0116238  lfd 30, 224(1)
  011623c  lfd 31, 232(1)
  0116240  ld 30, 200(1)
  0116244  ld 31, 208(1)
  0116248  addi 1, 1, 240
  011624c  blr

???_MB_SpawnRingPartFx:   # 0x1162a0, 0x524 bytes
  01162a0  stdu 1, -384(1)
  01162a4  mflr 0
  01162a8  std 0, 400(1)
  01162ac  stfd 19, 280(1)
  01162b0  stfd 20, 288(1)
  01162b4  stfd 21, 296(1)
  01162b8  stfd 22, 304(1)
  01162bc  stfd 23, 312(1)
  01162c0  stfd 24, 320(1)
  01162c4  stfd 25, 328(1)
  01162c8  stfd 26, 336(1)
  01162cc  stfd 27, 344(1)
  01162d0  stfd 28, 352(1)
  01162d4  stfd 29, 360(1)
  01162d8  stfd 30, 368(1)
  01162dc  stfd 31, 376(1)
  01162e0  lis 8, 17
  01162e4  li 4, 384
  01162e8  addi 8, 8, 25168
  01162ec  addc 9, 1, 4
  01162f0  std 30, 264(1)
  01162f4  std 25, 224(1)
  01162f8  addic 4, 4, 64
  01162fc  li 30, 0
  0116300  std 28, 248(1)
  0116304  std 27, 240(1)
  0116308  std 26, 232(1)
  011630c  addc 25, 1, 4
  0116310  ori 28, 30, 0
  0116314  std 5, 64(9)
  0116318  addic 27, 3, 224
  011631c  std 6, 72(9)
  0116320  addic 26, 3, 192
  0116324  lfs 31, 0(8)
  0116328  clrldi 25, 25, 32
  011632c  std 31, 272(1)
  0116330  lfs 30, 4(8)
  0116334  ori 31, 7, 0
  0116338  lfs 29, 8(8)
  011633c  lfs 28, 12(8)
  0116340  lfs 27, 16(8)
  0116344  lfs 26, 20(8)
  0116348  lfs 25, 24(8)
  011634c  lfs 24, 28(8)
  0116350  lfs 23, 32(8)
  0116354  lfs 22, 36(8)
  0116358  lfs 21, 40(8)
  011635c  std 29, 256(1)
  0116360  std 24, 216(1)
  0116364  std 23, 208(1)
  0116368  lfs 20, 44(8)
  011636c  lfs 19, 48(8)
  0116370  fmr 1, 31
  0116374  bl 0x502758
  0116378  nop
  011637c  cmpw 30, 3
  0116380  bf 0, 0x116598
  0116384  bl 0x5c8318
  0116388  nop
  011638c  srawi 4, 3, 15
  0116390  clrlwi 4, 4, 20
  0116394  extsw 4, 4
  0116398  rlwinm 3, 3, 17, 31, 31
  011639c  std 4, 192(1)
  01163a0  cmpwi 3, 0
  01163a4  lfd 1, 192(1)
  01163a8  fcfid 1, 1
  01163ac  frsp 1, 1
  01163b0  fmuls 1, 1, 30
  01163b4  fmuls 1, 1, 29
  01163b8  bt 2, 0x1163c0
  01163bc  fneg 1, 1
  01163c0  extsw 3, 30
  01163c4  ori 4, 27, 0
  01163c8  ori 5, 26, 0
  01163cc  std 3, 192(1)
  01163d0  addic 3, 1, 144
  01163d4  lfd 2, 192(1)
  01163d8  fcfid 2, 2
  01163dc  frsp 2, 2
  01163e0  fmadds 1, 2, 28, 1
  01163e4  bl 0x1113e0
  01163e8  bl 0x5c8318
  01163ec  nop
  01163f0  lfs 1, 148(1)
  01163f4  srawi 3, 3, 15
  01163f8  lfs 2, 144(1)
  01163fc  fmuls 3, 1, 1
  0116400  lfs 4, 152(1)
  0116404  clrlwi 3, 3, 17
  0116408  extsw 3, 3
  011640c  std 3, 192(1)
  0116410  fmadds 3, 2, 2, 3
  0116414  fmadds 3, 4, 4, 3
  0116418  lfd 5, 192(1)
  011641c  fsqrts 3, 3
  0116420  fcfid 5, 5
  0116424  frsp 5, 5
  0116428  fmuls 5, 5, 27
  011642c  fmadds 5, 5, 26, 27
  0116430  fdivs 5, 5, 3
  0116434  fsub 6, 25, 3
  0116438  fsub 7, 25, 3
  011643c  fsub 8, 25, 3
  0116440  fsub 9, 3, 25
  0116444  fsub 10, 3, 25
  0116448  fsub 3, 3, 25
  011644c  fmuls 2, 2, 5
  0116450  fmuls 1, 1, 5
  0116454  fmuls 4, 4, 5
  0116458  fsel 5, 6, 25, 2
  011645c  fsel 6, 7, 25, 1
  0116460  fsel 7, 8, 25, 4
  0116464  fsel 2, 9, 5, 2
  0116468  fsel 1, 10, 6, 1
  011646c  fsel 3, 3, 7, 4
  0116470  stfs 2, 144(1)
  0116474  stfs 1, 148(1)
  0116478  stfs 3, 152(1)
  011647c  bl 0x5c8318
  0116480  nop
  0116484  srawi 3, 3, 15
  0116488  clrlwi 3, 3, 17
  011648c  srawi 4, 3, 2
  0116490  addze 4, 4
  0116494  sldi 4, 4, 2
  0116498  subc 3, 3, 4
  011649c  extsw 29, 3
  01164a0  bl 0x5c8318
  01164a4  nop
  01164a8  lis 4, 114
  01164ac  srawi 3, 3, 15
  01164b0  neg 24, 29
  01164b4  clrlwi 3, 3, 17
  01164b8  lfs 1, -3056(4)
  01164bc  srawi 4, 3, 1
  01164c0  fmuls 2, 1, 24
  01164c4  fmuls 1, 1, 23
  01164c8  addze 4, 4
  01164cc  sldi 4, 4, 1
  01164d0  subc 3, 3, 4
  01164d4  li 4, 0
  01164d8  subc 3, 4, 3
  01164dc  fctiwz 2, 2
  01164e0  fctiwz 1, 1
  01164e4  cntlzw 3, 3
  01164e8  subc 4, 29, 24
  01164ec  sldi 3, 3, 58
  01164f0  sradi 3, 3, 63
  01164f4  and 3, 3, 4
  01164f8  addc 24, 24, 3
  01164fc  stfd 2, 192(1)
  0116500  lwz 29, 196(1)
  0116504  stfd 1, 192(1)
  0116508  lwz 23, 196(1)
  011650c  bl 0x5c8318
  0116510  nop
  0116514  srawi 3, 3, 15
  0116518  subc 4, 23, 29
  011651c  clrlwi 3, 3, 17
  0116520  addic 5, 4, 1
  0116524  divw 5, 3, 5
  0116528  mullw 4, 5, 4
  011652c  cmpwi 31, 0
  0116530  addc 4, 4, 5
  0116534  subc 3, 3, 4
  0116538  addc 29, 3, 29
  011653c  extsw 29, 29
  0116540  bt 2, 0x116558
  0116544  addic 4, 1, 144
  0116548  addic 3, 1, 160
  011654c  ori 5, 31, 0
  0116550  bl 0x502b08
  0116554  nop
  0116558  lis 7, 255
  011655c  fmr 1, 22
  0116560  addic 4, 1, 144
  0116564  fmr 2, 21
  0116568  ori 8, 24, 0
  011656c  fmr 3, 19
  0116570  ori 3, 25, 0
  0116574  fmr 4, 20
  0116578  ori 5, 29, 0
  011657c  fmr 5, 19
  0116580  li 6, 30
  0116584  ori 7, 7, 65535
  0116588  bl 0x12e3e8
  011658c  nop
  0116590  addic 30, 30, 1
  0116594  b 0x116370
  0116598  lis 3, 17
  011659c  addi 3, 3, 25168
  01165a0  lfs 31, 52(3)
  01165a4  lfs 30, 56(3)
  01165a8  lfs 29, 60(3)
  01165ac  lfs 28, 64(3)
  01165b0  lfs 24, 68(3)
  01165b4  lfs 23, 72(3)
  01165b8  fmr 1, 31
  01165bc  bl 0x502758
  01165c0  nop
  01165c4  cmpw 28, 3
  01165c8  bf 0, 0x11675c
  01165cc  bl 0x5c8318
  01165d0  nop
  01165d4  srawi 3, 3, 15
  01165d8  extsw 6, 28
  01165dc  clrlwi 3, 3, 17
  01165e0  extsw 3, 3
  01165e4  ori 4, 27, 0
  01165e8  std 3, 192(1)
  01165ec  ori 5, 26, 0
  01165f0  addic 3, 1, 144
  01165f4  lfd 1, 192(1)
  01165f8  std 6, 192(1)
  01165fc  fcfid 1, 1
  0116600  frsp 1, 1
  0116604  lfd 2, 192(1)
  0116608  fmuls 1, 1, 30
  011660c  fcfid 2, 2
  0116610  fmuls 1, 1, 26
  0116614  frsp 2, 2
  0116618  fmadds 1, 2, 29, 1
  011661c  bl 0x1113e0
  0116620  bl 0x5c8318
  0116624  nop
  0116628  lfs 1, 148(1)
  011662c  lfs 2, 144(1)
  0116630  fmuls 3, 1, 1
  0116634  lfs 4, 152(1)
  0116638  srawi 3, 3, 15
  011663c  clrlwi 3, 3, 17
  0116640  extsw 3, 3
  0116644  std 3, 192(1)
  0116648  fmadds 3, 2, 2, 3
  011664c  lis 3, 114
  0116650  fmadds 3, 4, 4, 3
  0116654  fsqrts 3, 3
  0116658  lfd 5, 192(1)
  011665c  lfs 6, -3056(3)
  0116660  fcfid 5, 5
  0116664  fmuls 12, 6, 28
  0116668  fmuls 6, 6, 24
  011666c  frsp 5, 5
  0116670  fctiwz 12, 12
  0116674  fctiwz 6, 6
  0116678  fmuls 5, 5, 27
  011667c  stfd 12, 192(1)
  0116680  lwz 30, 196(1)
  0116684  stfd 6, 192(1)
  0116688  lwz 29, 196(1)
  011668c  fmadds 5, 5, 26, 27
  0116690  fdivs 5, 5, 3
  0116694  fsub 7, 25, 3
  0116698  fsub 8, 25, 3
  011669c  fsub 9, 25, 3
  01166a0  fsub 10, 3, 25
  01166a4  fsub 11, 3, 25
  01166a8  fsub 3, 3, 25
  01166ac  fmuls 2, 2, 5
  01166b0  fmuls 1, 1, 5
  01166b4  fmuls 4, 4, 5
  01166b8  fsel 5, 7, 25, 2
  01166bc  fsel 6, 8, 25, 1
  01166c0  fsel 7, 9, 25, 4
  01166c4  fsel 2, 10, 5, 2
  01166c8  fsel 1, 11, 6, 1
  01166cc  fsel 3, 3, 7, 4
  01166d0  stfs 2, 144(1)
  01166d4  stfs 1, 148(1)
  01166d8  stfs 3, 152(1)
  01166dc  bl 0x5c8318
  01166e0  nop
  01166e4  srawi 3, 3, 15
  01166e8  subc 4, 29, 30
  01166ec  clrlwi 3, 3, 17
  01166f0  addic 5, 4, 1
  01166f4  divw 5, 3, 5
  01166f8  mullw 4, 5, 4
  01166fc  cmpwi 31, 0
  0116700  addc 4, 4, 5
  0116704  subc 3, 3, 4
  0116708  addc 30, 3, 30
  011670c  extsw 30, 30
  0116710  bt 2, 0x116728
  0116714  addic 4, 1, 144
  0116718  addic 3, 1, 176
  011671c  ori 5, 31, 0
  0116720  bl 0x502b08
  0116724  nop
  0116728  lis 5, 20224
  011672c  lis 6, 8191
  0116730  fmr 1, 23
  0116734  addic 4, 1, 144
  0116738  ori 8, 30, 0
  011673c  ori 3, 25, 0
  0116740  li 9, 1
  0116744  ori 5, 5, 32767
  0116748  ori 6, 6, 65535
  011674c  bl 0x1268f8
  0116750  nop
  0116754  addic 28, 28, 1
  0116758  b 0x1165b8
  011675c  ld 0, 400(1)
  0116760  mtlr 0
  0116764  lfd 19, 280(1)
  0116768  lfd 20, 288(1)
  011676c  lfd 21, 296(1)
  0116770  lfd 22, 304(1)
  0116774  lfd 23, 312(1)
  0116778  lfd 24, 320(1)
  011677c  lfd 25, 328(1)
  0116780  lfd 26, 336(1)
  0116784  lfd 27, 344(1)
  0116788  lfd 28, 352(1)
  011678c  lfd 29, 360(1)
  0116790  lfd 30, 368(1)
  0116794  lfd 31, 376(1)
  0116798  ld 23, 208(1)
  011679c  ld 24, 216(1)
  01167a0  ld 25, 224(1)
  01167a4  ld 26, 232(1)
  01167a8  ld 27, 240(1)
  01167ac  ld 28, 248(1)
  01167b0  ld 29, 256(1)
  01167b4  ld 30, 264(1)
  01167b8  ld 31, 272(1)
  01167bc  addi 1, 1, 384
  01167c0  blr

MB_UpdateManipulatorRot:   # 0x1167c8, 0x284 bytes
  01167c8  stdu 1, -224(1)
  01167cc  mflr 0
  01167d0  std 0, 240(1)
  01167d4  stfd 29, 200(1)
  01167d8  stfd 30, 208(1)
  01167dc  stfd 31, 216(1)
  01167e0  std 29, 176(1)
  01167e4  ori 29, 3, 0
  01167e8  std 30, 184(1)
  01167ec  lwz 3, 120(4)
  01167f0  ori 30, 4, 0
  01167f4  std 31, 192(1)
  01167f8  fmr 30, 1
  01167fc  ori 31, 5, 0
  0116800  cmpwi 3, 0
  0116804  std 28, 168(1)
  0116808  std 27, 160(1)
  011680c  fmr 31, 2
  0116810  bf 2, 0x11681c
  0116814  stw 29, 120(30)
  0116818  b 0x116854
  011681c  cmpw 3, 29
  0116820  bt 2, 0x116854
  0116824  lbz 4, 1(30)
  0116828  cmpwi 4, 0
  011682c  bt 2, 0x116848
  0116830  lbz 4, 32(3)
  0116834  cmpwi 4, 127
  0116838  bf 0, 0x116848
  011683c  ori 4, 30, 0
  0116840  bl 0xf0f1c
  0116844  nop
  0116848  li 3, 0
  011684c  stb 3, 1(30)
  0116850  stw 29, 120(30)
  0116854  lis 3, 17
  0116858  lwz 4, 96(30)
  011685c  addi 3, 3, 26564
  0116860  lfs 1, 96(30)
  0116864  cmpwi 4, 0
  0116868  lfs 29, 0(3)
  011686c  bf 2, 0x116900
  0116870  lwz 3, 100(30)
  0116874  cmpwi 3, 0
  0116878  bf 2, 0x116900
  011687c  lwz 3, 104(30)
  0116880  cmpwi 3, 0
  0116884  bf 2, 0x116900
  0116888  lis 3, 16256
  011688c  lwz 4, 112(30)
  0116890  cmpw 4, 3
  0116894  bf 2, 0x116900
  0116898  lis 3, 15267
  011689c  lwz 4, 64(30)
  01168a0  ori 3, 3, 55050
  01168a4  clrlwi 4, 4, 1
  01168a8  cmpw 4, 3
  01168ac  bf 0, 0x116900
  01168b0  lis 3, 15267
  01168b4  lwz 4, 68(30)
  01168b8  ori 3, 3, 55050
  01168bc  clrlwi 4, 4, 1
  01168c0  cmpw 4, 3
  01168c4  bf 0, 0x116900
  01168c8  lis 3, 15267
  01168cc  lwz 4, 72(30)
  01168d0  ori 3, 3, 55050
  01168d4  clrlwi 4, 4, 1
  01168d8  cmpw 4, 3
  01168dc  bf 0, 0x116900
  01168e0  lbz 3, 1(30)
  01168e4  cmpwi 3, 0
  01168e8  bt 2, 0x116a1c
  01168ec  ori 3, 29, 0
  01168f0  ori 4, 30, 0
  01168f4  bl 0xf0f1c
  01168f8  nop
  01168fc  b 0x116a1c
  0116900  addic 3, 30, 64
  0116904  fmr 2, 30
  0116908  addic 5, 30, 80
  011690c  fmr 3, 31
  0116910  li 9, 0
  0116914  fmr 4, 29
  0116918  bl 0x10a050
  011691c  addic 3, 30, 68
  0116920  lfs 1, 100(30)
  0116924  addic 5, 30, 84
  0116928  fmr 2, 30
  011692c  li 9, 0
  0116930  fmr 3, 31
  0116934  fmr 4, 29
  0116938  bl 0x10a050
  011693c  addic 3, 30, 72
  0116940  lfs 1, 104(30)
  0116944  addic 5, 30, 88
  0116948  fmr 2, 30
  011694c  li 9, 0
  0116950  fmr 3, 31
  0116954  fmr 4, 29
  0116958  bl 0x10a050
  011695c  lbz 3, 1(30)
  0116960  cmpwi 3, 0
  0116964  bf 2, 0x11697c
  0116968  ori 3, 29, 0
  011696c  ori 4, 31, 0
  0116970  ori 5, 30, 0
  0116974  bl 0xf0ea8
  0116978  nop
  011697c  addic 31, 1, 144
  0116980  lfs 1, 64(30)
  0116984  li 4, 0
  0116988  ori 3, 31, 0
  011698c  bl 0x501980
  0116990  nop
  0116994  addic 29, 1, 128
  0116998  lfs 1, 68(30)
  011699c  li 4, 1
  01169a0  ori 3, 29, 0
  01169a4  bl 0x501980
  01169a8  nop
  01169ac  addic 28, 1, 112
  01169b0  lfs 1, 72(30)
  01169b4  li 4, 2
  01169b8  ori 3, 28, 0
  01169bc  bl 0x501980
  01169c0  nop
  01169c4  addic 27, 30, 16
  01169c8  ori 4, 31, 0
  01169cc  ori 3, 27, 0
  01169d0  ori 5, 29, 0
  01169d4  bl 0x5017c4
  01169d8  nop
  01169dc  ori 3, 27, 0
  01169e0  ori 4, 27, 0
  01169e4  ori 5, 28, 0
  01169e8  bl 0x5017c4
  01169ec  nop
  01169f0  lfs 1, 112(30)
  01169f4  li 3, 0
  01169f8  stfs 1, 32(30)
  01169fc  stfs 1, 36(30)
  0116a00  lis 4, 16256
  0116a04  stfs 1, 40(30)
  0116a08  stw 3, 108(30)
  0116a0c  stw 3, 104(30)
  0116a10  stw 3, 100(30)
  0116a14  stw 3, 96(30)
  0116a18  stw 4, 112(30)
  0116a1c  ld 0, 240(1)
  0116a20  mtlr 0
  0116a24  lfd 29, 200(1)
  0116a28  lfd 30, 208(1)
  0116a2c  lfd 31, 216(1)
  0116a30  ld 27, 160(1)
  0116a34  ld 28, 168(1)
  0116a38  ld 29, 176(1)
  0116a3c  ld 30, 184(1)
  0116a40  ld 31, 192(1)
  0116a44  addi 1, 1, 224
  0116a48  blr

MB_BobMotion:   # 0x116a68, 0xe8 bytes
  0116a68  stdu 1, -160(1)
  0116a6c  mflr 0
  0116a70  std 0, 176(1)
  0116a74  stfd 31, 152(1)
  0116a78  std 31, 144(1)
  0116a7c  std 29, 128(1)
  0116a80  ori 31, 4, 0
  0116a84  fmr 31, 1
  0116a88  std 30, 136(1)
  0116a8c  ori 29, 3, 0
  0116a90  ori 30, 5, 0
  0116a94  lis 3, 17
  0116a98  std 28, 120(1)
  0116a9c  lfs 1, 0(31)
  0116aa0  addi 28, 3, 27212
  0116aa4  bl 0x502578
  0116aa8  nop
  0116aac  stfs 1, 0(31)
  0116ab0  lfs 1, 24(29)
  0116ab4  lfs 2, 0(30)
  0116ab8  fsubs 1, 1, 2
  0116abc  stfs 1, 24(29)
  0116ac0  lfs 1, 0(28)
  0116ac4  lfs 2, 0(31)
  0116ac8  lfs 3, 4(28)
  0116acc  fsubs 1, 1, 2
  0116ad0  fsubs 3, 3, 2
  0116ad4  lfs 5, 8(28)
  0116ad8  fsub 4, 2, 1
  0116adc  fsel 1, 4, 1, 2
  0116ae0  lfs 2, 12(28)
  0116ae4  fsub 4, 3, 1
  0116ae8  fsel 1, 4, 3, 1
  0116aec  lfs 3, 16(28)
  0116af0  lfs 4, 20(28)
  0116af4  fmuls 6, 1, 1
  0116af8  fmuls 7, 6, 1
  0116afc  fmuls 8, 6, 7
  0116b00  fmadds 1, 7, 5, 1
  0116b04  fmuls 5, 6, 8
  0116b08  fmadds 1, 8, 2, 1
  0116b0c  fmuls 2, 6, 5
  0116b10  fmadds 1, 5, 3, 1
  0116b14  fmadds 1, 2, 4, 1
  0116b18  fmuls 1, 1, 31
  0116b1c  stfs 1, 0(30)
  0116b20  lfs 2, 24(29)
  0116b24  fadds 1, 2, 1
  0116b28  stfs 1, 24(29)
  0116b2c  ld 0, 176(1)
  0116b30  mtlr 0
  0116b34  lfd 31, 152(1)
  0116b38  ld 28, 120(1)
  0116b3c  ld 29, 128(1)
  0116b40  ld 30, 136(1)
  0116b44  ld 31, 144(1)
  0116b48  addi 1, 1, 160
  0116b4c  blr

MB_SwingMotion:   # 0x116b70, 0x1ac bytes
  0116b70  stdu 1, -144(1)
  0116b74  mflr 0
  0116b78  std 0, 160(1)
  0116b7c  stfd 30, 128(1)
  0116b80  stfd 31, 136(1)
  0116b84  std 31, 120(1)
  0116b88  lis 6, 17
  0116b8c  ori 31, 4, 0
  0116b90  std 30, 112(1)
  0116b94  addi 6, 6, 27472
  0116b98  ori 30, 5, 0
  0116b9c  lfs 4, 0(6)
  0116ba0  lfs 5, 0(31)
  0116ba4  lfs 6, 0(30)
  0116ba8  fsubs 9, 4, 5
  0116bac  lfs 7, 4(6)
  0116bb0  fsubs 8, 4, 6
  0116bb4  fsubs 10, 7, 6
  0116bb8  fsubs 11, 7, 5
  0116bbc  lfs 0, 8(6)
  0116bc0  fsub 13, 5, 9
  0116bc4  fsub 12, 6, 8
  0116bc8  fsel 5, 13, 9, 5
  0116bcc  fsel 6, 12, 8, 6
  0116bd0  lfs 8, 12(6)
  0116bd4  lfs 13, 16(6)
  0116bd8  fsub 12, 11, 5
  0116bdc  fsub 9, 10, 6
  0116be0  fsel 5, 12, 11, 5
  0116be4  fsel 6, 9, 10, 6
  0116be8  lfs 9, 20(6)
  0116bec  fmuls 11, 5, 5
  0116bf0  fmuls 10, 6, 6
  0116bf4  fmuls 31, 11, 5
  0116bf8  fmuls 12, 10, 6
  0116bfc  fmadds 5, 31, 0, 5
  0116c00  fmuls 30, 10, 12
  0116c04  fmadds 6, 12, 0, 6
  0116c08  fmuls 12, 11, 31
  0116c0c  fmuls 31, 10, 30
  0116c10  fmadds 6, 30, 8, 6
  0116c14  fmuls 30, 11, 12
  0116c18  fmadds 5, 12, 8, 5
  0116c1c  fmuls 10, 10, 31
  0116c20  fmadds 6, 31, 13, 6
  0116c24  fmuls 11, 11, 30
  0116c28  fmadds 5, 30, 13, 5
  0116c2c  fmr 31, 3
  0116c30  fmadds 6, 10, 9, 6
  0116c34  fmadds 5, 11, 9, 5
  0116c38  fmuls 5, 1, 5
  0116c3c  fmuls 5, 5, 6
  0116c40  stfs 5, 64(3)
  0116c44  lfs 5, 24(6)
  0116c48  lfs 6, 0(30)
  0116c4c  lfs 10, 0(31)
  0116c50  fadds 5, 6, 5
  0116c54  fsubs 11, 4, 10
  0116c58  fsubs 12, 7, 10
  0116c5c  fsubs 4, 4, 5
  0116c60  fsub 6, 10, 11
  0116c64  fsubs 7, 7, 5
  0116c68  fsel 6, 6, 11, 10
  0116c6c  fsub 10, 5, 4
  0116c70  fsub 11, 12, 6
  0116c74  fsel 4, 10, 4, 5
  0116c78  fsel 5, 11, 12, 6
  0116c7c  fsub 6, 7, 4
  0116c80  fmuls 10, 5, 5
  0116c84  fsel 3, 6, 7, 4
  0116c88  fmuls 4, 10, 5
  0116c8c  fmuls 6, 3, 3
  0116c90  fmuls 7, 10, 4
  0116c94  fmadds 4, 4, 0, 5
  0116c98  fmuls 5, 6, 3
  0116c9c  fmuls 11, 10, 7
  0116ca0  fmadds 4, 7, 8, 4
  0116ca4  fmuls 7, 6, 5
  0116ca8  fmadds 3, 5, 0, 3
  0116cac  fmuls 5, 10, 11
  0116cb0  fmadds 4, 11, 13, 4
  0116cb4  fmuls 10, 6, 7
  0116cb8  fmadds 3, 7, 8, 3
  0116cbc  fmadds 4, 5, 9, 4
  0116cc0  fmuls 5, 6, 10
  0116cc4  fmadds 3, 10, 13, 3
  0116cc8  fmuls 1, 1, 4
  0116ccc  fmadds 3, 5, 9, 3
  0116cd0  fmuls 1, 1, 3
  0116cd4  stfs 1, 68(3)
  0116cd8  lfs 1, 0(31)
  0116cdc  bl 0x502578
  0116ce0  nop
  0116ce4  stfs 1, 0(31)
  0116ce8  lfs 1, 0(30)
  0116cec  fmr 2, 31
  0116cf0  bl 0x502578
  0116cf4  nop
  0116cf8  stfs 1, 0(30)
  0116cfc  ld 0, 160(1)
  0116d00  mtlr 0
  0116d04  lfd 30, 128(1)
  0116d08  lfd 31, 136(1)
  0116d0c  ld 30, 112(1)
  0116d10  ld 31, 120(1)
  0116d14  addi 1, 1, 144
  0116d18  blr

MB_StoreChildOffsets:   # 0x116d1c, 0x19c bytes
  0116d1c  stdu 1, -336(1)
  0116d20  mflr 0
  0116d24  std 0, 352(1)
  0116d28  std 30, 320(1)
  0116d2c  std 28, 304(1)
  0116d30  ori 30, 3, 0
  0116d34  std 31, 328(1)
  0116d38  addic 28, 1, 112
  0116d3c  std 29, 312(1)
  0116d40  ori 31, 5, 0
  0116d44  ori 29, 4, 0
  0116d48  addic 4, 30, 64
  0116d4c  std 27, 296(1)
  0116d50  ori 3, 28, 0
  0116d54  bl 0x500b64
  0116d58  nop
  0116d5c  addic 3, 1, 160
  0116d60  ori 4, 28, 0
  0116d64  bl 0x5010c0
  0116d68  nop
  0116d6c  cmpwi 31, 0
  0116d70  li 28, 0
  0116d74  bf 1, 0x116e94
  0116d78  lwz 3, 32(29)
  0116d7c  cmpwi 3, -1
  0116d80  bt 2, 0x116e84
  0116d84  lis 4, 164
  0116d88  slwi 3, 3, 8
  0116d8c  addic 27, 1, 224
  0116d90  lwz 4, -28512(4)
  0116d94  lfs 1, 20(30)
  0116d98  addc 3, 4, 3
  0116d9c  lfs 2, 16(30)
  0116da0  clrldi 4, 3, 32
  0116da4  lfs 3, 176(1)
  0116da8  ori 3, 27, 0
  0116dac  lfs 4, 20(4)
  0116db0  lfs 5, 16(4)
  0116db4  fsubs 1, 4, 1
  0116db8  fsubs 2, 5, 2
  0116dbc  lfs 4, 180(1)
  0116dc0  lfs 5, 24(4)
  0116dc4  lfs 6, 24(30)
  0116dc8  lfs 7, 160(1)
  0116dcc  fsubs 5, 5, 6
  0116dd0  lfs 6, 184(1)
  0116dd4  lfs 8, 164(1)
  0116dd8  lfs 9, 188(1)
  0116ddc  fmuls 3, 3, 1
  0116de0  lfs 10, 168(1)
  0116de4  fmuls 4, 4, 1
  0116de8  fmuls 6, 6, 1
  0116dec  fmuls 1, 9, 1
  0116df0  lfs 9, 192(1)
  0116df4  lfs 11, 172(1)
  0116df8  lfs 12, 196(1)
  0116dfc  lfs 13, 28(4)
  0116e00  lfs 0, 200(1)
  0116e04  fmadds 3, 7, 2, 3
  0116e08  fmadds 4, 8, 2, 4
  0116e0c  fmadds 6, 10, 2, 6
  0116e10  lfs 7, 208(1)
  0116e14  fmadds 1, 11, 2, 1
  0116e18  addic 4, 4, 64
  0116e1c  lfs 2, 204(1)
  0116e20  lfs 8, 212(1)
  0116e24  lfs 10, 216(1)
  0116e28  lfs 11, 220(1)
  0116e2c  fmadds 3, 9, 5, 3
  0116e30  fmadds 4, 12, 5, 4
  0116e34  fmadds 6, 0, 5, 6
  0116e38  fmadds 1, 2, 5, 1
  0116e3c  fmadds 2, 7, 13, 3
  0116e40  fmadds 3, 8, 13, 4
  0116e44  fmadds 4, 10, 13, 6
  0116e48  fmadds 1, 11, 13, 1
  0116e4c  stfs 2, 0(29)
  0116e50  stfs 3, 4(29)
  0116e54  stfs 4, 8(29)
  0116e58  stfs 1, 12(29)
  0116e5c  bl 0x500ca4
  0116e60  nop
  0116e64  addic 4, 1, 160
  0116e68  ori 3, 27, 0
  0116e6c  ori 5, 27, 0
  0116e70  bl 0x50162c
  0116e74  nop
  0116e78  addic 4, 29, 16
  0116e7c  ori 3, 27, 0
  0116e80  bl 0x10c1e8
  0116e84  addic 28, 28, 1
  0116e88  addic 29, 29, 48
  0116e8c  cmpw 28, 31
  0116e90  bt 0, 0x116d78
  0116e94  ld 0, 352(1)
  0116e98  mtlr 0
  0116e9c  ld 27, 296(1)
  0116ea0  ld 28, 304(1)
  0116ea4  ld 29, 312(1)
  0116ea8  ld 30, 320(1)
  0116eac  ld 31, 328(1)
  0116eb0  addi 1, 1, 336
  0116eb4  blr

MB_UpdateChildMobys:   # 0x116eb8, 0x180 bytes
  0116eb8  stdu 1, -288(1)
  0116ebc  mflr 0
  0116ec0  std 0, 304(1)
  0116ec4  std 31, 280(1)
  0116ec8  std 30, 272(1)
  0116ecc  ori 31, 5, 0
  0116ed0  std 29, 264(1)
  0116ed4  ori 30, 3, 0
  0116ed8  ori 29, 4, 0
  0116edc  addic 3, 1, 112
  0116ee0  std 28, 256(1)
  0116ee4  std 27, 248(1)
  0116ee8  std 26, 240(1)
  0116eec  addic 4, 30, 64
  0116ef0  bl 0x500ca4
  0116ef4  nop
  0116ef8  cmpwi 31, 0
  0116efc  li 28, 0
  0116f00  bf 1, 0x117010
  0116f04  lwz 3, 32(29)
  0116f08  cmpwi 3, -1
  0116f0c  bt 2, 0x117000
  0116f10  lis 5, 164
  0116f14  slwi 6, 3, 8
  0116f18  addic 27, 1, 176
  0116f1c  addic 4, 29, 16
  0116f20  ori 3, 27, 0
  0116f24  lwz 5, -28512(5)
  0116f28  addc 5, 5, 6
  0116f2c  clrldi 26, 5, 32
  0116f30  bl 0x500ca4
  0116f34  nop
  0116f38  addic 4, 1, 112
  0116f3c  ori 3, 27, 0
  0116f40  ori 5, 27, 0
  0116f44  bl 0x50162c
  0116f48  nop
  0116f4c  addic 4, 26, 64
  0116f50  ori 3, 27, 0
  0116f54  bl 0x10c1e8
  0116f58  lfs 1, 128(1)
  0116f5c  lfs 2, 4(29)
  0116f60  lfs 3, 112(1)
  0116f64  fmuls 1, 1, 2
  0116f68  lfs 4, 0(29)
  0116f6c  lfs 5, 132(1)
  0116f70  lfs 6, 144(1)
  0116f74  fmuls 5, 5, 2
  0116f78  lfs 7, 8(29)
  0116f7c  lfs 8, 116(1)
  0116f80  lfs 9, 160(1)
  0116f84  ori 3, 26, 0
  0116f88  fmadds 1, 3, 4, 1
  0116f8c  lfs 3, 12(29)
  0116f90  lfs 10, 136(1)
  0116f94  lfs 11, 148(1)
  0116f98  fmadds 5, 8, 4, 5
  0116f9c  fmuls 2, 10, 2
  0116fa0  lfs 8, 120(1)
  0116fa4  fmadds 1, 6, 7, 1
  0116fa8  lfs 6, 164(1)
  0116fac  lfs 10, 16(30)
  0116fb0  lfs 12, 152(1)
  0116fb4  fmadds 5, 11, 7, 5
  0116fb8  fmadds 2, 8, 4, 2
  0116fbc  lfs 4, 168(1)
  0116fc0  fmadds 1, 9, 3, 1
  0116fc4  fmadds 5, 6, 3, 5
  0116fc8  fmadds 2, 12, 7, 2
  0116fcc  fadds 1, 10, 1
  0116fd0  fmadds 2, 4, 3, 2
  0116fd4  stfs 1, 16(26)
  0116fd8  lfs 1, 20(30)
  0116fdc  fadds 1, 1, 5
  0116fe0  stfs 1, 20(26)
  0116fe4  lfs 1, 24(30)
  0116fe8  fadds 1, 1, 2
  0116fec  stfs 1, 24(26)
  0116ff0  lfs 1, 28(30)
  0116ff4  stfs 1, 28(26)
  0116ff8  bl 0xf31a8
  0116ffc  nop
  0117000  addic 28, 28, 1
  0117004  addic 29, 29, 48
  0117008  cmpw 28, 31
  011700c  bt 0, 0x116f04
  0117010  ld 0, 304(1)
  0117014  mtlr 0
  0117018  ld 26, 240(1)
  011701c  ld 27, 248(1)
  0117020  ld 28, 256(1)
  0117024  ld 29, 264(1)
  0117028  ld 30, 272(1)
  011702c  ld 31, 280(1)
  0117030  addi 1, 1, 288
  0117034  blr

MB_RotateAboutPivot:   # 0x117038, 0x200 bytes
  0117038  stdu 1, -368(1)
  011703c  mflr 0
  0117040  std 0, 384(1)
  0117044  stfd 24, 304(1)
  0117048  stfd 25, 312(1)
  011704c  stfd 26, 320(1)
  0117050  stfd 27, 328(1)
  0117054  stfd 28, 336(1)
  0117058  stfd 29, 344(1)
  011705c  stfd 30, 352(1)
  0117060  stfd 31, 360(1)
  0117064  std 31, 296(1)
  0117068  std 30, 288(1)
  011706c  ori 31, 4, 0
  0117070  ori 30, 3, 0
  0117074  std 29, 280(1)
  0117078  fmr 29, 1
  011707c  addic 29, 1, 128
  0117080  std 28, 272(1)
  0117084  fmr 31, 3
  0117088  addic 28, 30, 64
  011708c  fmr 30, 2
  0117090  ori 3, 29, 0
  0117094  std 27, 264(1)
  0117098  ori 4, 28, 0
  011709c  bl 0x500ca4
  01170a0  nop
  01170a4  lfs 1, 144(1)
  01170a8  addic 27, 1, 192
  01170ac  lfs 2, 4(31)
  01170b0  addic 4, 1, 112
  01170b4  lfs 3, 148(1)
  01170b8  ori 3, 27, 0
  01170bc  lfs 4, 128(1)
  01170c0  fmuls 1, 1, 2
  01170c4  lfs 5, 0(31)
  01170c8  fmuls 3, 3, 2
  01170cc  lfs 6, 152(1)
  01170d0  lfs 7, 132(1)
  01170d4  fmuls 2, 6, 2
  01170d8  lfs 6, 136(1)
  01170dc  lfs 8, 160(1)
  01170e0  lfs 9, 8(31)
  01170e4  lfs 28, 12(31)
  01170e8  lfs 27, 176(1)
  01170ec  fmadds 1, 4, 5, 1
  01170f0  fmadds 3, 7, 5, 3
  01170f4  lfs 4, 164(1)
  01170f8  lfs 26, 180(1)
  01170fc  fmadds 2, 6, 5, 2
  0117100  lfs 5, 168(1)
  0117104  lfs 25, 184(1)
  0117108  stfs 29, 112(1)
  011710c  stfs 30, 116(1)
  0117110  stfs 31, 120(1)
  0117114  fmadds 29, 8, 9, 1
  0117118  fmadds 24, 4, 9, 3
  011711c  fmadds 31, 5, 9, 2
  0117120  bl 0x500ca4
  0117124  nop
  0117128  ori 3, 29, 0
  011712c  ori 4, 29, 0
  0117130  ori 5, 27, 0
  0117134  bl 0x50162c
  0117138  nop
  011713c  lfs 1, 144(1)
  0117140  lfs 2, 4(31)
  0117144  lfs 3, 148(1)
  0117148  lfs 4, 128(1)
  011714c  lfs 5, 0(31)
  0117150  fmuls 1, 1, 2
  0117154  lfs 6, 152(1)
  0117158  fmuls 3, 3, 2
  011715c  lfs 7, 132(1)
  0117160  fmadds 11, 27, 28, 29
  0117164  fmuls 2, 6, 2
  0117168  lfs 6, 136(1)
  011716c  lfs 8, 160(1)
  0117170  lfs 9, 8(31)
  0117174  ori 3, 29, 0
  0117178  ori 4, 28, 0
  011717c  fmadds 1, 4, 5, 1
  0117180  fmadds 3, 7, 5, 3
  0117184  lfs 4, 164(1)
  0117188  fmadds 2, 6, 5, 2
  011718c  lfs 7, 168(1)
  0117190  lfs 10, 176(1)
  0117194  lfs 5, 12(31)
  0117198  lfs 6, 180(1)
  011719c  lfs 12, 184(1)
  01171a0  fmadds 1, 8, 9, 1
  01171a4  fmadds 3, 4, 9, 3
  01171a8  fmadds 4, 26, 28, 24
  01171ac  fmadds 2, 7, 9, 2
  01171b0  fmadds 7, 25, 28, 31
  01171b4  fmadds 1, 10, 5, 1
  01171b8  fmadds 3, 6, 5, 3
  01171bc  lfs 6, 16(30)
  01171c0  fmadds 2, 12, 5, 2
  01171c4  lfs 5, 20(30)
  01171c8  lfs 8, 24(30)
  01171cc  fsubs 1, 11, 1
  01171d0  fsubs 3, 4, 3
  01171d4  fsubs 2, 7, 2
  01171d8  fadds 1, 6, 1
  01171dc  fadds 3, 5, 3
  01171e0  fadds 2, 8, 2
  01171e4  stfs 1, 16(30)
  01171e8  stfs 3, 20(30)
  01171ec  stfs 2, 24(30)
  01171f0  bl 0x10c1e8
  01171f4  ld 0, 384(1)
  01171f8  mtlr 0
  01171fc  lfd 24, 304(1)
  0117200  lfd 25, 312(1)
  0117204  lfd 26, 320(1)
  0117208  lfd 27, 328(1)
  011720c  lfd 28, 336(1)
  0117210  lfd 29, 344(1)
  0117214  lfd 30, 352(1)
  0117218  lfd 31, 360(1)
  011721c  ld 27, 264(1)
  0117220  ld 28, 272(1)
  0117224  ld 29, 280(1)
  0117228  ld 30, 288(1)
  011722c  ld 31, 296(1)
  0117230  addi 1, 1, 368
  0117234  blr

MB_AddVectorSphere:   # 0x117238, 0x74 bytes
  0117238  stdu 1, -144(1)
  011723c  mflr 0
  0117240  std 0, 160(1)
  0117244  std 31, 136(1)
  0117248  std 30, 128(1)
  011724c  ori 31, 4, 0
  0117250  ori 30, 3, 0
  0117254  addic 3, 1, 112
  0117258  bl 0xfe610
  011725c  lfs 1, 112(1)
  0117260  lfs 2, 0(31)
  0117264  lfs 3, 116(1)
  0117268  fadds 1, 1, 2
  011726c  lfs 2, 4(31)
  0117270  lfs 4, 120(1)
  0117274  fadds 2, 3, 2
  0117278  lfs 3, 8(31)
  011727c  fadds 3, 4, 3
  0117280  lfs 4, 124(1)
  0117284  stfs 4, 12(30)
  0117288  stfs 1, 0(30)
  011728c  stfs 2, 4(30)
  0117290  stfs 3, 8(30)
  0117294  ld 0, 160(1)
  0117298  mtlr 0
  011729c  ld 30, 128(1)
  01172a0  ld 31, 136(1)
  01172a4  addi 1, 1, 144
  01172a8  blr

MB_WorldToScreenCell:   # 0x1172b0, 0xd0 bytes
  01172b0  stdu 1, -192(1)
  01172b4  mflr 0
  01172b8  std 0, 208(1)
  01172bc  stfd 31, 184(1)
  01172c0  std 31, 176(1)
  01172c4  std 30, 168(1)
  01172c8  ori 31, 4, 0
  01172cc  ori 30, 5, 0
  01172d0  lis 5, 17
  01172d4  ori 4, 3, 0
  01172d8  std 29, 160(1)
  01172dc  addic 3, 1, 112
  01172e0  std 28, 152(1)
  01172e4  addi 29, 5, 29356
  01172e8  bl 0x65490
  01172ec  nop
  01172f0  lis 3, 150
  01172f4  addic 28, 3, 27392
  01172f8  lwz 3, 16(28)
  01172fc  extsw 3, 3
  0117300  std 3, 128(1)
  0117304  lfs 1, 112(1)
  0117308  lfs 31, 0(29)
  011730c  lfd 2, 128(1)
  0117310  fcfid 2, 2
  0117314  frsp 2, 2
  0117318  fsubs 1, 1, 2
  011731c  fmuls 1, 1, 31
  0117320  bl 0x502758
  0117324  nop
  0117328  stw 3, 0(31)
  011732c  lwz 3, 20(28)
  0117330  extsw 3, 3
  0117334  std 3, 128(1)
  0117338  lfs 1, 116(1)
  011733c  lfd 2, 128(1)
  0117340  fcfid 2, 2
  0117344  frsp 2, 2
  0117348  fsubs 1, 1, 2
  011734c  fmuls 1, 1, 31
  0117350  bl 0x502758
  0117354  nop
  0117358  stw 3, 0(30)
  011735c  ld 0, 208(1)
  0117360  mtlr 0
  0117364  lfd 31, 184(1)
  0117368  ld 28, 152(1)
  011736c  ld 29, 160(1)
  0117370  ld 30, 168(1)
  0117374  ld 31, 176(1)
  0117378  addi 1, 1, 192
  011737c  blr

MB_PathEvalSpline:   # 0x117390, 0x8d0 bytes
  0117390  stdu 1, -400(1)
  0117394  mflr 0
  0117398  std 0, 416(1)
  011739c  stfd 26, 352(1)
  01173a0  stfd 27, 360(1)
  01173a4  stfd 28, 368(1)
  01173a8  stfd 29, 376(1)
  01173ac  stfd 30, 384(1)
  01173b0  stfd 31, 392(1)
  01173b4  std 31, 344(1)
  01173b8  std 26, 304(1)
  01173bc  ori 31, 3, 0
  01173c0  ori 26, 5, 0
  01173c4  std 27, 312(1)
  01173c8  fmr 31, 1
  01173cc  std 29, 328(1)
  01173d0  std 28, 320(1)
  01173d4  li 27, 0
  01173d8  ori 28, 8, 0
  01173dc  std 30, 336(1)
  01173e0  ori 29, 7, 0
  01173e4  ori 30, 6, 0
  01173e8  bl 0x502758
  01173ec  nop
  01173f0  cmpwi 26, 0
  01173f4  lwz 4, 0(31)
  01173f8  bf 2, 0x117410
  01173fc  addic 5, 4, -2
  0117400  cmpw 3, 5
  0117404  bt 0, 0x117410
  0117408  li 27, 1
  011740c  ori 3, 5, 0
  0117410  extsw 5, 3
  0117414  cmpwi 27, 0
  0117418  std 5, 288(1)
  011741c  lfd 1, 288(1)
  0117420  fcfid 1, 1
  0117424  frsp 1, 1
  0117428  fsubs 31, 31, 1
  011742c  bt 2, 0x11744c
  0117430  lis 5, 17
  0117434  addi 5, 5, 29568
  0117438  lfs 1, 0(5)
  011743c  fcmpu 0, 31, 1
  0117440  cror 6, 0, 2
  0117444  bt 6, 0x11744c
  0117448  fmr 31, 1
  011744c  addic 5, 3, 2
  0117450  addic 6, 3, 1
  0117454  cmpw 5, 4
  0117458  bt 0, 0x117474
  011745c  divw 7, 6, 4
  0117460  divw 8, 5, 4
  0117464  mullw 7, 7, 4
  0117468  mullw 4, 8, 4
  011746c  subc 6, 6, 7
  0117470  subc 5, 5, 4
  0117474  sldi 4, 6, 4
  0117478  sldi 3, 3, 4
  011747c  addc 4, 31, 4
  0117480  addc 3, 31, 3
  0117484  clrldi 4, 4, 32
  0117488  clrldi 3, 3, 32
  011748c  lis 6, 17
  0117490  addi 6, 6, 29568
  0117494  lfs 3, 16(4)
  0117498  lfs 2, 16(3)
  011749c  lfs 6, 20(3)
  01174a0  lfs 7, 24(3)
  01174a4  fsubs 8, 3, 2
  01174a8  lfs 4, 20(4)
  01174ac  lfs 5, 24(4)
  01174b0  fsubs 9, 4, 6
  01174b4  lfs 30, 4(6)
  01174b8  fsubs 10, 5, 7
  01174bc  lfs 27, 28(3)
  01174c0  lfs 1, 28(4)
  01174c4  clrlwi 3, 28, 31
  01174c8  stfs 1, 12(30)
  01174cc  cmpwi 3, 0
  01174d0  fmadds 2, 31, 8, 2
  01174d4  fmadds 11, 31, 9, 6
  01174d8  fmadds 7, 31, 10, 7
  01174dc  fmr 6, 30
  01174e0  stfs 2, 0(30)
  01174e4  stfs 11, 4(30)
  01174e8  stfs 7, 8(30)
  01174ec  bf 2, 0x117c20
  01174f0  fabs 11, 8
  01174f4  stfs 8, 148(1)
  01174f8  fabs 12, 9
  01174fc  stfs 9, 152(1)
  0117500  lis 3, 115
  0117504  lis 6, 17
  0117508  addic 3, 3, 22784
  011750c  addi 6, 6, 29568
  0117510  fsubs 2, 11, 12
  0117514  stfs 2, 156(1)
  0117518  lwz 4, 148(1)
  011751c  lfs 2, 148(1)
  0117520  lwz 7, 152(1)
  0117524  lfs 7, 152(1)
  0117528  lwz 8, 156(1)
  011752c  rlwinm 7, 7, 3, 29, 29
  0117530  lfs 13, 156(1)
  0117534  fabs 2, 2
  0117538  rlwimi 7, 8, 2, 30, 30
  011753c  fabs 28, 7
  0117540  fsub 0, 13, 30
  0117544  rlwimi 7, 4, 4, 28, 28
  0117548  fsub 13, 13, 30
  011754c  ori 4, 3, 0
  0117550  rlwimi 4, 7, 2, 26, 28
  0117554  slwi 7, 7, 2
  0117558  clrldi 4, 4, 32
  011755c  fsel 12, 0, 2, 12
  0117560  lfsx 29, 3, 7
  0117564  lfs 7, 4(4)
  0117568  lfs 2, 8(6)
  011756c  fsel 11, 13, 28, 11
  0117570  fcmpu 0, 12, 30
  0117574  bt 1, 0x117580
  0117578  fmr 29, 30
  011757c  b 0x117698
  0117580  fsubs 13, 11, 12
  0117584  fadds 11, 11, 12
  0117588  addic 4, 1, 16
  011758c  li 8, 2
  0117590  addic 6, 4, 240
  0117594  addic 7, 4, 256
  0117598  mtctr 8
  011759c  fdivs 11, 13, 11
  01175a0  fmuls 12, 11, 11
  01175a4  stfs 11, 268(1)
  01175a8  stfs 11, 260(1)
  01175ac  stfs 11, 264(1)
  01175b0  stfs 11, 256(1)
  01175b4  lfs 0, 268(1)
  01175b8  lfs 28, 260(1)
  01175bc  lfs 26, 264(1)
  01175c0  fmuls 13, 12, 12
  01175c4  fmuls 28, 28, 12
  01175c8  fmuls 0, 0, 13
  01175cc  fmuls 11, 13, 13
  01175d0  fmuls 13, 26, 13
  01175d4  stfs 28, 260(1)
  01175d8  fmuls 12, 0, 12
  01175dc  stfs 13, 264(1)
  01175e0  stfs 12, 268(1)
  01175e4  lfs 12, 240(4)
  01175e8  fmuls 12, 12, 11
  01175ec  stfs 12, 256(4)
  01175f0  lfs 12, 4(6)
  01175f4  addic 4, 4, 8
  01175f8  addic 6, 6, 8
  01175fc  fmuls 12, 12, 11
  0117600  stfs 12, 4(7)
  0117604  addic 7, 7, 8
  0117608  bdnz 0x1175e4
  011760c  li 7, 4
  0117610  ori 4, 1, 0
  0117614  mtctr 7
  0117618  lis 6, 115
  011761c  addic 7, 4, 256
  0117620  addic 6, 6, 22752
  0117624  ori 9, 7, 0
  0117628  lfs 11, 256(4)
  011762c  lfs 12, 0(6)
  0117630  fmuls 11, 11, 12
  0117634  lfs 12, 4(6)
  0117638  addic 6, 6, 8
  011763c  stfs 11, 256(4)
  0117640  lfs 11, 4(7)
  0117644  addic 4, 4, 8
  0117648  fmuls 11, 11, 12
  011764c  stfs 11, 4(7)
  0117650  addic 7, 7, 8
  0117654  bdnz 0x117628
  0117658  fmr 11, 30
  011765c  ori 4, 1, 0
  0117660  mtctr 8
  0117664  lfs 12, 256(4)
  0117668  fadds 11, 11, 12
  011766c  addic 4, 4, 16
  0117670  lfs 12, 4(9)
  0117674  lfs 13, 8(9)
  0117678  lfs 0, 12(9)
  011767c  addic 9, 9, 16
  0117680  fadds 11, 11, 12
  0117684  fadds 11, 11, 13
  0117688  fadds 11, 11, 0
  011768c  bdnz 0x117664
  0117690  fadds 11, 11, 2
  0117694  fmadds 29, 11, 29, 7
  0117698  fmuls 7, 9, 9
  011769c  stfs 10, 140(1)
  01176a0  fabs 10, 10
  01176a4  fmadds 7, 8, 8, 7
  01176a8  fsqrts 7, 7
  01176ac  lwz 4, 140(1)
  01176b0  lfs 8, 140(1)
  01176b4  rlwinm 4, 4, 3, 29, 29
  01176b8  fabs 9, 8
  01176bc  fabs 11, 7
  01176c0  stfs 7, 136(1)
  01176c4  fsubs 7, 11, 10
  01176c8  stfs 7, 144(1)
  01176cc  lwz 6, 136(1)
  01176d0  lfs 7, 136(1)
  01176d4  lwz 7, 144(1)
  01176d8  lfs 8, 144(1)
  01176dc  fabs 7, 7
  01176e0  rlwimi 4, 7, 2, 30, 30
  01176e4  fsub 12, 8, 30
  01176e8  fsub 13, 8, 30
  01176ec  rlwimi 4, 6, 4, 28, 28
  01176f0  ori 6, 3, 0
  01176f4  rlwimi 6, 4, 2, 26, 28
  01176f8  slwi 4, 4, 2
  01176fc  clrldi 6, 6, 32
  0117700  fsel 10, 12, 7, 10
  0117704  lfsx 8, 3, 4
  0117708  fsel 9, 13, 9, 11
  011770c  lfs 7, 4(6)
  0117710  fcmpu 0, 10, 30
  0117714  bt 1, 0x117720
  0117718  fmr 28, 30
  011771c  b 0x117838
  0117720  fsubs 11, 9, 10
  0117724  fadds 9, 9, 10
  0117728  addic 4, 1, 16
  011772c  li 9, 2
  0117730  addic 6, 4, 208
  0117734  addic 7, 4, 224
  0117738  mtctr 9
  011773c  fdivs 9, 11, 9
  0117740  fmuls 10, 9, 9
  0117744  stfs 9, 236(1)
  0117748  stfs 9, 228(1)
  011774c  stfs 9, 232(1)
  0117750  stfs 9, 224(1)
  0117754  lfs 12, 236(1)
  0117758  lfs 13, 228(1)
  011775c  lfs 0, 232(1)
  0117760  fmuls 11, 10, 10
  0117764  fmuls 13, 13, 10
  0117768  fmuls 12, 12, 11
  011776c  fmuls 9, 11, 11
  0117770  fmuls 11, 0, 11
  0117774  stfs 13, 228(1)
  0117778  fmuls 10, 12, 10
  011777c  stfs 11, 232(1)
  0117780  stfs 10, 236(1)
  0117784  lfs 10, 208(4)
  0117788  fmuls 10, 10, 9
  011778c  stfs 10, 224(4)
  0117790  lfs 10, 4(6)
  0117794  addic 4, 4, 8
  0117798  addic 6, 6, 8
  011779c  fmuls 10, 10, 9
  01177a0  stfs 10, 4(7)
  01177a4  addic 7, 7, 8
  01177a8  bdnz 0x117784
  01177ac  li 7, 4
  01177b0  ori 4, 1, 0
  01177b4  mtctr 7
  01177b8  lis 6, 115
  01177bc  addic 7, 4, 224
  01177c0  addic 6, 6, 22752
  01177c4  ori 8, 7, 0
  01177c8  lfs 9, 224(4)
  01177cc  lfs 10, 0(6)
  01177d0  fmuls 9, 9, 10
  01177d4  lfs 10, 4(6)
  01177d8  addic 6, 6, 8
  01177dc  stfs 9, 224(4)
  01177e0  lfs 9, 4(7)
  01177e4  addic 4, 4, 8
  01177e8  fmuls 9, 9, 10
  01177ec  stfs 9, 4(7)
  01177f0  addic 7, 7, 8
  01177f4  bdnz 0x1177c8
  01177f8  fmr 28, 30
  01177fc  ori 4, 1, 0
  0117800  mtctr 9
  0117804  lfs 9, 224(4)
  0117808  lfs 10, 4(8)
  011780c  fadds 9, 28, 9
  0117810  lfs 11, 8(8)
  0117814  addic 4, 4, 16
  0117818  lfs 28, 12(8)
  011781c  addic 8, 8, 16
  0117820  fadds 9, 9, 10
  0117824  fadds 9, 9, 11
  0117828  fadds 28, 9, 28
  011782c  bdnz 0x117804
  0117830  fadds 28, 28, 2
  0117834  fmadds 28, 28, 8, 7
  0117838  cmpwi 27, 0
  011783c  bt 2, 0x117850
  0117840  fmr 26, 29
  0117844  fmr 1, 28
  0117848  fmr 27, 30
  011784c  b 0x117bac
  0117850  sldi 4, 5, 4
  0117854  addc 4, 31, 4
  0117858  clrldi 4, 4, 32
  011785c  lfs 7, 16(4)
  0117860  lfs 8, 20(4)
  0117864  fsubs 3, 7, 3
  0117868  fsubs 4, 8, 4
  011786c  lfs 7, 24(4)
  0117870  fsubs 5, 7, 5
  0117874  fabs 9, 3
  0117878  fabs 10, 4
  011787c  stfs 3, 124(1)
  0117880  stfs 4, 128(1)
  0117884  fsubs 8, 9, 10
  0117888  stfs 8, 132(1)
  011788c  lwz 4, 124(1)
  0117890  lfs 7, 124(1)
  0117894  lwz 5, 128(1)
  0117898  lfs 8, 128(1)
  011789c  fabs 7, 7
  01178a0  lwz 6, 132(1)
  01178a4  rlwinm 5, 5, 3, 29, 29
  01178a8  lfs 11, 132(1)
  01178ac  fabs 8, 8
  01178b0  rlwimi 5, 6, 2, 30, 30
  01178b4  fsub 12, 11, 30
  01178b8  fsub 11, 11, 30
  01178bc  rlwimi 5, 4, 4, 28, 28
  01178c0  ori 4, 3, 0
  01178c4  rlwimi 4, 5, 2, 26, 28
  01178c8  slwi 5, 5, 2
  01178cc  clrldi 4, 4, 32
  01178d0  fsel 10, 12, 7, 10
  01178d4  lfsx 7, 3, 5
  01178d8  fsel 9, 11, 8, 9
  01178dc  lfs 8, 4(4)
  01178e0  fcmpu 0, 10, 30
  01178e4  bt 1, 0x1178f0
  01178e8  fmr 26, 30
  01178ec  b 0x117a08
  01178f0  fsubs 11, 9, 10
  01178f4  fadds 9, 9, 10
  01178f8  addic 4, 1, 16
  01178fc  li 7, 2
  0117900  addic 5, 4, 176
  0117904  addic 6, 4, 192
  0117908  mtctr 7
  011790c  fdivs 9, 11, 9
  0117910  fmuls 10, 9, 9
  0117914  stfs 9, 204(1)
  0117918  stfs 9, 196(1)
  011791c  stfs 9, 200(1)
  0117920  stfs 9, 192(1)
  0117924  lfs 12, 204(1)
  0117928  lfs 13, 196(1)
  011792c  lfs 0, 200(1)
  0117930  fmuls 11, 10, 10
  0117934  fmuls 13, 13, 10
  0117938  fmuls 12, 12, 11
  011793c  fmuls 9, 11, 11
  0117940  fmuls 11, 0, 11
  0117944  stfs 13, 196(1)
  0117948  fmuls 10, 12, 10
  011794c  stfs 11, 200(1)
  0117950  stfs 10, 204(1)
  0117954  lfs 10, 176(4)
  0117958  fmuls 10, 10, 9
  011795c  stfs 10, 192(4)
  0117960  lfs 10, 4(5)
  0117964  addic 4, 4, 8
  0117968  addic 5, 5, 8
  011796c  fmuls 10, 10, 9
  0117970  stfs 10, 4(6)
  0117974  addic 6, 6, 8
  0117978  bdnz 0x117954
  011797c  li 6, 4
  0117980  ori 4, 1, 0
  0117984  mtctr 6
  0117988  lis 5, 115
  011798c  addic 6, 4, 192
  0117990  addic 5, 5, 22752
  0117994  ori 8, 6, 0
  0117998  lfs 9, 192(4)
  011799c  lfs 10, 0(5)
  01179a0  fmuls 9, 9, 10
  01179a4  lfs 10, 4(5)
  01179a8  addic 5, 5, 8
  01179ac  stfs 9, 192(4)
  01179b0  lfs 9, 4(6)
  01179b4  addic 4, 4, 8
  01179b8  fmuls 9, 9, 10
  01179bc  stfs 9, 4(6)
  01179c0  addic 6, 6, 8
  01179c4  bdnz 0x117998
  01179c8  fmr 26, 30
  01179cc  ori 4, 1, 0
  01179d0  mtctr 7
  01179d4  lfs 9, 192(4)
  01179d8  lfs 10, 4(8)
  01179dc  fadds 9, 26, 9
  01179e0  lfs 11, 8(8)
  01179e4  addic 4, 4, 16
  01179e8  lfs 26, 12(8)
  01179ec  addic 8, 8, 16
  01179f0  fadds 9, 9, 10
  01179f4  fadds 9, 9, 11
  01179f8  fadds 26, 9, 26
  01179fc  bdnz 0x1179d4
  0117a00  fadds 26, 26, 2
  0117a04  fmadds 26, 26, 7, 8
  0117a08  fmuls 4, 4, 4
  0117a0c  stfs 5, 116(1)
  0117a10  fabs 7, 5
  0117a14  fmadds 3, 3, 3, 4
  0117a18  fsqrts 3, 3
  0117a1c  lwz 4, 116(1)
  0117a20  lfs 4, 116(1)
  0117a24  rlwinm 4, 4, 3, 29, 29
  0117a28  fabs 5, 4
  0117a2c  fabs 8, 3
  0117a30  stfs 3, 112(1)
  0117a34  fsubs 3, 8, 7
  0117a38  stfs 3, 120(1)
  0117a3c  lwz 5, 112(1)
  0117a40  lfs 3, 112(1)
  0117a44  lwz 6, 120(1)
  0117a48  lfs 4, 120(1)
  0117a4c  fabs 3, 3
  0117a50  rlwimi 4, 6, 2, 30, 30
  0117a54  fsub 9, 4, 30
  0117a58  fsub 10, 4, 30
  0117a5c  rlwimi 4, 5, 4, 28, 28
  0117a60  ori 5, 3, 0
  0117a64  rlwimi 5, 4, 2, 26, 28
  0117a68  slwi 4, 4, 2
  0117a6c  clrldi 5, 5, 32
  0117a70  fsel 7, 9, 3, 7
  0117a74  lfsx 3, 3, 4
  0117a78  lfs 4, 4(5)
  0117a7c  fsel 5, 10, 5, 8
  0117a80  fcmpu 0, 7, 30
  0117a84  bt 1, 0x117a8c
  0117a88  b 0x117ba0
  0117a8c  fsubs 8, 5, 7
  0117a90  fadds 5, 5, 7
  0117a94  addic 3, 1, 16
  0117a98  li 6, 2
  0117a9c  addic 5, 3, 160
  0117aa0  addic 4, 3, 144
  0117aa4  mtctr 6
  0117aa8  fdivs 5, 8, 5
  0117aac  fmuls 7, 5, 5
  0117ab0  stfs 5, 172(1)
  0117ab4  stfs 5, 164(1)
  0117ab8  stfs 5, 168(1)
  0117abc  stfs 5, 160(1)
  0117ac0  lfs 9, 172(1)
  0117ac4  lfs 10, 164(1)
  0117ac8  lfs 11, 168(1)
  0117acc  fmuls 8, 7, 7
  0117ad0  fmuls 10, 10, 7
  0117ad4  fmuls 9, 9, 8
  0117ad8  fmuls 5, 8, 8
  0117adc  fmuls 8, 11, 8
  0117ae0  stfs 10, 164(1)
  0117ae4  fmuls 7, 9, 7
  0117ae8  stfs 8, 168(1)
  0117aec  stfs 7, 172(1)
  0117af0  lfs 7, 144(3)
  0117af4  fmuls 7, 7, 5
  0117af8  stfs 7, 160(3)
  0117afc  lfs 7, 4(4)
  0117b00  addic 4, 4, 8
  0117b04  fmuls 7, 7, 5
  0117b08  addic 3, 3, 8
  0117b0c  stfs 7, 4(5)
  0117b10  addic 5, 5, 8
  0117b14  bdnz 0x117af0
  0117b18  li 5, 4
  0117b1c  ori 3, 1, 0
  0117b20  mtctr 5
  0117b24  lis 4, 115
  0117b28  addic 5, 3, 160
  0117b2c  addic 4, 4, 22752
  0117b30  ori 7, 5, 0
  0117b34  lfs 5, 160(3)
  0117b38  lfs 7, 0(4)
  0117b3c  fmuls 5, 5, 7
  0117b40  lfs 7, 4(4)
  0117b44  addic 4, 4, 8
  0117b48  stfs 5, 160(3)
  0117b4c  lfs 5, 4(5)
  0117b50  addic 3, 3, 8
  0117b54  fmuls 5, 5, 7
  0117b58  stfs 5, 4(5)
  0117b5c  addic 5, 5, 8
  0117b60  bdnz 0x117b34
  0117b64  ori 3, 1, 0
  0117b68  mtctr 6
  0117b6c  lfs 5, 160(3)
  0117b70  lfs 7, 4(7)
  0117b74  fadds 5, 30, 5
  0117b78  lfs 8, 8(7)
  0117b7c  addic 3, 3, 16
  0117b80  lfs 30, 12(7)
  0117b84  addic 7, 7, 16
  0117b88  fadds 5, 5, 7
  0117b8c  fadds 5, 5, 8
  0117b90  fadds 30, 5, 30
  0117b94  bdnz 0x117b6c
  0117b98  fadds 30, 30, 2
  0117b9c  fmadds 30, 30, 3, 4
  0117ba0  fmr 2, 1
  0117ba4  fmr 1, 30
  0117ba8  fmr 30, 2
  0117bac  fmr 2, 28
  0117bb0  stfs 6, 0(29)
  0117bb4  bl 0x5025e0
  0117bb8  nop
  0117bbc  fmuls 1, 1, 31
  0117bc0  fmr 2, 28
  0117bc4  bl 0x502578
  0117bc8  nop
  0117bcc  fneg 3, 1
  0117bd0  fmr 1, 26
  0117bd4  fmr 2, 29
  0117bd8  stfs 3, 4(29)
  0117bdc  bl 0x5025e0
  0117be0  nop
  0117be4  fmuls 1, 1, 31
  0117be8  fmr 2, 29
  0117bec  bl 0x502578
  0117bf0  nop
  0117bf4  stfs 1, 8(29)
  0117bf8  fmr 1, 30
  0117bfc  fmr 2, 27
  0117c00  bl 0x5025e0
  0117c04  nop
  0117c08  fmuls 1, 1, 31
  0117c0c  fmr 2, 27
  0117c10  bl 0x502578
  0117c14  nop
  0117c18  fneg 1, 1
  0117c1c  stfs 1, 12(29)
  0117c20  ld 0, 416(1)
  0117c24  mtlr 0
  0117c28  lfd 26, 352(1)
  0117c2c  lfd 27, 360(1)
  0117c30  lfd 28, 368(1)
  0117c34  lfd 29, 376(1)
  0117c38  lfd 30, 384(1)
  0117c3c  lfd 31, 392(1)
  0117c40  ld 26, 304(1)
  0117c44  ld 27, 312(1)
  0117c48  ld 28, 320(1)
  0117c4c  ld 29, 328(1)
  0117c50  ld 30, 336(1)
  0117c54  ld 31, 344(1)
  0117c58  addi 1, 1, 400
  0117c5c  blr

MB_HeroStandingOnMoby:   # 0x117c60, 0x58 bytes
  0117c60  lis 5, 151
  0117c64  addic 5, 5, -25376
  0117c68  lwz 6, 8332(5)
  0117c6c  lwz 4, 1272(5)
  0117c70  cmpwi 6, 3
  0117c74  bt 2, 0x117c84
  0117c78  lwz 6, 8324(5)
  0117c7c  cmpwi 6, 28
  0117c80  bf 2, 0x117c90
  0117c84  cmpw 4, 3
  0117c88  bt 2, 0x117ca8
  0117c8c  b 0x117cb0
  0117c90  lhz 4, 782(5)
  0117c94  cmpwi 4, 0
  0117c98  bf 2, 0x117cb0
  0117c9c  lwz 4, 764(5)
  0117ca0  cmpw 4, 3
  0117ca4  bf 2, 0x117cb0
  0117ca8  li 3, 1
  0117cac  b 0x117cb4
  0117cb0  li 3, 0
  0117cb4  blr

MB_IsPntInRangeAndArc:   # 0x117cc0, 0x278 bytes
  0117cc0  stdu 1, -176(1)
  0117cc4  mflr 0
  0117cc8  std 0, 192(1)
  0117ccc  stfd 31, 168(1)
  0117cd0  fmr 4, 2
  0117cd4  lfs 2, 8(4)
  0117cd8  fmr 31, 3
  0117cdc  lfs 5, 24(3)
  0117ce0  fsubs 2, 2, 5
  0117ce4  fabs 3, 2
  0117ce8  fcmpu 0, 3, 4
  0117cec  cror 6, 0, 2
  0117cf0  bt 6, 0x117cfc
  0117cf4  li 3, 0
  0117cf8  b 0x117f24
  0117cfc  fmr 4, 2
  0117d00  lfs 3, 4(4)
  0117d04  lfs 2, 20(3)
  0117d08  lfs 5, 0(4)
  0117d0c  fsubs 3, 3, 2
  0117d10  lfs 2, 16(3)
  0117d14  fsubs 2, 5, 2
  0117d18  fmuls 5, 3, 3
  0117d1c  fmadds 5, 2, 2, 5
  0117d20  fmadds 4, 4, 4, 5
  0117d24  fsqrts 4, 4
  0117d28  fcmpu 0, 4, 1
  0117d2c  cror 6, 0, 2
  0117d30  bt 6, 0x117d3c
  0117d34  li 3, 0
  0117d38  b 0x117f24
  0117d3c  lis 4, 17
  0117d40  addi 4, 4, 31928
  0117d44  lfs 1, 0(4)
  0117d48  fcmpu 0, 31, 1
  0117d4c  cror 6, 0, 2
  0117d50  bt 6, 0x117f20
  0117d54  fabs 6, 2
  0117d58  stfs 2, 112(1)
  0117d5c  fabs 5, 3
  0117d60  stfs 3, 116(1)
  0117d64  lis 4, 115
  0117d68  lfs 4, 72(3)
  0117d6c  addic 3, 4, 22784
  0117d70  fsubs 2, 6, 5
  0117d74  stfs 2, 120(1)
  0117d78  lwz 4, 112(1)
  0117d7c  lfs 2, 112(1)
  0117d80  lwz 5, 116(1)
  0117d84  lfs 3, 116(1)
  0117d88  fabs 2, 2
  0117d8c  lwz 6, 120(1)
  0117d90  rlwinm 5, 5, 3, 29, 29
  0117d94  lfs 7, 120(1)
  0117d98  fabs 9, 3
  0117d9c  rlwimi 5, 6, 2, 30, 30
  0117da0  fsub 8, 7, 1
  0117da4  fsub 7, 7, 1
  0117da8  rlwimi 5, 4, 4, 28, 28
  0117dac  ori 4, 3, 0
  0117db0  rlwimi 4, 5, 2, 26, 28
  0117db4  slwi 5, 5, 2
  0117db8  clrldi 4, 4, 32
  0117dbc  fsel 5, 8, 2, 5
  0117dc0  lfsx 3, 3, 5
  0117dc4  lfs 2, 4(4)
  0117dc8  fsel 6, 7, 9, 6
  0117dcc  fcmpu 0, 5, 1
  0117dd0  bt 1, 0x117dd8
  0117dd4  b 0x117efc
  0117dd8  fsubs 7, 6, 5
  0117ddc  fadds 5, 6, 5
  0117de0  addic 6, 1, 16
  0117de4  li 3, 2
  0117de8  addic 4, 6, 124
  0117dec  addic 5, 6, 108
  0117df0  mtctr 3
  0117df4  fdivs 5, 7, 5
  0117df8  fmuls 7, 5, 5
  0117dfc  stfs 5, 136(1)
  0117e00  stfs 5, 128(1)
  0117e04  stfs 5, 132(1)
  0117e08  stfs 5, 124(1)
  0117e0c  lfs 8, 136(1)
  0117e10  lfs 9, 128(1)
  0117e14  lfs 10, 132(1)
  0117e18  fmuls 5, 7, 7
  0117e1c  fmuls 9, 9, 7
  0117e20  fmuls 8, 8, 5
  0117e24  fmuls 6, 5, 5
  0117e28  fmuls 5, 10, 5
  0117e2c  stfs 9, 128(1)
  0117e30  fmuls 7, 8, 7
  0117e34  stfs 5, 132(1)
  0117e38  stfs 7, 136(1)
  0117e3c  lfs 5, 108(6)
  0117e40  fmuls 5, 5, 6
  0117e44  stfs 5, 124(6)
  0117e48  lfs 5, 4(5)
  0117e4c  addic 5, 5, 8
  0117e50  fmuls 5, 5, 6
  0117e54  addic 6, 6, 8
  0117e58  stfs 5, 4(4)
  0117e5c  addic 4, 4, 8
  0117e60  bdnz 0x117e3c
  0117e64  ori 7, 1, 0
  0117e68  li 4, 4
  0117e6c  lis 6, 115
  0117e70  addic 5, 7, 124
  0117e74  mtctr 4
  0117e78  addic 6, 6, 22752
  0117e7c  ori 4, 5, 0
  0117e80  lfs 5, 124(7)
  0117e84  lfs 6, 0(6)
  0117e88  fmuls 5, 5, 6
  0117e8c  lfs 6, 4(6)
  0117e90  addic 6, 6, 8
  0117e94  stfs 5, 124(7)
  0117e98  lfs 5, 4(5)
  0117e9c  addic 7, 7, 8
  0117ea0  fmuls 5, 5, 6
  0117ea4  stfs 5, 4(5)
  0117ea8  addic 5, 5, 8
  0117eac  bdnz 0x117e80
  0117eb0  ori 5, 3, 0
  0117eb4  ori 3, 1, 0
  0117eb8  mtctr 5
  0117ebc  lfs 5, 124(3)
  0117ec0  fadds 1, 1, 5
  0117ec4  lfs 5, 4(4)
  0117ec8  addic 3, 3, 16
  0117ecc  lfs 6, 8(4)
  0117ed0  lfs 7, 12(4)
  0117ed4  addic 4, 4, 16
  0117ed8  fadds 1, 1, 5
  0117edc  fadds 1, 1, 6
  0117ee0  fadds 1, 1, 7
  0117ee4  bdnz 0x117ebc
  0117ee8  lis 3, 17
  0117eec  addi 3, 3, 31928
  0117ef0  lfs 5, 4(3)
  0117ef4  fadds 1, 1, 5
  0117ef8  fmadds 1, 1, 3, 2
  0117efc  fmr 2, 1
  0117f00  fmr 1, 4
  0117f04  bl 0x5026a0
  0117f08  nop
  0117f0c  fcmpu 0, 1, 31
  0117f10  cror 6, 0, 2
  0117f14  bt 6, 0x117f20
  0117f18  li 3, 0
  0117f1c  b 0x117f24
  0117f20  li 3, 1
  0117f24  ld 0, 192(1)
  0117f28  mtlr 0
  0117f2c  lfd 31, 168(1)
  0117f30  addi 1, 1, 176
  0117f34  blr

MB_AttachMobyToJoint:   # 0x117f38, 0xe8 bytes
  0117f38  stdu 1, -208(1)
  0117f3c  mflr 0
  0117f40  std 0, 224(1)
  0117f44  std 31, 200(1)
  0117f48  std 29, 184(1)
  0117f4c  ori 31, 4, 0
  0117f50  addic 29, 1, 112
  0117f54  std 30, 192(1)
  0117f58  ori 4, 5, 0
  0117f5c  ori 30, 3, 0
  0117f60  std 28, 176(1)
  0117f64  ori 5, 29, 0
  0117f68  bl 0xf1038
  0117f6c  nop
  0117f70  lfs 1, 160(1)
  0117f74  ori 3, 31, 0
  0117f78  lfs 2, 164(1)
  0117f7c  stfs 1, 16(31)
  0117f80  lfs 1, 168(1)
  0117f84  stfs 2, 20(31)
  0117f88  lfs 2, 172(1)
  0117f8c  stfs 1, 24(31)
  0117f90  stfs 2, 28(31)
  0117f94  bl 0xf98d8
  0117f98  nop
  0117f9c  ori 3, 31, 0
  0117fa0  bl 0xf31a8
  0117fa4  nop
  0117fa8  addic 28, 31, 192
  0117fac  ori 4, 29, 0
  0117fb0  ori 3, 28, 0
  0117fb4  bl 0x500fa8
  0117fb8  nop
  0117fbc  ori 3, 28, 0
  0117fc0  bl 0x10a788
  0117fc4  ori 3, 31, 0
  0117fc8  bl 0xf30a0
  0117fcc  nop
  0117fd0  lhz 3, 52(30)
  0117fd4  clrlwi 3, 3, 31
  0117fd8  cmpwi 3, 0
  0117fdc  bt 2, 0x117fec
  0117fe0  lhz 3, 52(31)
  0117fe4  ori 3, 3, 65
  0117fe8  b 0x117ff8
  0117fec  li 3, -66
  0117ff0  lhz 4, 52(31)
  0117ff4  and 3, 4, 3
  0117ff8  ori 3, 3, 6
  0117ffc  sth 3, 52(31)
  0118000  ld 0, 224(1)
  0118004  mtlr 0
  0118008  ld 28, 176(1)
  011800c  ld 29, 184(1)
  0118010  ld 30, 192(1)
  0118014  ld 31, 200(1)
  0118018  addi 1, 1, 208
  011801c  blr

Spline_ComputeSegmentLengths:   # 0x118020, 0xa4 bytes
  0118020  cmpwi 3, -1
  0118024  bt 2, 0x1180c0
  0118028  lis 4, 165
  011802c  sldi 3, 3, 2
  0118030  addic 5, 4, 7136
  0118034  extsw 3, 3
  0118038  li 4, 0
  011803c  lwzx 5, 5, 3
  0118040  lwz 3, 0(5)
  0118044  addic 6, 3, -1
  0118048  cmpwi 6, 0
  011804c  bf 1, 0x1180c0
  0118050  ori 7, 5, 0
  0118054  addic 6, 7, 16
  0118058  addic 4, 4, 1
  011805c  lfs 1, 20(7)
  0118060  divw 8, 4, 3
  0118064  mullw 3, 8, 3
  0118068  lfs 2, 16(7)
  011806c  subc 3, 4, 3
  0118070  sldi 3, 3, 4
  0118074  addc 3, 3, 6
  0118078  clrldi 3, 3, 32
  011807c  lfs 3, 4(3)
  0118080  lfs 4, 0(3)
  0118084  fsubs 1, 1, 3
  0118088  fsubs 2, 2, 4
  011808c  lfs 3, 24(7)
  0118090  lfs 4, 8(3)
  0118094  fsubs 3, 3, 4
  0118098  lwz 3, 0(5)
  011809c  fmuls 1, 1, 1
  01180a0  addic 8, 3, -1
  01180a4  cmpw 4, 8
  01180a8  fmadds 1, 2, 2, 1
  01180ac  fmadds 1, 3, 3, 1
  01180b0  fsqrts 1, 1
  01180b4  stfs 1, 28(7)
  01180b8  addic 7, 7, 16
  01180bc  bt 0, 0x118058
  01180c0  blr

MB_ComputeRocketAim:   # 0x1180f0, 0xc68 bytes
  01180f0  stdu 1, -576(1)
  01180f4  mflr 0
  01180f8  std 0, 592(1)
  01180fc  stfd 17, 456(1)
  0118100  stfd 18, 464(1)
  0118104  stfd 19, 472(1)
  0118108  stfd 20, 480(1)
  011810c  stfd 21, 488(1)
  0118110  stfd 22, 496(1)
  0118114  stfd 23, 504(1)
  0118118  stfd 24, 512(1)
  011811c  stfd 25, 520(1)
  0118120  stfd 26, 528(1)
  0118124  stfd 27, 536(1)
  0118128  stfd 28, 544(1)
  011812c  stfd 29, 552(1)
  0118130  stfd 30, 560(1)
  0118134  stfd 31, 568(1)
  0118138  fmr 31, 1
  011813c  std 22, 376(1)
  0118140  li 4, 576
  0118144  lis 22, 18
  0118148  addc 4, 1, 4
  011814c  std 24, 392(1)
  0118150  addi 22, 22, -32572
  0118154  lis 24, 115
  0118158  std 7, 80(4)
  011815c  lfs 4, 84(4)
  0118160  std 5, 64(4)
  0118164  std 6, 72(4)
  0118168  std 8, 88(4)
  011816c  fabs 6, 4
  0118170  std 28, 424(1)
  0118174  lfs 3, 80(4)
  0118178  lwz 28, 116(4)
  011817c  fabs 8, 3
  0118180  rlwinm 6, 7, 3, 29, 29
  0118184  rldicl 5, 7, 32, 32
  0118188  std 31, 448(1)
  011818c  addic 24, 24, 22784
  0118190  std 20, 360(1)
  0118194  ori 31, 3, 0
  0118198  ori 20, 1, 0
  011819c  std 30, 440(1)
  01181a0  rldicl 3, 8, 32, 32
  01181a4  std 29, 432(1)
  01181a8  ori 30, 9, 0
  01181ac  ori 29, 10, 0
  01181b0  fsubs 1, 8, 6
  01181b4  stfs 1, 188(1)
  01181b8  lfs 23, 0(22)
  01181bc  lfs 5, 88(4)
  01181c0  lfs 17, 64(4)
  01181c4  lfs 20, 72(4)
  01181c8  lfs 18, 68(4)
  01181cc  lfs 30, 4(22)
  01181d0  lwz 4, 188(1)
  01181d4  lfs 1, 188(1)
  01181d8  rlwimi 6, 4, 2, 30, 30
  01181dc  fsub 7, 1, 23
  01181e0  ori 4, 24, 0
  01181e4  fsub 9, 1, 23
  01181e8  rlwimi 6, 5, 4, 28, 28
  01181ec  rlwimi 4, 6, 2, 26, 28
  01181f0  slwi 5, 6, 2
  01181f4  clrldi 4, 4, 32
  01181f8  lfsx 1, 24, 5
  01181fc  fsel 7, 7, 8, 6
  0118200  lfs 2, 4(4)
  0118204  fsel 6, 9, 6, 8
  0118208  std 27, 416(1)
  011820c  std 26, 408(1)
  0118210  std 25, 400(1)
  0118214  std 23, 384(1)
  0118218  std 21, 368(1)
  011821c  fcmpu 0, 7, 23
  0118220  bt 1, 0x11822c
  0118224  fmr 1, 23
  0118228  b 0x118344
  011822c  fsubs 8, 6, 7
  0118230  fadds 6, 6, 7
  0118234  addic 4, 1, 16
  0118238  li 7, 2
  011823c  addic 6, 4, 320
  0118240  addic 5, 4, 304
  0118244  mtctr 7
  0118248  fdivs 6, 8, 6
  011824c  fmuls 7, 6, 6
  0118250  stfs 6, 320(20)
  0118254  stfs 6, 324(20)
  0118258  stfs 6, 328(20)
  011825c  stfs 6, 332(20)
  0118260  lfs 6, 332(1)
  0118264  lfs 8, 324(1)
  0118268  lfs 10, 328(1)
  011826c  fmuls 9, 7, 7
  0118270  fmuls 8, 8, 7
  0118274  fmuls 11, 6, 9
  0118278  fmuls 10, 10, 9
  011827c  fmuls 6, 9, 9
  0118280  stfs 8, 324(1)
  0118284  fmuls 7, 11, 7
  0118288  stfs 10, 328(1)
  011828c  stfs 7, 332(1)
  0118290  lfs 7, 304(4)
  0118294  fmuls 7, 7, 6
  0118298  stfs 7, 320(4)
  011829c  lfs 7, 4(5)
  01182a0  addic 5, 5, 8
  01182a4  fmuls 7, 7, 6
  01182a8  addic 4, 4, 8
  01182ac  stfs 7, 4(6)
  01182b0  addic 6, 6, 8
  01182b4  bdnz 0x118290
  01182b8  li 6, 4
  01182bc  ori 4, 1, 0
  01182c0  mtctr 6
  01182c4  lis 5, 115
  01182c8  addic 6, 4, 320
  01182cc  addic 5, 5, 22752
  01182d0  ori 8, 6, 0
  01182d4  lfs 6, 320(4)
  01182d8  lfs 7, 0(5)
  01182dc  fmuls 6, 6, 7
  01182e0  lfs 7, 4(5)
  01182e4  addic 5, 5, 8
  01182e8  stfs 6, 320(4)
  01182ec  lfs 6, 4(6)
  01182f0  addic 4, 4, 8
  01182f4  fmuls 6, 6, 7
  01182f8  stfs 6, 4(6)
  01182fc  addic 6, 6, 8
  0118300  bdnz 0x1182d4
  0118304  ori 4, 1, 0
  0118308  fmr 6, 23
  011830c  mtctr 7
  0118310  lfs 7, 320(4)
  0118314  fadds 6, 6, 7
  0118318  lfs 7, 4(8)
  011831c  addic 4, 4, 16
  0118320  lfs 8, 8(8)
  0118324  lfs 9, 12(8)
  0118328  addic 8, 8, 16
  011832c  fadds 6, 6, 7
  0118330  fadds 6, 6, 8
  0118334  fadds 6, 6, 9
  0118338  bdnz 0x118310
  011833c  fadds 6, 6, 30
  0118340  fmadds 1, 6, 1, 2
  0118344  fmuls 2, 4, 4
  0118348  stfs 1, 0(30)
  011834c  rlwinm 3, 3, 3, 29, 29
  0118350  fmadds 2, 3, 3, 2
  0118354  fabs 3, 5
  0118358  fsqrts 2, 2
  011835c  fabs 5, 2
  0118360  stfs 2, 180(1)
  0118364  fsubs 1, 5, 3
  0118368  stfs 1, 184(1)
  011836c  lwz 4, 180(1)
  0118370  lfs 1, 180(1)
  0118374  lwz 5, 184(1)
  0118378  fabs 4, 1
  011837c  lfs 1, 184(1)
  0118380  rlwimi 3, 5, 2, 30, 30
  0118384  fsub 2, 1, 23
  0118388  fsub 6, 1, 23
  011838c  rlwimi 3, 4, 4, 28, 28
  0118390  ori 4, 24, 0
  0118394  rlwimi 4, 3, 2, 26, 28
  0118398  slwi 3, 3, 2
  011839c  clrldi 4, 4, 32
  01183a0  fsel 4, 2, 4, 3
  01183a4  lfsx 1, 24, 3
  01183a8  fsel 3, 6, 3, 5
  01183ac  lfs 2, 4(4)
  01183b0  fcmpu 0, 4, 23
  01183b4  bt 1, 0x1183c0
  01183b8  fmr 1, 23
  01183bc  b 0x1184d8
  01183c0  fsubs 5, 3, 4
  01183c4  fadds 3, 3, 4
  01183c8  addic 3, 1, 16
  01183cc  li 6, 2
  01183d0  addic 4, 3, 272
  01183d4  addic 5, 3, 288
  01183d8  mtctr 6
  01183dc  fdivs 3, 5, 3
  01183e0  fmuls 4, 3, 3
  01183e4  stfs 3, 288(20)
  01183e8  stfs 3, 292(20)
  01183ec  stfs 3, 296(20)
  01183f0  stfs 3, 300(20)
  01183f4  lfs 3, 300(1)
  01183f8  lfs 5, 292(1)
  01183fc  lfs 7, 296(1)
  0118400  fmuls 6, 4, 4
  0118404  fmuls 5, 5, 4
  0118408  fmuls 8, 3, 6
  011840c  fmuls 7, 7, 6
  0118410  fmuls 3, 6, 6
  0118414  stfs 5, 292(1)
  0118418  fmuls 4, 8, 4
  011841c  stfs 7, 296(1)
  0118420  stfs 4, 300(1)
  0118424  lfs 4, 272(3)
  0118428  fmuls 4, 4, 3
  011842c  stfs 4, 288(3)
  0118430  lfs 4, 4(4)
  0118434  addic 3, 3, 8
  0118438  addic 4, 4, 8
  011843c  fmuls 4, 4, 3
  0118440  stfs 4, 4(5)
  0118444  addic 5, 5, 8
  0118448  bdnz 0x118424
  011844c  li 5, 4
  0118450  ori 3, 1, 0
  0118454  mtctr 5
  0118458  lis 4, 115
  011845c  addic 5, 3, 288
  0118460  addic 4, 4, 22752
  0118464  ori 7, 5, 0
  0118468  lfs 3, 288(3)
  011846c  lfs 4, 0(4)
  0118470  fmuls 3, 3, 4
  0118474  lfs 4, 4(4)
  0118478  addic 4, 4, 8
  011847c  stfs 3, 288(3)
  0118480  lfs 3, 4(5)
  0118484  addic 3, 3, 8
  0118488  fmuls 3, 3, 4
  011848c  stfs 3, 4(5)
  0118490  addic 5, 5, 8
  0118494  bdnz 0x118468
  0118498  fmr 3, 23
  011849c  ori 3, 1, 0
  01184a0  mtctr 6
  01184a4  lfs 4, 288(3)
  01184a8  fadds 3, 3, 4
  01184ac  addic 3, 3, 16
  01184b0  lfs 4, 4(7)
  01184b4  lfs 5, 8(7)
  01184b8  lfs 6, 12(7)
  01184bc  addic 7, 7, 16
  01184c0  fadds 3, 3, 4
  01184c4  fadds 3, 3, 5
  01184c8  fadds 3, 3, 6
  01184cc  bdnz 0x1184a4
  01184d0  fadds 3, 3, 30
  01184d4  fmadds 1, 3, 1, 2
  01184d8  fneg 1, 1
  01184dc  lis 3, 164
  01184e0  li 27, 0
  01184e4  ori 21, 27, 0
  01184e8  lwz 26, -28500(3)
  01184ec  cmpwi 26, 0
  01184f0  stfs 1, 0(29)
  01184f4  lfs 29, 8(22)
  01184f8  bt 2, 0x118cd8
  01184fc  lbz 3, 32(26)
  0118500  cmpwi 3, 128
  0118504  bf 0, 0x118ccc
  0118508  lfs 26, 16(26)
  011850c  stfs 26, 112(1)
  0118510  lfs 2, 20(26)
  0118514  stfs 2, 116(1)
  0118518  lfs 1, 24(26)
  011851c  stfs 1, 120(1)
  0118520  lfs 3, 28(26)
  0118524  stfs 3, 124(1)
  0118528  lhz 3, 52(26)
  011852c  rlwinm 3, 3, 0, 26, 26
  0118530  cmpwi 3, 0
  0118534  bt 2, 0x11854c
  0118538  lwz 3, 120(26)
  011853c  lwz 25, 0(3)
  0118540  cmpwi 25, 0
  0118544  bf 2, 0x118554
  0118548  b 0x11855c
  011854c  ori 25, 21, 0
  0118550  b 0x11855c
  0118554  lfs 3, 16(25)
  0118558  b 0x118560
  011855c  lfs 3, 12(22)
  0118560  fadds 1, 1, 3
  0118564  stfs 1, 120(1)
  0118568  lhz 3, 52(26)
  011856c  rlwinm 3, 3, 0, 19, 19
  0118570  cmpwi 3, 0
  0118574  bt 2, 0x118ccc
  0118578  lwz 3, 36(26)
  011857c  cmpwi 3, 0
  0118580  bt 2, 0x118ccc
  0118584  lhz 3, 70(3)
  0118588  extsh 3, 3
  011858c  cmpwi 3, 5
  0118590  bf 2, 0x118ccc
  0118594  fsubs 3, 26, 17
  0118598  fsubs 4, 2, 18
  011859c  fabs 6, 3
  01185a0  fabs 5, 4
  01185a4  stfs 3, 168(1)
  01185a8  stfs 4, 172(1)
  01185ac  fsubs 3, 6, 5
  01185b0  stfs 3, 176(1)
  01185b4  lwz 3, 168(1)
  01185b8  lfs 3, 168(1)
  01185bc  lwz 4, 172(1)
  01185c0  lfs 4, 172(1)
  01185c4  fabs 3, 3
  01185c8  lwz 5, 176(1)
  01185cc  rlwinm 4, 4, 3, 29, 29
  01185d0  lfs 7, 176(1)
  01185d4  fabs 4, 4
  01185d8  rlwimi 4, 5, 2, 30, 30
  01185dc  fsub 8, 7, 23
  01185e0  fsub 7, 7, 23
  01185e4  rlwimi 4, 3, 4, 28, 28
  01185e8  ori 3, 24, 0
  01185ec  rlwimi 3, 4, 2, 26, 28
  01185f0  slwi 4, 4, 2
  01185f4  clrldi 3, 3, 32
  01185f8  fsel 5, 8, 3, 5
  01185fc  lfsx 28, 24, 4
  0118600  fsel 4, 7, 4, 6
  0118604  lfs 3, 4(3)
  0118608  fcmpu 0, 5, 23
  011860c  bt 1, 0x118618
  0118610  fmr 28, 23
  0118614  b 0x118730
  0118618  fsubs 6, 4, 5
  011861c  fadds 4, 4, 5
  0118620  addic 3, 1, 16
  0118624  li 7, 2
  0118628  addic 4, 3, 240
  011862c  addic 5, 3, 256
  0118630  mtctr 7
  0118634  fdivs 4, 6, 4
  0118638  fmuls 5, 4, 4
  011863c  stfs 4, 256(20)
  0118640  stfs 4, 260(20)
  0118644  stfs 4, 264(20)
  0118648  stfs 4, 268(20)
  011864c  lfs 4, 268(1)
  0118650  lfs 6, 260(1)
  0118654  lfs 8, 264(1)
  0118658  fmuls 7, 5, 5
  011865c  fmuls 6, 6, 5
  0118660  fmuls 9, 4, 7
  0118664  fmuls 8, 8, 7
  0118668  fmuls 4, 7, 7
  011866c  stfs 6, 260(1)
  0118670  fmuls 5, 9, 5
  0118674  stfs 8, 264(1)
  0118678  stfs 5, 268(1)
  011867c  lfs 5, 240(3)
  0118680  fmuls 5, 5, 4
  0118684  stfs 5, 256(3)
  0118688  lfs 5, 4(4)
  011868c  addic 3, 3, 8
  0118690  addic 4, 4, 8
  0118694  fmuls 5, 5, 4
  0118698  stfs 5, 4(5)
  011869c  addic 5, 5, 8
  01186a0  bdnz 0x11867c
  01186a4  li 5, 4
  01186a8  ori 3, 1, 0
  01186ac  mtctr 5
  01186b0  lis 4, 115
  01186b4  addic 5, 3, 256
  01186b8  addic 4, 4, 22752
  01186bc  ori 6, 5, 0
  01186c0  lfs 4, 256(3)
  01186c4  lfs 5, 0(4)
  01186c8  fmuls 4, 4, 5
  01186cc  lfs 5, 4(4)
  01186d0  addic 4, 4, 8
  01186d4  stfs 4, 256(3)
  01186d8  lfs 4, 4(5)
  01186dc  addic 3, 3, 8
  01186e0  fmuls 4, 4, 5
  01186e4  stfs 4, 4(5)
  01186e8  addic 5, 5, 8
  01186ec  bdnz 0x1186c0
  01186f0  fmr 4, 23
  01186f4  ori 3, 1, 0
  01186f8  mtctr 7
  01186fc  lfs 5, 256(3)
  0118700  fadds 4, 4, 5
  0118704  addic 3, 3, 16
  0118708  lfs 5, 4(6)
  011870c  lfs 6, 8(6)
  0118710  lfs 7, 12(6)
  0118714  addic 6, 6, 16
  0118718  fadds 4, 4, 5
  011871c  fadds 4, 4, 6
  0118720  fadds 4, 4, 7
  0118724  bdnz 0x1186fc
  0118728  fadds 4, 4, 30
  011872c  fmadds 28, 4, 28, 3
  0118730  fsubs 2, 18, 2
  0118734  fsubs 26, 17, 26
  0118738  fsubs 3, 1, 20
  011873c  fmuls 2, 2, 2
  0118740  fabs 4, 3
  0118744  stfs 3, 160(1)
  0118748  fmadds 26, 26, 26, 2
  011874c  fsqrts 2, 26
  0118750  fabs 3, 2
  0118754  stfs 2, 156(1)
  0118758  lwz 3, 160(1)
  011875c  lfs 5, 160(1)
  0118760  rlwinm 3, 3, 3, 29, 29
  0118764  fabs 5, 5
  0118768  fsubs 2, 3, 4
  011876c  stfs 2, 164(1)
  0118770  lwz 4, 156(1)
  0118774  lfs 2, 156(1)
  0118778  lwz 5, 164(1)
  011877c  lfs 6, 164(1)
  0118780  fabs 2, 2
  0118784  rlwimi 3, 5, 2, 30, 30
  0118788  fsub 7, 6, 23
  011878c  fsub 6, 6, 23
  0118790  rlwimi 3, 4, 4, 28, 28
  0118794  ori 4, 24, 0
  0118798  rlwimi 4, 3, 2, 26, 28
  011879c  slwi 3, 3, 2
  01187a0  clrldi 4, 4, 32
  01187a4  fsel 4, 7, 2, 4
  01187a8  lfsx 27, 24, 3
  01187ac  fsel 3, 6, 5, 3
  01187b0  lfs 2, 4(4)
  01187b4  fcmpu 0, 4, 23
  01187b8  bt 1, 0x1187c4
  01187bc  fmr 27, 23
  01187c0  b 0x1188dc
  01187c4  fsubs 5, 3, 4
  01187c8  fadds 3, 3, 4
  01187cc  addic 3, 1, 16
  01187d0  li 6, 2
  01187d4  addic 5, 3, 224
  01187d8  addic 4, 3, 208
  01187dc  mtctr 6
  01187e0  fdivs 3, 5, 3
  01187e4  fmuls 4, 3, 3
  01187e8  stfs 3, 224(20)
  01187ec  stfs 3, 228(20)
  01187f0  stfs 3, 232(20)
  01187f4  stfs 3, 236(20)
  01187f8  lfs 3, 236(1)
  01187fc  lfs 5, 228(1)
  0118800  lfs 7, 232(1)
  0118804  fmuls 6, 4, 4
  0118808  fmuls 5, 5, 4
  011880c  fmuls 8, 3, 6
  0118810  fmuls 7, 7, 6
  0118814  fmuls 3, 6, 6
  0118818  stfs 5, 228(1)
  011881c  fmuls 4, 8, 4
  0118820  stfs 7, 232(1)
  0118824  stfs 4, 236(1)
  0118828  lfs 4, 208(3)
  011882c  fmuls 4, 4, 3
  0118830  stfs 4, 224(3)
  0118834  lfs 4, 4(4)
  0118838  addic 4, 4, 8
  011883c  fmuls 4, 4, 3
  0118840  addic 3, 3, 8
  0118844  stfs 4, 4(5)
  0118848  addic 5, 5, 8
  011884c  bdnz 0x118828
  0118850  li 5, 4
  0118854  ori 3, 1, 0
  0118858  mtctr 5
  011885c  lis 4, 115
  0118860  addic 5, 3, 224
  0118864  addic 4, 4, 22752
  0118868  ori 7, 5, 0
  011886c  lfs 3, 224(3)
  0118870  lfs 4, 0(4)
  0118874  fmuls 3, 3, 4
  0118878  lfs 4, 4(4)
  011887c  addic 4, 4, 8
  0118880  stfs 3, 224(3)
  0118884  lfs 3, 4(5)
  0118888  addic 3, 3, 8
  011888c  fmuls 3, 3, 4
  0118890  stfs 3, 4(5)
  0118894  addic 5, 5, 8
  0118898  bdnz 0x11886c
  011889c  ori 3, 1, 0
  01188a0  fmr 3, 23
  01188a4  mtctr 6
  01188a8  lfs 4, 224(3)
  01188ac  fadds 3, 3, 4
  01188b0  lfs 4, 4(7)
  01188b4  addic 3, 3, 16
  01188b8  lfs 5, 8(7)
  01188bc  lfs 6, 12(7)
  01188c0  addic 7, 7, 16
  01188c4  fadds 3, 3, 4
  01188c8  fadds 3, 3, 5
  01188cc  fadds 3, 3, 6
  01188d0  bdnz 0x1188a8
  01188d4  fadds 3, 3, 30
  01188d8  fmadds 27, 3, 27, 2
  01188dc  fsubs 1, 20, 1
  01188e0  fmadds 26, 1, 1, 26
  01188e4  lfs 1, 16(22)
  01188e8  fsqrts 26, 26
  01188ec  fcmpu 0, 26, 1
  01188f0  cror 6, 1, 2
  01188f4  bt 6, 0x118af4
  01188f8  lis 3, 151
  01188fc  lfs 1, 16(26)
  0118900  lfs 2, 20(26)
  0118904  addic 3, 3, -25376
  0118908  lfs 3, 128(3)
  011890c  lfs 4, 132(3)
  0118910  fsubs 3, 1, 3
  0118914  fsubs 2, 2, 4
  0118918  lwz 3, 8320(3)
  011891c  lfs 1, 72(3)
  0118920  fabs 4, 3
  0118924  fabs 5, 2
  0118928  stfs 3, 144(1)
  011892c  stfs 2, 148(1)
  0118930  fsubs 2, 4, 5
  0118934  stfs 2, 152(1)
  0118938  lwz 3, 144(1)
  011893c  lfs 2, 144(1)
  0118940  lwz 4, 148(1)
  0118944  lfs 3, 148(1)
  0118948  lwz 5, 152(1)
  011894c  rlwinm 4, 4, 3, 29, 29
  0118950  fabs 6, 3
  0118954  lfs 3, 152(1)
  0118958  fabs 2, 2
  011895c  rlwimi 4, 5, 2, 30, 30
  0118960  fsub 7, 3, 23
  0118964  fsub 8, 3, 23
  0118968  rlwimi 4, 3, 4, 28, 28
  011896c  ori 3, 24, 0
  0118970  rlwimi 3, 4, 2, 26, 28
  0118974  slwi 4, 4, 2
  0118978  clrldi 3, 3, 32
  011897c  fsel 5, 7, 2, 5
  0118980  lfsx 2, 24, 4
  0118984  fsel 4, 8, 6, 4
  0118988  lfs 3, 4(3)
  011898c  fcmpu 0, 5, 23
  0118990  bt 1, 0x11899c
  0118994  fmr 2, 23
  0118998  b 0x118ab4
  011899c  fsubs 6, 4, 5
  01189a0  fadds 4, 4, 5
  01189a4  addic 3, 1, 16
  01189a8  li 6, 2
  01189ac  addic 5, 3, 192
  01189b0  addic 4, 3, 176
  01189b4  mtctr 6
  01189b8  fdivs 4, 6, 4
  01189bc  fmuls 5, 4, 4
  01189c0  stfs 4, 192(20)
  01189c4  stfs 4, 196(20)
  01189c8  stfs 4, 200(20)
  01189cc  stfs 4, 204(20)
  01189d0  lfs 4, 204(1)
  01189d4  lfs 6, 196(1)
  01189d8  lfs 8, 200(1)
  01189dc  fmuls 7, 5, 5
  01189e0  fmuls 6, 6, 5
  01189e4  fmuls 9, 4, 7
  01189e8  fmuls 8, 8, 7
  01189ec  fmuls 4, 7, 7
  01189f0  stfs 6, 196(1)
  01189f4  fmuls 5, 9, 5
  01189f8  stfs 8, 200(1)
  01189fc  stfs 5, 204(1)
  0118a00  lfs 5, 176(3)
  0118a04  fmuls 5, 5, 4
  0118a08  stfs 5, 192(3)
  0118a0c  lfs 5, 4(4)
  0118a10  addic 4, 4, 8
  0118a14  fmuls 5, 5, 4
  0118a18  addic 3, 3, 8
  0118a1c  stfs 5, 4(5)
  0118a20  addic 5, 5, 8
  0118a24  bdnz 0x118a00
  0118a28  li 5, 4
  0118a2c  ori 3, 1, 0
  0118a30  mtctr 5
  0118a34  lis 4, 115
  0118a38  addic 5, 3, 192
  0118a3c  addic 4, 4, 22752
  0118a40  ori 7, 5, 0
  0118a44  lfs 4, 192(3)
  0118a48  lfs 5, 0(4)
  0118a4c  fmuls 4, 4, 5
  0118a50  lfs 5, 4(4)
  0118a54  addic 4, 4, 8
  0118a58  stfs 4, 192(3)
  0118a5c  lfs 4, 4(5)
  0118a60  addic 3, 3, 8
  0118a64  fmuls 4, 4, 5
  0118a68  stfs 4, 4(5)
  0118a6c  addic 5, 5, 8
  0118a70  bdnz 0x118a44
  0118a74  ori 3, 1, 0
  0118a78  fmr 4, 23
  0118a7c  mtctr 6
  0118a80  lfs 5, 192(3)
  0118a84  fadds 4, 4, 5
  0118a88  lfs 5, 4(7)
  0118a8c  addic 3, 3, 16
  0118a90  lfs 6, 8(7)
  0118a94  lfs 7, 12(7)
  0118a98  addic 7, 7, 16
  0118a9c  fadds 4, 4, 5
  0118aa0  fadds 4, 4, 6
  0118aa4  fadds 4, 4, 7
  0118aa8  bdnz 0x118a80
  0118aac  fadds 4, 4, 30
  0118ab0  fmadds 2, 4, 2, 3
  0118ab4  bl 0x5026a0
  0118ab8  nop
  0118abc  fmr 3, 1
  0118ac0  lfs 1, 20(22)
  0118ac4  fcmpu 0, 3, 1
  0118ac8  cror 6, 1, 2
  0118acc  bt 6, 0x118af4
  0118ad0  fabs 2, 27
  0118ad4  fcmpu 0, 2, 1
  0118ad8  cror 6, 1, 2
  0118adc  bt 6, 0x118af4
  0118ae0  fneg 1, 27
  0118ae4  ori 3, 26, 0
  0118ae8  stfs 1, 0(29)
  0118aec  stfs 28, 0(30)
  0118af0  b 0x118cdc
  0118af4  fcmpu 0, 29, 26
  0118af8  bt 0, 0x118ccc
  0118afc  lis 4, 151
  0118b00  lfs 22, 12(22)
  0118b04  lfs 2, 0(30)
  0118b08  fmr 1, 26
  0118b0c  addic 4, 4, -25376
  0118b10  lfs 3, 0(29)
  0118b14  addic 3, 1, 128
  0118b18  lfs 4, 740(4)
  0118b1c  fmadds 3, 4, 22, 3
  0118b20  bl 0xfe610
  0118b24  lfs 1, 132(1)
  0118b28  lfs 2, 128(1)
  0118b2c  fadds 1, 1, 18
  0118b30  lfs 3, 116(1)
  0118b34  fadds 2, 2, 17
  0118b38  lfs 4, 136(1)
  0118b3c  lfs 5, 112(1)
  0118b40  fadds 4, 4, 20
  0118b44  lfs 6, 120(1)
  0118b48  fsubs 3, 1, 3
  0118b4c  fsubs 5, 2, 5
  0118b50  stfs 2, 128(1)
  0118b54  fsubs 6, 4, 6
  0118b58  stfs 1, 132(1)
  0118b5c  stfs 4, 136(1)
  0118b60  fmuls 3, 3, 3
  0118b64  lfs 24, 24(22)
  0118b68  lfs 25, 28(22)
  0118b6c  lis 3, 115
  0118b70  addic 23, 3, 22720
  0118b74  fmadds 2, 5, 5, 3
  0118b78  lfs 3, 22720(3)
  0118b7c  lfs 4, 4(23)
  0118b80  fmadds 1, 6, 6, 2
  0118b84  fmuls 2, 26, 24
  0118b88  fsqrts 1, 1
  0118b8c  lfs 5, 8(23)
  0118b90  lfs 19, 32(22)
  0118b94  fdivs 1, 1, 2
  0118b98  lfs 2, 12(23)
  0118b9c  lfs 21, 36(22)
  0118ba0  fabs 6, 1
  0118ba4  fsub 7, 1, 23
  0118ba8  fsel 6, 7, 1, 6
  0118bac  fsub 1, 1, 23
  0118bb0  fsubs 7, 25, 6
  0118bb4  fmadds 3, 6, 4, 3
  0118bb8  fmuls 8, 6, 6
  0118bbc  fsel 1, 1, 25, 19
  0118bc0  fsub 9, 7, 23
  0118bc4  fmuls 6, 8, 6
  0118bc8  fmadds 3, 8, 5, 3
  0118bcc  fsel 4, 9, 7, 23
  0118bd0  fmadds 2, 6, 2, 3
  0118bd4  fsqrts 4, 4
  0118bd8  fnmsubs 2, 2, 4, 21
  0118bdc  fmuls 1, 2, 1
  0118be0  fmuls 24, 1, 24
  0118be4  fcmpu 0, 31, 24
  0118be8  cror 6, 1, 2
  0118bec  bt 6, 0x118c74
  0118bf0  cmpwi 25, 0
  0118bf4  bt 2, 0x118c74
  0118bf8  lbz 3, 10(25)
  0118bfc  slwi 3, 3, 3
  0118c00  bl 0x502730
  0118c04  nop
  0118c08  lfs 2, 40(22)
  0118c0c  fmuls 1, 1, 2
  0118c10  lis 3, 115
  0118c14  lfs 3, 4(23)
  0118c18  lfs 4, 8(23)
  0118c1c  lfs 5, 22720(3)
  0118c20  fdivs 2, 1, 26
  0118c24  lfs 6, 12(23)
  0118c28  fcmpu 0, 1, 26
  0118c2c  cror 6, 1, 2
  0118c30  fabs 1, 2
  0118c34  fsub 7, 2, 23
  0118c38  fsel 1, 7, 2, 1
  0118c3c  fsub 2, 2, 23
  0118c40  fsubs 7, 25, 1
  0118c44  fmuls 8, 1, 1
  0118c48  fmadds 3, 1, 3, 5
  0118c4c  fsel 19, 2, 25, 19
  0118c50  fsub 9, 7, 23
  0118c54  fmadds 3, 8, 4, 3
  0118c58  fmuls 1, 8, 1
  0118c5c  fsel 5, 9, 7, 23
  0118c60  fmadds 1, 1, 6, 3
  0118c64  fsqrts 4, 5
  0118c68  fnmsubs 25, 1, 4, 21
  0118c6c  bt 6, 0x118c74
  0118c70  fnmsubs 24, 25, 19, 24
  0118c74  fcmpu 0, 31, 24
  0118c78  cror 6, 0, 2
  0118c7c  bt 6, 0x118ccc
  0118c80  lis 3, 149
  0118c84  addic 4, 1, 112
  0118c88  addic 3, 3, 5376
  0118c8c  li 5, 6
  0118c90  ori 6, 31, 0
  0118c94  li 7, 0
  0118c98  bl 0x57820
  0118c9c  nop
  0118ca0  cmpwi 3, 0
  0118ca4  bf 2, 0x118ccc
  0118ca8  fneg 1, 27
  0118cac  cmpwi 25, 0
  0118cb0  ori 27, 26, 0
  0118cb4  fmr 29, 26
  0118cb8  stfs 1, 0(29)
  0118cbc  stfs 28, 0(30)
  0118cc0  bt 2, 0x118cc8
  0118cc4  lfs 22, 16(25)
  0118cc8  stfs 22, 0(28)
  0118ccc  lwz 26, 40(26)
  0118cd0  cmpwi 26, 0
  0118cd4  bf 2, 0x1184fc
  0118cd8  ori 3, 27, 0
  0118cdc  ld 0, 592(1)
  0118ce0  mtlr 0
  0118ce4  lfd 17, 456(1)
  0118ce8  lfd 18, 464(1)
  0118cec  lfd 19, 472(1)
  0118cf0  lfd 20, 480(1)
  0118cf4  lfd 21, 488(1)
  0118cf8  lfd 22, 496(1)
  0118cfc  lfd 23, 504(1)
  0118d00  lfd 24, 512(1)
  0118d04  lfd 25, 520(1)
  0118d08  lfd 26, 528(1)
  0118d0c  lfd 27, 536(1)
  0118d10  lfd 28, 544(1)
  0118d14  lfd 29, 552(1)
  0118d18  lfd 30, 560(1)
  0118d1c  lfd 31, 568(1)
  0118d20  ld 20, 360(1)
  0118d24  ld 21, 368(1)
  0118d28  ld 22, 376(1)
  0118d2c  ld 23, 384(1)
  0118d30  ld 24, 392(1)
  0118d34  ld 25, 400(1)
  0118d38  ld 26, 408(1)
  0118d3c  ld 27, 416(1)
  0118d40  ld 28, 424(1)
  0118d44  ld 29, 432(1)
  0118d48  ld 30, 440(1)
  0118d4c  ld 31, 448(1)
  0118d50  addi 1, 1, 576
  0118d54  blr

MB_SampleByteGrid:   # 0x118d60, 0x9c bytes
  0118d60  stdu 1, -64(1)
  0118d64  lis 5, 162
  0118d68  li 4, 64
  0118d6c  addc 4, 1, 4
  0118d70  lis 6, 18
  0118d74  addi 6, 6, -29352
  0118d78  std 3, 48(4)
  0118d7c  lis 3, 162
  0118d80  lfs 1, 52(4)
  0118d84  fctiwz 1, 1
  0118d88  lwz 3, 1176(3)
  0118d8c  lwz 5, 1192(5)
  0118d90  lfs 2, 48(4)
  0118d94  fctiwz 2, 2
  0118d98  stfd 2, 48(1)
  0118d9c  lwz 4, 52(1)
  0118da0  stfd 1, 48(1)
  0118da4  lwz 7, 52(1)
  0118da8  mullw 3, 3, 7
  0118dac  addc 3, 5, 3
  0118db0  addc 3, 3, 4
  0118db4  lis 4, 162
  0118db8  clrldi 3, 3, 32
  0118dbc  lbz 3, 0(3)
  0118dc0  clrldi 3, 3, 32
  0118dc4  std 3, 48(1)
  0118dc8  lis 3, 162
  0118dcc  lfs 1, 0(6)
  0118dd0  lfs 2, 4(6)
  0118dd4  lfs 3, 1188(3)
  0118dd8  lfs 4, 1184(4)
  0118ddc  lfd 5, 48(1)
  0118de0  fsubs 3, 3, 4
  0118de4  fcfid 5, 5
  0118de8  frsp 5, 5
  0118dec  fnmsubs 1, 5, 1, 2
  0118df0  fmadds 1, 3, 1, 4
  0118df4  addi 1, 1, 64
  0118df8  blr

MB_SpawnGridParticles:   # 0x118e38, 0x1e4 bytes
  0118e38  stdu 1, -176(1)
  0118e3c  mflr 0
  0118e40  std 0, 192(1)
  0118e44  lis 7, 18
  0118e48  li 5, 176
  0118e4c  lis 8, 162
  0118e50  addc 6, 1, 5
  0118e54  li 9, 1188
  0118e58  lis 10, 162
  0118e5c  li 11, 1184
  0118e60  addi 7, 7, -29184
  0118e64  std 3, 48(6)
  0118e68  lfs 2, 52(6)
  0118e6c  std 4, 56(6)
  0118e70  lis 3, 162
  0118e74  lis 4, 162
  0118e78  fctiwz 1, 2
  0118e7c  li 12, 4
  0118e80  vspltisw 5, -1
  0118e84  vspltisw 3, -8
  0118e88  lwz 3, 1176(3)
  0118e8c  lwz 4, 1192(4)
  0118e90  lfs 3, 48(6)
  0118e94  <unknown>
  0118e98  fctiwz 4, 3
  0118e9c  <unknown>
  0118ea0  <unknown>
  0118ea4  vsubfp 2, 2, 4
  0118ea8  vslw 5, 5, 5
  0118eac  vspltw 6, 6, 0
  0118eb0  li 8, 8
  0118eb4  stfd 4, 144(1)
  0118eb8  lwz 9, 148(1)
  0118ebc  stfd 1, 144(1)
  0118ec0  lwz 10, 148(1)
  0118ec4  mullw 3, 3, 10
  0118ec8  <unknown>
  0118ecc  addc 3, 4, 3
  0118ed0  addc 3, 3, 9
  0118ed4  clrldi 3, 3, 32
  0118ed8  li 10, 328
  0118edc  li 4, 56
  0118ee0  <unknown>
  0118ee4  <unknown>
  0118ee8  vsrw 8, 8, 3
  0118eec  vmaddfp 3, 2, 6, 5
  0118ef0  vspltw 6, 7, 0
  0118ef4  vspltw 7, 9, 0
  0118ef8  vcfux 5, 8, 0
  0118efc  lis 3, 149
  0118f00  li 8, 12
  0118f04  addic 9, 3, 5056
  0118f08  addic 3, 5, 48
  0118f0c  vnmsubfp 5, 5, 6, 7
  0118f10  <unknown>
  0118f14  lfs 1, 60(6)
  0118f18  vmaddfp 2, 2, 5, 4
  0118f1c  vaddfp 2, 2, 3
  0118f20  vspltw 4, 2, 0
  0118f24  stvewx 4, 4, 6
  0118f28  <unknown>
  0118f2c  vspltw 5, 5, 0
  0118f30  vaddfp 5, 6, 5
  0118f34  vspltw 5, 5, 0
  0118f38  vcmpgefp. 4, 4, 5
  0118f3c  std 31, 168(1)
  0118f40  bf 26, 0x119008
  0118f44  lis 4, 18
  0118f48  li 5, 16
  0118f4c  stfs 3, 112(1)
  0118f50  addi 4, 4, -29184
  0118f54  stfs 2, 116(1)
  0118f58  stfs 1, 124(1)
  0118f5c  li 8, 120
  0118f60  addc 3, 1, 3
  0118f64  li 7, 0
  0118f68  clrldi 3, 3, 32
  0118f6c  <unknown>
  0118f70  addic 4, 1, 112
  0118f74  vspltw 4, 4, 0
  0118f78  li 5, 18
  0118f7c  li 6, 0
  0118f80  vnmsubfp 2, 3, 4, 2
  0118f84  vspltw 2, 2, 0
  0118f88  stvewx 2, 8, 1
  0118f8c  bl 0x57820
  0118f90  nop
  0118f94  cmpwi 3, 0
  0118f98  bt 2, 0x119008
  0118f9c  lis 4, 161
  0118fa0  lis 5, 149
  0118fa4  addic 31, 4, 2400
  0118fa8  addic 3, 1, 128
  0118fac  ori 4, 31, 0
  0118fb0  addic 5, 5, 5376
  0118fb4  bl 0x502a64
  0118fb8  nop
  0118fbc  lfs 1, 132(1)
  0118fc0  lfs 2, 128(1)
  0118fc4  fmuls 1, 1, 1
  0118fc8  lis 3, 18
  0118fcc  addi 3, 3, -29184
  0118fd0  fmadds 1, 2, 2, 1
  0118fd4  lfs 2, 20(3)
  0118fd8  lfs 3, 24(3)
  0118fdc  lfs 4, 28(3)
  0118fe0  ori 3, 31, 0
  0118fe4  fsqrts 1, 1
  0118fe8  fmuls 1, 1, 2
  0118fec  fmadds 1, 1, 3, 4
  0118ff0  fctidz 1, 1
  0118ff4  stfd 1, 144(1)
  0118ff8  lwz 4, 148(1)
  0118ffc  clrlwi 4, 4, 24
  0119000  bl 0x1204c0
  0119004  nop
  0119008  ld 0, 192(1)
  011900c  mtlr 0
  0119010  ld 31, 168(1)
  0119014  addi 1, 1, 176
  0119018  blr

MB_DrawGlowFX:   # 0x119028, 0x340 bytes
  0119028  stdu 1, -336(1)
  011902c  mflr 0
  0119030  std 0, 352(1)
  0119034  stfd 25, 280(1)
  0119038  stfd 26, 288(1)
  011903c  stfd 27, 296(1)
  0119040  stfd 28, 304(1)
  0119044  stfd 29, 312(1)
  0119048  stfd 30, 320(1)
  011904c  stfd 31, 328(1)
  0119050  std 30, 264(1)
  0119054  ori 30, 3, 0
  0119058  li 3, 11
  011905c  fmr 30, 2
  0119060  lis 5, 18
  0119064  std 31, 272(1)
  0119068  fmr 31, 1
  011906c  std 29, 256(1)
  0119070  ori 31, 4, 0
  0119074  addi 29, 5, -28644
  0119078  bl 0x685c4
  011907c  nop
  0119080  std 3, 232(1)
  0119084  li 4, 2
  0119088  li 3, 0
  011908c  li 5, 0
  0119090  li 6, 1
  0119094  li 7, 128
  0119098  bl 0x502ea8
  011909c  nop
  01190a0  std 3, 248(1)
  01190a4  lis 9, 0
  01190a8  li 3, 0
  01190ac  li 4, 0
  01190b0  li 5, 1
  01190b4  li 6, 1
  01190b8  li 7, 1
  01190bc  li 8, 0
  01190c0  ori 9, 9, 65424
  01190c4  bl 0x502fd4
  01190c8  nop
  01190cc  std 3, 240(1)
  01190d0  li 3, 1
  01190d4  li 4, 1
  01190d8  li 5, 0
  01190dc  li 6, 0
  01190e0  li 7, 0
  01190e4  li 8, 0
  01190e8  bl 0x502f08
  01190ec  nop
  01190f0  std 3, 224(1)
  01190f4  lis 4, 16256
  01190f8  li 3, 0
  01190fc  lfs 6, 0(29)
  0119100  lis 5, 149
  0119104  addic 5, 5, 5056
  0119108  stw 3, 192(1)
  011910c  stw 3, 196(1)
  0119110  stw 3, 200(1)
  0119114  lfs 12, 4(29)
  0119118  stw 4, 204(1)
  011911c  stw 4, 208(1)
  0119120  stw 3, 212(1)
  0119124  stw 4, 216(1)
  0119128  stw 4, 220(1)
  011912c  lfs 2, 4(30)
  0119130  lfs 11, 324(5)
  0119134  lfs 1, 0(30)
  0119138  fsubs 11, 11, 2
  011913c  lfs 10, 320(5)
  0119140  lfs 3, 8(30)
  0119144  fsubs 10, 10, 1
  0119148  lfs 13, 328(5)
  011914c  fsubs 13, 13, 3
  0119150  fmr 7, 6
  0119154  fmuls 4, 11, 11
  0119158  fmr 8, 7
  011915c  fmadds 0, 10, 10, 4
  0119160  lfs 4, 12(30)
  0119164  lfs 5, 332(5)
  0119168  fmr 9, 8
  011916c  fmadds 0, 13, 13, 0
  0119170  fsqrts 29, 0
  0119174  fcmpu 0, 29, 9
  0119178  bt 2, 0x1191c8
  011917c  frsqrte 7, 0
  0119180  lis 3, 18
  0119184  addi 3, 3, -28644
  0119188  lfs 8, 8(3)
  011918c  fmuls 9, 0, 7
  0119190  fmuls 29, 8, 7
  0119194  fnmsubs 9, 9, 7, 12
  0119198  fmadds 7, 9, 29, 7
  011919c  fmuls 9, 0, 7
  01191a0  fmuls 29, 8, 7
  01191a4  fnmsubs 9, 9, 7, 12
  01191a8  fmadds 7, 9, 29, 7
  01191ac  fmuls 9, 0, 7
  01191b0  fmuls 8, 8, 7
  01191b4  fnmsubs 9, 9, 7, 12
  01191b8  fmadds 7, 9, 8, 7
  01191bc  fmuls 9, 10, 7
  01191c0  fmuls 8, 11, 7
  01191c4  fmuls 7, 13, 7
  01191c8  fmuls 10, 8, 8
  01191cc  fneg 10, 10
  01191d0  fneg 13, 10
  01191d4  fmr 10, 6
  01191d8  fmadds 13, 9, 9, 13
  01191dc  fmr 11, 10
  01191e0  fsqrts 0, 13
  01191e4  fcmpu 0, 0, 11
  01191e8  bt 2, 0x119238
  01191ec  frsqrte 10, 13
  01191f0  lis 3, 18
  01191f4  addi 3, 3, -28644
  01191f8  lfs 11, 8(3)
  01191fc  fmuls 0, 13, 10
  0119200  fmuls 29, 11, 10
  0119204  fnmsubs 0, 0, 10, 12
  0119208  fmadds 10, 0, 29, 10
  011920c  fmuls 0, 13, 10
  0119210  fmuls 29, 11, 10
  0119214  fnmsubs 0, 0, 10, 12
  0119218  fmadds 10, 0, 29, 10
  011921c  fmuls 13, 13, 10
  0119220  fmuls 11, 11, 10
  0119224  fnmsubs 12, 13, 10, 12
  0119228  fmadds 10, 12, 11, 10
  011922c  fmuls 11, 8, 10
  0119230  fmuls 10, 9, 10
  0119234  fneg 11, 11
  0119238  fmr 12, 10
  011923c  stw 31, 188(1)
  0119240  fmuls 10, 8, 11
  0119244  stw 31, 184(1)
  0119248  fmr 13, 5
  011924c  lis 3, 115
  0119250  fmr 0, 3
  0119254  li 4, 4
  0119258  stw 31, 180(1)
  011925c  fmadds 5, 8, 30, 2
  0119260  fmsubs 3, 7, 11, 6
  0119264  stw 31, 176(1)
  0119268  fmadds 2, 9, 30, 1
  011926c  addic 3, 3, -27472
  0119270  addic 31, 1, 112
  0119274  fmuls 11, 31, 11
  0119278  mtctr 4
  011927c  fmuls 29, 7, 12
  0119280  fmsubs 10, 9, 12, 10
  0119284  fmuls 12, 31, 12
  0119288  fmadds 30, 7, 30, 0
  011928c  fmuls 13, 31, 13
  0119290  fmsubs 1, 8, 6, 29
  0119294  lfs 0, 0(3)
  0119298  fmuls 29, 0, 31
  011929c  fmuls 0, 0, 13
  01192a0  fmadds 25, 29, 7, 6
  01192a4  stfs 29, 0(31)
  01192a8  lfs 28, 4(3)
  01192ac  fmuls 27, 28, 31
  01192b0  fmuls 26, 28, 11
  01192b4  fmuls 28, 28, 12
  01192b8  stfs 27, 4(31)
  01192bc  fmadds 27, 29, 9, 26
  01192c0  lfs 26, 8(3)
  01192c4  fmadds 29, 29, 8, 28
  01192c8  fmuls 28, 26, 31
  01192cc  fmadds 27, 28, 1, 27
  01192d0  fmadds 29, 28, 3, 29
  01192d4  stfs 28, 8(31)
  01192d8  fmadds 28, 28, 10, 25
  01192dc  lfs 26, 12(3)
  01192e0  addic 3, 3, 16
  01192e4  fmadds 0, 26, 4, 0
  01192e8  fmadds 27, 26, 2, 27
  01192ec  fmadds 29, 26, 5, 29
  01192f0  fmadds 28, 26, 30, 28
  01192f4  stfs 0, 12(31)
  01192f8  stfs 27, 0(31)
  01192fc  stfs 29, 4(31)
  0119300  stfs 28, 8(31)
  0119304  addic 31, 31, 16
  0119308  bdnz 0x119294
  011930c  lis 4, 161
  0119310  addic 3, 1, 112
  0119314  addic 6, 4, 24396
  0119318  li 4, 0
  011931c  li 5, 0
  0119320  li 7, 9
  0119324  lwz 6, 28(6)
  0119328  bl 0x72280
  011932c  nop
  0119330  ld 0, 352(1)
  0119334  mtlr 0
  0119338  lfd 25, 280(1)
  011933c  lfd 26, 288(1)
  0119340  lfd 27, 296(1)
  0119344  lfd 28, 304(1)
  0119348  lfd 29, 312(1)
  011934c  lfd 30, 320(1)
  0119350  lfd 31, 328(1)
  0119354  ld 29, 256(1)
  0119358  ld 30, 264(1)
  011935c  ld 31, 272(1)
  0119360  addi 1, 1, 336
  0119364  blr

???_MB_SetFadeByDistToHero:   # 0x119370, 0xf4 bytes
  0119370  stdu 1, -128(1)
  0119374  mflr 0
  0119378  std 0, 144(1)
  011937c  ori 4, 3, 0
  0119380  std 31, 120(1)
  0119384  cmpwi 4, 0
  0119388  bt 2, 0x119450
  011938c  cmpwi 3, 0
  0119390  bt 2, 0x119450
  0119394  lhz 4, 52(3)
  0119398  rlwinm 4, 4, 0, 26, 26
  011939c  cmpwi 4, 0
  01193a0  bt 2, 0x119450
  01193a4  lwz 31, 120(3)
  01193a8  lwz 31, 0(31)
  01193ac  cmpwi 31, 0
  01193b0  bt 2, 0x119450
  01193b4  lis 4, 151
  01193b8  lfs 2, 20(3)
  01193bc  addic 4, 4, -25376
  01193c0  lfs 3, 132(4)
  01193c4  lfs 4, 128(4)
  01193c8  fsubs 2, 3, 2
  01193cc  lfs 3, 16(3)
  01193d0  fsubs 3, 4, 3
  01193d4  lfs 4, 136(4)
  01193d8  lfs 5, 24(3)
  01193dc  fsubs 4, 4, 5
  01193e0  fmuls 2, 2, 2
  01193e4  lis 3, 18
  01193e8  addi 3, 3, -27800
  01193ec  fmadds 2, 3, 3, 2
  01193f0  lfs 3, 0(3)
  01193f4  fmadds 2, 4, 4, 2
  01193f8  fsqrts 2, 2
  01193fc  fmuls 2, 2, 3
  0119400  fmuls 1, 2, 1
  0119404  bl 0x502758
  0119408  nop
  011940c  addic 3, 3, -1
  0119410  li 4, 0
  0119414  extsw 6, 3
  0119418  li 5, 0
  011941c  subc 4, 6, 4
  0119420  subc 5, 5, 3
  0119424  sradi 4, 4, 63
  0119428  li 7, 255
  011942c  and 4, 4, 5
  0119430  subc 5, 7, 6
  0119434  li 8, 255
  0119438  addc 3, 3, 4
  011943c  sradi 4, 5, 63
  0119440  subc 5, 8, 3
  0119444  and 4, 4, 5
  0119448  addc 3, 3, 4
  011944c  stb 3, 10(31)
  0119450  ld 0, 144(1)
  0119454  mtlr 0
  0119458  ld 31, 120(1)
  011945c  addi 1, 1, 128
  0119460  blr

MB_SetPointAheadOfMoby:   # 0x119488, 0x138 bytes
  0119488  stdu 1, -144(1)
  011948c  mflr 0
  0119490  std 0, 160(1)
  0119494  stfd 30, 128(1)
  0119498  stfd 31, 136(1)
  011949c  lis 4, 18
  01194a0  lfs 2, 72(3)
  01194a4  addi 4, 4, -27548
  01194a8  lis 5, 150
  01194ac  lfs 3, 0(4)
  01194b0  lfs 4, 4(4)
  01194b4  fadds 3, 2, 3
  01194b8  fsubs 6, 4, 2
  01194bc  lfs 5, 8(4)
  01194c0  std 31, 120(1)
  01194c4  fsubs 7, 5, 2
  01194c8  addic 31, 5, -12976
  01194cc  li 5, 1
  01194d0  fsubs 4, 4, 3
  01194d4  fsub 8, 2, 6
  01194d8  fsubs 5, 5, 3
  01194dc  fsub 9, 3, 4
  01194e0  fsel 6, 8, 6, 2
  01194e4  lfs 8, 12(4)
  01194e8  fsel 3, 9, 4, 3
  01194ec  fsub 4, 7, 6
  01194f0  fsub 9, 5, 3
  01194f4  fsel 4, 4, 7, 6
  01194f8  lfs 6, 16(4)
  01194fc  lfs 7, 20(4)
  0119500  lfs 11, 20(3)
  0119504  lfs 13, 24(4)
  0119508  fsel 3, 9, 5, 3
  011950c  fmuls 5, 4, 4
  0119510  fmuls 9, 3, 3
  0119514  fmuls 10, 5, 4
  0119518  fmuls 12, 9, 3
  011951c  fmuls 0, 5, 10
  0119520  fmadds 4, 10, 8, 4
  0119524  lfs 10, 16(3)
  0119528  fmuls 31, 9, 12
  011952c  fmadds 3, 12, 8, 3
  0119530  fmuls 8, 5, 0
  0119534  fmadds 4, 0, 6, 4
  0119538  lfs 12, 24(3)
  011953c  lfs 0, 28(3)
  0119540  li 3, 0
  0119544  fmuls 30, 9, 31
  0119548  fmadds 3, 31, 6, 3
  011954c  fmuls 5, 5, 8
  0119550  stw 3, 44(31)
  0119554  fmadds 4, 8, 7, 4
  0119558  stw 3, 40(31)
  011955c  stw 3, 36(31)
  0119560  stw 3, 32(31)
  0119564  fmuls 6, 9, 30
  0119568  fmadds 3, 30, 7, 3
  011956c  fmadds 4, 5, 13, 4
  0119570  fmadds 3, 6, 13, 3
  0119574  fmadds 4, 4, 1, 11
  0119578  fmadds 3, 3, 1, 10
  011957c  fmr 1, 2
  0119580  stfs 4, 20(31)
  0119584  lfs 2, 28(4)
  0119588  stfs 0, 28(31)
  011958c  stfs 12, 24(31)
  0119590  stb 5, 74(31)
  0119594  stfs 3, 16(31)
  0119598  bl 0x502578
  011959c  nop
  01195a0  stfs 1, 40(31)
  01195a4  ld 0, 160(1)
  01195a8  mtlr 0
  01195ac  lfd 30, 128(1)
  01195b0  lfd 31, 136(1)
  01195b4  ld 31, 120(1)
  01195b8  addi 1, 1, 144
  01195bc  blr

MB_SpawnSparks_oClass2EE:   # 0x119600, 0x418 bytes
  0119600  stdu 1, -304(1)
  0119604  mflr 0
  0119608  std 0, 320(1)
  011960c  stfd 24, 240(1)
  0119610  stfd 25, 248(1)
  0119614  stfd 26, 256(1)
  0119618  stfd 27, 264(1)
  011961c  stfd 28, 272(1)
  0119620  stfd 29, 280(1)
  0119624  stfd 30, 288(1)
  0119628  stfd 31, 296(1)
  011962c  std 29, 216(1)
  0119630  addi 0, 1, 192
  0119634  stvx 31, 0, 0
  0119638  ori 29, 3, 0
  011963c  lhz 3, 166(3)
  0119640  std 31, 232(1)
  0119644  std 30, 224(1)
  0119648  std 28, 208(1)
  011964c  cmpwi 3, 750
  0119650  bf 2, 0x1199d0
  0119654  cmpwi 29, 0
  0119658  bt 2, 0x1199d0
  011965c  addic 5, 1, 128
  0119660  ori 3, 29, 0
  0119664  li 4, 0
  0119668  bl 0xf1038
  011966c  nop
  0119670  lfs 1, 132(1)
  0119674  lfs 2, 128(1)
  0119678  fmuls 1, 1, 1
  011967c  lfs 3, 136(1)
  0119680  lfs 4, 164(1)
  0119684  lfs 5, 160(1)
  0119688  lfs 6, 168(1)
  011968c  lis 3, 18
  0119690  addi 3, 3, -27200
  0119694  fmadds 1, 2, 2, 1
  0119698  fmuls 2, 4, 4
  011969c  li 4, 36
  01196a0  fmadds 1, 3, 3, 1
  01196a4  fmadds 2, 5, 5, 2
  01196a8  lfs 3, 0(3)
  01196ac  lfs 28, 4(3)
  01196b0  lfs 7, 16(3)
  01196b4  fsqrts 1, 1
  01196b8  lfs 30, 28(3)
  01196bc  lfs 8, 176(1)
  01196c0  lfs 9, 180(1)
  01196c4  lfs 10, 184(1)
  01196c8  lfs 25, 8(3)
  01196cc  lfs 11, 12(3)
  01196d0  lfs 13, 188(1)
  01196d4  lfs 26, 20(3)
  01196d8  lfs 29, 24(3)
  01196dc  stfs 13, 124(1)
  01196e0  li 29, 0
  01196e4  lis 31, 161
  01196e8  ori 30, 29, 0
  01196ec  addic 31, 31, 23856
  01196f0  fmadds 2, 6, 6, 2
  01196f4  fsqrts 2, 2
  01196f8  fmuls 31, 1, 3
  01196fc  fsub 1, 28, 31
  0119700  fsel 31, 1, 31, 28
  0119704  fmadds 1, 31, 7, 7
  0119708  fmadds 25, 31, 25, 11
  011970c  fmadds 26, 31, 26, 29
  0119710  fdivs 1, 1, 2
  0119714  fsub 3, 30, 2
  0119718  fsub 7, 30, 2
  011971c  fsub 13, 30, 2
  0119720  fsub 27, 2, 30
  0119724  fsub 24, 2, 30
  0119728  fsub 2, 2, 30
  011972c  fmuls 6, 6, 1
  0119730  fmuls 4, 4, 1
  0119734  fmuls 1, 5, 1
  0119738  fsel 3, 3, 30, 6
  011973c  fsel 5, 7, 30, 4
  0119740  fsel 7, 13, 30, 1
  0119744  fsel 3, 27, 3, 6
  0119748  fsel 4, 24, 5, 4
  011974c  fsel 1, 2, 7, 1
  0119750  fadds 2, 10, 3
  0119754  fadds 3, 9, 4
  0119758  fadds 1, 8, 1
  011975c  stfs 2, 120(1)
  0119760  stfs 3, 116(1)
  0119764  stfs 1, 112(1)
  0119768  lfs 27, 32(3)
  011976c  <unknown>
  0119770  vspltw 31, 31, 0
  0119774  bl 0x5c8318
  0119778  nop
  011977c  srawi 3, 3, 15
  0119780  clrlwi 3, 3, 17
  0119784  srawi 4, 3, 4
  0119788  addze 4, 4
  011978c  sldi 4, 4, 4
  0119790  subc 3, 3, 4
  0119794  extsw 28, 3
  0119798  bl 0x5c8318
  011979c  nop
  01197a0  srawi 3, 3, 15
  01197a4  fmr 1, 26
  01197a8  li 5, 0
  01197ac  fmr 2, 28
  01197b0  clrlwi 3, 3, 17
  01197b4  fmr 3, 27
  01197b8  neg 7, 28
  01197bc  fmr 4, 25
  01197c0  srawi 4, 3, 1
  01197c4  lis 10, 20528
  01197c8  addze 4, 4
  01197cc  ori 8, 31, 0
  01197d0  sldi 4, 4, 1
  01197d4  ori 10, 10, 12543
  01197d8  subc 3, 3, 4
  01197dc  subc 4, 28, 7
  01197e0  subc 3, 5, 3
  01197e4  cntlzw 3, 3
  01197e8  sldi 3, 3, 58
  01197ec  sradi 5, 3, 63
  01197f0  addic 3, 1, 112
  01197f4  and 4, 5, 4
  01197f8  addc 7, 7, 4
  01197fc  bl 0x126f50
  0119800  nop
  0119804  cmpwi 3, 0
  0119808  bt 2, 0x119850
  011980c  vspltisw 2, -1
  0119810  lis 4, 114
  0119814  li 5, -3056
  0119818  vslw 2, 2, 2
  011981c  li 6, 80
  0119820  li 7, 43
  0119824  <unknown>
  0119828  li 4, 10
  011982c  vmaddfp 2, 3, 31, 2
  0119830  li 5, 2
  0119834  vctsxs 2, 2, 0
  0119838  vsplth 3, 2, 1
  011983c  vspltb 2, 2, 3
  0119840  stvehx 3, 4, 3
  0119844  stw 5, 36(3)
  0119848  stb 6, 42(3)
  011984c  stvebx 2, 7, 3
  0119850  addic 29, 29, 1
  0119854  cmpwi 29, 2
  0119858  bt 0, 0x119774
  011985c  lfs 1, 164(1)
  0119860  lfs 2, 160(1)
  0119864  fmuls 3, 1, 1
  0119868  lfs 4, 168(1)
  011986c  lis 3, 18
  0119870  fmr 5, 31
  0119874  addi 3, 3, -27200
  0119878  fmadds 3, 2, 2, 3
  011987c  lfs 6, 48(3)
  0119880  lfs 7, 52(3)
  0119884  lfs 31, 40(3)
  0119888  fmadds 6, 5, 6, 7
  011988c  lfs 7, 44(3)
  0119890  lfs 8, 56(3)
  0119894  fmadds 31, 5, 31, 7
  0119898  fmadds 29, 5, 8, 29
  011989c  fmadds 3, 4, 4, 3
  01198a0  lfs 11, 176(1)
  01198a4  li 4, 60
  01198a8  lfs 12, 180(1)
  01198ac  lfs 13, 184(1)
  01198b0  fsqrts 3, 3
  01198b4  lfs 0, 188(1)
  01198b8  stfs 0, 124(1)
  01198bc  fdivs 5, 6, 3
  01198c0  fsub 6, 30, 3
  01198c4  fsub 7, 30, 3
  01198c8  fsub 8, 30, 3
  01198cc  fsub 9, 3, 30
  01198d0  fsub 10, 3, 30
  01198d4  fsub 3, 3, 30
  01198d8  fmuls 4, 4, 5
  01198dc  fmuls 1, 1, 5
  01198e0  fmuls 2, 2, 5
  01198e4  fsel 5, 6, 30, 4
  01198e8  fsel 6, 7, 30, 1
  01198ec  fsel 7, 8, 30, 2
  01198f0  fsel 4, 9, 5, 4
  01198f4  fsel 1, 10, 6, 1
  01198f8  fsel 2, 3, 7, 2
  01198fc  fadds 3, 13, 4
  0119900  fadds 1, 12, 1
  0119904  fadds 2, 11, 2
  0119908  stfs 3, 120(1)
  011990c  stfs 1, 116(1)
  0119910  stfs 2, 112(1)
  0119914  <unknown>
  0119918  vspltw 31, 31, 0
  011991c  addic 3, 1, 112
  0119920  lis 10, 32767
  0119924  fmr 1, 29
  0119928  li 7, 16
  011992c  fmr 2, 28
  0119930  fmr 3, 28
  0119934  ori 8, 31, 0
  0119938  fmr 4, 31
  011993c  ori 10, 10, 65535
  0119940  bl 0x126f50
  0119944  nop
  0119948  ori 29, 3, 0
  011994c  cmpwi 29, 0
  0119950  bt 2, 0x1199c4
  0119954  vspltisw 2, -1
  0119958  lis 3, 114
  011995c  li 4, -3056
  0119960  vslw 2, 2, 2
  0119964  <unknown>
  0119968  li 3, 10
  011996c  vmaddfp 2, 3, 31, 2
  0119970  vctsxs 2, 2, 0
  0119974  vsplth 2, 2, 1
  0119978  stvehx 2, 3, 29
  011997c  bl 0x5c8318
  0119980  nop
  0119984  srawi 3, 3, 15
  0119988  li 6, 2
  011998c  clrlwi 3, 3, 17
  0119990  addic 4, 3, 1
  0119994  stw 6, 36(29)
  0119998  sldi 5, 4, 8
  011999c  lhz 6, 10(29)
  01199a0  addc 4, 4, 5
  01199a4  li 5, 127
  01199a8  srwi 4, 4, 16
  01199ac  sldi 7, 4, 8
  01199b0  stb 5, 42(29)
  01199b4  subc 4, 7, 4
  01199b8  stb 6, 43(29)
  01199bc  subc 3, 3, 4
  01199c0  stb 3, 8(29)
  01199c4  addic 30, 30, 1
  01199c8  cmpwi 30, 5
  01199cc  bt 0, 0x11991c
  01199d0  li 0, 192
  01199d4  lvx 31, 1, 0
  01199d8  ld 0, 320(1)
  01199dc  mtlr 0
  01199e0  lfd 24, 240(1)
  01199e4  lfd 25, 248(1)
  01199e8  lfd 26, 256(1)
  01199ec  lfd 27, 264(1)
  01199f0  lfd 28, 272(1)
  01199f4  lfd 29, 280(1)
  01199f8  lfd 30, 288(1)
  01199fc  lfd 31, 296(1)
  0119a00  ld 28, 208(1)
  0119a04  ld 29, 216(1)
  0119a08  ld 30, 224(1)
  0119a0c  ld 31, 232(1)
  0119a10  addi 1, 1, 304
  0119a14  blr

DoManipulator:   # 0x119a18, 0xa4 bytes
  0119a18  stdu 1, -128(1)
  0119a1c  mflr 0
  0119a20  std 0, 144(1)
  0119a24  stfd 31, 120(1)
  0119a28  std 31, 112(1)
  0119a2c  lis 6, 151
  0119a30  ori 31, 5, 0
  0119a34  fmr 31, 1
  0119a38  addic 6, 6, -16268
  0119a3c  ori 7, 4, 0
  0119a40  ori 4, 3, 0
  0119a44  ori 3, 7, 0
  0119a48  lbz 5, 7(6)
  0119a4c  cmpwi 5, 0
  0119a50  bt 2, 0x119a88
  0119a54  lbz 5, 1(31)
  0119a58  cmpwi 5, 0
  0119a5c  bf 2, 0x119a78
  0119a60  ori 5, 3, 0
  0119a64  ori 3, 4, 0
  0119a68  ori 4, 5, 0
  0119a6c  ori 5, 31, 0
  0119a70  bl 0xf0ea8
  0119a74  nop
  0119a78  stfs 31, 32(31)
  0119a7c  stfs 31, 36(31)
  0119a80  stfs 31, 40(31)
  0119a84  b 0x119aa4
  0119a88  lbz 3, 1(31)
  0119a8c  cmpwi 3, 0
  0119a90  bt 2, 0x119aa4
  0119a94  ori 3, 4, 0
  0119a98  ori 4, 31, 0
  0119a9c  bl 0xf0f1c
  0119aa0  nop
  0119aa4  ld 0, 144(1)
  0119aa8  mtlr 0
  0119aac  lfd 31, 120(1)
  0119ab0  ld 31, 112(1)
  0119ab4  addi 1, 1, 128
  0119ab8  blr

MB_SetScaleCheat:   # 0x119ac0, 0x28 bytes
  0119ac0  lis 4, 151
  0119ac4  addic 4, 4, -16268
  0119ac8  lbz 4, 7(4)
  0119acc  cmpwi 4, 0
  0119ad0  bf 2, 0x119ae0
  0119ad4  lis 4, 18
  0119ad8  addi 4, 4, -25924
  0119adc  lfs 1, 0(4)
  0119ae0  stfs 1, 112(3)
  0119ae4  blr

MB_InitDebrisList:   # 0x119ae8, 0x24 bytes
  0119ae8  li 6, 7
  0119aec  li 5, 0
  0119af0  ori 4, 3, 0
  0119af4  mtctr 6
  0119af8  stw 5, 0(4)
  0119afc  addic 4, 4, 4
  0119b00  bdnz 0x119af8
  0119b04  sth 5, 28(3)
  0119b08  blr

MB_UpdateDebris:   # 0x119b38, 0x4d8 bytes
  0119b38  stdu 1, -368(1)
  0119b3c  mflr 0
  0119b40  std 0, 384(1)
  0119b44  stfd 24, 304(1)
  0119b48  stfd 25, 312(1)
  0119b4c  stfd 26, 320(1)
  0119b50  stfd 27, 328(1)
  0119b54  stfd 28, 336(1)
  0119b58  stfd 29, 344(1)
  0119b5c  stfd 30, 352(1)
  0119b60  stfd 31, 360(1)
  0119b64  lfs 29, 4(5)
  0119b68  fmr 31, 1
  0119b6c  lfs 5, 0(5)
  0119b70  fmuls 1, 29, 29
  0119b74  lfs 28, 8(5)
  0119b78  std 24, 240(1)
  0119b7c  lis 6, 18
  0119b80  li 24, 0
  0119b84  addi 6, 6, -25844
  0119b88  std 31, 296(1)
  0119b8c  lis 7, 161
  0119b90  std 30, 288(1)
  0119b94  ori 31, 3, 0
  0119b98  ori 30, 4, 0
  0119b9c  fmadds 1, 5, 5, 1
  0119ba0  lfs 25, 0(6)
  0119ba4  stw 24, 208(1)
  0119ba8  stw 24, 212(1)
  0119bac  lfs 2, 0(4)
  0119bb0  lfs 3, 4(4)
  0119bb4  lfs 4, 8(4)
  0119bb8  lfs 6, 12(4)
  0119bbc  stfs 2, 112(1)
  0119bc0  fmadds 1, 28, 28, 1
  0119bc4  stfs 3, 116(1)
  0119bc8  stfs 4, 120(1)
  0119bcc  stfs 6, 124(1)
  0119bd0  std 29, 280(1)
  0119bd4  lfs 26, 4(6)
  0119bd8  lwz 29, 1808(7)
  0119bdc  fadds 30, 31, 26
  0119be0  srawi 3, 29, 2
  0119be4  fsqrts 1, 1
  0119be8  addze 3, 3
  0119bec  sldi 3, 3, 2
  0119bf0  subc 29, 29, 3
  0119bf4  std 28, 272(1)
  0119bf8  std 27, 264(1)
  0119bfc  std 26, 256(1)
  0119c00  std 25, 248(1)
  0119c04  std 23, 232(1)
  0119c08  fcmpu 0, 1, 25
  0119c0c  bf 2, 0x119c24
  0119c10  fmr 30, 25
  0119c14  lfs 27, 12(5)
  0119c18  fmr 29, 30
  0119c1c  fmr 28, 29
  0119c20  b 0x119c38
  0119c24  fdivs 1, 30, 1
  0119c28  lfs 27, 12(5)
  0119c2c  fmuls 30, 5, 1
  0119c30  fmuls 29, 29, 1
  0119c34  fmuls 28, 28, 1
  0119c38  fadds 1, 30, 2
  0119c3c  fadds 2, 29, 3
  0119c40  stfs 27, 140(1)
  0119c44  fadds 3, 28, 4
  0119c48  addic 3, 1, 112
  0119c4c  addic 4, 1, 128
  0119c50  li 5, 2
  0119c54  li 6, 0
  0119c58  li 7, 0
  0119c5c  stfs 1, 128(1)
  0119c60  stfs 2, 132(1)
  0119c64  stfs 3, 136(1)
  0119c68  bl 0x57820
  0119c6c  nop
  0119c70  cmpwi 3, 0
  0119c74  bt 2, 0x119ccc
  0119c78  lis 3, 161
  0119c7c  lfs 1, 116(1)
  0119c80  addic 3, 3, 2368
  0119c84  lfs 2, 112(1)
  0119c88  lfs 3, 36(3)
  0119c8c  lfs 4, 32(3)
  0119c90  fsubs 1, 1, 3
  0119c94  fsubs 2, 2, 4
  0119c98  lfs 3, 120(1)
  0119c9c  lfs 4, 40(3)
  0119ca0  fsubs 3, 3, 4
  0119ca4  fmuls 1, 1, 1
  0119ca8  fmadds 1, 2, 2, 1
  0119cac  fmadds 1, 3, 3, 1
  0119cb0  fsqrts 1, 1
  0119cb4  fsubs 26, 1, 26
  0119cb8  fcmpu 0, 26, 25
  0119cbc  cror 6, 1, 2
  0119cc0  bt 6, 0x119cd0
  0119cc4  fmr 26, 25
  0119cc8  b 0x119cd0
  0119ccc  fmr 26, 31
  0119cd0  lis 3, 18
  0119cd4  lis 4, 114
  0119cd8  fmr 24, 30
  0119cdc  addi 28, 3, -25844
  0119ce0  fmr 1, 26
  0119ce4  lis 6, 115
  0119ce8  lis 27, 114
  0119cec  addic 3, 1, 212
  0119cf0  addic 5, 1, 208
  0119cf4  lfs 30, 8(28)
  0119cf8  lfs 3, 12(28)
  0119cfc  lfs 5, -3048(4)
  0119d00  lfs 4, -27404(6)
  0119d04  lfs 2, -3052(27)
  0119d08  fmuls 3, 5, 3
  0119d0c  fmuls 4, 4, 2
  0119d10  fmr 2, 30
  0119d14  bl 0x109c30
  0119d18  fmuls 1, 29, 29
  0119d1c  lfs 2, 208(1)
  0119d20  lfs 3, 16(28)
  0119d24  lis 3, 115
  0119d28  lis 26, 115
  0119d2c  fcmpu 0, 26, 3
  0119d30  fmadds 1, 24, 24, 1
  0119d34  lwz 25, -27400(3)
  0119d38  lwz 26, -27396(26)
  0119d3c  cror 6, 1, 2
  0119d40  fmadds 1, 28, 28, 1
  0119d44  fsqrts 1, 1
  0119d48  fdivs 2, 2, 1
  0119d4c  fsub 3, 25, 1
  0119d50  fsub 4, 25, 1
  0119d54  fsub 5, 25, 1
  0119d58  fsub 6, 1, 25
  0119d5c  fsub 7, 1, 25
  0119d60  fsub 1, 1, 25
  0119d64  fmuls 8, 2, 28
  0119d68  fmuls 28, 2, 29
  0119d6c  fmuls 24, 2, 24
  0119d70  fsel 29, 3, 25, 8
  0119d74  fsel 2, 4, 25, 28
  0119d78  fsel 3, 5, 25, 24
  0119d7c  fsel 29, 6, 29, 8
  0119d80  fsel 28, 7, 2, 28
  0119d84  fsel 24, 1, 3, 24
  0119d88  bt 6, 0x119d90
  0119d8c  li 25, 1
  0119d90  addc 26, 26, 25
  0119d94  ori 28, 24, 0
  0119d98  cmpwi 26, 0
  0119d9c  bf 1, 0x119ec8
  0119da0  fdivs 31, 30, 31
  0119da4  lis 3, 18
  0119da8  extsw 25, 25
  0119dac  addi 3, 3, -25844
  0119db0  lfs 30, 20(3)
  0119db4  fmuls 31, 26, 31
  0119db8  lis 3, 115
  0119dbc  lis 4, 115
  0119dc0  addic 23, 1, 160
  0119dc4  lfs 1, -27392(3)
  0119dc8  lfs 2, -27388(4)
  0119dcc  ori 3, 23, 0
  0119dd0  lfs 4, -3052(27)
  0119dd4  fsubs 3, 1, 2
  0119dd8  fmr 1, 25
  0119ddc  fmadds 2, 3, 31, 2
  0119de0  fmuls 2, 4, 2
  0119de4  bl 0xfea60
  0119de8  lfs 1, 160(1)
  0119dec  lfs 2, 164(1)
  0119df0  fadds 1, 1, 24
  0119df4  lfs 3, 168(1)
  0119df8  fadds 2, 2, 28
  0119dfc  fadds 3, 3, 29
  0119e00  stfs 1, 160(1)
  0119e04  stfs 2, 164(1)
  0119e08  stfs 3, 168(1)
  0119e0c  bl 0x5c8318
  0119e10  nop
  0119e14  srawi 3, 3, 15
  0119e18  fmr 1, 26
  0119e1c  clrlwi 3, 3, 17
  0119e20  extsw 3, 3
  0119e24  subc 6, 28, 25
  0119e28  ori 4, 23, 0
  0119e2c  std 3, 216(1)
  0119e30  lfs 2, 112(1)
  0119e34  lfs 3, 116(1)
  0119e38  lfs 4, 120(1)
  0119e3c  stfs 27, 156(1)
  0119e40  lfd 5, 216(1)
  0119e44  fcfid 5, 5
  0119e48  addic 3, 1, 144
  0119e4c  rldicl 6, 6, 1, 63
  0119e50  frsp 5, 5
  0119e54  fmuls 5, 5, 30
  0119e58  fmadds 2, 5, 24, 2
  0119e5c  fmadds 3, 5, 28, 3
  0119e60  fmadds 4, 5, 29, 4
  0119e64  stfs 2, 144(1)
  0119e68  stfs 3, 148(1)
  0119e6c  stfs 4, 152(1)
  0119e70  bl 0x123ec8
  0119e74  nop
  0119e78  cmpwi 28, 2
  0119e7c  bf 2, 0x119ebc
  0119e80  cmpwi 29, 0
  0119e84  bf 2, 0x119ebc
  0119e88  ori 4, 24, 0
  0119e8c  ori 5, 31, 0
  0119e90  lwz 6, 0(5)
  0119e94  cmpwi 6, 0
  0119e98  bf 2, 0x119eac
  0119e9c  slwi 4, 4, 2
  0119ea0  extsw 4, 4
  0119ea4  stwx 3, 31, 4
  0119ea8  b 0x119ebc
  0119eac  addic 4, 4, 1
  0119eb0  addic 5, 5, 4
  0119eb4  cmpwi 4, 7
  0119eb8  bt 0, 0x119e90
  0119ebc  addic 28, 28, 1
  0119ec0  cmpw 28, 26
  0119ec4  bt 0, 0x119db8
  0119ec8  addic 3, 31, 28
  0119ecc  bl 0x4fffb4
  0119ed0  nop
  0119ed4  cmpwi 3, 0
  0119ed8  bt 2, 0x119fbc
  0119edc  bl 0x5c8318
  0119ee0  nop
  0119ee4  srawi 3, 3, 15
  0119ee8  lis 4, 18
  0119eec  clrlwi 3, 3, 17
  0119ef0  addi 29, 4, -25844
  0119ef4  extsw 3, 3
  0119ef8  std 3, 216(1)
  0119efc  lfs 1, 24(29)
  0119f00  lfs 31, 20(29)
  0119f04  lfs 2, 28(29)
  0119f08  lfd 3, 216(1)
  0119f0c  fcfid 3, 3
  0119f10  lis 3, 114
  0119f14  lfs 4, -3056(3)
  0119f18  frsp 3, 3
  0119f1c  fmuls 1, 3, 1
  0119f20  fmadds 1, 1, 31, 2
  0119f24  fmuls 1, 4, 1
  0119f28  bl 0x502758
  0119f2c  nop
  0119f30  sth 3, 28(31)
  0119f34  lfs 3, 32(29)
  0119f38  addic 3, 1, 192
  0119f3c  lfs 2, -3052(27)
  0119f40  fmr 1, 25
  0119f44  fmuls 2, 2, 3
  0119f48  bl 0xfea60
  0119f4c  bl 0x5c8318
  0119f50  nop
  0119f54  srawi 3, 3, 15
  0119f58  clrlwi 3, 3, 17
  0119f5c  extsw 3, 3
  0119f60  addic 4, 1, 176
  0119f64  std 3, 216(1)
  0119f68  lfs 1, 36(29)
  0119f6c  lfs 2, 40(29)
  0119f70  lfs 3, 192(1)
  0119f74  lfs 4, 196(1)
  0119f78  lfs 5, 200(1)
  0119f7c  stw 24, 188(1)
  0119f80  lfd 6, 216(1)
  0119f84  ori 3, 30, 0
  0119f88  fcfid 6, 6
  0119f8c  li 5, 0
  0119f90  frsp 6, 6
  0119f94  fmuls 1, 6, 1
  0119f98  fmadds 1, 1, 31, 2
  0119f9c  fmadds 2, 1, 24, 3
  0119fa0  fmadds 3, 1, 28, 4
  0119fa4  fmadds 1, 1, 29, 5
  0119fa8  stfs 2, 176(1)
  0119fac  stfs 3, 180(1)
  0119fb0  stfs 1, 184(1)
  0119fb4  bl 0x127918
  0119fb8  nop
  0119fbc  ld 0, 384(1)
  0119fc0  mtlr 0
  0119fc4  lfd 24, 304(1)
  0119fc8  lfd 25, 312(1)
  0119fcc  lfd 26, 320(1)
  0119fd0  lfd 27, 328(1)
  0119fd4  lfd 28, 336(1)
  0119fd8  lfd 29, 344(1)
  0119fdc  lfd 30, 352(1)
  0119fe0  lfd 31, 360(1)
  0119fe4  ld 23, 232(1)
  0119fe8  ld 24, 240(1)
  0119fec  ld 25, 248(1)
  0119ff0  ld 26, 256(1)
  0119ff4  ld 27, 264(1)
  0119ff8  ld 28, 272(1)
  0119ffc  ld 29, 280(1)
  011a000  ld 30, 288(1)
  011a004  ld 31, 296(1)
  011a008  addi 1, 1, 368
  011a00c  blr

MB_DebrisCollide:   # 0x11a018, 0xe4 bytes
  011a018  stdu 1, -176(1)
  011a01c  mflr 0
  011a020  std 0, 192(1)
  011a024  stfd 31, 168(1)
  011a028  std 26, 120(1)
  011a02c  lis 6, 18
  011a030  li 26, 0
  011a034  std 28, 136(1)
  011a038  addi 6, 6, -24560
  011a03c  std 30, 152(1)
  011a040  std 29, 144(1)
  011a044  ori 28, 26, 0
  011a048  ori 29, 3, 0
  011a04c  std 31, 160(1)
  011a050  ori 30, 4, 0
  011a054  std 27, 128(1)
  011a058  ori 31, 5, 0
  011a05c  lfs 31, 0(6)
  011a060  lwz 27, 0(29)
  011a064  cmpwi 27, 0
  011a068  bt 2, 0x11a0c0
  011a06c  lbz 3, 0(27)
  011a070  cmpwi 3, 12
  011a074  bf 2, 0x11a0bc
  011a078  lbz 3, 1(27)
  011a07c  cmpwi 3, 128
  011a080  bf 0, 0x11a0bc
  011a084  lfs 1, 12(27)
  011a088  addic 3, 27, 16
  011a08c  li 5, 0
  011a090  ori 6, 30, 0
  011a094  ori 7, 31, 0
  011a098  fmuls 1, 1, 31
  011a09c  bl 0x5e598
  011a0a0  nop
  011a0a4  lhz 3, 10(27)
  011a0a8  extsh 3, 3
  011a0ac  cmpwi 3, 5
  011a0b0  bf 0, 0x11a0c0
  011a0b4  stw 28, 0(29)
  011a0b8  b 0x11a0c0
  011a0bc  stw 28, 0(29)
  011a0c0  addic 26, 26, 1
  011a0c4  addic 29, 29, 4
  011a0c8  cmpwi 26, 7
  011a0cc  bt 0, 0x11a060
  011a0d0  ld 0, 192(1)
  011a0d4  mtlr 0
  011a0d8  lfd 31, 168(1)
  011a0dc  ld 26, 120(1)
  011a0e0  ld 27, 128(1)
  011a0e4  ld 28, 136(1)
  011a0e8  ld 29, 144(1)
  011a0ec  ld 30, 152(1)
  011a0f0  ld 31, 160(1)
  011a0f4  addi 1, 1, 176
  011a0f8  blr

MB_DistributeBoltsNearHero:   # 0x11a100, 0x7c bytes
  011a100  stdu 1, -112(1)
  011a104  mflr 0
  011a108  std 0, 128(1)
  011a10c  lis 4, 151
  011a110  lfs 1, 20(3)
  011a114  addic 4, 4, -25376
  011a118  lfs 2, 16(3)
  011a11c  lfs 3, 132(4)
  011a120  lfs 4, 128(4)
  011a124  fsubs 1, 1, 3
  011a128  fsubs 2, 2, 4
  011a12c  lis 4, 18
  011a130  addi 4, 4, -24324
  011a134  fmuls 1, 1, 1
  011a138  fmadds 1, 2, 2, 1
  011a13c  lfs 2, 0(4)
  011a140  li 4, 0
  011a144  fsqrts 1, 1
  011a148  fcmpu 0, 1, 2
  011a14c  cror 6, 1, 2
  011a150  bt 6, 0x11a158
  011a154  li 4, 2
  011a158  ori 6, 4, 0
  011a15c  li 4, 4
  011a160  li 5, 7
  011a164  li 7, -1
  011a168  bl 0xfcd60
  011a16c  ld 0, 128(1)
  011a170  mtlr 0
  011a174  addi 1, 1, 112
  011a178  blr

MB_SpawnSparksPair:   # 0x11a1a0, 0x2b4 bytes
  011a1a0  stdu 1, -224(1)
  011a1a4  mflr 0
  011a1a8  std 0, 240(1)
  011a1ac  stfd 26, 176(1)
  011a1b0  stfd 27, 184(1)
  011a1b4  stfd 28, 192(1)
  011a1b8  stfd 29, 200(1)
  011a1bc  stfd 30, 208(1)
  011a1c0  stfd 31, 216(1)
  011a1c4  addi 0, 1, 112
  011a1c8  stvx 31, 0, 0
  011a1cc  lis 6, 18
  011a1d0  li 7, 12
  011a1d4  fmr 28, 1
  011a1d8  addi 6, 6, -24196
  011a1dc  std 26, 128(1)
  011a1e0  fmr 31, 2
  011a1e4  std 29, 152(1)
  011a1e8  std 28, 144(1)
  011a1ec  li 26, 0
  011a1f0  ori 28, 3, 0
  011a1f4  std 30, 160(1)
  011a1f8  ori 29, 26, 0
  011a1fc  ori 30, 4, 0
  011a200  std 31, 168(1)
  011a204  lfs 26, 0(6)
  011a208  ori 31, 5, 0
  011a20c  lfs 29, 4(6)
  011a210  lfs 27, 8(6)
  011a214  <unknown>
  011a218  std 27, 136(1)
  011a21c  lfs 30, 16(6)
  011a220  vspltw 31, 31, 0
  011a224  bl 0x5c8318
  011a228  nop
  011a22c  srawi 3, 3, 15
  011a230  clrlwi 3, 3, 17
  011a234  srawi 4, 3, 4
  011a238  addze 4, 4
  011a23c  sldi 4, 4, 4
  011a240  subc 3, 3, 4
  011a244  extsw 27, 3
  011a248  bl 0x5c8318
  011a24c  nop
  011a250  srawi 3, 3, 15
  011a254  fmr 1, 26
  011a258  li 5, 0
  011a25c  fmr 2, 29
  011a260  clrlwi 3, 3, 17
  011a264  fmr 3, 27
  011a268  neg 7, 27
  011a26c  fmr 4, 28
  011a270  srawi 4, 3, 1
  011a274  lis 10, 32544
  011a278  addze 4, 4
  011a27c  ori 8, 31, 0
  011a280  sldi 4, 4, 1
  011a284  ori 10, 10, 16512
  011a288  subc 3, 3, 4
  011a28c  subc 4, 27, 7
  011a290  subc 3, 5, 3
  011a294  cntlzw 3, 3
  011a298  sldi 3, 3, 58
  011a29c  sradi 5, 3, 63
  011a2a0  ori 3, 28, 0
  011a2a4  and 4, 5, 4
  011a2a8  addc 7, 7, 4
  011a2ac  bl 0x126f50
  011a2b0  nop
  011a2b4  ori 27, 3, 0
  011a2b8  cmpwi 27, 0
  011a2bc  bt 2, 0x11a314
  011a2c0  vspltisw 2, -1
  011a2c4  lis 3, 114
  011a2c8  li 4, -3056
  011a2cc  fmr 1, 30
  011a2d0  vslw 2, 2, 2
  011a2d4  <unknown>
  011a2d8  li 3, 10
  011a2dc  vmaddfp 2, 3, 31, 2
  011a2e0  vctsxs 2, 2, 0
  011a2e4  vsplth 2, 2, 1
  011a2e8  stvehx 2, 3, 27
  011a2ec  bl 0x502758
  011a2f0  nop
  011a2f4  addic 3, 3, 64
  011a2f8  li 4, 2
  011a2fc  lhz 6, 10(27)
  011a300  li 5, 127
  011a304  stb 3, 9(27)
  011a308  stw 4, 36(27)
  011a30c  stb 5, 42(27)
  011a310  stb 6, 43(27)
  011a314  addic 26, 26, 1
  011a318  cmpwi 26, 2
  011a31c  bt 0, 0x11a224
  011a320  lis 3, 18
  011a324  li 4, 28
  011a328  addi 3, 3, -24196
  011a32c  li 28, 16
  011a330  lfs 27, 20(3)
  011a334  lfs 28, 24(3)
  011a338  <unknown>
  011a33c  vspltw 31, 31, 0
  011a340  ori 3, 30, 0
  011a344  fmr 1, 27
  011a348  lis 10, 32767
  011a34c  fmr 2, 29
  011a350  ori 7, 28, 0
  011a354  fmr 3, 28
  011a358  fmr 4, 31
  011a35c  ori 8, 31, 0
  011a360  ori 10, 10, 65535
  011a364  bl 0x126f50
  011a368  nop
  011a36c  ori 27, 3, 0
  011a370  cmpwi 27, 0
  011a374  bt 2, 0x11a3fc
  011a378  fmr 1, 30
  011a37c  bl 0x502758
  011a380  nop
  011a384  vspltisw 2, -1
  011a388  addic 3, 3, 64
  011a38c  lis 4, 114
  011a390  li 5, -3056
  011a394  vslw 2, 2, 2
  011a398  stb 3, 9(27)
  011a39c  li 3, 10
  011a3a0  <unknown>
  011a3a4  vmaddfp 2, 3, 31, 2
  011a3a8  vctsxs 2, 2, 0
  011a3ac  vsplth 2, 2, 1
  011a3b0  stvehx 2, 3, 27
  011a3b4  bl 0x5c8318
  011a3b8  nop
  011a3bc  srawi 3, 3, 15
  011a3c0  li 6, 2
  011a3c4  clrlwi 3, 3, 17
  011a3c8  addic 4, 3, 1
  011a3cc  stw 6, 36(27)
  011a3d0  sldi 5, 4, 8
  011a3d4  lhz 6, 10(27)
  011a3d8  addc 4, 4, 5
  011a3dc  li 5, 127
  011a3e0  srwi 4, 4, 16
  011a3e4  sldi 7, 4, 8
  011a3e8  stb 5, 42(27)
  011a3ec  subc 4, 7, 4
  011a3f0  stb 6, 43(27)
  011a3f4  subc 3, 3, 4
  011a3f8  stb 3, 8(27)
  011a3fc  addic 29, 29, 1
  011a400  neg 28, 28
  011a404  cmpwi 29, 3
  011a408  bt 0, 0x11a340
  011a40c  li 0, 112
  011a410  lvx 31, 1, 0
  011a414  ld 0, 240(1)
  011a418  mtlr 0
  011a41c  lfd 26, 176(1)
  011a420  lfd 27, 184(1)
  011a424  lfd 28, 192(1)
  011a428  lfd 29, 200(1)
  011a42c  lfd 30, 208(1)
  011a430  lfd 31, 216(1)
  011a434  ld 26, 128(1)
  011a438  ld 27, 136(1)
  011a43c  ld 28, 144(1)
  011a440  ld 29, 152(1)
  011a444  ld 30, 160(1)
  011a448  ld 31, 168(1)
  011a44c  addi 1, 1, 224
  011a450  blr

MB_ToastMessageFmt:   # 0x11a458, 0xc0 bytes
  011a458  stdu 1, -160(1)
  011a45c  mflr 0
  011a460  std 0, 176(1)
  011a464  addi 0, 1, 128
  011a468  stvx 31, 0, 0
  011a46c  li 0, 112
  011a470  stw 5, 112(1)
  011a474  cmpwi 5, -1
  011a478  std 31, 152(1)
  011a47c  stw 5, 116(1)
  011a480  ori 31, 4, 0
  011a484  stw 5, 120(1)
  011a488  stw 5, 124(1)
  011a48c  std 30, 144(1)
  011a490  lvx 31, 1, 0
  011a494  bf 2, 0x11a4c4
  011a498  lis 4, 18
  011a49c  vspltisw 2, -1
  011a4a0  lis 5, 114
  011a4a4  addi 4, 4, -23468
  011a4a8  li 6, -3056
  011a4ac  vslw 2, 2, 2
  011a4b0  <unknown>
  011a4b4  <unknown>
  011a4b8  vspltw 3, 3, 0
  011a4bc  vmaddfp 31, 4, 3, 2
  011a4c0  vctsxs 31, 31, 0
  011a4c4  lis 4, 161
  011a4c8  addic 30, 4, 23692
  011a4cc  bl 0x7b740
  011a4d0  nop
  011a4d4  ori 4, 3, 0
  011a4d8  ori 3, 30, 0
  011a4dc  ori 5, 31, 0
  011a4e0  bl 0x5cd2a8
  011a4e4  nop
  011a4e8  vspltw 2, 31, 0
  011a4ec  lis 3, 161
  011a4f0  li 4, 23680
  011a4f4  stvewx 2, 4, 3
  011a4f8  li 0, 128
  011a4fc  lvx 31, 1, 0
  011a500  ld 0, 176(1)
  011a504  mtlr 0
  011a508  ld 30, 144(1)
  011a50c  ld 31, 152(1)
  011a510  addi 1, 1, 160
  011a514  blr

MB_SpawnDebrisMoby:   # 0x11a560, 0x508 bytes
  011a560  stdu 1, -256(1)
  011a564  mflr 0
  011a568  std 0, 272(1)
  011a56c  stfd 28, 224(1)
  011a570  stfd 29, 232(1)
  011a574  stfd 30, 240(1)
  011a578  stfd 31, 248(1)
  011a57c  lis 9, 0
  011a580  lis 11, 0
  011a584  std 26, 176(1)
  011a588  fmr 31, 1
  011a58c  ori 26, 3, 0
  011a590  std 31, 216(1)
  011a594  ori 3, 4, 0
  011a598  std 23, 152(1)
  011a59c  ori 31, 10, 0
  011a5a0  std 30, 208(1)
  011a5a4  std 24, 160(1)
  011a5a8  lwz 23, 372(1)
  011a5ac  ori 30, 8, 0
  011a5b0  std 29, 200(1)
  011a5b4  lwz 24, 380(1)
  011a5b8  std 28, 192(1)
  011a5bc  ori 29, 7, 0
  011a5c0  std 27, 184(1)
  011a5c4  ori 28, 6, 0
  011a5c8  std 25, 168(1)
  011a5cc  std 22, 144(1)
  011a5d0  ori 27, 5, 0
  011a5d4  bl 0xefa28
  011a5d8  nop
  011a5dc  ori 25, 3, 0
  011a5e0  cmpwi 25, 0
  011a5e4  bt 2, 0x11aa1c
  011a5e8  lwz 3, 36(26)
  011a5ec  lfs 1, 44(26)
  011a5f0  li 5, 1
  011a5f4  lfs 2, 36(3)
  011a5f8  fdivs 1, 1, 2
  011a5fc  ori 22, 29, 0
  011a600  ori 4, 28, 0
  011a604  addic 3, 25, 192
  011a608  lwz 6, 36(25)
  011a60c  lhz 7, 52(25)
  011a610  ld 8, 56(26)
  011a614  ori 7, 7, 256
  011a618  lfs 2, 36(6)
  011a61c  stb 5, 49(25)
  011a620  sth 7, 52(25)
  011a624  std 8, 56(25)
  011a628  stb 5, 32(25)
  011a62c  lwz 29, 120(25)
  011a630  fmuls 1, 2, 1
  011a634  stfs 1, 44(25)
  011a638  lfs 1, 0(27)
  011a63c  stfs 1, 16(25)
  011a640  lfs 1, 4(27)
  011a644  stfs 1, 20(25)
  011a648  lfs 1, 8(27)
  011a64c  stfs 1, 24(25)
  011a650  lfs 1, 12(27)
  011a654  stfs 1, 28(25)
  011a658  bl 0x500b64
  011a65c  nop
  011a660  li 4, 255
  011a664  li 5, 128
  011a668  cmpwi 22, 0
  011a66c  ori 3, 22, 0
  011a670  stb 4, 48(25)
  011a674  li 4, 0
  011a678  sth 5, 50(25)
  011a67c  stw 4, 148(25)
  011a680  bf 2, 0x11a6d4
  011a684  bl 0x5c8318
  011a688  nop
  011a68c  srawi 3, 3, 15
  011a690  lis 4, 114
  011a694  clrlwi 3, 3, 17
  011a698  extsw 3, 3
  011a69c  std 3, 128(1)
  011a6a0  lis 3, 18
  011a6a4  addi 3, 3, -23272
  011a6a8  lfs 1, 0(3)
  011a6ac  lfs 2, 4(3)
  011a6b0  lfs 3, -3056(4)
  011a6b4  lfd 4, 128(1)
  011a6b8  fcfid 4, 4
  011a6bc  frsp 4, 4
  011a6c0  fmuls 4, 4, 1
  011a6c4  fmadds 1, 4, 2, 1
  011a6c8  fmuls 1, 3, 1
  011a6cc  bl 0x502758
  011a6d0  nop
  011a6d4  lis 4, 18
  011a6d8  stw 3, 48(29)
  011a6dc  fmr 1, 31
  011a6e0  addi 4, 4, -23272
  011a6e4  stw 30, 52(29)
  011a6e8  lwz 3, 56(29)
  011a6ec  cmpwi 3, 0
  011a6f0  lfs 31, 8(4)
  011a6f4  bf 2, 0x11a744
  011a6f8  bl 0x5c8318
  011a6fc  nop
  011a700  srawi 3, 3, 15
  011a704  lis 4, 18
  011a708  clrlwi 3, 3, 17
  011a70c  extsw 3, 3
  011a710  std 3, 128(1)
  011a714  addi 3, 4, -23272
  011a718  lfs 1, 12(3)
  011a71c  lfs 2, 4(3)
  011a720  lfs 3, 16(3)
  011a724  lfd 4, 128(1)
  011a728  fcfid 4, 4
  011a72c  lis 3, 114
  011a730  lfs 5, -3048(3)
  011a734  frsp 4, 4
  011a738  fmuls 1, 4, 1
  011a73c  fmadds 1, 1, 2, 3
  011a740  fmuls 1, 1, 5
  011a744  stfs 1, 56(29)
  011a748  lfs 2, 4(31)
  011a74c  lfs 1, 0(31)
  011a750  fmuls 2, 2, 2
  011a754  lfs 3, 8(31)
  011a758  fmadds 2, 1, 1, 2
  011a75c  fmadds 2, 3, 3, 2
  011a760  fsqrts 2, 2
  011a764  fcmpu 0, 2, 31
  011a768  bf 2, 0x11a8d8
  011a76c  bl 0x5c8318
  011a770  nop
  011a774  srawi 3, 3, 15
  011a778  lis 4, 18
  011a77c  clrlwi 3, 3, 20
  011a780  addi 31, 4, -23272
  011a784  addic 3, 3, -2048
  011a788  extsw 3, 3
  011a78c  std 3, 128(1)
  011a790  lfs 1, 20(31)
  011a794  lfs 2, 24(31)
  011a798  lfd 3, 128(1)
  011a79c  fcfid 3, 3
  011a7a0  frsp 3, 3
  011a7a4  fmuls 1, 3, 1
  011a7a8  fmuls 30, 1, 2
  011a7ac  bl 0x5c8318
  011a7b0  nop
  011a7b4  srawi 3, 3, 15
  011a7b8  clrlwi 3, 3, 17
  011a7bc  extsw 3, 3
  011a7c0  std 3, 128(1)
  011a7c4  lfs 1, 32(31)
  011a7c8  lfs 2, 36(31)
  011a7cc  fadds 1, 30, 1
  011a7d0  fsubs 4, 2, 30
  011a7d4  lfs 3, 40(31)
  011a7d8  lfd 7, 128(1)
  011a7dc  fsubs 5, 3, 30
  011a7e0  fcfid 7, 7
  011a7e4  lis 30, 114
  011a7e8  fsubs 2, 2, 1
  011a7ec  fsub 6, 30, 4
  011a7f0  fsubs 3, 3, 1
  011a7f4  frsp 7, 7
  011a7f8  fsub 8, 1, 2
  011a7fc  fsel 4, 6, 4, 30
  011a800  lfs 6, 28(31)
  011a804  fsel 1, 8, 2, 1
  011a808  fsub 2, 5, 4
  011a80c  lfs 8, 44(31)
  011a810  lfs 30, 4(31)
  011a814  fsub 10, 3, 1
  011a818  fsel 2, 2, 5, 4
  011a81c  fmuls 4, 7, 6
  011a820  lfs 5, 48(31)
  011a824  fsel 1, 10, 3, 1
  011a828  fmuls 3, 2, 2
  011a82c  fmadds 4, 4, 30, 6
  011a830  lfs 6, 52(31)
  011a834  lfs 9, -3052(30)
  011a838  fmuls 7, 1, 1
  011a83c  fmuls 10, 3, 2
  011a840  fmuls 4, 4, 9
  011a844  lfs 9, 56(31)
  011a848  fmuls 11, 7, 1
  011a84c  fmuls 12, 3, 10
  011a850  fmadds 2, 10, 8, 2
  011a854  fmuls 10, 7, 11
  011a858  fmadds 1, 11, 8, 1
  011a85c  fmuls 8, 3, 12
  011a860  fmadds 2, 12, 5, 2
  011a864  fmuls 11, 7, 10
  011a868  fmadds 1, 10, 5, 1
  011a86c  fmuls 3, 3, 8
  011a870  fmadds 2, 8, 6, 2
  011a874  fmuls 5, 7, 11
  011a878  fmadds 1, 11, 6, 1
  011a87c  fmadds 2, 3, 9, 2
  011a880  fmadds 1, 5, 9, 1
  011a884  fmuls 29, 2, 4
  011a888  fmuls 28, 1, 4
  011a88c  bl 0x5c8318
  011a890  nop
  011a894  srawi 3, 3, 15
  011a898  clrlwi 3, 3, 17
  011a89c  extsw 3, 3
  011a8a0  std 3, 128(1)
  011a8a4  lfs 1, 60(31)
  011a8a8  lfs 2, 12(31)
  011a8ac  lfs 3, -3052(30)
  011a8b0  lfd 4, 128(1)
  011a8b4  fcfid 4, 4
  011a8b8  stfs 28, 0(29)
  011a8bc  stfs 29, 4(29)
  011a8c0  frsp 4, 4
  011a8c4  fmuls 1, 4, 1
  011a8c8  fmadds 1, 1, 30, 2
  011a8cc  fmuls 1, 1, 3
  011a8d0  stfs 1, 8(29)
  011a8d4  b 0x11a8f0
  011a8d8  stfs 1, 0(29)
  011a8dc  lfs 1, 4(31)
  011a8e0  stfs 1, 4(29)
  011a8e4  lfs 1, 8(31)
  011a8e8  stfs 1, 8(29)
  011a8ec  lfs 1, 12(31)
  011a8f0  stfs 1, 12(29)
  011a8f4  lfs 2, 4(23)
  011a8f8  lfs 1, 0(23)
  011a8fc  fmuls 2, 2, 2
  011a900  lfs 3, 8(23)
  011a904  fmadds 2, 1, 1, 2
  011a908  fmadds 2, 3, 3, 2
  011a90c  fsqrts 2, 2
  011a910  fcmpu 0, 2, 31
  011a914  bf 2, 0x11a960
  011a918  lis 3, 18
  011a91c  lis 5, 114
  011a920  addi 4, 3, -23272
  011a924  addic 3, 1, 112
  011a928  lfs 1, 20(4)
  011a92c  lfs 2, 64(4)
  011a930  lfs 3, -3052(5)
  011a934  fmuls 1, 3, 1
  011a938  fmuls 2, 3, 2
  011a93c  bl 0xfea60
  011a940  lfs 1, 112(1)
  011a944  stfs 1, 16(29)
  011a948  lfs 1, 116(1)
  011a94c  stfs 1, 20(29)
  011a950  lfs 1, 120(1)
  011a954  stfs 1, 24(29)
  011a958  lfs 1, 124(1)
  011a95c  b 0x11a978
  011a960  stfs 1, 16(29)
  011a964  lfs 1, 4(23)
  011a968  stfs 1, 20(29)
  011a96c  lfs 1, 8(23)
  011a970  stfs 1, 24(29)
  011a974  lfs 1, 12(23)
  011a978  stfs 1, 28(29)
  011a97c  lfs 2, 4(24)
  011a980  lfs 1, 0(24)
  011a984  fmuls 2, 2, 2
  011a988  lfs 3, 8(24)
  011a98c  fmadds 2, 1, 1, 2
  011a990  fmadds 2, 3, 3, 2
  011a994  fsqrts 2, 2
  011a998  fcmpu 0, 2, 31
  011a99c  bf 2, 0x11a9f4
  011a9a0  lwz 3, 12(24)
  011a9a4  cmpwi 3, 0
  011a9a8  bf 2, 0x11a9f4
  011a9ac  lis 3, 18
  011a9b0  lfs 1, 44(25)
  011a9b4  addi 3, 3, -23272
  011a9b8  lfs 2, 68(3)
  011a9bc  lwz 3, 36(25)
  011a9c0  fmuls 1, 1, 2
  011a9c4  lfs 3, 48(3)
  011a9c8  lfs 4, 52(3)
  011a9cc  lfs 5, 56(3)
  011a9d0  lfs 2, 60(3)
  011a9d4  fmuls 3, 3, 1
  011a9d8  fmuls 4, 4, 1
  011a9dc  fmuls 5, 5, 1
  011a9e0  fmuls 1, 2, 1
  011a9e4  stfs 3, 32(29)
  011a9e8  stfs 4, 36(29)
  011a9ec  stfs 5, 40(29)
  011a9f0  b 0x11aa0c
  011a9f4  stfs 1, 32(29)
  011a9f8  lfs 1, 4(24)
  011a9fc  stfs 1, 36(29)
  011aa00  lfs 1, 8(24)
  011aa04  stfs 1, 40(29)
  011aa08  lfs 1, 12(24)
  011aa0c  ori 3, 25, 0
  011aa10  stfs 1, 44(29)
  011aa14  bl 0xf31a8
  011aa18  nop
  011aa1c  ori 3, 25, 0
  011aa20  ld 0, 272(1)
  011aa24  mtlr 0
  011aa28  lfd 28, 224(1)
  011aa2c  lfd 29, 232(1)
  011aa30  lfd 30, 240(1)
  011aa34  lfd 31, 248(1)
  011aa38  ld 22, 144(1)
  011aa3c  ld 23, 152(1)
  011aa40  ld 24, 160(1)
  011aa44  ld 25, 168(1)
  011aa48  ld 26, 176(1)
  011aa4c  ld 27, 184(1)
  011aa50  ld 28, 192(1)
  011aa54  ld 29, 200(1)
  011aa58  ld 30, 208(1)
  011aa5c  ld 31, 216(1)
  011aa60  addi 1, 1, 256
  011aa64  blr

MB_SpawnDebris:   # 0x11aa78, 0x2d0 bytes
  011aa78  stdu 1, -544(1)
  011aa7c  mflr 0
  011aa80  std 0, 560(1)
  011aa84  stfd 29, 520(1)
  011aa88  stfd 30, 528(1)
  011aa8c  stfd 31, 536(1)
  011aa90  std 30, 504(1)
  011aa94  li 10, 0
  011aa98  ori 30, 7, 0
  011aa9c  std 27, 480(1)
  011aaa0  subc 9, 10, 9
  011aaa4  li 27, 2
  011aaa8  std 24, 456(1)
  011aaac  cntlzw 9, 9
  011aab0  ori 24, 4, 0
  011aab4  sldi 9, 9, 58
  011aab8  cmpwi 4, 0
  011aabc  sradi 7, 9, 63
  011aac0  std 26, 472(1)
  011aac4  li 9, 0
  011aac8  li 26, 0
  011aacc  std 25, 464(1)
  011aad0  subc 9, 9, 27
  011aad4  ori 25, 5, 0
  011aad8  std 31, 512(1)
  011aadc  and 4, 7, 9
  011aae0  ori 31, 8, 0
  011aae4  std 28, 488(1)
  011aae8  addc 27, 27, 4
  011aaec  cmpwi 1, 5, 0
  011aaf0  std 29, 496(1)
  011aaf4  ori 28, 3, 0
  011aaf8  std 23, 448(1)
  011aafc  std 22, 440(1)
  011ab00  std 21, 432(1)
  011ab04  std 20, 424(1)
  011ab08  std 19, 416(1)
  011ab0c  ori 29, 6, 0
  011ab10  bf 1, 0x11acf8
  011ab14  bf 5, 0x11ab7c
  011ab18  ori 19, 26, 0
  011ab1c  bf 5, 0x11ab7c
  011ab20  lis 3, 18
  011ab24  lis 23, 161
  011ab28  addi 3, 3, -21912
  011ab2c  ori 20, 24, 0
  011ab30  addic 21, 28, 16
  011ab34  addic 22, 28, 64
  011ab38  addic 23, 23, 23856
  011ab3c  lfs 31, 0(3)
  011ab40  std 23, 112(1)
  011ab44  ori 3, 28, 0
  011ab48  ori 10, 23, 0
  011ab4c  fmr 1, 31
  011ab50  ori 4, 20, 0
  011ab54  std 23, 120(1)
  011ab58  ori 5, 21, 0
  011ab5c  ori 6, 22, 0
  011ab60  li 7, 0
  011ab64  ori 8, 27, 0
  011ab68  bl 0x11a560
  011ab6c  addic 19, 19, 1
  011ab70  addic 20, 20, 1
  011ab74  cmpw 19, 25
  011ab78  bt 0, 0x11ab40
  011ab7c  cmpwi 24, 0
  011ab80  bf 1, 0x11acf8
  011ab84  cmpwi 30, 0
  011ab88  bf 1, 0x11acf8
  011ab8c  lis 3, 18
  011ab90  lis 7, 0
  011ab94  addi 4, 3, -21912
  011ab98  ori 3, 28, 0
  011ab9c  ori 7, 7, 65535
  011aba0  addic 6, 1, 144
  011aba4  ori 5, 31, 0
  011aba8  lfs 1, 4(4)
  011abac  bl 0x108240
  011abb0  ori 22, 3, 0
  011abb4  cmpwi 22, 0
  011abb8  bt 2, 0x11acf8
  011abbc  lis 3, 18
  011abc0  lis 24, 161
  011abc4  addi 3, 3, -21912
  011abc8  cmpwi 31, 0
  011abcc  ori 23, 26, 0
  011abd0  addic 24, 24, 23856
  011abd4  addic 25, 1, 144
  011abd8  lfs 29, 0(3)
  011abdc  lfs 30, 8(3)
  011abe0  lfs 31, 12(3)
  011abe4  bf 1, 0x11acf8
  011abe8  cmpw 23, 22
  011abec  bf 0, 0x11acf8
  011abf0  stw 26, 140(1)
  011abf4  stw 26, 136(1)
  011abf8  stw 26, 132(1)
  011abfc  stw 26, 128(1)
  011ac00  bl 0x5c8318
  011ac04  nop
  011ac08  srawi 3, 3, 15
  011ac0c  clrlwi 3, 3, 20
  011ac10  addic 3, 3, -2048
  011ac14  extsw 3, 3
  011ac18  std 3, 400(1)
  011ac1c  lfd 1, 400(1)
  011ac20  fcfid 1, 1
  011ac24  frsp 1, 1
  011ac28  fmuls 1, 1, 30
  011ac2c  fmuls 1, 1, 31
  011ac30  stfs 1, 128(1)
  011ac34  bl 0x5c8318
  011ac38  nop
  011ac3c  srawi 3, 3, 15
  011ac40  clrlwi 3, 3, 20
  011ac44  addic 3, 3, -2048
  011ac48  extsw 3, 3
  011ac4c  std 3, 400(1)
  011ac50  lfd 1, 400(1)
  011ac54  fcfid 1, 1
  011ac58  frsp 1, 1
  011ac5c  fmuls 1, 1, 30
  011ac60  fmuls 1, 1, 31
  011ac64  stfs 1, 132(1)
  011ac68  bl 0x5c8318
  011ac6c  nop
  011ac70  srawi 3, 3, 15
  011ac74  clrlwi 3, 3, 20
  011ac78  addic 3, 3, -2048
  011ac7c  extsw 3, 3
  011ac80  std 3, 400(1)
  011ac84  lfd 1, 400(1)
  011ac88  fcfid 1, 1
  011ac8c  frsp 1, 1
  011ac90  fmuls 1, 1, 30
  011ac94  fmuls 1, 1, 31
  011ac98  stfs 1, 136(1)
  011ac9c  bl 0x5c8318
  011aca0  nop
  011aca4  srawi 3, 3, 15
  011aca8  clrlwi 3, 3, 17
  011acac  std 24, 112(1)
  011acb0  divw 4, 3, 30
  011acb4  mullw 4, 4, 30
  011acb8  addic 6, 1, 128
  011acbc  fmr 1, 29
  011acc0  subc 3, 3, 4
  011acc4  std 24, 120(1)
  011acc8  ori 10, 24, 0
  011accc  addc 4, 29, 3
  011acd0  ori 3, 28, 0
  011acd4  li 7, 0
  011acd8  extsw 4, 4
  011acdc  ori 5, 25, 0
  011ace0  ori 8, 27, 0
  011ace4  bl 0x11a560
  011ace8  addic 23, 23, 1
  011acec  addic 25, 25, 16
  011acf0  cmpw 23, 31
  011acf4  bt 0, 0x11abe8
  011acf8  ld 0, 560(1)
  011acfc  mtlr 0
  011ad00  lfd 29, 520(1)
  011ad04  lfd 30, 528(1)
  011ad08  lfd 31, 536(1)
  011ad0c  ld 19, 416(1)
  011ad10  ld 20, 424(1)
  011ad14  ld 21, 432(1)
  011ad18  ld 22, 440(1)
  011ad1c  ld 23, 448(1)
  011ad20  ld 24, 456(1)
  011ad24  ld 25, 464(1)
  011ad28  ld 26, 472(1)
  011ad2c  ld 27, 480(1)
  011ad30  ld 28, 488(1)
  011ad34  ld 29, 496(1)
  011ad38  ld 30, 504(1)
  011ad3c  ld 31, 512(1)
  011ad40  addi 1, 1, 544
  011ad44  blr

MB_SpawnReplacementMoby:   # 0x11ad48, 0xcc bytes
  011ad48  stdu 1, -128(1)
  011ad4c  mflr 0
  011ad50  std 0, 144(1)
  011ad54  std 31, 120(1)
  011ad58  ori 31, 3, 0
  011ad5c  ori 3, 4, 0
  011ad60  bl 0xefa28
  011ad64  nop
  011ad68  cmpwi 3, 0
  011ad6c  bt 2, 0x11ae00
  011ad70  ori 4, 3, 0
  011ad74  li 3, 255
  011ad78  lwz 6, 36(31)
  011ad7c  li 5, 1
  011ad80  sth 3, 50(4)
  011ad84  stb 5, 49(4)
  011ad88  lfs 1, 44(31)
  011ad8c  lfs 2, 36(6)
  011ad90  fdivs 1, 1, 2
  011ad94  lfs 2, 44(4)
  011ad98  li 5, 0
  011ad9c  lfs 3, 16(31)
  011ada0  ori 3, 4, 0
  011ada4  lfs 4, 20(31)
  011ada8  stfs 3, 16(4)
  011adac  lfs 3, 24(31)
  011adb0  stfs 4, 20(4)
  011adb4  lfs 4, 28(31)
  011adb8  stfs 3, 24(4)
  011adbc  lfs 3, 64(31)
  011adc0  stfs 4, 28(4)
  011adc4  lfs 4, 68(31)
  011adc8  stfs 3, 64(4)
  011adcc  lfs 3, 72(31)
  011add0  stfs 4, 68(4)
  011add4  lfs 4, 76(31)
  011add8  stfs 3, 72(4)
  011addc  stfs 4, 76(4)
  011ade0  ld 6, 56(31)
  011ade4  stb 5, 48(4)
  011ade8  std 6, 56(4)
  011adec  sth 5, 52(4)
  011adf0  fmuls 1, 2, 1
  011adf4  stfs 1, 44(4)
  011adf8  bl 0xf31a8
  011adfc  nop
  011ae00  ld 0, 144(1)
  011ae04  mtlr 0
  011ae08  ld 31, 120(1)
  011ae0c  addi 1, 1, 128
  011ae10  blr

MB_HandleGameplayHud:   # 0x11ae14, 0xd8 bytes
  011ae14  stdu 1, -112(1)
  011ae18  mflr 0
  011ae1c  std 0, 128(1)
  011ae20  lis 3, 161
  011ae24  lwz 3, 24356(3)
  011ae28  cmpwi 3, 0
  011ae2c  bt 2, 0x11ae50
  011ae30  lis 4, 161
  011ae34  addic 3, 3, -1
  011ae38  cmpwi 3, 0
  011ae3c  stw 3, 24356(4)
  011ae40  bf 2, 0x11ae50
  011ae44  lis 3, 161
  011ae48  li 4, 0
  011ae4c  stw 4, 24360(3)
  011ae50  lis 3, 161
  011ae54  lwz 3, 24360(3)
  011ae58  cmpwi 3, 0
  011ae5c  bt 2, 0x11ae70
  011ae60  lis 3, 165
  011ae64  lwz 3, 8120(3)
  011ae68  cmpwi 3, 0
  011ae6c  bf 2, 0x11ae80
  011ae70  lis 3, 165
  011ae74  li 4, -1
  011ae78  stw 4, 8116(3)
  011ae7c  b 0x11aedc
  011ae80  lis 3, 165
  011ae84  lwz 3, 8116(3)
  011ae88  cmpwi 3, -1
  011ae8c  bf 2, 0x11aecc
  011ae90  lis 5, 112
  011ae94  lis 6, 112
  011ae98  lis 7, 112
  011ae9c  li 4, 0
  011aea0  li 3, 12
  011aea4  addic 5, 5, 22352
  011aea8  li 8, 0
  011aeac  addic 6, 6, 22360
  011aeb0  li 9, 0
  011aeb4  addic 7, 7, 22408
  011aeb8  bl 0xc8444
  011aebc  nop
  011aec0  lis 4, 165
  011aec4  stw 3, 8116(4)
  011aec8  b 0x11aedc
  011aecc  extsw 3, 3
  011aed0  li 4, 10
  011aed4  bl 0xc90a0
  011aed8  nop
  011aedc  ld 0, 128(1)
  011aee0  mtlr 0
  011aee4  addi 1, 1, 112
  011aee8  blr

MB_ShowPersistentMessage:   # 0x11aeec, 0xc0 bytes
  011aeec  stdu 1, -128(1)
  011aef0  mflr 0
  011aef4  std 0, 144(1)
  011aef8  lis 5, 161
  011aefc  std 31, 120(1)
  011af00  cmpwi 1, 4, 0
  011af04  std 30, 112(1)
  011af08  ori 31, 4, 0
  011af0c  ori 30, 3, 0
  011af10  lwz 4, 24360(5)
  011af14  cmpw 3, 4
  011af18  cmpwi 6, 4, 0
  011af1c  bf 2, 0x11af50
  011af20  bt 6, 0x11af38
  011af24  ori 3, 31, 0
  011af28  bl 0x7b740
  011af2c  nop
  011af30  bl 0xccda0
  011af34  nop
  011af38  lis 4, 161
  011af3c  li 3, 2
  011af40  lis 5, 165
  011af44  stw 3, 24356(4)
  011af48  stw 31, 8120(5)
  011af4c  b 0x11af94
  011af50  bf 26, 0x11af90
  011af54  bt 6, 0x11af6c
  011af58  ori 3, 31, 0
  011af5c  bl 0x7b740
  011af60  nop
  011af64  bl 0xccda0
  011af68  nop
  011af6c  lis 4, 161
  011af70  li 5, 2
  011af74  lis 6, 161
  011af78  lis 7, 165
  011af7c  li 3, 1
  011af80  stw 5, 24356(4)
  011af84  stw 30, 24360(6)
  011af88  stw 31, 8120(7)
  011af8c  b 0x11af94
  011af90  li 3, 0
  011af94  ld 0, 144(1)
  011af98  mtlr 0
  011af9c  ld 30, 112(1)
  011afa0  ld 31, 120(1)
  011afa4  addi 1, 1, 128
  011afa8  blr

MB_RequestHelpMessage:   # 0x11afac, 0x104 bytes
  011afac  stdu 1, -128(1)
  011afb0  mflr 0
  011afb4  std 0, 144(1)
  011afb8  lis 5, 161
  011afbc  std 31, 120(1)
  011afc0  cmpwi 1, 4, 0
  011afc4  std 30, 112(1)
  011afc8  ori 31, 4, 0
  011afcc  ori 30, 3, 0
  011afd0  lwz 4, 24360(5)
  011afd4  cmpw 3, 4
  011afd8  cmpwi 6, 4, 0
  011afdc  bf 2, 0x11b010
  011afe0  bt 6, 0x11aff8
  011afe4  ori 3, 31, 0
  011afe8  bl 0x7b740
  011afec  nop
  011aff0  bl 0xccda0
  011aff4  nop
  011aff8  lis 4, 161
  011affc  li 3, 2
  011b000  lis 5, 165
  011b004  stw 3, 24356(4)
  011b008  stw 31, 8120(5)
  011b00c  b 0x11b054
  011b010  bf 26, 0x11b050
  011b014  bt 6, 0x11b02c
  011b018  ori 3, 31, 0
  011b01c  bl 0x7b740
  011b020  nop
  011b024  bl 0xccda0
  011b028  nop
  011b02c  lis 4, 161
  011b030  li 5, 2
  011b034  lis 6, 161
  011b038  lis 7, 165
  011b03c  li 3, 1
  011b040  stw 5, 24356(4)
  011b044  stw 30, 24360(6)
  011b048  stw 31, 8120(7)
  011b04c  b 0x11b054
  011b050  li 3, 0
  011b054  cmpwi 3, 0
  011b058  bf 2, 0x11b098
  011b05c  cmpwi 31, 0
  011b060  bt 2, 0x11b078
  011b064  ori 3, 31, 0
  011b068  bl 0x7b740
  011b06c  nop
  011b070  bl 0xccda0
  011b074  nop
  011b078  lis 4, 161
  011b07c  li 5, 2
  011b080  lis 6, 161
  011b084  lis 7, 165
  011b088  li 3, 3
  011b08c  stw 5, 24356(4)
  011b090  stw 30, 24360(6)
  011b094  stw 31, 8120(7)
  011b098  ld 0, 144(1)
  011b09c  mtlr 0
  011b0a0  ld 30, 112(1)
  011b0a4  ld 31, 120(1)
  011b0a8  addi 1, 1, 128
  011b0ac  blr

MB_ClearHelpMessage:   # 0x11b0b0, 0x74 bytes
  011b0b0  stdu 1, -112(1)
  011b0b4  mflr 0
  011b0b8  std 0, 128(1)
  011b0bc  lis 4, 161
  011b0c0  lwz 4, 24360(4)
  011b0c4  cmpw 3, 4
  011b0c8  bf 2, 0x11b110
  011b0cc  lis 3, 165
  011b0d0  lwz 3, 8116(3)
  011b0d4  cmpwi 3, -1
  011b0d8  bt 2, 0x11b110
  011b0dc  lis 4, 161
  011b0e0  li 5, 0
  011b0e4  lis 6, 161
  011b0e8  extsw 3, 3
  011b0ec  stw 5, 24356(4)
  011b0f0  stw 5, 24360(6)
  011b0f4  bl 0xc8964
  011b0f8  nop
  011b0fc  lis 4, 165
  011b100  li 5, -1
  011b104  li 3, 1
  011b108  stw 5, 8116(4)
  011b10c  b 0x11b114
  011b110  li 3, 0
  011b114  ld 0, 128(1)
  011b118  mtlr 0
  011b11c  addi 1, 1, 112
  011b120  blr

MB_CountGoldWeapons:   # 0x11b124, 0x90 bytes
  011b124  li 4, 0
  011b128  lis 3, 151
  011b12c  ori 5, 4, 0
  011b130  addic 3, 3, -25432
  011b134  addic 7, 4, 1
  011b138  lbzx 4, 3, 4
  011b13c  li 8, 0
  011b140  addic 6, 5, 1
  011b144  subc 4, 8, 4
  011b148  extsw 6, 6
  011b14c  cntlzw 8, 4
  011b150  extsw 4, 7
  011b154  sldi 7, 8, 58
  011b158  subc 5, 5, 6
  011b15c  sradi 7, 7, 63
  011b160  cmpwi 4, 37
  011b164  and 5, 7, 5
  011b168  addc 5, 6, 5
  011b16c  bt 0, 0x11b134
  011b170  extsw 3, 5
  011b174  li 4, 0
  011b178  li 6, 0
  011b17c  subc 3, 3, 4
  011b180  subc 4, 6, 5
  011b184  sradi 3, 3, 63
  011b188  li 6, 10
  011b18c  and 3, 3, 4
  011b190  li 4, 10
  011b194  addc 3, 5, 3
  011b198  extsw 5, 3
  011b19c  subc 4, 4, 3
  011b1a0  subc 5, 6, 5
  011b1a4  sradi 5, 5, 63
  011b1a8  and 4, 5, 4
  011b1ac  addc 3, 3, 4
  011b1b0  blr

MB_CountGoldBolts:   # 0x11b1b4, 0x110 bytes
  011b1b4  lis 3, 161
  011b1b8  li 5, 20
  011b1bc  li 4, 0
  011b1c0  addic 3, 3, -13772
  011b1c4  mtctr 5
  011b1c8  lbz 6, 0(3)
  011b1cc  li 7, 0
  011b1d0  addic 5, 4, 1
  011b1d4  subc 6, 7, 6
  011b1d8  extsw 5, 5
  011b1dc  cntlzw 6, 6
  011b1e0  lbz 7, 1(3)
  011b1e4  subc 4, 4, 5
  011b1e8  sldi 6, 6, 58
  011b1ec  li 8, 0
  011b1f0  sradi 6, 6, 63
  011b1f4  and 4, 6, 4
  011b1f8  subc 6, 8, 7
  011b1fc  addc 4, 5, 4
  011b200  lbz 7, 2(3)
  011b204  cntlzw 5, 6
  011b208  addic 6, 4, 1
  011b20c  sldi 5, 5, 58
  011b210  extsw 6, 6
  011b214  sradi 5, 5, 63
  011b218  subc 4, 4, 6
  011b21c  li 8, 0
  011b220  and 4, 5, 4
  011b224  subc 7, 8, 7
  011b228  addc 4, 6, 4
  011b22c  cntlzw 5, 7
  011b230  addic 6, 4, 1
  011b234  sldi 5, 5, 58
  011b238  lbz 7, 3(3)
  011b23c  extsw 6, 6
  011b240  sradi 5, 5, 63
  011b244  subc 4, 4, 6
  011b248  li 8, 0
  011b24c  and 4, 5, 4
  011b250  subc 5, 8, 7
  011b254  addc 4, 6, 4
  011b258  cntlzw 5, 5
  011b25c  addic 6, 4, 1
  011b260  sldi 5, 5, 58
  011b264  extsw 6, 6
  011b268  sradi 5, 5, 63
  011b26c  subc 4, 4, 6
  011b270  addic 3, 3, 4
  011b274  and 4, 5, 4
  011b278  addc 4, 6, 4
  011b27c  bdnz 0x11b1c8
  011b280  extsw 3, 4
  011b284  li 5, 0
  011b288  li 6, 0
  011b28c  subc 3, 3, 5
  011b290  subc 5, 6, 4
  011b294  sradi 3, 3, 63
  011b298  li 6, 40
  011b29c  and 3, 3, 5
  011b2a0  li 5, 40
  011b2a4  addc 3, 4, 3
  011b2a8  extsw 4, 3
  011b2ac  subc 5, 5, 3
  011b2b0  subc 4, 6, 4
  011b2b4  sradi 4, 4, 63
  011b2b8  and 4, 4, 5
  011b2bc  addc 3, 3, 4
  011b2c0  blr

MB_GetUnspentGoldBolts:   # 0x11b2c4, 0x1d0 bytes
  011b2c4  li 3, 0
  011b2c8  lis 5, 161
  011b2cc  li 6, 20
  011b2d0  ori 4, 3, 0
  011b2d4  addic 5, 5, -13772
  011b2d8  mtctr 6
  011b2dc  li 7, 0
  011b2e0  lbz 8, 0(5)
  011b2e4  addic 6, 4, 1
  011b2e8  subc 7, 7, 8
  011b2ec  lbz 8, 1(5)
  011b2f0  li 9, 0
  011b2f4  cntlzw 7, 7
  011b2f8  subc 4, 4, 6
  011b2fc  sldi 7, 7, 58
  011b300  subc 8, 9, 8
  011b304  sradi 7, 7, 63
  011b308  li 9, 0
  011b30c  and 4, 7, 4
  011b310  cntlzw 7, 8
  011b314  addc 4, 6, 4
  011b318  lbz 8, 2(5)
  011b31c  sldi 6, 7, 58
  011b320  addic 7, 4, 1
  011b324  sradi 6, 6, 63
  011b328  subc 4, 4, 7
  011b32c  subc 8, 9, 8
  011b330  and 4, 6, 4
  011b334  cntlzw 6, 8
  011b338  addc 4, 7, 4
  011b33c  sldi 6, 6, 58
  011b340  lbz 8, 3(5)
  011b344  addic 7, 4, 1
  011b348  sradi 6, 6, 63
  011b34c  li 9, 0
  011b350  subc 4, 4, 7
  011b354  subc 8, 9, 8
  011b358  and 4, 6, 4
  011b35c  cntlzw 6, 8
  011b360  addc 4, 7, 4
  011b364  sldi 6, 6, 58
  011b368  addic 7, 4, 1
  011b36c  sradi 6, 6, 63
  011b370  subc 4, 4, 7
  011b374  addic 5, 5, 4
  011b378  and 4, 6, 4
  011b37c  addc 4, 7, 4
  011b380  bdnz 0x11b2dc
  011b384  extsw 5, 4
  011b388  li 7, 0
  011b38c  li 6, 0
  011b390  subc 5, 5, 7
  011b394  subc 6, 6, 4
  011b398  sradi 5, 5, 63
  011b39c  li 7, 40
  011b3a0  and 5, 5, 6
  011b3a4  li 6, 40
  011b3a8  addc 4, 4, 5
  011b3ac  ori 5, 3, 0
  011b3b0  extsw 8, 4
  011b3b4  subc 7, 7, 4
  011b3b8  subc 3, 6, 8
  011b3bc  lis 8, 151
  011b3c0  sradi 9, 3, 63
  011b3c4  ori 6, 5, 0
  011b3c8  and 7, 9, 7
  011b3cc  addic 3, 8, -25432
  011b3d0  addc 4, 4, 7
  011b3d4  li 8, 0
  011b3d8  lbzx 10, 3, 5
  011b3dc  addic 7, 6, 1
  011b3e0  subc 8, 8, 10
  011b3e4  addic 9, 5, 1
  011b3e8  cntlzw 8, 8
  011b3ec  subc 6, 6, 7
  011b3f0  sldi 8, 8, 58
  011b3f4  extsw 5, 9
  011b3f8  sradi 8, 8, 63
  011b3fc  cmpwi 5, 37
  011b400  and 6, 8, 6
  011b404  addc 6, 7, 6
  011b408  bt 0, 0x11b3d4
  011b40c  extsw 3, 6
  011b410  li 7, 0
  011b414  li 5, 0
  011b418  subc 3, 3, 7
  011b41c  subc 5, 5, 6
  011b420  sradi 3, 3, 63
  011b424  and 3, 3, 5
  011b428  li 5, 10
  011b42c  addc 3, 6, 3
  011b430  li 6, 10
  011b434  extsw 7, 3
  011b438  subc 5, 5, 3
  011b43c  subc 6, 6, 7
  011b440  sradi 6, 6, 63
  011b444  and 5, 6, 5
  011b448  addc 3, 3, 5
  011b44c  li 5, 0
  011b450  sldi 3, 3, 2
  011b454  subc 3, 4, 3
  011b458  li 4, 0
  011b45c  extsw 3, 3
  011b460  subc 5, 3, 5
  011b464  subc 4, 4, 3
  011b468  sradi 5, 5, 63
  011b46c  and 4, 5, 4
  011b470  li 5, 40
  011b474  addc 3, 3, 4
  011b478  subc 4, 5, 3
  011b47c  li 5, 40
  011b480  subc 5, 5, 3
  011b484  sradi 5, 5, 63
  011b488  and 4, 5, 4
  011b48c  addc 3, 3, 4
  011b490  blr

MB_CountSkillPoints:   # 0x11b494, 0x90 bytes
  011b494  li 4, 0
  011b498  lis 3, 151
  011b49c  ori 5, 4, 0
  011b4a0  addic 3, 3, -16244
  011b4a4  addic 7, 4, 1
  011b4a8  lbzx 4, 3, 4
  011b4ac  li 8, 0
  011b4b0  addic 6, 5, 1
  011b4b4  subc 4, 8, 4
  011b4b8  extsw 6, 6
  011b4bc  cntlzw 8, 4
  011b4c0  extsw 4, 7
  011b4c4  sldi 7, 8, 58
  011b4c8  subc 5, 5, 6
  011b4cc  sradi 7, 7, 63
  011b4d0  cmpwi 4, 32
  011b4d4  and 5, 7, 5
  011b4d8  addc 5, 6, 5
  011b4dc  bt 0, 0x11b4a4
  011b4e0  extsw 3, 5
  011b4e4  li 4, 0
  011b4e8  li 6, 0
  011b4ec  subc 3, 3, 4
  011b4f0  subc 4, 6, 5
  011b4f4  sradi 3, 3, 63
  011b4f8  li 6, 30
  011b4fc  and 3, 3, 4
  011b500  li 4, 30
  011b504  addc 3, 5, 3
  011b508  extsw 5, 3
  011b50c  subc 4, 4, 3
  011b510  subc 5, 6, 5
  011b514  sradi 5, 5, 63
  011b518  and 4, 5, 4
  011b51c  addc 3, 3, 4
  011b520  blr

MB_TrophyFromSkillPoint:   # 0x11b524, 0x1a0 bytes
  011b524  stdu 1, -128(1)
  011b528  mflr 0
  011b52c  std 0, 144(1)
  011b530  std 31, 120(1)
  011b534  cmpwi 3, 14
  011b538  li 31, -1
  011b53c  cmpwi 1, 3, 5
  011b540  cmpwi 6, 3, 3
  011b544  cmpwi 7, 3, 2
  011b548  bt 1, 0x11b5a4
  011b54c  bt 5, 0x11b568
  011b550  bt 6, 0x11b5fc
  011b554  bt 26, 0x11b60c
  011b558  bt 30, 0x11b63c
  011b55c  cmpwi 3, 0
  011b560  bt 2, 0x11b634
  011b564  b 0x11b69c
  011b568  cmpwi 3, 14
  011b56c  bt 2, 0x11b644
  011b570  cmpwi 3, 13
  011b574  bt 2, 0x11b614
  011b578  cmpwi 3, 10
  011b57c  bt 2, 0x11b694
  011b580  cmpwi 3, 9
  011b584  bt 2, 0x11b67c
  011b588  cmpwi 3, 8
  011b58c  bt 2, 0x11b62c
  011b590  cmpwi 3, 7
  011b594  bt 2, 0x11b684
  011b598  cmpwi 3, 6
  011b59c  bt 2, 0x11b624
  011b5a0  b 0x11b69c
  011b5a4  cmpwi 3, 21
  011b5a8  bt 1, 0x11b5d0
  011b5ac  cmpwi 3, 20
  011b5b0  bt 2, 0x11b664
  011b5b4  cmpwi 3, 19
  011b5b8  bt 2, 0x11b654
  011b5bc  cmpwi 3, 17
  011b5c0  bt 2, 0x11b61c
  011b5c4  cmpwi 3, 16
  011b5c8  bt 2, 0x11b64c
  011b5cc  b 0x11b69c
  011b5d0  cmpwi 3, 29
  011b5d4  bt 2, 0x11b674
  011b5d8  cmpwi 3, 28
  011b5dc  bt 2, 0x11b604
  011b5e0  cmpwi 3, 26
  011b5e4  bt 2, 0x11b65c
  011b5e8  cmpwi 3, 23
  011b5ec  bt 2, 0x11b68c
  011b5f0  cmpwi 3, 22
  011b5f4  bt 2, 0x11b66c
  011b5f8  b 0x11b69c
  011b5fc  li 31, 20
  011b600  b 0x11b6ac
  011b604  li 31, 33
  011b608  b 0x11b6ac
  011b60c  li 31, 17
  011b610  b 0x11b6ac
  011b614  li 31, 15
  011b618  b 0x11b6ac
  011b61c  li 31, 16
  011b620  b 0x11b6ac
  011b624  li 31, 18
  011b628  b 0x11b6ac
  011b62c  li 31, 19
  011b630  b 0x11b6ac
  011b634  li 31, 21
  011b638  b 0x11b6ac
  011b63c  li 31, 22
  011b640  b 0x11b6ac
  011b644  li 31, 23
  011b648  b 0x11b6ac
  011b64c  li 31, 24
  011b650  b 0x11b6ac
  011b654  li 31, 26
  011b658  b 0x11b6ac
  011b65c  li 31, 29
  011b660  b 0x11b6ac
  011b664  li 31, 31
  011b668  b 0x11b6ac
  011b66c  li 31, 32
  011b670  b 0x11b6ac
  011b674  li 31, 34
  011b678  b 0x11b6ac
  011b67c  li 31, 5
  011b680  b 0x11b6ac
  011b684  li 31, 7
  011b688  b 0x11b6ac
  011b68c  li 31, 9
  011b690  b 0x11b6ac
  011b694  li 31, 10
  011b698  b 0x11b6ac
  011b69c  lis 3, 101
  011b6a0  addic 3, 3, 12240
  011b6a4  bl 0x4ffc9c
  011b6a8  nop
  011b6ac  ori 3, 31, 0
  011b6b0  ld 0, 144(1)
  011b6b4  mtlr 0
  011b6b8  ld 31, 120(1)
  011b6bc  addi 1, 1, 128
  011b6c0  blr

MB_UnlockSkillPointTrophy:   # 0x11b6c4, 0x5c bytes
  011b6c4  stdu 1, -112(1)
  011b6c8  mflr 0
  011b6cc  std 0, 128(1)
  011b6d0  bl 0x11b524
  011b6d4  cmpwi 3, 0
  011b6d8  bf 1, 0x11b710
  011b6dc  lis 4, 144
  011b6e0  sldi 5, 3, 3
  011b6e4  lwz 4, -21540(4)
  011b6e8  addc 5, 4, 5
  011b6ec  clrldi 5, 5, 32
  011b6f0  lwz 5, 12(5)
  011b6f4  cmpwi 5, 0
  011b6f8  bf 2, 0x11b710
  011b6fc  ori 5, 3, 0
  011b700  ori 3, 4, 0
  011b704  ori 4, 5, 0
  011b708  bl 0x4f0310
  011b70c  nop
  011b710  ld 0, 128(1)
  011b714  mtlr 0
  011b718  addi 1, 1, 112
  011b71c  blr

MB_UnlockSkillPoint:   # 0x11b728, 0x21c bytes
  011b728  stdu 1, -160(1)
  011b72c  mflr 0
  011b730  std 0, 176(1)
  011b734  std 31, 152(1)
  011b738  addi 0, 1, 112
  011b73c  stvx 31, 0, 0
  011b740  std 30, 144(1)
  011b744  lis 31, 151
  011b748  ori 30, 3, 0
  011b74c  addic 31, 31, -16244
  011b750  lbzx 3, 31, 3
  011b754  std 29, 136(1)
  011b758  cmpwi 3, 0
  011b75c  bt 2, 0x11b79c
  011b760  ori 3, 30, 0
  011b764  bl 0x11b524
  011b768  ori 4, 3, 0
  011b76c  cmpwi 4, 0
  011b770  bf 1, 0x11b79c
  011b774  lis 3, 144
  011b778  sldi 5, 4, 3
  011b77c  lwz 3, -21540(3)
  011b780  addc 5, 3, 5
  011b784  clrldi 5, 5, 32
  011b788  lwz 5, 12(5)
  011b78c  cmpwi 5, 0
  011b790  bf 2, 0x11b79c
  011b794  bl 0x4f0310
  011b798  nop
  011b79c  lbzx 3, 31, 30
  011b7a0  cmpwi 3, 0
  011b7a4  bf 2, 0x11b864
  011b7a8  li 6, 1
  011b7ac  li 3, 1
  011b7b0  li 4, 0
  011b7b4  li 5, 0
  011b7b8  stbx 6, 31, 30
  011b7bc  bl 0x15d2d4
  011b7c0  nop
  011b7c4  lis 3, 18
  011b7c8  vspltisw 2, -1
  011b7cc  lis 4, 114
  011b7d0  addi 3, 3, -18656
  011b7d4  li 5, -3056
  011b7d8  vslw 2, 2, 2
  011b7dc  <unknown>
  011b7e0  <unknown>
  011b7e4  li 3, 21462
  011b7e8  vspltw 3, 3, 0
  011b7ec  lis 4, 161
  011b7f0  addic 29, 4, 23692
  011b7f4  vmaddfp 2, 4, 3, 2
  011b7f8  vctsxs 31, 2, 0
  011b7fc  bl 0x7b740
  011b800  nop
  011b804  ori 4, 3, 0
  011b808  ori 3, 29, 0
  011b80c  bl 0x5cc8d8
  011b810  nop
  011b814  vspltw 2, 31, 0
  011b818  lis 4, 161
  011b81c  li 5, 23680
  011b820  ori 3, 30, 0
  011b824  stvewx 2, 5, 4
  011b828  bl 0x11b524
  011b82c  ori 30, 3, 0
  011b830  cmpwi 30, 0
  011b834  bf 1, 0x11b864
  011b838  lis 3, 144
  011b83c  sldi 4, 30, 3
  011b840  lwz 3, -21540(3)
  011b844  addc 4, 3, 4
  011b848  clrldi 4, 4, 32
  011b84c  lwz 4, 12(4)
  011b850  cmpwi 4, 0
  011b854  bf 2, 0x11b864
  011b858  ori 4, 30, 0
  011b85c  bl 0x4f0310
  011b860  nop
  011b864  li 4, 0
  011b868  ori 3, 4, 0
  011b86c  li 6, 0
  011b870  lbzx 8, 31, 4
  011b874  addic 5, 3, 1
  011b878  subc 6, 6, 8
  011b87c  addic 7, 4, 1
  011b880  cntlzw 6, 6
  011b884  subc 3, 3, 5
  011b888  sldi 6, 6, 58
  011b88c  extsw 4, 7
  011b890  sradi 6, 6, 63
  011b894  cmpwi 4, 32
  011b898  and 3, 6, 3
  011b89c  addc 3, 5, 3
  011b8a0  bt 0, 0x11b86c
  011b8a4  extsw 4, 3
  011b8a8  li 6, 0
  011b8ac  li 5, 0
  011b8b0  subc 4, 4, 6
  011b8b4  subc 5, 5, 3
  011b8b8  sradi 4, 4, 63
  011b8bc  and 31, 4, 5
  011b8c0  addc 31, 3, 31
  011b8c4  cmpwi 1, 31, 30
  011b8c8  bf 5, 0x11b8d4
  011b8cc  li 31, 30
  011b8d0  b 0x11b8d8
  011b8d4  bt 4, 0x11b8f8
  011b8d8  lis 3, 144
  011b8dc  lwz 3, -21540(3)
  011b8e0  lwz 4, 28(3)
  011b8e4  cmpwi 4, 0
  011b8e8  bf 2, 0x11b8f8
  011b8ec  li 4, 2
  011b8f0  bl 0x4f0310
  011b8f4  nop
  011b8f8  cmpwi 31, 15
  011b8fc  bt 0, 0x11b920
  011b900  lis 3, 144
  011b904  lwz 3, -21540(3)
  011b908  lwz 4, 76(3)
  011b90c  cmpwi 4, 0
  011b910  bf 2, 0x11b920
  011b914  li 4, 8
  011b918  bl 0x4f0310
  011b91c  nop
  011b920  li 0, 112
  011b924  lvx 31, 1, 0
  011b928  ld 0, 176(1)
  011b92c  mtlr 0
  011b930  ld 29, 136(1)
  011b934  ld 30, 144(1)
  011b938  ld 31, 152(1)
  011b93c  addi 1, 1, 160
  011b940  blr
