# game/update/moby602.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M602_003d6c80:   # 0x3d6c80, 0x14 bytes
  03d6c80  lis 3, 133
  03d6c84  lis 4, 1
  03d6c88  addic 3, 3, 13812
  03d6c8c  stw 4, 72(3)
  03d6c90  blr

M602_003d6c98:   # 0x3d6c98, 0xc8 bytes
  03d6c98  stdu 1, -144(1)
  03d6c9c  mflr 0
  03d6ca0  std 0, 160(1)
  03d6ca4  std 30, 128(1)
  03d6ca8  lbz 30, 33(3)
  03d6cac  std 31, 136(1)
  03d6cb0  std 29, 120(1)
  03d6cb4  cmpwi 30, 255
  03d6cb8  bf 2, 0x3d6cc4
  03d6cbc  li 3, 0
  03d6cc0  b 0x3d6d44
  03d6cc4  lis 3, 165
  03d6cc8  rlwinm 4, 30, 2, 22, 29
  03d6ccc  addic 3, 3, -28284
  03d6cd0  li 30, 0
  03d6cd4  lwzx 31, 3, 4
  03d6cd8  lis 3, 164
  03d6cdc  lhz 29, 0(31)
  03d6ce0  cmpwi 1, 30, 0
  03d6ce4  rlwinm 29, 29, 8, 9, 23
  03d6ce8  lwz 3, -28512(3)
  03d6cec  addc 4, 3, 29
  03d6cf0  clrldi 4, 4, 32
  03d6cf4  lhz 4, 166(4)
  03d6cf8  cmpwi 4, 668
  03d6cfc  bf 2, 0x3d6d2c
  03d6d00  bt 6, 0x3d6d24
  03d6d04  li 3, 255
  03d6d08  bl 0xfc620
  03d6d0c  nop
  03d6d10  clrlwi 3, 3, 31
  03d6d14  cmpwi 3, 0
  03d6d18  bt 2, 0x3d6d2c
  03d6d1c  lis 3, 164
  03d6d20  lwz 3, -28512(3)
  03d6d24  addc 30, 3, 29
  03d6d28  clrldi 30, 30, 32
  03d6d2c  lhz 3, 0(31)
  03d6d30  addic 31, 31, 2
  03d6d34  extsh 3, 3
  03d6d38  cmpwi 3, 0
  03d6d3c  bf 0, 0x3d6cd8
  03d6d40  ori 3, 30, 0
  03d6d44  ld 0, 160(1)
  03d6d48  mtlr 0
  03d6d4c  ld 29, 120(1)
  03d6d50  ld 30, 128(1)
  03d6d54  ld 31, 136(1)
  03d6d58  addi 1, 1, 144
  03d6d5c  blr

M602_003d6d70:   # 0x3d6d70, 0x46c bytes
  03d6d70  stdu 1, -432(1)
  03d6d74  mflr 0
  03d6d78  std 0, 448(1)
  03d6d7c  stfd 31, 424(1)
  03d6d80  lis 4, 61
  03d6d84  std 30, 408(1)
  03d6d88  li 5, 0
  03d6d8c  lwz 30, 120(3)
  03d6d90  std 31, 416(1)
  03d6d94  addi 4, 4, 28000
  03d6d98  ori 31, 3, 0
  03d6d9c  lfs 31, 0(4)
  03d6da0  stw 5, 356(1)
  03d6da4  lwz 3, 24(30)
  03d6da8  cmpwi 3, 0
  03d6dac  bt 2, 0x3d6df4
  03d6db0  lis 3, 61
  03d6db4  li 4, 0
  03d6db8  vspltisw 2, -1
  03d6dbc  addi 3, 3, 28000
  03d6dc0  li 5, 4
  03d6dc4  lis 6, 114
  03d6dc8  stw 4, 24(30)
  03d6dcc  li 4, -3056
  03d6dd0  vslw 2, 2, 2
  03d6dd4  lvlx 3, 5, 3
  03d6dd8  li 3, 500
  03d6ddc  vspltw 3, 3, 0
  03d6de0  lvlx 4, 4, 6
  03d6de4  vmaddfp 2, 4, 3, 2
  03d6de8  vctsxs 2, 2, 0
  03d6dec  vsplth 2, 2, 1
  03d6df0  stvehx 2, 3, 30
  03d6df4  addic 3, 30, 500
  03d6df8  bl 0x4fffb4
  03d6dfc  nop
  03d6e00  cmpwi 3, 0
  03d6e04  bt 2, 0x3d6e10
  03d6e08  lfs 1, 476(30)
  03d6e0c  b 0x3d6e24
  03d6e10  lis 3, 61
  03d6e14  lfs 1, 476(30)
  03d6e18  addi 3, 3, 28000
  03d6e1c  lfs 2, 8(3)
  03d6e20  fadds 1, 1, 2
  03d6e24  ori 3, 31, 0
  03d6e28  stfs 1, 480(30)
  03d6e2c  lis 4, 51
  03d6e30  li 5, 0
  03d6e34  bl 0x10675c
  03d6e38  nop
  03d6e3c  ori 4, 3, 0
  03d6e40  ori 3, 31, 0
  03d6e44  li 6, 0
  03d6e48  addic 7, 1, 352
  03d6e4c  li 9, 0
  03d6e50  addic 8, 1, 356
  03d6e54  ori 5, 30, 0
  03d6e58  li 10, 4
  03d6e5c  bl 0x106840
  03d6e60  nop
  03d6e64  lwz 3, 352(1)
  03d6e68  cmpwi 3, 1
  03d6e6c  bt 2, 0x3d712c
  03d6e70  lbz 3, 32(31)
  03d6e74  cmpwi 3, 10
  03d6e78  bt 2, 0x3d712c
  03d6e7c  lfs 1, 0(30)
  03d6e80  lfs 2, 356(1)
  03d6e84  fsubs 1, 1, 2
  03d6e88  fcmpu 0, 1, 31
  03d6e8c  stfs 1, 0(30)
  03d6e90  bt 1, 0x3d711c
  03d6e94  lis 3, 15363
  03d6e98  lis 5, 14851
  03d6e9c  ori 3, 3, 4719
  03d6ea0  lis 4, 133
  03d6ea4  ori 5, 5, 4719
  03d6ea8  lis 6, 114
  03d6eac  stw 3, 272(30)
  03d6eb0  lis 3, 133
  03d6eb4  stw 5, 276(30)
  03d6eb8  lfs 1, 13924(4)
  03d6ebc  lfs 2, -3052(6)
  03d6ec0  li 4, 0
  03d6ec4  lis 5, 151
  03d6ec8  fmuls 1, 1, 2
  03d6ecc  li 6, 9
  03d6ed0  addic 5, 5, -25376
  03d6ed4  stfs 1, 280(30)
  03d6ed8  lfs 1, 13920(3)
  03d6edc  stb 4, 317(30)
  03d6ee0  fmuls 1, 1, 2
  03d6ee4  stw 6, 292(30)
  03d6ee8  lis 3, 115
  03d6eec  addic 4, 30, 256
  03d6ef0  addic 3, 3, 22784
  03d6ef4  stfs 1, 284(30)
  03d6ef8  lfs 1, 16(31)
  03d6efc  lfs 2, 128(5)
  03d6f00  lfs 3, 20(31)
  03d6f04  lfs 4, 132(5)
  03d6f08  fsubs 1, 1, 2
  03d6f0c  fsubs 2, 3, 4
  03d6f10  fabs 4, 1
  03d6f14  fabs 3, 2
  03d6f18  stfs 1, 360(1)
  03d6f1c  stfs 2, 364(1)
  03d6f20  fsubs 1, 4, 3
  03d6f24  stfs 1, 368(1)
  03d6f28  lwz 5, 360(1)
  03d6f2c  lfs 1, 360(1)
  03d6f30  lwz 6, 364(1)
  03d6f34  lfs 2, 364(1)
  03d6f38  fabs 1, 1
  03d6f3c  lwz 7, 368(1)
  03d6f40  rlwinm 6, 6, 3, 29, 29
  03d6f44  fabs 5, 2
  03d6f48  lfs 2, 368(1)
  03d6f4c  rlwimi 6, 7, 2, 30, 30
  03d6f50  fsub 6, 2, 31
  03d6f54  fsub 7, 2, 31
  03d6f58  rlwimi 6, 5, 4, 28, 28
  03d6f5c  ori 5, 3, 0
  03d6f60  rlwimi 5, 6, 2, 26, 28
  03d6f64  slwi 6, 6, 2
  03d6f68  clrldi 5, 5, 32
  03d6f6c  fsel 3, 6, 1, 3
  03d6f70  lfsx 2, 3, 6
  03d6f74  fsel 4, 7, 5, 4
  03d6f78  lfs 1, 4(5)
  03d6f7c  fcmpu 0, 3, 31
  03d6f80  bt 1, 0x3d6f88
  03d6f84  b 0x3d70ac
  03d6f88  fsubs 5, 4, 3
  03d6f8c  fadds 3, 4, 3
  03d6f90  addic 7, 1, 16
  03d6f94  li 3, 2
  03d6f98  addic 5, 7, 372
  03d6f9c  addic 6, 7, 356
  03d6fa0  mtctr 3
  03d6fa4  fdivs 3, 5, 3
  03d6fa8  fmuls 5, 3, 3
  03d6fac  stfs 3, 384(1)
  03d6fb0  stfs 3, 376(1)
  03d6fb4  stfs 3, 380(1)
  03d6fb8  stfs 3, 372(1)
  03d6fbc  lfs 6, 384(1)
  03d6fc0  lfs 7, 376(1)
  03d6fc4  lfs 8, 380(1)
  03d6fc8  fmuls 3, 5, 5
  03d6fcc  fmuls 7, 7, 5
  03d6fd0  fmuls 6, 6, 3
  03d6fd4  fmuls 4, 3, 3
  03d6fd8  fmuls 3, 8, 3
  03d6fdc  stfs 7, 376(1)
  03d6fe0  fmuls 5, 6, 5
  03d6fe4  stfs 3, 380(1)
  03d6fe8  stfs 5, 384(1)
  03d6fec  lfs 3, 356(7)
  03d6ff0  fmuls 3, 3, 4
  03d6ff4  stfs 3, 372(7)
  03d6ff8  lfs 3, 4(6)
  03d6ffc  addic 6, 6, 8
  03d7000  fmuls 3, 3, 4
  03d7004  addic 7, 7, 8
  03d7008  stfs 3, 4(5)
  03d700c  addic 5, 5, 8
  03d7010  bdnz 0x3d6fec
  03d7014  ori 8, 1, 0
  03d7018  li 5, 4
  03d701c  lis 7, 115
  03d7020  addic 6, 8, 372
  03d7024  mtctr 5
  03d7028  addic 7, 7, 22752
  03d702c  ori 5, 6, 0
  03d7030  lfs 3, 372(8)
  03d7034  lfs 4, 0(7)
  03d7038  fmuls 3, 3, 4
  03d703c  lfs 4, 4(7)
  03d7040  addic 7, 7, 8
  03d7044  stfs 3, 372(8)
  03d7048  lfs 3, 4(6)
  03d704c  addic 8, 8, 8
  03d7050  fmuls 3, 3, 4
  03d7054  stfs 3, 4(6)
  03d7058  addic 6, 6, 8
  03d705c  bdnz 0x3d7030
  03d7060  ori 6, 3, 0
  03d7064  ori 3, 1, 0
  03d7068  mtctr 6
  03d706c  lfs 3, 372(3)
  03d7070  lfs 4, 4(5)
  03d7074  fadds 3, 31, 3
  03d7078  lfs 5, 8(5)
  03d707c  lfs 31, 12(5)
  03d7080  addic 3, 3, 16
  03d7084  addic 5, 5, 16
  03d7088  fadds 3, 3, 4
  03d708c  fadds 3, 3, 5
  03d7090  fadds 31, 3, 31
  03d7094  bdnz 0x3d706c
  03d7098  lis 3, 61
  03d709c  addi 3, 3, 28000
  03d70a0  lfs 3, 12(3)
  03d70a4  fadds 31, 31, 3
  03d70a8  fmadds 31, 31, 2, 1
  03d70ac  ori 3, 31, 0
  03d70b0  fmr 1, 31
  03d70b4  li 6, 8
  03d70b8  li 7, 1
  03d70bc  li 8, 0
  03d70c0  bl 0x10ad80
  03d70c4  nop
  03d70c8  lhz 3, 52(31)
  03d70cc  lis 4, 16640
  03d70d0  li 5, 0
  03d70d4  lis 7, 16752
  03d70d8  rlwimi 3, 5, 0, 19, 19
  03d70dc  li 6, 250
  03d70e0  stw 4, 336(30)
  03d70e4  li 4, 10
  03d70e8  stw 7, 340(30)
  03d70ec  sth 3, 52(31)
  03d70f0  stb 6, 247(30)
  03d70f4  lbz 3, 83(31)
  03d70f8  stb 4, 32(31)
  03d70fc  cmpwi 3, 8
  03d7100  bt 2, 0x3d711c
  03d7104  ori 3, 31, 0
  03d7108  li 4, 8
  03d710c  li 5, 0
  03d7110  li 6, 6
  03d7114  bl 0xfddc0
  03d7118  nop
  03d711c  addic 4, 30, 240
  03d7120  ori 3, 31, 0
  03d7124  bl 0x10c808
  03d7128  nop
  03d712c  lbz 4, 32(31)
  03d7130  li 3, 255
  03d7134  cmpwi 1, 4, 10
  03d7138  cmpwi 4, 13
  03d713c  cror 2, 2, 6
  03d7140  stb 3, 164(31)
  03d7144  bt 2, 0x3d7194
  03d7148  lwz 3, 504(30)
  03d714c  cmpwi 3, 0
  03d7150  bt 2, 0x3d7174
  03d7154  ori 3, 31, 0
  03d7158  lfs 1, 480(30)
  03d715c  addic 5, 1, 112
  03d7160  bl 0x1118d8
  03d7164  nop
  03d7168  lwz 3, 176(1)
  03d716c  stw 3, 504(30)
  03d7170  b 0x3d71b0
  03d7174  ori 3, 31, 0
  03d7178  lfs 1, 480(30)
  03d717c  addic 5, 1, 192
  03d7180  bl 0x1118d8
  03d7184  nop
  03d7188  lwz 3, 256(1)
  03d718c  stw 3, 504(30)
  03d7190  b 0x3d71b0
  03d7194  ori 3, 31, 0
  03d7198  lfs 1, 480(30)
  03d719c  addic 5, 1, 272
  03d71a0  bl 0x1118d8
  03d71a4  nop
  03d71a8  lwz 3, 336(1)
  03d71ac  stw 3, 504(30)
  03d71b0  addic 4, 30, 240
  03d71b4  ori 3, 31, 0
  03d71b8  bl 0x10c9a0
  03d71bc  nop
  03d71c0  ld 0, 448(1)
  03d71c4  mtlr 0
  03d71c8  lfd 31, 424(1)
  03d71cc  ld 30, 408(1)
  03d71d0  ld 31, 416(1)
  03d71d4  addi 1, 1, 432
  03d71d8  blr

UpdateMoby_602:   # 0x3d7240, 0x18b0 bytes
  03d7240  stdu 1, -464(1)
  03d7244  mflr 0
  03d7248  std 0, 480(1)
  03d724c  stfd 24, 400(1)
  03d7250  stfd 25, 408(1)
  03d7254  stfd 26, 416(1)
  03d7258  stfd 27, 424(1)
  03d725c  stfd 28, 432(1)
  03d7260  stfd 29, 440(1)
  03d7264  stfd 30, 448(1)
  03d7268  stfd 31, 456(1)
  03d726c  std 31, 392(1)
  03d7270  std 30, 384(1)
  03d7274  ori 31, 3, 0
  03d7278  std 29, 376(1)
  03d727c  std 28, 368(1)
  03d7280  std 27, 360(1)
  03d7284  lwz 30, 120(31)
  03d7288  bl 0x3d6d70
  03d728c  lwz 4, 36(31)
  03d7290  lis 5, 133
  03d7294  lbz 3, 32(31)
  03d7298  cmpwi 3, 7
  03d729c  lfs 1, 36(4)
  03d72a0  lfs 2, 13940(5)
  03d72a4  fmuls 1, 1, 2
  03d72a8  stfs 1, 44(31)
  03d72ac  bt 1, 0x3d72e0
  03d72b0  cmpwi 3, 2
  03d72b4  bt 1, 0x3d72cc
  03d72b8  cmpwi 3, -1
  03d72bc  bf 1, 0x3d8aac
  03d72c0  cmpwi 3, 0
  03d72c4  bf 1, 0x3d730c
  03d72c8  b 0x3d7418
  03d72cc  cmpwi 3, 4
  03d72d0  bf 1, 0x3d77a4
  03d72d4  cmpwi 3, 6
  03d72d8  bf 1, 0x3d790c
  03d72dc  b 0x3d8428
  03d72e0  cmpwi 3, 13
  03d72e4  bt 2, 0x3d87f8
  03d72e8  cmpwi 3, 12
  03d72ec  bt 2, 0x3d8510
  03d72f0  cmpwi 3, 10
  03d72f4  bt 2, 0x3d861c
  03d72f8  cmpwi 3, 9
  03d72fc  bt 2, 0x3d803c
  03d7300  cmpwi 3, 8
  03d7304  bt 2, 0x3d8458
  03d7308  b 0x3d8aac
  03d730c  lfs 1, 16(31)
  03d7310  li 4, 1
  03d7314  stfs 1, 432(30)
  03d7318  lfs 1, 20(31)
  03d731c  lis 5, 16256
  03d7320  li 6, 0
  03d7324  stfs 1, 436(30)
  03d7328  lfs 1, 24(31)
  03d732c  addic 3, 30, 352
  03d7330  stfs 1, 440(30)
  03d7334  lfs 1, 28(31)
  03d7338  stfs 1, 444(30)
  03d733c  lfs 1, 16(31)
  03d7340  stfs 1, 448(30)
  03d7344  lfs 1, 20(31)
  03d7348  stfs 1, 452(30)
  03d734c  lfs 1, 24(31)
  03d7350  stfs 1, 456(30)
  03d7354  lfs 1, 28(31)
  03d7358  stfs 1, 460(30)
  03d735c  stb 4, 32(31)
  03d7360  stw 5, 0(30)
  03d7364  sth 4, 4(30)
  03d7368  sth 6, 500(30)
  03d736c  bl 0x100f8c
  03d7370  nop
  03d7374  lis 3, 15605
  03d7378  lis 4, 16025
  03d737c  ori 3, 3, 49807
  03d7380  ori 4, 4, 39322
  03d7384  lis 5, 16000
  03d7388  lis 6, 16384
  03d738c  stw 3, 412(30)
  03d7390  lis 7, 114
  03d7394  stw 4, 416(30)
  03d7398  stw 5, 420(30)
  03d739c  li 3, 909
  03d73a0  stw 6, 364(30)
  03d73a4  stw 6, 360(30)
  03d73a8  lfs 1, 484(30)
  03d73ac  lfs 2, -3052(7)
  03d73b0  stw 3, 352(30)
  03d73b4  fmuls 1, 1, 2
  03d73b8  stfs 1, 388(30)
  03d73bc  bl 0x5c8318
  03d73c0  nop
  03d73c4  clrlwi 3, 3, 31
  03d73c8  cmpwi 3, 0
  03d73cc  bt 2, 0x3d73e4
  03d73d0  lis 3, 0
  03d73d4  lhz 4, 52(31)
  03d73d8  ori 3, 3, 32768
  03d73dc  or 3, 4, 3
  03d73e0  sth 3, 52(31)
  03d73e4  lis 3, 133
  03d73e8  addic 3, 3, 13948
  03d73ec  stw 3, 176(30)
  03d73f0  lbz 3, 83(31)
  03d73f4  cmpwi 3, 3
  03d73f8  bt 2, 0x3d8aac
  03d73fc  ori 3, 31, 0
  03d7400  li 4, 3
  03d7404  li 5, 0
  03d7408  li 6, 0
  03d740c  bl 0xfddc0
  03d7410  nop
  03d7414  b 0x3d8aac
  03d7418  lbz 4, 112(31)
  03d741c  rlwinm 4, 4, 0, 30, 30
  03d7420  cmpwi 4, 0
  03d7424  bt 2, 0x3d757c
  03d7428  cmpwi 3, 1
  03d742c  bf 2, 0x3d748c
  03d7430  li 3, 2
  03d7434  lbz 5, 83(31)
  03d7438  li 4, 4
  03d743c  cmpwi 5, 4
  03d7440  stb 3, 188(31)
  03d7444  stb 4, 32(31)
  03d7448  bt 2, 0x3d8aac
  03d744c  lis 3, 61
  03d7450  lis 4, 114
  03d7454  addi 3, 3, 29148
  03d7458  li 5, 0
  03d745c  lfs 1, 0(3)
  03d7460  lfs 2, -3056(4)
  03d7464  ori 3, 31, 0
  03d7468  li 4, 4
  03d746c  fmuls 1, 2, 1
  03d7470  fctiwz 1, 1
  03d7474  stfd 1, 336(1)
  03d7478  lwz 6, 340(1)
  03d747c  extsw 6, 6
  03d7480  bl 0xfddc0
  03d7484  nop
  03d7488  b 0x3d8aac
  03d748c  bl 0xfcc68
  03d7490  nop
  03d7494  lis 3, 61
  03d7498  fmr 31, 1
  03d749c  addi 29, 3, 29148
  03d74a0  lfs 1, 4(29)
  03d74a4  lfs 2, 8(29)
  03d74a8  bl 0xfcbe8
  03d74ac  nop
  03d74b0  lfs 2, 12(29)
  03d74b4  lfs 3, 16(29)
  03d74b8  fadds 2, 31, 2
  03d74bc  lfs 4, 20(29)
  03d74c0  fsubs 5, 3, 31
  03d74c4  li 3, 7
  03d74c8  fsubs 3, 3, 2
  03d74cc  fsub 7, 31, 5
  03d74d0  fsubs 6, 4, 2
  03d74d4  fsubs 4, 4, 31
  03d74d8  fsub 8, 2, 3
  03d74dc  fsel 5, 7, 5, 31
  03d74e0  fsel 2, 8, 3, 2
  03d74e4  fsub 7, 4, 5
  03d74e8  lfs 3, 24(29)
  03d74ec  fsub 8, 6, 2
  03d74f0  fsel 4, 7, 4, 5
  03d74f4  lfs 5, 28(29)
  03d74f8  fsel 2, 8, 6, 2
  03d74fc  fmuls 7, 4, 4
  03d7500  lfs 6, 32(29)
  03d7504  lfs 9, 432(30)
  03d7508  lfs 11, 436(30)
  03d750c  lfs 12, 36(29)
  03d7510  fmuls 8, 2, 2
  03d7514  fmuls 10, 7, 4
  03d7518  fmuls 13, 8, 2
  03d751c  fmuls 0, 7, 10
  03d7520  fmadds 4, 10, 3, 4
  03d7524  lfs 10, 440(30)
  03d7528  fmuls 31, 8, 13
  03d752c  fmadds 2, 13, 3, 2
  03d7530  fmuls 3, 7, 0
  03d7534  fmadds 4, 0, 5, 4
  03d7538  lfs 13, 444(30)
  03d753c  stfs 13, 460(30)
  03d7540  stfs 10, 456(30)
  03d7544  fmuls 0, 8, 31
  03d7548  fmadds 2, 31, 5, 2
  03d754c  fmuls 5, 7, 3
  03d7550  fmadds 3, 3, 6, 4
  03d7554  fmuls 4, 8, 0
  03d7558  fmadds 2, 0, 6, 2
  03d755c  fmadds 3, 5, 12, 3
  03d7560  fmadds 2, 4, 12, 2
  03d7564  fmadds 3, 3, 1, 11
  03d7568  fmadds 1, 2, 1, 9
  03d756c  stfs 3, 452(30)
  03d7570  stfs 1, 448(30)
  03d7574  stb 3, 32(31)
  03d7578  b 0x3d8aac
  03d757c  lwz 4, 488(30)
  03d7580  cmpwi 4, -1
  03d7584  bf 1, 0x3d7670
  03d7588  lwz 3, 504(30)
  03d758c  extsw 4, 4
  03d7590  addic 3, 3, 16
  03d7594  bl 0x110c60
  03d7598  nop
  03d759c  cmpwi 3, 0
  03d75a0  bt 2, 0x3d8aac
  03d75a4  lbz 3, 32(31)
  03d75a8  cmpwi 3, 1
  03d75ac  cmpwi 1, 3, 2
  03d75b0  bf 2, 0x3d7630
  03d75b4  lis 4, 61
  03d75b8  li 3, 5
  03d75bc  addi 4, 4, 29148
  03d75c0  stb 3, 32(31)
  03d75c4  lfs 2, 472(30)
  03d75c8  lfs 1, 40(4)
  03d75cc  lfs 3, 44(4)
  03d75d0  fmuls 1, 2, 1
  03d75d4  fmuls 2, 2, 3
  03d75d8  bl 0xfcbe8
  03d75dc  nop
  03d75e0  stfs 1, 468(30)
  03d75e4  lbz 3, 83(31)
  03d75e8  cmpwi 3, 6
  03d75ec  bt 2, 0x3d8aac
  03d75f0  lis 3, 61
  03d75f4  lis 4, 114
  03d75f8  addi 3, 3, 29148
  03d75fc  li 5, 0
  03d7600  lfs 1, 0(3)
  03d7604  lfs 2, -3056(4)
  03d7608  ori 3, 31, 0
  03d760c  fmuls 1, 2, 1
  03d7610  li 4, 6
  03d7614  fctiwz 1, 1
  03d7618  stfd 1, 336(1)
  03d761c  lwz 6, 340(1)
  03d7620  extsw 6, 6
  03d7624  bl 0xfddc0
  03d7628  nop
  03d762c  b 0x3d8aac
  03d7630  bf 6, 0x3d8aac
  03d7634  lis 4, 61
  03d7638  li 3, 5
  03d763c  addi 4, 4, 29148
  03d7640  stb 3, 32(31)
  03d7644  lfs 2, 472(30)
  03d7648  lfs 1, 40(4)
  03d764c  lfs 3, 44(4)
  03d7650  fmuls 1, 2, 1
  03d7654  fmuls 2, 2, 3
  03d7658  bl 0xfcbe8
  03d765c  nop
  03d7660  li 3, 6
  03d7664  stfs 1, 468(30)
  03d7668  stb 3, 32(31)
  03d766c  b 0x3d8aac
  03d7670  lwz 4, 504(30)
  03d7674  lfs 1, 436(30)
  03d7678  lfs 2, 432(30)
  03d767c  lfs 3, 20(4)
  03d7680  lfs 4, 16(4)
  03d7684  fsubs 3, 3, 1
  03d7688  fsubs 2, 4, 2
  03d768c  lfs 1, 24(4)
  03d7690  lfs 4, 440(30)
  03d7694  fsubs 4, 1, 4
  03d7698  fmuls 3, 3, 3
  03d769c  fmadds 2, 2, 2, 3
  03d76a0  lfs 3, 480(30)
  03d76a4  fmadds 2, 4, 4, 2
  03d76a8  fsqrts 2, 2
  03d76ac  fcmpu 0, 2, 3
  03d76b0  cror 6, 1, 2
  03d76b4  bt 6, 0x3d8aac
  03d76b8  lfs 2, 24(31)
  03d76bc  lis 4, 61
  03d76c0  fsubs 1, 1, 2
  03d76c4  addi 4, 4, 29148
  03d76c8  lfs 2, 48(4)
  03d76cc  fabs 1, 1
  03d76d0  fcmpu 0, 1, 2
  03d76d4  cror 6, 1, 2
  03d76d8  bt 6, 0x3d8aac
  03d76dc  cmpwi 3, 1
  03d76e0  bf 2, 0x3d7760
  03d76e4  lis 4, 61
  03d76e8  li 3, 5
  03d76ec  addi 4, 4, 29148
  03d76f0  stb 3, 32(31)
  03d76f4  lfs 2, 472(30)
  03d76f8  lfs 1, 40(4)
  03d76fc  lfs 3, 44(4)
  03d7700  fmuls 1, 2, 1
  03d7704  fmuls 2, 2, 3
  03d7708  bl 0xfcbe8
  03d770c  nop
  03d7710  stfs 1, 468(30)
  03d7714  lbz 3, 83(31)
  03d7718  cmpwi 3, 6
  03d771c  bt 2, 0x3d8aac
  03d7720  lis 3, 61
  03d7724  lis 4, 114
  03d7728  addi 3, 3, 29148
  03d772c  li 5, 0
  03d7730  lfs 1, 0(3)
  03d7734  lfs 2, -3056(4)
  03d7738  ori 3, 31, 0
  03d773c  fmuls 1, 2, 1
  03d7740  li 4, 6
  03d7744  fctiwz 1, 1
  03d7748  stfd 1, 336(1)
  03d774c  lwz 6, 340(1)
  03d7750  extsw 6, 6
  03d7754  bl 0xfddc0
  03d7758  nop
  03d775c  b 0x3d8aac
  03d7760  cmpwi 3, 2
  03d7764  bf 2, 0x3d8aac
  03d7768  lis 4, 61
  03d776c  li 3, 5
  03d7770  addi 4, 4, 29148
  03d7774  stb 3, 32(31)
  03d7778  lfs 2, 472(30)
  03d777c  lfs 1, 40(4)
  03d7780  lfs 3, 44(4)
  03d7784  fmuls 1, 2, 1
  03d7788  fmuls 2, 2, 3
  03d778c  bl 0xfcbe8
  03d7790  nop
  03d7794  li 3, 6
  03d7798  stfs 1, 468(30)
  03d779c  stb 3, 32(31)
  03d77a0  b 0x3d8aac
  03d77a4  lbz 3, 112(31)
  03d77a8  rlwinm 3, 3, 0, 30, 30
  03d77ac  cmpwi 3, 0
  03d77b0  bt 2, 0x3d8aac
  03d77b4  lbz 3, 188(31)
  03d77b8  cmpwi 3, 8
  03d77bc  stb 3, 32(31)
  03d77c0  cmpwi 1, 3, 5
  03d77c4  cmpwi 6, 3, 2
  03d77c8  cmpwi 7, 3, 1
  03d77cc  bt 2, 0x3d78c0
  03d77d0  bt 6, 0x3d7874
  03d77d4  bt 26, 0x3d7828
  03d77d8  bf 30, 0x3d8aac
  03d77dc  lbz 3, 83(31)
  03d77e0  cmpwi 3, 3
  03d77e4  bt 2, 0x3d8aac
  03d77e8  lis 3, 61
  03d77ec  lis 4, 114
  03d77f0  addi 3, 3, 29148
  03d77f4  li 5, 0
  03d77f8  lfs 1, 52(3)
  03d77fc  lfs 2, -3056(4)
  03d7800  ori 3, 31, 0
  03d7804  fmuls 1, 2, 1
  03d7808  li 4, 3
  03d780c  fctiwz 1, 1
  03d7810  stfd 1, 336(1)
  03d7814  lwz 6, 340(1)
  03d7818  extsw 6, 6
  03d781c  bl 0xfddc0
  03d7820  nop
  03d7824  b 0x3d8aac
  03d7828  lbz 3, 83(31)
  03d782c  cmpwi 3, 1
  03d7830  bt 2, 0x3d8aac
  03d7834  lis 3, 61
  03d7838  lis 4, 114
  03d783c  addi 3, 3, 29148
  03d7840  li 5, 0
  03d7844  lfs 1, 52(3)
  03d7848  lfs 2, -3056(4)
  03d784c  ori 3, 31, 0
  03d7850  li 4, 1
  03d7854  fmuls 1, 2, 1
  03d7858  fctiwz 1, 1
  03d785c  stfd 1, 336(1)
  03d7860  lwz 6, 340(1)
  03d7864  extsw 6, 6
  03d7868  bl 0xfddc0
  03d786c  nop
  03d7870  b 0x3d8aac
  03d7874  lbz 3, 83(31)
  03d7878  cmpwi 3, 6
  03d787c  bt 2, 0x3d8aac
  03d7880  lis 3, 61
  03d7884  lis 4, 114
  03d7888  addi 3, 3, 29148
  03d788c  li 5, 0
  03d7890  lfs 1, 52(3)
  03d7894  lfs 2, -3056(4)
  03d7898  ori 3, 31, 0
  03d789c  fmuls 1, 2, 1
  03d78a0  li 4, 6
  03d78a4  fctiwz 1, 1
  03d78a8  stfd 1, 336(1)
  03d78ac  lwz 6, 340(1)
  03d78b0  extsw 6, 6
  03d78b4  bl 0xfddc0
  03d78b8  nop
  03d78bc  b 0x3d8aac
  03d78c0  lbz 3, 83(31)
  03d78c4  cmpwi 3, 1
  03d78c8  bt 2, 0x3d8aac
  03d78cc  lis 3, 61
  03d78d0  lis 4, 114
  03d78d4  addi 3, 3, 29148
  03d78d8  li 5, 0
  03d78dc  lfs 1, 52(3)
  03d78e0  lfs 2, -3056(4)
  03d78e4  ori 3, 31, 0
  03d78e8  li 4, 1
  03d78ec  fmuls 1, 2, 1
  03d78f0  fctiwz 1, 1
  03d78f4  stfd 1, 336(1)
  03d78f8  lwz 6, 340(1)
  03d78fc  extsw 6, 6
  03d7900  bl 0xfddc0
  03d7904  nop
  03d7908  b 0x3d8aac
  03d790c  lwz 3, 504(30)
  03d7910  lfs 1, 16(31)
  03d7914  lfs 2, 20(31)
  03d7918  lfs 3, 16(3)
  03d791c  lfs 4, 20(3)
  03d7920  fsubs 1, 3, 1
  03d7924  lis 3, 61
  03d7928  fsubs 2, 4, 2
  03d792c  addi 3, 3, 29148
  03d7930  lis 29, 115
  03d7934  addic 29, 29, 22784
  03d7938  fabs 4, 1
  03d793c  fabs 3, 2
  03d7940  stfs 1, 196(1)
  03d7944  stfs 2, 200(1)
  03d7948  fsubs 1, 4, 3
  03d794c  stfs 1, 204(1)
  03d7950  lwz 4, 196(1)
  03d7954  lfs 31, 4(3)
  03d7958  lfs 1, 196(1)
  03d795c  lwz 3, 200(1)
  03d7960  lfs 2, 200(1)
  03d7964  fabs 1, 1
  03d7968  lwz 5, 204(1)
  03d796c  rlwinm 3, 3, 3, 29, 29
  03d7970  lfs 5, 204(1)
  03d7974  fabs 2, 2
  03d7978  rlwimi 3, 5, 2, 30, 30
  03d797c  fsub 6, 5, 31
  03d7980  rlwimi 3, 4, 4, 28, 28
  03d7984  fsub 5, 5, 31
  03d7988  ori 4, 29, 0
  03d798c  rlwimi 4, 3, 2, 26, 28
  03d7990  slwi 3, 3, 2
  03d7994  clrldi 4, 4, 32
  03d7998  fsel 3, 6, 1, 3
  03d799c  lfsx 30, 29, 3
  03d79a0  lfs 1, 4(4)
  03d79a4  fsel 2, 5, 2, 4
  03d79a8  fcmpu 0, 3, 31
  03d79ac  bt 1, 0x3d79b8
  03d79b0  fmr 30, 31
  03d79b4  b 0x3d7adc
  03d79b8  fsubs 4, 2, 3
  03d79bc  fadds 2, 2, 3
  03d79c0  addic 3, 1, 16
  03d79c4  li 7, 2
  03d79c8  addic 4, 3, 288
  03d79cc  addic 5, 3, 304
  03d79d0  mtctr 7
  03d79d4  fdivs 2, 4, 2
  03d79d8  fmuls 3, 2, 2
  03d79dc  stfs 2, 316(1)
  03d79e0  stfs 2, 308(1)
  03d79e4  stfs 2, 312(1)
  03d79e8  stfs 2, 304(1)
  03d79ec  lfs 5, 316(1)
  03d79f0  lfs 6, 308(1)
  03d79f4  lfs 7, 312(1)
  03d79f8  fmuls 4, 3, 3
  03d79fc  fmuls 6, 6, 3
  03d7a00  fmuls 5, 5, 4
  03d7a04  fmuls 2, 4, 4
  03d7a08  fmuls 4, 7, 4
  03d7a0c  stfs 6, 308(1)
  03d7a10  fmuls 3, 5, 3
  03d7a14  stfs 4, 312(1)
  03d7a18  stfs 3, 316(1)
  03d7a1c  lfs 3, 288(3)
  03d7a20  fmuls 3, 3, 2
  03d7a24  stfs 3, 304(3)
  03d7a28  lfs 3, 4(4)
  03d7a2c  addic 3, 3, 8
  03d7a30  addic 4, 4, 8
  03d7a34  fmuls 3, 3, 2
  03d7a38  stfs 3, 4(5)
  03d7a3c  addic 5, 5, 8
  03d7a40  bdnz 0x3d7a1c
  03d7a44  li 5, 4
  03d7a48  ori 3, 1, 0
  03d7a4c  mtctr 5
  03d7a50  lis 4, 115
  03d7a54  addic 5, 3, 304
  03d7a58  addic 4, 4, 22752
  03d7a5c  ori 6, 5, 0
  03d7a60  lfs 2, 304(3)
  03d7a64  lfs 3, 0(4)
  03d7a68  fmuls 2, 2, 3
  03d7a6c  lfs 3, 4(4)
  03d7a70  addic 4, 4, 8
  03d7a74  stfs 2, 304(3)
  03d7a78  lfs 2, 4(5)
  03d7a7c  addic 3, 3, 8
  03d7a80  fmuls 2, 2, 3
  03d7a84  stfs 2, 4(5)
  03d7a88  addic 5, 5, 8
  03d7a8c  bdnz 0x3d7a60
  03d7a90  fmr 2, 31
  03d7a94  ori 3, 1, 0
  03d7a98  mtctr 7
  03d7a9c  lfs 3, 304(3)
  03d7aa0  fadds 2, 2, 3
  03d7aa4  addic 3, 3, 16
  03d7aa8  lfs 3, 4(6)
  03d7aac  lfs 4, 8(6)
  03d7ab0  lfs 5, 12(6)
  03d7ab4  addic 6, 6, 16
  03d7ab8  fadds 2, 2, 3
  03d7abc  fadds 2, 2, 4
  03d7ac0  fadds 2, 2, 5
  03d7ac4  bdnz 0x3d7a9c
  03d7ac8  lis 3, 61
  03d7acc  addi 3, 3, 29148
  03d7ad0  lfs 3, 56(3)
  03d7ad4  fadds 2, 2, 3
  03d7ad8  fmadds 30, 2, 30, 1
  03d7adc  fmr 1, 30
  03d7ae0  lfs 2, 468(30)
  03d7ae4  bl 0x502578
  03d7ae8  nop
  03d7aec  lis 3, 61
  03d7af0  addi 3, 3, 29148
  03d7af4  lfs 2, 12(3)
  03d7af8  lfs 30, 16(3)
  03d7afc  fadds 1, 1, 2
  03d7b00  lfs 29, 20(3)
  03d7b04  lfs 28, 24(3)
  03d7b08  lfs 27, 28(3)
  03d7b0c  lfs 26, 32(3)
  03d7b10  lfs 25, 36(3)
  03d7b14  lfs 24, 8(3)
  03d7b18  fsubs 2, 30, 1
  03d7b1c  fsubs 3, 29, 1
  03d7b20  fsub 4, 1, 2
  03d7b24  fsel 1, 4, 2, 1
  03d7b28  lfs 4, 16(31)
  03d7b2c  lfs 5, 20(31)
  03d7b30  lwz 3, 504(30)
  03d7b34  fsub 2, 3, 1
  03d7b38  fsel 1, 2, 3, 1
  03d7b3c  fmuls 2, 1, 1
  03d7b40  fmuls 3, 2, 1
  03d7b44  fmuls 6, 2, 3
  03d7b48  fmadds 1, 3, 28, 1
  03d7b4c  fmuls 3, 2, 6
  03d7b50  fmadds 1, 6, 27, 1
  03d7b54  fmuls 2, 2, 3
  03d7b58  fmadds 1, 3, 26, 1
  03d7b5c  fmadds 1, 2, 25, 1
  03d7b60  fmuls 1, 1, 24
  03d7b64  stfs 1, 112(1)
  03d7b68  lfs 1, 16(3)
  03d7b6c  lfs 2, 20(3)
  03d7b70  fsubs 1, 1, 4
  03d7b74  fsubs 2, 2, 5
  03d7b78  fabs 4, 1
  03d7b7c  fabs 5, 2
  03d7b80  stfs 1, 184(1)
  03d7b84  stfs 2, 188(1)
  03d7b88  fsubs 1, 4, 5
  03d7b8c  stfs 1, 192(1)
  03d7b90  lwz 3, 184(1)
  03d7b94  lfs 1, 184(1)
  03d7b98  lwz 4, 188(1)
  03d7b9c  lfs 2, 188(1)
  03d7ba0  lfs 3, 468(30)
  03d7ba4  fabs 1, 1
  03d7ba8  fabs 6, 2
  03d7bac  rlwinm 4, 4, 3, 29, 29
  03d7bb0  lwz 5, 192(1)
  03d7bb4  lfs 2, 192(1)
  03d7bb8  rlwimi 4, 5, 2, 30, 30
  03d7bbc  fsub 7, 2, 31
  03d7bc0  fsub 8, 2, 31
  03d7bc4  rlwimi 4, 3, 4, 28, 28
  03d7bc8  ori 3, 29, 0
  03d7bcc  rlwimi 3, 4, 2, 26, 28
  03d7bd0  slwi 4, 4, 2
  03d7bd4  clrldi 3, 3, 32
  03d7bd8  fsel 5, 7, 1, 5
  03d7bdc  lfsx 1, 29, 4
  03d7be0  lfs 2, 4(3)
  03d7be4  fsel 4, 8, 6, 4
  03d7be8  fcmpu 0, 5, 31
  03d7bec  bt 1, 0x3d7bf4
  03d7bf0  b 0x3d7d14
  03d7bf4  fsubs 6, 4, 5
  03d7bf8  fadds 4, 4, 5
  03d7bfc  addic 3, 1, 16
  03d7c00  li 7, 2
  03d7c04  addic 5, 3, 272
  03d7c08  addic 4, 3, 256
  03d7c0c  mtctr 7
  03d7c10  fdivs 4, 6, 4
  03d7c14  fmuls 5, 4, 4
  03d7c18  stfs 4, 284(1)
  03d7c1c  stfs 4, 276(1)
  03d7c20  stfs 4, 280(1)
  03d7c24  stfs 4, 272(1)
  03d7c28  lfs 7, 284(1)
  03d7c2c  lfs 8, 276(1)
  03d7c30  lfs 9, 280(1)
  03d7c34  fmuls 6, 5, 5
  03d7c38  fmuls 8, 8, 5
  03d7c3c  fmuls 7, 7, 6
  03d7c40  fmuls 4, 6, 6
  03d7c44  fmuls 6, 9, 6
  03d7c48  stfs 8, 276(1)
  03d7c4c  fmuls 5, 7, 5
  03d7c50  stfs 6, 280(1)
  03d7c54  stfs 5, 284(1)
  03d7c58  lfs 5, 256(3)
  03d7c5c  fmuls 5, 5, 4
  03d7c60  stfs 5, 272(3)
  03d7c64  lfs 5, 4(4)
  03d7c68  addic 4, 4, 8
  03d7c6c  fmuls 5, 5, 4
  03d7c70  addic 3, 3, 8
  03d7c74  stfs 5, 4(5)
  03d7c78  addic 5, 5, 8
  03d7c7c  bdnz 0x3d7c58
  03d7c80  li 5, 4
  03d7c84  ori 3, 1, 0
  03d7c88  mtctr 5
  03d7c8c  lis 4, 115
  03d7c90  addic 5, 3, 272
  03d7c94  addic 4, 4, 22752
  03d7c98  ori 6, 5, 0
  03d7c9c  lfs 4, 272(3)
  03d7ca0  lfs 5, 0(4)
  03d7ca4  fmuls 4, 4, 5
  03d7ca8  lfs 5, 4(4)
  03d7cac  addic 4, 4, 8
  03d7cb0  stfs 4, 272(3)
  03d7cb4  lfs 4, 4(5)
  03d7cb8  addic 3, 3, 8
  03d7cbc  fmuls 4, 4, 5
  03d7cc0  stfs 4, 4(5)
  03d7cc4  addic 5, 5, 8
  03d7cc8  bdnz 0x3d7c9c
  03d7ccc  ori 3, 1, 0
  03d7cd0  mtctr 7
  03d7cd4  lfs 4, 272(3)
  03d7cd8  lfs 5, 4(6)
  03d7cdc  fadds 4, 31, 4
  03d7ce0  lfs 6, 8(6)
  03d7ce4  addic 3, 3, 16
  03d7ce8  lfs 31, 12(6)
  03d7cec  addic 6, 6, 16
  03d7cf0  fadds 4, 4, 5
  03d7cf4  fadds 4, 4, 6
  03d7cf8  fadds 31, 4, 31
  03d7cfc  bdnz 0x3d7cd4
  03d7d00  lis 3, 61
  03d7d04  addi 3, 3, 29148
  03d7d08  lfs 4, 56(3)
  03d7d0c  fadds 31, 31, 4
  03d7d10  fmadds 31, 31, 1, 2
  03d7d14  fmr 1, 31
  03d7d18  fmr 2, 3
  03d7d1c  bl 0x502578
  03d7d20  nop
  03d7d24  fsubs 2, 30, 1
  03d7d28  fsubs 3, 29, 1
  03d7d2c  ori 3, 31, 0
  03d7d30  addic 4, 30, 352
  03d7d34  addic 5, 1, 112
  03d7d38  addic 6, 30, 32
  03d7d3c  fsub 4, 1, 2
  03d7d40  fsel 1, 4, 2, 1
  03d7d44  fsub 2, 3, 1
  03d7d48  fsel 1, 2, 3, 1
  03d7d4c  lfs 2, 112(1)
  03d7d50  lfs 3, 16(31)
  03d7d54  lfs 4, 20(31)
  03d7d58  fadds 2, 2, 3
  03d7d5c  lfs 6, 24(31)
  03d7d60  stfs 6, 120(1)
  03d7d64  fmuls 5, 1, 1
  03d7d68  stfs 2, 112(1)
  03d7d6c  fmuls 3, 5, 1
  03d7d70  fmuls 6, 5, 3
  03d7d74  fmadds 1, 3, 28, 1
  03d7d78  fmuls 2, 5, 6
  03d7d7c  fmadds 1, 6, 27, 1
  03d7d80  fmuls 3, 5, 2
  03d7d84  fmadds 1, 2, 26, 1
  03d7d88  fmadds 1, 3, 25, 1
  03d7d8c  fmadds 1, 1, 24, 4
  03d7d90  stfs 1, 116(1)
  03d7d94  bl 0x101cc0
  03d7d98  nop
  03d7d9c  lbz 3, 32(31)
  03d7da0  lfs 31, 16(31)
  03d7da4  lfs 1, 20(31)
  03d7da8  cmpwi 3, 5
  03d7dac  lfs 2, 24(31)
  03d7db0  lbz 5, 83(31)
  03d7db4  bf 2, 0x3d7e48
  03d7db8  lwz 4, 504(30)
  03d7dbc  lfs 3, 20(4)
  03d7dc0  lfs 4, 16(4)
  03d7dc4  fsubs 3, 1, 3
  03d7dc8  fsubs 4, 31, 4
  03d7dcc  lfs 5, 24(4)
  03d7dd0  fsubs 5, 2, 5
  03d7dd4  lis 4, 133
  03d7dd8  fmuls 3, 3, 3
  03d7ddc  fmadds 3, 4, 4, 3
  03d7de0  lfs 4, 13944(4)
  03d7de4  fmadds 3, 5, 5, 3
  03d7de8  fsqrts 3, 3
  03d7dec  fcmpu 0, 3, 4
  03d7df0  cror 6, 1, 2
  03d7df4  bt 6, 0x3d7e48
  03d7df8  li 3, 9
  03d7dfc  cmpwi 5, 7
  03d7e00  stb 3, 32(31)
  03d7e04  bt 2, 0x3d8aac
  03d7e08  lis 3, 61
  03d7e0c  lis 4, 114
  03d7e10  addi 3, 3, 29148
  03d7e14  li 5, 0
  03d7e18  lfs 1, 0(3)
  03d7e1c  lfs 2, -3056(4)
  03d7e20  ori 3, 31, 0
  03d7e24  fmuls 1, 2, 1
  03d7e28  li 4, 7
  03d7e2c  fctiwz 1, 1
  03d7e30  stfd 1, 336(1)
  03d7e34  lwz 6, 340(1)
  03d7e38  extsw 6, 6
  03d7e3c  bl 0xfddc0
  03d7e40  nop
  03d7e44  b 0x3d8aac
  03d7e48  cmpwi 3, 6
  03d7e4c  bf 2, 0x3d7eec
  03d7e50  lwz 4, 504(30)
  03d7e54  lfs 3, 20(4)
  03d7e58  lfs 4, 16(4)
  03d7e5c  fsubs 1, 1, 3
  03d7e60  fsubs 3, 31, 4
  03d7e64  lfs 4, 24(4)
  03d7e68  fsubs 2, 2, 4
  03d7e6c  lis 4, 61
  03d7e70  addi 4, 4, 29148
  03d7e74  fmuls 1, 1, 1
  03d7e78  fmadds 1, 3, 3, 1
  03d7e7c  fmadds 1, 2, 2, 1
  03d7e80  lfs 2, 60(4)
  03d7e84  fsqrts 1, 1
  03d7e88  fcmpu 0, 1, 2
  03d7e8c  cror 6, 1, 2
  03d7e90  bt 6, 0x3d7eec
  03d7e94  li 3, 3
  03d7e98  li 4, 5
  03d7e9c  cmpwi 5, 2
  03d7ea0  stb 3, 32(31)
  03d7ea4  stb 4, 188(31)
  03d7ea8  bt 2, 0x3d8aac
  03d7eac  lis 3, 61
  03d7eb0  lis 4, 114
  03d7eb4  addi 3, 3, 29148
  03d7eb8  li 5, 0
  03d7ebc  lfs 1, 0(3)
  03d7ec0  lfs 2, -3056(4)
  03d7ec4  ori 3, 31, 0
  03d7ec8  li 4, 2
  03d7ecc  fmuls 1, 2, 1
  03d7ed0  fctiwz 1, 1
  03d7ed4  stfd 1, 336(1)
  03d7ed8  lwz 6, 340(1)
  03d7edc  extsw 6, 6
  03d7ee0  bl 0xfddc0
  03d7ee4  nop
  03d7ee8  b 0x3d8aac
  03d7eec  lwz 4, 488(30)
  03d7ef0  cmpwi 4, -1
  03d7ef4  bf 1, 0x3d7f88
  03d7ef8  lwz 3, 504(30)
  03d7efc  extsw 4, 4
  03d7f00  addic 3, 3, 16
  03d7f04  bl 0x110c60
  03d7f08  nop
  03d7f0c  cmpwi 3, 0
  03d7f10  bf 2, 0x3d8aac
  03d7f14  lbz 3, 32(31)
  03d7f18  cmpwi 3, 5
  03d7f1c  bf 2, 0x3d7f7c
  03d7f20  li 3, 4
  03d7f24  lbz 5, 83(31)
  03d7f28  li 4, 8
  03d7f2c  cmpwi 5, 4
  03d7f30  stb 3, 32(31)
  03d7f34  stb 4, 188(31)
  03d7f38  bt 2, 0x3d8aac
  03d7f3c  lis 3, 61
  03d7f40  lis 4, 114
  03d7f44  addi 3, 3, 29148
  03d7f48  li 5, 0
  03d7f4c  lfs 1, 52(3)
  03d7f50  lfs 2, -3056(4)
  03d7f54  ori 3, 31, 0
  03d7f58  li 4, 4
  03d7f5c  fmuls 1, 2, 1
  03d7f60  fctiwz 1, 1
  03d7f64  stfd 1, 336(1)
  03d7f68  lwz 6, 340(1)
  03d7f6c  extsw 6, 6
  03d7f70  bl 0xfddc0
  03d7f74  nop
  03d7f78  b 0x3d8aac
  03d7f7c  li 3, 8
  03d7f80  stb 3, 32(31)
  03d7f84  b 0x3d8aac
  03d7f88  lwz 4, 504(30)
  03d7f8c  lfs 1, 436(30)
  03d7f90  lfs 2, 432(30)
  03d7f94  lfs 3, 20(4)
  03d7f98  lfs 4, 16(4)
  03d7f9c  fsubs 1, 1, 3
  03d7fa0  fsubs 2, 2, 4
  03d7fa4  lfs 3, 440(30)
  03d7fa8  lfs 4, 24(4)
  03d7fac  fsubs 3, 3, 4
  03d7fb0  fmuls 1, 1, 1
  03d7fb4  fmadds 1, 2, 2, 1
  03d7fb8  lfs 2, 480(30)
  03d7fbc  fmadds 1, 3, 3, 1
  03d7fc0  fsqrts 1, 1
  03d7fc4  fcmpu 0, 1, 2
  03d7fc8  cror 6, 0, 2
  03d7fcc  bt 6, 0x3d8aac
  03d7fd0  cmpwi 3, 5
  03d7fd4  bf 2, 0x3d8030
  03d7fd8  li 3, 4
  03d7fdc  li 4, 8
  03d7fe0  cmpwi 5, 4
  03d7fe4  stb 3, 32(31)
  03d7fe8  stb 4, 188(31)
  03d7fec  bt 2, 0x3d8aac
  03d7ff0  lis 3, 61
  03d7ff4  lis 4, 114
  03d7ff8  addi 3, 3, 29148
  03d7ffc  li 5, 0
  03d8000  lfs 1, 52(3)
  03d8004  lfs 2, -3056(4)
  03d8008  ori 3, 31, 0
  03d800c  fmuls 1, 2, 1
  03d8010  li 4, 4
  03d8014  fctiwz 1, 1
  03d8018  stfd 1, 336(1)
  03d801c  lwz 6, 340(1)
  03d8020  extsw 6, 6
  03d8024  bl 0xfddc0
  03d8028  nop
  03d802c  b 0x3d8aac
  03d8030  li 3, 8
  03d8034  stb 3, 32(31)
  03d8038  b 0x3d8aac
  03d803c  lis 29, 151
  03d8040  lfs 1, 16(31)
  03d8044  addic 29, 29, -25376
  03d8048  lfs 2, 20(31)
  03d804c  lis 3, 61
  03d8050  addi 3, 3, 29148
  03d8054  lfs 3, 128(29)
  03d8058  lfs 4, 132(29)
  03d805c  fsubs 1, 3, 1
  03d8060  fsubs 2, 4, 2
  03d8064  lis 4, 115
  03d8068  addic 4, 4, 22784
  03d806c  fabs 3, 1
  03d8070  fabs 5, 2
  03d8074  stfs 1, 172(1)
  03d8078  stfs 2, 176(1)
  03d807c  fsubs 1, 3, 5
  03d8080  stfs 1, 180(1)
  03d8084  lwz 5, 172(1)
  03d8088  lfs 4, 4(3)
  03d808c  lfs 1, 172(1)
  03d8090  lwz 3, 176(1)
  03d8094  lfs 2, 176(1)
  03d8098  lwz 6, 180(1)
  03d809c  rlwinm 3, 3, 3, 29, 29
  03d80a0  fabs 6, 2
  03d80a4  lfs 2, 180(1)
  03d80a8  fabs 1, 1
  03d80ac  rlwimi 3, 6, 2, 30, 30
  03d80b0  fsub 7, 2, 4
  03d80b4  rlwimi 3, 5, 4, 28, 28
  03d80b8  fsub 8, 2, 4
  03d80bc  ori 5, 4, 0
  03d80c0  rlwimi 5, 3, 2, 26, 28
  03d80c4  slwi 3, 3, 2
  03d80c8  clrldi 5, 5, 32
  03d80cc  fsel 5, 7, 1, 5
  03d80d0  lfsx 1, 4, 3
  03d80d4  lfs 2, 4(5)
  03d80d8  fsel 3, 8, 6, 3
  03d80dc  fcmpu 0, 5, 4
  03d80e0  bt 1, 0x3d80e8
  03d80e4  b 0x3d8208
  03d80e8  fsubs 6, 3, 5
  03d80ec  fadds 3, 3, 5
  03d80f0  addic 3, 1, 16
  03d80f4  li 7, 2
  03d80f8  addic 4, 3, 224
  03d80fc  addic 5, 3, 240
  03d8100  mtctr 7
  03d8104  fdivs 3, 6, 3
  03d8108  fmuls 5, 3, 3
  03d810c  stfs 3, 252(1)
  03d8110  stfs 3, 244(1)
  03d8114  stfs 3, 248(1)
  03d8118  stfs 3, 240(1)
  03d811c  lfs 7, 252(1)
  03d8120  lfs 8, 244(1)
  03d8124  lfs 9, 248(1)
  03d8128  fmuls 6, 5, 5
  03d812c  fmuls 8, 8, 5
  03d8130  fmuls 7, 7, 6
  03d8134  fmuls 3, 6, 6
  03d8138  fmuls 6, 9, 6
  03d813c  stfs 8, 244(1)
  03d8140  fmuls 5, 7, 5
  03d8144  stfs 6, 248(1)
  03d8148  stfs 5, 252(1)
  03d814c  lfs 5, 224(3)
  03d8150  fmuls 5, 5, 3
  03d8154  stfs 5, 240(3)
  03d8158  lfs 5, 4(4)
  03d815c  addic 3, 3, 8
  03d8160  addic 4, 4, 8
  03d8164  fmuls 5, 5, 3
  03d8168  stfs 5, 4(5)
  03d816c  addic 5, 5, 8
  03d8170  bdnz 0x3d814c
  03d8174  li 5, 4
  03d8178  ori 3, 1, 0
  03d817c  mtctr 5
  03d8180  lis 4, 115
  03d8184  addic 5, 3, 240
  03d8188  addic 4, 4, 22752
  03d818c  ori 6, 5, 0
  03d8190  lfs 3, 240(3)
  03d8194  lfs 5, 0(4)
  03d8198  fmuls 3, 3, 5
  03d819c  lfs 5, 4(4)
  03d81a0  addic 4, 4, 8
  03d81a4  stfs 3, 240(3)
  03d81a8  lfs 3, 4(5)
  03d81ac  addic 3, 3, 8
  03d81b0  fmuls 3, 3, 5
  03d81b4  stfs 3, 4(5)
  03d81b8  addic 5, 5, 8
  03d81bc  bdnz 0x3d8190
  03d81c0  ori 3, 1, 0
  03d81c4  mtctr 7
  03d81c8  lfs 3, 240(3)
  03d81cc  fadds 3, 4, 3
  03d81d0  lfs 4, 4(6)
  03d81d4  addic 3, 3, 16
  03d81d8  lfs 5, 8(6)
  03d81dc  lfs 6, 12(6)
  03d81e0  addic 6, 6, 16
  03d81e4  fadds 3, 3, 4
  03d81e8  fadds 4, 3, 5
  03d81ec  fadds 4, 4, 6
  03d81f0  bdnz 0x3d81c8
  03d81f4  lis 3, 61
  03d81f8  addi 3, 3, 29148
  03d81fc  lfs 3, 56(3)
  03d8200  fadds 4, 4, 3
  03d8204  fmadds 4, 4, 1, 2
  03d8208  lis 3, 61
  03d820c  fmr 1, 4
  03d8210  addic 5, 30, 464
  03d8214  addi 28, 3, 29148
  03d8218  ori 3, 31, 0
  03d821c  lfs 31, 72(28)
  03d8220  lfs 2, 64(28)
  03d8224  lfs 3, 68(28)
  03d8228  fmr 4, 31
  03d822c  bl 0xff2e8
  03d8230  nop
  03d8234  ori 3, 31, 0
  03d8238  bl 0xefe40
  03d823c  nop
  03d8240  lfs 2, 76(28)
  03d8244  lbz 30, 112(31)
  03d8248  fcmpu 0, 1, 2
  03d824c  lbz 3, 83(31)
  03d8250  bf 2, 0x3d83c4
  03d8254  lfs 1, 20(31)
  03d8258  lfs 2, 132(29)
  03d825c  lfs 3, 16(31)
  03d8260  fsubs 1, 1, 2
  03d8264  lfs 2, 128(29)
  03d8268  fsubs 2, 3, 2
  03d826c  lis 4, 133
  03d8270  fmuls 1, 1, 1
  03d8274  fmadds 1, 2, 2, 1
  03d8278  lfs 2, 13944(4)
  03d827c  fsqrts 1, 1
  03d8280  fcmpu 0, 1, 2
  03d8284  cror 6, 1, 2
  03d8288  bt 6, 0x3d83c4
  03d828c  lfs 1, 24(31)
  03d8290  lfs 2, 136(29)
  03d8294  lis 4, 61
  03d8298  fsubs 1, 1, 2
  03d829c  addi 4, 4, 29148
  03d82a0  lfs 2, 8(4)
  03d82a4  fabs 1, 1
  03d82a8  fcmpu 0, 1, 2
  03d82ac  cror 6, 1, 2
  03d82b0  bt 6, 0x3d83c4
  03d82b4  lis 3, 61
  03d82b8  lfs 1, 72(31)
  03d82bc  addi 6, 3, 29148
  03d82c0  lfs 2, 12(6)
  03d82c4  lfs 3, 16(6)
  03d82c8  fadds 2, 1, 2
  03d82cc  lfs 4, 20(6)
  03d82d0  fsubs 5, 3, 1
  03d82d4  li 3, 0
  03d82d8  addic 7, 1, 144
  03d82dc  addic 8, 1, 128
  03d82e0  li 5, 1
  03d82e4  fsubs 3, 3, 2
  03d82e8  fsub 7, 1, 5
  03d82ec  fsubs 6, 4, 2
  03d82f0  fsubs 4, 4, 1
  03d82f4  fsub 8, 2, 3
  03d82f8  fsel 1, 7, 5, 1
  03d82fc  fsel 2, 8, 3, 2
  03d8300  fsub 5, 4, 1
  03d8304  lfs 3, 24(6)
  03d8308  fsub 7, 6, 2
  03d830c  fsel 1, 5, 4, 1
  03d8310  lfs 4, 28(6)
  03d8314  lfs 5, 32(6)
  03d8318  lfs 9, 36(6)
  03d831c  lwz 4, 8320(29)
  03d8320  stw 3, 136(1)
  03d8324  fsel 2, 7, 6, 2
  03d8328  fmuls 6, 1, 1
  03d832c  ori 3, 4, 0
  03d8330  fmuls 7, 2, 2
  03d8334  fmuls 8, 6, 1
  03d8338  fmuls 10, 7, 2
  03d833c  fmuls 11, 6, 8
  03d8340  fmadds 1, 8, 3, 1
  03d8344  fmuls 8, 7, 10
  03d8348  fmadds 2, 10, 3, 2
  03d834c  fmuls 3, 6, 11
  03d8350  fmadds 1, 11, 4, 1
  03d8354  fmuls 10, 7, 8
  03d8358  fmadds 2, 8, 4, 2
  03d835c  fmuls 4, 6, 3
  03d8360  fmadds 1, 3, 5, 1
  03d8364  fmuls 3, 7, 10
  03d8368  fmadds 2, 10, 5, 2
  03d836c  fmadds 1, 4, 9, 1
  03d8370  fmadds 2, 3, 9, 2
  03d8374  fmuls 1, 1, 31
  03d8378  fmuls 2, 2, 31
  03d837c  stfs 1, 132(1)
  03d8380  stfs 2, 128(1)
  03d8384  lfs 1, 16(4)
  03d8388  stfs 1, 144(1)
  03d838c  lfs 1, 20(4)
  03d8390  stfs 1, 148(1)
  03d8394  lfs 1, 24(4)
  03d8398  stfs 1, 152(1)
  03d839c  lfs 2, 28(4)
  03d83a0  ori 4, 31, 0
  03d83a4  stfs 2, 156(1)
  03d83a8  lfs 2, 80(6)
  03d83ac  fadds 1, 1, 2
  03d83b0  stfs 1, 152(1)
  03d83b4  lfs 1, 84(6)
  03d83b8  bl 0x105c08
  03d83bc  nop
  03d83c0  b 0x3d8aac
  03d83c4  rlwinm 4, 30, 0, 30, 30
  03d83c8  cmpwi 4, 0
  03d83cc  bt 2, 0x3d8aac
  03d83d0  li 4, 4
  03d83d4  cmpwi 3, 4
  03d83d8  li 3, 8
  03d83dc  stb 4, 32(31)
  03d83e0  stb 3, 188(31)
  03d83e4  bt 2, 0x3d8aac
  03d83e8  lis 3, 61
  03d83ec  lis 4, 114
  03d83f0  addi 3, 3, 29148
  03d83f4  li 5, 0
  03d83f8  lfs 1, 52(3)
  03d83fc  lfs 2, -3056(4)
  03d8400  ori 3, 31, 0
  03d8404  fmuls 1, 2, 1
  03d8408  li 4, 4
  03d840c  fctiwz 1, 1
  03d8410  stfd 1, 336(1)
  03d8414  lwz 6, 340(1)
  03d8418  extsw 6, 6
  03d841c  bl 0xfddc0
  03d8420  nop
  03d8424  b 0x3d8aac
  03d8428  ori 3, 31, 0
  03d842c  addic 4, 30, 352
  03d8430  addic 5, 30, 448
  03d8434  addic 6, 30, 32
  03d8438  bl 0x101cc0
  03d843c  nop
  03d8440  rlwinm 3, 3, 0, 29, 30
  03d8444  cmpwi 3, 0
  03d8448  bt 2, 0x3d8aac
  03d844c  li 3, 2
  03d8450  stb 3, 32(31)
  03d8454  b 0x3d8aac
  03d8458  addic 4, 30, 352
  03d845c  addic 5, 30, 432
  03d8460  addic 6, 30, 32
  03d8464  ori 3, 31, 0
  03d8468  bl 0x101cc0
  03d846c  nop
  03d8470  lfs 1, 20(31)
  03d8474  lfs 2, 436(30)
  03d8478  lfs 3, 16(31)
  03d847c  fsubs 1, 1, 2
  03d8480  lfs 2, 432(30)
  03d8484  fsubs 2, 3, 2
  03d8488  lfs 3, 24(31)
  03d848c  lfs 4, 440(30)
  03d8490  fsubs 3, 3, 4
  03d8494  fmuls 1, 1, 1
  03d8498  lis 3, 61
  03d849c  addi 3, 3, 29148
  03d84a0  fmadds 1, 2, 2, 1
  03d84a4  lfs 2, 88(3)
  03d84a8  fmadds 1, 3, 3, 1
  03d84ac  fsqrts 1, 1
  03d84b0  fcmpu 0, 1, 2
  03d84b4  cror 6, 1, 2
  03d84b8  bt 6, 0x3d8aac
  03d84bc  li 3, 2
  03d84c0  lbz 4, 83(31)
  03d84c4  cmpwi 4, 1
  03d84c8  stb 3, 32(31)
  03d84cc  bt 2, 0x3d8aac
  03d84d0  lis 3, 61
  03d84d4  lis 4, 114
  03d84d8  addi 3, 3, 29148
  03d84dc  li 5, 0
  03d84e0  lfs 1, 0(3)
  03d84e4  lfs 2, -3056(4)
  03d84e8  ori 3, 31, 0
  03d84ec  fmuls 1, 2, 1
  03d84f0  li 4, 1
  03d84f4  fctiwz 1, 1
  03d84f8  stfd 1, 336(1)
  03d84fc  lwz 6, 340(1)
  03d8500  extsw 6, 6
  03d8504  bl 0xfddc0
  03d8508  nop
  03d850c  b 0x3d8aac
  03d8510  ori 3, 31, 0
  03d8514  addic 4, 30, 256
  03d8518  bl 0x10b030
  03d851c  nop
  03d8520  rlwinm 5, 3, 0, 25, 25
  03d8524  lbz 4, 83(31)
  03d8528  cmpwi 5, 0
  03d852c  bt 2, 0x3d8580
  03d8530  li 3, 2
  03d8534  cmpwi 4, 1
  03d8538  stb 3, 32(31)
  03d853c  bt 2, 0x3d8aac
  03d8540  lis 3, 61
  03d8544  lis 4, 114
  03d8548  addi 3, 3, 29148
  03d854c  li 5, 0
  03d8550  lfs 1, 52(3)
  03d8554  lfs 2, -3056(4)
  03d8558  ori 3, 31, 0
  03d855c  fmuls 1, 2, 1
  03d8560  li 4, 1
  03d8564  fctiwz 1, 1
  03d8568  stfd 1, 336(1)
  03d856c  lwz 6, 340(1)
  03d8570  extsw 6, 6
  03d8574  bl 0xfddc0
  03d8578  nop
  03d857c  b 0x3d8aac
  03d8580  lwz 6, 24(31)
  03d8584  lis 5, 16544
  03d8588  srawi 7, 6, 31
  03d858c  srwi 8, 7, 1
  03d8590  xor 6, 8, 6
  03d8594  subc 6, 6, 7
  03d8598  cmpw 6, 5
  03d859c  bt 0, 0x3d85ac
  03d85a0  rlwinm 3, 3, 0, 26, 26
  03d85a4  cmpwi 3, 0
  03d85a8  bt 2, 0x3d8aac
  03d85ac  lfs 1, 432(30)
  03d85b0  li 3, 2
  03d85b4  stfs 1, 16(31)
  03d85b8  lfs 1, 436(30)
  03d85bc  cmpwi 4, 1
  03d85c0  stfs 1, 20(31)
  03d85c4  lfs 1, 440(30)
  03d85c8  stfs 1, 24(31)
  03d85cc  lfs 1, 444(30)
  03d85d0  stb 3, 32(31)
  03d85d4  stfs 1, 28(31)
  03d85d8  bt 2, 0x3d8aac
  03d85dc  lis 3, 61
  03d85e0  lis 4, 114
  03d85e4  addi 3, 3, 29148
  03d85e8  li 5, 0
  03d85ec  lfs 1, 52(3)
  03d85f0  lfs 2, -3056(4)
  03d85f4  ori 3, 31, 0
  03d85f8  li 4, 1
  03d85fc  fmuls 1, 2, 1
  03d8600  fctiwz 1, 1
  03d8604  stfd 1, 336(1)
  03d8608  lwz 6, 340(1)
  03d860c  extsw 6, 6
  03d8610  bl 0xfddc0
  03d8614  nop
  03d8618  b 0x3d8aac
  03d861c  ori 3, 31, 0
  03d8620  addic 4, 30, 256
  03d8624  bl 0x10b030
  03d8628  nop
  03d862c  rlwinm 4, 3, 0, 25, 25
  03d8630  lbz 29, 33(31)
  03d8634  cmpwi 4, 0
  03d8638  bt 2, 0x3d8704
  03d863c  cmpwi 29, 255
  03d8640  bf 2, 0x3d864c
  03d8644  li 29, 0
  03d8648  b 0x3d86c4
  03d864c  lis 3, 165
  03d8650  rlwinm 4, 29, 2, 22, 29
  03d8654  addic 3, 3, -28284
  03d8658  li 29, 0
  03d865c  lwzx 28, 3, 4
  03d8660  lis 3, 164
  03d8664  lhz 27, 0(28)
  03d8668  cmpwi 1, 29, 0
  03d866c  rlwinm 27, 27, 8, 9, 23
  03d8670  lwz 3, -28512(3)
  03d8674  addc 4, 3, 27
  03d8678  clrldi 4, 4, 32
  03d867c  lhz 4, 166(4)
  03d8680  cmpwi 4, 668
  03d8684  bf 2, 0x3d86b0
  03d8688  bt 6, 0x3d86ac
  03d868c  li 3, 255
  03d8690  bl 0xfc620
  03d8694  nop
  03d8698  clrlwi 3, 3, 31
  03d869c  cmpwi 3, 0
  03d86a0  bt 2, 0x3d86b0
  03d86a4  lis 3, 164
  03d86a8  lwz 3, -28512(3)
  03d86ac  addc 29, 3, 27
  03d86b0  lhz 3, 0(28)
  03d86b4  addic 28, 28, 2
  03d86b8  extsh 3, 3
  03d86bc  cmpwi 3, 0
  03d86c0  bf 0, 0x3d8660
  03d86c4  cmpwi 29, 0
  03d86c8  stw 29, 504(30)
  03d86cc  bt 2, 0x3d86f4
  03d86d0  lis 4, 61
  03d86d4  li 3, 13
  03d86d8  addi 4, 4, 29148
  03d86dc  stb 3, 32(31)
  03d86e0  lfs 1, 24(31)
  03d86e4  lfs 2, 92(4)
  03d86e8  fsubs 1, 1, 2
  03d86ec  stfs 1, 24(31)
  03d86f0  b 0x3d8aac
  03d86f4  ori 3, 31, 0
  03d86f8  bl 0xefb38
  03d86fc  nop
  03d8700  b 0x3d8aac
  03d8704  lwz 5, 24(31)
  03d8708  lis 4, 16544
  03d870c  srawi 6, 5, 31
  03d8710  srwi 7, 6, 1
  03d8714  xor 5, 7, 5
  03d8718  subc 5, 5, 6
  03d871c  cmpw 5, 4
  03d8720  bt 0, 0x3d8730
  03d8724  rlwinm 3, 3, 0, 26, 26
  03d8728  cmpwi 3, 0
  03d872c  bt 2, 0x3d8aac
  03d8730  cmpwi 29, 255
  03d8734  bf 2, 0x3d8740
  03d8738  li 29, 0
  03d873c  b 0x3d87b8
  03d8740  lis 3, 165
  03d8744  rlwinm 4, 29, 2, 22, 29
  03d8748  addic 3, 3, -28284
  03d874c  li 29, 0
  03d8750  lwzx 28, 3, 4
  03d8754  lis 3, 164
  03d8758  lhz 27, 0(28)
  03d875c  cmpwi 1, 29, 0
  03d8760  rlwinm 27, 27, 8, 9, 23
  03d8764  lwz 3, -28512(3)
  03d8768  addc 4, 3, 27
  03d876c  clrldi 4, 4, 32
  03d8770  lhz 4, 166(4)
  03d8774  cmpwi 4, 668
  03d8778  bf 2, 0x3d87a4
  03d877c  bt 6, 0x3d87a0
  03d8780  li 3, 255
  03d8784  bl 0xfc620
  03d8788  nop
  03d878c  clrlwi 3, 3, 31
  03d8790  cmpwi 3, 0
  03d8794  bt 2, 0x3d87a4
  03d8798  lis 3, 164
  03d879c  lwz 3, -28512(3)
  03d87a0  addc 29, 3, 27
  03d87a4  lhz 3, 0(28)
  03d87a8  addic 28, 28, 2
  03d87ac  extsh 3, 3
  03d87b0  cmpwi 3, 0
  03d87b4  bf 0, 0x3d8754
  03d87b8  cmpwi 29, 0
  03d87bc  stw 29, 504(30)
  03d87c0  bt 2, 0x3d87e8
  03d87c4  lis 4, 61
  03d87c8  li 3, 13
  03d87cc  addi 4, 4, 29148
  03d87d0  stb 3, 32(31)
  03d87d4  lfs 1, 24(31)
  03d87d8  lfs 2, 92(4)
  03d87dc  fsubs 1, 1, 2
  03d87e0  stfs 1, 24(31)
  03d87e4  b 0x3d8aac
  03d87e8  ori 3, 31, 0
  03d87ec  bl 0xefb38
  03d87f0  nop
  03d87f4  b 0x3d8aac
  03d87f8  lwz 3, 504(30)
  03d87fc  lbz 4, 32(3)
  03d8800  cmpwi 4, 128
  03d8804  bt 0, 0x3d8818
  03d8808  ori 3, 31, 0
  03d880c  bl 0xefb38
  03d8810  nop
  03d8814  b 0x3d8aac
  03d8818  lbz 4, 188(3)
  03d881c  cmpwi 4, 0
  03d8820  bf 2, 0x3d8aac
  03d8824  lis 4, 61
  03d8828  vspltisw 2, -1
  03d882c  li 6, 96
  03d8830  addi 4, 4, 29148
  03d8834  lis 5, 114
  03d8838  li 7, -3056
  03d883c  vslw 2, 2, 2
  03d8840  lvlx 3, 6, 4
  03d8844  vspltw 3, 3, 0
  03d8848  lvlx 4, 7, 5
  03d884c  li 5, 188
  03d8850  vmaddfp 2, 4, 3, 2
  03d8854  lis 6, 133
  03d8858  lis 7, 114
  03d885c  lis 8, 133
  03d8860  vctsxs 2, 2, 0
  03d8864  vspltb 2, 2, 3
  03d8868  stvebx 2, 5, 3
  03d886c  lwz 3, 504(30)
  03d8870  lis 5, 115
  03d8874  lfs 1, 16(3)
  03d8878  stfs 1, 16(31)
  03d887c  lfs 1, 20(3)
  03d8880  stfs 1, 20(31)
  03d8884  lfs 1, 24(3)
  03d8888  stfs 1, 24(31)
  03d888c  lfs 2, 28(3)
  03d8890  stfs 2, 28(31)
  03d8894  lfs 2, 8(4)
  03d8898  fadds 1, 1, 2
  03d889c  addic 5, 5, 22784
  03d88a0  addic 3, 30, 256
  03d88a4  stfs 1, 24(31)
  03d88a8  lfs 1, 13928(6)
  03d88ac  lfs 2, -3052(7)
  03d88b0  lfs 3, 432(30)
  03d88b4  fmuls 1, 1, 2
  03d88b8  lfs 4, 436(30)
  03d88bc  stfs 1, 280(30)
  03d88c0  lfs 1, 13932(8)
  03d88c4  fmuls 1, 1, 2
  03d88c8  stfs 1, 284(30)
  03d88cc  lfs 1, 16(31)
  03d88d0  lfs 2, 20(31)
  03d88d4  fsubs 1, 3, 1
  03d88d8  fsubs 2, 4, 2
  03d88dc  fabs 3, 1
  03d88e0  fabs 5, 2
  03d88e4  stfs 1, 160(1)
  03d88e8  stfs 2, 164(1)
  03d88ec  fsubs 1, 3, 5
  03d88f0  stfs 1, 168(1)
  03d88f4  lwz 6, 160(1)
  03d88f8  lfs 4, 4(4)
  03d88fc  lfs 1, 160(1)
  03d8900  lwz 4, 164(1)
  03d8904  lfs 2, 164(1)
  03d8908  fabs 1, 1
  03d890c  lwz 7, 168(1)
  03d8910  rlwinm 4, 4, 3, 29, 29
  03d8914  lfs 6, 168(1)
  03d8918  fabs 2, 2
  03d891c  rlwimi 4, 7, 2, 30, 30
  03d8920  fsub 7, 6, 4
  03d8924  fsub 6, 6, 4
  03d8928  rlwimi 4, 6, 4, 28, 28
  03d892c  ori 6, 5, 0
  03d8930  rlwimi 6, 4, 2, 26, 28
  03d8934  slwi 4, 4, 2
  03d8938  clrldi 6, 6, 32
  03d893c  fsel 5, 7, 1, 5
  03d8940  lfsx 1, 5, 4
  03d8944  fsel 3, 6, 2, 3
  03d8948  lfs 2, 4(6)
  03d894c  fcmpu 0, 5, 4
  03d8950  bt 1, 0x3d8958
  03d8954  b 0x3d8a78
  03d8958  fsubs 6, 3, 5
  03d895c  fadds 3, 3, 5
  03d8960  addic 4, 1, 16
  03d8964  li 7, 2
  03d8968  addic 6, 4, 208
  03d896c  addic 5, 4, 192
  03d8970  mtctr 7
  03d8974  fdivs 3, 6, 3
  03d8978  fmuls 5, 3, 3
  03d897c  stfs 3, 220(1)
  03d8980  stfs 3, 212(1)
  03d8984  stfs 3, 216(1)
  03d8988  stfs 3, 208(1)
  03d898c  lfs 7, 220(1)
  03d8990  lfs 8, 212(1)
  03d8994  lfs 9, 216(1)
  03d8998  fmuls 6, 5, 5
  03d899c  fmuls 8, 8, 5
  03d89a0  fmuls 7, 7, 6
  03d89a4  fmuls 3, 6, 6
  03d89a8  fmuls 6, 9, 6
  03d89ac  stfs 8, 212(1)
  03d89b0  fmuls 5, 7, 5
  03d89b4  stfs 6, 216(1)
  03d89b8  stfs 5, 220(1)
  03d89bc  lfs 5, 192(4)
  03d89c0  fmuls 5, 5, 3
  03d89c4  stfs 5, 208(4)
  03d89c8  lfs 5, 4(5)
  03d89cc  addic 5, 5, 8
  03d89d0  fmuls 5, 5, 3
  03d89d4  addic 4, 4, 8
  03d89d8  stfs 5, 4(6)
  03d89dc  addic 6, 6, 8
  03d89e0  bdnz 0x3d89bc
  03d89e4  li 6, 4
  03d89e8  ori 4, 1, 0
  03d89ec  mtctr 6
  03d89f0  lis 5, 115
  03d89f4  addic 6, 4, 208
  03d89f8  addic 5, 5, 22752
  03d89fc  ori 8, 6, 0
  03d8a00  lfs 3, 208(4)
  03d8a04  lfs 5, 0(5)
  03d8a08  fmuls 3, 3, 5
  03d8a0c  lfs 5, 4(5)
  03d8a10  addic 5, 5, 8
  03d8a14  stfs 3, 208(4)
  03d8a18  lfs 3, 4(6)
  03d8a1c  addic 4, 4, 8
  03d8a20  fmuls 3, 3, 5
  03d8a24  stfs 3, 4(6)
  03d8a28  addic 6, 6, 8
  03d8a2c  bdnz 0x3d8a00
  03d8a30  ori 4, 1, 0
  03d8a34  mtctr 7
  03d8a38  lfs 3, 208(4)
  03d8a3c  fadds 3, 4, 3
  03d8a40  addic 4, 4, 16
  03d8a44  lfs 4, 4(8)
  03d8a48  lfs 5, 8(8)
  03d8a4c  lfs 6, 12(8)
  03d8a50  addic 8, 8, 16
  03d8a54  fadds 3, 3, 4
  03d8a58  fadds 4, 3, 5
  03d8a5c  fadds 4, 4, 6
  03d8a60  bdnz 0x3d8a38
  03d8a64  lis 4, 61
  03d8a68  addi 4, 4, 29148
  03d8a6c  lfs 3, 56(4)
  03d8a70  fadds 4, 4, 3
  03d8a74  fmadds 4, 4, 1, 2
  03d8a78  ori 4, 3, 0
  03d8a7c  ori 3, 31, 0
  03d8a80  fmr 1, 4
  03d8a84  li 6, 4
  03d8a88  li 7, 1
  03d8a8c  li 8, 0
  03d8a90  bl 0x10ad80
  03d8a94  nop
  03d8a98  lhz 4, 52(31)
  03d8a9c  li 3, 12
  03d8aa0  ori 4, 4, 4096
  03d8aa4  stb 3, 32(31)
  03d8aa8  sth 4, 52(31)
  03d8aac  ld 0, 480(1)
  03d8ab0  mtlr 0
  03d8ab4  lfd 24, 400(1)
  03d8ab8  lfd 25, 408(1)
  03d8abc  lfd 26, 416(1)
  03d8ac0  lfd 27, 424(1)
  03d8ac4  lfd 28, 432(1)
  03d8ac8  lfd 29, 440(1)
  03d8acc  lfd 30, 448(1)
  03d8ad0  lfd 31, 456(1)
  03d8ad4  ld 27, 360(1)
  03d8ad8  ld 28, 368(1)
  03d8adc  ld 29, 376(1)
  03d8ae0  ld 30, 384(1)
  03d8ae4  ld 31, 392(1)
  03d8ae8  addi 1, 1, 464
  03d8aec  blr
