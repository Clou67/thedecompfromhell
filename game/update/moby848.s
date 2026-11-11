# game/update/moby848.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_848:   # 0x484a18, 0x15f0 bytes
  0484a18  stdu 1, -736(1)
  0484a1c  mflr 0
  0484a20  std 0, 752(1)
  0484a24  stfd 17, 616(1)
  0484a28  stfd 18, 624(1)
  0484a2c  stfd 19, 632(1)
  0484a30  stfd 20, 640(1)
  0484a34  stfd 21, 648(1)
  0484a38  stfd 22, 656(1)
  0484a3c  stfd 23, 664(1)
  0484a40  stfd 24, 672(1)
  0484a44  stfd 25, 680(1)
  0484a48  stfd 26, 688(1)
  0484a4c  stfd 27, 696(1)
  0484a50  stfd 28, 704(1)
  0484a54  stfd 29, 712(1)
  0484a58  stfd 30, 720(1)
  0484a5c  stfd 31, 728(1)
  0484a60  std 31, 608(1)
  0484a64  ori 31, 3, 0
  0484a68  lis 4, 72
  0484a6c  addic 5, 1, 320
  0484a70  std 30, 600(1)
  0484a74  addi 4, 4, 18808
  0484a78  lwz 30, 120(31)
  0484a7c  std 29, 592(1)
  0484a80  std 28, 584(1)
  0484a84  std 27, 576(1)
  0484a88  std 26, 568(1)
  0484a8c  std 25, 560(1)
  0484a90  std 24, 552(1)
  0484a94  std 23, 544(1)
  0484a98  lfs 1, 0(4)
  0484a9c  bl 0x1118d8
  0484aa0  nop
  0484aa4  lwz 3, 16(30)
  0484aa8  li 27, 0
  0484aac  ori 29, 27, 0
  0484ab0  lhz 4, 166(3)
  0484ab4  cmpwi 4, 631
  0484ab8  bf 2, 0x484ac8
  0484abc  lwz 27, 120(3)
  0484ac0  addic 27, 27, 592
  0484ac4  b 0x484af4
  0484ac8  cmpwi 4, 233
  0484acc  bf 2, 0x484af4
  0484ad0  lwz 27, 120(3)
  0484ad4  lbz 3, 32(3)
  0484ad8  addic 27, 27, 440
  0484adc  cmpwi 3, 64
  0484ae0  cmpwi 1, 3, 1
  0484ae4  bt 2, 0x484aec
  0484ae8  bf 6, 0x484af4
  0484aec  li 3, 2
  0484af0  stb 3, 32(31)
  0484af4  lbz 3, 32(31)
  0484af8  cmpwi 3, 1
  0484afc  cmpwi 1, 3, 0
  0484b00  cmpwi 6, 3, 2
  0484b04  bt 1, 0x484b10
  0484b08  bf 5, 0x485f98
  0484b0c  b 0x484b1c
  0484b10  cmpwi 1, 27, 0
  0484b14  bf 25, 0x485f30
  0484b18  b 0x485f98
  0484b1c  lfs 1, 4(30)
  0484b20  lfs 4, 0(30)
  0484b24  fmuls 1, 1, 1
  0484b28  lis 3, 72
  0484b2c  addi 3, 3, 18808
  0484b30  fmadds 1, 4, 4, 1
  0484b34  lfs 24, 4(3)
  0484b38  fsqrts 2, 1
  0484b3c  fcmpu 0, 2, 24
  0484b40  bf 2, 0x484b68
  0484b44  stfs 4, 112(1)
  0484b48  lfs 1, 4(30)
  0484b4c  stfs 1, 116(1)
  0484b50  lfs 1, 8(30)
  0484b54  stfs 1, 120(1)
  0484b58  lfs 4, 12(30)
  0484b5c  stw 29, 116(1)
  0484b60  stw 29, 112(1)
  0484b64  b 0x484bcc
  0484b68  frsqrte 2, 1
  0484b6c  lis 3, 72
  0484b70  addi 3, 3, 18808
  0484b74  lfs 3, 8(3)
  0484b78  lfs 5, 12(3)
  0484b7c  fmuls 6, 1, 2
  0484b80  fmuls 7, 3, 2
  0484b84  fnmsubs 6, 6, 2, 5
  0484b88  fmadds 2, 6, 7, 2
  0484b8c  fmuls 6, 1, 2
  0484b90  fmuls 7, 3, 2
  0484b94  fnmsubs 6, 6, 2, 5
  0484b98  fmadds 2, 6, 7, 2
  0484b9c  fmuls 1, 1, 2
  0484ba0  fmuls 3, 3, 2
  0484ba4  fnmsubs 1, 1, 2, 5
  0484ba8  fmadds 1, 1, 3, 2
  0484bac  fmuls 2, 4, 1
  0484bb0  stfs 2, 112(1)
  0484bb4  lfs 2, 4(30)
  0484bb8  fmuls 1, 2, 1
  0484bbc  stfs 1, 116(1)
  0484bc0  lfs 1, 8(30)
  0484bc4  stfs 1, 120(1)
  0484bc8  lfs 4, 12(30)
  0484bcc  lis 3, 72
  0484bd0  lis 4, 16256
  0484bd4  stfs 4, 124(1)
  0484bd8  addi 3, 3, 18808
  0484bdc  lis 5, 1
  0484be0  addic 7, 1, 112
  0484be4  ori 5, 5, 3
  0484be8  lfs 23, 12(3)
  0484bec  stw 4, 8(30)
  0484bf0  lfs 19, 16(3)
  0484bf4  ori 4, 31, 0
  0484bf8  addic 3, 1, 272
  0484bfc  fmr 1, 19
  0484c00  bl 0x10581c
  0484c04  nop
  0484c08  lfs 6, 276(1)
  0484c0c  lfs 5, 272(1)
  0484c10  fmuls 4, 6, 6
  0484c14  fmr 2, 24
  0484c18  lfs 3, 24(31)
  0484c1c  lhz 28, 166(31)
  0484c20  fmadds 4, 5, 5, 4
  0484c24  fmr 1, 2
  0484c28  fsqrts 7, 4
  0484c2c  fcmpu 0, 7, 1
  0484c30  bt 2, 0x484c7c
  0484c34  frsqrte 1, 4
  0484c38  lis 3, 72
  0484c3c  addi 3, 3, 18808
  0484c40  lfs 2, 8(3)
  0484c44  fmuls 7, 4, 1
  0484c48  fmuls 8, 2, 1
  0484c4c  fnmsubs 7, 7, 1, 23
  0484c50  fmadds 1, 7, 8, 1
  0484c54  fmuls 7, 4, 1
  0484c58  fmuls 8, 2, 1
  0484c5c  fnmsubs 7, 7, 1, 23
  0484c60  fmadds 1, 7, 8, 1
  0484c64  fmuls 4, 4, 1
  0484c68  fmuls 2, 2, 1
  0484c6c  fnmsubs 4, 4, 1, 23
  0484c70  fmadds 2, 4, 2, 1
  0484c74  fmuls 1, 5, 2
  0484c78  fmuls 2, 6, 2
  0484c7c  lis 3, 17839
  0484c80  lis 4, 16256
  0484c84  stfs 1, 272(1)
  0484c88  ori 3, 3, 57190
  0484c8c  stfs 2, 276(1)
  0484c90  li 6, 1
  0484c94  lis 5, 72
  0484c98  stw 4, 280(1)
  0484c9c  stw 3, 284(1)
  0484ca0  stb 6, 296(1)
  0484ca4  addi 5, 5, 18808
  0484ca8  stb 6, 297(1)
  0484cac  sth 28, 298(1)
  0484cb0  lfs 1, 12(30)
  0484cb4  lis 28, 114
  0484cb8  fsubs 1, 1, 3
  0484cbc  lfs 2, 20(5)
  0484cc0  lwz 26, 0(30)
  0484cc4  lwz 3, 4(30)
  0484cc8  lfs 31, 0(30)
  0484ccc  fmuls 2, 1, 2
  0484cd0  lfs 1, 4(30)
  0484cd4  stfs 2, 8(30)
  0484cd8  lfs 4, 24(5)
  0484cdc  lfs 3, -3052(28)
  0484ce0  fmuls 4, 3, 4
  0484ce4  fcmpu 0, 2, 4
  0484ce8  cror 6, 0, 2
  0484cec  bt 6, 0x484cf8
  0484cf0  stfs 4, 8(30)
  0484cf4  b 0x484d18
  0484cf8  lis 4, 72
  0484cfc  addi 4, 4, 18808
  0484d00  lfs 4, 28(4)
  0484d04  fmuls 3, 3, 4
  0484d08  fcmpu 0, 2, 3
  0484d0c  cror 6, 1, 2
  0484d10  bt 6, 0x484d18
  0484d14  stfs 3, 8(30)
  0484d18  fabs 3, 31
  0484d1c  lis 5, 72
  0484d20  fabs 2, 1
  0484d24  addi 5, 5, 18808
  0484d28  rlwinm 3, 3, 3, 29, 29
  0484d2c  lis 4, 115
  0484d30  fsubs 1, 3, 2
  0484d34  stfs 1, 428(1)
  0484d38  lfs 31, 32(5)
  0484d3c  lwz 5, 428(1)
  0484d40  lfs 1, 428(1)
  0484d44  rlwimi 3, 5, 2, 30, 30
  0484d48  fsub 4, 1, 24
  0484d4c  rlwimi 3, 26, 4, 28, 28
  0484d50  fsub 5, 1, 24
  0484d54  addic 26, 4, 22784
  0484d58  slwi 4, 3, 2
  0484d5c  ori 5, 26, 0
  0484d60  rlwimi 5, 3, 2, 26, 28
  0484d64  clrldi 3, 5, 32
  0484d68  lfsx 1, 26, 4
  0484d6c  fsel 4, 4, 3, 2
  0484d70  fsel 3, 5, 2, 3
  0484d74  lfs 2, 4(3)
  0484d78  fcmpu 0, 4, 24
  0484d7c  bt 1, 0x484d88
  0484d80  fmr 25, 24
  0484d84  b 0x484ea0
  0484d88  fsubs 5, 3, 4
  0484d8c  fadds 3, 3, 4
  0484d90  addic 3, 1, 16
  0484d94  li 6, 2
  0484d98  addic 4, 3, 480
  0484d9c  addic 5, 3, 496
  0484da0  mtctr 6
  0484da4  fdivs 3, 5, 3
  0484da8  fmuls 4, 3, 3
  0484dac  stfs 3, 508(1)
  0484db0  stfs 3, 500(1)
  0484db4  stfs 3, 504(1)
  0484db8  stfs 3, 496(1)
  0484dbc  lfs 6, 508(1)
  0484dc0  lfs 7, 500(1)
  0484dc4  lfs 8, 504(1)
  0484dc8  fmuls 5, 4, 4
  0484dcc  fmuls 7, 7, 4
  0484dd0  fmuls 6, 6, 5
  0484dd4  fmuls 3, 5, 5
  0484dd8  fmuls 5, 8, 5
  0484ddc  stfs 7, 500(1)
  0484de0  fmuls 4, 6, 4
  0484de4  stfs 5, 504(1)
  0484de8  stfs 4, 508(1)
  0484dec  lfs 4, 480(3)
  0484df0  fmuls 4, 4, 3
  0484df4  stfs 4, 496(3)
  0484df8  lfs 4, 4(4)
  0484dfc  addic 3, 3, 8
  0484e00  addic 4, 4, 8
  0484e04  fmuls 4, 4, 3
  0484e08  stfs 4, 4(5)
  0484e0c  addic 5, 5, 8
  0484e10  bdnz 0x484dec
  0484e14  li 5, 4
  0484e18  ori 3, 1, 0
  0484e1c  mtctr 5
  0484e20  lis 4, 115
  0484e24  addic 5, 3, 496
  0484e28  addic 4, 4, 22752
  0484e2c  ori 7, 5, 0
  0484e30  lfs 3, 496(3)
  0484e34  lfs 4, 0(4)
  0484e38  fmuls 3, 3, 4
  0484e3c  lfs 4, 4(4)
  0484e40  addic 4, 4, 8
  0484e44  stfs 3, 496(3)
  0484e48  lfs 3, 4(5)
  0484e4c  addic 3, 3, 8
  0484e50  fmuls 3, 3, 4
  0484e54  stfs 3, 4(5)
  0484e58  addic 5, 5, 8
  0484e5c  bdnz 0x484e30
  0484e60  fmr 25, 24
  0484e64  ori 3, 1, 0
  0484e68  mtctr 6
  0484e6c  lfs 3, 496(3)
  0484e70  lfs 4, 4(7)
  0484e74  fadds 3, 25, 3
  0484e78  lfs 5, 8(7)
  0484e7c  addic 3, 3, 16
  0484e80  lfs 25, 12(7)
  0484e84  addic 7, 7, 16
  0484e88  fadds 3, 3, 4
  0484e8c  fadds 3, 3, 5
  0484e90  fadds 25, 3, 25
  0484e94  bdnz 0x484e6c
  0484e98  fadds 25, 25, 31
  0484e9c  fmadds 25, 25, 1, 2
  0484ea0  lfs 1, 320(1)
  0484ea4  lfs 2, 16(31)
  0484ea8  lfs 3, 324(1)
  0484eac  lfs 4, 20(31)
  0484eb0  fsubs 1, 1, 2
  0484eb4  fsubs 2, 3, 4
  0484eb8  fabs 3, 1
  0484ebc  fabs 4, 2
  0484ec0  stfs 1, 416(1)
  0484ec4  stfs 2, 420(1)
  0484ec8  stfs 25, 400(1)
  0484ecc  fsubs 1, 3, 4
  0484ed0  stfs 1, 424(1)
  0484ed4  lwz 3, 416(1)
  0484ed8  lfs 1, 416(1)
  0484edc  lwz 4, 420(1)
  0484ee0  lfs 2, 420(1)
  0484ee4  fabs 1, 1
  0484ee8  lwz 5, 424(1)
  0484eec  rlwinm 4, 4, 3, 29, 29
  0484ef0  lfs 5, 424(1)
  0484ef4  fabs 2, 2
  0484ef8  rlwimi 4, 5, 2, 30, 30
  0484efc  fsub 6, 5, 24
  0484f00  fsub 5, 5, 24
  0484f04  rlwimi 4, 3, 4, 28, 28
  0484f08  ori 3, 26, 0
  0484f0c  rlwimi 3, 4, 2, 26, 28
  0484f10  slwi 4, 4, 2
  0484f14  clrldi 3, 3, 32
  0484f18  fsel 4, 6, 1, 4
  0484f1c  lfsx 1, 26, 4
  0484f20  fsel 3, 5, 2, 3
  0484f24  lfs 2, 4(3)
  0484f28  fcmpu 0, 4, 24
  0484f2c  bt 1, 0x484f38
  0484f30  fmr 1, 24
  0484f34  b 0x485050
  0484f38  fsubs 5, 3, 4
  0484f3c  fadds 3, 3, 4
  0484f40  addic 3, 1, 16
  0484f44  li 7, 2
  0484f48  addic 4, 3, 448
  0484f4c  addic 5, 3, 464
  0484f50  mtctr 7
  0484f54  fdivs 3, 5, 3
  0484f58  fmuls 4, 3, 3
  0484f5c  stfs 3, 476(1)
  0484f60  stfs 3, 468(1)
  0484f64  stfs 3, 472(1)
  0484f68  stfs 3, 464(1)
  0484f6c  lfs 6, 476(1)
  0484f70  lfs 7, 468(1)
  0484f74  lfs 8, 472(1)
  0484f78  fmuls 5, 4, 4
  0484f7c  fmuls 7, 7, 4
  0484f80  fmuls 6, 6, 5
  0484f84  fmuls 3, 5, 5
  0484f88  fmuls 5, 8, 5
  0484f8c  stfs 7, 468(1)
  0484f90  fmuls 4, 6, 4
  0484f94  stfs 5, 472(1)
  0484f98  stfs 4, 476(1)
  0484f9c  lfs 4, 448(3)
  0484fa0  fmuls 4, 4, 3
  0484fa4  stfs 4, 464(3)
  0484fa8  lfs 4, 4(4)
  0484fac  addic 3, 3, 8
  0484fb0  addic 4, 4, 8
  0484fb4  fmuls 4, 4, 3
  0484fb8  stfs 4, 4(5)
  0484fbc  addic 5, 5, 8
  0484fc0  bdnz 0x484f9c
  0484fc4  li 5, 4
  0484fc8  ori 3, 1, 0
  0484fcc  mtctr 5
  0484fd0  lis 4, 115
  0484fd4  addic 5, 3, 464
  0484fd8  addic 4, 4, 22752
  0484fdc  ori 6, 5, 0
  0484fe0  lfs 3, 464(3)
  0484fe4  lfs 4, 0(4)
  0484fe8  fmuls 3, 3, 4
  0484fec  lfs 4, 4(4)
  0484ff0  addic 4, 4, 8
  0484ff4  stfs 3, 464(3)
  0484ff8  lfs 3, 4(5)
  0484ffc  addic 3, 3, 8
  0485000  fmuls 3, 3, 4
  0485004  stfs 3, 4(5)
  0485008  addic 5, 5, 8
  048500c  bdnz 0x484fe0
  0485010  fmr 3, 24
  0485014  ori 3, 1, 0
  0485018  mtctr 7
  048501c  lfs 4, 464(3)
  0485020  fadds 3, 3, 4
  0485024  addic 3, 3, 16
  0485028  lfs 4, 4(6)
  048502c  lfs 5, 8(6)
  0485030  lfs 6, 12(6)
  0485034  addic 6, 6, 16
  0485038  fadds 3, 3, 4
  048503c  fadds 3, 3, 5
  0485040  fadds 3, 3, 6
  0485044  bdnz 0x48501c
  0485048  fadds 3, 3, 31
  048504c  fmadds 1, 3, 1, 2
  0485050  fmr 2, 1
  0485054  fmr 1, 25
  0485058  bl 0x5026a0
  048505c  nop
  0485060  fmr 2, 1
  0485064  lis 3, 72
  0485068  lfs 4, -3052(28)
  048506c  addi 3, 3, 18808
  0485070  lfs 1, 0(30)
  0485074  lfs 25, 36(3)
  0485078  fcmpu 0, 2, 25
  048507c  cror 6, 1, 2
  0485080  bt 6, 0x485328
  0485084  lfs 1, 320(1)
  0485088  lfs 2, 16(31)
  048508c  lfs 3, 324(1)
  0485090  lfs 5, 20(31)
  0485094  fsubs 1, 1, 2
  0485098  fsubs 2, 3, 5
  048509c  fabs 3, 1
  04850a0  fabs 5, 2
  04850a4  stfs 1, 404(1)
  04850a8  stfs 2, 408(1)
  04850ac  fsubs 1, 3, 5
  04850b0  stfs 1, 412(1)
  04850b4  lwz 3, 404(1)
  04850b8  lfs 1, 404(1)
  04850bc  lwz 4, 408(1)
  04850c0  lfs 2, 408(1)
  04850c4  fabs 1, 1
  04850c8  lwz 5, 412(1)
  04850cc  rlwinm 4, 4, 3, 29, 29
  04850d0  lfs 6, 412(1)
  04850d4  fabs 2, 2
  04850d8  rlwimi 4, 5, 2, 30, 30
  04850dc  fsub 7, 6, 24
  04850e0  fsub 6, 6, 24
  04850e4  rlwimi 4, 3, 4, 28, 28
  04850e8  ori 3, 26, 0
  04850ec  rlwimi 3, 4, 2, 26, 28
  04850f0  slwi 4, 4, 2
  04850f4  clrldi 3, 3, 32
  04850f8  fsel 5, 7, 1, 5
  04850fc  lfsx 1, 26, 4
  0485100  fsel 3, 6, 2, 3
  0485104  lfs 2, 4(3)
  0485108  fcmpu 0, 5, 24
  048510c  bt 1, 0x485118
  0485110  fmr 31, 24
  0485114  b 0x485230
  0485118  fsubs 6, 3, 5
  048511c  fadds 3, 3, 5
  0485120  addic 3, 1, 16
  0485124  li 6, 2
  0485128  addic 4, 3, 416
  048512c  addic 5, 3, 432
  0485130  mtctr 6
  0485134  fdivs 3, 6, 3
  0485138  fmuls 5, 3, 3
  048513c  stfs 3, 444(1)
  0485140  stfs 3, 436(1)
  0485144  stfs 3, 440(1)
  0485148  stfs 3, 432(1)
  048514c  lfs 7, 444(1)
  0485150  lfs 8, 436(1)
  0485154  lfs 9, 440(1)
  0485158  fmuls 6, 5, 5
  048515c  fmuls 8, 8, 5
  0485160  fmuls 7, 7, 6
  0485164  fmuls 3, 6, 6
  0485168  fmuls 6, 9, 6
  048516c  stfs 8, 436(1)
  0485170  fmuls 5, 7, 5
  0485174  stfs 6, 440(1)
  0485178  stfs 5, 444(1)
  048517c  lfs 5, 416(3)
  0485180  fmuls 5, 5, 3
  0485184  stfs 5, 432(3)
  0485188  lfs 5, 4(4)
  048518c  addic 3, 3, 8
  0485190  addic 4, 4, 8
  0485194  fmuls 5, 5, 3
  0485198  stfs 5, 4(5)
  048519c  addic 5, 5, 8
  04851a0  bdnz 0x48517c
  04851a4  li 5, 4
  04851a8  ori 3, 1, 0
  04851ac  mtctr 5
  04851b0  lis 4, 115
  04851b4  addic 5, 3, 432
  04851b8  addic 4, 4, 22752
  04851bc  ori 7, 5, 0
  04851c0  lfs 3, 432(3)
  04851c4  lfs 5, 0(4)
  04851c8  fmuls 3, 3, 5
  04851cc  lfs 5, 4(4)
  04851d0  addic 4, 4, 8
  04851d4  stfs 3, 432(3)
  04851d8  lfs 3, 4(5)
  04851dc  addic 3, 3, 8
  04851e0  fmuls 3, 3, 5
  04851e4  stfs 3, 4(5)
  04851e8  addic 5, 5, 8
  04851ec  bdnz 0x4851c0
  04851f0  fmr 3, 24
  04851f4  ori 3, 1, 0
  04851f8  mtctr 6
  04851fc  lfs 5, 432(3)
  0485200  fadds 3, 3, 5
  0485204  addic 3, 3, 16
  0485208  lfs 5, 4(7)
  048520c  lfs 6, 8(7)
  0485210  lfs 7, 12(7)
  0485214  addic 7, 7, 16
  0485218  fadds 3, 3, 5
  048521c  fadds 3, 3, 6
  0485220  fadds 3, 3, 7
  0485224  bdnz 0x4851fc
  0485228  fadds 31, 3, 31
  048522c  fmadds 31, 31, 1, 2
  0485230  lis 3, 72
  0485234  fmr 1, 31
  0485238  li 6, 0
  048523c  addi 26, 3, 18808
  0485240  lis 3, 139
  0485244  lfs 3, 40(26)
  0485248  lfs 2, -12100(3)
  048524c  addic 3, 1, 400
  0485250  fmuls 2, 2, 3
  0485254  fmuls 2, 2, 4
  0485258  bl 0x109ec0
  048525c  nop
  0485260  lfs 1, 44(26)
  0485264  lfs 2, 400(1)
  0485268  lfs 3, 48(26)
  048526c  fadds 1, 2, 1
  0485270  lfs 4, 52(26)
  0485274  lfs 5, 4(30)
  0485278  lfs 6, 0(30)
  048527c  fmuls 5, 5, 5
  0485280  fsubs 7, 3, 1
  0485284  fsubs 8, 4, 1
  0485288  fsubs 3, 3, 2
  048528c  fmadds 6, 6, 6, 5
  0485290  fsub 9, 1, 7
  0485294  fsub 13, 2, 3
  0485298  fsqrts 6, 6
  048529c  fsel 1, 9, 7, 1
  04852a0  lfs 7, 56(26)
  04852a4  fsel 3, 13, 3, 2
  04852a8  lfs 9, 60(26)
  04852ac  fsubs 2, 4, 2
  04852b0  lfs 11, 64(26)
  04852b4  fsub 10, 8, 1
  04852b8  fsel 1, 10, 8, 1
  04852bc  lfs 8, 68(26)
  04852c0  fmuls 10, 1, 1
  04852c4  fmuls 12, 10, 1
  04852c8  fmuls 0, 10, 12
  04852cc  fmadds 1, 12, 7, 1
  04852d0  fmuls 12, 10, 0
  04852d4  fmadds 1, 0, 9, 1
  04852d8  fmuls 4, 10, 12
  04852dc  fmadds 1, 12, 11, 1
  04852e0  fsub 10, 2, 3
  04852e4  fmadds 1, 4, 8, 1
  04852e8  fsel 2, 10, 2, 3
  04852ec  fmuls 1, 1, 6
  04852f0  fmuls 3, 2, 2
  04852f4  fmadds 4, 1, 1, 5
  04852f8  fmuls 5, 3, 2
  04852fc  stfs 1, 0(30)
  0485300  fsqrts 4, 4
  0485304  fmuls 6, 3, 5
  0485308  fmadds 2, 5, 7, 2
  048530c  fmuls 5, 3, 6
  0485310  fmadds 2, 6, 9, 2
  0485314  fmuls 3, 3, 5
  0485318  fmadds 2, 5, 11, 2
  048531c  fmadds 2, 3, 8, 2
  0485320  fmuls 2, 2, 4
  0485324  stfs 2, 4(30)
  0485328  lfs 2, 16(31)
  048532c  fadds 1, 2, 1
  0485330  lfs 2, 20(31)
  0485334  lfs 3, 24(31)
  0485338  lwz 3, 16(30)
  048533c  cmpwi 27, 0
  0485340  stfs 1, 16(31)
  0485344  lfs 4, 4(30)
  0485348  fadds 2, 2, 4
  048534c  stfs 2, 20(31)
  0485350  lfs 4, 8(30)
  0485354  fadds 3, 3, 4
  0485358  stfs 3, 24(31)
  048535c  lfs 3, 20(3)
  0485360  lfs 4, 16(3)
  0485364  fsubs 2, 2, 3
  0485368  fsubs 1, 1, 4
  048536c  fmuls 2, 2, 2
  0485370  fmadds 31, 1, 1, 2
  0485374  fsqrts 31, 31
  0485378  bt 2, 0x485420
  048537c  lfs 1, 24(3)
  0485380  lfs 2, 328(1)
  0485384  fsubs 1, 1, 2
  0485388  fcmpu 0, 31, 1
  048538c  cror 6, 0, 2
  0485390  bt 6, 0x4853c8
  0485394  lwz 4, 0(27)
  0485398  extsw 4, 4
  048539c  bl 0x15cc7c
  04853a0  nop
  04853a4  cmpwi 3, 0
  04853a8  bf 2, 0x485420
  04853ac  li 3, 0
  04853b0  lwz 5, 16(30)
  04853b4  li 4, 4
  04853b8  bl 0x15d12c
  04853bc  nop
  04853c0  stw 3, 0(27)
  04853c4  b 0x485420
  04853c8  lwz 4, 0(27)
  04853cc  cmpwi 4, -1
  04853d0  bt 2, 0x485418
  04853d4  sldi 5, 4, 7
  04853d8  sldi 7, 4, 4
  04853dc  lis 6, 150
  04853e0  subc 5, 5, 7
  04853e4  ori 8, 3, 0
  04853e8  addic 3, 6, 14176
  04853ec  extsw 5, 5
  04853f0  addc 3, 3, 5
  04853f4  lwz 5, 136(3)
  04853f8  cmpw 5, 8
  04853fc  bf 2, 0x485418
  0485400  lbz 3, 116(3)
  0485404  cmpwi 3, 0
  0485408  bt 2, 0x485418
  048540c  extsw 3, 4
  0485410  bl 0x15cdb0
  0485414  nop
  0485418  li 3, -1
  048541c  stw 3, 0(27)
  0485420  lwz 3, 16(30)
  0485424  lfs 1, 328(1)
  0485428  lfs 2, 24(3)
  048542c  fsubs 1, 2, 1
  0485430  fcmpu 0, 31, 1
  0485434  cror 6, 0, 2
  0485438  bt 6, 0x485ef0
  048543c  lis 3, 72
  0485440  lis 27, 114
  0485444  addi 3, 3, 18808
  0485448  lfs 1, 72(3)
  048544c  lfs 2, -3056(27)
  0485450  lwz 3, 20(30)
  0485454  fmuls 1, 2, 1
  0485458  fctiwz 1, 1
  048545c  stfd 1, 528(1)
  0485460  lwz 4, 532(1)
  0485464  divw 5, 3, 4
  0485468  mullw 4, 5, 4
  048546c  subc 3, 3, 4
  0485470  cmpwi 3, 0
  0485474  bf 2, 0x485ef0
  0485478  lis 3, 72
  048547c  lwz 4, 24(30)
  0485480  addi 3, 3, 18808
  0485484  xori 4, 4, 1
  0485488  cmpwi 4, 0
  048548c  stw 4, 24(30)
  0485490  lfs 20, 76(3)
  0485494  lfs 1, 400(1)
  0485498  fmr 31, 20
  048549c  bt 2, 0x4854a4
  04854a0  fmr 20, 25
  04854a4  fmr 21, 31
  04854a8  fmr 2, 20
  04854ac  bl 0x502578
  04854b0  nop
  04854b4  lis 3, 72
  04854b8  addi 3, 3, 18808
  04854bc  lfs 2, 44(3)
  04854c0  lfs 26, 48(3)
  04854c4  fadds 1, 1, 2
  04854c8  lfs 27, 52(3)
  04854cc  lfs 28, 56(3)
  04854d0  lfs 29, 60(3)
  04854d4  lfs 30, 64(3)
  04854d8  lwz 4, 24(30)
  04854dc  fsubs 2, 26, 1
  04854e0  fsubs 3, 27, 1
  04854e4  cmpwi 4, 0
  04854e8  fsub 4, 1, 2
  04854ec  fsel 1, 4, 2, 1
  04854f0  fsub 2, 3, 1
  04854f4  fsel 3, 2, 3, 1
  04854f8  lfs 2, 400(1)
  04854fc  fmr 1, 21
  0485500  lfs 31, 68(3)
  0485504  lfs 22, 80(3)
  0485508  fmuls 4, 3, 3
  048550c  fmuls 5, 4, 3
  0485510  fmuls 6, 4, 5
  0485514  fmadds 3, 5, 28, 3
  0485518  fmuls 5, 4, 6
  048551c  fmadds 3, 6, 29, 3
  0485520  fmuls 20, 4, 5
  0485524  fmadds 3, 5, 30, 3
  0485528  fmadds 20, 20, 31, 3
  048552c  bt 2, 0x485534
  0485530  fmr 1, 25
  0485534  fmr 3, 1
  0485538  fmr 1, 2
  048553c  fmr 2, 3
  0485540  bl 0x502578
  0485544  nop
  0485548  fsubs 2, 26, 1
  048554c  fsubs 3, 27, 1
  0485550  addic 26, 1, 128
  0485554  fsub 4, 1, 2
  0485558  fsel 1, 4, 2, 1
  048555c  fsub 2, 3, 1
  0485560  fsel 1, 2, 3, 1
  0485564  lfs 2, 16(31)
  0485568  fmadds 25, 20, 22, 2
  048556c  lfs 3, 20(31)
  0485570  lwz 3, 24(30)
  0485574  subfic 5, 3, 3
  0485578  lwz 3, 16(30)
  048557c  fmuls 4, 1, 1
  0485580  lfs 27, 24(31)
  0485584  extsw 4, 5
  0485588  lfs 26, 28(31)
  048558c  ori 5, 26, 0
  0485590  fmuls 5, 4, 1
  0485594  fmuls 2, 4, 5
  0485598  fmadds 1, 5, 28, 1
  048559c  fmuls 5, 4, 2
  04855a0  fmadds 1, 2, 29, 1
  04855a4  fmuls 21, 4, 5
  04855a8  fmadds 1, 5, 30, 1
  04855ac  fmadds 21, 21, 31, 1
  04855b0  fmadds 31, 21, 22, 3
  04855b4  bl 0xf1114
  04855b8  nop
  04855bc  lfs 1, 128(1)
  04855c0  lfs 2, 132(1)
  04855c4  lis 3, 72
  04855c8  fsubs 3, 25, 1
  04855cc  lfs 4, 136(1)
  04855d0  fsubs 5, 31, 2
  04855d4  stfs 26, 156(1)
  04855d8  fsubs 6, 27, 4
  04855dc  stfs 26, 172(1)
  04855e0  addi 3, 3, 18808
  04855e4  ori 25, 29, 0
  04855e8  fmadds 1, 3, 19, 1
  04855ec  fmadds 2, 5, 19, 2
  04855f0  stfs 3, 144(1)
  04855f4  fmadds 3, 6, 19, 4
  04855f8  stfs 5, 148(1)
  04855fc  stfs 6, 152(1)
  0485600  stfs 1, 160(1)
  0485604  stfs 2, 164(1)
  0485608  stfs 3, 168(1)
  048560c  lfs 31, 84(3)
  0485610  lfs 25, 88(3)
  0485614  lfs 26, 92(3)
  0485618  lfs 27, 96(3)
  048561c  lfs 28, 100(3)
  0485620  lfs 29, 104(3)
  0485624  lfs 30, 108(3)
  0485628  fmr 1, 31
  048562c  stw 29, 176(1)
  0485630  stw 29, 180(1)
  0485634  fmr 2, 23
  0485638  stw 29, 184(1)
  048563c  stw 29, 188(1)
  0485640  bl 0xfcbe8
  0485644  nop
  0485648  stfs 1, 176(1)
  048564c  fmr 2, 23
  0485650  fmr 1, 31
  0485654  bl 0xfcbe8
  0485658  nop
  048565c  stfs 1, 180(1)
  0485660  fmr 1, 31
  0485664  fmr 2, 23
  0485668  bl 0xfcbe8
  048566c  nop
  0485670  lfs 3, 148(1)
  0485674  lfs 4, 144(1)
  0485678  fmuls 2, 3, 3
  048567c  lfs 5, 180(1)
  0485680  lfs 6, 152(1)
  0485684  fmuls 7, 5, 5
  0485688  lfs 8, 176(1)
  048568c  lfs 9, 156(1)
  0485690  lfs 10, -3052(28)
  0485694  stfs 9, 188(1)
  0485698  fmadds 2, 4, 4, 2
  048569c  fmadds 7, 8, 8, 7
  04856a0  fmadds 2, 6, 6, 2
  04856a4  fmadds 7, 1, 1, 7
  04856a8  fsqrts 2, 2
  04856ac  fsqrts 7, 7
  04856b0  fmuls 9, 2, 25
  04856b4  fmuls 2, 10, 27
  04856b8  fdivs 9, 9, 7
  04856bc  fsub 11, 24, 7
  04856c0  fsub 12, 24, 7
  04856c4  fsub 13, 24, 7
  04856c8  fsub 0, 7, 24
  04856cc  fsub 18, 7, 24
  04856d0  fsub 7, 7, 24
  04856d4  fmuls 17, 1, 9
  04856d8  fmuls 5, 5, 9
  04856dc  fmuls 8, 8, 9
  04856e0  fmuls 1, 10, 26
  04856e4  fsel 9, 11, 24, 17
  04856e8  fsel 10, 12, 24, 5
  04856ec  fsel 11, 13, 24, 8
  04856f0  fsel 9, 0, 9, 17
  04856f4  fsel 5, 18, 10, 5
  04856f8  fsel 7, 7, 11, 8
  04856fc  fadds 6, 6, 9
  0485700  fadds 3, 3, 5
  0485704  fadds 4, 4, 7
  0485708  stfs 6, 184(1)
  048570c  stfs 3, 180(1)
  0485710  stfs 4, 176(1)
  0485714  bl 0xfcbe8
  0485718  nop
  048571c  lfs 2, 180(1)
  0485720  lfs 3, 176(1)
  0485724  fmuls 4, 2, 2
  0485728  lfs 5, 184(1)
  048572c  lfs 6, -3056(27)
  0485730  fmuls 7, 6, 28
  0485734  fmuls 6, 6, 29
  0485738  fmadds 4, 3, 3, 4
  048573c  fctiwz 7, 7
  0485740  fctiwz 6, 6
  0485744  fmadds 4, 5, 5, 4
  0485748  fsqrts 4, 4
  048574c  stfd 7, 528(1)
  0485750  lwz 3, 532(1)
  0485754  stfd 6, 528(1)
  0485758  lwz 4, 532(1)
  048575c  extsw 3, 3
  0485760  extsw 4, 4
  0485764  fdivs 1, 1, 4
  0485768  fsub 6, 24, 4
  048576c  fsub 7, 24, 4
  0485770  fsub 8, 24, 4
  0485774  fsub 9, 4, 24
  0485778  fsub 10, 4, 24
  048577c  fsub 4, 4, 24
  0485780  fmuls 3, 3, 1
  0485784  fmuls 2, 2, 1
  0485788  fmuls 1, 5, 1
  048578c  fsel 5, 6, 24, 3
  0485790  fsel 6, 7, 24, 2
  0485794  fsel 7, 8, 24, 1
  0485798  fsel 3, 9, 5, 3
  048579c  fsel 2, 10, 6, 2
  04857a0  fsel 1, 4, 7, 1
  04857a4  stfs 3, 176(1)
  04857a8  stfs 2, 180(1)
  04857ac  stfs 1, 184(1)
  04857b0  bl 0xfe484
  04857b4  nop
  04857b8  lis 5, 24367
  04857bc  fmr 1, 30
  04857c0  ori 6, 3, 0
  04857c4  addic 4, 1, 176
  04857c8  ori 3, 26, 0
  04857cc  ori 5, 5, 20335
  04857d0  bl 0x128248
  04857d4  nop
  04857d8  addic 25, 25, 1
  04857dc  cmpwi 25, 5
  04857e0  bt 0, 0x485628
  04857e4  lfs 1, 148(1)
  04857e8  lfs 2, 144(1)
  04857ec  fmuls 3, 1, 1
  04857f0  lfs 4, 152(1)
  04857f4  lis 3, 72
  04857f8  addi 25, 3, 18808
  04857fc  fmadds 3, 2, 2, 3
  0485800  lfs 30, 8(25)
  0485804  lfs 5, -3052(28)
  0485808  fmuls 5, 5, 30
  048580c  fmadds 3, 4, 4, 3
  0485810  lfs 6, -3056(27)
  0485814  fsqrts 3, 3
  0485818  fdivs 5, 5, 3
  048581c  fsub 7, 24, 3
  0485820  fsub 8, 24, 3
  0485824  fsub 9, 24, 3
  0485828  fsub 10, 3, 24
  048582c  fsub 11, 3, 24
  0485830  fsub 3, 3, 24
  0485834  fmuls 2, 2, 5
  0485838  fmuls 1, 1, 5
  048583c  fmuls 4, 4, 5
  0485840  fsel 5, 7, 24, 2
  0485844  fsel 7, 8, 24, 1
  0485848  fsel 8, 9, 24, 4
  048584c  fsel 2, 10, 5, 2
  0485850  fsel 1, 11, 7, 1
  0485854  fsel 3, 3, 8, 4
  0485858  stfs 2, 144(1)
  048585c  stfs 1, 148(1)
  0485860  stfs 3, 152(1)
  0485864  lfs 1, 112(25)
  0485868  fmuls 1, 6, 1
  048586c  fctiwz 1, 1
  0485870  stfd 1, 528(1)
  0485874  lfs 1, 116(25)
  0485878  lwz 3, 532(1)
  048587c  fmuls 1, 6, 1
  0485880  extsw 3, 3
  0485884  fctiwz 1, 1
  0485888  stfd 1, 528(1)
  048588c  lwz 4, 532(1)
  0485890  extsw 4, 4
  0485894  bl 0xfe484
  0485898  nop
  048589c  lis 5, 12111
  04858a0  ori 6, 3, 0
  04858a4  lfs 1, 120(25)
  04858a8  ori 3, 26, 0
  04858ac  addic 4, 1, 144
  04858b0  ori 5, 5, 32639
  04858b4  bl 0x128248
  04858b8  nop
  04858bc  lfs 29, 124(25)
  04858c0  lfs 1, -3056(27)
  04858c4  lfs 2, 0(30)
  04858c8  fmuls 1, 1, 29
  04858cc  lfs 3, 20(31)
  04858d0  lfs 4, 16(31)
  04858d4  lfs 5, 132(1)
  04858d8  lfs 6, 24(31)
  04858dc  lfs 7, 128(1)
  04858e0  lfs 8, 136(1)
  04858e4  fmuls 2, 2, 1
  04858e8  addic 24, 1, 208
  04858ec  ori 4, 26, 0
  04858f0  addic 3, 1, 240
  04858f4  stfs 2, 208(1)
  04858f8  lfs 9, 4(30)
  04858fc  fadds 2, 2, 4
  0485900  fmuls 9, 9, 1
  0485904  ori 5, 24, 0
  0485908  fnmsubs 2, 20, 22, 2
  048590c  fadds 3, 9, 3
  0485910  stfs 9, 212(1)
  0485914  lfs 4, 8(30)
  0485918  fmuls 1, 4, 1
  048591c  fsubs 2, 2, 7
  0485920  fnmsubs 3, 21, 22, 3
  0485924  fadds 4, 1, 6
  0485928  fsubs 3, 3, 5
  048592c  stfs 1, 216(1)
  0485930  lfs 1, 12(30)
  0485934  fsubs 4, 4, 8
  0485938  stfs 1, 220(1)
  048593c  fmuls 5, 3, 3
  0485940  stfs 1, 236(1)
  0485944  fmadds 5, 2, 2, 5
  0485948  stfs 4, 232(1)
  048594c  stfs 3, 228(1)
  0485950  stfs 2, 224(1)
  0485954  fmadds 5, 4, 4, 5
  0485958  fsqrts 5, 5
  048595c  fdivs 1, 19, 5
  0485960  fsub 6, 24, 5
  0485964  fsub 7, 24, 5
  0485968  fsub 8, 24, 5
  048596c  fsub 9, 5, 24
  0485970  fsub 10, 5, 24
  0485974  fsub 5, 5, 24
  0485978  fmuls 2, 2, 1
  048597c  fmuls 3, 3, 1
  0485980  fmuls 1, 4, 1
  0485984  fsel 4, 6, 24, 2
  0485988  fsel 6, 7, 24, 3
  048598c  fsel 7, 8, 24, 1
  0485990  fsel 2, 9, 4, 2
  0485994  fsel 3, 10, 6, 3
  0485998  fsel 1, 5, 7, 1
  048599c  stfs 2, 208(1)
  04859a0  stfs 3, 212(1)
  04859a4  stfs 1, 216(1)
  04859a8  bl 0x502a64
  04859ac  nop
  04859b0  lfs 1, 228(1)
  04859b4  lfs 2, 224(1)
  04859b8  fmuls 3, 1, 1
  04859bc  lfs 4, 232(1)
  04859c0  lfs 5, 240(1)
  04859c4  lfs 6, 244(1)
  04859c8  lfs 7, 248(1)
  04859cc  lfs 8, 208(1)
  04859d0  lfs 9, 212(1)
  04859d4  fadds 8, 8, 5
  04859d8  lfs 10, 216(1)
  04859dc  fadds 9, 9, 6
  04859e0  fmadds 3, 2, 2, 3
  04859e4  stfs 5, 192(1)
  04859e8  fadds 10, 10, 7
  04859ec  stfs 6, 196(1)
  04859f0  lfs 5, 252(1)
  04859f4  stfs 7, 200(1)
  04859f8  stfs 5, 204(1)
  04859fc  fmadds 3, 4, 4, 3
  0485a00  stfs 8, 208(1)
  0485a04  stfs 9, 212(1)
  0485a08  stfs 10, 216(1)
  0485a0c  lfs 5, 128(25)
  0485a10  lfs 6, -3052(28)
  0485a14  fmuls 5, 6, 5
  0485a18  fsqrts 3, 3
  0485a1c  lfs 7, -3056(27)
  0485a20  addic 4, 1, 192
  0485a24  addic 6, 1, 224
  0485a28  ori 5, 24, 0
  0485a2c  lwz 3, 16(30)
  0485a30  fdivs 5, 5, 3
  0485a34  fsub 6, 24, 3
  0485a38  fsub 8, 24, 3
  0485a3c  fsub 9, 24, 3
  0485a40  fsub 10, 3, 24
  0485a44  fsub 11, 3, 24
  0485a48  fsub 3, 3, 24
  0485a4c  fmuls 2, 2, 5
  0485a50  fmuls 1, 1, 5
  0485a54  fmuls 4, 4, 5
  0485a58  fsel 5, 6, 24, 2
  0485a5c  fsel 6, 8, 24, 1
  0485a60  fsel 8, 9, 24, 4
  0485a64  fsel 2, 10, 5, 2
  0485a68  fsel 1, 11, 6, 1
  0485a6c  fsel 3, 3, 8, 4
  0485a70  stfs 2, 224(1)
  0485a74  stfs 1, 228(1)
  0485a78  stfs 3, 232(1)
  0485a7c  lfs 1, 132(25)
  0485a80  fmuls 1, 7, 1
  0485a84  fctiwz 1, 1
  0485a88  stfd 1, 528(1)
  0485a8c  lwz 7, 532(1)
  0485a90  extsw 7, 7
  0485a94  bl 0x12efa0
  0485a98  nop
  0485a9c  ori 3, 26, 0
  0485aa0  lwz 6, 16(30)
  0485aa4  addic 4, 1, 160
  0485aa8  li 5, 0
  0485aac  li 7, 0
  0485ab0  bl 0x57820
  0485ab4  nop
  0485ab8  cmpwi 3, 0
  0485abc  bt 2, 0x485ef0
  0485ac0  lfs 1, 148(1)
  0485ac4  lfs 2, 144(1)
  0485ac8  fmuls 3, 1, 1
  0485acc  lfs 4, 152(1)
  0485ad0  lis 25, 161
  0485ad4  lis 3, 72
  0485ad8  addic 25, 25, 2368
  0485adc  addi 3, 3, 18808
  0485ae0  fmadds 3, 2, 2, 3
  0485ae4  lfs 5, 32(25)
  0485ae8  lfs 6, 36(25)
  0485aec  stfs 5, 128(1)
  0485af0  lfs 5, 40(25)
  0485af4  stfs 6, 132(1)
  0485af8  lfs 6, 44(25)
  0485afc  stfs 5, 136(1)
  0485b00  stfs 6, 140(1)
  0485b04  fmadds 3, 4, 4, 3
  0485b08  lfs 5, 136(3)
  0485b0c  lfs 6, -3052(28)
  0485b10  fmuls 5, 6, 5
  0485b14  fsqrts 3, 3
  0485b18  addic 24, 25, 64
  0485b1c  fdivs 5, 5, 3
  0485b20  fsub 6, 24, 3
  0485b24  fsub 7, 24, 3
  0485b28  fsub 8, 24, 3
  0485b2c  fsub 9, 3, 24
  0485b30  fsub 10, 3, 24
  0485b34  fsub 3, 3, 24
  0485b38  fmuls 2, 2, 5
  0485b3c  fmuls 1, 1, 5
  0485b40  fmuls 4, 4, 5
  0485b44  fsel 5, 6, 24, 2
  0485b48  fsel 6, 7, 24, 1
  0485b4c  fsel 7, 8, 24, 4
  0485b50  fsel 2, 9, 5, 2
  0485b54  fsel 1, 10, 6, 1
  0485b58  fsel 3, 3, 7, 4
  0485b5c  stfs 2, 144(1)
  0485b60  stfs 1, 148(1)
  0485b64  stfs 3, 152(1)
  0485b68  lfs 28, 140(3)
  0485b6c  lfs 27, 144(3)
  0485b70  lfs 26, 148(3)
  0485b74  lfs 25, 152(3)
  0485b78  fmr 1, 31
  0485b7c  fmr 2, 23
  0485b80  bl 0xfcbe8
  0485b84  nop
  0485b88  fmr 22, 1
  0485b8c  fmr 1, 31
  0485b90  fmr 2, 23
  0485b94  bl 0xfcbe8
  0485b98  nop
  0485b9c  fmr 21, 1
  0485ba0  fmr 1, 31
  0485ba4  fmr 2, 23
  0485ba8  bl 0xfcbe8
  0485bac  nop
  0485bb0  addic 23, 1, 256
  0485bb4  fmr 20, 1
  0485bb8  addic 4, 1, 144
  0485bbc  ori 3, 23, 0
  0485bc0  ori 5, 24, 0
  0485bc4  bl 0x500608
  0485bc8  nop
  0485bcc  lfs 3, 260(1)
  0485bd0  lfs 4, 256(1)
  0485bd4  fmuls 2, 21, 21
  0485bd8  fmuls 1, 3, 3
  0485bdc  lfs 5, 264(1)
  0485be0  lfs 6, -3052(28)
  0485be4  fmadds 2, 22, 22, 2
  0485be8  fmadds 1, 4, 4, 1
  0485bec  fmadds 2, 20, 20, 2
  0485bf0  fmadds 1, 5, 5, 1
  0485bf4  fsqrts 7, 2
  0485bf8  fsqrts 1, 1
  0485bfc  fmuls 2, 6, 29
  0485c00  fsub 9, 24, 7
  0485c04  fsub 10, 24, 7
  0485c08  fsub 11, 7, 24
  0485c0c  fsub 12, 7, 24
  0485c10  fmuls 8, 1, 30
  0485c14  fmuls 1, 6, 28
  0485c18  fdivs 6, 8, 7
  0485c1c  fsub 8, 24, 7
  0485c20  fsub 7, 7, 24
  0485c24  fmuls 13, 20, 6
  0485c28  fmuls 0, 21, 6
  0485c2c  fmuls 6, 22, 6
  0485c30  fsel 8, 8, 24, 13
  0485c34  fsel 9, 9, 24, 0
  0485c38  fsel 10, 10, 24, 6
  0485c3c  fsel 8, 11, 8, 13
  0485c40  fsel 9, 12, 9, 0
  0485c44  fsel 6, 7, 10, 6
  0485c48  fadds 5, 5, 8
  0485c4c  fadds 3, 3, 9
  0485c50  fadds 4, 4, 6
  0485c54  stfs 5, 264(1)
  0485c58  stfs 3, 260(1)
  0485c5c  stfs 4, 256(1)
  0485c60  bl 0xfcbe8
  0485c64  nop
  0485c68  lfs 2, 260(1)
  0485c6c  lfs 3, 256(1)
  0485c70  fmuls 4, 2, 2
  0485c74  lfs 5, 264(1)
  0485c78  lfs 6, -3056(27)
  0485c7c  fmuls 7, 6, 27
  0485c80  fmuls 6, 6, 26
  0485c84  fmadds 4, 3, 3, 4
  0485c88  fctiwz 7, 7
  0485c8c  fctiwz 6, 6
  0485c90  fmadds 4, 5, 5, 4
  0485c94  stfd 7, 528(1)
  0485c98  fsqrts 4, 4
  0485c9c  lwz 3, 532(1)
  0485ca0  stfd 6, 528(1)
  0485ca4  lwz 4, 532(1)
  0485ca8  extsw 3, 3
  0485cac  extsw 4, 4
  0485cb0  fdivs 1, 1, 4
  0485cb4  fsub 6, 24, 4
  0485cb8  fsub 7, 24, 4
  0485cbc  fsub 8, 24, 4
  0485cc0  fsub 9, 4, 24
  0485cc4  fsub 10, 4, 24
  0485cc8  fsub 4, 4, 24
  0485ccc  fmuls 3, 3, 1
  0485cd0  fmuls 2, 2, 1
  0485cd4  fmuls 1, 5, 1
  0485cd8  fsel 5, 6, 24, 3
  0485cdc  fsel 6, 7, 24, 2
  0485ce0  fsel 7, 8, 24, 1
  0485ce4  fsel 3, 9, 5, 3
  0485ce8  fsel 2, 10, 6, 2
  0485cec  fsel 1, 4, 7, 1
  0485cf0  stfs 3, 256(1)
  0485cf4  stfs 2, 260(1)
  0485cf8  stfs 1, 264(1)
  0485cfc  bl 0xfe484
  0485d00  nop
  0485d04  lis 5, 32559
  0485d08  ori 6, 3, 0
  0485d0c  fmr 1, 25
  0485d10  ori 3, 26, 0
  0485d14  ori 4, 23, 0
  0485d18  ori 5, 5, 20335
  0485d1c  bl 0x128248
  0485d20  nop
  0485d24  addic 29, 29, 1
  0485d28  cmpwi 29, 10
  0485d2c  bt 0, 0x485b78
  0485d30  lfs 1, 148(1)
  0485d34  lfs 2, 144(1)
  0485d38  fmuls 3, 1, 1
  0485d3c  lfs 4, 152(1)
  0485d40  lfs 5, 128(1)
  0485d44  lfs 6, 132(1)
  0485d48  lfs 7, 136(1)
  0485d4c  lfs 8, 140(1)
  0485d50  stfs 8, 172(1)
  0485d54  fmadds 3, 2, 2, 3
  0485d58  lwz 6, 16(30)
  0485d5c  ori 3, 26, 0
  0485d60  addic 7, 1, 272
  0485d64  addic 4, 1, 160
  0485d68  fmadds 3, 4, 4, 3
  0485d6c  li 5, 16
  0485d70  fsqrts 3, 3
  0485d74  fdivs 8, 31, 3
  0485d78  fsub 9, 24, 3
  0485d7c  fsub 10, 24, 3
  0485d80  fsub 11, 24, 3
  0485d84  fsub 12, 3, 24
  0485d88  fsub 13, 3, 24
  0485d8c  fsub 3, 3, 24
  0485d90  fmuls 2, 2, 8
  0485d94  fmuls 1, 1, 8
  0485d98  fmuls 4, 4, 8
  0485d9c  fsel 8, 9, 24, 2
  0485da0  fsel 9, 10, 24, 1
  0485da4  fsel 10, 11, 24, 4
  0485da8  fsel 2, 12, 8, 2
  0485dac  fsel 1, 13, 9, 1
  0485db0  fsel 3, 3, 10, 4
  0485db4  fadds 4, 5, 2
  0485db8  fadds 5, 6, 1
  0485dbc  fadds 6, 7, 3
  0485dc0  stfs 2, 144(1)
  0485dc4  stfs 1, 148(1)
  0485dc8  stfs 3, 152(1)
  0485dcc  stfs 4, 160(1)
  0485dd0  stfs 5, 164(1)
  0485dd4  stfs 6, 168(1)
  0485dd8  bl 0x57820
  0485ddc  nop
  0485de0  cmpwi 3, 0
  0485de4  bt 2, 0x485e1c
  0485de8  lwz 3, 24(25)
  0485dec  cmpwi 3, 0
  0485df0  bt 2, 0x485e1c
  0485df4  lis 4, 151
  0485df8  addic 4, 4, -25376
  0485dfc  lwz 4, 8320(4)
  0485e00  cmpw 3, 4
  0485e04  bt 2, 0x485e14
  0485e08  lhz 3, 166(3)
  0485e0c  cmpwi 3, 479
  0485e10  bf 2, 0x485e1c
  0485e14  li 3, 2
  0485e18  stb 3, 32(31)
  0485e1c  lfs 1, 136(1)
  0485e20  lfs 2, 128(1)
  0485e24  ori 3, 26, 0
  0485e28  fadds 1, 1, 19
  0485e2c  lfs 3, 132(1)
  0485e30  stfs 2, 160(1)
  0485e34  addic 7, 1, 272
  0485e38  lfs 2, 140(1)
  0485e3c  addic 4, 1, 160
  0485e40  stfs 3, 164(1)
  0485e44  li 5, 16
  0485e48  stfs 2, 172(1)
  0485e4c  lwz 6, 16(30)
  0485e50  stfs 1, 168(1)
  0485e54  bl 0x57820
  0485e58  nop
  0485e5c  cmpwi 3, 0
  0485e60  bt 2, 0x485e98
  0485e64  lwz 3, 24(25)
  0485e68  cmpwi 3, 0
  0485e6c  bt 2, 0x485e98
  0485e70  lis 4, 151
  0485e74  addic 4, 4, -25376
  0485e78  lwz 4, 8320(4)
  0485e7c  cmpw 3, 4
  0485e80  bt 2, 0x485e90
  0485e84  lhz 3, 166(3)
  0485e88  cmpwi 3, 479
  0485e8c  bf 2, 0x485e98
  0485e90  li 3, 2
  0485e94  stb 3, 32(31)
  0485e98  addic 3, 31, 16
  0485e9c  fmr 1, 30
  0485ea0  addic 7, 1, 272
  0485ea4  li 5, 16
  0485ea8  ori 6, 31, 0
  0485eac  bl 0x5e598
  0485eb0  nop
  0485eb4  cmpwi 3, 0
  0485eb8  bt 2, 0x485ef0
  0485ebc  lwz 25, 24(25)
  0485ec0  cmpwi 25, 0
  0485ec4  bt 2, 0x485ef0
  0485ec8  lis 3, 151
  0485ecc  addic 3, 3, -25376
  0485ed0  lwz 3, 8320(3)
  0485ed4  cmpw 25, 3
  0485ed8  bt 2, 0x485ee8
  0485edc  lhz 3, 166(25)
  0485ee0  cmpwi 3, 479
  0485ee4  bf 2, 0x485ef0
  0485ee8  li 3, 2
  0485eec  stb 3, 32(31)
  0485ef0  addic 3, 30, 20
  0485ef4  bl 0x4fff60
  0485ef8  nop
  0485efc  cmpwi 3, 0
  0485f00  bf 2, 0x485f24
  0485f04  lwz 30, 16(30)
  0485f08  cmpwi 30, 0
  0485f0c  bt 2, 0x485f24
  0485f10  lbz 3, 32(30)
  0485f14  cmpwi 3, 254
  0485f18  cmpwi 1, 3, 253
  0485f1c  bt 2, 0x485f24
  0485f20  bf 6, 0x485f98
  0485f24  li 3, 2
  0485f28  stb 3, 32(31)
  0485f2c  b 0x485f98
  0485f30  bt 6, 0x485f8c
  0485f34  lwz 3, 0(27)
  0485f38  cmpwi 3, -1
  0485f3c  bt 2, 0x485f84
  0485f40  sldi 4, 3, 7
  0485f44  sldi 6, 3, 4
  0485f48  lis 5, 150
  0485f4c  subc 4, 4, 6
  0485f50  addic 5, 5, 14176
  0485f54  lwz 6, 16(30)
  0485f58  extsw 4, 4
  0485f5c  addc 4, 5, 4
  0485f60  lwz 5, 136(4)
  0485f64  cmpw 5, 6
  0485f68  bf 2, 0x485f84
  0485f6c  lbz 4, 116(4)
  0485f70  cmpwi 4, 0
  0485f74  bt 2, 0x485f84
  0485f78  extsw 3, 3
  0485f7c  bl 0x15cdb0
  0485f80  nop
  0485f84  li 3, -1
  0485f88  stw 3, 0(27)
  0485f8c  ori 3, 31, 0
  0485f90  bl 0xefb38
  0485f94  nop
  0485f98  ld 0, 752(1)
  0485f9c  mtlr 0
  0485fa0  lfd 17, 616(1)
  0485fa4  lfd 18, 624(1)
  0485fa8  lfd 19, 632(1)
  0485fac  lfd 20, 640(1)
  0485fb0  lfd 21, 648(1)
  0485fb4  lfd 22, 656(1)
  0485fb8  lfd 23, 664(1)
  0485fbc  lfd 24, 672(1)
  0485fc0  lfd 25, 680(1)
  0485fc4  lfd 26, 688(1)
  0485fc8  lfd 27, 696(1)
  0485fcc  lfd 28, 704(1)
  0485fd0  lfd 29, 712(1)
  0485fd4  lfd 30, 720(1)
  0485fd8  lfd 31, 728(1)
  0485fdc  ld 23, 544(1)
  0485fe0  ld 24, 552(1)
  0485fe4  ld 25, 560(1)
  0485fe8  ld 26, 568(1)
  0485fec  ld 27, 576(1)
  0485ff0  ld 28, 584(1)
  0485ff4  ld 29, 592(1)
  0485ff8  ld 30, 600(1)
  0485ffc  ld 31, 608(1)
  0486000  addi 1, 1, 736
  0486004  blr
