# game/update/moby575.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M575_003c656c:   # 0x3c656c, 0x14 bytes
  03c656c  lis 3, 132
  03c6570  lis 4, 1
  03c6574  addic 3, 3, 24560
  03c6578  stw 4, 72(3)
  03c657c  blr

M575_003c65c8:   # 0x3c65c8, 0x668 bytes
  03c65c8  stdu 1, -368(1)
  03c65cc  mflr 0
  03c65d0  std 0, 384(1)
  03c65d4  stfd 21, 280(1)
  03c65d8  stfd 22, 288(1)
  03c65dc  stfd 23, 296(1)
  03c65e0  stfd 24, 304(1)
  03c65e4  stfd 25, 312(1)
  03c65e8  stfd 26, 320(1)
  03c65ec  stfd 27, 328(1)
  03c65f0  stfd 28, 336(1)
  03c65f4  stfd 29, 344(1)
  03c65f8  stfd 30, 352(1)
  03c65fc  stfd 31, 360(1)
  03c6600  std 27, 240(1)
  03c6604  lis 8, 60
  03c6608  lis 27, 114
  03c660c  std 28, 248(1)
  03c6610  fmr 30, 1
  03c6614  addi 28, 8, 25984
  03c6618  std 31, 272(1)
  03c661c  std 26, 232(1)
  03c6620  std 25, 224(1)
  03c6624  ori 31, 3, 0
  03c6628  ori 26, 7, 0
  03c662c  std 29, 256(1)
  03c6630  ori 25, 6, 0
  03c6634  ori 29, 5, 0
  03c6638  lfs 31, 0(28)
  03c663c  std 30, 264(1)
  03c6640  lfs 2, -3056(27)
  03c6644  ori 30, 4, 0
  03c6648  fmuls 1, 2, 31
  03c664c  fctiwz 1, 1
  03c6650  stfd 1, 200(1)
  03c6654  lwz 3, 204(1)
  03c6658  extsw 3, 3
  03c665c  bl 0x502730
  03c6660  nop
  03c6664  fmr 29, 1
  03c6668  ori 3, 26, 0
  03c666c  bl 0x502730
  03c6670  nop
  03c6674  lfs 2, 4(28)
  03c6678  fmuls 1, 1, 2
  03c667c  lfs 2, 8(28)
  03c6680  fmr 28, 2
  03c6684  fdivs 29, 1, 29
  03c6688  fmuls 1, 29, 28
  03c668c  bl 0x10de78
  03c6690  nop
  03c6694  lfs 27, 12(28)
  03c6698  lfs 26, 16(28)
  03c669c  fadds 1, 1, 27
  03c66a0  lfs 25, 20(28)
  03c66a4  lfs 24, 24(28)
  03c66a8  lfs 23, 28(28)
  03c66ac  lfs 22, 32(28)
  03c66b0  lfs 21, 36(28)
  03c66b4  fsubs 2, 26, 1
  03c66b8  fsubs 3, 25, 1
  03c66bc  fsub 4, 1, 2
  03c66c0  fsel 1, 4, 2, 1
  03c66c4  lfs 2, 40(28)
  03c66c8  fsub 4, 3, 1
  03c66cc  fsel 1, 4, 3, 1
  03c66d0  fmuls 3, 1, 1
  03c66d4  fmuls 4, 3, 1
  03c66d8  fmuls 6, 3, 4
  03c66dc  fmadds 1, 4, 24, 1
  03c66e0  lfs 4, 44(28)
  03c66e4  fmuls 5, 3, 6
  03c66e8  fmadds 6, 6, 23, 1
  03c66ec  fmr 1, 29
  03c66f0  fmuls 3, 3, 5
  03c66f4  fmadds 5, 5, 22, 6
  03c66f8  fmadds 3, 3, 21, 5
  03c66fc  fsubs 2, 2, 3
  03c6700  fmuls 2, 2, 4
  03c6704  bl 0x502578
  03c6708  nop
  03c670c  lfs 3, 48(28)
  03c6710  lfs 2, 52(28)
  03c6714  fmuls 1, 1, 3
  03c6718  bl 0x502578
  03c671c  nop
  03c6720  lfs 2, 56(28)
  03c6724  bl 0x5025e0
  03c6728  nop
  03c672c  fmr 2, 1
  03c6730  fmr 1, 30
  03c6734  bl 0x502578
  03c6738  nop
  03c673c  lfs 2, -3056(27)
  03c6740  fmr 30, 1
  03c6744  fmuls 2, 2, 31
  03c6748  fctiwz 1, 2
  03c674c  stfd 1, 200(1)
  03c6750  lwz 3, 204(1)
  03c6754  extsw 3, 3
  03c6758  bl 0x502730
  03c675c  nop
  03c6760  lfs 2, -3056(27)
  03c6764  fmuls 2, 2, 31
  03c6768  fmr 31, 1
  03c676c  fctiwz 1, 2
  03c6770  stfd 1, 200(1)
  03c6774  lwz 3, 204(1)
  03c6778  subc 3, 3, 26
  03c677c  extsw 3, 3
  03c6780  bl 0x502730
  03c6784  nop
  03c6788  fadds 2, 30, 27
  03c678c  lfs 3, 60(28)
  03c6790  fsubs 4, 26, 30
  03c6794  fmuls 1, 1, 3
  03c6798  fsubs 5, 25, 30
  03c679c  li 3, 0
  03c67a0  fsubs 6, 26, 2
  03c67a4  fsub 7, 30, 4
  03c67a8  fsubs 8, 25, 2
  03c67ac  fdivs 1, 1, 31
  03c67b0  fsub 9, 2, 6
  03c67b4  fsel 4, 7, 4, 30
  03c67b8  fsel 2, 9, 6, 2
  03c67bc  fsub 6, 5, 4
  03c67c0  fsub 7, 8, 2
  03c67c4  fsel 4, 6, 5, 4
  03c67c8  fsel 2, 7, 8, 2
  03c67cc  fmuls 5, 4, 4
  03c67d0  fmuls 6, 2, 2
  03c67d4  fmuls 7, 5, 4
  03c67d8  fmuls 8, 6, 2
  03c67dc  fmuls 9, 5, 7
  03c67e0  fmadds 4, 7, 24, 4
  03c67e4  fadds 1, 1, 28
  03c67e8  fmuls 7, 6, 8
  03c67ec  fmadds 2, 8, 24, 2
  03c67f0  fmuls 8, 5, 9
  03c67f4  fmadds 4, 9, 23, 4
  03c67f8  fmuls 9, 6, 7
  03c67fc  fmadds 2, 7, 23, 2
  03c6800  fmuls 5, 5, 8
  03c6804  fmadds 4, 8, 22, 4
  03c6808  fmuls 6, 6, 9
  03c680c  fmadds 2, 9, 22, 2
  03c6810  fmadds 4, 5, 21, 4
  03c6814  fmadds 2, 6, 21, 2
  03c6818  fmuls 4, 1, 4
  03c681c  fmuls 1, 1, 2
  03c6820  stfs 4, 4(31)
  03c6824  lfs 2, 64(28)
  03c6828  lfs 5, 4(25)
  03c682c  fadds 4, 4, 5
  03c6830  stfs 1, 0(31)
  03c6834  lfs 5, 0(25)
  03c6838  fadds 1, 1, 5
  03c683c  stfs 4, 4(31)
  03c6840  lfs 5, 4(29)
  03c6844  fsubs 5, 5, 4
  03c6848  stfs 1, 0(31)
  03c684c  lfs 4, 0(29)
  03c6850  fsubs 1, 4, 1
  03c6854  fmr 4, 2
  03c6858  fabs 6, 5
  03c685c  fabs 7, 1
  03c6860  stfs 1, 124(1)
  03c6864  stfs 5, 128(1)
  03c6868  stw 3, 8(31)
  03c686c  lfs 2, 8(25)
  03c6870  fadds 2, 2, 3
  03c6874  lis 3, 115
  03c6878  fsubs 1, 7, 6
  03c687c  addic 3, 3, 22784
  03c6880  stfs 1, 132(1)
  03c6884  lwz 4, 124(1)
  03c6888  lfs 1, 124(1)
  03c688c  lwz 5, 128(1)
  03c6890  stfs 2, 8(31)
  03c6894  fabs 1, 1
  03c6898  lfs 2, 128(1)
  03c689c  rlwinm 5, 5, 3, 29, 29
  03c68a0  lfs 3, 68(28)
  03c68a4  fabs 5, 2
  03c68a8  lwz 6, 132(1)
  03c68ac  lfs 2, 132(1)
  03c68b0  rlwimi 5, 6, 2, 30, 30
  03c68b4  fsub 8, 2, 4
  03c68b8  fsub 9, 2, 4
  03c68bc  rlwimi 5, 4, 4, 28, 28
  03c68c0  ori 4, 3, 0
  03c68c4  rlwimi 4, 5, 2, 26, 28
  03c68c8  slwi 5, 5, 2
  03c68cc  clrldi 4, 4, 32
  03c68d0  fsel 6, 8, 1, 6
  03c68d4  lfsx 1, 3, 5
  03c68d8  lfs 2, 4(4)
  03c68dc  fsel 5, 9, 5, 7
  03c68e0  fcmpu 0, 6, 4
  03c68e4  bt 1, 0x3c68f0
  03c68e8  fmr 1, 4
  03c68ec  b 0x3c6a08
  03c68f0  fsubs 7, 5, 6
  03c68f4  fadds 5, 5, 6
  03c68f8  addic 4, 1, 16
  03c68fc  li 7, 2
  03c6900  addic 5, 4, 152
  03c6904  addic 6, 4, 168
  03c6908  mtctr 7
  03c690c  fdivs 5, 7, 5
  03c6910  fmuls 6, 5, 5
  03c6914  stfs 5, 180(1)
  03c6918  stfs 5, 172(1)
  03c691c  stfs 5, 176(1)
  03c6920  stfs 5, 168(1)
  03c6924  lfs 8, 180(1)
  03c6928  lfs 9, 172(1)
  03c692c  lfs 10, 176(1)
  03c6930  fmuls 7, 6, 6
  03c6934  fmuls 9, 9, 6
  03c6938  fmuls 8, 8, 7
  03c693c  fmuls 5, 7, 7
  03c6940  fmuls 7, 10, 7
  03c6944  stfs 9, 172(1)
  03c6948  fmuls 6, 8, 6
  03c694c  stfs 7, 176(1)
  03c6950  stfs 6, 180(1)
  03c6954  lfs 6, 152(4)
  03c6958  fmuls 6, 6, 5
  03c695c  stfs 6, 168(4)
  03c6960  lfs 6, 4(5)
  03c6964  addic 4, 4, 8
  03c6968  addic 5, 5, 8
  03c696c  fmuls 6, 6, 5
  03c6970  stfs 6, 4(6)
  03c6974  addic 6, 6, 8
  03c6978  bdnz 0x3c6954
  03c697c  li 6, 4
  03c6980  ori 4, 1, 0
  03c6984  mtctr 6
  03c6988  lis 5, 115
  03c698c  addic 6, 4, 168
  03c6990  addic 5, 5, 22752
  03c6994  ori 8, 6, 0
  03c6998  lfs 5, 168(4)
  03c699c  lfs 6, 0(5)
  03c69a0  fmuls 5, 5, 6
  03c69a4  lfs 6, 4(5)
  03c69a8  addic 5, 5, 8
  03c69ac  stfs 5, 168(4)
  03c69b0  lfs 5, 4(6)
  03c69b4  addic 4, 4, 8
  03c69b8  fmuls 5, 5, 6
  03c69bc  stfs 5, 4(6)
  03c69c0  addic 6, 6, 8
  03c69c4  bdnz 0x3c6998
  03c69c8  fmr 5, 4
  03c69cc  ori 4, 1, 0
  03c69d0  mtctr 7
  03c69d4  lfs 6, 168(4)
  03c69d8  fadds 5, 5, 6
  03c69dc  addic 4, 4, 16
  03c69e0  lfs 6, 4(8)
  03c69e4  lfs 7, 8(8)
  03c69e8  lfs 8, 12(8)
  03c69ec  addic 8, 8, 16
  03c69f0  fadds 5, 5, 6
  03c69f4  fadds 5, 5, 7
  03c69f8  fadds 5, 5, 8
  03c69fc  bdnz 0x3c69d4
  03c6a00  fadds 5, 5, 3
  03c6a04  fmadds 1, 5, 1, 2
  03c6a08  lfs 2, 4(31)
  03c6a0c  lfs 5, 4(29)
  03c6a10  lfs 6, 0(31)
  03c6a14  fsubs 2, 2, 5
  03c6a18  lfs 5, 0(29)
  03c6a1c  stfs 1, 8(30)
  03c6a20  fsubs 5, 6, 5
  03c6a24  fmuls 2, 2, 2
  03c6a28  fmadds 1, 5, 5, 2
  03c6a2c  lfs 2, 8(29)
  03c6a30  lfs 5, 8(31)
  03c6a34  fsubs 2, 2, 5
  03c6a38  fsqrts 1, 1
  03c6a3c  stfs 2, 116(1)
  03c6a40  fabs 6, 2
  03c6a44  fabs 5, 1
  03c6a48  stfs 1, 112(1)
  03c6a4c  lwz 4, 116(1)
  03c6a50  rlwinm 4, 4, 3, 29, 29
  03c6a54  fsubs 1, 5, 6
  03c6a58  stfs 1, 120(1)
  03c6a5c  lwz 5, 112(1)
  03c6a60  lfs 1, 112(1)
  03c6a64  lfs 2, 116(1)
  03c6a68  lwz 6, 120(1)
  03c6a6c  lfs 7, 120(1)
  03c6a70  fabs 1, 1
  03c6a74  rlwimi 4, 6, 2, 30, 30
  03c6a78  fsub 8, 7, 4
  03c6a7c  fabs 2, 2
  03c6a80  fsub 7, 7, 4
  03c6a84  rlwimi 4, 5, 4, 28, 28
  03c6a88  ori 5, 3, 0
  03c6a8c  rlwimi 5, 4, 2, 26, 28
  03c6a90  slwi 4, 4, 2
  03c6a94  clrldi 5, 5, 32
  03c6a98  fsel 6, 8, 1, 6
  03c6a9c  lfsx 1, 3, 4
  03c6aa0  fsel 5, 7, 2, 5
  03c6aa4  lfs 2, 4(5)
  03c6aa8  fcmpu 0, 6, 4
  03c6aac  bt 1, 0x3c6ab4
  03c6ab0  b 0x3c6bc8
  03c6ab4  fsubs 7, 5, 6
  03c6ab8  fadds 5, 5, 6
  03c6abc  addic 3, 1, 16
  03c6ac0  li 7, 2
  03c6ac4  addic 5, 3, 136
  03c6ac8  addic 4, 3, 120
  03c6acc  mtctr 7
  03c6ad0  fdivs 5, 7, 5
  03c6ad4  fmuls 6, 5, 5
  03c6ad8  stfs 5, 148(1)
  03c6adc  stfs 5, 140(1)
  03c6ae0  stfs 5, 144(1)
  03c6ae4  stfs 5, 136(1)
  03c6ae8  lfs 8, 148(1)
  03c6aec  lfs 9, 140(1)
  03c6af0  lfs 10, 144(1)
  03c6af4  fmuls 7, 6, 6
  03c6af8  fmuls 9, 9, 6
  03c6afc  fmuls 8, 8, 7
  03c6b00  fmuls 5, 7, 7
  03c6b04  fmuls 7, 10, 7
  03c6b08  stfs 9, 140(1)
  03c6b0c  fmuls 6, 8, 6
  03c6b10  stfs 7, 144(1)
  03c6b14  stfs 6, 148(1)
  03c6b18  lfs 6, 120(3)
  03c6b1c  fmuls 6, 6, 5
  03c6b20  stfs 6, 136(3)
  03c6b24  lfs 6, 4(4)
  03c6b28  addic 4, 4, 8
  03c6b2c  fmuls 6, 6, 5
  03c6b30  addic 3, 3, 8
  03c6b34  stfs 6, 4(5)
  03c6b38  addic 5, 5, 8
  03c6b3c  bdnz 0x3c6b18
  03c6b40  li 5, 4
  03c6b44  ori 3, 1, 0
  03c6b48  mtctr 5
  03c6b4c  lis 4, 115
  03c6b50  addic 5, 3, 136
  03c6b54  addic 4, 4, 22752
  03c6b58  ori 6, 5, 0
  03c6b5c  lfs 5, 136(3)
  03c6b60  lfs 6, 0(4)
  03c6b64  fmuls 5, 5, 6
  03c6b68  lfs 6, 4(4)
  03c6b6c  addic 4, 4, 8
  03c6b70  stfs 5, 136(3)
  03c6b74  lfs 5, 4(5)
  03c6b78  addic 3, 3, 8
  03c6b7c  fmuls 5, 5, 6
  03c6b80  stfs 5, 4(5)
  03c6b84  addic 5, 5, 8
  03c6b88  bdnz 0x3c6b5c
  03c6b8c  ori 3, 1, 0
  03c6b90  mtctr 7
  03c6b94  lfs 5, 136(3)
  03c6b98  fadds 4, 4, 5
  03c6b9c  addic 3, 3, 16
  03c6ba0  lfs 5, 4(6)
  03c6ba4  lfs 6, 8(6)
  03c6ba8  lfs 7, 12(6)
  03c6bac  addic 6, 6, 16
  03c6bb0  fadds 4, 4, 5
  03c6bb4  fadds 4, 4, 6
  03c6bb8  fadds 4, 4, 7
  03c6bbc  bdnz 0x3c6b94
  03c6bc0  fadds 4, 4, 3
  03c6bc4  fmadds 4, 4, 1, 2
  03c6bc8  fneg 1, 4
  03c6bcc  li 3, 0
  03c6bd0  stw 3, 0(30)
  03c6bd4  stfs 1, 4(30)
  03c6bd8  ld 0, 384(1)
  03c6bdc  mtlr 0
  03c6be0  lfd 21, 280(1)
  03c6be4  lfd 22, 288(1)
  03c6be8  lfd 23, 296(1)
  03c6bec  lfd 24, 304(1)
  03c6bf0  lfd 25, 312(1)
  03c6bf4  lfd 26, 320(1)
  03c6bf8  lfd 27, 328(1)
  03c6bfc  lfd 28, 336(1)
  03c6c00  lfd 29, 344(1)
  03c6c04  lfd 30, 352(1)
  03c6c08  lfd 31, 360(1)
  03c6c0c  ld 25, 224(1)
  03c6c10  ld 26, 232(1)
  03c6c14  ld 27, 240(1)
  03c6c18  ld 28, 248(1)
  03c6c1c  ld 29, 256(1)
  03c6c20  ld 30, 264(1)
  03c6c24  ld 31, 272(1)
  03c6c28  addi 1, 1, 368
  03c6c2c  blr

UpdateMoby_575:   # 0x3c6c48, 0x438 bytes
  03c6c48  stdu 1, -272(1)
  03c6c4c  mflr 0
  03c6c50  std 0, 288(1)
  03c6c54  std 31, 264(1)
  03c6c58  cmpwi 3, 0
  03c6c5c  std 30, 256(1)
  03c6c60  std 29, 248(1)
  03c6c64  std 28, 240(1)
  03c6c68  std 27, 232(1)
  03c6c6c  std 26, 224(1)
  03c6c70  std 25, 216(1)
  03c6c74  ori 31, 3, 0
  03c6c78  bt 2, 0x3c7054
  03c6c7c  lwz 30, 120(31)
  03c6c80  cmpwi 30, 0
  03c6c84  bt 2, 0x3c7054
  03c6c88  lbz 4, 32(31)
  03c6c8c  cmpwi 4, 4
  03c6c90  cmpwi 1, 4, 3
  03c6c94  cmpwi 6, 4, 2
  03c6c98  cmpwi 7, 4, 1
  03c6c9c  bt 2, 0x3c7044
  03c6ca0  bt 6, 0x3c6ffc
  03c6ca4  bt 26, 0x3c6eb8
  03c6ca8  li 3, 255
  03c6cac  bt 30, 0x3c6cd0
  03c6cb0  cmpwi 4, 0
  03c6cb4  bf 2, 0x3c7044
  03c6cb8  li 4, 1
  03c6cbc  li 5, 0
  03c6cc0  stb 3, 7(30)
  03c6cc4  stb 4, 32(31)
  03c6cc8  stw 5, 20(30)
  03c6ccc  b 0x3c7044
  03c6cd0  lis 29, 151
  03c6cd4  li 28, 0
  03c6cd8  addic 29, 29, -25376
  03c6cdc  lwz 4, 4240(29)
  03c6ce0  cmpwi 4, 0
  03c6ce4  bt 2, 0x3c6d04
  03c6ce8  lwz 4, 4280(29)
  03c6cec  cmpwi 4, 26
  03c6cf0  bf 2, 0x3c6d04
  03c6cf4  stb 28, 7(30)
  03c6cf8  li 28, 1
  03c6cfc  stb 3, 8(30)
  03c6d00  b 0x3c6d0c
  03c6d04  stb 3, 7(30)
  03c6d08  stb 28, 8(30)
  03c6d0c  addic 5, 1, 112
  03c6d10  ori 3, 31, 0
  03c6d14  li 4, 0
  03c6d18  bl 0xf1114
  03c6d1c  nop
  03c6d20  lfs 1, 132(29)
  03c6d24  lfs 2, 116(1)
  03c6d28  lfs 3, 128(29)
  03c6d2c  fsubs 1, 1, 2
  03c6d30  lfs 2, 112(1)
  03c6d34  fsubs 2, 3, 2
  03c6d38  lis 3, 60
  03c6d3c  addi 3, 3, 27696
  03c6d40  fmuls 1, 1, 1
  03c6d44  fmadds 1, 2, 2, 1
  03c6d48  lfs 2, 0(3)
  03c6d4c  fsqrts 1, 1
  03c6d50  fcmpu 0, 1, 2
  03c6d54  cror 6, 1, 2
  03c6d58  bt 6, 0x3c7044
  03c6d5c  ori 3, 31, 0
  03c6d60  ori 4, 30, 0
  03c6d64  bl 0x10c808
  03c6d68  nop
  03c6d6c  cmpwi 28, 0
  03c6d70  bt 2, 0x3c7044
  03c6d74  lwz 3, 4240(29)
  03c6d78  lbz 3, 188(3)
  03c6d7c  cmpwi 3, 0
  03c6d80  bt 2, 0x3c7044
  03c6d84  lis 3, 60
  03c6d88  vspltisw 2, -1
  03c6d8c  li 4, 4
  03c6d90  addi 28, 3, 27696
  03c6d94  lis 27, 114
  03c6d98  li 3, -3056
  03c6d9c  vslw 2, 2, 2
  03c6da0  li 8, 16
  03c6da4  lvlx 3, 4, 28
  03c6da8  lfs 1, 4(28)
  03c6dac  vspltw 3, 3, 0
  03c6db0  lvlx 4, 3, 27
  03c6db4  lfs 2, -3056(27)
  03c6db8  addic 26, 1, 128
  03c6dbc  addic 25, 1, 144
  03c6dc0  vmaddfp 2, 4, 3, 2
  03c6dc4  fmuls 1, 2, 1
  03c6dc8  addic 5, 31, 16
  03c6dcc  ori 3, 26, 0
  03c6dd0  ori 4, 25, 0
  03c6dd4  ori 6, 5, 0
  03c6dd8  fctiwz 1, 1
  03c6ddc  vctsxs 2, 2, 0
  03c6de0  stfd 1, 192(1)
  03c6de4  vspltw 2, 2, 0
  03c6de8  lwz 7, 196(1)
  03c6dec  extsw 7, 7
  03c6df0  stvewx 2, 8, 30
  03c6df4  lfs 1, 72(31)
  03c6df8  bl 0x3c65c8
  03c6dfc  li 3, 31
  03c6e00  li 4, 0
  03c6e04  bl 0xb72b0
  03c6e08  nop
  03c6e0c  lfs 1, 8(28)
  03c6e10  lfs 2, -3056(27)
  03c6e14  li 3, 70
  03c6e18  fmuls 1, 2, 1
  03c6e1c  li 4, 0
  03c6e20  fctidz 1, 1
  03c6e24  fcfid 1, 1
  03c6e28  frsp 1, 1
  03c6e2c  bl 0x85300
  03c6e30  nop
  03c6e34  lfs 1, 112(1)
  03c6e38  lfs 2, 116(1)
  03c6e3c  stfs 1, 128(29)
  03c6e40  lfs 1, 120(1)
  03c6e44  stfs 2, 132(29)
  03c6e48  lfs 2, 124(1)
  03c6e4c  stfs 1, 136(29)
  03c6e50  stfs 2, 140(29)
  03c6e54  lfs 1, 64(31)
  03c6e58  stfs 1, 144(29)
  03c6e5c  lfs 1, 68(31)
  03c6e60  stfs 1, 148(29)
  03c6e64  lfs 1, 72(31)
  03c6e68  stfs 1, 152(29)
  03c6e6c  lfs 2, 76(31)
  03c6e70  stfs 2, 156(29)
  03c6e74  lfs 2, 12(28)
  03c6e78  bl 0x502578
  03c6e7c  nop
  03c6e80  ori 3, 26, 0
  03c6e84  stfs 1, 152(29)
  03c6e88  ori 4, 25, 0
  03c6e8c  li 5, 0
  03c6e90  li 6, 0
  03c6e94  li 7, 0
  03c6e98  bl 0x47f74
  03c6e9c  nop
  03c6ea0  lis 3, 150
  03c6ea4  li 4, 1
  03c6ea8  li 5, 2
  03c6eac  stw 4, -12480(3)
  03c6eb0  stb 5, 32(31)
  03c6eb4  b 0x3c7044
  03c6eb8  lwz 3, 20(30)
  03c6ebc  cmpwi 3, 0
  03c6ec0  bf 2, 0x3c6f58
  03c6ec4  addic 29, 1, 160
  03c6ec8  addic 5, 31, 16
  03c6ecc  lwz 7, 16(30)
  03c6ed0  ori 3, 29, 0
  03c6ed4  lfs 1, 72(31)
  03c6ed8  addic 4, 1, 176
  03c6edc  ori 6, 5, 0
  03c6ee0  extsw 7, 7
  03c6ee4  bl 0x3c65c8
  03c6ee8  lis 3, 60
  03c6eec  li 5, 0
  03c6ef0  addi 4, 3, 27696
  03c6ef4  ori 3, 29, 0
  03c6ef8  li 6, 0
  03c6efc  lfs 1, 16(4)
  03c6f00  bl 0x59e20
  03c6f04  nop
  03c6f08  cmpwi 3, 0
  03c6f0c  bt 2, 0x3c6f40
  03c6f10  lis 3, 161
  03c6f14  li 4, 1
  03c6f18  addic 3, 3, 2368
  03c6f1c  lfs 1, 48(3)
  03c6f20  lfs 2, 52(3)
  03c6f24  stfs 1, 160(1)
  03c6f28  lfs 1, 56(3)
  03c6f2c  stfs 2, 164(1)
  03c6f30  lfs 2, 60(3)
  03c6f34  stfs 1, 168(1)
  03c6f38  stfs 2, 172(1)
  03c6f3c  stw 4, 20(30)
  03c6f40  addic 3, 1, 160
  03c6f44  bl 0x47b98
  03c6f48  nop
  03c6f4c  addic 3, 1, 176
  03c6f50  bl 0x47c08
  03c6f54  nop
  03c6f58  addic 3, 30, 16
  03c6f5c  bl 0x4fff60
  03c6f60  nop
  03c6f64  cmpwi 3, 0
  03c6f68  bt 2, 0x3c6fac
  03c6f6c  lis 3, 60
  03c6f70  lis 4, 114
  03c6f74  addi 3, 3, 27696
  03c6f78  lfs 1, 8(3)
  03c6f7c  lfs 2, -3056(4)
  03c6f80  li 3, 72
  03c6f84  li 4, 0
  03c6f88  fmuls 1, 2, 1
  03c6f8c  fctidz 1, 1
  03c6f90  fcfid 1, 1
  03c6f94  frsp 1, 1
  03c6f98  bl 0x85300
  03c6f9c  nop
  03c6fa0  li 3, 3
  03c6fa4  stb 3, 32(31)
  03c6fa8  b 0x3c7044
  03c6fac  lis 3, 151
  03c6fb0  addic 3, 3, -25376
  03c6fb4  lwz 3, 2712(3)
  03c6fb8  rlwinm 3, 3, 0, 30, 30
  03c6fbc  cmpwi 3, 0
  03c6fc0  bt 2, 0x3c7044
  03c6fc4  lis 3, 60
  03c6fc8  lis 4, 114
  03c6fcc  addi 3, 3, 27696
  03c6fd0  lfs 1, 8(3)
  03c6fd4  lfs 2, -3056(4)
  03c6fd8  li 3, 71
  03c6fdc  li 4, 0
  03c6fe0  fmuls 1, 2, 1
  03c6fe4  fctidz 1, 1
  03c6fe8  fcfid 1, 1
  03c6fec  frsp 1, 1
  03c6ff0  bl 0x85300
  03c6ff4  nop
  03c6ff8  b 0x3c7044
  03c6ffc  lis 3, 151
  03c7000  addic 3, 3, -25376
  03c7004  lwz 3, 2712(3)
  03c7008  rlwinm 3, 3, 0, 30, 30
  03c700c  cmpwi 3, 0
  03c7010  bt 2, 0x3c7044
  03c7014  li 3, 0
  03c7018  bl 0x481d0
  03c701c  nop
  03c7020  li 3, 0
  03c7024  li 4, 1
  03c7028  bl 0xb72b0
  03c702c  nop
  03c7030  lis 3, 150
  03c7034  li 4, 0
  03c7038  li 5, 4
  03c703c  stw 4, -12480(3)
  03c7040  stb 5, 32(31)
  03c7044  ori 3, 31, 0
  03c7048  ori 4, 30, 0
  03c704c  bl 0x10c9a0
  03c7050  nop
  03c7054  ld 0, 288(1)
  03c7058  mtlr 0
  03c705c  ld 25, 216(1)
  03c7060  ld 26, 224(1)
  03c7064  ld 27, 232(1)
  03c7068  ld 28, 240(1)
  03c706c  ld 29, 248(1)
  03c7070  ld 30, 256(1)
  03c7074  ld 31, 264(1)
  03c7078  addi 1, 1, 272
  03c707c  blr
