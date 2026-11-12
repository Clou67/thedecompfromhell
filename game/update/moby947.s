# game/update/moby947.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_947:   # 0x4c70d0, 0x3d4 bytes
  04c70d0  stdu 1, -192(1)
  04c70d4  mflr 0
  04c70d8  std 0, 208(1)
  04c70dc  stfd 30, 176(1)
  04c70e0  stfd 31, 184(1)
  04c70e4  std 30, 160(1)
  04c70e8  std 31, 168(1)
  04c70ec  lwz 30, 120(3)
  04c70f0  std 29, 152(1)
  04c70f4  ori 31, 3, 0
  04c70f8  lwz 29, 0(30)
  04c70fc  std 28, 144(1)
  04c7100  cmpwi 29, -1
  04c7104  bf 2, 0x4c7130
  04c7108  lis 3, 102
  04c710c  lhz 4, 178(31)
  04c7110  addic 3, 3, -29388
  04c7114  extsh 4, 4
  04c7118  bl 0x5cd098
  04c711c  nop
  04c7120  ori 3, 31, 0
  04c7124  bl 0xefb38
  04c7128  nop
  04c712c  b 0x4c747c
  04c7130  lis 3, 165
  04c7134  slwi 4, 29, 2
  04c7138  addic 29, 3, 7136
  04c713c  extsw 3, 4
  04c7140  li 5, 255
  04c7144  lbz 4, 32(31)
  04c7148  cmpwi 4, 0
  04c714c  lwzx 29, 29, 3
  04c7150  cmpwi 1, 4, 1
  04c7154  stb 5, 48(31)
  04c7158  cmpwi 6, 4, -1
  04c715c  bt 1, 0x4c7168
  04c7160  bf 25, 0x4c747c
  04c7164  b 0x4c7170
  04c7168  bf 5, 0x4c720c
  04c716c  b 0x4c747c
  04c7170  lwz 3, 12(30)
  04c7174  cmpwi 3, -1
  04c7178  bt 2, 0x4c7190
  04c717c  extsw 3, 3
  04c7180  bl 0xda9e8
  04c7184  nop
  04c7188  li 3, -1
  04c718c  stw 3, 12(30)
  04c7190  lwz 4, 16(30)
  04c7194  cmpwi 4, -1
  04c7198  bt 2, 0x4c71dc
  04c719c  sldi 3, 4, 7
  04c71a0  sldi 6, 4, 4
  04c71a4  lis 5, 150
  04c71a8  subc 3, 3, 6
  04c71ac  addic 5, 5, 14176
  04c71b0  extsw 3, 3
  04c71b4  addc 3, 5, 3
  04c71b8  lwz 5, 136(3)
  04c71bc  cmpw 5, 31
  04c71c0  bf 2, 0x4c71dc
  04c71c4  lbz 3, 116(3)
  04c71c8  cmpwi 3, 0
  04c71cc  bt 2, 0x4c71dc
  04c71d0  extsw 3, 4
  04c71d4  bl 0x15cdb0
  04c71d8  nop
  04c71dc  li 4, -1
  04c71e0  addic 3, 30, 8
  04c71e4  stw 4, 16(30)
  04c71e8  bl 0x4fff60
  04c71ec  nop
  04c71f0  cmpwi 3, 0
  04c71f4  bt 2, 0x4c747c
  04c71f8  li 3, 1
  04c71fc  li 4, 0
  04c7200  stb 3, 32(31)
  04c7204  stw 4, 4(30)
  04c7208  b 0x4c747c
  04c720c  lfs 1, 20(29)
  04c7210  lfs 2, 36(29)
  04c7214  lfs 3, 16(29)
  04c7218  fsubs 1, 1, 2
  04c721c  lfs 2, 32(29)
  04c7220  fsubs 2, 3, 2
  04c7224  lfs 3, 24(29)
  04c7228  lfs 4, 40(29)
  04c722c  fsubs 3, 3, 4
  04c7230  lis 3, 76
  04c7234  fmuls 1, 1, 1
  04c7238  addi 28, 3, 28856
  04c723c  lis 3, 114
  04c7240  addic 6, 1, 128
  04c7244  addic 7, 1, 132
  04c7248  addic 8, 1, 112
  04c724c  ori 5, 29, 0
  04c7250  fmadds 1, 2, 2, 1
  04c7254  fmadds 30, 3, 3, 1
  04c7258  lfs 1, 4(30)
  04c725c  lfs 31, 0(28)
  04c7260  lfs 2, -3052(3)
  04c7264  fmadds 1, 2, 31, 1
  04c7268  fsqrts 30, 30
  04c726c  stfs 1, 4(30)
  04c7270  fmr 2, 30
  04c7274  bl 0x1150f8
  04c7278  nop
  04c727c  lwz 3, 12(30)
  04c7280  lfs 1, 4(28)
  04c7284  lfs 3, 8(28)
  04c7288  cmpwi 3, -1
  04c728c  lfs 2, 12(28)
  04c7290  bf 2, 0x4c72c4
  04c7294  lis 3, 76
  04c7298  fmr 5, 1
  04c729c  fmr 1, 3
  04c72a0  addi 4, 3, 28856
  04c72a4  addic 3, 1, 112
  04c72a8  fmr 3, 2
  04c72ac  fmr 4, 2
  04c72b0  lfs 2, 16(4)
  04c72b4  bl 0xda4ac
  04c72b8  nop
  04c72bc  stw 3, 12(30)
  04c72c0  b 0x4c7314
  04c72c4  lis 4, 162
  04c72c8  lfs 1, 112(1)
  04c72cc  slwi 3, 3, 5
  04c72d0  addic 4, 4, -8448
  04c72d4  lis 6, 16256
  04c72d8  addc 3, 4, 3
  04c72dc  lis 4, 16448
  04c72e0  clrldi 3, 3, 32
  04c72e4  lis 7, 16128
  04c72e8  li 5, 0
  04c72ec  stfs 1, 16(3)
  04c72f0  lfs 1, 116(1)
  04c72f4  stfs 1, 20(3)
  04c72f8  lfs 1, 120(1)
  04c72fc  stw 4, 28(3)
  04c7300  stfs 1, 24(3)
  04c7304  stw 6, 0(3)
  04c7308  stw 6, 4(3)
  04c730c  stw 7, 8(3)
  04c7310  stw 5, 12(3)
  04c7314  li 3, 2
  04c7318  bl 0xfc620
  04c731c  nop
  04c7320  cmpwi 3, 0
  04c7324  bf 2, 0x4c747c
  04c7328  lis 3, 161
  04c732c  lwz 3, 1808(3)
  04c7330  clrlwi 3, 3, 31
  04c7334  cmpwi 3, 0
  04c7338  bt 2, 0x4c7364
  04c733c  lis 6, 114
  04c7340  lfs 1, 4(30)
  04c7344  addic 4, 1, 112
  04c7348  fmr 3, 30
  04c734c  ori 3, 31, 0
  04c7350  ori 5, 29, 0
  04c7354  lfs 2, -3052(6)
  04c7358  fmuls 2, 2, 31
  04c735c  bl 0x1bc0b0
  04c7360  nop
  04c7364  ori 3, 31, 0
  04c7368  lwz 4, 16(30)
  04c736c  extsw 4, 4
  04c7370  bl 0x15cc7c
  04c7374  nop
  04c7378  cmpwi 3, 0
  04c737c  bf 2, 0x4c73e4
  04c7380  li 3, 0
  04c7384  li 4, 12
  04c7388  ori 5, 31, 0
  04c738c  li 6, 1090
  04c7390  bl 0x15d204
  04c7394  nop
  04c7398  cmpwi 3, -1
  04c739c  stw 3, 16(30)
  04c73a0  bt 2, 0x4c7424
  04c73a4  sldi 5, 3, 7
  04c73a8  lfs 1, 112(1)
  04c73ac  lis 4, 150
  04c73b0  sldi 3, 3, 4
  04c73b4  addic 4, 4, 14176
  04c73b8  subc 3, 5, 3
  04c73bc  addc 3, 4, 3
  04c73c0  clrldi 3, 3, 32
  04c73c4  stfs 1, 144(3)
  04c73c8  lfs 1, 116(1)
  04c73cc  stfs 1, 148(3)
  04c73d0  lfs 1, 120(1)
  04c73d4  stfs 1, 152(3)
  04c73d8  lfs 1, 124(1)
  04c73dc  stfs 1, 156(3)
  04c73e0  b 0x4c7424
  04c73e4  lwz 4, 16(30)
  04c73e8  lis 3, 150
  04c73ec  lfs 1, 112(1)
  04c73f0  sldi 5, 4, 7
  04c73f4  sldi 4, 4, 4
  04c73f8  addic 3, 3, 14176
  04c73fc  subc 4, 5, 4
  04c7400  addc 3, 3, 4
  04c7404  clrldi 3, 3, 32
  04c7408  stfs 1, 144(3)
  04c740c  lfs 1, 116(1)
  04c7410  stfs 1, 148(3)
  04c7414  lfs 1, 120(1)
  04c7418  stfs 1, 152(3)
  04c741c  lfs 1, 124(1)
  04c7420  stfs 1, 156(3)
  04c7424  lwz 3, 0(29)
  04c7428  lwz 4, 128(1)
  04c742c  addic 3, 3, -1
  04c7430  cmpw 4, 3
  04c7434  bf 2, 0x4c747c
  04c7438  lis 3, 76
  04c743c  li 4, 0
  04c7440  vspltisw 2, -1
  04c7444  addi 3, 3, 28856
  04c7448  li 5, 20
  04c744c  lis 6, 114
  04c7450  stb 4, 32(31)
  04c7454  li 4, -3056
  04c7458  vslw 2, 2, 2
  04c745c  lvlx 3, 5, 3
  04c7460  li 3, 8
  04c7464  vspltw 3, 3, 0
  04c7468  lvlx 4, 4, 6
  04c746c  vmaddfp 2, 4, 3, 2
  04c7470  vctsxs 2, 2, 0
  04c7474  vspltw 2, 2, 0
  04c7478  stvewx 2, 3, 30
  04c747c  ld 0, 208(1)
  04c7480  mtlr 0
  04c7484  lfd 30, 176(1)
  04c7488  lfd 31, 184(1)
  04c748c  ld 28, 144(1)
  04c7490  ld 29, 152(1)
  04c7494  ld 30, 160(1)
  04c7498  ld 31, 168(1)
  04c749c  addi 1, 1, 192
  04c74a0  blr
