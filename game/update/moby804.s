# game/update/moby804.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M804_00465968:   # 0x465968, 0x168 bytes
  0465968  stdu 1, -144(1)
  046596c  mflr 0
  0465970  std 0, 160(1)
  0465974  std 30, 128(1)
  0465978  ori 30, 3, 0
  046597c  std 31, 136(1)
  0465980  li 3, 804
  0465984  std 29, 120(1)
  0465988  ori 31, 4, 0
  046598c  bl 0xefa28
  0465990  nop
  0465994  ori 29, 3, 0
  0465998  cmpwi 29, 0
  046599c  bt 2, 0x465ab0
  04659a0  lwz 8, 120(29)
  04659a4  li 3, 127
  04659a8  li 4, 1
  04659ac  li 7, 0
  04659b0  stw 30, 0(8)
  04659b4  stb 3, 48(29)
  04659b8  sth 3, 50(29)
  04659bc  stb 4, 49(29)
  04659c0  stw 7, 28(29)
  04659c4  stw 7, 24(29)
  04659c8  stw 7, 20(29)
  04659cc  stw 7, 16(29)
  04659d0  lfs 1, 4(8)
  04659d4  lfs 2, 208(30)
  04659d8  lfs 3, 212(30)
  04659dc  fmuls 2, 1, 2
  04659e0  lfs 4, 216(30)
  04659e4  fmuls 3, 1, 3
  04659e8  lfs 5, 220(30)
  04659ec  fmuls 4, 1, 4
  04659f0  fmuls 5, 1, 5
  04659f4  fneg 1, 1
  04659f8  lwz 5, 120(30)
  04659fc  lis 3, 70
  0465a00  li 4, 0
  0465a04  fneg 2, 2
  0465a08  fneg 3, 3
  0465a0c  fneg 4, 4
  0465a10  fneg 5, 5
  0465a14  addi 9, 3, 22880
  0465a18  stfs 1, 20(29)
  0465a1c  ori 3, 29, 0
  0465a20  li 6, 128
  0465a24  stfs 2, 16(29)
  0465a28  stfs 3, 20(29)
  0465a2c  stfs 4, 24(29)
  0465a30  stfs 5, 28(29)
  0465a34  lfs 1, 0(5)
  0465a38  fadds 1, 2, 1
  0465a3c  lfs 2, 64(30)
  0465a40  lfs 5, 68(30)
  0465a44  lfs 6, 72(30)
  0465a48  lfs 7, 76(30)
  0465a4c  stfs 1, 16(29)
  0465a50  lfs 1, 4(5)
  0465a54  fadds 1, 3, 1
  0465a58  stfs 1, 20(29)
  0465a5c  lfs 1, 8(5)
  0465a60  stfs 2, 64(29)
  0465a64  fadds 1, 4, 1
  0465a68  stfs 5, 68(29)
  0465a6c  stfs 6, 72(29)
  0465a70  li 5, 64
  0465a74  stfs 7, 76(29)
  0465a78  stfs 1, 24(29)
  0465a7c  stw 31, 8(8)
  0465a80  stw 7, 4(8)
  0465a84  lfs 1, 44(29)
  0465a88  stfs 1, 12(8)
  0465a8c  lfs 1, 0(9)
  0465a90  lfs 2, 44(29)
  0465a94  fmuls 1, 2, 1
  0465a98  stfs 1, 44(29)
  0465a9c  bl 0xf1ec8
  0465aa0  nop
  0465aa4  ori 3, 29, 0
  0465aa8  bl 0xf31a8
  0465aac  nop
  0465ab0  ori 3, 29, 0
  0465ab4  ld 0, 160(1)
  0465ab8  mtlr 0
  0465abc  ld 29, 120(1)
  0465ac0  ld 30, 128(1)
  0465ac4  ld 31, 136(1)
  0465ac8  addi 1, 1, 144
  0465acc  blr

UpdateMoby_804:   # 0x465ae8, 0x21c bytes
  0465ae8  stdu 1, -128(1)
  0465aec  mflr 0
  0465af0  std 0, 144(1)
  0465af4  lis 4, 70
  0465af8  lis 5, 124
  0465afc  std 31, 120(1)
  0465b00  addi 4, 4, 23248
  0465b04  ori 31, 3, 0
  0465b08  lis 3, 114
  0465b0c  lfs 1, 0(4)
  0465b10  std 30, 112(1)
  0465b14  lfs 2, -11452(5)
  0465b18  lwz 30, 120(31)
  0465b1c  fmuls 1, 2, 1
  0465b20  lfs 3, 4(30)
  0465b24  lfs 4, -3052(3)
  0465b28  addic 3, 30, 8
  0465b2c  fmadds 1, 1, 4, 3
  0465b30  stfs 1, 4(30)
  0465b34  bl 0x4fff60
  0465b38  nop
  0465b3c  cmpwi 3, 0
  0465b40  bf 2, 0x465b98
  0465b44  lis 3, 70
  0465b48  lis 4, 124
  0465b4c  addi 3, 3, 23248
  0465b50  lfs 1, 4(3)
  0465b54  lfs 2, -11452(4)
  0465b58  lfs 3, 4(30)
  0465b5c  fmuls 1, 2, 1
  0465b60  fcmpu 0, 3, 1
  0465b64  cror 6, 1, 2
  0465b68  bt 6, 0x465b98
  0465b6c  lwz 3, 0(30)
  0465b70  cmpwi 3, 0
  0465b74  bt 2, 0x465b98
  0465b78  lhz 4, 166(3)
  0465b7c  cmpwi 4, 185
  0465b80  bf 2, 0x465b98
  0465b84  lbz 4, 32(3)
  0465b88  cmpwi 4, 254
  0465b8c  cmpwi 1, 4, 253
  0465b90  bt 2, 0x465b98
  0465b94  bf 6, 0x465ba8
  0465b98  ori 3, 31, 0
  0465b9c  bl 0xefb38
  0465ba0  nop
  0465ba4  b 0x465cec
  0465ba8  li 4, 0
  0465bac  lwz 3, 120(3)
  0465bb0  stw 4, 28(31)
  0465bb4  stw 4, 24(31)
  0465bb8  stw 4, 20(31)
  0465bbc  stw 4, 16(31)
  0465bc0  lfs 1, 4(30)
  0465bc4  lwz 4, 0(30)
  0465bc8  fneg 2, 1
  0465bcc  lis 5, 124
  0465bd0  stfs 2, 20(31)
  0465bd4  lfs 2, 208(4)
  0465bd8  lfs 3, 212(4)
  0465bdc  fmuls 2, 1, 2
  0465be0  lfs 4, 216(4)
  0465be4  fmuls 3, 1, 3
  0465be8  lfs 5, 220(4)
  0465bec  fmuls 4, 1, 4
  0465bf0  fmuls 1, 1, 5
  0465bf4  fneg 2, 2
  0465bf8  fneg 3, 3
  0465bfc  fneg 4, 4
  0465c00  fneg 1, 1
  0465c04  stfs 2, 16(31)
  0465c08  stfs 3, 20(31)
  0465c0c  stfs 4, 24(31)
  0465c10  stfs 1, 28(31)
  0465c14  lfs 1, 0(3)
  0465c18  lwz 4, 0(30)
  0465c1c  fadds 1, 2, 1
  0465c20  stfs 1, 16(31)
  0465c24  lfs 1, 4(3)
  0465c28  fadds 1, 3, 1
  0465c2c  stfs 1, 20(31)
  0465c30  lfs 1, 8(3)
  0465c34  fadds 1, 4, 1
  0465c38  stfs 1, 24(31)
  0465c3c  lfs 1, 64(4)
  0465c40  stfs 1, 64(31)
  0465c44  lfs 1, 68(4)
  0465c48  stfs 1, 68(31)
  0465c4c  lfs 1, 72(4)
  0465c50  stfs 1, 72(31)
  0465c54  lfs 1, 76(4)
  0465c58  stfs 1, 76(31)
  0465c5c  lwz 3, 4(30)
  0465c60  lwz 4, -11452(5)
  0465c64  srawi 6, 3, 31
  0465c68  lfs 2, 4(30)
  0465c6c  srawi 7, 4, 31
  0465c70  lfs 1, -11452(5)
  0465c74  srwi 8, 6, 1
  0465c78  srwi 9, 7, 1
  0465c7c  xor 3, 8, 3
  0465c80  xor 4, 9, 4
  0465c84  subc 3, 3, 6
  0465c88  subc 4, 4, 7
  0465c8c  cmpw 3, 4
  0465c90  bf 1, 0x465ccc
  0465c94  lis 3, 70
  0465c98  fsubs 1, 2, 1
  0465c9c  addi 3, 3, 23248
  0465ca0  lfs 2, 8(3)
  0465ca4  lfs 3, 12(3)
  0465ca8  lfs 4, 16(3)
  0465cac  fnmsubs 1, 1, 2, 3
  0465cb0  fmuls 1, 1, 4
  0465cb4  bl 0x502758
  0465cb8  nop
  0465cbc  lis 4, 124
  0465cc0  stb 3, 35(31)
  0465cc4  lfs 2, 4(30)
  0465cc8  lfs 1, -11452(4)
  0465ccc  lfs 3, 12(30)
  0465cd0  fmuls 2, 3, 2
  0465cd4  lis 3, 70
  0465cd8  addi 3, 3, 23248
  0465cdc  fdivs 1, 2, 1
  0465ce0  lfs 2, 20(3)
  0465ce4  fmadds 1, 3, 2, 1
  0465ce8  stfs 1, 44(31)
  0465cec  ld 0, 144(1)
  0465cf0  mtlr 0
  0465cf4  ld 30, 112(1)
  0465cf8  ld 31, 120(1)
  0465cfc  addi 1, 1, 128
  0465d00  blr
