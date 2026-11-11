# game/update/moby50.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_50:   # 0x3a3c08, 0xc40 bytes
  03a3c08  stdu 1, -544(1)
  03a3c0c  mflr 0
  03a3c10  std 0, 560(1)
  03a3c14  stfd 26, 496(1)
  03a3c18  stfd 27, 504(1)
  03a3c1c  stfd 28, 512(1)
  03a3c20  stfd 29, 520(1)
  03a3c24  stfd 30, 528(1)
  03a3c28  stfd 31, 536(1)
  03a3c2c  std 30, 480(1)
  03a3c30  std 31, 488(1)
  03a3c34  lwz 30, 120(3)
  03a3c38  std 29, 472(1)
  03a3c3c  ori 31, 3, 0
  03a3c40  ori 29, 30, 0
  03a3c44  lwz 3, 52(29)
  03a3c48  std 28, 464(1)
  03a3c4c  std 27, 456(1)
  03a3c50  cmpwi 3, 0
  03a3c54  bf 2, 0x3a3cd0
  03a3c58  lis 3, 149
  03a3c5c  lfs 1, 20(31)
  03a3c60  addic 3, 3, 5056
  03a3c64  lfs 2, 16(31)
  03a3c68  lfs 3, 324(3)
  03a3c6c  lfs 4, 320(3)
  03a3c70  fsubs 1, 1, 3
  03a3c74  fsubs 2, 2, 4
  03a3c78  lfs 3, 24(31)
  03a3c7c  lfs 4, 328(3)
  03a3c80  fsubs 3, 3, 4
  03a3c84  lis 3, 58
  03a3c88  fmuls 1, 1, 1
  03a3c8c  addi 3, 3, 15328
  03a3c90  fmadds 1, 2, 2, 1
  03a3c94  lfs 2, 0(3)
  03a3c98  fmadds 1, 3, 3, 1
  03a3c9c  fsqrts 1, 1
  03a3ca0  fcmpu 0, 1, 2
  03a3ca4  cror 6, 1, 2
  03a3ca8  bt 6, 0x3a3cd0
  03a3cac  li 6, 1
  03a3cb0  li 3, 5
  03a3cb4  li 4, 0
  03a3cb8  ori 5, 31, 0
  03a3cbc  stw 6, 52(30)
  03a3cc0  li 6, 1356
  03a3cc4  bl 0x15d204
  03a3cc8  nop
  03a3ccc  lwz 29, 120(31)
  03a3cd0  lbz 3, 32(31)
  03a3cd4  cmpwi 3, 0
  03a3cd8  bf 2, 0x3a480c
  03a3cdc  lis 3, 269
  03a3ce0  lfs 1, 0(29)
  03a3ce4  lis 4, 132
  03a3ce8  lis 28, 114
  03a3cec  addic 27, 1, 224
  03a3cf0  lfs 3, -28068(3)
  03a3cf4  fmuls 2, 1, 3
  03a3cf8  lfs 1, 13420(4)
  03a3cfc  lfs 4, -3052(28)
  03a3d00  ori 3, 27, 0
  03a3d04  fmuls 1, 1, 4
  03a3d08  stfs 2, 240(1)
  03a3d0c  lfs 2, 4(29)
  03a3d10  fmuls 4, 2, 3
  03a3d14  fmr 2, 1
  03a3d18  stfs 4, 244(1)
  03a3d1c  lfs 4, 8(29)
  03a3d20  fmuls 3, 4, 3
  03a3d24  stfs 3, 248(1)
  03a3d28  lfs 3, 12(29)
  03a3d2c  stfs 3, 252(1)
  03a3d30  bl 0xfea60
  03a3d34  nop
  03a3d38  lfs 1, 240(1)
  03a3d3c  lfs 2, 224(1)
  03a3d40  lis 3, 269
  03a3d44  lfs 3, 244(1)
  03a3d48  lis 4, 132
  03a3d4c  fadds 1, 1, 2
  03a3d50  lfs 2, 228(1)
  03a3d54  lfs 4, 248(1)
  03a3d58  fadds 2, 3, 2
  03a3d5c  lfs 3, 232(1)
  03a3d60  fadds 3, 4, 3
  03a3d64  lfs 4, -28064(3)
  03a3d68  ori 3, 27, 0
  03a3d6c  stfs 1, 240(1)
  03a3d70  stfs 2, 244(1)
  03a3d74  stfs 3, 248(1)
  03a3d78  lfs 1, 0(29)
  03a3d7c  fmuls 2, 1, 4
  03a3d80  lfs 1, -3052(28)
  03a3d84  lfs 3, 13424(4)
  03a3d88  fmuls 1, 3, 1
  03a3d8c  stfs 2, 256(1)
  03a3d90  lfs 2, 4(29)
  03a3d94  fmuls 3, 2, 4
  03a3d98  fmr 2, 1
  03a3d9c  stfs 3, 260(1)
  03a3da0  lfs 3, 8(29)
  03a3da4  fmuls 3, 3, 4
  03a3da8  stfs 3, 264(1)
  03a3dac  lfs 3, 12(29)
  03a3db0  stfs 3, 268(1)
  03a3db4  bl 0xfea60
  03a3db8  nop
  03a3dbc  lfs 1, 256(1)
  03a3dc0  lis 3, 132
  03a3dc4  lfs 2, 224(1)
  03a3dc8  lis 4, 132
  03a3dcc  lfs 3, 260(1)
  03a3dd0  lis 5, 132
  03a3dd4  fadds 1, 1, 2
  03a3dd8  lfs 2, 228(1)
  03a3ddc  lfs 4, 264(1)
  03a3de0  fadds 2, 3, 2
  03a3de4  lfs 3, 232(1)
  03a3de8  fadds 3, 4, 3
  03a3dec  lfs 4, 13388(3)
  03a3df0  lfs 5, 13392(4)
  03a3df4  lis 3, 132
  03a3df8  stfs 4, 252(1)
  03a3dfc  stfs 1, 256(1)
  03a3e00  lfs 1, 13396(5)
  03a3e04  stfs 2, 260(1)
  03a3e08  stfs 5, 268(1)
  03a3e0c  lfs 2, 13400(3)
  03a3e10  stfs 3, 264(1)
  03a3e14  bl 0xfcbe8
  03a3e18  nop
  03a3e1c  lis 29, 114
  03a3e20  lfs 2, -3056(29)
  03a3e24  fmuls 1, 1, 2
  03a3e28  bl 0x502758
  03a3e2c  nop
  03a3e30  lis 4, 132
  03a3e34  lis 5, 132
  03a3e38  ori 28, 3, 0
  03a3e3c  lfs 1, 13404(4)
  03a3e40  lfs 2, 13408(5)
  03a3e44  bl 0xfcbe8
  03a3e48  nop
  03a3e4c  lfs 2, -3056(29)
  03a3e50  fmuls 1, 1, 2
  03a3e54  bl 0x502758
  03a3e58  nop
  03a3e5c  lis 4, 132
  03a3e60  lis 5, 132
  03a3e64  ori 27, 3, 0
  03a3e68  lfs 1, 13412(4)
  03a3e6c  lfs 2, 13416(5)
  03a3e70  bl 0xfcbe8
  03a3e74  nop
  03a3e78  lfs 2, -3056(29)
  03a3e7c  fmuls 1, 1, 2
  03a3e80  bl 0x502758
  03a3e84  nop
  03a3e88  lis 4, 132
  03a3e8c  lis 6, 132
  03a3e90  lis 7, 132
  03a3e94  addic 29, 31, 16
  03a3e98  ori 10, 3, 0
  03a3e9c  lwz 8, 13380(4)
  03a3ea0  addic 5, 1, 256
  03a3ea4  lwz 9, 13432(6)
  03a3ea8  addic 4, 1, 240
  03a3eac  lwz 7, 13384(7)
  03a3eb0  extsw 6, 8
  03a3eb4  extsw 11, 9
  03a3eb8  ori 3, 29, 0
  03a3ebc  ori 8, 28, 0
  03a3ec0  ori 9, 27, 0
  03a3ec4  std 11, 112(1)
  03a3ec8  extsw 7, 7
  03a3ecc  bl 0x1206e8
  03a3ed0  nop
  03a3ed4  lfs 29, 16(30)
  03a3ed8  lfs 1, 16(31)
  03a3edc  lfs 3, 20(30)
  03a3ee0  lis 3, 58
  03a3ee4  lfs 2, 20(31)
  03a3ee8  fsubs 29, 29, 1
  03a3eec  lfs 31, 24(30)
  03a3ef0  addi 3, 3, 15328
  03a3ef4  fsubs 3, 3, 2
  03a3ef8  lis 28, 115
  03a3efc  addic 28, 28, 22784
  03a3f00  fabs 5, 29
  03a3f04  fabs 6, 3
  03a3f08  stfs 29, 308(1)
  03a3f0c  stfs 3, 312(1)
  03a3f10  lfs 2, 24(31)
  03a3f14  fsubs 31, 31, 2
  03a3f18  fsubs 1, 5, 6
  03a3f1c  stfs 1, 316(1)
  03a3f20  lwz 4, 308(1)
  03a3f24  lfs 27, 4(3)
  03a3f28  lfs 1, 308(1)
  03a3f2c  lwz 5, 312(1)
  03a3f30  lfs 2, 312(1)
  03a3f34  lwz 6, 316(1)
  03a3f38  rlwinm 5, 5, 3, 29, 29
  03a3f3c  fabs 7, 2
  03a3f40  lfs 2, 316(1)
  03a3f44  fabs 1, 1
  03a3f48  rlwimi 5, 6, 2, 30, 30
  03a3f4c  fsub 4, 2, 27
  03a3f50  rlwimi 5, 4, 4, 28, 28
  03a3f54  fsub 8, 2, 27
  03a3f58  ori 4, 28, 0
  03a3f5c  lfs 2, 40(30)
  03a3f60  rlwimi 4, 5, 2, 26, 28
  03a3f64  slwi 5, 5, 2
  03a3f68  clrldi 4, 4, 32
  03a3f6c  fsel 6, 4, 1, 6
  03a3f70  lfsx 1, 28, 5
  03a3f74  lfs 4, 4(4)
  03a3f78  fsel 5, 8, 7, 5
  03a3f7c  lfs 30, 8(3)
  03a3f80  fcmpu 0, 6, 27
  03a3f84  bt 1, 0x3a3f90
  03a3f88  fmr 1, 27
  03a3f8c  b 0x3a40a8
  03a3f90  fsubs 7, 5, 6
  03a3f94  fadds 5, 5, 6
  03a3f98  addic 3, 1, 16
  03a3f9c  li 6, 2
  03a3fa0  addic 5, 3, 416
  03a3fa4  addic 4, 3, 400
  03a3fa8  mtctr 6
  03a3fac  fdivs 5, 7, 5
  03a3fb0  fmuls 6, 5, 5
  03a3fb4  stfs 5, 428(1)
  03a3fb8  stfs 5, 420(1)
  03a3fbc  stfs 5, 424(1)
  03a3fc0  stfs 5, 416(1)
  03a3fc4  lfs 8, 428(1)
  03a3fc8  lfs 9, 420(1)
  03a3fcc  lfs 10, 424(1)
  03a3fd0  fmuls 7, 6, 6
  03a3fd4  fmuls 9, 9, 6
  03a3fd8  fmuls 8, 8, 7
  03a3fdc  fmuls 5, 7, 7
  03a3fe0  fmuls 7, 10, 7
  03a3fe4  stfs 9, 420(1)
  03a3fe8  fmuls 6, 8, 6
  03a3fec  stfs 7, 424(1)
  03a3ff0  stfs 6, 428(1)
  03a3ff4  lfs 6, 400(3)
  03a3ff8  fmuls 6, 6, 5
  03a3ffc  stfs 6, 416(3)
  03a4000  lfs 6, 4(4)
  03a4004  addic 4, 4, 8
  03a4008  fmuls 6, 6, 5
  03a400c  addic 3, 3, 8
  03a4010  stfs 6, 4(5)
  03a4014  addic 5, 5, 8
  03a4018  bdnz 0x3a3ff4
  03a401c  li 5, 4
  03a4020  ori 3, 1, 0
  03a4024  mtctr 5
  03a4028  lis 4, 115
  03a402c  addic 5, 3, 416
  03a4030  addic 4, 4, 22752
  03a4034  ori 7, 5, 0
  03a4038  lfs 5, 416(3)
  03a403c  lfs 6, 0(4)
  03a4040  fmuls 5, 5, 6
  03a4044  lfs 6, 4(4)
  03a4048  addic 4, 4, 8
  03a404c  stfs 5, 416(3)
  03a4050  lfs 5, 4(5)
  03a4054  addic 3, 3, 8
  03a4058  fmuls 5, 5, 6
  03a405c  stfs 5, 4(5)
  03a4060  addic 5, 5, 8
  03a4064  bdnz 0x3a4038
  03a4068  ori 3, 1, 0
  03a406c  fmr 5, 27
  03a4070  mtctr 6
  03a4074  lfs 6, 416(3)
  03a4078  fadds 5, 5, 6
  03a407c  lfs 6, 4(7)
  03a4080  addic 3, 3, 16
  03a4084  lfs 7, 8(7)
  03a4088  lfs 8, 12(7)
  03a408c  addic 7, 7, 16
  03a4090  fadds 5, 5, 6
  03a4094  fadds 5, 5, 7
  03a4098  fadds 5, 5, 8
  03a409c  bdnz 0x3a4074
  03a40a0  fadds 5, 5, 30
  03a40a4  fmadds 1, 5, 1, 4
  03a40a8  fmuls 26, 3, 3
  03a40ac  stfs 31, 300(1)
  03a40b0  fabs 5, 31
  03a40b4  fmadds 26, 29, 29, 26
  03a40b8  fsqrts 3, 26
  03a40bc  lwz 3, 300(1)
  03a40c0  lfs 4, 300(1)
  03a40c4  rlwinm 3, 3, 3, 29, 29
  03a40c8  fabs 4, 4
  03a40cc  fabs 6, 3
  03a40d0  stfs 3, 296(1)
  03a40d4  fsubs 3, 6, 5
  03a40d8  stfs 3, 304(1)
  03a40dc  lwz 4, 296(1)
  03a40e0  lfs 3, 296(1)
  03a40e4  lwz 5, 304(1)
  03a40e8  lfs 7, 304(1)
  03a40ec  fabs 3, 3
  03a40f0  rlwimi 3, 5, 2, 30, 30
  03a40f4  fsub 8, 7, 27
  03a40f8  fsub 7, 7, 27
  03a40fc  rlwimi 3, 4, 4, 28, 28
  03a4100  ori 4, 28, 0
  03a4104  rlwimi 4, 3, 2, 26, 28
  03a4108  slwi 3, 3, 2
  03a410c  clrldi 4, 4, 32
  03a4110  fsel 5, 8, 3, 5
  03a4114  lfsx 29, 28, 3
  03a4118  fsel 4, 7, 4, 6
  03a411c  lfs 3, 4(4)
  03a4120  fcmpu 0, 5, 27
  03a4124  bt 1, 0x3a4130
  03a4128  fmr 29, 27
  03a412c  b 0x3a4248
  03a4130  fsubs 6, 4, 5
  03a4134  fadds 4, 4, 5
  03a4138  addic 3, 1, 16
  03a413c  li 6, 2
  03a4140  addic 5, 3, 384
  03a4144  addic 4, 3, 368
  03a4148  mtctr 6
  03a414c  fdivs 4, 6, 4
  03a4150  fmuls 5, 4, 4
  03a4154  stfs 4, 396(1)
  03a4158  stfs 4, 388(1)
  03a415c  stfs 4, 392(1)
  03a4160  stfs 4, 384(1)
  03a4164  lfs 7, 396(1)
  03a4168  lfs 8, 388(1)
  03a416c  lfs 9, 392(1)
  03a4170  fmuls 6, 5, 5
  03a4174  fmuls 8, 8, 5
  03a4178  fmuls 7, 7, 6
  03a417c  fmuls 4, 6, 6
  03a4180  fmuls 6, 9, 6
  03a4184  stfs 8, 388(1)
  03a4188  fmuls 5, 7, 5
  03a418c  stfs 6, 392(1)
  03a4190  stfs 5, 396(1)
  03a4194  lfs 5, 368(3)
  03a4198  fmuls 5, 5, 4
  03a419c  stfs 5, 384(3)
  03a41a0  lfs 5, 4(4)
  03a41a4  addic 4, 4, 8
  03a41a8  fmuls 5, 5, 4
  03a41ac  addic 3, 3, 8
  03a41b0  stfs 5, 4(5)
  03a41b4  addic 5, 5, 8
  03a41b8  bdnz 0x3a4194
  03a41bc  li 5, 4
  03a41c0  ori 3, 1, 0
  03a41c4  mtctr 5
  03a41c8  lis 4, 115
  03a41cc  addic 5, 3, 384
  03a41d0  addic 4, 4, 22752
  03a41d4  ori 7, 5, 0
  03a41d8  lfs 4, 384(3)
  03a41dc  lfs 5, 0(4)
  03a41e0  fmuls 4, 4, 5
  03a41e4  lfs 5, 4(4)
  03a41e8  addic 4, 4, 8
  03a41ec  stfs 4, 384(3)
  03a41f0  lfs 4, 4(5)
  03a41f4  addic 3, 3, 8
  03a41f8  fmuls 4, 4, 5
  03a41fc  stfs 4, 4(5)
  03a4200  addic 5, 5, 8
  03a4204  bdnz 0x3a41d8
  03a4208  ori 3, 1, 0
  03a420c  fmr 4, 27
  03a4210  mtctr 6
  03a4214  lfs 5, 384(3)
  03a4218  fadds 4, 4, 5
  03a421c  lfs 5, 4(7)
  03a4220  addic 3, 3, 16
  03a4224  lfs 6, 8(7)
  03a4228  lfs 7, 12(7)
  03a422c  addic 7, 7, 16
  03a4230  fadds 4, 4, 5
  03a4234  fadds 4, 4, 6
  03a4238  fadds 4, 4, 7
  03a423c  bdnz 0x3a4214
  03a4240  fadds 4, 4, 30
  03a4244  fmadds 29, 4, 29, 3
  03a4248  bl 0x502578
  03a424c  nop
  03a4250  fmr 28, 1
  03a4254  fmr 1, 29
  03a4258  lfs 2, 44(30)
  03a425c  bl 0x502578
  03a4260  nop
  03a4264  fmr 29, 1
  03a4268  lis 3, 58
  03a426c  lfs 2, 36(30)
  03a4270  addi 3, 3, 15328
  03a4274  lfs 1, 12(3)
  03a4278  fcmpu 0, 29, 1
  03a427c  cror 6, 0, 2
  03a4280  bt 6, 0x3a428c
  03a4284  fmr 29, 1
  03a4288  b 0x3a42a8
  03a428c  lis 3, 58
  03a4290  addi 3, 3, 15328
  03a4294  lfs 1, 16(3)
  03a4298  fcmpu 0, 29, 1
  03a429c  cror 6, 1, 2
  03a42a0  bt 6, 0x3a42a8
  03a42a4  fmr 29, 1
  03a42a8  addic 3, 1, 192
  03a42ac  fmr 1, 2
  03a42b0  fmr 2, 28
  03a42b4  fmr 3, 29
  03a42b8  bl 0xfe610
  03a42bc  nop
  03a42c0  addic 3, 30, 32
  03a42c4  bl 0x4fff60
  03a42c8  nop
  03a42cc  cmpwi 3, 0
  03a42d0  bf 2, 0x3a4690
  03a42d4  lwz 3, 32(30)
  03a42d8  extsw 3, 3
  03a42dc  bl 0x502730
  03a42e0  nop
  03a42e4  fmr 29, 1
  03a42e8  lwz 3, 48(30)
  03a42ec  extsw 3, 3
  03a42f0  bl 0x502730
  03a42f4  nop
  03a42f8  fdivs 3, 29, 1
  03a42fc  lfs 1, 0(30)
  03a4300  lfs 2, 192(1)
  03a4304  lfs 4, 4(30)
  03a4308  lfs 5, 196(1)
  03a430c  lfs 6, 8(30)
  03a4310  lfs 7, 200(1)
  03a4314  lfs 8, 16(31)
  03a4318  lfs 9, 20(31)
  03a431c  lfs 10, 24(31)
  03a4320  lfs 11, 28(31)
  03a4324  stfs 11, 220(1)
  03a4328  fsubs 1, 1, 2
  03a432c  fsubs 4, 4, 5
  03a4330  fsubs 6, 6, 7
  03a4334  fmadds 1, 3, 1, 2
  03a4338  fmadds 2, 3, 4, 5
  03a433c  fmadds 3, 3, 6, 7
  03a4340  fabs 6, 1
  03a4344  fabs 7, 2
  03a4348  fadds 4, 8, 1
  03a434c  fadds 8, 9, 2
  03a4350  stfs 1, 284(1)
  03a4354  fadds 9, 10, 3
  03a4358  stfs 2, 288(1)
  03a435c  fsubs 5, 6, 7
  03a4360  stfs 4, 208(1)
  03a4364  stfs 5, 292(1)
  03a4368  lwz 3, 284(1)
  03a436c  lfs 4, 284(1)
  03a4370  lwz 4, 288(1)
  03a4374  stfs 8, 212(1)
  03a4378  fabs 4, 4
  03a437c  stfs 9, 216(1)
  03a4380  rlwinm 4, 4, 3, 29, 29
  03a4384  lfs 5, 288(1)
  03a4388  lwz 5, 292(1)
  03a438c  lfs 8, 292(1)
  03a4390  fabs 5, 5
  03a4394  rlwimi 4, 5, 2, 30, 30
  03a4398  fsub 9, 8, 27
  03a439c  fsub 8, 8, 27
  03a43a0  rlwimi 4, 3, 4, 28, 28
  03a43a4  ori 3, 28, 0
  03a43a8  rlwimi 3, 4, 2, 26, 28
  03a43ac  slwi 4, 4, 2
  03a43b0  clrldi 3, 3, 32
  03a43b4  fsel 7, 9, 4, 7
  03a43b8  lfsx 4, 28, 4
  03a43bc  fsel 6, 8, 5, 6
  03a43c0  lfs 5, 4(3)
  03a43c4  fcmpu 0, 7, 27
  03a43c8  bt 1, 0x3a43d4
  03a43cc  fmr 4, 27
  03a43d0  b 0x3a44ec
  03a43d4  fsubs 8, 6, 7
  03a43d8  fadds 6, 6, 7
  03a43dc  addic 3, 1, 16
  03a43e0  li 6, 2
  03a43e4  addic 4, 3, 336
  03a43e8  addic 5, 3, 352
  03a43ec  mtctr 6
  03a43f0  fdivs 6, 8, 6
  03a43f4  fmuls 7, 6, 6
  03a43f8  stfs 6, 364(1)
  03a43fc  stfs 6, 356(1)
  03a4400  stfs 6, 360(1)
  03a4404  stfs 6, 352(1)
  03a4408  lfs 9, 364(1)
  03a440c  lfs 10, 356(1)
  03a4410  lfs 11, 360(1)
  03a4414  fmuls 8, 7, 7
  03a4418  fmuls 10, 10, 7
  03a441c  fmuls 9, 9, 8
  03a4420  fmuls 6, 8, 8
  03a4424  fmuls 8, 11, 8
  03a4428  stfs 10, 356(1)
  03a442c  fmuls 7, 9, 7
  03a4430  stfs 8, 360(1)
  03a4434  stfs 7, 364(1)
  03a4438  lfs 7, 336(3)
  03a443c  fmuls 7, 7, 6
  03a4440  stfs 7, 352(3)
  03a4444  lfs 7, 4(4)
  03a4448  addic 3, 3, 8
  03a444c  addic 4, 4, 8
  03a4450  fmuls 7, 7, 6
  03a4454  stfs 7, 4(5)
  03a4458  addic 5, 5, 8
  03a445c  bdnz 0x3a4438
  03a4460  li 5, 4
  03a4464  ori 3, 1, 0
  03a4468  mtctr 5
  03a446c  lis 4, 115
  03a4470  addic 5, 3, 352
  03a4474  addic 4, 4, 22752
  03a4478  ori 7, 5, 0
  03a447c  lfs 6, 352(3)
  03a4480  lfs 7, 0(4)
  03a4484  fmuls 6, 6, 7
  03a4488  lfs 7, 4(4)
  03a448c  addic 4, 4, 8
  03a4490  stfs 6, 352(3)
  03a4494  lfs 6, 4(5)
  03a4498  addic 3, 3, 8
  03a449c  fmuls 6, 6, 7
  03a44a0  stfs 6, 4(5)
  03a44a4  addic 5, 5, 8
  03a44a8  bdnz 0x3a447c
  03a44ac  fmr 6, 27
  03a44b0  ori 3, 1, 0
  03a44b4  mtctr 6
  03a44b8  lfs 7, 352(3)
  03a44bc  fadds 6, 6, 7
  03a44c0  addic 3, 3, 16
  03a44c4  lfs 7, 4(7)
  03a44c8  lfs 8, 8(7)
  03a44cc  lfs 9, 12(7)
  03a44d0  addic 7, 7, 16
  03a44d4  fadds 6, 6, 7
  03a44d8  fadds 6, 6, 8
  03a44dc  fadds 6, 6, 9
  03a44e0  bdnz 0x3a44b8
  03a44e4  fadds 6, 6, 30
  03a44e8  fmadds 4, 6, 4, 5
  03a44ec  fmuls 2, 2, 2
  03a44f0  stfs 3, 276(1)
  03a44f4  stfs 4, 72(31)
  03a44f8  fabs 4, 3
  03a44fc  lwz 3, 276(1)
  03a4500  rlwinm 3, 3, 3, 29, 29
  03a4504  fmadds 1, 1, 1, 2
  03a4508  lfs 2, 276(1)
  03a450c  fabs 3, 2
  03a4510  fsqrts 1, 1
  03a4514  fabs 5, 1
  03a4518  stfs 1, 272(1)
  03a451c  fsubs 1, 5, 4
  03a4520  stfs 1, 280(1)
  03a4524  lwz 4, 272(1)
  03a4528  lfs 1, 272(1)
  03a452c  lwz 5, 280(1)
  03a4530  lfs 2, 280(1)
  03a4534  fabs 1, 1
  03a4538  rlwimi 3, 5, 2, 30, 30
  03a453c  fsub 6, 2, 27
  03a4540  fsub 7, 2, 27
  03a4544  rlwimi 3, 4, 4, 28, 28
  03a4548  ori 4, 28, 0
  03a454c  rlwimi 4, 3, 2, 26, 28
  03a4550  slwi 3, 3, 2
  03a4554  clrldi 4, 4, 32
  03a4558  fsel 4, 6, 1, 4
  03a455c  lfsx 1, 28, 3
  03a4560  fsel 3, 7, 3, 5
  03a4564  lfs 2, 4(4)
  03a4568  fcmpu 0, 4, 27
  03a456c  bt 1, 0x3a4574
  03a4570  b 0x3a4688
  03a4574  fsubs 5, 3, 4
  03a4578  fadds 3, 3, 4
  03a457c  addic 3, 1, 16
  03a4580  li 7, 2
  03a4584  addic 4, 3, 304
  03a4588  addic 5, 3, 320
  03a458c  mtctr 7
  03a4590  fdivs 3, 5, 3
  03a4594  fmuls 4, 3, 3
  03a4598  stfs 3, 332(1)
  03a459c  stfs 3, 324(1)
  03a45a0  stfs 3, 328(1)
  03a45a4  stfs 3, 320(1)
  03a45a8  lfs 6, 332(1)
  03a45ac  lfs 7, 324(1)
  03a45b0  lfs 8, 328(1)
  03a45b4  fmuls 5, 4, 4
  03a45b8  fmuls 7, 7, 4
  03a45bc  fmuls 6, 6, 5
  03a45c0  fmuls 3, 5, 5
  03a45c4  fmuls 5, 8, 5
  03a45c8  stfs 7, 324(1)
  03a45cc  fmuls 4, 6, 4
  03a45d0  stfs 5, 328(1)
  03a45d4  stfs 4, 332(1)
  03a45d8  lfs 4, 304(3)
  03a45dc  fmuls 4, 4, 3
  03a45e0  stfs 4, 320(3)
  03a45e4  lfs 4, 4(4)
  03a45e8  addic 3, 3, 8
  03a45ec  addic 4, 4, 8
  03a45f0  fmuls 4, 4, 3
  03a45f4  stfs 4, 4(5)
  03a45f8  addic 5, 5, 8
  03a45fc  bdnz 0x3a45d8
  03a4600  li 5, 4
  03a4604  ori 3, 1, 0
  03a4608  mtctr 5
  03a460c  lis 4, 115
  03a4610  addic 5, 3, 320
  03a4614  addic 4, 4, 22752
  03a4618  ori 6, 5, 0
  03a461c  lfs 3, 320(3)
  03a4620  lfs 4, 0(4)
  03a4624  fmuls 3, 3, 4
  03a4628  lfs 4, 4(4)
  03a462c  addic 4, 4, 8
  03a4630  stfs 3, 320(3)
  03a4634  lfs 3, 4(5)
  03a4638  addic 3, 3, 8
  03a463c  fmuls 3, 3, 4
  03a4640  stfs 3, 4(5)
  03a4644  addic 5, 5, 8
  03a4648  bdnz 0x3a461c
  03a464c  ori 3, 1, 0
  03a4650  mtctr 7
  03a4654  lfs 3, 320(3)
  03a4658  lfs 4, 4(6)
  03a465c  fadds 3, 27, 3
  03a4660  lfs 5, 8(6)
  03a4664  lfs 27, 12(6)
  03a4668  addic 3, 3, 16
  03a466c  addic 6, 6, 16
  03a4670  fadds 3, 3, 4
  03a4674  fadds 3, 3, 5
  03a4678  fadds 27, 3, 27
  03a467c  bdnz 0x3a4654
  03a4680  fadds 27, 27, 30
  03a4684  fmadds 27, 27, 1, 2
  03a4688  fneg 29, 27
  03a468c  b 0x3a46cc
  03a4690  lfs 1, 16(31)
  03a4694  lfs 2, 192(1)
  03a4698  lfs 3, 20(31)
  03a469c  fadds 1, 1, 2
  03a46a0  lfs 2, 196(1)
  03a46a4  lfs 4, 24(31)
  03a46a8  fadds 2, 3, 2
  03a46ac  lfs 3, 200(1)
  03a46b0  fadds 3, 4, 3
  03a46b4  lfs 4, 28(31)
  03a46b8  stfs 28, 72(31)
  03a46bc  stfs 4, 220(1)
  03a46c0  stfs 1, 208(1)
  03a46c4  stfs 2, 212(1)
  03a46c8  stfs 3, 216(1)
  03a46cc  ori 3, 29, 0
  03a46d0  stfs 29, 68(31)
  03a46d4  addic 4, 1, 208
  03a46d8  li 5, 0
  03a46dc  ori 6, 31, 0
  03a46e0  li 7, 0
  03a46e4  bl 0x57820
  03a46e8  nop
  03a46ec  cmpwi 3, 0
  03a46f0  bf 2, 0x3a470c
  03a46f4  fmadds 1, 31, 31, 26
  03a46f8  lfs 2, 36(30)
  03a46fc  fsqrts 1, 1
  03a4700  fcmpu 0, 1, 2
  03a4704  cror 6, 1, 2
  03a4708  bt 6, 0x3a47ec
  03a470c  lis 3, 151
  03a4710  lis 4, 58
  03a4714  addic 3, 3, -25376
  03a4718  addi 4, 4, 15328
  03a471c  lbz 3, 8356(3)
  03a4720  lfs 30, 20(4)
  03a4724  cmpwi 3, 2
  03a4728  lfs 31, 24(4)
  03a472c  bf 2, 0x3a4760
  03a4730  li 5, 0
  03a4734  fmr 1, 31
  03a4738  ori 3, 31, 0
  03a473c  fmr 2, 31
  03a4740  ori 4, 29, 0
  03a4744  fmr 3, 30
  03a4748  li 6, 3
  03a474c  li 9, 0
  03a4750  std 5, 112(1)
  03a4754  li 10, 1
  03a4758  bl 0x105870
  03a475c  nop
  03a4760  li 3, 4
  03a4764  li 4, 0
  03a4768  ori 5, 31, 0
  03a476c  li 6, 1356
  03a4770  bl 0x15d204
  03a4774  nop
  03a4778  lis 3, 58
  03a477c  li 7, -1
  03a4780  fmr 4, 31
  03a4784  addi 4, 3, 15328
  03a4788  fmr 6, 30
  03a478c  li 6, 1
  03a4790  li 11, 0
  03a4794  ori 3, 31, 0
  03a4798  ori 5, 29, 0
  03a479c  lfs 1, 28(4)
  03a47a0  li 8, 10
  03a47a4  lfs 5, 32(4)
  03a47a8  li 9, 3
  03a47ac  lfs 7, 0(4)
  03a47b0  li 10, 16
  03a47b4  std 7, 144(1)
  03a47b8  ori 4, 30, 0
  03a47bc  std 6, 160(1)
  03a47c0  fmr 2, 1
  03a47c4  std 6, 168(1)
  03a47c8  fmr 3, 1
  03a47cc  std 7, 176(1)
  03a47d0  std 11, 184(1)
  03a47d4  bl 0x10e030
  03a47d8  nop
  03a47dc  ori 3, 31, 0
  03a47e0  bl 0xefb38
  03a47e4  nop
  03a47e8  b 0x3a480c
  03a47ec  lfs 1, 208(1)
  03a47f0  lfs 2, 212(1)
  03a47f4  stfs 1, 16(31)
  03a47f8  lfs 1, 216(1)
  03a47fc  stfs 2, 20(31)
  03a4800  lfs 2, 220(1)
  03a4804  stfs 1, 24(31)
  03a4808  stfs 2, 28(31)
  03a480c  ld 0, 560(1)
  03a4810  mtlr 0
  03a4814  lfd 26, 496(1)
  03a4818  lfd 27, 504(1)
  03a481c  lfd 28, 512(1)
  03a4820  lfd 29, 520(1)
  03a4824  lfd 30, 528(1)
  03a4828  lfd 31, 536(1)
  03a482c  ld 27, 456(1)
  03a4830  ld 28, 464(1)
  03a4834  ld 29, 472(1)
  03a4838  ld 30, 480(1)
  03a483c  ld 31, 488(1)
  03a4840  addi 1, 1, 544
  03a4844  blr
