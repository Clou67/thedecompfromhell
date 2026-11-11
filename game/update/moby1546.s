# game/update/moby1546.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1546:   # 0x297798, 0x9bc bytes
  0297798  stdu 1, -528(1)
  029779c  mflr 0
  02977a0  std 0, 544(1)
  02977a4  stfd 21, 440(1)
  02977a8  stfd 22, 448(1)
  02977ac  stfd 23, 456(1)
  02977b0  stfd 24, 464(1)
  02977b4  stfd 25, 472(1)
  02977b8  stfd 26, 480(1)
  02977bc  stfd 27, 488(1)
  02977c0  stfd 28, 496(1)
  02977c4  stfd 29, 504(1)
  02977c8  stfd 30, 512(1)
  02977cc  stfd 31, 520(1)
  02977d0  addi 0, 1, 352
  02977d4  stvx 30, 0, 0
  02977d8  addic 0, 0, 16
  02977dc  stvx 31, 0, 0
  02977e0  lbz 4, 32(3)
  02977e4  cmpwi 4, 0
  02977e8  cmpwi 1, 4, -1
  02977ec  std 31, 432(1)
  02977f0  std 30, 424(1)
  02977f4  std 29, 416(1)
  02977f8  std 28, 408(1)
  02977fc  std 27, 400(1)
  0297800  std 26, 392(1)
  0297804  std 25, 384(1)
  0297808  cmpwi 6, 4, 1
  029780c  bt 1, 0x297818
  0297810  bf 5, 0x2980ec
  0297814  b 0x297820
  0297818  bf 25, 0x297834
  029781c  b 0x2980ec
  0297820  li 4, 255
  0297824  li 5, 1
  0297828  stb 4, 48(3)
  029782c  stb 5, 32(3)
  0297830  b 0x2980ec
  0297834  lis 3, 161
  0297838  lwz 3, 1800(3)
  029783c  cmpwi 3, 2
  0297840  bf 2, 0x2980ec
  0297844  lis 27, 150
  0297848  addic 27, 27, -12976
  029784c  lwz 4, 48(27)
  0297850  cmpwi 7, 4, 1
  0297854  cmpwi 1, 4, 2
  0297858  cmpwi 6, 4, 3
  029785c  bt 30, 0x2978a4
  0297860  bf 6, 0x297894
  0297864  lis 3, 41
  0297868  lis 5, 114
  029786c  addi 3, 3, 30472
  0297870  lfs 1, 0(3)
  0297874  lfs 2, -3056(5)
  0297878  lwz 3, 52(27)
  029787c  fmuls 1, 2, 1
  0297880  fctiwz 1, 1
  0297884  stfd 1, 336(1)
  0297888  lwz 5, 340(1)
  029788c  cmpw 3, 5
  0297890  bf 1, 0x2978a4
  0297894  bt 26, 0x2978a4
  0297898  ori 3, 4, 0
  029789c  cmpwi 3, 4
  02978a0  bf 2, 0x2978d8
  02978a4  li 3, 3
  02978a8  bt 30, 0x2978c0
  02978ac  bt 26, 0x2978c0
  02978b0  cmpwi 4, 4
  02978b4  bt 2, 0x2978c0
  02978b8  bf 6, 0x2978c0
  02978bc  li 3, 2
  02978c0  ori 4, 27, 0
  02978c4  rlwimi 4, 3, 2, 28, 29
  02978c8  lwz 3, 376(4)
  02978cc  bl 0x119600
  02978d0  nop
  02978d4  lwz 3, 48(27)
  02978d8  cmpwi 3, 1
  02978dc  bf 2, 0x2979f0
  02978e0  lis 3, 41
  02978e4  lis 4, 114
  02978e8  addi 3, 3, 30472
  02978ec  lfs 2, 4(3)
  02978f0  lfs 1, -3056(4)
  02978f4  lwz 3, 52(27)
  02978f8  fmuls 2, 1, 2
  02978fc  fctiwz 2, 2
  0297900  stfd 2, 336(1)
  0297904  lwz 4, 340(1)
  0297908  cmpw 3, 4
  029790c  bt 0, 0x2979f0
  0297910  lis 4, 41
  0297914  addi 4, 4, 30472
  0297918  lfs 2, 8(4)
  029791c  fmuls 1, 1, 2
  0297920  fctiwz 1, 1
  0297924  stfd 1, 336(1)
  0297928  lwz 4, 340(1)
  029792c  cmpw 3, 4
  0297930  bt 1, 0x2979f0
  0297934  lwz 3, 376(27)
  0297938  cmpwi 3, 0
  029793c  bt 2, 0x2979f0
  0297940  addic 5, 1, 192
  0297944  li 4, 1
  0297948  bl 0xf1114
  029794c  nop
  0297950  lis 3, 41
  0297954  addi 31, 3, 30472
  0297958  lfs 30, 16(31)
  029795c  lfs 1, 12(31)
  0297960  fmr 2, 30
  0297964  bl 0xfcbe8
  0297968  nop
  029796c  li 3, 2
  0297970  fmr 31, 1
  0297974  bl 0xfc620
  0297978  nop
  029797c  cmpwi 3, 0
  0297980  lfs 1, 20(31)
  0297984  bt 2, 0x29798c
  0297988  fmr 1, 30
  029798c  lis 4, 161
  0297990  addic 3, 1, 192
  0297994  fmr 2, 1
  0297998  fmr 1, 31
  029799c  addic 7, 1, 200
  02979a0  addic 4, 4, 23856
  02979a4  bl 0x12e8c8
  02979a8  nop
  02979ac  cmpwi 3, 0
  02979b0  bt 2, 0x2979f0
  02979b4  lis 4, 41
  02979b8  li 5, 24
  02979bc  vspltisw 2, -1
  02979c0  addi 4, 4, 30472
  02979c4  li 6, -3056
  02979c8  lis 7, 114
  02979cc  vslw 2, 2, 2
  02979d0  <unknown>
  02979d4  li 4, 10
  02979d8  vspltw 3, 3, 0
  02979dc  <unknown>
  02979e0  vmaddfp 2, 4, 3, 2
  02979e4  vctsxs 2, 2, 0
  02979e8  vsplth 2, 2, 1
  02979ec  stvehx 2, 4, 3
  02979f0  lwz 4, 48(27)
  02979f4  cmpwi 4, 1
  02979f8  bf 2, 0x297bb8
  02979fc  lis 3, 41
  0297a00  lis 5, 114
  0297a04  addi 3, 3, 30472
  0297a08  lfs 1, 4(3)
  0297a0c  lfs 2, -3056(5)
  0297a10  lwz 3, 52(27)
  0297a14  fmuls 1, 2, 1
  0297a18  fctiwz 1, 1
  0297a1c  stfd 1, 336(1)
  0297a20  lwz 5, 340(1)
  0297a24  cmpw 3, 5
  0297a28  bf 2, 0x297bb8
  0297a2c  lwz 3, 376(27)
  0297a30  cmpwi 3, 0
  0297a34  bt 2, 0x297bb8
  0297a38  addic 31, 1, 208
  0297a3c  li 4, 1
  0297a40  ori 5, 31, 0
  0297a44  bl 0xf1114
  0297a48  nop
  0297a4c  lis 3, 41
  0297a50  addi 4, 3, 30472
  0297a54  ori 3, 31, 0
  0297a58  lfs 31, 28(4)
  0297a5c  fmr 1, 31
  0297a60  bl 0x456478
  0297a64  nop
  0297a68  cmpwi 3, 0
  0297a6c  bt 2, 0x297a78
  0297a70  li 4, 112
  0297a74  stb 4, 35(3)
  0297a78  lis 3, 41
  0297a7c  li 31, 0
  0297a80  addi 3, 3, 30472
  0297a84  lfs 30, 32(3)
  0297a88  lfs 29, 36(3)
  0297a8c  lfs 28, 40(3)
  0297a90  lfs 27, 44(3)
  0297a94  lfs 26, 48(3)
  0297a98  lfs 25, 52(3)
  0297a9c  lfs 24, 56(3)
  0297aa0  lfs 23, 60(3)
  0297aa4  lfs 22, 64(3)
  0297aa8  bl 0xfcc68
  0297aac  nop
  0297ab0  fmr 21, 1
  0297ab4  lis 30, 114
  0297ab8  fmr 1, 30
  0297abc  lfs 2, -3052(30)
  0297ac0  fmuls 2, 2, 31
  0297ac4  bl 0xfcbe8
  0297ac8  nop
  0297acc  fadds 2, 21, 29
  0297ad0  fsubs 3, 28, 21
  0297ad4  fsubs 4, 27, 21
  0297ad8  fsubs 5, 28, 2
  0297adc  fsub 6, 21, 3
  0297ae0  fsubs 7, 27, 2
  0297ae4  fsub 8, 2, 5
  0297ae8  fsel 3, 6, 3, 21
  0297aec  fsel 2, 8, 5, 2
  0297af0  fsub 5, 4, 3
  0297af4  fsub 6, 7, 2
  0297af8  fsel 3, 5, 4, 3
  0297afc  fsel 2, 6, 7, 2
  0297b00  fmuls 4, 3, 3
  0297b04  fmuls 5, 2, 2
  0297b08  fmuls 6, 4, 3
  0297b0c  fmuls 7, 5, 2
  0297b10  fmuls 8, 4, 6
  0297b14  fmadds 3, 6, 26, 3
  0297b18  fmuls 6, 5, 7
  0297b1c  fmadds 2, 7, 26, 2
  0297b20  fmuls 7, 4, 8
  0297b24  fmadds 3, 8, 25, 3
  0297b28  fmuls 8, 5, 6
  0297b2c  fmadds 2, 6, 25, 2
  0297b30  fmuls 4, 4, 7
  0297b34  fmadds 3, 7, 24, 3
  0297b38  fmuls 5, 5, 8
  0297b3c  fmadds 6, 8, 24, 2
  0297b40  fmadds 3, 4, 23, 3
  0297b44  lfs 4, -3052(30)
  0297b48  fmuls 2, 4, 22
  0297b4c  fmadds 5, 5, 23, 6
  0297b50  fmuls 3, 3, 1
  0297b54  fmuls 5, 5, 1
  0297b58  fmuls 1, 4, 31
  0297b5c  stfs 3, 228(1)
  0297b60  stfs 5, 224(1)
  0297b64  bl 0xfcbe8
  0297b68  nop
  0297b6c  li 3, 90
  0297b70  stfs 1, 232(1)
  0297b74  li 4, 120
  0297b78  bl 0xfe484
  0297b7c  nop
  0297b80  ori 30, 3, 0
  0297b84  li 3, 2
  0297b88  bl 0xfc620
  0297b8c  nop
  0297b90  ori 5, 3, 0
  0297b94  addic 3, 1, 208
  0297b98  addic 4, 1, 224
  0297b9c  ori 6, 30, 0
  0297ba0  bl 0x12ab08
  0297ba4  nop
  0297ba8  addic 31, 31, 1
  0297bac  cmpwi 31, 16
  0297bb0  bt 0, 0x297aa8
  0297bb4  lwz 4, 48(27)
  0297bb8  cmpwi 4, 4
  0297bbc  bf 2, 0x297dac
  0297bc0  lwz 31, 392(27)
  0297bc4  cmpwi 31, 0
  0297bc8  bt 2, 0x297dac
  0297bcc  lhz 3, 166(31)
  0297bd0  cmpwi 3, 531
  0297bd4  bf 2, 0x297dac
  0297bd8  lis 3, 112
  0297bdc  ori 4, 31, 0
  0297be0  addic 3, 3, 31960
  0297be4  bl 0x6d720
  0297be8  nop
  0297bec  lis 3, 41
  0297bf0  lis 4, 114
  0297bf4  addi 3, 3, 30472
  0297bf8  lfs 2, 68(3)
  0297bfc  lfs 1, -3056(4)
  0297c00  lwz 3, 52(27)
  0297c04  fmuls 2, 1, 2
  0297c08  fctiwz 2, 2
  0297c0c  stfd 2, 336(1)
  0297c10  lwz 4, 340(1)
  0297c14  cmpw 3, 4
  0297c18  bt 0, 0x297dac
  0297c1c  lis 4, 41
  0297c20  addi 4, 4, 30472
  0297c24  lfs 2, 72(4)
  0297c28  fmuls 1, 1, 2
  0297c2c  fctiwz 1, 1
  0297c30  stfd 1, 336(1)
  0297c34  lwz 4, 340(1)
  0297c38  cmpw 3, 4
  0297c3c  bt 1, 0x297dac
  0297c40  lis 3, 41
  0297c44  li 4, 96
  0297c48  addi 3, 3, 30472
  0297c4c  li 5, 64
  0297c50  lis 25, 161
  0297c54  li 30, 1
  0297c58  addic 26, 1, 240
  0297c5c  lfs 31, 76(3)
  0297c60  lfs 30, 80(3)
  0297c64  addic 25, 25, 23856
  0297c68  lfs 29, 84(3)
  0297c6c  lfs 28, 88(3)
  0297c70  lfs 27, 92(3)
  0297c74  lfs 26, 100(3)
  0297c78  <unknown>
  0297c7c  <unknown>
  0297c80  vspltw 31, 31, 0
  0297c84  vspltw 30, 30, 0
  0297c88  ori 3, 31, 0
  0297c8c  ori 4, 30, 0
  0297c90  ori 5, 26, 0
  0297c94  bl 0xf1114
  0297c98  nop
  0297c9c  li 29, 0
  0297ca0  li 3, 16
  0297ca4  bl 0xfc620
  0297ca8  nop
  0297cac  ori 28, 3, 0
  0297cb0  li 3, 2
  0297cb4  bl 0xfc620
  0297cb8  nop
  0297cbc  li 4, 0
  0297cc0  neg 7, 28
  0297cc4  fmr 1, 31
  0297cc8  subc 3, 4, 3
  0297ccc  fmr 2, 30
  0297cd0  subc 4, 28, 7
  0297cd4  fmr 3, 29
  0297cd8  cntlzw 3, 3
  0297cdc  fmr 4, 28
  0297ce0  lis 10, 32544
  0297ce4  sldi 3, 3, 58
  0297ce8  ori 8, 25, 0
  0297cec  sradi 5, 3, 63
  0297cf0  ori 3, 26, 0
  0297cf4  and 4, 5, 4
  0297cf8  ori 10, 10, 16512
  0297cfc  addc 7, 7, 4
  0297d00  bl 0x126f50
  0297d04  nop
  0297d08  ori 28, 3, 0
  0297d0c  cmpwi 28, 0
  0297d10  bt 2, 0x297d90
  0297d14  lis 3, 114
  0297d18  li 4, -3056
  0297d1c  vsldoi 3, 30, 30, 0
  0297d20  lfs 1, -3056(3)
  0297d24  lwz 5, 52(27)
  0297d28  fmuls 1, 1, 27
  0297d2c  <unknown>
  0297d30  fctiwz 1, 1
  0297d34  stfd 1, 336(1)
  0297d38  lwz 3, 340(1)
  0297d3c  cmpw 5, 3
  0297d40  bt 0, 0x297d48
  0297d44  vsldoi 3, 31, 31, 0
  0297d48  vspltisw 4, -1
  0297d4c  li 3, 10
  0297d50  fmr 1, 26
  0297d54  vslw 4, 4, 4
  0297d58  vmaddfp 2, 2, 3, 4
  0297d5c  vctsxs 2, 2, 0
  0297d60  vsplth 2, 2, 1
  0297d64  stvehx 2, 3, 28
  0297d68  bl 0x502758
  0297d6c  nop
  0297d70  addic 3, 3, 64
  0297d74  lhz 6, 10(28)
  0297d78  li 4, 2
  0297d7c  li 5, 127
  0297d80  stb 3, 9(28)
  0297d84  stw 4, 36(28)
  0297d88  stb 5, 42(28)
  0297d8c  stb 6, 43(28)
  0297d90  addic 29, 29, 1
  0297d94  cmpwi 29, 2
  0297d98  bt 0, 0x297ca0
  0297d9c  addic 30, 30, 1
  0297da0  extsw 30, 30
  0297da4  cmpwi 30, 7
  0297da8  bt 0, 0x297c88
  0297dac  lwz 3, 48(27)
  0297db0  cmpwi 3, 5
  0297db4  bf 2, 0x2980ec
  0297db8  lis 3, 41
  0297dbc  lis 4, 114
  0297dc0  addi 3, 3, 30472
  0297dc4  lfs 1, 104(3)
  0297dc8  lfs 2, -3056(4)
  0297dcc  lwz 3, 52(27)
  0297dd0  fmuls 1, 2, 1
  0297dd4  fctiwz 1, 1
  0297dd8  stfd 1, 336(1)
  0297ddc  lwz 4, 340(1)
  0297de0  cmpw 3, 4
  0297de4  bf 0, 0x2980ec
  0297de8  lwz 31, 384(27)
  0297dec  cmpwi 31, 0
  0297df0  bt 2, 0x2980ec
  0297df4  lis 3, 41
  0297df8  li 4, 5
  0297dfc  addi 3, 3, 30472
  0297e00  addic 5, 1, 256
  0297e04  lfs 31, 32(3)
  0297e08  ori 3, 31, 0
  0297e0c  fmr 28, 31
  0297e10  fmr 30, 28
  0297e14  fmr 29, 30
  0297e18  bl 0xf1114
  0297e1c  nop
  0297e20  lis 4, 114
  0297e24  lwz 27, 52(27)
  0297e28  lis 3, 251
  0297e2c  cmpwi 27, 2
  0297e30  addic 3, 3, -9360
  0297e34  lfs 1, -3056(4)
  0297e38  bf 0, 0x297e64
  0297e3c  lis 4, 251
  0297e40  lfs 2, 256(1)
  0297e44  lfs 3, 260(1)
  0297e48  stfs 2, -9360(4)
  0297e4c  lfs 2, 264(1)
  0297e50  stfs 3, 4(3)
  0297e54  lfs 3, 268(1)
  0297e58  stfs 2, 8(3)
  0297e5c  fmr 2, 3
  0297e60  b 0x297e9c
  0297e64  lis 4, 251
  0297e68  lfs 2, 256(1)
  0297e6c  lfs 31, -9360(4)
  0297e70  lfs 3, 260(1)
  0297e74  lfs 30, 4(3)
  0297e78  lfs 4, 264(1)
  0297e7c  fsubs 31, 2, 31
  0297e80  lfs 29, 8(3)
  0297e84  fsubs 30, 3, 30
  0297e88  stfs 2, -9360(4)
  0297e8c  lfs 2, 268(1)
  0297e90  stfs 3, 4(3)
  0297e94  fsubs 29, 4, 29
  0297e98  stfs 4, 8(3)
  0297e9c  lis 4, 41
  0297ea0  stfs 2, 12(3)
  0297ea4  addi 4, 4, 30472
  0297ea8  lfs 2, 108(4)
  0297eac  fmuls 1, 1, 2
  0297eb0  fctiwz 1, 1
  0297eb4  stfd 1, 336(1)
  0297eb8  lwz 3, 340(1)
  0297ebc  cmpw 27, 3
  0297ec0  bf 2, 0x297fbc
  0297ec4  lis 3, 41
  0297ec8  stfs 28, 316(1)
  0297ecc  li 27, -1
  0297ed0  addi 30, 3, 30472
  0297ed4  stfs 28, 312(1)
  0297ed8  stfs 28, 308(1)
  0297edc  li 28, 0
  0297ee0  stfs 28, 304(1)
  0297ee4  li 6, 60
  0297ee8  addic 29, 1, 304
  0297eec  fmr 1, 28
  0297ef0  li 8, 3
  0297ef4  fmr 2, 28
  0297ef8  lfs 27, 120(30)
  0297efc  addic 5, 1, 256
  0297f00  lfs 26, 80(30)
  0297f04  ori 3, 31, 0
  0297f08  lfs 25, 124(30)
  0297f0c  ori 4, 29, 0
  0297f10  lfs 3, 112(30)
  0297f14  fmr 5, 27
  0297f18  lfs 4, 116(30)
  0297f1c  li 9, 200
  0297f20  std 27, 144(1)
  0297f24  fmr 6, 26
  0297f28  std 28, 160(1)
  0297f2c  li 10, 200
  0297f30  std 6, 168(1)
  0297f34  fmr 7, 25
  0297f38  std 27, 176(1)
  0297f3c  std 28, 184(1)
  0297f40  bl 0x10e030
  0297f44  nop
  0297f48  lfs 1, 264(1)
  0297f4c  ori 3, 31, 0
  0297f50  lfs 2, 256(1)
  0297f54  addic 5, 1, 320
  0297f58  fsubs 4, 1, 26
  0297f5c  ori 4, 29, 0
  0297f60  lfs 1, 260(1)
  0297f64  li 8, 300
  0297f68  stfs 2, 320(1)
  0297f6c  li 9, 2
  0297f70  lfs 2, 268(1)
  0297f74  fmr 3, 26
  0297f78  stfs 1, 324(1)
  0297f7c  li 10, 2
  0297f80  stfs 2, 332(1)
  0297f84  fmr 1, 28
  0297f88  std 27, 144(1)
  0297f8c  fmr 2, 28
  0297f90  std 28, 160(1)
  0297f94  fmr 5, 27
  0297f98  fmr 6, 26
  0297f9c  fmr 7, 25
  0297fa0  stfs 4, 328(1)
  0297fa4  lfs 4, 12(30)
  0297fa8  std 28, 168(1)
  0297fac  std 27, 176(1)
  0297fb0  std 28, 184(1)
  0297fb4  bl 0x10e030
  0297fb8  nop
  0297fbc  lis 3, 112
  0297fc0  ori 4, 31, 0
  0297fc4  addic 3, 3, 31960
  0297fc8  bl 0x6d720
  0297fcc  nop
  0297fd0  addic 5, 1, 272
  0297fd4  ori 3, 31, 0
  0297fd8  li 4, 1
  0297fdc  bl 0xf1114
  0297fe0  nop
  0297fe4  addic 5, 1, 288
  0297fe8  ori 3, 31, 0
  0297fec  li 4, 2
  0297ff0  bl 0xf1114
  0297ff4  nop
  0297ff8  lfs 1, 272(1)
  0297ffc  lis 3, 41
  0298000  lfs 2, 276(1)
  0298004  lis 30, 161
  0298008  fsubs 1, 1, 31
  029800c  lfs 3, 280(1)
  0298010  fsubs 2, 2, 30
  0298014  lfs 4, 288(1)
  0298018  fsubs 3, 3, 29
  029801c  lfs 5, 292(1)
  0298020  fsubs 4, 4, 31
  0298024  lfs 6, 296(1)
  0298028  fsubs 5, 5, 30
  029802c  addi 3, 3, 30472
  0298030  fsubs 6, 6, 29
  0298034  li 31, 0
  0298038  addic 30, 30, 23856
  029803c  stfs 1, 272(1)
  0298040  stfs 2, 276(1)
  0298044  stfs 3, 280(1)
  0298048  stfs 4, 288(1)
  029804c  stfs 5, 292(1)
  0298050  stfs 6, 296(1)
  0298054  lfs 28, 128(3)
  0298058  lfs 27, 132(3)
  029805c  lfs 26, 136(3)
  0298060  addic 3, 1, 272
  0298064  fmr 1, 27
  0298068  ori 5, 30, 0
  029806c  fmr 2, 26
  0298070  ori 4, 3, 0
  0298074  bl 0x11a1a0
  0298078  nop
  029807c  addic 3, 1, 288
  0298080  fmr 1, 27
  0298084  ori 5, 30, 0
  0298088  fmr 2, 26
  029808c  ori 4, 3, 0
  0298090  bl 0x11a1a0
  0298094  nop
  0298098  lfs 1, 272(1)
  029809c  addic 31, 31, 1
  02980a0  lfs 2, 276(1)
  02980a4  fmadds 1, 31, 28, 1
  02980a8  lfs 3, 280(1)
  02980ac  fmadds 2, 30, 28, 2
  02980b0  lfs 4, 288(1)
  02980b4  cmpwi 31, 4
  02980b8  fmadds 3, 29, 28, 3
  02980bc  lfs 5, 292(1)
  02980c0  fmadds 4, 31, 28, 4
  02980c4  lfs 6, 296(1)
  02980c8  fmadds 5, 30, 28, 5
  02980cc  fmadds 6, 29, 28, 6
  02980d0  stfs 1, 272(1)
  02980d4  stfs 2, 276(1)
  02980d8  stfs 3, 280(1)
  02980dc  stfs 4, 288(1)
  02980e0  stfs 5, 292(1)
  02980e4  stfs 6, 296(1)
  02980e8  bt 0, 0x298060
  02980ec  li 0, 352
  02980f0  lvx 30, 1, 0
  02980f4  addic 0, 0, 16
  02980f8  lvx 31, 1, 0
  02980fc  ld 0, 544(1)
  0298100  mtlr 0
  0298104  lfd 21, 440(1)
  0298108  lfd 22, 448(1)
  029810c  lfd 23, 456(1)
  0298110  lfd 24, 464(1)
  0298114  lfd 25, 472(1)
  0298118  lfd 26, 480(1)
  029811c  lfd 27, 488(1)
  0298120  lfd 28, 496(1)
  0298124  lfd 29, 504(1)
  0298128  lfd 30, 512(1)
  029812c  lfd 31, 520(1)
  0298130  ld 25, 384(1)
  0298134  ld 26, 392(1)
  0298138  ld 27, 400(1)
  029813c  ld 28, 408(1)
  0298140  ld 29, 416(1)
  0298144  ld 30, 424(1)
  0298148  ld 31, 432(1)
  029814c  addi 1, 1, 528
  0298150  blr
