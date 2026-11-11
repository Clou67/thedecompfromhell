# game/update/moby1198.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1198_001f6448:   # 0x1f6448, 0x43c bytes
  01f6448  stdu 1, -448(1)
  01f644c  mflr 0
  01f6450  std 0, 464(1)
  01f6454  stfd 29, 424(1)
  01f6458  stfd 30, 432(1)
  01f645c  stfd 31, 440(1)
  01f6460  std 28, 392(1)
  01f6464  lwz 28, 120(3)
  01f6468  li 3, 1
  01f646c  li 4, 5
  01f6470  li 5, 128
  01f6474  li 6, 3
  01f6478  li 7, 0
  01f647c  li 8, 0
  01f6480  li 9, 1
  01f6484  std 31, 416(1)
  01f6488  std 30, 408(1)
  01f648c  std 29, 400(1)
  01f6490  std 27, 384(1)
  01f6494  std 26, 376(1)
  01f6498  std 25, 368(1)
  01f649c  std 24, 360(1)
  01f64a0  std 23, 352(1)
  01f64a4  std 22, 344(1)
  01f64a8  std 21, 336(1)
  01f64ac  std 20, 328(1)
  01f64b0  li 10, 2
  01f64b4  bl 0x502f7c
  01f64b8  nop
  01f64bc  ori 4, 3, 0
  01f64c0  li 3, 22
  01f64c4  bl 0x174f80
  01f64c8  nop
  01f64cc  lis 31, 118
  01f64d0  lwz 3, 25060(31)
  01f64d4  extsw 3, 3
  01f64d8  bl 0x685c4
  01f64dc  nop
  01f64e0  lwz 4, 25060(31)
  01f64e4  std 3, 296(1)
  01f64e8  extsw 3, 4
  01f64ec  bl 0x685c4
  01f64f0  nop
  01f64f4  li 3, 0
  01f64f8  lis 9, 0
  01f64fc  li 4, 0
  01f6500  li 5, 1
  01f6504  li 6, 1
  01f6508  li 7, 1
  01f650c  li 8, 0
  01f6510  ori 9, 9, 65424
  01f6514  bl 0x502fd4
  01f6518  nop
  01f651c  std 3, 304(1)
  01f6520  li 4, 0
  01f6524  li 3, 0
  01f6528  li 5, 0
  01f652c  li 6, 0
  01f6530  li 7, 0
  01f6534  li 8, 0
  01f6538  bl 0x502f08
  01f653c  nop
  01f6540  lis 4, 241
  01f6544  lis 5, 118
  01f6548  std 3, 288(1)
  01f654c  lis 6, 118
  01f6550  lis 3, 241
  01f6554  lis 7, 118
  01f6558  lwz 4, -29148(4)
  01f655c  lwz 5, 25048(5)
  01f6560  lwz 8, 25056(6)
  01f6564  lwz 6, -29144(3)
  01f6568  ori 3, 4, 0
  01f656c  lwz 7, 25052(7)
  01f6570  ori 4, 5, 0
  01f6574  ori 5, 6, 0
  01f6578  ori 6, 7, 0
  01f657c  ori 7, 8, 0
  01f6580  bl 0x502ea8
  01f6584  nop
  01f6588  std 3, 312(1)
  01f658c  addic 3, 1, 112
  01f6590  bl 0x500af8
  01f6594  nop
  01f6598  li 29, 0
  01f659c  ori 31, 29, 0
  01f65a0  lis 25, 118
  01f65a4  lis 3, 31
  01f65a8  addic 25, 25, 25080
  01f65ac  addi 27, 3, 25652
  01f65b0  lfs 1, 28(25)
  01f65b4  stfs 1, 12(25)
  01f65b8  lfs 29, 0(27)
  01f65bc  lfs 2, 4(27)
  01f65c0  fmr 1, 29
  01f65c4  bl 0xfcbe8
  01f65c8  nop
  01f65cc  stfs 1, 28(25)
  01f65d0  ori 30, 31, 0
  01f65d4  lfs 30, 8(27)
  01f65d8  ori 20, 1, 0
  01f65dc  lfs 31, 12(27)
  01f65e0  ori 21, 1, 0
  01f65e4  ori 22, 1, 0
  01f65e8  addic 23, 28, 144
  01f65ec  addic 24, 28, 156
  01f65f0  addic 26, 25, 4
  01f65f4  addic 27, 1, 176
  01f65f8  srawi 3, 30, 1
  01f65fc  addze 3, 3
  01f6600  srawi 5, 30, 1
  01f6604  addze 5, 5
  01f6608  addc 3, 3, 29
  01f660c  sldi 5, 5, 1
  01f6610  sldi 3, 3, 4
  01f6614  subc 5, 30, 5
  01f6618  addc 4, 3, 23
  01f661c  addc 3, 3, 24
  01f6620  clrldi 4, 4, 32
  01f6624  cmpwi 5, 0
  01f6628  clrldi 3, 3, 32
  01f662c  lfs 4, 0(4)
  01f6630  stfs 4, 0(27)
  01f6634  lfs 3, 4(4)
  01f6638  stfs 3, 4(27)
  01f663c  lfs 2, 8(4)
  01f6640  stfs 2, 8(27)
  01f6644  lfs 1, 12(4)
  01f6648  stfs 1, 12(27)
  01f664c  bt 2, 0x1f670c
  01f6650  lfs 5, 116(28)
  01f6654  lfs 6, 112(28)
  01f6658  fsubs 5, 3, 5
  01f665c  fsubs 6, 4, 6
  01f6660  lfs 7, 120(28)
  01f6664  fsubs 7, 2, 7
  01f6668  stfs 1, 12(27)
  01f666c  fmuls 8, 5, 5
  01f6670  ori 5, 3, 0
  01f6674  lis 3, 118
  01f6678  lis 4, 118
  01f667c  fmadds 8, 6, 6, 8
  01f6680  fmadds 8, 7, 7, 8
  01f6684  fsqrts 8, 8
  01f6688  fdivs 1, 30, 8
  01f668c  fsub 9, 29, 8
  01f6690  fsub 10, 29, 8
  01f6694  fsub 11, 29, 8
  01f6698  fsub 12, 8, 29
  01f669c  fsub 13, 8, 29
  01f66a0  fsub 8, 8, 29
  01f66a4  fmuls 7, 1, 7
  01f66a8  fmuls 5, 1, 5
  01f66ac  fmuls 1, 1, 6
  01f66b0  fsel 6, 9, 29, 7
  01f66b4  fsel 9, 10, 29, 5
  01f66b8  fsel 10, 11, 29, 1
  01f66bc  fsel 6, 12, 6, 7
  01f66c0  fsel 5, 13, 9, 5
  01f66c4  fsel 1, 8, 10, 1
  01f66c8  fsubs 2, 2, 6
  01f66cc  fsubs 3, 3, 5
  01f66d0  fsubs 1, 4, 1
  01f66d4  stfs 2, 8(27)
  01f66d8  stfs 3, 4(27)
  01f66dc  stfs 1, 0(27)
  01f66e0  lfs 1, 184(20)
  01f66e4  lwz 3, 25072(3)
  01f66e8  fsubs 1, 1, 31
  01f66ec  lwz 4, 25076(4)
  01f66f0  extsw 3, 3
  01f66f4  extsw 4, 4
  01f66f8  stfs 1, 184(20)
  01f66fc  lfs 1, 0(5)
  01f6700  bl 0x5027bc
  01f6704  nop
  01f6708  b 0x1f6730
  01f670c  lis 4, 118
  01f6710  lis 5, 118
  01f6714  lwz 4, 25064(4)
  01f6718  lwz 5, 25068(5)
  01f671c  lfs 1, 0(3)
  01f6720  extsw 3, 4
  01f6724  extsw 4, 5
  01f6728  bl 0x5027bc
  01f672c  nop
  01f6730  lfs 1, 0(25)
  01f6734  stw 3, 240(21)
  01f6738  addic 30, 30, 1
  01f673c  lfs 2, 0(26)
  01f6740  addic 27, 27, 16
  01f6744  stfs 1, 256(22)
  01f6748  cmpwi 30, 4
  01f674c  stfs 2, 260(22)
  01f6750  addic 20, 20, 16
  01f6754  addic 25, 25, 8
  01f6758  addic 21, 21, 4
  01f675c  addic 26, 26, 8
  01f6760  addic 22, 22, 8
  01f6764  bt 0, 0x1f65f8
  01f6768  lis 4, 161
  01f676c  addic 3, 1, 176
  01f6770  addic 27, 4, 24396
  01f6774  addic 4, 1, 112
  01f6778  li 5, 0
  01f677c  li 7, 9
  01f6780  lwz 6, 28(27)
  01f6784  bl 0x72280
  01f6788  nop
  01f678c  lis 3, 31
  01f6790  ori 30, 31, 0
  01f6794  addi 5, 3, 25652
  01f6798  lwz 3, 28(27)
  01f679c  ori 4, 1, 0
  01f67a0  lfs 1, 16(5)
  01f67a4  srawi 5, 30, 1
  01f67a8  addze 5, 5
  01f67ac  sldi 5, 5, 1
  01f67b0  subc 5, 30, 5
  01f67b4  cmpwi 5, 0
  01f67b8  bt 2, 0x1f67c8
  01f67bc  lfs 2, 184(4)
  01f67c0  fadds 2, 2, 1
  01f67c4  stfs 2, 184(4)
  01f67c8  addic 30, 30, 1
  01f67cc  addic 4, 4, 16
  01f67d0  cmpwi 30, 4
  01f67d4  bt 0, 0x1f67a4
  01f67d8  ori 6, 3, 0
  01f67dc  addic 4, 1, 112
  01f67e0  addic 3, 1, 176
  01f67e4  li 5, 0
  01f67e8  li 7, 9
  01f67ec  bl 0x72280
  01f67f0  nop
  01f67f4  addic 29, 29, 1
  01f67f8  cmpwi 29, 15
  01f67fc  bt 0, 0x1f65a0
  01f6800  li 3, 1
  01f6804  li 4, 5
  01f6808  li 10, 2
  01f680c  li 5, 96
  01f6810  li 6, 3
  01f6814  li 7, 0
  01f6818  li 8, 0
  01f681c  li 9, 1
  01f6820  bl 0x502f7c
  01f6824  nop
  01f6828  ori 4, 3, 0
  01f682c  li 3, 22
  01f6830  bl 0x174f80
  01f6834  nop
  01f6838  ld 0, 464(1)
  01f683c  mtlr 0
  01f6840  lfd 29, 424(1)
  01f6844  lfd 30, 432(1)
  01f6848  lfd 31, 440(1)
  01f684c  ld 20, 328(1)
  01f6850  ld 21, 336(1)
  01f6854  ld 22, 344(1)
  01f6858  ld 23, 352(1)
  01f685c  ld 24, 360(1)
  01f6860  ld 25, 368(1)
  01f6864  ld 26, 376(1)
  01f6868  ld 27, 384(1)
  01f686c  ld 28, 392(1)
  01f6870  ld 29, 400(1)
  01f6874  ld 30, 408(1)
  01f6878  ld 31, 416(1)
  01f687c  addi 1, 1, 448
  01f6880  blr

M1198_001f6884:   # 0x1f6884, 0x14 bytes
  01f6884  lis 3, 118
  01f6888  lis 4, 1
  01f688c  addic 3, 3, 25180
  01f6890  stw 4, 72(3)
  01f6894  blr

UpdateMoby_1198:   # 0x1f6900, 0x5e8 bytes
  01f6900  stdu 1, -512(1)
  01f6904  mflr 0
  01f6908  std 0, 528(1)
  01f690c  stfd 14, 368(1)
  01f6910  stfd 15, 376(1)
  01f6914  stfd 16, 384(1)
  01f6918  stfd 17, 392(1)
  01f691c  stfd 18, 400(1)
  01f6920  stfd 19, 408(1)
  01f6924  stfd 20, 416(1)
  01f6928  stfd 21, 424(1)
  01f692c  stfd 22, 432(1)
  01f6930  stfd 23, 440(1)
  01f6934  stfd 24, 448(1)
  01f6938  stfd 25, 456(1)
  01f693c  stfd 26, 464(1)
  01f6940  stfd 27, 472(1)
  01f6944  stfd 28, 480(1)
  01f6948  stfd 29, 488(1)
  01f694c  stfd 30, 496(1)
  01f6950  stfd 31, 504(1)
  01f6954  std 31, 360(1)
  01f6958  ori 31, 3, 0
  01f695c  lbz 3, 176(31)
  01f6960  std 30, 352(1)
  01f6964  std 29, 344(1)
  01f6968  std 28, 336(1)
  01f696c  std 27, 328(1)
  01f6970  cmpwi 3, 255
  01f6974  bt 2, 0x1f69b4
  01f6978  lis 4, 151
  01f697c  lis 5, 161
  01f6980  addic 5, 5, -13692
  01f6984  lwz 4, -25488(4)
  01f6988  addc 3, 3, 5
  01f698c  slwi 4, 4, 4
  01f6990  clrldi 3, 3, 32
  01f6994  extsw 4, 4
  01f6998  lbzx 3, 3, 4
  01f699c  cmpwi 3, 255
  01f69a0  bf 2, 0x1f69b4
  01f69a4  ori 3, 31, 0
  01f69a8  bl 0xefb38
  01f69ac  nop
  01f69b0  b 0x1f6e7c
  01f69b4  ori 3, 31, 0
  01f69b8  lis 4, 4
  01f69bc  li 5, 0
  01f69c0  bl 0x10675c
  01f69c4  nop
  01f69c8  ori 30, 3, 0
  01f69cc  cmpwi 30, 0
  01f69d0  bt 2, 0x1f6e7c
  01f69d4  lfs 1, 0(30)
  01f69d8  li 3, 0
  01f69dc  stfs 1, 192(1)
  01f69e0  lfs 1, 4(30)
  01f69e4  li 4, 0
  01f69e8  ori 5, 31, 0
  01f69ec  stfs 1, 196(1)
  01f69f0  lfs 1, 8(30)
  01f69f4  lfs 2, 16(31)
  01f69f8  stfs 1, 200(1)
  01f69fc  lfs 1, 12(30)
  01f6a00  lfs 3, 20(31)
  01f6a04  stfs 1, 204(1)
  01f6a08  lfs 1, 24(31)
  01f6a0c  stfd 2, 304(1)
  01f6a10  stfd 1, 288(1)
  01f6a14  stfd 3, 296(1)
  01f6a18  bl 0x15d12c
  01f6a1c  nop
  01f6a20  lis 3, 31
  01f6a24  addi 3, 3, 26776
  01f6a28  li 29, 0
  01f6a2c  ori 28, 29, 0
  01f6a30  lfs 1, 16(3)
  01f6a34  lfs 2, 28(3)
  01f6a38  lfs 3, 32(3)
  01f6a3c  lfs 25, 0(3)
  01f6a40  lfs 26, 4(3)
  01f6a44  lfs 14, 8(3)
  01f6a48  lfs 15, 12(3)
  01f6a4c  lfs 16, 20(3)
  01f6a50  lfs 17, 24(3)
  01f6a54  lfs 4, 60(3)
  01f6a58  lfs 5, 64(3)
  01f6a5c  lfs 18, 36(3)
  01f6a60  lfs 19, 40(3)
  01f6a64  lfs 6, 72(3)
  01f6a68  stfd 1, 280(1)
  01f6a6c  lfs 20, 44(3)
  01f6a70  fmr 1, 6
  01f6a74  lfs 6, 76(3)
  01f6a78  stfd 2, 272(1)
  01f6a7c  lfs 21, 48(3)
  01f6a80  lfs 2, 80(3)
  01f6a84  stfd 3, 264(1)
  01f6a88  lfs 22, 52(3)
  01f6a8c  lfs 3, 84(3)
  01f6a90  lfs 23, 56(3)
  01f6a94  lfs 24, 68(3)
  01f6a98  stfd 4, 256(1)
  01f6a9c  stfd 5, 248(1)
  01f6aa0  stfd 1, 240(1)
  01f6aa4  stfs 6, 312(1)
  01f6aa8  stfd 2, 232(1)
  01f6aac  stfd 3, 224(1)
  01f6ab0  fmr 1, 14
  01f6ab4  stw 28, 208(1)
  01f6ab8  stw 28, 212(1)
  01f6abc  fmr 2, 15
  01f6ac0  stw 28, 216(1)
  01f6ac4  stw 28, 220(1)
  01f6ac8  bl 0xfcbe8
  01f6acc  nop
  01f6ad0  lfd 3, 280(1)
  01f6ad4  fmr 2, 16
  01f6ad8  stfs 1, 208(1)
  01f6adc  fmr 1, 3
  01f6ae0  bl 0xfcbe8
  01f6ae4  nop
  01f6ae8  stfs 1, 212(1)
  01f6aec  fmr 2, 15
  01f6af0  fmr 1, 14
  01f6af4  bl 0xfcbe8
  01f6af8  nop
  01f6afc  lfd 2, 272(1)
  01f6b00  stfs 1, 216(1)
  01f6b04  fmr 1, 17
  01f6b08  bl 0xfcbe8
  01f6b0c  nop
  01f6b10  lfd 2, 264(1)
  01f6b14  fsubs 3, 18, 25
  01f6b18  fsubs 7, 19, 25
  01f6b1c  fadds 2, 25, 2
  01f6b20  fsub 6, 25, 3
  01f6b24  fsubs 4, 18, 2
  01f6b28  fsubs 5, 19, 2
  01f6b2c  fsel 3, 6, 3, 25
  01f6b30  fsub 8, 2, 4
  01f6b34  fsel 2, 8, 4, 2
  01f6b38  fsub 4, 7, 3
  01f6b3c  fsub 6, 5, 2
  01f6b40  fsel 3, 4, 7, 3
  01f6b44  fsel 2, 6, 5, 2
  01f6b48  fmuls 4, 3, 3
  01f6b4c  lfs 5, 208(1)
  01f6b50  lfs 8, 216(1)
  01f6b54  lfs 9, 196(31)
  01f6b58  fmuls 6, 2, 2
  01f6b5c  fmuls 7, 4, 3
  01f6b60  fmuls 10, 6, 2
  01f6b64  fmuls 11, 4, 7
  01f6b68  fmadds 3, 7, 20, 3
  01f6b6c  fmuls 7, 6, 10
  01f6b70  fmadds 2, 10, 20, 2
  01f6b74  fmuls 10, 4, 11
  01f6b78  fmadds 3, 11, 21, 3
  01f6b7c  lfs 11, 192(31)
  01f6b80  fmuls 12, 6, 7
  01f6b84  fmadds 2, 7, 21, 2
  01f6b88  fmuls 4, 4, 10
  01f6b8c  lfs 7, 228(31)
  01f6b90  fmadds 3, 10, 22, 3
  01f6b94  lfs 10, 212(1)
  01f6b98  lfs 13, 224(31)
  01f6b9c  fmuls 6, 6, 12
  01f6ba0  fmadds 2, 12, 22, 2
  01f6ba4  lfs 12, 212(31)
  01f6ba8  fmadds 3, 4, 23, 3
  01f6bac  lfs 0, 200(31)
  01f6bb0  lfs 4, 208(31)
  01f6bb4  lfd 31, 296(1)
  01f6bb8  fmadds 2, 6, 23, 2
  01f6bbc  lfs 6, 232(31)
  01f6bc0  fmadds 3, 1, 3, 8
  01f6bc4  lfs 30, 196(1)
  01f6bc8  lfd 8, 304(1)
  01f6bcc  lfs 29, 216(31)
  01f6bd0  fmadds 1, 1, 2, 5
  01f6bd4  lfs 2, 192(1)
  01f6bd8  lfd 5, 288(1)
  01f6bdc  lfs 28, 200(1)
  01f6be0  lfs 27, 204(31)
  01f6be4  fmadds 9, 9, 1, 31
  01f6be8  fmadds 5, 0, 1, 5
  01f6bec  fmadds 8, 11, 1, 8
  01f6bf0  lfs 11, 220(1)
  01f6bf4  lfs 0, 236(31)
  01f6bf8  fmadds 1, 27, 1, 11
  01f6bfc  lfs 31, 220(31)
  01f6c00  fmadds 7, 7, 3, 9
  01f6c04  fmadds 5, 6, 3, 5
  01f6c08  fmadds 8, 13, 3, 8
  01f6c0c  fmadds 1, 0, 3, 1
  01f6c10  fmadds 6, 12, 10, 7
  01f6c14  fmadds 5, 29, 10, 5
  01f6c18  fmadds 4, 4, 10, 8
  01f6c1c  fmadds 31, 31, 10, 1
  01f6c20  fsubs 3, 6, 30
  01f6c24  fsubs 8, 5, 28
  01f6c28  fsubs 7, 4, 2
  01f6c2c  stfs 4, 208(1)
  01f6c30  stfs 6, 212(1)
  01f6c34  stfs 5, 216(1)
  01f6c38  stfs 31, 220(1)
  01f6c3c  lfs 4, 20(30)
  01f6c40  fmuls 1, 3, 3
  01f6c44  lfs 5, 16(30)
  01f6c48  fmuls 2, 4, 4
  01f6c4c  lfs 6, 24(30)
  01f6c50  lfd 9, 256(1)
  01f6c54  lfd 10, 248(1)
  01f6c58  fmadds 1, 7, 7, 1
  01f6c5c  fmadds 2, 5, 5, 2
  01f6c60  lfd 11, 240(1)
  01f6c64  fmadds 1, 8, 8, 1
  01f6c68  fmadds 2, 6, 6, 2
  01f6c6c  fsqrts 1, 1
  01f6c70  fsqrts 2, 2
  01f6c74  fsubs 1, 9, 1
  01f6c78  fabs 1, 1
  01f6c7c  fmuls 30, 1, 10
  01f6c80  fmuls 1, 30, 30
  01f6c84  fsub 10, 26, 2
  01f6c88  fsub 12, 26, 2
  01f6c8c  fsub 13, 2, 26
  01f6c90  fsub 0, 26, 2
  01f6c94  fsub 29, 2, 26
  01f6c98  fsub 28, 2, 26
  01f6c9c  fmuls 1, 1, 24
  01f6ca0  fdivs 9, 1, 2
  01f6ca4  fmr 1, 11
  01f6ca8  fmr 2, 24
  01f6cac  fmuls 4, 4, 9
  01f6cb0  fmuls 6, 6, 9
  01f6cb4  fmuls 5, 5, 9
  01f6cb8  fsel 9, 10, 26, 4
  01f6cbc  fsel 10, 12, 26, 6
  01f6cc0  fsel 11, 0, 26, 5
  01f6cc4  fsel 4, 13, 9, 4
  01f6cc8  fsel 6, 29, 10, 6
  01f6ccc  fsel 5, 28, 11, 5
  01f6cd0  fadds 29, 3, 4
  01f6cd4  fadds 28, 8, 6
  01f6cd8  fadds 27, 7, 5
  01f6cdc  bl 0xfcbe8
  01f6ce0  nop
  01f6ce4  fmuls 2, 29, 29
  01f6ce8  lis 3, 114
  01f6cec  lfs 3, -3052(3)
  01f6cf0  fmuls 1, 1, 3
  01f6cf4  fmadds 2, 27, 27, 2
  01f6cf8  clrlwi 27, 29, 31
  01f6cfc  fmadds 2, 28, 28, 2
  01f6d00  fmuls 5, 1, 30
  01f6d04  fsqrts 3, 2
  01f6d08  lfd 2, 232(1)
  01f6d0c  lfs 1, 312(1)
  01f6d10  fdivs 4, 5, 3
  01f6d14  fsub 6, 26, 3
  01f6d18  fsub 5, 26, 3
  01f6d1c  fsub 8, 26, 3
  01f6d20  fsub 9, 3, 26
  01f6d24  fsub 7, 3, 26
  01f6d28  fsub 3, 3, 26
  01f6d2c  fmuls 11, 27, 4
  01f6d30  fmuls 10, 28, 4
  01f6d34  fmuls 4, 29, 4
  01f6d38  fsel 6, 6, 26, 11
  01f6d3c  fsel 5, 5, 26, 10
  01f6d40  fsel 8, 8, 26, 4
  01f6d44  fsel 29, 9, 6, 11
  01f6d48  fsel 30, 7, 5, 10
  01f6d4c  fsel 28, 3, 8, 4
  01f6d50  bl 0xfcbe8
  01f6d54  nop
  01f6d58  lfs 2, 208(1)
  01f6d5c  ori 3, 31, 0
  01f6d60  lfs 3, 216(1)
  01f6d64  ori 9, 27, 0
  01f6d68  stfs 2, 64(1)
  01f6d6c  stfs 3, 72(1)
  01f6d70  stfs 29, 80(1)
  01f6d74  stfs 30, 88(1)
  01f6d78  lfs 2, 212(1)
  01f6d7c  lfs 3, 220(1)
  01f6d80  stfs 2, 68(1)
  01f6d84  stfs 3, 76(1)
  01f6d88  stfs 28, 84(1)
  01f6d8c  stfs 31, 92(1)
  01f6d90  ld 5, 64(1)
  01f6d94  ld 6, 72(1)
  01f6d98  ld 7, 80(1)
  01f6d9c  ld 8, 88(1)
  01f6da0  bl 0x341590
  01f6da4  nop
  01f6da8  lis 3, 21845
  01f6dac  ori 3, 3, 21846
  01f6db0  mulhw 3, 3, 29
  01f6db4  srwi 4, 3, 31
  01f6db8  addc 3, 3, 4
  01f6dbc  addc 4, 3, 3
  01f6dc0  addc 3, 3, 4
  01f6dc4  subc 3, 29, 3
  01f6dc8  cmpwi 3, 0
  01f6dcc  bf 2, 0x1f6df8
  01f6dd0  fmr 2, 16
  01f6dd4  fmr 1, 17
  01f6dd8  bl 0xfcbe8
  01f6ddc  nop
  01f6de0  addic 4, 1, 208
  01f6de4  fmr 2, 26
  01f6de8  ori 3, 31, 0
  01f6dec  li 6, -1
  01f6df0  bl 0x10fb28
  01f6df4  nop
  01f6df8  addic 29, 29, 1
  01f6dfc  lfd 1, 224(1)
  01f6e00  extsw 29, 29
  01f6e04  fadds 25, 25, 1
  01f6e08  cmpwi 29, 60
  01f6e0c  bt 0, 0x1f6ab0
  01f6e10  lis 3, 31
  01f6e14  lfs 6, 312(1)
  01f6e18  li 6, -1
  01f6e1c  fmr 1, 26
  01f6e20  addi 7, 3, 26776
  01f6e24  fmr 2, 26
  01f6e28  li 11, 1
  01f6e2c  fmr 5, 6
  01f6e30  ori 3, 31, 0
  01f6e34  addic 4, 30, 16
  01f6e38  addic 5, 1, 192
  01f6e3c  lfs 3, 88(7)
  01f6e40  lfs 4, 92(7)
  01f6e44  li 8, 10
  01f6e48  lfs 7, 96(7)
  01f6e4c  li 9, 3
  01f6e50  std 6, 144(1)
  01f6e54  li 10, 16
  01f6e58  std 11, 160(1)
  01f6e5c  std 11, 168(1)
  01f6e60  std 6, 176(1)
  01f6e64  std 28, 184(1)
  01f6e68  bl 0x10e030
  01f6e6c  nop
  01f6e70  ori 3, 31, 0
  01f6e74  bl 0xefb38
  01f6e78  nop
  01f6e7c  ld 0, 528(1)
  01f6e80  mtlr 0
  01f6e84  lfd 14, 368(1)
  01f6e88  lfd 15, 376(1)
  01f6e8c  lfd 16, 384(1)
  01f6e90  lfd 17, 392(1)
  01f6e94  lfd 18, 400(1)
  01f6e98  lfd 19, 408(1)
  01f6e9c  lfd 20, 416(1)
  01f6ea0  lfd 21, 424(1)
  01f6ea4  lfd 22, 432(1)
  01f6ea8  lfd 23, 440(1)
  01f6eac  lfd 24, 448(1)
  01f6eb0  lfd 25, 456(1)
  01f6eb4  lfd 26, 464(1)
  01f6eb8  lfd 27, 472(1)
  01f6ebc  lfd 28, 480(1)
  01f6ec0  lfd 29, 488(1)
  01f6ec4  lfd 30, 496(1)
  01f6ec8  lfd 31, 504(1)
  01f6ecc  ld 27, 328(1)
  01f6ed0  ld 28, 336(1)
  01f6ed4  ld 29, 344(1)
  01f6ed8  ld 30, 352(1)
  01f6edc  ld 31, 360(1)
  01f6ee0  addi 1, 1, 512
  01f6ee4  blr
