# sdk/libm/xfexp.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FExp:   # 0x5dd5a8, 0x170 bytes
  05dd5a8  mr 11, 3
  05dd5ac  mflr 0
  05dd5b0  stdu 1, -144(1)
  05dd5b4  std 0, 160(1)
  05dd5b8  lfs 0, -23772(2)
  05dd5bc  lfs 10, 0(11)
  05dd5c0  fcmpu 6, 10, 0
  05dd5c4  bt 24, 0x5dd6c4
  05dd5c8  lfs 13, -23724(2)
  05dd5cc  fcmpu 7, 1, 13
  05dd5d0  bt 30, 0x5dd6c0
  05dd5d4  lfs 0, -23768(2)
  05dd5d8  fcmpu 7, 10, 0
  05dd5dc  bt 29, 0x5dd6e4
  05dd5e0  lfs 0, -23760(2)
  05dd5e4  fmuls 0, 10, 0
  05dd5e8  fcmpu 7, 0, 13
  05dd5ec  bt 28, 0x5dd710
  05dd5f0  lfs 13, -23752(2)
  05dd5f4  fadds 0, 13, 0
  05dd5f8  lwz 9, -23740(2)
  05dd5fc  lfs 13, -23748(2)
  05dd600  lfs 11, -23744(2)
  05dd604  lfs 9, 0(9)
  05dd608  addi 9, 1, 112
  05dd60c  fneg 12, 9
  05dd610  fctiwz 0, 0
  05dd614  stfiwx 0, 0, 9
  05dd618  lhz 0, 114(1)
  05dd61c  extsh 0, 0
  05dd620  extsw 9, 0
  05dd624  std 9, 128(1)
  05dd628  lfd 8, 128(1)
  05dd62c  fcfid 8, 8
  05dd630  frsp 0, 8
  05dd634  fmadds 13, 0, 13, 10
  05dd638  fmadds 8, 0, 11, 13
  05dd63c  fcmpu 7, 12, 8
  05dd640  bf 28, 0x5dd64c
  05dd644  fcmpu 7, 8, 9
  05dd648  bt 28, 0x5dd708
  05dd64c  fmuls 0, 8, 8
  05dd650  lfs 12, -23752(2)
  05dd654  lfs 13, -23732(2)
  05dd658  fmr 9, 1
  05dd65c  lfs 11, -23736(2)
  05dd660  lfs 10, -23728(2)
  05dd664  fmadds 13, 0, 13, 12
  05dd668  fmuls 0, 0, 11
  05dd66c  fmuls 13, 8, 13
  05dd670  fsub 12, 0, 13
  05dd674  fadd 0, 0, 13
  05dd678  fadd 12, 12, 10
  05dd67c  fadd 0, 0, 10
  05dd680  fdiv 0, 0, 12
  05dd684  fmul 0, 0, 9
  05dd688  frsp 0, 0
  05dd68c  stfs 0, 0(11)
  05dd690  extsh 4, 5
  05dd694  clrldi 3, 3, 32
  05dd698  add 4, 0, 4
  05dd69c  extsw 4, 4
  05dd6a0  bl 0x5e659c
  05dd6a4  nop
  05dd6a8  ld 0, 160(1)
  05dd6ac  extsh 3, 3
  05dd6b0  mtlr 0
  05dd6b4  addi 1, 1, 144
  05dd6b8  extsw 3, 3
  05dd6bc  blr
  05dd6c0  bf 24, 0x5dd6c8
  05dd6c4  lfs 1, -23724(2)
  05dd6c8  ld 0, 160(1)
  05dd6cc  li 3, 0
  05dd6d0  addi 1, 1, 144
  05dd6d4  stfs 1, 0(11)
  05dd6d8  extsw 3, 3
  05dd6dc  mtlr 0
  05dd6e0  blr
  05dd6e4  lwz 9, -23764(2)
  05dd6e8  li 3, 1
  05dd6ec  ld 0, 160(1)
  05dd6f0  addi 1, 1, 144
  05dd6f4  extsw 3, 3
  05dd6f8  mtlr 0
  05dd6fc  lfs 0, 0(9)
  05dd700  stfs 0, 0(11)
  05dd704  blr
  05dd708  stfs 1, 0(11)
  05dd70c  b 0x5dd690
  05dd710  lfs 13, -23756(2)
  05dd714  b 0x5dd5f4
