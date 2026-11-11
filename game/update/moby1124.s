# game/update/moby1124.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1124_001d64b0:   # 0x1d64b0, 0x30c bytes
  01d64b0  stdu 1, -736(1)
  01d64b4  mflr 0
  01d64b8  std 0, 752(1)
  01d64bc  addi 0, 1, 608
  01d64c0  stvx 29, 0, 0
  01d64c4  addic 0, 0, 16
  01d64c8  stvx 30, 0, 0
  01d64cc  addic 0, 0, 16
  01d64d0  stvx 31, 0, 0
  01d64d4  std 28, 704(1)
  01d64d8  ori 28, 3, 0
  01d64dc  std 31, 728(1)
  01d64e0  lis 3, 29
  01d64e4  std 30, 720(1)
  01d64e8  addic 31, 1, 112
  01d64ec  addi 30, 3, 25768
  01d64f0  std 29, 712(1)
  01d64f4  addic 4, 28, 64
  01d64f8  lwz 29, 120(28)
  01d64fc  std 27, 696(1)
  01d6500  std 26, 688(1)
  01d6504  std 25, 680(1)
  01d6508  std 24, 672(1)
  01d650c  std 23, 664(1)
  01d6510  std 22, 656(1)
  01d6514  ori 3, 31, 0
  01d6518  bl 0x500ca4
  01d651c  nop
  01d6520  lis 4, 118
  01d6524  addic 27, 1, 176
  01d6528  ori 3, 27, 0
  01d652c  lfs 1, 18300(4)
  01d6530  bl 0x500b30
  01d6534  nop
  01d6538  ori 3, 31, 0
  01d653c  ori 4, 31, 0
  01d6540  ori 5, 27, 0
  01d6544  bl 0x50162c
  01d6548  nop
  01d654c  li 3, 14
  01d6550  bl 0x685c4
  01d6554  nop
  01d6558  ori 4, 3, 0
  01d655c  li 3, 24
  01d6560  bl 0x174f80
  01d6564  nop
  01d6568  li 3, 0
  01d656c  lis 9, 0
  01d6570  li 4, 0
  01d6574  li 5, 1
  01d6578  li 6, 1
  01d657c  li 7, 1
  01d6580  li 8, 0
  01d6584  ori 9, 9, 65424
  01d6588  bl 0x502fd4
  01d658c  nop
  01d6590  ori 4, 3, 0
  01d6594  li 3, 26
  01d6598  bl 0x174f80
  01d659c  nop
  01d65a0  li 3, 0
  01d65a4  li 4, 0
  01d65a8  li 5, 0
  01d65ac  li 6, 0
  01d65b0  li 7, 0
  01d65b4  li 8, 0
  01d65b8  bl 0x502f08
  01d65bc  nop
  01d65c0  ori 4, 3, 0
  01d65c4  li 3, 6
  01d65c8  bl 0x174f80
  01d65cc  nop
  01d65d0  lis 3, 239
  01d65d4  lis 4, 118
  01d65d8  lis 5, 239
  01d65dc  lis 6, 118
  01d65e0  li 7, 128
  01d65e4  lwz 3, 9928(3)
  01d65e8  lwz 4, 18016(4)
  01d65ec  lwz 5, 9932(5)
  01d65f0  lwz 6, 18020(6)
  01d65f4  bl 0x502ea8
  01d65f8  nop
  01d65fc  ori 4, 3, 0
  01d6600  li 3, 3
  01d6604  bl 0x174f80
  01d6608  nop
  01d660c  bl 0x71170
  01d6610  nop
  01d6614  li 3, 4
  01d6618  ori 23, 1, 0
  01d661c  <unknown>
  01d6620  li 22, 0
  01d6624  vspltisw 31, 0
  01d6628  lis 25, 118
  01d662c  vspltw 29, 29, 0
  01d6630  addic 24, 23, 240
  01d6634  <unknown>
  01d6638  li 27, 296
  01d663c  ori 30, 22, 0
  01d6640  ori 31, 24, 0
  01d6644  vspltw 30, 30, 0
  01d6648  addic 25, 25, 18208
  01d664c  addic 26, 1, 288
  01d6650  addc 27, 23, 27
  01d6654  ori 3, 24, 0
  01d6658  ori 4, 25, 0
  01d665c  bl 0x500ca4
  01d6660  nop
  01d6664  addic 4, 1, 112
  01d6668  ori 3, 24, 0
  01d666c  ori 5, 24, 0
  01d6670  bl 0x50162c
  01d6674  nop
  01d6678  lfs 1, 0(26)
  01d667c  vcfsx 2, 31, 0
  01d6680  lfs 2, 16(28)
  01d6684  fadds 1, 1, 2
  01d6688  lfs 2, 4(26)
  01d668c  lfs 3, 8(26)
  01d6690  vspltisw 3, 1
  01d6694  lis 3, 16256
  01d6698  addic 22, 22, 1
  01d669c  addic 25, 25, 16
  01d66a0  cmpwi 22, 4
  01d66a4  vadduwm 31, 31, 3
  01d66a8  vmaddfp 2, 2, 29, 30
  01d66ac  addic 24, 24, 64
  01d66b0  stfs 1, 0(26)
  01d66b4  lfs 1, 20(28)
  01d66b8  fadds 1, 2, 1
  01d66bc  stfs 1, 4(26)
  01d66c0  lfs 1, 24(28)
  01d66c4  fadds 1, 3, 1
  01d66c8  stfs 1, 8(26)
  01d66cc  <unknown>
  01d66d0  addic 26, 26, 64
  01d66d4  vaddfp 2, 2, 3
  01d66d8  vspltw 2, 2, 0
  01d66dc  stvewx 2, 0, 27
  01d66e0  stw 3, 300(23)
  01d66e4  addic 27, 27, 64
  01d66e8  addic 23, 23, 64
  01d66ec  bt 0, 0x1d6654
  01d66f0  lis 3, 239
  01d66f4  lis 5, 239
  01d66f8  addic 7, 29, 3840
  01d66fc  lis 9, 118
  01d6700  lis 4, 118
  01d6704  lwz 3, 9948(3)
  01d6708  lwz 5, 9952(5)
  01d670c  lis 6, 118
  01d6710  stw 3, 560(1)
  01d6714  lis 8, 239
  01d6718  stw 7, 568(1)
  01d671c  li 10, 30
  01d6720  stw 5, 564(1)
  01d6724  lwz 3, 18032(9)
  01d6728  lwz 4, 18036(4)
  01d672c  stw 3, 572(1)
  01d6730  lfs 1, 18284(6)
  01d6734  stw 4, 576(1)
  01d6738  lfs 2, 9944(8)
  01d673c  stfs 1, 588(1)
  01d6740  stfs 2, 592(1)
  01d6744  stw 10, 580(1)
  01d6748  stw 29, 584(1)
  01d674c  addic 3, 1, 560
  01d6750  ori 4, 31, 0
  01d6754  bl 0x77c88
  01d6758  nop
  01d675c  addic 30, 30, 1
  01d6760  addic 31, 31, 64
  01d6764  cmpwi 30, 4
  01d6768  bt 0, 0x1d674c
  01d676c  li 0, 608
  01d6770  lvx 29, 1, 0
  01d6774  addic 0, 0, 16
  01d6778  lvx 30, 1, 0
  01d677c  addic 0, 0, 16
  01d6780  lvx 31, 1, 0
  01d6784  ld 0, 752(1)
  01d6788  mtlr 0
  01d678c  ld 22, 656(1)
  01d6790  ld 23, 664(1)
  01d6794  ld 24, 672(1)
  01d6798  ld 25, 680(1)
  01d679c  ld 26, 688(1)
  01d67a0  ld 27, 696(1)
  01d67a4  ld 28, 704(1)
  01d67a8  ld 29, 712(1)
  01d67ac  ld 30, 720(1)
  01d67b0  ld 31, 728(1)
  01d67b4  addi 1, 1, 736
  01d67b8  blr

UpdateMoby_1124:   # 0x1d67f0, 0x2e0 bytes
  01d67f0  stdu 1, -288(1)
  01d67f4  mflr 0
  01d67f8  std 0, 304(1)
  01d67fc  stfd 19, 184(1)
  01d6800  stfd 20, 192(1)
  01d6804  stfd 21, 200(1)
  01d6808  stfd 22, 208(1)
  01d680c  stfd 23, 216(1)
  01d6810  stfd 24, 224(1)
  01d6814  stfd 25, 232(1)
  01d6818  stfd 26, 240(1)
  01d681c  stfd 27, 248(1)
  01d6820  stfd 28, 256(1)
  01d6824  stfd 29, 264(1)
  01d6828  stfd 30, 272(1)
  01d682c  stfd 31, 280(1)
  01d6830  std 31, 176(1)
  01d6834  ori 31, 3, 0
  01d6838  lwz 4, 36(31)
  01d683c  lbz 3, 188(31)
  01d6840  cmpwi 3, 0
  01d6844  std 30, 168(1)
  01d6848  std 29, 160(1)
  01d684c  std 28, 152(1)
  01d6850  std 27, 144(1)
  01d6854  lfs 1, 36(4)
  01d6858  bt 2, 0x1d6864
  01d685c  addic 3, 3, -1
  01d6860  stb 3, 188(31)
  01d6864  lis 5, 118
  01d6868  ori 3, 31, 0
  01d686c  lis 4, 51
  01d6870  lfs 2, 18352(5)
  01d6874  li 5, 0
  01d6878  fmuls 1, 1, 2
  01d687c  stfs 1, 44(31)
  01d6880  bl 0x10675c
  01d6884  nop
  01d6888  cmpwi 3, 0
  01d688c  bt 2, 0x1d6a78
  01d6890  lbz 3, 188(31)
  01d6894  cmpwi 3, 0
  01d6898  bf 2, 0x1d6a78
  01d689c  lis 3, 29
  01d68a0  li 28, 0
  01d68a4  addi 3, 3, 26560
  01d68a8  ori 30, 28, 0
  01d68ac  lfs 20, 0(3)
  01d68b0  lfs 21, 4(3)
  01d68b4  lfs 22, 8(3)
  01d68b8  lfs 23, 12(3)
  01d68bc  lfs 24, 16(3)
  01d68c0  lfs 25, 20(3)
  01d68c4  lfs 26, 24(3)
  01d68c8  lfs 27, 28(3)
  01d68cc  lfs 28, 32(3)
  01d68d0  lfs 29, 36(3)
  01d68d4  lfs 30, 40(3)
  01d68d8  lfs 31, 44(3)
  01d68dc  li 29, 1
  01d68e0  li 3, 4
  01d68e4  bl 0xfc620
  01d68e8  nop
  01d68ec  lfs 4, 16(31)
  01d68f0  lfs 3, 20(31)
  01d68f4  cmpwi 3, 1
  01d68f8  lfs 2, 24(31)
  01d68fc  lfs 1, 28(31)
  01d6900  bt 1, 0x1d6918
  01d6904  cmpwi 3, -1
  01d6908  bf 1, 0x1d6940
  01d690c  cmpwi 3, 0
  01d6910  bf 1, 0x1d6940
  01d6914  b 0x1d692c
  01d6918  cmpwi 3, 2
  01d691c  bf 1, 0x1d6934
  01d6920  cmpwi 3, 3
  01d6924  bf 1, 0x1d693c
  01d6928  b 0x1d6940
  01d692c  li 29, 5
  01d6930  b 0x1d6940
  01d6934  li 29, 20
  01d6938  b 0x1d6940
  01d693c  li 29, 50
  01d6940  fadds 2, 2, 20
  01d6944  stfs 4, 128(1)
  01d6948  stfs 3, 132(1)
  01d694c  stfs 1, 140(1)
  01d6950  stfs 2, 136(1)
  01d6954  bl 0xfcc68
  01d6958  nop
  01d695c  fadds 1, 1, 21
  01d6960  fsubs 2, 22, 1
  01d6964  fsubs 3, 23, 1
  01d6968  fsub 4, 1, 2
  01d696c  fsel 1, 4, 2, 1
  01d6970  fsub 2, 3, 1
  01d6974  fsel 3, 2, 3, 1
  01d6978  fmr 1, 28
  01d697c  fmr 2, 29
  01d6980  fmuls 4, 3, 3
  01d6984  fmuls 5, 4, 3
  01d6988  fmuls 6, 4, 5
  01d698c  fmadds 3, 5, 24, 3
  01d6990  fmuls 5, 4, 6
  01d6994  fmadds 3, 6, 25, 3
  01d6998  fmuls 4, 4, 5
  01d699c  fmadds 3, 5, 26, 3
  01d69a0  fmadds 19, 4, 27, 3
  01d69a4  bl 0xfcbe8
  01d69a8  nop
  01d69ac  lis 27, 114
  01d69b0  lfs 2, -3052(27)
  01d69b4  fmuls 1, 1, 2
  01d69b8  fmuls 1, 1, 19
  01d69bc  stfs 1, 112(1)
  01d69c0  bl 0xfcc68
  01d69c4  nop
  01d69c8  fsubs 2, 22, 1
  01d69cc  fsubs 3, 23, 1
  01d69d0  fsub 4, 1, 2
  01d69d4  fsel 1, 4, 2, 1
  01d69d8  fsub 2, 3, 1
  01d69dc  fsel 3, 2, 3, 1
  01d69e0  fmr 1, 28
  01d69e4  fmr 2, 29
  01d69e8  fmuls 4, 3, 3
  01d69ec  fmuls 5, 4, 3
  01d69f0  fmuls 6, 4, 5
  01d69f4  fmadds 3, 5, 24, 3
  01d69f8  fmuls 5, 4, 6
  01d69fc  fmadds 3, 6, 25, 3
  01d6a00  fmuls 4, 4, 5
  01d6a04  fmadds 3, 5, 26, 3
  01d6a08  fmadds 19, 4, 27, 3
  01d6a0c  bl 0xfcbe8
  01d6a10  nop
  01d6a14  lfs 2, -3052(27)
  01d6a18  stw 30, 120(1)
  01d6a1c  fmuls 3, 1, 2
  01d6a20  fmr 1, 30
  01d6a24  fmr 2, 31
  01d6a28  fmuls 3, 3, 19
  01d6a2c  stfs 3, 116(1)
  01d6a30  bl 0xfcbe8
  01d6a34  nop
  01d6a38  lfs 2, -3052(27)
  01d6a3c  addic 4, 1, 128
  01d6a40  addic 5, 1, 112
  01d6a44  fmuls 1, 1, 2
  01d6a48  ori 3, 31, 0
  01d6a4c  li 6, 0
  01d6a50  ori 7, 29, 0
  01d6a54  li 8, 0
  01d6a58  stfs 1, 120(1)
  01d6a5c  bl 0x242738
  01d6a60  nop
  01d6a64  addic 28, 28, 1
  01d6a68  cmpwi 28, 8
  01d6a6c  bt 0, 0x1d68dc
  01d6a70  li 3, 255
  01d6a74  stb 3, 164(31)
  01d6a78  ld 0, 304(1)
  01d6a7c  mtlr 0
  01d6a80  lfd 19, 184(1)
  01d6a84  lfd 20, 192(1)
  01d6a88  lfd 21, 200(1)
  01d6a8c  lfd 22, 208(1)
  01d6a90  lfd 23, 216(1)
  01d6a94  lfd 24, 224(1)
  01d6a98  lfd 25, 232(1)
  01d6a9c  lfd 26, 240(1)
  01d6aa0  lfd 27, 248(1)
  01d6aa4  lfd 28, 256(1)
  01d6aa8  lfd 29, 264(1)
  01d6aac  lfd 30, 272(1)
  01d6ab0  lfd 31, 280(1)
  01d6ab4  ld 27, 144(1)
  01d6ab8  ld 28, 152(1)
  01d6abc  ld 29, 160(1)
  01d6ac0  ld 30, 168(1)
  01d6ac4  ld 31, 176(1)
  01d6ac8  addi 1, 1, 288
  01d6acc  blr
