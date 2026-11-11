# game/update/moby1907.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002d6f28:   # 0x2d6f28, 0x1d4 bytes
  02d6f28  stdu 1, -144(1)
  02d6f2c  mflr 0
  02d6f30  std 0, 160(1)
  02d6f34  lis 6, 165
  02d6f38  sldi 3, 3, 2
  02d6f3c  addic 6, 6, -28284
  02d6f40  extsw 7, 3
  02d6f44  lis 8, 164
  02d6f48  ori 3, 5, 0
  02d6f4c  lwzx 6, 6, 7
  02d6f50  lwz 5, -28512(8)
  02d6f54  std 31, 136(1)
  02d6f58  std 30, 128(1)
  02d6f5c  std 29, 120(1)
  02d6f60  cmpwi 6, 0
  02d6f64  bt 2, 0x2d70dc
  02d6f68  lhz 7, 0(6)
  02d6f6c  rlwinm 7, 7, 8, 9, 23
  02d6f70  addc 7, 5, 7
  02d6f74  clrldi 7, 7, 32
  02d6f78  lhz 8, 166(7)
  02d6f7c  cmpwi 8, 1906
  02d6f80  bf 2, 0x2d70c8
  02d6f84  lbz 8, 32(7)
  02d6f88  cmpwi 8, 8
  02d6f8c  bf 2, 0x2d70c8
  02d6f90  ori 5, 3, 0
  02d6f94  lhz 6, 52(7)
  02d6f98  li 3, -66
  02d6f9c  lwz 8, 36(7)
  02d6fa0  li 30, 1
  02d6fa4  and 3, 6, 3
  02d6fa8  lwz 31, 120(7)
  02d6fac  fmr 2, 1
  02d6fb0  ori 3, 3, 4096
  02d6fb4  lwz 6, 16(8)
  02d6fb8  stw 6, 148(7)
  02d6fbc  sth 3, 52(7)
  02d6fc0  lfs 1, 0(4)
  02d6fc4  lis 3, 16256
  02d6fc8  stfs 1, 16(7)
  02d6fcc  lfs 1, 4(4)
  02d6fd0  stfs 1, 20(7)
  02d6fd4  lfs 1, 8(4)
  02d6fd8  stfs 1, 24(7)
  02d6fdc  lfs 1, 12(4)
  02d6fe0  stb 30, 32(7)
  02d6fe4  stfs 1, 28(7)
  02d6fe8  stw 3, 500(31)
  02d6fec  lfs 1, 0(5)
  02d6ff0  lfs 3, 0(4)
  02d6ff4  fsubs 3, 1, 3
  02d6ff8  lis 3, 45
  02d6ffc  addi 29, 3, 28436
  02d7000  li 6, 0
  02d7004  lis 8, 114
  02d7008  stfs 3, 464(31)
  02d700c  lfs 1, 4(5)
  02d7010  lfs 4, 4(4)
  02d7014  fsubs 4, 1, 4
  02d7018  ori 3, 4, 0
  02d701c  li 7, 0
  02d7020  fmuls 1, 4, 4
  02d7024  stfs 4, 468(31)
  02d7028  fmadds 1, 3, 3, 1
  02d702c  fsqrts 5, 1
  02d7030  lfs 1, 8(5)
  02d7034  lfs 6, 8(4)
  02d7038  ori 4, 5, 0
  02d703c  fsubs 1, 1, 6
  02d7040  stfs 1, 472(31)
  02d7044  lfs 1, 12(5)
  02d7048  stfs 1, 476(31)
  02d704c  fmr 1, 2
  02d7050  lfs 6, 0(29)
  02d7054  stw 6, 472(31)
  02d7058  fdivs 2, 2, 5
  02d705c  fsub 7, 6, 5
  02d7060  fsub 8, 6, 5
  02d7064  fsub 9, 5, 6
  02d7068  fsub 5, 5, 6
  02d706c  fmuls 3, 3, 2
  02d7070  fmuls 2, 4, 2
  02d7074  fsel 4, 7, 6, 3
  02d7078  fsel 6, 8, 6, 2
  02d707c  fsel 3, 9, 4, 3
  02d7080  fsel 2, 5, 6, 2
  02d7084  stfs 3, 464(31)
  02d7088  stfs 2, 468(31)
  02d708c  lfs 2, 4(29)
  02d7090  lfs 3, -3048(8)
  02d7094  fmuls 2, 3, 2
  02d7098  bl 0x108180
  02d709c  nop
  02d70a0  stfs 1, 472(31)
  02d70a4  lfs 1, 8(29)
  02d70a8  lfs 2, 12(29)
  02d70ac  bl 0xfe4f0
  02d70b0  nop
  02d70b4  lfs 2, 16(29)
  02d70b8  ori 3, 30, 0
  02d70bc  fmuls 1, 1, 2
  02d70c0  stfs 1, 492(31)
  02d70c4  b 0x2d70e0
  02d70c8  lhz 7, 0(6)
  02d70cc  addic 6, 6, 2
  02d70d0  extsh 7, 7
  02d70d4  cmpwi 7, 0
  02d70d8  bf 0, 0x2d6f68
  02d70dc  li 3, 0
  02d70e0  ld 0, 160(1)
  02d70e4  mtlr 0
  02d70e8  ld 29, 120(1)
  02d70ec  ld 30, 128(1)
  02d70f0  ld 31, 136(1)
  02d70f4  addi 1, 1, 144
  02d70f8  blr

FUN_002d70fc:   # 0x2d70fc, 0x7c bytes
  02d70fc  lis 4, 165
  02d7100  sldi 3, 3, 2
  02d7104  addic 4, 4, -28284
  02d7108  extsw 3, 3
  02d710c  lwzx 3, 4, 3
  02d7110  cmpwi 3, 0
  02d7114  bf 2, 0x2d7120
  02d7118  li 3, 0
  02d711c  b 0x2d7174
  02d7120  lis 4, 164
  02d7124  li 6, 0
  02d7128  lwz 4, -28512(4)
  02d712c  lhz 5, 0(3)
  02d7130  rlwinm 5, 5, 8, 9, 23
  02d7134  addc 5, 4, 5
  02d7138  clrldi 5, 5, 32
  02d713c  lhz 7, 166(5)
  02d7140  cmpwi 7, 1906
  02d7144  bf 2, 0x2d715c
  02d7148  lbz 5, 32(5)
  02d714c  cmpwi 5, 8
  02d7150  bt 2, 0x2d715c
  02d7154  addic 6, 6, 1
  02d7158  extsh 6, 6
  02d715c  lhz 5, 0(3)
  02d7160  addic 3, 3, 2
  02d7164  extsh 5, 5
  02d7168  cmpwi 5, 0
  02d716c  bf 0, 0x2d712c
  02d7170  ori 3, 6, 0
  02d7174  blr

M1907_002d7188:   # 0x2d7188, 0x328 bytes
  02d7188  stdu 1, -352(1)
  02d718c  mflr 0
  02d7190  std 0, 368(1)
  02d7194  stfd 30, 336(1)
  02d7198  stfd 31, 344(1)
  02d719c  std 31, 328(1)
  02d71a0  lis 4, 45
  02d71a4  lwz 31, 120(3)
  02d71a8  lis 5, 126
  02d71ac  addi 4, 4, 29048
  02d71b0  lfs 30, 0(4)
  02d71b4  lfs 1, 500(31)
  02d71b8  lfs 2, -30488(5)
  02d71bc  fadds 5, 1, 30
  02d71c0  lis 5, 149
  02d71c4  lfs 3, 16(3)
  02d71c8  addic 5, 5, 5056
  02d71cc  lfs 4, 20(3)
  02d71d0  lfs 6, 320(5)
  02d71d4  lfs 7, 324(5)
  02d71d8  fsubs 6, 6, 3
  02d71dc  fadds 2, 5, 2
  02d71e0  fsubs 5, 7, 4
  02d71e4  lis 5, 126
  02d71e8  fsubs 1, 30, 1
  02d71ec  lfs 13, -30484(5)
  02d71f0  lis 5, 126
  02d71f4  fmuls 7, 2, 6
  02d71f8  fmuls 5, 2, 5
  02d71fc  std 30, 320(1)
  02d7200  fadds 1, 1, 13
  02d7204  li 30, 0
  02d7208  fmuls 8, 2, 7
  02d720c  fmuls 10, 5, 5
  02d7210  fmuls 9, 5, 2
  02d7214  fmuls 11, 8, 8
  02d7218  fneg 10, 10
  02d721c  fneg 12, 9
  02d7220  fneg 11, 11
  02d7224  fneg 10, 10
  02d7228  fneg 11, 11
  02d722c  fmadds 10, 7, 7, 10
  02d7230  fmadds 11, 12, 12, 11
  02d7234  lfs 12, 24(3)
  02d7238  stfs 3, 160(1)
  02d723c  fsqrts 10, 10
  02d7240  stfs 4, 164(1)
  02d7244  lfs 3, 28(3)
  02d7248  lfs 4, -30492(5)
  02d724c  stfs 12, 168(1)
  02d7250  stfs 3, 172(1)
  02d7254  lis 3, 126
  02d7258  fsqrts 3, 11
  02d725c  fsubs 4, 12, 4
  02d7260  fdivs 11, 1, 10
  02d7264  stfs 4, 168(1)
  02d7268  lfs 31, 4(4)
  02d726c  stw 30, 156(1)
  02d7270  stw 30, 148(1)
  02d7274  stw 30, 144(1)
  02d7278  stfs 2, 152(1)
  02d727c  stfs 6, 112(1)
  02d7280  stw 30, 136(1)
  02d7284  stw 30, 120(1)
  02d7288  stw 30, 124(1)
  02d728c  stw 30, 140(1)
  02d7290  fsub 13, 31, 10
  02d7294  fsub 12, 31, 10
  02d7298  fsub 0, 10, 31
  02d729c  fsub 10, 10, 31
  02d72a0  lwz 3, -30496(3)
  02d72a4  extsw 3, 3
  02d72a8  fdivs 1, 1, 3
  02d72ac  fsub 2, 31, 3
  02d72b0  fsub 4, 31, 3
  02d72b4  fsub 6, 3, 31
  02d72b8  fsub 3, 3, 31
  02d72bc  fmuls 5, 5, 11
  02d72c0  fmuls 7, 7, 11
  02d72c4  fneg 5, 5
  02d72c8  fsel 11, 13, 31, 7
  02d72cc  fsel 12, 12, 31, 5
  02d72d0  fsel 7, 10, 11, 7
  02d72d4  fsel 5, 0, 12, 5
  02d72d8  fmuls 8, 8, 1
  02d72dc  fmuls 1, 9, 1
  02d72e0  stfs 7, 132(1)
  02d72e4  fneg 8, 8
  02d72e8  fneg 1, 1
  02d72ec  stfs 5, 128(1)
  02d72f0  fsel 2, 2, 31, 8
  02d72f4  fsel 4, 4, 31, 1
  02d72f8  fsel 2, 6, 2, 8
  02d72fc  fsel 1, 3, 4, 1
  02d7300  stfs 2, 112(1)
  02d7304  stfs 1, 116(1)
  02d7308  bl 0x685c4
  02d730c  nop
  02d7310  std 3, 296(1)
  02d7314  lis 9, 0
  02d7318  li 3, 0
  02d731c  li 4, 0
  02d7320  li 5, 1
  02d7324  li 6, 1
  02d7328  li 7, 1
  02d732c  li 8, 0
  02d7330  ori 9, 9, 65424
  02d7334  bl 0x502fd4
  02d7338  nop
  02d733c  std 3, 304(1)
  02d7340  li 3, 0
  02d7344  li 4, 0
  02d7348  li 5, 0
  02d734c  li 6, 0
  02d7350  li 7, 0
  02d7354  li 8, 0
  02d7358  bl 0x502f08
  02d735c  nop
  02d7360  std 3, 288(1)
  02d7364  lis 4, 267
  02d7368  lis 3, 267
  02d736c  lis 5, 126
  02d7370  lis 6, 126
  02d7374  li 7, 128
  02d7378  lwz 8, 28672(3)
  02d737c  lwz 3, 28668(4)
  02d7380  lwz 4, -30512(5)
  02d7384  lwz 6, -30508(6)
  02d7388  ori 5, 8, 0
  02d738c  bl 0x502ea8
  02d7390  nop
  02d7394  lis 4, 126
  02d7398  std 3, 312(1)
  02d739c  lis 3, 126
  02d73a0  lfs 1, 500(31)
  02d73a4  lwz 4, -30504(4)
  02d73a8  lwz 5, -30500(3)
  02d73ac  extsw 3, 4
  02d73b0  extsw 4, 5
  02d73b4  bl 0x5027bc
  02d73b8  nop
  02d73bc  lis 5, 126
  02d73c0  lis 4, 126
  02d73c4  ori 10, 3, 0
  02d73c8  ori 8, 1, 0
  02d73cc  addic 3, 1, 176
  02d73d0  ori 9, 30, 0
  02d73d4  ori 7, 1, 0
  02d73d8  ori 6, 1, 0
  02d73dc  addic 5, 5, -30480
  02d73e0  addic 4, 4, -30476
  02d73e4  li 11, 0
  02d73e8  lfs 1, 0(5)
  02d73ec  clrlwi 12, 9, 31
  02d73f0  lfs 2, 0(4)
  02d73f4  cmpwi 1, 9, 2
  02d73f8  stfs 1, 256(8)
  02d73fc  cmpwi 12, 0
  02d7400  stfs 2, 260(8)
  02d7404  fmr 1, 31
  02d7408  stw 11, 12(3)
  02d740c  stw 11, 8(3)
  02d7410  stw 11, 4(3)
  02d7414  stw 11, 0(3)
  02d7418  bt 2, 0x2d7420
  02d741c  fmr 1, 30
  02d7420  lis 11, 45
  02d7424  stfs 1, 184(7)
  02d7428  addi 11, 11, 29048
  02d742c  lfs 1, 8(11)
  02d7430  bf 4, 0x2d7438
  02d7434  fmr 1, 30
  02d7438  lis 11, 16256
  02d743c  stfs 1, 180(7)
  02d7440  addic 9, 9, 1
  02d7444  addic 5, 5, 8
  02d7448  cmpwi 9, 4
  02d744c  stw 11, 188(7)
  02d7450  stw 10, 240(6)
  02d7454  addic 4, 4, 8
  02d7458  addic 3, 3, 16
  02d745c  addic 8, 8, 8
  02d7460  addic 7, 7, 16
  02d7464  addic 6, 6, 4
  02d7468  bt 0, 0x2d73e4
  02d746c  lis 4, 161
  02d7470  addic 3, 1, 176
  02d7474  addic 6, 4, 24396
  02d7478  addic 4, 1, 112
  02d747c  li 5, 0
  02d7480  li 7, 9
  02d7484  lwz 6, 28(6)
  02d7488  bl 0x72280
  02d748c  nop
  02d7490  ld 0, 368(1)
  02d7494  mtlr 0
  02d7498  lfd 30, 336(1)
  02d749c  lfd 31, 344(1)
  02d74a0  ld 30, 320(1)
  02d74a4  ld 31, 328(1)
  02d74a8  addi 1, 1, 352
  02d74ac  blr

M1907_002d74b8:   # 0x2d74b8, 0x128 bytes
  02d74b8  stdu 1, -192(1)
  02d74bc  mflr 0
  02d74c0  std 0, 208(1)
  02d74c4  stfd 30, 176(1)
  02d74c8  stfd 31, 184(1)
  02d74cc  lis 4, 165
  02d74d0  lbz 3, 33(3)
  02d74d4  addic 4, 4, -28284
  02d74d8  std 28, 144(1)
  02d74dc  slwi 3, 3, 2
  02d74e0  lwzx 28, 4, 3
  02d74e4  std 31, 168(1)
  02d74e8  std 30, 160(1)
  02d74ec  std 29, 152(1)
  02d74f0  std 27, 136(1)
  02d74f4  cmpwi 28, 0
  02d74f8  bt 2, 0x2d75b4
  02d74fc  lis 3, 45
  02d7500  addi 3, 3, 29872
  02d7504  lfs 30, 0(3)
  02d7508  lfs 31, 4(3)
  02d750c  lis 3, 164
  02d7510  lhz 4, 0(28)
  02d7514  rlwinm 4, 4, 8, 9, 23
  02d7518  lwz 3, -28512(3)
  02d751c  addc 29, 3, 4
  02d7520  clrldi 29, 29, 32
  02d7524  lhz 3, 166(29)
  02d7528  cmpwi 3, 1906
  02d752c  bf 2, 0x2d75a0
  02d7530  lbz 3, 32(29)
  02d7534  cmpwi 1, 3, 5
  02d7538  cmpwi 3, 1
  02d753c  cror 2, 0, 5
  02d7540  bt 2, 0x2d75a0
  02d7544  lis 3, 126
  02d7548  lwz 4, 144(29)
  02d754c  li 31, 2
  02d7550  clrlwi 4, 4, 8
  02d7554  lwz 3, -30448(3)
  02d7558  rlwimi 4, 3, 24, 0, 7
  02d755c  extsw 30, 4
  02d7560  addic 27, 1, 112
  02d7564  ori 3, 29, 0
  02d7568  ori 4, 31, 0
  02d756c  ori 5, 27, 0
  02d7570  bl 0xf1114
  02d7574  nop
  02d7578  ori 3, 27, 0
  02d757c  fmr 1, 30
  02d7580  ori 4, 30, 0
  02d7584  fmr 2, 31
  02d7588  bl 0x119028
  02d758c  nop
  02d7590  addic 31, 31, 1
  02d7594  extsw 31, 31
  02d7598  cmpwi 31, 5
  02d759c  bt 0, 0x2d7560
  02d75a0  lhz 3, 0(28)
  02d75a4  addic 28, 28, 2
  02d75a8  extsh 3, 3
  02d75ac  cmpwi 3, 0
  02d75b0  bf 0, 0x2d750c
  02d75b4  ld 0, 208(1)
  02d75b8  mtlr 0
  02d75bc  lfd 30, 176(1)
  02d75c0  lfd 31, 184(1)
  02d75c4  ld 27, 136(1)
  02d75c8  ld 28, 144(1)
  02d75cc  ld 29, 152(1)
  02d75d0  ld 30, 160(1)
  02d75d4  ld 31, 168(1)
  02d75d8  addi 1, 1, 192
  02d75dc  blr

M1907_002d75e0:   # 0x2d75e0, 0x58 bytes
  02d75e0  stdu 1, -128(1)
  02d75e4  mflr 0
  02d75e8  std 0, 144(1)
  02d75ec  std 31, 120(1)
  02d75f0  ori 31, 3, 0
  02d75f4  bl 0x48a718
  02d75f8  nop
  02d75fc  cmpwi 3, 0
  02d7600  bt 2, 0x2d7610
  02d7604  li 4, 7
  02d7608  stb 4, 32(31)
  02d760c  b 0x2d7624
  02d7610  lbz 4, 32(31)
  02d7614  cmpwi 4, 7
  02d7618  bf 2, 0x2d7624
  02d761c  li 4, 2
  02d7620  stb 4, 32(31)
  02d7624  ld 0, 144(1)
  02d7628  mtlr 0
  02d762c  ld 31, 120(1)
  02d7630  addi 1, 1, 128
  02d7634  blr

M1907_002d7638:   # 0x2d7638, 0x58 bytes
  02d7638  stdu 1, -128(1)
  02d763c  mflr 0
  02d7640  std 0, 144(1)
  02d7644  std 31, 120(1)
  02d7648  ori 31, 3, 0
  02d764c  bl 0x48aa70
  02d7650  nop
  02d7654  cmpwi 3, 0
  02d7658  bt 2, 0x2d7668
  02d765c  li 4, 7
  02d7660  stb 4, 32(31)
  02d7664  b 0x2d767c
  02d7668  lbz 4, 32(31)
  02d766c  cmpwi 4, 7
  02d7670  bf 2, 0x2d767c
  02d7674  li 4, 2
  02d7678  stb 4, 32(31)
  02d767c  ld 0, 144(1)
  02d7680  mtlr 0
  02d7684  ld 31, 120(1)
  02d7688  addi 1, 1, 128
  02d768c  blr

M1907_002d7690:   # 0x2d7690, 0x58 bytes
  02d7690  stdu 1, -128(1)
  02d7694  mflr 0
  02d7698  std 0, 144(1)
  02d769c  std 31, 120(1)
  02d76a0  ori 31, 3, 0
  02d76a4  bl 0x48acb8
  02d76a8  nop
  02d76ac  cmpwi 3, 0
  02d76b0  bt 2, 0x2d76c0
  02d76b4  li 4, 7
  02d76b8  stb 4, 32(31)
  02d76bc  b 0x2d76d4
  02d76c0  lbz 4, 32(31)
  02d76c4  cmpwi 4, 7
  02d76c8  bf 2, 0x2d76d4
  02d76cc  li 4, 2
  02d76d0  stb 4, 32(31)
  02d76d4  ld 0, 144(1)
  02d76d8  mtlr 0
  02d76dc  ld 31, 120(1)
  02d76e0  addi 1, 1, 128
  02d76e4  blr

M1907_002d76e8:   # 0x2d76e8, 0x38 bytes
  02d76e8  stdu 1, -128(1)
  02d76ec  mflr 0
  02d76f0  std 0, 144(1)
  02d76f4  std 31, 120(1)
  02d76f8  ori 31, 3, 0
  02d76fc  bl 0x48afe8
  02d7700  nop
  02d7704  li 4, 7
  02d7708  stb 4, 32(31)
  02d770c  ld 0, 144(1)
  02d7710  mtlr 0
  02d7714  ld 31, 120(1)
  02d7718  addi 1, 1, 128
  02d771c  blr

M1907_002d7720:   # 0x2d7720, 0x40 bytes
  02d7720  cmpwi 3, 0
  02d7724  bt 2, 0x2d7758
  02d7728  li 4, 0
  02d772c  lwz 3, 120(3)
  02d7730  li 5, 0
  02d7734  subc 4, 4, 3
  02d7738  addic 3, 3, 208
  02d773c  cntlzw 4, 4
  02d7740  subc 5, 5, 3
  02d7744  sldi 4, 4, 58
  02d7748  sradi 4, 4, 63
  02d774c  and 4, 4, 5
  02d7750  addc 3, 3, 4
  02d7754  b 0x2d775c
  02d7758  li 3, 0
  02d775c  blr

M1907_002d7768:   # 0x2d7768, 0x94 bytes
  02d7768  stdu 1, -144(1)
  02d776c  mflr 0
  02d7770  std 0, 160(1)
  02d7774  li 4, 8
  02d7778  std 31, 136(1)
  02d777c  lbz 5, 83(3)
  02d7780  ori 31, 3, 0
  02d7784  cmpwi 5, 0
  02d7788  stb 4, 32(3)
  02d778c  bt 2, 0x2d77cc
  02d7790  lis 3, 45
  02d7794  lis 4, 114
  02d7798  addi 3, 3, 30560
  02d779c  li 5, 0
  02d77a0  lfs 1, 0(3)
  02d77a4  lfs 2, -3056(4)
  02d77a8  ori 3, 31, 0
  02d77ac  li 4, 0
  02d77b0  fmuls 1, 2, 1
  02d77b4  fctiwz 1, 1
  02d77b8  stfd 1, 112(1)
  02d77bc  lwz 6, 116(1)
  02d77c0  extsw 6, 6
  02d77c4  bl 0xfddc0
  02d77c8  nop
  02d77cc  lhz 4, 52(31)
  02d77d0  li 3, 0
  02d77d4  ori 4, 4, 1
  02d77d8  rlwimi 4, 3, 0, 19, 19
  02d77dc  stb 3, 49(31)
  02d77e0  stw 3, 148(31)
  02d77e4  sth 4, 52(31)
  02d77e8  ld 0, 160(1)
  02d77ec  mtlr 0
  02d77f0  ld 31, 136(1)
  02d77f4  addi 1, 1, 144
  02d77f8  blr

M1907_002d77fc:   # 0x2d77fc, 0x14 bytes
  02d77fc  lis 3, 126
  02d7800  lis 4, 1
  02d7804  addic 3, 3, -30440
  02d7808  stw 4, 72(3)
  02d780c  blr

M1907_002d7828:   # 0x2d7828, 0x228 bytes
  02d7828  stdu 1, -64(1)
  02d782c  stfd 30, 48(1)
  02d7830  stfd 31, 56(1)
  02d7834  cmpwi 3, 0
  02d7838  li 8, 0
  02d783c  bf 1, 0x2d7a40
  02d7840  ori 9, 4, 0
  02d7844  lis 4, 45
  02d7848  lis 6, 149
  02d784c  addi 10, 4, 30736
  02d7850  ori 4, 7, 0
  02d7854  addic 7, 6, 5056
  02d7858  ori 6, 5, 0
  02d785c  ori 5, 9, 0
  02d7860  lfs 5, 0(10)
  02d7864  lfs 4, 4(10)
  02d7868  lfs 3, 8(10)
  02d786c  lfs 2, 12(10)
  02d7870  lfs 1, 16(10)
  02d7874  lfs 10, 4(6)
  02d7878  lfs 6, 324(7)
  02d787c  lfs 11, 0(6)
  02d7880  fsubs 10, 10, 6
  02d7884  lfs 6, 320(7)
  02d7888  lfs 9, 8(6)
  02d788c  fsubs 11, 11, 6
  02d7890  lfs 6, 328(7)
  02d7894  fsubs 9, 9, 6
  02d7898  fmr 8, 5
  02d789c  fmuls 6, 10, 10
  02d78a0  fmr 7, 8
  02d78a4  fmadds 12, 11, 11, 6
  02d78a8  fmr 6, 7
  02d78ac  fmadds 12, 9, 9, 12
  02d78b0  fsqrts 13, 12
  02d78b4  fcmpu 0, 13, 6
  02d78b8  bt 2, 0x2d78fc
  02d78bc  frsqrte 6, 12
  02d78c0  fmuls 7, 12, 6
  02d78c4  fmuls 8, 6, 4
  02d78c8  fnmsubs 7, 7, 6, 3
  02d78cc  fmadds 6, 7, 8, 6
  02d78d0  fmuls 7, 12, 6
  02d78d4  fmuls 8, 6, 4
  02d78d8  fnmsubs 7, 7, 6, 3
  02d78dc  fmadds 6, 7, 8, 6
  02d78e0  fmuls 7, 12, 6
  02d78e4  fmuls 8, 6, 4
  02d78e8  fnmsubs 7, 7, 6, 3
  02d78ec  fmadds 6, 7, 8, 6
  02d78f0  fmuls 8, 11, 6
  02d78f4  fmuls 7, 10, 6
  02d78f8  fmuls 6, 9, 6
  02d78fc  lfs 0, 4(5)
  02d7900  lfs 31, 0(5)
  02d7904  fmuls 9, 0, 0
  02d7908  lfs 13, 8(5)
  02d790c  fmr 11, 5
  02d7910  fmadds 12, 31, 31, 9
  02d7914  fmr 10, 11
  02d7918  fmadds 12, 13, 13, 12
  02d791c  fmr 9, 10
  02d7920  fsqrts 30, 12
  02d7924  fcmpu 0, 30, 9
  02d7928  bt 2, 0x2d796c
  02d792c  frsqrte 9, 12
  02d7930  fmuls 10, 12, 9
  02d7934  fmuls 11, 9, 4
  02d7938  fnmsubs 10, 10, 9, 3
  02d793c  fmadds 9, 10, 11, 9
  02d7940  fmuls 10, 12, 9
  02d7944  fmuls 11, 9, 4
  02d7948  fnmsubs 10, 10, 9, 3
  02d794c  fmadds 9, 10, 11, 9
  02d7950  fmuls 10, 12, 9
  02d7954  fmuls 11, 9, 4
  02d7958  fnmsubs 10, 10, 9, 3
  02d795c  fmadds 9, 10, 11, 9
  02d7960  fmuls 11, 9, 31
  02d7964  fmuls 10, 9, 0
  02d7968  fmuls 9, 9, 13
  02d796c  fmr 12, 6
  02d7970  fmuls 6, 7, 10
  02d7974  fmadds 6, 8, 11, 6
  02d7978  fmadds 6, 12, 9, 6
  02d797c  fmuls 13, 6, 2
  02d7980  fnmsubs 6, 13, 10, 7
  02d7984  fnmsubs 7, 13, 11, 8
  02d7988  fnmsubs 8, 13, 9, 12
  02d798c  fmr 12, 5
  02d7990  fmuls 9, 6, 6
  02d7994  fmr 11, 12
  02d7998  fmadds 9, 7, 7, 9
  02d799c  fmr 10, 11
  02d79a0  fmadds 9, 8, 8, 9
  02d79a4  fsqrts 13, 9
  02d79a8  fcmpu 0, 13, 10
  02d79ac  bt 2, 0x2d79f0
  02d79b0  frsqrte 10, 9
  02d79b4  fmuls 11, 9, 10
  02d79b8  fmuls 12, 10, 4
  02d79bc  fnmsubs 11, 11, 10, 3
  02d79c0  fmadds 10, 11, 12, 10
  02d79c4  fmuls 11, 9, 10
  02d79c8  fmuls 12, 10, 4
  02d79cc  fnmsubs 11, 11, 10, 3
  02d79d0  fmadds 10, 11, 12, 10
  02d79d4  fmuls 9, 9, 10
  02d79d8  fmuls 11, 10, 4
  02d79dc  fnmsubs 9, 9, 10, 3
  02d79e0  fmadds 10, 9, 11, 10
  02d79e4  fmuls 12, 10, 7
  02d79e8  fmuls 11, 10, 6
  02d79ec  fmuls 10, 10, 8
  02d79f0  fmuls 6, 11, 11
  02d79f4  fadds 7, 10, 3
  02d79f8  addic 8, 8, 1
  02d79fc  addic 6, 6, 12
  02d7a00  cmpw 8, 3
  02d7a04  fmadds 6, 12, 12, 6
  02d7a08  addic 5, 5, 12
  02d7a0c  fmadds 6, 7, 7, 6
  02d7a10  fsqrts 6, 6
  02d7a14  fmuls 6, 6, 2
  02d7a18  fdivs 7, 12, 6
  02d7a1c  fdivs 6, 11, 6
  02d7a20  fadds 7, 7, 4
  02d7a24  fmuls 7, 7, 1
  02d7a28  fadds 6, 6, 4
  02d7a2c  stfs 7, 0(4)
  02d7a30  fmuls 6, 6, 1
  02d7a34  stfs 6, 4(4)
  02d7a38  addic 4, 4, 8
  02d7a3c  bt 0, 0x2d7874
  02d7a40  lfd 30, 48(1)
  02d7a44  lfd 31, 56(1)
  02d7a48  addi 1, 1, 64
  02d7a4c  blr

M1907_002d7a50:   # 0x2d7a50, 0x19c bytes
  02d7a50  stdu 1, -176(1)
  02d7a54  mflr 0
  02d7a58  std 0, 192(1)
  02d7a5c  std 31, 168(1)
  02d7a60  std 30, 160(1)
  02d7a64  std 29, 152(1)
  02d7a68  std 28, 144(1)
  02d7a6c  std 27, 136(1)
  02d7a70  std 26, 128(1)
  02d7a74  std 25, 120(1)
  02d7a78  li 3, 48
  02d7a7c  bl 0x685c4
  02d7a80  nop
  02d7a84  ori 4, 3, 0
  02d7a88  li 3, 24
  02d7a8c  bl 0x174f80
  02d7a90  nop
  02d7a94  li 3, 0
  02d7a98  li 4, 1
  02d7a9c  li 5, 2
  02d7aa0  li 6, 1
  02d7aa4  li 7, 32
  02d7aa8  bl 0x502ea8
  02d7aac  nop
  02d7ab0  ori 4, 3, 0
  02d7ab4  li 3, 3
  02d7ab8  bl 0x174f80
  02d7abc  nop
  02d7ac0  li 3, 0
  02d7ac4  li 4, 0
  02d7ac8  li 5, 0
  02d7acc  li 6, 0
  02d7ad0  li 7, 0
  02d7ad4  li 8, 0
  02d7ad8  bl 0x502f08
  02d7adc  nop
  02d7ae0  ori 4, 3, 0
  02d7ae4  li 3, 6
  02d7ae8  bl 0x174f80
  02d7aec  nop
  02d7af0  li 3, 0
  02d7af4  lis 9, 0
  02d7af8  li 4, 0
  02d7afc  li 5, 1
  02d7b00  li 6, 1
  02d7b04  li 7, 1
  02d7b08  li 8, 0
  02d7b0c  ori 9, 9, 65424
  02d7b10  bl 0x502fd4
  02d7b14  nop
  02d7b18  ori 4, 3, 0
  02d7b1c  li 3, 26
  02d7b20  bl 0x174f80
  02d7b24  nop
  02d7b28  bl 0x71170
  02d7b2c  nop
  02d7b30  lis 29, 126
  02d7b34  lis 31, 126
  02d7b38  lis 27, 126
  02d7b3c  lis 30, 126
  02d7b40  lis 28, 126
  02d7b44  lis 26, 267
  02d7b48  li 25, 0
  02d7b4c  addic 27, 27, -28384
  02d7b50  addic 29, 29, -30320
  02d7b54  addic 28, 28, -28392
  02d7b58  addic 31, 31, -28376
  02d7b5c  addic 30, 30, -28400
  02d7b60  addic 26, 26, 28688
  02d7b64  lwz 3, 0(29)
  02d7b68  ori 7, 26, 0
  02d7b6c  lwz 4, 0(27)
  02d7b70  lwz 5, 0(30)
  02d7b74  extsw 3, 3
  02d7b78  lwz 6, 0(28)
  02d7b7c  bl 0x2d7828
  02d7b80  lwz 3, 0(29)
  02d7b84  ori 6, 26, 0
  02d7b88  lwz 4, 0(30)
  02d7b8c  li 7, 9
  02d7b90  lwz 5, 0(31)
  02d7b94  extsw 3, 3
  02d7b98  bl 0x74604
  02d7b9c  nop
  02d7ba0  addic 25, 25, 1
  02d7ba4  addic 27, 27, 4
  02d7ba8  cmpwi 25, 2
  02d7bac  addic 28, 28, 4
  02d7bb0  addic 29, 29, 4
  02d7bb4  addic 30, 30, 4
  02d7bb8  addic 31, 31, 4
  02d7bbc  bt 0, 0x2d7b64
  02d7bc0  ld 0, 192(1)
  02d7bc4  mtlr 0
  02d7bc8  ld 25, 120(1)
  02d7bcc  ld 26, 128(1)
  02d7bd0  ld 27, 136(1)
  02d7bd4  ld 28, 144(1)
  02d7bd8  ld 29, 152(1)
  02d7bdc  ld 30, 160(1)
  02d7be0  ld 31, 168(1)
  02d7be4  addi 1, 1, 176
  02d7be8  blr

UpdateMoby_1907:   # 0x2d7bec, 0x60 bytes
  02d7bec  stdu 1, -112(1)
  02d7bf0  mflr 0
  02d7bf4  std 0, 128(1)
  02d7bf8  lbz 4, 32(3)
  02d7bfc  cmpwi 4, 0
  02d7c00  cmpwi 1, 4, 1
  02d7c04  cmpwi 6, 4, -1
  02d7c08  bt 1, 0x2d7c14
  02d7c0c  bf 25, 0x2d7c3c
  02d7c10  b 0x2d7c1c
  02d7c14  bf 5, 0x2d7c28
  02d7c18  b 0x2d7c3c
  02d7c1c  li 4, 1
  02d7c20  stb 4, 32(3)
  02d7c24  b 0x2d7c3c
  02d7c28  lis 5, 113
  02d7c2c  ori 4, 3, 0
  02d7c30  addic 3, 5, -19464
  02d7c34  bl 0x6d720
  02d7c38  nop
  02d7c3c  ld 0, 128(1)
  02d7c40  mtlr 0
  02d7c44  addi 1, 1, 112
  02d7c48  blr
