# game/update/moby1772.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1772_002b77e8:   # 0x2b77e8, 0x538 bytes
  02b77e8  stdu 1, -416(1)
  02b77ec  mflr 0
  02b77f0  std 0, 432(1)
  02b77f4  stfd 18, 304(1)
  02b77f8  stfd 19, 312(1)
  02b77fc  stfd 20, 320(1)
  02b7800  stfd 21, 328(1)
  02b7804  stfd 22, 336(1)
  02b7808  stfd 23, 344(1)
  02b780c  stfd 24, 352(1)
  02b7810  stfd 25, 360(1)
  02b7814  stfd 26, 368(1)
  02b7818  stfd 27, 376(1)
  02b781c  stfd 28, 384(1)
  02b7820  stfd 29, 392(1)
  02b7824  stfd 30, 400(1)
  02b7828  stfd 31, 408(1)
  02b782c  std 30, 288(1)
  02b7830  lwz 30, 120(3)
  02b7834  li 3, 11
  02b7838  std 31, 296(1)
  02b783c  lis 4, 43
  02b7840  std 29, 280(1)
  02b7844  std 28, 272(1)
  02b7848  std 27, 264(1)
  02b784c  std 26, 256(1)
  02b7850  addi 31, 4, 30664
  02b7854  bl 0x685c4
  02b7858  nop
  02b785c  std 3, 232(1)
  02b7860  li 3, 0
  02b7864  li 4, 2
  02b7868  li 5, 0
  02b786c  li 6, 1
  02b7870  li 7, 128
  02b7874  bl 0x502ea8
  02b7878  nop
  02b787c  std 3, 248(1)
  02b7880  li 3, 0
  02b7884  lis 9, 0
  02b7888  li 4, 0
  02b788c  li 5, 1
  02b7890  li 6, 1
  02b7894  li 7, 1
  02b7898  li 8, 0
  02b789c  ori 9, 9, 65424
  02b78a0  bl 0x502fd4
  02b78a4  nop
  02b78a8  std 3, 240(1)
  02b78ac  li 4, 0
  02b78b0  li 3, 0
  02b78b4  li 5, 0
  02b78b8  li 6, 0
  02b78bc  li 7, 0
  02b78c0  li 8, 0
  02b78c4  bl 0x502f08
  02b78c8  nop
  02b78cc  lis 4, 149
  02b78d0  lfs 30, 4(30)
  02b78d4  addic 4, 4, 5056
  02b78d8  lfs 31, 0(30)
  02b78dc  lfs 2, 324(4)
  02b78e0  lfs 1, 320(4)
  02b78e4  fsubs 3, 2, 30
  02b78e8  fsubs 4, 1, 31
  02b78ec  lfs 6, 328(4)
  02b78f0  lfs 29, 8(30)
  02b78f4  fsubs 7, 6, 29
  02b78f8  std 3, 224(1)
  02b78fc  lfs 8, 4(31)
  02b7900  fmuls 5, 3, 3
  02b7904  lfs 24, 0(31)
  02b7908  lfs 25, 332(4)
  02b790c  lfs 9, 8(31)
  02b7910  fmadds 5, 4, 4, 5
  02b7914  fmadds 5, 7, 7, 5
  02b7918  fmr 23, 24
  02b791c  fsqrts 5, 5
  02b7920  fmr 22, 23
  02b7924  fmr 21, 22
  02b7928  fdivs 8, 8, 5
  02b792c  fsub 10, 24, 5
  02b7930  fsub 11, 5, 24
  02b7934  fsub 12, 24, 5
  02b7938  fsub 13, 24, 5
  02b793c  fsub 0, 5, 24
  02b7940  fsub 28, 5, 24
  02b7944  fmr 5, 9
  02b7948  fmuls 3, 3, 8
  02b794c  fmuls 4, 4, 8
  02b7950  fmuls 7, 7, 8
  02b7954  fsel 8, 10, 24, 3
  02b7958  fsel 9, 12, 24, 4
  02b795c  fsel 10, 13, 24, 7
  02b7960  fsel 3, 11, 8, 3
  02b7964  fsel 4, 0, 9, 4
  02b7968  fsel 7, 28, 10, 7
  02b796c  fadds 30, 3, 30
  02b7970  fadds 31, 4, 31
  02b7974  fadds 29, 7, 29
  02b7978  fsubs 2, 2, 30
  02b797c  fsubs 1, 1, 31
  02b7980  fsubs 3, 6, 29
  02b7984  fmuls 4, 2, 2
  02b7988  fmadds 4, 1, 1, 4
  02b798c  fmadds 4, 3, 3, 4
  02b7990  fsqrts 6, 4
  02b7994  fcmpu 0, 6, 21
  02b7998  bt 2, 0x2b79e8
  02b799c  frsqrte 6, 4
  02b79a0  lis 3, 43
  02b79a4  addi 3, 3, 30664
  02b79a8  lfs 7, 12(3)
  02b79ac  fmuls 8, 4, 6
  02b79b0  fmuls 9, 7, 6
  02b79b4  fnmsubs 8, 8, 6, 5
  02b79b8  fmadds 6, 8, 9, 6
  02b79bc  fmuls 8, 4, 6
  02b79c0  fmuls 9, 7, 6
  02b79c4  fnmsubs 8, 8, 6, 5
  02b79c8  fmadds 6, 8, 9, 6
  02b79cc  fmuls 4, 4, 6
  02b79d0  fmuls 7, 7, 6
  02b79d4  fnmsubs 4, 4, 6, 5
  02b79d8  fmadds 23, 4, 7, 6
  02b79dc  fmuls 21, 1, 23
  02b79e0  fmuls 22, 2, 23
  02b79e4  fmuls 23, 3, 23
  02b79e8  lis 3, 151
  02b79ec  addic 3, 3, -25376
  02b79f0  lfs 1, 656(3)
  02b79f4  lfs 2, 664(3)
  02b79f8  fmuls 3, 1, 23
  02b79fc  lfs 4, 660(3)
  02b7a00  fmuls 5, 2, 22
  02b7a04  fmuls 6, 4, 21
  02b7a08  lis 3, 43
  02b7a0c  addi 3, 3, 30664
  02b7a10  fmsubs 3, 2, 21, 3
  02b7a14  fmsubs 4, 4, 23, 5
  02b7a18  fmsubs 5, 1, 22, 6
  02b7a1c  lfs 7, 16(3)
  02b7a20  lis 4, 123
  02b7a24  fmuls 1, 3, 3
  02b7a28  lwz 4, 30928(4)
  02b7a2c  stw 4, 188(1)
  02b7a30  fmadds 1, 4, 4, 1
  02b7a34  stw 4, 184(1)
  02b7a38  stw 4, 180(1)
  02b7a3c  stw 4, 176(1)
  02b7a40  lfs 2, 20(3)
  02b7a44  fmadds 1, 5, 5, 1
  02b7a48  fsqrts 6, 1
  02b7a4c  fmr 1, 24
  02b7a50  fdivs 7, 7, 6
  02b7a54  fsub 8, 24, 6
  02b7a58  fsub 9, 24, 6
  02b7a5c  fsub 10, 24, 6
  02b7a60  fsub 20, 6, 24
  02b7a64  fsub 19, 6, 24
  02b7a68  fsub 18, 6, 24
  02b7a6c  fmuls 4, 4, 7
  02b7a70  fmuls 3, 3, 7
  02b7a74  fmuls 5, 5, 7
  02b7a78  fsel 6, 8, 24, 4
  02b7a7c  fsel 7, 9, 24, 3
  02b7a80  fsel 8, 10, 24, 5
  02b7a84  fsel 20, 20, 6, 4
  02b7a88  fsel 19, 19, 7, 3
  02b7a8c  fsel 18, 18, 8, 5
  02b7a90  fmuls 26, 22, 20
  02b7a94  fmuls 28, 23, 19
  02b7a98  fmuls 27, 21, 18
  02b7a9c  fmsubs 26, 21, 19, 26
  02b7aa0  fmsubs 28, 22, 18, 28
  02b7aa4  fmsubs 27, 23, 20, 27
  02b7aa8  bl 0xfe4f0
  02b7aac  nop
  02b7ab0  lis 3, 123
  02b7ab4  lis 4, 123
  02b7ab8  lis 30, 123
  02b7abc  addic 4, 4, 30896
  02b7ac0  addic 31, 1, 112
  02b7ac4  lfs 2, 30936(3)
  02b7ac8  ori 28, 4, 0
  02b7acc  fadds 1, 2, 1
  02b7ad0  addic 30, 30, 30832
  02b7ad4  li 29, 4
  02b7ad8  addic 5, 28, 4
  02b7adc  ori 3, 1, 0
  02b7ae0  mtctr 29
  02b7ae4  ori 6, 31, 0
  02b7ae8  ori 27, 5, 0
  02b7aec  ori 7, 30, 0
  02b7af0  fmuls 2, 1, 20
  02b7af4  fmuls 3, 1, 19
  02b7af8  fmuls 4, 1, 18
  02b7afc  fmuls 5, 1, 25
  02b7b00  lfs 6, 0(7)
  02b7b04  fmuls 7, 6, 1
  02b7b08  stfs 7, 0(6)
  02b7b0c  lfs 8, 4(7)
  02b7b10  fmuls 9, 8, 1
  02b7b14  fmuls 10, 8, 2
  02b7b18  fmuls 11, 8, 3
  02b7b1c  fmuls 8, 8, 4
  02b7b20  stfs 9, 4(6)
  02b7b24  fmadds 11, 7, 22, 11
  02b7b28  fmadds 9, 7, 21, 10
  02b7b2c  lfs 10, 8(7)
  02b7b30  fmadds 7, 7, 23, 8
  02b7b34  fmuls 10, 10, 1
  02b7b38  fmadds 8, 10, 28, 9
  02b7b3c  fmadds 9, 10, 27, 11
  02b7b40  fmadds 7, 10, 26, 7
  02b7b44  stfs 10, 8(6)
  02b7b48  lfs 10, 12(7)
  02b7b4c  addic 7, 7, 16
  02b7b50  fmadds 6, 6, 5, 10
  02b7b54  fmadds 8, 10, 31, 8
  02b7b58  fmadds 9, 10, 30, 9
  02b7b5c  fmadds 7, 10, 29, 7
  02b7b60  stfs 6, 12(6)
  02b7b64  stfs 8, 0(6)
  02b7b68  stfs 9, 4(6)
  02b7b6c  stfs 7, 8(6)
  02b7b70  lfs 6, 0(4)
  02b7b74  addic 6, 6, 16
  02b7b78  lfs 7, 0(5)
  02b7b7c  addic 4, 4, 8
  02b7b80  stfs 6, 192(3)
  02b7b84  addic 5, 5, 8
  02b7b88  stfs 7, 196(3)
  02b7b8c  addic 3, 3, 8
  02b7b90  bdnz 0x2b7b00
  02b7b94  lis 4, 161
  02b7b98  addic 3, 1, 112
  02b7b9c  addic 26, 4, 24396
  02b7ba0  li 4, 0
  02b7ba4  li 5, 0
  02b7ba8  li 7, 9
  02b7bac  lwz 6, 28(26)
  02b7bb0  bl 0x72280
  02b7bb4  nop
  02b7bb8  lis 3, 123
  02b7bbc  fmr 1, 24
  02b7bc0  lis 4, 43
  02b7bc4  addi 4, 4, 30664
  02b7bc8  lwz 3, 30756(3)
  02b7bcc  stw 3, 188(1)
  02b7bd0  stw 3, 184(1)
  02b7bd4  stw 3, 180(1)
  02b7bd8  stw 3, 176(1)
  02b7bdc  lfs 2, 24(4)
  02b7be0  bl 0xfe4f0
  02b7be4  nop
  02b7be8  lis 4, 123
  02b7bec  ori 3, 1, 0
  02b7bf0  mtctr 29
  02b7bf4  lfs 24, 30940(4)
  02b7bf8  lwz 4, 28(26)
  02b7bfc  fadds 24, 24, 1
  02b7c00  fmuls 1, 24, 20
  02b7c04  fmuls 2, 24, 19
  02b7c08  fmuls 3, 24, 18
  02b7c0c  fmuls 25, 24, 25
  02b7c10  lfs 4, 0(30)
  02b7c14  fmuls 5, 4, 24
  02b7c18  stfs 5, 0(31)
  02b7c1c  lfs 6, 4(30)
  02b7c20  fmuls 7, 6, 24
  02b7c24  fmuls 8, 6, 1
  02b7c28  fmuls 9, 6, 2
  02b7c2c  fmuls 6, 6, 3
  02b7c30  stfs 7, 4(31)
  02b7c34  fmadds 9, 5, 22, 9
  02b7c38  fmadds 7, 5, 21, 8
  02b7c3c  lfs 8, 8(30)
  02b7c40  fmadds 5, 5, 23, 6
  02b7c44  fmuls 8, 8, 24
  02b7c48  fmadds 6, 8, 28, 7
  02b7c4c  fmadds 7, 8, 27, 9
  02b7c50  fmadds 5, 8, 26, 5
  02b7c54  stfs 8, 8(31)
  02b7c58  lfs 8, 12(30)
  02b7c5c  addic 30, 30, 16
  02b7c60  fmadds 4, 4, 25, 8
  02b7c64  fmadds 6, 8, 31, 6
  02b7c68  fmadds 7, 8, 30, 7
  02b7c6c  fmadds 5, 8, 29, 5
  02b7c70  stfs 4, 12(31)
  02b7c74  stfs 6, 0(31)
  02b7c78  stfs 7, 4(31)
  02b7c7c  stfs 5, 8(31)
  02b7c80  lfs 4, 0(28)
  02b7c84  addic 31, 31, 16
  02b7c88  lfs 5, 0(27)
  02b7c8c  addic 28, 28, 8
  02b7c90  stfs 4, 192(3)
  02b7c94  addic 27, 27, 8
  02b7c98  stfs 5, 196(3)
  02b7c9c  addic 3, 3, 8
  02b7ca0  bdnz 0x2b7c10
  02b7ca4  ori 6, 4, 0
  02b7ca8  addic 3, 1, 112
  02b7cac  li 4, 0
  02b7cb0  li 5, 0
  02b7cb4  li 7, 9
  02b7cb8  bl 0x72280
  02b7cbc  nop
  02b7cc0  ld 0, 432(1)
  02b7cc4  mtlr 0
  02b7cc8  lfd 18, 304(1)
  02b7ccc  lfd 19, 312(1)
  02b7cd0  lfd 20, 320(1)
  02b7cd4  lfd 21, 328(1)
  02b7cd8  lfd 22, 336(1)
  02b7cdc  lfd 23, 344(1)
  02b7ce0  lfd 24, 352(1)
  02b7ce4  lfd 25, 360(1)
  02b7ce8  lfd 26, 368(1)
  02b7cec  lfd 27, 376(1)
  02b7cf0  lfd 28, 384(1)
  02b7cf4  lfd 29, 392(1)
  02b7cf8  lfd 30, 400(1)
  02b7cfc  lfd 31, 408(1)
  02b7d00  ld 26, 256(1)
  02b7d04  ld 27, 264(1)
  02b7d08  ld 28, 272(1)
  02b7d0c  ld 29, 280(1)
  02b7d10  ld 30, 288(1)
  02b7d14  ld 31, 296(1)
  02b7d18  addi 1, 1, 416
  02b7d1c  blr

M1772_002b7d30:   # 0x2b7d30, 0x7e4 bytes
  02b7d30  stdu 1, -576(1)
  02b7d34  mflr 0
  02b7d38  std 0, 592(1)
  02b7d3c  stfd 21, 488(1)
  02b7d40  stfd 22, 496(1)
  02b7d44  stfd 23, 504(1)
  02b7d48  stfd 24, 512(1)
  02b7d4c  stfd 25, 520(1)
  02b7d50  stfd 26, 528(1)
  02b7d54  stfd 27, 536(1)
  02b7d58  stfd 28, 544(1)
  02b7d5c  stfd 29, 552(1)
  02b7d60  stfd 30, 560(1)
  02b7d64  stfd 31, 568(1)
  02b7d68  std 31, 480(1)
  02b7d6c  lis 6, 123
  02b7d70  ori 31, 3, 0
  02b7d74  std 28, 456(1)
  02b7d78  fmr 24, 3
  02b7d7c  ori 28, 5, 0
  02b7d80  fmr 21, 2
  02b7d84  std 30, 472(1)
  02b7d88  lis 5, 43
  02b7d8c  ori 30, 9, 0
  02b7d90  std 29, 464(1)
  02b7d94  lwz 3, 30820(6)
  02b7d98  std 27, 448(1)
  02b7d9c  ori 29, 4, 0
  02b7da0  addi 27, 5, 32032
  02b7da4  std 26, 440(1)
  02b7da8  std 25, 432(1)
  02b7dac  std 24, 424(1)
  02b7db0  std 23, 416(1)
  02b7db4  std 22, 408(1)
  02b7db8  extsw 3, 3
  02b7dbc  bl 0x685c4
  02b7dc0  nop
  02b7dc4  std 3, 232(1)
  02b7dc8  li 4, 2
  02b7dcc  li 3, 0
  02b7dd0  li 5, 0
  02b7dd4  li 6, 1
  02b7dd8  li 7, 128
  02b7ddc  bl 0x502ea8
  02b7de0  nop
  02b7de4  std 3, 248(1)
  02b7de8  lis 9, 0
  02b7dec  li 3, 0
  02b7df0  li 4, 0
  02b7df4  li 5, 1
  02b7df8  li 6, 1
  02b7dfc  li 7, 1
  02b7e00  li 8, 0
  02b7e04  ori 9, 9, 65424
  02b7e08  bl 0x502fd4
  02b7e0c  nop
  02b7e10  std 3, 240(1)
  02b7e14  li 4, 0
  02b7e18  li 3, 0
  02b7e1c  li 5, 0
  02b7e20  li 6, 0
  02b7e24  li 7, 0
  02b7e28  li 8, 0
  02b7e2c  bl 0x502f08
  02b7e30  nop
  02b7e34  lis 4, 123
  02b7e38  std 3, 224(1)
  02b7e3c  lis 5, 123
  02b7e40  slwi 29, 29, 24
  02b7e44  lwz 3, 30752(4)
  02b7e48  or 29, 3, 29
  02b7e4c  lwz 3, 30824(5)
  02b7e50  extsw 3, 3
  02b7e54  stw 29, 188(1)
  02b7e58  stw 29, 184(1)
  02b7e5c  stw 29, 180(1)
  02b7e60  stw 29, 176(1)
  02b7e64  bl 0x685c4
  02b7e68  nop
  02b7e6c  lis 4, 123
  02b7e70  std 3, 376(1)
  02b7e74  ld 5, 248(1)
  02b7e78  slwi 28, 28, 24
  02b7e7c  li 3, 0
  02b7e80  lis 25, 149
  02b7e84  lwz 4, 30756(4)
  02b7e88  addic 25, 25, 5056
  02b7e8c  ld 6, 240(1)
  02b7e90  or 28, 4, 28
  02b7e94  std 5, 392(1)
  02b7e98  ld 4, 224(1)
  02b7e9c  std 6, 384(1)
  02b7ea0  lis 5, 16256
  02b7ea4  stw 28, 332(1)
  02b7ea8  stw 28, 328(1)
  02b7eac  stw 28, 324(1)
  02b7eb0  stw 28, 320(1)
  02b7eb4  std 4, 368(1)
  02b7eb8  lfs 22, 0(27)
  02b7ebc  lis 4, 266
  02b7ec0  stw 3, 336(1)
  02b7ec4  stw 3, 340(1)
  02b7ec8  stw 3, 344(1)
  02b7ecc  lfs 25, 4(27)
  02b7ed0  lfs 1, 1716(4)
  02b7ed4  stw 3, 356(1)
  02b7ed8  stw 5, 348(1)
  02b7edc  stw 5, 352(1)
  02b7ee0  fadds 2, 1, 25
  02b7ee4  lfs 26, 320(25)
  02b7ee8  fadds 3, 1, 25
  02b7eec  stw 5, 360(1)
  02b7ef0  stw 5, 364(1)
  02b7ef4  stfs 1, 192(1)
  02b7ef8  stw 3, 196(1)
  02b7efc  stfs 1, 200(1)
  02b7f00  stw 5, 204(1)
  02b7f04  stw 3, 212(1)
  02b7f08  fmr 1, 26
  02b7f0c  stw 5, 220(1)
  02b7f10  lfs 28, 328(25)
  02b7f14  lfs 27, 324(25)
  02b7f18  stfs 2, 208(1)
  02b7f1c  stfs 3, 216(1)
  02b7f20  lfs 5, 0(31)
  02b7f24  lfs 7, 8(31)
  02b7f28  fmr 3, 28
  02b7f2c  lfs 6, 4(31)
  02b7f30  lfs 2, 24(31)
  02b7f34  fsubs 11, 5, 1
  02b7f38  lfs 4, 16(31)
  02b7f3c  fsubs 9, 2, 7
  02b7f40  lfs 8, 20(31)
  02b7f44  fsubs 4, 4, 5
  02b7f48  fsubs 8, 8, 6
  02b7f4c  fmr 2, 27
  02b7f50  fsubs 10, 7, 3
  02b7f54  fmuls 12, 11, 9
  02b7f58  fsubs 13, 6, 2
  02b7f5c  fmuls 0, 10, 8
  02b7f60  fmsubs 10, 10, 4, 12
  02b7f64  fmuls 4, 13, 4
  02b7f68  fmsubs 9, 13, 9, 0
  02b7f6c  fmuls 12, 10, 10
  02b7f70  fmsubs 11, 11, 8, 4
  02b7f74  lfs 8, 12(31)
  02b7f78  fmadds 12, 9, 9, 12
  02b7f7c  fmadds 12, 11, 11, 12
  02b7f80  fsqrts 4, 12
  02b7f84  fcmpu 0, 4, 22
  02b7f88  bt 2, 0x2b7fcc
  02b7f8c  frsqrte 4, 12
  02b7f90  lis 3, 43
  02b7f94  addi 3, 3, 32032
  02b7f98  lfs 13, 8(3)
  02b7f9c  fmuls 0, 12, 4
  02b7fa0  fmuls 31, 13, 4
  02b7fa4  fnmsubs 0, 0, 4, 25
  02b7fa8  fmadds 4, 0, 31, 4
  02b7fac  fmuls 0, 12, 4
  02b7fb0  fmuls 31, 13, 4
  02b7fb4  fnmsubs 0, 0, 4, 25
  02b7fb8  fmadds 4, 0, 31, 4
  02b7fbc  fmuls 12, 12, 4
  02b7fc0  fmuls 13, 13, 4
  02b7fc4  fnmsubs 12, 12, 4, 25
  02b7fc8  fmadds 4, 12, 13, 4
  02b7fcc  lis 3, 123
  02b7fd0  addic 27, 30, -1
  02b7fd4  li 22, 1
  02b7fd8  cmpwi 27, 1
  02b7fdc  lfs 12, 30760(3)
  02b7fe0  stfs 8, 124(1)
  02b7fe4  fmuls 4, 12, 4
  02b7fe8  stfs 8, 140(1)
  02b7fec  fmadds 8, 9, 4, 5
  02b7ff0  fmadds 12, 10, 4, 6
  02b7ff4  fmadds 13, 11, 4, 7
  02b7ff8  fnmsubs 5, 9, 4, 5
  02b7ffc  fnmsubs 6, 10, 4, 6
  02b8000  fnmsubs 4, 11, 4, 7
  02b8004  stfs 8, 112(1)
  02b8008  stfs 12, 116(1)
  02b800c  stfs 13, 120(1)
  02b8010  stfs 5, 128(1)
  02b8014  stfs 6, 132(1)
  02b8018  stfs 4, 136(1)
  02b801c  bf 1, 0x2b81e4
  02b8020  lis 3, 43
  02b8024  lis 23, 161
  02b8028  addi 3, 3, 32032
  02b802c  addic 26, 31, 16
  02b8030  addic 24, 30, -2
  02b8034  addic 23, 23, 24396
  02b8038  lfs 31, 8(3)
  02b803c  lfs 4, 0(26)
  02b8040  lfs 6, 8(26)
  02b8044  fsubs 7, 4, 1
  02b8048  lfs 1, 24(26)
  02b804c  lfs 5, 4(26)
  02b8050  fsubs 3, 6, 3
  02b8054  fsubs 1, 1, 6
  02b8058  lfs 8, 16(26)
  02b805c  lfs 9, 20(26)
  02b8060  fsubs 10, 5, 2
  02b8064  fsubs 2, 8, 4
  02b8068  fsubs 8, 9, 5
  02b806c  cmpwi 1, 22, 1
  02b8070  fmuls 9, 7, 1
  02b8074  fmuls 12, 10, 2
  02b8078  fmuls 11, 3, 8
  02b807c  fmsubs 2, 3, 2, 9
  02b8080  fmsubs 3, 7, 8, 12
  02b8084  fmsubs 1, 10, 1, 11
  02b8088  fmuls 7, 2, 2
  02b808c  fmadds 9, 1, 1, 7
  02b8090  lfs 7, 12(26)
  02b8094  fmadds 9, 3, 3, 9
  02b8098  fsqrts 8, 9
  02b809c  fcmpu 0, 8, 22
  02b80a0  bt 2, 0x2b80d8
  02b80a4  frsqrte 8, 9
  02b80a8  fmuls 10, 9, 8
  02b80ac  fmuls 11, 8, 31
  02b80b0  fnmsubs 10, 10, 8, 25
  02b80b4  fmadds 8, 10, 11, 8
  02b80b8  fmuls 10, 9, 8
  02b80bc  fmuls 11, 8, 31
  02b80c0  fnmsubs 10, 10, 8, 25
  02b80c4  fmadds 8, 10, 11, 8
  02b80c8  fmuls 9, 9, 8
  02b80cc  fmuls 10, 8, 31
  02b80d0  fnmsubs 9, 9, 8, 25
  02b80d4  fmadds 8, 9, 10, 8
  02b80d8  lis 3, 123
  02b80dc  cmpw 6, 22, 24
  02b80e0  lfs 9, 30760(3)
  02b80e4  stfs 7, 156(1)
  02b80e8  fmuls 8, 9, 8
  02b80ec  stfs 7, 172(1)
  02b80f0  fmadds 7, 1, 8, 4
  02b80f4  fmadds 9, 2, 8, 5
  02b80f8  fmadds 10, 3, 8, 6
  02b80fc  fnmsubs 1, 1, 8, 4
  02b8100  fnmsubs 2, 2, 8, 5
  02b8104  fnmsubs 3, 3, 8, 6
  02b8108  stfs 7, 144(1)
  02b810c  stfs 9, 148(1)
  02b8110  stfs 10, 152(1)
  02b8114  stfs 1, 160(1)
  02b8118  stfs 2, 164(1)
  02b811c  stfs 3, 168(1)
  02b8120  bf 6, 0x2b8138
  02b8124  lis 3, 123
  02b8128  lwz 3, 30752(3)
  02b812c  stw 3, 180(1)
  02b8130  stw 3, 176(1)
  02b8134  b 0x2b8160
  02b8138  cmpwi 1, 22, 2
  02b813c  bf 26, 0x2b8154
  02b8140  lis 3, 123
  02b8144  lwz 3, 30752(3)
  02b8148  stw 3, 188(1)
  02b814c  stw 3, 184(1)
  02b8150  b 0x2b8160
  02b8154  bf 6, 0x2b8160
  02b8158  stw 29, 180(1)
  02b815c  stw 29, 176(1)
  02b8160  lwz 6, 28(23)
  02b8164  addic 3, 1, 112
  02b8168  li 4, 0
  02b816c  li 5, 0
  02b8170  li 7, 9
  02b8174  bl 0x72280
  02b8178  nop
  02b817c  lfs 1, 144(1)
  02b8180  addic 22, 22, 1
  02b8184  lfs 2, 148(1)
  02b8188  addic 26, 26, 16
  02b818c  stfs 1, 112(1)
  02b8190  cmpw 22, 27
  02b8194  lfs 1, 152(1)
  02b8198  stfs 2, 116(1)
  02b819c  lfs 2, 156(1)
  02b81a0  stfs 1, 120(1)
  02b81a4  lfs 1, 160(1)
  02b81a8  stfs 2, 124(1)
  02b81ac  lfs 2, 164(1)
  02b81b0  stfs 1, 128(1)
  02b81b4  lfs 1, 168(1)
  02b81b8  stfs 2, 132(1)
  02b81bc  lfs 2, 172(1)
  02b81c0  stfs 1, 136(1)
  02b81c4  lfs 1, 320(25)
  02b81c8  stfs 2, 140(1)
  02b81cc  lfs 2, 324(25)
  02b81d0  fmr 26, 1
  02b81d4  lfs 3, 328(25)
  02b81d8  fmr 27, 2
  02b81dc  fmr 28, 3
  02b81e0  bt 0, 0x2b803c
  02b81e4  cmpwi 27, 0
  02b81e8  bf 1, 0x2b8478
  02b81ec  lis 3, 43
  02b81f0  fmr 31, 28
  02b81f4  lis 29, 161
  02b81f8  fmr 30, 27
  02b81fc  addi 3, 3, 32032
  02b8200  fmr 29, 26
  02b8204  ori 26, 31, 0
  02b8208  addic 30, 30, -2
  02b820c  li 31, 0
  02b8210  addic 29, 29, 24396
  02b8214  lfs 23, 8(3)
  02b8218  lfs 13, 4(26)
  02b821c  lfs 3, 20(26)
  02b8220  fsubs 13, 13, 30
  02b8224  fsubs 3, 3, 30
  02b8228  lfs 0, 0(26)
  02b822c  lfs 11, 16(26)
  02b8230  fsubs 0, 0, 29
  02b8234  fsubs 11, 11, 29
  02b8238  lfs 12, 8(26)
  02b823c  lfs 2, 24(26)
  02b8240  fsubs 12, 12, 31
  02b8244  fsubs 2, 2, 31
  02b8248  fmuls 1, 13, 13
  02b824c  fmuls 4, 3, 3
  02b8250  addic 26, 26, 16
  02b8254  fmadds 1, 0, 0, 1
  02b8258  fmadds 4, 11, 11, 4
  02b825c  fmadds 1, 12, 12, 1
  02b8260  fmadds 4, 2, 2, 4
  02b8264  fsqrts 1, 1
  02b8268  fsqrts 4, 4
  02b826c  fcmpu 6, 1, 22
  02b8270  fcmpu 0, 4, 1
  02b8274  fcmpu 1, 4, 22
  02b8278  cror 2, 1, 2
  02b827c  bt 2, 0x2b82a8
  02b8280  bf 6, 0x2b8294
  02b8284  fmr 11, 0
  02b8288  fmr 3, 13
  02b828c  fmr 2, 12
  02b8290  b 0x2b82cc
  02b8294  fdivs 1, 1, 4
  02b8298  fmuls 11, 11, 1
  02b829c  fmuls 3, 3, 1
  02b82a0  fmuls 2, 2, 1
  02b82a4  b 0x2b82cc
  02b82a8  bf 26, 0x2b82bc
  02b82ac  fmr 0, 11
  02b82b0  fmr 13, 3
  02b82b4  fmr 12, 2
  02b82b8  b 0x2b82cc
  02b82bc  fdivs 1, 4, 1
  02b82c0  fmuls 0, 0, 1
  02b82c4  fmuls 13, 13, 1
  02b82c8  fmuls 12, 12, 1
  02b82cc  fadds 31, 31, 12
  02b82d0  fadds 1, 28, 2
  02b82d4  fadds 29, 29, 0
  02b82d8  fadds 4, 26, 11
  02b82dc  fadds 30, 30, 13
  02b82e0  fadds 5, 27, 3
  02b82e4  fsubs 6, 1, 31
  02b82e8  fsubs 7, 4, 29
  02b82ec  fsubs 8, 5, 30
  02b82f0  lfs 13, 332(25)
  02b82f4  fnmsubs 31, 6, 24, 31
  02b82f8  fnmsubs 29, 7, 24, 29
  02b82fc  fnmsubs 30, 8, 24, 30
  02b8300  cmpwi 1, 31, 0
  02b8304  fsubs 12, 28, 31
  02b8308  fsubs 11, 26, 29
  02b830c  fsubs 3, 27, 30
  02b8310  fmadds 26, 7, 24, 4
  02b8314  fmuls 2, 7, 12
  02b8318  fmuls 10, 8, 11
  02b831c  fmuls 9, 6, 3
  02b8320  fmadds 27, 8, 24, 5
  02b8324  fmsubs 11, 6, 11, 2
  02b8328  fmsubs 3, 7, 3, 10
  02b832c  fmsubs 12, 8, 12, 9
  02b8330  fmadds 28, 6, 24, 1
  02b8334  fmuls 2, 11, 11
  02b8338  fmadds 2, 12, 12, 2
  02b833c  fmadds 2, 3, 3, 2
  02b8340  fsqrts 0, 2
  02b8344  fcmpu 0, 0, 22
  02b8348  bt 2, 0x2b8380
  02b834c  frsqrte 1, 2
  02b8350  fmuls 4, 2, 1
  02b8354  fmuls 5, 1, 23
  02b8358  fnmsubs 4, 4, 1, 25
  02b835c  fmadds 1, 4, 5, 1
  02b8360  fmuls 4, 2, 1
  02b8364  fmuls 5, 1, 23
  02b8368  fnmsubs 4, 4, 1, 25
  02b836c  fmadds 0, 4, 5, 1
  02b8370  fmuls 1, 2, 0
  02b8374  fmuls 2, 0, 23
  02b8378  fnmsubs 1, 1, 0, 25
  02b837c  fmadds 0, 1, 2, 0
  02b8380  fmuls 1, 0, 21
  02b8384  stfs 13, 268(1)
  02b8388  cmpw 6, 31, 30
  02b838c  stfs 13, 284(1)
  02b8390  fmadds 2, 12, 1, 29
  02b8394  fmadds 4, 11, 1, 30
  02b8398  fmadds 5, 3, 1, 31
  02b839c  fnmsubs 6, 12, 1, 29
  02b83a0  fnmsubs 7, 11, 1, 30
  02b83a4  fnmsubs 8, 3, 1, 31
  02b83a8  fmadds 9, 12, 1, 26
  02b83ac  fmadds 10, 11, 1, 27
  02b83b0  fmadds 0, 3, 1, 28
  02b83b4  fnmsubs 12, 12, 1, 26
  02b83b8  fnmsubs 11, 11, 1, 27
  02b83bc  fnmsubs 1, 3, 1, 28
  02b83c0  stfs 2, 256(1)
  02b83c4  stfs 4, 260(1)
  02b83c8  stfs 5, 264(1)
  02b83cc  stfs 6, 272(1)
  02b83d0  stfs 7, 276(1)
  02b83d4  stfs 8, 280(1)
  02b83d8  stfs 9, 288(1)
  02b83dc  stfs 10, 292(1)
  02b83e0  stfs 0, 296(1)
  02b83e4  stfs 13, 300(1)
  02b83e8  stfs 12, 304(1)
  02b83ec  stfs 11, 308(1)
  02b83f0  stfs 1, 312(1)
  02b83f4  stfs 13, 316(1)
  02b83f8  bf 6, 0x2b8410
  02b83fc  lis 3, 123
  02b8400  lwz 3, 30756(3)
  02b8404  stw 3, 324(1)
  02b8408  stw 3, 320(1)
  02b840c  b 0x2b8438
  02b8410  cmpwi 1, 31, 1
  02b8414  bf 26, 0x2b842c
  02b8418  lis 3, 123
  02b841c  lwz 3, 30756(3)
  02b8420  stw 3, 332(1)
  02b8424  stw 3, 328(1)
  02b8428  b 0x2b8438
  02b842c  bf 6, 0x2b8438
  02b8430  stw 28, 324(1)
  02b8434  stw 28, 320(1)
  02b8438  lwz 6, 28(29)
  02b843c  addic 3, 1, 256
  02b8440  li 4, 0
  02b8444  li 5, 0
  02b8448  li 7, 9
  02b844c  bl 0x72280
  02b8450  nop
  02b8454  lfs 29, 320(25)
  02b8458  addic 31, 31, 1
  02b845c  lfs 30, 324(25)
  02b8460  lfs 31, 328(25)
  02b8464  cmpw 31, 27
  02b8468  fmr 26, 29
  02b846c  fmr 27, 30
  02b8470  fmr 28, 31
  02b8474  bt 0, 0x2b8218
  02b8478  li 3, 1
  02b847c  li 4, 5
  02b8480  li 10, 2
  02b8484  li 5, 96
  02b8488  li 6, 3
  02b848c  li 7, 0
  02b8490  li 8, 0
  02b8494  li 9, 1
  02b8498  bl 0x502f7c
  02b849c  nop
  02b84a0  ori 4, 3, 0
  02b84a4  li 3, 22
  02b84a8  bl 0x174f80
  02b84ac  nop
  02b84b0  ld 0, 592(1)
  02b84b4  mtlr 0
  02b84b8  lfd 21, 488(1)
  02b84bc  lfd 22, 496(1)
  02b84c0  lfd 23, 504(1)
  02b84c4  lfd 24, 512(1)
  02b84c8  lfd 25, 520(1)
  02b84cc  lfd 26, 528(1)
  02b84d0  lfd 27, 536(1)
  02b84d4  lfd 28, 544(1)
  02b84d8  lfd 29, 552(1)
  02b84dc  lfd 30, 560(1)
  02b84e0  lfd 31, 568(1)
  02b84e4  ld 22, 408(1)
  02b84e8  ld 23, 416(1)
  02b84ec  ld 24, 424(1)
  02b84f0  ld 25, 432(1)
  02b84f4  ld 26, 440(1)
  02b84f8  ld 27, 448(1)
  02b84fc  ld 28, 456(1)
  02b8500  ld 29, 464(1)
  02b8504  ld 30, 472(1)
  02b8508  ld 31, 480(1)
  02b850c  addi 1, 1, 576
  02b8510  blr

M1772_002b8520:   # 0x2b8520, 0x1dc bytes
  02b8520  stdu 1, -160(1)
  02b8524  mflr 0
  02b8528  std 0, 176(1)
  02b852c  stfd 31, 152(1)
  02b8530  lis 4, 114
  02b8534  lis 5, 123
  02b8538  lis 6, 266
  02b853c  std 31, 144(1)
  02b8540  lis 7, 44
  02b8544  ori 31, 3, 0
  02b8548  lfs 1, -3064(4)
  02b854c  lfs 2, 30748(5)
  02b8550  lfs 3, 1716(6)
  02b8554  addi 4, 7, -31468
  02b8558  std 30, 136(1)
  02b855c  fnmsubs 1, 1, 2, 3
  02b8560  lwz 30, 120(31)
  02b8564  stfs 1, 1716(6)
  02b8568  lfs 2, 0(4)
  02b856c  lhz 3, 62(30)
  02b8570  std 29, 128(1)
  02b8574  std 28, 120(1)
  02b8578  std 27, 112(1)
  02b857c  fcmpu 0, 1, 2
  02b8580  bt 1, 0x2b859c
  02b8584  lis 4, 44
  02b8588  lis 5, 266
  02b858c  addi 4, 4, -31468
  02b8590  lfs 2, 4(4)
  02b8594  fadds 1, 1, 2
  02b8598  stfs 1, 1716(5)
  02b859c  lis 4, 123
  02b85a0  lis 7, 123
  02b85a4  lis 8, 123
  02b85a8  lis 6, 123
  02b85ac  lis 10, 123
  02b85b0  lwz 4, 30728(4)
  02b85b4  lis 5, 266
  02b85b8  lwz 7, 30736(7)
  02b85bc  extsh 9, 3
  02b85c0  lfs 1, 30760(8)
  02b85c4  addic 3, 5, 576
  02b85c8  extsw 4, 4
  02b85cc  lfs 2, 30764(6)
  02b85d0  extsw 5, 7
  02b85d4  lfs 3, 30812(10)
  02b85d8  bl 0x2b7d30
  02b85dc  lis 4, 123
  02b85e0  lis 5, 123
  02b85e4  lis 28, 123
  02b85e8  lis 29, 123
  02b85ec  lis 6, 123
  02b85f0  lwz 4, 30768(4)
  02b85f4  lwz 5, 30772(5)
  02b85f8  lis 3, 266
  02b85fc  lfs 1, 30776(28)
  02b8600  extsw 4, 4
  02b8604  lfs 2, 30780(29)
  02b8608  addic 3, 3, 896
  02b860c  lfs 3, 30816(6)
  02b8610  extsw 5, 5
  02b8614  lhz 9, 62(30)
  02b8618  extsh 9, 9
  02b861c  bl 0x2b7d30
  02b8620  lis 3, 44
  02b8624  lfs 1, 30776(28)
  02b8628  lis 30, 266
  02b862c  lfs 2, 30780(29)
  02b8630  addi 3, 3, -31468
  02b8634  lis 4, 266
  02b8638  li 9, 5
  02b863c  addic 27, 4, 1728
  02b8640  lfs 31, 8(3)
  02b8644  lhz 4, 2056(30)
  02b8648  ori 3, 27, 0
  02b864c  fmr 3, 31
  02b8650  extsh 4, 4
  02b8654  ori 5, 4, 0
  02b8658  bl 0x2b7d30
  02b865c  addic 30, 30, 2056
  02b8660  lfs 1, 30776(28)
  02b8664  lfs 2, 30780(29)
  02b8668  addic 3, 27, 80
  02b866c  li 9, 5
  02b8670  fmr 3, 31
  02b8674  lhz 4, 2(30)
  02b8678  extsh 4, 4
  02b867c  ori 5, 4, 0
  02b8680  bl 0x2b7d30
  02b8684  lhz 4, 4(30)
  02b8688  lfs 1, 30776(28)
  02b868c  addic 3, 27, 160
  02b8690  extsh 4, 4
  02b8694  lfs 2, 30780(29)
  02b8698  li 9, 5
  02b869c  fmr 3, 31
  02b86a0  ori 5, 4, 0
  02b86a4  bl 0x2b7d30
  02b86a8  lhz 4, 6(30)
  02b86ac  addic 3, 27, 240
  02b86b0  lfs 1, 30776(28)
  02b86b4  extsh 4, 4
  02b86b8  lfs 2, 30780(29)
  02b86bc  li 9, 5
  02b86c0  fmr 3, 31
  02b86c4  ori 5, 4, 0
  02b86c8  bl 0x2b7d30
  02b86cc  ori 3, 31, 0
  02b86d0  bl 0x2b77e8
  02b86d4  ld 0, 176(1)
  02b86d8  mtlr 0
  02b86dc  lfd 31, 152(1)
  02b86e0  ld 27, 112(1)
  02b86e4  ld 28, 120(1)
  02b86e8  ld 29, 128(1)
  02b86ec  ld 30, 136(1)
  02b86f0  ld 31, 144(1)
  02b86f4  addi 1, 1, 160
  02b86f8  blr

M1772_002b86fc:   # 0x2b86fc, 0x14 bytes
  02b86fc  lis 3, 123
  02b8700  lis 4, 1
  02b8704  addic 3, 3, 30948
  02b8708  stw 4, 72(3)
  02b870c  blr

M1772_002b8748:   # 0x2b8748, 0x954 bytes
  02b8748  stdu 1, -544(1)
  02b874c  mflr 0
  02b8750  std 0, 560(1)
  02b8754  stfd 19, 440(1)
  02b8758  stfd 20, 448(1)
  02b875c  stfd 21, 456(1)
  02b8760  stfd 22, 464(1)
  02b8764  stfd 23, 472(1)
  02b8768  stfd 24, 480(1)
  02b876c  stfd 25, 488(1)
  02b8770  stfd 26, 496(1)
  02b8774  stfd 27, 504(1)
  02b8778  stfd 28, 512(1)
  02b877c  stfd 29, 520(1)
  02b8780  stfd 30, 528(1)
  02b8784  stfd 31, 536(1)
  02b8788  std 31, 432(1)
  02b878c  std 30, 424(1)
  02b8790  lwz 31, 120(3)
  02b8794  lis 30, 44
  02b8798  li 3, 1
  02b879c  li 4, 0
  02b87a0  li 5, 63
  02b87a4  addi 30, 30, -30960
  02b87a8  li 6, 1
  02b87ac  li 7, 0
  02b87b0  li 8, 0
  02b87b4  li 9, 1
  02b87b8  std 29, 416(1)
  02b87bc  std 28, 408(1)
  02b87c0  std 27, 400(1)
  02b87c4  std 26, 392(1)
  02b87c8  std 25, 384(1)
  02b87cc  std 24, 376(1)
  02b87d0  std 23, 368(1)
  02b87d4  std 22, 360(1)
  02b87d8  li 10, 2
  02b87dc  bl 0x502f7c
  02b87e0  nop
  02b87e4  ori 4, 3, 0
  02b87e8  li 3, 22
  02b87ec  bl 0x174f80
  02b87f0  nop
  02b87f4  lis 3, 150
  02b87f8  lis 4, 19194
  02b87fc  addic 3, 3, -12416
  02b8800  li 27, 0
  02b8804  lis 5, -14854
  02b8808  ori 28, 27, 0
  02b880c  stw 4, 164(3)
  02b8810  ori 26, 28, 0
  02b8814  stw 5, 20(31)
  02b8818  lis 3, 149
  02b881c  lfs 1, 0(31)
  02b8820  addic 3, 3, 5056
  02b8824  lfs 2, 16(31)
  02b8828  lfs 3, 320(3)
  02b882c  lfs 4, 4(31)
  02b8830  fsubs 5, 1, 3
  02b8834  lfs 6, 20(31)
  02b8838  fsubs 1, 1, 2
  02b883c  lfs 7, 8(31)
  02b8840  lfs 8, 24(31)
  02b8844  lfs 9, 324(3)
  02b8848  fsubs 4, 4, 6
  02b884c  lfs 2, 328(3)
  02b8850  fsubs 7, 7, 8
  02b8854  lis 3, 123
  02b8858  stfs 5, 112(1)
  02b885c  lfs 6, 4(31)
  02b8860  fmuls 8, 4, 5
  02b8864  fsubs 6, 6, 9
  02b8868  addic 3, 3, 31256
  02b886c  fmuls 11, 7, 6
  02b8870  stfs 6, 116(1)
  02b8874  lfs 10, 8(31)
  02b8878  fmsubs 6, 1, 6, 8
  02b887c  fsubs 10, 10, 2
  02b8880  fmuls 8, 1, 10
  02b8884  fmsubs 11, 4, 10, 11
  02b8888  stfs 10, 120(1)
  02b888c  lfs 10, 12(31)
  02b8890  stfs 10, 124(1)
  02b8894  fmsubs 5, 7, 5, 8
  02b8898  lfs 8, 16(31)
  02b889c  fsubs 3, 8, 3
  02b88a0  fmuls 8, 5, 5
  02b88a4  fmuls 0, 4, 3
  02b88a8  stfs 3, 128(1)
  02b88ac  lfs 10, 20(31)
  02b88b0  fsubs 9, 10, 9
  02b88b4  fmadds 8, 11, 11, 8
  02b88b8  lis 9, 0
  02b88bc  fmadds 8, 6, 6, 8
  02b88c0  stfs 9, 132(1)
  02b88c4  lfs 10, 24(31)
  02b88c8  lfs 12, 0(30)
  02b88cc  fsubs 2, 10, 2
  02b88d0  stw 28, 124(1)
  02b88d4  fmuls 10, 7, 9
  02b88d8  lfsx 13, 3, 26
  02b88dc  fsqrts 8, 8
  02b88e0  stw 28, 140(1)
  02b88e4  li 3, 0
  02b88e8  li 4, 0
  02b88ec  li 5, 1
  02b88f0  li 6, 1
  02b88f4  li 7, 1
  02b88f8  li 8, 0
  02b88fc  ori 9, 9, 65424
  02b8900  fmuls 31, 1, 2
  02b8904  fmsubs 1, 1, 9, 0
  02b8908  fmsubs 2, 4, 2, 10
  02b890c  fmr 4, 12
  02b8910  fmsubs 3, 7, 3, 31
  02b8914  stfs 2, 128(1)
  02b8918  fmuls 7, 3, 3
  02b891c  stfs 3, 132(1)
  02b8920  stfs 1, 136(1)
  02b8924  fmadds 7, 2, 2, 7
  02b8928  fmadds 7, 1, 1, 7
  02b892c  fdivs 9, 13, 8
  02b8930  fsqrts 7, 7
  02b8934  fsub 10, 4, 8
  02b8938  fsub 12, 4, 8
  02b893c  fsub 13, 4, 8
  02b8940  fsub 0, 8, 4
  02b8944  fsub 31, 8, 4
  02b8948  fsub 8, 8, 4
  02b894c  fmuls 11, 11, 9
  02b8950  fmuls 5, 5, 9
  02b8954  fmuls 6, 6, 9
  02b8958  fsel 9, 10, 4, 11
  02b895c  fsel 10, 12, 4, 5
  02b8960  fsel 12, 13, 4, 6
  02b8964  fsel 9, 0, 9, 11
  02b8968  fsel 5, 31, 10, 5
  02b896c  fsel 6, 8, 12, 6
  02b8970  fsub 8, 4, 7
  02b8974  fsub 10, 7, 4
  02b8978  fsub 11, 7, 4
  02b897c  stfs 9, 112(1)
  02b8980  stfs 5, 116(1)
  02b8984  stfs 6, 120(1)
  02b8988  lfs 5, 40(31)
  02b898c  fdivs 5, 5, 7
  02b8990  fsub 6, 4, 7
  02b8994  fsub 9, 4, 7
  02b8998  fsub 7, 7, 4
  02b899c  fmuls 2, 2, 5
  02b89a0  fmuls 3, 3, 5
  02b89a4  fmuls 1, 1, 5
  02b89a8  fsel 5, 6, 4, 2
  02b89ac  fsel 6, 8, 4, 3
  02b89b0  fsel 4, 9, 4, 1
  02b89b4  fsel 2, 10, 5, 2
  02b89b8  fsel 3, 11, 6, 3
  02b89bc  fsel 1, 7, 4, 1
  02b89c0  stfs 2, 128(1)
  02b89c4  stfs 3, 132(1)
  02b89c8  stfs 1, 136(1)
  02b89cc  bl 0x502fd4
  02b89d0  nop
  02b89d4  std 3, 336(1)
  02b89d8  li 4, 0
  02b89dc  li 3, 0
  02b89e0  li 5, 0
  02b89e4  li 6, 0
  02b89e8  li 7, 0
  02b89ec  li 8, 0
  02b89f0  bl 0x502f08
  02b89f4  nop
  02b89f8  std 3, 320(1)
  02b89fc  li 5, 0
  02b8a00  li 3, 0
  02b8a04  li 4, 2
  02b8a08  li 6, 1
  02b8a0c  li 7, 128
  02b8a10  bl 0x502ea8
  02b8a14  nop
  02b8a18  lis 5, 123
  02b8a1c  lis 4, 101
  02b8a20  std 3, 344(1)
  02b8a24  ori 3, 1, 0
  02b8a28  addic 4, 4, 23140
  02b8a2c  li 8, 2
  02b8a30  lwz 6, 31056(5)
  02b8a34  ori 25, 4, 0
  02b8a38  stw 6, 284(1)
  02b8a3c  stw 6, 280(1)
  02b8a40  addic 5, 25, 4
  02b8a44  stw 6, 276(1)
  02b8a48  li 29, 4
  02b8a4c  stw 6, 272(1)
  02b8a50  ori 24, 5, 0
  02b8a54  addic 6, 3, 288
  02b8a58  addic 7, 3, 292
  02b8a5c  mtctr 8
  02b8a60  lfs 1, 0(4)
  02b8a64  lfs 2, 0(5)
  02b8a68  stfs 1, 288(3)
  02b8a6c  lfs 1, 8(4)
  02b8a70  stfs 2, 292(3)
  02b8a74  lfs 2, 8(5)
  02b8a78  addic 4, 4, 16
  02b8a7c  stfs 1, 8(6)
  02b8a80  addic 5, 5, 16
  02b8a84  stfs 2, 8(7)
  02b8a88  addic 6, 6, 16
  02b8a8c  addic 7, 7, 16
  02b8a90  addic 3, 3, 16
  02b8a94  bdnz 0x2b8a60
  02b8a98  addic 23, 1, 112
  02b8a9c  addic 3, 1, 144
  02b8aa0  ori 4, 31, 0
  02b8aa4  ori 5, 23, 0
  02b8aa8  bl 0x502a64
  02b8aac  nop
  02b8ab0  lfs 1, 144(1)
  02b8ab4  lfs 2, 148(1)
  02b8ab8  addic 3, 1, 160
  02b8abc  stfs 1, 208(1)
  02b8ac0  ori 4, 31, 0
  02b8ac4  lfs 1, 152(1)
  02b8ac8  ori 5, 23, 0
  02b8acc  stfs 2, 212(1)
  02b8ad0  lfs 2, 156(1)
  02b8ad4  stfs 1, 216(1)
  02b8ad8  stfs 2, 220(1)
  02b8adc  bl 0x5023f0
  02b8ae0  nop
  02b8ae4  lfs 1, 160(1)
  02b8ae8  addic 23, 31, 16
  02b8aec  lfs 2, 164(1)
  02b8af0  addic 22, 1, 128
  02b8af4  stfs 1, 224(1)
  02b8af8  addic 3, 1, 176
  02b8afc  lfs 1, 168(1)
  02b8b00  ori 4, 23, 0
  02b8b04  stfs 2, 228(1)
  02b8b08  ori 5, 22, 0
  02b8b0c  lfs 2, 172(1)
  02b8b10  stfs 1, 232(1)
  02b8b14  stfs 2, 236(1)
  02b8b18  bl 0x502a64
  02b8b1c  nop
  02b8b20  lfs 1, 176(1)
  02b8b24  lfs 2, 180(1)
  02b8b28  addic 3, 1, 192
  02b8b2c  stfs 1, 240(1)
  02b8b30  ori 4, 23, 0
  02b8b34  lfs 1, 184(1)
  02b8b38  ori 5, 22, 0
  02b8b3c  stfs 2, 244(1)
  02b8b40  lfs 2, 188(1)
  02b8b44  stfs 1, 248(1)
  02b8b48  stfs 2, 252(1)
  02b8b4c  bl 0x5023f0
  02b8b50  nop
  02b8b54  lfs 1, 192(1)
  02b8b58  lis 3, 123
  02b8b5c  lfs 2, 196(1)
  02b8b60  stfs 1, 256(1)
  02b8b64  addic 3, 3, 31200
  02b8b68  lfs 1, 200(1)
  02b8b6c  stfs 2, 260(1)
  02b8b70  lfs 2, 204(1)
  02b8b74  stfs 1, 264(1)
  02b8b78  stfs 2, 268(1)
  02b8b7c  lwzx 3, 3, 26
  02b8b80  extsw 3, 3
  02b8b84  bl 0x685c4
  02b8b88  nop
  02b8b8c  lis 5, 123
  02b8b90  std 3, 328(1)
  02b8b94  ori 4, 25, 0
  02b8b98  addic 25, 5, 31220
  02b8b9c  mtctr 29
  02b8ba0  ori 3, 1, 0
  02b8ba4  lfsx 1, 25, 26
  02b8ba8  lfs 2, 0(4)
  02b8bac  lfs 3, 0(24)
  02b8bb0  addic 4, 4, 8
  02b8bb4  fadds 2, 2, 1
  02b8bb8  addic 24, 24, 8
  02b8bbc  stfs 3, 292(3)
  02b8bc0  stfs 2, 288(3)
  02b8bc4  addic 3, 3, 8
  02b8bc8  bdnz 0x2b8ba8
  02b8bcc  lis 3, 123
  02b8bd0  lis 4, 114
  02b8bd4  addic 3, 3, 31240
  02b8bd8  lis 29, 161
  02b8bdc  li 5, 0
  02b8be0  addic 29, 29, 24396
  02b8be4  lfs 2, -3036(4)
  02b8be8  li 7, 9
  02b8bec  lfsx 3, 3, 26
  02b8bf0  li 4, 0
  02b8bf4  addic 3, 1, 208
  02b8bf8  fmadds 1, 3, 2, 1
  02b8bfc  lwz 6, 28(29)
  02b8c00  stfsx 1, 25, 26
  02b8c04  bl 0x72280
  02b8c08  nop
  02b8c0c  addic 27, 27, 1
  02b8c10  addic 26, 26, 4
  02b8c14  cmpwi 27, 2
  02b8c18  bt 0, 0x2b8818
  02b8c1c  li 3, 47
  02b8c20  ori 26, 30, 0
  02b8c24  bl 0x685c4
  02b8c28  nop
  02b8c2c  std 3, 328(1)
  02b8c30  ori 30, 28, 0
  02b8c34  lfs 31, 4(26)
  02b8c38  lis 3, 123
  02b8c3c  lfs 30, 8(26)
  02b8c40  lis 27, 266
  02b8c44  lfs 29, 12(26)
  02b8c48  addic 28, 3, 31080
  02b8c4c  lfs 28, 16(26)
  02b8c50  lis 3, 123
  02b8c54  lfs 27, 20(26)
  02b8c58  lis 25, 123
  02b8c5c  lfs 26, 24(26)
  02b8c60  lis 24, 123
  02b8c64  lfs 25, 28(26)
  02b8c68  addic 27, 27, 2096
  02b8c6c  lfs 24, 32(26)
  02b8c70  addic 25, 25, 31120
  02b8c74  lfs 23, 36(26)
  02b8c78  addic 24, 24, 31140
  02b8c7c  lfs 22, 40(26)
  02b8c80  lfs 21, 44(26)
  02b8c84  lfs 20, 48(26)
  02b8c88  addic 26, 3, 31100
  02b8c8c  lfs 3, 0(28)
  02b8c90  lfs 1, 16(31)
  02b8c94  lfs 19, 0(27)
  02b8c98  fneg 5, 3
  02b8c9c  fnmsubs 4, 3, 31, 1
  02b8ca0  lis 3, 16256
  02b8ca4  fmr 1, 19
  02b8ca8  fmr 2, 29
  02b8cac  fadds 7, 4, 3
  02b8cb0  stfs 4, 208(1)
  02b8cb4  lfs 6, 20(31)
  02b8cb8  fadds 6, 6, 30
  02b8cbc  stfs 6, 212(1)
  02b8cc0  lfs 8, 24(31)
  02b8cc4  stw 3, 220(1)
  02b8cc8  fmadds 3, 3, 31, 8
  02b8ccc  stfs 6, 260(1)
  02b8cd0  stw 3, 268(1)
  02b8cd4  stfs 6, 244(1)
  02b8cd8  stw 3, 252(1)
  02b8cdc  stfs 4, 224(1)
  02b8ce0  stfs 6, 228(1)
  02b8ce4  stw 3, 236(1)
  02b8ce8  fadds 4, 3, 5
  02b8cec  stfs 3, 216(1)
  02b8cf0  stfs 3, 248(1)
  02b8cf4  stfs 7, 240(1)
  02b8cf8  stfs 7, 256(1)
  02b8cfc  stfs 4, 232(1)
  02b8d00  stfs 4, 264(1)
  02b8d04  bl 0x502578
  02b8d08  nop
  02b8d0c  fsubs 2, 28, 1
  02b8d10  fsubs 3, 27, 1
  02b8d14  fsub 4, 1, 2
  02b8d18  fsel 1, 4, 2, 1
  02b8d1c  fsub 2, 3, 1
  02b8d20  fsel 2, 2, 3, 1
  02b8d24  fmr 1, 19
  02b8d28  fmuls 3, 2, 2
  02b8d2c  fmuls 4, 3, 2
  02b8d30  fmuls 5, 3, 4
  02b8d34  fmadds 4, 4, 26, 2
  02b8d38  fmr 2, 29
  02b8d3c  fmuls 6, 3, 5
  02b8d40  fmadds 4, 5, 25, 4
  02b8d44  fmuls 3, 3, 6
  02b8d48  fmadds 4, 6, 24, 4
  02b8d4c  fmadds 3, 3, 23, 4
  02b8d50  fmadds 3, 3, 31, 31
  02b8d54  stfs 3, 288(1)
  02b8d58  bl 0x502578
  02b8d5c  nop
  02b8d60  fadds 1, 1, 22
  02b8d64  fsubs 2, 28, 1
  02b8d68  fsubs 3, 27, 1
  02b8d6c  fsub 4, 1, 2
  02b8d70  fsel 1, 4, 2, 1
  02b8d74  fsub 2, 3, 1
  02b8d78  fsel 2, 2, 3, 1
  02b8d7c  fmr 1, 19
  02b8d80  fmuls 3, 2, 2
  02b8d84  fmuls 4, 3, 2
  02b8d88  fmuls 5, 3, 4
  02b8d8c  fmadds 4, 4, 26, 2
  02b8d90  fmr 2, 21
  02b8d94  fmuls 6, 3, 5
  02b8d98  fmadds 4, 5, 25, 4
  02b8d9c  fmuls 3, 3, 6
  02b8da0  fmadds 4, 6, 24, 4
  02b8da4  fmadds 3, 3, 23, 4
  02b8da8  fmadds 3, 3, 31, 31
  02b8dac  stfs 3, 292(1)
  02b8db0  bl 0x502578
  02b8db4  nop
  02b8db8  fsubs 2, 28, 1
  02b8dbc  fsubs 3, 27, 1
  02b8dc0  fsub 4, 1, 2
  02b8dc4  fsel 1, 4, 2, 1
  02b8dc8  fsub 2, 3, 1
  02b8dcc  fsel 2, 2, 3, 1
  02b8dd0  fmr 1, 19
  02b8dd4  fmuls 3, 2, 2
  02b8dd8  fmuls 4, 3, 2
  02b8ddc  fmuls 5, 3, 4
  02b8de0  fmadds 4, 4, 26, 2
  02b8de4  fmr 2, 21
  02b8de8  fmuls 6, 3, 5
  02b8dec  fmadds 4, 5, 25, 4
  02b8df0  fmuls 3, 3, 6
  02b8df4  fmadds 4, 6, 24, 4
  02b8df8  fmadds 3, 3, 23, 4
  02b8dfc  fmadds 3, 3, 31, 31
  02b8e00  stfs 3, 296(1)
  02b8e04  bl 0x502578
  02b8e08  nop
  02b8e0c  fadds 1, 1, 22
  02b8e10  fsubs 2, 28, 19
  02b8e14  fadds 3, 19, 22
  02b8e18  fsubs 4, 27, 19
  02b8e1c  fsubs 5, 28, 1
  02b8e20  fsub 6, 19, 2
  02b8e24  fsubs 8, 28, 3
  02b8e28  fsubs 7, 27, 1
  02b8e2c  fsubs 9, 27, 3
  02b8e30  fsub 10, 1, 5
  02b8e34  fsel 2, 6, 2, 19
  02b8e38  fsub 6, 3, 8
  02b8e3c  fsel 1, 10, 5, 1
  02b8e40  fsub 5, 4, 2
  02b8e44  fsel 3, 6, 8, 3
  02b8e48  fsub 6, 7, 1
  02b8e4c  fsel 2, 5, 4, 2
  02b8e50  fsub 4, 9, 3
  02b8e54  fsel 1, 6, 7, 1
  02b8e58  fmuls 5, 2, 2
  02b8e5c  fsel 3, 4, 9, 3
  02b8e60  fmuls 4, 1, 1
  02b8e64  fmuls 6, 5, 2
  02b8e68  fmuls 7, 3, 3
  02b8e6c  fmuls 8, 4, 1
  02b8e70  fmuls 9, 5, 6
  02b8e74  fmadds 2, 6, 26, 2
  02b8e78  fmuls 6, 7, 3
  02b8e7c  fmuls 10, 4, 8
  02b8e80  fmadds 1, 8, 26, 1
  02b8e84  fmuls 8, 5, 9
  02b8e88  fmuls 11, 7, 6
  02b8e8c  fmadds 3, 6, 26, 3
  02b8e90  fmadds 2, 9, 25, 2
  02b8e94  fmuls 6, 4, 10
  02b8e98  fmadds 1, 10, 25, 1
  02b8e9c  fmuls 5, 5, 8
  02b8ea0  fmuls 9, 7, 11
  02b8ea4  fmadds 3, 11, 25, 3
  02b8ea8  fmadds 2, 8, 24, 2
  02b8eac  fmuls 4, 4, 6
  02b8eb0  fmadds 1, 6, 24, 1
  02b8eb4  fmuls 6, 7, 9
  02b8eb8  fmadds 3, 9, 24, 3
  02b8ebc  fmadds 2, 5, 23, 2
  02b8ec0  fmadds 1, 4, 23, 1
  02b8ec4  fmadds 3, 6, 23, 3
  02b8ec8  fmadds 2, 2, 31, 31
  02b8ecc  fmadds 4, 1, 31, 31
  02b8ed0  fmr 1, 19
  02b8ed4  fmadds 3, 3, 31, 31
  02b8ed8  stfs 2, 304(1)
  02b8edc  fmr 2, 20
  02b8ee0  stfs 4, 300(1)
  02b8ee4  stfs 3, 308(1)
  02b8ee8  bl 0x502578
  02b8eec  nop
  02b8ef0  fsubs 2, 28, 1
  02b8ef4  fsubs 3, 27, 1
  02b8ef8  fsub 4, 1, 2
  02b8efc  fsel 1, 4, 2, 1
  02b8f00  fsub 2, 3, 1
  02b8f04  fsel 2, 2, 3, 1
  02b8f08  fmr 1, 19
  02b8f0c  fmuls 3, 2, 2
  02b8f10  fmuls 4, 3, 2
  02b8f14  fmuls 5, 3, 4
  02b8f18  fmadds 4, 4, 26, 2
  02b8f1c  fmr 2, 20
  02b8f20  fmuls 6, 3, 5
  02b8f24  fmadds 4, 5, 25, 4
  02b8f28  fmuls 3, 3, 6
  02b8f2c  fmadds 4, 6, 24, 4
  02b8f30  fmadds 3, 3, 23, 4
  02b8f34  fmadds 3, 3, 31, 31
  02b8f38  stfs 3, 312(1)
  02b8f3c  bl 0x502578
  02b8f40  nop
  02b8f44  fadds 1, 1, 22
  02b8f48  fsubs 2, 28, 1
  02b8f4c  fsubs 3, 27, 1
  02b8f50  fsub 4, 1, 2
  02b8f54  fsel 1, 4, 2, 1
  02b8f58  fsub 2, 3, 1
  02b8f5c  fsel 1, 2, 3, 1
  02b8f60  lfs 2, 0(24)
  02b8f64  lwz 3, 0(26)
  02b8f68  lwz 4, 0(25)
  02b8f6c  extsw 3, 3
  02b8f70  extsw 4, 4
  02b8f74  fmuls 3, 1, 1
  02b8f78  fmuls 4, 3, 1
  02b8f7c  fmuls 5, 3, 4
  02b8f80  fmadds 4, 4, 26, 1
  02b8f84  fmr 1, 2
  02b8f88  fmuls 2, 3, 5
  02b8f8c  fmadds 4, 5, 25, 4
  02b8f90  fmuls 3, 3, 2
  02b8f94  fmadds 2, 2, 24, 4
  02b8f98  fmadds 2, 3, 23, 2
  02b8f9c  fmadds 2, 2, 31, 31
  02b8fa0  stfs 2, 316(1)
  02b8fa4  bl 0x5027bc
  02b8fa8  nop
  02b8fac  stw 3, 284(1)
  02b8fb0  li 4, 0
  02b8fb4  stw 3, 280(1)
  02b8fb8  li 5, 0
  02b8fbc  stw 3, 276(1)
  02b8fc0  li 7, 9
  02b8fc4  lwz 6, 28(29)
  02b8fc8  stw 3, 272(1)
  02b8fcc  addic 3, 1, 208
  02b8fd0  bl 0x72280
  02b8fd4  nop
  02b8fd8  addic 30, 30, 1
  02b8fdc  addic 28, 28, 4
  02b8fe0  cmpwi 30, 5
  02b8fe4  addic 27, 27, 4
  02b8fe8  addic 26, 26, 4
  02b8fec  addic 25, 25, 4
  02b8ff0  addic 24, 24, 4
  02b8ff4  bt 0, 0x2b8c8c
  02b8ff8  li 3, 1
  02b8ffc  li 4, 5
  02b9000  li 10, 2
  02b9004  li 5, 96
  02b9008  li 6, 3
  02b900c  li 7, 0
  02b9010  li 8, 0
  02b9014  li 9, 1
  02b9018  bl 0x502f7c
  02b901c  nop
  02b9020  ori 4, 3, 0
  02b9024  li 3, 22
  02b9028  bl 0x174f80
  02b902c  nop
  02b9030  ld 0, 560(1)
  02b9034  mtlr 0
  02b9038  lfd 19, 440(1)
  02b903c  lfd 20, 448(1)
  02b9040  lfd 21, 456(1)
  02b9044  lfd 22, 464(1)
  02b9048  lfd 23, 472(1)
  02b904c  lfd 24, 480(1)
  02b9050  lfd 25, 488(1)
  02b9054  lfd 26, 496(1)
  02b9058  lfd 27, 504(1)
  02b905c  lfd 28, 512(1)
  02b9060  lfd 29, 520(1)
  02b9064  lfd 30, 528(1)
  02b9068  lfd 31, 536(1)
  02b906c  ld 22, 360(1)
  02b9070  ld 23, 368(1)
  02b9074  ld 24, 376(1)
  02b9078  ld 25, 384(1)
  02b907c  ld 26, 392(1)
  02b9080  ld 27, 400(1)
  02b9084  ld 28, 408(1)
  02b9088  ld 29, 416(1)
  02b908c  ld 30, 424(1)
  02b9090  ld 31, 432(1)
  02b9094  addi 1, 1, 544
  02b9098  blr

UpdateMoby_1772:   # 0x2b90b8, 0x3c4 bytes
  02b90b8  stdu 1, -256(1)
  02b90bc  mflr 0
  02b90c0  std 0, 272(1)
  02b90c4  stfd 29, 232(1)
  02b90c8  stfd 30, 240(1)
  02b90cc  stfd 31, 248(1)
  02b90d0  std 31, 224(1)
  02b90d4  std 30, 216(1)
  02b90d8  ori 31, 3, 0
  02b90dc  lwz 30, 120(31)
  02b90e0  lwz 3, 76(30)
  02b90e4  std 29, 208(1)
  02b90e8  std 28, 200(1)
  02b90ec  std 27, 192(1)
  02b90f0  std 26, 184(1)
  02b90f4  cmpwi 3, -1
  02b90f8  bt 2, 0x2b9174
  02b90fc  lis 4, 151
  02b9100  addic 4, 4, -25376
  02b9104  lwz 5, 8324(4)
  02b9108  cmpwi 5, 50
  02b910c  bf 2, 0x2b9138
  02b9110  lwz 5, 5616(4)
  02b9114  cmpwi 5, 0
  02b9118  bt 2, 0x2b9138
  02b911c  lhz 5, 166(5)
  02b9120  cmpwi 5, 1379
  02b9124  bf 2, 0x2b9138
  02b9128  lis 3, 44
  02b912c  addi 3, 3, -28516
  02b9130  lfs 1, 0(3)
  02b9134  b 0x2b916c
  02b9138  addic 5, 4, 128
  02b913c  extsw 4, 3
  02b9140  ori 3, 5, 0
  02b9144  bl 0x110b70
  02b9148  nop
  02b914c  lis 4, 44
  02b9150  cmpwi 3, 0
  02b9154  addi 4, 4, -28516
  02b9158  lfs 1, 0(4)
  02b915c  bt 2, 0x2b916c
  02b9160  lis 3, 44
  02b9164  addi 3, 3, -28516
  02b9168  lfs 1, 4(3)
  02b916c  lis 3, 161
  02b9170  stfs 1, 2356(3)
  02b9174  lbz 3, 32(31)
  02b9178  cmpwi 3, 0
  02b917c  bf 2, 0x2b92e4
  02b9180  lis 3, 44
  02b9184  vspltisw 3, 0
  02b9188  li 4, 1
  02b918c  vspltisw 2, 1
  02b9190  addi 5, 3, -28516
  02b9194  li 6, 8
  02b9198  lis 3, 266
  02b919c  stb 4, 32(31)
  02b91a0  li 4, 5
  02b91a4  addic 3, 3, 2096
  02b91a8  lvlx 4, 6, 5
  02b91ac  mtctr 4
  02b91b0  vspltw 4, 4, 0
  02b91b4  vcfsx 5, 3, 0
  02b91b8  vspltisw 6, -1
  02b91bc  vadduwm 3, 3, 2
  02b91c0  vslw 6, 6, 6
  02b91c4  vmaddfp 5, 5, 4, 6
  02b91c8  stvewx 5, 0, 3
  02b91cc  addic 3, 3, 4
  02b91d0  bdnz 0x2b91b4
  02b91d4  lfs 1, 16(31)
  02b91d8  lis 3, 123
  02b91dc  stfs 1, 0(30)
  02b91e0  lfs 1, 20(31)
  02b91e4  lis 29, 123
  02b91e8  lis 4, 44
  02b91ec  stfs 1, 4(30)
  02b91f0  lfs 1, 24(31)
  02b91f4  addi 28, 4, -28516
  02b91f8  lis 27, 123
  02b91fc  stfs 1, 8(30)
  02b9200  lfs 1, 28(31)
  02b9204  addic 26, 1, 112
  02b9208  stfs 1, 12(30)
  02b920c  lfs 1, 31280(3)
  02b9210  lfs 2, 31276(29)
  02b9214  ori 3, 26, 0
  02b9218  lfs 31, 12(28)
  02b921c  fadds 1, 1, 2
  02b9220  lfs 2, 72(31)
  02b9224  lfs 3, 31284(27)
  02b9228  fdivs 1, 1, 3
  02b922c  fmr 3, 31
  02b9230  bl 0xfe610
  02b9234  nop
  02b9238  lfs 1, 31276(29)
  02b923c  fmr 3, 31
  02b9240  addic 29, 1, 128
  02b9244  lfs 2, 31284(27)
  02b9248  lfs 4, 68(30)
  02b924c  fdivs 1, 1, 2
  02b9250  ori 3, 29, 0
  02b9254  fmr 2, 4
  02b9258  bl 0xfe610
  02b925c  nop
  02b9260  addic 3, 1, 144
  02b9264  ori 4, 26, 0
  02b9268  ori 5, 29, 0
  02b926c  bl 0x5023f0
  02b9270  nop
  02b9274  lfs 1, 144(1)
  02b9278  lfs 2, 148(1)
  02b927c  addic 3, 1, 160
  02b9280  stfs 1, 112(1)
  02b9284  ori 4, 30, 0
  02b9288  lfs 1, 152(1)
  02b928c  ori 5, 26, 0
  02b9290  stfs 2, 116(1)
  02b9294  lfs 2, 156(1)
  02b9298  stfs 1, 120(1)
  02b929c  stfs 2, 124(1)
  02b92a0  bl 0x5023f0
  02b92a4  nop
  02b92a8  lfs 1, 160(1)
  02b92ac  li 3, 255
  02b92b0  stfs 1, 16(30)
  02b92b4  lfs 1, 164(1)
  02b92b8  stfs 1, 20(30)
  02b92bc  lfs 1, 168(1)
  02b92c0  stfs 1, 24(30)
  02b92c4  lfs 1, 172(1)
  02b92c8  stfs 1, 28(30)
  02b92cc  stb 3, 48(31)
  02b92d0  lfs 1, 16(28)
  02b92d4  lfs 2, 16(30)
  02b92d8  fsubs 1, 2, 1
  02b92dc  stfs 1, 16(30)
  02b92e0  b 0x2b9448
  02b92e4  lis 3, 44
  02b92e8  li 28, 0
  02b92ec  addi 3, 3, -28516
  02b92f0  lis 6, 123
  02b92f4  lis 7, 123
  02b92f8  lis 5, 123
  02b92fc  lis 30, 114
  02b9300  lfs 30, 20(3)
  02b9304  ori 29, 28, 0
  02b9308  lfs 31, 12(3)
  02b930c  addic 6, 6, 31140
  02b9310  addic 5, 5, 31160
  02b9314  addic 7, 7, 31180
  02b9318  lis 4, 16256
  02b931c  lis 3, -16512
  02b9320  lfs 1, 0(7)
  02b9324  lfs 2, 0(5)
  02b9328  lfs 3, 0(6)
  02b932c  fmuls 1, 1, 2
  02b9330  lfs 2, -3036(30)
  02b9334  fmadds 1, 1, 2, 3
  02b9338  fcmpu 0, 1, 30
  02b933c  stfs 1, 0(6)
  02b9340  cror 6, 0, 2
  02b9344  bt 6, 0x2b9354
  02b9348  stw 4, 0(6)
  02b934c  fmr 1, 30
  02b9350  stw 3, 0(5)
  02b9354  fcmpu 0, 1, 31
  02b9358  cror 6, 1, 2
  02b935c  bt 6, 0x2b9368
  02b9360  stw 29, 0(6)
  02b9364  stw 4, 0(5)
  02b9368  addic 28, 28, 1
  02b936c  addic 7, 7, 4
  02b9370  cmpwi 28, 5
  02b9374  addic 6, 6, 4
  02b9378  addic 5, 5, 4
  02b937c  bt 0, 0x2b9320
  02b9380  lis 3, 44
  02b9384  lis 27, 266
  02b9388  addi 3, 3, -28516
  02b938c  lis 26, 123
  02b9390  ori 28, 29, 0
  02b9394  addic 26, 26, 31060
  02b9398  addic 27, 27, 2096
  02b939c  lfs 29, 24(3)
  02b93a0  lfs 1, 0(26)
  02b93a4  fmuls 3, 1, 29
  02b93a8  lfs 1, 0(27)
  02b93ac  lfs 4, -3036(30)
  02b93b0  fmuls 2, 3, 4
  02b93b4  bl 0x502578
  02b93b8  nop
  02b93bc  addic 28, 28, 1
  02b93c0  stfs 1, 0(27)
  02b93c4  addic 26, 26, 4
  02b93c8  cmpwi 28, 5
  02b93cc  addic 27, 27, 4
  02b93d0  bt 0, 0x2b93a0
  02b93d4  lis 3, 123
  02b93d8  lis 4, 123
  02b93dc  lfs 1, -3036(30)
  02b93e0  addic 3, 3, 31220
  02b93e4  addic 4, 4, 31240
  02b93e8  ori 28, 29, 0
  02b93ec  lfs 2, 0(3)
  02b93f0  lfs 3, 0(4)
  02b93f4  fmadds 2, 3, 1, 2
  02b93f8  fcmpu 0, 2, 30
  02b93fc  stfs 2, 0(3)
  02b9400  bt 0, 0x2b940c
  02b9404  fsubs 2, 2, 30
  02b9408  stfs 2, 0(3)
  02b940c  fcmpu 0, 2, 31
  02b9410  cror 6, 1, 2
  02b9414  bt 6, 0x2b9420
  02b9418  fadds 2, 2, 30
  02b941c  stfs 2, 0(3)
  02b9420  addic 28, 28, 1
  02b9424  addic 4, 4, 4
  02b9428  cmpwi 28, 2
  02b942c  addic 3, 3, 4
  02b9430  bt 0, 0x2b93ec
  02b9434  lis 3, 113
  02b9438  ori 4, 31, 0
  02b943c  addic 3, 3, -20776
  02b9440  bl 0x6d720
  02b9444  nop
  02b9448  ld 0, 272(1)
  02b944c  mtlr 0
  02b9450  lfd 29, 232(1)
  02b9454  lfd 30, 240(1)
  02b9458  lfd 31, 248(1)
  02b945c  ld 26, 184(1)
  02b9460  ld 27, 192(1)
  02b9464  ld 28, 200(1)
  02b9468  ld 29, 208(1)
  02b946c  ld 30, 216(1)
  02b9470  ld 31, 224(1)
  02b9474  addi 1, 1, 256
  02b9478  blr

M1772_002b947c:   # 0x2b947c, 0x14 bytes
  02b947c  lis 3, 123
  02b9480  lis 4, 1
  02b9484  addic 3, 3, 31300
  02b9488  stw 4, 72(3)
  02b948c  blr
