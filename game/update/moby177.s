# game/update/moby177.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M177_002b4818:   # 0x2b4818, 0x1b84 bytes
  02b4818  stdu 1, -1424(1)
  02b481c  mflr 0
  02b4820  std 0, 1440(1)
  02b4824  stfd 14, 1280(1)
  02b4828  stfd 15, 1288(1)
  02b482c  stfd 16, 1296(1)
  02b4830  stfd 17, 1304(1)
  02b4834  stfd 18, 1312(1)
  02b4838  stfd 19, 1320(1)
  02b483c  stfd 20, 1328(1)
  02b4840  stfd 21, 1336(1)
  02b4844  stfd 22, 1344(1)
  02b4848  stfd 23, 1352(1)
  02b484c  stfd 24, 1360(1)
  02b4850  stfd 25, 1368(1)
  02b4854  stfd 26, 1376(1)
  02b4858  stfd 27, 1384(1)
  02b485c  stfd 28, 1392(1)
  02b4860  stfd 29, 1400(1)
  02b4864  stfd 30, 1408(1)
  02b4868  stfd 31, 1416(1)
  02b486c  addi 0, 1, 1120
  02b4870  stvx 31, 0, 0
  02b4874  std 16, 1152(1)
  02b4878  lis 16, 43
  02b487c  std 22, 1200(1)
  02b4880  lis 4, 151
  02b4884  addi 16, 16, 18328
  02b4888  std 28, 1248(1)
  02b488c  ori 22, 3, 0
  02b4890  addic 3, 4, -25432
  02b4894  std 31, 1272(1)
  02b4898  lis 28, 123
  02b489c  lis 31, 266
  02b48a0  std 17, 1160(1)
  02b48a4  lfs 3, 0(16)
  02b48a8  lis 4, 123
  02b48ac  std 23, 1208(1)
  02b48b0  lwz 17, 120(22)
  02b48b4  lbz 23, 19(3)
  02b48b8  lfs 31, 30676(28)
  02b48bc  lfs 1, 1700(31)
  02b48c0  lfs 2, 30700(4)
  02b48c4  std 30, 1264(1)
  02b48c8  std 29, 1256(1)
  02b48cc  std 27, 1240(1)
  02b48d0  std 26, 1232(1)
  02b48d4  std 25, 1224(1)
  02b48d8  std 24, 1216(1)
  02b48dc  std 21, 1192(1)
  02b48e0  std 20, 1184(1)
  02b48e4  std 19, 1176(1)
  02b48e8  std 18, 1168(1)
  02b48ec  std 15, 1144(1)
  02b48f0  std 14, 1136(1)
  02b48f4  stfd 3, 1088(1)
  02b48f8  bl 0x502578
  02b48fc  nop
  02b4900  lis 30, 266
  02b4904  stfs 1, 1700(31)
  02b4908  lis 3, 123
  02b490c  lfs 1, 1704(30)
  02b4910  lfs 2, 30704(3)
  02b4914  bl 0x5025e0
  02b4918  nop
  02b491c  lis 31, 266
  02b4920  lis 3, 123
  02b4924  stfs 1, 1704(30)
  02b4928  lfs 1, 1708(31)
  02b492c  lfs 2, 30720(3)
  02b4930  bl 0x502578
  02b4934  nop
  02b4938  stfs 1, 1708(31)
  02b493c  lfs 30, 4(16)
  02b4940  li 31, 0
  02b4944  lwz 3, 32(17)
  02b4948  fmr 26, 30
  02b494c  cmpwi 3, 0
  02b4950  ori 30, 31, 0
  02b4954  std 31, 1048(1)
  02b4958  fmr 29, 26
  02b495c  bt 2, 0x2b4974
  02b4960  cmpwi 23, 0
  02b4964  bt 2, 0x2b4c10
  02b4968  lwz 3, 56(17)
  02b496c  cmpwi 3, 0
  02b4970  bf 2, 0x2b4c10
  02b4974  lwz 3, 56(17)
  02b4978  cmpwi 3, 0
  02b497c  bt 2, 0x2b4998
  02b4980  lhz 4, 66(17)
  02b4984  stw 3, 32(17)
  02b4988  sth 4, 64(17)
  02b498c  stw 31, 56(17)
  02b4990  sth 31, 66(17)
  02b4994  b 0x2b4c10
  02b4998  lis 3, 165
  02b499c  lwz 29, -27836(3)
  02b49a0  cmpwi 29, 0
  02b49a4  bt 2, 0x2b4c10
  02b49a8  lis 26, 149
  02b49ac  lis 25, 151
  02b49b0  lis 24, 165
  02b49b4  ori 27, 31, 0
  02b49b8  addic 26, 26, 5056
  02b49bc  addic 25, 25, -25376
  02b49c0  addic 24, 24, -27836
  02b49c4  lwz 3, 32(17)
  02b49c8  cmpw 29, 3
  02b49cc  bt 2, 0x2b4b28
  02b49d0  lwz 3, 56(17)
  02b49d4  cmpw 29, 3
  02b49d8  bt 2, 0x2b4b28
  02b49dc  lwz 3, 36(29)
  02b49e0  cmpwi 3, 0
  02b49e4  bt 2, 0x2b4b28
  02b49e8  lhz 3, 70(3)
  02b49ec  extsh 3, 3
  02b49f0  cmpwi 3, 5
  02b49f4  bf 2, 0x2b4b28
  02b49f8  lbz 3, 32(29)
  02b49fc  cmpwi 1, 3, 253
  02b4a00  cmpwi 3, 254
  02b4a04  cror 2, 2, 6
  02b4a08  bt 2, 0x2b4b28
  02b4a0c  ori 3, 29, 0
  02b4a10  bl 0xfcccc
  02b4a14  nop
  02b4a18  cmpwi 3, 0
  02b4a1c  bt 2, 0x2b4b28
  02b4a20  lfs 1, 20(29)
  02b4a24  lfs 2, 4(17)
  02b4a28  lfs 27, 16(29)
  02b4a2c  fsubs 2, 1, 2
  02b4a30  lfs 3, 0(17)
  02b4a34  fsubs 3, 27, 3
  02b4a38  fmuls 2, 2, 2
  02b4a3c  fmadds 28, 3, 3, 2
  02b4a40  lfs 2, 30676(28)
  02b4a44  fsqrts 28, 28
  02b4a48  fcmpu 0, 2, 28
  02b4a4c  bt 0, 0x2b4b28
  02b4a50  lfs 2, 320(26)
  02b4a54  fsubs 3, 27, 2
  02b4a58  lfs 27, 344(26)
  02b4a5c  lfs 2, 324(26)
  02b4a60  fsubs 2, 1, 2
  02b4a64  fmr 1, 3
  02b4a68  bl 0x5e8338
  02b4a6c  nop
  02b4a70  fmr 2, 1
  02b4a74  fmr 1, 27
  02b4a78  bl 0x5026a0
  02b4a7c  nop
  02b4a80  fmr 27, 1
  02b4a84  lis 3, 123
  02b4a88  lfs 1, 30684(3)
  02b4a8c  fcmpu 0, 1, 27
  02b4a90  bt 0, 0x2b4b28
  02b4a94  lfs 1, 16(29)
  02b4a98  lfs 2, 128(25)
  02b4a9c  lfs 3, 20(29)
  02b4aa0  lfs 4, 132(25)
  02b4aa4  fsubs 1, 1, 2
  02b4aa8  fsubs 2, 3, 4
  02b4aac  bl 0x5e8338
  02b4ab0  nop
  02b4ab4  lfs 2, 152(25)
  02b4ab8  bl 0x5026a0
  02b4abc  nop
  02b4ac0  lis 3, 123
  02b4ac4  lfs 2, 30680(3)
  02b4ac8  fcmpu 0, 2, 1
  02b4acc  bt 0, 0x2b4b28
  02b4ad0  lis 3, 123
  02b4ad4  lfs 1, 30676(28)
  02b4ad8  fsubs 3, 1, 28
  02b4adc  lfs 2, 30684(3)
  02b4ae0  fsubs 4, 2, 27
  02b4ae4  lis 3, 123
  02b4ae8  fdivs 1, 3, 1
  02b4aec  lfs 3, 30808(3)
  02b4af0  fdivs 2, 4, 2
  02b4af4  fmadds 1, 3, 2, 1
  02b4af8  fcmpu 0, 30, 1
  02b4afc  fcmpu 1, 29, 1
  02b4b00  cror 2, 1, 2
  02b4b04  bt 2, 0x2b4b1c
  02b4b08  fmr 29, 30
  02b4b0c  ori 30, 31, 0
  02b4b10  fmr 30, 1
  02b4b14  ori 31, 29, 0
  02b4b18  b 0x2b4b28
  02b4b1c  bf 4, 0x2b4b28
  02b4b20  fmr 29, 1
  02b4b24  ori 30, 29, 0
  02b4b28  addic 27, 27, 4
  02b4b2c  extsw 3, 27
  02b4b30  lwzx 29, 24, 3
  02b4b34  cmpwi 29, 0
  02b4b38  bf 2, 0x2b49c4
  02b4b3c  cmpwi 31, 0
  02b4b40  bt 2, 0x2b4b78
  02b4b44  lwz 3, 32(17)
  02b4b48  cmpwi 3, 0
  02b4b4c  bt 2, 0x2b4b58
  02b4b50  ori 30, 31, 0
  02b4b54  b 0x2b4b78
  02b4b58  ld 6, 1048(1)
  02b4b5c  li 3, 1
  02b4b60  stw 31, 32(17)
  02b4b64  li 4, 0
  02b4b68  ori 5, 22, 0
  02b4b6c  sth 6, 64(17)
  02b4b70  bl 0x15d12c
  02b4b74  nop
  02b4b78  cmpwi 30, 0
  02b4b7c  bt 2, 0x2b4c10
  02b4b80  cmpwi 23, 0
  02b4b84  bt 2, 0x2b4c10
  02b4b88  lfs 1, 4(17)
  02b4b8c  lfs 3, 20(31)
  02b4b90  lfs 4, 0(17)
  02b4b94  fsubs 1, 1, 3
  02b4b98  lfs 2, 16(31)
  02b4b9c  lfs 6, 8(17)
  02b4ba0  fsubs 5, 4, 2
  02b4ba4  lfs 4, 24(31)
  02b4ba8  fsubs 6, 6, 4
  02b4bac  fmuls 1, 1, 1
  02b4bb0  fmadds 1, 5, 5, 1
  02b4bb4  lfs 5, 30676(28)
  02b4bb8  fmadds 1, 6, 6, 1
  02b4bbc  fsqrts 1, 1
  02b4bc0  fcmpu 0, 5, 1
  02b4bc4  cror 6, 0, 2
  02b4bc8  bt 6, 0x2b4c10
  02b4bcc  lfs 6, 20(30)
  02b4bd0  lfs 7, 16(30)
  02b4bd4  fsubs 3, 3, 6
  02b4bd8  fsubs 2, 2, 7
  02b4bdc  lfs 6, 24(30)
  02b4be0  fsubs 4, 4, 6
  02b4be4  fmuls 3, 3, 3
  02b4be8  fmadds 2, 2, 2, 3
  02b4bec  fmadds 2, 4, 4, 2
  02b4bf0  fsqrts 2, 2
  02b4bf4  fadds 1, 1, 2
  02b4bf8  fcmpu 0, 1, 5
  02b4bfc  cror 6, 1, 2
  02b4c00  bt 6, 0x2b4c10
  02b4c04  ld 3, 1048(1)
  02b4c08  stw 30, 56(17)
  02b4c0c  sth 3, 66(17)
  02b4c10  fmr 30, 31
  02b4c14  fmr 31, 21
  02b4c18  lwz 3, 32(17)
  02b4c1c  fmr 29, 26
  02b4c20  cmpwi 3, 0
  02b4c24  fmr 28, 31
  02b4c28  fmr 27, 28
  02b4c2c  bt 2, 0x2b4c7c
  02b4c30  bl 0xfcccc
  02b4c34  nop
  02b4c38  lwz 4, 32(17)
  02b4c3c  lfs 1, 4(17)
  02b4c40  lfs 28, 20(4)
  02b4c44  lfs 21, 16(4)
  02b4c48  fsubs 1, 1, 28
  02b4c4c  lfs 27, 24(4)
  02b4c50  lfs 2, 16(3)
  02b4c54  lfs 3, 0(17)
  02b4c58  fadds 27, 27, 2
  02b4c5c  fsubs 3, 3, 21
  02b4c60  lfs 2, 8(17)
  02b4c64  fmuls 1, 1, 1
  02b4c68  fsubs 2, 2, 27
  02b4c6c  fmadds 1, 3, 3, 1
  02b4c70  fmadds 29, 2, 2, 1
  02b4c74  fsqrts 29, 29
  02b4c78  fmr 30, 29
  02b4c7c  lwz 3, 56(17)
  02b4c80  stfs 27, 1040(1)
  02b4c84  stfs 28, 1032(1)
  02b4c88  cmpwi 3, 0
  02b4c8c  stfs 31, 1060(1)
  02b4c90  stfs 31, 1064(1)
  02b4c94  stfs 31, 1056(1)
  02b4c98  bt 2, 0x2b4cf0
  02b4c9c  stfs 27, 1040(1)
  02b4ca0  stfs 28, 1032(1)
  02b4ca4  bl 0xfcccc
  02b4ca8  nop
  02b4cac  lwz 4, 56(17)
  02b4cb0  lfs 1, 16(3)
  02b4cb4  lfs 2, 20(4)
  02b4cb8  lfs 3, 16(4)
  02b4cbc  fsubs 4, 28, 2
  02b4cc0  lfs 6, 24(4)
  02b4cc4  fsubs 5, 21, 3
  02b4cc8  fadds 1, 6, 1
  02b4ccc  stfs 3, 1060(1)
  02b4cd0  stfs 2, 1056(1)
  02b4cd4  fmuls 4, 4, 4
  02b4cd8  fsubs 6, 27, 1
  02b4cdc  stfs 1, 1064(1)
  02b4ce0  fmadds 4, 5, 5, 4
  02b4ce4  fmadds 4, 6, 6, 4
  02b4ce8  fsqrts 30, 4
  02b4cec  fadds 30, 30, 29
  02b4cf0  li 3, 0
  02b4cf4  lis 4, 127
  02b4cf8  subc 3, 3, 23
  02b4cfc  lis 6, 32
  02b4d00  cntlzw 3, 3
  02b4d04  extsw 5, 23
  02b4d08  ori 4, 4, 8224
  02b4d0c  ori 6, 6, 32544
  02b4d10  sldi 3, 3, 58
  02b4d14  subc 4, 4, 6
  02b4d18  std 5, 1104(1)
  02b4d1c  sradi 3, 3, 63
  02b4d20  std 22, 1080(1)
  02b4d24  lis 5, 123
  02b4d28  std 23, 1072(1)
  02b4d2c  and 3, 3, 4
  02b4d30  stfs 26, 140(1)
  02b4d34  stfs 26, 136(1)
  02b4d38  addc 3, 6, 3
  02b4d3c  addic 31, 1, 256
  02b4d40  addic 7, 1, 128
  02b4d44  stw 3, 30756(5)
  02b4d48  stfs 26, 132(1)
  02b4d4c  stfs 26, 128(1)
  02b4d50  lfs 1, 8(16)
  02b4d54  lfd 2, 1104(1)
  02b4d58  ori 3, 31, 0
  02b4d5c  fcfid 2, 2
  02b4d60  ori 4, 22, 0
  02b4d64  lis 5, 33
  02b4d68  frsp 2, 2
  02b4d6c  fadds 29, 2, 1
  02b4d70  fmr 1, 29
  02b4d74  bl 0x10581c
  02b4d78  nop
  02b4d7c  li 3, 5
  02b4d80  lhz 6, 166(22)
  02b4d84  li 4, 1
  02b4d88  li 5, 20
  02b4d8c  lis 15, 151
  02b4d90  stb 3, 280(1)
  02b4d94  stb 4, 281(1)
  02b4d98  addic 15, 15, -25376
  02b4d9c  sth 6, 282(1)
  02b4da0  ori 3, 17, 0
  02b4da4  sth 5, 62(17)
  02b4da8  ori 7, 31, 0
  02b4dac  lfs 2, 12(16)
  02b4db0  li 5, 16
  02b4db4  lwz 6, 8320(15)
  02b4db8  fmr 1, 2
  02b4dbc  stfs 2, 1100(1)
  02b4dc0  bl 0x5e598
  02b4dc4  nop
  02b4dc8  lfs 2, 16(17)
  02b4dcc  lfs 1, 0(17)
  02b4dd0  fsubs 2, 2, 1
  02b4dd4  stfs 2, 144(1)
  02b4dd8  lfs 3, 20(17)
  02b4ddc  lfs 1, 4(17)
  02b4de0  fsubs 3, 3, 1
  02b4de4  fmuls 1, 3, 3
  02b4de8  stfs 3, 148(1)
  02b4dec  lfs 6, 24(17)
  02b4df0  lfs 4, 8(17)
  02b4df4  fsubs 6, 6, 4
  02b4df8  fmadds 7, 2, 2, 1
  02b4dfc  fmr 1, 26
  02b4e00  fmadds 7, 6, 6, 7
  02b4e04  fmr 4, 1
  02b4e08  stfs 6, 152(1)
  02b4e0c  lfs 5, 28(17)
  02b4e10  stfs 29, 1096(1)
  02b4e14  stfs 5, 156(1)
  02b4e18  fsqrts 8, 7
  02b4e1c  fmr 5, 4
  02b4e20  fcmpu 0, 8, 5
  02b4e24  bt 2, 0x2b4e70
  02b4e28  frsqrte 1, 7
  02b4e2c  lfs 4, 16(16)
  02b4e30  lfs 5, 20(16)
  02b4e34  fmuls 8, 7, 1
  02b4e38  fmuls 9, 4, 1
  02b4e3c  fnmsubs 8, 8, 1, 5
  02b4e40  fmadds 1, 8, 9, 1
  02b4e44  fmuls 8, 7, 1
  02b4e48  fmuls 9, 4, 1
  02b4e4c  fnmsubs 8, 8, 1, 5
  02b4e50  fmadds 1, 8, 9, 1
  02b4e54  fmuls 7, 7, 1
  02b4e58  fmuls 4, 4, 1
  02b4e5c  fnmsubs 5, 7, 1, 5
  02b4e60  fmadds 1, 5, 4, 1
  02b4e64  fmuls 5, 2, 1
  02b4e68  fmuls 4, 3, 1
  02b4e6c  fmuls 1, 6, 1
  02b4e70  stfs 5, 144(1)
  02b4e74  stfs 4, 148(1)
  02b4e78  fmr 22, 1
  02b4e7c  lwz 3, 32(17)
  02b4e80  stfs 1, 152(1)
  02b4e84  lfs 6, 660(15)
  02b4e88  cmpwi 3, 0
  02b4e8c  lfs 7, 664(15)
  02b4e90  fmr 2, 4
  02b4e94  fmr 3, 5
  02b4e98  lfs 8, 656(15)
  02b4e9c  bf 2, 0x2b4eac
  02b4ea0  lwz 3, 56(17)
  02b4ea4  cmpwi 3, 0
  02b4ea8  bt 2, 0x2b4ef8
  02b4eac  fmuls 2, 7, 4
  02b4eb0  stfs 26, 188(1)
  02b4eb4  fmuls 3, 8, 1
  02b4eb8  addic 3, 1, 144
  02b4ebc  fmuls 9, 6, 5
  02b4ec0  addic 5, 1, 176
  02b4ec4  ori 4, 3, 0
  02b4ec8  fmsubs 1, 6, 1, 2
  02b4ecc  fmsubs 2, 7, 5, 3
  02b4ed0  fmsubs 3, 8, 4, 9
  02b4ed4  stfs 1, 176(1)
  02b4ed8  stfs 2, 180(1)
  02b4edc  stfs 3, 184(1)
  02b4ee0  lfs 1, 24(16)
  02b4ee4  bl 0x1113e0
  02b4ee8  nop
  02b4eec  lfs 3, 144(1)
  02b4ef0  lfs 2, 148(1)
  02b4ef4  lfs 22, 152(1)
  02b4ef8  lis 3, 266
  02b4efc  lfs 1, 0(17)
  02b4f00  addic 23, 3, 576
  02b4f04  lis 20, 266
  02b4f08  stfs 1, 576(3)
  02b4f0c  lfs 1, 4(17)
  02b4f10  li 3, 16
  02b4f14  stfs 1, 4(23)
  02b4f18  lfs 1, 8(17)
  02b4f1c  stfs 1, 8(23)
  02b4f20  lfs 1, 12(17)
  02b4f24  lfd 4, 1088(1)
  02b4f28  stfs 1, 12(23)
  02b4f2c  lfs 1, 0(17)
  02b4f30  fmuls 4, 30, 4
  02b4f34  stfs 1, 320(23)
  02b4f38  lfs 1, 4(17)
  02b4f3c  ld 18, 1048(1)
  02b4f40  stfs 1, 324(23)
  02b4f44  lfs 1, 8(17)
  02b4f48  lis 21, 266
  02b4f4c  stfs 21, 1036(1)
  02b4f50  lis 22, 266
  02b4f54  stfs 1, 328(23)
  02b4f58  lis 19, 149
  02b4f5c  lfs 1, 12(17)
  02b4f60  lis 14, 161
  02b4f64  fmuls 24, 2, 4
  02b4f68  ori 25, 18, 0
  02b4f6c  stfs 1, 332(23)
  02b4f70  fmuls 23, 3, 4
  02b4f74  lfs 1, 52(16)
  02b4f78  fmuls 25, 22, 4
  02b4f7c  lfs 15, 28(16)
  02b4f80  li 29, 1
  02b4f84  lfs 16, 32(16)
  02b4f88  addic 20, 20, 1216
  02b4f8c  lfs 2, 60(16)
  02b4f90  addic 21, 21, 1616
  02b4f94  lfs 17, 36(16)
  02b4f98  addic 22, 22, 1296
  02b4f9c  lfs 3, 64(16)
  02b4fa0  addic 19, 19, 5056
  02b4fa4  stfs 31, 1028(1)
  02b4fa8  addic 14, 14, 2368
  02b4fac  lfs 18, 40(16)
  02b4fb0  fmr 22, 4
  02b4fb4  lfs 19, 44(16)
  02b4fb8  ori 24, 1, 0
  02b4fbc  lfs 20, 48(16)
  02b4fc0  lfs 27, 56(16)
  02b4fc4  lfs 5, 20(16)
  02b4fc8  stfd 1, 1016(1)
  02b4fcc  fmr 1, 5
  02b4fd0  lvlx 31, 3, 16
  02b4fd4  stfs 2, 1068(1)
  02b4fd8  lfs 14, 16(16)
  02b4fdc  stfs 3, 1024(1)
  02b4fe0  vspltw 31, 31, 0
  02b4fe4  stfd 1, 1008(1)
  02b4fe8  ori 3, 29, 0
  02b4fec  bl 0x502730
  02b4ff0  nop
  02b4ff4  extsw 3, 29
  02b4ff8  lis 4, 123
  02b4ffc  std 3, 1104(1)
  02b5000  lis 3, 123
  02b5004  lfd 2, 1088(1)
  02b5008  lfs 3, 30696(4)
  02b500c  fmuls 1, 1, 2
  02b5010  lis 4, 123
  02b5014  lfs 2, 30692(3)
  02b5018  lis 3, 266
  02b501c  fsubs 3, 3, 2
  02b5020  lfs 4, 30688(4)
  02b5024  lfs 5, 1700(3)
  02b5028  fmadds 30, 3, 1, 2
  02b502c  lfd 1, 1104(1)
  02b5030  fcfid 21, 1
  02b5034  frsp 21, 21
  02b5038  fmadds 1, 21, 4, 5
  02b503c  bl 0x10de78
  02b5040  nop
  02b5044  fsubs 2, 15, 1
  02b5048  fsubs 3, 16, 1
  02b504c  lis 3, 266
  02b5050  lis 4, 123
  02b5054  fsub 4, 1, 2
  02b5058  fsel 1, 4, 2, 1
  02b505c  fsub 2, 3, 1
  02b5060  fsel 3, 2, 3, 1
  02b5064  lfs 1, 1712(3)
  02b5068  lfs 2, 30744(4)
  02b506c  fmuls 4, 3, 3
  02b5070  fmuls 5, 4, 3
  02b5074  fmuls 6, 4, 5
  02b5078  fmadds 3, 5, 17, 3
  02b507c  fmuls 5, 4, 6
  02b5080  fmadds 3, 6, 18, 3
  02b5084  fmuls 4, 4, 5
  02b5088  fmadds 3, 5, 19, 3
  02b508c  fmadds 31, 4, 20, 3
  02b5090  bl 0xfe4f0
  02b5094  nop
  02b5098  slwi 31, 29, 4
  02b509c  slwi 27, 29, 2
  02b50a0  fmadds 30, 30, 31, 1
  02b50a4  extsw 28, 31
  02b50a8  extsw 27, 27
  02b50ac  addc 28, 23, 28
  02b50b0  addc 26, 23, 31
  02b50b4  clrldi 30, 26, 32
  02b50b8  lfsx 1, 20, 27
  02b50bc  lfs 2, 8(28)
  02b50c0  fsubs 1, 2, 1
  02b50c4  stfsx 30, 20, 27
  02b50c8  lfd 9, 1016(1)
  02b50cc  stfs 1, 8(28)
  02b50d0  lfs 1, 4(30)
  02b50d4  lfs 0, -12(30)
  02b50d8  lfs 2, 0(30)
  02b50dc  fsubs 10, 1, 0
  02b50e0  lfs 31, -16(30)
  02b50e4  lfs 1, 8(30)
  02b50e8  lfs 13, -8(30)
  02b50ec  fsubs 11, 2, 31
  02b50f0  fsubs 1, 1, 13
  02b50f4  fsubs 2, 24, 10
  02b50f8  fsubs 3, 23, 11
  02b50fc  fsubs 4, 25, 1
  02b5100  fmadds 10, 2, 9, 10
  02b5104  fmadds 11, 3, 9, 11
  02b5108  fmadds 9, 4, 9, 1
  02b510c  fmuls 1, 10, 10
  02b5110  fmadds 1, 11, 11, 1
  02b5114  fmadds 12, 9, 9, 1
  02b5118  fsqrts 12, 12
  02b511c  fcmpu 0, 12, 26
  02b5120  bf 2, 0x2b512c
  02b5124  lfs 4, -4(30)
  02b5128  b 0x2b514c
  02b512c  fdivs 25, 22, 12
  02b5130  lfs 4, -4(30)
  02b5134  fmuls 23, 25, 11
  02b5138  fmuls 24, 25, 10
  02b513c  fmuls 25, 25, 9
  02b5140  fadds 31, 31, 23
  02b5144  fadds 0, 0, 24
  02b5148  fadds 13, 13, 25
  02b514c  stfs 31, 0(30)
  02b5150  stfs 0, 4(30)
  02b5154  stfs 13, 8(30)
  02b5158  stfs 4, 12(30)
  02b515c  lfs 1, 8(28)
  02b5160  lwz 3, 32(17)
  02b5164  fadds 1, 1, 30
  02b5168  cmpwi 3, 0
  02b516c  stfs 1, 8(28)
  02b5170  lfs 1, -16(30)
  02b5174  lfs 2, -12(30)
  02b5178  lfs 7, 0(30)
  02b517c  lfs 30, 4(30)
  02b5180  fsubs 1, 7, 1
  02b5184  fsubs 2, 30, 2
  02b5188  lfs 8, 8(30)
  02b518c  stfd 1, 1000(1)
  02b5190  stfd 2, 992(1)
  02b5194  bt 2, 0x2b530c
  02b5198  ld 3, 1072(1)
  02b519c  cmpwi 3, 0
  02b51a0  bt 2, 0x2b51b4
  02b51a4  lwz 3, 56(17)
  02b51a8  cmpwi 1, 29, 10
  02b51ac  cmpwi 3, 0
  02b51b0  bf 2, 0x2b523c
  02b51b4  lfs 29, 1032(1)
  02b51b8  lfs 28, 1036(1)
  02b51bc  fsubs 29, 29, 30
  02b51c0  fsubs 28, 28, 7
  02b51c4  lfs 30, 1040(1)
  02b51c8  fsubs 30, 30, 8
  02b51cc  cmpwi 1, 29, 19
  02b51d0  fmuls 1, 29, 29
  02b51d4  fmadds 1, 28, 28, 1
  02b51d8  fmadds 31, 30, 30, 1
  02b51dc  fsqrts 31, 31
  02b51e0  fcmpu 0, 31, 26
  02b51e4  bt 2, 0x2b530c
  02b51e8  cmpwi 6, 29, 15
  02b51ec  bf 6, 0x2b51fc
  02b51f0  fmr 22, 31
  02b51f4  fmr 4, 14
  02b51f8  b 0x2b521c
  02b51fc  fmr 4, 27
  02b5200  bf 25, 0x2b521c
  02b5204  subfic 3, 29, 19
  02b5208  extsw 3, 3
  02b520c  bl 0x502730
  02b5210  nop
  02b5214  fdivs 22, 31, 1
  02b5218  fmr 4, 14
  02b521c  fdivs 1, 22, 31
  02b5220  fmsubs 2, 1, 28, 23
  02b5224  fmsubs 3, 1, 29, 24
  02b5228  fmsubs 1, 1, 30, 25
  02b522c  fmadds 23, 4, 2, 23
  02b5230  fmadds 24, 4, 3, 24
  02b5234  fmadds 25, 4, 1, 25
  02b5238  b 0x2b530c
  02b523c  lfs 6, 1040(1)
  02b5240  lfs 4, 1036(1)
  02b5244  lfs 5, 1032(1)
  02b5248  bt 4, 0x2b5258
  02b524c  lfs 6, 1064(1)
  02b5250  lfs 4, 1060(1)
  02b5254  lfs 5, 1056(1)
  02b5258  fmr 29, 30
  02b525c  fsubs 30, 4, 7
  02b5260  fsubs 28, 6, 8
  02b5264  cmpwi 6, 29, 9
  02b5268  fsubs 29, 5, 29
  02b526c  fmuls 1, 29, 29
  02b5270  fmadds 1, 30, 30, 1
  02b5274  fmadds 31, 28, 28, 1
  02b5278  fsqrts 31, 31
  02b527c  fcmpu 0, 31, 26
  02b5280  bt 2, 0x2b530c
  02b5284  cmpwi 1, 29, 19
  02b5288  bt 26, 0x2b5290
  02b528c  bf 6, 0x2b529c
  02b5290  fmr 22, 31
  02b5294  lfs 4, 68(16)
  02b5298  b 0x2b52f0
  02b529c  cmpwi 1, 29, 5
  02b52a0  cmpwi 29, 10
  02b52a4  crorc 2, 4, 0
  02b52a8  bt 2, 0x2b52c8
  02b52ac  subfic 3, 29, 9
  02b52b0  extsw 3, 3
  02b52b4  bl 0x502730
  02b52b8  nop
  02b52bc  lfs 4, 68(16)
  02b52c0  fdivs 22, 31, 1
  02b52c4  b 0x2b52f0
  02b52c8  cmpwi 29, 15
  02b52cc  bt 0, 0x2b52ec
  02b52d0  subfic 3, 29, 19
  02b52d4  extsw 3, 3
  02b52d8  bl 0x502730
  02b52dc  nop
  02b52e0  lfs 4, 68(16)
  02b52e4  fdivs 22, 31, 1
  02b52e8  b 0x2b52f0
  02b52ec  lfs 4, 72(16)
  02b52f0  fdivs 1, 22, 31
  02b52f4  fmsubs 2, 1, 30, 23
  02b52f8  fmsubs 3, 1, 29, 24
  02b52fc  fmsubs 1, 1, 28, 25
  02b5300  fmadds 23, 4, 2, 23
  02b5304  fmadds 24, 4, 3, 24
  02b5308  fmadds 25, 4, 1, 25
  02b530c  addc 31, 22, 31
  02b5310  cmpwi 29, 10
  02b5314  clrldi 31, 31, 32
  02b5318  bf 0, 0x2b5540
  02b531c  lis 3, 123
  02b5320  lfs 31, 1068(1)
  02b5324  lis 4, 266
  02b5328  lfs 30, 1028(1)
  02b532c  lfs 1, 30708(3)
  02b5330  lfs 29, 1024(1)
  02b5334  lfs 2, 1704(4)
  02b5338  fmadds 1, 21, 1, 2
  02b533c  bl 0x10de78
  02b5340  nop
  02b5344  lis 3, 123
  02b5348  fmr 28, 1
  02b534c  lis 4, 266
  02b5350  lfs 1, 30724(3)
  02b5354  lfs 2, 1708(4)
  02b5358  fmadds 1, 21, 1, 2
  02b535c  bl 0x10de78
  02b5360  nop
  02b5364  fsubs 2, 15, 1
  02b5368  fsubs 3, 16, 1
  02b536c  lis 3, 123
  02b5370  fsub 4, 1, 2
  02b5374  fsel 1, 4, 2, 1
  02b5378  lfs 4, 30712(3)
  02b537c  fsub 2, 3, 1
  02b5380  fsel 3, 2, 3, 1
  02b5384  lfs 2, 0(30)
  02b5388  lfs 5, 4(30)
  02b538c  lfs 7, 8(30)
  02b5390  lfs 8, 12(30)
  02b5394  stfs 2, 320(30)
  02b5398  stfs 5, 324(30)
  02b539c  stfs 7, 328(30)
  02b53a0  fmr 2, 27
  02b53a4  fmuls 6, 3, 3
  02b53a8  stfs 8, 332(30)
  02b53ac  fmr 1, 26
  02b53b0  fmuls 9, 6, 3
  02b53b4  fmuls 5, 6, 9
  02b53b8  fmadds 3, 9, 17, 3
  02b53bc  fmuls 7, 6, 5
  02b53c0  fmadds 3, 5, 18, 3
  02b53c4  fmuls 5, 6, 7
  02b53c8  fmadds 3, 7, 19, 3
  02b53cc  fmadds 3, 5, 20, 3
  02b53d0  fmuls 21, 4, 3
  02b53d4  bl 0xfe4f0
  02b53d8  nop
  02b53dc  fsubs 2, 15, 28
  02b53e0  fsubs 3, 16, 28
  02b53e4  fsub 4, 28, 2
  02b53e8  fsel 2, 4, 2, 28
  02b53ec  fsub 4, 3, 2
  02b53f0  fsel 2, 4, 3, 2
  02b53f4  lfs 4, 328(28)
  02b53f8  fmuls 3, 2, 2
  02b53fc  fmuls 5, 3, 2
  02b5400  fmuls 6, 3, 5
  02b5404  fmadds 2, 5, 17, 2
  02b5408  lfd 5, 992(1)
  02b540c  lfd 8, 1000(1)
  02b5410  fmuls 7, 3, 6
  02b5414  fmadds 6, 6, 18, 2
  02b5418  fmr 2, 5
  02b541c  fmuls 3, 3, 7
  02b5420  fmadds 5, 7, 19, 6
  02b5424  fmadds 3, 3, 20, 5
  02b5428  fmadds 3, 21, 3, 1
  02b542c  fmr 1, 8
  02b5430  fadds 4, 4, 3
  02b5434  stfsx 3, 21, 27
  02b5438  stfs 4, 328(28)
  02b543c  bl 0x5e8338
  02b5440  nop
  02b5444  fmr 2, 31
  02b5448  bl 0x502578
  02b544c  nop
  02b5450  fadds 2, 28, 29
  02b5454  fsubs 4, 15, 1
  02b5458  fadds 3, 1, 29
  02b545c  fsubs 12, 16, 1
  02b5460  lis 3, 123
  02b5464  fsubs 5, 15, 2
  02b5468  fsub 8, 1, 4
  02b546c  fsubs 6, 15, 3
  02b5470  fsubs 7, 16, 2
  02b5474  fsubs 9, 16, 3
  02b5478  fsub 10, 2, 5
  02b547c  fsel 1, 8, 4, 1
  02b5480  fsub 11, 3, 6
  02b5484  lfs 8, 30716(3)
  02b5488  fsel 2, 10, 5, 2
  02b548c  fsub 4, 12, 1
  02b5490  fsel 3, 11, 6, 3
  02b5494  fsub 5, 7, 2
  02b5498  fsel 1, 4, 12, 1
  02b549c  fsub 6, 9, 3
  02b54a0  fsel 2, 5, 7, 2
  02b54a4  fmuls 4, 1, 1
  02b54a8  fsel 3, 6, 9, 3
  02b54ac  fmuls 5, 2, 2
  02b54b0  fmuls 7, 4, 1
  02b54b4  fmuls 6, 3, 3
  02b54b8  fmuls 9, 5, 2
  02b54bc  fmuls 11, 4, 7
  02b54c0  fmadds 1, 7, 17, 1
  02b54c4  fmuls 10, 6, 3
  02b54c8  fmuls 7, 5, 9
  02b54cc  fmadds 2, 9, 17, 2
  02b54d0  fmadds 1, 11, 18, 1
  02b54d4  fmuls 9, 6, 10
  02b54d8  fmadds 3, 10, 17, 3
  02b54dc  fmuls 10, 4, 11
  02b54e0  fmuls 12, 5, 7
  02b54e4  fmadds 2, 7, 18, 2
  02b54e8  fmuls 7, 6, 9
  02b54ec  fmadds 3, 9, 18, 3
  02b54f0  fmuls 4, 4, 10
  02b54f4  fmadds 1, 10, 19, 1
  02b54f8  lfs 9, 320(30)
  02b54fc  lfs 13, 324(30)
  02b5500  stfs 26, 8(31)
  02b5504  fmuls 5, 5, 12
  02b5508  fmadds 2, 12, 19, 2
  02b550c  fmuls 6, 6, 7
  02b5510  fmadds 3, 7, 19, 3
  02b5514  stfs 30, 12(31)
  02b5518  fmr 12, 9
  02b551c  fmadds 11, 4, 20, 1
  02b5520  fmadds 2, 5, 20, 2
  02b5524  fmadds 10, 6, 20, 3
  02b5528  fmuls 1, 8, 2
  02b552c  fmuls 10, 10, 1
  02b5530  fmuls 11, 11, 1
  02b5534  stfs 10, 0(31)
  02b5538  stfs 11, 4(31)
  02b553c  b 0x2b55b0
  02b5540  lfs 1, 8(30)
  02b5544  subfic 3, 29, 21
  02b5548  lfs 2, 0(30)
  02b554c  stfs 1, 328(30)
  02b5550  sldi 4, 3, 2
  02b5554  lfs 1, 4(30)
  02b5558  sldi 3, 3, 4
  02b555c  stfs 2, 320(30)
  02b5560  extsw 4, 4
  02b5564  stfs 1, 324(30)
  02b5568  addc 3, 22, 3
  02b556c  lfs 1, 12(30)
  02b5570  clrldi 3, 3, 32
  02b5574  stfs 1, 332(30)
  02b5578  lfs 1, 328(28)
  02b557c  lfsx 2, 21, 4
  02b5580  fadds 1, 1, 2
  02b5584  stfs 1, 328(28)
  02b5588  lfs 1, 328(30)
  02b558c  lfs 2, 8(3)
  02b5590  lfs 10, 0(3)
  02b5594  fadds 1, 1, 2
  02b5598  lfs 12, 320(30)
  02b559c  lfs 11, 4(3)
  02b55a0  lfs 13, 324(30)
  02b55a4  stfs 1, 328(30)
  02b55a8  lfs 1, 12(31)
  02b55ac  stfs 1, 1028(1)
  02b55b0  fadds 1, 12, 10
  02b55b4  fadds 2, 13, 11
  02b55b8  cmpwi 1, 29, 19
  02b55bc  cmpwi 29, 1
  02b55c0  cror 2, 2, 6
  02b55c4  stfs 1, 320(30)
  02b55c8  stfs 2, 324(30)
  02b55cc  bt 2, 0x2b55e8
  02b55d0  srawi 3, 29, 1
  02b55d4  addze 3, 3
  02b55d8  sldi 3, 3, 1
  02b55dc  subc 3, 29, 3
  02b55e0  cmpwi 3, 0
  02b55e4  bf 2, 0x2b5880
  02b55e8  cmpwi 29, 1
  02b55ec  bf 2, 0x2b564c
  02b55f0  lwz 6, 8320(15)
  02b55f4  lfs 1, 128(15)
  02b55f8  addic 3, 1, 192
  02b55fc  lfs 2, 132(15)
  02b5600  ori 4, 17, 0
  02b5604  lfs 3, 136(15)
  02b5608  li 5, 16
  02b560c  li 7, 0
  02b5610  lfs 4, 224(6)
  02b5614  lfs 5, 228(6)
  02b5618  lfs 6, 232(6)
  02b561c  fmadds 1, 4, 14, 1
  02b5620  fmadds 2, 5, 14, 2
  02b5624  fmadds 3, 6, 14, 3
  02b5628  lfs 4, 140(15)
  02b562c  stfs 4, 204(1)
  02b5630  stfs 1, 192(1)
  02b5634  stfs 2, 196(1)
  02b5638  stfs 3, 200(1)
  02b563c  bl 0x57820
  02b5640  nop
  02b5644  ori 25, 3, 0
  02b5648  b 0x2b5670
  02b564c  addic 3, 26, -32
  02b5650  ld 6, 1080(1)
  02b5654  ori 4, 30, 0
  02b5658  clrldi 3, 3, 32
  02b565c  li 5, 16
  02b5660  li 7, 0
  02b5664  bl 0x57820
  02b5668  nop
  02b566c  ori 25, 3, 0
  02b5670  lfs 7, 0(30)
  02b5674  lfs 1, 320(19)
  02b5678  lfs 6, 324(19)
  02b567c  fsubs 7, 7, 1
  02b5680  cmpwi 1, 25, 0
  02b5684  stfs 7, 128(1)
  02b5688  lfs 1, 4(30)
  02b568c  fsubs 6, 1, 6
  02b5690  fmuls 1, 6, 6
  02b5694  stfs 6, 132(1)
  02b5698  fmadds 5, 7, 7, 1
  02b569c  fmadds 5, 26, 26, 5
  02b56a0  fsqrts 1, 5
  02b56a4  fcmpu 0, 1, 26
  02b56a8  bt 2, 0x2b56f4
  02b56ac  frsqrte 1, 5
  02b56b0  lfd 2, 1008(1)
  02b56b4  fmuls 3, 5, 1
  02b56b8  fmuls 4, 14, 1
  02b56bc  fnmsubs 3, 3, 1, 2
  02b56c0  fmadds 1, 3, 4, 1
  02b56c4  fmuls 3, 5, 1
  02b56c8  fmuls 4, 14, 1
  02b56cc  fnmsubs 3, 3, 1, 2
  02b56d0  fmadds 1, 3, 4, 1
  02b56d4  fmuls 3, 5, 1
  02b56d8  fmuls 4, 14, 1
  02b56dc  fnmsubs 2, 3, 1, 2
  02b56e0  fmadds 1, 2, 4, 1
  02b56e4  fmuls 7, 7, 1
  02b56e8  fmuls 6, 6, 1
  02b56ec  stfs 7, 128(1)
  02b56f0  stfs 6, 132(1)
  02b56f4  lis 3, 17839
  02b56f8  lis 4, 16256
  02b56fc  ori 3, 3, 57190
  02b5700  stw 4, 136(1)
  02b5704  stw 3, 140(1)
  02b5708  stfs 7, 256(1)
  02b570c  stfs 6, 260(1)
  02b5710  stw 4, 264(1)
  02b5714  stw 3, 268(1)
  02b5718  bt 6, 0x2b5880
  02b571c  lwz 31, 24(14)
  02b5720  cmpwi 31, 0
  02b5724  bt 2, 0x2b580c
  02b5728  ori 3, 31, 0
  02b572c  bl 0xfcccc
  02b5730  nop
  02b5734  li 4, 256
  02b5738  li 5, 272
  02b573c  li 6, 288
  02b5740  cmpwi 3, 0
  02b5744  lvx 2, 4, 1
  02b5748  lvx 3, 5, 1
  02b574c  lvx 4, 6, 1
  02b5750  bf 2, 0x2b5794
  02b5754  li 4, 64
  02b5758  li 5, 80
  02b575c  li 6, 96
  02b5760  ori 3, 31, 0
  02b5764  stvx 2, 4, 1
  02b5768  stvx 3, 5, 1
  02b576c  stvx 4, 6, 1
  02b5770  ld 5, 64(1)
  02b5774  ld 6, 72(1)
  02b5778  ld 7, 80(1)
  02b577c  ld 8, 88(1)
  02b5780  ld 9, 96(1)
  02b5784  ld 10, 104(1)
  02b5788  bl 0x105ab4
  02b578c  nop
  02b5790  b 0x2b580c
  02b5794  lwz 3, 36(31)
  02b5798  cmpwi 3, 0
  02b579c  bt 2, 0x2b57b0
  02b57a0  lhz 3, 70(3)
  02b57a4  extsh 3, 3
  02b57a8  cmpwi 3, 5
  02b57ac  bt 2, 0x2b57f0
  02b57b0  li 3, 64
  02b57b4  li 4, 80
  02b57b8  li 5, 96
  02b57bc  stvx 2, 3, 1
  02b57c0  stvx 3, 4, 1
  02b57c4  stvx 4, 5, 1
  02b57c8  ori 3, 31, 0
  02b57cc  ld 5, 64(1)
  02b57d0  ld 6, 72(1)
  02b57d4  ld 7, 80(1)
  02b57d8  ld 8, 88(1)
  02b57dc  ld 9, 96(1)
  02b57e0  ld 10, 104(1)
  02b57e4  bl 0x105ab4
  02b57e8  nop
  02b57ec  b 0x2b580c
  02b57f0  ori 3, 24, 0
  02b57f4  ld 25, 1048(1)
  02b57f8  addic 24, 24, 4
  02b57fc  addic 18, 18, 1
  02b5800  stw 31, 480(3)
  02b5804  stw 25, 148(31)
  02b5808  b 0x2b5880
  02b580c  lfs 1, 32(14)
  02b5810  stfs 1, 0(30)
  02b5814  lfs 1, 36(14)
  02b5818  stfs 1, 4(30)
  02b581c  lfs 1, 40(14)
  02b5820  stfs 1, 8(30)
  02b5824  lfs 1, 44(14)
  02b5828  stfs 1, 12(30)
  02b582c  lfs 1, 32(14)
  02b5830  sth 29, 62(17)
  02b5834  stfs 1, 16(17)
  02b5838  lfs 1, 36(14)
  02b583c  lwz 29, 24(14)
  02b5840  stfs 1, 20(17)
  02b5844  lfs 1, 40(14)
  02b5848  cmpwi 29, 0
  02b584c  stfs 1, 24(17)
  02b5850  lfs 1, 44(14)
  02b5854  stfs 1, 28(17)
  02b5858  bt 2, 0x2b5870
  02b585c  ori 3, 29, 0
  02b5860  bl 0x1057cc
  02b5864  nop
  02b5868  cmpwi 3, 0
  02b586c  bt 2, 0x2b5890
  02b5870  ld 3, 1048(1)
  02b5874  stw 3, 32(17)
  02b5878  sth 3, 64(17)
  02b587c  b 0x2b5890
  02b5880  addic 29, 29, 1
  02b5884  extsw 29, 29
  02b5888  cmpwi 29, 20
  02b588c  bt 0, 0x2b4fe8
  02b5890  cmpwi 18, 0
  02b5894  bf 1, 0x2b58bc
  02b5898  ori 3, 1, 0
  02b589c  lwz 4, 480(3)
  02b58a0  addic 18, 18, -1
  02b58a4  addic 3, 3, 4
  02b58a8  cmpwi 18, 0
  02b58ac  lwz 5, 36(4)
  02b58b0  lwz 5, 16(5)
  02b58b4  stw 5, 148(4)
  02b58b8  bt 1, 0x2b589c
  02b58bc  cmpwi 25, 0
  02b58c0  bf 2, 0x2b58e4
  02b58c4  lfs 1, 304(23)
  02b58c8  stfs 1, 16(17)
  02b58cc  lfs 1, 308(23)
  02b58d0  stfs 1, 20(17)
  02b58d4  lfs 1, 312(23)
  02b58d8  stfs 1, 24(17)
  02b58dc  lfs 1, 316(23)
  02b58e0  stfs 1, 28(17)
  02b58e4  lwz 3, 32(17)
  02b58e8  cmpwi 3, 0
  02b58ec  bt 2, 0x2b5a8c
  02b58f0  lhz 4, 64(17)
  02b58f4  cmpwi 4, 0
  02b58f8  bf 2, 0x2b5a8c
  02b58fc  lhz 4, 68(17)
  02b5900  cmpwi 4, 0
  02b5904  bf 2, 0x2b5a8c
  02b5908  lfs 1, 16(3)
  02b590c  lfs 2, 320(19)
  02b5910  fsubs 1, 1, 2
  02b5914  lfs 2, 324(19)
  02b5918  fmr 4, 26
  02b591c  stfs 1, 208(1)
  02b5920  lfs 3, 20(3)
  02b5924  fsubs 2, 3, 2
  02b5928  fmr 5, 4
  02b592c  fmuls 3, 2, 2
  02b5930  fmadds 3, 1, 1, 3
  02b5934  fmadds 3, 26, 26, 3
  02b5938  fsqrts 6, 3
  02b593c  fcmpu 0, 6, 5
  02b5940  bt 2, 0x2b5984
  02b5944  frsqrte 4, 3
  02b5948  lfd 5, 1008(1)
  02b594c  fmuls 6, 3, 4
  02b5950  fmuls 7, 14, 4
  02b5954  fnmsubs 6, 6, 4, 5
  02b5958  fmadds 4, 6, 7, 4
  02b595c  fmuls 6, 3, 4
  02b5960  fmuls 7, 14, 4
  02b5964  fnmsubs 6, 6, 4, 5
  02b5968  fmadds 4, 6, 7, 4
  02b596c  fmuls 3, 3, 4
  02b5970  fmuls 6, 14, 4
  02b5974  fnmsubs 3, 3, 4, 5
  02b5978  fmadds 4, 3, 6, 4
  02b597c  fmuls 5, 1, 4
  02b5980  fmuls 4, 2, 4
  02b5984  lis 3, 17839
  02b5988  stfs 5, 208(1)
  02b598c  lis 4, 16256
  02b5990  stfs 4, 212(1)
  02b5994  ori 6, 3, 57190
  02b5998  addic 3, 1, 304
  02b599c  lis 5, 33
  02b59a0  stw 4, 216(1)
  02b59a4  ld 31, 1080(1)
  02b59a8  addic 7, 1, 208
  02b59ac  stw 6, 220(1)
  02b59b0  lfs 1, 1096(1)
  02b59b4  ori 4, 31, 0
  02b59b8  bl 0x10581c
  02b59bc  nop
  02b59c0  li 3, 5
  02b59c4  li 5, 3
  02b59c8  li 4, 304
  02b59cc  li 6, 320
  02b59d0  stb 3, 328(1)
  02b59d4  li 3, 336
  02b59d8  lhz 7, 166(31)
  02b59dc  stb 5, 329(1)
  02b59e0  li 8, 64
  02b59e4  sth 7, 330(1)
  02b59e8  li 5, 80
  02b59ec  lvx 2, 4, 1
  02b59f0  li 7, 96
  02b59f4  lvx 3, 6, 1
  02b59f8  lvx 4, 3, 1
  02b59fc  lwz 4, 32(17)
  02b5a00  stvx 2, 8, 1
  02b5a04  stvx 3, 5, 1
  02b5a08  ori 3, 4, 0
  02b5a0c  stvx 4, 7, 1
  02b5a10  ld 5, 64(1)
  02b5a14  ld 6, 72(1)
  02b5a18  ld 7, 80(1)
  02b5a1c  ld 8, 88(1)
  02b5a20  ld 9, 96(1)
  02b5a24  ld 10, 104(1)
  02b5a28  bl 0x105ab4
  02b5a2c  nop
  02b5a30  lwz 3, 32(17)
  02b5a34  bl 0xfcccc
  02b5a38  nop
  02b5a3c  cmpwi 3, 0
  02b5a40  vspltisw 2, 5
  02b5a44  bt 2, 0x2b5a5c
  02b5a48  lhz 3, 4(3)
  02b5a4c  vspltisw 2, 5
  02b5a50  cmpwi 3, 1
  02b5a54  bf 2, 0x2b5a5c
  02b5a58  vspltisw 2, 1
  02b5a5c  vcfsx 2, 2, 0
  02b5a60  vspltisw 3, -1
  02b5a64  lis 3, 114
  02b5a68  li 4, -3056
  02b5a6c  vslw 3, 3, 3
  02b5a70  lvlx 4, 4, 3
  02b5a74  li 3, 68
  02b5a78  vaddfp 2, 2, 31
  02b5a7c  vmaddfp 2, 4, 2, 3
  02b5a80  vctsxs 2, 2, 0
  02b5a84  vsplth 2, 2, 1
  02b5a88  stvehx 2, 3, 17
  02b5a8c  lwz 3, 56(17)
  02b5a90  cmpwi 3, 0
  02b5a94  bt 2, 0x2b5c34
  02b5a98  lhz 4, 66(17)
  02b5a9c  cmpwi 4, 0
  02b5aa0  bf 2, 0x2b5c34
  02b5aa4  lhz 4, 70(17)
  02b5aa8  cmpwi 4, 0
  02b5aac  bf 2, 0x2b5c34
  02b5ab0  lfs 1, 16(3)
  02b5ab4  lfs 2, 320(19)
  02b5ab8  fsubs 1, 1, 2
  02b5abc  lfs 2, 324(19)
  02b5ac0  fmr 4, 26
  02b5ac4  stfs 1, 224(1)
  02b5ac8  lfs 3, 20(3)
  02b5acc  fsubs 2, 3, 2
  02b5ad0  fmr 5, 4
  02b5ad4  fmuls 3, 2, 2
  02b5ad8  fmadds 3, 1, 1, 3
  02b5adc  fmadds 3, 26, 26, 3
  02b5ae0  fsqrts 6, 3
  02b5ae4  fcmpu 0, 6, 5
  02b5ae8  bt 2, 0x2b5b2c
  02b5aec  frsqrte 4, 3
  02b5af0  lfd 5, 1008(1)
  02b5af4  fmuls 6, 3, 4
  02b5af8  fmuls 7, 14, 4
  02b5afc  fnmsubs 6, 6, 4, 5
  02b5b00  fmadds 4, 6, 7, 4
  02b5b04  fmuls 6, 3, 4
  02b5b08  fmuls 7, 14, 4
  02b5b0c  fnmsubs 6, 6, 4, 5
  02b5b10  fmadds 4, 6, 7, 4
  02b5b14  fmuls 3, 3, 4
  02b5b18  fmuls 6, 14, 4
  02b5b1c  fnmsubs 3, 3, 4, 5
  02b5b20  fmadds 4, 3, 6, 4
  02b5b24  fmuls 5, 1, 4
  02b5b28  fmuls 4, 2, 4
  02b5b2c  lis 3, 17839
  02b5b30  ld 31, 1080(1)
  02b5b34  lis 6, 16256
  02b5b38  stfs 5, 224(1)
  02b5b3c  ori 8, 3, 57190
  02b5b40  stfs 4, 228(1)
  02b5b44  addic 3, 1, 352
  02b5b48  lis 5, 33
  02b5b4c  stw 6, 232(1)
  02b5b50  addic 7, 1, 224
  02b5b54  stw 8, 236(1)
  02b5b58  ori 4, 31, 0
  02b5b5c  lfs 1, 1096(1)
  02b5b60  bl 0x10581c
  02b5b64  nop
  02b5b68  li 3, 5
  02b5b6c  li 5, 3
  02b5b70  li 4, 352
  02b5b74  li 6, 368
  02b5b78  stb 3, 376(1)
  02b5b7c  li 3, 384
  02b5b80  lhz 7, 166(31)
  02b5b84  stb 5, 377(1)
  02b5b88  li 8, 64
  02b5b8c  sth 7, 378(1)
  02b5b90  li 5, 80
  02b5b94  lvx 2, 4, 1
  02b5b98  li 7, 96
  02b5b9c  lvx 3, 6, 1
  02b5ba0  lvx 4, 3, 1
  02b5ba4  lwz 4, 56(17)
  02b5ba8  stvx 2, 8, 1
  02b5bac  stvx 3, 5, 1
  02b5bb0  ori 3, 4, 0
  02b5bb4  stvx 4, 7, 1
  02b5bb8  ld 5, 64(1)
  02b5bbc  ld 6, 72(1)
  02b5bc0  ld 7, 80(1)
  02b5bc4  ld 8, 88(1)
  02b5bc8  ld 9, 96(1)
  02b5bcc  ld 10, 104(1)
  02b5bd0  bl 0x105ab4
  02b5bd4  nop
  02b5bd8  lwz 3, 56(17)
  02b5bdc  bl 0xfcccc
  02b5be0  nop
  02b5be4  cmpwi 3, 0
  02b5be8  vspltisw 2, 5
  02b5bec  bt 2, 0x2b5c04
  02b5bf0  lhz 3, 4(3)
  02b5bf4  vspltisw 2, 5
  02b5bf8  cmpwi 3, 1
  02b5bfc  bf 2, 0x2b5c04
  02b5c00  vspltisw 2, 1
  02b5c04  vcfsx 2, 2, 0
  02b5c08  vspltisw 3, -1
  02b5c0c  lis 3, 114
  02b5c10  li 4, -3056
  02b5c14  vslw 3, 3, 3
  02b5c18  lvlx 4, 4, 3
  02b5c1c  li 3, 70
  02b5c20  vaddfp 2, 2, 31
  02b5c24  vmaddfp 2, 4, 2, 3
  02b5c28  vctsxs 2, 2, 0
  02b5c2c  vsplth 2, 2, 1
  02b5c30  stvehx 2, 3, 17
  02b5c34  ld 18, 1048(1)
  02b5c38  ori 23, 18, 0
  02b5c3c  ori 20, 23, 0
  02b5c40  cmpwi 18, 2
  02b5c44  bf 0, 0x2b5c60
  02b5c48  lfs 31, 0(17)
  02b5c4c  lfs 30, 4(17)
  02b5c50  lfs 29, 8(17)
  02b5c54  lfs 28, 12(17)
  02b5c58  lfs 25, 76(16)
  02b5c5c  b 0x2b5c74
  02b5c60  lfs 31, 16(17)
  02b5c64  lfs 30, 20(17)
  02b5c68  fmr 25, 14
  02b5c6c  lfs 29, 24(17)
  02b5c70  lfs 28, 28(17)
  02b5c74  lis 24, 266
  02b5c78  addic 24, 24, 2048
  02b5c7c  addc 3, 24, 23
  02b5c80  clrldi 3, 3, 32
  02b5c84  bl 0x4fffb4
  02b5c88  nop
  02b5c8c  cmpwi 3, 0
  02b5c90  bt 2, 0x2b5e88
  02b5c94  lis 3, 266
  02b5c98  vspltisw 2, -16
  02b5c9c  lis 4, 114
  02b5ca0  addic 3, 3, 2064
  02b5ca4  fmr 24, 30
  02b5ca8  lvlx 3, 23, 3
  02b5cac  li 3, -3056
  02b5cb0  vsraw 2, 3, 2
  02b5cb4  vspltisw 3, -1
  02b5cb8  vcfsx 2, 2, 0
  02b5cbc  vslw 3, 3, 3
  02b5cc0  lvlx 4, 3, 4
  02b5cc4  lis 3, 266
  02b5cc8  ld 4, 1048(1)
  02b5ccc  addic 3, 3, 2056
  02b5cd0  vaddfp 2, 2, 31
  02b5cd4  vmaddfp 2, 4, 2, 3
  02b5cd8  vctsxs 2, 2, 0
  02b5cdc  vsplth 2, 2, 1
  02b5ce0  stvehx 2, 23, 24
  02b5ce4  sthx 4, 3, 23
  02b5ce8  lfs 1, 80(16)
  02b5cec  lfs 2, 84(16)
  02b5cf0  bl 0xfe4f0
  02b5cf4  nop
  02b5cf8  lfs 30, 24(16)
  02b5cfc  fmr 23, 1
  02b5d00  lfs 1, 88(16)
  02b5d04  fmr 2, 30
  02b5d08  bl 0xfcbe8
  02b5d0c  nop
  02b5d10  lfs 2, 144(1)
  02b5d14  lfs 3, 148(1)
  02b5d18  addic 31, 1, 160
  02b5d1c  fmuls 2, 2, 25
  02b5d20  lfs 4, 152(1)
  02b5d24  fmuls 3, 3, 25
  02b5d28  lfs 5, 156(1)
  02b5d2c  fmuls 4, 4, 25
  02b5d30  ori 3, 31, 0
  02b5d34  stfs 5, 172(1)
  02b5d38  addic 5, 15, 1616
  02b5d3c  ori 4, 31, 0
  02b5d40  stfs 2, 160(1)
  02b5d44  stfs 3, 164(1)
  02b5d48  stfs 4, 168(1)
  02b5d4c  bl 0x1113e0
  02b5d50  nop
  02b5d54  ori 3, 31, 0
  02b5d58  fmr 1, 23
  02b5d5c  addic 5, 15, 1632
  02b5d60  ori 4, 31, 0
  02b5d64  bl 0x1113e0
  02b5d68  nop
  02b5d6c  lis 3, 266
  02b5d70  addic 3, 3, 1728
  02b5d74  addc 4, 3, 20
  02b5d78  clrldi 4, 4, 32
  02b5d7c  addc 3, 3, 20
  02b5d80  li 24, 2
  02b5d84  addic 30, 3, 16
  02b5d88  stfs 31, 0(4)
  02b5d8c  stfs 24, 4(4)
  02b5d90  stfs 29, 8(4)
  02b5d94  stfs 28, 12(4)
  02b5d98  lfs 1, 160(1)
  02b5d9c  fadds 1, 31, 1
  02b5da0  lfd 31, 1008(1)
  02b5da4  addic 31, 3, 32
  02b5da8  clrldi 30, 30, 32
  02b5dac  clrldi 31, 31, 32
  02b5db0  stfs 1, 16(4)
  02b5db4  lfs 1, 164(1)
  02b5db8  fadds 1, 24, 1
  02b5dbc  stfs 1, 20(4)
  02b5dc0  lfs 1, 168(1)
  02b5dc4  stfs 28, 28(4)
  02b5dc8  fadds 1, 29, 1
  02b5dcc  stfs 1, 24(4)
  02b5dd0  lfs 29, 92(16)
  02b5dd4  lfs 1, 0(30)
  02b5dd8  lfs 2, 320(19)
  02b5ddc  lfs 4, 324(19)
  02b5de0  fsubs 3, 1, 2
  02b5de4  lfs 5, 328(19)
  02b5de8  fmr 1, 30
  02b5dec  fmr 2, 29
  02b5df0  stfs 3, 240(1)
  02b5df4  lfs 3, 4(30)
  02b5df8  fsubs 3, 3, 4
  02b5dfc  stfs 3, 244(1)
  02b5e00  lfs 3, 8(30)
  02b5e04  fsubs 3, 3, 5
  02b5e08  stfs 3, 248(1)
  02b5e0c  lfs 3, 12(30)
  02b5e10  stfs 3, 252(1)
  02b5e14  bl 0xfcbe8
  02b5e18  nop
  02b5e1c  addic 3, 1, 160
  02b5e20  fmuls 1, 1, 31
  02b5e24  fneg 31, 31
  02b5e28  addic 5, 1, 240
  02b5e2c  ori 4, 3, 0
  02b5e30  bl 0x1113e0
  02b5e34  nop
  02b5e38  lfs 1, 0(30)
  02b5e3c  lfs 2, 160(1)
  02b5e40  addic 24, 24, 1
  02b5e44  fadds 1, 1, 2
  02b5e48  cmpwi 24, 5
  02b5e4c  stfs 1, 0(31)
  02b5e50  lfs 1, 4(30)
  02b5e54  lfs 2, 164(1)
  02b5e58  fadds 1, 1, 2
  02b5e5c  stfs 1, 4(31)
  02b5e60  lfs 1, 8(30)
  02b5e64  lfs 2, 168(1)
  02b5e68  fadds 1, 1, 2
  02b5e6c  stfs 1, 8(31)
  02b5e70  lfs 1, 12(30)
  02b5e74  addic 30, 30, 16
  02b5e78  stfs 1, 12(31)
  02b5e7c  addic 31, 31, 16
  02b5e80  bt 0, 0x2b5dd4
  02b5e84  b 0x2b60a8
  02b5e88  lis 26, 266
  02b5e8c  addic 25, 1, 416
  02b5e90  addic 26, 26, 1728
  02b5e94  addic 31, 1, 16
  02b5e98  addc 3, 26, 20
  02b5e9c  li 27, 1
  02b5ea0  addic 30, 3, 16
  02b5ea4  clrldi 28, 3, 32
  02b5ea8  clrldi 30, 30, 32
  02b5eac  ori 21, 28, 0
  02b5eb0  ori 29, 25, 0
  02b5eb4  ori 22, 30, 0
  02b5eb8  lfs 1, 0(30)
  02b5ebc  lfs 2, 0(28)
  02b5ec0  fsubs 3, 1, 2
  02b5ec4  fmr 1, 26
  02b5ec8  fmr 2, 27
  02b5ecc  stfs 3, 0(29)
  02b5ed0  lfs 3, 4(30)
  02b5ed4  lfs 4, 4(28)
  02b5ed8  fsubs 3, 3, 4
  02b5edc  stfs 3, 4(29)
  02b5ee0  lfs 3, 8(30)
  02b5ee4  lfs 4, 8(28)
  02b5ee8  fsubs 3, 3, 4
  02b5eec  stfs 3, 8(29)
  02b5ef0  lfs 3, 12(30)
  02b5ef4  stfs 3, 12(29)
  02b5ef8  bl 0xfe4f0
  02b5efc  nop
  02b5f00  lfs 2, 400(31)
  02b5f04  fadds 3, 2, 1
  02b5f08  fmr 1, 26
  02b5f0c  fmr 2, 27
  02b5f10  stfs 3, 400(31)
  02b5f14  bl 0xfe4f0
  02b5f18  nop
  02b5f1c  lfs 2, 404(31)
  02b5f20  fadds 3, 2, 1
  02b5f24  fmr 1, 26
  02b5f28  fmr 2, 27
  02b5f2c  stfs 3, 404(31)
  02b5f30  bl 0xfe4f0
  02b5f34  nop
  02b5f38  lfs 2, 408(31)
  02b5f3c  addic 27, 27, 1
  02b5f40  fadds 1, 2, 1
  02b5f44  cmpwi 27, 5
  02b5f48  addic 29, 29, 16
  02b5f4c  addic 30, 30, 16
  02b5f50  addic 28, 28, 16
  02b5f54  stfs 1, 408(31)
  02b5f58  addic 31, 31, 16
  02b5f5c  bt 0, 0x2b5eb8
  02b5f60  addc 3, 26, 20
  02b5f64  li 4, 4
  02b5f68  clrldi 3, 3, 32
  02b5f6c  mtctr 4
  02b5f70  stfs 31, 0(3)
  02b5f74  stfs 30, 4(3)
  02b5f78  stfs 29, 8(3)
  02b5f7c  stfs 28, 12(3)
  02b5f80  lhzx 24, 24, 23
  02b5f84  lfs 1, 0(21)
  02b5f88  lfs 2, 0(25)
  02b5f8c  fadds 1, 1, 2
  02b5f90  stfs 1, 0(22)
  02b5f94  lfs 1, 4(21)
  02b5f98  lfs 2, 4(25)
  02b5f9c  fadds 1, 1, 2
  02b5fa0  stfs 1, 4(22)
  02b5fa4  lfs 1, 8(21)
  02b5fa8  lfs 2, 8(25)
  02b5fac  addic 25, 25, 16
  02b5fb0  fadds 1, 1, 2
  02b5fb4  stfs 1, 8(22)
  02b5fb8  lfs 1, 12(21)
  02b5fbc  addic 21, 21, 16
  02b5fc0  stfs 1, 12(22)
  02b5fc4  addic 22, 22, 16
  02b5fc8  bdnz 0x2b5f84
  02b5fcc  lis 3, 266
  02b5fd0  lfs 31, 96(16)
  02b5fd4  extsh 24, 24
  02b5fd8  addic 3, 3, 2072
  02b5fdc  lhzx 3, 3, 23
  02b5fe0  extsh 3, 3
  02b5fe4  cmpw 24, 3
  02b5fe8  bf 1, 0x2b604c
  02b5fec  subc 3, 24, 3
  02b5ff0  bl 0x502730
  02b5ff4  nop
  02b5ff8  lis 3, 114
  02b5ffc  lfs 2, 100(16)
  02b6000  fmr 30, 1
  02b6004  lfs 1, -3056(3)
  02b6008  fmuls 1, 1, 2
  02b600c  fctiwz 1, 1
  02b6010  stfd 1, 1104(1)
  02b6014  lwz 3, 1108(1)
  02b6018  extsw 3, 3
  02b601c  bl 0x502730
  02b6020  nop
  02b6024  fdivs 1, 30, 1
  02b6028  lfd 2, 1008(1)
  02b602c  fsubs 1, 2, 1
  02b6030  fmuls 1, 1, 31
  02b6034  bl 0x502758
  02b6038  nop
  02b603c  lis 4, 266
  02b6040  addic 4, 4, 2056
  02b6044  sthx 3, 4, 23
  02b6048  b 0x2b60a8
  02b604c  subc 3, 3, 24
  02b6050  bl 0x502730
  02b6054  nop
  02b6058  lis 3, 114
  02b605c  lfs 2, 100(16)
  02b6060  fmr 30, 1
  02b6064  lfs 1, -3056(3)
  02b6068  fmuls 1, 1, 2
  02b606c  fctiwz 1, 1
  02b6070  stfd 1, 1104(1)
  02b6074  lwz 3, 1108(1)
  02b6078  extsw 3, 3
  02b607c  bl 0x502730
  02b6080  nop
  02b6084  fdivs 1, 30, 1
  02b6088  lfd 2, 1008(1)
  02b608c  fsubs 1, 2, 1
  02b6090  fmuls 1, 1, 31
  02b6094  bl 0x502758
  02b6098  nop
  02b609c  lis 4, 266
  02b60a0  addic 4, 4, 2056
  02b60a4  sthx 3, 4, 23
  02b60a8  addic 18, 18, 1
  02b60ac  addic 23, 23, 2
  02b60b0  cmpwi 18, 4
  02b60b4  addic 20, 20, 80
  02b60b8  bt 0, 0x2b5c40
  02b60bc  lfs 31, 84(16)
  02b60c0  lfs 1, 80(16)
  02b60c4  lfs 30, 1100(1)
  02b60c8  fmr 2, 31
  02b60cc  bl 0xfe4f0
  02b60d0  nop
  02b60d4  lfs 3, 104(16)
  02b60d8  fmr 29, 1
  02b60dc  fmr 2, 31
  02b60e0  fmr 1, 3
  02b60e4  bl 0xfcbe8
  02b60e8  nop
  02b60ec  lis 3, 114
  02b60f0  lfs 2, 144(1)
  02b60f4  lis 4, 123
  02b60f8  addic 31, 1, 160
  02b60fc  addic 5, 15, 1616
  02b6100  lfs 3, -3064(3)
  02b6104  lfs 4, 30804(4)
  02b6108  ori 3, 31, 0
  02b610c  ori 4, 31, 0
  02b6110  fmuls 3, 3, 4
  02b6114  lfs 4, 148(1)
  02b6118  lfs 5, 152(1)
  02b611c  lfs 6, 156(1)
  02b6120  stfs 6, 172(1)
  02b6124  fmuls 2, 2, 3
  02b6128  fmuls 4, 4, 3
  02b612c  fmuls 3, 5, 3
  02b6130  stfs 2, 160(1)
  02b6134  stfs 4, 164(1)
  02b6138  stfs 3, 168(1)
  02b613c  bl 0x1113e0
  02b6140  nop
  02b6144  ori 3, 31, 0
  02b6148  fmr 1, 29
  02b614c  addic 5, 15, 1632
  02b6150  ori 4, 31, 0
  02b6154  bl 0x1113e0
  02b6158  nop
  02b615c  li 3, 1
  02b6160  li 4, 8
  02b6164  bl 0xfe484
  02b6168  nop
  02b616c  ori 30, 3, 0
  02b6170  li 3, 2
  02b6174  bl 0xfc620
  02b6178  nop
  02b617c  li 4, 0
  02b6180  lfs 1, 72(16)
  02b6184  neg 5, 30
  02b6188  lfs 2, 108(16)
  02b618c  subc 3, 4, 3
  02b6190  subc 4, 30, 5
  02b6194  cntlzw 3, 3
  02b6198  sldi 3, 3, 58
  02b619c  sradi 3, 3, 63
  02b61a0  and 3, 3, 4
  02b61a4  addc 30, 5, 3
  02b61a8  bl 0xfcbe8
  02b61ac  nop
  02b61b0  lis 29, 114
  02b61b4  lfs 31, 100(16)
  02b61b8  fmr 29, 1
  02b61bc  lis 28, 123
  02b61c0  fmr 3, 26
  02b61c4  ori 3, 17, 0
  02b61c8  li 8, 0
  02b61cc  lfs 2, -3056(29)
  02b61d0  ori 9, 30, 0
  02b61d4  ori 10, 31, 0
  02b61d8  fmuls 4, 2, 31
  02b61dc  lwz 4, 30756(28)
  02b61e0  oris 7, 4, 32512
  02b61e4  fmuls 1, 29, 30
  02b61e8  extsw 7, 7
  02b61ec  fmr 2, 29
  02b61f0  fctiwz 4, 4
  02b61f4  stfd 4, 1104(1)
  02b61f8  lwz 4, 1108(1)
  02b61fc  extsw 4, 4
  02b6200  bl 0x12f8c0
  02b6204  nop
  02b6208  lfs 1, -3056(29)
  02b620c  lis 7, 12415
  02b6210  fmuls 2, 29, 14
  02b6214  fmuls 1, 1, 31
  02b6218  ori 3, 17, 0
  02b621c  neg 9, 30
  02b6220  fmr 3, 26
  02b6224  ori 7, 7, 32639
  02b6228  li 8, 0
  02b622c  ori 10, 31, 0
  02b6230  fctiwz 1, 1
  02b6234  stfd 1, 1104(1)
  02b6238  lfs 31, 112(16)
  02b623c  lwz 4, 1108(1)
  02b6240  fmuls 1, 29, 31
  02b6244  extsw 4, 4
  02b6248  bl 0x12f8c0
  02b624c  nop
  02b6250  li 3, 1
  02b6254  li 4, 8
  02b6258  bl 0xfe484
  02b625c  nop
  02b6260  ori 31, 3, 0
  02b6264  li 3, 2
  02b6268  bl 0xfc620
  02b626c  nop
  02b6270  li 4, 0
  02b6274  neg 5, 31
  02b6278  lfs 2, 116(16)
  02b627c  subc 3, 4, 3
  02b6280  fmr 1, 31
  02b6284  subc 4, 31, 5
  02b6288  cntlzw 3, 3
  02b628c  sldi 3, 3, 58
  02b6290  sradi 3, 3, 63
  02b6294  and 3, 3, 4
  02b6298  addc 31, 5, 3
  02b629c  bl 0xfcbe8
  02b62a0  nop
  02b62a4  lfs 3, 120(16)
  02b62a8  fmr 2, 1
  02b62ac  lfs 4, -3056(29)
  02b62b0  lis 10, 161
  02b62b4  lwz 4, 30756(28)
  02b62b8  addic 3, 17, 16
  02b62bc  fmuls 4, 4, 3
  02b62c0  addic 10, 10, 23856
  02b62c4  oris 7, 4, 32512
  02b62c8  fmr 3, 26
  02b62cc  li 8, 0
  02b62d0  extsw 7, 7
  02b62d4  ori 9, 31, 0
  02b62d8  fmuls 1, 2, 27
  02b62dc  fctiwz 4, 4
  02b62e0  stfd 4, 1104(1)
  02b62e4  lwz 4, 1108(1)
  02b62e8  extsw 4, 4
  02b62ec  bl 0x12f8c0
  02b62f0  nop
  02b62f4  li 0, 1120
  02b62f8  lvx 31, 1, 0
  02b62fc  ld 0, 1440(1)
  02b6300  mtlr 0
  02b6304  lfd 14, 1280(1)
  02b6308  lfd 15, 1288(1)
  02b630c  lfd 16, 1296(1)
  02b6310  lfd 17, 1304(1)
  02b6314  lfd 18, 1312(1)
  02b6318  lfd 19, 1320(1)
  02b631c  lfd 20, 1328(1)
  02b6320  lfd 21, 1336(1)
  02b6324  lfd 22, 1344(1)
  02b6328  lfd 23, 1352(1)
  02b632c  lfd 24, 1360(1)
  02b6330  lfd 25, 1368(1)
  02b6334  lfd 26, 1376(1)
  02b6338  lfd 27, 1384(1)
  02b633c  lfd 28, 1392(1)
  02b6340  lfd 29, 1400(1)
  02b6344  lfd 30, 1408(1)
  02b6348  lfd 31, 1416(1)
  02b634c  ld 14, 1136(1)
  02b6350  ld 15, 1144(1)
  02b6354  ld 16, 1152(1)
  02b6358  ld 17, 1160(1)
  02b635c  ld 18, 1168(1)
  02b6360  ld 19, 1176(1)
  02b6364  ld 20, 1184(1)
  02b6368  ld 21, 1192(1)
  02b636c  ld 22, 1200(1)
  02b6370  ld 23, 1208(1)
  02b6374  ld 24, 1216(1)
  02b6378  ld 25, 1224(1)
  02b637c  ld 26, 1232(1)
  02b6380  ld 27, 1240(1)
  02b6384  ld 28, 1248(1)
  02b6388  ld 29, 1256(1)
  02b638c  ld 30, 1264(1)
  02b6390  ld 31, 1272(1)
  02b6394  addi 1, 1, 1424
  02b6398  blr

M177_002b63a8:   # 0x2b63a8, 0x244 bytes
  02b63a8  stdu 1, -64(1)
  02b63ac  lis 4, 123
  02b63b0  lwz 4, 30672(4)
  02b63b4  lwz 3, 120(3)
  02b63b8  std 31, 56(1)
  02b63bc  cmpwi 4, 0
  02b63c0  bt 2, 0x2b65e0
  02b63c4  lfs 1, 20(3)
  02b63c8  lfs 2, 4(3)
  02b63cc  lis 4, 123
  02b63d0  li 5, 30800
  02b63d4  lfs 3, 16(3)
  02b63d8  fsubs 1, 1, 2
  02b63dc  lis 7, 123
  02b63e0  li 8, 0
  02b63e4  lfs 2, 0(3)
  02b63e8  fsubs 3, 3, 2
  02b63ec  lvlx 2, 5, 4
  02b63f0  lfs 4, 24(3)
  02b63f4  stw 8, 30672(7)
  02b63f8  lfs 5, 8(3)
  02b63fc  lis 6, 43
  02b6400  fsubs 4, 4, 5
  02b6404  fmuls 5, 1, 1
  02b6408  lis 4, 266
  02b640c  vcfsx 2, 2, 0
  02b6410  addi 5, 6, 25500
  02b6414  li 6, -3056
  02b6418  li 7, 2080
  02b641c  stw 8, 2084(4)
  02b6420  lvlx 3, 0, 5
  02b6424  lis 4, 114
  02b6428  fmadds 5, 3, 3, 5
  02b642c  vspltw 3, 3, 0
  02b6430  lis 9, 123
  02b6434  lvlx 4, 6, 4
  02b6438  vaddfp 2, 2, 3
  02b643c  lis 4, 127
  02b6440  vspltisw 3, -1
  02b6444  lis 6, 266
  02b6448  ori 10, 4, 8224
  02b644c  lis 4, 123
  02b6450  fmadds 5, 4, 4, 5
  02b6454  vslw 3, 3, 3
  02b6458  lfs 6, 30676(4)
  02b645c  lis 11, 266
  02b6460  vmaddfp 2, 4, 2, 3
  02b6464  fsqrts 5, 5
  02b6468  addic 4, 11, 576
  02b646c  vctsxs 2, 2, 0
  02b6470  vspltw 2, 2, 0
  02b6474  stvewx 2, 7, 6
  02b6478  stw 10, 30756(9)
  02b647c  lfs 7, 4(5)
  02b6480  fmuls 6, 6, 7
  02b6484  lis 6, 266
  02b6488  lfs 7, 8(5)
  02b648c  stfs 2, 576(11)
  02b6490  lfs 2, 4(3)
  02b6494  lis 5, 266
  02b6498  addic 9, 6, 1296
  02b649c  stfs 2, 4(4)
  02b64a0  lfs 2, 8(3)
  02b64a4  addic 7, 5, 1216
  02b64a8  lis 5, 266
  02b64ac  stfs 2, 8(4)
  02b64b0  lfs 2, 12(3)
  02b64b4  addic 6, 5, 1616
  02b64b8  li 3, 19
  02b64bc  stfs 2, 12(4)
  02b64c0  mtctr 3
  02b64c4  addic 7, 7, 4
  02b64c8  addic 6, 6, 4
  02b64cc  addic 5, 4, 16
  02b64d0  fdivs 6, 6, 5
  02b64d4  addic 3, 9, 16
  02b64d8  fsub 2, 7, 5
  02b64dc  fsub 8, 7, 5
  02b64e0  fsub 9, 7, 5
  02b64e4  fsub 10, 5, 7
  02b64e8  fsub 11, 5, 7
  02b64ec  fsub 5, 5, 7
  02b64f0  fmuls 4, 4, 6
  02b64f4  fmuls 1, 1, 6
  02b64f8  fmuls 6, 3, 6
  02b64fc  fsel 3, 2, 7, 4
  02b6500  fsel 2, 8, 7, 1
  02b6504  fsel 7, 9, 7, 6
  02b6508  fsel 3, 10, 3, 4
  02b650c  fsel 2, 11, 2, 1
  02b6510  fsel 1, 5, 7, 6
  02b6514  lfs 4, 0(4)
  02b6518  fadds 4, 4, 1
  02b651c  stfs 4, 0(5)
  02b6520  lfs 4, 4(4)
  02b6524  fadds 4, 4, 2
  02b6528  stfs 4, 4(5)
  02b652c  lfs 4, 8(4)
  02b6530  fadds 4, 4, 3
  02b6534  stfs 4, 8(5)
  02b6538  lfs 4, 12(4)
  02b653c  addic 4, 4, 16
  02b6540  stfs 4, 12(5)
  02b6544  stw 8, 0(7)
  02b6548  stw 8, 12(3)
  02b654c  addic 5, 5, 16
  02b6550  stw 8, 8(3)
  02b6554  addic 7, 7, 4
  02b6558  stw 8, 4(3)
  02b655c  stw 8, 0(3)
  02b6560  stw 8, 0(6)
  02b6564  addic 3, 3, 16
  02b6568  addic 6, 6, 4
  02b656c  bdnz 0x2b6514
  02b6570  lis 3, 266
  02b6574  li 5, -1
  02b6578  addic 7, 3, 2048
  02b657c  lis 4, 266
  02b6580  lis 6, 266
  02b6584  li 9, 8
  02b6588  sth 5, 2048(3)
  02b658c  li 10, 4
  02b6590  addic 11, 4, 2064
  02b6594  sth 5, 2(7)
  02b6598  addic 3, 6, 2072
  02b659c  sth 5, 4(7)
  02b65a0  li 12, 2
  02b65a4  sth 5, 6(7)
  02b65a8  sth 9, 2064(4)
  02b65ac  lis 31, 266
  02b65b0  sth 10, 2072(6)
  02b65b4  lis 5, 266
  02b65b8  sth 10, 2(11)
  02b65bc  lis 4, 266
  02b65c0  sth 12, 2(3)
  02b65c4  sth 9, 4(11)
  02b65c8  sth 10, 4(3)
  02b65cc  sth 10, 6(11)
  02b65d0  sth 12, 6(3)
  02b65d4  stw 8, 1700(31)
  02b65d8  stw 8, 1704(5)
  02b65dc  stw 8, 1708(4)
  02b65e0  ld 31, 56(1)
  02b65e4  addi 1, 1, 64
  02b65e8  blr

UpdateMoby_177:   # 0x2b6630, 0x1198 bytes
  02b6630  stdu 1, -304(1)
  02b6634  mflr 0
  02b6638  std 0, 320(1)
  02b663c  stfd 30, 288(1)
  02b6640  stfd 31, 296(1)
  02b6644  std 25, 232(1)
  02b6648  std 29, 264(1)
  02b664c  lis 29, 151
  02b6650  std 30, 272(1)
  02b6654  lis 25, 150
  02b6658  lwz 30, 120(3)
  02b665c  addic 29, 29, -25376
  02b6660  std 31, 280(1)
  02b6664  addic 25, 25, 19008
  02b6668  std 28, 256(1)
  02b666c  ori 31, 3, 0
  02b6670  lwz 28, 4276(29)
  02b6674  lwz 3, 164(25)
  02b6678  lwz 4, 4256(29)
  02b667c  addic 28, 28, -3
  02b6680  and 3, 3, 4
  02b6684  std 27, 248(1)
  02b6688  std 26, 240(1)
  02b668c  std 24, 224(1)
  02b6690  cmpwi 3, 0
  02b6694  bt 2, 0x2b66b0
  02b6698  lbz 3, 8364(29)
  02b669c  cmpwi 3, 0
  02b66a0  bf 2, 0x2b66b0
  02b66a4  lis 3, 16204
  02b66a8  ori 3, 3, 52429
  02b66ac  stw 3, 36(30)
  02b66b0  lis 3, 114
  02b66b4  lis 4, 16230
  02b66b8  addic 5, 3, 7120
  02b66bc  ori 4, 4, 26214
  02b66c0  li 27, 0
  02b66c4  li 3, -1
  02b66c8  ori 24, 27, 0
  02b66cc  stw 4, 2108(5)
  02b66d0  bl 0x8e0f4
  02b66d4  nop
  02b66d8  lis 4, 161
  02b66dc  ori 26, 3, 0
  02b66e0  addic 3, 4, 12
  02b66e4  lhz 3, 1032(3)
  02b66e8  cmpwi 3, 0
  02b66ec  bf 2, 0x2b673c
  02b66f0  lis 3, 161
  02b66f4  addic 3, 3, -276
  02b66f8  lhz 3, 208(3)
  02b66fc  cmpwi 3, 0
  02b6700  bf 2, 0x2b673c
  02b6704  lbz 3, 8373(29)
  02b6708  cmpwi 3, 3
  02b670c  bt 0, 0x2b673c
  02b6710  lwz 3, 8332(29)
  02b6714  cmpwi 1, 3, 1
  02b6718  cmpwi 3, 0
  02b671c  cror 2, 2, 6
  02b6720  bt 2, 0x2b672c
  02b6724  cmpwi 3, 9
  02b6728  bf 2, 0x2b673c
  02b672c  li 3, 20016
  02b6730  li 4, 129
  02b6734  bl 0x7b310
  02b6738  nop
  02b673c  lwz 3, 160(25)
  02b6740  lwz 4, 4256(29)
  02b6744  and 3, 3, 4
  02b6748  cmpwi 3, 0
  02b674c  bt 2, 0x2b7100
  02b6750  lbz 3, 32(31)
  02b6754  cmpwi 1, 3, 0
  02b6758  cmpwi 3, 4
  02b675c  cror 2, 2, 6
  02b6760  bt 2, 0x2b7100
  02b6764  lbz 3, 8364(29)
  02b6768  cmpwi 3, 0
  02b676c  bf 2, 0x2b7100
  02b6770  lwz 3, 8324(29)
  02b6774  cmpwi 3, 114
  02b6778  bt 2, 0x2b7100
  02b677c  lwz 3, 44(30)
  02b6780  cmpwi 3, 0
  02b6784  bf 2, 0x2b7110
  02b6788  cmpwi 26, 0
  02b678c  bf 1, 0x2b70e4
  02b6790  addic 3, 30, 60
  02b6794  bl 0x4fffb4
  02b6798  nop
  02b679c  cmpwi 3, 0
  02b67a0  bt 2, 0x2b6804
  02b67a4  addic 3, 30, 68
  02b67a8  bl 0x4fffb4
  02b67ac  nop
  02b67b0  addic 3, 30, 70
  02b67b4  bl 0x4fffb4
  02b67b8  nop
  02b67bc  li 3, -1
  02b67c0  li 4, 1
  02b67c4  bl 0xaa258
  02b67c8  nop
  02b67cc  lis 3, 43
  02b67d0  vspltisw 2, -1
  02b67d4  lis 4, 114
  02b67d8  addi 3, 3, 26092
  02b67dc  li 5, -3056
  02b67e0  vslw 2, 2, 2
  02b67e4  lvlx 3, 0, 3
  02b67e8  lvlx 4, 5, 4
  02b67ec  li 3, 60
  02b67f0  vspltw 3, 3, 0
  02b67f4  vmaddfp 2, 4, 3, 2
  02b67f8  vctsxs 2, 2, 0
  02b67fc  vsplth 2, 2, 1
  02b6800  stvehx 2, 3, 30
  02b6804  lwz 3, 48(30)
  02b6808  cmpwi 3, -1
  02b680c  bf 2, 0x2b6838
  02b6810  lis 3, 43
  02b6814  li 6, 0
  02b6818  addi 4, 3, 26092
  02b681c  addic 3, 31, 16
  02b6820  lfs 1, 4(4)
  02b6824  lfs 2, 8(4)
  02b6828  bl 0xda308
  02b682c  nop
  02b6830  stw 3, 48(30)
  02b6834  b 0x2b6870
  02b6838  lis 3, 43
  02b683c  lis 4, 114
  02b6840  addi 3, 3, 26092
  02b6844  lfs 1, 0(3)
  02b6848  lfs 2, -3056(4)
  02b684c  lwz 3, 52(30)
  02b6850  fmuls 1, 2, 1
  02b6854  fctiwz 1, 1
  02b6858  stfd 1, 200(1)
  02b685c  lwz 4, 204(1)
  02b6860  cmpw 3, 4
  02b6864  bf 0, 0x2b6870
  02b6868  addic 3, 3, 1
  02b686c  stw 3, 52(30)
  02b6870  lwz 3, 32(30)
  02b6874  li 27, 1
  02b6878  cmpwi 3, 0
  02b687c  bt 2, 0x2b6ad0
  02b6880  lfs 1, 16(3)
  02b6884  lfs 2, 128(29)
  02b6888  lfs 3, 20(3)
  02b688c  lfs 4, 132(29)
  02b6890  fsubs 1, 1, 2
  02b6894  lis 3, 43
  02b6898  fsubs 2, 3, 4
  02b689c  addi 3, 3, 26092
  02b68a0  lis 4, 115
  02b68a4  addic 4, 4, 22784
  02b68a8  fabs 3, 1
  02b68ac  fabs 6, 2
  02b68b0  stfs 1, 124(1)
  02b68b4  stfs 2, 128(1)
  02b68b8  lfs 4, 152(29)
  02b68bc  fsubs 1, 3, 6
  02b68c0  stfs 1, 132(1)
  02b68c4  lwz 5, 124(1)
  02b68c8  lfs 5, 8(3)
  02b68cc  lfs 1, 124(1)
  02b68d0  lwz 3, 128(1)
  02b68d4  lfs 2, 128(1)
  02b68d8  lwz 6, 132(1)
  02b68dc  rlwinm 3, 3, 3, 29, 29
  02b68e0  fabs 7, 2
  02b68e4  lfs 2, 132(1)
  02b68e8  fabs 1, 1
  02b68ec  rlwimi 3, 6, 2, 30, 30
  02b68f0  fsub 8, 2, 5
  02b68f4  rlwimi 3, 5, 4, 28, 28
  02b68f8  fsub 9, 2, 5
  02b68fc  ori 5, 4, 0
  02b6900  rlwimi 5, 3, 2, 26, 28
  02b6904  slwi 3, 3, 2
  02b6908  clrldi 5, 5, 32
  02b690c  fsel 6, 8, 1, 6
  02b6910  lfsx 1, 4, 3
  02b6914  lfs 2, 4(5)
  02b6918  fsel 3, 9, 7, 3
  02b691c  fcmpu 0, 6, 5
  02b6920  bt 1, 0x2b6928
  02b6924  b 0x2b6a48
  02b6928  fsubs 7, 3, 6
  02b692c  fadds 3, 3, 6
  02b6930  addic 3, 1, 16
  02b6934  li 6, 2
  02b6938  addic 4, 3, 152
  02b693c  addic 5, 3, 168
  02b6940  mtctr 6
  02b6944  fdivs 3, 7, 3
  02b6948  fmuls 6, 3, 3
  02b694c  stfs 3, 180(1)
  02b6950  stfs 3, 172(1)
  02b6954  stfs 3, 176(1)
  02b6958  stfs 3, 168(1)
  02b695c  lfs 8, 180(1)
  02b6960  lfs 9, 172(1)
  02b6964  lfs 10, 176(1)
  02b6968  fmuls 7, 6, 6
  02b696c  fmuls 9, 9, 6
  02b6970  fmuls 8, 8, 7
  02b6974  fmuls 3, 7, 7
  02b6978  fmuls 7, 10, 7
  02b697c  stfs 9, 172(1)
  02b6980  fmuls 6, 8, 6
  02b6984  stfs 7, 176(1)
  02b6988  stfs 6, 180(1)
  02b698c  lfs 6, 152(3)
  02b6990  fmuls 6, 6, 3
  02b6994  stfs 6, 168(3)
  02b6998  lfs 6, 4(4)
  02b699c  addic 3, 3, 8
  02b69a0  addic 4, 4, 8
  02b69a4  fmuls 6, 6, 3
  02b69a8  stfs 6, 4(5)
  02b69ac  addic 5, 5, 8
  02b69b0  bdnz 0x2b698c
  02b69b4  li 5, 4
  02b69b8  ori 3, 1, 0
  02b69bc  mtctr 5
  02b69c0  lis 4, 115
  02b69c4  addic 5, 3, 168
  02b69c8  addic 4, 4, 22752
  02b69cc  ori 7, 5, 0
  02b69d0  lfs 3, 168(3)
  02b69d4  lfs 6, 0(4)
  02b69d8  fmuls 3, 3, 6
  02b69dc  lfs 6, 4(4)
  02b69e0  addic 4, 4, 8
  02b69e4  stfs 3, 168(3)
  02b69e8  lfs 3, 4(5)
  02b69ec  addic 3, 3, 8
  02b69f0  fmuls 3, 3, 6
  02b69f4  stfs 3, 4(5)
  02b69f8  addic 5, 5, 8
  02b69fc  bdnz 0x2b69d0
  02b6a00  ori 3, 1, 0
  02b6a04  mtctr 6
  02b6a08  lfs 3, 168(3)
  02b6a0c  fadds 3, 5, 3
  02b6a10  lfs 5, 4(7)
  02b6a14  addic 3, 3, 16
  02b6a18  lfs 6, 8(7)
  02b6a1c  lfs 7, 12(7)
  02b6a20  addic 7, 7, 16
  02b6a24  fadds 3, 3, 5
  02b6a28  fadds 5, 3, 6
  02b6a2c  fadds 5, 5, 7
  02b6a30  bdnz 0x2b6a08
  02b6a34  lis 3, 43
  02b6a38  addi 3, 3, 26092
  02b6a3c  lfs 3, 12(3)
  02b6a40  fadds 5, 5, 3
  02b6a44  fmadds 5, 5, 1, 2
  02b6a48  fmr 1, 4
  02b6a4c  fmr 2, 5
  02b6a50  bl 0x5026a0
  02b6a54  nop
  02b6a58  lis 3, 43
  02b6a5c  addi 3, 3, 26092
  02b6a60  lfs 2, 16(3)
  02b6a64  fcmpu 0, 1, 2
  02b6a68  bt 1, 0x2b6ac8
  02b6a6c  lwz 3, 32(30)
  02b6a70  lbz 4, 49(3)
  02b6a74  cmpwi 4, 0
  02b6a78  bt 2, 0x2b6ac8
  02b6a7c  lfs 1, 20(3)
  02b6a80  lfs 2, 132(29)
  02b6a84  lfs 3, 16(3)
  02b6a88  fsubs 1, 1, 2
  02b6a8c  lfs 2, 128(29)
  02b6a90  fsubs 2, 3, 2
  02b6a94  lfs 3, 24(3)
  02b6a98  lfs 4, 136(29)
  02b6a9c  fsubs 3, 3, 4
  02b6aa0  fmuls 1, 1, 1
  02b6aa4  lis 3, 43
  02b6aa8  addi 3, 3, 26092
  02b6aac  fmadds 1, 2, 2, 1
  02b6ab0  lfs 2, 20(3)
  02b6ab4  fmadds 1, 3, 3, 1
  02b6ab8  fsqrts 1, 1
  02b6abc  fcmpu 0, 1, 2
  02b6ac0  cror 6, 0, 2
  02b6ac4  bt 6, 0x2b6ad0
  02b6ac8  stw 24, 32(30)
  02b6acc  sth 24, 64(30)
  02b6ad0  lwz 3, 56(30)
  02b6ad4  cmpwi 3, 0
  02b6ad8  bt 2, 0x2b6d2c
  02b6adc  lfs 1, 16(3)
  02b6ae0  lfs 2, 128(29)
  02b6ae4  lfs 3, 20(3)
  02b6ae8  lfs 4, 132(29)
  02b6aec  fsubs 1, 1, 2
  02b6af0  lis 3, 43
  02b6af4  fsubs 2, 3, 4
  02b6af8  addi 3, 3, 26092
  02b6afc  lis 4, 115
  02b6b00  addic 4, 4, 22784
  02b6b04  fabs 4, 1
  02b6b08  fabs 6, 2
  02b6b0c  stfs 1, 112(1)
  02b6b10  stfs 2, 116(1)
  02b6b14  lfs 1, 152(29)
  02b6b18  fsubs 2, 4, 6
  02b6b1c  stfs 2, 120(1)
  02b6b20  lwz 5, 112(1)
  02b6b24  lfs 5, 8(3)
  02b6b28  lfs 2, 112(1)
  02b6b2c  lwz 3, 116(1)
  02b6b30  lfs 3, 116(1)
  02b6b34  fabs 2, 2
  02b6b38  lwz 6, 120(1)
  02b6b3c  rlwinm 3, 3, 3, 29, 29
  02b6b40  fabs 7, 3
  02b6b44  lfs 3, 120(1)
  02b6b48  rlwimi 3, 6, 2, 30, 30
  02b6b4c  fsub 8, 3, 5
  02b6b50  rlwimi 3, 5, 4, 28, 28
  02b6b54  fsub 9, 3, 5
  02b6b58  ori 5, 4, 0
  02b6b5c  rlwimi 5, 3, 2, 26, 28
  02b6b60  slwi 3, 3, 2
  02b6b64  clrldi 5, 5, 32
  02b6b68  fsel 6, 8, 2, 6
  02b6b6c  lfsx 2, 4, 3
  02b6b70  lfs 3, 4(5)
  02b6b74  fsel 4, 9, 7, 4
  02b6b78  fcmpu 0, 6, 5
  02b6b7c  bt 1, 0x2b6b84
  02b6b80  b 0x2b6ca4
  02b6b84  fsubs 7, 4, 6
  02b6b88  fadds 4, 4, 6
  02b6b8c  addic 3, 1, 16
  02b6b90  li 6, 2
  02b6b94  addic 5, 3, 136
  02b6b98  addic 4, 3, 120
  02b6b9c  mtctr 6
  02b6ba0  fdivs 4, 7, 4
  02b6ba4  fmuls 6, 4, 4
  02b6ba8  stfs 4, 148(1)
  02b6bac  stfs 4, 140(1)
  02b6bb0  stfs 4, 144(1)
  02b6bb4  stfs 4, 136(1)
  02b6bb8  lfs 8, 148(1)
  02b6bbc  lfs 9, 140(1)
  02b6bc0  lfs 10, 144(1)
  02b6bc4  fmuls 7, 6, 6
  02b6bc8  fmuls 9, 9, 6
  02b6bcc  fmuls 8, 8, 7
  02b6bd0  fmuls 4, 7, 7
  02b6bd4  fmuls 7, 10, 7
  02b6bd8  stfs 9, 140(1)
  02b6bdc  fmuls 6, 8, 6
  02b6be0  stfs 7, 144(1)
  02b6be4  stfs 6, 148(1)
  02b6be8  lfs 6, 120(3)
  02b6bec  fmuls 6, 6, 4
  02b6bf0  stfs 6, 136(3)
  02b6bf4  lfs 6, 4(4)
  02b6bf8  addic 4, 4, 8
  02b6bfc  fmuls 6, 6, 4
  02b6c00  addic 3, 3, 8
  02b6c04  stfs 6, 4(5)
  02b6c08  addic 5, 5, 8
  02b6c0c  bdnz 0x2b6be8
  02b6c10  li 5, 4
  02b6c14  ori 3, 1, 0
  02b6c18  mtctr 5
  02b6c1c  lis 4, 115
  02b6c20  addic 5, 3, 136
  02b6c24  addic 4, 4, 22752
  02b6c28  ori 7, 5, 0
  02b6c2c  lfs 4, 136(3)
  02b6c30  lfs 6, 0(4)
  02b6c34  fmuls 4, 4, 6
  02b6c38  lfs 6, 4(4)
  02b6c3c  addic 4, 4, 8
  02b6c40  stfs 4, 136(3)
  02b6c44  lfs 4, 4(5)
  02b6c48  addic 3, 3, 8
  02b6c4c  fmuls 4, 4, 6
  02b6c50  stfs 4, 4(5)
  02b6c54  addic 5, 5, 8
  02b6c58  bdnz 0x2b6c2c
  02b6c5c  ori 3, 1, 0
  02b6c60  mtctr 6
  02b6c64  lfs 4, 136(3)
  02b6c68  fadds 4, 5, 4
  02b6c6c  addic 3, 3, 16
  02b6c70  lfs 5, 4(7)
  02b6c74  lfs 6, 8(7)
  02b6c78  lfs 7, 12(7)
  02b6c7c  addic 7, 7, 16
  02b6c80  fadds 4, 4, 5
  02b6c84  fadds 5, 4, 6
  02b6c88  fadds 5, 5, 7
  02b6c8c  bdnz 0x2b6c64
  02b6c90  lis 3, 43
  02b6c94  addi 3, 3, 26092
  02b6c98  lfs 4, 12(3)
  02b6c9c  fadds 5, 5, 4
  02b6ca0  fmadds 5, 5, 2, 3
  02b6ca4  fmr 2, 5
  02b6ca8  bl 0x5026a0
  02b6cac  nop
  02b6cb0  lis 3, 43
  02b6cb4  addi 3, 3, 26092
  02b6cb8  lfs 2, 16(3)
  02b6cbc  fcmpu 0, 1, 2
  02b6cc0  bt 1, 0x2b6d20
  02b6cc4  lwz 3, 56(30)
  02b6cc8  lbz 4, 49(3)
  02b6ccc  cmpwi 4, 0
  02b6cd0  bt 2, 0x2b6d20
  02b6cd4  lfs 1, 20(3)
  02b6cd8  lfs 2, 132(29)
  02b6cdc  lfs 3, 16(3)
  02b6ce0  fsubs 1, 1, 2
  02b6ce4  lfs 2, 128(29)
  02b6ce8  fsubs 2, 3, 2
  02b6cec  lfs 3, 24(3)
  02b6cf0  lfs 4, 136(29)
  02b6cf4  fsubs 3, 3, 4
  02b6cf8  fmuls 1, 1, 1
  02b6cfc  lis 4, 43
  02b6d00  addi 4, 4, 26092
  02b6d04  fmadds 1, 2, 2, 1
  02b6d08  lfs 2, 20(4)
  02b6d0c  fmadds 1, 3, 3, 1
  02b6d10  fsqrts 1, 1
  02b6d14  fcmpu 0, 1, 2
  02b6d18  cror 6, 0, 2
  02b6d1c  bt 6, 0x2b6d2c
  02b6d20  ori 3, 24, 0
  02b6d24  stw 24, 56(30)
  02b6d28  sth 3, 66(30)
  02b6d2c  lfs 1, 16(31)
  02b6d30  lis 4, 43
  02b6d34  stfs 1, 0(30)
  02b6d38  lfs 2, 20(31)
  02b6d3c  addi 4, 4, 26092
  02b6d40  stfs 2, 4(30)
  02b6d44  lfs 3, 24(31)
  02b6d48  stfs 3, 8(30)
  02b6d4c  lfs 4, 28(31)
  02b6d50  stfs 4, 12(30)
  02b6d54  lfs 5, 24(4)
  02b6d58  stfs 1, 16(30)
  02b6d5c  fadds 1, 3, 5
  02b6d60  lwz 4, 32(30)
  02b6d64  stfs 2, 20(30)
  02b6d68  stfs 4, 28(30)
  02b6d6c  cmpwi 4, 0
  02b6d70  stfs 1, 8(30)
  02b6d74  stfs 1, 24(30)
  02b6d78  bt 2, 0x2b6e1c
  02b6d7c  lhz 5, 64(30)
  02b6d80  cmpwi 5, 0
  02b6d84  bt 2, 0x2b6e1c
  02b6d88  ori 3, 4, 0
  02b6d8c  lhz 4, 40(30)
  02b6d90  li 26, 50
  02b6d94  addic 4, 4, 1
  02b6d98  sth 4, 40(30)
  02b6d9c  bl 0xfcccc
  02b6da0  nop
  02b6da4  ori 4, 3, 0
  02b6da8  cmpwi 4, 0
  02b6dac  lhz 5, 40(30)
  02b6db0  lwz 3, 56(30)
  02b6db4  bt 2, 0x2b6dc8
  02b6db8  lhz 4, 4(4)
  02b6dbc  cmpwi 4, 1
  02b6dc0  bf 2, 0x2b6dc8
  02b6dc4  li 26, 5
  02b6dc8  extsw 4, 26
  02b6dcc  lis 6, 43
  02b6dd0  std 4, 200(1)
  02b6dd4  addi 4, 6, 26092
  02b6dd8  lis 6, 114
  02b6ddc  lfs 1, 28(4)
  02b6de0  lfs 2, -3056(6)
  02b6de4  lfd 3, 200(1)
  02b6de8  fcfid 3, 3
  02b6dec  extsh 4, 5
  02b6df0  frsp 3, 3
  02b6df4  fadds 1, 3, 1
  02b6df8  fmuls 1, 2, 1
  02b6dfc  fctiwz 1, 1
  02b6e00  stfd 1, 200(1)
  02b6e04  lwz 5, 204(1)
  02b6e08  cmpw 4, 5
  02b6e0c  bt 0, 0x2b6e20
  02b6e10  stw 24, 32(30)
  02b6e14  sth 24, 64(30)
  02b6e18  b 0x2b6e20
  02b6e1c  sth 24, 40(30)
  02b6e20  cmpwi 3, 0
  02b6e24  bt 2, 0x2b6ebc
  02b6e28  lhz 4, 66(30)
  02b6e2c  cmpwi 4, 0
  02b6e30  bt 2, 0x2b6ebc
  02b6e34  lhz 4, 42(30)
  02b6e38  li 26, 50
  02b6e3c  addic 4, 4, 1
  02b6e40  sth 4, 42(30)
  02b6e44  bl 0xfcccc
  02b6e48  nop
  02b6e4c  cmpwi 3, 0
  02b6e50  lhz 4, 42(30)
  02b6e54  bt 2, 0x2b6e68
  02b6e58  lhz 3, 4(3)
  02b6e5c  cmpwi 3, 1
  02b6e60  bf 2, 0x2b6e68
  02b6e64  li 26, 5
  02b6e68  extsw 3, 26
  02b6e6c  lis 5, 43
  02b6e70  std 3, 200(1)
  02b6e74  addi 3, 5, 26092
  02b6e78  lis 5, 114
  02b6e7c  lfs 1, 28(3)
  02b6e80  lfs 2, -3056(5)
  02b6e84  lfd 3, 200(1)
  02b6e88  fcfid 3, 3
  02b6e8c  extsh 3, 4
  02b6e90  frsp 3, 3
  02b6e94  fadds 1, 3, 1
  02b6e98  fmuls 1, 2, 1
  02b6e9c  fctiwz 1, 1
  02b6ea0  stfd 1, 200(1)
  02b6ea4  lwz 4, 204(1)
  02b6ea8  cmpw 3, 4
  02b6eac  bt 0, 0x2b6ec0
  02b6eb0  stw 24, 56(30)
  02b6eb4  sth 24, 66(30)
  02b6eb8  b 0x2b6ec0
  02b6ebc  sth 24, 42(30)
  02b6ec0  lis 3, 43
  02b6ec4  lfs 31, 36(30)
  02b6ec8  lis 4, 151
  02b6ecc  addi 26, 3, 26092
  02b6ed0  addic 3, 4, -25432
  02b6ed4  lis 4, 114
  02b6ed8  lfs 1, 32(26)
  02b6edc  lfs 2, -3064(4)
  02b6ee0  lbz 3, 19(3)
  02b6ee4  fmuls 30, 2, 1
  02b6ee8  bl 0x502730
  02b6eec  nop
  02b6ef0  lfs 2, 36(26)
  02b6ef4  lfs 3, 40(26)
  02b6ef8  lfs 4, 36(30)
  02b6efc  fmadds 1, 1, 2, 3
  02b6f00  lwz 3, 8324(29)
  02b6f04  cmpwi 3, 1
  02b6f08  fsubs 1, 1, 4
  02b6f0c  fmadds 1, 30, 1, 31
  02b6f10  stfs 1, 36(30)
  02b6f14  bf 2, 0x2b6f8c
  02b6f18  lis 3, 43
  02b6f1c  lis 4, 149
  02b6f20  addi 3, 3, 26092
  02b6f24  addic 4, 4, 5056
  02b6f28  lfs 2, 44(3)
  02b6f2c  lfs 3, 856(4)
  02b6f30  lfs 4, 24(31)
  02b6f34  lfs 5, 848(4)
  02b6f38  fmadds 3, 3, 2, 4
  02b6f3c  lfs 6, 852(4)
  02b6f40  lfs 4, 12(30)
  02b6f44  stfs 3, 8(30)
  02b6f48  lfs 7, 128(29)
  02b6f4c  fmadds 5, 5, 2, 7
  02b6f50  stfs 5, 0(30)
  02b6f54  lfs 7, 132(29)
  02b6f58  fmadds 2, 6, 2, 7
  02b6f5c  stfs 2, 4(30)
  02b6f60  lfs 6, 848(4)
  02b6f64  lfs 7, 852(4)
  02b6f68  lfs 8, 856(4)
  02b6f6c  fmadds 5, 6, 1, 5
  02b6f70  fmadds 2, 7, 1, 2
  02b6f74  stfs 4, 28(30)
  02b6f78  fmadds 1, 8, 1, 3
  02b6f7c  stfs 5, 16(30)
  02b6f80  stfs 2, 20(30)
  02b6f84  stfs 1, 24(30)
  02b6f88  b 0x2b70a0
  02b6f8c  lhz 3, 8904(29)
  02b6f90  cmpwi 3, 1
  02b6f94  bf 2, 0x2b7004
  02b6f98  ori 3, 31, 0
  02b6f9c  li 4, 0
  02b6fa0  ori 5, 30, 0
  02b6fa4  bl 0xf1114
  02b6fa8  nop
  02b6fac  lfs 1, 36(30)
  02b6fb0  lfs 2, 208(31)
  02b6fb4  lfs 3, 212(31)
  02b6fb8  fmuls 2, 1, 2
  02b6fbc  lfs 4, 216(31)
  02b6fc0  fmuls 3, 1, 3
  02b6fc4  fmuls 1, 1, 4
  02b6fc8  lfs 4, 0(30)
  02b6fcc  lfs 5, 4(30)
  02b6fd0  lfs 6, 8(30)
  02b6fd4  lfs 7, 12(30)
  02b6fd8  stfs 7, 28(30)
  02b6fdc  fneg 2, 2
  02b6fe0  fneg 3, 3
  02b6fe4  fneg 1, 1
  02b6fe8  fadds 2, 4, 2
  02b6fec  fadds 3, 5, 3
  02b6ff0  fadds 1, 6, 1
  02b6ff4  stfs 2, 16(30)
  02b6ff8  stfs 3, 20(30)
  02b6ffc  stfs 1, 24(30)
  02b7000  b 0x2b70a0
  02b7004  ori 3, 31, 0
  02b7008  li 4, 0
  02b700c  ori 5, 30, 0
  02b7010  bl 0xf1114
  02b7014  nop
  02b7018  lfs 1, 1604(29)
  02b701c  lfs 3, 1600(29)
  02b7020  fmuls 1, 1, 1
  02b7024  lfs 2, 1608(29)
  02b7028  lis 3, 43
  02b702c  addi 3, 3, 26092
  02b7030  fmadds 1, 3, 3, 1
  02b7034  lfs 9, 8(3)
  02b7038  fmr 7, 9
  02b703c  fmadds 2, 2, 2, 1
  02b7040  lfs 1, 36(30)
  02b7044  fmr 5, 7
  02b7048  lfs 4, 0(30)
  02b704c  lfs 6, 4(30)
  02b7050  lfs 8, 8(30)
  02b7054  lfs 10, 12(30)
  02b7058  fsqrts 2, 2
  02b705c  fcmpu 0, 2, 5
  02b7060  bt 2, 0x2b7084
  02b7064  fdivs 9, 1, 2
  02b7068  fmuls 5, 3, 9
  02b706c  stfs 5, 16(30)
  02b7070  lfs 7, 1604(29)
  02b7074  fmuls 7, 7, 9
  02b7078  stfs 7, 20(30)
  02b707c  lfs 1, 1608(29)
  02b7080  fmuls 9, 1, 9
  02b7084  fadds 1, 4, 5
  02b7088  fadds 2, 6, 7
  02b708c  stfs 10, 28(30)
  02b7090  fadds 3, 8, 9
  02b7094  stfs 1, 16(30)
  02b7098  stfs 2, 20(30)
  02b709c  stfs 3, 24(30)
  02b70a0  ori 3, 31, 0
  02b70a4  bl 0x2b63a8
  02b70a8  ori 3, 31, 0
  02b70ac  bl 0x2b4818
  02b70b0  lis 3, 113
  02b70b4  ori 4, 31, 0
  02b70b8  addic 3, 3, -20792
  02b70bc  bl 0x6d7e0
  02b70c0  nop
  02b70c4  lwz 4, 72(30)
  02b70c8  ori 3, 31, 0
  02b70cc  extsw 4, 4
  02b70d0  bl 0x15cc7c
  02b70d4  nop
  02b70d8  cmpwi 3, 0
  02b70dc  bt 2, 0x2b718c
  02b70e0  b 0x2b71a4
  02b70e4  stw 27, 32(30)
  02b70e8  stw 27, 56(30)
  02b70ec  sth 27, 64(30)
  02b70f0  sth 27, 66(30)
  02b70f4  sth 27, 68(30)
  02b70f8  sth 27, 70(30)
  02b70fc  b 0x2b7110
  02b7100  stw 27, 32(30)
  02b7104  stw 27, 56(30)
  02b7108  sth 27, 64(30)
  02b710c  sth 27, 66(30)
  02b7110  lis 3, 123
  02b7114  li 4, 1
  02b7118  stw 4, 30672(3)
  02b711c  lwz 3, 52(30)
  02b7120  cmpwi 3, 0
  02b7124  bf 1, 0x2b7130
  02b7128  addic 3, 3, -1
  02b712c  stw 3, 52(30)
  02b7130  lwz 3, 72(30)
  02b7134  cmpwi 3, -1
  02b7138  bt 2, 0x2b7180
  02b713c  sldi 4, 3, 7
  02b7140  sldi 6, 3, 4
  02b7144  lis 5, 150
  02b7148  subc 4, 4, 6
  02b714c  addic 5, 5, 14312
  02b7150  extsw 4, 4
  02b7154  lwzx 5, 5, 4
  02b7158  cmpw 5, 31
  02b715c  bf 2, 0x2b7180
  02b7160  lis 5, 150
  02b7164  addic 5, 5, 14292
  02b7168  lbzx 4, 5, 4
  02b716c  cmpwi 4, 0
  02b7170  bt 2, 0x2b7180
  02b7174  extsw 3, 3
  02b7178  bl 0x15cdb0
  02b717c  nop
  02b7180  li 3, -1
  02b7184  stw 3, 72(30)
  02b7188  b 0x2b71a4
  02b718c  li 3, 4
  02b7190  li 4, 4
  02b7194  ori 5, 31, 0
  02b7198  bl 0x15d12c
  02b719c  nop
  02b71a0  stw 3, 72(30)
  02b71a4  lwz 3, 32(30)
  02b71a8  cmpwi 3, 0
  02b71ac  bt 2, 0x2b71d4
  02b71b0  lbz 4, 32(3)
  02b71b4  cmpwi 1, 4, 253
  02b71b8  cmpwi 4, 254
  02b71bc  cror 2, 2, 6
  02b71c0  bt 2, 0x2b71d4
  02b71c4  lhz 3, 52(3)
  02b71c8  rlwinm 3, 3, 0, 19, 19
  02b71cc  cmpwi 3, 0
  02b71d0  bf 2, 0x2b71dc
  02b71d4  li 3, 1
  02b71d8  sth 3, 64(30)
  02b71dc  lwz 3, 56(30)
  02b71e0  cmpwi 3, 0
  02b71e4  bt 2, 0x2b720c
  02b71e8  lbz 4, 32(3)
  02b71ec  cmpwi 1, 4, 253
  02b71f0  cmpwi 4, 254
  02b71f4  cror 2, 2, 6
  02b71f8  bt 2, 0x2b720c
  02b71fc  lhz 3, 52(3)
  02b7200  rlwinm 3, 3, 0, 19, 19
  02b7204  cmpwi 3, 0
  02b7208  bf 2, 0x2b7214
  02b720c  li 3, 1
  02b7210  sth 3, 66(30)
  02b7214  lbz 3, 32(31)
  02b7218  cmpwi 3, 4
  02b721c  cmpwi 1, 3, 3
  02b7220  cmpwi 6, 3, 1
  02b7224  cmpwi 7, 3, 0
  02b7228  bt 2, 0x2b75d0
  02b722c  bt 6, 0x2b7430
  02b7230  bt 26, 0x2b72cc
  02b7234  bf 30, 0x2b75d0
  02b7238  lis 3, 43
  02b723c  vspltisw 2, -1
  02b7240  lis 4, 114
  02b7244  addi 5, 3, 26092
  02b7248  li 3, 48
  02b724c  li 6, -3056
  02b7250  vslw 2, 2, 2
  02b7254  lvlx 3, 3, 5
  02b7258  lvlx 4, 6, 4
  02b725c  vspltw 3, 3, 0
  02b7260  li 4, 44
  02b7264  ori 3, 30, 0
  02b7268  vmaddfp 2, 4, 3, 2
  02b726c  li 6, 0
  02b7270  vctsxs 2, 2, 0
  02b7274  vspltw 2, 2, 0
  02b7278  stvewx 2, 4, 30
  02b727c  lfs 1, 8(5)
  02b7280  fmr 2, 1
  02b7284  bl 0xda308
  02b7288  nop
  02b728c  stw 3, 48(30)
  02b7290  lis 3, 123
  02b7294  li 4, 1
  02b7298  li 5, 20
  02b729c  li 6, -1
  02b72a0  stw 4, 30672(3)
  02b72a4  stb 4, 32(31)
  02b72a8  stw 24, 56(30)
  02b72ac  stw 24, 32(30)
  02b72b0  sth 24, 64(30)
  02b72b4  sth 24, 66(30)
  02b72b8  sth 5, 62(30)
  02b72bc  stw 6, 72(30)
  02b72c0  sth 24, 70(30)
  02b72c4  sth 24, 68(30)
  02b72c8  b 0x2b75d0
  02b72cc  addic 3, 30, 44
  02b72d0  bl 0x4fff60
  02b72d4  nop
  02b72d8  cmpwi 27, 0
  02b72dc  bt 2, 0x2b72f0
  02b72e0  bl 0x99ea8
  02b72e4  nop
  02b72e8  li 3, 3
  02b72ec  stb 3, 32(31)
  02b72f0  lwz 3, 164(25)
  02b72f4  lwz 4, 4256(29)
  02b72f8  and 3, 3, 4
  02b72fc  cmpwi 3, 0
  02b7300  bt 2, 0x2b75d0
  02b7304  lbz 3, 8364(29)
  02b7308  cmpwi 1, 27, 0
  02b730c  cmpwi 3, 0
  02b7310  bf 2, 0x2b75d0
  02b7314  bt 6, 0x2b73f8
  02b7318  lis 4, 161
  02b731c  lis 3, 0
  02b7320  addic 4, 4, -732
  02b7324  ori 5, 3, 65535
  02b7328  lhz 3, 152(4)
  02b732c  cmpw 3, 5
  02b7330  bf 0, 0x2b733c
  02b7334  addic 3, 3, 1
  02b7338  sth 3, 152(4)
  02b733c  lis 3, 161
  02b7340  lis 5, 114
  02b7344  lwz 3, -2344(3)
  02b7348  extsw 3, 3
  02b734c  std 3, 200(1)
  02b7350  lis 3, 43
  02b7354  addi 3, 3, 26092
  02b7358  lfs 1, 28(3)
  02b735c  lfs 2, -3056(5)
  02b7360  lfd 3, 200(1)
  02b7364  lis 3, 6990
  02b7368  fcfid 3, 3
  02b736c  ori 5, 3, 33205
  02b7370  lhz 6, 154(4)
  02b7374  frsp 3, 3
  02b7378  fadds 1, 3, 1
  02b737c  fmuls 1, 2, 1
  02b7380  fctiwz 1, 1
  02b7384  stfd 1, 200(1)
  02b7388  lwz 3, 204(1)
  02b738c  mulhw 5, 5, 3
  02b7390  srawi 5, 5, 6
  02b7394  srwi 7, 5, 31
  02b7398  addc 5, 5, 7
  02b739c  cmpw 5, 6
  02b73a0  bf 1, 0x2b73c0
  02b73a4  lis 5, 6990
  02b73a8  ori 5, 5, 33205
  02b73ac  mulhw 3, 5, 3
  02b73b0  srawi 3, 3, 6
  02b73b4  srwi 5, 3, 31
  02b73b8  addc 3, 3, 5
  02b73bc  sth 3, 154(4)
  02b73c0  lis 3, 151
  02b73c4  lwz 7, 156(4)
  02b73c8  li 5, 1
  02b73cc  lis 6, -32768
  02b73d0  lwz 3, -25488(3)
  02b73d4  slw 3, 5, 3
  02b73d8  or 3, 7, 3
  02b73dc  or 3, 3, 6
  02b73e0  stw 3, 156(4)
  02b73e4  bl 0x99ea8
  02b73e8  nop
  02b73ec  li 3, 3
  02b73f0  stb 3, 32(31)
  02b73f4  b 0x2b75d0
  02b73f8  li 6, 1
  02b73fc  stw 24, 32(30)
  02b7400  stw 24, 56(30)
  02b7404  li 3, 0
  02b7408  sth 24, 64(30)
  02b740c  li 4, 0
  02b7410  sth 24, 66(30)
  02b7414  ori 5, 31, 0
  02b7418  stb 6, 32(31)
  02b741c  bl 0x15d12c
  02b7420  nop
  02b7424  bl 0x855b8
  02b7428  nop
  02b742c  b 0x2b75d0
  02b7430  lwz 3, 168(25)
  02b7434  cmpwi 1, 27, 0
  02b7438  lwz 4, 4256(29)
  02b743c  and 3, 3, 4
  02b7440  cmpwi 3, 0
  02b7444  crorc 2, 6, 2
  02b7448  bt 2, 0x2b7458
  02b744c  lbz 3, 8364(29)
  02b7450  cmpwi 3, 0
  02b7454  bt 2, 0x2b75d0
  02b7458  lis 3, 43
  02b745c  lis 4, 114
  02b7460  addi 3, 3, 26092
  02b7464  li 5, -3056
  02b7468  lfs 2, 52(3)
  02b746c  lfs 1, -3056(4)
  02b7470  li 3, 444
  02b7474  lwz 6, 444(29)
  02b7478  fmuls 2, 1, 2
  02b747c  lvlx 2, 5, 4
  02b7480  lvlx 3, 3, 29
  02b7484  fctiwz 2, 2
  02b7488  stfd 2, 200(1)
  02b748c  lwz 3, 204(1)
  02b7490  cmpw 6, 3
  02b7494  bf 1, 0x2b74bc
  02b7498  lis 4, 161
  02b749c  lis 3, 0
  02b74a0  addic 4, 4, -276
  02b74a4  ori 5, 3, 65535
  02b74a8  lhz 3, 208(4)
  02b74ac  cmpw 3, 5
  02b74b0  bf 0, 0x2b74bc
  02b74b4  addic 3, 3, 1
  02b74b8  sth 3, 208(4)
  02b74bc  lis 3, 161
  02b74c0  lis 4, 161
  02b74c4  lwz 3, -2344(3)
  02b74c8  extsw 3, 3
  02b74cc  addic 4, 4, -276
  02b74d0  std 3, 200(1)
  02b74d4  lis 3, 43
  02b74d8  addi 3, 3, 26092
  02b74dc  lfs 2, 28(3)
  02b74e0  lfd 3, 200(1)
  02b74e4  lis 3, 6990
  02b74e8  fcfid 3, 3
  02b74ec  ori 5, 3, 33205
  02b74f0  lhz 6, 210(4)
  02b74f4  frsp 3, 3
  02b74f8  fadds 2, 3, 2
  02b74fc  fmuls 1, 1, 2
  02b7500  fctiwz 1, 1
  02b7504  stfd 1, 200(1)
  02b7508  lwz 3, 204(1)
  02b750c  mulhw 5, 5, 3
  02b7510  srawi 5, 5, 6
  02b7514  srwi 7, 5, 31
  02b7518  addc 5, 5, 7
  02b751c  cmpw 5, 6
  02b7520  bf 1, 0x2b7540
  02b7524  lis 5, 6990
  02b7528  ori 5, 5, 33205
  02b752c  mulhw 3, 5, 3
  02b7530  srawi 3, 3, 6
  02b7534  srwi 5, 3, 31
  02b7538  addc 3, 3, 5
  02b753c  sth 3, 210(4)
  02b7540  lis 3, 151
  02b7544  lwz 7, 212(4)
  02b7548  li 27, 1
  02b754c  vspltisw 4, -1
  02b7550  lis 5, -32768
  02b7554  lis 8, 43
  02b7558  li 6, 56
  02b755c  lwz 3, -25488(3)
  02b7560  addi 8, 8, 26092
  02b7564  vslw 4, 4, 4
  02b7568  slw 3, 27, 3
  02b756c  vspltisw 6, 1
  02b7570  or 3, 7, 3
  02b7574  or 3, 3, 5
  02b7578  stw 3, 212(4)
  02b757c  lvlx 5, 6, 8
  02b7580  li 3, 8373
  02b7584  vspltw 5, 5, 0
  02b7588  vmaddfp 2, 2, 5, 4
  02b758c  vspltisw 4, -8
  02b7590  lvlx 5, 3, 29
  02b7594  vsrw 4, 5, 4
  02b7598  vadduwm 4, 4, 6
  02b759c  vctsxs 2, 2, 0
  02b75a0  vcmpgtsw 2, 2, 3
  02b75a4  vand 2, 4, 2
  02b75a8  vspltb 2, 2, 3
  02b75ac  stvebx 2, 3, 29
  02b75b0  stw 24, 32(30)
  02b75b4  stw 24, 56(30)
  02b75b8  sth 24, 64(30)
  02b75bc  sth 24, 66(30)
  02b75c0  stw 24, 36(30)
  02b75c4  bl 0x855b8
  02b75c8  nop
  02b75cc  stb 27, 32(31)
  02b75d0  lwz 3, 48(30)
  02b75d4  cmpwi 3, -1
  02b75d8  bt 2, 0x2b7774
  02b75dc  lis 4, 43
  02b75e0  li 5, 60
  02b75e4  vspltisw 4, -1
  02b75e8  addi 27, 4, 26092
  02b75ec  vspltisw 5, -1
  02b75f0  li 4, 1600
  02b75f4  vspltisw 7, -1
  02b75f8  li 7, 1604
  02b75fc  vslw 4, 4, 4
  02b7600  vslw 5, 5, 5
  02b7604  li 6, 1608
  02b7608  lvlx 2, 5, 27
  02b760c  li 8, 1632
  02b7610  lvlx 3, 4, 29
  02b7614  li 5, 1640
  02b7618  vspltw 2, 2, 0
  02b761c  li 4, 1636
  02b7620  lvlx 6, 7, 29
  02b7624  slwi 3, 3, 5
  02b7628  li 9, 24
  02b762c  vmaddfp 3, 3, 2, 4
  02b7630  vmaddfp 5, 6, 2, 5
  02b7634  vslw 6, 7, 7
  02b7638  lvlx 4, 6, 29
  02b763c  extsw 3, 3
  02b7640  lvlx 7, 8, 29
  02b7644  li 6, 16
  02b7648  lvlx 8, 4, 29
  02b764c  vmaddfp 4, 4, 2, 6
  02b7650  li 4, 128
  02b7654  lvlx 6, 5, 29
  02b7658  li 5, 136
  02b765c  lis 10, 16624
  02b7660  vmaddfp 3, 7, 2, 3
  02b7664  vmaddfp 5, 8, 2, 5
  02b7668  lvlx 7, 4, 29
  02b766c  li 4, 132
  02b7670  vmaddfp 2, 6, 2, 4
  02b7674  lvlx 4, 4, 29
  02b7678  lvlx 6, 5, 29
  02b767c  lis 4, 162
  02b7680  li 5, 20
  02b7684  addic 26, 4, -8448
  02b7688  vaddfp 3, 7, 3
  02b768c  vaddfp 4, 4, 5
  02b7690  lwz 4, 48(30)
  02b7694  addc 3, 26, 3
  02b7698  slwi 7, 4, 5
  02b769c  slwi 8, 4, 5
  02b76a0  vaddfp 2, 6, 2
  02b76a4  extsw 7, 7
  02b76a8  slwi 4, 4, 5
  02b76ac  addc 7, 26, 7
  02b76b0  extsw 8, 8
  02b76b4  addc 8, 26, 8
  02b76b8  vspltw 3, 3, 0
  02b76bc  vspltw 4, 4, 0
  02b76c0  stvewx 3, 6, 3
  02b76c4  extsw 3, 4
  02b76c8  vspltw 2, 2, 0
  02b76cc  addc 4, 26, 3
  02b76d0  stvewx 4, 5, 7
  02b76d4  lwz 3, 52(30)
  02b76d8  extsw 3, 3
  02b76dc  stvewx 2, 9, 8
  02b76e0  stw 10, 28(4)
  02b76e4  bl 0x502730
  02b76e8  nop
  02b76ec  lis 3, 114
  02b76f0  lfs 2, 0(27)
  02b76f4  lfs 3, -3056(3)
  02b76f8  fmuls 2, 3, 2
  02b76fc  cmpwi 28, 0
  02b7700  lwz 3, 48(30)
  02b7704  slwi 4, 3, 5
  02b7708  slwi 5, 3, 5
  02b770c  extsw 4, 4
  02b7710  slwi 3, 3, 5
  02b7714  fctidz 2, 2
  02b7718  addc 4, 26, 4
  02b771c  extsw 5, 5
  02b7720  extsw 3, 3
  02b7724  addc 5, 26, 5
  02b7728  addc 6, 26, 3
  02b772c  fcfid 2, 2
  02b7730  frsp 2, 2
  02b7734  fdivs 1, 1, 2
  02b7738  stfs 1, 8(4)
  02b773c  lfs 2, 24(27)
  02b7740  fmuls 1, 1, 2
  02b7744  stfs 1, 4(5)
  02b7748  lfs 1, 4(6)
  02b774c  stfsx 1, 26, 3
  02b7750  bf 2, 0x2b7790
  02b7754  lwz 3, 48(30)
  02b7758  cmpwi 3, -1
  02b775c  bt 2, 0x2b7774
  02b7760  extsw 3, 3
  02b7764  bl 0xda9e8
  02b7768  nop
  02b776c  li 3, -1
  02b7770  stw 3, 48(30)
  02b7774  cmpwi 28, 0
  02b7778  bf 2, 0x2b7790
  02b777c  lwz 3, 48(30)
  02b7780  cmpwi 3, -1
  02b7784  bf 2, 0x2b7790
  02b7788  li 3, 4
  02b778c  stb 3, 32(31)
  02b7790  ld 0, 320(1)
  02b7794  mtlr 0
  02b7798  lfd 30, 288(1)
  02b779c  lfd 31, 296(1)
  02b77a0  ld 24, 224(1)
  02b77a4  ld 25, 232(1)
  02b77a8  ld 26, 240(1)
  02b77ac  ld 27, 248(1)
  02b77b0  ld 28, 256(1)
  02b77b4  ld 29, 264(1)
  02b77b8  ld 30, 272(1)
  02b77bc  ld 31, 280(1)
  02b77c0  addi 1, 1, 304
  02b77c4  blr
