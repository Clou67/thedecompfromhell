# game/update/moby667.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M667_00409e18:   # 0x409e18, 0x14 bytes
  0409e18  lis 3, 133
  0409e1c  lis 4, 1
  0409e20  addic 3, 3, 19940
  0409e24  stw 4, 72(3)
  0409e28  blr

UpdateMoby_667:   # 0x409e30, 0x244 bytes
  0409e30  stdu 1, -128(1)
  0409e34  mflr 0
  0409e38  std 0, 144(1)
  0409e3c  std 31, 120(1)
  0409e40  ori 31, 3, 0
  0409e44  li 4, 0
  0409e48  ori 6, 4, 0
  0409e4c  lwz 3, 120(31)
  0409e50  lwz 5, 0(3)
  0409e54  lbz 7, 28(3)
  0409e58  cmpwi 5, -1
  0409e5c  bt 2, 0x409e74
  0409e60  lis 4, 164
  0409e64  slwi 5, 5, 8
  0409e68  lwz 4, -28512(4)
  0409e6c  addc 4, 4, 5
  0409e70  clrldi 4, 4, 32
  0409e74  extsb 5, 7
  0409e78  cmpwi 5, 0
  0409e7c  cmpwi 1, 5, 2
  0409e80  cmpwi 6, 5, 1
  0409e84  cmpwi 7, 5, -1
  0409e88  bt 1, 0x409e98
  0409e8c  cmpwi 1, 4, 0
  0409e90  bf 29, 0x40a060
  0409e94  b 0x409ea4
  0409e98  bf 25, 0x409f0c
  0409e9c  bf 5, 0x409fb8
  0409ea0  b 0x40a060
  0409ea4  bf 6, 0x409ed8
  0409ea8  lis 3, 101
  0409eac  lhz 4, 178(31)
  0409eb0  lhz 5, 166(31)
  0409eb4  addic 3, 3, 28588
  0409eb8  extsh 4, 4
  0409ebc  extsh 5, 5
  0409ec0  bl 0x5cd098
  0409ec4  nop
  0409ec8  ori 3, 31, 0
  0409ecc  bl 0xefb38
  0409ed0  nop
  0409ed4  b 0x40a060
  0409ed8  li 4, 0
  0409edc  lbz 7, 29(3)
  0409ee0  li 5, 2
  0409ee4  subc 4, 4, 7
  0409ee8  li 6, 1
  0409eec  cntlzw 4, 4
  0409ef0  subc 5, 5, 6
  0409ef4  sldi 4, 4, 58
  0409ef8  sradi 4, 4, 63
  0409efc  and 4, 4, 5
  0409f00  addc 4, 6, 4
  0409f04  stb 4, 28(3)
  0409f08  b 0x40a060
  0409f0c  ori 5, 3, 0
  0409f10  lbz 7, 10(5)
  0409f14  lbz 8, 32(4)
  0409f18  extsb 7, 7
  0409f1c  cmpw 8, 7
  0409f20  bf 2, 0x409f34
  0409f24  lwz 4, 16(3)
  0409f28  cmpwi 4, -1
  0409f2c  bf 2, 0x409f48
  0409f30  b 0x409f84
  0409f34  addic 6, 6, 1
  0409f38  addic 5, 5, 1
  0409f3c  cmpwi 6, 6
  0409f40  bt 0, 0x409f10
  0409f44  b 0x40a060
  0409f48  lis 5, 164
  0409f4c  slwi 4, 4, 8
  0409f50  lwz 6, -28512(5)
  0409f54  lbz 5, 21(3)
  0409f58  addc 4, 6, 4
  0409f5c  extsb 6, 5
  0409f60  clrldi 4, 4, 32
  0409f64  cmpwi 6, -1
  0409f68  bt 2, 0x409f70
  0409f6c  stb 5, 32(4)
  0409f70  lbz 5, 23(3)
  0409f74  extsb 6, 5
  0409f78  cmpwi 6, -1
  0409f7c  bt 2, 0x409f84
  0409f80  stb 5, 188(4)
  0409f84  lbz 4, 25(3)
  0409f88  extsb 5, 4
  0409f8c  cmpwi 5, -1
  0409f90  bt 2, 0x409f98
  0409f94  stb 4, 32(31)
  0409f98  lbz 4, 27(3)
  0409f9c  extsb 5, 4
  0409fa0  cmpwi 5, -1
  0409fa4  bt 2, 0x409fac
  0409fa8  stb 4, 188(31)
  0409fac  li 4, 2
  0409fb0  stb 4, 28(3)
  0409fb4  b 0x40a060
  0409fb8  ori 5, 3, 0
  0409fbc  lbz 7, 4(5)
  0409fc0  lbz 8, 32(4)
  0409fc4  extsb 7, 7
  0409fc8  cmpw 8, 7
  0409fcc  bf 2, 0x409fe0
  0409fd0  lwz 4, 16(3)
  0409fd4  cmpwi 4, -1
  0409fd8  bf 2, 0x409ff4
  0409fdc  b 0x40a030
  0409fe0  addic 6, 6, 1
  0409fe4  addic 5, 5, 1
  0409fe8  cmpwi 6, 6
  0409fec  bt 0, 0x409fbc
  0409ff0  b 0x40a060
  0409ff4  lis 5, 164
  0409ff8  slwi 4, 4, 8
  0409ffc  lwz 6, -28512(5)
  040a000  lbz 5, 20(3)
  040a004  addc 4, 6, 4
  040a008  extsb 6, 5
  040a00c  clrldi 4, 4, 32
  040a010  cmpwi 6, -1
  040a014  bt 2, 0x40a01c
  040a018  stb 5, 32(4)
  040a01c  lbz 5, 22(3)
  040a020  extsb 6, 5
  040a024  cmpwi 6, -1
  040a028  bt 2, 0x40a030
  040a02c  stb 5, 188(4)
  040a030  lbz 4, 24(3)
  040a034  extsb 5, 4
  040a038  cmpwi 5, -1
  040a03c  bt 2, 0x40a044
  040a040  stb 4, 32(31)
  040a044  lbz 4, 26(3)
  040a048  extsb 5, 4
  040a04c  cmpwi 5, -1
  040a050  bt 2, 0x40a058
  040a054  stb 4, 188(31)
  040a058  li 4, 1
  040a05c  stb 4, 28(3)
  040a060  ld 0, 144(1)
  040a064  mtlr 0
  040a068  ld 31, 120(1)
  040a06c  addi 1, 1, 128
  040a070  blr
