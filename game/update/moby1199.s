# game/update/moby1199.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1199_001f6ee8:   # 0x1f6ee8, 0x14 bytes
  01f6ee8  lis 3, 118
  01f6eec  lis 4, 1
  01f6ef0  addic 3, 3, 25292
  01f6ef4  stw 4, 72(3)
  01f6ef8  blr

M1199_001f6f08:   # 0x1f6f08, 0xa0 bytes
  01f6f08  lbz 3, 33(3)
  01f6f0c  cmpwi 3, 255
  01f6f10  bt 2, 0x1f6fa4
  01f6f14  lis 4, 165
  01f6f18  rlwinm 3, 3, 2, 22, 29
  01f6f1c  addic 4, 4, -28284
  01f6f20  lwzx 3, 4, 3
  01f6f24  cmpwi 3, 0
  01f6f28  bt 2, 0x1f6fa4
  01f6f2c  lis 4, 31
  01f6f30  lis 9, 118
  01f6f34  addi 4, 4, 28416
  01f6f38  lis 8, 114
  01f6f3c  lis 7, 164
  01f6f40  li 6, 25408
  01f6f44  li 5, -3056
  01f6f48  lvlx 2, 0, 4
  01f6f4c  li 4, 188
  01f6f50  vspltw 2, 2, 0
  01f6f54  lvlx 3, 6, 9
  01f6f58  vspltisw 4, -1
  01f6f5c  vcfsx 3, 3, 0
  01f6f60  lvlx 5, 5, 8
  01f6f64  lhz 10, 0(3)
  01f6f68  vslw 4, 4, 4
  01f6f6c  lwz 11, -28512(7)
  01f6f70  rlwinm 10, 10, 8, 9, 23
  01f6f74  addc 10, 11, 10
  01f6f78  clrldi 10, 10, 32
  01f6f7c  vaddfp 3, 3, 2
  01f6f80  vmaddfp 3, 5, 3, 4
  01f6f84  vctsxs 3, 3, 0
  01f6f88  vspltb 3, 3, 3
  01f6f8c  stvebx 3, 4, 10
  01f6f90  lhz 10, 0(3)
  01f6f94  addic 3, 3, 2
  01f6f98  extsh 10, 10
  01f6f9c  cmpwi 10, 0
  01f6fa0  bf 0, 0x1f6f54
  01f6fa4  blr

M1199_001f6fe0:   # 0x1f6fe0, 0x8f8 bytes
  01f6fe0  stdu 1, -256(1)
  01f6fe4  mflr 0
  01f6fe8  std 0, 272(1)
  01f6fec  stfd 31, 248(1)
  01f6ff0  std 30, 232(1)
  01f6ff4  std 31, 240(1)
  01f6ff8  lwz 30, 120(3)
  01f6ffc  ori 31, 3, 0
  01f7000  lwz 3, 56(30)
  01f7004  std 29, 224(1)
  01f7008  std 28, 216(1)
  01f700c  cmpwi 3, 0
  01f7010  bt 2, 0x1f704c
  01f7014  lis 3, 31
  01f7018  addi 3, 3, 28584
  01f701c  lfs 1, 0(3)
  01f7020  lfs 2, 4(3)
  01f7024  bl 0xfcbe8
  01f7028  nop
  01f702c  lis 3, 114
  01f7030  lfs 2, -3056(3)
  01f7034  fmuls 1, 1, 2
  01f7038  bl 0x502758
  01f703c  nop
  01f7040  li 4, 0
  01f7044  stw 3, 388(30)
  01f7048  stw 4, 56(30)
  01f704c  addic 3, 30, 388
  01f7050  bl 0x4fff60
  01f7054  nop
  01f7058  lbz 3, 32(31)
  01f705c  cmpwi 3, 13
  01f7060  bt 2, 0x1f7620
  01f7064  ori 3, 31, 0
  01f7068  lis 4, 51
  01f706c  li 5, 0
  01f7070  bl 0x10675c
  01f7074  nop
  01f7078  ori 29, 3, 0
  01f707c  addic 5, 30, 32
  01f7080  li 8, 0
  01f7084  addic 7, 1, 112
  01f7088  li 10, 4
  01f708c  ori 3, 31, 0
  01f7090  ori 4, 29, 0
  01f7094  li 6, 5
  01f7098  li 9, 0
  01f709c  bl 0x106840
  01f70a0  nop
  01f70a4  cmpwi 29, 0
  01f70a8  bt 2, 0x1f7618
  01f70ac  lwz 3, 32(29)
  01f70b0  lhz 4, 166(31)
  01f70b4  extsh 4, 4
  01f70b8  lhz 3, 166(3)
  01f70bc  extsh 3, 3
  01f70c0  cmpw 3, 4
  01f70c4  bt 2, 0x1f7618
  01f70c8  lwz 3, 32(30)
  01f70cc  lwz 4, 44(29)
  01f70d0  srawi 6, 3, 31
  01f70d4  srawi 5, 4, 31
  01f70d8  lfs 1, 32(30)
  01f70dc  srwi 8, 6, 1
  01f70e0  lfs 2, 44(29)
  01f70e4  srwi 7, 5, 1
  01f70e8  xor 3, 8, 3
  01f70ec  xor 4, 7, 4
  01f70f0  subc 3, 3, 6
  01f70f4  subc 4, 4, 5
  01f70f8  cmpw 3, 4
  01f70fc  bt 1, 0x1f75bc
  01f7100  lis 3, 31
  01f7104  li 4, 0
  01f7108  lhz 5, 52(31)
  01f710c  addi 3, 3, 28584
  01f7110  rlwimi 5, 4, 0, 19, 19
  01f7114  lfs 31, 8(3)
  01f7118  stw 4, 32(30)
  01f711c  lbz 3, 83(31)
  01f7120  sth 5, 52(31)
  01f7124  cmpwi 3, 4
  01f7128  bt 2, 0x1f7168
  01f712c  lis 3, 31
  01f7130  lis 4, 114
  01f7134  addi 3, 3, 28584
  01f7138  li 5, 0
  01f713c  lfs 1, 12(3)
  01f7140  lfs 2, -3056(4)
  01f7144  ori 3, 31, 0
  01f7148  fmuls 1, 2, 1
  01f714c  li 4, 4
  01f7150  fctiwz 1, 1
  01f7154  stfd 1, 200(1)
  01f7158  lwz 6, 204(1)
  01f715c  extsw 6, 6
  01f7160  bl 0xfddc0
  01f7164  nop
  01f7168  li 3, 13
  01f716c  lis 4, 31
  01f7170  li 5, 9
  01f7174  addi 28, 4, 28584
  01f7178  stb 3, 32(31)
  01f717c  lis 3, 114
  01f7180  li 4, 3
  01f7184  lis 6, 114
  01f7188  lfs 1, 16(28)
  01f718c  lfs 2, -3048(3)
  01f7190  lis 3, 14851
  01f7194  fmuls 1, 2, 1
  01f7198  stb 4, 157(30)
  01f719c  ori 3, 3, 4719
  01f71a0  li 4, 0
  01f71a4  stw 3, 116(30)
  01f71a8  stw 5, 132(30)
  01f71ac  li 3, 2
  01f71b0  ori 5, 31, 0
  01f71b4  stfs 1, 112(30)
  01f71b8  lfs 1, 20(28)
  01f71bc  lfs 2, -3052(6)
  01f71c0  fmuls 1, 2, 1
  01f71c4  stfs 1, 120(30)
  01f71c8  lfs 1, 24(28)
  01f71cc  fmuls 1, 2, 1
  01f71d0  stfs 1, 124(30)
  01f71d4  bl 0x15d12c
  01f71d8  nop
  01f71dc  lwz 3, 48(29)
  01f71e0  lfs 4, 28(28)
  01f71e4  clrlwi 3, 3, 31
  01f71e8  cmpwi 3, 0
  01f71ec  bt 2, 0x1f7378
  01f71f0  lwz 3, 16(29)
  01f71f4  lwz 4, 20(29)
  01f71f8  lfs 1, 16(29)
  01f71fc  lfs 2, 20(29)
  01f7200  fabs 3, 1
  01f7204  fabs 2, 2
  01f7208  rlwinm 4, 4, 3, 29, 29
  01f720c  lis 5, 115
  01f7210  addic 5, 5, 22784
  01f7214  fsubs 1, 3, 2
  01f7218  stfs 1, 132(1)
  01f721c  lwz 6, 132(1)
  01f7220  lfs 1, 132(1)
  01f7224  rlwimi 4, 6, 2, 30, 30
  01f7228  fsub 5, 1, 31
  01f722c  fsub 6, 1, 31
  01f7230  rlwimi 4, 3, 4, 28, 28
  01f7234  ori 3, 5, 0
  01f7238  rlwimi 3, 4, 2, 26, 28
  01f723c  slwi 4, 4, 2
  01f7240  clrldi 3, 3, 32
  01f7244  fsel 5, 5, 3, 2
  01f7248  lfsx 1, 5, 4
  01f724c  fsel 3, 6, 2, 3
  01f7250  lfs 2, 4(3)
  01f7254  fcmpu 0, 5, 31
  01f7258  bt 1, 0x1f7260
  01f725c  b 0x1f7374
  01f7260  fsubs 6, 3, 5
  01f7264  fadds 3, 3, 5
  01f7268  addic 3, 1, 16
  01f726c  li 7, 2
  01f7270  addic 5, 3, 168
  01f7274  addic 4, 3, 152
  01f7278  mtctr 7
  01f727c  fdivs 3, 6, 3
  01f7280  fmuls 5, 3, 3
  01f7284  stfs 3, 180(1)
  01f7288  stfs 3, 172(1)
  01f728c  stfs 3, 176(1)
  01f7290  stfs 3, 168(1)
  01f7294  lfs 7, 180(1)
  01f7298  lfs 8, 172(1)
  01f729c  lfs 9, 176(1)
  01f72a0  fmuls 6, 5, 5
  01f72a4  fmuls 8, 8, 5
  01f72a8  fmuls 7, 7, 6
  01f72ac  fmuls 3, 6, 6
  01f72b0  fmuls 6, 9, 6
  01f72b4  stfs 8, 172(1)
  01f72b8  fmuls 5, 7, 5
  01f72bc  stfs 6, 176(1)
  01f72c0  stfs 5, 180(1)
  01f72c4  lfs 5, 152(3)
  01f72c8  fmuls 5, 5, 3
  01f72cc  stfs 5, 168(3)
  01f72d0  lfs 5, 4(4)
  01f72d4  addic 4, 4, 8
  01f72d8  fmuls 5, 5, 3
  01f72dc  addic 3, 3, 8
  01f72e0  stfs 5, 4(5)
  01f72e4  addic 5, 5, 8
  01f72e8  bdnz 0x1f72c4
  01f72ec  li 5, 4
  01f72f0  ori 3, 1, 0
  01f72f4  mtctr 5
  01f72f8  lis 4, 115
  01f72fc  addic 5, 3, 168
  01f7300  addic 4, 4, 22752
  01f7304  ori 6, 5, 0
  01f7308  lfs 3, 168(3)
  01f730c  lfs 5, 0(4)
  01f7310  fmuls 3, 3, 5
  01f7314  lfs 5, 4(4)
  01f7318  addic 4, 4, 8
  01f731c  stfs 3, 168(3)
  01f7320  lfs 3, 4(5)
  01f7324  addic 3, 3, 8
  01f7328  fmuls 3, 3, 5
  01f732c  stfs 3, 4(5)
  01f7330  addic 5, 5, 8
  01f7334  bdnz 0x1f7308
  01f7338  ori 3, 1, 0
  01f733c  mtctr 7
  01f7340  lfs 3, 168(3)
  01f7344  lfs 5, 4(6)
  01f7348  fadds 3, 31, 3
  01f734c  lfs 6, 8(6)
  01f7350  addic 3, 3, 16
  01f7354  lfs 31, 12(6)
  01f7358  addic 6, 6, 16
  01f735c  fadds 3, 3, 5
  01f7360  fadds 3, 3, 6
  01f7364  fadds 31, 3, 31
  01f7368  bdnz 0x1f7340
  01f736c  fadds 31, 31, 4
  01f7370  fmadds 31, 31, 1, 2
  01f7374  b 0x1f7524
  01f7378  lfs 1, 16(31)
  01f737c  lfs 2, 0(29)
  01f7380  lfs 3, 20(31)
  01f7384  lfs 5, 4(29)
  01f7388  fsubs 1, 1, 2
  01f738c  fsubs 2, 3, 5
  01f7390  lis 3, 115
  01f7394  addic 3, 3, 22784
  01f7398  fabs 3, 1
  01f739c  fabs 5, 2
  01f73a0  stfs 1, 120(1)
  01f73a4  stfs 2, 124(1)
  01f73a8  fsubs 1, 3, 5
  01f73ac  stfs 1, 128(1)
  01f73b0  lwz 4, 120(1)
  01f73b4  lfs 1, 120(1)
  01f73b8  lwz 5, 124(1)
  01f73bc  lfs 2, 124(1)
  01f73c0  fabs 1, 1
  01f73c4  lwz 6, 128(1)
  01f73c8  rlwinm 5, 5, 3, 29, 29
  01f73cc  lfs 6, 128(1)
  01f73d0  fabs 2, 2
  01f73d4  rlwimi 5, 6, 2, 30, 30
  01f73d8  fsub 7, 6, 31
  01f73dc  fsub 6, 6, 31
  01f73e0  rlwimi 5, 4, 4, 28, 28
  01f73e4  ori 4, 3, 0
  01f73e8  rlwimi 4, 5, 2, 26, 28
  01f73ec  slwi 5, 5, 2
  01f73f0  clrldi 4, 4, 32
  01f73f4  fsel 5, 7, 1, 5
  01f73f8  lfsx 1, 3, 5
  01f73fc  fsel 3, 6, 2, 3
  01f7400  lfs 2, 4(4)
  01f7404  fcmpu 0, 5, 31
  01f7408  bt 1, 0x1f7410
  01f740c  b 0x1f7524
  01f7410  fsubs 6, 3, 5
  01f7414  fadds 3, 3, 5
  01f7418  addic 3, 1, 16
  01f741c  li 6, 2
  01f7420  addic 5, 3, 136
  01f7424  addic 4, 3, 120
  01f7428  mtctr 6
  01f742c  fdivs 3, 6, 3
  01f7430  fmuls 5, 3, 3
  01f7434  stfs 3, 148(1)
  01f7438  stfs 3, 140(1)
  01f743c  stfs 3, 144(1)
  01f7440  stfs 3, 136(1)
  01f7444  lfs 7, 148(1)
  01f7448  lfs 8, 140(1)
  01f744c  lfs 9, 144(1)
  01f7450  fmuls 6, 5, 5
  01f7454  fmuls 8, 8, 5
  01f7458  fmuls 7, 7, 6
  01f745c  fmuls 3, 6, 6
  01f7460  fmuls 6, 9, 6
  01f7464  stfs 8, 140(1)
  01f7468  fmuls 5, 7, 5
  01f746c  stfs 6, 144(1)
  01f7470  stfs 5, 148(1)
  01f7474  lfs 5, 120(3)
  01f7478  fmuls 5, 5, 3
  01f747c  stfs 5, 136(3)
  01f7480  lfs 5, 4(4)
  01f7484  addic 4, 4, 8
  01f7488  fmuls 5, 5, 3
  01f748c  addic 3, 3, 8
  01f7490  stfs 5, 4(5)
  01f7494  addic 5, 5, 8
  01f7498  bdnz 0x1f7474
  01f749c  li 5, 4
  01f74a0  ori 3, 1, 0
  01f74a4  mtctr 5
  01f74a8  lis 4, 115
  01f74ac  addic 5, 3, 136
  01f74b0  addic 4, 4, 22752
  01f74b4  ori 7, 5, 0
  01f74b8  lfs 3, 136(3)
  01f74bc  lfs 5, 0(4)
  01f74c0  fmuls 3, 3, 5
  01f74c4  lfs 5, 4(4)
  01f74c8  addic 4, 4, 8
  01f74cc  stfs 3, 136(3)
  01f74d0  lfs 3, 4(5)
  01f74d4  addic 3, 3, 8
  01f74d8  fmuls 3, 3, 5
  01f74dc  stfs 3, 4(5)
  01f74e0  addic 5, 5, 8
  01f74e4  bdnz 0x1f74b8
  01f74e8  ori 3, 1, 0
  01f74ec  mtctr 6
  01f74f0  lfs 3, 136(3)
  01f74f4  lfs 5, 4(7)
  01f74f8  fadds 3, 31, 3
  01f74fc  lfs 6, 8(7)
  01f7500  addic 3, 3, 16
  01f7504  lfs 31, 12(7)
  01f7508  addic 7, 7, 16
  01f750c  fadds 3, 3, 5
  01f7510  fadds 3, 3, 6
  01f7514  fadds 31, 3, 31
  01f7518  bdnz 0x1f74f0
  01f751c  fadds 31, 31, 4
  01f7520  fmadds 31, 31, 1, 2
  01f7524  stfs 31, 116(1)
  01f7528  lfs 1, 16(29)
  01f752c  addic 5, 1, 116
  01f7530  lfs 2, 24(29)
  01f7534  addic 6, 30, 120
  01f7538  stfs 1, 48(1)
  01f753c  addic 7, 30, 124
  01f7540  stfs 2, 56(1)
  01f7544  lfs 1, 20(29)
  01f7548  lfs 2, 28(29)
  01f754c  stfs 1, 52(1)
  01f7550  stfs 2, 60(1)
  01f7554  ld 3, 48(1)
  01f7558  ld 4, 56(1)
  01f755c  bl 0x107de8
  01f7560  nop
  01f7564  addic 4, 30, 96
  01f7568  lfs 1, 116(1)
  01f756c  ori 3, 31, 0
  01f7570  li 6, 4
  01f7574  li 7, 1
  01f7578  li 8, 0
  01f757c  bl 0x10ad80
  01f7580  nop
  01f7584  li 5, 120
  01f7588  addic 4, 30, 272
  01f758c  ori 3, 31, 0
  01f7590  stb 5, 279(30)
  01f7594  bl 0x10c808
  01f7598  nop
  01f759c  ori 3, 31, 0
  01f75a0  li 4, 1
  01f75a4  li 5, 3
  01f75a8  li 6, 0
  01f75ac  li 7, -1
  01f75b0  bl 0xfcd60
  01f75b4  nop
  01f75b8  b 0x1f7618
  01f75bc  fsubs 1, 1, 2
  01f75c0  lis 3, 31
  01f75c4  vspltisw 2, -1
  01f75c8  li 4, 250
  01f75cc  addi 3, 3, 28584
  01f75d0  li 6, 32
  01f75d4  lis 5, 114
  01f75d8  stb 4, 279(30)
  01f75dc  li 4, -3056
  01f75e0  vslw 2, 2, 2
  01f75e4  stfs 1, 32(30)
  01f75e8  lvlx 3, 6, 3
  01f75ec  lvlx 4, 4, 5
  01f75f0  vspltw 3, 3, 0
  01f75f4  li 5, 38
  01f75f8  addic 4, 30, 272
  01f75fc  ori 3, 31, 0
  01f7600  vmaddfp 2, 4, 3, 2
  01f7604  vctsxs 2, 2, 0
  01f7608  vsplth 2, 2, 1
  01f760c  stvehx 2, 5, 30
  01f7610  bl 0x10c808
  01f7614  nop
  01f7618  li 3, 255
  01f761c  stb 3, 164(31)
  01f7620  ori 3, 31, 0
  01f7624  addic 4, 30, 272
  01f7628  bl 0x10c9a0
  01f762c  nop
  01f7630  lwz 3, 372(30)
  01f7634  cmpwi 3, 2
  01f7638  bf 2, 0x1f764c
  01f763c  lis 4, 31
  01f7640  addi 4, 4, 28584
  01f7644  lfs 1, 36(4)
  01f7648  b 0x1f7688
  01f764c  lwz 4, 388(30)
  01f7650  cmpwi 4, 0
  01f7654  bt 2, 0x1f7670
  01f7658  lis 4, 31
  01f765c  lfs 1, 376(30)
  01f7660  addi 4, 4, 28584
  01f7664  lfs 2, 40(4)
  01f7668  fadds 1, 1, 2
  01f766c  b 0x1f7688
  01f7670  lbz 4, 32(31)
  01f7674  cmpwi 4, 1
  01f7678  bf 2, 0x1f7684
  01f767c  lfs 1, 392(30)
  01f7680  b 0x1f7688
  01f7684  lfs 1, 376(30)
  01f7688  cmpwi 3, 2
  01f768c  stfs 1, 384(30)
  01f7690  bf 2, 0x1f779c
  01f7694  ori 3, 31, 0
  01f7698  addic 5, 30, 192
  01f769c  bl 0x1118d8
  01f76a0  nop
  01f76a4  cmpwi 3, 2
  01f76a8  bt 2, 0x1f784c
  01f76ac  lis 4, 165
  01f76b0  lwz 6, 404(30)
  01f76b4  lis 5, 151
  01f76b8  slwi 6, 6, 7
  01f76bc  addic 5, 5, -25376
  01f76c0  lwz 4, 7128(4)
  01f76c4  addc 4, 4, 6
  01f76c8  clrldi 4, 4, 32
  01f76cc  lfs 1, 132(5)
  01f76d0  lfs 2, 128(5)
  01f76d4  lfs 3, 52(4)
  01f76d8  lfs 4, 48(4)
  01f76dc  fsubs 1, 1, 3
  01f76e0  lfs 3, 80(4)
  01f76e4  fsubs 2, 2, 4
  01f76e8  lfs 4, 136(5)
  01f76ec  lfs 5, 56(4)
  01f76f0  lfs 6, 64(4)
  01f76f4  lis 5, 31
  01f76f8  fsubs 5, 4, 5
  01f76fc  lfs 4, 84(4)
  01f7700  lfs 7, 96(4)
  01f7704  addi 5, 5, 28584
  01f7708  lfs 8, 68(4)
  01f770c  lfs 9, 88(4)
  01f7710  fmuls 3, 3, 1
  01f7714  lfs 10, 100(4)
  01f7718  fmuls 4, 4, 1
  01f771c  fmuls 1, 9, 1
  01f7720  lfs 9, 44(5)
  01f7724  fmadds 3, 6, 2, 3
  01f7728  fmadds 6, 8, 2, 4
  01f772c  lfs 8, 72(4)
  01f7730  fmr 4, 9
  01f7734  fmadds 8, 8, 2, 1
  01f7738  lfs 9, 104(4)
  01f773c  fmadds 1, 7, 5, 3
  01f7740  fmadds 2, 10, 5, 6
  01f7744  fmadds 3, 9, 5, 8
  01f7748  fcmpu 0, 1, 4
  01f774c  fcmpu 6, 2, 4
  01f7750  cror 6, 0, 2
  01f7754  bt 6, 0x1f7790
  01f7758  lis 4, 31
  01f775c  addi 4, 4, 28584
  01f7760  lfs 5, 48(4)
  01f7764  fcmpu 0, 1, 5
  01f7768  fcmpu 1, 2, 5
  01f776c  fcmpu 7, 3, 5
  01f7770  cror 2, 1, 2
  01f7774  bt 2, 0x1f7790
  01f7778  bf 25, 0x1f7790
  01f777c  bf 4, 0x1f7790
  01f7780  fcmpu 0, 3, 4
  01f7784  cror 6, 0, 2
  01f7788  bt 6, 0x1f7790
  01f778c  bt 28, 0x1f784c
  01f7790  li 4, 2
  01f7794  stw 4, 260(30)
  01f7798  b 0x1f784c
  01f779c  lbz 3, 32(31)
  01f77a0  cmpwi 1, 3, 1
  01f77a4  bf 6, 0x1f77f0
  01f77a8  lwz 3, 396(30)
  01f77ac  cmpwi 3, -1
  01f77b0  bf 1, 0x1f77f0
  01f77b4  lis 4, 165
  01f77b8  slwi 3, 3, 2
  01f77bc  addic 5, 4, 7136
  01f77c0  extsw 6, 3
  01f77c4  addic 4, 30, 192
  01f77c8  ori 3, 31, 0
  01f77cc  li 7, 0
  01f77d0  lwzx 5, 5, 6
  01f77d4  li 6, 0
  01f77d8  addic 8, 5, 16
  01f77dc  lwz 9, 0(5)
  01f77e0  extsw 9, 9
  01f77e4  bl 0x111ba0
  01f77e8  nop
  01f77ec  b 0x1f784c
  01f77f0  bt 6, 0x1f783c
  01f77f4  lwz 3, 380(30)
  01f77f8  cmpwi 3, -1
  01f77fc  bf 1, 0x1f783c
  01f7800  lis 4, 165
  01f7804  slwi 3, 3, 2
  01f7808  addic 5, 4, 7136
  01f780c  extsw 7, 3
  01f7810  addic 4, 30, 192
  01f7814  li 6, 0
  01f7818  ori 3, 31, 0
  01f781c  lwzx 5, 5, 7
  01f7820  li 7, 0
  01f7824  addic 8, 5, 16
  01f7828  lwz 9, 0(5)
  01f782c  extsw 9, 9
  01f7830  bl 0x111ba0
  01f7834  nop
  01f7838  b 0x1f784c
  01f783c  addic 5, 30, 192
  01f7840  ori 3, 31, 0
  01f7844  bl 0x1118d8
  01f7848  nop
  01f784c  cmpwi 3, 2
  01f7850  bt 2, 0x1f7898
  01f7854  lfs 1, 308(30)
  01f7858  lfs 2, 196(30)
  01f785c  lfs 3, 304(30)
  01f7860  fsubs 1, 1, 2
  01f7864  lfs 2, 192(30)
  01f7868  fsubs 2, 3, 2
  01f786c  fmuls 1, 1, 1
  01f7870  fmadds 1, 2, 2, 1
  01f7874  lfs 2, 384(30)
  01f7878  fsqrts 1, 1
  01f787c  fcmpu 0, 1, 2
  01f7880  bt 1, 0x1f7890
  01f7884  lbz 3, 49(31)
  01f7888  cmpwi 3, 0
  01f788c  bf 2, 0x1f7898
  01f7890  li 3, 2
  01f7894  stw 3, 260(30)
  01f7898  lwz 3, 256(30)
  01f789c  cmpwi 3, 0
  01f78a0  bf 2, 0x1f78b4
  01f78a4  lis 3, 151
  01f78a8  addic 3, 3, -25376
  01f78ac  lwz 3, 8320(3)
  01f78b0  stw 3, 256(30)
  01f78b4  ld 0, 272(1)
  01f78b8  mtlr 0
  01f78bc  lfd 31, 248(1)
  01f78c0  ld 28, 216(1)
  01f78c4  ld 29, 224(1)
  01f78c8  ld 30, 232(1)
  01f78cc  ld 31, 240(1)
  01f78d0  addi 1, 1, 256
  01f78d4  blr

UpdateMoby_1199:   # 0x1f7980, 0x1bec bytes
  01f7980  stdu 1, -400(1)
  01f7984  mflr 0
  01f7988  std 0, 416(1)
  01f798c  stfd 28, 368(1)
  01f7990  stfd 29, 376(1)
  01f7994  stfd 30, 384(1)
  01f7998  stfd 31, 392(1)
  01f799c  std 31, 360(1)
  01f79a0  std 29, 344(1)
  01f79a4  ori 31, 3, 0
  01f79a8  lis 4, 31
  01f79ac  std 30, 352(1)
  01f79b0  addi 29, 4, 30936
  01f79b4  std 28, 336(1)
  01f79b8  std 27, 328(1)
  01f79bc  std 26, 320(1)
  01f79c0  lwz 30, 120(31)
  01f79c4  bl 0x1f6fe0
  01f79c8  lfs 30, 0(29)
  01f79cc  ori 3, 31, 0
  01f79d0  lwz 29, 256(30)
  01f79d4  addic 5, 30, 624
  01f79d8  fmr 1, 30
  01f79dc  li 4, 1
  01f79e0  bl 0x119a18
  01f79e4  nop
  01f79e8  lbz 3, 49(31)
  01f79ec  cmpwi 3, 0
  01f79f0  bt 2, 0x1f7a5c
  01f79f4  lis 3, 149
  01f79f8  lfs 1, 20(31)
  01f79fc  lfs 2, 16(31)
  01f7a00  addic 3, 3, 5056
  01f7a04  lfs 3, 324(3)
  01f7a08  lfs 4, 320(3)
  01f7a0c  fsubs 1, 1, 3
  01f7a10  fsubs 2, 2, 4
  01f7a14  lfs 3, 24(31)
  01f7a18  lfs 4, 328(3)
  01f7a1c  fsubs 3, 3, 4
  01f7a20  lis 3, 31
  01f7a24  fmuls 1, 1, 1
  01f7a28  addi 3, 3, 30936
  01f7a2c  fmadds 1, 2, 2, 1
  01f7a30  lfs 2, 4(3)
  01f7a34  fmadds 1, 3, 3, 1
  01f7a38  fsqrts 1, 1
  01f7a3c  fcmpu 0, 1, 2
  01f7a40  cror 6, 1, 2
  01f7a44  bt 6, 0x1f7a5c
  01f7a48  ori 3, 31, 0
  01f7a4c  bl 0x106360
  01f7a50  nop
  01f7a54  li 3, 23
  01f7a58  stb 3, 127(31)
  01f7a5c  lis 3, 31
  01f7a60  lis 4, 16256
  01f7a64  addi 3, 3, 30936
  01f7a68  lfs 31, 8(3)
  01f7a6c  lbz 3, 32(31)
  01f7a70  stw 4, 88(31)
  01f7a74  cmpwi 1, 3, 13
  01f7a78  cmpwi 3, 0
  01f7a7c  cror 2, 2, 6
  01f7a80  bt 2, 0x1f7aa8
  01f7a84  lfs 1, 412(30)
  01f7a88  lfs 29, 24(31)
  01f7a8c  bl 0x5e8078
  01f7a90  nop
  01f7a94  lis 4, 118
  01f7a98  lbz 3, 32(31)
  01f7a9c  lfs 2, 25420(4)
  01f7aa0  fnmsubs 1, 2, 1, 29
  01f7aa4  stfs 1, 24(31)
  01f7aa8  cmpwi 6, 3, 6
  01f7aac  cmpwi 1, 3, 13
  01f7ab0  bt 25, 0x1f7ae4
  01f7ab4  cmpwi 1, 3, 5
  01f7ab8  bt 26, 0x1f82f8
  01f7abc  cmpwi 6, 3, 4
  01f7ac0  bt 6, 0x1f8910
  01f7ac4  cmpwi 1, 3, 3
  01f7ac8  bt 26, 0x1f817c
  01f7acc  cmpwi 6, 3, 2
  01f7ad0  bt 6, 0x1f7e00
  01f7ad4  cmpwi 1, 3, 0
  01f7ad8  bt 26, 0x1f7d98
  01f7adc  bt 6, 0x1f7b1c
  01f7ae0  b 0x1f94a0
  01f7ae4  cmpwi 6, 3, 12
  01f7ae8  bt 6, 0x1f943c
  01f7aec  cmpwi 1, 3, 11
  01f7af0  bt 26, 0x1f924c
  01f7af4  cmpwi 6, 3, 10
  01f7af8  bt 6, 0x1f8f84
  01f7afc  cmpwi 1, 3, 9
  01f7b00  bt 26, 0x1f8cf8
  01f7b04  cmpwi 6, 3, 8
  01f7b08  bt 6, 0x1f8a80
  01f7b0c  cmpwi 1, 3, 7
  01f7b10  bt 26, 0x1f871c
  01f7b14  bt 6, 0x1f83e4
  01f7b18  b 0x1f94a0
  01f7b1c  lis 3, 16000
  01f7b20  lis 4, 16256
  01f7b24  li 29, 0
  01f7b28  li 5, 1
  01f7b2c  stw 3, 48(30)
  01f7b30  stw 4, 32(30)
  01f7b34  stb 29, 40(30)
  01f7b38  stb 5, 41(30)
  01f7b3c  sth 5, 36(30)
  01f7b40  lfs 1, 16(31)
  01f7b44  lhz 3, 52(31)
  01f7b48  stfs 1, 304(30)
  01f7b4c  lfs 2, 20(31)
  01f7b50  ori 3, 3, 4096
  01f7b54  stfs 2, 308(30)
  01f7b58  lfs 3, 24(31)
  01f7b5c  sth 3, 52(31)
  01f7b60  stfs 3, 312(30)
  01f7b64  lfs 4, 28(31)
  01f7b68  stfs 1, 320(30)
  01f7b6c  stfs 4, 316(30)
  01f7b70  stfs 2, 324(30)
  01f7b74  stfs 3, 328(30)
  01f7b78  stfs 4, 332(30)
  01f7b7c  bl 0xfcc68
  01f7b80  nop
  01f7b84  lis 3, 31
  01f7b88  stfs 1, 412(30)
  01f7b8c  lis 4, 118
  01f7b90  addi 28, 3, 30936
  01f7b94  lfs 31, 12(28)
  01f7b98  stw 29, 368(30)
  01f7b9c  lfs 1, 25436(4)
  01f7ba0  bl 0x502758
  01f7ba4  nop
  01f7ba8  stb 3, 88(30)
  01f7bac  lis 3, 118
  01f7bb0  lfs 1, 16(28)
  01f7bb4  lfs 2, 25440(3)
  01f7bb8  fmuls 1, 2, 1
  01f7bbc  bl 0x502758
  01f7bc0  nop
  01f7bc4  stb 3, 90(30)
  01f7bc8  lwz 3, 372(30)
  01f7bcc  cmpwi 3, 0
  01f7bd0  bt 1, 0x1f7be0
  01f7bd4  cmpwi 3, -1
  01f7bd8  bf 1, 0x1f94a0
  01f7bdc  b 0x1f7bf4
  01f7be0  cmpwi 3, 1
  01f7be4  bf 1, 0x1f7c60
  01f7be8  cmpwi 3, 2
  01f7bec  bf 1, 0x1f7c70
  01f7bf0  b 0x1f94a0
  01f7bf4  lis 4, 31
  01f7bf8  li 3, 3
  01f7bfc  addi 4, 4, 30936
  01f7c00  stb 3, 32(31)
  01f7c04  lfs 1, 24(31)
  01f7c08  lfs 2, 20(4)
  01f7c0c  lbz 3, 83(31)
  01f7c10  fadds 1, 1, 2
  01f7c14  cmpwi 3, 3
  01f7c18  stfs 1, 24(31)
  01f7c1c  bt 2, 0x1f94a0
  01f7c20  lis 3, 31
  01f7c24  lis 4, 114
  01f7c28  addi 3, 3, 30936
  01f7c2c  li 5, 0
  01f7c30  lfs 1, 24(3)
  01f7c34  lfs 2, -3056(4)
  01f7c38  ori 3, 31, 0
  01f7c3c  li 4, 3
  01f7c40  fmuls 1, 2, 1
  01f7c44  fctiwz 1, 1
  01f7c48  stfd 1, 296(1)
  01f7c4c  lwz 6, 300(1)
  01f7c50  extsw 6, 6
  01f7c54  bl 0xfddc0
  01f7c58  nop
  01f7c5c  b 0x1f94a0
  01f7c60  ori 3, 31, 0
  01f7c64  bl 0xefb38
  01f7c68  nop
  01f7c6c  b 0x1f9534
  01f7c70  bl 0xfcc68
  01f7c74  nop
  01f7c78  bl 0x5e8078
  01f7c7c  nop
  01f7c80  lis 3, 31
  01f7c84  addi 29, 3, 30936
  01f7c88  lfs 2, 28(29)
  01f7c8c  fmr 30, 2
  01f7c90  fmuls 1, 1, 30
  01f7c94  stfs 1, 112(1)
  01f7c98  bl 0xfcc68
  01f7c9c  nop
  01f7ca0  bl 0x5e8128
  01f7ca4  nop
  01f7ca8  li 3, 9
  01f7cac  fmuls 1, 1, 30
  01f7cb0  lis 4, 165
  01f7cb4  li 5, 0
  01f7cb8  stb 3, 32(31)
  01f7cbc  lwz 3, 404(30)
  01f7cc0  lwz 4, 7128(4)
  01f7cc4  slwi 3, 3, 7
  01f7cc8  stw 5, 120(1)
  01f7ccc  addc 3, 4, 3
  01f7cd0  addic 4, 31, 16
  01f7cd4  clrldi 5, 3, 32
  01f7cd8  stfs 1, 116(1)
  01f7cdc  addic 3, 1, 128
  01f7ce0  lfs 1, 56(5)
  01f7ce4  addic 5, 1, 112
  01f7ce8  stfs 1, 24(31)
  01f7cec  bl 0x502b08
  01f7cf0  nop
  01f7cf4  lis 3, 118
  01f7cf8  fmr 1, 31
  01f7cfc  lfs 2, 25428(3)
  01f7d00  bl 0xfcbe8
  01f7d04  nop
  01f7d08  lis 3, 118
  01f7d0c  stfs 1, 416(30)
  01f7d10  lfs 1, 32(29)
  01f7d14  lis 4, 114
  01f7d18  lfs 2, 25432(3)
  01f7d1c  lfs 3, -3056(4)
  01f7d20  fmuls 5, 2, 1
  01f7d24  lfs 4, 36(29)
  01f7d28  lfs 2, 40(29)
  01f7d2c  fmr 1, 4
  01f7d30  fmuls 31, 3, 5
  01f7d34  bl 0xfcbe8
  01f7d38  nop
  01f7d3c  fmuls 1, 31, 1
  01f7d40  bl 0x502758
  01f7d44  nop
  01f7d48  stw 3, 420(30)
  01f7d4c  lbz 3, 83(31)
  01f7d50  cmpwi 3, 3
  01f7d54  bt 2, 0x1f94a0
  01f7d58  lis 3, 31
  01f7d5c  lis 4, 114
  01f7d60  addi 3, 3, 30936
  01f7d64  li 5, 0
  01f7d68  lfs 1, 24(3)
  01f7d6c  lfs 2, -3056(4)
  01f7d70  ori 3, 31, 0
  01f7d74  fmuls 1, 2, 1
  01f7d78  li 4, 3
  01f7d7c  fctiwz 1, 1
  01f7d80  stfd 1, 296(1)
  01f7d84  lwz 6, 300(1)
  01f7d88  extsw 6, 6
  01f7d8c  bl 0xfddc0
  01f7d90  nop
  01f7d94  b 0x1f94a0
  01f7d98  lis 3, 16512
  01f7d9c  lis 4, 31
  01f7da0  addic 5, 30, 296
  01f7da4  addi 29, 4, 30936
  01f7da8  stw 3, 88(31)
  01f7dac  lis 4, 114
  01f7db0  lis 3, 114
  01f7db4  lfs 1, 44(29)
  01f7db8  lfs 3, 20(29)
  01f7dbc  lfs 2, -3048(3)
  01f7dc0  lfs 4, 48(29)
  01f7dc4  addic 3, 31, 24
  01f7dc8  fmuls 2, 2, 1
  01f7dcc  lfs 5, 312(30)
  01f7dd0  lfs 6, -3052(4)
  01f7dd4  fadds 1, 5, 3
  01f7dd8  fmuls 4, 6, 4
  01f7ddc  fmr 3, 2
  01f7de0  bl 0x109c30
  01f7de4  nop
  01f7de8  lfs 2, 12(29)
  01f7dec  fcmpu 0, 1, 2
  01f7df0  bf 2, 0x1f94a0
  01f7df4  li 3, 3
  01f7df8  stb 3, 32(31)
  01f7dfc  b 0x1f94a0
  01f7e00  lis 3, 31
  01f7e04  lis 4, 16512
  01f7e08  addi 28, 3, 30936
  01f7e0c  lfs 30, 52(28)
  01f7e10  stw 4, 88(31)
  01f7e14  lfs 1, 292(30)
  01f7e18  lfs 2, 288(30)
  01f7e1c  fmuls 1, 1, 1
  01f7e20  lfs 3, 296(30)
  01f7e24  li 3, 0
  01f7e28  addic 27, 31, 72
  01f7e2c  fmadds 1, 2, 2, 1
  01f7e30  lfs 2, 20(31)
  01f7e34  fmadds 1, 3, 3, 1
  01f7e38  lfs 3, 16(31)
  01f7e3c  lfs 4, 24(31)
  01f7e40  fsqrts 1, 1
  01f7e44  stfs 1, 288(1)
  01f7e48  lfs 1, 324(30)
  01f7e4c  lfs 5, 320(30)
  01f7e50  fsubs 2, 1, 2
  01f7e54  fsubs 1, 5, 3
  01f7e58  lfs 3, 328(30)
  01f7e5c  lfs 31, 12(28)
  01f7e60  fsubs 3, 3, 4
  01f7e64  stw 3, 292(1)
  01f7e68  fmuls 4, 2, 2
  01f7e6c  fmadds 4, 1, 1, 4
  01f7e70  fmadds 29, 3, 3, 4
  01f7e74  fsqrts 29, 29
  01f7e78  bl 0x5e8338
  01f7e7c  nop
  01f7e80  lis 3, 114
  01f7e84  lfs 2, 56(28)
  01f7e88  lfs 3, 60(28)
  01f7e8c  lis 4, 114
  01f7e90  addic 5, 30, 368
  01f7e94  lfs 4, -3048(3)
  01f7e98  lfs 5, -3052(4)
  01f7e9c  ori 3, 27, 0
  01f7ea0  fmuls 2, 4, 2
  01f7ea4  fmuls 4, 5, 3
  01f7ea8  fmr 3, 2
  01f7eac  bl 0x10a2e0
  01f7eb0  nop
  01f7eb4  lfs 1, 320(30)
  01f7eb8  lfs 2, 16(31)
  01f7ebc  lfs 3, 324(30)
  01f7ec0  fsubs 1, 1, 2
  01f7ec4  lfs 4, 20(31)
  01f7ec8  fsubs 2, 3, 4
  01f7ecc  bl 0x5e8338
  01f7ed0  nop
  01f7ed4  lfs 2, 72(31)
  01f7ed8  bl 0x5026a0
  01f7edc  nop
  01f7ee0  lfs 2, 64(28)
  01f7ee4  fcmpu 0, 1, 2
  01f7ee8  cror 6, 1, 2
  01f7eec  bt 6, 0x1f7f78
  01f7ef0  lis 3, 31
  01f7ef4  fmr 1, 29
  01f7ef8  lis 4, 114
  01f7efc  addi 3, 3, 30936
  01f7f00  lis 6, 114
  01f7f04  addic 5, 1, 288
  01f7f08  lfs 4, 68(3)
  01f7f0c  lfs 2, -3048(4)
  01f7f10  lfs 3, -3052(6)
  01f7f14  addic 3, 1, 292
  01f7f18  fmuls 2, 2, 4
  01f7f1c  fmuls 4, 3, 4
  01f7f20  fmr 3, 2
  01f7f24  bl 0x109c30
  01f7f28  nop
  01f7f2c  lfs 1, 320(30)
  01f7f30  lfs 2, 16(31)
  01f7f34  addic 3, 30, 288
  01f7f38  fsubs 1, 1, 2
  01f7f3c  lfs 2, 324(30)
  01f7f40  lfs 3, 328(30)
  01f7f44  lfs 4, 332(30)
  01f7f48  stfs 1, 288(30)
  01f7f4c  lfs 1, 20(31)
  01f7f50  fsubs 1, 2, 1
  01f7f54  stfs 1, 292(30)
  01f7f58  lfs 1, 24(31)
  01f7f5c  stfs 4, 300(30)
  01f7f60  fsubs 1, 3, 1
  01f7f64  stfs 1, 296(30)
  01f7f68  lfs 1, 288(1)
  01f7f6c  bl 0x110488
  01f7f70  nop
  01f7f74  b 0x1f7f8c
  01f7f78  li 3, 0
  01f7f7c  stw 3, 300(30)
  01f7f80  stw 3, 296(30)
  01f7f84  stw 3, 292(30)
  01f7f88  stw 3, 288(30)
  01f7f8c  lis 3, 31
  01f7f90  fmr 2, 31
  01f7f94  addic 4, 30, 288
  01f7f98  addi 5, 3, 30936
  01f7f9c  ori 3, 31, 0
  01f7fa0  li 6, 512
  01f7fa4  li 8, 0
  01f7fa8  lfs 31, 72(5)
  01f7fac  fmr 1, 31
  01f7fb0  bl 0x100ef8
  01f7fb4  nop
  01f7fb8  cmpwi 3, 1
  01f7fbc  bf 2, 0x1f8048
  01f7fc0  fmr 1, 30
  01f7fc4  lis 3, 31
  01f7fc8  addi 3, 3, 30936
  01f7fcc  lfs 2, 48(3)
  01f7fd0  bl 0xfcbe8
  01f7fd4  nop
  01f7fd8  fmr 31, 1
  01f7fdc  bl 0xfcc68
  01f7fe0  nop
  01f7fe4  fmr 30, 1
  01f7fe8  bl 0x5e8078
  01f7fec  nop
  01f7ff0  fmr 29, 1
  01f7ff4  fmr 1, 30
  01f7ff8  bl 0x5e8128
  01f7ffc  nop
  01f8000  fmr 30, 1
  01f8004  lis 3, 118
  01f8008  lis 4, 118
  01f800c  lfs 1, 25412(3)
  01f8010  lfs 2, 25416(4)
  01f8014  bl 0xfcbe8
  01f8018  nop
  01f801c  lfs 2, 304(30)
  01f8020  lfs 3, 308(30)
  01f8024  fmadds 2, 29, 31, 2
  01f8028  lfs 4, 312(30)
  01f802c  fmadds 3, 30, 31, 3
  01f8030  fadds 1, 1, 4
  01f8034  stfs 2, 320(30)
  01f8038  stfs 3, 324(30)
  01f803c  stfs 1, 328(30)
  01f8040  stfs 1, 332(30)
  01f8044  b 0x1f80b8
  01f8048  lis 3, 31
  01f804c  addi 3, 3, 30936
  01f8050  lfs 1, 76(3)
  01f8054  fcmpu 0, 29, 1
  01f8058  cror 6, 1, 2
  01f805c  bt 6, 0x1f80b8
  01f8060  lis 3, 31
  01f8064  li 4, 4
  01f8068  addi 3, 3, 30936
  01f806c  stb 4, 32(31)
  01f8070  lfs 1, 80(3)
  01f8074  lfs 2, 84(3)
  01f8078  bl 0xfcbe8
  01f807c  nop
  01f8080  bl 0x502758
  01f8084  nop
  01f8088  extsw 3, 3
  01f808c  li 4, 408
  01f8090  std 3, 296(1)
  01f8094  lis 3, 114
  01f8098  lfs 1, -3056(3)
  01f809c  lfd 2, 296(1)
  01f80a0  fcfid 2, 2
  01f80a4  frsp 2, 2
  01f80a8  fadds 2, 2, 31
  01f80ac  fmuls 1, 1, 2
  01f80b0  fctiwz 1, 1
  01f80b4  stfiwx 1, 4, 30
  01f80b8  lwz 3, 260(30)
  01f80bc  cmpwi 3, 2
  01f80c0  bt 2, 0x1f94a0
  01f80c4  lfs 1, 20(31)
  01f80c8  lfs 2, 20(29)
  01f80cc  lfs 3, 16(31)
  01f80d0  fsubs 1, 1, 2
  01f80d4  lfs 2, 16(29)
  01f80d8  fsubs 2, 3, 2
  01f80dc  lis 3, 31
  01f80e0  addi 3, 3, 30936
  01f80e4  fmuls 1, 1, 1
  01f80e8  fmadds 1, 2, 2, 1
  01f80ec  lfs 2, 88(3)
  01f80f0  fsqrts 1, 1
  01f80f4  fcmpu 0, 1, 2
  01f80f8  cror 6, 0, 2
  01f80fc  bt 6, 0x1f94a0
  01f8100  addic 3, 31, 188
  01f8104  bl 0x500060
  01f8108  nop
  01f810c  cmpwi 3, 0
  01f8110  bt 2, 0x1f94a0
  01f8114  lbz 3, 33(31)
  01f8118  cmpwi 3, 255
  01f811c  bt 2, 0x1f8128
  01f8120  ori 3, 31, 0
  01f8124  bl 0x1f6f08
  01f8128  li 3, 6
  01f812c  lbz 4, 83(31)
  01f8130  cmpwi 4, 1
  01f8134  stb 3, 32(31)
  01f8138  bt 2, 0x1f94a0
  01f813c  lis 3, 31
  01f8140  lis 4, 114
  01f8144  addi 3, 3, 30936
  01f8148  li 5, 0
  01f814c  lfs 1, 24(3)
  01f8150  lfs 2, -3056(4)
  01f8154  ori 3, 31, 0
  01f8158  li 4, 1
  01f815c  fmuls 1, 2, 1
  01f8160  fctiwz 1, 1
  01f8164  stfd 1, 296(1)
  01f8168  lwz 6, 300(1)
  01f816c  extsw 6, 6
  01f8170  bl 0xfddc0
  01f8174  nop
  01f8178  b 0x1f94a0
  01f817c  lis 3, 31
  01f8180  lis 4, 16512
  01f8184  lwz 5, 260(30)
  01f8188  addi 3, 3, 30936
  01f818c  cmpwi 5, 2
  01f8190  lfs 31, 52(3)
  01f8194  stw 4, 88(31)
  01f8198  bt 2, 0x1f8254
  01f819c  lfs 1, 20(31)
  01f81a0  lfs 2, 20(29)
  01f81a4  lfs 3, 16(31)
  01f81a8  fsubs 1, 1, 2
  01f81ac  lfs 2, 16(29)
  01f81b0  fsubs 2, 3, 2
  01f81b4  lis 3, 31
  01f81b8  addi 3, 3, 30936
  01f81bc  fmuls 1, 1, 1
  01f81c0  fmadds 1, 2, 2, 1
  01f81c4  lfs 2, 88(3)
  01f81c8  fsqrts 1, 1
  01f81cc  fcmpu 0, 1, 2
  01f81d0  cror 6, 0, 2
  01f81d4  bt 6, 0x1f8254
  01f81d8  addic 3, 31, 188
  01f81dc  bl 0x500060
  01f81e0  nop
  01f81e4  cmpwi 3, 0
  01f81e8  bt 2, 0x1f8254
  01f81ec  lbz 3, 33(31)
  01f81f0  cmpwi 3, 255
  01f81f4  bt 2, 0x1f8200
  01f81f8  ori 3, 31, 0
  01f81fc  bl 0x1f6f08
  01f8200  li 3, 6
  01f8204  lbz 4, 83(31)
  01f8208  cmpwi 4, 1
  01f820c  stb 3, 32(31)
  01f8210  bt 2, 0x1f94a0
  01f8214  lis 3, 31
  01f8218  lis 4, 114
  01f821c  addi 3, 3, 30936
  01f8220  li 5, 0
  01f8224  lfs 1, 24(3)
  01f8228  lfs 2, -3056(4)
  01f822c  ori 3, 31, 0
  01f8230  fmuls 1, 2, 1
  01f8234  li 4, 1
  01f8238  fctiwz 1, 1
  01f823c  stfd 1, 296(1)
  01f8240  lwz 6, 300(1)
  01f8244  extsw 6, 6
  01f8248  bl 0xfddc0
  01f824c  nop
  01f8250  b 0x1f94a0
  01f8254  addic 3, 30, 408
  01f8258  bl 0x4fff60
  01f825c  nop
  01f8260  cmpwi 3, 0
  01f8264  bt 2, 0x1f94a0
  01f8268  fmr 1, 31
  01f826c  lis 3, 31
  01f8270  addi 3, 3, 30936
  01f8274  lfs 2, 48(3)
  01f8278  bl 0xfcbe8
  01f827c  nop
  01f8280  fmr 31, 1
  01f8284  bl 0xfcc68
  01f8288  nop
  01f828c  fmr 30, 1
  01f8290  bl 0x5e8078
  01f8294  nop
  01f8298  fmr 29, 1
  01f829c  fmr 1, 30
  01f82a0  bl 0x5e8128
  01f82a4  nop
  01f82a8  lis 3, 118
  01f82ac  fmr 30, 1
  01f82b0  lis 4, 118
  01f82b4  lfs 1, 25412(3)
  01f82b8  lfs 2, 25416(4)
  01f82bc  bl 0xfcbe8
  01f82c0  nop
  01f82c4  lfs 2, 304(30)
  01f82c8  lfs 3, 308(30)
  01f82cc  fmadds 2, 29, 31, 2
  01f82d0  lfs 4, 312(30)
  01f82d4  fmadds 3, 30, 31, 3
  01f82d8  fadds 1, 1, 4
  01f82dc  stfs 2, 320(30)
  01f82e0  stfs 3, 324(30)
  01f82e4  stfs 1, 328(30)
  01f82e8  li 3, 3
  01f82ec  stfs 1, 332(30)
  01f82f0  stb 3, 32(31)
  01f82f4  b 0x1f94a0
  01f82f8  lfs 1, 16(29)
  01f82fc  lfs 2, 16(31)
  01f8300  lfs 3, 20(29)
  01f8304  lfs 4, 20(31)
  01f8308  fsubs 1, 1, 2
  01f830c  fsubs 2, 3, 4
  01f8310  bl 0x5e8338
  01f8314  nop
  01f8318  lis 3, 31
  01f831c  lis 6, 114
  01f8320  addi 4, 3, 30936
  01f8324  ori 3, 31, 0
  01f8328  addic 5, 30, 368
  01f832c  lfs 4, 100(4)
  01f8330  lfs 2, 92(4)
  01f8334  lfs 5, 96(4)
  01f8338  lfs 6, -3052(6)
  01f833c  fmr 3, 5
  01f8340  fmuls 4, 6, 4
  01f8344  bl 0xff2e8
  01f8348  nop
  01f834c  lbz 3, 112(31)
  01f8350  rlwinm 3, 3, 0, 30, 30
  01f8354  cmpwi 3, 0
  01f8358  bt 2, 0x1f94a0
  01f835c  li 3, 7
  01f8360  lbz 4, 83(31)
  01f8364  cmpwi 4, 3
  01f8368  stb 3, 32(31)
  01f836c  bt 2, 0x1f83ac
  01f8370  lis 3, 31
  01f8374  lis 4, 114
  01f8378  addi 3, 3, 30936
  01f837c  li 5, 0
  01f8380  lfs 1, 24(3)
  01f8384  lfs 2, -3056(4)
  01f8388  ori 3, 31, 0
  01f838c  fmuls 1, 2, 1
  01f8390  li 4, 3
  01f8394  fctiwz 1, 1
  01f8398  stfd 1, 296(1)
  01f839c  lwz 6, 300(1)
  01f83a0  extsw 6, 6
  01f83a4  bl 0xfddc0
  01f83a8  nop
  01f83ac  li 3, 255
  01f83b0  bl 0xfc620
  01f83b4  nop
  01f83b8  lis 4, 31
  01f83bc  clrlwi 3, 3, 31
  01f83c0  addi 4, 4, 30936
  01f83c4  cmpwi 3, 0
  01f83c8  lfs 1, 104(4)
  01f83cc  bt 2, 0x1f83dc
  01f83d0  lis 3, 31
  01f83d4  addi 3, 3, 30936
  01f83d8  lfs 1, 108(3)
  01f83dc  stfs 1, 400(30)
  01f83e0  b 0x1f94a0
  01f83e4  lfs 1, 16(29)
  01f83e8  lfs 2, 16(31)
  01f83ec  lfs 3, 20(29)
  01f83f0  lfs 4, 20(31)
  01f83f4  fsubs 1, 1, 2
  01f83f8  fsubs 2, 3, 4
  01f83fc  bl 0x5e8338
  01f8400  nop
  01f8404  lfs 2, 400(30)
  01f8408  bl 0x502578
  01f840c  nop
  01f8410  lis 3, 31
  01f8414  lis 27, 114
  01f8418  addi 28, 3, 30936
  01f841c  addic 5, 30, 368
  01f8420  ori 3, 31, 0
  01f8424  lfs 31, 100(28)
  01f8428  lfs 2, 92(28)
  01f842c  lfs 3, 96(28)
  01f8430  lfs 5, -3052(27)
  01f8434  fmuls 4, 5, 31
  01f8438  bl 0xff2e8
  01f843c  nop
  01f8440  lfs 30, 72(28)
  01f8444  addic 3, 31, 16
  01f8448  li 4, 0
  01f844c  fmr 1, 30
  01f8450  bl 0xffb70
  01f8454  nop
  01f8458  lfs 2, 24(29)
  01f845c  lfs 3, 24(31)
  01f8460  lfs 4, 52(28)
  01f8464  fsubs 5, 3, 2
  01f8468  fsub 6, 2, 3
  01f846c  lfs 7, 16(29)
  01f8470  lfs 8, 16(31)
  01f8474  lfs 9, 20(29)
  01f8478  fsubs 7, 7, 8
  01f847c  lfs 8, 28(29)
  01f8480  lfs 10, -3052(27)
  01f8484  addic 26, 30, 288
  01f8488  fnmsubs 2, 5, 4, 2
  01f848c  ori 3, 26, 0
  01f8490  ori 4, 26, 0
  01f8494  stfs 7, 288(30)
  01f8498  fsel 2, 6, 3, 2
  01f849c  lfs 3, 20(31)
  01f84a0  fsubs 3, 9, 3
  01f84a4  fadds 2, 2, 30
  01f84a8  stfs 3, 292(30)
  01f84ac  lfs 3, 24(31)
  01f84b0  stfs 8, 300(30)
  01f84b4  fsub 4, 2, 1
  01f84b8  fsel 1, 4, 2, 1
  01f84bc  fsubs 1, 1, 3
  01f84c0  stfs 1, 296(30)
  01f84c4  lfs 1, 28(28)
  01f84c8  fmuls 1, 10, 1
  01f84cc  bl 0x5e7f98
  01f84d0  nop
  01f84d4  lfs 1, 72(31)
  01f84d8  bl 0x5e8078
  01f84dc  nop
  01f84e0  lfs 2, 292(30)
  01f84e4  lfs 3, 288(30)
  01f84e8  fmuls 2, 2, 2
  01f84ec  fmadds 2, 3, 3, 2
  01f84f0  fsqrts 2, 2
  01f84f4  fmuls 1, 1, 2
  01f84f8  stfs 1, 288(30)
  01f84fc  lfs 1, 72(31)
  01f8500  bl 0x5e8128
  01f8504  nop
  01f8508  lfs 2, 292(30)
  01f850c  lfs 3, 288(30)
  01f8510  fmuls 2, 2, 2
  01f8514  ori 3, 31, 0
  01f8518  ori 4, 26, 0
  01f851c  li 6, 512
  01f8520  li 8, 0
  01f8524  fmadds 2, 3, 3, 2
  01f8528  fsqrts 2, 2
  01f852c  fmuls 2, 1, 2
  01f8530  fmr 1, 30
  01f8534  stfs 2, 292(30)
  01f8538  lfs 2, 12(28)
  01f853c  bl 0x100ef8
  01f8540  nop
  01f8544  lfs 1, 292(30)
  01f8548  lfs 3, 288(30)
  01f854c  fmuls 1, 1, 1
  01f8550  lfs 2, 296(30)
  01f8554  addic 28, 31, 68
  01f8558  fmadds 1, 3, 3, 1
  01f855c  fsqrts 1, 1
  01f8560  bl 0x5e8338
  01f8564  nop
  01f8568  lfs 2, -3052(27)
  01f856c  ori 3, 28, 0
  01f8570  li 6, 0
  01f8574  fmuls 2, 2, 31
  01f8578  fneg 1, 1
  01f857c  bl 0x109ec0
  01f8580  nop
  01f8584  lfs 1, 20(31)
  01f8588  lfs 2, 20(29)
  01f858c  lfs 3, 16(31)
  01f8590  fsubs 1, 1, 2
  01f8594  lfs 2, 16(29)
  01f8598  fsubs 2, 3, 2
  01f859c  lis 3, 118
  01f85a0  fmuls 1, 1, 1
  01f85a4  fmadds 1, 2, 2, 1
  01f85a8  lfs 2, 25404(3)
  01f85ac  fsqrts 1, 1
  01f85b0  fcmpu 0, 2, 1
  01f85b4  cror 6, 0, 2
  01f85b8  bt 6, 0x1f86bc
  01f85bc  lis 3, 151
  01f85c0  lfs 1, 24(31)
  01f85c4  lis 4, 31
  01f85c8  addic 3, 3, -25376
  01f85cc  addi 4, 4, 30936
  01f85d0  lfs 2, 136(3)
  01f85d4  fsubs 1, 1, 2
  01f85d8  lfs 2, 20(4)
  01f85dc  fabs 1, 1
  01f85e0  fcmpu 0, 1, 2
  01f85e4  cror 6, 1, 2
  01f85e8  bt 6, 0x1f8668
  01f85ec  li 3, 0
  01f85f0  li 4, 0
  01f85f4  ori 5, 31, 0
  01f85f8  bl 0x15d12c
  01f85fc  nop
  01f8600  li 3, 8
  01f8604  li 4, 0
  01f8608  stb 3, 32(31)
  01f860c  stw 4, 300(30)
  01f8610  stw 4, 296(30)
  01f8614  stw 4, 292(30)
  01f8618  stw 4, 288(30)
  01f861c  lbz 3, 83(31)
  01f8620  cmpwi 3, 2
  01f8624  bt 2, 0x1f94a0
  01f8628  lis 3, 31
  01f862c  lis 4, 114
  01f8630  addi 3, 3, 30936
  01f8634  li 5, 4
  01f8638  lfs 1, 112(3)
  01f863c  lfs 2, -3056(4)
  01f8640  ori 3, 31, 0
  01f8644  fmuls 1, 2, 1
  01f8648  li 4, 2
  01f864c  fctiwz 1, 1
  01f8650  stfd 1, 296(1)
  01f8654  lwz 6, 300(1)
  01f8658  extsw 6, 6
  01f865c  bl 0xfddc0
  01f8660  nop
  01f8664  b 0x1f94a0
  01f8668  lbz 3, 83(31)
  01f866c  cmpwi 3, 3
  01f8670  bt 2, 0x1f86b0
  01f8674  lis 3, 31
  01f8678  lis 4, 114
  01f867c  addi 3, 3, 30936
  01f8680  li 5, 0
  01f8684  lfs 1, 116(3)
  01f8688  lfs 2, -3056(4)
  01f868c  ori 3, 31, 0
  01f8690  li 4, 3
  01f8694  fmuls 1, 2, 1
  01f8698  fctiwz 1, 1
  01f869c  stfd 1, 296(1)
  01f86a0  lwz 6, 300(1)
  01f86a4  extsw 6, 6
  01f86a8  bl 0xfddc0
  01f86ac  nop
  01f86b0  li 3, 5
  01f86b4  stb 3, 32(31)
  01f86b8  b 0x1f94a0
  01f86bc  lwz 3, 260(30)
  01f86c0  cmpwi 3, 2
  01f86c4  bf 2, 0x1f94a0
  01f86c8  lbz 3, 83(31)
  01f86cc  cmpwi 3, 3
  01f86d0  bt 2, 0x1f8710
  01f86d4  lis 3, 31
  01f86d8  lis 4, 114
  01f86dc  addi 3, 3, 30936
  01f86e0  li 5, 0
  01f86e4  lfs 1, 116(3)
  01f86e8  lfs 2, -3056(4)
  01f86ec  ori 3, 31, 0
  01f86f0  li 4, 3
  01f86f4  fmuls 1, 2, 1
  01f86f8  fctiwz 1, 1
  01f86fc  stfd 1, 296(1)
  01f8700  lwz 6, 300(1)
  01f8704  extsw 6, 6
  01f8708  bl 0xfddc0
  01f870c  nop
  01f8710  li 3, 5
  01f8714  stb 3, 32(31)
  01f8718  b 0x1f94a0
  01f871c  lfs 1, 16(29)
  01f8720  lfs 2, 16(31)
  01f8724  lfs 3, 20(29)
  01f8728  lfs 4, 20(31)
  01f872c  fsubs 1, 1, 2
  01f8730  fsubs 2, 3, 4
  01f8734  bl 0x5e8338
  01f8738  nop
  01f873c  lis 3, 31
  01f8740  lis 28, 114
  01f8744  addi 29, 3, 30936
  01f8748  addic 5, 30, 368
  01f874c  ori 3, 31, 0
  01f8750  lfs 4, 100(29)
  01f8754  lfs 2, 92(29)
  01f8758  lfs 5, 96(29)
  01f875c  lfs 6, -3052(28)
  01f8760  fmr 3, 5
  01f8764  fmuls 4, 6, 4
  01f8768  bl 0xff2e8
  01f876c  nop
  01f8770  lfs 1, 20(31)
  01f8774  lfs 2, 228(30)
  01f8778  lfs 3, 16(31)
  01f877c  fsubs 1, 1, 2
  01f8780  lfs 2, 224(30)
  01f8784  fsubs 3, 3, 2
  01f8788  lfs 2, 232(30)
  01f878c  addic 27, 31, 68
  01f8790  lfs 4, 24(31)
  01f8794  fsubs 2, 2, 4
  01f8798  fmuls 1, 1, 1
  01f879c  fmadds 1, 3, 3, 1
  01f87a0  fsqrts 1, 1
  01f87a4  bl 0x5e8338
  01f87a8  nop
  01f87ac  lfs 2, 120(29)
  01f87b0  lfs 3, -3052(28)
  01f87b4  ori 3, 27, 0
  01f87b8  li 6, 0
  01f87bc  fmuls 2, 3, 2
  01f87c0  fneg 1, 1
  01f87c4  bl 0x109ec0
  01f87c8  nop
  01f87cc  ori 3, 31, 0
  01f87d0  lfs 1, 68(29)
  01f87d4  bl 0x113e88
  01f87d8  nop
  01f87dc  cmpwi 3, 0
  01f87e0  bt 2, 0x1f88a0
  01f87e4  li 29, 1
  01f87e8  stw 31, 208(1)
  01f87ec  lis 28, 16256
  01f87f0  stw 29, 212(1)
  01f87f4  stw 29, 224(1)
  01f87f8  lfs 1, 72(31)
  01f87fc  stw 28, 220(1)
  01f8800  bl 0x5e8078
  01f8804  nop
  01f8808  lfs 2, 72(31)
  01f880c  stfs 1, 192(1)
  01f8810  fmr 1, 2
  01f8814  bl 0x5e8128
  01f8818  nop
  01f881c  lis 3, 17839
  01f8820  li 4, 0
  01f8824  stfs 1, 196(1)
  01f8828  ori 5, 3, 57190
  01f882c  stw 28, 200(1)
  01f8830  lhz 6, 166(31)
  01f8834  addic 28, 1, 144
  01f8838  ori 3, 31, 0
  01f883c  stb 4, 216(1)
  01f8840  stw 5, 204(1)
  01f8844  li 4, 0
  01f8848  stb 29, 217(1)
  01f884c  ori 5, 28, 0
  01f8850  sth 6, 218(1)
  01f8854  bl 0xf1114
  01f8858  nop
  01f885c  lis 4, 31
  01f8860  addic 29, 1, 192
  01f8864  addi 4, 4, 30936
  01f8868  ori 3, 28, 0
  01f886c  li 5, 0
  01f8870  ori 6, 31, 0
  01f8874  ori 7, 29, 0
  01f8878  lfs 1, 124(4)
  01f887c  bl 0x5e598
  01f8880  nop
  01f8884  addic 3, 31, 16
  01f8888  ori 4, 28, 0
  01f888c  li 5, 9
  01f8890  ori 6, 31, 0
  01f8894  ori 7, 29, 0
  01f8898  bl 0x57820
  01f889c  nop
  01f88a0  lwz 3, 260(30)
  01f88a4  cmpwi 3, 2
  01f88a8  bt 2, 0x1f88bc
  01f88ac  lbz 3, 112(31)
  01f88b0  rlwinm 3, 3, 0, 30, 30
  01f88b4  cmpwi 3, 0
  01f88b8  bt 2, 0x1f94a0
  01f88bc  lbz 3, 83(31)
  01f88c0  cmpwi 3, 3
  01f88c4  bt 2, 0x1f8904
  01f88c8  lis 3, 31
  01f88cc  lis 4, 114
  01f88d0  addi 3, 3, 30936
  01f88d4  li 5, 0
  01f88d8  lfs 1, 116(3)
  01f88dc  lfs 2, -3056(4)
  01f88e0  ori 3, 31, 0
  01f88e4  fmuls 1, 2, 1
  01f88e8  li 4, 3
  01f88ec  fctiwz 1, 1
  01f88f0  stfd 1, 296(1)
  01f88f4  lwz 6, 300(1)
  01f88f8  extsw 6, 6
  01f88fc  bl 0xfddc0
  01f8900  nop
  01f8904  li 3, 5
  01f8908  stb 3, 32(31)
  01f890c  b 0x1f94a0
  01f8910  lis 3, 31
  01f8914  lis 29, 114
  01f8918  addi 28, 3, 30936
  01f891c  addic 3, 31, 68
  01f8920  li 6, 0
  01f8924  lfs 30, 12(28)
  01f8928  lfs 3, 120(28)
  01f892c  lfs 2, -3052(29)
  01f8930  fmr 1, 30
  01f8934  fmuls 2, 2, 3
  01f8938  bl 0x109ec0
  01f893c  nop
  01f8940  lfs 1, 304(30)
  01f8944  lfs 2, 16(31)
  01f8948  lfs 3, 308(30)
  01f894c  lfs 4, 20(31)
  01f8950  fsubs 1, 1, 2
  01f8954  fsubs 2, 3, 4
  01f8958  bl 0x5e8338
  01f895c  nop
  01f8960  lfs 4, 100(28)
  01f8964  addic 5, 30, 368
  01f8968  lfs 2, 92(28)
  01f896c  ori 3, 31, 0
  01f8970  lfs 5, 96(28)
  01f8974  lfs 6, -3052(29)
  01f8978  fmr 3, 5
  01f897c  fmuls 4, 6, 4
  01f8980  bl 0xff2e8
  01f8984  nop
  01f8988  lfs 1, 72(31)
  01f898c  bl 0x5e8078
  01f8990  nop
  01f8994  lfs 31, 48(28)
  01f8998  lfs 3, -3052(29)
  01f899c  fmuls 2, 3, 31
  01f89a0  fmuls 1, 2, 1
  01f89a4  stfs 1, 288(30)
  01f89a8  lfs 1, 72(31)
  01f89ac  bl 0x5e8128
  01f89b0  nop
  01f89b4  fmr 2, 1
  01f89b8  lfs 1, -3052(29)
  01f89bc  li 3, 0
  01f89c0  lfs 4, 312(30)
  01f89c4  fmuls 3, 1, 31
  01f89c8  stw 3, 296(30)
  01f89cc  fmuls 2, 3, 2
  01f89d0  stfs 2, 292(30)
  01f89d4  lfs 31, 20(28)
  01f89d8  lfs 2, 24(31)
  01f89dc  fadds 4, 4, 31
  01f89e0  fsubs 2, 4, 2
  01f89e4  fcmpu 0, 2, 3
  01f89e8  cror 6, 0, 2
  01f89ec  bt 6, 0x1f89f8
  01f89f0  fmr 2, 3
  01f89f4  b 0x1f8a18
  01f89f8  lis 3, 31
  01f89fc  addi 3, 3, 30936
  01f8a00  lfs 3, 128(3)
  01f8a04  fmuls 1, 1, 3
  01f8a08  fcmpu 0, 2, 1
  01f8a0c  cror 6, 1, 2
  01f8a10  bt 6, 0x1f8a18
  01f8a14  fmr 2, 1
  01f8a18  lis 4, 31
  01f8a1c  stfs 2, 296(30)
  01f8a20  ori 3, 31, 0
  01f8a24  fmr 2, 30
  01f8a28  addi 5, 4, 30936
  01f8a2c  li 6, 512
  01f8a30  addic 4, 30, 288
  01f8a34  li 8, 0
  01f8a38  lfs 1, 72(5)
  01f8a3c  bl 0x100ef8
  01f8a40  nop
  01f8a44  lfs 1, 20(31)
  01f8a48  lfs 2, 308(30)
  01f8a4c  lfs 3, 16(31)
  01f8a50  fsubs 1, 1, 2
  01f8a54  lfs 2, 304(30)
  01f8a58  fsubs 2, 3, 2
  01f8a5c  fmuls 1, 1, 1
  01f8a60  fmadds 1, 2, 2, 1
  01f8a64  fsqrts 1, 1
  01f8a68  fcmpu 0, 1, 31
  01f8a6c  cror 6, 1, 2
  01f8a70  bt 6, 0x1f94a0
  01f8a74  li 3, 3
  01f8a78  stb 3, 32(31)
  01f8a7c  b 0x1f94a0
  01f8a80  lfs 2, 20(31)
  01f8a84  lfs 1, 20(29)
  01f8a88  lfs 3, 16(31)
  01f8a8c  fsubs 1, 2, 1
  01f8a90  lfs 4, 16(29)
  01f8a94  lfs 5, 24(31)
  01f8a98  lfs 6, 24(29)
  01f8a9c  fsubs 4, 3, 4
  01f8aa0  fsubs 5, 5, 6
  01f8aa4  fmuls 6, 1, 1
  01f8aa8  lfs 1, 304(30)
  01f8aac  lfs 7, 308(30)
  01f8ab0  fsubs 1, 1, 3
  01f8ab4  fsubs 2, 7, 2
  01f8ab8  fmadds 3, 4, 4, 6
  01f8abc  fmadds 30, 5, 5, 3
  01f8ac0  fsqrts 30, 30
  01f8ac4  bl 0x5e8338
  01f8ac8  nop
  01f8acc  lis 3, 31
  01f8ad0  lis 28, 114
  01f8ad4  addi 29, 3, 30936
  01f8ad8  addic 5, 30, 368
  01f8adc  ori 3, 31, 0
  01f8ae0  lfs 4, 64(29)
  01f8ae4  lfs 2, 92(29)
  01f8ae8  lfs 5, 96(29)
  01f8aec  lfs 6, -3052(28)
  01f8af0  fmr 3, 5
  01f8af4  fmuls 4, 6, 4
  01f8af8  bl 0xff2e8
  01f8afc  nop
  01f8b00  lfs 1, 72(31)
  01f8b04  bl 0x5e8078
  01f8b08  nop
  01f8b0c  lfs 31, 52(29)
  01f8b10  lfs 3, -3052(28)
  01f8b14  fmuls 2, 3, 31
  01f8b18  fmuls 1, 2, 1
  01f8b1c  stfs 1, 288(30)
  01f8b20  lfs 1, 72(31)
  01f8b24  bl 0x5e8128
  01f8b28  nop
  01f8b2c  lfs 2, -3052(28)
  01f8b30  li 4, 0
  01f8b34  fmuls 2, 2, 31
  01f8b38  addic 3, 30, 420
  01f8b3c  fmuls 1, 2, 1
  01f8b40  stfs 1, 292(30)
  01f8b44  lfs 31, 12(29)
  01f8b48  stw 4, 296(30)
  01f8b4c  bl 0x4fff60
  01f8b50  nop
  01f8b54  cmpwi 3, 0
  01f8b58  bt 2, 0x1f8bb8
  01f8b5c  lis 3, 118
  01f8b60  fmr 1, 31
  01f8b64  lfs 2, 25428(3)
  01f8b68  bl 0xfcbe8
  01f8b6c  nop
  01f8b70  lis 3, 31
  01f8b74  stfs 1, 416(30)
  01f8b78  lis 4, 118
  01f8b7c  addi 3, 3, 30936
  01f8b80  lis 5, 114
  01f8b84  lfs 4, 32(3)
  01f8b88  lfs 3, 25432(4)
  01f8b8c  lfs 5, -3056(5)
  01f8b90  fmuls 3, 3, 4
  01f8b94  lfs 1, 36(3)
  01f8b98  lfs 2, 40(3)
  01f8b9c  fmuls 29, 5, 3
  01f8ba0  bl 0xfcbe8
  01f8ba4  nop
  01f8ba8  fmuls 1, 29, 1
  01f8bac  bl 0x502758
  01f8bb0  nop
  01f8bb4  stw 3, 420(30)
  01f8bb8  lis 3, 165
  01f8bbc  lwz 5, 404(30)
  01f8bc0  lis 4, 31
  01f8bc4  slwi 5, 5, 7
  01f8bc8  addi 4, 4, 30936
  01f8bcc  lwz 3, 7128(3)
  01f8bd0  lfs 1, 24(31)
  01f8bd4  addc 3, 3, 5
  01f8bd8  lfs 2, 416(30)
  01f8bdc  lis 5, 114
  01f8be0  clrldi 3, 3, 32
  01f8be4  lfs 3, 20(4)
  01f8be8  lfs 4, 56(3)
  01f8bec  fsubs 4, 4, 1
  01f8bf0  lfs 1, -3052(5)
  01f8bf4  fmuls 3, 1, 3
  01f8bf8  fsubs 2, 4, 2
  01f8bfc  fcmpu 0, 2, 3
  01f8c00  cror 6, 0, 2
  01f8c04  bt 6, 0x1f8c10
  01f8c08  fmr 2, 3
  01f8c0c  b 0x1f8c30
  01f8c10  lis 3, 31
  01f8c14  addi 3, 3, 30936
  01f8c18  lfs 3, 132(3)
  01f8c1c  fmuls 1, 1, 3
  01f8c20  fcmpu 0, 2, 1
  01f8c24  cror 6, 1, 2
  01f8c28  bt 6, 0x1f8c30
  01f8c2c  fmr 2, 1
  01f8c30  lis 4, 31
  01f8c34  stfs 2, 296(30)
  01f8c38  ori 3, 31, 0
  01f8c3c  fmr 2, 31
  01f8c40  addi 5, 4, 30936
  01f8c44  li 6, 512
  01f8c48  addic 4, 30, 288
  01f8c4c  li 8, 0
  01f8c50  lfs 1, 72(5)
  01f8c54  bl 0x100ef8
  01f8c58  nop
  01f8c5c  lwz 3, 260(30)
  01f8c60  cmpwi 3, 2
  01f8c64  bt 2, 0x1f94a0
  01f8c68  addic 3, 31, 188
  01f8c6c  bl 0x500060
  01f8c70  nop
  01f8c74  cmpwi 3, 0
  01f8c78  bt 2, 0x1f94a0
  01f8c7c  lis 3, 118
  01f8c80  lfs 1, 25404(3)
  01f8c84  fcmpu 0, 1, 30
  01f8c88  cror 6, 1, 2
  01f8c8c  bt 6, 0x1f94a0
  01f8c90  lbz 3, 33(31)
  01f8c94  cmpwi 3, 255
  01f8c98  bt 2, 0x1f8ca4
  01f8c9c  ori 3, 31, 0
  01f8ca0  bl 0x1f6f08
  01f8ca4  li 3, 10
  01f8ca8  lbz 4, 83(31)
  01f8cac  cmpwi 4, 3
  01f8cb0  stb 3, 32(31)
  01f8cb4  bt 2, 0x1f94a0
  01f8cb8  lis 3, 31
  01f8cbc  lis 4, 114
  01f8cc0  addi 3, 3, 30936
  01f8cc4  li 5, 0
  01f8cc8  lfs 1, 24(3)
  01f8ccc  lfs 2, -3056(4)
  01f8cd0  ori 3, 31, 0
  01f8cd4  li 4, 3
  01f8cd8  fmuls 1, 2, 1
  01f8cdc  fctiwz 1, 1
  01f8ce0  stfd 1, 296(1)
  01f8ce4  lwz 6, 300(1)
  01f8ce8  extsw 6, 6
  01f8cec  bl 0xfddc0
  01f8cf0  nop
  01f8cf4  b 0x1f94a0
  01f8cf8  lfs 2, 20(31)
  01f8cfc  lfs 1, 20(29)
  01f8d00  lfs 3, 16(31)
  01f8d04  lfs 4, 16(29)
  01f8d08  lfs 5, 24(31)
  01f8d0c  lfs 6, 24(29)
  01f8d10  fsubs 7, 3, 4
  01f8d14  fsubs 5, 5, 6
  01f8d18  fsubs 6, 2, 1
  01f8d1c  lbz 3, 33(31)
  01f8d20  cmpwi 3, 255
  01f8d24  fmuls 6, 6, 6
  01f8d28  fmadds 6, 7, 7, 6
  01f8d2c  fmadds 28, 5, 5, 6
  01f8d30  fsqrts 28, 28
  01f8d34  bt 2, 0x1f8d50
  01f8d38  ori 3, 31, 0
  01f8d3c  bl 0x1f6f08
  01f8d40  lfs 4, 16(29)
  01f8d44  lfs 3, 16(31)
  01f8d48  lfs 1, 20(29)
  01f8d4c  lfs 2, 20(31)
  01f8d50  fsubs 3, 4, 3
  01f8d54  fsubs 2, 1, 2
  01f8d58  fmr 1, 3
  01f8d5c  bl 0x5e8338
  01f8d60  nop
  01f8d64  lis 3, 31
  01f8d68  lis 28, 114
  01f8d6c  addi 29, 3, 30936
  01f8d70  addic 5, 30, 368
  01f8d74  ori 3, 31, 0
  01f8d78  lfs 4, 136(29)
  01f8d7c  lfs 2, 92(29)
  01f8d80  lfs 5, 96(29)
  01f8d84  lfs 6, -3052(28)
  01f8d88  fmr 3, 5
  01f8d8c  fmuls 4, 6, 4
  01f8d90  bl 0xff2e8
  01f8d94  nop
  01f8d98  lfs 1, 72(31)
  01f8d9c  bl 0x5e8078
  01f8da0  nop
  01f8da4  lfs 29, 52(29)
  01f8da8  lfs 3, -3052(28)
  01f8dac  fmuls 2, 3, 29
  01f8db0  fmuls 1, 2, 1
  01f8db4  stfs 1, 288(30)
  01f8db8  lfs 1, 72(31)
  01f8dbc  bl 0x5e8128
  01f8dc0  nop
  01f8dc4  fmr 2, 1
  01f8dc8  lfs 1, -3052(28)
  01f8dcc  li 3, 0
  01f8dd0  lis 4, 165
  01f8dd4  lwz 5, 404(30)
  01f8dd8  fmuls 3, 1, 29
  01f8ddc  slwi 5, 5, 7
  01f8de0  fmuls 2, 3, 2
  01f8de4  stfs 2, 292(30)
  01f8de8  lfs 29, 12(29)
  01f8dec  stw 3, 296(30)
  01f8df0  lwz 3, 7128(4)
  01f8df4  lfs 2, 24(31)
  01f8df8  addc 3, 3, 5
  01f8dfc  clrldi 3, 3, 32
  01f8e00  lfs 4, 56(3)
  01f8e04  fsubs 2, 4, 2
  01f8e08  fcmpu 0, 2, 3
  01f8e0c  cror 6, 0, 2
  01f8e10  bt 6, 0x1f8e1c
  01f8e14  fmr 2, 3
  01f8e18  b 0x1f8e3c
  01f8e1c  lis 3, 31
  01f8e20  addi 3, 3, 30936
  01f8e24  lfs 3, 140(3)
  01f8e28  fmuls 1, 1, 3
  01f8e2c  fcmpu 0, 2, 1
  01f8e30  cror 6, 1, 2
  01f8e34  bt 6, 0x1f8e3c
  01f8e38  fmr 2, 1
  01f8e3c  fmr 1, 2
  01f8e40  lis 3, 31
  01f8e44  fmr 2, 29
  01f8e48  addic 4, 30, 288
  01f8e4c  addi 5, 3, 30936
  01f8e50  ori 3, 31, 0
  01f8e54  li 6, 512
  01f8e58  li 8, 0
  01f8e5c  stfs 1, 296(30)
  01f8e60  lfs 1, 72(5)
  01f8e64  bl 0x100ef8
  01f8e68  nop
  01f8e6c  lis 3, 118
  01f8e70  lfs 1, 25404(3)
  01f8e74  fcmpu 0, 1, 28
  01f8e78  cror 6, 0, 2
  01f8e7c  bt 6, 0x1f8f10
  01f8e80  lis 3, 165
  01f8e84  lwz 4, 404(30)
  01f8e88  slwi 4, 4, 7
  01f8e8c  lwz 3, 7128(3)
  01f8e90  lfs 1, 24(31)
  01f8e94  addc 3, 3, 4
  01f8e98  clrldi 3, 3, 32
  01f8e9c  lfs 2, 56(3)
  01f8ea0  fsubs 1, 2, 1
  01f8ea4  fabs 1, 1
  01f8ea8  fcmpu 0, 1, 31
  01f8eac  cror 6, 1, 2
  01f8eb0  bt 6, 0x1f8f10
  01f8eb4  li 4, 0
  01f8eb8  li 3, 0
  01f8ebc  ori 5, 31, 0
  01f8ec0  bl 0x15d12c
  01f8ec4  nop
  01f8ec8  li 4, 11
  01f8ecc  lbz 3, 83(31)
  01f8ed0  cmpwi 3, 2
  01f8ed4  stb 4, 32(31)
  01f8ed8  bt 2, 0x1f94a0
  01f8edc  lis 3, 114
  01f8ee0  li 4, 2
  01f8ee4  li 5, 0
  01f8ee8  lfs 1, -3056(3)
  01f8eec  ori 3, 31, 0
  01f8ef0  fmuls 1, 1, 30
  01f8ef4  fctiwz 1, 1
  01f8ef8  stfd 1, 296(1)
  01f8efc  lwz 6, 300(1)
  01f8f00  extsw 6, 6
  01f8f04  bl 0xfddc0
  01f8f08  nop
  01f8f0c  b 0x1f94a0
  01f8f10  lwz 3, 260(30)
  01f8f14  cmpwi 3, 2
  01f8f18  bf 2, 0x1f94a0
  01f8f1c  li 3, 9
  01f8f20  lis 4, 118
  01f8f24  fmr 1, 29
  01f8f28  stb 3, 32(31)
  01f8f2c  lfs 2, 25428(4)
  01f8f30  bl 0xfcbe8
  01f8f34  nop
  01f8f38  lis 3, 31
  01f8f3c  stfs 1, 416(30)
  01f8f40  lis 4, 118
  01f8f44  addi 3, 3, 30936
  01f8f48  lis 5, 114
  01f8f4c  lfs 4, 32(3)
  01f8f50  lfs 3, 25432(4)
  01f8f54  lfs 5, -3056(5)
  01f8f58  fmuls 3, 3, 4
  01f8f5c  lfs 1, 36(3)
  01f8f60  lfs 2, 40(3)
  01f8f64  fmuls 31, 5, 3
  01f8f68  bl 0xfcbe8
  01f8f6c  nop
  01f8f70  fmuls 1, 31, 1
  01f8f74  bl 0x502758
  01f8f78  nop
  01f8f7c  stw 3, 420(30)
  01f8f80  b 0x1f94a0
  01f8f84  lbz 3, 33(31)
  01f8f88  cmpwi 3, 255
  01f8f8c  bt 2, 0x1f8f98
  01f8f90  ori 3, 31, 0
  01f8f94  bl 0x1f6f08
  01f8f98  lfs 1, 16(29)
  01f8f9c  lfs 2, 16(31)
  01f8fa0  lfs 3, 20(29)
  01f8fa4  lfs 4, 20(31)
  01f8fa8  fsubs 1, 1, 2
  01f8fac  fsubs 2, 3, 4
  01f8fb0  bl 0x5e8338
  01f8fb4  nop
  01f8fb8  lis 3, 31
  01f8fbc  lis 27, 114
  01f8fc0  addi 28, 3, 30936
  01f8fc4  addic 5, 30, 368
  01f8fc8  ori 3, 31, 0
  01f8fcc  lfs 4, 100(28)
  01f8fd0  lfs 2, 92(28)
  01f8fd4  lfs 5, 96(28)
  01f8fd8  lfs 6, -3052(27)
  01f8fdc  fmr 3, 5
  01f8fe0  fmuls 4, 6, 4
  01f8fe4  bl 0xff2e8
  01f8fe8  nop
  01f8fec  lfs 1, 72(31)
  01f8ff0  bl 0x5e8078
  01f8ff4  nop
  01f8ff8  lfs 29, 48(28)
  01f8ffc  lfs 3, -3052(27)
  01f9000  fmuls 2, 3, 29
  01f9004  fmuls 1, 2, 1
  01f9008  stfs 1, 288(30)
  01f900c  lfs 1, 72(31)
  01f9010  bl 0x5e8128
  01f9014  nop
  01f9018  fmr 2, 1
  01f901c  lfs 1, -3052(27)
  01f9020  li 3, 0
  01f9024  lis 4, 165
  01f9028  lwz 5, 404(30)
  01f902c  fmuls 3, 1, 29
  01f9030  slwi 5, 5, 7
  01f9034  fmuls 2, 3, 2
  01f9038  stfs 2, 292(30)
  01f903c  lfs 29, 12(28)
  01f9040  stw 3, 296(30)
  01f9044  lwz 3, 7128(4)
  01f9048  lfs 4, 88(28)
  01f904c  addc 3, 3, 5
  01f9050  lfs 3, 24(31)
  01f9054  clrldi 3, 3, 32
  01f9058  lfs 2, 56(3)
  01f905c  fsubs 2, 2, 3
  01f9060  fmuls 3, 1, 4
  01f9064  fcmpu 0, 2, 3
  01f9068  cror 6, 0, 2
  01f906c  bt 6, 0x1f9078
  01f9070  fmr 2, 3
  01f9074  b 0x1f9098
  01f9078  lis 3, 31
  01f907c  addi 3, 3, 30936
  01f9080  lfs 3, 144(3)
  01f9084  fmuls 1, 1, 3
  01f9088  fcmpu 0, 2, 1
  01f908c  cror 6, 1, 2
  01f9090  bt 6, 0x1f9098
  01f9094  fmr 2, 1
  01f9098  fmr 1, 2
  01f909c  lis 3, 31
  01f90a0  fmr 2, 29
  01f90a4  addic 4, 30, 288
  01f90a8  addi 28, 3, 30936
  01f90ac  ori 3, 31, 0
  01f90b0  li 6, 512
  01f90b4  li 8, 0
  01f90b8  stfs 1, 296(30)
  01f90bc  lfs 1, 72(28)
  01f90c0  bl 0x100ef8
  01f90c4  nop
  01f90c8  lis 3, 1
  01f90cc  li 4, 1
  01f90d0  stw 31, 256(1)
  01f90d4  ori 5, 3, 1
  01f90d8  lis 6, 16256
  01f90dc  li 7, 0
  01f90e0  addic 27, 1, 160
  01f90e4  stw 5, 260(1)
  01f90e8  ori 3, 31, 0
  01f90ec  stw 4, 272(1)
  01f90f0  ori 5, 27, 0
  01f90f4  stw 6, 268(1)
  01f90f8  li 4, 0
  01f90fc  stw 7, 252(1)
  01f9100  stw 7, 248(1)
  01f9104  stw 7, 244(1)
  01f9108  stw 7, 240(1)
  01f910c  bl 0xf1114
  01f9110  nop
  01f9114  lfs 1, 148(28)
  01f9118  addic 7, 1, 240
  01f911c  ori 3, 27, 0
  01f9120  li 5, 0
  01f9124  ori 6, 31, 0
  01f9128  bl 0x5e598
  01f912c  nop
  01f9130  lfs 1, 20(31)
  01f9134  lfs 2, 20(29)
  01f9138  lfs 3, 16(31)
  01f913c  fsubs 1, 1, 2
  01f9140  lfs 2, 16(29)
  01f9144  fsubs 2, 3, 2
  01f9148  lfs 3, 24(31)
  01f914c  lfs 4, 24(29)
  01f9150  fsubs 3, 3, 4
  01f9154  fmuls 1, 1, 1
  01f9158  lbz 29, 83(31)
  01f915c  fmadds 1, 2, 2, 1
  01f9160  fmadds 1, 3, 3, 1
  01f9164  fsqrts 1, 1
  01f9168  fcmpu 0, 1, 31
  01f916c  bt 0, 0x1f9194
  01f9170  lis 3, 151
  01f9174  addic 3, 3, -25376
  01f9178  lwz 3, 8332(3)
  01f917c  cmpwi 3, 7
  01f9180  bt 2, 0x1f9194
  01f9184  lbz 3, 112(31)
  01f9188  rlwinm 3, 3, 0, 30, 30
  01f918c  cmpwi 3, 0
  01f9190  bt 2, 0x1f91d8
  01f9194  li 3, 12
  01f9198  cmpwi 29, 3
  01f919c  stb 3, 32(31)
  01f91a0  bt 2, 0x1f94a0
  01f91a4  lis 3, 114
  01f91a8  li 4, 3
  01f91ac  li 5, 0
  01f91b0  lfs 1, -3056(3)
  01f91b4  ori 3, 31, 0
  01f91b8  fmuls 1, 1, 30
  01f91bc  fctiwz 1, 1
  01f91c0  stfd 1, 296(1)
  01f91c4  lwz 6, 300(1)
  01f91c8  extsw 6, 6
  01f91cc  bl 0xfddc0
  01f91d0  nop
  01f91d4  b 0x1f94a0
  01f91d8  lwz 3, 260(30)
  01f91dc  cmpwi 3, 2
  01f91e0  bf 2, 0x1f94a0
  01f91e4  li 3, 9
  01f91e8  fmr 1, 29
  01f91ec  lis 4, 118
  01f91f0  stb 3, 32(31)
  01f91f4  lfs 2, 25428(4)
  01f91f8  bl 0xfcbe8
  01f91fc  nop
  01f9200  lis 3, 31
  01f9204  lis 4, 118
  01f9208  stfs 1, 416(30)
  01f920c  addi 3, 3, 30936
  01f9210  lis 5, 114
  01f9214  lfs 4, 32(3)
  01f9218  lfs 3, 25432(4)
  01f921c  lfs 1, 36(3)
  01f9220  fmuls 3, 3, 4
  01f9224  lfs 5, -3056(5)
  01f9228  lfs 2, 40(3)
  01f922c  fmuls 31, 5, 3
  01f9230  bl 0xfcbe8
  01f9234  nop
  01f9238  fmuls 1, 31, 1
  01f923c  bl 0x502758
  01f9240  nop
  01f9244  stw 3, 420(30)
  01f9248  b 0x1f94a0
  01f924c  lfs 1, 304(30)
  01f9250  lfs 2, 16(31)
  01f9254  lfs 3, 308(30)
  01f9258  lfs 4, 20(31)
  01f925c  fsubs 1, 1, 2
  01f9260  fsubs 2, 3, 4
  01f9264  bl 0x5e8338
  01f9268  nop
  01f926c  lis 3, 31
  01f9270  lis 28, 114
  01f9274  addi 29, 3, 30936
  01f9278  addic 5, 30, 368
  01f927c  ori 3, 31, 0
  01f9280  lfs 4, 152(29)
  01f9284  lfs 2, 92(29)
  01f9288  lfs 5, 96(29)
  01f928c  lfs 6, -3052(28)
  01f9290  fmr 3, 5
  01f9294  fmuls 4, 6, 4
  01f9298  bl 0xff2e8
  01f929c  nop
  01f92a0  lfs 1, 72(31)
  01f92a4  bl 0x5e8078
  01f92a8  nop
  01f92ac  lfs 31, 52(29)
  01f92b0  lfs 3, -3052(28)
  01f92b4  fmuls 2, 3, 31
  01f92b8  fmuls 1, 2, 1
  01f92bc  stfs 1, 288(30)
  01f92c0  lfs 1, 72(31)
  01f92c4  bl 0x5e8128
  01f92c8  nop
  01f92cc  fmr 2, 1
  01f92d0  li 3, 0
  01f92d4  lfs 1, -3052(28)
  01f92d8  lis 4, 165
  01f92dc  lwz 5, 404(30)
  01f92e0  fmuls 3, 1, 31
  01f92e4  slwi 5, 5, 7
  01f92e8  fmuls 2, 3, 2
  01f92ec  stfs 2, 292(30)
  01f92f0  lfs 31, 12(29)
  01f92f4  stw 3, 296(30)
  01f92f8  lwz 3, 7128(4)
  01f92fc  lfs 3, 88(29)
  01f9300  addc 3, 3, 5
  01f9304  lfs 2, 24(31)
  01f9308  fmuls 3, 1, 3
  01f930c  clrldi 3, 3, 32
  01f9310  lfs 4, 56(3)
  01f9314  fsubs 2, 4, 2
  01f9318  fcmpu 0, 2, 3
  01f931c  cror 6, 0, 2
  01f9320  bt 6, 0x1f932c
  01f9324  fmr 2, 3
  01f9328  b 0x1f934c
  01f932c  lis 3, 31
  01f9330  addi 3, 3, 30936
  01f9334  lfs 3, 144(3)
  01f9338  fmuls 1, 1, 3
  01f933c  fcmpu 0, 2, 1
  01f9340  cror 6, 1, 2
  01f9344  bt 6, 0x1f934c
  01f9348  fmr 2, 1
  01f934c  stfs 2, 296(30)
  01f9350  addic 3, 1, 176
  01f9354  addic 4, 31, 16
  01f9358  addic 5, 30, 288
  01f935c  bl 0x502b08
  01f9360  nop
  01f9364  lfs 1, 20(31)
  01f9368  lfs 2, 308(30)
  01f936c  lfs 3, 16(31)
  01f9370  fsubs 1, 1, 2
  01f9374  lfs 2, 304(30)
  01f9378  fsubs 2, 3, 2
  01f937c  lis 3, 31
  01f9380  addi 3, 3, 30936
  01f9384  fmuls 1, 1, 1
  01f9388  fmadds 1, 2, 2, 1
  01f938c  lfs 2, 20(3)
  01f9390  fsqrts 1, 1
  01f9394  fcmpu 0, 1, 2
  01f9398  cror 6, 1, 2
  01f939c  bt 6, 0x1f94a0
  01f93a0  lis 3, 31
  01f93a4  li 4, 9
  01f93a8  vspltisw 2, -1
  01f93ac  addi 29, 3, 30936
  01f93b0  li 3, 156
  01f93b4  lis 28, 114
  01f93b8  stb 4, 32(31)
  01f93bc  li 4, -3056
  01f93c0  vslw 2, 2, 2
  01f93c4  lvlx 3, 3, 29
  01f93c8  li 3, 188
  01f93cc  vspltw 3, 3, 0
  01f93d0  lvlx 4, 4, 28
  01f93d4  lis 4, 118
  01f93d8  fmr 1, 31
  01f93dc  vmaddfp 2, 4, 3, 2
  01f93e0  vctsxs 2, 2, 0
  01f93e4  vspltb 2, 2, 3
  01f93e8  stvebx 2, 3, 31
  01f93ec  lfs 2, 25428(4)
  01f93f0  bl 0xfcbe8
  01f93f4  nop
  01f93f8  lis 3, 118
  01f93fc  stfs 1, 416(30)
  01f9400  lfs 2, 32(29)
  01f9404  lfs 3, 25432(3)
  01f9408  lfs 4, -3056(28)
  01f940c  fmuls 3, 3, 2
  01f9410  lfs 1, 36(29)
  01f9414  lfs 5, 40(29)
  01f9418  fmr 2, 5
  01f941c  fmuls 31, 4, 3
  01f9420  bl 0xfcbe8
  01f9424  nop
  01f9428  fmuls 1, 31, 1
  01f942c  bl 0x502758
  01f9430  nop
  01f9434  stw 3, 420(30)
  01f9438  b 0x1f94a0
  01f943c  ori 3, 31, 0
  01f9440  addic 4, 30, 96
  01f9444  bl 0x10b030
  01f9448  nop
  01f944c  clrlwi 3, 3, 31
  01f9450  cmpwi 3, 0
  01f9454  bt 2, 0x1f94a0
  01f9458  li 4, 512
  01f945c  ori 3, 31, 0
  01f9460  li 5, -1
  01f9464  bl 0xfd8d0
  01f9468  nop
  01f946c  lis 4, 31
  01f9470  ori 3, 31, 0
  01f9474  addi 5, 4, 30936
  01f9478  li 6, -1
  01f947c  addic 4, 31, 16
  01f9480  lfs 1, 72(5)
  01f9484  lfs 2, 28(5)
  01f9488  bl 0x110040
  01f948c  nop
  01f9490  ori 3, 31, 0
  01f9494  bl 0xefb38
  01f9498  nop
  01f949c  b 0x1f9534
  01f94a0  lbz 3, 32(31)
  01f94a4  cmpwi 1, 3, 13
  01f94a8  cmpwi 3, 0
  01f94ac  cror 2, 2, 6
  01f94b0  bt 2, 0x1f9534
  01f94b4  lis 3, 31
  01f94b8  lis 4, 114
  01f94bc  addi 29, 3, 30936
  01f94c0  lis 3, 118
  01f94c4  lfs 1, 32(29)
  01f94c8  lfs 2, 25424(3)
  01f94cc  lfs 31, 412(30)
  01f94d0  fmuls 1, 2, 1
  01f94d4  lfs 3, -3056(4)
  01f94d8  fmuls 1, 3, 1
  01f94dc  bl 0x502758
  01f94e0  nop
  01f94e4  extsw 3, 3
  01f94e8  std 3, 296(1)
  01f94ec  lfs 2, 160(29)
  01f94f0  lfs 3, 164(29)
  01f94f4  lfd 4, 296(1)
  01f94f8  fcfid 4, 4
  01f94fc  fmr 1, 31
  01f9500  frsp 4, 4
  01f9504  fdivs 2, 2, 4
  01f9508  fmuls 2, 2, 3
  01f950c  bl 0x502578
  01f9510  nop
  01f9514  stfs 1, 412(30)
  01f9518  lfs 31, 24(31)
  01f951c  bl 0x5e8078
  01f9520  nop
  01f9524  lis 3, 118
  01f9528  lfs 2, 25420(3)
  01f952c  fmadds 1, 2, 1, 31
  01f9530  stfs 1, 24(31)
  01f9534  ld 0, 416(1)
  01f9538  mtlr 0
  01f953c  lfd 28, 368(1)
  01f9540  lfd 29, 376(1)
  01f9544  lfd 30, 384(1)
  01f9548  lfd 31, 392(1)
  01f954c  ld 26, 320(1)
  01f9550  ld 27, 328(1)
  01f9554  ld 28, 336(1)
  01f9558  ld 29, 344(1)
  01f955c  ld 30, 352(1)
  01f9560  ld 31, 360(1)
  01f9564  addi 1, 1, 400
  01f9568  blr
