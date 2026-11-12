# game/update/moby979.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_979:   # 0x4c76b8, 0x9a8 bytes
  04c76b8  stdu 1, -320(1)
  04c76bc  mflr 0
  04c76c0  std 0, 336(1)
  04c76c4  std 26, 272(1)
  04c76c8  lbz 4, 32(3)
  04c76cc  std 30, 304(1)
  04c76d0  lis 26, 76
  04c76d4  lwz 30, 120(3)
  04c76d8  std 23, 248(1)
  04c76dc  cmpwi 4, 0
  04c76e0  ori 23, 1, 0
  04c76e4  std 31, 312(1)
  04c76e8  addi 26, 26, 30272
  04c76ec  std 29, 296(1)
  04c76f0  std 28, 288(1)
  04c76f4  std 27, 280(1)
  04c76f8  std 25, 264(1)
  04c76fc  std 24, 256(1)
  04c7700  ori 31, 3, 0
  04c7704  bf 2, 0x4c7720
  04c7708  lfs 1, 0(26)
  04c770c  lfs 2, 24(31)
  04c7710  li 3, 1
  04c7714  fadds 1, 2, 1
  04c7718  stb 3, 32(31)
  04c771c  stfs 1, 24(31)
  04c7720  lwz 3, 16(30)
  04c7724  cmpwi 3, -1
  04c7728  bt 2, 0x4c801c
  04c772c  lis 4, 164
  04c7730  slwi 3, 3, 8
  04c7734  lwz 4, -28512(4)
  04c7738  addc 3, 4, 3
  04c773c  clrldi 3, 3, 32
  04c7740  lbz 3, 32(3)
  04c7744  cmpwi 3, 2
  04c7748  bf 2, 0x4c801c
  04c774c  lis 3, 129
  04c7750  stw 31, 192(1)
  04c7754  lis 24, 16256
  04c7758  ori 6, 3, 1
  04c775c  li 29, 2
  04c7760  li 5, 1
  04c7764  li 7, 180
  04c7768  stw 6, 196(1)
  04c776c  stw 24, 204(1)
  04c7770  ori 3, 31, 0
  04c7774  stw 6, 208(1)
  04c7778  ori 4, 30, 0
  04c777c  stb 29, 200(1)
  04c7780  lhz 6, 166(31)
  04c7784  stb 5, 201(1)
  04c7788  sth 6, 202(1)
  04c778c  stb 7, 7(30)
  04c7790  bl 0x10c808
  04c7794  nop
  04c7798  lis 3, 151
  04c779c  addic 3, 3, -25376
  04c77a0  lhz 4, 782(3)
  04c77a4  cmpwi 4, 0
  04c77a8  bf 2, 0x4c7bb8
  04c77ac  lwz 4, 764(3)
  04c77b0  cmpw 4, 31
  04c77b4  bf 2, 0x4c7bb8
  04c77b8  lwz 3, 8320(3)
  04c77bc  lfs 1, 16(31)
  04c77c0  lfs 2, 20(31)
  04c77c4  lfs 3, 16(3)
  04c77c8  lfs 4, 20(3)
  04c77cc  fsubs 1, 3, 1
  04c77d0  fsubs 2, 4, 2
  04c77d4  lis 4, 115
  04c77d8  li 7, 4
  04c77dc  addic 4, 4, 22784
  04c77e0  fabs 3, 1
  04c77e4  fabs 4, 2
  04c77e8  stfs 1, 236(1)
  04c77ec  stfs 2, 240(1)
  04c77f0  fsubs 1, 3, 4
  04c77f4  stfs 1, 244(1)
  04c77f8  lwz 5, 236(1)
  04c77fc  lfs 5, 4(26)
  04c7800  lfs 1, 236(1)
  04c7804  lwz 6, 240(1)
  04c7808  fabs 2, 1
  04c780c  lfs 1, 240(1)
  04c7810  rlwinm 6, 6, 3, 29, 29
  04c7814  lwz 8, 244(1)
  04c7818  lfs 6, 244(1)
  04c781c  rlwimi 6, 8, 2, 30, 30
  04c7820  fabs 1, 1
  04c7824  fsub 7, 6, 5
  04c7828  fsub 6, 6, 5
  04c782c  rlwimi 6, 5, 4, 28, 28
  04c7830  ori 5, 4, 0
  04c7834  rlwimi 5, 6, 2, 26, 28
  04c7838  slwi 6, 6, 2
  04c783c  clrldi 5, 5, 32
  04c7840  fsel 2, 7, 2, 4
  04c7844  lvlx 2, 6, 4
  04c7848  lvlx 3, 7, 5
  04c784c  fsel 1, 6, 1, 3
  04c7850  fcmpu 0, 2, 5
  04c7854  bt 1, 0x4c7860
  04c7858  vspltisw 2, 0
  04c785c  b 0x4c7990
  04c7860  fsubs 3, 1, 2
  04c7864  fadds 1, 1, 2
  04c7868  addic 4, 1, 16
  04c786c  mtctr 29
  04c7870  addic 5, 4, 128
  04c7874  addic 6, 4, 144
  04c7878  fdivs 1, 3, 1
  04c787c  fmuls 2, 1, 1
  04c7880  stfs 1, 144(23)
  04c7884  stfs 1, 148(23)
  04c7888  stfs 1, 152(23)
  04c788c  stfs 1, 156(23)
  04c7890  lfs 1, 156(1)
  04c7894  lfs 3, 148(1)
  04c7898  lfs 5, 152(1)
  04c789c  fmuls 4, 2, 2
  04c78a0  fmuls 3, 3, 2
  04c78a4  fmuls 6, 1, 4
  04c78a8  fmuls 5, 5, 4
  04c78ac  fmuls 1, 4, 4
  04c78b0  stfs 3, 148(1)
  04c78b4  fmuls 2, 6, 2
  04c78b8  stfs 5, 152(1)
  04c78bc  stfs 2, 156(1)
  04c78c0  lfs 2, 128(4)
  04c78c4  fmuls 2, 2, 1
  04c78c8  stfs 2, 144(4)
  04c78cc  lfs 2, 4(5)
  04c78d0  addic 4, 4, 8
  04c78d4  addic 5, 5, 8
  04c78d8  fmuls 2, 2, 1
  04c78dc  stfs 2, 4(6)
  04c78e0  addic 6, 6, 8
  04c78e4  bdnz 0x4c78c0
  04c78e8  lis 5, 115
  04c78ec  ori 4, 1, 0
  04c78f0  li 7, 4
  04c78f4  addic 5, 5, 22752
  04c78f8  addic 6, 4, 144
  04c78fc  mtctr 7
  04c7900  lfs 1, 144(4)
  04c7904  lfs 2, 0(5)
  04c7908  fmuls 1, 1, 2
  04c790c  lfs 2, 4(5)
  04c7910  addic 5, 5, 8
  04c7914  stfs 1, 144(4)
  04c7918  lfs 1, 4(6)
  04c791c  addic 4, 4, 8
  04c7920  fmuls 1, 1, 2
  04c7924  stfs 1, 4(6)
  04c7928  addic 6, 6, 8
  04c792c  bdnz 0x4c7900
  04c7930  li 4, 4
  04c7934  li 5, 144
  04c7938  vspltisw 4, 0
  04c793c  mtctr 4
  04c7940  addc 4, 1, 5
  04c7944  li 5, 16
  04c7948  lvlx 5, 0, 4
  04c794c  vspltw 4, 4, 0
  04c7950  addic 6, 4, 4
  04c7954  li 7, 16
  04c7958  lvrx 6, 5, 4
  04c795c  addic 4, 4, 8
  04c7960  vor 5, 5, 6
  04c7964  lvlx 6, 0, 6
  04c7968  lvrx 7, 7, 6
  04c796c  vaddfp 4, 4, 5
  04c7970  vor 5, 6, 7
  04c7974  vaddfp 4, 4, 5
  04c7978  bdnz 0x4c7944
  04c797c  li 4, 8
  04c7980  lvlx 5, 4, 26
  04c7984  vspltw 5, 5, 0
  04c7988  vaddfp 4, 4, 5
  04c798c  vmaddfp 2, 4, 2, 3
  04c7990  li 4, 12
  04c7994  li 5, 16
  04c7998  vspltw 5, 2, 0
  04c799c  li 6, 20
  04c79a0  vspltisw 0, -1
  04c79a4  lvlx 3, 4, 26
  04c79a8  lvlx 4, 5, 26
  04c79ac  vspltw 3, 3, 0
  04c79b0  vspltw 4, 4, 0
  04c79b4  lvlx 6, 6, 26
  04c79b8  li 4, 24
  04c79bc  vaddfp 3, 2, 3
  04c79c0  vspltw 6, 6, 0
  04c79c4  vsubfp 7, 4, 2
  04c79c8  li 5, 28
  04c79cc  vslw 0, 0, 0
  04c79d0  vsubfp 10, 6, 2
  04c79d4  vspltisw 14, -1
  04c79d8  vspltisw 15, -1
  04c79dc  li 9, 192
  04c79e0  vslw 14, 14, 14
  04c79e4  vsubfp 8, 4, 3
  04c79e8  vsubfp 9, 6, 3
  04c79ec  vsubfp 4, 4, 5
  04c79f0  vsubfp 6, 6, 5
  04c79f4  li 6, 180
  04c79f8  lis 7, 17839
  04c79fc  li 8, 96
  04c7a00  li 11, 208
  04c7a04  vcmpgtfp 12, 8, 3
  04c7a08  vsel 3, 8, 3, 12
  04c7a0c  vspltisw 12, -1
  04c7a10  vcmpgtfp 11, 4, 5
  04c7a14  vsel 4, 4, 5, 11
  04c7a18  vcmpgtfp 8, 3, 9
  04c7a1c  vslw 12, 12, 12
  04c7a20  vsel 3, 9, 3, 8
  04c7a24  vspltisw 8, -1
  04c7a28  vcmpgtfp 9, 7, 2
  04c7a2c  vsel 2, 7, 2, 9
  04c7a30  vspltisw 7, -1
  04c7a34  vslw 8, 8, 8
  04c7a38  lvlx 9, 4, 26
  04c7a3c  vcmpgtfp 5, 2, 10
  04c7a40  lvlx 13, 5, 26
  04c7a44  vslw 7, 7, 7
  04c7a48  vmaddfp 8, 3, 3, 8
  04c7a4c  vsel 2, 10, 2, 5
  04c7a50  vspltisw 5, -1
  04c7a54  vspltw 9, 9, 0
  04c7a58  vcmpgtfp 10, 4, 6
  04c7a5c  li 4, 32
  04c7a60  vsel 4, 6, 4, 10
  04c7a64  vslw 5, 5, 5
  04c7a68  vspltisw 6, -1
  04c7a6c  vspltisw 10, -1
  04c7a70  lvlx 1, 4, 26
  04c7a74  vmaddfp 5, 2, 2, 5
  04c7a78  vslw 6, 6, 6
  04c7a7c  vmaddfp 11, 8, 3, 12
  04c7a80  vslw 10, 10, 10
  04c7a84  vspltisw 12, -1
  04c7a88  li 4, 36
  04c7a8c  vspltw 1, 1, 0
  04c7a90  vmaddfp 6, 4, 4, 6
  04c7a94  li 5, 48
  04c7a98  lvlx 16, 4, 26
  04c7a9c  li 4, 176
  04c7aa0  li 12, 96
  04c7aa4  li 10, 64
  04c7aa8  vmaddfp 7, 8, 11, 7
  04c7aac  vmaddfp 3, 11, 9, 3
  04c7ab0  vslw 11, 12, 12
  04c7ab4  vspltw 12, 13, 0
  04c7ab8  vmaddfp 0, 6, 4, 0
  04c7abc  vspltisw 13, -1
  04c7ac0  vmaddfp 11, 5, 2, 11
  04c7ac4  vslw 13, 13, 13
  04c7ac8  vmaddfp 10, 8, 7, 10
  04c7acc  vmaddfp 3, 7, 12, 3
  04c7ad0  vspltisw 7, -1
  04c7ad4  vmaddfp 4, 0, 9, 4
  04c7ad8  vslw 7, 7, 7
  04c7adc  vmaddfp 2, 11, 9, 2
  04c7ae0  vspltisw 9, -1
  04c7ae4  vmaddfp 7, 5, 11, 7
  04c7ae8  vspltw 11, 16, 0
  04c7aec  vmaddfp 8, 8, 10, 13
  04c7af0  vslw 9, 9, 9
  04c7af4  vslw 13, 15, 15
  04c7af8  vmaddfp 3, 10, 1, 3
  04c7afc  vmaddfp 10, 6, 0, 14
  04c7b00  vspltisw 0, -1
  04c7b04  vspltisw 14, -1
  04c7b08  vslw 0, 0, 0
  04c7b0c  vmaddfp 13, 5, 7, 13
  04c7b10  vmaddfp 2, 7, 12, 2
  04c7b14  vmaddfp 3, 8, 11, 3
  04c7b18  vmaddfp 7, 6, 10, 9
  04c7b1c  vmaddfp 4, 10, 12, 4
  04c7b20  vslw 8, 14, 14
  04c7b24  vmaddfp 5, 5, 13, 0
  04c7b28  vmaddfp 2, 13, 1, 2
  04c7b2c  vmaddfp 6, 6, 7, 8
  04c7b30  vmaddfp 4, 7, 1, 4
  04c7b34  vspltw 7, 3, 0
  04c7b38  lvx 8, 4, 1
  04c7b3c  stvewx 7, 4, 1
  04c7b40  vmaddfp 2, 5, 11, 2
  04c7b44  lvx 5, 5, 26
  04c7b48  ori 4, 7, 57190
  04c7b4c  li 5, 64
  04c7b50  vperm 3, 3, 8, 5
  04c7b54  vmaddfp 4, 6, 11, 4
  04c7b58  li 7, 80
  04c7b5c  lvx 5, 9, 1
  04c7b60  li 9, 80
  04c7b64  vspltw 2, 2, 0
  04c7b68  stvewx 2, 6, 1
  04c7b6c  stw 24, 184(1)
  04c7b70  stw 4, 188(1)
  04c7b74  lvx 2, 5, 26
  04c7b78  lvx 6, 7, 26
  04c7b7c  lvx 7, 8, 26
  04c7b80  vperm 2, 4, 2, 6
  04c7b84  lvx 4, 11, 1
  04c7b88  stvx 5, 9, 1
  04c7b8c  stvx 4, 12, 1
  04c7b90  vperm 2, 2, 3, 7
  04c7b94  ld 7, 80(1)
  04c7b98  ld 8, 88(1)
  04c7b9c  stvx 2, 10, 1
  04c7ba0  ld 5, 64(1)
  04c7ba4  ld 6, 72(1)
  04c7ba8  ld 9, 96(1)
  04c7bac  ld 10, 104(1)
  04c7bb0  bl 0x105ab4
  04c7bb4  nop
  04c7bb8  addic 3, 31, 16
  04c7bbc  li 5, 16
  04c7bc0  lfs 1, 112(26)
  04c7bc4  ori 6, 31, 0
  04c7bc8  li 7, 0
  04c7bcc  bl 0x5e598
  04c7bd0  nop
  04c7bd4  ori 28, 3, 0
  04c7bd8  li 27, 0
  04c7bdc  cmpwi 28, 0
  04c7be0  bf 1, 0x4c801c
  04c7be4  ori 25, 27, 0
  04c7be8  lis 3, 161
  04c7bec  addic 3, 3, 18944
  04c7bf0  lwzx 3, 3, 25
  04c7bf4  lhz 4, 166(3)
  04c7bf8  cmpwi 4, 857
  04c7bfc  bf 2, 0x4c800c
  04c7c00  lwz 4, 120(3)
  04c7c04  lwz 4, 412(4)
  04c7c08  cmpw 4, 31
  04c7c0c  bf 2, 0x4c800c
  04c7c10  lfs 1, 16(3)
  04c7c14  lfs 2, 16(31)
  04c7c18  lfs 3, 20(3)
  04c7c1c  lfs 4, 20(31)
  04c7c20  fsubs 1, 1, 2
  04c7c24  fsubs 2, 3, 4
  04c7c28  lis 4, 115
  04c7c2c  li 7, 4
  04c7c30  addic 4, 4, 22784
  04c7c34  fabs 3, 1
  04c7c38  fabs 4, 2
  04c7c3c  stfs 1, 224(1)
  04c7c40  stfs 2, 228(1)
  04c7c44  fsubs 1, 3, 4
  04c7c48  stfs 1, 232(1)
  04c7c4c  lwz 5, 224(1)
  04c7c50  lfs 5, 4(26)
  04c7c54  lfs 1, 224(1)
  04c7c58  lwz 6, 228(1)
  04c7c5c  fabs 2, 1
  04c7c60  lfs 1, 228(1)
  04c7c64  lwz 8, 232(1)
  04c7c68  rlwinm 6, 6, 3, 29, 29
  04c7c6c  lfs 6, 232(1)
  04c7c70  fabs 1, 1
  04c7c74  rlwimi 6, 8, 2, 30, 30
  04c7c78  fsub 7, 6, 5
  04c7c7c  fsub 6, 6, 5
  04c7c80  rlwimi 6, 5, 4, 28, 28
  04c7c84  ori 5, 4, 0
  04c7c88  rlwimi 5, 6, 2, 26, 28
  04c7c8c  slwi 6, 6, 2
  04c7c90  clrldi 5, 5, 32
  04c7c94  fsel 2, 7, 2, 4
  04c7c98  lvlx 2, 6, 4
  04c7c9c  lvlx 3, 7, 5
  04c7ca0  fsel 1, 6, 1, 3
  04c7ca4  fcmpu 0, 2, 5
  04c7ca8  bt 1, 0x4c7cb4
  04c7cac  vspltisw 2, 0
  04c7cb0  b 0x4c7de4
  04c7cb4  fsubs 3, 1, 2
  04c7cb8  fadds 1, 1, 2
  04c7cbc  addic 4, 1, 16
  04c7cc0  mtctr 29
  04c7cc4  addic 5, 4, 96
  04c7cc8  addic 6, 4, 112
  04c7ccc  fdivs 1, 3, 1
  04c7cd0  fmuls 2, 1, 1
  04c7cd4  stfs 1, 112(23)
  04c7cd8  stfs 1, 116(23)
  04c7cdc  stfs 1, 120(23)
  04c7ce0  stfs 1, 124(23)
  04c7ce4  lfs 1, 124(1)
  04c7ce8  lfs 3, 116(1)
  04c7cec  lfs 5, 120(1)
  04c7cf0  fmuls 4, 2, 2
  04c7cf4  fmuls 3, 3, 2
  04c7cf8  fmuls 6, 1, 4
  04c7cfc  fmuls 5, 5, 4
  04c7d00  fmuls 1, 4, 4
  04c7d04  stfs 3, 116(1)
  04c7d08  fmuls 2, 6, 2
  04c7d0c  stfs 5, 120(1)
  04c7d10  stfs 2, 124(1)
  04c7d14  lfs 2, 96(4)
  04c7d18  fmuls 2, 2, 1
  04c7d1c  stfs 2, 112(4)
  04c7d20  lfs 2, 4(5)
  04c7d24  addic 5, 5, 8
  04c7d28  fmuls 2, 2, 1
  04c7d2c  addic 4, 4, 8
  04c7d30  stfs 2, 4(6)
  04c7d34  addic 6, 6, 8
  04c7d38  bdnz 0x4c7d14
  04c7d3c  lis 5, 115
  04c7d40  ori 4, 1, 0
  04c7d44  li 7, 4
  04c7d48  addic 5, 5, 22752
  04c7d4c  addic 6, 4, 112
  04c7d50  mtctr 7
  04c7d54  lfs 1, 112(4)
  04c7d58  lfs 2, 0(5)
  04c7d5c  fmuls 1, 1, 2
  04c7d60  lfs 2, 4(5)
  04c7d64  addic 5, 5, 8
  04c7d68  stfs 1, 112(4)
  04c7d6c  lfs 1, 4(6)
  04c7d70  addic 4, 4, 8
  04c7d74  fmuls 1, 1, 2
  04c7d78  stfs 1, 4(6)
  04c7d7c  addic 6, 6, 8
  04c7d80  bdnz 0x4c7d54
  04c7d84  li 4, 4
  04c7d88  vspltisw 4, 0
  04c7d8c  mtctr 4
  04c7d90  li 4, 112
  04c7d94  addc 4, 1, 4
  04c7d98  li 5, 16
  04c7d9c  lvlx 5, 0, 4
  04c7da0  addic 6, 4, 4
  04c7da4  vspltw 4, 4, 0
  04c7da8  li 7, 16
  04c7dac  lvrx 6, 5, 4
  04c7db0  addic 4, 4, 8
  04c7db4  vor 5, 5, 6
  04c7db8  lvlx 6, 0, 6
  04c7dbc  lvrx 7, 7, 6
  04c7dc0  vaddfp 4, 4, 5
  04c7dc4  vor 5, 6, 7
  04c7dc8  vaddfp 4, 4, 5
  04c7dcc  bdnz 0x4c7d98
  04c7dd0  li 4, 8
  04c7dd4  lvlx 5, 4, 26
  04c7dd8  vspltw 5, 5, 0
  04c7ddc  vaddfp 4, 4, 5
  04c7de0  vmaddfp 2, 4, 2, 3
  04c7de4  li 4, 12
  04c7de8  vspltw 5, 2, 0
  04c7dec  li 5, 16
  04c7df0  vspltisw 0, -1
  04c7df4  vspltisw 14, -1
  04c7df8  lvlx 3, 4, 26
  04c7dfc  lvlx 4, 5, 26
  04c7e00  li 4, 20
  04c7e04  vspltw 3, 3, 0
  04c7e08  vspltw 4, 4, 0
  04c7e0c  vaddfp 3, 2, 3
  04c7e10  vsubfp 7, 4, 2
  04c7e14  vsubfp 8, 4, 5
  04c7e18  lvlx 6, 4, 26
  04c7e1c  vspltw 6, 6, 0
  04c7e20  li 4, 24
  04c7e24  li 5, 28
  04c7e28  vslw 0, 0, 0
  04c7e2c  vslw 14, 14, 14
  04c7e30  vsubfp 10, 6, 2
  04c7e34  vsubfp 4, 4, 3
  04c7e38  vsubfp 9, 6, 3
  04c7e3c  vcmpgtfp 11, 7, 2
  04c7e40  vsubfp 6, 6, 5
  04c7e44  vsel 2, 7, 2, 11
  04c7e48  vcmpgtfp 7, 8, 5
  04c7e4c  vsel 5, 8, 5, 7
  04c7e50  vspltisw 7, -1
  04c7e54  vcmpgtfp 12, 2, 10
  04c7e58  vspltisw 15, -1
  04c7e5c  vsel 2, 10, 2, 12
  04c7e60  vcmpgtfp 11, 4, 3
  04c7e64  vslw 7, 7, 7
  04c7e68  vsel 3, 4, 3, 11
  04c7e6c  vspltisw 11, -1
  04c7e70  vcmpgtfp 8, 5, 6
  04c7e74  vspltisw 12, -1
  04c7e78  vmaddfp 7, 2, 2, 7
  04c7e7c  vcmpgtfp 4, 3, 9
  04c7e80  vsel 5, 6, 5, 8
  04c7e84  vslw 10, 11, 11
  04c7e88  vsel 3, 9, 3, 4
  04c7e8c  vspltisw 4, -1
  04c7e90  vspltisw 9, -1
  04c7e94  vspltisw 6, -1
  04c7e98  lvlx 11, 4, 26
  04c7e9c  vslw 4, 4, 4
  04c7ea0  li 4, 32
  04c7ea4  vslw 9, 9, 9
  04c7ea8  vspltw 11, 11, 0
  04c7eac  vslw 6, 6, 6
  04c7eb0  vmaddfp 4, 3, 3, 4
  04c7eb4  vslw 12, 12, 12
  04c7eb8  vspltisw 8, -1
  04c7ebc  vmaddfp 6, 5, 5, 6
  04c7ec0  vslw 15, 15, 15
  04c7ec4  lvlx 13, 5, 26
  04c7ec8  vmaddfp 12, 7, 2, 12
  04c7ecc  vslw 8, 8, 8
  04c7ed0  li 5, 36
  04c7ed4  vspltw 13, 13, 0
  04c7ed8  lvlx 1, 4, 26
  04c7edc  vspltw 1, 1, 0
  04c7ee0  vmaddfp 9, 4, 3, 9
  04c7ee4  lvlx 16, 5, 26
  04c7ee8  li 4, 176
  04c7eec  li 6, 48
  04c7ef0  li 5, 180
  04c7ef4  vmaddfp 14, 7, 12, 14
  04c7ef8  vmaddfp 2, 12, 11, 2
  04c7efc  lis 8, 17839
  04c7f00  li 7, 64
  04c7f04  ori 8, 8, 57190
  04c7f08  vmaddfp 10, 4, 9, 10
  04c7f0c  vmaddfp 3, 9, 11, 3
  04c7f10  vspltisw 9, -1
  04c7f14  li 9, 80
  04c7f18  li 10, 64
  04c7f1c  vslw 9, 9, 9
  04c7f20  vmaddfp 2, 14, 13, 2
  04c7f24  vmaddfp 8, 4, 10, 8
  04c7f28  vmaddfp 3, 10, 13, 3
  04c7f2c  vmaddfp 10, 6, 5, 0
  04c7f30  vspltisw 0, -1
  04c7f34  vslw 12, 0, 0
  04c7f38  vspltw 0, 16, 0
  04c7f3c  vmaddfp 4, 4, 8, 9
  04c7f40  vmaddfp 3, 8, 1, 3
  04c7f44  vmaddfp 8, 6, 10, 12
  04c7f48  vspltisw 9, -1
  04c7f4c  vmaddfp 12, 7, 14, 15
  04c7f50  vmaddfp 5, 10, 11, 5
  04c7f54  vspltisw 10, -1
  04c7f58  vslw 9, 9, 9
  04c7f5c  vspltisw 11, -1
  04c7f60  vslw 10, 10, 10
  04c7f64  vslw 11, 11, 11
  04c7f68  vmaddfp 3, 4, 0, 3
  04c7f6c  vmaddfp 4, 6, 8, 9
  04c7f70  vmaddfp 7, 7, 12, 10
  04c7f74  vmaddfp 5, 8, 13, 5
  04c7f78  vmaddfp 2, 12, 1, 2
  04c7f7c  vmaddfp 6, 6, 4, 11
  04c7f80  vmaddfp 4, 4, 1, 5
  04c7f84  vmaddfp 2, 7, 0, 2
  04c7f88  vspltw 5, 3, 0
  04c7f8c  lvx 7, 4, 1
  04c7f90  stvewx 5, 4, 1
  04c7f94  lvx 5, 6, 26
  04c7f98  li 4, 96
  04c7f9c  li 6, 192
  04c7fa0  vperm 3, 3, 7, 5
  04c7fa4  vmaddfp 4, 6, 0, 4
  04c7fa8  vspltw 2, 2, 0
  04c7fac  stvewx 2, 5, 1
  04c7fb0  stw 24, 184(1)
  04c7fb4  stw 8, 188(1)
  04c7fb8  li 5, 208
  04c7fbc  lvx 2, 7, 26
  04c7fc0  lvx 5, 9, 26
  04c7fc4  lvx 6, 4, 26
  04c7fc8  vperm 2, 4, 2, 5
  04c7fcc  lvx 4, 6, 1
  04c7fd0  li 4, 80
  04c7fd4  li 6, 96
  04c7fd8  vperm 2, 2, 3, 6
  04c7fdc  lvx 3, 5, 1
  04c7fe0  stvx 4, 4, 1
  04c7fe4  stvx 3, 6, 1
  04c7fe8  ld 7, 80(1)
  04c7fec  stvx 2, 10, 1
  04c7ff0  ld 5, 64(1)
  04c7ff4  ld 6, 72(1)
  04c7ff8  ld 8, 88(1)
  04c7ffc  ld 9, 96(1)
  04c8000  ld 10, 104(1)
  04c8004  bl 0x105ab4
  04c8008  nop
  04c800c  addic 27, 27, 1
  04c8010  addic 25, 25, 4
  04c8014  cmpw 27, 28
  04c8018  bt 0, 0x4c7be8
  04c801c  ori 3, 31, 0
  04c8020  ori 4, 30, 0
  04c8024  bl 0x10c9a0
  04c8028  nop
  04c802c  ld 0, 336(1)
  04c8030  mtlr 0
  04c8034  ld 23, 248(1)
  04c8038  ld 24, 256(1)
  04c803c  ld 25, 264(1)
  04c8040  ld 26, 272(1)
  04c8044  ld 27, 280(1)
  04c8048  ld 28, 288(1)
  04c804c  ld 29, 296(1)
  04c8050  ld 30, 304(1)
  04c8054  ld 31, 312(1)
  04c8058  addi 1, 1, 320
  04c805c  blr

M979_004c8060:   # 0x4c8060, 0x14 bytes
  04c8060  lis 3, 143
  04c8064  lis 4, 1
  04c8068  addic 3, 3, 20020
  04c806c  stw 4, 72(3)
  04c8070  blr
