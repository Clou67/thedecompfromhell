# game/update/moby129.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001b7028:   # 0x1b7028, 0xd8 bytes
  01b7028  stdu 1, -128(1)
  01b702c  mflr 0
  01b7030  std 0, 144(1)
  01b7034  std 31, 120(1)
  01b7038  li 3, 1077
  01b703c  std 30, 112(1)
  01b7040  ori 31, 5, 0
  01b7044  ori 30, 4, 0
  01b7048  bl 0xefa28
  01b704c  nop
  01b7050  cmpwi 3, 0
  01b7054  bt 2, 0x1b70e8
  01b7058  li 4, 255
  01b705c  vspltisw 3, -1
  01b7060  li 5, 1
  01b7064  lis 6, 114
  01b7068  li 7, -3056
  01b706c  stb 4, 48(3)
  01b7070  sth 4, 50(3)
  01b7074  stb 5, 49(3)
  01b7078  lfs 1, 0(30)
  01b707c  lis 5, 27
  01b7080  vslw 3, 3, 3
  01b7084  stfs 1, 16(3)
  01b7088  lfs 1, 4(30)
  01b708c  addi 5, 5, 28704
  01b7090  stfs 1, 20(3)
  01b7094  lfs 1, 8(30)
  01b7098  lwz 4, 120(3)
  01b709c  stfs 1, 24(3)
  01b70a0  lfs 1, 12(30)
  01b70a4  stfs 1, 28(3)
  01b70a8  lfs 1, 0(31)
  01b70ac  stfs 1, 0(4)
  01b70b0  lfs 1, 4(31)
  01b70b4  stfs 1, 4(4)
  01b70b8  lfs 1, 8(31)
  01b70bc  stfs 1, 8(4)
  01b70c0  lfs 1, 12(31)
  01b70c4  stfs 1, 12(4)
  01b70c8  <unknown>
  01b70cc  <unknown>
  01b70d0  vspltw 2, 2, 0
  01b70d4  li 5, 16
  01b70d8  vmaddfp 2, 4, 2, 3
  01b70dc  vctsxs 2, 2, 0
  01b70e0  vspltw 2, 2, 0
  01b70e4  stvewx 2, 5, 4
  01b70e8  ld 0, 144(1)
  01b70ec  mtlr 0
  01b70f0  ld 30, 112(1)
  01b70f4  ld 31, 120(1)
  01b70f8  addi 1, 1, 128
  01b70fc  blr

UpdateMoby_129:   # 0x1b7108, 0x6a8 bytes
  01b7108  stdu 1, -208(1)
  01b710c  mflr 0
  01b7110  std 0, 224(1)
  01b7114  stfd 22, 128(1)
  01b7118  stfd 23, 136(1)
  01b711c  stfd 24, 144(1)
  01b7120  stfd 25, 152(1)
  01b7124  stfd 26, 160(1)
  01b7128  stfd 27, 168(1)
  01b712c  stfd 28, 176(1)
  01b7130  stfd 29, 184(1)
  01b7134  stfd 30, 192(1)
  01b7138  stfd 31, 200(1)
  01b713c  std 31, 120(1)
  01b7140  ori 31, 3, 0
  01b7144  std 30, 112(1)
  01b7148  lbz 3, 176(31)
  01b714c  lwz 30, 120(31)
  01b7150  cmpwi 3, 255
  01b7154  bt 2, 0x1b718c
  01b7158  lis 4, 151
  01b715c  lis 5, 161
  01b7160  addic 5, 5, -13692
  01b7164  lwz 4, -25488(4)
  01b7168  addc 3, 3, 5
  01b716c  slwi 4, 4, 4
  01b7170  clrldi 3, 3, 32
  01b7174  extsw 4, 4
  01b7178  lbzx 3, 3, 4
  01b717c  cmpwi 3, 255
  01b7180  bf 2, 0x1b718c
  01b7184  li 3, -1
  01b7188  stw 3, 16(30)
  01b718c  lbz 3, 32(31)
  01b7190  cmpwi 3, 4
  01b7194  cmpwi 1, 3, 3
  01b7198  cmpwi 6, 3, 2
  01b719c  cmpwi 7, 3, 1
  01b71a0  bt 2, 0x1b7564
  01b71a4  bt 6, 0x1b74c4
  01b71a8  bt 26, 0x1b72c8
  01b71ac  bt 30, 0x1b7210
  01b71b0  cmpwi 3, 0
  01b71b4  bf 2, 0x1b7770
  01b71b8  lfs 1, 16(31)
  01b71bc  stfs 1, 0(30)
  01b71c0  lfs 1, 20(31)
  01b71c4  lwz 3, 56(30)
  01b71c8  stfs 1, 4(30)
  01b71cc  lfs 1, 24(31)
  01b71d0  cmpwi 3, -1
  01b71d4  stfs 1, 8(30)
  01b71d8  lfs 1, 28(31)
  01b71dc  stfs 1, 12(30)
  01b71e0  bt 2, 0x1b71fc
  01b71e4  lis 4, 162
  01b71e8  slwi 3, 3, 2
  01b71ec  addic 4, 4, 2088
  01b71f0  extsw 3, 3
  01b71f4  li 5, 0
  01b71f8  stwx 5, 4, 3
  01b71fc  li 3, 1
  01b7200  li 4, 0
  01b7204  stb 3, 32(31)
  01b7208  stw 4, 12(30)
  01b720c  b 0x1b7770
  01b7210  lwz 3, 56(30)
  01b7214  cmpwi 3, -1
  01b7218  bt 2, 0x1b7234
  01b721c  lis 4, 162
  01b7220  slwi 3, 3, 2
  01b7224  addic 4, 4, 2088
  01b7228  extsw 3, 3
  01b722c  li 5, 0
  01b7230  stwx 5, 4, 3
  01b7234  lwz 3, 16(30)
  01b7238  cmpwi 3, -1
  01b723c  bt 2, 0x1b727c
  01b7240  lis 4, 164
  01b7244  slwi 3, 3, 8
  01b7248  lwz 4, -28512(4)
  01b724c  addc 3, 4, 3
  01b7250  cmpwi 3, 0
  01b7254  bt 2, 0x1b727c
  01b7258  clrldi 3, 3, 32
  01b725c  lbz 3, 32(3)
  01b7260  cmpwi 1, 3, 253
  01b7264  cmpwi 3, 254
  01b7268  cror 2, 2, 6
  01b726c  bt 2, 0x1b727c
  01b7270  lwz 4, 20(30)
  01b7274  cmpw 3, 4
  01b7278  bf 2, 0x1b7770
  01b727c  lfs 1, 32(30)
  01b7280  lfs 2, 28(30)
  01b7284  fmuls 1, 1, 1
  01b7288  lfs 3, 36(30)
  01b728c  fmadds 1, 2, 2, 1
  01b7290  fmadds 1, 3, 3, 1
  01b7294  fsqrts 1, 1
  01b7298  stfs 1, 12(30)
  01b729c  lwz 30, 48(30)
  01b72a0  cmpwi 30, -1
  01b72a4  bt 2, 0x1b72bc
  01b72a8  ori 3, 30, 0
  01b72ac  li 4, 0
  01b72b0  ori 5, 31, 0
  01b72b4  bl 0x15d12c
  01b72b8  nop
  01b72bc  li 3, 2
  01b72c0  stb 3, 32(31)
  01b72c4  b 0x1b7770
  01b72c8  lwz 3, 56(30)
  01b72cc  cmpwi 3, -1
  01b72d0  bt 2, 0x1b72ec
  01b72d4  lis 4, 162
  01b72d8  slwi 3, 3, 2
  01b72dc  addic 4, 4, 2088
  01b72e0  extsw 3, 3
  01b72e4  li 5, 1
  01b72e8  stwx 5, 4, 3
  01b72ec  lwz 3, 16(30)
  01b72f0  cmpwi 3, -1
  01b72f4  bt 2, 0x1b7360
  01b72f8  lis 4, 164
  01b72fc  slwi 3, 3, 8
  01b7300  lwz 4, -28512(4)
  01b7304  addc 3, 4, 3
  01b7308  cmpwi 3, 0
  01b730c  bt 2, 0x1b7360
  01b7310  clrldi 3, 3, 32
  01b7314  lbz 3, 32(3)
  01b7318  cmpwi 1, 3, 253
  01b731c  cmpwi 3, 254
  01b7320  cror 2, 2, 6
  01b7324  bt 2, 0x1b7360
  01b7328  lwz 4, 24(30)
  01b732c  cmpw 3, 4
  01b7330  bf 2, 0x1b7360
  01b7334  lwz 30, 48(30)
  01b7338  cmpwi 30, -1
  01b733c  bt 2, 0x1b7354
  01b7340  ori 3, 30, 0
  01b7344  li 4, 0
  01b7348  ori 5, 31, 0
  01b734c  bl 0x15d12c
  01b7350  nop
  01b7354  li 3, 4
  01b7358  stb 3, 32(31)
  01b735c  b 0x1b7770
  01b7360  lfs 1, 32(30)
  01b7364  lfs 2, 212(31)
  01b7368  lfs 3, 28(30)
  01b736c  fmuls 2, 2, 1
  01b7370  lfs 4, 208(31)
  01b7374  lfs 5, 196(31)
  01b7378  fmuls 4, 4, 1
  01b737c  lfs 6, 36(30)
  01b7380  lfs 7, 192(31)
  01b7384  lfs 8, 228(31)
  01b7388  lfs 9, 216(31)
  01b738c  lfs 10, 224(31)
  01b7390  fmuls 1, 9, 1
  01b7394  fmadds 2, 5, 3, 2
  01b7398  lfs 5, 200(31)
  01b739c  fmadds 4, 7, 3, 4
  01b73a0  lfs 7, 232(31)
  01b73a4  lis 3, 114
  01b73a8  fmadds 1, 5, 3, 1
  01b73ac  fmadds 2, 8, 6, 2
  01b73b0  fmadds 3, 10, 6, 4
  01b73b4  lfs 5, 40(30)
  01b73b8  fmadds 1, 7, 6, 1
  01b73bc  fmuls 4, 2, 2
  01b73c0  lfs 6, -3052(3)
  01b73c4  fmuls 5, 5, 6
  01b73c8  lis 4, 27
  01b73cc  fmadds 4, 3, 3, 4
  01b73d0  addi 4, 4, 28928
  01b73d4  fmadds 4, 1, 1, 4
  01b73d8  lfs 6, 0(4)
  01b73dc  lfs 8, 16(31)
  01b73e0  lfs 9, 20(31)
  01b73e4  lfs 10, 24(31)
  01b73e8  fsqrts 4, 4
  01b73ec  fdivs 5, 5, 4
  01b73f0  fsub 7, 6, 4
  01b73f4  fsub 11, 6, 4
  01b73f8  fsub 12, 6, 4
  01b73fc  fsub 13, 4, 6
  01b7400  fsub 0, 4, 6
  01b7404  fsub 4, 4, 6
  01b7408  fmuls 31, 1, 5
  01b740c  fmuls 30, 2, 5
  01b7410  fmuls 5, 3, 5
  01b7414  fsel 7, 7, 6, 31
  01b7418  fsel 11, 11, 6, 30
  01b741c  fsel 12, 12, 6, 5
  01b7420  fsel 7, 13, 7, 31
  01b7424  fsel 11, 0, 11, 30
  01b7428  fsel 4, 4, 12, 5
  01b742c  fadds 5, 10, 7
  01b7430  fadds 7, 9, 11
  01b7434  fadds 4, 8, 4
  01b7438  stfs 5, 24(31)
  01b743c  stfs 7, 20(31)
  01b7440  stfs 4, 16(31)
  01b7444  lfs 4, 12(30)
  01b7448  lfs 5, 40(30)
  01b744c  lfs 7, -3052(3)
  01b7450  fnmsubs 4, 5, 7, 4
  01b7454  fcmpu 0, 4, 6
  01b7458  stfs 4, 12(30)
  01b745c  cror 6, 1, 2
  01b7460  bt 6, 0x1b7770
  01b7464  lfs 4, 0(30)
  01b7468  fadds 3, 4, 3
  01b746c  li 3, 0
  01b7470  li 4, 3
  01b7474  stfs 3, 16(31)
  01b7478  lfs 3, 4(30)
  01b747c  fadds 2, 3, 2
  01b7480  stfs 2, 20(31)
  01b7484  lfs 2, 8(30)
  01b7488  fadds 1, 2, 1
  01b748c  stfs 1, 24(31)
  01b7490  lfs 1, 12(30)
  01b7494  stfs 1, 28(31)
  01b7498  stw 3, 12(30)
  01b749c  stb 4, 32(31)
  01b74a0  lwz 3, 52(30)
  01b74a4  cmpwi 3, -1
  01b74a8  bt 2, 0x1b7770
  01b74ac  li 4, 0
  01b74b0  ori 5, 31, 0
  01b74b4  lwz 3, 48(30)
  01b74b8  bl 0x15d12c
  01b74bc  nop
  01b74c0  b 0x1b7770
  01b74c4  lwz 3, 56(30)
  01b74c8  cmpwi 3, -1
  01b74cc  bt 2, 0x1b74e8
  01b74d0  lis 4, 162
  01b74d4  slwi 3, 3, 2
  01b74d8  addic 4, 4, 2088
  01b74dc  extsw 3, 3
  01b74e0  li 5, 1
  01b74e4  stwx 5, 4, 3
  01b74e8  lwz 3, 16(30)
  01b74ec  cmpwi 3, -1
  01b74f0  bt 2, 0x1b7770
  01b74f4  lis 4, 164
  01b74f8  slwi 3, 3, 8
  01b74fc  lwz 4, -28512(4)
  01b7500  addc 3, 4, 3
  01b7504  cmpwi 3, 0
  01b7508  bt 2, 0x1b7770
  01b750c  clrldi 3, 3, 32
  01b7510  lbz 3, 32(3)
  01b7514  cmpwi 1, 3, 253
  01b7518  cmpwi 3, 254
  01b751c  cror 2, 2, 6
  01b7520  bt 2, 0x1b7770
  01b7524  lwz 4, 24(30)
  01b7528  cmpw 3, 4
  01b752c  bf 2, 0x1b7770
  01b7530  li 3, 0
  01b7534  stw 3, 12(30)
  01b7538  lwz 30, 48(30)
  01b753c  cmpwi 30, -1
  01b7540  bt 2, 0x1b7558
  01b7544  ori 3, 30, 0
  01b7548  li 4, 0
  01b754c  ori 5, 31, 0
  01b7550  bl 0x15d12c
  01b7554  nop
  01b7558  li 3, 4
  01b755c  stb 3, 32(31)
  01b7560  b 0x1b7770
  01b7564  lwz 3, 56(30)
  01b7568  cmpwi 3, -1
  01b756c  bt 2, 0x1b7588
  01b7570  lis 4, 162
  01b7574  slwi 3, 3, 2
  01b7578  addic 4, 4, 2088
  01b757c  extsw 3, 3
  01b7580  li 5, 0
  01b7584  stwx 5, 4, 3
  01b7588  lwz 3, 16(30)
  01b758c  cmpwi 3, -1
  01b7590  bt 2, 0x1b75d0
  01b7594  lis 4, 164
  01b7598  slwi 3, 3, 8
  01b759c  lwz 4, -28512(4)
  01b75a0  addc 3, 4, 3
  01b75a4  cmpwi 3, 0
  01b75a8  bt 2, 0x1b75d0
  01b75ac  clrldi 3, 3, 32
  01b75b0  lbz 3, 32(3)
  01b75b4  cmpwi 1, 3, 253
  01b75b8  cmpwi 3, 254
  01b75bc  cror 2, 2, 6
  01b75c0  bt 2, 0x1b75d0
  01b75c4  lwz 4, 20(30)
  01b75c8  cmpw 3, 4
  01b75cc  bf 2, 0x1b75fc
  01b75d0  lwz 30, 48(30)
  01b75d4  cmpwi 30, -1
  01b75d8  bt 2, 0x1b75f0
  01b75dc  ori 3, 30, 0
  01b75e0  li 4, 0
  01b75e4  ori 5, 31, 0
  01b75e8  bl 0x15d12c
  01b75ec  nop
  01b75f0  li 3, 2
  01b75f4  stb 3, 32(31)
  01b75f8  b 0x1b7770
  01b75fc  lfs 1, 32(30)
  01b7600  lfs 2, 28(30)
  01b7604  fmuls 3, 1, 1
  01b7608  lfs 4, 36(30)
  01b760c  lis 3, 114
  01b7610  lfs 5, 44(30)
  01b7614  lis 4, 27
  01b7618  lfs 6, -3052(3)
  01b761c  fmadds 3, 2, 2, 3
  01b7620  fmuls 5, 5, 6
  01b7624  addi 4, 4, 28928
  01b7628  fmadds 3, 4, 4, 3
  01b762c  fneg 5, 5
  01b7630  lfs 6, 0(4)
  01b7634  lfs 8, 208(31)
  01b7638  lfs 9, 212(31)
  01b763c  fsqrts 3, 3
  01b7640  lfs 7, 216(31)
  01b7644  lfs 10, 192(31)
  01b7648  lfs 11, 196(31)
  01b764c  lfs 12, 200(31)
  01b7650  lfs 13, 224(31)
  01b7654  lfs 0, 228(31)
  01b7658  lfs 31, 232(31)
  01b765c  lfs 30, 16(31)
  01b7660  lfs 29, 20(31)
  01b7664  lfs 28, 24(31)
  01b7668  fdivs 5, 5, 3
  01b766c  fsub 27, 6, 3
  01b7670  fsub 25, 6, 3
  01b7674  fsub 26, 3, 6
  01b7678  fsub 24, 6, 3
  01b767c  fsub 23, 3, 6
  01b7680  fsub 22, 3, 6
  01b7684  fmuls 1, 5, 1
  01b7688  fmuls 2, 5, 2
  01b768c  fmuls 4, 5, 4
  01b7690  fsel 5, 27, 6, 1
  01b7694  fsel 27, 25, 6, 2
  01b7698  fsel 6, 24, 6, 4
  01b769c  fsel 1, 26, 5, 1
  01b76a0  fsel 2, 23, 27, 2
  01b76a4  fsel 4, 22, 6, 4
  01b76a8  fmuls 5, 8, 1
  01b76ac  fmuls 6, 9, 1
  01b76b0  fmuls 1, 7, 1
  01b76b4  fmadds 5, 10, 2, 5
  01b76b8  fmadds 6, 11, 2, 6
  01b76bc  fmadds 1, 12, 2, 1
  01b76c0  fmadds 2, 13, 4, 5
  01b76c4  fmadds 5, 0, 4, 6
  01b76c8  fmadds 1, 31, 4, 1
  01b76cc  fadds 2, 30, 2
  01b76d0  fadds 4, 29, 5
  01b76d4  fadds 1, 28, 1
  01b76d8  stfs 2, 16(31)
  01b76dc  stfs 4, 20(31)
  01b76e0  stfs 1, 24(31)
  01b76e4  lfs 1, 12(30)
  01b76e8  lfs 2, 44(30)
  01b76ec  lfs 4, -3052(3)
  01b76f0  fmadds 1, 2, 4, 1
  01b76f4  fcmpu 0, 1, 3
  01b76f8  stfs 1, 12(30)
  01b76fc  cror 6, 0, 2
  01b7700  bt 6, 0x1b7770
  01b7704  lfs 1, 0(30)
  01b7708  stfs 1, 16(31)
  01b770c  lfs 1, 4(30)
  01b7710  lwz 3, 48(30)
  01b7714  stfs 1, 20(31)
  01b7718  lfs 1, 8(30)
  01b771c  cmpwi 3, -1
  01b7720  stfs 1, 24(31)
  01b7724  lfs 1, 12(30)
  01b7728  stfs 1, 28(31)
  01b772c  bt 2, 0x1b7744
  01b7730  li 4, 0
  01b7734  lwz 3, 52(30)
  01b7738  ori 5, 31, 0
  01b773c  bl 0x15d12c
  01b7740  nop
  01b7744  lwz 30, 56(30)
  01b7748  cmpwi 30, -1
  01b774c  bt 2, 0x1b7768
  01b7750  lis 3, 162
  01b7754  slwi 4, 30, 2
  01b7758  addic 3, 3, 2088
  01b775c  extsw 4, 4
  01b7760  li 5, 0
  01b7764  stwx 5, 3, 4
  01b7768  li 3, 1
  01b776c  stb 3, 32(31)
  01b7770  ld 0, 224(1)
  01b7774  mtlr 0
  01b7778  lfd 22, 128(1)
  01b777c  lfd 23, 136(1)
  01b7780  lfd 24, 144(1)
  01b7784  lfd 25, 152(1)
  01b7788  lfd 26, 160(1)
  01b778c  lfd 27, 168(1)
  01b7790  lfd 28, 176(1)
  01b7794  lfd 29, 184(1)
  01b7798  lfd 30, 192(1)
  01b779c  lfd 31, 200(1)
  01b77a0  ld 30, 112(1)
  01b77a4  ld 31, 120(1)
  01b77a8  addi 1, 1, 208
  01b77ac  blr

M1131_001b77b0:   # 0x1b77b0, 0x14 bytes
  01b77b0  lis 3, 117
  01b77b4  lis 4, 1
  01b77b8  addic 3, 3, 32620
  01b77bc  stw 4, 72(3)
  01b77c0  blr

M108_001b77f0:   # 0x1b77f0, 0xc8 bytes
  01b77f0  stdu 1, -128(1)
  01b77f4  mflr 0
  01b77f8  std 0, 144(1)
  01b77fc  stfd 30, 112(1)
  01b7800  stfd 31, 120(1)
  01b7804  fdivs 3, 3, 4
  01b7808  lis 3, 27
  01b780c  addi 3, 3, 30664
  01b7810  lfs 4, 0(3)
  01b7814  lfs 5, 4(3)
  01b7818  lfs 6, 8(3)
  01b781c  lfs 7, 12(3)
  01b7820  lfs 8, 16(3)
  01b7824  lfs 9, 20(3)
  01b7828  lfs 10, 24(3)
  01b782c  lfs 11, 28(3)
  01b7830  lfs 12, 32(3)
  01b7834  fmr 31, 1
  01b7838  fmr 1, 2
  01b783c  fmr 2, 31
  01b7840  fmadds 3, 3, 4, 5
  01b7844  fsubs 4, 4, 3
  01b7848  fsubs 5, 6, 3
  01b784c  fsub 6, 3, 4
  01b7850  fsel 3, 6, 4, 3
  01b7854  fsub 4, 5, 3
  01b7858  fsel 3, 4, 5, 3
  01b785c  fmuls 4, 3, 3
  01b7860  fmuls 5, 4, 3
  01b7864  fmuls 6, 4, 5
  01b7868  fmadds 3, 5, 7, 3
  01b786c  fmuls 5, 4, 6
  01b7870  fmadds 3, 6, 8, 3
  01b7874  fmuls 4, 4, 5
  01b7878  fmadds 3, 5, 9, 3
  01b787c  fmadds 3, 4, 10, 3
  01b7880  fadds 3, 3, 11
  01b7884  fmuls 30, 3, 12
  01b7888  bl 0x5025e0
  01b788c  nop
  01b7890  fmuls 1, 1, 30
  01b7894  fmr 2, 31
  01b7898  bl 0x502578
  01b789c  nop
  01b78a0  ld 0, 144(1)
  01b78a4  mtlr 0
  01b78a8  lfd 30, 112(1)
  01b78ac  lfd 31, 120(1)
  01b78b0  addi 1, 1, 128
  01b78b4  blr

M108_001b78c0:   # 0x1b78c0, 0x1a0 bytes
  01b78c0  stdu 1, -176(1)
  01b78c4  mflr 0
  01b78c8  std 0, 192(1)
  01b78cc  stfd 29, 152(1)
  01b78d0  stfd 30, 160(1)
  01b78d4  stfd 31, 168(1)
  01b78d8  fmr 5, 1
  01b78dc  lfs 1, 0(4)
  01b78e0  fmr 6, 2
  01b78e4  lfs 3, 4(5)
  01b78e8  lfs 2, 4(4)
  01b78ec  lfs 4, 0(5)
  01b78f0  fsubs 3, 3, 2
  01b78f4  lfs 2, 8(5)
  01b78f8  fsubs 4, 4, 1
  01b78fc  lfs 7, 8(4)
  01b7900  fsubs 2, 2, 7
  01b7904  lis 5, 117
  01b7908  lis 6, 114
  01b790c  fsubs 29, 6, 5
  01b7910  fmuls 7, 3, 3
  01b7914  lfs 8, 32728(5)
  01b7918  std 30, 136(1)
  01b791c  lfs 9, -3052(6)
  01b7920  fmuls 5, 8, 9
  01b7924  std 31, 144(1)
  01b7928  ori 30, 3, 0
  01b792c  ori 31, 4, 0
  01b7930  fmadds 7, 4, 4, 7
  01b7934  fmuls 29, 5, 29
  01b7938  fmadds 31, 2, 2, 7
  01b793c  fsqrts 31, 31
  01b7940  fcmpu 0, 29, 31
  01b7944  cror 6, 1, 2
  01b7948  bt 6, 0x1b7a14
  01b794c  fdivs 5, 29, 31
  01b7950  lis 3, 27
  01b7954  lis 4, 151
  01b7958  addi 3, 3, 30904
  01b795c  lfs 6, 0(3)
  01b7960  addic 3, 4, -25376
  01b7964  fsub 7, 6, 31
  01b7968  fsub 8, 6, 31
  01b796c  fsub 9, 6, 31
  01b7970  fsub 29, 31, 6
  01b7974  fsub 30, 31, 6
  01b7978  fsub 31, 31, 6
  01b797c  lwz 4, 572(3)
  01b7980  cmpw 4, 30
  01b7984  fmuls 4, 4, 5
  01b7988  fmuls 3, 3, 5
  01b798c  fmuls 2, 2, 5
  01b7990  fsel 5, 7, 6, 4
  01b7994  fsel 7, 8, 6, 3
  01b7998  fsel 6, 9, 6, 2
  01b799c  fsel 29, 29, 5, 4
  01b79a0  fsel 30, 30, 7, 3
  01b79a4  fsel 31, 31, 6, 2
  01b79a8  bt 2, 0x1b79c4
  01b79ac  lwz 4, 576(3)
  01b79b0  fmr 4, 29
  01b79b4  cmpw 4, 30
  01b79b8  fmr 3, 30
  01b79bc  fmr 2, 31
  01b79c0  bf 2, 0x1b7a14
  01b79c4  li 5, 0
  01b79c8  lis 7, 27
  01b79cc  lis 6, 16448
  01b79d0  addi 9, 7, 30904
  01b79d4  stw 5, 124(1)
  01b79d8  ori 4, 30, 0
  01b79dc  stw 5, 116(1)
  01b79e0  addic 7, 30, 16
  01b79e4  stw 5, 112(1)
  01b79e8  addic 8, 1, 112
  01b79ec  stw 6, 120(1)
  01b79f0  li 5, 1
  01b79f4  lwz 3, 8320(3)
  01b79f8  lfs 1, 4(9)
  01b79fc  bl 0x105c08
  01b7a00  nop
  01b7a04  lfs 1, 0(31)
  01b7a08  fmr 4, 29
  01b7a0c  fmr 3, 30
  01b7a10  fmr 2, 31
  01b7a14  fadds 1, 1, 4
  01b7a18  stfs 1, 16(30)
  01b7a1c  lfs 1, 4(31)
  01b7a20  fadds 1, 1, 3
  01b7a24  stfs 1, 20(30)
  01b7a28  lfs 1, 8(31)
  01b7a2c  fadds 1, 1, 2
  01b7a30  stfs 1, 24(30)
  01b7a34  lfs 1, 12(31)
  01b7a38  stfs 1, 28(30)
  01b7a3c  ld 0, 192(1)
  01b7a40  mtlr 0
  01b7a44  lfd 29, 152(1)
  01b7a48  lfd 30, 160(1)
  01b7a4c  lfd 31, 168(1)
  01b7a50  ld 30, 136(1)
  01b7a54  ld 31, 144(1)
  01b7a58  addi 1, 1, 176
  01b7a5c  blr
