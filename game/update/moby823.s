# game/update/moby823.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M823_00478ba0:   # 0x478ba0, 0x14 bytes
  0478ba0  lis 3, 135
  0478ba4  lis 4, 1
  0478ba8  addic 3, 3, 31172
  0478bac  stw 4, 72(3)
  0478bb0  blr

UpdateMoby_823:   # 0x478be0, 0x24c bytes
  0478be0  stdu 1, -208(1)
  0478be4  mflr 0
  0478be8  std 0, 224(1)
  0478bec  stfd 25, 152(1)
  0478bf0  stfd 26, 160(1)
  0478bf4  stfd 27, 168(1)
  0478bf8  stfd 28, 176(1)
  0478bfc  stfd 29, 184(1)
  0478c00  stfd 30, 192(1)
  0478c04  stfd 31, 200(1)
  0478c08  lis 4, 72
  0478c0c  std 31, 144(1)
  0478c10  lbz 5, 32(3)
  0478c14  ori 31, 3, 0
  0478c18  std 30, 136(1)
  0478c1c  addi 4, 4, -29768
  0478c20  lwz 30, 120(3)
  0478c24  cmpwi 5, 0
  0478c28  cmpwi 1, 5, 1
  0478c2c  cmpwi 6, 5, -1
  0478c30  std 29, 128(1)
  0478c34  std 28, 120(1)
  0478c38  lfs 31, 0(4)
  0478c3c  bt 1, 0x478c48
  0478c40  bf 25, 0x478df0
  0478c44  b 0x478c50
  0478c48  bf 5, 0x478cf0
  0478c4c  b 0x478df0
  0478c50  lfs 1, 72(31)
  0478c54  stfs 1, 64(30)
  0478c58  bl 0xfcc68
  0478c5c  nop
  0478c60  stfs 1, 72(30)
  0478c64  bl 0xfcc68
  0478c68  nop
  0478c6c  lis 3, 72
  0478c70  stfs 1, 68(30)
  0478c74  lis 28, 114
  0478c78  addi 29, 3, -29768
  0478c7c  lfs 1, 4(29)
  0478c80  lfs 3, -3052(28)
  0478c84  fmuls 1, 3, 1
  0478c88  fmuls 2, 3, 31
  0478c8c  bl 0xfe4f0
  0478c90  nop
  0478c94  stfs 1, 80(30)
  0478c98  lfs 1, 8(29)
  0478c9c  lfs 2, 12(29)
  0478ca0  lfs 3, -3052(28)
  0478ca4  fmuls 1, 3, 1
  0478ca8  fmuls 2, 3, 2
  0478cac  bl 0xfe4f0
  0478cb0  nop
  0478cb4  ori 3, 31, 0
  0478cb8  stfs 1, 76(30)
  0478cbc  li 4, 128
  0478cc0  li 5, 128
  0478cc4  li 6, 128
  0478cc8  bl 0xf1ec8
  0478ccc  nop
  0478cd0  ori 3, 31, 0
  0478cd4  li 4, 0
  0478cd8  ori 5, 30, 0
  0478cdc  bl 0xf0ea8
  0478ce0  nop
  0478ce4  li 3, 1
  0478ce8  stb 3, 32(31)
  0478cec  b 0x478df0
  0478cf0  lis 3, 113
  0478cf4  ori 4, 31, 0
  0478cf8  addic 3, 3, -4688
  0478cfc  bl 0x6d720
  0478d00  nop
  0478d04  lfs 1, 68(30)
  0478d08  lfs 2, 76(30)
  0478d0c  bl 0x502578
  0478d10  nop
  0478d14  lis 3, 72
  0478d18  addi 3, 3, -29768
  0478d1c  lfs 30, 16(3)
  0478d20  lfs 29, 20(3)
  0478d24  fsubs 2, 30, 1
  0478d28  fsubs 3, 29, 1
  0478d2c  lfs 28, 24(3)
  0478d30  lfs 27, 28(3)
  0478d34  lfs 26, 32(3)
  0478d38  lfs 25, 36(3)
  0478d3c  fsub 4, 1, 2
  0478d40  fsel 2, 4, 2, 1
  0478d44  fsub 5, 3, 2
  0478d48  fsel 2, 5, 3, 2
  0478d4c  lfs 5, 64(30)
  0478d50  stfs 1, 68(30)
  0478d54  fmr 1, 5
  0478d58  fmuls 4, 2, 2
  0478d5c  fmuls 3, 4, 2
  0478d60  fmuls 5, 4, 3
  0478d64  fmadds 2, 3, 28, 2
  0478d68  fmuls 3, 4, 5
  0478d6c  fmadds 2, 5, 27, 2
  0478d70  fmuls 4, 4, 3
  0478d74  fmadds 2, 3, 26, 2
  0478d78  fmadds 2, 4, 25, 2
  0478d7c  fmuls 2, 2, 31
  0478d80  bl 0x502578
  0478d84  nop
  0478d88  stfs 1, 72(31)
  0478d8c  lfs 1, 72(30)
  0478d90  lfs 2, 80(30)
  0478d94  bl 0x502578
  0478d98  nop
  0478d9c  fsubs 2, 30, 1
  0478da0  fsubs 3, 29, 1
  0478da4  stfs 1, 72(30)
  0478da8  addic 3, 30, 16
  0478dac  li 4, 1
  0478db0  fsub 4, 1, 2
  0478db4  fsel 2, 4, 2, 1
  0478db8  fsub 4, 3, 2
  0478dbc  fsel 2, 4, 3, 2
  0478dc0  fmuls 3, 2, 2
  0478dc4  fmuls 4, 3, 2
  0478dc8  fmuls 1, 3, 4
  0478dcc  fmadds 2, 4, 28, 2
  0478dd0  fmuls 4, 3, 1
  0478dd4  fmadds 1, 1, 27, 2
  0478dd8  fmuls 2, 3, 4
  0478ddc  fmadds 1, 4, 26, 1
  0478de0  fmadds 1, 2, 25, 1
  0478de4  fmadds 1, 1, 31, 31
  0478de8  bl 0x501980
  0478dec  nop
  0478df0  ld 0, 224(1)
  0478df4  mtlr 0
  0478df8  lfd 25, 152(1)
  0478dfc  lfd 26, 160(1)
  0478e00  lfd 27, 168(1)
  0478e04  lfd 28, 176(1)
  0478e08  lfd 29, 184(1)
  0478e0c  lfd 30, 192(1)
  0478e10  lfd 31, 200(1)
  0478e14  ld 28, 120(1)
  0478e18  ld 29, 128(1)
  0478e1c  ld 30, 136(1)
  0478e20  ld 31, 144(1)
  0478e24  addi 1, 1, 208
  0478e28  blr
