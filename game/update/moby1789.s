# game/update/moby1789.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1789_002b9494:   # 0x2b9494, 0x14 bytes
  02b9494  lis 3, 123
  02b9498  lis 4, 1
  02b949c  addic 3, 3, 31412
  02b94a0  stw 4, 72(3)
  02b94a4  blr

UpdateMoby_1789:   # 0x2b94b0, 0x3c0 bytes
  02b94b0  stdu 1, -304(1)
  02b94b4  mflr 0
  02b94b8  std 0, 320(1)
  02b94bc  stfd 31, 296(1)
  02b94c0  lbz 4, 32(3)
  02b94c4  cmpwi 4, 0
  02b94c8  cmpwi 1, 4, 1
  02b94cc  std 31, 288(1)
  02b94d0  std 30, 280(1)
  02b94d4  std 29, 272(1)
  02b94d8  std 28, 264(1)
  02b94dc  std 27, 256(1)
  02b94e0  cmpwi 6, 4, -1
  02b94e4  bt 1, 0x2b94f0
  02b94e8  bf 25, 0x2b9848
  02b94ec  b 0x2b94f8
  02b94f0  bf 5, 0x2b950c
  02b94f4  b 0x2b9848
  02b94f8  li 4, 255
  02b94fc  li 5, 1
  02b9500  stb 4, 48(3)
  02b9504  stb 5, 32(3)
  02b9508  b 0x2b9848
  02b950c  lis 3, 161
  02b9510  lwz 3, 1800(3)
  02b9514  cmpwi 3, 2
  02b9518  bf 2, 0x2b9848
  02b951c  lis 3, 150
  02b9520  addic 3, 3, -12976
  02b9524  lwz 4, 48(3)
  02b9528  cmpwi 4, 1
  02b952c  cmpwi 1, 4, 2
  02b9530  bt 2, 0x2b9538
  02b9534  bf 6, 0x2b9848
  02b9538  li 5, 1
  02b953c  li 6, 2
  02b9540  subc 5, 5, 4
  02b9544  subc 4, 6, 4
  02b9548  cntlzw 5, 5
  02b954c  li 6, 3
  02b9550  sldi 5, 5, 58
  02b9554  li 7, 0
  02b9558  sradi 5, 5, 63
  02b955c  subc 6, 6, 7
  02b9560  cntlzw 4, 4
  02b9564  and 5, 5, 6
  02b9568  sldi 4, 4, 58
  02b956c  addc 5, 7, 5
  02b9570  li 6, 4
  02b9574  sradi 4, 4, 63
  02b9578  subc 6, 6, 5
  02b957c  addic 31, 1, 112
  02b9580  and 4, 4, 6
  02b9584  addc 5, 5, 4
  02b9588  li 4, 0
  02b958c  slwi 5, 5, 2
  02b9590  addc 3, 3, 5
  02b9594  ori 5, 31, 0
  02b9598  lwz 30, 376(3)
  02b959c  ori 3, 30, 0
  02b95a0  bl 0xf1114
  02b95a4  nop
  02b95a8  addic 5, 1, 160
  02b95ac  ori 3, 30, 0
  02b95b0  li 4, 3
  02b95b4  bl 0xf1114
  02b95b8  nop
  02b95bc  lfs 1, 116(1)
  02b95c0  lfs 2, 164(1)
  02b95c4  lfs 3, 112(1)
  02b95c8  fsubs 4, 1, 2
  02b95cc  lfs 1, 160(1)
  02b95d0  fsubs 3, 3, 1
  02b95d4  lfs 1, 120(1)
  02b95d8  lfs 2, 168(1)
  02b95dc  fsubs 5, 1, 2
  02b95e0  fmuls 1, 4, 4
  02b95e4  lis 29, 123
  02b95e8  lis 3, 44
  02b95ec  lfs 7, 31520(29)
  02b95f0  fmadds 1, 3, 3, 1
  02b95f4  stfs 3, 208(1)
  02b95f8  addi 3, 3, -27480
  02b95fc  stfs 4, 212(1)
  02b9600  lis 28, 123
  02b9604  lis 27, 266
  02b9608  fmadds 1, 5, 5, 1
  02b960c  ori 4, 31, 0
  02b9610  addic 5, 1, 208
  02b9614  fsqrts 6, 1
  02b9618  lfs 1, 124(1)
  02b961c  stfs 5, 216(1)
  02b9620  stfs 1, 220(1)
  02b9624  lfs 31, 0(3)
  02b9628  lfs 1, 31524(28)
  02b962c  ori 3, 31, 0
  02b9630  lfs 2, 2116(27)
  02b9634  fdivs 7, 7, 6
  02b9638  fsub 8, 31, 6
  02b963c  fsub 9, 31, 6
  02b9640  fsub 10, 31, 6
  02b9644  fsub 11, 6, 31
  02b9648  fsub 12, 6, 31
  02b964c  fsub 6, 6, 31
  02b9650  fmuls 3, 3, 7
  02b9654  fmuls 4, 4, 7
  02b9658  fmuls 5, 5, 7
  02b965c  fsel 7, 8, 31, 3
  02b9660  fsel 8, 9, 31, 4
  02b9664  fsel 9, 10, 31, 5
  02b9668  fsel 3, 11, 7, 3
  02b966c  fsel 4, 12, 8, 4
  02b9670  fsel 5, 6, 9, 5
  02b9674  stfs 3, 208(1)
  02b9678  stfs 4, 212(1)
  02b967c  stfs 5, 216(1)
  02b9680  bl 0x11a1a0
  02b9684  nop
  02b9688  addic 31, 1, 128
  02b968c  ori 3, 30, 0
  02b9690  li 4, 1
  02b9694  ori 5, 31, 0
  02b9698  bl 0xf1114
  02b969c  nop
  02b96a0  addic 5, 1, 176
  02b96a4  ori 3, 30, 0
  02b96a8  li 4, 4
  02b96ac  bl 0xf1114
  02b96b0  nop
  02b96b4  lfs 1, 132(1)
  02b96b8  lfs 2, 180(1)
  02b96bc  lfs 3, 128(1)
  02b96c0  fsubs 4, 1, 2
  02b96c4  lfs 1, 176(1)
  02b96c8  fsubs 3, 3, 1
  02b96cc  lfs 1, 136(1)
  02b96d0  lfs 2, 184(1)
  02b96d4  fsubs 5, 1, 2
  02b96d8  fmuls 1, 4, 4
  02b96dc  lfs 7, 31520(29)
  02b96e0  ori 3, 31, 0
  02b96e4  ori 4, 31, 0
  02b96e8  addic 5, 1, 224
  02b96ec  fmadds 1, 3, 3, 1
  02b96f0  stfs 3, 224(1)
  02b96f4  stfs 4, 228(1)
  02b96f8  fmadds 1, 5, 5, 1
  02b96fc  fsqrts 6, 1
  02b9700  lfs 1, 140(1)
  02b9704  stfs 5, 232(1)
  02b9708  stfs 1, 236(1)
  02b970c  lfs 1, 31524(28)
  02b9710  lfs 2, 2116(27)
  02b9714  fdivs 7, 7, 6
  02b9718  fsub 8, 31, 6
  02b971c  fsub 9, 31, 6
  02b9720  fsub 10, 31, 6
  02b9724  fsub 11, 6, 31
  02b9728  fsub 12, 6, 31
  02b972c  fsub 6, 6, 31
  02b9730  fmuls 3, 3, 7
  02b9734  fmuls 4, 4, 7
  02b9738  fmuls 5, 5, 7
  02b973c  fsel 7, 8, 31, 3
  02b9740  fsel 8, 9, 31, 4
  02b9744  fsel 9, 10, 31, 5
  02b9748  fsel 3, 11, 7, 3
  02b974c  fsel 4, 12, 8, 4
  02b9750  fsel 5, 6, 9, 5
  02b9754  stfs 3, 224(1)
  02b9758  stfs 4, 228(1)
  02b975c  stfs 5, 232(1)
  02b9760  bl 0x11a1a0
  02b9764  nop
  02b9768  addic 31, 1, 144
  02b976c  ori 3, 30, 0
  02b9770  li 4, 2
  02b9774  ori 5, 31, 0
  02b9778  bl 0xf1114
  02b977c  nop
  02b9780  addic 5, 1, 192
  02b9784  ori 3, 30, 0
  02b9788  li 4, 5
  02b978c  bl 0xf1114
  02b9790  nop
  02b9794  lfs 1, 148(1)
  02b9798  lfs 2, 196(1)
  02b979c  lfs 3, 144(1)
  02b97a0  fsubs 4, 1, 2
  02b97a4  lfs 1, 192(1)
  02b97a8  fsubs 3, 3, 1
  02b97ac  lfs 1, 152(1)
  02b97b0  lfs 2, 200(1)
  02b97b4  fsubs 5, 1, 2
  02b97b8  fmuls 1, 4, 4
  02b97bc  lfs 7, 31520(29)
  02b97c0  addic 5, 1, 240
  02b97c4  ori 3, 31, 0
  02b97c8  ori 4, 31, 0
  02b97cc  fmadds 1, 3, 3, 1
  02b97d0  stfs 3, 240(1)
  02b97d4  stfs 4, 244(1)
  02b97d8  fmadds 1, 5, 5, 1
  02b97dc  fsqrts 6, 1
  02b97e0  lfs 1, 156(1)
  02b97e4  stfs 5, 248(1)
  02b97e8  stfs 1, 252(1)
  02b97ec  lfs 1, 31524(28)
  02b97f0  lfs 2, 2116(27)
  02b97f4  fdivs 7, 7, 6
  02b97f8  fsub 8, 31, 6
  02b97fc  fsub 9, 31, 6
  02b9800  fsub 10, 31, 6
  02b9804  fsub 11, 6, 31
  02b9808  fsub 12, 6, 31
  02b980c  fsub 6, 6, 31
  02b9810  fmuls 3, 3, 7
  02b9814  fmuls 4, 4, 7
  02b9818  fmuls 5, 5, 7
  02b981c  fsel 7, 8, 31, 3
  02b9820  fsel 8, 9, 31, 4
  02b9824  fsel 9, 10, 31, 5
  02b9828  fsel 3, 11, 7, 3
  02b982c  fsel 4, 12, 8, 4
  02b9830  fsel 5, 6, 9, 5
  02b9834  stfs 3, 240(1)
  02b9838  stfs 4, 244(1)
  02b983c  stfs 5, 248(1)
  02b9840  bl 0x11a1a0
  02b9844  nop
  02b9848  ld 0, 320(1)
  02b984c  mtlr 0
  02b9850  lfd 31, 296(1)
  02b9854  ld 27, 256(1)
  02b9858  ld 28, 264(1)
  02b985c  ld 29, 272(1)
  02b9860  ld 30, 280(1)
  02b9864  ld 31, 288(1)
  02b9868  addi 1, 1, 304
  02b986c  blr
