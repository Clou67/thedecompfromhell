# game/update/moby940.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M940_004c4cf0:   # 0x4c4cf0, 0x14 bytes
  04c4cf0  lis 3, 143
  04c4cf4  lis 4, 1
  04c4cf8  addic 3, 3, 19716
  04c4cfc  stw 4, 72(3)
  04c4d00  blr

M940_004c4d08:   # 0x4c4d08, 0x3c bytes
  04c4d08  lwz 4, 120(3)
  04c4d0c  lwz 5, 420(4)
  04c4d10  lwz 6, 0(5)
  04c4d14  cmpw 6, 3
  04c4d18  bf 2, 0x4c4d28
  04c4d1c  li 3, 0
  04c4d20  stw 3, 0(5)
  04c4d24  b 0x4c4d40
  04c4d28  lwz 4, 424(4)
  04c4d2c  lwz 5, 0(4)
  04c4d30  cmpw 5, 3
  04c4d34  bf 2, 0x4c4d40
  04c4d38  li 3, 0
  04c4d3c  stw 3, 0(4)
  04c4d40  blr

M940_004c4d44:   # 0x4c4d44, 0x34 bytes
  04c4d44  lwz 4, 120(3)
  04c4d48  lwz 5, 420(4)
  04c4d4c  lwz 6, 0(5)
  04c4d50  cmpwi 6, 0
  04c4d54  bf 2, 0x4c4d60
  04c4d58  stw 3, 0(5)
  04c4d5c  b 0x4c4d74
  04c4d60  lwz 4, 424(4)
  04c4d64  lwz 5, 0(4)
  04c4d68  cmpwi 5, 0
  04c4d6c  bf 2, 0x4c4d74
  04c4d70  stw 3, 0(4)
  04c4d74  blr

M940_004c4d78:   # 0x4c4d78, 0x64 bytes
  04c4d78  lwz 3, 120(3)
  04c4d7c  li 4, 0
  04c4d80  li 5, 0
  04c4d84  li 8, 1
  04c4d88  li 6, 0
  04c4d8c  subc 5, 5, 8
  04c4d90  lwz 7, 420(3)
  04c4d94  lwz 3, 424(3)
  04c4d98  lwz 7, 0(7)
  04c4d9c  lwz 3, 0(3)
  04c4da0  subc 4, 4, 7
  04c4da4  subc 3, 6, 3
  04c4da8  cntlzw 4, 4
  04c4dac  cntlzw 3, 3
  04c4db0  sldi 4, 4, 58
  04c4db4  sldi 3, 3, 58
  04c4db8  sradi 4, 4, 63
  04c4dbc  sradi 3, 3, 63
  04c4dc0  and 4, 4, 5
  04c4dc4  addc 4, 8, 4
  04c4dc8  addic 5, 4, 1
  04c4dcc  subc 4, 4, 5
  04c4dd0  and 3, 3, 4
  04c4dd4  addc 3, 5, 3
  04c4dd8  blr

M940_004c4df8:   # 0x4c4df8, 0x7c8 bytes
  04c4df8  stdu 1, -256(1)
  04c4dfc  mflr 0
  04c4e00  std 0, 272(1)
  04c4e04  stfd 31, 248(1)
  04c4e08  std 31, 240(1)
  04c4e0c  std 29, 224(1)
  04c4e10  ori 31, 3, 0
  04c4e14  lis 3, 76
  04c4e18  std 30, 232(1)
  04c4e1c  addi 29, 3, 19932
  04c4e20  lwz 30, 120(31)
  04c4e24  std 28, 216(1)
  04c4e28  addic 3, 30, 408
  04c4e2c  bl 0x4fff60
  04c4e30  nop
  04c4e34  lwz 3, 36(31)
  04c4e38  lis 4, 143
  04c4e3c  li 6, 0
  04c4e40  li 5, 0
  04c4e44  lfs 1, 36(3)
  04c4e48  lfs 2, 19844(4)
  04c4e4c  ori 3, 31, 0
  04c4e50  fmuls 1, 1, 2
  04c4e54  lis 4, 51
  04c4e58  stfs 1, 44(31)
  04c4e5c  lfs 31, 0(29)
  04c4e60  stw 6, 116(1)
  04c4e64  bl 0x10675c
  04c4e68  nop
  04c4e6c  ori 29, 3, 0
  04c4e70  addic 5, 30, 32
  04c4e74  ori 4, 29, 0
  04c4e78  li 6, 0
  04c4e7c  addic 7, 1, 112
  04c4e80  li 9, 0
  04c4e84  addic 8, 1, 116
  04c4e88  ori 3, 31, 0
  04c4e8c  li 10, 4
  04c4e90  bl 0x106840
  04c4e94  nop
  04c4e98  lwz 4, 112(1)
  04c4e9c  ori 28, 3, 0
  04c4ea0  cmpwi 4, 1
  04c4ea4  bt 2, 0x4c54b0
  04c4ea8  lbz 3, 32(31)
  04c4eac  cmpwi 3, 7
  04c4eb0  bt 2, 0x4c54b0
  04c4eb4  lfs 1, 32(30)
  04c4eb8  lfs 2, 116(1)
  04c4ebc  fsubs 1, 1, 2
  04c4ec0  fcmpu 0, 1, 31
  04c4ec4  stfs 1, 32(30)
  04c4ec8  bt 1, 0x4c4ed0
  04c4ecc  li 28, 1
  04c4ed0  lis 3, 76
  04c4ed4  addi 3, 3, 19932
  04c4ed8  lfs 1, 4(3)
  04c4edc  bl 0x502758
  04c4ee0  nop
  04c4ee4  lis 4, 16128
  04c4ee8  lis 5, 143
  04c4eec  lis 6, 114
  04c4ef0  cmpwi 28, 2
  04c4ef4  stw 4, 152(30)
  04c4ef8  lis 4, 14851
  04c4efc  lfs 1, 19824(5)
  04c4f00  lfs 2, -3048(6)
  04c4f04  ori 4, 4, 4719
  04c4f08  stw 3, 144(30)
  04c4f0c  fmuls 1, 1, 2
  04c4f10  li 3, 0
  04c4f14  li 5, 9
  04c4f18  stw 4, 132(30)
  04c4f1c  stb 3, 173(30)
  04c4f20  stw 5, 148(30)
  04c4f24  stfs 1, 128(30)
  04c4f28  bt 1, 0x4c4f40
  04c4f2c  cmpwi 28, -1
  04c4f30  cmpwi 1, 28, 0
  04c4f34  bf 1, 0x4c54a0
  04c4f38  bf 5, 0x4c54a0
  04c4f3c  b 0x4c5214
  04c4f40  cmpwi 28, 10
  04c4f44  cmpwi 1, 28, 8
  04c4f48  bt 1, 0x4c54a0
  04c4f4c  bf 5, 0x4c4f5c
  04c4f50  li 3, 250
  04c4f54  stb 3, 103(30)
  04c4f58  b 0x4c54a0
  04c4f5c  lis 3, 143
  04c4f60  lis 4, 114
  04c4f64  lis 5, 143
  04c4f68  lfs 1, 19832(3)
  04c4f6c  lfs 2, -3052(4)
  04c4f70  lis 3, 16448
  04c4f74  lis 4, 16576
  04c4f78  fmuls 1, 1, 2
  04c4f7c  stfs 1, 136(30)
  04c4f80  lfs 1, 19828(5)
  04c4f84  stw 3, 192(30)
  04c4f88  fmuls 1, 1, 2
  04c4f8c  stw 4, 196(30)
  04c4f90  stfs 1, 140(30)
  04c4f94  lwz 3, 32(29)
  04c4f98  lfs 1, 16(31)
  04c4f9c  lfs 2, 20(31)
  04c4fa0  lfs 3, 16(3)
  04c4fa4  lfs 4, 20(3)
  04c4fa8  fsubs 1, 1, 3
  04c4fac  fsubs 2, 2, 4
  04c4fb0  lis 3, 115
  04c4fb4  addic 3, 3, 22784
  04c4fb8  fabs 3, 1
  04c4fbc  fabs 4, 2
  04c4fc0  stfs 1, 140(1)
  04c4fc4  stfs 2, 144(1)
  04c4fc8  fsubs 1, 3, 4
  04c4fcc  stfs 1, 148(1)
  04c4fd0  lwz 4, 140(1)
  04c4fd4  lfs 1, 140(1)
  04c4fd8  lwz 5, 144(1)
  04c4fdc  lfs 2, 144(1)
  04c4fe0  fabs 1, 1
  04c4fe4  lwz 6, 148(1)
  04c4fe8  rlwinm 5, 5, 3, 29, 29
  04c4fec  lfs 5, 148(1)
  04c4ff0  fabs 2, 2
  04c4ff4  rlwimi 5, 6, 2, 30, 30
  04c4ff8  fsub 6, 5, 31
  04c4ffc  fsub 5, 5, 31
  04c5000  rlwimi 5, 4, 4, 28, 28
  04c5004  ori 4, 3, 0
  04c5008  rlwimi 4, 5, 2, 26, 28
  04c500c  slwi 5, 5, 2
  04c5010  clrldi 4, 4, 32
  04c5014  fsel 4, 6, 1, 4
  04c5018  lfsx 1, 3, 5
  04c501c  fsel 3, 5, 2, 3
  04c5020  lfs 2, 4(4)
  04c5024  fcmpu 0, 4, 31
  04c5028  bt 1, 0x4c5030
  04c502c  b 0x4c5150
  04c5030  fsubs 5, 3, 4
  04c5034  fadds 3, 3, 4
  04c5038  addic 3, 1, 16
  04c503c  li 7, 2
  04c5040  addic 5, 3, 184
  04c5044  addic 4, 3, 168
  04c5048  mtctr 7
  04c504c  fdivs 3, 5, 3
  04c5050  fmuls 4, 3, 3
  04c5054  stfs 3, 196(1)
  04c5058  stfs 3, 188(1)
  04c505c  stfs 3, 192(1)
  04c5060  stfs 3, 184(1)
  04c5064  lfs 6, 196(1)
  04c5068  lfs 7, 188(1)
  04c506c  lfs 8, 192(1)
  04c5070  fmuls 5, 4, 4
  04c5074  fmuls 7, 7, 4
  04c5078  fmuls 6, 6, 5
  04c507c  fmuls 3, 5, 5
  04c5080  fmuls 5, 8, 5
  04c5084  stfs 7, 188(1)
  04c5088  fmuls 4, 6, 4
  04c508c  stfs 5, 192(1)
  04c5090  stfs 4, 196(1)
  04c5094  lfs 4, 168(3)
  04c5098  fmuls 4, 4, 3
  04c509c  stfs 4, 184(3)
  04c50a0  lfs 4, 4(4)
  04c50a4  addic 4, 4, 8
  04c50a8  fmuls 4, 4, 3
  04c50ac  addic 3, 3, 8
  04c50b0  stfs 4, 4(5)
  04c50b4  addic 5, 5, 8
  04c50b8  bdnz 0x4c5094
  04c50bc  li 5, 4
  04c50c0  ori 3, 1, 0
  04c50c4  mtctr 5
  04c50c8  lis 4, 115
  04c50cc  addic 5, 3, 184
  04c50d0  addic 4, 4, 22752
  04c50d4  ori 6, 5, 0
  04c50d8  lfs 3, 184(3)
  04c50dc  lfs 4, 0(4)
  04c50e0  fmuls 3, 3, 4
  04c50e4  lfs 4, 4(4)
  04c50e8  addic 4, 4, 8
  04c50ec  stfs 3, 184(3)
  04c50f0  lfs 3, 4(5)
  04c50f4  addic 3, 3, 8
  04c50f8  fmuls 3, 3, 4
  04c50fc  stfs 3, 4(5)
  04c5100  addic 5, 5, 8
  04c5104  bdnz 0x4c50d8
  04c5108  ori 3, 1, 0
  04c510c  mtctr 7
  04c5110  lfs 3, 184(3)
  04c5114  lfs 4, 4(6)
  04c5118  fadds 3, 31, 3
  04c511c  lfs 5, 8(6)
  04c5120  addic 3, 3, 16
  04c5124  lfs 31, 12(6)
  04c5128  addic 6, 6, 16
  04c512c  fadds 3, 3, 4
  04c5130  fadds 3, 3, 5
  04c5134  fadds 31, 3, 31
  04c5138  bdnz 0x4c5110
  04c513c  lis 3, 76
  04c5140  addi 3, 3, 19932
  04c5144  lfs 3, 8(3)
  04c5148  fadds 31, 31, 3
  04c514c  fmadds 31, 31, 1, 2
  04c5150  stfs 31, 120(1)
  04c5154  lfs 1, 16(29)
  04c5158  addic 5, 1, 120
  04c515c  lfs 2, 24(29)
  04c5160  addic 6, 30, 136
  04c5164  stfs 1, 48(1)
  04c5168  addic 7, 30, 140
  04c516c  stfs 2, 56(1)
  04c5170  lfs 1, 20(29)
  04c5174  lfs 2, 28(29)
  04c5178  stfs 1, 52(1)
  04c517c  stfs 2, 60(1)
  04c5180  ld 3, 48(1)
  04c5184  ld 4, 56(1)
  04c5188  bl 0x107de8
  04c518c  nop
  04c5190  ori 3, 31, 0
  04c5194  addic 4, 30, 112
  04c5198  lfs 1, 120(1)
  04c519c  li 6, 4
  04c51a0  li 7, 1
  04c51a4  li 8, 0
  04c51a8  bl 0x10ad80
  04c51ac  nop
  04c51b0  li 3, 6
  04c51b4  lis 5, 76
  04c51b8  vspltisw 3, -1
  04c51bc  li 4, 12
  04c51c0  li 6, 120
  04c51c4  stb 3, 32(31)
  04c51c8  li 7, -3056
  04c51cc  addi 3, 5, 19932
  04c51d0  vslw 3, 3, 3
  04c51d4  lis 5, 114
  04c51d8  stb 6, 103(30)
  04c51dc  lvlx 2, 4, 3
  04c51e0  lvlx 4, 7, 5
  04c51e4  vspltw 2, 2, 0
  04c51e8  li 3, 408
  04c51ec  addi 4, 3, 16
  04c51f0  vmaddfp 2, 4, 2, 3
  04c51f4  lvlx 3, 3, 30
  04c51f8  lvrx 4, 4, 30
  04c51fc  vor 3, 3, 4
  04c5200  vctsxs 2, 2, 0
  04c5204  vadduwm 2, 3, 2
  04c5208  vspltw 2, 2, 0
  04c520c  stvewx 2, 3, 30
  04c5210  b 0x4c54a0
  04c5214  lis 3, 143
  04c5218  lis 4, 114
  04c521c  lis 5, 143
  04c5220  lis 6, 114
  04c5224  lis 7, 143
  04c5228  lfs 1, 19824(3)
  04c522c  lfs 2, -3048(4)
  04c5230  li 3, 0
  04c5234  lhz 4, 52(31)
  04c5238  fmuls 1, 1, 2
  04c523c  rlwimi 4, 3, 0, 19, 19
  04c5240  lis 3, 16736
  04c5244  sth 4, 52(31)
  04c5248  lis 4, 16864
  04c524c  stfs 1, 128(30)
  04c5250  lfs 1, 19840(5)
  04c5254  lfs 2, -3052(6)
  04c5258  fmuls 1, 1, 2
  04c525c  stfs 1, 136(30)
  04c5260  lfs 1, 19836(7)
  04c5264  stw 3, 192(30)
  04c5268  fmuls 1, 1, 2
  04c526c  stw 4, 196(30)
  04c5270  stfs 1, 140(30)
  04c5274  lwz 3, 32(29)
  04c5278  lfs 1, 16(31)
  04c527c  lfs 2, 20(31)
  04c5280  lfs 3, 16(3)
  04c5284  lfs 4, 20(3)
  04c5288  fsubs 1, 1, 3
  04c528c  fsubs 2, 2, 4
  04c5290  lis 3, 115
  04c5294  addic 3, 3, 22784
  04c5298  fabs 3, 1
  04c529c  fabs 4, 2
  04c52a0  stfs 1, 128(1)
  04c52a4  stfs 2, 132(1)
  04c52a8  fsubs 1, 3, 4
  04c52ac  stfs 1, 136(1)
  04c52b0  lwz 4, 128(1)
  04c52b4  lfs 1, 128(1)
  04c52b8  lwz 5, 132(1)
  04c52bc  lfs 2, 132(1)
  04c52c0  fabs 1, 1
  04c52c4  lwz 6, 136(1)
  04c52c8  rlwinm 5, 5, 3, 29, 29
  04c52cc  lfs 5, 136(1)
  04c52d0  fabs 2, 2
  04c52d4  rlwimi 5, 6, 2, 30, 30
  04c52d8  fsub 6, 5, 31
  04c52dc  fsub 5, 5, 31
  04c52e0  rlwimi 5, 4, 4, 28, 28
  04c52e4  ori 4, 3, 0
  04c52e8  rlwimi 4, 5, 2, 26, 28
  04c52ec  slwi 5, 5, 2
  04c52f0  clrldi 4, 4, 32
  04c52f4  fsel 4, 6, 1, 4
  04c52f8  lfsx 1, 3, 5
  04c52fc  fsel 3, 5, 2, 3
  04c5300  lfs 2, 4(4)
  04c5304  fcmpu 0, 4, 31
  04c5308  bt 1, 0x4c5310
  04c530c  b 0x4c5430
  04c5310  fsubs 5, 3, 4
  04c5314  fadds 3, 3, 4
  04c5318  addic 3, 1, 16
  04c531c  li 6, 2
  04c5320  addic 5, 3, 152
  04c5324  addic 4, 3, 136
  04c5328  mtctr 6
  04c532c  fdivs 3, 5, 3
  04c5330  fmuls 4, 3, 3
  04c5334  stfs 3, 164(1)
  04c5338  stfs 3, 156(1)
  04c533c  stfs 3, 160(1)
  04c5340  stfs 3, 152(1)
  04c5344  lfs 6, 164(1)
  04c5348  lfs 7, 156(1)
  04c534c  lfs 8, 160(1)
  04c5350  fmuls 5, 4, 4
  04c5354  fmuls 7, 7, 4
  04c5358  fmuls 6, 6, 5
  04c535c  fmuls 3, 5, 5
  04c5360  fmuls 5, 8, 5
  04c5364  stfs 7, 156(1)
  04c5368  fmuls 4, 6, 4
  04c536c  stfs 5, 160(1)
  04c5370  stfs 4, 164(1)
  04c5374  lfs 4, 136(3)
  04c5378  fmuls 4, 4, 3
  04c537c  stfs 4, 152(3)
  04c5380  lfs 4, 4(4)
  04c5384  addic 4, 4, 8
  04c5388  fmuls 4, 4, 3
  04c538c  addic 3, 3, 8
  04c5390  stfs 4, 4(5)
  04c5394  addic 5, 5, 8
  04c5398  bdnz 0x4c5374
  04c539c  li 5, 4
  04c53a0  ori 3, 1, 0
  04c53a4  mtctr 5
  04c53a8  lis 4, 115
  04c53ac  addic 5, 3, 152
  04c53b0  addic 4, 4, 22752
  04c53b4  ori 7, 5, 0
  04c53b8  lfs 3, 152(3)
  04c53bc  lfs 4, 0(4)
  04c53c0  fmuls 3, 3, 4
  04c53c4  lfs 4, 4(4)
  04c53c8  addic 4, 4, 8
  04c53cc  stfs 3, 152(3)
  04c53d0  lfs 3, 4(5)
  04c53d4  addic 3, 3, 8
  04c53d8  fmuls 3, 3, 4
  04c53dc  stfs 3, 4(5)
  04c53e0  addic 5, 5, 8
  04c53e4  bdnz 0x4c53b8
  04c53e8  ori 3, 1, 0
  04c53ec  mtctr 6
  04c53f0  lfs 3, 152(3)
  04c53f4  lfs 4, 4(7)
  04c53f8  fadds 3, 31, 3
  04c53fc  lfs 5, 8(7)
  04c5400  addic 3, 3, 16
  04c5404  lfs 31, 12(7)
  04c5408  addic 7, 7, 16
  04c540c  fadds 3, 3, 4
  04c5410  fadds 3, 3, 5
  04c5414  fadds 31, 3, 31
  04c5418  bdnz 0x4c53f0
  04c541c  lis 3, 76
  04c5420  addi 3, 3, 19932
  04c5424  lfs 3, 8(3)
  04c5428  fadds 31, 31, 3
  04c542c  fmadds 31, 31, 1, 2
  04c5430  stfs 31, 124(1)
  04c5434  lfs 1, 16(29)
  04c5438  addic 5, 1, 124
  04c543c  lfs 2, 24(29)
  04c5440  addic 6, 30, 136
  04c5444  stfs 1, 48(1)
  04c5448  addic 7, 30, 140
  04c544c  stfs 2, 56(1)
  04c5450  lfs 1, 20(29)
  04c5454  lfs 2, 28(29)
  04c5458  stfs 1, 52(1)
  04c545c  stfs 2, 60(1)
  04c5460  ld 3, 48(1)
  04c5464  ld 4, 56(1)
  04c5468  bl 0x107de8
  04c546c  nop
  04c5470  ori 3, 31, 0
  04c5474  addic 4, 30, 112
  04c5478  lfs 1, 124(1)
  04c547c  li 6, 5
  04c5480  li 7, 1
  04c5484  li 8, 0
  04c5488  bl 0x10ad80
  04c548c  nop
  04c5490  li 3, 7
  04c5494  li 4, 240
  04c5498  stb 3, 32(31)
  04c549c  stb 4, 103(30)
  04c54a0  addic 4, 30, 96
  04c54a4  ori 3, 31, 0
  04c54a8  bl 0x10c808
  04c54ac  nop
  04c54b0  li 5, 255
  04c54b4  addic 4, 30, 96
  04c54b8  ori 3, 31, 0
  04c54bc  stb 5, 164(31)
  04c54c0  bl 0x10c9a0
  04c54c4  nop
  04c54c8  lis 3, 76
  04c54cc  lwz 4, 384(30)
  04c54d0  lis 5, 165
  04c54d4  addi 3, 3, 19932
  04c54d8  slwi 4, 4, 2
  04c54dc  addic 5, 5, 7136
  04c54e0  extsw 6, 4
  04c54e4  lis 7, 16832
  04c54e8  lfs 1, 16(3)
  04c54ec  ori 3, 31, 0
  04c54f0  addic 4, 30, 288
  04c54f4  stw 7, 392(30)
  04c54f8  lwzx 5, 5, 6
  04c54fc  li 6, 0
  04c5500  li 7, 0
  04c5504  addic 8, 5, 16
  04c5508  lwz 9, 0(5)
  04c550c  extsw 9, 9
  04c5510  bl 0x111ba0
  04c5514  nop
  04c5518  cmpwi 3, 2
  04c551c  bt 2, 0x4c5580
  04c5520  lfs 1, 20(31)
  04c5524  lfs 2, 292(30)
  04c5528  lfs 3, 16(31)
  04c552c  fsubs 1, 1, 2
  04c5530  lfs 2, 288(30)
  04c5534  fsubs 2, 3, 2
  04c5538  fmuls 1, 1, 1
  04c553c  fmadds 1, 2, 2, 1
  04c5540  lfs 2, 392(30)
  04c5544  fsqrts 1, 1
  04c5548  fcmpu 0, 1, 2
  04c554c  bt 1, 0x4c5578
  04c5550  lfs 1, 24(31)
  04c5554  lfs 2, 296(30)
  04c5558  lis 3, 76
  04c555c  fsubs 1, 1, 2
  04c5560  addi 3, 3, 19932
  04c5564  lfs 2, 20(3)
  04c5568  fabs 1, 1
  04c556c  fcmpu 0, 1, 2
  04c5570  cror 6, 0, 2
  04c5574  bt 6, 0x4c5580
  04c5578  li 3, 2
  04c557c  stw 3, 356(30)
  04c5580  lwz 3, 352(30)
  04c5584  cmpwi 3, 0
  04c5588  bf 2, 0x4c559c
  04c558c  lis 3, 151
  04c5590  addic 3, 3, -25376
  04c5594  lwz 3, 8320(3)
  04c5598  stw 3, 352(30)
  04c559c  ld 0, 272(1)
  04c55a0  mtlr 0
  04c55a4  lfd 31, 248(1)
  04c55a8  ld 28, 216(1)
  04c55ac  ld 29, 224(1)
  04c55b0  ld 30, 232(1)
  04c55b4  ld 31, 240(1)
  04c55b8  addi 1, 1, 256
  04c55bc  blr

UpdateMoby_940:   # 0x4c5630, 0x1520 bytes
  04c5630  stdu 1, -720(1)
  04c5634  mflr 0
  04c5638  std 0, 736(1)
  04c563c  stfd 18, 608(1)
  04c5640  stfd 19, 616(1)
  04c5644  stfd 20, 624(1)
  04c5648  stfd 21, 632(1)
  04c564c  stfd 22, 640(1)
  04c5650  stfd 23, 648(1)
  04c5654  stfd 24, 656(1)
  04c5658  stfd 25, 664(1)
  04c565c  stfd 26, 672(1)
  04c5660  stfd 27, 680(1)
  04c5664  stfd 28, 688(1)
  04c5668  stfd 29, 696(1)
  04c566c  stfd 30, 704(1)
  04c5670  stfd 31, 712(1)
  04c5674  std 31, 600(1)
  04c5678  ori 31, 3, 0
  04c567c  std 30, 592(1)
  04c5680  lis 3, 76
  04c5684  addi 30, 3, 21952
  04c5688  std 29, 584(1)
  04c568c  ori 3, 31, 0
  04c5690  std 28, 576(1)
  04c5694  std 27, 568(1)
  04c5698  std 26, 560(1)
  04c569c  std 25, 552(1)
  04c56a0  lwz 29, 120(31)
  04c56a4  bl 0x4c4df8
  04c56a8  lfs 1, 0(30)
  04c56ac  ori 3, 31, 0
  04c56b0  lwz 30, 352(29)
  04c56b4  addic 5, 29, 640
  04c56b8  li 4, 0
  04c56bc  bl 0x119a18
  04c56c0  nop
  04c56c4  lbz 3, 32(31)
  04c56c8  cmpwi 3, 8
  04c56cc  bt 2, 0x4c6a6c
  04c56d0  cmpwi 3, 7
  04c56d4  bt 2, 0x4c6a18
  04c56d8  cmpwi 3, 6
  04c56dc  bt 2, 0x4c692c
  04c56e0  cmpwi 3, 5
  04c56e4  bt 2, 0x4c5e94
  04c56e8  cmpwi 3, 4
  04c56ec  bt 2, 0x4c5bac
  04c56f0  cmpwi 3, 3
  04c56f4  bt 2, 0x4c5854
  04c56f8  cmpwi 3, 2
  04c56fc  bt 2, 0x4c5820
  04c5700  cmpwi 3, 0
  04c5704  bf 2, 0x4c6aec
  04c5708  lis 4, 16256
  04c570c  li 5, 1
  04c5710  li 30, 0
  04c5714  addic 3, 29, 208
  04c5718  stw 4, 32(29)
  04c571c  sth 5, 36(29)
  04c5720  stb 30, 40(29)
  04c5724  stb 5, 41(29)
  04c5728  bl 0x100f8c
  04c572c  nop
  04c5730  lis 4, 76
  04c5734  lis 3, 16128
  04c5738  addi 28, 4, 21952
  04c573c  stw 3, 220(29)
  04c5740  stw 3, 216(29)
  04c5744  lfs 1, 4(28)
  04c5748  bl 0x502758
  04c574c  nop
  04c5750  stw 3, 208(29)
  04c5754  li 4, 4
  04c5758  lis 3, 114
  04c575c  lfs 1, 8(28)
  04c5760  lfs 2, -3052(3)
  04c5764  lwz 3, 420(29)
  04c5768  fmuls 1, 2, 1
  04c576c  stfs 1, 244(29)
  04c5770  lfs 1, 72(31)
  04c5774  stfs 1, 412(29)
  04c5778  stw 30, 0(3)
  04c577c  lwz 3, 424(29)
  04c5780  stw 30, 0(3)
  04c5784  lbz 3, 83(31)
  04c5788  stb 4, 32(31)
  04c578c  cmpwi 3, 0
  04c5790  bt 2, 0x4c57d0
  04c5794  lis 3, 76
  04c5798  lis 4, 114
  04c579c  addi 3, 3, 21952
  04c57a0  li 5, 0
  04c57a4  lfs 1, 12(3)
  04c57a8  lfs 2, -3056(4)
  04c57ac  ori 3, 31, 0
  04c57b0  li 4, 0
  04c57b4  fmuls 1, 2, 1
  04c57b8  fctiwz 1, 1
  04c57bc  stfd 1, 528(1)
  04c57c0  lwz 6, 532(1)
  04c57c4  extsw 6, 6
  04c57c8  bl 0xfddc0
  04c57cc  nop
  04c57d0  lwz 3, 432(29)
  04c57d4  cmpwi 3, 0
  04c57d8  bt 2, 0x4c6aec
  04c57dc  li 3, 2
  04c57e0  lis 4, 165
  04c57e4  addic 4, 4, 7136
  04c57e8  stb 3, 32(31)
  04c57ec  lwz 3, 436(29)
  04c57f0  slwi 3, 3, 2
  04c57f4  extsw 3, 3
  04c57f8  lwzx 3, 4, 3
  04c57fc  lfs 1, 16(3)
  04c5800  stfs 1, 16(31)
  04c5804  lfs 1, 20(3)
  04c5808  stfs 1, 20(31)
  04c580c  lfs 1, 24(3)
  04c5810  stfs 1, 24(31)
  04c5814  lfs 1, 28(3)
  04c5818  stfs 1, 28(31)
  04c581c  b 0x4c6aec
  04c5820  lwz 3, 356(29)
  04c5824  cmpwi 3, 2
  04c5828  bt 2, 0x4c6aec
  04c582c  lis 3, 76
  04c5830  lis 4, 114
  04c5834  addi 3, 3, 21952
  04c5838  lfs 1, 16(3)
  04c583c  lfs 2, -3052(4)
  04c5840  li 3, 3
  04c5844  fmuls 1, 2, 1
  04c5848  stfs 1, 244(29)
  04c584c  stb 3, 32(31)
  04c5850  b 0x4c6aec
  04c5854  lwz 4, 436(29)
  04c5858  lis 3, 165
  04c585c  lfs 1, 16(31)
  04c5860  slwi 4, 4, 2
  04c5864  addic 3, 3, 7136
  04c5868  extsw 4, 4
  04c586c  lis 5, 115
  04c5870  lwzx 3, 3, 4
  04c5874  lfs 2, 20(31)
  04c5878  addic 5, 5, 22784
  04c587c  lwz 4, 0(3)
  04c5880  slwi 4, 4, 4
  04c5884  addc 3, 3, 4
  04c5888  clrldi 3, 3, 32
  04c588c  lfs 31, 0(3)
  04c5890  lfs 30, 4(3)
  04c5894  fsubs 1, 31, 1
  04c5898  fsubs 2, 30, 2
  04c589c  lis 3, 76
  04c58a0  addi 4, 3, 21952
  04c58a4  addic 3, 31, 72
  04c58a8  fabs 3, 1
  04c58ac  fabs 5, 2
  04c58b0  stfs 1, 352(1)
  04c58b4  stfs 2, 356(1)
  04c58b8  fsubs 1, 3, 5
  04c58bc  stfs 1, 360(1)
  04c58c0  lwz 6, 352(1)
  04c58c4  lfs 4, 20(4)
  04c58c8  lfs 1, 352(1)
  04c58cc  lwz 4, 356(1)
  04c58d0  lfs 2, 356(1)
  04c58d4  fabs 1, 1
  04c58d8  lwz 7, 360(1)
  04c58dc  rlwinm 4, 4, 3, 29, 29
  04c58e0  fabs 6, 2
  04c58e4  lfs 2, 360(1)
  04c58e8  rlwimi 4, 7, 2, 30, 30
  04c58ec  fsub 7, 2, 4
  04c58f0  rlwimi 4, 6, 4, 28, 28
  04c58f4  fsub 8, 2, 4
  04c58f8  ori 6, 5, 0
  04c58fc  rlwimi 6, 4, 2, 26, 28
  04c5900  slwi 4, 4, 2
  04c5904  clrldi 6, 6, 32
  04c5908  fsel 5, 7, 1, 5
  04c590c  lfsx 1, 5, 4
  04c5910  lfs 2, 4(6)
  04c5914  fsel 3, 8, 6, 3
  04c5918  fcmpu 0, 5, 4
  04c591c  bt 1, 0x4c5924
  04c5920  b 0x4c5a44
  04c5924  fsubs 6, 3, 5
  04c5928  fadds 3, 3, 5
  04c592c  addic 4, 1, 16
  04c5930  li 7, 2
  04c5934  addic 6, 4, 492
  04c5938  addic 5, 4, 476
  04c593c  mtctr 7
  04c5940  fdivs 3, 6, 3
  04c5944  fmuls 5, 3, 3
  04c5948  stfs 3, 504(1)
  04c594c  stfs 3, 496(1)
  04c5950  stfs 3, 500(1)
  04c5954  stfs 3, 492(1)
  04c5958  lfs 7, 504(1)
  04c595c  lfs 8, 496(1)
  04c5960  lfs 9, 500(1)
  04c5964  fmuls 6, 5, 5
  04c5968  fmuls 8, 8, 5
  04c596c  fmuls 7, 7, 6
  04c5970  fmuls 3, 6, 6
  04c5974  fmuls 6, 9, 6
  04c5978  stfs 8, 496(1)
  04c597c  fmuls 5, 7, 5
  04c5980  stfs 6, 500(1)
  04c5984  stfs 5, 504(1)
  04c5988  lfs 5, 476(4)
  04c598c  fmuls 5, 5, 3
  04c5990  stfs 5, 492(4)
  04c5994  lfs 5, 4(5)
  04c5998  addic 5, 5, 8
  04c599c  fmuls 5, 5, 3
  04c59a0  addic 4, 4, 8
  04c59a4  stfs 5, 4(6)
  04c59a8  addic 6, 6, 8
  04c59ac  bdnz 0x4c5988
  04c59b0  li 6, 4
  04c59b4  ori 4, 1, 0
  04c59b8  mtctr 6
  04c59bc  lis 5, 115
  04c59c0  addic 6, 4, 492
  04c59c4  addic 5, 5, 22752
  04c59c8  ori 8, 6, 0
  04c59cc  lfs 3, 492(4)
  04c59d0  lfs 5, 0(5)
  04c59d4  fmuls 3, 3, 5
  04c59d8  lfs 5, 4(5)
  04c59dc  addic 5, 5, 8
  04c59e0  stfs 3, 492(4)
  04c59e4  lfs 3, 4(6)
  04c59e8  addic 4, 4, 8
  04c59ec  fmuls 3, 3, 5
  04c59f0  stfs 3, 4(6)
  04c59f4  addic 6, 6, 8
  04c59f8  bdnz 0x4c59cc
  04c59fc  ori 4, 1, 0
  04c5a00  mtctr 7
  04c5a04  lfs 3, 492(4)
  04c5a08  fadds 3, 4, 3
  04c5a0c  addic 4, 4, 16
  04c5a10  lfs 4, 4(8)
  04c5a14  lfs 5, 8(8)
  04c5a18  lfs 6, 12(8)
  04c5a1c  addic 8, 8, 16
  04c5a20  fadds 3, 3, 4
  04c5a24  fadds 4, 3, 5
  04c5a28  fadds 4, 4, 6
  04c5a2c  bdnz 0x4c5a04
  04c5a30  lis 4, 76
  04c5a34  addi 4, 4, 21952
  04c5a38  lfs 3, 24(4)
  04c5a3c  fadds 4, 4, 3
  04c5a40  fmadds 4, 4, 1, 2
  04c5a44  lis 4, 76
  04c5a48  lis 5, 114
  04c5a4c  fmr 1, 4
  04c5a50  addi 30, 4, 21952
  04c5a54  lis 4, 114
  04c5a58  lfs 3, 28(30)
  04c5a5c  lfs 5, 32(30)
  04c5a60  lfs 2, -3048(5)
  04c5a64  lfs 6, -3052(4)
  04c5a68  fmuls 2, 2, 3
  04c5a6c  addic 5, 29, 396
  04c5a70  fmuls 4, 6, 5
  04c5a74  fmr 3, 2
  04c5a78  bl 0x10a2e0
  04c5a7c  nop
  04c5a80  lfs 1, 40(30)
  04c5a84  lfs 2, 36(30)
  04c5a88  lfs 3, 72(31)
  04c5a8c  lfs 4, 44(30)
  04c5a90  fadds 2, 3, 2
  04c5a94  fsubs 5, 1, 3
  04c5a98  fsubs 6, 4, 3
  04c5a9c  li 5, 0
  04c5aa0  addic 4, 29, 208
  04c5aa4  ori 3, 31, 0
  04c5aa8  addic 6, 1, 208
  04c5aac  fsubs 1, 1, 2
  04c5ab0  fsub 7, 3, 5
  04c5ab4  fsubs 4, 4, 2
  04c5ab8  fsub 9, 2, 1
  04c5abc  fsel 3, 7, 5, 3
  04c5ac0  lfs 5, 48(30)
  04c5ac4  lfs 7, 52(30)
  04c5ac8  fsel 1, 9, 1, 2
  04c5acc  fsub 2, 6, 3
  04c5ad0  fsub 9, 4, 1
  04c5ad4  fsel 2, 2, 6, 3
  04c5ad8  lfs 3, 56(30)
  04c5adc  lfs 6, 60(30)
  04c5ae0  lfs 8, 64(30)
  04c5ae4  stw 5, 200(1)
  04c5ae8  addic 5, 1, 192
  04c5aec  fsel 1, 9, 4, 1
  04c5af0  fmuls 4, 2, 2
  04c5af4  fmuls 9, 1, 1
  04c5af8  fmuls 10, 4, 2
  04c5afc  fmuls 11, 9, 1
  04c5b00  fmuls 12, 4, 10
  04c5b04  fmadds 2, 10, 5, 2
  04c5b08  fmadds 1, 11, 5, 1
  04c5b0c  fmuls 5, 4, 12
  04c5b10  fmadds 2, 12, 7, 2
  04c5b14  fmuls 10, 9, 11
  04c5b18  fmuls 4, 4, 5
  04c5b1c  fmadds 2, 5, 3, 2
  04c5b20  fmuls 11, 9, 10
  04c5b24  fmadds 1, 10, 7, 1
  04c5b28  fmadds 2, 4, 6, 2
  04c5b2c  fmuls 5, 9, 11
  04c5b30  fmadds 1, 11, 3, 1
  04c5b34  fmuls 2, 2, 8
  04c5b38  fmadds 1, 5, 6, 1
  04c5b3c  fmuls 1, 1, 8
  04c5b40  stfs 2, 196(1)
  04c5b44  lfs 2, 68(30)
  04c5b48  fmr 29, 2
  04c5b4c  stfs 1, 192(1)
  04c5b50  fmr 1, 29
  04c5b54  bl 0x101058
  04c5b58  nop
  04c5b5c  lfs 1, 20(31)
  04c5b60  lfs 2, 16(31)
  04c5b64  fsubs 1, 1, 30
  04c5b68  fsubs 2, 2, 31
  04c5b6c  fmuls 1, 1, 1
  04c5b70  fmadds 1, 2, 2, 1
  04c5b74  fsqrts 1, 1
  04c5b78  fcmpu 0, 1, 29
  04c5b7c  cror 6, 1, 2
  04c5b80  bt 6, 0x4c6aec
  04c5b84  lis 3, 76
  04c5b88  lis 4, 114
  04c5b8c  addi 3, 3, 21952
  04c5b90  lfs 1, 8(3)
  04c5b94  lfs 2, -3052(4)
  04c5b98  li 3, 4
  04c5b9c  fmuls 1, 2, 1
  04c5ba0  stfs 1, 244(29)
  04c5ba4  stb 3, 32(31)
  04c5ba8  b 0x4c6aec
  04c5bac  lwz 3, 356(29)
  04c5bb0  cmpwi 3, 2
  04c5bb4  bt 2, 0x4c5e50
  04c5bb8  lwz 3, 428(29)
  04c5bbc  li 6, 0
  04c5bc0  lwz 5, 120(31)
  04c5bc4  li 8, 0
  04c5bc8  addic 3, 3, 1
  04c5bcc  li 9, 1
  04c5bd0  li 7, 0
  04c5bd4  subc 8, 8, 9
  04c5bd8  stw 3, 428(29)
  04c5bdc  lwz 4, 420(5)
  04c5be0  lwz 5, 424(5)
  04c5be4  lwz 10, 0(4)
  04c5be8  lwz 11, 0(5)
  04c5bec  subc 6, 6, 10
  04c5bf0  subc 7, 7, 11
  04c5bf4  cntlzw 6, 6
  04c5bf8  cntlzw 7, 7
  04c5bfc  sldi 6, 6, 58
  04c5c00  sldi 7, 7, 58
  04c5c04  sradi 6, 6, 63
  04c5c08  sradi 7, 7, 63
  04c5c0c  and 6, 6, 8
  04c5c10  cmpwi 1, 10, 0
  04c5c14  addc 6, 9, 6
  04c5c18  cmpwi 6, 11, 0
  04c5c1c  addic 8, 6, 1
  04c5c20  subc 6, 6, 8
  04c5c24  and 6, 7, 6
  04c5c28  addc 6, 8, 6
  04c5c2c  cmpwi 6, 0
  04c5c30  cmpwi 7, 6, 1
  04c5c34  bf 2, 0x4c5d2c
  04c5c38  bf 6, 0x4c5c44
  04c5c3c  stw 31, 0(4)
  04c5c40  b 0x4c5c4c
  04c5c44  bf 26, 0x4c5c4c
  04c5c48  stw 31, 0(5)
  04c5c4c  li 3, 5
  04c5c50  lbz 4, 83(31)
  04c5c54  cmpwi 4, 3
  04c5c58  stb 3, 32(31)
  04c5c5c  bt 2, 0x4c5c9c
  04c5c60  lis 3, 76
  04c5c64  lis 4, 114
  04c5c68  addi 3, 3, 21952
  04c5c6c  li 5, 0
  04c5c70  lfs 1, 12(3)
  04c5c74  lfs 2, -3056(4)
  04c5c78  ori 3, 31, 0
  04c5c7c  fmuls 1, 2, 1
  04c5c80  li 4, 3
  04c5c84  fctiwz 1, 1
  04c5c88  stfd 1, 528(1)
  04c5c8c  lwz 6, 532(1)
  04c5c90  extsw 6, 6
  04c5c94  bl 0xfddc0
  04c5c98  nop
  04c5c9c  lis 3, 76
  04c5ca0  li 4, 72
  04c5ca4  vspltisw 2, -1
  04c5ca8  addi 31, 3, 21952
  04c5cac  lis 3, 114
  04c5cb0  li 5, -3056
  04c5cb4  vslw 2, 2, 2
  04c5cb8  lvlx 3, 4, 31
  04c5cbc  lis 4, 165
  04c5cc0  vspltw 3, 3, 0
  04c5cc4  lvlx 4, 5, 3
  04c5cc8  lwz 3, 400(29)
  04c5ccc  addic 4, 4, 7136
  04c5cd0  li 5, 408
  04c5cd4  vmaddfp 2, 4, 3, 2
  04c5cd8  slwi 3, 3, 2
  04c5cdc  extsw 3, 3
  04c5ce0  lwzx 3, 4, 3
  04c5ce4  vctsxs 2, 2, 0
  04c5ce8  vspltw 2, 2, 0
  04c5cec  stvewx 2, 5, 29
  04c5cf0  lfs 1, 20(31)
  04c5cf4  lwz 3, 0(3)
  04c5cf8  extsw 3, 3
  04c5cfc  std 3, 528(1)
  04c5d00  lfd 2, 528(1)
  04c5d04  fcfid 2, 2
  04c5d08  frsp 2, 2
  04c5d0c  bl 0xfcbe8
  04c5d10  nop
  04c5d14  lfs 2, 68(31)
  04c5d18  fsubs 1, 1, 2
  04c5d1c  bl 0x502758
  04c5d20  nop
  04c5d24  stw 3, 404(29)
  04c5d28  b 0x4c6aec
  04c5d2c  bf 30, 0x4c6aec
  04c5d30  lis 6, 76
  04c5d34  lis 7, 114
  04c5d38  addi 6, 6, 21952
  04c5d3c  lfs 1, 76(6)
  04c5d40  lfs 2, -3056(7)
  04c5d44  fmuls 1, 2, 1
  04c5d48  fctiwz 1, 1
  04c5d4c  stfd 1, 528(1)
  04c5d50  lwz 6, 532(1)
  04c5d54  cmpw 3, 6
  04c5d58  bt 0, 0x4c6aec
  04c5d5c  bf 6, 0x4c5d68
  04c5d60  stw 31, 0(4)
  04c5d64  b 0x4c5d70
  04c5d68  bf 26, 0x4c5d70
  04c5d6c  stw 31, 0(5)
  04c5d70  li 3, 5
  04c5d74  lbz 4, 83(31)
  04c5d78  cmpwi 4, 3
  04c5d7c  stb 3, 32(31)
  04c5d80  bt 2, 0x4c5dc0
  04c5d84  lis 3, 76
  04c5d88  lis 4, 114
  04c5d8c  addi 3, 3, 21952
  04c5d90  li 5, 0
  04c5d94  lfs 1, 12(3)
  04c5d98  lfs 2, -3056(4)
  04c5d9c  ori 3, 31, 0
  04c5da0  li 4, 3
  04c5da4  fmuls 1, 2, 1
  04c5da8  fctiwz 1, 1
  04c5dac  stfd 1, 528(1)
  04c5db0  lwz 6, 532(1)
  04c5db4  extsw 6, 6
  04c5db8  bl 0xfddc0
  04c5dbc  nop
  04c5dc0  lis 3, 76
  04c5dc4  vspltisw 2, -1
  04c5dc8  li 4, -3056
  04c5dcc  addi 31, 3, 21952
  04c5dd0  li 3, 72
  04c5dd4  lis 5, 114
  04c5dd8  vslw 2, 2, 2
  04c5ddc  lvlx 3, 3, 31
  04c5de0  lvlx 4, 4, 5
  04c5de4  lis 3, 165
  04c5de8  vspltw 3, 3, 0
  04c5dec  li 5, 408
  04c5df0  lwz 4, 400(29)
  04c5df4  addic 3, 3, 7136
  04c5df8  slwi 4, 4, 2
  04c5dfc  vmaddfp 2, 4, 3, 2
  04c5e00  extsw 4, 4
  04c5e04  lwzx 3, 3, 4
  04c5e08  vctsxs 2, 2, 0
  04c5e0c  vspltw 2, 2, 0
  04c5e10  stvewx 2, 5, 29
  04c5e14  lfs 1, 20(31)
  04c5e18  lwz 3, 0(3)
  04c5e1c  extsw 3, 3
  04c5e20  std 3, 528(1)
  04c5e24  lfd 2, 528(1)
  04c5e28  fcfid 2, 2
  04c5e2c  frsp 2, 2
  04c5e30  bl 0xfcbe8
  04c5e34  nop
  04c5e38  lfs 2, 68(31)
  04c5e3c  fsubs 1, 1, 2
  04c5e40  bl 0x502758
  04c5e44  nop
  04c5e48  stw 3, 404(29)
  04c5e4c  b 0x4c6aec
  04c5e50  li 3, 0
  04c5e54  stw 3, 428(29)
  04c5e58  lwz 29, 120(31)
  04c5e5c  lwz 3, 420(29)
  04c5e60  lwz 4, 0(3)
  04c5e64  cmpw 4, 31
  04c5e68  bf 2, 0x4c5e78
  04c5e6c  li 4, 0
  04c5e70  stw 4, 0(3)
  04c5e74  b 0x4c6aec
  04c5e78  lwz 29, 424(29)
  04c5e7c  lwz 3, 0(29)
  04c5e80  cmpw 3, 31
  04c5e84  bf 2, 0x4c6aec
  04c5e88  li 3, 0
  04c5e8c  stw 3, 0(29)
  04c5e90  b 0x4c6aec
  04c5e94  lwz 3, 400(29)
  04c5e98  lis 28, 165
  04c5e9c  lwz 4, 404(29)
  04c5ea0  slwi 3, 3, 2
  04c5ea4  lfs 1, 16(31)
  04c5ea8  addic 28, 28, 7136
  04c5eac  extsw 3, 3
  04c5eb0  slwi 4, 4, 4
  04c5eb4  lis 27, 115
  04c5eb8  lwzx 3, 28, 3
  04c5ebc  lfs 2, 20(31)
  04c5ec0  addc 3, 3, 4
  04c5ec4  clrldi 3, 3, 32
  04c5ec8  addic 27, 27, 22784
  04c5ecc  lfs 31, 16(3)
  04c5ed0  lfs 30, 20(3)
  04c5ed4  fsubs 1, 31, 1
  04c5ed8  fsubs 2, 30, 2
  04c5edc  lfs 29, 24(3)
  04c5ee0  lis 3, 76
  04c5ee4  addi 4, 3, 21952
  04c5ee8  addic 3, 29, 412
  04c5eec  fabs 3, 1
  04c5ef0  fabs 4, 2
  04c5ef4  stfs 1, 340(1)
  04c5ef8  stfs 2, 344(1)
  04c5efc  fsubs 1, 3, 4
  04c5f00  stfs 1, 348(1)
  04c5f04  lwz 5, 340(1)
  04c5f08  lfs 28, 20(4)
  04c5f0c  lfs 1, 340(1)
  04c5f10  lwz 4, 344(1)
  04c5f14  lfs 2, 344(1)
  04c5f18  lwz 6, 348(1)
  04c5f1c  rlwinm 4, 4, 3, 29, 29
  04c5f20  fabs 5, 2
  04c5f24  lfs 2, 348(1)
  04c5f28  fabs 1, 1
  04c5f2c  rlwimi 4, 6, 2, 30, 30
  04c5f30  fsub 6, 2, 28
  04c5f34  rlwimi 4, 5, 4, 28, 28
  04c5f38  fsub 7, 2, 28
  04c5f3c  ori 5, 27, 0
  04c5f40  rlwimi 5, 4, 2, 26, 28
  04c5f44  slwi 4, 4, 2
  04c5f48  clrldi 5, 5, 32
  04c5f4c  fsel 4, 6, 1, 4
  04c5f50  lfsx 1, 27, 4
  04c5f54  lfs 2, 4(5)
  04c5f58  fsel 3, 7, 5, 3
  04c5f5c  fcmpu 0, 4, 28
  04c5f60  bt 1, 0x4c5f6c
  04c5f64  fmr 1, 28
  04c5f68  b 0x4c6090
  04c5f6c  fsubs 5, 3, 4
  04c5f70  fadds 3, 3, 4
  04c5f74  addic 4, 1, 16
  04c5f78  li 7, 2
  04c5f7c  addic 6, 4, 460
  04c5f80  addic 5, 4, 444
  04c5f84  mtctr 7
  04c5f88  fdivs 3, 5, 3
  04c5f8c  fmuls 4, 3, 3
  04c5f90  stfs 3, 472(1)
  04c5f94  stfs 3, 464(1)
  04c5f98  stfs 3, 468(1)
  04c5f9c  stfs 3, 460(1)
  04c5fa0  lfs 6, 472(1)
  04c5fa4  lfs 7, 464(1)
  04c5fa8  lfs 8, 468(1)
  04c5fac  fmuls 5, 4, 4
  04c5fb0  fmuls 7, 7, 4
  04c5fb4  fmuls 6, 6, 5
  04c5fb8  fmuls 3, 5, 5
  04c5fbc  fmuls 5, 8, 5
  04c5fc0  stfs 7, 464(1)
  04c5fc4  fmuls 4, 6, 4
  04c5fc8  stfs 5, 468(1)
  04c5fcc  stfs 4, 472(1)
  04c5fd0  lfs 4, 444(4)
  04c5fd4  fmuls 4, 4, 3
  04c5fd8  stfs 4, 460(4)
  04c5fdc  lfs 4, 4(5)
  04c5fe0  addic 5, 5, 8
  04c5fe4  fmuls 4, 4, 3
  04c5fe8  addic 4, 4, 8
  04c5fec  stfs 4, 4(6)
  04c5ff0  addic 6, 6, 8
  04c5ff4  bdnz 0x4c5fd0
  04c5ff8  li 6, 4
  04c5ffc  ori 4, 1, 0
  04c6000  mtctr 6
  04c6004  lis 5, 115
  04c6008  addic 6, 4, 460
  04c600c  addic 5, 5, 22752
  04c6010  ori 8, 6, 0
  04c6014  lfs 3, 460(4)
  04c6018  lfs 4, 0(5)
  04c601c  fmuls 3, 3, 4
  04c6020  lfs 4, 4(5)
  04c6024  addic 5, 5, 8
  04c6028  stfs 3, 460(4)
  04c602c  lfs 3, 4(6)
  04c6030  addic 4, 4, 8
  04c6034  fmuls 3, 3, 4
  04c6038  stfs 3, 4(6)
  04c603c  addic 6, 6, 8
  04c6040  bdnz 0x4c6014
  04c6044  ori 4, 1, 0
  04c6048  fmr 3, 28
  04c604c  mtctr 7
  04c6050  lfs 4, 460(4)
  04c6054  fadds 3, 3, 4
  04c6058  lfs 4, 4(8)
  04c605c  addic 4, 4, 16
  04c6060  lfs 5, 8(8)
  04c6064  lfs 6, 12(8)
  04c6068  addic 8, 8, 16
  04c606c  fadds 3, 3, 4
  04c6070  fadds 3, 3, 5
  04c6074  fadds 3, 3, 6
  04c6078  bdnz 0x4c6050
  04c607c  lis 4, 76
  04c6080  addi 4, 4, 21952
  04c6084  lfs 4, 24(4)
  04c6088  fadds 3, 3, 4
  04c608c  fmadds 1, 3, 1, 2
  04c6090  lis 4, 76
  04c6094  lis 26, 114
  04c6098  addi 4, 4, 21952
  04c609c  lis 25, 114
  04c60a0  addic 5, 29, 416
  04c60a4  lfs 27, 28(4)
  04c60a8  lfs 2, -3048(26)
  04c60ac  lfs 26, 32(4)
  04c60b0  fmuls 2, 2, 27
  04c60b4  lfs 4, -3052(25)
  04c60b8  fmuls 4, 4, 26
  04c60bc  fmr 3, 2
  04c60c0  bl 0x10a2e0
  04c60c4  nop
  04c60c8  lfs 1, 16(30)
  04c60cc  lfs 2, 16(31)
  04c60d0  lfs 3, 20(30)
  04c60d4  lfs 4, 20(31)
  04c60d8  fsubs 1, 1, 2
  04c60dc  fsubs 2, 3, 4
  04c60e0  addic 3, 31, 72
  04c60e4  fabs 5, 1
  04c60e8  fabs 6, 2
  04c60ec  stfs 1, 328(1)
  04c60f0  stfs 2, 332(1)
  04c60f4  lfs 2, -3052(25)
  04c60f8  fsubs 1, 5, 6
  04c60fc  stfs 1, 336(1)
  04c6100  lwz 4, 328(1)
  04c6104  lfs 1, 328(1)
  04c6108  lwz 5, 332(1)
  04c610c  lfs 3, 332(1)
  04c6110  fabs 1, 1
  04c6114  rlwinm 5, 5, 3, 29, 29
  04c6118  fabs 4, 3
  04c611c  lfs 3, -3048(26)
  04c6120  lwz 6, 336(1)
  04c6124  lfs 7, 336(1)
  04c6128  rlwimi 5, 6, 2, 30, 30
  04c612c  fsub 8, 7, 28
  04c6130  fsub 7, 7, 28
  04c6134  rlwimi 5, 4, 4, 28, 28
  04c6138  ori 4, 27, 0
  04c613c  rlwimi 4, 5, 2, 26, 28
  04c6140  slwi 5, 5, 2
  04c6144  clrldi 4, 4, 32
  04c6148  fsel 6, 8, 1, 6
  04c614c  lfsx 1, 27, 5
  04c6150  fsel 5, 7, 4, 5
  04c6154  lfs 4, 4(4)
  04c6158  fcmpu 0, 6, 28
  04c615c  bt 1, 0x4c6168
  04c6160  fmr 1, 28
  04c6164  b 0x4c628c
  04c6168  fsubs 7, 5, 6
  04c616c  fadds 5, 5, 6
  04c6170  addic 4, 1, 16
  04c6174  li 7, 2
  04c6178  addic 5, 4, 412
  04c617c  addic 6, 4, 428
  04c6180  mtctr 7
  04c6184  fdivs 5, 7, 5
  04c6188  fmuls 6, 5, 5
  04c618c  stfs 5, 440(1)
  04c6190  stfs 5, 432(1)
  04c6194  stfs 5, 436(1)
  04c6198  stfs 5, 428(1)
  04c619c  lfs 8, 440(1)
  04c61a0  lfs 9, 432(1)
  04c61a4  lfs 10, 436(1)
  04c61a8  fmuls 7, 6, 6
  04c61ac  fmuls 9, 9, 6
  04c61b0  fmuls 8, 8, 7
  04c61b4  fmuls 5, 7, 7
  04c61b8  fmuls 7, 10, 7
  04c61bc  stfs 9, 432(1)
  04c61c0  fmuls 6, 8, 6
  04c61c4  stfs 7, 436(1)
  04c61c8  stfs 6, 440(1)
  04c61cc  lfs 6, 412(4)
  04c61d0  fmuls 6, 6, 5
  04c61d4  stfs 6, 428(4)
  04c61d8  lfs 6, 4(5)
  04c61dc  addic 4, 4, 8
  04c61e0  addic 5, 5, 8
  04c61e4  fmuls 6, 6, 5
  04c61e8  stfs 6, 4(6)
  04c61ec  addic 6, 6, 8
  04c61f0  bdnz 0x4c61cc
  04c61f4  li 6, 4
  04c61f8  ori 4, 1, 0
  04c61fc  mtctr 6
  04c6200  lis 5, 115
  04c6204  addic 6, 4, 428
  04c6208  addic 5, 5, 22752
  04c620c  ori 8, 6, 0
  04c6210  lfs 5, 428(4)
  04c6214  lfs 6, 0(5)
  04c6218  fmuls 5, 5, 6
  04c621c  lfs 6, 4(5)
  04c6220  addic 5, 5, 8
  04c6224  stfs 5, 428(4)
  04c6228  lfs 5, 4(6)
  04c622c  addic 4, 4, 8
  04c6230  fmuls 5, 5, 6
  04c6234  stfs 5, 4(6)
  04c6238  addic 6, 6, 8
  04c623c  bdnz 0x4c6210
  04c6240  fmr 5, 28
  04c6244  ori 4, 1, 0
  04c6248  mtctr 7
  04c624c  lfs 6, 428(4)
  04c6250  fadds 5, 5, 6
  04c6254  addic 4, 4, 16
  04c6258  lfs 6, 4(8)
  04c625c  lfs 7, 8(8)
  04c6260  lfs 8, 12(8)
  04c6264  addic 8, 8, 16
  04c6268  fadds 5, 5, 6
  04c626c  fadds 5, 5, 7
  04c6270  fadds 5, 5, 8
  04c6274  bdnz 0x4c624c
  04c6278  lis 4, 76
  04c627c  addi 4, 4, 21952
  04c6280  lfs 6, 24(4)
  04c6284  fadds 5, 5, 6
  04c6288  fmadds 1, 5, 1, 4
  04c628c  fmuls 3, 3, 27
  04c6290  fmuls 4, 2, 26
  04c6294  addic 5, 29, 396
  04c6298  fmr 22, 29
  04c629c  fmr 21, 30
  04c62a0  fmr 20, 31
  04c62a4  fmr 2, 3
  04c62a8  bl 0x10a2e0
  04c62ac  nop
  04c62b0  lis 3, 76
  04c62b4  lfs 1, 412(29)
  04c62b8  addi 7, 3, 21952
  04c62bc  lfs 31, 40(7)
  04c62c0  lfs 27, 36(7)
  04c62c4  fsubs 3, 31, 1
  04c62c8  fadds 2, 1, 27
  04c62cc  lfs 30, 44(7)
  04c62d0  fsubs 4, 30, 1
  04c62d4  lfs 29, 48(7)
  04c62d8  lfs 26, 52(7)
  04c62dc  li 3, 0
  04c62e0  lfs 25, 56(7)
  04c62e4  addic 4, 29, 208
  04c62e8  lfs 24, 60(7)
  04c62ec  addic 5, 1, 224
  04c62f0  fsub 6, 1, 3
  04c62f4  fsubs 5, 31, 2
  04c62f8  fsubs 7, 30, 2
  04c62fc  lfs 19, 64(7)
  04c6300  lfs 18, 72(31)
  04c6304  addic 6, 1, 240
  04c6308  stw 3, 232(1)
  04c630c  ori 3, 31, 0
  04c6310  fsel 3, 6, 3, 1
  04c6314  fsub 8, 2, 5
  04c6318  fsel 2, 8, 5, 2
  04c631c  fsub 5, 4, 3
  04c6320  fsub 6, 7, 2
  04c6324  fsel 3, 5, 4, 3
  04c6328  fsel 2, 6, 7, 2
  04c632c  fmuls 4, 3, 3
  04c6330  fmuls 6, 2, 2
  04c6334  fmuls 7, 4, 3
  04c6338  fmuls 5, 6, 2
  04c633c  fmuls 8, 4, 7
  04c6340  fmadds 3, 7, 29, 3
  04c6344  fmuls 7, 6, 5
  04c6348  fmadds 2, 5, 29, 2
  04c634c  fmuls 5, 4, 8
  04c6350  fmadds 3, 8, 26, 3
  04c6354  fmuls 8, 6, 7
  04c6358  fmadds 2, 7, 26, 2
  04c635c  fmuls 4, 4, 5
  04c6360  fmadds 3, 5, 25, 3
  04c6364  fmuls 5, 6, 8
  04c6368  fmadds 2, 8, 25, 2
  04c636c  fmadds 3, 4, 24, 3
  04c6370  fmadds 2, 5, 24, 2
  04c6374  fmuls 3, 3, 19
  04c6378  fmuls 2, 2, 19
  04c637c  stfs 3, 228(1)
  04c6380  lfs 23, 68(7)
  04c6384  stfs 1, 72(31)
  04c6388  fmr 1, 23
  04c638c  stfs 2, 224(1)
  04c6390  bl 0x101058
  04c6394  nop
  04c6398  lfs 1, 20(31)
  04c639c  lfs 2, 16(31)
  04c63a0  fsubs 1, 1, 21
  04c63a4  lfs 3, 24(31)
  04c63a8  fsubs 2, 2, 20
  04c63ac  fsubs 3, 3, 22
  04c63b0  stfs 18, 72(31)
  04c63b4  fmuls 1, 1, 1
  04c63b8  fmadds 1, 2, 2, 1
  04c63bc  fmadds 1, 3, 3, 1
  04c63c0  fsqrts 1, 1
  04c63c4  fcmpu 0, 1, 19
  04c63c8  cror 6, 1, 2
  04c63cc  bt 6, 0x4c6414
  04c63d0  lwz 3, 400(29)
  04c63d4  slwi 3, 3, 2
  04c63d8  extsw 3, 3
  04c63dc  fmr 1, 28
  04c63e0  lwzx 3, 28, 3
  04c63e4  lwz 3, 0(3)
  04c63e8  extsw 3, 3
  04c63ec  std 3, 528(1)
  04c63f0  lfd 2, 528(1)
  04c63f4  fcfid 2, 2
  04c63f8  frsp 2, 2
  04c63fc  bl 0xfcbe8
  04c6400  nop
  04c6404  fsubs 1, 1, 23
  04c6408  bl 0x502758
  04c640c  nop
  04c6410  stw 3, 404(29)
  04c6414  lwz 3, 408(29)
  04c6418  cmpwi 3, 1
  04c641c  bf 2, 0x4c68b8
  04c6420  lis 3, 76
  04c6424  vspltisw 2, -1
  04c6428  li 5, 80
  04c642c  lfs 1, 16(30)
  04c6430  addi 3, 3, 21952
  04c6434  lfs 2, 16(31)
  04c6438  lis 4, 114
  04c643c  li 6, -3056
  04c6440  vslw 2, 2, 2
  04c6444  fsubs 1, 1, 2
  04c6448  lvlx 3, 5, 3
  04c644c  li 3, 408
  04c6450  vspltw 3, 3, 0
  04c6454  lvlx 4, 6, 4
  04c6458  lfs 4, 20(30)
  04c645c  lfs 3, 20(31)
  04c6460  vmaddfp 2, 4, 3, 2
  04c6464  fsubs 4, 4, 3
  04c6468  fabs 5, 1
  04c646c  fabs 6, 4
  04c6470  vctsxs 2, 2, 0
  04c6474  fsubs 7, 5, 6
  04c6478  vspltw 2, 2, 0
  04c647c  stvewx 2, 3, 29
  04c6480  stfs 1, 316(1)
  04c6484  stfs 7, 324(1)
  04c6488  stfs 4, 320(1)
  04c648c  lwz 3, 316(1)
  04c6490  lwz 4, 324(1)
  04c6494  lfs 1, 324(1)
  04c6498  lfs 4, 316(1)
  04c649c  fsub 7, 1, 28
  04c64a0  fabs 4, 4
  04c64a4  lwz 5, 320(1)
  04c64a8  lfs 8, 320(1)
  04c64ac  fsub 9, 1, 28
  04c64b0  rlwinm 5, 5, 3, 29, 29
  04c64b4  fabs 8, 8
  04c64b8  rlwimi 5, 4, 2, 30, 30
  04c64bc  rlwimi 5, 3, 4, 28, 28
  04c64c0  ori 3, 27, 0
  04c64c4  slwi 4, 5, 2
  04c64c8  fsel 6, 7, 4, 6
  04c64cc  rlwimi 3, 5, 2, 26, 28
  04c64d0  clrldi 3, 3, 32
  04c64d4  lfsx 1, 27, 4
  04c64d8  fsel 5, 9, 8, 5
  04c64dc  lfs 4, 4(3)
  04c64e0  fcmpu 0, 6, 28
  04c64e4  bt 1, 0x4c64f0
  04c64e8  fmr 1, 28
  04c64ec  b 0x4c6614
  04c64f0  fsubs 7, 5, 6
  04c64f4  fadds 5, 5, 6
  04c64f8  addic 3, 1, 16
  04c64fc  li 7, 2
  04c6500  addic 4, 3, 380
  04c6504  addic 5, 3, 396
  04c6508  mtctr 7
  04c650c  fdivs 5, 7, 5
  04c6510  fmuls 6, 5, 5
  04c6514  stfs 5, 408(1)
  04c6518  stfs 5, 400(1)
  04c651c  stfs 5, 404(1)
  04c6520  stfs 5, 396(1)
  04c6524  lfs 8, 408(1)
  04c6528  lfs 9, 400(1)
  04c652c  lfs 10, 404(1)
  04c6530  fmuls 7, 6, 6
  04c6534  fmuls 9, 9, 6
  04c6538  fmuls 8, 8, 7
  04c653c  fmuls 5, 7, 7
  04c6540  fmuls 7, 10, 7
  04c6544  stfs 9, 400(1)
  04c6548  fmuls 6, 8, 6
  04c654c  stfs 7, 404(1)
  04c6550  stfs 6, 408(1)
  04c6554  lfs 6, 380(3)
  04c6558  fmuls 6, 6, 5
  04c655c  stfs 6, 396(3)
  04c6560  lfs 6, 4(4)
  04c6564  addic 3, 3, 8
  04c6568  addic 4, 4, 8
  04c656c  fmuls 6, 6, 5
  04c6570  stfs 6, 4(5)
  04c6574  addic 5, 5, 8
  04c6578  bdnz 0x4c6554
  04c657c  li 5, 4
  04c6580  ori 3, 1, 0
  04c6584  mtctr 5
  04c6588  lis 4, 115
  04c658c  addic 5, 3, 396
  04c6590  addic 4, 4, 22752
  04c6594  ori 6, 5, 0
  04c6598  lfs 5, 396(3)
  04c659c  lfs 6, 0(4)
  04c65a0  fmuls 5, 5, 6
  04c65a4  lfs 6, 4(4)
  04c65a8  addic 4, 4, 8
  04c65ac  stfs 5, 396(3)
  04c65b0  lfs 5, 4(5)
  04c65b4  addic 3, 3, 8
  04c65b8  fmuls 5, 5, 6
  04c65bc  stfs 5, 4(5)
  04c65c0  addic 5, 5, 8
  04c65c4  bdnz 0x4c6598
  04c65c8  fmr 5, 28
  04c65cc  ori 3, 1, 0
  04c65d0  mtctr 7
  04c65d4  lfs 6, 396(3)
  04c65d8  fadds 5, 5, 6
  04c65dc  addic 3, 3, 16
  04c65e0  lfs 6, 4(6)
  04c65e4  lfs 7, 8(6)
  04c65e8  lfs 8, 12(6)
  04c65ec  addic 6, 6, 16
  04c65f0  fadds 5, 5, 6
  04c65f4  fadds 5, 5, 7
  04c65f8  fadds 5, 5, 8
  04c65fc  bdnz 0x4c65d4
  04c6600  lis 3, 76
  04c6604  addi 3, 3, 21952
  04c6608  lfs 6, 24(3)
  04c660c  fadds 5, 5, 6
  04c6610  fmadds 1, 5, 1, 4
  04c6614  fadds 1, 1, 27
  04c6618  lis 3, 76
  04c661c  addi 3, 3, 21952
  04c6620  fsubs 4, 31, 1
  04c6624  fsubs 5, 30, 1
  04c6628  fsub 6, 1, 4
  04c662c  fsel 1, 6, 4, 1
  04c6630  fmr 6, 3
  04c6634  lfs 3, 84(3)
  04c6638  fsub 4, 5, 1
  04c663c  fsel 1, 4, 5, 1
  04c6640  fmuls 4, 1, 1
  04c6644  fmuls 5, 4, 1
  04c6648  fmuls 7, 4, 5
  04c664c  fmadds 1, 5, 29, 1
  04c6650  fmuls 5, 4, 7
  04c6654  fmadds 1, 7, 26, 1
  04c6658  fmuls 4, 4, 5
  04c665c  fmadds 1, 5, 25, 1
  04c6660  fmadds 1, 4, 24, 1
  04c6664  fmuls 1, 1, 3
  04c6668  stfs 1, 256(1)
  04c666c  lfs 1, 16(30)
  04c6670  lfs 4, 20(30)
  04c6674  fsubs 1, 1, 2
  04c6678  fsubs 2, 4, 6
  04c667c  fabs 4, 1
  04c6680  fabs 5, 2
  04c6684  stfs 1, 304(1)
  04c6688  stfs 2, 308(1)
  04c668c  fsubs 1, 4, 5
  04c6690  stfs 1, 312(1)
  04c6694  lwz 3, 304(1)
  04c6698  lfs 1, 304(1)
  04c669c  lwz 4, 308(1)
  04c66a0  lfs 2, 308(1)
  04c66a4  fabs 1, 1
  04c66a8  lwz 5, 312(1)
  04c66ac  rlwinm 4, 4, 3, 29, 29
  04c66b0  fabs 6, 2
  04c66b4  lfs 2, 312(1)
  04c66b8  rlwimi 4, 5, 2, 30, 30
  04c66bc  fsub 7, 2, 28
  04c66c0  fsub 8, 2, 28
  04c66c4  rlwimi 4, 3, 4, 28, 28
  04c66c8  ori 3, 27, 0
  04c66cc  rlwimi 3, 4, 2, 26, 28
  04c66d0  slwi 4, 4, 2
  04c66d4  clrldi 3, 3, 32
  04c66d8  fsel 5, 7, 1, 5
  04c66dc  lfsx 1, 27, 4
  04c66e0  lfs 2, 4(3)
  04c66e4  fsel 4, 8, 6, 4
  04c66e8  fcmpu 0, 5, 28
  04c66ec  bt 1, 0x4c66f4
  04c66f0  b 0x4c6814
  04c66f4  fsubs 6, 4, 5
  04c66f8  fadds 4, 4, 5
  04c66fc  addic 3, 1, 16
  04c6700  li 7, 2
  04c6704  addic 5, 3, 364
  04c6708  addic 4, 3, 348
  04c670c  mtctr 7
  04c6710  fdivs 4, 6, 4
  04c6714  fmuls 5, 4, 4
  04c6718  stfs 4, 376(1)
  04c671c  stfs 4, 368(1)
  04c6720  stfs 4, 372(1)
  04c6724  stfs 4, 364(1)
  04c6728  lfs 7, 376(1)
  04c672c  lfs 8, 368(1)
  04c6730  lfs 9, 372(1)
  04c6734  fmuls 6, 5, 5
  04c6738  fmuls 8, 8, 5
  04c673c  fmuls 7, 7, 6
  04c6740  fmuls 4, 6, 6
  04c6744  fmuls 6, 9, 6
  04c6748  stfs 8, 368(1)
  04c674c  fmuls 5, 7, 5
  04c6750  stfs 6, 372(1)
  04c6754  stfs 5, 376(1)
  04c6758  lfs 5, 348(3)
  04c675c  fmuls 5, 5, 4
  04c6760  stfs 5, 364(3)
  04c6764  lfs 5, 4(4)
  04c6768  addic 4, 4, 8
  04c676c  fmuls 5, 5, 4
  04c6770  addic 3, 3, 8
  04c6774  stfs 5, 4(5)
  04c6778  addic 5, 5, 8
  04c677c  bdnz 0x4c6758
  04c6780  li 5, 4
  04c6784  ori 3, 1, 0
  04c6788  mtctr 5
  04c678c  lis 4, 115
  04c6790  addic 5, 3, 364
  04c6794  addic 4, 4, 22752
  04c6798  ori 6, 5, 0
  04c679c  lfs 4, 364(3)
  04c67a0  lfs 5, 0(4)
  04c67a4  fmuls 4, 4, 5
  04c67a8  lfs 5, 4(4)
  04c67ac  addic 4, 4, 8
  04c67b0  stfs 4, 364(3)
  04c67b4  lfs 4, 4(5)
  04c67b8  addic 3, 3, 8
  04c67bc  fmuls 4, 4, 5
  04c67c0  stfs 4, 4(5)
  04c67c4  addic 5, 5, 8
  04c67c8  bdnz 0x4c679c
  04c67cc  ori 3, 1, 0
  04c67d0  mtctr 7
  04c67d4  lfs 4, 364(3)
  04c67d8  lfs 5, 4(6)
  04c67dc  fadds 4, 28, 4
  04c67e0  lfs 6, 8(6)
  04c67e4  addic 3, 3, 16
  04c67e8  lfs 28, 12(6)
  04c67ec  addic 6, 6, 16
  04c67f0  fadds 4, 4, 5
  04c67f4  fadds 4, 4, 6
  04c67f8  fadds 28, 4, 28
  04c67fc  bdnz 0x4c67d4
  04c6800  lis 3, 76
  04c6804  addi 3, 3, 21952
  04c6808  lfs 4, 24(3)
  04c680c  fadds 28, 28, 4
  04c6810  fmadds 28, 28, 1, 2
  04c6814  fsubs 1, 31, 28
  04c6818  fsubs 2, 30, 28
  04c681c  li 3, 0
  04c6820  lis 5, 1
  04c6824  addic 7, 1, 272
  04c6828  addic 8, 1, 256
  04c682c  stw 3, 264(1)
  04c6830  lis 3, 76
  04c6834  fsub 4, 28, 1
  04c6838  addi 4, 3, 21952
  04c683c  ori 3, 30, 0
  04c6840  ori 5, 5, 1
  04c6844  fsel 1, 4, 1, 28
  04c6848  fsub 4, 2, 1
  04c684c  fsel 1, 4, 2, 1
  04c6850  fmuls 2, 1, 1
  04c6854  fmuls 4, 2, 1
  04c6858  fmuls 5, 2, 4
  04c685c  fmadds 1, 4, 29, 1
  04c6860  fmuls 4, 2, 5
  04c6864  fmadds 1, 5, 26, 1
  04c6868  fmuls 2, 2, 4
  04c686c  fmadds 1, 4, 25, 1
  04c6870  fmadds 1, 2, 24, 1
  04c6874  fmuls 2, 1, 3
  04c6878  fmr 1, 23
  04c687c  stfs 2, 260(1)
  04c6880  lfs 2, 16(30)
  04c6884  stfs 2, 272(1)
  04c6888  lfs 2, 20(30)
  04c688c  stfs 2, 276(1)
  04c6890  lfs 2, 24(30)
  04c6894  stfs 2, 280(1)
  04c6898  lfs 3, 28(30)
  04c689c  stfs 3, 284(1)
  04c68a0  lfs 3, 88(4)
  04c68a4  ori 4, 31, 0
  04c68a8  fadds 2, 2, 3
  04c68ac  stfs 2, 280(1)
  04c68b0  bl 0x105c08
  04c68b4  nop
  04c68b8  lwz 3, 356(29)
  04c68bc  cmpwi 3, 2
  04c68c0  bf 2, 0x4c6914
  04c68c4  li 3, 4
  04c68c8  lbz 4, 83(31)
  04c68cc  cmpwi 4, 0
  04c68d0  stb 3, 32(31)
  04c68d4  bt 2, 0x4c6914
  04c68d8  lis 3, 76
  04c68dc  lis 4, 114
  04c68e0  addi 3, 3, 21952
  04c68e4  li 5, 0
  04c68e8  lfs 1, 12(3)
  04c68ec  lfs 2, -3056(4)
  04c68f0  ori 3, 31, 0
  04c68f4  fmuls 1, 2, 1
  04c68f8  li 4, 0
  04c68fc  fctiwz 1, 1
  04c6900  stfd 1, 528(1)
  04c6904  lwz 6, 532(1)
  04c6908  extsw 6, 6
  04c690c  bl 0xfddc0
  04c6910  nop
  04c6914  lis 3, 113
  04c6918  ori 4, 31, 0
  04c691c  addic 3, 3, -1976
  04c6920  bl 0x6d720
  04c6924  nop
  04c6928  b 0x4c6aec
  04c692c  addic 4, 29, 112
  04c6930  ori 3, 31, 0
  04c6934  bl 0x10b030
  04c6938  nop
  04c693c  li 4, 65
  04c6940  and 4, 3, 4
  04c6944  cmpwi 4, 0
  04c6948  bt 2, 0x4c69f8
  04c694c  li 3, 5
  04c6950  lbz 4, 83(31)
  04c6954  cmpwi 4, 0
  04c6958  stb 3, 32(31)
  04c695c  bt 2, 0x4c699c
  04c6960  lis 3, 76
  04c6964  lis 4, 114
  04c6968  addi 3, 3, 21952
  04c696c  li 5, 0
  04c6970  lfs 1, 12(3)
  04c6974  lfs 2, -3056(4)
  04c6978  ori 3, 31, 0
  04c697c  fmuls 1, 2, 1
  04c6980  li 4, 0
  04c6984  fctiwz 1, 1
  04c6988  stfd 1, 528(1)
  04c698c  lwz 6, 532(1)
  04c6990  extsw 6, 6
  04c6994  bl 0xfddc0
  04c6998  nop
  04c699c  lis 4, 76
  04c69a0  lwz 5, 400(29)
  04c69a4  lis 3, 165
  04c69a8  addi 31, 4, 21952
  04c69ac  slwi 4, 5, 2
  04c69b0  addic 3, 3, 7136
  04c69b4  extsw 4, 4
  04c69b8  lfs 1, 20(31)
  04c69bc  lwzx 3, 3, 4
  04c69c0  lwz 3, 0(3)
  04c69c4  extsw 3, 3
  04c69c8  std 3, 528(1)
  04c69cc  lfd 2, 528(1)
  04c69d0  fcfid 2, 2
  04c69d4  frsp 2, 2
  04c69d8  bl 0xfcbe8
  04c69dc  nop
  04c69e0  lfs 2, 68(31)
  04c69e4  fsubs 1, 1, 2
  04c69e8  bl 0x502758
  04c69ec  nop
  04c69f0  stw 3, 404(29)
  04c69f4  b 0x4c6aec
  04c69f8  li 4, 288
  04c69fc  and 3, 3, 4
  04c6a00  cmpwi 3, 0
  04c6a04  bt 2, 0x4c6aec
  04c6a08  ori 3, 31, 0
  04c6a0c  bl 0xefb38
  04c6a10  nop
  04c6a14  b 0x4c6aec
  04c6a18  addic 4, 29, 112
  04c6a1c  ori 3, 31, 0
  04c6a20  bl 0x10b030
  04c6a24  nop
  04c6a28  li 4, 352
  04c6a2c  and 3, 3, 4
  04c6a30  cmpwi 3, 0
  04c6a34  bt 2, 0x4c6aec
  04c6a38  lis 4, 76
  04c6a3c  ori 3, 31, 0
  04c6a40  addi 5, 4, 21952
  04c6a44  li 6, -1
  04c6a48  addic 4, 31, 16
  04c6a4c  lfs 1, 92(5)
  04c6a50  lfs 2, 96(5)
  04c6a54  bl 0x10fb28
  04c6a58  nop
  04c6a5c  ori 3, 31, 0
  04c6a60  bl 0xefb38
  04c6a64  nop
  04c6a68  b 0x4c6aec
  04c6a6c  li 6, 0
  04c6a70  lis 3, 76
  04c6a74  li 11, -1
  04c6a78  addi 3, 3, 21952
  04c6a7c  stw 6, 300(1)
  04c6a80  li 7, 1
  04c6a84  stw 6, 296(1)
  04c6a88  addic 4, 1, 288
  04c6a8c  stw 6, 292(1)
  04c6a90  addic 5, 31, 16
  04c6a94  stw 6, 288(1)
  04c6a98  li 8, 10
  04c6a9c  lfs 1, 64(3)
  04c6aa0  li 9, 3
  04c6aa4  lfs 2, 68(3)
  04c6aa8  li 10, 16
  04c6aac  lfs 3, 16(3)
  04c6ab0  fmr 4, 1
  04c6ab4  lfs 5, 100(3)
  04c6ab8  fmr 6, 2
  04c6abc  lfs 7, 104(3)
  04c6ac0  std 11, 144(1)
  04c6ac4  std 7, 160(1)
  04c6ac8  ori 3, 31, 0
  04c6acc  std 7, 168(1)
  04c6ad0  std 11, 176(1)
  04c6ad4  std 6, 184(1)
  04c6ad8  bl 0x10e030
  04c6adc  nop
  04c6ae0  ori 3, 31, 0
  04c6ae4  bl 0xefb38
  04c6ae8  nop
  04c6aec  ld 0, 736(1)
  04c6af0  mtlr 0
  04c6af4  lfd 18, 608(1)
  04c6af8  lfd 19, 616(1)
  04c6afc  lfd 20, 624(1)
  04c6b00  lfd 21, 632(1)
  04c6b04  lfd 22, 640(1)
  04c6b08  lfd 23, 648(1)
  04c6b0c  lfd 24, 656(1)
  04c6b10  lfd 25, 664(1)
  04c6b14  lfd 26, 672(1)
  04c6b18  lfd 27, 680(1)
  04c6b1c  lfd 28, 688(1)
  04c6b20  lfd 29, 696(1)
  04c6b24  lfd 30, 704(1)
  04c6b28  lfd 31, 712(1)
  04c6b2c  ld 25, 552(1)
  04c6b30  ld 26, 560(1)
  04c6b34  ld 27, 568(1)
  04c6b38  ld 28, 576(1)
  04c6b3c  ld 29, 584(1)
  04c6b40  ld 30, 592(1)
  04c6b44  ld 31, 600(1)
  04c6b48  addi 1, 1, 720
  04c6b4c  blr
