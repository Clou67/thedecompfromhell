# game/update/moby636.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_636:   # 0x3f9bc0, 0x100 bytes
  03f9bc0  stdu 1, -112(1)
  03f9bc4  mflr 0
  03f9bc8  std 0, 128(1)
  03f9bcc  ori 4, 3, 0
  03f9bd0  cmpwi 4, 0
  03f9bd4  bt 2, 0x3f9cb0
  03f9bd8  lwz 4, 120(3)
  03f9bdc  cmpwi 4, 0
  03f9be0  bt 2, 0x3f9cb0
  03f9be4  lis 5, 64
  03f9be8  lis 6, 114
  03f9bec  lfs 1, 8(4)
  03f9bf0  addi 5, 5, -25684
  03f9bf4  lfs 2, 0(5)
  03f9bf8  lfs 3, -3048(6)
  03f9bfc  lis 6, 114
  03f9c00  fnmsubs 1, 3, 2, 1
  03f9c04  lfs 4, 0(4)
  03f9c08  lfs 5, 4(4)
  03f9c0c  stfs 1, 8(4)
  03f9c10  lfs 1, 4(5)
  03f9c14  lfs 2, 8(5)
  03f9c18  lfs 3, -3064(6)
  03f9c1c  fmadds 1, 3, 1, 2
  03f9c20  lis 5, -15821
  03f9c24  ori 5, 5, 13107
  03f9c28  fmuls 2, 5, 1
  03f9c2c  fmuls 1, 4, 1
  03f9c30  stfs 2, 4(4)
  03f9c34  stfs 1, 0(4)
  03f9c38  lfs 2, 16(3)
  03f9c3c  fadds 1, 2, 1
  03f9c40  lfs 2, 20(3)
  03f9c44  lfs 3, 24(3)
  03f9c48  stfs 1, 16(3)
  03f9c4c  lfs 1, 4(4)
  03f9c50  fadds 1, 2, 1
  03f9c54  stfs 1, 20(3)
  03f9c58  lfs 1, 8(4)
  03f9c5c  fadds 1, 3, 1
  03f9c60  stfs 1, 24(3)
  03f9c64  lwz 4, 8(4)
  03f9c68  srawi 6, 4, 31
  03f9c6c  srwi 7, 6, 1
  03f9c70  xor 4, 7, 4
  03f9c74  subc 4, 4, 6
  03f9c78  cmpw 4, 5
  03f9c7c  bf 0, 0x3f9cb0
  03f9c80  lis 4, 64
  03f9c84  lis 5, 151
  03f9c88  addi 4, 4, -25684
  03f9c8c  addic 5, 5, -25376
  03f9c90  lfs 2, 12(4)
  03f9c94  lfs 3, 136(5)
  03f9c98  fsubs 2, 3, 2
  03f9c9c  fcmpu 0, 1, 2
  03f9ca0  cror 6, 1, 2
  03f9ca4  bt 6, 0x3f9cb0
  03f9ca8  bl 0xefb38
  03f9cac  nop
  03f9cb0  ld 0, 128(1)
  03f9cb4  mtlr 0
  03f9cb8  addi 1, 1, 112
  03f9cbc  blr
