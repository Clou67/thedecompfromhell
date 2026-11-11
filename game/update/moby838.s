# game/update/moby838.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M838_004819f0:   # 0x4819f0, 0x14 bytes
  04819f0  lis 3, 139
  04819f4  lis 4, 1
  04819f8  addic 3, 3, -12888
  04819fc  stw 4, 72(3)
  0481a00  blr

UpdateMoby_838:   # 0x481a10, 0x26c bytes
  0481a10  stdu 1, -128(1)
  0481a14  mflr 0
  0481a18  std 0, 144(1)
  0481a1c  std 31, 120(1)
  0481a20  lbz 4, 32(3)
  0481a24  std 30, 112(1)
  0481a28  ori 31, 3, 0
  0481a2c  lwz 30, 120(3)
  0481a30  cmpwi 4, 0
  0481a34  cmpwi 1, 4, 2
  0481a38  cmpwi 6, 4, 1
  0481a3c  cmpwi 7, 4, -1
  0481a40  bt 1, 0x481a4c
  0481a44  bf 29, 0x481c64
  0481a48  b 0x481a58
  0481a4c  bf 25, 0x481a84
  0481a50  bf 5, 0x481c50
  0481a54  b 0x481c64
  0481a58  li 3, 0
  0481a5c  lhz 6, 52(31)
  0481a60  li 4, 1
  0481a64  li 5, -1
  0481a68  stb 3, 49(31)
  0481a6c  stb 4, 32(31)
  0481a70  ori 3, 6, 1
  0481a74  lwz 4, 4(30)
  0481a78  sth 3, 52(31)
  0481a7c  stw 5, 0(4)
  0481a80  b 0x481c64
  0481a84  lis 3, 270
  0481a88  lis 4, 161
  0481a8c  lwz 5, -25280(3)
  0481a90  lwz 3, 1808(4)
  0481a94  cmpw 5, 3
  0481a98  bt 2, 0x481abc
  0481a9c  lis 6, 270
  0481aa0  ori 5, 3, 0
  0481aa4  lis 3, 113
  0481aa8  ori 4, 31, 0
  0481aac  addic 3, 3, -4296
  0481ab0  stw 5, -25280(6)
  0481ab4  bl 0x6d720
  0481ab8  nop
  0481abc  lis 3, 149
  0481ac0  lfs 4, 20(31)
  0481ac4  addic 3, 3, 5056
  0481ac8  lfs 6, 16(31)
  0481acc  lfs 3, 324(3)
  0481ad0  lfs 5, 320(3)
  0481ad4  fsubs 7, 4, 3
  0481ad8  fsubs 8, 6, 5
  0481adc  lfs 2, 24(31)
  0481ae0  lfs 1, 328(3)
  0481ae4  fsubs 9, 2, 1
  0481ae8  lis 3, 72
  0481aec  fmuls 7, 7, 7
  0481af0  addi 3, 3, 6664
  0481af4  fmadds 7, 8, 8, 7
  0481af8  lfs 8, 0(3)
  0481afc  fmadds 7, 9, 9, 7
  0481b00  fsqrts 7, 7
  0481b04  fcmpu 0, 7, 8
  0481b08  cror 6, 1, 2
  0481b0c  bt 6, 0x481bfc
  0481b10  lwz 5, 4(30)
  0481b14  lwz 5, 0(5)
  0481b18  cmpwi 5, 0
  0481b1c  bt 0, 0x481be0
  0481b20  sldi 3, 5, 7
  0481b24  sldi 5, 5, 4
  0481b28  lis 4, 150
  0481b2c  subc 5, 3, 5
  0481b30  addic 4, 4, 14176
  0481b34  extsw 3, 5
  0481b38  addc 3, 4, 3
  0481b3c  lwz 6, 136(3)
  0481b40  cmpwi 6, 0
  0481b44  bt 2, 0x481be0
  0481b48  lhz 6, 166(6)
  0481b4c  cmpwi 6, 838
  0481b50  bf 2, 0x481be0
  0481b54  addc 5, 4, 5
  0481b58  clrldi 5, 5, 32
  0481b5c  lwz 5, 136(5)
  0481b60  cmpw 5, 31
  0481b64  bt 2, 0x481bfc
  0481b68  lbz 6, 32(5)
  0481b6c  cmpwi 6, 1
  0481b70  bf 2, 0x481ba8
  0481b74  lfs 8, 20(5)
  0481b78  lfs 9, 16(5)
  0481b7c  fsubs 3, 8, 3
  0481b80  fsubs 5, 9, 5
  0481b84  lfs 8, 24(5)
  0481b88  fsubs 1, 8, 1
  0481b8c  fmuls 3, 3, 3
  0481b90  fmadds 3, 5, 5, 3
  0481b94  fmadds 1, 1, 1, 3
  0481b98  fsqrts 1, 1
  0481b9c  fcmpu 0, 7, 1
  0481ba0  cror 6, 1, 2
  0481ba4  bt 6, 0x481bfc
  0481ba8  stw 31, 136(3)
  0481bac  lwz 3, 4(30)
  0481bb0  lwz 3, 0(3)
  0481bb4  sldi 5, 3, 7
  0481bb8  sldi 3, 3, 4
  0481bbc  subc 3, 5, 3
  0481bc0  addc 3, 4, 3
  0481bc4  clrldi 3, 3, 32
  0481bc8  stfs 6, 144(3)
  0481bcc  stfs 4, 148(3)
  0481bd0  stfs 2, 152(3)
  0481bd4  lfs 1, 28(31)
  0481bd8  stfs 1, 156(3)
  0481bdc  b 0x481bfc
  0481be0  li 4, 4
  0481be4  li 3, 0
  0481be8  ori 5, 31, 0
  0481bec  bl 0x15d12c
  0481bf0  nop
  0481bf4  lwz 4, 4(30)
  0481bf8  stw 3, 0(4)
  0481bfc  lwz 30, 0(30)
  0481c00  cmpwi 30, -1
  0481c04  bf 1, 0x481c64
  0481c08  lis 3, 164
  0481c0c  slwi 4, 30, 8
  0481c10  lwz 3, -28512(3)
  0481c14  addc 3, 3, 4
  0481c18  clrldi 3, 3, 32
  0481c1c  lbz 3, 188(3)
  0481c20  cmpwi 3, 0
  0481c24  bt 2, 0x481c64
  0481c28  li 3, 1
  0481c2c  li 4, 0
  0481c30  ori 5, 31, 0
  0481c34  bl 0x15d12c
  0481c38  nop
  0481c3c  li 3, 2
  0481c40  li 4, 0
  0481c44  stb 3, 32(31)
  0481c48  stw 4, 148(31)
  0481c4c  b 0x481c64
  0481c50  lwz 3, 148(31)
  0481c54  cmpwi 3, 0
  0481c58  bt 2, 0x481c64
  0481c5c  li 3, 0
  0481c60  stw 3, 148(31)
  0481c64  ld 0, 144(1)
  0481c68  mtlr 0
  0481c6c  ld 30, 112(1)
  0481c70  ld 31, 120(1)
  0481c74  addi 1, 1, 128
  0481c78  blr
