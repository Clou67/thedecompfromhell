# game/update/moby1150.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1151_001e05a4:   # 0x1e05a4, 0x14 bytes
  01e05a4  lis 3, 118
  01e05a8  lis 4, 1
  01e05ac  addic 3, 3, 19768
  01e05b0  stw 4, 72(3)
  01e05b4  blr

M1151_001e05b8:   # 0x1e05b8, 0x58 bytes
  01e05b8  lis 5, 151
  01e05bc  addic 5, 5, -25376
  01e05c0  lwz 6, 8332(5)
  01e05c4  lwz 4, 1272(5)
  01e05c8  cmpwi 6, 3
  01e05cc  bt 2, 0x1e05dc
  01e05d0  lwz 6, 8324(5)
  01e05d4  cmpwi 6, 28
  01e05d8  bf 2, 0x1e05e8
  01e05dc  cmpw 4, 3
  01e05e0  bt 2, 0x1e0600
  01e05e4  b 0x1e0608
  01e05e8  lhz 4, 782(5)
  01e05ec  cmpwi 4, 0
  01e05f0  bf 2, 0x1e0608
  01e05f4  lwz 4, 764(5)
  01e05f8  cmpw 4, 3
  01e05fc  bf 2, 0x1e0608
  01e0600  li 3, 1
  01e0604  b 0x1e060c
  01e0608  li 3, 0
  01e060c  blr

UpdateMoby_1150:   # 0x1e0638, 0xa90 bytes
  01e0638  stdu 1, -208(1)
  01e063c  mflr 0
  01e0640  std 0, 224(1)
  01e0644  stfd 28, 176(1)
  01e0648  stfd 29, 184(1)
  01e064c  stfd 30, 192(1)
  01e0650  stfd 31, 200(1)
  01e0654  std 29, 152(1)
  01e0658  std 30, 160(1)
  01e065c  lwz 30, 120(3)
  01e0660  std 31, 168(1)
  01e0664  std 26, 128(1)
  01e0668  li 29, 0
  01e066c  ori 31, 3, 0
  01e0670  std 28, 144(1)
  01e0674  ori 26, 29, 0
  01e0678  lwz 28, 180(30)
  01e067c  std 27, 136(1)
  01e0680  cmpwi 28, -1
  01e0684  bt 2, 0x1e1090
  01e0688  lis 3, 165
  01e068c  slwi 4, 28, 2
  01e0690  addic 28, 3, 7136
  01e0694  extsw 4, 4
  01e0698  lwz 3, 192(30)
  01e069c  cmpwi 3, -1
  01e06a0  lwzx 28, 28, 4
  01e06a4  bt 2, 0x1e0728
  01e06a8  lis 5, 151
  01e06ac  extsw 4, 3
  01e06b0  addic 3, 5, -25376
  01e06b4  addic 3, 3, 128
  01e06b8  bl 0x110b70
  01e06bc  nop
  01e06c0  cmpwi 3, 0
  01e06c4  bf 2, 0x1e0728
  01e06c8  lis 3, 165
  01e06cc  addic 5, 3, 17860
  01e06d0  lhz 3, 178(31)
  01e06d4  extsh 4, 3
  01e06d8  lbzx 5, 5, 4
  01e06dc  cmpwi 5, 0
  01e06e0  bf 2, 0x1e0728
  01e06e4  lis 6, 151
  01e06e8  lis 5, 161
  01e06ec  srawi 4, 4, 5
  01e06f0  addic 5, 5, -13028
  01e06f4  sldi 4, 4, 2
  01e06f8  lwz 6, -25488(6)
  01e06fc  clrlwi 3, 3, 27
  01e0700  addc 4, 4, 5
  01e0704  slwi 5, 6, 8
  01e0708  clrldi 4, 4, 32
  01e070c  extsw 5, 5
  01e0710  li 6, 1
  01e0714  slw 3, 6, 3
  01e0718  lwzx 4, 4, 5
  01e071c  and 3, 4, 3
  01e0720  cmpwi 3, 0
  01e0724  bt 2, 0x1e07b0
  01e0728  lwz 3, 192(30)
  01e072c  cmpwi 3, -1
  01e0730  bt 2, 0x1e07ac
  01e0734  lhz 5, 178(31)
  01e0738  lis 4, 151
  01e073c  extsh 6, 5
  01e0740  lis 3, 161
  01e0744  srawi 6, 6, 5
  01e0748  addic 3, 3, -13028
  01e074c  sldi 6, 6, 2
  01e0750  lwz 4, -25488(4)
  01e0754  lis 7, 165
  01e0758  addc 3, 6, 3
  01e075c  extsh 6, 5
  01e0760  slwi 4, 4, 8
  01e0764  srawi 6, 6, 5
  01e0768  extsw 4, 4
  01e076c  clrldi 3, 3, 32
  01e0770  addic 7, 7, 19920
  01e0774  sldi 6, 6, 2
  01e0778  clrlwi 8, 5, 27
  01e077c  li 9, 1
  01e0780  clrlwi 5, 5, 27
  01e0784  lwzx 10, 3, 4
  01e0788  slw 8, 9, 8
  01e078c  slw 5, 9, 5
  01e0790  lwzx 9, 7, 6
  01e0794  or 8, 10, 8
  01e0798  li 11, -1
  01e079c  or 5, 9, 5
  01e07a0  stwx 8, 3, 4
  01e07a4  stwx 5, 7, 6
  01e07a8  stw 11, 192(30)
  01e07ac  li 29, 1
  01e07b0  lfs 31, 16(31)
  01e07b4  addic 3, 30, 186
  01e07b8  lfs 30, 20(31)
  01e07bc  lfs 29, 24(31)
  01e07c0  bl 0x4fffb4
  01e07c4  nop
  01e07c8  lbz 3, 32(31)
  01e07cc  cmpwi 3, 0
  01e07d0  bf 2, 0x1e0890
  01e07d4  lis 3, 30
  01e07d8  li 4, 4
  01e07dc  lwz 6, 160(30)
  01e07e0  addi 3, 3, 1552
  01e07e4  li 5, 5
  01e07e8  lfs 1, 0(3)
  01e07ec  stw 26, 32(30)
  01e07f0  clrlwi 3, 6, 24
  01e07f4  sth 26, 36(30)
  01e07f8  stb 4, 40(30)
  01e07fc  cmpwi 3, 0
  01e0800  sth 5, 62(30)
  01e0804  stb 6, 188(31)
  01e0808  bf 2, 0x1e0818
  01e080c  lis 3, 30
  01e0810  addi 3, 3, 1552
  01e0814  lfs 1, 4(3)
  01e0818  fmr 2, 1
  01e081c  ori 27, 26, 0
  01e0820  stfs 2, 164(30)
  01e0824  bl 0x502758
  01e0828  nop
  01e082c  cmpwi 3, 0
  01e0830  bt 2, 0x1e083c
  01e0834  lwz 27, 0(28)
  01e0838  addic 27, 27, -1
  01e083c  sldi 3, 27, 4
  01e0840  li 4, 1
  01e0844  addc 3, 28, 3
  01e0848  li 5, 255
  01e084c  clrldi 3, 3, 32
  01e0850  li 6, -1
  01e0854  lfs 1, 16(3)
  01e0858  stfs 1, 16(31)
  01e085c  lfs 1, 20(3)
  01e0860  stfs 1, 20(31)
  01e0864  lfs 1, 24(3)
  01e0868  stfs 1, 24(31)
  01e086c  lfs 1, 28(3)
  01e0870  stfs 1, 28(31)
  01e0874  sth 26, 186(30)
  01e0878  stw 26, 168(30)
  01e087c  stw 26, 188(30)
  01e0880  stb 4, 32(31)
  01e0884  stb 5, 48(31)
  01e0888  sth 5, 50(31)
  01e088c  stw 6, 196(30)
  01e0890  lbz 3, 188(31)
  01e0894  cmpwi 3, 0
  01e0898  cmpwi 1, 3, -1
  01e089c  cmpwi 6, 3, 1
  01e08a0  cmpwi 7, 3, 2
  01e08a4  bt 1, 0x1e08b4
  01e08a8  cmpwi 6, 29, 0
  01e08ac  bf 5, 0x1e0fb4
  01e08b0  b 0x1e08c4
  01e08b4  cmpwi 1, 29, 0
  01e08b8  bf 25, 0x1e0a3c
  01e08bc  bf 29, 0x1e0bc8
  01e08c0  b 0x1e0fb4
  01e08c4  bt 26, 0x1e0fb4
  01e08c8  lhz 3, 184(30)
  01e08cc  cmpwi 3, 0
  01e08d0  bt 2, 0x1e091c
  01e08d4  lis 3, 151
  01e08d8  addic 3, 3, -25376
  01e08dc  lwz 4, 8332(3)
  01e08e0  cmpwi 4, 3
  01e08e4  bt 2, 0x1e08f4
  01e08e8  lwz 4, 8324(3)
  01e08ec  cmpwi 4, 28
  01e08f0  bf 2, 0x1e0904
  01e08f4  lwz 3, 1272(3)
  01e08f8  cmpw 3, 31
  01e08fc  bt 2, 0x1e099c
  01e0900  b 0x1e091c
  01e0904  lhz 4, 782(3)
  01e0908  cmpwi 4, 0
  01e090c  bf 2, 0x1e091c
  01e0910  lwz 3, 764(3)
  01e0914  cmpw 3, 31
  01e0918  bt 2, 0x1e099c
  01e091c  lwz 4, 0(28)
  01e0920  lis 3, 151
  01e0924  slwi 4, 4, 4
  01e0928  addic 3, 3, -25376
  01e092c  addc 4, 28, 4
  01e0930  clrldi 4, 4, 32
  01e0934  lfs 1, 132(3)
  01e0938  lfs 2, 128(3)
  01e093c  lfs 3, 20(28)
  01e0940  lfs 4, 4(4)
  01e0944  fsubs 3, 1, 3
  01e0948  fsubs 1, 1, 4
  01e094c  lfs 5, 0(4)
  01e0950  fsubs 4, 2, 5
  01e0954  lfs 5, 16(28)
  01e0958  lfs 6, 136(3)
  01e095c  fsubs 2, 2, 5
  01e0960  lfs 5, 8(4)
  01e0964  lfs 7, 24(28)
  01e0968  fsubs 5, 6, 5
  01e096c  fmuls 3, 3, 3
  01e0970  fmuls 1, 1, 1
  01e0974  fsubs 6, 6, 7
  01e0978  fmadds 2, 2, 2, 3
  01e097c  fmadds 1, 4, 4, 1
  01e0980  fmadds 2, 6, 6, 2
  01e0984  fmadds 1, 5, 5, 1
  01e0988  fsqrts 2, 2
  01e098c  fsqrts 1, 1
  01e0990  fcmpu 0, 1, 2
  01e0994  cror 6, 0, 2
  01e0998  bt 6, 0x1e0fb4
  01e099c  lwz 3, 200(30)
  01e09a0  cmpwi 3, 0
  01e09a4  bf 2, 0x1e0a00
  01e09a8  lis 3, 151
  01e09ac  addic 3, 3, -25376
  01e09b0  lwz 4, 8332(3)
  01e09b4  cmpwi 4, 3
  01e09b8  bt 2, 0x1e09c8
  01e09bc  lwz 4, 8324(3)
  01e09c0  cmpwi 4, 28
  01e09c4  bf 2, 0x1e09d8
  01e09c8  lwz 3, 1272(3)
  01e09cc  cmpw 3, 31
  01e09d0  bt 2, 0x1e09f0
  01e09d4  b 0x1e0a00
  01e09d8  lhz 4, 782(3)
  01e09dc  cmpwi 4, 0
  01e09e0  bf 2, 0x1e0a00
  01e09e4  lwz 3, 764(3)
  01e09e8  cmpw 3, 31
  01e09ec  bf 2, 0x1e0a00
  01e09f0  li 3, 114
  01e09f4  li 4, 1
  01e09f8  bl 0xb72b0
  01e09fc  nop
  01e0a00  lis 4, 30
  01e0a04  li 3, 2
  01e0a08  addi 4, 4, 1552
  01e0a0c  stb 3, 188(31)
  01e0a10  lfs 1, 176(30)
  01e0a14  lis 3, 114
  01e0a18  lfs 2, 8(4)
  01e0a1c  lfs 3, 12(4)
  01e0a20  fmuls 1, 1, 2
  01e0a24  lfs 4, -3056(3)
  01e0a28  sth 26, 184(30)
  01e0a2c  fmuls 1, 4, 1
  01e0a30  fdivs 1, 3, 1
  01e0a34  stfs 1, 172(30)
  01e0a38  b 0x1e0fb4
  01e0a3c  bt 6, 0x1e0fb4
  01e0a40  lhz 3, 184(30)
  01e0a44  cmpwi 3, 0
  01e0a48  bt 2, 0x1e0a94
  01e0a4c  lis 3, 151
  01e0a50  addic 3, 3, -25376
  01e0a54  lwz 4, 8332(3)
  01e0a58  cmpwi 4, 3
  01e0a5c  bt 2, 0x1e0a6c
  01e0a60  lwz 4, 8324(3)
  01e0a64  cmpwi 4, 28
  01e0a68  bf 2, 0x1e0a7c
  01e0a6c  lwz 3, 1272(3)
  01e0a70  cmpw 3, 31
  01e0a74  bt 2, 0x1e0b14
  01e0a78  b 0x1e0a94
  01e0a7c  lhz 4, 782(3)
  01e0a80  cmpwi 4, 0
  01e0a84  bf 2, 0x1e0a94
  01e0a88  lwz 3, 764(3)
  01e0a8c  cmpw 3, 31
  01e0a90  bt 2, 0x1e0b14
  01e0a94  lwz 4, 0(28)
  01e0a98  lis 3, 151
  01e0a9c  lfs 1, 20(28)
  01e0aa0  slwi 4, 4, 4
  01e0aa4  addic 3, 3, -25376
  01e0aa8  addc 4, 28, 4
  01e0aac  clrldi 4, 4, 32
  01e0ab0  lfs 2, 132(3)
  01e0ab4  lfs 3, 128(3)
  01e0ab8  lfs 4, 16(28)
  01e0abc  fsubs 1, 2, 1
  01e0ac0  lfs 5, 4(4)
  01e0ac4  lfs 6, 0(4)
  01e0ac8  fsubs 2, 2, 5
  01e0acc  fsubs 4, 3, 4
  01e0ad0  fsubs 3, 3, 6
  01e0ad4  lfs 5, 136(3)
  01e0ad8  lfs 6, 24(28)
  01e0adc  lfs 7, 8(4)
  01e0ae0  fsubs 6, 5, 6
  01e0ae4  fsubs 5, 5, 7
  01e0ae8  fmuls 1, 1, 1
  01e0aec  fmuls 2, 2, 2
  01e0af0  fmadds 1, 4, 4, 1
  01e0af4  fmadds 2, 3, 3, 2
  01e0af8  fmadds 1, 6, 6, 1
  01e0afc  fmadds 2, 5, 5, 2
  01e0b00  fsqrts 1, 1
  01e0b04  fsqrts 2, 2
  01e0b08  fcmpu 0, 1, 2
  01e0b0c  cror 6, 0, 2
  01e0b10  bt 6, 0x1e0fb4
  01e0b14  lwz 3, 200(30)
  01e0b18  cmpwi 3, 0
  01e0b1c  bf 2, 0x1e0b78
  01e0b20  lis 3, 151
  01e0b24  addic 3, 3, -25376
  01e0b28  lwz 4, 8332(3)
  01e0b2c  cmpwi 4, 3
  01e0b30  bt 2, 0x1e0b40
  01e0b34  lwz 4, 8324(3)
  01e0b38  cmpwi 4, 28
  01e0b3c  bf 2, 0x1e0b50
  01e0b40  lwz 3, 1272(3)
  01e0b44  cmpw 3, 31
  01e0b48  bt 2, 0x1e0b68
  01e0b4c  b 0x1e0b78
  01e0b50  lhz 4, 782(3)
  01e0b54  cmpwi 4, 0
  01e0b58  bf 2, 0x1e0b78
  01e0b5c  lwz 3, 764(3)
  01e0b60  cmpw 3, 31
  01e0b64  bf 2, 0x1e0b78
  01e0b68  li 3, 114
  01e0b6c  li 4, 1
  01e0b70  bl 0xb72b0
  01e0b74  nop
  01e0b78  li 4, 0
  01e0b7c  li 3, 1
  01e0b80  ori 5, 31, 0
  01e0b84  bl 0x15d12c
  01e0b88  nop
  01e0b8c  lis 4, 30
  01e0b90  li 3, 2
  01e0b94  addi 4, 4, 1552
  01e0b98  stb 3, 188(31)
  01e0b9c  lfs 1, 176(30)
  01e0ba0  lfs 2, 8(4)
  01e0ba4  lis 3, 114
  01e0ba8  fmuls 1, 1, 2
  01e0bac  lfs 3, -3056(3)
  01e0bb0  lfs 4, 4(4)
  01e0bb4  sth 26, 184(30)
  01e0bb8  fmuls 1, 3, 1
  01e0bbc  fdivs 1, 4, 1
  01e0bc0  stfs 1, 172(30)
  01e0bc4  b 0x1e0fb4
  01e0bc8  lhz 3, 186(30)
  01e0bcc  cmpwi 3, 0
  01e0bd0  bf 2, 0x1e0cb0
  01e0bd4  lis 3, 30
  01e0bd8  lwz 4, 188(30)
  01e0bdc  addi 3, 3, 1552
  01e0be0  cmpwi 4, 0
  01e0be4  lfs 28, 0(3)
  01e0be8  bf 0, 0x1e0d0c
  01e0bec  lis 3, 151
  01e0bf0  lfs 1, 20(31)
  01e0bf4  addic 3, 3, -25376
  01e0bf8  lfs 2, 16(31)
  01e0bfc  lis 4, 30
  01e0c00  lfs 3, 132(3)
  01e0c04  lfs 4, 128(3)
  01e0c08  fsubs 1, 1, 3
  01e0c0c  fsubs 2, 2, 4
  01e0c10  addi 4, 4, 1552
  01e0c14  fmuls 1, 1, 1
  01e0c18  fmadds 1, 2, 2, 1
  01e0c1c  lfs 2, 16(4)
  01e0c20  fsqrts 1, 1
  01e0c24  fcmpu 0, 1, 2
  01e0c28  cror 6, 1, 2
  01e0c2c  bt 6, 0x1e0d0c
  01e0c30  lfs 1, 136(3)
  01e0c34  lis 4, 30
  01e0c38  lfs 2, 24(31)
  01e0c3c  addi 4, 4, 1552
  01e0c40  fsubs 3, 1, 2
  01e0c44  lfs 4, 20(4)
  01e0c48  fabs 3, 3
  01e0c4c  fcmpu 0, 3, 4
  01e0c50  cror 6, 1, 2
  01e0c54  bt 6, 0x1e0d0c
  01e0c58  fsubs 1, 2, 1
  01e0c5c  lis 3, 30
  01e0c60  addi 3, 3, 1552
  01e0c64  lfs 2, 4(3)
  01e0c68  fcmpu 0, 1, 2
  01e0c6c  cror 6, 0, 2
  01e0c70  bt 6, 0x1e0d0c
  01e0c74  lis 3, 30
  01e0c78  li 4, 24
  01e0c7c  vspltisw 2, -1
  01e0c80  addi 3, 3, 1552
  01e0c84  lis 5, 114
  01e0c88  li 6, -3056
  01e0c8c  vslw 2, 2, 2
  01e0c90  <unknown>
  01e0c94  li 3, 186
  01e0c98  vspltw 3, 3, 0
  01e0c9c  <unknown>
  01e0ca0  vmaddfp 2, 4, 3, 2
  01e0ca4  vctsxs 2, 2, 0
  01e0ca8  vsplth 2, 2, 1
  01e0cac  stvehx 2, 3, 30
  01e0cb0  stw 26, 168(30)
  01e0cb4  lwz 26, 196(30)
  01e0cb8  cmpwi 26, -1
  01e0cbc  bt 2, 0x1e0d00
  01e0cc0  sldi 3, 26, 7
  01e0cc4  sldi 5, 26, 4
  01e0cc8  lis 4, 150
  01e0ccc  subc 3, 3, 5
  01e0cd0  addic 4, 4, 14176
  01e0cd4  extsw 3, 3
  01e0cd8  addc 3, 4, 3
  01e0cdc  lwz 4, 136(3)
  01e0ce0  cmpw 4, 31
  01e0ce4  bf 2, 0x1e0d00
  01e0ce8  lbz 3, 116(3)
  01e0cec  cmpwi 3, 0
  01e0cf0  bt 2, 0x1e0d00
  01e0cf4  extsw 3, 26
  01e0cf8  bl 0x15cdb0
  01e0cfc  nop
  01e0d00  li 3, -1
  01e0d04  stw 3, 196(30)
  01e0d08  b 0x1e0fb4
  01e0d0c  ori 3, 31, 0
  01e0d10  lwz 4, 196(30)
  01e0d14  extsw 4, 4
  01e0d18  bl 0x15cc7c
  01e0d1c  nop
  01e0d20  cmpwi 3, 0
  01e0d24  bf 2, 0x1e0d40
  01e0d28  li 3, 0
  01e0d2c  li 4, 4
  01e0d30  ori 5, 31, 0
  01e0d34  bl 0x15d12c
  01e0d38  nop
  01e0d3c  stw 3, 196(30)
  01e0d40  lis 3, 114
  01e0d44  lfs 2, 172(30)
  01e0d48  lfs 1, 168(30)
  01e0d4c  lfs 3, -3052(3)
  01e0d50  fmadds 1, 2, 3, 1
  01e0d54  fabs 3, 2
  01e0d58  fabs 4, 1
  01e0d5c  stfs 1, 168(30)
  01e0d60  fcmpu 0, 4, 3
  01e0d64  cror 6, 0, 2
  01e0d68  bt 6, 0x1e0d74
  01e0d6c  fmr 1, 2
  01e0d70  stfs 2, 168(30)
  01e0d74  lfs 3, 164(30)
  01e0d78  lis 3, 30
  01e0d7c  fadds 1, 3, 1
  01e0d80  addi 3, 3, 1552
  01e0d84  stfs 1, 164(30)
  01e0d88  lfs 3, 28(3)
  01e0d8c  fsubs 1, 1, 3
  01e0d90  fabs 1, 1
  01e0d94  fcmpu 0, 1, 3
  01e0d98  cror 6, 0, 2
  01e0d9c  bt 6, 0x1e0edc
  01e0da0  lwz 3, 200(30)
  01e0da4  cmpwi 3, 0
  01e0da8  bf 2, 0x1e0e08
  01e0dac  lis 3, 151
  01e0db0  addic 3, 3, -25376
  01e0db4  lwz 4, 8332(3)
  01e0db8  cmpwi 4, 3
  01e0dbc  bt 2, 0x1e0dcc
  01e0dc0  lwz 4, 8324(3)
  01e0dc4  cmpwi 4, 28
  01e0dc8  bf 2, 0x1e0ddc
  01e0dcc  lwz 3, 1272(3)
  01e0dd0  cmpw 3, 31
  01e0dd4  bt 2, 0x1e0df4
  01e0dd8  b 0x1e0e08
  01e0ddc  lhz 4, 782(3)
  01e0de0  cmpwi 4, 0
  01e0de4  bf 2, 0x1e0e08
  01e0de8  lwz 3, 764(3)
  01e0dec  cmpw 3, 31
  01e0df0  bf 2, 0x1e0e08
  01e0df4  li 3, 0
  01e0df8  li 4, 1
  01e0dfc  bl 0xb72b0
  01e0e00  nop
  01e0e04  lfs 2, 172(30)
  01e0e08  fcmpu 0, 2, 28
  01e0e0c  cror 6, 0, 2
  01e0e10  bt 6, 0x1e0e28
  01e0e14  lis 3, 30
  01e0e18  stb 26, 188(31)
  01e0e1c  addi 3, 3, 1552
  01e0e20  lfs 28, 4(3)
  01e0e24  b 0x1e0e30
  01e0e28  li 3, 1
  01e0e2c  stb 3, 188(31)
  01e0e30  li 3, 2
  01e0e34  stfs 28, 164(30)
  01e0e38  li 4, 0
  01e0e3c  ori 5, 31, 0
  01e0e40  bl 0x15d12c
  01e0e44  nop
  01e0e48  lis 3, 30
  01e0e4c  vspltisw 2, -1
  01e0e50  li 4, 32
  01e0e54  stw 26, 168(30)
  01e0e58  addi 3, 3, 1552
  01e0e5c  lis 5, 114
  01e0e60  li 6, -3056
  01e0e64  vslw 2, 2, 2
  01e0e68  <unknown>
  01e0e6c  li 3, 186
  01e0e70  vspltw 3, 3, 0
  01e0e74  <unknown>
  01e0e78  lwz 26, 196(30)
  01e0e7c  vmaddfp 2, 4, 3, 2
  01e0e80  cmpwi 26, -1
  01e0e84  vctsxs 2, 2, 0
  01e0e88  vsplth 2, 2, 1
  01e0e8c  stvehx 2, 3, 30
  01e0e90  bt 2, 0x1e0ed4
  01e0e94  sldi 3, 26, 7
  01e0e98  sldi 5, 26, 4
  01e0e9c  lis 4, 150
  01e0ea0  subc 3, 3, 5
  01e0ea4  addic 4, 4, 14176
  01e0ea8  extsw 3, 3
  01e0eac  addc 3, 4, 3
  01e0eb0  lwz 4, 136(3)
  01e0eb4  cmpw 4, 31
  01e0eb8  bf 2, 0x1e0ed4
  01e0ebc  lbz 3, 116(3)
  01e0ec0  cmpwi 3, 0
  01e0ec4  bt 2, 0x1e0ed4
  01e0ec8  extsw 3, 26
  01e0ecc  bl 0x15cdb0
  01e0ed0  nop
  01e0ed4  li 3, -1
  01e0ed8  stw 3, 196(30)
  01e0edc  lwz 3, 0(28)
  01e0ee0  addic 3, 3, -1
  01e0ee4  extsw 3, 3
  01e0ee8  bl 0x502730
  01e0eec  nop
  01e0ef0  lfs 2, 164(30)
  01e0ef4  fmuls 1, 1, 2
  01e0ef8  bl 0x502758
  01e0efc  nop
  01e0f00  ori 29, 3, 0
  01e0f04  bl 0x502730
  01e0f08  nop
  01e0f0c  fmr 28, 1
  01e0f10  lwz 3, 0(28)
  01e0f14  addic 3, 3, -1
  01e0f18  extsw 3, 3
  01e0f1c  bl 0x502730
  01e0f20  nop
  01e0f24  lwz 4, 0(28)
  01e0f28  lfs 2, 164(30)
  01e0f2c  sldi 3, 29, 4
  01e0f30  addic 4, 4, -1
  01e0f34  fmsubs 1, 1, 2, 28
  01e0f38  cmpw 29, 4
  01e0f3c  bf 2, 0x1e0f5c
  01e0f40  addc 3, 28, 3
  01e0f44  clrldi 3, 3, 32
  01e0f48  lfs 4, 16(3)
  01e0f4c  lfs 3, 20(3)
  01e0f50  lfs 2, 24(3)
  01e0f54  lfs 1, 28(3)
  01e0f58  b 0x1e0f9c
  01e0f5c  addc 3, 28, 3
  01e0f60  clrldi 3, 3, 32
  01e0f64  lfs 2, 32(3)
  01e0f68  lfs 4, 16(3)
  01e0f6c  lfs 3, 36(3)
  01e0f70  lfs 5, 20(3)
  01e0f74  fsubs 2, 2, 4
  01e0f78  lfs 6, 40(3)
  01e0f7c  lfs 7, 24(3)
  01e0f80  fsubs 3, 3, 5
  01e0f84  lfs 8, 44(3)
  01e0f88  fsubs 6, 6, 7
  01e0f8c  fmadds 4, 1, 2, 4
  01e0f90  fmadds 3, 1, 3, 5
  01e0f94  fmadds 2, 1, 6, 7
  01e0f98  fmr 1, 8
  01e0f9c  fsubs 5, 2, 29
  01e0fa0  stfs 4, 16(31)
  01e0fa4  stfs 3, 20(31)
  01e0fa8  stfs 2, 24(31)
  01e0fac  stfs 1, 28(31)
  01e0fb0  stfs 5, 188(30)
  01e0fb4  lfs 1, 16(31)
  01e0fb8  lfs 2, 20(31)
  01e0fbc  addic 5, 31, 64
  01e0fc0  fsubs 1, 1, 31
  01e0fc4  lfs 3, 24(31)
  01e0fc8  fsubs 2, 2, 30
  01e0fcc  lfs 4, 28(31)
  01e0fd0  fsubs 3, 3, 29
  01e0fd4  addic 3, 30, 96
  01e0fd8  stfs 4, 124(1)
  01e0fdc  ori 6, 5, 0
  01e0fe0  addic 4, 1, 112
  01e0fe4  stfs 1, 112(1)
  01e0fe8  stfs 2, 116(1)
  01e0fec  stfs 3, 120(1)
  01e0ff0  bl 0x112900
  01e0ff4  nop
  01e0ff8  lis 3, 151
  01e0ffc  addic 3, 3, -25376
  01e1000  lwz 5, 8332(3)
  01e1004  lwz 4, 1272(3)
  01e1008  cmpwi 5, 3
  01e100c  bt 2, 0x1e101c
  01e1010  lwz 5, 8324(3)
  01e1014  cmpwi 5, 28
  01e1018  bf 2, 0x1e1028
  01e101c  cmpw 4, 31
  01e1020  bt 2, 0x1e1090
  01e1024  b 0x1e1040
  01e1028  lhz 4, 782(3)
  01e102c  cmpwi 4, 0
  01e1030  bf 2, 0x1e1040
  01e1034  lwz 4, 764(3)
  01e1038  cmpw 4, 31
  01e103c  bt 2, 0x1e1090
  01e1040  lfs 1, 20(31)
  01e1044  lfs 2, 132(3)
  01e1048  lfs 3, 16(31)
  01e104c  fsubs 1, 1, 2
  01e1050  lfs 2, 128(3)
  01e1054  fsubs 2, 3, 2
  01e1058  lis 3, 30
  01e105c  addi 3, 3, 1552
  01e1060  fmuls 1, 1, 1
  01e1064  fmadds 1, 2, 2, 1
  01e1068  lfs 2, 16(3)
  01e106c  fsqrts 1, 1
  01e1070  fcmpu 0, 1, 2
  01e1074  cror 6, 0, 2
  01e1078  bt 6, 0x1e1090
  01e107c  lhz 3, 186(30)
  01e1080  cmpwi 3, 0
  01e1084  bf 2, 0x1e1090
  01e1088  li 3, 1
  01e108c  sth 3, 184(30)
  01e1090  ld 0, 224(1)
  01e1094  mtlr 0
  01e1098  lfd 28, 176(1)
  01e109c  lfd 29, 184(1)
  01e10a0  lfd 30, 192(1)
  01e10a4  lfd 31, 200(1)
  01e10a8  ld 26, 128(1)
  01e10ac  ld 27, 136(1)
  01e10b0  ld 28, 144(1)
  01e10b4  ld 29, 152(1)
  01e10b8  ld 30, 160(1)
  01e10bc  ld 31, 168(1)
  01e10c0  addi 1, 1, 208
  01e10c4  blr
