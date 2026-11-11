# game/update/moby898.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_898:   # 0x4a4300, 0x238 bytes
  04a4300  stdu 1, -192(1)
  04a4304  mflr 0
  04a4308  std 0, 208(1)
  04a430c  stfd 28, 160(1)
  04a4310  stfd 29, 168(1)
  04a4314  stfd 30, 176(1)
  04a4318  stfd 31, 184(1)
  04a431c  std 31, 152(1)
  04a4320  ori 31, 3, 0
  04a4324  lis 3, 270
  04a4328  lis 4, 74
  04a432c  std 29, 136(1)
  04a4330  addi 4, 4, 17120
  04a4334  lwz 29, 120(31)
  04a4338  lfs 1, 17664(3)
  04a433c  lfs 29, 16(31)
  04a4340  lfs 30, 20(31)
  04a4344  lfs 2, 100(29)
  04a4348  lfs 31, 24(31)
  04a434c  fadds 1, 2, 1
  04a4350  li 3, 0
  04a4354  stfs 1, 100(29)
  04a4358  lfs 2, 0(4)
  04a435c  lfs 3, 72(31)
  04a4360  lfs 4, 4(4)
  04a4364  fadds 2, 3, 2
  04a4368  fsubs 6, 4, 3
  04a436c  lfs 5, 8(4)
  04a4370  fsubs 4, 4, 2
  04a4374  fsub 8, 3, 6
  04a4378  fsubs 7, 5, 2
  04a437c  fsubs 5, 5, 3
  04a4380  fsub 9, 2, 4
  04a4384  fsel 3, 8, 6, 3
  04a4388  fsel 2, 9, 4, 2
  04a438c  fsub 8, 5, 3
  04a4390  lfs 4, 12(4)
  04a4394  lfs 6, 16(4)
  04a4398  fsub 9, 7, 2
  04a439c  fsel 3, 8, 5, 3
  04a43a0  lfs 5, 20(4)
  04a43a4  fsel 2, 9, 7, 2
  04a43a8  fmuls 7, 3, 3
  04a43ac  lfs 9, 24(4)
  04a43b0  lwz 4, 96(29)
  04a43b4  fmuls 8, 2, 2
  04a43b8  fmuls 10, 7, 3
  04a43bc  fmuls 11, 8, 2
  04a43c0  fmuls 12, 7, 10
  04a43c4  fmadds 3, 10, 4, 3
  04a43c8  fmuls 10, 8, 11
  04a43cc  fmadds 2, 11, 4, 2
  04a43d0  fmuls 4, 7, 12
  04a43d4  fmadds 3, 12, 6, 3
  04a43d8  fmuls 11, 8, 10
  04a43dc  fmadds 2, 10, 6, 2
  04a43e0  fmuls 6, 7, 4
  04a43e4  fmadds 3, 4, 5, 3
  04a43e8  fmuls 4, 8, 11
  04a43ec  fmadds 2, 11, 5, 2
  04a43f0  fmadds 3, 6, 9, 3
  04a43f4  fmadds 2, 4, 9, 2
  04a43f8  fmuls 1, 2, 1
  04a43fc  stfs 1, 112(1)
  04a4400  lfs 2, 100(29)
  04a4404  stw 3, 120(1)
  04a4408  fmuls 2, 3, 2
  04a440c  stfs 2, 116(1)
  04a4410  lfs 3, 16(4)
  04a4414  fadds 1, 1, 3
  04a4418  stfs 1, 112(1)
  04a441c  lfs 1, 20(4)
  04a4420  fadds 1, 2, 1
  04a4424  stfs 1, 116(1)
  04a4428  lfs 1, 24(4)
  04a442c  stfs 1, 120(1)
  04a4430  lfs 1, 100(29)
  04a4434  lfs 2, 28(4)
  04a4438  std 30, 144(1)
  04a443c  fdivs 1, 1, 2
  04a4440  bl 0x502758
  04a4444  nop
  04a4448  lfs 28, 100(29)
  04a444c  ori 30, 3, 0
  04a4450  bl 0x502730
  04a4454  nop
  04a4458  lwz 3, 96(29)
  04a445c  lfs 2, 28(3)
  04a4460  lwz 4, 0(3)
  04a4464  addic 4, 4, -2
  04a4468  cmpw 30, 4
  04a446c  fnmsubs 1, 1, 2, 28
  04a4470  fdivs 1, 1, 2
  04a4474  bt 0, 0x4a4488
  04a4478  ori 3, 31, 0
  04a447c  bl 0xefb38
  04a4480  nop
  04a4484  b 0x4a450c
  04a4488  sldi 4, 30, 4
  04a448c  addc 3, 3, 4
  04a4490  clrldi 3, 3, 32
  04a4494  addic 5, 31, 64
  04a4498  addic 4, 1, 112
  04a449c  ori 6, 5, 0
  04a44a0  lfs 2, 32(3)
  04a44a4  lfs 3, 16(3)
  04a44a8  lfs 4, 36(3)
  04a44ac  lfs 5, 20(3)
  04a44b0  fsubs 2, 2, 3
  04a44b4  lfs 6, 40(3)
  04a44b8  lfs 7, 24(3)
  04a44bc  fsubs 4, 4, 5
  04a44c0  lfs 8, 44(3)
  04a44c4  fsubs 6, 6, 7
  04a44c8  stfs 8, 28(31)
  04a44cc  addic 3, 29, 32
  04a44d0  stfs 8, 124(1)
  04a44d4  fmadds 2, 2, 1, 3
  04a44d8  fmadds 3, 4, 1, 5
  04a44dc  fmadds 1, 6, 1, 7
  04a44e0  fsubs 4, 2, 29
  04a44e4  stfs 2, 16(31)
  04a44e8  fsubs 2, 3, 30
  04a44ec  stfs 3, 20(31)
  04a44f0  fsubs 5, 1, 31
  04a44f4  stfs 1, 24(31)
  04a44f8  stfs 4, 112(1)
  04a44fc  stfs 2, 116(1)
  04a4500  stfs 5, 120(1)
  04a4504  bl 0x112900
  04a4508  nop
  04a450c  ld 0, 208(1)
  04a4510  mtlr 0
  04a4514  lfd 28, 160(1)
  04a4518  lfd 29, 168(1)
  04a451c  lfd 30, 176(1)
  04a4520  lfd 31, 184(1)
  04a4524  ld 29, 136(1)
  04a4528  ld 30, 144(1)
  04a452c  ld 31, 152(1)
  04a4530  addi 1, 1, 192
  04a4534  blr
