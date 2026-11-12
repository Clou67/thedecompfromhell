# game/update/moby627.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M627_003eac28:   # 0x3eac28, 0x14 bytes
  03eac28  lis 3, 133
  03eac2c  lis 4, 1
  03eac30  addic 3, 3, 16452
  03eac34  stw 4, 72(3)
  03eac38  blr

M627_003eac40:   # 0x3eac40, 0x74 bytes
  03eac40  stdu 1, -128(1)
  03eac44  mflr 0
  03eac48  std 0, 144(1)
  03eac4c  std 31, 120(1)
  03eac50  ori 31, 3, 0
  03eac54  lis 4, 19
  03eac58  li 5, 0
  03eac5c  bl 0x10675c
  03eac60  nop
  03eac64  cmpwi 3, 0
  03eac68  bt 2, 0x3eac98
  03eac6c  lwz 3, 32(3)
  03eac70  cmpwi 3, 0
  03eac74  bt 2, 0x3eac98
  03eac78  lhz 3, 166(3)
  03eac7c  lhz 4, 166(31)
  03eac80  extsh 3, 3
  03eac84  extsh 4, 4
  03eac88  cmpw 3, 4
  03eac8c  bt 2, 0x3eac98
  03eac90  li 3, 4
  03eac94  stb 3, 32(31)
  03eac98  li 3, 255
  03eac9c  stb 3, 164(31)
  03eaca0  ld 0, 144(1)
  03eaca4  mtlr 0
  03eaca8  ld 31, 120(1)
  03eacac  addi 1, 1, 128
  03eacb0  blr

UpdateMoby_627:   # 0x3ead68, 0xcd8 bytes
  03ead68  stdu 1, -608(1)
  03ead6c  mflr 0
  03ead70  std 0, 624(1)
  03ead74  stfd 14, 464(1)
  03ead78  stfd 15, 472(1)
  03ead7c  stfd 16, 480(1)
  03ead80  stfd 17, 488(1)
  03ead84  stfd 18, 496(1)
  03ead88  stfd 19, 504(1)
  03ead8c  stfd 20, 512(1)
  03ead90  stfd 21, 520(1)
  03ead94  stfd 22, 528(1)
  03ead98  stfd 23, 536(1)
  03ead9c  stfd 24, 544(1)
  03eada0  stfd 25, 552(1)
  03eada4  stfd 26, 560(1)
  03eada8  stfd 27, 568(1)
  03eadac  stfd 28, 576(1)
  03eadb0  stfd 29, 584(1)
  03eadb4  stfd 30, 592(1)
  03eadb8  stfd 31, 600(1)
  03eadbc  lis 4, 133
  03eadc0  li 5, 16
  03eadc4  addic 6, 4, 16672
  03eadc8  li 7, 32
  03eadcc  li 9, 16672
  03eadd0  li 10, 48
  03eadd4  li 8, 192
  03eadd8  std 31, 456(1)
  03eaddc  lvx 2, 5, 6
  03eade0  ori 31, 3, 0
  03eade4  lvx 3, 7, 6
  03eade8  li 3, 208
  03eadec  lvx 4, 9, 4
  03eadf0  li 5, 240
  03eadf4  li 4, 224
  03eadf8  lvx 5, 10, 6
  03eadfc  li 7, 64
  03eae00  stvx 4, 8, 1
  03eae04  li 8, 256
  03eae08  stvx 2, 3, 1
  03eae0c  ori 3, 31, 0
  03eae10  stvx 3, 4, 1
  03eae14  stvx 5, 5, 1
  03eae18  lis 4, 19
  03eae1c  lvx 2, 7, 6
  03eae20  li 5, 0
  03eae24  std 30, 448(1)
  03eae28  stvx 2, 8, 1
  03eae2c  std 29, 440(1)
  03eae30  std 28, 432(1)
  03eae34  std 27, 424(1)
  03eae38  std 26, 416(1)
  03eae3c  std 25, 408(1)
  03eae40  std 24, 400(1)
  03eae44  std 23, 392(1)
  03eae48  lwz 30, 120(31)
  03eae4c  bl 0x10675c
  03eae50  nop
  03eae54  cmpwi 3, 0
  03eae58  bt 2, 0x3eae88
  03eae5c  lwz 3, 32(3)
  03eae60  cmpwi 3, 0
  03eae64  bt 2, 0x3eae88
  03eae68  lhz 3, 166(3)
  03eae6c  lhz 4, 166(31)
  03eae70  extsh 3, 3
  03eae74  extsh 4, 4
  03eae78  cmpw 3, 4
  03eae7c  bt 2, 0x3eae88
  03eae80  li 3, 4
  03eae84  stb 3, 32(31)
  03eae88  li 3, 255
  03eae8c  lis 4, 63
  03eae90  li 25, 0
  03eae94  addi 4, 4, -21324
  03eae98  stb 3, 164(31)
  03eae9c  lwz 3, 108(30)
  03eaea0  addic 3, 3, 1
  03eaea4  lfs 16, 0(4)
  03eaea8  stw 25, 96(30)
  03eaeac  stw 3, 108(30)
  03eaeb0  lbz 3, 32(31)
  03eaeb4  cmpwi 3, 5
  03eaeb8  cmpwi 1, 3, 4
  03eaebc  cmpwi 6, 3, 3
  03eaec0  cmpwi 7, 3, 2
  03eaec4  bt 2, 0x3eb95c
  03eaec8  bt 6, 0x3eb29c
  03eaecc  bt 26, 0x3eb094
  03eaed0  bt 30, 0x3eafb8
  03eaed4  cmpwi 3, 1
  03eaed8  bf 2, 0x3eb9c4
  03eaedc  ori 3, 31, 0
  03eaee0  ori 4, 30, 0
  03eaee4  bl 0x10b030
  03eaee8  nop
  03eaeec  clrlwi 3, 3, 31
  03eaef0  cmpwi 3, 0
  03eaef4  bt 2, 0x3eaf88
  03eaef8  li 3, 3
  03eaefc  lbz 4, 83(31)
  03eaf00  cmpwi 4, 1
  03eaf04  stb 3, 32(31)
  03eaf08  bt 2, 0x3eaf48
  03eaf0c  lis 3, 63
  03eaf10  lis 4, 114
  03eaf14  addi 3, 3, -21324
  03eaf18  li 5, 0
  03eaf1c  lfs 1, 4(3)
  03eaf20  lfs 2, -3056(4)
  03eaf24  ori 3, 31, 0
  03eaf28  fmuls 1, 2, 1
  03eaf2c  li 4, 1
  03eaf30  fctiwz 1, 1
  03eaf34  stfd 1, 368(1)
  03eaf38  lwz 6, 372(1)
  03eaf3c  extsw 6, 6
  03eaf40  bl 0xfddc0
  03eaf44  nop
  03eaf48  lis 3, 63
  03eaf4c  li 4, 8
  03eaf50  vspltisw 2, -1
  03eaf54  addi 3, 3, -21324
  03eaf58  lis 5, 114
  03eaf5c  li 6, -3056
  03eaf60  vslw 2, 2, 2
  03eaf64  lvlx 3, 4, 3
  03eaf68  li 3, 100
  03eaf6c  vspltw 3, 3, 0
  03eaf70  lvlx 4, 6, 5
  03eaf74  vmaddfp 2, 4, 3, 2
  03eaf78  vctsxs 2, 2, 0
  03eaf7c  vspltw 2, 2, 0
  03eaf80  stvewx 2, 3, 30
  03eaf84  b 0x3eb9c4
  03eaf88  lwz 4, 24(31)
  03eaf8c  lis 3, 16544
  03eaf90  srawi 5, 4, 31
  03eaf94  srwi 6, 5, 1
  03eaf98  xor 4, 6, 4
  03eaf9c  subc 4, 4, 5
  03eafa0  cmpw 4, 3
  03eafa4  bf 0, 0x3eb9c4
  03eafa8  ori 3, 31, 0
  03eafac  bl 0xefb38
  03eafb0  nop
  03eafb4  b 0x3eb9c4
  03eafb8  lwz 3, 104(30)
  03eafbc  lfs 6, 20(31)
  03eafc0  lfs 5, 16(31)
  03eafc4  lfs 2, 20(3)
  03eafc8  lfs 1, 16(3)
  03eafcc  fsubs 2, 2, 6
  03eafd0  fsubs 1, 1, 5
  03eafd4  lfs 3, 24(3)
  03eafd8  lfs 7, 24(31)
  03eafdc  fsubs 3, 3, 7
  03eafe0  lis 3, 63
  03eafe4  fmuls 4, 2, 2
  03eafe8  addi 3, 3, -21324
  03eafec  lfs 8, 12(3)
  03eaff0  fmadds 4, 1, 1, 4
  03eaff4  fmadds 4, 3, 3, 4
  03eaff8  fsqrts 4, 4
  03eaffc  fcmpu 0, 4, 8
  03eb000  cror 6, 1, 2
  03eb004  bt 6, 0x3eb018
  03eb008  ori 3, 31, 0
  03eb00c  bl 0xefb38
  03eb010  nop
  03eb014  b 0x3eb9c4
  03eb018  lis 3, 63
  03eb01c  lis 4, 114
  03eb020  addi 3, 3, -21324
  03eb024  fsub 11, 16, 4
  03eb028  fsub 12, 16, 4
  03eb02c  lfs 8, 16(3)
  03eb030  lfs 9, -3052(4)
  03eb034  fmuls 8, 9, 8
  03eb038  fsub 13, 16, 4
  03eb03c  lfs 10, 20(3)
  03eb040  fsub 0, 4, 16
  03eb044  fsub 31, 4, 16
  03eb048  fdivs 8, 8, 4
  03eb04c  fsub 4, 4, 16
  03eb050  fmuls 3, 3, 8
  03eb054  fmuls 2, 2, 8
  03eb058  fmuls 1, 1, 8
  03eb05c  fsel 8, 11, 16, 3
  03eb060  fsel 11, 12, 16, 2
  03eb064  fsel 12, 13, 16, 1
  03eb068  fsel 3, 0, 8, 3
  03eb06c  fsel 2, 31, 11, 2
  03eb070  fsel 1, 4, 12, 1
  03eb074  fmadds 3, 9, 10, 3
  03eb078  fadds 2, 6, 2
  03eb07c  fadds 1, 5, 1
  03eb080  fadds 3, 7, 3
  03eb084  stfs 2, 20(31)
  03eb088  stfs 1, 16(31)
  03eb08c  stfs 3, 24(31)
  03eb090  b 0x3eb9c4
  03eb094  addic 3, 30, 100
  03eb098  bl 0x4fff60
  03eb09c  nop
  03eb0a0  lwz 3, 104(30)
  03eb0a4  cmpwi 3, 0
  03eb0a8  bt 2, 0x3eb124
  03eb0ac  lbz 4, 32(3)
  03eb0b0  cmpwi 1, 4, 253
  03eb0b4  cmpwi 4, 254
  03eb0b8  cror 2, 2, 6
  03eb0bc  bt 2, 0x3eb124
  03eb0c0  lfs 1, 20(31)
  03eb0c4  lfs 2, 20(3)
  03eb0c8  lfs 3, 16(31)
  03eb0cc  fsubs 1, 1, 2
  03eb0d0  lfs 2, 16(3)
  03eb0d4  fsubs 2, 3, 2
  03eb0d8  lis 3, 63
  03eb0dc  addi 3, 3, -21324
  03eb0e0  fmuls 1, 1, 1
  03eb0e4  fmadds 1, 2, 2, 1
  03eb0e8  lfs 2, 24(3)
  03eb0ec  fsqrts 1, 1
  03eb0f0  fcmpu 0, 1, 2
  03eb0f4  cror 6, 1, 2
  03eb0f8  bt 6, 0x3eb124
  03eb0fc  lwz 3, 100(30)
  03eb100  cmpwi 3, 0
  03eb104  bf 2, 0x3eb124
  03eb108  li 6, 2
  03eb10c  li 3, 2
  03eb110  li 4, 0
  03eb114  ori 5, 31, 0
  03eb118  stb 6, 32(31)
  03eb11c  bl 0x15d12c
  03eb120  nop
  03eb124  lis 3, 63
  03eb128  lis 4, 114
  03eb12c  addi 3, 3, -21324
  03eb130  lfs 2, 28(3)
  03eb134  lfs 1, -3056(4)
  03eb138  lwz 3, 108(30)
  03eb13c  fmuls 2, 1, 2
  03eb140  fctiwz 2, 2
  03eb144  stfd 2, 368(1)
  03eb148  lwz 4, 372(1)
  03eb14c  cmpw 3, 4
  03eb150  bf 1, 0x3eb1a0
  03eb154  lwz 4, 104(30)
  03eb158  cmpwi 4, 0
  03eb15c  bt 2, 0x3eb198
  03eb160  lbz 4, 32(4)
  03eb164  cmpwi 1, 4, 253
  03eb168  cmpwi 4, 254
  03eb16c  cror 2, 2, 6
  03eb170  bt 2, 0x3eb198
  03eb174  lis 4, 63
  03eb178  addi 4, 4, -21324
  03eb17c  lfs 2, 32(4)
  03eb180  fmuls 1, 1, 2
  03eb184  fctiwz 1, 1
  03eb188  stfd 1, 368(1)
  03eb18c  lwz 4, 372(1)
  03eb190  cmpw 3, 4
  03eb194  bf 1, 0x3eb1a0
  03eb198  li 3, 5
  03eb19c  stb 3, 32(31)
  03eb1a0  lis 3, 151
  03eb1a4  lfs 1, 20(31)
  03eb1a8  addic 3, 3, -25376
  03eb1ac  lwz 4, 8320(3)
  03eb1b0  lfs 2, 16(31)
  03eb1b4  lfs 3, 20(4)
  03eb1b8  lfs 4, 16(4)
  03eb1bc  fsubs 1, 3, 1
  03eb1c0  fsubs 2, 4, 2
  03eb1c4  lis 4, 63
  03eb1c8  addi 4, 4, -21324
  03eb1cc  fmuls 1, 1, 1
  03eb1d0  fmadds 1, 2, 2, 1
  03eb1d4  lfs 2, 36(4)
  03eb1d8  fsqrts 1, 1
  03eb1dc  fcmpu 0, 1, 2
  03eb1e0  cror 6, 1, 2
  03eb1e4  bt 6, 0x3eb21c
  03eb1e8  lfs 1, 24(31)
  03eb1ec  lis 4, 63
  03eb1f0  lfs 2, 136(3)
  03eb1f4  addi 4, 4, -21324
  03eb1f8  fsubs 1, 1, 2
  03eb1fc  lfs 2, 12(4)
  03eb200  fabs 1, 1
  03eb204  fcmpu 0, 1, 2
  03eb208  cror 6, 1, 2
  03eb20c  bt 6, 0x3eb21c
  03eb210  li 3, 4
  03eb214  stb 3, 32(31)
  03eb218  b 0x3eb9c4
  03eb21c  lis 4, 63
  03eb220  addic 3, 31, 16
  03eb224  addi 4, 4, -21324
  03eb228  li 5, 16
  03eb22c  ori 6, 31, 0
  03eb230  li 7, 0
  03eb234  lfs 1, 40(4)
  03eb238  bl 0x5e598
  03eb23c  nop
  03eb240  cmpwi 3, 0
  03eb244  bf 1, 0x3eb9c4
  03eb248  lis 4, 161
  03eb24c  addic 4, 4, 18944
  03eb250  lwz 5, 0(4)
  03eb254  lhz 6, 52(5)
  03eb258  rlwinm 6, 6, 0, 19, 19
  03eb25c  cmpwi 6, 0
  03eb260  bt 2, 0x3eb288
  03eb264  lwz 6, 104(30)
  03eb268  cmpw 5, 6
  03eb26c  bf 2, 0x3eb27c
  03eb270  lwz 5, 100(30)
  03eb274  cmpwi 5, 0
  03eb278  bf 2, 0x3eb288
  03eb27c  li 3, 4
  03eb280  stb 3, 32(31)
  03eb284  b 0x3eb9c4
  03eb288  addic 25, 25, 1
  03eb28c  addic 4, 4, 4
  03eb290  cmpw 25, 3
  03eb294  bt 0, 0x3eb250
  03eb298  b 0x3eb9c4
  03eb29c  lis 30, 149
  03eb2a0  lfs 1, 20(31)
  03eb2a4  addic 30, 30, 5056
  03eb2a8  lis 3, 63
  03eb2ac  addic 26, 31, 16
  03eb2b0  lfs 2, 324(30)
  03eb2b4  lfs 3, 16(31)
  03eb2b8  fsubs 1, 1, 2
  03eb2bc  lfs 2, 320(30)
  03eb2c0  fsubs 2, 3, 2
  03eb2c4  addi 29, 3, -21324
  03eb2c8  ori 3, 26, 0
  03eb2cc  li 5, 16
  03eb2d0  ori 6, 31, 0
  03eb2d4  li 7, 0
  03eb2d8  fmuls 1, 1, 1
  03eb2dc  fmadds 1, 2, 2, 1
  03eb2e0  fsqrts 31, 1
  03eb2e4  lfs 1, 44(29)
  03eb2e8  bl 0x5e598
  03eb2ec  nop
  03eb2f0  lfs 1, 24(29)
  03eb2f4  li 4, 4
  03eb2f8  lfs 17, 12(29)
  03eb2fc  li 5, 1
  03eb300  lfs 3, 48(29)
  03eb304  lis 7, 161
  03eb308  lfs 2, 16(31)
  03eb30c  lis 10, 129
  03eb310  lfs 4, 24(31)
  03eb314  ori 8, 3, 0
  03eb318  stfs 2, 64(1)
  03eb31c  addic 7, 7, 18944
  03eb320  stfs 4, 72(1)
  03eb324  ori 3, 31, 0
  03eb328  lfs 2, 20(31)
  03eb32c  li 9, 0
  03eb330  lfs 4, 28(31)
  03eb334  ori 10, 10, 1
  03eb338  stfs 2, 68(1)
  03eb33c  stfs 4, 76(1)
  03eb340  std 4, 120(1)
  03eb344  fmr 2, 17
  03eb348  std 5, 128(1)
  03eb34c  ld 5, 64(1)
  03eb350  ld 6, 72(1)
  03eb354  bl 0x107860
  03eb358  nop
  03eb35c  fmr 1, 31
  03eb360  lfs 2, 52(29)
  03eb364  ori 3, 25, 0
  03eb368  li 29, 150
  03eb36c  fcmpu 0, 1, 2
  03eb370  cror 6, 1, 2
  03eb374  bt 6, 0x3eb37c
  03eb378  li 3, 1
  03eb37c  addic 3, 3, 50
  03eb380  stfs 1, 360(1)
  03eb384  cmpwi 3, 0
  03eb388  bt 2, 0x3eb3ac
  03eb38c  lis 3, 63
  03eb390  stfs 1, 360(1)
  03eb394  addi 3, 3, -21324
  03eb398  lfs 2, 56(3)
  03eb39c  fmuls 1, 1, 2
  03eb3a0  bl 0x502758
  03eb3a4  nop
  03eb3a8  ori 29, 3, 0
  03eb3ac  cmpwi 29, 0
  03eb3b0  ori 28, 25, 0
  03eb3b4  bf 1, 0x3eb8a8
  03eb3b8  lis 3, 63
  03eb3bc  addi 3, 3, -21324
  03eb3c0  lfs 1, 16(3)
  03eb3c4  lfs 2, 60(3)
  03eb3c8  lfs 3, 64(3)
  03eb3cc  lfs 4, 20(3)
  03eb3d0  lfs 5, 72(3)
  03eb3d4  lfs 18, 68(3)
  03eb3d8  lfs 30, 36(3)
  03eb3dc  lfs 6, 100(3)
  03eb3e0  lfs 19, 76(3)
  03eb3e4  lfs 20, 80(3)
  03eb3e8  lfs 21, 84(3)
  03eb3ec  lfs 7, 120(3)
  03eb3f0  lfs 22, 88(3)
  03eb3f4  stfd 1, 352(1)
  03eb3f8  stfd 2, 344(1)
  03eb3fc  fmr 1, 7
  03eb400  stfd 3, 336(1)
  03eb404  stfd 4, 328(1)
  03eb408  lfs 2, 124(3)
  03eb40c  stfs 5, 324(1)
  03eb410  lfs 23, 92(3)
  03eb414  lfs 3, 128(3)
  03eb418  lfs 24, 96(3)
  03eb41c  lfs 4, 132(3)
  03eb420  lfs 25, 104(3)
  03eb424  lfs 5, 136(3)
  03eb428  lfs 26, 108(3)
  03eb42c  lfs 27, 112(3)
  03eb430  lfs 28, 116(3)
  03eb434  stfs 6, 320(1)
  03eb438  stfs 1, 316(1)
  03eb43c  lfs 29, 40(3)
  03eb440  stfs 2, 312(1)
  03eb444  lfs 14, 140(3)
  03eb448  lfs 15, 144(3)
  03eb44c  stfd 3, 304(1)
  03eb450  stfd 4, 296(1)
  03eb454  stfd 5, 288(1)
  03eb458  li 3, 4
  03eb45c  bl 0xfc620
  03eb460  nop
  03eb464  lis 24, 114
  03eb468  lfd 1, 352(1)
  03eb46c  ori 27, 3, 0
  03eb470  lfd 2, 344(1)
  03eb474  lfd 3, 336(1)
  03eb478  lfs 4, -3052(24)
  03eb47c  stw 25, 284(1)
  03eb480  fmuls 5, 4, 1
  03eb484  stw 25, 160(1)
  03eb488  fmuls 6, 4, 2
  03eb48c  stw 25, 164(1)
  03eb490  fmuls 3, 4, 3
  03eb494  stw 25, 168(1)
  03eb498  fmuls 1, 4, 18
  03eb49c  stw 25, 172(1)
  03eb4a0  fmuls 2, 4, 30
  03eb4a4  stfs 5, 272(1)
  03eb4a8  stfs 6, 276(1)
  03eb4ac  stfs 3, 280(1)
  03eb4b0  bl 0xfcbe8
  03eb4b4  nop
  03eb4b8  lfs 2, -3052(24)
  03eb4bc  stfs 1, 160(1)
  03eb4c0  fmuls 1, 2, 18
  03eb4c4  fmuls 2, 2, 30
  03eb4c8  bl 0xfcbe8
  03eb4cc  nop
  03eb4d0  sldi 3, 27, 2
  03eb4d4  lfd 2, 328(1)
  03eb4d8  lfs 3, -3052(24)
  03eb4dc  addc 3, 3, 1
  03eb4e0  stfs 1, 164(1)
  03eb4e4  clrldi 3, 3, 32
  03eb4e8  fmuls 1, 3, 2
  03eb4ec  lfs 2, 272(3)
  03eb4f0  bl 0xfcbe8
  03eb4f4  nop
  03eb4f8  cmpwi 27, 1
  03eb4fc  stfs 1, 168(1)
  03eb500  fmr 31, 17
  03eb504  bf 2, 0x3eb50c
  03eb508  fmr 31, 30
  03eb50c  fmr 1, 16
  03eb510  stfs 14, 384(1)
  03eb514  fmr 2, 31
  03eb518  bl 0xfcbe8
  03eb51c  nop
  03eb520  fmr 14, 1
  03eb524  bl 0xfcc68
  03eb528  nop
  03eb52c  fmr 31, 1
  03eb530  lfs 1, 324(1)
  03eb534  lis 3, 114
  03eb538  cmpwi 27, 1
  03eb53c  fadds 1, 31, 1
  03eb540  fsubs 2, 19, 31
  03eb544  fsubs 3, 20, 31
  03eb548  fsubs 4, 19, 1
  03eb54c  fsub 5, 31, 2
  03eb550  fsubs 6, 20, 1
  03eb554  fsub 7, 1, 4
  03eb558  fsel 2, 5, 2, 31
  03eb55c  fsel 1, 7, 4, 1
  03eb560  fsub 4, 3, 2
  03eb564  fsub 5, 6, 1
  03eb568  fsel 2, 4, 3, 2
  03eb56c  lfs 4, 16(31)
  03eb570  lfs 7, 20(31)
  03eb574  lfs 8, 24(31)
  03eb578  lfs 9, 168(1)
  03eb57c  lfs 11, -3052(3)
  03eb580  fnmsubs 8, 14, 15, 8
  03eb584  fsel 1, 5, 6, 1
  03eb588  fmuls 3, 2, 2
  03eb58c  fmuls 5, 1, 1
  03eb590  fmuls 6, 3, 2
  03eb594  fmuls 10, 5, 1
  03eb598  fmadds 2, 6, 21, 2
  03eb59c  fmuls 6, 3, 6
  03eb5a0  fmadds 1, 10, 21, 1
  03eb5a4  fmuls 10, 5, 10
  03eb5a8  fmadds 2, 6, 22, 2
  03eb5ac  fmuls 6, 3, 6
  03eb5b0  fmadds 1, 10, 22, 1
  03eb5b4  fmuls 10, 5, 10
  03eb5b8  fmuls 3, 3, 6
  03eb5bc  fmadds 2, 6, 23, 2
  03eb5c0  fmuls 6, 11, 14
  03eb5c4  lfs 11, 320(1)
  03eb5c8  stfs 8, 184(1)
  03eb5cc  fmuls 5, 5, 10
  03eb5d0  fmadds 1, 10, 23, 1
  03eb5d4  fmadds 2, 3, 24, 2
  03eb5d8  fnmsubs 3, 6, 11, 9
  03eb5dc  fmadds 1, 5, 24, 1
  03eb5e0  fmadds 2, 2, 14, 7
  03eb5e4  stfs 3, 168(1)
  03eb5e8  fmadds 1, 1, 14, 4
  03eb5ec  stfs 2, 180(1)
  03eb5f0  stfs 1, 176(1)
  03eb5f4  lfs 14, 384(1)
  03eb5f8  bt 1, 0x3eb610
  03eb5fc  cmpwi 27, -1
  03eb600  bf 1, 0x3eb89c
  03eb604  cmpwi 27, 0
  03eb608  bf 1, 0x3eb624
  03eb60c  b 0x3eb6a0
  03eb610  cmpwi 27, 2
  03eb614  bf 1, 0x3eb6f4
  03eb618  cmpwi 27, 3
  03eb61c  bf 1, 0x3eb794
  03eb620  b 0x3eb89c
  03eb624  fmr 1, 26
  03eb628  fmr 2, 27
  03eb62c  bl 0xfcbe8
  03eb630  nop
  03eb634  lis 3, 114
  03eb638  fmr 31, 1
  03eb63c  lfs 1, -3056(3)
  03eb640  fmuls 2, 1, 25
  03eb644  fmuls 1, 1, 28
  03eb648  fctiwz 2, 2
  03eb64c  fctiwz 1, 1
  03eb650  stfd 2, 368(1)
  03eb654  lwz 3, 372(1)
  03eb658  stfd 1, 368(1)
  03eb65c  lwz 4, 372(1)
  03eb660  extsw 3, 3
  03eb664  extsw 4, 4
  03eb668  bl 0xfe484
  03eb66c  nop
  03eb670  lis 5, 7952
  03eb674  fmr 1, 31
  03eb678  lis 6, 16
  03eb67c  ori 8, 3, 0
  03eb680  li 9, 0
  03eb684  addic 3, 1, 176
  03eb688  addic 4, 1, 160
  03eb68c  ori 5, 5, 6176
  03eb690  ori 6, 6, 4112
  03eb694  bl 0x125350
  03eb698  nop
  03eb69c  b 0x3eb89c
  03eb6a0  lfs 2, 312(1)
  03eb6a4  lfs 1, 316(1)
  03eb6a8  bl 0xfcbe8
  03eb6ac  nop
  03eb6b0  lis 3, 114
  03eb6b4  lis 5, 16136
  03eb6b8  lis 6, 3848
  03eb6bc  li 9, 1
  03eb6c0  addic 4, 1, 160
  03eb6c4  lfs 2, -3056(3)
  03eb6c8  addic 3, 1, 176
  03eb6cc  fmuls 2, 2, 25
  03eb6d0  ori 5, 5, 4128
  03eb6d4  ori 6, 6, 4128
  03eb6d8  fctiwz 2, 2
  03eb6dc  stfd 2, 368(1)
  03eb6e0  lwz 8, 372(1)
  03eb6e4  extsw 8, 8
  03eb6e8  bl 0x125350
  03eb6ec  nop
  03eb6f0  b 0x3eb89c
  03eb6f4  li 3, 100
  03eb6f8  bl 0xfc620
  03eb6fc  nop
  03eb700  lis 4, 114
  03eb704  lfd 1, 296(1)
  03eb708  lfd 2, 288(1)
  03eb70c  lis 5, 12104
  03eb710  li 6, 40
  03eb714  ori 5, 5, 24696
  03eb718  subc 3, 3, 6
  03eb71c  lfs 3, -3056(4)
  03eb720  lis 4, 24568
  03eb724  fmuls 1, 3, 1
  03eb728  fmuls 2, 3, 2
  03eb72c  ori 4, 4, 63736
  03eb730  sradi 3, 3, 63
  03eb734  subc 4, 4, 5
  03eb738  and 3, 3, 4
  03eb73c  addc 27, 5, 3
  03eb740  fctiwz 1, 1
  03eb744  fctiwz 2, 2
  03eb748  stfd 1, 368(1)
  03eb74c  lwz 3, 372(1)
  03eb750  stfd 2, 368(1)
  03eb754  lwz 4, 372(1)
  03eb758  extsw 3, 3
  03eb75c  extsw 4, 4
  03eb760  bl 0xfe484
  03eb764  nop
  03eb768  lis 6, 3840
  03eb76c  lfd 1, 304(1)
  03eb770  ori 8, 3, 0
  03eb774  addic 3, 1, 176
  03eb778  li 9, 2
  03eb77c  addic 4, 1, 160
  03eb780  ori 5, 27, 0
  03eb784  ori 6, 6, 32
  03eb788  bl 0x125350
  03eb78c  nop
  03eb790  b 0x3eb89c
  03eb794  stfs 15, 384(1)
  03eb798  fmr 1, 17
  03eb79c  fmr 2, 29
  03eb7a0  bl 0xfcbe8
  03eb7a4  nop
  03eb7a8  lis 4, 32536
  03eb7ac  lis 3, 32512
  03eb7b0  ori 4, 4, 8240
  03eb7b4  bl 0x106738
  03eb7b8  nop
  03eb7bc  ori 27, 3, 0
  03eb7c0  fmr 1, 30
  03eb7c4  fmr 2, 29
  03eb7c8  bl 0xfcbe8
  03eb7cc  nop
  03eb7d0  lis 4, 95
  03eb7d4  li 3, 0
  03eb7d8  ori 4, 4, 24415
  03eb7dc  bl 0x106738
  03eb7e0  nop
  03eb7e4  fmr 1, 16
  03eb7e8  ori 24, 3, 0
  03eb7ec  fmr 2, 29
  03eb7f0  bl 0xfcbe8
  03eb7f4  nop
  03eb7f8  lis 3, 114
  03eb7fc  lfs 2, -3052(3)
  03eb800  fmuls 15, 1, 2
  03eb804  bl 0xfcc68
  03eb808  nop
  03eb80c  fmr 3, 1
  03eb810  addic 23, 1, 160
  03eb814  fmr 1, 15
  03eb818  fmr 2, 31
  03eb81c  ori 3, 23, 0
  03eb820  bl 0xfe610
  03eb824  nop
  03eb828  fmr 1, 26
  03eb82c  fmr 2, 27
  03eb830  bl 0xfcbe8
  03eb834  nop
  03eb838  lis 3, 114
  03eb83c  fmr 31, 1
  03eb840  lfs 1, -3056(3)
  03eb844  fmuls 2, 1, 28
  03eb848  fmuls 1, 1, 14
  03eb84c  fctiwz 2, 2
  03eb850  fctiwz 1, 1
  03eb854  stfd 2, 368(1)
  03eb858  lwz 3, 372(1)
  03eb85c  stfd 1, 368(1)
  03eb860  extsw 3, 3
  03eb864  lwz 4, 372(1)
  03eb868  extsw 4, 4
  03eb86c  bl 0xfe484
  03eb870  nop
  03eb874  ori 8, 3, 0
  03eb878  li 9, 3
  03eb87c  fmr 1, 31
  03eb880  addic 3, 1, 176
  03eb884  ori 4, 23, 0
  03eb888  ori 5, 27, 0
  03eb88c  ori 6, 24, 0
  03eb890  bl 0x125350
  03eb894  nop
  03eb898  lfs 15, 384(1)
  03eb89c  addic 28, 28, 1
  03eb8a0  cmpw 28, 29
  03eb8a4  bt 0, 0x3eb458
  03eb8a8  li 3, 0
  03eb8ac  lfs 31, 360(1)
  03eb8b0  li 4, 0
  03eb8b4  ori 5, 31, 0
  03eb8b8  bl 0x15d12c
  03eb8bc  nop
  03eb8c0  lis 3, 63
  03eb8c4  vspltisw 2, -1
  03eb8c8  addi 7, 3, -21324
  03eb8cc  lis 3, 114
  03eb8d0  li 4, -3056
  03eb8d4  vslw 2, 2, 2
  03eb8d8  li 8, 164
  03eb8dc  lfs 1, 148(7)
  03eb8e0  lfs 2, 152(7)
  03eb8e4  fsub 1, 31, 1
  03eb8e8  fmuls 2, 31, 2
  03eb8ec  lfs 3, 156(7)
  03eb8f0  lfs 4, 160(7)
  03eb8f4  lvlx 3, 4, 3
  03eb8f8  li 9, 360
  03eb8fc  ori 4, 26, 0
  03eb900  addic 3, 1, 192
  03eb904  li 5, 0
  03eb908  li 6, 0
  03eb90c  fsel 1, 1, 3, 2
  03eb910  fsubs 1, 4, 1
  03eb914  stfs 1, 352(30)
  03eb918  lvlx 4, 8, 7
  03eb91c  vspltw 4, 4, 0
  03eb920  vmaddfp 2, 3, 4, 2
  03eb924  vctsxs 2, 2, 0
  03eb928  vspltw 2, 2, 0
  03eb92c  stvewx 2, 9, 30
  03eb930  bl 0x3fda38
  03eb934  nop
  03eb938  lis 4, 165
  03eb93c  ori 3, 31, 0
  03eb940  addic 4, 4, 7912
  03eb944  bl 0x110798
  03eb948  nop
  03eb94c  ori 3, 31, 0
  03eb950  bl 0xefb38
  03eb954  nop
  03eb958  b 0x3eb9c4
  03eb95c  lis 3, 63
  03eb960  lis 4, 114
  03eb964  addi 3, 3, -21324
  03eb968  lfs 1, 168(3)
  03eb96c  lfs 2, 40(3)
  03eb970  lfs 3, -3064(4)
  03eb974  lfs 4, 44(31)
  03eb978  fmadds 1, 3, 1, 2
  03eb97c  lwz 4, 36(31)
  03eb980  fmuls 1, 4, 1
  03eb984  stfs 1, 44(31)
  03eb988  lfs 2, 172(3)
  03eb98c  lfs 3, 36(4)
  03eb990  fmuls 2, 3, 2
  03eb994  fcmpu 0, 1, 2
  03eb998  cror 6, 1, 2
  03eb99c  bt 6, 0x3eb9c4
  03eb9a0  lis 4, 165
  03eb9a4  ori 3, 31, 0
  03eb9a8  addic 4, 4, 7912
  03eb9ac  bl 0x110798
  03eb9b0  nop
  03eb9b4  ori 3, 31, 0
  03eb9b8  bl 0xefb38
  03eb9bc  nop
  03eb9c0  b 0x3eb9c4
  03eb9c4  ld 0, 624(1)
  03eb9c8  mtlr 0
  03eb9cc  lfd 14, 464(1)
  03eb9d0  lfd 15, 472(1)
  03eb9d4  lfd 16, 480(1)
  03eb9d8  lfd 17, 488(1)
  03eb9dc  lfd 18, 496(1)
  03eb9e0  lfd 19, 504(1)
  03eb9e4  lfd 20, 512(1)
  03eb9e8  lfd 21, 520(1)
  03eb9ec  lfd 22, 528(1)
  03eb9f0  lfd 23, 536(1)
  03eb9f4  lfd 24, 544(1)
  03eb9f8  lfd 25, 552(1)
  03eb9fc  lfd 26, 560(1)
  03eba00  lfd 27, 568(1)
  03eba04  lfd 28, 576(1)
  03eba08  lfd 29, 584(1)
  03eba0c  lfd 30, 592(1)
  03eba10  lfd 31, 600(1)
  03eba14  ld 23, 392(1)
  03eba18  ld 24, 400(1)
  03eba1c  ld 25, 408(1)
  03eba20  ld 26, 416(1)
  03eba24  ld 27, 424(1)
  03eba28  ld 28, 432(1)
  03eba2c  ld 29, 440(1)
  03eba30  ld 30, 448(1)
  03eba34  ld 31, 456(1)
  03eba38  addi 1, 1, 608
  03eba3c  blr
