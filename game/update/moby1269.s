# game/update/moby1269.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1269_00235a08:   # 0x235a08, 0x14 bytes
  0235a08  lis 3, 121
  0235a0c  lis 4, 1
  0235a10  addic 3, 3, -9916
  0235a14  stw 4, 72(3)
  0235a18  blr

UpdateMoby_1269:   # 0x235aa0, 0xbe4 bytes
  0235aa0  stdu 1, -544(1)
  0235aa4  mflr 0
  0235aa8  std 0, 560(1)
  0235aac  stfd 22, 464(1)
  0235ab0  stfd 23, 472(1)
  0235ab4  stfd 24, 480(1)
  0235ab8  stfd 25, 488(1)
  0235abc  stfd 26, 496(1)
  0235ac0  stfd 27, 504(1)
  0235ac4  stfd 28, 512(1)
  0235ac8  stfd 29, 520(1)
  0235acc  stfd 30, 528(1)
  0235ad0  stfd 31, 536(1)
  0235ad4  std 31, 456(1)
  0235ad8  lis 4, 35
  0235adc  std 28, 432(1)
  0235ae0  ori 31, 3, 0
  0235ae4  addi 28, 4, 23072
  0235ae8  std 30, 448(1)
  0235aec  addic 5, 1, 272
  0235af0  lwz 30, 120(31)
  0235af4  std 29, 440(1)
  0235af8  std 27, 424(1)
  0235afc  lfs 1, 0(28)
  0235b00  bl 0x1118d8
  0235b04  nop
  0235b08  ori 3, 31, 0
  0235b0c  addic 27, 30, 32
  0235b10  lis 4, 35
  0235b14  li 5, 0
  0235b18  bl 0x10675c
  0235b1c  nop
  0235b20  ori 29, 3, 0
  0235b24  addic 7, 1, 352
  0235b28  li 9, 0
  0235b2c  ori 3, 31, 0
  0235b30  li 10, 4
  0235b34  ori 4, 29, 0
  0235b38  ori 5, 27, 0
  0235b3c  li 6, 0
  0235b40  li 8, 0
  0235b44  bl 0x106840
  0235b48  nop
  0235b4c  lfs 2, 20(31)
  0235b50  lfs 3, 276(1)
  0235b54  lfs 1, 16(31)
  0235b58  fsubs 2, 2, 3
  0235b5c  lfs 3, 272(1)
  0235b60  fsubs 3, 1, 3
  0235b64  fmuls 2, 2, 2
  0235b68  fmadds 2, 3, 3, 2
  0235b6c  lfs 3, 4(28)
  0235b70  lbz 3, 32(31)
  0235b74  lhz 4, 52(31)
  0235b78  fsqrts 2, 2
  0235b7c  fcmpu 0, 2, 3
  0235b80  bt 0, 0x235ba8
  0235b84  lwz 5, 352(1)
  0235b88  cmpwi 5, 1
  0235b8c  bf 1, 0x235c34
  0235b90  cmpwi 29, 0
  0235b94  bt 2, 0x235c34
  0235b98  lwz 5, 32(29)
  0235b9c  lhz 5, 166(5)
  0235ba0  cmpwi 5, 1269
  0235ba4  bt 2, 0x235c34
  0235ba8  lis 3, 35
  0235bac  li 6, 2
  0235bb0  addi 3, 3, 23072
  0235bb4  li 7, 0
  0235bb8  li 11, -1
  0235bbc  lis 4, 161
  0235bc0  li 5, 0
  0235bc4  lfs 1, 8(3)
  0235bc8  addic 4, 4, 23856
  0235bcc  lfs 3, 12(3)
  0235bd0  li 8, 3
  0235bd4  lfs 4, 16(3)
  0235bd8  li 9, 3
  0235bdc  lfs 5, 20(3)
  0235be0  li 10, 5
  0235be4  lfs 6, 24(3)
  0235be8  fmr 2, 1
  0235bec  lfs 7, 28(3)
  0235bf0  std 6, 144(1)
  0235bf4  std 7, 160(1)
  0235bf8  ori 3, 31, 0
  0235bfc  std 7, 168(1)
  0235c00  std 11, 176(1)
  0235c04  std 7, 184(1)
  0235c08  bl 0x10e030
  0235c0c  nop
  0235c10  ori 3, 31, 0
  0235c14  li 4, 0
  0235c18  li 5, -1
  0235c1c  bl 0xfd8d0
  0235c20  nop
  0235c24  ori 3, 31, 0
  0235c28  bl 0xefb38
  0235c2c  nop
  0235c30  b 0x236638
  0235c34  cmpwi 3, 0
  0235c38  bt 1, 0x235c48
  0235c3c  cmpwi 3, -1
  0235c40  bf 1, 0x236620
  0235c44  b 0x235c5c
  0235c48  cmpwi 3, 1
  0235c4c  bf 1, 0x235cc4
  0235c50  cmpwi 3, 2
  0235c54  bf 1, 0x2365a4
  0235c58  b 0x236620
  0235c5c  ori 3, 4, 4096
  0235c60  stfs 1, 96(30)
  0235c64  lis 4, 16178
  0235c68  lfs 1, 20(31)
  0235c6c  li 5, 1
  0235c70  sth 3, 52(31)
  0235c74  stfs 1, 100(30)
  0235c78  lfs 1, 24(31)
  0235c7c  ori 3, 4, 47298
  0235c80  stfs 1, 104(30)
  0235c84  lfs 1, 28(31)
  0235c88  lwz 4, 184(31)
  0235c8c  stfs 1, 108(30)
  0235c90  stb 5, 32(31)
  0235c94  cmpwi 4, 0
  0235c98  stw 3, 128(30)
  0235c9c  bt 2, 0x235cb8
  0235ca0  lbz 3, 188(4)
  0235ca4  cmpwi 3, 0
  0235ca8  bt 2, 0x235cb8
  0235cac  lis 3, -16590
  0235cb0  ori 3, 3, 47298
  0235cb4  stw 3, 128(30)
  0235cb8  li 3, 0
  0235cbc  stw 3, 132(30)
  0235cc0  b 0x236620
  0235cc4  li 3, 132
  0235cc8  vspltisw 2, 1
  0235ccc  lis 5, 35
  0235cd0  addi 4, 3, 16
  0235cd4  li 7, 32
  0235cd8  <unknown>
  0235cdc  <unknown>
  0235ce0  addi 4, 5, 23072
  0235ce4  lwz 6, 132(30)
  0235ce8  vor 3, 3, 4
  0235cec  lis 5, 114
  0235cf0  vspltisw 4, -1
  0235cf4  vadduwm 2, 3, 2
  0235cf8  lfs 1, -3056(5)
  0235cfc  vslw 4, 4, 4
  0235d00  vspltw 3, 2, 0
  0235d04  stvewx 3, 3, 30
  0235d08  lfs 30, 32(4)
  0235d0c  addic 3, 6, 1
  0235d10  <unknown>
  0235d14  fmuls 2, 1, 30
  0235d18  li 4, -3056
  0235d1c  vspltw 3, 3, 0
  0235d20  <unknown>
  0235d24  vmaddfp 3, 5, 3, 4
  0235d28  fctiwz 2, 2
  0235d2c  stfd 2, 400(1)
  0235d30  lwz 4, 404(1)
  0235d34  cmpw 3, 4
  0235d38  bf 0, 0x235e8c
  0235d3c  vctsxs 3, 3, 0
  0235d40  lis 3, 35
  0235d44  vspltisw 5, -1
  0235d48  li 4, 40
  0235d4c  vcfsx 2, 2, 0
  0235d50  addi 3, 3, 23072
  0235d54  vspltisw 8, -1
  0235d58  vspltisw 7, -1
  0235d5c  vslw 5, 5, 5
  0235d60  vslw 8, 8, 8
  0235d64  <unknown>
  0235d68  li 4, 36
  0235d6c  vspltw 4, 4, 0
  0235d70  vcfsx 3, 3, 0
  0235d74  vslw 7, 7, 7
  0235d78  <unknown>
  0235d7c  vspltw 9, 9, 0
  0235d80  li 4, 44
  0235d84  vmaddfp 2, 2, 9, 8
  0235d88  vspltisw 8, -1
  0235d8c  vrefp 6, 3
  0235d90  vslw 8, 8, 8
  0235d94  li 5, 56
  0235d98  li 6, 60
  0235d9c  vnmsubfp 10, 6, 3, 4
  0235da0  vmaddfp 5, 6, 10, 5
  0235da4  vspltisw 6, -1
  0235da8  <unknown>
  0235dac  li 4, 48
  0235db0  vspltw 10, 10, 0
  0235db4  vslw 6, 6, 6
  0235db8  vnmsubfp 9, 5, 3, 4
  0235dbc  vmaddfp 5, 5, 9, 7
  0235dc0  <unknown>
  0235dc4  vspltw 7, 7, 0
  0235dc8  li 4, 52
  0235dcc  vnmsubfp 3, 5, 3, 4
  0235dd0  vspltisw 4, -1
  0235dd4  vslw 4, 4, 4
  0235dd8  vmaddfp 3, 5, 3, 6
  0235ddc  vspltisw 5, -1
  0235de0  vmaddfp 2, 3, 2, 8
  0235de4  vslw 3, 5, 5
  0235de8  vspltisw 8, -1
  0235dec  <unknown>
  0235df0  li 4, 24
  0235df4  vspltw 5, 5, 0
  0235df8  vsubfp 6, 10, 2
  0235dfc  vsubfp 7, 7, 2
  0235e00  vspltisw 10, -1
  0235e04  vslw 10, 10, 10
  0235e08  vcmpgtfp 9, 6, 2
  0235e0c  vsel 2, 6, 2, 9
  0235e10  vcmpgtfp 6, 2, 7
  0235e14  vsel 2, 7, 2, 6
  0235e18  vslw 6, 8, 8
  0235e1c  vspltisw 7, -1
  0235e20  <unknown>
  0235e24  vmaddfp 4, 2, 2, 4
  0235e28  <unknown>
  0235e2c  vslw 7, 7, 7
  0235e30  vspltw 9, 9, 0
  0235e34  li 5, 64
  0235e38  <unknown>
  0235e3c  li 6, 68
  0235e40  vspltw 11, 11, 0
  0235e44  vmaddfp 3, 4, 2, 3
  0235e48  vmaddfp 6, 4, 3, 6
  0235e4c  vmaddfp 2, 3, 5, 2
  0235e50  <unknown>
  0235e54  vspltw 3, 3, 0
  0235e58  vmaddfp 5, 4, 6, 7
  0235e5c  vmaddfp 2, 6, 9, 2
  0235e60  <unknown>
  0235e64  lis 3, 114
  0235e68  vspltw 6, 6, 0
  0235e6c  vmaddfp 4, 4, 5, 10
  0235e70  vmaddfp 2, 5, 11, 2
  0235e74  vmaddfp 2, 4, 3, 2
  0235e78  vmaddfp 2, 2, 6, 8
  0235e7c  vspltw 2, 2, 0
  0235e80  stvewx 2, 4, 31
  0235e84  lfs 1, -3056(3)
  0235e88  lwz 3, 132(30)
  0235e8c  lis 4, 35
  0235e90  addi 4, 4, 23072
  0235e94  lfs 2, 72(4)
  0235e98  fmuls 2, 1, 2
  0235e9c  fctiwz 2, 2
  0235ea0  stfd 2, 400(1)
  0235ea4  lwz 4, 404(1)
  0235ea8  cmpw 3, 4
  0235eac  bf 1, 0x235ed0
  0235eb0  lis 4, 35
  0235eb4  lfs 2, 112(30)
  0235eb8  lis 5, 114
  0235ebc  addi 4, 4, 23072
  0235ec0  lfs 3, 76(4)
  0235ec4  lfs 4, -3048(5)
  0235ec8  fmadds 2, 4, 3, 2
  0235ecc  stfs 2, 112(30)
  0235ed0  fmuls 1, 1, 30
  0235ed4  fctiwz 1, 1
  0235ed8  stfd 1, 400(1)
  0235edc  lwz 4, 404(1)
  0235ee0  cmpw 3, 4
  0235ee4  bf 1, 0x235f50
  0235ee8  lbz 3, 83(31)
  0235eec  cmpwi 1, 3, 1
  0235ef0  cmpwi 3, 0
  0235ef4  crorc 2, 6, 2
  0235ef8  bt 2, 0x235f18
  0235efc  ori 3, 31, 0
  0235f00  li 4, 1
  0235f04  li 5, 0
  0235f08  li 6, 2
  0235f0c  bl 0xfddc0
  0235f10  nop
  0235f14  lbz 3, 83(31)
  0235f18  cmpwi 3, 1
  0235f1c  bf 2, 0x235f50
  0235f20  cmpwi 1, 3, 2
  0235f24  lbz 3, 112(31)
  0235f28  rlwinm 3, 3, 0, 30, 30
  0235f2c  cmpwi 3, 0
  0235f30  cror 2, 2, 6
  0235f34  bt 2, 0x235f50
  0235f38  ori 3, 31, 0
  0235f3c  li 4, 2
  0235f40  li 5, 0
  0235f44  li 6, 2
  0235f48  bl 0xfddc0
  0235f4c  nop
  0235f50  lis 3, 35
  0235f54  lfs 3, 112(30)
  0235f58  lis 4, 114
  0235f5c  addi 3, 3, 23072
  0235f60  lfs 1, 80(3)
  0235f64  lfs 2, -3052(4)
  0235f68  fmuls 1, 2, 1
  0235f6c  fcmpu 0, 3, 1
  0235f70  cror 6, 0, 2
  0235f74  bt 6, 0x235f80
  0235f78  fmr 3, 1
  0235f7c  stfs 1, 112(30)
  0235f80  lfs 4, 16(31)
  0235f84  lfs 5, 20(31)
  0235f88  lfs 2, 272(1)
  0235f8c  lis 3, 35
  0235f90  lfs 1, 276(1)
  0235f94  fsubs 6, 2, 4
  0235f98  fsubs 7, 1, 5
  0235f9c  addi 3, 3, 23072
  0235fa0  lis 4, 115
  0235fa4  addic 4, 4, 22784
  0235fa8  fabs 8, 6
  0235fac  fabs 9, 7
  0235fb0  stfs 6, 356(1)
  0235fb4  stfs 7, 360(1)
  0235fb8  fsubs 6, 8, 9
  0235fbc  stfs 6, 364(1)
  0235fc0  lwz 5, 356(1)
  0235fc4  lfs 7, 8(3)
  0235fc8  lfs 6, 356(1)
  0235fcc  lwz 3, 360(1)
  0235fd0  lfs 10, 360(1)
  0235fd4  fabs 6, 6
  0235fd8  lwz 6, 364(1)
  0235fdc  rlwinm 3, 3, 3, 29, 29
  0235fe0  lfs 11, 364(1)
  0235fe4  fabs 10, 10
  0235fe8  rlwimi 3, 6, 2, 30, 30
  0235fec  fsub 12, 11, 7
  0235ff0  rlwimi 3, 5, 4, 28, 28
  0235ff4  fsub 11, 11, 7
  0235ff8  ori 5, 4, 0
  0235ffc  rlwimi 5, 3, 2, 26, 28
  0236000  slwi 3, 3, 2
  0236004  clrldi 5, 5, 32
  0236008  fsel 9, 12, 6, 9
  023600c  lfsx 31, 4, 3
  0236010  lfs 6, 4(5)
  0236014  fsel 8, 11, 10, 8
  0236018  fcmpu 0, 9, 7
  023601c  bt 1, 0x236028
  0236020  fmr 31, 7
  0236024  b 0x236148
  0236028  fsubs 10, 8, 9
  023602c  fadds 8, 8, 9
  0236030  addic 3, 1, 16
  0236034  li 6, 2
  0236038  addic 4, 3, 352
  023603c  addic 5, 3, 368
  0236040  mtctr 6
  0236044  fdivs 8, 10, 8
  0236048  fmuls 9, 8, 8
  023604c  stfs 8, 380(1)
  0236050  stfs 8, 372(1)
  0236054  stfs 8, 376(1)
  0236058  stfs 8, 368(1)
  023605c  lfs 11, 380(1)
  0236060  lfs 12, 372(1)
  0236064  lfs 13, 376(1)
  0236068  fmuls 10, 9, 9
  023606c  fmuls 12, 12, 9
  0236070  fmuls 11, 11, 10
  0236074  fmuls 8, 10, 10
  0236078  fmuls 10, 13, 10
  023607c  stfs 12, 372(1)
  0236080  fmuls 9, 11, 9
  0236084  stfs 10, 376(1)
  0236088  stfs 9, 380(1)
  023608c  lfs 9, 352(3)
  0236090  fmuls 9, 9, 8
  0236094  stfs 9, 368(3)
  0236098  lfs 9, 4(4)
  023609c  addic 3, 3, 8
  02360a0  addic 4, 4, 8
  02360a4  fmuls 9, 9, 8
  02360a8  stfs 9, 4(5)
  02360ac  addic 5, 5, 8
  02360b0  bdnz 0x23608c
  02360b4  li 5, 4
  02360b8  ori 3, 1, 0
  02360bc  mtctr 5
  02360c0  lis 4, 115
  02360c4  addic 5, 3, 368
  02360c8  addic 4, 4, 22752
  02360cc  ori 7, 5, 0
  02360d0  lfs 8, 368(3)
  02360d4  lfs 9, 0(4)
  02360d8  fmuls 8, 8, 9
  02360dc  lfs 9, 4(4)
  02360e0  addic 4, 4, 8
  02360e4  stfs 8, 368(3)
  02360e8  lfs 8, 4(5)
  02360ec  addic 3, 3, 8
  02360f0  fmuls 8, 8, 9
  02360f4  stfs 8, 4(5)
  02360f8  addic 5, 5, 8
  02360fc  bdnz 0x2360d0
  0236100  ori 3, 1, 0
  0236104  mtctr 6
  0236108  lfs 8, 368(3)
  023610c  fadds 7, 7, 8
  0236110  lfs 8, 4(7)
  0236114  addic 3, 3, 16
  0236118  lfs 9, 8(7)
  023611c  lfs 10, 12(7)
  0236120  addic 7, 7, 16
  0236124  fadds 7, 7, 8
  0236128  fadds 7, 7, 9
  023612c  fadds 7, 7, 10
  0236130  bdnz 0x236108
  0236134  lis 3, 35
  0236138  addi 3, 3, 23072
  023613c  lfs 8, 84(3)
  0236140  fadds 7, 7, 8
  0236144  fmadds 31, 7, 31, 6
  0236148  fsubs 1, 5, 1
  023614c  fsubs 2, 4, 2
  0236150  lis 3, 35
  0236154  addi 3, 3, 23072
  0236158  fmuls 1, 1, 1
  023615c  lfs 7, 28(3)
  0236160  fmadds 1, 2, 2, 1
  0236164  fmr 2, 3
  0236168  fsqrts 6, 1
  023616c  fmr 1, 31
  0236170  fcmpu 0, 6, 7
  0236174  cror 6, 1, 2
  0236178  bt 6, 0x23619c
  023617c  lfs 2, 128(30)
  0236180  fmr 1, 31
  0236184  bl 0x502578
  0236188  nop
  023618c  lfs 2, 112(30)
  0236190  lfs 4, 16(31)
  0236194  fmr 3, 2
  0236198  lfs 5, 20(31)
  023619c  lis 3, 35
  02361a0  addi 3, 3, 23072
  02361a4  lfs 29, 88(3)
  02361a8  lfs 28, 44(3)
  02361ac  fadds 6, 1, 29
  02361b0  fsubs 7, 28, 1
  02361b4  lfs 27, 48(3)
  02361b8  fsubs 8, 27, 1
  02361bc  lfs 26, 52(3)
  02361c0  lfs 25, 56(3)
  02361c4  lfs 24, 60(3)
  02361c8  lfs 23, 64(3)
  02361cc  fsubs 9, 28, 6
  02361d0  fsub 11, 1, 7
  02361d4  fsubs 10, 27, 6
  02361d8  lis 3, 114
  02361dc  fsub 12, 6, 9
  02361e0  fsel 1, 11, 7, 1
  02361e4  fsel 6, 12, 9, 6
  02361e8  fsub 7, 8, 1
  02361ec  fsub 9, 10, 6
  02361f0  fsel 1, 7, 8, 1
  02361f4  fsel 6, 9, 10, 6
  02361f8  fmuls 7, 1, 1
  02361fc  fmuls 8, 6, 6
  0236200  fmuls 9, 7, 1
  0236204  fmuls 10, 8, 6
  0236208  fmuls 11, 7, 9
  023620c  fmadds 1, 9, 26, 1
  0236210  fmuls 9, 8, 10
  0236214  fmadds 6, 10, 26, 6
  0236218  fmuls 10, 7, 11
  023621c  fmadds 1, 11, 25, 1
  0236220  fmuls 11, 8, 9
  0236224  fmadds 6, 9, 25, 6
  0236228  fmuls 7, 7, 10
  023622c  fmadds 1, 10, 24, 1
  0236230  fmuls 8, 8, 11
  0236234  fmadds 6, 11, 24, 6
  0236238  fmadds 1, 7, 23, 1
  023623c  fmadds 6, 8, 23, 6
  0236240  fmadds 1, 1, 3, 5
  0236244  fmadds 2, 6, 2, 4
  0236248  stfs 1, 20(31)
  023624c  lwz 4, 132(30)
  0236250  stfs 2, 16(31)
  0236254  lfs 1, -3056(3)
  0236258  ori 3, 4, 0
  023625c  fmuls 2, 1, 30
  0236260  fctiwz 2, 2
  0236264  stfd 2, 400(1)
  0236268  lwz 4, 404(1)
  023626c  cmpw 3, 4
  0236270  bf 1, 0x236310
  0236274  lis 3, 35
  0236278  lfs 1, 120(30)
  023627c  addi 29, 3, 23072
  0236280  lis 3, 114
  0236284  lfs 2, 92(29)
  0236288  lfs 3, -3052(3)
  023628c  fmuls 2, 3, 2
  0236290  bl 0x502578
  0236294  nop
  0236298  stfs 1, 120(30)
  023629c  lfs 1, 24(31)
  02362a0  lfs 2, 116(30)
  02362a4  fsubs 1, 1, 2
  02362a8  lis 4, 114
  02362ac  stfs 1, 24(31)
  02362b0  lfs 1, 120(30)
  02362b4  fsubs 2, 28, 1
  02362b8  fsubs 3, 27, 1
  02362bc  fsub 4, 1, 2
  02362c0  fsel 1, 4, 2, 1
  02362c4  fsub 2, 3, 1
  02362c8  fsel 1, 2, 3, 1
  02362cc  lfs 2, 96(29)
  02362d0  fmuls 3, 1, 1
  02362d4  fmuls 4, 3, 1
  02362d8  fmuls 5, 3, 4
  02362dc  fmadds 1, 4, 26, 1
  02362e0  fmuls 4, 3, 5
  02362e4  fmadds 1, 5, 25, 1
  02362e8  fmuls 3, 3, 4
  02362ec  fmadds 1, 4, 24, 1
  02362f0  fmadds 1, 3, 23, 1
  02362f4  fmuls 1, 1, 2
  02362f8  stfs 1, 116(30)
  02362fc  lfs 2, 24(31)
  0236300  fadds 1, 2, 1
  0236304  stfs 1, 24(31)
  0236308  lwz 3, 132(30)
  023630c  lfs 1, -3056(4)
  0236310  fmuls 1, 1, 30
  0236314  fctiwz 1, 1
  0236318  stfd 1, 400(1)
  023631c  lwz 4, 404(1)
  0236320  cmpw 3, 4
  0236324  bf 1, 0x2363d4
  0236328  lis 3, 35
  023632c  li 4, 0
  0236330  addi 5, 3, 23072
  0236334  addic 3, 31, 16
  0236338  lfs 22, 16(5)
  023633c  fmr 1, 22
  0236340  bl 0xffb70
  0236344  nop
  0236348  lis 3, 151
  023634c  lfs 4, 24(31)
  0236350  addic 3, 3, -25376
  0236354  lfs 3, 728(3)
  0236358  fsub 2, 1, 3
  023635c  lis 3, 114
  0236360  fsel 3, 2, 1, 3
  0236364  lfs 2, -3052(3)
  0236368  fsubs 1, 3, 4
  023636c  fcmpu 0, 1, 22
  0236370  cror 6, 1, 2
  0236374  bt 6, 0x2363d4
  0236378  lis 3, 35
  023637c  addi 3, 3, 23072
  0236380  lfs 4, 100(3)
  0236384  fcmpu 0, 1, 4
  0236388  cror 6, 0, 2
  023638c  bt 6, 0x2363d4
  0236390  lis 3, 35
  0236394  lis 6, 114
  0236398  addi 4, 3, 23072
  023639c  addic 5, 30, 124
  02363a0  addic 3, 31, 24
  02363a4  lfs 1, 108(4)
  02363a8  lfs 4, 104(4)
  02363ac  lfs 5, -3060(6)
  02363b0  lfs 6, 112(4)
  02363b4  fmuls 8, 5, 1
  02363b8  lfs 7, 20(4)
  02363bc  fadds 1, 3, 4
  02363c0  fmuls 3, 5, 6
  02363c4  fmuls 4, 2, 7
  02363c8  fmr 2, 8
  02363cc  bl 0x109b40
  02363d0  nop
  02363d4  lis 3, 114
  02363d8  lfs 1, -3056(3)
  02363dc  lwz 3, 132(30)
  02363e0  fmuls 1, 1, 30
  02363e4  fctiwz 1, 1
  02363e8  stfd 1, 400(1)
  02363ec  lwz 4, 404(1)
  02363f0  cmpw 3, 4
  02363f4  bf 1, 0x236620
  02363f8  fadds 1, 31, 29
  02363fc  fsubs 2, 28, 31
  0236400  fsubs 3, 27, 31
  0236404  lis 3, 35
  0236408  lis 4, 16281
  023640c  addi 30, 3, 23072
  0236410  lis 3, 17839
  0236414  ori 4, 4, 39322
  0236418  fsubs 4, 28, 1
  023641c  fsub 5, 31, 2
  0236420  fsubs 6, 27, 1
  0236424  ori 3, 3, 57190
  0236428  addic 29, 1, 224
  023642c  lis 5, 1
  0236430  addic 7, 1, 192
  0236434  ori 5, 5, 1
  0236438  fsub 7, 1, 4
  023643c  fsel 2, 5, 2, 31
  0236440  fsel 1, 7, 4, 1
  0236444  fsub 4, 3, 2
  0236448  fsub 5, 6, 1
  023644c  fsel 2, 4, 3, 2
  0236450  fsel 1, 5, 6, 1
  0236454  fmuls 3, 2, 2
  0236458  fmuls 4, 1, 1
  023645c  fmuls 5, 3, 2
  0236460  fmuls 6, 4, 1
  0236464  fmuls 7, 3, 5
  0236468  fmadds 2, 5, 26, 2
  023646c  lfs 5, 112(30)
  0236470  stw 3, 204(1)
  0236474  stw 4, 200(1)
  0236478  ori 3, 29, 0
  023647c  ori 4, 31, 0
  0236480  fmuls 8, 4, 6
  0236484  fmadds 1, 6, 26, 1
  0236488  fmuls 6, 3, 7
  023648c  fmadds 2, 7, 25, 2
  0236490  fmuls 7, 4, 8
  0236494  fmadds 1, 8, 25, 1
  0236498  fmuls 3, 3, 6
  023649c  fmadds 2, 6, 24, 2
  02364a0  fmuls 4, 4, 7
  02364a4  fmadds 1, 7, 24, 1
  02364a8  fmadds 2, 3, 23, 2
  02364ac  fmadds 1, 4, 23, 1
  02364b0  fmuls 2, 2, 5
  02364b4  fmuls 3, 1, 5
  02364b8  stfs 2, 196(1)
  02364bc  lfs 1, 12(30)
  02364c0  stfs 3, 192(1)
  02364c4  bl 0x10581c
  02364c8  nop
  02364cc  lfs 1, 16(31)
  02364d0  lfs 2, 20(31)
  02364d4  addic 3, 1, 208
  02364d8  stfs 1, 208(1)
  02364dc  li 5, 16
  02364e0  lfs 1, 28(31)
  02364e4  ori 6, 31, 0
  02364e8  stfs 2, 212(1)
  02364ec  ori 7, 29, 0
  02364f0  stfs 1, 220(1)
  02364f4  lfs 1, 116(30)
  02364f8  lfs 2, 24(31)
  02364fc  fadds 2, 2, 1
  0236500  stfs 2, 216(1)
  0236504  bl 0x5e598
  0236508  nop
  023650c  lfs 31, 16(31)
  0236510  lfs 1, 20(31)
  0236514  cmpwi 3, 0
  0236518  lfs 2, 24(31)
  023651c  lfs 3, 28(31)
  0236520  bt 2, 0x23655c
  0236524  lis 3, 161
  0236528  addic 3, 3, 2368
  023652c  lwz 3, 24(3)
  0236530  cmpwi 3, 0
  0236534  bt 2, 0x23655c
  0236538  lhz 4, 166(3)
  023653c  cmpwi 4, 1269
  0236540  bt 2, 0x23655c
  0236544  lwz 4, 184(31)
  0236548  cmpw 3, 4
  023654c  bt 2, 0x23655c
  0236550  li 3, 2
  0236554  stb 3, 32(31)
  0236558  b 0x236620
  023655c  lis 3, 35
  0236560  stfs 31, 208(1)
  0236564  li 5, 0
  0236568  addi 3, 3, 23072
  023656c  stfs 1, 212(1)
  0236570  stfs 3, 220(1)
  0236574  ori 6, 31, 0
  0236578  lfs 1, 120(3)
  023657c  addic 3, 1, 208
  0236580  fadds 2, 2, 1
  0236584  stfs 2, 216(1)
  0236588  bl 0x59e20
  023658c  nop
  0236590  cmpwi 3, 0
  0236594  bt 2, 0x236620
  0236598  li 3, 2
  023659c  stb 3, 32(31)
  02365a0  b 0x236620
  02365a4  lis 3, 35
  02365a8  li 6, 2
  02365ac  addi 3, 3, 23072
  02365b0  li 7, 0
  02365b4  li 10, 9
  02365b8  li 11, -1
  02365bc  lis 4, 161
  02365c0  lfs 1, 8(3)
  02365c4  li 5, 0
  02365c8  lfs 4, 12(3)
  02365cc  addic 4, 4, 23856
  02365d0  lfs 3, 40(3)
  02365d4  li 8, 5
  02365d8  lfs 5, 20(3)
  02365dc  li 9, 15
  02365e0  lfs 7, 28(3)
  02365e4  fmr 2, 1
  02365e8  std 6, 144(1)
  02365ec  ori 3, 31, 0
  02365f0  std 7, 160(1)
  02365f4  fmr 6, 4
  02365f8  std 10, 168(1)
  02365fc  std 11, 176(1)
  0236600  li 10, 25
  0236604  std 7, 184(1)
  0236608  bl 0x10e030
  023660c  nop
  0236610  ori 3, 31, 0
  0236614  bl 0xefb38
  0236618  nop
  023661c  b 0x236638
  0236620  lis 3, 35
  0236624  addi 4, 3, 23072
  0236628  ori 3, 31, 0
  023662c  lfs 1, 12(4)
  0236630  bl 0x106150
  0236634  nop
  0236638  ld 0, 560(1)
  023663c  mtlr 0
  0236640  lfd 22, 464(1)
  0236644  lfd 23, 472(1)
  0236648  lfd 24, 480(1)
  023664c  lfd 25, 488(1)
  0236650  lfd 26, 496(1)
  0236654  lfd 27, 504(1)
  0236658  lfd 28, 512(1)
  023665c  lfd 29, 520(1)
  0236660  lfd 30, 528(1)
  0236664  lfd 31, 536(1)
  0236668  ld 27, 424(1)
  023666c  ld 28, 432(1)
  0236670  ld 29, 440(1)
  0236674  ld 30, 448(1)
  0236678  ld 31, 456(1)
  023667c  addi 1, 1, 544
  0236680  blr
