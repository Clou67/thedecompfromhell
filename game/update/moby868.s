# game/update/moby868.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M928_004a70c0:   # 0x4a70c0, 0x14 bytes
  04a70c0  lis 3, 143
  04a70c4  lis 4, 1
  04a70c8  addic 3, 3, 15812
  04a70cc  stw 4, 72(3)
  04a70d0  blr

M928_004a70d8:   # 0x4a70d8, 0x4 bytes
  04a70d8  blr

UpdateMoby_868:   # 0x4a70f0, 0x890 bytes
  04a70f0  stdu 1, -288(1)
  04a70f4  mflr 0
  04a70f8  std 0, 304(1)
  04a70fc  stfd 28, 256(1)
  04a7100  stfd 29, 264(1)
  04a7104  stfd 30, 272(1)
  04a7108  stfd 31, 280(1)
  04a710c  std 31, 248(1)
  04a7110  ori 31, 3, 0
  04a7114  lfs 1, 16(31)
  04a7118  lfs 2, 20(31)
  04a711c  fneg 3, 1
  04a7120  lfs 4, 24(31)
  04a7124  fneg 2, 2
  04a7128  std 30, 240(1)
  04a712c  fneg 4, 4
  04a7130  lwz 30, 120(31)
  04a7134  lfs 5, 28(31)
  04a7138  lfs 6, 64(31)
  04a713c  stfs 5, 124(1)
  04a7140  lfs 5, 68(31)
  04a7144  stfs 6, 128(1)
  04a7148  lfs 6, 72(31)
  04a714c  stfs 5, 132(1)
  04a7150  stfs 3, 112(1)
  04a7154  stfs 2, 116(1)
  04a7158  stfs 4, 120(1)
  04a715c  lfs 2, 76(31)
  04a7160  lbz 3, 32(31)
  04a7164  stfs 6, 136(1)
  04a7168  cmpwi 3, 4
  04a716c  stfs 2, 140(1)
  04a7170  cmpwi 1, 3, 3
  04a7174  cmpwi 6, 3, 2
  04a7178  std 29, 232(1)
  04a717c  std 28, 224(1)
  04a7180  std 27, 216(1)
  04a7184  cmpwi 7, 3, 1
  04a7188  bt 2, 0x4a78e8
  04a718c  bt 6, 0x4a75f8
  04a7190  bt 26, 0x4a75d0
  04a7194  bt 30, 0x4a7330
  04a7198  cmpwi 3, 0
  04a719c  bf 2, 0x4a7904
  04a71a0  li 4, 0
  04a71a4  lwz 5, 248(30)
  04a71a8  lis 3, 165
  04a71ac  lwz 6, 224(30)
  04a71b0  li 7, -1
  04a71b4  subc 4, 4, 5
  04a71b8  slwi 5, 6, 2
  04a71bc  cntlzw 4, 4
  04a71c0  addic 3, 3, 7136
  04a71c4  sldi 4, 4, 58
  04a71c8  extsw 5, 5
  04a71cc  li 6, 1
  04a71d0  sradi 4, 4, 63
  04a71d4  subc 6, 6, 7
  04a71d8  li 29, 1
  04a71dc  and 4, 4, 6
  04a71e0  lwzx 3, 3, 5
  04a71e4  addc 5, 7, 4
  04a71e8  stw 3, 192(30)
  04a71ec  li 4, 0
  04a71f0  extsb 6, 5
  04a71f4  ori 28, 4, 0
  04a71f8  cmpwi 6, 0
  04a71fc  stb 5, 180(30)
  04a7200  bt 0, 0x4a720c
  04a7204  lwz 4, 0(3)
  04a7208  addic 4, 4, -1
  04a720c  sldi 4, 4, 4
  04a7210  addc 3, 3, 4
  04a7214  clrldi 4, 3, 32
  04a7218  ori 3, 28, 0
  04a721c  lfs 1, 16(4)
  04a7220  stfs 1, 16(31)
  04a7224  lfs 1, 20(4)
  04a7228  stfs 1, 20(31)
  04a722c  lfs 1, 24(4)
  04a7230  stfs 1, 24(31)
  04a7234  lfs 1, 28(4)
  04a7238  stfs 1, 28(31)
  04a723c  lbz 4, 180(30)
  04a7240  lfs 1, 252(30)
  04a7244  extsb 4, 4
  04a7248  cmpwi 4, 0
  04a724c  bt 0, 0x4a725c
  04a7250  lwz 3, 192(30)
  04a7254  lwz 3, 0(3)
  04a7258  addic 3, 3, -1
  04a725c  ori 4, 3, 0
  04a7260  li 5, -1
  04a7264  addic 3, 30, 256
  04a7268  stw 4, 176(30)
  04a726c  lwz 4, 36(31)
  04a7270  lfs 2, 36(4)
  04a7274  stw 5, 260(30)
  04a7278  fmuls 1, 2, 1
  04a727c  stfs 1, 44(31)
  04a7280  bl 0x4fff60
  04a7284  nop
  04a7288  cmpwi 3, 0
  04a728c  bt 2, 0x4a7904
  04a7290  lwz 3, 192(30)
  04a7294  lwz 4, 0(3)
  04a7298  lfs 1, 20(3)
  04a729c  slwi 4, 4, 4
  04a72a0  lfs 2, 16(3)
  04a72a4  lfs 3, 24(3)
  04a72a8  addc 4, 3, 4
  04a72ac  clrldi 4, 4, 32
  04a72b0  lis 3, 74
  04a72b4  lfs 4, 4(4)
  04a72b8  lfs 5, 0(4)
  04a72bc  fsubs 1, 1, 4
  04a72c0  fsubs 2, 2, 5
  04a72c4  lfs 4, 8(4)
  04a72c8  fsubs 3, 3, 4
  04a72cc  addi 27, 3, 28892
  04a72d0  lis 3, 114
  04a72d4  fmuls 1, 1, 1
  04a72d8  fmadds 1, 2, 2, 1
  04a72dc  fmadds 1, 3, 3, 1
  04a72e0  fsqrts 1, 1
  04a72e4  stfs 1, 272(30)
  04a72e8  lfs 1, 0(27)
  04a72ec  lfs 2, -3056(3)
  04a72f0  fmuls 1, 2, 1
  04a72f4  fctiwz 1, 1
  04a72f8  stfd 1, 192(1)
  04a72fc  lwz 3, 196(1)
  04a7300  mullw 3, 3, 3
  04a7304  extsw 3, 3
  04a7308  bl 0x502730
  04a730c  nop
  04a7310  lfs 2, 4(27)
  04a7314  lfs 3, 272(30)
  04a7318  fmuls 2, 3, 2
  04a731c  stw 28, 268(30)
  04a7320  fdivs 1, 2, 1
  04a7324  stfs 1, 276(30)
  04a7328  stb 29, 32(31)
  04a732c  b 0x4a7904
  04a7330  lis 3, 74
  04a7334  lfs 31, 276(30)
  04a7338  addi 3, 3, 28892
  04a733c  lfs 30, 8(3)
  04a7340  lhz 3, 166(31)
  04a7344  fmr 28, 30
  04a7348  cmpwi 3, 905
  04a734c  cmpwi 1, 3, 868
  04a7350  bt 2, 0x4a7358
  04a7354  bf 6, 0x4a7390
  04a7358  ori 3, 31, 0
  04a735c  lwz 4, 260(30)
  04a7360  extsw 4, 4
  04a7364  bl 0x15cc7c
  04a7368  nop
  04a736c  cmpwi 3, 0
  04a7370  bf 2, 0x4a7390
  04a7374  li 3, 0
  04a7378  li 4, 4
  04a737c  ori 5, 31, 0
  04a7380  li 6, 905
  04a7384  bl 0x15d204
  04a7388  nop
  04a738c  stw 3, 260(30)
  04a7390  lis 3, 74
  04a7394  lis 5, 114
  04a7398  addi 4, 3, 28892
  04a739c  lwz 3, 268(30)
  04a73a0  addic 3, 3, 1
  04a73a4  stw 3, 268(30)
  04a73a8  lfs 29, 0(4)
  04a73ac  lfs 1, -3056(5)
  04a73b0  fmuls 1, 1, 29
  04a73b4  fctiwz 1, 1
  04a73b8  stfd 1, 192(1)
  04a73bc  lwz 4, 196(1)
  04a73c0  srawi 5, 4, 1
  04a73c4  addze 5, 5
  04a73c8  cmpw 3, 5
  04a73cc  bf 1, 0x4a73dc
  04a73d0  subc 3, 4, 3
  04a73d4  fneg 31, 31
  04a73d8  lfs 30, 272(30)
  04a73dc  mullw 3, 3, 3
  04a73e0  extsw 3, 3
  04a73e4  bl 0x502730
  04a73e8  nop
  04a73ec  lis 3, 74
  04a73f0  lbz 4, 180(30)
  04a73f4  addi 3, 3, 28892
  04a73f8  extsb 4, 4
  04a73fc  cmpwi 4, 0
  04a7400  lfs 2, 12(3)
  04a7404  lwz 3, 192(30)
  04a7408  fmuls 2, 31, 2
  04a740c  lwz 4, 0(3)
  04a7410  fmadds 30, 2, 1, 30
  04a7414  bf 0, 0x4a7420
  04a7418  lfs 1, 272(30)
  04a741c  fsubs 30, 1, 30
  04a7420  slwi 4, 4, 4
  04a7424  addic 6, 1, 160
  04a7428  addc 4, 3, 4
  04a742c  addic 5, 3, 16
  04a7430  ori 3, 6, 0
  04a7434  clrldi 4, 4, 32
  04a7438  bl 0x502a64
  04a743c  nop
  04a7440  lfs 1, 164(1)
  04a7444  lfs 2, 160(1)
  04a7448  fmuls 3, 1, 1
  04a744c  lfs 4, 168(1)
  04a7450  lfs 5, 172(1)
  04a7454  stfs 5, 156(1)
  04a7458  fmadds 3, 2, 2, 3
  04a745c  addic 3, 1, 176
  04a7460  addic 5, 1, 144
  04a7464  fmadds 3, 4, 4, 3
  04a7468  fsqrts 3, 3
  04a746c  fdivs 5, 30, 3
  04a7470  fsub 6, 28, 3
  04a7474  fsub 7, 28, 3
  04a7478  fsub 8, 28, 3
  04a747c  fsub 9, 3, 28
  04a7480  fsub 10, 3, 28
  04a7484  fsub 3, 3, 28
  04a7488  fmuls 2, 2, 5
  04a748c  fmuls 1, 1, 5
  04a7490  fmuls 4, 4, 5
  04a7494  fsel 5, 6, 28, 2
  04a7498  fsel 6, 7, 28, 1
  04a749c  fsel 7, 8, 28, 4
  04a74a0  fsel 2, 9, 5, 2
  04a74a4  fsel 1, 10, 6, 1
  04a74a8  fsel 3, 3, 7, 4
  04a74ac  stfs 2, 144(1)
  04a74b0  stfs 1, 148(1)
  04a74b4  stfs 3, 152(1)
  04a74b8  lwz 4, 192(30)
  04a74bc  addic 4, 4, 16
  04a74c0  bl 0x5023f0
  04a74c4  nop
  04a74c8  lfs 1, 176(1)
  04a74cc  lis 3, 114
  04a74d0  stfs 1, 16(31)
  04a74d4  lfs 1, 180(1)
  04a74d8  stfs 1, 20(31)
  04a74dc  lfs 1, 184(1)
  04a74e0  stfs 1, 24(31)
  04a74e4  lfs 1, 188(1)
  04a74e8  stfs 1, 28(31)
  04a74ec  lfs 1, -3056(3)
  04a74f0  lwz 3, 268(30)
  04a74f4  fmuls 1, 1, 29
  04a74f8  fctiwz 1, 1
  04a74fc  stfd 1, 192(1)
  04a7500  lwz 4, 196(1)
  04a7504  cmpw 3, 4
  04a7508  bt 0, 0x4a7904
  04a750c  lbz 4, 180(30)
  04a7510  lwz 3, 260(30)
  04a7514  neg 4, 4
  04a7518  cmpwi 3, -1
  04a751c  stb 4, 180(30)
  04a7520  bt 2, 0x4a7564
  04a7524  sldi 4, 3, 7
  04a7528  sldi 6, 3, 4
  04a752c  lis 5, 150
  04a7530  subc 4, 4, 6
  04a7534  addic 5, 5, 14176
  04a7538  extsw 4, 4
  04a753c  addc 4, 5, 4
  04a7540  lwz 5, 136(4)
  04a7544  cmpw 5, 31
  04a7548  bf 2, 0x4a7564
  04a754c  lbz 4, 116(4)
  04a7550  cmpwi 4, 0
  04a7554  bt 2, 0x4a7564
  04a7558  extsw 3, 3
  04a755c  bl 0x15cdb0
  04a7560  nop
  04a7564  li 3, -1
  04a7568  vspltisw 4, -1
  04a756c  li 4, 240
  04a7570  li 5, 2
  04a7574  addi 6, 4, 16
  04a7578  stw 3, 260(30)
  04a757c  lis 3, 74
  04a7580  vslw 4, 4, 4
  04a7584  stb 5, 32(31)
  04a7588  lvlx 2, 4, 30
  04a758c  lvrx 3, 6, 30
  04a7590  li 4, 12
  04a7594  addi 3, 3, 28892
  04a7598  vor 2, 2, 3
  04a759c  vcfsx 2, 2, 0
  04a75a0  lvlx 3, 4, 3
  04a75a4  li 3, -3056
  04a75a8  vspltw 3, 3, 0
  04a75ac  lis 4, 114
  04a75b0  lvlx 5, 3, 4
  04a75b4  li 3, 232
  04a75b8  vaddfp 2, 2, 3
  04a75bc  vmaddfp 2, 5, 2, 4
  04a75c0  vctsxs 2, 2, 0
  04a75c4  vspltw 2, 2, 0
  04a75c8  stvewx 2, 3, 30
  04a75cc  b 0x4a7904
  04a75d0  addic 3, 30, 232
  04a75d4  bl 0x4fff60
  04a75d8  nop
  04a75dc  cmpwi 3, 0
  04a75e0  bt 2, 0x4a7904
  04a75e4  li 3, 0
  04a75e8  li 4, 1
  04a75ec  stw 3, 268(30)
  04a75f0  stb 4, 32(31)
  04a75f4  b 0x4a7904
  04a75f8  lwz 3, 192(30)
  04a75fc  lwz 4, 176(30)
  04a7600  lbz 5, 180(30)
  04a7604  extsb 5, 5
  04a7608  lwz 6, 0(3)
  04a760c  addc 4, 4, 6
  04a7610  addc 29, 4, 5
  04a7614  divw 4, 29, 6
  04a7618  mullw 4, 4, 6
  04a761c  li 7, 0
  04a7620  subc 29, 29, 4
  04a7624  subc 5, 5, 7
  04a7628  sldi 28, 29, 4
  04a762c  addic 27, 6, -1
  04a7630  addc 4, 3, 28
  04a7634  li 6, 0
  04a7638  clrldi 4, 4, 32
  04a763c  sradi 5, 5, 63
  04a7640  subc 6, 6, 27
  04a7644  and 5, 5, 6
  04a7648  lfs 2, 16(4)
  04a764c  lwz 7, 264(30)
  04a7650  addc 27, 27, 5
  04a7654  fsubs 1, 2, 1
  04a7658  li 5, 0
  04a765c  subc 6, 27, 29
  04a7660  subc 5, 5, 7
  04a7664  cntlzw 5, 5
  04a7668  sldi 5, 5, 58
  04a766c  sradi 5, 5, 63
  04a7670  and 5, 5, 6
  04a7674  stfs 1, 160(30)
  04a7678  addc 5, 29, 5
  04a767c  lfs 1, 20(4)
  04a7680  lfs 2, 20(31)
  04a7684  sldi 5, 5, 4
  04a7688  fsubs 1, 1, 2
  04a768c  addc 3, 3, 5
  04a7690  clrldi 3, 3, 32
  04a7694  stfs 1, 164(30)
  04a7698  lfs 1, 24(4)
  04a769c  lfs 2, 24(31)
  04a76a0  fsubs 1, 1, 2
  04a76a4  stfs 1, 168(30)
  04a76a8  lfs 1, 28(4)
  04a76ac  stfs 1, 172(30)
  04a76b0  lfs 1, 20(31)
  04a76b4  lfs 2, 16(31)
  04a76b8  lfs 3, 20(3)
  04a76bc  lfs 4, 16(3)
  04a76c0  fsubs 1, 1, 3
  04a76c4  fsubs 2, 2, 4
  04a76c8  lfs 3, 24(31)
  04a76cc  lfs 4, 24(3)
  04a76d0  fsubs 3, 3, 4
  04a76d4  addic 3, 30, 228
  04a76d8  fmuls 1, 1, 1
  04a76dc  fmadds 1, 2, 2, 1
  04a76e0  fmadds 1, 3, 3, 1
  04a76e4  fsqrts 2, 1
  04a76e8  lfs 1, 244(30)
  04a76ec  fcmpu 0, 2, 1
  04a76f0  cror 6, 1, 2
  04a76f4  bt 6, 0x4a7738
  04a76f8  lfs 2, 236(30)
  04a76fc  fmuls 2, 2, 2
  04a7700  lis 4, 74
  04a7704  lis 5, 114
  04a7708  addi 4, 4, 28892
  04a770c  lis 6, 114
  04a7710  lfs 5, 12(4)
  04a7714  fdivs 2, 2, 1
  04a7718  lfs 3, -3052(5)
  04a771c  lfs 4, -3048(6)
  04a7720  fmuls 1, 3, 5
  04a7724  fmuls 2, 2, 4
  04a7728  fmuls 2, 2, 5
  04a772c  bl 0x109af0
  04a7730  nop
  04a7734  b 0x4a7778
  04a7738  lfs 2, 236(30)
  04a773c  fmuls 3, 2, 2
  04a7740  lis 4, 114
  04a7744  lis 5, 114
  04a7748  fdivs 3, 3, 1
  04a774c  lfs 1, -3052(4)
  04a7750  lis 4, 74
  04a7754  lfs 4, -3048(5)
  04a7758  addi 4, 4, 28892
  04a775c  lfs 5, 12(4)
  04a7760  fmuls 1, 2, 1
  04a7764  fmr 2, 5
  04a7768  fmuls 3, 3, 4
  04a776c  fmuls 2, 3, 2
  04a7770  bl 0x109af0
  04a7774  nop
  04a7778  lfs 1, 228(30)
  04a777c  addic 3, 30, 160
  04a7780  bl 0x110488
  04a7784  nop
  04a7788  lfs 1, 16(31)
  04a778c  lfs 2, 160(30)
  04a7790  fadds 1, 1, 2
  04a7794  lfs 2, 20(31)
  04a7798  lfs 3, 24(31)
  04a779c  stfs 1, 16(31)
  04a77a0  lfs 4, 164(30)
  04a77a4  fadds 2, 2, 4
  04a77a8  stfs 2, 20(31)
  04a77ac  lfs 4, 168(30)
  04a77b0  fadds 3, 3, 4
  04a77b4  stfs 3, 24(31)
  04a77b8  lwz 3, 192(30)
  04a77bc  addc 3, 3, 28
  04a77c0  clrldi 3, 3, 32
  04a77c4  lfs 4, 20(3)
  04a77c8  lfs 5, 16(3)
  04a77cc  fsubs 2, 2, 4
  04a77d0  fsubs 1, 1, 5
  04a77d4  lfs 4, 24(3)
  04a77d8  fsubs 3, 3, 4
  04a77dc  lis 3, 74
  04a77e0  addi 3, 3, 28892
  04a77e4  fmuls 2, 2, 2
  04a77e8  fmadds 1, 1, 1, 2
  04a77ec  lfs 2, 16(3)
  04a77f0  fmadds 1, 3, 3, 1
  04a77f4  lfs 3, 228(30)
  04a77f8  fmuls 2, 3, 2
  04a77fc  fsqrts 1, 1
  04a7800  fcmpu 0, 1, 2
  04a7804  cror 6, 1, 2
  04a7808  bt 6, 0x4a7904
  04a780c  cmpw 29, 27
  04a7810  stw 29, 176(30)
  04a7814  bt 2, 0x4a7824
  04a7818  lwz 3, 264(30)
  04a781c  cmpwi 3, 0
  04a7820  bt 2, 0x4a7904
  04a7824  lwz 3, 240(30)
  04a7828  cmpwi 3, 0
  04a782c  bf 1, 0x4a7904
  04a7830  lwz 3, 260(30)
  04a7834  cmpwi 3, -1
  04a7838  bt 2, 0x4a787c
  04a783c  sldi 4, 3, 7
  04a7840  sldi 6, 3, 4
  04a7844  lis 5, 150
  04a7848  subc 4, 4, 6
  04a784c  addic 5, 5, 14176
  04a7850  extsw 4, 4
  04a7854  addc 4, 5, 4
  04a7858  lwz 5, 136(4)
  04a785c  cmpw 5, 31
  04a7860  bf 2, 0x4a787c
  04a7864  lbz 4, 116(4)
  04a7868  cmpwi 4, 0
  04a786c  bt 2, 0x4a787c
  04a7870  extsw 3, 3
  04a7874  bl 0x15cdb0
  04a7878  nop
  04a787c  li 3, -1
  04a7880  vspltisw 4, -1
  04a7884  li 4, 240
  04a7888  li 5, 4
  04a788c  addi 6, 4, 16
  04a7890  stw 3, 260(30)
  04a7894  lis 3, 74
  04a7898  vslw 4, 4, 4
  04a789c  stb 5, 32(31)
  04a78a0  lvlx 2, 4, 30
  04a78a4  lvrx 3, 6, 30
  04a78a8  li 4, 12
  04a78ac  addi 3, 3, 28892
  04a78b0  vor 2, 2, 3
  04a78b4  vcfsx 2, 2, 0
  04a78b8  lvlx 3, 4, 3
  04a78bc  lis 3, 114
  04a78c0  vspltw 3, 3, 0
  04a78c4  li 4, -3056
  04a78c8  lvlx 5, 4, 3
  04a78cc  li 3, 232
  04a78d0  vaddfp 2, 2, 3
  04a78d4  vmaddfp 2, 5, 2, 4
  04a78d8  vctsxs 2, 2, 0
  04a78dc  vspltw 2, 2, 0
  04a78e0  stvewx 2, 3, 30
  04a78e4  b 0x4a7904
  04a78e8  addic 3, 30, 232
  04a78ec  bl 0x4fff60
  04a78f0  nop
  04a78f4  cmpwi 3, 0
  04a78f8  bt 2, 0x4a7904
  04a78fc  li 3, 3
  04a7900  stb 3, 32(31)
  04a7904  lfs 1, 112(1)
  04a7908  addic 3, 30, 96
  04a790c  lfs 2, 16(31)
  04a7910  addic 4, 1, 112
  04a7914  lfs 3, 116(1)
  04a7918  addic 5, 1, 128
  04a791c  fadds 1, 1, 2
  04a7920  addic 6, 31, 64
  04a7924  lfs 2, 20(31)
  04a7928  lfs 4, 120(1)
  04a792c  fadds 2, 3, 2
  04a7930  lfs 3, 24(31)
  04a7934  fadds 3, 4, 3
  04a7938  stfs 1, 112(1)
  04a793c  stfs 2, 116(1)
  04a7940  stfs 3, 120(1)
  04a7944  bl 0x112900
  04a7948  nop
  04a794c  ld 0, 304(1)
  04a7950  mtlr 0
  04a7954  lfd 28, 256(1)
  04a7958  lfd 29, 264(1)
  04a795c  lfd 30, 272(1)
  04a7960  lfd 31, 280(1)
  04a7964  ld 27, 216(1)
  04a7968  ld 28, 224(1)
  04a796c  ld 29, 232(1)
  04a7970  ld 30, 240(1)
  04a7974  ld 31, 248(1)
  04a7978  addi 1, 1, 288
  04a797c  blr

M928_004a7980:   # 0x4a7980, 0x14 bytes
  04a7980  lis 3, 143
  04a7984  lis 4, 1
  04a7988  addic 3, 3, 15924
  04a798c  stw 4, 72(3)
  04a7990  blr
