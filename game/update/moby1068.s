# game/update/moby1068.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1068_001ae5f0:   # 0x1ae5f0, 0x5ec bytes
  01ae5f0  mr 11, 1
  01ae5f4  stdu 1, -640(1)
  01ae5f8  mflr 0
  01ae5fc  std 0, 16(11)
  01ae600  stfd 28, -32(11)
  01ae604  stfd 29, -24(11)
  01ae608  stfd 30, -16(11)
  01ae60c  stfd 31, -8(11)
  01ae610  std 30, -48(11)
  01ae614  std 31, -40(11)
  01ae618  mr 31, 1
  01ae61c  ori 30, 3, 0
  01ae620  lis 3, 164
  01ae624  lis 4, 149
  01ae628  std 29, -56(11)
  01ae62c  addic 4, 4, 5056
  01ae630  lwz 29, 120(30)
  01ae634  lwz 3, -28512(3)
  01ae638  ld 5, 0(1)
  01ae63c  lwz 6, 4(29)
  01ae640  lwz 7, 12(29)
  01ae644  slwi 6, 6, 6
  01ae648  slwi 7, 7, 8
  01ae64c  extsw 6, 6
  01ae650  addc 3, 3, 7
  01ae654  std 28, -64(11)
  01ae658  addic 6, 6, 127
  01ae65c  clrldi 28, 3, 32
  01ae660  rldicr 3, 6, 0, 59
  01ae664  neg 3, 3
  01ae668  addc 6, 1, 3
  01ae66c  lwz 28, 120(28)
  01ae670  std 22, -112(11)
  01ae674  lis 22, 27
  01ae678  std 5, 0(6)
  01ae67c  lfs 1, 20(30)
  01ae680  lfs 2, 324(4)
  01ae684  lfs 3, 16(30)
  01ae688  fsubs 1, 1, 2
  01ae68c  lfs 2, 320(4)
  01ae690  fsubs 2, 3, 2
  01ae694  lfs 3, 24(30)
  01ae698  lfs 4, 328(4)
  01ae69c  fsubs 3, 3, 4
  01ae6a0  fmuls 1, 1, 1
  01ae6a4  std 27, -72(11)
  01ae6a8  addi 22, 22, -6708
  01ae6ac  ori 27, 1, 0
  01ae6b0  addc 1, 1, 3
  01ae6b4  std 26, -80(11)
  01ae6b8  addic 3, 31, 128
  01ae6bc  addic 26, 1, 112
  01ae6c0  fmadds 1, 2, 2, 1
  01ae6c4  lfs 2, 4(22)
  01ae6c8  lfs 7, 0(22)
  01ae6cc  lfs 4, 8(22)
  01ae6d0  lfs 31, 12(22)
  01ae6d4  lfs 5, 16(22)
  01ae6d8  lfs 6, 0(29)
  01ae6dc  fmadds 1, 3, 3, 1
  01ae6e0  fsqrts 3, 1
  01ae6e4  fmr 1, 5
  01ae6e8  fmuls 1, 6, 1
  01ae6ec  fsubs 2, 2, 3
  01ae6f0  fsub 30, 7, 3
  01ae6f4  fmuls 2, 2, 4
  01ae6f8  std 25, -88(11)
  01ae6fc  std 24, -96(11)
  01ae700  std 23, -104(11)
  01ae704  std 21, -120(11)
  01ae708  std 20, -128(11)
  01ae70c  std 19, -136(11)
  01ae710  std 18, -144(11)
  01ae714  std 17, -152(11)
  01ae718  fsel 30, 30, 31, 2
  01ae71c  bl 0x500b30
  01ae720  nop
  01ae724  lwz 3, 4(29)
  01ae728  li 25, 0
  01ae72c  cmpwi 3, 0
  01ae730  ori 21, 25, 0
  01ae734  bf 1, 0x1ae7b8
  01ae738  addic 24, 30, 64
  01ae73c  clrldi 23, 26, 32
  01ae740  clrldi 20, 1, 32
  01ae744  ori 3, 23, 0
  01ae748  ori 4, 24, 0
  01ae74c  bl 0x500ca4
  01ae750  nop
  01ae754  addic 5, 31, 128
  01ae758  ori 3, 23, 0
  01ae75c  ori 4, 23, 0
  01ae760  bl 0x50162c
  01ae764  nop
  01ae768  lfs 1, 16(30)
  01ae76c  addic 25, 25, 1
  01ae770  stfs 1, 160(20)
  01ae774  lfs 1, 20(30)
  01ae778  extsw 3, 25
  01ae77c  stfs 1, 164(20)
  01ae780  lfs 29, 24(30)
  01ae784  stfs 29, 168(20)
  01ae788  lfs 1, 28(30)
  01ae78c  stfs 1, 172(20)
  01ae790  bl 0x502730
  01ae794  nop
  01ae798  lfs 2, 8(29)
  01ae79c  lwz 3, 4(29)
  01ae7a0  addic 23, 23, 64
  01ae7a4  fmadds 1, 1, 2, 29
  01ae7a8  cmpw 25, 3
  01ae7ac  stfs 1, 168(20)
  01ae7b0  addic 20, 20, 64
  01ae7b4  bt 0, 0x1ae744
  01ae7b8  li 3, 14
  01ae7bc  bl 0x685c4
  01ae7c0  nop
  01ae7c4  std 3, 456(31)
  01ae7c8  lis 9, 0
  01ae7cc  std 3, 312(31)
  01ae7d0  li 4, 0
  01ae7d4  li 3, 0
  01ae7d8  li 5, 1
  01ae7dc  li 6, 1
  01ae7e0  li 7, 1
  01ae7e4  li 8, 0
  01ae7e8  ori 9, 9, 65424
  01ae7ec  bl 0x502fd4
  01ae7f0  nop
  01ae7f4  std 3, 464(31)
  01ae7f8  li 4, 0
  01ae7fc  std 3, 320(31)
  01ae800  li 5, 0
  01ae804  li 3, 0
  01ae808  li 6, 0
  01ae80c  li 7, 0
  01ae810  li 8, 0
  01ae814  bl 0x502f08
  01ae818  nop
  01ae81c  std 3, 448(31)
  01ae820  lis 4, 230
  01ae824  std 3, 304(31)
  01ae828  lis 5, 117
  01ae82c  lis 3, 230
  01ae830  lis 6, 117
  01ae834  li 7, 128
  01ae838  lwz 8, 8164(3)
  01ae83c  lwz 3, 8160(4)
  01ae840  lwz 4, 31184(5)
  01ae844  lwz 6, 31188(6)
  01ae848  ori 5, 8, 0
  01ae84c  bl 0x502ea8
  01ae850  nop
  01ae854  std 3, 472(31)
  01ae858  lis 4, 117
  01ae85c  std 3, 328(31)
  01ae860  li 7, 2
  01ae864  ori 3, 31, 0
  01ae868  addic 4, 4, 31212
  01ae86c  li 19, 4
  01ae870  addic 5, 3, 420
  01ae874  addic 6, 3, 276
  01ae878  mtctr 7
  01ae87c  lfs 1, 0(4)
  01ae880  lfs 2, 8(4)
  01ae884  stfs 1, 420(3)
  01ae888  addic 4, 4, 16
  01ae88c  stfs 1, 276(3)
  01ae890  stfs 2, 8(5)
  01ae894  stfs 2, 8(6)
  01ae898  addic 5, 5, 16
  01ae89c  addic 6, 6, 16
  01ae8a0  addic 3, 3, 16
  01ae8a4  bdnz 0x1ae87c
  01ae8a8  ori 25, 21, 0
  01ae8ac  ori 24, 21, 0
  01ae8b0  lfs 29, 20(22)
  01ae8b4  lis 3, 117
  01ae8b8  lis 5, 117
  01ae8bc  lis 4, 1
  01ae8c0  mtctr 19
  01ae8c4  addic 5, 5, 31208
  01ae8c8  lfs 1, 32344(3)
  01ae8cc  ori 3, 31, 0
  01ae8d0  fadds 29, 1, 29
  01ae8d4  ori 4, 4, 11744
  01ae8d8  fsubs 1, 29, 31
  01ae8dc  fsub 2, 31, 29
  01ae8e0  fsel 29, 2, 29, 1
  01ae8e4  lfs 1, 0(5)
  01ae8e8  lfsx 2, 28, 4
  01ae8ec  fadds 1, 1, 29
  01ae8f0  addic 5, 5, 8
  01ae8f4  fadds 1, 1, 2
  01ae8f8  stfs 1, 416(3)
  01ae8fc  stfs 1, 272(3)
  01ae900  addic 3, 3, 8
  01ae904  bdnz 0x1ae8e4
  01ae908  lwz 3, 4(29)
  01ae90c  ori 23, 21, 0
  01ae910  cmpwi 3, 0
  01ae914  bf 1, 0x1aeb60
  01ae918  clrldi 20, 26, 32
  01ae91c  ori 18, 29, 0
  01ae920  sldi 3, 25, 7
  01ae924  sldi 4, 25, 3
  01ae928  lis 5, 1
  01ae92c  subc 3, 3, 4
  01ae930  lbz 4, 16(18)
  01ae934  addc 3, 3, 28
  01ae938  slwi 6, 4, 2
  01ae93c  ori 5, 5, 11264
  01ae940  addc 6, 3, 6
  01ae944  lis 7, 239
  01ae948  clrldi 6, 6, 32
  01ae94c  rlwinm 4, 4, 2, 22, 29
  01ae950  addc 6, 6, 5
  01ae954  addc 4, 3, 4
  01ae958  lwz 3, -1660(7)
  01ae95c  clrldi 4, 4, 32
  01ae960  lwz 6, 0(6)
  01ae964  addc 4, 4, 5
  01ae968  cmpw 6, 3
  01ae96c  bf 1, 0x1ae9b0
  01ae970  lwz 4, 0(4)
  01ae974  subc 3, 4, 3
  01ae978  extsw 3, 3
  01ae97c  bl 0x502730
  01ae980  nop
  01ae984  fmr 28, 1
  01ae988  lis 3, 239
  01ae98c  lis 4, 239
  01ae990  lwz 3, -1664(3)
  01ae994  lwz 4, -1660(4)
  01ae998  subc 3, 3, 4
  01ae99c  extsw 3, 3
  01ae9a0  bl 0x502730
  01ae9a4  nop
  01ae9a8  fdivs 1, 28, 1
  01ae9ac  b 0x1ae9e0
  01ae9b0  lwz 3, 0(4)
  01ae9b4  extsw 3, 3
  01ae9b8  bl 0x502730
  01ae9bc  nop
  01ae9c0  fmr 28, 1
  01ae9c4  lis 3, 239
  01ae9c8  lwz 3, -1660(3)
  01ae9cc  extsw 3, 3
  01ae9d0  bl 0x502730
  01ae9d4  nop
  01ae9d8  fdivs 1, 28, 1
  01ae9dc  fsubs 1, 31, 1
  01ae9e0  lis 3, 117
  01ae9e4  lis 4, 117
  01ae9e8  lwz 3, 31200(3)
  01ae9ec  lwz 4, 31204(4)
  01ae9f0  extsw 3, 3
  01ae9f4  extsw 4, 4
  01ae9f8  bl 0x5027bc
  01ae9fc  nop
  01aea00  ori 17, 3, 0
  01aea04  srawi 3, 17, 24
  01aea08  bl 0x502730
  01aea0c  nop
  01aea10  fmuls 2, 30, 30
  01aea14  fmuls 1, 2, 1
  01aea18  bl 0x502758
  01aea1c  nop
  01aea20  clrlwi 5, 17, 8
  01aea24  lbz 4, 32(30)
  01aea28  rlwimi 5, 3, 24, 0, 7
  01aea2c  cmpwi 4, 2
  01aea30  ori 3, 5, 0
  01aea34  bf 2, 0x1aea88
  01aea38  lis 3, 117
  01aea3c  lfs 1, 24(22)
  01aea40  lis 4, 114
  01aea44  lfs 2, 31376(3)
  01aea48  lfs 3, -3056(4)
  01aea4c  fmuls 1, 2, 1
  01aea50  lwz 3, 52(29)
  01aea54  extsw 3, 3
  01aea58  fmuls 28, 3, 1
  01aea5c  bl 0x502730
  01aea60  nop
  01aea64  lfs 2, 28(22)
  01aea68  fmuls 1, 1, 2
  01aea6c  fdivs 1, 1, 28
  01aea70  bl 0x502758
  01aea74  nop
  01aea78  lis 4, 255
  01aea7c  ori 4, 4, 65535
  01aea80  rlwimi 4, 3, 24, 0, 7
  01aea84  ori 3, 4, 0
  01aea88  mulli 4, 25, 9600
  01aea8c  stw 3, 412(31)
  01aea90  lis 6, 117
  01aea94  stw 3, 408(31)
  01aea98  addic 5, 31, 336
  01aea9c  stw 3, 404(31)
  01aeaa0  addic 6, 6, 31248
  01aeaa4  stw 3, 400(31)
  01aeaa8  addc 4, 4, 28
  01aeaac  ori 3, 21, 0
  01aeab0  mtctr 19
  01aeab4  srawi 7, 3, 1
  01aeab8  lbz 9, 16(18)
  01aeabc  lfs 1, 0(6)
  01aeac0  addc 7, 7, 24
  01aeac4  slwi 9, 9, 4
  01aeac8  sldi 8, 7, 8
  01aeacc  sldi 7, 7, 6
  01aead0  addc 7, 8, 7
  01aead4  addc 7, 7, 4
  01aead8  addc 7, 7, 9
  01aeadc  clrldi 7, 7, 32
  01aeae0  addic 3, 3, 1
  01aeae4  lfs 2, 0(7)
  01aeae8  fadds 1, 1, 2
  01aeaec  stfs 1, 0(5)
  01aeaf0  lfs 1, 4(6)
  01aeaf4  lfs 2, 4(7)
  01aeaf8  fadds 1, 1, 2
  01aeafc  stfs 1, 4(5)
  01aeb00  lfs 1, 8(6)
  01aeb04  lfs 2, 8(7)
  01aeb08  fadds 1, 1, 2
  01aeb0c  stfs 1, 8(5)
  01aeb10  lfs 1, 12(6)
  01aeb14  addic 6, 6, 16
  01aeb18  stfs 1, 12(5)
  01aeb1c  addic 5, 5, 16
  01aeb20  bdnz 0x1aeab4
  01aeb24  lis 3, 161
  01aeb28  ori 4, 20, 0
  01aeb2c  addic 6, 3, 24396
  01aeb30  addic 3, 31, 336
  01aeb34  li 5, 0
  01aeb38  li 7, 9
  01aeb3c  lwz 6, 28(6)
  01aeb40  bl 0x72280
  01aeb44  nop
  01aeb48  lwz 3, 4(29)
  01aeb4c  addic 23, 23, 1
  01aeb50  addic 18, 18, 1
  01aeb54  cmpw 23, 3
  01aeb58  addic 20, 20, 64
  01aeb5c  bt 0, 0x1ae920
  01aeb60  addic 24, 24, 1
  01aeb64  cmpwi 24, 19
  01aeb68  bt 0, 0x1ae8b4
  01aeb6c  addic 25, 25, 1
  01aeb70  cmpwi 25, 4
  01aeb74  bt 0, 0x1ae8ac
  01aeb78  ori 1, 27, 0
  01aeb7c  addi 11, 31, 640
  01aeb80  ld 0, 16(11)
  01aeb84  mtlr 0
  01aeb88  lfd 28, -32(11)
  01aeb8c  lfd 29, -24(11)
  01aeb90  lfd 30, -16(11)
  01aeb94  lfd 31, -8(11)
  01aeb98  ld 17, -152(11)
  01aeb9c  ld 18, -144(11)
  01aeba0  ld 19, -136(11)
  01aeba4  ld 20, -128(11)
  01aeba8  ld 21, -120(11)
  01aebac  ld 22, -112(11)
  01aebb0  ld 23, -104(11)
  01aebb4  ld 24, -96(11)
  01aebb8  ld 25, -88(11)
  01aebbc  ld 26, -80(11)
  01aebc0  ld 27, -72(11)
  01aebc4  ld 28, -64(11)
  01aebc8  ld 29, -56(11)
  01aebcc  ld 30, -48(11)
  01aebd0  ld 31, -40(11)
  01aebd4  mr 1, 11
  01aebd8  blr

M1068_001aebdc:   # 0x1aebdc, 0x14 bytes
  01aebdc  lis 3, 117
  01aebe0  lis 4, 1
  01aebe4  addic 3, 3, 31456
  01aebe8  stw 4, 72(3)
  01aebec  blr

M1068_001aec28:   # 0x1aec28, 0x368 bytes
  01aec28  stdu 1, -272(1)
  01aec2c  mflr 0
  01aec30  std 0, 288(1)
  01aec34  stfd 18, 160(1)
  01aec38  stfd 19, 168(1)
  01aec3c  stfd 20, 176(1)
  01aec40  stfd 21, 184(1)
  01aec44  stfd 22, 192(1)
  01aec48  stfd 23, 200(1)
  01aec4c  stfd 24, 208(1)
  01aec50  stfd 25, 216(1)
  01aec54  stfd 26, 224(1)
  01aec58  stfd 27, 232(1)
  01aec5c  stfd 28, 240(1)
  01aec60  stfd 29, 248(1)
  01aec64  stfd 30, 256(1)
  01aec68  stfd 31, 264(1)
  01aec6c  std 30, 144(1)
  01aec70  std 31, 152(1)
  01aec74  lis 30, 27
  01aec78  ori 31, 3, 0
  01aec7c  addi 30, 30, -5136
  01aec80  addic 3, 31, 16
  01aec84  li 4, 0
  01aec88  std 29, 136(1)
  01aec8c  lfs 30, 0(30)
  01aec90  lwz 29, 120(31)
  01aec94  std 28, 128(1)
  01aec98  std 27, 120(1)
  01aec9c  std 26, 112(1)
  01aeca0  fmr 1, 30
  01aeca4  bl 0xffb70
  01aeca8  nop
  01aecac  lis 3, 161
  01aecb0  addic 3, 3, 2368
  01aecb4  lfs 1, 68(3)
  01aecb8  lfs 19, 64(3)
  01aecbc  fmuls 1, 1, 1
  01aecc0  lfs 2, 72(3)
  01aecc4  lfs 31, 4(30)
  01aecc8  fmadds 1, 19, 19, 1
  01aeccc  fmadds 1, 2, 2, 1
  01aecd0  fsqrts 2, 1
  01aecd4  fcmpu 0, 2, 31
  01aecd8  bf 2, 0x1aed08
  01aecdc  stfs 19, 544(29)
  01aece0  lfs 1, 68(3)
  01aece4  li 4, 0
  01aece8  stfs 1, 548(29)
  01aecec  lfs 1, 72(3)
  01aecf0  stfs 1, 552(29)
  01aecf4  lfs 19, 76(3)
  01aecf8  stw 4, 552(29)
  01aecfc  stw 4, 548(29)
  01aed00  stw 4, 544(29)
  01aed04  b 0x1aed64
  01aed08  frsqrte 2, 1
  01aed0c  lfs 3, 8(30)
  01aed10  fmuls 4, 1, 2
  01aed14  fmuls 5, 30, 2
  01aed18  fnmsubs 4, 4, 2, 3
  01aed1c  fmadds 2, 4, 5, 2
  01aed20  fmuls 4, 1, 2
  01aed24  fmuls 5, 30, 2
  01aed28  fnmsubs 4, 4, 2, 3
  01aed2c  fmadds 2, 4, 5, 2
  01aed30  fmuls 1, 1, 2
  01aed34  fmuls 4, 30, 2
  01aed38  fnmsubs 1, 1, 2, 3
  01aed3c  fmadds 1, 1, 4, 2
  01aed40  fmuls 2, 19, 1
  01aed44  stfs 2, 544(29)
  01aed48  lfs 2, 68(3)
  01aed4c  fmuls 2, 2, 1
  01aed50  stfs 2, 548(29)
  01aed54  lfs 2, 72(3)
  01aed58  fmuls 1, 2, 1
  01aed5c  stfs 1, 552(29)
  01aed60  lfs 19, 76(3)
  01aed64  stfs 19, 556(29)
  01aed68  addic 5, 29, 528
  01aed6c  ori 3, 31, 0
  01aed70  li 4, 0
  01aed74  bl 0xf1114
  01aed78  nop
  01aed7c  lfs 1, 24(31)
  01aed80  li 26, 0
  01aed84  stfs 1, 536(29)
  01aed88  lfs 19, 12(30)
  01aed8c  addic 27, 29, 560
  01aed90  lfs 20, 16(30)
  01aed94  addic 28, 29, 572
  01aed98  lfs 21, 20(30)
  01aed9c  lfs 22, 24(30)
  01aeda0  lfs 23, 28(30)
  01aeda4  lfs 24, 32(30)
  01aeda8  lfs 25, 36(30)
  01aedac  lfs 26, 40(30)
  01aedb0  lfs 27, 44(30)
  01aedb4  lfs 28, 48(30)
  01aedb8  lfs 29, 52(30)
  01aedbc  lis 4, 117
  01aedc0  ori 3, 26, 0
  01aedc4  lfs 1, 31612(4)
  01aedc8  fmuls 18, 1, 19
  01aedcc  bl 0x502730
  01aedd0  nop
  01aedd4  fmsubs 1, 1, 20, 30
  01aedd8  lfs 2, 72(31)
  01aeddc  fmuls 18, 18, 1
  01aede0  fmr 1, 18
  01aede4  bl 0x502578
  01aede8  nop
  01aedec  fadds 1, 1, 21
  01aedf0  fsubs 2, 22, 1
  01aedf4  fsubs 3, 23, 1
  01aedf8  fsub 4, 1, 2
  01aedfc  fsel 1, 4, 2, 1
  01aee00  lfs 2, 72(31)
  01aee04  fsub 4, 3, 1
  01aee08  fsel 3, 4, 3, 1
  01aee0c  fmr 1, 18
  01aee10  fmuls 4, 3, 3
  01aee14  fmuls 5, 4, 3
  01aee18  fmuls 6, 4, 5
  01aee1c  fmadds 3, 5, 24, 3
  01aee20  fmuls 5, 4, 6
  01aee24  fmadds 3, 6, 25, 3
  01aee28  fmuls 4, 4, 5
  01aee2c  fmadds 3, 5, 26, 3
  01aee30  fmadds 18, 4, 27, 3
  01aee34  bl 0x502578
  01aee38  nop
  01aee3c  fsubs 2, 22, 1
  01aee40  fsubs 3, 23, 1
  01aee44  slwi 3, 26, 4
  01aee48  addc 4, 3, 27
  01aee4c  clrldi 4, 4, 32
  01aee50  fsub 4, 1, 2
  01aee54  cmpwi 26, 0
  01aee58  fsel 1, 4, 2, 1
  01aee5c  lfs 4, 528(29)
  01aee60  fsub 2, 3, 1
  01aee64  fsel 1, 2, 3, 1
  01aee68  fmadds 2, 18, 28, 4
  01aee6c  fmuls 3, 1, 1
  01aee70  stfs 2, 0(4)
  01aee74  lfs 2, 532(29)
  01aee78  fmuls 4, 3, 1
  01aee7c  fmuls 5, 3, 4
  01aee80  fmadds 1, 4, 24, 1
  01aee84  fmuls 4, 3, 5
  01aee88  fmadds 1, 5, 25, 1
  01aee8c  fmuls 3, 3, 4
  01aee90  fmadds 1, 4, 26, 1
  01aee94  fmadds 1, 3, 27, 1
  01aee98  fmadds 1, 1, 28, 2
  01aee9c  stfs 1, 4(4)
  01aeea0  lfs 1, 536(29)
  01aeea4  fadds 1, 1, 29
  01aeea8  stfs 1, 8(4)
  01aeeac  lfs 1, 540(29)
  01aeeb0  stfs 1, 12(4)
  01aeeb4  bt 2, 0x1aeec0
  01aeeb8  cmpwi 26, 15
  01aeebc  bf 2, 0x1aeec8
  01aeec0  fmr 1, 31
  01aeec4  b 0x1aeecc
  01aeec8  lfs 1, 8(30)
  01aeecc  addc 3, 3, 28
  01aeed0  addic 26, 26, 1
  01aeed4  clrldi 3, 3, 32
  01aeed8  extsw 26, 26
  01aeedc  cmpwi 26, 16
  01aeee0  stfs 1, 0(3)
  01aeee4  bt 0, 0x1aedbc
  01aeee8  lis 3, 117
  01aeeec  vspltisw 4, -1
  01aeef0  li 4, 31616
  01aeef4  lis 5, 114
  01aeef8  li 6, -3056
  01aeefc  vslw 4, 4, 4
  01aef00  <unknown>
  01aef04  <unknown>
  01aef08  vcfsx 2, 2, 0
  01aef0c  vspltw 3, 3, 0
  01aef10  <unknown>
  01aef14  li 3, 540
  01aef18  vaddfp 2, 2, 3
  01aef1c  vmaddfp 2, 5, 2, 4
  01aef20  vctsxs 2, 2, 0
  01aef24  vcfsx 2, 2, 0
  01aef28  vspltw 2, 2, 0
  01aef2c  stvewx 2, 3, 29
  01aef30  ld 0, 288(1)
  01aef34  mtlr 0
  01aef38  lfd 18, 160(1)
  01aef3c  lfd 19, 168(1)
  01aef40  lfd 20, 176(1)
  01aef44  lfd 21, 184(1)
  01aef48  lfd 22, 192(1)
  01aef4c  lfd 23, 200(1)
  01aef50  lfd 24, 208(1)
  01aef54  lfd 25, 216(1)
  01aef58  lfd 26, 224(1)
  01aef5c  lfd 27, 232(1)
  01aef60  lfd 28, 240(1)
  01aef64  lfd 29, 248(1)
  01aef68  lfd 30, 256(1)
  01aef6c  lfd 31, 264(1)
  01aef70  ld 26, 112(1)
  01aef74  ld 27, 120(1)
  01aef78  ld 28, 128(1)
  01aef7c  ld 29, 136(1)
  01aef80  ld 30, 144(1)
  01aef84  ld 31, 152(1)
  01aef88  addi 1, 1, 272
  01aef8c  blr

M1068_001aefb8:   # 0x1aefb8, 0x4d0 bytes
  01aefb8  stdu 1, -336(1)
  01aefbc  mflr 0
  01aefc0  std 0, 352(1)
  01aefc4  stfd 20, 240(1)
  01aefc8  stfd 21, 248(1)
  01aefcc  stfd 22, 256(1)
  01aefd0  stfd 23, 264(1)
  01aefd4  stfd 24, 272(1)
  01aefd8  stfd 25, 280(1)
  01aefdc  stfd 26, 288(1)
  01aefe0  stfd 27, 296(1)
  01aefe4  stfd 28, 304(1)
  01aefe8  stfd 29, 312(1)
  01aefec  stfd 30, 320(1)
  01aeff0  stfd 31, 328(1)
  01aeff4  std 30, 224(1)
  01aeff8  lis 4, 27
  01aeffc  std 29, 216(1)
  01af000  lwz 30, 120(3)
  01af004  li 29, 0
  01af008  std 31, 232(1)
  01af00c  addi 4, 4, -4208
  01af010  ori 31, 29, 0
  01af014  lfs 23, 0(4)
  01af018  lfs 24, 4(4)
  01af01c  lfs 25, 8(4)
  01af020  lfs 26, 12(4)
  01af024  lfs 27, 16(4)
  01af028  lfs 28, 20(4)
  01af02c  lfs 29, 24(4)
  01af030  std 28, 208(1)
  01af034  std 27, 200(1)
  01af038  std 26, 192(1)
  01af03c  lfs 30, 28(4)
  01af040  lfs 31, 32(4)
  01af044  lwz 4, 572(30)
  01af048  lis 3, 16253
  01af04c  srawi 5, 4, 31
  01af050  ori 3, 3, 28836
  01af054  srwi 6, 5, 1
  01af058  xor 4, 6, 4
  01af05c  subc 4, 4, 5
  01af060  cmpw 4, 3
  01af064  bf 0, 0x1af08c
  01af068  lwz 4, 588(30)
  01af06c  lis 3, 16253
  01af070  srawi 5, 4, 31
  01af074  ori 3, 3, 28836
  01af078  srwi 6, 5, 1
  01af07c  xor 4, 6, 4
  01af080  subc 4, 4, 5
  01af084  cmpw 4, 3
  01af088  bt 0, 0x1af420
  01af08c  fmr 1, 23
  01af090  fmr 2, 24
  01af094  bl 0xfcbe8
  01af098  nop
  01af09c  lis 3, 117
  01af0a0  lfs 2, 31732(3)
  01af0a4  fcmpu 0, 1, 2
  01af0a8  bt 1, 0x1af420
  01af0ac  bl 0xfcc68
  01af0b0  nop
  01af0b4  fmr 22, 1
  01af0b8  bl 0xfcc68
  01af0bc  nop
  01af0c0  fadds 2, 22, 25
  01af0c4  lis 28, 117
  01af0c8  lis 27, 117
  01af0cc  fmr 21, 1
  01af0d0  lfs 1, 31716(28)
  01af0d4  fsubs 3, 26, 2
  01af0d8  fsubs 4, 27, 2
  01af0dc  fsub 5, 2, 3
  01af0e0  fsel 2, 5, 3, 2
  01af0e4  fsub 3, 4, 2
  01af0e8  fsel 3, 3, 4, 2
  01af0ec  lfs 2, 31720(27)
  01af0f0  fmuls 4, 3, 3
  01af0f4  fmuls 5, 4, 3
  01af0f8  fmuls 6, 4, 5
  01af0fc  fmadds 3, 5, 28, 3
  01af100  fmuls 5, 4, 6
  01af104  fmadds 3, 6, 29, 3
  01af108  fmuls 4, 4, 5
  01af10c  fmadds 3, 5, 30, 3
  01af110  fmadds 20, 4, 31, 3
  01af114  bl 0xfcbe8
  01af118  nop
  01af11c  fsubs 2, 26, 22
  01af120  fsubs 3, 27, 22
  01af124  lfs 5, 31716(28)
  01af128  fmuls 1, 20, 1
  01af12c  fsub 4, 22, 2
  01af130  fsel 2, 4, 2, 22
  01af134  fsub 4, 3, 2
  01af138  fsel 3, 4, 3, 2
  01af13c  lfs 2, 31720(27)
  01af140  stfs 1, 144(1)
  01af144  fmr 1, 5
  01af148  fmuls 4, 3, 3
  01af14c  fmuls 5, 4, 3
  01af150  fmuls 6, 4, 5
  01af154  fmadds 3, 5, 28, 3
  01af158  fmuls 5, 4, 6
  01af15c  fmadds 3, 6, 29, 3
  01af160  fmuls 4, 4, 5
  01af164  fmadds 3, 5, 30, 3
  01af168  fmadds 22, 4, 31, 3
  01af16c  bl 0xfcbe8
  01af170  nop
  01af174  fadds 2, 21, 25
  01af178  fmuls 1, 22, 1
  01af17c  stw 31, 152(1)
  01af180  fsubs 3, 26, 2
  01af184  fsubs 4, 27, 2
  01af188  fsub 5, 2, 3
  01af18c  fsel 2, 5, 3, 2
  01af190  lfs 5, 31716(28)
  01af194  stfs 1, 148(1)
  01af198  fmr 1, 5
  01af19c  fsub 3, 4, 2
  01af1a0  fsel 3, 3, 4, 2
  01af1a4  lfs 2, 31720(27)
  01af1a8  fmuls 4, 3, 3
  01af1ac  fmuls 5, 4, 3
  01af1b0  fmuls 6, 4, 5
  01af1b4  fmadds 3, 5, 28, 3
  01af1b8  fmuls 5, 4, 6
  01af1bc  fmadds 3, 6, 29, 3
  01af1c0  fmuls 4, 4, 5
  01af1c4  fmadds 3, 5, 30, 3
  01af1c8  fmadds 22, 4, 31, 3
  01af1cc  bl 0xfcbe8
  01af1d0  nop
  01af1d4  fsubs 2, 26, 21
  01af1d8  fsubs 3, 27, 21
  01af1dc  fmuls 1, 22, 1
  01af1e0  fsub 4, 21, 2
  01af1e4  fsel 2, 4, 2, 21
  01af1e8  fsub 4, 3, 2
  01af1ec  fsel 3, 4, 3, 2
  01af1f0  lfs 2, 31716(28)
  01af1f4  stfs 1, 160(1)
  01af1f8  fmr 1, 2
  01af1fc  lfs 2, 31720(27)
  01af200  fmuls 4, 3, 3
  01af204  fmuls 6, 4, 3
  01af208  fmuls 5, 4, 6
  01af20c  fmadds 3, 6, 28, 3
  01af210  fmuls 6, 4, 5
  01af214  fmadds 3, 5, 29, 3
  01af218  fmuls 4, 4, 6
  01af21c  fmadds 3, 6, 30, 3
  01af220  fmadds 22, 4, 31, 3
  01af224  bl 0xfcbe8
  01af228  nop
  01af22c  fmuls 3, 22, 1
  01af230  lis 28, 117
  01af234  stw 31, 168(1)
  01af238  lis 27, 117
  01af23c  lfs 1, 31724(28)
  01af240  lfs 2, 31728(27)
  01af244  stfs 3, 164(1)
  01af248  bl 0xfcbe8
  01af24c  nop
  01af250  lfs 2, 31724(28)
  01af254  stfs 1, 152(1)
  01af258  lfs 3, 31728(27)
  01af25c  fmr 1, 2
  01af260  fmr 2, 3
  01af264  bl 0xfcbe8
  01af268  nop
  01af26c  lis 3, 117
  01af270  lis 4, 117
  01af274  stfs 1, 168(1)
  01af278  lfs 1, 31692(3)
  01af27c  lfs 2, 31696(4)
  01af280  bl 0xfcbe8
  01af284  nop
  01af288  lis 28, 114
  01af28c  lfs 2, -3056(28)
  01af290  fmuls 1, 1, 2
  01af294  bl 0x502758
  01af298  nop
  01af29c  lis 4, 117
  01af2a0  lis 5, 117
  01af2a4  ori 27, 3, 0
  01af2a8  lfs 1, 31700(4)
  01af2ac  lfs 2, 31704(5)
  01af2b0  bl 0xfcbe8
  01af2b4  nop
  01af2b8  lfs 2, -3056(28)
  01af2bc  fmuls 1, 1, 2
  01af2c0  bl 0x502758
  01af2c4  nop
  01af2c8  lis 4, 117
  01af2cc  lis 5, 117
  01af2d0  ori 26, 3, 0
  01af2d4  lfs 1, 31708(4)
  01af2d8  lfs 2, 31712(5)
  01af2dc  bl 0xfcbe8
  01af2e0  nop
  01af2e4  lfs 2, -3056(28)
  01af2e8  fmuls 1, 1, 2
  01af2ec  bl 0x502758
  01af2f0  nop
  01af2f4  extsw 4, 27
  01af2f8  ori 28, 3, 0
  01af2fc  extsw 3, 28
  01af300  std 4, 176(1)
  01af304  lfs 3, 144(1)
  01af308  lfs 4, 148(1)
  01af30c  lfd 1, 176(1)
  01af310  std 3, 176(1)
  01af314  fcfid 1, 1
  01af318  lis 3, 117
  01af31c  lis 4, 117
  01af320  frsp 1, 1
  01af324  lfd 2, 176(1)
  01af328  fdivs 5, 24, 1
  01af32c  lfs 6, 152(1)
  01af330  lfs 7, 160(1)
  01af334  lfs 9, 164(1)
  01af338  lfs 10, 168(1)
  01af33c  fcfid 1, 2
  01af340  fmr 2, 24
  01af344  frsp 1, 1
  01af348  fdivs 8, 24, 1
  01af34c  lfs 1, 31684(3)
  01af350  stfs 1, 156(1)
  01af354  lfs 1, 31688(4)
  01af358  stfs 1, 172(1)
  01af35c  fmr 1, 23
  01af360  fmuls 3, 3, 5
  01af364  fmuls 4, 4, 5
  01af368  fmuls 5, 6, 5
  01af36c  stfs 3, 144(1)
  01af370  stfs 4, 148(1)
  01af374  stfs 5, 152(1)
  01af378  fmuls 3, 7, 8
  01af37c  fmuls 4, 9, 8
  01af380  fmuls 5, 10, 8
  01af384  stfs 3, 160(1)
  01af388  stfs 4, 164(1)
  01af38c  stfs 5, 168(1)
  01af390  bl 0xfcbe8
  01af394  nop
  01af398  lfs 2, 560(30)
  01af39c  lis 4, 117
  01af3a0  lfs 4, 564(30)
  01af3a4  lis 5, 117
  01af3a8  fsubs 3, 2, 2
  01af3ac  lfs 5, 568(30)
  01af3b0  fsubs 4, 4, 4
  01af3b4  lfs 6, 572(30)
  01af3b8  fsubs 5, 5, 5
  01af3bc  lis 7, 117
  01af3c0  lwz 6, 31676(4)
  01af3c4  lwz 8, 31736(5)
  01af3c8  addic 3, 1, 128
  01af3cc  extsw 11, 8
  01af3d0  ori 10, 28, 0
  01af3d4  addic 4, 1, 144
  01af3d8  fmadds 2, 1, 3, 2
  01af3dc  addic 5, 1, 160
  01af3e0  extsw 6, 6
  01af3e4  ori 8, 27, 0
  01af3e8  ori 9, 26, 0
  01af3ec  stfs 2, 128(1)
  01af3f0  lfs 2, 564(30)
  01af3f4  lwz 7, 31680(7)
  01af3f8  fmadds 2, 1, 4, 2
  01af3fc  std 11, 112(1)
  01af400  extsw 7, 7
  01af404  stfs 2, 132(1)
  01af408  lfs 2, 568(30)
  01af40c  stfs 6, 140(1)
  01af410  fmadds 1, 1, 5, 2
  01af414  stfs 1, 136(1)
  01af418  bl 0x1206e8
  01af41c  nop
  01af420  addic 29, 29, 1
  01af424  addic 30, 30, 16
  01af428  cmpwi 29, 15
  01af42c  bt 0, 0x1af044
  01af430  ld 0, 352(1)
  01af434  mtlr 0
  01af438  lfd 20, 240(1)
  01af43c  lfd 21, 248(1)
  01af440  lfd 22, 256(1)
  01af444  lfd 23, 264(1)
  01af448  lfd 24, 272(1)
  01af44c  lfd 25, 280(1)
  01af450  lfd 26, 288(1)
  01af454  lfd 27, 296(1)
  01af458  lfd 28, 304(1)
  01af45c  lfd 29, 312(1)
  01af460  lfd 30, 320(1)
  01af464  lfd 31, 328(1)
  01af468  ld 26, 192(1)
  01af46c  ld 27, 200(1)
  01af470  ld 28, 208(1)
  01af474  ld 29, 216(1)
  01af478  ld 30, 224(1)
  01af47c  ld 31, 232(1)
  01af480  addi 1, 1, 336
  01af484  blr

M1068_001af4c0:   # 0x1af4c0, 0x520 bytes
  01af4c0  stdu 1, -320(1)
  01af4c4  mflr 0
  01af4c8  std 0, 336(1)
  01af4cc  stfd 24, 256(1)
  01af4d0  stfd 25, 264(1)
  01af4d4  stfd 26, 272(1)
  01af4d8  stfd 27, 280(1)
  01af4dc  stfd 28, 288(1)
  01af4e0  stfd 29, 296(1)
  01af4e4  stfd 30, 304(1)
  01af4e8  stfd 31, 312(1)
  01af4ec  std 31, 248(1)
  01af4f0  std 30, 240(1)
  01af4f4  ori 31, 3, 0
  01af4f8  lwz 30, 120(31)
  01af4fc  std 29, 232(1)
  01af500  std 28, 224(1)
  01af504  std 27, 216(1)
  01af508  std 26, 208(1)
  01af50c  lfs 1, 540(30)
  01af510  bl 0x502758
  01af514  nop
  01af518  stw 3, 192(1)
  01af51c  addic 3, 1, 192
  01af520  bl 0x4fff60
  01af524  nop
  01af528  li 4, 192
  01af52c  li 5, 540
  01af530  lwz 3, 192(1)
  01af534  <unknown>
  01af538  cmpwi 3, 0
  01af53c  vcfsx 2, 2, 0
  01af540  vspltw 2, 2, 0
  01af544  stvewx 2, 5, 30
  01af548  bt 2, 0x1af998
  01af54c  cmpwi 3, 20
  01af550  bf 2, 0x1af598
  01af554  lis 3, 16250
  01af558  li 6, 0
  01af55c  ori 5, 30, 0
  01af560  lis 4, 16256
  01af564  ori 3, 3, 57672
  01af568  lwz 7, 572(5)
  01af56c  srawi 8, 7, 31
  01af570  srwi 9, 8, 1
  01af574  xor 7, 9, 7
  01af578  subc 7, 7, 8
  01af57c  cmpw 7, 4
  01af580  bt 0, 0x1af588
  01af584  stw 3, 572(5)
  01af588  addic 6, 6, 1
  01af58c  addic 5, 5, 16
  01af590  cmpwi 6, 16
  01af594  bt 0, 0x1af568
  01af598  lis 3, 27
  01af59c  li 26, 0
  01af5a0  addi 3, 3, -2936
  01af5a4  lis 28, 151
  01af5a8  ori 29, 26, 0
  01af5ac  ori 27, 30, 0
  01af5b0  addic 28, 28, -25376
  01af5b4  lfs 26, 0(3)
  01af5b8  lfs 27, 4(3)
  01af5bc  lfs 28, 8(3)
  01af5c0  lfs 29, 12(3)
  01af5c4  lfs 30, 16(3)
  01af5c8  lfs 31, 20(3)
  01af5cc  lbz 3, 8356(28)
  01af5d0  cmpwi 3, 1
  01af5d4  bf 2, 0x1af5f4
  01af5d8  lis 3, 117
  01af5dc  fmr 1, 26
  01af5e0  lis 4, 114
  01af5e4  lfs 2, 31608(3)
  01af5e8  lfs 3, -3052(4)
  01af5ec  fmuls 2, 2, 3
  01af5f0  b 0x1af604
  01af5f4  lis 3, 117
  01af5f8  lis 4, 114
  01af5fc  lfs 2, 31608(3)
  01af600  lfs 1, -3052(4)
  01af604  lfs 3, 560(27)
  01af608  lfs 4, 528(30)
  01af60c  fmuls 1, 2, 1
  01af610  fsubs 3, 3, 4
  01af614  addic 3, 27, 560
  01af618  stfs 3, 112(1)
  01af61c  lfs 4, 564(27)
  01af620  lfs 5, 532(30)
  01af624  fsubs 4, 4, 5
  01af628  fmuls 5, 4, 4
  01af62c  stfs 4, 116(1)
  01af630  fmadds 5, 3, 3, 5
  01af634  fsqrts 2, 5
  01af638  lfs 5, 568(27)
  01af63c  lfs 6, 536(30)
  01af640  lfs 7, 20(31)
  01af644  lfs 8, 16(31)
  01af648  lfs 9, 24(31)
  01af64c  fsubs 5, 5, 6
  01af650  stfs 5, 120(1)
  01af654  lfs 5, 572(27)
  01af658  stfs 5, 124(1)
  01af65c  stw 29, 120(1)
  01af660  fdivs 1, 1, 2
  01af664  fsub 5, 27, 2
  01af668  fsub 6, 27, 2
  01af66c  fsub 10, 2, 27
  01af670  fsub 2, 2, 27
  01af674  fmuls 3, 3, 1
  01af678  fmuls 1, 4, 1
  01af67c  fsel 4, 5, 27, 3
  01af680  fsel 5, 6, 27, 1
  01af684  fsel 3, 10, 4, 3
  01af688  fsel 1, 2, 5, 1
  01af68c  stfs 3, 112(1)
  01af690  stfs 1, 116(1)
  01af694  lfs 2, 560(27)
  01af698  fadds 2, 2, 3
  01af69c  stfs 2, 112(1)
  01af6a0  lfs 3, 564(27)
  01af6a4  fadds 1, 3, 1
  01af6a8  fsubs 3, 2, 8
  01af6ac  fsubs 2, 1, 7
  01af6b0  stfs 1, 116(1)
  01af6b4  lfs 1, 568(27)
  01af6b8  stfs 1, 120(1)
  01af6bc  fsubs 7, 1, 9
  01af6c0  lfs 4, 572(27)
  01af6c4  stfs 4, 124(1)
  01af6c8  lfs 5, 548(30)
  01af6cc  lfs 6, 544(30)
  01af6d0  fmuls 5, 2, 5
  01af6d4  lfs 8, 552(30)
  01af6d8  fmr 2, 4
  01af6dc  fmadds 3, 3, 6, 5
  01af6e0  fmadds 3, 7, 8, 3
  01af6e4  fcmpu 0, 3, 28
  01af6e8  fcmpu 1, 3, 30
  01af6ec  cror 2, 0, 2
  01af6f0  bt 2, 0x1af708
  01af6f4  lis 4, 114
  01af6f8  lfs 3, -3052(4)
  01af6fc  fnmsubs 1, 3, 29, 1
  01af700  stfs 1, 120(1)
  01af704  b 0x1af71c
  01af708  bf 4, 0x1af71c
  01af70c  lis 4, 114
  01af710  lfs 3, -3052(4)
  01af714  fmadds 1, 3, 29, 1
  01af718  stfs 1, 120(1)
  01af71c  lwz 5, 572(27)
  01af720  lis 4, 16256
  01af724  srawi 6, 5, 31
  01af728  srwi 7, 6, 1
  01af72c  xor 5, 7, 5
  01af730  subc 5, 5, 6
  01af734  cmpw 5, 4
  01af738  bt 0, 0x1af770
  01af73c  addic 4, 1, 112
  01af740  li 5, 2
  01af744  li 6, 0
  01af748  li 7, 0
  01af74c  bl 0x57820
  01af750  nop
  01af754  cmpwi 3, 0
  01af758  lfs 2, 124(1)
  01af75c  bt 2, 0x1af770
  01af760  lis 3, 16250
  01af764  ori 3, 3, 57672
  01af768  stw 3, 124(1)
  01af76c  b 0x1af798
  01af770  fcmpu 0, 2, 31
  01af774  cror 6, 1, 2
  01af778  bt 6, 0x1af798
  01af77c  lis 4, 114
  01af780  fmr 1, 27
  01af784  addic 3, 1, 124
  01af788  lfs 2, -3052(4)
  01af78c  fmuls 2, 2, 29
  01af790  bl 0x109af0
  01af794  nop
  01af798  lfs 1, 112(1)
  01af79c  addic 26, 26, 1
  01af7a0  stfs 1, 560(27)
  01af7a4  cmpwi 26, 16
  01af7a8  lfs 1, 116(1)
  01af7ac  stfs 1, 564(27)
  01af7b0  lfs 1, 120(1)
  01af7b4  stfs 1, 568(27)
  01af7b8  lfs 1, 124(1)
  01af7bc  stfs 1, 572(27)
  01af7c0  addic 27, 27, 16
  01af7c4  bt 0, 0x1af5cc
  01af7c8  lis 3, 27
  01af7cc  ori 28, 29, 0
  01af7d0  addi 3, 3, -2936
  01af7d4  lfs 24, 24(3)
  01af7d8  lfs 25, 28(3)
  01af7dc  lfs 26, 32(3)
  01af7e0  lfs 27, 36(3)
  01af7e4  lfs 28, 40(3)
  01af7e8  lfs 29, 44(3)
  01af7ec  lfs 30, 48(3)
  01af7f0  lwz 4, 572(30)
  01af7f4  lis 3, 16153
  01af7f8  srawi 5, 4, 31
  01af7fc  ori 3, 3, 39322
  01af800  srwi 6, 5, 1
  01af804  xor 4, 6, 4
  01af808  subc 4, 4, 5
  01af80c  cmpw 4, 3
  01af810  bt 0, 0x1af96c
  01af814  lwz 4, 588(30)
  01af818  lis 3, 16153
  01af81c  srawi 5, 4, 31
  01af820  ori 3, 3, 39322
  01af824  srwi 6, 5, 1
  01af828  xor 4, 6, 4
  01af82c  subc 4, 4, 5
  01af830  cmpw 4, 3
  01af834  bt 0, 0x1af96c
  01af838  lfs 1, 72(31)
  01af83c  fadds 2, 1, 24
  01af840  fsubs 3, 25, 1
  01af844  fsubs 4, 26, 1
  01af848  lis 3, 17839
  01af84c  lis 4, 16256
  01af850  ori 5, 3, 57190
  01af854  fsubs 5, 25, 2
  01af858  fsub 6, 1, 3
  01af85c  fsubs 7, 26, 2
  01af860  stw 4, 136(1)
  01af864  lis 3, 1
  01af868  stw 5, 140(1)
  01af86c  fsub 8, 2, 5
  01af870  fsel 1, 6, 3, 1
  01af874  fsel 2, 8, 5, 2
  01af878  fsub 3, 4, 1
  01af87c  fsub 5, 7, 2
  01af880  fsel 1, 3, 4, 1
  01af884  fsel 2, 5, 7, 2
  01af888  fmuls 3, 1, 1
  01af88c  fmuls 4, 2, 2
  01af890  fmuls 5, 3, 1
  01af894  fmuls 6, 4, 2
  01af898  fmuls 7, 3, 5
  01af89c  fmadds 1, 5, 27, 1
  01af8a0  fmuls 5, 4, 6
  01af8a4  fmadds 2, 6, 27, 2
  01af8a8  fmuls 6, 3, 7
  01af8ac  fmadds 1, 7, 28, 1
  01af8b0  fmuls 7, 4, 5
  01af8b4  fmadds 2, 5, 28, 2
  01af8b8  fmuls 3, 3, 6
  01af8bc  fmadds 1, 6, 29, 1
  01af8c0  fmuls 4, 4, 7
  01af8c4  fmadds 2, 7, 29, 2
  01af8c8  fmadds 1, 3, 30, 1
  01af8cc  fmadds 2, 4, 30, 2
  01af8d0  stfs 1, 132(1)
  01af8d4  stfs 2, 128(1)
  01af8d8  lwz 5, 572(30)
  01af8dc  srawi 6, 5, 31
  01af8e0  srwi 7, 6, 1
  01af8e4  xor 5, 7, 5
  01af8e8  subc 5, 5, 6
  01af8ec  cmpw 5, 4
  01af8f0  bt 0, 0x1af91c
  01af8f4  lwz 5, 588(30)
  01af8f8  lis 4, 16256
  01af8fc  srawi 6, 5, 31
  01af900  srwi 7, 6, 1
  01af904  xor 5, 7, 5
  01af908  subc 5, 5, 6
  01af90c  cmpw 5, 4
  01af910  bt 0, 0x1af91c
  01af914  lis 3, 1
  01af918  ori 3, 3, 1
  01af91c  addic 27, 1, 144
  01af920  ori 5, 3, 0
  01af924  fmr 1, 31
  01af928  addic 7, 1, 128
  01af92c  ori 3, 27, 0
  01af930  ori 4, 31, 0
  01af934  bl 0x10581c
  01af938  nop
  01af93c  li 5, 1
  01af940  stb 29, 168(1)
  01af944  addic 3, 30, 560
  01af948  lhz 6, 166(31)
  01af94c  addic 4, 30, 576
  01af950  ori 7, 27, 0
  01af954  stb 5, 169(1)
  01af958  sth 6, 170(1)
  01af95c  li 5, 0
  01af960  ori 6, 31, 0
  01af964  bl 0x57820
  01af968  nop
  01af96c  addic 28, 28, 1
  01af970  addic 30, 30, 16
  01af974  cmpwi 28, 15
  01af978  bt 0, 0x1af7f0
  01af97c  lis 3, 113
  01af980  ori 4, 31, 0
  01af984  addic 3, 3, -30408
  01af988  bl 0x6d720
  01af98c  nop
  01af990  ori 3, 31, 0
  01af994  bl 0x1aefb8
  01af998  ld 0, 336(1)
  01af99c  mtlr 0
  01af9a0  lfd 24, 256(1)
  01af9a4  lfd 25, 264(1)
  01af9a8  lfd 26, 272(1)
  01af9ac  lfd 27, 280(1)
  01af9b0  lfd 28, 288(1)
  01af9b4  lfd 29, 296(1)
  01af9b8  lfd 30, 304(1)
  01af9bc  lfd 31, 312(1)
  01af9c0  ld 26, 208(1)
  01af9c4  ld 27, 216(1)
  01af9c8  ld 28, 224(1)
  01af9cc  ld 29, 232(1)
  01af9d0  ld 30, 240(1)
  01af9d4  ld 31, 248(1)
  01af9d8  addi 1, 1, 320
  01af9dc  blr

M1068_001afa30:   # 0x1afa30, 0xce4 bytes
  01afa30  stdu 1, -464(1)
  01afa34  mflr 0
  01afa38  std 0, 480(1)
  01afa3c  stfd 14, 320(1)
  01afa40  stfd 15, 328(1)
  01afa44  stfd 16, 336(1)
  01afa48  stfd 17, 344(1)
  01afa4c  stfd 18, 352(1)
  01afa50  stfd 19, 360(1)
  01afa54  stfd 20, 368(1)
  01afa58  stfd 21, 376(1)
  01afa5c  stfd 22, 384(1)
  01afa60  stfd 23, 392(1)
  01afa64  stfd 24, 400(1)
  01afa68  stfd 25, 408(1)
  01afa6c  stfd 26, 416(1)
  01afa70  stfd 27, 424(1)
  01afa74  stfd 28, 432(1)
  01afa78  stfd 29, 440(1)
  01afa7c  stfd 30, 448(1)
  01afa80  stfd 31, 456(1)
  01afa84  std 31, 312(1)
  01afa88  ori 31, 3, 0
  01afa8c  std 26, 272(1)
  01afa90  lis 3, 117
  01afa94  std 25, 264(1)
  01afa98  lis 26, 27
  01afa9c  ori 25, 1, 0
  01afaa0  addi 26, 26, -1568
  01afaa4  lwz 4, 36(31)
  01afaa8  std 30, 304(1)
  01afaac  lfs 1, 31568(3)
  01afab0  lwz 30, 120(31)
  01afab4  ori 3, 31, 0
  01afab8  lfs 2, 36(4)
  01afabc  fmuls 1, 2, 1
  01afac0  std 29, 296(1)
  01afac4  std 28, 288(1)
  01afac8  std 27, 280(1)
  01afacc  stfs 1, 44(31)
  01afad0  bl 0x1af4c0
  01afad4  lwz 3, 56(30)
  01afad8  cmpwi 3, 0
  01afadc  bt 2, 0x1afb10
  01afae0  lfs 1, 0(26)
  01afae4  lfs 2, 4(26)
  01afae8  bl 0xfcbe8
  01afaec  nop
  01afaf0  lis 3, 114
  01afaf4  lfs 2, -3056(3)
  01afaf8  fmuls 1, 1, 2
  01afafc  bl 0x502758
  01afb00  nop
  01afb04  li 4, 0
  01afb08  stw 3, 392(30)
  01afb0c  stw 4, 56(30)
  01afb10  addic 3, 30, 392
  01afb14  bl 0x4fff60
  01afb18  nop
  01afb1c  li 5, 0
  01afb20  lfs 25, 8(26)
  01afb24  ori 3, 31, 0
  01afb28  lis 4, 51
  01afb2c  stw 5, 116(1)
  01afb30  li 5, 0
  01afb34  bl 0x10675c
  01afb38  nop
  01afb3c  ori 29, 3, 0
  01afb40  ori 3, 31, 0
  01afb44  ori 4, 29, 0
  01afb48  addic 5, 30, 32
  01afb4c  li 6, 0
  01afb50  addic 7, 1, 112
  01afb54  li 9, 0
  01afb58  addic 8, 1, 116
  01afb5c  li 10, 4
  01afb60  bl 0x106840
  01afb64  nop
  01afb68  ori 28, 3, 0
  01afb6c  lwz 3, 112(1)
  01afb70  cmpwi 3, 1
  01afb74  bt 2, 0x1b05a4
  01afb78  lbz 3, 32(31)
  01afb7c  cmpwi 3, 16
  01afb80  bt 2, 0x1b05a4
  01afb84  lis 3, 151
  01afb88  lwz 3, -25488(3)
  01afb8c  cmpwi 3, 10
  01afb90  bf 2, 0x1afbc0
  01afb94  cmpwi 29, 0
  01afb98  bt 2, 0x1afbc0
  01afb9c  lwz 3, 32(29)
  01afba0  cmpwi 3, 0
  01afba4  bt 2, 0x1afbc0
  01afba8  lhz 3, 166(3)
  01afbac  cmpwi 3, 794
  01afbb0  bf 2, 0x1afbc0
  01afbb4  li 3, 17
  01afbb8  bl 0x11b728
  01afbbc  nop
  01afbc0  lfs 1, 32(30)
  01afbc4  lfs 2, 116(1)
  01afbc8  fsubs 1, 1, 2
  01afbcc  fcmpu 0, 1, 25
  01afbd0  stfs 1, 32(30)
  01afbd4  bt 1, 0x1afbdc
  01afbd8  li 28, 1
  01afbdc  li 3, 500
  01afbe0  lis 4, 16128
  01afbe4  cmpwi 28, 2
  01afbe8  cmpwi 1, 28, 10
  01afbec  stw 3, 128(30)
  01afbf0  stw 4, 136(30)
  01afbf4  cmpwi 6, 28, -1
  01afbf8  lfs 31, 12(26)
  01afbfc  bt 1, 0x1afc10
  01afc00  cmpwi 1, 28, 0
  01afc04  bf 25, 0x1b0594
  01afc08  bf 5, 0x1b0594
  01afc0c  b 0x1afe3c
  01afc10  bt 5, 0x1b0594
  01afc14  li 3, 15
  01afc18  li 4, 16
  01afc1c  vspltisw 2, -1
  01afc20  lis 5, 114
  01afc24  li 6, -3056
  01afc28  stb 3, 32(31)
  01afc2c  vslw 2, 2, 2
  01afc30  <unknown>
  01afc34  lis 3, 117
  01afc38  lis 4, 114
  01afc3c  vspltw 3, 3, 0
  01afc40  <unknown>
  01afc44  lis 5, 16640
  01afc48  lfs 1, 31576(3)
  01afc4c  vmaddfp 2, 4, 3, 2
  01afc50  lfs 2, -3052(4)
  01afc54  li 3, 38
  01afc58  lis 4, 117
  01afc5c  fmuls 1, 1, 2
  01afc60  lis 6, 16752
  01afc64  vctsxs 2, 2, 0
  01afc68  vsplth 2, 2, 1
  01afc6c  stvehx 2, 3, 30
  01afc70  stfs 1, 120(30)
  01afc74  lfs 1, 31580(4)
  01afc78  stw 5, 176(30)
  01afc7c  fmuls 1, 1, 2
  01afc80  stw 6, 180(30)
  01afc84  lis 6, 115
  01afc88  addic 6, 6, 22784
  01afc8c  stfs 1, 124(30)
  01afc90  lwz 4, 16(29)
  01afc94  lwz 3, 20(29)
  01afc98  lfs 1, 16(29)
  01afc9c  lfs 2, 20(29)
  01afca0  fabs 3, 1
  01afca4  fabs 2, 2
  01afca8  rlwinm 5, 3, 3, 29, 29
  01afcac  addic 3, 30, 96
  01afcb0  fsubs 1, 3, 2
  01afcb4  stfs 1, 132(1)
  01afcb8  lwz 7, 132(1)
  01afcbc  lfs 1, 132(1)
  01afcc0  rlwimi 5, 7, 2, 30, 30
  01afcc4  fsub 4, 1, 25
  01afcc8  fsub 5, 1, 25
  01afccc  rlwimi 5, 4, 4, 28, 28
  01afcd0  ori 4, 6, 0
  01afcd4  rlwimi 4, 5, 2, 26, 28
  01afcd8  slwi 5, 5, 2
  01afcdc  clrldi 4, 4, 32
  01afce0  fsel 4, 4, 3, 2
  01afce4  lfsx 1, 6, 5
  01afce8  fsel 3, 5, 2, 3
  01afcec  lfs 2, 4(4)
  01afcf0  fcmpu 0, 4, 25
  01afcf4  bt 1, 0x1afcfc
  01afcf8  b 0x1afe10
  01afcfc  fsubs 5, 3, 4
  01afd00  fadds 3, 3, 4
  01afd04  li 6, 2
  01afd08  mtctr 6
  01afd0c  fdivs 3, 5, 3
  01afd10  fmuls 4, 3, 3
  01afd14  stfs 3, 232(25)
  01afd18  stfs 3, 236(25)
  01afd1c  stfs 3, 240(25)
  01afd20  stfs 3, 244(25)
  01afd24  lfs 3, 244(1)
  01afd28  lfs 5, 236(1)
  01afd2c  addic 25, 1, 16
  01afd30  lfs 7, 240(1)
  01afd34  fmuls 6, 4, 4
  01afd38  fmuls 5, 5, 4
  01afd3c  addic 4, 25, 216
  01afd40  addic 5, 25, 232
  01afd44  fmuls 8, 3, 6
  01afd48  fmuls 7, 7, 6
  01afd4c  fmuls 3, 6, 6
  01afd50  stfs 5, 236(1)
  01afd54  fmuls 4, 8, 4
  01afd58  stfs 7, 240(1)
  01afd5c  stfs 4, 244(1)
  01afd60  lfs 4, 216(25)
  01afd64  fmuls 4, 4, 3
  01afd68  stfs 4, 232(25)
  01afd6c  lfs 4, 4(4)
  01afd70  addic 4, 4, 8
  01afd74  fmuls 4, 4, 3
  01afd78  addic 25, 25, 8
  01afd7c  stfs 4, 4(5)
  01afd80  addic 5, 5, 8
  01afd84  bdnz 0x1afd60
  01afd88  li 7, 4
  01afd8c  ori 4, 1, 0
  01afd90  mtctr 7
  01afd94  lis 5, 115
  01afd98  addic 7, 4, 232
  01afd9c  addic 5, 5, 22752
  01afda0  ori 8, 7, 0
  01afda4  lfs 3, 232(4)
  01afda8  lfs 4, 0(5)
  01afdac  fmuls 3, 3, 4
  01afdb0  lfs 4, 4(5)
  01afdb4  addic 5, 5, 8
  01afdb8  stfs 3, 232(4)
  01afdbc  lfs 3, 4(7)
  01afdc0  addic 4, 4, 8
  01afdc4  fmuls 3, 3, 4
  01afdc8  stfs 3, 4(7)
  01afdcc  addic 7, 7, 8
  01afdd0  bdnz 0x1afda4
  01afdd4  ori 4, 1, 0
  01afdd8  mtctr 6
  01afddc  lfs 3, 232(4)
  01afde0  lfs 4, 4(8)
  01afde4  fadds 3, 25, 3
  01afde8  lfs 5, 8(8)
  01afdec  addic 4, 4, 16
  01afdf0  lfs 25, 12(8)
  01afdf4  addic 8, 8, 16
  01afdf8  fadds 3, 3, 4
  01afdfc  fadds 3, 3, 5
  01afe00  fadds 25, 3, 25
  01afe04  bdnz 0x1afddc
  01afe08  fadds 25, 25, 31
  01afe0c  fmadds 25, 25, 1, 2
  01afe10  ori 4, 3, 0
  01afe14  fmr 1, 25
  01afe18  ori 3, 31, 0
  01afe1c  li 6, 7
  01afe20  li 7, 1
  01afe24  li 8, 0
  01afe28  bl 0x10ad80
  01afe2c  nop
  01afe30  li 3, 250
  01afe34  stb 3, 279(30)
  01afe38  b 0x1b0594
  01afe3c  li 3, 16
  01afe40  lis 4, 117
  01afe44  lis 5, 114
  01afe48  lis 6, 16656
  01afe4c  stb 3, 32(31)
  01afe50  lis 3, 117
  01afe54  lfs 1, 31584(4)
  01afe58  lfs 2, -3052(5)
  01afe5c  li 4, 0
  01afe60  lhz 5, 52(31)
  01afe64  fmuls 1, 1, 2
  01afe68  rlwimi 5, 4, 0, 19, 19
  01afe6c  lis 4, 16784
  01afe70  sth 5, 52(31)
  01afe74  lis 27, 115
  01afe78  addic 28, 30, 96
  01afe7c  addic 27, 27, 22784
  01afe80  stfs 1, 120(30)
  01afe84  lfs 1, 31588(3)
  01afe88  stw 6, 176(30)
  01afe8c  fmuls 1, 1, 2
  01afe90  stw 4, 180(30)
  01afe94  stfs 1, 124(30)
  01afe98  lwz 3, 16(29)
  01afe9c  lwz 4, 20(29)
  01afea0  lfs 1, 16(29)
  01afea4  lfs 2, 20(29)
  01afea8  fabs 3, 1
  01afeac  fabs 5, 2
  01afeb0  rlwinm 4, 4, 3, 29, 29
  01afeb4  fsubs 1, 3, 5
  01afeb8  stfs 1, 128(1)
  01afebc  lwz 5, 128(1)
  01afec0  lfs 1, 128(1)
  01afec4  rlwimi 4, 5, 2, 30, 30
  01afec8  fsub 4, 1, 25
  01afecc  fsub 6, 1, 25
  01afed0  rlwimi 4, 3, 4, 28, 28
  01afed4  ori 3, 27, 0
  01afed8  rlwimi 3, 4, 2, 26, 28
  01afedc  slwi 4, 4, 2
  01afee0  clrldi 3, 3, 32
  01afee4  fsel 4, 4, 3, 5
  01afee8  lfsx 1, 27, 4
  01afeec  fsel 3, 6, 5, 3
  01afef0  lfs 2, 4(3)
  01afef4  fcmpu 0, 4, 25
  01afef8  bt 1, 0x1aff04
  01afefc  fmr 1, 25
  01aff00  b 0x1b001c
  01aff04  fsubs 5, 3, 4
  01aff08  fadds 3, 3, 4
  01aff0c  addic 3, 1, 16
  01aff10  li 6, 2
  01aff14  addic 5, 3, 200
  01aff18  addic 4, 3, 184
  01aff1c  mtctr 6
  01aff20  fdivs 3, 5, 3
  01aff24  fmuls 4, 3, 3
  01aff28  stfs 3, 200(25)
  01aff2c  stfs 3, 204(25)
  01aff30  stfs 3, 208(25)
  01aff34  stfs 3, 212(25)
  01aff38  lfs 3, 212(1)
  01aff3c  lfs 5, 204(1)
  01aff40  lfs 7, 208(1)
  01aff44  fmuls 6, 4, 4
  01aff48  fmuls 5, 5, 4
  01aff4c  fmuls 8, 3, 6
  01aff50  fmuls 7, 7, 6
  01aff54  fmuls 3, 6, 6
  01aff58  stfs 5, 204(1)
  01aff5c  fmuls 4, 8, 4
  01aff60  stfs 7, 208(1)
  01aff64  stfs 4, 212(1)
  01aff68  lfs 4, 184(3)
  01aff6c  fmuls 4, 4, 3
  01aff70  stfs 4, 200(3)
  01aff74  lfs 4, 4(4)
  01aff78  addic 4, 4, 8
  01aff7c  fmuls 4, 4, 3
  01aff80  addic 3, 3, 8
  01aff84  stfs 4, 4(5)
  01aff88  addic 5, 5, 8
  01aff8c  bdnz 0x1aff68
  01aff90  li 5, 4
  01aff94  ori 3, 1, 0
  01aff98  mtctr 5
  01aff9c  lis 4, 115
  01affa0  addic 5, 3, 200
  01affa4  addic 4, 4, 22752
  01affa8  ori 7, 5, 0
  01affac  lfs 3, 200(3)
  01affb0  lfs 4, 0(4)
  01affb4  fmuls 3, 3, 4
  01affb8  lfs 4, 4(4)
  01affbc  addic 4, 4, 8
  01affc0  stfs 3, 200(3)
  01affc4  lfs 3, 4(5)
  01affc8  addic 3, 3, 8
  01affcc  fmuls 3, 3, 4
  01affd0  stfs 3, 4(5)
  01affd4  addic 5, 5, 8
  01affd8  bdnz 0x1affac
  01affdc  ori 3, 1, 0
  01affe0  fmr 3, 25
  01affe4  mtctr 6
  01affe8  lfs 4, 200(3)
  01affec  fadds 3, 3, 4
  01afff0  lfs 4, 4(7)
  01afff4  addic 3, 3, 16
  01afff8  lfs 5, 8(7)
  01afffc  lfs 6, 12(7)
  01b0000  addic 7, 7, 16
  01b0004  fadds 3, 3, 4
  01b0008  fadds 3, 3, 5
  01b000c  fadds 3, 3, 6
  01b0010  bdnz 0x1affe8
  01b0014  fadds 3, 3, 31
  01b0018  fmadds 1, 3, 1, 2
  01b001c  ori 4, 28, 0
  01b0020  ori 3, 31, 0
  01b0024  li 6, 9
  01b0028  li 7, 1
  01b002c  li 8, 0
  01b0030  bl 0x10ad80
  01b0034  nop
  01b0038  li 28, 0
  01b003c  lfs 2, 20(26)
  01b0040  lfs 3, 24(31)
  01b0044  fmr 1, 25
  01b0048  lfs 4, 24(26)
  01b004c  lfs 29, 16(31)
  01b0050  fmr 27, 4
  01b0054  lfs 28, 20(31)
  01b0058  fadds 26, 3, 2
  01b005c  lfs 30, 28(31)
  01b0060  fmr 2, 27
  01b0064  bl 0xfe4f0
  01b0068  nop
  01b006c  fadds 29, 29, 1
  01b0070  fmr 1, 25
  01b0074  fmr 2, 27
  01b0078  bl 0xfe4f0
  01b007c  nop
  01b0080  fadds 28, 28, 1
  01b0084  fmr 1, 25
  01b0088  fmr 2, 27
  01b008c  bl 0xfe4f0
  01b0090  nop
  01b0094  fadds 27, 26, 1
  01b0098  bl 0xfcc68
  01b009c  nop
  01b00a0  fmr 26, 1
  01b00a4  lfs 24, 28(26)
  01b00a8  lfs 2, 32(26)
  01b00ac  fmr 1, 24
  01b00b0  bl 0xfcbe8
  01b00b4  nop
  01b00b8  lfs 12, 36(26)
  01b00bc  lfs 13, 40(26)
  01b00c0  fadds 3, 26, 12
  01b00c4  lfs 0, 44(26)
  01b00c8  fsubs 5, 13, 26
  01b00cc  lis 7, 114
  01b00d0  lwz 3, 16(29)
  01b00d4  lwz 6, 20(29)
  01b00d8  lfs 2, 16(29)
  01b00dc  fsubs 9, 0, 26
  01b00e0  lfs 4, 20(29)
  01b00e4  fabs 15, 2
  01b00e8  fabs 4, 4
  01b00ec  lwz 4, 16(29)
  01b00f0  fsubs 6, 13, 3
  01b00f4  fsub 8, 26, 5
  01b00f8  fsubs 7, 0, 3
  01b00fc  lfs 19, 16(29)
  01b0100  lwz 5, 20(29)
  01b0104  lfs 18, 20(29)
  01b0108  lfs 23, 48(26)
  01b010c  lfs 22, 52(26)
  01b0110  lfs 21, 56(26)
  01b0114  lfs 20, 60(26)
  01b0118  fsub 10, 3, 6
  01b011c  fsel 2, 8, 5, 26
  01b0120  rlwinm 6, 6, 3, 29, 29
  01b0124  fsel 3, 10, 6, 3
  01b0128  fsub 5, 9, 2
  01b012c  fsubs 6, 15, 4
  01b0130  fsub 8, 7, 3
  01b0134  fsel 2, 5, 9, 2
  01b0138  stfs 6, 124(1)
  01b013c  lfs 11, -3052(7)
  01b0140  lwz 7, 124(1)
  01b0144  fmuls 9, 1, 11
  01b0148  rlwimi 6, 7, 2, 30, 30
  01b014c  fsel 3, 8, 7, 3
  01b0150  fmuls 5, 2, 2
  01b0154  lfs 8, 124(1)
  01b0158  rlwimi 6, 3, 4, 28, 28
  01b015c  fsub 14, 8, 25
  01b0160  ori 3, 27, 0
  01b0164  rlwimi 3, 6, 2, 26, 28
  01b0168  slwi 6, 6, 2
  01b016c  clrldi 3, 3, 32
  01b0170  fmuls 1, 3, 3
  01b0174  fmuls 6, 5, 2
  01b0178  lfsx 17, 27, 6
  01b017c  fsel 14, 14, 15, 4
  01b0180  lfs 16, 4(3)
  01b0184  fmuls 7, 1, 3
  01b0188  fmuls 10, 5, 6
  01b018c  fmadds 2, 6, 23, 2
  01b0190  fcmpu 0, 14, 25
  01b0194  fmuls 6, 1, 7
  01b0198  fmadds 3, 7, 23, 3
  01b019c  fmuls 7, 5, 10
  01b01a0  fmadds 2, 10, 22, 2
  01b01a4  fmuls 10, 1, 6
  01b01a8  fmadds 3, 6, 22, 3
  01b01ac  fmuls 5, 5, 7
  01b01b0  fmadds 2, 7, 21, 2
  01b01b4  fmuls 26, 1, 10
  01b01b8  fmadds 1, 10, 21, 3
  01b01bc  fsub 3, 8, 25
  01b01c0  fmadds 10, 5, 20, 2
  01b01c4  fmadds 26, 26, 20, 1
  01b01c8  fsel 15, 3, 4, 15
  01b01cc  bt 1, 0x1b01d8
  01b01d0  fmr 17, 25
  01b01d4  b 0x1b02f0
  01b01d8  fsubs 1, 15, 14
  01b01dc  fadds 2, 15, 14
  01b01e0  addic 3, 1, 16
  01b01e4  li 8, 2
  01b01e8  addic 6, 3, 152
  01b01ec  addic 7, 3, 168
  01b01f0  mtctr 8
  01b01f4  fdivs 1, 1, 2
  01b01f8  fmuls 2, 1, 1
  01b01fc  stfs 1, 168(25)
  01b0200  stfs 1, 172(25)
  01b0204  stfs 1, 176(25)
  01b0208  stfs 1, 180(25)
  01b020c  lfs 1, 180(1)
  01b0210  lfs 3, 172(1)
  01b0214  lfs 4, 176(1)
  01b0218  fmuls 15, 2, 2
  01b021c  fmuls 3, 3, 2
  01b0220  fmuls 1, 1, 15
  01b0224  fmuls 4, 4, 15
  01b0228  fmuls 15, 15, 15
  01b022c  stfs 3, 172(1)
  01b0230  fmuls 1, 1, 2
  01b0234  stfs 4, 176(1)
  01b0238  stfs 1, 180(1)
  01b023c  lfs 1, 152(3)
  01b0240  fmuls 1, 1, 15
  01b0244  stfs 1, 168(3)
  01b0248  lfs 1, 4(6)
  01b024c  addic 3, 3, 8
  01b0250  addic 6, 6, 8
  01b0254  fmuls 1, 1, 15
  01b0258  stfs 1, 4(7)
  01b025c  addic 7, 7, 8
  01b0260  bdnz 0x1b023c
  01b0264  li 7, 4
  01b0268  ori 3, 1, 0
  01b026c  mtctr 7
  01b0270  lis 6, 115
  01b0274  addic 7, 3, 168
  01b0278  addic 6, 6, 22752
  01b027c  ori 9, 7, 0
  01b0280  lfs 1, 168(3)
  01b0284  lfs 2, 0(6)
  01b0288  fmuls 1, 1, 2
  01b028c  lfs 2, 4(6)
  01b0290  addic 6, 6, 8
  01b0294  stfs 1, 168(3)
  01b0298  lfs 1, 4(7)
  01b029c  addic 3, 3, 8
  01b02a0  fmuls 1, 1, 2
  01b02a4  stfs 1, 4(7)
  01b02a8  addic 7, 7, 8
  01b02ac  bdnz 0x1b0280
  01b02b0  fmr 1, 25
  01b02b4  ori 3, 1, 0
  01b02b8  mtctr 8
  01b02bc  lfs 2, 168(3)
  01b02c0  fadds 1, 1, 2
  01b02c4  addic 3, 3, 16
  01b02c8  lfs 2, 4(9)
  01b02cc  lfs 3, 8(9)
  01b02d0  lfs 4, 12(9)
  01b02d4  addic 9, 9, 16
  01b02d8  fadds 1, 1, 2
  01b02dc  fadds 1, 1, 3
  01b02e0  fadds 1, 1, 4
  01b02e4  bdnz 0x1b02bc
  01b02e8  fadds 1, 1, 31
  01b02ec  fmadds 17, 1, 17, 16
  01b02f0  fadds 1, 17, 12
  01b02f4  fabs 3, 19
  01b02f8  fabs 2, 18
  01b02fc  lfs 17, 64(26)
  01b0300  rlwinm 5, 5, 3, 29, 29
  01b0304  fmuls 17, 11, 17
  01b0308  fsubs 4, 13, 1
  01b030c  fsubs 5, 0, 1
  01b0310  fsubs 7, 3, 2
  01b0314  fsub 8, 1, 4
  01b0318  stfs 7, 120(1)
  01b031c  fsel 1, 8, 4, 1
  01b0320  fsub 4, 5, 1
  01b0324  lwz 3, 120(1)
  01b0328  rlwimi 5, 3, 2, 30, 30
  01b032c  fsel 1, 4, 5, 1
  01b0330  lfs 5, 120(1)
  01b0334  rlwimi 5, 4, 4, 28, 28
  01b0338  ori 3, 27, 0
  01b033c  fsub 4, 5, 25
  01b0340  fsub 5, 5, 25
  01b0344  rlwimi 3, 5, 2, 26, 28
  01b0348  slwi 4, 5, 2
  01b034c  clrldi 3, 3, 32
  01b0350  fmuls 6, 1, 1
  01b0354  fsel 4, 4, 3, 2
  01b0358  fsel 3, 5, 2, 3
  01b035c  fmuls 7, 6, 1
  01b0360  fcmpu 0, 4, 25
  01b0364  fmuls 8, 6, 7
  01b0368  fmadds 1, 7, 23, 1
  01b036c  fmuls 7, 6, 8
  01b0370  fmadds 1, 8, 22, 1
  01b0374  fmuls 6, 6, 7
  01b0378  fmadds 7, 7, 21, 1
  01b037c  lfsx 1, 27, 4
  01b0380  lfs 2, 4(3)
  01b0384  fmadds 5, 6, 20, 7
  01b0388  fmuls 5, 17, 5
  01b038c  fmadds 26, 26, 9, 5
  01b0390  bt 1, 0x1b039c
  01b0394  fmr 1, 25
  01b0398  b 0x1b04b4
  01b039c  fsubs 5, 3, 4
  01b03a0  fadds 3, 3, 4
  01b03a4  addic 3, 1, 16
  01b03a8  li 6, 2
  01b03ac  addic 5, 3, 136
  01b03b0  addic 4, 3, 120
  01b03b4  mtctr 6
  01b03b8  fdivs 3, 5, 3
  01b03bc  fmuls 4, 3, 3
  01b03c0  stfs 3, 136(25)
  01b03c4  stfs 3, 140(25)
  01b03c8  stfs 3, 144(25)
  01b03cc  stfs 3, 148(25)
  01b03d0  lfs 3, 148(1)
  01b03d4  lfs 5, 140(1)
  01b03d8  lfs 7, 144(1)
  01b03dc  fmuls 6, 4, 4
  01b03e0  fmuls 5, 5, 4
  01b03e4  fmuls 8, 3, 6
  01b03e8  fmuls 7, 7, 6
  01b03ec  fmuls 3, 6, 6
  01b03f0  stfs 5, 140(1)
  01b03f4  fmuls 4, 8, 4
  01b03f8  stfs 7, 144(1)
  01b03fc  stfs 4, 148(1)
  01b0400  lfs 4, 120(3)
  01b0404  fmuls 4, 4, 3
  01b0408  stfs 4, 136(3)
  01b040c  lfs 4, 4(4)
  01b0410  addic 4, 4, 8
  01b0414  fmuls 4, 4, 3
  01b0418  addic 3, 3, 8
  01b041c  stfs 4, 4(5)
  01b0420  addic 5, 5, 8
  01b0424  bdnz 0x1b0400
  01b0428  li 5, 4
  01b042c  ori 3, 1, 0
  01b0430  mtctr 5
  01b0434  lis 4, 115
  01b0438  addic 5, 3, 136
  01b043c  addic 4, 4, 22752
  01b0440  ori 7, 5, 0
  01b0444  lfs 3, 136(3)
  01b0448  lfs 4, 0(4)
  01b044c  fmuls 3, 3, 4
  01b0450  lfs 4, 4(4)
  01b0454  addic 4, 4, 8
  01b0458  stfs 3, 136(3)
  01b045c  lfs 3, 4(5)
  01b0460  addic 3, 3, 8
  01b0464  fmuls 3, 3, 4
  01b0468  stfs 3, 4(5)
  01b046c  addic 5, 5, 8
  01b0470  bdnz 0x1b0444
  01b0474  ori 3, 1, 0
  01b0478  fmr 3, 25
  01b047c  mtctr 6
  01b0480  lfs 4, 136(3)
  01b0484  fadds 3, 3, 4
  01b0488  lfs 4, 4(7)
  01b048c  addic 3, 3, 16
  01b0490  lfs 5, 8(7)
  01b0494  lfs 6, 12(7)
  01b0498  addic 7, 7, 16
  01b049c  fadds 3, 3, 4
  01b04a0  fadds 3, 3, 5
  01b04a4  fadds 3, 3, 6
  01b04a8  bdnz 0x1b0480
  01b04ac  fadds 3, 3, 31
  01b04b0  fmadds 1, 3, 1, 2
  01b04b4  fsubs 2, 13, 1
  01b04b8  fsubs 3, 0, 1
  01b04bc  lfs 5, 68(26)
  01b04c0  fsub 4, 1, 2
  01b04c4  fsel 1, 4, 2, 1
  01b04c8  fsub 2, 3, 1
  01b04cc  fsel 2, 2, 3, 1
  01b04d0  fmr 1, 24
  01b04d4  fmuls 3, 2, 2
  01b04d8  fmuls 4, 3, 2
  01b04dc  fmuls 6, 3, 4
  01b04e0  fmadds 4, 4, 23, 2
  01b04e4  fmr 2, 5
  01b04e8  fmuls 5, 3, 6
  01b04ec  fmadds 4, 6, 22, 4
  01b04f0  fmuls 3, 3, 5
  01b04f4  fmadds 4, 5, 21, 4
  01b04f8  fmadds 3, 3, 20, 4
  01b04fc  fmuls 3, 17, 3
  01b0500  fmadds 24, 10, 9, 3
  01b0504  bl 0xfcbe8
  01b0508  nop
  01b050c  lis 3, 114
  01b0510  stfs 29, 64(1)
  01b0514  stfs 27, 72(1)
  01b0518  lfs 2, -3052(3)
  01b051c  stfs 26, 80(1)
  01b0520  fmuls 1, 1, 2
  01b0524  stfs 28, 68(1)
  01b0528  stfs 30, 76(1)
  01b052c  stfs 24, 84(1)
  01b0530  stfs 1, 88(1)
  01b0534  ld 5, 64(1)
  01b0538  ld 6, 72(1)
  01b053c  stfs 1, 92(1)
  01b0540  ori 3, 31, 0
  01b0544  ld 7, 80(1)
  01b0548  ld 8, 88(1)
  01b054c  bl 0x1bb4e0
  01b0550  nop
  01b0554  cmpwi 3, 0
  01b0558  bt 2, 0x1b056c
  01b055c  lfs 1, 72(26)
  01b0560  lfs 2, 44(3)
  01b0564  fmuls 1, 2, 1
  01b0568  stfs 1, 44(3)
  01b056c  addic 28, 28, 1
  01b0570  cmpwi 28, 10
  01b0574  bt 0, 0x1b003c
  01b0578  li 6, 250
  01b057c  ori 3, 31, 0
  01b0580  li 4, 0
  01b0584  li 5, -1
  01b0588  stb 6, 279(30)
  01b058c  bl 0xfd8d0
  01b0590  nop
  01b0594  addic 4, 30, 272
  01b0598  ori 3, 31, 0
  01b059c  bl 0x10c808
  01b05a0  nop
  01b05a4  li 5, 255
  01b05a8  addic 4, 30, 272
  01b05ac  ori 3, 31, 0
  01b05b0  stb 5, 164(31)
  01b05b4  bl 0x10c9a0
  01b05b8  nop
  01b05bc  lwz 4, 392(30)
  01b05c0  lwz 3, 384(30)
  01b05c4  cmpwi 4, 0
  01b05c8  bt 2, 0x1b05e0
  01b05cc  lis 4, 117
  01b05d0  lfs 1, 76(26)
  01b05d4  lfs 2, 31572(4)
  01b05d8  fadds 1, 2, 1
  01b05dc  b 0x1b05e8
  01b05e0  lis 4, 117
  01b05e4  lfs 1, 31572(4)
  01b05e8  lis 4, 165
  01b05ec  slwi 3, 3, 2
  01b05f0  stfs 1, 408(30)
  01b05f4  addic 5, 4, 7136
  01b05f8  extsw 7, 3
  01b05fc  ori 3, 31, 0
  01b0600  addic 4, 30, 288
  01b0604  li 6, 0
  01b0608  lwzx 5, 5, 7
  01b060c  li 7, 0
  01b0610  addic 8, 5, 16
  01b0614  lwz 9, 0(5)
  01b0618  extsw 9, 9
  01b061c  bl 0x111ba0
  01b0620  nop
  01b0624  cmpwi 3, 2
  01b0628  bt 2, 0x1b0684
  01b062c  lfs 1, 372(30)
  01b0630  lfs 2, 292(30)
  01b0634  lfs 3, 368(30)
  01b0638  fsubs 1, 1, 2
  01b063c  lfs 2, 288(30)
  01b0640  fsubs 2, 3, 2
  01b0644  fmuls 1, 1, 1
  01b0648  fmadds 1, 2, 2, 1
  01b064c  lfs 2, 408(30)
  01b0650  fsqrts 1, 1
  01b0654  fcmpu 0, 1, 2
  01b0658  bt 1, 0x1b067c
  01b065c  lfs 1, 24(31)
  01b0660  lfs 2, 296(30)
  01b0664  fsubs 1, 1, 2
  01b0668  lfs 2, 28(26)
  01b066c  fabs 1, 1
  01b0670  fcmpu 0, 1, 2
  01b0674  cror 6, 0, 2
  01b0678  bt 6, 0x1b0684
  01b067c  li 3, 2
  01b0680  stw 3, 356(30)
  01b0684  lwz 3, 352(30)
  01b0688  cmpwi 3, 0
  01b068c  bf 2, 0x1b06a0
  01b0690  lis 3, 151
  01b0694  addic 3, 3, -25376
  01b0698  lwz 3, 8320(3)
  01b069c  stw 3, 352(30)
  01b06a0  ld 0, 480(1)
  01b06a4  mtlr 0
  01b06a8  lfd 14, 320(1)
  01b06ac  lfd 15, 328(1)
  01b06b0  lfd 16, 336(1)
  01b06b4  lfd 17, 344(1)
  01b06b8  lfd 18, 352(1)
  01b06bc  lfd 19, 360(1)
  01b06c0  lfd 20, 368(1)
  01b06c4  lfd 21, 376(1)
  01b06c8  lfd 22, 384(1)
  01b06cc  lfd 23, 392(1)
  01b06d0  lfd 24, 400(1)
  01b06d4  lfd 25, 408(1)
  01b06d8  lfd 26, 416(1)
  01b06dc  lfd 27, 424(1)
  01b06e0  lfd 28, 432(1)
  01b06e4  lfd 29, 440(1)
  01b06e8  lfd 30, 448(1)
  01b06ec  lfd 31, 456(1)
  01b06f0  ld 25, 264(1)
  01b06f4  ld 26, 272(1)
  01b06f8  ld 27, 280(1)
  01b06fc  ld 28, 288(1)
  01b0700  ld 29, 296(1)
  01b0704  ld 30, 304(1)
  01b0708  ld 31, 312(1)
  01b070c  addi 1, 1, 464
  01b0710  blr

UpdateMoby_1068:   # 0x1b07a8, 0x16fc bytes
  01b07a8  stdu 1, -592(1)
  01b07ac  mflr 0
  01b07b0  std 0, 608(1)
  01b07b4  stfd 30, 576(1)
  01b07b8  stfd 31, 584(1)
  01b07bc  std 31, 568(1)
  01b07c0  ori 31, 3, 0
  01b07c4  std 29, 552(1)
  01b07c8  lis 3, 27
  01b07cc  addi 29, 3, 1812
  01b07d0  std 30, 560(1)
  01b07d4  ori 3, 31, 0
  01b07d8  std 28, 544(1)
  01b07dc  std 27, 536(1)
  01b07e0  std 26, 528(1)
  01b07e4  lwz 30, 120(31)
  01b07e8  bl 0x1afa30
  01b07ec  lfs 1, 0(29)
  01b07f0  ori 3, 31, 0
  01b07f4  lwz 29, 352(30)
  01b07f8  addic 5, 30, 1056
  01b07fc  li 4, 1
  01b0800  bl 0x119a18
  01b0804  nop
  01b0808  lbz 3, 49(31)
  01b080c  cmpwi 3, 0
  01b0810  bt 2, 0x1b087c
  01b0814  lis 3, 149
  01b0818  lfs 1, 20(31)
  01b081c  lfs 2, 16(31)
  01b0820  addic 3, 3, 5056
  01b0824  lfs 3, 324(3)
  01b0828  lfs 4, 320(3)
  01b082c  fsubs 1, 1, 3
  01b0830  fsubs 2, 2, 4
  01b0834  lfs 3, 24(31)
  01b0838  lfs 4, 328(3)
  01b083c  fsubs 3, 3, 4
  01b0840  lis 3, 27
  01b0844  fmuls 1, 1, 1
  01b0848  addi 3, 3, 1812
  01b084c  fmadds 1, 2, 2, 1
  01b0850  lfs 2, 4(3)
  01b0854  fmadds 1, 3, 3, 1
  01b0858  fsqrts 1, 1
  01b085c  fcmpu 0, 1, 2
  01b0860  cror 6, 1, 2
  01b0864  bt 6, 0x1b087c
  01b0868  ori 3, 31, 0
  01b086c  bl 0x106360
  01b0870  nop
  01b0874  li 3, 21
  01b0878  stb 3, 127(31)
  01b087c  lis 3, 27
  01b0880  lis 4, 16256
  01b0884  addi 5, 3, 1812
  01b0888  lbz 3, 32(31)
  01b088c  cmpwi 1, 3, 6
  01b0890  cmpwi 6, 3, 5
  01b0894  lfs 31, 8(5)
  01b0898  cmpwi 7, 3, 4
  01b089c  stw 4, 88(31)
  01b08a0  bt 5, 0x1b08d4
  01b08a4  bt 6, 0x1b153c
  01b08a8  bt 26, 0x1b1288
  01b08ac  bt 30, 0x1b10cc
  01b08b0  cmpwi 3, 3
  01b08b4  bt 2, 0x1b0fb8
  01b08b8  cmpwi 3, 2
  01b08bc  bt 2, 0x1b0eec
  01b08c0  cmpwi 3, 1
  01b08c4  bt 2, 0x1b09e0
  01b08c8  cmpwi 3, 0
  01b08cc  bt 2, 0x1b0908
  01b08d0  b 0x1b1e74
  01b08d4  cmpwi 3, 16
  01b08d8  bt 2, 0x1b1d18
  01b08dc  cmpwi 3, 15
  01b08e0  bt 2, 0x1b1c84
  01b08e4  cmpwi 3, 14
  01b08e8  bt 2, 0x1b0c44
  01b08ec  cmpwi 3, 13
  01b08f0  bt 2, 0x1b1a64
  01b08f4  cmpwi 3, 12
  01b08f8  bt 2, 0x1b1854
  01b08fc  cmpwi 3, 11
  01b0900  bt 2, 0x1b15a0
  01b0904  b 0x1b1e74
  01b0908  lis 29, 16384
  01b090c  li 3, 2
  01b0910  li 28, 1
  01b0914  lis 4, 27
  01b0918  stw 29, 32(30)
  01b091c  addi 27, 4, 1812
  01b0920  sth 3, 36(30)
  01b0924  stb 28, 40(30)
  01b0928  stw 29, 48(30)
  01b092c  stb 28, 41(30)
  01b0930  lfs 1, 12(27)
  01b0934  bl 0x502758
  01b0938  nop
  01b093c  stb 3, 88(30)
  01b0940  lfs 1, 16(27)
  01b0944  bl 0x502758
  01b0948  nop
  01b094c  stb 3, 90(30)
  01b0950  addic 3, 30, 192
  01b0954  bl 0x100f8c
  01b0958  nop
  01b095c  lis 3, 16128
  01b0960  stw 29, 200(30)
  01b0964  lis 29, 117
  01b0968  stw 3, 204(30)
  01b096c  lfs 1, 20(27)
  01b0970  lfs 2, 31568(29)
  01b0974  fmuls 1, 2, 1
  01b0978  bl 0x502758
  01b097c  nop
  01b0980  stw 3, 192(30)
  01b0984  lfs 1, 24(27)
  01b0988  lis 3, 117
  01b098c  lfs 2, 31568(29)
  01b0990  lis 4, 114
  01b0994  lwz 5, 248(30)
  01b0998  fmuls 1, 2, 1
  01b099c  ori 5, 5, 8
  01b09a0  stw 5, 248(30)
  01b09a4  stfs 1, 196(30)
  01b09a8  lfs 1, 31600(3)
  01b09ac  lfs 2, -3052(4)
  01b09b0  fmuls 1, 1, 2
  01b09b4  stfs 1, 228(30)
  01b09b8  lfs 1, 16(31)
  01b09bc  stfs 1, 368(30)
  01b09c0  lfs 1, 20(31)
  01b09c4  stfs 1, 372(30)
  01b09c8  lfs 1, 24(31)
  01b09cc  stfs 1, 376(30)
  01b09d0  lfs 1, 28(31)
  01b09d4  stfs 1, 380(30)
  01b09d8  stb 28, 32(31)
  01b09dc  b 0x1b1e74
  01b09e0  lwz 3, 428(30)
  01b09e4  cmpwi 3, -1
  01b09e8  bt 2, 0x1b0a58
  01b09ec  lwz 4, 424(30)
  01b09f0  cmpwi 4, -1
  01b09f4  bt 2, 0x1b0a58
  01b09f8  lis 5, 151
  01b09fc  extsw 4, 3
  01b0a00  addic 3, 5, -25248
  01b0a04  bl 0x110b70
  01b0a08  nop
  01b0a0c  cmpwi 3, 0
  01b0a10  bt 2, 0x1b0a20
  01b0a14  li 3, 14
  01b0a18  stb 3, 32(31)
  01b0a1c  b 0x1b1e74
  01b0a20  lfs 1, 20(31)
  01b0a24  lfs 2, 20(29)
  01b0a28  lfs 3, 16(31)
  01b0a2c  fsubs 1, 1, 2
  01b0a30  lfs 2, 16(29)
  01b0a34  fsubs 2, 3, 2
  01b0a38  lis 3, 27
  01b0a3c  addi 3, 3, 1812
  01b0a40  fmuls 1, 1, 1
  01b0a44  fmadds 1, 2, 2, 1
  01b0a48  lfs 2, 28(3)
  01b0a4c  fsqrts 1, 1
  01b0a50  fcmpu 0, 1, 2
  01b0a54  bt 1, 0x1b1e74
  01b0a58  lfs 1, 16(29)
  01b0a5c  lfs 2, 16(31)
  01b0a60  addic 28, 31, 72
  01b0a64  lfs 3, 20(29)
  01b0a68  lfs 4, 20(31)
  01b0a6c  fsubs 1, 1, 2
  01b0a70  fsubs 2, 3, 4
  01b0a74  bl 0x5e8338
  01b0a78  nop
  01b0a7c  lis 3, 27
  01b0a80  lis 4, 114
  01b0a84  addi 3, 3, 1812
  01b0a88  lis 6, 114
  01b0a8c  addic 5, 30, 396
  01b0a90  lfs 2, 32(3)
  01b0a94  lfs 3, -3048(4)
  01b0a98  lfs 4, 36(3)
  01b0a9c  fmuls 2, 3, 2
  01b0aa0  lfs 5, -3052(6)
  01b0aa4  ori 3, 28, 0
  01b0aa8  fmuls 4, 5, 4
  01b0aac  fmr 3, 2
  01b0ab0  bl 0x10a2e0
  01b0ab4  nop
  01b0ab8  lwz 3, 356(30)
  01b0abc  cmpwi 3, 2
  01b0ac0  bt 2, 0x1b0be4
  01b0ac4  lfs 2, 20(31)
  01b0ac8  lfs 1, 20(29)
  01b0acc  lfs 4, 16(31)
  01b0ad0  fsubs 5, 2, 1
  01b0ad4  lfs 3, 16(29)
  01b0ad8  fsubs 6, 4, 3
  01b0adc  lis 3, 117
  01b0ae0  fmuls 5, 5, 5
  01b0ae4  fmadds 5, 6, 6, 5
  01b0ae8  lfs 6, 31596(3)
  01b0aec  fsqrts 5, 5
  01b0af0  fcmpu 0, 5, 6
  01b0af4  cror 6, 0, 2
  01b0af8  bt 6, 0x1b0b90
  01b0afc  fsubs 3, 3, 4
  01b0b00  lfs 31, 72(31)
  01b0b04  fsubs 2, 1, 2
  01b0b08  fmr 1, 3
  01b0b0c  bl 0x5e8338
  01b0b10  nop
  01b0b14  fmr 2, 1
  01b0b18  fmr 1, 31
  01b0b1c  bl 0x5026a0
  01b0b20  nop
  01b0b24  lis 3, 27
  01b0b28  addi 3, 3, 1812
  01b0b2c  lfs 2, 40(3)
  01b0b30  fcmpu 0, 1, 2
  01b0b34  cror 6, 1, 2
  01b0b38  bt 6, 0x1b1e74
  01b0b3c  li 3, 2
  01b0b40  lbz 4, 83(31)
  01b0b44  cmpwi 4, 3
  01b0b48  stb 3, 32(31)
  01b0b4c  bt 2, 0x1b1e74
  01b0b50  lis 3, 27
  01b0b54  lis 4, 114
  01b0b58  addi 3, 3, 1812
  01b0b5c  li 5, 0
  01b0b60  lfs 1, 44(3)
  01b0b64  lfs 2, -3056(4)
  01b0b68  ori 3, 31, 0
  01b0b6c  li 4, 3
  01b0b70  fmuls 1, 2, 1
  01b0b74  fctiwz 1, 1
  01b0b78  stfd 1, 512(1)
  01b0b7c  lwz 6, 516(1)
  01b0b80  extsw 6, 6
  01b0b84  bl 0xfddc0
  01b0b88  nop
  01b0b8c  b 0x1b1e74
  01b0b90  li 3, 5
  01b0b94  lbz 4, 83(31)
  01b0b98  cmpwi 4, 6
  01b0b9c  stb 3, 32(31)
  01b0ba0  bt 2, 0x1b1e74
  01b0ba4  lis 3, 27
  01b0ba8  lis 4, 114
  01b0bac  addi 3, 3, 1812
  01b0bb0  li 5, 0
  01b0bb4  lfs 1, 44(3)
  01b0bb8  lfs 2, -3056(4)
  01b0bbc  ori 3, 31, 0
  01b0bc0  fmuls 1, 2, 1
  01b0bc4  li 4, 6
  01b0bc8  fctiwz 1, 1
  01b0bcc  stfd 1, 512(1)
  01b0bd0  lwz 6, 516(1)
  01b0bd4  extsw 6, 6
  01b0bd8  bl 0xfddc0
  01b0bdc  nop
  01b0be0  b 0x1b1e74
  01b0be4  lwz 3, 392(30)
  01b0be8  cmpwi 3, 0
  01b0bec  bt 2, 0x1b1e74
  01b0bf0  li 3, 11
  01b0bf4  lbz 4, 83(31)
  01b0bf8  cmpwi 4, 1
  01b0bfc  stb 3, 32(31)
  01b0c00  bt 2, 0x1b1e74
  01b0c04  lis 3, 27
  01b0c08  lis 4, 114
  01b0c0c  addi 3, 3, 1812
  01b0c10  li 5, 0
  01b0c14  lfs 1, 48(3)
  01b0c18  lfs 2, -3056(4)
  01b0c1c  ori 3, 31, 0
  01b0c20  fmuls 1, 2, 1
  01b0c24  li 4, 1
  01b0c28  fctiwz 1, 1
  01b0c2c  stfd 1, 512(1)
  01b0c30  lwz 6, 516(1)
  01b0c34  extsw 6, 6
  01b0c38  bl 0xfddc0
  01b0c3c  nop
  01b0c40  b 0x1b1e74
  01b0c44  lbz 3, 83(31)
  01b0c48  cmpwi 3, 1
  01b0c4c  bt 2, 0x1b0c8c
  01b0c50  lis 3, 27
  01b0c54  lis 4, 114
  01b0c58  addi 3, 3, 1812
  01b0c5c  li 5, 0
  01b0c60  lfs 1, 52(3)
  01b0c64  lfs 2, -3056(4)
  01b0c68  ori 3, 31, 0
  01b0c6c  li 4, 1
  01b0c70  fmuls 1, 2, 1
  01b0c74  fctiwz 1, 1
  01b0c78  stfd 1, 512(1)
  01b0c7c  lwz 6, 516(1)
  01b0c80  extsw 6, 6
  01b0c84  bl 0xfddc0
  01b0c88  nop
  01b0c8c  lwz 4, 424(30)
  01b0c90  lis 3, 165
  01b0c94  lfs 1, 20(31)
  01b0c98  slwi 4, 4, 2
  01b0c9c  addic 3, 3, 7136
  01b0ca0  extsw 4, 4
  01b0ca4  lwzx 3, 3, 4
  01b0ca8  lfs 2, 16(31)
  01b0cac  lwz 4, 0(3)
  01b0cb0  slwi 4, 4, 4
  01b0cb4  addc 3, 3, 4
  01b0cb8  clrldi 3, 3, 32
  01b0cbc  lfs 3, 4(3)
  01b0cc0  lfs 4, 0(3)
  01b0cc4  fsubs 5, 1, 3
  01b0cc8  fsubs 6, 2, 4
  01b0ccc  lis 3, 27
  01b0cd0  addi 3, 3, 1812
  01b0cd4  fmuls 5, 5, 5
  01b0cd8  fmadds 30, 6, 6, 5
  01b0cdc  lfs 5, 56(3)
  01b0ce0  fsqrts 30, 30
  01b0ce4  fcmpu 0, 30, 5
  01b0ce8  cror 6, 1, 2
  01b0cec  bt 6, 0x1b0dc4
  01b0cf0  lfs 3, 16(29)
  01b0cf4  fsubs 3, 3, 2
  01b0cf8  lfs 2, 20(29)
  01b0cfc  fsubs 2, 2, 1
  01b0d00  fmr 1, 3
  01b0d04  bl 0x5e8338
  01b0d08  nop
  01b0d0c  lis 3, 27
  01b0d10  fmr 31, 1
  01b0d14  lis 4, 114
  01b0d18  addi 29, 3, 1812
  01b0d1c  addic 5, 30, 396
  01b0d20  ori 3, 31, 0
  01b0d24  lfs 4, 64(29)
  01b0d28  lfs 2, 60(29)
  01b0d2c  lfs 3, 24(29)
  01b0d30  lfs 5, -3052(4)
  01b0d34  fmuls 4, 5, 4
  01b0d38  bl 0xff2e8
  01b0d3c  nop
  01b0d40  fmr 1, 31
  01b0d44  lfs 2, 72(31)
  01b0d48  bl 0x5026a0
  01b0d4c  nop
  01b0d50  lfs 2, 68(29)
  01b0d54  fcmpu 0, 1, 2
  01b0d58  cror 6, 1, 2
  01b0d5c  bt 6, 0x1b1e74
  01b0d60  li 3, -1
  01b0d64  li 4, 0
  01b0d68  stw 3, 428(30)
  01b0d6c  stw 4, 396(30)
  01b0d70  lbz 3, 83(31)
  01b0d74  cmpwi 3, 0
  01b0d78  bt 2, 0x1b0db8
  01b0d7c  lis 3, 27
  01b0d80  lis 4, 114
  01b0d84  addi 3, 3, 1812
  01b0d88  li 5, 0
  01b0d8c  lfs 1, 72(3)
  01b0d90  lfs 2, -3056(4)
  01b0d94  ori 3, 31, 0
  01b0d98  fmuls 1, 2, 1
  01b0d9c  li 4, 0
  01b0da0  fctiwz 1, 1
  01b0da4  stfd 1, 512(1)
  01b0da8  lwz 6, 516(1)
  01b0dac  extsw 6, 6
  01b0db0  bl 0xfddc0
  01b0db4  nop
  01b0db8  li 3, 1
  01b0dbc  stb 3, 32(31)
  01b0dc0  b 0x1b1e74
  01b0dc4  fsubs 4, 4, 2
  01b0dc8  fsubs 2, 3, 1
  01b0dcc  fmr 1, 4
  01b0dd0  bl 0x5e8338
  01b0dd4  nop
  01b0dd8  lis 3, 27
  01b0ddc  lis 4, 114
  01b0de0  addi 29, 3, 1812
  01b0de4  addic 5, 30, 396
  01b0de8  ori 3, 31, 0
  01b0dec  lfs 4, 64(29)
  01b0df0  lfs 2, 76(29)
  01b0df4  lfs 5, 24(29)
  01b0df8  lfs 6, -3052(4)
  01b0dfc  fmr 3, 5
  01b0e00  fmuls 4, 6, 4
  01b0e04  bl 0xff2e8
  01b0e08  nop
  01b0e0c  lfs 1, 84(29)
  01b0e10  lfs 2, 72(31)
  01b0e14  lfs 3, 88(29)
  01b0e18  fadds 1, 2, 1
  01b0e1c  fsubs 5, 3, 2
  01b0e20  lfs 4, 92(29)
  01b0e24  li 3, 0
  01b0e28  addic 4, 30, 192
  01b0e2c  addic 5, 1, 192
  01b0e30  addic 6, 1, 208
  01b0e34  fsubs 3, 3, 1
  01b0e38  fsub 7, 2, 5
  01b0e3c  fsubs 6, 4, 1
  01b0e40  fsubs 4, 4, 2
  01b0e44  fsub 8, 1, 3
  01b0e48  fsel 2, 7, 5, 2
  01b0e4c  fsel 1, 8, 3, 1
  01b0e50  fsub 5, 4, 2
  01b0e54  lfs 3, 96(29)
  01b0e58  lfs 7, 80(29)
  01b0e5c  fsub 8, 6, 1
  01b0e60  fsel 2, 5, 4, 2
  01b0e64  lfs 4, 100(29)
  01b0e68  fsel 1, 8, 6, 1
  01b0e6c  fmuls 5, 2, 2
  01b0e70  fsub 6, 7, 30
  01b0e74  lfs 8, 104(29)
  01b0e78  fmuls 9, 1, 1
  01b0e7c  fmuls 10, 5, 2
  01b0e80  fsel 6, 6, 30, 7
  01b0e84  fmuls 7, 9, 1
  01b0e88  fmuls 12, 5, 10
  01b0e8c  fmadds 2, 10, 3, 2
  01b0e90  lfs 10, 108(29)
  01b0e94  stw 3, 200(1)
  01b0e98  ori 3, 31, 0
  01b0e9c  fmuls 11, 9, 7
  01b0ea0  fmadds 1, 7, 3, 1
  01b0ea4  fmuls 3, 5, 12
  01b0ea8  fmadds 2, 12, 4, 2
  01b0eac  fmuls 7, 9, 11
  01b0eb0  fmadds 1, 11, 4, 1
  01b0eb4  fmuls 4, 5, 3
  01b0eb8  fmadds 2, 3, 8, 2
  01b0ebc  fmuls 3, 9, 7
  01b0ec0  fmadds 1, 7, 8, 1
  01b0ec4  fmadds 2, 4, 10, 2
  01b0ec8  fmadds 3, 3, 10, 1
  01b0ecc  fmr 1, 31
  01b0ed0  fmuls 2, 2, 6
  01b0ed4  fmuls 3, 3, 6
  01b0ed8  stfs 2, 196(1)
  01b0edc  stfs 3, 192(1)
  01b0ee0  bl 0x101058
  01b0ee4  nop
  01b0ee8  b 0x1b1e74
  01b0eec  lfs 1, 16(29)
  01b0ef0  addic 28, 31, 72
  01b0ef4  lfs 2, 16(31)
  01b0ef8  lfs 3, 20(29)
  01b0efc  lfs 4, 20(31)
  01b0f00  fsubs 1, 1, 2
  01b0f04  fsubs 2, 3, 4
  01b0f08  bl 0x5e8338
  01b0f0c  nop
  01b0f10  lis 3, 27
  01b0f14  lis 4, 114
  01b0f18  addi 3, 3, 1812
  01b0f1c  lis 6, 114
  01b0f20  addic 5, 30, 396
  01b0f24  lfs 2, 32(3)
  01b0f28  lfs 3, -3048(4)
  01b0f2c  lfs 4, 36(3)
  01b0f30  fmuls 2, 3, 2
  01b0f34  lfs 5, -3052(6)
  01b0f38  ori 3, 28, 0
  01b0f3c  fmuls 4, 5, 4
  01b0f40  fmr 3, 2
  01b0f44  bl 0x10a2e0
  01b0f48  nop
  01b0f4c  lbz 3, 112(31)
  01b0f50  rlwinm 3, 3, 0, 30, 30
  01b0f54  cmpwi 3, 0
  01b0f58  bt 2, 0x1b1e74
  01b0f5c  ori 3, 31, 0
  01b0f60  bl 0x1aec28
  01b0f64  li 3, 3
  01b0f68  lbz 4, 83(31)
  01b0f6c  cmpwi 4, 5
  01b0f70  stb 3, 32(31)
  01b0f74  bt 2, 0x1b1e74
  01b0f78  lis 3, 27
  01b0f7c  lis 4, 114
  01b0f80  addi 3, 3, 1812
  01b0f84  li 5, 0
  01b0f88  lfs 1, 44(3)
  01b0f8c  lfs 2, -3056(4)
  01b0f90  ori 3, 31, 0
  01b0f94  fmuls 1, 2, 1
  01b0f98  li 4, 5
  01b0f9c  fctiwz 1, 1
  01b0fa0  stfd 1, 512(1)
  01b0fa4  lwz 6, 516(1)
  01b0fa8  extsw 6, 6
  01b0fac  bl 0xfddc0
  01b0fb0  nop
  01b0fb4  b 0x1b1e74
  01b0fb8  lbz 3, 112(31)
  01b0fbc  rlwinm 3, 3, 0, 30, 30
  01b0fc0  cmpwi 3, 0
  01b0fc4  bt 2, 0x1b1e74
  01b0fc8  lwz 3, 356(30)
  01b0fcc  cmpwi 3, 2
  01b0fd0  bt 2, 0x1b1078
  01b0fd4  li 3, 4
  01b0fd8  lbz 4, 83(31)
  01b0fdc  cmpwi 4, 4
  01b0fe0  stb 3, 32(31)
  01b0fe4  bt 2, 0x1b1024
  01b0fe8  lis 3, 27
  01b0fec  lis 4, 114
  01b0ff0  addi 3, 3, 1812
  01b0ff4  li 5, 0
  01b0ff8  lfs 1, 48(3)
  01b0ffc  lfs 2, -3056(4)
  01b1000  ori 3, 31, 0
  01b1004  fmuls 1, 2, 1
  01b1008  li 4, 4
  01b100c  fctiwz 1, 1
  01b1010  stfd 1, 512(1)
  01b1014  lwz 6, 516(1)
  01b1018  extsw 6, 6
  01b101c  bl 0xfddc0
  01b1020  nop
  01b1024  lis 3, 117
  01b1028  li 4, 31592
  01b102c  vspltisw 4, -1
  01b1030  lis 6, 27
  01b1034  li 5, 112
  01b1038  addi 6, 6, 1812
  01b103c  vslw 4, 4, 4
  01b1040  <unknown>
  01b1044  lis 3, 114
  01b1048  vcfsx 2, 2, 0
  01b104c  li 4, -3056
  01b1050  <unknown>
  01b1054  vspltw 3, 3, 0
  01b1058  <unknown>
  01b105c  li 3, 412
  01b1060  vaddfp 2, 2, 3
  01b1064  vmaddfp 2, 5, 2, 4
  01b1068  vctsxs 2, 2, 0
  01b106c  vspltw 2, 2, 0
  01b1070  stvewx 2, 3, 30
  01b1074  b 0x1b1e74
  01b1078  li 3, 1
  01b107c  lbz 4, 83(31)
  01b1080  cmpwi 4, 0
  01b1084  stb 3, 32(31)
  01b1088  bt 2, 0x1b1e74
  01b108c  lis 3, 27
  01b1090  lis 4, 114
  01b1094  addi 3, 3, 1812
  01b1098  li 5, 0
  01b109c  lfs 1, 48(3)
  01b10a0  lfs 2, -3056(4)
  01b10a4  ori 3, 31, 0
  01b10a8  li 4, 0
  01b10ac  fmuls 1, 2, 1
  01b10b0  fctiwz 1, 1
  01b10b4  stfd 1, 512(1)
  01b10b8  lwz 6, 516(1)
  01b10bc  extsw 6, 6
  01b10c0  bl 0xfddc0
  01b10c4  nop
  01b10c8  b 0x1b1e74
  01b10cc  lfs 1, 16(29)
  01b10d0  lfs 2, 16(31)
  01b10d4  addic 28, 31, 72
  01b10d8  lfs 3, 20(29)
  01b10dc  lfs 4, 20(31)
  01b10e0  fsubs 1, 1, 2
  01b10e4  fsubs 2, 3, 4
  01b10e8  bl 0x5e8338
  01b10ec  nop
  01b10f0  lis 3, 27
  01b10f4  lis 4, 114
  01b10f8  addi 3, 3, 1812
  01b10fc  lis 6, 114
  01b1100  addic 5, 30, 396
  01b1104  lfs 2, 32(3)
  01b1108  lfs 3, -3048(4)
  01b110c  lfs 4, 36(3)
  01b1110  fmuls 2, 3, 2
  01b1114  lfs 5, -3052(6)
  01b1118  ori 3, 28, 0
  01b111c  fmuls 4, 5, 4
  01b1120  fmr 3, 2
  01b1124  bl 0x10a2e0
  01b1128  nop
  01b112c  addic 3, 30, 412
  01b1130  bl 0x4fff60
  01b1134  nop
  01b1138  cmpwi 3, 0
  01b113c  bt 2, 0x1b119c
  01b1140  ori 3, 31, 0
  01b1144  bl 0x1aec28
  01b1148  li 3, 3
  01b114c  lbz 4, 83(31)
  01b1150  cmpwi 4, 5
  01b1154  stb 3, 32(31)
  01b1158  bt 2, 0x1b1e74
  01b115c  lis 3, 27
  01b1160  lis 4, 114
  01b1164  addi 3, 3, 1812
  01b1168  li 5, 0
  01b116c  lfs 1, 116(3)
  01b1170  lfs 2, -3056(4)
  01b1174  ori 3, 31, 0
  01b1178  fmuls 1, 2, 1
  01b117c  li 4, 5
  01b1180  fctiwz 1, 1
  01b1184  stfd 1, 512(1)
  01b1188  lwz 6, 516(1)
  01b118c  extsw 6, 6
  01b1190  bl 0xfddc0
  01b1194  nop
  01b1198  b 0x1b1e74
  01b119c  lfs 1, 20(31)
  01b11a0  lfs 2, 20(29)
  01b11a4  lfs 3, 16(31)
  01b11a8  fsubs 1, 1, 2
  01b11ac  lfs 2, 16(29)
  01b11b0  fsubs 2, 3, 2
  01b11b4  lis 3, 117
  01b11b8  fmuls 1, 1, 1
  01b11bc  fmadds 1, 2, 2, 1
  01b11c0  lfs 2, 31596(3)
  01b11c4  fsqrts 1, 1
  01b11c8  fcmpu 0, 1, 2
  01b11cc  cror 6, 1, 2
  01b11d0  bt 6, 0x1b1228
  01b11d4  li 3, 5
  01b11d8  lbz 4, 83(31)
  01b11dc  cmpwi 4, 6
  01b11e0  stb 3, 32(31)
  01b11e4  bt 2, 0x1b1e74
  01b11e8  lis 3, 27
  01b11ec  lis 4, 114
  01b11f0  addi 3, 3, 1812
  01b11f4  li 5, 0
  01b11f8  lfs 1, 44(3)
  01b11fc  lfs 2, -3056(4)
  01b1200  ori 3, 31, 0
  01b1204  li 4, 6
  01b1208  fmuls 1, 2, 1
  01b120c  fctiwz 1, 1
  01b1210  stfd 1, 512(1)
  01b1214  lwz 6, 516(1)
  01b1218  extsw 6, 6
  01b121c  bl 0xfddc0
  01b1220  nop
  01b1224  b 0x1b1e74
  01b1228  lwz 3, 392(30)
  01b122c  cmpwi 3, 0
  01b1230  bt 2, 0x1b1e74
  01b1234  li 3, 11
  01b1238  lbz 4, 83(31)
  01b123c  cmpwi 4, 1
  01b1240  stb 3, 32(31)
  01b1244  bt 2, 0x1b1e74
  01b1248  lis 3, 27
  01b124c  lis 4, 114
  01b1250  addi 3, 3, 1812
  01b1254  li 5, 0
  01b1258  lfs 1, 48(3)
  01b125c  lfs 2, -3056(4)
  01b1260  ori 3, 31, 0
  01b1264  li 4, 1
  01b1268  fmuls 1, 2, 1
  01b126c  fctiwz 1, 1
  01b1270  stfd 1, 512(1)
  01b1274  lwz 6, 516(1)
  01b1278  extsw 6, 6
  01b127c  bl 0xfddc0
  01b1280  nop
  01b1284  b 0x1b1e74
  01b1288  lfs 1, 16(29)
  01b128c  lfs 2, 16(31)
  01b1290  addic 28, 31, 72
  01b1294  lfs 3, 20(29)
  01b1298  lfs 4, 20(31)
  01b129c  fsubs 1, 1, 2
  01b12a0  fsubs 2, 3, 4
  01b12a4  bl 0x5e8338
  01b12a8  nop
  01b12ac  lis 3, 27
  01b12b0  lis 4, 114
  01b12b4  addi 29, 3, 1812
  01b12b8  lis 3, 114
  01b12bc  addic 5, 30, 396
  01b12c0  lfs 2, 32(29)
  01b12c4  lfs 3, -3048(3)
  01b12c8  lfs 4, 36(29)
  01b12cc  fmuls 2, 3, 2
  01b12d0  lfs 5, -3052(4)
  01b12d4  ori 3, 28, 0
  01b12d8  fmuls 4, 5, 4
  01b12dc  fmr 3, 2
  01b12e0  bl 0x10a2e0
  01b12e4  nop
  01b12e8  addic 5, 1, 224
  01b12ec  ori 3, 31, 0
  01b12f0  li 4, 0
  01b12f4  bl 0xf1114
  01b12f8  nop
  01b12fc  lfs 1, 16(31)
  01b1300  ori 3, 31, 0
  01b1304  lfs 2, 20(31)
  01b1308  stfs 1, 240(1)
  01b130c  lfs 1, 28(31)
  01b1310  stfs 2, 244(1)
  01b1314  stfs 1, 252(1)
  01b1318  lfs 1, 24(29)
  01b131c  lfs 2, 24(31)
  01b1320  fadds 1, 2, 1
  01b1324  stfs 1, 248(1)
  01b1328  bl 0xefe40
  01b132c  nop
  01b1330  lis 3, 151
  01b1334  fmr 2, 1
  01b1338  addic 3, 3, -25376
  01b133c  lfs 1, 72(31)
  01b1340  lbz 3, 8356(3)
  01b1344  cmpwi 3, 1
  01b1348  bf 2, 0x1b1370
  01b134c  lis 3, 27
  01b1350  addi 3, 3, 1812
  01b1354  lfs 3, 120(3)
  01b1358  fcmpu 0, 2, 3
  01b135c  cror 6, 1, 2
  01b1360  bt 6, 0x1b1370
  01b1364  lis 3, 117
  01b1368  lfs 3, 31604(3)
  01b136c  stfs 3, 88(31)
  01b1370  lis 3, 27
  01b1374  addi 3, 3, 1812
  01b1378  lfs 3, 120(3)
  01b137c  fcmpu 0, 2, 3
  01b1380  bt 0, 0x1b14b0
  01b1384  lis 3, 27
  01b1388  addi 3, 3, 1812
  01b138c  lfs 3, 124(3)
  01b1390  fcmpu 0, 2, 3
  01b1394  bt 1, 0x1b14b0
  01b1398  lis 3, 27
  01b139c  addi 3, 3, 1812
  01b13a0  lis 4, 16256
  01b13a4  lfs 2, 84(3)
  01b13a8  lfs 3, 88(3)
  01b13ac  fadds 2, 1, 2
  01b13b0  lfs 4, 92(3)
  01b13b4  fsubs 5, 3, 1
  01b13b8  fsubs 6, 4, 1
  01b13bc  addic 29, 1, 416
  01b13c0  li 5, 1
  01b13c4  addic 7, 1, 256
  01b13c8  fsubs 3, 3, 2
  01b13cc  fsub 7, 1, 5
  01b13d0  fsubs 4, 4, 2
  01b13d4  fsub 8, 2, 3
  01b13d8  fsel 1, 7, 5, 1
  01b13dc  lfs 5, 96(3)
  01b13e0  fsel 2, 8, 3, 2
  01b13e4  fsub 3, 6, 1
  01b13e8  fsub 8, 4, 2
  01b13ec  fsel 1, 3, 6, 1
  01b13f0  lfs 3, 100(3)
  01b13f4  lfs 6, 104(3)
  01b13f8  lfs 9, 108(3)
  01b13fc  lis 3, 17839
  01b1400  stw 4, 264(1)
  01b1404  ori 4, 31, 0
  01b1408  ori 3, 3, 57190
  01b140c  fsel 2, 8, 4, 2
  01b1410  fmuls 4, 1, 1
  01b1414  stw 3, 268(1)
  01b1418  ori 3, 29, 0
  01b141c  fmuls 7, 2, 2
  01b1420  fmuls 8, 4, 1
  01b1424  fmuls 10, 7, 2
  01b1428  fmuls 11, 4, 8
  01b142c  fmadds 1, 8, 5, 1
  01b1430  fmuls 8, 7, 10
  01b1434  fmadds 2, 10, 5, 2
  01b1438  fmuls 5, 4, 11
  01b143c  fmadds 1, 11, 3, 1
  01b1440  fmuls 10, 7, 8
  01b1444  fmadds 2, 8, 3, 2
  01b1448  fmuls 3, 4, 5
  01b144c  fmadds 1, 5, 6, 1
  01b1450  fmuls 4, 7, 10
  01b1454  fmadds 2, 10, 6, 2
  01b1458  fmadds 3, 3, 9, 1
  01b145c  fmr 1, 31
  01b1460  fmadds 2, 4, 9, 2
  01b1464  stfs 3, 260(1)
  01b1468  stfs 2, 256(1)
  01b146c  bl 0x10581c
  01b1470  nop
  01b1474  li 3, 0
  01b1478  lhz 8, 166(31)
  01b147c  li 6, 1
  01b1480  addic 4, 1, 240
  01b1484  ori 7, 31, 0
  01b1488  stb 3, 440(1)
  01b148c  sth 8, 442(1)
  01b1490  addic 5, 30, 512
  01b1494  stb 6, 441(1)
  01b1498  addic 3, 1, 224
  01b149c  ori 8, 29, 0
  01b14a0  li 9, 5
  01b14a4  ori 6, 4, 0
  01b14a8  bl 0x105d58
  01b14ac  nop
  01b14b0  lfs 1, 224(1)
  01b14b4  stfs 1, 512(30)
  01b14b8  lfs 1, 228(1)
  01b14bc  stfs 1, 516(30)
  01b14c0  lfs 1, 232(1)
  01b14c4  stfs 1, 520(30)
  01b14c8  lfs 1, 236(1)
  01b14cc  stfs 1, 524(30)
  01b14d0  lbz 3, 112(31)
  01b14d4  rlwinm 3, 3, 0, 30, 30
  01b14d8  cmpwi 3, 0
  01b14dc  bt 2, 0x1b1e74
  01b14e0  li 3, 6
  01b14e4  li 4, 1
  01b14e8  lbz 5, 83(31)
  01b14ec  cmpwi 5, 2
  01b14f0  stb 3, 32(31)
  01b14f4  stb 4, 188(31)
  01b14f8  bt 2, 0x1b1e74
  01b14fc  lis 3, 27
  01b1500  lis 4, 114
  01b1504  addi 3, 3, 1812
  01b1508  li 5, 0
  01b150c  lfs 1, 44(3)
  01b1510  lfs 2, -3056(4)
  01b1514  ori 3, 31, 0
  01b1518  fmuls 1, 2, 1
  01b151c  li 4, 2
  01b1520  fctiwz 1, 1
  01b1524  stfd 1, 512(1)
  01b1528  lwz 6, 516(1)
  01b152c  extsw 6, 6
  01b1530  bl 0xfddc0
  01b1534  nop
  01b1538  b 0x1b1e74
  01b153c  lbz 3, 112(31)
  01b1540  rlwinm 3, 3, 0, 30, 30
  01b1544  cmpwi 3, 0
  01b1548  bt 2, 0x1b1e74
  01b154c  lbz 3, 188(31)
  01b1550  lbz 4, 83(31)
  01b1554  stb 3, 32(31)
  01b1558  cmpwi 4, 0
  01b155c  bt 2, 0x1b1e74
  01b1560  lis 3, 27
  01b1564  lis 4, 114
  01b1568  addi 3, 3, 1812
  01b156c  li 5, 0
  01b1570  lfs 1, 48(3)
  01b1574  lfs 2, -3056(4)
  01b1578  ori 3, 31, 0
  01b157c  li 4, 0
  01b1580  fmuls 1, 2, 1
  01b1584  fctiwz 1, 1
  01b1588  stfd 1, 512(1)
  01b158c  lwz 6, 516(1)
  01b1590  extsw 6, 6
  01b1594  bl 0xfddc0
  01b1598  nop
  01b159c  b 0x1b1e74
  01b15a0  lfs 1, 16(29)
  01b15a4  lfs 2, 16(31)
  01b15a8  lfs 3, 20(29)
  01b15ac  lfs 4, 20(31)
  01b15b0  fsubs 1, 1, 2
  01b15b4  fsubs 2, 3, 4
  01b15b8  bl 0x5e8338
  01b15bc  nop
  01b15c0  lis 3, 27
  01b15c4  lis 4, 114
  01b15c8  addi 28, 3, 1812
  01b15cc  addic 5, 30, 396
  01b15d0  ori 3, 31, 0
  01b15d4  lfs 4, 32(28)
  01b15d8  lfs 2, 60(28)
  01b15dc  lfs 5, 24(28)
  01b15e0  lfs 6, -3052(4)
  01b15e4  fmr 3, 5
  01b15e8  fmuls 4, 6, 4
  01b15ec  bl 0xff2e8
  01b15f0  nop
  01b15f4  lfs 1, 84(28)
  01b15f8  lfs 2, 72(31)
  01b15fc  lfs 3, 88(28)
  01b1600  fadds 1, 2, 1
  01b1604  fsubs 5, 3, 2
  01b1608  lfs 4, 92(28)
  01b160c  li 27, 0
  01b1610  ori 3, 31, 0
  01b1614  addic 4, 30, 192
  01b1618  addic 5, 1, 272
  01b161c  fsubs 3, 3, 1
  01b1620  fsub 7, 2, 5
  01b1624  fsubs 6, 4, 1
  01b1628  fsubs 4, 4, 2
  01b162c  addic 6, 1, 288
  01b1630  fsub 8, 1, 3
  01b1634  fsel 2, 7, 5, 2
  01b1638  fsel 1, 8, 3, 1
  01b163c  fsub 5, 4, 2
  01b1640  lfs 3, 96(28)
  01b1644  fsub 7, 6, 1
  01b1648  fsel 2, 5, 4, 2
  01b164c  lfs 4, 100(28)
  01b1650  lfs 5, 104(28)
  01b1654  lfs 8, 108(28)
  01b1658  fsel 1, 7, 6, 1
  01b165c  fmuls 6, 2, 2
  01b1660  fmuls 7, 1, 1
  01b1664  fmuls 9, 6, 2
  01b1668  fmuls 10, 7, 1
  01b166c  fmuls 11, 6, 9
  01b1670  fmadds 2, 9, 3, 2
  01b1674  lfs 9, 80(28)
  01b1678  stw 27, 280(1)
  01b167c  fmuls 12, 7, 10
  01b1680  fmadds 1, 10, 3, 1
  01b1684  fmuls 3, 6, 11
  01b1688  fmadds 2, 11, 4, 2
  01b168c  fmuls 10, 7, 12
  01b1690  fmadds 1, 12, 4, 1
  01b1694  fmuls 4, 6, 3
  01b1698  fmadds 2, 3, 5, 2
  01b169c  fmuls 3, 7, 10
  01b16a0  fmadds 1, 10, 5, 1
  01b16a4  fmadds 2, 4, 8, 2
  01b16a8  fmadds 3, 3, 8, 1
  01b16ac  fmr 1, 31
  01b16b0  fmuls 2, 2, 9
  01b16b4  fmuls 3, 3, 9
  01b16b8  stfs 2, 276(1)
  01b16bc  stfs 3, 272(1)
  01b16c0  bl 0x101058
  01b16c4  nop
  01b16c8  lwz 3, 420(30)
  01b16cc  addic 26, 31, 16
  01b16d0  lfs 1, 128(28)
  01b16d4  extsw 3, 3
  01b16d8  ori 5, 26, 0
  01b16dc  ori 6, 26, 0
  01b16e0  bl 0x1145d8
  01b16e4  nop
  01b16e8  lwz 3, 420(30)
  01b16ec  addic 5, 29, 16
  01b16f0  extsw 3, 3
  01b16f4  addic 6, 1, 304
  01b16f8  ori 4, 26, 0
  01b16fc  bl 0xfc948
  01b1700  nop
  01b1704  cmpwi 3, 0
  01b1708  lwz 3, 392(30)
  01b170c  lbz 30, 83(31)
  01b1710  ori 4, 27, 0
  01b1714  lfs 1, 16(31)
  01b1718  lfs 31, 20(31)
  01b171c  bt 2, 0x1b1768
  01b1720  lfs 2, 308(1)
  01b1724  lfs 3, 304(1)
  01b1728  fsubs 2, 31, 2
  01b172c  fsubs 3, 1, 3
  01b1730  lfs 4, 24(31)
  01b1734  lfs 5, 312(1)
  01b1738  fsubs 4, 4, 5
  01b173c  lis 5, 27
  01b1740  fmuls 2, 2, 2
  01b1744  addi 5, 5, 1812
  01b1748  fmadds 2, 3, 3, 2
  01b174c  lfs 3, 132(5)
  01b1750  fmadds 2, 4, 4, 2
  01b1754  fsqrts 2, 2
  01b1758  fcmpu 0, 2, 3
  01b175c  cror 6, 1, 2
  01b1760  bt 6, 0x1b1768
  01b1764  li 4, 1
  01b1768  cmpwi 3, 0
  01b176c  cmpwi 1, 4, 0
  01b1770  bf 2, 0x1b1780
  01b1774  li 3, 13
  01b1778  stb 3, 32(31)
  01b177c  b 0x1b1e74
  01b1780  bt 6, 0x1b17d4
  01b1784  li 3, 12
  01b1788  cmpwi 30, 6
  01b178c  stb 3, 32(31)
  01b1790  bt 2, 0x1b1e74
  01b1794  lis 3, 27
  01b1798  lis 4, 114
  01b179c  addi 3, 3, 1812
  01b17a0  li 5, 0
  01b17a4  lfs 1, 44(3)
  01b17a8  lfs 2, -3056(4)
  01b17ac  ori 3, 31, 0
  01b17b0  fmuls 1, 2, 1
  01b17b4  li 4, 6
  01b17b8  fctiwz 1, 1
  01b17bc  stfd 1, 512(1)
  01b17c0  lwz 6, 516(1)
  01b17c4  extsw 6, 6
  01b17c8  bl 0xfddc0
  01b17cc  nop
  01b17d0  b 0x1b1e74
  01b17d4  lfs 2, 20(29)
  01b17d8  lfs 3, 16(29)
  01b17dc  fsubs 2, 31, 2
  01b17e0  fsubs 1, 1, 3
  01b17e4  lis 3, 117
  01b17e8  fmuls 2, 2, 2
  01b17ec  fmadds 1, 1, 1, 2
  01b17f0  lfs 2, 31596(3)
  01b17f4  fsqrts 1, 1
  01b17f8  fcmpu 0, 1, 2
  01b17fc  cror 6, 1, 2
  01b1800  bt 6, 0x1b1e74
  01b1804  li 3, 12
  01b1808  cmpwi 30, 6
  01b180c  stb 3, 32(31)
  01b1810  bt 2, 0x1b1e74
  01b1814  lis 3, 27
  01b1818  lis 4, 114
  01b181c  addi 3, 3, 1812
  01b1820  li 5, 0
  01b1824  lfs 1, 44(3)
  01b1828  lfs 2, -3056(4)
  01b182c  ori 3, 31, 0
  01b1830  fmuls 1, 2, 1
  01b1834  li 4, 6
  01b1838  fctiwz 1, 1
  01b183c  stfd 1, 512(1)
  01b1840  lwz 6, 516(1)
  01b1844  extsw 6, 6
  01b1848  bl 0xfddc0
  01b184c  nop
  01b1850  b 0x1b1e74
  01b1854  li 4, 0
  01b1858  addic 5, 1, 320
  01b185c  ori 3, 31, 0
  01b1860  bl 0xf1114
  01b1864  nop
  01b1868  lis 4, 27
  01b186c  lfs 1, 16(31)
  01b1870  ori 3, 31, 0
  01b1874  lfs 2, 20(31)
  01b1878  addi 29, 4, 1812
  01b187c  stfs 1, 336(1)
  01b1880  lfs 1, 28(31)
  01b1884  stfs 2, 340(1)
  01b1888  stfs 1, 348(1)
  01b188c  lfs 1, 136(29)
  01b1890  lfs 2, 24(31)
  01b1894  fadds 1, 2, 1
  01b1898  stfs 1, 344(1)
  01b189c  bl 0xefe40
  01b18a0  nop
  01b18a4  lfs 2, 120(29)
  01b18a8  fcmpu 0, 1, 2
  01b18ac  bt 0, 0x1b19e0
  01b18b0  lis 3, 27
  01b18b4  addi 3, 3, 1812
  01b18b8  lfs 2, 124(3)
  01b18bc  fcmpu 0, 1, 2
  01b18c0  bt 1, 0x1b19e0
  01b18c4  lis 3, 27
  01b18c8  lfs 1, 72(31)
  01b18cc  addi 3, 3, 1812
  01b18d0  lis 4, 16256
  01b18d4  lfs 2, 84(3)
  01b18d8  lfs 3, 88(3)
  01b18dc  fadds 2, 1, 2
  01b18e0  lfs 4, 92(3)
  01b18e4  fsubs 5, 3, 1
  01b18e8  fsubs 6, 4, 1
  01b18ec  addic 29, 1, 464
  01b18f0  li 5, 1
  01b18f4  addic 7, 1, 352
  01b18f8  fsubs 3, 3, 2
  01b18fc  fsub 7, 1, 5
  01b1900  fsubs 4, 4, 2
  01b1904  fsub 8, 2, 3
  01b1908  fsel 1, 7, 5, 1
  01b190c  lfs 5, 96(3)
  01b1910  fsel 2, 8, 3, 2
  01b1914  fsub 3, 6, 1
  01b1918  fsub 8, 4, 2
  01b191c  fsel 1, 3, 6, 1
  01b1920  lfs 3, 100(3)
  01b1924  lfs 6, 104(3)
  01b1928  lfs 9, 108(3)
  01b192c  lis 3, 17839
  01b1930  stw 4, 360(1)
  01b1934  ori 4, 31, 0
  01b1938  ori 3, 3, 57190
  01b193c  fsel 2, 8, 4, 2
  01b1940  fmuls 4, 1, 1
  01b1944  stw 3, 364(1)
  01b1948  ori 3, 29, 0
  01b194c  fmuls 7, 2, 2
  01b1950  fmuls 8, 4, 1
  01b1954  fmuls 10, 7, 2
  01b1958  fmuls 11, 4, 8
  01b195c  fmadds 1, 8, 5, 1
  01b1960  fmuls 8, 7, 10
  01b1964  fmadds 2, 10, 5, 2
  01b1968  fmuls 5, 4, 11
  01b196c  fmadds 1, 11, 3, 1
  01b1970  fmuls 10, 7, 8
  01b1974  fmadds 2, 8, 3, 2
  01b1978  fmuls 3, 4, 5
  01b197c  fmadds 1, 5, 6, 1
  01b1980  fmuls 4, 7, 10
  01b1984  fmadds 2, 10, 6, 2
  01b1988  fmadds 3, 3, 9, 1
  01b198c  fmr 1, 31
  01b1990  fmadds 2, 4, 9, 2
  01b1994  stfs 3, 356(1)
  01b1998  stfs 2, 352(1)
  01b199c  bl 0x10581c
  01b19a0  nop
  01b19a4  li 3, 0
  01b19a8  lhz 8, 166(31)
  01b19ac  li 6, 1
  01b19b0  addic 4, 1, 336
  01b19b4  ori 7, 31, 0
  01b19b8  stb 3, 488(1)
  01b19bc  sth 8, 490(1)
  01b19c0  addic 5, 30, 512
  01b19c4  stb 6, 489(1)
  01b19c8  addic 3, 1, 320
  01b19cc  ori 8, 29, 0
  01b19d0  li 9, 5
  01b19d4  ori 6, 4, 0
  01b19d8  bl 0x105d58
  01b19dc  nop
  01b19e0  lfs 1, 320(1)
  01b19e4  stfs 1, 512(30)
  01b19e8  lfs 1, 324(1)
  01b19ec  stfs 1, 516(30)
  01b19f0  lfs 1, 328(1)
  01b19f4  stfs 1, 520(30)
  01b19f8  lfs 1, 332(1)
  01b19fc  stfs 1, 524(30)
  01b1a00  lbz 3, 112(31)
  01b1a04  rlwinm 3, 3, 0, 30, 30
  01b1a08  cmpwi 3, 0
  01b1a0c  bt 2, 0x1b1e74
  01b1a10  li 3, 11
  01b1a14  lbz 4, 83(31)
  01b1a18  cmpwi 4, 1
  01b1a1c  stb 3, 32(31)
  01b1a20  bt 2, 0x1b1e74
  01b1a24  lis 3, 27
  01b1a28  lis 4, 114
  01b1a2c  addi 3, 3, 1812
  01b1a30  li 5, 0
  01b1a34  lfs 1, 48(3)
  01b1a38  lfs 2, -3056(4)
  01b1a3c  ori 3, 31, 0
  01b1a40  fmuls 1, 2, 1
  01b1a44  li 4, 1
  01b1a48  fctiwz 1, 1
  01b1a4c  stfd 1, 512(1)
  01b1a50  lwz 6, 516(1)
  01b1a54  extsw 6, 6
  01b1a58  bl 0xfddc0
  01b1a5c  nop
  01b1a60  b 0x1b1e74
  01b1a64  lfs 1, 368(30)
  01b1a68  lfs 2, 16(31)
  01b1a6c  lfs 3, 372(30)
  01b1a70  lfs 4, 20(31)
  01b1a74  fsubs 1, 1, 2
  01b1a78  fsubs 2, 3, 4
  01b1a7c  bl 0x5e8338
  01b1a80  nop
  01b1a84  lis 3, 27
  01b1a88  lis 4, 114
  01b1a8c  addi 29, 3, 1812
  01b1a90  addic 5, 30, 396
  01b1a94  ori 3, 31, 0
  01b1a98  lfs 4, 32(29)
  01b1a9c  lfs 2, 60(29)
  01b1aa0  lfs 5, 24(29)
  01b1aa4  lfs 6, -3052(4)
  01b1aa8  fmr 3, 5
  01b1aac  fmuls 4, 6, 4
  01b1ab0  bl 0xff2e8
  01b1ab4  nop
  01b1ab8  lfs 1, 84(29)
  01b1abc  lfs 30, 72(31)
  01b1ac0  lfs 2, 88(29)
  01b1ac4  fadds 1, 30, 1
  01b1ac8  lfs 3, 92(29)
  01b1acc  fsubs 4, 2, 30
  01b1ad0  li 3, 0
  01b1ad4  fsubs 2, 2, 1
  01b1ad8  fsub 6, 30, 4
  01b1adc  fsubs 5, 3, 1
  01b1ae0  fsubs 3, 3, 30
  01b1ae4  fsub 7, 1, 2
  01b1ae8  fsel 4, 6, 4, 30
  01b1aec  lfs 6, 96(29)
  01b1af0  fsel 1, 7, 2, 1
  01b1af4  fsub 2, 3, 4
  01b1af8  fsub 8, 5, 1
  01b1afc  fsel 2, 2, 3, 4
  01b1b00  lfs 3, 100(29)
  01b1b04  lfs 4, 104(29)
  01b1b08  lfs 9, 108(29)
  01b1b0c  fsel 1, 8, 5, 1
  01b1b10  fmuls 5, 2, 2
  01b1b14  fmuls 7, 1, 1
  01b1b18  fmuls 8, 5, 2
  01b1b1c  fmuls 10, 7, 1
  01b1b20  fmuls 11, 5, 8
  01b1b24  fmadds 2, 8, 6, 2
  01b1b28  lfs 8, 80(29)
  01b1b2c  fmuls 12, 7, 10
  01b1b30  fmadds 1, 10, 6, 1
  01b1b34  fmuls 6, 5, 11
  01b1b38  fmadds 2, 11, 3, 2
  01b1b3c  lfs 10, 20(31)
  01b1b40  lfs 11, 16(31)
  01b1b44  stw 3, 376(1)
  01b1b48  fmuls 13, 7, 12
  01b1b4c  fmadds 1, 12, 3, 1
  01b1b50  fmuls 3, 5, 6
  01b1b54  fmadds 2, 6, 4, 2
  01b1b58  fmuls 5, 7, 13
  01b1b5c  fmadds 1, 13, 4, 1
  01b1b60  fmadds 2, 3, 9, 2
  01b1b64  fmadds 1, 5, 9, 1
  01b1b68  fmuls 2, 2, 8
  01b1b6c  fmuls 1, 1, 8
  01b1b70  stfs 2, 372(1)
  01b1b74  stfs 1, 368(1)
  01b1b78  lfs 1, 368(30)
  01b1b7c  lfs 2, 372(30)
  01b1b80  fsubs 1, 1, 11
  01b1b84  fsubs 2, 2, 10
  01b1b88  bl 0x5e8338
  01b1b8c  nop
  01b1b90  fmr 2, 1
  01b1b94  fmr 1, 30
  01b1b98  bl 0x5026a0
  01b1b9c  nop
  01b1ba0  lfs 2, 140(29)
  01b1ba4  fcmpu 0, 1, 2
  01b1ba8  cror 6, 1, 2
  01b1bac  bt 6, 0x1b1bf0
  01b1bb0  ori 3, 31, 0
  01b1bb4  addic 4, 30, 192
  01b1bb8  fmr 1, 31
  01b1bbc  addic 5, 1, 368
  01b1bc0  addic 6, 1, 384
  01b1bc4  bl 0x101058
  01b1bc8  nop
  01b1bcc  lis 3, 27
  01b1bd0  lwz 4, 420(30)
  01b1bd4  addic 5, 31, 16
  01b1bd8  addi 6, 3, 1812
  01b1bdc  extsw 3, 4
  01b1be0  lfs 1, 128(6)
  01b1be4  ori 6, 5, 0
  01b1be8  bl 0x1145d8
  01b1bec  nop
  01b1bf0  lfs 1, 372(30)
  01b1bf4  lfs 2, 20(31)
  01b1bf8  lfs 3, 368(30)
  01b1bfc  fsubs 1, 1, 2
  01b1c00  lfs 2, 16(31)
  01b1c04  fsubs 2, 3, 2
  01b1c08  lfs 3, 376(30)
  01b1c0c  lfs 4, 24(31)
  01b1c10  fsubs 3, 3, 4
  01b1c14  fmuls 1, 1, 1
  01b1c18  fmadds 1, 2, 2, 1
  01b1c1c  fmadds 1, 3, 3, 1
  01b1c20  fsqrts 1, 1
  01b1c24  fcmpu 0, 1, 31
  01b1c28  cror 6, 1, 2
  01b1c2c  bt 6, 0x1b1e74
  01b1c30  li 3, 1
  01b1c34  lbz 4, 83(31)
  01b1c38  cmpwi 4, 0
  01b1c3c  stb 3, 32(31)
  01b1c40  bt 2, 0x1b1e74
  01b1c44  lis 3, 27
  01b1c48  lis 4, 114
  01b1c4c  addi 3, 3, 1812
  01b1c50  li 5, 0
  01b1c54  lfs 1, 48(3)
  01b1c58  lfs 2, -3056(4)
  01b1c5c  ori 3, 31, 0
  01b1c60  fmuls 1, 2, 1
  01b1c64  li 4, 0
  01b1c68  fctiwz 1, 1
  01b1c6c  stfd 1, 512(1)
  01b1c70  lwz 6, 516(1)
  01b1c74  extsw 6, 6
  01b1c78  bl 0xfddc0
  01b1c7c  nop
  01b1c80  b 0x1b1e74
  01b1c84  ori 3, 31, 0
  01b1c88  addic 4, 30, 96
  01b1c8c  bl 0x10b030
  01b1c90  nop
  01b1c94  ori 30, 3, 0
  01b1c98  rlwinm 3, 30, 0, 25, 25
  01b1c9c  cmpwi 3, 0
  01b1ca0  bt 2, 0x1b1cf8
  01b1ca4  li 3, 1
  01b1ca8  lbz 4, 83(31)
  01b1cac  cmpwi 4, 0
  01b1cb0  stb 3, 32(31)
  01b1cb4  bt 2, 0x1b1e74
  01b1cb8  lis 3, 27
  01b1cbc  lis 4, 114
  01b1cc0  addi 3, 3, 1812
  01b1cc4  li 5, 0
  01b1cc8  lfs 1, 44(3)
  01b1ccc  lfs 2, -3056(4)
  01b1cd0  ori 3, 31, 0
  01b1cd4  li 4, 0
  01b1cd8  fmuls 1, 2, 1
  01b1cdc  fctiwz 1, 1
  01b1ce0  stfd 1, 512(1)
  01b1ce4  lwz 6, 516(1)
  01b1ce8  extsw 6, 6
  01b1cec  bl 0xfddc0
  01b1cf0  nop
  01b1cf4  b 0x1b1e74
  01b1cf8  li 3, 288
  01b1cfc  and 3, 30, 3
  01b1d00  cmpwi 3, 0
  01b1d04  bt 2, 0x1b1e74
  01b1d08  ori 3, 31, 0
  01b1d0c  bl 0xefb38
  01b1d10  nop
  01b1d14  b 0x1b1e74
  01b1d18  addic 4, 30, 96
  01b1d1c  ori 3, 31, 0
  01b1d20  bl 0x10b030
  01b1d24  nop
  01b1d28  li 4, 352
  01b1d2c  and 3, 3, 4
  01b1d30  cmpwi 3, 0
  01b1d34  bt 2, 0x1b1e74
  01b1d38  lfs 1, 24(31)
  01b1d3c  lis 3, 27
  01b1d40  lfs 2, 16(31)
  01b1d44  li 11, -1
  01b1d48  fadds 1, 1, 31
  01b1d4c  lfs 3, 20(31)
  01b1d50  addi 6, 3, 1812
  01b1d54  stfs 2, 400(1)
  01b1d58  lfs 2, 28(31)
  01b1d5c  li 7, 1
  01b1d60  stfs 3, 404(1)
  01b1d64  li 12, 0
  01b1d68  stfs 2, 412(1)
  01b1d6c  addic 4, 30, 64
  01b1d70  addic 5, 1, 400
  01b1d74  fmr 4, 31
  01b1d78  ori 3, 31, 0
  01b1d7c  fmr 6, 31
  01b1d80  li 8, 5
  01b1d84  li 9, 2
  01b1d88  li 10, 4
  01b1d8c  stfs 1, 408(1)
  01b1d90  lfs 30, 144(6)
  01b1d94  lfs 3, 80(6)
  01b1d98  lfs 5, 120(6)
  01b1d9c  fmr 1, 30
  01b1da0  lfs 7, 124(6)
  01b1da4  fmr 2, 30
  01b1da8  std 11, 144(1)
  01b1dac  std 7, 160(1)
  01b1db0  std 7, 168(1)
  01b1db4  std 11, 176(1)
  01b1db8  std 12, 184(1)
  01b1dbc  bl 0x10e030
  01b1dc0  nop
  01b1dc4  lis 4, 161
  01b1dc8  addic 30, 31, 16
  01b1dcc  fmr 1, 30
  01b1dd0  addic 29, 4, 23856
  01b1dd4  addic 28, 31, 64
  01b1dd8  ori 3, 31, 0
  01b1ddc  li 4, 1702
  01b1de0  std 29, 112(1)
  01b1de4  ori 10, 29, 0
  01b1de8  std 29, 120(1)
  01b1dec  ori 5, 30, 0
  01b1df0  ori 6, 28, 0
  01b1df4  li 7, 0
  01b1df8  li 8, 0
  01b1dfc  bl 0x11a560
  01b1e00  nop
  01b1e04  std 29, 112(1)
  01b1e08  ori 3, 31, 0
  01b1e0c  std 29, 120(1)
  01b1e10  li 4, 1703
  01b1e14  fmr 1, 30
  01b1e18  ori 10, 29, 0
  01b1e1c  ori 5, 30, 0
  01b1e20  ori 6, 28, 0
  01b1e24  li 7, 0
  01b1e28  li 8, 0
  01b1e2c  bl 0x11a560
  01b1e30  nop
  01b1e34  ori 3, 31, 0
  01b1e38  std 29, 112(1)
  01b1e3c  li 4, 1704
  01b1e40  ori 10, 29, 0
  01b1e44  fmr 1, 30
  01b1e48  ori 5, 30, 0
  01b1e4c  std 29, 120(1)
  01b1e50  ori 6, 28, 0
  01b1e54  li 7, 0
  01b1e58  li 8, 0
  01b1e5c  bl 0x11a560
  01b1e60  nop
  01b1e64  ori 3, 31, 0
  01b1e68  bl 0xefb38
  01b1e6c  nop
  01b1e70  b 0x1b1e74
  01b1e74  ld 0, 608(1)
  01b1e78  mtlr 0
  01b1e7c  lfd 30, 576(1)
  01b1e80  lfd 31, 584(1)
  01b1e84  ld 26, 528(1)
  01b1e88  ld 27, 536(1)
  01b1e8c  ld 28, 544(1)
  01b1e90  ld 29, 552(1)
  01b1e94  ld 30, 560(1)
  01b1e98  ld 31, 568(1)
  01b1e9c  addi 1, 1, 592
  01b1ea0  blr
