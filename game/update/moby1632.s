# game/update/moby1632.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1632_002a4e7c:   # 0x2a4e7c, 0x14 bytes
  02a4e7c  lis 3, 123
  02a4e80  lis 4, 1
  02a4e84  addic 3, 3, -14060
  02a4e88  stw 4, 72(3)
  02a4e8c  blr

FUN_002a4e90:   # 0x2a4e90, 0xf0 bytes
  02a4e90  stdu 1, -144(1)
  02a4e94  mflr 0
  02a4e98  std 0, 160(1)
  02a4e9c  stfd 31, 136(1)
  02a4ea0  std 30, 120(1)
  02a4ea4  ori 30, 3, 0
  02a4ea8  li 3, 1632
  02a4eac  std 31, 128(1)
  02a4eb0  fmr 31, 1
  02a4eb4  std 29, 112(1)
  02a4eb8  ori 31, 4, 0
  02a4ebc  bl 0xefa28
  02a4ec0  nop
  02a4ec4  ori 29, 3, 0
  02a4ec8  cmpwi 29, 0
  02a4ecc  bt 2, 0x2a4f5c
  02a4ed0  li 4, 255
  02a4ed4  lwz 3, 120(29)
  02a4ed8  li 5, 1
  02a4edc  li 6, 0
  02a4ee0  stb 4, 48(29)
  02a4ee4  sth 4, 50(29)
  02a4ee8  stb 5, 49(29)
  02a4eec  stb 6, 32(29)
  02a4ef0  stw 30, 96(3)
  02a4ef4  lwz 4, 36(29)
  02a4ef8  cmpwi 30, 0
  02a4efc  lfs 1, 36(4)
  02a4f00  fmuls 1, 1, 31
  02a4f04  stfs 1, 44(29)
  02a4f08  lfs 1, 0(31)
  02a4f0c  stfs 1, 16(29)
  02a4f10  lfs 1, 4(31)
  02a4f14  stfs 1, 20(29)
  02a4f18  lfs 1, 8(31)
  02a4f1c  stfs 1, 24(29)
  02a4f20  lfs 1, 12(31)
  02a4f24  stfs 1, 28(29)
  02a4f28  bt 2, 0x2a4f38
  02a4f2c  lhz 4, 166(30)
  02a4f30  extsh 4, 4
  02a4f34  stw 4, 100(3)
  02a4f38  ori 4, 3, 0
  02a4f3c  ori 3, 29, 0
  02a4f40  addic 5, 4, 32
  02a4f44  stw 5, 0(4)
  02a4f48  lhz 4, 52(29)
  02a4f4c  ori 4, 4, 32
  02a4f50  sth 4, 52(29)
  02a4f54  bl 0xf31a8
  02a4f58  nop
  02a4f5c  ori 3, 29, 0
  02a4f60  ld 0, 160(1)
  02a4f64  mtlr 0
  02a4f68  lfd 31, 136(1)
  02a4f6c  ld 29, 112(1)
  02a4f70  ld 30, 120(1)
  02a4f74  ld 31, 128(1)
  02a4f78  addi 1, 1, 144
  02a4f7c  blr

UpdateMoby_1632:   # 0x2a4fa0, 0x1a4 bytes
  02a4fa0  stdu 1, -176(1)
  02a4fa4  mflr 0
  02a4fa8  std 0, 192(1)
  02a4fac  std 31, 168(1)
  02a4fb0  std 30, 160(1)
  02a4fb4  ori 31, 3, 0
  02a4fb8  lwz 30, 120(31)
  02a4fbc  lwz 3, 96(30)
  02a4fc0  cmpwi 3, 0
  02a4fc4  bt 2, 0x2a4ff0
  02a4fc8  lhz 4, 166(3)
  02a4fcc  lwz 5, 100(30)
  02a4fd0  extsh 4, 4
  02a4fd4  cmpw 4, 5
  02a4fd8  bf 2, 0x2a4ff0
  02a4fdc  lbz 3, 32(3)
  02a4fe0  cmpwi 3, 254
  02a4fe4  cmpwi 1, 3, 253
  02a4fe8  bt 2, 0x2a4ff0
  02a4fec  bf 6, 0x2a5000
  02a4ff0  ori 3, 31, 0
  02a4ff4  bl 0xefb38
  02a4ff8  nop
  02a4ffc  b 0x2a512c
  02a5000  ori 3, 31, 0
  02a5004  li 4, -1
  02a5008  li 5, 0
  02a500c  bl 0x10675c
  02a5010  nop
  02a5014  cmpwi 3, 0
  02a5018  bt 2, 0x2a5124
  02a501c  li 4, 16
  02a5020  li 5, 24
  02a5024  addi 6, 4, 16
  02a5028  li 8, 20
  02a502c  addi 7, 5, 16
  02a5030  <unknown>
  02a5034  addi 4, 8, 16
  02a5038  <unknown>
  02a503c  li 9, 28
  02a5040  <unknown>
  02a5044  vor 2, 2, 3
  02a5048  addi 6, 9, 16
  02a504c  <unknown>
  02a5050  <unknown>
  02a5054  <unknown>
  02a5058  li 4, 48
  02a505c  vor 3, 3, 5
  02a5060  vor 4, 4, 6
  02a5064  <unknown>
  02a5068  addi 5, 4, 16
  02a506c  <unknown>
  02a5070  lis 9, 42
  02a5074  lwz 6, 32(3)
  02a5078  lwz 7, 36(3)
  02a507c  stw 6, 128(1)
  02a5080  lbz 6, 40(3)
  02a5084  stw 7, 132(1)
  02a5088  lbz 8, 41(3)
  02a508c  stb 6, 136(1)
  02a5090  li 7, 144
  02a5094  lhz 6, 42(3)
  02a5098  stb 8, 137(1)
  02a509c  lfs 1, 44(3)
  02a50a0  li 8, 16
  02a50a4  sth 6, 138(1)
  02a50a8  vor 5, 5, 6
  02a50ac  stfs 1, 140(1)
  02a50b0  addi 6, 9, 20352
  02a50b4  <unknown>
  02a50b8  <unknown>
  02a50bc  vmrghw 2, 2, 3
  02a50c0  li 3, 128
  02a50c4  vor 3, 6, 7
  02a50c8  li 5, 80
  02a50cc  vmrghw 4, 4, 5
  02a50d0  li 4, 64
  02a50d4  lvx 6, 7, 1
  02a50d8  lvx 5, 0, 6
  02a50dc  lvx 7, 8, 6
  02a50e0  vperm 2, 2, 4, 5
  02a50e4  lwz 7, 96(30)
  02a50e8  li 6, 96
  02a50ec  vperm 3, 3, 6, 7
  02a50f0  lvx 4, 3, 1
  02a50f4  ori 3, 7, 0
  02a50f8  stvx 4, 5, 1
  02a50fc  ld 7, 80(1)
  02a5100  stvx 2, 4, 1
  02a5104  stvx 3, 6, 1
  02a5108  ld 5, 64(1)
  02a510c  ld 6, 72(1)
  02a5110  ld 8, 88(1)
  02a5114  ld 9, 96(1)
  02a5118  ld 10, 104(1)
  02a511c  bl 0x105ab4
  02a5120  nop
  02a5124  li 3, 255
  02a5128  stb 3, 164(31)
  02a512c  ld 0, 192(1)
  02a5130  mtlr 0
  02a5134  ld 30, 160(1)
  02a5138  ld 31, 168(1)
  02a513c  addi 1, 1, 176
  02a5140  blr
