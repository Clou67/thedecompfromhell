# sdk/tUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_005e3c04:   # 0x5e3c04, 0x94 bytes
  05e3c04  lwz 9, -23432(2)
  05e3c08  mflr 0
  05e3c0c  stdu 1, -128(1)
  05e3c10  std 0, 144(1)
  05e3c14  std 30, 112(1)
  05e3c18  std 31, 120(1)
  05e3c1c  lwz 0, 0(9)
  05e3c20  mr 30, 3
  05e3c24  clrldi 31, 3, 32
  05e3c28  cmpwi 7, 0, 0
  05e3c2c  clrldi 9, 0, 32
  05e3c30  bt 30, 0x5e3c50
  05e3c34  lwz 0, 0(9)
  05e3c38  mr 3, 31
  05e3c3c  std 2, 40(1)
  05e3c40  mtctr 0
  05e3c44  lwz 2, 4(9)
  05e3c48  bctrl
  05e3c4c  ld 2, 40(1)
  05e3c50  lwz 9, 0(30)
  05e3c54  mr 3, 31
  05e3c58  lwz 11, 12(9)
  05e3c5c  lwz 0, 0(11)
  05e3c60  std 2, 40(1)
  05e3c64  mtctr 0
  05e3c68  lwz 2, 4(11)
  05e3c6c  bctrl
  05e3c70  ld 2, 40(1)
  05e3c74  mr 3, 31
  05e3c78  bl 0x5e3b94
  05e3c7c  nop
  05e3c80  ld 0, 144(1)
  05e3c84  ld 30, 112(1)
  05e3c88  ld 31, 120(1)
  05e3c8c  mtlr 0
  05e3c90  addi 1, 1, 128
  05e3c94  blr

FUN_005e3c98:   # 0x5e3c98, 0x30 bytes
  05e3c98  mr 9, 3
  05e3c9c  mflr 0
  05e3ca0  stdu 1, -112(1)
  05e3ca4  std 0, 128(1)
  05e3ca8  lwz 0, -23424(2)
  05e3cac  stw 0, 0(9)
  05e3cb0  bl 0x5e387c
  05e3cb4  nop
  05e3cb8  ld 0, 128(1)
  05e3cbc  addi 1, 1, 112
  05e3cc0  mtlr 0
  05e3cc4  blr

FUN_005e3cc8:   # 0x5e3cc8, 0xc bytes
  05e3cc8  lwz 0, -23424(2)
  05e3ccc  stw 0, 0(3)
  05e3cd0  blr

FUN_005e3cd4:   # 0x5e3cd4, 0xc bytes
  05e3cd4  lwz 0, -23424(2)
  05e3cd8  stw 0, 0(3)
  05e3cdc  blr

FUN_005e3ce0:   # 0x5e3ce0, 0x58 bytes
  05e3ce0  stdu 1, -144(1)
  05e3ce4  mflr 0
  05e3ce8  std 29, 120(1)
  05e3cec  mr 29, 3
  05e3cf0  li 3, 1
  05e3cf4  std 0, 160(1)
  05e3cf8  std 28, 112(1)
  05e3cfc  bl 0x5cbbec
  05e3d00  nop
  05e3d04  lwz 9, -23420(2)
  05e3d08  li 3, 1
  05e3d0c  lwz 28, 0(9)
  05e3d10  stw 29, 0(9)
  05e3d14  bl 0x5cbb70
  05e3d18  nop
  05e3d1c  ld 0, 160(1)
  05e3d20  ld 29, 120(1)
  05e3d24  clrldi 3, 28, 32
  05e3d28  mtlr 0
  05e3d2c  ld 28, 112(1)
  05e3d30  addi 1, 1, 144
  05e3d34  blr

FUN_005e3d38:   # 0x5e3d38, 0x10 bytes
  05e3d38  stdu 1, -112(1)
  05e3d3c  mflr 0
  05e3d40  std 0, 128(1)
  05e3d44  bl 0x5e6980

FUN_005e3d54:   # 0x5e3d54, 0x8 bytes
  05e3d54  li 3, 0
  05e3d58  blr

FUN_005e3d5c:   # 0x5e3d5c, 0x8 bytes
  05e3d5c  li 3, 0
  05e3d60  blr

_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv:   # 0x5e3d64, 0x8c bytes
  05e3d64  li 9, 0
  05e3d68  mflr 0
  05e3d6c  stdu 1, -144(1)
  05e3d70  std 0, 160(1)
  05e3d74  std 31, 136(1)
  05e3d78  stw 9, 124(1)
  05e3d7c  lwz 11, 0(3)
  05e3d80  li 0, 16
  05e3d84  stw 9, 112(1)
  05e3d88  stw 9, 116(1)
  05e3d8c  stw 0, 120(1)
  05e3d90  mr 31, 5
  05e3d94  lwz 5, 0(5)
  05e3d98  lwz 9, 24(11)
  05e3d9c  addi 6, 1, 112
  05e3da0  lwz 0, 0(9)
  05e3da4  std 2, 40(1)
  05e3da8  mtctr 0
  05e3dac  lwz 2, 4(9)
  05e3db0  bctrl
  05e3db4  ld 2, 40(1)
  05e3db8  lwz 0, 116(1)
  05e3dbc  li 3, 0
  05e3dc0  rlwinm 0, 0, 0, 29, 30
  05e3dc4  cmpwi 7, 0, 6
  05e3dc8  bf 30, 0x5e3dd8
  05e3dcc  lwz 0, 112(1)
  05e3dd0  li 3, 1
  05e3dd4  stw 0, 0(31)
  05e3dd8  ld 0, 160(1)
  05e3ddc  extsw 3, 3
  05e3de0  ld 31, 136(1)
  05e3de4  addi 1, 1, 144
  05e3de8  mtlr 0
  05e3dec  blr

_ZNK10__cxxabiv117__class_type_info20__do_find_public_srcEiPKvPKS0_S2_:   # 0x5e3df0, 0x28 bytes
  05e3df0  xor 7, 7, 5
  05e3df4  srawi 0, 7, 31
  05e3df8  xor 3, 0, 7
  05e3dfc  sub 3, 0, 3
  05e3e00  srawi 3, 3, 31
  05e3e04  rlwinm 3, 3, 29, 1, 31
  05e3e08  rotlwi 3, 3, 3
  05e3e0c  addi 3, 3, 6
  05e3e10  clrldi 3, 3, 32
  05e3e14  blr

_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj:   # 0x5e3e18, 0x108 bytes
  05e3e18  cmpw 7, 3, 4
  05e3e1c  mflr 0
  05e3e20  stdu 1, -160(1)
  05e3e24  std 27, 120(1)
  05e3e28  std 28, 128(1)
  05e3e2c  std 30, 144(1)
  05e3e30  std 31, 152(1)
  05e3e34  std 29, 136(1)
  05e3e38  std 0, 176(1)
  05e3e3c  mr 30, 4
  05e3e40  mr 31, 3
  05e3e44  mr 28, 6
  05e3e48  mr 27, 5
  05e3e4c  bt 30, 0x5e3ea8
  05e3e50  lwz 4, 4(4)
  05e3e54  lwz 3, 4(3)
  05e3e58  bl 0x5cc784
  05e3e5c  nop
  05e3e60  cmplwi 6, 28, 3
  05e3e64  cmpwi 7, 3, 0
  05e3e68  bt 30, 0x5e3ea8
  05e3e6c  clrldi 3, 30, 32
  05e3e70  clrldi 4, 31, 32
  05e3e74  clrldi 5, 27, 32
  05e3e78  bf 25, 0x5e3ed4
  05e3e7c  ld 0, 176(1)
  05e3e80  li 3, 0
  05e3e84  ld 27, 120(1)
  05e3e88  extsw 3, 3
  05e3e8c  ld 28, 128(1)
  05e3e90  ld 29, 136(1)
  05e3e94  mtlr 0
  05e3e98  ld 30, 144(1)
  05e3e9c  ld 31, 152(1)
  05e3ea0  addi 1, 1, 160
  05e3ea4  blr
  05e3ea8  ld 0, 176(1)
  05e3eac  li 3, 1
  05e3eb0  ld 27, 120(1)
  05e3eb4  extsw 3, 3
  05e3eb8  ld 28, 128(1)
  05e3ebc  ld 29, 136(1)
  05e3ec0  mtlr 0
  05e3ec4  ld 30, 144(1)
  05e3ec8  ld 31, 152(1)
  05e3ecc  addi 1, 1, 160
  05e3ed0  blr
  05e3ed4  lwz 9, 0(30)
  05e3ed8  lwz 11, 20(9)
  05e3edc  lwz 0, 0(11)
  05e3ee0  std 2, 40(1)
  05e3ee4  mtctr 0
  05e3ee8  lwz 2, 4(11)
  05e3eec  bctrl
  05e3ef0  ld 2, 40(1)
  05e3ef4  ld 0, 176(1)
  05e3ef8  clrlwi 3, 3, 24
  05e3efc  ld 27, 120(1)
  05e3f00  mtlr 0
  05e3f04  extsw 3, 3
  05e3f08  ld 28, 128(1)
  05e3f0c  ld 29, 136(1)
  05e3f10  ld 30, 144(1)
  05e3f14  ld 31, 152(1)
  05e3f18  addi 1, 1, 160
  05e3f1c  blr

FUN_005e3f20:   # 0x5e3f20, 0x30 bytes
  05e3f20  mr 9, 3
  05e3f24  mflr 0
  05e3f28  stdu 1, -112(1)
  05e3f2c  std 0, 128(1)
  05e3f30  lwz 0, -23416(2)
  05e3f34  stw 0, 0(9)
  05e3f38  bl 0x5e387c
  05e3f3c  nop
  05e3f40  ld 0, 128(1)
  05e3f44  addi 1, 1, 112
  05e3f48  mtlr 0
  05e3f4c  blr

FUN_005e3f50:   # 0x5e3f50, 0xc bytes
  05e3f50  lwz 0, -23416(2)
  05e3f54  stw 0, 0(3)
  05e3f58  blr

FUN_005e3f5c:   # 0x5e3f5c, 0xc bytes
  05e3f5c  lwz 0, -23416(2)
  05e3f60  stw 0, 0(3)
  05e3f64  blr

FUN_005e3f68:   # 0x5e3f68, 0x40 bytes
  05e3f68  stdu 1, -144(1)
  05e3f6c  mflr 0
  05e3f70  std 29, 120(1)
  05e3f74  mr 29, 3
  05e3f78  std 0, 160(1)
  05e3f7c  lwz 0, -23412(2)
  05e3f80  stw 0, 0(29)
  05e3f84  bl 0x5e3f5c
  05e3f88  mr 3, 29
  05e3f8c  bl 0x5e387c
  05e3f90  nop
  05e3f94  ld 0, 160(1)
  05e3f98  ld 29, 120(1)
  05e3f9c  mtlr 0
  05e3fa0  addi 1, 1, 144
  05e3fa4  blr

FUN_005e3fa8:   # 0x5e3fa8, 0x10 bytes
  05e3fa8  mr 9, 3
  05e3fac  lwz 0, -23412(2)
  05e3fb0  stw 0, 0(9)
  05e3fb4  b 0x5e3f5c

FUN_005e3fb8:   # 0x5e3fb8, 0x10 bytes
  05e3fb8  mr 9, 3
  05e3fbc  lwz 0, -23412(2)
  05e3fc0  stw 0, 0(9)
  05e3fc4  b 0x5e3f5c

FUN_005e3fc8:   # 0x5e3fc8, 0x40 bytes
  05e3fc8  stdu 1, -144(1)
  05e3fcc  mflr 0
  05e3fd0  std 29, 120(1)
  05e3fd4  mr 29, 3
  05e3fd8  std 0, 160(1)
  05e3fdc  lwz 0, -23408(2)
  05e3fe0  stw 0, 0(29)
  05e3fe4  bl 0x5e3fb8
  05e3fe8  mr 3, 29
  05e3fec  bl 0x5e387c
  05e3ff0  nop
  05e3ff4  ld 0, 160(1)
  05e3ff8  ld 29, 120(1)
  05e3ffc  mtlr 0
  05e4000  addi 1, 1, 144
  05e4004  blr

FUN_005e4008:   # 0x5e4008, 0x10 bytes
  05e4008  mr 9, 3
  05e400c  lwz 0, -23408(2)
  05e4010  stw 0, 0(9)
  05e4014  b 0x5e3fb8

FUN_005e4018:   # 0x5e4018, 0x10 bytes
  05e4018  mr 9, 3
  05e401c  lwz 0, -23408(2)
  05e4020  stw 0, 0(9)
  05e4024  b 0x5e3fb8

FUN_005e4028:   # 0x5e4028, 0x40 bytes
  05e4028  stdu 1, -144(1)
  05e402c  mflr 0
  05e4030  std 29, 120(1)
  05e4034  mr 29, 3
  05e4038  std 0, 160(1)
  05e403c  lwz 0, -23404(2)
  05e4040  stw 0, 0(29)
  05e4044  bl 0x5e3fb8
  05e4048  mr 3, 29
  05e404c  bl 0x5e387c
  05e4050  nop
  05e4054  ld 0, 160(1)
  05e4058  ld 29, 120(1)
  05e405c  mtlr 0
  05e4060  addi 1, 1, 144
  05e4064  blr

FUN_005e4068:   # 0x5e4068, 0x10 bytes
  05e4068  mr 9, 3
  05e406c  lwz 0, -23404(2)
  05e4070  stw 0, 0(9)
  05e4074  b 0x5e3fb8

FUN_005e4078:   # 0x5e4078, 0x10 bytes
  05e4078  mr 9, 3
  05e407c  lwz 0, -23404(2)
  05e4080  stw 0, 0(9)
  05e4084  b 0x5e3fb8

__dynamic_cast:   # 0x5e4088, 0x1cc bytes
  05e4088  li 10, 0
  05e408c  mflr 0
  05e4090  stdu 1, -208(1)
  05e4094  std 0, 224(1)
  05e4098  stw 10, 112(1)
  05e409c  lwz 9, 0(3)
  05e40a0  li 0, 16
  05e40a4  std 31, 200(1)
  05e40a8  addi 9, 9, -8
  05e40ac  mr 31, 3
  05e40b0  clrldi 9, 9, 32
  05e40b4  std 25, 152(1)
  05e40b8  std 26, 160(1)
  05e40bc  std 27, 168(1)
  05e40c0  std 28, 176(1)
  05e40c4  lwz 3, 4(9)
  05e40c8  mr 26, 5
  05e40cc  std 30, 192(1)
  05e40d0  stw 10, 124(1)
  05e40d4  stw 10, 116(1)
  05e40d8  stw 10, 120(1)
  05e40dc  lwz 7, 0(9)
  05e40e0  mr 25, 4
  05e40e4  std 29, 184(1)
  05e40e8  stw 0, 128(1)
  05e40ec  lwz 9, 0(3)
  05e40f0  extsw 28, 6
  05e40f4  add 7, 31, 7
  05e40f8  clrldi 27, 31, 32
  05e40fc  addi 10, 1, 112
  05e4100  mr 30, 6
  05e4104  lwz 11, 28(9)
  05e4108  clrldi 7, 7, 32
  05e410c  mr 4, 28
  05e4110  li 5, 6
  05e4114  mr 6, 26
  05e4118  mr 8, 25
  05e411c  lwz 0, 0(11)
  05e4120  mr 9, 27
  05e4124  std 2, 40(1)
  05e4128  mtctr 0
  05e412c  lwz 2, 4(11)
  05e4130  bctrl
  05e4134  ld 2, 40(1)
  05e4138  lwz 10, 112(1)
  05e413c  cmpwi 7, 10, 0
  05e4140  bt 30, 0x5e41cc
  05e4144  lwz 11, 124(1)
  05e4148  mr 3, 10
  05e414c  rlwinm 0, 11, 0, 29, 30
  05e4150  cmpwi 7, 0, 6
  05e4154  bf 30, 0x5e4188
  05e4158  ld 0, 224(1)
  05e415c  clrldi 3, 3, 32
  05e4160  ld 25, 152(1)
  05e4164  ld 26, 160(1)
  05e4168  mtlr 0
  05e416c  ld 27, 168(1)
  05e4170  ld 28, 176(1)
  05e4174  ld 29, 184(1)
  05e4178  ld 30, 192(1)
  05e417c  ld 31, 200(1)
  05e4180  addi 1, 1, 208
  05e4184  blr
  05e4188  lwz 9, 120(1)
  05e418c  lwz 0, 116(1)
  05e4190  and 0, 9, 0
  05e4194  rlwinm 0, 0, 0, 29, 30
  05e4198  cmpwi 7, 0, 6
  05e419c  bt 30, 0x5e4158
  05e41a0  li 8, 5
  05e41a4  and 0, 9, 8
  05e41a8  cmpwi 7, 0, 4
  05e41ac  bt 30, 0x5e41cc
  05e41b0  cmpwi 7, 11, 0
  05e41b4  bf 30, 0x5e41cc
  05e41b8  cmpwi 7, 30, 0
  05e41bc  bt 28, 0x5e4200
  05e41c0  add 0, 10, 30
  05e41c4  cmpw 7, 0, 31
  05e41c8  bt 30, 0x5e424c
  05e41cc  ld 0, 224(1)
  05e41d0  li 3, 0
  05e41d4  ld 25, 152(1)
  05e41d8  clrldi 3, 3, 32
  05e41dc  ld 26, 160(1)
  05e41e0  ld 27, 168(1)
  05e41e4  mtlr 0
  05e41e8  ld 28, 176(1)
  05e41ec  ld 29, 184(1)
  05e41f0  ld 30, 192(1)
  05e41f4  ld 31, 200(1)
  05e41f8  addi 1, 1, 208
  05e41fc  blr
  05e4200  cmpwi 7, 30, -2
  05e4204  bt 30, 0x5e41cc
  05e4208  lwz 11, 0(26)
  05e420c  mr 3, 26
  05e4210  mr 4, 28
  05e4214  clrldi 5, 10, 32
  05e4218  mr 6, 25
  05e421c  mr 7, 27
  05e4220  lwz 9, 32(11)
  05e4224  lwz 0, 0(9)
  05e4228  std 2, 40(1)
  05e422c  mtctr 0
  05e4230  lwz 2, 4(9)
  05e4234  bctrl
  05e4238  ld 2, 40(1)
  05e423c  rlwinm 3, 3, 0, 29, 30
  05e4240  cmpwi 7, 3, 6
  05e4244  bf- 30, 0x5e41cc
  05e4248  lwz 10, 112(1)
  05e424c  mr 3, 10
  05e4250  b 0x5e4158

_ZNKSt9type_info10__do_catchEPKS_PPvj:   # 0x5e4254, 0x50 bytes
  05e4254  cmpd 7, 4, 3
  05e4258  mflr 0
  05e425c  stdu 1, -112(1)
  05e4260  std 0, 128(1)
  05e4264  li 9, 1
  05e4268  bt 30, 0x5e4290
  05e426c  lwz 3, 4(3)
  05e4270  lwz 4, 4(4)
  05e4274  bl 0x5cc784
  05e4278  nop
  05e427c  srawi 0, 3, 31
  05e4280  xor 9, 0, 3
  05e4284  sub 9, 9, 0
  05e4288  addi 9, 9, -1
  05e428c  srwi 9, 9, 31
  05e4290  ld 0, 128(1)
  05e4294  extsw 3, 9
  05e4298  addi 1, 1, 112
  05e429c  mtlr 0
  05e42a0  blr

_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE:   # 0x5e42a4, 0x74 bytes
  05e42a4  cmpw 7, 3, 4
  05e42a8  mflr 0
  05e42ac  stdu 1, -128(1)
  05e42b0  std 30, 112(1)
  05e42b4  std 31, 120(1)
  05e42b8  std 0, 144(1)
  05e42bc  mr 31, 6
  05e42c0  mr 30, 5
  05e42c4  bt 30, 0x5e42e4
  05e42c8  lwz 3, 4(3)
  05e42cc  lwz 4, 4(4)
  05e42d0  bl 0x5cc784
  05e42d4  nop
  05e42d8  cmpwi 7, 3, 0
  05e42dc  li 3, 0
  05e42e0  bf 30, 0x5e42fc
  05e42e4  li 0, 6
  05e42e8  li 9, 8
  05e42ec  li 3, 1
  05e42f0  stw 30, 0(31)
  05e42f4  stw 0, 4(31)
  05e42f8  stw 9, 12(31)
  05e42fc  ld 0, 144(1)
  05e4300  extsw 3, 3
  05e4304  ld 30, 112(1)
  05e4308  ld 31, 120(1)
  05e430c  mtlr 0
  05e4310  addi 1, 1, 128
  05e4314  blr

_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE:   # 0x5e4318, 0x2fc bytes
  05e4318  stdu 1, -240(1)
  05e431c  mflr 0
  05e4320  std 20, 144(1)
  05e4324  std 23, 168(1)
  05e4328  mr 20, 5
  05e432c  mr 23, 5
  05e4330  clrldi 5, 5, 32
  05e4334  std 19, 136(1)
  05e4338  std 22, 160(1)
  05e433c  std 26, 192(1)
  05e4340  std 27, 200(1)
  05e4344  std 21, 152(1)
  05e4348  std 24, 176(1)
  05e434c  std 25, 184(1)
  05e4350  std 28, 208(1)
  05e4354  std 29, 216(1)
  05e4358  std 30, 224(1)
  05e435c  std 31, 232(1)
  05e4360  std 0, 256(1)
  05e4364  mr 19, 3
  05e4368  mr 27, 6
  05e436c  mr 22, 4
  05e4370  mr 26, 3
  05e4374  bl 0x5e42a4
  05e4378  clrlwi 3, 3, 24
  05e437c  cmpwi 7, 3, 0
  05e4380  bf 30, 0x5e453c
  05e4384  lwz 24, 8(27)
  05e4388  rlwinm 0, 24, 0, 27, 27
  05e438c  cmpwi 7, 0, 0
  05e4390  bf 30, 0x5e45f4
  05e4394  lwz 30, 12(19)
  05e4398  li 25, 0
  05e439c  addi 21, 1, 112
  05e43a0  cmpwi 7, 30, 0
  05e43a4  addi 30, 30, -1
  05e43a8  bt- 30, 0x5e44cc
  05e43ac  slwi 11, 30, 3
  05e43b0  stw 25, 112(1)
  05e43b4  addi 9, 11, 16
  05e43b8  stw 25, 116(1)
  05e43bc  extsw 9, 9
  05e43c0  stw 24, 120(1)
  05e43c4  add 9, 26, 9
  05e43c8  stw 25, 124(1)
  05e43cc  lwz 9, 4(9)
  05e43d0  rldicl 29, 9, 63, 63
  05e43d4  cmpwi 7, 29, 0
  05e43d8  bf 30, 0x5e43e8
  05e43dc  clrlwi 0, 24, 31
  05e43e0  cmpwi 7, 0, 0
  05e43e4  bt 30, 0x5e43a0
  05e43e8  cmpwi 7, 23, 0
  05e43ec  clrlwi 28, 9, 31
  05e43f0  li 5, 0
  05e43f4  bt 30, 0x5e4418
  05e43f8  cmpwi 7, 28, 0
  05e43fc  srawi 5, 9, 8
  05e4400  bt 30, 0x5e4414
  05e4404  lwz 9, 0(20)
  05e4408  add 9, 5, 9
  05e440c  clrldi 9, 9, 32
  05e4410  lwz 5, 0(9)
  05e4414  add 5, 23, 5
  05e4418  addi 0, 11, 16
  05e441c  clrldi 5, 5, 32
  05e4420  extsw 31, 0
  05e4424  mr 4, 22
  05e4428  clrldi 6, 21, 32
  05e442c  lwzx 11, 26, 31
  05e4430  mr 3, 11
  05e4434  lwz 9, 0(11)
  05e4438  lwz 10, 24(9)
  05e443c  lwz 11, 0(10)
  05e4440  std 2, 40(1)
  05e4444  mtctr 11
  05e4448  lwz 2, 4(10)
  05e444c  bctrl
  05e4450  ld 2, 40(1)
  05e4454  clrlwi 3, 3, 24
  05e4458  cmpwi 7, 3, 0
  05e445c  bt 30, 0x5e43a0
  05e4460  lwz 0, 124(1)
  05e4464  cmpwi 7, 0, 8
  05e4468  bt 30, 0x5e44e4
  05e446c  lwz 0, 116(1)
  05e4470  cmpwi 7, 0, 3
  05e4474  bf 29, 0x5e448c
  05e4478  cmpwi 7, 29, 0
  05e447c  bf 30, 0x5e448c
  05e4480  rlwinm 0, 0, 30, 1, 31
  05e4484  rotlwi 0, 0, 2
  05e4488  stw 0, 116(1)
  05e448c  lwz 11, 12(27)
  05e4490  cmpwi 7, 11, 0
  05e4494  bt 30, 0x5e44f8
  05e4498  lwz 0, 0(27)
  05e449c  lwz 9, 112(1)
  05e44a0  cmpw 7, 9, 0
  05e44a4  bf- 30, 0x5e45fc
  05e44a8  cmpwi 7, 9, 0
  05e44ac  bt 30, 0x5e4588
  05e44b0  lwz 0, 4(27)
  05e44b4  cmpwi 7, 30, 0
  05e44b8  lwz 9, 116(1)
  05e44bc  addi 30, 30, -1
  05e44c0  or 0, 0, 9
  05e44c4  stw 0, 4(27)
  05e44c8  bf+ 30, 0x5e43ac
  05e44cc  lwz 0, 4(27)
  05e44d0  srawi 11, 0, 31
  05e44d4  xor 9, 11, 0
  05e44d8  sub 9, 11, 9
  05e44dc  srwi 3, 9, 31
  05e44e0  b 0x5e4540
  05e44e4  cmpwi 7, 28, 0
  05e44e8  bt 30, 0x5e446c
  05e44ec  lwzx 0, 26, 31
  05e44f0  stw 0, 124(1)
  05e44f4  b 0x5e446c
  05e44f8  lwz 10, 116(1)
  05e44fc  lwz 9, 120(1)
  05e4500  cmpwi 7, 10, 3
  05e4504  lwz 11, 124(1)
  05e4508  lwz 0, 112(1)
  05e450c  stw 9, 8(27)
  05e4510  stw 0, 0(27)
  05e4514  stw 11, 12(27)
  05e4518  stw 10, 4(27)
  05e451c  bf- 29, 0x5e453c
  05e4520  rlwinm 0, 10, 0, 30, 30
  05e4524  cmpwi 7, 0, 0
  05e4528  bt 30, 0x5e45d4
  05e452c  lwz 0, 8(19)
  05e4530  clrlwi 0, 0, 31
  05e4534  cmpwi 7, 0, 0
  05e4538  bf+ 30, 0x5e43a0
  05e453c  li 3, 1
  05e4540  ld 0, 256(1)
  05e4544  extsw 3, 3
  05e4548  ld 19, 136(1)
  05e454c  ld 20, 144(1)
  05e4550  mtlr 0
  05e4554  ld 21, 152(1)
  05e4558  ld 22, 160(1)
  05e455c  ld 23, 168(1)
  05e4560  ld 24, 176(1)
  05e4564  ld 25, 184(1)
  05e4568  ld 26, 192(1)
  05e456c  ld 27, 200(1)
  05e4570  ld 28, 208(1)
  05e4574  ld 29, 216(1)
  05e4578  ld 30, 224(1)
  05e457c  ld 31, 232(1)
  05e4580  addi 1, 1, 240
  05e4584  blr
  05e4588  lwz 9, 124(1)
  05e458c  cmpwi 7, 9, 8
  05e4590  bt- 30, 0x5e45c4
  05e4594  cmpwi 7, 11, 8
  05e4598  bt- 30, 0x5e45c4
  05e459c  cmpw 7, 9, 11
  05e45a0  bt 30, 0x5e44b0
  05e45a4  clrldi 9, 9, 32
  05e45a8  clrldi 11, 11, 32
  05e45ac  lwz 3, 4(9)
  05e45b0  lwz 4, 4(11)
  05e45b4  bl 0x5cc784
  05e45b8  nop
  05e45bc  cmpwi 7, 3, 0
  05e45c0  bt+ 30, 0x5e44b0
  05e45c4  li 0, 2
  05e45c8  li 3, 1
  05e45cc  stw 0, 4(27)
  05e45d0  b 0x5e4540
  05e45d4  clrlwi 0, 10, 31
  05e45d8  cmpwi 7, 0, 0
  05e45dc  bt- 30, 0x5e453c
  05e45e0  lwz 0, 8(19)
  05e45e4  rlwinm 0, 0, 0, 30, 30
  05e45e8  cmpwi 7, 0, 0
  05e45ec  bf+ 30, 0x5e43a0
  05e45f0  b 0x5e453c
  05e45f4  lwz 24, 8(19)
  05e45f8  b 0x5e4394
  05e45fc  li 0, 2
  05e4600  li 9, 0
  05e4604  li 3, 1
  05e4608  stw 0, 4(27)
  05e460c  stw 9, 0(27)
  05e4610  b 0x5e4540

_ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE:   # 0x5e4614, 0x9c bytes
  05e4614  stdu 1, -160(1)
  05e4618  mflr 0
  05e461c  std 27, 120(1)
  05e4620  std 28, 128(1)
  05e4624  std 29, 136(1)
  05e4628  std 31, 152(1)
  05e462c  mr 29, 4
  05e4630  mr 28, 5
  05e4634  mr 27, 6
  05e4638  std 0, 176(1)
  05e463c  mr 31, 3
  05e4640  bl 0x5e42a4
  05e4644  clrlwi 3, 3, 24
  05e4648  mr 4, 29
  05e464c  cmpwi 7, 3, 0
  05e4650  mr 5, 28
  05e4654  mr 6, 27
  05e4658  li 3, 1
  05e465c  bf 30, 0x5e468c
  05e4660  lwz 11, 8(31)
  05e4664  mr 3, 11
  05e4668  lwz 9, 0(11)
  05e466c  lwz 10, 24(9)
  05e4670  lwz 0, 0(10)
  05e4674  std 2, 40(1)
  05e4678  mtctr 0
  05e467c  lwz 2, 4(10)
  05e4680  bctrl
  05e4684  ld 2, 40(1)
  05e4688  clrlwi 3, 3, 24
  05e468c  ld 0, 176(1)
  05e4690  extsw 3, 3
  05e4694  ld 27, 120(1)
  05e4698  ld 28, 128(1)
  05e469c  mtlr 0
  05e46a0  ld 29, 136(1)
  05e46a4  ld 31, 152(1)
  05e46a8  addi 1, 1, 160
  05e46ac  blr

_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE:   # 0x5e46b0, 0x628 bytes
  05e46b0  stdu 1, -320(1)
  05e46b4  mflr 0
  05e46b8  std 14, 176(1)
  05e46bc  std 0, 336(1)
  05e46c0  lwz 0, 16(10)
  05e46c4  mr 14, 8
  05e46c8  std 16, 192(1)
  05e46cc  rlwinm 0, 0, 0, 27, 27
  05e46d0  std 17, 200(1)
  05e46d4  cmpwi 7, 0, 0
  05e46d8  std 18, 208(1)
  05e46dc  std 19, 216(1)
  05e46e0  std 20, 224(1)
  05e46e4  std 21, 232(1)
  05e46e8  std 28, 288(1)
  05e46ec  std 31, 312(1)
  05e46f0  std 15, 184(1)
  05e46f4  std 22, 240(1)
  05e46f8  std 23, 248(1)
  05e46fc  std 24, 256(1)
  05e4700  std 25, 264(1)
  05e4704  std 26, 272(1)
  05e4708  std 27, 280(1)
  05e470c  std 29, 296(1)
  05e4710  std 30, 304(1)
  05e4714  mr 28, 10
  05e4718  std 3, 144(1)
  05e471c  mr 31, 5
  05e4720  std 6, 152(1)
  05e4724  std 7, 160(1)
  05e4728  mr 21, 4
  05e472c  mr 17, 9
  05e4730  mr 19, 3
  05e4734  mr 20, 5
  05e4738  mr 16, 6
  05e473c  mr 18, 7
  05e4740  bt 30, 0x5e474c
  05e4744  lwz 8, 8(3)
  05e4748  stw 8, 16(10)
  05e474c  cmpw 7, 18, 17
  05e4750  bt 30, 0x5e4bd0
  05e4754  cmpw 7, 19, 16
  05e4758  bt 30, 0x5e49c4
  05e475c  lwz 3, 4(19)
  05e4760  lwz 4, 4(16)
  05e4764  bl 0x5cc784
  05e4768  nop
  05e476c  cmpwi 7, 3, 0
  05e4770  bt 30, 0x5e49c4
  05e4774  ld 5, 144(1)
  05e4778  li 15, 0
  05e477c  lwz 26, 12(5)
  05e4780  b 0x5e4884
  05e4784  lwz 5, 0(28)
  05e4788  cmpwi 7, 5, 0
  05e478c  bt 30, 0x5e4b0c
  05e4790  lwz 0, 112(1)
  05e4794  cmpw 7, 5, 0
  05e4798  bt 30, 0x5e4af8
  05e479c  srawi 7, 0, 31
  05e47a0  xor 0, 7, 0
  05e47a4  sub 0, 7, 0
  05e47a8  srawi 7, 5, 31
  05e47ac  srwi 0, 0, 31
  05e47b0  xor 9, 7, 5
  05e47b4  sub 9, 7, 9
  05e47b8  srwi 9, 9, 31
  05e47bc  and 7, 9, 0
  05e47c0  cmpwi 7, 0
  05e47c4  bf 2, 0x5e47e0
  05e47c8  and 7, 9, 8
  05e47cc  cmpwi 7, 0
  05e47d0  bf 2, 0x5e47e0
  05e47d4  and 8, 10, 0
  05e47d8  cmpwi 8, 0
  05e47dc  bt 2, 0x5e487c
  05e47e0  cmpwi 7, 11, 3
  05e47e4  lwz 27, 12(28)
  05e47e8  bf 29, 0x5e4a5c
  05e47ec  clrlwi 0, 11, 31
  05e47f0  cmpwi 7, 0, 0
  05e47f4  bt 30, 0x5e4808
  05e47f8  lwz 0, 16(28)
  05e47fc  rlwinm 0, 0, 0, 30, 30
  05e4800  cmpwi 7, 0, 0
  05e4804  bf 30, 0x5e4a5c
  05e4808  cmpwi 7, 27, 0
  05e480c  bf 30, 0x5e4814
  05e4810  li 27, 1
  05e4814  cmpwi 7, 29, 0
  05e4818  mr 30, 29
  05e481c  mr 31, 27
  05e4820  bf 30, 0x5e482c
  05e4824  li 29, 1
  05e4828  li 30, 1
  05e482c  xor 0, 30, 31
  05e4830  cmpwi 7, 0, 3
  05e4834  bf 29, 0x5e4ac0
  05e4838  cmpwi 7, 30, 3
  05e483c  bf 29, 0x5e485c
  05e4840  lwz 0, 112(1)
  05e4844  mr 27, 29
  05e4848  lwz 9, 116(1)
  05e484c  mr 31, 30
  05e4850  li 15, 0
  05e4854  stw 0, 0(28)
  05e4858  stw 9, 4(28)
  05e485c  rlwinm 0, 31, 0, 30, 30
  05e4860  stw 27, 12(28)
  05e4864  cmpwi 7, 0, 0
  05e4868  bf- 30, 0x5e4bb8
  05e486c  clrlwi 0, 31, 31
  05e4870  cmpwi 7, 0, 0
  05e4874  bt- 30, 0x5e4bb8
  05e4878  lwz 11, 8(28)
  05e487c  cmpwi 7, 11, 4
  05e4880  bt- 30, 0x5e4bfc
  05e4884  cmpwi 7, 26, 0
  05e4888  addi 26, 26, -1
  05e488c  bt- 30, 0x5e4bfc
  05e4890  slwi 7, 26, 3
  05e4894  lwz 8, 16(28)
  05e4898  clrldi 6, 19, 32
  05e489c  addi 9, 7, 16
  05e48a0  li 0, 0
  05e48a4  extsw 9, 9
  05e48a8  stw 0, 124(1)
  05e48ac  add 9, 6, 9
  05e48b0  stw 0, 112(1)
  05e48b4  stw 0, 116(1)
  05e48b8  stw 0, 120(1)
  05e48bc  stw 8, 128(1)
  05e48c0  lwz 11, 4(9)
  05e48c4  mr 5, 20
  05e48c8  clrlwi 0, 11, 31
  05e48cc  srawi 10, 11, 8
  05e48d0  cmpwi 7, 0, 0
  05e48d4  bt 30, 0x5e48f0
  05e48d8  ld 5, 160(1)
  05e48dc  lwz 9, 0(5)
  05e48e0  ori 5, 20, 1
  05e48e4  add 9, 10, 9
  05e48e8  clrldi 9, 9, 32
  05e48ec  lwz 10, 0(9)
  05e48f0  rlwinm 0, 11, 0, 30, 30
  05e48f4  cmpwi 7, 0, 0
  05e48f8  bf 30, 0x5e490c
  05e48fc  cmpwi 7, 21, -2
  05e4900  bt 30, 0x5e4ae8
  05e4904  rlwinm 5, 5, 30, 1, 31
  05e4908  rotlwi 5, 5, 2
  05e490c  addi 9, 7, 16
  05e4910  extsw 24, 21
  05e4914  extsw 9, 9
  05e4918  add 7, 18, 10
  05e491c  clrldi 25, 16, 32
  05e4920  clrldi 23, 14, 32
  05e4924  clrldi 22, 17, 32
  05e4928  lwzx 11, 6, 9
  05e492c  mr 8, 23
  05e4930  clrldi 5, 5, 32
  05e4934  mr 3, 11
  05e4938  clrldi 7, 7, 32
  05e493c  mr 4, 24
  05e4940  lwz 29, 0(11)
  05e4944  mr 6, 25
  05e4948  mr 9, 22
  05e494c  addi 10, 1, 112
  05e4950  lwz 11, 28(29)
  05e4954  lwz 0, 0(11)
  05e4958  std 2, 40(1)
  05e495c  mtctr 0
  05e4960  lwz 2, 4(11)
  05e4964  bctrl
  05e4968  ld 2, 40(1)
  05e496c  lwz 29, 124(1)
  05e4970  mr 8, 3
  05e4974  lwz 11, 8(28)
  05e4978  cmpwi 7, 29, 6
  05e497c  lwz 0, 120(1)
  05e4980  or 11, 11, 0
  05e4984  stw 11, 8(28)
  05e4988  bt- 30, 0x5e4c04
  05e498c  cmpwi 7, 29, 2
  05e4990  bt- 30, 0x5e4c04
  05e4994  clrlwi 10, 15, 24
  05e4998  cmpwi 7, 10, 0
  05e499c  bt 30, 0x5e4784
  05e49a0  lwz 5, 0(28)
  05e49a4  cmpwi 7, 5, 0
  05e49a8  bf 30, 0x5e4790
  05e49ac  lwz 0, 112(1)
  05e49b0  srawi 7, 0, 31
  05e49b4  xor 9, 7, 0
  05e49b8  sub 9, 7, 9
  05e49bc  srwi 0, 9, 31
  05e49c0  b 0x5e47d4
  05e49c4  cmpwi 7, 21, 0
  05e49c8  stw 20, 4(28)
  05e49cc  stw 18, 0(28)
  05e49d0  bt 28, 0x5e4bb0
  05e49d4  add 0, 18, 21
  05e49d8  li 3, 0
  05e49dc  xor 0, 0, 17
  05e49e0  srawi 5, 0, 31
  05e49e4  xor 9, 5, 0
  05e49e8  sub 9, 5, 9
  05e49ec  srawi 9, 9, 31
  05e49f0  rlwinm 9, 9, 29, 1, 31
  05e49f4  rotlwi 9, 9, 3
  05e49f8  addi 9, 9, 6
  05e49fc  stw 9, 12(28)
  05e4a00  ld 0, 336(1)
  05e4a04  extsw 3, 3
  05e4a08  ld 14, 176(1)
  05e4a0c  ld 15, 184(1)
  05e4a10  mtlr 0
  05e4a14  ld 16, 192(1)
  05e4a18  ld 17, 200(1)
  05e4a1c  ld 18, 208(1)
  05e4a20  ld 19, 216(1)
  05e4a24  ld 20, 224(1)
  05e4a28  ld 21, 232(1)
  05e4a2c  ld 22, 240(1)
  05e4a30  ld 23, 248(1)
  05e4a34  ld 24, 256(1)
  05e4a38  ld 25, 264(1)
  05e4a3c  ld 26, 272(1)
  05e4a40  ld 27, 280(1)
  05e4a44  ld 28, 288(1)
  05e4a48  ld 29, 296(1)
  05e4a4c  ld 30, 304(1)
  05e4a50  ld 31, 312(1)
  05e4a54  addi 1, 1, 320
  05e4a58  blr
  05e4a5c  cmpwi 7, 27, 0
  05e4a60  mr 31, 27
  05e4a64  mr 30, 29
  05e4a68  bf 29, 0x5e4b34
  05e4a6c  cmpwi 7, 29, 0
  05e4a70  bt 29, 0x5e482c
  05e4a74  cmpwi 7, 31, 3
  05e4a78  bf 29, 0x5e4a9c
  05e4a7c  clrlwi 0, 31, 31
  05e4a80  cmpwi 7, 0, 0
  05e4a84  bt 30, 0x5e4824
  05e4a88  ld 5, 144(1)
  05e4a8c  lwz 0, 8(5)
  05e4a90  rlwinm 0, 0, 0, 30, 30
  05e4a94  cmpwi 7, 0, 0
  05e4a98  bt 30, 0x5e4824
  05e4a9c  cmpwi 7, 21, 0
  05e4aa0  lwz 0, 112(1)
  05e4aa4  bt 28, 0x5e4c6c
  05e4aa8  add 0, 0, 21
  05e4aac  li 29, 6
  05e4ab0  cmpw 7, 0, 17
  05e4ab4  li 30, 6
  05e4ab8  bf 30, 0x5e4824
  05e4abc  b 0x5e482c
  05e4ac0  and 0, 30, 31
  05e4ac4  cmpwi 7, 0, 3
  05e4ac8  bt- 29, 0x5e4cc0
  05e4acc  li 0, 0
  05e4ad0  lwz 11, 8(28)
  05e4ad4  li 9, 1
  05e4ad8  li 15, 1
  05e4adc  stw 0, 0(28)
  05e4ae0  stw 9, 12(28)
  05e4ae4  b 0x5e487c
  05e4ae8  clrlwi 0, 8, 30
  05e4aec  cmpwi 7, 0, 0
  05e4af0  bt 30, 0x5e4884
  05e4af4  b 0x5e4904
  05e4af8  lwz 0, 4(28)
  05e4afc  lwz 9, 116(1)
  05e4b00  or 0, 0, 9
  05e4b04  stw 0, 4(28)
  05e4b08  b 0x5e487c
  05e4b0c  lwz 0, 112(1)
  05e4b10  lwz 9, 116(1)
  05e4b14  cmpwi 7, 0, 0
  05e4b18  stw 9, 4(28)
  05e4b1c  stw 0, 0(28)
  05e4b20  bt 30, 0x5e4ba8
  05e4b24  cmpwi 7, 11, 0
  05e4b28  bf 30, 0x5e4b94
  05e4b2c  mr 15, 3
  05e4b30  b 0x5e4884
  05e4b34  cmpwi 7, 29, 3
  05e4b38  mr 30, 29
  05e4b3c  bf 29, 0x5e4b6c
  05e4b40  clrlwi 0, 29, 31
  05e4b44  cmpwi 7, 0, 0
  05e4b48  bt 30, 0x5e4b60
  05e4b4c  ld 9, 144(1)
  05e4b50  lwz 0, 8(9)
  05e4b54  rlwinm 0, 0, 0, 30, 30
  05e4b58  cmpwi 7, 0, 0
  05e4b5c  bf 30, 0x5e4b6c
  05e4b60  li 27, 1
  05e4b64  li 31, 1
  05e4b68  b 0x5e482c
  05e4b6c  cmpwi 7, 21, 0
  05e4b70  bt 28, 0x5e4c20
  05e4b74  add 0, 5, 21
  05e4b78  li 27, 6
  05e4b7c  cmpw 7, 0, 17
  05e4b80  li 31, 6
  05e4b84  bt 30, 0x5e4a6c
  05e4b88  li 27, 1
  05e4b8c  li 31, 1
  05e4b90  b 0x5e4a6c
  05e4b94  ld 5, 144(1)
  05e4b98  lwz 0, 8(5)
  05e4b9c  clrlwi 0, 0, 31
  05e4ba0  cmpwi 7, 0, 0
  05e4ba4  bt- 30, 0x5e4cb8
  05e4ba8  mr 15, 8
  05e4bac  b 0x5e487c
  05e4bb0  cmpwi 7, 21, -2
  05e4bb4  bt 30, 0x5e4bc0
  05e4bb8  li 3, 0
  05e4bbc  b 0x5e4a00
  05e4bc0  li 0, 1
  05e4bc4  li 3, 0
  05e4bc8  stw 0, 12(28)
  05e4bcc  b 0x5e4a00
  05e4bd0  cmpw 7, 19, 14
  05e4bd4  bt 30, 0x5e4bf0
  05e4bd8  lwz 3, 4(19)
  05e4bdc  lwz 4, 4(14)
  05e4be0  bl 0x5cc784
  05e4be4  nop
  05e4be8  cmpwi 7, 3, 0
  05e4bec  bf 30, 0x5e4754
  05e4bf0  li 3, 0
  05e4bf4  stw 31, 8(28)
  05e4bf8  b 0x5e4a00
  05e4bfc  clrlwi 3, 15, 24
  05e4c00  b 0x5e4a00
  05e4c04  lwz 0, 112(1)
  05e4c08  clrlwi 3, 8, 24
  05e4c0c  lwz 9, 116(1)
  05e4c10  stw 29, 12(28)
  05e4c14  stw 0, 0(28)
  05e4c18  stw 9, 4(28)
  05e4c1c  b 0x5e4a00
  05e4c20  cmpwi 7, 21, -2
  05e4c24  bt 30, 0x5e4b88
  05e4c28  ld 7, 152(1)
  05e4c2c  clrldi 5, 5, 32
  05e4c30  mr 3, 25
  05e4c34  mr 4, 24
  05e4c38  mr 6, 23
  05e4c3c  lwz 11, 0(7)
  05e4c40  mr 7, 22
  05e4c44  lwz 9, 32(11)
  05e4c48  lwz 8, 0(9)
  05e4c4c  std 2, 40(1)
  05e4c50  mtctr 8
  05e4c54  lwz 2, 4(9)
  05e4c58  bctrl
  05e4c5c  ld 2, 40(1)
  05e4c60  mr 31, 3
  05e4c64  mr 27, 3
  05e4c68  b 0x5e4a6c
  05e4c6c  cmpwi 7, 21, -2
  05e4c70  bt 30, 0x5e4824
  05e4c74  ld 7, 152(1)
  05e4c78  mr 3, 25
  05e4c7c  mr 4, 24
  05e4c80  clrldi 5, 0, 32
  05e4c84  mr 6, 23
  05e4c88  lwz 11, 0(7)
  05e4c8c  mr 7, 22
  05e4c90  lwz 9, 32(11)
  05e4c94  lwz 8, 0(9)
  05e4c98  std 2, 40(1)
  05e4c9c  mtctr 8
  05e4ca0  lwz 2, 4(9)
  05e4ca4  bctrl
  05e4ca8  ld 2, 40(1)
  05e4cac  mr 30, 3
  05e4cb0  mr 29, 3
  05e4cb4  b 0x5e482c
  05e4cb8  clrlwi 3, 3, 24
  05e4cbc  b 0x5e4a00
  05e4cc0  li 0, 2
  05e4cc4  li 9, 0
  05e4cc8  li 3, 1
  05e4ccc  stw 0, 12(28)
  05e4cd0  stw 9, 0(28)
  05e4cd4  b 0x5e4a00

_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE:   # 0x5e4cd8, 0x1b0 bytes
  05e4cd8  cmpw 7, 3, 6
  05e4cdc  mflr 0
  05e4ce0  stdu 1, -224(1)
  05e4ce4  std 19, 120(1)
  05e4ce8  std 20, 128(1)
  05e4cec  std 21, 136(1)
  05e4cf0  std 22, 144(1)
  05e4cf4  std 23, 152(1)
  05e4cf8  std 25, 168(1)
  05e4cfc  std 26, 176(1)
  05e4d00  std 27, 184(1)
  05e4d04  std 28, 192(1)
  05e4d08  std 29, 200(1)
  05e4d0c  std 30, 208(1)
  05e4d10  std 31, 216(1)
  05e4d14  std 24, 160(1)
  05e4d18  std 0, 240(1)
  05e4d1c  mr 21, 3
  05e4d20  mr 30, 6
  05e4d24  mr 29, 3
  05e4d28  mr 25, 5
  05e4d2c  mr 27, 7
  05e4d30  mr 31, 10
  05e4d34  mr 28, 4
  05e4d38  mr 22, 8
  05e4d3c  mr 23, 9
  05e4d40  mr 20, 5
  05e4d44  mr 26, 7
  05e4d48  mr 19, 10
  05e4d4c  bt 30, 0x5e4d6c
  05e4d50  lwz 24, 4(3)
  05e4d54  lwz 4, 4(6)
  05e4d58  mr 3, 24
  05e4d5c  bl 0x5cc784
  05e4d60  nop
  05e4d64  cmpwi 7, 3, 0
  05e4d68  bf 30, 0x5e4df0
  05e4d6c  cmpwi 7, 28, 0
  05e4d70  stw 27, 0(31)
  05e4d74  stw 25, 4(31)
  05e4d78  bt 28, 0x5e4e44
  05e4d7c  add 0, 26, 28
  05e4d80  li 3, 0
  05e4d84  xor 0, 0, 23
  05e4d88  srawi 11, 0, 31
  05e4d8c  xor 9, 11, 0
  05e4d90  sub 9, 11, 9
  05e4d94  srawi 9, 9, 31
  05e4d98  rlwinm 9, 9, 29, 1, 31
  05e4d9c  rotlwi 9, 9, 3
  05e4da0  addi 9, 9, 6
  05e4da4  stw 9, 12(31)
  05e4da8  ld 0, 240(1)
  05e4dac  extsw 3, 3
  05e4db0  ld 19, 120(1)
  05e4db4  ld 20, 128(1)
  05e4db8  mtlr 0
  05e4dbc  ld 21, 136(1)
  05e4dc0  ld 22, 144(1)
  05e4dc4  ld 23, 152(1)
  05e4dc8  ld 24, 160(1)
  05e4dcc  ld 25, 168(1)
  05e4dd0  ld 26, 176(1)
  05e4dd4  ld 27, 184(1)
  05e4dd8  ld 28, 192(1)
  05e4ddc  ld 29, 200(1)
  05e4de0  ld 30, 208(1)
  05e4de4  ld 31, 216(1)
  05e4de8  addi 1, 1, 224
  05e4dec  blr
  05e4df0  cmpw 7, 27, 23
  05e4df4  bt 30, 0x5e4e5c
  05e4df8  lwz 9, 8(21)
  05e4dfc  extsw 4, 28
  05e4e00  clrldi 5, 20, 32
  05e4e04  mr 3, 9
  05e4e08  clrldi 6, 30, 32
  05e4e0c  clrldi 7, 26, 32
  05e4e10  lwz 29, 0(9)
  05e4e14  clrldi 8, 22, 32
  05e4e18  clrldi 9, 23, 32
  05e4e1c  clrldi 10, 19, 32
  05e4e20  lwz 11, 28(29)
  05e4e24  lwz 0, 0(11)
  05e4e28  std 2, 40(1)
  05e4e2c  mtctr 0
  05e4e30  lwz 2, 4(11)
  05e4e34  bctrl
  05e4e38  ld 2, 40(1)
  05e4e3c  clrlwi 3, 3, 24
  05e4e40  b 0x5e4da8
  05e4e44  cmpwi 7, 28, -2
  05e4e48  li 3, 0
  05e4e4c  bf 30, 0x5e4da8
  05e4e50  li 0, 1
  05e4e54  stw 0, 12(31)
  05e4e58  b 0x5e4da8
  05e4e5c  cmpw 7, 29, 22
  05e4e60  bt 30, 0x5e4e7c
  05e4e64  mr 3, 24
  05e4e68  lwz 4, 4(22)
  05e4e6c  bl 0x5cc784
  05e4e70  nop
  05e4e74  cmpwi 7, 3, 0
  05e4e78  bf 30, 0x5e4df8
  05e4e7c  li 3, 0
  05e4e80  stw 20, 8(31)
  05e4e84  b 0x5e4da8

_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE:   # 0x5e4e88, 0xf0 bytes
  05e4e88  cmpw 7, 7, 9
  05e4e8c  mflr 0
  05e4e90  stdu 1, -160(1)
  05e4e94  std 26, 112(1)
  05e4e98  std 27, 120(1)
  05e4e9c  std 28, 128(1)
  05e4ea0  std 29, 136(1)
  05e4ea4  std 30, 144(1)
  05e4ea8  std 31, 152(1)
  05e4eac  std 0, 176(1)
  05e4eb0  mr 27, 7
  05e4eb4  mr 28, 5
  05e4eb8  mr 30, 10
  05e4ebc  mr 31, 3
  05e4ec0  mr 29, 6
  05e4ec4  mr 26, 5
  05e4ec8  cmpw 6, 3, 8
  05e4ecc  bt 30, 0x5e4f2c
  05e4ed0  cmpw 7, 31, 29
  05e4ed4  bt 30, 0x5e4ef0
  05e4ed8  lwz 3, 4(31)
  05e4edc  lwz 4, 4(29)
  05e4ee0  bl 0x5cc784
  05e4ee4  nop
  05e4ee8  cmpwi 7, 3, 0
  05e4eec  bf 30, 0x5e4f00
  05e4ef0  li 0, 1
  05e4ef4  stw 27, 0(30)
  05e4ef8  stw 0, 12(30)
  05e4efc  stw 26, 4(30)
  05e4f00  ld 0, 176(1)
  05e4f04  li 3, 0
  05e4f08  ld 26, 112(1)
  05e4f0c  ld 27, 120(1)
  05e4f10  mtlr 0
  05e4f14  ld 28, 128(1)
  05e4f18  ld 29, 136(1)
  05e4f1c  ld 30, 144(1)
  05e4f20  ld 31, 152(1)
  05e4f24  addi 1, 1, 160
  05e4f28  blr
  05e4f2c  bt 26, 0x5e4f48
  05e4f30  lwz 4, 4(8)
  05e4f34  lwz 3, 4(3)
  05e4f38  bl 0x5cc784
  05e4f3c  nop
  05e4f40  cmpwi 7, 3, 0
  05e4f44  bf 30, 0x5e4ed0
  05e4f48  ld 0, 176(1)
  05e4f4c  li 3, 0
  05e4f50  stw 28, 8(30)
  05e4f54  ld 26, 112(1)
  05e4f58  mtlr 0
  05e4f5c  ld 27, 120(1)
  05e4f60  ld 28, 128(1)
  05e4f64  ld 29, 136(1)
  05e4f68  ld 30, 144(1)
  05e4f6c  ld 31, 152(1)
  05e4f70  addi 1, 1, 160
  05e4f74  blr

_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_:   # 0x5e4f78, 0x1ec bytes
  05e4f78  mfcr 12
  05e4f7c  cmpw 7, 5, 7
  05e4f80  stdu 1, -176(1)
  05e4f84  std 24, 112(1)
  05e4f88  std 25, 120(1)
  05e4f8c  std 26, 128(1)
  05e4f90  std 27, 136(1)
  05e4f94  std 28, 144(1)
  05e4f98  std 30, 160(1)
  05e4f9c  std 31, 168(1)
  05e4fa0  std 29, 152(1)
  05e4fa4  mr 24, 5
  05e4fa8  mr 26, 7
  05e4fac  mr 25, 5
  05e4fb0  mr 30, 3
  05e4fb4  mr 27, 4
  05e4fb8  mr 28, 6
  05e4fbc  mr 31, 3
  05e4fc0  stw 12, 184(1)
  05e4fc4  mflr 0
  05e4fc8  std 0, 192(1)
  05e4fcc  bf 30, 0x5e4ff0
  05e4fd0  cmpw 7, 3, 6
  05e4fd4  bt 30, 0x5e5120
  05e4fd8  lwz 3, 4(3)
  05e4fdc  lwz 4, 4(6)
  05e4fe0  bl 0x5cc784
  05e4fe4  nop
  05e4fe8  cmpwi 7, 3, 0
  05e4fec  bt 30, 0x5e5120
  05e4ff0  lwz 30, 12(30)
  05e4ff4  clrldi 29, 31, 32
  05e4ff8  cmpwi 3, 27, -3
  05e4ffc  slwi 9, 30, 3
  05e5000  addi 31, 9, 16
  05e5004  cmpwi 7, 30, 0
  05e5008  addi 31, 31, -8
  05e500c  addi 30, 30, -1
  05e5010  extsw 10, 31
  05e5014  bt 30, 0x5e50dc
  05e5018  add 9, 29, 10
  05e501c  lwz 11, 4(9)
  05e5020  rlwinm 0, 11, 0, 30, 30
  05e5024  clrlwi 9, 11, 31
  05e5028  cmpwi 7, 0, 0
  05e502c  cmpwi 4, 9, 0
  05e5030  srawi 0, 11, 8
  05e5034  bt 30, 0x5e5004
  05e5038  extsw 4, 27
  05e503c  clrldi 6, 28, 32
  05e5040  clrldi 7, 26, 32
  05e5044  bt 18, 0x5e505c
  05e5048  bt 14, 0x5e5004
  05e504c  lwz 9, 0(24)
  05e5050  add 9, 0, 9
  05e5054  clrldi 9, 9, 32
  05e5058  lwz 0, 0(9)
  05e505c  lwzx 11, 29, 10
  05e5060  add 5, 25, 0
  05e5064  mr 3, 11
  05e5068  clrldi 5, 5, 32
  05e506c  lwz 9, 0(11)
  05e5070  lwz 10, 32(9)
  05e5074  lwz 0, 0(10)
  05e5078  std 2, 40(1)
  05e507c  mtctr 0
  05e5080  lwz 2, 4(10)
  05e5084  bctrl
  05e5088  ld 2, 40(1)
  05e508c  cmpwi 7, 3, 3
  05e5090  bf 29, 0x5e5004
  05e5094  bt 18, 0x5e50e0
  05e5098  lwz 12, 184(1)
  05e509c  ori 3, 3, 1
  05e50a0  ld 0, 192(1)
  05e50a4  clrldi 3, 3, 32
  05e50a8  ld 24, 112(1)
  05e50ac  ld 25, 120(1)
  05e50b0  mtlr 0
  05e50b4  ld 26, 128(1)
  05e50b8  mtocrf 16, 12
  05e50bc  ld 27, 136(1)
  05e50c0  mtocrf 8, 12
  05e50c4  ld 28, 144(1)
  05e50c8  ld 29, 152(1)
  05e50cc  ld 30, 160(1)
  05e50d0  ld 31, 168(1)
  05e50d4  addi 1, 1, 176
  05e50d8  blr
  05e50dc  li 3, 1
  05e50e0  lwz 12, 184(1)
  05e50e4  clrldi 3, 3, 32
  05e50e8  ld 0, 192(1)
  05e50ec  ld 24, 112(1)
  05e50f0  mtocrf 16, 12
  05e50f4  ld 25, 120(1)
  05e50f8  mtlr 0
  05e50fc  ld 26, 128(1)
  05e5100  mtocrf 8, 12
  05e5104  ld 27, 136(1)
  05e5108  ld 28, 144(1)
  05e510c  ld 29, 152(1)
  05e5110  ld 30, 160(1)
  05e5114  ld 31, 168(1)
  05e5118  addi 1, 1, 176
  05e511c  blr
  05e5120  lwz 12, 184(1)
  05e5124  li 3, 6
  05e5128  ld 0, 192(1)
  05e512c  clrldi 3, 3, 32
  05e5130  ld 24, 112(1)
  05e5134  ld 25, 120(1)
  05e5138  mtlr 0
  05e513c  ld 26, 128(1)
  05e5140  mtocrf 16, 12
  05e5144  ld 27, 136(1)
  05e5148  mtocrf 8, 12
  05e514c  ld 28, 144(1)
  05e5150  ld 29, 152(1)
  05e5154  ld 30, 160(1)
  05e5158  ld 31, 168(1)
  05e515c  addi 1, 1, 176
  05e5160  blr

_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_:   # 0x5e5164, 0xe8 bytes
  05e5164  cmpw 7, 7, 5
  05e5168  mflr 0
  05e516c  stdu 1, -160(1)
  05e5170  std 27, 120(1)
  05e5174  std 28, 128(1)
  05e5178  std 29, 136(1)
  05e517c  std 30, 144(1)
  05e5180  std 31, 152(1)
  05e5184  std 0, 176(1)
  05e5188  mr 29, 5
  05e518c  mr 27, 7
  05e5190  mr 30, 3
  05e5194  mr 31, 6
  05e5198  mr 28, 4
  05e519c  bf 30, 0x5e51c0
  05e51a0  cmpw 7, 3, 6
  05e51a4  bt 30, 0x5e5220
  05e51a8  lwz 3, 4(3)
  05e51ac  lwz 4, 4(6)
  05e51b0  bl 0x5cc784
  05e51b4  nop
  05e51b8  cmpwi 7, 3, 0
  05e51bc  bt 30, 0x5e5220
  05e51c0  lwz 11, 8(30)
  05e51c4  extsw 4, 28
  05e51c8  clrldi 5, 29, 32
  05e51cc  mr 3, 11
  05e51d0  clrldi 6, 31, 32
  05e51d4  clrldi 7, 27, 32
  05e51d8  lwz 9, 0(11)
  05e51dc  lwz 11, 32(9)
  05e51e0  lwz 0, 0(11)
  05e51e4  std 2, 40(1)
  05e51e8  mtctr 0
  05e51ec  lwz 2, 4(11)
  05e51f0  bctrl
  05e51f4  ld 2, 40(1)
  05e51f8  ld 0, 176(1)
  05e51fc  clrldi 3, 3, 32
  05e5200  ld 27, 120(1)
  05e5204  mtlr 0
  05e5208  ld 28, 128(1)
  05e520c  ld 29, 136(1)
  05e5210  ld 30, 144(1)
  05e5214  ld 31, 152(1)
  05e5218  addi 1, 1, 160
  05e521c  blr
  05e5220  ld 0, 176(1)
  05e5224  li 3, 6
  05e5228  ld 27, 120(1)
  05e522c  clrldi 3, 3, 32
  05e5230  ld 28, 128(1)
  05e5234  ld 29, 136(1)
  05e5238  mtlr 0
  05e523c  ld 30, 144(1)
  05e5240  ld 31, 152(1)
  05e5244  addi 1, 1, 160
  05e5248  blr

_Z12read_uleb128PKhPy:   # 0x5e524c, 0x38 bytes
  05e524c  li 11, 0
  05e5250  li 10, 0
  05e5254  lbz 0, 0(3)
  05e5258  addi 3, 3, 1
  05e525c  extsb 9, 0
  05e5260  clrldi 0, 0, 57
  05e5264  cmpwi 7, 9, 0
  05e5268  sld 0, 0, 11
  05e526c  addi 11, 11, 7
  05e5270  or 10, 10, 0
  05e5274  bt 28, 0x5e5254
  05e5278  clrldi 3, 3, 32
  05e527c  std 10, 0(4)
  05e5280  blr

FUN_005e5284:   # 0x5e5284, 0x58 bytes
  05e5284  li 10, 0
  05e5288  li 8, 0
  05e528c  lbz 11, 0(3)
  05e5290  addi 3, 3, 1
  05e5294  extsb 0, 11
  05e5298  clrldi 9, 11, 57
  05e529c  cmpwi 7, 0, 0
  05e52a0  sld 9, 9, 10
  05e52a4  addi 10, 10, 7
  05e52a8  or 8, 8, 9
  05e52ac  bt 28, 0x5e528c
  05e52b0  cmplwi 7, 10, 63
  05e52b4  bt 29, 0x5e52d0
  05e52b8  rlwinm 0, 11, 0, 25, 25
  05e52bc  cmpwi 7, 0, 0
  05e52c0  bt 30, 0x5e52d0
  05e52c4  li 0, -1
  05e52c8  sld 0, 0, 10
  05e52cc  or 8, 8, 0
  05e52d0  clrldi 3, 3, 32
  05e52d4  std 8, 0(4)
  05e52d8  blr

_Z16get_adjusted_ptrPKSt9type_infoS1_PPv:   # 0x5e52dc, 0xdc bytes
  05e52dc  stdu 1, -160(1)
  05e52e0  mflr 0
  05e52e4  std 28, 128(1)
  05e52e8  std 0, 176(1)
  05e52ec  std 29, 136(1)
  05e52f0  std 30, 144(1)
  05e52f4  std 31, 152(1)
  05e52f8  lwz 9, 0(4)
  05e52fc  mr 30, 3
  05e5300  lwz 0, 0(5)
  05e5304  mr 3, 4
  05e5308  mr 29, 4
  05e530c  stw 0, 112(1)
  05e5310  mr 28, 5
  05e5314  lwz 11, 8(9)
  05e5318  lwz 0, 0(11)
  05e531c  std 2, 40(1)
  05e5320  mtctr 0
  05e5324  lwz 2, 4(11)
  05e5328  bctrl
  05e532c  ld 2, 40(1)
  05e5330  mr 4, 29
  05e5334  clrlwi 0, 3, 24
  05e5338  addi 5, 1, 112
  05e533c  cmpwi 7, 0, 0
  05e5340  li 6, 1
  05e5344  clrldi 3, 30, 32
  05e5348  bt 30, 0x5e5358
  05e534c  lwz 9, 112(1)
  05e5350  lwz 0, 0(9)
  05e5354  stw 0, 112(1)
  05e5358  lwz 9, 0(30)
  05e535c  lwz 11, 16(9)
  05e5360  lwz 0, 0(11)
  05e5364  std 2, 40(1)
  05e5368  mtctr 0
  05e536c  lwz 2, 4(11)
  05e5370  bctrl
  05e5374  ld 2, 40(1)
  05e5378  li 9, 0
  05e537c  clrlwi 3, 3, 24
  05e5380  cmpwi 7, 3, 0
  05e5384  bt 30, 0x5e5394
  05e5388  lwz 0, 112(1)
  05e538c  li 9, 1
  05e5390  stw 0, 0(28)
  05e5394  ld 0, 176(1)
  05e5398  extsw 3, 9
  05e539c  ld 28, 128(1)
  05e53a0  ld 29, 136(1)
  05e53a4  mtlr 0
  05e53a8  ld 30, 144(1)
  05e53ac  ld 31, 152(1)
  05e53b0  addi 1, 1, 160
  05e53b4  blr

FUN_005e53b8:   # 0x5e53b8, 0xa8 bytes
  05e53b8  stdu 1, -176(1)
  05e53bc  mflr 0
  05e53c0  std 30, 160(1)
  05e53c4  clrlwi 30, 3, 24
  05e53c8  std 27, 136(1)
  05e53cc  cmpwi 7, 30, 80
  05e53d0  std 28, 144(1)
  05e53d4  std 29, 152(1)
  05e53d8  std 31, 168(1)
  05e53dc  std 0, 192(1)
  05e53e0  mr 29, 3
  05e53e4  mr 28, 6
  05e53e8  mr 27, 4
  05e53ec  bt 30, 0x5e5458
  05e53f0  clrlwi 0, 30, 28
  05e53f4  mr 31, 5
  05e53f8  cmplwi 7, 0, 12
  05e53fc  bf 29, 0x5e5408
  05e5400  bl 0x5c4840
  05e5404  nop
  05e5408  lwz 11, -23400(2)
  05e540c  rlwinm 9, 0, 2, 26, 29
  05e5410  lwzx 0, 9, 11
  05e5414  extsw 0, 0
  05e5418  add 0, 0, 11
  05e541c  mtctr 0
  05e5420  bctr
  05e5424  <unknown>
  05e5428  <unknown>
  05e542c  <unknown>
  05e5430  <unknown>
  05e5434  <unknown>
  05e5438  <unknown>
  05e543c  <unknown>
  05e5440  <unknown>
  05e5444  <unknown>
  05e5448  <unknown>
  05e544c  <unknown>
  05e5450  <unknown>
  05e5454  <unknown>
  05e5458  addi 9, 5, 3
  05e545c  rlwinm 9, 9, 0, 0, 29

_Z15get_ttype_entryP16lsda_header_infoy:   # 0x5e55bc, 0xc8 bytes
  05e55bc  stdu 1, -128(1)
  05e55c0  mflr 0
  05e55c4  mr 9, 3
  05e55c8  std 0, 144(1)
  05e55cc  lbz 3, 20(3)
  05e55d0  clrlwi 0, 3, 24
  05e55d4  cmpwi 7, 0, 255
  05e55d8  bt 30, 0x5e5680
  05e55dc  clrlwi 0, 0, 29
  05e55e0  cmpwi 7, 0, 2
  05e55e4  bt 30, 0x5e5644
  05e55e8  bf 29, 0x5e5608
  05e55ec  cmpwi 7, 0, 3
  05e55f0  bt 30, 0x5e5678
  05e55f4  cmpwi 7, 0, 4
  05e55f8  slwi 4, 4, 3
  05e55fc  bt 30, 0x5e5614
  05e5600  bl 0x5c4840
  05e5604  nop
  05e5608  cmpwi 7, 0, 0
  05e560c  slwi 4, 4, 2
  05e5610  bf 30, 0x5e5600
  05e5614  lwz 5, 12(9)
  05e5618  addi 6, 1, 112
  05e561c  clrldi 3, 3, 56
  05e5620  sub 5, 5, 4
  05e5624  lwz 4, 8(9)
  05e5628  clrldi 5, 5, 32
  05e562c  bl 0x5e53b8
  05e5630  ld 0, 144(1)
  05e5634  lwz 3, 112(1)
  05e5638  addi 1, 1, 128
  05e563c  mtlr 0
  05e5640  blr
  05e5644  slwi 4, 4, 1
  05e5648  lwz 5, 12(9)
  05e564c  addi 6, 1, 112
  05e5650  sub 5, 5, 4
  05e5654  lwz 4, 8(9)
  05e5658  clrldi 3, 3, 56
  05e565c  clrldi 5, 5, 32
  05e5660  bl 0x5e53b8
  05e5664  ld 0, 144(1)
  05e5668  lwz 3, 112(1)
  05e566c  addi 1, 1, 128
  05e5670  mtlr 0
  05e5674  blr
  05e5678  slwi 4, 4, 2
  05e567c  b 0x5e5614
  05e5680  li 4, 0

FUN_005e5688:   # 0x5e5688, 0xac bytes
  05e5688  cmpwi 7, 3, 255
  05e568c  mflr 0
  05e5690  stdu 1, -112(1)
  05e5694  std 0, 128(1)
  05e5698  bt 30, 0x5e56d4
  05e569c  rlwinm 3, 3, 0, 25, 27
  05e56a0  cmpwi 7, 3, 32
  05e56a4  bt 30, 0x5e56ec
  05e56a8  bf 29, 0x5e56cc
  05e56ac  cmpwi 7, 3, 64
  05e56b0  bt 30, 0x5e5718
  05e56b4  cmpwi 7, 3, 80
  05e56b8  bt 30, 0x5e56d4
  05e56bc  cmpwi 7, 3, 48
  05e56c0  bt 30, 0x5e5728
  05e56c4  bl 0x5c4840
  05e56c8  nop
  05e56cc  cmpwi 7, 3, 0
  05e56d0  bf 30, 0x5e570c
  05e56d4  li 3, 0
  05e56d8  ld 0, 128(1)
  05e56dc  clrldi 3, 3, 32
  05e56e0  addi 1, 1, 112
  05e56e4  mtlr 0
  05e56e8  blr
  05e56ec  clrldi 3, 4, 32
  05e56f0  bl 0x5ddd28
  05e56f4  nop
  05e56f8  ld 0, 128(1)
  05e56fc  clrldi 3, 3, 32
  05e5700  mtlr 0
  05e5704  addi 1, 1, 112
  05e5708  blr
  05e570c  cmpwi 7, 3, 16
  05e5710  bf 30, 0x5e56c4
  05e5714  b 0x5e56d4
  05e5718  clrldi 3, 4, 32
  05e571c  bl 0x5ddd18
  05e5720  nop
  05e5724  b 0x5e56d8
  05e5728  clrldi 3, 4, 32
  05e572c  bl 0x5ddd20
  05e5730  nop

_Z17parse_lsda_headerP15_Unwind_ContextPKhP16lsda_header_info:   # 0x5e5738, 0x144 bytes
  05e5738  cmpwi 7, 3, 0
  05e573c  mflr 0
  05e5740  stdu 1, -176(1)
  05e5744  std 27, 136(1)
  05e5748  std 28, 144(1)
  05e574c  std 29, 152(1)
  05e5750  std 30, 160(1)
  05e5754  std 31, 168(1)
  05e5758  std 0, 192(1)
  05e575c  mr 31, 3
  05e5760  mr 30, 5
  05e5764  mr 28, 4
  05e5768  clrldi 3, 3, 32
  05e576c  li 9, 0
  05e5770  mr 29, 4
  05e5774  mr 27, 5
  05e5778  bt 30, 0x5e5788
  05e577c  bl 0x5ddd18
  05e5780  nop
  05e5784  mr 9, 3
  05e5788  stw 9, 0(30)
  05e578c  lbz 0, 0(28)
  05e5790  clrldi 4, 31, 32
  05e5794  addi 31, 29, 1
  05e5798  cmpwi 7, 0, 255
  05e579c  clrldi 29, 0, 56
  05e57a0  mr 3, 29
  05e57a4  bt 30, 0x5e584c
  05e57a8  bl 0x5e5688
  05e57ac  addi 6, 27, 4
  05e57b0  clrldi 5, 31, 32
  05e57b4  clrldi 4, 3, 32
  05e57b8  clrldi 6, 6, 32
  05e57bc  mr 3, 29
  05e57c0  addi 29, 1, 112
  05e57c4  bl 0x5e53b8
  05e57c8  mr 31, 3
  05e57cc  addi 5, 31, 1
  05e57d0  clrldi 3, 5, 32
  05e57d4  lbz 0, 0(31)
  05e57d8  cmpwi 7, 0, 255
  05e57dc  stb 0, 20(30)
  05e57e0  bt 30, 0x5e586c
  05e57e4  mr 4, 29
  05e57e8  bl 0x5e524c
  05e57ec  ld 0, 112(1)
  05e57f0  mr 5, 3
  05e57f4  add 0, 3, 0
  05e57f8  stw 0, 12(30)
  05e57fc  addi 3, 5, 1
  05e5800  lbz 0, 0(5)
  05e5804  mr 4, 29
  05e5808  clrldi 3, 3, 32
  05e580c  stb 0, 21(30)
  05e5810  bl 0x5e524c
  05e5814  ld 9, 112(1)
  05e5818  mr 0, 3
  05e581c  ld 27, 136(1)
  05e5820  clrldi 3, 3, 32
  05e5824  ld 28, 144(1)
  05e5828  add 0, 0, 9
  05e582c  ld 29, 152(1)
  05e5830  ld 31, 168(1)
  05e5834  stw 0, 16(30)
  05e5838  ld 0, 192(1)
  05e583c  ld 30, 160(1)
  05e5840  addi 1, 1, 176
  05e5844  mtlr 0
  05e5848  blr
  05e584c  stw 9, 4(30)
  05e5850  lbz 0, 0(31)
  05e5854  addi 5, 31, 1
  05e5858  addi 29, 1, 112
  05e585c  cmpwi 7, 0, 255
  05e5860  clrldi 3, 5, 32
  05e5864  stb 0, 20(30)
  05e5868  bf 30, 0x5e57e4
  05e586c  li 0, 0
  05e5870  addi 29, 1, 112
  05e5874  stw 0, 12(30)
  05e5878  b 0x5e57fc

FUN_005e587c:   # 0x5e587c, 0x30 bytes
  05e587c  stdu 1, -144(1)
  05e5880  mflr 0
  05e5884  std 29, 120(1)
  05e5888  mr 29, 3
  05e588c  clrldi 3, 3, 32
  05e5890  addi 29, 29, -48
  05e5894  std 0, 160(1)
  05e5898  bl 0x5e5fcc
  05e589c  nop
  05e58a0  clrldi 29, 29, 32
  05e58a4  lwz 3, 8(29)
  05e58a8  bl 0x5e5e38

FUN_005e5e38:   # 0x5e5e38, 0x28 bytes
  05e5e38  stdu 1, -112(1)
  05e5e3c  mflr 0
  05e5e40  std 2, 40(1)
  05e5e44  std 0, 128(1)
  05e5e48  lwz 0, 0(3)
  05e5e4c  lwz 2, 4(3)
  05e5e50  mtctr 0
  05e5e54  bctrl
  05e5e58  ld 2, 40(1)
  05e5e5c  bl 0x5e6980

FUN_005e5e64:   # 0x5e5e64, 0x28 bytes
  05e5e64  stdu 1, -112(1)
  05e5e68  mflr 0
  05e5e6c  std 2, 40(1)
  05e5e70  std 0, 128(1)
  05e5e74  lwz 0, 0(3)
  05e5e78  lwz 2, 4(3)
  05e5e7c  mtctr 0
  05e5e80  bctrl
  05e5e84  ld 2, 40(1)
  05e5e88  bl 0x5c4840

_ZSt18uncaught_exceptionv:   # 0x5e5e90, 0x3c bytes
  05e5e90  stdu 1, -112(1)
  05e5e94  mflr 0
  05e5e98  std 0, 128(1)
  05e5e9c  bl 0x5e6280
  05e5ea0  nop
  05e5ea4  lwz 0, 4(3)
  05e5ea8  srawi 9, 0, 31
  05e5eac  xor 3, 9, 0
  05e5eb0  ld 0, 128(1)
  05e5eb4  addi 1, 1, 112
  05e5eb8  sub 3, 9, 3
  05e5ebc  mtlr 0
  05e5ec0  srwi 3, 3, 31
  05e5ec4  extsw 3, 3
  05e5ec8  blr

__cxa_end_catch:   # 0x5e5ecc, 0xfc bytes
  05e5ecc  stdu 1, -128(1)
  05e5ed0  mflr 0
  05e5ed4  std 31, 120(1)
  05e5ed8  std 0, 144(1)
  05e5edc  bl 0x5e6238
  05e5ee0  nop
  05e5ee4  mr 31, 3
  05e5ee8  lwz 3, 0(3)
  05e5eec  cmpwi 7, 3, 0
  05e5ef0  bt 30, 0x5e5f30
  05e5ef4  lis 0, 18254
  05e5ef8  clrldi 11, 3, 32
  05e5efc  ori 0, 0, 21827
  05e5f00  sldi 0, 0, 32
  05e5f04  oris 0, 0, 17195
  05e5f08  ld 9, 48(11)
  05e5f0c  ori 0, 0, 11008
  05e5f10  cmpd 7, 9, 0
  05e5f14  bt 30, 0x5e5f44
  05e5f18  addi 3, 3, 48
  05e5f1c  li 0, 0
  05e5f20  clrldi 3, 3, 32
  05e5f24  stw 0, 0(31)
  05e5f28  bl 0x5ddd30
  05e5f2c  nop
  05e5f30  ld 0, 144(1)
  05e5f34  ld 31, 120(1)
  05e5f38  addi 1, 1, 128
  05e5f3c  mtlr 0
  05e5f40  blr
  05e5f44  lwz 9, 20(11)
  05e5f48  cmpwi 7, 9, 0
  05e5f4c  bt 28, 0x5e5fa8
  05e5f50  addi 9, 9, -1
  05e5f54  cmpwi 7, 9, 0
  05e5f58  bt 30, 0x5e5f78
  05e5f5c  bt- 28, 0x5e5fc4
  05e5f60  stw 9, 20(11)
  05e5f64  ld 0, 144(1)
  05e5f68  ld 31, 120(1)
  05e5f6c  addi 1, 1, 128
  05e5f70  mtlr 0
  05e5f74  blr
  05e5f78  addi 3, 3, 48
  05e5f7c  lwz 0, 16(11)
  05e5f80  clrldi 3, 3, 32
  05e5f84  stw 0, 0(31)
  05e5f88  bl 0x5ddd30
  05e5f8c  nop
  05e5f90  lwz 0, 0(31)
  05e5f94  cmpwi 7, 0, 0
  05e5f98  bf 30, 0x5e5f30
  05e5f9c  bl 0x5e61fc
  05e5fa0  nop
  05e5fa4  b 0x5e5f30
  05e5fa8  addi 9, 9, 1
  05e5fac  cmpwi 7, 9, 0
  05e5fb0  bf 30, 0x5e5f60
  05e5fb4  lwz 0, 16(11)
  05e5fb8  stw 9, 20(11)
  05e5fbc  stw 0, 0(31)
  05e5fc0  b 0x5e5f64
  05e5fc4  bl 0x5e6980

FUN_005e5fcc:   # 0x5e5fcc, 0xc8 bytes
  05e5fcc  stdu 1, -144(1)
  05e5fd0  mflr 0
  05e5fd4  std 29, 120(1)
  05e5fd8  mr 29, 3
  05e5fdc  std 0, 160(1)
  05e5fe0  bl 0x5e6280
  05e5fe4  nop
  05e5fe8  lis 0, 18254
  05e5fec  addi 29, 29, -48
  05e5ff0  ori 0, 0, 21827
  05e5ff4  mr 10, 3
  05e5ff8  clrldi 3, 29, 32
  05e5ffc  sldi 0, 0, 32
  05e6000  oris 0, 0, 17195
  05e6004  lwz 11, 0(10)
  05e6008  ori 0, 0, 11008
  05e600c  ld 9, 48(3)
  05e6010  cmpd 7, 9, 0
  05e6014  bt 30, 0x5e6040
  05e6018  cmpwi 7, 11, 0
  05e601c  bf- 30, 0x5e6090
  05e6020  ld 0, 160(1)
  05e6024  li 3, 0
  05e6028  stw 29, 0(10)
  05e602c  clrldi 3, 3, 32
  05e6030  ld 29, 120(1)
  05e6034  mtlr 0
  05e6038  addi 1, 1, 144
  05e603c  blr
  05e6040  lwz 9, 20(3)
  05e6044  cmpwi 7, 9, 0
  05e6048  subfic 0, 9, 1
  05e604c  bt 28, 0x5e6054
  05e6050  addi 0, 9, 1
  05e6054  stw 0, 20(3)
  05e6058  lwz 9, 4(10)
  05e605c  cmpw 7, 11, 29
  05e6060  addi 9, 9, -1
  05e6064  stw 9, 4(10)
  05e6068  bt 30, 0x5e6074
  05e606c  stw 11, 16(3)
  05e6070  stw 29, 0(10)
  05e6074  ld 0, 160(1)
  05e6078  lwz 3, 40(3)
  05e607c  ld 29, 120(1)
  05e6080  mtlr 0
  05e6084  clrldi 3, 3, 32
  05e6088  addi 1, 1, 144
  05e608c  blr
  05e6090  bl 0x5e6980

_Z15eh_globals_dtorPv:   # 0x5e60a8, 0x70 bytes
  05e60a8  cmpwi 7, 3, 0
  05e60ac  mflr 0
  05e60b0  stdu 1, -144(1)
  05e60b4  std 31, 136(1)
  05e60b8  std 29, 120(1)
  05e60bc  std 0, 160(1)
  05e60c0  mr 31, 3
  05e60c4  bt 30, 0x5e6100
  05e60c8  lwz 29, 0(3)
  05e60cc  cmpwi 7, 29, 0
  05e60d0  bt 30, 0x5e60f4
  05e60d4  clrldi 9, 29, 32
  05e60d8  addi 3, 29, 48
  05e60dc  clrldi 3, 3, 32
  05e60e0  lwz 29, 16(9)
  05e60e4  bl 0x5ddd30
  05e60e8  nop
  05e60ec  cmpwi 7, 29, 0
  05e60f0  bf 30, 0x5e60d4
  05e60f4  clrldi 3, 31, 32
  05e60f8  bl 0x5d580c
  05e60fc  nop
  05e6100  ld 0, 160(1)
  05e6104  ld 29, 120(1)
  05e6108  ld 31, 136(1)
  05e610c  mtlr 0
  05e6110  addi 1, 1, 144
  05e6114  blr

_Z41__static_initialization_and_destruction_0ii:   # 0x5e6118, 0xc4 bytes
  05e6118  stdu 1, -144(1)
  05e611c  mflr 0
  05e6120  cmpwi 7, 3, 1
  05e6124  std 0, 160(1)
  05e6128  li 0, 0
  05e612c  std 29, 120(1)
  05e6130  ori 0, 0, 65535
  05e6134  cmpwi 6, 3, 0
  05e6138  mr 9, 4
  05e613c  cmpw 1, 4, 0
  05e6140  bt 30, 0x5e617c
  05e6144  li 4, 0
  05e6148  bf 26, 0x5e6168
  05e614c  ori 4, 4, 65535
  05e6150  cmpw 7, 9, 4
  05e6154  bf 30, 0x5e6168
  05e6158  lwz 3, -23396(2)
  05e615c  lbz 0, 4(3)
  05e6160  cmpwi 7, 0, 0
  05e6164  bf 30, 0x5e61b8
  05e6168  ld 0, 160(1)
  05e616c  ld 29, 120(1)
  05e6170  addi 1, 1, 144
  05e6174  mtlr 0
  05e6178  blr
  05e617c  bf 6, 0x5e6168
  05e6180  lwz 29, -23396(2)
  05e6184  li 0, 0
  05e6188  lwz 4, -23392(2)
  05e618c  mr 3, 29
  05e6190  stb 0, 4(29)
  05e6194  bl 0x5e31cc
  05e6198  nop
  05e619c  srawi 0, 3, 31
  05e61a0  xor 9, 0, 3
  05e61a4  sub 9, 9, 0
  05e61a8  addi 9, 9, -1
  05e61ac  srwi 9, 9, 31
  05e61b0  stb 9, 4(29)
  05e61b4  b 0x5e6168
  05e61b8  lwz 3, 0(3)
  05e61bc  extsw 3, 3
  05e61c0  bl 0x5e2f70
  05e61c4  nop
  05e61c8  ld 0, 160(1)
  05e61cc  ld 29, 120(1)
  05e61d0  mtlr 0
  05e61d4  addi 1, 1, 144
  05e61d8  blr

FUN_005e61dc:   # 0x5e61dc, 0x10 bytes
  05e61dc  li 4, -1
  05e61e0  li 3, 0
  05e61e4  clrldi 4, 4, 48
  05e61e8  b 0x5e6118

FUN_005e61ec:   # 0x5e61ec, 0x10 bytes
  05e61ec  li 4, -1
  05e61f0  li 3, 1
  05e61f4  clrldi 4, 4, 48
  05e61f8  b 0x5e6118

__eh_thread_cleanup:   # 0x5e61fc, 0x3c bytes
  05e61fc  lwz 3, -23396(2)
  05e6200  mflr 0
  05e6204  stdu 1, -112(1)
  05e6208  std 0, 128(1)
  05e620c  lbz 0, 4(3)
  05e6210  cmpwi 7, 0, 0
  05e6214  bt 30, 0x5e6228
  05e6218  lwz 3, 0(3)
  05e621c  extsw 3, 3
  05e6220  bl 0x5e36ac
  05e6224  nop
  05e6228  ld 0, 128(1)
  05e622c  addi 1, 1, 112
  05e6230  mtlr 0
  05e6234  blr

FUN_005e6238:   # 0x5e6238, 0x48 bytes
  05e6238  lwz 3, -23396(2)
  05e623c  mflr 0
  05e6240  stdu 1, -112(1)
  05e6244  std 0, 128(1)
  05e6248  addi 9, 3, 8
  05e624c  lbz 0, 4(3)
  05e6250  cmpwi 7, 0, 0
  05e6254  bt 30, 0x5e626c
  05e6258  lwz 3, 0(3)
  05e625c  extsw 3, 3
  05e6260  bl 0x5e3314
  05e6264  nop
  05e6268  mr 9, 3
  05e626c  ld 0, 128(1)
  05e6270  clrldi 3, 9, 32
  05e6274  addi 1, 1, 112
  05e6278  mtlr 0
  05e627c  blr

FUN_005e6280:   # 0x5e6280, 0xac bytes
  05e6280  stdu 1, -128(1)
  05e6284  mflr 0
  05e6288  std 31, 120(1)
  05e628c  lwz 31, -23396(2)
  05e6290  std 0, 144(1)
  05e6294  std 30, 112(1)
  05e6298  lbz 0, 4(31)
  05e629c  cmpwi 7, 0, 0
  05e62a0  bf 30, 0x5e62c4
  05e62a4  addi 3, 31, 8
  05e62a8  ld 0, 144(1)
  05e62ac  clrldi 3, 3, 32
  05e62b0  ld 30, 112(1)
  05e62b4  ld 31, 120(1)
  05e62b8  mtlr 0
  05e62bc  addi 1, 1, 128
  05e62c0  blr
  05e62c4  lwz 3, 0(31)
  05e62c8  extsw 3, 3
  05e62cc  bl 0x5e3314
  05e62d0  nop
  05e62d4  cmpwi 7, 3, 0
  05e62d8  bf 30, 0x5e62a8
  05e62dc  li 3, 8
  05e62e0  bl 0x5d5838
  05e62e4  nop
  05e62e8  cmpwi 7, 3, 0
  05e62ec  mr 30, 3
  05e62f0  bt- 30, 0x5e6328
  05e62f4  lwz 3, 0(31)
  05e62f8  clrldi 31, 30, 32
  05e62fc  extsw 3, 3
  05e6300  mr 4, 31
  05e6304  bl 0x5e3408
  05e6308  nop
  05e630c  cmpwi 7, 3, 0
  05e6310  mr 0, 3
  05e6314  bf 30, 0x5e6328
  05e6318  mr 3, 30
  05e631c  stw 0, 4(31)
  05e6320  stw 0, 0(31)
  05e6324  b 0x5e62a8
  05e6328  bl 0x5e6980

FUN_005e6424:   # 0x5e6424, 0x178 bytes
  05e6424  stdu 1, -80(1)
  05e6428  ori 8, 4, 0
  05e642c  ori 4, 3, 0
  05e6430  ori 3, 5, 0
  05e6434  ori 9, 4, 0
  05e6438  clrlwi 5, 3, 30
  05e643c  rlwinm 7, 3, 0, 27, 27
  05e6440  rlwinm 6, 3, 0, 28, 29
  05e6444  cmplwi 3, 32
  05e6448  cmpwi 1, 5, 0
  05e644c  cmpwi 7, 7, 0
  05e6450  std 28, 48(1)
  05e6454  std 29, 56(1)
  05e6458  std 30, 64(1)
  05e645c  std 31, 72(1)
  05e6460  cmpwi 6, 6, 0
  05e6464  bt 0, 0x5e64e4
  05e6468  ori 10, 3, 0
  05e646c  addic 31, 10, -32
  05e6470  ld 30, 0(8)
  05e6474  addic 11, 9, 32
  05e6478  ld 29, 8(8)
  05e647c  cmplwi 31, 32
  05e6480  ld 28, 16(8)
  05e6484  addic 12, 8, 32
  05e6488  ld 31, 24(8)
  05e648c  std 30, 0(9)
  05e6490  std 29, 8(9)
  05e6494  clrldi 8, 12, 32
  05e6498  std 28, 16(9)
  05e649c  std 31, 24(9)
  05e64a0  clrldi 9, 11, 32
  05e64a4  bt 0, 0x5e64e4
  05e64a8  ld 31, 0(8)
  05e64ac  addic 10, 10, -64
  05e64b0  ld 30, 8(8)
  05e64b4  addic 11, 9, 32
  05e64b8  ld 29, 16(8)
  05e64bc  addic 12, 8, 32
  05e64c0  ld 28, 24(8)
  05e64c4  cmplwi 10, 32
  05e64c8  std 31, 0(9)
  05e64cc  clrldi 8, 12, 32
  05e64d0  std 30, 8(9)
  05e64d4  std 29, 16(9)
  05e64d8  std 28, 24(9)
  05e64dc  clrldi 9, 11, 32
  05e64e0  bf 0, 0x5e646c
  05e64e4  bt 30, 0x5e6508
  05e64e8  ld 11, 0(8)
  05e64ec  addc 10, 9, 7
  05e64f0  ld 12, 8(8)
  05e64f4  addc 7, 7, 8
  05e64f8  std 11, 0(9)
  05e64fc  std 12, 8(9)
  05e6500  clrldi 8, 7, 32
  05e6504  clrldi 9, 10, 32
  05e6508  bt 26, 0x5e6548
  05e650c  addc 7, 6, 8
  05e6510  rlwinm 10, 3, 31, 29, 29
  05e6514  lwz 31, 0(8)
  05e6518  addic 11, 7, -4
  05e651c  addc 6, 9, 6
  05e6520  clrldi 11, 11, 32
  05e6524  addic 12, 6, -4
  05e6528  lwzx 30, 10, 8
  05e652c  clrldi 12, 12, 32
  05e6530  clrldi 8, 7, 32
  05e6534  lwz 7, 0(11)
  05e6538  stw 31, 0(9)
  05e653c  stwx 30, 10, 9
  05e6540  stw 7, 0(12)
  05e6544  clrldi 9, 6, 32
  05e6548  bt 6, 0x5e6580
  05e654c  addc 6, 5, 8
  05e6550  rlwinm 3, 3, 31, 31, 31
  05e6554  lbz 7, 0(8)
  05e6558  addic 6, 6, -1
  05e655c  addc 5, 9, 5
  05e6560  clrldi 6, 6, 32
  05e6564  addic 5, 5, -1
  05e6568  lbzx 8, 3, 8
  05e656c  clrldi 5, 5, 32
  05e6570  lbz 6, 0(6)
  05e6574  stb 7, 0(9)
  05e6578  stbx 8, 3, 9
  05e657c  stb 6, 0(5)
  05e6580  ori 3, 4, 0
  05e6584  ld 28, 48(1)
  05e6588  ld 29, 56(1)
  05e658c  ld 30, 64(1)
  05e6590  ld 31, 72(1)
  05e6594  addi 1, 1, 80
  05e6598  blr
