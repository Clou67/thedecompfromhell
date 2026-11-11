# game/crt0.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

GetArgc:   # 0x14b7c, 0x10 bytes
  0014b7c  lwz 9, -32768(2)
  0014b80  lwz 3, 0(9)
  0014b84  extsw 3, 3
  0014b88  blr

GetArgv:   # 0x14b8c, 0xc bytes
  0014b8c  lwz 9, -32768(2)
  0014b90  lwz 3, 4(9)
  0014b94  blr

idol::ExitToSystem:   # 0x14b98, 0x28 bytes
  0014b98  li 3, 0
  0014b9c  mflr 0
  0014ba0  stdu 1, -112(1)
  0014ba4  std 0, 128(1)
  0014ba8  bl 0x6506c4
  0014bac  ld 2, 40(1)
  0014bb0  ld 0, 128(1)
  0014bb4  addi 1, 1, 112
  0014bb8  mtlr 0
  0014bbc  blr

_libc_cleanup:   # 0x14bc0, 0x4c bytes
  0014bc0  stdu 1, -112(1)
  0014bc4  mflr 0
  0014bc8  std 0, 128(1)
  0014bcc  nop
  0014bd0  nop
  0014bd4  bl 0x5c505c
  0014bd8  nop
  0014bdc  bl 0x5d000c
  0014be0  nop
  0014be4  bl 0x5cbd60
  0014be8  nop
  0014bec  bl 0x5d0488
  0014bf0  nop
  0014bf4  bl 0x5d5868
  0014bf8  nop
  0014bfc  ld 0, 128(1)
  0014c00  addi 1, 1, 112
  0014c04  mtlr 0
  0014c08  blr

crt0_exit:   # 0x14c0c, 0x38 bytes
  0014c0c  stdu 1, -128(1)
  0014c10  mflr 0
  0014c14  std 31, 120(1)
  0014c18  std 0, 144(1)
  0014c1c  bl 0x14b98
  0014c20  bl 0x5c49c8
  0014c24  nop
  0014c28  bl 0x64ed80
  0014c2c  nop
  0014c30  ld 0, 144(1)
  0014c34  ld 31, 120(1)
  0014c38  addi 1, 1, 128
  0014c3c  mtlr 0
  0014c40  b 0x14bc0

_exit:   # 0x14c44, 0x38 bytes
  0014c44  stdu 1, -144(1)
  0014c48  mflr 0
  0014c4c  std 29, 120(1)
  0014c50  mr 29, 3
  0014c54  std 0, 160(1)
  0014c58  bl 0x14bc0
  0014c5c  extsw 3, 29
  0014c60  bl 0x6507e4
  0014c64  ld 2, 40(1)
  0014c68  ld 0, 160(1)
  0014c6c  ld 29, 120(1)
  0014c70  mtlr 0
  0014c74  addi 1, 1, 144
  0014c78  blr

entry:   # 0x14c7c, 0x1d4 bytes
  0014c7c  stdu 1, -160(1)
  0014c80  mflr 0
  0014c84  std 26, 112(1)
  0014c88  std 28, 128(1)
  0014c8c  std 30, 144(1)
  0014c90  std 31, 152(1)
  0014c94  std 27, 120(1)
  0014c98  std 29, 136(1)
  0014c9c  std 0, 176(1)
  0014ca0  mr 31, 3
  0014ca4  mr 28, 4
  0014ca8  mr 26, 5
  0014cac  mr 30, 6
  0014cb0  mr 29, 12
  0014cb4  lwz 11, -32764(2)
  0014cb8  clrldi 4, 8, 32
  0014cbc  clrldi 6, 10, 32
  0014cc0  mr 3, 7
  0014cc4  clrldi 5, 9, 32
  0014cc8  mr 27, 28
  0014ccc  stw 29, 0(11)
  0014cd0  bl 0x650664
  0014cd4  ld 2, 40(1)
  0014cd8  addi 10, 28, 4
  0014cdc  li 8, 0
  0014ce0  clrldi 9, 10, 32
  0014ce4  clrldi 11, 28, 32
  0014ce8  addi 8, 8, 1
  0014cec  addi 10, 10, 8
  0014cf0  cmpld 7, 31, 8
  0014cf4  lwz 0, 0(9)
  0014cf8  addi 28, 28, 4
  0014cfc  stw 0, 0(11)
  0014d00  bf 28, 0x14ce0
  0014d04  lwz 9, -32768(2)
  0014d08  mr 29, 26
  0014d0c  mr 5, 26
  0014d10  mr 28, 31
  0014d14  addi 10, 26, 4
  0014d18  li 8, 0
  0014d1c  stw 31, 0(9)
  0014d20  stw 27, 4(9)
  0014d24  clrldi 9, 10, 32
  0014d28  clrldi 11, 5, 32
  0014d2c  addi 8, 8, 1
  0014d30  addi 10, 10, 8
  0014d34  cmpld 7, 30, 8
  0014d38  lwz 0, 0(9)
  0014d3c  addi 5, 5, 4
  0014d40  stw 0, 0(11)
  0014d44  bf 28, 0x14d24
  0014d48  bl 0x5d588c
  0014d4c  nop
  0014d50  lwz 3, -32760(2)
  0014d54  lwz 4, -32756(2)
  0014d58  nop
  0014d5c  nop
  0014d60  bl 0x5d05b8
  0014d64  nop
  0014d68  bl 0x5cbc68
  0014d6c  nop
  0014d70  bl 0x5cffa8
  0014d74  nop
  0014d78  lwz 4, -32748(2)
  0014d7c  lwz 3, -32752(2)
  0014d80  nop
  0014d84  nop
  0014d88  bl 0x650684
  0014d8c  ld 2, 40(1)
  0014d90  lwz 9, -32744(2)
  0014d94  std 3, 0(9)
  0014d98  bl 0x10200 <>
  0014d9c  nop
  0014da0  lwz 3, -32740(2)
  0014da4  lwz 0, 0(3)
  0014da8  cmpwi 7, 0, 0
  0014dac  bf 30, 0x14e44
  0014db0  lwz 3, -32736(2)
  0014db4  lwz 0, 0(3)
  0014db8  cmpwi 7, 0, 0
  0014dbc  bf 30, 0x14e38
  0014dc0  lwz 3, -32732(2)
  0014dc4  lwz 0, 0(3)
  0014dc8  cmpwi 7, 0, 0
  0014dcc  bt 30, 0x14dd8
  0014dd0  bl 0x650604
  0014dd4  ld 2, 40(1)
  0014dd8  lwz 3, -32728(2)
  0014ddc  bl 0x650584
  0014de0  ld 2, 40(1)
  0014de4  lwz 3, -32724(2)
  0014de8  bl 0x6506a4
  0014dec  ld 2, 40(1)
  0014df0  clrldi 4, 27, 32
  0014df4  clrldi 5, 29, 32
  0014df8  extsw 3, 28
  0014dfc  bl 0x1401c
  0014e00  nop
  0014e04  extsw 3, 3
  0014e08  bl 0x5c4ec8
  0014e0c  nop
  0014e10  ld 0, 176(1)
  0014e14  ld 26, 112(1)
  0014e18  ld 27, 120(1)
  0014e1c  mtlr 0
  0014e20  ld 28, 128(1)
  0014e24  ld 29, 136(1)
  0014e28  ld 30, 144(1)
  0014e2c  ld 31, 152(1)
  0014e30  addi 1, 1, 160
  0014e34  blr
  0014e38  bl 0x650604
  0014e3c  ld 2, 40(1)
  0014e40  b 0x14dc0
  0014e44  bl 0x650604
  0014e48  ld 2, 40(1)
  0014e4c  b 0x14db0

__do_global_dtors_aux:   # 0x14e50, 0x9c bytes
  0014e50  stdu 1, -128(1)
  0014e54  mflr 0
  0014e58  std 30, 112(1)
  0014e5c  lwz 30, -32720(2)
  0014e60  std 0, 144(1)
  0014e64  std 31, 120(1)
  0014e68  lbz 0, 0(30)
  0014e6c  cmpwi 7, 0, 0
  0014e70  bf- 30, 0x14ed4
  0014e74  lwz 31, -32716(2)
  0014e78  b 0x14ea0
  0014e7c  clrldi 9, 9, 32
  0014e80  addi 0, 11, 4
  0014e84  stw 0, 0(31)
  0014e88  lwz 0, 0(9)
  0014e8c  std 2, 40(1)
  0014e90  mtctr 0
  0014e94  lwz 2, 4(9)
  0014e98  bctrl
  0014e9c  ld 2, 40(1)
  0014ea0  lwz 11, 0(31)
  0014ea4  clrldi 9, 11, 32
  0014ea8  lwz 9, 0(9)
  0014eac  cmpwi 7, 9, 0
  0014eb0  bf 30, 0x14e7c
  0014eb4  lwz 0, -32712(2)
  0014eb8  cmpwi 7, 0, 0
  0014ebc  bt- 30, 0x14ecc
  0014ec0  lwz 3, -32708(2)
  0014ec4  bl 0x5e21b8
  0014ec8  nop
  0014ecc  li 0, 1
  0014ed0  stb 0, 0(30)
  0014ed4  ld 0, 144(1)
  0014ed8  ld 30, 112(1)
  0014edc  ld 31, 120(1)
  0014ee0  mtlr 0
  0014ee4  addi 1, 1, 128
  0014ee8  blr

frame_dummy:   # 0x14eec, 0x70 bytes
  0014eec  stdu 1, -112(1)
  0014ef0  mflr 0
  0014ef4  std 0, 128(1)
  0014ef8  lwz 0, -32704(2)
  0014efc  cmpwi 7, 0, 0
  0014f00  bt- 30, 0x14f14
  0014f04  lwz 3, -32708(2)
  0014f08  lwz 4, -32700(2)
  0014f0c  bl 0x5e1fc0
  0014f10  nop
  0014f14  lwz 3, -32696(2)
  0014f18  lwz 0, 0(3)
  0014f1c  cmpwi 7, 0, 0
  0014f20  bt 30, 0x14f4c
  0014f24  lwz 0, -32692(2)
  0014f28  cmpwi 7, 0, 0
  0014f2c  clrldi 9, 0, 32
  0014f30  bt 30, 0x14f4c
  0014f34  lwz 0, 0(9)
  0014f38  std 2, 40(1)
  0014f3c  mtctr 0
  0014f40  lwz 2, 4(9)
  0014f44  bctrl
  0014f48  ld 2, 40(1)
  0014f4c  ld 0, 128(1)
  0014f50  addi 1, 1, 112
  0014f54  mtlr 0
  0014f58  blr

__do_global_ctors_aux:   # 0x14f5c, 0x6c bytes
  0014f5c  lwz 9, -32688(2)
  0014f60  mflr 0
  0014f64  stdu 1, -128(1)
  0014f68  std 31, 120(1)
  0014f6c  addi 31, 9, -4
  0014f70  std 0, 144(1)
  0014f74  clrldi 11, 31, 32
  0014f78  lwz 9, 0(11)
  0014f7c  cmpwi 7, 9, -1
  0014f80  bt 30, 0x14fb4
  0014f84  clrldi 11, 9, 32
  0014f88  addi 31, 31, -4
  0014f8c  lwz 0, 0(11)
  0014f90  std 2, 40(1)
  0014f94  mtctr 0
  0014f98  lwz 2, 4(11)
  0014f9c  bctrl
  0014fa0  ld 2, 40(1)
  0014fa4  clrldi 9, 31, 32
  0014fa8  lwz 9, 0(9)
  0014fac  cmpwi 7, 9, -1
  0014fb0  bf 30, 0x14f84
  0014fb4  ld 0, 144(1)
  0014fb8  ld 31, 120(1)
  0014fbc  addi 1, 1, 128
  0014fc0  mtlr 0
  0014fc4  blr
