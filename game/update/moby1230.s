# game/update/moby1230.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1230_00213920:   # 0x213920, 0x4ac bytes
  0213920  stdu 1, -512(1)
  0213924  mflr 0
  0213928  std 0, 528(1)
  021392c  stfd 25, 456(1)
  0213930  stfd 26, 464(1)
  0213934  stfd 27, 472(1)
  0213938  stfd 28, 480(1)
  021393c  stfd 29, 488(1)
  0213940  stfd 30, 496(1)
  0213944  stfd 31, 504(1)
  0213948  std 30, 440(1)
  021394c  ori 30, 3, 0
  0213950  lis 4, 33
  0213954  std 29, 432(1)
  0213958  addic 3, 1, 176
  021395c  std 28, 424(1)
  0213960  addi 29, 4, 14608
  0213964  addic 5, 30, 16
  0213968  std 31, 448(1)
  021396c  lwz 28, 120(30)
  0213970  addic 31, 28, 16
  0213974  ori 4, 31, 0
  0213978  bl 0x502a64
  021397c  nop
  0213980  lfs 1, 180(1)
  0213984  lfs 2, 176(1)
  0213988  fmuls 3, 1, 1
  021398c  lfs 4, 184(1)
  0213990  lfs 5, 188(1)
  0213994  stfs 5, 124(1)
  0213998  lfs 5, 4(29)
  021399c  fmadds 3, 2, 2, 3
  02139a0  lfs 31, 0(29)
  02139a4  lfs 7, 16(30)
  02139a8  lfs 8, 20(30)
  02139ac  lfs 9, 24(30)
  02139b0  lfs 10, 28(30)
  02139b4  fmadds 3, 4, 4, 3
  02139b8  stfs 7, 160(1)
  02139bc  stfs 8, 164(1)
  02139c0  addic 3, 1, 192
  02139c4  stfs 9, 168(1)
  02139c8  addic 4, 1, 160
  02139cc  stfs 10, 172(1)
  02139d0  addic 5, 1, 112
  02139d4  fsqrts 3, 3
  02139d8  fdivs 5, 5, 3
  02139dc  fsub 6, 31, 3
  02139e0  fsub 7, 31, 3
  02139e4  fsub 8, 31, 3
  02139e8  fsub 9, 3, 31
  02139ec  fsub 10, 3, 31
  02139f0  fsub 3, 3, 31
  02139f4  fmuls 2, 2, 5
  02139f8  fmuls 1, 1, 5
  02139fc  fmuls 4, 4, 5
  0213a00  fsel 5, 6, 31, 2
  0213a04  fsel 6, 7, 31, 1
  0213a08  fsel 7, 8, 31, 4
  0213a0c  fsel 2, 9, 5, 2
  0213a10  fsel 1, 10, 6, 1
  0213a14  fsel 3, 3, 7, 4
  0213a18  stfs 2, 112(1)
  0213a1c  stfs 1, 116(1)
  0213a20  stfs 3, 120(1)
  0213a24  bl 0x502b08
  0213a28  nop
  0213a2c  lis 3, 149
  0213a30  lfs 1, 160(1)
  0213a34  lfs 2, 164(1)
  0213a38  addic 3, 3, 5056
  0213a3c  lfs 3, 168(1)
  0213a40  lfs 4, 16(28)
  0213a44  lfs 5, 20(28)
  0213a48  lfs 6, 320(3)
  0213a4c  lfs 7, 324(3)
  0213a50  fsubs 8, 1, 6
  0213a54  lfs 9, 328(3)
  0213a58  fsubs 10, 2, 7
  0213a5c  lfs 11, 24(28)
  0213a60  fsubs 1, 1, 4
  0213a64  fsubs 12, 3, 9
  0213a68  lfs 13, 172(1)
  0213a6c  fsubs 2, 2, 5
  0213a70  stfs 13, 140(1)
  0213a74  fsubs 3, 3, 11
  0213a78  stfs 8, 128(1)
  0213a7c  stfs 10, 132(1)
  0213a80  fmuls 5, 1, 12
  0213a84  stfs 12, 136(1)
  0213a88  lfs 4, 16(28)
  0213a8c  fsubs 4, 4, 6
  0213a90  fmsubs 5, 3, 8, 5
  0213a94  fmuls 8, 2, 8
  0213a98  stfs 4, 144(1)
  0213a9c  lfs 6, 20(28)
  0213aa0  fsubs 6, 6, 7
  0213aa4  fmuls 7, 3, 10
  0213aa8  fmsubs 8, 1, 10, 8
  0213aac  fmuls 10, 2, 4
  0213ab0  li 3, 0
  0213ab4  fmsubs 7, 2, 12, 7
  0213ab8  stfs 6, 148(1)
  0213abc  lfs 11, 24(28)
  0213ac0  fmuls 12, 3, 6
  0213ac4  fsubs 9, 11, 9
  0213ac8  fmuls 11, 5, 5
  0213acc  fmuls 13, 1, 9
  0213ad0  fmadds 11, 7, 7, 11
  0213ad4  fmsubs 1, 1, 6, 10
  0213ad8  fmsubs 2, 2, 9, 12
  0213adc  lfs 9, 8(29)
  0213ae0  fmsubs 3, 3, 4, 13
  0213ae4  fmadds 4, 8, 8, 11
  0213ae8  stw 3, 156(1)
  0213aec  stw 3, 140(1)
  0213af0  li 3, 14
  0213af4  fmuls 6, 3, 3
  0213af8  fsqrts 4, 4
  0213afc  fmadds 6, 2, 2, 6
  0213b00  fmadds 6, 1, 1, 6
  0213b04  fsqrts 6, 6
  0213b08  fdivs 10, 9, 4
  0213b0c  fsub 11, 31, 4
  0213b10  fsub 12, 31, 4
  0213b14  fsub 13, 31, 4
  0213b18  fsub 0, 4, 31
  0213b1c  fsub 30, 4, 31
  0213b20  fsub 4, 4, 31
  0213b24  fdivs 9, 9, 6
  0213b28  fsub 29, 31, 6
  0213b2c  fsub 28, 31, 6
  0213b30  fsub 27, 31, 6
  0213b34  fsub 26, 6, 31
  0213b38  fsub 25, 6, 31
  0213b3c  fsub 6, 6, 31
  0213b40  fmuls 7, 7, 10
  0213b44  fmuls 5, 5, 10
  0213b48  fmuls 8, 8, 10
  0213b4c  fsel 10, 11, 31, 7
  0213b50  fsel 11, 12, 31, 5
  0213b54  fsel 12, 13, 31, 8
  0213b58  fsel 7, 0, 10, 7
  0213b5c  fsel 5, 30, 11, 5
  0213b60  fsel 4, 4, 12, 8
  0213b64  stfs 7, 128(1)
  0213b68  stfs 5, 132(1)
  0213b6c  stfs 4, 136(1)
  0213b70  fmuls 2, 2, 9
  0213b74  fmuls 3, 3, 9
  0213b78  fmuls 1, 1, 9
  0213b7c  fsel 4, 29, 31, 2
  0213b80  fsel 5, 28, 31, 3
  0213b84  fsel 7, 27, 31, 1
  0213b88  fsel 2, 26, 4, 2
  0213b8c  fsel 3, 25, 5, 3
  0213b90  fsel 1, 6, 7, 1
  0213b94  stfs 2, 144(1)
  0213b98  stfs 3, 148(1)
  0213b9c  stfs 1, 152(1)
  0213ba0  bl 0x685c4
  0213ba4  nop
  0213ba8  std 3, 392(1)
  0213bac  li 3, 0
  0213bb0  lis 9, 0
  0213bb4  li 4, 0
  0213bb8  li 5, 1
  0213bbc  li 6, 1
  0213bc0  li 7, 1
  0213bc4  li 8, 0
  0213bc8  ori 9, 9, 65424
  0213bcc  bl 0x502fd4
  0213bd0  nop
  0213bd4  std 3, 400(1)
  0213bd8  li 4, 0
  0213bdc  li 3, 0
  0213be0  li 5, 0
  0213be4  li 6, 0
  0213be8  li 7, 0
  0213bec  li 8, 0
  0213bf0  bl 0x502f08
  0213bf4  nop
  0213bf8  std 3, 384(1)
  0213bfc  li 4, 2
  0213c00  li 3, 0
  0213c04  li 5, 0
  0213c08  li 6, 1
  0213c0c  li 7, 128
  0213c10  bl 0x502ea8
  0213c14  nop
  0213c18  lis 4, -32732
  0213c1c  std 3, 408(1)
  0213c20  ori 7, 1, 0
  0213c24  ori 8, 4, 12920
  0213c28  lis 6, 101
  0213c2c  lis 5, 101
  0213c30  li 9, 2
  0213c34  stw 8, 348(1)
  0213c38  addic 4, 7, 352
  0213c3c  stw 8, 344(1)
  0213c40  addic 3, 7, 356
  0213c44  stw 8, 340(1)
  0213c48  addic 6, 6, 20432
  0213c4c  addic 5, 5, 20436
  0213c50  stw 8, 336(1)
  0213c54  mtctr 9
  0213c58  lfs 1, 0(6)
  0213c5c  lfs 2, 0(5)
  0213c60  stfs 1, 352(7)
  0213c64  lfs 1, 8(6)
  0213c68  stfs 2, 356(7)
  0213c6c  lfs 2, 8(5)
  0213c70  addic 6, 6, 16
  0213c74  stfs 1, 8(4)
  0213c78  addic 5, 5, 16
  0213c7c  stfs 2, 8(3)
  0213c80  addic 4, 4, 16
  0213c84  addic 3, 3, 16
  0213c88  addic 7, 7, 16
  0213c8c  bdnz 0x213c58
  0213c90  addic 30, 1, 128
  0213c94  addic 29, 1, 160
  0213c98  ori 5, 30, 0
  0213c9c  addic 3, 1, 208
  0213ca0  ori 4, 29, 0
  0213ca4  bl 0x502a64
  0213ca8  nop
  0213cac  lfs 1, 208(1)
  0213cb0  addic 3, 1, 224
  0213cb4  lfs 2, 212(1)
  0213cb8  ori 4, 29, 0
  0213cbc  stfs 1, 272(1)
  0213cc0  ori 5, 30, 0
  0213cc4  lfs 1, 216(1)
  0213cc8  stfs 2, 276(1)
  0213ccc  lfs 2, 220(1)
  0213cd0  stfs 1, 280(1)
  0213cd4  stfs 2, 284(1)
  0213cd8  bl 0x5023f0
  0213cdc  nop
  0213ce0  lfs 1, 224(1)
  0213ce4  lfs 2, 228(1)
  0213ce8  addic 30, 1, 144
  0213cec  stfs 1, 288(1)
  0213cf0  addic 3, 1, 240
  0213cf4  lfs 1, 232(1)
  0213cf8  ori 4, 31, 0
  0213cfc  stfs 2, 292(1)
  0213d00  ori 5, 30, 0
  0213d04  lfs 2, 236(1)
  0213d08  stfs 1, 296(1)
  0213d0c  stfs 2, 300(1)
  0213d10  bl 0x502a64
  0213d14  nop
  0213d18  lfs 1, 240(1)
  0213d1c  lfs 2, 244(1)
  0213d20  addic 3, 1, 256
  0213d24  stfs 1, 304(1)
  0213d28  ori 4, 31, 0
  0213d2c  lfs 1, 248(1)
  0213d30  ori 5, 30, 0
  0213d34  stfs 2, 308(1)
  0213d38  lfs 2, 252(1)
  0213d3c  stfs 1, 312(1)
  0213d40  stfs 2, 316(1)
  0213d44  bl 0x5023f0
  0213d48  nop
  0213d4c  lfs 1, 256(1)
  0213d50  lis 4, 161
  0213d54  lfs 2, 260(1)
  0213d58  addic 3, 1, 272
  0213d5c  stfs 1, 320(1)
  0213d60  addic 6, 4, 24396
  0213d64  lfs 1, 264(1)
  0213d68  li 4, 0
  0213d6c  stfs 2, 324(1)
  0213d70  li 5, 0
  0213d74  lfs 2, 268(1)
  0213d78  li 7, 9
  0213d7c  stfs 1, 328(1)
  0213d80  stfs 2, 332(1)
  0213d84  lwz 6, 28(6)
  0213d88  bl 0x72280
  0213d8c  nop
  0213d90  ld 0, 528(1)
  0213d94  mtlr 0
  0213d98  lfd 25, 456(1)
  0213d9c  lfd 26, 464(1)
  0213da0  lfd 27, 472(1)
  0213da4  lfd 28, 480(1)
  0213da8  lfd 29, 488(1)
  0213dac  lfd 30, 496(1)
  0213db0  lfd 31, 504(1)
  0213db4  ld 28, 424(1)
  0213db8  ld 29, 432(1)
  0213dbc  ld 30, 440(1)
  0213dc0  ld 31, 448(1)
  0213dc4  addi 1, 1, 512
  0213dc8  blr

M1230_00213dd8:   # 0x213dd8, 0x104 bytes
  0213dd8  stdu 1, -64(1)
  0213ddc  li 5, 0
  0213de0  stw 4, 48(1)
  0213de4  stw 4, 52(1)
  0213de8  li 6, 1
  0213dec  subc 5, 5, 4
  0213df0  stw 4, 56(1)
  0213df4  stw 4, 60(1)
  0213df8  li 7, 2
  0213dfc  cntlzw 4, 5
  0213e00  li 0, 48
  0213e04  sldi 4, 4, 58
  0213e08  lbz 5, 33(3)
  0213e0c  subc 6, 6, 7
  0213e10  sradi 4, 4, 63
  0213e14  cmpwi 5, 255
  0213e18  and 4, 4, 6
  0213e1c  lvx 2, 1, 0
  0213e20  addc 4, 7, 4
  0213e24  bf 2, 0x213e30
  0213e28  stb 4, 32(3)
  0213e2c  b 0x213ed4
  0213e30  lis 3, 165
  0213e34  rlwinm 5, 5, 2, 22, 29
  0213e38  addic 3, 3, -28284
  0213e3c  lwzx 3, 3, 5
  0213e40  cmpwi 3, 0
  0213e44  bt 2, 0x213ed4
  0213e48  lis 5, 33
  0213e4c  vcfsx 2, 2, 0
  0213e50  lis 9, 164
  0213e54  addi 5, 5, 15824
  0213e58  lis 8, 114
  0213e5c  li 7, -3056
  0213e60  li 6, 4
  0213e64  lvlx 3, 0, 5
  0213e68  lwz 5, -28512(9)
  0213e6c  vspltw 3, 3, 0
  0213e70  vaddfp 2, 2, 3
  0213e74  lhz 11, 0(3)
  0213e78  rlwinm 11, 11, 8, 9, 23
  0213e7c  addc 10, 5, 11
  0213e80  clrldi 10, 10, 32
  0213e84  lhz 12, 166(10)
  0213e88  cmpwi 12, 1230
  0213e8c  bf 2, 0x213ec0
  0213e90  vspltisw 3, -1
  0213e94  stb 4, 32(10)
  0213e98  lvlx 4, 7, 8
  0213e9c  lwz 5, -28512(9)
  0213ea0  vslw 3, 3, 3
  0213ea4  addc 10, 5, 11
  0213ea8  clrldi 10, 10, 32
  0213eac  vmaddfp 3, 4, 2, 3
  0213eb0  lwz 10, 120(10)
  0213eb4  vctsxs 3, 3, 0
  0213eb8  vspltw 3, 3, 0
  0213ebc  stvewx 3, 6, 10
  0213ec0  lhz 10, 0(3)
  0213ec4  addic 3, 3, 2
  0213ec8  extsh 10, 10
  0213ecc  cmpwi 10, 0
  0213ed0  bf 0, 0x213e74
  0213ed4  addi 1, 1, 64
  0213ed8  blr

UpdateMoby_1230:   # 0x213f08, 0x1f8 bytes
  0213f08  stdu 1, -144(1)
  0213f0c  mflr 0
  0213f10  std 0, 160(1)
  0213f14  std 31, 136(1)
  0213f18  lbz 4, 32(3)
  0213f1c  std 30, 128(1)
  0213f20  ori 31, 3, 0
  0213f24  lwz 30, 120(3)
  0213f28  cmpwi 4, 0
  0213f2c  cmpwi 1, 4, 2
  0213f30  cmpwi 6, 4, 1
  0213f34  std 29, 120(1)
  0213f38  cmpwi 7, 4, -1
  0213f3c  bt 1, 0x213f48
  0213f40  bf 29, 0x2140e4
  0213f44  b 0x213f54
  0213f48  bf 25, 0x213f60
  0213f4c  bf 5, 0x214014
  0213f50  b 0x2140e4
  0213f54  li 3, 1
  0213f58  stb 3, 32(31)
  0213f5c  b 0x2140e4
  0213f60  lis 3, 33
  0213f64  lfs 1, 0(30)
  0213f68  addi 29, 3, 16092
  0213f6c  lis 3, -32736
  0213f70  lfs 2, 0(29)
  0213f74  lfs 3, 4(29)
  0213f78  fsubs 2, 2, 1
  0213f7c  fsubs 3, 3, 1
  0213f80  lfs 5, 8(29)
  0213f84  ori 3, 3, 65312
  0213f88  lis 4, -32736
  0213f8c  ori 4, 4, 32800
  0213f90  fsub 4, 1, 2
  0213f94  fsel 1, 4, 2, 1
  0213f98  lfs 2, 12(29)
  0213f9c  fsub 4, 3, 1
  0213fa0  fsel 1, 4, 3, 1
  0213fa4  lfs 3, 16(29)
  0213fa8  lfs 4, 20(29)
  0213fac  lfs 7, 24(29)
  0213fb0  lfs 9, 28(29)
  0213fb4  fmuls 6, 1, 1
  0213fb8  fmuls 8, 6, 1
  0213fbc  fmadds 1, 8, 5, 1
  0213fc0  fmuls 10, 6, 8
  0213fc4  fmr 5, 9
  0213fc8  fmuls 8, 6, 10
  0213fcc  fmadds 1, 10, 2, 1
  0213fd0  fmuls 2, 6, 8
  0213fd4  fmadds 1, 8, 3, 1
  0213fd8  fmadds 1, 2, 4, 1
  0213fdc  fadds 1, 1, 7
  0213fe0  fmuls 1, 1, 5
  0213fe4  bl 0x5027bc
  0213fe8  nop
  0213fec  stw 3, 144(31)
  0213ff0  lis 3, 114
  0213ff4  lfs 3, 32(29)
  0213ff8  lfs 1, 0(30)
  0213ffc  lfs 2, -3052(3)
  0214000  fmuls 2, 2, 3
  0214004  bl 0x502578
  0214008  nop
  021400c  stfs 1, 0(30)
  0214010  b 0x2140e4
  0214014  lis 3, 33
  0214018  lfs 1, 0(30)
  021401c  addi 29, 3, 16092
  0214020  lis 3, -32736
  0214024  lfs 2, 0(29)
  0214028  lfs 3, 4(29)
  021402c  fsubs 2, 2, 1
  0214030  fsubs 3, 3, 1
  0214034  ori 3, 3, 8447
  0214038  lis 4, -32736
  021403c  ori 4, 4, 8320
  0214040  fsub 4, 1, 2
  0214044  fsel 1, 4, 2, 1
  0214048  lfs 2, 8(29)
  021404c  lfs 4, 12(29)
  0214050  fsub 5, 3, 1
  0214054  fsel 1, 5, 3, 1
  0214058  lfs 3, 16(29)
  021405c  lfs 5, 20(29)
  0214060  lfs 7, 24(29)
  0214064  lfs 9, 28(29)
  0214068  fmuls 6, 1, 1
  021406c  fmuls 8, 6, 1
  0214070  fmadds 1, 8, 2, 1
  0214074  fmuls 10, 6, 8
  0214078  fmr 2, 9
  021407c  fmuls 8, 6, 10
  0214080  fmadds 1, 10, 4, 1
  0214084  fmuls 4, 6, 8
  0214088  fmadds 1, 8, 3, 1
  021408c  fmadds 1, 4, 5, 1
  0214090  fadds 1, 1, 7
  0214094  fmuls 1, 1, 2
  0214098  bl 0x5027bc
  021409c  nop
  02140a0  stw 3, 144(31)
  02140a4  lis 3, 114
  02140a8  lfs 3, 36(29)
  02140ac  lfs 1, 0(30)
  02140b0  lfs 2, -3052(3)
  02140b4  fmuls 2, 2, 3
  02140b8  bl 0x502578
  02140bc  nop
  02140c0  addic 3, 30, 4
  02140c4  stfs 1, 0(30)
  02140c8  bl 0x4fff60
  02140cc  nop
  02140d0  cmpwi 3, 0
  02140d4  bt 2, 0x2140e4
  02140d8  ori 3, 31, 0
  02140dc  li 4, 0
  02140e0  bl 0x213dd8
  02140e4  ld 0, 160(1)
  02140e8  mtlr 0
  02140ec  ld 29, 120(1)
  02140f0  ld 30, 128(1)
  02140f4  ld 31, 136(1)
  02140f8  addi 1, 1, 144
  02140fc  blr
