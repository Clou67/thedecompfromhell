# game/update/moby1649.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1649_002a6bd0:   # 0x2a6bd0, 0xf0 bytes
  02a6bd0  stdu 1, -176(1)
  02a6bd4  mflr 0
  02a6bd8  std 0, 192(1)
  02a6bdc  std 25, 120(1)
  02a6be0  std 30, 160(1)
  02a6be4  std 28, 144(1)
  02a6be8  lis 25, 251
  02a6bec  lis 30, 123
  02a6bf0  std 31, 168(1)
  02a6bf4  lis 28, 123
  02a6bf8  std 29, 152(1)
  02a6bfc  lis 31, 123
  02a6c00  std 26, 128(1)
  02a6c04  std 24, 112(1)
  02a6c08  lis 29, 123
  02a6c0c  lis 26, 251
  02a6c10  std 27, 136(1)
  02a6c14  li 24, 0
  02a6c18  sldi 27, 3, 3
  02a6c1c  addic 25, 25, -5968
  02a6c20  addic 28, 28, 22736
  02a6c24  addic 30, 30, 22704
  02a6c28  addic 29, 29, 8280
  02a6c2c  addic 31, 31, 22800
  02a6c30  addic 26, 26, -6024
  02a6c34  lwz 4, 0(28)
  02a6c38  addc 6, 27, 26
  02a6c3c  lwz 5, 0(29)
  02a6c40  ori 3, 25, 0
  02a6c44  clrldi 6, 6, 32
  02a6c48  extsw 5, 5
  02a6c4c  bl 0xe915c
  02a6c50  nop
  02a6c54  lwz 3, 0(29)
  02a6c58  lwz 4, 0(30)
  02a6c5c  ori 6, 25, 0
  02a6c60  li 7, 9
  02a6c64  lwz 5, 0(31)
  02a6c68  extsw 3, 3
  02a6c6c  bl 0x74604
  02a6c70  nop
  02a6c74  addic 24, 24, 1
  02a6c78  addic 28, 28, 4
  02a6c7c  cmpwi 24, 8
  02a6c80  addic 29, 29, 4
  02a6c84  addic 30, 30, 4
  02a6c88  addic 31, 31, 4
  02a6c8c  bt 0, 0x2a6c34
  02a6c90  ld 0, 192(1)
  02a6c94  mtlr 0
  02a6c98  ld 24, 112(1)
  02a6c9c  ld 25, 120(1)
  02a6ca0  ld 26, 128(1)
  02a6ca4  ld 27, 136(1)
  02a6ca8  ld 28, 144(1)
  02a6cac  ld 29, 152(1)
  02a6cb0  ld 30, 160(1)
  02a6cb4  ld 31, 168(1)
  02a6cb8  addi 1, 1, 176
  02a6cbc  blr

M1649_002a6cc0:   # 0x2a6cc0, 0xf0 bytes
  02a6cc0  stdu 1, -176(1)
  02a6cc4  mflr 0
  02a6cc8  std 0, 192(1)
  02a6ccc  std 25, 120(1)
  02a6cd0  std 30, 160(1)
  02a6cd4  std 28, 144(1)
  02a6cd8  lis 25, 251
  02a6cdc  lis 30, 123
  02a6ce0  std 31, 168(1)
  02a6ce4  lis 28, 123
  02a6ce8  std 29, 152(1)
  02a6cec  lis 31, 123
  02a6cf0  std 26, 128(1)
  02a6cf4  std 24, 112(1)
  02a6cf8  lis 29, 123
  02a6cfc  lis 26, 251
  02a6d00  std 27, 136(1)
  02a6d04  li 24, 0
  02a6d08  sldi 27, 3, 3
  02a6d0c  addic 25, 25, -5968
  02a6d10  addic 28, 28, 8208
  02a6d14  addic 30, 30, 8184
  02a6d18  addic 29, 29, -10792
  02a6d1c  addic 31, 31, 8256
  02a6d20  addic 26, 26, -6000
  02a6d24  lwz 4, 0(28)
  02a6d28  addc 6, 27, 26
  02a6d2c  lwz 5, 0(29)
  02a6d30  ori 3, 25, 0
  02a6d34  clrldi 6, 6, 32
  02a6d38  extsw 5, 5
  02a6d3c  bl 0xe915c
  02a6d40  nop
  02a6d44  lwz 3, 0(29)
  02a6d48  lwz 4, 0(30)
  02a6d4c  ori 6, 25, 0
  02a6d50  li 7, 9
  02a6d54  lwz 5, 0(31)
  02a6d58  extsw 3, 3
  02a6d5c  bl 0x74604
  02a6d60  nop
  02a6d64  addic 24, 24, 1
  02a6d68  addic 28, 28, 4
  02a6d6c  cmpwi 24, 6
  02a6d70  addic 29, 29, 4
  02a6d74  addic 30, 30, 4
  02a6d78  addic 31, 31, 4
  02a6d7c  bt 0, 0x2a6d24
  02a6d80  ld 0, 192(1)
  02a6d84  mtlr 0
  02a6d88  ld 24, 112(1)
  02a6d8c  ld 25, 120(1)
  02a6d90  ld 26, 128(1)
  02a6d94  ld 27, 136(1)
  02a6d98  ld 28, 144(1)
  02a6d9c  ld 29, 152(1)
  02a6da0  ld 30, 160(1)
  02a6da4  ld 31, 168(1)
  02a6da8  addi 1, 1, 176
  02a6dac  blr

M1649_002a6db0:   # 0x2a6db0, 0xf0 bytes
  02a6db0  stdu 1, -176(1)
  02a6db4  mflr 0
  02a6db8  std 0, 192(1)
  02a6dbc  std 25, 120(1)
  02a6dc0  std 30, 160(1)
  02a6dc4  std 28, 144(1)
  02a6dc8  lis 25, 251
  02a6dcc  lis 30, 123
  02a6dd0  std 31, 168(1)
  02a6dd4  lis 28, 123
  02a6dd8  std 29, 152(1)
  02a6ddc  lis 31, 123
  02a6de0  std 26, 128(1)
  02a6de4  std 24, 112(1)
  02a6de8  lis 29, 123
  02a6dec  lis 26, 251
  02a6df0  std 27, 136(1)
  02a6df4  li 24, 0
  02a6df8  sldi 27, 3, 3
  02a6dfc  addic 25, 25, -5968
  02a6e00  addic 28, 28, -10816
  02a6e04  addic 30, 30, -10824
  02a6e08  addic 29, 29, -13400
  02a6e0c  addic 31, 31, -10800
  02a6e10  addic 26, 26, -5984
  02a6e14  lwz 4, 0(28)
  02a6e18  addc 6, 27, 26
  02a6e1c  lwz 5, 0(29)
  02a6e20  ori 3, 25, 0
  02a6e24  clrldi 6, 6, 32
  02a6e28  extsw 5, 5
  02a6e2c  bl 0xe915c
  02a6e30  nop
  02a6e34  lwz 3, 0(29)
  02a6e38  lwz 4, 0(30)
  02a6e3c  ori 6, 25, 0
  02a6e40  li 7, 9
  02a6e44  lwz 5, 0(31)
  02a6e48  extsw 3, 3
  02a6e4c  bl 0x74604
  02a6e50  nop
  02a6e54  addic 24, 24, 1
  02a6e58  addic 28, 28, 4
  02a6e5c  cmpwi 24, 2
  02a6e60  addic 29, 29, 4
  02a6e64  addic 30, 30, 4
  02a6e68  addic 31, 31, 4
  02a6e6c  bt 0, 0x2a6e14
  02a6e70  ld 0, 192(1)
  02a6e74  mtlr 0
  02a6e78  ld 24, 112(1)
  02a6e7c  ld 25, 120(1)
  02a6e80  ld 26, 128(1)
  02a6e84  ld 27, 136(1)
  02a6e88  ld 28, 144(1)
  02a6e8c  ld 29, 152(1)
  02a6e90  ld 30, 160(1)
  02a6e94  ld 31, 168(1)
  02a6e98  addi 1, 1, 176
  02a6e9c  blr

M1649_DrawScrollingTexLayers:   # 0x2a6ea0, 0x608 bytes
  02a6ea0  stdu 1, -224(1)
  02a6ea4  mflr 0
  02a6ea8  std 0, 240(1)
  02a6eac  li 3, 0
  02a6eb0  li 4, 1
  02a6eb4  li 5, 0
  02a6eb8  li 6, 1
  02a6ebc  std 31, 216(1)
  02a6ec0  std 30, 208(1)
  02a6ec4  std 29, 200(1)
  02a6ec8  std 28, 192(1)
  02a6ecc  std 27, 184(1)
  02a6ed0  std 26, 176(1)
  02a6ed4  std 25, 168(1)
  02a6ed8  std 24, 160(1)
  02a6edc  std 23, 152(1)
  02a6ee0  std 22, 144(1)
  02a6ee4  std 21, 136(1)
  02a6ee8  std 20, 128(1)
  02a6eec  std 19, 120(1)
  02a6ef0  std 18, 112(1)
  02a6ef4  li 7, 128
  02a6ef8  bl 0x502ea8
  02a6efc  nop
  02a6f00  ori 4, 3, 0
  02a6f04  li 3, 3
  02a6f08  bl 0x174f80
  02a6f0c  nop
  02a6f10  li 3, 0
  02a6f14  li 4, 0
  02a6f18  li 8, 0
  02a6f1c  li 5, 0
  02a6f20  li 6, 0
  02a6f24  li 7, 0
  02a6f28  bl 0x502f08
  02a6f2c  nop
  02a6f30  ori 4, 3, 0
  02a6f34  li 3, 6
  02a6f38  bl 0x174f80
  02a6f3c  nop
  02a6f40  lis 9, 0
  02a6f44  li 3, 0
  02a6f48  li 4, 0
  02a6f4c  ori 9, 9, 65424
  02a6f50  li 5, 1
  02a6f54  li 6, 1
  02a6f58  li 7, 1
  02a6f5c  li 8, 0
  02a6f60  bl 0x502fd4
  02a6f64  nop
  02a6f68  ori 4, 3, 0
  02a6f6c  li 3, 26
  02a6f70  bl 0x174f80
  02a6f74  nop
  02a6f78  li 3, 1
  02a6f7c  li 4, 0
  02a6f80  li 8, 0
  02a6f84  li 10, 2
  02a6f88  li 5, 63
  02a6f8c  li 6, 1
  02a6f90  li 7, 0
  02a6f94  li 9, 1
  02a6f98  bl 0x502f7c
  02a6f9c  nop
  02a6fa0  ori 4, 3, 0
  02a6fa4  li 3, 22
  02a6fa8  bl 0x174f80
  02a6fac  nop
  02a6fb0  bl 0x71170
  02a6fb4  nop
  02a6fb8  li 3, 58
  02a6fbc  bl 0x685c4
  02a6fc0  nop
  02a6fc4  ori 4, 3, 0
  02a6fc8  li 3, 24
  02a6fcc  bl 0x174f80
  02a6fd0  nop
  02a6fd4  lis 7, 123
  02a6fd8  li 3, 0
  02a6fdc  li 4, 1
  02a6fe0  li 5, 2
  02a6fe4  li 6, 1
  02a6fe8  lwz 7, -13472(7)
  02a6fec  bl 0x502ea8
  02a6ff0  nop
  02a6ff4  ori 4, 3, 0
  02a6ff8  li 3, 3
  02a6ffc  bl 0x174f80
  02a7000  nop
  02a7004  lis 25, 123
  02a7008  lis 30, 123
  02a700c  lis 24, 123
  02a7010  lis 26, 123
  02a7014  li 31, 0
  02a7018  lis 27, 251
  02a701c  lis 28, 251
  02a7020  addic 25, 25, 22704
  02a7024  addic 30, 30, 22736
  02a7028  addic 26, 26, 8280
  02a702c  addic 24, 24, 22800
  02a7030  ori 29, 31, 0
  02a7034  addic 27, 27, -6024
  02a7038  addic 28, 28, -5968
  02a703c  ori 19, 30, 0
  02a7040  ori 20, 25, 0
  02a7044  ori 18, 26, 0
  02a7048  ori 21, 24, 0
  02a704c  lwz 4, 0(30)
  02a7050  lwz 5, 0(26)
  02a7054  ori 3, 28, 0
  02a7058  ori 6, 27, 0
  02a705c  extsw 5, 5
  02a7060  bl 0xe915c
  02a7064  nop
  02a7068  lwz 3, 0(26)
  02a706c  ori 6, 28, 0
  02a7070  lwz 4, 0(25)
  02a7074  li 7, 9
  02a7078  lwz 5, 0(24)
  02a707c  extsw 3, 3
  02a7080  bl 0x74604
  02a7084  nop
  02a7088  addic 31, 31, 1
  02a708c  addic 30, 30, 4
  02a7090  cmpwi 31, 8
  02a7094  addic 26, 26, 4
  02a7098  addic 25, 25, 4
  02a709c  addic 24, 24, 4
  02a70a0  bt 0, 0x2a704c
  02a70a4  li 3, 59
  02a70a8  bl 0x685c4
  02a70ac  nop
  02a70b0  ori 4, 3, 0
  02a70b4  li 3, 24
  02a70b8  bl 0x174f80
  02a70bc  nop
  02a70c0  lis 30, 123
  02a70c4  lis 3, 251
  02a70c8  addic 30, 30, -13472
  02a70cc  li 4, 0
  02a70d0  li 6, 1
  02a70d4  lbz 3, -6032(3)
  02a70d8  lwz 5, 4(30)
  02a70dc  mullw 5, 5, 3
  02a70e0  li 3, 2
  02a70e4  srawi 7, 5, 8
  02a70e8  li 5, 2
  02a70ec  clrldi 7, 7, 32
  02a70f0  bl 0x502ea8
  02a70f4  nop
  02a70f8  ori 4, 3, 0
  02a70fc  li 3, 3
  02a7100  bl 0x174f80
  02a7104  nop
  02a7108  ori 31, 29, 0
  02a710c  ori 25, 19, 0
  02a7110  ori 24, 18, 0
  02a7114  addic 26, 27, 8
  02a7118  ori 23, 20, 0
  02a711c  ori 22, 21, 0
  02a7120  lwz 4, 0(25)
  02a7124  ori 3, 28, 0
  02a7128  lwz 5, 0(24)
  02a712c  ori 6, 26, 0
  02a7130  extsw 5, 5
  02a7134  bl 0xe915c
  02a7138  nop
  02a713c  lwz 3, 0(24)
  02a7140  lwz 4, 0(23)
  02a7144  ori 6, 28, 0
  02a7148  li 7, 9
  02a714c  lwz 5, 0(22)
  02a7150  extsw 3, 3
  02a7154  bl 0x74604
  02a7158  nop
  02a715c  addic 31, 31, 1
  02a7160  addic 25, 25, 4
  02a7164  cmpwi 31, 8
  02a7168  addic 24, 24, 4
  02a716c  addic 23, 23, 4
  02a7170  addic 22, 22, 4
  02a7174  bt 0, 0x2a7120
  02a7178  lis 3, 251
  02a717c  lwz 5, 8(30)
  02a7180  li 4, 2
  02a7184  li 6, 1
  02a7188  lbz 3, -6032(3)
  02a718c  mullw 5, 5, 3
  02a7190  li 3, 0
  02a7194  srawi 7, 5, 8
  02a7198  li 5, 2
  02a719c  clrldi 7, 7, 32
  02a71a0  bl 0x502ea8
  02a71a4  nop
  02a71a8  ori 4, 3, 0
  02a71ac  li 3, 3
  02a71b0  bl 0x174f80
  02a71b4  nop
  02a71b8  ori 30, 29, 0
  02a71bc  addic 31, 27, 16
  02a71c0  lwz 4, 0(19)
  02a71c4  ori 3, 28, 0
  02a71c8  lwz 5, 0(18)
  02a71cc  ori 6, 31, 0
  02a71d0  extsw 5, 5
  02a71d4  bl 0xe915c
  02a71d8  nop
  02a71dc  lwz 3, 0(18)
  02a71e0  lwz 4, 0(20)
  02a71e4  ori 6, 28, 0
  02a71e8  li 7, 9
  02a71ec  lwz 5, 0(21)
  02a71f0  extsw 3, 3
  02a71f4  bl 0x74604
  02a71f8  nop
  02a71fc  addic 30, 30, 1
  02a7200  addic 19, 19, 4
  02a7204  cmpwi 30, 8
  02a7208  addic 18, 18, 4
  02a720c  addic 20, 20, 4
  02a7210  addic 21, 21, 4
  02a7214  bt 0, 0x2a71c0
  02a7218  li 3, 60
  02a721c  bl 0x685c4
  02a7220  nop
  02a7224  ori 4, 3, 0
  02a7228  li 3, 24
  02a722c  bl 0x174f80
  02a7230  nop
  02a7234  lis 7, 123
  02a7238  li 3, 0
  02a723c  li 4, 2
  02a7240  li 5, 0
  02a7244  li 6, 1
  02a7248  lwz 7, -13420(7)
  02a724c  bl 0x502ea8
  02a7250  nop
  02a7254  ori 4, 3, 0
  02a7258  li 3, 3
  02a725c  bl 0x174f80
  02a7260  nop
  02a7264  lis 27, 123
  02a7268  lis 25, 123
  02a726c  lis 26, 123
  02a7270  lis 24, 123
  02a7274  lis 30, 251
  02a7278  addic 27, 27, 8208
  02a727c  addic 25, 25, 8184
  02a7280  addic 26, 26, -10792
  02a7284  addic 24, 24, 8256
  02a7288  ori 31, 29, 0
  02a728c  addic 30, 30, -6000
  02a7290  ori 22, 27, 0
  02a7294  ori 21, 26, 0
  02a7298  ori 20, 25, 0
  02a729c  ori 23, 24, 0
  02a72a0  lwz 4, 0(27)
  02a72a4  ori 3, 28, 0
  02a72a8  lwz 5, 0(26)
  02a72ac  ori 6, 30, 0
  02a72b0  extsw 5, 5
  02a72b4  bl 0xe915c
  02a72b8  nop
  02a72bc  lwz 3, 0(26)
  02a72c0  lwz 4, 0(25)
  02a72c4  ori 6, 28, 0
  02a72c8  li 7, 9
  02a72cc  lwz 5, 0(24)
  02a72d0  extsw 3, 3
  02a72d4  bl 0x74604
  02a72d8  nop
  02a72dc  addic 31, 31, 1
  02a72e0  addic 27, 27, 4
  02a72e4  cmpwi 31, 6
  02a72e8  addic 26, 26, 4
  02a72ec  addic 25, 25, 4
  02a72f0  addic 24, 24, 4
  02a72f4  bt 0, 0x2a72a0
  02a72f8  lis 3, 123
  02a72fc  li 4, 2
  02a7300  addic 7, 3, -13420
  02a7304  li 3, 0
  02a7308  li 5, 0
  02a730c  li 6, 1
  02a7310  lwz 7, 4(7)
  02a7314  bl 0x502ea8
  02a7318  nop
  02a731c  ori 4, 3, 0
  02a7320  li 3, 3
  02a7324  bl 0x174f80
  02a7328  nop
  02a732c  ori 30, 22, 0
  02a7330  lis 22, 251
  02a7334  ori 31, 29, 0
  02a7338  addic 22, 22, -5992
  02a733c  lwz 4, 0(30)
  02a7340  lwz 5, 0(21)
  02a7344  ori 3, 28, 0
  02a7348  ori 6, 22, 0
  02a734c  extsw 5, 5
  02a7350  bl 0xe915c
  02a7354  nop
  02a7358  lwz 3, 0(21)
  02a735c  ori 6, 28, 0
  02a7360  lwz 4, 0(20)
  02a7364  li 7, 9
  02a7368  lwz 5, 0(23)
  02a736c  extsw 3, 3
  02a7370  bl 0x74604
  02a7374  nop
  02a7378  addic 31, 31, 1
  02a737c  addic 30, 30, 4
  02a7380  cmpwi 31, 6
  02a7384  addic 21, 21, 4
  02a7388  addic 20, 20, 4
  02a738c  addic 23, 23, 4
  02a7390  bt 0, 0x2a733c
  02a7394  li 3, 61
  02a7398  bl 0x685c4
  02a739c  nop
  02a73a0  ori 4, 3, 0
  02a73a4  li 3, 24
  02a73a8  bl 0x174f80
  02a73ac  nop
  02a73b0  lis 6, 123
  02a73b4  li 3, 0
  02a73b8  li 4, 2
  02a73bc  li 5, 0
  02a73c0  lwz 7, -13404(6)
  02a73c4  li 6, 1
  02a73c8  bl 0x502ea8
  02a73cc  nop
  02a73d0  ori 4, 3, 0
  02a73d4  li 3, 3
  02a73d8  bl 0x174f80
  02a73dc  nop
  02a73e0  lis 30, 123
  02a73e4  lis 25, 123
  02a73e8  lis 27, 123
  02a73ec  lis 31, 251
  02a73f0  lis 26, 123
  02a73f4  addic 25, 25, -10800
  02a73f8  addic 30, 30, -10816
  02a73fc  addic 27, 27, -13400
  02a7400  addic 31, 31, -5984
  02a7404  addic 26, 26, -10824
  02a7408  lwz 4, 0(30)
  02a740c  ori 3, 28, 0
  02a7410  lwz 5, 0(27)
  02a7414  ori 6, 31, 0
  02a7418  extsw 5, 5
  02a741c  bl 0xe915c
  02a7420  nop
  02a7424  lwz 3, 0(27)
  02a7428  lwz 4, 0(26)
  02a742c  ori 6, 28, 0
  02a7430  li 7, 9
  02a7434  lwz 5, 0(25)
  02a7438  extsw 3, 3
  02a743c  bl 0x74604
  02a7440  nop
  02a7444  addic 29, 29, 1
  02a7448  addic 30, 30, 4
  02a744c  cmpwi 29, 2
  02a7450  addic 27, 27, 4
  02a7454  addic 26, 26, 4
  02a7458  addic 25, 25, 4
  02a745c  bt 0, 0x2a7408
  02a7460  ld 0, 240(1)
  02a7464  mtlr 0
  02a7468  ld 18, 112(1)
  02a746c  ld 19, 120(1)
  02a7470  ld 20, 128(1)
  02a7474  ld 21, 136(1)
  02a7478  ld 22, 144(1)
  02a747c  ld 23, 152(1)
  02a7480  ld 24, 160(1)
  02a7484  ld 25, 168(1)
  02a7488  ld 26, 176(1)
  02a748c  ld 27, 184(1)
  02a7490  ld 28, 192(1)
  02a7494  ld 29, 200(1)
  02a7498  ld 30, 208(1)
  02a749c  ld 31, 216(1)
  02a74a0  addi 1, 1, 224
  02a74a4  blr

M1649_002a74b0:   # 0x2a74b0, 0x220 bytes
  02a74b0  stdu 1, -288(1)
  02a74b4  mflr 0
  02a74b8  std 0, 304(1)
  02a74bc  stfd 24, 224(1)
  02a74c0  stfd 25, 232(1)
  02a74c4  stfd 26, 240(1)
  02a74c8  stfd 27, 248(1)
  02a74cc  stfd 28, 256(1)
  02a74d0  stfd 29, 264(1)
  02a74d4  stfd 30, 272(1)
  02a74d8  stfd 31, 280(1)
  02a74dc  std 19, 120(1)
  02a74e0  li 19, 0
  02a74e4  cmpwi 4, 0
  02a74e8  std 28, 192(1)
  02a74ec  fmr 28, 1
  02a74f0  std 25, 168(1)
  02a74f4  ori 28, 3, 0
  02a74f8  fmr 29, 2
  02a74fc  std 29, 200(1)
  02a7500  ori 25, 19, 0
  02a7504  fmr 30, 3
  02a7508  std 30, 208(1)
  02a750c  ori 29, 4, 0
  02a7510  fmr 31, 4
  02a7514  std 31, 216(1)
  02a7518  ori 30, 5, 0
  02a751c  std 27, 184(1)
  02a7520  std 26, 176(1)
  02a7524  std 24, 160(1)
  02a7528  std 23, 152(1)
  02a752c  std 22, 144(1)
  02a7530  std 21, 136(1)
  02a7534  std 20, 128(1)
  02a7538  ori 31, 10, 0
  02a753c  bf 1, 0x2a766c
  02a7540  lis 3, 42
  02a7544  ori 26, 30, 0
  02a7548  addi 3, 3, 29864
  02a754c  ori 27, 19, 0
  02a7550  lfs 24, 0(3)
  02a7554  lwz 3, 0(26)
  02a7558  ori 20, 25, 0
  02a755c  cmpwi 3, 0
  02a7560  bf 1, 0x2a7658
  02a7564  ori 24, 25, 0
  02a7568  lwzx 3, 28, 27
  02a756c  cmpwi 31, 0
  02a7570  lwzx 23, 3, 24
  02a7574  clrlwi 3, 23, 24
  02a7578  rlwinm 21, 23, 24, 24, 31
  02a757c  rlwinm 22, 23, 16, 24, 31
  02a7580  srwi 23, 23, 24
  02a7584  bf 2, 0x2a75c4
  02a7588  bl 0x502730
  02a758c  nop
  02a7590  ori 3, 21, 0
  02a7594  fmr 27, 1
  02a7598  bl 0x502730
  02a759c  nop
  02a75a0  ori 3, 22, 0
  02a75a4  fmr 25, 1
  02a75a8  bl 0x502730
  02a75ac  nop
  02a75b0  fmr 26, 1
  02a75b4  ori 3, 23, 0
  02a75b8  bl 0x502730
  02a75bc  nop
  02a75c0  b 0x2a75dc
  02a75c4  ori 3, 23, 0
  02a75c8  bl 0x502730
  02a75cc  nop
  02a75d0  fmr 25, 24
  02a75d4  fmr 26, 25
  02a75d8  fmr 27, 26
  02a75dc  fmuls 2, 27, 28
  02a75e0  fmuls 27, 1, 31
  02a75e4  fmuls 26, 26, 30
  02a75e8  fmuls 25, 25, 29
  02a75ec  fmr 1, 2
  02a75f0  bl 0x502758
  02a75f4  nop
  02a75f8  ori 23, 3, 0
  02a75fc  fmr 1, 27
  02a7600  bl 0x502758
  02a7604  nop
  02a7608  ori 22, 3, 0
  02a760c  fmr 1, 26
  02a7610  bl 0x502758
  02a7614  nop
  02a7618  slwi 4, 22, 24
  02a761c  slwi 3, 3, 16
  02a7620  fmr 1, 25
  02a7624  addc 22, 4, 3
  02a7628  bl 0x502758
  02a762c  nop
  02a7630  slwi 3, 3, 8
  02a7634  lwzx 4, 28, 27
  02a7638  addic 20, 20, 1
  02a763c  addc 3, 22, 3
  02a7640  addc 3, 3, 23
  02a7644  stwx 3, 4, 24
  02a7648  lwzx 3, 30, 27
  02a764c  addic 24, 24, 4
  02a7650  cmpw 20, 3
  02a7654  bt 0, 0x2a7568
  02a7658  addic 19, 19, 1
  02a765c  addic 26, 26, 4
  02a7660  cmpw 19, 29
  02a7664  addic 27, 27, 4
  02a7668  bt 0, 0x2a7554
  02a766c  ld 0, 304(1)
  02a7670  mtlr 0
  02a7674  lfd 24, 224(1)
  02a7678  lfd 25, 232(1)
  02a767c  lfd 26, 240(1)
  02a7680  lfd 27, 248(1)
  02a7684  lfd 28, 256(1)
  02a7688  lfd 29, 264(1)
  02a768c  lfd 30, 272(1)
  02a7690  lfd 31, 280(1)
  02a7694  ld 19, 120(1)
  02a7698  ld 20, 128(1)
  02a769c  ld 21, 136(1)
  02a76a0  ld 22, 144(1)
  02a76a4  ld 23, 152(1)
  02a76a8  ld 24, 160(1)
  02a76ac  ld 25, 168(1)
  02a76b0  ld 26, 176(1)
  02a76b4  ld 27, 184(1)
  02a76b8  ld 28, 192(1)
  02a76bc  ld 29, 200(1)
  02a76c0  ld 30, 208(1)
  02a76c4  ld 31, 216(1)
  02a76c8  addi 1, 1, 288
  02a76cc  blr

M1649_002a76f8:   # 0x2a76f8, 0x14c bytes
  02a76f8  lis 5, 114
  02a76fc  lfs 5, 0(6)
  02a7700  lis 4, 42
  02a7704  addi 4, 4, 30416
  02a7708  lfs 4, -3036(5)
  02a770c  fmadds 5, 4, 1, 5
  02a7710  lfs 1, 4(6)
  02a7714  stfs 5, 0(6)
  02a7718  lfs 4, 0(4)
  02a771c  fcmpu 0, 5, 4
  02a7720  cror 6, 0, 2
  02a7724  bt 6, 0x2a7734
  02a7728  lfs 6, 4(4)
  02a772c  fsubs 5, 5, 6
  02a7730  stfs 5, 0(6)
  02a7734  lfs 6, 8(4)
  02a7738  fcmpu 0, 5, 6
  02a773c  cror 6, 1, 2
  02a7740  bt 6, 0x2a7750
  02a7744  lfs 7, 4(4)
  02a7748  fadds 5, 5, 7
  02a774c  stfs 5, 0(6)
  02a7750  lis 5, 114
  02a7754  lfs 7, -3036(5)
  02a7758  fmadds 1, 7, 2, 1
  02a775c  fcmpu 0, 1, 4
  02a7760  stfs 1, 4(6)
  02a7764  cror 6, 0, 2
  02a7768  bt 6, 0x2a7778
  02a776c  lfs 2, 4(4)
  02a7770  fsubs 1, 1, 2
  02a7774  stfs 1, 4(6)
  02a7778  fcmpu 0, 1, 6
  02a777c  cror 6, 1, 2
  02a7780  bt 6, 0x2a7790
  02a7784  lfs 2, 4(4)
  02a7788  fadds 1, 1, 2
  02a778c  stfs 1, 4(6)
  02a7790  lfs 1, 12(4)
  02a7794  lfs 2, 16(4)
  02a7798  fmuls 5, 5, 1
  02a779c  lfs 4, 20(4)
  02a77a0  lfs 8, 24(4)
  02a77a4  fsubs 6, 2, 5
  02a77a8  fsubs 7, 4, 5
  02a77ac  fsub 9, 5, 6
  02a77b0  fsel 5, 9, 6, 5
  02a77b4  lfs 6, 28(4)
  02a77b8  fsub 9, 7, 5
  02a77bc  fsel 5, 9, 7, 5
  02a77c0  lfs 7, 32(4)
  02a77c4  lfs 9, 36(4)
  02a77c8  fmuls 10, 5, 5
  02a77cc  fmuls 11, 10, 5
  02a77d0  fmuls 12, 10, 11
  02a77d4  fmadds 5, 11, 8, 5
  02a77d8  fmuls 11, 10, 12
  02a77dc  fmadds 5, 12, 6, 5
  02a77e0  fmuls 10, 10, 11
  02a77e4  fmadds 5, 11, 7, 5
  02a77e8  fmadds 5, 10, 9, 5
  02a77ec  fmuls 5, 5, 3
  02a77f0  stfs 5, 0(3)
  02a77f4  lfs 5, 4(6)
  02a77f8  fmuls 1, 5, 1
  02a77fc  fsubs 2, 2, 1
  02a7800  fsubs 4, 4, 1
  02a7804  fsub 5, 1, 2
  02a7808  fsel 1, 5, 2, 1
  02a780c  fsub 2, 4, 1
  02a7810  fsel 1, 2, 4, 1
  02a7814  fmuls 2, 1, 1
  02a7818  fmuls 4, 2, 1
  02a781c  fmuls 5, 2, 4
  02a7820  fmadds 1, 4, 8, 1
  02a7824  fmuls 4, 2, 5
  02a7828  fmadds 1, 5, 6, 1
  02a782c  fmuls 2, 2, 4
  02a7830  fmadds 1, 4, 7, 1
  02a7834  fmadds 1, 2, 9, 1
  02a7838  fmuls 1, 1, 3
  02a783c  stfs 1, 4(3)
  02a7840  blr

M1649_002a7850:   # 0x2a7850, 0xb8 bytes
  02a7850  lis 4, 251
  02a7854  sldi 3, 3, 3
  02a7858  lis 5, 114
  02a785c  lis 6, 123
  02a7860  addic 4, 4, -6024
  02a7864  extsw 3, 3
  02a7868  addic 6, 6, -13460
  02a786c  lfs 3, -3036(5)
  02a7870  lis 5, 42
  02a7874  lfsx 4, 4, 3
  02a7878  lfsx 1, 6, 3
  02a787c  addi 5, 5, 30788
  02a7880  fmadds 4, 1, 3, 4
  02a7884  stfsx 4, 4, 3
  02a7888  lfs 2, 0(5)
  02a788c  fcmpu 0, 4, 2
  02a7890  cror 6, 0, 2
  02a7894  bt 6, 0x2a78a0
  02a7898  fsubs 4, 4, 2
  02a789c  stfsx 4, 4, 3
  02a78a0  lis 5, 42
  02a78a4  addi 5, 5, 30788
  02a78a8  lfs 1, 4(5)
  02a78ac  fcmpu 0, 4, 1
  02a78b0  cror 6, 1, 2
  02a78b4  bt 6, 0x2a78c0
  02a78b8  fadds 4, 4, 2
  02a78bc  stfsx 4, 4, 3
  02a78c0  lis 5, 123
  02a78c4  addc 4, 4, 3
  02a78c8  addic 5, 5, -13456
  02a78cc  lfs 4, 4(4)
  02a78d0  lfsx 5, 5, 3
  02a78d4  fmadds 3, 5, 3, 4
  02a78d8  fcmpu 0, 3, 2
  02a78dc  stfs 3, 4(4)
  02a78e0  cror 6, 0, 2
  02a78e4  bt 6, 0x2a78f0
  02a78e8  fsubs 3, 3, 2
  02a78ec  stfs 3, 4(4)
  02a78f0  fcmpu 0, 3, 1
  02a78f4  cror 6, 1, 2
  02a78f8  bt 6, 0x2a7904
  02a78fc  fadds 1, 3, 2
  02a7900  stfs 1, 4(4)
  02a7904  blr

M1649_002a7910:   # 0x2a7910, 0xb8 bytes
  02a7910  lis 4, 251
  02a7914  sldi 3, 3, 3
  02a7918  lis 5, 114
  02a791c  lis 6, 123
  02a7920  addic 4, 4, -6000
  02a7924  extsw 3, 3
  02a7928  addic 6, 6, -13436
  02a792c  lfs 3, -3036(5)
  02a7930  lis 5, 42
  02a7934  lfsx 4, 4, 3
  02a7938  lfsx 1, 6, 3
  02a793c  addi 5, 5, 30984
  02a7940  fmadds 4, 1, 3, 4
  02a7944  stfsx 4, 4, 3
  02a7948  lfs 2, 0(5)
  02a794c  fcmpu 0, 4, 2
  02a7950  cror 6, 0, 2
  02a7954  bt 6, 0x2a7960
  02a7958  fsubs 4, 4, 2
  02a795c  stfsx 4, 4, 3
  02a7960  lis 5, 42
  02a7964  addi 5, 5, 30984
  02a7968  lfs 1, 4(5)
  02a796c  fcmpu 0, 4, 1
  02a7970  cror 6, 1, 2
  02a7974  bt 6, 0x2a7980
  02a7978  fadds 4, 4, 2
  02a797c  stfsx 4, 4, 3
  02a7980  lis 5, 123
  02a7984  addc 4, 4, 3
  02a7988  addic 5, 5, -13432
  02a798c  lfs 4, 4(4)
  02a7990  lfsx 5, 5, 3
  02a7994  fmadds 3, 5, 3, 4
  02a7998  fcmpu 0, 3, 2
  02a799c  stfs 3, 4(4)
  02a79a0  cror 6, 0, 2
  02a79a4  bt 6, 0x2a79b0
  02a79a8  fsubs 3, 3, 2
  02a79ac  stfs 3, 4(4)
  02a79b0  fcmpu 0, 3, 1
  02a79b4  cror 6, 1, 2
  02a79b8  bt 6, 0x2a79c4
  02a79bc  fadds 1, 3, 2
  02a79c0  stfs 1, 4(4)
  02a79c4  blr

M1649_002a79d0:   # 0x2a79d0, 0xb8 bytes
  02a79d0  lis 4, 251
  02a79d4  sldi 3, 3, 3
  02a79d8  lis 5, 114
  02a79dc  lis 6, 123
  02a79e0  addic 4, 4, -5984
  02a79e4  extsw 3, 3
  02a79e8  addic 6, 6, -13412
  02a79ec  lfs 3, -3036(5)
  02a79f0  lis 5, 42
  02a79f4  lfsx 4, 4, 3
  02a79f8  lfsx 1, 6, 3
  02a79fc  addi 5, 5, 31176
  02a7a00  fmadds 4, 1, 3, 4
  02a7a04  stfsx 4, 4, 3
  02a7a08  lfs 2, 0(5)
  02a7a0c  fcmpu 0, 4, 2
  02a7a10  cror 6, 0, 2
  02a7a14  bt 6, 0x2a7a20
  02a7a18  fsubs 4, 4, 2
  02a7a1c  stfsx 4, 4, 3
  02a7a20  lis 5, 42
  02a7a24  addi 5, 5, 31176
  02a7a28  lfs 1, 4(5)
  02a7a2c  fcmpu 0, 4, 1
  02a7a30  cror 6, 1, 2
  02a7a34  bt 6, 0x2a7a40
  02a7a38  fadds 4, 4, 2
  02a7a3c  stfsx 4, 4, 3
  02a7a40  lis 5, 123
  02a7a44  addc 4, 4, 3
  02a7a48  addic 5, 5, -13408
  02a7a4c  lfs 4, 4(4)
  02a7a50  lfsx 5, 5, 3
  02a7a54  fmadds 3, 5, 3, 4
  02a7a58  fcmpu 0, 3, 2
  02a7a5c  stfs 3, 4(4)
  02a7a60  cror 6, 0, 2
  02a7a64  bt 6, 0x2a7a70
  02a7a68  fsubs 3, 3, 2
  02a7a6c  stfs 3, 4(4)
  02a7a70  fcmpu 0, 3, 1
  02a7a74  cror 6, 1, 2
  02a7a78  bt 6, 0x2a7a84
  02a7a7c  fadds 1, 3, 2
  02a7a80  stfs 1, 4(4)
  02a7a84  blr

UpdateMoby_1649:   # 0x2a7ac0, 0x330 bytes
  02a7ac0  stdu 1, -160(1)
  02a7ac4  mflr 0
  02a7ac8  std 0, 176(1)
  02a7acc  stfd 30, 144(1)
  02a7ad0  stfd 31, 152(1)
  02a7ad4  std 31, 136(1)
  02a7ad8  ori 31, 3, 0
  02a7adc  lbz 3, 32(3)
  02a7ae0  cmpwi 3, 0
  02a7ae4  cmpwi 1, 3, 1
  02a7ae8  std 30, 128(1)
  02a7aec  cmpwi 6, 3, -1
  02a7af0  bt 1, 0x2a7afc
  02a7af4  bf 25, 0x2a7dd0
  02a7af8  b 0x2a7b04
  02a7afc  bf 5, 0x2a7c7c
  02a7b00  b 0x2a7dd0
  02a7b04  lis 3, 251
  02a7b08  lwz 3, -6028(3)
  02a7b0c  cmpwi 3, 0
  02a7b10  bf 2, 0x2a7bb4
  02a7b14  lis 3, 42
  02a7b18  lis 5, 123
  02a7b1c  addi 30, 3, 31368
  02a7b20  lis 3, 123
  02a7b24  addic 5, 5, 8280
  02a7b28  addic 3, 3, 22800
  02a7b2c  li 4, 8
  02a7b30  lfs 31, 4(30)
  02a7b34  li 10, 1
  02a7b38  lfs 3, 0(30)
  02a7b3c  fmr 1, 31
  02a7b40  fmr 2, 31
  02a7b44  fmr 4, 31
  02a7b48  bl 0x2a74b0
  02a7b4c  lis 3, 123
  02a7b50  lfs 30, 8(30)
  02a7b54  lis 5, 123
  02a7b58  fmr 1, 31
  02a7b5c  addic 3, 3, -10800
  02a7b60  fmr 2, 31
  02a7b64  li 10, 1
  02a7b68  fmr 3, 31
  02a7b6c  addic 5, 5, -13400
  02a7b70  fmr 4, 30
  02a7b74  li 4, 2
  02a7b78  bl 0x2a74b0
  02a7b7c  lis 3, 123
  02a7b80  lfs 1, 12(30)
  02a7b84  lis 5, 123
  02a7b88  addic 3, 3, 8256
  02a7b8c  fmr 4, 30
  02a7b90  li 10, 1
  02a7b94  fmr 2, 1
  02a7b98  addic 5, 5, -10792
  02a7b9c  fmr 3, 1
  02a7ba0  li 4, 6
  02a7ba4  bl 0x2a74b0
  02a7ba8  lis 3, 251
  02a7bac  li 4, 1
  02a7bb0  stw 4, -6028(3)
  02a7bb4  li 4, 1
  02a7bb8  vspltisw 2, 0
  02a7bbc  lis 5, 251
  02a7bc0  vspltisw 3, 1
  02a7bc4  li 3, 0
  02a7bc8  lis 6, 251
  02a7bcc  addic 7, 5, -6024
  02a7bd0  stb 4, 32(31)
  02a7bd4  lis 8, 42
  02a7bd8  stw 3, -6024(5)
  02a7bdc  addic 9, 6, -5976
  02a7be0  stw 3, -5976(6)
  02a7be4  stw 3, 4(7)
  02a7be8  addi 4, 8, 31368
  02a7bec  li 5, 16
  02a7bf0  stw 3, 8(7)
  02a7bf4  stw 3, 12(7)
  02a7bf8  lis 8, 251
  02a7bfc  stw 3, 16(7)
  02a7c00  lis 6, 251
  02a7c04  stw 3, 20(7)
  02a7c08  li 10, -5996
  02a7c0c  stw 3, 4(9)
  02a7c10  addic 7, 8, -5996
  02a7c14  <unknown>
  02a7c18  addic 9, 6, -6000
  02a7c1c  addic 7, 7, 8
  02a7c20  vspltw 4, 4, 0
  02a7c24  stw 3, -6000(6)
  02a7c28  lis 4, 251
  02a7c2c  lis 31, 251
  02a7c30  stvewx 2, 10, 8
  02a7c34  stw 3, 8(9)
  02a7c38  ori 5, 3, 0
  02a7c3c  addic 4, 4, -5984
  02a7c40  addic 31, 31, -5980
  02a7c44  stvewx 4, 0, 7
  02a7c48  vcfsx 5, 2, 0
  02a7c4c  vspltisw 6, -1
  02a7c50  addic 5, 5, 1
  02a7c54  stw 3, 0(4)
  02a7c58  cmpwi 5, 1
  02a7c5c  addic 4, 4, 8
  02a7c60  vadduwm 2, 2, 3
  02a7c64  vslw 6, 6, 6
  02a7c68  vmaddfp 5, 5, 4, 6
  02a7c6c  stvewx 5, 0, 31
  02a7c70  addic 31, 31, 8
  02a7c74  bt 0, 0x2a7c48
  02a7c78  b 0x2a7dd0
  02a7c7c  lis 3, 123
  02a7c80  lis 4, 42
  02a7c84  addic 30, 3, -13488
  02a7c88  addi 4, 4, 31368
  02a7c8c  lfs 1, -13488(3)
  02a7c90  addic 3, 1, 112
  02a7c94  lfs 2, 4(30)
  02a7c98  stfs 1, 112(1)
  02a7c9c  lfs 1, 8(30)
  02a7ca0  stfs 2, 116(1)
  02a7ca4  lfs 2, 12(30)
  02a7ca8  stfs 1, 120(1)
  02a7cac  stfs 2, 124(1)
  02a7cb0  lfs 1, 20(4)
  02a7cb4  bl 0x502910
  02a7cb8  nop
  02a7cbc  cmpwi 3, 0
  02a7cc0  bt 0, 0x2a7dd0
  02a7cc4  lis 3, 149
  02a7cc8  lfs 1, 4(30)
  02a7ccc  lis 4, 123
  02a7cd0  addic 3, 3, 5056
  02a7cd4  lfs 2, -13488(4)
  02a7cd8  lfs 3, 324(3)
  02a7cdc  lfs 4, 320(3)
  02a7ce0  fsubs 1, 3, 1
  02a7ce4  fsubs 2, 4, 2
  02a7ce8  lfs 3, 8(30)
  02a7cec  lfs 4, 328(3)
  02a7cf0  fsubs 3, 4, 3
  02a7cf4  lis 3, 42
  02a7cf8  fmuls 1, 1, 1
  02a7cfc  addi 3, 3, 31368
  02a7d00  lfs 31, 24(3)
  02a7d04  fmadds 1, 2, 2, 1
  02a7d08  fmadds 30, 3, 3, 1
  02a7d0c  fsqrts 30, 30
  02a7d10  fcmpu 0, 30, 31
  02a7d14  bt 1, 0x2a7da4
  02a7d18  li 3, 0
  02a7d1c  bl 0x2a7850
  02a7d20  lis 3, 42
  02a7d24  lis 4, 251
  02a7d28  addi 30, 3, 31368
  02a7d2c  addic 3, 4, -6024
  02a7d30  lis 6, 251
  02a7d34  addic 3, 3, 8
  02a7d38  addic 6, 6, -5976
  02a7d3c  lfs 1, 28(30)
  02a7d40  lfs 2, 32(30)
  02a7d44  lfs 3, 36(30)
  02a7d48  bl 0x2a76f8
  02a7d4c  li 3, 2
  02a7d50  bl 0x2a7850
  02a7d54  lfs 1, 40(30)
  02a7d58  li 3, 255
  02a7d5c  fcmpu 0, 30, 1
  02a7d60  bt 0, 0x2a7d9c
  02a7d64  fcmpu 0, 30, 31
  02a7d68  li 3, 0
  02a7d6c  cror 6, 1, 2
  02a7d70  bt 6, 0x2a7d9c
  02a7d74  lis 3, 42
  02a7d78  fsubs 1, 30, 1
  02a7d7c  addi 3, 3, 31368
  02a7d80  lfs 2, 44(3)
  02a7d84  lfs 3, 8(3)
  02a7d88  lfs 4, 48(3)
  02a7d8c  fnmsubs 1, 1, 2, 3
  02a7d90  fmuls 1, 1, 4
  02a7d94  bl 0x502758
  02a7d98  nop
  02a7d9c  lis 4, 251
  02a7da0  stb 3, -6032(4)
  02a7da4  li 3, 0
  02a7da8  bl 0x2a79d0
  02a7dac  li 3, 0
  02a7db0  bl 0x2a7910
  02a7db4  li 3, 1
  02a7db8  bl 0x2a7910
  02a7dbc  lis 3, 113
  02a7dc0  ori 4, 31, 0
  02a7dc4  addic 3, 3, -21392
  02a7dc8  bl 0x6d720
  02a7dcc  nop
  02a7dd0  ld 0, 176(1)
  02a7dd4  mtlr 0
  02a7dd8  lfd 30, 144(1)
  02a7ddc  lfd 31, 152(1)
  02a7de0  ld 30, 128(1)
  02a7de4  ld 31, 136(1)
  02a7de8  addi 1, 1, 160
  02a7dec  blr

M1649_002a7df0:   # 0x2a7df0, 0x14 bytes
  02a7df0  lis 3, 123
  02a7df4  lis 4, 1
  02a7df8  addic 3, 3, 22836
  02a7dfc  stw 4, 72(3)
  02a7e00  blr
