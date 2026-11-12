# game/update/moby903.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M903_004a6570:   # 0x4a6570, 0x130 bytes
  04a6570  stdu 1, -176(1)
  04a6574  mflr 0
  04a6578  std 0, 192(1)
  04a657c  stfd 27, 136(1)
  04a6580  stfd 28, 144(1)
  04a6584  stfd 29, 152(1)
  04a6588  stfd 30, 160(1)
  04a658c  stfd 31, 168(1)
  04a6590  std 31, 128(1)
  04a6594  ori 31, 3, 0
  04a6598  lis 3, 165
  04a659c  lis 4, 16128
  04a65a0  std 30, 120(1)
  04a65a4  addic 3, 3, 7136
  04a65a8  lwz 30, 120(31)
  04a65ac  lwz 5, 180(30)
  04a65b0  lwz 6, 164(30)
  04a65b4  slwi 5, 5, 2
  04a65b8  srawi 7, 6, 31
  04a65bc  extsw 5, 5
  04a65c0  srwi 8, 7, 1
  04a65c4  xor 6, 8, 6
  04a65c8  subc 6, 6, 7
  04a65cc  lwzx 3, 3, 5
  04a65d0  cmpw 6, 4
  04a65d4  bf 1, 0x4a65f8
  04a65d8  lwz 4, 0(3)
  04a65dc  slwi 4, 4, 4
  04a65e0  addc 3, 3, 4
  04a65e4  clrldi 3, 3, 32
  04a65e8  lfs 1, 0(3)
  04a65ec  lfs 30, 4(3)
  04a65f0  lfs 31, 8(3)
  04a65f4  b 0x4a6604
  04a65f8  lfs 1, 16(3)
  04a65fc  lfs 30, 20(3)
  04a6600  lfs 31, 24(3)
  04a6604  lis 3, 74
  04a6608  addic 5, 30, 208
  04a660c  addi 4, 3, 25952
  04a6610  addic 3, 31, 16
  04a6614  lfs 29, 0(4)
  04a6618  lfs 28, 4(4)
  04a661c  lfs 27, 8(4)
  04a6620  fmr 2, 29
  04a6624  fmr 3, 28
  04a6628  fmr 4, 27
  04a662c  bl 0x109b40
  04a6630  nop
  04a6634  fmr 1, 30
  04a6638  addic 3, 31, 20
  04a663c  fmr 2, 29
  04a6640  addic 5, 30, 212
  04a6644  fmr 3, 28
  04a6648  fmr 4, 27
  04a664c  bl 0x109b40
  04a6650  nop
  04a6654  fmr 1, 31
  04a6658  addic 3, 31, 24
  04a665c  fmr 2, 29
  04a6660  addic 5, 30, 216
  04a6664  fmr 3, 28
  04a6668  fmr 4, 27
  04a666c  bl 0x109b40
  04a6670  nop
  04a6674  ld 0, 192(1)
  04a6678  mtlr 0
  04a667c  lfd 27, 136(1)
  04a6680  lfd 28, 144(1)
  04a6684  lfd 29, 152(1)
  04a6688  lfd 30, 160(1)
  04a668c  lfd 31, 168(1)
  04a6690  ld 30, 120(1)
  04a6694  ld 31, 128(1)
  04a6698  addi 1, 1, 176
  04a669c  blr

UpdateMoby_903:   # 0x4a66d0, 0x9f0 bytes
  04a66d0  stdu 1, -240(1)
  04a66d4  mflr 0
  04a66d8  std 0, 256(1)
  04a66dc  stfd 24, 176(1)
  04a66e0  stfd 25, 184(1)
  04a66e4  stfd 26, 192(1)
  04a66e8  stfd 27, 200(1)
  04a66ec  stfd 28, 208(1)
  04a66f0  stfd 29, 216(1)
  04a66f4  stfd 30, 224(1)
  04a66f8  stfd 31, 232(1)
  04a66fc  std 30, 160(1)
  04a6700  std 27, 136(1)
  04a6704  lwz 30, 120(3)
  04a6708  std 31, 168(1)
  04a670c  std 28, 144(1)
  04a6710  li 27, 0
  04a6714  ori 31, 3, 0
  04a6718  std 29, 152(1)
  04a671c  ori 28, 27, 0
  04a6720  lwz 29, 180(30)
  04a6724  std 26, 128(1)
  04a6728  cmpwi 29, -1
  04a672c  bt 2, 0x4a7078
  04a6730  lis 3, 165
  04a6734  slwi 4, 29, 2
  04a6738  addic 29, 3, 7136
  04a673c  extsw 4, 4
  04a6740  lwz 3, 204(30)
  04a6744  cmpwi 3, -1
  04a6748  lwzx 29, 29, 4
  04a674c  bt 2, 0x4a67d0
  04a6750  lis 5, 151
  04a6754  extsw 4, 3
  04a6758  addic 26, 5, -25376
  04a675c  addic 26, 26, 128
  04a6760  ori 3, 26, 0
  04a6764  bl 0x110b70
  04a6768  nop
  04a676c  cmpwi 3, 0
  04a6770  bf 2, 0x4a6790
  04a6774  li 3, 255
  04a6778  lhz 4, 52(31)
  04a677c  stb 3, 48(31)
  04a6780  ori 3, 4, 65
  04a6784  stw 27, 148(31)
  04a6788  sth 3, 52(31)
  04a678c  b 0x4a7078
  04a6790  ori 3, 26, 0
  04a6794  lwz 4, 204(30)
  04a6798  extsw 4, 4
  04a679c  bl 0x110b70
  04a67a0  nop
  04a67a4  cmpwi 3, 0
  04a67a8  bt 2, 0x4a67d0
  04a67ac  li 3, -66
  04a67b0  lhz 5, 52(31)
  04a67b4  lwz 6, 36(31)
  04a67b8  li 4, -1
  04a67bc  and 3, 5, 3
  04a67c0  sth 3, 52(31)
  04a67c4  lwz 3, 16(6)
  04a67c8  stw 4, 204(30)
  04a67cc  stw 3, 148(31)
  04a67d0  lwz 3, 192(30)
  04a67d4  cmpwi 3, -1
  04a67d8  bt 2, 0x4a685c
  04a67dc  lis 5, 151
  04a67e0  extsw 4, 3
  04a67e4  addic 3, 5, -25376
  04a67e8  addic 3, 3, 128
  04a67ec  bl 0x110b70
  04a67f0  nop
  04a67f4  cmpwi 3, 0
  04a67f8  bf 2, 0x4a685c
  04a67fc  lis 3, 165
  04a6800  lhz 4, 178(31)
  04a6804  addic 5, 3, 17860
  04a6808  extsh 3, 4
  04a680c  lbzx 5, 5, 3
  04a6810  cmpwi 5, 0
  04a6814  bf 2, 0x4a685c
  04a6818  lis 6, 151
  04a681c  lis 5, 161
  04a6820  srawi 3, 3, 5
  04a6824  addic 5, 5, -13028
  04a6828  sldi 3, 3, 2
  04a682c  lwz 6, -25488(6)
  04a6830  clrlwi 4, 4, 27
  04a6834  addc 3, 3, 5
  04a6838  slwi 5, 6, 8
  04a683c  clrldi 3, 3, 32
  04a6840  extsw 5, 5
  04a6844  li 6, 1
  04a6848  slw 4, 6, 4
  04a684c  lwzx 3, 3, 5
  04a6850  and 3, 3, 4
  04a6854  cmpwi 3, 0
  04a6858  bt 2, 0x4a68e4
  04a685c  lwz 3, 192(30)
  04a6860  cmpwi 3, -1
  04a6864  bt 2, 0x4a68e0
  04a6868  lhz 5, 178(31)
  04a686c  lis 4, 151
  04a6870  extsh 6, 5
  04a6874  lis 3, 161
  04a6878  srawi 6, 6, 5
  04a687c  addic 3, 3, -13028
  04a6880  sldi 6, 6, 2
  04a6884  lwz 4, -25488(4)
  04a6888  lis 7, 165
  04a688c  addc 3, 6, 3
  04a6890  extsh 6, 5
  04a6894  slwi 4, 4, 8
  04a6898  srawi 6, 6, 5
  04a689c  extsw 4, 4
  04a68a0  clrldi 3, 3, 32
  04a68a4  addic 7, 7, 19920
  04a68a8  sldi 6, 6, 2
  04a68ac  clrlwi 8, 5, 27
  04a68b0  li 9, 1
  04a68b4  clrlwi 5, 5, 27
  04a68b8  lwzx 10, 3, 4
  04a68bc  slw 8, 9, 8
  04a68c0  slw 5, 9, 5
  04a68c4  lwzx 9, 7, 6
  04a68c8  or 8, 10, 8
  04a68cc  li 11, -1
  04a68d0  or 5, 9, 5
  04a68d4  stwx 8, 3, 4
  04a68d8  stwx 5, 7, 6
  04a68dc  stw 11, 192(30)
  04a68e0  li 27, 1
  04a68e4  lfs 29, 16(31)
  04a68e8  addic 3, 30, 186
  04a68ec  lfs 30, 20(31)
  04a68f0  lfs 31, 24(31)
  04a68f4  bl 0x4fffb4
  04a68f8  nop
  04a68fc  lbz 3, 32(31)
  04a6900  cmpwi 3, 0
  04a6904  bf 2, 0x4a69c4
  04a6908  lis 3, 74
  04a690c  li 4, 4
  04a6910  lwz 6, 160(30)
  04a6914  addi 3, 3, 26272
  04a6918  li 5, 5
  04a691c  lfs 1, 0(3)
  04a6920  stw 28, 32(30)
  04a6924  clrlwi 3, 6, 24
  04a6928  sth 28, 36(30)
  04a692c  stb 4, 40(30)
  04a6930  cmpwi 3, 0
  04a6934  sth 5, 62(30)
  04a6938  stb 6, 188(31)
  04a693c  bf 2, 0x4a694c
  04a6940  lis 3, 74
  04a6944  addi 3, 3, 26272
  04a6948  lfs 1, 4(3)
  04a694c  fmr 2, 1
  04a6950  ori 26, 28, 0
  04a6954  stfs 2, 164(30)
  04a6958  bl 0x502758
  04a695c  nop
  04a6960  cmpwi 3, 0
  04a6964  bt 2, 0x4a6970
  04a6968  lwz 26, 0(29)
  04a696c  addic 26, 26, -1
  04a6970  sldi 3, 26, 4
  04a6974  li 4, 1
  04a6978  addc 3, 29, 3
  04a697c  li 5, 255
  04a6980  clrldi 3, 3, 32
  04a6984  li 6, -1
  04a6988  lfs 1, 16(3)
  04a698c  stfs 1, 16(31)
  04a6990  lfs 1, 20(3)
  04a6994  stfs 1, 20(31)
  04a6998  lfs 1, 24(3)
  04a699c  stfs 1, 24(31)
  04a69a0  lfs 1, 28(3)
  04a69a4  stfs 1, 28(31)
  04a69a8  sth 28, 186(30)
  04a69ac  stw 28, 168(30)
  04a69b0  stw 28, 188(30)
  04a69b4  stb 4, 32(31)
  04a69b8  stb 5, 48(31)
  04a69bc  sth 5, 50(31)
  04a69c0  stw 6, 196(30)
  04a69c4  lbz 3, 188(31)
  04a69c8  cmpwi 3, 0
  04a69cc  cmpwi 1, 3, -1
  04a69d0  cmpwi 6, 3, 1
  04a69d4  cmpwi 7, 3, 2
  04a69d8  bt 1, 0x4a69e8
  04a69dc  cmpwi 6, 27, 0
  04a69e0  bf 5, 0x4a6fb4
  04a69e4  b 0x4a69f8
  04a69e8  cmpwi 1, 27, 0
  04a69ec  bf 25, 0x4a6ad8
  04a69f0  bf 29, 0x4a6bb8
  04a69f4  b 0x4a6fb4
  04a69f8  bt 26, 0x4a6fb4
  04a69fc  lhz 3, 184(30)
  04a6a00  cmpwi 3, 0
  04a6a04  bt 2, 0x4a6a1c
  04a6a08  ori 3, 31, 0
  04a6a0c  bl 0x117c60
  04a6a10  nop
  04a6a14  cmpwi 3, 0
  04a6a18  bf 2, 0x4a6a9c
  04a6a1c  lis 3, 151
  04a6a20  lwz 4, 0(29)
  04a6a24  addic 3, 3, -25376
  04a6a28  slwi 4, 4, 4
  04a6a2c  addc 4, 29, 4
  04a6a30  clrldi 4, 4, 32
  04a6a34  lfs 1, 132(3)
  04a6a38  lfs 2, 128(3)
  04a6a3c  lfs 3, 20(29)
  04a6a40  lfs 4, 16(29)
  04a6a44  lfs 5, 4(4)
  04a6a48  fsubs 3, 1, 3
  04a6a4c  lfs 6, 0(4)
  04a6a50  fsubs 1, 1, 5
  04a6a54  fsubs 5, 2, 6
  04a6a58  fsubs 2, 2, 4
  04a6a5c  lfs 6, 136(3)
  04a6a60  lfs 4, 8(4)
  04a6a64  lfs 7, 24(29)
  04a6a68  fsubs 4, 6, 4
  04a6a6c  fsubs 6, 6, 7
  04a6a70  fmuls 3, 3, 3
  04a6a74  fmuls 1, 1, 1
  04a6a78  fmadds 2, 2, 2, 3
  04a6a7c  fmadds 1, 5, 5, 1
  04a6a80  fmadds 2, 6, 6, 2
  04a6a84  fmadds 1, 4, 4, 1
  04a6a88  fsqrts 2, 2
  04a6a8c  fsqrts 1, 1
  04a6a90  fcmpu 0, 1, 2
  04a6a94  cror 6, 0, 2
  04a6a98  bt 6, 0x4a6fb4
  04a6a9c  lis 4, 74
  04a6aa0  li 3, 2
  04a6aa4  addi 4, 4, 26272
  04a6aa8  stb 3, 188(31)
  04a6aac  lfs 1, 176(30)
  04a6ab0  lis 3, 114
  04a6ab4  lfs 2, 8(4)
  04a6ab8  lfs 3, 12(4)
  04a6abc  fmuls 1, 1, 2
  04a6ac0  lfs 4, -3056(3)
  04a6ac4  sth 28, 184(30)
  04a6ac8  fmuls 1, 4, 1
  04a6acc  fdivs 1, 3, 1
  04a6ad0  stfs 1, 172(30)
  04a6ad4  b 0x4a6fb4
  04a6ad8  bt 6, 0x4a6fb4
  04a6adc  lhz 3, 184(30)
  04a6ae0  cmpwi 3, 0
  04a6ae4  bt 2, 0x4a6afc
  04a6ae8  ori 3, 31, 0
  04a6aec  bl 0x117c60
  04a6af0  nop
  04a6af4  cmpwi 3, 0
  04a6af8  bf 2, 0x4a6b7c
  04a6afc  lwz 4, 0(29)
  04a6b00  lis 3, 151
  04a6b04  lfs 1, 20(29)
  04a6b08  slwi 4, 4, 4
  04a6b0c  addic 3, 3, -25376
  04a6b10  addc 4, 29, 4
  04a6b14  clrldi 4, 4, 32
  04a6b18  lfs 2, 132(3)
  04a6b1c  lfs 3, 128(3)
  04a6b20  lfs 4, 16(29)
  04a6b24  lfs 5, 4(4)
  04a6b28  fsubs 1, 2, 1
  04a6b2c  lfs 6, 0(4)
  04a6b30  fsubs 4, 3, 4
  04a6b34  fsubs 2, 2, 5
  04a6b38  fsubs 3, 3, 6
  04a6b3c  lfs 5, 136(3)
  04a6b40  lfs 6, 24(29)
  04a6b44  lfs 7, 8(4)
  04a6b48  fsubs 6, 5, 6
  04a6b4c  fsubs 5, 5, 7
  04a6b50  fmuls 1, 1, 1
  04a6b54  fmuls 2, 2, 2
  04a6b58  fmadds 1, 4, 4, 1
  04a6b5c  fmadds 2, 3, 3, 2
  04a6b60  fmadds 1, 6, 6, 1
  04a6b64  fmadds 2, 5, 5, 2
  04a6b68  fsqrts 1, 1
  04a6b6c  fsqrts 2, 2
  04a6b70  fcmpu 0, 1, 2
  04a6b74  cror 6, 0, 2
  04a6b78  bt 6, 0x4a6fb4
  04a6b7c  lis 4, 74
  04a6b80  li 3, 2
  04a6b84  addi 4, 4, 26272
  04a6b88  stb 3, 188(31)
  04a6b8c  lfs 1, 176(30)
  04a6b90  lis 3, 114
  04a6b94  lfs 2, 8(4)
  04a6b98  lfs 3, 4(4)
  04a6b9c  fmuls 1, 1, 2
  04a6ba0  lfs 4, -3056(3)
  04a6ba4  sth 28, 184(30)
  04a6ba8  fmuls 1, 4, 1
  04a6bac  fdivs 1, 3, 1
  04a6bb0  stfs 1, 172(30)
  04a6bb4  b 0x4a6fb4
  04a6bb8  lwz 3, 200(30)
  04a6bbc  cmpwi 3, 0
  04a6bc0  bf 2, 0x4a6bec
  04a6bc4  ori 3, 31, 0
  04a6bc8  bl 0x117c60
  04a6bcc  nop
  04a6bd0  cmpwi 3, 0
  04a6bd4  bt 2, 0x4a6bec
  04a6bd8  lis 3, 151
  04a6bdc  li 4, 4
  04a6be0  addic 3, 3, -25376
  04a6be4  sth 4, 498(3)
  04a6be8  sth 4, 500(3)
  04a6bec  lhz 3, 186(30)
  04a6bf0  cmpwi 3, 0
  04a6bf4  bf 2, 0x4a6cd4
  04a6bf8  lis 3, 74
  04a6bfc  lwz 4, 188(30)
  04a6c00  addi 3, 3, 26272
  04a6c04  cmpwi 4, 0
  04a6c08  lfs 28, 0(3)
  04a6c0c  bf 0, 0x4a6d30
  04a6c10  lis 3, 151
  04a6c14  lfs 1, 20(31)
  04a6c18  addic 3, 3, -25376
  04a6c1c  lfs 2, 16(31)
  04a6c20  lis 4, 74
  04a6c24  lfs 3, 132(3)
  04a6c28  lfs 4, 128(3)
  04a6c2c  fsubs 1, 1, 3
  04a6c30  fsubs 2, 2, 4
  04a6c34  addi 4, 4, 26272
  04a6c38  fmuls 1, 1, 1
  04a6c3c  fmadds 1, 2, 2, 1
  04a6c40  lfs 2, 16(4)
  04a6c44  fsqrts 1, 1
  04a6c48  fcmpu 0, 1, 2
  04a6c4c  cror 6, 1, 2
  04a6c50  bt 6, 0x4a6d30
  04a6c54  lfs 2, 136(3)
  04a6c58  lis 4, 74
  04a6c5c  lfs 1, 24(31)
  04a6c60  addi 4, 4, 26272
  04a6c64  fsubs 3, 2, 1
  04a6c68  lfs 4, 20(4)
  04a6c6c  fabs 3, 3
  04a6c70  fcmpu 0, 3, 4
  04a6c74  cror 6, 1, 2
  04a6c78  bt 6, 0x4a6d30
  04a6c7c  fsubs 1, 1, 2
  04a6c80  lis 3, 74
  04a6c84  addi 3, 3, 26272
  04a6c88  lfs 2, 4(3)
  04a6c8c  fcmpu 0, 1, 2
  04a6c90  cror 6, 0, 2
  04a6c94  bt 6, 0x4a6d30
  04a6c98  lis 3, 74
  04a6c9c  li 4, 24
  04a6ca0  vspltisw 2, -1
  04a6ca4  addi 3, 3, 26272
  04a6ca8  lis 5, 114
  04a6cac  li 6, -3056
  04a6cb0  vslw 2, 2, 2
  04a6cb4  lvlx 3, 4, 3
  04a6cb8  li 3, 186
  04a6cbc  vspltw 3, 3, 0
  04a6cc0  lvlx 4, 6, 5
  04a6cc4  vmaddfp 2, 4, 3, 2
  04a6cc8  vctsxs 2, 2, 0
  04a6ccc  vsplth 2, 2, 1
  04a6cd0  stvehx 2, 3, 30
  04a6cd4  stw 28, 168(30)
  04a6cd8  lwz 28, 196(30)
  04a6cdc  cmpwi 28, -1
  04a6ce0  bt 2, 0x4a6d24
  04a6ce4  sldi 3, 28, 7
  04a6ce8  sldi 5, 28, 4
  04a6cec  lis 4, 150
  04a6cf0  subc 3, 3, 5
  04a6cf4  addic 4, 4, 14176
  04a6cf8  extsw 3, 3
  04a6cfc  addc 3, 4, 3
  04a6d00  lwz 4, 136(3)
  04a6d04  cmpw 4, 31
  04a6d08  bf 2, 0x4a6d24
  04a6d0c  lbz 3, 116(3)
  04a6d10  cmpwi 3, 0
  04a6d14  bt 2, 0x4a6d24
  04a6d18  extsw 3, 28
  04a6d1c  bl 0x15cdb0
  04a6d20  nop
  04a6d24  li 3, -1
  04a6d28  stw 3, 196(30)
  04a6d2c  b 0x4a6fb4
  04a6d30  ori 3, 31, 0
  04a6d34  lwz 4, 196(30)
  04a6d38  extsw 4, 4
  04a6d3c  bl 0x15cc7c
  04a6d40  nop
  04a6d44  cmpwi 3, 0
  04a6d48  bf 2, 0x4a6d64
  04a6d4c  li 3, 0
  04a6d50  li 4, 4
  04a6d54  ori 5, 31, 0
  04a6d58  bl 0x15d12c
  04a6d5c  nop
  04a6d60  stw 3, 196(30)
  04a6d64  lis 3, 114
  04a6d68  lwz 4, 172(30)
  04a6d6c  lfs 1, 168(30)
  04a6d70  lfs 2, 172(30)
  04a6d74  cmpwi 1, 4, 0
  04a6d78  lfs 3, -3052(3)
  04a6d7c  fmadds 1, 2, 3, 1
  04a6d80  fabs 3, 2
  04a6d84  fabs 4, 1
  04a6d88  stfs 1, 168(30)
  04a6d8c  fcmpu 0, 4, 3
  04a6d90  cror 2, 0, 2
  04a6d94  bt 2, 0x4a6da0
  04a6d98  fmr 1, 2
  04a6d9c  stfs 2, 168(30)
  04a6da0  lfs 2, 164(30)
  04a6da4  lis 3, 74
  04a6da8  fadds 1, 2, 1
  04a6dac  addi 3, 3, 26272
  04a6db0  stfs 1, 164(30)
  04a6db4  lfs 2, 28(3)
  04a6db8  fsubs 1, 1, 2
  04a6dbc  fabs 1, 1
  04a6dc0  fcmpu 0, 1, 2
  04a6dc4  cror 2, 0, 2
  04a6dc8  bt 2, 0x4a6e88
  04a6dcc  bf 5, 0x4a6de4
  04a6dd0  lis 3, 74
  04a6dd4  stb 28, 188(31)
  04a6dd8  addi 3, 3, 26272
  04a6ddc  lfs 1, 4(3)
  04a6de0  b 0x4a6df0
  04a6de4  li 3, 1
  04a6de8  fmr 1, 28
  04a6dec  stb 3, 188(31)
  04a6df0  lis 3, 74
  04a6df4  li 4, 32
  04a6df8  stfs 1, 164(30)
  04a6dfc  addi 3, 3, 26272
  04a6e00  vspltisw 3, -1
  04a6e04  lis 5, 114
  04a6e08  stw 28, 168(30)
  04a6e0c  li 6, -3056
  04a6e10  vslw 3, 3, 3
  04a6e14  lvlx 2, 4, 3
  04a6e18  li 3, 186
  04a6e1c  vspltw 2, 2, 0
  04a6e20  lvlx 4, 6, 5
  04a6e24  lwz 28, 196(30)
  04a6e28  vmaddfp 2, 4, 2, 3
  04a6e2c  cmpwi 28, -1
  04a6e30  vctsxs 2, 2, 0
  04a6e34  vsplth 2, 2, 1
  04a6e38  stvehx 2, 3, 30
  04a6e3c  bt 2, 0x4a6e80
  04a6e40  sldi 3, 28, 7
  04a6e44  sldi 5, 28, 4
  04a6e48  lis 4, 150
  04a6e4c  subc 3, 3, 5
  04a6e50  addic 4, 4, 14176
  04a6e54  extsw 3, 3
  04a6e58  addc 3, 4, 3
  04a6e5c  lwz 4, 136(3)
  04a6e60  cmpw 4, 31
  04a6e64  bf 2, 0x4a6e80
  04a6e68  lbz 3, 116(3)
  04a6e6c  cmpwi 3, 0
  04a6e70  bt 2, 0x4a6e80
  04a6e74  extsw 3, 28
  04a6e78  bl 0x15cdb0
  04a6e7c  nop
  04a6e80  li 3, -1
  04a6e84  stw 3, 196(30)
  04a6e88  lwz 3, 0(29)
  04a6e8c  addic 3, 3, -1
  04a6e90  extsw 3, 3
  04a6e94  bl 0x502730
  04a6e98  nop
  04a6e9c  lfs 2, 164(30)
  04a6ea0  fmuls 1, 1, 2
  04a6ea4  bl 0x502758
  04a6ea8  nop
  04a6eac  ori 28, 3, 0
  04a6eb0  bl 0x502730
  04a6eb4  nop
  04a6eb8  fmr 27, 1
  04a6ebc  lwz 3, 0(29)
  04a6ec0  addic 3, 3, -1
  04a6ec4  extsw 3, 3
  04a6ec8  bl 0x502730
  04a6ecc  nop
  04a6ed0  lwz 4, 0(29)
  04a6ed4  lfs 2, 164(30)
  04a6ed8  sldi 3, 28, 4
  04a6edc  addic 4, 4, -1
  04a6ee0  fmsubs 27, 1, 2, 27
  04a6ee4  cmpw 28, 4
  04a6ee8  bf 2, 0x4a6f04
  04a6eec  addc 3, 29, 3
  04a6ef0  clrldi 3, 3, 32
  04a6ef4  lfs 1, 16(3)
  04a6ef8  lfs 26, 20(3)
  04a6efc  lfs 27, 24(3)
  04a6f00  b 0x4a6f3c
  04a6f04  addc 3, 29, 3
  04a6f08  clrldi 3, 3, 32
  04a6f0c  lfs 1, 32(3)
  04a6f10  lfs 2, 16(3)
  04a6f14  lfs 3, 36(3)
  04a6f18  lfs 26, 20(3)
  04a6f1c  lfs 4, 40(3)
  04a6f20  fsubs 1, 1, 2
  04a6f24  lfs 5, 24(3)
  04a6f28  fsubs 3, 3, 26
  04a6f2c  fsubs 4, 4, 5
  04a6f30  fmadds 1, 27, 1, 2
  04a6f34  fmadds 26, 27, 3, 26
  04a6f38  fmadds 27, 27, 4, 5
  04a6f3c  lis 3, 74
  04a6f40  fmr 4, 28
  04a6f44  addic 5, 30, 208
  04a6f48  addi 4, 3, 26272
  04a6f4c  addic 3, 31, 16
  04a6f50  lfs 25, 36(4)
  04a6f54  lfs 24, 40(4)
  04a6f58  fmr 2, 25
  04a6f5c  fmr 3, 24
  04a6f60  bl 0x109b40
  04a6f64  nop
  04a6f68  fmr 1, 26
  04a6f6c  addic 3, 31, 20
  04a6f70  fmr 2, 25
  04a6f74  addic 5, 30, 212
  04a6f78  fmr 3, 24
  04a6f7c  fmr 4, 28
  04a6f80  bl 0x109b40
  04a6f84  nop
  04a6f88  fmr 1, 27
  04a6f8c  addic 3, 31, 24
  04a6f90  fmr 2, 25
  04a6f94  addic 5, 30, 216
  04a6f98  fmr 3, 24
  04a6f9c  fmr 4, 28
  04a6fa0  bl 0x109b40
  04a6fa4  nop
  04a6fa8  lfs 1, 24(31)
  04a6fac  fsubs 1, 1, 31
  04a6fb0  stfs 1, 188(30)
  04a6fb4  lbz 3, 188(31)
  04a6fb8  cmpwi 3, 2
  04a6fbc  bt 2, 0x4a6fc8
  04a6fc0  ori 3, 31, 0
  04a6fc4  bl 0x4a6570
  04a6fc8  lfs 1, 16(31)
  04a6fcc  addic 5, 31, 64
  04a6fd0  lfs 2, 20(31)
  04a6fd4  addic 3, 30, 96
  04a6fd8  fsubs 1, 1, 29
  04a6fdc  lfs 3, 24(31)
  04a6fe0  fsubs 2, 2, 30
  04a6fe4  lfs 4, 28(31)
  04a6fe8  fsubs 3, 3, 31
  04a6fec  ori 6, 5, 0
  04a6ff0  stfs 4, 124(1)
  04a6ff4  addic 4, 1, 112
  04a6ff8  stfs 1, 112(1)
  04a6ffc  stfs 2, 116(1)
  04a7000  stfs 3, 120(1)
  04a7004  bl 0x112900
  04a7008  nop
  04a700c  ori 3, 31, 0
  04a7010  bl 0x117c60
  04a7014  nop
  04a7018  cmpwi 3, 0
  04a701c  bf 2, 0x4a7078
  04a7020  lis 3, 151
  04a7024  lfs 1, 20(31)
  04a7028  lfs 2, 16(31)
  04a702c  addic 3, 3, -25376
  04a7030  lfs 3, 132(3)
  04a7034  lfs 4, 128(3)
  04a7038  fsubs 1, 1, 3
  04a703c  fsubs 2, 2, 4
  04a7040  lis 3, 74
  04a7044  addi 3, 3, 26272
  04a7048  fmuls 1, 1, 1
  04a704c  fmadds 1, 2, 2, 1
  04a7050  lfs 2, 16(3)
  04a7054  fsqrts 1, 1
  04a7058  fcmpu 0, 1, 2
  04a705c  cror 6, 0, 2
  04a7060  bt 6, 0x4a7078
  04a7064  lhz 3, 186(30)
  04a7068  cmpwi 3, 0
  04a706c  bf 2, 0x4a7078
  04a7070  li 3, 1
  04a7074  sth 3, 184(30)
  04a7078  ld 0, 256(1)
  04a707c  mtlr 0
  04a7080  lfd 24, 176(1)
  04a7084  lfd 25, 184(1)
  04a7088  lfd 26, 192(1)
  04a708c  lfd 27, 200(1)
  04a7090  lfd 28, 208(1)
  04a7094  lfd 29, 216(1)
  04a7098  lfd 30, 224(1)
  04a709c  lfd 31, 232(1)
  04a70a0  ld 26, 128(1)
  04a70a4  ld 27, 136(1)
  04a70a8  ld 28, 144(1)
  04a70ac  ld 29, 152(1)
  04a70b0  ld 30, 160(1)
  04a70b4  ld 31, 168(1)
  04a70b8  addi 1, 1, 240
  04a70bc  blr
