# game/update/moby1317.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1317_00245a3c:   # 0x245a3c, 0x14 bytes
  0245a3c  lis 3, 121
  0245a40  lis 4, 1
  0245a44  addic 3, 3, -7260
  0245a48  stw 4, 72(3)
  0245a4c  blr

FUN_00245a60:   # 0x245a60, 0x528 bytes
  0245a60  stdu 1, -240(1)
  0245a64  mflr 0
  0245a68  std 0, 256(1)
  0245a6c  stfd 30, 224(1)
  0245a70  stfd 31, 232(1)
  0245a74  std 31, 216(1)
  0245a78  ori 31, 3, 0
  0245a7c  li 3, 1317
  0245a80  std 29, 200(1)
  0245a84  fmr 31, 1
  0245a88  ori 29, 5, 0
  0245a8c  std 30, 208(1)
  0245a90  fmr 30, 2
  0245a94  std 28, 192(1)
  0245a98  ori 30, 4, 0
  0245a9c  bl 0xefa28
  0245aa0  nop
  0245aa4  ori 28, 3, 0
  0245aa8  cmpwi 28, 0
  0245aac  bt 2, 0x245f5c
  0245ab0  ori 3, 31, 0
  0245ab4  fmr 1, 31
  0245ab8  lwz 31, 120(28)
  0245abc  li 4, 255
  0245ac0  stw 3, 28(31)
  0245ac4  stb 4, 48(28)
  0245ac8  bl 0x502758
  0245acc  nop
  0245ad0  sth 3, 50(28)
  0245ad4  lis 4, 36
  0245ad8  li 3, 1
  0245adc  addi 4, 4, 23120
  0245ae0  stb 3, 49(28)
  0245ae4  lfs 1, 44(28)
  0245ae8  lfs 2, 0(4)
  0245aec  li 3, 0
  0245af0  fmuls 1, 1, 2
  0245af4  stfs 1, 44(28)
  0245af8  lfs 4, 4(4)
  0245afc  stw 3, 64(28)
  0245b00  lfs 1, 4(30)
  0245b04  lfs 2, 0(30)
  0245b08  fmuls 1, 1, 1
  0245b0c  lwz 5, 8(30)
  0245b10  lis 3, 115
  0245b14  rlwinm 5, 5, 3, 29, 29
  0245b18  addic 3, 3, 22784
  0245b1c  fmadds 1, 2, 2, 1
  0245b20  lfs 2, 8(30)
  0245b24  fabs 5, 2
  0245b28  fsqrts 1, 1
  0245b2c  fabs 3, 1
  0245b30  stfs 1, 116(1)
  0245b34  fsubs 1, 3, 5
  0245b38  stfs 1, 120(1)
  0245b3c  lwz 6, 116(1)
  0245b40  lfs 1, 116(1)
  0245b44  lfs 2, 8(4)
  0245b48  fabs 6, 1
  0245b4c  lwz 4, 120(1)
  0245b50  lfs 1, 120(1)
  0245b54  rlwimi 5, 4, 2, 30, 30
  0245b58  fsub 7, 1, 4
  0245b5c  ori 4, 3, 0
  0245b60  fsub 8, 1, 4
  0245b64  rlwimi 5, 6, 4, 28, 28
  0245b68  rlwimi 4, 5, 2, 26, 28
  0245b6c  slwi 5, 5, 2
  0245b70  clrldi 4, 4, 32
  0245b74  lfsx 1, 3, 5
  0245b78  fsel 6, 7, 6, 5
  0245b7c  fsel 5, 8, 5, 3
  0245b80  lfs 3, 4(4)
  0245b84  fcmpu 0, 6, 4
  0245b88  bt 1, 0x245b94
  0245b8c  fmr 1, 4
  0245b90  b 0x245cac
  0245b94  fsubs 7, 5, 6
  0245b98  fadds 5, 5, 6
  0245b9c  addic 4, 1, 16
  0245ba0  li 8, 2
  0245ba4  addic 6, 4, 156
  0245ba8  addic 5, 4, 140
  0245bac  mtctr 8
  0245bb0  fdivs 5, 7, 5
  0245bb4  fmuls 6, 5, 5
  0245bb8  stfs 5, 168(1)
  0245bbc  stfs 5, 160(1)
  0245bc0  stfs 5, 164(1)
  0245bc4  stfs 5, 156(1)
  0245bc8  lfs 8, 168(1)
  0245bcc  lfs 9, 160(1)
  0245bd0  lfs 10, 164(1)
  0245bd4  fmuls 7, 6, 6
  0245bd8  fmuls 9, 9, 6
  0245bdc  fmuls 8, 8, 7
  0245be0  fmuls 5, 7, 7
  0245be4  fmuls 7, 10, 7
  0245be8  stfs 9, 160(1)
  0245bec  fmuls 6, 8, 6
  0245bf0  stfs 7, 164(1)
  0245bf4  stfs 6, 168(1)
  0245bf8  lfs 6, 140(4)
  0245bfc  fmuls 6, 6, 5
  0245c00  stfs 6, 156(4)
  0245c04  lfs 6, 4(5)
  0245c08  addic 5, 5, 8
  0245c0c  fmuls 6, 6, 5
  0245c10  addic 4, 4, 8
  0245c14  stfs 6, 4(6)
  0245c18  addic 6, 6, 8
  0245c1c  bdnz 0x245bf8
  0245c20  li 6, 4
  0245c24  ori 4, 1, 0
  0245c28  mtctr 6
  0245c2c  lis 5, 115
  0245c30  addic 6, 4, 156
  0245c34  addic 5, 5, 22752
  0245c38  ori 7, 6, 0
  0245c3c  lfs 5, 156(4)
  0245c40  lfs 6, 0(5)
  0245c44  fmuls 5, 5, 6
  0245c48  lfs 6, 4(5)
  0245c4c  addic 5, 5, 8
  0245c50  stfs 5, 156(4)
  0245c54  lfs 5, 4(6)
  0245c58  addic 4, 4, 8
  0245c5c  fmuls 5, 5, 6
  0245c60  stfs 5, 4(6)
  0245c64  addic 6, 6, 8
  0245c68  bdnz 0x245c3c
  0245c6c  ori 4, 1, 0
  0245c70  fmr 5, 4
  0245c74  mtctr 8
  0245c78  lfs 6, 156(4)
  0245c7c  fadds 5, 5, 6
  0245c80  lfs 6, 4(7)
  0245c84  addic 4, 4, 16
  0245c88  lfs 7, 8(7)
  0245c8c  lfs 8, 12(7)
  0245c90  addic 7, 7, 16
  0245c94  fadds 5, 5, 6
  0245c98  fadds 5, 5, 7
  0245c9c  fadds 5, 5, 8
  0245ca0  bdnz 0x245c78
  0245ca4  fadds 5, 5, 2
  0245ca8  fmadds 1, 5, 1, 3
  0245cac  fneg 1, 1
  0245cb0  stfs 1, 68(28)
  0245cb4  lwz 4, 0(30)
  0245cb8  lwz 5, 4(30)
  0245cbc  lfs 1, 0(30)
  0245cc0  lfs 3, 4(30)
  0245cc4  fabs 5, 1
  0245cc8  fabs 3, 3
  0245ccc  rlwinm 5, 5, 3, 29, 29
  0245cd0  fsubs 1, 5, 3
  0245cd4  stfs 1, 112(1)
  0245cd8  lwz 6, 112(1)
  0245cdc  lfs 1, 112(1)
  0245ce0  rlwimi 5, 6, 2, 30, 30
  0245ce4  fsub 6, 1, 4
  0245ce8  fsub 7, 1, 4
  0245cec  rlwimi 5, 4, 4, 28, 28
  0245cf0  ori 4, 3, 0
  0245cf4  rlwimi 4, 5, 2, 26, 28
  0245cf8  slwi 5, 5, 2
  0245cfc  clrldi 4, 4, 32
  0245d00  fsel 6, 6, 5, 3
  0245d04  lfsx 1, 3, 5
  0245d08  fsel 5, 7, 3, 5
  0245d0c  lfs 3, 4(4)
  0245d10  fcmpu 0, 6, 4
  0245d14  bt 1, 0x245d20
  0245d18  fmr 2, 4
  0245d1c  b 0x245e38
  0245d20  fsubs 7, 5, 6
  0245d24  fadds 5, 5, 6
  0245d28  addic 3, 1, 16
  0245d2c  li 7, 2
  0245d30  addic 4, 3, 108
  0245d34  addic 5, 3, 124
  0245d38  mtctr 7
  0245d3c  fdivs 5, 7, 5
  0245d40  fmuls 6, 5, 5
  0245d44  stfs 5, 136(1)
  0245d48  stfs 5, 128(1)
  0245d4c  stfs 5, 132(1)
  0245d50  stfs 5, 124(1)
  0245d54  lfs 8, 136(1)
  0245d58  lfs 9, 128(1)
  0245d5c  lfs 10, 132(1)
  0245d60  fmuls 7, 6, 6
  0245d64  fmuls 9, 9, 6
  0245d68  fmuls 8, 8, 7
  0245d6c  fmuls 5, 7, 7
  0245d70  fmuls 7, 10, 7
  0245d74  stfs 9, 128(1)
  0245d78  fmuls 6, 8, 6
  0245d7c  stfs 7, 132(1)
  0245d80  stfs 6, 136(1)
  0245d84  lfs 6, 108(3)
  0245d88  fmuls 6, 6, 5
  0245d8c  stfs 6, 124(3)
  0245d90  lfs 6, 4(4)
  0245d94  addic 3, 3, 8
  0245d98  addic 4, 4, 8
  0245d9c  fmuls 6, 6, 5
  0245da0  stfs 6, 4(5)
  0245da4  addic 5, 5, 8
  0245da8  bdnz 0x245d84
  0245dac  li 5, 4
  0245db0  ori 3, 1, 0
  0245db4  mtctr 5
  0245db8  lis 4, 115
  0245dbc  addic 5, 3, 124
  0245dc0  addic 4, 4, 22752
  0245dc4  ori 6, 5, 0
  0245dc8  lfs 5, 124(3)
  0245dcc  lfs 6, 0(4)
  0245dd0  fmuls 5, 5, 6
  0245dd4  lfs 6, 4(4)
  0245dd8  addic 4, 4, 8
  0245ddc  stfs 5, 124(3)
  0245de0  lfs 5, 4(5)
  0245de4  addic 3, 3, 8
  0245de8  fmuls 5, 5, 6
  0245dec  stfs 5, 4(5)
  0245df0  addic 5, 5, 8
  0245df4  bdnz 0x245dc8
  0245df8  fmr 5, 4
  0245dfc  ori 3, 1, 0
  0245e00  mtctr 7
  0245e04  lfs 6, 124(3)
  0245e08  fadds 5, 5, 6
  0245e0c  addic 3, 3, 16
  0245e10  lfs 6, 4(6)
  0245e14  lfs 7, 8(6)
  0245e18  lfs 8, 12(6)
  0245e1c  addic 6, 6, 16
  0245e20  fadds 5, 5, 6
  0245e24  fadds 5, 5, 7
  0245e28  fadds 5, 5, 8
  0245e2c  bdnz 0x245e04
  0245e30  fadds 2, 5, 2
  0245e34  fmadds 2, 2, 1, 3
  0245e38  fcmpu 0, 30, 4
  0245e3c  lis 3, 16256
  0245e40  stfs 2, 72(28)
  0245e44  stw 3, 16(31)
  0245e48  cror 6, 0, 2
  0245e4c  bt 6, 0x245ed4
  0245e50  lfs 1, 4(30)
  0245e54  lfs 2, 0(30)
  0245e58  fmuls 1, 1, 1
  0245e5c  lfs 3, 8(30)
  0245e60  fmadds 1, 2, 2, 1
  0245e64  fmadds 1, 3, 3, 1
  0245e68  fsqrts 1, 1
  0245e6c  fcmpu 0, 1, 4
  0245e70  bf 2, 0x245ea4
  0245e74  lfs 1, 0(30)
  0245e78  li 3, 0
  0245e7c  stfs 1, 0(31)
  0245e80  lfs 1, 4(30)
  0245e84  stfs 1, 4(31)
  0245e88  lfs 1, 8(30)
  0245e8c  stfs 1, 8(31)
  0245e90  lfs 1, 12(30)
  0245e94  stw 3, 8(31)
  0245e98  stw 3, 4(31)
  0245e9c  stw 3, 0(31)
  0245ea0  b 0x245ecc
  0245ea4  fdivs 1, 30, 1
  0245ea8  fmuls 2, 2, 1
  0245eac  stfs 2, 0(31)
  0245eb0  lfs 2, 4(30)
  0245eb4  fmuls 2, 2, 1
  0245eb8  stfs 2, 4(31)
  0245ebc  lfs 2, 8(30)
  0245ec0  fmuls 1, 2, 1
  0245ec4  stfs 1, 8(31)
  0245ec8  lfs 1, 12(30)
  0245ecc  stfs 1, 12(31)
  0245ed0  b 0x245f10
  0245ed4  lfs 1, 0(30)
  0245ed8  stfs 1, 0(31)
  0245edc  lfs 1, 4(30)
  0245ee0  stfs 1, 4(31)
  0245ee4  lfs 1, 8(30)
  0245ee8  stfs 1, 8(31)
  0245eec  lfs 1, 12(30)
  0245ef0  stfs 1, 12(31)
  0245ef4  lfs 1, 4(30)
  0245ef8  lfs 2, 0(30)
  0245efc  fmuls 1, 1, 1
  0245f00  lfs 3, 8(30)
  0245f04  fmadds 1, 2, 2, 1
  0245f08  fmadds 30, 3, 3, 1
  0245f0c  fsqrts 30, 30
  0245f10  lfs 2, 0(29)
  0245f14  fdivs 1, 31, 30
  0245f18  stfs 2, 16(28)
  0245f1c  lfs 2, 4(29)
  0245f20  stfs 2, 20(28)
  0245f24  lfs 2, 8(29)
  0245f28  stfs 2, 24(28)
  0245f2c  lfs 2, 12(29)
  0245f30  stfs 2, 28(28)
  0245f34  bl 0x502758
  0245f38  nop
  0245f3c  addic 4, 3, -13
  0245f40  li 5, 512
  0245f44  stw 3, 20(31)
  0245f48  ori 3, 28, 0
  0245f4c  stw 4, 24(31)
  0245f50  sth 5, 52(28)
  0245f54  bl 0xf31a8
  0245f58  nop
  0245f5c  ori 3, 28, 0
  0245f60  ld 0, 256(1)
  0245f64  mtlr 0
  0245f68  lfd 30, 224(1)
  0245f6c  lfd 31, 232(1)
  0245f70  ld 28, 192(1)
  0245f74  ld 29, 200(1)
  0245f78  ld 30, 208(1)
  0245f7c  ld 31, 216(1)
  0245f80  addi 1, 1, 240
  0245f84  blr

UpdateMoby_1317:   # 0x245fb0, 0x1d4 bytes
  0245fb0  stdu 1, -288(1)
  0245fb4  mflr 0
  0245fb8  std 0, 304(1)
  0245fbc  std 31, 280(1)
  0245fc0  cmpwi 3, 0
  0245fc4  std 30, 272(1)
  0245fc8  std 29, 264(1)
  0245fcc  std 28, 256(1)
  0245fd0  ori 31, 3, 0
  0245fd4  bt 2, 0x246164
  0245fd8  lwz 29, 120(31)
  0245fdc  cmpwi 29, 0
  0245fe0  bt 2, 0x246164
  0245fe4  lfs 1, 16(31)
  0245fe8  lfs 2, 20(31)
  0245fec  stfs 1, 192(1)
  0245ff0  lfs 3, 24(31)
  0245ff4  stfs 2, 196(1)
  0245ff8  lfs 4, 28(31)
  0245ffc  stfs 3, 200(1)
  0246000  stfs 4, 204(1)
  0246004  lfs 4, 0(29)
  0246008  fadds 1, 1, 4
  024600c  lis 3, 36
  0246010  addic 28, 1, 208
  0246014  addi 6, 3, 24456
  0246018  ori 3, 28, 0
  024601c  ori 4, 31, 0
  0246020  lis 5, 1
  0246024  ori 7, 29, 0
  0246028  stfs 1, 16(31)
  024602c  lfs 1, 4(29)
  0246030  fadds 1, 2, 1
  0246034  stfs 1, 20(31)
  0246038  lfs 1, 8(29)
  024603c  fadds 1, 3, 1
  0246040  stfs 1, 24(31)
  0246044  lfs 1, 0(6)
  0246048  bl 0x10581c
  024604c  nop
  0246050  addic 30, 31, 16
  0246054  addic 3, 1, 192
  0246058  ori 4, 30, 0
  024605c  li 5, 0
  0246060  ori 6, 31, 0
  0246064  ori 7, 28, 0
  0246068  bl 0x57820
  024606c  nop
  0246070  cmpwi 3, 0
  0246074  bf 2, 0x2460a4
  0246078  lis 4, 36
  024607c  ori 3, 30, 0
  0246080  addi 4, 4, 24456
  0246084  addic 7, 1, 208
  0246088  li 5, 0
  024608c  ori 6, 31, 0
  0246090  lfs 1, 4(4)
  0246094  bl 0x5e598
  0246098  nop
  024609c  cmpwi 3, 0
  02460a0  bt 2, 0x24611c
  02460a4  lis 3, 36
  02460a8  li 7, -1
  02460ac  addi 3, 3, 24456
  02460b0  li 6, 1
  02460b4  li 11, 0
  02460b8  lis 5, 161
  02460bc  ori 4, 29, 0
  02460c0  lfs 1, 8(3)
  02460c4  addic 5, 5, 2400
  02460c8  lfs 3, 12(3)
  02460cc  li 8, 10
  02460d0  lfs 4, 16(3)
  02460d4  li 9, 3
  02460d8  lfs 5, 20(3)
  02460dc  li 10, 16
  02460e0  lfs 6, 24(3)
  02460e4  fmr 2, 1
  02460e8  lfs 7, 28(3)
  02460ec  std 7, 144(1)
  02460f0  std 6, 160(1)
  02460f4  ori 3, 31, 0
  02460f8  std 6, 168(1)
  02460fc  std 7, 176(1)
  0246100  std 11, 184(1)
  0246104  bl 0x10e030
  0246108  nop
  024610c  ori 3, 31, 0
  0246110  bl 0xefb38
  0246114  nop
  0246118  b 0x246164
  024611c  addic 3, 29, 24
  0246120  bl 0x4fff60
  0246124  nop
  0246128  cmpwi 3, 0
  024612c  bt 2, 0x246164
  0246130  lis 3, 36
  0246134  lfs 1, 16(29)
  0246138  addi 3, 3, 24456
  024613c  lfs 2, 32(3)
  0246140  fmuls 1, 1, 2
  0246144  stfs 1, 16(29)
  0246148  lfs 2, 36(3)
  024614c  fcmpu 0, 1, 2
  0246150  cror 6, 1, 2
  0246154  bt 6, 0x246164
  0246158  ori 3, 31, 0
  024615c  bl 0xefb38
  0246160  nop
  0246164  ld 0, 304(1)
  0246168  mtlr 0
  024616c  ld 28, 256(1)
  0246170  ld 29, 264(1)
  0246174  ld 30, 272(1)
  0246178  ld 31, 280(1)
  024617c  addi 1, 1, 288
  0246180  blr
