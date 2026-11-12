# game/update/moby296.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_296:   # 0x3358c8, 0x770 bytes
  03358c8  stdu 1, -128(1)
  03358cc  mflr 0
  03358d0  std 0, 144(1)
  03358d4  std 30, 112(1)
  03358d8  std 31, 120(1)
  03358dc  lwz 30, 120(3)
  03358e0  ori 31, 3, 0
  03358e4  cmpwi 30, 0
  03358e8  bt 2, 0x336020
  03358ec  lbz 3, 32(31)
  03358f0  cmpwi 3, 1
  03358f4  cmpwi 1, 3, 3
  03358f8  cmpwi 6, 3, 2
  03358fc  cmpwi 7, 3, 0
  0335900  bt 1, 0x335914
  0335904  cmpwi 3, -1
  0335908  bf 1, 0x336008
  033590c  bf 29, 0x335920
  0335910  b 0x3359c0
  0335914  bf 25, 0x335c7c
  0335918  bf 5, 0x335f2c
  033591c  b 0x336008
  0335920  lis 3, 129
  0335924  vspltisw 4, -1
  0335928  li 4, 2356
  033592c  li 5, 0
  0335930  lis 6, 51
  0335934  li 7, 3
  0335938  lvlx 2, 4, 3
  033593c  addi 3, 6, 22688
  0335940  vcfsx 2, 2, 0
  0335944  stw 5, 76(30)
  0335948  stw 5, 72(30)
  033594c  li 4, -3056
  0335950  stw 5, 68(30)
  0335954  stw 5, 64(30)
  0335958  lvlx 3, 0, 3
  033595c  li 5, 0
  0335960  lis 3, 114
  0335964  vspltw 3, 3, 0
  0335968  vaddfp 2, 2, 3
  033596c  vslw 3, 4, 4
  0335970  lvlx 4, 4, 3
  0335974  lwz 4, 164(30)
  0335978  lwz 6, 156(30)
  033597c  li 3, 160
  0335980  subc 4, 5, 4
  0335984  ori 5, 6, 4
  0335988  cntlzw 4, 4
  033598c  li 6, 1
  0335990  sldi 4, 4, 58
  0335994  subc 6, 6, 7
  0335998  sradi 4, 4, 63
  033599c  vmaddfp 2, 4, 2, 3
  03359a0  and 4, 4, 6
  03359a4  addc 4, 7, 4
  03359a8  vctsxs 2, 2, 0
  03359ac  vspltw 2, 2, 0
  03359b0  stvewx 2, 3, 30
  03359b4  stw 5, 156(30)
  03359b8  stb 4, 32(31)
  03359bc  b 0x336008
  03359c0  lis 4, 16256
  03359c4  addic 3, 30, 160
  03359c8  stw 4, 88(31)
  03359cc  bl 0x4fff60
  03359d0  nop
  03359d4  cmpwi 3, 0
  03359d8  lfs 1, 72(31)
  03359dc  bt 2, 0x335b44
  03359e0  lfs 2, 68(30)
  03359e4  lfs 3, 64(30)
  03359e8  fmuls 2, 2, 2
  03359ec  lfs 4, 72(30)
  03359f0  lis 3, 129
  03359f4  lis 4, 114
  03359f8  lis 5, 51
  03359fc  addi 5, 5, 22688
  0335a00  fmadds 2, 3, 3, 2
  0335a04  lfs 3, 2360(3)
  0335a08  fmadds 2, 4, 4, 2
  0335a0c  lfs 4, -3048(4)
  0335a10  lfs 5, 4(5)
  0335a14  fsqrts 2, 2
  0335a18  fnmsubs 2, 3, 4, 2
  0335a1c  fcmpu 0, 2, 5
  0335a20  bt 1, 0x335a7c
  0335a24  lis 3, 129
  0335a28  li 4, 2356
  0335a2c  vspltisw 4, -1
  0335a30  lis 5, 51
  0335a34  addi 5, 5, 22688
  0335a38  vslw 4, 4, 4
  0335a3c  lvlx 2, 4, 3
  0335a40  lis 3, 114
  0335a44  vcfsx 2, 2, 0
  0335a48  lvlx 3, 0, 5
  0335a4c  li 4, -3056
  0335a50  vspltw 3, 3, 0
  0335a54  lvlx 5, 4, 3
  0335a58  li 3, 160
  0335a5c  li 4, 2
  0335a60  vaddfp 2, 2, 3
  0335a64  vmaddfp 2, 5, 2, 4
  0335a68  vctsxs 2, 2, 0
  0335a6c  vspltw 2, 2, 0
  0335a70  stvewx 2, 3, 30
  0335a74  stb 4, 32(31)
  0335a78  b 0x335c5c
  0335a7c  lis 3, 51
  0335a80  addi 3, 3, 22688
  0335a84  lfs 3, 8(3)
  0335a88  lfs 4, 12(3)
  0335a8c  fadds 1, 1, 3
  0335a90  lfs 5, 16(3)
  0335a94  lfs 8, 20(3)
  0335a98  fsubs 3, 4, 1
  0335a9c  fsubs 6, 5, 1
  0335aa0  fsub 7, 1, 3
  0335aa4  fsel 1, 7, 3, 1
  0335aa8  lfs 3, 24(3)
  0335aac  fsub 7, 6, 1
  0335ab0  fsel 1, 7, 6, 1
  0335ab4  lfs 6, 28(3)
  0335ab8  lfs 7, 32(3)
  0335abc  fmuls 9, 1, 1
  0335ac0  li 3, 0
  0335ac4  fmuls 10, 9, 1
  0335ac8  fmuls 11, 9, 10
  0335acc  fmadds 1, 10, 8, 1
  0335ad0  fmuls 10, 9, 11
  0335ad4  fmadds 1, 11, 3, 1
  0335ad8  fmuls 9, 9, 10
  0335adc  fmadds 1, 10, 6, 1
  0335ae0  fmadds 1, 9, 7, 1
  0335ae4  fmuls 1, 1, 2
  0335ae8  fneg 1, 1
  0335aec  stfs 1, 64(30)
  0335af0  lfs 1, 72(31)
  0335af4  fsubs 4, 4, 1
  0335af8  fsubs 5, 5, 1
  0335afc  stw 3, 72(30)
  0335b00  fsub 9, 1, 4
  0335b04  fsel 1, 9, 4, 1
  0335b08  fsub 4, 5, 1
  0335b0c  fsel 1, 4, 5, 1
  0335b10  fmuls 4, 1, 1
  0335b14  fmuls 5, 4, 1
  0335b18  fmuls 9, 4, 5
  0335b1c  fmadds 1, 5, 8, 1
  0335b20  fmuls 5, 4, 9
  0335b24  fmadds 1, 9, 3, 1
  0335b28  fmuls 3, 4, 5
  0335b2c  fmadds 1, 5, 6, 1
  0335b30  fmadds 1, 3, 7, 1
  0335b34  fmuls 1, 1, 2
  0335b38  fneg 1, 1
  0335b3c  stfs 1, 68(30)
  0335b40  b 0x335c5c
  0335b44  lfs 2, 68(30)
  0335b48  lfs 3, 64(30)
  0335b4c  fmuls 2, 2, 2
  0335b50  lfs 4, 72(30)
  0335b54  lis 3, 129
  0335b58  lis 4, 114
  0335b5c  fmadds 2, 3, 3, 2
  0335b60  lfs 3, 2352(3)
  0335b64  fmadds 2, 4, 4, 2
  0335b68  lfs 4, -3052(4)
  0335b6c  fmuls 3, 3, 4
  0335b70  fsqrts 2, 2
  0335b74  fabs 3, 3
  0335b78  fcmpu 0, 2, 3
  0335b7c  cror 6, 1, 2
  0335b80  bt 6, 0x335b98
  0335b84  lis 3, 129
  0335b88  lis 4, 114
  0335b8c  lfs 3, 2360(3)
  0335b90  lfs 4, -3048(4)
  0335b94  fmadds 2, 3, 4, 2
  0335b98  lis 3, 51
  0335b9c  addi 3, 3, 22688
  0335ba0  lfs 3, 8(3)
  0335ba4  lfs 4, 12(3)
  0335ba8  fadds 1, 1, 3
  0335bac  lfs 5, 16(3)
  0335bb0  lfs 7, 20(3)
  0335bb4  fsubs 3, 4, 1
  0335bb8  fsubs 6, 5, 1
  0335bbc  fsub 8, 1, 3
  0335bc0  fsel 1, 8, 3, 1
  0335bc4  lfs 3, 24(3)
  0335bc8  fsub 8, 6, 1
  0335bcc  fsel 1, 8, 6, 1
  0335bd0  lfs 6, 28(3)
  0335bd4  lfs 8, 32(3)
  0335bd8  fmuls 9, 1, 1
  0335bdc  li 3, 0
  0335be0  fmuls 10, 9, 1
  0335be4  fmuls 11, 9, 10
  0335be8  fmadds 1, 10, 7, 1
  0335bec  fmuls 10, 9, 11
  0335bf0  fmadds 1, 11, 3, 1
  0335bf4  fmuls 9, 9, 10
  0335bf8  fmadds 1, 10, 6, 1
  0335bfc  fmadds 1, 9, 8, 1
  0335c00  fmuls 1, 1, 2
  0335c04  fneg 1, 1
  0335c08  stfs 1, 64(30)
  0335c0c  lfs 1, 72(31)
  0335c10  fsubs 4, 4, 1
  0335c14  fsubs 5, 5, 1
  0335c18  stw 3, 72(30)
  0335c1c  fsub 9, 1, 4
  0335c20  fsel 1, 9, 4, 1
  0335c24  fsub 4, 5, 1
  0335c28  fsel 1, 4, 5, 1
  0335c2c  fmuls 4, 1, 1
  0335c30  fmuls 5, 4, 1
  0335c34  fmuls 9, 4, 5
  0335c38  fmadds 1, 5, 7, 1
  0335c3c  fmuls 5, 4, 9
  0335c40  fmadds 1, 9, 3, 1
  0335c44  fmuls 3, 4, 5
  0335c48  fmadds 1, 5, 6, 1
  0335c4c  fmadds 1, 3, 8, 1
  0335c50  fmuls 1, 1, 2
  0335c54  fneg 1, 1
  0335c58  stfs 1, 68(30)
  0335c5c  lis 3, 129
  0335c60  lis 4, 114
  0335c64  lfs 1, 2352(3)
  0335c68  lfs 3, -3052(4)
  0335c6c  fmuls 1, 1, 3
  0335c70  fdivs 1, 2, 1
  0335c74  stfs 1, 88(31)
  0335c78  b 0x336008
  0335c7c  lis 4, -16512
  0335c80  addic 3, 30, 160
  0335c84  stw 4, 88(31)
  0335c88  bl 0x4fff60
  0335c8c  nop
  0335c90  cmpwi 3, 0
  0335c94  lfs 1, 72(31)
  0335c98  bt 2, 0x335df8
  0335c9c  lfs 2, 68(30)
  0335ca0  lfs 3, 64(30)
  0335ca4  fmuls 2, 2, 2
  0335ca8  lfs 4, 72(30)
  0335cac  lis 3, 129
  0335cb0  lis 4, 114
  0335cb4  lis 5, 51
  0335cb8  fmadds 2, 3, 3, 2
  0335cbc  lfs 3, 2360(3)
  0335cc0  addi 3, 5, 22688
  0335cc4  fmadds 2, 4, 4, 2
  0335cc8  lfs 4, -3048(4)
  0335ccc  lfs 5, 4(3)
  0335cd0  fsqrts 2, 2
  0335cd4  fnmsubs 2, 3, 4, 2
  0335cd8  fcmpu 0, 2, 5
  0335cdc  bt 1, 0x335d38
  0335ce0  lis 3, 129
  0335ce4  vspltisw 4, -1
  0335ce8  li 4, 2356
  0335cec  lis 5, 51
  0335cf0  addi 5, 5, 22688
  0335cf4  vslw 4, 4, 4
  0335cf8  lvlx 2, 4, 3
  0335cfc  lis 3, 114
  0335d00  vcfsx 2, 2, 0
  0335d04  li 4, -3056
  0335d08  lvlx 3, 0, 5
  0335d0c  vspltw 3, 3, 0
  0335d10  lvlx 5, 4, 3
  0335d14  li 3, 160
  0335d18  li 4, 1
  0335d1c  vaddfp 2, 2, 3
  0335d20  vmaddfp 2, 5, 2, 4
  0335d24  vctsxs 2, 2, 0
  0335d28  vspltw 2, 2, 0
  0335d2c  stvewx 2, 3, 30
  0335d30  stb 4, 32(31)
  0335d34  b 0x335f08
  0335d38  lis 3, 51
  0335d3c  addi 3, 3, 22688
  0335d40  lfs 3, 8(3)
  0335d44  lfs 4, 12(3)
  0335d48  fadds 1, 1, 3
  0335d4c  lfs 5, 16(3)
  0335d50  lfs 7, 20(3)
  0335d54  fsubs 3, 4, 1
  0335d58  fsubs 6, 5, 1
  0335d5c  fsub 8, 1, 3
  0335d60  fsel 1, 8, 3, 1
  0335d64  lfs 3, 24(3)
  0335d68  fsub 8, 6, 1
  0335d6c  fsel 1, 8, 6, 1
  0335d70  lfs 6, 28(3)
  0335d74  lfs 8, 32(3)
  0335d78  li 3, 0
  0335d7c  fmuls 9, 1, 1
  0335d80  fmuls 10, 9, 1
  0335d84  fmuls 11, 9, 10
  0335d88  fmadds 1, 10, 7, 1
  0335d8c  fmuls 10, 9, 11
  0335d90  fmadds 1, 11, 3, 1
  0335d94  fmuls 9, 9, 10
  0335d98  fmadds 1, 10, 6, 1
  0335d9c  fmadds 1, 9, 8, 1
  0335da0  fmuls 1, 1, 2
  0335da4  stfs 1, 64(30)
  0335da8  lfs 1, 72(31)
  0335dac  fsubs 4, 4, 1
  0335db0  fsubs 5, 5, 1
  0335db4  stw 3, 72(30)
  0335db8  fsub 9, 1, 4
  0335dbc  fsel 1, 9, 4, 1
  0335dc0  fsub 4, 5, 1
  0335dc4  fsel 1, 4, 5, 1
  0335dc8  fmuls 4, 1, 1
  0335dcc  fmuls 5, 4, 1
  0335dd0  fmuls 9, 4, 5
  0335dd4  fmadds 1, 5, 7, 1
  0335dd8  fmuls 5, 4, 9
  0335ddc  fmadds 1, 9, 3, 1
  0335de0  fmuls 3, 4, 5
  0335de4  fmadds 1, 5, 6, 1
  0335de8  fmadds 1, 3, 8, 1
  0335dec  fmuls 1, 1, 2
  0335df0  stfs 1, 68(30)
  0335df4  b 0x335f08
  0335df8  lfs 2, 68(30)
  0335dfc  lfs 3, 64(30)
  0335e00  fmuls 2, 2, 2
  0335e04  lfs 4, 72(30)
  0335e08  lis 3, 129
  0335e0c  lis 4, 114
  0335e10  fmadds 2, 3, 3, 2
  0335e14  lfs 3, 2352(3)
  0335e18  fmadds 2, 4, 4, 2
  0335e1c  lfs 4, -3052(4)
  0335e20  fmuls 3, 3, 4
  0335e24  fsqrts 2, 2
  0335e28  fabs 3, 3
  0335e2c  fcmpu 0, 2, 3
  0335e30  cror 6, 1, 2
  0335e34  bt 6, 0x335e4c
  0335e38  lis 3, 129
  0335e3c  lis 4, 114
  0335e40  lfs 3, 2360(3)
  0335e44  lfs 4, -3048(4)
  0335e48  fmadds 2, 3, 4, 2
  0335e4c  lis 3, 51
  0335e50  addi 3, 3, 22688
  0335e54  lfs 3, 8(3)
  0335e58  lfs 4, 12(3)
  0335e5c  fadds 1, 1, 3
  0335e60  lfs 5, 16(3)
  0335e64  lfs 8, 20(3)
  0335e68  fsubs 3, 4, 1
  0335e6c  fsubs 6, 5, 1
  0335e70  fsub 7, 1, 3
  0335e74  fsel 1, 7, 3, 1
  0335e78  lfs 3, 24(3)
  0335e7c  fsub 7, 6, 1
  0335e80  fsel 1, 7, 6, 1
  0335e84  lfs 6, 28(3)
  0335e88  lfs 7, 32(3)
  0335e8c  li 3, 0
  0335e90  fmuls 9, 1, 1
  0335e94  fmuls 10, 9, 1
  0335e98  fmuls 11, 9, 10
  0335e9c  fmadds 1, 10, 8, 1
  0335ea0  fmuls 10, 9, 11
  0335ea4  fmadds 1, 11, 3, 1
  0335ea8  fmuls 9, 9, 10
  0335eac  fmadds 1, 10, 6, 1
  0335eb0  fmadds 1, 9, 7, 1
  0335eb4  fmuls 1, 1, 2
  0335eb8  stfs 1, 64(30)
  0335ebc  lfs 1, 72(31)
  0335ec0  fsubs 4, 4, 1
  0335ec4  fsubs 5, 5, 1
  0335ec8  stw 3, 72(30)
  0335ecc  fsub 9, 1, 4
  0335ed0  fsel 1, 9, 4, 1
  0335ed4  fsub 4, 5, 1
  0335ed8  fsel 1, 4, 5, 1
  0335edc  fmuls 4, 1, 1
  0335ee0  fmuls 5, 4, 1
  0335ee4  fmuls 9, 4, 5
  0335ee8  fmadds 1, 5, 8, 1
  0335eec  fmuls 5, 4, 9
  0335ef0  fmadds 1, 9, 3, 1
  0335ef4  fmuls 3, 4, 5
  0335ef8  fmadds 1, 5, 6, 1
  0335efc  fmadds 1, 3, 7, 1
  0335f00  fmuls 1, 1, 2
  0335f04  stfs 1, 68(30)
  0335f08  lis 3, 129
  0335f0c  lis 4, 114
  0335f10  lfs 1, 2352(3)
  0335f14  lfs 3, -3052(4)
  0335f18  fmuls 1, 1, 3
  0335f1c  fneg 1, 1
  0335f20  fdivs 1, 2, 1
  0335f24  stfs 1, 88(31)
  0335f28  b 0x336008
  0335f2c  lis 3, 51
  0335f30  lfs 1, 72(31)
  0335f34  addi 3, 3, 22688
  0335f38  lis 4, 114
  0335f3c  lfs 2, 8(3)
  0335f40  lfs 3, 12(3)
  0335f44  fadds 1, 1, 2
  0335f48  lfs 4, 16(3)
  0335f4c  lfs 6, 20(3)
  0335f50  fsubs 2, 3, 1
  0335f54  fsubs 5, 4, 1
  0335f58  fsub 7, 1, 2
  0335f5c  fsel 1, 7, 2, 1
  0335f60  lfs 2, 24(3)
  0335f64  fsub 7, 5, 1
  0335f68  fsel 1, 7, 5, 1
  0335f6c  lfs 5, 28(3)
  0335f70  lfs 7, 32(3)
  0335f74  lis 3, 129
  0335f78  lfs 10, 2352(3)
  0335f7c  lfs 11, -3052(4)
  0335f80  fmuls 8, 1, 1
  0335f84  fmuls 10, 10, 11
  0335f88  li 3, 0
  0335f8c  fmuls 9, 8, 1
  0335f90  fmuls 11, 8, 9
  0335f94  fmadds 1, 9, 6, 1
  0335f98  fmuls 9, 8, 11
  0335f9c  fmadds 1, 11, 2, 1
  0335fa0  fmuls 8, 8, 9
  0335fa4  fmadds 1, 9, 5, 1
  0335fa8  fmadds 1, 8, 7, 1
  0335fac  fmuls 1, 10, 1
  0335fb0  fneg 1, 1
  0335fb4  stfs 1, 64(30)
  0335fb8  lfs 1, 72(31)
  0335fbc  fsubs 3, 3, 1
  0335fc0  fsubs 4, 4, 1
  0335fc4  stw 3, 72(30)
  0335fc8  fsub 8, 1, 3
  0335fcc  fsel 1, 8, 3, 1
  0335fd0  fsub 3, 4, 1
  0335fd4  fsel 1, 3, 4, 1
  0335fd8  fmuls 3, 1, 1
  0335fdc  fmuls 4, 3, 1
  0335fe0  fmuls 8, 3, 4
  0335fe4  fmadds 1, 4, 6, 1
  0335fe8  fmuls 4, 3, 8
  0335fec  fmadds 1, 8, 2, 1
  0335ff0  fmuls 2, 3, 4
  0335ff4  fmadds 1, 4, 5, 1
  0335ff8  fmadds 1, 2, 7, 1
  0335ffc  fmuls 1, 10, 1
  0336000  fneg 1, 1
  0336004  stfs 1, 68(30)
  0336008  addic 5, 31, 64
  033600c  addic 3, 30, 96
  0336010  addic 4, 30, 64
  0336014  ori 6, 5, 0
  0336018  bl 0x112900
  033601c  nop
  0336020  ld 0, 144(1)
  0336024  mtlr 0
  0336028  ld 30, 112(1)
  033602c  ld 31, 120(1)
  0336030  addi 1, 1, 128
  0336034  blr

M653_00336038:   # 0x336038, 0x14 bytes
  0336038  lis 3, 129
  033603c  lis 4, 1
  0336040  addic 3, 3, 2368
  0336044  stw 4, 72(3)
  0336048  blr

M653_00336050:   # 0x336050, 0xf4 bytes
  0336050  stdu 1, -160(1)
  0336054  mflr 0
  0336058  std 0, 176(1)
  033605c  std 31, 152(1)
  0336060  lis 4, 161
  0336064  ori 31, 3, 0
  0336068  lwz 3, 1800(4)
  033606c  std 30, 144(1)
  0336070  std 29, 136(1)
  0336074  std 28, 128(1)
  0336078  std 27, 120(1)
  033607c  cmpwi 3, 2
  0336080  bf 2, 0x336120
  0336084  lis 3, 151
  0336088  lbz 3, -16268(3)
  033608c  cmpwi 3, 0
  0336090  bt 2, 0x336120
  0336094  lis 28, 150
  0336098  li 27, 0
  033609c  addic 28, 28, -12976
  03360a0  lhz 3, 68(28)
  03360a4  extsh 4, 3
  03360a8  cmpwi 4, 0
  03360ac  bf 1, 0x336120
  03360b0  lis 29, 162
  03360b4  ori 30, 28, 0
  03360b8  addic 29, 29, -16512
  03360bc  lwz 4, 376(30)
  03360c0  lhz 5, 166(31)
  03360c4  extsh 5, 5
  03360c8  lhz 6, 166(4)
  03360cc  extsh 6, 6
  03360d0  cmpw 6, 5
  03360d4  bf 2, 0x33610c
  03360d8  lbz 5, 1(29)
  03360dc  cmpwi 5, 0
  03360e0  bf 2, 0x33610c
  03360e4  ori 3, 4, 0
  03360e8  li 4, 0
  03360ec  ori 5, 29, 0
  03360f0  bl 0xf0ea8
  03360f4  nop
  03360f8  lis 4, 16432
  03360fc  lhz 3, 68(28)
  0336100  stw 4, 32(29)
  0336104  stw 4, 36(29)
  0336108  stw 4, 40(29)
  033610c  extsh 4, 3
  0336110  addic 27, 27, 1
  0336114  addic 30, 30, 4
  0336118  cmpw 27, 4
  033611c  bt 0, 0x3360bc
  0336120  ld 0, 176(1)
  0336124  mtlr 0
  0336128  ld 27, 120(1)
  033612c  ld 28, 128(1)
  0336130  ld 29, 136(1)
  0336134  ld 30, 144(1)
  0336138  ld 31, 152(1)
  033613c  addi 1, 1, 160
  0336140  blr
