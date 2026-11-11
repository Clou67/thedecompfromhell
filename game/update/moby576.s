# game/update/moby576.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M576_003c7080:   # 0x3c7080, 0x14 bytes
  03c7080  lis 3, 132
  03c7084  lis 4, 1
  03c7088  addic 3, 3, 24672
  03c708c  stw 4, 72(3)
  03c7090  blr

M576_003c70d8:   # 0x3c70d8, 0x400 bytes
  03c70d8  stdu 1, -256(1)
  03c70dc  mflr 0
  03c70e0  std 0, 272(1)
  03c70e4  stfd 29, 232(1)
  03c70e8  stfd 30, 240(1)
  03c70ec  stfd 31, 248(1)
  03c70f0  lfs 1, 16(3)
  03c70f4  li 4, 256
  03c70f8  std 31, 224(1)
  03c70fc  addc 4, 1, 4
  03c7100  ori 31, 3, 0
  03c7104  std 5, 64(4)
  03c7108  lfs 30, 68(4)
  03c710c  lfs 2, 20(3)
  03c7110  lis 5, 60
  03c7114  lfs 29, 64(4)
  03c7118  fsubs 2, 30, 2
  03c711c  fsubs 1, 29, 1
  03c7120  addi 5, 5, 28824
  03c7124  lis 4, 115
  03c7128  addic 4, 4, 22784
  03c712c  fabs 4, 2
  03c7130  fabs 5, 1
  03c7134  stfs 2, 136(1)
  03c7138  std 30, 216(1)
  03c713c  stfs 1, 132(1)
  03c7140  lwz 30, 120(3)
  03c7144  lwz 6, 136(1)
  03c7148  rlwinm 6, 6, 3, 29, 29
  03c714c  fsubs 1, 5, 4
  03c7150  stfs 1, 140(1)
  03c7154  lwz 7, 132(1)
  03c7158  lfs 31, 0(5)
  03c715c  lfs 1, 132(1)
  03c7160  fabs 2, 1
  03c7164  lfs 1, 136(1)
  03c7168  fabs 6, 1
  03c716c  lfs 1, 492(30)
  03c7170  lwz 3, 140(1)
  03c7174  lfs 3, 140(1)
  03c7178  rlwimi 6, 3, 2, 30, 30
  03c717c  fsub 7, 3, 31
  03c7180  fsub 8, 3, 31
  03c7184  rlwimi 6, 7, 4, 28, 28
  03c7188  ori 3, 4, 0
  03c718c  slwi 5, 6, 2
  03c7190  rlwimi 3, 6, 2, 26, 28
  03c7194  clrldi 3, 3, 32
  03c7198  lfsx 3, 4, 5
  03c719c  fsel 4, 7, 2, 4
  03c71a0  lfs 2, 4(3)
  03c71a4  fsel 5, 8, 6, 5
  03c71a8  std 29, 208(1)
  03c71ac  std 28, 200(1)
  03c71b0  std 27, 192(1)
  03c71b4  std 26, 184(1)
  03c71b8  fcmpu 0, 4, 31
  03c71bc  bt 1, 0x3c71c8
  03c71c0  fmr 3, 31
  03c71c4  b 0x3c72f0
  03c71c8  fsubs 6, 5, 4
  03c71cc  fadds 4, 5, 4
  03c71d0  addic 6, 1, 16
  03c71d4  li 3, 2
  03c71d8  addic 5, 6, 128
  03c71dc  addic 4, 6, 144
  03c71e0  mtctr 3
  03c71e4  fdivs 4, 6, 4
  03c71e8  fmuls 6, 4, 4
  03c71ec  stfs 4, 156(1)
  03c71f0  stfs 4, 148(1)
  03c71f4  stfs 4, 152(1)
  03c71f8  stfs 4, 144(1)
  03c71fc  lfs 7, 156(1)
  03c7200  lfs 8, 148(1)
  03c7204  lfs 9, 152(1)
  03c7208  fmuls 4, 6, 6
  03c720c  fmuls 8, 8, 6
  03c7210  fmuls 7, 7, 4
  03c7214  fmuls 5, 4, 4
  03c7218  fmuls 4, 9, 4
  03c721c  stfs 8, 148(1)
  03c7220  fmuls 6, 7, 6
  03c7224  stfs 4, 152(1)
  03c7228  stfs 6, 156(1)
  03c722c  lfs 4, 128(6)
  03c7230  fmuls 4, 4, 5
  03c7234  stfs 4, 144(6)
  03c7238  lfs 4, 4(5)
  03c723c  addic 6, 6, 8
  03c7240  addic 5, 5, 8
  03c7244  fmuls 4, 4, 5
  03c7248  stfs 4, 4(4)
  03c724c  addic 4, 4, 8
  03c7250  bdnz 0x3c722c
  03c7254  ori 7, 1, 0
  03c7258  lis 6, 115
  03c725c  li 8, 4
  03c7260  addic 5, 7, 144
  03c7264  addic 6, 6, 22752
  03c7268  ori 4, 5, 0
  03c726c  mtctr 8
  03c7270  lfs 4, 144(7)
  03c7274  lfs 5, 0(6)
  03c7278  fmuls 4, 4, 5
  03c727c  lfs 5, 4(6)
  03c7280  addic 6, 6, 8
  03c7284  stfs 4, 144(7)
  03c7288  lfs 4, 4(5)
  03c728c  addic 7, 7, 8
  03c7290  fmuls 4, 4, 5
  03c7294  stfs 4, 4(5)
  03c7298  addic 5, 5, 8
  03c729c  bdnz 0x3c7270
  03c72a0  ori 5, 3, 0
  03c72a4  fmr 4, 31
  03c72a8  ori 3, 1, 0
  03c72ac  mtctr 5
  03c72b0  lfs 5, 144(3)
  03c72b4  fadds 4, 4, 5
  03c72b8  lfs 5, 4(4)
  03c72bc  addic 3, 3, 16
  03c72c0  lfs 6, 8(4)
  03c72c4  lfs 7, 12(4)
  03c72c8  addic 4, 4, 16
  03c72cc  fadds 4, 4, 5
  03c72d0  fadds 4, 4, 6
  03c72d4  fadds 4, 4, 7
  03c72d8  bdnz 0x3c72b0
  03c72dc  lis 3, 60
  03c72e0  addi 3, 3, 28824
  03c72e4  lfs 5, 4(3)
  03c72e8  fadds 4, 4, 5
  03c72ec  fmadds 3, 4, 3, 2
  03c72f0  fmr 2, 1
  03c72f4  fmr 1, 3
  03c72f8  bl 0x502578
  03c72fc  nop
  03c7300  lis 3, 60
  03c7304  lis 28, 114
  03c7308  addi 29, 3, 28824
  03c730c  lis 27, 114
  03c7310  addic 3, 31, 72
  03c7314  addic 5, 30, 488
  03c7318  lfs 4, 8(29)
  03c731c  lfs 3, -3048(28)
  03c7320  lfs 5, -3052(27)
  03c7324  fmuls 2, 3, 4
  03c7328  fmuls 4, 5, 4
  03c732c  fmr 3, 2
  03c7330  bl 0x10a2e0
  03c7334  nop
  03c7338  lfs 1, 20(31)
  03c733c  lfs 2, 16(31)
  03c7340  fsubs 1, 1, 30
  03c7344  fsubs 2, 2, 29
  03c7348  li 26, 0
  03c734c  addic 3, 1, 128
  03c7350  addic 5, 30, 496
  03c7354  stw 26, 128(1)
  03c7358  fmuls 1, 1, 1
  03c735c  fmadds 1, 2, 2, 1
  03c7360  lfs 2, 12(29)
  03c7364  fsqrts 30, 1
  03c7368  lfs 1, -3048(28)
  03c736c  lfs 3, 16(29)
  03c7370  lfs 4, -3052(27)
  03c7374  fmuls 2, 1, 2
  03c7378  fmuls 4, 4, 3
  03c737c  fmr 3, 2
  03c7380  fmr 1, 30
  03c7384  bl 0x109c30
  03c7388  nop
  03c738c  lfs 1, 20(29)
  03c7390  lfs 2, 72(31)
  03c7394  lfs 3, 24(29)
  03c7398  fadds 1, 2, 1
  03c739c  lfs 4, 28(29)
  03c73a0  fsubs 5, 3, 2
  03c73a4  lis 3, 132
  03c73a8  addic 4, 1, 112
  03c73ac  li 8, 0
  03c73b0  fsubs 3, 3, 1
  03c73b4  fsub 7, 2, 5
  03c73b8  fsubs 6, 4, 1
  03c73bc  fsubs 4, 4, 2
  03c73c0  fsub 8, 1, 3
  03c73c4  fsel 2, 7, 5, 2
  03c73c8  fsel 1, 8, 3, 1
  03c73cc  fsub 7, 4, 2
  03c73d0  lfs 3, 32(29)
  03c73d4  lfs 5, 36(29)
  03c73d8  fsub 8, 6, 1
  03c73dc  fsel 2, 7, 4, 2
  03c73e0  lfs 4, 40(29)
  03c73e4  fsel 1, 8, 6, 1
  03c73e8  fmuls 6, 2, 2
  03c73ec  lfs 8, 44(29)
  03c73f0  lfs 9, 496(30)
  03c73f4  fmuls 7, 1, 1
  03c73f8  fmuls 10, 6, 2
  03c73fc  fmuls 11, 7, 1
  03c7400  fmuls 12, 6, 10
  03c7404  fmadds 2, 10, 3, 2
  03c7408  fmuls 10, 7, 11
  03c740c  fmadds 1, 11, 3, 1
  03c7410  fmuls 3, 6, 12
  03c7414  fmadds 2, 12, 5, 2
  03c7418  fmuls 11, 7, 10
  03c741c  fmadds 1, 10, 5, 1
  03c7420  fmuls 5, 6, 3
  03c7424  fmadds 2, 3, 4, 2
  03c7428  fmuls 3, 7, 11
  03c742c  fmadds 1, 11, 4, 1
  03c7430  lfs 4, -3052(27)
  03c7434  fmadds 2, 5, 8, 2
  03c7438  fmadds 1, 3, 8, 1
  03c743c  fmr 3, 31
  03c7440  fmuls 1, 1, 9
  03c7444  stfs 1, 112(1)
  03c7448  lfs 1, 496(30)
  03c744c  stw 26, 120(1)
  03c7450  fmuls 1, 2, 1
  03c7454  lfs 2, 24792(3)
  03c7458  ori 3, 31, 0
  03c745c  stfs 1, 116(1)
  03c7460  lfs 1, 48(29)
  03c7464  fmuls 1, 4, 1
  03c7468  stfs 1, 120(1)
  03c746c  lfs 1, 52(29)
  03c7470  lfs 4, 56(29)
  03c7474  fmuls 1, 2, 1
  03c7478  fmuls 2, 2, 4
  03c747c  bl 0x1009b0
  03c7480  nop
  03c7484  addic 5, 31, 16
  03c7488  lwz 3, 480(30)
  03c748c  lfs 1, 60(29)
  03c7490  ori 6, 5, 0
  03c7494  extsw 3, 3
  03c7498  bl 0x1145d8
  03c749c  nop
  03c74a0  fmr 1, 30
  03c74a4  ld 0, 272(1)
  03c74a8  mtlr 0
  03c74ac  lfd 29, 232(1)
  03c74b0  lfd 30, 240(1)
  03c74b4  lfd 31, 248(1)
  03c74b8  ld 26, 184(1)
  03c74bc  ld 27, 192(1)
  03c74c0  ld 28, 200(1)
  03c74c4  ld 29, 208(1)
  03c74c8  ld 30, 216(1)
  03c74cc  ld 31, 224(1)
  03c74d0  addi 1, 1, 256
  03c74d4  blr

M576_003c74e8:   # 0x3c74e8, 0x2d0 bytes
  03c74e8  stdu 1, -176(1)
  03c74ec  mflr 0
  03c74f0  std 0, 192(1)
  03c74f4  stfd 31, 168(1)
  03c74f8  std 30, 152(1)
  03c74fc  lbz 4, 32(3)
  03c7500  std 31, 160(1)
  03c7504  lwz 30, 120(3)
  03c7508  ori 31, 3, 0
  03c750c  cmpwi 6, 4, 7
  03c7510  lbz 5, 83(3)
  03c7514  std 29, 144(1)
  03c7518  cmpwi 4, 0
  03c751c  lwz 29, 36(3)
  03c7520  cror 2, 2, 26
  03c7524  cmpwi 1, 5, 0
  03c7528  bt 2, 0x3c7798
  03c752c  lwz 6, 24(31)
  03c7530  lis 5, 17096
  03c7534  srawi 7, 6, 31
  03c7538  ori 3, 4, 0
  03c753c  srwi 8, 7, 1
  03c7540  xor 6, 8, 6
  03c7544  subc 6, 6, 7
  03c7548  cmpw 6, 5
  03c754c  bf 0, 0x3c7564
  03c7550  ori 3, 4, 0
  03c7554  cmpwi 3, 6
  03c7558  bt 2, 0x3c7564
  03c755c  li 3, 5
  03c7560  stb 3, 32(31)
  03c7564  lis 4, 132
  03c7568  lfs 1, 36(29)
  03c756c  lis 5, 151
  03c7570  addic 29, 5, -25376
  03c7574  lfs 2, 24792(4)
  03c7578  fmuls 1, 1, 2
  03c757c  lwz 4, 8324(29)
  03c7580  cmpwi 4, 114
  03c7584  stfs 1, 44(31)
  03c7588  bt 2, 0x3c759c
  03c758c  lis 4, 161
  03c7590  lwz 4, 1800(4)
  03c7594  cmpwi 4, 2
  03c7598  bf 2, 0x3c760c
  03c759c  cmpwi 3, 6
  03c75a0  bt 2, 0x3c760c
  03c75a4  li 3, 7
  03c75a8  stb 3, 32(31)
  03c75ac  bt 6, 0x3c75ec
  03c75b0  lis 3, 60
  03c75b4  lis 4, 114
  03c75b8  addi 3, 3, 29912
  03c75bc  li 5, 0
  03c75c0  lfs 1, 0(3)
  03c75c4  lfs 2, -3056(4)
  03c75c8  ori 3, 31, 0
  03c75cc  fmuls 1, 2, 1
  03c75d0  li 4, 0
  03c75d4  fctiwz 1, 1
  03c75d8  stfd 1, 120(1)
  03c75dc  lwz 6, 124(1)
  03c75e0  extsw 6, 6
  03c75e4  bl 0xfddc0
  03c75e8  nop
  03c75ec  lhz 4, 52(31)
  03c75f0  li 3, 0
  03c75f4  ori 4, 4, 1
  03c75f8  rlwimi 4, 3, 0, 19, 19
  03c75fc  stb 3, 49(31)
  03c7600  stw 3, 148(31)
  03c7604  sth 4, 52(31)
  03c7608  b 0x3c7798
  03c760c  lis 3, 60
  03c7610  li 6, 0
  03c7614  addi 7, 3, 29912
  03c7618  ori 3, 31, 0
  03c761c  lis 4, 51
  03c7620  li 5, 0
  03c7624  lfs 31, 4(7)
  03c7628  stw 6, 116(1)
  03c762c  bl 0x10675c
  03c7630  nop
  03c7634  ori 4, 3, 0
  03c7638  ori 3, 31, 0
  03c763c  addic 5, 30, 32
  03c7640  li 9, 0
  03c7644  addic 7, 1, 112
  03c7648  li 10, 4
  03c764c  addic 8, 1, 116
  03c7650  li 6, 0
  03c7654  bl 0x106840
  03c7658  nop
  03c765c  lwz 3, 112(1)
  03c7660  cmpwi 3, 1
  03c7664  bt 2, 0x3c76b4
  03c7668  lbz 3, 32(31)
  03c766c  cmpwi 3, 5
  03c7670  bt 2, 0x3c76b4
  03c7674  lwz 3, 116(1)
  03c7678  lfs 1, 116(1)
  03c767c  cmpwi 3, 0
  03c7680  bt 2, 0x3c76b4
  03c7684  lfs 2, 32(30)
  03c7688  fsubs 1, 2, 1
  03c768c  fcmpu 0, 1, 31
  03c7690  stfs 1, 32(30)
  03c7694  bt 1, 0x3c76a4
  03c7698  li 3, 5
  03c769c  stb 3, 32(31)
  03c76a0  b 0x3c76b4
  03c76a4  addic 4, 30, 96
  03c76a8  ori 3, 31, 0
  03c76ac  bl 0x10c808
  03c76b0  nop
  03c76b4  li 5, 255
  03c76b8  ori 3, 31, 0
  03c76bc  addic 4, 30, 96
  03c76c0  stb 5, 164(31)
  03c76c4  bl 0x10c9a0
  03c76c8  nop
  03c76cc  lwz 3, 480(30)
  03c76d0  lis 4, 165
  03c76d4  lis 5, 60
  03c76d8  slwi 3, 3, 2
  03c76dc  addic 6, 4, 7136
  03c76e0  extsw 3, 3
  03c76e4  addi 5, 5, 29912
  03c76e8  addic 4, 30, 384
  03c76ec  lwzx 7, 6, 3
  03c76f0  lfs 1, 8(5)
  03c76f4  addic 8, 7, 16
  03c76f8  ori 3, 31, 0
  03c76fc  li 6, 0
  03c7700  lwz 9, 0(7)
  03c7704  li 7, 0
  03c7708  extsw 9, 9
  03c770c  bl 0x111ba0
  03c7710  nop
  03c7714  lwz 3, 452(30)
  03c7718  lwz 31, 448(30)
  03c771c  cmpwi 3, 2
  03c7720  bf 2, 0x3c7788
  03c7724  lwz 3, 8332(29)
  03c7728  cmpwi 3, 15
  03c772c  bf 2, 0x3c7768
  03c7730  lwz 3, 1376(29)
  03c7734  lwz 4, 0(3)
  03c7738  slwi 4, 4, 4
  03c773c  addc 3, 3, 4
  03c7740  clrldi 3, 3, 32
  03c7744  lfs 1, 0(3)
  03c7748  stfs 1, 384(30)
  03c774c  lfs 1, 4(3)
  03c7750  stfs 1, 388(30)
  03c7754  lfs 1, 8(3)
  03c7758  stfs 1, 392(30)
  03c775c  lfs 1, 12(3)
  03c7760  stfs 1, 396(30)
  03c7764  b 0x3c7788
  03c7768  lfs 1, 128(29)
  03c776c  stfs 1, 384(30)
  03c7770  lfs 1, 132(29)
  03c7774  stfs 1, 388(30)
  03c7778  lfs 1, 136(29)
  03c777c  stfs 1, 392(30)
  03c7780  lfs 1, 140(29)
  03c7784  stfs 1, 396(30)
  03c7788  cmpwi 31, 0
  03c778c  bf 2, 0x3c7798
  03c7790  lwz 3, 8320(29)
  03c7794  stw 3, 448(30)
  03c7798  ld 0, 192(1)
  03c779c  mtlr 0
  03c77a0  lfd 31, 168(1)
  03c77a4  ld 29, 144(1)
  03c77a8  ld 30, 152(1)
  03c77ac  ld 31, 160(1)
  03c77b0  addi 1, 1, 176
  03c77b4  blr

UpdateMoby_576:   # 0x3c77f8, 0x970 bytes
  03c77f8  stdu 1, -320(1)
  03c77fc  mflr 0
  03c7800  std 0, 336(1)
  03c7804  std 31, 312(1)
  03c7808  std 30, 304(1)
  03c780c  ori 31, 3, 0
  03c7810  std 29, 296(1)
  03c7814  lwz 30, 120(31)
  03c7818  bl 0x3c74e8
  03c781c  lbz 4, 32(31)
  03c7820  lbz 3, 83(31)
  03c7824  cmpwi 4, 6
  03c7828  bt 2, 0x3c7a10
  03c782c  cmpwi 4, 5
  03c7830  bt 2, 0x3c7f74
  03c7834  cmpwi 4, 4
  03c7838  bt 2, 0x3c7bf8
  03c783c  cmpwi 4, 3
  03c7840  bt 2, 0x3c7ad4
  03c7844  cmpwi 4, 2
  03c7848  bt 2, 0x3c7a3c
  03c784c  cmpwi 4, 1
  03c7850  bt 2, 0x3c78fc
  03c7854  cmpwi 4, 0
  03c7858  bf 2, 0x3c806c
  03c785c  li 4, 7
  03c7860  li 3, 2
  03c7864  stb 4, 32(31)
  03c7868  bl 0xfc620
  03c786c  nop
  03c7870  cmpwi 3, 0
  03c7874  bt 2, 0x3c788c
  03c7878  lis 3, 0
  03c787c  lhz 4, 52(31)
  03c7880  ori 3, 3, 32768
  03c7884  or 3, 4, 3
  03c7888  b 0x3c7898
  03c788c  li 5, 0
  03c7890  lhz 3, 52(31)
  03c7894  rlwimi 3, 5, 0, 16, 16
  03c7898  ori 3, 3, 256
  03c789c  lis 4, 16256
  03c78a0  li 5, 8
  03c78a4  lis 6, 132
  03c78a8  sth 3, 52(31)
  03c78ac  li 3, 1
  03c78b0  stw 4, 32(30)
  03c78b4  addic 6, 6, 24780
  03c78b8  lis 4, 16128
  03c78bc  sth 3, 36(30)
  03c78c0  stb 5, 88(30)
  03c78c4  li 5, 255
  03c78c8  stb 3, 92(30)
  03c78cc  li 3, 0
  03c78d0  stw 4, 48(30)
  03c78d4  stw 6, 320(30)
  03c78d8  stb 5, 48(31)
  03c78dc  sth 5, 50(31)
  03c78e0  stb 3, 49(31)
  03c78e4  stw 3, 148(31)
  03c78e8  lhz 4, 52(31)
  03c78ec  ori 4, 4, 1
  03c78f0  rlwimi 4, 3, 0, 19, 19
  03c78f4  sth 4, 52(31)
  03c78f8  b 0x3c806c
  03c78fc  lis 3, 60
  03c7900  lfs 1, 472(30)
  03c7904  addi 5, 3, 30648
  03c7908  lis 3, 114
  03c790c  li 4, 0
  03c7910  lfs 2, 0(5)
  03c7914  lfs 3, -3048(3)
  03c7918  lfs 4, 464(30)
  03c791c  fnmsubs 1, 3, 2, 1
  03c7920  addic 3, 1, 192
  03c7924  stfs 1, 472(30)
  03c7928  lfs 1, 16(31)
  03c792c  lfs 2, 20(31)
  03c7930  fadds 1, 1, 4
  03c7934  lfs 3, 24(31)
  03c7938  lfs 4, 28(31)
  03c793c  stfs 1, 16(31)
  03c7940  lfs 5, 468(30)
  03c7944  fadds 2, 2, 5
  03c7948  stfs 2, 20(31)
  03c794c  lfs 5, 472(30)
  03c7950  stfs 1, 192(1)
  03c7954  fadds 3, 3, 5
  03c7958  stfs 2, 196(1)
  03c795c  stfs 4, 204(1)
  03c7960  stfs 3, 24(31)
  03c7964  lfs 1, 4(5)
  03c7968  fadds 1, 3, 1
  03c796c  stfs 1, 200(1)
  03c7970  lfs 1, 8(5)
  03c7974  bl 0xffb70
  03c7978  nop
  03c797c  lwz 3, 24(31)
  03c7980  lfs 2, 24(31)
  03c7984  srawi 4, 3, 31
  03c7988  fcmpu 0, 2, 1
  03c798c  srwi 5, 4, 1
  03c7990  xor 3, 5, 3
  03c7994  subc 3, 3, 4
  03c7998  cror 6, 1, 2
  03c799c  bt 6, 0x3c79f8
  03c79a0  li 3, 2
  03c79a4  lbz 4, 83(31)
  03c79a8  stfs 1, 24(31)
  03c79ac  cmpwi 4, 0
  03c79b0  stb 3, 32(31)
  03c79b4  bt 2, 0x3c806c
  03c79b8  lis 3, 60
  03c79bc  lis 4, 114
  03c79c0  addi 3, 3, 30648
  03c79c4  li 5, 0
  03c79c8  lfs 1, 12(3)
  03c79cc  lfs 2, -3056(4)
  03c79d0  ori 3, 31, 0
  03c79d4  fmuls 1, 2, 1
  03c79d8  li 4, 0
  03c79dc  fctiwz 1, 1
  03c79e0  stfd 1, 272(1)
  03c79e4  lwz 6, 276(1)
  03c79e8  extsw 6, 6
  03c79ec  bl 0xfddc0
  03c79f0  nop
  03c79f4  b 0x3c806c
  03c79f8  lis 4, 16672
  03c79fc  cmpw 3, 4
  03c7a00  bf 0, 0x3c806c
  03c7a04  li 3, 5
  03c7a08  stb 3, 32(31)
  03c7a0c  b 0x3c806c
  03c7a10  ori 3, 31, 0
  03c7a14  addic 4, 30, 112
  03c7a18  bl 0x48c188
  03c7a1c  nop
  03c7a20  cmpwi 3, 0
  03c7a24  bt 2, 0x3c806c
  03c7a28  li 3, 2
  03c7a2c  li 4, 0
  03c7a30  stb 3, 32(31)
  03c7a34  sth 4, 312(30)
  03c7a38  b 0x3c806c
  03c7a3c  lwz 4, 452(30)
  03c7a40  cmpwi 4, 2
  03c7a44  bf 2, 0x3c7a84
  03c7a48  lfs 1, 20(31)
  03c7a4c  lfs 2, 388(30)
  03c7a50  lfs 3, 16(31)
  03c7a54  fsubs 1, 1, 2
  03c7a58  lfs 2, 384(30)
  03c7a5c  fsubs 2, 3, 2
  03c7a60  lis 4, 60
  03c7a64  addi 4, 4, 30648
  03c7a68  fmuls 1, 1, 1
  03c7a6c  fmadds 1, 2, 2, 1
  03c7a70  lfs 2, 0(4)
  03c7a74  fsqrts 1, 1
  03c7a78  fcmpu 0, 1, 2
  03c7a7c  cror 6, 0, 2
  03c7a80  bt 6, 0x3c806c
  03c7a84  li 4, 3
  03c7a88  cmpwi 3, 1
  03c7a8c  stb 4, 32(31)
  03c7a90  bt 2, 0x3c806c
  03c7a94  lis 3, 60
  03c7a98  lis 4, 114
  03c7a9c  addi 3, 3, 30648
  03c7aa0  li 5, 0
  03c7aa4  lfs 1, 12(3)
  03c7aa8  lfs 2, -3056(4)
  03c7aac  ori 3, 31, 0
  03c7ab0  li 4, 1
  03c7ab4  fmuls 1, 2, 1
  03c7ab8  fctiwz 1, 1
  03c7abc  stfd 1, 272(1)
  03c7ac0  lwz 6, 276(1)
  03c7ac4  extsw 6, 6
  03c7ac8  bl 0xfddc0
  03c7acc  nop
  03c7ad0  b 0x3c806c
  03c7ad4  lfs 1, 384(30)
  03c7ad8  lfs 2, 392(30)
  03c7adc  ori 3, 31, 0
  03c7ae0  stfs 1, 64(1)
  03c7ae4  stfs 2, 72(1)
  03c7ae8  lfs 1, 388(30)
  03c7aec  lfs 2, 396(30)
  03c7af0  stfs 1, 68(1)
  03c7af4  stfs 2, 76(1)
  03c7af8  ld 5, 64(1)
  03c7afc  ld 6, 72(1)
  03c7b00  bl 0x3c70d8
  03c7b04  lwz 4, 452(30)
  03c7b08  lbz 3, 83(31)
  03c7b0c  cmpwi 4, 2
  03c7b10  bf 2, 0x3c7b7c
  03c7b14  lis 4, 60
  03c7b18  addi 4, 4, 30648
  03c7b1c  lfs 2, 16(4)
  03c7b20  fcmpu 0, 1, 2
  03c7b24  cror 6, 1, 2
  03c7b28  bt 6, 0x3c7b7c
  03c7b2c  li 4, 2
  03c7b30  cmpwi 3, 0
  03c7b34  stb 4, 32(31)
  03c7b38  bt 2, 0x3c806c
  03c7b3c  lis 3, 60
  03c7b40  lis 4, 114
  03c7b44  addi 3, 3, 30648
  03c7b48  li 5, 0
  03c7b4c  lfs 1, 12(3)
  03c7b50  lfs 2, -3056(4)
  03c7b54  ori 3, 31, 0
  03c7b58  fmuls 1, 2, 1
  03c7b5c  li 4, 0
  03c7b60  fctiwz 1, 1
  03c7b64  stfd 1, 272(1)
  03c7b68  lwz 6, 276(1)
  03c7b6c  extsw 6, 6
  03c7b70  bl 0xfddc0
  03c7b74  nop
  03c7b78  b 0x3c806c
  03c7b7c  lis 4, 60
  03c7b80  addi 4, 4, 30648
  03c7b84  lfs 2, 20(4)
  03c7b88  fcmpu 0, 1, 2
  03c7b8c  cror 6, 1, 2
  03c7b90  bt 6, 0x3c806c
  03c7b94  li 4, 4
  03c7b98  cmpwi 3, 2
  03c7b9c  stb 4, 32(31)
  03c7ba0  bt 2, 0x3c806c
  03c7ba4  lis 3, 269
  03c7ba8  lis 4, 60
  03c7bac  addi 4, 4, 30648
  03c7bb0  lfs 1, -24740(3)
  03c7bb4  lis 3, 114
  03c7bb8  fctiwz 1, 1
  03c7bbc  lfs 2, -3056(3)
  03c7bc0  ori 3, 31, 0
  03c7bc4  stfd 1, 272(1)
  03c7bc8  lfs 1, 24(4)
  03c7bcc  lwz 5, 276(1)
  03c7bd0  li 4, 2
  03c7bd4  fmuls 1, 2, 1
  03c7bd8  extsw 5, 5
  03c7bdc  fctiwz 1, 1
  03c7be0  stfd 1, 272(1)
  03c7be4  lwz 6, 276(1)
  03c7be8  extsw 6, 6
  03c7bec  bl 0xfddc0
  03c7bf0  nop
  03c7bf4  b 0x3c806c
  03c7bf8  lfs 1, 384(30)
  03c7bfc  lfs 2, 16(31)
  03c7c00  lfs 3, 388(30)
  03c7c04  lfs 4, 20(31)
  03c7c08  fsubs 1, 1, 2
  03c7c0c  lis 3, 60
  03c7c10  fsubs 2, 3, 4
  03c7c14  addi 3, 3, 30648
  03c7c18  lis 5, 115
  03c7c1c  addic 4, 31, 72
  03c7c20  addic 5, 5, 22784
  03c7c24  fabs 5, 1
  03c7c28  fabs 4, 2
  03c7c2c  stfs 1, 224(1)
  03c7c30  stfs 2, 228(1)
  03c7c34  fsubs 1, 5, 4
  03c7c38  stfs 1, 232(1)
  03c7c3c  lwz 6, 224(1)
  03c7c40  lfs 1, 28(3)
  03c7c44  lfs 2, 224(1)
  03c7c48  lwz 3, 228(1)
  03c7c4c  lfs 3, 228(1)
  03c7c50  fabs 2, 2
  03c7c54  lwz 7, 232(1)
  03c7c58  rlwinm 3, 3, 3, 29, 29
  03c7c5c  fabs 6, 3
  03c7c60  lfs 3, 232(1)
  03c7c64  rlwimi 3, 7, 2, 30, 30
  03c7c68  fsub 7, 3, 1
  03c7c6c  rlwimi 3, 6, 4, 28, 28
  03c7c70  fsub 8, 3, 1
  03c7c74  ori 6, 5, 0
  03c7c78  rlwimi 6, 3, 2, 26, 28
  03c7c7c  slwi 3, 3, 2
  03c7c80  clrldi 6, 6, 32
  03c7c84  fsel 4, 7, 2, 4
  03c7c88  lfsx 3, 5, 3
  03c7c8c  lfs 2, 4(6)
  03c7c90  fsel 5, 8, 6, 5
  03c7c94  fcmpu 0, 4, 1
  03c7c98  bt 1, 0x3c7ca0
  03c7c9c  b 0x3c7dc4
  03c7ca0  fsubs 6, 5, 4
  03c7ca4  fadds 4, 5, 4
  03c7ca8  addic 7, 1, 16
  03c7cac  li 3, 2
  03c7cb0  addic 5, 7, 236
  03c7cb4  addic 6, 7, 220
  03c7cb8  mtctr 3
  03c7cbc  fdivs 4, 6, 4
  03c7cc0  fmuls 6, 4, 4
  03c7cc4  stfs 4, 248(1)
  03c7cc8  stfs 4, 240(1)
  03c7ccc  stfs 4, 244(1)
  03c7cd0  stfs 4, 236(1)
  03c7cd4  lfs 7, 248(1)
  03c7cd8  lfs 8, 240(1)
  03c7cdc  lfs 9, 244(1)
  03c7ce0  fmuls 4, 6, 6
  03c7ce4  fmuls 8, 8, 6
  03c7ce8  fmuls 7, 7, 4
  03c7cec  fmuls 5, 4, 4
  03c7cf0  fmuls 4, 9, 4
  03c7cf4  stfs 8, 240(1)
  03c7cf8  fmuls 6, 7, 6
  03c7cfc  stfs 4, 244(1)
  03c7d00  stfs 6, 248(1)
  03c7d04  lfs 4, 220(7)
  03c7d08  fmuls 4, 4, 5
  03c7d0c  stfs 4, 236(7)
  03c7d10  lfs 4, 4(6)
  03c7d14  addic 6, 6, 8
  03c7d18  fmuls 4, 4, 5
  03c7d1c  addic 7, 7, 8
  03c7d20  stfs 4, 4(5)
  03c7d24  addic 5, 5, 8
  03c7d28  bdnz 0x3c7d04
  03c7d2c  ori 8, 1, 0
  03c7d30  li 5, 4
  03c7d34  lis 7, 115
  03c7d38  addic 6, 8, 236
  03c7d3c  mtctr 5
  03c7d40  addic 7, 7, 22752
  03c7d44  ori 5, 6, 0
  03c7d48  lfs 4, 236(8)
  03c7d4c  lfs 5, 0(7)
  03c7d50  fmuls 4, 4, 5
  03c7d54  lfs 5, 4(7)
  03c7d58  addic 7, 7, 8
  03c7d5c  stfs 4, 236(8)
  03c7d60  lfs 4, 4(6)
  03c7d64  addic 8, 8, 8
  03c7d68  fmuls 4, 4, 5
  03c7d6c  stfs 4, 4(6)
  03c7d70  addic 6, 6, 8
  03c7d74  bdnz 0x3c7d48
  03c7d78  ori 6, 3, 0
  03c7d7c  ori 3, 1, 0
  03c7d80  mtctr 6
  03c7d84  lfs 4, 236(3)
  03c7d88  fadds 1, 1, 4
  03c7d8c  lfs 4, 4(5)
  03c7d90  addic 3, 3, 16
  03c7d94  lfs 5, 8(5)
  03c7d98  lfs 6, 12(5)
  03c7d9c  addic 5, 5, 16
  03c7da0  fadds 1, 1, 4
  03c7da4  fadds 1, 1, 5
  03c7da8  fadds 1, 1, 6
  03c7dac  bdnz 0x3c7d84
  03c7db0  lis 3, 60
  03c7db4  addi 3, 3, 30648
  03c7db8  lfs 4, 32(3)
  03c7dbc  fadds 1, 1, 4
  03c7dc0  fmadds 1, 1, 3, 2
  03c7dc4  lis 3, 60
  03c7dc8  lis 5, 114
  03c7dcc  addi 3, 3, 30648
  03c7dd0  lis 6, 114
  03c7dd4  lfs 4, 36(3)
  03c7dd8  lfs 3, -3048(5)
  03c7ddc  lfs 5, -3052(6)
  03c7de0  ori 3, 4, 0
  03c7de4  fmuls 2, 3, 4
  03c7de8  addic 5, 30, 488
  03c7dec  fmuls 4, 5, 4
  03c7df0  fmr 3, 2
  03c7df4  bl 0x10a2e0
  03c7df8  nop
  03c7dfc  ori 3, 31, 0
  03c7e00  bl 0xefe40
  03c7e04  nop
  03c7e08  lwz 3, 84(31)
  03c7e0c  cmpwi 3, 0
  03c7e10  bf 2, 0x3c7e74
  03c7e14  lis 3, 60
  03c7e18  addi 3, 3, 30648
  03c7e1c  lfs 2, 40(3)
  03c7e20  fcmpu 0, 1, 2
  03c7e24  bt 0, 0x3c7e74
  03c7e28  lis 3, 60
  03c7e2c  addi 3, 3, 30648
  03c7e30  lfs 2, 44(3)
  03c7e34  fcmpu 0, 1, 2
  03c7e38  bt 1, 0x3c7e74
  03c7e3c  lis 3, 60
  03c7e40  li 5, 0
  03c7e44  addi 3, 3, 30648
  03c7e48  li 9, 0
  03c7e4c  li 4, 0
  03c7e50  li 6, 1
  03c7e54  li 10, 1
  03c7e58  lfs 1, 4(3)
  03c7e5c  ori 3, 31, 0
  03c7e60  std 5, 112(1)
  03c7e64  fmr 2, 1
  03c7e68  fmr 3, 1
  03c7e6c  bl 0x1059f0
  03c7e70  nop
  03c7e74  lbz 3, 112(31)
  03c7e78  rlwinm 3, 3, 0, 30, 30
  03c7e7c  cmpwi 3, 0
  03c7e80  bt 2, 0x3c806c
  03c7e84  lwz 3, 452(30)
  03c7e88  cmpwi 3, 2
  03c7e8c  bf 2, 0x3c7ee4
  03c7e90  li 3, 2
  03c7e94  lbz 4, 83(31)
  03c7e98  cmpwi 4, 0
  03c7e9c  stb 3, 32(31)
  03c7ea0  bt 2, 0x3c806c
  03c7ea4  lis 3, 60
  03c7ea8  lis 4, 114
  03c7eac  addi 3, 3, 30648
  03c7eb0  li 5, 0
  03c7eb4  lfs 1, 12(3)
  03c7eb8  lfs 2, -3056(4)
  03c7ebc  ori 3, 31, 0
  03c7ec0  fmuls 1, 2, 1
  03c7ec4  li 4, 0
  03c7ec8  fctiwz 1, 1
  03c7ecc  stfd 1, 272(1)
  03c7ed0  lwz 6, 276(1)
  03c7ed4  extsw 6, 6
  03c7ed8  bl 0xfddc0
  03c7edc  nop
  03c7ee0  b 0x3c806c
  03c7ee4  lfs 1, 20(31)
  03c7ee8  lfs 2, 388(30)
  03c7eec  lfs 3, 16(31)
  03c7ef0  fsubs 1, 1, 2
  03c7ef4  lfs 2, 384(30)
  03c7ef8  fsubs 2, 3, 2
  03c7efc  lis 3, 60
  03c7f00  addi 3, 3, 30648
  03c7f04  fmuls 1, 1, 1
  03c7f08  fmadds 1, 2, 2, 1
  03c7f0c  lfs 2, 48(3)
  03c7f10  fsqrts 1, 1
  03c7f14  fcmpu 0, 1, 2
  03c7f18  cror 6, 0, 2
  03c7f1c  bt 6, 0x3c806c
  03c7f20  li 3, 3
  03c7f24  lbz 4, 83(31)
  03c7f28  cmpwi 4, 1
  03c7f2c  stb 3, 32(31)
  03c7f30  bt 2, 0x3c806c
  03c7f34  lis 3, 60
  03c7f38  lis 4, 114
  03c7f3c  addi 3, 3, 30648
  03c7f40  li 5, 0
  03c7f44  lfs 1, 12(3)
  03c7f48  lfs 2, -3056(4)
  03c7f4c  ori 3, 31, 0
  03c7f50  fmuls 1, 2, 1
  03c7f54  li 4, 1
  03c7f58  fctiwz 1, 1
  03c7f5c  stfd 1, 272(1)
  03c7f60  lwz 6, 276(1)
  03c7f64  extsw 6, 6
  03c7f68  bl 0xfddc0
  03c7f6c  nop
  03c7f70  b 0x3c806c
  03c7f74  lis 3, 60
  03c7f78  lfs 1, 16(31)
  03c7f7c  lfs 2, 20(31)
  03c7f80  li 7, 4
  03c7f84  addi 6, 3, 30648
  03c7f88  stfs 1, 208(1)
  03c7f8c  lfs 1, 28(31)
  03c7f90  li 11, 0
  03c7f94  stfs 2, 212(1)
  03c7f98  li 12, 1
  03c7f9c  stfs 1, 220(1)
  03c7fa0  li 29, -1
  03c7fa4  ori 3, 31, 0
  03c7fa8  lfs 4, 8(6)
  03c7fac  lfs 1, 24(31)
  03c7fb0  addic 4, 30, 64
  03c7fb4  std 7, 144(1)
  03c7fb8  addic 5, 1, 208
  03c7fbc  fadds 1, 1, 4
  03c7fc0  std 11, 160(1)
  03c7fc4  std 12, 168(1)
  03c7fc8  li 8, 5
  03c7fcc  std 29, 176(1)
  03c7fd0  li 9, 2
  03c7fd4  std 11, 184(1)
  03c7fd8  li 10, 4
  03c7fdc  fmr 6, 4
  03c7fe0  stfs 1, 216(1)
  03c7fe4  lfs 1, 28(6)
  03c7fe8  lfs 3, 4(6)
  03c7fec  lfs 5, 52(6)
  03c7ff0  fmr 2, 1
  03c7ff4  fmr 7, 1
  03c7ff8  bl 0x10e030
  03c7ffc  nop
  03c8000  li 3, 7
  03c8004  lbz 4, 83(31)
  03c8008  cmpwi 4, 0
  03c800c  stb 3, 32(31)
  03c8010  bt 2, 0x3c8050
  03c8014  lis 3, 60
  03c8018  lis 4, 114
  03c801c  addi 3, 3, 30648
  03c8020  li 5, 0
  03c8024  lfs 1, 12(3)
  03c8028  lfs 2, -3056(4)
  03c802c  ori 3, 31, 0
  03c8030  fmuls 1, 2, 1
  03c8034  li 4, 0
  03c8038  fctiwz 1, 1
  03c803c  stfd 1, 272(1)
  03c8040  lwz 6, 276(1)
  03c8044  extsw 6, 6
  03c8048  bl 0xfddc0
  03c804c  nop
  03c8050  lhz 4, 52(31)
  03c8054  li 3, 0
  03c8058  ori 4, 4, 1
  03c805c  rlwimi 4, 3, 0, 19, 19
  03c8060  stb 3, 49(31)
  03c8064  stw 3, 148(31)
  03c8068  sth 4, 52(31)
  03c806c  addic 3, 31, 192
  03c8070  addic 4, 31, 64
  03c8074  bl 0x500b64
  03c8078  nop
  03c807c  lis 3, 60
  03c8080  lwz 4, 500(30)
  03c8084  addi 3, 3, 30648
  03c8088  cmpwi 4, 0
  03c808c  lfs 1, 28(3)
  03c8090  bt 2, 0x3c814c
  03c8094  lis 3, 60
  03c8098  lis 4, 114
  03c809c  addi 29, 3, 30648
  03c80a0  addic 3, 30, 500
  03c80a4  lfs 2, 56(29)
  03c80a8  lfs 3, -3052(4)
  03c80ac  fmuls 2, 3, 2
  03c80b0  bl 0x109af0
  03c80b4  nop
  03c80b8  lfs 1, 4(29)
  03c80bc  lfs 2, 500(30)
  03c80c0  lfs 3, 224(31)
  03c80c4  fadds 2, 2, 1
  03c80c8  lfs 4, 228(31)
  03c80cc  lfs 5, 232(31)
  03c80d0  lfs 6, 192(31)
  03c80d4  lfs 7, 196(31)
  03c80d8  lfs 8, 200(31)
  03c80dc  lfs 9, 208(31)
  03c80e0  lis 3, 113
  03c80e4  ori 4, 31, 0
  03c80e8  addic 3, 3, -10944
  03c80ec  fmuls 3, 3, 2
  03c80f0  fmuls 4, 4, 2
  03c80f4  fmuls 2, 5, 2
  03c80f8  lfs 5, 212(31)
  03c80fc  lfs 10, 216(31)
  03c8100  stfs 3, 224(31)
  03c8104  stfs 4, 228(31)
  03c8108  stfs 2, 232(31)
  03c810c  lfs 2, 500(30)
  03c8110  fsubs 1, 1, 2
  03c8114  fmuls 2, 6, 1
  03c8118  fmuls 3, 7, 1
  03c811c  fmuls 4, 8, 1
  03c8120  fmuls 6, 9, 1
  03c8124  fmuls 5, 5, 1
  03c8128  fmuls 1, 10, 1
  03c812c  stfs 2, 192(31)
  03c8130  stfs 3, 196(31)
  03c8134  stfs 4, 200(31)
  03c8138  stfs 6, 208(31)
  03c813c  stfs 5, 212(31)
  03c8140  stfs 1, 216(31)
  03c8144  bl 0x6d720
  03c8148  nop
  03c814c  ld 0, 336(1)
  03c8150  mtlr 0
  03c8154  ld 29, 296(1)
  03c8158  ld 30, 304(1)
  03c815c  ld 31, 312(1)
  03c8160  addi 1, 1, 320
  03c8164  blr
