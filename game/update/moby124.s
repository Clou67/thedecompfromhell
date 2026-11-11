# game/update/moby124.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_124:   # 0x21afc0, 0x154 bytes
  021afc0  stdu 1, -144(1)
  021afc4  mflr 0
  021afc8  std 0, 160(1)
  021afcc  std 31, 136(1)
  021afd0  ori 31, 3, 0
  021afd4  lbz 3, 32(3)
  021afd8  cmpwi 3, 0
  021afdc  bf 2, 0x21b010
  021afe0  lis 4, 34
  021afe4  li 3, 1
  021afe8  addi 4, 4, -20588
  021afec  lis 6, 119
  021aff0  li 5, 96
  021aff4  stb 3, 32(31)
  021aff8  addic 3, 6, -15072
  021affc  lfs 1, 0(4)
  021b000  bl 0x17e31c
  021b004  nop
  021b008  li 3, 255
  021b00c  stb 3, 48(31)
  021b010  lis 3, 116
  021b014  lis 4, 17220
  021b018  lis 6, 161
  021b01c  lis 5, -18933
  021b020  stw 4, -22160(3)
  021b024  ori 5, 5, 24759
  021b028  lwz 3, 1808(6)
  021b02c  mulhw 4, 5, 3
  021b030  addc 4, 4, 3
  021b034  srawi 4, 4, 8
  021b038  srwi 5, 4, 31
  021b03c  addc 4, 4, 5
  021b040  sldi 5, 4, 7
  021b044  sldi 4, 4, 3
  021b048  subc 4, 5, 4
  021b04c  addc 5, 4, 4
  021b050  addc 4, 4, 5
  021b054  subc 3, 3, 4
  021b058  extsw 3, 3
  021b05c  std 3, 112(1)
  021b060  lis 3, 34
  021b064  addi 3, 3, -20588
  021b068  lfs 1, 4(3)
  021b06c  lfs 2, 8(3)
  021b070  lfs 3, 12(3)
  021b074  lfs 4, 16(3)
  021b078  lfd 5, 112(1)
  021b07c  fcfid 5, 5
  021b080  lis 4, 113
  021b084  frsp 5, 5
  021b088  fmsubs 1, 5, 1, 2
  021b08c  fsubs 2, 3, 1
  021b090  fsubs 3, 4, 1
  021b094  lfs 4, 20(3)
  021b098  fsub 5, 1, 2
  021b09c  fsel 1, 5, 2, 1
  021b0a0  lfs 2, 24(3)
  021b0a4  lfs 5, 24(31)
  021b0a8  lfs 7, 28(3)
  021b0ac  fsub 6, 3, 1
  021b0b0  fsel 1, 6, 3, 1
  021b0b4  lfs 3, 32(3)
  021b0b8  lfs 8, 36(3)
  021b0bc  lis 3, 119
  021b0c0  addic 5, 3, -15072
  021b0c4  addic 3, 4, -26896
  021b0c8  ori 4, 31, 0
  021b0cc  fmuls 6, 1, 1
  021b0d0  fmuls 9, 6, 1
  021b0d4  fmuls 10, 6, 9
  021b0d8  fmadds 1, 9, 4, 1
  021b0dc  fmuls 4, 6, 10
  021b0e0  fmadds 1, 10, 2, 1
  021b0e4  fmuls 2, 6, 4
  021b0e8  fmadds 1, 4, 7, 1
  021b0ec  fmadds 1, 2, 3, 1
  021b0f0  fmadds 1, 1, 8, 5
  021b0f4  stfs 1, 8(5)
  021b0f8  bl 0x6d720
  021b0fc  nop
  021b100  ld 0, 160(1)
  021b104  mtlr 0
  021b108  ld 31, 136(1)
  021b10c  addi 1, 1, 144
  021b110  blr
