# game/update/moby717.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M717_00431a0c:   # 0x431a0c, 0x14 bytes
  0431a0c  lis 3, 134
  0431a10  lis 4, 1
  0431a14  addic 3, 3, -24880
  0431a18  stw 4, 72(3)
  0431a1c  blr

M717_00431a30:   # 0x431a30, 0x248 bytes
  0431a30  stdu 1, -160(1)
  0431a34  mflr 0
  0431a38  std 0, 176(1)
  0431a3c  lwz 3, 120(3)
  0431a40  sldi 6, 4, 4
  0431a44  addic 4, 4, 1
  0431a48  lwz 7, 580(3)
  0431a4c  addc 6, 7, 6
  0431a50  clrldi 6, 6, 32
  0431a54  lfs 1, 16(6)
  0431a58  stfs 1, 0(5)
  0431a5c  lfs 2, 20(6)
  0431a60  stfs 2, 4(5)
  0431a64  lfs 3, 24(6)
  0431a68  stfs 3, 8(5)
  0431a6c  lfs 3, 28(6)
  0431a70  stfs 3, 12(5)
  0431a74  lwz 3, 580(3)
  0431a78  lwz 5, 0(3)
  0431a7c  divw 6, 4, 5
  0431a80  mullw 5, 6, 5
  0431a84  subc 4, 4, 5
  0431a88  sldi 4, 4, 4
  0431a8c  addc 3, 3, 4
  0431a90  clrldi 3, 3, 32
  0431a94  lis 4, 67
  0431a98  lfs 3, 16(3)
  0431a9c  lfs 4, 20(3)
  0431aa0  fsubs 1, 3, 1
  0431aa4  addi 3, 4, 6688
  0431aa8  fsubs 2, 4, 2
  0431aac  lis 4, 115
  0431ab0  addic 4, 4, 22784
  0431ab4  fabs 5, 1
  0431ab8  fabs 4, 2
  0431abc  stfs 1, 112(1)
  0431ac0  stfs 2, 116(1)
  0431ac4  fsubs 1, 5, 4
  0431ac8  stfs 1, 120(1)
  0431acc  lwz 5, 112(1)
  0431ad0  lfs 1, 0(3)
  0431ad4  lfs 2, 112(1)
  0431ad8  lwz 3, 116(1)
  0431adc  lfs 3, 116(1)
  0431ae0  lwz 6, 120(1)
  0431ae4  rlwinm 3, 3, 3, 29, 29
  0431ae8  fabs 6, 3
  0431aec  lfs 3, 120(1)
  0431af0  fabs 2, 2
  0431af4  rlwimi 3, 6, 2, 30, 30
  0431af8  fsub 7, 3, 1
  0431afc  fsub 8, 3, 1
  0431b00  rlwimi 3, 5, 4, 28, 28
  0431b04  ori 5, 4, 0
  0431b08  rlwimi 5, 3, 2, 26, 28
  0431b0c  slwi 3, 3, 2
  0431b10  clrldi 5, 5, 32
  0431b14  fsel 4, 7, 2, 4
  0431b18  lfsx 3, 4, 3
  0431b1c  fsel 5, 8, 6, 5
  0431b20  lfs 2, 4(5)
  0431b24  fcmpu 0, 4, 1
  0431b28  bt 1, 0x431b30
  0431b2c  b 0x431c54
  0431b30  fsubs 6, 5, 4
  0431b34  fadds 4, 5, 4
  0431b38  addic 6, 1, 16
  0431b3c  li 3, 2
  0431b40  addic 5, 6, 108
  0431b44  addic 4, 6, 124
  0431b48  mtctr 3
  0431b4c  fdivs 4, 6, 4
  0431b50  fmuls 6, 4, 4
  0431b54  stfs 4, 136(1)
  0431b58  stfs 4, 128(1)
  0431b5c  stfs 4, 132(1)
  0431b60  stfs 4, 124(1)
  0431b64  lfs 7, 136(1)
  0431b68  lfs 8, 128(1)
  0431b6c  lfs 9, 132(1)
  0431b70  fmuls 4, 6, 6
  0431b74  fmuls 8, 8, 6
  0431b78  fmuls 7, 7, 4
  0431b7c  fmuls 5, 4, 4
  0431b80  fmuls 4, 9, 4
  0431b84  stfs 8, 128(1)
  0431b88  fmuls 6, 7, 6
  0431b8c  stfs 4, 132(1)
  0431b90  stfs 6, 136(1)
  0431b94  lfs 4, 108(6)
  0431b98  fmuls 4, 4, 5
  0431b9c  stfs 4, 124(6)
  0431ba0  lfs 4, 4(5)
  0431ba4  addic 6, 6, 8
  0431ba8  addic 5, 5, 8
  0431bac  fmuls 4, 4, 5
  0431bb0  stfs 4, 4(4)
  0431bb4  addic 4, 4, 8
  0431bb8  bdnz 0x431b94
  0431bbc  ori 7, 1, 0
  0431bc0  lis 6, 115
  0431bc4  li 8, 4
  0431bc8  addic 5, 7, 124
  0431bcc  addic 6, 6, 22752
  0431bd0  ori 4, 5, 0
  0431bd4  mtctr 8
  0431bd8  lfs 4, 124(7)
  0431bdc  lfs 5, 0(6)
  0431be0  fmuls 4, 4, 5
  0431be4  lfs 5, 4(6)
  0431be8  addic 6, 6, 8
  0431bec  stfs 4, 124(7)
  0431bf0  lfs 4, 4(5)
  0431bf4  addic 7, 7, 8
  0431bf8  fmuls 4, 4, 5
  0431bfc  stfs 4, 4(5)
  0431c00  addic 5, 5, 8
  0431c04  bdnz 0x431bd8
  0431c08  ori 5, 3, 0
  0431c0c  ori 3, 1, 0
  0431c10  mtctr 5
  0431c14  lfs 4, 124(3)
  0431c18  fadds 1, 1, 4
  0431c1c  addic 3, 3, 16
  0431c20  lfs 4, 4(4)
  0431c24  lfs 5, 8(4)
  0431c28  lfs 6, 12(4)
  0431c2c  addic 4, 4, 16
  0431c30  fadds 1, 1, 4
  0431c34  fadds 1, 1, 5
  0431c38  fadds 1, 1, 6
  0431c3c  bdnz 0x431c14
  0431c40  lis 3, 67
  0431c44  addi 3, 3, 6688
  0431c48  lfs 4, 4(3)
  0431c4c  fadds 1, 1, 4
  0431c50  fmadds 1, 1, 3, 2
  0431c54  lis 3, 67
  0431c58  addi 3, 3, 6688
  0431c5c  lfs 2, 8(3)
  0431c60  bl 0x502578
  0431c64  nop
  0431c68  ld 0, 176(1)
  0431c6c  mtlr 0
  0431c70  addi 1, 1, 160
  0431c74  blr

M717_00431c90:   # 0x431c90, 0x5a0 bytes
  0431c90  stdu 1, -288(1)
  0431c94  mflr 0
  0431c98  std 0, 304(1)
  0431c9c  stfd 29, 264(1)
  0431ca0  stfd 30, 272(1)
  0431ca4  stfd 31, 280(1)
  0431ca8  std 31, 256(1)
  0431cac  ori 31, 3, 0
  0431cb0  lis 4, 67
  0431cb4  std 28, 232(1)
  0431cb8  std 27, 224(1)
  0431cbc  addic 5, 1, 112
  0431cc0  addi 28, 4, 7288
  0431cc4  std 30, 248(1)
  0431cc8  ori 27, 1, 0
  0431ccc  lwz 30, 120(31)
  0431cd0  lhz 4, 600(30)
  0431cd4  std 29, 240(1)
  0431cd8  extsh 4, 4
  0431cdc  bl 0x431a30
  0431ce0  lfs 1, 112(1)
  0431ce4  lfs 2, 16(31)
  0431ce8  lfs 3, 116(1)
  0431cec  lfs 4, 20(31)
  0431cf0  fsubs 1, 1, 2
  0431cf4  fsubs 2, 3, 4
  0431cf8  lis 29, 115
  0431cfc  addic 29, 29, 22784
  0431d00  fabs 3, 1
  0431d04  fabs 4, 2
  0431d08  stfs 1, 140(1)
  0431d0c  stfs 2, 144(1)
  0431d10  fsubs 1, 3, 4
  0431d14  stfs 1, 148(1)
  0431d18  lwz 3, 140(1)
  0431d1c  lfs 29, 0(28)
  0431d20  lfs 1, 140(1)
  0431d24  lwz 4, 144(1)
  0431d28  lfs 2, 144(1)
  0431d2c  lfs 31, 4(28)
  0431d30  fabs 1, 1
  0431d34  fabs 5, 2
  0431d38  rlwinm 4, 4, 3, 29, 29
  0431d3c  lwz 5, 148(1)
  0431d40  lfs 2, 148(1)
  0431d44  rlwimi 4, 5, 2, 30, 30
  0431d48  fsub 6, 2, 29
  0431d4c  fsub 7, 2, 29
  0431d50  rlwimi 4, 3, 4, 28, 28
  0431d54  ori 3, 29, 0
  0431d58  rlwimi 3, 4, 2, 26, 28
  0431d5c  slwi 4, 4, 2
  0431d60  clrldi 3, 3, 32
  0431d64  fsel 4, 6, 1, 4
  0431d68  lfsx 1, 29, 4
  0431d6c  lfs 2, 4(3)
  0431d70  fsel 3, 7, 5, 3
  0431d74  fcmpu 0, 4, 29
  0431d78  bt 1, 0x431d84
  0431d7c  fmr 30, 29
  0431d80  b 0x431e9c
  0431d84  fsubs 5, 3, 4
  0431d88  fadds 3, 3, 4
  0431d8c  addic 3, 1, 16
  0431d90  li 7, 2
  0431d94  addic 4, 3, 168
  0431d98  addic 5, 3, 184
  0431d9c  mtctr 7
  0431da0  fdivs 3, 5, 3
  0431da4  fmuls 4, 3, 3
  0431da8  stfs 3, 184(27)
  0431dac  stfs 3, 188(27)
  0431db0  stfs 3, 192(27)
  0431db4  stfs 3, 196(27)
  0431db8  lfs 3, 196(1)
  0431dbc  lfs 5, 188(1)
  0431dc0  lfs 7, 192(1)
  0431dc4  fmuls 6, 4, 4
  0431dc8  fmuls 5, 5, 4
  0431dcc  fmuls 8, 3, 6
  0431dd0  fmuls 7, 7, 6
  0431dd4  fmuls 3, 6, 6
  0431dd8  stfs 5, 188(1)
  0431ddc  fmuls 4, 8, 4
  0431de0  stfs 7, 192(1)
  0431de4  stfs 4, 196(1)
  0431de8  lfs 4, 168(3)
  0431dec  fmuls 4, 4, 3
  0431df0  stfs 4, 184(3)
  0431df4  lfs 4, 4(4)
  0431df8  addic 3, 3, 8
  0431dfc  addic 4, 4, 8
  0431e00  fmuls 4, 4, 3
  0431e04  stfs 4, 4(5)
  0431e08  addic 5, 5, 8
  0431e0c  bdnz 0x431de8
  0431e10  li 5, 4
  0431e14  ori 3, 1, 0
  0431e18  mtctr 5
  0431e1c  lis 4, 115
  0431e20  addic 5, 3, 184
  0431e24  addic 4, 4, 22752
  0431e28  ori 6, 5, 0
  0431e2c  lfs 3, 184(3)
  0431e30  lfs 4, 0(4)
  0431e34  fmuls 3, 3, 4
  0431e38  lfs 4, 4(4)
  0431e3c  addic 4, 4, 8
  0431e40  stfs 3, 184(3)
  0431e44  lfs 3, 4(5)
  0431e48  addic 3, 3, 8
  0431e4c  fmuls 3, 3, 4
  0431e50  stfs 3, 4(5)
  0431e54  addic 5, 5, 8
  0431e58  bdnz 0x431e2c
  0431e5c  fmr 30, 29
  0431e60  ori 3, 1, 0
  0431e64  mtctr 7
  0431e68  lfs 3, 184(3)
  0431e6c  lfs 4, 4(6)
  0431e70  fadds 3, 30, 3
  0431e74  lfs 5, 8(6)
  0431e78  addic 3, 3, 16
  0431e7c  lfs 30, 12(6)
  0431e80  addic 6, 6, 16
  0431e84  fadds 3, 3, 4
  0431e88  fadds 3, 3, 5
  0431e8c  fadds 30, 3, 30
  0431e90  bdnz 0x431e68
  0431e94  fadds 30, 30, 31
  0431e98  fmadds 30, 30, 1, 2
  0431e9c  lhz 4, 600(30)
  0431ea0  addic 5, 1, 112
  0431ea4  ori 3, 31, 0
  0431ea8  extsh 4, 4
  0431eac  bl 0x431a30
  0431eb0  lfs 1, 116(1)
  0431eb4  lfs 2, 516(30)
  0431eb8  lfs 3, 112(1)
  0431ebc  fsubs 4, 1, 2
  0431ec0  lfs 1, 512(30)
  0431ec4  lfs 2, 72(31)
  0431ec8  fsubs 3, 3, 1
  0431ecc  fmr 1, 30
  0431ed0  fmuls 4, 4, 4
  0431ed4  fmadds 30, 3, 3, 4
  0431ed8  fsqrts 30, 30
  0431edc  bl 0x5026a0
  0431ee0  nop
  0431ee4  lis 3, 67
  0431ee8  addi 3, 3, 7288
  0431eec  lfs 2, 8(3)
  0431ef0  fcmpu 0, 1, 2
  0431ef4  bt 0, 0x431f10
  0431ef8  lis 3, 67
  0431efc  addi 3, 3, 7288
  0431f00  lfs 1, 12(3)
  0431f04  fcmpu 0, 30, 1
  0431f08  cror 6, 0, 2
  0431f0c  bt 6, 0x431f24
  0431f10  lis 3, 67
  0431f14  addi 3, 3, 7288
  0431f18  lfs 1, 16(3)
  0431f1c  fcmpu 0, 30, 1
  0431f20  bt 1, 0x432200
  0431f24  lhz 4, 600(30)
  0431f28  lwz 3, 580(30)
  0431f2c  extsh 4, 4
  0431f30  addic 5, 4, 1
  0431f34  lwz 4, 0(3)
  0431f38  lis 28, 165
  0431f3c  divw 6, 5, 4
  0431f40  mullw 4, 6, 4
  0431f44  lwz 6, 544(30)
  0431f48  addic 28, 28, 7136
  0431f4c  subc 5, 5, 4
  0431f50  slwi 6, 6, 2
  0431f54  extsw 4, 6
  0431f58  sth 5, 600(30)
  0431f5c  lwzx 4, 28, 4
  0431f60  cmpw 3, 4
  0431f64  bt 2, 0x431fc0
  0431f68  lwz 3, 0(3)
  0431f6c  extsh 6, 5
  0431f70  addic 3, 3, -1
  0431f74  cmpw 6, 3
  0431f78  bf 2, 0x432040
  0431f7c  ori 5, 4, 0
  0431f80  fmr 1, 29
  0431f84  addic 3, 30, 512
  0431f88  stw 5, 580(30)
  0431f8c  bl 0x1367d0
  0431f90  nop
  0431f94  extsh 4, 3
  0431f98  li 5, 5
  0431f9c  lwz 6, 580(30)
  0431fa0  sth 3, 600(30)
  0431fa4  ori 3, 6, 0
  0431fa8  li 6, 1
  0431fac  bl 0x10cd94
  0431fb0  nop
  0431fb4  ori 5, 3, 0
  0431fb8  sth 5, 600(30)
  0431fbc  b 0x432040
  0431fc0  extsh 4, 5
  0431fc4  sldi 4, 4, 4
  0431fc8  addc 3, 3, 4
  0431fcc  clrldi 3, 3, 32
  0431fd0  lwz 3, 28(3)
  0431fd4  cmpwi 3, 0
  0431fd8  bf 1, 0x432040
  0431fdc  li 3, 100
  0431fe0  bl 0xfc620
  0431fe4  nop
  0431fe8  cmpwi 3, 0
  0431fec  lhz 5, 600(30)
  0431ff0  bf 1, 0x432040
  0431ff4  extsh 3, 5
  0431ff8  lwz 4, 580(30)
  0431ffc  sldi 3, 3, 4
  0432000  addc 3, 4, 3
  0432004  clrldi 3, 3, 32
  0432008  lfs 1, 28(3)
  043200c  bl 0x502758
  0432010  nop
  0432014  addic 3, 3, -1
  0432018  li 5, 0
  043201c  sldi 3, 3, 2
  0432020  addc 3, 30, 3
  0432024  clrldi 3, 3, 32
  0432028  lwz 3, 548(3)
  043202c  sth 5, 600(30)
  0432030  slwi 3, 3, 2
  0432034  extsw 3, 3
  0432038  lwzx 3, 28, 3
  043203c  stw 3, 580(30)
  0432040  extsh 4, 5
  0432044  addic 5, 1, 112
  0432048  ori 3, 31, 0
  043204c  bl 0x431a30
  0432050  lfs 1, 112(1)
  0432054  lfs 2, 16(31)
  0432058  lfs 3, 116(1)
  043205c  lfs 4, 20(31)
  0432060  fsubs 1, 1, 2
  0432064  fsubs 2, 3, 4
  0432068  fabs 3, 1
  043206c  fabs 4, 2
  0432070  stfs 1, 128(1)
  0432074  stfs 2, 132(1)
  0432078  fsubs 1, 3, 4
  043207c  stfs 1, 136(1)
  0432080  lwz 3, 128(1)
  0432084  lfs 1, 128(1)
  0432088  lwz 4, 132(1)
  043208c  lfs 2, 132(1)
  0432090  lwz 5, 136(1)
  0432094  rlwinm 4, 4, 3, 29, 29
  0432098  fabs 5, 2
  043209c  lfs 2, 136(1)
  04320a0  fabs 1, 1
  04320a4  rlwimi 4, 5, 2, 30, 30
  04320a8  fsub 6, 2, 29
  04320ac  fsub 7, 2, 29
  04320b0  rlwimi 4, 3, 4, 28, 28
  04320b4  ori 3, 29, 0
  04320b8  rlwimi 3, 4, 2, 26, 28
  04320bc  slwi 4, 4, 2
  04320c0  clrldi 3, 3, 32
  04320c4  fsel 4, 6, 1, 4
  04320c8  lfsx 1, 29, 4
  04320cc  fsel 3, 7, 5, 3
  04320d0  lfs 2, 4(3)
  04320d4  fcmpu 0, 4, 29
  04320d8  bt 1, 0x4320e4
  04320dc  fmr 30, 29
  04320e0  b 0x4321fc
  04320e4  fsubs 5, 3, 4
  04320e8  fadds 3, 3, 4
  04320ec  addic 3, 1, 16
  04320f0  li 7, 2
  04320f4  addic 5, 3, 152
  04320f8  addic 4, 3, 136
  04320fc  mtctr 7
  0432100  fdivs 3, 5, 3
  0432104  fmuls 4, 3, 3
  0432108  stfs 3, 152(27)
  043210c  stfs 3, 156(27)
  0432110  stfs 3, 160(27)
  0432114  stfs 3, 164(27)
  0432118  lfs 3, 164(1)
  043211c  lfs 5, 156(1)
  0432120  lfs 7, 160(1)
  0432124  fmuls 6, 4, 4
  0432128  fmuls 5, 5, 4
  043212c  fmuls 8, 3, 6
  0432130  fmuls 7, 7, 6
  0432134  fmuls 3, 6, 6
  0432138  stfs 5, 156(1)
  043213c  fmuls 4, 8, 4
  0432140  stfs 7, 160(1)
  0432144  stfs 4, 164(1)
  0432148  lfs 4, 136(3)
  043214c  fmuls 4, 4, 3
  0432150  stfs 4, 152(3)
  0432154  lfs 4, 4(4)
  0432158  addic 4, 4, 8
  043215c  fmuls 4, 4, 3
  0432160  addic 3, 3, 8
  0432164  stfs 4, 4(5)
  0432168  addic 5, 5, 8
  043216c  bdnz 0x432148
  0432170  li 5, 4
  0432174  ori 3, 1, 0
  0432178  mtctr 5
  043217c  lis 4, 115
  0432180  addic 5, 3, 152
  0432184  addic 4, 4, 22752
  0432188  ori 6, 5, 0
  043218c  lfs 3, 152(3)
  0432190  lfs 4, 0(4)
  0432194  fmuls 3, 3, 4
  0432198  lfs 4, 4(4)
  043219c  addic 4, 4, 8
  04321a0  stfs 3, 152(3)
  04321a4  lfs 3, 4(5)
  04321a8  addic 3, 3, 8
  04321ac  fmuls 3, 3, 4
  04321b0  stfs 3, 4(5)
  04321b4  addic 5, 5, 8
  04321b8  bdnz 0x43218c
  04321bc  ori 3, 1, 0
  04321c0  fmr 30, 29
  04321c4  mtctr 7
  04321c8  lfs 3, 152(3)
  04321cc  lfs 4, 4(6)
  04321d0  fadds 3, 30, 3
  04321d4  lfs 5, 8(6)
  04321d8  lfs 30, 12(6)
  04321dc  addic 3, 3, 16
  04321e0  addic 6, 6, 16
  04321e4  fadds 3, 3, 4
  04321e8  fadds 3, 3, 5
  04321ec  fadds 30, 3, 30
  04321f0  bdnz 0x4321c8
  04321f4  fadds 30, 30, 31
  04321f8  fmadds 30, 30, 1, 2
  04321fc  b 0x431e9c
  0432200  ld 0, 304(1)
  0432204  mtlr 0
  0432208  lfd 29, 264(1)
  043220c  lfd 30, 272(1)
  0432210  lfd 31, 280(1)
  0432214  ld 27, 224(1)
  0432218  ld 28, 232(1)
  043221c  ld 29, 240(1)
  0432220  ld 30, 248(1)
  0432224  ld 31, 256(1)
  0432228  addi 1, 1, 288
  043222c  blr

M717_00432258:   # 0x432258, 0x4c0 bytes
  0432258  stdu 1, -400(1)
  043225c  mflr 0
  0432260  std 0, 416(1)
  0432264  stfd 24, 336(1)
  0432268  stfd 25, 344(1)
  043226c  stfd 26, 352(1)
  0432270  stfd 27, 360(1)
  0432274  stfd 28, 368(1)
  0432278  stfd 29, 376(1)
  043227c  stfd 30, 384(1)
  0432280  stfd 31, 392(1)
  0432284  addi 0, 1, 272
  0432288  stvx 30, 0, 0
  043228c  addic 0, 0, 16
  0432290  stvx 31, 0, 0
  0432294  lis 4, 67
  0432298  lis 5, 114
  043229c  std 30, 320(1)
  04322a0  addi 4, 4, 8752
  04322a4  lis 30, 151
  04322a8  addic 30, 30, -25376
  04322ac  lfs 1, 0(4)
  04322b0  std 31, 328(1)
  04322b4  lfs 2, -3056(5)
  04322b8  lwz 31, 120(3)
  04322bc  fmuls 1, 2, 1
  04322c0  lwz 3, 2196(30)
  04322c4  fctiwz 1, 1
  04322c8  stfd 1, 248(1)
  04322cc  lwz 4, 252(1)
  04322d0  std 29, 312(1)
  04322d4  cmpw 3, 4
  04322d8  bt 0, 0x4326cc
  04322dc  addic 3, 31, 612
  04322e0  bl 0x4fff60
  04322e4  nop
  04322e8  cmpwi 3, 0
  04322ec  bt 2, 0x4326cc
  04322f0  lwz 30, 2156(30)
  04322f4  cmpwi 30, 0
  04322f8  bt 2, 0x4326cc
  04322fc  lwz 30, 120(30)
  0432300  lwz 3, 68(30)
  0432304  cmpwi 3, -1
  0432308  bt 2, 0x4324e8
  043230c  extsw 4, 3
  0432310  addic 3, 1, 240
  0432314  li 5, 0
  0432318  li 6, 0
  043231c  bl 0x104800
  0432320  nop
  0432324  lwz 3, 240(1)
  0432328  cmpwi 3, 0
  043232c  bt 2, 0x4324e8
  0432330  lis 4, 67
  0432334  li 5, 20
  0432338  addi 4, 4, 8752
  043233c  li 6, 24
  0432340  lfs 25, 4(4)
  0432344  lfs 26, 8(4)
  0432348  lfs 27, 12(4)
  043234c  lfs 28, 16(4)
  0432350  lvlx 30, 5, 4
  0432354  lvlx 31, 6, 4
  0432358  vspltw 30, 30, 0
  043235c  vspltw 31, 31, 0
  0432360  lhz 4, 166(3)
  0432364  cmpwi 4, 1139
  0432368  bf 2, 0x4324c4
  043236c  lfs 30, 516(31)
  0432370  lfs 1, 20(3)
  0432374  lfs 29, 512(31)
  0432378  fsubs 30, 1, 30
  043237c  lfs 1, 520(31)
  0432380  lfs 2, 16(3)
  0432384  fadds 31, 1, 25
  0432388  fsubs 29, 2, 29
  043238c  lfs 1, 24(3)
  0432390  fmuls 2, 30, 30
  0432394  fsubs 31, 1, 31
  0432398  lfs 24, 28(3)
  043239c  fmadds 1, 29, 29, 2
  04323a0  fmadds 1, 31, 31, 1
  04323a4  fsqrts 1, 1
  04323a8  fcmpu 0, 1, 26
  04323ac  bt 1, 0x4324c4
  04323b0  addic 29, 1, 112
  04323b4  ori 3, 29, 0
  04323b8  bl 0x500af8
  04323bc  nop
  04323c0  lwz 4, 240(1)
  04323c4  ori 3, 29, 0
  04323c8  addic 4, 4, 192
  04323cc  bl 0x5010c0
  04323d0  nop
  04323d4  lfs 1, 128(1)
  04323d8  lfs 2, 112(1)
  04323dc  fmuls 1, 1, 30
  04323e0  lfs 3, 144(1)
  04323e4  lfs 4, 160(1)
  04323e8  lfs 5, 132(1)
  04323ec  lfs 6, 136(1)
  04323f0  fmuls 5, 5, 30
  04323f4  fmuls 6, 6, 30
  04323f8  fmadds 1, 2, 29, 1
  04323fc  lfs 2, 116(1)
  0432400  lfs 7, 120(1)
  0432404  lfs 8, 148(1)
  0432408  fmadds 5, 2, 29, 5
  043240c  fmadds 6, 7, 29, 6
  0432410  lfs 2, 164(1)
  0432414  lfs 7, 152(1)
  0432418  lfs 29, 168(1)
  043241c  fmadds 1, 3, 31, 1
  0432420  fmadds 3, 8, 31, 5
  0432424  fmadds 4, 4, 24, 1
  0432428  fmadds 1, 7, 31, 6
  043242c  fabs 4, 4
  0432430  fcmpu 0, 4, 27
  0432434  cror 6, 1, 2
  0432438  bt 6, 0x4324c4
  043243c  fmadds 2, 2, 24, 3
  0432440  fabs 2, 2
  0432444  fcmpu 0, 2, 28
  0432448  cror 6, 1, 2
  043244c  bt 6, 0x4324c4
  0432450  fmadds 1, 29, 24, 1
  0432454  fabs 1, 1
  0432458  fcmpu 0, 1, 28
  043245c  cror 6, 1, 2
  0432460  bt 6, 0x4324c4
  0432464  vspltisw 2, -1
  0432468  lis 3, 114
  043246c  li 4, -3056
  0432470  vspltisw 3, -1
  0432474  li 5, 602
  0432478  vspltisw 6, -16
  043247c  vslw 2, 2, 2
  0432480  addi 6, 5, 16
  0432484  vslw 3, 3, 3
  0432488  lvlx 4, 4, 3
  043248c  lvlx 5, 5, 31
  0432490  vmaddfp 2, 4, 30, 2
  0432494  vmaddfp 3, 4, 31, 3
  0432498  li 3, 612
  043249c  lvrx 4, 6, 31
  04324a0  vor 4, 5, 4
  04324a4  vsrw 4, 4, 6
  04324a8  vctsxs 2, 2, 0
  04324ac  vctsxs 3, 3, 0
  04324b0  vadduwm 2, 4, 2
  04324b4  vspltw 3, 3, 0
  04324b8  vsplth 2, 2, 1
  04324bc  stvehx 2, 5, 31
  04324c0  stvewx 3, 3, 31
  04324c4  addic 3, 1, 240
  04324c8  lwz 4, 240(1)
  04324cc  li 5, 0
  04324d0  li 6, 0
  04324d4  bl 0x10466c
  04324d8  nop
  04324dc  lwz 3, 240(1)
  04324e0  cmpwi 3, 0
  04324e4  bf 2, 0x432360
  04324e8  lwz 30, 72(30)
  04324ec  cmpwi 30, -1
  04324f0  bt 2, 0x4326cc
  04324f4  extsw 4, 30
  04324f8  addic 3, 1, 244
  04324fc  li 5, 0
  0432500  li 6, 0
  0432504  bl 0x104800
  0432508  nop
  043250c  lwz 30, 244(1)
  0432510  cmpwi 30, 0
  0432514  bt 2, 0x4326cc
  0432518  lis 3, 67
  043251c  li 4, 20
  0432520  addi 3, 3, 8752
  0432524  li 5, 24
  0432528  lfs 25, 8(3)
  043252c  lfs 26, 28(3)
  0432530  lfs 27, 32(3)
  0432534  lfs 28, 12(3)
  0432538  lvlx 30, 4, 3
  043253c  lvlx 31, 5, 3
  0432540  vspltw 30, 30, 0
  0432544  vspltw 31, 31, 0
  0432548  lhz 3, 166(30)
  043254c  cmpwi 3, 1140
  0432550  bf 2, 0x4326a8
  0432554  lfs 30, 20(30)
  0432558  lfs 1, 516(31)
  043255c  lfs 29, 16(30)
  0432560  fsubs 30, 30, 1
  0432564  lfs 1, 512(31)
  0432568  lfs 31, 24(30)
  043256c  fsubs 29, 29, 1
  0432570  lfs 1, 520(31)
  0432574  fsubs 31, 31, 1
  0432578  fmuls 1, 30, 30
  043257c  lfs 24, 28(30)
  0432580  fmadds 1, 29, 29, 1
  0432584  fmadds 1, 31, 31, 1
  0432588  fsqrts 1, 1
  043258c  fcmpu 0, 1, 25
  0432590  bt 1, 0x4326a8
  0432594  addic 30, 1, 176
  0432598  ori 3, 30, 0
  043259c  bl 0x500af8
  04325a0  nop
  04325a4  lwz 4, 244(1)
  04325a8  ori 3, 30, 0
  04325ac  addic 4, 4, 192
  04325b0  bl 0x5010c0
  04325b4  nop
  04325b8  lfs 1, 192(1)
  04325bc  lfs 2, 176(1)
  04325c0  fmuls 1, 1, 30
  04325c4  lfs 3, 208(1)
  04325c8  lfs 4, 224(1)
  04325cc  lfs 5, 196(1)
  04325d0  lfs 6, 200(1)
  04325d4  fmuls 5, 5, 30
  04325d8  lfs 7, 180(1)
  04325dc  fmuls 6, 6, 30
  04325e0  lfs 8, 184(1)
  04325e4  lfs 9, 212(1)
  04325e8  fmadds 1, 2, 29, 1
  04325ec  lfs 2, 228(1)
  04325f0  fmadds 1, 3, 31, 1
  04325f4  fmadds 3, 7, 29, 5
  04325f8  fmadds 5, 8, 29, 6
  04325fc  lfs 6, 216(1)
  0432600  lfs 29, 232(1)
  0432604  fmadds 4, 4, 24, 1
  0432608  fmadds 3, 9, 31, 3
  043260c  fmadds 1, 6, 31, 5
  0432610  fabs 4, 4
  0432614  fcmpu 0, 4, 26
  0432618  cror 6, 1, 2
  043261c  bt 6, 0x4326a8
  0432620  fmadds 2, 2, 24, 3
  0432624  fabs 2, 2
  0432628  fcmpu 0, 2, 27
  043262c  cror 6, 1, 2
  0432630  bt 6, 0x4326a8
  0432634  fmadds 1, 29, 24, 1
  0432638  fabs 1, 1
  043263c  fcmpu 0, 1, 28
  0432640  cror 6, 1, 2
  0432644  bt 6, 0x4326a8
  0432648  vspltisw 2, -1
  043264c  lis 3, 114
  0432650  vspltisw 3, -1
  0432654  li 4, -3056
  0432658  li 5, 602
  043265c  vslw 2, 2, 2
  0432660  vslw 3, 3, 3
  0432664  lvlx 4, 4, 3
  0432668  addi 3, 5, 16
  043266c  vmaddfp 2, 4, 30, 2
  0432670  vmaddfp 3, 4, 31, 3
  0432674  lvlx 5, 5, 31
  0432678  vspltisw 4, -16
  043267c  lvrx 6, 3, 31
  0432680  li 3, 612
  0432684  vor 5, 5, 6
  0432688  vsrw 4, 5, 4
  043268c  vctsxs 2, 2, 0
  0432690  vctsxs 3, 3, 0
  0432694  vadduwm 2, 4, 2
  0432698  vspltw 3, 3, 0
  043269c  vsplth 2, 2, 1
  04326a0  stvehx 2, 5, 31
  04326a4  stvewx 3, 3, 31
  04326a8  lwz 4, 244(1)
  04326ac  addic 3, 1, 244
  04326b0  li 5, 0
  04326b4  li 6, 0
  04326b8  bl 0x10466c
  04326bc  nop
  04326c0  lwz 30, 244(1)
  04326c4  cmpwi 30, 0
  04326c8  bf 2, 0x432548
  04326cc  li 0, 272
  04326d0  lvx 30, 1, 0
  04326d4  addic 0, 0, 16
  04326d8  lvx 31, 1, 0
  04326dc  ld 0, 416(1)
  04326e0  mtlr 0
  04326e4  lfd 24, 336(1)
  04326e8  lfd 25, 344(1)
  04326ec  lfd 26, 352(1)
  04326f0  lfd 27, 360(1)
  04326f4  lfd 28, 368(1)
  04326f8  lfd 29, 376(1)
  04326fc  lfd 30, 384(1)
  0432700  lfd 31, 392(1)
  0432704  ld 29, 312(1)
  0432708  ld 30, 320(1)
  043270c  ld 31, 328(1)
  0432710  addi 1, 1, 400
  0432714  blr

M717_00432718:   # 0x432718, 0x110 bytes
  0432718  stdu 1, -128(1)
  043271c  mflr 0
  0432720  std 0, 144(1)
  0432724  std 31, 120(1)
  0432728  lwz 31, 120(3)
  043272c  lis 4, 165
  0432730  addic 4, 4, 7136
  0432734  lwz 3, 544(31)
  0432738  slwi 5, 3, 2
  043273c  lwz 3, 580(31)
  0432740  extsw 5, 5
  0432744  lwzx 4, 4, 5
  0432748  cmpw 3, 4
  043274c  bt 2, 0x432814
  0432750  lwz 4, 588(31)
  0432754  cmpwi 4, 0
  0432758  bt 1, 0x432814
  043275c  lhz 5, 600(31)
  0432760  lis 6, 16256
  0432764  extsh 5, 5
  0432768  sldi 4, 5, 4
  043276c  addc 4, 3, 4
  0432770  clrldi 4, 4, 32
  0432774  lwz 4, 28(4)
  0432778  cmpw 4, 6
  043277c  bf 2, 0x432814
  0432780  ori 7, 4, 0
  0432784  lis 8, 16384
  0432788  ori 6, 5, 0
  043278c  cmpw 7, 8
  0432790  ori 4, 3, 0
  0432794  bt 2, 0x4327dc
  0432798  ori 6, 5, 0
  043279c  ori 3, 4, 0
  04327a0  ori 4, 6, 0
  04327a4  li 6, 1
  04327a8  li 5, 1
  04327ac  bl 0x10cd94
  04327b0  nop
  04327b4  ori 6, 3, 0
  04327b8  lwz 3, 580(31)
  04327bc  sldi 5, 6, 4
  04327c0  ori 4, 3, 0
  04327c4  lis 7, 16384
  04327c8  addc 5, 4, 5
  04327cc  clrldi 5, 5, 32
  04327d0  lwz 5, 28(5)
  04327d4  cmpw 5, 7
  04327d8  bf 2, 0x43279c
  04327dc  sldi 4, 6, 4
  04327e0  stw 6, 636(31)
  04327e4  addc 3, 3, 4
  04327e8  li 4, 1
  04327ec  clrldi 3, 3, 32
  04327f0  lfs 1, 16(3)
  04327f4  stfs 1, 528(31)
  04327f8  lfs 1, 20(3)
  04327fc  stfs 1, 532(31)
  0432800  lfs 1, 24(3)
  0432804  stfs 1, 536(31)
  0432808  lfs 1, 28(3)
  043280c  stw 4, 620(31)
  0432810  stfs 1, 540(31)
  0432814  ld 0, 144(1)
  0432818  mtlr 0
  043281c  ld 31, 120(1)
  0432820  addi 1, 1, 128
  0432824  blr

M717_00432828:   # 0x432828, 0x28 bytes
  0432828  li 4, 5
  043282c  li 5, 6
  0432830  subc 4, 4, 3
  0432834  subc 5, 5, 3
  0432838  cntlzw 4, 4
  043283c  sldi 4, 4, 58
  0432840  sradi 4, 4, 63
  0432844  and 4, 4, 5
  0432848  addc 3, 3, 4
  043284c  blr

M717_00432858:   # 0x432858, 0x1cc bytes
  0432858  stdu 1, -192(1)
  043285c  mflr 0
  0432860  std 0, 208(1)
  0432864  addi 0, 1, 144
  0432868  stvx 31, 0, 0
  043286c  std 30, 176(1)
  0432870  std 28, 160(1)
  0432874  ori 30, 5, 0
  0432878  li 0, 112
  043287c  std 31, 184(1)
  0432880  ori 28, 3, 0
  0432884  ori 31, 6, 0
  0432888  stw 30, 112(1)
  043288c  std 29, 168(1)
  0432890  stw 30, 116(1)
  0432894  ori 29, 4, 0
  0432898  stw 30, 120(1)
  043289c  stw 30, 124(1)
  04328a0  lvx 31, 1, 0
  04328a4  bl 0xfddc0
  04328a8  nop
  04328ac  lwz 3, 120(28)
  04328b0  lwz 3, 616(3)
  04328b4  cmpwi 3, 0
  04328b8  bt 2, 0x4329fc
  04328bc  li 4, 92
  04328c0  lis 5, 67
  04328c4  vspltisw 5, -1
  04328c8  addi 5, 5, 10320
  04328cc  vspltisw 7, -1
  04328d0  lvlx 2, 4, 28
  04328d4  vslw 5, 5, 5
  04328d8  vrefp 3, 2
  04328dc  lvlx 4, 0, 5
  04328e0  vspltw 4, 4, 0
  04328e4  li 5, 5
  04328e8  vslw 7, 7, 7
  04328ec  li 6, 6
  04328f0  lfs 1, 92(3)
  04328f4  subc 5, 5, 29
  04328f8  lfs 2, 92(28)
  04328fc  subc 6, 6, 29
  0432900  vspltisw 8, -1
  0432904  cntlzw 5, 5
  0432908  fdivs 1, 1, 2
  043290c  vspltisw 9, -1
  0432910  sldi 5, 5, 58
  0432914  vspltisw 11, -8
  0432918  vslw 8, 8, 8
  043291c  sradi 5, 5, 63
  0432920  vslw 9, 9, 9
  0432924  and 28, 5, 6
  0432928  extsw 6, 30
  043292c  addc 28, 29, 28
  0432930  sldi 5, 28, 2
  0432934  vnmsubfp 6, 3, 2, 4
  0432938  vcfsx 10, 31, 0
  043293c  vmaddfp 3, 3, 6, 5
  0432940  lvlx 5, 4, 3
  0432944  lwz 4, 36(3)
  0432948  std 6, 128(1)
  043294c  addc 4, 4, 5
  0432950  li 5, 16
  0432954  clrldi 4, 4, 32
  0432958  vnmsubfp 6, 3, 2, 4
  043295c  lwz 4, 72(4)
  0432960  vmaddfp 3, 3, 6, 7
  0432964  vspltisw 6, -1
  0432968  vnmsubfp 2, 3, 2, 4
  043296c  vslw 4, 6, 6
  0432970  lvlx 6, 5, 4
  0432974  lfd 2, 128(1)
  0432978  vsrw 6, 6, 11
  043297c  fcfid 2, 2
  0432980  vmaddfp 2, 3, 2, 8
  0432984  vcfux 3, 6, 0
  0432988  frsp 2, 2
  043298c  vmaddfp 2, 2, 5, 9
  0432990  vspltw 3, 3, 0
  0432994  fmuls 1, 2, 1
  0432998  vmaddfp 31, 10, 2, 4
  043299c  vspltw 31, 31, 0
  04329a0  vcmpgtfp. 2, 31, 3
  04329a4  bt 26, 0x4329c4
  04329a8  lbz 4, 16(4)
  04329ac  clrldi 4, 4, 32
  04329b0  std 4, 128(1)
  04329b4  lfd 1, 128(1)
  04329b8  fcfid 1, 1
  04329bc  frsp 1, 1
  04329c0  b 0x4329dc
  04329c4  vspltisw 2, 0
  04329c8  vcmpgefp. 2, 31, 2
  04329cc  bf 26, 0x4329dc
  04329d0  lis 4, 67
  04329d4  addi 4, 4, 10320
  04329d8  lfs 1, 4(4)
  04329dc  fctiwz 1, 1
  04329e0  ori 4, 28, 0
  04329e4  ori 6, 31, 0
  04329e8  stfd 1, 128(1)
  04329ec  lwz 5, 132(1)
  04329f0  extsw 5, 5
  04329f4  bl 0xfddc0
  04329f8  nop
  04329fc  li 0, 144
  0432a00  lvx 31, 1, 0
  0432a04  ld 0, 208(1)
  0432a08  mtlr 0
  0432a0c  ld 28, 160(1)
  0432a10  ld 29, 168(1)
  0432a14  ld 30, 176(1)
  0432a18  ld 31, 184(1)
  0432a1c  addi 1, 1, 192
  0432a20  blr

M717_00432a70:   # 0x432a70, 0x930 bytes
  0432a70  stdu 1, -192(1)
  0432a74  mflr 0
  0432a78  std 0, 208(1)
  0432a7c  stfd 29, 168(1)
  0432a80  stfd 30, 176(1)
  0432a84  stfd 31, 184(1)
  0432a88  std 31, 160(1)
  0432a8c  std 28, 136(1)
  0432a90  ori 31, 3, 0
  0432a94  lwz 28, 120(31)
  0432a98  lwz 3, 620(28)
  0432a9c  std 30, 152(1)
  0432aa0  std 29, 144(1)
  0432aa4  cmpwi 3, 0
  0432aa8  bt 2, 0x43327c
  0432aac  lbz 4, 83(31)
  0432ab0  cmpwi 4, 5
  0432ab4  bt 2, 0x432c20
  0432ab8  lis 4, 67
  0432abc  lis 5, 114
  0432ac0  addi 4, 4, 10788
  0432ac4  lfs 2, 0(4)
  0432ac8  lfs 1, -3056(5)
  0432acc  fmuls 2, 1, 2
  0432ad0  fctiwz 2, 2
  0432ad4  stfd 2, 120(1)
  0432ad8  lwz 4, 124(1)
  0432adc  cmpw 3, 4
  0432ae0  bt 1, 0x432c20
  0432ae4  lis 3, 67
  0432ae8  addi 3, 3, 10788
  0432aec  li 4, 5
  0432af0  li 5, 1
  0432af4  lfs 2, 4(3)
  0432af8  ori 3, 31, 0
  0432afc  fmuls 1, 1, 2
  0432b00  fctiwz 1, 1
  0432b04  stfd 1, 120(1)
  0432b08  lwz 30, 124(1)
  0432b0c  extsw 30, 30
  0432b10  ori 6, 30, 0
  0432b14  bl 0xfddc0
  0432b18  nop
  0432b1c  lwz 3, 120(31)
  0432b20  lwz 3, 616(3)
  0432b24  cmpwi 3, 0
  0432b28  bt 2, 0x432c18
  0432b2c  li 4, 92
  0432b30  vspltisw 5, -1
  0432b34  lis 6, 67
  0432b38  li 5, 8
  0432b3c  addi 6, 6, 10788
  0432b40  vspltisw 7, -1
  0432b44  vslw 5, 5, 5
  0432b48  lvlx 2, 4, 31
  0432b4c  vrefp 3, 2
  0432b50  lvlx 4, 5, 6
  0432b54  vspltw 4, 4, 0
  0432b58  li 5, 16
  0432b5c  vslw 7, 7, 7
  0432b60  vspltisw 8, -1
  0432b64  vspltisw 9, -1
  0432b68  vslw 9, 9, 9
  0432b6c  vnmsubfp 6, 3, 2, 4
  0432b70  vmaddfp 3, 3, 6, 5
  0432b74  lvlx 6, 4, 3
  0432b78  vslw 5, 8, 8
  0432b7c  lwz 4, 36(3)
  0432b80  vspltisw 8, -8
  0432b84  lwz 4, 96(4)
  0432b88  lfs 1, 92(3)
  0432b8c  vnmsubfp 10, 3, 2, 4
  0432b90  lvlx 11, 5, 4
  0432b94  lfs 2, 92(31)
  0432b98  fdivs 1, 1, 2
  0432b9c  vmaddfp 3, 3, 10, 7
  0432ba0  vsrw 7, 11, 8
  0432ba4  vcfux 7, 7, 0
  0432ba8  vnmsubfp 2, 3, 2, 4
  0432bac  vspltw 4, 7, 0
  0432bb0  vmaddfp 2, 3, 2, 5
  0432bb4  vmaddfp 2, 2, 6, 9
  0432bb8  vspltw 2, 2, 0
  0432bbc  vcmpgtfp. 3, 2, 4
  0432bc0  bt 26, 0x432be0
  0432bc4  lbz 4, 16(4)
  0432bc8  clrldi 4, 4, 32
  0432bcc  std 4, 120(1)
  0432bd0  lfd 1, 120(1)
  0432bd4  fcfid 1, 1
  0432bd8  frsp 1, 1
  0432bdc  b 0x432bf8
  0432be0  vspltisw 3, 0
  0432be4  vcmpgefp. 2, 2, 3
  0432be8  bf 26, 0x432bf8
  0432bec  lis 4, 67
  0432bf0  addi 4, 4, 10788
  0432bf4  lfs 1, 12(4)
  0432bf8  fctiwz 1, 1
  0432bfc  li 4, 6
  0432c00  ori 6, 30, 0
  0432c04  stfd 1, 120(1)
  0432c08  lwz 5, 124(1)
  0432c0c  extsw 5, 5
  0432c10  bl 0xfddc0
  0432c14  nop
  0432c18  li 3, -1
  0432c1c  sth 3, 626(28)
  0432c20  lis 3, 67
  0432c24  addic 6, 1, 112
  0432c28  addi 30, 3, 10788
  0432c2c  lis 3, 114
  0432c30  addic 7, 1, 116
  0432c34  lfs 1, 16(30)
  0432c38  lfs 2, -3048(3)
  0432c3c  lfs 4, 20(30)
  0432c40  fmuls 1, 2, 1
  0432c44  lfs 5, 588(28)
  0432c48  lfs 3, 520(28)
  0432c4c  lfs 6, 536(28)
  0432c50  fsubs 3, 3, 6
  0432c54  fmuls 1, 1, 4
  0432c58  fsubs 2, 5, 1
  0432c5c  bl 0xfcb40
  0432c60  nop
  0432c64  lfs 31, 24(30)
  0432c68  cmpwi 3, 1
  0432c6c  fmr 29, 31
  0432c70  bt 0, 0x432ca0
  0432c74  lwz 3, 112(1)
  0432c78  lfs 1, 112(1)
  0432c7c  cmpwi 3, 0
  0432c80  bf 1, 0x432ca0
  0432c84  bl 0x502758
  0432c88  nop
  0432c8c  extsw 3, 3
  0432c90  std 3, 120(1)
  0432c94  lfd 1, 120(1)
  0432c98  fcfid 31, 1
  0432c9c  frsp 31, 31
  0432ca0  lis 3, 67
  0432ca4  lis 4, 114
  0432ca8  addi 3, 3, 10788
  0432cac  lfs 30, 28(3)
  0432cb0  lfs 1, -3056(4)
  0432cb4  lwz 3, 620(28)
  0432cb8  fmuls 2, 1, 30
  0432cbc  fctiwz 2, 2
  0432cc0  stfd 2, 120(1)
  0432cc4  lwz 4, 124(1)
  0432cc8  cmpw 3, 4
  0432ccc  bf 1, 0x432ea0
  0432cd0  lis 4, 67
  0432cd4  addi 4, 4, 10788
  0432cd8  lfs 2, 32(4)
  0432cdc  fmuls 2, 1, 2
  0432ce0  fctiwz 2, 2
  0432ce4  stfd 2, 120(1)
  0432ce8  lwz 4, 124(1)
  0432cec  cmpw 3, 4
  0432cf0  bf 0, 0x432ea0
  0432cf4  lbz 3, 83(31)
  0432cf8  cmpwi 3, 5
  0432cfc  bf 2, 0x432ea0
  0432d00  lis 3, 67
  0432d04  addi 3, 3, 10788
  0432d08  lfs 2, 36(3)
  0432d0c  fmuls 1, 1, 2
  0432d10  fctidz 1, 1
  0432d14  fcfid 1, 1
  0432d18  frsp 1, 1
  0432d1c  fcmpu 0, 31, 1
  0432d20  cror 6, 0, 2
  0432d24  bt 6, 0x432ea0
  0432d28  li 4, 3
  0432d2c  li 3, 0
  0432d30  bl 0xfe484
  0432d34  nop
  0432d38  lis 4, 114
  0432d3c  addic 30, 3, 1
  0432d40  ori 3, 31, 0
  0432d44  li 5, 1
  0432d48  lfs 1, -3056(4)
  0432d4c  sth 30, 626(28)
  0432d50  fmuls 1, 1, 30
  0432d54  extsh 30, 30
  0432d58  ori 4, 30, 0
  0432d5c  fctiwz 1, 1
  0432d60  stfd 1, 120(1)
  0432d64  lwz 29, 124(1)
  0432d68  extsw 29, 29
  0432d6c  ori 6, 29, 0
  0432d70  bl 0xfddc0
  0432d74  nop
  0432d78  lwz 3, 120(31)
  0432d7c  lwz 3, 616(3)
  0432d80  cmpwi 3, 0
  0432d84  bt 2, 0x432ea0
  0432d88  li 5, 92
  0432d8c  lis 4, 67
  0432d90  vspltisw 5, -1
  0432d94  li 6, 8
  0432d98  addi 4, 4, 10788
  0432d9c  lvlx 2, 5, 31
  0432da0  vslw 5, 5, 5
  0432da4  vrefp 3, 2
  0432da8  lvlx 4, 6, 4
  0432dac  vspltw 4, 4, 0
  0432db0  li 4, 5
  0432db4  vspltisw 7, -1
  0432db8  li 6, 6
  0432dbc  subc 4, 4, 30
  0432dc0  vspltisw 8, -1
  0432dc4  subc 6, 6, 30
  0432dc8  vspltisw 10, -1
  0432dcc  cntlzw 4, 4
  0432dd0  vslw 7, 7, 7
  0432dd4  sldi 4, 4, 58
  0432dd8  vslw 8, 8, 8
  0432ddc  vslw 10, 10, 10
  0432de0  sradi 4, 4, 63
  0432de4  vnmsubfp 6, 3, 2, 4
  0432de8  and 4, 4, 6
  0432dec  addc 4, 30, 4
  0432df0  vmaddfp 3, 3, 6, 5
  0432df4  lvlx 5, 5, 3
  0432df8  sldi 5, 4, 2
  0432dfc  lwz 6, 36(3)
  0432e00  lfs 1, 92(3)
  0432e04  addc 5, 6, 5
  0432e08  vspltisw 6, -8
  0432e0c  li 6, 16
  0432e10  clrldi 30, 5, 32
  0432e14  vnmsubfp 9, 3, 2, 4
  0432e18  lwz 30, 72(30)
  0432e1c  lfs 2, 92(31)
  0432e20  fdivs 1, 1, 2
  0432e24  vmaddfp 3, 3, 9, 7
  0432e28  lvlx 7, 6, 30
  0432e2c  vnmsubfp 2, 3, 2, 4
  0432e30  vsrw 4, 7, 6
  0432e34  vcfux 4, 4, 0
  0432e38  vmaddfp 2, 3, 2, 8
  0432e3c  vspltw 3, 4, 0
  0432e40  vmaddfp 2, 2, 5, 10
  0432e44  vspltw 2, 2, 0
  0432e48  vcmpgtfp. 3, 2, 3
  0432e4c  bt 26, 0x432e6c
  0432e50  lbz 5, 16(30)
  0432e54  clrldi 5, 5, 32
  0432e58  std 5, 120(1)
  0432e5c  lfd 1, 120(1)
  0432e60  fcfid 1, 1
  0432e64  frsp 1, 1
  0432e68  b 0x432e84
  0432e6c  vspltisw 3, 0
  0432e70  vcmpgefp. 2, 2, 3
  0432e74  bf 26, 0x432e84
  0432e78  lis 5, 67
  0432e7c  addi 5, 5, 10788
  0432e80  lfs 1, 12(5)
  0432e84  fctiwz 1, 1
  0432e88  ori 6, 29, 0
  0432e8c  stfd 1, 120(1)
  0432e90  lwz 5, 124(1)
  0432e94  extsw 5, 5
  0432e98  bl 0xfddc0
  0432e9c  nop
  0432ea0  lhz 3, 626(28)
  0432ea4  extsh 3, 3
  0432ea8  cmpwi 3, -1
  0432eac  bt 2, 0x432f38
  0432eb0  lbz 3, 82(31)
  0432eb4  lbz 4, 83(31)
  0432eb8  cmpw 3, 4
  0432ebc  bf 2, 0x432f38
  0432ec0  ori 3, 31, 0
  0432ec4  bl 0xefe40
  0432ec8  nop
  0432ecc  lis 3, 67
  0432ed0  addi 3, 3, 10788
  0432ed4  lfs 2, 40(3)
  0432ed8  fcmpu 0, 1, 2
  0432edc  cror 6, 0, 2
  0432ee0  bt 6, 0x432f38
  0432ee4  lis 3, 67
  0432ee8  addi 3, 3, 10788
  0432eec  lfs 2, 44(3)
  0432ef0  fcmpu 0, 1, 2
  0432ef4  cror 6, 1, 2
  0432ef8  bt 6, 0x432f38
  0432efc  lis 3, 67
  0432f00  addi 3, 3, 10788
  0432f04  lfs 1, 12(3)
  0432f08  fcmpu 0, 31, 1
  0432f0c  bt 2, 0x432f38
  0432f10  fdivs 1, 29, 31
  0432f14  lis 3, 67
  0432f18  addi 3, 3, 10788
  0432f1c  lfs 2, 48(3)
  0432f20  lfs 3, 52(3)
  0432f24  fsub 4, 2, 1
  0432f28  fsel 1, 4, 1, 2
  0432f2c  fsub 2, 1, 3
  0432f30  fsel 1, 2, 1, 3
  0432f34  stfs 1, 88(31)
  0432f38  lhz 3, 626(28)
  0432f3c  extsh 3, 3
  0432f40  cmpwi 3, -1
  0432f44  bt 2, 0x433220
  0432f48  lis 3, 67
  0432f4c  lis 4, 114
  0432f50  addi 3, 3, 10788
  0432f54  lfs 2, 56(3)
  0432f58  lfs 1, -3056(4)
  0432f5c  fmuls 2, 1, 2
  0432f60  fctidz 2, 2
  0432f64  fcfid 2, 2
  0432f68  frsp 2, 2
  0432f6c  fcmpu 0, 31, 2
  0432f70  cror 6, 1, 2
  0432f74  bt 6, 0x4330cc
  0432f78  fmuls 1, 1, 30
  0432f7c  ori 3, 31, 0
  0432f80  li 4, 5
  0432f84  li 5, 3
  0432f88  fctiwz 1, 1
  0432f8c  stfd 1, 120(1)
  0432f90  lwz 30, 124(1)
  0432f94  extsw 30, 30
  0432f98  ori 6, 30, 0
  0432f9c  bl 0xfddc0
  0432fa0  nop
  0432fa4  lwz 3, 120(31)
  0432fa8  lwz 3, 616(3)
  0432fac  cmpwi 3, 0
  0432fb0  bt 2, 0x4330c0
  0432fb4  li 4, 92
  0432fb8  vspltisw 5, -1
  0432fbc  lis 6, 67
  0432fc0  li 5, 8
  0432fc4  addi 6, 6, 10788
  0432fc8  vspltisw 7, -1
  0432fcc  vslw 5, 5, 5
  0432fd0  lvlx 2, 4, 31
  0432fd4  vrefp 3, 2
  0432fd8  lvlx 4, 5, 6
  0432fdc  vspltw 4, 4, 0
  0432fe0  vslw 7, 7, 7
  0432fe4  lfs 1, 92(3)
  0432fe8  li 5, 60
  0432fec  lfs 2, 92(31)
  0432ff0  li 7, 16
  0432ff4  vspltisw 8, -1
  0432ff8  fdivs 1, 1, 2
  0432ffc  vspltisw 9, -1
  0433000  vspltisw 10, -1
  0433004  vslw 8, 8, 8
  0433008  vspltisw 11, -8
  043300c  vslw 9, 9, 9
  0433010  vnmsubfp 6, 3, 2, 4
  0433014  vmaddfp 3, 3, 6, 5
  0433018  lvlx 5, 4, 3
  043301c  lwz 4, 36(3)
  0433020  lvlx 12, 5, 6
  0433024  vspltw 12, 12, 0
  0433028  lwz 4, 96(4)
  043302c  vnmsubfp 6, 3, 2, 4
  0433030  vmaddfp 3, 3, 6, 7
  0433034  lvlx 7, 7, 4
  0433038  vslw 6, 10, 10
  043303c  vsrw 7, 7, 11
  0433040  lfs 2, 60(6)
  0433044  vnmsubfp 2, 3, 2, 4
  0433048  vcfux 4, 7, 0
  043304c  fmuls 1, 1, 2
  0433050  vmaddfp 2, 3, 2, 8
  0433054  vspltw 3, 4, 0
  0433058  vmaddfp 2, 2, 5, 9
  043305c  vmaddfp 2, 2, 12, 6
  0433060  vspltw 2, 2, 0
  0433064  vcmpgtfp. 3, 2, 3
  0433068  bt 26, 0x433088
  043306c  lbz 4, 16(4)
  0433070  clrldi 4, 4, 32
  0433074  std 4, 120(1)
  0433078  lfd 1, 120(1)
  043307c  fcfid 1, 1
  0433080  frsp 1, 1
  0433084  b 0x4330a0
  0433088  vspltisw 3, 0
  043308c  vcmpgefp. 2, 2, 3
  0433090  bf 26, 0x4330a0
  0433094  lis 4, 67
  0433098  addi 4, 4, 10788
  043309c  lfs 1, 12(4)
  04330a0  fctiwz 1, 1
  04330a4  li 4, 6
  04330a8  ori 6, 30, 0
  04330ac  stfd 1, 120(1)
  04330b0  lwz 5, 124(1)
  04330b4  extsw 5, 5
  04330b8  bl 0xfddc0
  04330bc  nop
  04330c0  li 3, -1
  04330c4  sth 3, 626(28)
  04330c8  b 0x433220
  04330cc  lbz 3, 112(31)
  04330d0  rlwinm 3, 3, 0, 30, 30
  04330d4  cmpwi 3, 0
  04330d8  bt 2, 0x433220
  04330dc  fmuls 1, 1, 30
  04330e0  ori 3, 31, 0
  04330e4  li 4, 5
  04330e8  li 5, 2
  04330ec  fctiwz 1, 1
  04330f0  stfd 1, 120(1)
  04330f4  lwz 30, 124(1)
  04330f8  extsw 30, 30
  04330fc  ori 6, 30, 0
  0433100  bl 0xfddc0
  0433104  nop
  0433108  lwz 3, 120(31)
  043310c  lwz 3, 616(3)
  0433110  cmpwi 3, 0
  0433114  bt 2, 0x433218
  0433118  li 4, 92
  043311c  lis 5, 67
  0433120  vspltisw 5, -1
  0433124  li 6, 8
  0433128  addi 5, 5, 10788
  043312c  lvlx 2, 4, 31
  0433130  vslw 5, 5, 5
  0433134  vrefp 3, 2
  0433138  lvlx 4, 6, 5
  043313c  vspltw 4, 4, 0
  0433140  vspltisw 7, -1
  0433144  lfs 1, 92(3)
  0433148  li 6, 16
  043314c  lfs 2, 92(31)
  0433150  vslw 7, 7, 7
  0433154  fdivs 1, 1, 2
  0433158  vspltisw 8, -8
  043315c  vspltisw 11, -1
  0433160  vnmsubfp 6, 3, 2, 4
  0433164  lvlx 10, 4, 3
  0433168  lwz 4, 36(3)
  043316c  lwz 4, 96(4)
  0433170  lfs 2, 8(5)
  0433174  vmaddfp 3, 3, 6, 5
  0433178  vspltisw 5, -1
  043317c  vspltisw 6, -1
  0433180  vslw 5, 5, 5
  0433184  vslw 6, 6, 6
  0433188  vnmsubfp 9, 3, 2, 4
  043318c  vmaddfp 3, 3, 9, 7
  0433190  lvlx 9, 6, 4
  0433194  vslw 7, 11, 11
  0433198  vsrw 8, 9, 8
  043319c  vnmsubfp 2, 3, 2, 4
  04331a0  fmuls 1, 1, 2
  04331a4  vmaddfp 2, 3, 2, 5
  04331a8  vcfux 3, 8, 0
  04331ac  vmaddfp 2, 2, 10, 6
  04331b0  vspltw 3, 3, 0
  04331b4  vmaddfp 2, 2, 4, 7
  04331b8  vspltw 2, 2, 0
  04331bc  vcmpgtfp. 3, 2, 3
  04331c0  bt 26, 0x4331e0
  04331c4  lbz 4, 16(4)
  04331c8  clrldi 4, 4, 32
  04331cc  std 4, 120(1)
  04331d0  lfd 1, 120(1)
  04331d4  fcfid 1, 1
  04331d8  frsp 1, 1
  04331dc  b 0x4331f8
  04331e0  vspltisw 3, 0
  04331e4  vcmpgefp. 2, 2, 3
  04331e8  bf 26, 0x4331f8
  04331ec  lis 4, 67
  04331f0  addi 4, 4, 10788
  04331f4  lfs 1, 12(4)
  04331f8  fctiwz 1, 1
  04331fc  li 4, 6
  0433200  ori 6, 30, 0
  0433204  stfd 1, 120(1)
  0433208  lwz 5, 124(1)
  043320c  extsw 5, 5
  0433210  bl 0xfddc0
  0433214  nop
  0433218  li 3, -1
  043321c  sth 3, 626(28)
  0433220  lbz 3, 82(31)
  0433224  lbz 4, 83(31)
  0433228  cmpwi 1, 4, 5
  043322c  cmpw 3, 4
  0433230  crnand 2, 2, 6
  0433234  bt 2, 0x433360
  0433238  lis 3, 67
  043323c  addi 3, 3, 10788
  0433240  lfs 1, 12(3)
  0433244  fcmpu 0, 31, 1
  0433248  bt 2, 0x433360
  043324c  ori 3, 31, 0
  0433250  bl 0xefe40
  0433254  nop
  0433258  lis 3, 67
  043325c  addi 3, 3, 10788
  0433260  lfs 2, 64(3)
  0433264  lfs 3, 68(3)
  0433268  fsubs 1, 2, 1
  043326c  fmuls 2, 31, 3
  0433270  fdivs 1, 1, 2
  0433274  stfs 1, 88(31)
  0433278  b 0x433360
  043327c  lis 3, 16256
  0433280  lbz 4, 112(31)
  0433284  stw 3, 88(31)
  0433288  rlwinm 3, 4, 0, 30, 30
  043328c  cmpwi 3, 0
  0433290  bt 2, 0x433360
  0433294  lbz 3, 83(31)
  0433298  cmpwi 3, 0
  043329c  bt 2, 0x433360
  04332a0  lis 3, 67
  04332a4  lis 4, 114
  04332a8  addi 3, 3, 10788
  04332ac  li 5, 0
  04332b0  lfs 1, 72(3)
  04332b4  lfs 2, -3056(4)
  04332b8  ori 3, 31, 0
  04332bc  li 4, 0
  04332c0  fmuls 1, 2, 1
  04332c4  fctiwz 1, 1
  04332c8  stfd 1, 120(1)
  04332cc  lwz 30, 124(1)
  04332d0  extsw 30, 30
  04332d4  ori 6, 30, 0
  04332d8  bl 0xfddc0
  04332dc  nop
  04332e0  lwz 3, 120(31)
  04332e4  lwz 3, 616(3)
  04332e8  cmpwi 3, 0
  04332ec  bt 2, 0x433360
  04332f0  lwz 4, 36(3)
  04332f4  li 5, 16
  04332f8  vspltisw 2, -8
  04332fc  vspltisw 3, 0
  0433300  lis 6, 67
  0433304  lwz 4, 72(4)
  0433308  lvlx 4, 5, 4
  043330c  vsrw 2, 4, 2
  0433310  addi 5, 6, 10788
  0433314  vcfux 2, 2, 0
  0433318  lfs 1, 12(5)
  043331c  vspltw 2, 2, 0
  0433320  vcmpgtfp. 2, 3, 2
  0433324  bt 26, 0x433340
  0433328  lbz 4, 16(4)
  043332c  clrldi 4, 4, 32
  0433330  std 4, 120(1)
  0433334  lfd 1, 120(1)
  0433338  fcfid 1, 1
  043333c  frsp 1, 1
  0433340  fctiwz 1, 1
  0433344  li 4, 0
  0433348  ori 6, 30, 0
  043334c  stfd 1, 120(1)
  0433350  lwz 5, 124(1)
  0433354  extsw 5, 5
  0433358  bl 0xfddc0
  043335c  nop
  0433360  lwz 28, 616(28)
  0433364  cmpwi 28, 0
  0433368  bt 2, 0x433374
  043336c  lfs 1, 88(31)
  0433370  stfs 1, 88(28)
  0433374  ld 0, 208(1)
  0433378  mtlr 0
  043337c  lfd 29, 168(1)
  0433380  lfd 30, 176(1)
  0433384  lfd 31, 184(1)
  0433388  ld 28, 136(1)
  043338c  ld 29, 144(1)
  0433390  ld 30, 152(1)
  0433394  ld 31, 160(1)
  0433398  addi 1, 1, 192
  043339c  blr

UpdateMoby_717:   # 0x433450, 0x1008 bytes
  0433450  stdu 1, -432(1)
  0433454  mflr 0
  0433458  std 0, 448(1)
  043345c  stfd 20, 336(1)
  0433460  stfd 21, 344(1)
  0433464  stfd 22, 352(1)
  0433468  stfd 23, 360(1)
  043346c  stfd 24, 368(1)
  0433470  stfd 25, 376(1)
  0433474  stfd 26, 384(1)
  0433478  stfd 27, 392(1)
  043347c  stfd 28, 400(1)
  0433480  stfd 29, 408(1)
  0433484  stfd 30, 416(1)
  0433488  stfd 31, 424(1)
  043348c  std 31, 328(1)
  0433490  lbz 4, 49(3)
  0433494  std 30, 320(1)
  0433498  ori 31, 3, 0
  043349c  lwz 30, 120(3)
  04334a0  std 29, 312(1)
  04334a4  std 28, 304(1)
  04334a8  std 27, 296(1)
  04334ac  std 26, 288(1)
  04334b0  std 25, 280(1)
  04334b4  cmpwi 4, 0
  04334b8  bt 2, 0x433524
  04334bc  lis 3, 149
  04334c0  lfs 1, 20(31)
  04334c4  lfs 2, 16(31)
  04334c8  addic 3, 3, 5056
  04334cc  lfs 3, 324(3)
  04334d0  lfs 4, 320(3)
  04334d4  fsubs 1, 1, 3
  04334d8  fsubs 2, 2, 4
  04334dc  lfs 3, 24(31)
  04334e0  lfs 4, 328(3)
  04334e4  fsubs 3, 3, 4
  04334e8  lis 3, 67
  04334ec  fmuls 1, 1, 1
  04334f0  addi 3, 3, 13216
  04334f4  fmadds 1, 2, 2, 1
  04334f8  lfs 2, 0(3)
  04334fc  fmadds 1, 3, 3, 1
  0433500  fsqrts 1, 1
  0433504  fcmpu 0, 1, 2
  0433508  cror 6, 1, 2
  043350c  bt 6, 0x433524
  0433510  ori 3, 31, 0
  0433514  bl 0x106360
  0433518  nop
  043351c  li 3, 23
  0433520  stb 3, 127(31)
  0433524  lbz 3, 32(31)
  0433528  cmpwi 3, 0
  043352c  cmpwi 1, 3, 2
  0433530  cmpwi 6, 3, 1
  0433534  cmpwi 7, 3, -1
  0433538  bt 1, 0x433544
  043353c  bf 29, 0x4343fc
  0433540  b 0x433550
  0433544  bf 25, 0x4338dc
  0433548  bf 5, 0x4339ec
  043354c  b 0x4343fc
  0433550  li 3, 24
  0433554  lis 4, 165
  0433558  addic 5, 1, 128
  043355c  addic 6, 4, 7136
  0433560  stb 3, 48(31)
  0433564  lwz 3, 564(30)
  0433568  lhz 4, 52(31)
  043356c  slwi 3, 3, 2
  0433570  ori 4, 4, 65
  0433574  extsw 7, 3
  0433578  ori 3, 31, 0
  043357c  sth 4, 52(31)
  0433580  li 4, 0
  0433584  lwzx 29, 6, 7
  0433588  stw 29, 580(30)
  043358c  bl 0x431a30
  0433590  lfs 1, 132(1)
  0433594  lis 3, 67
  0433598  lfs 2, 136(1)
  043359c  li 4, 0
  04335a0  stfs 1, 20(31)
  04335a4  addi 3, 3, 13216
  04335a8  stfs 2, 24(31)
  04335ac  lfs 1, 140(1)
  04335b0  lfs 2, 128(1)
  04335b4  stfs 1, 28(31)
  04335b8  stfs 2, 16(31)
  04335bc  stfs 2, 512(30)
  04335c0  lfs 1, 20(31)
  04335c4  stfs 1, 516(30)
  04335c8  lfs 1, 24(31)
  04335cc  stfs 1, 520(30)
  04335d0  lfs 1, 28(31)
  04335d4  stfs 1, 524(30)
  04335d8  lfs 4, 4(3)
  04335dc  stw 4, 64(31)
  04335e0  stw 4, 68(31)
  04335e4  lfs 1, 32(29)
  04335e8  lfs 2, 16(29)
  04335ec  lfs 3, 36(29)
  04335f0  lfs 5, 20(29)
  04335f4  fsubs 1, 1, 2
  04335f8  fsubs 2, 3, 5
  04335fc  lis 3, 115
  0433600  addic 3, 3, 22784
  0433604  fabs 3, 1
  0433608  fabs 5, 2
  043360c  stfs 1, 188(1)
  0433610  stfs 2, 192(1)
  0433614  fsubs 1, 3, 5
  0433618  stfs 1, 196(1)
  043361c  lwz 4, 188(1)
  0433620  lfs 1, 188(1)
  0433624  lwz 5, 192(1)
  0433628  lfs 2, 192(1)
  043362c  fabs 1, 1
  0433630  lwz 6, 196(1)
  0433634  rlwinm 5, 5, 3, 29, 29
  0433638  fabs 6, 2
  043363c  lfs 2, 196(1)
  0433640  rlwimi 5, 6, 2, 30, 30
  0433644  fsub 7, 2, 4
  0433648  fsub 8, 2, 4
  043364c  rlwimi 5, 4, 4, 28, 28
  0433650  ori 4, 3, 0
  0433654  rlwimi 4, 5, 2, 26, 28
  0433658  slwi 5, 5, 2
  043365c  clrldi 4, 4, 32
  0433660  fsel 5, 7, 1, 5
  0433664  lfsx 1, 3, 5
  0433668  lfs 2, 4(4)
  043366c  fsel 3, 8, 6, 3
  0433670  fcmpu 0, 5, 4
  0433674  bt 1, 0x43367c
  0433678  b 0x43379c
  043367c  fsubs 6, 3, 5
  0433680  fadds 3, 3, 5
  0433684  addic 3, 1, 16
  0433688  li 6, 2
  043368c  addic 5, 3, 232
  0433690  addic 4, 3, 216
  0433694  mtctr 6
  0433698  fdivs 3, 6, 3
  043369c  fmuls 5, 3, 3
  04336a0  stfs 3, 244(1)
  04336a4  stfs 3, 236(1)
  04336a8  stfs 3, 240(1)
  04336ac  stfs 3, 232(1)
  04336b0  lfs 7, 244(1)
  04336b4  lfs 8, 236(1)
  04336b8  lfs 9, 240(1)
  04336bc  fmuls 6, 5, 5
  04336c0  fmuls 8, 8, 5
  04336c4  fmuls 7, 7, 6
  04336c8  fmuls 3, 6, 6
  04336cc  fmuls 6, 9, 6
  04336d0  stfs 8, 236(1)
  04336d4  fmuls 5, 7, 5
  04336d8  stfs 6, 240(1)
  04336dc  stfs 5, 244(1)
  04336e0  lfs 5, 216(3)
  04336e4  fmuls 5, 5, 3
  04336e8  stfs 5, 232(3)
  04336ec  lfs 5, 4(4)
  04336f0  addic 4, 4, 8
  04336f4  fmuls 5, 5, 3
  04336f8  addic 3, 3, 8
  04336fc  stfs 5, 4(5)
  0433700  addic 5, 5, 8
  0433704  bdnz 0x4336e0
  0433708  li 5, 4
  043370c  ori 3, 1, 0
  0433710  mtctr 5
  0433714  lis 4, 115
  0433718  addic 5, 3, 232
  043371c  addic 4, 4, 22752
  0433720  ori 7, 5, 0
  0433724  lfs 3, 232(3)
  0433728  lfs 5, 0(4)
  043372c  fmuls 3, 3, 5
  0433730  lfs 5, 4(4)
  0433734  addic 4, 4, 8
  0433738  stfs 3, 232(3)
  043373c  lfs 3, 4(5)
  0433740  addic 3, 3, 8
  0433744  fmuls 3, 3, 5
  0433748  stfs 3, 4(5)
  043374c  addic 5, 5, 8
  0433750  bdnz 0x433724
  0433754  ori 3, 1, 0
  0433758  mtctr 6
  043375c  lfs 3, 232(3)
  0433760  fadds 3, 4, 3
  0433764  addic 3, 3, 16
  0433768  lfs 4, 4(7)
  043376c  lfs 5, 8(7)
  0433770  lfs 6, 12(7)
  0433774  addic 7, 7, 16
  0433778  fadds 3, 3, 4
  043377c  fadds 4, 3, 5
  0433780  fadds 4, 4, 6
  0433784  bdnz 0x43375c
  0433788  lis 3, 67
  043378c  addi 3, 3, 13216
  0433790  lfs 3, 8(3)
  0433794  fadds 4, 4, 3
  0433798  fmadds 4, 4, 1, 2
  043379c  li 5, 592
  04337a0  lis 3, 67
  04337a4  stfs 4, 72(31)
  04337a8  addi 6, 5, 16
  04337ac  vspltisw 2, -1
  04337b0  lis 4, 114
  04337b4  li 7, -3052
  04337b8  addi 3, 3, 13216
  04337bc  lvlx 3, 5, 30
  04337c0  li 8, 16
  04337c4  vslw 2, 2, 2
  04337c8  lvrx 4, 6, 30
  04337cc  li 5, 12
  04337d0  lvlx 5, 7, 4
  04337d4  vor 3, 3, 4
  04337d8  lvlx 6, 8, 3
  04337dc  vspltisw 4, -1
  04337e0  vspltw 6, 6, 0
  04337e4  vcfsx 3, 3, 0
  04337e8  li 4, 568
  04337ec  vslw 4, 4, 4
  04337f0  vmaddfp 2, 5, 6, 2
  04337f4  lvlx 6, 5, 3
  04337f8  li 5, 20
  04337fc  vspltw 6, 6, 0
  0433800  li 6, 572
  0433804  lis 7, 151
  0433808  vmaddfp 3, 2, 3, 4
  043380c  vmaddfp 2, 5, 6, 3
  0433810  vspltw 4, 2, 0
  0433814  stvewx 4, 4, 30
  0433818  lvlx 4, 5, 3
  043381c  vspltw 4, 4, 0
  0433820  vmaddfp 3, 5, 4, 3
  0433824  vspltw 4, 3, 0
  0433828  stvewx 4, 6, 30
  043382c  lbz 3, -16400(7)
  0433830  cmpwi 3, 0
  0433834  bf 2, 0x4338c4
  0433838  lis 3, 161
  043383c  vspltisw 4, 4
  0433840  li 4, 1352
  0433844  vspltisw 8, -1
  0433848  lis 5, 67
  043384c  lvlx 5, 4, 3
  0433850  addi 3, 5, 13216
  0433854  vsubuwm 4, 5, 4
  0433858  li 4, 24
  043385c  vspltisw 5, 0
  0433860  li 5, 28
  0433864  vcfsx 4, 4, 0
  0433868  lvlx 6, 4, 3
  043386c  lvlx 7, 5, 3
  0433870  vspltw 6, 6, 0
  0433874  li 4, 32
  0433878  vspltw 7, 7, 0
  043387c  lvlx 9, 4, 3
  0433880  li 3, 568
  0433884  vcmpgtfp 5, 5, 4
  0433888  vandc 4, 4, 5
  043388c  li 4, 572
  0433890  vspltw 5, 9, 0
  0433894  vnmsubfp 4, 4, 6, 7
  0433898  vslw 6, 8, 8
  043389c  vspltisw 7, -1
  04338a0  vslw 7, 7, 7
  04338a4  vcmpgtfp 8, 5, 4
  04338a8  vsel 4, 4, 5, 8
  04338ac  vmaddfp 2, 2, 4, 6
  04338b0  vmaddfp 3, 3, 4, 7
  04338b4  vspltw 2, 2, 0
  04338b8  vspltw 3, 3, 0
  04338bc  stvewx 2, 3, 30
  04338c0  stvewx 3, 4, 30
  04338c4  bl 0xfcc68
  04338c8  nop
  04338cc  li 3, 1
  04338d0  stfs 1, 628(30)
  04338d4  stb 3, 32(31)
  04338d8  b 0x4343fc
  04338dc  lis 3, 151
  04338e0  addic 3, 3, -25376
  04338e4  lwz 3, 8332(3)
  04338e8  cmpwi 3, 22
  04338ec  bf 2, 0x4343fc
  04338f0  li 3, 255
  04338f4  lhz 7, 52(31)
  04338f8  li 5, -66
  04338fc  vspltisw 2, -1
  0433900  lis 4, 67
  0433904  and 5, 7, 5
  0433908  stb 3, 48(31)
  043390c  li 6, 0
  0433910  addi 4, 4, 13216
  0433914  vslw 2, 2, 2
  0433918  li 3, 36
  043391c  sth 5, 52(31)
  0433920  lis 7, 114
  0433924  sth 6, 600(30)
  0433928  li 8, -3056
  043392c  lvlx 3, 3, 4
  0433930  li 3, 602
  0433934  vspltw 3, 3, 0
  0433938  lvlx 4, 8, 7
  043393c  lwz 4, 616(30)
  0433940  vmaddfp 2, 4, 3, 2
  0433944  cmpwi 4, 0
  0433948  vctsxs 2, 2, 0
  043394c  vsplth 2, 2, 1
  0433950  stvehx 2, 3, 30
  0433954  stw 6, 588(30)
  0433958  stw 6, 584(30)
  043395c  stw 6, 620(30)
  0433960  stw 6, 612(30)
  0433964  stw 6, 576(30)
  0433968  bf 2, 0x433990
  043396c  ori 3, 31, 0
  0433970  bl 0x37afa8
  0433974  nop
  0433978  cmpwi 3, 0
  043397c  stw 3, 616(30)
  0433980  bt 2, 0x433990
  0433984  lwz 3, 120(3)
  0433988  li 4, 1
  043398c  stw 4, 80(3)
  0433990  lwz 3, 592(30)
  0433994  srawi 4, 3, 1
  0433998  addze 4, 4
  043399c  sldi 4, 4, 1
  04339a0  subc 3, 3, 4
  04339a4  cmpwi 3, 1
  04339a8  bf 2, 0x4339e0
  04339ac  lis 3, 0
  04339b0  lhz 4, 52(31)
  04339b4  ori 3, 3, 32768
  04339b8  lwz 30, 616(30)
  04339bc  or 3, 4, 3
  04339c0  cmpwi 30, 0
  04339c4  sth 3, 52(31)
  04339c8  bt 2, 0x4339e0
  04339cc  lis 3, 0
  04339d0  lhz 4, 52(30)
  04339d4  ori 3, 3, 32768
  04339d8  or 3, 4, 3
  04339dc  sth 3, 52(30)
  04339e0  li 3, 2
  04339e4  stb 3, 32(31)
  04339e8  b 0x4343fc
  04339ec  lis 27, 151
  04339f0  addic 27, 27, -25376
  04339f4  lwz 3, 8332(27)
  04339f8  cmpwi 3, 22
  04339fc  bt 2, 0x433a0c
  0433a00  li 3, 0
  0433a04  stb 3, 32(31)
  0433a08  b 0x4343fc
  0433a0c  ori 3, 31, 0
  0433a10  bl 0x431c90
  0433a14  ori 3, 31, 0
  0433a18  bl 0x432258
  0433a1c  ori 3, 31, 0
  0433a20  bl 0x432718
  0433a24  lwz 3, 620(30)
  0433a28  cmpwi 3, 0
  0433a2c  bt 2, 0x433ba0
  0433a30  lis 4, 67
  0433a34  addic 3, 3, 1
  0433a38  addi 4, 4, 13216
  0433a3c  lis 5, 114
  0433a40  stw 3, 620(30)
  0433a44  lfs 1, 40(4)
  0433a48  lfs 2, -3056(5)
  0433a4c  fmuls 1, 2, 1
  0433a50  fctiwz 1, 1
  0433a54  stfd 1, 264(1)
  0433a58  lwz 4, 268(1)
  0433a5c  cmpw 3, 4
  0433a60  bf 0, 0x433ba0
  0433a64  lis 3, 67
  0433a68  addi 3, 3, 13216
  0433a6c  lfs 31, 4(3)
  0433a70  lhz 3, 600(30)
  0433a74  lwz 4, 636(30)
  0433a78  extsh 29, 3
  0433a7c  lwz 5, 580(30)
  0433a80  cmpw 29, 4
  0433a84  fmr 30, 31
  0433a88  bf 0, 0x433b04
  0433a8c  ori 3, 5, 0
  0433a90  ori 4, 29, 0
  0433a94  li 5, 1
  0433a98  li 6, 1
  0433a9c  bl 0x10cd94
  0433aa0  nop
  0433aa4  ori 4, 3, 0
  0433aa8  lwz 5, 580(30)
  0433aac  sldi 6, 29, 4
  0433ab0  sldi 7, 4, 4
  0433ab4  ori 3, 5, 0
  0433ab8  addc 6, 5, 6
  0433abc  addc 7, 3, 7
  0433ac0  clrldi 6, 6, 32
  0433ac4  clrldi 7, 7, 32
  0433ac8  lfs 1, 20(6)
  0433acc  lfs 2, 20(7)
  0433ad0  lfs 3, 16(6)
  0433ad4  fsubs 1, 1, 2
  0433ad8  lfs 2, 16(7)
  0433adc  fsubs 2, 3, 2
  0433ae0  ori 29, 4, 0
  0433ae4  lwz 4, 636(30)
  0433ae8  cmpw 29, 4
  0433aec  fmuls 1, 1, 1
  0433af0  fmadds 1, 2, 2, 1
  0433af4  fsqrts 1, 1
  0433af8  fadds 31, 31, 1
  0433afc  bt 0, 0x433a90
  0433b00  lhz 3, 600(30)
  0433b04  lfs 1, 576(30)
  0433b08  extsh 3, 3
  0433b0c  fdivs 2, 31, 1
  0433b10  slwi 4, 4, 4
  0433b14  sldi 3, 3, 4
  0433b18  addc 4, 5, 4
  0433b1c  addc 3, 5, 3
  0433b20  clrldi 4, 4, 32
  0433b24  clrldi 3, 3, 32
  0433b28  lfs 1, 24(4)
  0433b2c  lfs 3, 24(3)
  0433b30  lis 4, 114
  0433b34  lis 3, 67
  0433b38  addi 3, 3, 13216
  0433b3c  fsubs 3, 1, 3
  0433b40  lwz 5, 588(30)
  0433b44  lfs 4, 44(3)
  0433b48  lfs 1, -3048(4)
  0433b4c  lfs 31, 48(3)
  0433b50  fmuls 4, 1, 4
  0433b54  srawi 3, 5, 31
  0433b58  srwi 4, 3, 1
  0433b5c  xor 4, 4, 5
  0433b60  subc 3, 4, 3
  0433b64  cmpwi 3, 0
  0433b68  fdivs 3, 3, 2
  0433b6c  fmuls 2, 4, 2
  0433b70  fmadds 31, 2, 31, 3
  0433b74  bf 0, 0x433b7c
  0433b78  stfs 30, 588(30)
  0433b7c  fmr 2, 1
  0433b80  lis 3, 67
  0433b84  fmr 1, 31
  0433b88  addi 4, 3, 13216
  0433b8c  addic 3, 30, 588
  0433b90  lfs 3, 52(4)
  0433b94  fmuls 2, 2, 3
  0433b98  bl 0x109af0
  0433b9c  nop
  0433ba0  ori 3, 31, 0
  0433ba4  bl 0x432a70
  0433ba8  lhz 4, 600(30)
  0433bac  addic 5, 1, 112
  0433bb0  ori 3, 31, 0
  0433bb4  extsh 4, 4
  0433bb8  bl 0x431a30
  0433bbc  lfs 1, 112(1)
  0433bc0  lfs 2, 16(31)
  0433bc4  lfs 3, 116(1)
  0433bc8  lis 3, 67
  0433bcc  lfs 4, 20(31)
  0433bd0  fsubs 1, 1, 2
  0433bd4  addi 3, 3, 13216
  0433bd8  fsubs 2, 3, 4
  0433bdc  lis 4, 115
  0433be0  addic 4, 4, 22784
  0433be4  fabs 4, 1
  0433be8  fabs 3, 2
  0433bec  stfs 1, 176(1)
  0433bf0  stfs 2, 180(1)
  0433bf4  fsubs 1, 4, 3
  0433bf8  stfs 1, 184(1)
  0433bfc  lwz 5, 176(1)
  0433c00  lfs 28, 4(3)
  0433c04  lfs 1, 176(1)
  0433c08  lwz 3, 180(1)
  0433c0c  lfs 2, 180(1)
  0433c10  fabs 1, 1
  0433c14  lwz 6, 184(1)
  0433c18  rlwinm 3, 3, 3, 29, 29
  0433c1c  lfs 5, 184(1)
  0433c20  fabs 2, 2
  0433c24  rlwimi 3, 6, 2, 30, 30
  0433c28  fsub 6, 5, 28
  0433c2c  rlwimi 3, 5, 4, 28, 28
  0433c30  fsub 5, 5, 28
  0433c34  ori 5, 4, 0
  0433c38  rlwimi 5, 3, 2, 26, 28
  0433c3c  slwi 3, 3, 2
  0433c40  clrldi 5, 5, 32
  0433c44  fsel 3, 6, 1, 3
  0433c48  lfsx 30, 4, 3
  0433c4c  lfs 1, 4(5)
  0433c50  fsel 2, 5, 2, 4
  0433c54  fcmpu 0, 3, 28
  0433c58  bt 1, 0x433c64
  0433c5c  fmr 30, 28
  0433c60  b 0x433d88
  0433c64  fsubs 4, 2, 3
  0433c68  fadds 2, 2, 3
  0433c6c  addic 3, 1, 16
  0433c70  li 6, 2
  0433c74  addic 4, 3, 184
  0433c78  addic 5, 3, 200
  0433c7c  mtctr 6
  0433c80  fdivs 2, 4, 2
  0433c84  fmuls 3, 2, 2
  0433c88  stfs 2, 212(1)
  0433c8c  stfs 2, 204(1)
  0433c90  stfs 2, 208(1)
  0433c94  stfs 2, 200(1)
  0433c98  lfs 5, 212(1)
  0433c9c  lfs 6, 204(1)
  0433ca0  lfs 7, 208(1)
  0433ca4  fmuls 4, 3, 3
  0433ca8  fmuls 6, 6, 3
  0433cac  fmuls 5, 5, 4
  0433cb0  fmuls 2, 4, 4
  0433cb4  fmuls 4, 7, 4
  0433cb8  stfs 6, 204(1)
  0433cbc  fmuls 3, 5, 3
  0433cc0  stfs 4, 208(1)
  0433cc4  stfs 3, 212(1)
  0433cc8  lfs 3, 184(3)
  0433ccc  fmuls 3, 3, 2
  0433cd0  stfs 3, 200(3)
  0433cd4  lfs 3, 4(4)
  0433cd8  addic 3, 3, 8
  0433cdc  addic 4, 4, 8
  0433ce0  fmuls 3, 3, 2
  0433ce4  stfs 3, 4(5)
  0433ce8  addic 5, 5, 8
  0433cec  bdnz 0x433cc8
  0433cf0  li 5, 4
  0433cf4  ori 3, 1, 0
  0433cf8  mtctr 5
  0433cfc  lis 4, 115
  0433d00  addic 5, 3, 200
  0433d04  addic 4, 4, 22752
  0433d08  ori 7, 5, 0
  0433d0c  lfs 2, 200(3)
  0433d10  lfs 3, 0(4)
  0433d14  fmuls 2, 2, 3
  0433d18  lfs 3, 4(4)
  0433d1c  addic 4, 4, 8
  0433d20  stfs 2, 200(3)
  0433d24  lfs 2, 4(5)
  0433d28  addic 3, 3, 8
  0433d2c  fmuls 2, 2, 3
  0433d30  stfs 2, 4(5)
  0433d34  addic 5, 5, 8
  0433d38  bdnz 0x433d0c
  0433d3c  fmr 2, 28
  0433d40  ori 3, 1, 0
  0433d44  mtctr 6
  0433d48  lfs 3, 200(3)
  0433d4c  fadds 2, 2, 3
  0433d50  addic 3, 3, 16
  0433d54  lfs 3, 4(7)
  0433d58  lfs 4, 8(7)
  0433d5c  lfs 5, 12(7)
  0433d60  addic 7, 7, 16
  0433d64  fadds 2, 2, 3
  0433d68  fadds 2, 2, 4
  0433d6c  fadds 2, 2, 5
  0433d70  bdnz 0x433d48
  0433d74  lis 3, 67
  0433d78  addi 3, 3, 13216
  0433d7c  lfs 3, 8(3)
  0433d80  fadds 2, 2, 3
  0433d84  fmadds 30, 2, 30, 1
  0433d88  lis 3, 67
  0433d8c  lis 4, 114
  0433d90  fmr 1, 30
  0433d94  addi 29, 3, 13216
  0433d98  lis 6, 114
  0433d9c  addic 3, 31, 72
  0433da0  addic 5, 30, 584
  0433da4  li 9, 0
  0433da8  lfs 2, 56(29)
  0433dac  lfs 27, 60(29)
  0433db0  lfs 4, 64(29)
  0433db4  lfs 3, -3060(4)
  0433db8  lfs 5, -3052(6)
  0433dbc  fmuls 2, 3, 2
  0433dc0  fmuls 4, 5, 4
  0433dc4  fmuls 3, 3, 27
  0433dc8  bl 0x10a050
  0433dcc  nop
  0433dd0  lfs 4, 68(29)
  0433dd4  lfs 2, 520(30)
  0433dd8  lfs 3, 120(1)
  0433ddc  lfs 30, 576(30)
  0433de0  fsubs 4, 3, 4
  0433de4  lfs 20, 512(30)
  0433de8  lfs 1, 516(30)
  0433dec  fcmpu 0, 2, 4
  0433df0  cror 6, 1, 2
  0433df4  bt 6, 0x433e00
  0433df8  fmr 2, 3
  0433dfc  stfs 3, 520(30)
  0433e00  lis 3, 67
  0433e04  lfs 3, 72(31)
  0433e08  addi 4, 3, 13216
  0433e0c  lfs 4, 72(4)
  0433e10  lfs 26, 76(4)
  0433e14  fadds 4, 3, 4
  0433e18  lfs 25, 80(4)
  0433e1c  lfs 24, 84(4)
  0433e20  lfs 23, 88(4)
  0433e24  lfs 22, 92(4)
  0433e28  lfs 21, 96(4)
  0433e2c  fsubs 5, 26, 4
  0433e30  fsubs 6, 25, 4
  0433e34  fsub 7, 4, 5
  0433e38  fsel 4, 7, 5, 4
  0433e3c  fsubs 5, 26, 3
  0433e40  fsub 7, 6, 4
  0433e44  fsub 8, 3, 5
  0433e48  fsel 4, 7, 6, 4
  0433e4c  fsel 5, 8, 5, 3
  0433e50  fsubs 3, 25, 3
  0433e54  fmuls 6, 4, 4
  0433e58  fsub 7, 3, 5
  0433e5c  fmuls 8, 6, 4
  0433e60  fsel 3, 7, 3, 5
  0433e64  fmuls 5, 6, 8
  0433e68  fmadds 4, 8, 24, 4
  0433e6c  fmuls 7, 6, 5
  0433e70  fmadds 4, 5, 23, 4
  0433e74  fmuls 5, 6, 7
  0433e78  fmadds 4, 7, 22, 4
  0433e7c  fmadds 31, 5, 21, 4
  0433e80  fmuls 31, 31, 30
  0433e84  fmuls 4, 3, 3
  0433e88  stfs 2, 520(30)
  0433e8c  fadds 6, 20, 31
  0433e90  li 3, 0
  0433e94  li 5, 0
  0433e98  ori 6, 31, 0
  0433e9c  li 7, 0
  0433ea0  fmuls 5, 4, 3
  0433ea4  stfs 6, 512(30)
  0433ea8  fmuls 7, 4, 5
  0433eac  fmadds 3, 5, 24, 3
  0433eb0  fmuls 2, 4, 7
  0433eb4  fmadds 3, 7, 23, 3
  0433eb8  fmuls 4, 4, 2
  0433ebc  fmadds 2, 2, 22, 3
  0433ec0  fmadds 2, 4, 21, 2
  0433ec4  fmuls 30, 2, 30
  0433ec8  fadds 1, 1, 30
  0433ecc  stfs 1, 516(30)
  0433ed0  lfs 1, 100(4)
  0433ed4  stw 3, 152(1)
  0433ed8  fmuls 2, 31, 1
  0433edc  stfs 29, 156(1)
  0433ee0  fmuls 1, 30, 1
  0433ee4  addic 3, 1, 144
  0433ee8  stfs 2, 144(1)
  0433eec  stfs 1, 148(1)
  0433ef0  lfs 3, 512(30)
  0433ef4  fadds 2, 2, 3
  0433ef8  stfs 2, 144(1)
  0433efc  lfs 2, 516(30)
  0433f00  fadds 1, 1, 2
  0433f04  stfs 1, 148(1)
  0433f08  lfs 1, 520(30)
  0433f0c  stfs 1, 152(1)
  0433f10  lfs 20, 28(4)
  0433f14  fmr 1, 20
  0433f18  bl 0x5e598
  0433f1c  nop
  0433f20  ori 29, 3, 0
  0433f24  cmpwi 29, 0
  0433f28  bt 2, 0x433fb0
  0433f2c  lis 3, 67
  0433f30  cmpwi 29, 0
  0433f34  addi 3, 3, 13216
  0433f38  lfs 1, 104(3)
  0433f3c  li 3, 0
  0433f40  fmuls 2, 31, 1
  0433f44  stfs 29, 172(1)
  0433f48  fmuls 1, 30, 1
  0433f4c  stw 3, 168(1)
  0433f50  stfs 2, 160(1)
  0433f54  stfs 1, 164(1)
  0433f58  bf 1, 0x433fb0
  0433f5c  lis 25, 161
  0433f60  addic 26, 30, 512
  0433f64  addic 25, 25, 18944
  0433f68  li 28, 0
  0433f6c  lwz 3, 0(25)
  0433f70  bl 0x10af88
  0433f74  nop
  0433f78  cmpwi 3, 0
  0433f7c  bt 2, 0x433fa0
  0433f80  addic 8, 1, 160
  0433f84  fmr 1, 20
  0433f88  ori 7, 26, 0
  0433f8c  lwz 3, 0(25)
  0433f90  ori 4, 31, 0
  0433f94  lis 5, 3
  0433f98  bl 0x105c08
  0433f9c  nop
  0433fa0  addic 28, 28, 1
  0433fa4  addic 25, 25, 4
  0433fa8  cmpw 28, 29
  0433fac  bt 0, 0x433f6c
  0433fb0  lis 3, 67
  0433fb4  li 4, 0
  0433fb8  addi 5, 3, 13216
  0433fbc  addic 3, 30, 512
  0433fc0  lfs 30, 48(5)
  0433fc4  fmr 1, 30
  0433fc8  bl 0xffb70
  0433fcc  nop
  0433fd0  fmr 31, 1
  0433fd4  lfs 1, 520(30)
  0433fd8  fsubs 29, 1, 31
  0433fdc  fcmpu 0, 29, 28
  0433fe0  bt 1, 0x433ff4
  0433fe4  lwz 3, 588(30)
  0433fe8  lfs 2, 588(30)
  0433fec  cmpwi 3, 0
  0433ff0  bf 1, 0x434018
  0433ff4  lis 3, 67
  0433ff8  lis 4, 114
  0433ffc  lfs 2, 588(30)
  0434000  addi 3, 3, 13216
  0434004  lfs 3, 44(3)
  0434008  lfs 4, -3048(4)
  043400c  fnmsubs 2, 4, 3, 2
  0434010  stfs 2, 588(30)
  0434014  b 0x43403c
  0434018  fabs 3, 29
  043401c  fcmpu 0, 3, 30
  0434020  cror 6, 1, 2
  0434024  bt 6, 0x43403c
  0434028  li 3, 0
  043402c  fmr 1, 31
  0434030  fmr 2, 28
  0434034  stw 3, 588(30)
  0434038  stw 3, 620(30)
  043403c  fadds 1, 1, 2
  0434040  addic 3, 30, 602
  0434044  stfs 1, 520(30)
  0434048  bl 0x4fffb4
  043404c  nop
  0434050  cmpwi 3, 0
  0434054  lwz 3, 2196(27)
  0434058  lwz 4, 2240(27)
  043405c  bt 2, 0x434158
  0434060  lis 5, 67
  0434064  lis 6, 114
  0434068  addi 5, 5, 13216
  043406c  lis 7, 114
  0434070  lfs 1, 112(5)
  0434074  lfs 2, -3056(6)
  0434078  lfs 5, 108(5)
  043407c  fmuls 1, 2, 1
  0434080  lfs 4, 520(30)
  0434084  lfs 3, -3052(7)
  0434088  fsub 4, 31, 4
  043408c  lfs 6, 568(30)
  0434090  fmuls 2, 3, 5
  0434094  fctiwz 5, 1
  0434098  fsel 1, 4, 6, 2
  043409c  stfd 5, 264(1)
  04340a0  lwz 5, 268(1)
  04340a4  cmpw 3, 5
  04340a8  bf 0, 0x4340bc
  04340ac  lis 3, 67
  04340b0  addi 3, 3, 13216
  04340b4  lfs 2, 116(3)
  04340b8  fmadds 1, 3, 2, 1
  04340bc  lwz 3, 592(30)
  04340c0  fadds 2, 3, 1
  04340c4  slwi 3, 3, 1
  04340c8  extsw 3, 3
  04340cc  addc 3, 27, 3
  04340d0  lhz 3, 1984(3)
  04340d4  extsh 3, 3
  04340d8  cmpw 4, 3
  04340dc  bf 1, 0x4340f0
  04340e0  lis 3, 67
  04340e4  addi 3, 3, 13216
  04340e8  lfs 2, 120(3)
  04340ec  fnmsubs 2, 3, 2, 1
  04340f0  lfs 1, 576(30)
  04340f4  fcmpu 0, 1, 2
  04340f8  cror 6, 0, 2
  04340fc  bt 6, 0x43412c
  0434100  lis 3, 67
  0434104  fmr 1, 2
  0434108  lis 5, 114
  043410c  addi 4, 3, 13216
  0434110  addic 3, 30, 576
  0434114  lfs 4, 104(4)
  0434118  lfs 3, -3048(5)
  043411c  fmuls 2, 3, 4
  0434120  bl 0x109af0
  0434124  nop
  0434128  b 0x434180
  043412c  lis 3, 67
  0434130  lis 4, 114
  0434134  fmr 1, 2
  0434138  addi 3, 3, 13216
  043413c  lfs 4, 124(3)
  0434140  lfs 3, -3048(4)
  0434144  addic 3, 30, 576
  0434148  fmuls 2, 3, 4
  043414c  bl 0x109af0
  0434150  nop
  0434154  b 0x434180
  0434158  lis 3, 67
  043415c  lfs 1, 572(30)
  0434160  lis 5, 114
  0434164  addi 4, 3, 13216
  0434168  addic 3, 30, 576
  043416c  lfs 2, 128(4)
  0434170  lfs 3, -3048(5)
  0434174  fmuls 2, 3, 2
  0434178  bl 0x109af0
  043417c  nop
  0434180  lis 3, 67
  0434184  addi 3, 3, 13216
  0434188  lfs 1, 132(3)
  043418c  fcmpu 0, 29, 1
  0434190  cror 6, 1, 2
  0434194  bt 6, 0x4341b0
  0434198  lwz 3, 588(30)
  043419c  cmpwi 3, 0
  04341a0  bf 0, 0x4341b0
  04341a4  li 3, 0
  04341a8  stfs 31, 520(30)
  04341ac  stw 3, 620(30)
  04341b0  lis 3, 67
  04341b4  addic 29, 30, 384
  04341b8  addi 28, 3, 13216
  04341bc  ori 3, 29, 0
  04341c0  lfs 1, 116(28)
  04341c4  bl 0x119ac0
  04341c8  nop
  04341cc  lis 3, 114
  04341d0  lfs 3, 136(28)
  04341d4  lis 4, 114
  04341d8  lfs 1, 584(30)
  04341dc  lfs 2, -3052(3)
  04341e0  lhz 3, 52(31)
  04341e4  fmuls 3, 2, 3
  04341e8  lfs 4, -3060(4)
  04341ec  fcmpu 0, 1, 3
  04341f0  cror 6, 0, 2
  04341f4  bt 6, 0x434200
  04341f8  fmr 1, 3
  04341fc  b 0x434220
  0434200  lis 4, 67
  0434204  addi 4, 4, 13216
  0434208  lfs 3, 140(4)
  043420c  fmuls 2, 2, 3
  0434210  fcmpu 0, 1, 2
  0434214  cror 6, 1, 2
  0434218  bt 6, 0x434220
  043421c  fmr 1, 2
  0434220  rlwinm 3, 3, 0, 16, 16
  0434224  cmpwi 3, 0
  0434228  bt 2, 0x434230
  043422c  fneg 1, 1
  0434230  lis 3, 67
  0434234  addi 28, 3, 13216
  0434238  ori 4, 29, 0
  043423c  ori 3, 31, 0
  0434240  lfs 2, 144(28)
  0434244  fmuls 2, 1, 2
  0434248  li 5, 3
  043424c  stfs 2, 488(30)
  0434250  lfs 2, 128(28)
  0434254  fmuls 3, 1, 2
  0434258  fmuls 2, 4, 27
  043425c  stfs 3, 104(30)
  0434260  lfs 3, 148(28)
  0434264  fmuls 3, 1, 3
  0434268  stfs 3, 360(30)
  043426c  lfs 3, 152(28)
  0434270  fmuls 1, 1, 3
  0434274  stfs 1, 228(30)
  0434278  lfs 31, 156(28)
  043427c  fmuls 1, 4, 31
  0434280  bl 0x1167c8
  0434284  nop
  0434288  lis 29, 114
  043428c  ori 3, 31, 0
  0434290  ori 4, 30, 0
  0434294  li 5, 0
  0434298  lfs 2, -3060(29)
  043429c  fmuls 1, 2, 31
  04342a0  fmuls 2, 2, 27
  04342a4  bl 0x1167c8
  04342a8  nop
  04342ac  lfs 2, -3060(29)
  04342b0  addic 4, 30, 256
  04342b4  fmuls 1, 2, 31
  04342b8  ori 3, 31, 0
  04342bc  fmuls 2, 2, 27
  04342c0  li 5, 1
  04342c4  bl 0x1167c8
  04342c8  nop
  04342cc  lfs 1, 160(28)
  04342d0  lfs 3, -3060(29)
  04342d4  addic 4, 30, 128
  04342d8  ori 3, 31, 0
  04342dc  fmuls 1, 3, 1
  04342e0  fmuls 2, 3, 27
  04342e4  li 5, 2
  04342e8  bl 0x1167c8
  04342ec  nop
  04342f0  lfs 1, 512(30)
  04342f4  lis 3, 114
  04342f8  stfs 1, 16(31)
  04342fc  lfs 1, 516(30)
  0434300  stfs 1, 20(31)
  0434304  lfs 1, 520(30)
  0434308  stfs 1, 24(31)
  043430c  lfs 2, 524(30)
  0434310  stfs 2, 28(31)
  0434314  lfs 2, 164(28)
  0434318  fadds 1, 1, 2
  043431c  stfs 1, 24(31)
  0434320  lfs 3, 168(28)
  0434324  lfs 1, 628(30)
  0434328  lfs 4, -3052(3)
  043432c  fmuls 2, 4, 3
  0434330  bl 0x502578
  0434334  nop
  0434338  fsubs 2, 26, 1
  043433c  stfs 1, 628(30)
  0434340  fsubs 3, 25, 1
  0434344  fsub 4, 1, 2
  0434348  fsel 2, 4, 2, 1
  043434c  lfs 4, 24(31)
  0434350  fsub 1, 3, 2
  0434354  fsel 1, 1, 3, 2
  0434358  lfs 2, 172(28)
  043435c  ld 3, 56(31)
  0434360  lwz 29, 616(30)
  0434364  cmpwi 29, 0
  0434368  fmuls 3, 1, 1
  043436c  fmuls 5, 3, 1
  0434370  fmuls 6, 3, 5
  0434374  fmadds 1, 5, 24, 1
  0434378  fmuls 5, 3, 6
  043437c  fmadds 1, 6, 23, 1
  0434380  fmuls 3, 3, 5
  0434384  fmadds 1, 5, 22, 1
  0434388  fmadds 1, 3, 21, 1
  043438c  fmadds 1, 1, 2, 4
  0434390  stfs 1, 24(31)
  0434394  bt 2, 0x4343fc
  0434398  std 3, 56(29)
  043439c  lwz 3, 616(30)
  04343a0  lfs 1, 16(31)
  04343a4  stfs 1, 16(3)
  04343a8  lfs 1, 20(31)
  04343ac  stfs 1, 20(3)
  04343b0  lfs 1, 24(31)
  04343b4  stfs 1, 24(3)
  04343b8  lfs 1, 28(31)
  04343bc  stfs 1, 28(3)
  04343c0  lwz 3, 616(30)
  04343c4  lfs 1, 64(31)
  04343c8  stfs 1, 64(3)
  04343cc  lfs 1, 68(31)
  04343d0  stfs 1, 68(3)
  04343d4  lfs 1, 72(31)
  04343d8  stfs 1, 72(3)
  04343dc  lfs 1, 76(31)
  04343e0  stfs 1, 76(3)
  04343e4  lhz 3, 602(30)
  04343e8  cmpwi 3, 0
  04343ec  bt 2, 0x4343fc
  04343f0  lwz 4, 616(30)
  04343f4  li 3, 1
  04343f8  stb 3, 188(4)
  04343fc  ld 0, 448(1)
  0434400  mtlr 0
  0434404  lfd 20, 336(1)
  0434408  lfd 21, 344(1)
  043440c  lfd 22, 352(1)
  0434410  lfd 23, 360(1)
  0434414  lfd 24, 368(1)
  0434418  lfd 25, 376(1)
  043441c  lfd 26, 384(1)
  0434420  lfd 27, 392(1)
  0434424  lfd 28, 400(1)
  0434428  lfd 29, 408(1)
  043442c  lfd 30, 416(1)
  0434430  lfd 31, 424(1)
  0434434  ld 25, 280(1)
  0434438  ld 26, 288(1)
  043443c  ld 27, 296(1)
  0434440  ld 28, 304(1)
  0434444  ld 29, 312(1)
  0434448  ld 30, 320(1)
  043444c  ld 31, 328(1)
  0434450  addi 1, 1, 432
  0434454  blr
