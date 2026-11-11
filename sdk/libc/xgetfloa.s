# sdk/libc/xgetfloa.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Getfloat:   # 0x5d6d30, 0x1018 bytes
  05d6d30  mfcr 12
  05d6d34  stdu 1, -272(1)
  05d6d38  std 22, 192(1)
  05d6d3c  std 30, 256(1)
  05d6d40  std 23, 200(1)
  05d6d44  std 24, 208(1)
  05d6d48  std 25, 216(1)
  05d6d4c  std 26, 224(1)
  05d6d50  std 27, 232(1)
  05d6d54  std 28, 240(1)
  05d6d58  std 29, 248(1)
  05d6d5c  std 31, 264(1)
  05d6d60  mr 30, 3
  05d6d64  mr 22, 3
  05d6d68  stw 12, 280(1)
  05d6d6c  mflr 0
  05d6d70  std 0, 288(1)
  05d6d74  lwz 9, 24(3)
  05d6d78  cmpwi 7, 9, 0
  05d6d7c  bf 29, 0x5d70c0
  05d6d80  addi 0, 9, -1
  05d6d84  cmpwi 7, 0, 0
  05d6d88  stw 0, 20(3)
  05d6d8c  bt 28, 0x5d7754
  05d6d90  lwz 9, 16(30)
  05d6d94  li 4, 0
  05d6d98  lwz 11, 0(30)
  05d6d9c  li 5, 1
  05d6da0  addi 9, 9, 1
  05d6da4  lwz 3, 4(30)
  05d6da8  stw 9, 16(30)
  05d6dac  lwz 0, 0(11)
  05d6db0  std 2, 40(1)
  05d6db4  mtctr 0
  05d6db8  lwz 2, 4(11)
  05d6dbc  bctrl
  05d6dc0  ld 2, 40(1)
  05d6dc4  cmpwi 7, 3, 43
  05d6dc8  mr 31, 3
  05d6dcc  bt 30, 0x5d6f4c
  05d6dd0  cmpwi 7, 3, 45
  05d6dd4  addi 25, 1, 120
  05d6dd8  bt 30, 0x5d6f4c
  05d6ddc  cmpwi 7, 31, 48
  05d6de0  bt 30, 0x5d6e70
  05d6de4  cmpwi 7, 31, 110
  05d6de8  bt 30, 0x5d6fac
  05d6dec  cmpwi 7, 31, 78
  05d6df0  bt 30, 0x5d6fac
  05d6df4  cmpwi 7, 31, 105
  05d6df8  bt 30, 0x5d77c8
  05d6dfc  cmpwi 7, 31, 73
  05d6e00  bt 30, 0x5d77c8
  05d6e04  li 26, 0
  05d6e08  li 23, 10
  05d6e0c  cmpwi 7, 31, 48
  05d6e10  bf- 30, 0x5d7118
  05d6e14  lwz 9, 20(30)
  05d6e18  li 4, 0
  05d6e1c  li 5, 1
  05d6e20  addi 9, 9, -1
  05d6e24  cmpwi 7, 9, 0
  05d6e28  stw 9, 20(30)
  05d6e2c  bt 28, 0x5d76ac
  05d6e30  lwz 9, 16(30)
  05d6e34  lwz 11, 0(30)
  05d6e38  addi 9, 9, 1
  05d6e3c  lwz 3, 4(30)
  05d6e40  stw 9, 16(30)
  05d6e44  lwz 0, 0(11)
  05d6e48  std 2, 40(1)
  05d6e4c  mtctr 0
  05d6e50  lwz 2, 4(11)
  05d6e54  bctrl
  05d6e58  ld 2, 40(1)
  05d6e5c  cmpwi 7, 3, 48
  05d6e60  mr 31, 3
  05d6e64  bt+ 30, 0x5d6e14
  05d6e68  li 26, 1
  05d6e6c  b 0x5d76c0
  05d6e70  lwz 9, 20(30)
  05d6e74  addi 9, 9, -1
  05d6e78  cmpwi 7, 9, 0
  05d6e7c  stw 9, 20(30)
  05d6e80  bt 28, 0x5d7100
  05d6e84  lwz 9, 16(30)
  05d6e88  li 4, 0
  05d6e8c  lwz 11, 0(30)
  05d6e90  li 5, 1
  05d6e94  addi 9, 9, 1
  05d6e98  lwz 3, 4(30)
  05d6e9c  stw 9, 16(30)
  05d6ea0  lwz 0, 0(11)
  05d6ea4  std 2, 40(1)
  05d6ea8  mtctr 0
  05d6eac  lwz 2, 4(11)
  05d6eb0  bctrl
  05d6eb4  ld 2, 40(1)
  05d6eb8  cmpwi 7, 3, 120
  05d6ebc  mr 31, 3
  05d6ec0  bt 30, 0x5d6ed4
  05d6ec4  cmpwi 7, 3, 88
  05d6ec8  li 26, 1
  05d6ecc  li 23, 10
  05d6ed0  bf 30, 0x5d6e0c
  05d6ed4  addi 9, 25, 1
  05d6ed8  clrldi 10, 25, 32
  05d6edc  clrldi 8, 9, 32
  05d6ee0  li 0, 48
  05d6ee4  li 11, 120
  05d6ee8  addi 25, 9, 1
  05d6eec  stb 0, 0(10)
  05d6ef0  stb 11, 0(8)
  05d6ef4  lwz 9, 20(30)
  05d6ef8  addi 9, 9, -1
  05d6efc  cmpwi 7, 9, 0
  05d6f00  stw 9, 20(30)
  05d6f04  bt 28, 0x5d7ab4
  05d6f08  lwz 9, 16(30)
  05d6f0c  li 4, 0
  05d6f10  lwz 11, 0(30)
  05d6f14  li 5, 1
  05d6f18  addi 9, 9, 1
  05d6f1c  lwz 3, 4(30)
  05d6f20  li 26, 0
  05d6f24  stw 9, 16(30)
  05d6f28  li 23, 22
  05d6f2c  lwz 0, 0(11)
  05d6f30  std 2, 40(1)
  05d6f34  mtctr 0
  05d6f38  lwz 2, 4(11)
  05d6f3c  bctrl
  05d6f40  ld 2, 40(1)
  05d6f44  mr 31, 3
  05d6f48  b 0x5d6e0c
  05d6f4c  lwz 9, 20(30)
  05d6f50  stb 31, 120(1)
  05d6f54  addi 9, 9, -1
  05d6f58  cmpwi 7, 9, 0
  05d6f5c  stw 9, 20(30)
  05d6f60  bt 28, 0x5d776c
  05d6f64  lwz 9, 16(30)
  05d6f68  li 4, 0
  05d6f6c  lwz 11, 0(30)
  05d6f70  li 5, 1
  05d6f74  addi 9, 9, 1
  05d6f78  lwz 3, 4(30)
  05d6f7c  addi 25, 1, 121
  05d6f80  stw 9, 16(30)
  05d6f84  lwz 0, 0(11)
  05d6f88  std 2, 40(1)
  05d6f8c  mtctr 0
  05d6f90  lwz 2, 4(11)
  05d6f94  bctrl
  05d6f98  ld 2, 40(1)
  05d6f9c  mr 31, 3
  05d6fa0  cmpwi 7, 31, 48
  05d6fa4  bf 30, 0x5d6de4
  05d6fa8  b 0x5d6e70
  05d6fac  clrldi 11, 25, 32
  05d6fb0  li 0, 110
  05d6fb4  addi 25, 25, 1
  05d6fb8  stb 0, 0(11)
  05d6fbc  lwz 9, 20(30)
  05d6fc0  addi 9, 9, -1
  05d6fc4  cmpwi 7, 9, 0
  05d6fc8  stw 9, 20(30)
  05d6fcc  bt 28, 0x5d70e0
  05d6fd0  lwz 9, 16(30)
  05d6fd4  li 4, 0
  05d6fd8  lwz 11, 0(30)
  05d6fdc  li 5, 1
  05d6fe0  addi 9, 9, 1
  05d6fe4  lwz 3, 4(30)
  05d6fe8  stw 9, 16(30)
  05d6fec  lwz 0, 0(11)
  05d6ff0  std 2, 40(1)
  05d6ff4  mtctr 0
  05d6ff8  lwz 2, 4(11)
  05d6ffc  bctrl
  05d7000  ld 2, 40(1)
  05d7004  cmpwi 7, 3, 97
  05d7008  mr 31, 3
  05d700c  bt 30, 0x5d7950
  05d7010  cmpwi 7, 3, 65
  05d7014  bt 30, 0x5d7950
  05d7018  cmpwi 7, 31, -1
  05d701c  bt- 30, 0x5d7d40
  05d7020  lwz 9, 16(30)
  05d7024  extsw 4, 31
  05d7028  lwz 11, 0(30)
  05d702c  li 5, 0
  05d7030  addi 9, 9, -1
  05d7034  lwz 3, 4(30)
  05d7038  li 26, 0
  05d703c  stw 9, 16(30)
  05d7040  lwz 0, 0(11)
  05d7044  std 2, 40(1)
  05d7048  mtctr 0
  05d704c  lwz 2, 4(11)
  05d7050  bctrl
  05d7054  ld 2, 40(1)
  05d7058  extsb 29, 26
  05d705c  li 24, 0
  05d7060  li 23, 0
  05d7064  cmpwi 7, 29, 0
  05d7068  bf 30, 0x5d736c
  05d706c  addi 0, 1, 120
  05d7070  cmpw 7, 25, 0
  05d7074  bt 30, 0x5d70d0
  05d7078  li 3, 0
  05d707c  ld 0, 288(1)
  05d7080  extsw 3, 3
  05d7084  lwz 12, 280(1)
  05d7088  ld 22, 192(1)
  05d708c  mtlr 0
  05d7090  ld 23, 200(1)
  05d7094  mtocrf 8, 12
  05d7098  ld 24, 208(1)
  05d709c  ld 25, 216(1)
  05d70a0  ld 26, 224(1)
  05d70a4  ld 27, 232(1)
  05d70a8  ld 28, 240(1)
  05d70ac  ld 29, 248(1)
  05d70b0  ld 30, 256(1)
  05d70b4  ld 31, 264(1)
  05d70b8  addi 1, 1, 272
  05d70bc  blr
  05d70c0  lis 0, 32767
  05d70c4  ori 0, 0, 65534
  05d70c8  stw 0, 20(3)
  05d70cc  b 0x5d6d90
  05d70d0  cmpwi 7, 31, -1
  05d70d4  li 3, -1
  05d70d8  bf+ 30, 0x5d7078
  05d70dc  b 0x5d707c
  05d70e0  lwz 9, 16(30)
  05d70e4  addi 9, 9, 1
  05d70e8  stw 9, 16(30)
  05d70ec  addi 9, 9, -1
  05d70f0  li 26, 0
  05d70f4  li 31, -1
  05d70f8  stw 9, 16(30)
  05d70fc  b 0x5d7058
  05d7100  lwz 9, 16(30)
  05d7104  li 26, 1
  05d7108  li 23, 10
  05d710c  addi 9, 9, 1
  05d7110  stw 9, 16(30)
  05d7114  li 31, -1
  05d7118  extsb 0, 26
  05d711c  cmpwi 0, 0
  05d7120  bf- 2, 0x5d76c0
  05d7124  cmpwi 7, 31, -1
  05d7128  li 27, 0
  05d712c  li 24, 0
  05d7130  bt 30, 0x5d71d0
  05d7134  li 27, 0
  05d7138  lwz 28, -24080(2)
  05d713c  li 24, 0
  05d7140  clrldi 29, 23, 32
  05d7144  extsw 4, 31
  05d7148  mr 5, 29
  05d714c  mr 3, 28
  05d7150  bl 0x5c5984
  05d7154  nop
  05d7158  clrldi 9, 25, 32
  05d715c  cmpwi 7, 3, 0
  05d7160  cmpwi 6, 27, 35
  05d7164  bt 30, 0x5d71d0
  05d7168  bt 25, 0x5d73f4
  05d716c  stb 31, 0(9)
  05d7170  lwz 9, 20(30)
  05d7174  addi 25, 25, 1
  05d7178  addi 27, 27, 1
  05d717c  addi 9, 9, -1
  05d7180  li 4, 0
  05d7184  cmpwi 7, 9, 0
  05d7188  li 5, 1
  05d718c  li 26, 1
  05d7190  stw 9, 20(30)
  05d7194  bt 28, 0x5d7418
  05d7198  lwz 9, 16(30)
  05d719c  lwz 11, 0(30)
  05d71a0  addi 9, 9, 1
  05d71a4  lwz 3, 4(30)
  05d71a8  stw 9, 16(30)
  05d71ac  lwz 9, 0(11)
  05d71b0  std 2, 40(1)
  05d71b4  mtctr 9
  05d71b8  lwz 2, 4(11)
  05d71bc  bctrl
  05d71c0  ld 2, 40(1)
  05d71c4  cmpwi 7, 3, -1
  05d71c8  mr 31, 3
  05d71cc  bf+ 30, 0x5d7144
  05d71d0  lwz 11, -24076(2)
  05d71d4  lwz 9, 44(11)
  05d71d8  lbz 0, 0(9)
  05d71dc  extsb 0, 0
  05d71e0  cmpw 7, 0, 31
  05d71e4  bt 30, 0x5d7444
  05d71e8  cmpwi 7, 27, 0
  05d71ec  bf 30, 0x5d7270
  05d71f0  cmpwi 7, 31, 48
  05d71f4  bf 30, 0x5d7254
  05d71f8  lwz 9, 20(30)
  05d71fc  li 4, 0
  05d7200  li 5, 1
  05d7204  addi 9, 9, -1
  05d7208  addi 24, 24, -1
  05d720c  cmpwi 7, 9, 0
  05d7210  stw 9, 20(30)
  05d7214  bt 28, 0x5d76d4
  05d7218  lwz 9, 16(30)
  05d721c  lwz 11, 0(30)
  05d7220  addi 9, 9, 1
  05d7224  lwz 3, 4(30)
  05d7228  stw 9, 16(30)
  05d722c  lwz 0, 0(11)
  05d7230  std 2, 40(1)
  05d7234  mtctr 0
  05d7238  lwz 2, 4(11)
  05d723c  bctrl
  05d7240  ld 2, 40(1)
  05d7244  cmpwi 7, 3, 48
  05d7248  mr 31, 3
  05d724c  bt+ 30, 0x5d71f8
  05d7250  li 26, 1
  05d7254  cmpwi 7, 24, 0
  05d7258  bf 28, 0x5d7270
  05d725c  clrldi 9, 25, 32
  05d7260  li 0, 48
  05d7264  addi 25, 25, 1
  05d7268  addi 24, 24, 1
  05d726c  stb 0, 0(9)
  05d7270  cmpwi 4, 31, -1
  05d7274  bt 18, 0x5d77b8
  05d7278  lwz 28, -24080(2)
  05d727c  clrldi 29, 23, 32
  05d7280  extsw 4, 31
  05d7284  mr 5, 29
  05d7288  mr 3, 28
  05d728c  bl 0x5c5984
  05d7290  nop
  05d7294  li 4, 0
  05d7298  cmpwi 7, 3, 0
  05d729c  li 5, 1
  05d72a0  clrldi 9, 25, 32
  05d72a4  cmpwi 6, 27, 35
  05d72a8  bt 30, 0x5d77b8
  05d72ac  bt 25, 0x5d72bc
  05d72b0  addi 25, 25, 1
  05d72b4  addi 27, 27, 1
  05d72b8  stb 31, 0(9)
  05d72bc  lwz 9, 20(30)
  05d72c0  li 26, 1
  05d72c4  addi 9, 9, -1
  05d72c8  cmpwi 7, 9, 0
  05d72cc  stw 9, 20(30)
  05d72d0  bt 28, 0x5d7694
  05d72d4  lwz 9, 16(30)
  05d72d8  lwz 11, 0(30)
  05d72dc  addi 9, 9, 1
  05d72e0  lwz 3, 4(30)
  05d72e4  stw 9, 16(30)
  05d72e8  lwz 0, 0(11)
  05d72ec  std 2, 40(1)
  05d72f0  mtctr 0
  05d72f4  lwz 2, 4(11)
  05d72f8  bctrl
  05d72fc  ld 2, 40(1)
  05d7300  cmpwi 4, 3, -1
  05d7304  mr 31, 3
  05d7308  bf+ 18, 0x5d7280
  05d730c  cmpwi 7, 23, 10
  05d7310  bt 30, 0x5d74a0
  05d7314  cmpwi 7, 31, 112
  05d7318  bt 30, 0x5d74b8
  05d731c  cmpwi 7, 31, 80
  05d7320  extsb 29, 26
  05d7324  cmpwi 4, 31, -1
  05d7328  bt 30, 0x5d74b8
  05d732c  bt 18, 0x5d7684
  05d7330  lwz 9, 16(30)
  05d7334  extsw 4, 31
  05d7338  lwz 11, 0(30)
  05d733c  li 5, 0
  05d7340  addi 9, 9, -1
  05d7344  lwz 3, 4(30)
  05d7348  stw 9, 16(30)
  05d734c  lwz 0, 0(11)
  05d7350  std 2, 40(1)
  05d7354  mtctr 0
  05d7358  lwz 2, 4(11)
  05d735c  bctrl
  05d7360  ld 2, 40(1)
  05d7364  cmpwi 7, 29, 0
  05d7368  bt 30, 0x5d706c
  05d736c  clrldi 11, 25, 32
  05d7370  li 0, 0
  05d7374  li 3, 1
  05d7378  stb 0, 0(11)
  05d737c  lbz 9, 28(30)
  05d7380  cmpwi 7, 9, 0
  05d7384  bf 30, 0x5d707c
  05d7388  cmpwi 7, 23, 10
  05d738c  bt 29, 0x5d76fc
  05d7390  extsw 5, 24
  05d7394  addi 3, 1, 120
  05d7398  li 4, 0
  05d739c  bl 0x5da554
  05d73a0  nop
  05d73a4  stfd 1, 112(1)
  05d73a8  lbz 0, 29(30)
  05d73ac  li 9, 1
  05d73b0  extsb 0, 0
  05d73b4  stb 9, 30(30)
  05d73b8  cmpwi 7, 0, 108
  05d73bc  bt 30, 0x5d772c
  05d73c0  cmpwi 7, 0, 76
  05d73c4  bt 30, 0x5d772c
  05d73c8  mr 10, 22
  05d73cc  lfd 0, 112(1)
  05d73d0  frsp 0, 0
  05d73d4  li 3, 1
  05d73d8  lwzu 11, 8(10)
  05d73dc  clrldi 8, 11, 32
  05d73e0  addi 11, 11, 8
  05d73e4  stw 11, 0(10)
  05d73e8  lwz 9, 4(8)
  05d73ec  stfs 0, 0(9)
  05d73f0  b 0x5d707c
  05d73f4  lwz 9, 20(30)
  05d73f8  addi 24, 24, 1
  05d73fc  li 4, 0
  05d7400  addi 9, 9, -1
  05d7404  li 5, 1
  05d7408  cmpwi 7, 9, 0
  05d740c  li 26, 1
  05d7410  stw 9, 20(30)
  05d7414  bf 28, 0x5d7198
  05d7418  lwz 11, -24076(2)
  05d741c  li 31, -1
  05d7420  lwz 9, 16(30)
  05d7424  li 26, 1
  05d7428  addi 9, 9, 1
  05d742c  stw 9, 16(30)
  05d7430  lwz 9, 44(11)
  05d7434  lbz 0, 0(9)
  05d7438  extsb 0, 0
  05d743c  cmpw 7, 0, 31
  05d7440  bf 30, 0x5d71e8
  05d7444  clrldi 9, 25, 32
  05d7448  addi 25, 25, 1
  05d744c  stb 31, 0(9)
  05d7450  lwz 11, 20(30)
  05d7454  addi 11, 11, -1
  05d7458  cmpwi 7, 11, 0
  05d745c  stw 11, 20(30)
  05d7460  bt 28, 0x5d7a64
  05d7464  lwz 9, 16(30)
  05d7468  li 4, 0
  05d746c  lwz 11, 0(30)
  05d7470  li 5, 1
  05d7474  addi 9, 9, 1
  05d7478  lwz 3, 4(30)
  05d747c  stw 9, 16(30)
  05d7480  lwz 0, 0(11)
  05d7484  std 2, 40(1)
  05d7488  mtctr 0
  05d748c  lwz 2, 4(11)
  05d7490  bctrl
  05d7494  ld 2, 40(1)
  05d7498  mr 31, 3
  05d749c  b 0x5d71e8
  05d74a0  cmpwi 7, 31, 101
  05d74a4  bt 30, 0x5d74b8
  05d74a8  cmpwi 7, 31, 69
  05d74ac  extsb 29, 26
  05d74b0  cmpwi 4, 31, -1
  05d74b4  bf 30, 0x5d732c
  05d74b8  clrldi 9, 25, 32
  05d74bc  addi 25, 25, 1
  05d74c0  stb 31, 0(9)
  05d74c4  lwz 11, 20(30)
  05d74c8  addi 11, 11, -1
  05d74cc  cmpwi 7, 11, 0
  05d74d0  stw 11, 20(30)
  05d74d4  bt 28, 0x5d77a4
  05d74d8  lwz 9, 16(30)
  05d74dc  li 4, 0
  05d74e0  lwz 11, 0(30)
  05d74e4  li 5, 1
  05d74e8  addi 9, 9, 1
  05d74ec  lwz 3, 4(30)
  05d74f0  stw 9, 16(30)
  05d74f4  lwz 0, 0(11)
  05d74f8  std 2, 40(1)
  05d74fc  mtctr 0
  05d7500  lwz 2, 4(11)
  05d7504  bctrl
  05d7508  ld 2, 40(1)
  05d750c  cmpwi 7, 3, 43
  05d7510  mr 31, 3
  05d7514  bt 30, 0x5d7784
  05d7518  cmpwi 7, 3, 45
  05d751c  bt 30, 0x5d7784
  05d7520  cmpwi 7, 31, 48
  05d7524  bf- 30, 0x5d75b8
  05d7528  lwz 9, 20(30)
  05d752c  li 4, 0
  05d7530  li 5, 1
  05d7534  addi 9, 9, -1
  05d7538  cmpwi 7, 9, 0
  05d753c  stw 9, 20(30)
  05d7540  bt 28, 0x5d7598
  05d7544  lwz 9, 16(30)
  05d7548  lwz 11, 0(30)
  05d754c  addi 9, 9, 1
  05d7550  lwz 3, 4(30)
  05d7554  stw 9, 16(30)
  05d7558  lwz 0, 0(11)
  05d755c  std 2, 40(1)
  05d7560  mtctr 0
  05d7564  lwz 2, 4(11)
  05d7568  bctrl
  05d756c  ld 2, 40(1)
  05d7570  cmpwi 7, 3, 48
  05d7574  mr 31, 3
  05d7578  bf- 30, 0x5d75a8
  05d757c  lwz 9, 20(30)
  05d7580  li 4, 0
  05d7584  li 5, 1
  05d7588  addi 9, 9, -1
  05d758c  cmpwi 7, 9, 0
  05d7590  stw 9, 20(30)
  05d7594  bf 28, 0x5d7544
  05d7598  lwz 9, 16(30)
  05d759c  li 31, -1
  05d75a0  addi 9, 9, 1
  05d75a4  stw 9, 16(30)
  05d75a8  clrldi 9, 25, 32
  05d75ac  li 0, 48
  05d75b0  addi 25, 25, 1
  05d75b4  stb 0, 0(9)
  05d75b8  li 29, 0
  05d75bc  lwz 28, -24084(2)
  05d75c0  lwz 0, 0(28)
  05d75c4  rlwinm 9, 31, 1, 23, 30
  05d75c8  li 4, 0
  05d75cc  add 9, 9, 0
  05d75d0  li 5, 1
  05d75d4  clrldi 9, 9, 32
  05d75d8  clrldi 11, 25, 32
  05d75dc  cmpwi 6, 29, 7
  05d75e0  lhz 0, 0(9)
  05d75e4  rlwinm 0, 0, 0, 26, 26
  05d75e8  cmpwi 7, 0, 0
  05d75ec  bt 30, 0x5d7678
  05d75f0  bt 25, 0x5d7600
  05d75f4  addi 25, 25, 1
  05d75f8  addi 29, 29, 1
  05d75fc  stb 31, 0(11)
  05d7600  lwz 9, 20(30)
  05d7604  li 31, -1
  05d7608  addi 9, 9, -1
  05d760c  cmpwi 7, 9, 0
  05d7610  stw 9, 20(30)
  05d7614  bt 28, 0x5d76ec
  05d7618  lwz 11, 0(30)
  05d761c  lwz 9, 16(30)
  05d7620  lwz 3, 4(30)
  05d7624  addi 9, 9, 1
  05d7628  stw 9, 16(30)
  05d762c  lwz 0, 0(11)
  05d7630  std 2, 40(1)
  05d7634  mtctr 0
  05d7638  lwz 2, 4(11)
  05d763c  bctrl
  05d7640  ld 2, 40(1)
  05d7644  lwz 0, 0(28)
  05d7648  mr 31, 3
  05d764c  li 4, 0
  05d7650  rlwinm 9, 31, 1, 23, 30
  05d7654  li 5, 1
  05d7658  add 9, 9, 0
  05d765c  clrldi 11, 25, 32
  05d7660  clrldi 9, 9, 32
  05d7664  cmpwi 6, 29, 7
  05d7668  lhz 0, 0(9)
  05d766c  rlwinm 0, 0, 0, 26, 26
  05d7670  cmpwi 7, 0, 0
  05d7674  bf 30, 0x5d75f0
  05d7678  cmpwi 4, 31, -1
  05d767c  li 29, 1
  05d7680  bf 18, 0x5d7330
  05d7684  lwz 9, 16(30)
  05d7688  addi 9, 9, -1
  05d768c  stw 9, 16(30)
  05d7690  b 0x5d7064
  05d7694  lwz 9, 16(30)
  05d7698  li 26, 1
  05d769c  li 31, -1
  05d76a0  addi 9, 9, 1
  05d76a4  stw 9, 16(30)
  05d76a8  b 0x5d730c
  05d76ac  lwz 9, 16(30)
  05d76b0  li 26, 1
  05d76b4  li 31, -1
  05d76b8  addi 9, 9, 1
  05d76bc  stw 9, 16(30)
  05d76c0  clrldi 9, 25, 32
  05d76c4  li 0, 48
  05d76c8  addi 25, 25, 1
  05d76cc  stb 0, 0(9)
  05d76d0  b 0x5d7124
  05d76d4  lwz 9, 16(30)
  05d76d8  li 26, 1
  05d76dc  li 31, -1
  05d76e0  addi 9, 9, 1
  05d76e4  stw 9, 16(30)
  05d76e8  b 0x5d7254
  05d76ec  lwz 9, 16(30)
  05d76f0  addi 9, 9, 1
  05d76f4  stw 9, 16(30)
  05d76f8  b 0x5d75c0
  05d76fc  addi 3, 1, 120
  05d7700  li 4, 0
  05d7704  li 5, 0
  05d7708  bl 0x5da554
  05d770c  nop
  05d7710  slwi 4, 24, 2
  05d7714  stfd 1, 112(1)
  05d7718  addi 3, 1, 112
  05d771c  extsw 4, 4
  05d7720  bl 0x5d8b80
  05d7724  nop
  05d7728  b 0x5d73a8
  05d772c  mr 10, 22
  05d7730  lfd 0, 112(1)
  05d7734  li 3, 1
  05d7738  lwzu 9, 8(10)
  05d773c  clrldi 8, 9, 32
  05d7740  addi 9, 9, 8
  05d7744  stw 9, 0(10)
  05d7748  lwz 11, 4(8)
  05d774c  stfd 0, 0(11)
  05d7750  b 0x5d707c
  05d7754  lwz 9, 16(3)
  05d7758  li 31, -1
  05d775c  addi 25, 1, 120
  05d7760  addi 9, 9, 1
  05d7764  stw 9, 16(3)
  05d7768  b 0x5d6e04
  05d776c  lwz 9, 16(30)
  05d7770  li 31, -1
  05d7774  addi 25, 1, 121
  05d7778  addi 9, 9, 1
  05d777c  stw 9, 16(30)
  05d7780  b 0x5d6e04
  05d7784  clrldi 9, 25, 32
  05d7788  addi 25, 25, 1
  05d778c  stb 31, 0(9)
  05d7790  lwz 11, 20(30)
  05d7794  addi 11, 11, -1
  05d7798  cmpwi 7, 11, 0
  05d779c  stw 11, 20(30)
  05d77a0  bf 28, 0x5d7a78
  05d77a4  lwz 9, 16(30)
  05d77a8  li 31, -1
  05d77ac  addi 9, 9, 1
  05d77b0  stw 9, 16(30)
  05d77b4  b 0x5d75b8
  05d77b8  extsb 29, 26
  05d77bc  cmpwi 29, 0
  05d77c0  bt+ 2, 0x5d732c
  05d77c4  b 0x5d730c
  05d77c8  clrldi 11, 25, 32
  05d77cc  li 0, 105
  05d77d0  addi 25, 25, 1
  05d77d4  stb 0, 0(11)
  05d77d8  lwz 9, 20(30)
  05d77dc  addi 9, 9, -1
  05d77e0  cmpwi 7, 9, 0
  05d77e4  stw 9, 20(30)
  05d77e8  bt 28, 0x5d70e0
  05d77ec  lwz 9, 16(30)
  05d77f0  li 4, 0
  05d77f4  lwz 11, 0(30)
  05d77f8  li 5, 1
  05d77fc  addi 9, 9, 1
  05d7800  lwz 3, 4(30)
  05d7804  stw 9, 16(30)
  05d7808  lwz 0, 0(11)
  05d780c  std 2, 40(1)
  05d7810  mtctr 0
  05d7814  lwz 2, 4(11)
  05d7818  bctrl
  05d781c  ld 2, 40(1)
  05d7820  cmpwi 7, 3, 110
  05d7824  mr 31, 3
  05d7828  bt 30, 0x5d7834
  05d782c  cmpwi 7, 3, 78
  05d7830  bf 30, 0x5d7018
  05d7834  clrldi 11, 25, 32
  05d7838  li 0, 110
  05d783c  addi 25, 25, 1
  05d7840  stb 0, 0(11)
  05d7844  lwz 9, 20(30)
  05d7848  addi 9, 9, -1
  05d784c  cmpwi 7, 9, 0
  05d7850  stw 9, 20(30)
  05d7854  bt 28, 0x5d70e0
  05d7858  lwz 9, 16(30)
  05d785c  li 4, 0
  05d7860  lwz 11, 0(30)
  05d7864  li 5, 1
  05d7868  addi 9, 9, 1
  05d786c  lwz 3, 4(30)
  05d7870  stw 9, 16(30)
  05d7874  lwz 0, 0(11)
  05d7878  std 2, 40(1)
  05d787c  mtctr 0
  05d7880  lwz 2, 4(11)
  05d7884  bctrl
  05d7888  ld 2, 40(1)
  05d788c  cmpwi 7, 3, 102
  05d7890  mr 31, 3
  05d7894  bt 30, 0x5d78a0
  05d7898  cmpwi 7, 3, 70
  05d789c  bf 30, 0x5d7018
  05d78a0  lwz 9, 20(30)
  05d78a4  addi 9, 9, -1
  05d78a8  cmpwi 7, 9, 0
  05d78ac  stw 9, 20(30)
  05d78b0  bt 28, 0x5d7ba8
  05d78b4  lwz 9, 16(30)
  05d78b8  li 4, 0
  05d78bc  lwz 11, 0(30)
  05d78c0  li 5, 1
  05d78c4  addi 9, 9, 1
  05d78c8  lwz 3, 4(30)
  05d78cc  stw 9, 16(30)
  05d78d0  lwz 0, 0(11)
  05d78d4  std 2, 40(1)
  05d78d8  mtctr 0
  05d78dc  lwz 2, 4(11)
  05d78e0  bctrl
  05d78e4  ld 2, 40(1)
  05d78e8  cmpwi 7, 3, 105
  05d78ec  mr 31, 3
  05d78f0  bt 30, 0x5d7bc4
  05d78f4  cmpwi 7, 3, 73
  05d78f8  bt 30, 0x5d7bc4
  05d78fc  cmpwi 7, 3, -1
  05d7900  bt- 30, 0x5d7d38
  05d7904  lwz 9, 16(30)
  05d7908  extsw 4, 31
  05d790c  lwz 11, 0(30)
  05d7910  li 5, 0
  05d7914  addi 9, 9, -1
  05d7918  lwz 3, 4(30)
  05d791c  stw 9, 16(30)
  05d7920  lwz 0, 0(11)
  05d7924  std 2, 40(1)
  05d7928  mtctr 0
  05d792c  lwz 2, 4(11)
  05d7930  bctrl
  05d7934  ld 2, 40(1)
  05d7938  clrldi 9, 25, 32
  05d793c  li 0, 102
  05d7940  addi 25, 25, 1
  05d7944  li 26, 1
  05d7948  stb 0, 0(9)
  05d794c  b 0x5d7058
  05d7950  clrldi 11, 25, 32
  05d7954  li 0, 97
  05d7958  addi 25, 25, 1
  05d795c  stb 0, 0(11)
  05d7960  lwz 9, 20(30)
  05d7964  addi 9, 9, -1
  05d7968  cmpwi 7, 9, 0
  05d796c  stw 9, 20(30)
  05d7970  bt 28, 0x5d70e0
  05d7974  lwz 9, 16(30)
  05d7978  li 4, 0
  05d797c  lwz 11, 0(30)
  05d7980  li 5, 1
  05d7984  addi 9, 9, 1
  05d7988  lwz 3, 4(30)
  05d798c  stw 9, 16(30)
  05d7990  lwz 0, 0(11)
  05d7994  std 2, 40(1)
  05d7998  mtctr 0
  05d799c  lwz 2, 4(11)
  05d79a0  bctrl
  05d79a4  ld 2, 40(1)
  05d79a8  cmpwi 7, 3, 110
  05d79ac  mr 31, 3
  05d79b0  bt 30, 0x5d79bc
  05d79b4  cmpwi 7, 3, 78
  05d79b8  bf 30, 0x5d7018
  05d79bc  lwz 9, 20(30)
  05d79c0  addi 9, 9, -1
  05d79c4  cmpwi 7, 9, 0
  05d79c8  stw 9, 20(30)
  05d79cc  bt 28, 0x5d7acc
  05d79d0  lwz 9, 16(30)
  05d79d4  li 4, 0
  05d79d8  lwz 11, 0(30)
  05d79dc  li 5, 1
  05d79e0  addi 9, 9, 1
  05d79e4  lwz 3, 4(30)
  05d79e8  stw 9, 16(30)
  05d79ec  lwz 0, 0(11)
  05d79f0  std 2, 40(1)
  05d79f4  mtctr 0
  05d79f8  lwz 2, 4(11)
  05d79fc  bctrl
  05d7a00  ld 2, 40(1)
  05d7a04  cmpwi 7, 3, 40
  05d7a08  mr 31, 3
  05d7a0c  bt 30, 0x5d7af0
  05d7a10  cmpwi 7, 3, -1
  05d7a14  bt 30, 0x5d7ae8
  05d7a18  lwz 9, 16(30)
  05d7a1c  extsw 4, 31
  05d7a20  lwz 11, 0(30)
  05d7a24  li 5, 0
  05d7a28  addi 9, 9, -1
  05d7a2c  lwz 3, 4(30)
  05d7a30  stw 9, 16(30)
  05d7a34  lwz 0, 0(11)
  05d7a38  std 2, 40(1)
  05d7a3c  mtctr 0
  05d7a40  lwz 2, 4(11)
  05d7a44  bctrl
  05d7a48  ld 2, 40(1)
  05d7a4c  clrldi 9, 25, 32
  05d7a50  li 0, 110
  05d7a54  addi 25, 25, 1
  05d7a58  li 26, 1
  05d7a5c  stb 0, 0(9)
  05d7a60  b 0x5d7058
  05d7a64  lwz 9, 16(30)
  05d7a68  li 31, -1
  05d7a6c  addi 9, 9, 1
  05d7a70  stw 9, 16(30)
  05d7a74  b 0x5d71e8
  05d7a78  lwz 9, 16(30)
  05d7a7c  li 4, 0
  05d7a80  lwz 11, 0(30)
  05d7a84  li 5, 1
  05d7a88  addi 9, 9, 1
  05d7a8c  lwz 3, 4(30)
  05d7a90  stw 9, 16(30)
  05d7a94  lwz 0, 0(11)
  05d7a98  std 2, 40(1)
  05d7a9c  mtctr 0
  05d7aa0  lwz 2, 4(11)
  05d7aa4  bctrl
  05d7aa8  ld 2, 40(1)
  05d7aac  mr 31, 3
  05d7ab0  b 0x5d7520
  05d7ab4  lwz 9, 16(30)
  05d7ab8  li 26, 0
  05d7abc  li 23, 22
  05d7ac0  addi 9, 9, 1
  05d7ac4  stw 9, 16(30)
  05d7ac8  b 0x5d7114
  05d7acc  lwz 9, 16(30)
  05d7ad0  li 31, -1
  05d7ad4  addi 9, 9, 1
  05d7ad8  stw 9, 16(30)
  05d7adc  addi 9, 9, -1
  05d7ae0  stw 9, 16(30)
  05d7ae4  b 0x5d7a4c
  05d7ae8  lwz 9, 16(30)
  05d7aec  b 0x5d7adc
  05d7af0  lwz 28, -24084(2)
  05d7af4  lwz 9, 20(30)
  05d7af8  li 4, 0
  05d7afc  li 5, 1
  05d7b00  addi 9, 9, -1
  05d7b04  li 3, -1
  05d7b08  cmpwi 7, 9, 0
  05d7b0c  li 0, -2
  05d7b10  stw 9, 20(30)
  05d7b14  bt 28, 0x5d7b98
  05d7b18  lwz 9, 16(30)
  05d7b1c  lwz 11, 0(30)
  05d7b20  addi 9, 9, 1
  05d7b24  lwz 3, 4(30)
  05d7b28  stw 9, 16(30)
  05d7b2c  lwz 0, 0(11)
  05d7b30  std 2, 40(1)
  05d7b34  mtctr 0
  05d7b38  lwz 2, 4(11)
  05d7b3c  bctrl
  05d7b40  ld 2, 40(1)
  05d7b44  slwi 0, 3, 1
  05d7b48  lwz 9, 0(28)
  05d7b4c  cmpwi 6, 3, 95
  05d7b50  add 9, 0, 9
  05d7b54  clrldi 9, 9, 32
  05d7b58  lhz 0, 0(9)
  05d7b5c  li 9, 562
  05d7b60  and 9, 0, 9
  05d7b64  cmpwi 7, 9, 0
  05d7b68  bf 30, 0x5d7af4
  05d7b6c  bt 26, 0x5d7af4
  05d7b70  cmpwi 7, 3, 41
  05d7b74  mr 31, 3
  05d7b78  bt 30, 0x5d7a4c
  05d7b7c  cmpwi 7, 3, -1
  05d7b80  bf 30, 0x5d7020
  05d7b84  lwz 9, 16(30)
  05d7b88  li 26, 0
  05d7b8c  addi 9, 9, -1
  05d7b90  stw 9, 16(30)
  05d7b94  b 0x5d7058
  05d7b98  lwz 9, 16(30)
  05d7b9c  addi 9, 9, 1
  05d7ba0  stw 9, 16(30)
  05d7ba4  b 0x5d7b48
  05d7ba8  lwz 9, 16(30)
  05d7bac  li 31, -1
  05d7bb0  addi 9, 9, 1
  05d7bb4  stw 9, 16(30)
  05d7bb8  addi 9, 9, -1
  05d7bbc  stw 9, 16(30)
  05d7bc0  b 0x5d7938
  05d7bc4  lwz 9, 20(30)
  05d7bc8  addi 9, 9, -1
  05d7bcc  cmpwi 7, 9, 0
  05d7bd0  stw 9, 20(30)
  05d7bd4  bt 28, 0x5d70e0
  05d7bd8  lwz 9, 16(30)
  05d7bdc  li 4, 0
  05d7be0  lwz 11, 0(30)
  05d7be4  li 5, 1
  05d7be8  addi 9, 9, 1
  05d7bec  lwz 3, 4(30)
  05d7bf0  stw 9, 16(30)
  05d7bf4  lwz 0, 0(11)
  05d7bf8  std 2, 40(1)
  05d7bfc  mtctr 0
  05d7c00  lwz 2, 4(11)
  05d7c04  bctrl
  05d7c08  ld 2, 40(1)
  05d7c0c  cmpwi 7, 3, 110
  05d7c10  mr 31, 3
  05d7c14  bt 30, 0x5d7c20
  05d7c18  cmpwi 7, 3, 78
  05d7c1c  bf 30, 0x5d7018
  05d7c20  lwz 9, 20(30)
  05d7c24  addi 9, 9, -1
  05d7c28  cmpwi 7, 9, 0
  05d7c2c  stw 9, 20(30)
  05d7c30  bt 28, 0x5d70e0
  05d7c34  lwz 9, 16(30)
  05d7c38  li 4, 0
  05d7c3c  lwz 11, 0(30)
  05d7c40  li 5, 1
  05d7c44  addi 9, 9, 1
  05d7c48  lwz 3, 4(30)
  05d7c4c  stw 9, 16(30)
  05d7c50  lwz 0, 0(11)
  05d7c54  std 2, 40(1)
  05d7c58  mtctr 0
  05d7c5c  lwz 2, 4(11)
  05d7c60  bctrl
  05d7c64  ld 2, 40(1)
  05d7c68  cmpwi 7, 3, 105
  05d7c6c  mr 31, 3
  05d7c70  bt 30, 0x5d7c7c
  05d7c74  cmpwi 7, 3, 73
  05d7c78  bf 30, 0x5d7018
  05d7c7c  lwz 9, 20(30)
  05d7c80  addi 9, 9, -1
  05d7c84  cmpwi 7, 9, 0
  05d7c88  stw 9, 20(30)
  05d7c8c  bt 28, 0x5d70e0
  05d7c90  lwz 9, 16(30)
  05d7c94  li 4, 0
  05d7c98  lwz 11, 0(30)
  05d7c9c  li 5, 1
  05d7ca0  addi 9, 9, 1
  05d7ca4  lwz 3, 4(30)
  05d7ca8  stw 9, 16(30)
  05d7cac  lwz 0, 0(11)
  05d7cb0  std 2, 40(1)
  05d7cb4  mtctr 0
  05d7cb8  lwz 2, 4(11)
  05d7cbc  bctrl
  05d7cc0  ld 2, 40(1)
  05d7cc4  cmpwi 7, 3, 116
  05d7cc8  mr 31, 3
  05d7ccc  bt 30, 0x5d7cd8
  05d7cd0  cmpwi 7, 3, 84
  05d7cd4  bf 30, 0x5d7018
  05d7cd8  lwz 9, 20(30)
  05d7cdc  addi 9, 9, -1
  05d7ce0  cmpwi 7, 9, 0
  05d7ce4  stw 9, 20(30)
  05d7ce8  bt 28, 0x5d70e0
  05d7cec  lwz 9, 16(30)
  05d7cf0  li 4, 0
  05d7cf4  lwz 11, 0(30)
  05d7cf8  li 5, 1
  05d7cfc  addi 9, 9, 1
  05d7d00  lwz 3, 4(30)
  05d7d04  stw 9, 16(30)
  05d7d08  lwz 0, 0(11)
  05d7d0c  std 2, 40(1)
  05d7d10  mtctr 0
  05d7d14  lwz 2, 4(11)
  05d7d18  bctrl
  05d7d1c  ld 2, 40(1)
  05d7d20  cmpwi 7, 3, 121
  05d7d24  mr 31, 3
  05d7d28  bt 30, 0x5d7938
  05d7d2c  cmpwi 7, 3, 89
  05d7d30  bf 30, 0x5d7018
  05d7d34  b 0x5d7938
  05d7d38  lwz 9, 16(30)
  05d7d3c  b 0x5d7bb8
  05d7d40  lwz 9, 16(30)
  05d7d44  b 0x5d70ec

FUN_005d7d48:   # 0x5d7d48, 0x678 bytes
  05d7d48  stdu 1, -224(1)
  05d7d4c  mflr 0
  05d7d50  std 24, 160(1)
  05d7d54  std 0, 240(1)
  05d7d58  lwz 9, 24(3)
  05d7d5c  mr 24, 3
  05d7d60  std 31, 216(1)
  05d7d64  cmpwi 7, 9, 0
  05d7d68  std 23, 152(1)
  05d7d6c  std 25, 168(1)
  05d7d70  std 26, 176(1)
  05d7d74  std 27, 184(1)
  05d7d78  std 28, 192(1)
  05d7d7c  std 29, 200(1)
  05d7d80  std 30, 208(1)
  05d7d84  mr 31, 3
  05d7d88  bf 29, 0x5d8210
  05d7d8c  addi 0, 9, -1
  05d7d90  cmpwi 7, 0, 0
  05d7d94  stw 0, 20(3)
  05d7d98  bt 28, 0x5d82e0
  05d7d9c  lwz 9, 16(31)
  05d7da0  li 4, 0
  05d7da4  lwz 11, 0(31)
  05d7da8  li 5, 1
  05d7dac  addi 9, 9, 1
  05d7db0  lwz 3, 4(31)
  05d7db4  stw 9, 16(31)
  05d7db8  lwz 0, 0(11)
  05d7dbc  std 2, 40(1)
  05d7dc0  mtctr 0
  05d7dc4  lwz 2, 4(11)
  05d7dc8  bctrl
  05d7dcc  ld 2, 40(1)
  05d7dd0  cmpwi 7, 3, 43
  05d7dd4  mr 30, 3
  05d7dd8  bt 30, 0x5d8180
  05d7ddc  cmpwi 7, 3, 45
  05d7de0  addi 25, 1, 112
  05d7de4  bt 30, 0x5d8180
  05d7de8  lwz 9, 12(31)
  05d7dec  lwz 23, -24072(2)
  05d7df0  mr 3, 23
  05d7df4  lbz 4, 0(9)
  05d7df8  extsb 4, 4
  05d7dfc  bl 0x5cc578
  05d7e00  nop
  05d7e04  cmpwi 6, 30, 48
  05d7e08  sub 3, 3, 23
  05d7e0c  extsw 3, 3
  05d7e10  add 3, 3, 23
  05d7e14  lbz 0, 8(3)
  05d7e18  extsb 27, 0
  05d7e1c  bt 26, 0x5d8108
  05d7e20  cmpwi 7, 27, 0
  05d7e24  li 29, 10
  05d7e28  li 26, 0
  05d7e2c  bf 30, 0x5d80dc
  05d7e30  bf 26, 0x5d80f8
  05d7e34  lwz 9, 20(31)
  05d7e38  addi 9, 9, -1
  05d7e3c  cmpwi 7, 9, 0
  05d7e40  stw 9, 20(31)
  05d7e44  bt 28, 0x5d7e90
  05d7e48  lwz 9, 16(31)
  05d7e4c  li 4, 0
  05d7e50  lwz 11, 0(31)
  05d7e54  li 5, 1
  05d7e58  addi 9, 9, 1
  05d7e5c  lwz 3, 4(31)
  05d7e60  stw 9, 16(31)
  05d7e64  lwz 0, 0(11)
  05d7e68  std 2, 40(1)
  05d7e6c  mtctr 0
  05d7e70  lwz 2, 4(11)
  05d7e74  bctrl
  05d7e78  ld 2, 40(1)
  05d7e7c  cmpwi 7, 3, 48
  05d7e80  mr 30, 3
  05d7e84  bt+ 30, 0x5d7e34
  05d7e88  li 26, 1
  05d7e8c  b 0x5d7ea4
  05d7e90  lwz 9, 16(31)
  05d7e94  li 30, -1
  05d7e98  li 26, 1
  05d7e9c  addi 9, 9, 1
  05d7ea0  stw 9, 16(31)
  05d7ea4  clrldi 9, 25, 32
  05d7ea8  li 0, 48
  05d7eac  addi 25, 25, 1
  05d7eb0  stb 0, 0(9)
  05d7eb4  cmpwi 7, 30, -1
  05d7eb8  clrldi 28, 29, 32
  05d7ebc  bt 30, 0x5d7f50
  05d7ec0  extsw 29, 30
  05d7ec4  addi 3, 23, 16
  05d7ec8  mr 4, 29
  05d7ecc  mr 5, 28
  05d7ed0  bl 0x5c5984
  05d7ed4  nop
  05d7ed8  cmpwi 7, 3, 0
  05d7edc  bt 30, 0x5d833c
  05d7ee0  addi 0, 1, 143
  05d7ee4  cmplw 7, 25, 0
  05d7ee8  bf 28, 0x5d7ef8
  05d7eec  clrldi 9, 25, 32
  05d7ef0  addi 25, 25, 1
  05d7ef4  stb 30, 0(9)
  05d7ef8  lwz 9, 20(31)
  05d7efc  addi 9, 9, -1
  05d7f00  cmpwi 7, 9, 0
  05d7f04  stw 9, 20(31)
  05d7f08  bt 28, 0x5d7f58
  05d7f0c  lwz 9, 16(31)
  05d7f10  li 4, 0
  05d7f14  lwz 11, 0(31)
  05d7f18  li 5, 1
  05d7f1c  addi 9, 9, 1
  05d7f20  lwz 3, 4(31)
  05d7f24  li 26, 1
  05d7f28  stw 9, 16(31)
  05d7f2c  lwz 0, 0(11)
  05d7f30  std 2, 40(1)
  05d7f34  mtctr 0
  05d7f38  lwz 2, 4(11)
  05d7f3c  bctrl
  05d7f40  ld 2, 40(1)
  05d7f44  cmpwi 7, 3, -1
  05d7f48  mr 30, 3
  05d7f4c  bf+ 30, 0x5d7ec0
  05d7f50  lwz 9, 16(31)
  05d7f54  b 0x5d7f6c
  05d7f58  lwz 9, 16(31)
  05d7f5c  li 26, 1
  05d7f60  li 30, -1
  05d7f64  addi 9, 9, 1
  05d7f68  stw 9, 16(31)
  05d7f6c  addi 9, 9, -1
  05d7f70  stw 9, 16(31)
  05d7f74  extsb 0, 26
  05d7f78  cmpwi 0, 0
  05d7f7c  bf 2, 0x5d7fc8
  05d7f80  addi 0, 1, 112
  05d7f84  cmpw 7, 25, 0
  05d7f88  bt 30, 0x5d8220
  05d7f8c  li 3, 0
  05d7f90  ld 0, 240(1)
  05d7f94  extsw 3, 3
  05d7f98  ld 23, 152(1)
  05d7f9c  ld 24, 160(1)
  05d7fa0  mtlr 0
  05d7fa4  ld 25, 168(1)
  05d7fa8  ld 26, 176(1)
  05d7fac  ld 27, 184(1)
  05d7fb0  ld 28, 192(1)
  05d7fb4  ld 29, 200(1)
  05d7fb8  ld 30, 208(1)
  05d7fbc  ld 31, 216(1)
  05d7fc0  addi 1, 1, 224
  05d7fc4  blr
  05d7fc8  clrldi 11, 25, 32
  05d7fcc  li 0, 0
  05d7fd0  li 3, 1
  05d7fd4  stb 0, 0(11)
  05d7fd8  lbz 9, 28(31)
  05d7fdc  cmpwi 7, 9, 0
  05d7fe0  bf 30, 0x5d7f90
  05d7fe4  lwz 9, 12(31)
  05d7fe8  lbz 0, 0(9)
  05d7fec  extsb 0, 0
  05d7ff0  cmpwi 7, 0, 100
  05d7ff4  bt 30, 0x5d8234
  05d7ff8  cmpwi 7, 0, 105
  05d7ffc  bt 30, 0x5d8234
  05d8000  extsw 5, 27
  05d8004  addi 3, 1, 112
  05d8008  li 4, 0
  05d800c  bl 0x5daaa8
  05d8010  nop
  05d8014  lwz 11, 12(31)
  05d8018  li 0, 1
  05d801c  mr 7, 3
  05d8020  stb 0, 30(31)
  05d8024  lbz 9, 0(11)
  05d8028  cmpwi 7, 9, 112
  05d802c  bt 30, 0x5d8288
  05d8030  lbz 9, 29(31)
  05d8034  addi 3, 9, -98
  05d8038  clrlwi 0, 3, 24
  05d803c  cmplwi 7, 0, 24
  05d8040  bt 29, 0x5d8288
  05d8044  rlwinm 9, 3, 2, 22, 29
  05d8048  lwz 11, -24068(2)
  05d804c  lwzx 0, 9, 11
  05d8050  extsw 0, 0
  05d8054  add 0, 0, 11
  05d8058  mtctr 0
  05d805c  bctr
  05d8060  <unknown>
  05d8064  <unknown>
  05d8068  <unknown>
  05d806c  <unknown>
  05d8070  <unknown>
  05d8074  <unknown>
  05d8078  <unknown>
  05d807c  <unknown>
  05d8080  <unknown>
  05d8084  <unknown>
  05d8088  <unknown>
  05d808c  <unknown>
  05d8090  <unknown>
  05d8094  <unknown>
  05d8098  <unknown>
  05d809c  <unknown>
  05d80a0  <unknown>
  05d80a4  <unknown>
  05d80a8  <unknown>
  05d80ac  <unknown>
  05d80b0  <unknown>
  05d80b4  <unknown>
  05d80b8  <unknown>
  05d80bc  <unknown>
  05d80c0  <unknown>
  05d80c4  cmpwi 7, 27, 0
  05d80c8  bt 30, 0x5d83a0
  05d80cc  cmpwi 7, 27, 16
  05d80d0  bt 30, 0x5d83a0
  05d80d4  li 26, 1
  05d80d8  cmpwi 6, 30, 48
  05d80dc  cmpwi 7, 27, 10
  05d80e0  li 29, 10
  05d80e4  bt 30, 0x5d7e30
  05d80e8  cmpwi 7, 27, 8
  05d80ec  bt 30, 0x5d8178
  05d80f0  li 29, 22
  05d80f4  bt 26, 0x5d7e34
  05d80f8  extsb 0, 26
  05d80fc  cmpwi 0, 0
  05d8100  bt+ 2, 0x5d7eb4
  05d8104  b 0x5d7ea4
  05d8108  lwz 9, 20(31)
  05d810c  addi 9, 9, -1
  05d8110  cmpwi 7, 9, 0
  05d8114  stw 9, 20(31)
  05d8118  bt 28, 0x5d8274
  05d811c  lwz 9, 16(31)
  05d8120  li 4, 0
  05d8124  lwz 11, 0(31)
  05d8128  li 5, 1
  05d812c  addi 9, 9, 1
  05d8130  lwz 3, 4(31)
  05d8134  stw 9, 16(31)
  05d8138  lwz 0, 0(11)
  05d813c  std 2, 40(1)
  05d8140  mtctr 0
  05d8144  lwz 2, 4(11)
  05d8148  bctrl
  05d814c  ld 2, 40(1)
  05d8150  cmpwi 7, 3, 120
  05d8154  mr 30, 3
  05d8158  bt 30, 0x5d80c4
  05d815c  cmpwi 7, 3, 88
  05d8160  bt 30, 0x5d80c4
  05d8164  cmpwi 7, 27, 0
  05d8168  bf 30, 0x5d80d4
  05d816c  li 26, 1
  05d8170  li 27, 8
  05d8174  cmpwi 6, 30, 48
  05d8178  li 29, 8
  05d817c  b 0x5d7e30
  05d8180  lwz 9, 20(31)
  05d8184  stb 30, 112(1)
  05d8188  addi 9, 9, -1
  05d818c  cmpwi 7, 9, 0
  05d8190  stw 9, 20(31)
  05d8194  bt 28, 0x5d8374
  05d8198  lwz 11, 0(31)
  05d819c  li 4, 0
  05d81a0  lwz 9, 16(31)
  05d81a4  li 5, 1
  05d81a8  lwz 3, 4(31)
  05d81ac  addi 25, 1, 113
  05d81b0  addi 9, 9, 1
  05d81b4  stw 9, 16(31)
  05d81b8  lwz 0, 0(11)
  05d81bc  std 2, 40(1)
  05d81c0  mtctr 0
  05d81c4  lwz 2, 4(11)
  05d81c8  bctrl
  05d81cc  ld 2, 40(1)
  05d81d0  lwz 9, 12(31)
  05d81d4  mr 30, 3
  05d81d8  lwz 23, -24072(2)
  05d81dc  mr 3, 23
  05d81e0  lbz 4, 0(9)
  05d81e4  extsb 4, 4
  05d81e8  bl 0x5cc578
  05d81ec  nop
  05d81f0  cmpwi 6, 30, 48
  05d81f4  sub 3, 3, 23
  05d81f8  extsw 3, 3
  05d81fc  add 3, 3, 23
  05d8200  lbz 0, 8(3)
  05d8204  extsb 27, 0
  05d8208  bf 26, 0x5d7e20
  05d820c  b 0x5d8108
  05d8210  lis 0, 32767
  05d8214  ori 0, 0, 65534
  05d8218  stw 0, 20(3)
  05d821c  b 0x5d7d9c
  05d8220  cmpwi 7, 30, -1
  05d8224  li 3, -1
  05d8228  bt- 30, 0x5d7f90
  05d822c  li 3, 0
  05d8230  b 0x5d7f90
  05d8234  extsw 5, 27
  05d8238  addi 3, 1, 112
  05d823c  li 4, 0
  05d8240  bl 0x5da74c
  05d8244  nop
  05d8248  lbz 9, 29(31)
  05d824c  addi 11, 9, -98
  05d8250  li 0, 1
  05d8254  clrlwi 9, 11, 24
  05d8258  mr 7, 3
  05d825c  cmplwi 7, 9, 24
  05d8260  stb 0, 30(31)
  05d8264  bt 29, 0x5d8288
  05d8268  rlwinm 9, 11, 2, 22, 29
  05d826c  lwz 11, -24068(2)
  05d8270  b 0x5d804c
  05d8274  lwz 9, 16(31)
  05d8278  li 30, -1
  05d827c  addi 9, 9, 1
  05d8280  stw 9, 16(31)
  05d8284  b 0x5d8164
  05d8288  mr 8, 24
  05d828c  li 3, 1
  05d8290  lwzu 9, 8(8)
  05d8294  extsw 3, 3
  05d8298  clrldi 10, 9, 32
  05d829c  addi 9, 9, 8
  05d82a0  stw 9, 0(8)
  05d82a4  lwz 11, 4(10)
  05d82a8  stw 7, 0(11)
  05d82ac  ld 0, 240(1)
  05d82b0  ld 23, 152(1)
  05d82b4  ld 24, 160(1)
  05d82b8  mtlr 0
  05d82bc  ld 25, 168(1)
  05d82c0  ld 26, 176(1)
  05d82c4  ld 27, 184(1)
  05d82c8  ld 28, 192(1)
  05d82cc  ld 29, 200(1)
  05d82d0  ld 30, 208(1)
  05d82d4  ld 31, 216(1)
  05d82d8  addi 1, 1, 224
  05d82dc  blr
  05d82e0  lwz 9, 16(3)
  05d82e4  li 30, -1
  05d82e8  lwz 11, 12(3)
  05d82ec  addi 25, 1, 112
  05d82f0  addi 9, 9, 1
  05d82f4  lwz 23, -24072(2)
  05d82f8  stw 9, 16(3)
  05d82fc  mr 3, 23
  05d8300  lbz 4, 0(11)
  05d8304  extsb 4, 4
  05d8308  bl 0x5cc578
  05d830c  nop
  05d8310  cmpwi 6, 30, 48
  05d8314  sub 3, 3, 23
  05d8318  li 29, 10
  05d831c  extsw 3, 3
  05d8320  li 26, 0
  05d8324  add 3, 3, 23
  05d8328  lbz 0, 8(3)
  05d832c  extsb 27, 0
  05d8330  cmpwi 7, 27, 0
  05d8334  bt 30, 0x5d7e30
  05d8338  b 0x5d80dc
  05d833c  lwz 9, 16(31)
  05d8340  mr 4, 29
  05d8344  lwz 11, 0(31)
  05d8348  li 5, 0
  05d834c  addi 9, 9, -1
  05d8350  lwz 3, 4(31)
  05d8354  stw 9, 16(31)
  05d8358  lwz 0, 0(11)
  05d835c  std 2, 40(1)
  05d8360  mtctr 0
  05d8364  lwz 2, 4(11)
  05d8368  bctrl
  05d836c  ld 2, 40(1)
  05d8370  b 0x5d7f74
  05d8374  lwz 9, 16(31)
  05d8378  li 30, -1
  05d837c  lwz 11, 12(31)
  05d8380  addi 25, 1, 113
  05d8384  addi 9, 9, 1
  05d8388  lwz 23, -24072(2)
  05d838c  stw 9, 16(31)
  05d8390  mr 3, 23
  05d8394  lbz 4, 0(11)
  05d8398  extsb 4, 4
  05d839c  b 0x5d8308
  05d83a0  lwz 9, 20(31)
  05d83a4  addi 9, 9, -1
  05d83a8  cmpwi 7, 9, 0
  05d83ac  stw 9, 20(31)
  05d83b0  bt 28, 0x5d8424
  05d83b4  lwz 9, 16(31)
  05d83b8  li 4, 0
  05d83bc  lwz 11, 0(31)
