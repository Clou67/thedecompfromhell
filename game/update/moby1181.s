# game/update/moby1181.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001eede4:   # 0x1eede4, 0x24 bytes
  01eede4  lhz 4, 166(3)
  01eede8  cmpwi 4, 1180
  01eedec  bf 2, 0x1eee04
  01eedf0  lbz 4, 32(3)
  01eedf4  cmpwi 4, 1
  01eedf8  bf 2, 0x1eee04
  01eedfc  li 4, 2
  01eee00  stb 4, 32(3)
  01eee04  blr

M1181_001eee08:   # 0x1eee08, 0x14 bytes
  01eee08  lis 3, 118
  01eee0c  lis 4, 1
  01eee10  addic 3, 3, 24240
  01eee14  stw 4, 72(3)
  01eee18  blr

M1181_001eee28:   # 0x1eee28, 0x25c bytes
  01eee28  stdu 1, -160(1)
  01eee2c  mflr 0
  01eee30  std 0, 176(1)
  01eee34  std 31, 152(1)
  01eee38  ori 31, 3, 0
  01eee3c  std 30, 144(1)
  01eee40  lbz 3, 32(3)
  01eee44  std 29, 136(1)
  01eee48  ori 30, 4, 0
  01eee4c  ori 29, 5, 0
  01eee50  std 28, 128(1)
  01eee54  cmpwi 3, 3
  01eee58  bt 2, 0x1ef064
  01eee5c  ori 3, 31, 0
  01eee60  lis 4, 51
  01eee64  li 5, 0
  01eee68  bl 0x10675c
  01eee6c  nop
  01eee70  ori 28, 3, 0
  01eee74  cmpwi 28, 0
  01eee78  bt 2, 0x1eeea0
  01eee7c  lfs 1, 44(28)
  01eee80  lhz 4, 166(31)
  01eee84  lis 3, 101
  01eee88  addic 3, 3, 19668
  01eee8c  extsh 4, 4
  01eee90  stfd 1, 64(1)
  01eee94  ld 5, 64(1)
  01eee98  bl 0x5cd098
  01eee9c  nop
  01eeea0  ori 3, 31, 0
  01eeea4  ori 4, 28, 0
  01eeea8  addic 7, 1, 112
  01eeeac  li 9, 0
  01eeeb0  li 10, 4
  01eeeb4  ori 5, 29, 0
  01eeeb8  li 6, 0
  01eeebc  li 8, 0
  01eeec0  bl 0x106840
  01eeec4  nop
  01eeec8  ori 4, 3, 0
  01eeecc  lwz 3, 112(1)
  01eeed0  cmpwi 4, 0
  01eeed4  bf 1, 0x1eeee8
  01eeed8  cmpwi 4, 2
  01eeedc  bt 1, 0x1eeee8
  01eeee0  li 4, 0
  01eeee4  stw 4, 0(29)
  01eeee8  cmpwi 3, 1
  01eeeec  bf 1, 0x1ef05c
  01eeef0  lwz 3, 0(29)
  01eeef4  lwz 4, 44(28)
  01eeef8  srawi 5, 3, 31
  01eeefc  lfs 2, 0(29)
  01eef00  srawi 6, 4, 31
  01eef04  lfs 1, 44(28)
  01eef08  srwi 7, 5, 1
  01eef0c  srwi 8, 6, 1
  01eef10  xor 3, 7, 3
  01eef14  xor 4, 8, 4
  01eef18  subc 3, 3, 5
  01eef1c  subc 4, 4, 6
  01eef20  cmpw 3, 4
  01eef24  bt 1, 0x1ef01c
  01eef28  li 3, 0
  01eef2c  lhz 4, 52(31)
  01eef30  rlwimi 4, 3, 0, 19, 19
  01eef34  stw 3, 0(29)
  01eef38  lwz 29, 96(30)
  01eef3c  sth 4, 52(31)
  01eef40  cmpwi 29, -1
  01eef44  bt 2, 0x1eef9c
  01eef48  lis 3, 164
  01eef4c  slwi 4, 29, 8
  01eef50  lwz 3, -28512(3)
  01eef54  addc 4, 3, 4
  01eef58  clrldi 4, 4, 32
  01eef5c  cmpwi 4, 0
  01eef60  bt 2, 0x1eef9c
  01eef64  lbz 3, 32(4)
  01eef68  cmpwi 1, 3, 253
  01eef6c  cmpwi 3, 254
  01eef70  cror 2, 2, 6
  01eef74  bt 2, 0x1eef9c
  01eef78  lhz 3, 166(4)
  01eef7c  cmpwi 1, 3, 1181
  01eef80  cmpwi 3, 1172
  01eef84  cror 2, 2, 6
  01eef88  bt 2, 0x1eef94
  01eef8c  cmpwi 3, 1184
  01eef90  bf 2, 0x1eef9c
  01eef94  li 3, 1
  01eef98  stb 3, 188(4)
  01eef9c  lwz 3, 100(30)
  01eefa0  cmpwi 3, -1
  01eefa4  bt 2, 0x1eeffc
  01eefa8  lis 3, 164
  01eefac  slwi 4, 29, 8
  01eefb0  lwz 3, -28512(3)
  01eefb4  addc 29, 3, 4
  01eefb8  clrldi 29, 29, 32
  01eefbc  cmpwi 29, 0
  01eefc0  bt 2, 0x1eeffc
  01eefc4  lbz 3, 32(29)
  01eefc8  cmpwi 1, 3, 253
  01eefcc  cmpwi 3, 254
  01eefd0  cror 2, 2, 6
  01eefd4  bt 2, 0x1eeffc
  01eefd8  lhz 3, 166(29)
  01eefdc  cmpwi 1, 3, 1181
  01eefe0  cmpwi 3, 1172
  01eefe4  cror 2, 2, 6
  01eefe8  bt 2, 0x1eeff4
  01eefec  cmpwi 3, 1184
  01eeff0  bf 2, 0x1eeffc
  01eeff4  li 3, 1
  01eeff8  stb 3, 188(29)
  01eeffc  ori 3, 31, 0
  01ef000  li 4, 0
  01ef004  li 5, -1
  01ef008  bl 0xfd8d0
  01ef00c  nop
  01ef010  li 3, 3
  01ef014  stb 3, 32(31)
  01ef018  b 0x1ef05c
  01ef01c  fsubs 1, 2, 1
  01ef020  lis 3, 31
  01ef024  vspltisw 2, -1
  01ef028  lis 4, 114
  01ef02c  addi 3, 3, -4576
  01ef030  li 5, -3056
  01ef034  vslw 2, 2, 2
  01ef038  stfs 1, 0(29)
  01ef03c  <unknown>
  01ef040  <unknown>
  01ef044  li 3, 38
  01ef048  vspltw 3, 3, 0
  01ef04c  vmaddfp 2, 4, 3, 2
  01ef050  vctsxs 2, 2, 0
  01ef054  vsplth 2, 2, 1
  01ef058  stvehx 2, 3, 30
  01ef05c  li 3, 255
  01ef060  stb 3, 164(31)
  01ef064  ld 0, 176(1)
  01ef068  mtlr 0
  01ef06c  ld 28, 128(1)
  01ef070  ld 29, 136(1)
  01ef074  ld 30, 144(1)
  01ef078  ld 31, 152(1)
  01ef07c  addi 1, 1, 160
  01ef080  blr

M1181_001ef090:   # 0x1ef090, 0x1a8 bytes
  01ef090  stdu 1, -208(1)
  01ef094  mflr 0
  01ef098  std 0, 224(1)
  01ef09c  stfd 28, 176(1)
  01ef0a0  stfd 29, 184(1)
  01ef0a4  stfd 30, 192(1)
  01ef0a8  stfd 31, 200(1)
  01ef0ac  lis 8, 164
  01ef0b0  lis 4, 31
  01ef0b4  lis 9, 0
  01ef0b8  std 28, 144(1)
  01ef0bc  std 27, 136(1)
  01ef0c0  addi 4, 4, -3964
  01ef0c4  li 27, 0
  01ef0c8  std 30, 160(1)
  01ef0cc  lwz 28, -28500(8)
  01ef0d0  std 29, 152(1)
  01ef0d4  ori 30, 3, 0
  01ef0d8  ori 29, 27, 0
  01ef0dc  cmpwi 28, 0
  01ef0e0  li 3, 208
  01ef0e4  std 31, 168(1)
  01ef0e8  lfs 28, 0(4)
  01ef0ec  ori 31, 7, 0
  01ef0f0  bt 2, 0x1ef200
  01ef0f4  addc 3, 1, 3
  01ef0f8  std 5, 64(3)
  01ef0fc  std 6, 72(3)
  01ef100  lfs 30, 68(3)
  01ef104  lfs 29, 64(3)
  01ef108  lfs 31, 72(3)
  01ef10c  cmpw 28, 30
  01ef110  bt 2, 0x1ef1ac
  01ef114  lbz 3, 32(28)
  01ef118  cmpwi 1, 3, 253
  01ef11c  cmpwi 3, 254
  01ef120  cror 2, 2, 6
  01ef124  bt 2, 0x1ef1ac
  01ef128  lhz 3, 166(28)
  01ef12c  cmpwi 6, 3, 1172
  01ef130  cmpwi 3, 1181
  01ef134  cror 2, 2, 26
  01ef138  cmpwi 1, 3, 1184
  01ef13c  bt 2, 0x1ef144
  01ef140  bf 6, 0x1ef1ac
  01ef144  cmpwi 31, -1
  01ef148  bt 2, 0x1ef170
  01ef14c  addic 5, 1, 112
  01ef150  ori 3, 28, 0
  01ef154  ori 4, 31, 0
  01ef158  bl 0xf1114
  01ef15c  nop
  01ef160  lfs 2, 112(1)
  01ef164  lfs 1, 116(1)
  01ef168  lfs 3, 120(1)
  01ef16c  b 0x1ef17c
  01ef170  lfs 2, 16(28)
  01ef174  lfs 1, 20(28)
  01ef178  lfs 3, 24(28)
  01ef17c  fsubs 1, 30, 1
  01ef180  fsubs 2, 29, 2
  01ef184  fsubs 3, 31, 3
  01ef188  fmuls 1, 1, 1
  01ef18c  fmadds 1, 2, 2, 1
  01ef190  fmadds 1, 3, 3, 1
  01ef194  fsqrts 1, 1
  01ef198  fcmpu 0, 28, 1
  01ef19c  cror 6, 0, 2
  01ef1a0  bt 6, 0x1ef1ac
  01ef1a4  fmr 28, 1
  01ef1a8  ori 27, 28, 0
  01ef1ac  lwz 28, 40(28)
  01ef1b0  cmpwi 28, 0
  01ef1b4  bf 2, 0x1ef10c
  01ef1b8  cmpwi 27, 0
  01ef1bc  bt 2, 0x1ef200
  01ef1c0  lis 3, 31
  01ef1c4  addi 3, 3, -3964
  01ef1c8  lfs 1, 4(3)
  01ef1cc  fcmpu 0, 28, 1
  01ef1d0  bt 0, 0x1ef1f8
  01ef1d4  lhz 3, 166(27)
  01ef1d8  cmpwi 3, 1184
  01ef1dc  bf 2, 0x1ef200
  01ef1e0  lis 3, 31
  01ef1e4  addi 3, 3, -3964
  01ef1e8  lfs 1, 8(3)
  01ef1ec  fcmpu 0, 28, 1
  01ef1f0  cror 6, 1, 2
  01ef1f4  bt 6, 0x1ef200
  01ef1f8  ori 3, 27, 0
  01ef1fc  b 0x1ef204
  01ef200  ori 3, 29, 0
  01ef204  ld 0, 224(1)
  01ef208  mtlr 0
  01ef20c  lfd 28, 176(1)
  01ef210  lfd 29, 184(1)
  01ef214  lfd 30, 192(1)
  01ef218  lfd 31, 200(1)
  01ef21c  ld 27, 136(1)
  01ef220  ld 28, 144(1)
  01ef224  ld 29, 152(1)
  01ef228  ld 30, 160(1)
  01ef22c  ld 31, 168(1)
  01ef230  addi 1, 1, 208
  01ef234  blr

UpdateMoby_1181:   # 0x1ef268, 0x13f0 bytes
  01ef268  stdu 1, -576(1)
  01ef26c  mflr 0
  01ef270  std 0, 592(1)
  01ef274  stfd 28, 544(1)
  01ef278  stfd 29, 552(1)
  01ef27c  stfd 30, 560(1)
  01ef280  stfd 31, 568(1)
  01ef284  std 31, 536(1)
  01ef288  ori 31, 3, 0
  01ef28c  std 30, 528(1)
  01ef290  lbz 3, 32(31)
  01ef294  lwz 30, 120(31)
  01ef298  cmpwi 3, 1
  01ef29c  cmpwi 1, 3, -1
  01ef2a0  cmpwi 6, 3, 0
  01ef2a4  std 29, 520(1)
  01ef2a8  std 28, 512(1)
  01ef2ac  cmpwi 7, 3, 2
  01ef2b0  bt 1, 0x1ef2c0
  01ef2b4  bf 5, 0x1f0628
  01ef2b8  bf 25, 0x1ef2d0
  01ef2bc  b 0x1ef41c
  01ef2c0  bf 29, 0x1eff68
  01ef2c4  cmpwi 3, 3
  01ef2c8  bf 1, 0x1f0574
  01ef2cc  b 0x1f0628
  01ef2d0  lbz 3, 105(30)
  01ef2d4  extsb 3, 3
  01ef2d8  cmpwi 3, -1
  01ef2dc  bt 2, 0x1ef304
  01ef2e0  lis 4, 151
  01ef2e4  addic 4, 4, -16343
  01ef2e8  lbzx 3, 4, 3
  01ef2ec  cmpwi 3, 0
  01ef2f0  bt 2, 0x1ef304
  01ef2f4  ori 3, 31, 0
  01ef2f8  bl 0xefb38
  01ef2fc  nop
  01ef300  b 0x1f0628
  01ef304  lwz 3, 96(30)
  01ef308  cmpwi 3, -1
  01ef30c  bf 2, 0x1ef394
  01ef310  addic 5, 1, 192
  01ef314  ori 3, 31, 0
  01ef318  li 4, 0
  01ef31c  bl 0xf1114
  01ef320  nop
  01ef324  lfs 1, 192(1)
  01ef328  ori 3, 31, 0
  01ef32c  lfs 2, 200(1)
  01ef330  li 7, -1
  01ef334  stfs 1, 64(1)
  01ef338  stfs 2, 72(1)
  01ef33c  lfs 1, 196(1)
  01ef340  lfs 2, 204(1)
  01ef344  stfs 1, 68(1)
  01ef348  stfs 2, 76(1)
  01ef34c  ld 5, 64(1)
  01ef350  ld 6, 72(1)
  01ef354  bl 0x1ef090
  01ef358  cmpwi 3, 0
  01ef35c  bt 2, 0x1ef37c
  01ef360  lis 4, 164
  01ef364  lwz 4, -28512(4)
  01ef368  subc 3, 3, 4
  01ef36c  srawi 3, 3, 8
  01ef370  addze 3, 3
  01ef374  stw 3, 96(30)
  01ef378  b 0x1ef394
  01ef37c  lis 3, 101
  01ef380  lhz 4, 178(31)
  01ef384  addic 3, 3, 19704
  01ef388  extsh 4, 4
  01ef38c  bl 0x5cd098
  01ef390  nop
  01ef394  lwz 3, 100(30)
  01ef398  cmpwi 3, -1
  01ef39c  bf 2, 0x1ef410
  01ef3a0  lfs 1, 16(31)
  01ef3a4  ori 3, 31, 0
  01ef3a8  lfs 2, 24(31)
  01ef3ac  li 7, 0
  01ef3b0  stfs 1, 64(1)
  01ef3b4  stfs 2, 72(1)
  01ef3b8  lfs 1, 20(31)
  01ef3bc  lfs 2, 28(31)
  01ef3c0  stfs 1, 68(1)
  01ef3c4  stfs 2, 76(1)
  01ef3c8  ld 5, 64(1)
  01ef3cc  ld 6, 72(1)
  01ef3d0  bl 0x1ef090
  01ef3d4  cmpwi 3, 0
  01ef3d8  bt 2, 0x1ef3f8
  01ef3dc  lis 4, 164
  01ef3e0  lwz 4, -28512(4)
  01ef3e4  subc 3, 3, 4
  01ef3e8  srawi 3, 3, 8
  01ef3ec  addze 3, 3
  01ef3f0  stw 3, 100(30)
  01ef3f4  b 0x1ef410
  01ef3f8  lis 3, 101
  01ef3fc  lhz 4, 178(31)
  01ef400  addic 3, 3, 19752
  01ef404  extsh 4, 4
  01ef408  bl 0x5cd098
  01ef40c  nop
  01ef410  li 3, 1
  01ef414  stb 3, 32(31)
  01ef418  b 0x1f0628
  01ef41c  lbz 3, 49(31)
  01ef420  cmpwi 3, 0
  01ef424  bt 2, 0x1ef47c
  01ef428  lis 3, 149
  01ef42c  lfs 1, 20(31)
  01ef430  addic 3, 3, 5056
  01ef434  lfs 2, 16(31)
  01ef438  lfs 3, 324(3)
  01ef43c  lfs 4, 320(3)
  01ef440  fsubs 1, 1, 3
  01ef444  fsubs 2, 2, 4
  01ef448  lfs 3, 24(31)
  01ef44c  lfs 4, 328(3)
  01ef450  fsubs 3, 3, 4
  01ef454  lis 3, 31
  01ef458  fmuls 1, 1, 1
  01ef45c  addi 3, 3, -3528
  01ef460  fmadds 1, 2, 2, 1
  01ef464  lfs 2, 0(3)
  01ef468  fmadds 1, 3, 3, 1
  01ef46c  fsqrts 1, 1
  01ef470  fcmpu 0, 1, 2
  01ef474  cror 6, 0, 2
  01ef478  bt 6, 0x1ef4b4
  01ef47c  lis 3, 161
  01ef480  lwz 3, 1808(3)
  01ef484  lhz 4, 178(31)
  01ef488  srawi 5, 3, 3
  01ef48c  extsh 4, 4
  01ef490  addze 5, 5
  01ef494  srawi 6, 4, 3
  01ef498  sldi 5, 5, 3
  01ef49c  addze 6, 6
  01ef4a0  subc 3, 3, 5
  01ef4a4  sldi 5, 6, 3
  01ef4a8  subc 4, 4, 5
  01ef4ac  cmpw 3, 4
  01ef4b0  bf 2, 0x1f0628
  01ef4b4  li 29, 0
  01ef4b8  lwz 4, 96(30)
  01ef4bc  ori 5, 29, 0
  01ef4c0  cmpwi 4, -1
  01ef4c4  ori 3, 5, 0
  01ef4c8  bt 2, 0x1ef500
  01ef4cc  lis 6, 164
  01ef4d0  slwi 4, 4, 8
  01ef4d4  lwz 6, -28512(6)
  01ef4d8  addc 29, 6, 4
  01ef4dc  clrldi 29, 29, 32
  01ef4e0  cmpwi 29, 0
  01ef4e4  bt 2, 0x1ef4fc
  01ef4e8  lbz 4, 32(29)
  01ef4ec  cmpwi 4, 254
  01ef4f0  cmpwi 1, 4, 253
  01ef4f4  bt 2, 0x1ef4fc
  01ef4f8  bf 6, 0x1ef500
  01ef4fc  ori 29, 5, 0
  01ef500  lwz 4, 100(30)
  01ef504  cmpwi 4, -1
  01ef508  bt 2, 0x1ef55c
  01ef50c  lis 3, 164
  01ef510  slwi 4, 4, 8
  01ef514  lwz 3, -28512(3)
  01ef518  addc 3, 3, 4
  01ef51c  clrldi 3, 3, 32
  01ef520  cmpwi 3, 0
  01ef524  bt 2, 0x1ef53c
  01ef528  lbz 4, 32(3)
  01ef52c  cmpwi 4, 254
  01ef530  cmpwi 1, 4, 253
  01ef534  bt 2, 0x1ef53c
  01ef538  bf 6, 0x1ef548
  01ef53c  ori 3, 5, 0
  01ef540  stb 5, 104(30)
  01ef544  b 0x1ef55c
  01ef548  lwz 4, 120(3)
  01ef54c  lbz 4, 104(4)
  01ef550  cmpwi 4, 0
  01ef554  bf 2, 0x1ef55c
  01ef558  stb 5, 104(30)
  01ef55c  lbz 4, 104(30)
  01ef560  cmpwi 4, 0
  01ef564  bf 2, 0x1efed0
  01ef568  cmpwi 1, 3, 0
  01ef56c  cmpwi 29, 0
  01ef570  cror 2, 2, 6
  01ef574  bt 2, 0x1efed0
  01ef578  lhz 4, 166(3)
  01ef57c  cmpwi 1, 4, 1181
  01ef580  bf 6, 0x1efed0
  01ef584  bf 6, 0x1ef990
  01ef588  lwz 4, 120(3)
  01ef58c  lbz 4, 104(4)
  01ef590  cmpwi 4, 0
  01ef594  bt 2, 0x1ef990
  01ef598  lfs 1, 20(31)
  01ef59c  lfs 2, 20(29)
  01ef5a0  lfs 3, 16(31)
  01ef5a4  fsubs 1, 1, 2
  01ef5a8  lfs 2, 16(29)
  01ef5ac  fsubs 2, 3, 2
  01ef5b0  lis 3, 31
  01ef5b4  addi 3, 3, -3528
  01ef5b8  fmuls 1, 1, 1
  01ef5bc  lis 28, 115
  01ef5c0  addic 28, 28, 22784
  01ef5c4  fmadds 1, 2, 2, 1
  01ef5c8  lfs 2, 24(29)
  01ef5cc  lfs 3, 24(31)
  01ef5d0  lfs 31, 68(31)
  01ef5d4  fsubs 2, 2, 3
  01ef5d8  fsqrts 1, 1
  01ef5dc  stfs 2, 288(1)
  01ef5e0  fabs 4, 2
  01ef5e4  fabs 3, 1
  01ef5e8  stfs 1, 284(1)
  01ef5ec  lwz 4, 288(1)
  01ef5f0  rlwinm 4, 4, 3, 29, 29
  01ef5f4  fsubs 1, 3, 4
  01ef5f8  stfs 1, 292(1)
  01ef5fc  lwz 5, 284(1)
  01ef600  lfs 30, 4(3)
  01ef604  lfs 1, 284(1)
  01ef608  lfs 2, 288(1)
  01ef60c  lwz 3, 292(1)
  01ef610  fabs 5, 2
  01ef614  lfs 2, 292(1)
  01ef618  fabs 1, 1
  01ef61c  rlwimi 4, 3, 2, 30, 30
  01ef620  fsub 6, 2, 30
  01ef624  fsub 7, 2, 30
  01ef628  rlwimi 4, 5, 4, 28, 28
  01ef62c  ori 3, 28, 0
  01ef630  rlwimi 3, 4, 2, 26, 28
  01ef634  slwi 4, 4, 2
  01ef638  clrldi 3, 3, 32
  01ef63c  fsel 4, 6, 1, 4
  01ef640  lfsx 1, 28, 4
  01ef644  lfs 2, 4(3)
  01ef648  fsel 3, 7, 5, 3
  01ef64c  fcmpu 0, 4, 30
  01ef650  bt 1, 0x1ef65c
  01ef654  fmr 1, 30
  01ef658  b 0x1ef780
  01ef65c  fsubs 5, 3, 4
  01ef660  fadds 3, 3, 4
  01ef664  addic 3, 1, 16
  01ef668  li 7, 2
  01ef66c  addic 4, 3, 440
  01ef670  addic 5, 3, 456
  01ef674  mtctr 7
  01ef678  fdivs 3, 5, 3
  01ef67c  fmuls 4, 3, 3
  01ef680  stfs 3, 468(1)
  01ef684  stfs 3, 460(1)
  01ef688  stfs 3, 464(1)
  01ef68c  stfs 3, 456(1)
  01ef690  lfs 6, 468(1)
  01ef694  lfs 7, 460(1)
  01ef698  lfs 8, 464(1)
  01ef69c  fmuls 5, 4, 4
  01ef6a0  fmuls 7, 7, 4
  01ef6a4  fmuls 6, 6, 5
  01ef6a8  fmuls 3, 5, 5
  01ef6ac  fmuls 5, 8, 5
  01ef6b0  stfs 7, 460(1)
  01ef6b4  fmuls 4, 6, 4
  01ef6b8  stfs 5, 464(1)
  01ef6bc  stfs 4, 468(1)
  01ef6c0  lfs 4, 440(3)
  01ef6c4  fmuls 4, 4, 3
  01ef6c8  stfs 4, 456(3)
  01ef6cc  lfs 4, 4(4)
  01ef6d0  addic 3, 3, 8
  01ef6d4  addic 4, 4, 8
  01ef6d8  fmuls 4, 4, 3
  01ef6dc  stfs 4, 4(5)
  01ef6e0  addic 5, 5, 8
  01ef6e4  bdnz 0x1ef6c0
  01ef6e8  li 5, 4
  01ef6ec  ori 3, 1, 0
  01ef6f0  mtctr 5
  01ef6f4  lis 4, 115
  01ef6f8  addic 5, 3, 456
  01ef6fc  addic 4, 4, 22752
  01ef700  ori 6, 5, 0
  01ef704  lfs 3, 456(3)
  01ef708  lfs 4, 0(4)
  01ef70c  fmuls 3, 3, 4
  01ef710  lfs 4, 4(4)
  01ef714  addic 4, 4, 8
  01ef718  stfs 3, 456(3)
  01ef71c  lfs 3, 4(5)
  01ef720  addic 3, 3, 8
  01ef724  fmuls 3, 3, 4
  01ef728  stfs 3, 4(5)
  01ef72c  addic 5, 5, 8
  01ef730  bdnz 0x1ef704
  01ef734  fmr 3, 30
  01ef738  ori 3, 1, 0
  01ef73c  mtctr 7
  01ef740  lfs 4, 456(3)
  01ef744  fadds 3, 3, 4
  01ef748  addic 3, 3, 16
  01ef74c  lfs 4, 4(6)
  01ef750  lfs 5, 8(6)
  01ef754  lfs 6, 12(6)
  01ef758  addic 6, 6, 16
  01ef75c  fadds 3, 3, 4
  01ef760  fadds 3, 3, 5
  01ef764  fadds 3, 3, 6
  01ef768  bdnz 0x1ef740
  01ef76c  lis 3, 31
  01ef770  addi 3, 3, -3528
  01ef774  lfs 4, 8(3)
  01ef778  fadds 3, 3, 4
  01ef77c  fmadds 1, 3, 1, 2
  01ef780  fmr 29, 31
  01ef784  fneg 1, 1
  01ef788  fmr 2, 29
  01ef78c  bl 0x5025e0
  01ef790  nop
  01ef794  lis 3, 31
  01ef798  addi 3, 3, -3528
  01ef79c  lfs 31, 12(3)
  01ef7a0  fmuls 2, 1, 31
  01ef7a4  fmr 1, 29
  01ef7a8  bl 0x502578
  01ef7ac  nop
  01ef7b0  stfs 1, 68(31)
  01ef7b4  lfs 1, 16(29)
  01ef7b8  lfs 2, 16(31)
  01ef7bc  lfs 3, 20(29)
  01ef7c0  lfs 4, 20(31)
  01ef7c4  fsubs 1, 1, 2
  01ef7c8  fsubs 2, 3, 4
  01ef7cc  fabs 3, 1
  01ef7d0  fabs 4, 2
  01ef7d4  stfs 1, 272(1)
  01ef7d8  stfs 2, 276(1)
  01ef7dc  lfs 29, 72(31)
  01ef7e0  fsubs 1, 3, 4
  01ef7e4  stfs 1, 280(1)
  01ef7e8  lwz 3, 272(1)
  01ef7ec  lfs 1, 272(1)
  01ef7f0  lwz 4, 276(1)
  01ef7f4  lfs 2, 276(1)
  01ef7f8  fabs 1, 1
  01ef7fc  lwz 5, 280(1)
  01ef800  rlwinm 4, 4, 3, 29, 29
  01ef804  fabs 5, 2
  01ef808  lfs 2, 280(1)
  01ef80c  rlwimi 4, 5, 2, 30, 30
  01ef810  fsub 6, 2, 30
  01ef814  fsub 7, 2, 30
  01ef818  rlwimi 4, 3, 4, 28, 28
  01ef81c  ori 3, 28, 0
  01ef820  rlwimi 3, 4, 2, 26, 28
  01ef824  slwi 4, 4, 2
  01ef828  clrldi 3, 3, 32
  01ef82c  fsel 4, 6, 1, 4
  01ef830  lfsx 1, 28, 4
  01ef834  lfs 2, 4(3)
  01ef838  fsel 3, 7, 5, 3
  01ef83c  fcmpu 0, 4, 30
  01ef840  bt 1, 0x1ef848
  01ef844  b 0x1ef968
  01ef848  fsubs 5, 3, 4
  01ef84c  fadds 3, 3, 4
  01ef850  addic 3, 1, 16
  01ef854  li 7, 2
  01ef858  addic 5, 3, 424
  01ef85c  addic 4, 3, 408
  01ef860  mtctr 7
  01ef864  fdivs 3, 5, 3
  01ef868  fmuls 4, 3, 3
  01ef86c  stfs 3, 436(1)
  01ef870  stfs 3, 428(1)
  01ef874  stfs 3, 432(1)
  01ef878  stfs 3, 424(1)
  01ef87c  lfs 6, 436(1)
  01ef880  lfs 7, 428(1)
  01ef884  lfs 8, 432(1)
  01ef888  fmuls 5, 4, 4
  01ef88c  fmuls 7, 7, 4
  01ef890  fmuls 6, 6, 5
  01ef894  fmuls 3, 5, 5
  01ef898  fmuls 5, 8, 5
  01ef89c  stfs 7, 428(1)
  01ef8a0  fmuls 4, 6, 4
  01ef8a4  stfs 5, 432(1)
  01ef8a8  stfs 4, 436(1)
  01ef8ac  lfs 4, 408(3)
  01ef8b0  fmuls 4, 4, 3
  01ef8b4  stfs 4, 424(3)
  01ef8b8  lfs 4, 4(4)
  01ef8bc  addic 4, 4, 8
  01ef8c0  fmuls 4, 4, 3
  01ef8c4  addic 3, 3, 8
  01ef8c8  stfs 4, 4(5)
  01ef8cc  addic 5, 5, 8
  01ef8d0  bdnz 0x1ef8ac
  01ef8d4  li 5, 4
  01ef8d8  ori 3, 1, 0
  01ef8dc  mtctr 5
  01ef8e0  lis 4, 115
  01ef8e4  addic 5, 3, 424
  01ef8e8  addic 4, 4, 22752
  01ef8ec  ori 6, 5, 0
  01ef8f0  lfs 3, 424(3)
  01ef8f4  lfs 4, 0(4)
  01ef8f8  fmuls 3, 3, 4
  01ef8fc  lfs 4, 4(4)
  01ef900  addic 4, 4, 8
  01ef904  stfs 3, 424(3)
  01ef908  lfs 3, 4(5)
  01ef90c  addic 3, 3, 8
  01ef910  fmuls 3, 3, 4
  01ef914  stfs 3, 4(5)
  01ef918  addic 5, 5, 8
  01ef91c  bdnz 0x1ef8f0
  01ef920  ori 3, 1, 0
  01ef924  mtctr 7
  01ef928  lfs 3, 424(3)
  01ef92c  lfs 4, 4(6)
  01ef930  fadds 3, 30, 3
  01ef934  lfs 5, 8(6)
  01ef938  addic 3, 3, 16
  01ef93c  lfs 30, 12(6)
  01ef940  addic 6, 6, 16
  01ef944  fadds 3, 3, 4
  01ef948  fadds 3, 3, 5
  01ef94c  fadds 30, 3, 30
  01ef950  bdnz 0x1ef928
  01ef954  lis 3, 31
  01ef958  addi 3, 3, -3528
  01ef95c  lfs 3, 8(3)
  01ef960  fadds 30, 30, 3
  01ef964  fmadds 30, 30, 1, 2
  01ef968  fmr 1, 30
  01ef96c  fmr 2, 29
  01ef970  bl 0x5025e0
  01ef974  nop
  01ef978  fmuls 2, 1, 31
  01ef97c  fmr 1, 29
  01ef980  bl 0x502578
  01ef984  nop
  01ef988  stfs 1, 72(31)
  01ef98c  b 0x1efed8
  01ef990  lfs 1, 20(29)
  01ef994  lfs 4, 20(31)
  01ef998  lfs 2, 16(29)
  01ef99c  fsubs 6, 1, 4
  01ef9a0  lfs 3, 16(31)
  01ef9a4  lfs 1, 24(29)
  01ef9a8  lfs 5, 24(31)
  01ef9ac  fsubs 2, 2, 3
  01ef9b0  fsubs 7, 1, 5
  01ef9b4  lis 4, 31
  01ef9b8  fmuls 1, 6, 6
  01ef9bc  addi 4, 4, -3528
  01ef9c0  lfs 30, 16(4)
  01ef9c4  fmadds 1, 2, 2, 1
  01ef9c8  fmadds 1, 7, 7, 1
  01ef9cc  fsqrts 8, 1
  01ef9d0  lfs 1, 20(4)
  01ef9d4  lfs 31, 4(4)
  01ef9d8  fsubs 9, 8, 30
  01ef9dc  fsub 10, 31, 8
  01ef9e0  fsub 11, 31, 8
  01ef9e4  fsub 12, 31, 8
  01ef9e8  fsub 13, 8, 31
  01ef9ec  fsub 0, 8, 31
  01ef9f0  fmuls 9, 9, 1
  01ef9f4  fdivs 9, 9, 8
  01ef9f8  fsub 8, 8, 31
  01ef9fc  fmuls 7, 7, 9
  01efa00  fmuls 6, 6, 9
  01efa04  fmuls 9, 2, 9
  01efa08  fsel 2, 10, 31, 7
  01efa0c  fsel 10, 11, 31, 6
  01efa10  fsel 11, 12, 31, 9
  01efa14  fsel 2, 13, 2, 7
  01efa18  fsel 6, 0, 10, 6
  01efa1c  fsel 7, 8, 11, 9
  01efa20  bf 6, 0x1efab8
  01efa24  lbz 4, 32(3)
  01efa28  cmpwi 1, 4, 253
  01efa2c  cmpwi 4, 254
  01efa30  cror 2, 2, 6
  01efa34  bt 2, 0x1efab8
  01efa38  lfs 8, 20(3)
  01efa3c  lfs 9, 16(3)
  01efa40  fsubs 8, 8, 4
  01efa44  fsubs 9, 9, 3
  01efa48  lfs 10, 24(3)
  01efa4c  fsubs 10, 10, 5
  01efa50  fmuls 11, 8, 8
  01efa54  fmadds 11, 9, 9, 11
  01efa58  fmadds 11, 10, 10, 11
  01efa5c  fsqrts 11, 11
  01efa60  fsubs 12, 11, 30
  01efa64  fsub 13, 31, 11
  01efa68  fsub 0, 31, 11
  01efa6c  fsub 30, 11, 31
  01efa70  fsub 29, 11, 31
  01efa74  fmuls 1, 12, 1
  01efa78  fsub 12, 31, 11
  01efa7c  fdivs 1, 1, 11
  01efa80  fsub 11, 11, 31
  01efa84  fmuls 10, 10, 1
  01efa88  fmuls 8, 8, 1
  01efa8c  fmuls 1, 9, 1
  01efa90  fsel 9, 12, 31, 10
  01efa94  fsel 12, 13, 31, 8
  01efa98  fsel 13, 0, 31, 1
  01efa9c  fsel 9, 30, 9, 10
  01efaa0  fsel 8, 29, 12, 8
  01efaa4  fsel 30, 11, 13, 1
  01efaa8  fadds 2, 2, 9
  01efaac  fadds 1, 6, 8
  01efab0  fadds 30, 7, 30
  01efab4  b 0x1efac0
  01efab8  fmr 30, 7
  01efabc  fmr 1, 6
  01efac0  lis 3, 31
  01efac4  lis 4, 114
  01efac8  fadds 3, 3, 30
  01efacc  addi 3, 3, -3528
  01efad0  fadds 1, 4, 1
  01efad4  lfs 6, 24(3)
  01efad8  lfs 7, -3048(4)
  01efadc  fnmsubs 2, 7, 6, 2
  01efae0  stfs 3, 16(31)
  01efae4  stfs 1, 20(31)
  01efae8  lis 28, 115
  01efaec  fadds 2, 5, 2
  01efaf0  addic 28, 28, 22784
  01efaf4  stfs 2, 24(31)
  01efaf8  lfs 4, 20(29)
  01efafc  lfs 5, 16(29)
  01efb00  fsubs 1, 1, 4
  01efb04  fsubs 3, 3, 5
  01efb08  fmuls 1, 1, 1
  01efb0c  fmadds 1, 3, 3, 1
  01efb10  lfs 3, 24(29)
  01efb14  lfs 30, 68(31)
  01efb18  fsubs 2, 3, 2
  01efb1c  fsqrts 1, 1
  01efb20  stfs 2, 264(1)
  01efb24  fabs 4, 2
  01efb28  fabs 3, 1
  01efb2c  stfs 1, 260(1)
  01efb30  lwz 3, 264(1)
  01efb34  lfs 2, 264(1)
  01efb38  rlwinm 3, 3, 3, 29, 29
  01efb3c  fabs 5, 2
  01efb40  fsubs 1, 3, 4
  01efb44  stfs 1, 268(1)
  01efb48  lwz 4, 260(1)
  01efb4c  lfs 1, 260(1)
  01efb50  lwz 5, 268(1)
  01efb54  lfs 2, 268(1)
  01efb58  fabs 1, 1
  01efb5c  rlwimi 3, 5, 2, 30, 30
  01efb60  fsub 6, 2, 31
  01efb64  fsub 7, 2, 31
  01efb68  rlwimi 3, 4, 4, 28, 28
  01efb6c  ori 4, 28, 0
  01efb70  rlwimi 4, 3, 2, 26, 28
  01efb74  slwi 3, 3, 2
  01efb78  clrldi 4, 4, 32
  01efb7c  fsel 4, 6, 1, 4
  01efb80  lfsx 1, 28, 3
  01efb84  lfs 2, 4(4)
  01efb88  fsel 3, 7, 5, 3
  01efb8c  fcmpu 0, 4, 31
  01efb90  bt 1, 0x1efb9c
  01efb94  fmr 1, 31
  01efb98  b 0x1efcc0
  01efb9c  fsubs 5, 3, 4
  01efba0  fadds 3, 3, 4
  01efba4  addic 3, 1, 16
  01efba8  li 7, 2
  01efbac  addic 4, 3, 376
  01efbb0  addic 5, 3, 392
  01efbb4  mtctr 7
  01efbb8  fdivs 3, 5, 3
  01efbbc  fmuls 4, 3, 3
  01efbc0  stfs 3, 404(1)
  01efbc4  stfs 3, 396(1)
  01efbc8  stfs 3, 400(1)
  01efbcc  stfs 3, 392(1)
  01efbd0  lfs 6, 404(1)
  01efbd4  lfs 7, 396(1)
  01efbd8  lfs 8, 400(1)
  01efbdc  fmuls 5, 4, 4
  01efbe0  fmuls 7, 7, 4
  01efbe4  fmuls 6, 6, 5
  01efbe8  fmuls 3, 5, 5
  01efbec  fmuls 5, 8, 5
  01efbf0  stfs 7, 396(1)
  01efbf4  fmuls 4, 6, 4
  01efbf8  stfs 5, 400(1)
  01efbfc  stfs 4, 404(1)
  01efc00  lfs 4, 376(3)
  01efc04  fmuls 4, 4, 3
  01efc08  stfs 4, 392(3)
  01efc0c  lfs 4, 4(4)
  01efc10  addic 3, 3, 8
  01efc14  addic 4, 4, 8
  01efc18  fmuls 4, 4, 3
  01efc1c  stfs 4, 4(5)
  01efc20  addic 5, 5, 8
  01efc24  bdnz 0x1efc00
  01efc28  li 5, 4
  01efc2c  ori 3, 1, 0
  01efc30  mtctr 5
  01efc34  lis 4, 115
  01efc38  addic 5, 3, 392
  01efc3c  addic 4, 4, 22752
  01efc40  ori 6, 5, 0
  01efc44  lfs 3, 392(3)
  01efc48  lfs 4, 0(4)
  01efc4c  fmuls 3, 3, 4
  01efc50  lfs 4, 4(4)
  01efc54  addic 4, 4, 8
  01efc58  stfs 3, 392(3)
  01efc5c  lfs 3, 4(5)
  01efc60  addic 3, 3, 8
  01efc64  fmuls 3, 3, 4
  01efc68  stfs 3, 4(5)
  01efc6c  addic 5, 5, 8
  01efc70  bdnz 0x1efc44
  01efc74  fmr 3, 31
  01efc78  ori 3, 1, 0
  01efc7c  mtctr 7
  01efc80  lfs 4, 392(3)
  01efc84  fadds 3, 3, 4
  01efc88  addic 3, 3, 16
  01efc8c  lfs 4, 4(6)
  01efc90  lfs 5, 8(6)
  01efc94  lfs 6, 12(6)
  01efc98  addic 6, 6, 16
  01efc9c  fadds 3, 3, 4
  01efca0  fadds 3, 3, 5
  01efca4  fadds 3, 3, 6
  01efca8  bdnz 0x1efc80
  01efcac  lis 3, 31
  01efcb0  addi 3, 3, -3528
  01efcb4  lfs 4, 8(3)
  01efcb8  fadds 3, 3, 4
  01efcbc  fmadds 1, 3, 1, 2
  01efcc0  fmr 29, 30
  01efcc4  fneg 1, 1
  01efcc8  fmr 2, 29
  01efccc  bl 0x5025e0
  01efcd0  nop
  01efcd4  lis 3, 31
  01efcd8  addi 3, 3, -3528
  01efcdc  lfs 30, 12(3)
  01efce0  fmuls 2, 1, 30
  01efce4  fmr 1, 29
  01efce8  bl 0x502578
  01efcec  nop
  01efcf0  stfs 1, 68(31)
  01efcf4  lfs 1, 16(29)
  01efcf8  lfs 2, 16(31)
  01efcfc  lfs 3, 20(29)
  01efd00  lfs 4, 20(31)
  01efd04  fsubs 1, 1, 2
  01efd08  fsubs 2, 3, 4
  01efd0c  fabs 3, 1
  01efd10  fabs 4, 2
  01efd14  stfs 1, 248(1)
  01efd18  stfs 2, 252(1)
  01efd1c  lfs 29, 72(31)
  01efd20  fsubs 1, 3, 4
  01efd24  stfs 1, 256(1)
  01efd28  lwz 3, 248(1)
  01efd2c  lfs 1, 248(1)
  01efd30  lwz 4, 252(1)
  01efd34  lfs 2, 252(1)
  01efd38  fabs 1, 1
  01efd3c  lwz 5, 256(1)
  01efd40  rlwinm 4, 4, 3, 29, 29
  01efd44  fabs 5, 2
  01efd48  lfs 2, 256(1)
  01efd4c  rlwimi 4, 5, 2, 30, 30
  01efd50  fsub 6, 2, 31
  01efd54  fsub 7, 2, 31
  01efd58  rlwimi 4, 3, 4, 28, 28
  01efd5c  ori 3, 28, 0
  01efd60  rlwimi 3, 4, 2, 26, 28
  01efd64  slwi 4, 4, 2
  01efd68  clrldi 3, 3, 32
  01efd6c  fsel 4, 6, 1, 4
  01efd70  lfsx 1, 28, 4
  01efd74  lfs 2, 4(3)
  01efd78  fsel 3, 7, 5, 3
  01efd7c  fcmpu 0, 4, 31
  01efd80  bt 1, 0x1efd88
  01efd84  b 0x1efea8
  01efd88  fsubs 5, 3, 4
  01efd8c  fadds 3, 3, 4
  01efd90  addic 3, 1, 16
  01efd94  li 7, 2
  01efd98  addic 5, 3, 360
  01efd9c  addic 4, 3, 344
  01efda0  mtctr 7
  01efda4  fdivs 3, 5, 3
  01efda8  fmuls 4, 3, 3
  01efdac  stfs 3, 372(1)
  01efdb0  stfs 3, 364(1)
  01efdb4  stfs 3, 368(1)
  01efdb8  stfs 3, 360(1)
  01efdbc  lfs 6, 372(1)
  01efdc0  lfs 7, 364(1)
  01efdc4  lfs 8, 368(1)
  01efdc8  fmuls 5, 4, 4
  01efdcc  fmuls 7, 7, 4
  01efdd0  fmuls 6, 6, 5
  01efdd4  fmuls 3, 5, 5
  01efdd8  fmuls 5, 8, 5
  01efddc  stfs 7, 364(1)
  01efde0  fmuls 4, 6, 4
  01efde4  stfs 5, 368(1)
  01efde8  stfs 4, 372(1)
  01efdec  lfs 4, 344(3)
  01efdf0  fmuls 4, 4, 3
  01efdf4  stfs 4, 360(3)
  01efdf8  lfs 4, 4(4)
  01efdfc  addic 4, 4, 8
  01efe00  fmuls 4, 4, 3
  01efe04  addic 3, 3, 8
  01efe08  stfs 4, 4(5)
  01efe0c  addic 5, 5, 8
  01efe10  bdnz 0x1efdec
  01efe14  li 5, 4
  01efe18  ori 3, 1, 0
  01efe1c  mtctr 5
  01efe20  lis 4, 115
  01efe24  addic 5, 3, 360
  01efe28  addic 4, 4, 22752
  01efe2c  ori 6, 5, 0
  01efe30  lfs 3, 360(3)
  01efe34  lfs 4, 0(4)
  01efe38  fmuls 3, 3, 4
  01efe3c  lfs 4, 4(4)
  01efe40  addic 4, 4, 8
  01efe44  stfs 3, 360(3)
  01efe48  lfs 3, 4(5)
  01efe4c  addic 3, 3, 8
  01efe50  fmuls 3, 3, 4
  01efe54  stfs 3, 4(5)
  01efe58  addic 5, 5, 8
  01efe5c  bdnz 0x1efe30
  01efe60  ori 3, 1, 0
  01efe64  mtctr 7
  01efe68  lfs 3, 360(3)
  01efe6c  lfs 4, 4(6)
  01efe70  fadds 3, 31, 3
  01efe74  lfs 5, 8(6)
  01efe78  addic 3, 3, 16
  01efe7c  lfs 31, 12(6)
  01efe80  addic 6, 6, 16
  01efe84  fadds 3, 3, 4
  01efe88  fadds 3, 3, 5
  01efe8c  fadds 31, 3, 31
  01efe90  bdnz 0x1efe68
  01efe94  lis 3, 31
  01efe98  addi 3, 3, -3528
  01efe9c  lfs 3, 8(3)
  01efea0  fadds 31, 31, 3
  01efea4  fmadds 31, 31, 1, 2
  01efea8  fmr 1, 31
  01efeac  fmr 2, 29
  01efeb0  bl 0x5025e0
  01efeb4  nop
  01efeb8  fmuls 2, 1, 30
  01efebc  fmr 1, 29
  01efec0  bl 0x502578
  01efec4  nop
  01efec8  stfs 1, 72(31)
  01efecc  b 0x1efed8
  01efed0  li 3, 1
  01efed4  stb 3, 104(30)
  01efed8  lbz 3, 188(31)
  01efedc  cmpwi 3, 1
  01efee0  bf 2, 0x1f0628
  01efee4  lwz 3, 108(30)
  01efee8  cmpwi 3, -1
  01efeec  bt 2, 0x1eff18
  01efef0  lis 4, 164
  01efef4  slwi 3, 3, 8
  01efef8  lwz 4, -28512(4)
  01efefc  addc 3, 4, 3
  01eff00  clrldi 3, 3, 32
  01eff04  lbz 4, 32(3)
  01eff08  cmpwi 4, 1
  01eff0c  bf 2, 0x1eff18
  01eff10  li 4, 1
  01eff14  stb 4, 188(3)
  01eff18  lis 3, 31
  01eff1c  li 4, 28
  01eff20  vspltisw 2, -1
  01eff24  addi 3, 3, -3528
  01eff28  lis 5, 114
  01eff2c  li 6, -3056
  01eff30  vslw 2, 2, 2
  01eff34  <unknown>
  01eff38  li 3, 106
  01eff3c  vspltw 3, 3, 0
  01eff40  li 4, 255
  01eff44  <unknown>
  01eff48  li 5, 2
  01eff4c  vmaddfp 2, 4, 3, 2
  01eff50  vctsxs 2, 2, 0
  01eff54  vsplth 2, 2, 1
  01eff58  stvehx 2, 3, 30
  01eff5c  stb 4, 48(31)
  01eff60  stb 5, 32(31)
  01eff64  b 0x1f0628
  01eff68  li 3, 255
  01eff6c  stb 3, 48(31)
  01eff70  lwz 29, 96(30)
  01eff74  cmpwi 29, -1
  01eff78  bt 2, 0x1f0484
  01eff7c  lis 3, 164
  01eff80  slwi 4, 29, 8
  01eff84  lwz 3, -28512(3)
  01eff88  addc 29, 3, 4
  01eff8c  clrldi 29, 29, 32
  01eff90  cmpwi 29, 0
  01eff94  bt 2, 0x1f0484
  01eff98  lbz 3, 32(29)
  01eff9c  cmpwi 3, 254
  01effa0  cmpwi 1, 3, 253
  01effa4  bt 2, 0x1f0484
  01effa8  bt 6, 0x1f0484
  01effac  lfs 1, 20(29)
  01effb0  lfs 2, 20(31)
  01effb4  lfs 3, 16(29)
  01effb8  fsubs 1, 1, 2
  01effbc  lfs 2, 16(31)
  01effc0  fsubs 2, 3, 2
  01effc4  lfs 3, 24(29)
  01effc8  lfs 4, 24(31)
  01effcc  fsubs 3, 3, 4
  01effd0  fmuls 4, 1, 1
  01effd4  lis 3, 31
  01effd8  addi 28, 3, -3528
  01effdc  lis 3, 114
  01effe0  fmadds 4, 2, 2, 4
  01effe4  lfs 5, 16(28)
  01effe8  lfs 30, 4(28)
  01effec  lfs 6, 28(28)
  01efff0  lfs 7, -3056(3)
  01efff4  fmadds 4, 3, 3, 4
  01efff8  fmuls 6, 7, 6
  01efffc  lhz 3, 106(30)
  01f0000  extsh 3, 3
  01f0004  fsqrts 4, 4
  01f0008  fctiwz 6, 6
  01f000c  stfd 6, 488(1)
  01f0010  lwz 4, 492(1)
  01f0014  subc 3, 4, 3
  01f0018  addic 3, 3, 3
  01f001c  extsw 3, 3
  01f0020  fsubs 5, 4, 5
  01f0024  fsub 6, 30, 4
  01f0028  fsub 7, 30, 4
  01f002c  fsub 8, 30, 4
  01f0030  fsub 9, 4, 30
  01f0034  fsub 10, 4, 30
  01f0038  fdivs 5, 5, 4
  01f003c  fsub 4, 4, 30
  01f0040  fmuls 3, 3, 5
  01f0044  fmuls 1, 1, 5
  01f0048  fmuls 2, 2, 5
  01f004c  fsel 5, 6, 30, 3
  01f0050  fsel 6, 7, 30, 1
  01f0054  fsel 7, 8, 30, 2
  01f0058  fsel 31, 9, 5, 3
  01f005c  fsel 29, 10, 6, 1
  01f0060  fsel 28, 4, 7, 2
  01f0064  bl 0x502730
  01f0068  nop
  01f006c  lis 3, 114
  01f0070  lfs 2, 24(28)
  01f0074  lfs 3, 32(28)
  01f0078  lfs 4, -3048(3)
  01f007c  lfs 5, 16(31)
  01f0080  fmuls 2, 4, 2
  01f0084  lfs 4, 20(31)
  01f0088  fadds 5, 5, 28
  01f008c  lfs 6, 24(31)
  01f0090  fadds 4, 4, 29
  01f0094  fmuls 2, 2, 3
  01f0098  stfs 5, 16(31)
  01f009c  stfs 4, 20(31)
  01f00a0  fnmsubs 1, 2, 1, 31
  01f00a4  lis 28, 115
  01f00a8  addic 28, 28, 22784
  01f00ac  fadds 1, 6, 1
  01f00b0  stfs 1, 24(31)
  01f00b4  lfs 2, 20(29)
  01f00b8  lfs 3, 16(29)
  01f00bc  fsubs 2, 4, 2
  01f00c0  fsubs 3, 5, 3
  01f00c4  fmuls 2, 2, 2
  01f00c8  fmadds 2, 3, 3, 2
  01f00cc  lfs 3, 24(29)
  01f00d0  lfs 31, 68(31)
  01f00d4  fsubs 1, 3, 1
  01f00d8  fsqrts 2, 2
  01f00dc  stfs 1, 240(1)
  01f00e0  fabs 4, 1
  01f00e4  fabs 3, 2
  01f00e8  stfs 2, 236(1)
  01f00ec  lwz 3, 240(1)
  01f00f0  rlwinm 3, 3, 3, 29, 29
  01f00f4  fsubs 1, 3, 4
  01f00f8  stfs 1, 244(1)
  01f00fc  lwz 4, 236(1)
  01f0100  lfs 1, 236(1)
  01f0104  lfs 2, 240(1)
  01f0108  lwz 5, 244(1)
  01f010c  lfs 5, 244(1)
  01f0110  fabs 1, 1
  01f0114  rlwimi 3, 5, 2, 30, 30
  01f0118  fabs 2, 2
  01f011c  fsub 6, 5, 30
  01f0120  fsub 5, 5, 30
  01f0124  rlwimi 3, 4, 4, 28, 28
  01f0128  ori 4, 28, 0
  01f012c  rlwimi 4, 3, 2, 26, 28
  01f0130  slwi 3, 3, 2
  01f0134  clrldi 4, 4, 32
  01f0138  fsel 4, 6, 1, 4
  01f013c  lfsx 1, 28, 3
  01f0140  fsel 3, 5, 2, 3
  01f0144  lfs 2, 4(4)
  01f0148  fcmpu 0, 4, 30
  01f014c  bt 1, 0x1f0158
  01f0150  fmr 1, 30
  01f0154  b 0x1f027c
  01f0158  fsubs 5, 3, 4
  01f015c  fadds 3, 3, 4
  01f0160  addic 3, 1, 16
  01f0164  li 7, 2
  01f0168  addic 5, 3, 328
  01f016c  addic 4, 3, 312
  01f0170  mtctr 7
  01f0174  fdivs 3, 5, 3
  01f0178  fmuls 4, 3, 3
  01f017c  stfs 3, 340(1)
  01f0180  stfs 3, 332(1)
  01f0184  stfs 3, 336(1)
  01f0188  stfs 3, 328(1)
  01f018c  lfs 6, 340(1)
  01f0190  lfs 7, 332(1)
  01f0194  lfs 8, 336(1)
  01f0198  fmuls 5, 4, 4
  01f019c  fmuls 7, 7, 4
  01f01a0  fmuls 6, 6, 5
  01f01a4  fmuls 3, 5, 5
  01f01a8  fmuls 5, 8, 5
  01f01ac  stfs 7, 332(1)
  01f01b0  fmuls 4, 6, 4
  01f01b4  stfs 5, 336(1)
  01f01b8  stfs 4, 340(1)
  01f01bc  lfs 4, 312(3)
  01f01c0  fmuls 4, 4, 3
  01f01c4  stfs 4, 328(3)
  01f01c8  lfs 4, 4(4)
  01f01cc  addic 4, 4, 8
  01f01d0  fmuls 4, 4, 3
  01f01d4  addic 3, 3, 8
  01f01d8  stfs 4, 4(5)
  01f01dc  addic 5, 5, 8
  01f01e0  bdnz 0x1f01bc
  01f01e4  li 5, 4
  01f01e8  ori 3, 1, 0
  01f01ec  mtctr 5
  01f01f0  lis 4, 115
  01f01f4  addic 5, 3, 328
  01f01f8  addic 4, 4, 22752
  01f01fc  ori 6, 5, 0
  01f0200  lfs 3, 328(3)
  01f0204  lfs 4, 0(4)
  01f0208  fmuls 3, 3, 4
  01f020c  lfs 4, 4(4)
  01f0210  addic 4, 4, 8
  01f0214  stfs 3, 328(3)
  01f0218  lfs 3, 4(5)
  01f021c  addic 3, 3, 8
  01f0220  fmuls 3, 3, 4
  01f0224  stfs 3, 4(5)
  01f0228  addic 5, 5, 8
  01f022c  bdnz 0x1f0200
  01f0230  ori 3, 1, 0
  01f0234  fmr 3, 30
  01f0238  mtctr 7
  01f023c  lfs 4, 328(3)
  01f0240  fadds 3, 3, 4
  01f0244  lfs 4, 4(6)
  01f0248  addic 3, 3, 16
  01f024c  lfs 5, 8(6)
  01f0250  lfs 6, 12(6)
  01f0254  addic 6, 6, 16
  01f0258  fadds 3, 3, 4
  01f025c  fadds 3, 3, 5
  01f0260  fadds 3, 3, 6
  01f0264  bdnz 0x1f023c
  01f0268  lis 3, 31
  01f026c  addi 3, 3, -3528
  01f0270  lfs 4, 8(3)
  01f0274  fadds 3, 3, 4
  01f0278  fmadds 1, 3, 1, 2
  01f027c  fneg 1, 1
  01f0280  fmr 2, 31
  01f0284  bl 0x5025e0
  01f0288  nop
  01f028c  lis 3, 31
  01f0290  addi 3, 3, -3528
  01f0294  lfs 29, 36(3)
  01f0298  fmuls 2, 1, 29
  01f029c  fmr 1, 31
  01f02a0  bl 0x502578
  01f02a4  nop
  01f02a8  stfs 1, 68(31)
  01f02ac  lfs 1, 16(29)
  01f02b0  lfs 2, 16(31)
  01f02b4  lfs 3, 20(29)
  01f02b8  lfs 4, 20(31)
  01f02bc  fsubs 1, 1, 2
  01f02c0  fsubs 2, 3, 4
  01f02c4  fabs 3, 1
  01f02c8  fabs 4, 2
  01f02cc  stfs 1, 224(1)
  01f02d0  stfs 2, 228(1)
  01f02d4  lfs 31, 72(31)
  01f02d8  fsubs 1, 3, 4
  01f02dc  stfs 1, 232(1)
  01f02e0  lwz 3, 224(1)
  01f02e4  lfs 1, 224(1)
  01f02e8  lwz 4, 228(1)
  01f02ec  lfs 2, 228(1)
  01f02f0  fabs 1, 1
  01f02f4  lwz 5, 232(1)
  01f02f8  rlwinm 4, 4, 3, 29, 29
  01f02fc  fabs 5, 2
  01f0300  lfs 2, 232(1)
  01f0304  rlwimi 4, 5, 2, 30, 30
  01f0308  fsub 6, 2, 30
  01f030c  fsub 7, 2, 30
  01f0310  rlwimi 4, 3, 4, 28, 28
  01f0314  ori 3, 28, 0
  01f0318  rlwimi 3, 4, 2, 26, 28
  01f031c  slwi 4, 4, 2
  01f0320  clrldi 3, 3, 32
  01f0324  fsel 4, 6, 1, 4
  01f0328  lfsx 1, 28, 4
  01f032c  lfs 2, 4(3)
  01f0330  fsel 3, 7, 5, 3
  01f0334  fcmpu 0, 4, 30
  01f0338  bt 1, 0x1f0340
  01f033c  b 0x1f0460
  01f0340  fsubs 5, 3, 4
  01f0344  fadds 3, 3, 4
  01f0348  addic 3, 1, 16
  01f034c  li 6, 2
  01f0350  addic 5, 3, 296
  01f0354  addic 4, 3, 280
  01f0358  mtctr 6
  01f035c  fdivs 3, 5, 3
  01f0360  fmuls 4, 3, 3
  01f0364  stfs 3, 308(1)
  01f0368  stfs 3, 300(1)
  01f036c  stfs 3, 304(1)
  01f0370  stfs 3, 296(1)
  01f0374  lfs 6, 308(1)
  01f0378  lfs 7, 300(1)
  01f037c  lfs 8, 304(1)
  01f0380  fmuls 5, 4, 4
  01f0384  fmuls 7, 7, 4
  01f0388  fmuls 6, 6, 5
  01f038c  fmuls 3, 5, 5
  01f0390  fmuls 5, 8, 5
  01f0394  stfs 7, 300(1)
  01f0398  fmuls 4, 6, 4
  01f039c  stfs 5, 304(1)
  01f03a0  stfs 4, 308(1)
  01f03a4  lfs 4, 280(3)
  01f03a8  fmuls 4, 4, 3
  01f03ac  stfs 4, 296(3)
  01f03b0  lfs 4, 4(4)
  01f03b4  addic 4, 4, 8
  01f03b8  fmuls 4, 4, 3
  01f03bc  addic 3, 3, 8
  01f03c0  stfs 4, 4(5)
  01f03c4  addic 5, 5, 8
  01f03c8  bdnz 0x1f03a4
  01f03cc  li 5, 4
  01f03d0  ori 3, 1, 0
  01f03d4  mtctr 5
  01f03d8  lis 4, 115
  01f03dc  addic 5, 3, 296
  01f03e0  addic 4, 4, 22752
  01f03e4  ori 7, 5, 0
  01f03e8  lfs 3, 296(3)
  01f03ec  lfs 4, 0(4)
  01f03f0  fmuls 3, 3, 4
  01f03f4  lfs 4, 4(4)
  01f03f8  addic 4, 4, 8
  01f03fc  stfs 3, 296(3)
  01f0400  lfs 3, 4(5)
  01f0404  addic 3, 3, 8
  01f0408  fmuls 3, 3, 4
  01f040c  stfs 3, 4(5)
  01f0410  addic 5, 5, 8
  01f0414  bdnz 0x1f03e8
  01f0418  ori 3, 1, 0
  01f041c  mtctr 6
  01f0420  lfs 3, 296(3)
  01f0424  lfs 4, 4(7)
  01f0428  fadds 3, 30, 3
  01f042c  lfs 5, 8(7)
  01f0430  addic 3, 3, 16
  01f0434  lfs 30, 12(7)
  01f0438  addic 7, 7, 16
  01f043c  fadds 3, 3, 4
  01f0440  fadds 3, 3, 5
  01f0444  fadds 30, 3, 30
  01f0448  bdnz 0x1f0420
  01f044c  lis 3, 31
  01f0450  addi 3, 3, -3528
  01f0454  lfs 3, 8(3)
  01f0458  fadds 30, 30, 3
  01f045c  fmadds 30, 30, 1, 2
  01f0460  fmr 1, 30
  01f0464  fmr 2, 31
  01f0468  bl 0x5025e0
  01f046c  nop
  01f0470  fmuls 2, 1, 29
  01f0474  fmr 1, 31
  01f0478  bl 0x502578
  01f047c  nop
  01f0480  stfs 1, 72(31)
  01f0484  addic 3, 30, 106
  01f0488  bl 0x4fffb4
  01f048c  nop
  01f0490  cmpwi 3, 0
  01f0494  bt 2, 0x1f0628
  01f0498  lwz 3, 96(30)
  01f049c  cmpwi 3, -1
  01f04a0  bt 2, 0x1f0500
  01f04a4  lis 4, 164
  01f04a8  slwi 3, 3, 8
  01f04ac  lwz 4, -28512(4)
  01f04b0  addc 3, 4, 3
  01f04b4  clrldi 3, 3, 32
  01f04b8  cmpwi 3, 0
  01f04bc  bt 2, 0x1f0500
  01f04c0  lbz 4, 32(3)
  01f04c4  cmpwi 1, 4, 253
  01f04c8  cmpwi 4, 254
  01f04cc  cror 2, 2, 6
  01f04d0  bt 2, 0x1f0500
  01f04d4  lhz 4, 166(3)
  01f04d8  cmpwi 1, 4, 1181
  01f04dc  cmpwi 4, 1172
  01f04e0  cror 2, 2, 6
  01f04e4  bt 2, 0x1f04f0
  01f04e8  cmpwi 4, 1184
  01f04ec  bf 2, 0x1f0500
  01f04f0  li 4, 255
  01f04f4  li 5, 1
  01f04f8  stb 4, 48(3)
  01f04fc  stb 5, 188(3)
  01f0500  lwz 30, 100(30)
  01f0504  cmpwi 30, -1
  01f0508  bt 2, 0x1f0568
  01f050c  lis 3, 164
  01f0510  slwi 4, 30, 8
  01f0514  lwz 3, -28512(3)
  01f0518  addc 30, 3, 4
  01f051c  clrldi 30, 30, 32
  01f0520  cmpwi 30, 0
  01f0524  bt 2, 0x1f0568
  01f0528  lbz 3, 32(30)
  01f052c  cmpwi 1, 3, 253
  01f0530  cmpwi 3, 254
  01f0534  cror 2, 2, 6
  01f0538  bt 2, 0x1f0568
  01f053c  lhz 3, 166(30)
  01f0540  cmpwi 1, 3, 1181
  01f0544  cmpwi 3, 1172
  01f0548  cror 2, 2, 6
  01f054c  bt 2, 0x1f0558
  01f0550  cmpwi 3, 1184
  01f0554  bf 2, 0x1f0568
  01f0558  li 3, 255
  01f055c  li 4, 1
  01f0560  stb 3, 48(30)
  01f0564  stb 4, 188(30)
  01f0568  li 3, 3
  01f056c  stb 3, 32(31)
  01f0570  b 0x1f0628
  01f0574  lis 3, 149
  01f0578  lfs 1, 16(31)
  01f057c  lfs 2, 20(31)
  01f0580  lis 4, 31
  01f0584  addic 3, 3, 5056
  01f0588  addi 5, 4, -3528
  01f058c  li 6, 0
  01f0590  li 7, 1
  01f0594  li 11, -1
  01f0598  lfs 3, 320(3)
  01f059c  lfs 4, 324(3)
  01f05a0  addic 4, 1, 208
  01f05a4  fsubs 1, 3, 1
  01f05a8  li 8, 10
  01f05ac  lfs 3, 328(3)
  01f05b0  fsubs 2, 4, 2
  01f05b4  lfs 4, 24(31)
  01f05b8  li 9, 5
  01f05bc  li 10, 8
  01f05c0  fsubs 3, 3, 4
  01f05c4  lfs 4, 332(3)
  01f05c8  ori 3, 31, 0
  01f05cc  stfs 4, 220(1)
  01f05d0  stfs 1, 208(1)
  01f05d4  stfs 2, 212(1)
  01f05d8  stfs 3, 216(1)
  01f05dc  lfs 1, 4(5)
  01f05e0  lfs 4, 40(5)
  01f05e4  lfs 5, 44(5)
  01f05e8  fmr 2, 1
  01f05ec  lfs 3, 32(5)
  01f05f0  fmr 6, 4
  01f05f4  std 6, 144(1)
  01f05f8  li 5, 0
  01f05fc  std 6, 160(1)
  01f0600  fmr 7, 5
  01f0604  std 7, 168(1)
  01f0608  std 11, 176(1)
  01f060c  std 6, 184(1)
  01f0610  bl 0x10e030
  01f0614  nop
  01f0618  ori 3, 31, 0
  01f061c  bl 0xefb38
  01f0620  nop
  01f0624  b 0x1f0628
  01f0628  ld 0, 592(1)
  01f062c  mtlr 0
  01f0630  lfd 28, 544(1)
  01f0634  lfd 29, 552(1)
  01f0638  lfd 30, 560(1)
  01f063c  lfd 31, 568(1)
  01f0640  ld 28, 512(1)
  01f0644  ld 29, 520(1)
  01f0648  ld 30, 528(1)
  01f064c  ld 31, 536(1)
  01f0650  addi 1, 1, 576
  01f0654  blr
