# game/update/moby624.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M624_003e70b0:   # 0x3e70b0, 0x14 bytes
  03e70b0  lis 3, 133
  03e70b4  lis 4, 1
  03e70b8  addic 3, 3, 15892
  03e70bc  stw 4, 72(3)
  03e70c0  blr

M624_003e70d8:   # 0x3e70d8, 0x340 bytes
  03e70d8  stdu 1, -256(1)
  03e70dc  mflr 0
  03e70e0  std 0, 272(1)
  03e70e4  stfd 28, 224(1)
  03e70e8  stfd 29, 232(1)
  03e70ec  stfd 30, 240(1)
  03e70f0  stfd 31, 248(1)
  03e70f4  std 31, 216(1)
  03e70f8  std 30, 208(1)
  03e70fc  ori 31, 5, 0
  03e7100  ori 30, 4, 0
  03e7104  lfs 1, 4(31)
  03e7108  lfs 2, 4(30)
  03e710c  lfs 3, 0(31)
  03e7110  fsubs 5, 2, 1
  03e7114  lfs 4, 0(30)
  03e7118  lfs 6, 8(31)
  03e711c  fsubs 7, 4, 3
  03e7120  lfs 8, 8(30)
  03e7124  fsubs 9, 8, 6
  03e7128  fsubs 3, 3, 4
  03e712c  lis 4, 62
  03e7130  fmuls 5, 5, 5
  03e7134  addi 4, 4, 28872
  03e7138  std 29, 200(1)
  03e713c  fsubs 6, 6, 8
  03e7140  ori 29, 3, 0
  03e7144  addic 3, 1, 112
  03e7148  lfs 29, 0(4)
  03e714c  lis 4, 133
  03e7150  fmadds 3, 3, 29, 4
  03e7154  fmadds 5, 7, 7, 5
  03e7158  fsubs 7, 1, 2
  03e715c  lfs 1, 16004(4)
  03e7160  std 28, 192(1)
  03e7164  fmadds 4, 6, 29, 8
  03e7168  lwz 28, 120(29)
  03e716c  fmadds 5, 9, 9, 5
  03e7170  fmadds 2, 7, 29, 2
  03e7174  stfs 3, 112(1)
  03e7178  fsqrts 5, 5
  03e717c  stfs 2, 116(1)
  03e7180  stfs 4, 120(1)
  03e7184  fmuls 2, 5, 29
  03e7188  std 27, 184(1)
  03e718c  std 26, 176(1)
  03e7190  stfs 2, 124(1)
  03e7194  bl 0x502910
  03e7198  nop
  03e719c  cmpwi 3, -1
  03e71a0  bt 2, 0x3e73e0
  03e71a4  lis 3, 62
  03e71a8  lis 4, 133
  03e71ac  addi 3, 3, 28872
  03e71b0  lfs 30, 4(3)
  03e71b4  lfs 31, 8(3)
  03e71b8  fmr 1, 30
  03e71bc  lfs 28, 16188(4)
  03e71c0  fmr 2, 31
  03e71c4  bl 0xfcbe8
  03e71c8  nop
  03e71cc  fcmpu 0, 28, 1
  03e71d0  cror 6, 0, 2
  03e71d4  bt 6, 0x3e73e0
  03e71d8  fmr 2, 31
  03e71dc  fmr 1, 30
  03e71e0  bl 0xfcbe8
  03e71e4  nop
  03e71e8  lfs 2, 4(31)
  03e71ec  lfs 3, 4(30)
  03e71f0  lfs 4, 0(31)
  03e71f4  fsubs 2, 2, 3
  03e71f8  lfs 5, 0(30)
  03e71fc  lfs 6, 8(31)
  03e7200  lfs 7, 8(30)
  03e7204  fsubs 4, 4, 5
  03e7208  lfs 8, 20(29)
  03e720c  fsubs 6, 6, 7
  03e7210  fmadds 2, 1, 2, 3
  03e7214  lfs 3, 16(29)
  03e7218  fmadds 4, 1, 4, 5
  03e721c  lfs 5, 24(29)
  03e7220  fmadds 1, 1, 6, 7
  03e7224  fsubs 6, 2, 8
  03e7228  lfs 8, 12(31)
  03e722c  fsubs 3, 4, 3
  03e7230  fsubs 5, 1, 5
  03e7234  stfs 4, 128(1)
  03e7238  stfs 2, 132(1)
  03e723c  fmuls 7, 6, 6
  03e7240  stfs 1, 136(1)
  03e7244  stfs 8, 140(1)
  03e7248  stfs 3, 144(1)
  03e724c  stfs 6, 148(1)
  03e7250  stfs 5, 152(1)
  03e7254  fmadds 7, 3, 3, 7
  03e7258  stfs 8, 156(1)
  03e725c  lis 3, 133
  03e7260  lis 4, 133
  03e7264  fmr 1, 30
  03e7268  fmr 2, 31
  03e726c  fmadds 7, 5, 5, 7
  03e7270  fsqrts 4, 7
  03e7274  lfs 7, 32(28)
  03e7278  lwz 3, 16168(3)
  03e727c  lwz 4, 16172(4)
  03e7280  extsw 31, 3
  03e7284  extsw 30, 4
  03e7288  fdivs 7, 7, 4
  03e728c  fsub 8, 30, 4
  03e7290  fsub 9, 30, 4
  03e7294  fsub 10, 30, 4
  03e7298  fsub 11, 4, 30
  03e729c  fsub 12, 4, 30
  03e72a0  fsub 4, 4, 30
  03e72a4  fmuls 3, 3, 7
  03e72a8  fmuls 6, 6, 7
  03e72ac  fmuls 5, 5, 7
  03e72b0  fsel 7, 8, 30, 3
  03e72b4  fsel 8, 9, 30, 6
  03e72b8  fsel 9, 10, 30, 5
  03e72bc  fsel 3, 11, 7, 3
  03e72c0  fsel 6, 12, 8, 6
  03e72c4  fsel 4, 4, 9, 5
  03e72c8  stfs 3, 144(1)
  03e72cc  stfs 6, 148(1)
  03e72d0  stfs 4, 152(1)
  03e72d4  bl 0xfcbe8
  03e72d8  nop
  03e72dc  ori 4, 30, 0
  03e72e0  ori 3, 31, 0
  03e72e4  bl 0x5027bc
  03e72e8  nop
  03e72ec  lis 4, 133
  03e72f0  lis 31, 114
  03e72f4  lis 30, 133
  03e72f8  lwz 4, 16180(4)
  03e72fc  extsw 4, 4
  03e7300  ori 29, 3, 0
  03e7304  li 3, 255
  03e7308  std 4, 160(1)
  03e730c  lfs 1, -3056(31)
  03e7310  lfs 31, 16176(30)
  03e7314  lfd 2, 160(1)
  03e7318  fcfid 2, 2
  03e731c  addic 28, 1, 128
  03e7320  addic 27, 1, 144
  03e7324  frsp 2, 2
  03e7328  fadds 2, 2, 29
  03e732c  fmuls 1, 1, 2
  03e7330  fctiwz 1, 1
  03e7334  stfd 1, 160(1)
  03e7338  lwz 4, 164(1)
  03e733c  clrlwi 26, 4, 24
  03e7340  bl 0xfc620
  03e7344  nop
  03e7348  clrlwi 8, 3, 24
  03e734c  fmr 1, 31
  03e7350  ori 3, 28, 0
  03e7354  ori 4, 27, 0
  03e7358  ori 5, 29, 0
  03e735c  ori 7, 26, 0
  03e7360  li 9, 0
  03e7364  bl 0x131100
  03e7368  nop
  03e736c  lis 3, 133
  03e7370  li 4, 0
  03e7374  lwz 3, 16184(3)
  03e7378  extsw 3, 3
  03e737c  std 3, 160(1)
  03e7380  lfs 1, -3056(31)
  03e7384  lfs 31, 16176(30)
  03e7388  stw 4, 152(1)
  03e738c  lfd 2, 160(1)
  03e7390  fcfid 2, 2
  03e7394  li 3, 255
  03e7398  frsp 2, 2
  03e739c  fadds 2, 2, 29
  03e73a0  fmuls 1, 1, 2
  03e73a4  fctiwz 1, 1
  03e73a8  stfd 1, 160(1)
  03e73ac  lwz 4, 164(1)
  03e73b0  clrlwi 31, 4, 24
  03e73b4  bl 0xfc620
  03e73b8  nop
  03e73bc  clrlwi 8, 3, 24
  03e73c0  ori 7, 31, 0
  03e73c4  fmr 1, 31
  03e73c8  ori 3, 28, 0
  03e73cc  ori 4, 27, 0
  03e73d0  ori 5, 29, 0
  03e73d4  li 9, 0
  03e73d8  bl 0x131100
  03e73dc  nop
  03e73e0  ld 0, 272(1)
  03e73e4  mtlr 0
  03e73e8  lfd 28, 224(1)
  03e73ec  lfd 29, 232(1)
  03e73f0  lfd 30, 240(1)
  03e73f4  lfd 31, 248(1)
  03e73f8  ld 26, 176(1)
  03e73fc  ld 27, 184(1)
  03e7400  ld 28, 192(1)
  03e7404  ld 29, 200(1)
  03e7408  ld 30, 208(1)
  03e740c  ld 31, 216(1)
  03e7410  addi 1, 1, 256
  03e7414  blr

M624_003e7450:   # 0x3e7450, 0x3a4 bytes
  03e7450  stdu 1, -336(1)
  03e7454  mflr 0
  03e7458  std 0, 352(1)
  03e745c  stfd 21, 248(1)
  03e7460  stfd 22, 256(1)
  03e7464  stfd 23, 264(1)
  03e7468  stfd 24, 272(1)
  03e746c  stfd 25, 280(1)
  03e7470  stfd 26, 288(1)
  03e7474  stfd 27, 296(1)
  03e7478  stfd 28, 304(1)
  03e747c  stfd 29, 312(1)
  03e7480  stfd 30, 320(1)
  03e7484  stfd 31, 328(1)
  03e7488  std 31, 240(1)
  03e748c  ori 31, 3, 0
  03e7490  lis 3, 151
  03e7494  addic 3, 3, -25376
  03e7498  lfs 1, 20(31)
  03e749c  lfs 2, 16(31)
  03e74a0  lfs 3, 132(3)
  03e74a4  lfs 4, 128(3)
  03e74a8  fsubs 1, 3, 1
  03e74ac  fsubs 2, 4, 2
  03e74b0  lfs 3, 136(3)
  03e74b4  lfs 4, 24(31)
  03e74b8  fsubs 3, 3, 4
  03e74bc  std 30, 232(1)
  03e74c0  lis 4, 62
  03e74c4  std 28, 216(1)
  03e74c8  li 30, 0
  03e74cc  addi 28, 4, 29720
  03e74d0  fmuls 5, 1, 1
  03e74d4  stfs 1, 116(1)
  03e74d8  stfs 2, 112(1)
  03e74dc  lis 5, 1
  03e74e0  fmadds 4, 2, 2, 5
  03e74e4  lfs 5, 140(3)
  03e74e8  stfs 3, 120(1)
  03e74ec  lis 3, 114
  03e74f0  stfs 5, 124(1)
  03e74f4  addic 7, 1, 112
  03e74f8  ori 4, 31, 0
  03e74fc  fsqrts 3, 4
  03e7500  lfs 4, 0(28)
  03e7504  stw 30, 120(1)
  03e7508  lfs 5, 4(28)
  03e750c  lfs 6, -3052(3)
  03e7510  stw 30, 120(1)
  03e7514  addic 3, 1, 160
  03e7518  ori 5, 5, 1
  03e751c  fmuls 7, 6, 5
  03e7520  std 29, 224(1)
  03e7524  fmuls 5, 6, 5
  03e7528  lwz 29, 120(31)
  03e752c  stfs 5, 120(1)
  03e7530  fdivs 6, 7, 3
  03e7534  fsub 5, 4, 3
  03e7538  fsub 7, 4, 3
  03e753c  fsub 8, 3, 4
  03e7540  fsub 3, 3, 4
  03e7544  fmuls 2, 2, 6
  03e7548  fmuls 1, 1, 6
  03e754c  fsel 5, 5, 4, 2
  03e7550  fsel 4, 7, 4, 1
  03e7554  fsel 2, 8, 5, 2
  03e7558  fsel 1, 3, 4, 1
  03e755c  stfs 2, 112(1)
  03e7560  stfs 1, 116(1)
  03e7564  lfs 1, 8(28)
  03e7568  bl 0x10581c
  03e756c  nop
  03e7570  li 3, 64
  03e7574  bl 0x502730
  03e7578  nop
  03e757c  lfs 2, 12(28)
  03e7580  fdivs 22, 2, 1
  03e7584  lfs 3, 16(28)
  03e7588  lfs 21, 20(28)
  03e758c  fmr 2, 3
  03e7590  fmr 1, 21
  03e7594  fmuls 22, 22, 2
  03e7598  fmr 2, 22
  03e759c  bl 0x502578
  03e75a0  nop
  03e75a4  lfs 24, 24(28)
  03e75a8  fmr 23, 1
  03e75ac  lfs 25, 28(28)
  03e75b0  lfs 26, 32(28)
  03e75b4  lfs 27, 36(28)
  03e75b8  lfs 28, 40(28)
  03e75bc  lfs 29, 44(28)
  03e75c0  lfs 30, 48(28)
  03e75c4  lfs 31, 52(28)
  03e75c8  fadds 1, 21, 24
  03e75cc  fsubs 2, 25, 21
  03e75d0  fadds 3, 23, 24
  03e75d4  fsubs 7, 26, 21
  03e75d8  fsubs 11, 26, 23
  03e75dc  lfs 12, 36(29)
  03e75e0  li 3, 0
  03e75e4  fsubs 4, 25, 1
  03e75e8  fsub 6, 21, 2
  03e75ec  fsubs 5, 26, 1
  03e75f0  addic 7, 1, 160
  03e75f4  addic 4, 1, 144
  03e75f8  li 5, 1
  03e75fc  fsub 8, 1, 4
  03e7600  fsel 2, 6, 2, 21
  03e7604  fsubs 6, 25, 3
  03e7608  fsel 1, 8, 4, 1
  03e760c  fsub 4, 7, 2
  03e7610  fsub 8, 3, 6
  03e7614  fsub 9, 5, 1
  03e7618  fsel 2, 4, 7, 2
  03e761c  fsel 4, 8, 6, 3
  03e7620  fsubs 3, 26, 3
  03e7624  fsel 1, 9, 5, 1
  03e7628  fmuls 6, 2, 2
  03e762c  fsubs 5, 25, 23
  03e7630  fsub 7, 3, 4
  03e7634  fmuls 8, 1, 1
  03e7638  fmuls 10, 6, 2
  03e763c  fsub 9, 23, 5
  03e7640  fsel 3, 7, 3, 4
  03e7644  fmuls 4, 8, 1
  03e7648  fmuls 7, 6, 10
  03e764c  fmadds 2, 10, 27, 2
  03e7650  fsel 5, 9, 5, 23
  03e7654  fmuls 9, 3, 3
  03e7658  fmuls 10, 8, 4
  03e765c  fmadds 1, 4, 27, 1
  03e7660  fmuls 4, 6, 7
  03e7664  fmadds 2, 7, 28, 2
  03e7668  fsub 7, 11, 5
  03e766c  fmuls 13, 8, 10
  03e7670  fmadds 1, 10, 28, 1
  03e7674  fmuls 10, 9, 3
  03e7678  fmuls 6, 6, 4
  03e767c  fmadds 2, 4, 29, 2
  03e7680  fsel 4, 7, 11, 5
  03e7684  fmuls 5, 8, 13
  03e7688  fmadds 1, 13, 29, 1
  03e768c  fmuls 7, 9, 10
  03e7690  fmadds 3, 10, 27, 3
  03e7694  fmadds 2, 6, 30, 2
  03e7698  fmuls 6, 4, 4
  03e769c  fmadds 1, 5, 30, 1
  03e76a0  fmuls 5, 9, 7
  03e76a4  fmadds 3, 7, 28, 3
  03e76a8  fmuls 7, 6, 4
  03e76ac  fmuls 1, 1, 12
  03e76b0  fmuls 8, 9, 5
  03e76b4  fmadds 3, 5, 29, 3
  03e76b8  fmuls 5, 6, 7
  03e76bc  fmadds 4, 7, 27, 4
  03e76c0  stfs 1, 128(1)
  03e76c4  lfs 7, 36(29)
  03e76c8  fmadds 3, 8, 30, 3
  03e76cc  stw 3, 136(1)
  03e76d0  fmuls 2, 2, 7
  03e76d4  fmuls 7, 6, 5
  03e76d8  fmadds 4, 5, 28, 4
  03e76dc  lfs 5, 16(31)
  03e76e0  lfs 8, 20(31)
  03e76e4  fadds 1, 1, 5
  03e76e8  addic 3, 1, 128
  03e76ec  fmuls 6, 6, 7
  03e76f0  fmadds 4, 7, 29, 4
  03e76f4  stfs 2, 132(1)
  03e76f8  lfs 9, 36(29)
  03e76fc  lfs 7, 24(31)
  03e7700  fadds 2, 2, 8
  03e7704  fmuls 3, 3, 9
  03e7708  lwz 6, 52(29)
  03e770c  fadds 7, 7, 31
  03e7710  fmadds 4, 6, 30, 4
  03e7714  stfs 3, 144(1)
  03e7718  lfs 6, 36(29)
  03e771c  fadds 3, 3, 5
  03e7720  stfs 1, 128(1)
  03e7724  stfs 2, 132(1)
  03e7728  fmadds 1, 4, 6, 8
  03e772c  stfs 7, 136(1)
  03e7730  stfs 7, 152(1)
  03e7734  stfs 3, 144(1)
  03e7738  stfs 1, 148(1)
  03e773c  bl 0x57820
  03e7740  nop
  03e7744  lwz 3, 36(29)
  03e7748  lis 5, 16448
  03e774c  srawi 4, 3, 31
  03e7750  srwi 6, 4, 1
  03e7754  xor 3, 6, 3
  03e7758  subc 3, 3, 4
  03e775c  cmpw 3, 5
  03e7760  bf 0, 0x3e7774
  03e7764  addic 4, 1, 128
  03e7768  addic 5, 1, 144
  03e776c  ori 3, 31, 0
  03e7770  bl 0x3e70d8
  03e7774  fmr 1, 21
  03e7778  fmr 2, 22
  03e777c  bl 0x502578
  03e7780  nop
  03e7784  fmr 21, 1
  03e7788  fmr 1, 23
  03e778c  fmr 2, 22
  03e7790  bl 0x502578
  03e7794  nop
  03e7798  addic 30, 30, 1
  03e779c  fmr 23, 1
  03e77a0  cmpwi 30, 64
  03e77a4  bt 0, 0x3e75c8
  03e77a8  ld 0, 352(1)
  03e77ac  mtlr 0
  03e77b0  lfd 21, 248(1)
  03e77b4  lfd 22, 256(1)
  03e77b8  lfd 23, 264(1)
  03e77bc  lfd 24, 272(1)
  03e77c0  lfd 25, 280(1)
  03e77c4  lfd 26, 288(1)
  03e77c8  lfd 27, 296(1)
  03e77cc  lfd 28, 304(1)
  03e77d0  lfd 29, 312(1)
  03e77d4  lfd 30, 320(1)
  03e77d8  lfd 31, 328(1)
  03e77dc  ld 28, 216(1)
  03e77e0  ld 29, 224(1)
  03e77e4  ld 30, 232(1)
  03e77e8  ld 31, 240(1)
  03e77ec  addi 1, 1, 336
  03e77f0  blr

UpdateMoby_624:   # 0x3e7830, 0x790 bytes
  03e7830  stdu 1, -336(1)
  03e7834  mflr 0
  03e7838  std 0, 352(1)
  03e783c  stfd 28, 304(1)
  03e7840  stfd 29, 312(1)
  03e7844  stfd 30, 320(1)
  03e7848  stfd 31, 328(1)
  03e784c  std 31, 296(1)
  03e7850  lis 4, 151
  03e7854  std 30, 288(1)
  03e7858  ori 31, 3, 0
  03e785c  lwz 30, 120(3)
  03e7860  addic 4, 4, -25376
  03e7864  lwz 3, 8324(4)
  03e7868  std 29, 280(1)
  03e786c  std 28, 272(1)
  03e7870  std 27, 264(1)
  03e7874  std 26, 256(1)
  03e7878  std 25, 248(1)
  03e787c  std 24, 240(1)
  03e7880  std 23, 232(1)
  03e7884  std 22, 224(1)
  03e7888  std 21, 216(1)
  03e788c  cmpwi 3, 114
  03e7890  bt 2, 0x3e78a4
  03e7894  lis 3, 161
  03e7898  lwz 3, 1800(3)
  03e789c  cmpwi 3, 2
  03e78a0  bf 2, 0x3e78b4
  03e78a4  ori 3, 31, 0
  03e78a8  bl 0xefb38
  03e78ac  nop
  03e78b0  b 0x3e7f74
  03e78b4  lbz 3, 32(31)
  03e78b8  cmpwi 3, 1
  03e78bc  cmpwi 1, 3, 3
  03e78c0  cmpwi 6, 3, 2
  03e78c4  cmpwi 7, 3, 0
  03e78c8  bt 1, 0x3e78dc
  03e78cc  cmpwi 3, -1
  03e78d0  bf 1, 0x3e7f74
  03e78d4  bf 29, 0x3e78e8
  03e78d8  b 0x3e7df0
  03e78dc  bf 25, 0x3e7efc
  03e78e0  bf 5, 0x3e7f64
  03e78e4  b 0x3e7f74
  03e78e8  lis 3, 133
  03e78ec  li 28, 0
  03e78f0  ori 29, 28, 0
  03e78f4  lwz 3, 16080(3)
  03e78f8  cmpwi 3, 0
  03e78fc  bf 1, 0x3e7c0c
  03e7900  lis 3, 62
  03e7904  addi 3, 3, 30708
  03e7908  lfs 29, 0(3)
  03e790c  lfs 30, 4(3)
  03e7910  lfs 31, 8(3)
  03e7914  lis 3, 133
  03e7918  lfs 1, 0(30)
  03e791c  lis 4, 133
  03e7920  lis 5, 114
  03e7924  lfs 3, 16024(3)
  03e7928  lfs 4, 16028(4)
  03e792c  fmuls 2, 1, 3
  03e7930  addic 3, 1, 160
  03e7934  fmr 1, 29
  03e7938  stfs 2, 128(1)
  03e793c  lfs 2, 4(30)
  03e7940  fmuls 5, 2, 3
  03e7944  lfs 2, -3052(5)
  03e7948  fmuls 2, 4, 2
  03e794c  stfs 5, 132(1)
  03e7950  lfs 4, 8(30)
  03e7954  fmuls 3, 4, 3
  03e7958  stfs 3, 136(1)
  03e795c  lfs 3, 12(30)
  03e7960  stfs 3, 140(1)
  03e7964  bl 0xfea60
  03e7968  nop
  03e796c  lfs 1, 160(1)
  03e7970  addic 27, 1, 176
  03e7974  lfs 2, 128(1)
  03e7978  lfs 3, 164(1)
  03e797c  fadds 4, 1, 2
  03e7980  ori 3, 27, 0
  03e7984  lfs 1, 132(1)
  03e7988  lfs 2, 168(1)
  03e798c  fadds 3, 3, 1
  03e7990  lfs 1, 136(1)
  03e7994  lfs 6, 172(1)
  03e7998  fadds 5, 2, 1
  03e799c  stfs 6, 140(1)
  03e79a0  fmr 1, 29
  03e79a4  fmr 2, 30
  03e79a8  stfs 4, 128(1)
  03e79ac  stfs 3, 132(1)
  03e79b0  stfs 5, 136(1)
  03e79b4  bl 0xfea60
  03e79b8  nop
  03e79bc  lfs 1, 176(1)
  03e79c0  lis 3, 133
  03e79c4  lfs 2, 16(31)
  03e79c8  lis 4, 133
  03e79cc  lfs 3, 180(1)
  03e79d0  fadds 1, 1, 2
  03e79d4  lfs 2, 20(31)
  03e79d8  lfs 4, 184(1)
  03e79dc  fadds 2, 3, 2
  03e79e0  lfs 3, 24(31)
  03e79e4  stw 29, 156(1)
  03e79e8  fadds 3, 4, 3
  03e79ec  stw 29, 152(1)
  03e79f0  stw 29, 148(1)
  03e79f4  stw 29, 144(1)
  03e79f8  lfs 4, 16048(3)
  03e79fc  stfs 1, 176(1)
  03e7a00  fmr 1, 4
  03e7a04  lfs 4, 16052(4)
  03e7a08  stfs 2, 180(1)
  03e7a0c  fmr 2, 4
  03e7a10  stfs 3, 184(1)
  03e7a14  bl 0xfcbe8
  03e7a18  nop
  03e7a1c  lis 3, 133
  03e7a20  stfs 1, 140(1)
  03e7a24  lis 4, 133
  03e7a28  lfs 1, 16056(3)
  03e7a2c  lfs 2, 16060(4)
  03e7a30  bl 0xfcbe8
  03e7a34  nop
  03e7a38  lis 3, 133
  03e7a3c  lis 4, 133
  03e7a40  stfs 1, 156(1)
  03e7a44  fmr 1, 29
  03e7a48  fmr 2, 31
  03e7a4c  lwz 3, 16064(3)
  03e7a50  lwz 4, 16068(4)
  03e7a54  extsw 26, 3
  03e7a58  extsw 25, 4
  03e7a5c  bl 0xfcbe8
  03e7a60  nop
  03e7a64  ori 4, 25, 0
  03e7a68  ori 3, 26, 0
  03e7a6c  bl 0x5027bc
  03e7a70  nop
  03e7a74  lis 4, 133
  03e7a78  fmr 1, 29
  03e7a7c  lis 5, 133
  03e7a80  fmr 2, 31
  03e7a84  ori 26, 3, 0
  03e7a88  lwz 3, 16072(4)
  03e7a8c  lwz 4, 16076(5)
  03e7a90  extsw 25, 3
  03e7a94  extsw 24, 4
  03e7a98  bl 0xfcbe8
  03e7a9c  nop
  03e7aa0  ori 3, 25, 0
  03e7aa4  ori 4, 24, 0
  03e7aa8  bl 0x5027bc
  03e7aac  nop
  03e7ab0  ori 25, 3, 0
  03e7ab4  fmr 1, 29
  03e7ab8  fmr 2, 31
  03e7abc  bl 0xfcbe8
  03e7ac0  nop
  03e7ac4  lis 3, 133
  03e7ac8  lis 24, 114
  03e7acc  lwz 3, 16032(3)
  03e7ad0  extsw 3, 3
  03e7ad4  std 3, 192(1)
  03e7ad8  lfs 2, -3056(24)
  03e7adc  lfd 3, 192(1)
  03e7ae0  fcfid 3, 3
  03e7ae4  frsp 3, 3
  03e7ae8  fmadds 1, 3, 1, 31
  03e7aec  fmuls 1, 2, 1
  03e7af0  bl 0x502758
  03e7af4  nop
  03e7af8  lis 4, 133
  03e7afc  lis 23, 133
  03e7b00  ori 22, 3, 0
  03e7b04  lwz 4, 16036(4)
  03e7b08  extsw 4, 4
  03e7b0c  std 4, 192(1)
  03e7b10  lfs 2, 16044(23)
  03e7b14  lfd 3, 192(1)
  03e7b18  fneg 1, 2
  03e7b1c  fcfid 3, 3
  03e7b20  frsp 28, 3
  03e7b24  bl 0xfcbe8
  03e7b28  nop
  03e7b2c  fadds 1, 1, 31
  03e7b30  lfs 2, -3056(24)
  03e7b34  fmuls 1, 28, 1
  03e7b38  fmuls 1, 2, 1
  03e7b3c  bl 0x502758
  03e7b40  nop
  03e7b44  lis 4, 133
  03e7b48  ori 21, 3, 0
  03e7b4c  lwz 4, 16040(4)
  03e7b50  extsw 4, 4
  03e7b54  std 4, 192(1)
  03e7b58  lfs 2, 16044(23)
  03e7b5c  lfd 3, 192(1)
  03e7b60  fneg 1, 2
  03e7b64  fcfid 3, 3
  03e7b68  frsp 28, 3
  03e7b6c  bl 0xfcbe8
  03e7b70  nop
  03e7b74  fadds 1, 1, 31
  03e7b78  lfs 2, -3056(24)
  03e7b7c  fmuls 1, 28, 1
  03e7b80  fmuls 1, 2, 1
  03e7b84  bl 0x502758
  03e7b88  nop
  03e7b8c  extsw 4, 21
  03e7b90  lis 5, 133
  03e7b94  ori 10, 3, 0
  03e7b98  std 4, 192(1)
  03e7b9c  lis 4, 114
  03e7ba0  lfs 1, 16020(5)
  03e7ba4  lis 5, 133
  03e7ba8  lfs 2, 152(1)
  03e7bac  ori 8, 22, 0
  03e7bb0  lfs 3, -3048(4)
  03e7bb4  fmuls 1, 1, 3
  03e7bb8  lwz 3, 16084(5)
  03e7bbc  lfd 3, 192(1)
  03e7bc0  addic 4, 1, 128
  03e7bc4  extsw 9, 3
  03e7bc8  fcfid 3, 3
  03e7bcc  ori 3, 27, 0
  03e7bd0  addic 5, 1, 144
  03e7bd4  std 9, 112(1)
  03e7bd8  ori 6, 26, 0
  03e7bdc  ori 7, 25, 0
  03e7be0  ori 9, 21, 0
  03e7be4  frsp 3, 3
  03e7be8  fnmsubs 1, 1, 3, 2
  03e7bec  stfs 1, 152(1)
  03e7bf0  bl 0x1206e8
  03e7bf4  nop
  03e7bf8  lis 3, 133
  03e7bfc  addic 28, 28, 1
  03e7c00  lwz 3, 16080(3)
  03e7c04  cmpw 28, 3
  03e7c08  bt 0, 0x3e7914
  03e7c0c  lis 3, 62
  03e7c10  lfs 1, 48(30)
  03e7c14  addi 29, 3, 30708
  03e7c18  lis 3, 114
  03e7c1c  lfs 2, 12(29)
  03e7c20  lfs 3, -3052(3)
  03e7c24  fmuls 2, 3, 2
  03e7c28  bl 0x502578
  03e7c2c  nop
  03e7c30  lfs 2, 16(29)
  03e7c34  lfs 3, 20(29)
  03e7c38  fsubs 2, 2, 1
  03e7c3c  fsubs 3, 3, 1
  03e7c40  lis 3, 133
  03e7c44  lis 4, 133
  03e7c48  fsub 4, 1, 2
  03e7c4c  fsel 2, 4, 2, 1
  03e7c50  lfs 4, 24(29)
  03e7c54  lfs 5, 28(29)
  03e7c58  fsub 6, 3, 2
  03e7c5c  fsel 2, 6, 3, 2
  03e7c60  lfs 3, 32(29)
  03e7c64  lfs 6, 36(29)
  03e7c68  lfs 31, 8(29)
  03e7c6c  lfs 9, 4(29)
  03e7c70  lwz 3, 16012(3)
  03e7c74  lwz 4, 16016(4)
  03e7c78  stfs 1, 48(30)
  03e7c7c  fmuls 7, 2, 2
  03e7c80  extsw 3, 3
  03e7c84  fmr 30, 9
  03e7c88  extsw 4, 4
  03e7c8c  fmuls 8, 7, 2
  03e7c90  fmuls 10, 7, 8
  03e7c94  fmadds 2, 8, 4, 2
  03e7c98  fmuls 4, 7, 10
  03e7c9c  fmadds 2, 10, 5, 2
  03e7ca0  fmuls 5, 7, 4
  03e7ca4  fmadds 2, 4, 3, 2
  03e7ca8  fmadds 1, 5, 6, 2
  03e7cac  fadds 1, 1, 31
  03e7cb0  fmuls 1, 1, 30
  03e7cb4  bl 0x5027bc
  03e7cb8  nop
  03e7cbc  stw 3, 144(31)
  03e7cc0  lis 3, 114
  03e7cc4  lfs 1, 40(29)
  03e7cc8  lfs 2, 8(30)
  03e7ccc  lfs 3, -3048(3)
  03e7cd0  lfs 4, 0(30)
  03e7cd4  fnmsubs 2, 3, 1, 2
  03e7cd8  addic 3, 31, 16
  03e7cdc  fmr 1, 30
  03e7ce0  li 4, 0
  03e7ce4  stfs 2, 8(30)
  03e7ce8  lfs 2, 16(31)
  03e7cec  lfs 3, 20(31)
  03e7cf0  fadds 2, 2, 4
  03e7cf4  lfs 4, 24(31)
  03e7cf8  stfs 2, 16(31)
  03e7cfc  lfs 2, 4(30)
  03e7d00  fadds 2, 3, 2
  03e7d04  stfs 2, 20(31)
  03e7d08  lfs 2, 8(30)
  03e7d0c  fadds 2, 4, 2
  03e7d10  stfs 2, 24(31)
  03e7d14  bl 0xffb70
  03e7d18  nop
  03e7d1c  fmr 2, 1
  03e7d20  lfs 1, 44(29)
  03e7d24  lfs 3, 24(31)
  03e7d28  fsubs 3, 3, 1
  03e7d2c  fcmpu 0, 2, 3
  03e7d30  cror 6, 0, 2
  03e7d34  bt 6, 0x3e7d84
  03e7d38  fadds 1, 2, 1
  03e7d3c  lis 3, 62
  03e7d40  vspltisw 2, -1
  03e7d44  li 4, 1
  03e7d48  addi 3, 3, 30708
  03e7d4c  li 6, 48
  03e7d50  lis 5, 114
  03e7d54  stb 4, 32(31)
  03e7d58  li 4, -3056
  03e7d5c  vslw 2, 2, 2
  03e7d60  stfs 1, 24(31)
  03e7d64  lvlx 3, 6, 3
  03e7d68  lvlx 4, 4, 5
  03e7d6c  vspltw 3, 3, 0
  03e7d70  li 3, 44
  03e7d74  vmaddfp 2, 4, 3, 2
  03e7d78  vctsxs 2, 2, 0
  03e7d7c  vspltw 2, 2, 0
  03e7d80  stvewx 2, 3, 30
  03e7d84  lis 3, 62
  03e7d88  lfs 1, 68(31)
  03e7d8c  lis 4, 114
  03e7d90  addi 3, 3, 30708
  03e7d94  lfs 2, 52(3)
  03e7d98  lfs 3, -3052(4)
  03e7d9c  fmuls 2, 3, 2
  03e7da0  bl 0x502578
  03e7da4  nop
  03e7da8  lwz 3, 24(31)
  03e7dac  lis 5, 16672
  03e7db0  stfs 1, 68(31)
  03e7db4  srawi 4, 3, 31
  03e7db8  srwi 6, 4, 1
  03e7dbc  xor 3, 6, 3
  03e7dc0  subc 3, 3, 4
  03e7dc4  cmpw 3, 5
  03e7dc8  bf 0, 0x3e7ddc
  03e7dcc  ori 3, 31, 0
  03e7dd0  bl 0xefb38
  03e7dd4  nop
  03e7dd8  b 0x3e7f74
  03e7ddc  fmr 1, 31
  03e7de0  ori 3, 31, 0
  03e7de4  bl 0x106150
  03e7de8  nop
  03e7dec  b 0x3e7f74
  03e7df0  lis 3, 62
  03e7df4  lfs 1, 48(30)
  03e7df8  addi 29, 3, 30708
  03e7dfc  lis 3, 114
  03e7e00  lfs 2, 12(29)
  03e7e04  lfs 3, -3052(3)
  03e7e08  fmuls 2, 3, 2
  03e7e0c  bl 0x502578
  03e7e10  nop
  03e7e14  lfs 2, 16(29)
  03e7e18  lfs 3, 20(29)
  03e7e1c  fsubs 2, 2, 1
  03e7e20  fsubs 3, 3, 1
  03e7e24  lfs 5, 24(29)
  03e7e28  lis 3, 133
  03e7e2c  lis 4, 133
  03e7e30  fsub 4, 1, 2
  03e7e34  fsel 2, 4, 2, 1
  03e7e38  lfs 4, 28(29)
  03e7e3c  fsub 6, 3, 2
  03e7e40  fsel 2, 6, 3, 2
  03e7e44  lfs 3, 32(29)
  03e7e48  lfs 6, 36(29)
  03e7e4c  lfs 8, 8(29)
  03e7e50  lfs 10, 4(29)
  03e7e54  lwz 3, 16012(3)
  03e7e58  lwz 4, 16016(4)
  03e7e5c  stfs 1, 48(30)
  03e7e60  extsw 3, 3
  03e7e64  fmuls 7, 2, 2
  03e7e68  extsw 4, 4
  03e7e6c  fmuls 9, 7, 2
  03e7e70  fmadds 2, 9, 5, 2
  03e7e74  fmuls 11, 7, 9
  03e7e78  fmr 5, 10
  03e7e7c  fmuls 9, 7, 11
  03e7e80  fmadds 2, 11, 4, 2
  03e7e84  fmuls 4, 7, 9
  03e7e88  fmadds 2, 9, 3, 2
  03e7e8c  fmadds 1, 4, 6, 2
  03e7e90  fadds 1, 1, 8
  03e7e94  fmuls 1, 1, 5
  03e7e98  bl 0x5027bc
  03e7e9c  nop
  03e7ea0  stw 3, 144(31)
  03e7ea4  addic 3, 30, 44
  03e7ea8  bl 0x4fff60
  03e7eac  nop
  03e7eb0  cmpwi 3, 0
  03e7eb4  bt 2, 0x3e7f74
  03e7eb8  li 3, 15
  03e7ebc  li 4, 0
  03e7ec0  ori 5, 31, 0
  03e7ec4  li 6, 1422
  03e7ec8  bl 0x15d204
  03e7ecc  nop
  03e7ed0  li 3, 2
  03e7ed4  lhz 4, 52(31)
  03e7ed8  lis 5, 16128
  03e7edc  li 6, 0
  03e7ee0  ori 4, 4, 1
  03e7ee4  stb 3, 32(31)
  03e7ee8  stw 5, 36(30)
  03e7eec  stb 6, 49(31)
  03e7ef0  sth 4, 52(31)
  03e7ef4  stw 6, 148(31)
  03e7ef8  b 0x3e7f74
  03e7efc  lfs 1, 36(30)
  03e7f00  lfs 2, 32(30)
  03e7f04  ori 3, 31, 0
  03e7f08  fadds 1, 1, 2
  03e7f0c  stfs 1, 36(30)
  03e7f10  bl 0x3e7450
  03e7f14  lis 3, 113
  03e7f18  ori 4, 31, 0
  03e7f1c  addic 3, 3, -9664
  03e7f20  bl 0x6d720
  03e7f24  nop
  03e7f28  lwz 3, 36(30)
  03e7f2c  lwz 4, 40(30)
  03e7f30  srawi 5, 3, 31
  03e7f34  srawi 6, 4, 31
  03e7f38  srwi 7, 5, 1
  03e7f3c  srwi 8, 6, 1
  03e7f40  xor 3, 7, 3
  03e7f44  xor 4, 8, 4
  03e7f48  subc 3, 3, 5
  03e7f4c  subc 4, 4, 6
  03e7f50  cmpw 3, 4
  03e7f54  bf 1, 0x3e7f74
  03e7f58  li 3, 3
  03e7f5c  stb 3, 32(31)
  03e7f60  b 0x3e7f74
  03e7f64  ori 3, 31, 0
  03e7f68  bl 0xefb38
  03e7f6c  nop
  03e7f70  b 0x3e7f74
  03e7f74  ld 0, 352(1)
  03e7f78  mtlr 0
  03e7f7c  lfd 28, 304(1)
  03e7f80  lfd 29, 312(1)
  03e7f84  lfd 30, 320(1)
  03e7f88  lfd 31, 328(1)
  03e7f8c  ld 21, 216(1)
  03e7f90  ld 22, 224(1)
  03e7f94  ld 23, 232(1)
  03e7f98  ld 24, 240(1)
  03e7f9c  ld 25, 248(1)
  03e7fa0  ld 26, 256(1)
  03e7fa4  ld 27, 264(1)
  03e7fa8  ld 28, 272(1)
  03e7fac  ld 29, 280(1)
  03e7fb0  ld 30, 288(1)
  03e7fb4  ld 31, 296(1)
  03e7fb8  addi 1, 1, 336
  03e7fbc  blr
